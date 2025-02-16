/// 
/// @file DecompJson.ch
/// 
/// @brief DecompJson.ch
/// 
/*************************************************************************/
/*                                                                       */
/*        Chopper.c - Built by Eric Lavillonniere on Tandon 386 - 89     */
/*                                                                       */
/*************************************************************************/
language json;

#include "token.h"
#include "json.h"
#include "deccplus.h"
#include "decjson.h"
#include <sys/types.h>
#include <fcntl.h>
#include "Protector.h"

void        decomp (PTREE) ;
/******************************************************************
       decomp : decompilation d'un arbre
   *******************************************************************/
static bool indented = false ; /// 

/// 
/// @fn PTREE   DecompJson::IntDecomp (const PTREE &paramTree, int funcAlone) 
/// 
/// @brief IntDecomp
/// 
/// @param [in] paramTree 
/// @param [in] funcAlone 
/// 
/// @returns  PTREE
/// 
PTREE DecompJson::IntDecomp ( const PTREE &paramTree, int funcAlone )
{
    PTREE   elem, list, name ;
    PTREE   oldPostComment = postComment ;
    
    switch ( paramTree ) {
        case <JSON_LIST,list> : 
            {
                bool    first = true ;
                "{" <NL>
                    <T> {{
                            <NL>
                            while ( (elem = nextl(list)) ) {
                                if ( !first ) {
                                    "," <NL>
                                } else 
                                    first =  false ;
                                @elem
                            }
                        }} <NL>
                "}";
                oldPostComment =  paramTree ;
                comm(paramTree, POST);
            }
            break ;
        case <JSON_SEQUENCE,list> : 
            {
                bool    first = true ;
                "[" <NL>
                    <T> {{
                            while ( (elem = nextl(list)) ) {
                                if ( !first ) {
                                    "," <NL>
                                } else 
                                    first =  false ;
                                @elem
                            }
                        }} <NL>
                "]";
                oldPostComment =  paramTree ;
                comm(paramTree, POST);
            }
            break ;
        case <JSON_NAMED,name,elem> : 
            {
                "\"" PrintString(Value(paramTree)) "\" : " @elem
            }
            break ;
        case <NEG,elem> : 
            {
                "-" @elem
            }
            break ;
        case <JSON_TRUE> : 
            {
                "true";
            }
            break ;
        case <JSON_FALSE> : 
            {
                "false";
            }
            break ;
        case <STRING> : 
            {
                "\"" PrintString(Value(paramTree)) "\"";
            }
            break ;
        default : 
            {
                oldPostComment =  DecompCplus::IntDecomp(paramTree, funcAlone);
            }
    }
    return oldPostComment ;
}

/// 
/// @fn void    DecompJson::ChopTree (PTREE tree, int funcAlone) 
/// 
/// @brief ChopTree
/// 
/// @param [in,out] tree      
/// @param [in]     funcAlone 
/// 
/*************************************************************************/
/*   ChopTree : chop the tree : here call decomp                         */
/*************************************************************************/
void DecompJson::ChopTree ( PTREE tree, int funcAlone )
{
    PTREE   elem ;
    PTREE   list ;
    
    // display copyright
    copy();
    
    // switch to java lang
    SwitchLang("json");
    {
        Protector<int>  protect (output) ;
        
        // -- 
        InitOutput();
    }
    
    // decomp;
    Decomp(tree, funcAlone);
}

