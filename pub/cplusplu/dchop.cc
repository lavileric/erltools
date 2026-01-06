
/*************************************************************************/
/*                                                                       */
/*        Produced by Metachop version 2.0  -    1989-1995               */
/*     Tree      Meta     Chopper      developped    by                  */
/*                  Eric Lavillonniere                                   */
/*                                                                       */
/*************************************************************************/

#include "token.h"
#define decomp decomp_cplus

#ifndef for_elem
#define for_elem _for_elem


#endif
#ifdef INCONNU
PTREE   for_elem ;


#endif
#ifdef FOR_METACHOP
PTREE   postComment ;


#endif

#include "deccplus.h"

char    *DecToIdent (PTREE) ;


int DecompCplus::TypeOfBlock ( PTREE tree )
{
    register PPTREE _inter ;

    int _nextVal ;
    
    
    PTREE   son ;
    
    int typeBlock ;
    
    switch ( NumberTree(tree) ) {
        case cplus::INCLUDE_DIR : 
        _Case16 : 
            ;
            typeBlock = 1 ;
            break ;
            
        case cplus::DEFINE_DIR : 
        _Case17 : 
            ;
            typeBlock = 2 ;
            break ;
            
        case cplus::IF_DIR : 
        _Case18 : 
            ;
            goto _Case19 ;
            
        case cplus::IFDEF_DIR : 
        _Case19 : 
            ;
            goto _Case20 ;
            
        case cplus::IFNDEF_DIR : 
        _Case20 : 
            ;
            goto _Case21 ;
            
        case cplus::NOT_MANAGED : 
        _Case21 : 
            ;
            goto _Case22 ;
            
        case cplus::NO_PRETTY : 
        _Case22 : 
            ;
            typeBlock = 3 ;
            break ;
            
        case cplus::FUNC : 
        _Case23 : 
            ;
            typeBlock = 4 ;
            break ;
            
        case cplus::DECLARATION : 
        _Case24 : 
            ;
            typeBlock = 5 ;
            break ;
            
        case cplus::TYPEDEF : 
        _Case25 : 
            ;
            typeBlock = 6 ;
            break ;
            
        case cplus::TEMPLATE_DECL : 
            (son=SonTree(tree, 2));
            
        _Case26 : 
            ;
            goto _Case27 ;
            
        case cplus::ATTRIBUTS : 
            (son=SonTree(tree, 1));
            
        _Case27 : 
            ;
            return TypeOfBlock(son);
            
            goto _Case28 ;
            
        case cplus::MESSAGE_MAP : 
        _Case28 : 
            ;
            goto _Case29 ;
            
        case cplus::MACRO : 
        _Case29 : 
            ;
            typeBlock = 8 ;
            break ;
            
        case cplus::COMPOUND_EXT : 
        _Case30 : 
            ;
            typeBlock = 9 ;
            break ;
            
        default : 
        _Case31 : 
            ;
            typeBlock = 7 ;
            break ;
            
    }
    
    return typeBlock ;
    
    
}


void DecompCplus::DecompCommCtrl ( const PTREE &paramTree, int funcAlone, bool noPostComment )
{
    register PPTREE _inter ;

    int _retVal [2];
    
    PPTREE  _storeVal [2];
    
    int _nextVal ;
    
    
    PTREE   exp, stat, name ;
    
    int oldXFather = xFather, oldYFather = yFather ;
    
    int oldMaxX = maxX ;
    
    int begCurrCol = currCol, begCurrLine = currLine ;
    
    int theMark = GetMark();
    
    PTREE   oldPostComment = (PTREE)0 ;
    
    PTREE   att ;
    
    (oldPostComment=postComment);
    
    if ( (!paramTree) ) 
        return ;
    
    if ( isVirtMod ) {
                        xFather = currCol, yFather = currLine ;
                        maxX = currCol ;
                        
                      }
    (exp=paramTree);
    
    ((_inter = (PPTREE)exp,1) && 
        (NumberTree(_inter) == cplus::TEMPLATE_DECL) &&
        ((exp=SonTree(_inter,2)),1) &&
        1);
    ;
    switch ( NumberTree(exp) ) {
        case cplus::ATTRIBUTS : 
        _Case42 : 
            ;
            goto _Case43 ;
            
        case cplus::FUNC : 
        _Case43 : 
            ;
            goto _Case44 ;
            
        case cplus::DECLARATION : 
        _Case44 : 
            ;
            goto _Case45 ;
            
        case cplus::MESSAGE_MAP : 
        _Case45 : 
            ;
            goto _Case46 ;
            
        case cplus::NAMESPACE : 
        _Case46 : 
            ;
            goto _Case47 ;
            
        case cplus::NAMESPACE_ALIAS : 
        _Case47 : 
            ;
            goto _Case48 ;
            
        case cplus::INLINE_NAMESPACE : 
        _Case48 : 
            ;
            goto _Case49 ;
            
        case cplus::USING : 
        _Case49 : 
            ;
            goto _Case50 ;
            
        case cplus::USING_NAMESPACE : 
        _Case50 : 
            ;
            if ( ( _inter = 
                    FatherTree(exp),((_inter = (PPTREE)_inter,1) && 
                                        (NumberTree(_inter) == cplus::TEMPLATE_DECL) &&
                                        1)) ) 
                (exp=FatherTree(exp));
            
            if ( middleInList(exp) ) {
                                        (exp=paramTree);
                                        
                                        ((_inter = (PPTREE)exp,1) && 
                                            (NumberTree(_inter) == cplus::TEMPLATE_DECL) &&
                                            ((exp=SonTree(_inter,2)),1) &&
                                            1);
                                        ;
                                        ((_inter = (PPTREE)exp,1) && 
                                            (NumberTree(_inter) == cplus::ATTRIBUTS) &&
                                            ((exp=SonTree(_inter,1)),1) &&
                                            1);
                                        ;
                                        if ( ((_inter = (PPTREE)exp,1) && 
                                                (NumberTree(_inter) == cplus::DECLARATION) &&
                                                1) && IsComm(exp, PRE) ) {
                                                                                LNewLine(2);
                                                                                
                                                                                
                                                                            }
                                        if ( ((_inter = (PPTREE)exp,1) && 
                                                (NumberTree(_inter) == cplus::FUNC) &&
                                                (_retVal[1]=((_storeVal[1]=_inter,_inter=SonTree(_inter,8),1) &&
                                                    ((stat=SonTree(_inter,1)),1) &&
                                                    1),
                                                    (_inter=_storeVal[1],1),_retVal[1]) &&
                                                1) ) 
                                            if ( !inClass || !((!stat)) ) {
                                                                                if ( ( _inter = 
                                                                                        FatherTree(exp),!(((_inter = (PPTREE)_inter,1) && 
                                                                                                                (NumberTree(_inter) == cplus::TEMPLATE_DECL) &&
                                                                                                                1))) ) 
                                                                                    LNewLine(2);
                                                                                
                                                                                else 
                                                                                    LNewLine(1);
                                                                                    
                                                                                
                                                                                
                                                                              } else 
                                                LNewLine(1);
                                                
                                        
                                        if ( ((_inter = (PPTREE)exp,1) && 
                                                (NumberTree(_inter) == cplus::MESSAGE_MAP) &&
                                                1) || ((_inter = (PPTREE)exp,1) && 
                                                            (NumberTree(_inter) == cplus::NAMESPACE) &&
                                                            1) || ((_inter = (PPTREE)exp,1) && 
                                                                        (NumberTree(_inter) == cplus::INLINE_NAMESPACE) &&
                                                                        1) || ((_inter = (PPTREE)exp,1) && 
                                                                                    (NumberTree(_inter) == cplus::NAMESPACE_ALIAS) &&
                                                                                    1) || ((_inter = (PPTREE)exp,1) && 
                                                                                                (NumberTree(_inter) == cplus::USING) &&
                                                                                                1) || ((_inter = (PPTREE)exp,1) && 
                                                                                                            (NumberTree(_inter) == cplus::USING_NAMESPACE) &&
                                                                                                            1) ) 
                                            LNewLine(2);
                                        
                                        if ( ((_inter = (PPTREE)exp,1) && 
                                                (NumberTree(_inter) == cplus::DECLARATION) &&
                                                (_retVal[1]=((_storeVal[1]=_inter,_inter=SonTree(_inter,2),1) &&
                                                    (NumberTree(_inter) == cplus::CLASS) &&
                                                    ((name=SonTree(_inter,1)),1) &&
                                                    ((stat=SonTree(_inter,4)),1) &&
                                                    1),
                                                    (_inter=_storeVal[1],1),_retVal[1]) &&
                                                1) ) 
                                            if ( !strcmp(BrainyValue(name), "class") ) 
                                                if ( !((!stat)) ) {
                                                                        LNewLine(2);
                                                                        
                                                                        
                                                                    }
                                        
                                       }
            break ;
            
        default : 
        _Case51 : 
            ;
            {
                if ( ((_inter = (PPTREE)exp,1) && 
                        (NumberTree(_inter) == cplus::TYPEDEF) &&
                        1) && IsComm(exp, PRE) ) {
                                                        LNewLine(2);
                                                        
                                                        
                                                    }
                
            }
            
            break ;
            
    }
    
    if ( funcAlone ) {
                        int oldIsVirtMod = isVirtMod ;
                        
                        isVirtMod = 1 ;
                        LNewLine(3);
                        
                        isVirtMod = oldIsVirtMod ;
                        
                      }
    {
        char    *commPre = 0 ;
        
        if ( !Beginning() && (commPre = IsComm(paramTree, PRE)) ) {
                                                                            Mark();
                                                                            currCol++ ;
                                                                            comm(paramTree, PRE);
                                                                            
                                                                         } else 
            comm(paramTree, PRE);
        
        (postComment=(oldPostComment=this -> IntDecomp(paramTree, funcAlone)));
        
        if ( postComment != paramTree && !noPostComment ) 
            comm(paramTree, POST);
        if ( commPre ) {
                            UnMark();
                            
                        }
        
    }
    
    if ( isVirtMod && !(((_inter = (PPTREE)paramTree,1) && 
                            (NumberTree(_inter) == cplus::ATTRIBUTS) &&
                            1)) ) {
                                    xFather = oldXFather, yFather = oldYFather ;
                                    if ( currCol > maxX ) 
                                        maxX = currCol ;
                                    PutCoord(paramTree, begCurrCol - xFather, currLine - begCurrLine > 0 ? 2 : 0, maxX - begCurrCol, theMark);
                                    if ( maxX < oldMaxX ) 
                                        maxX = oldMaxX ;
                                    
                                  }
    
}


PTREE DecompCplus::IntDecomp ( const PTREE &paramTree, int funcAlone )
{
    register PPTREE _inter ;

    int _nextVal ;
    
    
    PTREE   list, list1, son, sc, type, declarator, param, param_decl, stat, decl, list_decl, ctor, full ;
    
    PTREE   val, exp_list, init, exp1, exp2, exp3, exp, ident, stat1, stat2, name1, name2, range ;
    
    PTREE   exceptionList ;
    
    PTREE   ident1, name ;
    
    PTREE   oldPostComment = (PTREE)0 ;
    
    int oldStatement = statementf ;
    
    int oldInClass = inClass ;
    
    int oneInstruct ;
    
    
    PTREE   except ;
    
    PTREE   implementation ;
    
    PTREE   deleteFunc ;
    
    (oldPostComment=postComment);
    
    switch ( NumberTree(paramTree) ) {
        case LIST : 
        _Case255 : 
            ;
            (list=paramTree);
            
            while ( ((_inter = (PPTREE)list,1) && 
                        (NumberTree(_inter) == LIST) &&
                        1) ) {
                                (son=(list?list.Nextl():(PPTREE)0));
                                
                                decomp(son);
                                
                                
                             }
            break ;
            
        case cplus::LANGUAGE : 
            (name=SonTree(paramTree, 1));
            
        _Case256 : 
            ;
            {
                inClass = 0 ;
                (list=name);
                
                NoSep();
                
                DecompilerListeExternSimp(list);
                
            }
            
            break ;
            
        case cplus::PROTECTED_ARRAY : 
            (range=SonTree(paramTree, 1));
            
            (full=SonTree(paramTree, 2));
            
            (type=SonTree(paramTree, 3));
            
            (ident=SonTree(paramTree, 4));
            
            (exp=SonTree(paramTree, 5));
            
        _Case257 : 
            ;
            {
                if ( (!exp) ) {
                                    PrintString("_protectedPointer");
                                    PrintString("(");
                                    decomp(range);
                                    
                                    PrintString(",");
                                    decomp(full);
                                    
                                    PrintString(",");
                                    decomp(type);
                                    
                                    PrintString(",");
                                    decomp(ident);
                                    
                                    PrintString(")");
                                    PrintString(";");
                                    LNewLine(1);
                                    
                                    
                                } else 
                {
                    PrintString("_protectedArray");
                    PrintString("(");
                    decomp(range);
                    
                    PrintString(",");
                    decomp(full);
                    
                    PrintString(",");
                    decomp(type);
                    
                    PrintString(",");
                    decomp(ident);
                    
                    PrintString(",");
                    decomp(exp);
                    
                    PrintString(")");
                    PrintString(";");
                    LNewLine(1);
                    
                    
                }
                
                
            }
            
            break ;
            
        case cplus::PROTECTED_ARRAY_S : 
            (full=SonTree(paramTree, 1));
            
            (type=SonTree(paramTree, 2));
            
            (ident=SonTree(paramTree, 3));
            
            (exp=SonTree(paramTree, 4));
            
        _Case258 : 
            ;
            {
                if ( (!exp) ) {
                                    PrintString("_protectedPointer_s");
                                    PrintString("(");
                                    decomp(full);
                                    
                                    PrintString(",");
                                    decomp(type);
                                    
                                    PrintString(",");
                                    decomp(ident);
                                    
                                    PrintString(")");
                                    PrintString(";");
                                    LNewLine(1);
                                    
                                    
                                } else 
                {
                    PrintString("_protectedArray_s");
                    PrintString("(");
                    decomp(full);
                    
                    PrintString(",");
                    decomp(type);
                    
                    PrintString(",");
                    decomp(ident);
                    
                    PrintString(",");
                    decomp(exp);
                    
                    PrintString(")");
                    PrintString(";");
                    LNewLine(1);
                    
                    
                }
                
                
            }
            
            break ;
            
        case cplus::PROTECTED_ARRAY_TYPEDEF : 
            (range=SonTree(paramTree, 1));
            
            (full=SonTree(paramTree, 2));
            
            (type=SonTree(paramTree, 3));
            
            (ident=SonTree(paramTree, 4));
            
            (exp=SonTree(paramTree, 5));
            
        _Case259 : 
            ;
            {
                PrintString("_typedef_protectedArray");
                PrintString("(");
                decomp(range);
                
                PrintString(",");
                decomp(full);
                
                PrintString(",");
                decomp(type);
                
                PrintString(",");
                decomp(ident);
                
                PrintString(",");
                decomp(exp);
                
                PrintString(")");
                PrintString(";");
                LNewLine(1);
                
                
            }
            
            break ;
            
        case cplus::PROTECTED_ARRAY_S_TYPEDEF : 
            (full=SonTree(paramTree, 1));
            
            (type=SonTree(paramTree, 2));
            
            (ident=SonTree(paramTree, 3));
            
            (exp=SonTree(paramTree, 4));
            
        _Case260 : 
            ;
            {
                PrintString("_typedef_protectedArray_s");
                PrintString("(");
                decomp(full);
                
                PrintString(",");
                decomp(type);
                
                PrintString(",");
                decomp(ident);
                
                PrintString(",");
                decomp(exp);
                
                PrintString(")");
                PrintString(";");
                LNewLine(1);
                
                
            }
            
            break ;
            
        case cplus::TYPEDEF : 
            (type=SonTree(paramTree, 1));
            
            (declarator=SonTree(paramTree, 2));
            
        _Case261 : 
            ;
            if ( ((_inter = (PPTREE)type,1) && 
                    (NumberTree(_inter) == cplus::CLASS) &&
                    ((list_decl=SonTree(_inter,4)),1) &&
                    1) && !((!list_decl)) ) 
                if ( middleInList(paramTree) && !IsComm(paramTree, PRE) ) 
                    LNewLine(2);
            
            PrintString("typedef");
            decomp(type);
            
            if ( ((_inter = (PPTREE)type,1) && 
                    (NumberTree(_inter) == cplus::CLASS) &&
                    1) ) {
                            while ( ((_inter = (PPTREE)declarator,1) && 
                                        (NumberTree(_inter) == LIST) &&
                                        1) ) {
                                                (son=(declarator?declarator.Nextl():(PPTREE)0));
                                                
                                                Tab();
                                                
                                                decomp(son);
                                                
                                                if ( !((!declarator)) ) {
                                                                            PrintString(",");
                                                                            Space(1);
                                                                            
                                                                            
                                                                          }
                                                
                                             }
                            
                         } else 
            {
                Mark();
                while ( ((_inter = (PPTREE)declarator,1) && 
                            (NumberTree(_inter) == LIST) &&
                            1) ) {
                                    (son=(declarator?declarator.Nextl():(PPTREE)0));
                                    
                                    Tab();
                                    
                                    decomp(son);
                                    
                                    if ( !((!declarator)) ) {
                                                                PrintString(",");
                                                                Space(1);
                                                                
                                                                
                                                              }
                                    
                                 }
                UnMark();
                
                
            }
            
            SepBefore();
            
            PrintString(";");
            (oldPostComment=paramTree);
            
            comm(paramTree, POST);
            if ( !LastInTopList(paramTree) ) {
                                                    if ( ((_inter = (PPTREE)type,1) && 
                                                            (NumberTree(_inter) == cplus::CLASS) &&
                                                            ((list_decl=SonTree(_inter,4)),1) &&
                                                            1) && !((!list_decl)) ) 
                                                        LNewLine(2);
                                                    
                                                    else 
                                                        LNewLine(1);
                                                        
                                                    
                                                    
                                                }
            break ;
            
        case cplus::FUNC : 
            (sc=SonTree(paramTree, 1));
            
            (type=SonTree(paramTree, 2));
            
            (declarator=SonTree(paramTree, 3));
            
            (param=SonTree(paramTree, 4));
            
            (range=SonTree(paramTree, 5));
            
            (param_decl=SonTree(paramTree, 6));
            
            (ctor=SonTree(paramTree, 7));
            
            (stat=SonTree(paramTree, 8));
            
            (exceptionList=SonTree(paramTree, 9));
            
            (deleteFunc=SonTree(paramTree, 10));
            
        _Case262 : 
            ;
            {
                bool    withNewLine = false ;
                
                bool    parameterUnder = IsVerticalDecl(param);
                
                bool    hasExceptionList = false ;
                
                (exp2=ctor);
                
                if ( ctor ) 
                    ((_inter = (PPTREE)ctor,1) && 
                        ((ctor=SonTree(_inter,1)),1) &&
                        1);
                    ;
                if ( exceptionList ) {
                                        ((_inter = (PPTREE)exceptionList,1) && 
                                            ((exceptionList=SonTree(_inter,1)),1) &&
                                            1);
                                        ;
                                        hasExceptionList = true ;
                                        
                                      }
                if ( !((!stat)) ) 
                    ((_inter = (PPTREE)stat,1) && 
                        ((stat1=SonTree(_inter,1)),1) &&
                        1);
                    ;
                {
                    (exp1=FatherTree(paramTree));
                    
                    if ( ((_inter = (PPTREE)exp1,1) && 
                            (NumberTree(_inter) == cplus::ATTRIBUTS) &&
                            1) ) 
                        (exp1=FatherTree(exp1));
                    
                    if ( !(((_inter = (PPTREE)exp1,1) && 
                                (NumberTree(_inter) == cplus::EXTERNAL) &&
                                1)) ) {
                                        if ( currLine > 0 ) {
                                                                if ( !inClass || !((!stat1)) ) {
                                                                                                    if ( ( _inter = 
                                                                                                            FatherTree(exp1),((_inter = (PPTREE)_inter,1) && 
                                                                                                                               (NumberTree(_inter) == cplus::TEMPLATE_DECL) &&
                                                                                                                               1)) ) 
                                                                                                        LNewLine(2);
                                                                                                    
                                                                                                    else 
                                                                                                        LNewLine(1);
                                                                                                        
                                                                                                    
                                                                                                    
                                                                                                   } else 
                                                                    LNewLine(1);
                                                                    
                                                                
                                                                
                                                              }
                                        if ( indentFunctionType ) 
                                            indentFuncFlag = 1 ;
                                        
                                      }
                    
                }
                
                Mark();
                if ( !((!sc)) ) {
                                    DumpBrainyValue(sc);
                                    
                                    Tab();
                                    
                                    
                                  }
                decomp(type);
                
                decomp(declarator);
                
                indentFuncFlag = 0 ;
                if ( parameterUnder ) {
                                        LNewLine(1);
                                        
                                        
                                       } else 
                {
                    SepBefore();
                    
                    
                }
                
                PrintString("(");
                if ( !((!param)) && parameterUnder ) {
                                                            withNewLine = true ;
                                                            LNewLine(1);
                                                            
                                                            if ( parameterUnderTab ) 
                                                                Tab();
                                                            
                                                            Mark();
                                                            
                                                        }
                if ( !((!param)) && !parameterUnder ) 
                    Space(1);
                
                (val=param);
                
                comm(val, PRE);
                while ( ((_inter = (PPTREE)param,1) && 
                            (NumberTree(_inter) == LIST) &&
                            1) ) {
                                    (son=(param?param.Nextl():(PPTREE)0));
                                    
                                    if ( parameterUnder ) {
                                                            PTREE   elem = (PTREE)0 ;
                                                            
                                                            (elem=son);
                                                            
                                                            if ( ((_inter = (PPTREE)elem,1) && 
                                                                    (NumberTree(_inter) == cplus::ATTRIBUTS) &&
                                                                    ((elem=SonTree(_inter,1)),1) &&
                                                                    1) ) 
                                                                comm(son, PRE);
                                                            DecompCommCtrl(elem, false, true);
                                                            
                                                           } else 
                                    {
                                        decomp(son);
                                        
                                        
                                    }
                                    
                                    if ( !((!param)) ) {
                                                            PrintString(",");
                                                            
                                                         }
                                    Space(1);
                                    
                                    if ( parameterUnder ) {
                                                            if ( ((_inter = (PPTREE)son,1) && 
                                                                    (NumberTree(_inter) == cplus::ATTRIBUTS) &&
                                                                    ((list1=SonTree(_inter,3)),1) &&
                                                                    1) ) {
                                                                            PTREE   attr ;
                                                                            
                                                                            bool    commDisp = false ;
                                                                            
                                                                            while ( ((_inter = (PPTREE)list1,1) && 
                                                                                        (NumberTree(_inter) == LIST) &&
                                                                                        1) ) {
                                                                                                (attr=(list1?list1.Nextl():(PPTREE)0));
                                                                                                
                                                                                                if ( ((_inter = (PPTREE)attr,1) && 
                                                                                                        (NumberTree(_inter) == cplus::NEWLINE) &&
                                                                                                        1) ) {
                                                                                                                commDisp = true ;
                                                                                                                comm(son, POST);
                                                                                                                
                                                                                                             }
                                                                                                TraitAttribut(attr);
                                                                                                
                                                                                             }
                                                                            if ( !commDisp ) 
                                                                                comm(son, POST);
                                                                            
                                                                         } else 
                                                            {
                                                                comm(son, POST);
                                                                LNewLine(1);
                                                                
                                                                
                                                            }
                                                            
                                                            
                                                           }
                                    
                                 }
                if ( withNewLine ) {
                                        UnMark();
                                        LNewLine(1);
                                        
                                        
                                    }
                PrintString(")");
                SepAfter();
                
                comm(val, POST);
                if ( range ) 
                    decomp(range);
                
                comm(exp2, PRE);
                if ( hasExceptionList ) {
                                            LNewLine(1);
                                            
                                            Tab();
                                            
                                            Mark();
                                            PrintString("throw");
                                            Space(1);
                                            
                                            PrintString("(");
                                            if ( !((!exceptionList)) ) 
                                                DecompList(exceptionList, ",", ")", 0);
                                            else 
                                                PrintString(")");
                                            
                                            UnMark();
                                            
                                            
                                         }
                if ( !((!ctor)) ) {
                                        LNewLine(1);
                                        
                                        Tab();
                                        
                                        Mark();
                                        PrintString(":");
                                        Space(1);
                                        
                                        while ( ((_inter = (PPTREE)ctor,1) && 
                                                    (NumberTree(_inter) == LIST) &&
                                                    1) ) {
                                                            (son=(ctor?ctor.Nextl():(PPTREE)0));
                                                            
                                                            decomp(son);
                                                            
                                                            if ( !((!ctor)) ) {
                                                                                    PrintString(",");
                                                                                    Space(1);
                                                                                    
                                                                                    SepAfter();
                                                                                    
                                                                                    
                                                                                }
                                                            
                                                         }
                                        UnMark();
                                        
                                        comm(exp2, POST);
                                        LNewLine(1);
                                        
                                        
                                    }
                if ( !((!param_decl)) ) 
                    LNewLine(1);
                
                decomp(param_decl);
                
                if ( !((!deleteFunc)) ) {
                                            PrintString("=");
                                            SepAfter();
                                            
                                            PrintString("delete;");
                                            
                                          } else 
                {
                    statementf = 0 ;
                    if ( withNewLine ) {
                                            LNewLine(1);
                                            
                                            
                                        }
                    ((_inter = (PPTREE)stat,1) && 
                        ((stat1=SonTree(_inter,1)),1) &&
                        1);
                    ;
                    if ( !((!stat1)) || !((!param_decl)) ) 
                        LNewLine(1);
                    
                    decomp(stat);
                    
                    
                }
                
                if ( funcAlone ) 
                    LNewLine(1);
                
                else 
                if ( !LastInList(paramTree) ) {
                                                    if ( !inClass || !((!stat)) ) {
                                                                                        if ( !LastInList(paramTree) ) {
                                                                                                                         LNewLine(2);
                                                                                                                         
                                                                                                                         
                                                                                                                         }
                                                                                        
                                                                                      } else 
                                                    {
                                                        if ( !LastInTopList(paramTree) ) {
                                                                                                LNewLine(1);
                                                                                                
                                                                                                
                                                                                            }
                                                        
                                                    }
                                                    
                                                    
                                                 }
                UnMark();
                
                
            }
            
            break ;
            
        case cplus::TYP_AFF : 
            (declarator=SonTree(paramTree, 1));
            
            (exp=SonTree(paramTree, 2));
            
        _Case263 : 
            ;
            statementf = 0 ;
            decomp(declarator);
            
            if ( !((!exp)) ) {
                                Space(1);
                                
                                PrintString("=");
                                Space(1);
                                
                                decomp(exp);
                                
                                
                               }
            break ;
            
        case cplus::CLASS_PARAM : 
            (son=SonTree(paramTree, 1));
            
        _Case264 : 
            ;
            PrintString("class");
            decomp(son);
            
            break ;
            
        case cplus::TEMPLATE_DECL : 
            (exp1=SonTree(paramTree, 1));
            
            (exp2=SonTree(paramTree, 2));
            
        _Case265 : 
            ;
            PrintString("template");
            Space(1);
            
            PrintString("<");
            if ( exp1 ) 
                DecompList(exp1, ",", (char *)0, 0);
            PrintString(">");
            Space(1);
            
            LNewLine(1);
            
            Tab();
            
            Mark();
            decomp(exp2);
            
            UnMark();
            
            break ;
            
        case cplus::PARAM_TYPE : 
            (exp1=SonTree(paramTree, 1));
            
            (exp2=SonTree(paramTree, 2));
            
        _Case266 : 
            ;
            decomp(exp1);
            
            PrintString("<");
            while ( ((_inter = (PPTREE)exp2,1) && 
                        (NumberTree(_inter) == LIST) &&
                        1) ) {
                                (son=(exp2?exp2.Nextl():(PPTREE)0));
                                
                                decomp(son);
                                
                                if ( exp2 ) {
                                                PrintString(",");
                                                Space(1);
                                                
                                                
                                             }
                                
                             }
            PrintString(">");
            Space(1);
            
            break ;
            
        case cplus::FOR_DECLARATION : 
            (sc=SonTree(paramTree, 1));
            
            (type=SonTree(paramTree, 2));
            
            (list_decl=SonTree(paramTree, 3));
            
        _Case267 : 
            ;
            goto _Case268 ;
            
        case cplus::DECLARATION : 
            (sc=SonTree(paramTree, 1));
            
            (type=SonTree(paramTree, 2));
            
            (list_decl=SonTree(paramTree, 3));
            
        _Case268 : 
            ;
            {
                int hasPutMark = 0 ;
                
                statementf = 0 ;
                if ( ((_inter = (PPTREE)type,1) && 
                        (NumberTree(_inter) == cplus::CLASS) &&
                        ((exp=SonTree(_inter,4)),1) &&
                        1) && !((!exp)) ) 
                    if ( currLine > 0 ) {
                                            LNewLine(2);
                                            
                                            
                                          }
                if ( !((!sc)) ) {
                                    DumpBrainyValue(sc);
                                    
                                    
                                  }
                if ( !((!type)) ) {
                                        decomp(type);
                                        
                                        if ( !((!list_decl)) ) {
                                                                    SepAfter();
                                                                    
                                                                    
                                                                 }
                                        if ( !(((_inter = (PPTREE)paramTree,1) && 
                                                    (NumberTree(_inter) == cplus::FOR_DECLARATION) &&
                                                    1)) && !(((_inter = (PPTREE)type,1) && 
                                                                (NumberTree(_inter) == cplus::CLASS) &&
                                                                1)) && !(((_inter = (PPTREE)type,1) && 
                                                                            (NumberTree(_inter) == cplus::ENUM) &&
                                                                            1)) ) 
                                            Tab();
                                        
                                        
                                    }
                while ( ((_inter = (PPTREE)list_decl,1) && 
                            (NumberTree(_inter) == LIST) &&
                            1) ) {
                                    (decl=(list_decl?list_decl.Nextl():(PPTREE)0));
                                    
                                    decomp(decl);
                                    
                                    if ( !((!list_decl)) ) {
                                                                PrintString(",");
                                                                Space(1);
                                                                
                                                                
                                                             }
                                    
                                 }
                if ( !(((_inter = (PPTREE)paramTree,1) && 
                            (NumberTree(_inter) == cplus::FOR_DECLARATION) &&
                            1)) && !(((_inter = (PPTREE)paramTree,1) && 
                                        (NumberTree(_inter) == cplus::TEMPLATE_DECL) &&
                                        1)) ) {
                                                SepBefore();
                                                
                                                PrintString(";");
                                                
                                              }
                comm(paramTree, POST);
                (oldPostComment=paramTree);
                
                (exp=FatherTree(paramTree));
                
                if ( !(((_inter = (PPTREE)paramTree,1) && 
                            (NumberTree(_inter) == cplus::FOR_DECLARATION) &&
                            1)) ) 
                    if ( ( _inter = 
                            FatherTree(paramTree),!(((_inter = (PPTREE)_inter,1) && 
                                                        (NumberTree(_inter) == cplus::ATTRIBUTS) &&
                                                        1))) ) {
                                                                if ( !LastInTopList(paramTree) ) {
                                                                                                        LNewLine(1);
                                                                                                        
                                                                                                        
                                                                                                    }
                                                                
                                                               }
                
            }
            
            break ;
            
        case cplus::ENUM : 
            (ident=SonTree(paramTree, 1));
            
            (list_decl=SonTree(paramTree, 2));
            
            (type=SonTree(paramTree, 3));
            
            (implementation=SonTree(paramTree, 4));
            
        _Case269 : 
            ;
            {
                IsVerticalDecl(list_decl);
                PrintString("enum");
                if ( !((!type)) ) {
                                        PrintString("class");
                                        
                                    }
                if ( !((!ident)) ) {
                                        DumpBrainyValue(ident);
                                        
                                        Space(1);
                                        
                                        
                                     }
                if ( !((!implementation)) ) {
                                                Space(1);
                                                
                                                PrintString(":");
                                                Space(1);
                                                
                                                decomp(implementation);
                                                
                                                Space(1);
                                                
                                                
                                              }
                bool    alignVert = false ;
                
                if ( enumVert ) 
                    alignVert = true ;
                else 
                {
                    (list=list_decl);
                    
                    while ( ((_inter = (PPTREE)list,1) && 
                                (NumberTree(_inter) == LIST) &&
                                1) ) {
                                        (son=list [1]);
                                        
                                        if ( IsComm(son, POST) ) {
                                                                        alignVert = true ;
                                                                        break ;
                                                                        
                                                                        
                                                                    }
                                        (list?list.Nextl():(PPTREE)0);
                                        
                                     }
                    
                }
                
                if ( !((!list_decl)) ) {
                                            SepBefore();
                                            
                                            if ( ansiMode && alignVert ) 
                                                LNewLine(1);
                                            
                                            PrintString("{");
                                            if ( alignVert ) {
                                                                LNewLine(1);
                                                                
                                                                Tab();
                                                                
                                                                Mark();
                                                                
                                                              } else 
                                                SepAfter();
                                                
                                            
                                            while ( ((_inter = (PPTREE)list_decl,1) && 
                                                        (NumberTree(_inter) == LIST) &&
                                                        1) ) {
                                                                (son=(list_decl?list_decl.Nextl():(PPTREE)0));
                                                                
                                                                if ( alignVert ) {
                                                                                    PTREE   elem = (PTREE)0 ;
                                                                                    
                                                                                    (elem=son);
                                                                                    
                                                                                    if ( ((_inter = (PPTREE)elem,1) && 
                                                                                            (NumberTree(_inter) == cplus::ATTRIBUTS) &&
                                                                                            ((elem=SonTree(_inter,1)),1) &&
                                                                                            1) ) 
                                                                                        comm(son, PRE);
                                                                                    DecompCommCtrl(elem, false, true);
                                                                                    
                                                                                  } else 
                                                                {
                                                                    decomp(son);
                                                                    
                                                                    
                                                                }
                                                                
                                                                if ( !((!list_decl)) ) {
                                                                                            PrintString(",");
                                                                                            Space(1);
                                                                                            
                                                                                            
                                                                                         }
                                                                if ( alignVert ) {
                                                                                    if ( ((_inter = (PPTREE)son,1) && 
                                                                                            (NumberTree(_inter) == cplus::ATTRIBUTS) &&
                                                                                            ((list1=SonTree(_inter,3)),1) &&
                                                                                            1) ) {
                                                                                                    PTREE   attr ;
                                                                                                    
                                                                                                    bool    commDisp = false ;
                                                                                                    
                                                                                                    while ( ((_inter = (PPTREE)list1,1) && 
                                                                                                                (NumberTree(_inter) == LIST) &&
                                                                                                                1) ) {
                                                                                                                        (attr=(list1?list1.Nextl():(PPTREE)0));
                                                                                                                        
                                                                                                                        if ( ((_inter = (PPTREE)attr,1) && 
                                                                                                                               (NumberTree(_inter) == cplus::NEWLINE) &&
                                                                                                                               1) ) {
                                                                                                                                    commDisp = true ;
                                                                                                                                    comm(son, POST);
                                                                                                                                    
                                                                                                                                    }
                                                                                                                        TraitAttribut(attr);
                                                                                                                        
                                                                                                                     }
                                                                                                    if ( !commDisp ) 
                                                                                                        comm(son, POST);
                                                                                                    
                                                                                                 } else 
                                                                                    {
                                                                                        comm(son, POST);
                                                                                        LNewLine(1);
                                                                                        
                                                                                        
                                                                                    }
                                                                                    
                                                                                    
                                                                                  }
                                                                
                                                             }
                                            if ( alignVert ) {
                                                                UnMark();
                                                                LNewLine(1);
                                                                
                                                                
                                                              } else 
                                                SepBefore();
                                                
                                            
                                            PrintString("}");
                                            
                                         }
                
            }
            
            break ;
            
        case cplus::TDOUBLE : 
        _Case270 : 
            ;
            PrintString("double");
            break ;
            
        case cplus::TSHORT : 
        _Case271 : 
            ;
            PrintString("short");
            break ;
            
        case cplus::TINT : 
        _Case272 : 
            ;
            PrintString("int");
            break ;
            
        case cplus::TCHAR : 
        _Case273 : 
            ;
            PrintString("char");
            break ;
            
        case cplus::TFLOAT : 
        _Case274 : 
            ;
            PrintString("float");
            break ;
            
        case cplus::VOID : 
        _Case275 : 
            ;
            PrintString("void");
            break ;
            
        case cplus::TLONG : 
            (type=SonTree(paramTree, 1));
            
        _Case276 : 
            ;
            PrintString("long");
            decomp(type);
            
            break ;
            
        case cplus::TSIGNED : 
            (type=SonTree(paramTree, 1));
            
        _Case277 : 
            ;
            PrintString("signed");
            decomp(type);
            
            break ;
            
        case cplus::TUNSIGNED : 
            (type=SonTree(paramTree, 1));
            
        _Case278 : 
            ;
            PrintString("unsigned");
            decomp(type);
            
            break ;
            
        case cplus::RANGE_MODIFIER : 
            (val=SonTree(paramTree, 1));
            
            (declarator=SonTree(paramTree, 2));
            
        _Case279 : 
            ;
            if ( ((_inter = (PPTREE)val,1) && 
                    (NumberTree(_inter) == cplus::ATTRIBUTE_CALL) &&
                    1) || ((_inter = (PPTREE)val,1) && 
                                (NumberTree(_inter) == cplus::ASM_CALL) &&
                                1) ) 
                decomp(val);
            
            else 
                DumpBrainyValue(val);
                
            
            if ( declarator ) 
                decomp(declarator);
            
            break ;
            
        case cplus::ATTRIBUTE_CALL : 
            (val=SonTree(paramTree, 1));
            
        _Case280 : 
            ;
            while ( ((_inter = (PPTREE)val,1) && 
                        (NumberTree(_inter) == cplus::EXP) &&
                        ((val=SonTree(_inter,1)),1) &&
                        1) ) 
                ;
            PrintString("__attribute__((");
            decomp(val);
            
            PrintString("))");
            break ;
            
        case cplus::ASM_CALL : 
            (val=SonTree(paramTree, 1));
            
        _Case281 : 
            ;
            {
                PrintString("__asm__(");
                ((_inter = (PPTREE)val,1) && 
                    (NumberTree(_inter) == cplus::STRING_LIST) &&
                    ((val=SonTree(_inter,1)),1) &&
                    1);
                ;
                if ( ((_inter = (PPTREE)val,1) && 
                        (NumberTree(_inter) == LIST) &&
                        1) ) {
                                while ( ((_inter = (PPTREE)val,1) && 
                                            (NumberTree(_inter) == LIST) &&
                                            1) ) {
                                                    (son=(val?val.Nextl():(PPTREE)0));
                                                    
                                                    decomp(son);
                                                    
                                                    if ( !((!val)) ) {
                                                                        PrintString(",");
                                                                        SepAfter();
                                                                        
                                                                        
                                                                       }
                                                    
                                                 }
                                
                             } else 
                    decomp(val);
                    
                
                PrintString(")");
                
            }
            
            break ;
            
        case cplus::EXTENSION : 
            (val=SonTree(paramTree, 1));
            
        _Case282 : 
            ;
            PrintString("__extension__");
            SepAfter();
            
            decomp(val);
            
            break ;
            
        case cplus::TYP_ADDR : 
            (declarator=SonTree(paramTree, 1));
            
        _Case283 : 
            ;
            SepBefore();
            
            PrintString("*");
            decomp(declarator);
            
            break ;
            
        case cplus::TYP : 
            (declarator=SonTree(paramTree, 1));
            
        _Case284 : 
            ;
            PrintString("(");
            decomp(declarator);
            
            PrintString(")");
            break ;
            
        case META : 
            (ident=SonTree(paramTree, 1));
            
        _Case285 : 
            ;
            PrintString("$");
            goto _Case286 ;
            
        case cplus::IDENT : 
            (ident=SonTree(paramTree, 1));
            
        _Case286 : 
            ;
            if ( indentFuncFlag ) {
                                    LNewLine(1);
                                    
                                    indentFuncFlag = 0 ;
                                    
                                   }
            DumpBrainyValue(ident);
            
            break ;
            
        case cplus::TYP_ARRAY : 
            (declarator=SonTree(paramTree, 1));
            
            (exp_list=SonTree(paramTree, 2));
            
        _Case287 : 
            ;
            decomp(declarator);
            
            SepBefore();
            
            PrintString("[");
            if ( !((!exp_list)) ) 
                decomp(exp_list);
            
            PrintString("]");
            break ;
            
        case cplus::TYP_LIST : 
            (declarator=SonTree(paramTree, 1));
            
            (exp_list=SonTree(paramTree, 2));
            
            (range=SonTree(paramTree, 3));
            
            (except=SonTree(paramTree, 4));
            
        _Case288 : 
            ;
            {
                bool    putPar = false ;
                
                {
                    PTREE   inside = (PTREE)0 ;
                    
                    (inside=declarator);
                    
                    while ( ((_inter = (PPTREE)inside,1) && 
                                (NumberTree(_inter) == cplus::RANGE_MODIFIER) &&
                                ((inside=SonTree(_inter,2)),1) &&
                                1) ) 
                        ;
                    if ( ((_inter = (PPTREE)inside,1) && 
                            (NumberTree(_inter) == cplus::TYP_ADDR) &&
                            1) ) 
                        putPar = true ;
                    
                }
                
                if ( putPar ) 
                    PrintString("(");
                decomp(declarator);
                
                if ( putPar ) 
                    PrintString(")");
                SepBefore();
                
                PrintString("(");
                (list=exp_list);
                
                if ( 1 ) 
                    while ( ((_inter = (PPTREE)exp_list,1) && 
                                (NumberTree(_inter) == LIST) &&
                                1) ) {
                                        (son=(exp_list?exp_list.Nextl():(PPTREE)0));
                                        
                                        decomp(son);
                                        
                                        if ( !((!exp_list)) ) {
                                                                    PrintString(",");
                                                                    Space(1);
                                                                    
                                                                    
                                                                }
                                        
                                     }
                PrintString(")");
                SepAfter();
                
                if ( !((!except)) ) {
                                        PrintString("throw");
                                        Space(1);
                                        
                                        PrintString("(");
                                        ((_inter = (PPTREE)except,1) && 
                                            ((except=SonTree(_inter,1)),1) &&
                                            1);
                                        ;
                                        if ( !((!except)) ) 
                                            DecompList(except, ",", ")", 0);
                                        else 
                                            PrintString(")");
                                        
                                        
                                      }
                SepAfter();
                
                decomp(range);
                
                
            }
            
            break ;
            
        case cplus::INITIALIZER : 
            (init=SonTree(paramTree, 1));
            
        _Case289 : 
            ;
            if ( ((_inter = (PPTREE)init,1) && 
                    (NumberTree(_inter) == LIST) &&
                    1) ) {
                            PrintString("{");
                            SepAfter();
                            
                            while ( ((_inter = (PPTREE)init,1) && 
                                        (NumberTree(_inter) == LIST) &&
                                        1) ) {
                                                (exp=(init?init.Nextl():(PPTREE)0));
                                                
                                                decomp(exp);
                                                
                                                if ( !((!init)) ) {
                                                                        PrintString(",");
                                                                        Space(1);
                                                                        
                                                                        
                                                                    }
                                                
                                             }
                            SepBefore();
                            
                            PrintString("}");
                            
                         } else 
                decomp(init);
                
            
            break ;
            
        case cplus::ABST_DECLARATOR : 
            (type=SonTree(paramTree, 1));
            
            (declarator=SonTree(paramTree, 2));
            
        _Case290 : 
            ;
            decomp(type);
            
            decomp(declarator);
            
            break ;
            
        case cplus::NEW_DECLARATOR : 
            (type=SonTree(paramTree, 1));
            
            (declarator=SonTree(paramTree, 2));
            
        _Case291 : 
            ;
            decomp(type);
            
            decomp(declarator);
            
            break ;
            
        case cplus::DECLARATOR : 
            (type=SonTree(paramTree, 1));
            
            (declarator=SonTree(paramTree, 2));
            
        _Case292 : 
            ;
            decomp(type);
            
            decomp(declarator);
            
            break ;
            
        case cplus::TYP_BIT : 
            (ident=SonTree(paramTree, 1));
            
            (exp=SonTree(paramTree, 2));
            
        _Case293 : 
            ;
            decomp(ident);
            
            Space(1);
            
            PrintString(":");
            Space(1);
            
            decomp(exp);
            
            break ;
            
        case cplus::EXP_SEQ : 
            (list=SonTree(paramTree, 1));
            
        _Case294 : 
            ;
            statementf = 0 ;
            while ( ((_inter = (PPTREE)list,1) && 
                        (NumberTree(_inter) == LIST) &&
                        1) ) {
                                (exp=(list?list.Nextl():(PPTREE)0));
                                
                                decomp(exp);
                                
                                if ( !((!list)) ) {
                                                        PrintString(",");
                                                        Space(1);
                                                        
                                                        
                                                    }
                                
                             }
            break ;
            
        case cplus::AFF : 
            (exp1=SonTree(paramTree, 1));
            
            (exp2=SonTree(paramTree, 2));
            
        _Case295 : 
            ;
            statementf = 0 ;
            decomp(exp1);
            
            Space(1);
            
            PrintString("=");
            if ( assignAlign && IsTop(paramTree) != -1 ) 
                Space(2);
            
            else 
                Space(1);
                
            
            decomp(exp2);
            
            if ( oldStatement ) {
                                    SepBefore();
                                    
                                    PrintString(";");
                                    
                                 }
            break ;
            
        case cplus::MUL_AFF : 
            (exp1=SonTree(paramTree, 1));
            
            (exp2=SonTree(paramTree, 2));
            
        _Case296 : 
            ;
            statementf = 0 ;
            decomp(exp1);
            
            Space(1);
            
            PrintString("*=");
            Space(1);
            
            decomp(exp2);
            
            if ( oldStatement ) {
                                    SepBefore();
                                    
                                    PrintString(";");
                                    
                                 }
            break ;
            
        case cplus::DIV_AFF : 
            (exp1=SonTree(paramTree, 1));
            
            (exp2=SonTree(paramTree, 2));
            
        _Case297 : 
            ;
            statementf = 0 ;
            decomp(exp1);
            
            Space(1);
            
            PrintString("/=");
            Space(1);
            
            decomp(exp2);
            
            if ( oldStatement ) {
                                    SepBefore();
                                    
                                    PrintString(";");
                                    
                                 }
            break ;
            
        case cplus::REM_AFF : 
            (exp1=SonTree(paramTree, 1));
            
            (exp2=SonTree(paramTree, 2));
            
        _Case298 : 
            ;
            statementf = 0 ;
            decomp(exp1);
            
            Space(1);
            
            PrintString("%=");
            Space(1);
            
            decomp(exp2);
            
            if ( oldStatement ) {
                                    SepBefore();
                                    
                                    PrintString(";");
                                    
                                 }
            break ;
            
        case cplus::PLU_AFF : 
            (exp1=SonTree(paramTree, 1));
            
            (exp2=SonTree(paramTree, 2));
            
        _Case299 : 
            ;
            statementf = 0 ;
            decomp(exp1);
            
            Space(1);
            
            PrintString("+=");
            Space(1);
            
            decomp(exp2);
            
            if ( oldStatement ) {
                                    SepBefore();
                                    
                                    PrintString(";");
                                    
                                 }
            break ;
            
        case cplus::MIN_AFF : 
            (exp1=SonTree(paramTree, 1));
            
            (exp2=SonTree(paramTree, 2));
            
        _Case300 : 
            ;
            statementf = 0 ;
            decomp(exp1);
            
            Space(1);
            
            PrintString("-=");
            Space(1);
            
            decomp(exp2);
            
            if ( oldStatement ) {
                                    SepBefore();
                                    
                                    PrintString(";");
                                    
                                 }
            break ;
            
        case cplus::LSH_AFF : 
            (exp1=SonTree(paramTree, 1));
            
            (exp2=SonTree(paramTree, 2));
            
        _Case301 : 
            ;
            statementf = 0 ;
            decomp(exp1);
            
            Space(1);
            
            PrintString("<<=");
            Space(1);
            
            decomp(exp2);
            
            if ( oldStatement ) {
                                    SepBefore();
                                    
                                    PrintString(";");
                                    
                                 }
            break ;
            
        case cplus::RSH_AFF : 
            (exp1=SonTree(paramTree, 1));
            
            (exp2=SonTree(paramTree, 2));
            
        _Case302 : 
            ;
            statementf = 0 ;
            decomp(exp1);
            
            Space(1);
            
            PrintString(">>=");
            Space(1);
            
            decomp(exp2);
            
            if ( oldStatement ) {
                                    SepBefore();
                                    
                                    PrintString(";");
                                    
                                 }
            break ;
            
        case cplus::AND_AFF : 
            (exp1=SonTree(paramTree, 1));
            
            (exp2=SonTree(paramTree, 2));
            
        _Case303 : 
            ;
            statementf = 0 ;
            decomp(exp1);
            
            Space(1);
            
            PrintString("&=");
            Space(1);
            
            decomp(exp2);
            
            if ( oldStatement ) {
                                    SepBefore();
                                    
                                    PrintString(";");
                                    
                                 }
            break ;
            
        case cplus::OR_AFF : 
            (exp1=SonTree(paramTree, 1));
            
            (exp2=SonTree(paramTree, 2));
            
        _Case304 : 
            ;
            statementf = 0 ;
            decomp(exp1);
            
            Space(1);
            
            PrintString("|=");
            Space(1);
            
            decomp(exp2);
            
            if ( oldStatement ) {
                                    SepBefore();
                                    
                                    PrintString(";");
                                    
                                 }
            break ;
            
        case cplus::XOR_AFF : 
            (exp1=SonTree(paramTree, 1));
            
            (exp2=SonTree(paramTree, 2));
            
        _Case305 : 
            ;
            statementf = 0 ;
            decomp(exp1);
            
            Space(1);
            
            PrintString("^=");
            Space(1);
            
            decomp(exp2);
            
            if ( oldStatement ) {
                                    SepBefore();
                                    
                                    PrintString(";");
                                    
                                 }
            break ;
            
        case cplus::COND_AFF : 
            (exp1=SonTree(paramTree, 1));
            
            (exp2=SonTree(paramTree, 2));
            
            (exp3=SonTree(paramTree, 3));
            
        _Case306 : 
            ;
            statementf = 0 ;
            decomp(exp1);
            
            Space(1);
            
            PrintString("?");
            Space(1);
            
            decomp(exp2);
            
            Space(1);
            
            PrintString(":");
            Space(1);
            
            decomp(exp3);
            
            if ( oldStatement ) {
                                    SepBefore();
                                    
                                    PrintString(";");
                                    
                                 }
            break ;
            
        case cplus::OR : 
            (exp1=SonTree(paramTree, 1));
            
            (exp2=SonTree(paramTree, 2));
            
        _Case307 : 
            ;
            decomp(exp1);
            
            Space(1);
            
            PrintString("||");
            Space(1);
            
            decomp(exp2);
            
            break ;
            
        case cplus::AND : 
            (exp1=SonTree(paramTree, 1));
            
            (exp2=SonTree(paramTree, 2));
            
        _Case308 : 
            ;
            decomp(exp1);
            
            Space(1);
            
            PrintString("&&");
            Space(1);
            
            decomp(exp2);
            
            break ;
            
        case cplus::LOR : 
            (exp1=SonTree(paramTree, 1));
            
            (exp2=SonTree(paramTree, 2));
            
        _Case309 : 
            ;
            decomp(exp1);
            
            Space(1);
            
            PrintString("|");
            Space(1);
            
            decomp(exp2);
            
            break ;
            
        case cplus::LAND : 
            (exp1=SonTree(paramTree, 1));
            
            (exp2=SonTree(paramTree, 2));
            
        _Case310 : 
            ;
            decomp(exp1);
            
            Space(1);
            
            PrintString("&");
            Space(1);
            
            decomp(exp2);
            
            break ;
            
        case cplus::LXOR : 
            (exp1=SonTree(paramTree, 1));
            
            (exp2=SonTree(paramTree, 2));
            
        _Case311 : 
            ;
            decomp(exp1);
            
            Space(1);
            
            PrintString("^");
            Space(1);
            
            decomp(exp2);
            
            break ;
            
        case cplus::EQU : 
            (exp1=SonTree(paramTree, 1));
            
            (exp2=SonTree(paramTree, 2));
            
        _Case312 : 
            ;
            decomp(exp1);
            
            Space(1);
            
            PrintString("==");
            Space(1);
            
            decomp(exp2);
            
            break ;
            
        case cplus::NEQU : 
            (exp1=SonTree(paramTree, 1));
            
            (exp2=SonTree(paramTree, 2));
            
        _Case313 : 
            ;
            decomp(exp1);
            
            Space(1);
            
            PrintString("!=");
            Space(1);
            
            decomp(exp2);
            
            break ;
            
        case cplus::LEQU : 
            (exp1=SonTree(paramTree, 1));
            
            (exp2=SonTree(paramTree, 2));
            
        _Case314 : 
            ;
            decomp(exp1);
            
            Space(1);
            
            PrintString("<=");
            Space(1);
            
            decomp(exp2);
            
            break ;
            
        case cplus::GEQU : 
            (exp1=SonTree(paramTree, 1));
            
            (exp2=SonTree(paramTree, 2));
            
        _Case315 : 
            ;
            decomp(exp1);
            
            Space(1);
            
            PrintString(">=");
            Space(1);
            
            decomp(exp2);
            
            break ;
            
        case cplus::GT : 
            (exp1=SonTree(paramTree, 1));
            
            (exp2=SonTree(paramTree, 2));
            
        _Case316 : 
            ;
            decomp(exp1);
            
            Space(1);
            
            PrintString(">");
            Space(1);
            
            decomp(exp2);
            
            break ;
            
        case cplus::LT : 
            (exp1=SonTree(paramTree, 1));
            
            (exp2=SonTree(paramTree, 2));
            
        _Case317 : 
            ;
            decomp(exp1);
            
            Space(1);
            
            PrintString("<");
            Space(1);
            
            decomp(exp2);
            
            break ;
            
        case cplus::LSHI : 
            (exp1=SonTree(paramTree, 1));
            
            (exp2=SonTree(paramTree, 2));
            
        _Case318 : 
            ;
            decomp(exp1);
            
            Space(1);
            
            PrintString("<<");
            Space(1);
            
            decomp(exp2);
            
            break ;
            
        case cplus::RSHI : 
            (exp1=SonTree(paramTree, 1));
            
            (exp2=SonTree(paramTree, 2));
            
        _Case319 : 
            ;
            decomp(exp1);
            
            Space(1);
            
            PrintString(">>");
            Space(1);
            
            decomp(exp2);
            
            break ;
            
        case cplus::PLUS : 
            (exp1=SonTree(paramTree, 1));
            
            (exp2=SonTree(paramTree, 2));
            
        _Case320 : 
            ;
            decomp(exp1);
            
            Space(1);
            
            PrintString("+");
            Space(1);
            
            decomp(exp2);
            
            break ;
            
        case cplus::MINUS : 
            (exp1=SonTree(paramTree, 1));
            
            (exp2=SonTree(paramTree, 2));
            
        _Case321 : 
            ;
            decomp(exp1);
            
            Space(1);
            
            PrintString("-");
            Space(1);
            
            decomp(exp2);
            
            break ;
            
        case cplus::MUL : 
            (exp1=SonTree(paramTree, 1));
            
            (exp2=SonTree(paramTree, 2));
            
        _Case322 : 
            ;
            decomp(exp1);
            
            Space(1);
            
            PrintString("*");
            Space(1);
            
            decomp(exp2);
            
            break ;
            
        case cplus::DIV : 
            (exp1=SonTree(paramTree, 1));
            
            (exp2=SonTree(paramTree, 2));
            
        _Case323 : 
            ;
            decomp(exp1);
            
            Space(1);
            
            PrintString("/");
            Space(1);
            
            decomp(exp2);
            
            break ;
            
        case cplus::REM : 
            (exp1=SonTree(paramTree, 1));
            
            (exp2=SonTree(paramTree, 2));
            
        _Case324 : 
            ;
            decomp(exp1);
            
            Space(1);
            
            PrintString("%");
            Space(1);
            
            decomp(exp2);
            
            break ;
            
        case cplus::NEG : 
            (exp=SonTree(paramTree, 1));
            
        _Case325 : 
            ;
            Space(1);
            
            PrintString("-");
            decomp(exp);
            
            break ;
            
        case cplus::POS : 
            (exp=SonTree(paramTree, 1));
            
        _Case326 : 
            ;
            Space(1);
            
            PrintString("+");
            Space(1);
            
            decomp(exp);
            
            break ;
            
        case cplus::LNEG : 
            (exp=SonTree(paramTree, 1));
            
        _Case327 : 
            ;
            SepBefore();
            
            PrintString("~");
            decomp(exp);
            
            break ;
            
        case cplus::NOT : 
            (exp=SonTree(paramTree, 1));
            
        _Case328 : 
            ;
            SepBefore();
            
            PrintString("!");
            decomp(exp);
            
            break ;
            
        case cplus::POINT : 
            (exp=SonTree(paramTree, 1));
            
        _Case329 : 
            ;
            SepBefore();
            
            PrintString("*");
            decomp(exp);
            
            break ;
            
        case cplus::ADDR : 
            (exp=SonTree(paramTree, 1));
            
        _Case330 : 
            ;
            SepBefore();
            
            PrintString("&");
            decomp(exp);
            
            break ;
            
        case cplus::BINCR : 
            (exp=SonTree(paramTree, 1));
            
        _Case331 : 
            ;
            SepBefore();
            
            PrintString("++");
            decomp(exp);
            
            break ;
            
        case cplus::BDECR : 
            (exp=SonTree(paramTree, 1));
            
        _Case332 : 
            ;
            SepBefore();
            
            PrintString("--");
            decomp(exp);
            
            break ;
            
        case cplus::AINCR : 
            (exp=SonTree(paramTree, 1));
            
        _Case333 : 
            ;
            decomp(exp);
            
            PrintString("++");
            SepAfter();
            
            break ;
            
        case cplus::ADECR : 
            (exp=SonTree(paramTree, 1));
            
        _Case334 : 
            ;
            decomp(exp);
            
            PrintString("--");
            SepAfter();
            
            break ;
            
        case cplus::EXP : 
            (exp=SonTree(paramTree, 1));
            
        _Case335 : 
            ;
            statementf = 0 ;
            PrintString("(");
            decomp(exp);
            
            PrintString(")");
            break ;
            
        case cplus::EXP_LIST : 
            (exp=SonTree(paramTree, 1));
            
            (list=SonTree(paramTree, 2));
            
        _Case336 : 
            ;
            statementf = 0 ;
            decomp(exp);
            
            PrintString("(");
            decomp(list);
            
            PrintString(")");
            break ;
            
        case cplus::VA_ARG : 
            (exp1=SonTree(paramTree, 1));
            
            (exp2=SonTree(paramTree, 2));
            
        _Case337 : 
            ;
            statementf = 0 ;
            PrintString("va_arg(");
            decomp(exp1);
            
            PrintString(",");
            decomp(exp2);
            
            PrintString(")");
            break ;
            
        case cplus::FUNC_SPEC : 
            (exp=SonTree(paramTree, 1));
            
            (list=SonTree(paramTree, 2));
            
        _Case338 : 
            ;
            statementf = 0 ;
            decomp(exp);
            
            PrintString("(");
            decomp(list);
            
            PrintString(")");
            break ;
            
        case cplus::FORALLSONS : 
            (exp1=SonTree(paramTree, 1));
            
            (exp2=SonTree(paramTree, 2));
            
        _Case339 : 
            ;
            statementf = 0 ;
            PrintString("forallsons");
            PrintString("(");
            decomp(exp1);
            
            PrintString(",");
            Space(1);
            
            decomp(exp2);
            
            PrintString(")");
            break ;
            
        case cplus::EXP_ARRAY : 
            (exp=SonTree(paramTree, 1));
            
            (list=SonTree(paramTree, 2));
            
        _Case340 : 
            ;
            decomp(exp);
            
            SepBefore();
            
            PrintString("[");
            decomp(list);
            
            PrintString("]");
            break ;
            
        case cplus::EXP_BRA : 
            (exp=SonTree(paramTree, 1));
            
            (list=SonTree(paramTree, 2));
            
        _Case341 : 
            ;
            decomp(exp);
            
            SepBefore();
            
            PrintString("{");
            decomp(list);
            
            PrintString("}");
            break ;
            
        case cplus::REF : 
            (exp1=SonTree(paramTree, 1));
            
            (exp2=SonTree(paramTree, 2));
            
        _Case342 : 
            ;
            decomp(exp1);
            
            PrintString(".");
            decomp(exp2);
            
            break ;
            
        case cplus::ARROW : 
            (exp1=SonTree(paramTree, 1));
            
            (exp2=SonTree(paramTree, 2));
            
        _Case343 : 
            ;
            decomp(exp1);
            
            if ( spaceArrow ) {
                                Space(1);
                                
                                
                               }
            PrintString("->");
            if ( spaceArrow ) {
                                Space(1);
                                
                                
                               }
            decomp(exp2);
            
            break ;
            
        case cplus::STRING_LIST : 
            (list=SonTree(paramTree, 1));
            
        _Case344 : 
            ;
            while ( ((_inter = (PPTREE)list,1) && 
                        (NumberTree(_inter) == LIST) &&
                        1) ) {
                                (son=(list?list.Nextl():(PPTREE)0));
                                
                                decomp(son);
                                
                                if ( !((!list)) ) 
                                    Space(1);
                                
                                
                             }
            break ;
            
        case cplus::STRING : 
            (val=SonTree(paramTree, 1));
            
        _Case345 : 
            ;
            PrintString("\"");
            DumpBrainyValue(val);
            
            PrintString("\"");
            break ;
            
        case cplus::INTEGER : 
            (val=SonTree(paramTree, 1));
            
        _Case346 : 
            ;
            DumpBrainyValue(val);
            
            break ;
            
        case cplus::HEXA : 
            (val=SonTree(paramTree, 1));
            
        _Case347 : 
            ;
            PrintString("0x");
            NoSep();
            
            decomp(val);
            
            break ;
            
        case cplus::BINARY : 
            (val=SonTree(paramTree, 1));
            
        _Case348 : 
            ;
            PrintString("0b");
            NoSep();
            
            decomp(val);
            
            break ;
            
        case cplus::LONG : 
            (val=SonTree(paramTree, 1));
            
        _Case349 : 
            ;
            decomp(val);
            
            NoSep();
            
            PrintString("L");
            break ;
            
        case cplus::LONGLONG : 
            (val=SonTree(paramTree, 1));
            
        _Case350 : 
            ;
            decomp(val);
            
            NoSep();
            
            PrintString("LL");
            break ;
            
        case cplus::OCTAL : 
            (val=SonTree(paramTree, 1));
            
        _Case351 : 
            ;
            PrintString("0");
            NoSep();
            
            decomp(val);
            
            break ;
            
        case cplus::IUN : 
            (val=SonTree(paramTree, 1));
            
        _Case352 : 
            ;
            decomp(val);
            
            NoSep();
            
            PrintString("U");
            break ;
            
        case cplus::IUNLONG : 
            (val=SonTree(paramTree, 1));
            
        _Case353 : 
            ;
            decomp(val);
            
            NoSep();
            
            PrintString("UL");
            break ;
            
        case cplus::IUNLONGLONG : 
            (val=SonTree(paramTree, 1));
            
        _Case354 : 
            ;
            decomp(val);
            
            NoSep();
            
            PrintString("ULL");
            break ;
            
        case cplus::ILONG : 
            (val=SonTree(paramTree, 1));
            
        _Case355 : 
            ;
            decomp(val);
            
            NoSep();
            
            PrintString("L");
            break ;
            
        case cplus::ILONGLONG : 
            (val=SonTree(paramTree, 1));
            
        _Case356 : 
            ;
            decomp(val);
            
            NoSep();
            
            PrintString("LL");
            break ;
            
        case cplus::FLOAT : 
            (val=SonTree(paramTree, 1));
            
        _Case357 : 
            ;
            DumpBrainyValue(val);
            
            break ;
            
        case cplus::CHAR : 
            (val=SonTree(paramTree, 1));
            
        _Case358 : 
            ;
            PrintString("'");
            DumpBrainyValue(val);
            
            PrintString("'");
            break ;
            
        case cplus::EXCEPT_ANSI_ALL : 
        _Case359 : 
            ;
            goto _Case360 ;
            
        case cplus::VAR_LIST : 
        _Case360 : 
            ;
            PrintString("...");
            break ;
            
        case cplus::COMPOUND : 
            (list=SonTree(paramTree, 1));
            
        _Case361 : 
            ;
            if ( (!list) ) {
                                SepBefore();
                                
                                PrintString("{");
                                if ( !ansiMode && ( _inter = 
                                                        FatherTree(paramTree),((_inter = (PPTREE)_inter,1) && 
                                                                                    (NumberTree(_inter) == cplus::IF) &&
                                                                                    1)) && sontree(FatherTree(paramTree), 3) ) 
                                    LNewLine(1);
                                
                                PrintString("}");
                                SepAfter();
                                
                                
                             } else 
            {
                (exp=FatherTree(paramTree));
                
                bool    inFunc = false ;
                
                if ( ((_inter = (PPTREE)exp,1) && 
                        (NumberTree(_inter) == cplus::FUNC) &&
                        1) ) 
                    inFunc = true ;
                if ( ansiMode && !braceAlign || braceAlignNoFunc && inFunc ) 
                    LNewLine(1);
                
                if ( !(ansiMode && braceAlign) || braceAlignNoFunc && inFunc ) {
                                                                                        SepBefore();
                                                                                        
                                                                                        PrintString("{");
                                                                                        
                                                                                     }
                LNewLine(1);
                
                if ( ansiMode && braceAlign ) {
                                                    if ( !inFunc || braceAlignTabFunc || braceAlignNoFunc ) {
                                                                                                                    if ( !(((_inter = (PPTREE)exp,1) && 
                                                                                                                             (NumberTree(_inter) == LIST) &&
                                                                                                                             1)) ) {
                                                                                                                                   Tab();
                                                                                                                                   
                                                                                                                                   
                                                                                                                                   }
                                                                                                                    
                                                                                                                }
                                                    
                                                } else 
                    Tab();
                    
                
                Mark();
                if ( ansiMode && braceAlign && !(braceAlignNoFunc && inFunc) ) {
                                                                                        PrintString("{");
                                                                                        LNewLine(1);
                                                                                        
                                                                                        
                                                                                     }
                statementf = 1 ;
                while ( ((_inter = (PPTREE)list,1) && 
                            (NumberTree(_inter) == LIST) &&
                            1) ) {
                                    (son=(list?list.Nextl():(PPTREE)0));
                                    
                                    (postComment=son);
                                    
                                    ((_inter = (PPTREE)postComment,1) && 
                                        (NumberTree(_inter) == cplus::ATTRIBUTS) &&
                                        ((postComment=SonTree(_inter,1)),1) &&
                                        1);
                                    ;
                                    decomp(son);
                                    
                                    if ( !Sequence(son, sontree(list, 1)) ) {
                                                                                    control_stat1(son);
                                                                                    LNewLine(1);
                                                                                    
                                                                                    
                                                                                  } else 
                                    {
                                        Space(1);
                                        
                                        
                                    }
                                    
                                    
                                 }
                if ( ansiMode && braceAlign && !(braceAlignNoFunc && inFunc) ) {
                                                                                        PrintString("}");
                                                                                        SepAfter();
                                                                                        
                                                                                        
                                                                                     }
                UnMark();
                
                if ( !(ansiMode && braceAlign) || braceAlignNoFunc && inFunc ) {
                                                                                        PrintString("}");
                                                                                        SepAfter();
                                                                                        
                                                                                        
                                                                                     }
                
            }
            
            break ;
            
        case cplus::BREAK : 
        _Case362 : 
            ;
            PrintString("break ;");
            (oldPostComment=paramTree);
            
            comm(paramTree, POST);
            LNewLine(1);
            
            break ;
            
        case cplus::CONTINUE : 
        _Case363 : 
            ;
            PrintString("continue ;");
            (oldPostComment=paramTree);
            
            comm(paramTree, POST);
            LNewLine(1);
            
            break ;
            
        case cplus::DO : 
            (stat=SonTree(paramTree, 1));
            
            (exp=SonTree(paramTree, 2));
            
        _Case364 : 
            ;
            PrintString("do");
            if ( !(((_inter = (PPTREE)stat,1) && 
                        (NumberTree(_inter) == cplus::COMPOUND) &&
                        1)) ) {
                                if ( !(((_inter = (PPTREE)stat,1) && 
                                            (NumberTree(_inter) == cplus::STAT_VOID) &&
                                            1)) ) {
                                                    LNewLine(1);
                                                    
                                                    Tab();
                                                    
                                                    
                                                  }
                                (postComment=stat);
                                
                                decomp(stat);
                                
                                if ( !Sequence(stat, stat) ) {
                                                                    control_stat1(stat);
                                                                    LNewLine(1);
                                                                    
                                                                    
                                                                 } else 
                                {
                                    Space(1);
                                    
                                    
                                }
                                
                                
                              } else 
            {
                Space(1);
                
                decomp(stat);
                
                Space(1);
                
                
            }
            
            statementf = 0 ;
            if ( ansiMode && braceAlign && ((_inter = (PPTREE)stat,1) && 
                                                (NumberTree(_inter) == cplus::COMPOUND) &&
                                                1) ) 
                LNewLine(1);
            
            PrintString("while (");
            Mark();
            Space(1);
            
            decomp(exp);
            
            Space(1);
            
            UnMark();
            
            PrintString(");");
            statementf = 1 ;
            LNewLine(1);
            
            break ;
            
        case cplus::FOR : 
            (exp1=SonTree(paramTree, 1));
            
            (exp2=SonTree(paramTree, 2));
            
            (exp3=SonTree(paramTree, 3));
            
            (stat=SonTree(paramTree, 4));
            
        _Case365 : 
            ;
            statementf = 0 ;
            if ( !(((_inter = (PPTREE)exp1,1) && 
                        (NumberTree(_inter) == cplus::ALL_OF) &&
                        1)) ) {
                                PrintString("for (");
                                Mark();
                                if ( !((!exp1)) ) {
                                                        Space(1);
                                                        
                                                        decomp(exp1);
                                                        
                                                        Space(1);
                                                        
                                                        
                                                    }
                                PrintString(";");
                                if ( !((!exp2)) ) {
                                                        Space(1);
                                                        
                                                        decomp(exp2);
                                                        
                                                        Space(1);
                                                        
                                                        
                                                    }
                                PrintString(";");
                                if ( !((!exp3)) ) {
                                                        Space(1);
                                                        
                                                        decomp(exp3);
                                                        
                                                        Space(1);
                                                        
                                                        
                                                    }
                                UnMark();
                                
                                PrintString(")");
                                Space(1);
                                
                                
                              } else 
            {
                PTREE   var, allVar ;
                
                ((_inter = (PPTREE)exp1,1) && 
                    ((var=SonTree(_inter,1)),1) &&
                    ((allVar=SonTree(_inter,2)),1) &&
                    1);
                ;
                PrintString("for (");
                Mark();
                {
                    Space(1);
                    
                    decomp(var);
                    
                    Space(1);
                    
                    
                }
                
                PrintString(":");
                {
                    Space(1);
                    
                    decomp(allVar);
                    
                    Space(1);
                    
                    
                }
                
                UnMark();
                
                PrintString(")");
                Space(1);
                
                
            }
            
            statementf = 1 ;
            if ( !(((_inter = (PPTREE)stat,1) && 
                        (NumberTree(_inter) == cplus::COMPOUND) &&
                        1)) ) {
                                (postComment=stat);
                                
                                LNewLine(1);
                                
                                Tab();
                                
                                Mark();
                                decomp(stat);
                                
                                UnMark();
                                
                                if ( !Sequence(stat, stat) ) {
                                                                    control_stat1(stat);
                                                                    LNewLine(1);
                                                                    
                                                                    
                                                                 } else 
                                {
                                    Space(1);
                                    
                                    
                                }
                                
                                
                              } else 
            {
                decomp(stat);
                
                LNewLine(1);
                
                
            }
            
            break ;
            
        case cplus::GOTO : 
            (ident=SonTree(paramTree, 1));
            
        _Case366 : 
            ;
            PrintString("goto");
            DumpBrainyValue(ident);
            
            SepBefore();
            
            PrintString(";");
            (oldPostComment=paramTree);
            
            comm(paramTree, POST);
            LNewLine(1);
            
            break ;
            
        case cplus::NONE : 
        _Case367 : 
            ;
            (oldPostComment=paramTree);
            
            comm(paramTree, POST);
            LNewLine(1);
            
            break ;
            
        case cplus::LABEL : 
            (ident=SonTree(paramTree, 1));
            
            (stat=SonTree(paramTree, 2));
            
        _Case368 : 
            ;
            (postComment=stat);
            
            UnMark();
            DumpBrainyValue(ident);
            
            Space(1);
            
            PrintString(":");
            Space(1);
            
            LNewLine(1);
            
            Tab();
            
            Mark();
            Mark();
            decomp(stat);
            
            UnMark();
            
            if ( !Sequence(stat, stat) ) {
                                                control_stat1(stat);
                                                
                                             } else 
            {
                Space(1);
                
                
            }
            
            break ;
            
        case cplus::IF : 
            (exp=SonTree(paramTree, 1));
            
            (stat1=SonTree(paramTree, 2));
            
            (stat2=SonTree(paramTree, 3));
            
        _Case369 : 
            ;
            statementf = 0 ;
            PrintString("if (");
            Mark();
            Space(1);
            
            decomp(exp);
            
            Space(1);
            
            UnMark();
            
            PrintString(")");
            Space(1);
            
            statementf = 1 ;
            if ( IsComm(stat1, PRE) || IsComm(stat2, PRE) ) 
                LNewLine(1);
            
            if ( !(((_inter = (PPTREE)stat1,1) && 
                        (NumberTree(_inter) == cplus::COMPOUND) &&
                        1)) ) {
                                (postComment=stat1);
                                
                                LNewLine(1);
                                
                                Tab();
                                
                                Mark();
                                decomp(stat1);
                                
                                UnMark();
                                
                                {
                                    if ( !Sequence(stat1, stat1) ) {
                                                                        control_stat1(stat1);
                                                                        
                                                                       } else 
                                    {
                                        Space(1);
                                        
                                        
                                    }
                                    
                                    
                                }
                                
                                
                              } else 
                decomp(stat1);
                
            
            if ( !((!stat2)) ) {
                                    if ( !(((_inter = (PPTREE)stat1,1) && 
                                                (NumberTree(_inter) == cplus::COMPOUND) &&
                                                1)) || ansiMode || IsComm(stat1, PRE) ) 
                                        LNewLine(1);
                                    
                                    else 
                                        Space(1);
                                        
                                    
                                    PrintString("else");
                                    Space(1);
                                    
                                    if ( ansiMode && !(((_inter = (PPTREE)stat2,1) && 
                                                            (NumberTree(_inter) == cplus::IF) &&
                                                            1)) || IsComm(stat1, PRE) && (IsComm(stat2, PRE) || !(((_inter = (PPTREE)stat2,1) && 
                                                                                                                           (NumberTree(_inter) == cplus::IF) &&
                                                                                                                           1))) || IsComm(stat2, PRE) ) 
                                        LNewLine(1);
                                    
                                    if ( !(((_inter = (PPTREE)stat2,1) && 
                                                (NumberTree(_inter) == cplus::COMPOUND) &&
                                                1)) && !(((_inter = (PPTREE)stat2,1) && 
                                                            (NumberTree(_inter) == cplus::IF) &&
                                                            1)) ) {
                                                                    (postComment=stat2);
                                                                    
                                                                    LNewLine(1);
                                                                    
                                                                    Tab();
                                                                    
                                                                    Mark();
                                                                    decomp(stat2);
                                                                    
                                                                    UnMark();
                                                                    
                                                                    if ( !Sequence(stat2, stat2) ) {
                                                                                                        control_stat1(stat2);
                                                                                                        LNewLine(1);
                                                                                                        
                                                                                                        
                                                                                                       } else 
                                                                    {
                                                                        Space(1);
                                                                        
                                                                        
                                                                    }
                                                                    
                                                                    
                                                                  } else 
                                    {
                                        (postComment=stat2);
                                        
                                        decomp(stat2);
                                        
                                        if ( !Sequence(stat2, stat2) ) {
                                                                            control_stat1(stat2);
                                                                            
                                                                           } else 
                                        {
                                            Space(1);
                                            
                                            
                                        }
                                        
                                        
                                    }
                                    
                                    
                                 }
            break ;
            
        case cplus::STAT_VOID : 
        _Case370 : 
            ;
            {
                SepBefore();
                
                PrintString(";");
                
            }
            
            (oldPostComment=paramTree);
            
            comm(paramTree, POST);
            break ;
            
        case cplus::RETURN : 
            (exp=SonTree(paramTree, 1));
            
        _Case371 : 
            ;
            statementf = 0 ;
            PrintString("return");
            Space(1);
            
            decomp(exp);
            
            {
                SepBefore();
                
                PrintString(";");
                
            }
            
            (oldPostComment=paramTree);
            
            comm(paramTree, POST);
            LNewLine(1);
            
            break ;
            
        case cplus::DEFAULT : 
        _Case372 : 
            ;
            goto _Case373 ;
            
        case cplus::CASE : 
        _Case373 : 
            ;
            {
                (son=paramTree);
                
                if ( ((_inter = (PPTREE)son,1) && 
                        (NumberTree(_inter) == cplus::DEFAULT) &&
                        1) || ((_inter = (PPTREE)son,1) && 
                                    (NumberTree(_inter) == cplus::CASE) &&
                                    1) ) {
                                            if ( ((_inter = (PPTREE)son,1) && 
                                                    (NumberTree(_inter) == cplus::DEFAULT) &&
                                                    ((stat=SonTree(_inter,1)),1) &&
                                                    1) ) {
                                                            PrintString("default :");
                                                            Space(1);
                                                            
                                                            
                                                         } else 
                                            if ( ((_inter = (PPTREE)son,1) && 
                                                    (NumberTree(_inter) == cplus::CASE) &&
                                                    1) ) {
                                                            statementf = 0 ;
                                                            ((_inter = (PPTREE)son,1) && 
                                                                ((exp=SonTree(_inter,1)),1) &&
                                                                ((stat=SonTree(_inter,2)),1) &&
                                                                1);
                                                            ;
                                                            PrintString("case ");
                                                            decomp(exp);
                                                            
                                                            Space(1);
                                                            
                                                            PrintString(":");
                                                            Space(1);
                                                            
                                                            statementf = oldStatement ;
                                                            
                                                         }
                                            (son=sontree(stat, 1));
                                            
                                            if ( !sontree(stat, 2) && singleSwitchIndent ) {
                                                                                                    switch ( NumberTree(son) ) {
                                                                                                        case cplus::COMPOUND : 
                                                                                                        _Case407 : 
                                                                                                            ;
                                                                                                            goto _Case408 ;
                                                                                                            
                                                                                                        case cplus::CASE : 
                                                                                                        _Case408 : 
                                                                                                            ;
                                                                                                            goto _Case409 ;
                                                                                                            
                                                                                                        case cplus::DEFAULT : 
                                                                                                        _Case409 : 
                                                                                                            ;
                                                                                                            goto _Case410 ;
                                                                                                            
                                                                                                        case cplus::IF : 
                                                                                                        _Case410 : 
                                                                                                            ;
                                                                                                            goto _Case411 ;
                                                                                                            
                                                                                                        case cplus::WHILE : 
                                                                                                        _Case411 : 
                                                                                                            ;
                                                                                                            goto _Case412 ;
                                                                                                            
                                                                                                        case cplus::FOR : 
                                                                                                        _Case412 : 
                                                                                                            ;
                                                                                                            goto _Case413 ;
                                                                                                            
                                                                                                        case cplus::DO : 
                                                                                                        _Case413 : 
                                                                                                            ;
                                                                                                            goto _Case414 ;
                                                                                                            
                                                                                                        case cplus::SWITCH : 
                                                                                                        _Case414 : 
                                                                                                            ;
                                                                                                            goto _Case415 ;
                                                                                                            
                                                                                                        case cplus::IF_DIR : 
                                                                                                        _Case415 : 
                                                                                                            ;
                                                                                                            goto _Case416 ;
                                                                                                            
                                                                                                        case cplus::IFDEF_DIR : 
                                                                                                        _Case416 : 
                                                                                                            ;
                                                                                                            goto _Case417 ;
                                                                                                            
                                                                                                        case cplus::IFNDEF_DIR : 
                                                                                                        _Case417 : 
                                                                                                            ;
                                                                                                            goto _Case418 ;
                                                                                                            
                                                                                                        case cplus::NOT_MANAGED : 
                                                                                                        _Case418 : 
                                                                                                            ;
                                                                                                            goto _Case419 ;
                                                                                                            
                                                                                                        case cplus::NO_PRETTY : 
                                                                                                        _Case419 : 
                                                                                                            ;
                                                                                                            goto _Case420 ;
                                                                                                            
                                                                                                        case cplus::ATTRIBUTS : 
                                                                                                        _Case420 : 
                                                                                                            ;
                                                                                                            goto _Case421 ;
                                                                                                            
                                                                                                        case cplus::EXCEPTION : 
                                                                                                        _Case421 : 
                                                                                                            ;
                                                                                                            goto _Case422 ;
                                                                                                            
                                                                                                        case cplus::EXCEPTION_ANSI : 
                                                                                                        _Case422 : 
                                                                                                            ;
                                                                                                            goto _Case423 ;
                                                                                                            
                                                                                                        case cplus::CATCH_ANSI : 
                                                                                                        _Case423 : 
                                                                                                            ;
                                                                                                            oneInstruct = 0 ;
                                                                                                            break ;
                                                                                                            
                                                                                                        default : 
                                                                                                        _Case424 : 
                                                                                                            ;
                                                                                                            if ( son && !IsComm(son, PRE) ) 
                                                                                                                oneInstruct = 1 ;
                                                                                                            else 
                                                                                                                oneInstruct = 0 ;
                                                                                                            
                                                                                                    }
                                                                                                    
                                                                                                    
                                                                                                } else 
                                                oneInstruct = 0 ;
                                            
                                            if ( !oneInstruct ) {
                                                                    LNewLine(1);
                                                                    
                                                                    if ( !(ansiMode && braceAlign) || !(((_inter = (PPTREE)son,1) && 
                                                                                                                (NumberTree(_inter) == cplus::COMPOUND) &&
                                                                                                                1)) ) 
                                                                        Tab();
                                                                    
                                                                    
                                                                  }
                                            Mark();
                                            while ( ((_inter = (PPTREE)stat,1) && 
                                                        (NumberTree(_inter) == LIST) &&
                                                        1) ) {
                                                                (son=(stat?stat.Nextl():(PPTREE)0));
                                                                
                                                                (postComment=son);
                                                                
                                                                decomp(son);
                                                                
                                                                if ( !Sequence(son, sontree(stat, 1)) ) {
                                                                                                                control_stat1(son);
                                                                                                                LNewLine(1);
                                                                                                                
                                                                                                                
                                                                                                              } else 
                                                                {
                                                                    Space(1);
                                                                    
                                                                    
                                                                }
                                                                
                                                                
                                                             }
                                            UnMark();
                                            
                                            
                                         }
                
            }
            
            break ;
            
        case cplus::SWITCH : 
            (exp=SonTree(paramTree, 1));
            
            (list=SonTree(paramTree, 2));
            
        _Case374 : 
            ;
            (param=paramTree);
            
            statementf = 0 ;
            PrintString("switch (");
            Mark();
            Space(1);
            
            decomp(exp);
            
            Space(1);
            
            UnMark();
            
            PrintString(")");
            Space(1);
            
            if ( ansiMode ) 
                LNewLine(1);
            
            if ( !(ansiMode && braceAlign) ) {
                                                    PrintString("{");
                                                    LNewLine(1);
                                                    
                                                    
                                                 }
            statementf = 1 ;
            Tab();
            
            Mark();
            if ( ansiMode && braceAlign ) {
                                                PrintString("{");
                                                LNewLine(1);
                                                
                                                
                                            }
            while ( ((_inter = (PPTREE)list,1) && 
                        (NumberTree(_inter) == LIST) &&
                        1) ) {
                                (stat1=(son=(list?list.Nextl():(PPTREE)0)));
                                
                                comm(son, PRE);
                                IntDecomp(son, 0);
                                comm(stat1, POST);
                                
                             }
            if ( ansiMode && braceAlign ) {
                                                PrintString("}");
                                                LNewLine(1);
                                                
                                                
                                            }
            UnMark();
            
            if ( !(ansiMode && braceAlign) ) {
                                                    PrintString("}");
                                                    LNewLine(1);
                                                    
                                                    
                                                 }
            break ;
            
        case cplus::WHILE : 
            (exp=SonTree(paramTree, 1));
            
            (stat=SonTree(paramTree, 2));
            
        _Case375 : 
            ;
            statementf = 0 ;
            PrintString("while (");
            Mark();
            Space(1);
            
            decomp(exp);
            
            Space(1);
            
            UnMark();
            
            PrintString(")");
            Space(1);
            
            statementf = 1 ;
            if ( !(((_inter = (PPTREE)stat,1) && 
                        (NumberTree(_inter) == cplus::COMPOUND) &&
                        1)) ) {
                                (postComment=stat);
                                
                                LNewLine(1);
                                
                                Tab();
                                
                                Mark();
                                decomp(stat);
                                
                                UnMark();
                                
                                if ( !Sequence(stat, stat) ) {
                                                                    control_stat1(stat);
                                                                    
                                                                 } else 
                                {
                                    Space(1);
                                    
                                    
                                }
                                
                                
                              } else 
            {
                decomp(stat);
                
                
            }
            
            break ;
            
        case cplus::EXCEPTION_ANSI : 
            (stat=SonTree(paramTree, 1));
            
            (list=SonTree(paramTree, 2));
            
        _Case376 : 
            ;
            {
                PrintString("try");
                if ( !(((_inter = (PPTREE)stat,1) && 
                            (NumberTree(_inter) == cplus::COMPOUND) &&
                            1)) ) {
                                    (postComment=stat);
                                    
                                    LNewLine(1);
                                    
                                    Tab();
                                    
                                    Mark();
                                    decomp(stat);
                                    
                                    UnMark();
                                    
                                    if ( !Sequence(stat, stat) ) {
                                                                        control_stat1(stat);
                                                                        
                                                                     } else 
                                    {
                                        Space(1);
                                        
                                        
                                    }
                                    
                                    
                                  } else 
                {
                    decomp(stat);
                    
                    
                }
                
                PTREE   elem ;
                
                while ( ((elem=(list?list.Nextl():(PPTREE)0))) ) {
                                                                        if ( ansiMode || IsComm(elem, PRE) ) 
                                                                            LNewLine(1);
                                                                        
                                                                        decomp(elem);
                                                                        
                                                                        
                                                                      }
                
            }
            
            break ;
            
        case cplus::CATCH_ANSI : 
            (exp=SonTree(paramTree, 1));
            
            (stat=SonTree(paramTree, 2));
            
        _Case377 : 
            ;
            statementf = 0 ;
            PrintString("catch (");
            Mark();
            Space(1);
            
            decomp(exp);
            
            Space(1);
            
            UnMark();
            
            PrintString(")");
            Space(1);
            
            statementf = 1 ;
            if ( !(((_inter = (PPTREE)stat,1) && 
                        (NumberTree(_inter) == cplus::COMPOUND) &&
                        1)) ) {
                                (postComment=stat);
                                
                                LNewLine(1);
                                
                                Tab();
                                
                                Mark();
                                decomp(stat);
                                
                                UnMark();
                                
                                if ( !Sequence(stat, stat) ) {
                                                                    control_stat1(stat);
                                                                    
                                                                 } else 
                                {
                                    Space(1);
                                    
                                    
                                }
                                
                                
                              } else 
            {
                decomp(stat);
                
                
            }
            
            break ;
            
        case cplus::THROW_ANSI : 
            (exp=SonTree(paramTree, 1));
            
        _Case378 : 
            ;
            statementf = 0 ;
            PrintString("throw");
            Space(1);
            
            decomp(exp);
            
            {
                SepBefore();
                
                PrintString(";");
                
            }
            
            (oldPostComment=paramTree);
            
            comm(paramTree, POST);
            LNewLine(1);
            
            break ;
            
        case cplus::TIDENT : 
            (ident=SonTree(paramTree, 1));
            
        _Case379 : 
            ;
            decomp(ident);
            
            break ;
            
        case cplus::TYPENAME : 
            (ident=SonTree(paramTree, 1));
            
        _Case380 : 
            ;
            PrintString("typename");
            decomp(ident);
            
            break ;
            
        case cplus::CLASSNAME : 
            (ident=SonTree(paramTree, 1));
            
        _Case381 : 
            ;
            PrintString("class");
            decomp(ident);
            
            break ;
            
        case cplus::DECL_TYPE : 
            (exp=SonTree(paramTree, 1));
            
        _Case382 : 
            ;
            PrintString("decltype(");
            decomp(exp);
            
            PrintString(")");
            break ;
            
        case cplus::AUTO : 
        _Case383 : 
            ;
            PrintString("auto");
            break ;
            
        case cplus::INCLUDE_DIR : 
            (param=SonTree(paramTree, 1));
            
        _Case384 : 
            ;
            {
                if ( tabDirective ) 
                    Mark();
                gotocol(0);
                PrintString("#");
                if ( tabDirective ) 
                    UnMark();
                
            }
            
            PrintString("include ");
            if ( ((_inter = (PPTREE)param,1) && 
                    (NumberTree(_inter) == cplus::STRING) &&
                    1) ) {
                            decomp(param);
                            
                            
                         } else 
            {
                PrintString("<");
                DumpBrainyValue(param);
                
                PrintString(">");
                
            }
            
            (oldPostComment=paramTree);
            
            comm(paramTree, POST);
            if ( !LastInTopList(paramTree) ) 
                LNewLine(1);
            
            break ;
            
        case cplus::DEFINE_DIR : 
            (ident=SonTree(paramTree, 1));
            
            (param=SonTree(paramTree, 2));
            
            (val=SonTree(paramTree, 3));
            
        _Case385 : 
            ;
            {
                if ( tabDirective ) 
                    Mark();
                gotocol(0);
                PrintString("#");
                if ( tabDirective ) 
                    UnMark();
                
            }
            
            Mark();
            PrintString("define ");
            DumpBrainyValue(ident);
            
            if ( !((!param)) ) {
                                    PrintString("(");
                                    while ( ((_inter = (PPTREE)param,1) && 
                                                (NumberTree(_inter) == LIST) &&
                                                1) ) {
                                                        (son=(param?param.Nextl():(PPTREE)0));
                                                        
                                                        decomp(son);
                                                        
                                                        if ( !((!param)) ) {
                                                                                PrintString(",");
                                                                                Space(1);
                                                                                
                                                                                
                                                                             }
                                                        
                                                     }
                                    PrintString(")");
                                    
                                 }
            Space(1);
            
            if ( !(((_inter = (PPTREE)val,1) && 
                        (NumberTree(_inter) == LIST) &&
                        1)) ) {
                                DumpBrainyValue(val);
                                
                                comm(val, POST);
                                if ( !LastInTopList(paramTree) ) 
                                    LNewLine(1);
                                
                                
                              } else 
            {
                while ( ((_inter = (PPTREE)val,1) && 
                            (NumberTree(_inter) == LIST) &&
                            1) ) {
                                    (son=(val?val.Nextl():(PPTREE)0));
                                    
                                    DumpBrainyValue(son);
                                    
                                    comm(son, POST);
                                    if ( !((!val)) ) {
                                                        LNewLine(1);
                                                        
                                                        PrintString("\b");
                                                        
                                                       }
                                    
                                 }
                if ( !LastInTopList(paramTree) ) 
                    LNewLine(1);
                
                
            }
            
            UnMark();
            
            (oldPostComment=paramTree);
            
            comm(paramTree, POST);
            LNewLine(1);
            
            break ;
            
        case cplus::UNDEF : 
            (exp=SonTree(paramTree, 1));
            
        _Case386 : 
            ;
            {
                if ( tabDirective ) 
                    Mark();
                gotocol(0);
                PrintString("#");
                if ( tabDirective ) 
                    UnMark();
                
            }
            
            PrintString("undef");
            DumpBrainyValue(exp);
            
            break ;
            
        case cplus::PRAGMA : 
            (exp=SonTree(paramTree, 1));
            
        _Case387 : 
            ;
            {
                if ( tabDirective ) 
                    Mark();
                gotocol(0);
                PrintString("#");
                if ( tabDirective ) 
                    UnMark();
                
            }
            
            PrintString("pragma ");
            DumpBrainyValue(exp);
            
            break ;
            
        case cplus::LINE_DIR : 
            (exp=SonTree(paramTree, 1));
            
            (exp1=SonTree(paramTree, 2));
            
        _Case388 : 
            ;
            {
                if ( tabDirective ) 
                    Mark();
                gotocol(0);
                PrintString("#");
                if ( tabDirective ) 
                    UnMark();
                PrintString("line ");
                decomp(exp);
                
                PrintString(" ");
                decomp(exp1);
                
                
            }
            
            break ;
            
        case cplus::LINE_REFERENCE_DIR : 
            (exp=SonTree(paramTree, 1));
            
            (exp1=SonTree(paramTree, 2));
            
            (exp2=SonTree(paramTree, 3));
            
        _Case389 : 
            ;
            {
                PTREE   elem ;
                
                if ( tabDirective ) 
                    Mark();
                gotocol(0);
                PrintString("#");
                if ( tabDirective ) 
                    UnMark();
                PrintString(" ");
                decomp(exp);
                
                PrintString(" ");
                decomp(exp1);
                
#if 0
                if ( ((_inter = (PPTREE)exp2,1) && 
                        (NumberTree(_inter) == LIST) &&
                        1) ) {
                                PrintString(" ");
                                while ( ((elem=(exp2?exp2.Nextl():(PPTREE)0))) ) 
                                    decomp(exp2);
                                
                                
                             }
                
#endif
                
                
            }
            
            break ;
            
        case cplus::CONFIG : 
            (exp=SonTree(paramTree, 1));
            
        _Case390 : 
            ;
            {
                if ( tabDirective ) 
                    Mark();
                gotocol(0);
                PrintString("#");
                if ( tabDirective ) 
                    UnMark();
                
            }
            
            PrintString("pragma config ");
            decomp(exp);
            
            break ;
            
        case cplus::SIMPLIFY : 
            (exp=SonTree(paramTree, 1));
            
        _Case391 : 
            ;
            gotocol(0);
            PrintString("#pragma simplify ");
            decomp(exp);
            
            break ;
            
        case cplus::TAB_VALUE : 
            (exp=SonTree(paramTree, 1));
            
        _Case392 : 
            ;
            PrintString("tab ");
            DumpBrainyValue(exp);
            
            break ;
            
        case cplus::MODE_VALUE : 
            (exp=SonTree(paramTree, 1));
            
        _Case393 : 
            ;
            PrintString("mode ");
            DumpBrainyValue(exp);
            
            break ;
            
        case cplus::BRACE_ALIGN_VALUE : 
            (exp=SonTree(paramTree, 1));
            
        _Case394 : 
            ;
            PrintString("brace_align ");
            DumpBrainyValue(exp);
            
            break ;
            
        case cplus::SINGLE_SWITCH_INDENT_VALUE : 
            (exp=SonTree(paramTree, 1));
            
        _Case395 : 
            ;
            PrintString("single_switch_indent ");
            DumpBrainyValue(exp);
            
            break ;
            
        case cplus::MARGIN_VALUE : 
            (exp=SonTree(paramTree, 1));
            
        _Case396 : 
            ;
            PrintString("margin ");
            DumpBrainyValue(exp);
            
            break ;
            
        case cplus::ERROR : 
            (exp=SonTree(paramTree, 1));
            
        _Case397 : 
            ;
            {
                if ( tabDirective ) 
                    Mark();
                gotocol(0);
                PrintString("#");
                if ( tabDirective ) 
                    UnMark();
                
            }
            
            PrintString("error ");
            DumpBrainyValue(exp);
            
            break ;
            
        case cplus::ALINE : 
        _Case398 : 
            ;
            {
                DumpBrainyValue(paramTree);
                
                
            }
            
            break ;
            
        case cplus::NO_PRETTY : 
            (list=SonTree(paramTree, 1));
            
        _Case399 : 
            ;
            GotoCol(0);
            Mark();
            PrintString("#pragma nopretty");
            LNewLine(1);
            
            while ( ((_inter = (PPTREE)list,1) && 
                        (NumberTree(_inter) == LIST) &&
                        1) ) {
                                (son=(list?list.Nextl():(PPTREE)0));
                                
                                decomp(son);
                                
                                LNewLine(1);
                                
                                
                             }
            LNewLine(1);
            
            PrintString("#pragma pretty");
            if ( !LastInTopList(paramTree) ) 
                LNewLine(1);
            
            UnMark();
            
            break ;
            
        case cplus::NOT_MANAGED : 
            (list=SonTree(paramTree, 1));
            
        _Case400 : 
            ;
            GotoCol(0);
            Mark();
            PrintString("#pragma notmanaged");
            LNewLine(1);
            
            while ( ((_inter = (PPTREE)list,1) && 
                        (NumberTree(_inter) == LIST) &&
                        1) ) {
                                (son=(list?list.Nextl():(PPTREE)0));
                                
                                decomp(son);
                                
                                LNewLine(1);
                                
                                
                             }
            LNewLine(1);
            
            PrintString("#pragma managed");
            if ( !LastInTopList(paramTree) ) 
                LNewLine(1);
            
            UnMark();
            
            break ;
            
        case cplus::IFDEF_DIR : 
            (exp=SonTree(paramTree, 1));
            
            (stat1=SonTree(paramTree, 2));
            
            (stat2=SonTree(paramTree, 3));
            
        _Case401 : 
            ;
            goto _Case402 ;
            
        case cplus::IFNDEF_DIR : 
            (exp=SonTree(paramTree, 1));
            
            (stat1=SonTree(paramTree, 2));
            
            (stat2=SonTree(paramTree, 3));
            
        _Case402 : 
            ;
            goto _Case403 ;
            
        case cplus::IF_DIR : 
            (exp=SonTree(paramTree, 1));
            
            (stat1=SonTree(paramTree, 2));
            
            (stat2=SonTree(paramTree, 3));
            
        _Case403 : 
            ;
            {
                if ( tabDirective ) 
                    Mark();
                gotocol(0);
                PrintString("#");
                if ( tabDirective ) 
                    UnMark();
                
            }
            
            switch ( NumberTree(paramTree) ) {
                case cplus::IFDEF_DIR : 
                _Case425 : 
                    ;
                    PrintString("ifdef ");
                    break ;
                    
                case cplus::IFNDEF_DIR : 
                _Case426 : 
                    ;
                    PrintString("ifndef ");
                    break ;
                    
                case cplus::IF_DIR : 
                _Case427 : 
                    ;
                    PrintString("if ");
                    break ;
                    
            }
            
            decomp(exp);
            
            LNewLine(1);
            
            if ( tabDirective ) {
                                    Tab();
                                    
                                    Mark();
                                    
                                 }
            while ( ((_inter = (PPTREE)stat1,1) && 
                        (NumberTree(_inter) == LIST) &&
                        1) ) {
                                (son=(stat1?stat1.Nextl():(PPTREE)0));
                                
                                (postComment=son);
                                
                                decomp(son);
                                
                                if ( !Sequence(son, sontree(stat1, 1)) ) {
                                                                                control_stat1(son);
                                                                                LNewLine(1);
                                                                                
                                                                                
                                                                               } else 
                                {
                                    Space(1);
                                    
                                    
                                }
                                
                                
                             }
            if ( tabDirective ) {
                                    UnMark();
                                    
                                 }
            follow_if_dir(stat2, paramTree);
            break ;
            
        case cplus::CAST : 
            (type=SonTree(paramTree, 1));
            
            (exp=SonTree(paramTree, 2));
            
        _Case404 : 
            ;
            PrintString("(");
            decomp(type);
            
            PrintString(")");
            decomp(exp);
            
            break ;
            
        case cplus::ATTRIBUTS : 
            (exp=SonTree(paramTree, 1));
            
            (list=SonTree(paramTree, 2));
            
            (list1=SonTree(paramTree, 3));
            
        _Case405 : 
            ;
            while ( ((_inter = (PPTREE)list,1) && 
                        (NumberTree(_inter) == LIST) &&
                        1) ) {
                                (son=(list?list.Nextl():(PPTREE)0));
                                
                                TraitAttribut(son);
                                
                             }
            decomp(exp);
            
            while ( ((_inter = (PPTREE)list1,1) && 
                        (NumberTree(_inter) == LIST) &&
                        1) ) {
                                (son=(list1?list1.Nextl():(PPTREE)0));
                                
                                if ( ((_inter = (PPTREE)son,1) && 
                                        (NumberTree(_inter) == cplus::NEWLINE) &&
                                        1) ) {
                                                comm(paramTree, POST);
                                                (oldPostComment=paramTree);
                                                
                                                
                                             }
                                TraitAttribut(son);
                                
                             }
            break ;
            
        default : 
        _Case406 : 
            ;
            break ;
            
    }
    
    
    PTREE   att ;
    
    switch ( NumberTree(paramTree) ) {
        case cplus::EXTERNAL : 
            (exp1=SonTree(paramTree, 1));
            
            (stat1=SonTree(paramTree, 2));
            
        _Case428 : 
            ;
            PrintString("extern ");
            decomp(exp1);
            
            Space(1);
            
            decomp(stat1);
            
            break ;
            
        case cplus::ASM : 
            (exp1=SonTree(paramTree, 1));
            
        _Case429 : 
            ;
            PrintString("asm(");
            decomp(exp1);
            
            PrintString(")");
            break ;
            
        case cplus::TYP_AFF_CALL : 
            (declarator=SonTree(paramTree, 1));
            
            (exp=SonTree(paramTree, 2));
            
        _Case430 : 
            ;
            statementf = 0 ;
            decomp(declarator);
            
            PrintString("(");
            decomp(exp);
            
            PrintString(")");
            break ;
            
        case cplus::TYP_AFF_BRA : 
            (declarator=SonTree(paramTree, 1));
            
            (exp=SonTree(paramTree, 2));
            
        _Case431 : 
            ;
            statementf = 0 ;
            decomp(declarator);
            
            PrintString(" {");
            decomp(exp);
            
            PrintString("}");
            break ;
            
        case cplus::DESTRUCT : 
            (ident=SonTree(paramTree, 1));
            
        _Case432 : 
            ;
            SepBefore();
            
            PrintString("~");
            decomp(ident);
            
            break ;
            
        case cplus::QUALIFIED : 
            (ident=SonTree(paramTree, 1));
            
            (exp=SonTree(paramTree, 2));
            
        _Case433 : 
            ;
            if ( !((!ident)) ) {
                                    decomp(ident);
                                    
                                    
                                 } else 
            {
                SepBefore();
                
                
            }
            
            PrintString("::");
            decomp(exp);
            
            break ;
            
        case cplus::PROTECT : 
            (name=SonTree(paramTree, 1));
            
            (exp=SonTree(paramTree, 2));
            
        _Case434 : 
            ;
            DumpBrainyValue(name);
            
            decomp(exp);
            
            break ;
            
        case cplus::PROTECT_MEMB : 
            (name=SonTree(paramTree, 1));
            
            (list=SonTree(paramTree, 2));
            
        _Case435 : 
            ;
            {
                LNewLine(2);
                
                if ( FlatFunct() ) {
                                        Tab();
                                        
                                        DumpBrainyValue(name);
                                        
                                        SepBefore();
                                        
                                        PrintString(":");
                                        LNewLine(2);
                                        
                                        gotocol(0);
                                        Mark();
                                        DecompilerListeExternSimp(list);
                                        UnMark();
                                        
                                        
                                    } else 
                {
                    Mark();
                    DumpBrainyValue(name);
                    
                    SepBefore();
                    
                    PrintString(":");
                    LNewLine(2);
                    
                    DecompilerListeExtern(list);
                    UnMark();
                    
                    
                }
                
                break ;
                
                
            }
            
            goto _Case436 ;
            
        case cplus::COMPOUND_EXT : 
            (list=SonTree(paramTree, 1));
            
        _Case436 : 
            ;
            if ( ansiMode ) 
                LNewLine(1);
            
            PrintString("{");
            LNewLine(2);
            
            DecompilerListeExtern(list);
            LNewLine(1);
            
            PrintString("}");
            (oldPostComment=paramTree);
            
            comm(paramTree, POST);
            LNewLine(1);
            
            break ;
            
        case cplus::BASE_LIST : 
            (list=SonTree(paramTree, 1));
            
        _Case437 : 
            ;
            if ( !((!list)) ) {
                                    Space(1);
                                    
                                    PrintString(":");
                                    Space(1);
                                    
                                    while ( ((_inter = (PPTREE)list,1) && 
                                                (NumberTree(_inter) == LIST) &&
                                                1) ) {
                                                        (son=(list?list.Nextl():(PPTREE)0));
                                                        
                                                        decomp(son);
                                                        
                                                        if ( !((!list)) ) {
                                                                                PrintString(",");
                                                                                SepAfter();
                                                                                
                                                                                
                                                                            }
                                                        
                                                     }
                                    
                                }
            break ;
            
        case cplus::CLASS_DECL : 
            (stat1=SonTree(paramTree, 1));
            
        _Case438 : 
            ;
            if ( ansiMode ) 
                LNewLine(1);
            
            SepBefore();
            
            PrintString("{");
            LNewLine(1);
            
            if ( EString("struct") != Value(FatherTree(paramTree)) && EString("enum") != Value(FatherTree(paramTree)) && FlatFunct() ) {
                                                                                                                                                  gotocol(0);
                                                                                                                                                  Mark();
                                                                                                                                                  DecompilerListeExternSimp(stat1);
                                                                                                                                                  UnMark();
                                                                                                                                                  
                                                                                                                                                  
                                                                                                                                                  } else 
                DecompilerListeExtern(stat1);
            
            LNewLine(1);
            
            PrintString("}");
            break ;
            
        case cplus::CLASS : 
            (name=SonTree(paramTree, 1));
            
            (ident=SonTree(paramTree, 2));
            
            (init=SonTree(paramTree, 3));
            
            (stat1=SonTree(paramTree, 4));
            
        _Case439 : 
            ;
            inClass = 1 ;
            DumpBrainyValue(name);
            
            if ( !((!ident)) ) 
                decomp(ident);
            
            decomp(init);
            
            if ( stat1 ) {
                            decomp(stat1);
                            
                            
                          } else 
            {
                SepBefore();
                
                
            }
            
            break ;
            
        case cplus::MEMBER_DECLARATOR : 
            (name=SonTree(paramTree, 1));
            
            (exp=SonTree(paramTree, 2));
            
        _Case440 : 
            ;
            decomp(name);
            
            PrintString("*");
            SepAfter();
            
            decomp(exp);
            
            break ;
            
        case cplus::TYP_REF : 
            (declarator=SonTree(paramTree, 1));
            
        _Case441 : 
            ;
            SepBefore();
            
            PrintString("&");
            decomp(declarator);
            
            break ;
            
        case cplus::DOT_MEMB : 
            (exp1=SonTree(paramTree, 1));
            
            (exp2=SonTree(paramTree, 2));
            
        _Case442 : 
            ;
            decomp(exp1);
            
            if ( spaceArrow ) {
                                Space(1);
                                
                                
                               }
            PrintString(".*");
            if ( spaceArrow ) {
                                Space(1);
                                
                                
                               }
            decomp(exp2);
            
            break ;
            
        case cplus::ARROW_MEMB : 
            (exp1=SonTree(paramTree, 1));
            
            (exp2=SonTree(paramTree, 2));
            
        _Case443 : 
            ;
            decomp(exp1);
            
            if ( spaceArrow ) {
                                Space(1);
                                
                                
                               }
            PrintString("->*");
            if ( spaceArrow ) {
                                Space(1);
                                
                                
                               }
            decomp(exp2);
            
            break ;
            
        case cplus::NEW : 
            (exp1=SonTree(paramTree, 1));
            
            (exp2=SonTree(paramTree, 2));
            
            (init=SonTree(paramTree, 3));
            
        _Case444 : 
            ;
            if ( init ) 
                ((_inter = (PPTREE)init,1) && 
                    ((init=SonTree(_inter,1)),1) &&
                    1);
                ;
            PrintString("new");
            if ( !((!exp1)) ) {
                                    SepBefore();
                                    
                                    PrintString("(");
                                    decomp(exp1);
                                    
                                    PrintString(")");
                                    SepAfter();
                                    
                                    
                                }
            if ( !(((_inter = (PPTREE)exp2,1) && 
                        (NumberTree(_inter) == cplus::NEW_DECLARATOR) &&
                        1)) ) {
                                PrintString("(");
                                SepAfter();
                                
                                decomp(exp2);
                                
                                SepBefore();
                                
                                PrintString(")");
                                
                              } else 
                decomp(exp2);
                
            
            if ( !((!init)) ) {
                                    PrintString("(");
                                    while ( ((_inter = (PPTREE)init,1) && 
                                                (NumberTree(_inter) == LIST) &&
                                                1) ) {
                                                        (son=(init?init.Nextl():(PPTREE)0));
                                                        
                                                        decomp(son);
                                                        
                                                        if ( !((!init)) ) {
                                                                                PrintString(",");
                                                                                Space(1);
                                                                                
                                                                                
                                                                            }
                                                        
                                                     }
                                    PrintString(")");
                                    
                                }
            break ;
            
        case cplus::DELETE : 
            (exp1=SonTree(paramTree, 1));
            
            (exp2=SonTree(paramTree, 2));
            
        _Case445 : 
            ;
            PrintString("delete");
            if ( !((!exp1)) ) {
                                    Space(1);
                                    
                                    PrintString("[");
                                    if ( ((_inter = (PPTREE)exp1,1) && 
                                            (NumberTree(_inter) == cplus::TYP_ARRAY) &&
                                            ((exp1=SonTree(_inter,2)),1) &&
                                            1) && !((!exp1)) ) 
                                        decomp(exp1);
                                    
                                    PrintString("]");
                                    Space(1);
                                    
                                    
                                }
            decomp(exp2);
            
            break ;
            
        case cplus::OPERATOR : 
            (exp=SonTree(paramTree, 1));
            
        _Case446 : 
            ;
            PrintString("operator");
            if ( !(((_inter = (PPTREE)exp,1) && 
                        (NumberTree(_inter) == cplus::FOR_DECLARATION) &&
                        1)) ) {
                                DumpBrainyValue(exp);
                                
                                Space(1);
                                
                                
                              } else 
            {
                decomp(exp);
                
                
            }
            
            break ;
            
        case cplus::CTOR_INIT : 
            (ident=SonTree(paramTree, 1));
            
            (exp=SonTree(paramTree, 2));
            
            (type=SonTree(paramTree, 3));
            
        _Case447 : 
            ;
            decomp(ident);
            
            if ( !((!type)) ) {
                                    PrintString("{");
                                    decomp(exp);
                                    
                                    PrintString("}");
                                    
                                } else 
            {
                PrintString("(");
                decomp(exp);
                
                PrintString(")");
                
            }
            
            break ;
            
        case cplus::MACRO : 
            (ident=SonTree(paramTree, 1));
            
            (list=SonTree(paramTree, 2));
            
        _Case448 : 
            ;
            decomp(ident);
            
            PrintString("(");
            if ( !((!list)) ) 
                decomp(list);
            
            PrintString(")");
            (oldPostComment=paramTree);
            
            comm(paramTree, POST);
            LNewLine(1);
            
            break ;
            
        case cplus::MESSAGE_MAP : 
            (list=SonTree(paramTree, 1));
            
        _Case449 : 
            ;
            (son=(list?list.Nextl():(PPTREE)0));
            
            decomp(son);
            
            Tab();
            
            Mark();
            while ( ((_inter = (PPTREE)list,1) && 
                        (NumberTree(_inter) == LIST) &&
                        1) ) {
                                (son=(list?list.Nextl():(PPTREE)0));
                                
                                decomp(son);
                                
                                
                             }
            UnMark();
            
            PrintString("END_MESSAGE_MAP()");
            (oldPostComment=paramTree);
            
            comm(paramTree, POST);
            LNewLine(2);
            
            break ;
            
        case cplus::CATCH : 
            (exp=SonTree(paramTree, 1));
            
            (stat=SonTree(paramTree, 2));
            
        _Case450 : 
            ;
            decomp(exp);
            
            LNewLine(1);
            
            decomp(stat);
            
            (oldPostComment=paramTree);
            
            comm(paramTree, POST);
            LNewLine(1);
            
            break ;
            
        case cplus::EXCEPTION : 
            (stat=SonTree(paramTree, 1));
            
            (list=SonTree(paramTree, 2));
            
        _Case451 : 
            ;
            {
                if ( !IsComm(paramTree, PRE) ) 
                    LNewLine(2);
                
                PrintString("TRY ");
                LNewLine(1);
                
                decomp(stat);
                
                LNewLine(1);
                
                decomp(list);
                
                if ( !strcmp(BrainyValue(list), "CATCH_ALL") ) 
                    PrintString("END_CATCH_ALL");
                else 
                    PrintString("END_CATCH");
                
                (oldPostComment=paramTree);
                
                comm(paramTree, POST);
                if ( LastInList(paramTree) ) 
                    LNewLine(1);
                
                else 
                    LNewLine(2);
                    
                
                
            }
            
            break ;
            
        case cplus::INLINE_NAMESPACE : 
            (val=SonTree(paramTree, 1));
            
        _Case452 : 
            ;
            {
                PrintString("inline");
                Space(1);
                
                decomp(val);
                
                
            }
            
            break ;
            
        case cplus::NAMESPACE : 
            (ident=SonTree(paramTree, 1));
            
            (exp=SonTree(paramTree, 2));
            
            (att=SonTree(paramTree, 3));
            
        _Case453 : 
            ;
            {
                PrintString("namespace");
                decomp(ident);
                
                Space(1);
                
                if ( !((!att)) ) {
                                    decomp(att);
                                    
                                    Space(1);
                                    
                                    
                                   }
                decomp(exp);
                
                LNewLine(2);
                
                
            }
            
            break ;
            
        case cplus::NAMESPACE_ALIAS : 
            (ident=SonTree(paramTree, 1));
            
            (exp=SonTree(paramTree, 2));
            
        _Case454 : 
            ;
            {
                PrintString("namespace");
                decomp(ident);
                
                Space(1);
                
                PrintString("=");
                Space(1);
                
                decomp(exp);
                
                Space(1);
                
                PrintString(";");
                
            }
            
            break ;
            
        case cplus::USING : 
            (ident=SonTree(paramTree, 1));
            
        _Case455 : 
            ;
            {
                PrintString("using");
                decomp(ident);
                
                Space(1);
                
                PrintString(";");
                
            }
            
            break ;
            
        case cplus::USING_NAMESPACE : 
            (ident=SonTree(paramTree, 1));
            
            (att=SonTree(paramTree, 2));
            
        _Case456 : 
            ;
            {
                PrintString("using namespace");
                if ( !((!att)) ) {
                                    decomp(att);
                                    
                                    Space(1);
                                    
                                    
                                   }
                decomp(ident);
                
                Space(1);
                
                PrintString(";");
                
            }
            
            break ;
            
        default : 
        _Case457 : 
            ;
            break ;
            
    }
    
    statementf = oldStatement ;
    inClass = oldInClass ;
    return oldPostComment ;
    
    
}


int DecompCplus::middleInList ( PTREE exp )
{
    register PPTREE _inter ;

    int _nextVal ;
    
    
    PTREE   exp1 ;
    
    (exp1=SFatherTree(FatherTree(exp),LIST));
    
    if ( ((_inter = (PPTREE)exp1,1) && 
            (NumberTree(_inter) == LIST) &&
            1) ) {
                    (exp1=FatherTree(exp1));
                    
                    if ( ((_inter = (PPTREE)exp1,1) && 
                            (NumberTree(_inter) == LIST) &&
                            1) ) {
                                    return 1 ;
                                    
                                    
                                 }
                    
                 }
    return 0 ;
    
    
}


int DecompCplus::LastInList ( PTREE exp )
{
    register PPTREE _inter ;

    int _nextVal ;
    
    
    PTREE   exp1 ;
    
    (exp1=SFatherTree(FatherTree(exp),LIST));
    
    if ( ((_inter = (PPTREE)exp1,1) && 
            (NumberTree(_inter) == LIST) &&
            (!SonTree(_inter,2)) &&
            1) ) 
        return 1 ;
    
    return 0 ;
    
    
}


int DecompCplus::LastInTopList ( PTREE exp )
{
    register PPTREE _inter ;

    int _nextVal ;
    
    
    PTREE   exp1 ;
    
    (exp1=SFatherTree(FatherTree(exp),LIST));
    
    if ( ((_inter = (PPTREE)exp1,1) && 
            (NumberTree(_inter) == LIST) &&
            (!SonTree(_inter,2)) &&
            1) ) {
                    while ( ((_inter = (PPTREE)exp1,1) && 
                                (NumberTree(_inter) == LIST) &&
                                1) ) 
                        (exp1=FatherTree(exp1));
                    
                    if ( ((_inter = (PPTREE)exp1,1) && 
                            (NumberTree(_inter) == cplus::LANGUAGE) &&
                            1) ) 
                        return 1 ;
                    
                    
                 }
    return 0 ;
    
    
}


void DecompCplus::DecompilerListeExternSimp ( PTREE list )
{
    register PPTREE _inter ;

    int _nextVal ;
    
    
    PTREE   son, father ;
    
    int typeBlock = -1, oldTypeBlock = -1 ;
    
    while ( ((_inter = (PPTREE)list,1) && 
                (NumberTree(_inter) == LIST) &&
                1) ) {
                        (father=FatherTree(list));
                        
                        (son=(list?list.Nextl():(PPTREE)0));
                        
                        typeBlock = TypeOfBlock(son);
                        if ( typeBlock != oldTypeBlock && oldTypeBlock != -1 ) {
                                                                                        LNewLine(2);
                                                                                        
                                                                                        
                                                                                    } else 
                        if ( !(((_inter = (PPTREE)father,1) && 
                                    (NumberTree(_inter) == cplus::LANGUAGE) &&
                                    1)) ) {
                                            LNewLine(1);
                                            
                                            
                                          }
                        oldTypeBlock = typeBlock ;
                        decomp(son);
                        
                        
                     }
    
}


void DecompCplus::DecompilerListeExtern ( PTREE list )
{
    int _nextVal ;
    
    Tab();
    
    Mark();
    DecompilerListeExternSimp(list);
    UnMark();
    
    
}


void DecompCplus::ChopTree ( PTREE tree, int funcAlone )
{
    int _nextVal ;
    
    copy();
    if ( simplifyExpression ) 
        clean_tree(tree);
    Treat(tree);
    Decomp(tree, funcAlone);
    AddRef(tree);
    
}


void DecompCplus::copy ()
{
    int _nextVal ;
    
    
    const char  *str ;
    
    if ( copyPrinted ) 
        return ;
    
    else 
        copyPrinted = true ;
    
    str = "\n\r C++ prettyPrinter version 7.0.1, CopyRight(C) 1989-2023 Eric Lavillonniere \n\r";
    _write(2, str, strlen(str));
    str = " C++ prettyPrinter comes with ABSOLUTELY NO WARRANTY.\n\r";
    _write(2, str, strlen(str));
    str = " This is free software, and you are welcome to redistribute it \n\r";
    _write(2, str, strlen(str));
    str = " under certain conditions.\n\r";
    _write(2, str, strlen(str));
    str = " For details see file COPYING.LESSER in C++ prettyPrinter directory.\n\r\n\r";
    _write(2, str, strlen(str));
    
}

static void dchop_Anchor () { int i = 1;} 
/*Well done my boy */ 
