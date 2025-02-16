/*************************************************************************/
/*                                                                       */
/*        Outil.ch - Built by Eric Lavillonniere on Tandon 386 - 89      */
/*                                                                       */
/*************************************************************************/
/* This file is part of metachop                                            
   Netachop provide the tools to prettyprint or modify trees generated
   by metagen.
   It runs on dos and unix. It generates c code. */
/* This file is part of metagen                                             
   Metagen is a syntaxic analyser generator with backtrack.
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
/* 
   Eric Lavillonniere - 26 January 1994 
     Add Functions for storing position in tree GetPosComment ....
   */
language metachop;

#define DISABLE_EXTERN_INCLUDE 

#include "interf.h"
#include <stdio.h>
#include <fcntl.h>
#include "memges.h"

void    InsertVar (char *, PTREE, int, PTREE) ;

#if 0
    extern char *currentLanguage ;
    extern int  firstError ;
#endif

PVAR    listVar = (PVAR)0, listFreeVar = (PVAR)0 ;
int     cplusGen ; /* indique si on doit faire une generation c++*/ 

/******************************************************************
     CompareTree : compares two trees
   *******************************************************************/
int CompareTree ( PTREE tree1, PTREE tree2, PTREE father, int slot )
{
    int arity, currParam ;
    int nbTree1 ;
    
debut : 
    nbTree1 = NumberTree(tree1);
    if ( nbTree1 == META ) {
        InsertVar(AllocString(BrainyValue(tree1)), father, slot, tree2);
        return 1 ;
    }
    if ( tree1 == () || tree2 == () ) 
        return !(tree1 == () ^ tree2 == ());
    if ( NumberTree(tree1) == NumberTree(tree2) ) {
        if ( NumberTree(tree1) == TERM_TREE ) {
            
            /* works if they are more than two buffers for file cache */
            return !strcmp(CacheAddrRead(sontree(tree1, 1)), CacheAddrRead(sontree(tree2, 1)));
        } else {
            if ( (arity = treearity(tree1)) >= 1 ) {
                for ( currParam = arity ; currParam > 1 ; currParam-- ) 
                    if ( !CompareTree(sontree(tree1, currParam), sontree(tree2, currParam), tree2, currParam) ) 
                        return 0 ;
                
                /* optimise a tail recursive call */
                tree1  =  sontree(tree1, 1);
                tree2  =  sontree(tree2, 1);
                father =  tree2 ;
                slot   =  1 ;
                goto debut ;
            }
            return 1 ;
        }
    } else 
        return 0 ;
}

/******************************************************************
     QCompareTree : compares two trees without assigning meta
   *******************************************************************/
int QCompareTree ( PPTREE tree1, PPTREE tree2, PPTREE father, int slot )
{
    int arity, currParam ;
    int nbTree1, nbTree2 ;
    
debut : 
    nbTree1 = NumberTree(tree1);
    if ( nbTree1 == META ) 
        return 1 ;
    if ( !tree1 || !tree2 ) 
        return !(!tree1 ^ !tree2);
    nbTree2 =  NumberTree(tree2);
    if ( nbTree1 == CLASS_TREE ) 
        nbTree1 =  TERM_TREE ;
    if ( nbTree2 == CLASS_TREE ) 
        nbTree2 =  TERM_TREE ;
    if ( nbTree1 == nbTree2 ) {
        if ( nbTree1 == TERM_TREE ) {
            
            /* works if they are more than two buffers for file cache */
            return !strcmp(Value(tree1), Value(tree2));
        } else {
            if ( (arity = treearity(tree1)) >= 1 ) {
                for ( currParam = arity ; currParam > 1 ; currParam-- ) 
                    if ( !QCompareTree(sontree(tree1, currParam), sontree(tree2, currParam), (PPTREE)0, -1) ) 
                        return 0 ;
                
                /* optimise a tail recursive call */
                tree1 =  sontree(tree1, 1);
                tree2 =  sontree(tree2, 1);
                goto debut ;
            }
            return 1 ;
        }
    } else 
        return 0 ;
}

/******************************************************************
     AllocVar  : allocate a new var cell
   *******************************************************************/
PVAR AllocVar ()
{
    PVAR    myPoint ;
    
    if ( listFreeVar ) {
        myPoint     =  listFreeVar ;
        listFreeVar =  listFreeVar -> next ;
    } else 
        myPoint =  (PVAR)malloc(sizeof(VAR));
    myPoint -> name   =  (char *)0 ;
    myPoint -> father =  (PPTREE)0 ;
    myPoint -> slot   =  -1 ;
    myPoint -> elem   =  (PPTREE)0 ;
    return (myPoint);
}

/******************************************************************
     FreeVar : free a Var tree;
   *******************************************************************/
void FreeVar ()
{
    PVAR    interVar, frontVar ;
    
    interVar =  frontVar = listVar ;
    while ( frontVar ) {
        interVar =  frontVar ;
        free(frontVar -> name);
        frontVar =  frontVar -> next ;
    }
    if ( frontVar != interVar ) {
        interVar -> next =  listFreeVar ;
        listFreeVar      =  listVar ;
        listVar          =  (PVAR)0 ;
    }
}

/******************************************************************
     InsertVar : insert a new var in list
   *******************************************************************/
void InsertVar ( char *name, PTREE father, int slot, PTREE elem )
{
    PVAR    pVar ;
    
    pVar           =  AllocVar();
    pVar -> name   =  name ;
    pVar -> father =  father ;
    pVar -> slot   =  slot ;
    pVar -> elem   =  elem ;
    pVar -> next   =  listVar ;
    listVar        =  pVar ;
}

/******************************************************************
     SearchVar : search the var whose name is name
   *******************************************************************/
PVAR SearchVar ( const char *name )
{
    register PVAR   pVar = listVar ;
    
    while ( pVar ) {
        if ( !strcmp(pVar -> name, name) ) 
            return (pVar);
        pVar =  pVar -> next ;
    }
    return (PVAR)0 ;
}

/******************************************************************
     ForeachTree : apply a function on a tree
   *******************************************************************/
PTREE ForeachTreeMeta ( const char *name, PTREE &treeApp, PTREE(*callFunct)(PTREE &, PTREE &, int, PTREE &, int &), PTREE &father, int position, PTREE &treeSubstitution
    , int &nbsubstitution )
{
    int     arity, currParam ;
    PTREE   retTree((void *)0);
    PTREE   son ;
    PTREE   operand = treeApp ;
    PTREE   operandFather = father ;
    
start : 
    if ( operand == () ) 
        return retTree ;
    if ( NumberTree(operand) == META && !strcmp(BrainyValue(operand), name) ) {
        PTREE   ret = (PTREE)(*callFunct)(operand, operandFather, position, treeSubstitution, nbsubstitution);
        if ( retTree == PTREE(0) ) 
            retTree =  ret ;
        return retTree ;
    }
    if ( NumberTree(operand) == IN_LANGUAGE ) 
        return retTree ;
    if ( NumberTree(operand) != TERM_TREE ) {
        if ( retTree == PTREE(0) ) 
            retTree =  operand ;
        arity =  treearity(operand);
        for ( currParam = 1 ; currParam < arity ; currParam++ ) {
            son =  sontree(operand, currParam);
            ForeachTreeMeta(name, son, callFunct, operand, currParam, treeSubstitution, nbsubstitution);
        }
        if ( arity >= 1 ) {
            operandFather =  operand ;
            operand       =  sontree(operand, arity);
            position      =  arity ;
            goto start ;
        }
    }
    return retTree ;
}

/******************************************************************
     ForReplace : replace function in a MetaRep
   *******************************************************************/
PTREE ForReplace ( PTREE &elem, PTREE &father, int slot, PTREE &treeSubstitution, int &nbsubstitution )
{
    if ( father == () ) 
        return treeSubstitution ;
    if ( !nbsubstitution ) 
        nbsubstitution =  1 ;
    else 
        treeSubstitution =  CopyTree(treeSubstitution);
    return ReplaceTree(father, slot, treeSubstitution);
}

/******************************************************************
     MetaRep : replace metavariables
   *******************************************************************/
PTREE MetaRep ( const char *name, PPTREE tree, PPTREE treeSubst )
{
    
    // small precautions to avoid disturbing metachop generation
    // entry could have got nbRef == 0
    PTREE   res ;
    
    AddRef(tree);
    AddRef(treeSubst);
    {
        PTREE   nullTree = (PTREE)0 ;
        PTREE   firstTree = tree ;
        int     nbsubstitution = 0 ;
        PTREE   treeSubstitution = treeSubst ;
        res =  ForeachTreeMeta(name, firstTree, ForReplace, nullTree, -1, treeSubstitution, nbsubstitution);
    }
    RemRef(treeSubst);
    RemRef(tree);
    StoreRef(res);
    return res ;
}

#include "squeeze.c"

#if 0
    int                 _retVal [50];
    PPTREE              _storeVal [50], _nextVal ;
    PPTREE              stackTree [1024];
    int                 ptStackTree = 0 ;
    extern char         *tabLabel ;
    extern STRINGELEM   *listConst ;
    extern char         *includeEnv ;
    extern int          input, output, coutput, houtput ;
#endif

/**************************************************************
     main
   ***************************************************************/
/******************************************************************
     find : find a value in a tree
   *******************************************************************/
PTREE find ( PTREE paramTree, PTREE tree )
{
    foreach (paramTree,tree,{
        return for_elem ;
    })
    return (PTREE)0 ;
}

/******************************************************************
     metafind : find a meta in a tree
   *******************************************************************/
// static char *myString ;
PTREE metafind ( PTREE paramTree, PTREE tree )
{
    char    *myString = (char *)Value(paramTree);
    
    foreach (<META,"meta">,tree,{
        if ( NumberTree(for_elem) == META && !strcmp(myString, CacheAddrRead(sontree(sontree(for_elem, 1), 1))) ) {
            return for_elem ;
        }
    })
    return (PPTREE)0 ;
}

/******************************************************************
     replace : replace a value in a tree
   *******************************************************************/
void replace ( PTREE paramTree, PTREE tree, PTREE new_value )
{
    int firstReplace = 1 ;
    
    foreach (paramTree,tree,{
        if ( for_elem ^ ) {
            PTREE   replace_tree ;
            if ( firstReplace ) {
                firstReplace =  0 ;
                replace_tree =  new_value ;
            } else 
                replace_tree =  CopyTree(new_value);
            for_elem =  for_elem += replace_tree ;
            goto for_continue ;
        }
    })
}

/********************************************************************
       DumpTree : Dump a tree on screen with Geometry
   *******************************************************************/
void CLDumpTree ( PPTREE treeParam )
{
    PTREE   tree (treeParam) ;
    
    tree.CLDumpTree();
}

void LDumpTree ( PPTREE treeParam )
{
    PTREE(treeParam).LDumpTree();
}

// 
void DumpTree ( PPTREE treeParam )
{
    PTREE(treeParam).DumpTree();
}

// dumptree stopping after each page
void MDumpTree ( PPTREE tree, int pageNum )
{
    PTREE(tree).MDumpTree(pageNum);
}

void DumpNode ( PPTREE tree )
{
    PTREE(tree).DumpNode();
}

#undef LNewLine

/******************************************************************
     TreeConsructor : another tree constructor
   ******************************************************************/
#define INT int

#if !defined(VARARGS_2)
    void TheConstructor ( PPTREE(&stackTree)[1024], int &ptStackTree, int va_alist, ... )
    {
        register int    arity ;
        int             NodeType ;
        MY_TREE         ptTree ;
        va_list         arg_marker ;
        
        va_start(arg_marker);
        NodeType =  (int)va_arg(arg_marker,INT);
        while ( NodeType != -3 ) {
            switch ( NodeType ) {
                case -2 : 
                    PushTree((PPTREE)va_arg(arg_marker,PPTREE));
                    break ;
                case -4 : 
                    PushTree((PPTREE)0);
                    break ;
                default : 
                    ptTree = MakeTree(NodeType, arity = (int)va_arg(arg_marker,INT));
                    for (; arity ; arity-- ) 
                        ReplaceTree(ptTree, arity, PopTree);
                    PushTree(ptTree);
                    break ;
            }
            NodeType =  (int)va_arg(arg_marker,INT);
        }
    }
    
#   if 0
        void TheConstructor ( int va_alist, ... )
        {
            register int    arity ;
            int             NodeType ;
            MY_TREE         ptTree ;
            va_list         arg_marker ;
            
            va_start(arg_marker);
            NodeType =  (int)va_arg(arg_marker,INT);
            while ( NodeType != -3 ) {
                switch ( NodeType ) {
                    case -2 : 
                        PushTree((PPTREE)va_arg(arg_marker,PPTREE));
                        break ;
                    case -4 : 
                        PushTree((PPTREE)0);
                        break ;
                    default : 
                        ptTree = MakeTree(NodeType, arity = (int)va_arg(arg_marker,INT));
                        for (; arity ; arity-- ) 
                            ReplaceTree(ptTree, arity, PopTree);
                        PushTree(ptTree);
                        break ;
                }
                NodeType =  (int)va_arg(arg_marker,INT);
            }
        }
        
#   endif
#else 
    void TheConstructor ( PPTREE(&stackTree)[1024], int &ptStackTree, NodeType, ... )
    int NodeType ;
    {
        register int    arity ;
        MY_TREE         ptTree ;
        va_list         arg_marker ;
        
        va_start(arg_marker, NodeType);
#       if 0
            
            // defined(SUN) && !defined(SOLARIS) && !defined(DOS)
            NodeType =  (int)va_arg(arg_marker,INT);
#       endif
        while ( NodeType != -3 ) {
            switch ( NodeType ) {
                case -2 : 
                    PushTree((PPTREE)va_arg(arg_marker,PPTREE));
                    break ;
                case -4 : 
                    PushTree((PPTREE)0);
                    break ;
                default : 
                    ptTree = MakeTree(NodeType, arity = (int)va_arg(arg_marker,INT));
                    for (; arity ; arity-- ) 
                        ReplaceTree(ptTree, arity, PopTree);
                    PushTree(ptTree);
                    break ;
            }
            NodeType =  (int)va_arg(arg_marker,INT);
        }
    }
    
#   if 0
        void TheConstructor ( NodeType, ... )
        int NodeType ;
        {
            register int    arity ;
            MY_TREE         ptTree ;
            va_list         arg_marker ;
            
            va_start(arg_marker, NodeType);
#           if 0
                
                // defined(SUN) && !defined(SOLARIS) && !defined(DOS)
                NodeType =  (int)va_arg(arg_marker,INT);
#           endif
            while ( NodeType != -3 ) {
                switch ( NodeType ) {
                    case -2 : 
                        PushTree((PPTREE)va_arg(arg_marker,PPTREE));
                        break ;
                    case -4 : 
                        PushTree((PPTREE)0);
                        break ;
                    default : 
                        ptTree = MakeTree(NodeType, arity = (int)va_arg(arg_marker,INT));
                        for (; arity ; arity-- ) 
                            ReplaceTree(ptTree, arity, PopTree);
                        PushTree(ptTree);
                        break ;
                }
                NodeType =  (int)va_arg(arg_marker,INT);
            }
        }
        
#   endif
#endif

/****************************************************************************
         InLang : translate a tree of a language in an other language
   *****************************************************************************/
void PatchANode ( char *languageName, PTREE the_elem )
{
    char        *NodeLanguage ;
    OVER_LANG   *pOverLang ;
    
    NodeLanguage =  GetNodeLang(the_elem) -> name ;
    pOverLang    =  GetLang(languageName) -> overLang ;
    for (; pOverLang && pOverLang -> name ; pOverLang++ ) 
        if ( !strcmp(pOverLang -> name, NodeLanguage) ) {
            if ( NumberTree(the_elem) > IN_LANGUAGE && NumberTree(the_elem) != TERM_TREE ) 
                PatchNode(the_elem, GetLang(languageName), NumberTree(the_elem) + pOverLang -> offset);
            else 
                PatchNode(the_elem, GetLang(languageName), NumberTree(the_elem));
            goto nextNode ;
        }
    pOverLang =  GetNodeLang(the_elem) -> overLang ;
    for (; pOverLang && pOverLang -> name ; pOverLang++ ) 
        if ( !strcmp(pOverLang -> name, languageName) ) {
            if ( NumberTree(the_elem) > IN_LANGUAGE && NumberTree(the_elem) != TERM_TREE ) 
                PatchNode(the_elem, GetLang(languageName), NumberTree(the_elem) - pOverLang -> offset);
            else 
                PatchNode(the_elem, GetLang(languageName), NumberTree(the_elem));
            goto nextNode ;
        }
nextNode : 
    ;
}

void InLang ( char *languageName, PTREE tree )
{
    forallsons (tree,{
        InLang(languageName, for_elem);
    })
    PatchANode(languageName, tree);
}

/* EL le 26/1/94 rajout des methodes pour gerer les positions << */
static int  currentLine, currentCol ;

/**************************************************************
       IsPosComment : indicates if comment is a position comment 
   ***************************************************************/
char *IsPosComment ( const PTREE &comm )
{
    char    *val = Value(comm);
    
    if ( !strncmp(val, POS_STUB, strlen(POS_STUB)) ) 
        return val ;
    else 
        return (char *)0 ;
}

/**************************************************************
       IsCommNotPos : look if there is a comment which is not a 
                      pos comment
   ***************************************************************/
bool IsCommNotPos ( const PTREE &tree, int type )
{
    PTREE   comm ;
    int     result = 0 ;
    
    // search for type comment
    while ( (comm = NextComm(tree, type, comm)) ) {
        if ( !IsPosComment(comm) ) {
            
            // if not a pos comment return ok
            return true ;
        }
    }
    
    // we have not found found any not pos comment
    return false ;
}

/**************************************************************
       GetStartPos : get starting position of a tree 
                     this function skip comment in front of tree
   ***************************************************************/
int GetStartPos ( const PTREE &tree, int *line, int *col, bool opposite )
{
    PTREE   comm ;
    int     result = 0 ;
    
    // search for pre pos comment
    while ( (comm = NextComm(tree, PRE, comm)) ) {
        if ( GetPosCommentContent(comm, line, col) ) {
            
            // if find it return true
            // but go on to find the nearest pos 
            // enables to skip comments
            result =  1 ;
            
            // opposite return
            if ( opposite ) 
                break ;
        }
    }
    
    // return if we have found it
    return result ;
}

/**************************************************************
       SearchPosInt : search the first sub-element of tree which have a pos
                      this will be pos of tree
   ***************************************************************/
static  int SearchPosInt ( const PTREE &tree, int *line, int *col )
{
    forallsons (tree,
        if ( SearchPos(for_elem, line, col) ) {
            return 1 ;
        }
    )
    if ( GetStartPos(tree, line, col) || GetEndPos(tree, line, col) ) 
        return 1 ;
    return 0 ;
}

/**************************************************************
       SearchPos : search pos of tree
   ***************************************************************/
int SearchPos ( const PTREE &tree, int *line, int *col )
{
    if ( !GetStartPos(tree, line, col) ) {
        return SearchPosInt(tree, line, col);
    } else 
        return 1 ;
}

/**************************************************************
       SearchEndPosInt : search the first sub-element of tree which have a pos
                      this will be pos of tree
   ***************************************************************/
static  int SearchEndPosInt ( const PTREE &tree, int *line, int *col )
{
    int arity = treearity(tree);
    
    for (; arity > 0 ; arity-- ) {
        PTREE   son = tree [arity];
        if ( SearchEndPos(son, line, col) ) {
            return 1 ;
        }
    }
    if ( GetEndPos(tree, line, col) || GetStartPos(tree, line, col) ) 
        return 1 ;
    return 0 ;
}

/**************************************************************
       SearchPosEnd : search end pos of tree
   ***************************************************************/
int SearchEndPos ( const PTREE &tree, int *line, int *col )
{
    if ( !GetEndPos(tree, line, col) ) {
        return SearchEndPosInt(tree, line, col);
    } else 
        return 1 ;
}

/**************************************************************
       GetEndPos : get ending position of a tree 
   ***************************************************************/
int GetEndPos ( const PTREE &tree, int *line, int *col, bool opposite )
{
    PTREE   comm ;
    int     result = 0 ;
    
    // search for pre pos comment
    while ( (comm = NextComm(tree, POST, comm)) ) {
        if ( GetPosCommentContent(comm, line, col) ) {
            
            // if find it return true
            result =  1 ;
            if ( !opposite ) 
                return result ;
        }
    }
    
    // if find nothing return false
    return result ;
}

/**************************************************************
       GetPosCommentContent : get content of pos comment if it is one 
   ***************************************************************/
int GetPosCommentContent ( const PTREE &comm, int *lig, int *col )
{
    char    *val ;
    
    if ( (val = IsPosComment(comm)) ) {
        sscanf(val, POS_STUB_FORMAT, lig, col);
        return 1 ;
    }
    return 0 ;
}

/**************************************************************
       SetPosCommentContent : set content of pos comment if it is one 
   ***************************************************************/
void SetPosCommentContent ( const PTREE &comm, int lig, int col )
{
    PTREE   content = SonTree(SonTree(comm, 1), 1);
    
    if ( IsPosComment(content) ) {
        char    addr [MAXLENGTH];
        sprintf(addr, POS_STUB_FORMAT, lig, col);
        replacetree(content, 1, MakeString(addr));
    }
}

/**************************************************************
       SetPos : set pos on a tree
   ***************************************************************/
void SetPos ( const PTREE &tree, int type, int lig, int col )
{
    char    addr [MAXLENGTH];
    PTREE   comment ;
    
    if ( !tree ) 
        return ;
    comment =  MakeTree(type, 1);
    sprintf(addr, POS_STUB_FORMAT, lig, col);
    comment += <,<LIST,MakeString(addr),()>>;
    comment =  <LIST,comment,()>;
    PutComm(tree, comment);
}

/**************************************************************
       SetPos : set pos on a tree
   ***************************************************************/
void AddPos ( const PTREE &tree, int type, int lig, int col )
{
    char    addr [MAXLENGTH];
    PTREE   comment ;
    PTREE   oldComment ;
    
    if ( !tree ) 
        return ;
    
    // get old comment
    oldComment =  GetComm(tree);
    
    // create new comment
    comment    =  MakeTree(type, 1);
    sprintf(addr, POS_STUB_FORMAT, lig, col);
    comment += <,<LIST,MakeString(addr),()>>;
    comment =  <LIST,comment,oldComment>;
    
    // put it on node
    PutComm(tree, comment);
}

/**************************************************************
       DestroyComment :  destroy a comment 
   ***************************************************************/
PTREE DestroyComment ( const PTREE &comm )
{
    int     rank = ranktree(comm);
    PTREE   commRet ;
    PTREE   father ;
    
    father =  comm ^ ;
    if ( !father ) 
        return 0 ;
    
    /* if father is a comment return it otherwise return 0 */
    if ( rank == 2 ) 
        commRet =  father ;
    else 
        commRet =  (PTREE)0 ;
    
    /* destroy comment */
    replacetree(father, rank, sontree(comm, 2));
    
    /* return father or nil */
    return commRet ;
}

/**************************************************************
       TrimPosComment : Trim pos comments of a tree 
   ***************************************************************/
void TrimPosComment ( const PTREE &tree )
{
    PTREE   comm, oldComm, father ;
    char    *val ;
    int     preLineMax = -1, preColMax = -1 ;
    int     postLineMin = 32000, postColMin = 32000 ;
    int     line, col ;
    int     lineFather, colFather ;
    int     first ; /* indicates that there is a good comment */ 
    int     again ; /* indicates that there are standard comment among the
                       
                       pos comment , in this case put another pos comment 
                       
                       we must put pos comment around the real comment */ 
    
    if ( !tree || NumberTree(tree) == TERM_TREE ) 
        return ;
    
    // erase comments which are out of sequence
    if ( (comm = GetComm(tree)) ) {
        while ( comm != <,<>,()> ) {
            comm == <,<>,comm>;
        }
        while ( comm != tree ) {
            father =  comm ^ ;
            while ( father != tree && !IsPosComment(father) ) 
                father =  father ^ ;
            if ( father != tree && GetPosCommentContent(comm, &line, &col) ) {
                GetPosCommentContent(father, &lineFather, &colFather);
                if ( lineFather > line || lineFather == line && colFather > col ) {
                    DestroyComment(father);
                    continue ;
                }
            }
            comm =  father ;
        }
    }
    oldComm =  comm = (PTREE)0 ;
    first   =  0 ;
    again   =  0 ;
    while ( (comm = NextComm(tree, PRE, comm)) ) {
        if ( GetPosCommentContent(comm, &line, &col) ) {
            if ( line > preLineMax || line == preLineMax && col > preColMax ) {
                preLineMax =  line ;
                preColMax  =  col ;
                
                /* if we have allready seen a comm, destroy it */
                if ( oldComm && !again ) {
                    DestroyComment(oldComm);
                }
                
                /* put this comm as old */
                if ( !again ) 
                    oldComm =  comm ;
                else {
                    oldComm =  (PTREE)0 ;
                    again   =  0 ;
                }
                first =  1 ;
            } else {
                
                /* this pos is of no interest destroy it */
                if ( !again ) {
                    comm =  DestroyComment(comm);
                } else {
                    oldComm =  (PTREE)0 ;
                    again   =  0 ;
                }
            }
        } else 
            again =  1 ;
    }
    if ( first ) {
        currentLine =  preLineMax ;
        currentCol  =  preColMax ;
    }
    forallsons (tree,
        TrimPosComment(for_elem)
    )
    oldComm =  comm = (PTREE)0 ;
    first   =  0 ;
    again   =  0 ;
    while ( (comm = NextComm(tree, POST, comm)) ) {
        if ( GetPosCommentContent(comm, &line, &col) ) {
            if ( (line < postLineMin || line == postLineMin && col < postColMin) && (line >= currentLine || line == currentLine && col >= currentCol) ) {
                postLineMin =  line ;
                postColMin  =  col ;
                
                /* if we have allready seen a comm, destroy it */
                if ( oldComm && !again ) {
                    DestroyComment(oldComm);
                }
                
                /* put this comm as old */
                if ( !again ) 
                    oldComm =  comm ;
                else {
                    again   =  0 ;
                    oldComm =  0 ;
                }
                first =  1 ;
            } else {
                
                /* this pos is of no interest destroy it */
                if ( !again ) {
                    comm    =  DestroyComment(comm);
                    again   =  0 ;
                    oldComm =  0 ;
                }
            }
        } else 
            again =  1 ;
    }
    if ( first ) {
        currentLine =  postLineMin ;
        currentCol  =  postColMin ;
    }
}

/**************************************************************
       DestroyPosComment : Destroy pos comments of a tree 
   ***************************************************************/
void DestroyPosComment ( const PTREE &tree )
{
    PTREE   comm, oldComm = PTREE((void *)0), father ;
    
    if ( !tree ) 
        return ;
    
    // erase the pre comments
    while ( (comm = NextComm(tree, PRE, comm)) ) 
        if ( IsPosComment(comm) ) {
            
            // destroy comment found before
            if ( oldComm ) 
                DestroyComment(oldComm);
            
            // mark the new one wait before destroying
            // because of NextComm
            oldComm =  comm ;
        }
    
    // erase the post comments
    while ( (comm = NextComm(tree, POST, comm)) ) 
        if ( IsPosComment(comm) ) {
            
            // destroy comment found before
            if ( oldComm ) 
                DestroyComment(oldComm);
            
            // mark the new one wait before destroying 
            // because of NextComm
            oldComm =  comm ;
        }
    
    // if there is a comment remaining destroy it
    if ( oldComm ) 
        DestroyComment(oldComm);
}

void DestroyPosCommentRec ( const PTREE &tree )
{
    foreach ((),tree,{
        DestroyPosComment(for_elem);
    })
}

static int  NbTree ; /* number of trees in constructor */ 
static int  NbDump ; /* number of trees dumped on a line */ 
bool        theConstructorDump = false ;

void MakeTreeGenDirRec ( PTREE &paramTree, int nbTreeParam )
{
    int     nbParam, currParam, gennode ;
    char    myString [5];
    PTREE   son ;
    
    theConstructorDump =  true ;
    if ( nbTreeParam ) {
        Mark();
        "TheConstructor(stackTree,ptStackTree,";
        NbTree =  nbTreeParam ;
        NbDump =  0 ;
        MakeTreeGenDirRec(paramTree);
        "-3) ;" <NL>
        UnMark();
        return ;
    }
    if ( NbTree == 50 ) {
        "-3);" <NL>
        "TheConstructor(stackTree,ptStackTree,";
        NbTree =  0 ;
    } else 
        NbTree++ ;
    if ( NbDump == 9 ) {
        <NL>
            <T>
        NbDump =  0 ;
    } else 
        NbDump++ ;
    if ( paramTree == <TERM_TREE> ) {
        "-2," "MakeString(\"";
        DumpBrainyValue(paramTree);
        "\"),";
        return ;
    } else if ( NumberTree(paramTree) == CLASS_TREE ) {
        "-2,";
        char    *toBeDumped = (char *)APPLY_CLASS(paramTree, TreeClass, DumpTree());
        WriteString(toBeDumped) WriteString(",");
        return ;
    }
    nbParam   =  treearity(paramTree);
    currParam =  1 ;
    while ( currParam <= nbParam ) {
        son =  SonTree(paramTree, currParam);
        if ( son != () ) 
            MakeTreeGenDirRec(son);
        else 
            "-4," 
        currParam++ ;
    }
    _itoa(nbParam, myString, 10);
    WriteString(NameConst(NumberTree(paramTree))) "," WriteString(myString) ",";
}

