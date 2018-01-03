/**************************************************************
     
     
                    MemGes : Malloc with a cache in files
     
                    Developped by Eric Lavillonniere on Tandon
     
   ***************************************************************/ 
#include <fcntl.h>
#include <io.h>
#include <stdio.h>
#include <sys\types.h>
#include <sys\stat.h>
#include <malloc.h>
#include "token.h"
#include "memges.h"

#define BUFFER_SIZE 4096     /* size of each cache */
#define BUFFER_NUMBER 15    /* number of caches */
/* the name of temporary file */ 
/* #define TMP_NAME "d:\cache.fil" */ 

extern char *TMP_NAME ;

typedef struct free_elem {
    long    deb ;
    long    size ;
    struct free_elem *Next ;
}   FREE_ELEM,  *PFREE_ELEM ;

static long theTime ;
static long maxpos = 0 ;
static long posBuffer [BUFFER_NUMBER];                  /* the beginning */ 
                                                        /* position of */ 
                                                        /* each cache */ 
static long timeBuffer [BUFFER_NUMBER];                 /* time of last */ 
                                                        /* use */ 
static char writeBuffer [BUFFER_NUMBER];
static char contBuffer [BUFFER_NUMBER][BUFFER_SIZE];    /* the cache */ 
static int  currentBuffer = 0 ;
static int  cacheFile ;                                 /* the file used */ 
                                                        /* by the cache */ 
                                                        /* manager */ 
static PFREE_ELEM   freeList = (PFREE_ELEM)0 ;
static PFREE_ELEM   keepElem = (PFREE_ELEM)0 ;

/**************************************************************
       CacheRead : read a value with a cache
   ***************************************************************/ 
CacheRead ( position )
long    position ;
{
    int cache = 0 ;
    long    cachePosition ;
    int *ret ;
    
    for (; cache < BUFFER_NUMBER ; cache++ ) {
    deb : 
        cachePosition = posBuffer [cache];
        if ( position >= cachePosition
                 && position <= cachePosition + BUFFER_SIZE - 1 ) {
            ret = (int *)&contBuffer [cache][position - cachePosition];
            timeBuffer [cache] = theTime++ ;
            return *ret ;
        }
    }
    BufferPosition(position);/* we don't find a cache so we put one */ 
    cache = currentBuffer ;
    goto deb ;
}

/**************************************************************
       CacheAddrRead : read an address of a value in a cache
   ***************************************************************/ 
char *CacheAddrRead ( position )
long    position ;
{
    int cache = 0 ;
    long    cachePosition ;
    
    for ( cache = 0 ; cache < BUFFER_NUMBER ; cache++ ) {
    deb : 
        cachePosition = posBuffer [cache];
        if ( position >= cachePosition
                 && position <= cachePosition + BUFFER_SIZE - 1 ) {
            timeBuffer [cache] = theTime++ ;
            return &contBuffer [cache][position - cachePosition];
        }
    }
    BufferPosition(position);/* we don't find a cache so we put one */ 
    cache = currentBuffer ;
    goto deb ;
}

/**************************************************************
       CacheWrite : write a value with a cache
   ***************************************************************/ 
CacheWrite ( position, value )
long    position ;
int value ;
{
    int cache, *pos ;
    long    cachePosition ;
    
    for ( cache = 0 ; cache < BUFFER_NUMBER ; cache++ ) {
    deb : 
        cachePosition = posBuffer [cache];
        if ( position >= cachePosition
                 && position <= cachePosition + BUFFER_SIZE - 1 ) {
            pos = (int *)&contBuffer [cache][position - cachePosition];
            timeBuffer [cache] = theTime++ ;
            writeBuffer [cache] = 1 ;
            *pos = value ;
            return ;
        }
    }
    BufferPosition(position);/* we don't find a cache so we put one */ 
    cache = currentBuffer ;
    goto deb ;
}

/**************************************************************
       LCacheRead : read a long value with a cache
   ***************************************************************/ 
long LCacheRead ( position )
long    position ;
{
    int cache = 0 ;
    long    cachePosition ;
    long    *pos ;
    
    for ( cache = 0 ; cache < BUFFER_NUMBER ; cache++ ) {
    deb : 
        cachePosition = posBuffer [cache];
        if ( position >= cachePosition
                 && position <= cachePosition + BUFFER_SIZE - 1 ) {
            timeBuffer [cache] = theTime++ ;
            pos = (long *)&contBuffer [cache][position - cachePosition];
            return *pos ;
        }
    }
    BufferPosition(position);/* we don't find a cache so we put one */ 
    cache = currentBuffer ;
    goto deb ;
}

/**************************************************************
       LCacheWrite : write a value with a cache
   ***************************************************************/ 
LCacheWrite ( position, value )
long    position ;
long    value ;
{
    int cache ;
    long    cachePosition, *pos ;
    
    for ( cache = 0 ; cache < BUFFER_NUMBER ; cache++ ) {
    deb : 
        cachePosition = posBuffer [cache];
        if ( position >= cachePosition
                 && position <= cachePosition + BUFFER_SIZE - 1 ) {
            pos = (long *)&contBuffer [cache][position - cachePosition];
            timeBuffer [cache] = theTime++ ;
            writeBuffer [cache] = 1 ;
            *pos = value ;
            return ;
        }
    }
    BufferPosition(position);/* we don't find a cache so we put one */ 
    cache = currentBuffer ;
    goto deb ;
}

/**************************************************************
       BufferPosition : put a cache to a position
   ***************************************************************/ 
BufferPosition ( position )
long    position ;
{
    int i ;
    long    min = timeBuffer [0];
    
    currentBuffer = 0 ;
    for ( i = 1 ; i < BUFFER_NUMBER ; i++ ) 
        if ( timeBuffer [i] < min ) {
            min = timeBuffer [i];
            currentBuffer = i ;
        }
    if ( writeBuffer [currentBuffer] ) {
        
        /* save current data */ 
        if ( posBuffer [currentBuffer] >= 0
                 && posBuffer [currentBuffer] < maxpos ) {
            lseek(cacheFile, posBuffer [currentBuffer], SEEK_SET);
            if ( write(cacheFile, (char *)contBuffer [currentBuffer]
                    , BUFFER_SIZE)
                 == - 1 ) {
                printf("File system is full \n");
                exit( - 1);
            }
        } else if ( posBuffer [currentBuffer] >= maxpos ) {
            write(2, " Illegal access to file system \n", 32);
            exit(0);
        }
    }
    
    /* read the new data */ 
    if ( (posBuffer [currentBuffer]
             = (long)position / BUFFER_SIZE * BUFFER_SIZE)
         > maxpos ) {
        write(2, " Illegal read for  file system \n", 32);
        exit(0);
    }
    lseek(cacheFile, posBuffer [currentBuffer], SEEK_SET);
    if ( posBuffer [currentBuffer] == maxpos ) {
        
        /*        write(cacheFile,contBuffer[0],BUFFER_SIZE);  */ 
        writeBuffer [currentBuffer] = 0 ;
        maxpos += BUFFER_SIZE ;
    } else {
        read(cacheFile, (char *)contBuffer [currentBuffer], BUFFER_SIZE);
        writeBuffer [currentBuffer] = 0 ;
    }
}

/**************************************************************
       FreeElemAlloc : alloc a free list elem
   ***************************************************************/ 
PFREE_ELEM FreeElemAlloc ()
{
    PFREE_ELEM  ret ;
    
    if ( keepElem ) {
        ret = keepElem ;
        keepElem = keepElem -> Next ;
    } else 
        ret = (PFREE_ELEM)malloc(sizeof(FREE_ELEM));
    return ret ;
}

/**************************************************************
       CacheInit : init the cache manager
   ***************************************************************/ 
CacheInit ()
{
    int i ;
    
    cacheFile = open(TMP_NAME, O_CREAT | O_RDWR | O_BINARY
        , S_IREAD | S_IWRITE);
    for ( i = 0 ; i < BUFFER_NUMBER ; i++ ) {
        posBuffer [i] = (long) - (BUFFER_SIZE + 1);
        timeBuffer [i] = 0 ;
        writeBuffer [i] = 0 ;
    }
    theTime = 0 ;
    freeList = FreeElemAlloc();
    freeList -> deb = (long)0 ;
    freeList -> size = (long)10000000 ;
    freeList -> Next = (PFREE_ELEM)0 ;
    CacheMalloc(1);/* suppress null pointer */ 
}

/**************************************************************
       CacheEnd : end the cache manager
   ***************************************************************/ 
CacheEnd ()
{
    close(cacheFile);
    remove(TMP_NAME);
}

/**************************************************************
       CacheMalloc : malloc of a data with cache manager
   ***************************************************************/ 
long CacheMalloc ( size )
int size ;
{
    PFREE_ELEM  ptFreeElem = freeList ;
    PFREE_ELEM  ptOld = freeList ;
    int exit = 0 ;
    long    ret ;
    
    size += sizeof(int);
    while ( ptFreeElem && ptFreeElem -> size < size ) {
        ptOld = ptFreeElem ;
        ptFreeElem = ptFreeElem -> Next ;
    }
    if ( !ptFreeElem ) 
        return (long)0 ;
    ret = ptFreeElem -> deb ;
    if ( (long)ret / BUFFER_SIZE * BUFFER_SIZE + BUFFER_SIZE < ret + size ) 
        exit = 1 ;
    else {
        if ( ptFreeElem -> size < size + 4 * sizeof(int) ) 
            size = ptFreeElem -> size ;/* do not tolerate unusable free elem */ 
        CacheWrite(ret, size);
    }
    ret += sizeof(int);
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
    if ( !exit ) 
        return ret ;
    return CacheMalloc(size);
}

/**************************************************************
       CacheFree : free of a data with cache manager
   ***************************************************************/ 
CacheFree ( position )
long    position ;
{
    PFREE_ELEM  ptFreeElem = freeList, ptOld = freeList, ptNew ;
    int size, bind = 0 ;
    
    position -= sizeof(int);
    while ( ptFreeElem && ptFreeElem -> deb <= position ) {
        ptOld = ptFreeElem ;
        ptFreeElem = ptFreeElem -> Next ;
    }
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
        ptNew -> size = size ;
        ptNew -> deb = position ;
        ptNew -> Next = ptFreeElem ;
        if ( ptOld != ptFreeElem ) 
            ptOld -> Next = ptNew ;
        else 
            freeList = ptNew ;
    }
}
