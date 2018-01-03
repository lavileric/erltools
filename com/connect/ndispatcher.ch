language asn;

#include "token.h"
#include "supervisor.h"
#include "../asn/decasn.h"
#include "../asnext/asnext.h"

#if 0
#   include "/usr/local/include/sockinet.h"
#else 
#   include "erlsock.h"
#endif

#define TRANSFER_FILE "transfer.asn"

#include "coding.h"
#include "inetutil.h"
#include "connect.h"

DecompAsn           *DecompAsn::ptDecomp = 0 ; // pt for asn decompiler
static asn          *pars_asn ;                // an asn parser
int                 prettyPrint = 0 ;          // is it just a pretty print
                                               // for asn ( no use here)
static DecompAsn    decompAsn ;                // asn misc functions
static PTREE        grammar ;                  // grammar for message parsing

// main proc
// return : ok
int main ( int argc, char **argv )
{
    
    PTREE       message ;               // message to send
    char        *messageContent ;       // content of message
    char        *messageContent1 ;      // content of message
    PTREE       octetTLV ;              // encoding of tree as tlv
    PTREE       result ;                // the decoded value
    PTREE       asn1Value ;             // the asn1 value
    PTREE       modifiedTlv ;           // the tlv modified after interpretation
    PTREE       selector ;              // message selector
    PTREE       input ;                 // entry as input
    DecompAsn   decompi ;               // decomp asn instance
    int         lengthEncoded ;         // encoded length
    int         lengthEncoded1 ;        // encoded length
    int         localPort ;             // address of local port
    Connection  connection ;            // first connection
    Connection  connection1 ;           // second connection
    char        *srcAddr ;              // local address
    char        *destAddr ;             // dispatcher address
    EString     dispatcherName ;        // name of dispatcher 
    int         dispatcherLoop = 1000 ; // number of loop for dispatcher 
    
    // get dest address if necessary
    int         nbArg = 1 ;             // current arg
    
    // set name
    dispatcherName =  "mon-testeur";
    if ( argc >= 2 ) {
        srcAddr  =  "127.0.0.1";
        destAddr =  (char *)0 ;
        while ( nbArg < argc ) {
            EString currArg ; // current argument
            currArg =  *(argv + nbArg++);
            if ( currArg == "-connect" ) {
                
                // get addresses
                srcAddr  =  *(argv + nbArg++);
                destAddr =  *(argv + nbArg++);
            } else if ( currArg == "-name" ) {
                dispatcherName =  *(argv + nbArg++);
            } else if ( currArg == "-loop" ) {
                dispatcherLoop =  atoi(*(argv + nbArg++));
            } else {
                EString errorMessage ;
                errorMessage =  "Usage tdispatcher [-connect inet1 inet2 | -name name | -loop nb ]\n";
                _write(2, errorMessage.c_str(), errorMessage.length());
                exit(0);
            }
        }
    } else {
        srcAddr  =  "127.0.0.1";
        destAddr =  (char *)0 ;
    }
    
    // initialize decompasn pt
    DecompAsn::ptDecomp =  &decompi ;
    pars_asn            =  new asn ;
    
    // initialize meta
    MetaInit();
    SwitchLang("asn");
    
    EString name1 = dispatcherName + "1";
    int     i = 0 ;
    
    while ( i++ > -1 ) {
        EString state("Opening connection ");
        state += CompactItoa(i);
        state += "\n";
        _write(2, state.c_str(), state.length());
        Connection  *pConnection = new Connection ;
        EString     connectionName("connect-");
        connectionName += CompactItoa(i);
        pConnection->Open(connectionName.c_str(), srcAddr, destAddr);
        pConnection->OpenChannel("TDISPATCHER").Syntax("TDISPATCHER", TRANSFER_FILE);
    }
    return ;
    
    int nbCompteur = 10 ; // loop counter
    
#   if 0
        
        long    histid1, histid2 ;
        long    orig_size, last_size ;
        
        orig_size =  malloc_inuse(&histid1);
#   endif
    nbCompteur =  dispatcherLoop ;
    while ( nbCompteur-- ) {
        
        // write message number
        char    message1 [50];
        sprintf(message1, "%04d ", nbCompteur);
        WriteString(message1);
        
        // send event 
        char    strSend [50];
        sprintf(strSend, "AFFA%04d", nbCompteur);
        {
            PTREE   mess = parse (test $(<STRING,MakeString(strSend)>));
            connection.Send("TDISPATCHER", mess);
        }
        
        // set time to look
        {
            struct timeval tval ;
            tval.tv_sec  =  1 ;
            tval.tv_usec =  0 ;
            connection1.TimeVal(tval);
        }
        
        // receiving event
        message =  connection1.Receive(true);
        while ( message == () || connection1.SenderName() != dispatcherName ) {
            message =  connection1.Receive(true);
        }
        
        // look if mesage is correct
        {
            if ( !strcmp(Value(InetUtil::GetNamedValue("test", message)), strSend) ) 
                WriteString("ok\n") 
            else 
                WriteString("nok\n") 
#           if 0
                
                // check size 
                {
                    message =  ();
                    ClearStoreRef();
                    last_size =  malloc_inuse(&histid2);
                    if ( last_size > orig_size ) 
                        malloc_list(2, histid1, histid2);
                    else 
                        printf("nothing\n");
                    orig_size =  last_size ;
                    histid1   =  histid2 ;
                }
#           endif
        }
    }
    output =  2 ;
    " starting long" <NL>
    output =  1 ;
    if ( dispatcherLoop == 1000 ) 
        nbCompteur =  /* 1000 */ 10 ;
    else 
        nbCompteur =  0 ;
#   define TESTSIZE 100000
    
    char    strSend [TESTSIZE];
    char    *ptrStrSend = strSend + TESTSIZE - 1 ;
    
    *ptrStrSend-- =  '\0';
    
    // initalize pseudo random string    
    for (; ptrStrSend >= strSend ; ptrStrSend-- ) {
#       if defined(RANDOM_3)
            *ptrStrSend =  'a' + random(26);
#       elif defined(RANDOM_2)
            *ptrStrSend =  'a' + rand() % 26 ;
#       else 
            *ptrStrSend =  'a' + random() % 26 ;
#       endif
    }
    
    // make test
    while ( nbCompteur-- ) {
        
        // write message number
        char    message1 [50];
        sprintf(message1, "%04d ", nbCompteur);
        WriteString(message1);
        
        // send event 
        memcpy(strSend, message1, strlen(message1));
        {
            PTREE   mess = parse (test $(<STRING,MakeString(strSend)>));
            connection.Send("TDISPATCHER", mess);
        }
        
        // receiving event
        message =  connection1.Receive(true);
        while ( message == () || connection1.SenderName() != dispatcherName ) {
            message =  connection1.Receive(true);
        }
        
        // look if mesage is correct
        {
            if ( !strcmp(Value(InetUtil::GetNamedValue("test", message)), strSend) ) 
                WriteString("ok\n") 
            else 
                WriteString("nok\n") 
#           if 0
                
                // check size 
                {
                    message =  ();
                    ClearStoreRef();
                    last_size =  malloc_inuse(&histid2);
                    if ( last_size > orig_size ) 
                        malloc_list(2, histid1, histid2);
                    else 
                        printf("nothing\n");
                    orig_size =  last_size ;
                    histid1   =  histid2 ;
                }
#           endif
        }
    }
    <NL>
    connection.CloseChannels();
    connection1.CloseChannels();
    
    // return ok
    MetaExit(0, "The End\n");
}


