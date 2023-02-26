#ifndef ERL_STRING
#   define ERL_STRING 1
#   define STRING_QUANT 32
#   ifndef STRING_BASIC
#       define STRING_BASIC STRING_QUANT-1
#   endif
#   include <stdlib.h>
#   ifdef ON_W
#       include <string>
#   else 
#       include <string.h>
#   endif
#   include <ctype.h>
#   define IN_ERLSTRING 1
#   include "smtoken.h"
#   undef IN_ERLSTRING
#   include <iostream>
#   include <sstream>
#   include <iomanip>
#   include <limits>
    
    /* LF 04/10/2000 */
#   if 0
        extern "C" {
        
            char    *MallocString (int size) ;
            void    FreeString (char *string, int length) ;
        }
#   endif
    
    template <unsigned int basicSize> 
        
        class EStringRoot {
            
            public :
            
                EStringRoot ( bool mallocString = true )
                    : pvStart(0),  allocated(false)
                {
                    pvLength =  0 ;
                    pvSize   =  0 ;
                    if ( mallocString ) {
                        Malloc(1);
                    } else 
                        pvString =  0 ;
                }
                
                EStringRoot ( const char *val, int siz )
                {
                    CreateString(val, siz);
                }
                
                EStringRoot ( const char *val )
                {
                    if ( val ) 
                        CreateString(val, strlen(val));
                    else 
                        CreateString(val, 0);
                }
                
                EStringRoot ( const EStringRoot &str )
                {
                    CreateString(str.c_str(), str.length());
                }
                
                EStringRoot ( std::string str )
                {
                    CreateString(str.c_str(), str.length());
                }
                
                EStringRoot ( char c )
                {
                    CreateString((char *)&c, 1);
                }
                
                EStringRoot ( unsigned char c )
                {
                    CreateString((char *)&c, 1);
                }
                
                void CreateString ( const char *val, unsigned int siz )
                {
                    if ( !val ) 
                        siz =  0 ;
                    Malloc(siz + 1);
                    if ( val ) {
                        if ( siz ) 
                            memcpy(pvString, val, siz);
                        pvLength =  siz ;
                    }
                    *(pvString + pvLength) =  '\0';
                }
                
                EStringRoot ( int value )
                {
                    unsigned int    size ;
                    
                    Malloc(size = 30);
                    
                    char    *pValue = ItoaQuick(value, pvString, size);
                    
                    pvStart =  pValue - pvString ;
                    if ( pvStart != 0 ) 
                        pvLength =  size - pvStart - 1 ;
                    else 
                        pvLength =  strlen(pvString);
                }
                
                EStringRoot ( unsigned int value )
                {
                    unsigned int    size ;
                    
                    Malloc(size = 30);
                    
                    char    *pValue = ItoaQuick(value, pvString, size);
                    
                    pvStart =  pValue - pvString ;
                    if ( pvStart != 0 ) 
                        pvLength =  size - pvStart - 1 ;
                    else 
                        pvLength =  strlen(pvString);
                }
                
                EStringRoot ( long value )
                {
                    unsigned int    size ;
                    
                    Malloc(size = 30);
                    
                    char    *pValue = LtoaQuick(value, pvString, size);
                    
                    pvStart =  pValue - pvString ;
                    if ( pvStart != 0 ) 
                        pvLength =  size - pvStart - 1 ;
                    else 
                        pvLength =  strlen(pvString);
                }
                
                EStringRoot ( long long value )
                {
                    std::string pValue = std::to_string(value);
                    
                    Malloc((pValue.length()) + 1);
                    pvLength = pValue.length();
                    if ( pvLength ) 
                        memcpy(pvString, pValue.c_str(), pvLength);
                    *(pvString + pvLength) =  0 ;
                }
                
                EStringRoot ( float value )
                {
                    std::ostringstream  stm ;
                    
                    stm << std::setprecision(std::numeric_limits<float> ::digits10 + 5) << value ;
                    
                    std::string pValue = stm.str();
                    
                    Malloc((pValue.length()) + 1);
                    pvLength = pValue.length();
                    if ( pvLength ) 
                        memcpy(pvString, pValue.c_str(), pvLength);
                    *(pvString + pvLength) =  0 ;
                }
                
                EStringRoot ( double value )
                {
                    std::ostringstream  stm ;
                    
                    stm << std::setprecision(std::numeric_limits<double> ::digits10 + 5) << value ;
                    
                    std::string pValue = stm.str();
                    
                    Malloc((pValue.length()) + 1);
                    pvLength = pValue.length();
                    if ( pvLength ) 
                        memcpy(pvString, pValue.c_str(), pvLength);
                    *(pvString + pvLength) =  0 ;
                }
                
                EStringRoot ( long double value )
                {
                    std::ostringstream  stm ;
                    
                    stm << std::setprecision(std::numeric_limits<long double> ::digits10 + 5) << value ;
                    
                    std::string pValue = stm.str();
                    
                    Malloc((pValue.length()) + 1);
                    pvLength = pValue.length();
                    if ( pvLength ) 
                        memcpy(pvString, pValue.c_str(), pvLength);
                    *(pvString + pvLength) =  0 ;
                }
                
                virtual ~EStringRoot ()
                {
                    Free();
                }
                
                EStringRoot &Assign ( const char *str, unsigned int siz )
                {
                    if ( !str || siz == 0 ) {
                        Free();
                        return *this ;
                    }
                    if ( pvSize < siz + 1 || !pvString ) {
                        Free();
                        Malloc(siz + 1);
                    } else if ( siz < STRING_QUANT && pvSize > 6 * STRING_QUANT ) {
                        
                        // limit growth of string
                        Free();
                        Malloc(6 * STRING_QUANT);
                    }
                    pvStart  =  0 ;
                    pvLength =  siz ;
                    memcpy(pvString, str, siz);
                    *(pvString + pvLength) =  '\0';
                    return *this ;
                }
                
                virtual EStringRoot &operator= ( const EStringRoot &stlString )
                {
                    if ( this == &stlString ) 
                        return *this ;
                    return Assign(stlString.c_str(), stlString.length());
                }
                
                virtual EStringRoot &operator= ( const char *str )
                {
                    if ( str == (char *)0 ) 
                        return Assign(str, 0);
                    else 
                        return Assign(str, strlen(str));
                }
                
                virtual EStringRoot &operator= ( char c )
                {
                    return Assign((char *)&c, 1);
                }
                
                virtual EStringRoot &operator= ( unsigned char c )
                {
                    return Assign((char *)&c, 1);
                }
                
                virtual EStringRoot &prepend ( const char *val, unsigned int length )
                {
                    if ( !val || length == 0 ) 
                        return *this ;
                    
                    // alloc
                    if ( pvStart < length || pvStart + pvLength >= pvSize || !pvString ) {
                        if ( pvLength > 0 ) 
                            Realloc(length + pvLength + 1, c_str(), -((int)pvLength) - 1);
                        else {
                            Malloc(length + 1);
                            
                            // if string empty pvStart is not positionned put it on the zero
                            pvStart =  pvSize - 1 ;
                        }
                    }
                    
                    // copy data
                    pvStart  -= length ;
                    pvLength += length ;
                    memcpy((char *)c_str(), val, length);
                    *((char *)c_str() + pvLength) =  '\0';
                    return *this ;
                }
                
                virtual EStringRoot &prepend ( const char val )
                {
                    return prepend((char *)&val, 1);
                }
                
                virtual EStringRoot &prepend ( const unsigned char val )
                {
                    return prepend((char *)&val, 1);
                }
                
                virtual EStringRoot &prepend ( const char *val )
                {
                    unsigned int    length ;
                    
                    if ( !val ) 
                        return *this ;
                    return prepend(val, strlen(val));
                }
                
                virtual EStringRoot &prepend ( const unsigned char *val )
                {
                    return prepend((const char *)val);
                }
                
                virtual EStringRoot &prepend ( const unsigned char *val, unsigned int length )
                {
                    return prepend((const char *)val, length);
                }
                
                virtual EStringRoot &prepend ( const EStringRoot &val )
                {
                    return prepend(val.c_str(), val.length());
                }
                
                virtual EStringRoot at ( int deb, unsigned int len ) const
                {
                    if ( !pvString ) 
                        return c_str();
                    if ( deb < 0 ) {
                        len =  (unsigned int)( -deb);
                        deb += length();
                        if ( deb < 0 ) {
                            deb =  0 ;
                            len =  length();
                        }
                    }
                    if ( (unsigned int)deb >= length() ) 
                        deb =  length();
                    if ( deb + len > length() ) 
                        len =  length() - deb ;
                    return EStringRoot<basicSize> (c_str() + deb, len);
                }
                
                virtual EStringRoot at ( int deb ) const
                {
                    int lg = length() - deb ;
                    
                    if ( deb < 0 ) {
                        lg  =  -deb ;
                        deb += length();
                        if ( deb < 0 ) {
                            deb =  0 ;
                            lg  =  length();
                        }
                    }
                    if ( lg < 0 ) 
                        lg =  0 ;
                    return at(deb, (unsigned int)lg);
                }
                
                EStringRoot &Append ( const char *str, unsigned int length )
                {
                    if ( !str || length == 0 ) 
                        return *this ;
                    if ( pvStart + pvLength + length + 1 > pvSize || !pvString ) {
                        Realloc(pvLength + length + 1, c_str(), pvLength);
                    }
                    
                    char    *ptStr ;
                    
                    if ( length == 1 ) {
                        ptStr  =  (char *)c_str() + pvLength ;
                        *ptStr =  *str ;
                        pvLength++ ;
                    } else if ( length > 0 ) {
                        memcpy((char *)c_str() + pvLength, str, length);
                        pvLength += length ;
                    }
                    ptStr  =  (char *)c_str() + pvLength ;
                    *ptStr =  '\0';
                    return *this ;
                }
                
                virtual EStringRoot &operator+= ( const char *str )
                {
                    if ( !str ) 
                        return Append(str, 0);
                    else 
                        return Append(str, strlen(str));
                }
                
                virtual EStringRoot &operator+= ( const unsigned char *str )
                {
                    if ( !str ) 
                        return Append((const char *)str, 0);
                    else 
                        return Append((const char *)str, strlen((const char *)str));
                }
                
                virtual EStringRoot &operator+= ( const EStringRoot &str )
                {
                    return Append(str.c_str(), str.length());
                }
                
                virtual EStringRoot &operator+= ( const char c )
                {
                    return Append((const char *)&c, 1);
                }
                
                virtual EStringRoot &operator+= ( const unsigned char c )
                {
                    return Append((const char *)&c, 1);
                }
                
                virtual EStringRoot &operator+= ( const int i )
                {
                    EStringRoot<basicSize>  val (i) ;
                    
                    return operator+= (val);
                }
                
                virtual EStringRoot &operator+= ( const long value )
                {
                    EStringRoot<basicSize>  val (value) ;
                    
                    return operator+= (val);
                }
                
                virtual EStringRoot &operator+= ( const INT_64 value )
                {
                    
                    //  *this += CompactLtoa(value);
                    //  return *this ;
                    EStringRoot<basicSize>  val (value) ;
                    
                    return operator+= (val);
                }
                
                virtual EStringRoot &operator+= ( const float value )
                {
                    EStringRoot<basicSize>  val (value) ;
                    
                    return operator+= (val);
                }
                
                virtual EStringRoot &operator+= ( const double value )
                {
                    EStringRoot<basicSize>  val (value) ;
                    
                    return operator+= (val);
                }
                
                virtual EStringRoot operator+ ( const char *str ) const
                {
                    EStringRoot<basicSize>  result(*this);
                    
                    result += str ;
                    return result /*EStringRoot(result)*/ ;
                }
                
                virtual EStringRoot operator+ ( const char c ) const
                {
                    EStringRoot<basicSize>  result(*this);
                    
                    result += c ;
                    return result /*EStringRoot(result)*/ ;
                }
                
                virtual EStringRoot operator+ ( const unsigned char c ) const
                {
                    return *this + (char)c ;
                }
                
                virtual EStringRoot operator+ ( const EStringRoot &str ) const
                {
                    EStringRoot<basicSize>  result(*this);
                    
                    result += str.c_str();
                    return result /*EStringRoot(result)*/ ;
                }
                
                virtual EStringRoot operator+ ( const int i ) const
                {
                    EStringRoot<basicSize>  result(*this);
                    
                    return result + CompactItoa(i);
                }
                
                virtual EStringRoot operator+ ( const long value ) const
                {
                    EStringRoot<basicSize>  result(*this);
                    
                    return result + CompactLtoa(value);
                }
                
                virtual EStringRoot operator+ ( const INT_64 value ) const
                {
                    EStringRoot<basicSize>  result(*this);
                    
                    return result + CompactLtoa(value);
                }
                
                virtual EStringRoot operator+ ( const float value ) const
                {
                    char                    tmp [80];
                    EStringRoot<basicSize>  result(*this);
                    
                    sprintf(tmp, "%f", value);
                    return result + (char *)tmp ;
                }
                
                virtual EStringRoot operator+ ( const double value ) const
                {
                    char                    tmp [80];
                    EStringRoot<basicSize>  result(*this);
                    
                    sprintf(tmp, "%f", value);
                    return result + (char *)tmp ;
                }
                
                const char *c_str () const
                {
                    static const char   *nullString = "";
                    
                    if ( !pvString ) 
                        return nullString ;
                    else 
                        return pvString + pvStart ;
                }
                
                operator const char *() const
                {
                    if ( !pvString ) 
                        return "";
                    else 
                        return c_str();
                }
                
                operator std::string () const
                {
                    if ( !pvString ) 
                        return std::string("");
                    else 
                        return std::string(c_str());
                }
                
                unsigned int length () const
                {
                    return pvLength ;
                }
                
                void length ( unsigned int val )
                {
                    if ( pvStart + val <= pvSize ) 
                        pvLength =  val ;
                }
                
                virtual void Free ()
                {
                    if ( allocated /*not basicArray */ ) {
                        
                        /* 1 */
                        FreeString(pvString, pvSize - 1);
                        allocated =  false ;
                    }
                    Malloc(1);
                }
                
                /*r string*/
                // parameters : 
                //              size : new size
                virtual void Malloc ( unsigned int size )
                {
                    pvStart  =  0 ;
                    pvLength =  0 ;
                    if ( size <= 0 ) 
                        size =  1 ;
                    if ( size <= basicSize ) {
                        pvString  =  pvBasicArray ;
                        pvSize    =  basicSize ;
                        allocated =  false ;
                    } else {
                        pvString  =  MallocString(pvSize = size);
                        allocated =  true ;
                    }
                    *pvString =  '\0';
                }
                
                // Realloc : realloc the string
                //           size : new size
                //           paramNewString : string to be copied inside 
                //           lgth : store it starting from end if not 0
                virtual void Realloc ( unsigned int size, const char *paramNewString, int lgth )
                {
                    
                    char            *newString =0;   // new string
                    int             bigOffset(0);  // offset for big strings
                    unsigned int    absLgth = lgth < 0 ? -lgth : lgth ;
                    
                    if ( size <= 0 ) 
                        size =  1 ;
                    if ( size < absLgth + 1 ) 
                        size =  absLgth + 1 ;
                    if ( size > 300 * STRING_QUANT ) {
                        bigOffset =  300 * STRING_QUANT ;
                    }
                    
                    // create a copy of stlString if lgth > 0 copy
                    // at beginning otherwise at end
                    newString =  MallocString(size + STRING_QUANT + bigOffset);
                    
                    unsigned int    newStart = 0 ;
                    
                    if ( paramNewString ) {
                        if ( lgth > 0 ) {
                            memcpy(newString, paramNewString, lgth);
                            newStart            =  0 ;
                            *(newString + lgth) =  '\0';
                        } else if ( lgth < 0 ) {
                            memcpy(newString + size + STRING_QUANT + bigOffset + lgth - 1, paramNewString, -lgth);
                            newStart                                           =  STRING_QUANT + size + bigOffset + lgth - 1 ;
                            *(newString + STRING_QUANT + size + bigOffset - 1) =  '\0';
                        } else 
                            newStart =  0 ;
                    } else 
                        lgth =  0 ;
                    
                    // free old
                    Free();
                    
                    // set new 
                    {
                        
                        // insert copy here
                        pvString  =  newString ;
                        pvLength  =  lgth ;
                        pvStart   =  newStart ;
                        pvSize    =  size + STRING_QUANT + bigOffset ;
                        
                        // string was allocated
                        allocated =  true ;
                    }
                }
                
                // Resize : resize string 
                //          size : new size
                virtual void Resize ( unsigned int size )
                {
                    Realloc(size, c_str(), pvLength);
                }
                
                // Size : gives size
                // return : size of string
                virtual unsigned int Size ()
                {
                    return pvSize ;
                }
                
                virtual void CutFront ( unsigned int length )
                {
                    if ( length <= pvLength ) {
                        pvStart  += length ;
                        pvLength -= length ;
                    }
                }
                
                EStringRoot substring ( int deb, int len ) const
                {
                    return at(deb, len);
                }
                
                EStringRoot substring ( int deb ) const
                {
                    return at(deb);
                }
                
                virtual EStringRoot &operator<< ( const char *str )
                {
                    *this += str ;
                    return *this ;
                }
                
                virtual EStringRoot &operator<< ( const EStringRoot &str )
                {
                    *this += str ;
                    return *this ;
                }
                
                virtual EStringRoot &operator<< ( const char c )
                {
                    *this += c ;
                    return *this ;
                }
                
                virtual EStringRoot &operator<< ( const unsigned char c )
                {
                    *this << (char)c ;
                    return *this ;
                }
                
                virtual EStringRoot &operator<< ( const int i )
                {
                    *this += i ;
                    return *this ;
                }
                
                virtual EStringRoot &operator<< ( const long value )
                {
                    *this += value ;
                    return *this ;
                }
                
                virtual EStringRoot &operator<< ( const INT_64 value )
                {
                    *this += value ;
                    return *this ;
                }
                
                virtual EStringRoot &operator<< ( const float value )
                {
                    *this += value ;
                    return *this ;
                }
                
                virtual EStringRoot &operator<< ( const double value )
                {
                    *this += value ;
                    return *this ;
                }
                
                bool operator== ( const char *str ) const
                {
                    unsigned int    length ;
                    
                    if ( !str ) 
                        return this->length() == 0 ;
                    else 
                        length =  strlen(str);
                    if ( this->length() == length ) {
                        if ( length == 0 ) 
                            return true ;
                        else 
                            return !memcmp(c_str(), str, length);
                    }
                    return false ;
                }
                
                bool operator!= ( const char *str ) const
                {
                    return !operator== (str);
                }
                
                bool operator== ( const EStringRoot &str ) const
                {
                    if ( length() == str.length() ) {
                        if ( length() == 0 ) 
                            return true ;
                        else 
                            return !memcmp(c_str(), str.c_str(), pvLength);
                    }
                    return false ;
                }
                
                bool operator!= ( const EStringRoot &str ) const
                {
                    return !operator== (str);
                }
                
                bool operator< ( const EStringRoot &str ) const
                {
                    unsigned int    shtLength = length(); // length of shorter string
                    
                    if ( str.length() < shtLength ) {
                        shtLength =  str.length();
                    }
                    if ( str.length() == length() ) {
                        if ( shtLength == 0 ) 
                            return false ;
                    } else {
                        if ( length() == 0 ) 
                            return true ;
                        else if ( str.length() == 0 ) 
                            return false ;
                    }
                    
                    int comp ; // result of comparison
                    
                    // if different return result
                    if ( (comp = memcmp(c_str(), str.c_str(), shtLength)) ) {
                        return comp < 0 ;
                    } else {
                        
                        // true if only the first is shorter
                        return shtLength < str.length();
                    }
                }
                
                bool operator<= ( const EStringRoot &str ) const
                {
                    unsigned int    shtLength = length(); // length of shorter string
                    
                    if ( str.length() < shtLength ) {
                        shtLength =  str.length();
                    }
                    if ( str.length() == length() ) {
                        if ( shtLength == 0 ) 
                            return true ;
                    } else {
                        if ( length() == 0 ) 
                            return false ;
                        else if ( str.length() == 0 ) 
                            return false ;
                    }
                    
                    int comp ; // result of comparison
                    
                    // if different return result
                    if ( (comp = memcmp(c_str(), str.c_str(), shtLength)) ) {
                        return comp <= 0 ;
                    } else {
                        
                        // true if only the first is shorter
                        return length() == shtLength ;
                    }
                }
                
                bool operator> ( const EStringRoot &str ) const
                {
                    unsigned int    shtLength = length(); // length of shorter string
                    
                    if ( str.length() < shtLength ) {
                        shtLength =  str.length();
                    }
                    if ( str.length() == length() ) {
                        if ( shtLength == 0 ) 
                            return false ;
                    } else {
                        if ( length() == 0 ) 
                            return false ;
                        else if ( str.length() == 0 ) 
                            return true ;
                    }
                    
                    int comp ; // result of comparison
                    
                    // if different return result
                    if ( (comp = memcmp(c_str(), str.c_str(), shtLength)) ) {
                        return comp > 0 ;
                    } else {
                        
                        // true if only the first is longer
                        return length() != shtLength ;
                    }
                }
                
                bool operator>= ( const EStringRoot &str ) const
                {
                    unsigned int    shtLength = length(); // length of shorter string
                    
                    if ( str.length() < shtLength ) {
                        shtLength =  str.length();
                    }
                    if ( str.length() == length() ) {
                        if ( shtLength == 0 ) 
                            return true ;
                    } else {
                        if ( length() == 0 ) 
                            return false ;
                        else if ( str.length() == 0 ) 
                            return true ;
                    }
                    
                    int comp ; // result of comparison
                    
                    // if different return result
                    if ( (comp = memcmp(c_str(), str.c_str(), shtLength)) ) {
                        return comp >= 0 ;
                    } else {
                        
                        // true if only the second is shorter
                        return str.length() == shtLength ;
                    }
                }
                
                virtual char operator[] ( unsigned int pos ) const
                {
                    if ( pos < length() ) 
                        return *(c_str() + pos);
                    return '\0';
                }
                
                virtual char operator[] ( int pos ) const
                {
                    if ( pos < (int)(length()) && pos >= 0 ) 
                        return *(c_str() + pos);
                    return '\0';
                }
                
                EStringRoot &ToUpper ( int start = 0, int length = -1 )
                {
                    
                    // check parameters
                    if ( length == -1 ) 
                        length =  this->length();
                    if ( start < 0 ) 
                        start =  0 ;
                    if ( length + start > (int)(this->length()) ) {
                        length =  this->length() - start ;
                    }
                    
                    // convert string
                    char    *strPt = (char *)c_str();
                    int     index ;
                    
                    for ( index = start ; index < start + length ; index++ ) {
                        *(strPt + index) =  toupper(*(strPt + index));
                    }
                    
                    // return string
                    return *this ;
                }
                
                EStringRoot &ToLower ( int start = 0, int length = -1 )
                {
                    
                    // check parameters
                    if ( length == -1 ) 
                        length =  this->length();
                    if ( start < 0 ) 
                        start =  0 ;
                    if ( (unsigned)(length + start) > this->length() ) {
                        length =  this->length() - start ;
                    }
                    
                    // convert string
                    char    *strPt = (char *)c_str();
                    int     index ;
                    
                    for ( index = start ; index < start + length ; index++ ) {
                        *(strPt + index) =  tolower(*(strPt + index));
                    }
                    
                    // return string
                    return *this ;
                }
                
                friend std::ostream &operator<< ( std::ostream &os, const EStringRoot &str )
                {
                    os << str.c_str();
                    return (os);
                }
                
                friend std::ostream &operator<< ( std::ostream &os, const EStringRoot *str )
                {
                    if ( str != 0 ) {
                        os << str->c_str();
                    }
                    return (os);
                }
                
                // ReplaceString : replace a string by another one
                // parameters :
                //               ref : reference string
                //               replacement : replacement string
                //               onlyWord : replace only word
                inline EStringRoot  &ReplaceString (const EStringRoot &ref, const EStringRoot &replacement, bool onlyWord = false) ;
                
                // Hexa : construct hexa representation of string
                EStringRoot Hexa () const
                {
                    EStringRoot<basicSize>  result ;
                    unsigned int            pos ;
                    char                    hexa [10];
                    
                    for ( pos = 0 ; pos < pvLength ; pos++ ) {
                        int val = (*this)[pos];
                        sprintf((char *)hexa, "0x%.2x ", val & 0xff);
                        result << (char *)hexa ;
                    }
                    return result ;
                }
            
            protected :
            
                bool            allocated ;
                char            *pvString ;
                unsigned int    pvLength ;
                unsigned int    pvSize ;
                unsigned int    pvStart ;
                char            pvBasicArray [basicSize + 1];
        };
    typedef EStringRoot<STRING_BASIC>   EString ;
    
    class VString : public EString {
        
        public :
        
            VString ()
                : EString()
            {}
            
            VString ( const char *val, unsigned int siz )
                : EString((bool)false)
            {
                if ( !val ) {
                    Malloc(1);
                    pvLength =  0 ;
                    return ;
                }
                pvLength =  siz ;
                pvString =  (char *)val ;
                pvStart  =  pvSize = 0 ;
            }
            
            VString ( const char *val, unsigned int start, unsigned int siz )
                : EString((bool)false)
            {
                if ( !val ) {
                    Malloc(1);
                    pvLength =  0 ;
                    return ;
                } else 
                    pvLength =  siz ;
                pvString =  (char *)val ;
                pvStart  =  start ;
                pvLength =  siz ;
                pvSize   =  0 ;
            }
            
            VString ( const char *val )
                : EString((bool)false)
            {
                if ( !val ) {
                    Malloc(1);
                    pvLength =  0 ;
                    return ;
                } else 
                    pvLength =  strlen(val);
                if ( pvLength ) 
                    pvString =  (char *)val ;
                else 
                    pvString =  0 ;
                pvStart =  pvSize = 0 ;
            }
            
            VString ( const EString &str )
                : EString((bool)false)
            {
                pvString =  (char *)str.c_str();
                pvLength =  str.length();
                pvStart  =  pvSize = 0 ;
            }
            
            VString ( const EString &str, unsigned int siz )
                : EString((bool)false)
            {
                pvString =  (char *)str.c_str();
                if ( str.length() > siz ) 
                    pvLength =  siz ;
                else 
                    pvLength =  str.length();
                pvStart =  pvSize = 0 ;
            }
            
            VString ( const VString &str )
                : EString((bool)false)
            {
                pvString =  (char *)str.c_str();
                pvLength =  str.length();
                pvStart  =  pvSize = 0 ;
            }
            
            VString ( const VString &str, unsigned int siz )
                : EString((bool)false)
            {
                pvString =  (char *)str.c_str();
                if ( str.length() > siz ) 
                    pvLength =  siz ;
                else 
                    pvLength =  str.length();
                pvStart =  pvSize = 0 ;
            }
            
            virtual ~VString () {}
            
#           if 1
                virtual EString &operator= ( const VString &str )
                {
                    Free();
                    pvString =  (char *)str.c_str();
                    pvLength =  str.length();
                    pvStart  =  pvSize = 0 ;
                    return *this ;
                }
                
                virtual EString &operator= ( const EString &str )
                {
                    Free();
                    pvString =  (char *)str.c_str();
                    pvLength =  str.length();
                    pvStart  =  pvSize = 0 ;
                    return *this ;
                }
                
                virtual EString &operator= ( const char *str )
                {
                    Free();
                    if ( !str ) {
                        Malloc(1);
                        return *this ;
                    } else 
                        pvLength =  strlen(str);
                    if ( pvLength ) 
                        pvString =  (char *)str ;
                    else 
                        Malloc(1);
                    pvStart =  pvSize = 0 ;
                    return *this ;
                }
#           endif
        
        private :
        
            VString ( char c )
            {
                CreateString((char *)&c, 1);
                // pvLength =  1 ;
                // pvString =  (char *)&c ;
                // pvStart  =  pvSize = 0 ;
            }
            
#           if 0
                VString &operator= ( char c )
                {
                    pvLength =  pvStart = 0 ;
                    pvString =  0 ;
                    return *this ;
                }
#           endif
    };
    
    class LessString {
        
        public :
        
            LessString () {}
            
            ~LessString () {}
            
            bool operator() ( const EString &x, const EString &y ) const
            {
                return (x).EString::operator< (y);
            }
    };
    
    // ReplaceString : replace a string by another one
    // parameters :
    //               ref : reference string
    //               replacement : replacement string
    //               onlyWord : replace only word
    template <unsigned int basicSize> 
        EStringRoot<basicSize> &EStringRoot<basicSize> ::ReplaceString ( const EStringRoot &ref, const EStringRoot &replacement, bool onlyWord )
        {
            EString result ;
            char    *pt = (char *)(c_str());
            char    *foundStr ;
            
            // make sure that string is terminated by a \0
            if ( length() + 1 >= pvSize - pvStart || *(c_str() + length()) != '\0' ) {
                if ( length() + 1 > pvSize - pvStart ) {
                    Realloc(length() + 1, c_str(), length());
                }
                *((char *)(c_str()) + length()) =  '\0';
                pt                              =  (char *)(c_str());
            }
            
            // do the replacements
            while ( (foundStr = strstr(pt, ref.c_str())) && foundStr + ref.length() <= c_str() + length() ) {
                result += VString(pt, foundStr - pt);
                
                // if next character or previous character is a character which can appear in an ident do not make the subsitution
                char    nextChar ;
                char    prevChar ;
                if ( foundStr > c_str() ) {
                    prevChar =  *(foundStr - 1);
                } else 
                    prevChar =  0 ;
                nextChar =  *(foundStr + ref.length());
                if ( onlyWord
                        && (prevChar >= 'a' && prevChar <= 'z'
                                || prevChar >= 'A' && prevChar <= 'Z'
                                || prevChar >= '0' && prevChar <= '9'
                                || prevChar == '_'
                                || nextChar >= 'a' && nextChar <= 'z'
                                || nextChar >= 'A' && nextChar <= 'Z'
                                || nextChar >= '0' && nextChar <= '9'
                                || nextChar == '_') ) 
                    result += ref ;
                else if ( replacement != "" ) 
                    result += replacement ;
                pt =  foundStr + ref.length();
            }
            if ( *pt ) {
                int rLength = length() - (pt - c_str());
                if ( rLength > 0 ) 
                    result += VString(pt, rLength);
            }
            
            // replace current string
            return operator= (result);
        }
#endif
