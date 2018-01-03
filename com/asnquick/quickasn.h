#ifndef QUICK_ASN_FILE
#   define QUICK_ASN_FILE 1
#   include "token.h"
#   include "asn.h"
#   define ENCODE_INT int
#   define CONVERT_TO_INT atoi
    
    class CoordString {
        
        public :
        
            CoordString ( unsigned int pos, unsigned int length )
            {
                this->pos = pos ;
                this->length = length ;
            }
            
            unsigned int    pos ;    // starting pos 
            unsigned int    length ; // length of selection
    };
    
    class GenGramm {
        
        public :
        
            typedef PPTREE  (*DECODER_FUNCT)(EString &ruleName, EString &val, CoordString &coord, bool checkTag) ;
            typedef void    (*ENCODER_FUNCT)(EString &ruleName, EString &resString, PTREE val) ;
            typedef char    *Enumerated [2]; /* for each integer gives its symbolic name */ 
            
            // consructor
            GenGramm ()
            {
                
                // set function pointers to null
                pvEncoderFunct = (ENCODER_FUNCT)0 ;
                pvDecoderFunct = (DECODER_FUNCT)0 ;
            }
            
            static bool     CompareTag (const char *tag, EString &string, const CoordString &coord) ;
            static int      DecodeLength (EString &string, CoordString &coord) ;
            static PTREE    GetInteger (EString &string, CoordString &coord, bool checkTag) ;
            static PTREE    GetObjectIdentifier (EString &string, CoordString &coord, bool checkTag) ;
            static PTREE    GetBoolean (EString &string, CoordString &coord, bool checkTag) ;
            static PTREE    GetIA5String (EString &string, CoordString &coord, bool checkTag) ;
            static PTREE    GetRealString (EString &string, CoordString &coord, bool checkTag) ;
            static PTREE    GetOctetString (EString &string, CoordString &coord, bool checkTag) ;
            static PTREE    GetNullType (EString &string, CoordString &coord, bool checkTag) ;
            static PTREE    GetEnumerated (PTREE, Enumerated []) ;
            static PTREE    GetBitString (EString &string, CoordString &coord, Enumerated [], bool checkTag) ;
            static EString  DecodeOctetString (EString &octetString) ;
            static EString  ConvertStringToBin (EString &octetString) ;
            //
            // Encode an integer in hexa
            //
            static EString  EncodeInt (int numb) ;
            //
            // Encode a number in hexa
            //
            static EString  EncodeHexa (int numb) ;
            static void     EncodeLength (EString &string, int length) ;
            static void     EncodeInteger (EString &string, int integer) ;
            static void     EncodeObjectIdentifier (EString &string, int integer) ;
            //
            // Encoding in base 128
            //
            EString         Encode128 (long val) ;
            void            EncodeObjectIdentifier (EString &string, PTREE listValue, int *objectDef) ;
            static void     EncodeBoolean (EString &string, bool boolean) ;
            static void     EncodeIA5String (EString &string, EString valString) ;
            static void     EncodeRealString (EString &string, EString valString) ;
            void            EncodeRealString (EString &string, PTREE &tree) ;
            static void     EncodeIA5String (EString &string, PTREE &tree) ;
            static void     EncodeOctetString (EString &string, EString valString) ;
            void            EncodeOctetString (EString &string, PTREE &tree) ;
            static void     EncodeNullType (EString &string) ;
            static void     EncodeEnumerated (EString &string, Enumerated [], EString val) ;
            static void     EncodeBitString (EString &string, Enumerated enumeratedRef [], Enumerated enumeratedVal []) ;
            
            bool TakeTagged ( EString &val, int lengthTag, CoordString &coord, CoordString &codedCoord )
            {
                unsigned int    codedLength ;
                
                coord.length -= lengthTag ;
                coord.pos += lengthTag ;
                if ( (codedLength = DecodeLength(val, coord)) > coord.length ) 
                    return false ;
                else {
                    codedCoord.pos = coord.pos ;
                    codedCoord.length = codedLength ;
                    coord.pos += codedLength ;
                    coord.length -= codedLength ;
                }
                return true ;
            }
            
            void PutTag ( EString &val, EString binTag, bool steal )
            {
                bool    constructed = true ;
                
                if ( steal ) {
                    constructed = Constructed(val);
                    val.CutFront(LengthTag(val));
                } else {
                    EString lengthString ;
                    EncodeLength(lengthString, val.length());
                    val.prepend(lengthString);
                }
                PutConstructed(binTag, constructed);
                val.prepend(binTag);
            }
            
            PTREE CreateNamedNode ( const char *name, PTREE son )
            {
                PTREE   headTree = PTREE(asn::NAMED_VALUE, 2);
                PTREE   identTree = PTREE(asn::IDENT, 1);
                
                headTree.ReplaceTree(1, identTree);
                identTree.ReplaceTree(1, PTREE(name));
                headTree.ReplaceTree(2, son);
                return headTree ;
            }
            
            PTREE &AddToList ( PTREE &list, PTREE &elem, PTREE &follow )
            {
                if ( list == PTREE(0) ) {
                    follow = list = list.AddList(elem);
                } else {
                    follow.AddList(elem);
                    follow.Nextl();
                }
                return follow ;
            }
            
            void    PutConstructed (EString &string, bool state) ;
            
            bool Constructed ( EString &string )
            {
                return string [(unsigned int)0] & 0x20 ;
            }
            
            virtual PTREE Root ( EString &val, CoordString &coord, bool checkTag )
            {
                EString ruleName = "";
                
                return DecodeString(ruleName, val, coord, checkTag);
            }
            
            virtual void Root ( EString &resString, PTREE val )
            {
                EString ruleName = "";
                
                EncodeString(ruleName, resString, val);
            }
            
            virtual PTREE DecodeString ( EString &ruleName, EString &val, CoordString &coord, bool checkTag )
            {
                if ( pvDecoderFunct ) 
                    return (*pvDecoderFunct)(ruleName, val, coord, checkTag);
                else 
                    return PTREE(val);
            }
            
            virtual void EncodeString ( EString &ruleName, EString &resString, PTREE val )
            {
                if ( pvEncoderFunct ) 
                    (*pvEncoderFunct)(ruleName, resString, val);
            }
            
            static unsigned int LengthTag (EString &string) ;
            
            // LoadGramm : try to load library for a grammar
            // parameters :
            //              name : name of grammar
            // return : tells if success
            bool                LoadGramm (EString &name, EString metaName = EString("")) ;
        
        private :
        
            DECODER_FUNCT   pvDecoderFunct ; // decoder funct
            ENCODER_FUNCT   pvEncoderFunct ; // encoder funct 
    };
    
    class PutSonNext {
        
        public :
        
            PutSonNext ( PTREE *val, bool inside = true )
            {
                pvKeeper = *val ;
                pvValRef = val ;
                *val = (*val)[1];
                if ( inside && val->NumberTree() == asn::NAMED_VALUE ) {
                    *val = (*val)[2];
                }
            }
            
            ~PutSonNext ()
            {
                *pvValRef = pvKeeper ;
                (*pvValRef).Nextl();
            }
        
        private :
        
            PTREE   pvKeeper ;  // keeper of tree
            PTREE   *pvValRef ; // reference on val
    };
#endif
