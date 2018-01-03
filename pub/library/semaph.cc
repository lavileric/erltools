
#line 1 "semaph.ch"
/*************************************************************************/
#line 1 "semaph.ch"
/*                                                                       */
#line 1 "semaph.ch"
/*        Produced by Metachop version 2.0  -    1989-1995               */
#line 1 "semaph.ch"
/*     Tree      Meta     Chopper      developped    by                  */
#line 1 "semaph.ch"
/*                  Eric Lavillonniere                                   */
#line 1 "semaph.ch"
/*                                                                       */
#line 1 "semaph.ch"
/*************************************************************************/
#line 1 "semaph.ch"
#line 1 "semaph.ch"
#include "token.h"
#line 1 "semaph.ch"
extern int _retVal[50];
#line 1 "semaph.ch"
extern PPTREE _storeVal[50],_nextVal;
#line 1 "semaph.ch"
extern PPTREE stackTree[1024];
#line 1 "semaph.ch"
extern int ptStackTree;
#line 1 "semaph.ch"
#define decomp decomp_metachop
#line 1 "semaph.ch"
#line 1 "semaph.ch"
#ifndef for_elem
#line 1 "semaph.ch"
#line 1 "semaph.ch"
#define for_elem _for_elem
#line 1 "semaph.ch"
#endif
#ifdef INCONNU
#line 1 "semaph.ch"
#line 1 "semaph.ch"
PTREE   for_elem ;
#line 1 "semaph.ch"
#line 1 "semaph.ch"
#endif
#include "semaph.h"

#if HAS_POSIX
#line 1 "semaph.ch"
#line 9 "semaph.ch"
#line 9 "semaph.ch"
#line 9 "semaph.ch"
static  DWORD WINAPI WaitForTime ( LPVOID pParam )
#line 9 "semaph.ch"
{
#line 9 "semaph.ch"
#line 11 "semaph.ch"
    ErlSemaph   *pSemaph = (ErlSemaph *)pParam ;
#line 11 "semaph.ch"
#line 12 "semaph.ch"
    int remainingTime = pSemaph -> pv_time ;
#line 12 "semaph.ch"
#line 14 "semaph.ch"
    HANDLE_SEMAPHORE_POSIX & hSem = *pSemaph -> pvpSemaphore ;
#line 14 "semaph.ch"
#line 15 "semaph.ch"
#ifdef DEBUG_DISPLAY
#line 15 "semaph.ch"
#line 16 "semaph.ch"
    {
#line 16 "semaph.ch"
#line 17 "semaph.ch"
        EString message = "Wait for time val  ";
#line 17 "semaph.ch"
#line 18 "semaph.ch"
        message += CompactItoa(hSem);
#line 18 "semaph.ch"
#line 19 "semaph.ch"
        message += " ";
#line 19 "semaph.ch"
#line 20 "semaph.ch"
        message += CompactItoa(semctl(hSem, 0, GETVAL, 0));
#line 20 "semaph.ch"
#line 21 "semaph.ch"
        DisplayTime(message);
#line 21 "semaph.ch"
#line 21 "semaph.ch"
    }
#line 21 "semaph.ch"
#endif
#line 21 "semaph.ch"
#line 26 "semaph.ch"
    while ( true ) {
#line 26 "semaph.ch"
#line 27 "semaph.ch"
#ifdef DEBUG_DISPLAY   
#line 27 "semaph.ch"
#line 28 "semaph.ch"
                        EString message = "waiting ";
#line 28 "semaph.ch"
#line 29 "semaph.ch"
                        message += CompactItoa(remainingTime);
#line 29 "semaph.ch"
#line 30 "semaph.ch"
                        DisplayTime(message);
#line 30 "semaph.ch"
#endif
#line 30 "semaph.ch"
#line 34 "semaph.ch"
                        if ( pSemaph -> pvNbThread < 3 ) 
#line 34 "semaph.ch"
#line 35 "semaph.ch"
                            break ;
#line 35 "semaph.ch"
#line 38 "semaph.ch"
                        if ( remainingTime > 100 ) {
#line 38 "semaph.ch"
#line 39 "semaph.ch"
                                                        remainingTime -= 100 ;
#line 39 "semaph.ch"
#line 40 "semaph.ch"
                                                        MSLEEP(100);
#line 40 "semaph.ch"
#line 40 "semaph.ch"
                                                     } else 
#line 41 "semaph.ch"
                        if ( remainingTime > 0 ) {
#line 41 "semaph.ch"
#line 42 "semaph.ch"
                                                    MSLEEP(remainingTime);
#line 42 "semaph.ch"
#line 43 "semaph.ch"
                                                    remainingTime = 0 ;
#line 43 "semaph.ch"
#line 43 "semaph.ch"
                                                   } else 
#line 43 "semaph.ch"
#line 45 "semaph.ch"
                            break ;
#line 45 "semaph.ch"
#line 45 "semaph.ch"
#line 45 "semaph.ch"
                    }
#line 45 "semaph.ch"
#line 47 "semaph.ch"
#ifdef DEBUG_DISPLAY
#line 47 "semaph.ch"
#line 48 "semaph.ch"
    DisplayTime("out of timer waiting");
#line 48 "semaph.ch"
#endif
#line 48 "semaph.ch"
#line 52 "semaph.ch"
    if ( pSemaph -> Handle(true) ) {
#line 52 "semaph.ch"
#line 53 "semaph.ch"
                                        SEM_POST(hSem, 1, false);
#line 53 "semaph.ch"
#line 54 "semaph.ch"
#ifdef DEBUG_DISPLAY                   
#line 54 "semaph.ch"
#line 55 "semaph.ch"
                                        {
#line 55 "semaph.ch"
#line 56 "semaph.ch"
                                            EString message = "release semaphore WaitForTime ";
#line 56 "semaph.ch"
#line 57 "semaph.ch"
                                            message += CompactItoa(hSem);
#line 57 "semaph.ch"
#line 58 "semaph.ch"
                                            message += " ";
#line 58 "semaph.ch"
#line 59 "semaph.ch"
                                            message += CompactItoa(semctl(hSem, 0, GETVAL, 0));
#line 59 "semaph.ch"
#line 60 "semaph.ch"
                                            DisplayTime(message);
#line 60 "semaph.ch"
#line 60 "semaph.ch"
                                        }
#line 60 "semaph.ch"
#endif
#line 60 "semaph.ch"
#line 63 "semaph.ch"
                                        MSLEEP(100);
#line 63 "semaph.ch"
#line 63 "semaph.ch"
                                      }
#line 63 "semaph.ch"
#line 67 "semaph.ch"
    return 0 ;
#line 67 "semaph.ch"
#line 68 "semaph.ch"
}
#line 68 "semaph.ch"

#line 68 "semaph.ch"
#line 70 "semaph.ch"

#line 70 "semaph.ch"
#line 70 "semaph.ch"
static  DWORD WINAPI WaitForSemaphore ( LPVOID pParam )
#line 70 "semaph.ch"
{
#line 70 "semaph.ch"
#line 72 "semaph.ch"
    ErlSemaph   *pSemaph = (ErlSemaph *)pParam ;
#line 72 "semaph.ch"
#line 74 "semaph.ch"
#ifdef DEBUG_DISPLAY
#line 74 "semaph.ch"
#line 75 "semaph.ch"
    DisplayTime("start of wait for semaphore");
#line 75 "semaph.ch"
#endif
#line 75 "semaph.ch"
#line 79 "semaph.ch"
    EnterCriticalSection(&pSemaph -> pv_block);
#line 79 "semaph.ch"
#line 80 "semaph.ch"
    pSemaph -> pvLocked = true ;
#line 80 "semaph.ch"
#line 81 "semaph.ch"
    HANDLE_SEMAPHORE_POSIX & hSem = *pSemaph -> pvpSemaphore ;
#line 81 "semaph.ch"
#line 82 "semaph.ch"
#ifdef DEBUG_DISPLAY
#line 82 "semaph.ch"
#line 83 "semaph.ch"
    {
#line 83 "semaph.ch"
#line 84 "semaph.ch"
        EString message = "Locked now with ";
#line 84 "semaph.ch"
#line 85 "semaph.ch"
        message += CompactItoa(hSem);
#line 85 "semaph.ch"
#line 86 "semaph.ch"
        DisplayTime(message);
#line 86 "semaph.ch"
#line 88 "semaph.ch"
        {
#line 88 "semaph.ch"
#line 88 "semaph.ch"
            EString message = "WaitSemaphore val -> ";
#line 88 "semaph.ch"
#line 89 "semaph.ch"
            message += CompactItoa(hSem);
#line 89 "semaph.ch"
#line 90 "semaph.ch"
            message += " ";
#line 90 "semaph.ch"
#line 91 "semaph.ch"
            message += CompactItoa(semctl(hSem, 0, GETVAL, 0));
#line 91 "semaph.ch"
#line 92 "semaph.ch"
            DisplayTime(message);
#line 92 "semaph.ch"
#line 93 "semaph.ch"
        }
#line 93 "semaph.ch"
#line 93 "semaph.ch"
    }
#line 93 "semaph.ch"
#endif
#line 93 "semaph.ch"
#line 98 "semaph.ch"
    SEM_POST(hSem, - 1, false);
#line 98 "semaph.ch"
#line 99 "semaph.ch"
#ifdef DEBUG_DISPLAY
#line 99 "semaph.ch"
#line 100 "semaph.ch"
    DisplayTime("out of semaphore waiting");
#line 100 "semaph.ch"
#endif
#line 100 "semaph.ch"
#line 102 "semaph.ch"
    pSemaph -> Handle(false);
#line 102 "semaph.ch"
#line 105 "semaph.ch"
    LeaveCriticalSection(&pSemaph -> pv_block);
#line 105 "semaph.ch"
#line 108 "semaph.ch"
    return 0 ;
#line 108 "semaph.ch"
#line 109 "semaph.ch"
}
#line 109 "semaph.ch"
#endif

#line 115 "semaph.ch"
#line 115 "semaph.ch"
ErlSemaph::ErlSemaph ( HANDLE_SEMAPHORE_POSIX *handleSemaphore, int time )
#line 115 "semaph.ch"
    : pvNbThread(0),  pvSuccess(false),  pvLocked(false)
#line 115 "semaph.ch"
#line 115 "semaph.ch"
{
#line 115 "semaph.ch"
#line 119 "semaph.ch"
#if HAS_POSIX
#line 119 "semaph.ch"
#line 122 "semaph.ch"
    pv_time = time ;
#line 122 "semaph.ch"
#line 123 "semaph.ch"
    pvpSemaphore = handleSemaphore ;
#line 123 "semaph.ch"
#line 124 "semaph.ch"
    HANDLE_SEMAPHORE_POSIX & semaph = *pvpSemaphore ;
#line 124 "semaph.ch"
#line 125 "semaph.ch"
#ifdef DEBUG_DISPLAY
#line 125 "semaph.ch"
#line 127 "semaph.ch"
    EString message ;
#line 127 "semaph.ch"
#line 130 "semaph.ch"
    {
#line 130 "semaph.ch"
#line 130 "semaph.ch"
        message = "Constructor val -> ";
#line 130 "semaph.ch"
#line 131 "semaph.ch"
        message += CompactItoa(semaph);
#line 131 "semaph.ch"
#line 132 "semaph.ch"
        message += " ";
#line 132 "semaph.ch"
#line 133 "semaph.ch"
        message += CompactItoa(semctl(semaph, 0, GETVAL, 0));
#line 133 "semaph.ch"
#line 134 "semaph.ch"
        DisplayTime(message);
#line 134 "semaph.ch"
#line 135 "semaph.ch"
    }
#line 135 "semaph.ch"
#endif
#line 135 "semaph.ch"
#line 139 "semaph.ch"
    InitializeCriticalSection(&pv_hCritical);
#line 139 "semaph.ch"
#line 140 "semaph.ch"
    InitializeCriticalSection(&pv_block);
#line 140 "semaph.ch"
#line 143 "semaph.ch"
    if ( semctl(semaph, 0, GETVAL, 0) >= 1 ) {
#line 143 "semaph.ch"
#line 144 "semaph.ch"
                                                    pvSuccess = true ;
#line 144 "semaph.ch"
#line 145 "semaph.ch"
                                                    SEM_POST(semaph, - 1, false);
#line 145 "semaph.ch"
#line 146 "semaph.ch"
                                                    pvNbThread = 1 ;
#line 146 "semaph.ch"
#line 147 "semaph.ch"
                                                    return ;
#line 147 "semaph.ch"
#line 147 "semaph.ch"
                                                   }
#line 147 "semaph.ch"
#line 151 "semaph.ch"
    pvNbThread = 3 ;
#line 151 "semaph.ch"
#line 154 "semaph.ch"
    pthread_t   reader ;
#line 154 "semaph.ch"
#line 156 "semaph.ch"
    pthread_create(&reader, 0, (LPTHREAD_START_ROUTINE)WaitForTime, (LPVOID)this);
#line 156 "semaph.ch"
#line 158 "semaph.ch"
    pthread_detach(reader);
#line 158 "semaph.ch"
#line 159 "semaph.ch"
    pthread_create(&reader, 0, (LPTHREAD_START_ROUTINE)WaitForSemaphore, (LPVOID)this);
#line 159 "semaph.ch"
#line 161 "semaph.ch"
    pthread_detach(reader);
#line 161 "semaph.ch"
#endif
#line 161 "semaph.ch"
#line 163 "semaph.ch"
}
#line 163 "semaph.ch"

#line 166 "semaph.ch"
#line 166 "semaph.ch"
bool ErlSemaph::Success ()
#line 166 "semaph.ch"
{
#line 166 "semaph.ch"
#line 169 "semaph.ch"
#if HAS_POSIX
#line 169 "semaph.ch"
#line 171 "semaph.ch"
    bool    destroy ;
#line 171 "semaph.ch"
#line 172 "semaph.ch"
    bool    result ;
#line 172 "semaph.ch"
#line 174 "semaph.ch"
#ifdef DEBUG_DISPLAY
#line 174 "semaph.ch"
#line 175 "semaph.ch"
    DisplayTime("Enter Success");
#line 175 "semaph.ch"
#endif
#line 175 "semaph.ch"
#line 179 "semaph.ch"
    if ( pvSuccess ) {
#line 179 "semaph.ch"
#line 180 "semaph.ch"
                        destroy = !--pvNbThread ;
#line 180 "semaph.ch"
#line 181 "semaph.ch"
                        if ( destroy ) 
#line 181 "semaph.ch"
#line 182 "semaph.ch"
                            delete this ;
#line 182 "semaph.ch"
#line 183 "semaph.ch"
                        return true ;
#line 183 "semaph.ch"
#line 183 "semaph.ch"
                      }
#line 183 "semaph.ch"
#line 187 "semaph.ch"
    while ( !pvLocked ) 
#line 187 "semaph.ch"
#line 188 "semaph.ch"
        usleep(100);
#line 188 "semaph.ch"
#line 189 "semaph.ch"
#ifdef DEBUG_DISPLAY
#line 189 "semaph.ch"
#line 190 "semaph.ch"
    DisplayTime("Success locked");
#line 190 "semaph.ch"
#endif
#line 190 "semaph.ch"
#line 194 "semaph.ch"
    EnterCriticalSection(&pv_block);
#line 194 "semaph.ch"
#line 195 "semaph.ch"
#ifdef DEBUG_DISPLAY
#line 195 "semaph.ch"
#line 196 "semaph.ch"
    DisplayTime("Success unlocked");
#line 196 "semaph.ch"
#endif
#line 196 "semaph.ch"
#line 200 "semaph.ch"
    EnterCriticalSection(&pv_hCritical);
#line 200 "semaph.ch"
#line 203 "semaph.ch"
    destroy = !--pvNbThread ;
#line 203 "semaph.ch"
#line 204 "semaph.ch"
    result = pvSuccess ;
#line 204 "semaph.ch"
#line 207 "semaph.ch"
    LeaveCriticalSection(&pv_hCritical);
#line 207 "semaph.ch"
#line 208 "semaph.ch"
    LeaveCriticalSection(&pv_block);
#line 208 "semaph.ch"
#line 209 "semaph.ch"
    if ( destroy ) 
#line 209 "semaph.ch"
#line 210 "semaph.ch"
        delete this ;
#line 210 "semaph.ch"
#line 211 "semaph.ch"
#ifdef DEBUG_DISPLAY
#line 211 "semaph.ch"
#line 212 "semaph.ch"
    if ( result ) 
#line 212 "semaph.ch"
#line 213 "semaph.ch"
        DisplayTime("Leave Success with success");
#line 213 "semaph.ch"
    else 
#line 213 "semaph.ch"
#line 215 "semaph.ch"
        DisplayTime("Leave Success without success");
#line 215 "semaph.ch"
#line 215 "semaph.ch"
#endif
#line 215 "semaph.ch"
#line 217 "semaph.ch"
    return result ;
#line 217 "semaph.ch"
#endif
#line 217 "semaph.ch"
#line 219 "semaph.ch"
    return false ;
#line 219 "semaph.ch"
#line 220 "semaph.ch"
}
#line 220 "semaph.ch"

#line 225 "semaph.ch"
#line 225 "semaph.ch"
bool ErlSemaph::Handle ( bool timer )
#line 225 "semaph.ch"
{
#line 225 "semaph.ch"
#line 228 "semaph.ch"
    bool    setSemaphore = false ;
#line 228 "semaph.ch"
#line 230 "semaph.ch"
#if HAS_POSIX
#line 230 "semaph.ch"
#line 231 "semaph.ch"
    {
#line 231 "semaph.ch"
#line 232 "semaph.ch"
        bool    destroy ;
#line 232 "semaph.ch"
#line 233 "semaph.ch"
#ifdef DEBUG_DISPLAY
#line 233 "semaph.ch"
#line 234 "semaph.ch"
        DisplayTime("in handle ");
#line 234 "semaph.ch"
#endif
#line 234 "semaph.ch"
#line 238 "semaph.ch"
        EnterCriticalSection(&pv_hCritical);
#line 238 "semaph.ch"
#line 239 "semaph.ch"
#ifdef DEBUG_DISPLAY
#line 239 "semaph.ch"
#line 240 "semaph.ch"
        DisplayTime("critical section entered ");
#line 240 "semaph.ch"
#endif
#line 240 "semaph.ch"
#line 244 "semaph.ch"
        if ( timer ) {
#line 244 "semaph.ch"
#line 247 "semaph.ch"
                        if ( pvNbThread >= 3 ) {
#line 247 "semaph.ch"
#line 248 "semaph.ch"
#ifdef DEBUG_DISPLAY                               
#line 248 "semaph.ch"
#line 249 "semaph.ch"
                                                    EString message("release semaphore handle");
#line 249 "semaph.ch"
#line 250 "semaph.ch"
                                                    DisplayTime(message);
#line 250 "semaph.ch"
#endif
#line 250 "semaph.ch"
#line 254 "semaph.ch"
                                                    setSemaphore = true ;
#line 254 "semaph.ch"
#line 254 "semaph.ch"
                                                 }
#line 254 "semaph.ch"
#line 254 "semaph.ch"
                      } else 
#line 256 "semaph.ch"
        if ( pvNbThread >= 3 ) {
#line 256 "semaph.ch"
#line 257 "semaph.ch"
                                    pvSuccess = true ;
#line 257 "semaph.ch"
#line 257 "semaph.ch"
                                 }
#line 257 "semaph.ch"
#line 261 "semaph.ch"
        destroy = !--pvNbThread ;
#line 261 "semaph.ch"
#line 264 "semaph.ch"
        LeaveCriticalSection(&pv_hCritical);
#line 264 "semaph.ch"
#line 265 "semaph.ch"
#ifdef DEBUG_DISPLAY
#line 265 "semaph.ch"
#line 266 "semaph.ch"
        if ( destroy ) {
#line 266 "semaph.ch"
#line 267 "semaph.ch"
                            DisplayTime("Leave handle with destroy");
#line 267 "semaph.ch"
#line 268 "semaph.ch"
                            delete this ;
#line 268 "semaph.ch"
#line 268 "semaph.ch"
                        } else 
#line 269 "semaph.ch"
        {
#line 269 "semaph.ch"
#line 270 "semaph.ch"
            DisplayTime("Leave handle without destroy");
#line 270 "semaph.ch"
#line 270 "semaph.ch"
        }
#line 270 "semaph.ch"
#else 
        if ( destroy ) 
#line 270 "semaph.ch"
#line 274 "semaph.ch"
            delete this ;
#endif
#line 274 "semaph.ch"
#line 274 "semaph.ch"
    }
#line 274 "semaph.ch"
#endif
#line 274 "semaph.ch"
#line 278 "semaph.ch"
    return setSemaphore ;
#line 278 "semaph.ch"
#line 279 "semaph.ch"
}
#line 279 "semaph.ch"
/*Well done my boy */ 
#line 279 "semaph.ch"

