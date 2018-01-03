///////////////////////////////////////////////////////////////////////////////////
// connect.h : manage a connection
///////////////////////////////////////////////////////////////////////////////////
#ifndef QCONNECT_FILE
#   define QCONNECT_FILE 1
#   include "token.h"
    
    // #include <String.h>
#   include "../asn/decasn.h"
#   include "../asnext/asnext.h"
#   include "quickinetutil.h"
#   include "quickasn.h"
#   include "../connect/metaconnect.h"
#   ifdef MOST_RECENT_STL
#       include <list>
#   else 
#       include <list.h>
#   endif
    
    class QConnection : public MetaConnection {
        
        public :
        
            // constructor 
            QConnection ()
                : pvName(""),  pvChannel(""),  pvSendEvent(0),  pvSendEventChunk(0),  pvSendEventChunkEnd(0),  pvGetEvent(0),  pvGetEventBlocked(0)
                    ,  pvWaitingResponse(false),  pvIsOpened(false),  pvShared(false),  pvSthingReceived(0),  pvFirstDispatMem(true)
            {}
            
            // destructor
            virtual ~QConnection ()
            {
                if ( pvIsOpened ) 
                    CloseChannels();
            }
            
            // Open : opening of a connection under a name
            // parameters :
            //             name : name of the connection
            //             locAddr : local ip address
            //             _iIpAddr : IP address where to connect
            //             port : port where to connect
            //             maxTry : number max of try on dispatcher
            // return : the object
            virtual MetaConnection  &Open (const EString &name, const char *locAddr = "127.0.0.1", const char *_iIpAddr = (const char *)0, int port = dispatcherPort
                , int maxTry = -1) ;
            
            // OpenChannel : opening a channel in a connection
            // parameters :
            //             channel : name of the channel
            //             outputPco : declare as an only ouput channel
            // return : the object
            virtual MetaConnection  &OpenChannel (EString channel, bool ouputPco = false) ;
            
            // CloseChannel : closing a channel in a connection
            // parameters :
            //             channel : name of the channel
            // return : the object
            virtual MetaConnection  &CloseChannel (EString channel) ;
            
            // CloseChannels : closing channels in a connection
            virtual void            CloseChannels () ;
            
            // SendRaw : send a raw content 
            // parameters :
            //               message : message to be send
            virtual void SendRaw ( PTREE message )
            {
                pvInetUtil.InetWrite(message, true, true);
            }
            
            // Send : send a content on a channel
            // parameters :
            //               channel : the channel where to send
            //               content : the content to send
            //               coarse : tell to send as a coarse string
            virtual void    Send (const EString &channel, PTREE content, bool coarse = false) ;
            
            // SendString : send a string content on a channel 
            // parameters :
            //               channel : the channel where to send
            //               messageString : message string to be send
            virtual void    SendString (const EString &channel, const EString &messageString) ;
            
            // Rearm : rearm connection to receive an event
            virtual void    Rearm () ; // Receive : receive a content 
            
            // Receive : receive a content 
            // parameters :
            //              blocked : tell if we wait for message
            // return : the tree which has been received
            PTREE           ReceiveContent (bool blocked) ;
            
            // parameters :
            //               blocked : tell if wait for message
            // return : received tree
            virtual PTREE   Receive (bool blocked = false) ;
            
            // Syntax : set syntax for connection
            // parameters :
            // 
            //              channel : channel where to put syntax
            //              fileSyntax : file where to read syntax
            // return : the whole object
            virtual MetaConnection &Syntax ( EString channel, GenGramm *genGramm )
            {
                pvInetUtil.Syntax(channel, genGramm);
                return *this ;
            }
            
            // Syntax : set syntax for connection, default syntax
            // parameters :
            // 
            //              fileSyntax : file where to read syntax
            // return : the whole object
            virtual MetaConnection &Syntax ( EString fileSyntax )
            {
                pvInetUtil.Syntax(fileSyntax);
                return *this ;
            }
            
#           if 0
                
                // Decomp : get decompiler on a given channel
                // parameters :
                //              channel : the channel where to get the asn decompiler
                // return : the decompiler
                DecompAsn *Decomp ( const EString &channel )
                {
                    return pvInetUtil.Decomp(channel);
                }
#           endif
            
            // FullInterpret : interpret a string coded as hexa string with user grammar
            // parameters :
            //              message : the string to be interpreted
            //              channel : channel of interpretation (if some)
            // return : the decoded tree
            virtual PTREE FullInterpret ( EString &message, EString channel = " " )
            {
                return pvInetUtil.FullInterpret(message, channel);
            }
            
            // FullEncode : full encoding of a tree
            // parameters :
            //              tree : the tree to be encoded
            //              channel : channel of interpretation (if some)
            // return : the encoding
            virtual EString FullEncode ( PTREE tree, EString channel = " " )
            {
                return pvInetUtil.FullEncode(tree, channel);
            }
            
            // TimeVal : TimeVal modifier
            // parameters :
            //               timeVal : new value for timeval
            virtual void TimeVal ( struct timeval &tval )
            {
                
                // set timeval struct 
                pvInetUtil.TimeVal(tval);
            }
            
            // Connected : accessor
            virtual bool Connected () const
            {
                return pvConnected ;
            }
            
            // Connected : connected modifier
            // parameters :
            //              connected : the new connected value
            // return : the whole object
            virtual MetaConnection &Connected ( bool connected )
            {
                pvConnected = connected ;
                return *this ;
            }
            
            // Empty : tell if they are messages allready read
            // return : true if no message
            virtual bool Empty ()
            {
                return pvInetUtil.Empty();
            }
            
            // FastEncode : tell if fast encode
            //              channel : channel to look for
            virtual bool FastEncode ( const EString &channel )
            {
                return pvInetUtil.FastEncode(channel);
            }
            
            // FastEncode : set fast encode
            // parameters :
            //              channel : channel to look for
            //              fastSpeed : tell if fast encode
            virtual void FastEncode ( const EString &channel, bool fastSpeed )
            {
                pvInetUtil.FastEncode(channel, fastSpeed);
            }
            
            // GetAMessage : get different type of messages
            // parameters :
            //               typeMessage : type of message
            //               string1 : first parameter string in message
            //               string2 : second parameter string in message
            //               string3 : third parameter string in message
            // return : the message
            virtual PTREE   GetAMessage (TypeMessage typeMessage, char *string1, char *string2 = (char *)0, char *string3 = (char *)0) ;
            
            // OutputSock : output socket 
            // return : the output socket
            virtual SOCKET OutputSock ()
            {
                return pvInetUtil.OutputSock();
            }
            
            // InputSock : input socket 
            // return : the input sockets
            virtual std::vector<SOCKET> InputSock ()
            {
                return pvInetUtil.InputSock();
            }
            
            // SizeMin : set size min of pdu
            // parameters :
            //               sizeMin : the size min
            // return : the whole object
            virtual MetaConnection &SizeMin ( unsigned int sizeMin )
            {
                
                // set value
                pvInetUtil.SizeMin(sizeMin);
                
                // return object
                return *this ;
            }
            
            // add input socket
            // parameters :
            //              newSock : the new socket
            virtual void AddInputSock ( SOCKET newSock )
            {
                pvInetUtil.AddInputSock(newSock);
            }
            
            // add input socket
            // parameters :
            //              newSock : the new socket
            virtual void RemoveInputSock ( SOCKET newSock )
            {
                pvInetUtil.RemoveInputSock(newSock);
            }
            
            // put input thread
            void ThreadInput ( EString &name )
            {
                pvInetUtil.ThreadInput(name);
            }
        
        private :
        
            EString     pvName ;                     // name of communication
            EString     pvChannel ;                  // channel where there are some
                                                     //  pdu waiting
            QInetUtil   pvInetUtil ;                 // for writing and reading
            bool        pvConnected ;                // tell if connected
            PTREE       pvSendEvent ;                // ptree sending event
            PTREE       pvSendEventName ;            // ptree sending event
            PTREE       pvSendEventPco ;             // ptree sending event
            PTREE       pvSendEventContent ;         // ptree sending event
            PTREE       pvSendEventChunk ;           // idem
            PTREE       pvSendEventChunkName ;       // ptree sending event
            PTREE       pvSendEventChunkPco ;        // ptree sending event
            PTREE       pvSendEventChunkContent ;    // ptree sending event
            PTREE       pvSendEventChunkEnd ;        // idem
            PTREE       pvSendEventChunkEndName ;    // ptree sending event
            PTREE       pvSendEventChunkEndPco ;     // ptree sending event
            PTREE       pvSendEventChunkEndContent ; // ptree sending event
            PTREE       pvGetEvent ;                 // idem
            PTREE       pvGetEventName ;             // idem
            PTREE       pvGetEventBlocked ;          // idem
            PTREE       pvGetEventBlockedName ;      // idem
            bool        pvWaitingResponse ;          // we send a blocked asking
            bool        pvIsOpened ;                 // tell if connection is opened
            EString     pvIp ;                       // ip address
            EString     pvAddress ;                  // local port
            bool        pvShared ;                   // tells if use shared memory to connect to dispatcher
            int         pvSthingReceived ;           // tells if sthing was received and give identifier for current connection
            bool        pvFirstDispatMem ;           // first dispatcher with shared memory need ack for big messages
    };
#endif
