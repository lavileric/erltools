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

DecompAsn   *DecompAsn::ptDecomp = 0 ;   // pt for asn decompiler
static asn  *pars_asn ;                  // an asn parser
int         prettyPrint = 0 ;            // is it just a pretty print
                                         // for asn ( no use here)

// must be set before parsing
char        *parseLanguage = (char *)0 ; // the parse language

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
    PTREE       selector ;        // selector of message
    PTREE       messContent ;     // content of message
    
    // initialize decompasn pt
    DecompAsn::ptDecomp =  &decompAsn ;
    pars_asn            =  new asn ;
    
    // initialize meta
    MetaInit();
    SwitchLang("asn");
    
    // open connection
    connection.Open("app2").OpenChannel("T").Syntax("T", TRANSFER_FILE);
#   if 0
        
        long    histid1 ;   // malloc snapshot
        long    histid2 ;   // malloc snapshot
        long    orig_size ; // original size of malloc zone
        long    last_size ; // last size of malloc zone
        
        orig_size =  malloc_inuse(&histid1);
#   endif
    while ( 1 ) {
        
        // receive message
        message =  connection.Receive(true);
        
        // make response
        if ( message ) {
            PTREE   content ;   // content
            PTREE   reference ; // reference
            
            // decode content
            content   =  InetUtil::GetNamed("content", message);
            reference =  InetUtil::GetNamed("reference", message);
            
            // print it
            EString received = " Received : "; // for printing
            received =  received + Value(content [2]) + " -- reference " + Value(reference [2]) + "\n";
            _write(2, (char *)(const char *)received, received.length());
            
            // compute new message
            char    *receivedString ; // new content
            receivedString =  (char *)(const char *)received ;
            PTREE   numb = copytree(reference [2]); // new ref
            message =  parse (
                hello {
                    content $(<STRING, MakeString(receivedString)>),
                    reference $(<NUMB, numb>)
                }
            );
            
            // send it
            connection.Send("T", message);
        } else {
            MetaExit(2, "Invalid Message \n");
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
                    printf("nothing %d \n", last_size - orig_size);
                malloc_list(2, histid1, histid2); // orig_size = last_size ;
                
                // histid1 = histid2 ;
            }
#       endif
    }
    <NL>
    
    // return ok
    MetaExit(0, "The End\n");
}


