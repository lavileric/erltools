language asn;

#include "quickasn.h"
#include "tabsort.h"

#if defined(UNIX_DLL)
#   ifndef SOLARIS
#       include <getopt.h>
#   endif
#   include <dlfcn.h>
#   include <ctype.h>
#endif

bool GenGramm::CompareTag ( const char *tag, EString &string, const CoordString &coord )
{
    
    unsigned int    index ;        // index in string
    bool            first = true ; // first char 
    
    for ( index = 0 ; index < coord.length ; index++ ) {
        char    cRef ;   // ref char
        char    cFound ; // found char
        cRef   =  *(tag + index);
        cFound =  string [coord.pos + index];
        
        // if first suppress constructed bit
        if ( first ) {
            cRef   &= ~0x20 ;
            cFound &= ~0x20 ;
            first  =  false ;
        }
        
        // if not good char return
        if ( cRef != cFound ) 
            return false ;
    }
    
    // succeeded
    return true ;
}

int GenGramm::DecodeLength ( EString &string, CoordString &coord )
{
    
    unsigned int    lengthLength = 0 ; // length of length
    int             result = -1 ;
    char            currChar ;         // current char
    
    currChar =  string [coord.pos];
    
    // compute length, there are two cases
    // 2 : length on one octet
    // 3 : length on multiple octets
    if ( coord.length >= 1 ) {
        if ( currChar & 0x80 ) {
            lengthLength =  ((int)currChar) & 0x7F ;
            
            // if value is incorrect return a length of 0
            if ( lengthLength > coord.length ) {
                result =  -1 ;
            } else {
                int lengthToBeAdded = lengthLength ;
                coord.pos++ ;
                result =  0 ;
                while ( lengthToBeAdded-- ) {
                    int add = string [coord.pos++];
                    result <<= 8 ;
                    result += add & 0xFF ;
                }
            }
        } else {
            result =  ((int)string [coord.pos++]) & 0x7F ;
        }
    } else 
        result =  -1 ;
    
    // add length of first byte
    lengthLength += 1 ;
    
    // if invalid length treatment
    if ( result >= 0 ) {
        if ( lengthLength > coord.length ) {
            coord.pos    += coord.length ;
            coord.length =  0 ;
            result       =  -1 ;
        }
    }
    
    // adjust length
    coord.length -= lengthLength ;
    
    // return result 
    return result ;
}

// DecodeOctetString : get string out of octet string value
EString GenGramm::DecodeOctetString ( EString &octetString )
{
    char    digit [2];
    EString resString ;
    char    *theValue = (char *)(octetString.c_str());
    int     length = octetString.length();
    
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
            resString += digit ;
            val       =  c & 0xF ;
            if ( val < 10 ) 
                *digit =  '0' + val ;
            else 
                *digit =  'A' + val - 10 ;
            resString += digit ;
        }
    }
    
    // return res
    return resString ;
}

EString GenGramm::ConvertStringToBin ( EString &string )
{
    char    *pt ;
    EString result ;
    int     length = string.length();
    
    for ( pt = (char *)(string.c_str()) ; length > 1 ; length -= 2 ) {
        int nb = 0 ;
        if ( *pt >= 'a' ) 
            nb =  16 * (*pt - 'a' + 10);
        else if ( *pt >= 'A' ) 
            nb =  16 * (*pt - 'A' + 10);
        else 
            nb =  16 * (*pt - '0');
        pt++ ;
        if ( *pt >= 'a' ) 
            nb += *pt - 'a' + 10 ;
        else if ( *pt >= 'A' ) 
            nb += *pt - 'A' + 10 ;
        else 
            nb += *pt - '0';
        pt++ ;
        result += (char)nb ;
    }
    return result ;
}

PTREE GenGramm::GetInteger ( EString &string, CoordString &coord, bool checkTag )
{
    int codedLength = coord.length ;
    
    if ( checkTag ) {
        CoordString coordString(coord.pos, 1);
        if ( !CompareTag("\002", string, coordString) ) 
            return PTREE(0);
        coord.length -= 1 ;
        coord.pos    += 1 ;
        if ( (codedLength = DecodeLength(string, coord)) < 0 ) 
            return PTREE(0);
        else 
            coord.length -= codedLength ;
        checkTag =  false ;
    }
    
    ENCODE_INT  valInteger ; // value of integer
    char        currChar ;   // current char
    
    // initialize with -1 or 0 depending if number is positive or negative
    currChar =  string [coord.pos];
    if ( currChar & 0x80 ) 
        valInteger =  ~0 ;
    else 
        valInteger =  0 ;
    
    // put value inside number
    while ( codedLength-- ) {
        valInteger =  valInteger << 8 & ~0xff | ((int)(string [coord.pos++])) & 0xff ;
    }
    
    // construct return value
    
    bool        negative = false ;   // tells if negative number
    ENCODE_INT  rest ;               // rest of divide by 10
    char        digit ;              // a digit
    bool        sthingDone = false ; // tells if sthing was done
    EString     resultString ;       // the result string
    
    // convert number to a positive one
    if ( valInteger < 0 ) {
        negative   =  true ;
        valInteger =  -1 * valInteger ;
    }
    
    // convert number to string
    while ( valInteger ) {
        rest       =  valInteger % 10 ;
        valInteger =  valInteger / 10 ;
        digit      =  '0' + rest ;
        resultString.prepend(digit);
        sthingDone =  true ;
    }
    if ( sthingDone ) {
        if ( negative ) 
            resultString.prepend("-");
    } else {
        resultString =  "0";
    }
    
    // consruct result and return it
    PTREE   result ;
    
    result =  PTREE(asn::NUMB, 1);
    result.ReplaceTree(1, PTREE(resultString));
    if ( negative ) {
        PTREE   negative(asn::UN_MINUS, 1);
        negative.ReplaceTree(1, result);
        result =  negative ;
    }
    
    // return result
    return result ;
}

PTREE GenGramm::GetObjectIdentifier ( EString &string, CoordString &coord, bool checkTag )
{
    int codedLength = coord.length ;
    
    if ( checkTag ) {
        CoordString coordString(coord.pos, 1);
        if ( !CompareTag("\006", string, coordString) ) 
            return PTREE(0);
        coord.length -= 1 ;
        coord.pos    += 1 ;
        if ( (codedLength = DecodeLength(string, coord)) < 0 ) 
            return PTREE(0);
        else 
            coord.length -= codedLength ;
        checkTag =  false ;
    }
    
    int     valInteger ; // value of integer
    char    currChar ;   // current char
    PTREE   listValue ;  // list of values
    
    // initialize with -1 or 0 depending if number is positive or negative
    currChar =  string [coord.pos];
    
    bool    first = true ;
    
    while ( codedLength ) {
        
        // lire le prochain nombre
        char    octet = 0x80 ;
        int     nbObject = 0 ;
        while ( octet & 0x80 && codedLength >= 0 ) {
            octet     =  string [coord.pos];
            coord.pos += 1 ;
            codedLength-- ;
            
            // add octet to the value
            nbObject =  nbObject << 7 | octet & 0x7F ;
        }
        if ( first ) {
            listValue *= <NUMB,PTREE(CompactItoa(nbObject / 40))>;
            
            // if more data it is a x.0.y
            if ( nbObject % 40 || codedLength ) {
                listValue *= <NUMB,PTREE(CompactItoa(nbObject % 40))>;
            }
            first =  false ;
        } else {
            listValue *= <NUMB,PTREE(CompactItoa(nbObject))>;
        }
    }
    
    // return result
    return listValue ;
}

PTREE GenGramm::GetBoolean ( EString &string, CoordString &coord, bool checkTag )
{
    int codedLength = coord.length ;
    
    if ( checkTag ) {
        CoordString coordString(coord.pos, 1);
        if ( !CompareTag("\001", string, coordString) ) 
            return PTREE(0);
        coord.length -= 1 ;
        coord.pos    += 1 ;
        if ( (codedLength = DecodeLength(string, coord)) < 0 ) 
            return PTREE(0);
        else 
            coord.length -= codedLength ;
        checkTag =  false ;
    }
    
    char    currChar ; // current char
    
    // get value of boolean
    currChar =  string [coord.pos++];
    
    // return result
    {
        PTREE   result ; // result 
        if ( currChar ) {
            result =  <TRUE>;
        } else {
            result =  <FALSE>;
        }
        return result ;
    }
}

PTREE GenGramm::GetIA5String ( EString &string, CoordString &coord, bool checkTag )
{
    int codedLength = coord.length ;
    
    if ( checkTag ) {
        CoordString coordString(coord.pos, 1);
        if ( !CompareTag("\026", string, coordString) ) 
            return PTREE(0);
        coord.length -= 1 ;
        coord.pos    += 1 ;
        if ( (codedLength = DecodeLength(string, coord)) < 0 ) 
            return PTREE(0);
        else 
            coord.length -= codedLength ;
        checkTag =  false ;
    }
    
    char    currChar ;  // current char
    EString resString ; // resulting string
    
    // get string and return it
    {
        
        // get the string
        while ( codedLength-- ) {
            resString += string [coord.pos++];
        }
        
        // return it
        PTREE   result ; // the result 
        result =  <STRING,PTREE(resString)>;
        return result ;
    }
}

PTREE GenGramm::GetRealString ( EString &string, CoordString &coord, bool checkTag )
{
    int codedLength = coord.length ;
    
    if ( checkTag ) {
        CoordString coordString(coord.pos, 1);
        if ( !CompareTag("\011", string, coordString) ) 
            return PTREE(0);
        coord.length -= 1 ;
        coord.pos    += 1 ;
        if ( (codedLength = DecodeLength(string, coord)) < 0 ) 
            return PTREE(0);
        else 
            coord.length -= codedLength ;
        checkTag =  false ;
    }
    
    // get NR3 indicator
    coord.pos++ ;
    coord.length-- ;
    codedLength-- ;
    
    char    currChar ;  // current char
    EString resString ; // resulting string
    
    // get string and return it
    {
        
        // get the string
        while ( codedLength-- ) {
            resString += string [coord.pos++];
        }
        
        // return it
        PTREE   result ; // the result 
        result =  <REAL,PTREE(resString)>;
        return result ;
    }
}

PTREE GenGramm::GetOctetString ( EString &string, CoordString &coord, bool checkTag )
{
    int codedLength = coord.length ;
    
    if ( checkTag ) {
        CoordString coordString(coord.pos, 1);
        if ( !CompareTag("\004", string, coordString) ) 
            return PTREE(0);
        coord.length -= 1 ;
        coord.pos    += 1 ;
        if ( (codedLength = DecodeLength(string, coord)) < 0 ) 
            return PTREE(0);
        else 
            coord.length -= codedLength ;
        checkTag =  false ;
    }
    
    char    currChar ;  // current char
    EString resString ; // resulting string
    
    // get string and return it
    {
        
        // get the string
        while ( codedLength-- ) {
            resString += string [coord.pos++];
        }
        
        // return it
        PTREE   result ; // the result 
        result =  <HSTRING,PTREE(DecodeOctetString(resString))>;
        return result ;
    }
}

PTREE GenGramm::GetNullType ( EString &string, CoordString &coord, bool checkTag )
{
    int codedLength = coord.length ;
    
    if ( checkTag ) {
        CoordString coordString(coord.pos, 1);
        if ( !CompareTag("\005", string, coordString) ) 
            return PTREE(0);
        coord.length -= 1 ;
        coord.pos    += 1 ;
        if ( (codedLength = DecodeLength(string, coord)) < 0 ) 
            return PTREE(0);
        else 
            coord.length -= codedLength ;
        checkTag =  false ;
    }
    
    // return value
    return <NULL_VALUE>;
}

PTREE GenGramm::GetEnumerated ( PTREE val, Enumerated enumerated [] )
{
    int enumeratedIndex ; // index for enumerated
    
    // get index
    enumeratedIndex =  atoi(Value(val));
    
    // search it in array
    Enumerated  *ptEnumerated = enumerated ; // pointer on enumerated array
    
    while ( (*ptEnumerated)[1] ) {
        
        // if found valid index
        void    *ptInt = &(*ptEnumerated)[0];
        
        //         if ( (int)((*ptEnumerated)[0]) == enumeratedIndex ) {
        // ELV 2012
        if ( *((int *)ptInt) == enumeratedIndex ) {
            
            // construct return value
            PTREE   retValue ; // return value
            retValue =  <IDENT,PTREE((*ptEnumerated)[1])>;
            
            // return it
            return retValue ;
        }
        
        // next value
        ptEnumerated++ ;
    }
    
    // fail
    return PTREE(0);
}

PTREE GenGramm::GetBitString ( EString &string, CoordString &coord, Enumerated enumerated [], bool checkTag )
{
    
    // compute the bit string
    
    int     bitStringLength ;     // bit string length
    EString bitString ;           // the bit string
    char    currChar ;            // current character
    int     initPos = coord.pos ; // initPos 
    int     codedLength = coord.length ;
    
    if ( checkTag ) {
        CoordString coordString(coord.pos, 1);
        if ( !CompareTag("\003", string, coordString) ) 
            return PTREE(0);
        coord.length -= 1 ;
        coord.pos    += 1 ;
        if ( (codedLength = DecodeLength(string, coord)) < 0 ) 
            return PTREE(0);
        else 
            coord.length -= codedLength ;
        checkTag =  false ;
    }
    coord.length    =  codedLength ;
    
    // skip unused bits indication
    coord.pos       += 1 ;
    coord.length    -= 1 ;
    
    // extract bit string
    bitStringLength =  coord.length ;
    while ( bitStringLength-- ) {
        currChar =  string [coord.pos++];
        int nbBit = 8 ; // number of bits
        while ( nbBit-- ) {
            if ( currChar & 0x80 ) 
                bitString += '1';
            else 
                bitString += '0';
            currChar =  currChar << 1 ;
        }
    }
    
    // construct response
    
    PTREE           retList ;         // returned list
    unsigned int    indexString = 0 ; // index in string
    
    if ( enumerated [0][1] ) {
        for ( indexString = 0 ; indexString < bitString.length() ; indexString++ ) {
            currChar =  bitString [indexString];
            if ( currChar == '1' ) {
                Enumerated  *ptEnumerated ; // pointer on enumerated
                ptEnumerated =  enumerated ;
                while ( (*ptEnumerated)[1] ) {
                    
                    // if found valid index
                    void    *ptInt = &(*ptEnumerated)[0];
                    
                    //                if ( (unsigned int)((*ptEnumerated)[0]) == indexString ) {
                    // ELV 2012
                    if ( *((unsigned int *)ptInt) == indexString ) {
                        
                        // construct return value
                        PTREE   retValue ; // return value
                        retValue =  <IDENT,PTREE((*ptEnumerated)[1])>;
                        
                        // add it to list
                        retList  *= retValue ;
                        
                        // it is ok
                        break ;
                    }
                    ptEnumerated++ ;
                }
            }
        }
    } else 
        retList =  <BSTRING,PTREE(bitString)>;
    
    // return result
    PTREE   retValue ; // return value
    
    retValue =  <SEQUENCE_VALUE,retList>;
    return retValue ;
}

//
// Encode an integer in hexa
//
EString GenGramm::EncodeInt ( ENCODE_INT numb )
{
    
    int         nbOct = 0 ;        // number of byte necesary for coding integer
    ENCODE_INT  shiftNumb ;        // shifted number
    bool        negative = false ; // found zero
    bool        first = true ;
    
    // compute the number of bytes necessary to code number
    for ( nbOct = sizeof(ENCODE_INT) - 1 ; nbOct >= 0 ; nbOct-- ) {
        shiftNumb =  ((ENCODE_INT)numb & (ENCODE_INT)(0xff << nbOct * 8)) >> nbOct * 8 ;
        char    compChar = (char)shiftNumb ;
        
        // on first loop look if number is negative with first ff
        if ( first ) {
            negative =  compChar == (char)0xff ;
            first    =  false ;
        }
        
        // look if end
        if ( negative && compChar != (char)0xff || !negative && compChar != (char)0 ) 
            break ;
    }
    if ( nbOct < 0 ) 
        nbOct =  0 ;
    
    // if positive first bit must not be 1, if negative must be 1 
    if ( numb >= 0 && (shiftNumb & 0x80) != 0 || numb < 0 && !(shiftNumb & 0x80) ) {
        nbOct++ ;
    }
    nbOct++ ;
    
    // compute result 
    EString result ; // resulting string
    
    // create resulting string
    while ( nbOct-- ) {
        result += (char)(((ENCODE_INT)(numb >> ((ENCODE_INT)(nbOct * 8)))) & 0xff);
    }
    
    // return it
    return result ;
}

//
// Encode a number in hexa
//
EString GenGramm::EncodeHexa ( int numb )
{
    EString string((char)numb); // res string
    
    return string ;
}

void GenGramm::EncodeLength ( EString &string, int length )
{
    
    // si la longueur est inferieure a 127 code en un seul
    // octet sinon plusieurs
    if ( length <= 127 ) {
        string += EncodeHexa(length);
    } else {
        
        // compute length
        EString lengthString = EncodeInt(length);
        
        // put header
        int     compteur = lengthString.length();
        compteur |= 0x80 ;
        string   += EncodeHexa(compteur);
        string   += lengthString ;
    }
}

void GenGramm::EncodeInteger ( EString &string, ENCODE_INT integer )
{
    
    // if necessary put tag
    string += '\002';
    
    // compute content
    EString content = EncodeInt(integer);
    
    // add length to string
    EncodeLength(string, content.length());
    
    // add content to string
    string += content ;
}

//
// Encoding in base 128
//
EString GenGramm::Encode128 ( long val )
{
    long    divid, rem ;
    EString res("");
    char    string [20];
    int     first = 1 ;
    
    if ( !val ) {
        res += '\0';
        return res ;
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
        res.prepend((char)rem);
        
        // after that put 1
        first =  0 ;
    }
    
    // return result
    return res ;
}

void GenGramm::EncodeObjectIdentifier ( EString &string, PTREE listValue, int *objectDef )
{
    
    // if necessary put tag
    string += '\006';
    
    bool    first = true ;
    PTREE   elem ;
    EString content ;
    long    tot ;
    PTREE   list = listValue ;
    
    while ( list != <LIST> && list.TreeArity() >= 1 ) 
        list =  list [1];
    while ( (elem = nextl(list)) ) {
        if ( first ) {
            if ( elem == <IDENT> && objectDef != (int *)0 ) {
                PTREE   newList ;
                while ( *objectDef != -1 ) {
                    newList *= <IDENT,PTREE(CompactItoa(*objectDef))>;
                    objectDef++ ;
                }
                while ( (elem = nextl(list)) ) 
                    newList *= copytree(elem);
                list =  newList ;
                elem =  nextl(list);
            }
            tot     =  atoi(Value(elem));
            elem    =  nextl(list);
            tot     =  tot * 40 + atoi(Value(elem));
            content =  Encode128(tot);
            first   =  false ;
        } else 
            content += Encode128(atoi(Value(elem)));
    }
    
    // add length to string
    EncodeLength(string, content.length());
    
    // add content to string
    string += content ;
}

void GenGramm::EncodeBoolean ( EString &string, bool boolean )
{
    
    // put tag and length
    string += "\001\001";
    
    // put content
    if ( boolean ) 
        string += (char)0xff ;
    else 
        string += (char)0 ;
}

void GenGramm::EncodeIA5String ( EString &string, EString valString )
{
    
    // if necessary put tag
    string += '\026';
    
    // add length to string
    EncodeLength(string, valString.length());
    
    // add content to string
    string += valString ;
}

void GenGramm::EncodeRealString ( EString &string, EString valString )
{
    
    // if necessary put tag
    string += '\011';
    
    // add length to string
    EncodeLength(string, valString.length() + 1);
    
    // real is encoded NR3
    string += '\003';
    
    // add content to string
    string += valString ;
}

void GenGramm::EncodeRealString ( EString &string, PTREE &tree )
{
    if ( tree == <STRING> ) {
        EString valString (Value(tree)) ;
        EncodeRealString(string, DecodeOctetString(valString));
    } else {
        EncodeRealString(string, Value(tree));
    }
}

void GenGramm::EncodeIA5String ( EString &string, PTREE &tree )
{
    if ( tree == <HSTRING> ) {
        EString valString (Value(tree)) ;
        EncodeIA5String(string, ConvertStringToBin(valString));
    } else {
        EncodeIA5String(string, Value(tree));
    }
}

void GenGramm::EncodeOctetString ( EString &string, EString valString )
{
    
    // if necessary put tag
    string += '\004';
    
    // add length to string
    EncodeLength(string, valString.length() / 2);
    
    // add content to string
    string += ConvertStringToBin(valString);
}

void GenGramm::EncodeOctetString ( EString &string, PTREE &tree )
{
    if ( tree == <STRING> ) {
        EString valString (Value(tree)) ;
        EncodeOctetString(string, DecodeOctetString(valString));
    } else {
        EncodeOctetString(string, Value(tree));
    }
}

void GenGramm::EncodeNullType ( EString &string )
{
    
    //  put tag  
    string += '\005';
    
    // put length
    string += '\0';
}

void GenGramm::EncodeEnumerated ( EString &string, Enumerated enumerated [], EString val )
{
    
    int         enumeratedIndex ;            // index for enumerated
    
    // search it in array
    Enumerated  *ptEnumerated = enumerated ; // pointer on enumerated array
    
    while ( (*ptEnumerated)[1] ) {
        
        // if found valid index
        if ( val == (*ptEnumerated)[1] ) {
            void    *ptInt = &(*ptEnumerated)[0];
            
            //             EncodeInteger(string, (int)((*ptEnumerated)[0]));
            // ELV 2012
            EncodeInteger(string, *((int *)ptInt));
            return ;
        }
        ptEnumerated++ ;
    }
}

void GenGramm::EncodeBitString ( EString &string, Enumerated enumeratedRef [], Enumerated enumeratedVal [] )
{
    
    // put values in enumerated val
    
    Enumerated  *ptEnumeratedVal = enumeratedVal ; // pointer on enumerated array
    int         maxIndex = -1 ;                    // max index for bits
    EString     resultString ;                     // result string
    
    // if there is no enumerated ref transmit directly bit string
    if ( enumeratedRef [0][1] ) {
        while ( (*ptEnumeratedVal)[1] ) {
            char    *valString ; // the val string
            valString =  (*ptEnumeratedVal)[1];
            
            // search the string in ref array
            Enumerated  *ptEnumeratedRef = enumeratedRef ; // pointer on enumerated array
            while ( (*ptEnumeratedRef)[1] ) {
                
                // if found valid index store it
                if ( !strcmp(valString, (*ptEnumeratedRef)[1]) ) {
                    int     valIndex ; // value of current index
                    void    *ptInt = &(*ptEnumeratedRef)[0];
                    (*ptEnumeratedVal)[0] =  (*ptEnumeratedVal)[0];
                    
                    //                    valIndex = (int)((*ptEnumeratedVal)[0]);
                    // ELV 2012
                    valIndex              =  *((int *)ptInt);
                    if ( valIndex > maxIndex ) 
                        maxIndex =  valIndex ;
                    break ;
                }
                ptEnumeratedRef++ ;
            }
            ptEnumeratedVal++ ;
        }
        
        // construct resulting string
        int indexBit ; // index on bits
        
        // while there are some bits to encode, encode them
        for ( indexBit = 0 ; indexBit <= maxIndex ; indexBit++ ) {
            
            // search if value is set
            // search it in array
            Enumerated  *ptEnumerated = enumeratedVal ; // pointer on enumerated array
            bool        foundBit = false ;
            while ( (*ptEnumerated)[1] ) {
                void    *ptInt = &(*ptEnumerated)[0];
                
                // if found valid index
                //                if ( indexBit == (int)((*ptEnumerated)[0]) ) {
                // ELV 2012
                if ( indexBit == *((int *)ptInt) ) {
                    resultString += '1';
                    foundBit     =  1 ;
                    break ;
                }
                ptEnumerated++ ;
            }
            if ( !foundBit ) 
                resultString += '0';
        }
    } else 
        resultString =  enumeratedVal [0][1];
    
    // round number of bits to byte limit
    unsigned int    missingBits = 8 - resultString.length() % 8 ;
    
    if ( missingBits == 8 ) 
        missingBits =  0 ;
    
    unsigned int    padding = missingBits ;
    
    while ( missingBits-- ) 
        resultString += '0';
    
    // construct result
    string += '\003';
    
    // put length
    EncodeLength(string, 1 + resultString.length() / 8);
    
    // put missing bits number
    string += EncodeHexa(padding);
    
    // encode the string
    
    unsigned int    index ;           // index in string
    int             byteCounter = 0 ; // counter for bytes
    char            currChar = '\0';  // current character
    
    for ( index = 0 ; index < resultString.length() ; index++ ) {
        
        // insert new bit
        currChar <<= 1 ;
        if ( resultString [index] == '1' ) {
            currChar |= 0x1 ;
        }
        byteCounter++ ;
        
        // if a byte is done insert it in result
        if ( byteCounter == 8 ) {
            string      += currChar ;
            currChar    =  '\0';
            byteCounter =  0 ;
        }
    }
}

void GenGramm::PutConstructed ( EString &string, bool state )
{
    char    *ptString = (char *)(string.c_str());
    
    // put constructed flag or suppress it
    if ( state ) {
        *ptString |= 0x20 ;
    } else {
        *ptString &= ~0x20 ;
    }
}

unsigned int GenGramm::LengthTag ( EString &string )
{
    char            *pt = (char *)(string.c_str());
    unsigned int    length = 1 ;
    
    // compute length 
    char            comp = *pt++ & 0x3F ;
    
    if ( comp == 0x3F ) {
        length++ ;
        while ( *pt++ & 0x80 ) 
            length++ ;
    }
    
    // return it
    return length ;
}

#define EXTERN_FUNC_VOID extern "C" _declspec(dllimport) void 
#define EXTERN_FUNC_PTREE extern "C" _declspec(dllimport) PPTREE 

extern void                 (*FctMetaExit)(int, const char *) ;
extern TabSortString        (*ptStackString)[];
extern TabSortEqual<TREE>   (*ptStackPtree)[];
extern bool                 *ptStackInitialized ;
extern int                  *ptTabPtPos ;
extern PPTREE               *ptTabPt ;

typedef void    (*INITIALIZER_FUNCT)(char *metaName, TabSortString *(*pptStackString), TabSortEqual<TREE> *(*pptStackPtree), bool *pptStackInitialized
                , void(*ptMetaExit)(int, const char *), int *, PPTREE *) ;

// LoadGramm : try to load library for a grammar
// parameters :
//              name : name of grammar
// return : tells if success
bool GenGramm::LoadGramm ( EString &name, EString metaName )
{
#   if defined(UNIX_DLL)
#       define HINSTANCE void *
#       define GetProcAddress dlsym
#   endif
    
    EString fileDll ; // file name for the dll
    
    // construct dll name and try to load it
    fileDll =  name ;
    //if ( access(fileDll.c_str(), 0) ) 
    //    return false ;
    HINSTANCE   hInst ;
    
#   if defined(UNIX_DLL)
        fileDll =  EString("lib") + fileDll + ".so";
        hInst   =  dlopen(fileDll.c_str(), RTLD_LAZY);
#   else 
        fileDll += ".dll";
        hInst   =  LoadLibrary(fileDll.c_str());
#   endif
    if ( hInst != 0 ) {
        EString initializerName(""); // name of initializer
        initializerName =  name + "SetParam";
        
        // in linux real shared libraries
#       if defined(W_DLL)
            {
                
                // set interpreter and thread control for library
                INITIALIZER_FUNCT   ptDefFunc = (INITIALIZER_FUNCT)GetProcAddress(hInst, initializerName.c_str());
                if ( ptDefFunc ) {
                    char    *name = (char *)metaName.c_str();
                    (*ptDefFunc)(name, (TabSortString *(*))ptStackString, (TabSortEqual<TREE> *(*))ptStackPtree, ptStackInitialized, &MetaExit, ptTabPtPos, ptTabPt);
                }
            }
#       endif
        
        // retrieve functions
        {
            
            // get name of functions
            EString encoderName("");  // name of encoder
            EString decoderName("");  // name of decoder
            encoderName    =  name + "RootEncode";
            decoderName    =  name + "RootDecode";
            
            // retrieve the functions
            pvDecoderFunct =  (DECODER_FUNCT)GetProcAddress(hInst, decoderName.c_str());
            pvEncoderFunct =  (ENCODER_FUNCT)GetProcAddress(hInst, encoderName.c_str());
        }
    } else {
#       if defined(UNIX_DLL)
            EString theError = dlerror();
#       endif
        return false ;
    }
    
    // success
    return true ;
}


