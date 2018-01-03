#include "ethread.h"

#ifdef __cplusplus
namespace ERLTOOLS {

    // CloseThread : close thread
    // parameters :
    //              nbThread : thread number
    void CloseThread ( int nbThread )
    {
        if ( nbThread ) {
#ifdef ON_W
            CloseHandle((HANDLE)nbThread);
#endif
        }
    }
    
    // ExitThread : exit current thread
    // parameters
    //              pParam : ret param
    void ExitThread ( void *pParam )
    {
#ifdef ON_W
        if ( pParam ) 
            ::ExitThread((DWORD)(*(int *)pParam));
        else 
            ::ExitThread(0);
#else 
        pthread_exit(pParam);
#endif
    }
}

#endif
