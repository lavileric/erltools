language metachop;

#include "semaph.h"

void main ()
{
    HANDLE_SEMAPHORE_POSIX  hSem = SEM_OPEN("mySemaphore");
    EString                 message ;
    
    MetaInit();
    DisplayTime("start");
    
    // initialize handler
    SEM_INIT(hSem, 0);
    
    int timer ;
    //SEM_POST(hSem,3);
    int ind = 0 ;
    
    while ( true ) {
        ind =  (ind + 1) % 4 ;
        switch ( ind ) {
            case 0 : 
                SEM_POST(hSem, 1);
                timer = 200 ;
                break ;
            case 1 : 
                timer = 40 ;
                break ;
            case 2 : 
                SEM_POST(hSem, 1);
                timer = 40 ;
                break ;
            case 3 : 
                timer = 200 ;
                break ;
        }
        DisplayTime("====================================================");
        if ( WaitForSingleObject(hSem, timer) == WAIT_OBJECT_0 ) {
            message =  "found the ressource ";
            DisplayTime(message);
        } else {
            message =  "time out ";
            DisplayTime(message);
        }
#       if 0
            ErlSemaph   *pErlSemaph = new ErlSemaph(&hSem, 20);
            if ( pErlSemaph->Success() ) {
                message =  "found the ressource ";
                DisplayTime(message);
            } else {
                message =  "time out ";
                DisplayTime(message);
            }
#       endif
    }
}


