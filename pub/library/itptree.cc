
#line 28 "itptree.ch"
/*************************************************************************/
#line 28 "itptree.ch"
/*                                                                       */
#line 28 "itptree.ch"
/*        Produced by Metachop version 2.0  -    1989-1995               */
#line 28 "itptree.ch"
/*     Tree      Meta     Chopper      developped    by                  */
#line 28 "itptree.ch"
/*                  Eric Lavillonniere                                   */
#line 28 "itptree.ch"
/*                                                                       */
#line 28 "itptree.ch"
/*************************************************************************/
#line 28 "itptree.ch"
#line 28 "itptree.ch"
#include "token.h"
#line 28 "itptree.ch"
#define decomp decomp_metachop
#line 28 "itptree.ch"
#line 28 "itptree.ch"
#ifndef for_elem
#line 28 "itptree.ch"
#line 28 "itptree.ch"
#define for_elem _for_elem
#line 28 "itptree.ch"
#endif
#ifdef INCONNU
#line 28 "itptree.ch"
#line 28 "itptree.ch"
PTREE   for_elem ;
#line 28 "itptree.ch"
#line 28 "itptree.ch"
#endif
#line 34 "itptree.ch"
#line 34 "itptree.ch"
PPTREE ItPtree::NextTree ( PPTREE elem, PPTREE stop, int all )
#line 34 "itptree.ch"
{
#line 34 "itptree.ch"
#line 34 "itptree.ch"
    int _nextVal ;
#line 34 "itptree.ch"
#line 36 "itptree.ch"
    PPTREE  father ;
#line 36 "itptree.ch"
#line 37 "itptree.ch"
    register PPTREE ret ;
#line 37 "itptree.ch"
#line 38 "itptree.ch"
    register int    arity ;
#line 38 "itptree.ch"
#line 39 "itptree.ch"
    int rank ;
#line 39 "itptree.ch"
#line 41 "itptree.ch"
    if ( !elem ) 
#line 41 "itptree.ch"
#line 42 "itptree.ch"
        return elem ;
#line 42 "itptree.ch"
#line 43 "itptree.ch"
    arity = treearity(elem);
#line 43 "itptree.ch"
#line 44 "itptree.ch"
    if ( arity > 0 && NumberTree(elem) != IN_LANGUAGE ) {
#line 44 "itptree.ch"
#line 47 "itptree.ch"
#line 47 "itptree.ch"
                                                                for ( rank = 1 ; rank <= arity ; rank++ ) 
#line 47 "itptree.ch"
#line 48 "itptree.ch"
                                                                    if ( ret = sontree(elem, rank) ) {
#line 48 "itptree.ch"
#line 49 "itptree.ch"
if ( ret == stop ) 
#line 49 "itptree.ch"
#line 50 "itptree.ch"
    return (PPTREE)0 ;
#line 50 "itptree.ch"
#line 51 "itptree.ch"
if ( all || NumberTree(ret) != TERM_TREE ) 
#line 51 "itptree.ch"
#line 52 "itptree.ch"
    return ret ;
#line 52 "itptree.ch"
#line 53 "itptree.ch"
#line 53 "itptree.ch"
#line 53 "itptree.ch"
                                                                                                         }
#line 53 "itptree.ch"
#line 53 "itptree.ch"
#line 54 "itptree.ch"
#line 54 "itptree.ch"
#line 54 "itptree.ch"
                                                             } else 
#line 54 "itptree.ch"
#line 55 "itptree.ch"
        ;
#line 55 "itptree.ch"
#line 55 "itptree.ch"
#line 56 "itptree.ch"
next : 
#line 56 "itptree.ch"
#line 57 "itptree.ch"
    if ( father = FatherTree(elem) ) {
#line 57 "itptree.ch"
#line 58 "itptree.ch"
                                            rank = ranktree(elem);
#line 58 "itptree.ch"
#line 59 "itptree.ch"
                                            arity = treearity(father);
#line 59 "itptree.ch"
#line 60 "itptree.ch"
                                            while ( rank < arity ) {
#line 60 "itptree.ch"
#line 61 "itptree.ch"
                                                                        if ( ret = sontree(father, rank + 1) ) {
#line 61 "itptree.ch"
#line 62 "itptree.ch"
if ( ret == stop ) 
#line 62 "itptree.ch"
#line 63 "itptree.ch"
    return (PPTREE)0 ;
#line 63 "itptree.ch"
#line 64 "itptree.ch"
if ( all || NumberTree(ret) != TERM_TREE ) 
#line 64 "itptree.ch"
#line 65 "itptree.ch"
    return ret ;
#line 65 "itptree.ch"
#line 66 "itptree.ch"
#line 66 "itptree.ch"
#line 66 "itptree.ch"
                                                                                                                    }
#line 66 "itptree.ch"
#line 67 "itptree.ch"
                                                                        rank = rank + 1 ;
#line 67 "itptree.ch"
#line 68 "itptree.ch"
#line 68 "itptree.ch"
#line 68 "itptree.ch"
                                                                     }
#line 68 "itptree.ch"
#line 69 "itptree.ch"
                                            if ( father == stop ) 
#line 69 "itptree.ch"
#line 70 "itptree.ch"
                                                return (PPTREE)0 ;
#line 70 "itptree.ch"
#line 71 "itptree.ch"
                                            elem = father ;
#line 71 "itptree.ch"
#line 72 "itptree.ch"
                                            goto next ;
#line 72 "itptree.ch"
#line 73 "itptree.ch"
#line 73 "itptree.ch"
#line 73 "itptree.ch"
                                        } else 
#line 73 "itptree.ch"
#line 74 "itptree.ch"
        return (PPTREE)0 ;
#line 74 "itptree.ch"
#line 74 "itptree.ch"
#line 75 "itptree.ch"
#line 75 "itptree.ch"
#line 75 "itptree.ch"
}
#line 75 "itptree.ch"

#line 79 "itptree.ch"
#line 79 "itptree.ch"
PPTREE ItPtree::SNextTree ( PPTREE elem, PPTREE stop, int all )
#line 79 "itptree.ch"
{
#line 79 "itptree.ch"
#line 79 "itptree.ch"
    int _nextVal ;
#line 79 "itptree.ch"
#line 82 "itptree.ch"
    PPTREE  father ;
#line 82 "itptree.ch"
#line 83 "itptree.ch"
    register PPTREE ret ;
#line 83 "itptree.ch"
#line 84 "itptree.ch"
    int rank ;
#line 84 "itptree.ch"
#line 86 "itptree.ch"
    if ( !elem ) {
#line 86 "itptree.ch"
#line 87 "itptree.ch"
                    return elem ;
#line 87 "itptree.ch"
#line 88 "itptree.ch"
#line 88 "itptree.ch"
#line 88 "itptree.ch"
                   } else 
#line 88 "itptree.ch"
#line 89 "itptree.ch"
        ;
#line 89 "itptree.ch"
#line 89 "itptree.ch"
#line 90 "itptree.ch"
next : 
#line 90 "itptree.ch"
#line 91 "itptree.ch"
    if ( father = FatherTree(elem) ) {
#line 91 "itptree.ch"
#line 92 "itptree.ch"
                                            rank = ranktree(elem);
#line 92 "itptree.ch"
#line 93 "itptree.ch"
                                            while ( rank < treearity(father) ) {
#line 93 "itptree.ch"
#line 94 "itptree.ch"
if ( ret = sontree(father, rank + 1) ) {
#line 94 "itptree.ch"
#line 95 "itptree.ch"
                                                if ( ret == stop ) 
#line 95 "itptree.ch"
#line 96 "itptree.ch"
                                                    return (PPTREE)0 ;
#line 96 "itptree.ch"
#line 97 "itptree.ch"
                                                if ( all || NumberTree(ret) != TERM_TREE ) 
#line 97 "itptree.ch"
#line 98 "itptree.ch"
                                                    return ret ;
#line 98 "itptree.ch"
#line 99 "itptree.ch"
#line 99 "itptree.ch"
#line 99 "itptree.ch"
                                            }
#line 99 "itptree.ch"
#line 100 "itptree.ch"
rank = rank + 1 ;
#line 100 "itptree.ch"
#line 101 "itptree.ch"
#line 101 "itptree.ch"
#line 101 "itptree.ch"
                                                                                  }
#line 101 "itptree.ch"
#line 102 "itptree.ch"
                                            if ( father == stop ) 
#line 102 "itptree.ch"
#line 103 "itptree.ch"
                                                return (PPTREE)0 ;
#line 103 "itptree.ch"
#line 104 "itptree.ch"
                                            elem = father ;
#line 104 "itptree.ch"
#line 105 "itptree.ch"
                                            goto next ;
#line 105 "itptree.ch"
#line 106 "itptree.ch"
#line 106 "itptree.ch"
#line 106 "itptree.ch"
                                        } else 
#line 106 "itptree.ch"
#line 107 "itptree.ch"
        return (PPTREE)0 ;
#line 107 "itptree.ch"
#line 107 "itptree.ch"
#line 108 "itptree.ch"
#line 108 "itptree.ch"
#line 108 "itptree.ch"
}
#line 108 "itptree.ch"

#line 112 "itptree.ch"
#line 112 "itptree.ch"
PPTREE ItPtree::FSNextTree ( PPTREE elem, PPTREE stop )
#line 112 "itptree.ch"
{
#line 112 "itptree.ch"
#line 112 "itptree.ch"
    int _nextVal ;
#line 112 "itptree.ch"
#line 115 "itptree.ch"
    PPTREE  father ;
#line 115 "itptree.ch"
#line 116 "itptree.ch"
    register PPTREE ret ;
#line 116 "itptree.ch"
#line 117 "itptree.ch"
    int rank ;
#line 117 "itptree.ch"
#line 119 "itptree.ch"
    if ( !elem ) {
#line 119 "itptree.ch"
#line 120 "itptree.ch"
                    return elem ;
#line 120 "itptree.ch"
#line 121 "itptree.ch"
#line 121 "itptree.ch"
#line 121 "itptree.ch"
                   } else 
#line 121 "itptree.ch"
#line 122 "itptree.ch"
        ;
#line 122 "itptree.ch"
#line 122 "itptree.ch"
#line 123 "itptree.ch"
next : 
#line 123 "itptree.ch"
#line 124 "itptree.ch"
    if ( father = fathertree(elem) ) {
#line 124 "itptree.ch"
#line 125 "itptree.ch"
                                            rank = ranktree(elem);
#line 125 "itptree.ch"
#line 126 "itptree.ch"
                                            while ( rank < treearity(father) ) {
#line 126 "itptree.ch"
#line 127 "itptree.ch"
if ( ret = sontree(father, rank + 1) ) 
#line 127 "itptree.ch"
#line 128 "itptree.ch"
    return ret == stop ? (PPTREE)0 : ret ;
#line 128 "itptree.ch"
#line 129 "itptree.ch"
rank = rank + 1 ;
#line 129 "itptree.ch"
#line 130 "itptree.ch"
#line 130 "itptree.ch"
#line 130 "itptree.ch"
                                                                                  }
#line 130 "itptree.ch"
#line 131 "itptree.ch"
                                            return father == stop ? (PPTREE)0 : father ;
#line 131 "itptree.ch"
#line 132 "itptree.ch"
#line 132 "itptree.ch"
#line 132 "itptree.ch"
                                        } else 
#line 132 "itptree.ch"
#line 133 "itptree.ch"
        return (PPTREE)0 ;
#line 133 "itptree.ch"
#line 133 "itptree.ch"
#line 134 "itptree.ch"
#line 134 "itptree.ch"
#line 134 "itptree.ch"
}
#line 134 "itptree.ch"

#line 142 "itptree.ch"
#line 142 "itptree.ch"
PPTREE ItPtree::FindNoUp ( PPTREE elem, PPTREE start, PPTREE stop )
#line 142 "itptree.ch"
{
#line 142 "itptree.ch"
#line 142 "itptree.ch"
    int _nextVal ;
#line 142 "itptree.ch"
#line 145 "itptree.ch"
    register PPTREE ret ;
#line 145 "itptree.ch"
#line 146 "itptree.ch"
    int rank, arity ;
#line 146 "itptree.ch"
#line 148 "itptree.ch"
debut : 
#line 148 "itptree.ch"
#line 149 "itptree.ch"
    if ( start && start == stop ) 
#line 149 "itptree.ch"
#line 150 "itptree.ch"
        return (PPTREE) -1 ;
#line 150 "itptree.ch"
#line 151 "itptree.ch"
    if ( QCompareTree(elem, start, (PPTREE)0, -1) ) 
#line 151 "itptree.ch"
#line 152 "itptree.ch"
        return start ;
#line 152 "itptree.ch"
#line 153 "itptree.ch"
    if ( !start || NumberTree(start) == IN_LANGUAGE ) 
#line 153 "itptree.ch"
#line 154 "itptree.ch"
        return (PPTREE)0 ;
#line 154 "itptree.ch"
#line 155 "itptree.ch"
    arity = treearity(start);
#line 155 "itptree.ch"
#line 156 "itptree.ch"
#line 156 "itptree.ch"
    for ( rank = 1 ; rank < arity ; rank++ ) 
#line 156 "itptree.ch"
#line 157 "itptree.ch"
        if ( ret = FindNoUp(elem, sontree(start, rank), stop) ) 
#line 157 "itptree.ch"
#line 158 "itptree.ch"
            return ret ;
#line 158 "itptree.ch"
#line 158 "itptree.ch"
#line 161 "itptree.ch"
    if ( rank == arity ) {
#line 161 "itptree.ch"
#line 162 "itptree.ch"
                            start = sontree(start, rank);
#line 162 "itptree.ch"
#line 163 "itptree.ch"
                            goto debut ;
#line 163 "itptree.ch"
#line 164 "itptree.ch"
#line 164 "itptree.ch"
#line 164 "itptree.ch"
                           }
#line 164 "itptree.ch"
#line 165 "itptree.ch"
    return (PPTREE)0 ;
#line 165 "itptree.ch"
#line 166 "itptree.ch"
#line 166 "itptree.ch"
#line 166 "itptree.ch"
}
#line 166 "itptree.ch"

#line 168 "itptree.ch"
#line 168 "itptree.ch"
PPTREE ItPtree::FindInternal ( PPTREE elem, PPTREE start, PPTREE stop )
#line 168 "itptree.ch"
{
#line 168 "itptree.ch"
#line 168 "itptree.ch"
    int _nextVal ;
#line 168 "itptree.ch"
#line 170 "itptree.ch"
    register PPTREE ret, retValue ;
#line 170 "itptree.ch"
#line 171 "itptree.ch"
    int rank = -1 ;
#line 171 "itptree.ch"
#line 173 "itptree.ch"
    if ( retValue = FindNoUp(elem, start, stop) ) 
#line 173 "itptree.ch"
#line 174 "itptree.ch"
        return retValue ;
#line 174 "itptree.ch"
#line 175 "itptree.ch"
next : 
#line 175 "itptree.ch"
#line 176 "itptree.ch"
    if ( (ret = FatherTree(start)) && (rank = ranktree(start)) < treearity(ret) ) 
#line 176 "itptree.ch"
#line 178 "itptree.ch"
        if ( retValue = FindRank(elem, ret, stop, rank + 1) ) 
#line 178 "itptree.ch"
#line 179 "itptree.ch"
            return retValue ;
#line 179 "itptree.ch"
#line 180 "itptree.ch"
    if ( ret ) {
#line 180 "itptree.ch"
#line 181 "itptree.ch"
                    if ( ret == stop ) 
#line 181 "itptree.ch"
#line 182 "itptree.ch"
                        return (PPTREE) -1 ;
#line 182 "itptree.ch"
#line 183 "itptree.ch"
                    start = ret ;
#line 183 "itptree.ch"
#line 184 "itptree.ch"
                    goto next ;
#line 184 "itptree.ch"
#line 185 "itptree.ch"
#line 185 "itptree.ch"
#line 185 "itptree.ch"
                } else 
#line 185 "itptree.ch"
#line 186 "itptree.ch"
        return (PPTREE)0 ;
#line 186 "itptree.ch"
#line 186 "itptree.ch"
#line 187 "itptree.ch"
#line 187 "itptree.ch"
#line 187 "itptree.ch"
}
#line 187 "itptree.ch"

#line 189 "itptree.ch"
#line 189 "itptree.ch"
PPTREE ItPtree::FindNext ( PPTREE elem, PPTREE start, PPTREE stop )
#line 189 "itptree.ch"
{
#line 189 "itptree.ch"
#line 189 "itptree.ch"
    int _nextVal ;
#line 189 "itptree.ch"
#line 191 "itptree.ch"
    PPTREE  ret = (PPTREE)FindInternal(elem, start, stop);
#line 191 "itptree.ch"
#line 193 "itptree.ch"
    return ret == (PPTREE) -1 ? (PPTREE)0 : ret ;
#line 193 "itptree.ch"
#line 194 "itptree.ch"
#line 194 "itptree.ch"
#line 194 "itptree.ch"
}
#line 194 "itptree.ch"

#line 198 "itptree.ch"

#line 198 "itptree.ch"
PPTREE ItPtree::FindRank ( PPTREE elem, PPTREE start, PPTREE stop, int rank )
#line 198 "itptree.ch"
{
#line 198 "itptree.ch"
#line 198 "itptree.ch"
    int _nextVal ;
#line 198 "itptree.ch"
#line 201 "itptree.ch"
    int arity = treearity(start);
#line 201 "itptree.ch"
#line 202 "itptree.ch"
    PPTREE  ret ;
#line 202 "itptree.ch"
#line 204 "itptree.ch"
#line 204 "itptree.ch"
    for (; rank <= arity ; rank++ ) 
#line 204 "itptree.ch"
#line 205 "itptree.ch"
        if ( ret = FindNoUp(elem, sontree(start, rank), stop) ) 
#line 205 "itptree.ch"
#line 206 "itptree.ch"
            return ret ;
#line 206 "itptree.ch"
#line 206 "itptree.ch"
#line 207 "itptree.ch"
    return (PPTREE)0 ;
#line 207 "itptree.ch"
#line 208 "itptree.ch"
#line 208 "itptree.ch"
#line 208 "itptree.ch"
}
#line 208 "itptree.ch"

#line 208 "itptree.ch"
/*Well done my boy */ 
#line 208 "itptree.ch"

