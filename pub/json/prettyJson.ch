/// 
/// @file prettyJson.ch
/// 
/// @brief prettyJson.ch
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

char    *theFileName = (char *)0 ; ///< theFileName
int     compiledLine = 0 ;         ///< compiledLine
void    decomp (PTREE) ;

/// 
/// @class  QuickProgErlms
/// 
/// @brief  QuickProgErlms
/// 

class QuickProgErlms : public cplus {
    
    public :
    
        /// 
        /// @fn QuickProgErlms::QuickProgErlms () 
        /// 
        /// @brief QuickProgErlms
        /// 
        QuickProgErlms ()
        {
        }
        
        /// 
        /// @fn QuickProgErlms::~QuickProgErlms () 
        /// 
        /// @brief QuickProgErlms
        /// 
        ~QuickProgErlms ()
        {
        }
        
        /// 
        /// @fn PPTREE  QuickProgErlms::main_entry (int error_free) 
        /// 
        /// @brief main_entry
        /// 
        /// @param [in] error_free 
        /// 
        /// @returns  PPTREE
        /// 
        virtual PPTREE main_entry ( int error_free )
        {
            return quick_prog(error_free);
        }
};

/// 
/// @fn static void ReadIncludeSN (const char *name, int here) 
/// 
/// @brief ReadIncludeSN
/// 
/// @param [in] name 
/// @param [in] here 
/// 
static  void ReadIncludeSN ( const char *name, int here )
{
    QuickProgErlms().ReadInclude(name, here);
}

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
/// #### param [in] paramTree
/// #### param [in] funcAlone
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
                "{"     <T> {{
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
                <NL>
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
                        }}
                <SEPA> <SEPB> "]";
                oldPostComment =  paramTree ;
                comm(paramTree, POST);
                <NL>
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
    
    // decomp;
    Decomp(tree, funcAlone);
    
    // win time do not free tree
    AddRef(tree);
}

DecompJson  *DecompJson::ptDecomp ; ///< DecompJson

/// 
/// @fn int ChopTree (PTREE tree) 
/// 
/// @brief ChopTree
/// 
/// @param [in,out] tree 
/// 
/// @returns  int
/// 
int ChopTree ( PTREE tree )
{
    
    // DumpTree(tree);
    DecompJson::ptDecomp -> ChopTree(tree);
    
    // DumpTree(tree);
    return 0 ;
}

/// 
/// @fn void    copy () 
/// 
/// @brief copy
/// 
/******************************************************************
   
     copy : copyright ;
   
   *******************************************************************/
void copy ()
{
}

/// 
/// @fn int main (int argc, char **argv) 
/// 
/// @brief main
/// 
/// @param [in]     argc 
/// @param [in,out] argv 
/// 
/// @returns  int
/// 
int main ( int argc, char **argv )
{
    PTREE       tree ;
    char        name [50];
    char        *ptName ;
    DecompJson  decomp ;
    bool        noHeader = false ;
    bool        dumpTree = false ;
    
    DecompJson::ptDecomp  =  &decomp ;
    DecompCplus::ptDecomp =  &decomp ;
    MetaInit((char *)0);
    cplus().AsLanguage();
    ReadIncludeSN("c.set", 1);
    json().AsLanguage();
    
    int offset = 0 ;
    
    while ( true ) {
        if ( argc - offset < 2 ) {
            sprintf(name, "Bad name for your source file \n");
            _write(2, name, strlen(name));
            exit(0);
        } else {
            ptName =  *(argv + 1 + offset);
            if ( EString("-flat") == ptName ) {
                decomp.FlatFunct(true);
            } else if ( EString("-c") == ptName ) {
                noHeader =  true ;
            } else if ( EString("-dump") == ptName ) {
                dumpTree =  true ;
            } else 
                break ;
            offset += 1 ;
        }
    }
    dumpCoord =  0 ;
    tree      =  json().ReadFile(ptName);
    AddRef(tree);
    
    // if allready an error return
    if ( !firstError ) 
        return 1 ;
    
    // suppress none without comments
    foreach (<NONE>,tree,{
        PTREE   list = for_elem ;
        PTREE   nil ;
        if ( !IsComm(list, POST) && !IsComm(list, PRE) ) {
            list     =  list ^ ;
            for_elem =  list ^ ;
            list     += nil ;
        }
    })
    
    // print copyright
    // copy();
    // compute
    if ( dumpTree ) {
        <NL>
        DumpTree(tree);
        <NL>
    }
    firstError &= !ChopTree(tree);
    MetaEnd();
    if ( firstError ) 
        return 0 ;
    else 
        return 1 ;
}

