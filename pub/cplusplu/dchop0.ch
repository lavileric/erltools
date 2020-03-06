/*************************************************************************/
/*                                                                       */
/*        dchop0.ch   - Built by Eric Lavillonniere on Tandon 386 - 93   */
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
#include "memges.h"

void DecompCplus::lstat_dec ( PTREE paramTree )
{
    PTREE   son ;
    PTREE   oldPostComment = postComment ;
    
    while ( paramTree != () ) {
        son         =  nextl(paramTree);
        postComment =  son ;
        @son
        if ( !Sequence(son, son) ) {
            control_stat1(son);
            <NL>
        }
    }
    postComment =  oldPostComment ;
}

void DecompCplus::follow_if_dir ( PTREE paramTree, PTREE reference )
{
    PTREE   stat1, stat2, son, my_exp ;
    PTREE   oldPostComment = postComment ;
    
    if ( paramTree == () ) {
        {
            if ( tabDirective ) 
                Mark();
            gotocol(0);
            "#";
            if ( tabDirective ) 
                UnMark();
        }
        "endif";
        if ( !LastInTopList(reference) ) 
            <NL>
    } else if ( paramTree == <IF_DIR,my_exp,stat1,stat2> ) {
        {
            if ( tabDirective ) 
                Mark();
            gotocol(0);
            "#";
            if ( tabDirective ) 
                UnMark();
        }
        "elif " @my_exp <NL>
            <T> {{
                    while ( stat1 != () ) {
                        son         =  nextl(stat1);
                        postComment =  son ;
                        @son
                        if ( !Sequence(son, son) ) {
                            control_stat1(son);
                            <NL>
                        }
                    }
                }}
        follow_if_dir(stat2, reference);
    } else {
        {
            if ( tabDirective ) 
                Mark();
            gotocol(0);
            "#";
            if ( tabDirective ) 
                UnMark();
        }
        "else " <NL>
        if ( tabDirective ) {
                <T>
            Mark();
        }
        while ( paramTree != () ) {
            son         =  nextl(paramTree);
            postComment =  son ;
            @son
            if ( !Sequence(son, son) ) {
                control_stat1(son);
                <NL>
            }
        }
        if ( tabDirective ) {
            UnMark();
        }
        {
            if ( tabDirective ) 
                Mark();
            gotocol(0);
            "#";
            if ( tabDirective ) 
                UnMark();
        }
        "endif";
        if ( !LastInTopList(reference) ) 
            <NL>
    }
    postComment =  oldPostComment ;
}

int DecompCplus::Sequence ( PTREE tree1, PTREE tree2 )
{
    tree1 == <ATTRIBUTS,tree1>;
    switch ( tree1 ) {
        case <MACRO> : 
        case <EXCEPTION> : 
            return 1 ;
            break ;
        default : return 0 ;
    }
}

void DecompCplus::control_stat1 ( PTREE paramTree ) /* on expression write ; <NL> */ 
{
    PTREE   exp1 ;
    
    switch ( paramTree ) {
        case <IF> : 
        case <WHILE> : 
        case <EXCEPTION_ANSI> : 
        case <CATCH_ANSI> : 
        case <FOR> : 
        case <DO> : 
        case <SWITCH> : 
        case <LABEL> : 
            comm(paramTree, POST);
            return ;
        case <BREAK> : return ;
        case <CONTINUE> : return ;
        case <FUNC> : 
        case <COMPOUND> : 
        case <CASE> : 
        case <DEFAULT> : 
            comm(paramTree, POST);
            <NL>
            return ;
        case <NONE> : 
        case <GOTO> : return ;
        case <STAT_VOID> : 
            
            /* supprime lors du portage sur sun */
            /* comm(paramTree, POST); */
            return ;
        case <RETURN> : return ;
        case <THROW_ANSI> : return ;
        case <DECLARATION> : return ;
        case <EXTERNAL> : return ;
        case <NAMESPACE> : return ;
        case <INLINE_NAMESPACE> : return ;
        case <NAMESPACE_ALIAS> : return ;
        case <USING> : return ;
        case <USING_NAMESPACE> : return ;
        case <INCLUDE_DIR> : return ;
        case <ERROR> : return ;
        case <PRAGMA> : return ;
        case <UNDEF> : return ;
        case <IF_DIR> : return ;
        case <IFDEF_DIR> : return ;
        case <IFNDEF_DIR> : return ;
        case <NOT_MANAGED> : return ;
        case <NO_PRETTY> : return ;
        case <DEFINE_DIR> : return ;
        case <LINE_DIR> : return ;
        case <LINE_REFERENCE_DIR> : return ;
        case <TYPEDEF> : return ;
        case <AFF> : goto terminal ;
        case <MUL_AFF> : goto terminal ;
        case <DIV_AFF> : goto terminal ;
        case <REM_AFF> : goto terminal ;
        case <PLU_AFF> : goto terminal ;
        case <MIN_AFF> : goto terminal ;
        case <LSH_AFF> : goto terminal ;
        case <RSH_AFF> : goto terminal ;
        case <AND_AFF> : goto terminal ;
        case <OR_AFF> : goto terminal ;
        case <XOR_AFF> : goto terminal ;
        case <COND_AFF> : goto terminal ;
        case <TEMPLATE_DECL> : goto terminal ;
        case <ATTRIBUTS> : 
            control_stat1(sontree(paramTree, 1));
            return ;
    }
    <SEPB> PrintString(";");
terminal : 
    comm(paramTree, POST);
}

/* search if comment is at top of the tree */
int DecompCplus::commAtBeginning ( PTREE tree )
{
    PTREE   father ;
    
    if ( (tree ^ ) == <ATTRIBUTS> ) 
        father =  tree ^ 2 ;
    else 
        father =  tree ^ ;
    if ( father == () ) 
        return 1 ;
    if ( father == <LIST> ) {
        father =  father ^ ;
        if ( father == <LANGUAGE> ) {
            return 1 ;
        }
    }
    return 0 ;
}

int DecompCplus::comm ( PTREE paramTree, int type )
{
    char        *comment ;
    PTREE       father ;
    const char  *intStartComment, *intMiddleComment, *intEndComment, *intPlusComment ;
    
    intStartComment  =  startComment ? startComment : "/*";
    intMiddleComment =  middleComment ? middleComment : "  ";
    intEndComment    =  endComment ? endComment : "*/";
    intPlusComment   =  plusComment ? plusComment : "/";
    if ( paramTree == () || inhibateComment ) 
        return 0 ;
    if ( type == PRE && (comment = IsComm(paramTree, PRE)) ) {
        PTREE   inter = (PTREE)0 ;
        int     beginning = Beginning();
        if ( !commAtBeginning(paramTree) ) {
            
            // if the prefix comment is at beginning of line    
            // put a NL ( not in middle of text ) if    
            // the first character of comment is space 
            // comments on if are for condition
            if ( beginning ) {
                if ( *comment == '/' && *(comment + 1) == ' ' && (paramTree ^ ) != <IF> ) 
                    LNewLine(2);
                else if ( *comment == ' ' && (paramTree ^ ) != <IF> ) 
                    LNewLine(2);
                else 
                    <NL>
            } else 
                <S> 
        }
        do {
            if ( inter ) 
                comment =  BrainyValue(inter);
            {{
                if ( *comment == '/' ) 
                    inter =  PrintCommE(paramTree, PRE, inter, intPlusComment, intPlusComment, "");
                else 
                    inter =  PrintCommE(paramTree, PRE, inter, intMiddleComment, intStartComment, intEndComment);
            }}
            
            // idem    
            if ( beginning || *comment == '/' ) {
                <NL>
            } else 
                <S> 
        } while ( inter );
        return 1 ;
    } else if ( type == POST && (comment = IsComm(paramTree, POST)) ) {
        PTREE   inter = (PTREE)0 ;
        {{
            do {
                if ( inter ) 
                    comment =  BrainyValue(inter);
                <S,1> {{
                        if ( *comment == '/' ) 
                            inter =  PrintCommE(paramTree, POST, inter, intPlusComment, intPlusComment, "");
                        else 
                            inter =  PrintCommE(paramTree, POST, inter, intMiddleComment, intStartComment, intEndComment);
                      }}
                if ( PrePost() && inter || *comment == '/' ) {
                    <NL>
                } else 
                    <S> 
            } while ( inter );
        }}
        return 1 ;
    }
    return 0 ;
}

DecompCplus::DecompCplus ()
{
    statementf     =  1 ;
    inClass        =  0 ;
    maxX           =  -1 ;
    indentFuncFlag =  0 ;
    xFather        =  yFather = 0 ;
#   define POST_COMMENT postComment
    POST_COMMENT =  (PTREE)0 ;
#   undef POST_COMMENT
    simplifyExpression =  1 ;
    inhibateComment    =  0 ;
    flatFunct          =  false ;
    copyPrinted        =  false ;
}



int DecompCplus::OpAssociativity ( PTREE & tree )
{
    switch ( tree ) {
        case <CAST> : 
        case <AFF> : 
        case <MUL_AFF> : 
        case <DIV_AFF> : 
        case <REM_AFF> : 
        case <MIN_AFF> : 
        case <PLU_AFF> : 
        case <LSH_AFF> : 
        case <RSH_AFF> : 
        case <AND_AFF> : 
        case <OR_AFF> : 
        case <XOR_AFF> : 
        case <COND_AFF> : 
        case <NEG> : 
        case <POS> : 
        case <LNEG> : 
        case <NOT> : 
        case <POINT> : 
        case <ARROW_MEMB> : 
        case <DOT_MEMB> : 
        case <ADDR> : 
        case <EXP> : 
        case <AINCR> : 
        case <ADECR> : 
        case <BINCR> : 
        case <BDECR> : return RIGHT_TO_LEFT ;
        default : return LEFT_TO_RIGHT ;
    }
}

bool IsAff ( PTREE & tree )
{
    switch ( tree ) {
        case <AFF> : 
        case <MUL_AFF> : 
        case <DIV_AFF> : 
        case <REM_AFF> : 
        case <MIN_AFF> : 
        case <PLU_AFF> : 
        case <LSH_AFF> : 
        case <RSH_AFF> : 
        case <AND_AFF> : 
        case <OR_AFF> : 
        case <XOR_AFF> : return true ;
        default : return false ;
    }
}

int DecompCplus::OpPriority ( PTREE  & tree )
{
    PTREE   son ;
    
    switch ( tree ) {
        case <EXP_SEQ> : 
        case <INITIALIZER> : 
            return 0 ;
            break ;
        case <AFF> : 
        case <MUL_AFF> : 
        case <DIV_AFF> : 
        case <REM_AFF> : 
        case <MIN_AFF> : 
        case <PLU_AFF> : 
        case <LSH_AFF> : 
        case <RSH_AFF> : 
        case <AND_AFF> : 
        case <OR_AFF> : 
        case <XOR_AFF> : 
            return 1 ;
            break ;
        case <COND_AFF> : 
            return 2 ;
            break ;
        case <OR> : 
            return 3 ;
            break ;
        case <AND> : 
            return 4 ;
            break ;
        case <LOR> : 
            return 5 ;
            break ;
        case <LXOR> : 
            return 6 ;
            break ;
        case <LAND> : 
            return 7 ;
            break ;
        case <EQU> : 
        case <NEQU> : 
            return 8 ;
            break ;
        case <LEQU> : 
        case <GEQU> : 
        case <GT> : 
        case <LT> : 
            return 9 ;
            break ;
        case <LSHI> : 
        case <RSHI> : 
            return 10 ;
            break ;
        case <MINUS> : 
        case <PLUS> : 
        case <TYP_AFF> : 
            
            // on met pas avec = car entraine des traitements 
            // particuliers 
            return 11 ;
            break ;
        case <MUL> : 
        case <DIV> : 
        case <REM> : 
            return 12 ;
            break ;
        case <DOT_MEMB> : 
        case <ARROW_MEMB> : 
            return 13 ;
            break ;
        case <CAST> :
        case <NEG> : 
        case <POS> : 
        case <LNEG> : 
        case <NOT> : 
        case <POINT> : 
        case <ADDR> : 
        case <AINCR> : 
        case <ADECR> : 
        case <BINCR> : 
        case <BDECR> : 
            return 14 ;
            break ;
        case <EXP_ARRAY> : 
        case <REF> : 
        case <ARROW> : 
            return 15 ;
            break ;
        case <EXP> : 
            return 16 ;
            break ;
        case <EXP_BRA,son> : 
        case <EXP_LIST,son> : 
            if ( value(son) && (strcmp(value(son), "WriteString") || strcmp(value(son), "PrintString")) ) 
                return 17 ;
            else 
                return -1 ;
            break ;
        case <VA_ARG> : return -1 ;
        case <BASE_LIST> : 
        case <NEW> : return 12 ;
        case <ENUM> : 
        case <TYP_LIST> : 
            return 17 ;
            break ;
        case <ILONGLONG> : 
        case <IUN> : 
        case <IUNLONG> : 
        case <IUNLONGLONG> : 
        case <ILONG> : 
        case <LONG> : 
        case <FLOAT> : 
        case <INTEGER> : 
        case <HEXA> : 
        case <OCTAL> : 
        case <STRING> : 
        case <CHAR> : return 18 ;
        default : return -1 ;
    }
    return -1 ;
}

int DecompCplus::IsTopInstr ( PTREE  & tree )
{
    switch ( tree ) {
        case <DECLARATION> : return 100 ;
        case <TYPEDEF> : return 101 ;
        case <IF> : return 1 ;
        case <WHILE> : return 2 ;
        case <FOR> : return 3 ;
        case <DO> : return 4 ;
        case <BREAK> : return 5 ;
        case <CONTINUE> : return 6 ;
        case <COMPOUND> : return 7 ;
        case <GOTO> : return 8 ;
        case <STAT_VOID> : return 9 ;
        case <LABEL> : return 10 ;
        case <RETURN> : return 11 ;
        case <SWITCH> : return 12 ;
        case <INCLUDE_DIR> : return 14 ;
        case <IF_DIR> : return 15 ;
        case <IFDEF_DIR> : return 16 ;
        case <IFNDEF_DIR> : return 17 ;
        case <NOT_MANAGED> : return 17 ;
        case <NO_PRETTY> : return 17 ;
        case <AFF> : return 19 ;
        case <MUL_AFF> : return 20 ;
        case <DIV_AFF> : return 21 ;
        case <REM_AFF> : return 22 ;
        case <PLU_AFF> : return 23 ;
        case <MIN_AFF> : return 24 ;
        case <LSH_AFF> : return 25 ;
        case <RSH_AFF> : return 26 ;
        case <AND_AFF> : return 27 ;
        case <OR_AFF> : return 28 ;
        case <XOR_AFF> : return 29 ;
        case <COND_AFF> : return 30 ;
        case <EXCEPTION_ANSI> : return 31 ;
        case <THROW_ANSI> : return 32 ;
        case <CATCH_ANSI> : return 33 ;
        case <NONE> : return 34 ;
        
        //        case <CASE> : return 35 ;
        // case <DEFAULT> : return 36 ;
        default : return -1 ;
    }
    <SEPB> PrintString(";");
terminal : 
    <NL>
}

void DecompCplus::clean_tree ( PTREE tree )
{
    PTREE   father ;
    PPTREE  _for_elem ;
    ItPtree it (tree) ;
    PTREE   cond ;
    PTREE   stat1 ;
    PTREE   stat2 ;
    
    while ( (_for_elem = it++) ) {
        switch ( for_elem ) {
            case <STAT_VOID> : 
                {
                    PTREE   father = for_elem ^ ;
                    PTREE   son ;
                    if ( father == <LIST> ) {
                        son =  sontree(father, 2);
                        if ( son == () ) {
                            father =  father ^ ;
                            if ( father == <LIST> ) {
                                father += <,<>,()>;
                                it.Current(father);
                            }
                        } else {
                            father += <,sontree(son, 1),sontree(son, 2)>;
                            it.Current(father);
                        }
                    }
                    break ;
                }
            case <AND> : 
                {
                    PTREE   father = for_elem ^ ;
                    int     rank ;
                    PTREE   x, y ;
                    int     modified = 0 ;
                    if ( for_elem == <AND,<INTEGER,x>> || for_elem == <AND,<>,<INTEGER,y>> ) {
                        rank =  ranktree(for_elem);
                        if ( x && !strcmp(value(x), "1") ) {
                            replacetree(father, rank, sontree(for_elem, 2));
                            modified =  1 ;
                        }
                        if ( y && !strcmp(value(y), "1") ) {
                            replacetree(father, rank, sontree(for_elem, 1));
                            modified =  1 ;
                        }
                        if ( modified ) 
                            it.Current(father);
                    }
                    break ;
                }
            case <NOT> : 
                {
                    PTREE   father = for_elem ^ ;
                    PTREE   exp ;
                    if ( for_elem == <NOT,<NOT,exp>> ) {
                        for_elem += exp ;
                        if ( father ) 
                            it.Current(father);
                        else 
                            it.Current(exp);
                    }
                    break ;
                }
            case <EXP> : 
                {
                    PTREE   father = for_elem ^ ;
                    if ( father == <CAST> || (father ^ ) == <PARAM_TYPE> || father == <LIST> ) 
                        break ;
                    PTREE   son = for_elem ;
                    son =  son [1];
                    if ( IsAff(son) ) 
                        break ;
                    if ( OpPriority(father) < OpPriority(son) ) {
                        PTREE   keep = father ;
                        replacetree(father, ranktree(for_elem), son);
                        it.Current(keep);
                    } else if ( OpPriority(father) == OpPriority(son) ) {
                        PTREE   keep = father ;
                        switch ( treearity(keep) ) {
                            case 2 : 
                                if ( ranktree(for_elem) == 1 && OpAssociativity(keep) == LEFT_TO_RIGHT
                                        || ranktree(for_elem) == 2 && OpAssociativity(keep) == RIGHT_TO_LEFT ) {
                                    replacetree(keep, ranktree(for_elem), sontree(for_elem, 1));
                                    it.Current(keep);
                                }
                                break ;
                            case 1 : 
                                if ( OpAssociativity(keep) == RIGHT_TO_LEFT ) {
                                    if ( keep != <AINCR> && keep != <ADECR> ) {
                                        replacetree(keep, 1, sontree(for_elem, 1));
                                        it.Current(keep);
                                    }
                                }
                                break ;
                            default : break ;
                        }
                    }
                    break ;
                }
            case <AFF> : 
            case <MUL_AFF> : 
            case <DIV_AFF> : 
            case <REM_AFF> : 
            case <MIN_AFF> : 
            case <PLU_AFF> : 
            case <LSH_AFF> : 
            case <RSH_AFF> : 
            case <AND_AFF> : 
            case <OR_AFF> : 
            case <XOR_AFF> : 
                {
                    PTREE           elem = for_elem ;
                    PTREE           father = for_elem ;
                    unsigned int    rank ;
                    rank   =  ranktree(elem);
                    father =  elem ^ ;
                    if ( father == <EXP> ) 
                        break ;
                    do {
                        bool    tested = false ;
                        switch ( father ) {
                            case <WHILE> : 
                            case <IF> : 
                                {
                                    if ( rank != 1 ) {
                                        father =  ();
                                        break ;
                                    }
                                    tested =  true ;
                                }
                            case <DO> : 
                            case <FOR> : 
                                {
                                    if ( !tested && rank != 2 ) {
                                        father =  ();
                                        break ;
                                    }
                                }
                                {
                                    rank =  ranktree(elem);
                                    PTREE   rep ;
                                    father =  elem ^ ;
                                    rep    =  <EXP,copytree(elem)>;
                                    replacetree(father, rank, rep);
                                    it.Current(rep);
                                    father =  ();
                                }
                                break ;
                            case <COMPOUND> : 
                                father = ();
                                break ;
                        }
                        if ( father != () ) {
                            rank   =  ranktree(father);
                            father =  father ^ ;
                        }
                    } while ( father != () );
                }
                break ;
        }
    }
}


