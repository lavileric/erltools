language metachop;

#include "salloc.h"
#include "malloc.h"

void SAlloc::GetSpace ( int size )
{
    int     currLength ;
    char    *pt ;
    PPTREE  ptTree ;
    long    delta ;
    
    // if not enough space allocate
    if ( basePt + size < currPt + length ) {
        if ( basePt ) {
            long    offset = currPt - basePt ;
            if ( (basePt = (char *)realloc(basePt, size + ALLOC_STEP)) ) 
                size += ALLOC_STEP ;
            delta =  basePt + offset - currPt ;
            if ( string >= basePt + delta && string <= currPt ) 
                string += delta ;
            currPt += delta ;
            minPt  += delta ;
            
            // update pointers
            if ( delta ) {
                pt =  basePt ;
                while ( pt < currPt ) {
                    currLength =  *((int *)pt);
                    if ( currLength >= 0 ) {
                        ptTree =  *((PPTREE *)(pt + sizeof(int)));
                        SON_WRITE(ptTree, 1, SON_READ(ptTree, 1) + delta);
                    } else 
                        currLength =  -currLength ;
                    pt += currLength ;
                }
            }
        } else if ( (minPt = (currPt = (basePt = (char *)malloc(5 * ALLOC_STEP)))) ) {
            size =  5 * ALLOC_STEP ;
        }
    }
}

char *SAlloc::MakeString ( PPTREE tree, char *string )
{
    int     length = strlen(string) + 1 + sizeof(int) + sizeof(PPTREE);
    int     currLength ;
    char    *pt ;
    PPTREE  ptTree ;
    long    delta ;
    
    if ( freeState ) {
        Pack(dfreePt);
        freeState =  0 ;
    }
    
    // alloc space 
    GetSpace(size);
    
    // alloc string
    if ( basePt + size >= currPt + length ) {
        
        // put length of record
        *((int *)currPt)    =  length ;
        currPt              += sizeof(int);
        
        // put back pointer
        *((PPTREE *)currPt) =  tree ;
        currPt              += sizeof(PPTREE);
        
        // put string
        length              -= sizeof(int) + sizeof(PPTREE);
        memcpy(currPt, string, length);
        dfreePt =  currPt += length ;
        return currPt - length ;
    } else 
        return (char *)0 ;
}

void SAlloc::FreeString ( char *string )
{
    freeState =  1 ;
    
    // check string
    if ( string < basePt || string >= currPt ) {
        _write(2, "Illegal String\n", 16);
        exit(1);
    }
    
    // free string
    string         -= sizeof(PPTREE) + sizeof(int);
    *(int *)string =  -*(int *)string ;
    if ( string < minPt ) 
        minPt =  string ;
    if ( string < dfreePt ) 
        dfreePt =  string ;
    
    // if necessary pack the strings
    if ( freeCpt++ > FREE_MAX ) 
        Pack();
}

void SAlloc::Pack ( char *start )
{
    char    *pt = minPt ;
    long    delta = 0 ;
    long    lengthCopy = 0 ;
    PPTREE  ptTree ;
    int     length ;
    
    if ( start ) 
        pt =  start ;
    while ( pt < currPt ) {
        length =  *((int *)pt);
        if ( length >= 0 ) {
            if ( delta ) {
                ptTree     =  *((PPTREE *)(pt + sizeof(int)));
                lengthCopy += length ;
                SON_WRITE(ptTree, 1, SON_READ(ptTree, 1) - delta);
            }
        } else {
            length =  -length ;
            if ( lengthCopy ) {
                memmove(pt - lengthCopy - delta, pt - lengthCopy, lengthCopy);
                lengthCopy =  0 ;
            }
            delta += length ;
        }
        pt += length ;
    }
    if ( lengthCopy ) 
        memmove(pt - lengthCopy - delta, pt - lengthCopy, lengthCopy);
    if ( pt != currPt || currPt + delta < basePt ) {
        _write(2, "Memory is corrupted\n", 21);
        exit(1);
    }
    currPt -= delta ;
    minPt  =  currPt ;
    if ( !start ) 
        freeCpt =  0 ;
}


