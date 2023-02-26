/**************************************************************
     
     
                    QMemGes : Malloc without a cache in files
     
                    Developped by Eric Lavillonniere on Tandon
     
   ***************************************************************/
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
#ifndef MEMGES_FILE
#   define MEMGES_FILE 1
    
    /* register are no longer supported since version 17 of gcc */
#   define register 
#   include <stdio.h>
    
    /**************************************************************
           CacheRead : read a value with a cache
       ***************************************************************/
    inline int CacheRead ( void *position )
    {
        return *(int *)position ;
    }
    
    /**************************************************************
           CacheAddrRead : read an address of a value in a cache
       ***************************************************************/
    inline char *CacheAddrRead ( void *position )
    {
        return (char *)position ;
    }
    
    inline char *CacheAddrReadM ( void *position )
    {
        return (char *)position ;
    }
    
    /**************************************************************
           CacheWrite : write a value with a cache
       ***************************************************************/
    inline void CacheWrite ( void *position, int value )
    {
        register int    *addr = (int *)position ;
        
        *addr =  value ;
    }
    
    /**************************************************************
           LCacheRead : read a long value with a cache
       ***************************************************************/
    inline void *LCacheRead ( void *position )
    {
        return *(void **)position ;
    }
    
    /**************************************************************
           LCacheWrite : write a value with a cache
       ***************************************************************/
    inline void LCacheWrite ( void **position, void *value )
    {
        *position =  value ;
    }
    
    /**************************************************************
           CacheInit : init the cache manager
       ***************************************************************/
    inline void CacheInit () {}
    
    /**************************************************************
           CacheEnd : end the cache manager
       ***************************************************************/
    inline void CacheEnd () {}
    
    /**************************************************************
           CacheMalloc : malloc of a data with cache manager
       ***************************************************************/
    extern void MetaExit (int, const char *) ;
    
    typedef struct {
        long            start ;
        unsigned int    size ;
        long            count ;
    }   MAP_POSITION ;
    
    void    InsertMap (long pos, unsigned int size) ;
    void    RemoveMap (long pos) ;
    
    inline long CacheMalloc ( int size )
    {
        long    ret ;
        
        if ( size <= 0 ) {
            MetaExit(3, "String Allocation Error\n");
        }
        if ( (ret = (long)malloc(size)) ) {
            InsertMap(ret, size);
            return ret ;
        } else {
            MetaExit(3, "Allocation Error\n");
        }
        return 0 ;
    }
    
    /**************************************************************
           CacheFree : free of a data with cache manager
       ***************************************************************/
    extern bool blockFreeTree ;
    
    inline void CacheFree ( void *position )
    {
        if ( blockFreeTree ) 
            return ;
        RemoveMap((long)position);
        free((char *)position);
    }
    
    inline int CacheLockFree ()
    {
        return 0 ;
    }
    
    inline void CacheUnLockFree () {}
#endif
