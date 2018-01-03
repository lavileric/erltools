language metachop;

#include "semaph.h"

void main ()
{
    
    HANDLE_SEMAPHORE_POSIX  hSem = semget(0x5f736b38, 1, 0);  //SEM_OPEN("mySemaphore");
    EString                 message ;
    
    MetaInit("looksem");
    DisplayTime("start");
    
    //    SEM_POST(hSem, 1);
    while ( true ) {
        DisplayTime("====================================================");
        message =  "Init val -> ";
        message += CompactItoa(hSem);
        message += " ";
        message += CompactItoa(semctl(hSem, 0, GETVAL, 0));
        DisplayTime(message);
    }
}


