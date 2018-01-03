language metachop;

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
    return APPLY_CLASS(tree, TreeClass, Type());
}

#include "token.h"

// EncodeClass : encoding of a class
// parameters :
//              tree : the tree to be encoded
//              string : recipient string
void PTREE::EncodeClass ( const PTREE &tree, EString &string )
{
    char    *thePt ; // pointer on string
    
    CoarseEncodeInt(GetNumber(tree), string);
    thePt =  (char *)(tree.Value());
    CoarseEncodeInt(strlen(thePt), string);
    string += thePt ;
    return ;
}

void PTREE::CoarseEncode ( PTREE tree, EString &string )
{
    std::vector<EString>    vect ;
    
    CoarseEncode(tree, vect);
    for ( auto iter = vect.begin() ; iter != vect.end() ; iter++ ) {
        string += *iter ;
    }
}

void PTREE::CoarseEncode ( PTREE tree, std::vector<EString> &vect )
{
    EString string ;
    
    InternalCoarseEncode(tree, string, vect);
    if ( string.length() > 0 ) {
        vect.push_back(string);
    }
}

// CoarseEncode : CoarseEncode a tree
// parameters :
//              tree : the tree to be encoded
//              string : recipient string
unsigned int    posEncode = 0 ;

void PTREE::InternalCoarseEncode ( PTREE tree, EString &string, std::vector<EString> &vect )
{
    
    int     arity ;  // arity of node
    int     nbNode ; // number of node
    char    *thePt ; // a pointer
    
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
                
                /* a tree node */
                arity  =  treearity(tree);
                string += (char)arity ;
                posEncode++ ;
                CoarseEncodeInt(tree.NumberTree(), string);
                InternalCoarseEncode(tree [0], string, vect);
                
                /* put good language mask */
                int indexSon ; // index of son
                for ( indexSon = 1 ; indexSon < arity ; indexSon++ ) {
                    InternalCoarseEncode(tree [indexSon], string, vect);
                }
                tree =  tree [arity];
                goto start ;
            }
    }
}

// DecodeClass : Decode a class 
// parameters :
//              string : string to be decoded
// return : the tree
PTREE PTREE::DecodeClass ( char *&string )
{
    
    PTREE   myTree ;  // return tree
    PTREE   topTree ; // top  tree
    int     nbNode ;  // number of node
    int     length ;  // length of string
    
    nbNode  =  CoarseDecodeInt(string);
    length  =  CoarseDecodeInt(string);
    myTree  =  LMakeString(string, length);
    topTree =  PTREE(nbNode, 1);
    topTree.ReplaceTree(1, myTree);
    string += length ;
    return topTree ;
}

// CoarseDecode : CoarseDecode a tree
// parameters :
//              string : input string
// return : the tree
PTREE PTREE::CoarseDecode ( std::vector<EString> &vect )
{
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
        VString                 buffer (string) ;
        std::vector<EString>    vect ;
        
        string =  (char *)(const char *)buffer ;
        return InternalCoarseDecode(string, buffer, vect);
    }
    
#endif

unsigned int    posDecode = 0 ;

PTREE PTREE::InternalCoarseDecode ( char *&string, EString &buffer, std::vector<EString> &vect )
{
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
    
    // get arity
    if ( arity == (char) -1 ) 
        myTree =  (PTREE)0 ;
    else {
        
        // get node
        nbNode  =  CoarseDecodeInt(string);
        comment =  InternalCoarseDecode(string, buffer, vect);
        
        // decode value
        switch ( arity ) {
            case 1 : 
                switch ( nbNode ) {
                    case TERM_TREE : 
                        length    = CoarseDecodeInt(string);
                        myTree    = LMakeString(string, length);
                        posDecode += length ;
                        string    += length ;
                        myTree.ReplaceTree(0, comment);
                        break ;
                    case CLASS_TREE : 
                        {
                            myTree =  DecodeClass(string);
                            myTree.ReplaceTree(0, comment);
                        }
                        break ;
                    default : 
                        myTree = PTREE(nbNode, (int)arity);
                        myTree.ReplaceTree(0, comment);
#                       if defined(NO_STACK)
                            treeStack.reserve(currPos + 2);
                            treeStack [++currPos] =  myTree ;
#                       else 
                            treeStack.push((const PTREE &)myTree);
#                       endif
                        goto start ;
                        
                        // myTree.ReplaceTree(1, InternalCoarseDecode(string, buffer, vect));
                        break ;
                }
                break ;
            default : 
                {
                    
                    // construct node
                    myTree =  PTREE(nbNode, (int)arity);
                    myTree.ReplaceTree(0, comment);
                    if ( arity == 2 && nbNode == GEO ) {
                        long    x = 0 ;
                        long    y = 0 ;
                        x =  CoarseDecodeInt(string);
                        y =  CoarseDecodeInt(string);
                        SON_WRITE((PPTREE)myTree, 1, x);
                        SON_WRITE((PPTREE)myTree, 2, y);
                    } else {
                        
                        // put sons
                        int indexSon ; // index of son
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
            topNode =  treeStack [currPos];
            currPos-- ;
#       else 
            topNode =  treeStack.top();
            treeStack.pop();
#       endif
        topNode.ReplaceTree(topNode.TreeArity(), myTree);
        myTree =  topNode ;
    }
    return myTree ;
}


