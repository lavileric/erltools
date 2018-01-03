#ifndef INCLUDE_DECMETACHOP
#define INCLUDE_DECMETACHOP 
#include "metachop.h"
#include "intchop.h"
#include "../chopb/decchopb.h"

class DecompMetachop : public DecompChopb {
    
public :

    DecompMetachop () {inhibateComment=1;}
    virtual ~DecompMetachop () {}
    
    static DecompMetachop   *ptDecomp ;
    virtual PTREE   IntDecomp (const PTREE &, int = 0) ;
    void    DecompStat (PTREE, int) ;
    void    lstat_dec1 (PTREE) ;
    
    virtual void    copy (void) ;
    virtual void    ChopTree (PTREE, int = 0) ;
    virtual PTREE   DecompFunction (PTREE tree, int funcAlone) ;
};
extern "C" {
    inline void decomp_metachop ( PTREE tree )
    {
        
        // call cplus since treatment of commentaries is  
        // only done there 
        DecompCplus::ptDecomp -> Decomp(tree);
    }
}
#endif
