language asn;

#include "token.h"
#include "asn.h"
#include "coding.h"
#include <fcntl.h>

#ifdef FOR_METACHOP
    PTREE   tagDefault ;
#endif

DecompAsn   *DecompAsn::ptDecomp ;

// VerifyTag : compute length of tag and verify that the tag is the one
//              expected
int DecompAsn::DecodeTag ( char *theValue, long *lengthMax )
{
    
    int     lengthTag = 1 ;           // computed length of tag
    int     result = 1 ;              // tells whether tag is correct
    char    *begTheValue = theValue ; // begin of theValue
    
    if ( !*lengthMax ) 
        return 0 ;
    
    // if tag is on multiple octets compute the length of tag
    if ( (*theValue & 0x1F) == (char)0x1F ) {
        theValue++ ;
        while ( theValue - begTheValue <= *lengthMax && *theValue & 0x80 ) 
            theValue++ ;
        lengthTag =  theValue - begTheValue + 1 ;
    }
    
    // put length in return value
    if ( lengthTag < *lengthMax ) 
        *lengthMax =  lengthTag ;
    else 
        result =  0 ;
    return result ;
}

// VerifyLength : compute length of length and length of value
int DecompAsn::DecodeLength ( char *theValue, long *lengthMax, long *lengthValue )
{
    
    int     lengthLength ;            // length of length
    char    *begTheValue = theValue ; // begin of theValue
    int     result = 1 ;
    
    if ( !*lengthMax ) {
        *lengthValue =  0 ;
        return 0 ;
    }
    
    // compute length, there are three cases
    // 1 : indefinite length
    // 2 : length on one octet
    // 3 : length on multiple octets
    if ( *theValue == (char)0x80 ) {
        theValue++ ;
        
        // search the ending octets
        while ( theValue - begTheValue <= *lengthMax && (*theValue || *(theValue - 1)) ) 
            theValue++ ;
        
        // compute actual length
        if ( theValue - begTheValue > *lengthMax ) {
            *lengthValue =  0 ;
            result       =  0 ;
        } else {
            *lengthMax   =  1 ;
            *lengthValue =  theValue - begTheValue - 2 ;
        }
    } else if ( *theValue & 0x80 ) {
        lengthLength =  (int)(*theValue & 0x7F);
        
        // if value is incorrect return a length of 0
        if ( lengthLength < 0 || lengthLength > *lengthMax ) {
            *lengthValue =  0 ;
            result       =  0 ;
        } else {
            int lengthToBeAdded = lengthLength ;
            theValue++ ;
            
            // size is longer than a long
            if ( (unsigned int)lengthToBeAdded > sizeof(long) ) {
                lengthToBeAdded =  0 ;
                *lengthValue    =  0 ;
                lengthLength    =  1 ;
                result          =  0 ;
            }
            for ( *lengthValue = 0 ; lengthToBeAdded-- ; theValue++ ) {
                int add = *theValue ;
                *lengthValue <<= 8 ;
                *lengthValue += add & 0xFF ;
            }
            if ( *lengthValue > *lengthMax - lengthLength - 1 ) {
                *lengthValue =  *lengthMax - lengthLength - 1 ;
                result       =  0 ;
            }
            *lengthMax =  lengthLength + 1 ;
        }
    } else {
        *lengthValue =  *theValue ;
        if ( *lengthValue > *lengthMax - 1 ) {
            *lengthValue =  *lengthMax - 1 ;
            result       =  0 ;
        }
        *lengthMax =  1 ;
    }
    
    // return result 
    return result ;
}

// GetTagAndLength : return tag and length
PTREE DecompAsn::GetTagAndLength ( char *theValue, long *lengthTag, long *lengthLength, long *lengthValue, long length )
{
    char    *string ;
    Coding  res ; // the result
    Coding  *incorrectRes = (Coding *)0 ;
    
    // verify tag
    {
        char    *string ;
        *lengthTag =  length ;
        if ( !DecodeTag(theValue, lengthTag) ) {
            PTREE   ptTree ;
            res.PutTag("");
            ptTree =  res.GetPointer();
            ptTree += <,<>,<>,<>,<INCORRECT_TAG>>;
        }
        string =  DecodeOctetStringFast(theValue, *lengthTag);
        res.PutTag(string);
    }
    
    // update pointers 
    {
        theValue += *lengthTag ;
        length   -= *lengthTag ;
    }
    
    // verify length
    {
        *lengthLength =  length ;
        if ( !DecodeLength(theValue, lengthLength, lengthValue) ) {
            PTREE   ptTree = res.GetPointer();
            if ( !ptTree [4] ) {
                ptTree += <,<>,<>,<>,<INCORRECT_LENGTH>>;
            }
        }
        string =  DecodeOctetStringFast(theValue, *lengthLength);
        res.PutLength(string);
    }
    
    // return value
    return res.GetPointer();
}

// DecodeInteger : get string out of integer value
char *DecompAsn::DecodeInteger ( char *theValue )
{
    return AllocString(DecodeInteger(theValue));
}

// DecodeIntegerFast : get string out of integer value
// parameters :
//              theValue : string containing integer
// result : the long
long DecompAsn::DecodeIntegerFastDirect ( char *theValue )
{
    long    val = 0 ;
    long    readOct ;
    char    *ptInter ;
    int     rest ;
    int     sthingDone = 0 ;
    char    *string = (char *)0 ;
    char    *res ;
    char    *ptDest ;
    char    digit [2] = {' ', '\0'};
    int     negative = 0 ;
    
    pvEncodeString =  "";
    
    // put sign in integer value
    if ( *theValue >= 'A' ) 
        readOct =  *theValue - 'A' + 10 ;
    else 
        readOct =  *theValue - '0';
    if ( readOct & 0x8 ) 
        val =  ~0 ;
    else 
        val =  0 ;
    
    // read value
    for (; *theValue ; theValue++ ) {
        val <<= 4 ;
        if ( *theValue >= 'A' ) 
            readOct =  *theValue - 'A' + 10 ;
        else 
            readOct =  *theValue - '0';
        val |= readOct ;
    }
    return val ;
}

// DecodeIntegerFast : get string out of integer value
const char *DecompAsn::DecodeIntegerFast ( char *theValue )
{
    long    val = 0 ;
    int     rest ;
    int     sthingDone = 0 ;
    char    *string = (char *)0 ;
    char    digit [2] = {' ', '\0'};
    int     negative = 0 ;
    
    val =  DecodeIntegerFastDirect(theValue);
    
    // convert it to a string
    if ( val < 0 ) {
        negative =  1 ;
        val      =  -val ;
    }
    while ( val ) {
        rest   =  val % 10 ;
        val    =  val / 10 ;
        *digit =  '0' + rest ;
        pvEncodeString.prepend(digit);
        sthingDone =  1 ;
    }
    if ( sthingDone ) {
        if ( negative ) 
            pvEncodeString.prepend("-");
    } else {
        return "0";
    }
    return (char *)(pvEncodeString.c_str());
}

// DecodeIntegerTree : get integer tree out of a coded integer value
PTREE DecompAsn::DecodeIntegerTree ( char *theValue )
{
    const char  *integerString = DecodeIntegerFast(theValue);
    PTREE       retTree ; // returned tree
    
    // if integer is < 0 create a minus node otherwise a standard NUMB
    if ( *integerString == '-' ) {
        retTree =  <UN_MINUS,<NUMB,MakeString(integerString + 1)>>;
    } else {
        retTree =  <NUMB,MakeString(integerString)>;
    }
    
    // return tree
    return retTree ;
}

// DecodeBitString : get string out of bit string value
PTREE DecompAsn::DecodeBitString ( PTREE type, char *theValue )
{
    EString res("");
    EString unused(theValue, 2);
    PTREE   list ;
    PTREE   elem ;
    char    *ptBit ;       // pointer on the bit string
    int     pos ;          // pos while examining res
    char    nb [10];       // a number string
    PTREE   listBit ;      // resulting list of named bits
    int     lengthString ; // length of string
    int     found = 0 ;
    
    // read value
    if ( *theValue && *(theValue + 1) ) {
        theValue += 2 ;
        while ( *theValue ) {
            int     nb = 4 ;
            char    c = *theValue++ ;
            if ( c >= 'A' ) 
                c =  c - 'A' + 10 ;
            else 
                c =  c - '0';
            c <<= 4 ;
            while ( nb-- ) {
                if ( c & 0x80 ) 
                    res += "1";
                else 
                    res += "0";
                c <<= 1 ;
            }
        }
    }
    
    // take number of bits unused
    {
        lengthString =  res.length() - GetLong((char *)(const char *)unused);
        if ( lengthString < 0 ) 
            lengthString =  0 ;
        res =  EString(res.at(0, lengthString));
    }
    
    // look if value cannot be expressed with a sequence value
    if ( type == <,<LIST>> ) {
        ptBit =  (char *)(const char *)res ;
        for ( pos   = 0, found = 1 ; found && *ptBit && pos < lengthString ; ptBit++, pos++ ) {
            if ( *ptBit == '1' ) {
                found =  0 ;
                _itoa(pos, nb, 10);
                if ( type == <,list> ) {
                    while ( (elem = nextl(list)) ) {
                        if ( !strcmp(Value(elem [2]), nb) ) {
                            listBit *= copytree(elem [1]);
                            found   =  1 ;
                            break ;
                        }
                    }
                }
            }
        }
        if ( !found ) 
            listBit =  ();
    }
    
    // return res
    if ( listBit != () ) {
        return <SEQUENCE_VALUE,listBit>;
    } else {
        return <BSTRING,MakeString((char *)(const char *)res)>;
    }
}

// DecodeOctetString : get string out of octet string value
char *DecompAsn::DecodeOctetString ( char *theValue, int length )
{
    return AllocString(DecodeOctetStringFast(theValue, length));
}

// DecodeOctetString : get string out of octet string value
char *DecompAsn::DecodeOctetStringFast ( char *theValue, unsigned int length )
{
    char    digit [2];
    
    pvEncodeString =  "";
    if ( pvEncodeString.Size() < 2 * length ) 
        pvEncodeString.Resize(2 * length);
    
    // read value
    *(digit + 1) =  '\0';
    while ( length-- ) {
        char    c = *theValue++ ;
        {
            int val = c >> 4 & 0xF ;
            if ( val < 10 ) 
                *digit =  '0' + val ;
            else 
                *digit =  'A' + val - 10 ;
            pvEncodeString += digit ;
            val            =  c & 0xF ;
            if ( val < 10 ) 
                *digit =  '0' + val ;
            else 
                *digit =  'A' + val - 10 ;
            pvEncodeString += digit ;
        }
    }
    
    // return res
    return (char *)(const char *)pvEncodeString ;
}

// DecodeString : get string out of  string value
char *DecompAsn::DecodeString ( char *theValue )
{
    return AllocString(DecodeStringFast(theValue));
}

// DecodeString : get string out of  string value
char *DecompAsn::DecodeStringFast ( char *theValue )
{
    char    c, c1 ;
    
    pvEncodeString =  "";
    while ( *theValue ) {
        c =  *theValue++ ;
        if ( c >= 'A' ) 
            c =  c - 'A' + 10 ;
        else 
            c =  c - '0';
        c <<= 4 ;
        if ( *theValue ) {
            c1 =  *theValue++ ;
            if ( c1 >= 'A' ) 
                c |= c1 - 'A' + 10 ;
            else 
                c |= c1 - '0';
        }
        pvEncodeString += c ;
    }
    
    // return res
    return (char *)(pvEncodeString.c_str());
}

// DecodeOjbectIdentifier : get tree out of object identifier value
PTREE DecompAsn::DecodeObjectIdentifier ( char *theValue )
{
    
    PTREE   listValue ;                           // decoded values list
    PTREE   list ;                                // a list pointer
    PTREE   elem ;                                // an element of list
    PTREE   ptTreeObject = objectIdentifierTree ; // tree of object identifier
    PTREE   elemObject ;                          // an element of object
                                                  // identifier tree
    long    nbObject ;                            // next number for object 
                                                  // identifier
    int     octet ;                               // next read octet
    int     first = 1 ;                           // first octet 
    char    stringNumber [20];                    // string to encode an 
                                                  // integer
    
    while ( *theValue ) {
        
        // lire le prochain nombre
        octet    =  0x80 ;
        nbObject =  0 ;
        while ( octet & 0x80 ) {
            EString string(theValue, 2);
            
            // decode an octet
            octet =  DecodeHexa((char *)(const char *)string);
            
            // go on next octet
            if ( *theValue + 1 ) 
                theValue += 2 ;
            else 
                theValue++ ;
            
            // add octet to the value
            nbObject =  nbObject << 7 | octet & 0x7F ;
        }
        if ( first ) {
            _itoa(nbObject / 40, stringNumber, 10);
            listValue *= <NUMB,MakeString(stringNumber)>;
            if ( nbObject % 40 || *theValue ) {
                _itoa(nbObject % 40, stringNumber, 10);
                listValue *= <NUMB,MakeString(stringNumber)>;
            }
            first =  0 ;
        } else {
            _itoa(nbObject, stringNumber, 10);
            listValue *= <NUMB,MakeString(stringNumber)>;
        }
    }
    
    // decode the values
    list =  listValue ;
    while ( (elem = nextl(list)) ) {
        ptTreeObject =  ListFind(ptTreeObject [2], elem);
        if ( !ptTreeObject ) 
            break ;
        if ( ptTreeObject != <,<>,<>,()> ) {
            elemObject =  <VAL_DEF,copytree(ptTreeObject [3]),copytree(elem)>;
            elem       += elemObject ;
        }
    }
    return <OBJECT_IDENTIFIER_VALUE,listValue>;
}

// ComputeTagChoice : compute the list of tag for choice
PTREE DecompAsn::ComputeTagChoice ( PTREE choice, PTREE entry, bool bulk )
{
    PTREE   list, elem ;
    PTREE   taggedList ;
    PTREE   downType ;
    PTREE   name ;
    PTREE   type ;
    PTREE   labeledChoice ;
    
    if ( choice == <CHOICE,list,labeledChoice> ) {
        if ( labeledChoice ) 
            return labeledChoice ;
        while ( (elem = nextl(list)) ) {
            
            // search if type is a choice
            elem == <NAMED_TYPE,name,type>;
            while ( type == <TYP,(),type> || type == <TYP_IDENT> && (type = FindTyp(type)) ) 
                ;
            
            // if choice expose all possibilites of choice 
            if ( type != <CHOICE> ) {
                char    *valTag = EncodeTagFast(ComputeTypeTag(type), 0);
                if ( entry ) {
                    elem =  <TAGGED_NAMED_TYPE,MakeString(valTag),MakeTreeRef(entry)>;
                } else {
                    elem =  <TAGGED_NAMED_TYPE,MakeString(valTag),MakeTreeRef(elem)>;
                }
                taggedList *= elem ;
            } else {
                if ( !bulk ) {
                    if ( entry ) {
                        taggedList =  ConcatList(taggedList, ComputeTagChoice(type, entry));
                    } else {
                        taggedList =  ConcatList(taggedList, ComputeTagChoice(type, elem));
                    }
                } else {
                    
                    // if bulk keep tag by choice entry
                    if ( type == <CHOICE> ) 
                        type += <,<>,()>;
                    PTREE   tagList = ComputeTagChoice(type, PTREE(0));
                    if ( entry ) {
                        elem =  <TAGGED_NAMED_TYPE,tagList,MakeTreeRef(entry)>;
                    } else {
                        elem =  <TAGGED_NAMED_TYPE,tagList,MakeTreeRef(elem)>;
                    }
                    taggedList *= elem ;
                }
            }
        }
        choice += <,<>,taggedList>;
    }
    return taggedList ;
}

// ComputeTagSet : compute tags of element of sequence or set
PTREE DecompAsn::ComputeTagSet ( PTREE type )
{
    PTREE   list ;
    PTREE   elem ;
    PTREE   ident ;
    PTREE   opt ;
    PTREE   taggedElem ;
    PTREE   taggedList ;
    PTREE   labeledEntry ;
    PTREE   initType (type) ;
    
    if ( type == <SEQUENCE,<>,labeledEntry> || type == <SET,<>,labeledEntry> ) {
        
        //  
        if ( labeledEntry != () ) 
            return labeledEntry ;
        
        // Normalize type
        type =  TypeNormalize(type);
        
        // compute the tags
        type == <,list>;
        while ( (elem = nextl(list)) ) {
            if ( elem == <ELEMENT_TYPE,<NAMED_TYPE,ident,type>,opt> ) {
                
                // search if type is a choice
                while ( type == <TYP,(),type> || type == <TYP_IDENT> && (type = FindTyp(type)) ) 
                    ;
                
                // if choice expose all possibilites of choice 
                if ( type != <CHOICE> ) {
                    char    *valTag ;
                    PTREE   tag = ComputeTypeTag(type);
                    if ( tag ) {
                        valTag     =  EncodeTagFast(tag, 0);
                        taggedElem =  <TAGGED_NAMED_TYPE,MakeString(valTag),MakeTreeRef(elem)>;
                    } else {
                        taggedElem =  <TAGGED_NAMED_TYPE,<ANY_TAG>,MakeTreeRef(elem)>;
                    }
                    taggedList *= taggedElem ;
                } else {
                    taggedList *= ComputeTagChoice(type, elem);
                }
            }
        }
        initType += <,<>,labeledEntry>;
    }
    return taggedList ;
}

// IncorrectField : create incorrect field
PTREE DecompAsn::IncorrectField ( PTREE error, PTREE octetTree )
{
    PTREE   nameField ;
    EString string ;
    PTREE   retTree ; // returned tree
    
    // name of field
    switch ( error ) {
        case <INCORRECT_TAG> : 
            nameField = MakeString("incorrect-tag");
            break ;
        case <INCORRECT_LENGTH> : 
            nameField = MakeString("incorrect-length");
            break ;
        case <UNEXPECTED_TAG> : 
            {
                
                // if we have not found a good tag yet, it means that 
                // the whole tree will unmatch (first tag is bad) 
                // so don't compute anything
                if ( !nbMatch ) 
                    return (PTREE)0 ;
                nameField =  MakeString("unexpected-tag");
            }
            break ;
        case <INVALID_FIELD> : 
            nameField = MakeString("invalid-field");
            break ;
        case <UNKNOWN_FIELD> : 
            nameField = MakeString("unknown-field");
            break ;
    }
    
    // create returned value
    retTree =  octetTree [3];
    if ( retTree != <LIST> ) {
        
        // octet string
        string  =  EString(Value(octetTree [1])) + Value(octetTree [2]) + Value(octetTree [3]);
        
        // return error field
        retTree =  <NAMED_VALUE,nameField,<HSTRING,MakeString((char *)(const char *)string)>>;
    } else {
        PTREE   listValue ;
        PTREE   elem ;
        PTREE   list = octetTree [3];
        while ( (elem = nextl(list)) ) {
            listValue *= IncorrectField(<UNKNOWN_FIELD>, elem);
            retTree   =  <NAMED_VALUE,nameField,<SEQUENCE_VALUE,listValue>>;
        }
    }
    return retTree ;
}

static PTREE    lastAny = (PTREE)0 ;

char *DecompAsn::ConvertStringToBin ( char *content, int length, char *ptDest )
{
    char    *result ;
    char    *pt = content ;
    char    *ptResult ;
    
    if ( !ptDest ) 
        ptResult =  result = (char *)malloc(length / 2 > 1 ? length / 2 : 1);
    else 
        ptResult =  result = ptDest ;
    for ( pt = content ; length > 1 ; length -= 2 ) {
        int nb = 0 ;
        if ( *pt >= 'A' && *pt <= 'F' ) 
            nb =  16 * (*pt - 'A' + 10);
        else if ( *pt >= 'a' && *pt <= 'f' ) 
            nb =  16 * (*pt - 'a' + 10);
        else 
            nb =  16 * (*pt - '0');
        pt++ ;
        if ( *pt >= 'A' && *pt <= 'F' ) 
            nb += *pt - 'A' + 10 ;
        else if ( *pt >= 'a' && *pt <= 'f' ) 
            nb += *pt - 'a' + 10 ;
        else 
            nb += *pt - '0';
        pt++ ;
        *ptResult++ =  (char)nb ;
    }
    return result ;
}

// expand one level of a tlv
// parameters :
//              tlv : the tlv to be expanded
void DecompAsn::ExpandTLV ( PTREE tlv )
{
    
    // add a level of encoding
    if ( FastEncode() && APPLY_CLASS(tlv [3], TreeClass, Type()) == asn::TLV_CHUNK ) {
        long    length = APPLY_CLASS(tlv [3], TLVChunk, Length());
        PTREE   expanded ; // expanded tree
        expanded =  GetTLVShallow(Value(tlv [3]), &length);
        if ( expanded != <LIST> ) 
            expanded =  <LIST,expanded,()>;
        tlv += <,<>,<>,expanded>;
    }
}

// expand all level of a tlv
// parameters :
//              tlv : the tlv to be expanded
void DecompAsn::ExpandTLVFull ( PTREE tlv )
{
    
    // add a level of encoding
    if ( FastEncode() && APPLY_CLASS(tlv [3], TreeClass, Type()) == asn::TLV_CHUNK ) {
        long    length = APPLY_CLASS(tlv [3], TLVChunk, Length());
        tlv += <,<>,<>,GetTLV(Value(tlv [3]), &length)>;
    }
}

// tag and constructed are used with IMPLICIT coding
// it gives the tag we are waiting for
PTREE DecompAsn::DecodeValue ( const PTREE &paramType, PTREE tag, int constructed, PTREE tlv, bool decodeOString )
{
    
    Coding      res (tlv) ;      // result
    long        lengthTag ;      // length of tag
    long        lengthLength ;   // length of length
    long        lengthValue ;    // length of value
    long        lengthValueSon ; // length of values of son
    PTREE       listValue = ();  // list for complex Values
    char        *theValueSon ;
    PTREE       taggedList ;
    PTREE       content ;
    const char  *string ;
    PTREE       list ;
    PTREE       elemType ;
    PTREE       elemTag ;
    PTREE       valType ;
    PTREE       elem ;
    PTREE       tlvTag ;
    PTREE       tlvLength ;
    PTREE       val ;
    int         firstTag = 1 ;
    PTREE       basicType ;
    PTREE       type = paramType ;
    
    // get tlv if not done in fast mode
    if ( FastEncode() ) {
        if ( APPLY_CLASS(tlv, TreeClass, Type()) == asn::TLV_CHUNK ) {
            long    length = APPLY_CLASS(tlv, TLVChunk, Length());
            tlv =  GetTLVShallow(Value(tlv), &length);
        }
    }
    
    // if something is null return null pointer and an error
    if ( !tlv ) {
        nbError++ ;
        return (PTREE)0 ;
    }
    
    // if there is a decoding error return an error
    if ( tlv != <,<>,<>,<>,()> ) {
        return IncorrectField(tlv [4], tlv);
    }
nextDecode : 
    if ( !type ) {
        nbError++ ;
        return (PTREE)0 ;
    }
    
    // verify according to the type
    switch ( type ) {
        case <CLASS_TREE> : 
            {
                
                // it is a ref tree
                type =  GetTreeRef(type);
                goto nextDecode ;
            }
            break ;
        case <TYP_ASSIGN,<>,valType> : 
            type = valType ;
            goto nextDecode ;
            break ;
        case <TYP,list,valType> : 
            if ( list == () ) {
                type =  valType ;
                goto nextDecode ;
            } else {
                if ( tag ) {
                    list =  copytree(tag) * copytree(list);
                }
                while ( (elem = nextl(list)) ) {
                    
                    // get val type
                    elem == <,<>,<>,val>;
                    
                    // if not indicated get tag default
                    if ( val == () ) 
                        val =  tagDefault ;
                    if ( !strcmp(Value(val), "IMPLICIT") ) {
                        
                        // search the first non implicit tag
                        while ( (elemTag = nextl(list)) ) {
                            
                            // get val type
                            elemTag == <,<>,<>,val>;
                            
                            // if not indicated get tag default
                            if ( val == () ) 
                                val =  tagDefault ;
                            
                            // if this tag is not implicit break
                            if ( strcmp(Value(val), "IMPLICIT") ) 
                                break ;
                        }
                        
                        // if we have found an explicit tag we can search 
                        // for the implicit tag 
                        if ( elemTag != () ) {
                            char    *tag = EncodeTagFast(elem, 1);
                            if ( strcmp(Value(tlv), tag) ) {
                                nbError++ ;
                                return IncorrectField(<UNEXPECTED_TAG>, tlv);
                            }
                            
                            // add a level of encoding
                            ExpandTLV(tlv);
                            
                            // modify coding into blind coding since 
                            // it is a constructed tag
                            // suppress the list inserted
                            if ( tlv == <CODING,tlvTag,tlvLength,<LIST,val>> ) {
                                PTREE   newTree ;
                                newTree =  <BLIND_CODING,tlvTag,tlvLength,val,()>;
                                tlv     =  tlv += newTree ;
                            }
                            
                            // update variables
                            nbMatch++ ;
                            tlv == <,<>,<>,tlv>;
                            Coding  cod((PPTREE)tlv);
                            res =  cod ;
                        } else if ( (basicType = GetType(valType, (PTREE)0)), basicType != <CHOICE> && basicType != <ANY_TYPE> ) 
                        {
#                           if 0
                                return DecodeValue(valType, elem, 0, tlv, decodeOString);
#                           endif
                            type        =  valType ;
                            tag         =  elem ;
                            constructed =  0 ;
                            goto nextDecode ;
                        } else 
                            // implicit in front of choice == explicit
                            goto explicit_tag ;
                    } else {
                    explicit_tag : 
                        {
                            char    *tag = EncodeTagFast(elem, 1);
                            if ( strcmp(Value(tlv), tag) ) {
                                nbError++ ;
                                return IncorrectField(<UNEXPECTED_TAG>, tlv);
                            }
                            
                            // add a level of encoding
                            ExpandTLV(tlv);
                            
                            // modify coding into blind coding since 
                            // it is a constructed tag
                            // suppress the list inserted
                            if ( tlv == <CODING,tlvTag,tlvLength,<LIST,val>> ) {
                                PTREE   newTree ;
                                newTree =  <BLIND_CODING,tlvTag,tlvLength,val,()>;
                                tlv     =  tlv += newTree ;
                            }
                            
                            // update variables
                            nbMatch++ ;
                            tlv == <,<>,<>,tlv>;
                            Coding  cod((PPTREE)tlv);
                            res =  cod ;
                        }
                    }
                }
            }
#           if 0
                return DecodeValue(valType, (PTREE)0, 0, tlv, decodeOString);
#           endif
            type        = valType ;
            tag         = 0 ;
            constructed = 0 ;
            goto nextDecode ;
            break ;
        case <TYP_IDENT,val> : 
            {
                PTREE   valType = FindTyp(val);
                type =  valType ;
                goto nextDecode ;
            }
            break ;
        case <INTEGER> : 
        case <REAL_TYPE> : 
        case <NULL_TYPE> : 
        case <BOOLEAN> : 
        case <ENUMERATED> : 
        case <OBJECT_IDENTIFIER> : 
            {
                
                // if tag is not given above take type tag
                if ( !tag ) 
                    tag =  ComputeTypeTag(type);
                constructed =  0 ;
                
                // expand tlv
                ExpandTLVFull(tlv);
                
                // if value is correct verify if tag is correct
                {
                    PTREE   ptTree = res.GetPointer();
                    if ( !ptTree [4] ) {
                        char    *charTag = EncodeTagFast(tag, constructed);
                        CompMemorize(&res);
                        if ( strcmp(CompGetTag(), charTag) ) {
                            nbError++ ;
                            return IncorrectField(<UNEXPECTED_TAG>, ptTree);
                        }
                        nbMatch++ ;
                    } else {
                        return IncorrectField(ptTree [4], ptTree);
                    }
                }
                
                // compute value
                switch ( type ) {
                    case <INTEGER> : 
                        string = DecodeIntegerFast(Value(tlv [3]));
                        
                        // search if it is not a name integer
                        type == <,list>;
                        content = ();
                        if ( list ) {
                            while ( (elem = nextl(list)) ) {
                                if ( !strcmp(Value(elem [2]), string) ) {
                                    content =  <IDENT,MakeString(Value(elem [1]))>;
                                    break ;
                                }
                            }
                        }
                        
                        // if not a named integer put number as it
                        if ( content == () ) 
                            content =  <NUMB,MakeString(string)>;
                        break ;
                    case <REAL_TYPE> : 
                        content = MakeString("");
                        break ;
                    case <NULL_TYPE> : 
                        content = <NULL_VALUE>;
                        break ;
                    case <BOOLEAN> : 
                        if ( !strcmp(Value(tlv [3]), "00") ) {
                            content =  <FALSE>;
                        } else {
                            content =  <TRUE>;
                        }
                        break ;
                    case <ENUMERATED> : 
                        {
                            val =  DecodeIntegerTree(Value(tlv [3]));
                            type == <,list>;
                            while ( (elem = nextl(list)) ) {
                                if ( qcomparetree(elem [2], val) ) {
                                    content =  <IDENT,MakeString(Value(elem [1]))>;
                                    break ;
                                }
                            }
                            
                            // if didn't find value return invalid field
                            if ( !content ) {
                                return IncorrectField(<INVALID_FIELD>, tlv);
                            }
                        }
                        break ;
                    case <OBJECT_IDENTIFIER> : 
                        {
                            content =  DecodeObjectIdentifier(Value(tlv [3]));
                        }
                        break ;
                }
                
                // return it
                val =  <NAMED_VALUE,<TOP_ENTRY>,content>;
                return val ;
            }
            break ;
        case <BITSTRING> : 
        case <OCTET_STRING> : 
        case <UTC_TIME> : 
        case <GENERALIZED_TIME> : 
        case <CHARACTER> : 
            {
                
                // if tag is not given compute it
                if ( !tag ) 
                    tag =  ComputeTypeTag(type);
                
                // expand tlv
                ExpandTLVFull(tlv);
                
                // look if value is constructed
                {
                    EString string(Value(tlv), 2);
                    int     val = DecodeHexa((char *)(const char *)string);
                    if ( val & 0x20 ) 
                        constructed =  1 ;
                    else 
                        constructed =  0 ;
                }
                
                // if value is correct verify if tag is correct
                {
                    PTREE   ptTree = res.GetPointer();
                    if ( !ptTree [4] ) {
                        char    *charTag = EncodeTagFast(tag, constructed);
                        CompMemorize(&res);
                        if ( strcmp(CompGetTag(), charTag) ) {
                            nbError++ ;
                            return IncorrectField(<UNEXPECTED_TAG>, ptTree);
                        }
                        nbMatch++ ;
                    } else {
                        return IncorrectField(ptTree [4], ptTree);
                    }
                }
                
                // if everything is correct put bitstring value 
                {
                    PTREE   ptTree = tlv [3];
                    
                    // compute value if it is constructed or not
                    if ( ptTree != <LIST> ) {
                        switch ( type ) {
                            case <BITSTRING> : 
                                {
                                    content =  DecodeBitString(type, Value(tlv [3]));
                                }
                                break ;
                            case <OCTET_STRING> : 
                                {
                                    content =  <HSTRING,MakeString(Value(tlv [3]))>;
                                    
                                    // for an octet string look if it is not
                                    // an asn1 value
                                    if ( decodeOString ) {
                                        long    length = strlen(Value(tlv [3]));
                                        PTREE   octetTlv ;
                                        PTREE   result ;
                                        PTREE   anyType ;
                                        PTREE   asn1Value ;
                                        PTREE   modifiedTlv ;
                                        char    *string = ConvertStringToBin(Value(tlv [3]), length);
                                        
                                        // if tlv is correctly decoded it is a tlv
                                        length   =  length / 2 ;
                                        octetTlv =  GetTLV(string, &length);
                                        free(string);
                                        if ( !length && octetTlv == <CODING,<>,<>,<>,()> ) {
                                            result =  InterpretGetValue(octetTlv);
                                            if ( result ) {
                                                result == <,asn1Value,modifiedTlv,anyType>;
                                                
                                                // tlv += modifiedTlv ;
                                                tlv += modifiedTlv ;
                                                asn1Value == <NAMED_VALUE,<>,asn1Value>;
                                                asn1Value == <ANY_VALUE,<TYP_ASSIGN,anyType>,asn1Value>;
                                                anyType == <TYP_ASSIGN,anyType>;
                                                val =  <NAMED_VALUE,<TOP_ENTRY>,<ANY_VALUE,copytree(anyType),asn1Value>>;
                                                return val ;
                                            }
                                        }
                                    }
                                    break ;
                                }
                            default : 
                                {
                                    string  =  DecodeStringFast(Value(tlv [3]));
                                    content =  <STRING,MakeString(string)>;
                                }
                                break ;
                        }
                        val =  <NAMED_VALUE,<TOP_ENTRY>,content>;
                        return val ;
                    } else {
                        
                        // compute sons
                        listValue =  ();
                        while ( (elem = nextl(ptTree)) ) {
                            PTREE   result ;
                            if ( (result = DecodeValue(type, (PTREE)0, 0, elem)), decodeOString ) {
                                
                                // suppress NAMED_VALUE
                                result == <,<>,result>;
                                
                                // add to list
                                listValue *= result ;
                            }
                        }
                        
                        // return result
                        val =  <NAMED_VALUE,<TOP_ENTRY>,<SEQUENCE_VALUE,listValue>>;
                        return val ;
                    }
                }
            }
            break ;
        case <SEQUENCE_OF> : 
        case <SET_OF> : 
            
            // if tag is not given above compute it
            if ( !tag ) 
                tag =  ComputeTypeTag(type);
            
            // value is constructed
            constructed = 1 ;
            
            // if value is correct verify if tag is correct
            {
                PTREE   ptTree = res.GetPointer();
                if ( !ptTree [4] ) {
                    char    *charTag = EncodeTagFast(tag, constructed);
                    CompMemorize(&res);
                    if ( strcmp(CompGetTag(), charTag) ) {
                        nbError++ ;
                        return IncorrectField(<UNEXPECTED_TAG>, ptTree);
                    }
                    nbMatch++ ;
                } else {
                    return IncorrectField(ptTree [4], ptTree);
                }
            }
            
            // expand one level of tlv
            ExpandTLV(tlv);
            
            // 
            {
                PTREE   ptTree = tlv [3];
                
                // if everything is correct put SEQUENCE/SET value 
                if ( ptTree == <LIST> ) {
                    
                    // compute sons
                    listValue =  ();
                    while ( (elem = nextl(ptTree)) ) {
                        PTREE   result ;
                        if ( (result = DecodeValue(type [2], (PTREE)0, 0, elem, decodeOString)) ) {
                            
                            // suppress NAMED_VALUE
                            result == <NAMED_VALUE,<>,result>;
                            
                            // add to list 
                            listValue =  <LIST,result,listValue>;
                        }
                    }
                    
                    // return result
                    val =  <NAMED_VALUE,<TOP_ENTRY>,<SEQUENCE_VALUE,ListPermutate(listValue)>>;
                    return val ;
                } else if ( ptTree == () ) {
                    val =  <NAMED_VALUE,<TOP_ENTRY>,<SEQUENCE_VALUE,()>>;
                    return val ;
                } else {
                    nbError++ ;
                    return IncorrectField(<INVALID_FIELD>, tlv);
                }
            }
            break ;
        case <SEQUENCE> : 
        case <SET> : 
            {
                PTREE   listResult ;
                
                // if tag is not given above compute it
                if ( !tag ) 
                    tag =  ComputeTypeTag(type);
                
                // value is constructed
                constructed =  1 ;
                
                // if value is correct verify if tag is correct
                {
                    PTREE   ptTree = res.GetPointer();
                    if ( !ptTree [4] ) {
                        char    *charTag = EncodeTagFast(tag, constructed);
                        CompMemorize(&res);
                        if ( strcmp(CompGetTag(), charTag) ) {
                            nbError++ ;
                            return IncorrectField(<UNEXPECTED_TAG>, ptTree);
                        }
                        nbMatch++ ;
                    } else {
                        return IncorrectField(ptTree [4], ptTree);
                    }
                }
                
                // expand one level of tlv
                ExpandTLV(tlv);
                
                // if everything is correct put SEQUENCE/SET value 
                {
                    PTREE   ptTree = tlv [3];
                    PTREE   bigElem ;
                    if ( ptTree == <LIST> ) {
                        
                        // normalize type
                        // type = TypeNormalize(type);
                        // compute the tagged list
                        taggedList =  ComputeTagSet(type);
                        
                        // compute sons
                        while ( (elem = nextl(ptTree)) ) {
                            char    *tagValue ;
                            PTREE   tagType ;
                            PTREE   name ;
                            int     found = 0 ;
                            
                            // get value of tag
                            tagValue =  AllocString(Value(elem [1]));
                            
                            // suppress constructed bit
                            {
                                EString string(tagValue, 2);
                                char    andString [3];
                                EncodeHexa(DecodeHexa((char *)(const char *)string) & 0xDF, andString, false);
                                strncpy(tagValue, andString, 2);
                            }
                            
                            // search the tag in tags of SET or SEQUENCE
                            {
                                
                                // search in list
                                list =  taggedList ;
                                while ( (bigElem = nextl(list)) ) {
                                    if ( bigElem == <LIST> ) 
                                        elemType =  nextl(bigElem);
                                    else 
                                        elemType =  bigElem ;
                                    while ( elemType ) {
                                        if ( elemType == <,<ANY_TAG>> || !strcmp(Value(elemType), tagValue) ) {
                                            elemType =  elemType [2];
                                            if ( elemType == <CLASS_TREE> ) 
                                                elemType =  GetTreeRef(elemType);
                                            if ( elemType == <ELEMENT_TYPE,<NAMED_TYPE,name,tagType>,<>> || elemType == <NAMED_TYPE,name,tagType> ) {
                                                PTREE   result = DecodeValue(tagType, (PTREE)0, 0, elem, decodeOString);
                                                if ( elem == <,<>,<>,<>,()> ) 
                                                    switch ( result ) {
                                                        case <NAMED_VALUE> : 
                                                            if ( result == <,<TOP_ENTRY>> ) {
                                                                result += <,copytree(name)>;
                                                            }
                                                            break ;
                                                        default : 
                                                            {
                                                                result =  <NAMED_VALUE,copytree(name),result>;
                                                            }
                                                    }
                                                listResult *= result ;
                                            }
                                            
                                            // if it is a sequence the value must 
                                            // be in same order as in type
                                            if ( type == <SEQUENCE> ) 
                                                taggedList =  list ;
                                            nbMatch++ ;
                                            found =  1 ;
                                            list  =  ();
                                            break ;
                                        } else if ( type == <SEQUENCE> && bigElem != <LIST> ) {
                                            PTREE   option ;
                                            
                                            // if it is a sequence we can try next 
                                            // only if current elem is a default
                                            // or optional
                                            elemType =  elemType [2];
                                            if ( elemType == <CLASS_TREE> ) 
                                                elemType =  GetTreeRef(elemType);
                                            if ( elemType == <ELEMENT_TYPE,<>,option> ) 
                                                if ( option == () ) {
                                                    taggedList =  list ;
                                                    list       =  ();
                                                    break ;
                                                }
                                        }
                                        if ( bigElem == <LIST> ) 
                                            elemType =  nextl(bigElem);
                                        else 
                                            elemType =  ();
                                    }
                                }
                                
                                // free tag value
                                free(tagValue);
                                
                                // if we didn't find anything it is an error
                                if ( !found ) {
                                    PTREE   result ;
                                    result     =  IncorrectField(<INVALID_FIELD>, elem);
                                    listResult *= result ;
                                    nbError++ ;
                                }
                            }
                        }
                        val =  <NAMED_VALUE,<TOP_ENTRY>,<SEQUENCE_VALUE,listResult>>;
                        return val ;
                    } else if ( ptTree == () ) {
                        val =  <NAMED_VALUE,<TOP_ENTRY>,<SEQUENCE_VALUE,()>>;
                        return val ;
                    } else {
                        return IncorrectField(ptTree [4], ptTree);
                    }
                }
            }
            break ;
        case <CHOICE> : 
            {
                PTREE   result ;
                char    *tagValue ;
                int     found = 0 ;
                
                // if value is incorrect, return error
                {
                    PTREE   ptTree = res.GetPointer();
                    if ( ptTree [4] ) {
                        return IncorrectField(ptTree [4], ptTree);
                    }
                }
                
                // compute the tagged list
                taggedList =  ComputeTagChoice(type, (PTREE)0);
                
                // get value of tag
                tagValue   =  AllocString(Value(tlv [1]));
                
                // suppress constructed bit
                {
                    EString string(tagValue, 2);
                    char    andString [3];
                    EncodeHexa(DecodeHexa((char *)(const char *)string) & 0xDF, andString, false);
                    strncpy(tagValue, andString, 2);
                }
                
                // search the tag in tags of SET or SEQUENCE
                {
                    PTREE   name ;
                    PTREE   tagType ;
                    
                    // search in list
                    list =  taggedList ;
                    while ( (elemType = nextl(list)) ) {
                        if ( !strcmp(Value(elemType), tagValue) ) {
                            elemType =  elemType [2];
                            if ( elemType == <CLASS_TREE> ) 
                                elemType =  GetTreeRef(elemType);
                            if ( elemType == <NAMED_TYPE,name,tagType> ) {
                                result =  DecodeValue(tagType, (PTREE)0, 0, tlv, decodeOString);
                                if ( tlv == <,<>,<>,<>,()> ) 
                                    switch ( result ) {
                                        case <NAMED_VALUE> : 
                                            {
                                                if ( result != <,<TOP_ENTRY>> ) {
                                                    result =  <NAMED_VALUE,copytree(name),result>;
                                                } else {
                                                    result += <,copytree(name)>;
                                                }
                                                result =  <NAMED_VALUE,<TOP_ENTRY>,result>;
                                            }
                                            break ;
                                        default : 
                                            {
                                                result =  <NAMED_VALUE,copytree(name),result>;
                                            }
                                            result = <NAMED_VALUE,<TOP_ENTRY>,result>;
                                    }
                                found =  1 ;
                                nbMatch++ ;
                                break ;
                            }
                        }
                    }
                }
                
                // free tag value
                free(tagValue);
                
                // if we didn't find anything it is an error
                if ( !found ) {
                    nbError++ ;
                    result =  IncorrectField(<INVALID_FIELD>, tlv);
                }
                return result ;
            }
            break ;
        case <ANY_TYPE> : 
            {
                PTREE   result ;
                
                // search preventing loops
                if ( !qcomparetree(lastAny, tlv) ) {
                    lastAny =  tlv ;
                    result  =  InterpretGetValue(tlv);
                    lastAny =  (PTREE)0 ;
                }
                
                // compute result
                if ( result ) {
                    PTREE   anyType ;
                    PTREE   asn1Value ;
                    PTREE   modifiedTlv ;
                    result == <,asn1Value,modifiedTlv,anyType>;
                    tlv += modifiedTlv ;
                    asn1Value == <,<>,asn1Value>;
                    anyType == <TYP_ASSIGN,anyType>;
                    val =  <NAMED_VALUE,<TOP_ENTRY>,<ANY_VALUE,anyType,asn1Value>>;
                    return val ;
                } else {
                    return IncorrectField(<UNKNOWN_FIELD>, tlv);
                }
            }
        default : 
            {
                return IncorrectField(<UNKNOWN_FIELD>, tlv);
            }
    }
    return (PTREE)0 ;
}

// getting TLV value of an octet string
PTREE DecompAsn::GetTLV ( char *theValue, long *length )
{
    
    Coding  res(0);          // result
    long    lengthTag ;      // length of tag
    long    lengthLength ;   // length of length
    long    lengthValue ;    // length of value
    long    lengthValueSon ; // length of values of son
    PTREE   listValue = ();  // list for complex Values
    char    *theValueSon ;
    PTREE   ptTree ;
    EString string ;
    
    // if string is empty return 
    if ( *length <= 0 ) 
        return res.GetPointer();
    
    // get next TLV value
    ptTree =  GetTagAndLength(theValue, &lengthTag, &lengthLength, &lengthValue, *length);
    
    Coding  cod((PPTREE)ptTree);
    
    res =  cod ;
    
    // if an error or not constructed put value as it
    if ( /* ptTree [4] ||*/ !(*theValue & 0x20) ) {
        char    *string = DecodeOctetStringFast(theValue + lengthTag + lengthLength, lengthValue);
        res.PutContent(string);
        
        // compute remaining length 
        *length -= lengthTag + lengthLength + lengthValue ;
        
        // if negative trim it
        if ( *length < 0 ) 
            *length =  0 ;
    } else {
        *length        -= lengthTag + lengthLength ;
        theValue       += lengthTag + lengthLength ;
        
        // compute sons
        lengthValueSon =  lengthValue ;
        theValueSon    =  theValue ;
        listValue      =  ();
        while ( lengthValueSon > 0 ) {
            listValue   *= GetTLV(theValueSon, &lengthValueSon);
            theValueSon =  theValue + lengthValue - lengthValueSon ;
        }
        
        // put the list as content
        res.TakeContent(listValue);
        
        // compute remaining length 
        *length -= lengthValue ;
    }
    
    // if length with 00 we must go forward of 2
    if ( !strcmp(Value(ptTree [2]), "80") ) {
        *length -= 2 ;
    }
    return ptTree ;
}

// getting first level of TLV value of an octet string
PTREE DecompAsn::GetTLVShallow ( char *theValue, long *length, bool first )
{
    
    Coding  res(0);          // result
    long    lengthTag ;      // length of tag
    long    lengthLength ;   // length of length
    long    lengthValue ;    // length of value
    long    lengthValueSon ; // length of values of son
    PTREE   listValue = ();  // list for complex Values
    PTREE   listResult ;     // results
    char    *theValueSon ;
    PTREE   ptTree ;
    EString string ;
    
    // if string is empty return 
    if ( *length <= 0 ) 
        return res.GetPointer();
    while ( *length ) {
        
        // get next TLV value
        ptTree =  GetTagAndLength(theValue, &lengthTag, &lengthLength, &lengthValue, *length);
        Coding  cod((PPTREE)ptTree);
        res =  cod ;
        
        // if an error or not constructed put value as it
        if ( ptTree [4] || !(*theValue & 0x20) ) {
            char    *string = DecodeOctetStringFast(theValue + lengthTag + lengthLength, lengthValue);
            res.PutContent(string);
            
            // compute remaining length 
            *length  -= lengthTag + lengthLength + lengthValue ;
            theValue += lengthTag + lengthLength + lengthValue ;
        } else {
            *length  -= lengthTag + lengthLength ;
            theValue += lengthTag + lengthLength ;
            
            // get a tlv chunk from remaining
            PTREE   content ; // content
            content =  ALLOCATE_CLASS(TLVChunk(theValue, lengthValue));
            
            // put the list as content
            res.TakeContent(content);
            
            // compute remaining length 
            *length  -= lengthValue ;
            theValue += lengthValue ;
        }
        
        // if length with 00 we must go forward of 2
        if ( !strcmp(Value(ptTree [2]), "80") ) {
            *length -= 2 ;
        }
        
        // add result to list
        if ( listResult == () && (!*length || first) ) {
            return ptTree ;
        } else {
            listResult =  <LIST,ptTree,listResult>;
        }
    }
    
    // return permutated list
    return ListPermutate(listResult);
}

// printing of a TLV tree
void DecompAsn::PrintTLV ( PTREE tlv )
{
    PTREE   content ;
    PTREE   elem ;
    
    PrintString(Value(tlv [1])) <S> PrintString(Value(tlv [2])) <S>
    content =  tlv [3];
    if ( content == <LIST> ) {
        <NL>
        "      " {{
                    while ( (elem = nextl(content)) ) {
                        PrintTLV(elem);
                    }
                 }}
    } else {
        Coding  coding (tlv) ;
        CompMemorize(&coding);
        "<" {{
                "< ";
                PrintStringVal();
            }}
        " >>";
    }
    <NL,1>
}

//
// creation of the object identifier tree
//
PTREE DecompAsn::CreateObjectIdentifierTree ()
{
    
    PTREE   list ;          // list of values
    PTREE   elemValue ;     // a value
    PTREE   typeValue ;     // type of value
    PTREE   valValue ;      // value of value
    PTREE   extendedValue ; // extendedValue of the object value
    int     basicType ;     // we have found the basicType for value
    PTREE   listDeriv ;     // list of derivation for the object identifier
    PTREE   valDeriv ;      // a derivation value
    PTREE   objectTree ;    // object identifier tree
    PTREE   objectTreePt ;  // current position in tree
    PTREE   listObject ;    // list at curent level in object tree pt
    PTREE   inter ;         // intermediate value
    PTREE   nameObject ;    // name of the current Value
    TabList *aTabList = tabListValue->GetTabList(0);
    
    if ( aTabList ) 
        list =  aTabList->List();
    while ( (elemValue = nextl(list)) ) {
        if ( elemValue == <VAL_ASSIGN,nameObject,typeValue,valValue> && (valValue == <OBJECT_IDENTIFIER_VALUE,listDeriv> || valValue == <SEQUENCE_VALUE,listDeriv>) ) {
            basicType =  0 ;
            
            // find the basic type of value
            while ( !basicType ) {
                switch ( typeValue ) {
                    case <TYP_IDENT,typeValue> : 
                        typeValue = FindTyp(typeValue);
                        break ;
                    case <TYP,<>,typeValue> : break ;
                    default : basicType = 1 ;
                }
            }
            
            // if the basic type is an object identifier collect the
            // new ident that this object identifier defines
            if ( typeValue == <OBJECT_IDENTIFIER> ) {
                
                // extend the derivation list
                extendedValue =  ExtendObjectValue(valValue);
                
                // insert it in the objectIdentifier tree
                objectTreePt  =  objectTree ;
                if ( extendedValue == <OBJECT_IDENTIFIER_VALUE,listDeriv> ) {
                    while ( (valDeriv = nextl(listDeriv)) ) {
                        valDeriv == <VAL_DEF,<>,valDeriv>;
                        if ( !objectTreePt ) {
                            objectTree =  <OBJECT_NODE,(),<LIST,objectTreePt = <OBJECT_NODE,MakeString(Value(valDeriv)),(),()>,()>,(),()>;
                        } else {
                            objectTreePt == <,<>,listObject>;
                            
                            // search current value in listObject
                            inter =  ListFind(listObject, valDeriv);
                            
                            // create entry if necessary
                            if ( inter ) {
                                objectTreePt =  inter ;
                            } else {
                                inter        =  <OBJECT_NODE,MakeString(Value(valDeriv)),(),()>;
                                objectTreePt += <,<>,listObject * inter>;
                                objectTreePt =  inter ;
                            }
                        }
                    }
                }
                
                // insert the names
                {
                    
                    // insert assignment ident 
                    objectTreePt += <,<>,<>,MakeString(Value(nameObject))>;
                    
                    // insert the other values in list
                    valValue == <,listDeriv>;
                    while ( listDeriv != <,<>,()> ) 
                        nextl(listDeriv);
                    while ( listDeriv == <LIST> ) {
                        if ( listDeriv == <,<VAL_DEF,valDeriv>> ) {
                            objectTreePt += <,<>,<>,MakeString(Value(valDeriv))>;
                        }
                        objectTreePt =  objectTreePt ^ ;
                        objectTreePt =  objectTreePt ^ <OBJECT_NODE>;
                        listDeriv    =  listDeriv ^ ;
                    }
                }
            }
        }
    }
    return objectTree ;
}

//
//  disassembling
//
extern char     errStr [];
static PTREE    listS ;

void DecompAsn::Desass ( PTREE tree, char *fileName )
{
    PTREE   ident, type, val, list, elem ;
    PTREE   val1, val2 ;
    PTREE   initVal ;
    char    *string ;
    char    *dString = (char *)0 ;     // string to be dissassembled
    char    bufInput [MAXLENGTH + 1];  // input buffer
    int     lInput ;                   // length of bufInput;
    long    totLength = 0 ;            // total length
    PTREE   tlv ;                      // tlv tree
    
    // store grammar
    StoreGrammar(tree);
    
    // create the object identifiers tree
    objectIdentifierTree =  CreateObjectIdentifierTree();
    
    // read the file in a string
    {
        int saveInput = input ;
        if ( (input = _open(fileName, O_RDONLY | O_BINARY)) != -1 ) {
            *(bufInput + MAXLENGTH) =  '\0';
            dString                 =  (char *)malloc(MAXLENGTH);
            totLength               =  0 ;
            string                  =  dString ;
            while ( (lInput = read(input, string, MAXLENGTH)) > 0 ) {
                dString   =  (char *)realloc(dString, MAXLENGTH + totLength + lInput);
                totLength += lInput ;
                string    =  dString + totLength ;
            }
        } else {
            sprintf(errStr, "Cannot open %s\n", fileName);
            _write(2, errStr, strlen(errStr));
            return ;
        }
        input =  saveInput ;
    }
    
    // disassemble 
    {
        char    *string = (char *)(const char *)dString ;
        int     initLength ;
        
        // create the simple list
        listS =  () * <BOOLEAN> * <INTEGER,()> * <BITSTRING,()> * <OCTET_STRING> * <NULL_TYPE> * <REAL_TYPE> * <CHARACTER,"NumericString">
            * <CHARACTER,"PrintableString"> * <CHARACTER,"T61String"> * <CHARACTER,"TeletexString"> * <CHARACTER,"VideotexString"> * <CHARACTER,"IA5String">
            * <CHARACTER,"GraphicString"> * <CHARACTER,"ISO646String"> * <CHARACTER,"VisibleString"> * <CHARACTER,"GeneralString"> * <UTC_TIME> * <GENERALIZED_TIME>
            * <OBJECT_IDENTIFIER>;
        listS =  ConcatList(listS, copytree(tabListType->GetTabList(0)->List()));
        while ( totLength > 0 ) {
            initLength =  totLength ;
            PTREE   tlv = GetTLV(string, &totLength);
            foreach (<CODING>,tlv,{
                PTREE   elem = for_elem ;
                elem += <,<>,<>,<>,()>;
            })
            Interpret(tlv);
            string += initLength - totLength ;
        }
    }
}

//
//  displaying a value
//
extern char errStr [];
extern int  printVal ;

PTREE DecompAsn::InterpretGetValue ( PTREE tlv, PTREE tag, int constructed, PTREE listTyp, bool decodeOString )
{
    
    int     bestMatch = 0 ;       // best number of match so far
    int     bestError = 32000 ;
    PTREE   bestType = (PTREE)0 ; // best type so far
    PTREE   elemType ;            // an element of type list
    PTREE   asn1Value ;           // asn1Value
    PTREE   list ;                // types
    PTREE   container ;           // containter for tlv in order to be able 
                                  // to change to BLIND_CODING
    PTREE   container1 ;          // containter for tlv in order to be able
    
    nbMatch =  1 ;
    
    // to change to BLIND_CODING
    PTREE   tree ;
    
    // get type list
    if ( listTyp != () ) 
        list =  listTyp ;
    else 
        listTyp =  list = listS ;
    
    // make a container
    container =  <NAMED_VALUE,(),copytree(tlv)>;
    
    // try to match every type we find
    while ( list ) {
        if ( list == <LIST> ) {
            elemType =  nextl(list);
        } else {
            elemType =  list ;
            list     =  ();
        }
        
        // if previous loop might have modified tlv copy it
        if ( nbMatch ) 
            tlv =  copytree(container [2]);
        
        // avoid any type
        PTREE   basicType = GetType(elemType, ());
        if ( basicType == <ANY_TYPE> ) 
            continue ;
        nbError   =  0 ;
        nbMatch   =  0 ;
        asn1Value =  DecodeValue(elemType, tag, constructed, tlv, decodeOString);
        if ( !nbError && nbMatch ) {
            tree =  <VAL_ASSIGN_PROG,asn1Value,tlv,copytree(elemType)>;
            return tree ;
        } else if ( nbMatch > bestMatch ) {
            bestMatch  =  nbMatch ;
            bestType   =  elemType ;
            bestError  =  nbError ;
            
            // make a container with a copy of tlv since tlv migth be modified
            // with BLIND_CODINGs
            container1 =  <NAMED_VALUE,(),tlv>;
        }
    }
    if ( bestMatch > 0 ) {
        
        // print value
        if ( ListLength(listTyp) > 1 ) {
            asn1Value  =  DecodeValue(bestType, tag, constructed, tlv = container [2], decodeOString);
            container1 =  <NAMED_VALUE,(),tlv>;
        }
        tree    =  <VAL_ASSIGN_PROG,asn1Value,container1 [2],copytree(bestType)>;
        nbError =  bestError ;
        return tree ;
    } else {
        return (PTREE)0 ;
    }
}

void DecompAsn::Interpret ( PTREE tlv )
{
    PTREE   tree ;
    
    if ( (tree = InterpretGetValue(tlv)) ) {
        
        // print the type
#       if 0
            printVal =  0 ;
            if ( elemType == <TYP_ASSIGN> ) 
                PrintString(Value(elemType)) 
            else 
                decomp(elemType);
#       endif
        printVal =  0 ;
        decomp(tree);
        <NL>
    } else {
        "No matching type Found" <NL>
        PrintTLV(tlv);
    }
    <NL,2>
}


