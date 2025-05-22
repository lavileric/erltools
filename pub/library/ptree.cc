/*************************************************************************/
/*                                                                       */
/*        Produced by Metachop version 2.0  -    1989-1995               */
/*     Tree      Meta     Chopper      developped    by                  */
/*                  Eric Lavillonniere                                   */
/*                                                                       */
/*************************************************************************/
#include "token.h"

#define decomp decomp_metachop

#ifndef for_elem
#   define for_elem _for_elem
#endif
#ifdef INCONNU
    PTREE   for_elem ;
#endif
#if MOST_RECENT_STL
#   include <stack>
#   include <vector>
#   include <algorithm>
#else 
#   include <stack.h>
#   include <vector.h>
#   include <algorithm.h>
#endif

static  int GetNumber ( const PTREE &tree )
{
    int _nextVal ;
    
    return APPLY_CLASS(tree, TreeClass, Type());
}

#include "token.h"

void PTREE::EncodeClass ( const PTREE &tree, EString &string )
{
    int     _nextVal ;
    char    *thePt ;
    
    CoarseEncodeInt(GetNumber(tree), string);
    thePt =  (char *)(tree.Value());
    CoarseEncodeInt(strlen(thePt), string);
    string += thePt ;
    return ;
}

void PTREE::CoarseEncode ( PTREE tree, EString &string )
{
    int                     _nextVal ;
    std::vector<EString>    vect ;
    
    CoarseEncode(tree, vect);
    for ( auto iter = vect.begin() ; iter != vect.end() ; iter++ ) {
        string += *iter ;
    }
}

void PTREE::CoarseEncode ( PTREE tree, std::vector<EString> &vect )
{
    int     _nextVal ;
    EString string ;
    
    InternalCoarseEncode(tree, string, vect);
    if ( string.length() > 0 ) {
        vect.push_back(string);
    }
}

unsigned int    posEncode = 0 ;

void PTREE::InternalCoarseEncode ( PTREE tree, EString &string, std::vector<EString> &vect )
{
    int     _nextVal ;
    int     arity ;
    int     nbNode ;
    char    *thePt ;
    
    if ( string.length() > 512 ) {
        vect.push_back(string);
        string =  "";
    }
    
    unsigned int    internalPos = posEncode ;
    
start : 
    if ( !tree ) {
        string += (char) -1 ;
        posEncode++ ;
        return ;
    }
    switch ( tree.NumberTree() ) {
        case TERM_TREE : 
            string += '\1';
            posEncode++ ;
            CoarseEncodeInt(TERM_TREE, string);
            CoarseEncode(tree [0], string);
            thePt = (char *)(tree.Value());
            CoarseEncodeInt((strlen(thePt)), string);
            posEncode += strlen(thePt);
            string    += thePt ;
            return ;
        case CLASS_TREE : 
            string += '\1';
            posEncode++ ;
            CoarseEncodeInt(CLASS_TREE, string);
            CoarseEncode(tree [0], string);
            EncodeClass(tree, string);
            return ;
        case REF_TREE : 
            string += (char) -1 ;
            posEncode++ ;
            return ;
        case GEO : 
            {
                string += '\2';
                posEncode++ ;
                CoarseEncodeInt(GEO, string);
                CoarseEncode(tree [0], string);
                int x = (int)(long)SON_READ((PPTREE)tree, 1);
                int y = (int)(long)SON_READ((PPTREE)tree, 2);
                CoarseEncodeInt(x, string);
                CoarseEncodeInt(y, string);
                return ;
            }
        default : 
            {
                arity  =  treearity(tree);
                string += (char)arity ;
                posEncode++ ;
                CoarseEncodeInt(tree.NumberTree(), string);
                InternalCoarseEncode(tree [0], string, vect);
                int indexSon ;
                for ( indexSon = 1 ; indexSon < arity ; indexSon++ ) {
                    InternalCoarseEncode(tree [indexSon], string, vect);
                }
                (tree =  tree [arity]);
                goto start ;
            }
    }
}

PTREE PTREE::DecodeClass ( char *&string )
{
    int     _nextVal ;
    PTREE   myTree ;
    PTREE   topTree ;
    int     nbNode ;
    int     length ;
    
    nbNode =  CoarseDecodeInt(string);
    length =  CoarseDecodeInt(string);
    (myTree =  LMakeString(string, length));
    (topTree =  PTREE(nbNode, 1));
    topTree.ReplaceTree(1, myTree);
    string += length ;
    return topTree ;
}

PTREE PTREE::CoarseDecode ( std::vector<EString> &vect )
{
    int     _nextVal ;
    EString buffer ;
    char    *string = 0 ;
    PTREE   null ;
    
    if ( vect.size() <= 0 || vect [0].length() <= 0 ) 
        return null ;
    std::reverse(vect.begin(), vect.end());
    return InternalCoarseDecode(string, buffer, vect);
}

#if 0
    PTREE PTREE::CoarseDecode ( char *&string )
    {
        int                     _nextVal ;
        VString                 buffer (string) ;
        std::vector<EString>    vect ;
        
        string =  (char *)(const char *)buffer ;
        return InternalCoarseDecode(string, buffer, vect);
    }
#endif

unsigned int    posDecode = 0 ;

PTREE PTREE::InternalCoarseDecode ( char *&string, EString &buffer, std::vector<EString> &vect )
{
    int     _nextVal ;
    char    arity ;
    PTREE   myTree ;
    int     nbNode ;
    int     length ;
    PTREE   comment ;
    int     currPos = -1 ;
    bool    worked = false ;
    
    do {
        worked =  false ;
        char    *internal = (char *)(const char *)buffer ;
        if ( string == 0 ) 
            string =  internal ;
        if ( vect.size() > 0 ) {
            if ( string - internal > 512 ) {
                buffer.CutFront(string - internal);
                internal =  string = (char *)(const char *)buffer ;
                worked   =  true ;
            }
            while ( buffer.length() < 2048 && vect.size() > 0 ) {
                if ( string != internal ) {
                    buffer.CutFront(string - internal);
                    internal =  string = (char *)(const char *)buffer ;
                }
                buffer   += vect [vect.size() - 1];
                internal =  string = (char *)(const char *)buffer ;
                vect.pop_back();
                worked =  true ;
            }
        }
    } while ( worked );
#   if defined(NO_STACK)
        vector<PTREE>   treeStack ;
#   elif defined(STL_3)
        stack<PTREE, vector<PTREE> >    treeStack ;
#   else 
        stack<vector<PTREE> >   treeStack ;
#   endif
    
    unsigned int    internalPos = posDecode ;
    
start : 
    arity = *string++ ;
    posDecode++ ;
    if ( arity == (char) -1 ) 
        (myTree =  (PTREE)0);
    else {
        nbNode =  CoarseDecodeInt(string);
        (comment =  InternalCoarseDecode(string, buffer, vect));
        switch ( arity ) {
            case 1 : 
                switch ( nbNode ) {
                    case TERM_TREE : 
                        length = CoarseDecodeInt(string);
                        (myTree = LMakeString(string, length));
                        posDecode += length ;
                        string    += length ;
                        myTree.ReplaceTree(0, comment);
                        break ;
                    case CLASS_TREE : 
                        {
                            (myTree =  DecodeClass(string));
                            myTree.ReplaceTree(0, comment);
                        }
                        break ;
                    default : 
                        (myTree = PTREE(nbNode, (int)arity));
                        myTree.ReplaceTree(0, comment);
#                       if defined(NO_STACK)
                            treeStack.reserve(currPos + 2);
                            treeStack [++currPos] =  myTree ;
#                       else 
                            treeStack.push((const PTREE &)myTree);
#                       endif
                        goto start ;
                        break ;
                }
                break ;
            default : 
                {
                    (myTree =  PTREE(nbNode, (int)arity));
                    myTree.ReplaceTree(0, comment);
                    if ( arity == 2 && nbNode == GEO ) {
                        long    x = 0 ;
                        long    y = 0 ;
                        x =  CoarseDecodeInt(string);
                        y =  CoarseDecodeInt(string);
                        SON_WRITE((PPTREE)myTree, 1, x);
                        SON_WRITE((PPTREE)myTree, 2, y);
                    } else {
                        int indexSon ;
                        for ( indexSon = 1 ; indexSon < arity ; indexSon++ ) {
                            myTree.ReplaceTree(indexSon, InternalCoarseDecode(string, buffer, vect));
                        }
#                       if defined(NO_STACK)
                            treeStack.reserve(currPos + 2);
                            treeStack [++currPos] =  myTree ;
#                       else 
                            treeStack.push((const PTREE &)myTree);
#                       endif
                        goto start ;
                    }
                }
        }
    }
    while ( true ) {
#       if !defined(NO_STACK)
            currPos =  treeStack.size();
#       endif
        if ( !currPos ) 
            break ;
        PTREE   topNode ;
#       if defined(NO_STACK)
            (topNode =  treeStack [currPos]);
            currPos-- ;
#       else 
            (topNode =  treeStack.top());
            treeStack.pop();
#       endif
        topNode.ReplaceTree(topNode.TreeArity(), myTree);
        (myTree =  topNode);
    }
    return myTree ;
}

static int  lineNumberRef = 1 ;
static int  dumpMoreMode = 0 ;
static int  pageNumberRef ;
static int  pageNumber ;

static  void DumpNewLine ( int i )
{
    int     _nextVal ;
    char    c [3];
    
    if ( lineNumberRef <= 30000 ) 
        LNewLine(i);
    if ( dumpMoreMode && currLine - lineNumberRef >= 24 ) {
        lineNumberRef =  currLine ;
        pageNumber++ ;
        _read(0, &c, 1);
        if ( pageNumber >= pageNumberRef ) 
            lineNumberRef =  30000 ;
    }
}

#define LNewLine DumpNewLine

void PTREE::CLDumpTree ()
{
    int     _nextVal ;
    PTREE   nTree = (PTREE)0 ;
    
    (nTree =  copytree(PTREE(this -> pt)));
    DestroyPosCommentRec(nTree);
    
    int oldOutput = output ;
    
    Flush();
    output =  1 ;
    nTree.LDumpTree();
    output =  oldOutput ;
}

void PTREE::LDumpTree ()
{
    int     _nextVal ;
    PTREE   tree(this -> pt);
    
    tree.DumpTree();
    NewLine();
}

void PTREE::DumpTree ()
{
    register PPTREE _inter ;
    int             _nextVal ;
    int             i, test ;
    PTREE           name1, son ;
    PTREE           comm, cont ;
    int             oldIsVirtMod = isVirtMod ;
    
    isVirtMod =  0 ;
    
    PTREE   tree(this -> pt);
    
    if ( lineNumberRef >= 30000 ) 
        return ;
    if ( !tree ) {
        PrintString("[ NIL ] ");
        return ;
    }
    (comm =  (PTREE)0);
    while ( (PPTREE)((comm = NextComm(tree, PRE, comm))) ) {
        (cont =  (PTREE)0);
        PrintString("PRE -> ");
        LNewLine(1);
        Tab();
        Mark();
        while ( (PPTREE)((cont = NextCommContent(comm, cont))) ) {
            PrintString(BrainyValue(cont));
            LNewLine(1);
        }
        UnMark();
    }
    switch ( NumberTree(tree) ) {
        case TERM_TREE : 
        _Case5 : 
            ;
            {
                int     x, y, dx, dy, x0, y0 ;
                char    myString [30];
                if ( GetCoord(tree, &x, &y, &dx, &dy) ) {
                    PTREE   _Baum0 ;
                    _Baum0 =  (PPTREE)0 ;
                    GetCoordAbs(tree, _Baum0, &x0, &y0);
                    sprintf(myString, "%d %d %d %d %d %d", y0, x0, y, x, dy, dx);
                    PrintString("{");
                    WriteString(myString);
                    PrintString("}");
                    LNewLine(1);
                }
            }
            PrintString("\"");
            DumpBrainyValue(tree);
            PrintString("\"");
            break ;
        case CLASS_TREE : 
        _Case6 : 
            ;
            {
                int     x, y, dx, dy, x0, y0 ;
                char    myString [30];
                if ( GetCoord(tree, &x, &y, &dx, &dy) ) {
                    PTREE   _Baum1 ;
                    _Baum1 =  (PPTREE)0 ;
                    GetCoordAbs(tree, _Baum1, &x0, &y0);
                    sprintf(myString, "%d %d %d %d %d %d", y0, x0, y, x, dy, dx);
                    PrintString("{");
                    WriteString(myString);
                    PrintString("}");
                    LNewLine(1);
                }
            }
            PrintString("[");
            WriteString(NameConst(APPLY_CLASS(tree, TreeClass, Type())));
            WriteString(" <> ");
            PrintString("\"");
            WriteString(APPLY_CLASS(tree, TreeClass, Value()));
            PrintString("\"]");
            break ;
        case LIST : 
        _Case7 : 
            ;
            {
                int     x, y, dx, dy, x0, y0 ;
                char    myString [30];
                if ( GetCoord(tree, &x, &y, &dx, &dy) ) {
                    PTREE   _Baum2 ;
                    _Baum2 =  (PPTREE)0 ;
                    GetCoordAbs(tree, _Baum2, &x0, &y0);
                    sprintf(myString, "%d %d %d %d %d %d", y0, x0, y, x, dy, dx);
                    PrintString("{");
                    WriteString(myString);
                    PrintString("}");
                    LNewLine(1);
                }
            }
            PrintString("[ LIST ");
            LNewLine(1);
            Tab();
            Mark();
            while ( !!tree && (((_inter = (PPTREE)tree), 1) && NumberTree(_inter) == LIST) && lineNumberRef < 30000 ) {
                (son =  tree ? tree.Nextl() : (PPTREE)0);
                son.DumpTree();
                LNewLine(1);
            }
            if ( tree && !(((_inter = (PPTREE)tree), 1) && NumberTree(_inter) == LIST) ) {
                PrintString("$");
                tree.DumpTree();
                LNewLine(1);
            }
            UnMark();
            PrintString("]");
            break ;
        case IN_LANGUAGE : 
        _Case8 : 
            ;
            {
                ((_inter =  (PPTREE)tree, 1) && ((name1 =  SonTree(_inter, 1)), 1) && ((tree =  SonTree(_inter, 2)), 1));
                {
                    PLANG   _oldLanguage = pCurrentLanguage ;
                    SwitchLang("Value");
                    {
                        {
                            int     x, y, dx, dy, x0, y0 ;
                            char    myString [30];
                            if ( GetCoord(tree, &x, &y, &dx, &dy) ) {
                                PTREE   _Baum3 ;
                                _Baum3 =  (PPTREE)0 ;
                                GetCoordAbs(tree, _Baum3, &x0, &y0);
                                sprintf(myString, "%d %d %d %d %d %d", y0, x0, y, x, dy, dx);
                                PrintString("{");
                                WriteString(myString);
                                PrintString("}");
                                LNewLine(1);
                            }
                        }
                        PrintString("[ IN_LANGUAGE");
                        LNewLine(1);
                        Tab();
                        Mark();
                        PrintString("[ \"");
                        DumpBrainyValue(name1);
                        PrintString("\" ]");
                        LNewLine(1);
                        tree.DumpTree();
                        LNewLine(1);
                        UnMark();
                        PrintString("]");
                    }
                    SwitchLangPoint(_oldLanguage);
                }
            }
            break ;
        default : 
        _Case9 : 
            ;
            {
                int     x, y, dx, dy, x0, y0 ;
                char    myString [30];
                if ( GetCoord(tree, &x, &y, &dx, &dy) ) {
                    PTREE   _Baum4 ;
                    _Baum4 =  (PPTREE)0 ;
                    GetCoordAbs(tree, _Baum4, &x0, &y0);
                    sprintf(myString, "%d %d %d %d %d %d", y0, x0, y, x, dy, dx);
                    PrintString("{");
                    WriteString(myString);
                    PrintString("}");
                    LNewLine(1);
                }
            }
            PrintString("[ ");
            WriteString(NameConst(NumberTree(tree)));
            if ( (test = treearity(tree) > 1 || treearity(tree) == 1 && treearity(sontree(tree, 1)) > 1) ) {
                LNewLine(1);
                Tab();
            } else 
                PrintString(" ");
            Mark();
            for ( i = 1 ; i <= treearity(tree) && lineNumberRef < 30000 ; i++ ) {
                PTREE   son(sontree(tree, i));
                son.DumpTree();
                if ( test ) 
                    LNewLine(1);
            }
            UnMark();
            PrintString("]");
    }
    (comm =  (PTREE)0);
    while ( (comm = NextComm(tree, POST, comm)) ) {
        (cont =  (PTREE)0);
        LNewLine(1);
        if ( PrePost() ) 
            PrintString("PREPOST -> ");
        else 
            PrintString("POST -> ");
        LNewLine(1);
        Tab();
        Mark();
        while ( (cont = NextCommContent(comm, cont)) ) {
            PrintString(BrainyValue(cont));
            LNewLine(1);
        }
        UnMark();
    }
    isVirtMod =  oldIsVirtMod ;
}

void PTREE::MDumpTree ( int pageNum )
{
    int     _nextVal ;
    PTREE   tree(this -> pt);
    
    dumpMoreMode  =  1 ;
    lineNumberRef =  currLine ;
    pageNumber    =  0 ;
    pageNumberRef =  pageNum ;
    tree.DumpTree();
    dumpMoreMode  =  0 ;
    lineNumberRef =  0 ;
}

void PTREE::DumpNode ()
{
    int _nextVal ;
    
    PrintString("[ ");
    WriteString(NameConst(PTREE(this -> pt).NumberTree()));
    PrintString("]");
    LNewLine(1);
}

static  void ptree_Anchor ()
{
    int i = 1 ;
}

/*Well done my boy */
