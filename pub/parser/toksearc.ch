/*************************************************************************/
/*                                                                       */
/*        toksearc.ch - Built by Eric Lavillonniere on Tandon 386 - 93    */
/*                                                                       */
/*************************************************************************/
/* This file is part of metagen                                             
   
   Metagen is a syntaxic analyser generator with backtrack.
   
   It runs on dos and unix. It generates c code. */
/* Copyright(C) 1993 Eric Lavillonniere */
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
language metalang;

#include "metalang.h"

// #ifndef SUN
// #include "..\metachop\metachop.h"
// #else
// #include "../metachop/metachop.h"
// #endif
extern PPTREE   treeToken ;
//
//  LexNumber return a number associated with a  lex function
//
static PTREE    listLex = (PTREE)0 ; // list of lex function with 
                                     // their number
static int      nbLex = 1 ;          // current number for numbering 
                                     // lex function

// int LexNumber (PTREE) ;
int LexNumber ( PTREE tree )
{
    PTREE   lexNumb ;
    char    string [10];
    
    if ( (lexNumb = ListFind(listLex, tree)) ) {
        
        // we have allready encountered this lex function 
        // get back it's number
        lexNumb == <,<>,lexNumb>;
        return atoi(Value(lexNumb));
    } else {
        
        // assign a number to function
        sprintf(string, "%d", nbLex);
        listLex =  <LIST,<LIST,MakeString(Value(tree)),MakeString(string)>,listLex>;
        return nbLex++ ;
    }
}

/**************************************************************
       SearchLexToken : search where token are defined in the lex
   ***************************************************************/
void SearchLexToken ( tree )
PTREE   tree ;
{
    PTREE   ptTree = tree ;
    PTREE   lexNumb ;
    
    // we could use included grammar, se free previous definitions
    FreeDescriptList();
    while ( ptTree ) {
        if ( ptTree && numbertree(SonTree(ptTree, 1)) == LEXDEFINE_metalang ) {
            SearchToken(sontree(ptTree, 1), LexNumber(ptTree));
        }
        ptTree =  sontree(ptTree, 2);
    }
}

// SearchToken
void SearchToken ( tree, numb )
PTREE   tree ; /* the lexdefine rule */ 
int     numb ; /* the number of this lexdefine rule */ 
{
    PTREE   val, list ;
    char    *theValue ;
    int     i ;
    
    /* search nodes for the indication of a created token */
    foreach ((),tree,{
        switch ( for_elem ) {
            case <RETURN,val> : 
            INSERT_VAL : 
                switch ( val ) {
                    case <TOKEN> : 
                        theValue = AddKey(value(val));
                        i        = AddConst(theValue);
                        InsertDescript(i, theValue, numb, sontree(tree, 1));
                        break ;
                    case <EXCLA> : 
                        i = AddConst(SymboName(value(val), 0));
                        InsertDescript(i, SymboName(value(val), 0), numb, sontree(tree, 1));
                        break ;
                    case <STRING> : 
                        treeToken = AddToken(value(val), SymboName(value(val), 0), treeToken);
                        i         = AddConst(SymboName(value(val), 0));
                        InsertDescript(i, SymboName(value(val), 0), numb, sontree(tree, 1));
                        break ;
                    case <FUNC,<>,list> : 
                        {
                            if ( !strcmp(value(val), "SortKeyWord") || !strcmp(value(val), "UpSortKeyWord") ) 
                                InsertDescript(0, "KeyWord", numb, sontree(tree, 1));
                            
                            /* on analyse la valeur retournee en dehors
                               du mot clef */
                            list == <,val>;
                            
                            /* on a pu mettre le parametre en toute
                               lettre du genre IDENT_metalang au lieu
                               de !IDENT */
                            if ( val == <IDENT> ) {
                                InsertDescript(AddConst(value(val)), value(val), numb, sontree(tree, 1));
                            } else 
                                goto INSERT_VAL ;
                        }
                }
                goto for_continue ;
                break ;
            case <STORE_COMMENT_LINE> : 
                InsertDescript( -1, "Comment", numb, sontree(tree, 1));
                break ;
            case <RECOGNIZE_STRING> : 
                InsertDescript( -2, "String", numb, sontree(tree, 1));
                break ;
            default : break ;
        }
    })
}


