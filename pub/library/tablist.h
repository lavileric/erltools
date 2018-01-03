/*************************************************************************/
/*                                                                       */
/*        tablist.h - Built by Eric Lavillonniere on Tandon 386 - 89     */
/*                                                                       */
/*************************************************************************/
/* Tablist create a table upon a list in order to sort it and to get
   quickly to it's members */
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
   Eric Lavillonniere - 13 November 1994 
        creation
   */
#ifndef TABLIST
#define TABLIST 1
#include "smtoken.h"
#include "ptree.h"
#include "tabsort.h"


class TabList : public TabSortEqual<TREE> {
    
    public :
    
        // constructor parameter is a list 
        TabList (PPTREE list) ;
        
        TabList () {}
        
        // destructor free the list
        virtual ~TabList () ;
        
        // getting the list
        PPTREE List ()
        {
            return father ;
        }
        
        // put
        virtual void    Put (void *ptree, int slot = - 10) ;
        
        // erasing an element at a position
        virtual void    Erase (int) ;
        
        // InsertAt
        virtual void InsertAt ( void *elem, int pos )
        {
            PPTREE  oldTree ;
            
            if ( pos < size ) {
                oldTree = (PPTREE)*(array + pos);
                TabSortRoot::InsertAt(elem, pos);
                replacetree(fathertree(oldTree), 1, elem);
                AddRef((PPTREE)elem);
                FreeRef(oldTree);
            } else {
                Put(elem, pos);
            }
        }
        
        // debug
        void    Debug (void) ;
        
        // sorting the list
        // min = first element to be considered
        // max = last element to be considered
        virtual void Sort ( int min = 0, int max = - 10 )
        {
            TabSortRoot::Sort(min, max);
        }
        
        virtual const char *GetElemName ( const TREE *elem ) const
        {
            return Value((TREE *)elem);
        }
        
        // getting an elem name
        virtual const char *GetElemName ( const void *elem ) const
        {
            return Value((TREE *)elem);
        }
        
        // permuting to elements
        virtual void Exchange ( int min, int max )
        {
            PPTREE  elemMin = (PPTREE)*(array + min);
            PPTREE  fatherMin = fathertree(elemMin);
            PPTREE  elemMax = (PPTREE)*(array + max);
            PPTREE  fatherMax = fathertree(elemMax);
            
            replacetree(fatherMin, 1, elemMax);
            *(array + min) = elemMax ;
            replacetree(fatherMax, 1, elemMin);
            *(array + max) = elemMin ;
        }
    
    private :
    
        PTREE   father ;
};
#endif
