
#line 23 "chopper.ch"
/*************************************************************************/
#line 23 "chopper.ch"
/*                                                                       */
#line 23 "chopper.ch"
/*        Produced by Metachop version 2.0  -    1989-1995               */
#line 23 "chopper.ch"
/*     Tree      Meta     Chopper      developped    by                  */
#line 23 "chopper.ch"
/*                  Eric Lavillonniere                                   */
#line 23 "chopper.ch"
/*                                                                       */
#line 23 "chopper.ch"
/*************************************************************************/
#line 23 "chopper.ch"
#line 23 "chopper.ch"
#include "token.h"
#line 23 "chopper.ch"
extern int _retVal[50];
#line 23 "chopper.ch"
extern PPTREE _storeVal[50],_nextVal;
#line 23 "chopper.ch"
extern PPTREE stackTree[1024];
#line 23 "chopper.ch"
extern int ptStackTree;
#line 23 "chopper.ch"
#define decomp decomp_chunk
#line 23 "chopper.ch"
#line 23 "chopper.ch"
#ifndef for_elem
#line 23 "chopper.ch"
#line 23 "chopper.ch"
#define for_elem _for_elem
#line 23 "chopper.ch"
#endif
#ifdef INCONNU
#line 23 "chopper.ch"
#line 23 "chopper.ch"
PTREE   for_elem ;
#line 23 "chopper.ch"
#line 23 "chopper.ch"
#endif
#include <stdio.h>
#include "token.h"
#include <stdio.h>
#include "token.h"
#include <sys/types.h>

#ifndef BORLAND
#line 23 "chopper.ch"
#line 33 "chopper.ch"
#include <unistd.h>
#line 33 "chopper.ch"
#endif
#if !defined(SUN) || defined(LINUX)
#line 33 "chopper.ch"
#line 36 "chopper.ch"
#include <stdlib.h>
#line 36 "chopper.ch"
#endif

#include "chunk.h"
#include "deccplus.h"
#include <fcntl.h>

static chunk    *theParser ;
int ChopTree (PTREE) ;
void    decomp (PTREE) ;
void    copy () ;
int firstLine, lastLine, refLine ;
int find_parenthesis, nb_parenthesis ;
int comment_start ;
int lexcommentCallLex, oldLastLine ;

class QuickProgChunk : public cplus {
    
    public :
    
#line 56 "chopper.ch"
#line 56 "chopper.ch"
        QuickProgChunk () {
#line 56 "chopper.ch"
                         }
#line 56 "chopper.ch"
#line 58 "chopper.ch"
#line 58 "chopper.ch"
        ~QuickProgChunk () {
#line 58 "chopper.ch"
                           }
#line 58 "chopper.ch"
        
#line 60 "chopper.ch"
#line 60 "chopper.ch"
        virtual PPTREE main_entry ( int error_free )
#line 60 "chopper.ch"
        {
#line 60 "chopper.ch"
#line 62 "chopper.ch"
            return quick_prog(error_free);
#line 62 "chopper.ch"
#line 63 "chopper.ch"
        }
};

#line 66 "chopper.ch"
#line 66 "chopper.ch"
static  void ReadIncludeSN ( char *name, int here )
#line 66 "chopper.ch"
{
#line 66 "chopper.ch"
#line 68 "chopper.ch"
    QuickProgChunk().ReadInclude(name, here);
#line 68 "chopper.ch"
#line 69 "chopper.ch"
}
#line 69 "chopper.ch"

extern int  simplifyExpression ;

#line 73 "chopper.ch"
#line 73 "chopper.ch"
main ( int argc, char **argv )
#line 73 "chopper.ch"
{
#line 73 "chopper.ch"
    register PPTREE _inter ;
#line 73 "chopper.ch"
#line 73 "chopper.ch"
#line 75 "chopper.ch"
    PTREE   tree ;
#line 75 "chopper.ch"
#line 75 "chopper.ch"
#line 76 "chopper.ch"
    char    name [50];
#line 76 "chopper.ch"
#line 77 "chopper.ch"
    char    *ptName ;
#line 77 "chopper.ch"
#line 78 "chopper.ch"
    DecompCplus decomp ;
#line 78 "chopper.ch"
#line 80 "chopper.ch"
    dumpCoord = 0 ;
#line 80 "chopper.ch"
#line 81 "chopper.ch"
    DecompCplus::ptDecomp = &decomp ;
#line 81 "chopper.ch"
#line 82 "chopper.ch"
    MetaInit();
#line 82 "chopper.ch"
#line 83 "chopper.ch"
    output = 2 ;
#line 83 "chopper.ch"
#line 84 "chopper.ch"
    theParser = new chunk ;
#line 84 "chopper.ch"
#line 85 "chopper.ch"
    SwitchLang("chunk");
#line 85 "chopper.ch"
#line 86 "chopper.ch"
    ReadIncludeSN("c.set", 1);
#line 86 "chopper.ch"
#line 87 "chopper.ch"
    if ( argc < 2 ) {
#line 87 "chopper.ch"
#line 88 "chopper.ch"
                        sprintf(name, "Bad name for your source file \n");
#line 88 "chopper.ch"
#line 89 "chopper.ch"
                        write(2, name, strlen(name));
#line 89 "chopper.ch"
#line 90 "chopper.ch"
                        exit(1);
#line 90 "chopper.ch"
#line 90 "chopper.ch"
                      } else 
#line 91 "chopper.ch"
    {
#line 91 "chopper.ch"
#line 92 "chopper.ch"
        ptName = *(argv + 1);
#line 92 "chopper.ch"
#line 92 "chopper.ch"
    }
#line 92 "chopper.ch"
#line 96 "chopper.ch"
    if ( argc >= 3 ) {
#line 96 "chopper.ch"
#line 97 "chopper.ch"
                        refLine = atoi(*(argv + 2));
#line 97 "chopper.ch"
#line 97 "chopper.ch"
                       } else 
#line 98 "chopper.ch"
    {
#line 98 "chopper.ch"
#line 99 "chopper.ch"
        sprintf(name, "Initial number line unknown \n");
#line 99 "chopper.ch"
#line 100 "chopper.ch"
        write(2, name, strlen(name));
#line 100 "chopper.ch"
#line 101 "chopper.ch"
        exit(1);
#line 101 "chopper.ch"
#line 101 "chopper.ch"
    }
#line 101 "chopper.ch"
#line 105 "chopper.ch"
    (tree=chunk().ReadFile(ptName));
#line 105 "chopper.ch"
#line 105 "chopper.ch"
#line 106 "chopper.ch"
    AddRef(tree);
#line 106 "chopper.ch"
#line 110 "chopper.ch"
    MetaEnd();
#line 110 "chopper.ch"
#line 111 "chopper.ch"
    if ( !firstError ) 
#line 111 "chopper.ch"
#line 112 "chopper.ch"
        return 1 ;
#line 112 "chopper.ch"
    else 
#line 113 "chopper.ch"
    {
#line 113 "chopper.ch"
#line 114 "chopper.ch"
        char    string [50];
#line 114 "chopper.ch"
#line 115 "chopper.ch"
        output = 1 ;
#line 115 "chopper.ch"
#line 116 "chopper.ch"
        sprintf(string, "%d,%dd", firstLine, lastLine);
#line 116 "chopper.ch"
#line 117 "chopper.ch"
        WriteString(string);
#line 117 "chopper.ch"
#line 117 "chopper.ch"
        LNewLine(1);
#line 117 "chopper.ch"
#line 117 "chopper.ch"
#line 118 "chopper.ch"
        if ( firstLine > 1 ) 
#line 118 "chopper.ch"
#line 119 "chopper.ch"
            sprintf(string, "%da", firstLine - 1);
#line 119 "chopper.ch"
        else 
#line 119 "chopper.ch"
#line 121 "chopper.ch"
            sprintf(string, "%di", firstLine);
#line 121 "chopper.ch"
#line 121 "chopper.ch"
#line 122 "chopper.ch"
        WriteString(string);
#line 122 "chopper.ch"
#line 122 "chopper.ch"
        LNewLine(1);
#line 122 "chopper.ch"
#line 122 "chopper.ch"
#line 123 "chopper.ch"
        ((_inter = (PPTREE)tree,1) && 
#line 123 "chopper.ch"
            ((tree=SonTree(_inter,1)),1) &&
#line 123 "chopper.ch"
            1);
#line 123 "chopper.ch"
        ;
#line 123 "chopper.ch"
#line 124 "chopper.ch"
        decomp.ChopTree(tree, 1);
#line 124 "chopper.ch"
#line 125 "chopper.ch"
        PrintString(".");
#line 125 "chopper.ch"
#line 125 "chopper.ch"
        LNewLine(1);
#line 125 "chopper.ch"
#line 125 "chopper.ch"
#line 126 "chopper.ch"
        PrintString("wq");
#line 126 "chopper.ch"
#line 126 "chopper.ch"
        LNewLine(1);
#line 126 "chopper.ch"
#line 126 "chopper.ch"
#line 127 "chopper.ch"
        return 0 ;
#line 127 "chopper.ch"
#line 127 "chopper.ch"
    }
#line 127 "chopper.ch"
#line 129 "chopper.ch"
}
#line 129 "chopper.ch"
/*Well done my boy */ 
#line 129 "chopper.ch"

