/*************************************************************************/
/*                                                                       */
/*        Dorion.dec - Built by Eric Lavillonniere on Tandon 386 - 89    */
/*                                                                       */
/*************************************************************************/
language metachop;

#include "decmetac.h"

int         statementf, equality, caseDesign, simpleCase, ifCase, condDesign, condCase ;
char        *ptEquality, *ptCase, *ptCond ;
extern int  warningOk ;
extern int  indentFunctionType, ansiMode ;
extern int  nbVerify ;
extern int  output ;
extern char *theLanguageName ;
void        printheader (PTREE) ;
static int  typ_list_ok = 1 ;
extern int  needInter ;
extern int  cplusGen ;
char        *DecToIdent (PTREE) ;
char        tabLabel [100], *ptTab, *nameDefine ;
char        stringNumb [200];
int         inFunction = 0 ; /* tell if we are unparsing a function */ 
int         inParam = 0 ;    /* we are decompiling parameters of a function */ 
int         nbLabel, nb_par_parse ;
/******************************************************************
       decomp : decompilation d'un arbre
   *******************************************************************/
char        *theLanguage ;
void        lstat_dec1 (PTREE) ;
void        DecompStat (PTREE, int) ;

// EL 19/08/00 to remove global array in mthread
int         storeValMax ;
int         retValMax ;
int         stackTreeMax ;
extern bool theConstructorDump ;

#ifdef FOR_METACHOP
    PTREE   postComment ;
#endif

extern char *theFileName ;
extern int  compiledLine ;

#if 0
    static  int SearchPos ( PTREE tree, int *line, int *col )
    {
        forallsons (tree,
            if ( SearchPos(for_elem, line, col) ) {
                return 1 ;
            }
        )
        if ( GetStartPos(tree, line, col) || GetEndPos(tree, line, col) ) 
            return 1 ;
        return 0 ;
    }
    
#endif

static  inline void WRITE_START_LINE ( PTREE tree )
{
    int     line = compiledLine, col ;
    char    string [10];
    PTREE   father ;
    
#   if 0
        if ( !GetStartPos(tree, &line, &col) ) {
            SearchPos(tree, &line, &col);
        }
#   else 
        SearchPos(tree, &line, &col);
#   endif
    {
        LNewLine(1);
        gotocol(1);
        WriteString("#line ");
        sprintf(string, "%d ", line);
        WriteString(string) WriteString("\"") WriteString(theFileName) WriteString("\"");
        LNewLine(1);
        compiledLine =  line ;
    }
}

static  inline void WRITE_STOP_LINE ( PTREE tree )
{
    int     line = compiledLine, col ;
    char    string [10];
    PTREE   father ;
    
    GetEndPos(tree, &line, &col);
    {
        LNewLine(1);
        gotocol(1);
        WriteString("#line ");
        sprintf(string, "%d ", line);
        WriteString(string) WriteString("\"") WriteString(theFileName) WriteString("\"");
        LNewLine(1);
        compiledLine =  line ;
    }
}

#include "newline.h"

#if 0
    static  inline void CNewLine ()
    {
        char    string [10];
        
        LNewLine(1);
        if ( compiledLine ) {
            gotocol(1);
            WriteString("#line ");
            sprintf(string, "%d ", compiledLine);
            WriteString(string) WriteString("\"") WriteString(theFileName) WriteString("\"");
            LNewLine(1);
        }
    }
    
    static  inline void CLNewLine ( int i )
    {
        char    string [10];
        
        LNewLine(1);
        if ( compiledLine ) {
            gotocol(1);
            WriteString("#line ");
            sprintf(string, "%d ", compiledLine);
            WriteString(string) WriteString("\"") WriteString(theFileName) WriteString("\"");
            LNewLine(i);
        }
    }
    
#   define NewLine CNewLine
#   define LNewLine CLNewLine
#endif

PTREE DecompMetachop::DecompFunction ( PTREE paramTree, int funcAlone )
{
    PTREE   sc, type, declarator, param, range, param_decl, ctor, stat, exp ;
    PTREE   tree, stat1, val, exp2, exp1, son ;
    
    paramTree == <FUNC,sc,type,declarator,param,range,param_decl,ctor,stat>;
    exp2 =  ctor ;
    if ( ctor ) 
        ctor == <,ctor>;
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
        <SEPB> "(";
        
        // on autorise les () et ( a )       
        if ( param != () ) 
            <S> 
        val =  param ;
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
        
        // si on est pas dans le cas {} on met un newline       
        stat == <,stat1>;
        if ( stat1 != () || param_decl != () ) 
            <NL,1>
        @stat
        
        // sauf dans class passe une ligne blanche   
        if ( funcAlone ) 
            <NL>
        else if ( !LastInList(paramTree) ) {
            if ( !inClass || stat1 != () ) {
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
    return postComment ;
}

static  void DisplayAnchor ()
{
    EString workName = theFileName ;
    char    *dotPos = strchr((char *)(workName.c_str()), '.');
    
    if ( dotPos ) 
        *dotPos =  '\0';
    WRITE_START_LINE(PTREE(0));
    "static void " PrintString(workName) <SEPO> "_Anchor () { int i = 1;} " <NL>
}

PTREE DecompMetachop::IntDecomp ( const PTREE &paramTree, int funcAlone )
{
    PTREE   ident, tree, list, son, exp1, exp2, exp, stat, param ;
    PTREE   decl, sc, type, list_decl, name1, ident1, declarator, param_decl ;
    PTREE   stat1, stat2, exp3, val, range, ctor ;
    int     oldStatement = statementf, oldEquality = equality, oldIfCase = ifCase ;
    int     oldCaseDesign = caseDesign, oldSimpleCase = simpleCase ;
    int     oldCondCase = condCase, oldCondDesign = condDesign ;
    char    *oldPtCase ;
    char    *interString ;
    int     i, inDiff = 0 ;
    PTREE   oldPostComment = postComment ;
    int     first = 1 ;
    int     oneInstruct ;
    
    switch ( paramTree ) {
        case <CHOP_DEF,ident,list> : 
            WRITE_START_LINE(paramTree);
            warningOk       = 0 ;
            
            /* do not verify if variables are used */
            theLanguageName = AllocString(Value(ident));
            SwitchLang(theLanguageName);
            printheader(ident);
            
            /* for the foreach */
            decl = parse (
                                {
                #ifndef for_elem
                #define for_elem _for_elem
                #endif
                #ifdef INCONNU
                PTREE for_elem ;
                #endif
                                }
            );
            decl == <,decl>;
            @decl @list
            _write(2, "\n", 1);
            WRITE_STOP_LINE(paramTree);
            DisplayAnchor();
            break ;
        case <DECLARATION,sc,type,list_decl> : 
            if ( type == <TIDENT,<IDENT,"PTREE">> ) {
                int hasPutMark = 0 ; // indicates whether we have    
                                     // put a mark for unparsing  
                int isExtern = 0 ;
                if ( sc != () ) {
                    if ( !strcmp(Value(sc), "extern") ) 
                        isExtern =  1 ;
                    value(sc)
                }
                {
                    @type
                    
                    // s'il n'y a pas de list_decl
                    // il ne faut pas laisser sinon creation
                    // d'un blanc avec le <SEPB> qui precede le ;
                    if ( list_decl != () ) {
                        <SEPA>
                    }
                        <T>
                }
                while ( list_decl != () ) {
                    
                    // put a mark before first declaration
                    if ( !hasPutMark ) {
                        Mark();
                        hasPutMark =  1 ;
                    }
                    decl =  nextl(list_decl);
                    @decl
                    InsertDecElem(AllocString(value(decl)));
                    if ( !inFunction ) 
                        SetUse(value(decl));
                    if ( list_decl != () ) {
                        "," <S>
                    }
                }
                if ( hasPutMark ) 
                    UnMark();
                <SEPB> ";";
                
                // decomp postcomment before newLine
                comm(paramTree, POST);
                oldPostComment =  paramTree ;
                
                // if we have have an attribute put also NL
                // in traitStruct
                exp            =  paramTree ^ ;
                if ( (paramTree ^ ) != <ATTRIBUTS> ) {
                    if ( !LastInTopList(paramTree) ) {
                        <NL>
                    }
                }
            } else 
                return DecompCplus::IntDecomp(paramTree, funcAlone);
            break ;
        case <DECLARATOR,type,decl> : 
            {
                
                // EL the 06/07/97 skip range_modifier
                PTREE   internType ;
                internType =  type ;
                while ( internType == <RANGE_MODIFIER,<>,internType> ) 
                    ;
                if ( internType == <TIDENT,<IDENT,"PTREE">> ) {
                    @type
                    if ( decl != () ) {
                        @decl
                        InsertDecElem(AllocString(value(decl)));
                    }
                } else 
                    return DecompCplus::IntDecomp(paramTree, funcAlone);
            }
            break ;
        case <FUNC,sc,type,declarator,param,range,param_decl,ctor,stat> : 
            {
                
                // EL 19/08/00 to remove global array in mthread
                storeValMax        =  0 ;
                retValMax          =  0 ;
                stackTreeMax       =  0 ;
                theConstructorDump =  false ;
                bool    first = true ;
                int     i = 2 ;
                WRITE_START_LINE(paramTree);
                PTREE   oldParamTree = CopyTree(paramTree);
                PTREE   funcTree = paramTree ;
                int     oldLine ;
                int     oldCompiledLine ;
                
                // decomp function
                while ( i-- ) {
                    if ( first ) {
                        isVirtMod       =  true ;
                        first           =  false ;
                        oldLine         =  line ;
                        oldCompiledLine =  compiledLine ;
                    } else {
                        isVirtMod =  false ;
                        funcTree  =  oldParamTree ;
                        funcTree == <FUNC,sc,type,declarator,param,range,param_decl,ctor,stat>;
                        
                        // add declarations to statement block
                        PTREE   decl ;
                        PTREE   num ;
                        PTREE   list ;
                        if ( stat == <COMPOUND,list> ) {
                            decl =  parse (int _nextVal;);
                            list =  <LIST,decl,list>;
                            if ( storeValMax > 0 ) {
                                decl =  parse (PPTREE _storeVal [$(<INTEGER,PTREE(CompactItoa(storeValMax+1))>)];);
                                list =  <LIST,decl,list>;
                            }
                            if ( retValMax > 0 ) {
                                decl =  parse (int _retVal [$(<INTEGER,PTREE(CompactItoa(retValMax+1))>)];);
                                list =  <LIST,decl,list>;
                            }
                            if ( theConstructorDump ) {
                                decl =  parse (PPTREE  stackTree [1024];);
                                list =  <LIST,decl,list>;
                                decl =  parse (int ptStackTree;);
                                list =  <LIST,decl,list>;
                            }
                            stat += <,list>;
                        }
                        line         =  oldLine ;
                        compiledLine =  oldCompiledLine ;
                    }
                    dec_function(funcTree, sc, type, declarator, param, param_decl, stat);
                    postComment =  DecompFunction(funcTree, funcAlone);
                    DumpFunction();
                    FuncFree();
                    if ( nameDefine ) {
                        free(nameDefine);
                        nameDefine =  0 ;
                    }
                }
                inFunction =  0 ;
            }
            break ;
        case <AFF,exp1,exp2> : 
            statementf = 0 ;
            if ( !(exp1 == <IDENT> && IsDecDecElem(value(exp1))) ) {
                
                // must be transparent for oldStatement
                statementf =  oldStatement ;
                return DecompCplus::IntDecomp(paramTree, funcAlone);
            } else if ( exp2 == <PARSE,son> ) {
                son == <,name1,son>;
                {
                    MakeTreeGenDir(son, interString = AllocString(value(exp1)), 0);
                    free(interString);
                }
            } else {
                if ( ToSwitcher(exp2) ) {
                    SwitcherTop(paramTree, interString = AllocString(value(exp1)), 0);
                    free(interString);
                } else if ( exp2 == <NIL> ) {
                    @exp1 " = (PPTREE) 0 ";
                    if ( oldStatement ) {
                        ";" <NL>
                    }
                } else {
                    statementf =  0 ;
                    if ( strcmp(value(exp1), "for_elem") ) {
                        "(" @exp1 "=" @exp2 ")";
                    } else {
                        
                        // must be transparent for oldStatement
                        statementf =  oldStatement ;
                        return DecompCplus::IntDecomp(paramTree, funcAlone);
                    }
                    if ( oldStatement /* && !match(exp2,<AFF>)*/ ) {
                        ";" <NL>
                    }
                }
            }
            break ;
        case <MUL_AFF,exp1,exp2> : 
            statementf = 0 ;
            if ( !(exp1 == <IDENT> && IsDecDecElem(value(exp1))) ) {
                
                // must be transparent for oldStatement
                statementf =  oldStatement ;
                return DecompCplus::IntDecomp(paramTree, funcAlone);
            } else 
                SwitcherTop(paramTree, (char *)0, 0);
            break ;
        case <EXPO_AFF,exp1,exp2> : 
            statementf = 0 ;
            SwitcherTop(paramTree, (char *)0, 0);
            break ;
        case <PLU_AFF,exp1,exp2> : 
            statementf = 0 ;
            if ( !(exp1 == <IDENT> && IsDecDecElem(value(exp1))) ) {
                
                // must be transparent for oldStatement
                statementf =  oldStatement ;
                return DecompCplus::IntDecomp(paramTree, funcAlone);
            } else 
                SwitcherTop(paramTree, (char *)0, 0);
            break ;
        case <LXOR,exp1,exp2> : 
            exp = exp1 ;
            while ( exp == <LXOR,exp> || exp == <EXP,exp> ) 
                ;
            if ( exp2 && !(exp == <IDENT> && IsDecDecElem(value(exp))) ) {
                return DecompCplus::IntDecomp(paramTree, funcAlone);
            } else {
                if ( exp2 == <INTEGER> || exp2 == <NEG> ) {
                    "NFatherTree(" @exp1 "," @exp2 ")";
                } else if ( exp2 == <NODE_TREE> || exp2 == <NOT> ) {
                    "SFatherTree(" @exp1 ",";
                    if ( exp2 == <NOT> ) 
                        "-1 -" 
                    PTREE   son ;
                    exp2 == <,<,son>>;
                    if ( son == <QUALIFIED> ) {
                        WriteString(Value(son [1])) WriteString("::") WriteString(Value(son [2]));
                    } else {
                        if ( cplusGen ) {
                            WriteString(NameOfNodePlus(Value(exp2)));
                        } else {
                            WriteString(NameOfNode(Value(exp2)));
                        }
                    }
                    ")";
                } else if ( !exp2 ) {
                    "FatherTree(" @exp1 ")";
                }
            }
            break ;
        case <EQU,exp1,exp2> : 
            param = exp2 ;
            while ( param == <EXP,param> ) 
                ;
            while ( exp1 == <EXP,exp1> ) 
                ;
            while ( param == <PLU_AFF,param> || param == <EXPO_AFF,<>,param> || param == <MUL_AFF,<>,param> || param == <AFF,<>,param> ) 
                ;
            if ( !(param == <NODE_TREE> || param == <NIL> || param == <NODE_LIST>) ) {
                return DecompCplus::IntDecomp(paramTree, funcAlone);
            } else {
                paramTree == <,ident,stat>;
                while ( ident == <EXP,ident> ) 
                    ;
                goto test ;
            }
            break ;
        case <NEQU,exp1,exp2> : 
            inDiff = 1 ;
            param  = exp2 ;
            while ( param == <EXP,param> ) 
                ;
            while ( exp1 == <EXP,exp1> ) 
                ;
            while ( param == <PLU_AFF,param> || param == <EXPO_AFF,param> || param == <MUL_AFF,param> || param == <AFF,param> ) 
                ;
            if ( !(param == <NODE_TREE> || param == <NIL> || param == <NODE_LIST>) ) {
                return DecompCplus::IntDecomp(paramTree, funcAlone);
            } else {
                paramTree == <,ident,stat>;
                while ( ident == <EXP,ident> ) 
                    ;
                goto test ;
            }
            break ;
        test : 
            condDesign = 1 ;
            i = 0 ;
            switch ( ident ) {
                case <LXOR> : 
                    "( _inter = " <NL>
                        <T> @ident ",";
                    ptCond = AllocString("_inter");
                    break ;
                case <IDENT> : 
                    ptCond = AllocString(value(ident));
                    break ;
                default : 
                    ptCond = AllocString("");
                    break ;
            }
            if ( stat == <IDENT,ident1> ) {
                if ( inDiff ) 
                    "!" 
                value(ident1) " = " WriteString(ptCond);
            } else {
                while ( stat == <EXP,stat> ) 
                    ;
                if ( inDiff ) {
                    i =  1 ;
                    "!(";
                }
                if ( stat == <AFF,ident1,stat> ) {
                    if ( !i ) {
                        i =  1 ;
                        "(";
                    }
                } else 
                    ident1 =  (PTREE)0 ;
                @stat
                if ( ident1 ) {
                    "&& (" value(ident1) " = " WriteString(ptCond) ")";
                }
                if ( i ) 
                    ")" 
            }
            condDesign = 0 ;
            if ( ident == <LXOR> ) 
                ")" 
            if ( statementf ) {
                ";" <NL>
            }
            free(ptCond);
            break ;
        case <COMPOUND,list> : 
            if ( ansiMode && list != () ) 
                <NL>
            <SEPB> "{";
            if ( !statementf && needInter ) {
                <NL>
                    <T> "register PPTREE _inter ;" <NL>
            }
            if ( list != () ) {
                <NL>
                    <T> {{
                            statementf =  1 ;
                            while ( list != () ) {
                                son         =  nextl(list);
                                postComment =  son ;
                                postComment == <ATTRIBUTS,postComment>;
                                WRITE_START_LINE(son);
                                DecompStat(son, 1);
                            }
                        }}
            }
            WRITE_STOP_LINE(paramTree);
            "}" <SEPA>
            break ;
        case <DO,stat,exp> : 
            "do";
            if ( stat != <COMPOUND> ) {
                if ( stat != <STAT_VOID> ) {
                    <NL>
                        <T>
                }
                postComment =  stat ;
                WRITE_START_LINE(stat);
                DecompStat(stat, 1);
            } else {
                <S> @stat <S>
            }
            statementf = 0 ;
            WRITE_START_LINE(exp);
            "while (" <S> @exp <S> ");";
            statementf = 1 ;
            <NL>
            break ;
        case <FOR,exp1,exp2,exp3,stat> : 
            WRITE_START_LINE(paramTree);
            statementf = 0 ;
            if ( exp1 != <ALL_OF> ) {
                "for (";
                if ( exp1 != () ) {
                    <S> @exp1 <S>
                }
                ";";
                if ( exp2 != () ) {
                    <S> @exp2 <S>
                }
                ";";
                if ( exp2 != () ) {
                    <S> @exp3 <S>
                }
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
                            WRITE_START_LINE(stat);
                            DecompStat(stat, 1);
                        }}
            } else {
                @stat <NL>
            }
            break ;
        case <LABEL,ident,stat> : 
            postComment = stat ;
            UnMark();
            value(ident) <S> ":" <S> <NL>
                <T>
            Mark();
            {{
                WRITE_START_LINE(stat);
                DecompStat(stat, 0);
            }}
            break ;
        case <IF,exp,stat1,stat2> : 
            statementf = 0 ;
            "if (" <S> @exp <S> ")" <S>
            statementf = 1 ;
            oldPtCase  = ptCond ;
            
            /* for switch */
            if ( stat1 != <COMPOUND> ) {
                postComment =  stat1 ;
                <NL>
                    <T> {{
                            WRITE_START_LINE(stat1);
                            DecompStat(stat1, 0);
                        }}
            } else 
                @stat1 
            ptCond = oldPtCase ;
            
            /* for switch  */
            if ( stat2 != () ) {
                if ( stat1 != <COMPOUND> || ansiMode ) 
                    <NL>
                else 
                    <S> 
                "else" <S>
                if ( ansiMode ) 
                    <NL>
                if ( stat2 != <COMPOUND> && stat2 != <IF> ) {
                    postComment =  stat2 ;
                    <NL>
                        <T> {{
                                WRITE_START_LINE(stat2);
                                DecompStat(stat2, 1);
                            }}
                } else {
                    postComment =  stat2 ;
                    WRITE_START_LINE(stat2);
                    @stat2
                    control_stat1(stat2);
                }
            }
            break ;
        case <SWITCH,exp,list> : 
            param      = paramTree ;
            statementf = 0 ;
            if ( exp != <IDENT> || !IsDecDecElem(value(exp)) ) {
                "switch (" <S> @exp <S> ")" <S>
                if ( ansiMode ) 
                    <NL>
                "{" <NL>
                statementf =  1 ;
                    <T> {{
                            while ( list != () ) {
                                son =  nextl(list);
                                WRITE_START_LINE(son);
                                if ( son == <DEFAULT,stat> ) {
                                    "default :" <S>
                                } else {
                                    statementf =  0 ;
                                    son == <,exp,stat>;
                                    "case " @exp <S> ":" <S>
                                    statementf =  1 ;
                                }
                                
                                // look if there is only one instruct after        
                                // the case in this case don't put a newline        
                                if ( !sontree(stat, 2) ) {
                                    son =  sontree(stat, 1);
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
                                        case <NO_PRETTY> : 
                                        case <ATTRIBUTS> : 
                                        case <EXCEPTION> : 
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
                                        <T>
                                }
                                {{
                                    while ( stat != () ) {
                                        son         =  nextl(stat);
                                        postComment =  son ;
                                        WRITE_START_LINE(son);
                                        DecompStat(son, 1);
                                    }
                                }}
                            }
                        }}
                "}" <NL>
            } else {
                int i = classify_case(paramTree);
                ifCase =  i - 1 ;
                
                /* ifCase = 1 : display as a if  */
                ident  =  exp ;
                if ( ptCase ) 
                    free(ptCase);
                ptCase =  AllocString(value(ident));
                ptCond =  ptCase ;
                exp    =  switch_body(list);
                @exp
                
                /* FreeTree(exp)  */
                // be careful could be an inside call
                // therefore put 0 when freed
                if ( ptCase ) 
                    free(ptCase);
                ptCase =  (char *)0 ;
                param  += <,<>,()> /* in order not to free it again */ ;
            }
            break ;
        case <WHILE,exp,stat> : 
            statementf = 0 ;
            "while (" <S> @exp <S> ")" <S>
            statementf = 1 ;
            if ( stat != <COMPOUND> ) {
                postComment =  stat ;
                <NL>
                    <T> {{
                            WRITE_START_LINE(stat);
                            DecompStat(stat, 0);
                        }}
            } else {
                @stat
            }
            break ;
        case <IFDEF_DIR,exp,stat1,stat2> : 
        case <IFNDEF_DIR,exp,stat1,stat2> : 
        case <IF_DIR,exp,stat1,stat2> : 
            gotocol(0);
            switch ( paramTree ) {
                case <IFDEF_DIR> : 
                    "#ifdef ";
                    break ;
                case <IFNDEF_DIR> : 
                    "#ifndef ";
                    break ;
                case <IF_DIR> : 
                    "#if ";
                    break ;
            }
            @exp <NL>
            while ( stat1 != () ) {
                son         =  nextl(stat1);
                postComment =  son ;
                WRITE_START_LINE(son);
                DecompStat(son, 1);
            }
            follow_if_dir(stat2, paramTree);
            break ;
        case <SEP_BEFORE> : 
            "SepBefore();" <NL>
            break ;
        case <SEP_AFTER> : 
            "SepAfter();" <NL>
            break ;
        case <SEP_OMIT> : 
            "NoSep();" <NL>
            break ;
        case <TAB,val> : 
            if ( val == () ) {
                "Tab();" <NL>
            } else {
                "NTab(" @val ");" <NL>
            }
            break ;
        case <SPACE,val> : 
            if ( val == () ) {
                "Space(1);" <NL>
            } else {
                "Space(" @val ");" <NL>
            }
            break ;
        case <NEWLINE,param> : 
            if ( !param ) {
                "LNewLine(1);" <NL>
            } else {
                "LNewLine(" @param ");" <NL>
            }
            break ;
        case <NODE_TREE> : 
            node(paramTree);
            break ;
        case <NODE_LIST> : 
            node(paramTree);
            break ;
        case <NIL> : 
            "(!" WriteString(ptCond) ")";
            break ;
        case <ARRO,ident> : 
            if ( statementf ) {
                "decomp(" @ident ");" <NL>
            } else 
                @ident 
            break ;
        case <VALUE,ident> : 
            if ( statementf ) {
                "DumpBrainyValue(" value(ident) ");" <NL>
            } else {
                "BrainyValue(" value(ident) ")";
            }
            break ;
        case <ALINEA,list> : 
            "Mark();" <NL>
            lstat_dec1(list);
            "UnMark();" <NL>
            break ;
        case <BOX,list> : 
            lstat_dec1(list);
            break ;
        case <NEXT,ident> : 
            "(" @ident "?" @ident ".Nextl():(PPTREE)0)";
#           if 0
                stat =  paramTree ^ ;
                if ( stat == <LIST> ) 
                    stat =  stat ^ !<LIST>;
                if ( stat == <COMPOUND> ) {
                    "FreeUnRef(NEXT_L(" @ident "))";
                } else {
                    "NEXT_L(" @ident ")";
                }
#           endif
            if ( statementf ) 
                ";" 
            break ;
        case <IN_LANG,ident,stat> : 
            "{" <NL>
                <T> {{
                        "PLANG _oldLanguage = pCurrentLanguage;" <NL>
                        "SwitchLang(\"" PrintString(Value(ident)) "\");" <NL>
                        if ( ident == <STRING> ) {
                            char    *oldLanguage = theLanguageName ;
                            theLanguageName =  AllocString(Value(ident));
                            SwitchLang(theLanguageName);
                            WRITE_START_LINE(stat);
                            @stat
                            free(theLanguageName);
                            theLanguageName =  oldLanguage ;
                        } else {
                            WRITE_START_LINE(stat);
                            @stat
                        }
                        ";" <NL>
                        "SwitchLangPoint(_oldLanguage);" <NL>
                    }}
            "}" <NL>
            break ;
        case <FOREACH,<>,<>,stat> : break ;
        case <FORALLSONS,ident,stat> : 
            {
                PTREE   forAllSons ;
                forAllSons =  parse (
                    {
                        int _for_slot=1,_arity=treearity($tree);
                        MY_TREE _for_elem = (PPTREE) 0 ;
                        for(;_for_slot<=_arity;_for_slot++) {
                            _for_elem=SonTree($tree,_for_slot);
                            if (_for_elem &&
                                   NumberTree(_for_elem) != IN_LANGUAGE)
                                $stat;
                        }
                    }
                );
                metarep("tree", forAllSons, NoCommentCopyTree(ident));
                metarep("stat", forAllSons, NoCommentCopyTree(stat));
                @forAllSons
            }
            break ;
        default : return DecompCplus::IntDecomp(paramTree, funcAlone);
    }
    equality   =  oldEquality ;
    statementf =  oldStatement ;
    caseDesign =  oldCaseDesign ;
    simpleCase =  oldSimpleCase ;
    condDesign =  oldCondDesign ;
    ifCase     =  oldIfCase ;
    return oldPostComment ;
}

// printheader                                    
void printheader ( PTREE name1 )
{
    WriteString("/*************************************************************************/");
    NewLine();
    WriteString("/*                                                                       */");
    NewLine();
    WriteString("/*        Produced by Metachop version 2.0  -    1989-1995               */");
    NewLine();
    WriteString("/*     Tree      Meta     Chopper      developped    by                  */");
    NewLine();
    WriteString("/*                  Eric Lavillonniere                                   */");
    NewLine();
    WriteString("/*                                                                       */");
    NewLine();
    WriteString("/*************************************************************************/");
    NewLine();
    NewLine();
    "#include \"token.h\"" <NL>
    
    /* for compiling the output with C++ */
    //    "extern int _retVal[50];" <NL>
    // "extern PPTREE _storeVal[50],_nextVal;" <NL>
    // "extern PPTREE stackTree[1024];" <NL>
    // "extern int ptStackTree;" <NL>
    "#define decomp " WriteString(NameLang("decomp")) <NL>
    <NL>
}

void dec_function ( PTREE paramTree, PTREE sc, PTREE type, PTREE declarator, PTREE param, PTREE param_decl, PTREE stat )
{
    PTREE   son, val, list ;
    char    str [5];
    
    inFunction =  1 ;
    _write(2, "+", 1);
#   if 0
        GCManagerRetBeg(paramTree);
#   endif
    _write(2, ">", 1);
    
    /* generalize use of trees as parameters of func */
    GenTree(paramTree);
    _write(2, ">", 1);
    
    /* manage all the foreach in the code */
    LookForEach(paramTree, 0);
    _write(2, ">", 1);
    
    /* gc on variables in each compound statement */
    GCManager(paramTree);
    _write(2, ">", 1);
    
    /* gc on parameters */
#   if 0
        GCManagerFunc(paramTree);
        paramTree == <,<>,<>,<>,<>,<>,stat>;
        GCManagerRetEnd(paramTree, type == <TIDENT,<IDENT,"PTREE">>);
#   endif
    needInter =  0 ;
    {
        ItPtree it((PPTREE)paramTree, <NODE_TREE,<META,"b">>);
        PPTREE  _for_elem ;
        while ( (for_elem = it++) ) {
            needInter++ ;
            break ;
        }
        if ( !needInter ) {
            ItPtree it((PPTREE)paramTree, <NODE_LIST,<META,"b">>);
            while ( (for_elem = it++) ) {
                needInter++ ;
                break ;
            }
        }
        if ( cplusGen ) {
            FuncToAnsi(paramTree);
        }
        _write(2, " ", 1);
    }
}

/******************************************************************
       ToSwitcher : see if this is a switcher case
   *******************************************************************/
int ToSwitcher ( PTREE tree )
{
debut : 
    switch ( tree ) {
        case <NODE_TREE> : 
        case <PLU_AFF> : 
        case <EXPO_AFF> : 
        case <MUL_AFF> : 
        case <PLUS> : 
        case <MUL> : 
        case <EXPO> : return 1 ;
        case <EXP> : 
            tree == <,tree>;
            goto debut ;
        case <AFF> : 
            tree == <,<>,tree>;
            goto debut ;
        default : return 0 ;
    }
}

/******************************************************************
       PtreeToClass : transform Ptree in Class for retvalue
   *******************************************************************/
void PtreeToClass ( PTREE tree )
{
    PTREE   declarator ;
    int     found = 0 ; /*
                           if ( cplusGen ) {
                               foreach ((),tree,{
                                   if ( for_elem == <DECLARATION,<>,<AATREE>,declarator> ) {
                                       foreach ((),declarator,
                                           if ( for_elem == <TYP_LIST> ) 
                                               found = 1 ;
                                       )
                                       if ( found ) {
                                           for_elem += <,<>,<TIDENT,<IDENT,"RCPTREE">>>;
                                           goto for_continue ;
                                       }
                                   } else if ( for_elem == <FUNC> ) 
                                       goto for_continue ;
                               })
                           }
                           */ 
    
}

/******************************************************************
       FuncToAnsi : converts function declaration to ansi
   *******************************************************************/
void FuncToAnsi ( PTREE tree )
{
    PTREE   parameter, declarator, son ;
    PTREE   listDeclarator, listDecl ;
    PTREE   Declarator, Decl ;
    char    *ident ;
    
    tree == <,<>,<>,<>,parameter,<>,declarator>;
    
    /* si on a des parametres et des declarateurs associes cad ancien
       mode de declarations */
    if ( declarator && parameter ) {
        
        /* on parcourt tous les parametres pour les traduire */
        while ( parameter ) {
            son =  sontree(parameter, 1);
            switch ( son ) {
                case <VAR_LIST> : break ;
                default : 
                    {
                        ident          =  AllocString(value(parameter));
                        listDeclarator =  declarator ;
                        while ( listDeclarator ) {
                            Declarator =  nextl(listDeclarator);
                            Declarator == <,<>,<>,listDecl>;
                            while ( listDecl ) {
                                Decl =  nextl(listDecl);
                                son  =  Decl ;
                                while ( son && son != <IDENT> ) {
                                    switch ( son ) {
                                        case <RANGE_MODIFIER> : son = sontree(son, 2);
                                        default : son = sontree(son, 1);
                                    }
                                }
                                if ( son && !strcmp(value(son), ident) ) {
                                    parameter      += <,<DECLARATOR,CopyTree(sontree(Declarator, 2)),CopyTree(Decl)>>;
                                    listDecl       =  ();
                                    listDeclarator =  ();
                                }
                            }
                        }
                        free(ident);
                    }
            }
            nextl(parameter);
        }
    }
    
    // suppress old declaration mode
    declarator += ();
}

void DecompMetachop::lstat_dec1 ( PTREE paramTree )
{
    PTREE   son ;
    PTREE   oldPostComment = postComment ;
    
    while ( paramTree != () ) {
        son         =  nextl(paramTree);
        postComment =  son ;
        DecompStat(son, 1);
    }
    postComment =  oldPostComment ;
}

void DecompMetachop::DecompStat ( PTREE stat, int withNewLine )
{
    PTREE   son ;
    
    switch ( stat ) {
        case <STRING> : 
            "PrintString(" @stat ")";
            control_stat1(stat);
            if ( withNewLine ) 
                <NL>
            break ;
        case <STRING_LIST,stat> : 
            while ( (son = nextl(stat)) ) 
                DecompStat(son, withNewLine);
            break ;
        default : 
            @stat
            control_stat1(stat);
            if ( withNewLine ) 
                <NL>
            break ;
    }
}

/******************************************************************
    copy : copyright ;
   *******************************************************************/
void DecompMetachop::copy ()
{
    const char  *str ;
    
    str =  "\n\r Metachop version 2.0, CopyRight(C) 1989-95 Eric Lavillonniere \n\r";
    _write(2, str, strlen(str));
    str =  " Metachop comes with ABSOLUTELY NO WARRANTY.\n\r";
    _write(2, str, strlen(str));
    str =  " This is free software, and you are welcome to redistribute it \n\r";
    _write(2, str, strlen(str));
    str =  " under certain conditions.\n\r";
    _write(2, str, strlen(str));
    str =  " For details see file COPYING in metachop directory.\n\r\n\r";
    _write(2, str, strlen(str));
}

/*************************************************************************/
/*   ChopTree : chop the tree : here call decomp                         */
/*************************************************************************/
void DecompMetachop::ChopTree ( PTREE tree, int funcAlone )
{
    
    // initialisations 
    copy();
    SwitchLang("metachop");
    
    // simplification of unnecesary complex expressions 
    if ( simplifyExpression ) 
        clean_tree(tree);
    
    // tree = manipuler(tree);  
    // replace retValue type PTREE as RCPTREE  
    PtreeToClass(tree);
    
    // decomp tree  
    DecompCplus::ptDecomp->Decomp(tree, funcAlone);
    AddRef(tree);
    
    // the end for fun  
    WriteString("/*Well done my boy */ ");
    NewLine();
}

/******************************************************************
       MakeTreeGenDir : Generates a maketree directly from a tree
   *******************************************************************/
char *MakeTreeGenDir ( PTREE paramTree, char *name, int level )
{
    PTREE   tree, inter ;
    
    if ( paramTree == () ) {
        WriteString(name) "= (PPTREE) 0;" <NL>
    } else {
        "{" <NL>
            <T> {{
                    tree =  LookMeta(paramTree, name);
                    "/* " {{
                            inter =  copytree(paramTree);
                            
                            // suppress commentaries
                            {
                                ItPtree it (inter) ;
                                PPTREE  _for_elem ;
                                while ( (for_elem = it++) ) 
                                    replacetree(for_elem, 0, (PTREE)0);
                                if ( !isVirtMod ) 
                                    DumpTree(inter);
                            }
                          }} <NL>
                    "*/" <NL>
                    "{"     <T> {{
                                    "ptStackTree = 0 ;" <NL>
                                    MakeTreeGenDirRec(paramTree, -1);
                                    WriteString(name) " = PopTree ;" <NL>
                                }}
                    "}";
                }}
            <T>
        if ( tree ) {
            {{
                @tree
            }} <NL>
        }
        "}" <NL>
    }
    return (name);
}


