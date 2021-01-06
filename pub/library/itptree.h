/*************************************************************************/
/*                                                                       */
/*        itptree.h - Built by Eric Lavillonniere on Tandon 486 - 96       */
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
#include "token.h"

#ifndef ITPTREE_FILE
#define ITPTREE_FILE 1

class ItPtree {
    
    public :
    
        ItPtree ()
        {
            searched = (PPTREE)0 ;
            end = (PPTREE)0 ;
            current = (PPTREE)0 ;
            allSearch = skipSon = 0 ;
            justStarted = 1 ;
        }
        
        ItPtree ( PPTREE currTree, PPTREE searchedTree = (PPTREE)0 )
        {
            current = currTree ;
            end = FSNextTree(current, (PPTREE)0);
            searched = searchedTree ;
            allSearch = skipSon = 0 ;
            justStarted = 1 ;
        }
        
        ItPtree ( ItPtree &itPtree )
        {
            current = itPtree.current ;
            end = itPtree.end ;
            searched = itPtree.searched ;
            skipSon = itPtree.skipSon ;
            allSearch = itPtree.allSearch ;
            justStarted = itPtree.justStarted ;
        }
        
        PTREE operator++ ( int )
        {
            if ( !justStarted ) 
                if ( skipSon ) {
                    current = SNextTree(current, (PPTREE)end, allSearch);
                    skipSon = 0 ;
                } else 
                    current = NextTree(current, (PPTREE)end, allSearch);
            justStarted = 0 ;
            if ( searched ) 
                return current = FindNext(searched, current, end);
            else 
                return current ;
        }
        
        void Current ( PPTREE currTree )
        {
            current = currTree ;
            justStarted = 0 ;
        }
        
        void Searched ( PPTREE currTree )
        {
            searched = currTree ;
        }
        
        void End ( PPTREE currTree )
        {
            end = currTree ;
        }
        
        void AllSearch ( int search )
        {
            allSearch = search ;
        }
        
        void SkipSon ( int skip )
        {
            skipSon = skip ;
        }
        
        virtual ~ItPtree () {}
        
        static PPTREE   NextTree (PPTREE elem, PPTREE stop, int all = 0) ;
        static PPTREE   SNextTree (PPTREE elem, PPTREE stop, int all = 0) ;
        static PPTREE   FSNextTree (PPTREE elem, PPTREE stop) ;
        static PPTREE   FindNoUp (PPTREE elem, PPTREE start, PPTREE stop) ;
        static PPTREE   FindInternal (PPTREE elem, PPTREE start
            , PPTREE stop) ;
        static PPTREE   FindNext (PPTREE elem, PPTREE start, PPTREE stop) ;
        static PPTREE   FindRank (PPTREE elem, PPTREE start, PPTREE stop
            , int rank) ;
    
    private :
    
        PTREE  searched ; // searched tree
        PTREE  end ;      // end tree
        PTREE  current ;  // current tree
        int     skipSon ;
        int     allSearch ;
        int     justStarted ;
};
#endif
