
/*************************************************************************/
/*                                                                       */
/*        Produced by Metachop version 2.0  -    1989-1995               */
/*     Tree      Meta     Chopper      developped    by                  */
/*                  Eric Lavillonniere                                   */
/*                                                                       */
/*************************************************************************/

#include "token.h"
#define decomp decomp_metachop

#ifndef for_elem
#define for_elem _for_elem


#endif
#ifdef INCONNU
PTREE   for_elem ;


#endif
#define DISABLE_EXTERN_INCLUDE 

#include "interf.h"
#include <stdio.h>
#include <fcntl.h>
#include "memges.h"

void    InsertVar (char *, PTREE, int, PTREE) ;

#if 0
extern char *currentLanguage ;

extern int  firstError ;


#endif

PVAR    listVar = (PVAR)0, listFreeVar = (PVAR)0 ;
int cplusGen ;


int CompareTree ( PTREE tree1, PTREE tree2, PTREE father, int slot )
{
    int _nextVal ;
    
    
    int arity, currParam ;
    
    int nbTree1 ;
    
debut : 
    nbTree1 = NumberTree(tree1);
    if ( nbTree1 == META ) {
                                InsertVar(AllocString(BrainyValue(tree1)), father, slot, tree2);
                                return 1 ;
                                
                                
                             }
    if ( (!tree1) || (!tree2) ) 
        return !((!tree1) ^ (!tree2));
    
    if ( NumberTree(tree1) == NumberTree(tree2) ) {
                                                        if ( NumberTree(tree1) == TERM_TREE ) {
                                                                                                    return !strcmp(CacheAddrRead(sontree(tree1, 1)), CacheAddrRead(sontree(tree2, 1)));
                                                                                                    
                                                                                                    
                                                                                                 } else 
                                                        {
                                                            if ( (arity = treearity(tree1)) >= 1 ) {
                                                                                                            for ( currParam = arity ; currParam > 1 ; currParam-- ) 
                                                                                                                if ( !CompareTree(sontree(tree1, currParam), sontree(tree2, currParam), tree2, currParam) ) 
                                                                                                                    return 0 ;
                                                                                                                
                                                                                                            
                                                                                                            (tree1=sontree(tree1, 1));
                                                                                                            
                                                                                                            (tree2=sontree(tree2, 1));
                                                                                                            
                                                                                                            (father=tree2);
                                                                                                            
                                                                                                            slot = 1 ;
                                                                                                            goto debut ;
                                                                                                            
                                                                                                            
                                                                                                        }
                                                            return 1 ;
                                                            
                                                            
                                                        }
                                                        
                                                        
                                                      } else 
        return 0 ;
        
    
    
}


int QCompareTree ( PPTREE tree1, PPTREE tree2, PPTREE father, int slot )
{
    int _nextVal ;
    
    
    int arity, currParam ;
    
    int nbTree1, nbTree2 ;
    
debut : 
    nbTree1 = NumberTree(tree1);
    if ( nbTree1 == META ) 
        return 1 ;
    
    if ( !tree1 || !tree2 ) 
        return !(!tree1 ^ !tree2);
    
    nbTree2 = NumberTree(tree2);
    if ( nbTree1 == CLASS_TREE ) 
        nbTree1 = TERM_TREE ;
    if ( nbTree2 == CLASS_TREE ) 
        nbTree2 = TERM_TREE ;
    if ( nbTree1 == nbTree2 ) {
                                    if ( nbTree1 == TERM_TREE ) {
                                                                    return !strcmp(Value(tree1), Value(tree2));
                                                                    
                                                                    
                                                                  } else 
                                    {
                                        if ( (arity = treearity(tree1)) >= 1 ) {
                                                                                        for ( currParam = arity ; currParam > 1 ; currParam-- ) 
                                                                                            if ( !QCompareTree(sontree(tree1, currParam), sontree(tree2, currParam), (PPTREE)0, -1) ) 
                                                                                                return 0 ;
                                                                                            
                                                                                        
                                                                                        tree1 = sontree(tree1, 1);
                                                                                        tree2 = sontree(tree2, 1);
                                                                                        goto debut ;
                                                                                        
                                                                                        
                                                                                    }
                                        return 1 ;
                                        
                                        
                                    }
                                    
                                    
                                } else 
        return 0 ;
        
    
    
}


PVAR AllocVar ()
{
    int _nextVal ;
    
    
    PVAR    myPoint ;
    
    if ( listFreeVar ) {
                            myPoint = listFreeVar ;
                            listFreeVar = listFreeVar -> next ;
                            
                        } else 
        myPoint = (PVAR)malloc(sizeof(VAR));
    
    myPoint -> name = (char *)0 ;
    myPoint -> father = (PPTREE)0 ;
    myPoint -> slot = -1 ;
    myPoint -> elem = (PPTREE)0 ;
    return (myPoint);
    
    
}


void FreeVar ()
{
    int _nextVal ;
    
    
    PVAR    interVar, frontVar ;
    
    interVar = frontVar = listVar ;
    while ( frontVar ) {
                            interVar = frontVar ;
                            free(frontVar -> name);
                            frontVar = frontVar -> next ;
                            
                        }
    if ( frontVar != interVar ) {
                                    interVar -> next = listFreeVar ;
                                    listFreeVar = listVar ;
                                    listVar = (PVAR)0 ;
                                    
                                  }
    
}


void InsertVar ( char *name, PTREE father, int slot, PTREE elem )
{
    int _nextVal ;
    
    
    PVAR    pVar ;
    
    pVar = AllocVar();
    pVar -> name = name ;
    pVar -> father = father ;
    pVar -> slot = slot ;
    pVar -> elem = elem ;
    pVar -> next = listVar ;
    listVar = pVar ;
    
}


PVAR SearchVar ( const char *name )
{
    int _nextVal ;
    
    
    register PVAR   pVar = listVar ;
    
    while ( pVar ) {
                        if ( !strcmp(pVar -> name, name) ) 
                            return (pVar);
                        
                        pVar = pVar -> next ;
                        
                    }
    return (PVAR)0 ;
    
    
}


PTREE ForeachTreeMeta ( const char *name, PTREE &treeApp, PTREE(*callFunct)(PTREE &, PTREE &, int, PTREE &, int &), PTREE &father, int position, PTREE &treeSubstitution, int &nbsubstitution )
{
    int _nextVal ;
    
    
    int arity, currParam ;
    
    PTREE   retTree ((void *)0) ;
    
    PTREE   son ;
    
    PTREE   operand = (PTREE)0 ;
    
    PTREE   operandFather = (PTREE)0 ;
    
    (operand=treeApp);
    
    (operandFather=father);
    
start : 
    if ( (!operand) ) 
        return retTree ;
    
    if ( NumberTree(operand) == META && !strcmp(BrainyValue(operand), name) ) {
                                                                                        PTREE   ret = (PTREE)0 ;
                                                                                        
                                                                                        (ret=(PTREE)(*callFunct)(operand, operandFather, position, treeSubstitution, nbsubstitution));
                                                                                        
                                                                                        if ( retTree == PTREE(0) ) 
                                                                                            (retTree=ret);
                                                                                        
                                                                                        return retTree ;
                                                                                        
                                                                                        
                                                                                      }
    if ( NumberTree(operand) == IN_LANGUAGE ) 
        return retTree ;
    
    if ( NumberTree(operand) != TERM_TREE ) {
                                                if ( retTree == PTREE(0) ) 
                                                    (retTree=operand);
                                                
                                                arity = treearity(operand);
                                                for ( currParam = 1 ; currParam < arity ; currParam++ ) {
                                                                                                                (son=sontree(operand, currParam));
                                                                                                                
                                                                                                                ForeachTreeMeta(name, son, callFunct, operand, currParam, treeSubstitution, nbsubstitution);
                                                                                                                
                                                                                                             }
                                                
                                                if ( arity >= 1 ) {
                                                                        (operandFather=operand);
                                                                        
                                                                        (operand=sontree(operand, arity));
                                                                        
                                                                        position = arity ;
                                                                        goto start ;
                                                                        
                                                                        
                                                                    }
                                                
                                               }
    return retTree ;
    
    
}


PTREE ForReplace ( PTREE &elem, PTREE &father, int slot, PTREE &treeSubstitution, int &nbsubstitution )
{
    int _nextVal ;
    
    if ( (!father) ) 
        return treeSubstitution ;
    
    if ( !nbsubstitution ) 
        nbsubstitution = 1 ;
    else 
        (treeSubstitution=CopyTree(treeSubstitution));
        
    
    return ReplaceTree(father, slot, treeSubstitution);
    
    
}


PTREE MetaRep ( const char *name, PPTREE tree, PPTREE treeSubst )
{
    int _nextVal ;
    
    
    PTREE   res ;
    
    AddRef(tree);
    AddRef(treeSubst);
    {
        PTREE   nullTree = (PTREE)0 ;
        
        PTREE   firstTree = (PTREE)0 ;
        
        int nbsubstitution = 0 ;
        
        PTREE   treeSubstitution = (PTREE)0 ;
        
        (nullTree=(PTREE)0);
        
        (firstTree=tree);
        
        (treeSubstitution=treeSubst);
        
        (res=ForeachTreeMeta(name, firstTree, ForReplace, nullTree, -1, treeSubstitution, nbsubstitution));
        
        
    }
    
    RemRef(treeSubst);
    RemRef(tree);
    StoreRef(res);
    return res ;
    
    
}

#include "squeeze.c"

#if 0
int _retVal [50];

PPTREE  _storeVal [50], _nextVal ;

PPTREE  stackTree [1024];

int ptStackTree = 0 ;

extern char *tabLabel ;

extern STRINGELEM   *listConst ;

extern char *includeEnv ;

extern int  input, output, coutput, houtput ;


#endif


PTREE find ( PTREE paramTree, PTREE tree )
{
    int _nextVal ;
    
    {
        ItPtree _iterator1 (tree, paramTree) ;
        
        PTREE   _for_elem ;
        
        _iterator1.AllSearch(1);
        while ( (_for_elem=_iterator1++) ) {
            {
                return for_elem ;
                
                
            }
            
            _iterator1.Current(_for_elem);
            continue ;
            
        for_continue1 : 
            _iterator1.Current(_for_elem);
            _iterator1.SkipSon(1);
            continue ;
            
        for_break1 : 
            break ;
            
            
        }
        
    }
    
    return (PTREE)0 ;
    
    
}


PTREE metafind ( PTREE paramTree, PTREE tree )
{
    register PPTREE _inter ;

    PTREE   _Baum0 ;
    
    int _nextVal ;
    
    
    char    *myString = (char *)Value(paramTree);
    
    {
        PPTREE _ptTree0= (PPTREE) 0,_ptRes0= (PPTREE) 0;
        _ptRes0 = MakeTree(META, 1);
        _ptTree0 = MakeString("meta") ;
        ReplaceTree(_ptRes0, 1, _ptTree0);
        _Baum0 = _ptRes0;
    }
    
    {
        ItPtree _iterator1 (tree, _Baum0) ;
        
        PTREE   _for_elem ;
        
        _iterator1.AllSearch(1);
        while ( (_for_elem=_iterator1++) ) {
            {
                if ( NumberTree(for_elem) == META && !strcmp(myString, CacheAddrRead(sontree(sontree(for_elem, 1), 1))) ) {
                                                                                                                                      return for_elem ;
                                                                                                                                      
                                                                                                                                      
                                                                                                                                      }
                
            }
            
            _iterator1.Current(_for_elem);
            continue ;
            
        for_continue1 : 
            _iterator1.Current(_for_elem);
            _iterator1.SkipSon(1);
            continue ;
            
        for_break1 : 
            break ;
            
            
        }
        
    }
    
    return (PPTREE)0 ;
    
    
}


void replace ( PTREE paramTree, PTREE tree, PTREE new_value )
{
    int _nextVal ;
    
    
    int firstReplace = 1 ;
    
    {
        ItPtree _iterator1 (tree, paramTree) ;
        
        PTREE   _for_elem ;
        
        _iterator1.AllSearch(1);
        while ( (_for_elem=_iterator1++) ) {
            {
                if ( FatherTree(for_elem) ) {
                                                PTREE   replace_tree ;
                                                
                                                if ( firstReplace ) {
                                                                        firstReplace = 0 ;
                                                                        (replace_tree=new_value);
                                                                        
                                                                        
                                                                     } else 
                                                    (replace_tree=CopyTree(new_value));
                                                    
                                                
                                                {
                                                    PPTREE _ptTree0= (PPTREE) 0,_sonTree0= (PPTREE) 0 ;
                                                    if (_ptTree0= fathertree(for_elem)) {
                                                        int rank = ranktree(for_elem);
                                                        ReplaceTree(_ptTree0,rank,replace_tree);
                                                    }
                                                    for_elem = replace_tree;
                                                }
                                                
                                                goto for_continue1 ;
                                                
                                                
                                             }
                
            }
            
            _iterator1.Current(_for_elem);
            continue ;
            
        for_continue1 : 
            _iterator1.Current(_for_elem);
            _iterator1.SkipSon(1);
            continue ;
            
        for_break1 : 
            break ;
            
            
        }
        
    }
    
    
}


void CLDumpTree ( PPTREE treeParam )
{
    int _nextVal ;
    
    
    PTREE   tree (treeParam) ;
    
    tree.CLDumpTree();
    
}


void LDumpTree ( PPTREE treeParam )
{
    int _nextVal ;
    
    PTREE(treeParam).LDumpTree();
    
}


void DumpTree ( PPTREE treeParam )
{
    int _nextVal ;
    
    PTREE(treeParam).DumpTree();
    
}


void MDumpTree ( PPTREE tree, int pageNum )
{
    int _nextVal ;
    
    PTREE(tree).MDumpTree(pageNum);
    
}


void DumpNode ( PPTREE tree )
{
    int _nextVal ;
    
    PTREE(tree).DumpNode();
    
}

#undef LNewLine

#define INT int

#if !defined(VARARGS_2)

void TheConstructor ( PPTREE(&stackTree)[1024], int &ptStackTree, int va_alist, ((_inter = (PPTREE),1) && 
                                                                                      )
                                                                                      {
                                                                                        register PPTREE _inter ;
                                                                                      
                                                                                        int _nextVal ;
                                                                                        
                                                                                        
                                                                                        register int    arity ;
                                                                                        
                                                                                        int NodeType ;
                                                                                        
                                                                                        MY_TREE ptTree ;
                                                                                        
                                                                                        va_list arg_marker ;
                                                                                        
                                                                                        va_start(arg_marker);
                                                                                        NodeType = (int)va_arg(arg_marker,INT);
                                                                                        while ( NodeType != -3 ) {
                                                                                                                        switch ( NodeType ) {
                                                                                                                        case -2 : 
                                                                                                                        PushTree((PPTREE)va_arg(arg_marker,PPTREE));
                                                                                                                        break ;
                                                                                                                        
                                                                                                                        case -4 : 
                                                                                                                        PushTree((PPTREE)0);
                                                                                                                        break ;
                                                                                                                        
                                                                                                                        default : 
                                                                                                                        ptTree = MakeTree(NodeType, arity = (int)va_arg(arg_marker,INT));
                                                                                                                        for (; arity ; arity-- ) 
                                                                                                                        ReplaceTree(ptTree, arity, PopTree);
                                                                                                                        
                                                                                                                        PushTree(ptTree);
                                                                                                                        break ;
                                                                                                                        
                                                                                                                        }
                                                                                                                        
                                                                                                                        NodeType = (int)va_arg(arg_marker,INT);
                                                                                                                        
                                                                                                                    }
                                                                                        
                                                                                      }
                                                                                      

#if 0

void TheConstructor ( int va_alist, ((_inter = (PPTREE),1) && 
                                     )
                                     {
                                        register PPTREE _inter ;
                                     
                                        int _nextVal ;
                                        
                                        
                                        register int    arity ;
                                        
                                        int NodeType ;
                                        
                                        MY_TREE ptTree ;
                                        
                                        va_list arg_marker ;
                                        
                                        va_start(arg_marker);
                                        NodeType = (int)va_arg(arg_marker,INT);
                                        while ( NodeType != -3 ) {
                                                                        switch ( NodeType ) {
                                                                            case -2 : 
                                                                                PushTree((PPTREE)va_arg(arg_marker,PPTREE));
                                                                                break ;
                                                                                
                                                                            case -4 : 
                                                                                PushTree((PPTREE)0);
                                                                                break ;
                                                                                
                                                                            default : 
                                                                                ptTree = MakeTree(NodeType, arity = (int)va_arg(arg_marker,INT));
                                                                                for (; arity ; arity-- ) 
                                                                                    ReplaceTree(ptTree, arity, PopTree);
                                                                                
                                                                                PushTree(ptTree);
                                                                                break ;
                                                                                
                                                                        }
                                                                        
                                                                        NodeType = (int)va_arg(arg_marker,INT);
                                                                        
                                                                    }
                                        
                                     }
                                     


#endif


#else 

void TheConstructor ( PPTREE(&stackTree)[1024], int &ptStackTree, int NodeType, ((_inter = (PPTREE),1) && 
                                                                                      )
                                                                                      {
                                                                                        register PPTREE _inter ;
                                                                                      
                                                                                        int _nextVal ;
                                                                                        
                                                                                        
                                                                                        register int    arity ;
                                                                                        
                                                                                        MY_TREE ptTree ;
                                                                                        
                                                                                        va_list arg_marker ;
                                                                                        
                                                                                        va_start(arg_marker, NodeType);
#if 0
                                                                                        NodeType = (int)va_arg(arg_marker,INT);
                                                                                        
#endif
                                                                                        
                                                                                        while ( NodeType != -3 ) {
                                                                                                                        switch ( NodeType ) {
                                                                                                                        case -2 : 
                                                                                                                        PushTree((PPTREE)va_arg(arg_marker,PPTREE));
                                                                                                                        break ;
                                                                                                                        
                                                                                                                        case -4 : 
                                                                                                                        PushTree((PPTREE)0);
                                                                                                                        break ;
                                                                                                                        
                                                                                                                        default : 
                                                                                                                        ptTree = MakeTree(NodeType, arity = (int)va_arg(arg_marker,INT));
                                                                                                                        for (; arity ; arity-- ) 
                                                                                                                        ReplaceTree(ptTree, arity, PopTree);
                                                                                                                        
                                                                                                                        PushTree(ptTree);
                                                                                                                        break ;
                                                                                                                        
                                                                                                                        }
                                                                                                                        
                                                                                                                        NodeType = (int)va_arg(arg_marker,INT);
                                                                                                                        
                                                                                                                    }
                                                                                        
                                                                                      }
                                                                                      
#if 0

void TheConstructor ( int NodeType, ((_inter = (PPTREE),1) && 
                                    )
                                    {
                                        register PPTREE _inter ;
                                    
                                        int _nextVal ;
                                        
                                        
                                        register int    arity ;
                                        
                                        MY_TREE ptTree ;
                                        
                                        va_list arg_marker ;
                                        
                                        va_start(arg_marker, NodeType);
#if 0
                                        NodeType = (int)va_arg(arg_marker,INT);
                                        
#endif
                                        
                                        while ( NodeType != -3 ) {
                                                                        switch ( NodeType ) {
                                                                            case -2 : 
                                                                                PushTree((PPTREE)va_arg(arg_marker,PPTREE));
                                                                                break ;
                                                                                
                                                                            case -4 : 
                                                                                PushTree((PPTREE)0);
                                                                                break ;
                                                                                
                                                                            default : 
                                                                                ptTree = MakeTree(NodeType, arity = (int)va_arg(arg_marker,INT));
                                                                                for (; arity ; arity-- ) 
                                                                                    ReplaceTree(ptTree, arity, PopTree);
                                                                                
                                                                                PushTree(ptTree);
                                                                                break ;
                                                                                
                                                                        }
                                                                        
                                                                        NodeType = (int)va_arg(arg_marker,INT);
                                                                        
                                                                    }
                                        
                                    }
                                    


#endif
#endif


void PatchANode ( char *languageName, PTREE the_elem )
{
    int _nextVal ;
    
    
    char    *NodeLanguage ;
    
    OVER_LANG   *pOverLang ;
    
    NodeLanguage = GetNodeLang(the_elem) -> name ;
    pOverLang = GetLang(languageName) -> overLang ;
    for (; pOverLang && pOverLang -> name ; pOverLang++ ) 
        if ( !strcmp(pOverLang -> name, NodeLanguage) ) {
                                                                if ( NumberTree(the_elem) > IN_LANGUAGE && NumberTree(the_elem) != TERM_TREE ) 
                                                                    PatchNode(the_elem, GetLang(languageName), NumberTree(the_elem) + pOverLang -> offset);
                                                                else 
                                                                    PatchNode(the_elem, GetLang(languageName), NumberTree(the_elem));
                                                                
                                                                goto nextNode ;
                                                                
                                                                
                                                             }
    
    pOverLang = GetNodeLang(the_elem) -> overLang ;
    for (; pOverLang && pOverLang -> name ; pOverLang++ ) 
        if ( !strcmp(pOverLang -> name, languageName) ) {
                                                                if ( NumberTree(the_elem) > IN_LANGUAGE && NumberTree(the_elem) != TERM_TREE ) 
                                                                    PatchNode(the_elem, GetLang(languageName), NumberTree(the_elem) - pOverLang -> offset);
                                                                else 
                                                                    PatchNode(the_elem, GetLang(languageName), NumberTree(the_elem));
                                                                
                                                                goto nextNode ;
                                                                
                                                                
                                                             }
    
nextNode : 
    ;
    
}


void InLang ( char *languageName, PTREE tree )
{
    int _nextVal ;
    
    {
        int _for_slot = 1, _arity = treearity(tree);
        
        MY_TREE _for_elem = (PPTREE)0 ;
        
        for (; _for_slot <= _arity ; _for_slot++ ) {
            _for_elem = SonTree(tree, _for_slot);
            if ( _for_elem && NumberTree(_for_elem) != IN_LANGUAGE ) {
                InLang(languageName, for_elem);
                
            }
            
        }
        
        
    }
    PatchANode(languageName, tree);
    
}

static int  currentLine, currentCol ;


char *IsPosComment ( const PTREE &comm )
{
    int _nextVal ;
    
    
    char    *val = Value(comm);
    
    if ( !strncmp(val, POS_STUB, strlen(POS_STUB)) ) 
        return val ;
    
    else 
        return (char *)0 ;
        
    
    
}


bool IsCommNotPos ( const PTREE &tree, int type )
{
    int _nextVal ;
    
    
    PTREE   comm ;
    
    int result = 0 ;
    
    while ( ((comm=NextComm(tree, type, comm))) ) {
                                                            if ( !IsPosComment(comm) ) {
                                                                                            return true ;
                                                                                            
                                                                                            
                                                                                          }
                                                            
                                                        }
    return false ;
    
    
}


int GetStartPos ( const PTREE &tree, int *line, int *col, bool opposite )
{
    int _nextVal ;
    
    
    PTREE   comm ;
    
    int result = 0 ;
    
    while ( ((comm=NextComm(tree, PRE, comm))) ) {
                                                        if ( GetPosCommentContent(comm, line, col) ) {
                                                                                                            result = 1 ;
                                                                                                            if ( opposite ) 
                                                                                                                break ;
                                                                                                            
                                                                                                            
                                                                                                         }
                                                        
                                                       }
    return result ;
    
    
}


static  int SearchPosInt ( const PTREE &tree, int *line, int *col )
{
    int _nextVal ;
    
    {
        int _for_slot = 1, _arity = treearity(tree);
        
        MY_TREE _for_elem = (PPTREE)0 ;
        
        for (; _for_slot <= _arity ; _for_slot++ ) {
            _for_elem = SonTree(tree, _for_slot);
            if ( _for_elem && NumberTree(_for_elem) != IN_LANGUAGE ) 
                if ( SearchPos(for_elem, line, col) ) {
                    return 1 ;
                    
                    
                }
            
        }
        
        
    }
    if ( GetStartPos(tree, line, col) || GetEndPos(tree, line, col) ) 
        return 1 ;
    
    return 0 ;
    
    
}


int SearchPos ( const PTREE &tree, int *line, int *col )
{
    int _nextVal ;
    
    if ( !GetStartPos(tree, line, col) ) {
                                                return SearchPosInt(tree, line, col);
                                                
                                                
                                              } else 
        return 1 ;
        
    
    
}


static  int SearchEndPosInt ( const PTREE &tree, int *line, int *col )
{
    int _nextVal ;
    
    
    int arity = treearity(tree);
    
    for (; arity > 0 ; arity-- ) {
                                        PTREE   son = (PTREE)0 ;
                                        
                                        (son=tree [arity]);
                                        
                                        if ( SearchEndPos(son, line, col) ) {
                                                                                    return 1 ;
                                                                                    
                                                                                    
                                                                                }
                                        
                                    }
    
    if ( GetEndPos(tree, line, col) || GetStartPos(tree, line, col) ) 
        return 1 ;
    
    return 0 ;
    
    
}


int SearchEndPos ( const PTREE &tree, int *line, int *col )
{
    int _nextVal ;
    
    if ( !GetEndPos(tree, line, col) ) {
                                                return SearchEndPosInt(tree, line, col);
                                                
                                                
                                            } else 
        return 1 ;
        
    
    
}


int GetEndPos ( const PTREE &tree, int *line, int *col, bool opposite )
{
    int _nextVal ;
    
    
    PTREE   comm ;
    
    int result = 0 ;
    
    while ( ((comm=NextComm(tree, POST, comm))) ) {
                                                            if ( GetPosCommentContent(comm, line, col) ) {
                                                                                                                result = 1 ;
                                                                                                                if ( !opposite ) 
                                                                                                                    return result ;
                                                                                                                
                                                                                                                
                                                                                                             }
                                                            
                                                        }
    return result ;
    
    
}


int GetPosCommentContent ( const PTREE &comm, int *lig, int *col )
{
    int _nextVal ;
    
    
    char    *val ;
    
    if ( (val = IsPosComment(comm)) ) {
                                            sscanf(val, POS_STUB_FORMAT, lig, col);
                                            return 1 ;
                                            
                                            
                                          }
    return 0 ;
    
    
}


void SetPosCommentContent ( const PTREE &comm, int lig, int col )
{
    int _nextVal ;
    
    
    PTREE   content = (PTREE)0 ;
    
    (content=SonTree(SonTree(comm, 1), 1));
    
    if ( IsPosComment(content) ) {
                                    char    addr [MAXLENGTH];
                                    
                                    sprintf(addr, POS_STUB_FORMAT, lig, col);
                                    replacetree(content, 1, MakeString(addr));
                                    
                                   }
    
}


void SetPos ( const PTREE &tree, int type, int lig, int col )
{
    register PPTREE _inter ;

    int _nextVal ;
    
    
    char    addr [MAXLENGTH];
    
    PTREE   comment ;
    
    if ( !tree ) 
        return ;
    
    (comment=MakeTree(type, 1));
    
    sprintf(addr, POS_STUB_FORMAT, lig, col);
    {
        PPTREE _ptTree0= (PPTREE) 0,_sonTree0= (PPTREE) 0 ;
        {
            PPTREE _ptTree1= (PPTREE) 0,_ptRes1= (PPTREE) 0;
            _ptRes1 = MakeTree(LIST, 2);
            _ptTree1 = StoreRef(MakeString(addr));
            ReplaceTree(_ptRes1, 1, _ptTree1);
            _ptTree0 = _ptRes1;
        }
        ReplaceTree(comment, 1, _ptTree0);
    }
    
    {
        PPTREE _ptTree0= (PPTREE) 0,_ptRes0= (PPTREE) 0;
        _ptRes0 = MakeTree(LIST, 2);
        ReplaceTree(_ptRes0, 1, comment);
        comment = _ptRes0;
    }
    
    PutComm(tree, comment);
    
}


void AddPos ( const PTREE &tree, int type, int lig, int col )
{
    register PPTREE _inter ;

    int _nextVal ;
    
    
    char    addr [MAXLENGTH];
    
    PTREE   comment ;
    
    PTREE   oldComment ;
    
    if ( !tree ) 
        return ;
    
    (oldComment=GetComm(tree));
    
    (comment=MakeTree(type, 1));
    
    sprintf(addr, POS_STUB_FORMAT, lig, col);
    {
        PPTREE _ptTree0= (PPTREE) 0,_sonTree0= (PPTREE) 0 ;
        {
            PPTREE _ptTree1= (PPTREE) 0,_ptRes1= (PPTREE) 0;
            _ptRes1 = MakeTree(LIST, 2);
            _ptTree1 = StoreRef(MakeString(addr));
            ReplaceTree(_ptRes1, 1, _ptTree1);
            _ptTree0 = _ptRes1;
        }
        ReplaceTree(comment, 1, _ptTree0);
    }
    
    {
        PPTREE _ptTree0= (PPTREE) 0,_ptRes0= (PPTREE) 0;
        _ptRes0 = MakeTree(LIST, 2);
        ReplaceTree(_ptRes0, 1, comment);
        ReplaceTree(_ptRes0, 2, oldComment);
        comment = _ptRes0;
    }
    
    PutComm(tree, comment);
    
}


PTREE DestroyComment ( const PTREE &comm )
{
    int _nextVal ;
    
    
    int rank = ranktree(comm);
    
    PTREE   commRet ;
    
    PTREE   father ;
    
    (father=FatherTree(comm));
    
    if ( !father ) 
        return 0 ;
    
    if ( rank == 2 ) 
        (commRet=father);
    
    else 
        (commRet=(PTREE)0);
        
    
    replacetree(father, rank, sontree(comm, 2));
    return commRet ;
    
    
}


void TrimPosComment ( const PTREE &tree )
{
    register PPTREE _inter ;

    int _nextVal ;
    
    
    PTREE   comm, oldComm, father ;
    
    char    *val ;
    
    int preLineMax = -1, preColMax = -1 ;
    
    int postLineMin = 32000, postColMin = 32000 ;
    
    int line, col ;
    
    int lineFather, colFather ;
    
    int first ;
    
    
    int again ;
    
    if ( !tree || NumberTree(tree) == TERM_TREE ) 
        return ;
    
    if ( ((comm=GetComm(tree))) ) {
                                        while ( !(((_inter = (PPTREE)comm,1) && 
                                                        (!SonTree(_inter,2)) &&
                                                        1)) ) {
                                                                ((_inter = (PPTREE)comm,1) && 
                                                                    ((comm=SonTree(_inter,2)),1) &&
                                                                    1);
                                                                ;
                                                                
                                                              }
                                        while ( comm != tree ) {
                                                                    (father=FatherTree(comm));
                                                                    
                                                                    while ( father != tree && !IsPosComment(father) ) 
                                                                        (father=FatherTree(father));
                                                                    
                                                                    if ( father != tree && GetPosCommentContent(comm, &line, &col) ) {
                                                                                                                                             GetPosCommentContent(father, &lineFather, &colFather);
                                                                                                                                             if ( lineFather > line || lineFather == line && colFather > col ) {
                                                                                                                                                                                                                     DestroyComment(father);
                                                                                                                                                                                                                     continue ;
                                                                                                                                                                                                                     
                                                                                                                                                                                                                     
                                                                                                                                                                                                                     }
                                                                                                                                             
                                                                                                                                             }
                                                                    (comm=father);
                                                                    
                                                                    
                                                                 }
                                        
                                      }
    (oldComm=(comm=(PTREE)0));
    
    first = 0 ;
    again = 0 ;
    while ( ((comm=NextComm(tree, PRE, comm))) ) {
                                                        if ( GetPosCommentContent(comm, &line, &col) ) {
                                                                                                                if ( line > preLineMax || line == preLineMax && col > preColMax ) {
                                                                                                                                                                                        preLineMax = line ;
                                                                                                                                                                                        preColMax = col ;
                                                                                                                                                                                        if ( oldComm && !again ) {
                                                                                                                                                                                                                    DestroyComment(oldComm);
                                                                                                                                                                                                                    
                                                                                                                                                                                                                    }
                                                                                                                                                                                        if ( !again ) 
                                                                                                                                                                                        (oldComm=comm);
                                                                                                                                                                                        
                                                                                                                                                                                        else 
                                                                                                                                                                                        {
                                                                                                                                                                                        (oldComm=(PTREE)0);
                                                                                                                                                                                        
                                                                                                                                                                                        again = 0 ;
                                                                                                                                                                                        
                                                                                                                                                                                        }
                                                                                                                                                                                        
                                                                                                                                                                                        first = 1 ;
                                                                                                                                                                                        
                                                                                                                                                                                        } else 
                                                                                                                {
                                                                                                                    if ( !again ) {
                                                                                                                                    (comm=DestroyComment(comm));
                                                                                                                                    
                                                                                                                                    
                                                                                                                                    } else 
                                                                                                                    {
                                                                                                                        (oldComm=(PTREE)0);
                                                                                                                        
                                                                                                                        again = 0 ;
                                                                                                                        
                                                                                                                    }
                                                                                                                    
                                                                                                                    
                                                                                                                }
                                                                                                                
                                                                                                                
                                                                                                             } else 
                                                            again = 1 ;
                                                        
                                                        
                                                       }
    if ( first ) {
                    currentLine = preLineMax ;
                    currentCol = preColMax ;
                    
                  }
    {
        int _for_slot = 1, _arity = treearity(tree);
        
        MY_TREE _for_elem = (PPTREE)0 ;
        
        for (; _for_slot <= _arity ; _for_slot++ ) {
            _for_elem = SonTree(tree, _for_slot);
            if ( _for_elem && NumberTree(_for_elem) != IN_LANGUAGE ) 
                TrimPosComment(for_elem);
            
        }
        
        
    }
    (oldComm=(comm=(PTREE)0));
    
    first = 0 ;
    again = 0 ;
    while ( ((comm=NextComm(tree, POST, comm))) ) {
                                                            if ( GetPosCommentContent(comm, &line, &col) ) {
                                                                                                                    if ( (line < postLineMin || line == postLineMin && col < postColMin) && (line >= currentLine || line == currentLine && col >= currentCol) ) {
                                                                                                                                                                                                                                                                              postLineMin = line ;
                                                                                                                                                                                                                                                                              postColMin = col ;
                                                                                                                                                                                                                                                                              if ( oldComm && !again ) {
                                                                                                                                                                                                                                                                                                          DestroyComment(oldComm);
                                                                                                                                                                                                                                                                                                          
                                                                                                                                                                                                                                                                                                          }
                                                                                                                                                                                                                                                                              if ( !again ) 
                                                                                                                                                                                                                                                                              (oldComm=comm);
                                                                                                                                                                                                                                                                              
                                                                                                                                                                                                                                                                              else 
                                                                                                                                                                                                                                                                              {
                                                                                                                                                                                                                                                                              again = 0 ;
                                                                                                                                                                                                                                                                              (oldComm=0);
                                                                                                                                                                                                                                                                              
                                                                                                                                                                                                                                                                              
                                                                                                                                                                                                                                                                              }
                                                                                                                                                                                                                                                                              
                                                                                                                                                                                                                                                                              first = 1 ;
                                                                                                                                                                                                                                                                              
                                                                                                                                                                                                                                                                              } else 
                                                                                                                    {
                                                                                                                        if ( !again ) {
                                                                                                                                        (comm=DestroyComment(comm));
                                                                                                                                        
                                                                                                                                        again = 0 ;
                                                                                                                                        (oldComm=0);
                                                                                                                                        
                                                                                                                                        
                                                                                                                                        }
                                                                                                                        
                                                                                                                    }
                                                                                                                    
                                                                                                                    
                                                                                                                 } else 
                                                                again = 1 ;
                                                            
                                                            
                                                        }
    if ( first ) {
                    currentLine = postLineMin ;
                    currentCol = postColMin ;
                    
                  }
    
}


void DestroyPosComment ( const PTREE &tree )
{
    int _nextVal ;
    
    
    PTREE   comm, oldComm = (PTREE)0, father ;
    
    (oldComm=PTREE((void *)0));
    
    if ( !tree ) 
        return ;
    
    while ( ((comm=NextComm(tree, PRE, comm))) ) 
        if ( IsPosComment(comm) ) {
                                        if ( oldComm ) 
                                            DestroyComment(oldComm);
                                        (oldComm=comm);
                                        
                                        
                                    }
    while ( ((comm=NextComm(tree, POST, comm))) ) 
        if ( IsPosComment(comm) ) {
                                        if ( oldComm ) 
                                            DestroyComment(oldComm);
                                        (oldComm=comm);
                                        
                                        
                                    }
    if ( oldComm ) 
        DestroyComment(oldComm);
    
}


void DestroyPosCommentRec ( const PTREE &tree )
{
    int _nextVal ;
    
    {
        ItPtree _iterator1 (tree, (PPTREE) 0) ;
        
        PTREE   _for_elem ;
        
        _iterator1.AllSearch(1);
        while ( (_for_elem=_iterator1++) ) {
            {
                DestroyPosComment(for_elem);
                
            }
            
            _iterator1.Current(_for_elem);
            continue ;
            
        for_continue1 : 
            _iterator1.Current(_for_elem);
            _iterator1.SkipSon(1);
            continue ;
            
        for_break1 : 
            break ;
            
            
        }
        
    }
    
    
}

static int  NbTree ;

static int  NbDump ;

bool    theConstructorDump = false ;


void MakeTreeGenDirRec ( PTREE &paramTree, int nbTreeParam )
{
    register PPTREE _inter ;

    int _nextVal ;
    
    
    int nbParam, currParam, gennode ;
    
    char    myString [5];
    
    PTREE   son ;
    
    theConstructorDump = true ;
    if ( nbTreeParam ) {
                            Mark();
                            PrintString("TheConstructor(stackTree,ptStackTree,");
                            NbTree = nbTreeParam ;
                            NbDump = 0 ;
                            MakeTreeGenDirRec(paramTree);
                            PrintString("-3) ;");
                            LNewLine(1);
                            
                            UnMark();
                            return ;
                            
                            
                        }
    if ( NbTree == 50 ) {
                            PrintString("-3);");
                            LNewLine(1);
                            
                            PrintString("TheConstructor(stackTree,ptStackTree,");
                            NbTree = 0 ;
                            
                          } else 
        NbTree++ ;
    
    if ( NbDump == 9 ) {
                            LNewLine(1);
                            
                            Tab();
                            
                            NbDump = 0 ;
                            
                         } else 
        NbDump++ ;
    
    if ( ((_inter = (PPTREE)paramTree,1) && 
            (NumberTree(_inter) == TERM_TREE) &&
            1) ) {
                    PrintString("-2,");
                    PrintString("MakeString(\"");
                    DumpBrainyValue(paramTree);
                    PrintString("\"),");
                    return ;
                    
                    
                 } else 
    if ( NumberTree(paramTree) == CLASS_TREE ) {
                                                    PrintString("-2,");
                                                    char    *toBeDumped = (char *)APPLY_CLASS(paramTree, TreeClass, DumpTree());
                                                    
                                                    WriteString(toBeDumped);
                                                    WriteString(",");
                                                    return ;
                                                    
                                                    
                                                  }
    nbParam = treearity(paramTree);
    currParam = 1 ;
    while ( currParam <= nbParam ) {
                                        (son=SonTree(paramTree, currParam));
                                        
                                        if ( !((!son)) ) 
                                            MakeTreeGenDirRec(son);
                                        else 
                                            PrintString("-4,");
                                        
                                        currParam++ ;
                                        
                                     }
    _itoa(nbParam, myString, 10);
    WriteString(NameConst(NumberTree(paramTree)));
    PrintString(",");
    WriteString(myString);
    PrintString(",");
    
}

static void outil_Anchor () { int i = 1;} 
/*Well done my boy */ 
