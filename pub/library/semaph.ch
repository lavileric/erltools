language metachop;

#include "semaph.h"

// #define DEBUG_DISPLAY 1
// thread to get messages
#if HAS_POSIX
    static  DWORD WINAPI WaitForTime ( LPVOID pParam )
    {
        ErlSemaph   *pSemaph = (ErlSemaph *)pParam ;
        int         remainingTime = pSemaph->pv_time ;
        
        HANDLE_SEMAPHORE_POSIX & hSem =  *pSemaph->pvpSemaphore ;
#       ifdef DEBUG_DISPLAY
            {
                EString message = "Wait for time val  ";
                message += CompactItoa(hSem);
                message += " ";
                message += CompactItoa(semctl(hSem, 0, GETVAL, 0));
                DisplayTime(message);
            }
#       endif
        
        // wait until time is elapsed
        while ( true ) {
#           ifdef DEBUG_DISPLAY
                EString message = "waiting ";
                message += CompactItoa(remainingTime);
                DisplayTime(message);
#           endif
            
            // if we have allready succeeded stop
            if ( pSemaph->pvNbThread < 3 ) 
                break ;
            
            // wait a little more
            if ( remainingTime > 100 ) {
                remainingTime -= 100 ;
                MSLEEP(100);
            } else if ( remainingTime > 0 ) {
                MSLEEP(remainingTime);
                remainingTime =  0 ;
            } else 
                break ;
        }
#       ifdef DEBUG_DISPLAY
            DisplayTime("out of timer waiting");
#       endif
        
        // handle exit
        if ( pSemaph->Handle(true) ) {
            SEM_POST(hSem, 1, false);
#           ifdef DEBUG_DISPLAY
                {
                    EString message = "release semaphore WaitForTime ";
                    message += CompactItoa(hSem);
                    message += " ";
                    message += CompactItoa(semctl(hSem, 0, GETVAL, 0));
                    DisplayTime(message);
                }
#           endif
            MSLEEP(100);
        }
        
        // return
        return 0 ;
    }
    
    static  DWORD WINAPI WaitForSemaphore ( LPVOID pParam )
    {
        ErlSemaph   *pSemaph = (ErlSemaph *)pParam ;
        
#       ifdef DEBUG_DISPLAY
            DisplayTime("start of wait for semaphore");
#       endif
        
        // put lock
        EnterCriticalSection(&pSemaph->pv_block);
        pSemaph->pvLocked             =  true ;
        HANDLE_SEMAPHORE_POSIX & hSem =  *pSemaph->pvpSemaphore ;
#       ifdef DEBUG_DISPLAY
            {
                EString message = "Locked now with ";
                message += CompactItoa(hSem);
                DisplayTime(message);
                {
                    EString message = "WaitSemaphore val -> ";
                    message += CompactItoa(hSem);
                    message += " ";
                    message += CompactItoa(semctl(hSem, 0, GETVAL, 0));
                    DisplayTime(message);
                }
            }
#       endif
        
        // wait for semaphore
        SEM_POST(hSem, -1, false);
#       ifdef DEBUG_DISPLAY
            DisplayTime("out of semaphore waiting");
#       endif
        pSemaph->Handle(false);
        
        // unlock
        LeaveCriticalSection(&pSemaph->pv_block);
        
        // return 
        return 0 ;
    }
    
#endif

// constructor 
// parameters :
//              handleSemaphore : handle of semaphore
//              time to wait
ErlSemaph::ErlSemaph ( HANDLE_SEMAPHORE_POSIX *handleSemaphore, int time )
    : pvNbThread(0),  pvSuccess(false),  pvLocked(false)
{
#   if HAS_POSIX
        
        // store variables
        pv_time                         =  time ;
        pvpSemaphore                    =  handleSemaphore ;
        HANDLE_SEMAPHORE_POSIX & semaph =  *pvpSemaphore ;
#       ifdef DEBUG_DISPLAY
            
            EString message ;
            
            {
                message =  "Constructor val -> ";
                message += CompactItoa(semaph);
                message += " ";
                message += CompactItoa(semctl(semaph, 0, GETVAL, 0));
                DisplayTime(message);
            }
#       endif
        
        // initialize critical section
        InitializeCriticalSection(&pv_hCritical);
        InitializeCriticalSection(&pv_block);
        
        // look if value is not allready here
        if ( semctl(semaph, 0, GETVAL, 0) >= 1 ) {
            pvSuccess =  true ;
            SEM_POST(semaph, -1, false);
            pvNbThread =  1 ;
            return ;
        }
        
        // tells that the threads will start
        pvNbThread =  3 ;
        
        // start the threads 
        pthread_t   reader ;
        
        pthread_create(&reader, /* pthread_attr_default*/ 0, (LPTHREAD_START_ROUTINE)WaitForTime, (LPVOID)this);
        pthread_detach(reader);
        pthread_create(&reader, /* pthread_attr_default*/ 0, (LPTHREAD_START_ROUTINE)WaitForSemaphore, (LPVOID)this);
        pthread_detach(reader);
#   endif
}

// Success : semaphore moved before timeout
// return : if succes
bool ErlSemaph::Success ()
{
#   if HAS_POSIX
        
        bool    destroy ; // tells if we have to destroy
        bool    result ;  // result of funct
        
#       ifdef DEBUG_DISPLAY
            DisplayTime("Enter Success");
#       endif
        
        // if allready there return 
        if ( pvSuccess ) {
            destroy =  !--pvNbThread ;
            if ( destroy ) 
                delete this ;
            return true ;
        }
        
        // wait until the gate is close
        while ( !pvLocked ) 
            usleep(100);
#       ifdef DEBUG_DISPLAY
            DisplayTime("Success locked");
#       endif
        
        // wait until finished
        EnterCriticalSection(&pv_block);
#       ifdef DEBUG_DISPLAY
            DisplayTime("Success unlocked");
#       endif
        
        // enter critical section
        EnterCriticalSection(&pv_hCritical);
        
        // look if we have to destroy and result
        destroy =  !--pvNbThread ;
        result  =  pvSuccess ;
        
        // leave critical section
        LeaveCriticalSection(&pv_hCritical);
        LeaveCriticalSection(&pv_block);
        if ( destroy ) 
            delete this ;
#       ifdef DEBUG_DISPLAY
            if ( result ) 
                DisplayTime("Leave Success with success");
            else 
                DisplayTime("Leave Success without success");
#       endif
        return result ;
#   endif
    return false ;
}

// Handle : handle the return of the threads
// parameters :
//              timer : tells if it is a timer which finish
// return : tells if have to increment semaphore
bool ErlSemaph::Handle ( bool timer )
{
    bool    setSemaphore = false ; // tells if we have to set semaphore
    
#   if HAS_POSIX
        {
            bool    destroy ; // tells if we have to destroy
#           ifdef DEBUG_DISPLAY
                DisplayTime("in handle ");
#           endif
            
            // enter critical section
            EnterCriticalSection(&pv_hCritical);
#           ifdef DEBUG_DISPLAY
                DisplayTime("critical section entered ");
#           endif
            
            // treatement timer or not
            if ( timer ) {
                
                // if first to get there
                if ( pvNbThread >= 3 ) {
#                   ifdef DEBUG_DISPLAY
                        EString message("release semaphore handle");
                        DisplayTime(message);
#                   endif
                    
                    // stop other thread and keep semaphore count
                    setSemaphore =  true ;
                }
            } else if ( pvNbThread >= 3 ) {
                pvSuccess =  true ;
            }
            
            // look if will have to destroy
            destroy =  !--pvNbThread ;
            
            // leave critical section
            LeaveCriticalSection(&pv_hCritical);
#           ifdef DEBUG_DISPLAY
                if ( destroy ) {
                    DisplayTime("Leave handle with destroy");
                    delete this ;
                } else {
                    DisplayTime("Leave handle without destroy");
                }
#           else 
                if ( destroy ) 
                    delete this ;
#           endif
        }
#   endif
    return setSemaphore ;
}


