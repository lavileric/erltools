#include <tabsort.h>

// getting an element index in array      
int TabSortRoot::GetIndex ( const char *string, int min, int max )
{
    
    // if dummy max put right one  
    if ( max == -10 ) 
        max =  size - 1 ;
    
    // if array is not sorted yet do it now      
    if ( !sorted ) {
        Sort();
    }
debut : 
    
    // take a pivot than look in the good part of the array     
    if ( max > min ) {
        int pivot = (min + max) / 2 ;
        int result = strcmp(GetElemName(*(array + pivot)), string);
        if ( !result ) {
            return pivot ;
        } else if ( result > 0 ) {
            if ( pivot > min ) 
                max =  pivot - 1 ;
            else 
                max =  pivot ;
            goto debut ;
        } else {
            if ( pivot < max ) 
                min =  pivot + 1 ;
            else 
                min =  pivot ;
            goto debut ;
        }
    } else if ( max == min ) {
        if ( !strcmp(GetElemName(*(array + min)), string) ) 
            return min ;
        else 
            return -1 ;
    }
    return -1 ;
}

// Sort : sort the array    
void TabSortRoot::Sort ( int min, int max )
{
    int     pivot ;
    int     minOrg = min ;
    int     maxOrg = max ;
    char    *refString ;
    
    // array will be sorted  
    sorted =  1 ;
    
    // if dummy max put right one  
    if ( max == -10 ) 
        maxOrg =  max = size - 1 ;
debut : 
    
    // list of one element is allready sorted    
    if ( min >= max ) 
        return ;
    
    // compute pivot and ref  
    pivot     =  (min + max) / 2 ;
    refString =  AllocString(GetElemName(*(array + pivot)));
    
    // put the elements in two groups those which are less and those    
    // which are greater than the pivot    
    while ( min < max ) {
        while ( strcmp(GetElemName(*(array + min)), refString) <= 0 && min < max ) 
            min++ ;
        while ( strcmp(GetElemName(*(array + max)), refString) > 0 && max >= min ) 
            max-- ;
        
        // if min == max   
        // less or equal set reach min  
        if ( min == max && min < maxOrg ) {
            min++ ;
        }
        if ( min < max ) {
            Exchange(min, max);
            min++ ;
            max-- ;
            
            // if the two jump on the same spot, we must  
            // separate them  
            if ( min == max ) {
                if ( strcmp(GetElemName(*(array + min)), refString) <= 0 ) 
                    min++ ;
                else 
                    max-- ;
            }
        }
    }
    
    // free the string which can be reused from now on    
    free(refString);
    
    // sort each half    
    // if min == max it means that every element is less or equal to pivot  
    // so put it at the end  
    if ( min == max ) {
        Exchange(pivot, max);
        if ( minOrg < maxOrg ) {
            min =  minOrg ;
            max =  --maxOrg ;
            goto debut ;
        }
    } else {
        if ( maxOrg > min ) 
            Sort(min, maxOrg);
        if ( minOrg < min - 1 ) {
            maxOrg =  max = min - 1 ;
            min    =  minOrg ;
            goto debut ;
        }
    }
}

// InsertRemove  
void TabSortRoot::InsertRemove ( void *elem, int min, int max )
{
    char    *string = AllocString(GetElemName(elem)); // name of inserted elem 
    
    // if dummy max put right one  
    if ( max == -10 ) 
        max =  size - 1 ;
    
    // if array is empty put at 0
    if ( !size ) {
        free(string);
        Put(elem, 0);
        return ;
    }
    
    // if array is not sorted yet do it now      
    if ( !sorted ) {
        Sort();
    }
debut : 
    
    // take a pivot than look in the good part of the array     
    if ( max > min ) {
        int pivot = (min + max) / 2 ;
        int result = strcmp(GetElemName(*(array + pivot)), string);
        if ( !result ) {
            InsertAt(elem, pivot);
            sorted =  1 ;
        } else if ( result > 0 ) {
            if ( pivot > min ) 
                max =  pivot - 1 ;
            else 
                max =  pivot ;
            goto debut ;
        } else {
            if ( pivot < max ) 
                min =  pivot + 1 ;
            else 
                min =  pivot ;
            goto debut ;
        }
    } else {
        int result = strcmp(GetElemName(*(array + min)), string);
        if ( !result ) {
            InsertAt(elem, min);
            sorted =  1 ;
        } else if ( result < 0 ) 
            Put(elem, min + 1);
        else 
            Put(elem, min);
    }
    free(string);
}

// Insert  
// tree will be inserted  
void TabSortRoot::Insert ( void *elem, int min, int max )
{
    char    *string = AllocString(GetElemName(elem)); // name of inserted elem 
    
    // if dummy max put right one  
    if ( max == -10 ) 
        max =  size - 1 ;
    
    // if array is empty put at 0
    if ( !size ) {
        free(string);
        Put(elem, 0);
        return ;
    }
    
    // if array is not sorted yet do it now      
    if ( !sorted ) {
        Sort();
    }
debut : 
    
    // take a pivot than look in the good part of the array     
    if ( max > min ) {
        int pivot = (min + max) / 2 ;
        int result = strcmp(GetElemName(*(array + pivot)), string);
        if ( !result ) {
            Put(elem, pivot);
        } else if ( result > 0 ) {
            if ( pivot > min ) 
                max =  pivot - 1 ;
            else 
                max =  pivot ;
            goto debut ;
        } else {
            if ( pivot < max ) 
                min =  pivot + 1 ;
            else 
                min =  pivot ;
            goto debut ;
        }
    } else {
        int result = strcmp(GetElemName(*(array + min)), string);
        if ( result <= 0 ) 
            Put(elem, min + 1);
        else 
            Put(elem, min);
    }
    free(string);
}

// puting an element in a certain slot  
void TabSortRoot::Put ( void *elem, int slot )
{
    
    // if slot == -10 put at the end of array  
    if ( slot == -10 ) {
        slot =  size ;
    }
    
    // if there is not enough space in the array resize it  
    int oldSizeMax = sizeMax ;
    
    if ( size == sizeMax ) {
        sizeMax += 10 ;
        if ( oldSizeMax ) 
            array =  (void **)realloc(array, sizeMax * sizeof(void *));
        else 
            array =  (void **)malloc(sizeMax * sizeof(void *));
    }
    if ( size ) {
        
        // move all elements of array beginning at slot  
        // void    **ptArray = array + size ;
        if ( size > slot ) 
            memmove(array + slot + 1, array + slot, (size - slot) * sizeof(void *));
    }
    
    // put elem in the array  
    *(array + slot) =  elem ;
    
    // increase size 
    size++ ;
}

// RemoveDup  
void TabSortRoot::RemoveDup ( void )
{
    if ( !sorted ) 
        Sort();
    for ( int pos = 0 ; pos < size - 1 ; pos++ ) {
        if ( !strcmp(GetElemName(*(array + pos)), GetElemName(*(array + pos + 1))) ) {
            Erase(pos);
            pos-- ;
        }
    }
}

// FindDuplicate
void *TabSortRoot::FindDuplicate ( int pos )
{
    if ( !sorted ) 
        Sort();
    if ( pos >= 0 ) 
        for (; pos < size - 1 ; pos++ ) {
            if ( !strcmp(GetElemName(*(array + pos)), GetElemName(*(array + pos + 1))) ) {
                return *(array + pos);
            }
        }
    return (void *)0 ;
}

// FindDuplicate
void *TabSortRoot::FindSame ( int posRef )
{
    if ( !sorted ) 
        Sort();
    
    int pos = 0 ;
    
    if ( posRef >= 0 && posRef < size ) 
        for (; pos < size - 1 ; pos++ ) {
            if ( pos != posRef && *(array + pos) == *(array + posRef) ) {
                return *(array + pos);
            }
        }
    return (void *)0 ;
}

// inserting an element at a position
// delete element at current position
void TabSortRoot::InsertAt ( void *elem, int posit )
{
    
    // don't go after the end of array
    if ( posit > size ) 
        return ;
    
    // if there is not enough space in the array resize it  
    int oldSizeMax = sizeMax ;
    
    if ( size == sizeMax ) {
        sizeMax += 10 ;
        if ( oldSizeMax ) 
            array =  (void **)realloc(array, sizeMax * sizeof(void *));
        else 
            array =  (void **)malloc(sizeMax * sizeof(void *));
    }
    if ( posit == size ) 
        size++ ;
    array [posit] =  elem ;
    sorted        =  0 ;
}

// erasing an element  
void TabSortRoot::Erase ( int slot )
{
    
    // verify index  
    if ( slot < 0 || slot >= size ) 
        return ;
    
    // move all elements of array beginning at slot  
    // void    **ptArray = array + slot ;
    if ( slot < size - 1 ) 
        memmove(array + slot, array + slot + 1, (size - slot - 1) * sizeof(void *));
    
    // put new size of array  
    size-- ;
}
