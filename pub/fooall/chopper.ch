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

void BadFileHandle ()
{
    char    name [50];
    
    sprintf(name, "Bad name for your source file \n");
    _write(2, name, strlen(name));
    exit(0);
}

int main ( int argc, char **argv )
{
    PTREE   tree ;
    char    *ptName = 0 ;
    bool    dump (false) ;
    int     filePos = 1 ;
    
    // init 
    MetaInit();
    foo().AsLanguage();
    
    // get file name 
    if ( argc < filePos + 1 ) {
        BadFileHandle();
    } else {
        EString firstArg = *(argv + filePos);
        if ( firstArg == "-dump" ) {
            dump =  true ;
            filePos++ ;
        }
        if ( argc >= filePos + 1 ) 
            ptName =  *(argv + filePos);
        else 
            BadFileHandle();
    }
    
    // parse tree
    tree =  calc().ReadFile(ptName);
    AddRef(tree);
    
    // treatement
    if ( dump ) 
        CLDumpTree(tree);
    else 
        ChopTree(tree);
    
    // -- 
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

