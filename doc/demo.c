#include "stdio.h"

// 
// main : main program showing the usage of prettyprinter
//
int main ( int argc, char **argv )
{
    
    int nbLoop ;  // number of loop to be done
    int nothing ; // variable with no use
    
    nbLoop = 1 ;
    nothing = 5 ;
    
    /*  A comment on loop
       *  the end of comment is 
       *  here 
       */
    for ( nbLoop = 4 ; nbLoop > 0 ; nbLoop-- ) {
        printf("Value of nbLoop %d \n", nbLoop);
    }
    switch ( nbLoop ) {
        case 4 : printf("Strange \n");
    }
}
