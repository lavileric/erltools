
#line 1 "looksemn.ch"
/*************************************************************************/
#line 1 "looksemn.ch"
/*                                                                       */
#line 1 "looksemn.ch"
/*        Produced by Metachop version 2.0  -    1989-1995               */
#line 1 "looksemn.ch"
/*     Tree      Meta     Chopper      developped    by                  */
#line 1 "looksemn.ch"
/*                  Eric Lavillonniere                                   */
#line 1 "looksemn.ch"
/*                                                                       */
#line 1 "looksemn.ch"
/*************************************************************************/
#line 1 "looksemn.ch"
#line 1 "looksemn.ch"
#include "token.h"
#line 1 "looksemn.ch"
extern int _retVal[50];
#line 1 "looksemn.ch"
extern PPTREE _storeVal[50],_nextVal;
#line 1 "looksemn.ch"
extern PPTREE stackTree[1024];
#line 1 "looksemn.ch"
extern int ptStackTree;
#line 1 "looksemn.ch"
#define decomp decomp_metachop
#line 1 "looksemn.ch"
#line 1 "looksemn.ch"
#ifndef for_elem
#line 1 "looksemn.ch"
#line 1 "looksemn.ch"
#define for_elem _for_elem
#line 1 "looksemn.ch"
#endif
#ifdef INCONNU
#line 1 "looksemn.ch"
#line 1 "looksemn.ch"
PTREE   for_elem ;
#line 1 "looksemn.ch"
#line 1 "looksemn.ch"
#endif
#include "semaph.h"
#include "token.h"

#line 6 "looksemn.ch"
#line 6 "looksemn.ch"
void main ( int argc, char **argv )
#line 6 "looksemn.ch"
{
#line 6 "looksemn.ch"
#line 8 "looksemn.ch"
    EString semName ;
#line 8 "looksemn.ch"
#line 9 "looksemn.ch"
    HANDLE_SEMAPHORE_POSIX  hSharedSemaphore ;
#line 9 "looksemn.ch"
#line 10 "looksemn.ch"
    HANDLE_SEMAPHORE_POSIX  hFSharedSemaphore ;
#line 10 "looksemn.ch"
#line 11 "looksemn.ch"
    HANDLE_SEMAPHORE_POSIX  hASharedSemaphore ;
#line 11 "looksemn.ch"
#line 12 "looksemn.ch"
    HANDLE_SEMAPHORE_POSIX  hSemaphore ;
#line 12 "looksemn.ch"
#line 13 "looksemn.ch"
    HANDLE_SEMAPHORE_POSIX  itoaSemaphore ;
#line 13 "looksemn.ch"
#line 14 "looksemn.ch"
    HANDLE_SEMAPHORE_POSIX  storeRefSemaphore ;
#line 14 "looksemn.ch"
#line 15 "looksemn.ch"
    HANDLE_SEMAPHORE_POSIX  jumpSemaphore ;
#line 15 "looksemn.ch"
#line 16 "looksemn.ch"
    EString name = *(argv + 1);
#line 16 "looksemn.ch"
#line 18 "looksemn.ch"
    MetaInit("looksemn");
#line 18 "looksemn.ch"
#line 19 "looksemn.ch"
    if ( argc >= 1 ) {
#line 19 "looksemn.ch"
#line 20 "looksemn.ch"
                        {
#line 20 "looksemn.ch"
#line 21 "looksemn.ch"
                            semName = name + "_sem";
#line 21 "looksemn.ch"
#line 22 "looksemn.ch"
                            hSharedSemaphore = CreateSemaphore(0, 10, 10, semName.c_str());
#line 22 "looksemn.ch"
#line 23 "looksemn.ch"
                            semName += "f";
#line 23 "looksemn.ch"
#line 24 "looksemn.ch"
                            hFSharedSemaphore = CreateSemaphore(0, 10, 10, semName.c_str());
#line 24 "looksemn.ch"
#line 25 "looksemn.ch"
                            semName = name + "_sema";
#line 25 "looksemn.ch"
#line 26 "looksemn.ch"
                            hASharedSemaphore = CreateSemaphore(0, 10, 10, semName.c_str());
#line 26 "looksemn.ch"
#line 27 "looksemn.ch"
                            semName = name + "_mappingAny";
#line 27 "looksemn.ch"
#line 28 "looksemn.ch"
                            hSemaphore = CreateSemaphore(0, 10, 10, semName.c_str());
#line 28 "looksemn.ch"
#line 29 "looksemn.ch"
#if 0
#line 29 "looksemn.ch"
#line 30 "looksemn.ch"
                            semName = name + "_metaStoreRef";
#line 30 "looksemn.ch"
#line 31 "looksemn.ch"
                            storeRefSemaphore = CreateSemaphore(0, 10, 10, semName.c_str());
#line 31 "looksemn.ch"
#line 32 "looksemn.ch"
                            semName = name + "_metaCritical";
#line 32 "looksemn.ch"
#line 33 "looksemn.ch"
                            itoaSemaphore = CreateSemaphore(0, 10, 10, semName.c_str());
#line 33 "looksemn.ch"
#line 34 "looksemn.ch"
                            semName = name + "_jumpCritical";
#line 34 "looksemn.ch"
#line 35 "looksemn.ch"
                            jumpSemaphore = CreateSemaphore(0, 10, 10, semName.c_str());
#line 35 "looksemn.ch"
#endif
#line 35 "looksemn.ch"
#line 35 "looksemn.ch"
                        }
#line 35 "looksemn.ch"
#line 40 "looksemn.ch"
                        EString message ;
#line 40 "looksemn.ch"
#line 41 "looksemn.ch"
#if 0
#line 41 "looksemn.ch"
#line 42 "looksemn.ch"
                        message = name + " : Sem  basic val -> ";
#line 42 "looksemn.ch"
#line 43 "looksemn.ch"
                        message += EString(" itoa : ") + CompactItoa(SEM_VAL(itoaSemaphore)) + ", storeRef " + CompactItoa(SEM_VAL(storeRefSemaphore)) + ", jump " + CompactItoa(SEM_VAL(jumpSemaphore)) + "\n";
#line 43 "looksemn.ch"
#line 47 "looksemn.ch"
                        write(1, message.c_str(), message.length());
#line 47 "looksemn.ch"
#endif
#line 47 "looksemn.ch"
#line 49 "looksemn.ch"
                        message = name + " : Sem  val -> ";
#line 49 "looksemn.ch"
#line 50 "looksemn.ch"
                        message += EString(" shared (to write) : ") + CompactItoa(SEM_VAL(hSharedSemaphore)) + ", fshared (to read) " + CompactItoa(SEM_VAL(hFSharedSemaphore)) + ", ashared(access) " + CompactItoa(SEM_VAL(hASharedSemaphore)) + " avail semaphore " + CompactItoa(SEM_VAL(hSemaphore)) + "\n";
#line 50 "looksemn.ch"
#line 59 "looksemn.ch"
                        write(1, message.c_str(), message.length());
#line 59 "looksemn.ch"
#line 63 "looksemn.ch"
                        EString mapping = name + "_mapping";
#line 63 "looksemn.ch"
#line 64 "looksemn.ch"
                        int nbChunks = 32 ;
#line 64 "looksemn.ch"
#line 65 "looksemn.ch"
                        if ( name != "dispatcher" ) 
#line 65 "looksemn.ch"
#line 66 "looksemn.ch"
                            nbChunks = 4 ;
#line 66 "looksemn.ch"
#line 67 "looksemn.ch"
                        int hMapFile = CreateFileMapping((void *)0xFFFFFFFF, 0, 0, 0, 4000 * nbChunks + 5 * sizeof(int), mapping.c_str());
#line 67 "looksemn.ch"
#line 72 "looksemn.ch"
                        int *pvpShared = (int *)MapViewOfFile(hMapFile, FILE_MAP_ALL_ACCESS, 0, 0, 0);
#line 72 "looksemn.ch"
#line 74 "looksemn.ch"
                        message = name + " : Shared Val -> ";
#line 74 "looksemn.ch"
#line 75 "looksemn.ch"
                        message += EString("size : ") + CompactItoa(*pvpShared++) + ", nbchunk : " + CompactItoa(*pvpShared++) + ", sizeChunk : " + CompactItoa(*pvpShared++) + ", readPos : " + CompactItoa(*pvpShared++) + ", writePos : " + CompactItoa(*pvpShared++) + "\n";
#line 75 "looksemn.ch"
#line 81 "looksemn.ch"
                        write(1, message.c_str(), message.length());
#line 81 "looksemn.ch"
#line 81 "looksemn.ch"
                       }
#line 81 "looksemn.ch"
#line 83 "looksemn.ch"
}
#line 83 "looksemn.ch"
/*Well done my boy */ 
#line 83 "looksemn.ch"

