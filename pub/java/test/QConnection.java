package erltools;
import java.io.*;
import java.util.*;
import java.net.URL;

public class QConnection {
    static final int    NB_TRY = 30 ;
    static final int    dispatcherPort = 2000 ;
    static final int    CHUNK_SIZE = 6144 ;
    static final int    LOOK_AHEAD = 2 ;
    static final int    SEND_EVENT = 10 ;
    static final int    SEND_EVENT_CHUNK = 11 ;
    static final int    SEND_EVENT_CHUNK_END = 12 ;
    static final int    GET_EVENT = 13 ;
    static final int    GET_EVENT_BLOCKED = 14 ;
    
    public QConnection ()
    {
        pvInetUtil = new QInetUtil();
    }
    
    // Open : opening of a connection under a name
    // parameters :
    //             name : name of the connection
    //             locAddr : local ip address
    //             addr : IP address where to connect
    //             port : port where to connect
    //             maxTry : number max of try on dispatcher
    // return : the object
    public QConnection Open ( String name )
    {
        return Open(name, "127.0.0.1", null, dispatcherPort, - 1);
    }
    
    public void Connected ( boolean connected )
    {
        pvConnected = connected ;
    }
    
    public QConnection Open ( String name, String locAddr, String addr
        , int port, int maxTry )
    {
        
        int     localPort = 0 ;       // number for local port
        PTREE   message ;             // message to send
        
        // char        *messageContent ;     // content of message
        int     lengthEncoded ;       // encoded length
        PTREE   grammar ;             // grammar used for speaking with dispatcher
        ESocket pOsin ;               // output socket
        ESocket pIsin ;               // input socket
        int     keepPort = port ;     // keep port
        int     offsetPort = 0 ;
        int     keepMaxTry = maxTry ; // keep max try
        
        // say that connect will be opened
        pvIsOpened = true ;
        
        // store name
        pvName = name ;
        
        // open connection on dispatcher
        while ( true ) {
            
            // open socket
            // pOsin = new osockinet(sockbuf::sock_stream);
            // pIsin = new isockinet(sockbuf::sock_stream);
            pOsin = new ESocket();
            pIsin = new ESocket();
            pvInetUtil.Osockinet(pOsin).Isockinet(pIsin);
            boolean firstTry = true ; // firstTry for connect
            
            // sockerr inetError("no info", 0);  // error return
            while ( maxTry != 0 ) {
                if ( maxTry > 0 ) 
                    maxTry-- ;
                {
                    
                    // UINT4   netAddr ; // the address
                    // if ( addr )
                    //     netAddr = inet_addr(addr);
                    // else
                    //     netAddr = 0 ;
                    // inetError
                    //    = (*pOsin) -> connect(port, netAddr
                    //         , maxTry >= 0 ? 0 : - 1); //                maxTry = 1 ;
                    pOsin.connect(port, addr, maxTry >= 0 ? 0 : - 1);
                }
                if ( false ) {
                    if ( maxTry != 0 ) {
                        EString messSend ; // error message to be send
                        /*if ( firstTry ) {
                           
                               messSend
                           
                                   = EString("Problem on port ")
                           
                                       + CompactItoa(port)
                           
                                       + " trying again .";
                           
                               firstTry = false ;
                           
                           } else {
                           
                               messSend = ".";
                           
                           }
                           
                           write(2, messSend.c_str(), messSend.length());
                           
                           
                           
                           // Sleep(3000); */
                        continue ;
                    }
                }
                break ;
            }
            
            // if succeed do all the job otherwise tell we are not connected
            if ( maxTry != 0 ) {
                Connected(true);
                
                // EL 12/07/98 
                // search port only if dispatcher is not on the same computer
                // otherwise dispatcher will do the job
                if ( true || (addr != null) ) {
                    
                    // find a port number for input
                    localPort = dispatcherPort + 1 + offsetPort ;
                    
                    //  sockerr inetError("no info", 0); // error return
                    while ( true ) {
                        try {
                            pIsin.bind(localPort);
                        } catch ( IOException e ) {
                            localPort++ ;
                            continue ;
                        }
                        break ;
                    }
                }
                
                // send configuration name
                {
                    
                    // char    string [20]; // temporary
                    // sprintf(string, "%d", localPort);
                    if ( locAddr == null ) 
                        locAddr = "";
                    pvIp = locAddr ;
                    
                    // struct timeval tval ;
                    pvInetUtil.TimeVal(5, 0);
                    
                    //  send_conf :
                    pvAddress = Integer.toString(localPort, 10);
                    
                    /*    message = parse (
                       
                                   declaration-testeur  {
                       
                                           name
                       
                                     $(<STRING,MakeString((char *)(const char *) pvName)>),
                       
                                           ip-address $(<STRING,PTREE(pvIp)>),
                       
                                           address $(<NUMB,PTREE(pvAddress)>),
                       
                         ack FALSE
                       
                                   }
                       
                       );    */
                    PTREE   theName ;                 // name
                    PTREE   ip_address ;              // ip address
                    PTREE   address ;                 // address
                    PTREE   listValue = new PTREE();  // list of values
                    theName
                        = asn.CreateNamedNode("name"
                            , asn.CreateString(pvName));
                    ip_address
                        = asn.CreateNamedNode("ip-address"
                            , asn.CreateString(pvIp));
                    address
                        = asn.CreateNamedNode("address"
                            , asn.CreateNumb(pvAddress));
                    listValue.AddList(theName);
                    listValue.AddList(ip_address);
                    listValue.AddList(address);
                    PTREE   declTest ;
                    declTest = new PTREE(asn.SEQUENCE_VALUE, 1);
                    declTest.ReplaceTree(1, listValue);
                    declTest
                        = asn.CreateNamedNode("declaration-testeur"
                            , declTest);
                    message = declTest ;
                    
                    // initialize inetutil output
                    int length ; // length read
                    
                    // send message
                    if ( pvInetUtil.InetWrite(message, false) < 0 ) {
                        pIsin = null ;
                        pOsin = null ;
                        
                        // sleep(10000);
                        /* #ifdef BORLAND
                           
                                                   Sleep(30000);
                           
                           #else 
                           
                                                   sleep(30);
                           
                           #endif   */
                        port = keepPort ;
                        maxTry = keepMaxTry ;
                        continue ;
                    }
                    
                    // << EL 12/07/98
                    if ( localPort == 0 ) {} /*
                                                
                                                                        // read answer
                                                                        message = pvInetUtil.InetReadLow(true);
                                                
                                                                        // get address inside message
                                                                        pvAddress
                                                
                                                                            = Value(
                                                
                                                                                QInetUtil::GetNamedValue("address", message));
                                                
                                                                        localPort = atoi(pvAddress);
                                                
                                                                        
                                                
                                                                        // if dispatcher didn't find a port ask again
                                                
                                                                        if ( localPort == 0 ) {
                                                
                                                #ifdef BORLAND
                                                
                                                                            Sleep(30000);
                                                
                                                #else 
                                                
                                                                            sleep(30);
                                                
                                                #endif
                                                
                                                                            goto send_conf ;
                                                
                                                                        }
                                                
                                                
                                                
                                                
                                                
                                                                        // connect to indicated address
                                                
                                                                        {
                                                
                                                                            inetError = (*pIsin) -> bind(localPort);
                                                
                                                                        }
                                                
                                                                        if ( inetError.errnoval() ) {
                                                
                                                                            EString message ; // error message
                                                
                                                  message = "Unknown error during socket bind -- connect\n";
                                                
                                                                            write(2, message.c_str(), message.length()); // throw ;
                                                
                                                                            
                                                
                                                                            // delete pIsin ;
                                                
                                                                            // pIsin = new isockinet(sockbuf::sock_stream); // exit(2);
                                                
                                                                            // Connected(false);
                                                
                                                                            // return *this ;
                                                
                                                                            delete pIsin ;
                                                
                                                                            delete pOsin ;
                                                
                                                #ifdef BORLAND
                                                
                                                                            Sleep(30000);
                                                
                                                #else
                                                
                                                                            sleep(30);
                                                
                                                #endif
                                                
                                                                            port = keepPort ;
                                                
                                                                            maxTry = keepMaxTry ;
                                                
                                                                            goto start ;
                                                
                                                                        } else {
                                                
                                                                            sprintf(string, "%d", localPort);
                                                
                                                                            
                                                
                                                                            // send conf
                                                
                                                                            goto send_conf ;
                                                
                                                                        } */ 
                    
                    // cout << "input localhost = " << (*pIsin) -> localhost() << endl
                    //     << "localport = " << (*pIsin) -> localport() << endl ;
                    // wait until dispatcher is connected
                    pvInetUtil.TimeVal(60, 300);
                    try {
                        pIsin.accept();
                        System.out.println("accept ok");
                    } catch ( IOException e ) {
                        System.out.println("accept not ok");
                        System.out.println(e.toString());
                        offsetPort++ ;
                        continue ;
                    }
                    if ( false ) {
                        int nbTry = NB_TRY ;
                        while ( true || nbTry-- != 0 ) {
                            if ( nbTry == NB_TRY - 1 ) {
                                pvInetUtil.TimeVal(0, 100); // tval.tv_sec = 0 ;
                                                            // tval.tv_usec = 100000 ;
                                                            // pvInetUtil.TimeVal(tval);
                            } else {
                                //tval.tv_sec = 1 ;
                                // tval.tv_usec = 0 ;
                                pvInetUtil.TimeVal(60, 0);
                            }
                            try {
                                pIsin.accept();
                            } catch ( IOException e ) {
                                continue ;
                            }
                            break ;
                        }
                    }
                    /*
                       
                       if ( pvInetUtil.NbSock() < 2 ) {
                       
                           delete pIsin ;
                       
                           delete pOsin ;
                       
                           port = keepPort ;
                       
                           maxTry = keepMaxTry ;
                       
                           goto start ;
                       
                       } */
                    {
                        
                        // PTREE   message ; // send message
                        /*   message = parse (
                           
                               test-pco  {
                           
                                             name
                           
                                       $(<STRING,PTREE(pvName)>),
                           
                                             pco
                           
                                       $(<STRING,PTREE("anything")>)
                           
                               }
                           
                           );    */
                        //  PTREE   theName ;                    // name
                        PTREE   pco ; // ip address
                        listValue = new PTREE(); // list of values
                        theName
                            = asn.CreateNamedNode("name"
                                , asn.CreateString(pvName));
                        pco = asn.CreateNamedNode("pco"
                            , asn.CreateString("anything"));
                        listValue.AddList(theName);
                        listValue.AddList(pco);
                        
                        // PTREE   declTest ;
                        declTest = new PTREE(asn.SEQUENCE_VALUE, 1);
                        declTest.ReplaceTree(1, listValue);
                        declTest
                            = asn.CreateNamedNode("test-pco", declTest);
                        message = declTest ;
                        pvInetUtil.InetWrite(message, true);
                        
                        // tval.tv_sec = 30 ;
                        // tval.tv_usec = 0 ;
                        pvInetUtil.TimeVal(30, 0);
                        message = pvInetUtil.InetReadLow(false);
                        if ( message.NumberTree() == asn.NAMED_VALUE
                                && message.Value().compareTo("test-pco")
                                    == 0 ) 
                            ;
                        else {
                            pIsin = null ;
                            pOsin = null ;
                            port = keepPort ;
                            maxTry = keepMaxTry ;
                            continue ;
                        }
                        // find the content
                        /*
                           
                           if (  message != <NAMED_VALUE,<IDENT,"test-pco">>   true ) {
                           
                               delete pIsin ;
                           
                               delete pOsin ;
                           
                               port = keepPort ;
                           
                               maxTry = keepMaxTry ;
                           
                               goto start ;
                           
                           } */ 
                    }
                }
                
                // set blocked input
                // tval.tv_sec = 0 ;
                // tval.tv_usec = 0 ;
                pvInetUtil.TimeVal(0, 0);
                
                // now we are connected, destroy upper channel
                if ( pvInetUtil.HasOutput() ) {
                    
                    // delete &pvInetUtil.Osockinet();
                    pvInetUtil.ForgetOutput();
                }
            } else 
                Connected(false);
            
            // return object
            return this ;
        } // return this;
    }
    
    // closeChannel : close a channel
    // parameters :
    //              channel : the channel to be closed
    public void CloseChannel ( String channel )
    {
        PTREE   var1 ;
        PTREE   resList = new PTREE();
        
        // create close message
        var1 = asn.CreateNamedNode("name", asn.CreateString(pvName));
        resList.AddList(var1);
        var1 = asn.CreateNamedNode("pco", asn.CreateString(channel));
        resList.AddList(var1);
        var1 = new PTREE(asn.SEQUENCE_VALUE, 1);
        var1.ReplaceTree(1, resList);
        var1 = asn.CreateNamedNode("close-pco", var1);
        
        // send it to dispatcher
        pvInetUtil.InetWrite(var1, true);
    }
    
    // OpenChannel : opening a channel in a connection
    // parameters :
    //             channel : name of the channel
    //             outputPco : declare as an only ouput channel
    // return : the object
    public QConnection OpenChannel ( String channel )
    {
        return OpenChannel(channel, false);
    }
    
    public QConnection OpenChannel ( String channel, boolean outputPco )
    {
        
        PTREE   message ;        // message to send
        String  messageContent ; // content of message
        int     lengthEncoded ;  // encoded length
        boolean permutate ;      // permutate socket
        
        permutate = !pvInetUtil.HasOutput();
        if ( false ) {
            
            // mede :
            /* message = parse (
               
                   declaration-testeur  {
               
                           name
               
                     $(<STRING,MakeString((char *)(const char *) pvName)>),
               
                           ip-address $(<STRING,PTREE(pvIp)>),
               
                           address $(<NUMB,MakeString(pvAddress)>)
               
                   }
               
               ); */
            message = new PTREE();
            pvInetUtil.InetWrite(message, false);
        }
        
        // set ouput pco mode
        PTREE   outputPcoMode ; // output pco mode
        
        outputPcoMode = asn.CreateBoolean(outputPco);
        
        // code message
        /*message = parse (
           
               declaration-pco  {
           
                             name
           
                       $(<STRING,MakeString((char *) (const char *) pvName)>),
           
                             pco
           
                       $(<STRING,MakeString((char *)(const char *) channel)>),
           
                             output-only
           
                       $(outputPcoMode)
           
               }
           
           );   */
        
        PTREE   theName ;                 // name
        PTREE   pco ;                     // address
        PTREE   output_only ;             // output only
        PTREE   listValue = new PTREE();  // list of values
        
        theName = asn.CreateNamedNode("name", asn.CreateString(pvName));
        pco = asn.CreateNamedNode("pco", asn.CreateString(channel));
        output_only = asn.CreateNamedNode("output-only", outputPcoMode);
        listValue.AddList(theName);
        listValue.AddList(pco);
        listValue.AddList(output_only);
        
        PTREE   declTest ;
        
        declTest = new PTREE(asn.SEQUENCE_VALUE, 1);
        declTest.ReplaceTree(1, listValue);
        declTest = asn.CreateNamedNode("declaration-pco", declTest);
        message = declTest ;
        
        // send it
        pvInetUtil.InetWrite(message, permutate);
        
        // wait until channel is known in dispatcher
        
        PTREE   selector ; // selector
        int     counter = 0 ;
        
        while ( true ) {
            counter++ ;
            
            // if ( counter >= 50 && !permutate )
            //    goto mede ;
            /*message = parse (
               
                   test-pco  {
               
                                 name
               
                           $(<STRING,MakeString((char *) (const char *) pvName)>),
               
                                 pco
               
                           $(<STRING,MakeString((char *)(const char *) channel)>)
               
                   }
               
               );   */
            // PTREE   pco ; // ip address
            listValue = new PTREE(); // list of values
            theName = asn.CreateNamedNode("name", asn.CreateString(pvName));
            pco = asn.CreateNamedNode("pco", asn.CreateString(channel));
            listValue.AddList(theName);
            listValue.AddList(pco);
            
            // PTREE   declTest ;
            declTest = new PTREE(asn.SEQUENCE_VALUE, 1);
            declTest.ReplaceTree(1, listValue);
            declTest = asn.CreateNamedNode("test-pco", declTest);
            message = declTest ;
            pvInetUtil.InetWrite(message, permutate);
            message = pvInetUtil.InetReadLow(false);
            
            // find the content
            if ( message.NumberTree() == asn.NAMED_VALUE
                    && message.Value().compareTo("test-pco") == 0 ) {
                PTREE   state ; // state of pco
                state = QInetUtil.GetNamedValue("state", message);
                if ( state.NumberTree() == asn.TRUE ) {
                    String  sizePacket ;
                    sizePacket
                        = QInetUtil.GetNamedValue("size-packet", message)
                            .Value();
                    pvInetUtil.SizeMin(Integer.parseInt(sizePacket, 10));
                    break ;
                }
            }
        }
        
        // now we are connected, destroy upper channel
        if ( pvInetUtil.HasOutput() ) {
            pvInetUtil.ForgetOutput();
        }
        
        // set input socket in no delay
        // pvInetUtil . Isockinet().setnodelay();
        // return object
        return this ;
    }
    
    // CloseChannels : closing the channels in a connection
    // parameters :
    public void CloseChannels () {} /*
                                       
                                       PTREE   message ; // message to send
                                       
                                       
                                       
                                       if ( pvIsOpened ) {
                                       
                                           int nbSock ; // number of socks opened
                                       
                                           nbSock = pvInetUtil.NbSock();
                                       
                                           
                                       
                                           // there must be at least on more socket than main
                                       
                                           if ( nbSock <= 1 ) 
                                       
                                               return ;
                                       
                                           message = parse (
                                       
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
                                       
                                           
                                       
                                           // wait the call to be completed (sockets to be disconnected)
                                       
                                           while ( pvInetUtil.NbSock() >= nbSock ) {
                                       
                                               pvInetUtil.InetReadLow();
                                       
                                               
                                       
                                               // after 10 minutes stop
                                       
                                               if ( time(0) - currTime > 600 )
                                       
                                                   return ;
                                       
                                           }
                                       
                                           pvIsOpened = false ;
                                       
                                       }
                                       
                                       */ 
    
    // Send : send a content on a channel
    // parameters :
    //               channel : the channel where to send
    //               content : the content to send
    //               coarse : tell to send as a coarse string
    public void Send ( String channel, PTREE content )
    {
        EString encoding = pvInetUtil.FullEncode(content, channel);
        
        SendString(channel, encoding);
    }
    
    // SendString : send a string content on a channel
    // parameters :
    //               channel : the channel where to send
    //               messageString : message string to be send
    public void SendString ( String channel, EString messageString )
    {
        
        PTREE           message ;       // message to send
        StringBuffer    string ;        // encoding of message
        StringBuffer    ptString ;      // pointer on string
        int             lookAhead = 0 ; // to manage lookAhead
        PTREE           ptChunk ;       // pointer for chunk of message
        int             start = 0 ;
        int             length = messageString.length();
        
        // compute string to be send
        string = ptString = messageString.GetStringBuffer();
        while ( length > 0 ) {
            
            // if string is too long send it by chunk
            if ( length > CHUNK_SIZE ) {
                
                // send event
                message
                    = GetAMessage(SEND_EVENT_CHUNK, pvName, channel
                        , string, start, CHUNK_SIZE);
                pvInetUtil.InetWrite(message, true);
                
                // prepare next step
                start += CHUNK_SIZE ;
                length -= CHUNK_SIZE ;
                
                // read synchro
                if ( lookAhead >= LOOK_AHEAD ) {
                    PTREE   received ;    // received value
                    PTREE   messContent ; // message content 
                    received = pvInetUtil.InetReadLow(false);
                    if ( false /*received == <NAMED_VALUE,<IDENT,"kill">,messContent>
                                  
                                  && !strcmp(Value(messContent), "") */ ) {
                        CloseChannels(); /* MetaExit(0, "Killed process\n");  */ 
                    }
                } else 
                    lookAhead++ ;
            } else if ( start != 0 ) {
                
                // send event
                message
                    = GetAMessage(SEND_EVENT_CHUNK_END, pvName, channel
                        , string, start, length);
                pvInetUtil.InetWrite(message, true);
                length = 0 ;
            } else {
                
                // send event
                message
                    = GetAMessage(SEND_EVENT, pvName, channel, string
                        , start, length);
                pvInetUtil.InetWrite(message, true);
                length = 0 ;
            }
        }
        
        // read remaining synchro
        while ( lookAhead-- != 0 ) 
            pvInetUtil.InetReadLow(false);
    }
    
    // Rearm : rearm connection to receive an event
    public void Rearm () {} /*
                               
                               PTREE   message ;         // message to send
                               
                               char    *messageContent ; // content of message
                               
                               int     lengthEncoded ;   // encoded length
                               
                               EString wholeContent ;    // the whole content
                               
                               PTREE   content ;
                               
                               
                               
                               if ( !pvWaitingResponse ) {
                               
                                   message = GetAMessage(GET_EVENT_BLOCKED, (char *)(pvName.c_str()));
                               
                                   pvWaitingResponse = true ;
                               
                                   pvInetUtil.InetWrite(message, true, true);
                               
                               }
                               
                               */ 
    
    // Receive : receive a content 
    // parameters :
    //              blocked : tell if we wait for message
    // return : the tree which has been received
    public PTREE Receive ( boolean blocked )
    {
        
        PTREE           message ;                       // message to send
        String          messageContent = new String();  // content of message
        int             lengthEncoded ;                 // encoded length
        StringBuffer    wholeContent ;                  // the whole content
        PTREE           content ;
        
        if ( pvInetUtil.Empty() && (!blocked || !pvWaitingResponse) ) {
            
            // reception evenement
            if ( blocked ) {
                message
                    = GetAMessage(GET_EVENT_BLOCKED, pvName, pvName
                        , new StringBuffer(""), - 1, - 1);
                pvWaitingResponse = true ;
            } else {
                message
                    = GetAMessage(GET_EVENT, pvName, pvName
                        , new StringBuffer(""), - 1, - 1);
            }
            pvInetUtil.InetWrite(message, true);
        }
        
        // return value
        
        PTREE   received ;         // received tree
        PTREE   selector ;         // selector
        PTREE   messContent ;      // messContent
        Vector  chunks ;           // chunks of message
        boolean moreChunk = true ; // more chunks to be received
        
        chunks = new Vector();
        
        // find the content 
        while ( moreChunk ) {
            received = pvInetUtil.InetReadLow(false);
            if ( received.NumberTree() == asn.NAMED_VALUE ) {
                selector = received.SonTree(1);
                messContent = received.SonTree(2);
                if ( selector.Value().compareTo("envoie-evenement") == 0 ) {
                    
                    // store sender
                    pvSenderName
                        = pvInetUtil.GetNamedValue("sender", messContent)
                            .Value();
                    pvSenderChannel
                        = pvInetUtil.GetNamedValue("pco", messContent)
                            .Value();
                    
                    // get content
                    content
                        = pvInetUtil.GetNamedValue("content", messContent); // content
                    PTREE   reference ; // reference part
                    
                    // translate content
                    messageContent = content.Value();
                    moreChunk = false ;
                    pvWaitingResponse = false ;
                } else if ( selector.Value().compareTo(
                                "envoie-evenement-chunk")
                            == 0 ) {
                    PTREE   acknowledgement ; // the acknowledgement
                    acknowledgement = new PTREE(asn.NULL_VALUE, 0);
                    acknowledgement
                        = asn.CreateNamedNode("acknowledgement"
                            , acknowledgement);
                    
                    // send acknowledgment
                    /* acknowledgement = parse (acknowledgement NULL);*/
                    pvInetUtil.InetWrite(acknowledgement, true);
                    
                    // store this chunk
                    chunks.addElement(
                        QInetUtil.GetNamedValue("content", messContent));
                    pvWaitingResponse = false ;
                } else if ( selector.Value().compareTo(
                                "envoie-evenement-chunk-end")
                            == 0 ) {
                    
                    // store sender
                    pvSenderName
                        = pvInetUtil.GetNamedValue("sender", messContent)
                            .Value();
                    pvSenderChannel
                        = pvInetUtil.GetNamedValue("pco", messContent)
                            .Value();
                    
                    // compute content
                    int lengthVector = chunks.size();
                    int indexVector = 0 ;
                    wholeContent = new StringBuffer();
                    for ( indexVector = 0 ; indexVector < lengthVector ; 
                            indexVector++ ) {
                        wholeContent.append(
                            ((PTREE)(chunks.elementAt(indexVector))).Value());
                    }
                    wholeContent.append(
                        QInetUtil.GetNamedValue("content", messContent)
                            .Value());
                    
                    // translate content
                    messageContent = wholeContent.toString();
                    moreChunk = false ;
                } else if ( selector.Value().compareTo("pas-evenement")
                            == 0 ) {
                    
                    // do a last try
                    if ( !pvInetUtil.Empty() ) 
                        return Receive(blocked);
                    else 
                        return received ;
                } else if ( selector.Value().compareTo("kill") == 0 ) {
                    if ( messContent.Value().compareTo("") == 0 ) {
                        System.out.println("Killed process QConection");
                        /*{
                           
                               SimWired.asnApi.End(true);
                           
                               if(SimWired.asnApi.End())
                           
                               {
                           
                           	    System.out.println("End :TRUE!!!!!!");
                           
                               }
                           
                               else
                           
                               {
                           
                           	    System.out.println("End :FALSE!!!!!!");
                           
                               }
                           
                           }*/
                        return received ; /*						try
                                             
                                             {
                                             
                                             	Thread.currentThread().sleep(3000);
                                             
                                             }
                                             
                                             catch (InterruptedException e)
                                             
                                             {
                                             
                                             	System.out.println("Exception URL dans receive"+e.toString());
                                             
                                             }
                                             
                                             
                                             
                                             */ /*						Thread.currentThread().stop();
                                                   
                                                   URL dataURL;
                                                   
                                                   try
                                                   
                                                   {
                                                   
                                                   		// Envoi de la requete au serveur
                                                   
                                                   		//dataURL = new URL("http://"+machine+":"+port+"/fin_execution/"+commun);
                                                   
                                                   		dataURL = new URL("http://pccle:8182/get/end.html");
                                                   
                                                   }
                                                   
                                                   catch (IOException e)
                                                   
                                                   {
                                                   
                                                   	System.out.println("Exception URL dans run");
                                                   
                                                   }
                                                   
                                                   
                                                   
                                                   // affiche le document HTML
                                                   
                                                   System.out.println("Load new page html");
                                                   
                                                   getAppletContext().showDocument(dataURL);
                                                   
                                                   */ 
			// CloseChannels();
                                                      // MetaExit(0, "Killed process\n");
                                                      //                        int r = 0 ;
                    }
                } else {
                    pvSenderName = pvSenderChannel = "";
                    PTREE   result = new PTREE(); // message to send
                    /*result = <IN_LANGUAGE,(),received>; */
                    return result ;
                }
            } else {
                moreChunk = false ;
                messContent = new PTREE();
                return messContent ;
            }
        }
        
        // get tree out of message content
        {
            {
                EString sMessage = new EString(messageContent);
                messContent
                    = pvInetUtil.FullInterpret(sMessage, pvSenderChannel);
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
    public PTREE GetAMessage ( int typeMessage, String string1
        , String string2, StringBuffer string3, int bufStart, int bufLength )
    {
        PTREE   eventName = asn.CreateString(string1);
        PTREE   eventPco = asn.CreateString(string2);
        PTREE   eventContent = new PTREE();
        
        if ( bufStart >= 0 ) {
            eventContent = new PTREE(asn.HSTRING, 1);
            String  bufContent
                = string3.toString().substring(bufStart
                    , bufStart + bufLength);
            eventContent.ReplaceTree(1, new PTREE(bufContent));
        }
        switch ( typeMessage ) {
            case SEND_EVENT : 
                {
                    PTREE   theName ;                 // name
                    PTREE   pco ;                     // ip address
                    PTREE   content ;                 // address
                    PTREE   listValue = new PTREE();  // list of values
                    theName = asn.CreateNamedNode("name", eventName);
                    pco = asn.CreateNamedNode("pco", eventPco);
                    content = asn.CreateNamedNode("content", eventContent);
                    listValue.AddList(theName);
                    listValue.AddList(pco);
                    listValue.AddList(content);
                    PTREE   declTest ;
                    declTest = new PTREE(asn.SEQUENCE_VALUE, 1);
                    declTest.ReplaceTree(1, listValue);
                    declTest
                        = asn.CreateNamedNode("envoie-evenement", declTest);
                    return declTest ;
                }
            case SEND_EVENT_CHUNK : 
                {
                    PTREE   theName ;                 // name
                    PTREE   pco ;                     // ip address
                    PTREE   content ;                 // address
                    PTREE   listValue = new PTREE();  // list of values
                    theName = asn.CreateNamedNode("name", eventName);
                    pco = asn.CreateNamedNode("pco", eventPco);
                    content = asn.CreateNamedNode("content", eventContent);
                    listValue.AddList(theName);
                    listValue.AddList(pco);
                    listValue.AddList(content);
                    PTREE   declTest ;
                    declTest = new PTREE(asn.SEQUENCE_VALUE, 1);
                    declTest.ReplaceTree(1, listValue);
                    declTest
                        = asn.CreateNamedNode("envoie-evenement-chunk"
                            , declTest);
                    return declTest ;
                    ;
                }
            case SEND_EVENT_CHUNK_END : 
                {
                    PTREE   theName ;                 // name
                    PTREE   pco ;                     // ip address
                    PTREE   content ;                 // address
                    PTREE   listValue = new PTREE();  // list of values
                    theName = asn.CreateNamedNode("name", eventName);
                    pco = asn.CreateNamedNode("pco", eventPco);
                    content = asn.CreateNamedNode("content", eventContent);
                    listValue.AddList(theName);
                    listValue.AddList(pco);
                    listValue.AddList(content);
                    PTREE   declTest ;
                    declTest = new PTREE(asn.SEQUENCE_VALUE, 1);
                    declTest.ReplaceTree(1, listValue);
                    declTest
                        = asn.CreateNamedNode("envoie-evenement-chunk-end"
                            , declTest);
                    return declTest ;
                }
            case GET_EVENT : 
                {
                    PTREE   theName ;                 // name
                    PTREE   listValue = new PTREE();  // list value
                    theName = asn.CreateNamedNode("name", eventName);
                    listValue.AddList(theName);
                    PTREE   declTest ;
                    declTest = new PTREE(asn.SEQUENCE_VALUE, 1);
                    declTest.ReplaceTree(1, listValue);
                    declTest
                        = asn.CreateNamedNode("reception-evenement"
                            , declTest);
                    return declTest ;
                }
            case GET_EVENT_BLOCKED : 
                {
                    PTREE   theName ;                 // name
                    PTREE   listValue = new PTREE();  // list value
                    theName = asn.CreateNamedNode("name", eventName);
                    listValue.AddList(theName);
                    PTREE   declTest ;
                    declTest = new PTREE(asn.SEQUENCE_VALUE, 1);
                    declTest.ReplaceTree(1, listValue);
                    declTest
                        = asn.CreateNamedNode("reception-evenement-bloque"
                            , declTest);
                    return declTest ;
                }
        }
        return new PTREE();
    }
    
    // Syntax : set syntax for connection
    // parameters :
    // 
    //              channel : channel where to put syntax
    //              fileSyntax : file where to read syntax
    // return : the whole object
    public void Syntax ( String channel, GenGramm genGramm )
    {
        pvInetUtil.Syntax(channel, genGramm);
    }
    
    // TimeVal : TimeVal modifier
    // parameters :
    //               sec : seconds
    //               milli : milli seconds
    public void TimeVal ( int sec, int milli )
    {
        pvInetUtil.TimeVal(sec, milli);
    }
    
    // Sender : get last sender
    public String Sender ()
    {
        return pvSenderName ;
    }
    
    // Channel : get last channel
    public String Channel ()
    {
        return pvSenderChannel ;
    }
    
    private String      pvName ;            // name of communication
    private String      pvChannel ;         // channel where there are some
    
    //  pdu waiting
    private QInetUtil   pvInetUtil ;        // for writing and reading
    private String      pvSenderName ;      // name of last message sender
    private String      pvSenderChannel ;   // channel of last message
    private boolean     pvConnected ;       // tell if connected
    private boolean     pvWaitingResponse ; // we send a blocked asking
    private boolean     pvIsOpened ;        // tell if connection is opened
    private String      pvIp ;              // ip address
    private String      pvAddress ;         // local port
}
