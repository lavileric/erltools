#include "erlsock.h"

static int          echoPort = 9000 ;
static osockinet    &osin = *new osockinet(sockbuf::sock_stream);  // input socket

#define SIZE_INPUT 5000

int main ( int argc, char **argv )
{
    MetaInit();
    
    // create in input socket
    // open socket
    bool    firstTry = true ;
    
    while ( 1 ) {
        const sockerr   &inetError = osin -> connect(echoPort);
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
    cout << "localhost = " << osin -> localhost() << endl << "localport = " << osin -> localport() << endl ;
    
    char          inputBuffer [SIZE_INPUT];
    
    // set time for reading wait
    struct timeval tval ;
    
    tval.tv_sec = 60 ;
    tval.tv_usec = 0 ;
    osin -> TimeVal(tval);
    
    // echo
    char    buf [512];
    
    for ( int i = 0 ; i < 512 ; i++ ) {
        buf [i] = (char)i ;
    }
    DisplayTime("Time", 1);
    for ( int loop = 100000 ; loop > 0 ; loop-- ) {
        osin -> write((char *)buf, 512, 1);
        int nbRead ; // number of char read
        if ( (nbRead = osin -> read((char *)&inputBuffer, SIZE_INPUT)) > 0 ) {
            if ( nbRead != 512 || strncmp(inputBuffer, buf, 512) ) {
                char    *error = "Bad Buffer\n";
                write(1, error, strlen(error));
            }
        }
    }
    DisplayTime("Time", 1);
    return 0 ;
}
