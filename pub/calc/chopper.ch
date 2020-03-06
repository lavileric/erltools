/*************************************************************************/
/*                                                                       */
/*        Chopper.c - Built by Eric Lavillonniere on Tandon 386 - 89     */
/*                                                                       */
/*************************************************************************/
language calc;

#include "token.h"
#include <sys/types.h>
#include "calc.h"
#include <fcntl.h>

void    ChopTree (PTREE) ;
void    decomp (PTREE) ;

int main ( int argc, char **argv )
{
    PTREE   tree ;
    char    name [50];
    char    *ptName ;
    bool    dump (false) ;
    
    MetaInit();
    calc().AsLanguage();
follow : 
    if ( argc < 2 ) {
        sprintf(name, "Bad name for your source file \n");
        _write(2, name, strlen(name));
        exit(0);
    } else {
        if ( !strcmp(*(argv + 1), "-dump") ) {
            dump =  true ;
            argc-- ;
            argv++ ;
            goto follow ;
        } else {
            ptName =  *(argv + 1);
        }
    }
    tree =  calc().ReadFile(ptName);
    AddRef(tree);
    if ( !firstError ) {
        return 1 ;
    } else {
        if ( dump ) 
            CLDumpTree(tree);
        else 
            ChopTree(tree);
        MetaEnd();
        return 0 ;
    }
}

/*************************************************************************/
/*   ChopTree : chop the tree : here call decomp                         */
/*************************************************************************/
void ChopTree ( PTREE tree )
{
    decomp_calc(tree);
    NewLine();
}

#include <symb.h>

SymbolTable tabVar ; // symbolTable

// 
// Interpret : interpret one instruction
//
int Interpret ( PTREE inst )
{
    
    PTREE   val ;                    // intermediate value
    PTREE   exp1, exp2, exp, ident ; // expressions
    PTREE   list ;
    
    switch ( inst ) {
        case <PLUS,exp1,exp2> : return Interpret(exp1) + Interpret(exp2);
        case <MINUS,exp1,exp2> : return Interpret(exp1) - Interpret(exp2);
        case <MUL,exp1,exp2> : return Interpret(exp1) * Interpret(exp2);
        case <DIV,exp1,exp2> : return Interpret(exp1) / Interpret(exp2);
        case <EXP,exp1> : return Interpret(exp1);
        case <NUMB> : return atoi(Value(inst));
        case <IDENT> : 
            {
                if ( (val = tabVar [inst]) ) {
                    return Interpret(val [2]);
                } else {
                    printf("Ident is not defined : %s \n", Value(inst));
                    exit(1);
                }
            }
            break ;
        case <ASS,ident,exp1> : 
            {
                tabVar.AddVar(inst);
                break ;
            }
        case <PRINT,list> : 
            {
                while ( (exp = nextl(list)) ) {
                    switch ( exp ) {
                        case <STRING> : 
                            printf("%s", Value(exp));
                            break ;
                        default : printf("%d", Interpret(exp));
                    }
                }
                printf("\n");
            }
    }
    return 0 ;
}

/*************************************************************************/
/*  decomp : compute expressions  */
/*************************************************************************/
void decomp ( PTREE tree )
{
    PTREE   list, elem ;
    
    list =  tree [1];
    <NL,2>
    while ( (elem = nextl(list)) ) {
        Interpret(elem);
    }
}


