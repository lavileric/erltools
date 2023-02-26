language asn;

#include "asndef.h"
#include "decasn.h"
#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>

#if 0
#   include <io.h>
#   include <sys\types.h>
#   include <sys\stat.h>
#endif

#include "asn.h"
#include "symb.h"

extern int      printVal ;
PTREE           expAssignment ;          // the assignment currently treated
extern PTREE    listInclude ;
PTREE           listTspUsed = (PTREE)0 ; // list of TSP used in a PDU

#ifdef FOR_METACHOP
    PTREE   listTyp ;
    PTREE   listValue ;
    PTREE   tagDefault ;
#endif

void *MyMalloc ( int nb )
{
    void    *res = malloc(nb);
    
    if ( !res ) {
        MetaExit(2, "Out Of Memory Space\n");
    }
    return res ;
}

#undef malloc

#define malloc MyMalloc

//
// Compute TypeTag : compute the tag of a type
//
PTREE DecompAsn::ComputeTypeTag ( const PTREE &type )
{
    PTREE           list, val ;
    PTREE           tag ;
    static bool     tagInitialized = false ;
    static PTREE    tagBoolean ;
    static PTREE    tagInteger ;
    static PTREE    tagBitString ;
    static PTREE    tagOctetString ;
    static PTREE    tagNullType ;
    static PTREE    tagRealType ;
    static PTREE    tagNumericString ;
    static PTREE    tagPrintableString ;
    static PTREE    tagTelexString ;
    static PTREE    tagVideoTexString ;
    static PTREE    tagIA5String ;
    static PTREE    tagGraphicString ;
    static PTREE    tagVisibleString ;
    static PTREE    tagGeneralString ;
    static PTREE    tagUtcTime ;
    static PTREE    tagGeneralizedTime ;
    static PTREE    tagSequence ;
    static PTREE    tagSet ;
    static PTREE    tagEnumerated ;
    static PTREE    tagObjectIdentifier ;
    
    if ( !tagInitialized ) {
        tagInitialized      =  true ;
        tagBoolean          =  <TAG,<TAGCLASS,"UNIVERSAL">,MakeString("1")>;
        tagInteger          =  <TAG,<TAGCLASS,"UNIVERSAL">,MakeString("2")>;
        tagBitString        =  <TAG,<TAGCLASS,"UNIVERSAL">,MakeString("3")>;
        tagOctetString      =  <TAG,<TAGCLASS,"UNIVERSAL">,MakeString("4")>;
        tagNullType         =  <TAG,<TAGCLASS,"UNIVERSAL">,MakeString("5")>;
        tagRealType         =  <TAG,<TAGCLASS,"UNIVERSAL">,MakeString("9")>;
        tagNumericString    =  <TAG,<TAGCLASS,"UNIVERSAL">,MakeString("18")>;
        tagPrintableString  =  <TAG,<TAGCLASS,"UNIVERSAL">,MakeString("19")>;
        tagTelexString      =  <TAG,<TAGCLASS,"UNIVERSAL">,MakeString("20")>;
        tagVideoTexString   =  <TAG,<TAGCLASS,"UNIVERSAL">,MakeString("21")>;
        tagIA5String        =  <TAG,<TAGCLASS,"UNIVERSAL">,MakeString("22")>;
        tagGraphicString    =  <TAG,<TAGCLASS,"UNIVERSAL">,MakeString("25")>;
        tagVisibleString    =  <TAG,<TAGCLASS,"UNIVERSAL">,MakeString("26")>;
        tagGeneralString    =  <TAG,<TAGCLASS,"UNIVERSAL">,MakeString("27")>;
        tagUtcTime          =  <TAG,<TAGCLASS,"UNIVERSAL">,MakeString("23")>;
        tagGeneralizedTime  =  <TAG,<TAGCLASS,"UNIVERSAL">,MakeString("24")>;
        tagSequence         =  <TAG,<TAGCLASS,"UNIVERSAL">,MakeString("16")>;
        tagSet              =  <TAG,<TAGCLASS,"UNIVERSAL">,MakeString("17")>;
        tagEnumerated       =  <TAG,<TAGCLASS,"UNIVERSAL">,MakeString("10")>;
        tagObjectIdentifier =  <TAG,<TAGCLASS,"UNIVERSAL">,MakeString("6")>;
    }
    switch ( type ) {
        case <TYP,list,val> : 
            if ( list != () ) {
                tag =  nextl(list);
                return copytree(tag);
            } else 
                return ComputeTypeTag(val);
            break ;
        case <TYP_IDENT,val> : return ComputeTypeTag(FindTyp(val));
        case <BOOLEAN> : return tagBoolean ;
        case <INTEGER> : return tagInteger ;
        case <BITSTRING> : return tagBitString ;
        case <OCTET_STRING> : return tagOctetString ;
        case <NULL_TYPE> : return tagNullType ;
        case <REAL_TYPE> : return tagRealType ;
        case <CHARACTER> : 
            switch ( type ) {
                case <CHARACTER,"IA5String"> : return tagIA5String ;
                case <CHARACTER,"NumericString"> : return tagNumericString ;
                case <CHARACTER,"PrintableString"> : 
                    {
                        return tagPrintableString ;
                    }
                case <CHARACTER,"T61String"> : 
                case <CHARACTER,"TeletexString"> : return tagTelexString ;
                case <CHARACTER,"VideotexString"> : 
                    {
                        return tagVideoTexString ;
                    }
                case <CHARACTER,"GraphicString"> : return tagGraphicString ;
                case <CHARACTER,"ISO646String"> : 
                case <CHARACTER,"VisibleString"> : return tagVisibleString ;
                case <CHARACTER,"GeneralString"> : return tagGeneralString ;
            }
            break ;
        case <UTC_TIME> : return tagUtcTime ;
        case <GENERALIZED_TIME> : return tagGeneralizedTime ;
        case <SEQUENCE> : 
        case <SEQUENCE_OF> : return tagSequence ;
        case <SET> : 
        case <SET_OF> : return tagSet ;
        case <ENUMERATED> : return tagEnumerated ;
        case <OBJECT_IDENTIFIER> : return tagObjectIdentifier ;
        case <CHOICE> : 
        case <ANY_TYPE> : return (PTREE)0 ;
    }
    return (PTREE)0 ;
}

//
// concat two lists
//
PTREE DecompAsn::ConcatList ( PTREE list1, PTREE list2 )
{
    PTREE   elem ;
    
    if ( list1 != () && list1 != <LIST> ) 
        return (PTREE)0 ;
    if ( list2 == <LIST> ) 
        while ( (elem = nextl(list2)) ) {
            list1 =  list1 * elem ;
        }
    else {
        list1 =  list1 * list2 ;
    }
    return list1 ;
}

//
// convert the string of a long in the long
//
long DecompAsn::GetLong ( char *numb )
{
    long    result = 0 ;
    
    if ( !numb ) 
        return 0 ;
    while ( *numb ) {
        result =  result * 10 + *numb - '0';
        numb++ ;
    }
    
    // if result is negative there is an overflow
    if ( result < 0 ) 
        result =  0 ;
    return result ;
}

//
// convert the length string in it's integer value
//
long DecompAsn::DecodeHexa ( char *numb )
{
    long    result = 0 ;
    
    if ( !numb ) 
        return 0 ;
    while ( *numb ) {
        result <<= 4 ;
        if ( *numb >= 'A' && *numb <= 'Z' ) 
            result += *numb - 'A' + 10 ;
        else 
            result += *numb - '0';
        numb++ ;
    }
    
    // if result is negative there is an overflow
    if ( result < 0 ) 
        result =  0 ;
    return result ;
}

//
// Encode a number in hexa
//
char *DecompAsn::EncodeHexa ( int numb, char *string, bool terminator )
{
    
    int     midd ;                 // value of a half hexa byte
    char    *stringInit = string ; // pointer on the initial string
    
    // encode upper half
    midd =  numb >> 4 & 0xF ;
    if ( midd <= 9 ) 
        *string++ =  '0' + midd ;
    else 
        *string++ =  'A' + midd - 10 ;
    
    // encode lower half
    midd =  numb & 0xf ;
    if ( midd <= 9 ) 
        *string++ =  '0' + midd ;
    else 
        *string++ =  'A' + midd - 10 ;
    
    // put the terminator
    if ( terminator ) 
        *string =  '\0';
    
    // return string
    return stringInit ;
}

//
//  Number of bytes in an encoded string
//
int DecompAsn::EncodedLength ( char *string )
{
    int compteur = 0 ;
    
    if ( !string ) 
        return 0 ;
    else {
        for (; *string ; string++ ) {
            switch ( *string ) {
                case ' ' : break ;
                default : compteur++ ;
            }
        }
    }
    return compteur / 2 ;
}

//
// Put a string at the end of an other doing a malloc
//
char *DecompAsn::Put ( char *string, char *added )
{
    char    *newString = (char *)0 ;
    int     length ;
    
    // if all is null return null
    if ( !string && !added ) 
        return (char *)0 ;
    
    // if string is not initialized do it else
    // extend the string
    // then put added at the end of string
    if ( !string ) {
        string =  (char *)malloc(strlen(added) + 1);
        strcpy(string, added);
    } else if ( added ) {
        length =  strlen(string);
        string =  (char *)realloc(string, length + strlen(added) + 1);
        strcat(string, added);
    }
    return string ;
}

//
// Put a string at the end of an other doing a malloc
// Free the second string
//
char *DecompAsn::PutAndFree ( char *string, char *added )
{
    
    // put string at the end
    string =  Put(string, added);
    
    // free the second string
    if ( added ) 
        free(added);
    
    // return result
    return string ;
}

//
// Put a string at the beginning of an other doing a malloc
//
char *DecompAsn::PutBegin ( char *string, char *added )
{
    
    // if all is null return null
    if ( !string && !added ) 
        return (char *)0 ;
    
    // if string is not initialized do it else
    // extend the string
    // then put added at the end of string
    if ( !string ) {
        string =  (char *)malloc(strlen(added) + 1);
        strcpy(string, added);
    } else if ( added ) {
        char    *newString ;
        
        // create new string
        newString =  (char *)malloc(strlen(string) + strlen(added) + 1);
        strcpy(newString, added);
        strcat(newString, string);
        
        // free old
        free(string);
        
        // set result
        string =  newString ;
    }
    return string ;
}

//
// Put a string at the beginning of an other doing a malloc
// Free the second string
//
char *DecompAsn::PutBeginAndFree ( char *string, char *added )
{
    
    // put string at the end
    string =  PutBegin(string, added);
    
    // free the second string
    if ( added ) 
        free(added);
    
    // return result
    return string ;
}

//
// Encoding of the identifier
//
// constructed indicates if it is constructed
char *DecompAsn::EncodeTag ( const PTREE &tag, int constructed )
{
    return AllocString(EncodeTagFast(tag, constructed));
}

//
// Encoding of the identifier
//
// constructed indicates if it is constructed
char *DecompAsn::EncodeTagFast ( const PTREE &tag, int constructed )
{
    
    char    *res ;        // the resulting string
    int     resInt ;      // the resulting Int
    PTREE   classValue ;  // class of tag
    int     classNumber ; // number for class
    PTREE   tagNumber ;   // number of tag
    int     tagValue ;
    char    string [20];
    
    // transform constructed in 0 or 1
    if ( constructed ) 
        constructed =  1 ;
    tag == <TAG,classValue,tagNumber>;
    if ( !classValue ) 
        classNumber =  2 ;
    else 
        switch ( classValue ) {
            case <TAGCLASS,"UNIVERSAL"> : 
                classNumber = 0 ;
                break ;
            case <TAGCLASS,"PRIVATE"> : 
                classNumber = 3 ;
                break ;
            case <TAGCLASS,"APPLICATION"> : 
                classNumber = 1 ;
                break ;
            default : classNumber = 2 ;
        }
    tagValue =  atoi(value(tagNumber));
    if ( tagValue <= 30 ) {
        resInt =  (classNumber << 6) + (constructed << 5) + tagValue ;
        res    =  InitAllocate();
        MoreAllocate(res);
        EncodeHexa(resInt, res, false);
        return res ;
    } else {
        
        // put class in first byte
        resInt =  (classNumber << 6) + (constructed << 5);
        resInt |= 0x1f ;
        
        // then the tag itself in base 128
        res    =  Encode128(tagValue);
        char    *ptBuff = InitAllocate();
        MoreAllocate(ptBuff, strlen(res));
        memcpy(ptBuff, res, strlen(res));
        FreeString(res, strlen(res));
        
        // put the tag
        MoreAllocate(ptBuff);
        EncodeHexa(resInt, ptBuff, false);
        return ptBuff ;
    }
}

//
// Encoding in base 128
//
char *DecompAsn::Encode128 ( long val )
{
    long    divid, rem ;
    EString res("");
    char    string [20];
    int     first = 1 ;
    
    if ( !val ) {
        return AllocString("00");
    }
    divid =  rem = val ;
    while ( divid ) {
        
        // compute reminder and dividend
        rem   =  divid ;
        divid =  rem >> 7 ;
        rem   =  rem & 0x7F ;
        
        // if other bytes put a 1 at beginning
        if ( !first ) 
            rem |= 0x80 ;
        
        // add string to the those allready computed
        EncodeHexa((int)rem, string);
        res.prepend(string);
        
        // after that don't but 1
        first =  0 ;
    }
    
    // return result
    int     length ;
    char    *retValue = MallocString(length = strlen(res) + 1);
    
    memcpy(retValue, (const char *)res, length);
    return retValue ;
}

//
// Encoding of an integer
//
char *DecompAsn::EncodeInteger ( long intValue )
{
    return AllocString(EncodeIntegerFast(intValue));
}

//
// Encoding of an integer
//
char *DecompAsn::EncodeIntegerFast ( long intValue )
{
    long        rem, divid ;
    signed char lastOutput = '\001';  // last byte written in the string
    char        *ptBuff ;
    
    if ( !intValue ) 
        return (char *)"00";
    else {
        ptBuff =  InitAllocate();
        
        // put length in base 256
        divid  =  rem = intValue ;
        while ( divid ) {
            
            // if there are only FF remaining and we allready
            // know the value is negative stop now
            if ( lastOutput < 0 && divid == -1 ) 
                break ;
            
            // compute reminder and dividend
            rem   =  divid ;
            divid =  rem >> 8 ;
            rem   =  rem & 0xFF ;
            
            // allocate space
            MoreAllocate(ptBuff);
            
            // add string to those allready computed
            EncodeHexa((int)rem, ptBuff, false);
            lastOutput =  (signed char)rem ;
        }
    }
    
    // if first bit is 1 when value is positive do something
    if ( rem & 0x80 && intValue > 0 ) {
        
        // if not enough space remaining allocate some
        MoreAllocate(ptBuff);
        
        // prepend 00
        memcpy(ptBuff, "00", 2);
    }
    
    // return computedValue
    return ptBuff ;
}

//
// Encoding of an integer represented by a tree
//
char *DecompAsn::EncodeIntegerTree ( const PTREE &tree )
{
    return AllocString(EncodeIntegerTreeFast(tree));
}

//
// Encoding of an integer represented by a tree
//
char *DecompAsn::EncodeIntegerTreeFast ( const PTREE &tree )
{
    PTREE   theValue = tree ;
    long    intVal ;
    
    if ( !tree ) {
        return (char *)"";
    }
    
    // put value
    switch ( theValue ) {
        case <UN_MINUS,()> : return (char *)0 ;
        case <UN_MINUS> : 
        case <NUMB> : 
            intVal = GetLong(value(theValue));
            
            // if it is a negative number inverse the value
            if ( theValue == <UN_MINUS> ) 
                intVal =  -1 * intVal ;
            return EncodeIntegerFast(intVal);
        default : 
            {
                PTREE   printList ;
                printList *= "Bad value for an integer \n";
                printList *= copytree(theValue);
                DisplayError(printList);
            }
            return EncodeIntegerFast(0);
    }
}

//
// Decoding the length field
//
int DecompAsn::DecodeLength ( char *string )
{
    if ( strlen(string) == 2 ) 
        return DecodeHexa(string);
    else 
        return DecodeHexa(string + 2);
}

//
// Encoding of the length
//
char *DecompAsn::EncodeLength ( int length )
{
    return AllocString(EncodeLengthFast(length));
}

//
// Encoding of the length
//
char *DecompAsn::EncodeLengthFast ( int length )
{
    char    *ptBuff ;
    
    // si la longueur est inferieure a 127 code en un seul
    // octet sinon plusieurs
    if ( length <= 127 ) {
        ptBuff =  InitAllocate();
        MoreAllocate(ptBuff);
        EncodeHexa(length, ptBuff, false);
        return ptBuff ;
    } else {
        int compteur = 0 ; // indique le nombre d'octets utilises
        
        // pour le codage
        // compute length
        ptBuff   =  EncodeIntegerFast(length);
        compteur =  EncodedLength(ptBuff);
        
        // then put the header
        MoreAllocate(ptBuff);
        compteur |= 0x80 ;
        EncodeHexa(compteur, ptBuff, false);
        return ptBuff ;
    }
}

//
// Encoding of a bit string
//
// putUnused indicates the number of unused pos in last byte
char *DecompAsn::EncodeBitString ( char *string, int putUnused )
{
    return AllocString(EncodeBitStringFast(string, putUnused));
}

//
// Encoding of a bit string
//
// putUnused indicates the number of unused pos in last byte
char *DecompAsn::EncodeBitStringFast ( char *string, int putUnused )
{
    int     compteur = 0 ;
    long    val = 0 ;
    
    pvEncodeString =  "";
    while ( string && *string ) {
        val =  val * 2 + *string - '0';
        if ( ++compteur == 8 ) {
            pvEncodeString += EncodeIntegerFast(val);
            compteur       =  0 ;
            val            =  0 ;
        }
        string++ ;
    }
    
    // put the remaining
    if ( compteur ) {
        char    *intVal ;
        val            =  val << (compteur = 8 - compteur);
        pvEncodeString += EncodeIntegerFast(val);
    }
    
    // put the length of unused
    if ( putUnused ) {
        pvEncodeString.prepend(EncodeIntegerFast(compteur));
    }
    return (char *)(pvEncodeString.c_str());
}

//
// Encoding of a byte string
//
//
// putUnused indicates the number of unused pos in last byte
char *DecompAsn::EncodeByteString ( char *string, int putUnused )
{
    return AllocString(EncodeByteString(string, putUnused));
}

//
// Encoding of a byte string
//
//
// putUnused indicates the number of unused pos in last byte
char *DecompAsn::EncodeByteStringFast ( char *string, int putUnused )
{
    char    temp [3];
    int     compteur = 0 ;
    long    val = 0 ;
    
    pvEncodeString =  "";
    
    // resize string if necessary
    {
        unsigned int    length = strlen(string);
        if ( pvEncodeString.Size() < length ) 
            pvEncodeString.Resize(length);
    }
    
    // put end of string
    *(temp + 2) =  '\0';
    
    // compute
    while ( string && *string ) {
        if ( *string >= 'a' && *string <= 'f' ) 
            *(temp + compteur) =  *string - 'a' + 'A';
        else 
            *(temp + compteur) =  *string ;
        if ( ++compteur == 2 ) {
            pvEncodeString += temp ;
            compteur       =  val = 0 ;
        }
        string++ ;
    }
    
    // put the remaining
    if ( compteur ) {
        *(temp + 1)    =  '0';
        pvEncodeString += temp ;
        compteur       =  4 ;
    }
    
    // put the length of unused
    if ( putUnused ) {
        pvEncodeString.prepend(EncodeIntegerFast(compteur));
    }
    return (char *)(pvEncodeString.c_str());
}

//
// Encoding of string
//
char *DecompAsn::EncodeString ( char *string )
{
    return AllocString(EncodeStringFast(string));
}

//
// Encoding of string
//
char *DecompAsn::EncodeStringFast ( char *string )
{
    long    val = 0 ;
    
    pvEncodeString =  "";
    
    // resize string if necessary
    {
        unsigned int    length = 2 * strlen(string);
        if ( pvEncodeString.Size() < length ) 
            pvEncodeString.Resize(length);
    }
    while ( string && *string ) {
#       if 1
            pvEncodeString += EncodeIntegerFast(*string);
#       else 
            switch ( *string ) {
                case '\\' : 
                    string++ ;
                    switch ( *string ) {
                        case '0' : 
                        case '1' : 
                        case '2' : 
                        case '3' : 
                        case '4' : 
                        case '5' : 
                        case '6' : 
                        case '7' : 
                            {
                                char    theString [4], *ptString ;
                                int     theInt = 0 ;
                                strncpy(theString, string, 3);
                                *(theString + 3) =  '\0';
                                string           += 2 ;
                                ptString         =  theString ;
                                while ( *ptString ) 
                                    theInt =  theInt * 8 + *ptString++ - '0';
                                pvEncodeString += EncodeIntegerFast(theInt);
                            }
                            break ;
                        case 'r' : 
                        case 'R' : 
                            pvEncodeString += EncodeIntegerFast('\r');
                            break ;
                        case 'n' : 
                        case 'N' : 
                            pvEncodeString += EncodeIntegerFast('\n');
                            break ;
                        case 't' : 
                        case 'T' : 
                            pvEncodeString += EncodeIntegerFast('\t');
                            break ;
                        case 'f' : 
                        case 'F' : 
                            pvEncodeString += EncodeIntegerFast('\014');
                            break ;
                        default : 
                            pvEncodeString += EncodeIntegerFast(*string);
                            break ;
                    }
                    break ;
                default : 
                    pvEncodeString += EncodeIntegerFast(*string);
                    break ;
            }
#       endif
        string++ ;
    }
    return (char *)(pvEncodeString.c_str());
}

//
// Searching of a value in a set
//
PTREE DecompAsn::SearchSetValue ( PTREE list, const PTREE &name )
{
    PTREE   elem ;
    PTREE   ident, theValue ;
    EString theName("");
    
    if ( name != () ) 
        theName =  Value(name);
    
    // search the list of value for the value with the
    // correct name
    while ( (elem = nextl(list)) ) {
        if ( elem == <NAMED_VALUE,ident,theValue> && theName == Value(ident) || elem != <NAMED_VALUE> && theName == "" ) {
            
            // if it is a named value theValue has been set in condition
            //    but we must free theName
            // if it is an unnamed value get theValue
            if ( theName == "" ) 
                theValue =  elem ;
            return theValue ;
        }
    }
    
    // if we did not find the value return 0
    return (PTREE)0 ;
}

//
// TypeNormalize : Normalize components of in a type
//
PTREE DecompAsn::TypeNormalize ( const PTREE &paramType )
{
    
    PTREE   listType ;            // elements of type
    PTREE   elemType ;            // an element of type
    PTREE   componentBase ;       // base type for component
    PTREE   listBase ;            // list of components of base
    PTREE   tailList ;            // elements after componentBase in listType
    PTREE   orgType = type ;      // original type
    int     foundComponents = 0 ; // we found a component
    PTREE   type ;                // type
    bool    copyDone (false) ;    // tell if we copied the type
    int     indList(0);           // current index in list
    
#   if 0
        type =  copytree(paramType);
#   endif
    type =  paramType ;
    type == <,listType>;
    while ( (elemType = nextl(listType)) ) {
        indList++ ;
        if ( elemType == <COMPONENTS_OF,componentBase> ) {
            if ( componentBase == <TYP,<>,<TYP_IDENT>> ) {
                componentBase =  componentBase [2];
                componentBase =  FindTyp(componentBase);
            }
            componentBase == <TYP,<>,componentBase>;
            if ( componentBase == <SET,listBase> || componentBase == <SEQUENCE,listBase> ) {
                
                // if we havent copied type yet do it
                // dont do it decomp make reference ( and on sthing copied ?)
                if ( !copyDone && 0 ) {
                    copyDone =  true ;
                    type     =  copytree(paramType);
                    type == <,listType>;
                    while ( indList-- ) 
                        elemType =  nextl(listType);
                }
                
                // do change
                tailList =  listType = elemType ^ ;
                nextl(tailList);
                listBase        =  AddListList(copytree(listBase), tailList);
                listType        =  listType += listBase ;
                foundComponents =  1 ;
            } else {
                PTREE   printList ;
                printList *= "Bad Components in \n";
                printList *= copytree(orgType);
                DisplayError(printList);
            }
            break ;
        }
    }
    
    // return new type
    if ( foundComponents ) 
        return TypeNormalize(type);
    else 
        return type ;
}

//
// Encoding of a set
//
// posDefault indicates an indice that enables to compute at which position
// we use defaults
PTREE DecompAsn::ComputeSetList ( const PTREE &type, const PTREE &theValue )
{
    PTREE   listType ;
    PTREE   listValue ;
    PTREE   typeElem ;
    PTREE   valueElem ;
    PTREE   ident ;
    PTREE   opt ;
    PTREE   val ;
    PTREE   listResult ; // construction of a list of the results
    Coding  *res ;
    PTREE   theType ;    // type
    
    // compute    
    type == <,listType>;
    theValue == <SEQUENCE_VALUE,listValue>;
    while ( (typeElem = nextl(listType)) ) {
        switch ( typeElem ) {
            case <ELEMENT_TYPE,<NAMED_TYPE,ident,theType>,opt> : 
                val = SearchSetValue(listValue, ident);
                if ( val ) {
                    res        =  EncodeValue(theType, val);
                    listResult =  <LIST,<NAMED_VALUE,NoCommentCopyTree(ident),res->GetPointer()>,listResult>;
                    Coding::Free(res);
                }
                break ;
        }
    }
    
    // return permutated list
    return ListPermutate(listResult);
}

Coding *DecompAsn::ComputeSet ( const PTREE &type, const PTREE &theValue )
{
    
    // compute the list of value
    
    PTREE   list ;        // the list of the resulting coding elements
                          // the element of list is a cons : name of element,
                          // value of element
    PTREE   list1 ;       // a sublist of list
    PTREE   elem1 ;       // an element of list1
    PTREE   listResult ;  // the list of the resulting coding elements
    PTREE   listValue ;   // list of values given by the user
    PTREE   elem ;        // an element of listValue
    PTREE   ident ;
    PTREE   father ;
    char    *name ;
    Coding  *res ;
    EString setEncoding ; // result of encoding if fast
    
    // compute special reception values
    switch ( theValue ) {
        case <UN_MINUS,()> : 
            
            //            res = AllocString("CA 00");
            res = Coding::Allocate();
            return res ;
    }
    list =  ComputeSetList(type, theValue);
    
    // if it is a sequence send in the order of the
    // values given by the type
    {
        
        // for each element in the value affectation send the
        // coded element
        theValue == <,listValue>;
        while ( (elem = nextl(listValue)) ) {
            if ( FastEncode() ) {
                if ( elem == <NAMED_VALUE> ) 
                    pvEncodeString =  Value(elem);
                
                // search the elem in the computed list
                list1 =  list ;
                while ( (elem1 = nextl(list1)) ) {
                    if ( elem != <NAMED_VALUE> && elem1 == <,()> || pvEncodeString == Value(elem1) ) {
                        
                        // add the coded value
                        Coding  coding(sontree(elem1, 2));
                        setEncoding += *(EString *)coding ;
                        break ;
                    }
                }
            } else {
                if ( elem == <NAMED_VALUE> ) 
                    pvEncodeString =  Value(elem);
                
                // search the elem in the computed list
                list1 =  list ;
                while ( (elem1 = nextl(list1)) ) {
                    if ( elem != <NAMED_VALUE> && elem1 == <,()> || pvEncodeString == Value(elem1) ) {
                        
                        // add the coded value
                        listResult *= sontree(elem1, 2);
                        
                        // suppress the element from the list
                        father     =  elem1 ^ ;
                        if ( father != list ) {
                            father =  father ^ ;
                            father += <,<>,list1>;
                        } else {
                            nextl(list);
                        }
                        break ;
                    }
                }
            }
        }
    }
    
    // construct result
    res =  Coding::Allocate();
    
    // put content
    if ( FastEncode() ) {
        res->PutContent(setEncoding.c_str());
    } else {
        res->TakeContent(listResult);
    }
    return res ;
}

//
// Encoding of a set of
//
Coding *DecompAsn::ComputeSetOf ( const PTREE &type, const PTREE &theValue )
{
    
    PTREE   listValue ;  // the input list of values
    PTREE   listResult ; // the resulting list of coding elements
    PTREE   valueElem ;
    PTREE   val ;
    Coding  *res = (Coding *)0 ;
    
    res =  Coding::Allocate();
    if ( type == <SET_OF> || type == <SEQUENCE_OF> ) {
        if ( theValue == <SEQUENCE_VALUE,listValue> ) {
            if ( FastEncode() ) {
                int size = 0 ;
                while ( (valueElem = nextl(listValue)) ) {
                    Coding  *code = EncodeValue(type [2], valueElem);
                    PTREE   result = MakeString(*(EString *)(*code));
                    listResult =  result * listResult ;
                    size       += strlen(Value(result));
                    Coding::Free(code);
                }
                char    *resString = (char *)malloc(size + 1);
                *(resString + size) =  '\0';
                char    *ptDest = resString + size ;
                while ( listResult ) {
                    int sizeElem = strlen(Value(listResult));
                    ptDest -= sizeElem ;
                    memcpy(ptDest, Value(listResult), sizeElem);
                    nextl(listResult);
                }
                res->TakeContent(resString);
            } else {
                while ( (valueElem = nextl(listValue)) ) {
                    Coding  *code = EncodeValue(type [2], valueElem);
                    listResult *= code->GetPointer();
                    Coding::Free(code);
                }
                res->TakeContent(listResult);
            }
        } else {
            PTREE   printList ;
            printList *= "Not a correct value";
            printList *= copytree(theValue);
            printList *= "For type";
            printList *= copytree(type);
            DisplayError(printList);
        }
    }
    
    // return result
    return res ;
}

//
//  Compute the size of a bit string
//
int DecompAsn::GetBitStringSize ( const PTREE &type )
{
    PTREE   elem ;
    PTREE   list ;
    int     size, maxSize = -1 ;
    
    // iterate on the list to find the value of the named bits
    if ( type == <BITSTRING,list> ) {
        while ( (elem = nextl(list)) ) {
            elem == <NAMED_BIT,<>,elem>;
            size =  (int)GetLong(value(elem));
            if ( size > maxSize ) 
                maxSize =  size ;
        }
    }
    
    // return value
    return maxSize + 1 ;
}

//
// Get the value associated to an ident in an enumerated
//          an integer or a bit string
//
PTREE DecompAsn::GetNamedValue ( const PTREE &type, const PTREE &ident )
{
    PTREE   elem ;
    PTREE   list ;
    
    // look in the choice list to find the ident
    if ( type == <ENUMERATED,list> || type == <INTEGER,list> || type == <BITSTRING,list> ) {
        if ( (elem = ListFind(list, ident)) ) {
            elem == <, /* NAMED_NUMBER or NAMED_BIT */ <>,elem>;
            return elem ;
        }
    }
    
    // if we didn't find anything return NIL pointer
    return (PTREE)0 ;
}

//
// Get the type associated to an ident in a choice
//
PTREE DecompAsn::GetChoiceType ( const PTREE &type, const PTREE &ident )
{
    char    *name ;
    PTREE   elem ;
    PTREE   list ;
    int     lengthName = strlen(Value(ident));
    
    if ( ident != () ) {
        name =  MallocString(lengthName + 1);
        memcpy(name, Value(ident), lengthName + 1);
    } else 
        name =  (char *)0 ;
    
    // for the moment being i cannot get any unnamed choice field
    if ( !name ) 
        return (PTREE)0 ;
    
    // look in the choice list to find the ident
    if ( type == <CHOICE,list> ) {
        while ( (elem = nextl(list)) ) {
            if ( !strcmp(value(elem), name) ) {
                elem == <NAMED_TYPE>;
                if ( name ) 
                    FreeString(name, lengthName);
                return elem [2];
            }
        }
    }
    
    // if we didn't find anything return NIL pointer
    if ( name ) 
        FreeString(name, lengthName);
    return (PTREE)0 ;
}

//
//   Getting the value of an object identifer
//
long DecompAsn::GetObjectValue ( const PTREE &tree )
{
    switch ( tree ) {
        case <NUMB> : return GetLong(value(tree));
        case <VAL_DEF> : return GetLong(Value(tree [2]));
        default : return 0 ;
    }
}

//
// GetSringFromOid
//
char *DecompAsn::GetStringFromOid ( const PTREE &paramTheValue )
{
    PTREE   list ;
    PTREE   elem ;
    long    tot ;
    char    *content = (char *)0 ; // ret string
    int     first = 1 ;            // first element of oid
    PTREE   theValue = paramTheValue ;
    
    // extend undefined values
    theValue =  ExtendObjectValue(theValue);
    
    // compute object
    if ( theValue == <OBJECT_IDENTIFIER_VALUE,list> && list ) {
        while ( (elem = nextl(list)) ) {
            tot =  GetObjectValue(elem);
            if ( first ) {
                elem    =  nextl(list);
                tot     =  tot * 40 + GetObjectValue(elem);
                content =  Encode128(tot);
                first   =  0 ;
            } else 
                content =  PutAndFree(content, Encode128(GetObjectValue(elem)));
        }
    }
    if ( !content ) 
        content =  AllocString("");
    return content ;
}

//
//   Getting the value of an object identifer
//
PTREE DecompAsn::ExtendObjectValue ( PTREE theValue )
{
    PTREE   val1, val2, val ;
    PTREE   list, list1, listResult, elem ;
    PTREE   printList ;
    
    // if it is an ident search the associated value
    if ( theValue == <IDENT> && (theValue = FindValue(theValue)) ) {
        theValue == <,<>,<>,theValue>;
    }
    
    // if it is a sequence value it should be sthing taken for a 
    // named value
    if ( theValue == <SEQUENCE_VALUE,<LIST,<NAMED_VALUE,val1,val2>>> ) {
        theValue =  <OBJECT_IDENTIFIER_VALUE,<LIST,copytree(val1),<LIST,copytree(val2),()>>>;
    } else if ( theValue == <SEQUENCE_VALUE,<LIST,val1,()>> ) {
        theValue =  <OBJECT_IDENTIFIER_VALUE,<LIST,copytree(val1),()>>;
    }
    
    // extend the list
    listResult =  ();
    if ( theValue == <OBJECT_IDENTIFIER_VALUE,list> || theValue == <SEQUENCE_VALUE,list> ) {
        list =  copytree(list);
        while ( (elem = nextl(list)) ) {
        next : 
            switch ( elem ) {
                case <NUMB> : 
                case <VAL_DEF> : 
                    listResult *= copytree(elem);
                    continue ;
                case <IDENT> : 
                    {
                        if ( !(val = FindValue(elem)) ) {
                            PTREE   printList ;
                            printList *= "Bad Object Value \n";
                            printList *= copytree(elem);
                            printList *= "In";
                            printList *= copytree(theValue);
                            DisplayError(printList);
                        } else {
                            val == <,<>,<>,elem>;
                            goto next ;
                        }
                    }
                    break ;
                case <OBJECT_IDENTIFIER_VALUE> : 
                case <SEQUENCE_VALUE> : 
                    {
                        val =  ExtendObjectValue(elem);
                        if ( val == <OBJECT_IDENTIFIER_VALUE,list1> ) 
                            list =  AddListList(list1, list);
                    }
                    break ;
                default : 
                    {
                        PTREE   printList ;
                        printList *= "Bad Object Value \n";
                        printList *= copytree(elem);
                        printList *= "In";
                        printList *= copytree(theValue);
                        DisplayError(printList);
                    }
                    break ;
            }
        }
    } else {
        PTREE   printList ;
        printList *= "Bad Object Value \n";
        printList *= copytree(theValue);
        DisplayError(printList);
    }
    return <OBJECT_IDENTIFIER_VALUE,listResult>;
}

//
// suppression of the VAL_DEF in an object identifier value
//
PTREE DecompAsn::SimplifyObjectValue ( const PTREE &paramObjectValue )
{
    PTREE   list ;
    PTREE   elem ;
    PTREE   val ;
    PTREE   objectValue ;
    
    // make a copy of object value
    objectValue =  copytree(paramObjectValue);
    
    // suppress VAL_DEF
    if ( objectValue == <OBJECT_IDENTIFIER_VALUE,list> ) {
        while ( (elem = nextl(list)) ) {
            if ( elem == <VAL_DEF,<>,val> ) 
                elem += val ;
        }
    }
    
    // return value
    return objectValue ;
}

//
// ExpandType : Get Full Type expansion
//
PTREE DecompAsn::ExpandType ( const PTREE &type )
{
    PTREE   val, list ;
    
    switch ( type ) {
        case <TYP,list,val> : 
            {
                PTREE   expand = ExpandType(val);
                PTREE   list1, val1 ;
                expand == <CONS,list1,val1>;
                if ( list ) {
                    if ( list1 ) {
                        list =  ConcatList(copytree(list), list1);
                    } else 
                        list =  copytree(list);
                } else 
                    list =  list1 ;
                return <CONS,list,val1>;
            }
        case <TYP_IDENT,val> : 
            {
                PTREE   valType = FindTyp(val);
                if ( valType != () ) {
                    return ExpandType(valType);
                } else {
                    PTREE   printList ;
                    printList *= "Bad type name\n";
                    printList *= copytree(type);
                    DisplayError(printList);
                    return <CONS,(),<TYP_IDENT,"Unknown type">>;
                }
            }
        default : 
            {
                return <CONS,(),copytree(type)>;
            }
    }
}

//
// ComputeInnerTag : compute inner tag for an expand type
//
PTREE DecompAsn::ComputeInnerTag ( const PTREE &tree )
{
    PTREE   list, type, elem, style ;
    PTREE   lastTag ;
    int     implicit = 0 ;
    
    tree == <CONS,list,type>;
    if ( !list ) 
        return (PTREE)0 ;
    else {
        while ( (elem = nextl(list)) ) {
            elem == <,<>,<>,style>;
            if ( !implicit ) 
                lastTag =  elem ;
            else 
                implicit =  0 ;
            if ( style == () ) 
                style =  tagDefault ;
            if ( !strcmp(value(style), "IMPLICIT") ) {
                implicit =  1 ;
            }
        }
    }
    if ( implicit ) 
        return lastTag ;
    else 
        return (PTREE)0 ;
}

//
// GetType : get basic type from a type
//
PTREE DecompAsn::GetType ( const PTREE &paramType, const PTREE &paramTheValue )
{
    PTREE   list, val ;
    PTREE   tag ;
    PTREE   type ;
    PTREE   theValue ;
    
    type     =  paramType ;
    theValue =  paramTheValue ;
    while ( 1 ) {
        switch ( type ) {
            case <TYP_ASSIGN,<>,type> : break ;
            case <TYP,list,val> : 
                type = val ;
                break ;
            case <TYP_IDENT,val> : 
                type = FindTyp(val);
                break ;
            case <ANY_TYPE> : 
                if ( theValue == <ANY_VALUE,type> ) {
                    theValue =  ();
                    break ;
                } else 
                    return type ;
                break ;
            default : return type ;
        }
    }
}

//
// Encoding of a value
//
Coding *DecompAsn::EncodeValue ( const PTREE &type, const PTREE &theValue )
{
    Coding  *res = (Coding *)0 ;
    char    string [50];
    long    intVal ;
    PTREE   tag ;
    PTREE   list, elem, val, ident ;
    PTREE   exp, exp1, exp2, exp3, exp4 ;
    int     constructed = 0 ;       // true if value is constructed
    PTREE   entryValue = theValue ; // the value of theValue on function entry
    PTREE   aType ;
    PTREE   aValue ;
    
    res =  Coding::Allocate();
    if ( !type ) {
        PTREE   printList ;
        printList *= "Type is not defined for Value \n";
        printList *= MakeString(Value(fathertree(theValue)));
        DisplayError(printList);
        return res ;
    }
    
    // if the value is defined elsewhere in the program
    // replace it by it's real value
    if ( theValue == <IDENT> || theValue == <TYP_IDENT> ) {
        if ( (val = FindValue(theValue)) ) {
            lastIdentVal =  theValue ;
            val == <VAL_ASSIGN,<>,<>,val>;
            Coding::Free(res);
            res =  EncodeValue(type, val);
            res->Reset();
            
            // reeencode value as a terminal value
            if ( !res->IsSimpleValue() ) {
                EString *val = res->GetVal();
                res->Reset();
                res->TakeContent(AllocString((char *)(const char *)(*val)));
            }
            
            // return new value
            return res ;
        }
    }
    switch ( type ) {
        case <TYP,list,val> : 
            {
                PTREE   reversedList ; // list reversed
                int     firstTag = 1 ; // we compute firstTag
                PTREE   basicType ;    // basic type for type
                
                // compute the value with type
                Coding::Free(res);
                res =  EncodeValue(val, theValue);
                
                // reverse the list
                while ( (elem = nextl(list)) ) {
                    reversedList =  copytree(elem) * reversedList ;
                }
                
                // compute the tags 
                while ( (elem = nextl(reversedList)) ) {
                    PTREE   theTag ; // the tag on res
                    
                    // get tag type
                    elem == <,<>,<>,val>;
                    
                    // if not indicated get the default tag
                    if ( val == () ) 
                        val =  tagDefault ;
                    
                    // if nothing is coded exit
                    if ( !res ) 
                        break ;
                    
                    // get the tag on res                
                    theTag =  sontree(res->GetPointer(), 1);
                    
                    // if implicit remove tag allready coded
                    // implicit in front of choice == explicit
                    if ( !strcmp(value(val), "IMPLICIT") && (!firstTag || ((basicType = GetType(type, ())), basicType != <CHOICE> && basicType != <ANY_TYPE>)) ) {
                        int     constructed ; // tell if tag is constructed
                        char    *tagString ;  // intermediate string
                        
                        // look if tag is constructed
                        int     length = strlen(Value(theTag));
                        tagString =  MallocString(length + 1);
                        memcpy(tagString, Value(theTag), length + 1);
                        if ( length >= 2 ) 
                            *(tagString + 2) =  '\0';
                        constructed =  DecodeHexa(tagString) & 0x20 ;
                        FreeString(tagString, length);
                        
                        // put new tag
                        res->PutTag(EncodeTagFast(elem, constructed));
                    } else {
                        res->AddBlindLevel();
                        res->PutLength(EncodeLengthFast(res->Length()));
                        res->PutTag(EncodeTagFast(elem, 1));
                    }
                    firstTag =  0 ;
                }
            }
            break ;
        case <TYP_ASSIGN,<>,aType> : 
            Coding::Free(res);
            return EncodeValue(aType, theValue);
            break ;
        case <TYP_IDENT,val> : 
            {
                PTREE   valType = FindTyp(val);
                expAssignment =  val ;
                if ( valType != () ) {
                    Coding::Free(res);
                    return EncodeValue(valType, theValue);
                } else {
                    PTREE   printList ;
                    printList *= "Bad type name\n";
                    printList *= copytree(type);
                    DisplayError(printList);
                    return res ;
                }
            }
        case <INTEGER> : 
            aValue = theValue ;
            
            // if give an identifier try to find it
            if ( ((exp = FindValue(lastIdentVal)), exp == <VAL_ASSIGN,<>,<>,exp>, exp) && qcomparetree(exp, aValue) && (aValue = GetNamedValue(type, lastIdentVal))
                    || (aValue = entryValue) && aValue == <IDENT> && (aValue = GetNamedValue(type, aValue)) ) {
            }
            
            // if we don't find the ident it's an error
            if ( aValue != <NUMB> && aValue != <UN_MINUS,<NUMB>> ) {
                PTREE   printList ;
                printList *= "Integer value not found";
                printList *= entryValue ;
                printList *= "In";
                printList *= copytree(type);
                DisplayError(printList);
            }
            
            // put val
            res->PutContent(EncodeIntegerTreeFast(aValue));
            
            // put length
            if ( aValue == <UN_MINUS,()> ) 
                res->PutLength(EncodeLengthFast(0));
            else 
                res->PutLength(EncodeLengthFast(res->Length()));
            
            // put tag
            res->PutTag(EncodeTagFast(ComputeTypeTag(type), 0));
            break ;
        case <REAL_TYPE> : 
            switch ( theValue ) {
                case <REAL,<MAX_INFIN_VALUE>> : 
                    res->PutContent((char *)"40");
                    res->PutLength((char *)"01");
                    res->PutTag((char *)"09");
                    break ;
                case <REAL,<MIN_INFIN_VALUE>> : 
                    res->PutContent((char *)"41");
                    res->PutLength((char *)"01");
                    res->PutTag((char *)"09");
                    break ;
                case <NUMB,"0"> : 
                    res->PutContent((char *)"00");
                    res->PutTag((char *)"09");
                    break ;
                case <UN_MINUS,()> : 
                    res->PutContent((char *)"00");
                    res->PutLength((char *)"00");
                    res->PutTag((char *)"09");
                    break ;
                default : 
                    
                    // i don't know what to do
                    break ;
            }
            break ;
        case <NULL_TYPE> : 
            res->PutLength((char *)"00");
            res->PutTag((char *)"05");
            break ;
        case <BOOLEAN> : 
            switch ( theValue ) {
                case <TRUE> : 
                    res->PutContent((char *)"FF");
                    res->PutLength((char *)"01");
                    res->PutTag((char *)"01");
                    break ;
                case <FALSE> : 
                    res->PutContent((char *)"00");
                    res->PutLength((char *)"01");
                    res->PutTag((char *)"01");
                    break ;
                case <UN_MINUS,()> : 
                    res->PutLength((char *)"00");
                    res->PutTag((char *)"01");
                    break ;
            }
            break ;
        case <BITSTRING> : 
            switch ( theValue ) {
                case <BSTRING> : 
                    {
                        res->PutContent(EncodeBitStringFast(Value(theValue), 1));
                        
                        // length
                        res->PutLength(EncodeLengthFast(res->Length()));
                        
                        // put tag
                        res->PutTag(EncodeTagFast(ComputeTypeTag(type), 0));
                    }
                    break ;
                case <HSTRING> : 
                    {
                        res->PutContent(EncodeByteStringFast(Value(theValue), 1));
                        
                        // length
                        res->PutLength(EncodeLengthFast(res->Length()));
                        
                        // put tag
                        res->PutTag(EncodeTagFast(ComputeTypeTag(type), 0));
                    }
                    break ;
                case <UN_MINUS,()> : 
                    
                    // length
                    res->PutLength(EncodeLengthFast(0));
                    
                    // put tag
                    res->PutTag(EncodeTagFast(ComputeTypeTag(type), 0));
                    break ;
                case <ANY_VALUE,exp1,exp2> : 
                    {
                        
                        // an octet string containing a value from 
                        // another protocol
                        {
                            Coding  *codResult ;
                            PTREE   resTree ;
                            codResult =  EncodeValue(exp1, exp2);
                            resTree   =  codResult->GetPointer();
                            Coding::Free(codResult);
                            res->TakeContent(resTree);
                        }
                        
                        // length
                        res->PutLength(EncodeLengthFast(res->Length()));
                        
                        // put tag
                        res->PutTag(EncodeTagFast(ComputeTypeTag(type), 0));
                    }
                    break ;
                case <SEQUENCE_VALUE,list> : 
                    if ( !list || list == <LIST,<IDENT>> && GetNamedValue(type, list) ) {
                        
                        // construct a string with the right number
                        // of bits
                        int     length = GetBitStringSize(type);
                        char    *string = MallocString(length + 1);
                        int     compteur = length ;
                        
                        // if size of bit string is not defined
                        // it is an error
                        if ( !length ) {
                            PTREE   printList ;
                            printList *= "Bit String Size is not defined\n";
                            printList *= copytree(entryValue);
                            printList *= "\nIn";
                            printList *= copytree(type);
                            DisplayError(printList);
                        }
                        
                        // initialize the string
                        while ( compteur-- ) {
                            *(string + compteur) =  '0';
                        }
                        *(string + length) =  '\0';
                        
                        // then put the 1 at the indicated positions
                        while ( (elem = nextl(list)) ) {
                            PTREE   number = GetNamedValue(type, elem);
                            if ( number == () ) {
                                PTREE   printList ;
                                printList *= "Enumerated not found\n";
                                printList *= copytree(entryValue);
                                printList *= "\nIn";
                                printList *= copytree(type);
                                DisplayError(printList);
                            } else {
                                char    toPut ;
                                
                                // in inInterest mode there could be 'not values'
                                toPut                                                        =  '1';
                                
                                // set value in string
                                *(string + /* length -1 -*/ (int)GetLong(value(number))) =  toPut ;
                            }
                        }
                        
                        // eventually construct the result
                        Coding::Free(res);
                        res =  EncodeValue(type, <BSTRING,MakeString(string)>);
                        
                        // free string
                        FreeString(string, length);
                    } else {
                        PTREE   resList ;
                        while ( (elem = nextl(list)) ) {
                            Coding  *inter = EncodeValue(type, elem);
                            resList *= inter->GetPointer();
                            Coding::Free(inter);
                        }
                        res->TakeContent(resList);
                        
                        // length
                        res->PutLength(EncodeLengthFast(res->Length()));
                        
                        // put tag
                        res->PutTag(EncodeTagFast(ComputeTypeTag(type), 1));
                        break ;
                    }
                    break ;
                default : 
                    {
                        PTREE   printList ;
                        printList *= "Bad Value for a BIT STRING \n";
                        printList *= copytree(entryValue);
                        DisplayError(printList);
                    }
            }
            break ;
        case <OCTET_STRING> : 
            switch ( theValue ) {
                case <STRING> : 
                    res->PutContent(EncodeStringFast(Value(theValue)));
                    
                    // length
                    res->PutLength(EncodeLengthFast(res->Length()));
                    
                    // put tag
                    res->PutTag(EncodeTagFast(ComputeTypeTag(type), 0));
                    break ;
                case <BSTRING> : 
                    res->PutContent(EncodeBitStringFast(Value(theValue), 0));
                    
                    // length
                    res->PutLength(EncodeLengthFast(res->Length()));
                    
                    // put tag
                    res->PutTag(EncodeTagFast(ComputeTypeTag(type), 0));
                    break ;
                case <HSTRING> : 
                    res->PutContent(EncodeByteStringFast(Value(theValue), 0));
                    
                    // length
                    res->PutLength(EncodeLengthFast(res->Length()));
                    
                    // put tag
                    res->PutTag(EncodeTagFast(ComputeTypeTag(type), 0));
                    break ;
                case <UN_MINUS,()> : 
                    
                    // length
                    res->PutLength(EncodeLengthFast(0));
                    
                    // put tag
                    res->PutTag(EncodeTagFast(ComputeTypeTag(type), 0));
                    break ;
                case <SEQUENCE_VALUE,list> : 
                    
                    // if there are only string and since it can cause problems
                    // try to create a not constructed form
                    constructed = 0 ;
                    {
                        PTREE   theList = list ;
                        while ( (elem = nextl(theList)) ) {
                            if ( elem != <STRING> ) 
                                constructed =  1 ;
                        }
                        if ( !constructed ) {
                            EString theContent("");
                            theList =  list ;
                            while ( (elem = nextl(theList)) ) {
                                theContent += EncodeStringFast(Value(elem));
                            }
                            res->PutContent((char *)(const char *)theContent);
                        } else {
                            PTREE   resList ;
                            Coding  *codResult ;
                            while ( (elem = nextl(list)) ) {
                                codResult =  EncodeValue(type, elem);
                                resList   *= codResult->GetPointer();
                                Coding::Free(codResult);
                            }
                            res->TakeContent(resList);
                        }
                        
                        // length
                        res->PutLength(EncodeLengthFast(res->Length()));
                        
                        // put tag
                        res->PutTag(EncodeTagFast(ComputeTypeTag(type), constructed));
                    }
                    break ;
                case <ANY_VALUE,exp1,exp2> : 
                    {
                        
                        // an octet string containing a value from 
                        // another protocol
                        {
                            Coding  *codResult ;
                            PTREE   resTree ;
                            codResult =  EncodeValue(exp1, exp2);
                            resTree   =  codResult->GetPointer();
                            Coding::Free(codResult);
                            res->TakeContent(resTree);
                        }
                        
                        // length
                        res->PutLength(EncodeLengthFast(res->Length()));
                        
                        // put tag
                        res->PutTag(EncodeTagFast(ComputeTypeTag(type), 0));
                    }
                    break ;
                default : 
                    {
                        PTREE   printList ;
                        printList *= "Bad Value for an OCTET STRING \n";
                        printList *= copytree(entryValue);
                        DisplayError(printList);
                    }
            }
            break ;
        case <UTC_TIME> : 
        case <GENERALIZED_TIME> : 
        case <CHARACTER> : 
            
            // put value
            switch ( theValue ) {
                case <UN_MINUS,()> : break ;
                case <STRING> : 
                    res->PutContent(EncodeStringFast(Value(theValue)));
                    break ;
                case <SEQUENCE_VALUE,list> : 
                    
                    // try to create a not constructed form
                    constructed = 0 ;
                    {
                        PTREE   theList = list ;
                        while ( (elem = nextl(theList)) ) {
                            if ( elem != <STRING> ) 
                                constructed =  1 ;
                        }
                        if ( !constructed ) {
                            EString theContent("");
                            theList =  list ;
                            while ( (elem = nextl(theList)) ) {
                                theContent += EncodeStringFast(Value(elem));
                            }
                            res->PutContent((char *)(const char *)theContent);
                        } else {
                            PTREE   resList ;
                            Coding  *codResult ;
                            while ( (elem = nextl(list)) ) {
                                codResult =  EncodeValue(type, elem);
                                resList   *= codResult->GetPointer();
                                Coding::Free(codResult);
                            }
                            res->TakeContent(resList);
                        }
                    }
                    break ;
                default : 
                    {
                        PTREE   printList ;
                        printList *= "Bad value for a string \n";
                        printList *= copytree(entryValue);
                        DisplayError(printList);
                    }
            }
            
            // put length
            res->PutLength(EncodeLengthFast(res->Length()));
            
            // put tag
            tag = ComputeTypeTag(type);
            if ( tag ) {
                res->PutTag(EncodeTagFast(tag, constructed));
            } else {
                {
                    PTREE   printList ;
                    printList *= "Unknown character type \n";
                    printList *= MakeString(value(type));
                    DisplayError(printList);
                }
                res->PutContent((char *)"00");
                res->PutLength((char *)"00");
                res->PutTag((char *)"00");
            }
            break ;
        case <SEQUENCE> : 
        case <SEQUENCE_OF> : 
        case <SET> : 
        case <SET_OF> : 
            switch ( type ) {
                case <SEQUENCE> : 
                    
                    // normalize type
                    aType = TypeNormalize(type);
                    
                    // compute
                    if ( FastEncode() || VerifySetAffect(aType, theValue, 1) ) {
                        Coding::Free(res);
                        res =  ComputeSet(aType, theValue);
                    }
                    break ;
                case <SEQUENCE_OF> : 
                    Coding::Free(res);
                    res = ComputeSetOf(type, theValue);
                    break ;
                case <SET> : 
                    
                    // normalize type
                    aType = TypeNormalize(type);
                    
                    // compute
                    if ( FastEncode() || VerifySetAffect(aType, theValue, 0) ) {
                        Coding::Free(res);
                        res =  ComputeSet(aType, theValue);
                    }
                    break ;
                case <SET_OF> : 
                    Coding::Free(res);
                    res = ComputeSetOf(type, theValue);
                    break ;
            }
            
            // put length
            res->PutLength(EncodeLengthFast(res->Length()));
            
            // if there is in invalid coding inside the set or the 
            // sequence or the sequence the tag becomes E0
            // for correct GENEPX encoding
            intVal = 0 ;
            
            // tag
            if ( !intVal ) 
                res->PutTag(EncodeTagFast(ComputeTypeTag(type), 1));
            break ;
        case <CHOICE> : 
            aValue = theValue ;
            if ( theValue != <NAMED_VALUE,ident,aValue> ) {
                ident =  ();
            }
            if ( (FastEncode() || VerifyChoiceAffect(type, ident, aValue)) && (aType = GetChoiceType(type, ident)) ) {
                Coding::Free(res);
                res =  EncodeValue(aType, aValue);
            }
            break ;
        case <ENUMERATED> : 
            {
                PTREE   aValue = theValue ;
                if ( theValue == <UN_MINUS,()>
                        || ((exp = FindValue(lastIdentVal)), exp == <VAL_ASSIGN,<>,<>,exp>, exp)
                            && qcomparetree(exp, theValue)
                            && (aValue = GetNamedValue(type, lastIdentVal))
                        || (aValue = entryValue) && (aValue = GetNamedValue(type, aValue)) ) {
                    res->PutContent(EncodeIntegerTreeFast(aValue));
                    
                    // length
                    res->PutLength(EncodeLengthFast(res->Length()));
                    
                    // put tag
                    res->PutTag(EncodeTagFast(ComputeTypeTag(type), 0));
                } else {
                    PTREE   printList ;
                    printList *= "Enumerated not found\n";
                    printList *= copytree(entryValue);
                    printList *= "\nIn";
                    printList *= copytree(type);
                    DisplayError(printList);
                }
            }
            break ;
        case <ANY_TYPE> : 
            {
                if ( theValue == <ANY_VALUE,aType,aValue> ) {
                    Coding::Free(res);
                    res =  EncodeValue(aType, aValue);
                } else {
                    res->PutLength((char *)"00");
                    res->PutTag((char *)"00");
                    {
                        PTREE   printList ;
                        printList *= "Not an any value\n";
                        printList *= copytree(entryValue);
                        DisplayError(printList);
                    }
                }
            }
            break ;
        case <OBJECT_IDENTIFIER> : 
            if ( theValue == <OBJECT_IDENTIFIER_VALUE,list> || theValue == <SEQUENCE_VALUE,list> ) {
                int     first = 1 ;
                long    tot = 0 ;
                char    *content = (char *)"";
                
                // compute content
                res->TakeContent(GetStringFromOid(theValue));
                
                // length
                res->PutLength(EncodeLengthFast(res->Length()));
                
                // put tag
                res->PutTag(EncodeTagFast(ComputeTypeTag(type), 0));
                break ;
            } else {
                PTREE   printList ;
                printList *= "Not a correct object identifier value\n";
                printList *= copytree(entryValue);
                DisplayError(printList);
            }
            break ;
    }
    if ( !res ) 
        return Coding::Allocate();
    else 
        return res ;
}

//
// Creates a list of all types of the program
//
void DecompAsn::ComputeLists ( const PTREE &tree )
{
    PTREE   ident, type, father, val, list ;
    
    if ( tree == () ) 
        return ;
    foreach ((),tree,{
        switch ( for_elem ) {
            case <TYP_ASSIGN,ident,type> : 
                father = for_elem ^ ;
                tabListType->AddVar(for_elem);
                for_elem = father ;
                break ;
            case <VAL_ASSIGN> : 
                father = for_elem ^ ;
                tabListValue->AddVar(for_elem);
                for_elem = father ;
                break ;
            default : break ;
        }
    })
}

//
// FindModule : Find a module name
//
PTREE DecompAsn::FindModule ( const PTREE &paramIncludeList, const PTREE &searched )
{
    PTREE   includeElem, list, elem, name ;
    PTREE   includeList = paramIncludeList ;
    
    while ( (includeElem = nextl(includeList)) ) {
        includeElem == <LIST_MODULE,list>;
        while ( (elem = nextl(list)) ) {
            if ( elem == <MODULE,name> ) {
                if ( !strcmp(Value(name), Value(searched)) && (searched == <MODULE_IDENTIFIER,<>,()> || qcomparetree(name, searched)) ) 
                    return elem ;
                break ;
            }
        }
    }
    return 0 ;
}

//
//  FindSymb : find a list of symbols in a module
//
PTREE DecompAsn::FindSymb ( const PTREE &module, TabList *pTabModule, TabList *pTabModuleImport, TabList *pAllTabRet, TabList *pAllTabRejected
    , const PTREE &paramListSymb, const PTREE &includeList, int topLevel )
{
    PTREE   elem ;
    TabList *pTabRet ;
    TabList *pTabSymb = (TabList *)0 ;
    TabList *pTabImport = (TabList *)0 ;
    TabList *pTabRejected = (TabList *)0 ;
    TabList *pTab ;
    TabList *pImport ;
    PTREE   inserted ;
    PTREE   list ;
    PTREE   list1 ;
    PTREE   importList ;
    PTREE   exportList = -1 ;
    PTREE   import ;
    PTREE   importModule ;
    PTREE   inter ;
    PTREE   tagStyleDefault ; // tag style of current module
    PTREE   tagStyle ;        // tagStyle of a tag
    PTREE   listSymb = paramListSymb ;
    
    // initialize symbol table pointer
    if ( pTabModule ) {
        pTab =  pTabModule ;
    } else {
        pTabSymb =  new TabList(module [3]);
        pTab     =  pTabSymb ;
    }
    if ( pTabModuleImport ) {
        pImport =  pTabModuleImport ;
    } else {
        pTabImport =  new TabList ;
        pImport    =  pTabImport ;
    }
    if ( topLevel ) {
        pTabRet =  new TabList ;
    } else {
        pTabRet =  pAllTabRet ;
    }
    pTabRejected    =  pAllTabRejected ;
    
    // look for an imports and exports list in the module
    list            =  module [3];
    tagStyleDefault =  module [2];
    while ( (elem = nextl(list)) ) {
        switch ( elem ) {
            case <IMPORT_LIST> : 
                {
                    elem == <,importList>;
                    if ( !pTabModuleImport ) {
                        list =  importList ;
                        while ( (elem = nextl(list)) ) {
                            list1 =  elem [1];
                            while ( (elem = nextl(list1)) ) {
                                pImport->Put(MakeString(Value(elem)), pImport->Size());
                            }
                        }
                    }
                }
                break ;
            case <EXPORTS> : 
                {
                    elem == <,exportList>;
                }
        }
    }
    
    // look for searched symbols
    while ( (elem = nextl(listSymb)) ) {
        
        // search in the module avoiding IMPORTS
        inserted =  (*pTab)[elem];
        if ( inserted != () && inserted != <IMPORT_LIST> ) {
            
            // look if symbol is exported
            if ( exportList != -1 ) {
                if ( !ListFind(exportList, elem) ) {
                    inserted =  0 ;
                }
            }
            if ( !(*pTabRet)[inserted] ) {
                inserted =  copytree(inserted);
                pTabRet->Insert(inserted);
                
                // add the definitions necessary for the symbol
                foreach ((),inserted,{
                    switch ( for_elem ) {
                        
                        // if no tagStyle is provided put default tagStyle
                        case <TAG,<>,<>,tagStyle> : 
                            {
                                if ( tagStyle == () ) {
                                    PTREE   newStyle = <TAGSTYLE,MakeString(Value(tagStyleDefault))>;
                                    for_elem += <,<>,<>,newStyle>;
                                }
                            }
                            break ;
                        case <IDENT> : 
                        case <TYP_IDENT> : 
                            {
                                PTREE   father = FatherTree(for_elem);
                                switch ( father ) {
                                    case <VAL_DEF> : 
                                    case <NAMED_NUMBER> : 
                                    case <NAMED_BIT> : 
                                    case <NAMED_TYPE> : 
                                    case <SELECTION_TYPE> : 
                                    case <ANY_TYPE> : 
                                        if ( ranktree(for_elem) == 1 ) 
                                            goto for_continue ;
                                }
                                if ( !(*pTabRet)[for_elem] && !(*pTabRejected)[for_elem] ) {
                                    FindSymb(module, pTab, pImport, pTabRet, pTabRejected, <LIST,copytree(for_elem),()>, includeList, 0);
                                }
                            }
                            break ;
                    }
                })
            }
        } else 
            inserted =  ();
        
        // if not directly here try to find it in the import list
        if ( !inserted && (*pImport)[elem] ) {
            list =  importList ;
            while ( (import = nextl(importList)) ) {
                if ( ListFind(import [1], elem) ) {
                    if ( !(importModule = FindModule(includeList, import [2])) ) {
                        PTREE   printList = ();
                        printList *= "Module Not Found ";
                        printList *= copytree(import [2]);
                        DisplayError(printList);
                    } else {
                        FindSymb(importModule, (TabList *)0, (TabList *)0, pTabRet, pTabRejected, <LIST,copytree(elem),()>, includeList, 0);
                    }
                }
            }
        }
        
        // if did not find it print error
        if ( topLevel && !inserted ) {
            PTREE   printList = ();
            printList *= "Symbol Not Found ";
            printList *= copytree(elem);
            printList *= "In Module ";
            printList *= copytree(module [1]);
            DisplayError(printList);
        } else if ( !inserted ) {
            pTabRejected->Insert(copytree(elem));
        }
    }
    
    // free symbol tab
    if ( pTabSymb ) 
        delete pTabSymb ;
    if ( pTabImport ) 
        delete pTabImport ;
    
    // return value
    list =  pTabRet->List();
    if ( topLevel ) 
        delete pTabRet ;
    return list ;
}

//
// Treat module insertion
//
void DecompAsn::TreatInsert ( const PTREE &includeList, const PTREE &tree )
{
    PTREE   module, name, inter ;
    PTREE   listOrg, listName ;
    PTREE   elem ;
    
    foreach (<INSERT>,tree,{
        for_elem == <,name>;
        if ( !(module = FindModule(includeList, name)) ) {
            PTREE   printList = ();
            printList *= "Module Not Found ";
            printList *= copytree(name);
            DisplayError(printList);
        } else {
            listName =  module [3];
            listOrg  =  for_elem ^ ;
            
            // insert new values
            {
                TabList tabOrg (listOrg [2]) ;
                
                // insert everything of the inserted module
                while ( (elem = nextl(listName)) ) {
                    switch ( elem ) {
                        case <EXPORTS> : 
                        case <IMPORT_LIST> : break ;
                        default : 
                            
                            // if elem is not defined in module insert
                            // the value
                            if ( !tabOrg [elem] ) {
                                tabOrg.Insert(copytree(elem));
                            }
                    }
                }
                
                // suppress INSERT
                // replace new list
                elem =  tabOrg.List();
                if ( elem && elem [1] ) {
                    listOrg += <,elem [1],elem [2]>;
                    elem    =  listOrg ;
                } else {
                    elem    =  listOrg ^ ;
                    listOrg += ();
                }
                
                // maybe there are insert in inserts
                TreatInsert(listInclude, elem);
                
                // everything have been done for this module
                _for_elem =  elem ;
                goto for_continue ;
            }
        }
    })
}

//
// Merging included module with main module
//
TabList *DecompAsn::MergeModule ( const PTREE &includeList, const PTREE &moduleList )
{
    PTREE   currentModuleName, list, list1, listModule, module, name, elem ;
    TabList *tabInserted = new TabList ;
    PTREE   contentModule ;                    // content type and val 
                                               // of current module
    TabList *tabContentModule = (TabList *)0 ; // tab on contentModule
    PTREE   listImport ;                       // the import list of current 
                                               // module
    PTREE   moduleEntry ;
    
    if ( moduleList == <LIST_MODULE,listModule> ) {
        list =  listModule ;
        
        // search name of current module
        while ( (module = nextl(list)) ) 
            if ( module == <MODULE,currentModuleName,<>,contentModule> ) {
                tabContentModule =  new TabList(contentModule);
                break ;
            }
        
        // extract import list
        list =  contentModule ;
        while ( (moduleEntry = nextl(list)) ) {
            if ( moduleEntry == <IMPORT_LIST,list> ) {
                while ( (moduleEntry = nextl(list)) ) {
                    listImport *= moduleEntry ;
                }
                break ;
            }
        }
        if ( tabContentModule ) 
            tabContentModule->Sort();
        
        // dubious symbol tab
        TabList *pTabRejected = new TabList ;
        
        // expand the imports
        while ( (moduleEntry = nextl(listImport)) ) {
            if ( moduleEntry == <IMPORTS,list,name> ) 
                if ( !(module = FindModule(includeList, name)) ) {
                    PTREE   printList = ();
                    printList *= "Module Not Found ";
                    printList *= copytree(name);
                    DisplayError(printList);
                } else {
                    if ( (elem = FindSymb(module, (TabList *)0, (TabList *)0, (TabList *)0, pTabRejected, list, includeList)) ) {
                        while ( (name = nextl(elem)) ) {
                            
                            // insert element if not allready there or
                            // if explicitly imported
                            PTREE   oldSymbol ;
                            if ( ((oldSymbol = (*tabContentModule)[name]) || (oldSymbol = ListFind(list, name)))
                                    && !qcomparetree(oldSymbol, name)
                                    && name == <TYP_ASSIGN>
                                    && oldSymbol == <TYP_ASSIGN> ) {
                                PTREE   printList = ();
                                printList *= "Warning duplicate definition :  ";
                                printList *= copytree(name);
                                printList *= copytree(oldSymbol);
                                DisplayError(printList);
                            }
                            if ( !(*tabContentModule)[name] || ListFind(list, name) ) {
                                tabContentModule->InsertRemove(name);
                                tabInserted->Put(MakeString(Value(name)), tabInserted->Size());
                            }
                        }
                    }
                }
        }
        
        // delete tabContentModule only header output list remain
        if ( tabContentModule ) 
            delete tabContentModule ;
    }
    return tabInserted ;
}

//
//  storing of grammar
//
void DecompAsn::StoreGrammar ( const PTREE &tree )
{
    PTREE   ident, type, val, list, elem ;
    PTREE   val1, val2 ;
    PTREE   initVal ;
    char    *string ;
    TabList *tabInserted ;
    
    // clean the ATTRIBUTS nodes
    CleanAttributs(tree);
    CleanAttributs(listInclude);
    
    // clean geo node
    foreach ((),tree,
        FreeCoord(for_elem)
    )
    foreach ((),listInclude,
        FreeCoord(for_elem)
    )
    
    // create arrays
    tabListType  =  new SymbolTable ;
    tabListValue =  new SymbolTable ;
    
    // treat module insertion
    TreatInsert(listInclude, listInclude);
    TreatInsert(listInclude, tree);
    
    // search for all types and Tsp in the included files
    //    ComputeLists(listInclude);
    // Merge all Modules with main module
    tabInserted =  MergeModule(listInclude, tree);
    
    // search for all types and Tsp in the program
    ComputeLists(tree);
    listInclude =  ();
    
    // initalize type and value list
    //    listType = tabListType -> List();
    // listValue = tabListValue -> List();
    // put in display assignment
    printVal    =  1 ;
    
    // find the tag default
    tagDefault  =  <IDENT,"EXPLICIT">;
    foreach ((),tree,{
        switch ( for_elem ) {
            case <MODULE,<>,tagDefault> : 
                
                // get tag default style
                goto for_continue ;
                break ;
            default : break ;
        }
    })
    
    // << EL 04/98 add quick access to types
    if ( tabListType->GetTabList(0) ) {
        PTREE   type ;
        PTREE   elem ;
        list =  tabListType->GetTabList(0)->List();
        while ( (val = nextl(list)) ) {
            if ( val == <TYP_ASSIGN,<>,val> ) {
                foreach (<TYP_IDENT>,val,{
                    if ( (type = (*tabListType)[Value(for_elem)]) ) {
                        elem =  for_elem ;
                        elem += <,MakeTreeRef(type)>;
                    }
                })
            }
        }
    }
    
    // verify the types
    VerifyAllTypes(1, tabInserted);
    delete tabInserted ;
}

//
//  Compilation of assignement
//
void DecompAsn::DecompAssign ( const PTREE &tree, const char *fileName )
{
    PTREE   ident, type, val, list, elem ;
    PTREE   val1, val2 ;
    PTREE   initVal ;
    char    *string ;
    
    // store grammar
    StoreGrammar(tree);
    
    // compute all the value assignments
    if ( tabListValue->GetTabList(0) ) 
        list =  tabListValue->GetTabList(0)->List();
    while ( (val = nextl(list)) ) {
        
        // reset list of TSP used by PDU
        if ( val != <VAL_ASSIGN> ) {
            val == <,val>;
        }
        val1 =  FindValue(val);
        if ( !val1 ) {
            PTREE   printList ;
            printList *= "Element not found : \n";
            printList *= MakeString(value(val));
            DisplayError(printList);
            continue ;
        }
        
        // clean val
        CleanAttributs(val1);
        
        // save val for storing ( in particular TSP will be translated )
        // and cannot be used twice
        // construct VAL_ASSIGN to keep real name 
        initVal =  copytree(val1);
        if ( val != val1 ) 
            initVal += <,copytree(val [1]),copytree(val [2])>;
        
        // then display it
        <NL>
        @initVal <NL>
    }
    
    // if there is an output file store PDU inside it
    if ( fileName ) 
        StoreInFile(tabListValue->GetTabList(0)->List(), fileName);
}


