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
   
   Christophe LECOMTE : Modification 22/02/2000
   Add methods CopyData and InitData
   */
#ifndef TABSORT
#define TABSORT 1
#include "smtoken.h"
#include "ptree.h"

class TabSortRoot {
    
    public :
    
        // constructor 
        TabSortRoot ()
        {
            sizeMax = size = 0 ;
            array = (void **)0 ;
            sorted = 0 ;
        }
        
        // constructor to prevent accidental use of copy constructor
        TabSortRoot ( const TabSortRoot &_xCopied )
        {
            sizeMax = size = 0 ;
            array = (void **)0 ;
            sorted = 0 ;
            CopyData(_xCopied);
        }
        
        // destructor 
        virtual ~TabSortRoot ()
        {
            if ( sizeMax ) {
                free(array);
                array = (void **)0 ;
                sizeMax = 0 ;
                size = 0 ;
            }
        }
        
        TabSortRoot &operator= ( const TabSortRoot &_xCopied )
        {
            CopyData(_xCopied);
            return *this ;
        }
        
        // sorting the list
        // min = first element to be considered
        // max = last element to be considered
        virtual void    Sort (int min = 0, int max = - 10) ;
        
        // getting an element by its name a void *
        virtual int GetIndex ( const void *elem )
        {
            char    *string = AllocString(GetElemName(elem));
            int     retValue = GetIndex(string);
            
            free(string);
            return retValue ;
        }
        
        virtual void *Get ( const void *elem )
        {
            char    *string ;
            void    *retValue ;
            PTREE   val ;
            
            string = (char *)GetElemName(elem);
            if ( !*string ) 
                return (void *)0 ;
            val = MakeString(string);
            string = Value(val);
            return Get(string);
        }
        
        // getting an element by its name a string
        // min index where to start looking
        // max index where to end looking
        // by default look in all array
        virtual int GetIndex (const char *, int min = 0, int max = - 10) ;
        
        virtual void *Get ( const char *name )
        {
            if ( !*name ) 
                return (void *)0 ;
            return Get(GetIndex(name));
        }
        
        // return an element by it's position
        virtual void *Get ( int i )
        {
            return i < 0 || i >= size ? (void *)0 : *(array + i);
        }
        
        // puting an element at a position
        // if no position put at the end of the list
        // starting at this position the element are shifted on their right
        virtual void    Put (void *, int slot = - 10) ;
        
        // inserting an element in the list
        virtual void    Insert (void *elem, int min = 0, int max = - 10) ;
        
        // inserting an element in the list
        // if element is allready there remove the old
        virtual void    InsertRemove (void *elem, int min = 0
            , int max = - 10) ;
        
        // removing an element
        virtual void Remove ( const void *elem )
        {
            char    *string = AllocString(GetElemName(elem));
            
            Remove(string);
            free(string);
        }
        
        virtual void Remove ( char *name )
        {
            Erase(GetIndex(name));
        }
        
        // debug
        virtual void Debug ( void ) {}
        
        // suppressing the elements which appears more than once
        virtual void    RemoveDup (void) ;
        
        // search duplicates starting at a position ( 0 for first)
        virtual void    *FindDuplicate (int start = 0) ;
        
        // search same pointer than position ( 0 for first)
        virtual void    *FindSame (int start = 0) ;
        
        // get size 
        int Size ()
        {
            return size ;
        }
        
        // inserting an element at a position
        // delete element at current position
        virtual void    InsertAt (void *elem, int posit) ;
        
        // erasing an element at a position
        virtual void    Erase (int) ;
        
        // getting an elem name
        virtual const char *GetElemName ( const void *elem ) const
        {
            return (char *)elem ;
        }
        
        // permuting to elements
        virtual void Exchange ( int pos1, int pos2 )
        {
            void    *inter = array [pos2];
            
            // exchange
            array [pos2] = array [pos1];
            array [pos1] = inter ;
        }
        
        // copy elements from another tabsort
        virtual void CopyData ( const TabSortRoot &_xSource )
        {
            if ( sizeMax ) {
                free(array);
                array = (void **)0 ;
            }
            size = _xSource.size ;
            sizeMax = _xSource.sizeMax ;
            
            // array = _xSource.array ;
            sorted = _xSource.sorted ;
            array = (void **)malloc(sizeMax * sizeof(void *));
            memcpy(array, _xSource.array, sizeMax * sizeof(void *));
        }
        
        // init data
        virtual void InitData ()
        {
            if ( sizeMax ) {
                free(array);
                array = (void **)0 ;
            }
            size = 0 ;
            sizeMax = 0 ;
            array = (void **)0 ;
            sorted = 0 ;
        }
    
    protected :
    
        int     size ;    // size of list
        int     sizeMax ; // size of array which is greater than size when 
                          // some elements have been deleted
        void    **array ; // array containing the pointers to
        
        // the elements of the list
        int     sorted ;  // indicates if array has been sorted
};

//************************************************************************
//************************************************************************
template <class Content> 
    
    class TabSortEqual : public TabSortRoot {
        
        public :
        
            // constructor 
            TabSortEqual () {}
            
            // constructor to prevent accidental use of copy constructor
            TabSortEqual ( const TabSortEqual &_xCopied )
                : TabSortRoot((const TabSortRoot &)_xCopied)
            {}
            
            // destructor 
            virtual ~TabSortEqual () {}
            
            TabSortRoot &operator= ( const TabSortRoot &_xCopied )
            {
                return TabSortRoot::operator= (_xCopied);
            }
            
            // sorting the list
            // min = first element to be considered
            // max = last element to be considered
            virtual void Sort ( int min = 0, int max = - 10 )
            {
                sorted = 1 ;
            }
            
            // operator []
            virtual Content *operator[] ( const Content *elem )
            {
                return (Content *)Get(elem);
            }
            
            virtual Content *operator[] ( const char *string )
            {
                return (Content *)TabSortRoot::Get(string);
            }
            
            virtual Content *operator[] ( int i )
            {
                if ( !sorted ) 
                    Sort();
                return (Content *)TabSortRoot::Get(i);
            }
            
#ifndef SOLARIS_CC
            
            // getting an element by its name a void *
            virtual int GetIndex ( const void *elem )
            {
                return TabSortRoot::GetIndex((const void *)elem);
            }
            
            virtual Content *Get ( const Content *elem )
            {
                return (Content *)TabSortRoot::Get((const void *)elem);
            }
            
            // puting an element at a position
            // if no position put at the end of the list
            // starting at this position the element are shifted on their right
            virtual void Put ( Content *elem, int slot = - 10 )
            {
                TabSortRoot::Put((void *)elem, slot);
            }
            
            // inserting an element in the list
            virtual void Insert ( Content *elem, int min = 0
                , int max = - 10 )
            {
                TabSortRoot::Insert((void *)elem, min, max);
            }
            
            // inserting an element in the list
            // if element is allready there remove the old
            virtual void InsertRemove ( Content *elem, int min = 0
                , int max = - 10 )
            {
                TabSortRoot::InsertRemove((void *)elem, min, max);
            }
            
            // removing an element
            virtual void Remove ( const Content *elem )
            {
                TabSortRoot::Remove((const void *)elem);
            }
            
            // inserting an element at a position
            // delete element at current position
            virtual void InsertAt ( Content *elem, int posit )
            {
                TabSortRoot::InsertAt((void *)elem, posit);
            }
            
            // getting an elem name
            virtual const char *GetElemName ( const Content *elem ) const
            {
                return "";
            }
            
            virtual const char *GetElemName ( const void *elem ) const
            {
                return "";
            }
#else 
            
            // getting an element by its name a void *
            virtual int GetIndex ( const void *elem )
            {
                return TabSortRoot::GetIndex((const void *)elem);
            }
            
            virtual int GetIndex ( const char *name, int min = 0
                , int max = - 10 )
            {
                return TabSortRoot::GetIndex(name, min, max);
            }
            
            virtual void *Get ( const void *elem )
            {
                return TabSortRoot::Get((const void *)elem);
            }
            
            // return an element by it's position
            virtual void *Get ( int i )
            {
                return TabSortRoot::Get(i);
            }
            
            // return an element by it's position
            virtual void *Get ( const char *name )
            {
                return TabSortRoot::Get(name);
            }
            
            // puting an element at a position
            // if no position put at the end of the list
            // starting at this position the element are shifted on their right
            virtual void Put ( void *elem, int slot = - 10 )
            {
                TabSortRoot::Put((void *)elem, slot);
            }
            
            // inserting an element in the list
            virtual void Insert ( void *elem, int min = 0, int max = - 10 )
            {
                TabSortRoot::Insert((void *)elem, min, max);
            }
            
            // inserting an element in the list
            // if element is allready there remove the old
            virtual void InsertRemove ( void *elem, int min = 0
                , int max = - 10 )
            {
                TabSortRoot::InsertRemove((void *)elem, min, max);
            }
            
            // removing an element
            virtual void Remove ( const void *elem )
            {
                TabSortRoot::Remove((const void *)elem);
            }
            
            virtual void Remove ( char *name )
            {
                TabSortRoot::Remove(name);
            }
            
            // inserting an element at a position
            // delete element at current position
            virtual void InsertAt ( void *elem, int posit )
            {
                TabSortRoot::InsertAt((void *)elem, posit);
            }
            
            // getting an elem name
            virtual const char *GetElemName ( const void *elem ) const
            {
                return "";
            }
            
            // debug
            virtual void Debug ( void ) {}
            
            // suppressing the elements which appears more than once
            virtual void RemoveDup ( void )
            {
                TabSortRoot::RemoveDup();
            }
            
            // search duplicates starting at a position ( 0 for first)
            virtual void *FindDuplicate ( int start = 0 )
            {
                return TabSortRoot::FindDuplicate(start);
            }
            
            // search same pointer than position ( 0 for first)
            virtual void *FindSame ( int start = 0 )
            {
                return TabSortRoot::FindSame(start);
            }
            
            // get size 
            const int Size ()
            {
                return TabSortRoot::Size();
            }
            
            // erasing an element at a position
            virtual void Erase ( int pos )
            {
                TabSortRoot::Erase(pos);
            }
            
            virtual void Exchange ( int pos1, int pos2 )
            {
                TabSortRoot::Exchange(pos1, pos2);
            }
            
            // copy elements from another tabsort
            virtual void CopyData ( const TabSortRoot &_xSource )
            {
                TabSortRoot::CopyData(_xSource);
            }
            
            // init data
            virtual void InitData ()
            {
                TabSortRoot::InitData();
            }
#endif
    };

template <class Content> 
    
    class TabSort : public TabSortEqual<Content> {
        
        public :
        
            // constructor 
            TabSort () {}
            
            // constructor to prevent accidental use of copy constructor
            TabSort ( const TabSort &_xCopied )
                : TabSortRoot((const TabSortRoot &)_xCopied)
            {}
            
            // destructor 
            virtual ~TabSort () {}
            
            // sorting the list
            // min = first element to be considered
            // max = last element to be considered
            virtual void Sort ( int min = 0, int max = - 10 )
            {
                TabSortRoot::Sort(min, max);
            }
            
            // getting an elem name
            virtual const char *GetElemName ( const Content *elem ) const
            {
                return (char *)(const char *)(*elem);
            }
            
            virtual const char *GetElemName ( const void *elem ) const
            {
                return (char *)(const char *)(*(Content *)elem);
            }
    };

class TabSortString : public TabSortRoot {
    
    public :
    
        TabSortString ()
        {
            initialized = true ;
        }
        
        // constructor to prevent accidental use of copy constructor
        TabSortString ( const TabSortString &_xCopied )
            : TabSortRoot((const TabSortRoot &)_xCopied)
        {}
        
        ~TabSortString ()
        {
            initialized = false ;
        }
        
        virtual void Sort ( int min, int max )
        {
            sorted = 1 ;
        }
        
        static bool initialized ;
};
#endif
