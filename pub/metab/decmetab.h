#include "metab.h"
#include "clpretty.h"

class DecompMetab : public clpretty {
    
    public :
    
        DecompMetab () {}
        
        virtual ~DecompMetab () {}
        
        static DecompMetab  *ptDecomp ;
        virtual PTREE       IntDecomp (const PTREE &paramTree, int funcAlone) ;
        virtual int         OpTypeAlign (PTREE tree) ;
        virtual int         OpType (PTREE tree) ;
        virtual int         IsTop (PTREE tree, int internal = 0) ;
        virtual void        Treat (PTREE tree) ;
        virtual int         TreatGeometrySpecific (PTREE tree, int x0, int x) ;
    // miscellaneous variables
};

extern "C" {
    inline void decomp_metab ( PTREE tree )
    {
        DecompMetab::ptDecomp -> Decomp(tree);
    }
}

//  
//  Alignement des commentaires  
//  
#define MAX_REALIGN rightMargin - 10
