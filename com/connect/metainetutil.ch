language asn;

// #define DEBUG_SOCK_RAW 1
// #define DEBUG_SOCK 1
#define CHUNK_DIVIDE 2

#include "token.h"
#include "metainetutil.h"
#include <decasn.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

void    (*ptSharedInput)() = 0 ;
void    (*ptIpInput)() = 0 ;

// #include "semaph.h"
#if defined(VISUAL) || defined(BORLAND) || defined(HAS_POSIX)
    
    // thread to get messages
    DWORD WINAPI MetaInetUtilThread ( LPVOID pParam )
    {
        MetaInetUtil    *pInetUtil = (MetaInetUtil *)pParam ;
        
        MSLEEP(200);
        while ( true ) {
            if ( pInetUtil->Dead() ) {
                DisplayTime("util thread dead");
                pInetUtil->DeadThread();
                SLEEP(300);
                return 0 ;
            }
            pInetUtil->StoreNewMessage(false);
        }
    }
    
    // thread to get messages
    DWORD WINAPI MetaInetUtilSharedThread ( LPVOID pParam )
    {
        MetaInetUtil    *pInetUtil = (MetaInetUtil *)pParam ;
        
        MSLEEP(200);
        while ( true ) {
            if ( pInetUtil->Dead() ) {
                DisplayTime("util shared thread dead");
                pInetUtil->DeadThread();
                SLEEP(300);
                return 0 ;
            }
            pInetUtil->StoreSharedMessage();
        }
    }
    
#endif

// ThreadInput : creates a thread to get input
void MetaInetUtil::ThreadInput ( EString &name )
{
#   if defined(HAS_POSIX) || defined(ON_W)
        
        // get input by shared memory
        pvSharedMem =  true ;
        
        // if allready one thread do nothing
        if ( hThread ) 
            return ;
        
        EString theMapping = name + "_mappingAny";
        
#       ifdef ON_W
            
            DWORD               ident ;    // ident 
            SECURITY_ATTRIBUTES security ; // security
            
            security.nLength              =  sizeof(SECURITY_ATTRIBUTES);
            security.lpSecurityDescriptor =  0 ;
            security.bInheritHandle       =  true ;
#       endif
        
        EString theDeadName = name + "_dead";
        
        if ( !pvDeadSemaphore ) 
            pvDeadSemaphore =  CreateSemaphore(&security, 0, INT_MAX, theDeadName.c_str());
        
        // creates semaphore
        if ( !hSemaphore ) 
            hSemaphore =  CreateSemaphore(&security, 0, INT_MAX, theMapping.c_str());
#       if defined(VISUAL) || defined(BORLAND)
            {
                pvNbThread++ ;
                DWORD               ident ;    // ident 
                SECURITY_ATTRIBUTES security ; // security
                security.nLength              =  sizeof(SECURITY_ATTRIBUTES);
                security.lpSecurityDescriptor =  0 ;
                security.bInheritHandle       =  true ;
                hThread                       =  CreateThread(&security, 0, &MetaInetUtilThread, (LPVOID)this, (unsigned long)0, &ident);
            }
#       elif defined(HAS_POSIX)
            {
                pvNbThread++ ;
                pthread_t   reader ;
                pthread_create(&reader, /* pthread_attr_default*/ 0, (LPTHREAD_START_ROUTINE)MetaInetUtilThread, (LPVOID)this);
                pthread_detach(reader);
                hThread =  1 ;
            }
#       endif
#   endif
}

// DirectInput : creates a direct input
// parameters : 
//				 name : name of exchange file
//               size : size of a chunk
//               nbChunks : number of chunks 
//               empty : tells to empty shared memory
void MetaInetUtil::DirectInput ( EString &name, int size, int nbChunks, bool empty )
{
#   if defined(VISUAL) || defined(BORLAND) || defined(HAS_POSIX)
        if ( hSharedThread ) 
            return ;
#       ifndef HAS_POSIX
            
            DWORD               ident ;    // ident 
            SECURITY_ATTRIBUTES security ; // security
            
            security.nLength              =  sizeof(SECURITY_ATTRIBUTES);
            security.lpSecurityDescriptor =  0 ;
            security.bInheritHandle       =  true ;
#       endif
        
        // wait until this connection is released
        EString access = name + "_excacccess_";
        
        pvOpenSemaphore =  CreateSemaphore(&security, 1, 1, access.c_str());
        DisplayTime(access.c_str());
        WaitForSingleObjectU(pvOpenSemaphore, INFINITE);
        DisplayTime("semaphore opened");
        
        // go on
        if ( hMapFile ) 
            return ;
        
        EString theDeadName = name + "_dead";
        
        if ( !pvDeadSemaphore ) 
            pvDeadSemaphore =  CreateSemaphore(&security, 0, INT_MAX, theDeadName.c_str());
        
        EString theMapping = name + "_mappingAny";
        
        if ( !hSemaphore ) 
            hSemaphore =  CreateSemaphore(&security, 0, INT_MAX, theMapping.c_str());
        
        // creates mapping file
        EString mapping = name + "_mapping";
        int     nbFileMapping = 60 ;
        
        while ( true ) {
            hMapFile =  CreateFileMapping((void *)0xFFFFFFFF, &security, PAGE_READWRITE, 0, size * nbChunks + 5 * sizeof(int), mapping.c_str());
            if ( hMapFile ) 
                break ;
            else if ( nbFileMapping-- < 0 ) {
                MetaExit(3, "Could not create file-mapping object.\n");
            }
            SLEEP(1);
        }
        
        // opens a view on it
        pvpShared =  (char *)MapViewOfFile(hMapFile, FILE_MAP_ALL_ACCESS, 0, 0, 0);
        if ( !pvpShared ) {
            MetaExit(3, "Could not map view of file.\n");
        }
        
        // put empty value in file
        EString semName ; // name of semaphore
        
        semName           =  name + "_sema";
        hASharedSemaphore =  0 ;
        hASharedSemaphore =  OpenSemaphore(SEMAPHORE_ALL_ACCESS, false, semName.c_str());
        /*	if (hASharedSemaphore) {
           	WaitForSingleObject(hASharedSemaphore,10);
           }*/
        // if no old semaphore initialize
        if ( !hASharedSemaphore ) {
            
            // initialize data
            int tabVal [] = { 0, nbChunks, size, 0, 0 };
            memcpy((int *)pvpShared, (int *)tabVal, 5 * sizeof(int));
            FlushViewOfFile(pvpShared, 5 * sizeof(int));
        } else {
#           ifdef ON_W
                ReleaseSemaphore(hASharedSemaphore, 1, (long *)0);
#           endif
            CloseHandle(hASharedSemaphore);
        }
#       ifndef ON_W
            SEM_INIT(hASharedSemaphore, 1);
#       endif
        
        // creates a semaphore to protect access
        semName =  name + "_sem";
        if ( (hSharedSemaphore = CreateSemaphore(&security, nbChunks + 1, nbChunks + 1, semName.c_str())) ) {
            semName           += "f";
            hFSharedSemaphore =  CreateSemaphore(&security, 0, nbChunks + 1, semName.c_str());
            semName           =  name + "_sema";
            hASharedSemaphore =  CreateSemaphore(&security, 1, 1, semName.c_str());
        }
        if ( empty ) {
            
            // empty buffer
            while ( WaitForSingleObject(hFSharedSemaphore, 10) == WAIT_OBJECT_0 && WaitForSingleObjectU(hASharedSemaphore, INFINITE) == WAIT_OBJECT_0 ) {
                
                // DisplayTime("ready to read");
                // get shared valued
                int *pIndex = (int *)pvpShared ;
                int currSize = *pIndex++ ;
                int nbChunk = *pIndex++ ;
                int sizeChunk = *pIndex++ ;
                int readPos = *pIndex++ ;
                int writePos = *pIndex++ ;
                
                // patch for old dispatcher
                if ( pvOldDispatcher ) {
                    pIndex    =  (int *)pvpShared ;
                    currSize  =  0 ;
                    nbChunk   =  *pIndex++ ;
                    sizeChunk =  *pIndex++ ;
                    readPos   =  *pIndex++ ;
                    writePos  =  *pIndex++ ;
                    int tabVal [] = { nbChunk, sizeChunk, (readPos + 1) % nbChunk, writePos };
                    memcpy((int *)pvpShared, (int *)tabVal, 4 * sizeof(int));
                }
                
                // put good values back in shared
                if ( currSize > 0 ) {
                    int tabVal [] = { currSize - 1, nbChunk, sizeChunk, (readPos + 1) % nbChunk, writePos };
                    memcpy((int *)pvpShared, (int *)tabVal, 5 * sizeof(int));
                }
                FlushViewOfFile(pvpShared, 5 * sizeof(int));
                
                // release access 
                if ( ReleaseSemaphoreU(hASharedSemaphore, 1, (long *)0) <= 0 ) 
                    MetaExit(3, "Maximum count reached for access semaphore");
                
                // release 1 elem in shared
                long    prev ;
                if ( ReleaseSemaphore(hSharedSemaphore, 1, (long *)0) <= 0 ) {}
            }
            
            // shared memory is empty now
            int *pIndex = (int *)pvpShared ;
            if ( WaitForSingleObjectU(hASharedSemaphore, INFINITE) == WAIT_OBJECT_0 ) {
                if ( pvOldDispatcher ) {
                    int tabVal [] = { nbChunks, size, 0, 0 };
                    memcpy((int *)pvpShared, (int *)tabVal, 4 * sizeof(int));
                } else {
                    int tabVal [] = { 0, nbChunks, size, 0, 0 };
                    memcpy((int *)pvpShared, (int *)tabVal, 5 * sizeof(int));
                }
                FlushViewOfFile(pvpShared, 5 * sizeof(int));
                
                // release access 
                if ( ReleaseSemaphoreU(hASharedSemaphore, 1, (long *)0) <= 0 ) 
                    MetaExit(3, "Maximum count reached for access semaphore");
            }
        }
        
        // restore number for shared
        int nbElem = nbChunks ;
        
#       ifdef ON_W
            while ( nbElem-- ) {
                ReleaseSemaphore(hSharedSemaphore, 1, (long *)0);
            }
#       else 
            SEM_INIT(hSharedSemaphore, nbChunks);
#       endif
        
        // create thread now : it must not play with previous loop
        if ( hSharedSemaphore ) {
#           ifndef HAS_POSIX
                {
                    pvNbThread++ ;
                    hSharedThread =  CreateThread(&security, 0, &MetaInetUtilSharedThread, (LPVOID)this, (unsigned long)0, &ident);
                }
#           else 
                {
                    pvNbThread++ ;
                    pthread_t   reader ;
                    pthread_create(&reader, /* pthread_attr_default*/ 0, (LPTHREAD_START_ROUTINE)MetaInetUtilSharedThread, (LPVOID)this);
                    pthread_detach(reader);
                }
#           endif
        }
#   endif
}

// ConnectOutput : creates a connection to dispatcher
// parameters :
//              name : name where to write
bool MetaInetUtil::ConnectOutput ( EString &name )
{
#   if defined(VISUAL) || defined(BORLAND) || defined(HAS_POSIX)
#       ifndef HAS_POSIX
            
            DWORD               ident ;    // ident 
            SECURITY_ATTRIBUTES security ; // security
            
            security.nLength              =  sizeof(SECURITY_ATTRIBUTES);
            security.lpSecurityDescriptor =  0 ;
            security.bInheritHandle       =  true ;
#       endif
        
        // creates mapping file
        while ( true ) {
            EString mapping = name + "_mapping";
            hDMapFile =  0 ;
            int index = 0 ;
            while ( !hDMapFile ) {
                hDMapFile =  OpenFileMapping(FILE_MAP_ALL_ACCESS, false, mapping.c_str());
                EString outMess("trying to connect to : ");
                outMess += mapping ;
                DisplayTime(outMess);
                if ( !hDMapFile ) {
#                   ifdef ON_W
                        int lastError = GetLastError();
                        outMess =  "error : ";
                        outMess += CompactItoa(lastError);
                        DisplayTime(outMess);
#                   endif
                }
                MSLEEP(200);
                if ( index++ > 50 ) 
                    break ;
            }
            if ( !hDMapFile ) {
                if ( name != "dispatcher" ) 
                    return false ;
                else 
                    SLEEP(1);
            } else 
                break ;
        }
        
        // opens a view on it    
        pvpDShared =  (char *)MapViewOfFile(hDMapFile, FILE_MAP_ALL_ACCESS, 0, 0, 0);
        if ( !pvpDShared ) {
            MetaExit(3, "Could not map view of file.\n");
        }
        pvOldDispatcher =  *(((int *)pvpDShared) + 1) > 999 ;
        
        // creates a semaphore to protect access
        EString semName (name) ; // name of semaphore
        
        semName =  name + "_sem";
        while ( true ) {
            if ( (hDSharedSemaphore = OpenSemaphore(SEMAPHORE_ALL_ACCESS, false, semName.c_str())) ) {
                semName += "f";
                while ( !(hDFSharedSemaphore = OpenSemaphore(SEMAPHORE_ALL_ACCESS, false, semName.c_str())) ) 
                    SLEEP(1);
                semName =  name + "_sema";
                while ( !(hDASharedSemaphore = OpenSemaphore(SEMAPHORE_ALL_ACCESS, false, semName.c_str())) ) 
                    SLEEP(1);
                break ;
            }
            SLEEP(1);
        }
        return true ;
#   endif
}

// WriteDirect : write a string directly to dispatcher
// parameters :
//               write : string to be written
//               length : length to be written
//               time : time to wait
bool MetaInetUtil::WriteDirect ( char *write, int length, long time )
{
#   if defined(VISUAL) || defined(BORLAND) || defined(HAS_POSIX)
        
        DWORD   dwWaitResult ;
        
        if ( !hDSharedSemaphore || !hDASharedSemaphore || !hDFSharedSemaphore || !pvpDShared ) 
            return false ;
    start : 
        
        // DisplayTime("start of write");
        // Try to enter the semaphore gate.
        if ( hDSharedSemaphore ) {
            dwWaitResult =  WaitForSingleObject(hDSharedSemaphore, time);
            if ( dwWaitResult == WAIT_OBJECT_0 ) {
                dwWaitResult =  WaitForSingleObjectU(hDASharedSemaphore, time);
                if ( dwWaitResult == WAIT_OBJECT_0 ) {
                    
                    // DisplayTime("ready to write");
                    // get shared valued
                    int *pIndex = (int *)pvpDShared ;
                    int currSize = *pIndex++ ;
                    int nbChunk = *pIndex++ ;
                    int sizeChunk = *pIndex++ ;
                    int readPos = *pIndex++ ;
                    int writePos = *pIndex++ ;
                    
                    // patch for old dispatcher
                    if ( pvOldDispatcher ) {
                        pIndex    =  (int *)pvpDShared ;
                        currSize  =  0 ;
                        nbChunk   =  *pIndex++ ;
                        sizeChunk =  *pIndex++ ;
                        readPos   =  *pIndex++ ;
                        writePos  =  *pIndex++ ;
                    }
#                   if 0
                        {
                            EString message = EString("current write shared val :") + CompactItoa(readPos) + " " + CompactItoa(writePos) + "\n";
                            ::_write(1, message.c_str(), message.length());
                        }
#                   endif
                    
                    // if there is an error and no space try again
                    if ( currSize >= nbChunk ) {
                        if ( ReleaseSemaphoreU(hDASharedSemaphore, 1, (long *)0) <= 0 ) 
                            MetaExit(3, "Maximum count reached for Access semaphore");
                        
                        // release 1 elem in shared
                        long    prev ;
#                       ifdef ON_W
                            ReleaseSemaphore(hDFSharedSemaphore, 1, &prev);
#                       else 
                            if ( SEM_VAL(hDFSharedSemaphore) < nbChunk ) 
                                ReleaseSemaphore(hDFSharedSemaphore, 1, &prev);
#                       endif
                        
                        // return WriteDirect(write, length, time);
                        goto start ;
                    }
                    
                    // check sizes
#                   ifdef ON_W
                        if ( !pvOldDispatcher ) {
                            long    size ;
                            ReleaseSemaphore(hDFSharedSemaphore, 0, &size);
                            if ( size < currSize ) 
                                ReleaseSemaphore(hDFSharedSemaphore, currSize - size, 0);
                            ReleaseSemaphore(hDSharedSemaphore, 0, &size);
                            size += 1 ; // semaphore decremented on entry
                            if ( size < nbChunk - currSize ) 
                                ReleaseSemaphore(hDSharedSemaphore, nbChunk - currSize - size, 0);
                        }
#                   else 
                        {
                            int size = SEM_VAL(hDFSharedSemaphore);
                            if ( size < currSize ) 
                                ReleaseSemaphore(hDFSharedSemaphore, currSize - size, 0);
                            size =  SEM_VAL(hDSharedSemaphore) + 1 ; // semaphore decremented on entry
                            if ( size < nbChunk - currSize ) 
                                ReleaseSemaphore(hDSharedSemaphore, nbChunk - currSize - size, 0);
                        }
#                   endif
                    
                    // get to pos
                    char    *pRead ; // reading pointer
                    pRead =  (char *)pIndex ;
                    pRead += writePos * sizeChunk ;
                    
                    // read value
                    memcpy(pRead, write, length);
                    
                    // put good values back in shared
                    if ( pvOldDispatcher ) {
                        int tabVal [] = { nbChunk, sizeChunk, readPos, (writePos + 1) % nbChunk };
                        memcpy((int *)pvpDShared, (int *)tabVal, 4 * sizeof(int));
                        FlushViewOfFile(pvpDShared, pRead - (char *)pvpDShared + length);
                    } else {
                        int tabVal [] = { currSize + 1, nbChunk, sizeChunk, readPos, (writePos + 1) % nbChunk };
                        memcpy((int *)pvpDShared, (int *)tabVal, 5 * sizeof(int));
                        FlushViewOfFile(pvpDShared, pRead - (char *)pvpDShared + length);
                    }
                    if ( ReleaseSemaphoreU(hDASharedSemaphore, 1, (long *)0) <= 0 ) 
                        MetaExit(3, "Maximum count reached for Access semaphore");
                    
                    // release 1 elem in shared
                    long    prev ;
                    if ( ReleaseSemaphore(hDFSharedSemaphore, 1, &prev) <= 0 ) {}
                } else {
                    ReleaseSemaphore(hDFSharedSemaphore, 1, (long *)0);
                    DisplayTime("Write failed");
                    
                    // DebugBreak();
                    return false ;
                }
            } else {
                DisplayTime("Write failed");
                
                // DebugBreak();
                return false ;
            }
        } // DisplayTime("end of write");
        
        // DisplayTime("end of write");
        return true ;
#   endif
    return false ;
}

// StoreSharedMessage : store a message found in shared memory
PTREE MetaInetUtil::StoreSharedMessage ()
{
    PTREE   readResult ;
    
#   if defined(VISUAL) || defined(BORLAND) || defined(HAS_POSIX)
        if ( !hFSharedSemaphore || !hASharedSemaphore || !hSharedSemaphore || !pvpShared ) {
            SLEEP(1);
            return PTREE(0);
        }
        
        DWORD   dwWaitResult ;
        
    start : 
        
        // DisplayTime("start of read");
        // Try to enter the semaphore gate.
        if ( hFSharedSemaphore ) {
            dwWaitResult =  WaitForSingleObject(hFSharedSemaphore, INFINITE);
            if ( dwWaitResult == WAIT_OBJECT_0 ) {
                if ( Dead() ) {
                    return PTREE(0);
                }
                dwWaitResult =  WaitForSingleObjectU(hASharedSemaphore, INFINITE);
                if ( dwWaitResult == WAIT_OBJECT_0 ) {
                    
                    // DisplayTime("ready to read");
                    // get shared valued
                    int *pIndex = (int *)pvpShared ;
                    int currSize = *pIndex++ ;
                    int nbChunk = *pIndex++ ;
                    int sizeChunk = *pIndex++ ;
                    int readPos = *pIndex++ ;
                    int writePos = *pIndex++ ;
                    
                    // patch for old dispatcher
                    if ( pvOldDispatcher ) {
                        pIndex    =  (int *)pvpShared ;
                        currSize  =  0 ;
                        nbChunk   =  *pIndex++ ;
                        sizeChunk =  *pIndex++ ;
                        readPos   =  *pIndex++ ;
                        writePos  =  *pIndex++ ;
                    }
#                   if 0
                        {
                            EString message = EString("current read shared val :") + CompactItoa(readPos) + " " + CompactItoa(writePos) + "\n";
                            ::_write(1, message.c_str(), message.length());
                        }
#                   endif
                    
                    // if nothing left there is an error
                    if ( !pvOldDispatcher && currSize <= 0 ) {
                        
                        // since it is empty resync the shared memory
                        int *pIndex = (int *)pvpShared ;
                        *pIndex   =  0 ;
                        pIndex    += 3 ;
                        *pIndex++ =  0 ;
                        *pIndex++ =  0 ;
                        FlushViewOfFile(pvpShared, 5 * sizeof(int));
                        
                        // release access 
                        if ( ReleaseSemaphoreU(hASharedSemaphore, 1, (long *)0) <= 0 ) 
                            MetaExit(3, "Maximum count reached for access semaphore");
                        
                        // release 1 elem in shared
                        long    prev ;
#                       ifdef ON_W
                            ReleaseSemaphore(hSharedSemaphore, 1, &prev);
#                       else 
                            if ( SEM_VAL(hSharedSemaphore) < nbChunk ) 
                                ReleaseSemaphore(hSharedSemaphore, 1, &prev);
#                       endif
                        
                        // return StoreSharedMessage();
                        goto start ;
                    }
                    
                    // check sizes
#                   ifdef ON_W
                        if ( !pvOldDispatcher ) {
                            long    size ;
                            ReleaseSemaphore(hFSharedSemaphore, 0, &size);
                            size += 1 ; // semaphore decremented on entry
                            if ( size < currSize ) 
                                ReleaseSemaphore(hFSharedSemaphore, currSize - size, 0);
                            ReleaseSemaphore(hSharedSemaphore, 0, &size);
                            if ( size < nbChunk - currSize ) 
                                ReleaseSemaphore(hSharedSemaphore, nbChunk - currSize - size, 0);
                        }
#                   else 
                        {
                            int size = SEM_VAL(hFSharedSemaphore) + 1 ; // semaphore decremented on entry
                            if ( size < currSize ) 
                                ReleaseSemaphore(hFSharedSemaphore, currSize - size, 0);
                            size =  SEM_VAL(hSharedSemaphore);
                            if ( size < nbChunk - currSize ) 
                                ReleaseSemaphore(hSharedSemaphore, nbChunk - currSize - size, 0);
                        }
#                   endif
                    
                    // get to pos
                    char    *pRead ; // reading pointer
                    pRead =  (char *)pIndex ;
                    pRead += readPos * sizeChunk ;
                    
                    // read value
                    EnterCritical();
                    readResult =  InetSharedRead(pRead);
                    LeaveCritical();
#                   if 0
                        DumpTree(readResult);
#                   endif
                    
                    // store it in stack
                    if ( readResult != PTREE(0) ) {
                        StoreNewMessage(true, readResult);
                    }
                    
                    // put good values back in shared
                    if ( pvOldDispatcher ) {
                        int tabVal [] = { nbChunk, sizeChunk, (readPos + 1) % nbChunk, writePos };
                        memcpy((int *)pvpShared, (int *)tabVal, 4 * sizeof(int));
                    } else {
                        int tabVal [] = { currSize - 1, nbChunk, sizeChunk, (readPos + 1) % nbChunk, writePos };
                        memcpy((int *)pvpShared, (int *)tabVal, 5 * sizeof(int));
                    }
                    FlushViewOfFile(pvpShared, 5 * sizeof(int));
                    
                    // release access 
                    if ( ReleaseSemaphoreU(hASharedSemaphore, 1, (long *)0) <= 0 ) 
                        MetaExit(3, "Maximum count reached for access semaphore");
                    
                    // release 1 elem in shared
                    long    prev ;
                    if ( ReleaseSemaphore(hSharedSemaphore, 1, &prev) <= 0 ) {}
                }
            }
        }
#   endif
    return readResult ;
}

// StoreNewMessage : store a new message 
// parameters : 
//               permute : reads on output sock
//               newMess : new message if any to be stored
// return : found message
PTREE MetaInetUtil::StoreNewMessage ( bool permute, PTREE newMess )
{
    bool    onSocket = false ;
    
#   if defined(VISUAL) || defined(BORLAND) || defined(HAS_POSIX)
        if ( newMess == PTREE(0) ) {
            newMess  =  InetReadOneLow(permute, (void *)&hCritical);
            onSocket =  true ;
            if ( newMess != PTREE(0) ) {
                if ( ptIpInput != 0 ) 
                    (*ptIpInput)();
            }
        } else {
            if ( ptSharedInput != 0 ) 
                (*ptSharedInput)();
        }
        if ( newMess != PTREE(0) ) {
#           if 0
                DisplayTime("------ received ---------");
                DumpTree(newMess);
#           endif
            EnterCritical();
            pvLowMessAhead.push_back(newMess);
            if ( onSocket ) {
                if ( permute ) 
                    pvLowSocket.push_back(pvOsin->Socket());
                else 
                    pvLowSocket.push_back(pvIsin->LastSocket());
            } else 
                pvLowSocket.push_back( -1);
            LeaveCritical();
            if ( hSemaphore ) {
                ReleaseSemaphore(hSemaphore, 1, (long *)0);
            }
        }
#   endif
    return newMess ;
}

// InetReadLow : low level read on inet
// parameters :
//               permute : tell to read on write socket
// return : the asn1Value decoded with grammar
PTREE MetaInetUtil::InetReadLow ( bool permute )
{
    
    // return InetReadOneLow(permute);
    PTREE   readMess ;
    
#   if defined(VISUAL) || defined(BORLAND) || defined(HAS_POSIX)
        if ( pvSharedMem && !hSemaphore ) {
            SLEEP(1);
            return PTREE(0);
        }
        if ( hSemaphore ) {
            DWORD   dwWaitResult ;
            
            // Try to enter the semaphore gate.
            time_t  waitTime = 0 ;
            if ( permute && pvOsin ) {
                waitTime =  pvOsin->TimeVal()->tv_sec * 1000 + pvOsin->TimeVal()->tv_usec / 1000 ;
            } else if ( pvIsin ) {
                waitTime =  pvIsin->TimeVal()->tv_sec * 1000 + pvIsin->TimeVal()->tv_usec / 1000 ;
            }
            if ( waitTime <= 0 ) 
                waitTime =  1000 ;
            dwWaitResult =  WaitForSingleObject(hSemaphore, waitTime);
            switch ( dwWaitResult ) {
                
                // The semaphore object was signaled.
                case WAIT_OBJECT_0 : 
                    {
                        EnterCritical();
                        if ( pvLowMessAhead.empty() ) 
                            readMess =  PTREE(0);
                        else {
                            readMess =  pvLowMessAhead.front();
                            pvLowMessAhead.pop_front();
                            pvLastSocket =  pvLowSocket.front();
                            pvLowSocket.pop_front();
                        }
                        LeaveCritical();
                        return readMess ;
                    }
                    break ;
                
                // Semaphore was nonsignaled, so a time-out occurred.
                case WAIT_TIMEOUT : 
                    return PTREE(0);
                    break ;
            }
        }
#   endif
    
    // get next message
    if ( !pvLowMessAhead.empty() ) {
        EnterCritical();
        readMess =  pvLowMessAhead.front();
        pvLowMessAhead.pop_front();
        pvLastSocket =  pvLowSocket.front();
        pvLowSocket.pop_front();
        LeaveCritical();
    } else {
        readMess =  InetReadOneLow(permute);
        if ( permute ) 
            pvLastSocket =  pvOsin ? pvOsin->Socket() : 0 ;
        else 
            pvLastSocket =  pvIsin ? pvIsin->LastSocket() : 0 ;
    }
    
    // read as much as we can
    if ( 0 && (permute && pvOsin || !permute && pvIsin) && readMess != PTREE(0) ) {
        struct timeval oldVal ;
        if ( permute ) {
            oldVal.tv_sec  =  pvOsin->TimeVal()->tv_sec ;
            oldVal.tv_usec =  pvOsin->TimeVal()->tv_usec ;
        } else {
            oldVal.tv_sec  =  pvIsin->TimeVal()->tv_sec ;
            oldVal.tv_usec =  pvIsin->TimeVal()->tv_usec ;
        }
        struct timeval newVal ;
        newVal.tv_sec  =  0 ;
        newVal.tv_usec =  3000 ;
        TimeVal(newVal);
        PTREE   newMess ;
        do {
            newMess =  StoreNewMessage(permute);
        } while ( newMess != PTREE(0) );
        TimeVal(oldVal);
    }
    return readMess ;
}

// GetNamed : get first named value in a tree
// parameters :
//              name : name to be searched
//              tree : tree where to search
// return : the named value found
PTREE MetaInetUtil::GetNamed ( const EString &name, PTREE tree )
{
start : 
    switch ( tree ) {
        case <NAMED_VALUE> : 
        case <NAMED_VALUE_EXTENDED> : 
            {
                if ( name == Value(tree) ) 
                    return tree ;
                else {
                    tree =  tree [2];
                    goto start ;
                }
            }
            break ;
        case <SEQUENCE_VALUE> : 
            {
                tree =  tree [1];
                goto start ;
            }
        case <LIST> : 
            {
                PTREE   elem ;
                while ( (elem = nextl(tree)) ) {
                    if ( (elem = GetNamed(name, elem)) ) {
                        return elem ;
                    }
                }
            }
    }
    return PTREE(0);
}


