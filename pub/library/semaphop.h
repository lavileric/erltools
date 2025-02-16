/// 
/// @file semaphop.h
/// 
/// @brief semaphop.h
/// 
/*! 
   \file semaphop.h
   \brief Critical section and sempahore library
   \author P. MOREL (Dassault Data Services)
   \ COPYRIGHT (C) 2002 MITSUBISHI ELECTRIC CORPORATION 
   \version 1.0
   $Revision: 6.2 $
   \date 09/2002
   */
/*
   This program is free software; you can redistribute it and/or modify
   it under the terms of the GNU General Public License*/
/* as published by
   the Free Software Foundation; either version 1, or (at your option)
   any later version.
   
   This program i*/
/*s distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTAB*/
/*ILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.
   
   You should have receive*/
/*d a copy of the GNU General Public License
   along with this program; see the file COPYING. If not, write to
   the Free Softwar*/
/*e
   Foundation, Inc., 675 Mass Ave, Cambridge, MA 02139, USA.
   
   */
#ifndef SEMPAHOP_HEADER
    /// 
    /// @def  SEMPAHOP_HEADER
    /// 
    /// @brief  SEMPAHOP_HEADER
    /// 
#   define SEMPAHOP_HEADER 
#   include "smtoken.h"
    /// 
    /// @def  NB_PRIORITY
    /// 
    /// @brief  NB_PRIORITY
    /// 
#   define NB_PRIORITY 32
#   if defined(HAS_POSIX_CRITICAL)
        
        /// 
        /// @typedef  HANDLE_CRITICAL
        /// 
        /// @brief  HANDLE_CRITICAL
        /// 
        typedef struct {
            pthread_mutex_t mutex ;
            int             checker ;
        }   HANDLE_CRITICAL ;
        
        /// 
        /// @def  HANDLE_MARKER
        /// 
        /// @brief  HANDLE_MARKER
        /// 
#       define HANDLE_MARKER 31415927
        /// 
        /// @def  SEMAPHOP_ON
        /// 
        /// @brief  SEMAPHOP_ON
        /// 
#       define SEMAPHOP_ON (314159 + 62)
        /// 
        /// @def  CRITICAL_SECTION
        /// 
        /// @brief  CRITICAL_SECTION
        /// 
        // #       define HANDLE_CRITICAL pthread_mutex_t   
#       define CRITICAL_SECTION HANDLE_CRITICAL *
        /// 
        /// @def  COND_VARIABLE
        /// 
        /// @brief  COND_VARIABLE
        /// 
#       define COND_VARIABLE pthread_cond_t
#       include <pthread.h>
#       include <sys/time.h>
        
        inline void CrazyWakeUp ( void )
        {
#           if defined(ON_W)
                SwitchToThread();
#           else 
                sched_yield();
#           endif
        }
        
        /// 
        /// @fn void    InitializeCriticalSection (HANDLE_CRITICAL **handle) 
        /// 
        /// @brief InitializeCriticalSection
        /// 
        /// @param [in,out] handle 
        /// 
        inline void InitializeCriticalSection ( HANDLE_CRITICAL **handle )
        {
            if ( handle ) {
                *handle              =  new HANDLE_CRITICAL ;
                (*handle) -> checker =  0 ;
                int ret = pthread_mutex_init(&(*handle) -> mutex, 0);
                if ( ret ) {
                    fprintf(stderr, "Error in InitializeCriticalSection : %d, in %s, line %d\n", ret, __FILE__, __LINE__);
                } else 
                    (*handle) -> checker =  HANDLE_MARKER ;
            }
        }
        
        /// 
        /// @fn void    EnterCriticalSection (HANDLE_CRITICAL **handle) 
        /// 
        /// @brief EnterCriticalSection
        /// 
        /// @param [in,out] handle 
        /// 
        inline void EnterCriticalSection ( HANDLE_CRITICAL **handle )
        {
            if ( handle && *handle ) {
                if ( (*handle) -> checker != HANDLE_MARKER ) 
                    MetaExit(0, "invalide mutex");
                int ret = pthread_mutex_lock(&(*handle) -> mutex);
                if ( ret ) {
                    fprintf(stderr, "Error in EnterCriticalSection : %d, in %s, line %d\n", ret, __FILE__, __LINE__);
                }
            }
        }
        
        /// 
        /// @fn void    LeaveCriticalSection (HANDLE_CRITICAL **handle) 
        /// 
        /// @brief LeaveCriticalSection
        /// 
        /// @param [in,out] handle 
        /// 
        inline void LeaveCriticalSection ( HANDLE_CRITICAL **handle )
        {
            if ( handle && *handle ) {
                if ( (*handle) -> checker != HANDLE_MARKER ) 
                    MetaExit(0, "invalide mutex");
                int ret = pthread_mutex_unlock(&(*handle) -> mutex);
                if ( ret ) {
                    fprintf(stderr, "Error in LeaveCriticalSection : %d, in %s, line %d\n", ret, __FILE__, __LINE__);
                }
            }
        }
        
        /// 
        /// @fn void    DeleteCriticalSection (HANDLE_CRITICAL **handle) 
        /// 
        /// @brief DeleteCriticalSection
        /// 
        /// @param [in,out] handle 
        /// 
        inline void DeleteCriticalSection ( HANDLE_CRITICAL **handle )
        {
            if ( handle && *handle ) {
                if ( (*handle) -> checker != HANDLE_MARKER ) 
                    MetaExit(0, "invalide mutex");
                int errCode = pthread_mutex_destroy(&(*handle) -> mutex);
                if ( errCode != 0 ) {
                    fprintf(stderr, "Error in DeleteCriticalSection : %d, in %s, line %d\n", errCode, __FILE__, __LINE__);
                }
                delete *handle ;
                *handle =  0 ;
            }
        }
        
        /// 
        /// @fn int InitCondition (COND_VARIABLE *pCond) 
        /// 
        /// @brief InitCondition
        /// 
        /// @param [in,out] pCond 
        /// 
        /// @returns  int
        /// 
        inline int InitCondition ( COND_VARIABLE *pCond )
        {
            pthread_cond_init(pCond, 0);
            return 0 ;
        }
        
        /// 
        /// @fn int WakeUpOnCondition (COND_VARIABLE *pCond) 
        /// 
        /// @brief WakeUpOnCondition
        /// 
        /// @param [in,out] pCond 
        /// 
        /// @returns  int
        /// 
        inline int WakeUpOnCondition ( COND_VARIABLE *pCond )
        {
            pthread_cond_signal(pCond);
            return 0 ;
        }
        
        /// 
        /// @fn int WakeUpOnConditionTime (COND_VARIABLE *pCond) 
        /// 
        /// @brief WakeUpOnConditionTime
        /// 
        /// @param [in,out] pCond 
        /// 
        /// @returns  int
        /// 
        inline int WakeUpOnConditionTime ( COND_VARIABLE *pCond )
        {
            pthread_cond_signal(pCond);
            return 0 ;
        }
        
        /// 
        /// @fn int SleepUntilCondition (COND_VARIABLE *pCond, CRITICAL_SECTION *sC, struct timespec *pTime = 0) 
        /// 
        /// @brief SleepUntilCondition
        /// 
        /// @param [in,out] pCond 
        /// @param [in,out] sC    
        /// @param [in,out] pTime 
        /// 
        /// @returns  int
        /// 
        inline int SleepUntilCondition ( COND_VARIABLE *pCond, CRITICAL_SECTION *sC, struct timespec *pTime = 0 )
        {
            int result = 0 ;
            
            if ( pTime ) 
                result =  pthread_cond_timedwait(pCond, &(*sC) -> mutex, pTime);
            else 
                pthread_cond_wait(pCond, &(*sC) -> mutex);
            return result ;
        }
        
        /// 
        /// @fn int DeleteCondition (COND_VARIABLE *pCond) 
        /// 
        /// @brief DeleteCondition
        /// 
        /// @param [in,out] pCond 
        /// 
        /// @returns  int
        /// 
        inline int DeleteCondition ( COND_VARIABLE *pCond )
        {
            if ( pCond ) {
                pthread_cond_destroy(pCond);
            }
            return 0 ;
        }
        #define SEC_AS_MICRO 1000000
        /// 
        /// @fn struct timespec *SetTimeOffset (struct timeval &tval, struct timespec &sTime) 
        /// 
        /// @brief SetTimeOffset
        /// 
        /// @param [in,out] tval  
        /// @param [in,out] sTime 
        /// 
        /// @returns  struct timespec
        /// 
        inline struct timespec *SetTimeOffset ( struct timeval &tval, struct timespec &sTime )
        {
            struct timespec *pTime = 0 ;
            
            if ( tval.tv_sec != 0 || tval.tv_usec != 0 ) {
                if ( tval.tv_usec > SEC_AS_MICRO ) {
                    tval.tv_sec  += tval.tv_usec / SEC_AS_MICRO ;
                    tval.tv_usec =  tval.tv_usec % SEC_AS_MICRO ;
                }
#               if defined(REPLACE_FTIME)
                    {
                        struct timeval tstruct ;
                        gettimeofday(&tstruct, (struct timezone *)NULL);
                        long long   sig = tstruct.tv_usec + tval.tv_usec ;
                        long long   ssig = 0 ;
                        long long   nsig = sig ;
                        if ( sig > SEC_AS_MICRO ) {
                            ssig =  sig / SEC_AS_MICRO ;
                            nsig =  sig % SEC_AS_MICRO ;
                        }
                        sTime.tv_sec  =  tstruct.tv_sec + tval.tv_sec + ssig ;
                        sTime.tv_nsec =  nsig * 1000 ;
                    }
#               elif defined(UNDERSCORE_FTIME)
                    {
                        struct _timeb tstruct ;
                        _ftime(&tstruct);
                        long long   sig = tstruct.millitm * 1000 + tval.tv_usec ;
                        long long   ssig = 0 ;
                        long long   nsig = sig ;
                        if ( sig > SEC_AS_MICRO ) {
                            ssig =  sig / SEC_AS_MICRO ;
                            nsig =  sig % SEC_AS_MICRO ;
                        }
                        sTime.tv_sec  =  tstruct.time + tval.tv_sec + ssig ;
                        sTime.tv_nsec =  nsig * 1000 ;
                    }
#               else 
                    {
                        struct timeb tstruct ;
                        ::ftime(&tstruct);
                        long long   sig = tstruct.millitm * 1000 + tval.tv_usec ;
                        long long   ssig = 0 ;
                        long long   nsig = sig ;
                        if ( sig > SEC_AS_MICRO ) {
                            ssig =  sig / SEC_AS_MICRO ;
                            nsig =  sig % SEC_AS_MICRO ;
                        }
                        sTime.tv_sec  =  tstruct.time + tval.tv_sec + ssig ;
                        sTime.tv_nsec =  nsig * 1000 ;
                    }
#               endif
                pTime =  &sTime ;
            }
            return pTime ;
        }
#   elif defined(ON_W)
        /// 
        /// @def  WaitForSingleObjectU
        /// 
        /// @brief  WaitForSingleObjectU
        /// 
#       define WaitForSingleObjectU WaitForSingleObject
        /// 
        /// @def  ReleaseSemaphoreU
        /// 
        /// @brief  ReleaseSemaphoreU
        /// 
#       define ReleaseSemaphoreU ReleaseSemaphore
        
        /// 
        /// @typedef  MutexVariable
        /// 
        /// @brief  MutexVariable
        /// 
        typedef HANDLE  MutexVariable ;
        
        /// 
        /// @typedef  EventVariable
        /// 
        /// @brief  EventVariable
        /// 
        typedef HANDLE  EventVariable ;
        /// 
        /// @def  timespec
        /// 
        /// @brief  timespec
        /// 
#       define timespec timeval
        
        /// 
        /// @fn DWORD   ESignal (HANDLE h1, HANDLE h2, DWORD milli) 
        /// 
        /// @brief ESignal
        /// 
        /// @param [in,out] h1    
        /// @param [in,out] h2    
        /// @param [in,out] milli 
        /// 
        /// @returns  DWORD
        /// 
        DWORD   ESignal (HANDLE h1, HANDLE h2, DWORD milli) ;
        
        inline void CrazyWakeUp ( void ) {}
        
        /// 
        /// @fn void    InitializeCriticalSection (MutexVariable *pMutex) 
        /// 
        /// @brief InitializeCriticalSection
        /// 
        /// @param [in,out] pMutex 
        /// 
        inline void InitializeCriticalSection ( MutexVariable *pMutex )
        {
            
            DWORD               ident ;    // ident 
            SECURITY_ATTRIBUTES security ; // security
            
            security.nLength              =  sizeof(SECURITY_ATTRIBUTES);
            security.lpSecurityDescriptor =  0 ;
            security.bInheritHandle       =  true ;
            *pMutex                       =  CreateMutex(&security, false, 0);
            if ( !*pMutex ) {
                fprintf(stderr, "Error in InitializeCriticalSection : %d, in %s, line %d\n", (int)*pMutex, __FILE__, __LINE__);
            }
        }
        
        /// 
        /// @fn void    EnterCriticalSection (MutexVariable *pMutex) 
        /// 
        /// @brief EnterCriticalSection
        /// 
        /// @param [in,out] pMutex 
        /// 
        inline void EnterCriticalSection ( MutexVariable *pMutex )
        {
            DWORD   ret = WaitForSingleObject(*pMutex, INFINITE);
            
            if ( ret != WAIT_OBJECT_0 ) {
                fprintf(stderr, "Error in EnterCriticalSection : %d, in %s, line %d\n", (int)ret, __FILE__, __LINE__);
            }
        }
        
        /// 
        /// @fn void    LeaveCriticalSection (MutexVariable *pMutex) 
        /// 
        /// @brief LeaveCriticalSection
        /// 
        /// @param [in,out] pMutex 
        /// 
        inline void LeaveCriticalSection ( MutexVariable *pMutex )
        {
            bool    ret = ReleaseMutex(*pMutex);
            
            if ( !ret ) {
                fprintf(stderr, "Error in LeaveCriticalSection : %d, in %s, line %d\n", ret, __FILE__, __LINE__);
            }
        }
        
        /// 
        /// @fn void    DeleteCriticalSection (MutexVariable *pMutex) 
        /// 
        /// @brief DeleteCriticalSection
        /// 
        /// @param [in,out] pMutex 
        /// 
        inline void DeleteCriticalSection ( MutexVariable *pMutex )
        {
            if ( *pMutex ) {
                CloseHandle(*pMutex);
                *pMutex =  0 ;
            }
        }
        
        /// 
        /// @fn int InitCondition (EventVariable *pEvent) 
        /// 
        /// @brief InitCondition
        /// 
        /// @param [in,out] pEvent 
        /// 
        /// @returns  int
        /// 
        inline int InitCondition ( EventVariable *pEvent )
        {
            
            DWORD               ident ;    // ident 
            SECURITY_ATTRIBUTES security ; // security
            
            security.nLength              =  sizeof(SECURITY_ATTRIBUTES);
            security.lpSecurityDescriptor =  0 ;
            security.bInheritHandle       =  true ;
            *pEvent                       =  CreateEvent(&security, true, false, 0);
            if ( !*pEvent ) {
                fprintf(stderr, "Error in InitializeCriticalSection : %d, in %s, line %d\n", (int)*pEvent, __FILE__, __LINE__);
            }
            return 0 ;
        }
        
        /// 
        /// @fn int WakeUpOnCondition (EventVariable *pEvent) 
        /// 
        /// @brief WakeUpOnCondition
        /// 
        /// @param [in,out] pEvent 
        /// 
        /// @returns  int
        /// 
        inline int WakeUpOnCondition ( EventVariable *pEvent )
        {
            int ret = PulseEvent(*pEvent);
            
            return 0 ;
        }
        
        /// 
        /// @fn int WakeUpOnConditionTime (EventVariable *pEvent) 
        /// 
        /// @brief WakeUpOnConditionTime
        /// 
        /// @param [in,out] pEvent 
        /// 
        /// @returns  int
        /// 
        inline int WakeUpOnConditionTime ( EventVariable *pEvent )
        {
            int ret = PulseEvent(*pEvent);
            
            return 0 ;
        }
        
        /// 
        /// @fn int SleepUntilCondition (EventVariable *pCond, MutexVariable *pSc, struct timespec *pTime = 0) 
        /// 
        /// @brief SleepUntilCondition
        /// 
        /// @param [in,out] pCond 
        /// @param [in,out] pSc   
        /// @param [in,out] pTime 
        /// 
        /// @returns  int
        /// 
        inline int SleepUntilCondition ( EventVariable *pCond, MutexVariable *pSc, struct timespec *pTime = 0 )
        {
            int result = 0 ;
            
            if ( pTime ) 
                result =  ESignal(*pSc, *pCond, pTime -> tv_sec * 1000 + pTime -> tv_usec / 1000) != WAIT_OBJECT_0 ? 1 : 0 ;
            else 
                result =  ESignal(*pSc, *pCond, INFINITE);
            EnterCriticalSection(pSc);
            return result ;
        }
        
        /// 
        /// @fn int DeleteCondition (EventVariable *pEvent) 
        /// 
        /// @brief DeleteCondition
        /// 
        /// @param [in,out] pEvent 
        /// 
        /// @returns  int
        /// 
        inline int DeleteCondition ( EventVariable *pEvent )
        {
            int ret = CloseHandle(*pEvent);
            
            return 0 ;
        }
        
        /// 
        /// @fn struct timespec *SetTimeOffset (struct timeval &tval, struct timespec &sTime) 
        /// 
        /// @brief SetTimeOffset
        /// 
        /// @param [in,out] tval  
        /// @param [in,out] sTime 
        /// 
        /// @returns  struct timespec
        /// 
        inline struct timespec *SetTimeOffset ( struct timeval &tval, struct timespec &sTime )
        {
            struct timespec *pTime = 0 ;
            
            if ( tval.tv_sec != 0 || tval.tv_usec != 0 ) {
                sTime.tv_sec  =  tval.tv_sec ;
                sTime.tv_usec =  tval.tv_usec ;
                pTime         =  &sTime ;
            }
            return pTime ;
        }
#   endif
    
    /// 
    /// @class  Semaphop
    /// 
    /// @brief  Semaphop
    /// 
    /*!
       \class Semaphop
       \brief management of a stock of nuts (message)
       \author P.MOREL
       */
    
    class Semaphop {
        
        public :
        
            /// 
            /// @fn Semaphop::Semaphop () 
            /// 
            /// @brief Semaphop
            /// 
            Semaphop ()
                : nbMaxRessource(0),  tooMuchRessources(0),  noRessourcesLeft(0),  nbMaxCurrent(0),  pvOn(SEMAPHOP_ON),  usedRessources(0)
            {
                InitializeCriticalSection(&ressourceSC);
                ReInit();
                tval.tv_sec =  tval.tv_usec = 0 ;
                memset((char *)pvTabPriority, 0, NB_PRIORITY * sizeof(unsigned int));
            }
            
            /// 
            /// @fn Semaphop::Semaphop (unsigned int initRessource) 
            /// 
            /// @brief Semaphop
            /// 
            /// @param [in] initRessource 
            /// 
            Semaphop ( unsigned int initRessource )
                : nbMaxRessource(initRessource),  tooMuchRessources(0),  noRessourcesLeft(0),  nbMaxCurrent(0),  pvOn(SEMAPHOP_ON),  usedRessources(0)
            {
                InitializeCriticalSection(&ressourceSC);
                ReInit();
                tval.tv_sec =  tval.tv_usec = 0 ;
                memset((char *)pvTabPriority, 0, NB_PRIORITY * sizeof(unsigned int));
            }
            
            /// 
            /// @fn virtual Semaphop::~Semaphop () 
            /// 
            /// @brief Semaphop
            /// 
            virtual ~Semaphop ()
            {
                DeleteCriticalSection(&ressourceSC);
                DeleteCondition(&condGetRessource);
                DeleteCondition(&condPutRessource);
            }
            
            /// 
            /// @fn void    Semaphop::CreateLimitedRessourceStock (int iNbMax) 
            /// 
            /// @brief CreateLimitedRessourceStock
            /// 
            /// @param [in] iNbMax 
            /// 
            void CreateLimitedRessourceStock ( int iNbMax )
            {
                nbMaxRessource =  iNbMax ;
                usedRessources =  0 ;
            }
            
            /// 
            /// @fn void    Semaphop::ReInit () 
            /// 
            /// @brief ReInit
            /// 
            void ReInit ()
            {
                InitCondition(&condGetRessource);
                InitCondition(&condPutRessource);
                usedRessources =  0 ;
            }
            
            /// 
            /// @fn void    Semaphop::PutRessourceBegin (unsigned int nbRessource = 1, bool withTimeVal = false) 
            /// 
            /// @brief PutRessourceBegin
            /// 
            /// @param [in] nbRessource 
            /// @param [in] withTimeVal 
            /// 
            /*!
               \brief method to be called before sending a message
               */
            void PutRessourceBegin ( unsigned int nbRessource = 1, bool withTimeVal = false )
            {
                int timedOut = 0 ;
                int index ;
                
                if ( !On() ) 
                    return ;
                
                // say "hello mister ressource ..."
                EnterCriticalSection(&ressourceSC);
                while ( nbMaxRessource > 0 && usedRessources + nbRessource > nbMaxRessource ) {
                    
                    // wanna stock nut?
                    struct timespec *pTime = 0 ;
                    struct timespec sTime ;
                    
                    // set time limit
                    if ( withTimeVal ) 
                        pTime =  SetTimeOffset(tval, sTime);
                    else {
                        struct timeval tval ;
                        tval.tv_sec  =  1 ;
                        tval.tv_usec =  0 ;
                        pTime        =  SetTimeOffset(tval, sTime);
                    }
                    
                    // wait do not get out if more important guy
                    timedOut =  SleepUntilCondition(&condPutRessource, &ressourceSC, pTime);
                    if ( timedOut && withTimeVal ) 
                        break ;
                }
                
                // take this nut for winter
                if ( nbMaxRessource <= 0 || usedRessources + nbRessource <= nbMaxRessource ) {
                    usedRessources += nbRessource ;
#                   if 0
                        fprintf(stdout, "%d\n", usedRessources);
                        if ( usedRessources != 1 ) {
                            int i = 1 ;
                        }
#                   endif
                    if ( nbMaxRessource > 0 && usedRessources > nbMaxRessource ) {
                        PrintRessourceStockInformation();
                        fprintf(stderr, "error in %s, line %d\n", __FILE__, __LINE__);
                        exit(1);
                    }
                }
                
                // update stock info
                UpdateRessourceStockInformation();
            }
            
            /// 
            /// @fn void    Semaphop::PutRessourceEnd (int nbRessources = 0) 
            /// 
            /// @brief PutRessourceEnd
            /// 
            /// @param [in] nbRessources 
            /// 
            /*!
               \brief method to be called after sending a message
               */
            void PutRessourceEnd ( int nbRessources = 0 )
            {
                if ( !On() ) 
                    return ;
                
                // take into account ressource adjustment
                if ( nbRessources ) 
                    usedRessources += nbRessources ;
                
                // still some place for stock ?
                if ( nbMaxRessource > 0 && usedRessources >= nbMaxRessource ) {
                    tooMuchRessources++ ;
                }
                
                // 
                WakeUpOnCondition(&condPutRessource);
                
                // just one nut, one whisky and one beer
                WakeUpOnCondition(&condGetRessource);
                
                // say "good bye mister squirrel"
                LeaveCriticalSection(&ressourceSC);
            }
            
            /// 
            /// @fn void    Semaphop::FreeRessource (unsigned int nbRessource = 1, bool withTimeVal = false) 
            /// 
            /// @brief FreeRessource
            /// 
            /// @param [in] nbRessource 
            /// @param [in] withTimeVal 
            /// 
            /*!
               \brief method to be called for freeing ressource
               */
            void FreeRessource ( unsigned int nbRessource = 1, bool withTimeVal = false )
            {
                PutRessourceBegin(nbRessource, withTimeVal);
                PutRessourceEnd();
            }
            
            /// 
            /// @fn void    Semaphop::PutRessource (unsigned int nbRessource = 1, bool withTimeVal = false) 
            /// 
            /// @brief PutRessource
            /// 
            /// @param [in] nbRessource 
            /// @param [in] withTimeVal 
            /// 
            void PutRessource ( unsigned int nbRessource = 1, bool withTimeVal = false )
            {
                FreeRessource(nbRessource, withTimeVal);
            }
            
            /// 
            /// @fn bool    Semaphop::GetRessourceBegin (unsigned int nbRessource = 1, bool withTimeVal = false, unsigned int priority = 1) 
            /// 
            /// @brief GetRessourceBegin
            /// 
            /// @param [in] nbRessource 
            /// @param [in] withTimeVal 
            /// @param [in] priority    
            /// 
            /// @returns  bool
            /// 
            /*!
               \brief method to be called before receiving a message
               */
            bool GetRessourceBegin ( unsigned int nbRessource = 1, bool withTimeVal = false, unsigned int priority = 1 )
            {
                int     timedOut = 0 ;
                bool    result = true ;
                
                if ( !On() ) 
                    return false ;
                
                // say "hello mister squirrel"
                EnterCriticalSection(&ressourceSC);
                
                unsigned int    index ;
                
                if ( priority != 1 && priority < NB_PRIORITY ) 
                    for ( index = 2 ; index <= priority ; index++ ) 
                        pvTabPriority [index]++ ;
                while ( usedRessources < nbRessource || priority < NB_PRIORITY-1 && pvTabPriority [priority + 1] ) {
                    
                    // wanna stock nut?
                    struct timespec *pTime = 0 ;
                    struct timespec sTime ;
                    
                    // set time limit
                    if ( withTimeVal ) 
                        pTime =  SetTimeOffset(tval, sTime);
                    else {
                        struct timeval tval ;
                        tval.tv_sec  =  1 ;
                        tval.tv_usec =  0 ;
                        pTime        =  SetTimeOffset(tval, sTime);
                    }
                    
                    // want some nut ?
                    do {
                        timedOut =  SleepUntilCondition(&condGetRessource, &ressourceSC, pTime);
                        if ( timedOut && withTimeVal ) 
                            break ;
                    } while ( priority < NB_PRIORITY-1 && pvTabPriority [priority + 1] );
                    if ( timedOut && withTimeVal ) 
                        break ;
                }
                if ( priority != 1 && priority < NB_PRIORITY ) 
                    for ( index = 2 ; index <= priority ; index++ ) 
                        pvTabPriority [index]-- ;
                
                // if there is no more nut ... a problem occurs
                if ( usedRessources >= nbRessource ) {
                    if ( usedRessources <= 0 && nbRessource > 0 ) {
                        PrintRessourceStockInformation();
                        fprintf(stderr, "error in %s, line %d\n", __FILE__, __LINE__);
                        exit(1);
                    }
                    
                    // hey mister quirrel, you're talking to me, give me a nut !!!
                    usedRessources -= nbRessource ;
                } else 
                    result =  false ;
                UpdateRessourceStockInformation();
                return result ;
            }
            
            /// 
            /// @fn void    Semaphop::GetRessourceEnd (unsigned int nbRessources = 0) 
            /// 
            /// @brief GetRessourceEnd
            /// 
            /// @param [in] nbRessources 
            /// 
            /*!
               \brief method to be called after receiving a message
               */
            void GetRessourceEnd ( unsigned int nbRessources = 0 )
            {
                if ( !On() ) 
                    return ;
                
                // take into account ressource adjustment
                if ( nbRessources && usedRessources >= nbRessources ) 
                    usedRessources -= nbRessources ;
                
                // is there any nut for other ressource ?
                // if ( usedRessources > 0 ) {
                WakeUpOnCondition(&condGetRessource);
                //}
                // is there some new available place for stock ??
                WakeUpOnCondition(&condPutRessource);
                
                // say "good bye mister ressource"
                LeaveCriticalSection(&ressourceSC);
            }
            
            /// 
            /// @fn bool    Semaphop::GetRessource (unsigned int nbRessource = 1, bool withTimeVal = false, unsigned int priority = 1) 
            /// 
            /// @brief GetRessource
            /// 
            /// @param [in] nbRessource 
            /// @param [in] withTimeVal 
            /// @param [in] priority    
            /// 
            /// @returns  bool
            /// 
            /*!
               \brief method to be called for freeing ressource
               */
            bool GetRessource ( unsigned int nbRessource = 1, bool withTimeVal = false, unsigned int priority = 1 )
            {
                bool    result = GetRessourceBegin(nbRessource, withTimeVal, priority);
                
                GetRessourceEnd();
                return result ;
            }
            
            /// 
            /// @fn void    Semaphop::MoreRessourceBegin (unsigned int nbRessource = 1, bool withTimeVal = false, unsigned int priority = 1) 
            /// 
            /// @brief MoreRessourceBegin
            /// 
            /// @param [in] nbRessource 
            /// @param [in] withTimeVal 
            /// @param [in] priority    
            /// 
            /*!
               \brief method to be called before receiving a message
               */
            void MoreRessourceBegin ( unsigned int nbRessource = 1, bool withTimeVal = false, unsigned int priority = 1 )
            {
                int timedOut = 0 ;
                
                if ( !On() ) 
                    return ;
                
                // say "hello mister squirrel"
                EnterCriticalSection(&ressourceSC);
                
                unsigned int    index ;
                
                if ( priority != 1 && priority < NB_PRIORITY ) 
                    for ( index = 2 ; index <= priority ; index++ ) 
                        pvTabPriority [index]++ ;
                while ( usedRessources > nbRessource || priority < NB_PRIORITY-1 && pvTabPriority [priority + 1] ) {
                    
                    // wanna stock nut?
                    struct timespec *pTime = 0 ;
                    struct timespec sTime ;
                    
                    // set time limit
                    if ( withTimeVal ) 
                        pTime =  SetTimeOffset(tval, sTime);
                    else {
                        struct timeval tval ;
                        tval.tv_sec  =  1 ;
                        tval.tv_usec =  0 ;
                        pTime        =  SetTimeOffset(tval, sTime);
                    }
                    
                    // want some nut ?
                    do {
                        timedOut =  SleepUntilCondition(&condGetRessource, &ressourceSC, pTime);
                        if ( timedOut && withTimeVal ) 
                            break ;
                    } while ( priority < NB_PRIORITY-1 && pvTabPriority [priority + 1] );
                    if ( timedOut && withTimeVal ) 
                        break ;
                }
                if ( priority != 1 && priority < NB_PRIORITY ) 
                    for ( index = 2 ; index <= priority ; index++ ) 
                        pvTabPriority [index]-- ;
            }
            
            /// 
            /// @fn void    Semaphop::MoreRessourceEnd () 
            /// 
            /// @brief MoreRessourceEnd
            /// 
            /*!
               \brief method to be called after receiving a message
               */
            void MoreRessourceEnd ()
            {
                if ( !On() ) 
                    return ;
                
                // is there any nut for other ressource ?
                // if ( usedRessources > 0 ) {
                WakeUpOnCondition(&condGetRessource);
                //}
                // is there some new available place for stock ??
                WakeUpOnCondition(&condPutRessource);
                
                // say "good bye mister ressource"
                LeaveCriticalSection(&ressourceSC);
            }
            
            /// 
            /// @fn void    Semaphop::MoreRessource (unsigned int nbRessource = 1, bool withTimeVal = false, unsigned int priority = 1) 
            /// 
            /// @brief MoreRessource
            /// 
            /// @param [in] nbRessource 
            /// @param [in] withTimeVal 
            /// @param [in] priority    
            /// 
            /*!
               \brief method to be called for freeing ressource
               */
            void MoreRessource ( unsigned int nbRessource = 1, bool withTimeVal = false, unsigned int priority = 1 )
            {
                MoreRessourceBegin(nbRessource, withTimeVal, priority);
                MoreRessourceEnd();
            }
            
            /// 
            /// @fn bool    Semaphop::LookRessource (unsigned int nbRessource = 1, bool withTimeVal = false) 
            /// 
            /// @brief LookRessource
            /// 
            /// @param [in] nbRessource 
            /// @param [in] withTimeVal 
            /// 
            /// @returns  bool
            /// 
            /*!
               \brief method to be called for freeing ressource
               */
            bool LookRessource ( unsigned int nbRessource = 1, bool withTimeVal = false )
            {
                if ( !On() ) 
                    return false ;
                
                bool    result = GetRessourceBegin(nbRessource, withTimeVal);
                
                // hey mister quirrel, you're talking to me, give me back my nut !!!
                usedRessources += nbRessource ;
                UpdateRessourceStockInformation();
                GetRessourceEnd();
                return result ;
            }
            
            void PrintRessourceStockInformation ( void )
            {
                fprintf(stderr, "max resource %d \t current resource %d \t nb saturated %d \t nb empty stock %d\n", nbMaxRessource, usedRessources, tooMuchRessources
                    , noRessourcesLeft);
            }
            
            void UpdateRessourceStockInformation ( void )
            {
                if ( nbMaxRessource > 0 && usedRessources == nbMaxRessource ) 
                    tooMuchRessources++ ;
                if ( usedRessources > nbMaxCurrent ) 
                    nbMaxCurrent =  usedRessources ;
                if ( usedRessources == 0 ) {
                    noRessourcesLeft++ ;
                }
            }
            
            /// 
            /// @fn unsigned int    Semaphop::RawGetStockInfo () 
            /// 
            /// @brief RawGetStockInfo
            /// 
            /// @returns  unsigned int
            /// 
            unsigned int RawGetStockInfo ()
            {
                return usedRessources ;
            }
            
            /// 
            /// @fn unsigned int    Semaphop::GetStockInfo () 
            /// 
            /// @brief GetStockInfo
            /// 
            /// @returns  unsigned int
            /// 
            unsigned int GetStockInfo ()
            {
                int iNbRessource = 0 ;
                
                if ( On() ) {
                    
                    // say "hello mister ressource"
                    EnterCriticalSection(&ressourceSC);
                    iNbRessource =  usedRessources ;
                    
                    // say "good bye mister ressource"
                    LeaveCriticalSection(&ressourceSC);
                }
                return iNbRessource ;
            }
            
            /// 
            /// @fn void    Semaphop::ProtectSection () 
            /// 
            /// @brief ProtectSection
            /// 
            void ProtectSection ()
            {
                
                // say "hello mister ressource"
                if ( On() ) 
                    EnterCriticalSection(&ressourceSC);
            }
            
            /// 
            /// @fn void    Semaphop::UnProtectSection () 
            /// 
            /// @brief UnProtectSection
            /// 
            void UnProtectSection ()
            {
                
                // say "hello mister ressource"
                if ( On() ) 
                    LeaveCriticalSection(&ressourceSC);
            }
            
            /// 
            /// @fn void    Semaphop::TimeVal (struct timeval &val) 
            /// 
            /// @brief TimeVal
            /// 
            /// @param [in,out] val 
            /// 
            // TimeVal : TimeVal modifier
            // parameters :
            //               timeVal : new value for timeval
            void TimeVal ( struct timeval &val )
            {
                
                // set timeval struct
                tval.tv_sec  =  val.tv_sec ;
                tval.tv_usec =  val.tv_usec ;
            }
            
            /// 
            /// @fn struct timeval &Semaphop::TimeVal () 
            /// 
            /// @brief TimeVal
            /// 
            /// @returns  struct timeval
            /// 
            // TimeVal : get time val
            struct timeval &TimeVal ()
            {
                return tval ;
            }
            
            /// 
            /// @fn Semaphop    &Semaphop::On (bool on) 
            /// 
            /// @brief On
            /// 
            /// @param [in] on 
            /// 
            /// @returns  Semaphop
            /// 
            // On : change state of semaphop
            Semaphop &On ( bool on )
            {
                if ( on ) 
                    pvOn =  SEMAPHOP_ON ;
                else 
                    pvOn =  0 ;
                return *this ;
            }
            
            /// 
            /// @fn bool    Semaphop::On () 
            /// 
            /// @brief On
            /// 
            /// @returns  bool
            /// 
            // On : get state of semaphop
            bool On ()
            {
                return pvOn == SEMAPHOP_ON ;
            }
        
        private :
        
#           if defined(ON_W)
                EventVariable   condGetRessource ; ///< condGetRessource
                EventVariable   condPutRessource ; ///< condPutRessource
                MutexVariable   ressourceSC ;      ///< ressourceSC
#           else 
                COND_VARIABLE       condGetRessource ; ///< condGetRessource
                COND_VARIABLE       condPutRessource ; ///< condPutRessource
                CRITICAL_SECTION    ressourceSC ;      ///< ressourceSC
#           endif
            
            unsigned int    nbMaxRessource ;              ///< nbMaxRessource
            unsigned int    usedRessources ;              ///< usedRessources
            int             tooMuchRessources ;           ///< tooMuchRessources
            unsigned int    nbMaxCurrent ;                ///< nbMaxCurrent
            int             noRessourcesLeft ;            ///< noRessourcesLeft
            
            /// 
            /// @struct  timeval
            /// 
            /// @brief  timeval
            /// 
            struct timeval   tval ;
            int             pvOn ;                        ///< pvOn
            unsigned int    pvTabPriority [NB_PRIORITY];  ///< pvTabPriority
    };
    
    /// 
    /// @class  CNutStock
    /// 
    /// @brief  CNutStock
    /// 
    
    class CNutStock : public Semaphop {
        
        public :
        
            /// 
            /// @fn CNutStock::CNutStock (bool i_crazyWakeUp = false) 
            /// 
            /// @brief CNutStock
            /// 
            /// @param [in] i_crazyWakeUp 
            /// 
            CNutStock ( bool i_crazyWakeUp = false )
                : Semaphop(),  m_crazyWakeUp(i_crazyWakeUp)
            {}
            
            /// 
            /// @fn virtual CNutStock::~CNutStock () 
            /// 
            /// @brief CNutStock
            /// 
            virtual ~CNutStock () {}
            
            /// 
            /// @fn void    CNutStock::setCrazyWakeUp (bool i_crazyWakeUp) 
            /// 
            /// @brief setCrazyWakeUp
            /// 
            /// @param [in] i_crazyWakeUp 
            /// 
            void setCrazyWakeUp ( bool i_crazyWakeUp )
            {
                m_crazyWakeUp =  i_crazyWakeUp ;
            }
            
            bool getCrazyWakeUp ( void )
            {
                return m_crazyWakeUp ;
            }
            
            /// 
            /// @fn void    CNutStock::createLimitedNutStock (int iNbMaxNuts) 
            /// 
            /// @brief createLimitedNutStock
            /// 
            /// @param [in] iNbMaxNuts 
            /// 
            void createLimitedNutStock ( int iNbMaxNuts )
            {
                CreateLimitedRessourceStock(iNbMaxNuts);
            }
            
            /// 
            /// @fn void    CNutStock::putNutBegin () 
            /// 
            /// @brief putNutBegin
            /// 
            /*!
               \brief method to be called before sending a message
               */
            void putNutBegin ()
            {
                PutRessourceBegin();
            }
            
            /// 
            /// @fn void    CNutStock::putNutEnd () 
            /// 
            /// @brief putNutEnd
            /// 
            /*!
               \brief method to be called after sending a message
               */
            void putNutEnd ()
            {
                PutRessourceEnd();
                if ( getCrazyWakeUp() ) 
                    CrazyWakeUp();
            }
            
            /// 
            /// @fn void    CNutStock::getNutBegin () 
            /// 
            /// @brief getNutBegin
            /// 
            /*!
               \brief method to be called before receiving a message
               */
            void getNutBegin ()
            {
                GetRessourceBegin();
            }
            
            /// 
            /// @fn void    CNutStock::getNutEnd () 
            /// 
            /// @brief getNutEnd
            /// 
            /*!
               \brief method to be called after receiving a message
               */
            void getNutEnd ()
            {
                GetRessourceEnd();
                if ( getCrazyWakeUp() ) 
                    CrazyWakeUp();
            }
            
            void printNutStockInformation ( void )
            {
                PrintRessourceStockInformation();
            }
            
            void updateNutStockInformation ( void )
            {
                UpdateRessourceStockInformation();
            }
            
            /// 
            /// @fn int CNutStock::getStockInfo () 
            /// 
            /// @brief getStockInfo
            /// 
            /// @returns  int
            /// 
            int getStockInfo ()
            {
                return GetStockInfo();
            }
        
        private :
        
            bool    m_crazyWakeUp ; ///< m_crazyWakeUp
    };
#endif
