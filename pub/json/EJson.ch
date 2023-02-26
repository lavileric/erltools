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

PTREE   nullTree ;

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

EJson EJson::operator[] ( const EString &name )
{
    PTREE   content(Tree()), list, elem, elemName ;
    
    if ( content == <JSON_LIST,list> ) {
        while ( (elem = nextl(list)) ) {
            if ( elem == <JSON_NAMED,elemName> ) {
                if ( VString(Value(elemName)) == name ) {
                    PTREE   son (elem [2]) ;
                    EJson   json (son) ;
                    return json ;
                }
            }
        }
    }
    
    EJson   json (nullTree) ;
    
    return json ;
}

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

EJson EJson::operator[] ( unsigned int pos )
{
    PTREE   content(Tree()), list, elem (nullTree) ;
    
    if ( content == <JSON_SEQUENCE,list> ) {
        pos++ ;
        while ( pos-- ) {
            elem =  nextl(list);
        }
    }
    if ( elem == () ) 
        elem =  nullTree ;
    return EJson(elem);
}

PTREE EJson::operator() ()
{
    PTREE   content(Tree());
    
    if ( content != <JSON_LIST> && content != <JSON_SEQUENCE> ) 
        return content ;
    else 
        return nullTree ;
}

bool EJson::Valid ()
{
    return pv_pTree != (PTREE)0 && pv_pTree != nullTree ;
}

long long EJson::ToLongLong ()
{
    PTREE   content = Tree();
    
    if ( content == <NEG> ) 
        return -1 * atoll(Value(content));
    else 
        return atoll(Value(content));
}

long EJson::ToLong ()
{
    PTREE   content = Tree();
    
    if ( content == <NEG> ) 
        return -1 * atol(Value(content));
    else 
        return atol(Value(content));
}

long EJson::ToInt ()
{
    PTREE   content = Tree();
    
    if ( content == <NEG> ) 
        return -1 * atoi(Value(content));
    else 
        return atoi(Value(content));
}

EString EJson::ToString ()
{
    PTREE   content = Tree();
    
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
        default : break ;
    }
    return EString(Value(content));
}

float EJson::ToFloat ()
{
    PTREE   content = Tree();
    
    return atof(Value(content));
}

bool EJson::ToBool ()
{
    PTREE   content = Tree();
    
    if ( content == <JSON_TRUE> ) 
        return true ;
    else 
        return false ;
}


