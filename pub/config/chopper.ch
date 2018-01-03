/*************************************************************************/
/*                                                                       */
/*        Chopper.c - Built by Eric Lavillonniere on Tandon 386 - 89     */
/*                                                                       */
/*************************************************************************/
language config;

#include <stdio.h>
#include "token.h"
#include <sys/types.h>
#include "config.h"
#include <fcntl.h>

config      *configParser ;
void        ChopTree (PTREE) ;
void        decomp () ;
extern int  firstError ;
extern char *includeEnv ;
char        *theLanguage = (char *)0 ;

int main ( int argc, char **argv )
{
    PTREE   tree ;
    char    name [50];
    char    *ptName ;
    
    MetaInit();
    includeEnv =  getenv("INCLUDE");
    config().AsLanguage();
    if ( argc < 2 ) {
        sprintf(name, "Bad name for your source file \n");
        _write(2, name, strlen(name));
        exit(0);
    } else {
        ptName =  *(argv + 1);
    }
    theLanguage =  *(argv + 2);
    tree        =  config().ReadFile(ptName);
    AddRef(tree);
    ChopTree(tree);
    MetaEnd();
    if ( !firstError ) 
        return 1 ;
    else 
        return 0 ;
}

/********** when creating a tree chopper use the following ***************/
/*                                                                       */
/*  SwitchLang("metachop");                                              */
/*  return prog_metachop(1);                                             */
/*                                                                       */
/*************************************************************************/
/*************************************************************************/
/*   ChopTree : chop the tree : here call decomp                         */
/*************************************************************************/
void ChopTree ( tree )
PTREE   tree ;
{
} /********** when creating a tree chopper use the following ***************/ /*                                                                       */ /*  decomp_metachop(tree) ;                                              */ /*                                                                       */ /*************************************************************************/ 

/*************************************************************************/
/*  decomp : display your program  : here dump tree                      */
/*************************************************************************/
void SqueezeMeta ( tree )
PTREE   tree ;
{
}

void PullComment ( tree )
PTREE   tree ;
{
}


