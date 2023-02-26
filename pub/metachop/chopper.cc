
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
    dumpCoord = 1 ;
#line 46 "chopper.ch"
#line 47 "chopper.ch"
    cplusGen = 1 ;
#line 47 "chopper.ch"
#line 48 "chopper.ch"
    DecompMetachop::ptDecomp = &decomp ;
#line 48 "chopper.ch"
#line 49 "chopper.ch"
    DecompChopb::ptDecomp = (DecompChopb *)(&decomp);
#line 49 "chopper.ch"
#line 50 "chopper.ch"
    DecompCplus::ptDecomp = (DecompCplus *)(&decomp);
#line 50 "chopper.ch"
#line 51 "chopper.ch"
    MetaInit((char *)0);
#line 51 "chopper.ch"
#line 52 "chopper.ch"
    metachop().AsLanguage();
#line 52 "chopper.ch"
#line 53 "chopper.ch"
    ReadIncludeS("c.set", 1);
#line 53 "chopper.ch"
#line 54 "chopper.ch"
    cplusGen = metaQuick = 0 ;
#line 54 "chopper.ch"
#line 55 "chopper.ch"
follow : 
#line 55 "chopper.ch"
#line 56 "chopper.ch"
    if ( argc >= 2 ) {
#line 56 "chopper.ch"
#line 57 "chopper.ch"
                        if ( !strcmp(*(argv + 1), "-c++") ) {
#line 57 "chopper.ch"
#line 58 "chopper.ch"
                                                                    cplusGen = 1 ;
#line 58 "chopper.ch"
#line 59 "chopper.ch"
                                                                    argc-- ;
#line 59 "chopper.ch"
#line 60 "chopper.ch"
                                                                    argv++ ;
#line 60 "chopper.ch"
#line 61 "chopper.ch"
                                                                    goto follow ;
                                                                    
#line 61 "chopper.ch"
#line 62 "chopper.ch"
                                                                    
#line 62 "chopper.ch"
#line 62 "chopper.ch"
                                                                   } else 
#line 62 "chopper.ch"
                        if ( !strcmp(*(argv + 1), "-f") ) {
#line 62 "chopper.ch"
#line 63 "chopper.ch"
                                                                    metaQuick = 1 ;
#line 63 "chopper.ch"
#line 64 "chopper.ch"
                                                                    argc-- ;
#line 64 "chopper.ch"
#line 65 "chopper.ch"
                                                                    argv++ ;
#line 65 "chopper.ch"
#line 66 "chopper.ch"
                                                                    goto follow ;
                                                                    
#line 66 "chopper.ch"
#line 67 "chopper.ch"
                                                                    
#line 67 "chopper.ch"
#line 67 "chopper.ch"
                                                                 }
#line 67 "chopper.ch"
#line 68 "chopper.ch"
                        
#line 68 "chopper.ch"
#line 68 "chopper.ch"
                       }
#line 68 "chopper.ch"
#line 69 "chopper.ch"
    if ( argc < 2 ) {
#line 69 "chopper.ch"
#line 70 "chopper.ch"
                        sprintf(name, "Bad name for your source file \n");
#line 70 "chopper.ch"
#line 71 "chopper.ch"
                        write(2, name, strlen(name));
#line 71 "chopper.ch"
#line 72 "chopper.ch"
                        exit(0);
#line 72 "chopper.ch"
#line 73 "chopper.ch"
                        
#line 73 "chopper.ch"
#line 73 "chopper.ch"
                      } else 
#line 73 "chopper.ch"
    {
#line 73 "chopper.ch"
#line 74 "chopper.ch"
        theFileName = ptName = *(argv + 1);
#line 74 "chopper.ch"
#line 75 "chopper.ch"
        
#line 75 "chopper.ch"
#line 75 "chopper.ch"
    }
    
#line 75 "chopper.ch"
#line 76 "chopper.ch"
    emacsCompatibleError = true ;
#line 76 "chopper.ch"
#line 77 "chopper.ch"
    tree = metachop().ReadFile(theFileName);
#line 77 "chopper.ch"
#line 78 "chopper.ch"
    AddRef(tree);
#line 78 "chopper.ch"
#line 81 "chopper.ch"
    TrimPosComment(tree);
#line 81 "chopper.ch"
#line 84 "chopper.ch"
    DecompMetachop::ptDecomp -> ChopTree(tree);
#line 84 "chopper.ch"
#line 85 "chopper.ch"
    MetaEnd();
#line 85 "chopper.ch"
#line 86 "chopper.ch"
    if ( !firstError ) 
#line 86 "chopper.ch"
#line 87 "chopper.ch"
        return 1 ;
    
#line 87 "chopper.ch"
    else 
#line 87 "chopper.ch"
#line 89 "chopper.ch"
        return 0 ;
        
#line 89 "chopper.ch"
    
#line 89 "chopper.ch"
#line 90 "chopper.ch"
    return 0 ;
    
#line 90 "chopper.ch"
#line 91 "chopper.ch"
    
#line 91 "chopper.ch"
#line 91 "chopper.ch"
}
#line 91 "chopper.ch"

#line 91 "chopper.ch"
#line 91 "chopper.ch"
static void chopper_Anchor () { int i = 1;} 
#line 91 "chopper.ch"
/*Well done my boy */ 
#line 91 "chopper.ch"

