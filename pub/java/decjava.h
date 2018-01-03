#ifndef INCLUDE_DECISL
#define INCLUDE_DECISL 
#include "deccplus.h"

class DecompJava : public DecompCplus {
    
    public :
    
        DecompJava () {}
        
        virtual ~DecompJava () {}
        
        static DecompJava    *ptDecomp ;
        virtual void        FrameContent (PTREE) ;
        virtual PTREE       IntDecomp (const PTREE &, int = 0) ;
        virtual int         Sequence (PTREE, PTREE) ;
        virtual void        control_stat1 (PTREE paramTree) ;
        virtual int         OpTypeAlign (PTREE tree) ;
        virtual int         OpType (PTREE tree) ;
        virtual int         IsTop (PTREE tree, int internal = 0) ;
        virtual void        TraiterSequence (PTREE) ;
        virtual void        ChopTree (PTREE, int = 0) ;
        virtual void        copy (void) ;
        virtual int         OpAssociativity (PTREE tree) ;
        virtual int         OpPriority (PTREE tree) ;
        virtual int         IsTopInstr (PTREE tree) ;
        
        // DecompSimpleSyntax : decompilation of a simple syntax
        // parameters :
        //              syntax : the syntax to be decompiled
        void                DecompSimpleSyntax (const PTREE &syntax) ;
};
extern "C" {
    inline void decomp_java ( PTREE tree )
    {
        
        // call cplus since treatment of commentaries is  
        // only done there 
        DecompJava::ptDecomp -> Decomp(tree);
    }
}
#endif
