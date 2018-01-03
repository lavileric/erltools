#ifndef DECASN_FILE
#   define DECASN_FILE 1
    void    DecompProc (PTREE) ;
#   include "coding.h"
#   include "symb.h"
#   include "clpretty.h"
#   ifdef MOST_RECENT_STL
#       include <map>
#   else 
#       include <map.h>
#   endif
    
    class DecompAsn : public clpretty {
        
        public :
        
            DecompAsn ()
                : inInterest(0),  pvEncodeIntegerStore(0),  pvEncodeIntegerSize(0),  pvEncodeString(""),  tagDefault(0),  fastEncode(false),  nbMatch(0)
            {
                tabListValue = (SymbolTable *)0 ;
                tabListType = (SymbolTable *)0 ;
                pathType = (TabList *)0 ;
                rootTab = (TabList *)0 ;
                treatedTypes = (TabList *)0 ;
                rootList = (PTREE)0 ;
                lastIdentVal = (PTREE)0 ;
            }
            
            virtual ~DecompAsn ()
            {
                if ( pvEncodeIntegerStore ) 
                    free(pvEncodeIntegerStore);
            }
            
            // copy constructor do a reinit
            DecompAsn ( const DecompAsn & )
                : clpretty()
            {
                tabListValue = (SymbolTable *)0 ;
                tabListType = (SymbolTable *)0 ;
                pathType = (TabList *)0 ;
                rootTab = (TabList *)0 ;
                treatedTypes = (TabList *)0 ;
                rootList = (PTREE)0 ;
                lastIdentVal = (PTREE)0 ;
                inInterest = 0 ;
                pvEncodeIntegerStore = (char *)0 ;
                pvEncodeIntegerSize = 0 ;
            }
            
            static DecompAsn    *ptDecomp ;
            virtual PTREE       IntDecomp (const PTREE &tree, int) ;
            virtual void        DecompErrorEncoding (PTREE tree) ;
            virtual PTREE       ComputeTypeTag (const PTREE &type) ;
            virtual PTREE       ConcatList (PTREE list1, PTREE list2) ;
            virtual long        GetLong (char *numb) ;
            virtual long        DecodeHexa (char *numb) ;
            virtual char        *EncodeHexa (int numb, char *string, bool terminator = true) ;
            virtual int         EncodedLength (char *string) ;
            virtual char        *Put (char *string, char *added) ;
            virtual char        *PutAndFree (char *string, char *added) ;
            virtual char        *PutBegin (char *string, char *added) ;
            virtual char        *PutBeginAndFree (char *string, char *added) ;
            virtual char        *EncodeTag (const PTREE &tag, int constructed) ;
            virtual char        *EncodeTagFast (const PTREE &tag, int constructed) ;
            virtual char        *Encode128 (long val) ;
            virtual char        *EncodeInteger (long intValue) ;
            virtual char        *EncodeIntegerFast (long intValue) ;
            virtual char        *EncodeIntegerTree (const PTREE &tree) ;
            virtual char        *EncodeIntegerTreeFast (const PTREE &tree) ;
            virtual int         DecodeLength (char *string) ;
            virtual char        *EncodeLength (int length) ;
            virtual char        *EncodeLengthFast (int length) ;
            virtual char        *EncodeBitString (char *string, int putUnused) ;
            virtual char        *EncodeByteString (char *string, int putUnused) ;
            virtual char        *EncodeString (char *string) ;
            virtual char        *EncodeBitStringFast (char *string, int putUnused) ;
            virtual char        *EncodeByteStringFast (char *string, int putUnused) ;
            virtual char        *EncodeStringFast (char *string) ;
            virtual PTREE       SearchSetValue (PTREE list, const PTREE &name) ;
            virtual PTREE       TypeNormalize (const PTREE &type) ;
            virtual PTREE       ComputeSetList (const PTREE &type, const PTREE &theValue) ;
            virtual Coding      *ComputeSet (const PTREE &type, const PTREE &theValue) ;
            virtual Coding      *ComputeSetOf (const PTREE &type, const PTREE &theValue) ;
            virtual int         GetBitStringSize (const PTREE &type) ;
            virtual PTREE       GetNamedValue (const PTREE &type, const PTREE &ident) ;
            virtual PTREE       GetChoiceType (const PTREE &type, const PTREE &ident) ;
            virtual long        GetObjectValue (const PTREE &tree) ;
            virtual char        *GetStringFromOid (const PTREE &theValue) ;
            virtual PTREE       ExtendObjectValue (PTREE tree) ;
            virtual PTREE       SimplifyObjectValue (const PTREE &tree) ;
            virtual PTREE       ExpandType (const PTREE &type) ;
            virtual PTREE       ComputeInnerTag (const PTREE &tree) ;
            virtual PTREE       GetType (const PTREE &tree, const PTREE &tree2) ;
            virtual Coding      *EncodeValue (const PTREE &type, const PTREE &theValue) ;
            virtual void        ComputeLists (const PTREE &tree) ;
            virtual void        DecompAssign (const PTREE &tree, const char *fileName) ;
            virtual void        CompMemorize (Coding *code) ;
            virtual void        CompForget () ;
            virtual char        *CompGetTag () ;
            virtual char        *CompGetLength () ;
            virtual char        *CompGetVal () ;
            virtual int         CompIsSimpleValue () ;
            virtual PTREE       CompIsError () ;
            virtual PTREE       CompGetPointer () ;
            virtual PTREE       FindValue (const PTREE &name) ;
            virtual PTREE       FindTyp (const PTREE &name) ;
            virtual void        StoreInFile (PTREE val, const char *fileName) ;
            virtual void        DisplayInFile (const PTREE &val) ;
            virtual void        DisplayError (const PTREE &printList) ;
            virtual PTREE       FindDuplicate (const PTREE &list) ;
            virtual PTREE       VerifySetType (const PTREE &type, int complete = 0) ;
            virtual void        VerifySetValues (const PTREE &values) ;
            virtual void        VerifyTypeWithValue (const PTREE &type, const PTREE &theValue, const PTREE &listType, PTREE listValue) ;
            virtual void        VerifySameOrder (const PTREE &type, PTREE theValue, PTREE listType, PTREE listValue) ;
            virtual int         VerifySetAffect (const PTREE &type, const PTREE &theValue, int forSeq) ;
            virtual int         VerifyChoiceAffect (const PTREE &type, PTREE ident, const PTREE &theValue) ;
            virtual void        VerifyConstraintInteger (const PTREE &constraint) ;
            virtual void        VerifyConstraint (const PTREE &constraint) ;
            virtual int         VerifyType (const PTREE &type, int internal = 0) ;
            virtual void        VerifyAllTypes (int displayRoot = 0, TabList * = 0) ;
            char                *ConvertStringToBin (char *content, int length, char *dest = 0) ;
            
            // EncodeAValue : encoding of a value
            // parameters :
            //              type : type of value
            //              val : the value
            //              buffer : the buffer where to encode
            //              length : the length of buffer
            void                EncodeAValue (PTREE type, PTREE val, char **buffer, int *length) ;
            
            // prettyprint functions
            virtual void        ComputeSeq (PTREE list, int *tabMax1, int *tabMax2, int realign) ;
            virtual void        ComputeSeqTy (PTREE list, int *tabMax1, int *tabMax2, int realign) ;
            virtual void        ComputeChoice (PTREE list, int *tabMax1, int *tabMax2, int realign) ;
            virtual void        ComputeChoiceTy (PTREE list, int *tabMax1, int *tabMax2, int realign) ;
            virtual void        TraiterAlign (PTREE tree) ;
            virtual int         OpTypeAlign (PTREE tree) ;
            virtual int         OpType (PTREE tree) ;
            virtual int         IsTop (PTREE tree, int internal) ;
            virtual void        Treat (PTREE tree) ;
            virtual int         TreatGeometrySpecific (PTREE, int, int) ;
            virtual void        PropagateDelta (PTREE, int) ;
            
            // ????
            virtual void        PrintStringVal () ;
            virtual PTREE       FindSymb (const PTREE &, TabList *, TabList *, TabList *, TabList *, const PTREE &, const PTREE &, int = 1) ;
            virtual void        TreatInsert (const PTREE &includeList, const PTREE &tree) ;
            virtual TabList     *MergeModule (const PTREE &includeList, const PTREE &moduleList) ;
            virtual PTREE       FindModule (const PTREE &includeList, const PTREE &searched) ;
            virtual void        StoreGrammar (const PTREE &tree) ;
            
            // fonctions relatives au désassemblage des données
            virtual int         DecodeTag (char *theValue, long *lengthMax) ;
            virtual int         DecodeLength (char *theValue, long *lengthMax, long *lengthValue) ;
            virtual PTREE       GetTagAndLength (char *theValue, long *lengthTag, long *lengthLength, long *lengthValue, long length) ;
            
            // DecodeIntegerFast : get string out of integer value
            // parameters :
            //              theValue : string containing integer
            // result : the long
            virtual long        DecodeIntegerFastDirect (char *theValue) ;
            virtual char        *DecodeInteger (char *theValue) ;
            virtual const char  *DecodeIntegerFast (char *theValue) ;
            virtual PTREE       DecodeIntegerTree (char *theValue) ;
            virtual PTREE       DecodeBitString (PTREE type, char *theValue) ;
            virtual char        *DecodeOctetString (char *theValue, int length) ;
            virtual char        *DecodeOctetStringFast (char *theValue, unsigned int length) ;
            virtual char        *DecodeStringFast (char *theValue) ;
            virtual char        *DecodeString (char *theValue) ;
            virtual PTREE       DecodeObjectIdentifier (char *theValue) ;
            virtual PTREE       ComputeTagChoice (PTREE choice, PTREE entry, bool bulk = false) ;
            virtual PTREE       ComputeTagSet (PTREE type) ;
            virtual PTREE       IncorrectField (PTREE error, PTREE octetTree) ;
            
            // ExpandTLV : expand one level of a tlv
            // parameters :
            //              tlv : the tlv to be expanded
            void                ExpandTLV (PTREE tlv) ;
            
            // ExpandTLVFull : expand all levels of a tlv
            // parameters :
            //              tlv : the tlv to be expanded
            void                ExpandTLVFull (PTREE tlv) ;
            virtual PTREE       DecodeValue (const PTREE &type, PTREE tag, int constructed, PTREE tlv, bool decodeOString = true) ;
            PTREE               GetTLVShallow (char *theValue, long *length, bool first = false) ;
            virtual PTREE       GetTLV (char *theValue, long *length) ;
            virtual void        Desass (PTREE tree, char *fileName) ;
            virtual void        PrintTLV (PTREE tlv) ;
            virtual void        Interpret (PTREE tlv) ;
            virtual PTREE       InterpretGetValue (PTREE tlv, PTREE tag = (PTREE)0, int constructed = 0, PTREE listTyp = (PTREE)0, bool decodeOString = true) ;
            virtual PTREE       CreateObjectIdentifierTree () ;
            
            virtual bool Initialized ()
            {
                return tabListType != 0 ;
            }
            
            void ExtDecomp ( PTREE tree )
            {
                CompForget();
                Decomp(tree);
            }
            
            char *InitAllocate ()
            {
                
                // if pvEncodeIntegerStore is not allocated do it
                if ( !pvEncodeIntegerSize ) {
                    pvEncodeIntegerStore = (char *)malloc(pvEncodeIntegerSize = 21);
                    *(pvEncodeIntegerStore + pvEncodeIntegerSize - 1) = '\0';
                }
                return pvEncodeIntegerStore + pvEncodeIntegerSize - 1 ;
            }
            
            void MoreAllocate ( char *&ptBuff, int size = -1 )
            {
                int allocSize = 20 ;
                
                if ( size > 20 ) {
                    allocSize = (size + 1) / 2 * 2 ;
                }
                
                // if not enough space remaining allocate some
                if ( ptBuff - allocSize <= pvEncodeIntegerStore ) {
                    int offset = ptBuff - pvEncodeIntegerStore ;
                    pvEncodeIntegerStore = (char *)realloc(pvEncodeIntegerStore, pvEncodeIntegerSize += allocSize);
                    ptBuff = pvEncodeIntegerStore + offset + allocSize ;
                    memmove(pvEncodeIntegerStore + allocSize, pvEncodeIntegerStore, pvEncodeIntegerSize - allocSize);
                }
                if ( size == -1 ) 
                    ptBuff -= 2 ;
                else 
                    ptBuff -= (size + 1) / 2 * 2 ;
            }
            
            // FastEncode : tell if fast encode
            bool FastEncode () const
            {
                return fastEncode ;
            }
            
            // FastEncode : set fast encode
            // parameters :
            //              fastSpeed : tell if fast encode
            DecompAsn &FastEncode ( bool fastSpeed )
            {
                fastEncode = fastSpeed ;
                return *this ;
            }
        
        protected :
        
            SymbolTable *tabListValue ;         // table of values
            SymbolTable *tabListType ;          // table of types
            TabList     *pathType ;             // during the verification of a type
                                                // all the type expanded for 
                                                // this verification
            TabList     *treatedTypes ;         // types allready verified
            PTREE       rootList ;              // list of root types
            TabList     *rootTab ;              // quick access for rootList
            int         inInterest ;            // interest case some values are missing
            int         nbError ;               // nb errors during disassembling
            int         nbMatch ;               // nb of match durring disassembling
            PTREE       objectIdentifierTree ;  // the object identifier tree
            PTREE       lastIdentVal ;          // when encoding
                                                // the last ident, as a value 
                                                // we encountered
            char        *pvEncodeIntegerStore ; // storage for encodeInteger
            int         pvEncodeIntegerSize ;   // size of encodeInteger
            EString     pvEncodeString ;        // storage for EncodeString
            PTREE       tagDefault ;            // default tag
            bool        fastEncode ;            // fast encoding
    };
    
    inline void decomp_asn ( PTREE tree )
    {
        DecompAsn::ptDecomp->Decomp(tree);
    }
    
    class ParserAsn : public asn {
        
        public :
        
            ParserAsn () {}
            
            ~ParserAsn () {}
            
            virtual PPTREE  ReadInclude (const char *name, int here, bool tree = false) ;
    };
    
    class TLVChunk : public TreeClass {
        
        public :
        
            // constructor
            // parameters :
            //              start : where string starts
            //              length : length of chunk
            TLVChunk ( char *start, int length )
                : pvStart(start),  pvLength(length)
            {}
            
            // destructor
            virtual ~TLVChunk () {}
            
            // operator copy 
            virtual TreeClass *Copy ()
            {
                return (TreeClass *)new TLVChunk(*this);
            }
            
            // Size 
            virtual unsigned int Size ()
            {
                return 0 ;
            }
            
            // Type 
            virtual int Type ()
            {
                return asn::TLV_CHUNK ;
            }
            
            // value
            virtual const char *Value ()
            {
                return pvStart ;
            }
            
            // size 
            virtual unsigned int Length ()
            {
                return pvLength ;
            }
        
        private :
        
            char    *pvStart ; // start of chunk
            int     pvLength ; // length of chunk
    };
#   include "asnsymbol.h"
#endif
