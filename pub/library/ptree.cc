
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
#line 197 "ptree.ch"
    do {
#line 197 "ptree.ch"
#line 198 "ptree.ch"
        worked = false ;
#line 198 "ptree.ch"
#line 199 "ptree.ch"
        char    *internal = (char *)(const char *)buffer ;
        
#line 199 "ptree.ch"
#line 200 "ptree.ch"
        if ( string == 0 ) 
#line 200 "ptree.ch"
#line 201 "ptree.ch"
            string = internal ;
#line 201 "ptree.ch"
#line 202 "ptree.ch"
        if ( vect.size() > 0 ) {
#line 202 "ptree.ch"
#line 203 "ptree.ch"
                                    if ( string - internal > 512 ) {
#line 203 "ptree.ch"
#line 204 "ptree.ch"
                                                                        buffer.CutFront(string - internal);
#line 204 "ptree.ch"
#line 205 "ptree.ch"
                                                                        internal = string = (char *)(const char *)buffer ;
#line 205 "ptree.ch"
#line 206 "ptree.ch"
                                                                        worked = true ;
#line 206 "ptree.ch"
#line 207 "ptree.ch"
                                                                        
#line 207 "ptree.ch"
#line 207 "ptree.ch"
                                                                      }
#line 207 "ptree.ch"
#line 208 "ptree.ch"
                                    while ( buffer.length() < 2048 && vect.size() > 0 ) {
#line 208 "ptree.ch"
#line 209 "ptree.ch"
                                                                                                if ( string != internal ) {
#line 209 "ptree.ch"
#line 210 "ptree.ch"
buffer.CutFront(string - internal);
#line 210 "ptree.ch"
#line 211 "ptree.ch"
internal = string = (char *)(const char *)buffer ;
#line 211 "ptree.ch"
#line 212 "ptree.ch"

#line 212 "ptree.ch"
#line 212 "ptree.ch"
                                                                                                                            }
#line 212 "ptree.ch"
#line 213 "ptree.ch"
                                                                                                buffer += vect [vect.size() - 1];
#line 213 "ptree.ch"
#line 214 "ptree.ch"
                                                                                                internal = string = (char *)(const char *)buffer ;
#line 214 "ptree.ch"
#line 215 "ptree.ch"
                                                                                                vect.pop_back();
#line 215 "ptree.ch"
#line 216 "ptree.ch"
                                                                                                worked = true ;
#line 216 "ptree.ch"
#line 217 "ptree.ch"
                                                                                                
#line 217 "ptree.ch"
#line 217 "ptree.ch"
                                                                                              }
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
    while ( worked );
#line 219 "ptree.ch"
    
#line 219 "ptree.ch"
#line 220 "ptree.ch"
#if defined(NO_STACK)
#line 220 "ptree.ch"
#line 222 "ptree.ch"
    vector<PTREE>  treeStack ;
    
#line 222 "ptree.ch"
#line 222 "ptree.ch"
    
#line 222 "ptree.ch"
#elif defined(STL_3)
        stack<PTREE, vector<PTREE> >     treeStack ;
#else 
    stack<vector<PTREE> >     treeStack ;
#endif
    
#line 222 "ptree.ch"
#line 234 "ptree.ch"
    unsigned int   internalPos = posDecode ;
    
#line 234 "ptree.ch"
#line 236 "ptree.ch"
start : 
#line 236 "ptree.ch"
#line 237 "ptree.ch"
    arity = *string++ ;
#line 237 "ptree.ch"
#line 238 "ptree.ch"
    posDecode++ ;
#line 238 "ptree.ch"
#line 241 "ptree.ch"
    if ( arity == (char) -1 ) 
#line 241 "ptree.ch"
#line 242 "ptree.ch"
        (myTree=(PTREE)0);
#line 242 "ptree.ch"
    
#line 242 "ptree.ch"
    else 
#line 243 "ptree.ch"
    {
#line 243 "ptree.ch"
#line 246 "ptree.ch"
        nbNode = CoarseDecodeInt(string);
#line 246 "ptree.ch"
#line 247 "ptree.ch"
        (comment=InternalCoarseDecode(string, buffer, vect));
#line 247 "ptree.ch"
        
#line 247 "ptree.ch"
#line 250 "ptree.ch"
        switch ( arity ) {
#line 250 "ptree.ch"
#line 251 "ptree.ch"
            case 1 : 
#line 251 "ptree.ch"
#line 252 "ptree.ch"
                switch ( nbNode ) {
#line 252 "ptree.ch"
#line 253 "ptree.ch"
                    case TERM_TREE : 
#line 253 "ptree.ch"
#line 254 "ptree.ch"
                        length = CoarseDecodeInt(string);
#line 254 "ptree.ch"
#line 255 "ptree.ch"
                        (myTree=LMakeString(string, length));
#line 255 "ptree.ch"
                        
#line 255 "ptree.ch"
#line 256 "ptree.ch"
                        posDecode += length ;
#line 256 "ptree.ch"
#line 257 "ptree.ch"
                        string += length ;
#line 257 "ptree.ch"
#line 258 "ptree.ch"
                        myTree.ReplaceTree(0, comment);
#line 258 "ptree.ch"
#line 259 "ptree.ch"
                        break ;
                        
#line 259 "ptree.ch"
#line 260 "ptree.ch"
                    case CLASS_TREE : 
#line 260 "ptree.ch"
#line 261 "ptree.ch"
                        {
#line 261 "ptree.ch"
#line 262 "ptree.ch"
                            (myTree=DecodeClass(string));
#line 262 "ptree.ch"
                            
#line 262 "ptree.ch"
#line 263 "ptree.ch"
                            myTree.ReplaceTree(0, comment);
#line 263 "ptree.ch"
#line 264 "ptree.ch"
                            
#line 264 "ptree.ch"
#line 264 "ptree.ch"
                        }
                        
#line 264 "ptree.ch"
#line 265 "ptree.ch"
                        break ;
                        
#line 265 "ptree.ch"
#line 267 "ptree.ch"
                    default : 
#line 267 "ptree.ch"
#line 267 "ptree.ch"
                        (myTree=PTREE(nbNode, (int)arity));
#line 267 "ptree.ch"
                        
#line 267 "ptree.ch"
#line 268 "ptree.ch"
                        myTree.ReplaceTree(0, comment);
#line 268 "ptree.ch"
#line 269 "ptree.ch"
#if defined(NO_STACK   )
#line 269 "ptree.ch"
#line 270 "ptree.ch"
                        treeStack.reserve(currPos + 2);
#line 270 "ptree.ch"
#line 271 "ptree.ch"
                        treeStack [++currPos] = myTree ;
#line 271 "ptree.ch"
#line 271 "ptree.ch"
                        
#line 271 "ptree.ch"
#else 
                        treeStack.push((const PTREE &)myTree);
#endif
                        
#line 271 "ptree.ch"
#line 275 "ptree.ch"
                        goto start ;
                        
#line 275 "ptree.ch"
#line 278 "ptree.ch"
                        break ;
                        
#line 278 "ptree.ch"
                }
#line 278 "ptree.ch"
                
#line 278 "ptree.ch"
#line 280 "ptree.ch"
                break ;
                
#line 280 "ptree.ch"
#line 282 "ptree.ch"
            default : 
#line 282 "ptree.ch"
#line 282 "ptree.ch"
                {
#line 282 "ptree.ch"
#line 285 "ptree.ch"
                    (myTree=PTREE(nbNode, (int)arity));
#line 285 "ptree.ch"
                    
#line 285 "ptree.ch"
#line 286 "ptree.ch"
                    myTree.ReplaceTree(0, comment);
#line 286 "ptree.ch"
#line 287 "ptree.ch"
                    if ( arity == 2 && nbNode == GEO ) {
#line 287 "ptree.ch"
#line 288 "ptree.ch"
                                                            long    x = 0 ;
                                                            
#line 288 "ptree.ch"
#line 289 "ptree.ch"
                                                            long    y = 0 ;
                                                            
#line 289 "ptree.ch"
#line 290 "ptree.ch"
                                                            x = CoarseDecodeInt(string);
#line 290 "ptree.ch"
#line 291 "ptree.ch"
                                                            y = CoarseDecodeInt(string);
#line 291 "ptree.ch"
#line 292 "ptree.ch"
                                                            SON_WRITE((PPTREE)myTree, 1, x);
#line 292 "ptree.ch"
#line 293 "ptree.ch"
                                                            SON_WRITE((PPTREE)myTree, 2, y);
#line 293 "ptree.ch"
#line 294 "ptree.ch"
                                                            
#line 294 "ptree.ch"
#line 294 "ptree.ch"
                                                           } else 
#line 294 "ptree.ch"
                    {
#line 294 "ptree.ch"
#line 297 "ptree.ch"
                        int indexSon ;
                        
#line 297 "ptree.ch"
#line 298 "ptree.ch"
#line 298 "ptree.ch"
                        for ( indexSon = 1 ; indexSon < arity ; indexSon++ ) {
#line 298 "ptree.ch"
#line 299 "ptree.ch"
                                                                                    myTree.ReplaceTree(indexSon, InternalCoarseDecode(string, buffer, vect));
#line 299 "ptree.ch"
#line 300 "ptree.ch"
                                                                                    
#line 300 "ptree.ch"
#line 300 "ptree.ch"
                                                                                  }
#line 300 "ptree.ch"
                        
#line 300 "ptree.ch"
#line 301 "ptree.ch"
#if defined(NO_STACK   )
#line 301 "ptree.ch"
#line 302 "ptree.ch"
                        treeStack.reserve(currPos + 2);
#line 302 "ptree.ch"
#line 303 "ptree.ch"
                        treeStack [++currPos] = myTree ;
#line 303 "ptree.ch"
#line 303 "ptree.ch"
                        
#line 303 "ptree.ch"
#else 
                        treeStack.push((const PTREE &)myTree);
#endif
                        
#line 303 "ptree.ch"
#line 307 "ptree.ch"
                        goto start ;
                        
#line 307 "ptree.ch"
#line 308 "ptree.ch"
                        
#line 308 "ptree.ch"
#line 308 "ptree.ch"
                    }
                    
#line 308 "ptree.ch"
#line 309 "ptree.ch"
                    
#line 309 "ptree.ch"
#line 309 "ptree.ch"
                }
                
#line 309 "ptree.ch"
        }
#line 309 "ptree.ch"
        
#line 309 "ptree.ch"
#line 311 "ptree.ch"
        
#line 311 "ptree.ch"
#line 311 "ptree.ch"
    }
    
#line 311 "ptree.ch"
#line 312 "ptree.ch"
    while ( true ) {
#line 312 "ptree.ch"
#line 313 "ptree.ch"
#if !defined(NO_STACK)
#line 313 "ptree.ch"
#line 314 "ptree.ch"
                        currPos = treeStack.size();
#line 314 "ptree.ch"
#line 314 "ptree.ch"
                        
#line 314 "ptree.ch"
#endif
                        
#line 314 "ptree.ch"
#line 316 "ptree.ch"
                        if ( !currPos ) 
#line 316 "ptree.ch"
#line 317 "ptree.ch"
                            break ;
                        
#line 317 "ptree.ch"
#line 318 "ptree.ch"
                        PTREE   topNode ;
#line 318 "ptree.ch"
                        
#line 318 "ptree.ch"
#line 319 "ptree.ch"
#if defined(NO_STACK   )
#line 319 "ptree.ch"
#line 320 "ptree.ch"
                        (topNode=treeStack [currPos]);
#line 320 "ptree.ch"
                        
#line 320 "ptree.ch"
#line 321 "ptree.ch"
                        currPos-- ;
#line 321 "ptree.ch"
#line 321 "ptree.ch"
                        
#line 321 "ptree.ch"
#else 
                        (topNode=treeStack.top());
#line 321 "ptree.ch"
                        treeStack.pop();
#endif
                        
#line 321 "ptree.ch"
#line 326 "ptree.ch"
                        topNode.ReplaceTree(topNode.TreeArity(), myTree);
#line 326 "ptree.ch"
#line 327 "ptree.ch"
                        (myTree=topNode);
#line 327 "ptree.ch"
                        
#line 327 "ptree.ch"
#line 328 "ptree.ch"
                        
#line 328 "ptree.ch"
#line 328 "ptree.ch"
                    }
#line 328 "ptree.ch"
#line 329 "ptree.ch"
    return myTree ;
    
#line 329 "ptree.ch"
#line 330 "ptree.ch"
    
#line 330 "ptree.ch"
#line 330 "ptree.ch"
}
#line 330 "ptree.ch"

#line 330 "ptree.ch"
#line 330 "ptree.ch"
static void ptree_Anchor () { int i = 1;} 
#line 330 "ptree.ch"
/*Well done my boy */ 
#line 330 "ptree.ch"

