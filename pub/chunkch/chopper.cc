
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
#line 32 "chopper.ch"
#include <unistd.h>
#line 32 "chopper.ch"
#endif
#if !defined(SUN) || defined(LINUX)
#line 32 "chopper.ch"
#line 36 "chopper.ch"
#include <stdlib.h>
#line 36 "chopper.ch"
#endif

#include "chunk.h"
#include "decchopb.h"
#include <fcntl.h>
#include <tablist.h>

int ChopTree (PTREE) ;
void    decomp (PTREE) ;
void    copy () ;
DecompChopb *DecompChopb::ptDecomp = 0 ;
int nb_par_parse ;
static void DisplayHeader () ;
static void DisplayFunctionValue (PTREE) ;
static int  DisplayFunctionError (PTREE) ;
int firstLine, lastLine, refLine ;
int find_parenthesis, nb_parenthesis ;
int comment_start, lexcommentCallLex ;
int oldLastLine ;
char    *parseLanguage = (char *)0 ;
void    ReadIncludeS (char *, int) ;

class QuickProgChunk : public cplus {
    
    public :
    
#line 66 "chopper.ch"
#line 66 "chopper.ch"
        QuickProgChunk () {
#line 66 "chopper.ch"
                         }
#line 66 "chopper.ch"
#line 68 "chopper.ch"
#line 68 "chopper.ch"
        ~QuickProgChunk () {
#line 68 "chopper.ch"
                           }
#line 68 "chopper.ch"
        
#line 70 "chopper.ch"
#line 70 "chopper.ch"
        virtual PPTREE main_entry ( int error_free )
#line 70 "chopper.ch"
        {
#line 70 "chopper.ch"
#line 72 "chopper.ch"
            return quick_prog(error_free);
#line 72 "chopper.ch"
#line 73 "chopper.ch"
        }
};

#line 76 "chopper.ch"
#line 76 "chopper.ch"
static  void ReadIncludeSN ( char *name, int here )
#line 76 "chopper.ch"
{
#line 76 "chopper.ch"
#line 78 "chopper.ch"
    QuickProgChunk().ReadInclude(name, here);
#line 78 "chopper.ch"
#line 79 "chopper.ch"
}
#line 79 "chopper.ch"

#line 88 "chopper.ch"
#line 88 "chopper.ch"
main ( int argc, char **argv )
#line 88 "chopper.ch"
{
#line 88 "chopper.ch"
    register PPTREE _inter ;
#line 88 "chopper.ch"
#line 88 "chopper.ch"
#line 92 "chopper.ch"
    PTREE   tree ;
#line 92 "chopper.ch"
#line 92 "chopper.ch"
#line 93 "chopper.ch"
    char    name [50];
#line 93 "chopper.ch"
#line 95 "chopper.ch"
    char    *ptName ;
#line 95 "chopper.ch"
#line 96 "chopper.ch"
    DecompChopb decomp ;
#line 96 "chopper.ch"
#line 99 "chopper.ch"
    dumpCoord = 0 ;
#line 99 "chopper.ch"
#line 100 "chopper.ch"
    DecompChopb::ptDecomp = (DecompChopb *)(&decomp);
#line 100 "chopper.ch"
#line 101 "chopper.ch"
    DecompCplus::ptDecomp = (DecompCplus *)(&decomp);
#line 101 "chopper.ch"
#line 102 "chopper.ch"
    MetaInit();
#line 102 "chopper.ch"
#line 103 "chopper.ch"
    output = 2 ;
#line 103 "chopper.ch"
#line 104 "chopper.ch"
    chunk().AsLanguage();
#line 104 "chopper.ch"
#line 105 "chopper.ch"
    ReadIncludeSN("c.set", 1);
#line 105 "chopper.ch"
#line 108 "chopper.ch"
    if ( argc < 2 ) {
#line 108 "chopper.ch"
#line 111 "chopper.ch"
                        sprintf(name, "Bad name for your source file \n");
#line 111 "chopper.ch"
#line 112 "chopper.ch"
                        write(2, name, strlen(name));
#line 112 "chopper.ch"
#line 113 "chopper.ch"
                        exit(0);
#line 113 "chopper.ch"
#line 113 "chopper.ch"
                      } else 
#line 114 "chopper.ch"
    {
#line 114 "chopper.ch"
#line 115 "chopper.ch"
        ptName = *(argv + 1);
#line 115 "chopper.ch"
#line 115 "chopper.ch"
    }
#line 115 "chopper.ch"
#line 119 "chopper.ch"
    if ( argc >= 3 ) {
#line 119 "chopper.ch"
#line 120 "chopper.ch"
                        refLine = atoi(*(argv + 2));
#line 120 "chopper.ch"
#line 120 "chopper.ch"
                       } else 
#line 121 "chopper.ch"
    {
#line 121 "chopper.ch"
#line 122 "chopper.ch"
        sprintf(name, "Initial number line unknown \n");
#line 122 "chopper.ch"
#line 123 "chopper.ch"
        write(2, name, strlen(name));
#line 123 "chopper.ch"
#line 124 "chopper.ch"
        exit(1);
#line 124 "chopper.ch"
#line 124 "chopper.ch"
    }
#line 124 "chopper.ch"
#line 128 "chopper.ch"
    (tree=chunk().ReadFile(ptName));
#line 128 "chopper.ch"
#line 128 "chopper.ch"
#line 129 "chopper.ch"
    AddRef(tree);
#line 129 "chopper.ch"
#line 133 "chopper.ch"
    MetaEnd();
#line 133 "chopper.ch"
#line 134 "chopper.ch"
    if ( !firstError ) 
#line 134 "chopper.ch"
#line 135 "chopper.ch"
        return 1 ;
#line 135 "chopper.ch"
    else 
#line 136 "chopper.ch"
    {
#line 136 "chopper.ch"
#line 137 "chopper.ch"
        char    string [50];
#line 137 "chopper.ch"
#line 138 "chopper.ch"
        output = 1 ;
#line 138 "chopper.ch"
#line 139 "chopper.ch"
        sprintf(string, "%d,%dd", firstLine, lastLine);
#line 139 "chopper.ch"
#line 140 "chopper.ch"
        WriteString(string);
#line 140 "chopper.ch"
#line 140 "chopper.ch"
        LNewLine(1);
#line 140 "chopper.ch"
#line 140 "chopper.ch"
#line 141 "chopper.ch"
        if ( firstLine > 1 ) 
#line 141 "chopper.ch"
#line 142 "chopper.ch"
            sprintf(string, "%da", firstLine - 1);
#line 142 "chopper.ch"
        else 
#line 142 "chopper.ch"
#line 144 "chopper.ch"
            sprintf(string, "%di", firstLine);
#line 144 "chopper.ch"
#line 144 "chopper.ch"
#line 145 "chopper.ch"
        WriteString(string);
#line 145 "chopper.ch"
#line 145 "chopper.ch"
        LNewLine(1);
#line 145 "chopper.ch"
#line 145 "chopper.ch"
#line 146 "chopper.ch"
        ((_inter = (PPTREE)tree,1) && 
#line 146 "chopper.ch"
            ((tree=SonTree(_inter,1)),1) &&
#line 146 "chopper.ch"
            1);
#line 146 "chopper.ch"
        ;
#line 146 "chopper.ch"
#line 147 "chopper.ch"
        decomp.ChopTree(tree, 1);
#line 147 "chopper.ch"
#line 148 "chopper.ch"
        PrintString(".");
#line 148 "chopper.ch"
#line 148 "chopper.ch"
        LNewLine(1);
#line 148 "chopper.ch"
#line 148 "chopper.ch"
#line 149 "chopper.ch"
        PrintString("wq");
#line 149 "chopper.ch"
#line 149 "chopper.ch"
        LNewLine(1);
#line 149 "chopper.ch"
#line 149 "chopper.ch"
#line 150 "chopper.ch"
        return 0 ;
#line 150 "chopper.ch"
#line 150 "chopper.ch"
    }
#line 150 "chopper.ch"
#line 152 "chopper.ch"
}
#line 152 "chopper.ch"
/*Well done my boy */ 
#line 152 "chopper.ch"

