
#line 1 "testsem.ch"
/*************************************************************************/
#line 1 "testsem.ch"
/*                                                                       */
#line 1 "testsem.ch"
/*        Produced by Metachop version 2.0  -    1989-1995               */
#line 1 "testsem.ch"
/*     Tree      Meta     Chopper      developped    by                  */
#line 1 "testsem.ch"
/*                  Eric Lavillonniere                                   */
#line 1 "testsem.ch"
/*                                                                       */
#line 1 "testsem.ch"
/*************************************************************************/
#line 1 "testsem.ch"
#line 1 "testsem.ch"
#include "token.h"
#line 1 "testsem.ch"
extern int _retVal[50];
#line 1 "testsem.ch"
extern PPTREE _storeVal[50],_nextVal;
#line 1 "testsem.ch"
extern PPTREE stackTree[1024];
#line 1 "testsem.ch"
extern int ptStackTree;
#line 1 "testsem.ch"
#define decomp decomp_metachop
#line 1 "testsem.ch"
#line 1 "testsem.ch"
#ifndef for_elem
#line 1 "testsem.ch"
#line 1 "testsem.ch"
#define for_elem _for_elem
#line 1 "testsem.ch"
#endif
#ifdef INCONNU
#line 1 "testsem.ch"
#line 1 "testsem.ch"
PTREE   for_elem ;
#line 1 "testsem.ch"
#line 1 "testsem.ch"
#endif
#include "semaph.h"

#line 5 "testsem.ch"
#line 5 "testsem.ch"
void main ()
#line 5 "testsem.ch"
{
#line 5 "testsem.ch"
#line 7 "testsem.ch"
    HANDLE_SEMAPHORE_POSIX  hSem = SEM_OPEN("mySemaphore");
#line 7 "testsem.ch"
#line 8 "testsem.ch"
    EString message ;
#line 8 "testsem.ch"
#line 10 "testsem.ch"
    MetaInit();
#line 10 "testsem.ch"
#line 11 "testsem.ch"
    DisplayTime("start");
#line 11 "testsem.ch"
#line 14 "testsem.ch"
    SEM_INIT(hSem, 0);
#line 14 "testsem.ch"
#line 16 "testsem.ch"
    int timer ;
#line 16 "testsem.ch"
#line 18 "testsem.ch"
    int ind = 0 ;
#line 18 "testsem.ch"
#line 20 "testsem.ch"
    while ( true ) {
#line 20 "testsem.ch"
#line 21 "testsem.ch"
                        ind = (ind + 1) % 4 ;
#line 21 "testsem.ch"
#line 22 "testsem.ch"
                        switch ( ind ) {
#line 22 "testsem.ch"
#line 23 "testsem.ch"
                            case 0 : 
#line 23 "testsem.ch"
#line 24 "testsem.ch"
                                SEM_POST(hSem, 1);
#line 24 "testsem.ch"
#line 25 "testsem.ch"
                                timer = 200 ;
#line 25 "testsem.ch"
#line 26 "testsem.ch"
                                break ;
#line 26 "testsem.ch"
#line 27 "testsem.ch"
                            case 1 : 
#line 27 "testsem.ch"
#line 28 "testsem.ch"
                                timer = 40 ;
#line 28 "testsem.ch"
#line 29 "testsem.ch"
                                break ;
#line 29 "testsem.ch"
#line 30 "testsem.ch"
                            case 2 : 
#line 30 "testsem.ch"
#line 31 "testsem.ch"
                                SEM_POST(hSem, 1);
#line 31 "testsem.ch"
#line 32 "testsem.ch"
                                timer = 40 ;
#line 32 "testsem.ch"
#line 33 "testsem.ch"
                                break ;
#line 33 "testsem.ch"
#line 34 "testsem.ch"
                            case 3 : 
#line 34 "testsem.ch"
#line 35 "testsem.ch"
                                timer = 200 ;
#line 35 "testsem.ch"
#line 36 "testsem.ch"
                                break ;
#line 36 "testsem.ch"
                        }
#line 36 "testsem.ch"
#line 36 "testsem.ch"
#line 38 "testsem.ch"
                        DisplayTime("====================================================");
#line 38 "testsem.ch"
#line 39 "testsem.ch"
                        if ( WaitForSingleObject(hSem, timer) == WAIT_OBJECT_0 ) {
#line 39 "testsem.ch"
#line 40 "testsem.ch"
message = "found the ressource ";
#line 40 "testsem.ch"
#line 41 "testsem.ch"
DisplayTime(message);
#line 41 "testsem.ch"
#line 42 "testsem.ch"
#line 42 "testsem.ch"
#line 42 "testsem.ch"
                                                                                     } else 
#line 42 "testsem.ch"
                        {
#line 42 "testsem.ch"
#line 43 "testsem.ch"
                            message = "time out ";
#line 43 "testsem.ch"
#line 44 "testsem.ch"
                            DisplayTime(message);
#line 44 "testsem.ch"
#line 45 "testsem.ch"
#line 45 "testsem.ch"
#line 45 "testsem.ch"
                        }
#line 45 "testsem.ch"
#line 46 "testsem.ch"
#if 0
#line 46 "testsem.ch"
#line 47 "testsem.ch"
                        ErlSemaph   *pErlSemaph = new ErlSemaph(&hSem, 20);
#line 47 "testsem.ch"
#line 48 "testsem.ch"
                        if ( pErlSemaph -> Success() ) {
#line 48 "testsem.ch"
#line 49 "testsem.ch"
                                                            message = "found the ressource ";
#line 49 "testsem.ch"
#line 50 "testsem.ch"
                                                            DisplayTime(message);
#line 50 "testsem.ch"
#line 51 "testsem.ch"
#line 51 "testsem.ch"
#line 51 "testsem.ch"
                                                         } else 
#line 51 "testsem.ch"
                        {
#line 51 "testsem.ch"
#line 52 "testsem.ch"
                            message = "time out ";
#line 52 "testsem.ch"
#line 53 "testsem.ch"
                            DisplayTime(message);
#line 53 "testsem.ch"
#line 54 "testsem.ch"
#line 54 "testsem.ch"
#line 54 "testsem.ch"
                        }
#line 54 "testsem.ch"
#endif
#line 54 "testsem.ch"
#line 56 "testsem.ch"
#line 56 "testsem.ch"
#line 56 "testsem.ch"
                    }
#line 56 "testsem.ch"
#line 57 "testsem.ch"
#line 57 "testsem.ch"
#line 57 "testsem.ch"
}
#line 57 "testsem.ch"
/*Well done my boy */ 
#line 57 "testsem.ch"

