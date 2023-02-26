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
#include "tablist.h"

// constructor for TabList      
TabList::TabList ( PPTREE list )
{
    PPTREE  *ptElem ; // pointer on an element of array      
    
    // skip nil beginning the list
    while ( list && NumberTree(list) == LIST  && !sontree(list, 1) ) 
        list =  sontree(list, 2);
    
    // compute length of list      
    sizeMax =  size = ListLength(list);
    if ( size <= 0 ) 
        sizeMax =  1 ;
    
    // allocate the array for it       
    array  =  (void **)malloc(sizeMax * sizeof(PPTREE));
    ptElem =  (PPTREE *)array ;
    
    // put the elements of the list in the array      
    while ( list &&  NumberTree(list) == LIST ) {
        PPTREE  elem = SonTree(list, 1);
        if ( elem ) {}
        AddRef(elem);
        
        // if son is nil suppress it 
        if ( !elem ) {
            PPTREE  nElem, dad, son1, son2 ;
            
            // suppress elem with nil son
            nElem =  SonTree(list, 2);
            if ( NumberTree(nElem) == LIST ) {
                son1 =  SonTree(nElem, 1);
                son2 =  SonTree(nElem, 2);
                ReplaceTree(list, 1, son1);
                ReplaceTree(list, 2, son2);
            } else {
                dad  =  FatherTree(list);
                list =  PTREE(list)[2];
                replacetree(dad, 2, list);
            }
            
            // we have shorten the list, so decrease size
            size-- ;
            sizeMax-- ;
            
            // continue
            continue ;
        }
        
        // store the element       
        *ptElem++ =  elem ;
        
        // iterate on the list      
        list      =  SonTree(list, 2);
    }
    
    // put a ref on the list
    if ( size ) 
        father =  fathertree((PPTREE)(*array));
    else 
        father =  (PTREE)0 ;
    
    // indicates that the array is not sorted yet      
    sorted =  0 ;
}

// Destructor for TabList      
TabList::~TabList ()
{
    
    PPTREE  *ptElem = (PPTREE *)array ; // pointer on an element of array      
    int     index = size ;              // index indicating the number 
                                        // of element still      
                                        // to be freed      
    
    // do nothing on empty array
    if ( !sizeMax ) 
        return ;
    
    // free the element stored in the array      
    while ( index ) {
        
        // free element      
        FreeRef(*ptElem);
        
        // go on next element      
        index-- ;
        ptElem++ ;
    }
    
    // free ref on list  
    father =  (PTREE)0 ;
}

// Debug  
void TabList::Debug ( void )
{
    PPTREE  list = List();
    
    while ( list ) {
        DumpBrainyValue(list);
        NewLine();
        list =  SonTree(list, 2);
    }
}

// puting an element in a certain slot  
void TabList::Put ( void *treeParam, int slot )
{
    PPTREE  listElem ;
    TREE    *tree = (TREE *)treeParam ;
    
    // if slot == -10 put at the end of array  
    if ( slot == -10 ) {
        slot =  size ;
    }
    
    // if there is not enough space in the array resize it  
    int oldSizeMax = sizeMax ;
    
    if ( size == sizeMax ) {
        sizeMax += 10 ;
        if ( oldSizeMax ) 
            array =  (void **)realloc(array, sizeMax * sizeof(PPTREE));
        else 
            array =  (void **)malloc(sizeMax * sizeof(PPTREE));
    }
    
    // construct the list elem which contains the new elem  
    listElem =  MakeTree(LIST, 2);
    replacetree(listElem, 1, tree);
    if ( size ) {
        
        // link new elem in list  
        if ( slot < size ) {
            PPTREE  dad = nfathertree(*(array + slot), 2);
            int     rank = ranktree(fathertree(*(array + slot)));
            
            // first connect father of slot  
            replacetree(listElem, 2, fathertree(*(array + slot)));
            
            // now that father of slot is linked, put listElem in old  
            // position of father of slot  
            if ( dad ) {
                replacetree(dad, rank, listElem);
            }
        } else if ( size ) {
            PPTREE  dad = fathertree(*(array + slot - 1));
            replacetree(dad, 2, listElem);
        }
        
        // move all elements of array beginning at slot  
        PPTREE  *ptArray = (PPTREE *)(array + size);
        int     nbMove = size - slot ;
        memmove(array + slot + 1, array + slot, nbMove * sizeof(PPTREE *));
    }
    
    // put tree in the array  
    AddRef(tree);
    *(array + slot) =  tree ;
    
    // adjust reference if slot 0  
    if ( !slot ) {
        father =  fathertree((PPTREE)*array);
    }
    
    // increase size 
    size++ ;
}

// erasing an element  
void TabList::Erase ( int slot )
{
    
    // verify index  
    if ( slot < 0 || slot >= Size() ) 
        return ;
    
    // make changes in list  
    {
        PPTREE  dad = fathertree(*(array + slot));
        PPTREE  gFather = fathertree(dad);
        PPTREE  nextTree = sontree(dad, 2);
        int     rank = ranktree(dad);
        if ( !slot ) {
            father =  father [2];
        }
        replacetree(gFather, rank, nextTree);
    }
    FreeRef((PPTREE)*(array + slot));
    
    // erase elem of array
    TabSortRoot::Erase(slot);
}
