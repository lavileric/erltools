// erlsock.cc
#include "erlsock.h"

#ifdef SOLARIS
#   include "netinet/tcp.h"
#endif
#if defined(BORLAND) || defined(BORLAND3) || defined(VISUAL)
#   include "errno.h"
#endif

int     dispatcherPort = 2000 ;
bool    ErlSock::initialized = false ; // tell if we have done startup

ErlSock::ErlSock ( int proto )
    : pvLocalPort(0),  pvPeerPort(0),  pvSocket(0),  pvPosFdSet( -1),  pvConnectSec(0)
{
#   if defined(BORLAND) || defined(BORLAND3) || defined(VISUAL)
        
        // look for the version of the socket dll
        {
            WORD    VersionRequested ; // version searched
            int     Error ;            // error ret code
            WSADATA WsaData ;
            if ( !initialized ) {
                
                // ask for version
                VersionRequested = MAKEWORD(VERSION_MAJOR, VERSION_MINOR);
                Error = WSAStartup(VersionRequested, &WsaData);
                
                // if version is not here exit
                if ( Error /*|| LOBYTE(WsaData.wHighVersion) < 2*/ ) {
                    EString val2
                        = EString("Error loading sockets : ") + EString(CompactItoa(Error)) + " ---" + EString(CompactItoa((int)LOBYTE(WsaData.wHighVersion))) + "--"
                            + EString(CompactItoa((int)HIBYTE(WsaData.wHighVersion)));
#                   ifndef VISUAL
                        MessageBox(0, val2.c_str(), "Erreur", MB_OK);
#                   endif
                    char    *errorMessage = "Cannot startup winsock";
                    ::write(2, errorMessage, strlen(errorMessage));
#                   ifdef WITHOUT_EXCEPT
                        exit(2);
#                   else 
                        throw sockerr("startup winsock", Error);
#                   endif
                } else if ( LOBYTE(WsaData.wHighVersion) > LOBYTE(WsaData.wVersion)
                                || LOBYTE(WsaData.wHighVersion) == LOBYTE(WsaData.wVersion) && HIBYTE(WsaData.wHighVersion) > HIBYTE(WsaData.wVersion) ) {
                    WSACleanup();
                    VersionRequested = WsaData.wHighVersion ;
                    Error = WSAStartup(VersionRequested, &WsaData);
                }
                initialized = true ;
            }
        }
#   endif
    
    // initialize proto
    pvProto = proto ;
    
    // socket creation
    {
        
        // create socket
        pvSocket = socket(AF_INET, proto, 0);
        
        // if socket creation failed send an error message
        if ( pvSocket == INVALID_SOCKET ) {
            const char  *errorMessage = "Cannot open socket";
#           ifdef WITHOUT_EXCEPT
                ::write(2, errorMessage, strlen(errorMessage));
                pvSocket = 0 ; // exit(2);
#           else 
                ::write(2, errorMessage, strlen(errorMessage));
#           endif
        }
    }
    
    // set timeval
    {
        pvTimeVal.tv_sec = 0 ;
        pvTimeVal.tv_usec = 0 ;
    }
    
    // zero the active fd set
    FD_ZERO(&pvActiveFdSet); // look size
#   if defined(VISUAL) || defined(BORLAND)
        
        // initialize critical section
        InitializeCriticalSection(&hCritical);
#   endif
}

// setrcvbuf : set receive buffer size 
// parameters :
//               size : size to be set
// return : new size
int ErlSock::setrcvbuf ( unsigned int size )
{
    int     result ;
    SOCKLEN length = sizeof(int);
    
    result
        = setsockopt(pvSocket, /* socket affected */ SOL_SOCKET, /* set option at TCP level */ SO_RCVBUF, /* name of option */ (char *)&size
            , /* the cast is historical cruft */ sizeof(int)); /* length of option value */ 
    result
        = getsockopt(pvSocket, /* socket affected */ SOL_SOCKET, /* set option at TCP level */ SO_RCVBUF, /* name of option */ (char *)&size
            , /* the cast is historical cruft */ &length); /* length of option value */ 
    return size ;
}

// setsndbuf : set send buffer size 
// parameters :
//               size : size to be set
// return : new size
int ErlSock::setsndbuf ( unsigned int size )
{
    int     result ;
    SOCKLEN length = sizeof(int);
    
    result
        = setsockopt(pvSocket, /* socket affected */ SOL_SOCKET, /* set option at TCP level */ SO_SNDBUF, /* name of option */ (char *)&size
            , /* the cast is historical cruft */ sizeof(int)); /* length of option value */ 
    result
        = getsockopt(pvSocket, /* socket affected */ SOL_SOCKET, /* set option at TCP level */ SO_SNDBUF, /* name of option */ (char *)&size
            , /* the cast is historical cruft */ &length); /* length of option value */ 
    return size ;
}

// setlinger : set linger 
// parameters
//             on : tells if on
//             timeout : time out
// return : if ok
int ErlSock::setlinger ( bool on, unsigned int timeout )
{
    struct linger lingStruct ;
    
    lingStruct.l_onoff = on ? 1 : 0 ;
    lingStruct.l_linger = timeout ;
    return setsockopt(pvSocket, /* socket affected */ SOL_SOCKET, /* set option at TCP level */ SO_LINGER, /* name of option */ (char *)&lingStruct
        , /* the cast is historical cruft */ sizeof(struct linger )); /* length of option value */ 
}

// << ADD Olivier Maffeis 98
// setnodelay : disable delay algorithm in tcp
// return : if setting ok
int ErlSock::setnodelay ()
{
    int result = 0 ;
    
    if ( pvSocket != INVALID_SOCKET ) {
        int flag = 1 ;
        result
            = setsockopt(pvSocket, /* socket affected */ SOL_SOCKET, /* set option at TCP level */ TCP_NODELAY, /* name of option */ (char *)&flag
                , /* the cast is historical cruft */ sizeof(int)); /* length of option value */ 
    }
    return result ;
}

// << ADD Didier Chevalier 2001
// setreuseaddr: set reuse of ip address
// return : if setting ok
int ErlSock::setreuseaddr ()
{
    int result = 0 ;
    
    if ( pvSocket != INVALID_SOCKET ) {
        int flag = 1 ;
        result
            = setsockopt(pvSocket, /* socket affected */ SOL_SOCKET, /* set option at TCP level */ SO_REUSEADDR, /* name of option */ (char *)&flag
                , /* the cast is historical cruft */ sizeof(int)); /* length of option value */ 
    }
    return result ;
}

// write : write data
// parameters :
//              buffer : buffer to be written
//              length : of buffer
//              check : tell if we have to check if ok
//              socket : socket where to write if > 0 
// return : number of char written
int ErlSock::write ( char *buffer, int length, bool check, SOCKET socket )
{
    int nbWritten = 0 ; // number of bytes written
    
    if ( !socket ) {
        socket = pvSocket ; // default socket
        
        // if input socket write on the first socket
        if ( Type() == IN_SOCK ) {
            int indSock ; // index in socks array
            socket = 0 ;
            for ( indSock = 0 ; indSock < pvSocks.Size() ; indSock++ ) {
                if ( *pvSocks [indSock] != pvSocket ) {
                    socket = *pvSocks [indSock];
                    break ;
                }
            }
        }
    }
    
    // write on socket
    if ( socket ) {
        if ( check ) {
            int     resSelect ; // result of select
            fd_set  writeSet ;  // write set
            
            // wait until we can write on socket
            FD_ZERO(&writeSet);
            FD_SET(socket, &writeSet);
            if ( (resSelect = select(FD_SETSIZE, NULL, &writeSet, NULL, NULL)) >= 0 ) {
                
                // write data
                if ( FD_ISSET(socket, &writeSet) ) {
                    nbWritten = send(socket, buffer, length, 0);
#                   ifdef DEBUG_SOCK
                        EString outString ;
                        EString nbW = CompactItoa(nbWritten);
                        outString = EString("Write : ") + nbW + " on " + CompactItoa(socket) + "\n";
                        ::write(1, outString.c_str(), outString.length());
#                   endif
                } else 
                    return -1 ;
            } else 
                return -1 ;
        } else {
            nbWritten = send(socket, buffer, length, 0);
#           ifdef DEBUG_SOCK
                EString outString ;
                EString nbW = CompactItoa(nbWritten);
                outString = EString("Write : ") + nbW + " on " + CompactItoa(socket) + "\n";
                ::write(1, outString.c_str(), outString.length());
#           endif
        }
    }
    
    // return number written
    return nbWritten ;
}

// << Add Olivier Maffeis 98
// write : write data
// parameters :
//              buffer : buffer to be written
//              length : of buffer
//              ipaddr : peer address
//              iRecvPort : peer port
// return : number of char written
int ErlSock::write ( char *buffer, int length, UINT4 _iIpAddr, unsigned short _iRecvPort )
{
    
    int     nbWritten = 0 ;     // number of bytes written
    SOCKET  socket = pvSocket ; // default socket
    
    // if input socket write on the first socket
    if ( pvProto == sockbuf::sock_stream && Type() == IN_SOCK ) {
        int indSock ; // index in socks array
        
        // socket = 0 ;
        for ( indSock = 0 ; indSock < pvSocks.Size() ; indSock++ ) {
            if ( *pvSocks [indSock] != pvSocket ) {
                socket = *pvSocks [indSock];
                break ;
            }
        }
    }
    
    // write on socket
    if ( socket ) {
        struct sockaddr    saremote ;
        struct sockaddr_in *sin ;
        sin = (struct sockaddr_in *)&saremote ;
        memset((char *)sin, '\0', sizeof(sockaddr_in));
        sin->sin_family = AF_INET ;
        sin->sin_addr.s_addr = htonl(_iIpAddr);
        sin->sin_port = htons(_iRecvPort);
        nbWritten = sendto(socket, buffer, length, 0, &saremote, sizeof(struct sockaddr_in ));
    }
    
    // return number written
    return nbWritten ;
}

// ValidSocket : test if a socket is valid
// parameters :
//              socket : the socket to be tested
//              pExist : tells if socket really exists
bool ErlSock::ValidSocket ( SOCKET socket, bool *pExist )
{
    bool    invalidSocket ; // if invalid non zero
    
#   if defined(BORLAND) || defined(BORLAND3) || defined(VISUAL)
        
        unsigned long   nbChar ;
        
        invalidSocket = ioctlsocket(socket, FIONREAD, &nbChar);
#   else 
        {
            int     val ;
            SOCKLEN sizeContent = sizeof(int);
            invalidSocket = getsockopt(socket, SOL_SOCKET, SO_RCVBUF, (char *)&val, &sizeContent);
        }
#   endif
    if ( invalidSocket ) {
        int error = WSAGetLastError(); // last error 
        if ( pExist ) {
#           if defined(BORLAND) || defined(BORLAND3) || defined(VISUAL)
                if ( error == WSAENOTSOCK ) {
                    *pExist = false ;
                } else 
                    *pExist = true ;
#           else 
                if ( error == ENOTSOCK || error == EBADF ) 
                    *pExist = false ;
                else 
                    *pExist = true ;
#           endif
        }
        return false ;
    }
    return true ;
}

// ReadOnSocket : read sthing on a socket
// parmeters :
//              socket : socket to read
//              buffer : where to read
//              length : length of buffer
//              offset : offset of buffer
//              hard : destroy if null reading
//              index : index in sock array
// return : if socket is still valid (not closed)
bool ErlSock::ReadOnSocket ( SOCKET socket, char *buffer, int length, int &offset, bool hard, int index )
{
    
    int             nbRead = 0 ;   // number of char read
    bool            valid (true) ; // tell if socket has not been destroyed
    
    // look if sthing can be read on socket
    unsigned long   nbChar = 0 ;
    bool            validSocket ;  // tells if socket is valid for windows
    
    if ( !ValidSocket(socket, &validSocket) ) {
        
        // if socket is not valid since bad file
        // descriptor put nbRead to -1 and close it
        if ( validSocket ) 
            return valid ;
        else 
            nbRead = -1 ;
    } else {
        
        // read on socket
        // if ( nbChar > 0 ) 
        if ( length > 5000 ) 
            length = 5000 ; // since a tcp/ip is 4000 max
        nbRead = recv(socket, buffer + offset, length, 0);
    }
    
    // if read nothing, the socket is no longer valid
    if ( nbRead < 0 || hard && nbRead == 0 ) {
        nbRead = 0 ;
        EString error = "read on invalid input socket ";
        error += CompactItoa(socket);
        error += " error code ";
        error += CompactItoa(WSAGetLastError());
        error += "\n";
        ::write(2, error.c_str(), error.length());
        valid = false ;
        RemoveInputSock(socket);
    }
    
    // update offset
    offset += nbRead ;
    
    // return if valid
    return valid ;
}

// read : read data
// parameters :
//              buffer : buffer where to read
//              length : of buffer
//              sameChannel : tell to look the same channel 
// return : number of char read
int ErlSock::read ( char *buffer, int length, bool sameChannel )
{
    return readInternal(buffer, length, false, sameChannel);
}

// read : read data
// parameters :
//              buffer : buffer where to read
//              length : of buffer
//              mainEntry : tell to look only at main socket 
//              sameChannel : tell to look the same channel 
// return : number of char read
int ErlSock::readInternal ( char *buffer, int length, bool mainEntry, bool sameChannel )
{
    
    SOCKET  socket = pvSocket ; // the socket where read is done
    int     offset = 0 ;        // offset in case of multiple reads
    bool    moreRead = true ;   // tell that there are more read to be done
    bool    onEntry = true ;    // tell we are entering function
    
    // if use old, will try again
    while ( moreRead && !offset ) 
        
        // specific on stream
        if ( pvProto == sockbuf::sock_stream && Type() == IN_SOCK ) {
            struct sockaddr_in clientname ;
            SOCKLEN           size ;
            socket = 0 ;
            if ( !pvSocks.Size() ) {
                SLEEP(1);
                return 0 ;
            }
            
            // suppose that there are no more read
            // if pvPosFdSet > 0 since we will not do a select do a moreRead
            if ( pvPosFdSet < 0 ) 
                moreRead = false ;
            
            /* Block until input arrives on one or more active sockets. */
            fd_set  read_fd_set ; // fd set to be read
            
            // if mainEntry look only at Socket()
            if ( mainEntry ) {
                FD_ZERO(&read_fd_set);
                FD_SET(Socket(), &read_fd_set);
            } else {
                
                // set fd set
                read_fd_set = pvActiveFdSet ;
            }
            
            // if not socket to be read do it now
            if ( pvPosFdSet < 0 ) {
                int resSelect = -1 ; // result of select
                int counter = 0 ;    // counter of loop
                
                // look if data
                while ( resSelect < 0 ) {
                    counter++ ;
                    if ( pvTimeVal.tv_sec || pvTimeVal.tv_usec || mainEntry ) {
                        struct timeval parTimeVal ; // timeval parameter used
                        parTimeVal.tv_sec = pvTimeVal.tv_sec ;
                        parTimeVal.tv_usec = pvTimeVal.tv_usec ;
                        
                        // look quickly on main entry
                        if ( mainEntry ) {
                            parTimeVal.tv_sec = 0 ;
                            parTimeVal.tv_usec = pvConnectSec + 10 ;
                        }
                        
                        // look active sockets
                        resSelect = select(FD_SETSIZE, &read_fd_set, NULL, NULL, &parTimeVal);
                    } else {
                        
                        // look active sockets
                        resSelect = select(FD_SETSIZE, &read_fd_set, NULL, NULL, NULL);
                    }
#                   ifdef WITHOUT_EXCEPT
                        
                        // << EL 13/07/98
                        // check if there is not a no sock
                        if ( resSelect < 0 ) {
                            bool    foundNoSock = false ; // we found a no sock
                            for ( int i = 1 ; i < pvSocks.Size() ; i++ ) {
                                
                                // look if sthing can be read on socket
                                unsigned long   nbChar = 0 ;
                                bool            sockExists ; // tell if socket exists
                                if ( !ValidSocket(*pvSocks [i], &sockExists) && !sockExists ) {
                                    FD_CLR(*pvSocks [i], &read_fd_set);
                                    RemoveInputSock(*pvSocks [i]);
                                    i-- ;
                                    foundNoSock = true ;
                                }
                            }
                            
                            // if we destroyed a socket we have to update client in
                            // main loop of dispatcher or if another kind of error
                            // in all case return
                            if ( !foundNoSock && counter > 13 || foundNoSock ) 
                                return 0 ;
                        }
#                   else 
                        if ( resSelect < 0 ) {
                            throw sockerr("select", WSAGetLastError());
                        }
#                   endif
                }
                
                // if timeout return 0
                if ( resSelect == 0 ) 
                    return 0 ;
                
                // mainEntry must not change entry set
                if ( !mainEntry ) 
                    pvCurrentFdSet = read_fd_set ;
            } else 
                read_fd_set = pvCurrentFdSet ;
            
            // if same channel previous read didn't get all the message
            if ( !sameChannel || pvPosFdSet < 0 ) {
                pvPosFdSet++ ;
                sameChannel = false ;
            }
            
            // if same channel wait for data
            if ( sameChannel ) {
                FD_ZERO(&read_fd_set);
                FD_SET(*pvSocks [pvPosFdSet], &read_fd_set);
                struct timeval parTimeVal ; // timeval parameter used
                parTimeVal.tv_sec = 10 ;
                parTimeVal.tv_usec = 0 ;
#               if defined(BORLAND) || defined(BORLAND3) || defined(VISUAL)
#               endif
                
                // look active sockets
                int resSelect = select(FD_SETSIZE, &read_fd_set, NULL, NULL, &parTimeVal);
                sameChannel = false ;
            }
            
            /* Service all the sockets with input pending. */
            for ( int i = pvPosFdSet ; i < pvSocks.Size() ; pvPosFdSet = ++i ) {
                if ( FD_ISSET(*pvSocks [i], &read_fd_set) ) {
                    socket = *pvSocks [i];
                    if ( socket == Socket() ) {
                        
                        /* Connection request on original socket. */
                        SOCKET  newSock ;
                        size = sizeof(clientname);
                        newSock = accept(Socket(), (struct sockaddr *)&clientname, &size);
                        if ( newSock < 0 ) {
#                           ifdef WITHOUT_EXCEPT
                                const char  *message = "Failed on accept \n";
                                ::write(2, message, strlen(message));
                                
                                // exit(2);
                                continue ;
#                           else 
                                throw sockerr("accept", WSAGetLastError());
#                           endif
                        }
                        AddInputSock(newSock);
                        moreRead = true ;
                        pvConnectSec = 20000 ;
                        
                        // pvPosFdSet ++;
                        break ;
                    } else {
                        
                        /* EL 22/09/99
                           if ( sameChannel ) {
                                                 struct timeval errTimeVal ; // timeval parameter used
                                                 errTimeVal.tv_sec = 1 ;
                                                 errTimeVal.tv_usec = 0 ;
                                                 fd_set  read_fd_set1 ;
                                                 FD_ZERO(&read_fd_set1);
                                                 FD_SET(socket, &read_fd_set1);
                                                 if ( select(FD_SETSIZE, &read_fd_set1, NULL
                                                             , NULL, &errTimeVal)
                                                         <= 0 ) 
                                                     return 0 ;
                                             }
                                             sameChannel = false ;*/
                        // read on socket  (if not ok socket is out of array)
                        // if sthing was read for will stop
                        if ( !ReadOnSocket(socket, buffer, length - offset, offset, !sameChannel, i) ) {
                            
                            // at least 0 after -- to be in this branch of if
                            pvPosFdSet = i-- ;
                            
                            // update dispatcher sockets
                            return offset ;
                        } else if ( offset ) 
                            break ;
                    }
                }
                if ( mainEntry ) 
                    break ;
            }
            if ( pvPosFdSet >= pvSocks.Size() ) 
                pvPosFdSet = -1 ;
        } else {
            int nbRead = 0 ; // number of bytes read
            
            // read on socket
            if ( socket ) {
                if ( length > 5000 ) 
                    length = 5000 ; // since a tcp/ip is 4000 max
                
                // read data
                {
                    fd_set  read_fd_set ;
                    FD_ZERO(&read_fd_set);
                    FD_SET(socket, &read_fd_set);
                    
                    // timeval struct
                    struct timeval parTimeVal ; // timeval parameter used
                    parTimeVal.tv_sec = pvTimeVal.tv_sec ;
                    parTimeVal.tv_usec = pvTimeVal.tv_usec ;
                    
                    // look active sockets
                    int resSelect = select(FD_SETSIZE, &read_fd_set, NULL, NULL, &parTimeVal);
                    if ( resSelect > 0 ) {
                        if ( 0 ) {
                            nbRead = recv(socket, buffer, length, 0);
                        } else {
                            SOCKLEN size = sizeof(pvLastUdpIn);
                            nbRead = recvfrom(socket, buffer, length, 0 /*MSG_WAITALL*/ , &pvLastUdpIn, &size);
                        }
                    } else 
                        nbRead = 0 ;
                }
            }
            if ( nbRead < 0 ) {
                EString error = "read on invalid output socket\n";
                ::write(2, error.c_str(), error.length());
                nbRead = 0 ;
            }
            
            // update offset
            offset += nbRead ;
            
            // stop read
            moreRead = false ;
        }
    
    // return number read
    return offset ;
}

// connect : make a connection
// parameters :
//              port : port number where to connect
//              _iIpAddr : IP address where to connect
//              maxTry : number of try for connection
sockerr osockinet::connect ( short port, UINT4 _iIpAddr, int maxTry )
{
    
    struct sockaddr_in sockIn ;          // inet sock address
    int               error ;            // error ret code
    int               firstTime = true ; // first time we try
    
connection : 
    
    // initialize inet socket
    // for the moment being connect only on local host
    memset((char *)&sockIn, '\0', sizeof(sockaddr_in));
    sockIn.sin_family = AF_INET ;
    if ( _iIpAddr == 0 ) 
    {
#       if defined(BORLAND) || defined(BORLAND3) || defined(VISUAL)
            sockIn.sin_addr.s_addr = inet_addr("127.0.0.1");
#       else 
            sockIn.sin_addr.s_addr = INADDR_ANY ;
#       endif
    } else 
        //sockIn.sin_addr.s_addr = inet_addr("127.0.0.1");
        sockIn.sin_addr.s_addr = _iIpAddr ;
    sockIn.sin_port = htons(port);
    pvPeerPort = port ;
    
    // connect
    error = ::connect(Socket(), (struct sockaddr *)&sockIn, sizeof(sockIn));
    
    // if error message exit
    if ( error ) {
        if ( maxTry != 0 ) {
            char    message [512];
            if ( firstTime ) {
                sprintf(message, "Error %d, on bind trying again\n", error);
                ::write(2, message, strlen(message));
                firstTime = false ;
            }
            strcpy(message, ".");
            ::write(2, message, strlen(message));
            
            // close old socket
            closesocket(Socket());
#           if defined(BORLAND) || defined(BORLAND3) || defined(VISUAL)
                Sleep(3000);
#           else 
                sleep(3);
#           endif
            
            // open a new one
            pvSocket = socket(AF_INET, pvProto, 0);
            if ( maxTry > 0 ) 
                maxTry-- ;
            goto connection ;
        } else {
#           ifndef WITHOUT_EXCEPT
                throw sockerr("connect", WSAGetLastError());
#           endif
            return sockerr("connect", WSAGetLastError());
        }
    }
    return sockerr("connect", 0);
}

// bind : make a local bind
// parameters :
//              port where to bind
sockerr isockinet::bind ( int port, UINT4 _iIpAddr )
{
    
    struct sockaddr_in sockIn ; // inet sock address
    int               error ;   // error ret code
    
    // initialize inet socket
    // for the moment being connect only on local host
    memset((char *)&sockIn, '\0', sizeof(sockaddr_in));
    sockIn.sin_family = AF_INET ;
    if ( !_iIpAddr ) 
        sockIn.sin_addr.s_addr = INADDR_ANY ;
    else 
        sockIn.sin_addr.s_addr = _iIpAddr ;
    sockIn.sin_port = htons(port);
    pvLocalPort = port ;
    
    // connect
    error = ::bind(Socket(), (struct sockaddr *)&sockIn, sizeof(sockIn));
    
    // if error, raise exception with error
    if ( error == SOCKET_ERROR ) {
#       if !defined(WITHOUT_EXCEPT)
            throw sockerr("bind", WSAGetLastError());
#       else 
            return sockerr("bind", WSAGetLastError());
#       endif
    }
    
    // specific tasks for sock_stream
    if ( pvProto == sockbuf::sock_stream ) {
        if ( (error = listen(Socket(), 1)) < 0 ) {
#           ifdef WITHOUT_EXCEPT
                char    message [50];
                sprintf(message, "Error %d, on listen\n", error);
                ::write(2, message, strlen(message));
                return sockerr("listen", WSAGetLastError());
#           else 
                throw sockerr("listen", error);
#           endif
        }
        
        /* Initialize the set of active sockets. */
        FD_ZERO(&pvActiveFdSet);
        AddInputSock(Socket());
    }
    return sockerr("bind", 0);
}

// add input socket
// parameters :
//              newSock : the new socket
void ErlSock::AddInputSock ( SOCKET newSock )
{
#   if defined(VISUAL) || defined(BORLAND)
        EnterCriticalSection(&hCritical);
#   endif
    if ( newSock ) {
        FD_SET(newSock, &pvActiveFdSet);
        pvSocks.InsertAt(new SOCKET(newSock), pvSocks.Size());
    }
    
    EString message = "";
    
    message += EString("Add Socket : ") + CompactItoa(newSock) + "\n";
    DisplayTime(message.c_str(), 2);
    
    // ::write(2, message.c_str(), message.length());
#   if defined(VISUAL) || defined(BORLAND)
        LeaveCriticalSection(&hCritical);
#   endif
}

// remove an input socket
// parameters :
//              removedSock : the socket to be removed
void ErlSock::RemoveInputSock ( SOCKET removedSock )
{
#   if defined(VISUAL) || defined(BORLAND)
        EnterCriticalSection(&hCritical);
#   endif
    
    bool    found = false ;
    SOCKET  *sock ; // the socket
    
    for ( int index = 0 ; index < pvSocks.Size() ; index++ ) {
        if ( *pvSocks [index] == removedSock ) {
            found = true ;
            sock = pvSocks [index];
            pvSocks.Erase(index);
            delete sock ;
            break ;
        }
    }
    
    // pvSocket == removedSock for output sockets
    if ( found || pvSocket == removedSock ) {
        if ( pvSocket == removedSock ) 
            pvSocket = 0 ;
        if ( found ) 
            FD_CLR(removedSock, &pvActiveFdSet);
        EString message = "";
        message += EString("Remove Socket : ") + CompactItoa(removedSock) + "\n";
        
        // ::write(2, message.c_str(), message.length());
        DisplayTime(message, 2);
        if ( removedSock ) 
            closesocket(removedSock);
    }
#   if defined(VISUAL) || defined(BORLAND)
        LeaveCriticalSection(&hCritical);
#   endif
}
