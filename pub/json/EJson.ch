/// 
/// @file EJson.ch
/// 
/// @brief EJson.ch
/// 
/*************************************************************************/
/*                                                                       */
/*        Chopper.c - Built by Eric Lavillonniere on Tandon 386 - 89     */
/*                                                                       */
/*************************************************************************/
language json;

#include "token.h"
#include <sys/types.h>
#include "json.h"
#include <fcntl.h>
#include "deccplus.h"
#include "EJson.h"
#include <algorithm>
#include <functional>

PTREE   nullTree ; ///< nullTree

/// 
/// @fn EJson::EJson (bool val) 
/// 
//| @brief EJson
/// 
//| @param [in] val 
/// 
EJson::EJson ( bool val )
{
    PTREE   tree ;
    
    if ( val ) {
        tree =  <JSON_TRUE>;
    } else {
        tree =  <JSON_FALSE>;
    }
    pv_pTree =  tree ;
}

/// 
/// @fn EJson::EJson (const EString &val) 
/// 
//| @brief EJson
/// 
//| @param [in] val 
/// 
EJson::EJson ( const EString &val )
{
    PTREE   tree = <STRING,PTREE(Stringify(val))>;
    
    pv_pTree =  tree ;
}

/// 
/// @fn EJson::EJson (const char *val) 
/// 
//| @brief EJson
/// 
//| @param [in] val 
/// 
EJson::EJson ( const char *val )
{
    PTREE   tree = <STRING,PTREE(Stringify(EString(val)))>;
    
    pv_pTree =  tree ;
}

/// 
/// @fn EJson::EJson (const std::string &val) 
/// 
//| @brief EJson
/// 
//| @param [in] val 
/// 
EJson::EJson ( const std::string &val )
{
    PTREE   tree = <STRING,PTREE(Stringify(EString(val)))>;
    
    pv_pTree =  tree ;
}

/// 
/// @fn EString EJson::Stringify (const EString &s) 
/// 
//| @brief Stringify
/// 
//| @param [in] s 
/// 
//| @returns  EString
/// 
EString EJson::Stringify ( const EString &s )
{
    EString res (s) ;
    
    res.ReplaceString("\\", "\\\\");
    res.ReplaceString("\"", "\\\"");
    return res ;
}

/// 
/// @fn EString EJson::UnStringfy (const EString &s) 
/// 
//| @brief Unstringfy
/// 
//| @param [in] s 
/// 
//| @returns  EString
/// 
EString EJson::UnStringfy ( const EString &s )
{
    EString res (s) ;
    
    res.ReplaceString("\\\"", "\"");
    res.ReplaceString("\\\\", "\\");
    return res ;
}

/// 
/// @fn EJson::EJson (int val) 
/// 
//| @brief EJson
/// 
//| @param [in] val 
/// 
EJson::EJson ( int val )
{
    PTREE   tree = <INTEGER,PTREE(EString(val))>;
    
    pv_pTree =  tree ;
}

/// 
/// @fn EJson::EJson (unsigned int val) 
/// 
//| @brief EJson
/// 
//| @param [in] val 
/// 
EJson::EJson ( unsigned int val )
{
    PTREE   tree = <INTEGER,PTREE(EString(val))>;
    
    pv_pTree =  tree ;
}

/// 
/// @fn void    EJson::Load (const EString &data) 
/// 
//| @brief Load
/// 
//| @param [in] data 
/// 
void EJson::Load ( const EString &data )
{
    PTREE   parsed ;
    json    jparser ;
    
    parsed =  jparser.ReadInString(data);
    if ( (PPTREE)parsed == (PPTREE)0 || (PPTREE)parsed == (PPTREE) -1 ) {
        parsed =  nullTree ;
    }
    pv_pTree =  parsed ;
}

/// 
/// @fn void    EJson::LoadFile (const EString &filePath) 
/// 
//| @brief LoadFile
/// 
//| @param [in] filePath 
/// 
/// @returns  PTREE
/// 
void EJson::LoadFile ( const EString &filePath )
{
    PTREE   parsed ;
    json    jparser ;
    
    parsed =  json().ReadFile(filePath);
    if ( (PPTREE)parsed == (PPTREE)0 || (PPTREE)parsed == (PPTREE) -1 ) {
        parsed =  nullTree ;
    }
    pv_pTree =  parsed ;
}

/// 
/// @fn EJson   EJson::operator[] (const EString &name) 
/// 
//| @brief []
/// 
//| @param [in] name 
/// 
//| @returns  EJson
/// 
EJson EJson::operator[] ( const EString &name )
{
    PTREE   content(Tree()), list, elem, elemName ;
    
    if ( content == <JSON_LIST,list> ) {
        PTREE   elemContent ;
        while ( (elem = nextl(list)) ) {
            if ( elem == <JSON_NAMED,elemName,elemContent> && VString(Value(elemName)) == name ) {
                EJson   json (elemContent) ;
                return json ;
            }
        }
    }
    
    EJson   json (nullTree) ;
    
    return json ;
}

/// 
/// @fn bool    EJson::FieldList () 
/// 
//| @brief FieldList : tells if list of field
/// 
//| @returns  bool
/// 
bool EJson::FieldList ()
{
    PTREE   content(Tree());
    
    if ( content == <JSON_LIST> ) 
        return true ;
    else 
        return false ;
}

/// 
/// @fn EJson   EJson::operator[] (unsigned int pos) 
/// 
//| @brief []
/// 
//| @param [in] pos 
/// 
//| @returns  EJson
/// 
EJson EJson::operator[] ( unsigned int pos )
{
    PTREE   content(Tree()), list, elem (nullTree) ;
    
    if ( content == <JSON_SEQUENCE,list> || content == <JSON_LIST,list> ) {
        pos++ ;
        while ( pos-- ) {
            if ( list != () ) {
                elem =  nextl(list);
            } else {
                elem =  ();
                break ;
            }
        }
    }
    if ( elem == () ) 
        elem =  nullTree ;
    return EJson(elem);
}

/// 
/// @fn bool    EJson::List () 
/// 
//| @brief List : tell if simple list
/// @brief FieldList
/// 
//| @returns  bool
/// 
bool EJson::List ()
{
    PTREE   content(Tree());
    
    if ( content == <JSON_SEQUENCE> ) 
        return true ;
    else 
        return false ;
}

/// 
/// @fn EJson   EJson::operator[] (const std::vector<EString> &access) 
/// 
//| @brief []
/// 
//| @param [in] access 
/// 
//| @returns  EJson
/// 
EJson EJson::operator[] ( const std::vector<EString> &access )
{
    EJson   currJson(*this);
    
    for ( auto &oneStep : access ) {
        {
            std::string eOneStep(oneStep.c_str());
#           define IS_DIGIT ::isdigit
            if ( std::all_of(eOneStep.begin(), eOneStep.end(), IS_DIGIT) ) {
                unsigned    iPos = atoi(eOneStep.c_str());
                currJson =  currJson [iPos];
            } else 
                currJson =  currJson [oneStep];
        }
        if ( !currJson.Valid() ) {
            EJson   nullJson (nullTree) ;
            return nullJson ;
        }
    }
    
    // return current tree
    return currJson ;
}

/// 
/// @fn std::set<EString>   EJson::Fields () 
/// 
//| @brief Fields
/// 
//| @returns std::set<EString> 
/// 
std::set<EString> EJson::Fields ()
{
    PTREE               content(Tree()), list, elem, elemName ;
    std::set<EString>   theFields ;
    
    if ( content == <JSON_LIST,list> ) {
        while ( (elem = nextl(list)) ) {
            if ( elem == <JSON_NAMED,elemName> ) {
                theFields.insert(VString(Value(elem)));
            }
        }
    }
    return theFields ;
}

/// 
/// @fn PTREE   EJson::operator() () 
/// 
//| @brief ()
/// 
//| @returns  PTREE
/// 
PTREE EJson::operator() ()
{
    PTREE   content(Tree());
    
    if ( content != <JSON_LIST> && content != <JSON_SEQUENCE> ) 
        return content ;
    else 
        return nullTree ;
}

/// 
/// @fn bool    EJson::Valid () 
/// 
//| @brief Valid
/// 
//| @returns  bool
/// 
bool EJson::Valid ()
{
    return pv_pTree != (PTREE)0 && pv_pTree != nullTree ;
}

/// 
/// @fn long long   EJson::ToLongLong () 
/// 
//| @brief ToLongLong
/// 
//| @returns  long long
/// 
long long EJson::ToLongLong ()
{
    PTREE   content = Tree();
    
    if ( content ) {
        if ( content == <NEG> ) 
            return -1 * atoll(Value(content));
        else 
            return atoll(Value(content));
    }
    return 0 ;
}

/// 
/// @fn long    EJson::ToLong () 
/// 
//| @brief ToLong
/// 
//| @returns  long
/// 
long EJson::ToLong ()
{
    PTREE   content = Tree();
    
    if ( content ) {
        if ( content == <NEG> ) 
            return -1 * atol(Value(content));
        else 
            return atol(Value(content));
    }
    return 0 ;
}

/// 
/// @fn long long   EJson::ToInt () 
/// 
//| @brief ToInt
/// 
//| @returns  long
/// 
long long EJson::ToInt ()
{
    PTREE   content = Tree();
    
    if ( content ) 
        switch ( content ) {
            case <JSON_TRUE> : 
                {
                    return 1 ;
                }
                break ;
            case <JSON_FALSE> : 
                {
                    return 0 ;
                }
                break ;
            case <NEG> : 
                {
                    return -1 * atoi(Value(content));
                }
                break ;
            default : return atoll(Value(content));
        }
    return 0 ;
}

/// 
/// @fn EString EJson::ToString () 
/// 
//| @brief ToString
/// 
//| @returns  EString
/// 
EString EJson::ToString ()
{
    PTREE   content = Tree();
    
    if ( content ) 
        switch ( content ) {
            case <JSON_TRUE> : 
                {
                    return EString("true");
                }
                break ;
            case <JSON_FALSE> : 
                {
                    return EString("false");
                }
                break ;
            case <NEG> : 
                {
                    EString resultString("-");
                    resultString << Value(content);
                    return resultString ;
                }
                break ;
            default : break ;
        }
    return UnStringfy(EString(Value(content)));
}

/// 
/// @fn float   EJson::ToFloat () 
/// 
//| @brief ToFloat
/// 
//| @returns  float
/// 
float EJson::ToFloat ()
{
    PTREE   content = Tree();
    
    if ( content ) 
        return atof(Value(content));
    return 0 ;
}

/// 
/// @fn bool    EJson::ToBool () 
/// 
//| @brief ToBool
/// 
//| @returns  bool
/// 
bool EJson::ToBool ()
{
    PTREE   content = Tree();
    
    if ( content == <JSON_TRUE> ) 
        return true ;
    else 
        return false ;
}

/// 
/// @fn bool    EJson::Set (unsigned int pos, EJson json, bool insert) 
/// 
//| @brief Set : set value or replace existing one in sequence
/// 
//| @param [in]     pos    
//| @param [in,out] json   
//| @param [in]     insert 
/// 
//| @returns  bool
/// 
bool EJson::Set ( unsigned int pos, EJson json, bool insert )
{
    if ( !json.Valid() ) 
        return false ;
    
    PTREE   pSrc = copytree(json.Tree());
    EJson   target(operator[] (pos));
    
    if ( target.Valid() ) {
        PTREE   pTarget = target.Tree();
        if ( !insert ) {
            pTarget += pSrc ;
        } else {
            PTREE   father = pTarget ^ , next ;
            if ( father == <LIST,<>,next> ) {
                PTREE   newList = <LIST,pSrc,<LIST,pTarget,next>>;
                father += newList ;
            }
        }
        return true ;
    } else {
        PTREE   content(Tree()), list ;
        
        // it was not possible to reach this position set the element at the end of the list
        if ( content == <JSON_SEQUENCE,list> ) {
            list    *= pSrc ;
            content += <,list>;
            return true ;
        }
    }
    return false ;
}

/// 
/// @fn bool    EJson::AppendContent (EJson json) 
/// 
//| @brief AppendArray
/// 
//| @param [in,out] json 
/// 
//| @returns  bool
/// 
bool EJson::AppendContent ( EJson json )
{
    unsigned int    i = 0 ;
    EJson           elem = json [i];
    bool            res = true ;
    
    while ( elem.Valid() ) {
        res &= Append(elem);
        i++ ;
        elem =  json [i];
    }
    return res ;
}

/// 
/// @fn bool    EJson::IsEmptyArray () 
/// 
//| @brief IsEmptyArray
/// 
//| @returns  bool
/// 
bool EJson::IsEmptyArray ()
{
    return pv_pTree == <JSON_SEQUENCE,()>;
}

/// 
/// @fn bool    EJson::Set (EString field, EJson json) 
/// 
//| @brief Set : set value or replace exising one in sequence
/// 
//| @param [in,out] field 
//| @param [in,out] json  
/// 
//| @returns  bool
/// 
bool EJson::Set ( EString field, EJson json )
{
    if ( !json.Valid() ) 
        return false ;
    
    PTREE   pSrc = copytree(json.Tree());
    EJson   target(operator[] (field));
    
    if ( target.Valid() ) {
        PTREE   pTarget = target.Tree();
        pTarget += pSrc ;
        return true ;
    } else {
        PTREE   content(Tree()), list ;
        if ( content == <JSON_LIST,list> ) {
            PTREE   newEntry = <JSON_NAMED,<JSON_NAME,PTREE(field)>,pSrc>;
            list    *= newEntry ;
            content += <,list>;
            return true ;
        }
    }
    return false ;
}

/// 
/// @fn bool    EJson::ReplaceNamedEntryInContent (EString field, EJson json) 
/// 
//| @brief ReplaceNamedEntryContent : if field entry does not exist create, otherwise create/replace value in entry (which should contain a list of field)
//|                        the json parameter must be a named value  
/// @brief AddNamed
/// 
//| @param [in,out] field 
//| @param [in,out] json  
/// 
//| @returns  bool
/// 
bool EJson::ReplaceNamedEntryInContent ( EString field, EJson json )
{
    if ( !json.Valid() ) 
        return false ;
    
    PTREE   jsonContent(json.Tree());
    
    if ( jsonContent != <JSON_NAMED> ) 
        return false ;
    
    EJson   target(operator[] (field));
    
    if ( !target.Valid() ) {
        PTREE   newContent ;
        newContent =  <JSON_LIST,<LIST,jsonContent,()>>;
        EJson   jNewContent (newContent) ;
        return Set(field, jNewContent);
    } else if ( target.FieldList() ) {
        PTREE   address, val ;
        if ( jsonContent == <JSON_NAMED,address,val> ) {
            EString jAddress (Value(address)) ;
            PTREE   jValue (val) ;
            target.Set(jAddress, jValue);
        }
    }
    return false ;
}

/// 
/// @fn bool    EJson::Remove (unsigned int pos) 
/// 
//| @brief Remove
/// 
//| @param [in] pos 
/// 
//| @returns  bool
/// 
bool EJson::Remove ( unsigned int pos )
{
    EJson   target(operator[] (pos));
    
    if ( target.Valid() ) {
        PTREE   pTarget = target.Tree();
        PTREE   father = pTarget ^ ;
        PTREE   gFather = father ^ ;
        PTREE   next ;
        if ( gFather == <LIST,<>,next> ) {
            gFather += next ;
            return true ;
        }
    }
    return false ;
}

/// 
/// @fn bool    EJson::Remove (EString field) 
/// 
//| @brief Remove
/// 
//| @param [in,out] field 
/// 
//| @returns  bool
/// 
bool EJson::Remove ( EString field )
{
    EJson   target(operator[] (field));
    
    if ( target.Valid() ) {
        PTREE   pTarget = target.Tree();
        PTREE   father = pTarget ^ ;
        PTREE   gFather = father ^ ;
        PTREE   next ;
        if ( gFather == <LIST,<>,next> ) {
            gFather += next ;
            return true ;
        }
    }
    return false ;
}

/// 
/// @fn void    EJson::SetEmptyObject () 
/// 
//| @brief SetEmptySequence
/// 
void EJson::SetEmptyObject ()
{
    PTREE   tree = <JSON_LIST,()>;
    
    pv_pTree =  tree ;
}

/// 
/// @fn void    EJson::SetEmptyArray () 
/// 
//| @brief SetEmptyList
/// 
void EJson::SetEmptyArray ()
{
    PTREE   tree = <JSON_SEQUENCE,()>;
    
    pv_pTree =  tree ;
}

