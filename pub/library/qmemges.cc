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
#include <stdio.h>
#include "token.h"
#include "memges.h"

/**************************************************************
       CacheRead : read a value with a cache
   ***************************************************************/
int CacheRead ( long position )
{
    return *((int *)position);
}

/**************************************************************
       CacheAddrRead : read an address of a value in a cache
   ***************************************************************/
char *CacheAddrRead ( long position )
{
    return (char *)position ;
}

char *CacheAddrReadM ( long position )
{
    return (char *)position ;
}

/**************************************************************
       CacheWrite : write a value with a cache
   ***************************************************************/
void CacheWrite ( long position, int value )
{
    register int    *addr = (int *)position ;
    
    *addr = value ;
}

/**************************************************************
       LCacheRead : read a long value with a cache
   ***************************************************************/
long LCacheRead ( long position )
{
    return *((long *)position);
}

/**************************************************************
       LCacheWrite : write a value with a cache
   ***************************************************************/
void LCacheWrite ( long position, long value )
{
    register long   *addr = (long *)position ;
    
    *addr = value ;
}

/**************************************************************
       CacheInit : init the cache manager
   ***************************************************************/
void CacheInit () {}

/**************************************************************
       CacheEnd : end the cache manager
   ***************************************************************/
void CacheEnd () {}

/**************************************************************
       CacheMalloc : malloc of a data with cache manager
   ***************************************************************/
long CacheMalloc ( int size )
{
    (long)malloc(size);
}

/**************************************************************
       CacheFree : free of a data with cache manager
   ***************************************************************/
void CacheFree ( long position )
{
    free((char *)position);
}

int CacheLockFree ()
{
    return 0 ;
}

void CacheUnLockFree () {}
