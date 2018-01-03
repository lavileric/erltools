language metachop;

#include "semaph.h"
#include "token.h"

void main ( int argc, char **argv )
{
    EString                 semName ;
    HANDLE_SEMAPHORE_POSIX  hSharedSemaphore ;
    HANDLE_SEMAPHORE_POSIX  hFSharedSemaphore ;
    HANDLE_SEMAPHORE_POSIX  hASharedSemaphore ;
    HANDLE_SEMAPHORE_POSIX  hSemaphore ;
    HANDLE_SEMAPHORE_POSIX  itoaSemaphore ;
    HANDLE_SEMAPHORE_POSIX  storeRefSemaphore ;
    HANDLE_SEMAPHORE_POSIX  jumpSemaphore ;
    EString                 name = *(argv + 1);
    
    MetaInit("looksemn");
    if ( argc >= 1 ) {
        {
            semName           =  name + "_sem";
            hSharedSemaphore  =  CreateSemaphore(0, 10, 10, semName.c_str());
            semName           += "f";
            hFSharedSemaphore =  CreateSemaphore(0, 10, 10, semName.c_str());
            semName           =  name + "_sema";
            hASharedSemaphore =  CreateSemaphore(0, 10, 10, semName.c_str());
            semName           =  name + "_mappingAny";
            hSemaphore        =  CreateSemaphore(0, 10, 10, semName.c_str());
#           if 0
                semName           =  name + "_metaStoreRef";
                storeRefSemaphore =  CreateSemaphore(0, 10, 10, semName.c_str());
                semName           =  name + "_metaCritical";
                itoaSemaphore     =  CreateSemaphore(0, 10, 10, semName.c_str());
                semName           =  name + "_jumpCritical";
                jumpSemaphore     =  CreateSemaphore(0, 10, 10, semName.c_str());
#           endif
        }
        
        // display semaphore
        EString message ;
#       if 0
            message =  name + " : Sem  basic val -> ";
            message += EString(" itoa : ") + CompactItoa(SEM_VAL(itoaSemaphore)) + ", storeRef " + CompactItoa(SEM_VAL(storeRefSemaphore)) + ", jump "
                + CompactItoa(SEM_VAL(jumpSemaphore)) + "\n";
            _write(1, message.c_str(), message.length());
#       endif
        message =  name + " : Sem  val -> ";
        message 
            += EString(" shared (to write) : ") + CompactItoa(SEM_VAL(hSharedSemaphore)) + ", fshared (to read) " + CompactItoa(SEM_VAL(hFSharedSemaphore))
                + ", ashared(access) " + CompactItoa(SEM_VAL(hASharedSemaphore)) + " avail semaphore " + CompactItoa(SEM_VAL(hSemaphore)) + "\n";
        _write(1, message.c_str(), message.length());
        
        // display shared memory
        // creates mapping file
        EString mapping = name + "_mapping";
        int     nbChunks = 32 ;
        if ( name != "dispatcher" ) 
            nbChunks =  4 ;
        int hMapFile = CreateFileMapping((void *)0xFFFFFFFF, 0, 0, 0, 4000 * nbChunks + 5 * sizeof(int), mapping.c_str());
        
        // opens a view on it
        int *pvpShared = (int *)MapViewOfFile(hMapFile, FILE_MAP_ALL_ACCESS, 0, 0, 0);
        message =  name + " : Shared Val -> ";
        message 
            += EString("size : ") + CompactItoa(*pvpShared++) + ", nbchunk : " + CompactItoa(*pvpShared++) + ", sizeChunk : " + CompactItoa(*pvpShared++)
                + ", readPos : " + CompactItoa(*pvpShared++) + ", writePos : " + CompactItoa(*pvpShared++) + "\n";
        _write(1, message.c_str(), message.length());
    }
}


