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

const EString               doxyStarter("//");
const vector<std::string>   doxyStart = {"@fn", "@buf", "@file", "@param", "@returns", "@brief"};

// extern var
DecompMetachop              *DecompMetachop::ptDecomp = 0 ;
DecompChopb                 *DecompChopb::ptDecomp = 0 ;
char                        *parseLanguage = (char *)0 ;
void                        ReadIncludeS (const char *, int) ;
int                         metaQuick = 0 ;
extern int                  cplusGen ;
int                         compiledLine = 0 ;
char                        *theFileName = (char *)0 ;

// --
void                        ChopTree (PTREE) ;
void                        decomp (PTREE) ;

/// 
/// @fn int main (int argc, char **argv) 
/// 
/// @brief main
/// 
/// @param [in,out] argc
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
    
    dumpCoord = 0 ;
    cplusGen = 1 ;
    DecompMetachop::ptDecomp = &decomp ;
    DecompChopb::ptDecomp = (DecompChopb *)(&decomp);
    DecompCplus::ptDecomp = (DecompCplus *)(&decomp);
    MetaInit((char *)0);
    doxy().AsLanguage();
    ReadIncludeS("c.set", 1);
    cplusGen = metaQuick = 0 ;
    if ( argc < 2 ) {
        sprintf(name, "Bad name for your source file \n");
        _write(2, name, strlen(name));
        exit(0);
    } else {
        ptName = *(argv + 1);
    }
    tree = doxy().ReadFile(ptName);
    AddRef(tree);
    ChopTree(tree);
    MetaEnd();
    if ( !firstError ) 
        return 1 ;
    else 
        return 0 ;
}

/// 
/// @fn void    ChopTree (PTREE tree) 
/// 
/// @brief ChopTree
/// 
/// @param [in,out] tree
/// 
void ChopTree ( PTREE tree )
{
    decomp_doxy(tree);
    NewLine();
}

/// 
/// @fn PTREE   GetSuppressDoxy (PTREE &comment) 
/// 
/// @brief GetSuppressDoxy
/// 
/// @param [in,out] comment
/// 
/// @returns  PTREE
/// 
PTREE GetSuppressDoxy ( PTREE &comment )
{
    PTREE   listDoxygen ;
    
    foreach (<PRE>,comment,{
        PTREE   comments (for_elem), theList, aComment ;
        
        // after first loop comments is () except if suppress all the elements of this PRE
        // in this case is on next PRE
        while ( comments != () ) {
            PTREE   node (comments) ;
            
            // tail recursion 
            if ( node != <PRE> ) 
                goto for_continue ;
            
            // treatment
            comments == <,comments>;
            while ( (aComment = nextl(comments)) ) {
                
                // if doxygen comment get and supppress
                if ( VString(Value(aComment)).substring(0, doxyStarter.length()) == doxyStarter ) {
                    PTREE   father, nextElem ;
                    bool    lastCom (false) ;
                    
                    // identify position 
                    if ( ListLength(node [1]) == 1 ) {
                        father = node ^ ;
                        lastCom = true ;
                    } else {
                        father = aComment ^ ;
                    }
                    
                    // suppress elem 
                    father == <LIST,<>,nextElem>;
                    if ( father == comment ) {
                        comment = nextElem ;
                    } else {
                        father += nextElem ;
                    }
                    
                    // store comment
                    listDoxygen = <LIST,aComment,listDoxygen>;
                    
                    // set position of next step
                    if ( !lastCom ) {
                    } else {
                        if ( nextElem ) {
                            for_elem = nextElem ;
                            comments = nextElem [1];
                            break ;
                        } else {
                            goto for_break ;
                        }
                    }
                }
            }
        }
    })
    
    // returns the list
    listDoxygen = ListPermutate(listDoxygen);
    return listDoxygen ;
}

typedef struct {
    PTREE   fn ;
    PTREE   brief ;
    PTREE   file ;
    PTREE   param ;
    PTREE   returns ;
}   DoxyContent ;

/// 
/// @fn std::string DoxyIdentify (PTREE &comment) 
/// 
/// @brief DoxyIdentify
/// 
/// @param [in,out] comment
/// 
/// @returns  std::string
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
/// @fn void    RemoveLeadingSpace (EString &str, unsigned int max = 32000) 
/// 
/// @brief RemoveLeadingSpace
/// 
/// @param [in,out] str
/// @param [in,out] max
/// 
void RemoveLeadingSpace ( EString &str, unsigned int max = 32000 )
{
    char            *pt ;
    unsigned int    pos ;
    
    pt = (char *)str.c_str();
    pos = 0 ;
    while ( *pt && (*pt == ' ' || *pt == '\t') && pos < max ) {
        pos++ ;
        pt++ ;
    }
    if ( *pt ) {
        str = str.substring(pos);
    } else 
        str = "";
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
                    comments = theList ;
                    break ;
                } catch ( ... ) {
                    theList = comments ;
                    newList = <LIST,comment,newList>;
                }
            }
            
            // suppress the last empty elements of the list
            {
                PTREE   theList (newList), comment ;
                while ( (comment = nextl(newList)) ) {
                    
                    // if not empty string finished
                    EString content = Value(comment);
                    if ( content.substring(0, doxyStarter.length()) == doxyStarter ) {
                        content = content.substring(doxyStarter.length());
                    }
                    RemoveLeadingSpace(content);
                    if ( content.length() != 0 ) 
                        break ;
                    
                    // trailer on last element
                    theList = newList ;
                }
                newList = theList ;
            }
            
            // reorder
            if ( newList == <LIST> ) 
                newList = ListPermutate(newList);
            
            // suppress the starter
            {
                PTREE   theList (newList), comment ;
                int     numberSpace( -1);
                while ( (comment = nextl(theList)) ) {
                    EString content = Value(comment);
                    if ( content.substring(0, doxyStarter.length()) == doxyStarter ) {
                        content = content.substring(doxyStarter.length());
                    }
                    if ( numberSpace >= 0 ) {
                        RemoveLeadingSpace(content, numberSpace);
                    } else {
                        int orgSize = content.length();
                        RemoveLeadingSpace(content);
                        numberSpace = orgSize - content.length();
                    }
                    PTREE   newComment (content) ;
                    comment += newComment ;
                }
            }
            
            // identify modified entry
            PTREE   *modified ;
            if ( doxyHead == "@fn" ) {
                modified = &doxyContent.fn ;
            } else if ( doxyHead == "@brief" ) {
                modified = &doxyContent.brief ;
            } else if ( doxyHead == "@file" ) {
                modified = &doxyContent.file ;
            } else if ( doxyHead == "@param" ) {
                modified = &doxyContent.param ;
            } else if ( doxyHead == "@returns" ) {
                modified = &doxyContent.returns ;
            }
            
            // add the new content
            PTREE   oldList(*modified);
            newList = <UNO,newList>;
            oldList *= newList ;
            *modified = oldList ;
        } catch ( ... ) {
        }
    }
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
    
    while ( name && name != <IDENT> ) {
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
            default : 
                {
                    name = ();
                }
        }
    }
    return name ;
}

/// 
/// @fn PTREE   GetParam (PTREE &funct) 
/// 
/// @brief GetParam
/// 
/// @param [in,out] funct
/// 
/// @returns  PTREE
/// 
PTREE GetParam ( PTREE &funct )
{
    PTREE   parameter, declarator, listParameters ;
    
    if ( funct == <FUNC,<>,<>,<>,parameter,<>,declarator> ) {
        if ( declarator ) {
            parameter = declarator ;
        }
        
        // extract 
        PTREE   aDeclarator ;
        while ( (aDeclarator = nextl(parameter)) ) {
            
            // get the name of this parameter
            PTREE   name (DeclaratorToIdent(aDeclarator)) ;
            
            // if there is no name get the type as parameter name
            if ( name == () ) {
                PTREE   type ;
                aDeclarator == <,<>,type>;
                
                // decomp type
                EString         nameString ;
                Protector<int>  protector(output, -1);
                StartOutputString();
                (DecompChopb::ptDecomp) -> ChopTree(type);
                nameString << EndOutputString();
                
                // construct name 
                name = <IDENT,PTREE(nameString)>;
            } else 
                name = copytree(name);
            
            // add the param to the list
            listParameters = <LIST,name,listParameters>;
        }
        
        // reorder the list
        listParameters = ListPermutate(listParameters);
    }
    
    // return the list
    return listParameters ;
}

/// 
/// @fn PTREE   GetOldDoxyParam (PTREE &listParam, PTREE &name) 
/// 
/// @brief GetOldDoxyParam
/// 
/// @param [in,out] listParam
/// @param [in,out] name
/// 
/// @returns  PTREE
/// 
PTREE GetOldDoxyParam ( PTREE &listParam, PTREE &name )
{
    PTREE   aParam, nullTree, theList (listParam) ;
    
    while ( (aParam = nextl(theList)) ) {
        std::string     comment (Value(aParam)) ;
        unsigned int    offset = 6 ; // size of @param
        
        // search the ]
        {
            auto pos = comment.find("]");
            if ( pos != std::string::npos ) 
                offset = pos ;
        }
        
        // search the ident 
        if ( comment.find(Value(name), offset) != std::string::npos ) {
            PTREE   list = aParam ^ ;
            PTREE   next ;
            list == <LIST,<>,next>;
            if ( list == listParam ) {
                listParam = next ;
            } else {
                list += next ;
            }
            return aParam ;
        }
    }
    
    // nothing was found
    return nullTree ;
}

/// 
/// @fn void    DoxyNormalize (PTREE &tree, DoxyContent &doxy, PTREE &listParam) 
/// 
/// @brief DoxyNormalize
/// 
/// @param [in,out] tree
/// @param [in,out] doxy
/// @param [in,out] listParam
/// 
void DoxyNormalize ( PTREE &tree, DoxyContent &doxy, PTREE &listParam )
{
    
    // normalize the function header
    PTREE   header = doxy.fn ;
    PTREE   functionName = tree [3];
    bool    nameReferenced (false) ;
    
    // look if the name is referenced in the comments
    PTREE   comment, theList ;
    
#if 0
    header == <UNO,theList>;
    while ( (comment = nextl(theList)) ) {
        std::string strComment = Value(comment);
        if ( strComment.find(Value(functionName)) != std::string::npos ) {
            nameReferenced = true ;
            break ;
        }
    }
#endif
    
    // if name is not reference add it
    if ( !nameReferenced ) {
        PTREE   rangeModif, type, declarator, param ;
        if ( tree == <FUNC,rangeModif,type,declarator,param> ) {
            PTREE   theDeclarator = copytree(declarator);
            functionName = DeclaratorToIdent(theDeclarator);
            
            // contruct the declarator 
            PTREE           newDeclarator = <TYP_LIST,copytree(functionName),copytree(param),(),()>;
            
            // construct a declaration for the function
            PTREE           header = <DECLARATION,copytree(rangeModif),copytree(type),<LIST,newDeclarator,()>>;
            
            // put this in a string 
            EString         nameString("@fn ");
            Protector<int>  protector(output, -1);
            StartOutputString();
            (DecompChopb::ptDecomp) -> ChopTree(header);
            nameString << EndOutputString();
            nameString.ReplaceString(";", "");
            
            // add this new comment 
            header = <UNO,<LIST,PTREE(nameString),()>>;
            theList = <LIST,header,()>;
            doxy.fn = theList ;
        }
    }
    
    // if there is no brief add one
    PTREE   brief(doxy.brief);
    
    if ( brief == () ) {
        EString briefString("@brief ");
        briefString << Value(functionName);
        PTREE   list ;
        list = <LIST,<UNO,<LIST,PTREE(briefString),()>>,()>;
        doxy.brief = list ;
    }
    
    // update the parameter
    PTREE   newListParam ;
    
    {
        PTREE   param, theList (listParam), newComment ;
        while ( (param = nextl(theList)) ) {
            
            // get old comment about this param
            PTREE   oldComment = GetOldDoxyParam(doxy.param, param);
            if ( oldComment == () ) {
                
                // if not old comment generate one
                EString paramComment("@param [in,out] ");
                paramComment << Value(param);
                PTREE   paramCommentString = PTREE(paramComment);
                newComment = <UNO,<LIST,paramCommentString,()>>;
            } else 
                newComment = oldComment ;
            newListParam *= newComment ;
        }
    }
    
    // get back the remaining param, obsolete them
    {
        PTREE   remainingParam(doxy.param);
        PTREE   param ;
        while ( (param = nextl(remainingParam)) ) {
            param == <UNO,param>;
            param = <OBSOLETE,param>;
            newListParam *= param ;
        }
    }
    
    // put back the param
    doxy.param = newListParam ;
    
    // update the return
    PTREE   returnFunct(doxy.returns);
    
    if ( returnFunct == () ) {
        PTREE   type ;
        if ( tree == <FUNC,<>,type> && type != <VOID> ) {
            
            // construct string 
            EString         returnString("@returns ");
            Protector<int>  protector(output, -1);
            StartOutputString();
            (DecompChopb::ptDecomp) -> ChopTree(type);
            returnString << EndOutputString();
            
            // put it
            PTREE   listReturn = <LIST,PTREE(returnString),()>;
            listReturn = <LIST,<UNO,<LIST,PTREE(returnString),()>>,()>;
            doxy.returns = listReturn ;
        }
    }
}

/// 
/// @fn void    AddComments (PTREE &listResult, PTREE &listAdded, bool emptyFront = true) 
/// 
/// @brief AddComments
/// 
/// @param [in,out] listResult
/// @param [in,out] listAdded
/// @param [in,out] emptyFront
/// 
void AddComments ( PTREE &listResult, PTREE &listAdded, bool emptyFront = true )
{
    PTREE   comment ;
    PTREE   list ;
    
    if ( emptyFront ) {
        EString commentString = doxyStarter + " ";
        listResult = <LIST,<PRE,<LIST,PTREE(commentString),()>>,listResult>;
    }
    switch ( listAdded ) {
        case <UNO,list> : 
            {
                while ( (comment = nextl(list)) ) {
                    EString commentString = doxyStarter + " ";
                    commentString << Value(comment);
                    listResult = <LIST,<PRE,<LIST,PTREE(commentString),()>>,listResult>;
                }
            }
            break ;
        case <OBSOLETE,list> : 
            {
                while ( (comment = nextl(list)) ) {
                    EString commentString = doxyStarter + " #### ";
                    commentString << Value(comment);
                    listResult = <LIST,<PRE,<LIST,PTREE(commentString),()>>,listResult>;
                }
            }
            break ;
        case <LIST> : 
            {
                list = listAdded ;
                while ( (comment = nextl(list)) ) {
                    AddComments(listResult, comment, false);
                }
            }
            break ;
        default : break ;
    }
}

/// 
/// @fn void    DoxyFunc (PTREE tree) 
/// 
/// @brief DoxyFunc
/// 
/// @param [in,out] tree
/// 
void DoxyFunc ( PTREE tree )
{
    PTREE       comm = GetComm(tree);
    
    // get the comments 
    PTREE       doxy = GetSuppressDoxy(comm);
    
    // classify them
    DoxyContent doxyContent ;
    
    ClassifyDoxy(doxy, doxyContent);
    
    // identify the param of the function 
    PTREE   listParam = GetParam(tree);
    
    // reconstruct the different elems
    DoxyNormalize(tree, doxyContent, listParam);
    
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
        listNormalizedComments = ListPermutate(listNormalizedComments);
    }
    
    PTREE   newComm = listNormalizedComments ;
    
    if ( comm == <LIST> && comm == <,(),()> ) {
        newComm = AddListList(newComm, comm);
    }
    
    // create enriched comments with good doxygen
    //  put back the enriched comments 
    PutComm(tree, newComm);
}

/// 
/// @fn void    decomp (PTREE tree) 
/// 
/// @brief decomp
/// 
/// @param [in,out] tree
/// 
void decomp ( PTREE tree )
{
    DecompChopb decomp ;
    
    DecompChopb::ptDecomp = (DecompChopb *)(&decomp);
    DecompCplus::ptDecomp = (DecompCplus *)(&decomp);
    foreach ((),tree,{
        PTREE   elem (for_elem) ;
        switch ( elem ) {
            case <FUNC> : 
                DoxyFunc(elem);
                break ;
            default : break ;
        }
    })
    
    //  DumpTree(tree);
    decomp.ChopTree(tree);
}



