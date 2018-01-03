
#line 1 "looksem.ch"
/*************************************************************************/
#line 1 "looksem.ch"
/*                                                                       */
#line 1 "looksem.ch"
/*        Produced by Metachop version 2.0  -    1989-1995               */
#line 1 "looksem.ch"
/*     Tree      Meta     Chopper      developped    by                  */
#line 1 "looksem.ch"
/*                  Eric Lavillonniere                                   */
#line 1 "looksem.ch"
/*                                                                       */
#line 1 "looksem.ch"
/*************************************************************************/
#line 1 "looksem.ch"
#line 1 "looksem.ch"
#include "token.h"
#line 1 "looksem.ch"
extern int _retVal[50];
#line 1 "looksem.ch"
extern PPTREE _storeVal[50],_nextVal;
#line 1 "looksem.ch"
extern PPTREE stackTree[1024];
#line 1 "looksem.ch"
extern int ptStackTree;
#line 1 "looksem.ch"
#define decomp decomp_metachop
#line 1 "looksem.ch"
#line 1 "looksem.ch"
#ifndef for_elem
#line 1 "looksem.ch"
#line 1 "looksem.ch"
#define for_elem _for_elem
#line 1 "looksem.ch"
#endif
#ifdef INCONNU
#line 1 "looksem.ch"
#line 1 "looksem.ch"
PTREE   for_elem ;
#line 1 "looksem.ch"
#line 1 "looksem.ch"
#endif
#include "semaph.h"

#line 5 "looksem.ch"
#line 5 "looksem.ch"
void main ()
#line 5 "looksem.ch"
{
#line 5 "looksem.ch"
#line 8 "looksem.ch"
    HANDLE_SEMAPHORE_POSIX  hSem = semget(0x5f736b38, 1, 0);
#line 8 "looksem.ch"
#line 9 "looksem.ch"
    EString message ;
#line 9 "looksem.ch"
#line 11 "looksem.ch"
    MetaInit();
#line 11 "looksem.ch"
#line 12 "looksem.ch"
    DisplayTime("start");
#line 12 "looksem.ch"
#line 15 "looksem.ch"
    while ( true ) {
#line 15 "looksem.ch"
#line 16 "looksem.ch"
                        DisplayTime("====================================================");
#line 16 "looksem.ch"
#line 17 "looksem.ch"
                        message = "Init val -> ";
#line 17 "looksem.ch"
#line 18 "looksem.ch"
                        message += CompactItoa(hSem);
#line 18 "looksem.ch"
#line 19 "looksem.ch"
                        message += " ";
#line 19 "looksem.ch"
#line 20 "looksem.ch"
                        message += CompactItoa(semctl(hSem, 0, GETVAL, 0));
#line 20 "looksem.ch"
#line 21 "looksem.ch"
                        DisplayTime(message);
#line 21 "looksem.ch"
#line 21 "looksem.ch"
                    }
#line 21 "looksem.ch"
#line 23 "looksem.ch"
}
#line 23 "looksem.ch"
/*Well done my boy */ 
#line 23 "looksem.ch"

