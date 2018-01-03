/*************************************************************************/
/*                                                                       */
/*        Chopper.c - Built by Eric Lavillonniere on Tandon 386 - 89     */
/*                                                                       */
/*************************************************************************/
language metab;

#include "token.h"
#include <sys/types.h>
#include "metab.h"
#include "decmetab.h"
#include <fcntl.h>

static metab    *theParser ;
void            IChopTree (PTREE) ;
void            decomp (PTREE) ;
int             coutput, houtput ;
char            *thePath = (char *)0 ;

void ChopTree ( PPTREE tree )
{
}

int VerifyFileLine ( int doit, char *llanguageName )
{
    return 1 ;
}

int metaQuick, loutput ;

void EcrireEntete ( char * )
{
}

DecompMetab *DecompMetab::ptDecomp ;
extern char *theFileName ;

int main ( int argc, char **argv )
{
    PTREE       tree ;
    char        name [50];
    char        *ptName ;
    DecompMetab decompMetab ;
    bool        dumpTree = 0 ;
    
    DecompMetab::ptDecomp =  &decompMetab ;
    dumpCoord             =  0 ;
    MetaInit();
    metab().AsLanguage();
    if ( argc < 2 ) {
        sprintf(name, "Bad name for your source file \n");
        _write(2, name, strlen(name));
        exit(0);
    } else {
        int offset = 1 ;
        while ( true ) {
            ptName =  *(argv + offset);
            if ( EString("-dumptree") == ptName ) 
                dumpTree =  true ;
            else {
                theFileName =  ptName ;
                break ;
            }
            offset += 1 ;
        }
    }
    tree =  metab().ReadFile(ptName);
    AddRef(tree);
    
    // si on a pas trouvé la première erreur décompiler
    if ( firstError ) 
        IChopTree(tree);
    MetaEnd();
    if ( dumpTree ) {
        <NL>
        DumpTree(tree);
        <NL>
    }
    
    // si on a déjà eu une erreur renvoie code d'erreur
    if ( !firstError ) 
        return 1 ;
    else 
        return 0 ;
    return 0 ;
}

/*************************************************************************/
/*   IChopTree : chop the tree : here call decomp                         */
/*************************************************************************/
void        Treatment (PTREE) ;
extern void copy () ;

void IChopTree ( PTREE tree )
{
    copy();
    SwitchLang("metab");
    DecompMetab::ptDecomp->Treat(tree);
    decomp_metab(tree);
    NewLine();
}


