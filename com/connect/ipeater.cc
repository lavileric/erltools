#include "erlsock.h"

static int          echoPort = 9000 ;
static isockinet    &isin = *new isockinet(sockbuf::sock_stream);  // input socket

#define SIZE_INPUT 5000

int main ( int argc, char **argv )
{
    MetaInit();
    
    // create in input socket
    // open socket
    bool    firstTry = true ;
    
    while ( 1 ) {
        const sockerr   &inetError = isin -> bind(echoPort);
        if ( inetError.errnoval() ) {
            char    message [50]; // error message
            if ( firstTry ) {
                sprintf(message, "Problem on %d trying again .", echoPort);
                firstTry = false ;
            } else {
                strcpy(message, ".");
            }
            write(2, message, strlen(message));
            SLEEP(3);
            continue ;
        }
        break ;
    }
    cout << "localhost = " << isin -> localhost() << endl << "localport = " << isin -> localport() << endl ;
    
    char          inputBuffer [SIZE_INPUT];
    
    // set time for reading wait
    struct timeval tval ;
    
    tval.tv_sec = 60 ;
    tval.tv_usec = 0 ;
    isin -> TimeVal(tval);
    
    // echo
    while ( true ) {
        int nbRead ; // number of char read
        if ( (nbRead = isin -> read((char *)&inputBuffer, SIZE_INPUT)) > 0 ) {
            
            // write(2, (char *)&inputBuffer, nbRead);
            //isin -> write((char *)&inputBuffer, nbRead, 1, isin -> LastSocket());
        }
    }
    return 0 ;
}
