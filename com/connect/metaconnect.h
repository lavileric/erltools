///////////////////////////////////////////////////////////////////////////////////
// connect.h : manage a connection
///////////////////////////////////////////////////////////////////////////////////
#ifndef METAQCONNECT_FILE
#   define METAQCONNECT_FILE 1
#   include "token.h"
#   include "metainetutil.h"
#   ifdef MOST_RECENT_STL
#       include <list>
#   else 
#       include <list.h>
#   endif
    
    // #include <String.h>
#   include "../asn/decasn.h"
#   include "../asnext/asnext.h"
    class GenGramm ;
    
    class MetaConnection {
        
        public :
        
            enum TypeMessage { SEND_EVENT, SEND_EVENT_CHUNK, SEND_EVENT_CHUNK_END, GET_EVENT, GET_EVENT_BLOCKED };
            
            // constructor 
            MetaConnection ()
                : pvSenderName(""),  pvSenderChannel(""),  pvSecStamp("0"),  pvMSecStamp("0")
            {}
            
            // destructor
            ~MetaConnection () {}
            
            // Open : opening of a connection under a name
            // parameters :
            //             name : name of the connection
            //             locAddr : local ip address
            //             _iIpAddr : IP address where to connect
            //             port : port where to connect
            //             maxTry : number max of try on dispatcher
            // return : the object
            virtual MetaConnection &Open ( const EString &name, char *locAddr = (char *)"127.0.0.1", char *_iIpAddr = (char *)0, int port = dispatcherPort
                , int maxTry = -1 )
            {
                return *this ;
            }
            
            // OpenChannel : opening a channel in a connection
            // parameters :
            //             channel : name of the channel
            //             outputPco : declare as an only ouput channel
            // return : the object
            virtual MetaConnection &OpenChannel ( EString channel, bool ouputPco = false )
            {
                return *this ;
            }
            
            // CloseChannel : closing a channel in a connection
            // parameters :
            //             channel : name of the channel
            // return : the object
            virtual MetaConnection &CloseChannel ( EString channel )
            {
                return *this ;
            }
            
            // CloseChannels : closing channels in a connection
            virtual void CloseChannels () {}
            
            // SendRaw : send a raw content 
            // parameters :
            //               message : message to be send
            virtual void SendRaw ( PTREE message ) {}
            
            // Send : send a content on a channel
            // parameters :
            //               channel : the channel where to send
            //               content : the content to send
            //               coarse : tell to send as a coarse string
            virtual void Send ( const EString &channel, PTREE content, bool coarse = false ) {}
            
            // SendString : send a string content on a channel 
            // parameters :
            //               channel : the channel where to send
            //               messageString : message string to be send
            virtual void SendString ( const EString &channel, const EString &messageString ) {}
            
            // Rearm : rearm connection to receive an event
            virtual void Rearm () {}
            
            // Receive : receive a content 
            // parameters :
            //               blocked : tell if wait for message
            // return : received tree
            virtual PTREE Receive ( bool blocked = false )
            {
                return PTREE(0);
            }
            
            // Syntax : set syntax for connection
            // parameters :
            // 
            //              channel : channel where to put syntax
            //              fileSyntax : file where to read syntax
            // return : the whole object
            virtual MetaConnection &Syntax ( EString channel, GenGramm *genGramm )
            {
                return *this ;
            }
            
            // Syntax : set syntax for connection
            // parameters :
            // 
            //              channel : channel where to put syntax
            //              fileSyntax : file where to read syntax
            // return : the whole object
            virtual MetaConnection &Syntax ( EString channel, EString fileSyntax )
            {
                return *this ;
            }
            
            // Syntax : set syntax for connection, default syntax
            // parameters :
            // 
            //              fileSyntax : file where to read syntax
            // return : the whole object
            virtual MetaConnection &Syntax ( EString fileSyntax )
            {
                return *this ;
            }
            
#           if 0
                
                // SenderName : get sender name
                // return : the  sender name
                virtual const EString &SenderName () const
                {
                    return pvEmptyString ;
                }
                
                // SenderChannel : get sender channel
                // return : the  sender channel
                virtual const EString &SenderChannel () const
                {
                    return pvEmptyString ;
                }
#           endif
            
            // FullInterpret : interpret a string coded as hexa string with user grammar
            // parameters :
            //              message : the string to be interpreted
            //              channel : channel of interpretation (if some)
            // return : the decoded tree
            virtual PTREE FullInterpret ( EString &message, EString channel = " " )
            {
                return PTREE(0);
            }
            
            // FullEncode : full encoding of a tree
            // parameters :
            //              tree : the tree to be encoded
            //              channel : channel of interpretation (if some)
            // return : the encoding
            virtual EString FullEncode ( PTREE tree, EString channel = " " )
            {
                return "";
            }
            
            // TimeVal : TimeVal modifier
            // parameters :
            //               timeVal : new value for timeval
            virtual void TimeVal ( struct timeval &tval ) {}
            
            // Connected : accessor
            virtual bool Connected () const
            {
                return false ;
            }
            
            // Connected : connected modifier
            // parameters :
            //              connected : the new connected value
            // return : the whole object
            virtual MetaConnection &Connected ( bool connected )
            {
                return *this ;
            }
            
            // Empty : tell if they are messages allready read
            // return : true if no message
            virtual bool Empty ()
            {
                return false ;
            }
            
            // FastEncode : tell if fast encode
            //              channel : channel to look for
            virtual bool FastEncode ( const EString &channel )
            {
                return false ;
            }
            
            // FastEncode : set fast encode
            // parameters :
            //              channel : channel to look for
            //              fastSpeed : tell if fast encode
            virtual void FastEncode ( const EString &channel, bool fastSpeed ) {}
            
            // GetAMessage : get different type of messages
            // parameters :
            //               typeMessage : type of message
            //               string1 : first parameter string in message
            //               string2 : second parameter string in message
            //               string3 : third parameter string in message
            // return : the message
            virtual PTREE GetAMessage ( TypeMessage typeMessage, char *string1, char *string2 = (char *)0, char *string3 = (char *)0 )
            {
                return PTREE(0);
            }
            
            // OutputSock : output socket 
            // return : the output socket
            virtual SOCKET OutputSock ()
            {
                return (SOCKET) -1 ;
            }
            
            // InputSock : input socket 
            // return : the input sockets
            virtual std::vector<SOCKET>     InputSock () = 0 ;
            
            // SizeMin : set size min of pdu
            // parameters :
            //               sizeMin : the size min
            // return : the whole object
            virtual MetaConnection &SizeMin ( unsigned int sizeMin )
            {
                
                // return object
                return *this ;
            }
            
            // IsLookAhead : search if message is searched lookahead
            // parameters :
            //               name : name of appli
            //               message : received message
            // return 0 not good 1 good 2 good to be saved
            static int  IsLookAhead (EString &name, PTREE &message) ;
            
            // LookAheadSynchro : get look ahead synchro
            // parameters :
            //              name : name for look ahead
            //              nbSynchro : nb of synchro
            //              util : the util object
            //              listMess : the list of message
            //              lookTimeOut : look if time out
            //              lookTimeVal : look time out val
            //              dispatchRefNumber : ref number for dispatcher (used for kill)
            static bool LookAheadSynchro (EString &name, int nbSynchro, MetaInetUtil &util, list<PTREE> &listMess, bool lookTimeOut = false, int lookTimeVal = -1
                , int dispatchRefNumber = -1) ;
            
            // SearchChunkEnd : get chunk end 
            // parameters :
            //              name : name for look ahead
            //              util : the util object
            //              sendUtil : the util for sending acks
            //              listMess : the list of message
            //              chunks : where to store messages
            //              oldProtocol : type of protocol
            PTREE       SearchChunkEnd (EString &name, MetaInetUtil &util, MetaInetUtil &sendUtil, list<PTREE> &chunks, bool olProtocol) ;
            
            // SenderName : get sender name
            // return : the  sender name
            virtual const EString &SenderName () const
            {
                return pvSenderName ;
            }
            
            // SenderChannel : get sender channel
            // return : the  sender channel
            virtual const EString &SenderChannel () const
            {
                return pvSenderChannel ;
            }
            
            // SecStamp 
            const EString &SecStamp ()
            {
                return pvSecStamp ;
            }
            
            // MSecStamp 
            const EString &MSecStamp ()
            {
                return pvMSecStamp ;
            }
        
        protected :
        
            list<PTREE>     chunks ;          // chunks of message
            EString         pvSenderName ;    // name of last message sender
            EString         pvSenderChannel ; // channel of last message
            EString         pvSecStamp ;      // stamp
            EString         pvMSecStamp ;     // stamp
        
        private :
        
            EString pvEmptyString ;
    };
#endif
