#include "chopb.h"
#include "../cplusplu/deccplus.h"

class DecompChopb : public DecompCplus {
    
    public :
    
        DecompChopb () {}
        
        virtual ~DecompChopb () {}
        
        static DecompChopb  *ptDecomp ;
        virtual void        FrameContent (PTREE) ;
        virtual PTREE       IntDecomp (const PTREE &, int = 0) ;
        virtual int         Sequence (PTREE, PTREE) ;
        virtual void        control_stat1 (PTREE paramTree) ;
        virtual int         OpTypeAlign (PTREE tree) ;
        virtual int         OpType (PTREE tree) ;
        virtual int         IsTop (PTREE tree, int internal) ;
        virtual void        TraiterSequence (PTREE) ;
        virtual void        ChopTree (PTREE, int = 0) ;
        virtual void        copy (void) ;
};

inline void decomp_chopb ( PTREE tree )
{
    
    // call cplus since the commentaries treatment is only done 
    // there 
    DecompChopb::ptDecomp -> DecompCplus::Decomp(tree);
}
