/*************************************************************************/
/*                                                                       */
/*        trait.ch - Built by Eric Lavillonniere on Tandon 386 - 89  */
/*                                                                       */
/*************************************************************************/
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
language metalang;

#include "metalang.h"

// #ifndef SUN
// #include "..\metachop\metachop.h"
// #else
// #include "../metachop/metachop.h"
// #endif
void    traitement_addlist (PTREE) ;
void    traitement_proc (PTREE) ;
void    traitement_while (PTREE) ;
void    rep_addlist (PTREE, PTREE, PTREE) ;
int     nb_addlist, find_elem ;

/******************************************************************
           traitement : optimize the addlist in each procedure
   *******************************************************************/
void traitement ( tree )
PTREE   tree ;
{
    foreach (<DEFINE,<META,"name">,<META,"list">>,tree,{
        traitement_proc(for_elem);
        goto for_continue ;
    })
}

/******************************************************************
           traitement_proc : optimize a procedure
   *******************************************************************/
static PTREE    the_while ;

void traitement_proc ( tree )
PTREE   tree ;
{
    PTREE   searched, declaration, elem, position ;
    char    name [20];
    int     i ;
    
    nb_addlist =  0 ;
    foreach (parse (while $condition do $stat),tree,{
        the_while =  for_elem ;
        traitement_while(for_elem);
        goto for_continue ;
    })
    foreach (parse (repeat $stat until $condition),tree,{
        the_while =  for_elem ;
        traitement_while(for_elem);
        goto for_continue ;
    })
    if ( nb_addlist ) { 
        position =  ();
        for ( i = 1 ; i <= nb_addlist ; i++ ) {
            sprintf(name, "%s%d", "_addlist", i);
            position *= <IDENT,MakeString(name)>;
        }
        declaration =  parse (declare $(position));

        // elv 2020 a list level has been added suppress it
        PTREE father = position ^;
        if (father == <LIST>) father += position;

        // --
        tree == <,<>,elem>;
        tree += <,<>,declaration * elem>;
    }
}

/******************************************************************
           traitement_while : optimize the addlist of a while
   *******************************************************************/
void traitement_while ( tree )
PTREE   tree ;
{
    foreach (parse (addlist($list,$elem)),tree,{
        traitement_addlist(for_elem);
        goto for_continue ;
    })
}

/******************************************************************
           traitement_addlist : optimize an addlist
   *******************************************************************/
static PTREE    theName, theOldName ;
static int      useValue ;

void traitement_addlist ( tree )
PTREE   tree ;
{
    PTREE   inter, searched, new_value, old_value, list_elem ;
    int     rank ;
    char    name [20];
    
    find_elem =  0 ;
    old_value =  <IDENT,MakeString(Value(tree))>;
    foreach (parse ($(old_value) = $aff),the_while,
        find_elem++
    )
    if ( !find_elem ) {
        nb_addlist++ ;
        sprintf(name, "%s%d", "_addlist", nb_addlist);
        new_value  =  <IDENT,MakeString(name)>;
        useValue   =  0 ;
        theName    =  new_value ;
        theOldName =  old_value ;
        foreach (parse (addlist($(CopyTree(old_value)),$list)),the_while,
            rep_addlist(for_elem, theName, theOldName)
        )
        if ( useValue ) {
            list_elem =  parse ($(new_value) = $(old_value));
            searched  =  fathertree(the_while);
            if ( searched != <LIST> ) {
                rank  =  ranktree(the_while);
                inter =  <BEGIN,the_while * ()>;
                replacetree(searched, rank, inter);
                inter == <,inter>;
            } else 
                inter =  searched ;
            searched =  fathertree(inter);
            rank     =  ranktree(inter);
            inter    =  list_elem * inter ;
            replacetree(searched, rank, inter);
        } else 
            nb_addlist-- ;
    }
}

/******************************************************************
           rep_addlist : replace the addlist
   *******************************************************************/
void rep_addlist ( tree, new_value, old_value )
PTREE   tree ;
PTREE   new_value, old_value ;
{
    PTREE   inter, elem, rep, elem1, cond, list ;
    int     rank ;
    
    inter =  fathertree(tree);
    while ( inter != <DEFINE> ) {
        switch ( inter ) {
            case <MAKETREE> : return ;
            case <REPLACETREE> : return ;
            case <ADDLIST> : return ;
            case <RETURN> : return ;
            default : inter = fathertree(inter);
        }
    }
    replace(old_value, tree, CopyTree(new_value));
    cond  =  <ASIT,<LIST,MakeString(Value(old_value)),()>>;
    elem1 =  CopyTree(new_value);
    list  =  CopyTree(old_value);
    elem  =  parse (
        if $(cond) then
            $(elem1) = SonTree($(elem1),2)
        else
            $(list) = $(elem1)
    );
    inter =  tree ;
    rep   =  fathertree(inter);
    if ( rep != <LIST> ) {
        rank  =  ranktree(inter);
        inter =  <BEGIN,inter * ()>;
        replacetree(rep, rank, inter);
        inter == <,inter>;
    } else 
        inter =  rep ;
    inter == <,<>,rep>;
    inter    += <,<>,elem * rep>;
    useValue =  1 ;
}


