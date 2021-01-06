/// 
/// @file chopper.ch
/// 
/// @brief chopper.ch
/// 
/*************************************************************************/
/*                                                                       */
/*        Chopper.c - Built by Eric Lavillonniere on Tandon 386 - 89     */
/*                                                                       */
/*************************************************************************/
language doxy;

#include "token.h"
#include <sys/types.h>
#include "doxy.h"
#include <fcntl.h>
#include <string>
#include "Protector.h"
#include "TreeIdentifier.h"
#include <list>
#include <set>
#include <regex>
#include "symb.h"

const EString               doxyStarter("//");                                                                                                         ///< doxyStarter
const EString               doxyStarterBis("/|");                                                                                                      ///< doxyStarterBis
const vector<std::string>   doxyStart = {"@fn", "@buf", "@file", "@param", "@returns", "@brief", "@class", "@typedef", "@struct", "@enum", "@union"};  ///< doxyStart
static std::regex           paramInOut("@param[[:space:]]*\\[[[:space:]]*in[[[:space:]]*,[[:space:]]*out[[:space:]]*\\][[:space:]]*");                 ///< paramInOut
static std::regex           paramInOrOut("@param[[:space:]]*\\[[[:space:]]*(in|out)[[:space:]]*\\][[:space:]]*");                                      ///< paramInOut

// extern var
DecompMetachop              *DecompMetachop::ptDecomp = 0 ;                                                                                            ///< DecompMetachop
DecompChopb                 *DecompChopb::ptDecomp = 0 ;                                                                                               ///< DecompChopb
char                        *parseLanguage = (char *)0 ;                                                                                               ///< parseLanguage
void                        ReadIncludeS (const char *, int) ;
int                         metaQuick = 0 ;                                                                                                            ///< metaQuick
extern int                  cplusGen ;                                                                                                                 ///< cplusGen
int                         compiledLine = 0 ;                                                                                                         ///< compiledLine
char                        *theFileName = (char *)0 ;                                                                                                 ///< theFileName

// --
void                        decomp (PTREE) ;
SymbolTable                 qualifierTable ;                                                                                                           ///< qualifierTable association of a name and is qualifier

/// 
/// @fn void    ExtendAType (PTREE &type) 
/// 
/// @brief ExtendAType
/// 
/// @param [in,out] type 
/// 
void                        ExtendAType (PTREE &type) ;

/// 
/// @fn PTREE   Qualified (PTREE &name, PTREE &context) 
/// 
/// @brief Qualified
/// 
/// @param [in,out] name    
/// @param [in,out] context 
/// 
/// @returns  PTREE
/// 
PTREE                       Qualified (PTREE &name, PTREE &context) ;

/// 
/// @class  DoxyContent
/// 
/// @brief  DoxyContent
/// 

class DoxyContent {
    
    public :
    
        PTREE   fn ;        ///< fn
        PTREE   brief ;     ///< brief
        PTREE   file ;      ///< file
        PTREE   param ;     ///< param
        PTREE   returns ;   ///< returns
        PTREE   classTree ; ///< classTree
};

/// 
/// @class  TreeStruct
/// 
/// @brief  TreeStruct
/// 

class TreeStruct {
    
    public :
    
        PTREE                                   tree ;                ///< tree
        PTREE                                   listInclude ;         ///< listInclude
        EString                                 fileName ;            ///< fileName
        MapTreeIdentifier<PTREE>                functionDeclarators ; ///< functionDeclarators
        std::map<EString, PTREE, LessString>    inheritContext ;      ///< inheritContext
        PTREE                                   currentClass ;        ///< currentClass
};

/// 
/// @fn void    DoxyFy (TreeStruct &treeStruct) 
/// 
/// @brief DoxyFy
/// 
/// @param [in,out] treeStruct 
/// 
void                        DoxyFy (TreeStruct &treeStruct) ;

/// 
/// @fn EString FilePart (const char *name) 
/// 
/// @brief FilePart
/// 
/// @param [in,out] name 
/// 
/// @returns  EString
/// 
EString FilePart ( const char *name )
{
    std::string str (name) ;
    auto         found = str.find_last_of("/\\");
    
    if ( found != string::npos ) 
        return EString(str.substr(found + 1).c_str());
    else 
        return EString(name);
}

/// 
/// @fn EString DirectoryPart (const char *name) 
/// 
/// @brief DirectoryPart
/// 
/// @param [in,out] name 
/// 
/// @returns  EString
/// 
EString DirectoryPart ( const char *name )
{
    std::string str (name) ;
    std::size_t found = str.find_last_of("/\\");
    
    if ( found != string::npos ) 
        return EString(str.substr(0, found).c_str());
    else 
        return EString(".");
}

/// 
/// @fn void    RemoveLeadingSpace (EString &str, unsigned int max = 32000) 
/// 
/// @brief RemoveLeadingSpace
/// 
/// @param [in,out] str 
/// @param [in]     max 
/// 
void RemoveLeadingSpace ( EString &str, unsigned int max = 32000 )
{
    char            *pt ;
    unsigned int    pos ;
    
    pt  =  (char *)str.c_str();
    pos =  0 ;
    while ( *pt && (*pt == ' ' || *pt == '\t') && pos < max ) {
        pos++ ;
        pt++ ;
    }
    if ( *pt ) {
        str =  str.substring(pos);
    } else 
        str =  "";
}

/// 
/// @fn std::string DoxyIdentify (PTREE &comment) 
/// 
/// @brief DoxyIdentify search a doxygen pattern in a comment like @brief .....
/// 
/// @param [in,out] comment 
/// 
/// @returns  the patter found
/// 
std::string DoxyIdentify ( PTREE &comment )
{
    std::string sComment (Value(comment)) ;
    
    for ( auto &start : doxyStart ) {
        if ( sComment.find(start) != std::string::npos ) {
            return start ;
        }
    }
    throw 0 ;
}

/// 
/// @fn void    ClassifyDoxy (PTREE &sComments, DoxyContent &doxyContent) 
/// 
/// @brief ClassifyDoxy
/// 
/// @param [in,out] sComments   
/// @param [in,out] doxyContent 
/// 
void ClassifyDoxy ( PTREE &sComments, DoxyContent &doxyContent )
{
    PTREE   theList, comment, comments (sComments) ;
    
    while ( (comment = nextl(comments)) ) {
        try {
            
            // look if it is the start of a new doxy comment
            std::string doxyHead = DoxyIdentify(comment);
            
            // while no new doxy comment store
            PTREE       newList ;
            newList *= comment ;
            PTREE   theList (comments) ;
            while ( (comment = nextl(comments)) ) {
                try {
                    DoxyIdentify(comment);
                    
                    // if find a doxy comment get out
                    comments =  theList ;
                    break ;
                } catch ( ... ) {
                    theList =  comments ;
                    newList =  <LIST,comment,newList>;
                }
            }
            
            // suppress the last empty elements of the list
            {
                PTREE   theList (newList), comment ;
                while ( (comment = nextl(newList)) ) {
                    
                    // if not empty string finished
                    EString content = Value(comment);
                    
                    // remove the //
                    if ( content.substring(0, doxyStarter.length()) == doxyStarter ) {
                        content =  content.substring(doxyStarter.length());
                    } else if ( content.substring(0, doxyStarterBis.length()) == doxyStarterBis ) {
                        content =  content.substring(doxyStarterBis.length());
                    }
                    
                    // remove the space 
                    RemoveLeadingSpace(content);
                    
                    // find something not empty get out
                    if ( content.length() != 0 ) 
                        break ;
                    
                    // trailer on last element
                    theList =  newList ;
                }
                newList =  theList ;
            }
            
            // reorder
            if ( newList == <LIST> ) 
                newList =  ListPermutate(newList);
            
            // suppress the starter
            {
                PTREE   theList (newList), comment ;
                int     numberSpace( -1);
                while ( (comment = nextl(theList)) ) {
                    EString content = Value(comment);
                    
                    // remove the //
                    if ( content.substring(0, doxyStarter.length()) == doxyStarter ) {
                        content =  content.substring(doxyStarter.length());
                    } else if ( content.substring(0, doxyStarterBis.length()) == doxyStarterBis ) {
                        content =  content.substring(doxyStarterBis.length());
                    }
                    
                    // on first comment compute the number of space and on the other remove them
                    if ( numberSpace >= 0 ) {
                        RemoveLeadingSpace(content, numberSpace);
                    } else {
                        int orgSize = content.length();
                        RemoveLeadingSpace(content);
                        numberSpace =  orgSize - content.length();
                    }
                    
                    // replace
                    {
                        PTREE   newComment ;
                        if ( comment == <H> ) {
                            newComment =  <H,PTREE(content)>;
                        } else {
                            newComment =  <C,PTREE(content)>;
                        }
                        comment += newComment ;
                    }
                }
            }
            
            // identify modified entry
            PTREE   *modified ;
            if ( doxyHead == "@fn" ) {
                modified =  &doxyContent.fn ;
            } else if ( doxyHead == "@brief" ) {
                modified =  &doxyContent.brief ;
            } else if ( doxyHead == "@file" ) {
                modified =  &doxyContent.file ;
            } else if ( doxyHead == "@param" ) {
                modified =  &doxyContent.param ;
            } else if ( doxyHead == "@returns" ) {
                modified =  &doxyContent.returns ;
            } else if ( doxyHead == "@class" ) {
                modified =  &doxyContent.classTree ;
            } else if ( doxyHead == "@typedef" ) {
                modified =  &doxyContent.classTree ;
            } else if ( doxyHead == "@struct" ) {
                modified =  &doxyContent.classTree ;
            } else if ( doxyHead == "@union" ) {
                modified =  &doxyContent.classTree ;
            } else if ( doxyHead == "@enum" ) {
                modified =  &doxyContent.classTree ;
            } else {
                modified =  0 ;
            }
            
            // add the new content
            if ( modified ) {
                PTREE   oldList(*modified);
                newList   =  <UNO,newList>;
                oldList   *= newList ;
                *modified =  oldList ;
            }
        } catch ( ... ) {
        }
    }
}

/// 
/// @fn PTREE   ReadIncludeFile (EString &directory, PTREE &tree) 
/// 
/// @brief ReadIncludeFile
/// 
/// @param [in,out] directory 
/// @param [in,out] tree      
/// 
/// @returns  PTREE
/// 
PTREE ReadIncludeFile ( EString &directory, PTREE &tree )
{
    PTREE   listInclude, includeTree ;
    
    foreach (<INCLUDE_DIR>,tree,{
        PTREE   file (for_elem) ;
        
        // compute the path by adding directory
        EString fullPath ;
        fullPath =  directory + "/" + Value(file);
        
        // read the tree
        {
            includeTree =  doxy().ReadFile(fullPath);
        }
        
        // add it to the list if ok
        if ( includeTree != (PTREE)0 && includeTree != (PTREE) -1 ) {
            listInclude =  <LIST,includeTree,listInclude>;
        }
    })
    
    // returns the list
    return listInclude ;
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
    PTREE           tree ;
    char            name [50];
    char            *ptName ;
    DecompMetachop  decomp ;
    
    dumpCoord                =  0 ;
    cplusGen                 =  1 ;
    DecompMetachop::ptDecomp =  &decomp ;
    DecompChopb::ptDecomp    =  (DecompChopb *)(&decomp);
    DecompCplus::ptDecomp    =  (DecompCplus *)(&decomp);
    MetaInit((char *)0);
    doxy().AsLanguage();
    ReadIncludeS("c.set", 1);
    cplusGen =  metaQuick = 0 ;
    if ( argc < 2 ) {
        sprintf(name, "Bad name for your source file \n");
        _write(2, name, strlen(name));
        exit(0);
    } else {
        ptName =  *(argv + 1);
    }
    
    // read the tree
    {
        tree =  doxy().ReadFile(ptName);
        AddRef(tree);
    }
    
    // read all the direct includes
    PTREE   listInclude ;
    
    {
        EString directory (ptName) ;
        directory   =  DirectoryPart(directory);
        listInclude =  ReadIncludeFile(directory, tree);
    }
    
    // treat it 
    {
        EString                                 name (ptName) ;
        MapTreeIdentifier<PTREE>                functionDeclarators ;
        std::map<EString, PTREE, LessString>    context ;
        PTREE                                   className ;
        TreeStruct                              treeStruct {tree, listInclude, name, functionDeclarators, context, className};
        DoxyFy(treeStruct);
    }
    
    // return potential errorssma
    MetaEnd();
    if ( !firstError ) 
        return 1 ;
    else 
        return 0 ;
}

/// 
/// @fn PTREE   GetSuppressDoxy (PTREE &comment, bool suppress = true, bool post = false, bool withH = false) 
/// 
/// @brief GetSuppressDoxy
/// 
/// @param [in,out] comment  
/// @param [in]     suppress 
/// @param [in]     post     
/// @param [in]     withH    
/// 
/// @returns  PTREE
/// 
PTREE GetSuppressDoxy ( PTREE &comment, bool suppress = true, bool post = false, bool withH = false )
{
    PTREE               listDoxygen ;
    static unsigned int number = 0 ;
    
    number++ ;
    foreach ((),comment,{
        PTREE   comments (for_elem), theList, aComment ;
        if ( comments == <PRE> || post && comments == <POST> ) {
            
            // after first loop comments is () except if suppress all the elements of this PRE
            // in this case is on next PRE
            while ( comments != () ) {
                PTREE   node (comments) ;
                
                // tail recursion can get us on not pre
                if ( node != <PRE> && !(post && comments == <POST>) ) 
                    goto for_continue ;
                
                // treatment
                comments == <,comments>;
                while ( (aComment = nextl(comments)) ) {
                    bool    cComment = VString(Value(aComment)).substring(0, doxyStarter.length()) == doxyStarter ;
                    bool    hComment = VString(Value(aComment)).substring(0, doxyStarterBis.length()) == doxyStarterBis ;
                    
                    // if doxygen comment get and supppress
                    if ( cComment || hComment ) {
                        PTREE   father, nextElem ;
                        bool    lastCom (false) ;
                        
                        // identify position 
                        if ( ListLength(node [1]) == 1 ) {
                            father  =  node ^ ;
                            lastCom =  true ;
                        } else {
                            father =  aComment ^ ;
                        }
                        
                        // suppress elem 
                        father == <LIST,<>,nextElem>;
                        if ( father == comment ) {
                            comment =  nextElem ;
                        } else {
                            if ( suppress ) 
                                father += nextElem ;
                        }
                        
                        // if keep comments make a copy of comment
                        if ( !suppress ) 
                            comment =  copytree(comment);
                        
                        // store comment
                        if ( hComment ) {
                            if ( withH ) {
                                aComment    =  copytree(aComment);
                                listDoxygen =  <LIST,<H,aComment>,listDoxygen>;
                            }
                        } else {
                            aComment    =  copytree(aComment);
                            listDoxygen =  <LIST,<C,aComment>,listDoxygen>;
                        }
                        
                        // set position of next step
                        if ( !lastCom ) {
                        } else {
                            if ( nextElem ) {
                                for_elem =  nextElem [1];
                                comments =  nextElem [1];
                                break ;
                            } else {
                                goto for_break ;
                            }
                        }
                    }
                }
            }
        }
    })
    
    // returns the list
    listDoxygen =  ListPermutate(listDoxygen);
    return listDoxygen ;
}

/// 
/// @fn PTREE   DeclaratorToIdent (PTREE &elem) 
/// 
/// @brief DeclaratorToIdent
/// 
/// @param [in,out] elem 
/// 
/// @returns  PTREE
/// 
PTREE DeclaratorToIdent ( PTREE &elem )
{
    
    // search the name of the declared variable
    PTREE   name = elem ;
    
    while ( name && name != <IDENT> && name != <TIDENT> && name != <OPERATOR> ) {
        switch ( name ) {
            case <TYP_LIST,name> : break ;
            case <QUALIFIED,<>,name> : break ;
            case <RANGE_MODIFIER,<>,name> : break ;
            case <REF,name> : break ;
            case <ARROW,name> : break ;
            case <ADDR,name> : break ;
            case <TYP_BIT,name> : break ;
            case <POINT,name> : break ;
            case <TYP_AFF,name> : break ;
            case <TYP_ADDR,name> : break ;
            case <TYP_ARRAY,name> : break ;
            case <TYP,name> : break ;
            case <TYP_REF,name> : break ;
            case <DECLARATOR,<>,name> : break ;
            case <DESTRUCT,name> : break ;
            default : 
                {
                    name =  ();
                }
        }
    }
    return name ;
}

/// 
/// @fn bool    SimpleType (PTREE type) 
/// 
/// @brief SimpleType : Check if type is a basic type
/// 
/// @param [in,out] type 
/// 
/// @returns  bool
/// 
bool SimpleType ( PTREE type )
{
    while ( type == <RANGE_MODIFIER,<>,type> || type == <TYP,type> ) 
        ;
    switch ( type ) {
        case <TCHAR> : 
        case <TSIGNED,<TCHAR>> : 
        case <TUNSIGNED,<TCHAR>> : 
        case <TLONG,<TINT>> : 
        case <TLONG,()> : 
        case <TUNSIGNED,<TLONG,<TINT>>> : 
        case <TUNSIGNED,<TLONG>> : 
        case <TSIGNED,<TLONG,<TINT>>> : 
        case <TSIGNED,<TLONG>> : 
        case <TSHORT,<TINT>> : 
        case <TSHORT,()> : 
        case <TUNSIGNED,<TSHORT,<TINT>>> : 
        case <TUNSIGNED,<TSHORT>> : 
        case <TSIGNED,<TSHORT,<TINT>>> : 
        case <TSIGNED,<TSHORT>> : 
        case <TINT> : 
        case <TUNSIGNED,<TINT>> : 
        case <TUNSIGNED> : 
        case <TSIGNED,<TINT>> : 
        case <TSIGNED> : 
        case <TFLOAT> : 
        case <TDOUBLE> : 
        case <ENUM> : 
            {
                return true ;
            }
            break ;
        default : 
            {
                
                // suppressed TIDENT in tree
                if ( type == <TIDENT,<IDENT,"bool">> || type == <IDENT,"bool"> ) 
                    return true ;
            }
            break ;
    }
    return false ;
}

/// 
/// @fn PTREE   GetParam (PTREE &sParameter) 
/// 
/// @brief GetParam
/// 
/// @param [in,out] sParameter 
/// 
/// @returns  PTREE
/// 
PTREE GetParam ( PTREE &sParameter )
{
    PTREE   declarator, listParameters ;
    PTREE   parameter (sParameter) ;
    int     genPos = 0 ;
    
    // extract 
    PTREE   aDeclarator, follower (parameter) ;
    EString rootString("_param");
    EString paramContent ;
    PTREE   type ;
    
    while ( (aDeclarator = nextl(parameter)) ) {
        
        // if there is no declarator creates one
        if ( aDeclarator == <ABST_DECLARATOR,type> ) {
            
            // ambiguity with initialisation
#           if 1
                {
                    throw 0 ;
                }
#           else 
                {
                    PTREE   newDeclarator = <DECLARATOR,type,<IDENT,PTREE(rootString + EString(genPos++))>>;
                    follower    += <,newDeclarator>;
                    aDeclarator =  copytree(newDeclarator);
                }
#           endif
        }
        if ( aDeclarator == <,<>,<TYP,<IDENT>>> && ListLength(sParameter) == 1 ) {
            throw 0 ;
        }
        
        // get the name of this parameter
        PTREE   name (DeclaratorToIdent(aDeclarator)) ;
        
        // check if the parameter is a basic in parameter
        bool    simple (false) ;
        {
            PTREE   type, ident ;
            aDeclarator == <TYP_AFF,aDeclarator>;
            if ( aDeclarator == <DECLARATOR,type,ident> ) {
                if ( SimpleType(type) && ident == <IDENT> ) 
                    simple =  true ;
            }
            
            // a const also will be also an in 
            if ( type == <RANGE_MODIFIER> && VString(Value(type)) == "const" ) {
                simple =  true ;
            }
        }
        
        // store simple indication 
        PTREE   ret ;
        if ( simple ) {
            ret =  <DUO,copytree(name),()>;
        } else {
            ret =  <DUO,copytree(name),<UNO>>;
        }
        
        // add the param to the list
        listParameters =  <LIST,ret,listParameters>;
        
        // follow parameters
        follower       =  parameter ;
    }
    
    // reorder the list
    listParameters =  ListPermutate(listParameters);
    
    // return the list
    return listParameters ;
}

/// 
/// @fn PTREE   GetOldDoxyParam (PTREE &listParam, PTREE &name, bool remove = true) 
/// 
/// @brief GetOldDoxyParam
/// 
/// @param [in,out] listParam 
/// @param [in,out] name      
/// @param [in]     remove    
/// 
/// @returns  PTREE
/// 
PTREE GetOldDoxyParam ( PTREE &listParam, PTREE &name, bool remove = true )
{
    PTREE   aParam, nullTree, theList (listParam) ;
    
    while ( (aParam = nextl(theList)) ) {
        std::string     comment (Value(aParam)) ;
        unsigned int    offset = 0 ;
        
        // first search param 
        {
            auto pos = comment.find("@param");
            if ( pos != std::string::npos ) 
                offset =  pos + 6 ;
            else 
                continue ;
        }
        
        // search the ]
        {
            auto pos = comment.find("]", offset);
            if ( pos != std::string::npos ) 
                offset =  pos + 1 ;
        }
        
        // now the string should start by space or tab and be followed by the ident
        {
            unsigned int    pos = offset ;
            while ( pos < comment.length() && (comment [pos] == ' ' || comment [pos] == '\t') ) 
                pos++ ;
            auto startPos = pos ;
            while ( pos < comment.length() && (comment [pos] != ' ' && comment [pos] != '\t') ) 
                pos++ ;
            auto endPos = pos ;
            if ( endPos > startPos ) 
                comment =  comment.substr(startPos, endPos - startPos);
            else 
                comment =  "";
        }
        
        // if the string compares we have found what we were looking for
        if ( VString(Value(name)) == comment.c_str() ) {
            PTREE   list = aParam ^ ;
            PTREE   next ;
            if ( remove ) {
                list == <LIST,<>,next>;
                if ( list == listParam ) {
                    listParam =  next ;
                } else {
                    list += next ;
                }
            }
            return aParam ;
        }
    }
    
    // nothing was found
    return nullTree ;
}

/// 
/// @typedef  FUNC_DESCRIPTOR
/// 
/// @brief  FUNC_DESCRIPTOR
/// 
typedef struct {
    PTREE   range ;
    PTREE   type ;
    PTREE   origDeclarator ;
    PTREE   declarator ;
    PTREE   param ;
    PTREE   constVal ;
    bool    isDeclarator ;
}   FUNC_DESCRIPTOR ;

/// 
/// @fn PTREE   FullQualifiedDeclarator (PTREE &theDeclarator, PTREE &qualifier) 
/// 
/// @brief FullQualifiedDeclarator
/// 
/// @param [in,out] theDeclarator 
/// @param [in,out] qualifier     
/// 
/// @returns  PTREE
/// 
PTREE FullQualifiedDeclarator ( PTREE &theDeclarator, PTREE &qualifier )
{
    theDeclarator =  copytree(theDeclarator);
    if ( qualifier != () ) {
        PTREE   functionName = DeclaratorToIdent(theDeclarator);
        PTREE   topName = functionName ;
        
        // get top of qualified
        PTREE   father = topName ^ ;
        while ( father == <QUALIFIED> || father == <DESTRUCT> ) {
            topName =  father ;
            father  =  father ^ ;
        }
        
        // get bottom of qualifier
        PTREE   newQualifier = copytree(qualifier);
        PTREE   insideQualifier = DeclaratorToIdent(newQualifier);
        
        // connect the two
        PTREE   newName = <QUALIFIED,copytree(insideQualifier),copytree(topName)>;
        
        // creates the full qualified name
        if ( insideQualifier == newQualifier ) {
            newQualifier =  newName ;
        } else {
            insideQualifier += newName ;
        }
        
        // put it inside the declarator
        if ( topName == theDeclarator ) {
            theDeclarator =  newQualifier ;
        } else {
            topName += newQualifier ;
        }
    }
    
    // return declarator
    return theDeclarator ;
}

/// 
/// @fn void    DoxyAllFunctNormalize (PTREE &tree, DoxyContent &doxy, PTREE &qualifier, FUNC_DESCRIPTOR &functDescriptor) 
/// 
/// @brief DoxyAllFunctNormalize
/// 
/// @param [in,out] tree            
/// @param [in,out] doxy            
/// @param [in,out] qualifier       
/// @param [in,out] functDescriptor 
/// 
void DoxyAllFunctNormalize ( PTREE &tree, DoxyContent &doxy, PTREE &qualifier, FUNC_DESCRIPTOR &functDescriptor )
{
    
    // normalize the function header
    PTREE   header = doxy.fn ;
    PTREE   functionName = functDescriptor.declarator ;
    
    // --
    PTREE   comment, theList ;
    
    // compute and put the name 
    {
        
        // if inside a class qualify the name with the class name 
        PTREE   theDeclarator = copytree(functDescriptor.origDeclarator);
        functionName  =  DeclaratorToIdent(theDeclarator);
        
        // if there is an external qualifier has to get the full qualifier
        theDeclarator =  FullQualifiedDeclarator(theDeclarator, qualifier);
        
        // contruct the declarator 
        PTREE           newDeclarator = <TYP_LIST,theDeclarator,copytree(functDescriptor.param),copytree(functDescriptor.constVal),()>;
        
        // construct a declaration for the function
        PTREE           header = <DECLARATION,copytree(functDescriptor.range),copytree(functDescriptor.type),<LIST,newDeclarator,()>>;
        
        // put this in a string 
        EString         nameString("@fn ");
        Protector<int>  protector(output, -1);
        StartOutputString();
        (DecompChopb::ptDecomp)->ChopTree(header);
        nameString << EndOutputString();
        nameString.ReplaceString(";", "");
        
        // add this new comment 
        header  =  <UNO,<LIST,<C,PTREE(nameString)>,()>>;
        theList =  <LIST,header,()>;
        doxy.fn =  theList ;
    }
    
    // if there is no brief add one
    PTREE   brief(doxy.brief);
    
    if ( brief == () ) {
        EString briefString("@brief ");
        briefString << Value(functionName);
        PTREE   list ;
        list       =  <LIST,<UNO,<LIST,PTREE(briefString),()>>,()>;
        doxy.brief =  list ;
    }
    
    // update the parameter
    PTREE   newListParam ;
    PTREE   listParam = GetParam(functDescriptor.param);
    
    {
        PTREE   param, theList (listParam), newComment ;
        while ( (param = nextl(theList)) ) {
            
            // get old comment about this param
            PTREE   oldComment = GetOldDoxyParam(doxy.param, param);
            if ( oldComment == () ) {
                
                // if not old comment generate one
                EString paramComment("@param [in,out] ");
                if ( param == <DUO,<>,()> ) {
                    paramComment =  "@param [in] ";
                }
                paramComment << Value(param);
                newComment =  <UNO,<LIST,PTREE(paramComment),()>>;
            } else {
                newComment =  oldComment ;
                
                // search the first H or C 
                PTREE   commData ;
                foreach ((),newComment,{
                    PTREE   comm (for_elem) ;
                    if ( comm == <H> || comm == <C> ) {
                        commData =  comm ;
                        break ;
                    }
                })
                
                // normalize in/out part
                if ( commData == <H> || commData == <C> ) {
                    std::string     comm (Value(commData)) ;
                    std::smatch     sm ;
                    unsigned int    start ;
                    unsigned int    length ;
                    unsigned int    found(0);
                    if ( regex_search(comm, sm, paramInOut) ) {
                        start  =  sm.position(0);
                        length =  sm [0].length();
                        found  =  1 ;
                    } else if ( regex_search(comm, sm, paramInOrOut) ) {
                        start  =  sm.position(0);
                        length =  sm [0].length();
                        if ( sm [1] == "in" ) 
                            found =  2 ;
                        else 
                            found =  3 ;
                    } else {
                        auto pos = comm.find("@param");
                        if ( pos != std::string::npos ) {
                            start  =  pos ;
                            length =  6 ;
                            found  =  2 ;
                        } else 
                            found =  0 ;
                    }
                    
                    // check that there is only in if the param is a simple param
                    if ( found && param == <DUO,<>,()> ) {
                        found =  2 ;
                    }
                    std::string newComm ;
                    switch ( found ) {
                        default : 
                            newComm = "@param [in,out] ";
                            break ;
                        case 2 : 
                            newComm = "@param [in] ";
                            break ;
                        case 3 : 
                            newComm = "@param [out] ";
                            break ;
                    }
                    if ( found ) {
                        unsigned int    oldLength = comm.length();
                        
                        // try to keep alignment
                        if ( newComm.length() < length ) {
                            std::string filler(length - newComm.length(), ' ');
                            filler  =  newComm + filler ;
                            newComm =  filler ;
                        }
                        comm.replace(start, length, newComm);
                        
                        // replace 
                        PTREE   newData(comm.c_str());
                        commData += <,newData>;
                    }
                }
            }
            
            // --    
            newListParam *= newComment ;
        }
    }
    
    // get back the remaining param, obsolete them
    {
        PTREE   remainingParam(doxy.param);
        PTREE   param ;
        while ( (param = nextl(remainingParam)) ) {
            param == <UNO,param>;
            param        =  <OBSOLETE,param>;
            newListParam *= param ;
        }
    }
    
    // put back the param
    doxy.param =  newListParam ;
    
    // update the return
    PTREE   returnFunct(doxy.returns);
    
    if ( returnFunct == () ) {
        PTREE   type = functDescriptor.type ;
        if ( type != <VOID> && type != () ) {
            
            // construct string 
            EString         returnString("@returns ");
            Protector<int>  protector(output, -1);
            StartOutputString();
            (DecompChopb::ptDecomp)->ChopTree(type);
            returnString << EndOutputString();
            
            // put it
            PTREE   listReturn = <LIST,PTREE(returnString),()>;
            listReturn   =  <LIST,<UNO,<LIST,PTREE(returnString),()>>,()>;
            doxy.returns =  listReturn ;
        }
    }
}

/// 
/// @fn PTREE   CleanDecl (PTREE &listComment) 
/// 
/// @brief CleanDecl
/// 
/// @param [in,out] listComment 
/// 
/// @returns  PTREE
/// 
PTREE CleanDecl ( PTREE &listComment )
{
    PTREE   newList, list (listComment), aComment ;
    
    while ( (aComment = nextl(list)) ) {
        if ( aComment == <C> ) {
            newList =  <LIST,aComment,newList>;
        }
    }
    newList =  ListPermutate(newList);
    return newList ;
}

/// 
/// @fn void    HXFY (PTREE &comments) 
/// 
/// @brief HXFY
/// 
/// @param [in,out] comments 
/// 
void HXFY ( PTREE &comments )
{
    foreach (<C>,comments,{
        PTREE   elem (for_elem) ;
        PTREE   hComment = <H,PTREE(VString(Value(elem)))>;
        elem     += hComment ;
        for_elem =  hComment ;
    })
}

/// 
/// @fn PTREE   MergeDoxy (PTREE &doxyMain, PTREE &doxyDecl) 
/// 
/// @brief MergeDoxy
/// 
/// @param [in,out] doxyMain 
/// @param [in,out] doxyDecl 
/// 
/// @returns  PTREE
/// 
PTREE MergeDoxy ( PTREE &doxyMain, PTREE &doxyDecl )
{
    PTREE   mainDoxy = doxyMain ;
    bool    gotList (false) ;
    
    if ( mainDoxy == <LIST,mainDoxy> ) 
        gotList =  true ;
    mainDoxy == <UNO,mainDoxy>;
    
    PTREE   declDoxy = doxyDecl ;
    
    declDoxy == <LIST,declDoxy>;
    declDoxy == <UNO,declDoxy>;
    
    // clean mainDoxy of decl
    mainDoxy =  CleanDecl(mainDoxy);
    
    // construct synthesis
    PTREE   resultDoxy ;
    
    if ( mainDoxy == () ) {
        HXFY(declDoxy);
        resultDoxy =  declDoxy ;
    } else if ( declDoxy == () ) 
        resultDoxy =  mainDoxy ;
    else {
        if ( !QCompareTree(mainDoxy, declDoxy, (PTREE)0, -1) ) {
            
            // look if one is included in the other
            EString mainString ;
            PTREE   mainList (mainDoxy), doxy ;
            while ( (doxy = nextl(mainList)) ) {
                mainString << Value(doxy);
            }
            
            // -- 
            EString declString ;
            PTREE   declList (declDoxy), decl ;
            while ( (decl = nextl(declList)) ) {
                declString << Value(decl);
            }
            mainString =  mainString.ReplaceString(" ", "");
            mainString =  mainString.ReplaceString("\t", "");
            mainString =  mainString.ReplaceString("[in,out]", "");
            declString =  declString.ReplaceString(" ", "");
            declString =  declString.ReplaceString("\t", "");
            declString =  declString.ReplaceString("[in,out]", "");
            if ( declString.substring(0, mainString.length()) == mainString ) {
                HXFY(declDoxy);
                resultDoxy =  declDoxy ;
            } else if ( mainString.substring(0, declString.length()) == declString ) {
                resultDoxy =  mainDoxy ;
            } else {
                
                // --
                HXFY(declDoxy);
                resultDoxy =  declDoxy ;
                if ( mainDoxy == <LIST> ) {
                    resultDoxy =  AddListList(resultDoxy, mainDoxy);
                }
            }
        } else {
            HXFY(declDoxy);
            resultDoxy =  declDoxy ;
        }
    }
    
    // return 
    if ( resultDoxy != () ) {
        resultDoxy =  <UNO,resultDoxy>;
        if ( gotList ) {
            resultDoxy =  <LIST,resultDoxy,()>;
        }
    }
    return resultDoxy ;
}

/// 
/// @fn void    DoxyFuncMerge (DoxyContent &doxyMerge, DoxyContent &doxy, DoxyContent &doxyDecl, PTREE &parameter) 
/// 
/// @brief DoxyFuncMerge
/// 
/// @param [in,out] doxyMerge 
/// @param [in,out] doxy      
/// @param [in,out] doxyDecl  
/// @param [in,out] parameter 
/// 
void DoxyFuncMerge ( DoxyContent &doxyMerge, DoxyContent &doxy, DoxyContent &doxyDecl, PTREE &parameter )
{
    
    // merge brief
    doxyMerge.brief   =  MergeDoxy(doxy.brief, doxyDecl.brief);
    
    // merge results
    doxyMerge.returns =  MergeDoxy(doxy.returns, doxyDecl.returns);
    
    // merge the params
    {
        PTREE   listDoxy = copytree(doxy.param);
        PTREE   listDeclDoxy = copytree(doxyDecl.param);
        PTREE   listSynthDoxy ;
        
        // get the doxy for each parameters and merge
        PTREE   listParam (GetParam(parameter)), param ;
        PTREE   theList (listParam) ;
        while ( (param = nextl(theList)) ) {
            
            // get old comment about this param
            PTREE   oldParam = GetOldDoxyParam(listDoxy, param);
            PTREE   oldDeclParam = GetOldDoxyParam(listDeclDoxy, param);
            PTREE   mergedComment ;
            mergedComment =  MergeDoxy(oldParam, oldDeclParam);
            if ( mergedComment != () ) {
                listSynthDoxy =  <LIST,mergedComment,listSynthDoxy>;
            }
        }
        
        // put the remaining from decl
        if ( listDeclDoxy != () ) {
            HXFY(listDeclDoxy);
            listSynthDoxy =  AddListList(listSynthDoxy, listDeclDoxy);
        }
        
        // put the remaining from main
        if ( listDoxy != () ) {
            listSynthDoxy =  AddListList(listSynthDoxy, listDoxy);
        }
        
        // update
        doxyMerge.param =  listSynthDoxy ;
    }
}

/// 
/// @fn void    AlignParam (DoxyContent &doxy, PTREE parameters) 
/// 
/// @brief AlignParam
/// 
/// @param [in,out] doxy       
/// @param [in,out] parameters 
/// 
void AlignParam ( DoxyContent &doxy, PTREE parameters )
{
    PTREE   listParam (GetParam(parameters)), param ;
    
    typedef struct {
        PTREE           name ;
        PTREE           comment ;
        unsigned int    posName ;
        unsigned int    posSquare ;
        unsigned int    sizeSquare ;
        unsigned int    endHeader ;
    }   CommentedParam ;
    
    std::vector<CommentedParam>     vectCommentedParam ;
    PTREE                           listDoxy(doxy.param);
    
    while ( (param = nextl(listParam)) ) {
        
        // get old comment about this param
        PTREE   oldParam ;
        oldParam =  GetOldDoxyParam(listDoxy, param, false /* remove */ );
        
        // if some other elements of the description contains also @param add them
        {
            PTREE   list ;
            if ( oldParam == <UNO,list> ) {
                PTREE   elem ;
                while ( (elem = nextl(list)) ) {
                    std::string content (Value(elem)) ;
                    if ( content.find("@param") != std::string::npos ) {
                        CommentedParam  commentedParam = { param, elem, 0, 0, 0, 0 };
                        vectCommentedParam.push_back(commentedParam);
                    }
                }
            }
        }
    }
    
    // align the comments following the params
    {
        unsigned int    maxSquare = 0 ;
        unsigned int    maxName = 0 ;
        
        // compute the alignement
        for ( auto &param : vectCommentedParam ) {
            if ( param.comment != (PTREE)0 ) {
                
                // suppress tabs
                {
                    char    *pt = Value(param.comment);
                    while ( *pt ) {
                        if ( *pt == '\t' ) 
                            *pt =  ' ';
                        pt++ ;
                    }
                }
                std::string content = Value(param.comment);
                
                // will offset by @param
                auto         offsetParam = content.find("@param");
                if ( offsetParam == std::string::npos ) 
                    offsetParam =  0 ;
                
                // first search the position of the name
                auto posName(content.find(Value(param.name), offsetParam + 7));
                if ( posName == std::string::npos ) 
                    posName =  0 ;
                param.posName =  posName ;
                
                // search the start of the end of header
                {
                    unsigned int    pos = param.posName + VString(Value(param.name)).length();
                    while ( pos < content.length() && (content [pos] == ' ' || content [pos] == '\t') ) {
                        pos++ ;
                    }
                    param.endHeader =  pos ;
                }
                
                // compute the size for the tab 
                unsigned int    sumSize = 0 ;
                if ( posName != 0 ) {
                    try {
                        auto startPos(content.find("[", offsetParam + 7));
                        auto endPos (startPos) ;
                        if ( startPos != std::string::npos && startPos < posName ) {
                            endPos =  content.find("]", startPos);
                            if ( endPos != std::string::npos && endPos < posName ) {
                                param.posSquare =  startPos ;
                                {
                                    param.sizeSquare =  endPos - startPos + 1 ;
                                }
                            } else {
                                
                                // unknown condition so forget
                                param.posName =  posName = 0 ;
                                throw 0 ;
                            }
                        } else 
                            throw 0 ;
                    } catch ( ... ) {
                        param.sizeSquare =  0 ;
                        sumSize          =  0 ;
                    }
                }
                
                // compute the max
                if ( param.sizeSquare && param.sizeSquare + 1 /* space */ > maxSquare ) 
                    maxSquare =  param.sizeSquare + 1 ;
                if ( VString(Value(param.name)).length() + 1 /* space */ > maxName ) 
                    maxName =  VString(Value(param.name)).length() + 1 ;
            }
        }
        
        // realign all the comments
        for ( auto &param : vectCommentedParam ) {
            if ( param.comment != (PTREE)0 && param.posName != 0 ) {
                std::string     comment(Value(param.comment));
                EString         newString("@param ");
                unsigned int    basicLength = newString.length();
                
                // add the square if any
                if ( param.sizeSquare != 0 ) {
                    newString += comment.substr(param.posSquare, param.sizeSquare).c_str();
                    newString += " ";
                }
                
                // put spaces if needed
                int diffSquare = basicLength + maxSquare - newString.length();
                if ( diffSquare > 0 ) {
                    std::string padding(diffSquare, ' ');
                    newString += padding.c_str();
                }
                
                // add the ident
                newString += VString(Value(param.name));
                newString += " ";
                
                // add any space if necessary
                int nbSpace = basicLength + maxSquare + maxName - newString.length();
                if ( nbSpace > 0 ) {
                    std::string padding(nbSpace, ' ');
                    newString += padding.c_str();
                }
                
                // add the remainder
                newString += comment.substr(param.endHeader).c_str();
                
                // put back the content in the tree
                {
                    PTREE   modified = param.comment ;
                    while ( modified.TreeArity() != 0 ) 
                        modified =  modified [1];
                    PTREE   newContent = PTREE(newString);
                    modified += newContent ;
                }
            }
        }
    }
}

/// 
/// @fn FUNC_DESCRIPTOR DoxyFuncNormalize (PTREE &tree, PTREE &qualifier, DoxyContent &doxy) 
/// 
/// @brief DoxyFuncNormalize
/// 
/// @param [in,out] tree      
/// @param [in,out] qualifier 
/// @param [in,out] doxy      
/// 
/// @returns  FUNC_DESCRIPTOR
/// 
FUNC_DESCRIPTOR DoxyFuncNormalize ( PTREE &tree, PTREE &qualifier, DoxyContent &doxy )
{
    PTREE   range, type, declarator, parameter, oldParameter, constVal ;
    
    if ( tree == <FUNC,range,type,declarator,parameter,constVal,oldParameter> ) {
        if ( oldParameter ) {
            parameter =  oldParameter ;
        }
        
        // we cannot have two functions with same parameters and different return value
        PTREE   topDeclarator (declarator) ;
        topDeclarator =  DeclaratorToIdent(declarator);
        PTREE   father = topDeclarator ^ ;
        while ( father == <QUALIFIED> ) {
            topDeclarator =  father ;
            father        =  father ^ ;
        }
#       if 0
            
            // merge own doxy with doxy of the declarator
            DoxyContent doxyMerge ;
            DoxyFuncMerge(doxyMerge, doxy, doxyDecl, parameter);
            
            // align the comments on param
            AlignParam(doxyMerge, parameter);
            
            // suppress virtual inside the type
            if ( type == <RANGE_MODIFIER> && VString(Value(type)) == "virtual" ) {
                type == <,<>,type>;
            }
#       endif
        
        // --
        FUNC_DESCRIPTOR functDescriptor = { range, type, declarator, topDeclarator, parameter, constVal, false /* is declarator */ };
        return functDescriptor ;
#       if 0
            DoxyAllFunctNormalize(tree, doxyMerge, qualifier, functDescriptor);
            doxy =  doxyMerge ;
#       endif
    }
    
    // return empty descriptor 
    FUNC_DESCRIPTOR functDescriptor ;
    
    return functDescriptor ;
}

/// 
/// @fn FUNC_DESCRIPTOR DoxyDeclFuncNormalize (PTREE &tree, PTREE &qualifier, DoxyContent &doxy) 
/// 
/// @brief DoxyDeclFuncNormalize
/// 
/// @param [in,out] tree      
/// @param [in,out] qualifier 
/// @param [in,out] doxy      
/// 
/// @returns  FUNC_DESCRIPTOR
/// 
FUNC_DESCRIPTOR DoxyDeclFuncNormalize ( PTREE &tree, PTREE &qualifier, DoxyContent &doxy )
{
    PTREE   range, type, declarator, topDeclarator, parameter, oldParameter, constVal ;
    
    if ( tree == <DECLARATION,range,type,<LIST,topDeclarator,()>> ) {
        topDeclarator == <TYP_AFF,topDeclarator>; // for = 0 of pure virtual
        PTREE   origDeclarator (topDeclarator) ;
        topDeclarator =  DeclaratorToIdent(topDeclarator);
        topDeclarator =  topDeclarator ^ ;
        while ( topDeclarator == <QUALIFIED> ) {
            topDeclarator =  topDeclarator ^ ;
        }
        
        // --
        if ( topDeclarator == <TYP_LIST,declarator,parameter,constVal> ) {
#           if 0
                
                // align the comments on param
                AlignParam(doxy, parameter);
#           endif
            
            // supppress the parameter part in origDeclarator otherwised displayed twice in normalize
            origDeclarator =  copytree(origDeclarator);
            PTREE   insideDeclarator ;
            foreach (<TYP_LIST>,origDeclarator,{
                PTREE   elem (for_elem) ;
                elem == <,insideDeclarator>;
                if ( origDeclarator == elem ) {
                    origDeclarator =  insideDeclarator ;
                } else {
                    elem += insideDeclarator ;
                }
                goto for_break ;
            })
#           if 0
                
                // suppress virtual inside the type
                if ( type == <RANGE_MODIFIER> && VString(Value(type)) == "virtual" ) {
                    type == <,<>,type>;
                }
#           endif
            
            // --
            FUNC_DESCRIPTOR functDescriptor = { range, type, origDeclarator, declarator, parameter, constVal, true /* is declarator */ };
            return functDescriptor ;
            
            // DoxyAllFunctNormalize(tree, doxy, qualifier, functDescriptor);
        }
    }
    
    // return empty descriptor
    FUNC_DESCRIPTOR functDescriptor ;
    
    return functDescriptor ;
}

/// 
/// @fn void    DoxyClassNormalize (PTREE &descriptor, PTREE &briefDescriptor, EString &tag, PTREE &className) 
/// 
/// @brief DoxyClassNormalize
/// 
/// @param [in,out] descriptor      
/// @param [in,out] briefDescriptor 
/// @param [in,out] tag             
/// @param [in,out] className       
/// 
void DoxyClassNormalize ( PTREE &descriptor, PTREE &briefDescriptor, EString &tag, PTREE &className )
{
    
    // look if the name is referenced in the comments
    PTREE   comment, theList ;
    EString classString ;
    
    // name of class
    {
        PTREE   rangeModif, type, declarator, param ;
        {
            
            // put this in a string 
            EString         nameString = tag + " ";
            Protector<int>  protector(output, -1);
            StartOutputString();
            (DecompChopb::ptDecomp)->ChopTree(className);
            classString =  EndOutputString();
            nameString << classString ;
            
            // add this new comment 
            PTREE   header = <UNO,<LIST,PTREE(nameString),()>>;
            theList    =  <LIST,header,()>;
            descriptor =  theList ;
        }
    }
    
    // if there is no brief add one
    PTREE   brief (briefDescriptor) ;
    
    if ( brief == () ) {
        EString briefString("@brief ");
        briefString << classString ;
        PTREE   list ;
        list            =  <LIST,<UNO,<LIST,PTREE(briefString),()>>,()>;
        briefDescriptor =  list ;
    }
}

/// 
/// @fn void    DoxyFileNormalize (PTREE &tree, DoxyContent &doxy, EString &fileName) 
/// 
/// @brief DoxyFileNormalize
/// 
/// @param [in,out] tree     
/// @param [in,out] doxy     
/// @param [in,out] fileName 
/// 
void DoxyFileNormalize ( PTREE &tree, DoxyContent &doxy, EString &fileName )
{
    
    // look if the name is referenced in the comments
    PTREE   comment, theList ;
    EString classString ;
    
    // name of file
    PTREE   file = doxy.file ;
    
    if ( file == () ) {
        PTREE   rangeModif, type, declarator, param ;
        
        // put this in a string 
        EString nameString("@file ");
        nameString << fileName ;
        
        // add this new comment 
        PTREE   header = <UNO,<LIST,PTREE(nameString),()>>;
        theList   =  <LIST,header,()>;
        doxy.file =  theList ;
    }
    
    // if there is no brief add one
    PTREE   brief(doxy.brief);
    
    if ( brief == () ) {
        EString briefString("@brief ");
        briefString << fileName ;
        PTREE   list ;
        list       =  <LIST,<UNO,<LIST,PTREE(briefString),()>>,()>;
        doxy.brief =  list ;
    }
}

/// 
/// @fn void    AdjustNL (EString &commentString, EString &starter) 
/// 
/// @brief AdjustNL
/// 
/// @param [in,out] commentString 
/// @param [in,out] starter       
/// 
void AdjustNL ( EString &commentString, EString &starter )
{
    EString adjustment("\n");
    
    adjustment << "/" << starter ;
    commentString.ReplaceString("\n", adjustment);
}

/// 
/// @fn void    AddComments (PTREE &listResult, PTREE &listAdded, bool emptyFront = true) 
/// 
/// @brief AddComments
/// 
/// @param [in,out] listResult 
/// @param [in,out] listAdded  
/// @param [in]     emptyFront 
/// 
void AddComments ( PTREE &listResult, PTREE &listAdded, bool emptyFront = true )
{
    PTREE   comment ;
    PTREE   list ;
    
    if ( emptyFront ) {
        EString commentString = doxyStarter + " ";
        listResult =  <LIST,<PRE,<LIST,PTREE(commentString),()>>,listResult>;
    }
    switch ( listAdded ) {
        case <UNO,list> : 
            {
                while ( (comment = nextl(list)) ) {
                    EString starter ;
                    if ( comment == <H> ) 
                        starter =  doxyStarterBis ;
                    else 
                        starter =  doxyStarter ;
                    EString commentString = starter + " ";
                    commentString << Value(comment);
                    AdjustNL(commentString, starter);
                    listResult =  <LIST,<PRE,<LIST,PTREE(commentString),()>>,listResult>;
                }
            }
            break ;
        case <OBSOLETE,list> : 
            {
                while ( (comment = nextl(list)) ) {
                    EString starter ;
                    if ( comment == <H> ) 
                        starter =  doxyStarterBis ;
                    else 
                        starter =  doxyStarter ;
                    
                    // suppress #### and @ in old comment
                    EString commentString (Value(comment)) ;
                    commentString.ReplaceString("####", "");
                    commentString.ReplaceString("@", "");
                    
                    // add #####
                    commentString =  starter + " #### " + commentString ;
                    AdjustNL(commentString, starter);
                    listResult =  <LIST,<PRE,<LIST,PTREE(commentString),()>>,listResult>;
                }
            }
            break ;
        case <LIST> : 
            {
                list =  listAdded ;
                while ( (comment = nextl(list)) ) {
                    AddComments(listResult, comment, false);
                }
            }
            break ;
        default : break ;
    }
}

/// 
/// @fn PTREE   GetFuncKey (PTREE &type, PTREE &declarator, PTREE &parameter) 
/// 
/// @brief GetFuncKey
/// 
/// @param [in,out] type       
/// @param [in,out] declarator 
/// @param [in,out] parameter  
/// 
/// @returns  PTREE
/// 
PTREE GetFuncKey ( PTREE &type, PTREE &declarator, PTREE &parameter )
{
    
    // create a list of all the elements 
    PTREE   listKey ;
    
    // static in member declaration not repeated in definition
    PTREE   theType (type) ;
    
    while ( theType == <RANGE_MODIFIER,<>,theType> ) 
        ;
    
    // extend the return type
    ExtendAType(theType);
    
    // type and declarator
    listKey =  <LIST,<DUO,copytree(theType),copytree(declarator)>,()>;
    
    // than all they types inside the parameters
    PTREE   param, listParam (parameter) ;
    
    while ( (param = nextl(listParam)) ) {
        PTREE   typeParam ;
        param == <TYP_AFF,param>;
        param == <DECLARATOR,typeParam,<>>;
        ExtendAType(typeParam);
        param == <DECLARATOR,typeParam,<>>;
        listKey =  <LIST,copytree(typeParam),listKey>;
    }
    
    // returns the list
    return listKey ;
}

/// 
/// @fn PTREE   GetDoxyDeclatorFunc (FUNC_DESCRIPTOR &functDescriptor, PTREE &qualifier, TreeStruct &treeStruct) 
/// 
/// @brief GetDoxyDeclatorFunc
/// 
/// @param [in,out] functDescriptor 
/// @param [in,out] qualifier       
/// @param [in,out] treeStruct      
/// 
/// @returns  PTREE
/// 
PTREE GetDoxyDeclatorFunc ( FUNC_DESCRIPTOR &functDescriptor, PTREE &qualifier, TreeStruct &treeStruct )
{
    PTREE   range, type, declarator, parameter, oldParameter, constVal, doxy, newQualifier (qualifier) ;
    
    // if ( tree == <FUNC,range,type,declarator,parameter,constVal,oldParameter> ) {
    if ( functDescriptor.declarator != PTREE(0) ) {
        type       =  functDescriptor.type ;
        declarator =  functDescriptor.origDeclarator ;
        parameter  =  functDescriptor.param ;
        
        // construct a list of the context where the declarator should be searched
        std::vector<PTREE>              context ;
        std::list<PTREE>                tobeExplored ;
        std::set<EString, LessString>   inserted ;
        if ( newQualifier != () ) {
            
            // for declarator should not find declarator at same level
            if ( !functDescriptor.isDeclarator ) {
                context.push_back(newQualifier);
            }
            
            // store context
            tobeExplored.push_back(newQualifier);
            inserted.insert(VString(Value(newQualifier)));
        } else {
            
            // a declaration not inside a class can bring nothing new
            if ( functDescriptor.isDeclarator ) {
                return doxy ;
            }
        }
        
        // if the function is virtual has to had all the inheritance tree
        if ( type == <RANGE_MODIFIER> && VString(value(type)) == "virtual" ) {
            
            // add all the class of inheritance
            while ( !tobeExplored.empty() ) {
                PTREE   superClass(tobeExplored.front());
                tobeExplored.pop_front();
                {
                    VString name (Value(superClass)) ;
                    PTREE   listInherit(treeStruct.inheritContext [name]), inherit ;
                    while ( (inherit = nextl(listInherit)) ) {
                        if ( inserted.find(VString(Value(inherit))) == inserted.end() ) {
                            context.push_back(inherit);
                            tobeExplored.push_back(inherit);
                            inserted.insert(VString(Value(inherit)));
                        }
                    }
                }
            }
#           if 0
                for ( auto &inherit : treeStruct.inheritContext ) {
                    PTREE   inheritList (inherit), superClass ;
                    while ( (superClass = nextl(inheritList)) ) {
                        context.push_back(superClass);
                    }
                }
#           endif
        }
        
        // if no context do at least one search
        if ( context.size() == 0 ) {
            context.push_back(PTREE(0));
        }
        
        // search the declarator 
        bool    firstLevel = true ;
        for ( auto &qualifier : context ) {
            PTREE   searchDeclarator (copytree(declarator)) ;
            PTREE   topDeclarator (DeclaratorToIdent(searchDeclarator)) ;
            PTREE   father ;
            
            // -- 
            father =  topDeclarator ^ ;
            while ( father == <QUALIFIED> || father == <DESTRUCT> ) {
                topDeclarator =  father ;
                father        =  father ^ ;
            }
            
            // get the full qualified declarator
            searchDeclarator =  FullQualifiedDeclarator(topDeclarator, qualifier);
            
            // construct the key 
            PTREE   listKey = GetFuncKey(type, searchDeclarator, parameter);
            
            // retrieve the  decl for this key if its exists
            PTREE   decl = TreeIdentifier::Retrieve<PTREE> (listKey, treeStruct.functionDeclarators);
            
            // get the doxygen comment on the declarator
            if ( decl != () ) {
                
                // if not got itself can return it 
                if ( !(firstLevel && decl == <FUNC> && !functDescriptor.isDeclarator) ) {
                    
                    // get the com from this decclaration
                    PTREE   commDecl (GetComm(decl)) ;
                    
                    // get the comments 
                    if ( commDecl != () ) {
                        doxy =  GetSuppressDoxy(commDecl, false /* destroy */ , false /* post */ , true /* with H comment */ );
                    }
                    
                    // quest finished
                    break ;
                }
            }
            
            // --
            firstLevel =  false ;
        }
    }
    
    // return
    return doxy ;
}

/// 
/// @fn void    ExtendAType (PTREE &type) 
/// 
//| @brief ExtendAType
/// 
//| @param [in,out] type 
/// 
void ExtendAType ( PTREE &type )
{
    PTREE   typeName = DeclaratorToIdent(type);
    PTREE   father ;
    
    father =  typeName ^ ;
    if ( father != <QUALIFIED> ) {
        PTREE   qualifier = qualifierTable [typeName];
        if ( qualifier != () ) {
            qualifier =  qualifier [2];
            PTREE   newType = Qualified(typeName, qualifier);
            if ( typeName == type ) {
                type += newType ;
                type =  newType ;
            } else {
                typeName += newType ;
            }
        }
    }
}

/// 
/// @fn void    ExtendTypes (PTREE &type, PTREE &parameter) 
/// 
/// @brief ExtendTypes
/// 
/// @param [in,out] type      
/// @param [in,out] parameter 
/// 
void ExtendTypes ( PTREE &type, PTREE &parameter )
{
    
    // first extend the return type 
    ExtendAType(type);
    
    // then extend the type of the parameters 
    PTREE   aParameter ;
    PTREE   typeDeclarator ;
    PTREE   listParameter (parameter) ;
    
    while ( (aParameter = nextl(listParameter)) ) {
        aParameter == <TYP_AFF,aParameter>;
        if ( aParameter == <DECLARATOR,typeDeclarator> ) {
            ExtendAType(typeDeclarator);
        }
    }
}

/// 
/// @fn void    ExtendType (PTREE &tree) 
/// 
/// @brief ExtendType
/// 
/// @param [in,out] tree 
/// 
void ExtendType ( PTREE &tree )
{
    PTREE   range, type, declarator, constVal, oldParameter, parameter, topDeclarator ;
    
    if ( tree == <FUNC,range,type,declarator,parameter,constVal,oldParameter> ) {
        if ( oldParameter ) {
            parameter =  oldParameter ;
        }
        ExtendTypes(type, parameter);
    } else if ( tree == <DECLARATION,range,type,<LIST,topDeclarator,()>> ) {
        
        // extend the type of the parameters
        topDeclarator == <TYP_AFF,topDeclarator>; // for = 0 of pure virtual
        PTREE   origDeclarator (topDeclarator) ;
        topDeclarator =  DeclaratorToIdent(topDeclarator);
        topDeclarator =  topDeclarator ^ ;
        while ( topDeclarator == <QUALIFIED> ) {
            topDeclarator =  topDeclarator ^ ;
        }
        
        // --
        if ( topDeclarator == <TYP_LIST,declarator,parameter,constVal> ) {
            ExtendTypes(type, parameter);
        }
    }
}

/// 
/// @fn void    SuppressTIDENT (PTREE &tree) 
/// 
/// @brief SuppressTIDENT
/// 
/// @param [in,out] tree 
/// 
void SuppressTIDENT ( PTREE &tree )
{
    PTREE   father ;
    
    father =  tree ^ ;
    
    unsigned int    pos ;
    
    if ( father == () ) {
        father =  <DUO,tree,()>;
        pos    =  1 ;
    } else {
        pos =  tree.RankTree();
    }
    foreach (<TIDENT>,tree,{
        PTREE   elem (for_elem), son ;
        elem == <,son>;
        elem     += son ;
        for_elem =  son ;
    })
    tree =  father [pos];
}

/// 
/// @fn void    DoxyFunc (PTREE &tree, PTREE &qualifier, TreeStruct &treeStruct) 
/// 
/// @brief DoxyFunc
/// 
/// @param [in,out] tree       
/// @param [in,out] qualifier  
/// @param [in,out] treeStruct 
/// 
void DoxyFunc ( PTREE &tree, PTREE &qualifier, TreeStruct &treeStruct )
{
    PTREE   comm = GetComm(tree), origTree (tree) ;
    PTREE   oldComm = copytree(comm);
    PTREE   newComm ;
    
    // extend the types
    tree =  copytree(tree);
    SuppressTIDENT(tree);
    ExtendType(tree);
    
    // --
    try {
        
        // get the comments 
        PTREE       doxy = GetSuppressDoxy(comm);
        
        // classify them
        DoxyContent doxyContent ;
        ClassifyDoxy(doxy, doxyContent);
        
        // reconstruct the different elems
        FUNC_DESCRIPTOR functDescriptor ;
        if ( tree == <FUNC> ) {
            
            // normalize
            functDescriptor =  DoxyFuncNormalize(tree, qualifier, doxyContent /*, doxyDeclContent*/ );
        } else {
            functDescriptor =  DoxyDeclFuncNormalize(tree, qualifier, doxyContent);
        }
        
        // try to get a doxydecl 
        DoxyContent doxyDeclContent ;
        {
            PTREE   decl = GetDoxyDeclatorFunc(functDescriptor, qualifier, treeStruct);
            
            // analyze
            ClassifyDoxy(decl, doxyDeclContent);
        }
        
        // merge own doxy with doxy of the declarator
        DoxyContent doxyMerge ;
        PTREE       parameter(functDescriptor.param);
        DoxyFuncMerge(doxyMerge, doxyContent, doxyDeclContent, parameter);
        
        // align the comments on param
        AlignParam(doxyMerge, parameter);
        
        // suppress virtual inside the type
        PTREE   type(functDescriptor.type);
        while ( type == <RANGE_MODIFIER> && (VString(Value(type)) == "virtual" || VString(Value(type)) == "inline") ) {
            type == <,<>,type>;
            functDescriptor.type =  type ;
        }
        DoxyAllFunctNormalize(tree, doxyMerge, qualifier, functDescriptor);
        doxyContent =  doxyMerge ;
        
        // Add the normalized comments 
        PTREE   listNormalizedComments ;
        {
            EString aComment ;
            AddComments(listNormalizedComments, doxyContent.fn);
            AddComments(listNormalizedComments, doxyContent.brief);
            if ( doxyContent.param != PTREE(0) ) 
                AddComments(listNormalizedComments, doxyContent.param);
            if ( doxyContent.returns != PTREE(0) ) 
                AddComments(listNormalizedComments, doxyContent.returns);
            PTREE   nullTree ;
            AddComments(listNormalizedComments, nullTree);
            listNormalizedComments =  ListPermutate(listNormalizedComments);
        }
        newComm =  listNormalizedComments ;
        if ( comm == <LIST> && comm != <,(),()> ) {
            newComm =  AddListList(newComm, comm);
        }
    } catch ( ... ) {
        
        // we got a problem initialisation has funct declarator
        newComm =  oldComm ;
    }
    
    // create enriched comments with good doxygen
    //  put back the enriched comments 
    PutComm(origTree, newComm);
}

/// 
/// @fn void    DoxyClass (PTREE &tree, PTREE &classTree) 
/// 
/// @brief DoxyClass
/// 
/// @param [in,out] tree      
/// @param [in,out] classTree 
/// 
void DoxyClass ( PTREE &tree, PTREE &classTree )
{
    PTREE       comm = GetComm(tree);
    
    // get the comments 
    PTREE       doxy = GetSuppressDoxy(comm);
    
    // classify them
    DoxyContent doxyContent ;
    
    ClassifyDoxy(doxy, doxyContent);
    
    // get the name of the class
    PTREE   name ;
    
    // identify the tag
    EString tag("@");
    
    if ( classTree == <CLASS,<>,name> ) 
        tag << VString(Value(classTree));
    else if ( classTree == <TYPEDEF> ) {
        tag << "typedef";
        PTREE   list ;
        classTree == <,<>,list>;
        name =  nextl(list);
        name =  DeclaratorToIdent(name);
    } else if ( classTree == <ENUM> ) {
        tag << "enum";
        classTree == <,name>;
    } else if ( classTree == <DEFINE_DIR> ) {
        tag << "def";
        classTree == <,name>;
    }
    
    // reconstruct the different elems
    DoxyClassNormalize(doxyContent.classTree, doxyContent.brief, tag, name);
    
    // Add the normalized comments 
    PTREE   listNormalizedComments ;
    
    {
        EString aComment ;
        AddComments(listNormalizedComments, doxyContent.classTree);
        AddComments(listNormalizedComments, doxyContent.brief);
        PTREE   nullTree ;
        AddComments(listNormalizedComments, nullTree);
        listNormalizedComments =  ListPermutate(listNormalizedComments);
    }
    
    PTREE   newComm = listNormalizedComments ;
    
    if ( comm == <LIST> && comm != <,(),()> ) {
        newComm =  AddListList(newComm, comm);
    }
    
    // create enriched comments with good doxygen
    //  put back the enriched comments 
    PutComm(tree, newComm);
}

/// 
/// @fn void    DoxyDeclaration (PTREE &tree) 
/// 
/// @brief DoxyDeclaration
/// 
/// @param [in,out] tree 
/// 
void DoxyDeclaration ( PTREE &tree )
{
    PTREE   comm = GetComm(tree);
    
    // get the comments 
    PTREE   doxy = GetSuppressDoxy(comm, true /* suppress */ , true /*  post */ );
    
    // post if only one line
    bool    isPost (true) ;
    
#   if 0
        if ( (comm == () || comm == <LIST,(),()>) && ListLength(doxy) <= 1 ) 
            isPost =  true ;
#   endif
    
    // if there is no comment creates one
    if ( doxy == () ) {
        PTREE   listDeclarator, type, comment, declarator ;
        if ( tree == <DECLARATION,<>,type,listDeclarator> ) {
            if ( listDeclarator == <LIST,declarator,()> ) {
                PTREE   name ;
                declarator == DeclaratorToIdent(declarator);
                comment =  <C,PTREE(EString("//< ") + Value(declarator))>;
            } else {
                
                // isPost =  false ;
            }
            if ( comment == () ) {
                
                // -- 
                EString         typeString ;
                Protector<int>  protector(output, -1);
                StartOutputString();
                (DecompChopb::ptDecomp)->ChopTree(listDeclarator);
                typeString << EndOutputString();
                typeString.ReplaceString("\n", "");
                RemoveLeadingSpace(typeString);
                
                // -- 
                comment =  <C,PTREE(EString("//< ") + typeString)>;
            }
        }
        doxy =  comment ;
    }
    
    // insert comment in list
    if ( doxy != <LIST> ) {
        doxy =  <LIST,doxy,()>;
    }
    
    // put good comment
    {
        PTREE   listComment (doxy), comment ;
        while ( (comment = nextl(listComment)) ) {
            std::string content (Value(comment)) ;
            auto         pos = content.find("@brief");
            auto         posb = content.find(" @brief");
            if ( pos != std::string::npos ) {
                if ( posb != std::string::npos ) 
                    content.replace(posb, 7, "<");
                else 
                    content.replace(pos, 6, "<");
                PTREE   newComment = <C,PTREE(EString(content.c_str()))>;
                comment += newComment ;
            }
        }
    }
    
    // create the comment
    {
        if ( isPost ) {
            doxy =  <POST,doxy>;
        } else {
            doxy =  <PRE,doxy>;
        }
        doxy =  <LIST,doxy,()>;
    }
    
    PTREE   newComm = doxy ;
    
    if ( comm == <LIST> && comm != <,(),()> ) {
        newComm =  AddListList(newComm, comm);
    }
    
    // create enriched comments with good doxygen
    //  put back the enriched comments 
    PutComm(tree, newComm);
}

/// 
/// @fn void    DoxyProgram (TreeStruct &treeStruct) 
/// 
/// @brief DoxyProgram
/// 
/// @param [in,out] treeStruct 
/// 
void DoxyProgram ( TreeStruct &treeStruct )
{
    PTREE       comm = GetComm(treeStruct.tree);
    
    // get the comments 
    PTREE       doxy = GetSuppressDoxy(comm);
    
    // classify them
    DoxyContent doxyContent ;
    
    ClassifyDoxy(doxy, doxyContent);
    
    // get fileName alone
    EString fileName(FilePart(treeStruct.fileName));
    
    // reconstruct the different elems
    DoxyFileNormalize(treeStruct.tree, doxyContent, fileName);
    
    // Add the normalized comments 
    PTREE   listNormalizedComments ;
    
    {
        EString aComment ;
        AddComments(listNormalizedComments, doxyContent.file);
        AddComments(listNormalizedComments, doxyContent.brief);
        PTREE   nullTree ;
        AddComments(listNormalizedComments, nullTree);
        listNormalizedComments =  ListPermutate(listNormalizedComments);
    }
    
    PTREE   newComm = listNormalizedComments ;
    
    if ( comm == <LIST> && comm != <,(),()> ) {
        newComm =  AddListList(newComm, comm);
    }
    
    // create enriched comments with good doxygen
    //  put back the enriched comments 
    PutComm(treeStruct.tree, newComm);
}

/// 
/// @fn PTREE   Qualified (PTREE &name, PTREE &context) 
/// 
//| @brief Qualified
/// 
//| @param [in,out] name    
//| @param [in,out] context 
/// 
//| @returns  PTREE
/// 
PTREE Qualified ( PTREE &name, PTREE &context )
{
    PTREE   newName = copytree(name);
    
    // no TIDENT inside qualified 
    name == <TIDENT,name>;
    
    // add qualifier
    if ( context != () ) {
        PTREE   newRef = copytree(context);
        PTREE   insideIdent = DeclaratorToIdent(newRef);
        newName =  <QUALIFIED,copytree(insideIdent),newName>;
        if ( insideIdent == newRef ) 
            newRef =  newName ;
        else {
            insideIdent += newName ;
        }
        newName =  newRef ;
    }
    
    // returns the new context
    return newName ;
}

/// 
/// @fn void    Treatment (TreeStruct &treeStruct, PTREE &qualifier, bool embedded = false) 
/// 
/// @brief Treatment
/// 
/// @param [in,out] treeStruct 
/// @param [in,out] qualifier  
/// @param [in]     embedded   
/// 
void Treatment ( TreeStruct &treeStruct, PTREE &qualifier, bool embedded = false )
{
    PTREE   declarator, tree(treeStruct.tree), name, listDeclarator, baseList ;
    
    if ( qualifier == () ) 
        DoxyProgram(treeStruct);
    foreach ((),tree,{
        PTREE   elem (for_elem) ;
        switch ( elem ) {
            case <FUNC> : 
                {
                    DoxyFunc(elem, qualifier, treeStruct);
                    
                    // doxyfy the inside
                    forallsons (elem,{
                        PTREE       son (for_elem) ;
                        TreeStruct  sonStruct = treeStruct ;
                        sonStruct.tree =  son ;
                        Treatment(sonStruct, elem, true);
                    })
                    goto for_continue ;
                }
                break ;
            case <DECLARATION,<>,<>,listDeclarator> : 
                {
                    
                    // if it contains class enum it is treated in another branch of switch
                    bool    treatedHere (true) ;
                    foreach ((),elem,{
                        PTREE   decl (for_elem) ;
                        if ( decl == <CLASS> || decl == <ENUM> ) {
                            treatedHere =  false ;
                        }
                    })
                    
                    // -- 
                    if ( !embedded && treatedHere ) {
                        if ( listDeclarator == <LIST,declarator,()> ) {
                            PTREE   insideDeclarator = DeclaratorToIdent(declarator);
                            insideDeclarator =  insideDeclarator ^ ;
                            while ( insideDeclarator == <QUALIFIED> ) {
                                insideDeclarator =  insideDeclarator ^ ;
                            }
                            if ( insideDeclarator == <TYP_LIST> ) 
                                DoxyFunc(elem, qualifier, treeStruct);
                            else 
                                DoxyDeclaration(elem);
                        } else {
                            DoxyDeclaration(elem);
                        }
                    }
                }
                break ;
            case <ENUM,name> : 
                {
                    {
                        
                        // go on the declaration
                        PTREE   declaration (elem) ;
                        while ( declaration != tree && declaration != <DECLARATION> && tree != () ) {
                            declaration =  declaration ^ ;
                        }
                        if ( declaration == <DECLARATION> ) {
                            if ( !embedded ) 
                                DoxyClass(declaration, elem);
                        }
                    }
                    
                    // maybe there is a qualifier for this new declaration
                    if ( qualifier != () ) {
                        PTREE   inserted = <DUO,copytree(name),copytree(qualifier)>;
                        qualifierTable.AddVar(inserted);
                    }
                }
                break ;
            case <DEFINE_DIR> : 
                {
                    if ( !embedded ) 
                        DoxyClass(elem, elem);
                }
                break ;
            case <TYPEDEF,<>,name> : 
                {
                    if ( !embedded ) 
                        DoxyClass(elem, elem);
                    
                    // maybe there is a qualifier for this new declaration
                    if ( qualifier != () ) {
                        PTREE   inserted = <DUO,copytree(name),copytree(qualifier)>;
                        qualifierTable.AddVar(inserted);
                    }
                }
                break ;
            case <CLASS,<>,name,baseList> : 
                {
                    
                    // defined a new type which might be qualified
                    if ( qualifier != () ) {
                        PTREE   inserted = <DUO,copytree(name),copytree(qualifier)>;
                        qualifierTable.AddVar(inserted);
                    }
                    
                    // go on the declaration
                    PTREE   declaration (elem) ;
                    while ( declaration != tree && declaration != <DECLARATION> && tree != () ) {
                        declaration =  declaration ^ ;
                    }
                    if ( declaration == <DECLARATION> ) {
                        if ( !embedded ) 
                            DoxyClass(declaration, elem);
                    }
                    
                    // update the inheritance list
                    {
                        PTREE   base, listBase ;
                        if ( baseList == <BASE_LIST,baseList> && baseList == <LIST> ) {
                            while ( (base = nextl(baseList)) ) {
                                base == <PROTECT,<>,base>;
                                listBase *= copytree(base);
                            }
                        }
                        treeStruct.inheritContext [VString(Value(name))] =  listBase ;
                        treeStruct.currentClass                          =  name ;
                    }
                }
            case <NAMESPACE,name> : 
                {
                    
                    // -- 
                    qualifierTable.AddLevel();
                    
                    // -- 
                    name =  Qualified(name, qualifier);
                    
                    // if name is nil would put file name
                    if ( name != () ) {
                        
                        // doxyfy the inside
                        forallsons (elem,{
                            PTREE       son (for_elem) ;
                            TreeStruct  sonStruct = treeStruct ;
                            sonStruct.tree =  son ;
                            Treatment(sonStruct, name, embedded);
                        })
                    }
                    
                    // -- 
                    qualifierTable.RemoveLevel();
                    treeStruct.currentClass =  PTREE(0);
                    
                    // go on 
                    goto for_continue ;
                }
                break ;
            default : break ;
        }
    })
}

/// 
/// @fn void    AddFunctDeclarator (PTREE &entry, TreeStruct &treeStruct, PTREE &qualifier) 
/// 
/// @brief AddFunctDeclarator
/// 
/// @param [in,out] entry      
/// @param [in,out] treeStruct 
/// @param [in,out] qualifier  
/// 
void AddFunctDeclarator ( PTREE &entry, TreeStruct &treeStruct, PTREE &qualifier )
{
    PTREE   range, type, declarator, parameter, constVal, topDeclarator, oldParameter ;
    bool    tobeAdded (false) ;
    bool    isDestructor (false) ;
    
    if ( entry == <DECLARATION,range,type,<LIST,topDeclarator,()>> ) {
        
        // make a copy 
        entry =  copytree(entry);
        SuppressTIDENT(entry);
        entry == <DECLARATION,range,type,<LIST,topDeclarator,()>>;
        
        // look if it is a destructor
        if ( topDeclarator == <DESTRUCT,topDeclarator> ) 
            isDestructor =  true ;
        
        // -- 
        topDeclarator =  DeclaratorToIdent(topDeclarator);
        topDeclarator =  topDeclarator ^ ;
        while ( topDeclarator == <QUALIFIED> ) {
            topDeclarator =  topDeclarator ^ ;
        }
        
        // --
        if ( topDeclarator == <TYP_LIST,declarator,parameter,constVal> ) {
            tobeAdded =  true ;
        }
    } else if ( entry == <FUNC> ) {
        entry =  copytree(entry);
        SuppressTIDENT(entry);
        entry == <FUNC,range,type,declarator,parameter,constVal,oldParameter>;
        if ( oldParameter ) {
            parameter =  oldParameter ;
        }
        if ( declarator == <DESTRUCT,declarator> ) 
            isDestructor =  true ;
        if ( type == <RANGE_MODIFIER> && VString(Value(type)) == "virtual" ) 
            tobeAdded =  true ;
    }
    if ( tobeAdded ) {
        
        // if it is a destructor put the information here, so that it is identical to member definition
        if ( isDestructor ) {
            declarator =  <DESTRUCT,declarator>;
        }
        
        // fully qualify the declarator 
        declarator =  FullQualifiedDeclarator(declarator, qualifier);
        
        // get the key
        PTREE   listKey = GetFuncKey(type, declarator, parameter);
        
        // put it in the map
        entry =  copytree(entry);
        TreeIdentifier::UniqueTree<PTREE> (listKey, treeStruct.functionDeclarators, entry);
    }
}

/// 
/// @fn void    SearchFunctDecl (TreeStruct &treeStruct, PTREE &fileTree, PTREE &qualifier) 
/// 
/// @brief SearchFunctDecl
/// 
/// @param [in,out] treeStruct 
/// @param [in,out] fileTree   
/// @param [in,out] qualifier  
/// 
void SearchFunctDecl ( TreeStruct &treeStruct, PTREE &fileTree, PTREE &qualifier )
{
    PTREE   tree (fileTree) ;
    PTREE   declarator, name ;
    
    foreach ((),tree,{
        PTREE   elem (for_elem) ;
        switch ( elem ) {
            case <FUNC> : 
                {
                    AddFunctDeclarator(elem, treeStruct, qualifier);
                    goto for_continue ;
                }
                break ;
            case <DECLARATION,<>,<>,<LIST,declarator,()>> : 
                {
                    {
                        PTREE   insideDeclarator = DeclaratorToIdent(declarator);
                        insideDeclarator =  insideDeclarator ^ ;
                        while ( insideDeclarator == <QUALIFIED> ) {
                            insideDeclarator =  insideDeclarator ^ ;
                        }
                        if ( insideDeclarator == <TYP_LIST> ) 
                            AddFunctDeclarator(elem, treeStruct, qualifier);
                    }
                }
                break ;
            case <ENUM,name> : 
            case <TYPEDEF,<>,name> : 
                {
                    
                    // maybe there is a qualifier for this new declaration
                    if ( qualifier != () ) {
                        PTREE   inserted = <DUO,copytree(name),copytree(qualifier)>;
                        qualifierTable.AddVar(inserted);
                    }
                }
                break ;
            case <CLASS,<>,name> : 
                {
                    
                    // defined a new type which might be qualified
                    if ( qualifier != () ) {
                        PTREE   inserted = <DUO,copytree(name),copytree(qualifier)>;
                        qualifierTable.AddVar(inserted);
                    }
                }
            case <NAMESPACE,name> : 
                {
                    qualifierTable.AddLevel();
                    
                    // -- 
                    name =  Qualified(name, qualifier);
                    
                    // doxyfy the inside
                    forallsons (elem,{
                        PTREE   son (for_elem) ;
                        SearchFunctDecl(treeStruct, son, name);
                    })
                    
                    // -- 
                    qualifierTable.RemoveLevel();
                    
                    // go on 
                    goto for_continue ;
                }
                break ;
            default : break ;
        }
    })
}

/// 
/// @fn void    ComputeReference (TreeStruct &treeStruct) 
/// 
/// @brief ComputeReference
/// 
/// @param [in,out] treeStruct 
/// 
void ComputeReference ( TreeStruct &treeStruct )
{
    
    // get the funct declarators at first level and inside the classes in current tree and all the included files
    std::list<PTREE>    allTrees ;
    PTREE               elem, listInclude(treeStruct.listInclude);
    
    // store the trees in one vector 
    while ( (elem = nextl(listInclude)) ) 
        allTrees.push_front(elem);
    allTrees.push_front(treeStruct.tree);
    
    // treat them
    for ( PTREE &file : allTrees ) {
        PTREE   nullTree ;
        SearchFunctDecl(treeStruct, file, nullTree);
    }
}

/// 
/// @fn void    DoxyFy (TreeStruct &treeStruct) 
/// 
//| @brief DoxyFy
/// 
//| @param [in,out] treeStruct 
/// 
/*************************************************************************/
/*  decomp : display your program  : here dump tree                      */
/*************************************************************************/
void DoxyFy ( TreeStruct &treeStruct )
{
    DecompChopb decomp ;
    
    DecompChopb::ptDecomp =  (DecompChopb *)(&decomp);
    DecompCplus::ptDecomp =  (DecompCplus *)(&decomp);
    
    PTREE   nullTree ;
    
    // compute the reference functions
    ComputeReference(treeStruct);
    
    // Add the doxy comments
    Treatment(treeStruct, nullTree);
    
    //  DumpTree(tree);
    decomp.ChopTree(treeStruct.tree);
}


