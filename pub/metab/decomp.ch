/*************************************************************************/
/*                                                                       */
/*        Decomp.ch - Built by Eric Lavillonniere on Tandon 386 - 89    */
/*                                                                       */
/*************************************************************************/
language metab;

#include "decmetab.h"

/******************************************************************
       frame : frame asit
   *******************************************************************/
static  void Frame ( PTREE list )
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
            EString content (ptLine = value(inter)) ;
            if ( (nb = content.length()) >= min ) {
                memcpy(ptLine, (void *)(content.c_str() + min), nb - min + 1);
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

static  int voidStat ( PTREE tree )
{
    PTREE   stat ;
    
start : 
    if ( !tree ) 
        return 1 ;
    switch ( tree ) {
        case <WHILE,<>,tree> : goto start ;
        case <IF,<>,<>,stat> : 
            if ( stat ) 
                return 0 ;
            else {
                tree == <,<>,tree>;
                goto start ;
            }
        default : return 0 ;
    }
}

/******************************************************************
       decomp : internal part of tree unparsing
   *******************************************************************/
PTREE DecompMetab::IntDecomp ( const PTREE &paramTree, int funcAlone )
{
    PTREE   ident, tree, list, son, exp1, exp2, exp, stat, param ;
    PTREE   content, elem ;
    PTREE   stat1, stat2 ;
    PTREE   list1 ;
    PTREE   condition ;
    
    if ( !paramTree ) 
        return (PTREE)0 ;
    switch ( paramTree ) {
        case <LIST> : 
            list = paramTree ;
            while ( (elem = list.Nextl()) ) {
                @elem
                
                // ; is a separator and
                // don't display empty instruction at the end of
                // a list of statements
                if ( paramTree != () && paramTree != <,()> ) {
                    switch ( elem ) {
                        case <DECLARE> : 
                        case <CONSTANT> : 
                        case <SKIP> : 
                            <NL>
                            break ;
                        default : 
                            tree = paramTree ^ ;
                            if ( tree == <FUNC> ) 
                                break ;
                            if ( voidStat(elem) ) 
                                    <T> 
                            ";" <NL>
                    }
                }
            }
            break ;
        case <LANGUAGE,ident,content> : 
            "language" @ident ";" <NL,2>
            DecompList(content, ";", (char *)0, 2);
            ".";
            break ;
        case <LEXDEFINE,ident,content> : 
            "lexdefine" @ident ";" <NL>
                <T> {{
                        @content
                    }} <NL>
            "end";
            break ;
        case <DEFINE,ident,content> : 
            "define" @ident ";" <NL>
                <T> {{
                        @content
                    }} <NL>
            "end";
            break ;
        case <GLOBAL,content> : 
            "global begin" <NL>
                <T> {{
                        DecompList(content, ";", (char *)0, 1);
                    }} <NL>
            "end";
            break ;
        case <SKIP,content> : 
            "skip" <S>
            if ( (paramTree ^ ) == <LIST> ) 
                DecompList(content, ",", ";", 0);
            else 
                DecompList(content, ",", (char *)0, 0);
            break ;
        case <CONSTANT,content> : 
            "constant" <S>
            DecompList(content, ",", ";", 0);
            break ;
        case <DECLARE,content> : 
            "declare" <S>
            DecompList(content, ",", ";", 0);
            break ;
        case <TAKEL,content> : 
            "takel" <S> @content
            break ;
        case <SEEL,content> : 
            "seel" <S> @content
            break ;
        case <STOREL,content> : 
            "storel" <S> @content
            break ;
        case <RESETLEX> : 
            "resetl";
            break ;
        case <FORGET> : 
            "forgetl";
            break ;
        case <RECOVER> : 
            "recoverl";
            break ;
        case <FORGET_SYNTAXIQUE> : 
            "forget";
            break ;
        case <BREAK> : 
            "break";
            break ;
        case <RECOGNIZE_STRING> : 
            "recognize_string";
            break ;
        case <OR,exp1,exp2> : 
            @exp1 <S> "or" <S> @exp2
            break ;
        case <AND,exp1,exp2> : 
            @exp1 <S> "and" <S> @exp2
            break ;
        case <NOT,exp1> : 
            "not" <S> @exp1
            break ;
        case <COND,exp1> : 
            "(" @exp1 ")";
            break ;
        case <ASIT,content> : 
            if ( !content || ListLength(content) == 1 ) {
                "{{" <SEPA> value(content) <SEPB> "}}";
            } else {
                {{
                    "{{" <NL>
                        <T> {{
                                while ( (elem = content.Nextl()) ) {
                                    value(elem) <NL>
                                }
                            }}
                    "}}";
                }}
            }
            break ;
        case <IN,content> : 
            "in" <S> @content
            break ;
        case <SET,content> : 
            "[";
            DecompList(content, ",", "]", 0);
            break ;
        case <INTER,exp1,exp2> : 
            @exp1 ".." @exp2
            break ;
        case <TREE_ARITY,ident,exp1> : 
            @ident "[" @exp1 "]";
            break ;
        case <CHARACTER> : 
            "'" value(paramTree) "'";
            break ;
        case <STRING> : 
            "\"" value(paramTree) "\"";
            break ;
        case <NUMB> : 
        case <IDENT> : 
            value(paramTree)
            break ;
        case <RETURN,content> : 
            "return" <S> @content
            break ;
        case <STORE_COMMENT_LINE> : 
            "store_comment_line()";
            break ;
        case <REPLACETREE,list> : 
            "replacetree(";
            DecompList(list, ",", ")", 0);
            break ;
        case <ADDLIST,list> : 
            "addlist(";
            DecompList(list, ",", ")", 0);
            break ;
        case <MAKETREE,list> : 
            "maketree(";
            DecompList(list, ",", ")", 0);
            break ;
        case <EQUAL,ident,exp1> : 
            @ident <S> "=" <S> @exp1
            break ;
        case <FUNC,ident,exp1> : 
            @ident "(" @exp1 ")";
            break ;
        case <WITH_CONTEXT,ident,content> : 
            "with context" <S> @ident <S> "do" <NL>
                <T> {{
                        @content
                    }}
            break ;
        case <WITHOUT_CONTEXT,ident,content> : 
            "without context" <S> @ident <S> "do" <NL>
                <T> {{
                        @content
                    }}
            break ;
        case <IN_CONTEXT,ident> : 
            "in context" @ident
            break ;
        case <DEFAULT> : 
            "default";
            break ;
        case <TAKE,content> : 
            "take" <S> @content
            break ;
        case <SEE,content> : 
            "see" <S> @content
            break ;
        case <TOKEN,content> : 
            "#" @content
            break ;
        case <EXCLA,content> : 
            "!" @content
            break ;
        case <REPEAT,content,condition> : 
            "repeat" <NL>
                <T> {{
                        @content
                    }} <NL>
            "until" @condition
            break ;
        case <IF,condition,stat1,stat2> : 
            "if" <S> @condition <S> "then" <NL>
                <T> {{
                        @stat1
                    }}
            if ( stat2 ) {
                <NL>
                "else" <NL>
                    <T> {{
                            @stat2
                        }}
            }
            break ;
        case <WHILE,condition,content> : 
            "while" <S> @condition <S> "do" <NL>
                <T> {{
                        @content
                    }}
            break ;
        case <CASE,content> : 
            "case" <NL>
                <T> {{
                        DecompList(content, (char *)0, (char *)0, 1);
                    }} <NL>
            "end";
            break ;
        case <SWITCH,condition,content> : 
            @condition <S> ":";
            switch ( content ) {
                case <BEGIN> : 
                case <WHILE> : 
                case <CASE> : 
                case <REPEAT> : 
                case <IF> : 
                    <NL>
                        <T> {{
                                @content
                            }}
                    break ;
                default : 
                    <S> @content
            }
            break ;
        case <BEGINNING,content> : 
            "at beginning" @content
            break ;
        case <BEGIN,content> : 
            "begin" <NL>
            @content <NL>
            "end";
            break ;
        case <NIL> : 
            "()";
            break ;
        case <STRINGLEX> : 
            "stringlex";
            break ;
        case <GRAMMAR_USE,content> : 
            "use" <S> @content
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
                }
                TraitAttribut(son);
            }
            break ;
        default : 
            {
                int oldOutput = output ;
                Flush();
                output =  2 ;
                "Unknown Node";
                DumpNode((PPTREE)paramTree);
                output =  oldOutput ;
            }
    }
    return (PTREE)0 ;
}

int DecompMetab::OpTypeAlign ( PTREE tree )
{
    PTREE   son ;
    
    switch ( tree ) {
        case <CONSTANT> : 
        case <DECLARE> : 
        case <SET> : return LIST_ALIGN ;
        case <EQUAL> : return H_ALIGN ;
        case <OR> : 
        case <AND> : return V_ALIGN ;
    }
    return -9 ;
}

int DecompMetab::OpType ( PTREE tree )
{
    PTREE   son ;
    
    switch ( tree ) {
        case <LIST> : return 1000 ;
        case <CONSTANT> : 
        case <DECLARE> : 
        case <SET> : return 0 ;
        case <EQUAL> : return 1 ;
        case <OR> : return 2 ;
        case <AND> : return 3 ;
        case <REPLACETREE> : 
        case <ADDLIST> : 
        case <MAKETREE> : 
        case <FUNC> : return 4 ;
        default : return -1 ;
    }
}

int DecompMetab::IsTop ( PTREE tree, int internal )
{
    PTREE   treeOld ;
    
    switch ( tree ) {
        case <IF> : return 1 ;
        case <WHILE> : return 2 ;
        case <REPEAT> : return 3 ;
        case <BREAK> : return 5 ;
        case <BEGIN> : 
            if ( !internal && IsTop(tree ^ , 1) == -1 ) 
                return 7 ;
            else 
                return -1 ;
        case <RETURN> : return 11 ;
        case <CASE> : return 12 ;
        case <SWITCH> : return 12 ;
        case <USE> : return 14 ;
        case <ASIT> : return 50 ;
        case <EQUAL> : ;
        case <TAKE> : ;
        case <SEE> : ;
        case <TAKEL> : ;
        case <SEEL> : ;
        case <MAKETREE> : 
        case <ADDLIST> : 
        case <REPLACETREE> : 
        case <FUNC> : 
            treeOld = tree ;
            tree    = tree ^ ;
            while ( tree ) {
                switch ( tree ) {
                    case <IF> : 
                    case <WHILE> : 
                        if ( ranktree(treeOld) != 1 ) 
                            return 1 ;
                        else 
                            return -1 ;
                    case <REPEAT> : 
                        if ( ranktree(treeOld) != 2 ) 
                            return 4 ;
                        else 
                            return -1 ;
                    case <BEGIN> : return 7 ;
                    case <RETURN> : return -1 ;
                    case <CASE> : return -1 ;
                    case <EQUAL> : ;
                    case <FUNC> : return -1 ;
                    default : 
                        treeOld = tree ;
                        tree    = tree ^ ;
                }
            }
            if ( internal || IsTop(tree ^ , 1) == -1 ) 
                return 19 ;
            else 
                return -1 ;
        case <LIST> : 
        case <ATTRIBUTS> : return -1 ;
        default : return -1 ;
    }
}

/********************************************************************
       Treat : treatment of geometries
   *******************************************************************/
void DecompMetab::Treat ( PTREE tree )
{
    ItPtree it(tree, <ASIT>);
    PPTREE  _for_elem ;
    PTREE   content ;
    
    while ( (for_elem = it++) ) {
        PTREE   elem = for_elem ;
        elem == <,content>;
        if ( content && ListLength(content) > 1 ) 
            Frame(content);
    }
    clpretty::Treat(tree);
}

/********************************************************************
           TraiterGeometrie : positionne les geometries a partir
           d'un noeud jusqu'a  un noeud donne
   *******************************************************************/
int DecompMetab::TreatGeometrySpecific ( PTREE tree, int x, int x0 )
{
    PTREE   tree2 ;
    
    // treat some specific nodes 
    switch ( tree ) {
        case <REPLACETREE,tree2> : 
        case <ADDLIST,tree2> : 
        case <MAKETREE,tree2> : 
        case <FUNC,<>,tree2> : 
            TraiterExpListParam(tree2, x0 + x);
            break ;
        default : 
            {
                return 0 ;
            }
    }
    return 1 ;
}

/******************************************************************
     copy : copyright ;
   *******************************************************************/
void copy ()
{
    const char  *str ;
    
    str =  "\n\r Metalang prettyPrinter version 1.0, CopyRight(C) 1996 Eric Lavillonniere \n\r";
    _write(2, str, strlen(str));
    str =  " C++ prettyPrinter comes with ABSOLUTELY NO WARRANTY.\n\r";
    _write(2, str, strlen(str));
    str =  " This is free software, and you are welcome to redistribute it \n\r";
    _write(2, str, strlen(str));
    str =  " under certain conditions.\n\r";
    _write(2, str, strlen(str));
    str =  " For details see file COPYING in  prettyPrinter directory.\n\r\n\r";
    _write(2, str, strlen(str));
}


