
#line 24 "chopper.ch"
/*************************************************************************/
#line 24 "chopper.ch"
/*                                                                       */
#line 24 "chopper.ch"
/*        Produced by Metachop version 2.0  -    1989-1995               */
#line 24 "chopper.ch"
/*     Tree      Meta     Chopper      developped    by                  */
#line 24 "chopper.ch"
/*                  Eric Lavillonniere                                   */
#line 24 "chopper.ch"
/*                                                                       */
#line 24 "chopper.ch"
/*************************************************************************/
#line 24 "chopper.ch"

#line 24 "chopper.ch"
#include "token.h"
#line 24 "chopper.ch"
#define decomp decomp_metachop
#line 24 "chopper.ch"

#line 24 "chopper.ch"
#ifndef for_elem
#line 24 "chopper.ch"
#line 24 "chopper.ch"
#define for_elem _for_elem

#line 24 "chopper.ch"
#line 24 "chopper.ch"

#line 24 "chopper.ch"
#endif
#ifdef INCONNU
#line 24 "chopper.ch"
#line 24 "chopper.ch"
PTREE   for_elem ;
#line 24 "chopper.ch"

#line 24 "chopper.ch"
#line 24 "chopper.ch"

#line 24 "chopper.ch"
#endif
#include "decmetac.h"
#include <fcntl.h>

DecompMetachop  *DecompMetachop::ptDecomp = 0 ;
DecompChopb *DecompChopb::ptDecomp = 0 ;
char    *parseLanguage = (char *)0 ;
void    ReadIncludeS (const char *, int) ;
int metaQuick = 0 ;
extern int  cplusGen ;
int compiledLine = 0 ;
char    *theFileName = (char *)0 ;

#line 39 "chopper.ch"

#line 39 "chopper.ch"
int main ( int argc, char **argv )
#line 39 "chopper.ch"
{
#line 39 "chopper.ch"
#line 39 "chopper.ch"
    int _nextVal ;
    
#line 39 "chopper.ch"
#line 41 "chopper.ch"
    
    PPTREE  tree ;
    
#line 41 "chopper.ch"
#line 42 "chopper.ch"
    char    name [50];
    
#line 42 "chopper.ch"
#line 43 "chopper.ch"
    char    *ptName ;
    
#line 43 "chopper.ch"
#line 44 "chopper.ch"
    DecompMetachop  decomp ;
    
#line 44 "chopper.ch"
#line 46 "chopper.ch"
    erltoolsStorageKeeper = true ;
#line 46 "chopper.ch"
#line 47 "chopper.ch"
    SetSingleThread(true);
#line 47 "chopper.ch"
#line 50 "chopper.ch"
    dumpCoord = 1 ;
#line 50 "chopper.ch"
#line 51 "chopper.ch"
    cplusGen = 1 ;
#line 51 "chopper.ch"
#line 52 "chopper.ch"
    DecompMetachop::ptDecomp = &decomp ;
#line 52 "chopper.ch"
#line 53 "chopper.ch"
    DecompChopb::ptDecomp = (DecompChopb *)(&decomp);
#line 53 "chopper.ch"
#line 54 "chopper.ch"
    DecompCplus::ptDecomp = (DecompCplus *)(&decomp);
#line 54 "chopper.ch"
#line 55 "chopper.ch"
    MetaInit((char *)0);
#line 55 "chopper.ch"
#line 56 "chopper.ch"
    metachop().AsLanguage();
#line 56 "chopper.ch"
#line 57 "chopper.ch"
    ReadIncludeS("c.set", 1);
#line 57 "chopper.ch"
#line 58 "chopper.ch"
    cplusGen = metaQuick = 0 ;
#line 58 "chopper.ch"
#line 59 "chopper.ch"
follow : 
#line 59 "chopper.ch"
#line 60 "chopper.ch"
    if ( argc >= 2 ) {
#line 60 "chopper.ch"
#line 61 "chopper.ch"
                        if ( !strcmp(*(argv + 1), "-c++") ) {
#line 61 "chopper.ch"
#line 62 "chopper.ch"
                                                                    cplusGen = 1 ;
#line 62 "chopper.ch"
#line 63 "chopper.ch"
                                                                    argc-- ;
#line 63 "chopper.ch"
#line 64 "chopper.ch"
                                                                    argv++ ;
#line 64 "chopper.ch"
#line 65 "chopper.ch"
                                                                    goto follow ;
                                                                    
#line 65 "chopper.ch"
#line 66 "chopper.ch"
                                                                    
#line 66 "chopper.ch"
#line 66 "chopper.ch"
                                                                   } else 
#line 66 "chopper.ch"
                        if ( !strcmp(*(argv + 1), "-f") ) {
#line 66 "chopper.ch"
#line 67 "chopper.ch"
                                                                    metaQuick = 1 ;
#line 67 "chopper.ch"
#line 68 "chopper.ch"
                                                                    argc-- ;
#line 68 "chopper.ch"
#line 69 "chopper.ch"
                                                                    argv++ ;
#line 69 "chopper.ch"
#line 70 "chopper.ch"
                                                                    goto follow ;
                                                                    
#line 70 "chopper.ch"
#line 71 "chopper.ch"
                                                                    
#line 71 "chopper.ch"
#line 71 "chopper.ch"
                                                                 }
#line 71 "chopper.ch"
#line 72 "chopper.ch"
                        
#line 72 "chopper.ch"
#line 72 "chopper.ch"
                       }
#line 72 "chopper.ch"
#line 73 "chopper.ch"
    if ( argc < 2 ) {
#line 73 "chopper.ch"
#line 74 "chopper.ch"
                        sprintf(name, "Bad name for your source file \n");
#line 74 "chopper.ch"
#line 75 "chopper.ch"
                        write(2, name, strlen(name));
#line 75 "chopper.ch"
#line 76 "chopper.ch"
                        exit(0);
#line 76 "chopper.ch"
#line 77 "chopper.ch"
                        
#line 77 "chopper.ch"
#line 77 "chopper.ch"
                      } else 
#line 77 "chopper.ch"
    {
#line 77 "chopper.ch"
#line 78 "chopper.ch"
        theFileName = ptName = *(argv + 1);
#line 78 "chopper.ch"
#line 79 "chopper.ch"
        
#line 79 "chopper.ch"
#line 79 "chopper.ch"
    }
    
#line 79 "chopper.ch"
#line 80 "chopper.ch"
    emacsCompatibleError = true ;
#line 80 "chopper.ch"
#line 81 "chopper.ch"
    tree = metachop().ReadFile(theFileName);
#line 81 "chopper.ch"
#line 82 "chopper.ch"
    AddRef(tree);
#line 82 "chopper.ch"
#line 85 "chopper.ch"
    TrimPosComment(tree);
#line 85 "chopper.ch"
#line 88 "chopper.ch"
    DecompMetachop::ptDecomp -> ChopTree(tree);
#line 88 "chopper.ch"
#line 89 "chopper.ch"
    MetaEnd();
#line 89 "chopper.ch"
#line 90 "chopper.ch"
    if ( !firstError ) 
#line 90 "chopper.ch"
#line 91 "chopper.ch"
        return 1 ;
    
#line 91 "chopper.ch"
    else 
#line 91 "chopper.ch"
#line 93 "chopper.ch"
        return 0 ;
        
#line 93 "chopper.ch"
    
#line 93 "chopper.ch"
#line 94 "chopper.ch"
    return 0 ;
    
#line 94 "chopper.ch"
#line 95 "chopper.ch"
    
#line 95 "chopper.ch"
#line 95 "chopper.ch"
}
#line 95 "chopper.ch"

#line 95 "chopper.ch"
#line 95 "chopper.ch"
static void chopper_Anchor () { int i = 1;} 
#line 95 "chopper.ch"
/*Well done my boy */ 
#line 95 "chopper.ch"
