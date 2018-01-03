#include "erlsock.h"
#include <fcntl.h>

static int          echoPort = 9000 ;
static isockinet    &isin = *new isockinet(sockbuf::sock_stream); // input socket

#define SIZE_INPUT 5000

void main ( int argc, char **argv )
{
    
    // create in input socket
    // open socket
    bool    firstTry = true ;
    
    if ( argc < 2 ) 
    {
        EString usage("Usage : file \n");
        write(2, usage.c_str(), usage.length());
        return ;
    }
    while ( 1 ) 
    {
        const sockerr   &inetError = isin -> bind(echoPort);
        if ( inetError.errnoval() ) 
        {
            char    message [50]; // error message
            if ( firstTry ) 
            {
                sprintf(message, "Problem on %d trying again .", echoPort);
                firstTry = false ;
            }
            else 
            {
                strcpy(message, ".");
            }
            write(2, message, strlen(message));
            SLEEP(3);
            continue ;
        }
        break ;
    }
    
    // dummy socket for bts
    isockinet   *tpisockinet [3];
    
    for ( echoPort = 9001 ; echoPort <= 9003 ; echoPort++ ) 
    {
        tpisockinet [echoPort - 9001] = new isockinet(sockbuf::sock_stream);
        while ( 1 ) 
        {
            const sockerr   &inetError
                = tpisockinet [echoPort - 9001] -> bind(echoPort);
            if ( inetError.errnoval() ) 
            {
                char    message [50]; // error message
                if ( firstTry ) 
                {
                    sprintf(message, "Problem on %d trying again ."
                        , echoPort);
                    firstTry = false ;
                }
                else 
                {
                    strcpy(message, ".");
                }
                write(2, message, strlen(message));
                SLEEP(3);
                continue ;
            }
            break ;
        }
        isin -> AddInputSock(tpisockinet [echoPort - 9001] -> Socket());
    }
    cout << "localhost = " << isin -> localhost() << endl << "localport = "
        << isin -> localport() << endl ;
    
    char          inputBuffer [SIZE_INPUT];
    
    // set time for reading wait
    struct timeval tval ;
    
    tval.tv_sec = 60 ;
    tval.tv_usec = 0 ;
    isin -> TimeVal(tval);
    
    int fileNumber = open(argv [1], O_CREAT | O_RDWR | O_BINARY | O_TRUNC);
    
    // echo
    while ( true ) 
    {
        int nbRead ; // number of char read
        if ( (nbRead = isin -> read((char *)&inputBuffer, SIZE_INPUT)) > 0 ) 
        {
            write(fileNumber, (char *)&inputBuffer, nbRead);
        }
    }
}
