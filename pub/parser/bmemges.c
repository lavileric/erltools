/**************************************************************
    
    
                   MemGes : Malloc with a cache in files
    
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

#include <fcntl.h>
#include <io.h>
#include <stdio.h>
#include <sys\types.h>
#include <sys\stat.h>
#include <malloc.h>
#include "token.h"
#include "memges.h"

#include "vmemory.h"

#define BUFFER_EXTENT   12 /* 4096 */    /* size of each cache */
#define BUFFER_SIZE     4096 /* 2 ^ 12 */

typedef struct free_elem {
    long    deb ;
    long    size ;
    struct free_elem    *Next ;
}   FREE_ELEM,  *PFREE_ELEM ;

static PFREE_ELEM   freeList = (PFREE_ELEM)0 ;
static PFREE_ELEM   freeListKeep = (PFREE_ELEM) 0 ;
static PFREE_ELEM   keepElem = (PFREE_ELEM)0 ;

#define BUFFER_ARRAY_SIZE 1024

static _vmhnd_t __far * theBuffers ; /* les handle des buffers */
static int maxBuffer ; /* nombre de buffers */

#define NB_LOCK 23 /* nombre de buffer lockes */

typedef struct elemArray {
    int offsetArray ; /* offset dans theBuffers */
    void __far * contentArray ; /* pointeur associe */
    long     timeArray ; 
} ELEM_ARRAY , * PELEM_ARRAY ;

static ELEM_ARRAY lockArray [NB_LOCK];  /* tableau des locks */
static long time ;
 
/**************************************************************
      AllocBuffer : allocate a new buffer
  ***************************************************************/ 

void AllocBuffer()
{
    _vmhnd_t vmhnd_t ;

    if ( maxBuffer >= BUFFER_ARRAY_SIZE) {
        write(2,"Malloc out of array space \n",27);
        exit(1);
    }
    
    /* allocate a new buffer */
    *(theBuffers + maxBuffer++ ) = vmhnd_t = _vmalloc(BUFFER_SIZE);

    if ( vmhnd_t == _VM_NULL ) {
        write(2,"Malloc out of virtual space \n",28);
        exit(1);
    }
}

/**************************************************************
      LoadBuffer : load buffer specified 
  ***************************************************************/

static int oldBuffer ;
static int oldSi;

void * LoadBuffer (int i )
{
    _vmhnd_t handle ;
    
    time++;

    /* si meme buffer que la derniere fois on prend */
    if ( i == oldBuffer) {
        __asm {
            mov si,WORD PTR oldSi
            jmp DoSet
        }
    }

    oldBuffer = i ;

    __asm {
        mov     bx,i

        ; si necessaire charge un nouveau buffer 
        mov     ax, maxBuffer
        cmp     ax, bx
        jne     debutLoadBuffer 
        mov     si,bx
        call    AllocBuffer
        mov     bx,si

        ; puis traitement
    debutLoadBuffer :

        ; si pointe sur les valeurs successives dans le tableau de lock
        ; cx compteur
        mov     si, offset lockArray
        mov     dx,0x7fff
        mov     cl,16
        _emit   0x66
        shl     dx,cl
        mov     dx,0xffff
        mov     cx,0
    suiteLoadBuffer :
        mov     ax, [si]
        cmp     ax, -1
        je      DoLoad               ; buffer non initialise ok
        cmp     ax, bx
        je      DoSet                ; on a trouve l'offset cherche ok
        _emit   0x66
        mov     ax,6[si]
        _emit   0x66
        cmp     ax,dx
        jge     suiteBoucle         ; temps superieur continu
        _emit   0x66
        mov     dx,ax
        mov     di,si
suiteBoucle :
        add si, 10
        inc cx
        cmp cx,NB_LOCK
        jne suiteLoadBuffer
    
        _emit   0x66
        mov     si, di
        mov     ax , [si]
        shl     ax, 1
        shl     ax, 1
        mov     di, WORD PTR theBuffers
        mov     es, WORD PTR theBuffers +2
        add     di, ax
        _emit   0x66
        mov     ax, es:[di]
        _emit   0x66
        mov     WORD PTR handle,ax
        mov     di,bx
    }
        _vunlock  (handle,_VM_DIRTY);
 
    __asm {
        mov     bx,di
        DoLoad :
        mov     [si],bx    
        mov     ax, bx
        shl     ax, 1
        shl     ax, 1
        mov     di, WORD PTR theBuffers
        mov     es, WORD PTR theBuffers + 2
        add     di, ax
        _emit   0x66
        mov     ax,es:[di]
        _emit   0x66
        mov     WORD PTR handle,ax
    }
        _vlock(handle) ;

    __asm {
        mov     2[si],ax
        mov     4[si],dx
        doSet  :
        _emit   0x66
        mov     ax, WORD PTR time
        _emit   0x66
        mov     6[si],ax
        mov     ax,2[si]
        mov     dx,4[si]
        mov     WORD PTR oldSi,si
    }
}

/**************************************************************
      CacheRead : read a value with a cache
  ***************************************************************/ 

int CacheRead(position)
long    position ;
{
    CacheAddrRead(position);

    __asm {
        mov     es,dx
        mov     bx,ax
        mov     ax,WORD PTR es:[bx]
    }
}

/**************************************************************
      CacheAddrRead : read an address of a value in a cache
  ***************************************************************/ 

char __far * CacheAddrRead(position)
long    position ;
{
    int i ;
#if 0
    int     nbBuffer = position >> BUFFER_EXTENT ; /* no de buffer */
    int     offset   = position - ( nbBuffer << BUFFER_EXTENT) ; /* offset / buffer */
#endif     

    __asm {
        _emit       0x66
        mov     bx, WORD PTR 6[bp]
        mov     si, bx
        mov     cl, BUFFER_EXTENT
        _emit   0x66
        shr     bx, cl
        mov     i,  bx
        and     si, 0x0fff
     }

     LoadBuffer (i);

     __asm {
        add     ax,si
     }

#if 0
    if ( nbBuffer < 0 || nbBuffer >= maxBuffer ) {
        write(2," Illegal read  access \n",22);
        exit(1);
    }
#endif

#if 0
    return ((char __far *) _vload (theBuffers[nbBuffer],_VM_DIRTY) + offset);
#endif
#if 0
    __asm {
        _emit   0x66
        mov     ax,WORD PTR theBuffers
        _emit   0x66
        shl     bx,1
        _emit   0x66
        shl     bx,1
        _emit   0x66
        add     ax,bx
        mov     bx,ax
        mov     cl,16
        _emit   0x66
        shr     ax,cl
        mov     es,ax
        push    WORD PTR es:2[bx]
        push    WORD PTR es:[bx]
        mov     ax,1
        push    ax
        call    FAR PTR _vload
        add     ax,si
    }
#endif
}

/**************************************************************
      CacheAddrReadM : read an address of a value in a cache
  ***************************************************************/ 

char __far * CacheAddrReadM(position)
long    position ;
{
    return CacheAddrRead(position);
}
 
/**************************************************************
      CacheWrite : write a value with a cache
  ***************************************************************/ 

void CacheWrite(position, value)
long    position ;
int     value ;
{
    CacheAddrRead(position);

    __asm {
        mov     es,dx
        mov     bx,ax
        mov     ax, WORD PTR 10[bp]
        mov     WORD PTR es:[bx],ax
    }
}

/**************************************************************
      LCacheRead : read a long value with a cache
  ***************************************************************/ 

long LCacheRead(position)
long    position ;
{

    CacheAddrRead(position) ;

    __asm {
        mov     es,dx
        mov     bx,ax
        mov     dx,WORD PTR es:2[bx]
        mov     ax,WORD PTR es:[bx]
    }
}

/**************************************************************
      LCacheWrite : write a value with a cache
  ***************************************************************/ 

void LCacheWrite(position, value)
long    position ;
long    value ;
{

    CacheAddrRead(position);

    __asm {
        mov     es,dx
        mov     bx,ax
        _emit   0x66
        mov     ax, WORD PTR 10[bp]
        _emit   0x66
        mov     WORD PTR es:[bx],ax
    }
}

/**************************************************************
      FreeElemAlloc : alloc a free list elem
  ***************************************************************/

PFREE_ELEM FreeElemAlloc()
{
#if 0
    PFREE_ELEM  ret ;
    
    if ( keepElem ) {
        ret = keepElem ;
        keepElem = keepElem -> Next ;
    } else 
        ret = (PFREE_ELEM)malloc(sizeof(FREE_ELEM));
    return ret ;

#endif


    __asm {

        _emit 0x66
        mov ax, WORD PTR keepElem
        _emit 0x66
        or  ax, ax
        jz  allocate
        mov bx, WORD PTR keepElem
        mov es, WORD PTR keepElem +2
        _emit 0x66
        mov ax, es:8[bx]
        _emit 0x66
        mov WORD PTR keepElem,ax
        mov ax, bx
        mov dx, es
        jmp finFreeElem

    allocate :

        mov  ax,12
        push ax
        call malloc


finFreeElem :
   }

}

/**************************************************************
      CacheInit : init the cache manager
  ***************************************************************/ 

void CacheInit()
{
    int i = 0 ;

    _vheapinit(0,12288,_VM_ALLSWAP); /* 4096 * 16 = 64k */
    theBuffers = (_vmhnd_t *) _vlock (
                        _vmalloc(BUFFER_ARRAY_SIZE * sizeof(_vmhnd_t)));
    maxBuffer = 0 ; /* au depart il n'y a pas de buffer */

    for ( i = 0 ; i < NB_LOCK ; i++ ) lockArray[i] . offsetArray  = -1 ;
    time = 0 ;

    oldBuffer = -1;

    freeList = FreeElemAlloc();
    freeList -> deb = (long)0 ;
    freeList -> size = (long)10000000 ;
    freeList -> Next = (PFREE_ELEM)0 ;
    CacheMalloc(1);/* suppress null pointer */

}

/**************************************************************
      CacheEnd : end the cache manager
  ***************************************************************/ 

void CacheEnd()
{
    _vheapterm();
}

/**************************************************************
      CacheLockFree
  ***************************************************************/
void CacheLockFree()
{
    PFREE_ELEM ptElem = freeList ;
    PFREE_ELEM ptOld = freeList ;
    while ( ptElem -> Next ) {ptOld = ptElem ; ptElem = ptElem -> Next ; }
    if ( ptElem != ptOld) {
        ptOld -> Next = freeListKeep ;
        freeListKeep = freeList ;
    }
    freeList = ptElem ;
    return 1;
}

/**************************************************************
      CacheUnLockFree
  ***************************************************************/
void CacheUnLockFree()
{
    PFREE_ELEM ptElem = freeListKeep ;

    if ( !ptElem ) return ;
    while ( ptElem -> Next ) {ptElem = ptElem -> Next ; }

    ptElem -> Next = freeList ;
    freeList = freeListKeep ;
    freeListKeep = (PFREE_ELEM) 0 ;
}

/**************************************************************
      CacheMalloc : malloc of a data with cache manager
  ***************************************************************/

long CacheMalloc(size)
int     size ;
{
    PFREE_ELEM ptFreeElem,ptOld;
    int exit ;
    long ret ;
#if 0
    PFREE_ELEM  ptFreeElem = freeList ;
    PFREE_ELEM  ptOld = freeList ;
    int     exit = 0 ;
    long    ret ;
#endif
    
    __asm {

        _emit  0x66
        mov ax,WORD PTR freeList 
        _emit  0x66
        mov WORD PTR ptFreeElem,ax
        _emit  0x66
        mov WORD PTR ptOld,ax
        _emit 0x66
        xor ax,ax
        mov exit,ax
;
        mov ax,WORD PTR 6[bp]
        mov bx,2
        add ax,bx
        mov WORD PTR 6[bp],ax
;        
        mov es,WORD PTR freeList +2
        mov si,WORD PTR freeList
        mov bx,si
        mov dx,es
;
    my_loop1 :
;
        mov cx, es
        or  cx, si
        jz  end_loop1
        _emit 0x66
        cmp ax, word ptr es:4[si]
        jle  end_loop1
        mov bx,si
        mov dx,es
        mov cx,es:10[si]
        mov si,es:8[si]
        mov es,cx
        jmp short my_loop1
;
end_loop1 :
;
        mov word ptr ptOld, bx
        mov word ptr ptOld+2, dx
        mov word ptr ptFreeElem, si
        mov word ptr ptFreeElem+2, es
    }

#if 0
    size += sizeof(int);
    while ( ptFreeElem && ptFreeElem -> size < size ) {
        ptOld = ptFreeElem ;
        ptFreeElem = ptFreeElem -> Next ;
    }
#endif

    if ( !ptFreeElem ) 
        return(long)0 ;
    ret = ptFreeElem -> deb ;
    /* si la valeur que l'on rendrait serait a cheval sur la limite 
       d'un tableau on ne prend pas */
    if (((long)ret / BUFFER_SIZE) * BUFFER_SIZE + BUFFER_SIZE < ret + size ) 
        exit = 1 ;
    else {
        if ( ptFreeElem -> size < size + 6 * sizeof(int))
            size = ptFreeElem -> size ;/* do not tolerate unusable free elem */ 
        CacheWrite(ret, size);
    }
    ret += sizeof(int);
    /* s'il reste de l'espace utilisable on se contente de diminuer
       la taille de la cellule libre sinon on doit faire du menage dans
       les cellules */
    if ( ptFreeElem -> size != size ) {
        ptFreeElem -> deb += size ;
        ptFreeElem -> size -= size ;
    } else {
        if ( ptOld == ptFreeElem ) {
            freeList = freeList -> Next ;
            ptOld -> Next = keepElem ;
            keepElem = ptOld ;
        } else {
            ptOld -> Next = ptFreeElem -> Next ;
            ptFreeElem -> Next = keepElem ;
            keepElem = ptFreeElem ;
        }
    }

    /* renvoie la zone si couvre pas la fin du buffer sinon on perd cet
       element */
    if ( !exit ) 
        return ret ;

    return CacheMalloc(size);
}

/**************************************************************
      CacheFree : free of a data with cache manager
  ***************************************************************/ 

void CacheFree(position)  
long    position ;
{
    PFREE_ELEM ptFreeElem,ptOld,ptNew;
    int bind,size;
    
    __asm {

        _emit  0x66
        mov ax,WORD PTR freeList 
        _emit  0x66
        mov WORD PTR ptFreeElem,ax
        _emit  0x66
        mov WORD PTR ptOld,ax
        xor ax,ax
        mov bind,ax

        _emit 0x66
        mov ax,WORD PTR position
        _emit 0x66
        xor bx,bx
        mov bx,2
        _emit 0x66
        sub ax,bx
        _emit 0x66
        mov WORD PTR position,ax
        
        mov es,WORD PTR freeList +2
        mov si,WORD PTR freeList
        mov bx,si
        mov dx,es

    my_loop :

        mov cx, es
        or  cx, si
        jz  end_loop
        _emit  0x66
        cmp ax, word ptr es:[si]
        jl  end_loop
        mov bx,si
        mov dx,es
        mov cx,es:10[si]
        mov si,es:8[si]
        mov es,cx
        jmp short my_loop

end_loop :

        mov word ptr ptOld, bx
        mov word ptr ptOld+2, dx
        mov word ptr ptFreeElem, si
        mov word ptr ptFreeElem+2, es
    }

#if 0

    PFREE_ELEM  ptFreeElem = freeList, ptOld = freeList, ptNew ;
    int     size, bind = 0 ;
    
    position -= sizeof(int);
    while ( ptFreeElem && ptFreeElem -> deb <= position ) {
        ptOld = ptFreeElem ;
        ptFreeElem = ptFreeElem -> Next ;
    }
#endif

    size = CacheRead(position);
    if ( ptOld != ptFreeElem && position < ptOld -> deb + ptOld -> size
             || position + size > ptFreeElem -> deb ) {
        write(2, "double free \n", 13);
        return ;
    }
    if ( ptFreeElem ) 
        if ( position + size == ptFreeElem -> deb ) {
            ptFreeElem -> deb -= size ;
            ptFreeElem -> size += size ;
            bind = 1 ;
        }
    if ( ptOld -> deb + ptOld -> size == position ) {
        if ( bind ) {
            ptOld -> size += ptFreeElem -> size ;
            ptOld -> Next = ptFreeElem -> Next ;
            ptFreeElem -> Next = keepElem ;
            keepElem = ptFreeElem ;
        } else 
            ptOld -> size += size ;
        return ;
    }
    if ( !bind ) {
        ptNew = FreeElemAlloc();
        if (!ptNew) {
            write(2, "malloc out of space \n", 21);
            return ;
        }
        ptNew -> size = size ;
        ptNew -> deb = position ;
        ptNew -> Next = ptFreeElem ;
        if ( ptOld != ptFreeElem ) 
            ptOld -> Next = ptNew ;
        else 
            freeList = ptNew ;
    }


}
