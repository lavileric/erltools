// mettre commentaires
// alignements et listes
language asn;

#include "asndef.h"
#include "asn.h"
#include "decasn.h"

#ifdef inconnu
    typedef void    fastvoid ;
    typedef void    fastint ;
    PTREE   postInhibitor ;
#else 
#   define fastvoid void _fastcall
#   define fastint int _fastcall
#endif

extern fastint  GetMark () ;
extern int      isVirtMod ;
extern int      currLine ;
static int      vParse = 0 ;    // indique si on decompile un noeud parse        
extern int      currCol ;
int             xFather, yFather ;
int             maxX = 0 ;
int             printVal = 0 ;  // print the value in assignment
int             valAssign = 0 ; // in assignment

fastvoid LLNewLine ( int i )
{
    if ( currCol > maxX ) 
        maxX =  currCol ;
    LNewLine(i);
}

#define LNewLine LLNewLine

static  void DisplayOctetString ( char *string )
{
    char    content [512];
    char    *pt ;
    
    if ( !string ) 
        return ;
    while ( *string ) {
        pt    =  content ;
        *pt++ =  *string++ ;
        if ( *string ) 
            *pt++ =  *string++ ;
        if ( currCol >= rightMargin ) {
            <NL>
            "  ";
        }
        *pt =  '\0';
        PrintString(content);
    }
}

void DecompAsn::PrintStringVal ()
{
    PTREE   treeLength ;
    char    *string ;
    
    treeLength =  CompGetPointer()[2];
    string     =  CompGetVal();
    DisplayOctetString(string);
    if ( !strcmp(Value(treeLength), "80") ) {
        DisplayOctetString((char *)"0000");
    }
}

#if 0
    /******************************************************************
           mise a jour des coordonnees d'un arbre
       *******************************************************************/
    void DecompAsn::decomp_asn_virt ( PTREE paramTree, int isRefTV )
    {
        int x0, y0, x, y, dx, dy ;
        
        GetCoord(paramTree, &x, &y, &dx, &dy);
        GetCoordAbs(paramTree, 0, &x0, &y0);
        GetCoordAbs(paramTree ^ , 0, &xFather, &yFather);
        isVirtMod =  1 ;
        GotoCol(dy + 1);
        
        /* dy+1 car gotocol soustrait 1 */
        Mark();
        currCol  =  x0 ;
        currLine =  y0 ;
        maxX     =  0 ;
        decomp_asn(paramTree);
        UnMark();
        isVirtMod =  0 ;
        currLine  =  currCol = 0 ;
    }
    
#endif

void DecompAsn::DecompErrorEncoding ( PTREE tree )
{
    PTREE   list ;
    PTREE   elem ;
    
    if ( tree != <NAMED_VALUE,<>,<SEQUENCE_VALUE,list>> ) {
        <NL>
        {{
            printVal =  0 ;
            @tree <NL>
            printVal =  1 ;
            PrintString(CompGetTag()) <S> PrintString(CompGetLength()) <S>
            PrintStringVal();
        }}
    } else {
        PrintString(CompGetTag()) <S> PrintString(CompGetLength()) <NL>
        PrintString(Value(tree)) "{" <NL>
            <T> {{
                    while ( (elem = nextl(list)) ) 
                        DecompErrorEncoding(elem);
                }}
    }
}

PTREE DecompAsn::IntDecomp ( const PTREE &tree, int )
{
    PTREE   name, name1, val, val1, val2, list, list1, elem, type, exp ;
    PTREE   exp1, exp2, exp3, exp4, elem1, name2 ;
    int     oldXFather = xFather, oldYFather = yFather ;
    int     oldMaxX = maxX ;
    int     begCurrCol = currCol, begCurrLine = currLine ;
    int     theMark = GetMark();
    int     oldPrintVal = printVal ;
    
    if ( !tree ) 
        return tree ;
    
    // treat apart encoding trees with errors
    if ( printVal && CompIsError() ) {
        DecompErrorEncoding(tree);
        return tree ;
    }
    
    // standard decomp
    switch ( tree ) {
        case <LIST_MODULE,exp1> : 
            DecompList(exp1, (char *)0, (char *)0, 0);
            break ;
        case <LIST> : 
            DecompList(tree, (char *)0, (char *)0, 0);
            break ;
        case <SUBTYPE_SPEC,list> : 
            "(";
            while ( list ) {
                elem =  nextl(list);
                @elem
                if ( list ) {
                    <S> "|" <S>
                }
            }
            ")";
            break ;
        case <SEQUENCE_VALUE,list> : 
            {
                PTREE   listDefault, defaultVal ;
                int     nextInd = 0, ind = 0 ;
                if ( printVal ) {
                    <NL>
                    if ( printVal && valAssign ) {
                        
                        // the father of SEQUENCE_VALUE is a cons
                        if ( (tree ^ ) == <CONS> ) 
                            listDefault =  sontree(tree ^ , 2);
                        
                        // write tag and length only if it is a constructed value
                        if ( !CompIsSimpleValue() ) {
                            PrintString(CompGetTag()) <S> PrintString(CompGetLength()) <NL>
                        } else 
                            printVal =  0 ;
                    }
                    "{" <NL>
                        <T> {{
                                while ( list == <LIST> || listDefault || defaultVal ) {
                                debutListe : 
                                    if ( printVal && valAssign && !nextInd && listDefault ) {
                                        defaultVal =  nextl(listDefault);
                                        nextInd    =  GetLong(value(defaultVal));
                                    }
                                    ind++ ;
                                    if ( printVal && valAssign && (nextInd == ind || !list && defaultVal) ) {
                                        int oldPrintVal = printVal ;
                                        printVal =  0 ;
                                        decomp(sontree(defaultVal, 2));
                                        <NL>
                                        {{
                                            PrintString(CompGetTag()) <S> PrintString(CompGetLength()) <S>
                                            PrintStringVal();
                                        }}
                                        if ( list != () || listDefault != () ) {
                                            "," <NL>
                                        }
                                        nextInd    =  0 ;
                                        defaultVal =  ();
                                        printVal   =  oldPrintVal ;
                                        goto debutListe ;
                                    }
                                    if ( list == <LIST> ) {
                                        elem =  nextl(list);
                                        @elem
                                        if ( list || defaultVal ) {
                                            "," <NL>
                                        }
                                    }
                                }
                            }} <NL>
                    "}";
                    
                    // if it is a simple value display it now
                    if ( oldPrintVal && !printVal ) {
                        <NL>
                        PrintString(CompGetTag()) <S> PrintString(CompGetLength()) <S>
                        PrintStringVal();
                        <NL>
                    }
                } else {
                    if ( list == <LIST> && ListLength(list) >= 2 ) {
                        <NL>
                        "{" <NL>
                            <T> {{
                                    {
                                        PTREE   oldInhibitor ;
                                        PTREE   elem ;
                                        while ( (elem = nextl(list)) ) {
                                            oldInhibitor =  postInhibitor ;
                                            if ( elem == <NAMED_VALUE> ) 
                                                postInhibitor =  elem ;
                                            else 
                                                postInhibitor =  ();
                                            @elem
                                            if ( list ) {
                                                ",";
                                            }
                                            if ( postInhibitor ) {
                                                postInhibitor =  ();
                                                comm(elem, POST);
                                                postInhibitor =  oldInhibitor ;
                                            }
                                            <NL>
                                        }
                                    }
                                }} <NL>
                        "}";
                    } else {
                        
                        // mainly for object identifier values treated as
                        // sequence value
                        "{";
                        DecompList(list, ",", "", 1);
                        "}";
                    }
                }
            }
            break ;
        case <BITSTRING,list> : 
        case <INTEGER,list> : 
            switch ( tree ) {
                case <INTEGER> : 
                    "INTEGER";
                    break ;
                case <BITSTRING> : 
                    "BIT STRING";
                    break ;
            }
            if ( list ) {
                <S> "{" <S>
            }
            while ( list ) {
                elem =  nextl(list);
                @elem
                if ( list ) {
                    "," <S>
                }
            }
            tree == <,list>;
            if ( list ) {
                <S> "}";
            }
            break ;
        case <SET,list> : 
        case <SEQUENCE,list> : 
        case <CHOICE,list> : 
            switch ( tree ) {
                case <SET> : 
                    "SET";
                    break ;
                case <SEQUENCE> : 
                    "SEQUENCE";
                    break ;
                case <CHOICE> : 
                    "CHOICE";
                    break ;
            }
            <NL>
            "{"     <T> {{
                            <NL>
                            while ( list ) {
                                elem =  nextl(list);
                                @elem
                                if ( list ) {
                                    "," <NL>
                                } else 
                                    <NL>
                            }
                        }}
            "}";
            break ;
        case <COMPONENTS_ONLY,list> : 
            <NL,1>
                <T> {{
                        "WITH COMPONENTS " <NL>
                        "{"     <T> {{
                                        <NL>
                                        while ( list ) {
                                            elem =  nextl(list);
                                            @elem
                                            if ( list ) {
                                                "," <NL>
                                            } else 
                                                <NL>
                                        }
                                    }}
                        "}";
                    }}
            break ;
        case <COMPONENTS_EXCEPT,list> : 
            <NL,1>
                <T> {{
                        "WITH COMPONENTS " <NL>
                        "{...,"     <T> {{
                                            <NL>
                                            while ( list ) {
                                                elem =  nextl(list);
                                                @elem
                                                if ( list ) {
                                                    "," <NL>
                                                } else 
                                                    <NL>
                                            }
                                        }}
                        "}";
                    }}
            break ;
        case <ENUMERATED,list> : 
            "ENUMERATED" <S> "{";
            while ( list ) {
                elem =  nextl(list);
                @elem
                if ( list ) {
                    "," <S>
                }
            }
            "}";
            break ;
        case <IMPORT_LIST,exp1> : 
            "IMPORTS" <NL,2>
                <T> {{
                        DecompList(exp1, (char *)0, ";", 2);
                    }}
            break ;
        case <INSERT,val> : 
            <NL,2>
            "INSERT" @val <NL,2>
            break ;
        case <IMPORTS,list,val> : 
            
            // sort import names 
            {
                TabList listSort (list) ;
                listSort.Sort();
            }
            
            // display them
            DecompList(list, ",", (char *)0, 0);
            <NL>
            "FROM" @val
            break ;
        case <EXPORTS,list,val> : 
            
            // sort export names 
            {
                TabList listSort (list) ;
                listSort.Sort();
            }
            
            // display them
            "EXPORTS";
            DecompList(list, ",", (char *)0, 0);
            <NL>
            "FROM" @val ";" <NL>
            break ;
        case <OBJECT_IDENTIFIER_VALUE,list> : 
            "{" <S>
            DecompList(list, " ", " ", 0);
            "}";
            break ;
        case <MODULE,name,val1,list> : 
            <SEPO> @name <NL>
            "DEFINITIONS" <S> @val1 <S> "::=" <NL>
            "BEGIN" <NL,2>
                <T> {{
                        DecompList(list, (char *)0, (char *)0, 1);
                    }}
            "END";
            break ;
        case <MODULE_IDENTIFIER,name,val1> : 
            @name <S> @val1
            break ;
        case <TAGSTYLE_DEFAULT> : 
            value(tree) "TAGS";
            break ;
        case <REF_TYP,val1,name> : 
        case <REF_VALUE,val1,name> : 
            @val1 "." @name
            break ;
        case <NAMED_NUMBER,name,val> : 
        case <NAMED_BIT,name,val> : 
        case <VAL_DEF,name,val> : 
            @name "(" @val ")";
            break ;
        case <SELECTION_TYPE,name,name1> : 
            @name "<" @name1
            break ;
        case <NAMED_TYPE,name,name1> : 
            @name <S> @name1
            break ;
        case <NUMB> : 
        case <IDENT> : 
        case <TYP_IDENT> : 
            value(tree)
            if ( printVal && valAssign ) {
                <NL>
                {{
                    PrintString(CompGetTag()) <S> PrintString(CompGetLength()) <S>
                    PrintStringVal();
                }}
            }
            break ;
        case <UNIVERSAL> : 
            "UNIVERSAL";
            break ;
        case <APPLICATION> : 
            "APPLICATION";
            break ;
        case <PRIVATE> : 
            "PRIVATE";
            break ;
        case <TAGSTYLE> : 
            value(tree)
            break ;
        case <TAG,val,val1,val2> : 
            "[" @val @val1 "]" <S> @val2
            break ;
        case <UN_MINUS,val> : 
            {
                int oldValAssign = valAssign ;
                if ( printVal && valAssign ) {
                    valAssign =  0 ;
                }
                <SEPB> "-" @val
                valAssign =  oldValAssign ;
                if ( printVal && valAssign ) {
                    <NL>
                    {{
                        PrintString(CompGetTag()) <S> PrintString(CompGetLength()) <S>
                        PrintStringVal();
                    }}
                }
                break ;
            }
        case <COMPONENT,val> : 
            "WITH COMPONENT" <S> @val
            break ;
        case <OPTION,val> : 
            value(val)
            break ;
        case <MIN_VALUE> : 
            "MIN";
            break ;
        case <MIN_INFIN_VALUE> : 
            "MINUS_INFINITY";
            break ;
        case <MAX_VALUE> : 
            "MAX";
            break ;
        case <MAX_INFIN_VALUE> : 
            "PLUS_INFINITY";
            break ;
        case <GT_THAN,val> : 
            @val "<";
            break ;
        case <LT_THAN,val> : 
            "<" @val
            break ;
        case <VALUE_RANGE,val,val1> : 
            @val ".." @val1
            break ;
        case <INCLUDES,val> : 
            "INCLUDES" @val
            break ;
        case <FROM,val> : 
            "FROM" @val
            break ;
        case <SIZE,val> : 
            "SIZE" @val
            break ;
        case <SEQUENCE_OF,val,val1> : 
            "SEQUENCE" <S>
            if ( val ) {
                "(" @val ")";
            }
            <S> "OF" @val1
            break ;
        case <SET_OF,val,val1> : 
            "SET" <S> @val <S> "OF" @val1
            break ;
        case <COMPONENTS_OF,val> : 
            "COMPONENTS OF" @val
            break ;
        case <DEFAULT,val> : 
            {
                <S> "DEFAULT" <S>
                if ( val == <SEQUENCE_VALUE,()> ) {
                    "{}";
                } else 
                    @val 
            }
            break ;
        case <OPTIONAL> : 
            <S> "OPTIONAL";
            break ;
        case <ELEMENT_TYPE,val,val1> : 
            @val @val1
            break ;
        case <BOOLEAN> : 
            "BOOLEAN";
            break ;
        case <REAL_TYPE> : 
            "REAL";
            break ;
        case <OCTET_STRING> : 
            "OCTET STRING";
            break ;
        case <OBJECT_IDENTIFIER> : 
            "OBJECT IDENTIFIER";
            break ;
        case <TOP_ENTRY> : 
            "topEntry";
            break ;
        case <VAL_ASSIGN_PROG,val,exp,type> : 
            {
                int     theValAssign, compIsSimple = 0 ;
                Coding  res (exp) ;
                theValAssign =  1 ;
                printVal     =  1 ;
                CompMemorize(&res);
                if ( (compIsSimple = CompIsSimpleValue()) ) {
                    theValAssign =  0 ;
                }
                val == <NAMED_VALUE,name,val>;
                @name <S>
                if ( type == <TYP_ASSIGN> ) 
                    PrintString(Value(type)) 
                else 
                    decomp(type);
                <S> "::=" <S>
                valAssign =  theValAssign ;
                @val ";";
                if ( compIsSimple ) {
                    <NL>
                    {{
                        PrintString(CompGetTag()) <S> PrintString(CompGetLength()) <S>
                        PrintStringVal();
                    }}
                }
                valAssign =  0 ;
                break ;
            }
        case <VAL_ASSIGN,name,type,val> : 
            {
                int theValAssign, compIsSimple = 0 ;
                theValAssign =  1 ;
                if ( printVal ) {
                    CompMemorize(EncodeValue(type, val));
                    if ( (compIsSimple = CompIsSimpleValue()) ) {
                        theValAssign =  0 ;
                    }
                }
                @name <S> @type <S> "::=" <S>
                valAssign     =  theValAssign ;
                postInhibitor =  val ;
                @val ";";
                postInhibitor =  ();
                comm(val, POST);
#               if 0
                    if ( printVal ) 
                        CompForget();
#               endif
                if ( compIsSimple ) {
                    <NL>
                    {{
                        PrintString(CompGetTag()) <S> PrintString(CompGetLength()) <S>
                        PrintStringVal();
                    }}
                }
                valAssign =  0 ;
                <NL,2>
                break ;
            }
        case <TYP_ASSIGN,name,val> : 
            @name <S> "::=" <S> @val ";" <NL,2>
            break ;
        case <ANY_TYPE,val> : 
            "ANY";
            if ( val ) {
                "DEFINED BY" <S> @val
            }
            break ;
        case <CHARACTER,val> : 
            value(val)
            break ;
        case <GENERALIZED_TIME> : 
            "GeneralizedTime";
            break ;
        case <UTC_TIME> : 
            "UTCTime";
            break ;
        case <EXTERNAL> : 
            "EXTERNAL";
            break ;
        case <OBJECT_DESCRIPTOR> : 
            "ObjectDescriptor";
            break ;
        case <TYP,val /*tag*/ ,type,val1 /*subtypespec*/ > : 
            @val <S>
#           if 0
                elem =  tree ^ ;
                if ( elem != <TYP_ASSIGN> ) {
                    {{
                        @type
                    }}
                } else 
                    @type 
#           endif
            @type
            if ( val1 ) {
                <S> @val1
            }
            break ;
        case <REAL,val,val1,val2> : 
            if ( val1 ) 
                "{" 
            @val
            if ( val1 ) {
                "," <S> @val1 "," <S> @val2
            }
            if ( val1 ) 
                "}" 
            if ( printVal && valAssign ) {
                <NL>
                {{
                    PrintString(CompGetTag()) <S> PrintString(CompGetLength()) <S>
                    PrintStringVal();
                }}
            }
            break ;
        case <BSTRING> : 
            <SEPB> "'" value(tree) "'B";
            if ( printVal && valAssign ) {
                <NL>
                {{
                    PrintString(CompGetTag()) <S> PrintString(CompGetLength()) <S>
                    PrintStringVal();
                }}
            }
            break ;
        case <HSTRING> : 
            <SEPB> "'" value(tree) "'H";
            if ( printVal && valAssign ) {
                <NL>
                {{
                    PrintString(CompGetTag()) <S> PrintString(CompGetLength()) <S>
                    PrintStringVal();
                }}
            }
            break ;
        case <TERM_TREE> : 
            value(tree)
            break ;
        case <ANY_VALUE,val,val1> : 
        case <NAMED_VALUE,val,val1> : 
            {
                int oldValAssign = valAssign ;
                int isSimple = 0 ;
                if ( printVal && valAssign && (isSimple = CompIsSimpleValue()) ) {
                    valAssign =  0 ;
                }
                
                // protect the ident of the named value
                if ( valAssign != 0 ) {
                    valAssign =  0 ;
                    @val
                    valAssign =  1 ;
                } else {
                    @val
                }
                <S>
                if ( IsComm(val1, PRE) ) {
                    <NL>
                        <T>
                    Mark();
                }
                @val1
                if ( IsComm(val1, PRE) ) {
                    <NL>
                    UnMark();
                }
                valAssign =  oldValAssign ;
                if ( isSimple ) {
                    <NL>
                    {{
                        PrintString(CompGetTag()) <S> PrintString(CompGetLength()) <S>
                        PrintStringVal();
                    }}
                }
            }
            break ;
        case <TRUE> : 
            if ( printVal && valAssign ) {
                <NL>
                {{
                    PrintString(CompGetTag()) <S> PrintString(CompGetLength()) <S>
                    PrintStringVal();
                }}
            }
            "TRUE";
            break ;
        case <FALSE> : 
            "FALSE";
            if ( printVal && valAssign ) {
                <NL>
                {{
                    PrintString(CompGetTag()) <S> PrintString(CompGetLength()) <S>
                    PrintStringVal();
                }}
            }
            break ;
        case <NULL_TYPE> : 
        case <NULL_VALUE> : 
            "NULL";
            break ;
        case <STRING,val> : 
            "\"" @val "\"";
            if ( printVal && valAssign ) {
                <NL>
                {{
                    PrintString(CompGetTag()) <S> PrintString(CompGetLength()) <S>
                    PrintStringVal();
                }}
            }
            break ;
        case <INNER,val,val1,val2> : 
            @val @val1 @val2
            break ;
        case <CONS,val1,val2> : 
            @val1
            break ;
        case <INCLUDE_DIR,name> : 
            gotocol(0);
            "#include ";
            if ( name == <STRING> ) 
                @name 
            else {
                "<" value(name) ">";
            }
            <NL>
            break ;
        case <TAGCLASS> : 
            value(tree)
            break ;
        case <ATTRIBUTS,exp,list,list1> : 
            while ( (val = nextl(list)) ) {
                TraitAttribut(val);
            }
            @exp
            while ( list1 != () ) {
                val =  nextl(list1);
                if ( val == <NEWLINE> ) {
                } /* comm(paramTree, POST);
                     oldPostComment = paramTree ; */ 
                TraitAttribut(val);
            }
            break ;
        default : 
            {
                char    string [50];
                sprintf(string, "Unknown %d\n", NumberTree(tree));
                _write(2, string, strlen(string));
            }
            {
                int initOutput = output ;
                output =  2 ;
                DumpTree(tree);
                output =  initOutput ;
            }
    }
    printVal =  oldPrintVal ;
    return (PTREE)0 ;
}

// parser entry for chopb as a C prog for a whole prog
static  PPTREE getTree ( int error_free )
{
    return asn().program(error_free);
}

// look if a module is allready loaded
PTREE   nameModule = (PTREE)0 ;

int AllReadyLoaded ( PPTREE tree )
{
    PTREE   name = SonTree(tree, 1);
    PTREE   elem, list = nameModule ;
    
    if ( !name ) 
        return 1 ;
    
    // if it is in list, it is allready loaded
    while ( (elem = nextl(list)) ) {
        if ( qcomparetree(name, elem) ) 
            return 1 ;
    }
    
    // if didn't see module insert it in list
    {
        nameModule *= copytree(name);
        return 0 ;
    }
}

extern int  prettyPrint ;

PPTREE ParserAsn::ReadInclude ( const char *name, int here, bool tree )
{
    
    // if prettyprinting don't loaded include files
    if ( prettyPrint ) 
        return (PPTREE)0 ;
    
    // read included file
    return Parser::ReadInclude(name, here, tree);
}


