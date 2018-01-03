#include "erlsock.h"
#include <fcntl.h>

static int          echoPort = 9000 ;
static osockinet    &osin = *new osockinet(sockbuf::sock_stream); // input socket

#define SIZE_INPUT 5000

void main ( int argc, char **argv )
{
    
    // create in input socket
    // open socket
    bool    firstTry = true ;

	if (argc < 2 ) {
	    EString usage("Usage : port ip file \n");
	    write(2,usage.c_str(),usage.length());
		return;
	}
    
	char * address = argv[1];
	char * ipAddress = argv[2];
	char * fileName = argv[3];
    osin -> connect(atoi(address), inet_addr(ipAddress), 3);
   
    cout << "localhost = " << osin -> localhost() << endl << "localport = "
        << osin -> localport() << endl ;
    
    char          inputBuffer [SIZE_INPUT];
    
    int fileNumber = open(fileName,  O_RDONLY | O_BINARY);
    
    // echo
    while ( true ) {
        int nbRead ; // number of char read
        if ( (nbRead = read(fileNumber,(char *) &inputBuffer,SIZE_INPUT)) > 0 ) {
            osin -> write((char *)&inputBuffer, nbRead, 1);
        } else 
			SLEEP(1);
    }
}
