#ifndef SEMAPH_FILE
#define SEMAPH_FILE 1
#include "token.h"
#ifndef HANDLE_SEMAPHORE_POSIX
#define HANDLE_SEMAPHORE_POSIX 1
#endif

class ErlSemaph {
    
    public :
    
        // constructor 
        // parameters :
        //              handleSemaphore : handle of semaphore
        //              time to wait
        ErlSemaph (HANDLE_SEMAPHORE_POSIX *handleSemaphore, int time) ;
        
        // destructor
        virtual ~ErlSemaph ()
        {
            DeleteCriticalSection(&pv_hCritical);
            DeleteCriticalSection(&pv_block);
        }
        
        // Success : semaphore moved before timeout
        // return : if succes
        bool    Success () ;
        
        // Handle : handle the return of the threads
        // parameters :
        //              timer : tells if it is a timer which finish
        // return : tells if we have to unlock
        bool    Handle (bool timer) ;
        
        // variables
        int     pv_time ; //  time to be waited for
        
#ifdef HAS_POSIX_CRITICAL
        HANDLE_CRITICAL *pv_hCritical ; // critical section
        HANDLE_CRITICAL *pv_block ;     // wait for end
#endif
        
        int                     pvNbThread ;    // number of thread
        bool                    pvSuccess ;     // tells if success
        bool                    pvLocked ;      // tells if lock 
        HANDLE_SEMAPHORE_POSIX  *pvpSemaphore ; // pointer on sempahore
    
    private :
    
        ErlSemaph ( const ErlSemaph & ) {}
};
#endif
