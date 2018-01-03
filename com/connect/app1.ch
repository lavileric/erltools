language asn;

#include "token.h"
#include "supervisor.h"
#include "../asn/decasn.h"
#include "../asnext/asnext.h"
#include "erlsock.h"
#include "coding.h"
#include "inetutil.h"
#include "connect.h"
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

#define TRANSFER_FILE "transfer.asn"

DecompAsn       *DecompAsn::ptDecomp = 0 ;   // pt for asn decompiler
static asn      *pars_asn ;                  // an asn parser
int             prettyPrint = 0 ;            // is it just a pretty print
                                             // for asn ( no use here)
static PTREE    grammar ;                    // grammar for message parsing

// must be set before parsing
char            *parseLanguage = (char *)0 ; // the parse language

// parser entry for chopb as a C prog for a whole prog
// parameters :
//             error_free : tell if exit on error
// return : parsed tree    
static  PPTREE getTree ( int error_free )
{
    return asn().program(error_free);
}

// main proc
// return : ok
void main ()
{
    
    PTREE       message ;         // message to send
    char        *messageContent ; // content of message
    int         lengthEncoded ;   // encoded length
    PTREE       octetTLV ;        // encoding of tree as tlv
    DecompAsn   decompAsn ;       // decomp asn instance
    Connection  connection ;      // first connection
    PTREE       selector ;        // selector
    PTREE       messContent ;     // content of message    
    
    // initialize decompasn pt
    DecompAsn::ptDecomp =  &decompAsn ;
    pars_asn            =  new asn ;
    
    // initialize meta
    MetaInit();
    SwitchLang("asn");
    
    // open connection
    connection.Open("app1").OpenChannel("T").Syntax("T", TRANSFER_FILE);
#   if 0
        
        long    histid1 ;   // malloc snapshot
        long    histid2 ;   // malloc snapshot
        long    orig_size ; // original size of malloc zone
        long    last_size ; // last size of malloc zone
        
        orig_size =  malloc_inuse(&histid1);
#   endif
    
    int nbCompteur = 1000 ; // loop counter
    
    while ( nbCompteur-- ) {
        char    *transmit = "Text of message";  // message to be send
        char    content [50];                   // store counter as a string
        sprintf(content, "%d", nbCompteur);
        
        // compute new message
        message =  parse (
            hello {
                       content $(<STRING,MakeString(transmit)>),
                       reference $(<NUMB,MakeString(content)>)
            }
        );
        
        // send it
        connection.Send("T", message);
        
        // receive reponse
        message =  connection.Receive(true);
        
        // print it
        {
            PTREE   content ;   // content
            PTREE   reference ; // reference
            if ( message ) {
                
                // secate message
                content   =  InetUtil::GetNamed("content", message);
                reference =  InetUtil::GetNamed("reference", message);
                
                // print it
                EString received = " Received : "; // for printing
                received =  received + Value(content [2]) + " -- reference " + Value(reference [2]) + "\n";
                _write(2, (char *)(const char *)received, received.length());
            } else {
                MetaExit(2, "Invalid Message \n");
            }
        }
#       if 0
            
            // check size 
            {
                message     =  ();
                selector    =  ();
                messContent =  ();
                ClearStoreRef();
                last_size =  malloc_inuse(&histid2);
                if ( last_size > orig_size ) 
                    malloc_list(2, histid1, histid2);
                else 
                    printf("nothing\n");
                //orig_size = last_size ;
                //histid1 = histid2 ;
            }
#       endif
    }
    <NL>
    
    // return ok
    exit(0);
}


