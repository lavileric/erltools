/*************************************************************************/
/*                                                                       */
/*        Chopper.c - Built by Eric Lavillonniere on Tandon 386 - 89     */
/*                                                                       */
/*************************************************************************/
language json;

#include "token.h"
#include <sys/types.h>
#include "json.h"
#include <fcntl.h>
#include "deccplus.h"

char    *theFileName = (char *)0 ; ///< theFileName
int     compiledLine = 0 ;         ///< compiledLine
void    ChopTree (PTREE) ;
void    decomp (PTREE) ;

int main ( int argc, char **argv )
{
    PTREE       tree ;
    char        name [50];
    char        *ptName ;
    DecompCplus decomp ;
    
    dumpCoord             =  0 ;
    
    // cplusGen              =  1 ;
    DecompCplus::ptDecomp =  (DecompCplus *)(&decomp);
    MetaInit();
    json().AsLanguage();
    ///  ReadIncludeS("c.set", 1);
    //cplusGen = metaQuick =  0 ;
    if ( argc < 2 ) {
        sprintf(name, "Bad name for your source file \n");
        _write(2, name, strlen(name));
        exit(0);
    } else {
        ptName =  *(argv + 1);
    }
    tree =  json().ReadFile(ptName);
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
    decomp_json(tree);
    NewLine();
}

/*************************************************************************/
/*  decomp : display your program  : here dump tree                      */
/*************************************************************************/
void decomp ( PTREE tree )
{
    DumpTree(tree);
}


