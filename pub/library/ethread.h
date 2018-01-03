#ifndef ETOOLS_THREAD_FILE
#define ETOOLS_THREAD_FILE 1
#ifdef __cplusplus
#include "token.h"
#include "smtoken.h"

namespace ERLTOOLS {

#ifndef ON_W
// IntCreateThread : create a thread
// parameters :
//              pThreadFunct : the funct to be called 
//              pParam : pointer on thread param a function such as "DWORD WINAPI FooFunction ( LPVOID pParam )"
//              stackSize : on solaris size of stack
template <typename RETURN_TYPE,typename ARGS_TYPE> 
    inline pthread_t TCreateThread ( RETURN_TYPE(*pThreadFunct)(ARGS_TYPE), ARGS_TYPE pParam, unsigned int stackSize = 0, int prio = NO_PRIO
        , bool detach = false )
    {
	pthread_t nbThread = 0 ;
        
        // if stackSize is null default value
        if ( !stackSize ) 
            stackSize = 1024 * 1024 ;
        
        // create thread
#if defined(HAS_POSIX) || defined(ON_W)
        {
	    nbThread = TECREATE_THREAD<RETURN_TYPE, ARGS_TYPE> (stackSize, prio, pThreadFunct, pParam);
            if ( detach ) {
                pthread_detach((pthread_t)nbThread);
            }
        }
#endif
	return nbThread ;
    }
#endif
#endif

inline pthread_t CreateThread ( LPTHREAD_START_ROUTINE pThreadFunct, LPVOID pParam, unsigned int stackSize = 0, int prio = NO_PRIO, bool detach = false )
{
    int nbThread = 0 ;
    
#ifdef ON_W
    {
        DWORD               ident ;    // ident 
        SECURITY_ATTRIBUTES security ; // security
        security.nLength = sizeof(SECURITY_ATTRIBUTES);
        security.lpSecurityDescriptor = 0 ;
        security.bInheritHandle = true ;
        {
            DWORD               ident ;    // ident 
            SECURITY_ATTRIBUTES security ; // security
            security.nLength = sizeof(SECURITY_ATTRIBUTES);
            security.lpSecurityDescriptor = 0 ;
            security.bInheritHandle = true ;
            /*hThread = */
            nbThread = (int)::CreateThread(&security, 0, pThreadFunct, pParam, (unsigned long)0, &ident);
        }
        return nbThread ;
    }
#else 
    return TCreateThread<void *, void *> (pThreadFunct, pParam, stackSize, prio, detach);
#endif
}

// CloseThread : close thread
// parameters :
//              nbThread : thread number
void    CloseThread (int nbThread) ;

// ExitThread : exit current thread
// parameters
//              pParam : ret param
void    ExitThread (void *pParam) ;

// ThreadNumber : return the thread number 
inline int ThreadNumber ()
{
#ifdef ON_W
    return GetCurrentProcessId();
#else 
    return pthread_self();
#endif
}

}

#endif
