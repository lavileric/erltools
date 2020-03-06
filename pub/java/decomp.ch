/*************************************************************************/
/*                                                                       */
/*        Decomp.ch - Built by Eric Lavillonniere on Tandon 386 - 89    */
/*                                                                       */
/*************************************************************************/
language java;

#include "decjava.h"
#include "java.h"

#ifdef FOR_METACHOP
    PTREE   postComment ;
#endif

/**************************************************************
      Frame : frame a list of content on it's left
   ***************************************************************/
void DecompJava::FrameContent ( PTREE list )
{
    int     nb, min = 32000 ;
    PTREE   inter = list, line ;
    char    *ptLine ;
    
    return ;
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

// DecompSimpleSyntax : decompilation of a simple syntax
// parameters :
//              syntax : the syntax to be decompiled
void DecompJava::DecompSimpleSyntax ( const PTREE &syntax )
{
}

/******************************************************************
       decomp : decompilation d'un arbre
   *******************************************************************/
PTREE DecompJava::IntDecomp ( const PTREE &paramTree, int funcAlone )
{
    PTREE   ident, tree, list, son, exp1, exp2, exp, stat, param, expr, libel1, exp4, exp_list, init1 ;
    PTREE   sc, type, list_decl ;
    int     oldStatement = statementf ;
    PTREE   oldPostComment = postComment ;
    int     first = 1 ;
    PTREE   declarator ;
    PTREE   set ;
    PTREE   from ;
    PTREE   where ;
    PTREE   into ;
    PTREE   exp3 ;
    PTREE   libel ;
    PTREE   libel2 ;
    PTREE   syntax ;
    PTREE   optional ;
    PTREE   someVar ;
    PTREE   help ;
    PTREE   init ;
    PTREE   range, param_decl, ctor, exceptionList, stat1, val ;
    
    switch ( paramTree ) {
        case <BREAK,ident> : 
            "break ";
            if ( ident ) 
                @ident 
            ";";
            oldPostComment = paramTree ;
            comm(paramTree, POST);
            <NL>
            break ;
        case <CONTINUE,ident> : 
            "continue ";
            if ( ident ) 
                @ident 
            ";";
            oldPostComment = paramTree ;
            comm(paramTree, POST);
            <NL>
            break ;
        case <FUNC,sc,type,declarator,param,range,param_decl,ctor,stat,exceptionList> : 
            exp2 = ctor ;
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
                indentFuncFlag = 0 ;
                <SEPB> "(";
                
                // on autorise les () et ( a )       
                if ( param != () ) 
                    <S> 
                val = param ;
                comm(val, PRE);
                while ( param != () ) {
                    son =  nextl(param);
                    @son
                    if ( param != () ) {
                        ",";
                    }
                    <S>
                }
                ")" <SEPA>
                comm(val, POST);
                if ( range ) 
                    @range 
                comm(exp2, PRE);
                if ( exceptionList != () ) {
                    <NL,1>
                        <T> {{
                                "throws" <S>
                                DecompList(exceptionList, ",", "", 0);
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
                statementf = 0 ;
                
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
            break ;
        case <IMPLEMENTS,tree> : 
            <NL>
                <T> {{
                        "implements";
                        DecompList(tree, ",", (char *)0, 0);
                    }}
            break ;
        case <EXTENDS,tree> : 
            "extends" @tree
            break ;
        case <BASE_LIST,list> : 
            {
                bool    implements = false ;
                bool    implementsBig = false ;
                PTREE   listInter = list ;
                PTREE   elem ;
                while ( (elem = nextl(listInter)) ) 
                    if ( elem == <IMPLEMENTS> || elem.TreeArity() >= 1 && elem == <,<IMPLEMENTS>> ) 
                        implements =  true ;
                if ( 0 && implements ) {
                    <NL>
                        <T>
                    Mark();
                }
                if ( list != () ) {
                    <S>
                    while ( list != () ) {
                        son =  nextl(list);
                        @son <S>
                        if ( implements ) 
                            <NL>
                    }
                }
                if ( 0 && implements ) {
                    UnMark();
                }
            }
            break ;
        case <NEW,exp1,exp2,init,init1> : 
            if ( init ) 
                init == <,init>;
            "new";
            if ( exp1 != () ) {
                <SEPB> "(" @exp1 ")" <SEPA>
            }
            
            /* if ( exp2 != <NEW_DECLARATOR> && exp2 != <PARAM_TYPE> ) {
                             "(" <SEPA> @exp2 <SEPB> ")";
               } else*/
            @exp2
            if ( init != () || exp2 == <NEW_DECLARATOR,<>,()> && exp2 != <,<JAVA_ARRAY_TYPE>> ) {
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
            if ( init1 != () ) 
                @init1 
            break ;
        case <DECLARATION,sc,type,list_decl> : 
            {
                
                // dont put ; on class here
                int     hasPutMark = 0 ; // indicates whether we have 
                PTREE   decl ;
                PTREE   realType = type ;
                while ( realType == <RANGE_MODIFIER,<>,realType> ) 
                    ;
                
                // put a mark for unparsing          
                if ( realType == <CLASS,<>,<>,<>,exp> && exp != () ) 
                    if ( currLine > 0 ) {
                        <NL,2>
                    }
                if ( sc != () ) {
                    if ( sc == <LIST> ) {
                        while ( sc != () ) {
                            PTREE   elem ;
                            elem =  nextl(sc);
                            value(elem) <S>
                        }
                    } else 
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
                    if ( paramTree != <FOR_DECLARATION> && realType != <CLASS> && realType != <ENUM> ) 
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
                if ( paramTree != <FOR_DECLARATION> && paramTree != <TEMPLATE_DECL> && realType != <CLASS> && realType != <ENUM> ) {
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
        case <CATCH_ANSI,exp,stat> : 
            statementf = 0 ;
            if ( exp != <EXCEPT_JAVA_FINALLY> ) {
                "catch (" {{
                            <S> @exp <S>
                          }}
                ")" <S>
            } else {
                "finally" <S>
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
                } else {
                    <S>
                }
            } else {
                @stat
            }
            break ;
        case <IMPORT_DIR,exp> : 
            "import" <S> @exp ";" <NL>
            break ;
        case <PACKAGE,exp> : 
            "package" <S> @exp ";" <NL>
            break ;
        case <IMPORT_ELEM,exp1,exp2> : 
            @exp1 "." @exp2
            break ;
        case <STAR> : 
            "*";
            break ;
        case <QUALIFIED,ident,exp> : 
            @ident
            if ( exp ) {
                "." @exp
            }
            break ;
        case <TYP_ARRAY_JAVA,declarator,exp_list> : 
            "[";
            if ( exp_list != () ) 
                @exp_list 
            "]" <SEPA> @declarator
            break ;
        case <N_RSH_AFF,exp1,exp2> : 
            statementf = 0 ;
            @exp1 <S> ">>>=" <S> @exp2
            if ( oldStatement ) {
                <SEPB> ";";
            }
            break ;
        case <N_RSHI,exp1,exp2> : 
            @exp1 <S> ">>>" <S> @exp2
            break ;
        case <THROWS_DECL,exp1,exceptionList> : 
            {
                @exp1
                if ( exceptionList != () ) {
                    <NL,1>
                        <T> {{
                                "throws" <S>
                                exceptionList == <,exceptionList>;
                                DecompList(exceptionList, ",", "", 0);
                            }}
                }
            }
            break ;
        case <INSTANCEOF,exp1,exp2> : 
            @exp1 <S> "instanceof" <S> @exp2
            break ;
        case <SYNCHRONIZED_STAT,exp,stat> : 
            statementf = 0 ;
            "synchronized (" @exp ")" <S>
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
        case <STATIC_PART,stat> : 
            <NL>
            "static" <NL>
            @stat <NL>
            break ;
        case <WILDCARD_TYPE> : 
            "?";
            break ;
        case <EXTENDS_TYPE,exp1,exp2> : 
            @exp1 <S> "extends" <S> @exp2
            break ;
        case <SUPER_TYPE,exp1,exp2> : 
            @exp1 <S> "super" <S> @exp2
            break ;
        case <FOR_EXTENDED,exp1,exp2,exp3,stat> : 
            statementf = 0 ;
            "for (" {{
                        <S> @exp1 <S> @exp2 <S> ":" <S> @exp3 <S>
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
                    <NL>
                } else {
                    <S>
                }
            } else {
                @stat <NL>
            }
            break ;
        case <JAVA_ARRAY_TYPE,exp1,list> : 
            {
                PTREE   elem ;
                @exp1
                while ( list != () ) {
                    exp2 =  nextl(list);
                    "[" @exp2 "]";
                }
            }
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
            ">" <SEPA>
            break ;
        case <ENUM,ident,exp2> : 
            {
                if ( exp2 == <LIST> ) 
                    DecompCplus::IntDecomp(paramTree, funcAlone);
                else {
                    inClass =  1 ;
                    "enum";
                    if ( ident != () ) {
                        @ident <S>
                    }
                    if ( exp2 ) {
                        @exp2
                    } else {
                        <SEPB>
                    }
                }
            }
            break ;
        case <ENUM_DECLARATION_JAVA_ASS,ident,exp1> : 
            {
                @ident "(" @exp1 ")";
            }
            break ;
        case <TYP_INSTANT,exp1,exp2> : 
            @exp1 "(" @exp2 ")";
            break ;
        case <ENUM_DECLARATION_JAVA,list_decl> : 
            {
                PTREE   list1 ;
                IsVerticalDecl(list_decl);
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
                    if ( alignVert ) {
                        <NL>
                        
                        /* <T>*/
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
                                if ( list_decl != () ) 
                                    <NL>
                            }
                        }
                    }
                    
                    /*  }} */
                    if ( alignVert ) {
                        UnMark();
                    } else 
                        <SEPB> 
                }
            }
            break ;
        default : 
            {
                oldPostComment =  DecompCplus::IntDecomp(paramTree, funcAlone);
            }
    }
    statementf =  oldStatement ;
    return oldPostComment ;
}

int DecompJava::Sequence ( PTREE tree1, PTREE tree2 )
{
    PTREE   son ;
    
    // 
    if ( !tree1 | !tree2 ) 
        return 0 ;
    return DecompCplus::Sequence(tree1, tree2);
}

void DecompJava::control_stat1 ( PTREE paramTree ) /* on expression write ; <NL> */ 
{
    PTREE   exp1 ;
    
    switch ( paramTree ) {
        case <FOR_EXTENDED> : 
        case <SYNCHRONIZED_STAT> : 
            comm(paramTree, POST);
            return ;
        case <N_RSH_AFF> : goto terminal ;
        default : 
            DecompCplus::control_stat1(paramTree);
            return ;
    }
    <SEPB> PrintString(";");
terminal : 
    comm(paramTree, POST);
}

int DecompJava::OpTypeAlign ( PTREE tree )
{
    PTREE   son ;
    
    switch ( tree ) {
        case <IMPLEMENTS> : return LIST_ALIGN ;
        case <N_RSH_AFF> : return H_ALIGN ;
        case <N_RSHI> : return H_ALIGN ;
        default : return DecompCplus::OpTypeAlign(tree);
    }
}

int DecompJava::OpType ( PTREE tree )
{
    PTREE   son ;
    
    switch ( tree ) {
        case <IMPLEMENTS> : return 0 ;
        case <N_RSH_AFF> : return 100 ;
        case <N_RSHI> : return 109 ;
        default : return DecompCplus::OpType(tree);
    }
}

int DecompJava::IsTop ( PTREE tree, int internal )
{
    PTREE   father, prec, son, treeOld ;
    
    switch ( tree ) {
        case <SYNCHRONIZED_STAT> : return 7 ;
        case <AFF> : ;
        case <MUL_AFF> : ;
        case <DIV_AFF> : ;
        case <REM_AFF> : ;
        case <PLU_AFF> : ;
        case <MIN_AFF> : ;
        case <LSH_AFF> : ;
        case <RSH_AFF> : ;
        case <AND_AFF> : ;
        case <OR_AFF> : ;
        case <XOR_AFF> : ;
        case <COND_AFF> : 
        case <EXP_LIST> : 
            treeOld = tree ;
            tree    = tree ^ ;
            while ( tree ) {
                switch ( tree ) {
                    case <LABEL> : return -1 ;
                    case <DECLARATION> : return 101 ;
                    case <TYPEDEF> : return 102 ;
                    case <IF> : 
                    case <SYNCHRONIZED_STAT> : 
                    case <WHILE> : 
                    case <FOR_EXTENDED> : 
                    case <FOR> : 
                        if ( ranktree(treeOld) != 1 ) 
                            return 1 ;
                        else 
                            return -1 ;
                    case <DO> : 
                        if ( ranktree(treeOld) != 2 ) 
                            return 4 ;
                        else 
                            return -1 ;
                    case <BREAK> : return 5 ;
                    case <CONTINUE> : return 6 ;
                    case <COMPOUND> : return 7 ;
                    case <GOTO> : return -1 ;
                    case <STAT_VOID> : return 9 ;
                    case <RETURN> : return -1 ;
                    case <SWITCH> : return -1 ;
                    case <INCLUDE_DIR> : return 14 ;
                    case <IF_DIR> : 
                        if ( ranktree(treeOld) != 1 ) 
                            return 15 ;
                        else 
                            return -1 ;
                    case <IFDEF_DIR> : 
                        if ( ranktree(treeOld) != 1 ) 
                            return 16 ;
                        else 
                            return -1 ;
                    case <IFNDEF_DIR> : 
                        if ( ranktree(treeOld) != 1 ) 
                            return 17 ;
                        else 
                            return -1 ;
                    case <NO_PRETTY> : return 17 ;
                    case <AFF> : ;
                    case <MUL_AFF> : ;
                    case <DIV_AFF> : ;
                    case <REM_AFF> : ;
                    case <PLU_AFF> : ;
                    case <MIN_AFF> : ;
                    case <LSH_AFF> : ;
                    case <RSH_AFF> : ;
                    case <AND_AFF> : ;
                    case <OR_AFF> : ;
                    case <XOR_AFF> : ;
                    case <COND_AFF> : 
                    case <EXP_LIST> : return -1 ;
                    default : 
                        treeOld = tree ;
                        tree    = tree ^ ;
                }
            }
            if ( internal || IsTop(tree ^ , 1) == -1 ) 
                return 19 ;
            else 
                return -1 ;
            break ;
        default : return DecompCplus::IsTop(tree, internal);
    }
    return -1 ;
}

/********************************************************************
    TraiterSequence : traitement des suites instruction d'affichage
                      on ajoute un NL si necessaire
   *******************************************************************/
void DecompJava::TraiterSequence ( PTREE tree )
{
    PTREE   list, son, father, list1, list2 ;
    int     x0, y0, x, y, dx, dy ;
    int     delta = 0 ;
    PTREE   sonOld ;
    ItPtree it (tree) ;
    PPTREE  _for_elem ;
    
    DecompCplus::TraiterSequence(tree);
    return ;
#   if 0
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
#   endif
}

/*************************************************************************/
/*   ChopTree : chop the tree : here call decomp                         */
/*************************************************************************/
void DecompJava::ChopTree ( PTREE tree, int funcAlone )
{
    PTREE   elem ;
    PTREE   list ;
    
    // display copyright
    copy();
    
    // switch to java lang
    SwitchLang("java");
    if ( 0 && simplifyExpression ) 
        clean_tree(tree);
    
    // beautify
    Treat(tree);
    
    // decomp;
    Decomp(tree, funcAlone);
    
    // win time do not free tree
    AddRef(tree);
}

#define RIGHT_TO_LEFT 1
#define LEFT_TO_RIGHT 2

int DecompJava::OpAssociativity ( PTREE tree )
{
    switch ( tree ) {
        case <N_RSH_AFF> : return RIGHT_TO_LEFT ;
        default : return DecompCplus::OpAssociativity(tree);
    }
}

int DecompJava::OpPriority ( PTREE tree )
{
    PTREE   son ;
    
    switch ( tree ) {
        case <IMPLEMENTS> : return 12 ;
        case <N_RSH_AFF> : return 1 ;
        case <N_RSHI> : return 10 ;
        default : return DecompCplus::OpPriority(tree);
    }
}

int DecompJava::IsTopInstr ( PTREE tree )
{
    switch ( tree ) {
        case <RSH_AFF> : return 34 ;
        case <SYNCHRONIZED_STAT> : return 35 ;
        default : return DecompCplus::IsTopInstr(tree);
    }
}

/******************************************************************
     copy : copyright ;
   *******************************************************************/
void DecompJava::copy ()
{
    const char  *str ;
    
    str =  "\n\r Java prettyPrinter version 2.0, CopyRight(C) 2000 Eric Lavillonniere \n\r";
    _write(2, str, strlen(str));
    str =  " Java prettyPrinter comes with ABSOLUTELY NO WARRANTY.\n\r";
    _write(2, str, strlen(str));
    str =  " This is free software, and you are welcome to redistribute it \n\r";
    _write(2, str, strlen(str));
    str =  " under certain conditions.\n\r";
    _write(2, str, strlen(str));
    str =  " For details see file COPYING in Java prettyPrinter directory.\n\r\n\r";
    _write(2, str, strlen(str));
}


