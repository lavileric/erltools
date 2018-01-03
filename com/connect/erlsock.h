#ifndef ERLSOCK_FILE
#   define ERLSOCK_FILE 1
#   include <vector>
#   if defined(BORLAND3)
#       define EADDRINUSE 10048
#   else 
#       if defined(BORLAND) || defined(VISUAL)
#           if !defined(VISUAL) || _WIN32_WINNT >= 0x0400
// #               include <winsock2.h>
#           endif
#           include <io.h>
#           define EADDRINUSE WSAEADDRINUSE
#       elif !defined(BORLAND3)
#           include <sys/types.h>
#           include <sys/socket.h>
#           include <sys/time.h>
#           include <arpa/inet.h>
#           if !defined(BORLAND) && !defined(BORLAND3) && !defined(VISUAL)
#               include <fcntl.h>
#           endif
#           ifndef SOLARIS
#               include <linux/socket.h>
#           else 
#               include <netinet/in.h>
#           endif
#           include <string>
#           include <unistd.h>
#           include <errno.h>
#           define SOCKET int
#           define INVALID_SOCKET -1
#           define SOCKET_ERROR -1
#           if defined(LINUX) || defined(LINUX_GLIBC2)
#               define TCP_NODELAY 1
#           endif
            
            inline void closesocket ( SOCKET sock )
            {
                shutdown(sock, 2);
                close(sock);
            }
            
            inline int WSAGetLastError ()
            {
                return errno ;
            }
#       endif
#   endif
#   define CHUNK_SIZE 6144 /* 2048 */
#   define MAX_ACTION_SIZE 20
#   include <stdio.h>
    static const int    VERSION_MAJOR = 1 ; // version of winsock dll
    static const int    VERSION_MINOR = 1 ; // version of winsock dll
#   ifdef errno
#       if !defined(LINUX)
#           undef errno
#       endif
#   endif
#   define MAX_WAIT_ACK 2
#   include "tabsort.h"
#   include "conf.h"
    extern int  dispatcherPort ;
    
    class sockbuf {
        
        public :
        
            enum constants { sock_dgram = SOCK_DGRAM, sock_stream = SOCK_STREAM };
    };
    
    class sockerr {
        
        public :
        
            // constructor
            sockerr ( const char *_zActionName, int err )
            {
                pvErrno = err ;
                if ( strlen(_zActionName) >= MAX_ACTION_SIZE ) {
                    strncpy(pvAction, _zActionName, MAX_ACTION_SIZE);
                    pvAction [MAX_ACTION_SIZE] = 0 ;
                } else {
                    strcpy(pvAction, _zActionName);
                }
            }
            
            // destructor
            virtual ~sockerr () {}
            
            // errno : return error number
            // return : error number
            int errnoval () const
            {
                return pvErrno ;
            }
            
            // << ADD Oliver Maffeis 98
            // errno : return function source of the error
            // return : function name
            const char *action_src () const
            {
                return (const char *)&pvAction ;
            }
        
        private :
        
            // << ADD Olivier Maffeis 98
            int     pvErrno ;                    // error number
            char    pvAction [MAX_ACTION_SIZE];  // action source
    };
    
    class ErlSock {
        
        public :
        
            enum SockType { IN_SOCK = 1, OUT_SOCK = 2 };
            
            // constructor
            // parameters :
            //              proto : the protocol
            ErlSock (int proto) ;
            
            //destructor
            virtual ~ErlSock ()
            {
                
                // clean sockets
                if ( pvSocks.Size() ) {
                    int     index ; // index
                    SOCKET  *sock ;
                    while ( (index = pvSocks.Size()) && index-- > 0 ) {
                        RemoveInputSock(*pvSocks [index]);
                    }
                } else if ( pvSocket ) {
#                   if 0
                        EString message = "";
                        message += EString("close Socket : ") + CompactItoa(pvSocket) + "\n";
                        ::write(2, message.c_str(), message.length());
#                   endif
                    
                    // close socket
                    //if ( pvSocket ) 
                    //    closesocket(pvSocket);
                    //pvSocket = (SOCKET)0 ;
                    RemoveInputSock(pvSocket);
                }
#               if defined(VISUAL) || defined(BORLAND)
                    DeleteCriticalSection(&hCritical);
#               endif
            }
            
            // localhost : return local host
            // return : local host
            int localhost ()
            {
                return 0 ;
            }
            
            // localport : return local port
            // return : local port
            short localport ()
            {
                return pvLocalPort ;
            }
            
            // peerhost : return peer host
            // return : peer host
            int peerhost ()
            {
                return 0 ;
            }
            
            // peerport : return peer port
            // return : peer port
            short peerport ()
            {
                return pvPeerPort ;
            }
            
            // accessor for socket
            // return : the socket
            const SOCKET &Socket () const
            {
                return pvSocket ;
            }
            
            // bind : make a local bind
            // parameters :
            //              port where to bind
            virtual sockerr bind ( int port, UINT4 _iIpAddr = 0 )
            {
                return sockerr("bind", 0);
            }
            
            // connect : make a connection
            // parameters :
            //              port : port number where to connect
            //              _iIpAddr : IP address where to connect
            //              maxTry : number of try for connection
            virtual sockerr connect ( short port, UINT4 _iIpAddr = 0, int maxTry = -1 )
            {
                return sockerr("connect", 0);
            }
            
            // setrcvbuf : set receive buffer size 
            // parameters :
            //               size : size to be set
            // return : new size
            int         setrcvbuf (unsigned int size) ;
            
            // setsndbuf : set send buffer size 
            // parameters :
            //               size : size to be set
            // return : new size
            int         setsndbuf (unsigned int size) ;
            
            // setlinger : set linger 
            // parameters
            //             on : tells if on
            //             timeout : time out
            int         setlinger (bool on, unsigned int timeout) ;
            
            // << ADD Olivier Maffeis 98
            // setnodelay : disable delay algorithm in tcp
            // return : if setting ok
            virtual int setnodelay () ;
            
            // << ADD Didier Chevalier 2001
            // setreuseaddr: set reuse of ip address
            // return : if setting ok
            int         setreuseaddr () ;
            
            // write : write data
            // parameters :
            //              buffer : buffer to be written
            //              length : of buffer
            //              check : tell if we have to check if ok
            //              socket : socket where to write 
            // return : number of char written
            int         write (char *buffer, int length, bool check = false, SOCKET socket = (SOCKET)0) ;
            
            // ADD Olivier Maffeis 98
            // write : write data
            // parameters :
            //              buffer : buffer to be written
            //              length : of buffer
            //              ipaddr : peer address
            //              iRecvPort : peer port
            // return : number of char written
            int         write (char *buffer, int length, UINT4 _iIpAddr, unsigned short _iRecvPort) ;
            
            // ReadOnSocket : read sthing on a socket
            // parmeters :
            //              socket : socket to read
            //              buffer : where to read
            //              length : length of buffer
            //              offset : offset of buffer
            //              hard : destroy if null reading
            //              index : index in sock array
            // return : if socket is still valid (not closed)
            bool        ReadOnSocket (SOCKET socket, char *buffer, int length, int &offset, bool hard, int index) ;
            
            // read : read data
            // parameters :
            //              buffer : buffer where to read
            //              length : of buffer
            //              mainEntry : tell to look only at main socket 
            //              sameChannel : tell to look the same channel 
            // return : number of char read
            int         readInternal (char *buffer, int length, bool mainEntry, bool sameChannel = false) ;
            
            // read : read data
            // parameters :
            //              buffer : buffer where to read
            //              length : of buffer
            //              sameChannel : tell to look the same channel 
            // return : number of char read
            int         read (char *buffer, int length, bool sameChannel = false) ;
            
            // operator -> : return this
            virtual ErlSock *operator-> ()
            {
                return this ;
            }
            
            // get type of socket 
            // return : the type of socket
            virtual SockType Type ()
            {
                return IN_SOCK ;
            }
            
            // TimeVal : TimeVal modifier
            // parameters :
            //               timeVal : new value for timeval
            void TimeVal ( struct timeval &tval )
            {
                
                // set timeval struct
                pvTimeVal.tv_sec = tval.tv_sec ;
                pvTimeVal.tv_usec = tval.tv_usec ;
            }
            
            // TimeVal : return time val
            const struct timeval *TimeVal () const
            {
                return &pvTimeVal ;
            }
            
            // OutputSock : output socket
            // return : the output socket
            SOCKET OutputSock ()
            {
                return pvSocket ;
            }
            
            // OutputSock : set output socket
            // return : void
            void OutputSock ( SOCKET socket )
            {
                pvSocket = socket ;
            }
            
            // InputSock : input socket
            // return : the input sockets
            std::vector<SOCKET> InputSock ()
            {
                
                int                     index ;    // index in socket array
                std::vector<SOCKET>     retArray ; // returned array
                
                for ( index = 0 ; index < pvSocks.Size() ; index++ ) {
                    retArray.push_back((*pvSocks [index]));
                }
                return retArray ;
            }
            
            // last socket : return the last socket where data was received
            SOCKET LastSocket ()
            {
                if ( pvPosFdSet < 0 || pvPosFdSet >= pvSocks.Size() ) 
                    return (SOCKET)0 ;
                else 
                    return *pvSocks [pvPosFdSet];
            }
            
            // add input socket
            // parameters :
            //              newSock : the new socket
            virtual void    AddInputSock (SOCKET newSock) ;
            
            // remove an input socket
            // parameters :
            //              removedSock : the socket to be removed
            virtual void    RemoveInputSock (SOCKET removedSock) ;
            
            // ValidSocket : test if a socket is valid
            // parameters :
            //              socket : the socket to be tested
            //              pExist : tells if socket really exists
            virtual bool    ValidSocket (SOCKET socket, bool *pExist = 0) ;
        
        protected :
        
            short                   pvLocalPort ;    // local port of socket
            short                   pvPeerPort ;     // peer port
            int                     pvProto ;        // protocol
            fd_set                  pvActiveFdSet ;  // active sockets
            fd_set                  pvCurrentFdSet ; // current fd set
            int                     pvPosFdSet ;     // current pos in fd set
            int                     pvConnectSec ;   // second waiting for a connection
            TabSortEqual<SOCKET>    pvSocks ;        // array of input socket
                                                     // with stream sockets
            SOCKET                  pvSocket ;       // the socket
            struct timeval           pvTimeVal ;     // timeval for select
        
        private :
        
            static bool initialized ; // tell if startup has been done
            
            // protect some members
            // copy consructor
            ErlSock ( const ErlSock & ) {}
            
            // operator =
            void operator= ( const ErlSock & ) {}
            
#           if defined(VISUAL) || defined(BORLAND)
                CRITICAL_SECTION    hCritical ;
#           endif
        
        protected :
        
            struct sockaddr pvLastUdpIn ;
    };
    
    // output socket
    
    class osockinet : public ErlSock {
        
        public :
        
            // constructor
            osockinet ( int proto )
                : ErlSock(proto)
            {}
            
            // destructor () {}
            virtual ~osockinet () {}
            
            // connect : make a connection
            // parameters :
            //              port : port number where to connect
            //              maxTry : number of try for connection
            virtual sockerr connect (short port, UINT4 _iIpAddr = 0, int maxTry = -1) ;
            
            // operator -> : return this
            virtual ErlSock *operator-> ()
            {
                return this ;
            }
            
            // get type of socket 
            // return : the type of socket
            virtual SockType Type ()
            {
                return OUT_SOCK ;
            }
            
            // ADD : Olivier Maffeis 98        
            // set socket as non-blocking 
            void SetNonBlocking ()
            {
#               if !defined(WITHOUT_EXCEPT) && !defined(LINUX) && !defined(SOLARIS)
                    if ( fcntl(pvSocket, F_SETFL, O_NDELAY) == -1 ) 
                        throw sockerr("set non-blocking socket", errno);
#               endif
            }
    };
    
    // input socket
    
    class isockinet : public ErlSock {
        
        public :
        
            // constructor
            isockinet ( int proto )
                : ErlSock(proto)
            {}
            
            // destructor () {}
            virtual ~isockinet () {}
            
            // bind : make a local bind
            // parameters :
            //              port where to bind
            virtual sockerr bind (int port, UINT4 _iIpAddr = 0) ;
            
            // operator -> : return this
            virtual ErlSock *operator-> ()
            {
                return this ;
            }
            
            // get type of socket 
            // return : the type of socket
            virtual SockType Type ()
            {
                return IN_SOCK ;
            }
            
            // NbSock : return the number of input sockets
            unsigned int NbSock ()
            {
                return pvSocks.Size();
            }
            
            // get last upd in addr
            UINT4 LastUdpAddr ()
            {
                return ntohl(((sockaddr_in *)&pvLastUdpIn)->sin_addr.s_addr);
            }
            
            // get last udp in port
            unsigned short LastUdpPort ()
            {
                return ntohs(((sockaddr_in *)&pvLastUdpIn)->sin_port);
            }
    };
#endif
