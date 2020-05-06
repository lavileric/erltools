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

const EString               doxyStarter("//");
const EString               doxyStarterBis("/|");
const vector<std::string>   doxyStart = {"@fn", "@buf", "@file", "@param", "@returns", "@brief", "@class", "@typedef", "@struct", "@enum", "@union"};

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
void                        decomp (PTREE) ;

typedef struct {
    PTREE   fn ;
    PTREE   brief ;
    PTREE   file ;
    PTREE   param ;
    PTREE   returns ;
    PTREE   classTree ;
}   DoxyContent ;

typedef struct {
    PTREE                       tree ;
    PTREE                       listInclude ;
    EString                     fileName ;
    MapTreeIdentifier<PTREE>    functionDeclarators ;
}   TreeStruct ;

void    DoxyFy (TreeStruct &treeStruct) ;

EString FilePart ( const char *name )
{
    std::string str (name) ;
    auto         found = str.find_last_of("/\\");
    
    if ( found != string::npos ) 
        return EString(str.substr(found + 1).c_str());
    else 
        return EString(name);
}

EString DirectoryPart ( const char *name )
{
    std::string str (name) ;
    std::size_t found = str.find_last_of("/\\");
    
    if ( found != string::npos ) 
        return EString(str.substr(0, found).c_str());
    else 
        return EString(".");
}

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
                    if ( content.substring(0, doxyStarter.length()) == doxyStarter ) {
                        content =  content.substring(doxyStarter.length());
                    }
                    RemoveLeadingSpace(content);
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
                    if ( content.substring(0, doxyStarter.length()) == doxyStarter ) {
                        content =  content.substring(doxyStarter.length());
                    }
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
        EString                     name (ptName) ;
        MapTreeIdentifier<PTREE>    functionDeclarators ;
        TreeStruct                  treeStruct {tree, listInclude, name, functionDeclarators};
        DoxyFy(treeStruct);
    }
    
    // return potential errorssma
    MetaEnd();
    if ( !firstError ) 
        return 1 ;
    else 
        return 0 ;
}

PTREE GetSuppressDoxy ( PTREE &comment, bool suppress = true )
{
    PTREE               listDoxygen ;
    static unsigned int number = 0 ;
    
    number++ ;
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
                        
                        // listDoxygen =  <LIST,<H,aComment>,listDoxygen>;
                    } else {
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
    })
    
    // returns the list
    listDoxygen =  ListPermutate(listDoxygen);
    return listDoxygen ;
}

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
                    name =  ();
                }
        }
    }
    return name ;
}

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
        if ( aDeclarator == <,<TIDENT>,<TYP,<IDENT>>> && ListLength(sParameter) == 1 ) {
            throw 0 ;
        }
        
        // get the name of this parameter
        PTREE   name (DeclaratorToIdent(aDeclarator)) ;
        
        // add the param to the list
        listParameters =  <LIST,copytree(name),listParameters>;
        
        // follow parameters
        follower       =  parameter ;
    }
    
    // reorder the list
    listParameters =  ListPermutate(listParameters);
    
    // return the list
    return listParameters ;
}

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
                offset =  pos ;
        }
        
        // search the ident 
        if ( comment.find(Value(name), offset) != std::string::npos ) {
            PTREE   list = aParam ^ ;
            PTREE   next ;
            list == <LIST,<>,next>;
            if ( list == listParam ) {
                listParam =  next ;
            } else {
                list += next ;
            }
            return aParam ;
        }
    }
    
    // nothing was found
    return nullTree ;
}

typedef struct {
    PTREE   range ;
    PTREE   type ;
    PTREE   declarator ;
    PTREE   param ;
    PTREE   constVal ;
}   FUNC_DESCRIPTOR ;

void DoxyAllFunctNormalize ( PTREE &tree, DoxyContent &doxy, PTREE &classTree, FUNC_DESCRIPTOR &functDescriptor )
{
    
    // normalize the function header
    PTREE   header = doxy.fn ;
    PTREE   functionName = functDescriptor.declarator ;
    
    // --
    PTREE   comment, theList ;
    
    // compute and put the name 
    {
        
        // if inside a class qualify the name with the class name 
        PTREE   theDeclarator = copytree(functDescriptor.declarator);
        if ( theDeclarator != <DESTRUCT> ) {
            functionName =  DeclaratorToIdent(theDeclarator);
        } else {
            functionName =  theDeclarator ;
        }
        
        // in class qualify
        PTREE   classTreeName ;
        if ( classTree == <CLASS,<>,classTreeName> ) {
            classTreeName =  DeclaratorToIdent(classTreeName);
            if ( classTreeName != () ) {
                PTREE   newName = <QUALIFIED,copytree(classTreeName),copytree(functionName)>;
                if ( functionName == theDeclarator ) 
                    theDeclarator =  newName ;
                else {
                    functionName += newName ;
                }
            }
        }
        
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
                paramComment << Value(param);
                PTREE   paramCommentString = PTREE(paramComment);
                newComment =  <UNO,<LIST,paramCommentString,()>>;
            } else 
                newComment =  oldComment ;
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

void HXFY ( PTREE &comments )
{
    foreach (<C>,comments,{
        PTREE   elem (for_elem) ;
        PTREE   hComment = <H,PTREE(VString(Value(elem)))>;
        elem     += hComment ;
        for_elem =  hComment ;
    })
}

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
        PTREE   listParam = GetParam(parameter), param ;
        while ( (param = nextl(listParam)) ) {
            
            // get old comment about this param
            PTREE   oldParam = GetOldDoxyParam(listDoxy, param);
            PTREE   oldDeclParam = GetOldDoxyParam(listDeclDoxy, param);
            PTREE   newParam = MergeDoxy(oldParam, oldDeclParam);
            listSynthDoxy *= newParam ;
        }
        
        // put the remaining from decl
        if ( listDeclDoxy != () ) {
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

void DoxyFuncNormalize ( PTREE &tree, PTREE &classTree, DoxyContent &doxy, DoxyContent &doxyDecl )
{
    PTREE   range, type, declarator, parameter, oldParameter, constVal ;
    
    if ( tree == <FUNC,range,type,declarator,parameter,constVal,oldParameter> ) {
        if ( oldParameter ) {
            parameter =  oldParameter ;
        }
        
        // merge own dowy with doxy of the declarator
        DoxyContent doxyMerge ;
        DoxyFuncMerge(doxyMerge, doxy, doxyDecl, parameter);
        
        // --
        FUNC_DESCRIPTOR functDescriptor = { range, type, declarator, parameter, constVal };
        DoxyAllFunctNormalize(tree, doxyMerge, classTree, functDescriptor);
        doxy =  doxyMerge ;
    }
}

void DoxyDeclFuncNormalize ( PTREE &tree, PTREE &classTree, DoxyContent &doxy )
{
    PTREE   range, type, declarator, topDeclarator, parameter, oldParameter, constVal ;
    
    if ( tree == <DECLARATION,range,type,<LIST,topDeclarator,()>> ) {
        topDeclarator =  DeclaratorToIdent(topDeclarator);
        topDeclarator =  topDeclarator ^ ;
        while ( topDeclarator == <QUALIFIED> ) {
            topDeclarator =  topDeclarator ^ ;
        }
        if ( topDeclarator == <TYP_LIST,declarator,parameter,constVal> ) {
            
            // --
            FUNC_DESCRIPTOR functDescriptor = { range, type, declarator, parameter, constVal };
            DoxyAllFunctNormalize(tree, doxy, classTree, functDescriptor);
        }
    }
}

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

void DoxyFileNormalize ( PTREE &tree, DoxyContent &doxy, EString &fileName )
{
    
    // look if the name is referenced in the comments
    PTREE   comment, theList ;
    EString classString ;
    
    // name of file
    {
        PTREE   rangeModif, type, declarator, param ;
        {
            
            // put this in a string 
            EString nameString("@file ");
            nameString << fileName ;
            
            // add this new comment 
            PTREE   header = <UNO,<LIST,PTREE(nameString),()>>;
            theList   =  <LIST,header,()>;
            doxy.file =  theList ;
        }
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

void AdjustNL ( EString &commentString, EString &starter )
{
    EString adjustment("\n");
    
    adjustment << "/" << starter ;
    commentString.ReplaceString("\n", adjustment);
}

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

PTREE GetFuncKey ( PTREE &type, PTREE &declarator, PTREE &parameter, PTREE &classRef )
{
    
    // create a list of all the elements 
    PTREE   listKey ;
    
    // type and declarator
    listKey =  <LIST,<DUO,copytree(type),copytree(declarator)>,()>;
    
    // than all they types inside the parameters
    PTREE   param, listParam (parameter) ;
    
    while ( (param = nextl(listParam)) ) {
        PTREE   typeParam ;
        param == <DECLARATOR,typeParam,<>>;
        listKey =  <LIST,copytree(typeParam),listKey>;
    }
    
    // add the class
    {
        PTREE   className ;
        className =  <NONE>;
        classRef == <CLASS,<>,className>;
        listKey =  <LIST,copytree(className),listKey>;
    }
    
    // returns the list
    return listKey ;
}

PTREE GetDoxyDeclatorFunc ( PTREE &tree, PTREE &classTree, TreeStruct &treeStruct )
{
    PTREE   range, type, declarator, parameter, oldParameter, constVal, doxy, newClassTree (classTree) ;
    
    if ( tree == <FUNC,range,type,declarator,parameter,constVal,oldParameter> ) {
        
        // for member suppress the class indication 
        {
            PTREE   newDeclarator = copytree(declarator);
            PTREE   insideDeclarator ;
            insideDeclarator =  DeclaratorToIdent(newDeclarator);
            insideDeclarator =  insideDeclarator ^ ;
            PTREE   qualifier, name ;
            if ( insideDeclarator == <QUALIFIED,qualifier,name> ) {
                newClassTree =  <CLASS,PTREE("class"),qualifier,()>;
                if ( newDeclarator != insideDeclarator ) {
                    insideDeclarator += name ;
                } else {
                    newDeclarator =  name ;
                }
            }
            declarator =  newDeclarator ;
        }
        
        // construct the key 
        PTREE   listKey = GetFuncKey(type, declarator, parameter, newClassTree);
        
        // retrieve the  decl for this key if its exists
        PTREE   decl = TreeIdentifier::Retrieve<PTREE> (listKey, treeStruct.functionDeclarators);
        
        // get the doxygen comment on the declarator
        if ( decl != () ) {
            
            // get the com from this decclaration
            PTREE   commDecl = GetComm(decl);
            
            // get the comments 
            if ( commDecl != () ) {
                doxy =  GetSuppressDoxy(commDecl, false);
            }
        }
    }
    
    // return
    return doxy ;
}

void DoxyFunc ( PTREE &tree, PTREE &classTree, TreeStruct &treeStruct )
{
    PTREE   comm = GetComm(tree);
    PTREE   oldComm = copytree(comm);
    PTREE   newComm ;
    
    try {
        
        // get the comments 
        PTREE       doxy = GetSuppressDoxy(comm);
        
        // classify them
        DoxyContent doxyContent ;
        ClassifyDoxy(doxy, doxyContent);
        
        // reconstruct the different elems
        if ( tree == <FUNC> ) {
            
            // try to get a doxy on the declarator
            PTREE       decl = GetDoxyDeclatorFunc(tree, classTree, treeStruct);
            
            // analyze
            DoxyContent doxyDeclContent ;
            ClassifyDoxy(decl, doxyDeclContent);
            
            // normalize
            DoxyFuncNormalize(tree, classTree, doxyContent, doxyDeclContent);
        } else 
            DoxyDeclFuncNormalize(tree, classTree, doxyContent);
        
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
    PutComm(tree, newComm);
}

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

void Treatment ( TreeStruct &treeStruct, PTREE &classTree, bool embedded = false )
{
    PTREE   declarator, tree(treeStruct.tree);
    
    if ( classTree == () ) 
        DoxyProgram(treeStruct);
    foreach ((),tree,{
        PTREE   elem (for_elem) ;
        switch ( elem ) {
            case <FUNC> : 
                {
                    DoxyFunc(elem, classTree, treeStruct);
                    
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
            case <DECLARATION,<>,<>,<LIST,declarator,()>> : 
                {
                    if ( !embedded ) {
                        PTREE   insideDeclarator = DeclaratorToIdent(declarator);
                        insideDeclarator =  insideDeclarator ^ ;
                        while ( insideDeclarator == <QUALIFIED> ) {
                            insideDeclarator =  insideDeclarator ^ ;
                        }
                        if ( insideDeclarator == <TYP_LIST> ) 
                            DoxyFunc(elem, classTree, treeStruct);
                    }
                }
                break ;
            case <TYPEDEF> : 
                {
                    DoxyClass(elem, elem);
                }
                break ;
            case <CLASS> : 
                {
                    
                    // go on the declaration
                    PTREE   declaration (elem) ;
                    while ( declaration != tree && declaration != <DECLARATION> ) {
                        declaration =  declaration ^ ;
                    }
                    if ( declaration == <DECLARATION> ) {
                        DoxyClass(declaration, elem);
                        if ( VString(Value(elem)) == "class" ) {
                            
                            // doxyfy the inside
                            forallsons (elem,{
                                PTREE       son (for_elem) ;
                                TreeStruct  sonStruct = treeStruct ;
                                sonStruct.tree =  son ;
                                Treatment(sonStruct, elem);
                            })
                        }
                        
                        // go on
                        goto for_continue ;
                    }
                }
                break ;
            default : break ;
        }
    })
}

void AddFunctDeclarator ( PTREE &entry, TreeStruct &treeStruct, PTREE &classRef )
{
    PTREE   range, type, declarator, parameter, constVal, topDeclarator ;
    
    if ( entry == <DECLARATION,range,type,<LIST,topDeclarator,()>> ) {
        topDeclarator =  DeclaratorToIdent(topDeclarator);
        topDeclarator =  topDeclarator ^ ;
        while ( topDeclarator == <QUALIFIED> ) {
            topDeclarator =  topDeclarator ^ ;
        }
        if ( topDeclarator == <TYP_LIST,declarator,parameter,constVal> ) {
            
            // get the key
            PTREE   listKey = GetFuncKey(type, declarator, parameter, classRef);
            
            // put it in the map
            entry =  copytree(entry);
            TreeIdentifier::UniqueTree<PTREE> (listKey, treeStruct.functionDeclarators, entry);
        }
    }
}

void SearchFunctDecl ( TreeStruct &treeStruct, PTREE &fileTree, PTREE &classRef )
{
    PTREE   tree (fileTree) ;
    PTREE   declarator ;
    
    foreach ((),tree,{
        PTREE   elem (for_elem) ;
        switch ( elem ) {
            case <FUNC> : 
                {
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
                            AddFunctDeclarator(elem, treeStruct, classRef);
                    }
                }
                break ;
            case <CLASS> : 
                {
                    if ( VString(Value(elem)) == "class" ) {
                        
                        // doxyfy the inside
                        forallsons (elem,{
                            PTREE   son (for_elem) ;
                            SearchFunctDecl(treeStruct, son, elem);
                        })
                    }
                    
                    // go on
                    goto for_continue ;
                }
                break ;
            default : break ;
        }
    })
}

void ComputeReference ( TreeStruct &treeStruct )
{
    
    // get the funct declarators at first level and inside the classes in current tree and all the included files
    std::vector<PTREE>  allTrees ;
    PTREE               elem, listInclude(treeStruct.listInclude);
    
    // store the trees in one vector 
    allTrees.push_back(treeStruct.tree);
    while ( (elem = nextl(listInclude)) ) 
        allTrees.push_back(elem);
    
    // treat them
    for ( PTREE &file : allTrees ) {
        PTREE   nullTree ;
        SearchFunctDecl(treeStruct, file, nullTree);
    }
}

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


