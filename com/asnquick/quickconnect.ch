language asn;

#include "quickconnect.h"
#include <time.h>

#ifdef FOR_METACHOP
    PTREE   pvSendEvent ;                // ptree sending event
    PTREE   pvSendEventName ;            // ptree sending event
    PTREE   pvSendEventPco ;             // ptree sending event
    PTREE   pvSendEventContent ;         // ptree sending event
    PTREE   pvSendEventChunk ;           // idem
    PTREE   pvSendEventChunkName ;       // ptree sending event
    PTREE   pvSendEventChunkPco ;        // ptree sending event
    PTREE   pvSendEventChunkContent ;    // ptree sending event
    PTREE   pvSendEventChunkEnd ;        // idem
    PTREE   pvSendEventChunkEndName ;    // ptree sending event
    PTREE   pvSendEventChunkEndPco ;     // ptree sending event
    PTREE   pvSendEventChunkEndContent ; // ptree sending event
    PTREE   pvGetEvent ;                 // idem
    PTREE   pvGetEventName ;             // idem
    PTREE   pvGetEventBlocked ;          // idem
    PTREE   pvGetEventBlockedName ;      // idem
#endif

// Open : opening of a connection under a name
// parameters :
//             name : name of the connection
//             locAddr : local ip address
//             addr : IP address where to connect
//             port : port where to connect
//             maxTry : number max of try on dispatcher
// return : the object
MetaConnection &QConnection::Open ( const EString &name, const char *locAddr, const char *addr, int port, int maxTry )
{
    
    int         localPort = 0 ;       // number for local port
    PTREE       message ;             // message to send
    char        *messageContent ;     // content of message
    int         lengthEncoded ;       // encoded length
    PTREE       grammar ;             // grammar used for speaking with dispatcher
    osockinet   *pOsin ;              // output socket
    isockinet   *pIsin ;              // input socket
    int         keepPort = port ;     // keep port
    int         keepMaxTry = maxTry ; // keep max try
    
    // say that connect will be opened
    pvIsOpened =  true ;
    
    // store name
    pvName     =  name ;
    
    // open connection on dispatcher
    {
    start : 
        
        // open socket
        pOsin = new osockinet(sockbuf::sock_stream);
        pIsin =  new isockinet(sockbuf::sock_stream);
        pvInetUtil.Osockinet(*pOsin).Isockinet(*pIsin);
        bool    preventShared (true) ; // prevent shared except on window
#       if 1 // defined(ON_W)
            preventShared =  false ;
#       endif
        
        // if local do not use ip
        if ( !preventShared && (!(addr && *addr) || !strcmp(addr, "127.0.0.1")) ) {
            EString out("dispatcher");
            pvInetUtil.ConnectOutput(out);
            
            // /* next inst while an other one is not killed, which will be
            // done by dispatcher on declaration-testeur  */
            // no since file mapping must be done before calling declaration testeur
            // for dispatcher to connect
            pvInetUtil.DirectInput(pvName, 4000, 16);
            EString pvIp("-1");
            EString pvAddress("-1");
            PTREE   message ;
            message =  parse (
                          declaration-testeur  {
                                  name
                            $(<STRING,MakeString((char *)(const char *) pvName)>),
                                  ip-address $(<STRING,PTREE(pvIp)>),
                                  address $(<NUMB,PTREE(pvAddress)>),
                ack FALSE
                          }
            );
            
            // send message
            pvInetUtil.InetWrite(message, false, true);
            delete pOsin ;
            pvInetUtil.ForgetOutput();
            pvShared =  true ;
            return *this ;
        }
        
        // not local
        bool    firstTry = true ;         // firstTry for connect
        sockerr inetError("no info", 0);  // error return
        while ( maxTry != 0 ) {
            if ( maxTry > 0 ) 
                maxTry-- ;
            {
                UINT4   netAddr ; // the address 
                if ( addr ) 
                    netAddr =  inet_addr(addr);
                else 
                    netAddr =  0 ;
                inetError =  (*pOsin)->connect(port, netAddr, maxTry >= 0 ? 0 : -1); //                maxTry = 1 ;
            }
            if ( inetError.errnoval() ) {
                if ( maxTry != 0 ) {
                    EString messSend ; // error message to be send
                    if ( firstTry ) {
                        messSend =  EString("Problem on port ") + CompactItoa(port) + " trying again .";
                        firstTry =  false ;
                    } else {
                        messSend =  ".";
                    }
                    _write(2, messSend.c_str(), messSend.length());
                    SLEEP(3);
                    continue ;
                }
            }
            break ;
        }
        
        // if succeed do all the job otherwise tell we are not connected
        if ( maxTry != 0 ) {
            Connected(true);
            
            // declare ourself
            cout << "localhost = " << (*pOsin)->localhost() << endl << "localport = " << (*pOsin)->localport() << endl ;
            localPort =  (*pOsin)->localport();
            cout << "peerhost = " << (*pOsin)->peerhost() << endl << "peerport = " << (*pOsin)->peerport() << endl ;
            localPort =  0 ;
            
            // EL 12/07/98 
            // search port only if dispatcher is not on the same computer
            // otherwise dispatcher will do the job
            if ( addr && *addr ) {
#               if defined(ON_W)
                    {
                        inetError =  (*pIsin)->bind(0);
                        if ( !inetError.errnoval() ) {
                            struct sockaddr_in sockAddr ;
                            int               sizeSock = sizeof(struct sockaddr_in );
                            getsockname((*pIsin)->Socket(), (struct sockaddr *)(&sockAddr), &sizeSock);
                            localPort =  sockAddr.sin_port ;
                        } else {
                            Connected(false);
                            return *this ;
                        }
                    }
#               else 
                    {
                        
                        // find a port number for input
                        localPort =  dispatcherPort + 1 ;
                        sockerr inetError("no info", 0); // error return
                        while ( 1 ) {
                            {
                                inetError =  (*pIsin)->bind(localPort);
                            }
                            if ( inetError.errnoval() ) {
                                if ( inetError.errnoval() != EADDRINUSE ) {
                                    char    message [50]; // error message
                                    sprintf(message, "Unknown error during socket bind \n");
                                    _write(2, message, strlen(message)); // throw ;
                                    delete pIsin ;
                                    pIsin =  new isockinet(sockbuf::sock_stream); // exit(2);
                                }
                                localPort++ ;
                                continue ;
                            }
                            break ;
                        }
                    }
#               endif
            } else {
            }
            
            // send configuration name
            char    string [20]; // temporary
            sprintf(string, "%d", localPort);
            if ( !locAddr ) 
                locAddr =  (char *)"";
            pvIp =  locAddr ;
            ::timeval   tval ;
            tval.tv_sec  =  5 ;
            tval.tv_usec =  0 ;
            pvInetUtil.TimeVal(tval);
        send_conf : 
            pvAddress = string ;
            message =  parse (
                             declaration-testeur  {
                                  name
                            $(<STRING,MakeString((char *)(const char *) pvName)>),
                                  ip-address $(<STRING,PTREE(pvIp)>),
                                  address $(<NUMB,PTREE(pvAddress)>),
                ack FALSE
                          }
            );
            
            // initialize inetutil output
            int length ; // length read
            
            // send message
            if ( pvInetUtil.InetWrite(message, false, true) < 0 ) {
                delete pIsin ;
                delete pOsin ;
                SLEEP(30);
                port   =  keepPort ;
                maxTry =  keepMaxTry ;
                goto start ;
            }
            
            // << EL 12/07/98
            if ( !localPort ) {
                
                // read answer
                message   =  pvInetUtil.InetReadLow(true);
                
                // get address inside message
                pvAddress =  Value(QInetUtil::GetNamedValue("address", message));
                localPort =  atoi(pvAddress);
                
                // if dispatcher didn't find a port ask again
                if ( localPort == 0 ) {
                    SLEEP(30);
                    goto send_conf ;
                }
                
                // connect to indicated address
                {
                    inetError =  (*pIsin)->bind(localPort);
                }
                if ( inetError.errnoval() ) {
                    EString message ; // error message
                    message =  "Unknown error during socket bind -- connect\n";
                    _write(2, message.c_str(), message.length()); // throw ;
                    
                    // delete pIsin ;
                    // pIsin = new isockinet(sockbuf::sock_stream); // exit(2);
                    // Connected(false);
                    // return *this ;
                    delete pIsin ;
                    delete pOsin ;
                    SLEEP(30);
                    port   =  keepPort ;
                    maxTry =  keepMaxTry ;
                    goto start ;
                } else {
                    sprintf(string, "%d", localPort);
                    
                    // send conf
                    goto send_conf ;
                }
            }
            cout << "input localhost = " << (*pIsin)->localhost() << endl << "localport = " << (*pIsin)->localport() << endl ;
            
            // wait until dispatcher is connected
#           define NB_TRY 30
            int nbTry = NB_TRY ;
            while ( pvInetUtil.NbSock() < 2 && nbTry-- ) {
                if ( nbTry == NB_TRY - 1 ) {
                    tval.tv_sec  =  0 ;
                    tval.tv_usec =  100000 ;
                    pvInetUtil.TimeVal(tval);
                } else {
                    tval.tv_sec  =  1 ;
                    tval.tv_usec =  0 ;
                    pvInetUtil.TimeVal(tval);
                }
                pvInetUtil.InetReadLow();
            }
            if ( pvInetUtil.NbSock() < 2 ) {
                delete pIsin ;
                delete pOsin ;
                port   =  keepPort ;
                maxTry =  keepMaxTry ;
                goto start ;
            }
            {
                PTREE   message ; // send message
                message =  parse (
                    test-pco  {
                                  name
                            $(<STRING,PTREE(pvName)>),
                                  pco
                            $(<STRING,PTREE("anything")>)
                    }
                );
                pvInetUtil.InetWrite(message, true, true);
                tval.tv_sec  =  30 ;
                tval.tv_usec =  0 ;
                pvInetUtil.TimeVal(tval);
                message =  pvInetUtil.InetReadLow();
                
                // find the content
                if ( message != <NAMED_VALUE,<IDENT,"test-pco">> ) {
                    delete pIsin ;
                    delete pOsin ;
                    port   =  keepPort ;
                    maxTry =  keepMaxTry ;
                    goto start ;
                }
            }
            
            // set blocked input
            tval.tv_sec  =  0 ;
            tval.tv_usec =  0 ;
            pvInetUtil.TimeVal(tval);
            
            // now we are connected, destroy upper channel
            if ( pvInetUtil.HasOutput() ) {
                delete &pvInetUtil.Osockinet();
                pvInetUtil.ForgetOutput();
            }
        } else 
            Connected(false);
        
        // return object
        return *this ;
    }
}

// OpenChannel : opening a channel in a connection
// parameters :
//             channel : name of the channel
//             outputPco : declare as an only ouput channel
// return : the object
MetaConnection &QConnection::OpenChannel ( EString channel, bool outputPco )
{
    
    PTREE   message ;         // message to send
    char    *messageContent ; // content of message
    int     lengthEncoded ;   // encoded length
    bool    permutate ;       // permutate socket
    
    permutate =  !pvInetUtil.HasOutput();
    if ( 0 ) {
    mede : 
        message = parse (
            declaration-testeur  {
                    name
              $(<STRING,MakeString((char *)(const char *) pvName)>),
                    ip-address $(<STRING,PTREE(pvIp)>),
                    address $(<NUMB,MakeString(pvAddress)>)
            }
        );
        pvInetUtil.InetWrite(message, false, true);
    }
    
    // set ouput pco mode
    PTREE   outputPcoMode ; // output pco mode
    
    if ( outputPco ) 
        outputPcoMode =  <TRUE>;
    else 
        outputPcoMode =  <FALSE>;
    
    // code message
    message =  parse (
        declaration-pco  {
                      name
                $(<STRING,MakeString((char *) (const char *) pvName)>),
                      pco
                $(<STRING,MakeString((char *)(const char *) channel)>),
                      output-only
                $(outputPcoMode)
        }
    );
    
    // send it
    pvInetUtil.InetWrite(message, permutate, true);
    if ( !pvInetUtil.SharedInput() ) {
        
        // wait until channel is known in dispatcher
        PTREE   selector ; // selector
        int     counter = 0 ;
        while ( 1 ) {
            counter++ ;
            if ( counter >= 50 && !permutate ) 
                goto mede ;
            message =  parse (
                test-pco  {
                              name
                        $(<STRING,MakeString((char *) (const char *) pvName)>),
                              pco
                        $(<STRING,MakeString((char *)(const char *) channel)>)
                }
            );
            pvInetUtil.InetWrite(message, permutate, true);
            message =  pvInetUtil.InetReadLow();
            
            // find the content
            if ( message == <NAMED_VALUE,<IDENT,"test-pco">> ) {
                PTREE   state ; // state of pco
                state =  QInetUtil::GetNamed("state", message);
                if ( qcomparetree(state [2], <TRUE>) ) {
                    int sizePacket ; // size min for packets
                    sizePacket =  atoi(Value(QInetUtil::GetNamedValue("size-packet", message)));
                    pvInetUtil.SizeMin(sizePacket);
                    break ;
                }
            }
        }
        
        // now we are connected, destroy upper channel
        if ( pvInetUtil.HasOutput() ) {
            delete &pvInetUtil.Osockinet();
            pvInetUtil.ForgetOutput();
        }
    }
    
    // set input socket in no delay 
    // pvInetUtil . Isockinet().setnodelay();
    // return object
    return *this ;
}

// OpenChannel : opening a channel in a connection
// parameters :
//             channel : name of the channel
// return : the object
MetaConnection &QConnection::CloseChannel ( EString channel )
{
    if ( pvIsOpened ) {
        int nbSock ; // number of socks opened
        nbSock =  pvInetUtil.NbSock();
        
        // there must be at least on more socket than main
        if ( !pvShared && nbSock <= 1 ) 
            return *this ;
        PTREE   message ;
        message =  parse (
            close-pco  {
                          name
                    $(<STRING,PTREE(pvName)>),
                          pco
                    $(<STRING,PTREE(channel)>)
            }
        );
        
        // send it
        pvInetUtil.InetWrite(message, true, true);
        pvInetUtil.RemoveChannel(channel);
    }
    return *this ;
}

// CloseChannels : closing the channels in a connection
// parameters :
void QConnection::CloseChannels ()
{
    PTREE   message ; // message to send
    
    if ( pvIsOpened ) {
        unsigned int    nbSock ; // number of socks opened
        nbSock =  pvInetUtil.NbSock();
        
        // there must be at least on more socket than main
        // first dispatcher don't like to close channels
        if ( !pvShared && nbSock <= 1 || pvShared && pvFirstDispatMem ) {
            pvIsOpened =  false ;
            return ;
        }
        message =  parse (
            close-pco  {
                          name
                    $(<STRING,MakeString((char *) (const char *) pvName)>),
                          pco
                    $(<STRING,MakeString("")>)
            }
        );
        
        // send it
        pvInetUtil.InetWrite(message, true, true);
        time_t  currTime = time(0); // current time
        pvIsOpened =  false ;
        
        // wait the call to be completed (sockets to be disconnected)
        if ( !pvShared ) 
            while ( pvInetUtil.NbSock() >= nbSock ) {
                pvInetUtil.InetReadLow();
                
                // after 10 minutes stop
                if ( time(0) - currTime > 600 ) 
                    return ;
            }
    }
}

// Send : send a content on a channel
// parameters :
//               channel : the channel where to send
//               content : the content to send
//               coarse : tell to send as a coarse string
void QConnection::Send ( const EString &channel, PTREE content, bool coarse )
{
    EString encoding = pvInetUtil.FullEncode(content, channel);
    
#   if 0
        DisplayTime("------- send ----------");
        DumpTree(content);
#   endif
    SendString(channel, encoding);
#   if 0
        
        Coding  *encoding ; // encoding of message
        
        // compute string to be send
        if ( coarse ) {
            EString result("COARSE    ");
            result.Resize(10000);
            AsnEncoder().CoarseEncode(content, result);
            result =  DecompAsn().DecodeOctetStringFast((char *)(result.c_str()), result.length());
            SendString(channel, result);
        } else {
            encoding =  pvInetUtil.FullEncode(content, channel);
            SendString(channel, *((EString *)(*encoding)));
            Coding::Free(encoding);
        }
#   endif
}

// SendString : send a string content on a channel 
// parameters :
//               channel : the channel where to send
//               messageString : message string to be send
void QConnection::SendString ( const EString &channel, const EString &messageString )
{
    
    PTREE   message ;       // message to send
    char    *string ;       // encoding of message
    char    *ptString ;     // pointer on string    
    int     lookAhead = 0 ; // to manage lookAhead
    PTREE   ptChunk ;       // pointer for chunk of message
    
    // compute string to be send
    string =  ptString = (char *)(const char *)messageString ;
    while ( ptString ) {
        
        // if string is too long send it by chunk
        if ( strlen(ptString) > CHUNK_SIZE ) {
            char    keepC ; // to keep char were we put \0
            keepC                    =  *(ptString + CHUNK_SIZE);
            *(ptString + CHUNK_SIZE) =  '\0';
            
            // send event
            message                  =  GetAMessage(SEND_EVENT_CHUNK, (char *)(pvName.c_str()), (char *)(channel.c_str()), ptString);
            pvInetUtil.InetWrite(message, true, true);
            
            // prepare next step
            ptString  += CHUNK_SIZE ;
            *ptString =  keepC ;
            
            // DisplayTime("avant look");
            // read synchro
            if ( lookAhead >= LOOK_AHEAD ) {
                EString empty("");
                if ( !LookAheadSynchro(empty, 1, pvInetUtil, pvInetUtil.ListMess(), false, -1, pvSthingReceived) ) {
                    CloseChannels();
                    
                    /* close(OutputSock()); */
                    MetaExit(0, "Killed process\n");
                }
            } else 
                lookAhead++ ;
            
            // DisplayTime("apres look");
        } else if ( ptString != string ) {
            
            // send event
            message =  GetAMessage(SEND_EVENT_CHUNK_END, (char *)(pvName.c_str()), (char *)(channel.c_str()), ptString);
            pvInetUtil.InetWrite(message, true, true);
            ptString =  (char *)0 ;
        } else {
            
            // send event
            message =  GetAMessage(SEND_EVENT, (char *)(pvName.c_str()), (char *)(channel.c_str()), string);
            pvInetUtil.InetWrite(message, true, true);
            
            // << EL 03/12/98
#           if 0
                pvInetUtil.InetReadLow();
#           endif
            ptString =  (char *)0 ;
        }
    }
    
    EString empty("");
    
    // we wait for synchro less time than dispatcher ( there is a lock if dispatcher and client are waiting)
    // synchro here are not of absolute necessity
    if ( !LookAheadSynchro(empty, lookAhead, pvInetUtil, pvInetUtil.ListMess(), false, -1, pvSthingReceived) ) {
        CloseChannels();
        
        //  close(OutputSock());
        MetaExit(0, "Killed process\n");
    }
}

// Rearm : rearm connection to receive an event
void QConnection::Rearm ()
{
    
    PTREE   message ;         // message to send
    char    *messageContent ; // content of message
    int     lengthEncoded ;   // encoded length
    EString wholeContent ;    // the whole content
    PTREE   content ;
    
    if ( !pvWaitingResponse ) {
        message           =  GetAMessage(GET_EVENT_BLOCKED, (char *)(pvName.c_str()));
        pvWaitingResponse =  true ;
        pvInetUtil.InetWrite(message, true, true);
    }
}

// Receive : receive a content 
// parameters :
//              blocked : tell if we wait for message
// return : the tree which has been received
PTREE QConnection::ReceiveContent ( bool blocked )
{
    
    PTREE   message ;         // message to send
    char    *messageContent ; // content of message
    int     lengthEncoded ;   // encoded length
    EString wholeContent ;    // the whole content
    PTREE   content ;
    
    if ( pvInetUtil.Empty() && (!blocked || !pvWaitingResponse) && pvInetUtil.NoPushed() ) {
        
        // reception evenement
        if ( blocked ) {
            message           =  GetAMessage(GET_EVENT_BLOCKED, (char *)(pvName.c_str()));
            pvWaitingResponse =  true ;
        } else {
            message =  GetAMessage(GET_EVENT, (char *)(pvName.c_str()));
        }
        pvInetUtil.InetWrite(message, true, true);
    }
    
    // return value
    
    PTREE   received ;         // received tree
    PTREE   selector ;         // selector
    PTREE   messContent ;      // messContent
    bool    moreChunk = true ; // more chunks to be received
    
    // find the content 
    while ( moreChunk ) {
        if ( pvInetUtil.NoPushed() ) {
            received =  pvInetUtil.InetReadLow();
        } else {
            received =  pvInetUtil.Pop();
        }
        messContent =  PTREE(0);
        if ( received == <NAMED_VALUE,selector,messContent> ) {
            switch ( selector ) {
                case <IDENT,"envoie-evenement"> : 
                    {
                        
                        // store sender
                        pvSenderName    =  Value(pvInetUtil.GetNamedValue("sender", messContent));
                        pvSenderChannel =  Value(pvInetUtil.GetNamedValue("pco", messContent));
                        pvSecStamp      =  Value(pvInetUtil.GetNamedValue("time", messContent));
                        if ( pvSecStamp != "" ) {
                            pvMSecStamp =  Value(pvInetUtil.GetNamedValue("utime", messContent));
                        } else 
                            pvSecStamp =  pvMSecStamp = "0";
                        
                        // get content
                        content =  pvInetUtil.GetNamedValue("content", messContent); // content
                        PTREE   reference ; // reference part
                        
                        // translate content
                        messageContent    =  Value(content);
                        moreChunk         =  false ;
                        pvWaitingResponse =  false ;
                        
                        // << EL 03/12/98
                        // send acknowledgment
#                       if 0
                            {
                                PTREE   acknowledgement ;
                                acknowledgement =  parse (acknowledgement NULL);
                                pvInetUtil.InetWrite(acknowledgement, true, true);
                            }
#                       endif
                    }
                    break ;
                case <IDENT,"envoie-evenement-chunk"> : 
                    {
                        PTREE   acknowledgement ; // the acknowledgement
                        if ( !pvInetUtil.SharedInput() || pvFirstDispatMem ) {
                            
                            // send acknowledgment
                            // send acknowledgment
                            acknowledgement =  parse (named-acknowledgement $(<STRING,PTREE(pvName)>));
                            
                            //                        acknowledgement = parse (acknowledgement NULL);
                            pvInetUtil.InetWrite(acknowledgement, true, true);
                        }
                        
                        // store this chunk
                        chunks.push_back(messContent);
                    }
                    break ;
                case <IDENT,"envoie-evenement-chunk-end"> : 
                    {
                        
                        // store sender
                        pvSenderName    =  Value(pvInetUtil.GetNamedValue("sender", messContent));
                        pvSenderChannel =  Value(pvInetUtil.GetNamedValue("pco", messContent));
                        pvSecStamp      =  Value(pvInetUtil.GetNamedValue("time", messContent));
                        if ( pvSecStamp != "" ) {
                            pvMSecStamp =  Value(pvInetUtil.GetNamedValue("utime", messContent));
                        } else 
                            pvSecStamp =  pvMSecStamp = "0";
                        
                        // compute content
                        list<PTREE> ::iterator  iterChunk ; // iterator
                        for ( iterChunk = chunks.begin() ; iterChunk != chunks.end() ; iterChunk++ ) {
                            wholeContent += Value(QInetUtil::GetNamedValue("content", *iterChunk));
                        }
                        wholeContent      += Value(QInetUtil::GetNamedValue("content", messContent));
                        
                        // translate content
                        // messageContent = (char *)(wholeContent.c_str());
                        content           =  <HSTRING,PTREE(wholeContent)>;
                        moreChunk         =  false ;
                        pvWaitingResponse =  false ;
                        chunks.erase(chunks.begin(), chunks.end());
                    }
                    break ;
                case <IDENT,"pas-evenement"> : 
                    
                    // do a last try
                    if ( !pvInetUtil.Empty() ) 
                        return ReceiveContent(blocked);
                    else 
                        return received ;
                    break ;
                case <IDENT,"kill"> : 
                    {
                        
                        /* EString error ;
                           error = EString(" kill values : ")
                               + CompactItoa(pvSthingReceived) + " "
                               + Value(messContent) + "\n";*/
                        if ( atoi(Value(messContent)) > pvSthingReceived ) {
                            CloseChannels();
                            
                            /* close(OutputSock()); */
                            MetaExit(0, "Killed process\n");
                        } else {
                            moreChunk         =  false ;
                            pvWaitingResponse =  false ;
                            return ReceiveContent(blocked);
                        }
                    }
                    break ;
                case <IDENT,"kill-old"> : 
                    {
                        /*EString error ;
                           error = EString(" kill-old values : ")
                               + CompactItoa(pvSthingReceived) + " "
                               + Value(messContent) + "\n";
                           _write(1, error.c_str(), error.length());*/
                        if ( atoi(Value(messContent)) == pvSthingReceived ) {
                            moreChunk         =  false ;
                            pvWaitingResponse =  false ;
                            return ReceiveContent(blocked);
                        }
                        if ( pvSthingReceived ) {
                            CloseChannels();
                            
                            /* close(OutputSock()); */
                            MetaExit(0, "Killed old process\n");
                        } else {
                            pvSthingReceived =  atoi(Value(messContent));
                            MSLEEP(300);
                            moreChunk         =  false ;
                            pvWaitingResponse =  false ;
                            return ReceiveContent(blocked);
                        }
                    }
                    break ;
                case <IDENT,"enumerate"> : return received ;
                case <IDENT,"acknowledgement"> : break ;
                case <IDENT,"version"> : 
                    {
                        
                        // new shared memory dispatcher no need to acknow big messages
                        pvFirstDispatMem =  false ;
                        return received ;
                    }
                default : 
                    {
                        pvSenderName =  pvSenderChannel = "";
                        PTREE   result ; // message to send
                        result =  <IN_LANGUAGE,(),received>;
                        return result ;
                    }
                    break ;
            }
        } else {
            moreChunk =  false ;
            if ( received == <CONS> ) {
                return received ;
            } else {
                return messContent ;
            }
        }
    }
    return content ;
}

// Receive : receive a content 
// parameters :
//              blocked : tell if we wait for message
// return : the tree which has been received
PTREE QConnection::Receive ( bool blocked )
{
    
    char    *messageContent ; // the message content
    PTREE   messContent ;     // the decoded message content
    
    // get tree out of message content
    if ( (messContent = ReceiveContent(blocked)) && messContent == <STRING> || messContent == <HSTRING> ) {
        EString header(""); // header of message
        messageContent =  Value(messContent);
        if ( strlen(messageContent) >= 12 ) 
            header =  EString(messageContent, 12);
        if ( header == "434F41525345" ) {
#           if 0
                messageContent += 20 ;
                messageContent =  DecompAsn().ConvertStringToBin(messageContent, strlen(messageContent));
                char    *messageContentStart ; // start for message content
                messageContentStart =  messageContent ;
                messContent         =  AsnEncoder().CoarseDecode(messageContent);
                free(messageContentStart);
#           endif
        } else {
            EString message (messageContent) ;
            messContent =  pvInetUtil.FullInterpret(message, pvSenderChannel);
        }
    }
    
    // return found value or nil
    return messContent ;
}

// GetAMessage : get different type of messages
// parameters :
//               typeMessage : type of message
//               string1 : first parameter string in message
//               string2 : second parameter string in message
//               string3 : third parameter string in message
// return : the message
PTREE QConnection::GetAMessage ( TypeMessage typeMessage, char *string1, char *string2, char *string3 )
{
    
    PTREE   pvSendEvent ;         // ptree sending event
    PTREE   pvSendEventChunk ;    // idem
    PTREE   pvSendEventChunkEnd ; // idem
    PTREE   pvGetEvent ;          // idem
    PTREE   pvGetEventBlocked ;   // idem
    
    switch ( typeMessage ) {
        case SEND_EVENT : 
            {
                {
                    if ( pvSendEvent == () ) {
                        
                        // send event
                        pvSendEventName    =  PTREE("");
                        pvSendEventPco     =  PTREE("");
                        pvSendEventContent =  PTREE("");
                        pvSendEvent        =  parse (
                            envoie-evenement {
                                name
                            $(<STRING,pvSendEventName>),
                                pco
                            $(<STRING,pvSendEventPco>),
                                content
                            $(<HSTRING,pvSendEventContent>)
                            }
                        );
                    }
                }
                PTREE   ptString ;
                ptString           =  PTREE(string1);
                pvSendEventName    =  pvSendEventName += ptString ;
                ptString           =  PTREE(string2);
                pvSendEventPco     =  pvSendEventPco += ptString ;
                ptString           =  PTREE(string3);
                pvSendEventContent =  pvSendEventContent += ptString ;
                return pvSendEvent ;
            }
            break ;
        case SEND_EVENT_CHUNK : 
            {
                {
                    if ( pvSendEventChunk == () ) {
                        
                        // send event
                        pvSendEventChunkName    =  PTREE("");
                        pvSendEventChunkPco     =  PTREE("");
                        pvSendEventChunkContent =  PTREE("");
                        pvSendEventChunk        =  parse (
                            envoie-evenement-chunk {
                                name
                            $(<STRING,pvSendEventChunkName>),
                                pco
                            $(<STRING,pvSendEventChunkPco>),
                                content
                            $(<HSTRING,pvSendEventChunkContent>)
                            }
                        );
                    }
                }
                PTREE   ptString ;
                ptString                =  PTREE(string1);
                pvSendEventChunkName    =  pvSendEventChunkName += ptString ;
                ptString                =  PTREE(string2);
                pvSendEventChunkPco     =  pvSendEventChunkPco += ptString ;
                ptString                =  PTREE(string3);
                pvSendEventChunkContent =  pvSendEventChunkContent += ptString ;
                return pvSendEventChunk ;
            }
            break ;
        case SEND_EVENT_CHUNK_END : 
            {
                {
                    if ( pvSendEventChunkEnd == () ) {
                        
                        // send event
                        pvSendEventChunkEndName    =  PTREE("");
                        pvSendEventChunkEndPco     =  PTREE("");
                        pvSendEventChunkEndContent =  PTREE("");
                        pvSendEventChunkEnd        =  parse (
                            envoie-evenement-chunk-end {
                                name
                            $(<STRING,pvSendEventChunkEndName>),
                                pco
                            $(<STRING,pvSendEventChunkEndPco>),
                                content
                            $(<HSTRING,pvSendEventChunkEndContent>)
                            }
                        );
                    }
                }
                PTREE   ptString ;
                ptString                   =  PTREE(string1);
                pvSendEventChunkEndName    =  pvSendEventChunkEndName += ptString ;
                ptString                   =  PTREE(string2);
                pvSendEventChunkEndPco     =  pvSendEventChunkEndPco += ptString ;
                ptString                   =  PTREE(string3);
                pvSendEventChunkEndContent =  pvSendEventChunkEndContent += ptString ;
                return pvSendEventChunkEnd ;
            }
            break ;
        case GET_EVENT : 
            {
                {
                    if ( pvGetEvent == () ) {
                        pvGetEventName =  PTREE("");
                        pvGetEvent     =  parse (
                            reception-evenement {
                                    name
                                $(<STRING,pvGetEventName>)
                                }
                        );
                    }
                }
                PTREE   ptString ;
                ptString       =  PTREE(string1);
                pvGetEventName =  pvGetEventName += ptString ;
                return pvGetEvent ;
            }
            break ;
        case GET_EVENT_BLOCKED : 
            {
                {
                    if ( pvGetEventBlocked == () ) {
                        pvGetEventBlockedName =  PTREE("");
                        pvGetEventBlocked     =  parse (
                            reception-evenement-bloque {
                                    name
                                $(<STRING,pvGetEventBlockedName>)
                                }
                        );
                    }
                }
                PTREE   ptString ;
                ptString              =  PTREE(string1);
                pvGetEventBlockedName =  pvGetEventBlockedName += ptString ;
                return pvGetEventBlocked ;
            }
            break ;
    }
    return PTREE(0);
}


