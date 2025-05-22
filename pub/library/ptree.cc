
#line 1 "ptree.ch"
/*************************************************************************/
#line 1 "ptree.ch"
/*                                                                       */
#line 1 "ptree.ch"
/*        Produced by Metachop version 2.0  -    1989-1995               */
#line 1 "ptree.ch"
/*     Tree      Meta     Chopper      developped    by                  */
#line 1 "ptree.ch"
/*                  Eric Lavillonniere                                   */
#line 1 "ptree.ch"
/*                                                                       */
#line 1 "ptree.ch"
/*************************************************************************/
#line 1 "ptree.ch"

#line 1 "ptree.ch"
#include "token.h"
#line 1 "ptree.ch"
#define decomp decomp_metachop
#line 1 "ptree.ch"

#line 1 "ptree.ch"
#ifndef for_elem
#line 1 "ptree.ch"
#line 1 "ptree.ch"
#define for_elem _for_elem

#line 1 "ptree.ch"
#line 1 "ptree.ch"

#line 1 "ptree.ch"
#endif
#ifdef INCONNU
#line 1 "ptree.ch"
#line 1 "ptree.ch"
PTREE   for_elem ;
#line 1 "ptree.ch"

#line 1 "ptree.ch"
#line 1 "ptree.ch"

#line 1 "ptree.ch"
#endif
#if MOST_RECENT_STL
#line 1 "ptree.ch"
#line 4 "ptree.ch"
#include <stack>

#line 4 "ptree.ch"
#line 5 "ptree.ch"
#include <vector>

#line 5 "ptree.ch"
#line 6 "ptree.ch"
#include <algorithm>

#line 6 "ptree.ch"
#line 6 "ptree.ch"

#line 6 "ptree.ch"
#else 
#include <stack.h>
#include <vector.h>
#include <algorithm.h>
#endif

#line 13 "ptree.ch"

#line 13 "ptree.ch"
static  int GetNumber ( const PTREE &tree )
#line 13 "ptree.ch"
{
#line 13 "ptree.ch"
#line 13 "ptree.ch"
    int _nextVal ;
    
#line 13 "ptree.ch"
#line 15 "ptree.ch"
    return APPLY_CLASS(tree, TreeClass, Type());
    
#line 15 "ptree.ch"
#line 16 "ptree.ch"
    
#line 16 "ptree.ch"
#line 16 "ptree.ch"
}
#line 16 "ptree.ch"

#include "token.h"

#line 23 "ptree.ch"

#line 23 "ptree.ch"
void PTREE::EncodeClass ( const PTREE &tree, EString &string )
#line 23 "ptree.ch"
{
#line 23 "ptree.ch"
#line 23 "ptree.ch"
    int _nextVal ;
    
#line 23 "ptree.ch"
#line 26 "ptree.ch"
    
    char    *thePt ;
    
#line 26 "ptree.ch"
#line 28 "ptree.ch"
    CoarseEncodeInt(GetNumber(tree), string);
#line 28 "ptree.ch"
#line 29 "ptree.ch"
    thePt = (char *)(tree.Value());
#line 29 "ptree.ch"
#line 30 "ptree.ch"
    CoarseEncodeInt(strlen(thePt), string);
#line 30 "ptree.ch"
#line 31 "ptree.ch"
    string += thePt ;
#line 31 "ptree.ch"
#line 32 "ptree.ch"
    return ;
    
#line 32 "ptree.ch"
#line 33 "ptree.ch"
    
#line 33 "ptree.ch"
#line 33 "ptree.ch"
}
#line 33 "ptree.ch"

#line 35 "ptree.ch"

#line 35 "ptree.ch"
void PTREE::CoarseEncode ( PTREE tree, EString &string )
#line 35 "ptree.ch"
{
#line 35 "ptree.ch"
#line 35 "ptree.ch"
    int _nextVal ;
    
#line 35 "ptree.ch"
#line 37 "ptree.ch"
    
    std::vector<EString>  vect ;
    
#line 37 "ptree.ch"
#line 39 "ptree.ch"
    CoarseEncode(tree, vect);
#line 39 "ptree.ch"
#line 40 "ptree.ch"
#line 40 "ptree.ch"
    for ( auto iter = vect.begin() ; iter != vect.end() ; iter++ ) {
#line 40 "ptree.ch"
#line 41 "ptree.ch"
                                                                            string += *iter ;
#line 41 "ptree.ch"
#line 42 "ptree.ch"
                                                                            
#line 42 "ptree.ch"
#line 42 "ptree.ch"
                                                                          }
#line 42 "ptree.ch"
    
#line 42 "ptree.ch"
#line 43 "ptree.ch"
    
#line 43 "ptree.ch"
#line 43 "ptree.ch"
}
#line 43 "ptree.ch"

#line 45 "ptree.ch"

#line 45 "ptree.ch"
void PTREE::CoarseEncode ( PTREE tree, std::vector<EString> &vect )
#line 45 "ptree.ch"
{
#line 45 "ptree.ch"
#line 45 "ptree.ch"
    int _nextVal ;
    
#line 45 "ptree.ch"
#line 47 "ptree.ch"
    
    EString string ;
    
#line 47 "ptree.ch"
#line 49 "ptree.ch"
    InternalCoarseEncode(tree, string, vect);
#line 49 "ptree.ch"
#line 50 "ptree.ch"
    if ( string.length() > 0 ) {
#line 50 "ptree.ch"
#line 51 "ptree.ch"
                                    vect.push_back(string);
#line 51 "ptree.ch"
#line 52 "ptree.ch"
                                    
#line 52 "ptree.ch"
#line 52 "ptree.ch"
                                  }
#line 52 "ptree.ch"
#line 53 "ptree.ch"
    
#line 53 "ptree.ch"
#line 53 "ptree.ch"
}
#line 53 "ptree.ch"

unsigned int   posEncode = 0 ;

#line 61 "ptree.ch"

#line 61 "ptree.ch"
void PTREE::InternalCoarseEncode ( PTREE tree, EString &string, std::vector<EString> &vect )
#line 61 "ptree.ch"
{
#line 61 "ptree.ch"
#line 61 "ptree.ch"
    int _nextVal ;
    
#line 61 "ptree.ch"
#line 64 "ptree.ch"
    
    int arity ;
    
#line 64 "ptree.ch"
#line 65 "ptree.ch"
    
    int nbNode ;
    
#line 65 "ptree.ch"
#line 66 "ptree.ch"
    
    char    *thePt ;
    
#line 66 "ptree.ch"
#line 68 "ptree.ch"
    if ( string.length() > 512 ) {
#line 68 "ptree.ch"
#line 69 "ptree.ch"
                                        vect.push_back(string);
#line 69 "ptree.ch"
#line 70 "ptree.ch"
                                        string = "";
#line 70 "ptree.ch"
#line 71 "ptree.ch"
                                        
#line 71 "ptree.ch"
#line 71 "ptree.ch"
                                    }
#line 71 "ptree.ch"
#line 73 "ptree.ch"
    unsigned int   internalPos = posEncode ;
    
#line 73 "ptree.ch"
#line 75 "ptree.ch"
start : 
#line 75 "ptree.ch"
#line 76 "ptree.ch"
    if ( !tree ) {
#line 76 "ptree.ch"
#line 77 "ptree.ch"
                    string += (char) -1 ;
#line 77 "ptree.ch"
#line 78 "ptree.ch"
                    posEncode++ ;
#line 78 "ptree.ch"
#line 79 "ptree.ch"
                    return ;
                    
#line 79 "ptree.ch"
#line 80 "ptree.ch"
                    
#line 80 "ptree.ch"
#line 80 "ptree.ch"
                   }
#line 80 "ptree.ch"
#line 81 "ptree.ch"
    switch ( tree.NumberTree() ) {
#line 81 "ptree.ch"
#line 82 "ptree.ch"
        case TERM_TREE : 
#line 82 "ptree.ch"
#line 83 "ptree.ch"
            string += '\1';
#line 83 "ptree.ch"
#line 84 "ptree.ch"
            posEncode++ ;
#line 84 "ptree.ch"
#line 85 "ptree.ch"
            CoarseEncodeInt(TERM_TREE, string);
#line 85 "ptree.ch"
#line 86 "ptree.ch"
            CoarseEncode(tree [0], string);
#line 86 "ptree.ch"
#line 87 "ptree.ch"
            thePt = (char *)(tree.Value());
#line 87 "ptree.ch"
#line 88 "ptree.ch"
            CoarseEncodeInt((strlen(thePt)), string);
#line 88 "ptree.ch"
#line 89 "ptree.ch"
            posEncode += strlen(thePt);
#line 89 "ptree.ch"
#line 90 "ptree.ch"
            string += thePt ;
#line 90 "ptree.ch"
#line 91 "ptree.ch"
            return ;
            
#line 91 "ptree.ch"
#line 92 "ptree.ch"
        case CLASS_TREE : 
#line 92 "ptree.ch"
#line 93 "ptree.ch"
            string += '\1';
#line 93 "ptree.ch"
#line 94 "ptree.ch"
            posEncode++ ;
#line 94 "ptree.ch"
#line 95 "ptree.ch"
            CoarseEncodeInt(CLASS_TREE, string);
#line 95 "ptree.ch"
#line 96 "ptree.ch"
            CoarseEncode(tree [0], string);
#line 96 "ptree.ch"
#line 97 "ptree.ch"
            EncodeClass(tree, string);
#line 97 "ptree.ch"
#line 98 "ptree.ch"
            return ;
            
#line 98 "ptree.ch"
#line 99 "ptree.ch"
        case REF_TREE : 
#line 99 "ptree.ch"
#line 100 "ptree.ch"
            string += (char) -1 ;
#line 100 "ptree.ch"
#line 101 "ptree.ch"
            posEncode++ ;
#line 101 "ptree.ch"
#line 102 "ptree.ch"
            return ;
            
#line 102 "ptree.ch"
#line 103 "ptree.ch"
        case GEO : 
#line 103 "ptree.ch"
#line 104 "ptree.ch"
            {
#line 104 "ptree.ch"
#line 105 "ptree.ch"
                string += '\2';
#line 105 "ptree.ch"
#line 106 "ptree.ch"
                posEncode++ ;
#line 106 "ptree.ch"
#line 107 "ptree.ch"
                CoarseEncodeInt(GEO, string);
#line 107 "ptree.ch"
#line 108 "ptree.ch"
                CoarseEncode(tree [0], string);
#line 108 "ptree.ch"
#line 109 "ptree.ch"
                int x = (int)(long)SON_READ((PPTREE)tree, 1);
                
#line 109 "ptree.ch"
#line 110 "ptree.ch"
                int y = (int)(long)SON_READ((PPTREE)tree, 2);
                
#line 110 "ptree.ch"
#line 111 "ptree.ch"
                CoarseEncodeInt(x, string);
#line 111 "ptree.ch"
#line 112 "ptree.ch"
                CoarseEncodeInt(y, string);
#line 112 "ptree.ch"
#line 113 "ptree.ch"
                return ;
                
#line 113 "ptree.ch"
#line 114 "ptree.ch"
                
#line 114 "ptree.ch"
#line 114 "ptree.ch"
            }
            
#line 114 "ptree.ch"
#line 116 "ptree.ch"
        default : 
#line 116 "ptree.ch"
#line 116 "ptree.ch"
            {
#line 116 "ptree.ch"
#line 119 "ptree.ch"
                arity = treearity(tree);
#line 119 "ptree.ch"
#line 120 "ptree.ch"
                string += (char)arity ;
#line 120 "ptree.ch"
#line 121 "ptree.ch"
                posEncode++ ;
#line 121 "ptree.ch"
#line 122 "ptree.ch"
                CoarseEncodeInt(tree.NumberTree(), string);
#line 122 "ptree.ch"
#line 123 "ptree.ch"
                InternalCoarseEncode(tree [0], string, vect);
#line 123 "ptree.ch"
#line 126 "ptree.ch"
                
                int indexSon ;
                
#line 126 "ptree.ch"
#line 127 "ptree.ch"
#line 127 "ptree.ch"
                for ( indexSon = 1 ; indexSon < arity ; indexSon++ ) {
#line 127 "ptree.ch"
#line 128 "ptree.ch"
                                                                            InternalCoarseEncode(tree [indexSon], string, vect);
#line 128 "ptree.ch"
#line 129 "ptree.ch"
                                                                            
#line 129 "ptree.ch"
#line 129 "ptree.ch"
                                                                          }
#line 129 "ptree.ch"
                
#line 129 "ptree.ch"
#line 130 "ptree.ch"
                (tree=tree [arity]);
#line 130 "ptree.ch"
                
#line 130 "ptree.ch"
#line 131 "ptree.ch"
                goto start ;
                
#line 131 "ptree.ch"
#line 132 "ptree.ch"
                
#line 132 "ptree.ch"
#line 132 "ptree.ch"
            }
            
#line 132 "ptree.ch"
    }
#line 132 "ptree.ch"
    
#line 132 "ptree.ch"
#line 134 "ptree.ch"
    
#line 134 "ptree.ch"
#line 134 "ptree.ch"
}
#line 134 "ptree.ch"

#line 139 "ptree.ch"

#line 139 "ptree.ch"
PTREE PTREE::DecodeClass ( char *&string )
#line 139 "ptree.ch"
{
#line 139 "ptree.ch"
#line 139 "ptree.ch"
    int _nextVal ;
    
#line 139 "ptree.ch"
#line 143 "ptree.ch"
    
    PTREE   myTree ;
#line 143 "ptree.ch"
    
#line 143 "ptree.ch"
#line 144 "ptree.ch"
    
    PTREE   topTree ;
#line 144 "ptree.ch"
    
#line 144 "ptree.ch"
#line 145 "ptree.ch"
    
    int nbNode ;
    
#line 145 "ptree.ch"
#line 146 "ptree.ch"
    
    int length ;
    
#line 146 "ptree.ch"
#line 148 "ptree.ch"
    nbNode = CoarseDecodeInt(string);
#line 148 "ptree.ch"
#line 149 "ptree.ch"
    length = CoarseDecodeInt(string);
#line 149 "ptree.ch"
#line 150 "ptree.ch"
    (myTree=LMakeString(string, length));
#line 150 "ptree.ch"
    
#line 150 "ptree.ch"
#line 151 "ptree.ch"
    (topTree=PTREE(nbNode, 1));
#line 151 "ptree.ch"
    
#line 151 "ptree.ch"
#line 152 "ptree.ch"
    topTree.ReplaceTree(1, myTree);
#line 152 "ptree.ch"
#line 153 "ptree.ch"
    string += length ;
#line 153 "ptree.ch"
#line 154 "ptree.ch"
    return topTree ;
    
#line 154 "ptree.ch"
#line 155 "ptree.ch"
    
#line 155 "ptree.ch"
#line 155 "ptree.ch"
}
#line 155 "ptree.ch"

#line 160 "ptree.ch"

#line 160 "ptree.ch"
PTREE PTREE::CoarseDecode ( std::vector<EString> &vect )
#line 160 "ptree.ch"
{
#line 160 "ptree.ch"
#line 160 "ptree.ch"
    int _nextVal ;
    
#line 160 "ptree.ch"
#line 163 "ptree.ch"
    
    EString buffer ;
    
#line 163 "ptree.ch"
#line 164 "ptree.ch"
    char    *string = 0 ;
    
#line 164 "ptree.ch"
#line 165 "ptree.ch"
    PTREE   null ;
#line 165 "ptree.ch"
    
#line 165 "ptree.ch"
#line 167 "ptree.ch"
    if ( vect.size() <= 0 || vect [0].length() <= 0 ) 
#line 167 "ptree.ch"
#line 168 "ptree.ch"
        return null ;
    
#line 168 "ptree.ch"
#line 169 "ptree.ch"
    std::reverse(vect.begin(), vect.end());
#line 169 "ptree.ch"
#line 170 "ptree.ch"
    return InternalCoarseDecode(string, buffer, vect);
    
#line 170 "ptree.ch"
#line 171 "ptree.ch"
    
#line 171 "ptree.ch"
#line 171 "ptree.ch"
}
#line 171 "ptree.ch"

#if 0
#line 171 "ptree.ch"
#line 174 "ptree.ch"
#line 174 "ptree.ch"

#line 174 "ptree.ch"
PTREE PTREE::CoarseDecode ( char *&string )
#line 174 "ptree.ch"
{
#line 174 "ptree.ch"
#line 174 "ptree.ch"
    int _nextVal ;
    
#line 174 "ptree.ch"
#line 176 "ptree.ch"
    
    VString buffer (string) ;
    
#line 176 "ptree.ch"
#line 177 "ptree.ch"
    std::vector<EString>  vect ;
    
#line 177 "ptree.ch"
#line 179 "ptree.ch"
    string = (char *)(const char *)buffer ;
#line 179 "ptree.ch"
#line 180 "ptree.ch"
    return InternalCoarseDecode(string, buffer, vect);
    
#line 180 "ptree.ch"
#line 181 "ptree.ch"
    
#line 181 "ptree.ch"
#line 181 "ptree.ch"
}
#line 181 "ptree.ch"


#line 181 "ptree.ch"
#line 181 "ptree.ch"

#line 181 "ptree.ch"
#endif

unsigned int   posDecode = 0 ;

#line 187 "ptree.ch"

#line 187 "ptree.ch"
PTREE PTREE::InternalCoarseDecode ( char *&string, EString &buffer, std::vector<EString> &vect )
#line 187 "ptree.ch"
{
#line 187 "ptree.ch"
#line 187 "ptree.ch"
    int _nextVal ;
    
#line 187 "ptree.ch"
#line 189 "ptree.ch"
    
    char    arity ;
    
#line 189 "ptree.ch"
#line 190 "ptree.ch"
    PTREE   myTree ;
#line 190 "ptree.ch"
    
#line 190 "ptree.ch"
#line 191 "ptree.ch"
    int nbNode ;
    
#line 191 "ptree.ch"
#line 192 "ptree.ch"
    int length ;
    
#line 192 "ptree.ch"
#line 193 "ptree.ch"
    PTREE   comment ;
#line 193 "ptree.ch"
    
#line 193 "ptree.ch"
#line 194 "ptree.ch"
    int currPos = -1 ;
    
#line 194 "ptree.ch"
#line 195 "ptree.ch"
    bool    worked = false ;
    
#line 195 "ptree.ch"
#line 198 "ptree.ch"
    do {
#line 198 "ptree.ch"
#line 199 "ptree.ch"
        worked = false ;
#line 199 "ptree.ch"
#line 200 "ptree.ch"
        char    *internal = (char *)(const char *)buffer ;
        
#line 200 "ptree.ch"
#line 201 "ptree.ch"
        if ( string == 0 ) 
#line 201 "ptree.ch"
#line 202 "ptree.ch"
            string = internal ;
#line 202 "ptree.ch"
#line 203 "ptree.ch"
        if ( vect.size() > 0 ) {
#line 203 "ptree.ch"
#line 204 "ptree.ch"
                                    if ( string - internal > 512 ) {
#line 204 "ptree.ch"
#line 205 "ptree.ch"
                                                                        buffer.CutFront(string - internal);
#line 205 "ptree.ch"
#line 206 "ptree.ch"
                                                                        internal = string = (char *)(const char *)buffer ;
#line 206 "ptree.ch"
#line 207 "ptree.ch"
                                                                        worked = true ;
#line 207 "ptree.ch"
#line 208 "ptree.ch"
                                                                        
#line 208 "ptree.ch"
#line 208 "ptree.ch"
                                                                      }
#line 208 "ptree.ch"
#line 209 "ptree.ch"
                                    while ( buffer.length() < 2048 && vect.size() > 0 ) {
#line 209 "ptree.ch"
#line 210 "ptree.ch"
                                                                                                if ( string != internal ) {
#line 210 "ptree.ch"
#line 211 "ptree.ch"
                                                                                                                            buffer.CutFront(string - internal);
#line 211 "ptree.ch"
#line 212 "ptree.ch"
                                                                                                                            internal = string = (char *)(const char *)buffer ;
#line 212 "ptree.ch"
#line 213 "ptree.ch"
                                                                                                                            
#line 213 "ptree.ch"
#line 213 "ptree.ch"
                                                                                                                            }
#line 213 "ptree.ch"
#line 214 "ptree.ch"
                                                                                                buffer += vect [vect.size() - 1];
#line 214 "ptree.ch"
#line 215 "ptree.ch"
                                                                                                internal = string = (char *)(const char *)buffer ;
#line 215 "ptree.ch"
#line 216 "ptree.ch"
                                                                                                vect.pop_back();
#line 216 "ptree.ch"
#line 217 "ptree.ch"
                                                                                                worked = true ;
#line 217 "ptree.ch"
#line 218 "ptree.ch"
                                                                                                
#line 218 "ptree.ch"
#line 218 "ptree.ch"
                                                                                              }
#line 218 "ptree.ch"
#line 219 "ptree.ch"
                                    
#line 219 "ptree.ch"
#line 219 "ptree.ch"
                                  }
#line 219 "ptree.ch"
#line 220 "ptree.ch"
        
#line 220 "ptree.ch"
#line 220 "ptree.ch"
       } 
#line 220 "ptree.ch"
    while ( worked );
#line 220 "ptree.ch"
    
#line 220 "ptree.ch"
#line 221 "ptree.ch"
#if defined(NO_STACK)
#line 221 "ptree.ch"
#line 223 "ptree.ch"
    vector<PTREE>  treeStack ;
    
#line 223 "ptree.ch"
#line 223 "ptree.ch"
    
#line 223 "ptree.ch"
#elif defined(STL_3)
        stack<PTREE, vector<PTREE> >     treeStack ;
#else 
    stack<vector<PTREE> >     treeStack ;
#endif
    
#line 223 "ptree.ch"
#line 235 "ptree.ch"
    unsigned int   internalPos = posDecode ;
    
#line 235 "ptree.ch"
#line 237 "ptree.ch"
start : 
#line 237 "ptree.ch"
#line 238 "ptree.ch"
    arity = *string++ ;
#line 238 "ptree.ch"
#line 239 "ptree.ch"
    posDecode++ ;
#line 239 "ptree.ch"
#line 242 "ptree.ch"
    if ( arity == (char) -1 ) 
#line 242 "ptree.ch"
#line 243 "ptree.ch"
        (myTree=(PTREE)0);
#line 243 "ptree.ch"
    
#line 243 "ptree.ch"
    else 
#line 244 "ptree.ch"
    {
#line 244 "ptree.ch"
#line 247 "ptree.ch"
        nbNode = CoarseDecodeInt(string);
#line 247 "ptree.ch"
#line 248 "ptree.ch"
        (comment=InternalCoarseDecode(string, buffer, vect));
#line 248 "ptree.ch"
        
#line 248 "ptree.ch"
#line 251 "ptree.ch"
        switch ( arity ) {
#line 251 "ptree.ch"
#line 252 "ptree.ch"
            case 1 : 
#line 252 "ptree.ch"
#line 253 "ptree.ch"
                switch ( nbNode ) {
#line 253 "ptree.ch"
#line 254 "ptree.ch"
                    case TERM_TREE : 
#line 254 "ptree.ch"
#line 255 "ptree.ch"
                        length = CoarseDecodeInt(string);
#line 255 "ptree.ch"
#line 256 "ptree.ch"
                        (myTree=LMakeString(string, length));
#line 256 "ptree.ch"
                        
#line 256 "ptree.ch"
#line 257 "ptree.ch"
                        posDecode += length ;
#line 257 "ptree.ch"
#line 258 "ptree.ch"
                        string += length ;
#line 258 "ptree.ch"
#line 259 "ptree.ch"
                        myTree.ReplaceTree(0, comment);
#line 259 "ptree.ch"
#line 260 "ptree.ch"
                        break ;
                        
#line 260 "ptree.ch"
#line 261 "ptree.ch"
                    case CLASS_TREE : 
#line 261 "ptree.ch"
#line 262 "ptree.ch"
                        {
#line 262 "ptree.ch"
#line 263 "ptree.ch"
                            (myTree=DecodeClass(string));
#line 263 "ptree.ch"
                            
#line 263 "ptree.ch"
#line 264 "ptree.ch"
                            myTree.ReplaceTree(0, comment);
#line 264 "ptree.ch"
#line 265 "ptree.ch"
                            
#line 265 "ptree.ch"
#line 265 "ptree.ch"
                        }
                        
#line 265 "ptree.ch"
#line 266 "ptree.ch"
                        break ;
                        
#line 266 "ptree.ch"
#line 268 "ptree.ch"
                    default : 
#line 268 "ptree.ch"
#line 268 "ptree.ch"
                        (myTree=PTREE(nbNode, (int)arity));
#line 268 "ptree.ch"
                        
#line 268 "ptree.ch"
#line 269 "ptree.ch"
                        myTree.ReplaceTree(0, comment);
#line 269 "ptree.ch"
#line 270 "ptree.ch"
#if defined(NO_STACK   )
#line 270 "ptree.ch"
#line 271 "ptree.ch"
                        treeStack.reserve(currPos + 2);
#line 271 "ptree.ch"
#line 272 "ptree.ch"
                        treeStack [++currPos] = myTree ;
#line 272 "ptree.ch"
#line 272 "ptree.ch"
                        
#line 272 "ptree.ch"
#else 
                        treeStack.push((const PTREE &)myTree);
#endif
                        
#line 272 "ptree.ch"
#line 276 "ptree.ch"
                        goto start ;
                        
#line 276 "ptree.ch"
#line 279 "ptree.ch"
                        break ;
                        
#line 279 "ptree.ch"
                }
#line 279 "ptree.ch"
                
#line 279 "ptree.ch"
#line 281 "ptree.ch"
                break ;
                
#line 281 "ptree.ch"
#line 283 "ptree.ch"
            default : 
#line 283 "ptree.ch"
#line 283 "ptree.ch"
                {
#line 283 "ptree.ch"
#line 286 "ptree.ch"
                    (myTree=PTREE(nbNode, (int)arity));
#line 286 "ptree.ch"
                    
#line 286 "ptree.ch"
#line 287 "ptree.ch"
                    myTree.ReplaceTree(0, comment);
#line 287 "ptree.ch"
#line 288 "ptree.ch"
                    if ( arity == 2 && nbNode == GEO ) {
#line 288 "ptree.ch"
#line 289 "ptree.ch"
                                                            long    x = 0 ;
                                                            
#line 289 "ptree.ch"
#line 290 "ptree.ch"
                                                            long    y = 0 ;
                                                            
#line 290 "ptree.ch"
#line 291 "ptree.ch"
                                                            x = CoarseDecodeInt(string);
#line 291 "ptree.ch"
#line 292 "ptree.ch"
                                                            y = CoarseDecodeInt(string);
#line 292 "ptree.ch"
#line 293 "ptree.ch"
                                                            SON_WRITE((PPTREE)myTree, 1, x);
#line 293 "ptree.ch"
#line 294 "ptree.ch"
                                                            SON_WRITE((PPTREE)myTree, 2, y);
#line 294 "ptree.ch"
#line 295 "ptree.ch"
                                                            
#line 295 "ptree.ch"
#line 295 "ptree.ch"
                                                           } else 
#line 295 "ptree.ch"
                    {
#line 295 "ptree.ch"
#line 298 "ptree.ch"
                        int indexSon ;
                        
#line 298 "ptree.ch"
#line 299 "ptree.ch"
#line 299 "ptree.ch"
                        for ( indexSon = 1 ; indexSon < arity ; indexSon++ ) {
#line 299 "ptree.ch"
#line 300 "ptree.ch"
                                                                                    myTree.ReplaceTree(indexSon, InternalCoarseDecode(string, buffer, vect));
#line 300 "ptree.ch"
#line 301 "ptree.ch"
                                                                                    
#line 301 "ptree.ch"
#line 301 "ptree.ch"
                                                                                  }
#line 301 "ptree.ch"
                        
#line 301 "ptree.ch"
#line 302 "ptree.ch"
#if defined(NO_STACK   )
#line 302 "ptree.ch"
#line 303 "ptree.ch"
                        treeStack.reserve(currPos + 2);
#line 303 "ptree.ch"
#line 304 "ptree.ch"
                        treeStack [++currPos] = myTree ;
#line 304 "ptree.ch"
#line 304 "ptree.ch"
                        
#line 304 "ptree.ch"
#else 
                        treeStack.push((const PTREE &)myTree);
#endif
                        
#line 304 "ptree.ch"
#line 308 "ptree.ch"
                        goto start ;
                        
#line 308 "ptree.ch"
#line 309 "ptree.ch"
                        
#line 309 "ptree.ch"
#line 309 "ptree.ch"
                    }
                    
#line 309 "ptree.ch"
#line 310 "ptree.ch"
                    
#line 310 "ptree.ch"
#line 310 "ptree.ch"
                }
                
#line 310 "ptree.ch"
        }
#line 310 "ptree.ch"
        
#line 310 "ptree.ch"
#line 312 "ptree.ch"
        
#line 312 "ptree.ch"
#line 312 "ptree.ch"
    }
    
#line 312 "ptree.ch"
#line 313 "ptree.ch"
    while ( true ) {
#line 313 "ptree.ch"
#line 314 "ptree.ch"
#if !defined(NO_STACK)
#line 314 "ptree.ch"
#line 315 "ptree.ch"
                        currPos = treeStack.size();
#line 315 "ptree.ch"
#line 315 "ptree.ch"
                        
#line 315 "ptree.ch"
#endif
                        
#line 315 "ptree.ch"
#line 317 "ptree.ch"
                        if ( !currPos ) 
#line 317 "ptree.ch"
#line 318 "ptree.ch"
                            break ;
                        
#line 318 "ptree.ch"
#line 319 "ptree.ch"
                        PTREE   topNode ;
#line 319 "ptree.ch"
                        
#line 319 "ptree.ch"
#line 320 "ptree.ch"
#if defined(NO_STACK   )
#line 320 "ptree.ch"
#line 321 "ptree.ch"
                        (topNode=treeStack [currPos]);
#line 321 "ptree.ch"
                        
#line 321 "ptree.ch"
#line 322 "ptree.ch"
                        currPos-- ;
#line 322 "ptree.ch"
#line 322 "ptree.ch"
                        
#line 322 "ptree.ch"
#else 
                        (topNode=treeStack.top());
#line 322 "ptree.ch"
                        treeStack.pop();
#endif
                        
#line 322 "ptree.ch"
#line 327 "ptree.ch"
                        topNode.ReplaceTree(topNode.TreeArity(), myTree);
#line 327 "ptree.ch"
#line 328 "ptree.ch"
                        (myTree=topNode);
#line 328 "ptree.ch"
                        
#line 328 "ptree.ch"
#line 329 "ptree.ch"
                        
#line 329 "ptree.ch"
#line 329 "ptree.ch"
                    }
#line 329 "ptree.ch"
#line 330 "ptree.ch"
    return myTree ;
    
#line 330 "ptree.ch"
#line 331 "ptree.ch"
    
#line 331 "ptree.ch"
#line 331 "ptree.ch"
}
#line 331 "ptree.ch"

static int  lineNumberRef = 1 ;
static int  dumpMoreMode = 0 ;
static int  pageNumberRef ;
static int  pageNumber ;

#line 341 "ptree.ch"

#line 341 "ptree.ch"
static  void DumpNewLine ( int i )
#line 341 "ptree.ch"
{
#line 341 "ptree.ch"
#line 341 "ptree.ch"
    int _nextVal ;
    
#line 341 "ptree.ch"
#line 343 "ptree.ch"
    
    char    c [3];
    
#line 343 "ptree.ch"
#line 345 "ptree.ch"
    if ( lineNumberRef <= 30000 ) 
#line 345 "ptree.ch"
#line 346 "ptree.ch"
        LNewLine(i);
#line 346 "ptree.ch"
#line 347 "ptree.ch"
    if ( dumpMoreMode && currLine - lineNumberRef >= 24 ) {
#line 347 "ptree.ch"
#line 348 "ptree.ch"
                                                                lineNumberRef = currLine ;
#line 348 "ptree.ch"
#line 349 "ptree.ch"
                                                                pageNumber++ ;
#line 349 "ptree.ch"
#line 350 "ptree.ch"
                                                                _read(0, &c, 1);
#line 350 "ptree.ch"
#line 351 "ptree.ch"
                                                                if ( pageNumber >= pageNumberRef ) 
#line 351 "ptree.ch"
#line 352 "ptree.ch"
                                                                    lineNumberRef = 30000 ;
#line 352 "ptree.ch"
#line 353 "ptree.ch"
                                                                
#line 353 "ptree.ch"
#line 353 "ptree.ch"
                                                              }
#line 353 "ptree.ch"
#line 354 "ptree.ch"
    
#line 354 "ptree.ch"
#line 354 "ptree.ch"
}
#line 354 "ptree.ch"

#define LNewLine DumpNewLine

#line 358 "ptree.ch"

#line 358 "ptree.ch"
void PTREE::CLDumpTree ()
#line 358 "ptree.ch"
{
#line 358 "ptree.ch"
#line 358 "ptree.ch"
    int _nextVal ;
    
#line 358 "ptree.ch"
#line 360 "ptree.ch"
    
    PTREE   nTree = (PTREE)0 ;
#line 360 "ptree.ch"
    
#line 360 "ptree.ch"
#line 360 "ptree.ch"
    (nTree=copytree(PTREE(this -> pt)));
#line 360 "ptree.ch"
    
#line 360 "ptree.ch"
#line 362 "ptree.ch"
    DestroyPosCommentRec(nTree);
#line 362 "ptree.ch"
#line 364 "ptree.ch"
    int oldOutput = output ;
    
#line 364 "ptree.ch"
#line 366 "ptree.ch"
    Flush();
#line 366 "ptree.ch"
#line 367 "ptree.ch"
    output = 1 ;
#line 367 "ptree.ch"
#line 368 "ptree.ch"
    nTree.LDumpTree();
#line 368 "ptree.ch"
#line 369 "ptree.ch"
    output = oldOutput ;
#line 369 "ptree.ch"
#line 370 "ptree.ch"
    
#line 370 "ptree.ch"
#line 370 "ptree.ch"
}
#line 370 "ptree.ch"

#line 372 "ptree.ch"

#line 372 "ptree.ch"
void PTREE::LDumpTree ()
#line 372 "ptree.ch"
{
#line 372 "ptree.ch"
#line 372 "ptree.ch"
    int _nextVal ;
    
#line 372 "ptree.ch"
#line 374 "ptree.ch"
    
    PTREE   tree(this -> pt);
#line 374 "ptree.ch"
    
#line 374 "ptree.ch"
#line 376 "ptree.ch"
    tree.DumpTree();
#line 376 "ptree.ch"
#line 377 "ptree.ch"
    NewLine();
#line 377 "ptree.ch"
#line 378 "ptree.ch"
    
#line 378 "ptree.ch"
#line 378 "ptree.ch"
}
#line 378 "ptree.ch"

#line 380 "ptree.ch"

#line 380 "ptree.ch"
void PTREE::DumpTree ()
#line 380 "ptree.ch"
{
#line 380 "ptree.ch"
    register PPTREE _inter ;
#line 380 "ptree.ch"

#line 380 "ptree.ch"
#line 380 "ptree.ch"
    int _nextVal ;
    
#line 380 "ptree.ch"
#line 383 "ptree.ch"
    
    int i, test ;
    
#line 383 "ptree.ch"
#line 384 "ptree.ch"
    PTREE   name1, son ;
#line 384 "ptree.ch"
    
#line 384 "ptree.ch"
#line 385 "ptree.ch"
    PTREE   comm, cont ;
#line 385 "ptree.ch"
    
#line 385 "ptree.ch"
#line 386 "ptree.ch"
    int oldIsVirtMod = isVirtMod ;
    
#line 386 "ptree.ch"
#line 388 "ptree.ch"
    isVirtMod = 0 ;
#line 388 "ptree.ch"
#line 390 "ptree.ch"
    PTREE   tree(this -> pt);
#line 390 "ptree.ch"
    
#line 390 "ptree.ch"
#line 393 "ptree.ch"
    if ( lineNumberRef >= 30000 ) 
#line 393 "ptree.ch"
#line 394 "ptree.ch"
        return ;
    
#line 394 "ptree.ch"
#line 397 "ptree.ch"
    if ( (!tree) ) {
#line 397 "ptree.ch"
#line 398 "ptree.ch"
                        PrintString("[ NIL ] ");
#line 398 "ptree.ch"
#line 399 "ptree.ch"
                        return ;
                        
#line 399 "ptree.ch"
#line 400 "ptree.ch"
                        
#line 400 "ptree.ch"
#line 400 "ptree.ch"
                     }
#line 400 "ptree.ch"
#line 403 "ptree.ch"
    (comm=(PTREE)0);
#line 403 "ptree.ch"
    
#line 403 "ptree.ch"
#line 404 "ptree.ch"
    while ( (PPTREE)((comm=NextComm(tree, PRE, comm))) ) {
#line 404 "ptree.ch"
#line 405 "ptree.ch"
                                                                    (cont=(PTREE)0);
#line 405 "ptree.ch"
                                                                    
#line 405 "ptree.ch"
#line 406 "ptree.ch"
                                                                    PrintString("PRE -> ");
#line 406 "ptree.ch"
#line 406 "ptree.ch"
                                                                    LNewLine(1);
#line 406 "ptree.ch"
                                                                    
#line 406 "ptree.ch"
#line 407 "ptree.ch"
                                                                    Tab();
#line 407 "ptree.ch"
                                                                    
#line 407 "ptree.ch"
#line 408 "ptree.ch"
                                                                    Mark();
#line 408 "ptree.ch"
                                                                    while ( (PPTREE)((cont=NextCommContent(comm, cont))) ) {
#line 408 "ptree.ch"
#line 409 "ptree.ch"
                                                                                                                                  PrintString(BrainyValue(cont));
#line 409 "ptree.ch"
#line 409 "ptree.ch"
                                                                                                                                  LNewLine(1);
#line 409 "ptree.ch"
                                                                                                                                  
#line 409 "ptree.ch"
#line 410 "ptree.ch"
                                                                                                                                  
#line 410 "ptree.ch"
#line 410 "ptree.ch"
                                                                                                                                  }
#line 410 "ptree.ch"
                                                                    UnMark();
#line 410 "ptree.ch"
                                                                    
#line 410 "ptree.ch"
#line 412 "ptree.ch"
                                                                    
#line 412 "ptree.ch"
#line 412 "ptree.ch"
                                                                 }
#line 412 "ptree.ch"
#line 413 "ptree.ch"
    switch ( NumberTree(tree) ) {
#line 413 "ptree.ch"
#line 415 "ptree.ch"
        case TERM_TREE : 
#line 415 "ptree.ch"
#line 415 "ptree.ch"
        _Case5 : 
#line 415 "ptree.ch"
#line 415 "ptree.ch"
            ;
#line 415 "ptree.ch"
#line 415 "ptree.ch"
            {
#line 415 "ptree.ch"
#line 416 "ptree.ch"
                int x, y, dx, dy, x0, y0 ;
                
#line 416 "ptree.ch"
#line 417 "ptree.ch"
                char    myString [30];
                
#line 417 "ptree.ch"
#line 418 "ptree.ch"
                if ( GetCoord(tree, &x, &y, &dx, &dy) ) {
#line 418 "ptree.ch"
#line 418 "ptree.ch"
                                                                    PTREE   _Baum0 ;
#line 418 "ptree.ch"
                                                                    
#line 418 "ptree.ch"
#line 419 "ptree.ch"
                                                                    _Baum0 = (PPTREE) 0 ;
#line 419 "ptree.ch"
                                                                    
#line 419 "ptree.ch"
#line 419 "ptree.ch"
                                                                    GetCoordAbs(tree, _Baum0, &x0, &y0);
#line 419 "ptree.ch"
#line 420 "ptree.ch"
                                                                    sprintf(myString, "%d %d %d %d %d %d", y0, x0, y, x, dy, dx);
#line 420 "ptree.ch"
#line 421 "ptree.ch"
                                                                    PrintString("{");
#line 421 "ptree.ch"
#line 421 "ptree.ch"
                                                                    WriteString(myString);
#line 421 "ptree.ch"
#line 421 "ptree.ch"
                                                                    PrintString("}");
#line 421 "ptree.ch"
#line 421 "ptree.ch"
                                                                    LNewLine(1);
#line 421 "ptree.ch"
                                                                    
#line 421 "ptree.ch"
#line 422 "ptree.ch"
                                                                    
#line 422 "ptree.ch"
#line 422 "ptree.ch"
                                                                  }
#line 422 "ptree.ch"
#line 423 "ptree.ch"
                
#line 423 "ptree.ch"
#line 423 "ptree.ch"
            }
            
#line 423 "ptree.ch"
#line 424 "ptree.ch"
            PrintString("\"");
#line 424 "ptree.ch"
#line 424 "ptree.ch"
            DumpBrainyValue(tree);
#line 424 "ptree.ch"
            
#line 424 "ptree.ch"
#line 424 "ptree.ch"
            PrintString("\"");
#line 424 "ptree.ch"
#line 425 "ptree.ch"
            break ;
            
#line 425 "ptree.ch"
#line 427 "ptree.ch"
        case CLASS_TREE : 
#line 427 "ptree.ch"
#line 427 "ptree.ch"
        _Case6 : 
#line 427 "ptree.ch"
#line 427 "ptree.ch"
            ;
#line 427 "ptree.ch"
#line 427 "ptree.ch"
            {
#line 427 "ptree.ch"
#line 428 "ptree.ch"
                int x, y, dx, dy, x0, y0 ;
                
#line 428 "ptree.ch"
#line 429 "ptree.ch"
                char    myString [30];
                
#line 429 "ptree.ch"
#line 430 "ptree.ch"
                if ( GetCoord(tree, &x, &y, &dx, &dy) ) {
#line 430 "ptree.ch"
#line 430 "ptree.ch"
                                                                    PTREE   _Baum1 ;
#line 430 "ptree.ch"
                                                                    
#line 430 "ptree.ch"
#line 431 "ptree.ch"
                                                                    _Baum1 = (PPTREE) 0 ;
#line 431 "ptree.ch"
                                                                    
#line 431 "ptree.ch"
#line 431 "ptree.ch"
                                                                    GetCoordAbs(tree, _Baum1, &x0, &y0);
#line 431 "ptree.ch"
#line 432 "ptree.ch"
                                                                    sprintf(myString, "%d %d %d %d %d %d", y0, x0, y, x, dy, dx);
#line 432 "ptree.ch"
#line 433 "ptree.ch"
                                                                    PrintString("{");
#line 433 "ptree.ch"
#line 433 "ptree.ch"
                                                                    WriteString(myString);
#line 433 "ptree.ch"
#line 433 "ptree.ch"
                                                                    PrintString("}");
#line 433 "ptree.ch"
#line 433 "ptree.ch"
                                                                    LNewLine(1);
#line 433 "ptree.ch"
                                                                    
#line 433 "ptree.ch"
#line 434 "ptree.ch"
                                                                    
#line 434 "ptree.ch"
#line 434 "ptree.ch"
                                                                  }
#line 434 "ptree.ch"
#line 435 "ptree.ch"
                
#line 435 "ptree.ch"
#line 435 "ptree.ch"
            }
            
#line 435 "ptree.ch"
#line 436 "ptree.ch"
            PrintString("[");
#line 436 "ptree.ch"
#line 436 "ptree.ch"
            WriteString(NameConst(APPLY_CLASS(tree, TreeClass, Type())));
#line 436 "ptree.ch"
#line 436 "ptree.ch"
            WriteString(" <> ");
#line 436 "ptree.ch"
#line 436 "ptree.ch"
            PrintString("\"");
#line 436 "ptree.ch"
#line 436 "ptree.ch"
            WriteString(APPLY_CLASS(tree, TreeClass, Value()));
#line 436 "ptree.ch"
#line 436 "ptree.ch"
            PrintString("\"]");
#line 436 "ptree.ch"
#line 437 "ptree.ch"
            break ;
            
#line 437 "ptree.ch"
#line 439 "ptree.ch"
        case LIST : 
#line 439 "ptree.ch"
#line 439 "ptree.ch"
        _Case7 : 
#line 439 "ptree.ch"
#line 439 "ptree.ch"
            ;
#line 439 "ptree.ch"
#line 439 "ptree.ch"
            {
#line 439 "ptree.ch"
#line 440 "ptree.ch"
                int x, y, dx, dy, x0, y0 ;
                
#line 440 "ptree.ch"
#line 441 "ptree.ch"
                char    myString [30];
                
#line 441 "ptree.ch"
#line 442 "ptree.ch"
                if ( GetCoord(tree, &x, &y, &dx, &dy) ) {
#line 442 "ptree.ch"
#line 442 "ptree.ch"
                                                                    PTREE   _Baum2 ;
#line 442 "ptree.ch"
                                                                    
#line 442 "ptree.ch"
#line 443 "ptree.ch"
                                                                    _Baum2 = (PPTREE) 0 ;
#line 443 "ptree.ch"
                                                                    
#line 443 "ptree.ch"
#line 443 "ptree.ch"
                                                                    GetCoordAbs(tree, _Baum2, &x0, &y0);
#line 443 "ptree.ch"
#line 444 "ptree.ch"
                                                                    sprintf(myString, "%d %d %d %d %d %d", y0, x0, y, x, dy, dx);
#line 444 "ptree.ch"
#line 445 "ptree.ch"
                                                                    PrintString("{");
#line 445 "ptree.ch"
#line 445 "ptree.ch"
                                                                    WriteString(myString);
#line 445 "ptree.ch"
#line 445 "ptree.ch"
                                                                    PrintString("}");
#line 445 "ptree.ch"
#line 445 "ptree.ch"
                                                                    LNewLine(1);
#line 445 "ptree.ch"
                                                                    
#line 445 "ptree.ch"
#line 446 "ptree.ch"
                                                                    
#line 446 "ptree.ch"
#line 446 "ptree.ch"
                                                                  }
#line 446 "ptree.ch"
#line 447 "ptree.ch"
                
#line 447 "ptree.ch"
#line 447 "ptree.ch"
            }
            
#line 447 "ptree.ch"
#line 448 "ptree.ch"
            PrintString("[ LIST ");
#line 448 "ptree.ch"
#line 448 "ptree.ch"
            LNewLine(1);
#line 448 "ptree.ch"
            
#line 448 "ptree.ch"
#line 449 "ptree.ch"
            Tab();
#line 449 "ptree.ch"
            
#line 449 "ptree.ch"
#line 450 "ptree.ch"
            Mark();
#line 450 "ptree.ch"
            while ( !((!tree)) && ((_inter = (PPTREE)tree,1) && 
#line 450 "ptree.ch"
                                        (NumberTree(_inter) == LIST) &&
#line 450 "ptree.ch"
                                        1) && lineNumberRef < 30000 ) {
#line 450 "ptree.ch"
#line 451 "ptree.ch"
                                                                            (son=(tree?tree.Nextl():(PPTREE)0));
#line 451 "ptree.ch"
                                                                            
#line 451 "ptree.ch"
#line 452 "ptree.ch"
                                                                            son.DumpTree();
#line 452 "ptree.ch"
#line 453 "ptree.ch"
                                                                            LNewLine(1);
#line 453 "ptree.ch"
                                                                            
#line 453 "ptree.ch"
#line 454 "ptree.ch"
                                                                            
#line 454 "ptree.ch"
#line 454 "ptree.ch"
                                                                        }
#line 454 "ptree.ch"
            if ( tree && !(((_inter = (PPTREE)tree,1) && 
#line 454 "ptree.ch"
                                (NumberTree(_inter) == LIST) &&
#line 454 "ptree.ch"
                                1)) ) {
#line 454 "ptree.ch"
#line 456 "ptree.ch"
                                        PrintString("$");
#line 456 "ptree.ch"
#line 457 "ptree.ch"
                                        tree.DumpTree();
#line 457 "ptree.ch"
#line 458 "ptree.ch"
                                        LNewLine(1);
#line 458 "ptree.ch"
                                        
#line 458 "ptree.ch"
#line 459 "ptree.ch"
                                        
#line 459 "ptree.ch"
#line 459 "ptree.ch"
                                      }
#line 459 "ptree.ch"
            UnMark();
#line 459 "ptree.ch"
            
#line 459 "ptree.ch"
#line 461 "ptree.ch"
            PrintString("]");
#line 461 "ptree.ch"
#line 462 "ptree.ch"
            break ;
            
#line 462 "ptree.ch"
#line 464 "ptree.ch"
        case IN_LANGUAGE : 
#line 464 "ptree.ch"
#line 464 "ptree.ch"
        _Case8 : 
#line 464 "ptree.ch"
#line 464 "ptree.ch"
            ;
#line 464 "ptree.ch"
#line 464 "ptree.ch"
            {
#line 464 "ptree.ch"
#line 465 "ptree.ch"
                ((_inter = (PPTREE)tree,1) && 
#line 465 "ptree.ch"
                    ((name1=SonTree(_inter,1)),1) &&
#line 465 "ptree.ch"
                    ((tree=SonTree(_inter,2)),1) &&
#line 465 "ptree.ch"
                    1);
#line 465 "ptree.ch"
                ;
#line 465 "ptree.ch"
#line 466 "ptree.ch"
                {
#line 466 "ptree.ch"
                    PLANG _oldLanguage = pCurrentLanguage;
#line 466 "ptree.ch"
                    SwitchLang("Value");
#line 466 "ptree.ch"
#line 467 "ptree.ch"
                    {
#line 467 "ptree.ch"
#line 467 "ptree.ch"
                        {
#line 467 "ptree.ch"
#line 468 "ptree.ch"
                            int x, y, dx, dy, x0, y0 ;
                            
#line 468 "ptree.ch"
#line 469 "ptree.ch"
                            char    myString [30];
                            
#line 469 "ptree.ch"
#line 470 "ptree.ch"
                            if ( GetCoord(tree, &x, &y, &dx, &dy) ) {
#line 470 "ptree.ch"
#line 470 "ptree.ch"
                                                                                PTREE   _Baum3 ;
#line 470 "ptree.ch"
                                                                                
#line 470 "ptree.ch"
#line 471 "ptree.ch"
                                                                                _Baum3 = (PPTREE) 0 ;
#line 471 "ptree.ch"
                                                                                
#line 471 "ptree.ch"
#line 471 "ptree.ch"
                                                                                GetCoordAbs(tree, _Baum3, &x0, &y0);
#line 471 "ptree.ch"
#line 472 "ptree.ch"
                                                                                sprintf(myString, "%d %d %d %d %d %d", y0, x0, y, x, dy, dx);
#line 472 "ptree.ch"
#line 473 "ptree.ch"
                                                                                PrintString("{");
#line 473 "ptree.ch"
#line 473 "ptree.ch"
                                                                                WriteString(myString);
#line 473 "ptree.ch"
#line 473 "ptree.ch"
                                                                                PrintString("}");
#line 473 "ptree.ch"
#line 473 "ptree.ch"
                                                                                LNewLine(1);
#line 473 "ptree.ch"
                                                                                
#line 473 "ptree.ch"
#line 474 "ptree.ch"
                                                                                
#line 474 "ptree.ch"
#line 474 "ptree.ch"
                                                                              }
#line 474 "ptree.ch"
#line 475 "ptree.ch"
                            
#line 475 "ptree.ch"
#line 475 "ptree.ch"
                        }
                        
#line 475 "ptree.ch"
#line 476 "ptree.ch"
                        PrintString("[ IN_LANGUAGE");
#line 476 "ptree.ch"
#line 476 "ptree.ch"
                        LNewLine(1);
#line 476 "ptree.ch"
                        
#line 476 "ptree.ch"
#line 477 "ptree.ch"
                        Tab();
#line 477 "ptree.ch"
                        
#line 477 "ptree.ch"
#line 478 "ptree.ch"
                        Mark();
#line 478 "ptree.ch"
                        PrintString("[ \"");
#line 478 "ptree.ch"
                        DumpBrainyValue(name1);
#line 478 "ptree.ch"
                        
#line 478 "ptree.ch"
                        PrintString("\" ]");
#line 478 "ptree.ch"
                        LNewLine(1);
#line 478 "ptree.ch"
                        
#line 478 "ptree.ch"
                        tree.DumpTree();
#line 478 "ptree.ch"
                        LNewLine(1);
#line 478 "ptree.ch"
                        
#line 478 "ptree.ch"
                        UnMark();
#line 478 "ptree.ch"
                        
#line 478 "ptree.ch"
#line 482 "ptree.ch"
                        PrintString("]");
#line 482 "ptree.ch"
#line 483 "ptree.ch"
                        
#line 483 "ptree.ch"
#line 483 "ptree.ch"
                    };
#line 483 "ptree.ch"
                    SwitchLangPoint(_oldLanguage);
#line 483 "ptree.ch"
                }
#line 483 "ptree.ch"
                
#line 483 "ptree.ch"
#line 484 "ptree.ch"
                
#line 484 "ptree.ch"
#line 484 "ptree.ch"
            }
            
#line 484 "ptree.ch"
#line 485 "ptree.ch"
            break ;
            
#line 485 "ptree.ch"
#line 487 "ptree.ch"
        default : 
#line 487 "ptree.ch"
#line 487 "ptree.ch"
        _Case9 : 
#line 487 "ptree.ch"
#line 487 "ptree.ch"
            ;
#line 487 "ptree.ch"
#line 487 "ptree.ch"
            {
#line 487 "ptree.ch"
#line 488 "ptree.ch"
                int x, y, dx, dy, x0, y0 ;
                
#line 488 "ptree.ch"
#line 489 "ptree.ch"
                char    myString [30];
                
#line 489 "ptree.ch"
#line 490 "ptree.ch"
                if ( GetCoord(tree, &x, &y, &dx, &dy) ) {
#line 490 "ptree.ch"
#line 490 "ptree.ch"
                                                                    PTREE   _Baum4 ;
#line 490 "ptree.ch"
                                                                    
#line 490 "ptree.ch"
#line 491 "ptree.ch"
                                                                    _Baum4 = (PPTREE) 0 ;
#line 491 "ptree.ch"
                                                                    
#line 491 "ptree.ch"
#line 491 "ptree.ch"
                                                                    GetCoordAbs(tree, _Baum4, &x0, &y0);
#line 491 "ptree.ch"
#line 492 "ptree.ch"
                                                                    sprintf(myString, "%d %d %d %d %d %d", y0, x0, y, x, dy, dx);
#line 492 "ptree.ch"
#line 493 "ptree.ch"
                                                                    PrintString("{");
#line 493 "ptree.ch"
#line 493 "ptree.ch"
                                                                    WriteString(myString);
#line 493 "ptree.ch"
#line 493 "ptree.ch"
                                                                    PrintString("}");
#line 493 "ptree.ch"
#line 493 "ptree.ch"
                                                                    LNewLine(1);
#line 493 "ptree.ch"
                                                                    
#line 493 "ptree.ch"
#line 494 "ptree.ch"
                                                                    
#line 494 "ptree.ch"
#line 494 "ptree.ch"
                                                                  }
#line 494 "ptree.ch"
#line 495 "ptree.ch"
                
#line 495 "ptree.ch"
#line 495 "ptree.ch"
            }
            
#line 495 "ptree.ch"
#line 496 "ptree.ch"
            PrintString("[ ");
#line 496 "ptree.ch"
#line 496 "ptree.ch"
            WriteString(NameConst(NumberTree(tree)));
#line 496 "ptree.ch"
#line 497 "ptree.ch"
            if ( (test = treearity(tree) > 1 || treearity(tree) == 1 && treearity(sontree(tree, 1)) > 1) ) {
#line 497 "ptree.ch"
#line 498 "ptree.ch"
                                                                                                                        LNewLine(1);
#line 498 "ptree.ch"
                                                                                                                        
#line 498 "ptree.ch"
#line 499 "ptree.ch"
                                                                                                                        Tab();
#line 499 "ptree.ch"
                                                                                                                        
#line 499 "ptree.ch"
#line 500 "ptree.ch"
                                                                                                                        
#line 500 "ptree.ch"
#line 500 "ptree.ch"
                                                                                                                        } else 
#line 500 "ptree.ch"
#line 501 "ptree.ch"
                PrintString(" ");
#line 501 "ptree.ch"
            
#line 501 "ptree.ch"
#line 503 "ptree.ch"
            Mark();
#line 503 "ptree.ch"
#line 503 "ptree.ch"
            for ( i = 1 ; i <= treearity(tree) && lineNumberRef < 30000 ; i++ ) {
#line 503 "ptree.ch"
#line 504 "ptree.ch"
                                                                                            PTREE   son(sontree(tree, i));
#line 504 "ptree.ch"
                                                                                            
#line 504 "ptree.ch"
#line 505 "ptree.ch"
                                                                                            son.DumpTree();
#line 505 "ptree.ch"
#line 506 "ptree.ch"
                                                                                            if ( test ) 
#line 506 "ptree.ch"
#line 507 "ptree.ch"
                                                                                                LNewLine(1);
#line 507 "ptree.ch"
                                                                                            
#line 507 "ptree.ch"
#line 508 "ptree.ch"
                                                                                            
#line 508 "ptree.ch"
#line 508 "ptree.ch"
                                                                                        }
#line 508 "ptree.ch"
            
#line 508 "ptree.ch"
            UnMark();
#line 508 "ptree.ch"
            
#line 508 "ptree.ch"
#line 510 "ptree.ch"
            PrintString("]");
#line 510 "ptree.ch"
    }
#line 510 "ptree.ch"
    
#line 510 "ptree.ch"
#line 514 "ptree.ch"
    (comm=(PTREE)0);
#line 514 "ptree.ch"
    
#line 514 "ptree.ch"
#line 515 "ptree.ch"
    while ( ((comm=NextComm(tree, POST, comm))) ) {
#line 515 "ptree.ch"
#line 516 "ptree.ch"
                                                            (cont=(PTREE)0);
#line 516 "ptree.ch"
                                                            
#line 516 "ptree.ch"
#line 517 "ptree.ch"
                                                            LNewLine(1);
#line 517 "ptree.ch"
                                                            
#line 517 "ptree.ch"
#line 518 "ptree.ch"
                                                            if ( PrePost() ) 
#line 518 "ptree.ch"
#line 519 "ptree.ch"
                                                                PrintString("PREPOST -> ");
#line 519 "ptree.ch"
                                                            else 
#line 519 "ptree.ch"
#line 521 "ptree.ch"
                                                                PrintString("POST -> ");
#line 521 "ptree.ch"
                                                            
#line 521 "ptree.ch"
#line 522 "ptree.ch"
                                                            LNewLine(1);
#line 522 "ptree.ch"
                                                            
#line 522 "ptree.ch"
#line 523 "ptree.ch"
                                                            Tab();
#line 523 "ptree.ch"
                                                            
#line 523 "ptree.ch"
#line 524 "ptree.ch"
                                                            Mark();
#line 524 "ptree.ch"
                                                            while ( ((cont=NextCommContent(comm, cont))) ) {
#line 524 "ptree.ch"
#line 525 "ptree.ch"
                                                                                                                    PrintString(BrainyValue(cont));
#line 525 "ptree.ch"
#line 525 "ptree.ch"
                                                                                                                    LNewLine(1);
#line 525 "ptree.ch"
                                                                                                                    
#line 525 "ptree.ch"
#line 526 "ptree.ch"
                                                                                                                    
#line 526 "ptree.ch"
#line 526 "ptree.ch"
                                                                                                                }
#line 526 "ptree.ch"
                                                            UnMark();
#line 526 "ptree.ch"
                                                            
#line 526 "ptree.ch"
#line 528 "ptree.ch"
                                                            
#line 528 "ptree.ch"
#line 528 "ptree.ch"
                                                        }
#line 528 "ptree.ch"
#line 529 "ptree.ch"
    isVirtMod = oldIsVirtMod ;
#line 529 "ptree.ch"
#line 530 "ptree.ch"
    
#line 530 "ptree.ch"
#line 530 "ptree.ch"
}
#line 530 "ptree.ch"

#line 532 "ptree.ch"

#line 532 "ptree.ch"
void PTREE::MDumpTree ( int pageNum )
#line 532 "ptree.ch"
{
#line 532 "ptree.ch"
#line 532 "ptree.ch"
    int _nextVal ;
    
#line 532 "ptree.ch"
#line 535 "ptree.ch"
    
    PTREE   tree(this -> pt);
#line 535 "ptree.ch"
    
#line 535 "ptree.ch"
#line 537 "ptree.ch"
    dumpMoreMode = 1 ;
#line 537 "ptree.ch"
#line 538 "ptree.ch"
    lineNumberRef = currLine ;
#line 538 "ptree.ch"
#line 539 "ptree.ch"
    pageNumber = 0 ;
#line 539 "ptree.ch"
#line 540 "ptree.ch"
    pageNumberRef = pageNum ;
#line 540 "ptree.ch"
#line 541 "ptree.ch"
    tree.DumpTree();
#line 541 "ptree.ch"
#line 542 "ptree.ch"
    dumpMoreMode = 0 ;
#line 542 "ptree.ch"
#line 543 "ptree.ch"
    lineNumberRef = 0 ;
#line 543 "ptree.ch"
#line 544 "ptree.ch"
    
#line 544 "ptree.ch"
#line 544 "ptree.ch"
}
#line 544 "ptree.ch"

#line 546 "ptree.ch"

#line 546 "ptree.ch"
void PTREE::DumpNode ()
#line 546 "ptree.ch"
{
#line 546 "ptree.ch"
#line 546 "ptree.ch"
    int _nextVal ;
    
#line 546 "ptree.ch"
#line 548 "ptree.ch"
    PrintString("[ ");
#line 548 "ptree.ch"
#line 548 "ptree.ch"
    WriteString(NameConst(PTREE(this -> pt).NumberTree()));
#line 548 "ptree.ch"
#line 548 "ptree.ch"
    PrintString("]");
#line 548 "ptree.ch"
#line 548 "ptree.ch"
    LNewLine(1);
#line 548 "ptree.ch"
    
#line 548 "ptree.ch"
#line 549 "ptree.ch"
    
#line 549 "ptree.ch"
#line 549 "ptree.ch"
}
#line 549 "ptree.ch"

#line 549 "ptree.ch"
#line 549 "ptree.ch"
static void ptree_Anchor () { int i = 1;} 
#line 549 "ptree.ch"
/*Well done my boy */ 
#line 549 "ptree.ch"
