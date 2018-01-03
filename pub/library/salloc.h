#ifndef SALLOC_FILE
#define SALLOC_FILE 1
#define ALLOC_STEP (128 * 1024) 
#define FREE_MAX 10000 

class SAlloc {
    
    public :
    
        SAlloc ()
        {
            size = 0 ;
            minPt = currPt = basePt = (char *)0 ;
            freeCpt = 0 ;
            dfreePt = 0 ;
            freeState = 0 ;
        }
        
        ~SAlloc ()
        {
            free(basePt);
        }
        
        // make a string
        char    *MakeString (PPTREE tree, char *string) ;
        
        // free a string
        void    FreeString (char *string) ;
    
    private :
    
        // pack the strings
        void    Pack (char *start = (char *)0) ;
        
        // vars
        long    size ;
        long    freeCpt ; // number of free
        char    *basePt ;
        char    *currPt ;
        char    *minPt ;
        char    *dfreePt ;
        int     freeState ;
};
#endif
