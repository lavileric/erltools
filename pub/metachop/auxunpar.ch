/*************************************************************************/
/*                                                                       */
/*        Auxunpar.ch  - Built by Eric Lavillonniere on Tandon 386 - 89  */
/*                                                                       */
/*************************************************************************/
/* This file is part of metachop                                          
     
   Metachop provide the tools to prettyprint or modify trees generated
   by metagen.
     
      It runs on dos and unix. It generates c code. */
/* Copyright(C) 1989 Eric Lavillonniere */
/*
      This program is free software; you can redistribute it and/or modify
      it under the terms of the GNU General Public License as published by
      the Free Software Foundation; either version 1, or (at your option)
      any later version.
     
      This program is distributed in the hope that it will be useful,
      but WITHOUT ANY WARRANTY; without even the implied warranty of
      MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
      GNU General Public License for more details.
     
      You should have received a copy of the GNU General Public License
      along with this program; see the file COPYING. If not, write to 
   the Free Software
      Foundation, Inc., 675 Mass Ave, Cambridge, MA 02139, USA.
     
     */
language metachop;

#include "decmetac.h"
#include <fcntl.h>

static char stringNumb [200];
extern char *nameDefine ;
int         nbVerify = 0 ;
int         nbFor = 0 ;
extern int  compiledLine ;
extern char *theFileName ;
void        StackFunction (char *name, PTREE tree) ;
extern int  storeValMax ;
extern int  retValMax ;

#include "newline.h"

/******************************************************************
       EqualTree : generates code which verifies if a tree equals
                   a pattern (parameter tree)
   *******************************************************************/
void EqualTree ( const char *ident, const char *dest, int level, PTREE tree, int son )
{
    PTREE   ptTree ;
    int     currentSon ;
    char    *interString ;
    
    Mark();
    "(";
    if ( level ) {
        if ( level > storeValMax ) 
            storeValMax =  level ;
        if ( level > retValMax ) 
            retValMax =  level ;
        _itoa(level, stringNumb, 10);
        "_retVal[" WriteString(stringNumb) "]=((_storeVal[" WriteString(stringNumb) "]=_inter,_inter=SonTree(_inter,";
        _itoa(son, stringNumb, 10);
        WriteString(stringNumb) ")";
        if ( dest ) {
            ",(" WriteString(dest) "=_inter)";
        }
        ",1) &&";
    } else {
        "(_inter = (PPTREE)";
        if ( ident ) 
            WriteString(ident) 
        if ( dest ) {
            ",(" WriteString(dest) "=_inter))";
        }
        ",1) && ";
    }
    <NL>
        <T>
    Mark();
    switch ( tree ) {
        case <LIST> : 
            {
                "(NumberTree(_inter) == LIST) &&" <NL>
                strcpy(stringNumb, "_Ver");
                _itoa(nbVerify++, stringNumb + 4, 10);
                strcpy(stringNumb + strlen(stringNumb), nameDefine);
                WriteString(stringNumb) "(_inter) )" <NL>
                StackFunction(AllocString(stringNumb), (PTREE)SonTree(tree, 1));
                if ( level ) {
                    "," <NL>
                    if ( level > storeValMax ) 
                        storeValMax =  level ;
                    if ( level > retValMax ) 
                        retValMax =  level ;
                    _itoa(level, stringNumb, 10);
                    "(_inter=_storeVal[" WriteString(stringNumb) "],1),_retVal[" WriteString(stringNumb) "]) &&";
                    UnMark();
                    <NL>
                } else 
                    UnMark();
            }
            break ;
        case <NODE_TREE> : 
            {
                if ( (ptTree = SonTree(tree, 1)) ) {
                    ptTree =  SonTree(ptTree, 1);
                    if ( ptTree == <IDENT> ) {
                        "(NumberTree(_inter) == ";
                        if ( cplusGen ) {
                            WriteString(NameOfNodePlus(Value(SonTree(ptTree, 1))));
                        } else {
                            WriteString(NameOfNode(Value(SonTree(ptTree, 1))));
                        }
                        ") &&" <NL>
                    } else if ( ptTree == <QUALIFIED> ) {
                        "(NumberTree(_inter) == " WriteString(Value(ptTree [1])) WriteString("::") WriteString(Value(ptTree [2])) ") &&" <NL>
                    }
                    currentSon =  1 ;
                    tree       =  SonTree(SonTree(tree, 1), 2);
                    
                    /* on parcours tous les fils pour faire le test
                       sur le fils */
                    while ( tree ) {
                        ptTree =  SonTree(tree, 1);
                        
                        /* DEF_IDENT n'est pas pris en compte
                           c'est un place holder */
                        if ( ptTree != <DEF_IDENT> ) {
                            switch ( ptTree ) {
                                case <IDENT> : 
                                case <AFF,<>,<DEF_IDENT>> : 
                                    ptTree == <AFF,ptTree>;
                                    "((" WriteString(Value(SonTree(ptTree, 1))) "=SonTree(_inter,";
                                    _itoa(currentSon, stringNumb, 10);
                                    WriteString(stringNumb) ")),1) &&" <NL>
                                    break ;
                                case <AFF> : 
                                    EqualTree((const char *)0, interString = AllocString(BrainyValue(ptTree)), level + 1, PTREE(SonTree(ptTree, 2)), currentSon);
                                    free(interString);
                                    break ;
                                case <NIL> : 
                                    "(!SonTree(_inter,";
                                    _itoa(currentSon, stringNumb, 10);
                                    WriteString(stringNumb) ")) &&" <NL>
                                    break ;
                                case <STRING> : 
                                    "(!strcmp(Value(SonTree(_inter,";
                                    _itoa(currentSon, stringNumb, 10);
                                    WriteString(stringNumb) "))," @ptTree ")) &&" <NL>
                                    break ;
                                default : EqualTree((const char *)0, (const char *)0, level + 1, ptTree, currentSon);
                            }
                        }
                        tree =  SonTree(tree, 2);
                        currentSon++ ;
                    }
                    WriteString("1)");
                    if ( level ) {
                        "," <NL>
                        if ( level > storeValMax ) 
                            storeValMax =  level ;
                        if ( level > retValMax ) 
                            retValMax =  level ;
                        _itoa(level, stringNumb, 10);
                        "(_inter=_storeVal[" WriteString(stringNumb) "],1),_retVal[" WriteString(stringNumb) "]) &&";
                        UnMark();
                        <NL>
                    } else 
                        UnMark();
                }
                break ;
            }
    }
    UnMark();
}

/******************************************************************
       DumpAFunction : dump a function on output
   *******************************************************************/
void DumpAFunction ( char *name, PTREE tree )
{
    WriteString(name) WriteString("(tree)");
    NewLine();
    WriteString("PPTREE tree;");
    NewLine();
    WriteString("{");
    NewLine();
    Tab();
    Mark();
    WriteString("register PPTREE _ptTree;");
    NewLine();
    WriteString("int _retVal[50];");
    NewLine();
    WriteString("PPTREE _storeVal[50],_inter;");
    NewLine();
    WriteString("while (tree) {");
    NewLine();
    Tab();
    Mark();
    WriteString("_ptTree = SonTree(tree,1) ;");
    NewLine();
    if ( tree ) {
        WriteString("if (");
        Mark();
        while ( tree ) {
            WriteString("!");
            EqualTree("_ptTree", (char *)0, 0, PTREE(SonTree(tree, 1)), 0);
            WriteString(" &&");
            NewLine();
            tree =  SonTree(tree, 2);
        }
        WriteString("1) ");
        UnMark();
        NewLine();
        Tab();
        WriteString("return(0);");
        NewLine();
    }
    WriteString("tree = SonTree(tree,2);");
    UnMark();
    NewLine();
    WriteString("}");
    NewLine();
    WriteString("return(1);");
    UnMark();
    NewLine();
    WriteString("}");
    NewLine();
}

typedef struct funcElem {
    char           *name ;
    PPTREE         tree ;
    struct funcElem *next ;
}   FUNC_ELEM,  *PFUNC_ELEM ;

PFUNC_ELEM  listFunc, listFuncFree = (PFUNC_ELEM)0 ;

/******************************************************************
       AllocFuncElem : allocate a func element
   *******************************************************************/
PFUNC_ELEM AllocFuncElem ()
{
    PFUNC_ELEM  ptFunc ;
    
    if ( listFuncFree ) {
        ptFunc       =  listFuncFree ;
        listFuncFree =  listFuncFree->next ;
    } else 
        ptFunc =  (PFUNC_ELEM)malloc(sizeof(FUNC_ELEM));
    return (ptFunc);
}

/******************************************************************
       StackFunction : stacks a function for future display
   *******************************************************************/
void StackFunction ( char *name, PTREE tree )
{
    PFUNC_ELEM  pFuncElem = AllocFuncElem();
    
    AddRef(tree);
    pFuncElem->name =  name ;
    pFuncElem->tree =  tree ;
    pFuncElem->next =  listFunc ;
    listFunc        =  pFuncElem ;
}

/******************************************************************
       FreeFuncElem : frees  a func element
   *******************************************************************/
void FreeHeadFunc ()
{
    PFUNC_ELEM  funcElem = listFunc ;
    
    listFunc       =  listFunc->next ;
    funcElem->next =  listFuncFree ;
    listFuncFree   =  funcElem ;
}

/******************************************************************
       LookForEach : dump a function for each foreach
   *******************************************************************/
static int  _glob_level ;

void LookForEach ( PTREE paramTree, int level )
{
    PTREE   tree ;
    ItPtree it (paramTree) ;
    PPTREE  _for_elem ;
    
    _glob_level =  level ;
    tree        =  <FOREACH,<META,"name">,<META,"name1">,<META,"name2">>;
    it.Searched(tree);
    while ( (for_elem = it++) ) {
        PTREE   father ;
        father =  for_elem ^ ;
        DumpForeach(for_elem, ++_glob_level);
        it.Current(father);
    }
}

/******************************************************************
       DumpForeach : dump  a foreach
   *******************************************************************/
extern int  inDefine ;

void DumpForeach ( PTREE paramTree, int level )
{
    PTREE   son, statement, inter1, inter2 ;
    int     oldDefine = inDefine ;
    char    new_ident [15];
    char    variable ;
    PTREE   searched ;
    PTREE   stated ;
    PTREE   iterator ;
    PTREE   treatment ;
    
    // compute searched element
    paramTree == <,son>;
    if ( son != <NIL> ) 
        searched =  copytree(son);
    else {
        searched =  <IDENT,"(PPTREE) 0">;
    }
    
    // compute start
    paramTree == <,<>,stated>;
    stated =  copytree(stated);
    
    // compute iterator
    sprintf(new_ident, "_iterator%d", level);
    iterator =  <IDENT,MakeString(new_ident)>;
    
    // compute treatment
    paramTree == <,<>,<>,treatment>;
    treatment =  copytree(treatment);
    statement =  parse (
        {
            ItPtree $(iterator)($(stated),$(searched));
            PPTREE _for_elem;
            $(iterator).AllSearch(1);
            while ( _for_elem = ($(iterator))++) {
                $(treatment);
                $(iterator).Current(_for_elem);
                continue;
                $for_continue :
                    $(iterator).Current(_for_elem);
                    $(iterator) . SkipSon(1);/* dont go inside the
                                        found elem */
                    continue;
                $for_break :
                    break;
            }
        }
    );
    inter1    =  parse (goto for_break ;);
    inter2    =  parse (goto for_continue;);
    {
        ItPtree it (statement) ;
        PPTREE  _for_elem ;
        while ( (for_elem = it++) ) {
            if ( qcomparetree(for_elem, inter1) ) {
                sprintf(new_ident, "for_break%d", level);
                replace(<IDENT,"for_break">, for_elem, <IDENT,MakeString(new_ident)>);
            } else if ( qcomparetree(for_elem, inter2) ) {
                sprintf(new_ident, "for_continue%d", level);
                replace(<IDENT,"for_continue">, for_elem, <IDENT,MakeString(new_ident)>);
            } else if ( for_elem == <FOREACH> ) {
                it.SkipSon(1);
                continue ;
            }
        }
    }
    sprintf(new_ident, "for_break%d", level);
    metarep("for_break", statement, <IDENT,MakeString(new_ident)>);
    sprintf(new_ident, "for_continue%d", level);
    metarep("for_continue", statement, <IDENT,MakeString(new_ident)>);
    paramTree += statement ;
}

/******************************************************************
       DumpFunction()
   *******************************************************************/
void DumpFunction ()
{
    char    *name ;
    PTREE   tree1 ;
    PTREE   tree ;
    
    while ( listFunc ) {
        name =  listFunc->name ;
        tree =  listFunc->tree ;
        FreeHeadFunc();
        tree1 =  tree ;
        DumpAFunction(name, tree);
    }
}


