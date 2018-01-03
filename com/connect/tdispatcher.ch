language asn;

#include "token.h"
#include "supervisor.h"
#include "../asn/decasn.h"
#include "../asnext/asnext.h"
#include "quickconnect.h"

#if 0
#   include "/usr/local/include/sockinet.h"
#else 
#   include "erlsock.h"
#endif

#define TRANSFER_FILE "transfer.asn"

#include "coding.h"
#include "inetutil.h"
#include "connect.h"

#if defined(QTDISPATCHER)
    PTREE   listInclude ;
#endif

// DecompAsn           *DecompAsn::ptDecomp = 0 ; // pt for asn decompiler
static asn          *pars_asn ; // an asn parser

// int                 prettyPrint = 0 ;          // is it just a pretty print
// for asn ( no use here)
static DecompAsn    decompAsn ; // asn misc functions
static PTREE        grammar ;   // grammar for message parsing

// main proc
// return : ok
int main ( int argc, char **argv )
{
    
    PTREE       message ;                   // message to send
    char        *messageContent ;           // content of message
    char        *messageContent1 ;          // content of message
    PTREE       octetTLV ;                  // encoding of tree as tlv
    PTREE       result ;                    // the decoded value
    PTREE       asn1Value ;                 // the asn1 value
    PTREE       modifiedTlv ;               // the tlv modified after interpretation
    PTREE       selector ;                  // message selector
    PTREE       input ;                     // entry as input
    DecompAsn   decompi ;                   // decomp asn instance
    int         lengthEncoded ;             // encoded length
    int         lengthEncoded1 ;            // encoded length
    int         localPort ;                 // address of local port
    const char  *srcAddr ;                  // local address
    char        *destAddr ;                 // dispatcher address
    EString     dispatcherName ;            // name of dispatcher 
    int         dispatcherLoop = 1000 ;     // number of loop for dispatcher 
    bool        senderMode = true ;         // in sender mode
    bool        receiverMode = true ;       // receiver mode
    bool        setSenderReceiver = false ; // tells if sender / receiver mode was set
    EString     bus("TDISPATCHER");         // bus for exchange
    const char  *nameInit = "tdispatcher*";
    int         nbArg = 1 ;
    const char  *realName = "";
    bool        foundSender = false ;
    bool        isQuiet = false ;
    
    while ( nbArg < argc ) {
        if ( !strcmp("-name", *(argv + nbArg)) ) {
            realName =  *(argv + nbArg + 1);
        }
        if ( !strcmp("-sender", *(argv + nbArg)) ) {
            foundSender =  true ;
        }
        nbArg++ ;
    }
    
    char    tabNameInit [512];
    
    strcpy((char *)&tabNameInit, nameInit);
    strcat((char *)&tabNameInit, realName);
    if ( foundSender ) 
        strcat((char *)&tabNameInit, "Sender");
    
    // initialize meta
    MetaInit((char *)&tabNameInit);
    SwitchLang("asn");
    {
        
        // get dest address if necessary
        nbArg          =  1 ; // current arg
        
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
                } else if ( currArg == "-sender" ) {
                    senderMode =  true ;
                    if ( !setSenderReceiver ) {
                        setSenderReceiver =  true ;
                        receiverMode      =  false ;
                    }
                } else if ( currArg == "-receiver" ) {
                    receiverMode =  true ;
                    if ( !setSenderReceiver ) {
                        setSenderReceiver =  true ;
                        senderMode        =  false ;
                    }
                } else if ( currArg == "-bus" ) {
                    bus =  *(argv + nbArg++);
                } else if ( currArg == "-quiet" ) {
                    isQuiet =  true ;
                } else {
                    EString errorMessage ;
                    errorMessage =  "Usage tdispatcher [-connect inet1 inet2 | -name name | -loop nb | -receiver | -sender | -bus bus | -quiet ]\n";
                    _write(2, errorMessage.c_str(), errorMessage.length());
                    exit(0);
                }
            }
        } else {
            srcAddr  =  "127.0.0.1";
            destAddr =  (char *)0 ;
        }
#       ifndef QTDISPATCHER
            Connection  connection ;  // first connection
            Connection  connection1 ; // second connection
#       else 
            QConnection connection ;  // first connection
            QConnection connection1 ; // second connection
#       endif
        
        // initialize decompasn pt
        DecompAsn::ptDecomp =  &decompi ;
        pars_asn            =  new asn ;
        
        // DisplayTime("start");
        EString name1 = dispatcherName + "1";
        EString semName = dispatcherName + "access_";
        if ( receiverMode ) {
            connection1.Open(name1.c_str(), srcAddr, destAddr);
        }
        if ( senderMode ) {
            connection.Open(dispatcherName.c_str(), srcAddr, destAddr);
        }
#       ifndef QTDISPATCHER
            {
                if ( senderMode ) {
                    connection.OpenChannel(bus.c_str(), true).Syntax(bus.c_str(), TRANSFER_FILE);
                }
                if ( receiverMode ) {
                    connection1.OpenChannel(bus.c_str()).Syntax(bus.c_str(), TRANSFER_FILE);
                }
            }
#       else 
            {
                GenGramm    *pTransfer ;
                pTransfer =  new GenGramm ;
                EString transferName("transfer");
                if ( !pTransfer->LoadGramm(transferName, EString((char *)&tabNameInit)) ) 
                    MetaExit(3, "Cannot load transfer.dll");
#               ifndef HAS_POSIX
                    DWORD               ident ;    // ident 
                    SECURITY_ATTRIBUTES security ; // security
                    security.nLength              =  sizeof(SECURITY_ATTRIBUTES);
                    security.lpSecurityDescriptor =  0 ;
                    security.bInheritHandle       =  true ;
                    HANDLE  handle ;
#               else 
                    HANDLE_SEMAPHORE_POSIX  handle ;
#               endif
                
                // creates semaphore
                handle =  CreateSemaphore(&security, 0, 1, semName.c_str());
#               if defined(HAS_POSIX)
                    {
                        if ( senderMode ) 
                            SEM_INIT(handle, 0);
                    }
#               else 
                    {
                        EString initString("initValue : ");
                        long    initValue ;
                        ReleaseSemaphore(handle, 0, &initValue);
                        initString += CompactItoa(initValue);
                        DisplayTime(initString.c_str());
                        if ( senderMode ) 
                            while ( initValue-- ) {
                                DisplayTime("oneLoop");
                                WaitForSingleObject(handle, 10);
                            }
                    }
#               endif
                
                // open channels
                EString amessage("val : ");
                long    val ;
                if ( receiverMode ) 
                    amessage += " receiver : ";
                else 
                    amessage += " sender : ";
#               if defined(HAS_POSIX)
                    {
                        amessage += CompactItoa(SEM_VAL(handle));
                    }
#               else 
                    {
                        ReleaseSemaphore(handle, 0, &val);
                        amessage += CompactItoa(val);
                    }
#               endif
                DisplayTime(amessage.c_str());
                if ( receiverMode ) {
                    connection1.OpenChannel(bus.c_str()).Syntax(bus.c_str(), pTransfer);
                    SLEEP(1);
                    ReleaseSemaphoreU(handle, 1, (long *)0);
                }
                if ( senderMode ) {
                    connection.OpenChannel(bus.c_str(), true).Syntax(bus.c_str(), pTransfer);
                    if ( WaitForSingleObject(handle, 30000) != WAIT_OBJECT_0 ) {
                        DisplayTime("Error getting start socket");
                        return 1 ;
                    }
                    
                    // for setting pvFirstDispatMem by receiving version
                    // otherwise no deconnection
                    connection.Receive(true);
                }
                amessage =  "val : ";
                if ( receiverMode ) 
                    amessage += " receiver : ";
                else 
                    amessage += " sender : ";
#               if defined(HAS_POSIX)
                    amessage += CompactItoa(SEM_VAL(handle));
#               else 
                    ReleaseSemaphore(handle, 0, &val);
                    amessage += CompactItoa(val);
#               endif
                CloseHandle(handle);
                DisplayTime(amessage.c_str());
            }
#       endif
        int nbCompteur = 10 ; // loop counter
#       if 0
            long    histid1, histid2 ;
            long    orig_size, last_size ;
            orig_size =  malloc_inuse(&histid1);
#       endif
        time_t  initTime = time(0);
        nbCompteur =  dispatcherLoop ;
        while ( nbCompteur-- ) {
            
            // SLEEP(1);
            // write message number
            char    message1 [50];
            sprintf(message1, "%04d ", nbCompteur);
            if ( !isQuiet ) {
                WriteString(message1);
                if ( !receiverMode ) 
                    WriteString("\n") 
            }
            
            // send event 
            char    strSend [50];
            sprintf(strSend, "AFFA%04d", nbCompteur);
            if ( senderMode ) {
                PTREE   mess = parse (test $(<STRING,MakeString(strSend)>));
                connection.Send(bus.c_str(), mess);
            }
            
            // set time to look
            {
                ::timeval   tval ;
                tval.tv_sec  =  1 ;
                tval.tv_usec =  0 ;
                connection1.TimeVal(tval);
            }
            
            // receiving event
            if ( receiverMode ) {
                message =  connection1.Receive(true);
                while ( message == () || connection1.SenderName() != dispatcherName ) {
                    message =  connection1.Receive(true);
                    if ( time(0) - initTime > 360 ) 
                        return 1 ;
                }
                
                // look if mesage is correct
                {
                    if ( !strcmp(Value(InetUtil::GetNamedValue("test", message)), strSend) ) {
                        if ( !isQuiet ) {
                            WriteString("ok\n");
                        }
                    } else 
                        WriteString("nok\n") 
#                   if 0
                        
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
#                   endif
                }
            }
        }
        output =  2 ;
        " starting long" <NL>
        output =  1 ;
        if ( dispatcherLoop == 1000 ) 
            nbCompteur =  /* 1000 */ 10 ;
        else 
            nbCompteur =  0 ;
#       define TESTSIZE 100000
        char    strSend [TESTSIZE];
        char    *ptrStrSend = strSend + TESTSIZE - 1 ;
        *ptrStrSend-- =  '\0';
        
        // initalize pseudo random string    
        for (; ptrStrSend >= strSend ; ptrStrSend-- ) {
#           if defined(RANDOM_3)
                *ptrStrSend =  'a' + random(26);
#           elif defined(RANDOM_2)
                *ptrStrSend =  'a' + rand() % 26 ;
#           else 
                *ptrStrSend =  'a' + random() % 26 ;
#           endif
        }
        initTime =  time(0);
        
        // make test
        while ( nbCompteur-- ) {
            
            // write message number
            char    message1 [50];
            sprintf(message1, "%04d ", nbCompteur);
            WriteString(message1);
            if ( !receiverMode ) 
                WriteString("\n") 
            
            // send event 
            memcpy(strSend, message1, strlen(message1));
            if ( senderMode ) {
                {
                    PTREE   mess = parse (test $(<STRING,MakeString(strSend)>));
                    
                    // DisplayTime("avant send");
                    connection.Send(bus.c_str(), mess); // DisplayTime("apres send");
                }
            }
            
            // WriteString("half\n");
            // receiving event
            if ( receiverMode ) {
                message =  connection1.Receive(true);
                while ( message == () || connection1.SenderName() != dispatcherName ) {
                    message =  connection1.Receive(true);
                    if ( time(0) - initTime > 360 ) 
                        return 1 ;
                }
                
                // DisplayTime("apres receive");
                // look if mesage is correct
                if ( 0 ) {
                    WriteString("ok\n");
                } else {
                    if ( !strcmp(Value(InetUtil::GetNamedValue("test", message)), strSend) ) 
                        WriteString("ok\n") 
                    else 
                        WriteString("nok\n") 
                    if ( 0 ) {
                        char    *res2 = Value(InetUtil::GetNamedValue("test", message));
                        int     len1 = strlen(strSend);
                        int     len2 = strlen(res2);
                    }
#                   if 0
                        
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
#                   endif
                }
            }
        }
        <NL>
        if ( receiverMode ) 
            DisplayTime("before receiver close");
        else 
            DisplayTime("before sender close");
        
        // DisplayTime("before close");
        connection.CloseChannels();
        connection1.CloseChannels(); // DisplayTime("after close");
    }
    if ( receiverMode ) 
        DisplayTime("before receiver end");
    else 
        DisplayTime("before sender end");
    
    // return ok
    MetaExit(0, "The End\n");
}


