#include "token.h"

#ifndef COMPUTE_FILE
#define COMPUTE_FILE 1

class Metric {
    
private :

    int pNbLine ;           // number of line 
    int pNbCLine ;          // number of comment line 
    int pMaxDepth ;         // maximum depth of programm
    int pCurrDepth ;        // current depth max
    int pDepth ;            // current depth
    int pNbComplexity ;     // complexity 
    PTREE   pTree ;         // tree treated 
    PTREE   pMetricList ;   // list of metric measurements
    
public :

    // constructor
    Metric ( PTREE tree )
    {
        // initialize and put a ref
        // to avoid garbage
        pTree = tree ;

        // initialize variables
        pMetricList = (PTREE)0 ;
        pNbLine = pNbCLine = 0 ;
        pNbComplexity = 1 ;
        pMaxDepth = pCurrDepth = 0 ;
    }
    
    // destructor
    ~Metric ()
    {
        pTree = (PTREE) 0;
        pMetricList = (PTREE) 0 ;
    }
    
    // computation of tree metric
    void    ComputeTree () ;
    
    // computation of a function metric
    void    ComputeNumber (PTREE tree) ;
    
    // computation of a function metric, metachop specific
    int ComputeChopbNumber (PTREE tree) ;
    
    // getting result
    PTREE Result ()
    {
        return copytree(pMetricList);
    }
    
    // compute number of comment line in a tree
    int ComputeCLine (PTREE tree, int goInFunction = 0) ;
    
    // adding a function cell to metric list
    void    AddFunctionCell (PTREE name, int line, int cLine
                    , int complexity, int maxDepth) ;
};
#endif
