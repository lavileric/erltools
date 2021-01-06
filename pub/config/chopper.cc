
#line 5 "chopper.ch"
/*************************************************************************/
#line 5 "chopper.ch"
/*                                                                       */
#line 5 "chopper.ch"
/*        Produced by Metachop version 2.0  -    1989-1995               */
#line 5 "chopper.ch"
/*     Tree      Meta     Chopper      developped    by                  */
#line 5 "chopper.ch"
/*                  Eric Lavillonniere                                   */
#line 5 "chopper.ch"
/*                                                                       */
#line 5 "chopper.ch"
/*************************************************************************/
#line 5 "chopper.ch"

#line 5 "chopper.ch"
#include "token.h"
#line 5 "chopper.ch"
#define decomp decomp_config
#line 5 "chopper.ch"

#line 5 "chopper.ch"
#ifndef for_elem
#line 5 "chopper.ch"
#line 5 "chopper.ch"
#define for_elem _for_elem

#line 5 "chopper.ch"
#line 5 "chopper.ch"

#line 5 "chopper.ch"
#endif
#ifdef INCONNU
#line 5 "chopper.ch"
#line 5 "chopper.ch"
PTREE   for_elem ;
#line 5 "chopper.ch"

#line 5 "chopper.ch"
#line 5 "chopper.ch"

#line 5 "chopper.ch"
#endif
#include <stdio.h>
#include "token.h"
#include <sys/types.h>
#include "config.h"
#include <fcntl.h>

config  *configParser ;
void    ChopTree (PTREE) ;
void    decomp () ;
extern int  firstError ;
extern char *includeEnv ;
char    *theLanguage = (char *)0 ;

#line 21 "chopper.ch"

#line 21 "chopper.ch"
int main ( int argc, char **argv )
#line 21 "chopper.ch"
{
#line 21 "chopper.ch"
#line 21 "chopper.ch"
    int _nextVal ;
    
#line 21 "chopper.ch"
#line 23 "chopper.ch"
    
    PTREE   tree ;
#line 23 "chopper.ch"
    
#line 23 "chopper.ch"
#line 24 "chopper.ch"
    char    name [50];
    
#line 24 "chopper.ch"
#line 25 "chopper.ch"
    char    *ptName ;
    
#line 25 "chopper.ch"
#line 27 "chopper.ch"
    MetaInit();
#line 27 "chopper.ch"
#line 28 "chopper.ch"
    includeEnv = getenv("INCLUDE");
#line 28 "chopper.ch"
#line 29 "chopper.ch"
    config().AsLanguage();
#line 29 "chopper.ch"
#line 30 "chopper.ch"
    if ( argc < 2 ) {
#line 30 "chopper.ch"
#line 31 "chopper.ch"
                        sprintf(name, "Bad name for your source file \n");
#line 31 "chopper.ch"
#line 32 "chopper.ch"
                        _write(2, name, strlen(name));
#line 32 "chopper.ch"
#line 33 "chopper.ch"
                        exit(0);
#line 33 "chopper.ch"
#line 34 "chopper.ch"
                        
#line 34 "chopper.ch"
#line 34 "chopper.ch"
                      } else 
#line 34 "chopper.ch"
    {
#line 34 "chopper.ch"
#line 35 "chopper.ch"
        ptName = *(argv + 1);
#line 35 "chopper.ch"
#line 36 "chopper.ch"
        
#line 36 "chopper.ch"
#line 36 "chopper.ch"
    }
    
#line 36 "chopper.ch"
#line 37 "chopper.ch"
    theLanguage = *(argv + 2);
#line 37 "chopper.ch"
#line 38 "chopper.ch"
    (tree=config().ReadFile(ptName));
#line 38 "chopper.ch"
    
#line 38 "chopper.ch"
#line 39 "chopper.ch"
    AddRef(tree);
#line 39 "chopper.ch"
#line 40 "chopper.ch"
    ChopTree(tree);
#line 40 "chopper.ch"
#line 41 "chopper.ch"
    MetaEnd();
#line 41 "chopper.ch"
#line 42 "chopper.ch"
    if ( !firstError ) 
#line 42 "chopper.ch"
#line 43 "chopper.ch"
        return 1 ;
    
#line 43 "chopper.ch"
    else 
#line 43 "chopper.ch"
#line 45 "chopper.ch"
        return 0 ;
        
#line 45 "chopper.ch"
    
#line 45 "chopper.ch"
#line 46 "chopper.ch"
    
#line 46 "chopper.ch"
#line 46 "chopper.ch"
}
#line 46 "chopper.ch"

#line 56 "chopper.ch"

#line 56 "chopper.ch"
void ChopTree ( PTREE tree )
#line 56 "chopper.ch"
{
#line 56 "chopper.ch"
#line 56 "chopper.ch"
    int _nextVal ;
    
#line 56 "chopper.ch"
#line 60 "chopper.ch"
    
#line 60 "chopper.ch"
#line 60 "chopper.ch"
}
#line 60 "chopper.ch"

#line 64 "chopper.ch"

#line 64 "chopper.ch"
void SqueezeMeta ( PTREE tree )
#line 64 "chopper.ch"
{
#line 64 "chopper.ch"
#line 64 "chopper.ch"
    int _nextVal ;
    
#line 64 "chopper.ch"
#line 68 "chopper.ch"
    
#line 68 "chopper.ch"
#line 68 "chopper.ch"
}
#line 68 "chopper.ch"

#line 70 "chopper.ch"

#line 70 "chopper.ch"
void PullComment ( PTREE tree )
#line 70 "chopper.ch"
{
#line 70 "chopper.ch"
#line 70 "chopper.ch"
    int _nextVal ;
    
#line 70 "chopper.ch"
#line 73 "chopper.ch"
    
#line 73 "chopper.ch"
#line 73 "chopper.ch"
}
#line 73 "chopper.ch"

#line 73 "chopper.ch"
#line 73 "chopper.ch"
static void chopper_Anchor () { int i = 1;} 
#line 73 "chopper.ch"
/*Well done my boy */ 
#line 73 "chopper.ch"

