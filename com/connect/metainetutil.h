#ifndef META_INETUTIL_FILE
#   define META_INETUTIL_FILE 1
#   include "erlsock.h"
#   include "ptree.h"
#   include "token.h"
#   include "asn.h"
#   include "decasn.h"
#   include <stdio.h>
#   ifdef MOST_RECENT_STL
#       include <map>
#       include <list>
#   else 
#       include <map.h>
#       include <list.h>
#   endif
#   define INET_BUFFER_SIZE 50000
#   define LOOK_AHEAD 2
#   if !defined(VISUAL) && !defined(BORLAND)
#       define INFINITE -1 
#   endif
    
    class MetaInetUtil {
        
        public :
        
            // constructor 
            MetaInetUtil ()
                : pvStart(0),  pvLength(0),  pvOsin(0),  pvIsin(0),  pvSizeMin(0),  pvDead(false),  pvNbThread(0),  pvSharedMem(false),  pvOldDispatcher(false)
            {
#               if defined(VISUAL) || defined(BORLAND) || defined(HAS_POSIX)
                    InitializeCriticalSection(&hCritical);
                    hSemaphore = 0 ;
                    hThread = 0 ;
                    hMapFile = 0 ;
                    pvpShared = 0 ;
                    hSharedSemaphore = 0 ;
                    hFSharedSemaphore = 0 ;
                    hASharedSemaphore = 0 ;
                    hSharedThread = 0 ;
                    hDMapFile = 0 ;
                    pvpDShared = 0 ;
                    hDSharedSemaphore = 0 ;
                    hDFSharedSemaphore = 0 ;
                    hDASharedSemaphore = 0 ;
                    hSharedThread = 0 ;
                    pvDeadSemaphore = 0 ;
                    pvOpenSemaphore = 0 ;
#               endif
                stateOn = true ;
            }
            
            // destructor
            virtual ~MetaInetUtil ()
            {
                if ( !stateOn ) 
                    return ;
                stateOn = false ;
#               if defined(VISUAL) || defined(BORLAND)
                    pvDead = true ;
                    ReleaseSemaphore(hFSharedSemaphore, 1, (long *)0);
                    while ( pvNbThread-- > 0 ) 
                        WaitForSingleObject(pvDeadSemaphore, INFINITE);
                    DeleteCriticalSection(&hCritical);
                    
                    // SEM_POST(hFSharedSemaphore, 1);
                    // if ( pvNbThread ) {
                    //     SEM_POST(pvDeadSemaphore, - pvNbThread, true);
                    //    pvNbThread = 0 ;
                    //}
                    CloseHandle(hThread);
                    CloseHandle(hSharedThread);
                    
                    // terminate thread so that they no longer use semaphore
                    /* if ( hThread ) {
                           TerminateThread(hThread, 3);
                           CloseHandle(hThread);
                           hThread = 0 ;
                       }
                       if ( hSharedThread ) {
                           TerminateThread(hSharedThread, 3);
                           CloseHandle(hSharedThread);
                           hSharedThread = 0 ;
                       }*/
                    if ( hSemaphore ) {
                        CloseHandle(hSemaphore);
                        hSemaphore = 0 ;
                    }
                    
                    // shared memory thread
                    if ( hSharedSemaphore ) {
                        CloseHandle(hSharedSemaphore);
                        hSharedSemaphore = 0 ;
                    }
                    if ( hFSharedSemaphore ) {
                        CloseHandle(hFSharedSemaphore);
                        hFSharedSemaphore = 0 ;
                    }
                    if ( hASharedSemaphore ) {
                        CloseHandle(hASharedSemaphore);
                        hASharedSemaphore = 0 ;
                    }
                    if ( pvpShared ) {
                        UnmapViewOfFile(pvpShared);
                        pvpShared = 0 ;
                    }
                    if ( hMapFile ) {
                        CloseHandle(hMapFile);
                        hMapFile = 0 ;
                    }
                    if ( pvOpenSemaphore ) {
                        CloseHandle(pvOpenSemaphore);
                        pvOpenSemaphore = 0 ;
                    }
#               elif defined(HAS_POSIX)
                    pvDead = true ;
                    SEM_POST(hFSharedSemaphore, 1);
                    if ( pvNbThread > 0 ) {
                        SEM_POST(pvDeadSemaphore, -pvNbThread, true, 120);
                        pvNbThread = 0 ;
                    }
                    DeleteCriticalSection(&hCritical);
                    
                    // ip thread
                    if ( hSemaphore ) {
                        
                        //                SEM_UNLINK(hSemaphore);
                        hSemaphore = 0 ;
                    }
                    
                    // shared memory thread
                    if ( hSharedSemaphore ) {
                        
                        //                SEM_UNLINK(hSharedSemaphore);
                        hSharedSemaphore = 0 ;
                    }
                    if ( hFSharedSemaphore ) {
                        
                        //                SEM_UNLINK(hFSharedSemaphore);
                        hFSharedSemaphore = 0 ;
                    }
                    if ( hASharedSemaphore ) {
                        
                        //                SEM_UNLINK(hASharedSemaphore);
                        hASharedSemaphore = 0 ;
                    }
                    if ( pvpShared ) {
                        UnmapViewOfFile(pvpShared);
                        pvpShared = 0 ;
                    }
                    if ( pvOpenSemaphore ) 
                        pvOpenSemaphore = 0 ;
#                   if 0
                        if ( hMapFile ) {
                            CloseHandle(hMapFile);
                            hMapFile = 0 ;
                        }
#                   endif
#               endif
                
                // clear dispatcher view
                ResetOutput();
                if ( pvIsin ) {
                    delete pvIsin ;
                    pvIsin = 0 ;
                }
                if ( pvOsin ) {
                    delete pvOsin ;
                    pvOsin = 0 ;
                }
            }
            
            void ResetOutput ()
            {
#               if defined(BORLAND) || defined(VISUAL)
                    
                    // dispatcher view
                    if ( hDSharedSemaphore ) {
                        CloseHandle(hDSharedSemaphore);
                        hDSharedSemaphore = 0 ;
                    }
                    if ( hDFSharedSemaphore ) {
                        CloseHandle(hDFSharedSemaphore);
                        hDFSharedSemaphore = 0 ;
                    }
                    if ( hDASharedSemaphore ) {
                        CloseHandle(hDASharedSemaphore);
                        hDASharedSemaphore = 0 ;
                    }
                    if ( pvpDShared ) {
                        UnmapViewOfFile(pvpDShared);
                        pvpDShared = 0 ;
                    }
                    if ( hDMapFile ) {
                        CloseHandle(hDMapFile);
                        hDMapFile = 0 ;
                    }
#               elif defined(HAS_POSIX)
                    
                    // dispatcher view
                    if ( hDSharedSemaphore ) {
                        
                        //                SEM_UNLINK(hDSharedSemaphore);
                        hDSharedSemaphore = 0 ;
                    }
                    if ( hDFSharedSemaphore ) {
                        
                        //                SEM_UNLINK(hDFSharedSemaphore);
                        hDFSharedSemaphore = 0 ;
                    }
                    if ( hDASharedSemaphore ) {
                        
                        //                SEM_UNLINK(hDASharedSemaphore);
                        hDASharedSemaphore = 0 ;
                    }
                    if ( pvpDShared ) {
                        UnmapViewOfFile(pvpDShared);
                        pvpDShared = 0 ;
                    }
#                   if 0
                        if ( hDMapFile ) {
                            CloseHandle(hDMapFile);
                            hDMapFile = 0 ;
                        }
#                   endif
#               endif
            }
            
            void Freeze ()
            {
#               if defined(VISUAL) || defined(BORLAND)
                    pvDead = true ;
                    ReleaseSemaphore(hFSharedSemaphore, 1, (long *)0);
                    while ( pvNbThread-- > 0 ) 
                        WaitForSingleObject(pvDeadSemaphore, INFINITE);
#               elif defined(HAS_POSIX)
                    pvDead = true ;
                    SEM_POST(hFSharedSemaphore, 1);
                    if ( pvNbThread > 0 ) {
                        SEM_POST(pvDeadSemaphore, -pvNbThread, true, 120);
                        pvNbThread = 0 ;
                    }
#               endif
            }
            
            // StoreNewMessage : store a new message 
            // parameters : 
            //               permute : reads on output sock
            //               newMess : new message if any to be stored
            // return : found message
            PTREE   StoreNewMessage (bool permute, PTREE newMess = PTREE(0)) ;
            
            // StoreSharedMessage : store a message found in shared memory
            PTREE   StoreSharedMessage () ;
            
            // ThreadInput : creates a thread to get input
            void    ThreadInput (EString &name) ;
            
            // DirectInput : creates a direct input
            // parameters : 
            //				 name : name of exchange file
            //               size : size of a chunk
            //               nbChunks : number of chunks 
            //               empty : tells to empty shared
            void    DirectInput (EString &name, int size, int nbChunks, bool empty = true) ;
            
            // ConnectOutput : creates a dispatcher direct input
            //               name : name where to write
            // return : tells if entry is valid
            bool    ConnectOutput (EString &name) ;
            
            // WriteDirect : write a string directly to dispatcher
            // parameters :
            //               write : string to be written
            //               length : length to be writtent
            //               time : time to wait
            bool    WriteDirect (char *write, int length, long time = INFINITE) ;
            
            // SharedInput : tells if exchange with shared memory
            bool SharedInput ()
            {
#               if defined(VISUAL) || defined(BORLAND) || defined(HAS_POSIX)
                    return pvpShared != (char *)0 || pvpDShared != (char *)0 ;
#               else 
                    return false ;
#               endif
            }
            
            // InetReadLow : low level read on inet
            //               permute : tell to read on write socket
            // return : the asn1Value decoded with grammar
            virtual PTREE   InetReadLow (bool permute = false) ;
            
            // InetReadLow : low level read on inet
            //               permute : tell to read on write socket
            // return : the asn1Value decoded with grammar
            virtual PTREE InetReadOneLow ( bool permute = false, void *pt = (void *)0 )
            {
                return PTREE(0);
            }
            
            // InetWriteLow : low level write on inet
            // parameters :
            //              message : the message to be written
            //               permute : tell to write on read socket
            //              check : tell if we have to check if ok
            //              oldMode : tell to write with old mode
            // return : the length writen
            virtual int InetWriteLow ( PTREE message, bool permute = false, bool check = false, bool oldMode = false )
            {
                return 0 ;
            }
            
            // GetNamed : get first named value in a tree
            // parameters :
            //              name : name to be searched
            //              tree : tree where to search
            // return : the named value found
            static PTREE    GetNamed (const EString &name, PTREE tree) ;
            
            // GetNamedContent : get content of first named value in a tree
            // parameters :
            //              name : name to be searched
            //              tree : tree where to search
            // return : the named value found
            static  PTREE GetNamedValue ( EString name, PTREE tree )
            {
                PTREE   namedValue ; // namedValue
                
                if ( namedValue = GetNamed(name, tree) ) 
                    return namedValue [2];
                else 
                    return (PTREE)0 ;
            }
            
            // set isockinet
            // return : the class
            virtual MetaInetUtil &Isockinet ( isockinet &sock )
            {
                pvIsin = &sock ;
                return *this ;
            }
            
            // get  isockinet
            // return : the class
            virtual isockinet &Isockinet ()
            {
                return *pvIsin ;
            }
            
            // set osockinet
            // return : the class
            virtual MetaInetUtil &Osockinet ( osockinet &sock )
            {
                pvOsin = &sock ;
                return *this ;
            }
            
            // ForgetOutput : forget output socket
            virtual void ForgetOutput ()
            {
                pvOsin = 0 ;
            }
            
            // HasOutput : tell if output
            virtual bool HasOutput ()
            {
                return pvOsin != 0 ;
            }
            
            // get osockinet
            // return : the class
            virtual osockinet &Osockinet ()
            {
                return *pvOsin ;
            }
            
            // Empty : tell if there is nothing left to be read
            // return : empty or not
            virtual bool Empty () const
            {
                return pvLength == 0 ;
            }
            
            // TimeVal : TimeVal modifier
            // parameters :
            //               timeVal : new value for timeval
            void TimeVal ( struct timeval &tval )
            {
                
                // set timeval struct for in and out
                if ( pvIsin ) 
                    pvIsin->TimeVal(tval);
                if ( pvOsin ) 
                    pvOsin->TimeVal(tval);
            }
            
            // OutputSock : output socket
            // return : the output socket
            SOCKET OutputSock ()
            {
                if ( pvOsin ) 
                    return pvOsin->OutputSock();
                else 
                    return (SOCKET) -1 ;
            }
            
            // InputSock : input socket
            // return : the input sockets
            std::vector<SOCKET> InputSock ()
            {
                if ( pvIsin ) 
                    return pvIsin->InputSock();
                else {
                    std::vector<SOCKET>     result ; // result
                    return result ;
                }
            }
            
            // add input socket
            // parameters :
            //              newSock : the new socket
            virtual void AddInputSock ( SOCKET newSock )
            {
                if ( pvIsin ) 
                    pvIsin->AddInputSock(newSock);
            }
            
            // add input socket
            // parameters :
            //              newSock : the new socket
            virtual void RemoveInputSock ( SOCKET newSock )
            {
                if ( pvIsin ) 
                    pvIsin->RemoveInputSock(newSock);
            }
            
            // NbSock : return the number of input sockets
            // return : the number of input sockets
            unsigned int NbSock ()
            {
                if ( pvIsin ) 
                    return pvIsin->NbSock();
                else 
                    return 0 ;
            }
            
            // SizeMin : set size min of pdu
            // parameters :
            //               sizeMin : the size min
            // return : the whole object
            MetaInetUtil &SizeMin ( unsigned int sizeMin )
            {
                
                // set value
                pvSizeMin = sizeMin ;
                
                // return object
                return *this ;
            }
            
            // SizeMin : get size min
            // return size min
            unsigned int SizeMin () const
            {
                return pvSizeMin ;
            }
            
            // ListMess : return the list of message list
            list<PTREE> &ListMess ()
            {
                return pvMessAhead ;
            }
            
            // Push : push a message
            // parameters :
            //              message : the pushed message
            void Push ( PTREE &message )
            {
                pvMessAhead.push_back(message);
            }
            
            // Pop : pop a pushed message
            // return : the found message or PTREE(0)
            PTREE Pop ()
            {
                if ( pvMessAhead.empty() ) {
                    return PTREE(0);
                } else {
                    PTREE   received = pvMessAhead.front();
                    pvMessAhead.pop_front();
                    if ( received.TreeArity() == 1 ) 
                        received = received [1];
                    return received ;
                }
                return PTREE(0);
            }
            
            // NoPushed : tell if no message is pushed
            // return : if a message is pushed
            bool NoPushed ()
            {
                return pvMessAhead.empty();
            }
            
            // LastSocket : return the last socket where we read
            // return : the last read socket
            SOCKET LastSocket ()
            {
                return pvLastSocket ;
            }
            
            // InetSharedRead : read a value in shared memory
            // parameters :
            //				pRead : string pointer
            // return : the read tree
            virtual PTREE InetSharedRead ( char *pRead )
            {
                return PTREE(0);
            }
            
            // Dead : tells if thread have to die
            bool Dead ()
            {
                return pvDead ;
            }
            
            // DeadThread : tells that one more thread is dead
            void DeadThread ()
            {
#               if defined(VISUAL) || defined(BORLAND) || defined(HAS_POSIX)
                    ReleaseSemaphoreU(pvDeadSemaphore, 1, (long *)0);
#               endif
            }
            
            void EnterCritical ()
            {
#               if defined(VISUAL) || defined(BORLAND) || defined(HAS_POSIX)
                    EnterCriticalSection(&hCritical);
#               endif
            }
            
            void LeaveCritical ()
            {
#               if defined(VISUAL) || defined(BORLAND) || defined(HAS_POSIX)
                    LeaveCriticalSection(&hCritical);
#               endif
            }
        
        protected :
        
            int             pvStart ;         // where to start 
                                              // reading 
                                              // in the buffer
            unsigned int    pvLength ;        // length remaining 
            
            // in the buffer
            isockinet       *pvIsin ;         // output socket
            osockinet       *pvOsin ;         // input socket
            unsigned int    pvSizeMin ;       // size min for pdu
            SOCKET          pvLastSocket ;    // last read socket
            list<PTREE>     pvMessAhead ;     // messages read ahead
            list<PTREE>     pvLowMessAhead ;  // messages read ahead
            list<SOCKET>    pvLowSocket ;
            bool            pvDead ;          // tells thread to die
            int             pvNbThread ;      // number of threads
            bool            pvSharedMem ;     // shared memory
            bool            pvOldDispatcher ; // old dispatcher
            bool            stateOn ;         // metainit is on
            
#           if defined(VISUAL) || defined(BORLAND)
                HANDLE              hSemaphore ;
                HANDLE              hThread ;            // handle on thread
                CRITICAL_SECTION    hCritical ;          // critical section
                HANDLE              hMapFile ;           // handle for map file
                char                *pvpShared ;         // pointer on shared memory
                HANDLE              hSharedSemaphore ;   // semaphore on shared message
                HANDLE              hFSharedSemaphore ;  // semaphore to know if there is content in shared memory
                HANDLE              hASharedSemaphore ;  // semaphore to access shared memory
                HANDLE              hSharedThread ;      // handle on thread
                HANDLE              hDMapFile ;          // handle for map file
                char                *pvpDShared ;        // pointer on shared memory
                HANDLE              hDSharedSemaphore ;  // semaphore on shared message
                HANDLE              hDFSharedSemaphore ; // semaphore to know if there is content in shared memory
                HANDLE              hDASharedSemaphore ; // semaphore to access shared memory
                HANDLE              pvDeadSemaphore ;    // number of dead threads
                HANDLE              pvOpenSemaphore ;    // tells if connection is allready owned
#           elif defined(HAS_POSIX)
                HANDLE_SEMAPHORE_POSIX  hSemaphore ;
                int                     hThread ;            // handle on thread
                CRITICAL_SECTION        hCritical ;          // critical section
                int                     hMapFile ;           // handle for map file
                char                    *pvpShared ;         // pointer on shared memory
                HANDLE_SEMAPHORE_POSIX  hSharedSemaphore ;   // semaphore on shared message
                HANDLE_SEMAPHORE_POSIX  hFSharedSemaphore ;  // semaphore to know if there is content in shared memory
                HANDLE_SEMAPHORE_POSIX  hASharedSemaphore ;  // semaphore to access shared memory
                HANDLE_SEMAPHORE_POSIX  hSharedThread ;      // handle on thread
                int                     hDMapFile ;          // handle for map file
                char                    *pvpDShared ;        // pointer on shared memory
                HANDLE_SEMAPHORE_POSIX  hDSharedSemaphore ;  // semaphore on shared message
                HANDLE_SEMAPHORE_POSIX  hDFSharedSemaphore ; // semaphore to know if there is content in shared memory
                HANDLE_SEMAPHORE_POSIX  hDASharedSemaphore ; // semaphore to access shared memory
                HANDLE_SEMAPHORE_POSIX  pvDeadSemaphore ;    // number of dead threads
                HANDLE_SEMAPHORE_POSIX  pvOpenSemaphore ;    // tells if connection is allready owned
#           endif
    };
#endif
