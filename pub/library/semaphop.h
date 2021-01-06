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
#define SEMPAHOP_HEADER 
#include "smtoken.h"
#define NB_PRIORITY 32
#if defined(HAS_POSIX_CRITICAL)
#define HANDLE_CRITICAL pthread_mutex_t  
#define CRITICAL_SECTION HANDLE_CRITICAL *
#define COND_VARIABLE pthread_cond_t
#include <pthread.h>

inline void CrazyWakeUp ( void )
{
#if defined(ON_W)
    SwitchToThread();
#else 
    sched_yield();
#endif
}

inline void InitializeCriticalSection ( HANDLE_CRITICAL **handle )
{
    *handle = new pthread_mutex_t ;
    
    int ret = pthread_mutex_init(*handle, 0);
    
    if ( ret ) {
        fprintf(stderr, "Error in InitializeCriticalSection : %d, in %s, line %d\n", ret, __FILE__, __LINE__);
    }
}

inline void EnterCriticalSection ( HANDLE_CRITICAL **handle )
{
    int ret = pthread_mutex_lock(*handle);
    
    if ( ret ) {
        fprintf(stderr, "Error in EnterCriticalSection : %d, in %s, line %d\n", ret, __FILE__, __LINE__);
    }
}

inline void LeaveCriticalSection ( HANDLE_CRITICAL **handle )
{
    int ret = pthread_mutex_unlock(*handle);
    
    if ( ret ) {
        fprintf(stderr, "Error in LeaveCriticalSection : %d, in %s, line %d\n", ret, __FILE__, __LINE__);
    }
}

inline void DeleteCriticalSection ( HANDLE_CRITICAL **handle )
{
    if ( *handle ) {
        int errCode = pthread_mutex_destroy(*handle);
        if ( errCode != 0 ) {
            fprintf(stderr, "Error in DeleteCriticalSection : %d, in %s, line %d\n", errCode, __FILE__, __LINE__);
        }
        delete *handle ;
        *handle = 0 ;
    }
}

inline int InitCondition ( COND_VARIABLE *pCond )
{
    pthread_cond_init(pCond, 0);
    return 0 ;
}

inline int WakeUpOnCondition ( COND_VARIABLE *pCond )
{
    pthread_cond_signal(pCond);
    return 0 ;
}

inline int WakeUpOnConditionTime ( COND_VARIABLE *pCond )
{
    pthread_cond_signal(pCond);
    return 0 ;
}

inline int SleepUntilCondition ( COND_VARIABLE *pCond, CRITICAL_SECTION *sC, struct timespec *pTime = 0 )
{
    int result = 0 ;
    
    if ( pTime ) 
        result = pthread_cond_timedwait(pCond, *sC, pTime);
    else 
        pthread_cond_wait(pCond, *sC);
    return result ;
}

inline int DeleteCondition ( COND_VARIABLE *pCond )
{
    if ( pCond ) {
        pthread_cond_destroy(pCond);
    }
    return 0 ;
}

inline struct timespec *SetTimeOffset ( struct timeval &tval, struct timespec &sTime )
{
    struct timespec *pTime = 0 ;
    
    if ( tval.tv_sec != 0 || tval.tv_usec != 0 ) {
#if defined(REPLACE_FTIME)
        {
            struct timeval tstruct ;
            gettimeofday(&tstruct, NULL);
            sTime.tv_sec = tstruct.tv_sec + tval.tv_sec ;
            sTime.tv_nsec = (tstruct.tv_usec + tval.tv_usec) * 1000 ;
        }
#elif defined(UNDERSCORE_FTIME)
            {
                struct _timeb tstruct ;
                _ftime(&tstruct);
                sTime.tv_sec = tstruct.time + tval.tv_sec ;
                sTime.tv_nsec = (tstruct.millitm * 1000 + tval.tv_usec) * 1000 ;
            }
#else 
        {
            struct timeb tstruct ;
            ::ftime(&tstruct);
            sTime.tv_sec = tstruct.time + tval.tv_sec ;
            sTime.tv_nsec = (tstruct.millitm * 1000 + tval.tv_usec) * 1000 ;
        }
#endif
        pTime = &sTime ;
    }
    return pTime ;
}
#elif defined(ON_W)
#define WaitForSingleObjectU WaitForSingleObject
#define ReleaseSemaphoreU ReleaseSemaphore
    typedef HANDLE  MutexVariable ;
    typedef HANDLE  EventVariable ;
#define timespec timeval
    DWORD   ESignal (HANDLE h1, HANDLE h2, DWORD milli) ;
    
    inline void CrazyWakeUp ( void ) {}
    
    inline void InitializeCriticalSection ( MutexVariable *pMutex )
    {
        
        DWORD               ident ;    // ident 
        SECURITY_ATTRIBUTES security ; // security
        
        security.nLength = sizeof(SECURITY_ATTRIBUTES);
        security.lpSecurityDescriptor = 0 ;
        security.bInheritHandle = true ;
        *pMutex = CreateMutex(&security, false, 0);
        if ( !*pMutex ) {
            fprintf(stderr, "Error in InitializeCriticalSection : %d, in %s, line %d\n", (int)*pMutex, __FILE__
                , __LINE__);
        }
    }
    
    inline void EnterCriticalSection ( MutexVariable *pMutex )
    {
        DWORD   ret = WaitForSingleObject(*pMutex, INFINITE);
        
        if ( ret != WAIT_OBJECT_0 ) {
            fprintf(stderr, "Error in EnterCriticalSection : %d, in %s, line %d\n", (int)ret, __FILE__, __LINE__);
        }
    }
    
    inline void LeaveCriticalSection ( MutexVariable *pMutex )
    {
        bool    ret = ReleaseMutex(*pMutex);
        
        if ( !ret ) {
            fprintf(stderr, "Error in LeaveCriticalSection : %d, in %s, line %d\n", ret, __FILE__, __LINE__);
        }
    }
    
    inline void DeleteCriticalSection ( MutexVariable *pMutex )
    {
        if ( *pMutex ) {
            CloseHandle(*pMutex);
            *pMutex = 0 ;
        }
    }
    
    inline int InitCondition ( EventVariable *pEvent )
    {
        
        DWORD               ident ;    // ident 
        SECURITY_ATTRIBUTES security ; // security
        
        security.nLength = sizeof(SECURITY_ATTRIBUTES);
        security.lpSecurityDescriptor = 0 ;
        security.bInheritHandle = true ;
        *pEvent = CreateEvent(&security, true, false, 0);
        if ( !*pEvent ) {
            fprintf(stderr, "Error in InitializeCriticalSection : %d, in %s, line %d\n", (int)*pEvent, __FILE__
                , __LINE__);
        }
        return 0 ;
    }
    
    inline int WakeUpOnCondition ( EventVariable *pEvent )
    {
        int ret = PulseEvent(*pEvent);
        
        return 0 ;
    }
    
    inline int WakeUpOnConditionTime ( EventVariable *pEvent )
    {
        int ret = PulseEvent(*pEvent);
        
        return 0 ;
    }
    
    inline int SleepUntilCondition ( EventVariable *pCond, MutexVariable *pSc, struct timespec *pTime = 0 )
    {
        int result = 0 ;
        
        if ( pTime ) 
            result = ESignal(*pSc, *pCond, pTime -> tv_sec * 1000 + pTime -> tv_usec / 1000) != WAIT_OBJECT_0 ? 1 : 0 ;
        else 
            result = ESignal(*pSc, *pCond, INFINITE);
        EnterCriticalSection(pSc);
        return result ;
    }
    
    inline int DeleteCondition ( EventVariable *pEvent )
    {
        int ret = CloseHandle(*pEvent);
        
        return 0 ;
    }
    
    inline struct timespec *SetTimeOffset ( struct timeval &tval, struct timespec &sTime )
    {
        struct timespec *pTime = 0 ;
        
        if ( tval.tv_sec != 0 || tval.tv_usec != 0 ) {
            sTime.tv_sec = tval.tv_sec ;
            sTime.tv_usec = tval.tv_usec ;
            pTime = &sTime ;
        }
        return pTime ;
    }
#endif

/*!
   \class Semaphop
   \brief management of a stock of nuts (message)
   \author P.MOREL
   */

class Semaphop {
    
    public :
    
        Semaphop ()
            : nbMaxRessource(0),  tooMuchRessources(0),  noRessourcesLeft(0),  nbMaxCurrent(0),  pvOn(true)
                ,  usedRessources(0)
        {
            InitializeCriticalSection(&ressourceSC);
            ReInit();
            tval.tv_sec = tval.tv_usec = 0 ;
            memset((char *)pvTabPriority, 0, NB_PRIORITY * sizeof(unsigned int));
        }
        
        Semaphop ( unsigned int initRessource )
            : nbMaxRessource(initRessource),  tooMuchRessources(0),  noRessourcesLeft(0),  nbMaxCurrent(0),  pvOn(true)
                ,  usedRessources(0)
        {
            InitializeCriticalSection(&ressourceSC);
            ReInit();
            tval.tv_sec = tval.tv_usec = 0 ;
            memset((char *)pvTabPriority, 0, NB_PRIORITY * sizeof(unsigned int));
        }
        
        virtual ~Semaphop ()
        {
            DeleteCriticalSection(&ressourceSC);
            DeleteCondition(&condGetRessource);
            DeleteCondition(&condPutRessource);
        }
        
        void CreateLimitedRessourceStock ( int iNbMax )
        {
            nbMaxRessource = iNbMax ;
            usedRessources = 0 ;
        }
        
        void ReInit ()
        {
            InitCondition(&condGetRessource);
            InitCondition(&condPutRessource);
            usedRessources = 0 ;
        }
        
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
                    pTime = SetTimeOffset(tval, sTime);
                else {
                    struct timeval tval ;
                    tval.tv_sec = 1 ;
                    tval.tv_usec = 0 ;
                    pTime = SetTimeOffset(tval, sTime);
                }
                
                // wait do not get out if more important guy
                timedOut = SleepUntilCondition(&condPutRessource, &ressourceSC, pTime);
                if ( timedOut && withTimeVal ) 
                    break ;
            }
            
            // take this nut for winter
            if ( nbMaxRessource <= 0 || usedRessources + nbRessource <= nbMaxRessource ) {
                usedRessources += nbRessource ;
#if 0
                fprintf(stdout, "%d\n", usedRessources);
                if ( usedRessources != 1 ) {
                    int i = 1 ;
                }
#endif
                if ( nbMaxRessource > 0 && usedRessources > nbMaxRessource ) {
                    PrintRessourceStockInformation();
                    fprintf(stderr, "error in %s, line %d\n", __FILE__, __LINE__);
                    exit(1);
                }
            }
            
            // update stock info
            UpdateRessourceStockInformation();
        }
        
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
        
        /*!
           \brief method to be called for freeing ressource
           */
        void FreeRessource ( unsigned int nbRessource = 1, bool withTimeVal = false )
        {
            PutRessourceBegin(nbRessource, withTimeVal);
            PutRessourceEnd();
        }
        
        void PutRessource ( unsigned int nbRessource = 1, bool withTimeVal = false )
        {
            FreeRessource(nbRessource, withTimeVal);
        }
        
        /*!
           \brief method to be called before receiving a message
           */
        void GetRessourceBegin ( unsigned int nbRessource = 1, bool withTimeVal = false, unsigned int priority = 1 )
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
            while ( usedRessources < nbRessource || priority < NB_PRIORITY && pvTabPriority [priority + 1] ) {
                
                // wanna stock nut?
                struct timespec *pTime = 0 ;
                struct timespec sTime ;
                
                // set time limit
                if ( withTimeVal ) 
                    pTime = SetTimeOffset(tval, sTime);
                else {
                    struct timeval tval ;
                    tval.tv_sec = 1 ;
                    tval.tv_usec = 0 ;
                    pTime = SetTimeOffset(tval, sTime);
                }
                
                // want some nut ?
                do {
                    timedOut = SleepUntilCondition(&condGetRessource, &ressourceSC, pTime);
                    if ( timedOut && withTimeVal ) 
                        break ;
                } while ( priority < NB_PRIORITY && pvTabPriority [priority + 1] );
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
            }
            UpdateRessourceStockInformation();
        }
        
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
        
        /*!
           \brief method to be called for freeing ressource
           */
        void GetRessource ( unsigned int nbRessource = 1, bool withTimeVal = false, unsigned int priority = 1 )
        {
            GetRessourceBegin(nbRessource, withTimeVal, priority);
            GetRessourceEnd();
        }
        
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
            while ( usedRessources > nbRessource || priority < NB_PRIORITY && pvTabPriority [priority + 1] ) {
                
                // wanna stock nut?
                struct timespec *pTime = 0 ;
                struct timespec sTime ;
                
                // set time limit
                if ( withTimeVal ) 
                    pTime = SetTimeOffset(tval, sTime);
                else {
                    struct timeval tval ;
                    tval.tv_sec = 1 ;
                    tval.tv_usec = 0 ;
                    pTime = SetTimeOffset(tval, sTime);
                }
                
                // want some nut ?
                do {
                    timedOut = SleepUntilCondition(&condGetRessource, &ressourceSC, pTime);
                    if ( timedOut && withTimeVal ) 
                        break ;
                } while ( priority < NB_PRIORITY && pvTabPriority [priority + 1] );
                if ( timedOut && withTimeVal ) 
                    break ;
            }
            if ( priority != 1 && priority < NB_PRIORITY ) 
                for ( index = 2 ; index <= priority ; index++ ) 
                    pvTabPriority [index]-- ;
        }
        
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
        
        /*!
           \brief method to be called for freeing ressource
           */
        void MoreRessource ( unsigned int nbRessource = 1, bool withTimeVal = false, unsigned int priority = 1 )
        {
            MoreRessourceBegin(nbRessource, withTimeVal, priority);
            MoreRessourceEnd();
        }
        
        /*!
           \brief method to be called for freeing ressource
           */
        void LookRessource ( unsigned int nbRessource = 1, bool withTimeVal = false )
        {
            GetRessourceBegin(nbRessource, withTimeVal);
            
            // hey mister quirrel, you're talking to me, give me back my nut !!!
            usedRessources += nbRessource ;
            UpdateRessourceStockInformation();
            GetRessourceEnd();
        }
        
        void PrintRessourceStockInformation ( void )
        {
            fprintf(stderr, "max resource %d \t current resource %d \t nb saturated %d \t nb empty stock %d\n"
                , nbMaxRessource, usedRessources, tooMuchRessources, noRessourcesLeft);
        }
        
        void UpdateRessourceStockInformation ( void )
        {
            if ( nbMaxRessource > 0 && usedRessources == nbMaxRessource ) 
                tooMuchRessources++ ;
            if ( usedRessources > nbMaxCurrent ) 
                nbMaxCurrent = usedRessources ;
            if ( usedRessources == 0 ) {
                noRessourcesLeft++ ;
            }
        }
        
        unsigned int RawGetStockInfo ()
        {
            return usedRessources ;
        }
        
        unsigned int GetStockInfo ()
        {
            
            // say "hello mister ressource"
            EnterCriticalSection(&ressourceSC);
            
            int iNbRessource = usedRessources ;
            
            // say "good bye mister ressource"
            LeaveCriticalSection(&ressourceSC);
            return iNbRessource ;
        }
        
        void ProtectSection ()
        {
            
            // say "hello mister ressource"
            EnterCriticalSection(&ressourceSC);
        }
        
        void UnProtectSection ()
        {
            
            // say "hello mister ressource"
            LeaveCriticalSection(&ressourceSC);
        }
        
        // TimeVal : TimeVal modifier
        // parameters :
        //               timeVal : new value for timeval
        void TimeVal ( struct timeval &val )
        {
            
            // set timeval struct
            tval.tv_sec = val.tv_sec ;
            tval.tv_usec = val.tv_usec ;
        }
        
        // TimeVal : get time val
        struct timeval &TimeVal ()
        {
            return tval ;
        }
        
        // On : change state of semaphop
        Semaphop &On ( bool on )
        {
            pvOn = on ;
            return *this ;
        }
        
        // On : get state of semaphop
        bool On ()
        {
            return pvOn ;
        }
    
    private :
    
#if defined(ON_W)
        EventVariable   condGetRessource ;
        EventVariable   condPutRessource ;
        MutexVariable   ressourceSC ;
#else 
        COND_VARIABLE       condGetRessource ;
        COND_VARIABLE       condPutRessource ;
        CRITICAL_SECTION    ressourceSC ;
#endif
        
        unsigned int    nbMaxRessource ;
        unsigned int    usedRessources ;
        int             tooMuchRessources ;
        unsigned int    nbMaxCurrent ;
        int             noRessourcesLeft ;
        struct timeval   tval ;
        bool            pvOn ;
        unsigned int    pvTabPriority [NB_PRIORITY];
};

class CNutStock : public Semaphop {
    
    public :
    
        CNutStock ( bool i_crazyWakeUp = false )
            : Semaphop(),  m_crazyWakeUp(i_crazyWakeUp)
        {}
        
        virtual ~CNutStock () {}
        
        void setCrazyWakeUp ( bool i_crazyWakeUp )
        {
            m_crazyWakeUp = i_crazyWakeUp ;
        }
        
        bool getCrazyWakeUp ( void )
        {
            return m_crazyWakeUp ;
        }
        
        void createLimitedNutStock ( int iNbMaxNuts )
        {
            CreateLimitedRessourceStock(iNbMaxNuts);
        }
        
        /*!
           \brief method to be called before sending a message
           */
        void putNutBegin ()
        {
            PutRessourceBegin();
        }
        
        /*!
           \brief method to be called after sending a message
           */
        void putNutEnd ()
        {
            PutRessourceEnd();
            if ( getCrazyWakeUp() ) 
                CrazyWakeUp();
        }
        
        /*!
           \brief method to be called before receiving a message
           */
        void getNutBegin ()
        {
            GetRessourceBegin();
        }
        
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
        
        int getStockInfo ()
        {
            return GetStockInfo();
        }
    
    private :
    
        bool    m_crazyWakeUp ;
};
#endif
