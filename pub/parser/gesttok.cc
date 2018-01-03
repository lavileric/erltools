/*************************************************************************/
/*                                                                       */
/*        gesttok.c - Built by Eric Lavillonniere on Tandon 386 - 89     */
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
#include <ctype.h>
#include "token.h"
#include "metalang.h"

KEYELEM     *listKey = (KEYELEM *)0 ;
int         numberConst = 1 ;
PPTREE      treeToken = (PPTREE)0 ;
char        NumbString [20];
extern int  cplusGen ; /* indicates C++ generation */ 
void        StripName (char *, char *) ;
char        symbName [128];
extern int  currentLexNumber ;
int         MaxNode () ;
int         ArityNodeName (const char *) ;
void        Error (int, const char *, int, int) ;
extern int  compiledLine ;
extern char *theFileName ;

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
 /**************************************************************
            AddConst : adds a Constant to the constant list
    ***************************************************************/ 

int AddConst ( const char *string )
{
    STRINGELEM  *point ;
    int         number ;
    
    /* retrieve or create it */
    if ( (number = FindConst(string)) != - 1 ) 
        return (number);
    else {
        point = (STRINGELEM *)malloc(sizeof(STRINGELEM));
        point -> string = AllocString(string);
        point -> Value = numberConst++ ;
        point -> next = listConst ;
        listConst = point ;
        return point -> Value ;
    }
}

/**************************************************************
           FindKey : looks if a keyword is in the keyword list
   ***************************************************************/
char *FindKey ( char *string )
{
    KEYELEM *point ;
    
    point = listKey ;
    while ( point ) {
        if ( !strcmp(string, point -> string) ) 
            return point -> Value ;
        point = point -> next ;
    }
    return ((char *) - 1);
}

/**************************************************************
           SymboKey : looks if a keyword has a certain symboname
   ***************************************************************/
char *SymboKey ( char *string )
{
    KEYELEM *point ;
    
    point = listKey ;
    while ( point ) {
        if ( !strcmp(string, point -> Value) ) 
            return point -> Value ;
        point = point -> next ;
    }
    return ((char *) - 1);
}

/**************************************************************
           AddKey : Add a keyword to the keyword list
   ***************************************************************/
char *AddKey ( char *string )
{
    KEYELEM *point ;
    int     numb = 0 ;
    char    *symb ;
    
    if ( (symb = FindKey(string)) != (char *) - 1 ) 
        ;
    else {
        point = (KEYELEM *)malloc(sizeof(KEYELEM));
        point -> string = AllocString(string);
        point -> Value = AllocString(SymboName(string, 0));
        while ( SymboKey(point -> Value) != (char *) - 1 ) {
            free(point -> Value);
            point -> Value = AllocString(SymboName(string, ++numb));
        }
        AddConst(point -> Value);
        point -> next = listKey ;
        listKey = point ;
        symb = point -> Value ;
    }
    return symb ;
}

/**************************************************************
           DumpKey : Dump the keyWord list
   ***************************************************************/
void DumpKey ( KEYELEM *list, int length )
{
    register int        nb ;
    register KEYELEM    *ptList ;
    
    if ( !length ) {
        WriteString("return(defaultValue);");
        NewLine();
    } else if ( length == 1 ) {
        WriteString("if(!strcmp(lexEl.string(),\"");
        WriteString(list -> string);
        WriteString("\")) {");
        NewLine();
        Tab();
        WriteString("return(");
        if ( cplusGen ) {
            WriteString(list -> Value);
        } else 
            WriteString(NameOfNode(list -> Value));
        WriteString(") ;");
        NewLine();
        WriteString("}");
        NewLine();
    } else {
        nb = length / 2 ;
        ptList = list ;
        while ( --nb ) 
            ptList = ptList -> next ;
        ptList = ptList -> next ;
        WriteString("Value = strcmp(lexEl.string(),\"");
        WriteString(ptList -> string);
        WriteString("\");");
        NewLine();
        WriteString("if (Value > 0) {");
        NewLine();
        Tab();
        Mark();
        DumpKey(ptList -> next, length - length / 2 - 1);
        UnMark();
        GotoMark();
        WriteString("} else if (Value < 0) {");
        NewLine();
        Tab();
        Mark();
        DumpKey(list, length / 2);
        UnMark();
        GotoMark();
        WriteString("} else ");
        NewLine();
        Tab();
        WriteString("return(");
        if ( cplusGen ) {
            WriteString(ptList -> Value);
        } else 
            WriteString(NameOfNode(ptList -> Value));
        WriteString(");");
        NewLine();
    }
}

/**************************************************************
      ExchKey : exchange two keys
   ***************************************************************/
void ExchKey ( KEYELEM *key1, KEYELEM *key2 )
{
    register char   *Value ;
    
    Value = key1 -> string ;
    key1 -> string = key2 -> string ;
    key2 -> string = Value ;
    Value = key1 -> Value ;
    key1 -> Value = key2 -> Value ;
    key2 -> Value = Value ;
}

/**************************************************************
           SortKey : sort the key list
   ***************************************************************/
void SortKey ()
{
    register KEYELEM    *firstKey, *varKey ;
    
    firstKey = listKey ;
    while ( firstKey ) {
        varKey = firstKey -> next ;
        while ( varKey ) {
            if ( strcmp(varKey -> string, firstKey -> string) < 0 ) 
                ExchKey(firstKey, varKey);
            varKey = varKey -> next ;
        }
        firstKey = firstKey -> next ;
    }
}

/**************************************************************
           KeyLength : compute length of list key
   ***************************************************************/
int KeyLength ( KEYELEM *list )
{
    register int    length = 0 ;
    
    while ( list ) {
        length++ ;
        list = list -> next ;
    }
    return (length);
}

/**************************************************************
           DumpConst : Dump the constant list
   ***************************************************************/
extern int  output, coutput, houtput ;

void StripName ( char *name, char *string )
{
    char    *ptString ;
    
    strcpy(string, name);
    ptString = string + strlen(string) - 1 ;
    while ( ptString >= string && *ptString != '_' ) 
        ptString-- ;
    if ( ptString >= string && !strcmp(ptString + 1, LanguageName(LO_CASE)) ) {
        *ptString = '\0';
    }
}

void DumpConst ( STRINGELEM *tree )
{
    STRINGELEM  *theTree = tree ;
    char        string [MAXLENGTH];
    
    if ( !tree ) 
        return ;
    output = houtput ;
    if ( cplusGen ) {
        WriteString("virtual int SortKeyWord (int ret);");
        NewLine();
        WriteString("virtual int UpSortKeyWord (int ret); ");
        NewLine();
        WriteString("virtual void InitConst ();");
        NewLine();
        NewLine();
        WriteString("enum constants {");
        NewLine();
        Tab();
        Mark();
        while ( tree ) {
            if ( tree -> Value >= 6 ) {
                
                /* on imprime la string sans le trailing language */
                /*                StripName(tree -> string, string);*/
                WriteString(tree -> string);
                
                /* */
                WriteString(" = ");
                _itoa(tree -> Value, NumbString, 10);
                Tab();
                WriteString(NumbString);
                WriteString(" ,");
                NewLine();
            }
            tree = tree -> next ;
        }
        WriteString("PLACE_HOLD_CONST");
        NewLine();
        UnMark();
        WriteString("} ; ");
        NewLine();
        UnMark();
        WriteString("} ; ");
        NewLine();
        NewLine();
        WriteString("extern ");
        WriteString(LanguageName(LO_CASE));
        WriteString(" * ");
        WriteString(NameLang("parser"));
        WriteString(";");
        NewLine();
        NewLine();
        
        /* for #ifdef __cplusplus */
        WriteString("#endif");
        NewLine();
    }
    
    /* repositionne tree sur sa valeur initiale */
    tree = theTree ;
    while ( tree ) {
        if ( tree -> Value >= 6 ) {
            WriteString("#define ");
            WriteString(NameOfNode(tree -> string));
            WriteString(" ");
            _itoa(tree -> Value, NumbString, 10);
            Tab();
            WriteString(NumbString);
            NewLine();
        }
        tree = tree -> next ;
    }
    output = coutput ;
    tree = theTree ;
    WriteString("STRINGELEM * ");
    WriteString(NameLang("listConst"));
    WriteString(";");
    NewLine();
    WriteString("PPTREE ");
    WriteString(NameLang("bri_parse_entry"));
    WriteString("(int error_free) {");
    NewLine();
    WriteString("return ");
    WriteString(LanguageName(LO_CASE));
    WriteString("() . parse_entry (error_free);");
    NewLine();
    WriteString("}");
    NewLine();
    NewLine();
    if ( cplusGen ) {
        WriteString("int ");
        WriteString(LanguageName(LO_CASE));
        WriteString("::init = 0 ;");
        NewLine();
        NewLine();
    }
    WriteString("void ");
    if ( cplusGen ) {
        WriteString(LanguageName(LO_CASE));
        WriteString("::InitConst");
    } else 
        WriteString(NameLang("InitConst"));
    WriteString("()");
    NewLine();
    WriteString("{");
    NewLine();
    Tab();
    Mark();
    if ( cplusGen ) {
        WriteString("if (!");
        WriteString(LanguageName(LO_CASE));
        WriteString("::init) {");
        NewLine();
        Tab();
        Mark();
        WriteString(LanguageName(LO_CASE));
        WriteString("::init = 1 ;");
        NewLine();
        NewLine();
    }
    WriteString("STRINGELEM * inter = listConst;");
    NewLine();
    WriteString("listConst = (STRINGELEM *) 0;");
    NewLine();
    while ( tree ) {
        WriteString("AddConstVal(\"");
        if ( cplusGen ) {
            StripName(tree -> string, string);
            if ( tree -> Value >= 6 ) {
                WriteString(LanguageName(LO_CASE));
                WriteString("::");
            }
            WriteString(string);
        } else 
            WriteString(tree -> string);
        WriteString("\", ");
        _itoa(tree -> Value, NumbString, 10);
        WriteString(NumbString);
        WriteString(");");
        NewLine();
        tree = tree -> next ;
    }
    WriteString("AddConstVal(\"LIST\",0);");
    NewLine();
    WriteString(NameLang("listConst"));
    WriteString(" = listConst;");
    NewLine();
    WriteString("listConst = inter;");
    NewLine();
    WriteString("AddLang(\"");
    WriteString(LanguageName(LO_CASE));
    WriteString("\",");
    
    /* modif EL le 12/10/93 suppression arity
       WriteString(NameLang("Arity"));
       WriteString(",");*/
    WriteString(NameLang("_arityNode"));
    WriteString(",");
    WriteString(NameLang("listConst"));
    WriteString(",");
    WriteString(NameLang("bri_parse_entry")); /* c is fucking with
                                                 the segment so we can't call parse_entry */ 
    WriteString(",");
    _itoa(MaxNode(), NumbString, 10);
    WriteString(NumbString);
    WriteString(",");
    WriteString("(OVER_LANG *) 0");
    WriteString(");");
    NewLine();
    if ( cplusGen ) {
        WriteString("}");
        UnMark();
        NewLine();
    }
    UnMark();
    WriteString("}");
    NewLine();
}

/**************************************************************
           SecateString : transform a string in a good list
   ***************************************************************/
PPTREE SecateString ( char *name, char *string )
{
    PPTREE  pTree ;
    
    pTree = MakeTree(*string, 1);
    if ( !*string ) {
        AddConst(name);
        SReplaceTree(pTree, 1, MakeString(name));
    } else 
        SReplaceTree(pTree, 1, SecateString(name, string + 1));
    return (pTree);
}

/**************************************************************
           AddToken : add a token to the list tree
                     create a forest of the different tokens
   ***************************************************************/
PPTREE AddToken ( char *name, char *symb, PPTREE tree )
{
    register PPTREE ptTree, ptTree1 ;
    
    ptTree = tree ;
    if ( !ptTree || NumberTree(ptTree) == 1 ) {
        while ( ptTree && NumberTree(SonTree(ptTree, 1)) != *name ) 
            ptTree = SonTree(ptTree, 2);
        if ( !ptTree ) {
            ptTree = MakeTree(1, 2);
            SReplaceTree(ptTree, 1, SecateString(symb, name));
            if ( !tree ) 
                return (ptTree);
            else {
                ptTree1 = tree ;
                while ( SonTree(ptTree1, 2) ) 
                    ptTree1 = SonTree(ptTree1, 2);
                SReplaceTree(ptTree1, 2, ptTree);
            }
        } else 
            AddToken(name, symb, SonTree(ptTree, 1));
    } else {
        ptTree1 = ptTree ;
        while ( NumberTree(ptTree) == *name && *name ) {
            name++ ;
            ptTree1 = ptTree ;
            ptTree = SonTree(ptTree, 1);
        }
        if ( NumberTree(ptTree) != 1 && NumberTree(ptTree) != *name ) {
            ptTree = MakeTree(1, 2);
            SReplaceTree(ptTree, 1, SonTree(ptTree1, 1));
            SReplaceTree(ptTree1, 1, ptTree);
            ptTree1 = MakeTree(1, 2);
            SReplaceTree(ptTree1, 1, SecateString(symb, name));
            SReplaceTree(ptTree, 2, ptTree1);
        } else if ( NumberTree(ptTree) == 1 ) 
            AddToken(name, symb, ptTree);
    }
    return (tree);
}

/**************************************************************
           ConvertAscii : convert a character to a standard ascii
   ***************************************************************/
char *ConvertAscii ( char *dest, char car )
{
    if ( car >= 'a' && car <= 'z' || car >= 'A' && car <= 'Z' || car >= '0' && car <= '9' ) {
        *dest++ = car ;
        return (dest);
    }
    {
        char    *string ;
        switch ( car ) {
            case ' ' : 
                string = (char *)"espa";
                break ;
            case '!' : 
                string = (char *)"excl";
                break ;
            case '"' : 
                string = (char *)"dquo";
                break ;
            case '#' : 
                string = (char *)"dies";
                break ;
            case '$' : 
                string = (char *)"doll";
                break ;
            case '%' : 
                string = (char *)"pourc";
                break ;
            case '\'' : 
                string = (char *)"squo";
                break ;
            case '(' : 
                string = (char *)"pouv";
                break ;
            case ')' : 
                string = (char *)"pfer";
                break ;
            case '*' : 
                string = (char *)"etoi";
                break ;
            case '+' : 
                string = (char *)"plus";
                break ;
            case ',' : 
                string = (char *)"virg";
                break ;
            case '-' : 
                string = (char *)"tire";
                break ;
            case '.' : 
                string = (char *)"poin";
                break ;
            case '/' : 
                string = (char *)"slas";
                break ;
            case ':' : 
                string = (char *)"dpoi";
                break ;
            case ';' : 
                string = (char *)"pvir";
                break ;
            case '<' : 
                string = (char *)"infe";
                break ;
            case '>' : 
                string = (char *)"supe";
                break ;
            case '=' : 
                string = (char *)"egal";
                break ;
            case '?' : 
                string = (char *)"inte";
                break ;
            case '[' : 
                string = (char *)"couv";
                break ;
            case ']' : 
                string = (char *)"cfer";
                break ;
            case '{' : 
                string = (char *)"aouv";
                break ;
            case '}' : 
                string = (char *)"afer";
                break ;
            case '\\' : 
                string = (char *)"bsla";
                break ;
            case '^' : 
                string = (char *)"chap";
                break ;
            case '_' : 
                string = (char *)"_";
                break ;
            case '|' : 
                string = (char *)"vbar";
                break ;
            case '~' : 
                string = (char *)"tild";
                break ;
            case '&' : 
                string = (char *)"etco";
                break ;
            case '@' : 
                string = (char *)"arro";
                break ;
            default : string = (char *)"unkn";
        }
        strcpy(dest, string);
        return dest + strlen(string);
    }
}

/**************************************************************
           SymbName : compute symbol name for a token
   ***************************************************************/
// #define toupper(x) ((x>='a' && x<= 'z')? x+'A'-'a':x)
char *SymboName ( const char *name, int numb )
{
    register char   *ptDest ;
    
    ptDest = symbName ;
    while ( *name ) 
        ptDest = ConvertAscii(ptDest, *name++);
    *ptDest = '\0';
    ptDest = symbName ;
    for (; *ptDest ; ptDest++ ) 
        *ptDest = toupper(*ptDest);
    if ( numb ) {
        *ptDest++ = '0' + numb ;
        *ptDest = '\0';
    }
    return (symbName);
}

/**************************************************************
           SimpleString : is the tree a simple string;
   ***************************************************************/
int SimpleString ( PPTREE tree )
{
    register int    numb ;
    
    while ( (numb = NumberTree(tree)) && numb != 1 ) 
        tree = SonTree(tree, 1);
    return !numb ;
}

/**************************************************************
           DumpString : dump the string of a simple tree
   ***************************************************************/
void DumpString ( PPTREE tree )
{
    char    string [2];
    
    string [1] = 0 ;
    WriteString("\"");
    while ( *string = NumberTree(tree) ) {
        WriteString(string);
        tree = SonTree(tree, 1);
    }
    WriteString("\"");
}

/**************************************************************
      DumpName : dump the formal name of a simple tree
   ***************************************************************/
void DumpName ( PPTREE tree )
{
    char    string [MAXLENGTH];
    
    if ( cplusGen ) {
        StripName(Value(tree), string);
        WriteString(LanguageName(LO_CASE));
        WriteString("::");
        WriteString(string);
    } else {
        WriteString(Value(tree));
    }
}

/**************************************************************
           PrintExit : print an exit depending of level
   ***************************************************************/
void PrintExit ( const char *name, int level )
{
    char    intString [10];
    
    WriteString("_exit");
    WriteString(name);
    _itoa(level, intString, 10);
    WriteString(intString);
}

/**************************************************************
           DumpToken  : Dump The token
   ***************************************************************/
static int  genLevel = 1 ;

void DumpToken ( PPTREE tree, int level, int exitLevel, int diffLevel )
{
    PPTREE  ptTree ;
    char    string [10];
    char    *defaultString ;
    
    if ( !tree ) 
        return ;
    ptTree = tree ;
    defaultString = (char *)0 ;
    if ( !level ) {
        WriteString("int keepCurrCol = col ;");
        NewLine();
    }
    if ( NumberTree(ptTree) == 1 ) {
        WriteString("switch(c) {");
        NewLine();
        Tab();
        Mark();
        while ( ptTree ) {
            if ( NumberTree(SonTree(ptTree, 1)) ) {
                WriteString("case '");
                string [1] = '\0';
                string [0] = (char)NumberTree(SonTree(ptTree, 1));
                WriteString(string);
                WriteString("' :");
                NewLine();
                Tab();
                Mark();
                WriteString("NextChar();");
                NewLine();
                DumpToken(SonTree(SonTree(ptTree, 1), 1), genLevel += 1, level, 1);
                WriteString("break;");
                NewLine();
                UnMark();
                GotoMark();
            } else {
                defaultString = AllocString(Value(SonTree(SonTree(ptTree, 1), 1)));
                if ( cplusGen ) 
                    StripName(defaultString, defaultString);
            }
            ptTree = SonTree(ptTree, 2);
        }
        PrintExit("DumpToken", level);
        WriteString(" :;");
        NewLine();
        WriteString("default :");
        NewLine();
        Tab();
        if ( defaultString ) {
            WriteString("lexEl.Value = ");
            if ( cplusGen ) {
                WriteString(LanguageName(LO_CASE));
                WriteString("::");
            }
            WriteString(defaultString);
            WriteString(";");
            NewLine();
            Tab();
            WriteString("firstOnLine = 0;");
            NewLine();
            Tab();
            sprintf(string, "%d", currentLexNumber);
            WriteString("tokenAhead = ");
            WriteString(string);
            WriteString(";");
            NewLine();
            Tab();
            Mark();
            
            /* put a post on last comment */
            PUT_COORD ;
            UnMark();
            NewLine();
            Tab();
            WriteString("return(1);");
            NewLine();
            free(defaultString);
        } else {
            if ( level ) {
                WriteString("UnputChar(");
                _itoa(diffLevel, string, 10);
                WriteString(string);
                WriteString(");");
                NewLine();
                WriteString("goto ");
                PrintExit("DumpToken", exitLevel);
                WriteString(";");
                NewLine();
            } else {
                WriteString("break;");
                NewLine();
            }
        }
        UnMark();
        GotoMark();
        WriteString("}");
        NewLine();
    } else {
        if ( !NumberTree(tree) ) {
            WriteString("lexEl.Value = ");
            DumpName(tree);
            WriteString(";");
            NewLine();
            WriteString("firstOnLine = 0;");
            NewLine();
            sprintf(string, "%d", currentLexNumber);
            WriteString("tokenAhead = ");
            WriteString(string);
            WriteString(";");
            NewLine();
            
            /* put a post on last comment */
            PUT_COORD ;
            WriteString("return(1);");
            NewLine();
        } else if ( SimpleString(ptTree) ) {
            WriteString("if (GetStringS(");
            DumpString(ptTree);
            WriteString(",1)) {");
            NewLine();
            Tab();
            Mark();
            WriteString("lexEl.Value = ");
            DumpName(ptTree);
            WriteString(";");
            NewLine();
            WriteString("firstOnLine = 0;");
            NewLine();
            sprintf(string, "%d", currentLexNumber);
            WriteString("tokenAhead = ");
            WriteString(string);
            WriteString(";");
            NewLine();
            
            /* put a post on last comment */
            PUT_COORD ;
            WriteString("return(1);");
            UnMark();
            NewLine();
            WriteString("} else {");
            NewLine();
            Tab();
            Mark();
            WriteString("UnputChar(");
            _itoa(diffLevel, string, 10);
            WriteString(string);
            WriteString(");");
            NewLine();
            WriteString("goto ");
            PrintExit("DumpToken", exitLevel);
            WriteString(";");
            UnMark();
            NewLine();
            WriteString("}");
            NewLine();
        } else {
            WriteString("if ( c== '");
            string [0] = (char)NumberTree(ptTree);
            string [1] = '\0';
            WriteString(string);
            WriteString("') {");
            NewLine();
            Tab();
            Mark();
            WriteString("NextChar();");
            NewLine();
            DumpToken(SonTree(tree, 1), genLevel += 1, exitLevel, diffLevel + 1);
            UnMark();
            GotoMark();
            WriteString("} else {");
            NewLine();
            Tab();
            Mark();
            WriteString("UnputChar(");
            _itoa(diffLevel, string, 10);
            WriteString(string);
            WriteString(");");
            NewLine();
            WriteString("goto ");
            PrintExit("DumpToken", exitLevel);
            WriteString(";");
            UnMark();
            NewLine();
            WriteString("}");
            NewLine();
        }
    }
    
    /* restore col since string was not found */
    if ( !level ) {
        WriteString("col = keepCurrCol ;");
        NewLine();
    }
}

PNODE   listNode = (PNODE)0 ;

/**************************************************************
           AllocNode : allocates a node
   ***************************************************************/
PNODE AllocNode ()
{
    register PNODE  pNode = (PNODE)malloc(sizeof(NODE));
    
    return (pNode);
}

/**************************************************************
           NodeDeclare : declare a new node
   ***************************************************************/
void DeclareNode ( const char *name, int arity )
{
    PNODE   ptNode ;
    int     old_arity ;
    
    if ( (old_arity = ArityNodeName(name)) != - 1 ) 
        if ( old_arity != arity ) 
            Error(4, name, 1, arity);
        else 
            ;
    else {
        ptNode = AllocNode();
        ptNode -> name = AllocString(name);
        ptNode -> number = AddConst(name);
        ptNode -> arity = arity ;
        ptNode -> next = listNode ;
        listNode = ptNode ;
    }
}

/**************************************************************
      ArityNodeName : returns the arity of node of a given name
   ***************************************************************/
int ArityNodeName ( const char *name )
{
    PNODE   ptNode = listNode ;
    
    while ( ptNode ) {
        if ( !strcmp(name, ptNode -> name) ) 
            return ptNode -> arity ;
        ptNode = ptNode -> next ;
    }
    return - 1 ;
}

/**************************************************************
      ArityNode : returns the arity of a given node
   ***************************************************************/
int ArityNode ( int numb )
{
    PNODE   ptNode = listNode ;
    
    while ( ptNode ) {
        if ( ptNode -> number == numb ) 
            return ptNode -> arity ;
        ptNode = ptNode -> next ;
    }
    return - 1 ;
}

/**************************************************************
      NumberNodeName : returns the number of node of a given name
   ***************************************************************/
int NumberNodeName ( char *name )
{
    PNODE   ptNode = listNode ;
    
    while ( ptNode ) {
        if ( !strcmp(name, ptNode -> name) ) 
            return ptNode -> number ;
        ptNode = ptNode -> next ;
    }
    return - 1 ;
}

/**************************************************************
      NameNode : returns the name of a given node
   ***************************************************************/
char *NameNode ( int numb )
{
    PNODE   ptNode = listNode ;
    
    while ( ptNode ) {
        if ( ptNode -> number == numb ) 
            return ptNode -> name ;
        ptNode = ptNode -> next ;
    }
    return ((char *)0);
}

/**************************************************************
      MaxNode : returns the number of the greatest node
   ***************************************************************/
int MaxNode ()
{
    PNODE   ptNode = listNode ;
    int     max = 0 ;
    
    while ( ptNode ) {
        if ( ptNode -> number > max ) 
            max = ptNode -> number ;
        ptNode = ptNode -> next ;
    }
    return (max);
}

/**************************************************************
      DumpNode : dump the array of node arity
   ***************************************************************/
void DumpTheNode ()
{
    int     i, j = 0, max = MaxNode();
    char    numb [10];
    
    WriteString("int ");
    WriteString(NameLang("_arityNode"));
    WriteString("[] = {");
    Mark();
    WriteString("   2");
    for ( i = 1 ; i <= max ; i++ ) {
        WriteString(" , ");
        _itoa(ArityNode(i), numb, 10);
        WriteString(numb);
        if ( j++ == 10 ) {
            NewLine();
            j = 0 ;
        }
    }
    UnMark();
    WriteString(" };");
    NewLine(); /*     WriteString(NameLang("Arity"));
                  WriteString("(node)");
                  NewLine();
                  WriteString("int node;");
                  NewLine();
                  WriteString("{ return (node>=0?");
                  WriteString(NameLang("_arityNode"));
                  WriteString("[node]:0);}");
                  NewLine();  */ 
}

/**************************************************************
        *Descript* : gestion des valeurs lex
   ***************************************************************/
PDESCRIPT_ELEM  pDescriptList = (PDESCRIPT_ELEM)0 ;
PDESCRIPT_ELEM  pDescriptListFree = (PDESCRIPT_ELEM)0 ;

PDESCRIPT_ELEM FindDescript ( int numb )
{
    PDESCRIPT_ELEM  pDescript = pDescriptList ;
    
    /* search in the list */
    for (; pDescript ; pDescript = pDescript -> next ) {
        if ( pDescript -> numb == numb ) 
            /* if found anything return the elem */
            return pDescript ;
    }
    
    /* we have found nothing return null */
    return (PDESCRIPT_ELEM)0 ;
}

void InsertDescript ( int numb, const char *name, int offset, PPTREE proc )
{
    PDESCRIPT_ELEM  pDescript ;
    
    /* if elem allready exists do nothing */
    if ( FindDescript(numb) ) 
        return ;
    
    /* otherwise insert it */
    if ( pDescriptListFree ) {
        pDescript = pDescriptListFree ;
        pDescriptListFree = pDescriptListFree -> next ;
    } else {
        pDescript = (PDESCRIPT_ELEM)malloc(sizeof(DESCRIPT_ELEM));
    }
    pDescript -> numb = numb ;
    pDescript -> name = AllocString(name);
    pDescript -> offset = offset ;
    pDescript -> proc = proc ;
    pDescript -> next = pDescriptList ;
    pDescriptList = pDescript ;
}

void FreeDescriptList ()
{
    PDESCRIPT_ELEM  ptDescript ;
    
    pDescriptListFree = pDescriptList ;
    pDescriptList = (PDESCRIPT_ELEM)0 ;
    for ( ptDescript = pDescriptListFree ; ptDescript ; ptDescript = ptDescript -> next ) {
        free(ptDescript -> name);
    }
}

extern char *LanguageName (int) ;

/* #define tolower(x) (x<= 'Z' && x >= 'A' ? x-'A'+'a' : x) */
char *LowerNameNode ( char *dest, int i )
{
    char    *ptSource, *ptDest, c ;
    
    ptSource = NameNode(i);
    ptDest = dest ;
    if ( ptSource ) 
        while ( *ptSource ) {
            c = *ptSource++ ;
            *ptDest++ = tolower(c);
        }
    *ptDest = '\0';
    return dest ;
}

/**************************************************************
      ShortName  : name of node without language
   ***************************************************************/
char *ShortName ( char *string )
{
    char    *ptString ;
    
    ptString = string + strlen(string) - 1 ;
    while ( ptString >= string && *ptString != '_' ) 
        ptString-- ;
    if ( ptString >= string ) 
        *ptString = '\0';
    return string ;
}

void LispMake ()
{
#if 0
    
    int     i, j, max = MaxNode();
    char    numb [10], name [256];
    
    WriteString("(#:parser:build-parser ");
    WriteString(LanguageName(UP_CASE));
    WriteString(")");
    NewLine();
    WriteString("(#:parser:init-parser '");
    WriteString(LanguageName(LO_CASE));
    WriteString(")");
    NewLine();
    WriteString("(external-var ");
    WriteString(LanguageName(UP_CASE));
    WriteString("_func ()) ");
    NewLine();
    WriteString("(external-var ");
    WriteString(LanguageName(UP_CASE));
    WriteString("_arity ()) ");
    NewLine();
    WriteString("(external-var ");
    WriteString(LanguageName(UP_CASE));
    WriteString("_operator ()) ");
    NewLine();
    NewLine();
    WriteString("(setq ");
    WriteString(LanguageName(UP_CASE));
    WriteString("_func (makevector ");
    _itoa(max + 1, numb, 10);
    WriteString(numb);
    WriteString(" ()))");
    NewLine();
    WriteString("(setq ");
    WriteString(LanguageName(UP_CASE));
    WriteString("_arity (makevector ");
    _itoa(max + 1, numb, 10);
    WriteString(numb);
    WriteString(" ()))");
    NewLine();
    WriteString("(setq ");
    WriteString(LanguageName(UP_CASE));
    WriteString("_operator (makevector ");
    _itoa(max + 1, numb, 10);
    WriteString(numb);
    WriteString(" ()))");
    NewLine();
    NewLine();
    WriteString("(de ");
    WriteString(LanguageName(UP_CASE));
    WriteString("_set (pos name )");
    NewLine();
    Tab();
    Mark();
    WriteString("(exception-catch {name}:undefined-operator");
    NewLine();
    Tab();
    WriteString("(vset ");
    WriteString(LanguageName(UP_CASE));
    WriteString("_arity pos ");
    WriteString("({operator}:arity ({name}:operator name ({name}:formalism '");
    WriteString(LanguageName(UP_CASE));
    WriteString(")))))");
    NewLine();
    WriteString("(exception-catch {name}:undefined-operator");
    NewLine();
    Tab();
    WriteString("(vset ");
    WriteString(LanguageName(UP_CASE));
    WriteString("_operator pos ");
    WriteString("({name}:operator name ({name}:formalism '");
    WriteString(LanguageName(UP_CASE));
    WriteString("))))");
    WriteString(")");
    UnMark();
    NewLine();
    NewLine();
    WriteString("(de ");
    WriteString(LanguageName(UP_CASE));
    WriteString("_operator ( name )");
    NewLine();
    Tab();
    Mark();
    WriteString("(exception-catch {name}:undefined-operator");
    NewLine();
    Tab();
    WriteString("({name}:operator name ({name}:formalism '");
    WriteString(LanguageName(UP_CASE));
    WriteString(")))");
    WriteString(")");
    UnMark();
    NewLine();
    NewLine();
    WriteString("(de ");
    WriteString(LanguageName(UP_CASE));
    WriteString("_init ()");
    NewLine();
    Tab();
    Mark();
    for ( i = 4 ; i <= max ; i++ ) 
        if ( ArityNode(i) >= 0 ) {
            WriteString("(vset ");
            WriteString(LanguageName(UP_CASE));
            WriteString("_func ");
            Tab();
            _itoa(i, numb, 10);
            WriteString(numb);
            Tab();
            WriteString("'");
            WriteString(LanguageName(UP_CASE));
            WriteString("_ntree_");
            WriteString(numb);
            WriteString(")");
            NewLine();
            WriteString("(");
            WriteString(LanguageName(UP_CASE));
            WriteString("_set ");
            _itoa(i, numb, 10);
            Tab();
            Tab();
            WriteString(numb);
            Tab();
            WriteString("'");
            ShortName(LowerNameNode(name, i));
            WriteString(name);
            Tab();
            WriteString(")");
            NewLine();
        }
    UnMark();
    WriteString(")");
    NewLine();
    NewLine();
    for ( i = 4 ; i <= max ; i++ ) 
        if ( ArityNode(i) >= 0 ) {
            ShortName(LowerNameNode(name, i));
            WriteString("(de ");
            WriteString(LanguageName(UP_CASE));
            WriteString("_ntree_");
            _itoa(i, numb, 10);
            WriteString(numb);
            WriteString(" () ");
            NewLine();
            Tab();
            Mark();
            WriteString("({tree}:make (make-constant (");
            WriteString(LanguageName(UP_CASE));
            WriteString("_operator '");
            WriteString(name);
            WriteString("))");
            for ( j = 1 ; j <= ArityNode(i) ; j++ ) 
                WriteString(" (#:metagen:pop)");
            WriteString("))");
            NewLine();
            UnMark();
            NewLine();
        }
    WriteString("(");
    WriteString(LanguageName(UP_CASE));
    WriteString("_init)");
    NewLine();
#endif
}

/**************************************************************
      CMake : make a c interface for calling the vtp
   ***************************************************************/
void CMake ()
{
#if 0
    
    int     i, max = MaxNode();
    char    numb [10], *ptSource, *ptDest, name [256], c ;
    
    NewLine();
    WriteString("struct LL_SYMBOL * ");
    WriteString(LanguageName(UP_CASE));
    WriteString("_func [");
    _itoa(max + 1, numb, 10);
    WriteString(numb);
    WriteString("];");
    NewLine();
    WriteString("VtpInit () ");
    NewLine();
    WriteString("{");
    NewLine();
    Tab();
    Mark();
    for ( i = 4 ; i <= max ; i++ ) 
        if ( ArityNode(i) >= 0 ) {
            WriteString(LanguageName(UP_CASE));
            WriteString("_func [");
            _itoa(i, numb, 10);
            WriteString(numb);
            WriteString("] = getsym(\"");
            WriteString("tree_");
            WriteString(numb);
            WriteString("\");");
            NewLine();
        }
    WriteString("ll_entry_function = getsym(\"metagen_entry_function\");");
    NewLine();
    WriteString("ll_exit_function = getsym(\"metagen_exit_function\");");
    NewLine();
    WriteString("ll_is_oper_tree = getsym(\"metagen_is_oper_tree\");");
    NewLine();
    WriteString("ll_replace_tree = getsym(\"metagen_replace_tree\");");
    NewLine();
    WriteString("ll_addlist = getsym(\"metagen_addlist\");");
    NewLine();
    WriteString("ll_make_string = getsym(\"metagen_make_string\");");
    NewLine();
    WriteString("ll_equ_tree = getsym(\"metagen_equ_tree\");");
    NewLine();
    WriteString("ll_son_tree = getsym(\"metagen_son_tree\");");
    NewLine();
    UnMark();
    WriteString("}");
#endif
}

extern int  output, loutput, coutput ;

void terminal_build ( PPTREE tree )
{
    char    name [20];
    
    tree = SonTree(tree, 1);
    if ( !(output = loutput) ) 
        return ;
    WriteString("(de ");
    WriteString(LanguageName(UP_CASE));
    WriteString("_terminal_build (no value)");
    NewLine();
    Tab();
    Mark();
    WriteString("(selectq no");
    NewLine();
    Tab();
    Mark();
    while ( tree ) {
        WriteString("(");
        _itoa(NumberNodeName(SymboName(BrainyValue(tree), 0)), name, 10);
        WriteString(name);
        Tab();
        WriteString("({");
        WriteString(BrainyValue(SonTree(SonTree(tree, 1), 2)));
        WriteString("}:make value))");
        NewLine();
        tree = SonTree(tree, 2);
    }
    WriteString("(t ({char-string}:make value))");
    NewLine();
    UnMark();
    WriteString("))");
    NewLine();
    NewLine();
    UnMark();
    output = coutput ;
}
