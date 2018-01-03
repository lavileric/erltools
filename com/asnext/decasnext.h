#ifndef DECASNEXT_FILE
#define DECASNEXT_FILE 1
#include "asn.h"
#include "asnext.h"
#include "decasn.h"
void    DecompProcExt (PTREE) ;

class DecompAsnExt : public DecompAsn {
    
    public :
    
        DecompAsnExt () {}
        
        virtual ~DecompAsnExt () {}
        
        virtual PTREE   IntDecomp (const PTREE &tree, int) ;
        virtual int     TreatGeometrySpecific (PTREE tree, int x0, int x) ;
        
        virtual Coding *EncodeValue ( const PTREE &type
            , const PTREE &theValue )
        {
            return DecompAsn::EncodeValue(type, theValue);
        }
        
        virtual void    VerifyExtension (PTREE type, PTREE theValue) ;
        virtual void    VerifySimpleExtension (PTREE type, PTREE theValue) ;
        virtual void    VerifyExtensionType (PTREE type) ;
        virtual int     VerifyExtendedBodyPart (PTREE type, int internal = 0) ;
        virtual int     VerifyAbstractObject (PTREE object) ;
        virtual int     VerifyRefine (PTREE refine) ;
        virtual int     VerifyType (const PTREE &type, int internal = 0) ;
        virtual void    VerifyAllTypes (int displayRoot = 0
            , TabList *tab = 0) ;
        virtual PTREE   DecodeIPMSExtension (PTREE type, PTREE tag
            , int constructed, PTREE tlv) ;
        virtual PTREE   DecodeExtension (PTREE type, PTREE tag
            , int constructed, PTREE tlv) ;
        virtual PTREE   DecodeExternal (PTREE type, PTREE tag
            , int constructed, PTREE tlv) ;
        virtual PTREE   DecodeValue (PTREE type, PTREE tag
            , int constructed, PTREE tlv) ;
        virtual PTREE   ComputeTypeTag (const PTREE &type) ;
        virtual void    VerifyOperation (PTREE type) ;
};

inline void decomp_asnext ( PTREE tree )
{
    DecompAsn::ptDecomp -> Decomp(tree);
}

class ParserAsnExt : public asnext {
    
    public :
    
        ParserAsnExt () {}
        
        ~ParserAsnExt () {}
        
        virtual PPTREE  ReadInclude (const char *name, int here
            , bool tree = false) ;
};
#endif
