/*************************************************************************/
/*                                                                       */
/*        Decomp.ch - Built by Eric Lavillonniere on Tandon 386 - 89    */
/*                                                                       */
/*************************************************************************/
language chopb;

#include "decchopb.h"

#ifdef FOR_METACHOP
    PTREE   postComment ;
#endif

/**************************************************************
      Frame : frame a list of content on it's left
   ***************************************************************/
void DecompChopb::FrameContent ( PTREE list )
{
    int     nb, min = 32000 ;
    PTREE   inter = list, line ;
    char    *ptLine ;
    
    while ( inter ) {
        ptLine =  value(inter);
        nb     =  0 ;
        while ( *ptLine && (*ptLine == ' ' || *ptLine == '\t') ) {
            ptLine++ ;
            nb++ ;
        }
        if ( *ptLine ) 
            min =  nb < min ? nb : min ;
        nextl(inter);
    }
    if ( min != 32000 && min ) {
        inter =  list ;
        while ( inter ) {
            ptLine =  value(inter);
            if ( (nb = strlen(ptLine)) >= min ) {
                memmove(ptLine, ptLine + min, nb - min + 1);
            }
            nextl(inter);
        }
    }
    
    // suppress the space and tab at the end of the lines       
    inter =  list ;
    while ( inter ) {
        char    *string = Value(inter);
        ptLine =  string + strlen(string) - 1 ;
        while ( ptLine >= string && (*ptLine == ' ' || *ptLine == '\t') ) 
            ptLine-- ;
        *(ptLine + 1) =  '\0';
        nextl(inter);
    }
    
    // suppress empty lines       
    inter =  list ;
    while ( inter ) {
        if ( !strlen(Value(inter)) ) {
            PTREE   old = inter ;
            nextl(inter);
            old += inter ;
        } else 
            nextl(inter);
    }
}

/******************************************************************
       decomp : decompilation d'un arbre
   *******************************************************************/
PTREE DecompChopb::IntDecomp ( const PTREE &paramTree, int funcAlone )
{
    PTREE   ident, tree, list, son, exp1, exp2, exp, stat, param ;
    int     oldStatement = statementf ;
    PTREE   oldPostComment = postComment ;
    int     first = 1 ;
    
    switch ( paramTree ) {
        case <CHOP_DEF,ident,tree> : 
            if ( ident != () ) {
                "language " @ident ";" <NL>
                <NL,2>
            }
            @tree
            break ;
        case <PARSE_ELEM,tree> : 
            value(tree)
            break ;
        case <PARSE,list> : 
            FrameContent(list);
            paramTree == <,list>;
            "parse (";
            if ( ListLength(list) > 1 ) {
                <NL>
                    <T>
            }
            {{
                while ( (son = nextl(list)) ) {
                    @son
                    if ( list ) 
                        <NL>
                }
            }}
            
            // if it is not a mono line can print an newline       
            if ( ListLength(sontree(paramTree, 1)) > 1 ) 
                <NL>
            ")";
            break ;
        case <NODE_TREE,list> : 
            statementf = 0 ;
            "<";
            while ( list ) {
                son =  nextl(list);
                @son
                if ( list ) 
                    "," 
            }
            ">";
            break ;
        case <NIL> : 
            "()";
            break ;
        case <DEF_IDENT> : 
            "<>";
            break ;
        case <VALUE,ident> : 
            statementf = 0 ;
            "value(" @ident ")";
            break ;
        case <NEXT,ident> : 
            statementf = 0 ;
            "nextl(" @ident ")";
            if ( oldStatement ) {
                <SEPB> ";";
            }
            break ;
        case <IN_LANG,exp1,exp2> : 
            "in " @exp1 <SEPA>
            postComment = exp2 ;
            @exp2
            control_stat1(exp2);
            break ;
        case <EXPO,exp1,exp2> : 
            @exp1 <S> "**" <S> @exp2
            break ;
        case <EXPO_AFF,exp1,exp2> : 
            statementf = 0 ;
            @exp1 " **= " @exp2
            if ( oldStatement ) {
                <SEPB> ";";
            }
            break ;
        case <NODE_LIST,exp1> : 
            "... ";
            while ( exp1 != () ) {
                son =  nextl(exp1);
                @son
                if ( exp1 != () ) 
                    " || " 
            }
            break ;
        case <ARRO,exp1> : 
            statementf = 0 ;
            "@" @exp1
            break ;
        case <ALINEA,list> : 
            {{
                "{{" <NL>
                    <T> {{
                            statementf = 1 ;
                            while ( list != () ) {
                                son         =  nextl(list);
                                postComment =  son ;
                                @son
                                if ( !Sequence(son, sontree(list, 1)) ) {
                                    control_stat1(son);
                                    <NL>
                                } else 
                                    <S> 
                            }
                        }}
                "}}";
            }}
            break ;
        case <FOREACH,exp1,exp2,stat> : 
            "foreach (" @exp1 "," @exp2 ",";
            if ( stat != <COMPOUND> ) {
                <NL>
                    <T>
                Mark();
            }
            @stat
            if ( stat != <COMPOUND> ) {
                UnMark();
                <NL>
            }
            ")";
            break ;
        case <FORALLSONS,exp1,stat> : 
            "forallsons (" @exp1 ",";
            if ( stat != <COMPOUND> ) {
                <NL>
                    <T>
                Mark();
            }
            @stat
            if ( stat != <COMPOUND> ) {
                UnMark();
                <NL>
            }
            ")";
            break ;
        case <SEP_BEFORE> : 
            "<SEPB>";
            break ;
        case <SEP_AFTER> : 
            "<SEPA>";
            break ;
        case <SEP_OMIT> : 
            "<SEPO>";
            break ;
        case <NEWLINE,param> : 
            if ( param == () ) 
                "<NL>" 
            else {
                "<NL," @param ">";
            }
            oldPostComment = paramTree ;
            comm(paramTree, POST);
            <NL>
            break ;
        case <SPACE,param> : 
            if ( param == () ) 
                "<S>" 
            else {
                "<S," @param ">";
            }
            break ;
        case <TAB> : 
                <T> "<T>";
            break ;
        default : return DecompCplus::IntDecomp(paramTree, funcAlone);
    }
    statementf =  oldStatement ;
    return oldPostComment ;
}

int DecompChopb::Sequence ( PTREE tree1, PTREE tree2 )
{
    PTREE   son ;
    
    // 
    if ( !tree1 | !tree2 ) 
        return 0 ;
    
    // if there are attributes skip them            
    tree1 == <ATTRIBUTS,tree1>;
    tree2 == <ATTRIBUTS,tree2>;
    
    // the treatment            
    switch ( tree1 ) {
        case <EXP_LIST,son> : 
            if ( strcmp(value(son), "WriteString") && strcmp(value(son), "PrintString") ) 
                return 0 ;
        case <STRING_LIST> : ;
        case <STRING> : ;
        case <ARRO> : ;
        case <VALUE> : ;
        case <SPACE> : ;
        case <SEP_BEFORE> : ;
        case <SEP_AFTER> : ;
        case <SEP_OMIT> : ;
        case <TAB> : 
            switch ( tree2 ) {
                case <EXP_LIST,son> : 
                    if ( strcmp(value(son), "WriteString") && strcmp(value(son), "PrintString") ) 
                        return 0 ;
                case <STRING_LIST> : 
                case <STRING> : 
                case <ARRO> : 
                case <VALUE> : 
                case <NEWLINE> : 
                case <SPACE> : 
                case <ALINEA> : 
                case <SEP_BEFORE> : ;
                case <SEP_AFTER> : ;
                case <SEP_OMIT> : ;
                case <TAB> : 
                    return 1 ;
                    break ;
                default : return 0 ;
            }
            break ;
        case <ALINEA> : 
            if ( tree2 == <NEWLINE> ) 
                return 1 ;
            else 
                return 0 ;
        default : return DecompCplus::Sequence(tree1, tree2);
    }
}

void DecompChopb::control_stat1 ( PTREE paramTree ) /* on expression write ; <NL> */ 
{
    PTREE   exp1 ;
    
    switch ( paramTree ) {
        case <TAB> : 
            comm(paramTree, POST);
            return ;
        case <NEWLINE> : 
            comm(paramTree, POST);
            return ;
        case <ARRO> : goto terminal ;
        case <VALUE> : goto terminal ;
        case <NEXT> : goto terminal ;
        case <FOREACH> : goto terminal ;
        case <FORALLSONS> : goto terminal ;
        case <IN_LANG> : return ;
        case <SPACE> : 
        case <ALINEA> : 
        case <SEP_BEFORE> : ;
        case <SEP_AFTER> : ;
        case <SEP_OMIT> : return ;
        default : 
            DecompCplus::control_stat1(paramTree);
            return ;
    }
    <SEPB> PrintString(";");
terminal : 
    comm(paramTree, POST);
}

int DecompChopb::OpTypeAlign ( PTREE tree )
{
    PTREE   son ;
    
    switch ( tree ) {
        case <NODE_TREE> : 
        case <NODE_LIST> : 
            return LIST_ALIGN ;
            break ;
        default : return DecompCplus::OpTypeAlign(tree);
    }
}

int DecompChopb::OpType ( PTREE tree )
{
    PTREE   son ;
    
    switch ( tree ) {
        case <NODE_TREE> : 
        case <NODE_LIST> : return 0 ;
        default : return DecompCplus::OpType(tree);
    }
}

int DecompChopb::IsTop ( PTREE tree, int internal )
{
    PTREE   father, prec, son ;
    
    switch ( tree ) {
        case <EXP_LIST,son> : 
            if ( strcmp(value(son), "WriteString") && strcmp(value(son), "PrintString") ) 
                return DecompCplus::IsTop(tree, internal);
        case <STRING_LIST> : ;
        case <STRING> : 
            if ( DecompCplus::IsTop(tree, internal) == -1 ) 
                return -1 ;
        case <ARRO> : ;
        case <VALUE> : ;
        case <SPACE> : ;
        case <SEP_BEFORE> : ;
        case <SEP_AFTER> : ;
        case <SEP_OMIT> : ;
        case <TAB> : 
            father = tree ^ ;
            if ( father == <LIST,prec> ) {
                if ( Sequence(prec, tree) ) 
                    return -1 ;
                else 
                    return 300 ;
            } else 
                return 300 ;
            break ;
        default : return DecompCplus::IsTop(tree, internal);
    }
}

/********************************************************************
    TraiterSequence : traitement des suites instruction d'affichage
                      on ajoute un NL si necessaire
   *******************************************************************/
void DecompChopb::TraiterSequence ( PTREE tree )
{
    PTREE   list, son, father, list1, list2 ;
    int     x0, y0, x, y, dx, dy ;
    int     delta = 0 ;
    PTREE   sonOld ;
    ItPtree it (tree) ;
    PPTREE  _for_elem ;
    
    while ( (for_elem = it++) ) {
        switch ( for_elem ) {
            case <DECLARATION> : 
                it.SkipSon(1);
                continue ;
            case <COMPOUND> : 
            case <ALINEA> : 
                {
                    int oldX = 0 ;
                    delta =  0 ;
                    
                    // mark for_elem
                    GetCoordAbs(for_elem, (), &x0, &y0);
                    MarkCoordTree(for_elem, x0, 0);
                    
                    // add <NL>
                    for_elem == <,list>;
                    sonOld =  ();
                    while ( list ) {
                        son =  nextl(list);
                        GetCoordAbs(son, (), &x0, &y0);
                        GetCoord(son, &x, &y, &dx, &dy);
                        
                        // update current abs pos
                        if ( x0 <= oldX ) {
                            delta =  0 ;
                        }
                        oldX =  x0 ;
                        
                        // if go inside rightmargin indent
                        if ( x0 + dx + delta > rightMargin ) {
                            if ( Sequence(sonOld, son) ) {
                                list2 =  () * <NEWLINE,"1"> * <TAB,"1">;
                                PutAttr(son, list2, PRE_ATTR, PUT_BEG);
                                delta =  -x0 + TAB_VALUE(dy, 1);
                            }
                        }
                        PutCoord(son, x + delta, y, dx, dy);
                        sonOld =  son ;
                    }
                    
                    // unmark
                    UnMarkCoordTree(for_elem);
                }
                break ;
            case <PARSE,list> : 
                {
                    int overlap = 0 ;
                    while ( list ) {
                        son =  nextl(list);
                        GetCoordAbs(son, (), &x0, &y0);
                        GetCoord(son, &x, &y, &dx, &dy);
                        if ( x0 + dx > rightMargin ) {
                            overlap =  1 ;
                            break ;
                        }
                    }
                    
                    // frame content an suppress empty lines       
                    //                    for_elem ==<,list>;       
                    //                    FrameContent(list);       
                    // put parse on left if lines are too long       
                    if ( overlap ) {
                        for_elem == <,list>;
                        list1 =  () * <NEWLINE,"1"> * <GOTO,"0"> * <MARK>;
                        list2 =  () * <UNMARK>;
                        if ( !sontree(list, 2) ) {
                            replacetree(list, 1, <ATTRIBUTS,sontree(list, 1),list1,list2>);
                        } else {
                            replacetree(list, 1, <ATTRIBUTS,sontree(list, 1),list1,()>);
                            while ( sontree(list, 2) ) 
                                nextl(list);
                            replacetree(list, 1, <ATTRIBUTS,sontree(list, 1),(),list2>);
                        }
                    }
                }
        }
    }
}

/*************************************************************************/
/*   ChopTree : chop the tree : here call decomp                         */
/*************************************************************************/
void DecompChopb::ChopTree ( PTREE tree, int funcAlone )
{
    copy();
    SwitchLang("chopb");
    if ( simplifyExpression ) 
        clean_tree(tree);
    Treat(tree);
    Decomp(tree, funcAlone);
    AddRef(tree);
}

/******************************************************************
     copy : copyright ;
   *******************************************************************/
void DecompChopb::copy ()
{
    const char  *str ;
    
    str =  "\n\r Metachop prettyPrinter version 3.0, CopyRight(C) 1995-2018 Eric Lavillonniere \n\r";
    _write(2, str, strlen(str));
    str =  " C++ prettyPrinter comes with ABSOLUTELY NO WARRANTY.\n\r";
    _write(2, str, strlen(str));
    str =  " This is free software, and you are welcome to redistribute it \n\r";
    _write(2, str, strlen(str));
    str =  " under certain conditions.\n\r";
    _write(2, str, strlen(str));
    str =  " For details see file COPYING in C++ prettyPrinter directory.\n\r\n\r";
    _write(2, str, strlen(str));
}


