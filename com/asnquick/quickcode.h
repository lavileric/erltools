#include "decasn.h"

class QuickAsn : public DecompAsn {
    
    public :
    
        // constructor 
        QuickAsn () {}
        
        // destructor
        ~QuickAsn () {}
        
        // Encoder : encoder of tree
        // parameters :
        //              tree : the tree to be encoded
        void    Encoder (PTREE &tree) ;
        
        // BinaryString : convert an hexa string to its binary value
        // parameters :
        //               string : string to be converted
        // return : the binary string
        EString BinaryString (EString string) ;
        
        // CheckTagHeader : put the check tag header
        // parameters :
        //              tag : the tag value
        //              binTag : the binary tag
        EString CheckTagHeader (PTREE tag, EString binTag) ;
        
        // CheckTag : check a tag
        // parameters :
        //              tag : the tag value 
        //              binTag : the binary tag
        //              condTest : take checkTag variable into account
        //              embedded : second level of checktag use codedCoord
        void    CheckTag (PTREE tag, EString binTag = "", bool condTest = true, bool embedded = false) ;
        
        // CharToOctal : convert a char to its octal string
        // parameters :
        //              toConvert : the char to be converted
        // return : the octal string
        EString CharToOctal (char toConvert) ;
        
        // DumpOctal : dump a binary string as octal
        // parameters :
        //              string : the string to be dumped
        //              asString : tells to put " around (otherwise ')
        void    DumpOctal (EString &toPrint, bool asString = true) ;
        
        // Simplify : simplify too complex rules
        // parameters :
        //              rules : the list of rules
        void    Simplify (PTREE rules) ;
        
        // EncodeChoice : encode the encoding of a choice
        // parameters :
        //               tabChoice : tab of choice clause
        //               start : where to start
        //               end : where to end
        void    EncodeChoice (TabList &tabChoice, unsigned int start, unsigned int end) ;
        
        // ComputeTagChoice : compute the list of tag for choice
        PTREE   ComputeTagChoice (PTREE choice, bool bulk = false) ;
        
        // EncodeType : encoder of type tree : deccoding function
        // parameters :
        //              tree : the tree to be encoded
        //              checkFirstTag : do we have to check first tag
        //              embedded : second level
        void    EncodeType (PTREE &tree, bool checkFirstTag = true, bool embedded = false) ;
        
        // 
        // GetType : get basic type from a type
        //
        PTREE   GetType (const PTREE &paramType, const PTREE &paramTheValue) ;
        
        // EEncodeType : encoder of type tree : encoding function
        // parameters :
        //              tree : the tree to be encoded
        void    EEncodeType (PTREE &tree) ;
        
        // ObjectIdentifierArray : dump the array for object identifiers
        void    ObjectIdentifierArray () ;
        
        // DecodeNodeObject : generate readable value for an object
        // parameters :
        //				node : the node to be decoded
        void    DecodeNodeObject (PTREE node) ;
        
        // ObjectIdentifierFuncts : create functions for object identifiers
        void    ObjectIdentifierFuncts () ;
    
    private :
    
        PTREE   pvObjectTree ;
};
