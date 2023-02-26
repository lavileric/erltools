/*************************************************************************/
/*                                                                       */
/*        Comp.c    - Built by Eric Lavillonniere on Tandon 386 - 89     */
/*                                                                       */
/*************************************************************************/
/* This file is part of metagen                                             
   
   Metagen is a syntaxic analyser generator with backtrack.
   
   It runs on dos and unix. It generates c code. */
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
/*
   Eric Lavillonniere - 05 October 1993 
     Use SEE_TOKEN macro to test lexEl.Value == x
   Jean-Philippe Jouve - 29 September 1993
     In Comp : add facilities for debugging ;
   */
#include "token.h"
#include "metalang.h"
#include "tablist.h"
#include "symb.h"
#include "verif.h"

static SymbolTable  generatedSymb ;              // table of generated symbols
extern int          tabTab [], writeLine ;       /* array of tabs */ 
extern char         outBuf [];
extern char         *ptOutPut ;
extern int          currCol ;
extern int          ptTabTab ;
extern PPTREE       treeToken ;
extern int          houtput, coutput ;
extern int          cplusGen ;                   /* indicates C++ generation */ 
static PTREE        contextList = (PTREE)0 ;
static PTREE        contextListUsed = (PTREE)0 ; /* context variables for included
                                                    grammars */ 
static PTREE        contextListLocal = (PTREE)0 ;
extern int          VerifyFileLine (int, char *) ;
extern PTREE        GetWithContext (PTREE) ;
void                DeclareNode (const char *, int) ;
PDECELEM            SearchDecElem (char *) ;
void                AddListGen (char *, PPTREE, int) ;
void                ReplaceTreeGen (char *, PPTREE, int) ;
void                LispMake () ;
void                DumpTheNode () ;
void                DumpTokenArray () ;
void                SearchLexToken (PTREE) ;
void                SearchToken (PTREE, int) ;
void                EcrireEntete (char *) ;
int                 KeyLength (KEYELEM *) ;
void                DumpKey (KEYELEM *, int) ;
void                SortKey () ;
void                terminal_build (PPTREE) ;
void                FreeCond () ;
void                NegateCond () ;
PCOND_VALUE         AllocCond (PPTREE) ;
void                FuncLibre () ;
void                Reset (char *, int) ;
void                MakeEquiv (char *, char *) ;
void                ChopTree (PPTREE) ;
void                TreeTokenAnalyze (const PTREE &) ;
void                traitement (PTREE) ;
extern char         *LanguageName (int) ;
extern int          loutput ;
int                 statement, equality, simpleCase, ifCase, inLex, firstMeta = 0 ;
int                 currentLexNumber ;
char                *ptEquality ;
char                tabLabel [100], *ptTab ;
extern void         StripName (char *, char *) ;
extern char         *theLanguageName ;

#define GENNODE(x) (x == TAKE_metalang || x == MAKETREE_metalang \
                      || x == ADDLIST_metalang \
                      || x == REPLACETREE_metalang)

PPTREE          lexFather ;      /* father of statement list in lexdefine */ 
static int      lexNumber ;
static PTREE    ptGlobal ;
char            llanguageName [20];
static PTREE    constList ;
static int      inReturn ;       /* indique que l'on est a l'interieur d'un 
                                     return et donc que les modifications de 
                                    fils ne sont pas a prendre en compte */ 
PTREE           directDefined ;  // names directly defined in the grammar
PTREE           theUsedGrammar ; // pt on the used grammar
PTREE           innerGrammar ;   // most included grammar

/* free generated symbols */
static  void FreeGenerated ()
{
    
    int currentLevel ; // current level in symbol table
    int nbTree = 0 ;   // number of trees 
    
    currentLevel =  generatedSymb.Size() - 1 ;
    
    // compute number of trees to free
    for (; currentLevel >= 0 ; currentLevel-- ) {
        PTREE   listElem ; // list of elem at this level
        listElem =  (PPTREE)(generatedSymb.GetTabList(currentLevel)->List());
        nbTree   += ListLength(listElem);
    }
    
    // if no tree return
    if ( nbTree <= 0 ) 
        return ;
    
    // start block
    currentLevel =  generatedSymb.Size() - 1 ;
    WriteString("MulFreeTree(");
    WriteString(CompactItoa(nbTree));
    
    // free all levels
    for (; currentLevel >= 0 ; currentLevel-- ) {
        PTREE   listElem ; // list of elem at this level
        listElem =  (PPTREE)(generatedSymb.GetTabList(currentLevel)->List());
        
        // free 
        while ( listElem ) {
            WriteString(",");
            WriteString(Value(listElem));
            listElem =  SonTree(listElem, 2);
        }
    }
    
    // end free
    WriteString(");");
    NewLine();
}

/* void _fastcall Comp PARAM((PPTREE)); */
void    _fastcall Comp (PPTREE) ;

char *NToken ( char *string )
{
    return string ;
}

char    nameDefine [50];
char    *theFileName = (char *)0 ;
int     compiledLine = 0 ;

static  int SearchPos ( PPTREE tree, int *line, int *col )
{
    int rank = 1 ;
    int max = treearity(tree);
    
    while ( rank <= max ) {
        if ( SearchPos(sontree(tree, rank), line, col) ) 
            return 1 ;
        rank++ ;
    }
    if ( GetStartPos(tree, line, col) || GetEndPos(tree, line, col) ) 
        return 1 ;
    return 0 ;
}

static  inline void WRITE_START_LINE ( PPTREE tree )
{
    int     line = compiledLine, col ;
    char    string [10];
    
    if ( !GetStartPos(tree, &line, &col) ) 
        SearchPos(tree, &line, &col);
    {
        gotocol(1);
        WriteString("#line ");
        sprintf(string, "%d ", line);
        WriteString(string);
        WriteString("\"");
        WriteString(theFileName);
        WriteString("\"");
        NewLine();
        compiledLine =  line ;
    }
}

static  inline void WRITE_STOP_LINE ( PPTREE tree )
{
    int     line, col ;
    char    string [10];
    
    if ( GetEndPos(tree, &line, &col) ) {
        gotocol(1);
        WriteString("#line ");
        sprintf(string, "%d ", line);
        WriteString(string);
        WriteString("\"");
        WriteString(theFileName);
        WriteString("\"");
        NewLine();
        compiledLine =  line ;
    }
}

static  inline void CNewLine ()
{
    char    string [10];
    
    NewLine();
    if ( compiledLine ) {
        gotocol(1);
        WriteString("#line ");
        sprintf(string, "%d ", compiledLine);
        WriteString(string);
        WriteString("\"");
        WriteString(theFileName);
        WriteString("\"");
        NewLine();
    }
}

#define NewLine CNewLine

/* SetContextLocal and RestoreContextLocal set context and restore context
   for the command "with context" of metagen */
int SetContextLocal ()
{
    PPTREE  list = contextListLocal ;
    int     res = 0 ;
    
    while ( list ) {
        WriteString("int ");
        WriteString(" _old");
        NoSep();
        WriteString(Value(list));
        WriteString(" = ");
        WriteString(Value(list));
        WriteString(";");
        NewLine();
        list =  SonTree(list, 2);
        res  =  1 ;
    }
    return res ;
}

int RestoreContextLocal ()
{
    PPTREE  list = contextListLocal ;
    int     res = 0 ;
    
    while ( list ) {
        WriteString(Value(list));
        WriteString(" = ");
        WriteString(" _old");
        NoSep();
        WriteString(Value(list));
        WriteString(";");
        NewLine();
        list =  SonTree(list, 2);
        res  =  1 ;
    }
    return res ;
}

/******************************************************************
     copy : copyright ;
   *******************************************************************/
static  void copy ()
{
    char    *str ;
    
    if ( isVirtMod ) 
        return ;
    str =  (char *)"\n\r Metagen version 2.0, CopyRight(C) 1989-2013 Eric Lavillonniere \n\r";
    write(2, str, strlen(str));
    str =  (char *)" Metagen comes with ABSOLUTELY NO WARRANTY.\n\r";
    write(2, str, strlen(str));
    str =  (char *)" This is free software, and you are welcome to redistribute it \n\r";
    write(2, str, strlen(str));
    str =  (char *)" under certain conditions.\n\r";
    write(2, str, strlen(str));
    str =  (char *)" For details see file COPYING in metagen directory.\n\r\n\r";
    write(2, str, strlen(str));
}

/******************************************************************
     Nodefault : look if there is a default clause in a switch list;
   *******************************************************************/
int Nodefault ( PPTREE list )
{
    while ( SonTree(list, 2) ) 
        list =  SonTree(list, 2);
    return strcmp(BrainyValue(list), "NOTHING");
}

/******************************************************************
           Label : creates an exit label tied with a function
   *******************************************************************/
char *Label ( char *name )
{
    strcpy(tabLabel, name);
    strcat(tabLabel + strlen(tabLabel), "_exit");
    return (tabLabel);
}

/******************************************************************
           RetLab : creates an return label tied with a function
   *******************************************************************/
char *RetLab ( char *name )
{
    strcpy(tabLabel, name);
    strcat(tabLabel + strlen(tabLabel), "_ret");
    return (tabLabel);
}

/******************************************************************
          ConstString : return a constant name for EXCLA ...
   *******************************************************************/
char *ConstString ( PPTREE tree )
{
    int number = NumberTree(tree);
    
    if ( number == TAKE_metalang || number == SEE_metalang ) {
        tree   =  SonTree(tree, 1);
        number =  NumberTree(tree);
    }
    switch ( number ) {
        case TOKEN_metalang : return AddKey(Value(tree));
        case EXCLA_metalang : 
        case STRING_metalang : return SymboName(Value(tree), 0);
        default : return NULL_STRING();
    }
}

/******************************************************************
           GetToken : get a token with a given string
   *******************************************************************/
void GetToken ( const char *name, PPTREE tree, int testType )
{
    PDESCRIPT_ELEM  pDescript = FindStringDescript(name, tree);
    char            string [20];
    
    if ( pDescript ) {
        if ( testType ) {
            WriteString("(tokenAhead == ");
            itoa(pDescript->offset, string, 10);
            WriteString(string);
        } else 
            WriteString("(tokenAhead");
        WriteString("|| (");
        if ( cplusGen ) 
            WriteString(Value(pDescript->proc));
        else 
            WriteString(NameLang(Value(pDescript->proc)));
        WriteString("(),");
        if ( !strcmp(name, "Comment") ) {
            WriteString("tokenAhead=-1,");
        }
        WriteString("TRACE_LEX(1)))");
    } else 
        WriteString("1");
}

/******************************************************************
           MakeTreeGen : Generates a maketree
   *******************************************************************/
void MakeTreeGen ( char *name, PPTREE tree, int level )
{
    int             nbParam, currParam, gennode ;
    char            string [20];
    char            namePt [10];
    char            resPt [10];
    register PPTREE ptTree = tree ;
    int             oldStatement = statement ;
    int             i ;
    
    sprintf(namePt, "_ptTree%d", level);
    sprintf(resPt, "_ptRes%d", level);
    tree    =  SonTree(tree, 1);
    ptTree  =  tree ;
    nbParam =  0 ;
    ptTree  =  SonTree(ptTree, 2);
    gennode =  0 ;
    while ( ptTree ) {
        if ( GENNODE(NumberTree(SonTree(ptTree, 1))) ) 
            gennode =  1 ;
        nbParam++ ;
        ptTree =  SonTree(ptTree, 2);
    }
    WriteString("{");
    NewLine();
    Tab();
    Mark();
    generatedSymb.AddLevel();
    WriteString("PPTREE ");
    if ( gennode ) {
        WriteString(namePt);
        WriteString("=0,");
        PTREE   added = MakeTree(IDENT_metalang, 1);
        ReplaceTree(added, 1, PTREE(namePt));
        generatedSymb.AddVar(added);
    }
    WriteString(resPt);
    WriteString("=0;");
    {
        PTREE   added = MakeTree(IDENT_metalang, 1);
        ReplaceTree(added, 1, PTREE(resPt));
        generatedSymb.AddVar(added);
    }
    NewLine();
    WriteString(resPt);
    WriteString("= MakeTree(");
    i =  AddConst(Value(tree));
    DeclareNode(Value(tree), nbParam);
    if ( cplusGen ) 
        WriteString(Value(tree));
    else 
        WriteString(NameOfNode(Value(tree)));
    tree =  SonTree(tree, 2);
    WriteString(", ");
    if ( nbParam > 99 ) {
        WriteString(" Too many parameter for maketree");
        nbParam =  99 ;
    }
    sprintf(string, "%d);", nbParam);
    WriteString(string);
    NewLine();
    currParam =  1 ;
    if ( !level ) 
        InitDecElem(name, nbParam);
    while ( tree ) {
        ptTree =  SonTree(tree, 1);
        switch ( NumberTree(ptTree) ) {
            case NIL_metalang : break ;
            case IDENT_metalang : 
                SearchDecElem(Value(SonTree(ptTree, 1)));
                SetUse(Value(SonTree(ptTree, 1)));
            case FUNC_metalang : 
            case STRINGLEX_metalang : 
            case STRING_metalang : 
                WriteString("ReplaceTree(");
                WriteString(resPt);
                WriteString(", ");
                sprintf(string, "%d, ", currParam);
                WriteString(string);
                statement = 0 ;
                if ( NumberTree(ptTree) != STRING_metalang ) 
                    Comp(ptTree);
                else {
                    WriteString("MakeString (\"");
                    WriteString(BrainyValue(ptTree));
                    WriteString("\")");
                }
                WriteString(");");
                statement = oldStatement ;
                NewLine();
                if ( !level ) 
                    UseParam(name, currParam);
                break ;
            case TAKE_metalang : 
            case MAKETREE_metalang : 
            case ADDLIST_metalang : 
            case REPLACETREE_metalang : 
                switch ( NumberTree(ptTree) ) {
                    case TAKE_metalang : 
                        equality   = 1 ;
                        ptEquality = namePt ;
                        Comp(ptTree);
                        equality = 0 ;
                        break ;
                    case MAKETREE_metalang : 
                        MakeTreeGen(namePt, ptTree, level + 1);
                        break ;
                    case ADDLIST_metalang : 
                        AddListGen(namePt, ptTree, level + 1);
                        break ;
                    case REPLACETREE_metalang : 
                        ReplaceTreeGen(namePt, ptTree, level + 1);
                        break ;
                }
                WriteString("ReplaceTree(");
                WriteString(resPt);
                WriteString(", ");
                sprintf(string, "%d, ", currParam);
                WriteString(string);
                WriteString(namePt);
                WriteString(");");
                NewLine();
                if ( !level ) 
                    UseParam(name, currParam);
                break ;
        }
        tree =  SonTree(tree, 2);
        currParam++ ;
    }
    WriteString(name);
    WriteString("=");
    WriteString(resPt);
    WriteString(";");
    NewLine();
    UnMark();
    GotoMark();
    generatedSymb.RemoveLevel();
    WriteString("}");
    NewLine();
}

/******************************************************************
           ReplaceTreeGen : Generates a replacetree
   *******************************************************************/
void ReplaceTreeGen ( char *name, PPTREE tree, int level )
{
    char            namePt [10];
    int             treeType, i ;
    register PPTREE ptTree = tree ;
    int             oldStatement = statement ;
    
    sprintf(namePt, "_ptTree%d", level);
    tree     =  SonTree(tree, 1);
    ptTree   =  SonTree(SonTree(SonTree(tree, 2), 2), 1); /* on gen param */ 
    treeType =  NumberTree(ptTree);
    if ( GENNODE(treeType) ) {
        WriteString("{");
        NewLine();
        Tab();
        Mark();
        WriteString("PPTREE ");
        WriteString(namePt);
        WriteString("=0;");
        generatedSymb.AddLevel();
        PTREE   added = MakeTree(IDENT_metalang, 1);
        ReplaceTree(added, 1, PTREE(namePt));
        generatedSymb.AddVar(added);
        NewLine();
    }
    switch ( NumberTree(ptTree) ) {
        case NIL_metalang : 
            if ( name ) {
                WriteString(name);
                WriteString("=");
            }
            WriteString("ReplaceTree(");
            i = atoi(Value(SonTree(SonTree(tree, 2), 1)));
            Reset(Value(SonTree(SonTree(tree, 1), 1)), i);
            Comp(SonTree(tree, 1));
            WriteString(", ");
            tree = SonTree(tree, 2);
            Comp(SonTree(tree, 1));
            WriteString(", (PPTREE) 0);");
            NewLine();
            break ;
        case IDENT_metalang : 
            SearchDecElem(Value(SonTree(ptTree, 1)));
            SetUse(Value(SonTree(ptTree, 1)));
        case FUNC_metalang : 
        case STRINGLEX_metalang : 
        case STRING_metalang : 
            if ( name ) {
                WriteString(name);
                WriteString("=");
            }
            {
                i =  atoi(Value(SonTree(SonTree(SonTree(tree, 2), 1), 1)));
                if ( !inReturn ) 
                    UseParam(Value(SonTree(SonTree(tree, 1), 1)), i);
                else 
                    SetUse(Value(SonTree(SonTree(tree, 1), 1)));
                if ( name && *name != '_' ) 
                    MakeEquiv(name, Value(SonTree(SonTree(tree, 1), 1)));
            }
            WriteString("ReplaceTree(");
            statement = 1 ;
            while ( tree ) {
                if ( NumberTree(SonTree(tree, 1)) != STRING_metalang ) 
                    Comp(SonTree(tree, 1));
                else {
                    WriteString("MakeString (\"");
                    WriteString(BrainyValue(ptTree));
                    WriteString("\")");
                }
                tree =  SonTree(tree, 2);
                if ( tree ) 
                    WriteString(",");
            }
            WriteString(");");
            statement = oldStatement ;
            NewLine();
            break ;
        case TAKE_metalang : 
        case MAKETREE_metalang : 
        case ADDLIST_metalang : 
        case REPLACETREE_metalang : 
            switch ( NumberTree(ptTree) ) {
                case TAKE_metalang : 
                    equality   = 1 ;
                    ptEquality = namePt ;
                    Comp(ptTree);
                    equality = 0 ;
                    break ;
                case MAKETREE_metalang : 
                    MakeTreeGen(namePt, ptTree, level + 1);
                    break ;
                case ADDLIST_metalang : 
                    AddListGen(namePt, ptTree, level + 1);
                    break ;
                case REPLACETREE_metalang : 
                    ReplaceTreeGen(namePt, ptTree, level + 1);
                    break ;
            }
            if ( name ) {
                WriteString(name);
                WriteString("=");
            }
            {
                i =  atoi(Value(SonTree(SonTree(SonTree(tree, 2), 1), 1)));
                if ( !inReturn ) 
                    UseParam(Value(SonTree(SonTree(tree, 1), 1)), i);
                else 
                    SetUse(Value(SonTree(SonTree(tree, 1), 1)));
                if ( name && *name != '_' ) 
                    MakeEquiv(name, Value(SonTree(SonTree(tree, 1), 1)));
            }
            WriteString("ReplaceTree(");
            Comp(SonTree(tree, 1));
            WriteString(", ");
            tree = SonTree(tree, 2);
            Comp(SonTree(tree, 1));
            WriteString(", ");
            WriteString(namePt);
            WriteString(");");
            NewLine();
            break ;
    }
    if ( GENNODE(treeType) ) {
        UnMark();
        GotoMark();
        generatedSymb.RemoveLevel();
        WriteString("}");
        NewLine();
    }
}

/******************************************************************
           AddListGen : generates an addlist
   *******************************************************************/
void AddListGen ( char *name, PPTREE tree, int level )
{
    char            namePt [10];
    int             treeType ;
    PPTREE          nameTree ;
    register PPTREE ptTree = tree ;
    int             oldStatement = statement ;
    
    sprintf(namePt, "_ptTree%d", level);
    tree     =  SonTree(tree, 1);
    nameTree =  SonTree(tree, 1);
    ptTree   =  SonTree(SonTree(tree, 2), 1); /* on gen param */ 
    treeType =  NumberTree(ptTree);
    if ( !level ) {
        SetUse(Value(SonTree(nameTree, 1)));
        if ( name ) 
            MakeEquiv(name, Value(SonTree(nameTree, 1)));
    }
    if ( name || GENNODE(treeType) ) {
        WriteString("{");
        NewLine();
        Tab();
        Mark();
    }
    if ( GENNODE(treeType) ) {
        WriteString("PPTREE ");
        WriteString(namePt);
        WriteString("=0;");
        NewLine();
        generatedSymb.AddLevel();
        PTREE   added = MakeTree(IDENT_metalang, 1);
        ReplaceTree(added, 1, PTREE(namePt));
        generatedSymb.AddVar(added);
    }
    switch ( NumberTree(ptTree) ) {
        case NIL_metalang : 
            Comp(SonTree(tree, 1));
            WriteString("=");
            WriteString("AddList(");
            Comp(SonTree(tree, 1));
            WriteString(", (PPTREE) 0);");
            NewLine();
            break ;
        case IDENT_metalang : 
            SearchDecElem(Value(SonTree(ptTree, 1)));
            SetUse(Value(SonTree(ptTree, 1)));
        case FUNC_metalang : 
        case STRINGLEX_metalang : 
            Comp(SonTree(tree, 1));
            WriteString("=");
            WriteString("AddList(");
            statement = 0 ;
            while ( tree ) {
                Comp(SonTree(tree, 1));
                tree =  SonTree(tree, 2);
                if ( tree ) 
                    WriteString(",");
            }
            WriteString(");");
            statement = oldStatement ;
            NewLine();
            break ;
        case TAKE_metalang : 
        case MAKETREE_metalang : 
        case ADDLIST_metalang : 
        case REPLACETREE_metalang : 
            switch ( NumberTree(ptTree) ) {
                case TAKE_metalang : 
                    equality   = 1 ;
                    ptEquality = namePt ;
                    Comp(ptTree);
                    equality = 0 ;
                    break ;
                case MAKETREE_metalang : 
                    MakeTreeGen(namePt, ptTree, level + 1);
                    break ;
                case ADDLIST_metalang : 
                    AddListGen(namePt, ptTree, level + 1);
                    break ;
                case REPLACETREE_metalang : 
                    ReplaceTreeGen(namePt, ptTree, level + 1);
                    break ;
            }
            Comp(SonTree(tree, 1));
            WriteString("=");
            WriteString("AddList(");
            Comp(SonTree(tree, 1));
            WriteString(", ");
            WriteString(namePt);
            WriteString(");");
            NewLine();
            break ;
    }
    if ( name ) {
        WriteString(name);
        WriteString("=");
        Comp(nameTree);
        WriteString(";");
        NewLine();
    }
    if ( name || GENNODE(treeType) ) {
        UnMark();
        GotoMark();
        generatedSymb.RemoveLevel();
        WriteString("}");
        NewLine();
    }
}

/******************************************************************
           ReturnGen : generates a return
   *******************************************************************/
void ReturnGen ( PPTREE tree, int level )
{
    char            string [5];
    char            namePt [10];
    int             treeType ;
    register PPTREE ptTree = tree ;
    int             oldInReturn = inReturn ;
    int             oldStatement = statement ;
    
    inReturn =  1 ;
    sprintf(namePt, "_ptTree%d", level);
    ptTree   =  tree = SonTree(tree, 1);
    treeType =  NumberTree(ptTree);
    WriteString("{");
    NewLine();
    Tab();
    Mark();
    if ( inLex ) {
        WriteString("firstOnLine = 0 ; ");
        NewLine();
        WriteString("tokenAhead =");
        itoa(lexNumber, string, 10);
        WriteString(string);
        WriteString(";");
        NewLine();
    }
    generatedSymb.AddLevel();
    if ( GENNODE(treeType) && !inLex ) {
        WriteString("PPTREE ");
        WriteString(namePt);
        WriteString("=0;");
        PTREE   added = MakeTree(IDENT_metalang, 1);
        ReplaceTree(added, 1, PTREE(namePt));
        generatedSymb.AddVar(added);
        NewLine();
    }
    switch ( NumberTree(ptTree) ) {
        case STRING_metalang : 
        case TOKEN_metalang : 
        case EXCLA_metalang : 
            if ( inLex ) {
                WriteString("lexEl.Value=");
                Comp(ptTree);
                WriteString(";");
                NewLine();
                if ( !strcmp("CARRIAGE_RETURN", Value(ptTree)) ) {
                    WriteString("firstOnLine = 1 ; "); /* cas particulier pour \n*/ 
                    NewLine();
                }
                
                /* put a post on last comment */
                PUT_COORD ;
                RestoreContextLocal();
                WriteString("return(1);");
                NewLine();
            }
            break ;
        case NIL_metalang : 
            if ( !inLex ) {
                WriteString("_retValue = (PPTREE) 0;");
                NewLine();
                WriteString("goto ");
                WriteString(RetLab(nameDefine));
                WriteString(";");
                NewLine();
            } else {
                
                /* put a post on last comment */
                PUT_COORD ;
                RestoreContextLocal();
                WriteString("return (0);");
                NewLine();
            }
            break ;
        case IDENT_metalang : 
            if ( !inLex ) {
                SearchDecElem(Value(SonTree(ptTree, 1)));
                SetUse(Value(SonTree(ptTree, 1)));
            } else if ( !strcmp("CARRIAGE_RETURN", BrainyValue(ptTree)) ) {
                WriteString("firstOnLine = 1 ; "); /* cas particulier pour \n*/ 
                NewLine();
            }
        case FUNC_metalang : 
        case STRINGLEX_metalang : 
            if ( !inLex ) 
                WriteString("_retValue = ");
            else 
                WriteString("lexEl.Value = ");
            statement = 0 ;
            if ( inLex && NumberTree(ptTree) == IDENT_metalang ) {
                if ( cplusGen ) {
                    WriteString(SymboName(Value(ptTree), 0));
                } else 
                    WriteString(NameOfNode(SymboName(Value(ptTree), 0)));
            } else 
                Comp(ptTree);
            statement = oldStatement ;
            if ( !inLex ) {
                WriteString(";");
                NewLine();
                WriteString("goto ");
                WriteString(RetLab(nameDefine));
                WriteString(";");
                NewLine();
            } else 
                WriteString(";");
            NewLine();
            if ( inLex ) {
                
                /* put a post on last comment */
                PUT_COORD ;
                RestoreContextLocal();
                WriteString("return(1);");
                NewLine();
            }
            break ;
        case TAKE_metalang : 
        case MAKETREE_metalang : 
        case ADDLIST_metalang : 
        case REPLACETREE_metalang : 
            switch ( NumberTree(ptTree) ) {
                case TAKE_metalang : 
                    equality = 1 ;
                    if ( !inLex ) 
                        ptEquality =  namePt ;
                    else {
                        
                        /* don't put coord between two comments or you will
                           break pre post association */
                        WriteString(" tokenAhead = 0 ; ");
                        NewLine();
                        WriteString(" lexCallLex = 1 ; ");
                        NewLine();
                        
                        /* PUT_COORD; */
                        RestoreContextLocal();
                        WriteString("return ");
                    }
                    Comp(ptTree);
                    break ;
                case MAKETREE_metalang : 
                    MakeTreeGen(namePt, ptTree, level + 1);
                    break ;
                case ADDLIST_metalang : 
                    AddListGen(namePt, ptTree, level + 1);
                    break ;
                case REPLACETREE_metalang : 
                    ReplaceTreeGen(namePt, ptTree, level + 1);
                    break ;
            }
            if ( !inLex ) {
                WriteString("_retValue =");
                WriteString(namePt);
                WriteString(";");
                NewLine();
                WriteString("goto ");
                WriteString(RetLab(nameDefine));
                WriteString(";");
                NewLine();
                break ;
            }
    }
    UnMark();
    generatedSymb.RemoveLevel();
    WriteString("}");
    NewLine();
    inReturn =  oldInReturn ;
}

/******************************************************************
           ConvertChar : Convert a character either to a charac or \numb
   *******************************************************************/
char *ConvertChar ( char *car )
{
    int     i ;
    char    *myString ;
    
    if ( strlen(car) == 1 ) 
        return AllocString(car);
    car++ ;
    myString =  (char *)malloc(6 * sizeof(char));
    switch ( *car ) {
        case 'n' : 
            strcpy(myString, "\\012");
            break ;
        case 'r' : 
            strcpy(myString, "\\015");
            break ;
        case 'b' : 
            strcpy(myString, "\\010");
            break ;
        case 't' : 
            strcpy(myString, "\\011");
            break ;
        default : 
            i = 0 ;
            while ( *car ) 
                i =  8 * i + *car++ - '0';
            car    = myString + 4 ;
            *car-- = '\0';
            *car-- = '0' + i % 8 ;
            i      = i / 8 ;
            *car-- = '0' + i % 8 ;
            i      = i / 8 ;
            *car-- = '0' + i % 8 ;
            i      = i / 8 ;
            *car   = '\\';
    }
    return (myString);
}

/******************************************************************
           IncrChar : increment a character
   *******************************************************************/
int RecIncChar ( char *string )
{
    if ( !*string ) 
        return (1);
    if ( RecIncChar(string + 1) ) {
        (*string)++ ;
        if ( *string == '8' ) {
            *string =  '0';
            return (1);
        }
    }
    return 0 ;
}

int IncrChar ( char *charBeg, char *charEnd )
{
    if ( strlen(charBeg) == 1 ) 
        (*charBeg)++ ;
    else 
        RecIncChar(charBeg + 1);
    return strcmp(charBeg, charEnd);
}

/******************************************************************
           CaseCharac : dedisplay a case character
   *******************************************************************/
void CaseCharac ( char *string )
{
    WriteString("case ");
    WriteString("'");
    WriteString(string);
    WriteString("'");
    WriteString(" :");
}

/******************************************************************
           ClassifyCase : look if the list must be displayed as a case
   *******************************************************************/
#define SWITCH_SYNTAXIC 1
#define SWITCH_LEXICAL 2
#define SWITCH_LEXICAL_COMPLEX 3
#define SWITCH_AS_IF 4

int ClassifyCase ( PPTREE ptTree )
{
    PPTREE  ptTreeInt ;
    int     level = 0 ;
    int     nbFunc = -1 ;
    
    switch ( level = NumberTree(ptTreeInt = SonTree(SonTree(ptTree, 1), 1)) ) {
        case TAKE_metalang : 
        case SEE_metalang : 
            level = SWITCH_SYNTAXIC ;
            break ;
        case SEEL_metalang : 
        case TAKEL_metalang : 
            level = inLex ? SWITCH_LEXICAL : SWITCH_AS_IF ;
            break ;
    }
    while ( ptTree ) {
        switch ( NumberTree(ptTreeInt = SonTree(SonTree(ptTree, 1), 1)) ) {
            case TAKE_metalang : 
            case SEE_metalang : 
                firstMeta = firstMeta && strcmp(Value(ptTree), "META");
                if ( level == SWITCH_SYNTAXIC ) {
                    ptTreeInt =  SonTree(ptTreeInt, 1);
                    
                    /* go in if if we see a take rule instead of a take token
                       or if the token are not returned by the same lexical
                       rule, since then we won't be able to make a Lex
                       in front of the rule  */
                    if ( NumberTree(ptTreeInt) == IDENT_metalang ) 
                        level =  SWITCH_AS_IF ;
                    else if ( strcmp(Value(ptTreeInt), "NOTHING") && strcmp(Value(ptTreeInt), "META") ) {
                        PDESCRIPT_ELEM  pDescript = FindStringDescript(ConstString(ptTreeInt), ptTreeInt);
                        
                        // if index of lex func has allready a value
                        if ( nbFunc != -1 ) {
                            
                            // if not same lex put if
                            if ( !pDescript || nbFunc != pDescript->offset ) 
                                level =  SWITCH_AS_IF ;
                        } else {
                            
                            // get number of lex func
                            if ( pDescript ) 
                                nbFunc =  pDescript->offset ;
                            else 
                                level =  SWITCH_AS_IF ;
                        }
                    }
                } else if ( level == SWITCH_LEXICAL || level == SWITCH_LEXICAL_COMPLEX ) 
                    level =  SWITCH_AS_IF ;
                break ;
            case TAKEL_metalang : 
            case SEEL_metalang : 
                if ( level == SWITCH_LEXICAL ) {
                    if ( (ptTreeInt = SonTree(ptTreeInt, 1)) && NumberTree(ptTreeInt) == STRING_metalang ) 
                        level =  SWITCH_LEXICAL_COMPLEX ;
                } else if ( level == SWITCH_SYNTAXIC ) 
                    level =  SWITCH_AS_IF ;
                break ;
        }
        ptTree =  SonTree(ptTree, 2);
    }
    return (level);
}

/******************************************************************
           CompString : display the string of a take
   *******************************************************************/
void CompString ( PPTREE tree )
{
    WriteString(Value(tree));
}

/******************************************************************
           Comp : Display a tree on screen
   *******************************************************************/
void _fastcall Comp ( PPTREE tree )
{
    int     oldStatement, oldEquality, oldSimpleCase, oldIfCase, oldFirstMeta ;
    char    *interString ;
    int     length = 0 ;
    int     i ;
    PPTREE  ptTree, son, inter ;
    PPTREE  accelerator ;
    char    *cardeb, *carend ;
    char    *oldTheFileName ;
    
    oldStatement  =  statement ;
    oldEquality   =  equality ;
    oldSimpleCase =  simpleCase ;
    oldIfCase     =  ifCase ;
    if ( !tree ) 
        return ;
    switch ( NumberTree(tree) ) {
        case LIST : 
            while ( tree ) {
                Comp(SonTree(tree, 1));
                tree =  SonTree(tree, 2);
            }
            break ;
        case DEFINE_metalang : 
            
            // don't compile if not defined at this level
            if ( !ListFind(directDefined, tree) ) 
                break ;
            
            // otherwise go on
            oldTheFileName   = theFileName ;
            theFileName      = AllocString(Value(SonTree(tree, 3)));
            contextListLocal = GetWithContext(tree);
            VerifyFileLine(0, llanguageName);
            WRITE_START_LINE(tree);
            WriteString("PPTREE ");
            if ( cplusGen ) {
                WriteString(NameOfNodePlus(Value(tree)));
                WriteString(" ");
            } else {
                WriteString(NameLang(Value(tree)));
            }
            strcpy(nameDefine, Value(tree));
            FuncName(nameDefine);
            WriteString("( int error_free)");
            NewLine();
            WriteString("{");
            NewLine();
            Tab();
            Mark();
            
            /* store the context value we may modify inside the function */
            SetContextLocal();
            WriteString("PFILE_POSITION _filePosition = (PFILE_POSITION) 0;\n");
            NewLine();
            WriteString("int _value,_nbPre = 0 ;");
            NewLine();
            WriteString("PCOMM_ELEM _ptPreComm = (");
            GetToken("Comment", 0, 0);
            WriteString(",listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));");
            NewLine();
            
            /* JPJ << */
            WriteString("int _Debug = TRACE_RULE(\"");
            WriteString(nameDefine);
            WriteString("\",TRACE_ENTER,(PPTREE)0);");
            NewLine();
            
            /* >> JPJ */
            WriteString("PPTREE lastTree = _lastTree,_retValue ;");
            NewLine();
            
            /* compute all statements writing line number */
            son = SonTree(tree, 2);
            while ( son ) {
                WRITE_START_LINE(SonTree(son, 1));
                Comp(SonTree(son, 1));
                son =  SonTree(son, 2);
            }
            UnMark();
            {
                int oldCompiledLine = compiledLine ;
                WRITE_STOP_LINE(tree);
                if ( compiledLine == oldCompiledLine ) {
                    compiledLine++ ;
                    CNewLine();
                }
            }
            GetToken("Comment", 0, 0);
            WriteString(";");
            NewLine();
            WriteString("if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}");
            NewLine();
            RestoreContextLocal();
            WriteString("return((PPTREE) 0);");
            NewLine();
            NewLine();
            
            // error exit
            WriteString(Label(nameDefine));
            WriteString(" :");
            NewLine();
            NewLine();
            Tab();
            Mark();
#           if 0
                FuncLibre(); /* free pointers before exiting */ 
#           endif
            
            /* JPJ << */
            WriteString("_Debug = TRACE_RULE(\"");
            WriteString(nameDefine);
            WriteString("\",TRACE_EXIT,(PPTREE)0);");
            NewLine();
            
            /* >> JPJ */
            WriteString("_funcLevel--;");
            NewLine();
            /*restore context value we me have modified */
            RestoreContextLocal();
            WriteString("return((PPTREE) -1) ;");
            UnMark();
            NewLine();
            NewLine();
            
            // standard exit
            WriteString(RetLab(nameDefine));
            WriteString(" :");
            NewLine();
            Tab();
            Mark();
            NewLine();
            
            /* JPJ << */
            WriteString("_Debug = TRACE_RULE(\"");
            WriteString(nameDefine);
            WriteString("\",TRACE_RETURN,_retValue);");
            NewLine();
            
            /* >> JPJ */
            GetToken("Comment", 0, 0);
            WriteString(";");
            NewLine();
            WriteString("if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}");
            NewLine();
            RestoreContextLocal();
            WriteString("return _retValue ;");
            UnMark();
            NewLine();
            WriteString("}");
            NewLine();
            NewLine();
            FuncFree();
            
            // free all symbols
            while ( generatedSymb.Size() > 0 ) 
                generatedSymb.RemoveLevel();
            free(theFileName);
            theFileName = oldTheFileName ;
            break ;
        case SEE_metalang : 
            tree = SonTree(tree, 1);
            if ( NumberTree(tree) == IDENT_metalang ) {
                accelerator =  FuncAccelerator(tree);
                if ( accelerator && accelerator != (PPTREE) -1 ) {
                    WriteString("(NPUSH_CALL_VERIF(");
                } else 
                    WriteString("(PUSH_CALL(");
                if ( cplusGen ) {
                    WriteString("_Tak(");
                    WriteString(Value(tree));
                    WriteString(")");
                } else 
                    WriteString(NameLang(Value(tree)));
                if ( accelerator && accelerator != (PPTREE) -1 ) {
                    WriteString(", ");
                    WriteString(Value(accelerator));
                    WriteString(", ");
                    WriteString(LanguageName(LO_CASE));
                }
                WriteString("))");
            } else {
                WriteString("(");
                GetToken(ConstString(tree), tree, 1);
                WriteString("&&");
                WriteString("SEE_TOKEN( ");
                Comp(tree);
                WriteString(",\"");
                CompString(tree);
                WriteString("\"))");
            }
            break ;
        case REPEAT_metalang : 
            WriteString("do {");
            NewLine();
            Tab();
            Mark();
            son = SonTree(tree, 1);
            while ( son ) {
                WRITE_START_LINE(SonTree(son, 1));
                Comp(SonTree(son, 1));
                son =  SonTree(son, 2);
            }
            UnMark();
            GotoMark();
            WRITE_START_LINE(SonTree(tree, 2));
            WriteString("} while ( !");
            statement = 0 ;
            Comp(SonTree(tree, 2));
            statement = 1 ;
            WriteString(") ;");
            NewLine();
            break ;
        case IF_metalang : 
            WriteString("if ");
            statement = 0 ;
            Comp(SonTree(tree, 1));
            AllocCond(SonTree(tree, 1));
            statement = 1 ;
            WriteString("{");
            NewLine();
            Tab();
            Mark();
            statement = 1 ;
            WRITE_START_LINE(SonTree(tree, 2));
            Comp(SonTree(tree, 2));
            UnMark();
            GotoMark();
            WRITE_STOP_LINE(SonTree(tree, 2));
            WriteString("}");
            if ( SonTree(tree, 3) ) {
                NegateCond();
                WriteString(" else {");
                NewLine();
                Tab();
                Mark();
                WRITE_START_LINE(SonTree(tree, 3));
                Comp(SonTree(tree, 3));
                UnMark();
                GotoMark();
                WriteString("}");
            }
            FreeCond();
            NewLine();
            break ;
        case WHILE_metalang : 
            WriteString("while ");
            statement = 0 ;
            Comp(SonTree(tree, 1));
            statement = 1 ;
            WriteString(" { ");
            NewLine();
            Tab();
            Mark();
            son = SonTree(tree, 2);
            WRITE_START_LINE(son);
            Comp(son);
            UnMark();
            GotoMark();
            WriteString("} ");
            NewLine();
            break ;
        case IN_CONTEXT_metalang : 
            WriteString("(");
            WriteString(Value(tree));
            WriteString(")");
            break ;
        case WITHOUT_CONTEXT_metalang : 
            WriteString("{");
            NewLine();
            Tab();
            Mark();
            WriteString(Value(tree));
            WriteString(" = 0 ;");
            NewLine();
            son = SonTree(tree, 2);
            WRITE_START_LINE(son);
            Comp(son);
            WriteString(Value(tree));
            WriteString(" = ");
            WriteString(" _old");
            NoSep();
            WriteString(Value(tree));
            WriteString(";");
            NewLine();
            UnMark();
            WriteString("}");
            NewLine();
            break ;
        case WITH_CONTEXT_metalang : 
            {
                
                // added
#               if 0
                    output =  1 ;
                    PTREE   dup = NoCommentCopyTree(tree);
                    DumpTree(dup);
                    NewLine();
#               endif
                WriteString("{");
                NewLine();
                Tab();
                Mark();
                WriteString(Value(tree));
                WriteString(" = 1 ;");
                NewLine();
                son =  SonTree(tree, 2);
                WRITE_START_LINE(son);
                Comp(son);
                WriteString(Value(tree));
                WriteString(" = ");
                WriteString(" _old");
                NoSep();
                WriteString(Value(tree));
                WriteString(";");
                NewLine();
                UnMark();
                WriteString("}");
                NewLine();
            }
            break ;
        case BEGIN_metalang : 
            
            // added
            {
#               if 0
                    output =  1 ;
                    PTREE   dup = NoCommentCopyTree(tree);
                    DumpTree(dup);
                    NewLine();
#               endif
                son =  SonTree(tree, 1);
                while ( son ) {
                    WRITE_START_LINE(SonTree(son, 1));
                    Comp(SonTree(son, 1));
                    son =  SonTree(son, 2);
                }
            }
            break ;
        case CASE_metalang : 
            oldFirstMeta = firstMeta ;
            firstMeta    = 1 ;
            
            /* el le 6/10/94 */
            ifCase       = 0 ;
            
            /* fin el */
            i            = ClassifyCase(SonTree(tree, 1));
            if ( i == SWITCH_SYNTAXIC ) {
                
                /* we iterate on list in order to find sthing which is not the
                   default */
                {
                    PPTREE  ptTree = SonTree(tree, 1);
                    char    *string = NULL_STRING();
                    while ( ptTree && !strcmp((string = ConstString(SonTree(SonTree(ptTree, 1), 1))), "") ) 
                        ptTree =  SonTree(ptTree, 2);
                    if ( ptTree ) {
                        GetToken(string, SonTree(SonTree(ptTree, 1), 1), 1);
                    }
                }
                WriteString(";");
                NewLine();
                WriteString("switch( lexEl.Value) {");
                NewLine();
                Tab();
                Mark();
                length =  ListLength(SonTree(tree, 1));
                if ( length ) 
                    NegateCond();
                son =  SonTree(tree, 1);
                while ( son ) {
                    WRITE_START_LINE(SonTree(son, 1));
                    Comp(SonTree(son, 1));
                    son =  SonTree(son, 2);
                }
                while ( length-- ) 
                    FreeCond();
                
                /* if we don't see a default put an error here */
                if ( Nodefault(SonTree(tree, 1)) ) {
                    WriteString("default :");
                    NewLine();
                    Tab();
                    Mark();
                    FreeGenerated();
#                   if 0
                        Tab();
                        Mark();
                        FuncLibre(); /* free pointers before exiting */ 
#                   endif
                    WriteString("CASE_EXIT(");
                    WriteString(Label(nameDefine));
                    WriteString(",\"");
                    tree =  SonTree(tree, 1);
                    if ( !SonTree(tree, 2) ) 
                        CompString(tree);
                    else {
                        WriteString("either ");
                        CompString(tree);
                        while ( SonTree(tree, 2) ) {
                            tree =  SonTree(tree, 2);
                            WriteString(" or ");
                            CompString(tree);
                        }
                    }
                    WriteString("\")");
                    NewLine();
                    WriteString("break;");
                    NewLine();
                    UnMark();
                }
                UnMark();
                GotoMark();
                WriteString("}");
                NewLine();
            } else if ( i == SWITCH_LEXICAL ) {
                simpleCase =  1 ;
                WriteString("switch (c) {");
                NewLine();
                Tab();
                Mark();
                son =  SonTree(tree, 1);
                while ( son ) {
                    WRITE_START_LINE(SonTree(son, 1));
                    Comp(SonTree(son, 1));
                    son =  SonTree(son, 2);
                }
                UnMark();
                GotoMark();
                WriteString("}");
                NewLine();
            } else {
                if ( i == SWITCH_AS_IF ) 
                    ifCase =  1 ; /* case as if out lex */ 
                son =  SonTree(tree, 1);
                while ( son ) {
                    WRITE_START_LINE(SonTree(son, 1));
                    Comp(SonTree(son, 1));
                    son =  SonTree(son, 2);
                }
                WriteString(" ;");
                NewLine();
            }
            firstMeta = oldFirstMeta ;
            break ;
        case SWITCH_metalang : 
            i = NumberTree(SonTree(tree, 1));
            if ( !ifCase && (i == TAKE_metalang || i == SEE_metalang) ) {
                ptTree =  SonTree(SonTree(tree, 1), 1);
                NegateCond();
                
                /* if we haven't allready encountered a meta put it on the first
                   entry which is has a primitive form : an excla */
                if ( NumberTree(ptTree) == EXCLA_metalang && FindConst("META") != -1 && firstMeta && strcmp(Value(ptTree), "NOTHING") && strcmp(Value(ptTree), "META") ) {
                    firstMeta =  0 ;
                    WriteString("case META : ");
                    NewLine();
                }
                
                /* if see !NOTHING put default : otherwise put case */
                if ( NumberTree(ptTree) != EXCLA_metalang || strcmp(Value(SonTree(SonTree(ptTree, 1), 1)), "NOTHING") ) {
                    AllocCond(SonTree(tree, 1));
                    WriteString("case ");
                    Comp(ptTree);
                } else 
                    WriteString("default");
                WriteString(" : ");
                NewLine();
                Tab();
                Mark();
                if ( NumberTree(SonTree(tree, 1)) == TAKE_metalang ) {
                    WriteString("tokenAhead = 0 ;");
                    NewLine();
                    WriteString("CommTerm();");
                    NewLine();
                }
                statement =  1 ;
                WRITE_START_LINE(SonTree(tree, 2));
                Comp(SonTree(tree, 2));
                WriteString("break;");
                NewLine();
                UnMark();
                GotoMark();
            } else if ( !ifCase && simpleCase ) {
                Comp(SonTree(tree, 1));
                NewLine();
                Tab();
                Mark();
                
                /* takel without parameters put NextChar */
                if ( !SonTree(SonTree(tree, 1), 1) ) {
                    length =  1 ;
                    WriteString(" if (c!= EOF) {");
                    NewLine();
                    Tab();
                    Mark();
                }
                if ( NumberTree(SonTree(tree, 1)) == TAKEL_metalang ) {
                    WriteString("NextChar();");
                    NewLine();
                }
                simpleCase =  0 ;
                WRITE_START_LINE(SonTree(tree, 2));
                Comp(SonTree(tree, 2));
                if ( length ) {
                    UnMark();
                    GotoMark();
                    WriteString("}");
                    NewLine();
                }
                WriteString("break ;");
                UnMark();
                NewLine();
            } else {
                i      =  0 ;
                ptTree =  SonTree(SonTree(tree, 1), 1);
                if ( (NumberTree(SonTree(tree, 1)) == TAKE_metalang || NumberTree(SonTree(tree, 1)) == SEE_metalang) && NumberTree(ptTree) == IDENT_metalang ) {
                    i =  1 ;
                }
                statement =  0 ;
                
                /* if see !NOTHING put if(1) otherwise if(condition) */
                if ( !ptTree || NumberTree(ptTree) != EXCLA_metalang || strcmp(BrainyValue(ptTree), "NOTHING") ) {
                    WriteString("if(");
                    Comp(SonTree(tree, 1));
                    WriteString(")");
                } else 
                    WriteString("if (1) ");
                statement =  1 ;
                WriteString("{");
                NewLine();
                Tab();
                Mark();
                WRITE_START_LINE(SonTree(tree, 2));
                Comp(SonTree(tree, 2));
                UnMark();
                GotoMark();
                WriteString("} else ");
                NewLine();
            }
            break ;
        case STOREL_metalang : 
            if ( !inLex ) {
                
                // ELV 05/17
                //  WriteString("if (tokenAhead) ExtUnputBuf() ;");
                WriteString("if (tokenAhead && tokenAhead != -1 ) ExtUnputBuf() ;");
                NewLine();
            }
            if ( NumberTree(SonTree(tree, 1)) == TAKEL_metalang ) {
                WriteString("{");
                NewLine();
                Tab();
                Mark();
                WriteString("lexEl . AddChar(c);");
                NewLine();
                WriteString("NextChar();");
                UnMark();
                NewLine();
                WriteString("}");
                NewLine();
            } else {
                WriteString("{");
                NewLine();
                Tab();
                Mark();
                WriteString("lexEl.AddString(\"");
                WriteString(Value(SonTree(SonTree(tree, 1), 1)));
                WriteString("\");");
                NewLine();
                UnMark();
                WriteString("}");
                NewLine();
            }
            break ;
        case TAKEL_metalang : length = 1 ;
        case SEEL_metalang : 
            if ( simpleCase ) {
                if ( !SonTree(tree, 1) ) 
                    WriteString("default : ");
                else if ( NumberTree(SonTree(tree, 1)) == CHARACTER_metalang ) 
                    CaseCharac(Value(SonTree(SonTree(tree, 1), 1)));
                else if ( NumberTree(SonTree(tree, 1)) == IN_metalang ) {
                    tree =  SonTree(SonTree(SonTree(tree, 1), 1), 1);
                    while ( tree ) {
                        if ( NumberTree(SonTree(tree, 1)) == CHARACTER_metalang ) 
                            CaseCharac(Value(SonTree(SonTree(tree, 1), 1)));
                        else {
                            cardeb =  ConvertChar(Value(SonTree(SonTree(SonTree(tree, 1), 1), 1)));
                            carend =  ConvertChar(Value(SonTree(SonTree(SonTree(tree, 1), 2), 1)));
                            CaseCharac(cardeb);
                            while ( IncrChar(cardeb, carend) ) {
                                NewLine();
                                CaseCharac(cardeb);
                            }
                            NewLine();
                            CaseCharac(carend);
                        }
                        if ( (tree = SonTree(tree, 2)) ) 
                            NewLine();
                    }
                }
            } else {
                if ( statement ) 
                    WriteString("if (!");
                if ( !inLex ) 
                    if ( SonTree(tree, 1) ) 
                        WriteString("((!tokenAhead || ExtUnputBuf ()) && ");
                    else 
                        WriteString("((tokenAhead && tokenAhead != -1)|| ");
                WriteString("(");
                if ( !SonTree(tree, 1) ) 
                    WriteString("c != EOF");
                else if ( NumberTree(SonTree(tree, 1)) == CHARACTER_metalang ) {
                    WriteString("c == ");
                    Comp(SonTree(tree, 1));
                } else if ( NumberTree(SonTree(tree, 1)) == IN_metalang ) {
                    tree =  SonTree(SonTree(SonTree(tree, 1), 1), 1);
                    i    =  0 ;
                    WriteString("(");
                    while ( tree ) {
                        if ( i ) 
                            WriteString("||");
                        else 
                            i =  1 ;
                        WriteString("(");
                        if ( NumberTree(SonTree(tree, 1)) == CHARACTER_metalang ) {
                            WriteString("c == ");
                            Comp(SonTree(tree, 1));
                        } else {
                            Comp(SonTree(SonTree(tree, 1), 1));
                            WriteString(" <= c && c <= ");
                            Comp(SonTree(SonTree(tree, 1), 2));
                        }
                        WriteString(")");
                        tree =  SonTree(tree, 2);
                    }
                    WriteString(")");
                } else {
                    WriteString("GetString(");
                    WriteString("\"");
                    WriteString(Value(SonTree(SonTree(tree, 1), 1)));
                    WriteString("\"");
                    if ( length ) 
                        WriteString(",1)");
                    else 
                        WriteString(",0)");
                }
                if ( length ) 
                    WriteString("&& NextChar())");
                else 
                    WriteString(")");
                if ( !inLex ) 
                    WriteString(")");
                if ( statement ) {
                    if ( !inLex ) {
                        WriteString(") {");
                        NewLine();
                        Tab();
                        WriteString("LEX_EXIT_GOTO (");
                        WriteString(Label(nameDefine));
                        WriteString(",");
                        WriteString("\"\")");
                        NewLine();
                        WriteString("}");
                        NewLine();
                    } else {
                        WriteString(") ;");
                        NewLine();
                    }
                }
            }
            break ;
        case NOT_metalang : 
            WriteString("(! ");
            Comp(SonTree(tree, 1));
            WriteString(")");
            break ;
        case EXCLA_metalang : 
            {
                AddConst(SymboName(Value(tree), 0));
                if ( cplusGen ) {
                    WriteString(SymboName(Value(tree), 0));
                } else 
                    WriteString(NameOfNode(SymboName(Value(tree), 0)));
                break ;
            }
        case TOKEN_metalang : 
            {
                char    *theValue ;
                tree     =  SonTree(SonTree(tree, 1), 1);
                theValue =  AddKey(BrainyValue(tree));
                if ( cplusGen ) 
                    WriteString(theValue);
                else 
                    WriteString(NameOfNode(theValue));
                break ;
            }
        case TAKE_metalang : 
            tree = SonTree(tree, 1);
            if ( inLex ) {
                if ( cplusGen ) {
                    WriteString("_Tak(");
                    WriteString(Value(tree));
                    WriteString(")");
                } else 
                    WriteString(NameLang(Value(tree)));
                WriteString("();");
                NewLine();
                break ;
            }
            if ( !statement ) 
                if ( NumberTree(tree) == IDENT_metalang ) {
                    accelerator =  FuncAccelerator(tree);
                    if ( accelerator && accelerator != (PPTREE) -1 ) {
                        WriteString("(NPUSH_CALL_AFF_VERIF(");
                    } else 
                        WriteString("(PUSH_CALL_AFF(");
                    if ( equality ) {
                        WriteString(ptEquality);
                        WriteString(" = ");
                    } else 
                        WriteString("NOTHING");
                    WriteString(",");
                    if ( cplusGen ) {
                        WriteString("_Tak(");
                        WriteString(Value(tree));
                        WriteString(")");
                    } else 
                        WriteString(NameLang(Value(tree)));
                    if ( accelerator && accelerator != (PPTREE) -1 ) {
                        WriteString(", ");
                        WriteString(Value(accelerator));
                        WriteString(", ");
                        WriteString(LanguageName(LO_CASE));
                    }
                    WriteString("))");
                } else {
                    WriteString("(");
                    GetToken(ConstString(tree), tree, 1);
                    WriteString("&&");
                    i =  0 ; /* is a meta welcomed here */ 
                    if ( FindConst("META") != -1 && NumberTree(tree) == EXCLA_metalang ) {
                        i =  1 ;
                        WriteString("TERM_OR_META(");
                    } else {
                        WriteString("SEE_TOKEN(");
                    }
                    Comp(tree);
                    WriteString(",\"");
                    CompString(tree);
                    WriteString("\")");
                    if ( equality ) {
                        WriteString(" && !(tokenAhead = 0) && (");
                        if ( !i ) {
                            WriteString(ptEquality);
                            WriteString(" = CommString(lexEl.string())))");
                        } else {
                            WriteString(" BUILD_TERM_META(");
                            WriteString(ptEquality);
                            WriteString("))) ");
                        }
                    } else 
                        WriteString(" && (tokenAhead = 0,CommTerm(),1))");
                }
            else if ( NumberTree(tree) == IDENT_metalang ) {
                WriteString("if ( (");
                if ( equality ) {
                    WriteString(ptEquality);
                    WriteString("=");
                }
                if ( (accelerator = FuncAccelerator(tree)) && accelerator != (PPTREE) -1 ) {
                    WriteString("NQUICK_CALL(");
                }
                if ( cplusGen ) {
                    WriteString("_Tak(");
                    WriteString(Value(tree));
                    WriteString(")");
                } else 
                    WriteString(NameLang(Value(tree)));
                WriteString("(error_free)");
                if ( accelerator && accelerator != (PPTREE) -1 ) {
                    WriteString(", ");
                    WriteString(Value(accelerator));
                    WriteString(", ");
                    WriteString(LanguageName(LO_CASE));
                    WriteString(")");
                }
                WriteString(")== (PPTREE) -1 ) {");
                NewLine();
                Tab();
                FreeGenerated();
#               if 0
                    NewLine();
                    Tab();
                    Mark();
                    FuncLibre(); /* free pointers before exiting */ 
#               endif
                Tab();
                WriteString("PROG_EXIT(");
                WriteString(Label(nameDefine));
                WriteString(",\"");
                WriteString(nameDefine);
                WriteString("\")");
                NewLine();
                WriteString("}");
                NewLine();
            } else {
                GetToken(ConstString(tree), tree, 1);
                WriteString(";");
                NewLine();
                i =  0 ; /* is a meta welcomed here */ 
                if ( FindConst("META") != -1 && NumberTree(tree) == EXCLA_metalang ) {
                    i =  1 ;
                    WriteString("if ( ! TERM_OR_META(");
                } else {
                    WriteString("if (  !SEE_TOKEN( ");
                }
                Comp(tree);
                WriteString(",\"");
                CompString(tree);
                WriteString("\")");
                if ( equality ) {
                    WriteString(" || !(");
                    if ( !i ) {
                        WriteString(ptEquality);
                        WriteString(" = CommString(lexEl.string()))");
                    } else {
                        WriteString("BUILD_TERM_META(");
                        WriteString(ptEquality);
                        WriteString("))");
                    }
                } else 
                    WriteString(" || !(CommTerm(),1)");
                WriteString(") {");
                NewLine();
                Tab();
                FreeGenerated();
#               if 0
                    NewLine();
                    Tab();
                    Mark();
                    FuncLibre(); /* free pointers before exiting */ 
                    UnMark();
#               endif
                Tab();
                WriteString("TOKEN_EXIT(");
                WriteString(Label(nameDefine));
                WriteString(",\"");
                CompString(tree);
                WriteString("\")");
                NewLine();
                WriteString("} else {");
                NewLine();
                Tab();
                WriteString("tokenAhead = 0 ;");
                NewLine();
                WriteString("}");
                NewLine();
            }
            break ;
        case LANGUAGE_metalang : break ;
        case EQUAL_metalang : 
            switch ( NumberTree(SonTree(tree, 2)) ) {
                case NIL_metalang : 
                case FUNC_metalang : 
                case IDENT_metalang : 
                case NUMB_metalang : 
                    if ( !statement ) 
                        WriteString("(");
                    Comp(SonTree(tree, 1));
                    if ( statement ) 
                        WriteString("= ");
                    else 
                        WriteString("== ");
                    Comp(SonTree(tree, 2));
                    if ( !statement ) 
                        WriteString(")");
                    if ( statement ) 
                        if ( NumberTree(SonTree(tree, 2)) == IDENT_metalang ) {
                            WriteString(";");
                            NewLine();
                            interString =  AllocString(Value(SonTree(SonTree(tree, 1), 1)));
                            MakeEquiv(interString, Value(SonTree(SonTree(tree, 2), 1)));
                            free(interString);
                        } else if ( NumberTree(SonTree(tree, 2)) == NIL_metalang ) {
                            WriteString(";");
                            NewLine();
                        }
                    break ;
                case TAKE_metalang : 
                    equality   = 1 ;
                    ptEquality = AllocString(Value(SonTree(SonTree(tree, 1), 1)));
                    Comp(SonTree(tree, 2));
                    equality = 0 ;
                    SetUse(ptEquality);
                    free(ptEquality);
                    break ;
                case MAKETREE_metalang : 
                    interString = AllocString(Value(SonTree(SonTree(tree, 1), 1)));
                    MakeTreeGen(interString, SonTree(tree, 2), 0);
                    free(interString);
                    break ;
                case ADDLIST_metalang : 
                    interString = (char *)0 ;
                    AddListGen(interString, SonTree(tree, 2), 0);
                    break ;
                case REPLACETREE_metalang : 
                    interString = AllocString(Value(SonTree(SonTree(tree, 1), 1)));
                    ReplaceTreeGen(interString, SonTree(tree, 2), 0);
            }
            break ;
        case FUNC_metalang : 
            if ( !statement ) 
                WriteString("(");
            Comp(SonTree(tree, 1));
            WriteString("(");
            tree = SonTree(tree, 2);
            while ( tree ) {
                Comp(SonTree(tree, 1));
                tree =  SonTree(tree, 2);
                if ( tree ) 
                    WriteString(",");
            }
            WriteString(")");
            if ( statement ) {
                WriteString(";");
                NewLine();
            } else 
                WriteString(")");
            break ;
        case ASIT_metalang : 
            if ( !statement ) 
                WriteString("(");
            tree = SonTree(tree, 1);
            while ( tree ) {
                WriteString(Value(SonTree(tree, 1)));
                tree =  SonTree(tree, 2);
                if ( tree ) {
                    NewLine();
                }
            }
            if ( !statement ) 
                WriteString(")");
            else 
                NewLine();
            break ;
        case IDENT_metalang : 
        case NUMB_metalang : 
            WriteString(Value(SonTree(tree, 1)));
            WriteString(" ");
            break ;
        case CHARACTER_metalang : 
            WriteString("'");
            WriteString(Value(SonTree(tree, 1)));
            WriteString("'");
            break ;
        case STRING_metalang : 
            tree      = SonTree(tree, 1);
            treeToken = AddToken(Value(tree), SymboName(Value(tree), 0), treeToken);
            if ( cplusGen ) {
                WriteString(SymboName(Value(tree), 0));
            } else 
                WriteString(NameOfNode(SymboName(Value(tree), 0)));
            break ;
        case CONSTANT_metalang : 
            constList = SonTree(tree, 1);
            tree      = SonTree(tree, 1);
            while ( tree ) {
                AddConst(SymboName(Value(tree), 0));
                tree =  SonTree(tree, 2);
            }
            break ;
        case DECLARE_metalang : 
            WriteString("PPTREE ");
            ptTree = tree = SonTree(tree, 1);
            while ( tree ) {
                son =  SonTree(tree, 1);
                if ( NumberTree(son) == TREE_ARITY_metalang ) {
                    inter =  SonTree(son, 2);
                    son   =  SonTree(son, 1);
                } else 
                    inter =  (PPTREE)0 ;
                Comp(son);
                WriteString("= (PPTREE) 0");
                InsertDecElem(AllocString(Value(son)));
                {
                    PTREE   added = MakeTree(IDENT_metalang, 1);
                    ReplaceTree(added, 1, PTREE(Value(son)));
                    generatedSymb.AddVar(added);
                }
                if ( inter ) {
                    int i = atoi(Value(inter));
                    InitDecElem(Value(son), i);
                }
                tree =  SonTree(tree, 2);
                if ( tree ) 
                    WriteString(",");
            }
            WriteString(";");
            NewLine();
            break ;
        case RETURN_metalang : 
            ReturnGen(tree, 0);
            break ;
        case REPLACETREE_metalang : 
            ReplaceTreeGen((char *)0, tree, 0);
            break ;
        case ADDLIST_metalang : 
            AddListGen((char *)0, tree, 0);
            break ;
        case OR_metalang : 
            Mark();
            WriteString("(");
            Comp(SonTree(tree, 1));
            WriteString(" || ");
            NewLine();
            Comp(SonTree(tree, 2));
            WriteString(")");
            UnMark();
            break ;
        case AND_metalang : 
            Mark();
            WriteString("(");
            Comp(SonTree(tree, 1));
            WriteString(" && ");
            NewLine();
            Comp(SonTree(tree, 2));
            WriteString(")");
            UnMark();
            break ;
        case COND_metalang : 
            WriteString("(");
            Comp(SonTree(tree, 1));
            WriteString(")");
            break ;
        case SKIP_metalang : 
            ptTree = tree = SonTree(tree, 1);
            i      = 0 ;
            if ( inLex ) 
                WriteString("ptStockBuf = -1;");
            else 
                WriteString("ExtUnputBuf();");
            NewLine();
            WriteString("while (");
            while ( tree ) {
                if ( i ) 
                    WriteString("||");
                else 
                    i =  1 ;
                WriteString("(");
                if ( NumberTree(SonTree(tree, 1)) == CHARACTER_metalang ) {
                    WriteString("c == ");
                    Comp(SonTree(tree, 1));
                } else {
                    Comp(SonTree(SonTree(tree, 1), 1));
                    WriteString(" <= c && c <= ");
                    Comp(SonTree(SonTree(tree, 1), 2));
                }
                WriteString(")");
                tree =  SonTree(tree, 2);
            }
            WriteString(")");
            NewLine();
            Tab();
            WriteString("NextChar() ;");
            NewLine();
            WriteString("ptStockBuf = -1;");
            NewLine();
            WriteString("lexEl.Erase();");
            NewLine();
            WriteString("tokenAhead = 0;");
            NewLine();
            WriteString("oldLine=line,oldCol=col;");
            NewLine();
            WriteString("if ( !lexCallLex) {");
            NewLine();
            Tab();
            Mark();
            PUT_COORD ;
            UnMark();
            WriteString("}");
            NewLine();
            break ;
        case RESETLEX_metalang : 
            WriteString("lexEl.Erase() ;");
            NewLine();
            WriteString("if ( lastContextPos && !lastContextPos->nbRef) FreePos(lastContextPos);");
            NewLine();
            WriteString("lastContextPos = (PFILE_POSITION) 0 ;");
            NewLine();
            WriteString("oldLine=line,oldCol=col;");
            NewLine();
            WriteString("if ( !lexCallLex ) {");
            NewLine();
            Tab();
            Mark();
            PUT_COORD ;
            UnMark();
            WriteString("}");
            NewLine();
            break ;
        case FORGET_metalang : 
            WriteString("ptStockBuf = -1;");
            NewLine();
            WriteString("lexEl.Erase();");
            NewLine();
            WriteString("tokenAhead = 0;");
            NewLine();
            WriteString("if ( lastContextPos && !lastContextPos->nbRef) FreePos(lastContextPos);");
            NewLine();
            WriteString("lastContextPos = (PFILE_POSITION) 0 ;");
            NewLine();
            break ;
        case FORGET_SYNTAXIQUE_metalang : 
            WriteString("if ( lastContextPos && !lastContextPos->nbRef) FreePos(lastContextPos);");
            NewLine();
            WriteString("lastContextPos = (PFILE_POSITION) 0 ;");
            NewLine();
            GetToken("Comment", 0, 0);
            WriteString(";");
            NewLine();
            WriteString("tokenAhead = 0;");
            NewLine();
            break ;
        case RECOGNIZE_STRING_metalang : 
            if ( inLex ) 
                DumpToken(treeToken, 0, 0, 0);
            else 
                break ; /* recognize_string is doing a recover */ 
        case RECOVER_metalang : 
            WriteString("if(ptStockBuf > -1) UnputBuf ();");
            NewLine();
            WriteString("lexEl.Erase();");
            NewLine();
            WriteString("tokenAhead = 0;");
            NewLine();
            WriteString("if ( lastContextPos && !lastContextPos->nbRef) FreePos(lastContextPos);");
            NewLine();
            WriteString("lastContextPos = (PFILE_POSITION) 0 ;");
            NewLine();
            break ;
        case STRINGLEX_metalang : 
            WriteString("MakeString(lexEl.string())");
            break ;
        case STORE_COMMENT_LINE_metalang : 
            WriteString("{");
            NewLine();
            Tab();
            Mark();
            WriteString("store_comment_line(lexEl.length());");
            NewLine();
            WriteString("lexEl.Erase();");
            NewLine();
            WriteString("ptStockBuf = -1 ;");
            UnMark();
            NewLine();
            WriteString("}");
            NewLine();
            break ;
        case BEGINNING_metalang : 
            WriteString("{");
            NewLine();
            Tab();
            Mark();
            Comp(SonTree(tree, 1));
            UnMark();
            WriteString("}");
            NewLine();
            break ;
        case NIL_metalang : 
            WriteString("(PPTREE) 0");
            break ;
        case BREAK_metalang : 
            if ( !inLex ) {
                NewLine();
                FreeGenerated();
            }
            WriteString("LEX_EXIT (\"\",0);");
            NewLine();
            WriteString("goto ");
            WriteString(Label(nameDefine));
            WriteString(";");
            NewLine();
            break ;
        default : break ;
    }
    statement  =  oldStatement ;
    equality   =  oldEquality ;
    simpleCase =  oldSimpleCase ;
    ifCase     =  oldIfCase ;
}

/******************************************************************
           CompLexDefine : Compile the lexdefine clause
   *******************************************************************/
extern PPTREE   treeToken ;
extern KEYELEM  *listKey ;

void CompLexDefineInt ( PPTREE tree, int numb )
{
    char            numbString [20];
    PPTREE          son ;
    PDESCRIPT_ELEM  pDescriptComment = FindStringDescript("Comment", (PPTREE)0);
    PDESCRIPT_ELEM  pDescriptMeta = FindStringDescript("META", (PPTREE)0);
    
    constList        =  (PPTREE)0 ; /* a pointer on the constant list */ 
    inLex            =  1 ;
    contextListLocal =  GetWithContext(tree);
    lexNumber        =  numb ;
    WRITE_START_LINE(tree);
    WriteString("int ");
    if ( cplusGen ) {
        WriteString(NameOfNodePlus(Value(tree)));
        WriteString(" ");
    } else 
        WriteString(NameLang(Value(tree)));
    WriteString("()");
    NewLine();
    WriteString("{");
    NewLine();
    Tab();
    Mark();
    
    /* */
    WriteString("if ( lastContextPos && !lastContextPos -> nbRef )");
    NewLine();
    Tab();
    WriteString("FreePos(lastContextPos);");
    NewLine();
    WriteString("lastContextPos = (PFILE_POSITION)0 ;");
    NewLine();
    
    // ELV 12/05/17
    // WriteString("if ( tokenAhead)");
    WriteString("if ( tokenAhead && tokenAhead != -1)");
    NewLine();
    Tab();
    WriteString("ExtUnputBuf();");
    NewLine();
    
    /* */
    WriteString("#ifdef DUMP_COORD");
    NewLine();
    WriteString("if(!lexCallLex && dumpCoord) store_pos_as_comment(line,col,0);");
    NewLine();
    WriteString("#endif");
    NewLine();
    NewLine();
    WriteString("int _bidon = (oldLine = line,oldCol = col );");
    NewLine();
    WriteString("int _bidon1 = (oldLineEntry = line, oldColEntry = col );");
    NewLine();
    
    /* try to parse a comment and meta */
    if ( pDescriptComment && pDescriptComment->proc != sontree(tree, 1) ) {
        
        /* if there is a meta entry call comment only in meta, since
           every lex call meta */
        if ( !pDescriptMeta || pDescriptMeta->proc == sontree(tree, 1) ) {
            GetToken("Comment", 0, 0);
            WriteString(";");
            NewLine();
        }
        
        /* in comment don't call meta : we are still in the above if*/
        if ( pDescriptMeta && pDescriptMeta->proc != sontree(tree, 1) ) {
            WriteString("tokenAhead = 0;");
            NewLine();
            WriteString("if(");
            if ( cplusGen ) 
                WriteString(Value(pDescriptMeta->proc));
            else 
                WriteString(NameLang(Value(pDescriptMeta->proc)));
            WriteString("() != -1){");
            
            // put number of calling function
            WriteString("tokenAhead =");
            itoa(numb, numbString, 10);
            WriteString(numbString);
            WriteString(";");
            WriteString(" return 1;}");
            NewLine();
        }
    }
    
    /* */
    lexFather =  tree ;
    son       =  SonTree(tree, 2);
    while ( son ) {
        WRITE_START_LINE(SonTree(son, 1));
        Comp(SonTree(son, 1));
        son =  SonTree(son, 2);
    }
    {
        int oldCompiledLine = compiledLine ;
        WRITE_STOP_LINE(tree);
        if ( compiledLine == oldCompiledLine ) {
            compiledLine++ ;
            CNewLine();
        }
    }
    if ( pDescriptComment && pDescriptComment->proc == sontree(tree, 1) ) {
        WriteString("if ( lexCallLex) {");
        PUT_COORD_AFTER_COMMENTS ;
        WriteString("}");
    }
    WriteString("line = oldLine;");
    NewLine();
    WriteString("LEX_EXIT(0,\"\")");
    NewLine();
    WriteString("lexEl.Value = -1 ;");
    NewLine();
    RestoreContextLocal();
    WriteString("return -1 ; ");
    UnMark();
    NewLine();
    WriteString("}");
    NewLine();
    inLex =  0 ;
}

void CompLexDefine ( PPTREE tree )
{
    PPTREE  ptTree = tree ;
    char    *oldTheFileName = theFileName ;
    
    while ( ptTree ) {
        if ( ptTree && NumberTree(SonTree(ptTree, 1)) == LEXDEFINE_metalang ) {
            
            // don't compile if not defined at this level
            if ( !ListFind(directDefined, ptTree) ) {
                ptTree =  SonTree(ptTree, 2);
                continue ;
            }
            
            // otherwise go on
            currentLexNumber =  LexNumber(ptTree);
            theFileName      =  AllocString(Value(SonTree(SonTree(ptTree, 1), 3)));
            CompLexDefineInt(SonTree(ptTree, 1), currentLexNumber);
            NewLine();
            free(theFileName);
            theFileName =  oldTheFileName ;
        }
        ptTree =  SonTree(ptTree, 2);
    }
}

void DumpKeyWord ()
{
#   ifdef SUN
#       if 0
            //<< EL the 18/07/97
            NewLine();
            WriteString("#undef toupper");
            NewLine();
            WriteString("static int toupper(int y) {int x=y; x=x>='a' && x<='z' ? x-'a'+'A' : x;return x;}");
            {} // >> EL the 18/07/97
#       endif
        NewLine();
        //<< EL 11/12/97
        //    WriteString("static stringMeta [200];");
        //NewLine();
        //>>
        NewLine();
#   endif
    WriteString("int ");
    if ( cplusGen ) {
        WriteString(LanguageName(LO_CASE));
        WriteString("::");
    }
    WriteString("SortKeyWord (int defaultValue)");
    NewLine();
    WriteString("{");
    NewLine();
    Tab();
    Mark();
    WriteString("register int Value;");
    NewLine();
    SortKey();
    DumpKey(listKey, KeyLength(listKey));
    WriteString("return(defaultValue);");
    NewLine();
    UnMark();
    GotoMark();
    WriteString("}");
    NewLine();
    NewLine();
    WriteString("int ");
    if ( cplusGen ) {
        WriteString(LanguageName(LO_CASE));
        WriteString("::");
    }
    WriteString("UpSortKeyWord(int value) ");
    NewLine();
    WriteString("{");
    NewLine();
    Tab();
    Mark();
    WriteString("register char * ptSource=lexEl.string();");
    NewLine();
    WriteString("for (;*ptSource;ptSource++) *ptSource = toupper(*ptSource);");
    NewLine();
#   if 0
        
        // el the 26/06/97
        /* put a post on last comment */
        PUT_COORD ;
        RestoreContextLocal();
#   endif
    WriteString("return SortKeyWord (value);");
    UnMark();
    NewLine();
    WriteString("}");
    NewLine();
}

/******************************************************************
           InitComp : initialization
   *******************************************************************/
void InitComp ()
{
    currCol   =  0 ;
    ptTabTab  =  0 ;
    ptOutPut  =  outBuf ;
    statement =  1 ;
    firstMeta =  1 ;
    equality  =  0 ;
    ifCase    =  simpleCase = 0 ;
}

/**************************************************************
       TreatUseGrammar : Treat included grammars
   ***************************************************************/
static PTREE    grammListOther = (PPTREE)0 ;
static TabList  *tabDefine = (TabList *)0 ;
static PTREE    currGrammName = (PTREE)0 ;

void TreatUseGrammar ( PPTREE tree )
{
    
    PPTREE  grammElem ; /* an entry in the list of rules */ 
    PPTREE  ruleElem ;  /* a rule elem */ 
    int     oldIsVirtMod = isVirtMod ;
    PTREE   oldCurrGrammName = currGrammName ;
    
    // tell we haven't found any used grammar yet
    if ( !isVirtMod ) {
        directDefined  =  (PPTREE)0 ;
        theUsedGrammar =  (PPTREE)0 ;
    }
    
    /* begin searching an included grammar */
    grammElem =  sontree(tree, 2);
    while ( grammElem ) {
        if ( NumberTree(sontree(grammElem, 1)) == GRAMMAR_USE_metalang ) {
            
            // keep the used grammar
            if ( !isVirtMod && !theUsedGrammar ) {
                theUsedGrammar  =  MakeString(Value(grammElem));
                contextListUsed =  GetWithContext(sontree(grammElem, 1));
            }
                innerGrammar  =  MakeString(Value(grammElem));
            currGrammName =  sontree(sontree(sontree(grammElem, 1), 1), 1);

            EString grammarName = Value(grammElem);
            
            // starting from now on no display
            isVirtMod     =  1 ;
            
            // compute all constants to be compatible with old language
            ChopTree(sontree(sontree(grammElem, 1), 1));
            currGrammName =  oldCurrGrammName ;
            break ;
        }
        grammElem =  sontree(grammElem, 2);
    }
    
    // put rules of current grammar
    {
        PPTREE  listDefine = (PPTREE)0 ;
        PPTREE  rule ;
        ruleElem =  sontree(tree, 2);
        
        // if tab is not allready constructed allocate it now
        if ( !tabDefine ) 
            tabDefine =  new TabList ;
        
        /* look at current grammar */
        while ( ruleElem ) {
            int nbNode = NumberTree(sontree(ruleElem, 1));
            if ( nbNode == LEXDEFINE_metalang || nbNode == DEFINE_metalang ) {
                
                /* if rule is allready there prefix it with the 
                   class name */
                // tabDefine -> Remove(sontree(ruleElem, 1));
                if ( (rule = (PPTREE)(*tabDefine)[ruleElem]) ) {
                    if ( nbNode == DEFINE_metalang ) {
                        char    name [MAXLENGTH];
                        strcpy(name, Value(sontree(rule, 4)));
                        strcat(name, "::");
                        strcat(name, Value(rule));
                        replacetree(rule, 1, MakeString(name));
                        tabDefine->Sort();
                    } else 
                        tabDefine->Remove(ruleElem);
                }
                listDefine =  AddList(copytree(sontree(ruleElem, 1)), listDefine);
                if ( currGrammName ) 
                    ReplaceTree(sontree(listDefine, 1), 4, copytree(currGrammName));
                
                // add the name of all define and lexdefine
                directDefined =  AddList(directDefined, MakeString(Value(ruleElem)));
            } else if ( nbNode != GRAMMAR_USE_metalang && !oldIsVirtMod ) {
                grammListOther =  AddList(copytree(sontree(ruleElem, 1)), grammListOther);
            }
            ruleElem =  sontree(ruleElem, 2);
        }
        
        /* create new list */
        {
            ruleElem =  listDefine ;
            while ( ruleElem && sontree(ruleElem, 2) ) 
                ruleElem =  sontree(ruleElem, 2);
            ReplaceTree(ruleElem, 2, tabDefine->List());
            delete tabDefine ;
            
            // create new tabDefine containing the new functions and
            // the old one not hidden by the new one
            tabDefine =  new TabList(listDefine);
            tabDefine->Sort();
        }
    }
    isVirtMod =  oldIsVirtMod ;
    
    // we sort the defines at any level in order to have the same result
    // when we use a grammar for itself or include in another grammar
    // if not at first level use a copy of the sorted rules since we
    // keep the original for output grammar
    {
        PPTREE  listAll ;
        if ( isVirtMod ) {
            listAll =  copytree(grammListOther);
        } else {
            listAll =  grammListOther ;
        }
        
        // free some memory
        replacetree(tree, 2, (PPTREE)0);
        
        // recompute the whole list and insert it back in the tree
        grammElem =  listAll ;
        while ( grammElem && sontree(grammElem, 2) ) {
            grammElem =  sontree(grammElem, 2);
        }
        if ( grammElem ) {
            if ( isVirtMod ) 
                replacetree(grammElem, 2, copytree(tabDefine->List()));
            else 
                replacetree(grammElem, 2, tabDefine->List());
        } else {
            if ( isVirtMod ) 
                listAll =  copytree(tabDefine->List());
            else 
                listAll =  tabDefine->List();
        }
        
        // put the list back in tree
        replacetree(tree, 2, listAll);
        
        // if finished with TreatUseGrammar destroy the table
        // listAll must not be destroyed since it is inserted back
        // in the tree
        if ( !isVirtMod ) 
            delete tabDefine ;
    }
}

/**************************************************************
       GenerateCHeader : generation of header for c file
   ***************************************************************/
void GenerateCHeader ( PPTREE tree )
{
    char    *ptTab ;
    
    output =  coutput ;
    strcpy(llanguageName, Value(tree));
    ptTab =  strlen(llanguageName) + llanguageName ;
    if ( ptTab > llanguageName + 8 ) 
        ptTab =  llanguageName + 8 ;
    strcpy(ptTab, ".h");
    
    /* generates header */
    EcrireEntete(llanguageName);
}

/**************************************************************
       GenerateHHeader : generation of header for h file
   ***************************************************************/
void GenerateHHeader ( PPTREE tree )
{
    PPTREE  ptTree ;
    char    *otherLanguage ;
    
    /* Generate header header for h file */
    output =  houtput ;
    ptTree =  tree ;
    WriteString("#ifndef ");
    WriteString(LanguageName(UP_CASE));
    WriteString("_PARSER");
    NewLine();
    WriteString("#define ");
    WriteString(LanguageName(UP_CASE));
    WriteString("_PARSER");
    NewLine();
    
    // search global
    ptTree =  tree ;
    while ( (ptTree = SonTree(ptTree, 2)) ) 
        if ( NumberTree(SonTree(ptTree, 1)) == GLOBAL_metalang ) {
            PPTREE  list = MakeTree(LIST, 2);
            replacetree(list, 2, ptGlobal);
            replacetree(list, 1, SonTree(SonTree(ptTree, 1), 1));
            ptGlobal =  list ;
        }
    
    // output the global
    output =  houtput ;
    NewLine();
    Comp(ptGlobal);
    NewLine();
    NewLine();
    
    // 
    if ( !cplusGen ) {
        NewLine();
        NewLine();
        WriteString("#undef TERM_OR_META");
        NewLine();
        WriteString("#undef BUILD_TERM_META");
        NewLine();
        WriteString("#define TERM_OR_META(x,y) (lexEl.Value == x || lexEl.Value ==");
        WriteString("META");
        WriteString("|| (PrintError(GetLexString(),y,oldLine,line,col,1,0),0))");
        NewLine();
        WriteString("#define BUILD_TERM_META(x) (lexEl.Value ==");
        WriteString("META");
        WriteString("?( x =MakeTree(");
        WriteString("META");
        WriteString(",1),ReplaceTree(x,1,CommString(lexEl.string()))): (x= CommString(lexEl.string())))");
        NewLine();
        NewLine();
        otherLanguage =  AllocString("");
    } else {
        WriteString("#ifdef __cplusplus");
        NewLine();
        if ( theUsedGrammar ) {
            char    *oldLanguage = theLanguageName ;
            theLanguageName =  Value(theUsedGrammar);
            LanguageName(LO_CASE);
            otherLanguage   =  AllocString(theLanguageName);
            theLanguageName =  oldLanguage ;
            WriteString("#include \"");
            WriteString(otherLanguage);
            WriteString(".h\"");
            NewLine();
        } else 
            otherLanguage =  AllocString(theLanguageName);
        if ( theUsedGrammar ) {
            char    *oldLanguage = theLanguageName ;
            WriteString("typedef int (");
            theLanguageName =  Value(innerGrammar);
            WriteString(LanguageName(LO_CASE));
            WriteString("::** _FUNC_MEMB_");
            theLanguageName =  oldLanguage ;
            WriteString(LanguageName(UP_CASE));
            
            //            WriteString(otherLanguage);
            WriteString(") ();");
            NewLine();
        }
        WriteString("class ");
        WriteString(LanguageName(LO_CASE));
        
        // if the grammar is derived its class inherit the reference grammar
        if ( theUsedGrammar ) {
            WriteString(": public ");
            WriteString(otherLanguage);
            WriteString(",public virtual Parser");
        } else {
            WriteString(": public virtual Parser");
        }
        WriteString(" {");
        NewLine();
        Tab();
        Mark();
        WriteString("public :");
        NewLine();
        NewLine();
        WriteString("static int init ; ");
        NewLine();
        NewLine();
        
        // constructor
        WriteString(LanguageName(LO_CASE));
        WriteString("() { _InitArrays () ;}");
        NewLine();
        WriteString("virtual void _InitArrays () {");
        NewLine();
        Tab();
        Mark();
        WriteString("ptTokenArray = _tokenArray;");
        NewLine();
        WriteString("ptTokenFuncArray =");
        if ( theUsedGrammar ) {
            WriteString("(_FUNC_MEMB_");
            WriteString(LanguageName(UP_CASE));
            
            //            WriteString(otherLanguage);
            WriteString(")");
        }
        WriteString(" _tokenFuncArray;");
        NewLine();
        WriteString("ptTokenNbFuncArray = _tokenNbFuncArray;");
        NewLine();
        WriteString("InitConst ();");
        
        /* generate declarations for context */
        if ( cplusGen ) {
            PPTREE  list = contextList ;
            if ( list ) 
                NewLine();
            while ( list ) {
                if ( !ListFind(contextListUsed, list) ) {
                    WriteString(Value(list));
                    WriteString(" = 0 ");
                    WriteString(";");
                    NewLine();
                }
                list =  SonTree(list, 2);
            }
        }
        
        /* end constructor */
        NewLine();
        UnMark();
        WriteString("}");
        NewLine();
        NewLine();
        
        // destructor
        WriteString("~");
        WriteString(LanguageName(LO_CASE));
        WriteString(" () {}");
        NewLine();
        NewLine();
        
        // language switcher
        WriteString("virtual void AsLanguage () { SwitchLang(\"");
        WriteString(LanguageName(LO_CASE));
        WriteString("\");}");
        NewLine();
        NewLine();
    }
    ptTree =  tree ;
    
    /* generates function for down casting to the top grammar */
    WriteString("virtual void * rootGrammar () { return (void *) this;}");
    NewLine();
    
    /* generates definition of function in h file */
    while ( (ptTree = SonTree(ptTree, 2)) ) 
        if ( NumberTree(SonTree(ptTree, 1)) == DEFINE_metalang ) {
            if ( ListFind(directDefined, ptTree) ) {
                if ( cplusGen ) {
                    WriteString("virtual ");
                }
                WriteString("PPTREE ");
                if ( cplusGen ) {
                    WriteString(Value(ptTree));
                } else 
                    WriteString(NameLang(Value(ptTree)));
                WriteString(" ( int error_free) ");
                if ( ListFind(directDefined, ptTree) ) 
                    WriteString(";");
                else {
                    
                    // return a call to inherited class
                    WriteString("{");
                    NewLine();
                    Tab();
                    WriteString("return ");
                    WriteString(otherLanguage);
                    WriteString("::");
                    WriteString(Value(ptTree));
                    WriteString("(error_free);}");
                }
                NewLine();
            }
        } else if ( NumberTree(SonTree(ptTree, 1)) == LEXDEFINE_metalang ) {
            if ( ListFind(directDefined, ptTree) ) {
                if ( cplusGen ) {
                    WriteString("virtual ");
                }
                WriteString("int ");
                if ( cplusGen ) {
                    WriteString(Value(ptTree));
                    WriteString("() ");
                } else {
                    WriteString(NameLang(Value(ptTree)));
                    WriteString("() ");
                }
                if ( ListFind(directDefined, ptTree) ) 
                    WriteString(";");
                else {
                    
                    // return a call to inherited class
                    WriteString("{");
                    NewLine();
                    Tab();
                    WriteString("return ");
                    WriteString(otherLanguage);
                    WriteString("::");
                    WriteString(Value(ptTree));
                    WriteString("();}");
                }
                NewLine();
            }
        }
    NewLine();
    NewLine();
    if ( cplusGen ) {
        UnMark();
    }
    
    /* generate definition for with context variables */
    {
        PPTREE  list = contextList ;
        while ( list ) {
            if ( !ListFind(contextListUsed, list) ) {
                Tab();
                if ( !cplusGen ) 
                    WriteString("extern ");
                WriteString("int ");
                WriteString(Value(list));
                WriteString(";");
                NewLine();
            }
            list =  sontree(list, 2);
        }
    }
    free(otherLanguage);
}

/**************************************************************
       GenerateHTrailer : generation of header for h file
   ***************************************************************/
void GenerateHTrailer ()
{
    if ( !cplusGen ) {
        WriteString("#undef SortKeyWord");
        NewLine();
        WriteString("#define SortKeyWord ");
        WriteString(NameLang("SortKeyWord"));
        NewLine();
        WriteString("#undef UpSortKeyWord");
        NewLine();
        WriteString("#define UpSortKeyWord ");
        WriteString(NameLang("UpSortKeyWord"));
        NewLine();
        WriteString("#undef _tokenArray");
        NewLine();
        WriteString("#define _tokenArray ");
        WriteString(NameLang("_tokenArray"));
        NewLine();
        NewLine();
    } else {
        WriteString("#undef _Tak");
        NewLine();
        WriteString("#define _Tak(func) func ");
        NewLine();
    }
    WriteString("#endif");
    NewLine();
}

/**************************************************************
       CompileGrammar : compilation of the grammar
   ***************************************************************/
extern int  metaQuick ;

void CompileGrammar ( PPTREE tree )
{
    
    /* keep contextList */
    PTREE   contextListOld = contextList ;
    PTREE   directDefinedOld = directDefined ;
    PTREE   keepTree = tree ;
    
    contextList   =  (PPTREE)0 ;
    directDefined =  (PPTREE)0 ;
    
    /* initialize */
    copy();
    inReturn =  0 ;
    
    /* add the default constants */
    AddConst("PRE");
    AddConst("POST");
    AddConst("PREPOST");
    AddConst("META");
    AddConst("IN_LANGUAGE");
    DeclareNode("PRE", 1);
    DeclareNode("POST", 1);
    DeclareNode("PREPOST", 1);
    DeclareNode("META", 1);
    DeclareNode("IN_LANGUAGE", 2);
    AddConst(SymboName("META", 0));
    
    /* compute the contextList variables list */
    contextList =  GetWithContext(tree);
    
    /* treat included grammars considering the fact that on PC
       virtual functions do not work with overlays */
    TreatUseGrammar(tree);
    
    /* search token declared in Lex */
    SearchLexToken(SonTree(tree, 2));
    
    /* add lex function containing string and keywork in 
       functions to be defined there */
    {
        PDESCRIPT_ELEM  pDescript ;
        if ( (pDescript = FindStringDescript("String", (PPTREE)0)) ) {
            directDefined =  AddList(directDefined, MakeString(Value(pDescript->proc)));
        }
        if ( (pDescript = FindStringDescript("KeyWord", (PPTREE)0)) ) {
            directDefined =  AddList(directDefined, MakeString(Value(pDescript->proc)));
        }
    }
    if ( !metaQuick ) {
        PTREE   theTree ;
        theTree =  SonTree(tree, 2);
        TreeTokenAnalyze(theTree);
        traitement(tree); /* optimization of addlist */ 
    }
    GenerateCHeader(tree);
    GenerateHHeader(tree);
    
    /* compile all the rules except lex rules */
    output =  coutput ;
    Comp(SonTree(tree, 2));
    
    /* generate a new file for lex part which could be rather
       huge */
    VerifyFileLine(1, llanguageName);
    output =  coutput ;
    
    /* dump the keywords */
    DumpKeyWord();
    
    /* compile lex definitions */
    CompLexDefine(SonTree(tree, 2));
    
    /* suppress line numbering in output */
    compiledLine =  0 ;
    
    /* dump the array of ahead token */
    DumpTokenArray();
    
    /* dump the nodes initialisations */
    DumpTheNode();
    
    /* output of constants */
    if ( cplusGen ) {
        NewLine();
        Tab();
        Mark();
    }
    NewLine();
    DumpConst(listConst);
    
    /* generates h trailer */
    output =  houtput ;
    GenerateHTrailer();
    output =  coutput ;
    
    /* generate declarations for context */
    if ( !cplusGen ) {
        PPTREE  list = contextList ;
        if ( list ) {
            WriteString("int ");
        }
        while ( list ) {
            if ( cplusGen ) {
                WriteString(NameOfNodePlus(Value(list)));
            } else 
                WriteString(Value(list));
            WriteString(" = 0 ");
            list =  SonTree(list, 2);
            WriteString(";");
            NewLine();
        }
    }
#   ifdef SUNOLD
        
        /* generates lisp interface */
        writeLine =  0 ;
        if ( (output = loutput) != 0 ) {
            LispMake();
        }
        output =  coutput ;
#   endif
    
    /* restore old contextList */
    contextList   =  contextListOld ;
    directDefined =  directDefinedOld ;
}

extern PDESCRIPT_ELEM   pDescriptList ;

PDESCRIPT_ELEM FindStringDescript ( const char *constName, PPTREE tree ) /* char * constName ;  the name of the elem we are searching for */ /* PPTREE tree ;  the elem we are searching for */ 
{
    PDESCRIPT_ELEM  pDescript = pDescriptList ;
    int             nbNode ;
    
    /* search in the list */
    for (; pDescript ; pDescript =  pDescript->next ) {
        if ( !strcmp(pDescript->name, constName) ) 
            /* if found anything return the elem */
            return pDescript ;
    }
    
    /* we have found nothing we look for a generic elem  */
    if ( tree ) {
        nbNode =  NumberTree(tree);
        if ( nbNode == TAKE_metalang || nbNode == SEE_metalang ) {
            tree   =  SonTree(tree, 1);
            nbNode =  NumberTree(tree);
        }
        switch ( nbNode ) {
            case STRING_metalang : return FindStringDescript("String", 0);
            case TOKEN_metalang : return FindStringDescript("KeyWord", 0);
        }
    }
    
    /* we have found nothing so return null */
    return (PDESCRIPT_ELEM)0 ;
}

extern char *thePath ;

#include "metagen.h"

PPTREE ParserMetalang::TakeUseGrammar ( const char *name )
{
    EString theName ;
    
    /* search name given in tree in PATH environnment */
    char    *intPath ;
    
    if ( (theName = FindFile(name, thePath, 0)) != "" ) {
        LocalDir((char *)0);
    } else 
        theName =  name ;
    return Parser::ReadInclude(theName.c_str(), 1);
}
