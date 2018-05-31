/*************************************************************************/
/*                                                                       */
/*        dchop.ch   - Built by Eric Lavillonniere on Tandon 386 - 93   */
/*                                                                       */
/*************************************************************************/
/* This file is part of c++  prettyprinter */
/* Copyright(C) 1989 Eric Lavillonniere */
/*
   This program is free software; you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation; either version 1, or (at your option)
   any later version.
   
   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.
   
   You should have received a copy of the GNU General Public License
   along with this program; see the file COPYING. If not, write to 
   the Free Software
   Foundation, Inc., 675 Mass Ave, Cambridge, MA 02139, USA.
   
   */
language cplus;

#ifdef FOR_METACHOP
    PTREE   postComment ;
#endif

#include "deccplus.h"

char    *DecToIdent (PTREE) ;

int DecompCplus::TypeOfBlock ( PTREE tree )
{
    PTREE   son ;
    int     typeBlock ;
    
    switch ( tree ) {
        case <INCLUDE_DIR> : 
            typeBlock = 1 ;
            break ;
        case <DEFINE_DIR> : 
            typeBlock = 2 ;
            break ;
        case <IF_DIR> : 
        case <IFDEF_DIR> : 
        case <IFNDEF_DIR> : 
        case <NOT_MANAGED> : 
        case <NO_PRETTY> : 
            typeBlock = 3 ;
            break ;
        case <FUNC> : 
            typeBlock = 4 ;
            break ;
        case <DECLARATION> : 
            typeBlock = 5 ;
            break ;
        case <TYPEDEF> : 
            typeBlock = 6 ;
            break ;
        case <TEMPLATE_DECL,<>,son> : 
        case <ATTRIBUTS,son> : return TypeOfBlock(son);
        case <MESSAGE_MAP> : 
        case <MACRO> : 
            typeBlock = 8 ;
            break ;
        case <COMPOUND_EXT> : 
            typeBlock = 9 ;
            break ;
        default : 
            typeBlock = 7 ;
            break ;
    }
    return typeBlock ;
}

/******************************************************************
       decomp : decompilation d'un arbre
   *******************************************************************/
void DecompCplus::DecompCommCtrl ( const PTREE &paramTree, int funcAlone, bool noPostComment )
{
    PTREE   exp, stat, name ;
    int     oldXFather = xFather, oldYFather = yFather ;
    int     oldMaxX = maxX ;
    int     begCurrCol = currCol, begCurrLine = currLine ;
    int     theMark = GetMark();
    PTREE   oldPostComment = postComment ;
    
    if ( paramTree == () ) 
        return ;
    
    /* les variables dynamiques xFather et yFather designe les
       coordonnees du pere */
    if ( isVirtMod ) {
        xFather =  currCol, yFather =  currLine ;
        maxX =  currCol ;
    }
    exp =  paramTree ;
    exp == <TEMPLATE_DECL,<>,exp>;
    switch ( exp ) {
        case <ATTRIBUTS> : 
        case <FUNC> : 
        case <DECLARATION> : 
        case <MESSAGE_MAP> : 
        case <NAMESPACE> : 
        case <NAMESPACE_ALIAS> : 
        case <USING> : 
        case <USING_NAMESPACE> : 
            if ( (exp ^ ) == <TEMPLATE_DECL> ) 
                exp =  exp ^ ;
            if ( middleInList(exp) ) {
                
                // put a new line before every function            
                // put it before the comment            
                exp =  paramTree ;
                
                // if we are on an attribute go down   
                exp == <TEMPLATE_DECL,<>,exp>;
                exp == <ATTRIBUTS,exp>;
                
                // if necessary put newlines   
                if ( exp == <FUNC,<>,<>,<>,<>,<>,<>,<>,<,stat>> ) 
                    if ( !inClass || stat != () ) {
                        if ( (exp ^ ) != <TEMPLATE_DECL> ) 
                            <NL,2>
                        else 
                            <NL,1>
                    } else 
                        <NL,1>
                if ( exp == <MESSAGE_MAP> || exp == <NAMESPACE> || exp == <NAMESPACE_ALIAS> || exp == <USING> || exp == <USING_NAMESPACE> ) 
                    <NL,2>
                if ( exp == <DECLARATION,<>,<CLASS,name,<>,<>,stat>> ) 
                    if ( !strcmp(value(name), "class") ) 
                        if ( stat != () ) {
                            <NL,2>
                        }
            }
            break ;
        default : break ;
    }
    
    // if funcAlone prevent the display of empty line
    if ( funcAlone ) {
        int oldIsVirtMod = isVirtMod ;
        isVirtMod =  1 ;
        <NL,3>
        isVirtMod =  oldIsVirtMod ;
    }
    {
        char    *commPre = 0 ;
        
        // protect a comment in the middle of a line with //
        // it will produce a newline. We want to put the commented part
        // under it
        if ( !Beginning() && (commPre = IsComm(paramTree, PRE)) ) {
            Mark();
            
            // since we have put a mark comm will think that we are at the
            // beginning of the line and will put a newline,
            // prevent this
            currCol++ ;
            comm(paramTree, PRE);
        } else 
            comm(paramTree, PRE);
        postComment =  oldPostComment = this->IntDecomp(paramTree, funcAlone);
        if ( postComment != paramTree && !noPostComment ) 
            comm(paramTree, POST);
        if ( commPre ) {
            UnMark(); // <NL>
        }
    }
    if ( isVirtMod && paramTree != <ATTRIBUTS> ) {
        xFather =  oldXFather, yFather =  oldYFather ;
        
        // perhaps we didn't got a newline in this node   
        // update the maxX   
        if ( currCol > maxX ) 
            maxX =  currCol ;
        
        // put coord on node   
        // second coordinate indicates if box is higher than one line
        PutCoord(paramTree, begCurrCol - xFather, currLine - begCurrLine > 0 ? 2 : 0, maxX - begCurrCol, theMark);
        
        // father will have max of current length and of this son   
        if ( maxX < oldMaxX ) 
            maxX =  oldMaxX ;
    }
}

PTREE DecompCplus::IntDecomp ( const PTREE &paramTree, int funcAlone )
{
    PTREE   list, list1, son, sc, type, declarator, param, param_decl, stat, decl, list_decl, ctor ;
    PTREE   val, exp_list, init, exp1, exp2, exp3, exp, ident, stat1, stat2, name1, name2, range ;
    PTREE   exceptionList ;
    PTREE   ident1, name ;
    PTREE   oldPostComment = postComment ;
    int     oldStatement = statementf ;
    int     oldInClass = inClass ;
    int     oneInstruct ; // one instruction in a case   
    
    // the decompilation itself   
    switch ( paramTree ) {
        case <LIST> : 
            list = paramTree ;
            while ( list != () ) {
                son =  nextl(list);
                @son
            }
            break ;
        case <LANGUAGE,name> : 
            {
                inClass =  0 ;
                list    =  name ;
                <SEPO>
                DecompilerListeExternSimp(list);
            }
            break ;
        case <TYPEDEF,type,declarator> : 
            if ( type == <CLASS,<>,<>,<>,list_decl> && list_decl != () ) 
                // EL 15/05/01 do no put line if comment
                if ( middleInList(paramTree) && !IsComm(paramTree, PRE) ) 
                    <NL,2>
            "typedef" @type
            if ( type == <CLASS> ) {
                while ( declarator != () ) {
                    son =  nextl(declarator);
                        <T> @son
                    if ( declarator != () ) {
                        "," <S>
                    }
                }
            } else {
                {{
                    while ( declarator != () ) {
                        son =  nextl(declarator);
                            <T> @son
                        if ( declarator != () ) {
                            "," <S>
                        }
                    }
                }}
            }
            <SEPB> ";";
            oldPostComment = paramTree ;
            comm(paramTree, POST);
            if ( !LastInTopList(paramTree) ) {
                if ( type == <CLASS,<>,<>,<>,list_decl> && list_decl != () ) 
                    <NL,2>
                else 
                    <NL>
            }
            break ;
        case <FUNC,sc,type,declarator,param,range,param_decl,ctor,stat,exceptionList> : 
            {
                bool    withNewLine = false ;
                bool    parameterUnder = IsVerticalDecl(param);
                
                // do the job
                exp2 =  ctor ;
                if ( ctor ) 
                    ctor == <,ctor>;
                if ( exceptionList ) 
                    exceptionList == <,exceptionList>;
                stat == <,stat1>;
                {
                    
                    // on se protege dans le cas d'un extern sans compound   
                    exp1 =  paramTree ^ ;
                    if ( exp1 == <ATTRIBUTS> ) 
                        exp1 =  exp1 ^ ;
                    if ( exp1 != <EXTERNAL> ) {
                        
                        // on ne fait rien sur le premier d'une liste     
                        // ( si currLine > 0 il y a commentaire devant   
                        //   donc ok )   
                        /* if (middleInList(exp1) || currLine > 0 ) { */
                        if ( currLine > 0 ) {
                            if ( !inClass || stat1 != () ) {
                                if ( (exp1 ^ ) == <TEMPLATE_DECL> ) 
                                    <NL,2>
                                else 
                                    <NL>
                            } else 
                                <NL>
                        }
                        if ( indentFunctionType ) 
                            indentFuncFlag =  1 ;
                    }
                }
                {{
                    if ( sc != () ) {
                        value(sc)   <T>
                    }
                    @type @declarator
                    indentFuncFlag =  0 ;
                    if ( parameterUnder ) {
                        <NL>
                    } else {
                        <SEPB>
                    }
                    "(";
                    if ( param != () && parameterUnder ) {
                        withNewLine =  true ;
                        <NL>
                        if ( parameterUnderTab ) 
                                <T> 
                        Mark();
                    }
                    
                    // on autorise les () et ( a )       
                    if ( param != () && !parameterUnder ) 
                        <S> 
                    val =  param ;
                    comm(val, PRE);
                    while ( param != () ) {
                        son =  nextl(param);
                        if ( parameterUnder ) {
                            PTREE   elem = son ;
                            if ( elem == <ATTRIBUTS,elem> ) 
                                comm(son, PRE);
                            DecompCommCtrl(elem, false, true);
                        } else {
                            @son
                        }
                        if ( param != () ) {
                            ",";
                        }
                        <S>
                        if ( parameterUnder ) {
                            
                            // if has post comment treated 
                            if ( son == <ATTRIBUTS,<>,<>,list1> ) {
                                PTREE   attr ;
                                bool    commDisp = false ;
                                while ( list1 != () ) {
                                    attr =  nextl(list1);
                                    if ( attr == <NEWLINE> ) {
                                        commDisp =  true ;
                                        comm(son, POST);
                                    }
                                    TraitAttribut(attr);
                                }
                                if ( !commDisp ) 
                                    comm(son, POST);
                            } else {
                                comm(son, POST);
                                <NL>
                            }
                        }
                    }
                    if ( withNewLine ) {
                        UnMark();
                        <NL>
                    }
                    ")" <SEPA>
                    comm(val, POST);
                    if ( range ) 
                        @range 
                    comm(exp2, PRE);
                    if ( exceptionList != () ) {
                        <NL,1>
                            <T> {{
                                    "throw" <S> "(";
                                    DecompList(exceptionList, ",", ")", 0);
                                }}
                    }
                    if ( ctor != () ) {
                        <NL,1>
                            <T> {{
                                    ":" <S>
                                    while ( ctor != () ) {
                                        son =  nextl(ctor);
                                        @son
                                        if ( ctor != () ) {
                                            "," <S> <SEPA>
                                        }
                                    }
                                }}
                        comm(exp2, POST);
                        <NL,1>
                    }
                    if ( param_decl != () ) 
                        <NL,1>
                    @param_decl
                    statementf =  0 ;
                    if ( withNewLine ) {
                        <NL>
                    }
                    
                    // si on est pas dans le cas {} on met un newline       
                    stat == <,stat1>;
                    if ( stat1 != () || param_decl != () ) 
                        <NL,1>
                    @stat
                    
                    // sauf dans class passe une ligne blanche   
                    if ( funcAlone ) 
                        <NL>
                    else if ( !LastInList(paramTree) ) {
                        if ( !inClass || stat != () ) {
                            if ( !LastInList(paramTree) ) {
                                <NL,2>
                            }
                        } else {
                            if ( !LastInTopList(paramTree) ) {
                                <NL,1>
                            }
                        }
                    }
                }}
            }
            break ;
        case <TYP_AFF,declarator,exp> : 
            statementf = 0 ;
            @declarator
            if ( exp != () ) {
                <S> "=" <S> @exp
            }
            break ;
        case <CLASS_PARAM,son> : 
            "class" @son
            break ;
        case <TEMPLATE_DECL,exp1,exp2> : 
            "template" <S> "<";
            DecompList(exp1, ",", (char *)0, 0);
            ">" <S> <NL>
                <T> {{
                        @exp2
                    }}
            break ;
        case <PARAM_TYPE,exp1,exp2> : 
            @exp1 "<";
            while ( exp2 ) {
                son =  nextl(exp2);
                @son
                if ( exp2 ) {
                    "," <S>
                }
            }
            ">" <S>
            break ;
        case <FOR_DECLARATION,sc,type,list_decl> : 
        case <DECLARATION,sc,type,list_decl> : 
            {
                int hasPutMark = 0 ; // indicates whether we have            
                
                // put a mark for unparsing          
                if ( type == <CLASS,<>,<>,<>,exp> && exp != () ) 
                    if ( currLine > 0 ) {
                        <NL,2>
                    }
                if ( sc != () ) {
                    value(sc)
                }
                if ( type != () ) {
                    @type
                    
                    // s'il n'y a pas de list_decl     
                    // il ne faut pas laisser sinon creation    
                    // d'un blanc avec le <SEPB> qui precede le ;    
                    if ( list_decl != () ) {
                        <SEPA>
                    }
                    if ( paramTree != <FOR_DECLARATION> && type != <CLASS> && type != <ENUM> ) 
                            <T> 
                }
                while ( list_decl != () ) {
                    
                    // put a mark before first declaration            
                    decl =  nextl(list_decl);
                    @decl
                    if ( list_decl != () ) {
                        "," <S>
                    }
                }
                if ( paramTree != <FOR_DECLARATION> && paramTree != <TEMPLATE_DECL> ) {
                    <SEPB> ";";
                }
                
                // decomp postcomment before newLine            
                comm(paramTree, POST);
                oldPostComment =  paramTree ;
                
                // if we have have an attribute put also NL            
                // in traitStruct            
                exp            =  paramTree ^ ;
                if ( paramTree != <FOR_DECLARATION> ) 
                    if ( (paramTree ^ ) != <ATTRIBUTS> ) {
                        if ( !LastInTopList(paramTree) ) {
                            <NL>
                        }
                    }
            }
            break ;
        case <ENUM,ident,list_decl> : 
            {
                IsVerticalDecl(list_decl);
                "enum";
                if ( ident != () ) {
                    value(ident) <S>
                }
                bool    alignVert = false ;
                if ( enumVert ) 
                    alignVert =  true ;
                else {
                    list =  list_decl ;
                    while ( list != () ) {
                        son =  list [1];
                        if ( IsComm(son, POST) ) {
                            alignVert =  true ;
                            break ;
                        }
                        nextl(list);
                    }
                }
                if ( list_decl != () ) {
                    <SEPB>
                    if ( ansiMode && alignVert ) 
                        <NL>
                    "{";
                    if ( alignVert ) {
                        <NL>
                            <T>
                        Mark();
                    } else 
                        <SEPA> 
                    while ( list_decl != () ) {
                        son =  nextl(list_decl);
                        
                        // decomp without post comment
                        if ( alignVert ) {
                            PTREE   elem = son ;
                            if ( elem == <ATTRIBUTS,elem> ) 
                                comm(son, PRE);
                            DecompCommCtrl(elem, false, true);
                        } else {
                            @son
                        }
                        if ( list_decl != () ) {
                            "," <S>
                        }
                        if ( alignVert ) {
                            
                            // if has post comment treated 
                            if ( son == <ATTRIBUTS,<>,<>,list1> ) {
                                PTREE   attr ;
                                bool    commDisp = false ;
                                while ( list1 != () ) {
                                    attr =  nextl(list1);
                                    if ( attr == <NEWLINE> ) {
                                        commDisp =  true ;
                                        comm(son, POST);
                                    }
                                    TraitAttribut(attr);
                                }
                                if ( !commDisp ) 
                                    comm(son, POST);
                            } else {
                                comm(son, POST);
                                <NL>
                            }
                        }
                    }
                    
                    /*  }} */
                    if ( alignVert ) {
                        UnMark();
                        <NL>
                    } else 
                        <SEPB> 
                    "}";
                }
            }
            break ;
        case <TDOUBLE> : 
            "double";
            break ;
        case <TSHORT> : 
            "short";
            break ;
        case <TINT> : 
            "int";
            break ;
        case <TCHAR> : 
            "char";
            break ;
        case <TFLOAT> : 
            "float";
            break ;
        case <VOID> : 
            "void";
            break ;
        case <TLONG,type> : 
            "long" @type
            break ;
        case <TSIGNED,type> : 
            "signed" @type
            break ;
        case <TUNSIGNED,type> : 
            "unsigned" @type
            break ;
        case <RANGE_MODIFIER,val,declarator> : 
            value(val)
            if ( declarator ) 
                @declarator 
            break ;
        case <TYP_ADDR,declarator> : 
            <SEPB> "*" @declarator
            break ;
        case <TYP,declarator> : 
            "(" @declarator ")";
            break ;
        case <META,ident> : "$";
        case <IDENT,ident> : 
            
            // si on affiche une fontion avec retour chariot apres le   
            // type il faut le faire ici   
            if ( indentFuncFlag ) {
                <NL>
                indentFuncFlag =  0 ;
            }
            value(ident)
            break ;
        case <TYP_ARRAY,declarator,exp_list> : 
            @declarator <SEPB> "[";
            if ( exp_list != () ) 
                @exp_list 
            "]";
            break ;
        case <TYP_LIST,declarator,exp_list,range> : 
            @declarator <SEPB> "(";
            list = exp_list ;
            if ( 1 /* typ_list_ok */ ) 
                while ( exp_list != () ) {
                    son =  nextl(exp_list);
                    @son
                    if ( exp_list != () ) {
                        "," <S>
                    }
                }
            ")" <SEPA> @range
            break ;
        case <INITIALIZER,init> : 
            if ( init == <LIST> ) {
                "{" <SEPA>
                while ( init ) {
                    exp =  nextl(init);
                    @exp
                    if ( init != () ) {
                        "," <S>
                    }
                }
                <SEPB> "}";
            } else 
                @init 
            break ;
        case <ABST_DECLARATOR,type,declarator> : 
            @type @declarator
            break ;
        case <NEW_DECLARATOR,type,declarator> : 
            @type @declarator
            break ;
        case <DECLARATOR,type,declarator> : 
            @type @declarator
            break ;
        case <TYP_BIT,ident,exp> : 
            @ident <S> ":" <S> @exp
            break ;
        case <EXP_SEQ,list> : 
            statementf = 0 ;
            while ( list != () ) {
                exp =  nextl(list);
                @exp
                if ( list != () ) {
                    "," <S>
                }
            }
            break ;
        case <AFF,exp1,exp2> : 
            statementf = 0 ;
            @exp1 <S> "=";
            if ( assignAlign && IsTop(paramTree) != -1 ) 
                <S,2> 
            else 
                <S> 
            @exp2
            if ( oldStatement ) {
                <SEPB> ";";
            }
            break ;
        case <MUL_AFF,exp1,exp2> : 
            statementf = 0 ;
            @exp1 <S> "*=" <S> @exp2
            if ( oldStatement ) {
                <SEPB> ";";
            }
            break ;
        case <DIV_AFF,exp1,exp2> : 
            statementf = 0 ;
            @exp1 <S> "/=" <S> @exp2
            if ( oldStatement ) {
                <SEPB> ";";
            }
            break ;
        case <REM_AFF,exp1,exp2> : 
            statementf = 0 ;
            @exp1 <S> "%=" <S> @exp2
            if ( oldStatement ) {
                <SEPB> ";";
            }
            break ;
        case <PLU_AFF,exp1,exp2> : 
            statementf = 0 ;
            @exp1 <S> "+=" <S> @exp2
            if ( oldStatement ) {
                <SEPB> ";";
            }
            break ;
        case <MIN_AFF,exp1,exp2> : 
            statementf = 0 ;
            @exp1 <S> "-=" <S> @exp2
            if ( oldStatement ) {
                <SEPB> ";";
            }
            break ;
        case <LSH_AFF,exp1,exp2> : 
            statementf = 0 ;
            @exp1 <S> "<<=" <S> @exp2
            if ( oldStatement ) {
                <SEPB> ";";
            }
            break ;
        case <RSH_AFF,exp1,exp2> : 
            statementf = 0 ;
            @exp1 <S> ">>=" <S> @exp2
            if ( oldStatement ) {
                <SEPB> ";";
            }
            break ;
        case <AND_AFF,exp1,exp2> : 
            statementf = 0 ;
            @exp1 <S> "&=" <S> @exp2
            if ( oldStatement ) {
                <SEPB> ";";
            }
            break ;
        case <OR_AFF,exp1,exp2> : 
            statementf = 0 ;
            @exp1 <S> "|=" <S> @exp2
            if ( oldStatement ) {
                <SEPB> ";";
            }
            break ;
        case <XOR_AFF,exp1,exp2> : 
            statementf = 0 ;
            @exp1 <S> "^=" <S> @exp2
            if ( oldStatement ) {
                <SEPB> ";";
            }
            break ;
        case <COND_AFF,exp1,exp2,exp3> : 
            statementf = 0 ;
            @exp1 <S> "?" <S> @exp2 <S> ":" <S> @exp3
            if ( oldStatement ) {
                <SEPB> ";";
            }
            break ;
        case <OR,exp1,exp2> : 
            @exp1 <S> "||" <S> @exp2
            break ;
        case <AND,exp1,exp2> : 
            @exp1 <S> "&&" <S> @exp2
            break ;
        case <LOR,exp1,exp2> : 
            @exp1 <S> "|" <S> @exp2
            break ;
        case <LAND,exp1,exp2> : 
            @exp1 <S> "&" <S> @exp2
            break ;
        case <LXOR,exp1,exp2> : 
            @exp1 <S> "^" <S> @exp2
            break ;
        case <EQU,exp1,exp2> : 
            @exp1 <S> "==" <S> @exp2
            break ;
        case <NEQU,exp1,exp2> : 
            @exp1 <S> "!=" <S> @exp2
            break ;
        case <LEQU,exp1,exp2> : 
            @exp1 <S> "<=" <S> @exp2
            break ;
        case <GEQU,exp1,exp2> : 
            @exp1 <S> ">=" <S> @exp2
            break ;
        case <GT,exp1,exp2> : 
            @exp1 <S> ">" <S> @exp2
            break ;
        case <LT,exp1,exp2> : 
            @exp1 <S> "<" <S> @exp2
            break ;
        case <LSHI,exp1,exp2> : 
            @exp1 <S> "<<" <S> @exp2
            break ;
        case <RSHI,exp1,exp2> : 
            @exp1 <S> ">>" <S> @exp2
            break ;
        case <PLUS,exp1,exp2> : 
            @exp1 <S> "+" <S> @exp2
            break ;
        case <MINUS,exp1,exp2> : 
            @exp1 <S> "-" <S> @exp2
            break ;
        case <MUL,exp1,exp2> : 
            @exp1 <S> "*" <S> @exp2
            break ;
        case <DIV,exp1,exp2> : 
            @exp1 <S> "/" <S> @exp2
            break ;
        case <REM,exp1,exp2> : 
            @exp1 <S> "%" <S> @exp2
            break ;
        case <NEG,exp> : 
            <S> "-" @exp
            break ;
        case <POS,exp> : 
            <S> "+" <S> @exp
            break ;
        case <LNEG,exp> : 
            <SEPB> "~" @exp
            break ;
        case <NOT,exp> : 
            <SEPB> "!" @exp
            break ;
        case <POINT,exp> : 
            <SEPB> "*" @exp
            break ;
        case <ADDR,exp> : 
            <SEPB> "&" @exp
            break ;
        case <BINCR,exp> : 
            <SEPB> "++" @exp
            break ;
        case <BDECR,exp> : 
            <SEPB> "--" @exp
            break ;
        case <AINCR,exp> : 
            @exp "++" <SEPA>
            break ;
        case <ADECR,exp> : 
            @exp "--" <SEPA>
            break ;
        case <EXP,exp> : 
            statementf = 0 ;
            "(" @exp ")";
            break ;
        case <EXP_LIST,exp,list> : 
            statementf = 0 ;
            @exp "(" @list ")";
            break ;
        case <VA_ARG,exp1,exp2> : 
            statementf = 0 ;
            "va_arg(" @exp1 "," @exp2 ")";
            break ;
        case <FUNC_SPEC,exp,list> : 
            statementf = 0 ;
            @exp "(" @list ")";
            break ;
        case <FORALLSONS,exp1,exp2> : 
            statementf = 0 ;
            "forallsons" "(" @exp1 "," <S> @exp2 ")";
            break ;
        case <EXP_ARRAY,exp,list> : 
            @exp <SEPB> "[" @list "]";
            break ;
        case <REF,exp1,exp2> : 
            @exp1 "." @exp2
            break ;
        case <ARROW,exp1,exp2> : 
            @exp1
            if ( spaceArrow ) {
                <S>
            }
            "->";
            if ( spaceArrow ) {
                <S>
            }
            @exp2
            break ;
        case <STRING_LIST,list> : 
            while ( list != () ) {
                son =  nextl(list);
                @son
                if ( list != () ) 
                    <S> 
            }
            break ;
        case <STRING,val> : 
            "\"" value(val) "\"";
            break ;
        case <INTEGER,val> : 
            value(val)
            break ;
        case <HEXA,val> : 
            "0x" <SEPO> @val
            break ;
        case <LONG,val> : 
            @val <SEPO> "L";
            break ;
        case <LONGLONG,val> : 
            @val <SEPO> "LL";
            break ;
        case <OCTAL,val> : 
            "0" <SEPO> @val
            break ;
        case <IUN,val> : 
            @val <SEPO> "U";
            break ;
        case <IUNLONG,val> : 
            @val <SEPO> "UL";
            break ;
        case <IUNLONGLONG,val> : 
            @val <SEPO> "ULL";
            break ;
        case <ILONG,val> : 
            @val <SEPO> "L";
            break ;
        case <ILONGLONG,val> : 
            @val <SEPO> "LL";
            break ;
        case <FLOAT,val> : 
            value(val)
            break ;
        case <CHAR,val> : 
            "'" value(val) "'";
            break ;
        case <EXCEPT_ANSI_ALL> : 
        case <VAR_LIST> : 
            "...";
            break ;
        case <COMPOUND,list> : 
            if ( list == () ) {
                <SEPB> "{";
                if ( !ansiMode && (paramTree ^ ) == <IF> && sontree(paramTree ^ , 3) ) 
                    <NL>
                "}" <SEPA>
            } else {
                
                // look if in func
                exp =  paramTree ^ ;
                bool    inFunc = false ;
                if ( exp == <FUNC> ) 
                    inFunc =  true ;
                
                // display 
                if ( ansiMode && !braceAlign || braceAlignNoFunc && inFunc ) 
                    <NL>
                if ( !(ansiMode && braceAlign) || braceAlignNoFunc && inFunc ) {
                    <SEPB> "{";
                }
                <NL>
                if ( ansiMode && braceAlign ) {
                    if ( !inFunc || braceAlignTabFunc || braceAlignNoFunc ) {
                        if ( exp != <LIST> ) {
                                <T>
                        }
                    }
                } else 
                        <T> 
                {{
                    if ( ansiMode && braceAlign && !(braceAlignNoFunc && inFunc) ) {
                        "{" <NL>
                    }
                    statementf =  1 ;
                    while ( list != () ) {
                        son         =  nextl(list);
                        postComment =  son ;
                        postComment == <ATTRIBUTS,postComment>;
                        @son
                        if ( !Sequence(son, sontree(list, 1)) ) {
                            control_stat1(son);
                            <NL>
                        } else {
                            <S>
                        }
                    }
                    if ( ansiMode && braceAlign && !(braceAlignNoFunc && inFunc) ) {
                        "}" <SEPA>
                    }
                }}
                if ( !(ansiMode && braceAlign) || braceAlignNoFunc && inFunc ) {
                    "}" <SEPA>
                }
            }
            break ;
        case <BREAK> : 
            "break ;";
            oldPostComment = paramTree ;
            comm(paramTree, POST);
            <NL>
            break ;
        case <CONTINUE> : 
            "continue ;";
            oldPostComment = paramTree ;
            comm(paramTree, POST);
            <NL>
            break ;
        case <DO,stat,exp> : 
            "do";
            if ( stat != <COMPOUND> ) {
                if ( stat != <STAT_VOID> ) {
                    <NL>
                        <T>
                }
                postComment =  stat ;
                @stat
                if ( !Sequence(stat, stat) ) {
                    control_stat1(stat);
                    <NL>
                } else {
                    <S>
                }
            } else {
                <S> @stat <S>
            }
            statementf = 0 ;
            if ( ansiMode && braceAlign && stat == <COMPOUND> ) 
                <NL>
            "while (" {{
                        <S> @exp <S>
                      }}
            ");";
            statementf = 1 ;
            <NL>
            break ;
        case <FOR,exp1,exp2,exp3,stat> : 
            statementf = 0 ;
            if ( exp1 != <ALL_OF> ) {
                "for (" {{
                            if ( exp1 != () ) {
                                <S> @exp1 <S>
                            }
                            ";";
                            if ( exp2 != () ) {
                                <S> @exp2 <S>
                            }
                            ";";
                            if ( exp3 != () ) {
                                <S> @exp3 <S>
                            }
                        }}
                ")" <S>
            } else {
                PTREE   var, allVar ;
                exp1 == <,var,allVar>;
                "for (" {{
                            {
                                <S> @var <S>
                            }
                            ":";
                            {
                                <S> @allVar <S>
                            }
                        }}
                ")" <S>
            }
            statementf = 1 ;
            if ( stat != <COMPOUND> ) {
                postComment =  stat ;
                <NL>
                    <T> {{
                            @stat
                        }}
                if ( !Sequence(stat, stat) ) {
                    control_stat1(stat);
                    <NL>
                } else {
                    <S>
                }
            } else {
                @stat <NL>
            }
            break ;
        case <GOTO,ident> : 
            "goto" value(ident) <SEPB> ";";
            oldPostComment = paramTree ;
            comm(paramTree, POST);
            <NL>
            break ;
        case <NONE> : 
            oldPostComment = paramTree ;
            comm(paramTree, POST);
            <NL>
            break ;
        case <LABEL,ident,stat> : 
            postComment = stat ;
            UnMark();
            value(ident) <S> ":" <S> <NL>
                <T>
            Mark();
            {{
                @stat
            }}
            if ( !Sequence(stat, stat) ) {
                control_stat1(stat);
            } else {
                <S>
            }
            break ;
        case <IF,exp,stat1,stat2> : 
            statementf = 0 ;
            "if (" {{
                    <S> @exp <S>
                   }}
            ")" <S>
            statementf = 1 ;
            if ( IsComm(stat1, PRE) || IsComm(stat2, PRE) ) 
                <NL>
            
            /* for switch */
            // IsComm for comm on condition
            if ( stat1 != <COMPOUND> ) {
                postComment =  stat1 ;
                <NL>
                    <T> {{
                            @stat1
                        }}
                {
                    if ( !Sequence(stat1, stat1) ) {
                        control_stat1(stat1);
                    } else {
                        <S>
                    }
                }
            } else 
                @stat1 
            
            /* for switch  */
            if ( stat2 != () ) {
                if ( stat1 != <COMPOUND> || ansiMode || IsComm(stat1, PRE) ) 
                    <NL>
                else 
                    <S> 
                "else" <S>
                if ( ansiMode && stat2 != <IF> || IsComm(stat1, PRE) && (IsComm(stat2, PRE) || stat2 != <IF>) || IsComm(stat2, PRE) ) 
                    <NL>
                if ( stat2 != <COMPOUND> && stat2 != <IF> ) {
                    postComment =  stat2 ;
                    <NL>
                        <T> {{
                                @stat2
                            }}
                    if ( !Sequence(stat2, stat2) ) {
                        control_stat1(stat2);
                        <NL>
                    } else {
                        <S>
                    }
                } else {
                    postComment =  stat2 ;
                    @stat2
                    if ( !Sequence(stat2, stat2) ) {
                        control_stat1(stat2);
                    } else {
                        <S>
                    }
                }
            }
            break ;
        case <STAT_VOID> : 
            {
                <SEPB> ";";
            }
            oldPostComment = paramTree ;
            comm(paramTree, POST);
            break ;
        case <RETURN,exp> : 
            statementf = 0 ;
            "return" <S> @exp
            {
                <SEPB> ";";
            }
            oldPostComment = paramTree ;
            comm(paramTree, POST);
            <NL>
            break ;
        case <DEFAULT> : 
        case <CASE> : 
            {
                son =  paramTree ;
                if ( son == <DEFAULT> || son == <CASE> ) {
                    if ( son == <DEFAULT,stat> ) {
                        "default :" <S>
                    } else if ( son == <CASE> ) {
                        statementf =  0 ;
                        son == <,exp,stat>;
                        "case " @exp <S> ":" <S>
                        statementf =  oldStatement ;
                    }
                    
                    // look if there is only one instruct after        
                    // the case in this case don't put a newline        
                    son =  sontree(stat, 1);
                    if ( !sontree(stat, 2) && singleSwitchIndent ) {
                        switch ( son ) {
                            case <COMPOUND> : 
                            case <CASE> : 
                            case <DEFAULT> : 
                            case <IF> : 
                            case <WHILE> : 
                            case <FOR> : 
                            case <DO> : 
                            case <SWITCH> : 
                            case <IF_DIR> : 
                            case <IFDEF_DIR> : 
                            case <IFNDEF_DIR> : 
                            case <NOT_MANAGED> : 
                            case <NO_PRETTY> : 
                            case <ATTRIBUTS> : 
                            case <EXCEPTION> : 
                            case <EXCEPTION_ANSI> : 
                            case <CATCH_ANSI> : 
                                oneInstruct = 0 ;
                                break ;
                            default : 
                                
                                // dans le cas ou il y a y commentaire  
                                // prefixe il faut mettre un <NL> sinon 
                                // interaction facheuse avec le {{    
                                // suivant qui met le texte au mileu    
                                // de la page aligne sur le :    
                                if ( son && !IsComm(son, PRE) ) 
                                    oneInstruct =  1 ;
                                else 
                                    oneInstruct =  0 ;
                        }
                    } else 
                        oneInstruct =  0 ;
                    if ( !oneInstruct ) {
                        <NL>
                        if ( !(ansiMode && braceAlign) || son != <COMPOUND> ) 
                                <T> 
                    }
                    {{
                        while ( stat != () ) {
                            son         =  nextl(stat);
                            postComment =  son ;
                            @son
                            if ( !Sequence(son, sontree(stat, 1)) ) {
                                control_stat1(son);
                                <NL>
                            } else {
                                <S>
                            }
                        }
                    }}
                }
            }
            break ;
        case <SWITCH,exp,list> : 
            param      = paramTree ;
            statementf = 0 ;
            "switch (" {{
                        <S> @exp <S>
                       }}
            ")" <S>
            if ( ansiMode ) 
                <NL>
            if ( !(ansiMode && braceAlign) ) {
                "{" <NL>
            }
            statementf = 1 ;
                <T> {{
                        if ( ansiMode && braceAlign ) {
                            "{" <NL>
                        }
                        while ( list != () ) {
                            stat1 =  son = nextl(list);
                            comm(son, PRE);
                            IntDecomp(son, 0);
                            comm(stat1, POST);
                        }
                        if ( ansiMode && braceAlign ) {
                            "}" <NL>
                        }
                    }}
            if ( !(ansiMode && braceAlign) ) {
                "}" <NL>
            }
            break ;
        case <WHILE,exp,stat> : 
            statementf = 0 ;
            "while (" {{
                        <S> @exp <S>
                      }}
            ")" <S>
            statementf = 1 ;
            if ( stat != <COMPOUND> ) {
                postComment =  stat ;
                <NL>
                    <T> {{
                            @stat
                        }}
                if ( !Sequence(stat, stat) ) {
                    control_stat1(stat);
                } else {
                    <S>
                }
            } else {
                @stat
            }
            break ;
        case <EXCEPTION_ANSI,stat,list> : 
            {
                "try";
                if ( stat != <COMPOUND> ) {
                    postComment =  stat ;
                    <NL>
                        <T> {{
                                @stat
                            }}
                    if ( !Sequence(stat, stat) ) {
                        control_stat1(stat);
                    } else {
                        <S>
                    }
                } else {
                    @stat
                }
                PTREE   elem ;
                while ( (elem = nextl(list)) ) {
                    if ( ansiMode || IsComm(elem, PRE) ) 
                        <NL,1>
                    @elem
                }
            }
            break ;
        case <CATCH_ANSI,exp,stat> : 
            statementf = 0 ;
            "catch (" {{
                        <S> @exp <S>
                      }}
            ")" <S>
            statementf = 1 ;
            if ( stat != <COMPOUND> ) {
                postComment =  stat ;
                <NL>
                    <T> {{
                            @stat
                        }}
                if ( !Sequence(stat, stat) ) {
                    control_stat1(stat);
                } else {
                    <S>
                }
            } else {
                @stat
            }
            break ;
        case <THROW_ANSI,exp> : 
            statementf = 0 ;
            "throw" <S> @exp
            {
                <SEPB> ";";
            }
            oldPostComment = paramTree ;
            comm(paramTree, POST);
            <NL>
            break ;
        case <TIDENT,ident> : 
            @ident
            break ;
        case <TYPENAME,ident> : 
            "typename" @ident
            break ;
        case <AUTO> : 
            "auto";
            break ;
        case <INCLUDE_DIR,param> : 
            {
                if ( tabDirective ) 
                    Mark();
                gotocol(0);
                "#";
                if ( tabDirective ) 
                    UnMark();
            }
            "include ";
            if ( param == <STRING> ) {
                @param
            } else {
                "<" value(param) ">";
            }
            oldPostComment = paramTree ;
            comm(paramTree, POST);
            if ( !LastInTopList(paramTree) ) 
                <NL>
            break ;
        case <DEFINE_DIR,ident,param,val> : 
            {
                if ( tabDirective ) 
                    Mark();
                gotocol(0);
                "#";
                if ( tabDirective ) 
                    UnMark();
            }
            {{
                "define " value(ident)
                if ( param != () ) {
                    "(";
                    while ( param != () ) {
                        son =  nextl(param);
                        @son
                        if ( param != () ) {
                            "," <S>
                        }
                    }
                    ")";
                }
                <S>
                if ( val != <LIST> ) {
                    value(val)
                    comm(val, POST);
                    if ( !LastInTopList(paramTree) ) 
                        <NL>
                } else {
                    while ( val != () ) {
                        son =  nextl(val);
                        value(son)
                        comm(son, POST);
                        if ( val != () ) {
                            <NL>
                            
                            // now that we tabulate directive mark is done after #
                            PrintString("\b");
                        }
                    }
                    if ( !LastInTopList(paramTree) ) 
                        <NL>
                }
            }}
            oldPostComment = paramTree ;
            comm(paramTree, POST);
            <NL>
            break ;
        case <UNDEF,exp> : 
            {
                if ( tabDirective ) 
                    Mark();
                gotocol(0);
                "#";
                if ( tabDirective ) 
                    UnMark();
            }
            "undef" value(exp)
            break ;
        case <PRAGMA,exp> : 
            {
                if ( tabDirective ) 
                    Mark();
                gotocol(0);
                "#";
                if ( tabDirective ) 
                    UnMark();
            }
            "pragma " value(exp)
            break ;
        case <LINE_DIR,exp,exp1> : 
            {
                if ( tabDirective ) 
                    Mark();
                gotocol(0);
                "#";
                if ( tabDirective ) 
                    UnMark();
                "line " @exp " " @exp1
            }
            break ;
        case <LINE_REFERENCE_DIR,exp,exp1,exp2> : 
            {
                PTREE   elem ;
                if ( tabDirective ) 
                    Mark();
                gotocol(0);
                "#";
                if ( tabDirective ) 
                    UnMark();
                " " @exp " " @exp1
#if 0
                if ( exp2 == <LIST> ) {
                    " ";
                    while ( (elem = nextl(exp2)) ) 
                        @exp2 
                }
#endif
            }
            break ;
        case <CONFIG,exp> : 
            {
                if ( tabDirective ) 
                    Mark();
                gotocol(0);
                "#";
                if ( tabDirective ) 
                    UnMark();
            }
            "pragma config " @exp
            break ;
        case <SIMPLIFY,exp> : 
            gotocol(0);
            "#pragma simplify " @exp
            break ;
        case <TAB_VALUE,exp> : 
            "tab " value(exp)
            break ;
        case <MODE_VALUE,exp> : 
            "mode " value(exp)
            break ;
        case <BRACE_ALIGN_VALUE,exp> : 
            "brace_align " value(exp)
            break ;
        case <SINGLE_SWITCH_INDENT_VALUE,exp> : 
            "single_switch_indent " value(exp)
            break ;
        case <MARGIN_VALUE,exp> : 
            "margin " value(exp)
            break ;
        case <ERROR,exp> : 
            {
                if ( tabDirective ) 
                    Mark();
                gotocol(0);
                "#";
                if ( tabDirective ) 
                    UnMark();
            }
            "error " value(exp)
            break ;
        case <ALINE> : 
            {
                value(paramTree)
            }
            break ;
        case <NO_PRETTY,list> : 
            GotoCol(0);
            {{
                "#pragma nopretty" <NL>
                while ( list != () ) {
                    son =  nextl(list);
                    @son <NL>
                }
                <NL>
                "#pragma pretty";
                if ( !LastInTopList(paramTree) ) 
                    <NL>
            }}
            break ;
        case <NOT_MANAGED,list> : 
            GotoCol(0);
            {{
                "#pragma notmanaged" <NL>
                while ( list != () ) {
                    son =  nextl(list);
                    @son <NL>
                }
                <NL>
                "#pragma managed";
                if ( !LastInTopList(paramTree) ) 
                    <NL>
            }}
            break ;
        case <IFDEF_DIR,exp,stat1,stat2> : 
        case <IFNDEF_DIR,exp,stat1,stat2> : 
        case <IF_DIR,exp,stat1,stat2> : 
            {
                if ( tabDirective ) 
                    Mark();
                gotocol(0);
                "#";
                if ( tabDirective ) 
                    UnMark();
            }
            switch ( paramTree ) {
                case <IFDEF_DIR> : 
                    "ifdef ";
                    break ;
                case <IFNDEF_DIR> : 
                    "ifndef ";
                    break ;
                case <IF_DIR> : 
                    "if ";
                    break ;
            }
            @exp <NL>
            if ( tabDirective ) {
                    <T>
                Mark();
            }
            while ( stat1 != () ) {
                son         =  nextl(stat1);
                postComment =  son ;
                @son
                if ( !Sequence(son, sontree(stat1, 1)) ) {
                    control_stat1(son);
                    <NL>
                } else {
                    <S>
                }
            }
            if ( tabDirective ) {
                UnMark();
            }
            follow_if_dir(stat2, paramTree);
            break ;
        case <CAST,type,exp> : 
            "(" @type ")" @exp
            break ;
        case <ATTRIBUTS,exp,list,list1> : 
            while ( list != () ) {
                son =  nextl(list);
                TraitAttribut(son);
            }
            @exp
            while ( list1 != () ) {
                son =  nextl(list1);
                if ( son == <NEWLINE> ) {
                    comm(paramTree, POST);
                    oldPostComment =  paramTree ;
                }
                TraitAttribut(son);
            }
            break ;
        default : break ;
    }
    
    // extensions pour le c++        
    switch ( paramTree ) {
        case <EXTERNAL,exp1,stat1> : 
            "extern " @exp1 <S> @stat1
            break ;
        case <ASM,exp1> : 
            "asm(" @exp1 ")";
            break ;
        case <TYP_AFF_CALL,declarator,exp> : 
            statementf = 0 ;
            @declarator "(" @exp ")";
            break ;
        case <DESTRUCT,ident> : 
            <SEPB> "~" @ident
            break ;
        case <QUALIFIED,ident,exp> : 
            if ( ident != () ) {
                @ident
            } else {
                <SEPB>
            }
            "::" @exp
            break ;
        case <PROTECT,name,exp> : 
            value(name) @exp
            break ;
        case <PROTECT_MEMB,name,list> : 
            {
                <NL,2>
                
                // for outline in class with emacs
                if ( FlatFunct() ) {
                        <T> value(name) <SEPB> ":" <NL,2>
                    gotocol(0);
                    {{
                        DecompilerListeExternSimp(list);
                    }}
                } else {
                    {{
                        value(name) <SEPB> ":" <NL,2>
                        DecompilerListeExtern(list);
                    }}
                }
                break ;
            }
        case <COMPOUND_EXT,list> : 
            if ( ansiMode ) 
                <NL>
            "{" <NL,2>
            DecompilerListeExtern(list);
            <NL>
            "}";
            oldPostComment = paramTree ;
            comm(paramTree, POST);
            <NL>
            break ;
        case <BASE_LIST,list> : 
            if ( list != () ) {
                <S> ":" <S>
                while ( list != () ) {
                    son =  nextl(list);
                    @son
                    if ( list != () ) {
                        "," <SEPA>
                    }
                }
            }
            break ;
        case <CLASS_DECL,stat1> : 
            if ( ansiMode ) 
                <NL>
            <SEPB> "{" <NL,1>
            
            // for outline in class with emacs
            if ( EString("struct") != Value(FatherTree(paramTree)) && EString("enum") != Value(FatherTree(paramTree)) && FlatFunct() ) {
                gotocol(0);
                {{
                    DecompilerListeExternSimp(stat1);
                }}
            } else 
                DecompilerListeExtern(stat1);
            <NL,1>
            "}";
            break ;
        case <CLASS,name,ident,init,stat1> : 
            inClass = 1 ;
            value(name)
            if ( ident != () ) 
                @ident 
            @init
            if ( stat1 ) {
                @stat1
            } else {
                <SEPB>
            }
            break ;
        case <MEMBER_DECLARATOR,name,exp> : 
            @name "*" <SEPA> @exp
            break ;
        case <TYP_REF,declarator> : 
            <SEPB> "&" @declarator
            break ;
        case <DOT_MEMB,exp1,exp2> : 
            @exp1
            if ( spaceArrow ) {
                <S>
            }
            ".*";
            if ( spaceArrow ) {
                <S>
            }
            @exp2
            break ;
        case <ARROW_MEMB,exp1,exp2> : 
            @exp1
            if ( spaceArrow ) {
                <S>
            }
            "->*";
            if ( spaceArrow ) {
                <S>
            }
            @exp2
            break ;
        case <NEW,exp1,exp2,init> : 
            if ( init ) 
                init == <,init>;
            "new";
            if ( exp1 != () ) {
                <SEPB> "(" @exp1 ")" <SEPA>
            }
            if ( exp2 != <NEW_DECLARATOR> ) {
                "(" <SEPA> @exp2 <SEPB> ")";
            } else 
                @exp2 
            if ( init != () ) {
                "(";
                while ( init != () ) {
                    son =  nextl(init);
                    @son
                    if ( init != () ) {
                        "," <S>
                    }
                }
                ")";
            }
            break ;
        case <DELETE,exp1,exp2> : 
            "delete";
            if ( exp1 != () ) {
                <S> "[";
                if ( exp1 == <TYP_ARRAY,<>,exp1> && exp1 != () ) 
                    @exp1 
                "]" <S>
            }
            @exp2
            break ;
        case <OPERATOR,exp> : 
            "operator";
            if ( exp != <FOR_DECLARATION> ) {
                value(exp) <S>
            } else {
                @exp
            }
            break ;
        case <CTOR_INIT,ident,exp> : 
            @ident "(" @exp ")";
            break ;
        case <MACRO,ident,list> : 
            @ident "(";
            if ( list != () ) 
                @list 
            ")";
            oldPostComment = paramTree ;
            comm(paramTree, POST);
            <NL,1>
            break ;
        case <MESSAGE_MAP,list> : 
            son = nextl(list);
            @son    <T> {{
                            while ( list != () ) {
                                son =  nextl(list);
                                @son
                            }
                        }}
            "END_MESSAGE_MAP()";
            oldPostComment = paramTree ;
            comm(paramTree, POST);
            <NL,2>
            break ;
        case <CATCH,exp,stat> : 
            @exp <NL>
            @stat
            oldPostComment = paramTree ;
            comm(paramTree, POST);
            <NL>
            break ;
        case <EXCEPTION,stat,list> : 
            {
                if ( !IsComm(paramTree, PRE) ) 
                    <NL,2>
                "TRY " <NL>
                @stat <NL>
                @list
                if ( !strcmp(value(list), "CATCH_ALL") ) 
                    "END_CATCH_ALL" 
                else 
                    "END_CATCH" 
                oldPostComment =  paramTree ;
                comm(paramTree, POST);
                if ( LastInList(paramTree) ) 
                    <NL,1>
                else 
                    <NL,2>
            }
            break ;
        case <NAMESPACE,ident,exp> : 
            {
                "namespace" @ident <S> @exp <NL,2>
            }
            break ;
        case <NAMESPACE_ALIAS,ident,exp> : 
            {
                "namespace" @ident <S> "=" <S> @exp <S> ";";
            }
            break ;
        case <USING,ident> : 
            {
                "using" @ident <S> ";";
            }
            break ;
        case <USING_NAMESPACE,ident> : 
            {
                "using namespace" @ident <S> ";";
            }
            break ;
        default : break ;
    }
    statementf =  oldStatement ;
    inClass    =  oldInClass ;
    return oldPostComment ;
}

int DecompCplus::middleInList ( PTREE exp )
{
    PTREE   exp1 ;
    
    exp1 =  exp ^ ^ <LIST>;
    if ( exp1 == <LIST> ) {
        exp1 =  exp1 ^ ;
        if ( exp1 == <LIST> ) {
            return 1 ;
        }
    }
    return 0 ;
}

int DecompCplus::LastInList ( PTREE exp )
{
    PTREE   exp1 ;
    
    exp1 =  exp ^ ^ <LIST>;
    if ( exp1 == <LIST,<>,()> ) 
        return 1 ;
    return 0 ;
}

int DecompCplus::LastInTopList ( PTREE exp )
{
    PTREE   exp1 ;
    
    exp1 =  exp ^ ^ <LIST>;
    if ( exp1 == <LIST,<>,()> ) {
        while ( exp1 == <LIST> ) 
            exp1 =  exp1 ^ ;
        if ( exp1 == <LANGUAGE> ) 
            return 1 ;
    }
    return 0 ;
}

void DecompCplus::DecompilerListeExternSimp ( PTREE list )
{
    PTREE   son, father ;
    int     typeBlock = -1, oldTypeBlock = -1 ;
    
    while ( list != () ) {
        father    =  list ^ ;
        son       =  nextl(list);
        typeBlock =  TypeOfBlock(son);
        if ( typeBlock != oldTypeBlock && oldTypeBlock != -1 ) {
            <NL,2>
        } else if ( father != <LANGUAGE> ) {
            <NL,1>
        }
        oldTypeBlock =  typeBlock ;
        @son
    }
}

void DecompCplus::DecompilerListeExtern ( PTREE list )
{
        <T> {{
                DecompilerListeExternSimp(list);
            }}
}

/*************************************************************************/
/*   ChopTree : chop the tree : here call decomp                         */
/*************************************************************************/
extern void copy () ;

void DecompCplus::ChopTree ( PTREE tree, int funcAlone )
{
    copy();
    if ( simplifyExpression ) 
        clean_tree(tree);
    Treat(tree);
    Decomp(tree, funcAlone);
    
    // to avoid a useless free
    AddRef(tree);
}

/******************************************************************
     copy : copyright ;
   *******************************************************************/
void DecompCplus::copy ()
{
    const char  *str ;
    
    if ( copyPrinted ) 
        return ;
    else 
        copyPrinted =  true ;
    str =  "\n\r C++ prettyPrinter version 7.0.0, CopyRight(C) 1989-2018 Eric Lavillonniere \n\r";
    _write(2, str, strlen(str));
    str =  " C++ prettyPrinter comes with ABSOLUTELY NO WARRANTY.\n\r";
    _write(2, str, strlen(str));
    str =  " This is free software, and you are welcome to redistribute it \n\r";
    _write(2, str, strlen(str));
    str =  " under certain conditions.\n\r";
    _write(2, str, strlen(str));
    str =  " For details see file COPYING.LESSER in C++ prettyPrinter directory.\n\r\n\r";
    _write(2, str, strlen(str));
}


