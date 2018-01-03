/*************************************************************************/
/*                                                                       */
/*        Chopper.c - Built by Eric Lavillonniere on Tandon 386 - 89     */
/*                                                                       */
/*************************************************************************/
language foo;

#include "token.h"
#include <sys/types.h>
#include "foo.h"
#include <fcntl.h>

void    ChopTree (PTREE) ;
void    decomp (PTREE) ;

int main ( int argc, char **argv )
{
    PTREE   tree ;
    char    name [50];
    char    *ptName ;
    
    MetaInit();
    foo().AsLanguage();
    if ( argc < 2 ) {
        sprintf(name, "Bad name for your source file \n");
        _write(2, name, strlen(name));
        exit(0);
    } else {
        ptName =  *(argv + 1);
    }
    tree =  foo().ReadFile(ptName);
    AddRef(tree);
    ChopTree(tree);
    MetaEnd();
    if ( !firstError ) 
        return 1 ;
    else 
        return 0 ;
}

/*************************************************************************/
/*   ChopTree : chop the tree : here call decomp                         */
/*************************************************************************/
void ChopTree ( PTREE tree )
{
    decomp_foo(tree);
    NewLine();
}

/*************************************************************************/
/*  decomp : display your program  : here dump tree                      */
/*************************************************************************/
void decomp ( PTREE tree )
{
    DumpTree(tree);
}


