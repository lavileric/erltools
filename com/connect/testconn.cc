// erlsock.cc
#include "erlsock.h"

main ()
{
    osockinet   *pSocket ;
    
    while ( true ) {
        pSocket = new osockinet(sockbuf::sock_stream);
        pSocket -> connect(4515, inet_addr("172.20.64.151"));
        
        char    buffer [500];
        char    *ptBuffer = buffer ;
        int     nbRead ;
        strcpy(buffer, "SCRIPT;Script;Script!");
        pSocket -> write(ptBuffer, strlen(ptBuffer), true);
        nbRead = pSocket -> read(ptBuffer, 500, false);
        write(1, ptBuffer, nbRead);
        write(1, "\n", 1);
        int i = 5 ;
	  while ( i-- ) {
            strcpy(buffer, "Quick erlsock basic test");
            pSocket -> write(ptBuffer, strlen(ptBuffer), true);
			// Sleep (3000);
            nbRead = pSocket -> read(ptBuffer, 500, false);
            write(1, ptBuffer, nbRead);
            write(1, "\n", 1);
            // Sleep(3000);
        }
        delete pSocket ;
	// 	Sleep(1000);
    }
}
