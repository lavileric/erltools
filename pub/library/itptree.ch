/*************************************************************************/
/*                                                                       */
/*        itptree.ch - Built by Eric Lavillonniere on Tandon 486 - 96       */
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
language metachop;

/******************************************************************
     NextTree : return next tree
   *******************************************************************/
PPTREE ItPtree::NextTree ( PPTREE elem, PPTREE stop, int all )
{
    PPTREE          father ;
    register PPTREE ret ;
    register int    arity ;
    int             rank ;
    
    if ( !elem ) 
        return elem ;
    arity =  treearity(elem);
    if ( arity > 0 && NumberTree(elem) != IN_LANGUAGE ) {
        /*
           IN_LANGUAGE is quite an atom of language */
        for ( rank = 1 ; rank <= arity ; rank++ ) 
            if ( (ret = sontree(elem, rank)) ) {
                if ( ret == stop ) 
                    return (PPTREE)0 ;
                if ( all || NumberTree(ret) != TERM_TREE ) 
                    return ret ;
            }
    } else {
    }
next : 
    if ( (father = FatherTree(elem)) ) {
        rank  =  ranktree(elem);
        arity =  treearity(father);
        while ( rank < arity ) {
            if ( (ret = sontree(father, rank + 1)) ) {
                if ( ret == stop ) 
                    return (PPTREE)0 ;
                if ( all || NumberTree(ret) != TERM_TREE ) 
                    return ret ;
            }
            rank =  rank + 1 ;
        }
        if ( father == stop ) 
            return (PPTREE)0 ;
        elem =  father ;
        goto next ;
    } else 
        return (PPTREE)0 ;
}

/******************************************************************
     SNextTree : return next tree not going down
   *******************************************************************/
PPTREE ItPtree::SNextTree ( PPTREE elem, PPTREE stop, int all )
{
    PPTREE          father ;
    register PPTREE ret ;
    int             rank ;
    
    if ( !elem ) {
        return elem ;
    } else {
    }
next : 
    if ( (father = FatherTree(elem)) ) {
        rank =  ranktree(elem);
        while ( rank < treearity(father) ) {
            if ( (ret = sontree(father, rank + 1)) ) {
                if ( ret == stop ) 
                    return (PPTREE)0 ;
                if ( all || NumberTree(ret) != TERM_TREE ) 
                    return ret ;
            }
            rank =  rank + 1 ;
        }
        if ( father == stop ) 
            return (PPTREE)0 ;
        elem =  father ;
        goto next ;
    } else 
        return (PPTREE)0 ;
}

/******************************************************************
     FSNextTree : return next tree stopping on father
   *******************************************************************/
PPTREE ItPtree::FSNextTree ( PPTREE elem, PPTREE stop )
{
    PPTREE          father ;
    register PPTREE ret ;
    int             rank ;
    
    if ( !elem ) {
        return elem ;
    } else {
    }
next : 
    if ( (father = fathertree(elem)) ) {
        rank =  ranktree(elem);
        while ( rank < treearity(father) ) {
            if ( (ret = sontree(father, rank + 1)) ) 
                return ret == stop ? (PPTREE)0 : ret ;
            rank =  rank + 1 ;
        }
        return father == stop ? (PPTREE)0 : father ;
    } else 
        return (PPTREE)0 ;
}

/******************************************************************
     FindNext : FindNext an elem beginning at start stopping at stop
   *******************************************************************/
/******************************************************************
     FindNoUp : find an elem beginning at start stopping at stop
                do not explore above start
   *******************************************************************/
PPTREE ItPtree::FindNoUp ( PPTREE elem, PPTREE start, PPTREE stop )
{
    register PPTREE ret ;
    int             rank, arity ;
    
debut : 
    if ( start && start == stop ) 
        return (PPTREE) -1 ;
    if ( QCompareTree(elem, start, (PPTREE)0, -1) ) 
        return start ;
    if ( !start || NumberTree(start) == IN_LANGUAGE ) 
        return (PPTREE)0 ;
    arity =  treearity(start);
    for ( rank = 1 ; rank < arity ; rank++ ) 
        if ( (ret = FindNoUp(elem, sontree(start, rank), stop)) ) 
            return ret ;
    
    /* tail recursion */
    if ( rank == arity ) {
        start =  sontree(start, rank);
        goto debut ;
    }
    return (PPTREE)0 ;
}

PPTREE ItPtree::FindInternal ( PPTREE elem, PPTREE start, PPTREE stop )
{
    register PPTREE ret, retValue ;
    int             rank = -1 ;
    
    if ( (retValue = FindNoUp(elem, start, stop)) ) 
        return retValue ;
next : 
    if ( (ret = FatherTree(start)) && (rank = ranktree(start)) < treearity(ret) ) 
        if ( (retValue = FindRank(elem, ret, stop, rank + 1)) ) 
            return retValue ;
    if ( ret ) {
        if ( ret == stop ) 
            return (PPTREE) -1 ;
        start =  ret ;
        goto next ;
    } else 
        return (PPTREE)0 ;
}

PPTREE ItPtree::FindNext ( PPTREE elem, PPTREE start, PPTREE stop )
{
    PPTREE  ret = (PPTREE)FindInternal(elem, start, stop);
    
    return ret == (PPTREE) -1 ? (PPTREE)0 : ret ;
}

/******************************************************************
     FindRank : Find an elem beginning at rank son of start stopping at stop
   *******************************************************************/
PPTREE ItPtree::FindRank ( PPTREE elem, PPTREE start, PPTREE stop, int rank )
{
    int     arity = treearity(start);
    PPTREE  ret ;
    
    for (; rank <= arity ; rank++ ) 
        if ( (ret = FindNoUp(elem, sontree(start, rank), stop)) ) 
            return ret ;
    return (PPTREE)0 ;
}


