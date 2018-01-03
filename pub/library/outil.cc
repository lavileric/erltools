
#line 31 "outil.ch"
/*************************************************************************/
#line 31 "outil.ch"
/*                                                                       */
#line 31 "outil.ch"
/*        Produced by Metachop version 2.0  -    1989-1995               */
#line 31 "outil.ch"
/*     Tree      Meta     Chopper      developped    by                  */
#line 31 "outil.ch"
/*                  Eric Lavillonniere                                   */
#line 31 "outil.ch"
/*                                                                       */
#line 31 "outil.ch"
/*************************************************************************/
#line 31 "outil.ch"

#line 31 "outil.ch"
#include "token.h"
#line 31 "outil.ch"
#define decomp decomp_metachop
#line 31 "outil.ch"

#line 31 "outil.ch"
#ifndef for_elem
#line 31 "outil.ch"
#line 31 "outil.ch"
#define for_elem _for_elem

#line 31 "outil.ch"
#line 31 "outil.ch"

#line 31 "outil.ch"
#endif
#ifdef INCONNU
#line 31 "outil.ch"
#line 31 "outil.ch"
PTREE   for_elem ;
#line 31 "outil.ch"

#line 31 "outil.ch"
#line 31 "outil.ch"

#line 31 "outil.ch"
#endif
#define DISABLE_EXTERN_INCLUDE 

#include "interf.h"
#include <stdio.h>
#include <fcntl.h>
#include "memges.h"

void    InsertVar (char *, PTREE, int, PTREE) ;

#if 0
#line 31 "outil.ch"
#line 44 "outil.ch"
extern char *currentLanguage ;

#line 44 "outil.ch"
#line 45 "outil.ch"
extern int  firstError ;

#line 45 "outil.ch"
#line 45 "outil.ch"

#line 45 "outil.ch"
#endif

PVAR    listVar = (PVAR)0, listFreeVar = (PVAR)0 ;
int cplusGen ;

#line 53 "outil.ch"

#line 53 "outil.ch"
int CompareTree ( PTREE tree1, PTREE tree2, PTREE father, int slot )
#line 53 "outil.ch"
{
#line 53 "outil.ch"
#line 53 "outil.ch"
    int _nextVal ;
    
#line 53 "outil.ch"
#line 56 "outil.ch"
    int arity, currParam ;
    
#line 56 "outil.ch"
#line 57 "outil.ch"
    int nbTree1 ;
    
#line 57 "outil.ch"
#line 59 "outil.ch"
debut : 
#line 59 "outil.ch"
#line 60 "outil.ch"
    nbTree1 = NumberTree(tree1);
#line 60 "outil.ch"
#line 61 "outil.ch"
    if ( nbTree1 == META ) {
#line 61 "outil.ch"
#line 62 "outil.ch"
                                InsertVar(AllocString(BrainyValue(tree1)), father, slot, tree2);
#line 62 "outil.ch"
#line 63 "outil.ch"
                                return (1);
                                
#line 63 "outil.ch"
#line 64 "outil.ch"
                                
#line 64 "outil.ch"
#line 64 "outil.ch"
                             }
#line 64 "outil.ch"
#line 65 "outil.ch"
    if ( (!tree1) || (!tree2) ) 
#line 65 "outil.ch"
#line 66 "outil.ch"
        return !((!tree1) ^ (!tree2));
    
#line 66 "outil.ch"
#line 67 "outil.ch"
    if ( NumberTree(tree1) == NumberTree(tree2) ) {
#line 67 "outil.ch"
#line 68 "outil.ch"
                                                        if ( NumberTree(tree1) == TERM_TREE ) {
#line 68 "outil.ch"
#line 71 "outil.ch"
                                                                                                    return !strcmp(CacheAddrRead(sontree(tree1, 1)), CacheAddrRead(sontree(tree2, 1)));
                                                                                                    
#line 71 "outil.ch"
#line 72 "outil.ch"
                                                                                                    
#line 72 "outil.ch"
#line 72 "outil.ch"
                                                                                                 } else 
#line 72 "outil.ch"
                                                        {
#line 72 "outil.ch"
#line 73 "outil.ch"
                                                            if ( (arity = treearity(tree1)) >= 1 ) {
#line 73 "outil.ch"
#line 74 "outil.ch"
#line 74 "outil.ch"
                                                                                                            for ( currParam = arity ; currParam > 1 ; currParam-- ) 
#line 74 "outil.ch"
#line 75 "outil.ch"
                                                                                                                if ( !CompareTree(sontree(tree1, currParam), sontree(tree2, currParam), tree2, currParam) ) 
#line 75 "outil.ch"
#line 76 "outil.ch"
                                                                                                                    return (0);
                                                                                                                
#line 76 "outil.ch"
                                                                                                            
#line 76 "outil.ch"
#line 79 "outil.ch"
                                                                                                            (tree1=sontree(tree1, 1));
#line 79 "outil.ch"
                                                                                                            
#line 79 "outil.ch"
#line 80 "outil.ch"
                                                                                                            (tree2=sontree(tree2, 1));
#line 80 "outil.ch"
                                                                                                            
#line 80 "outil.ch"
#line 81 "outil.ch"
                                                                                                            (father=tree2);
#line 81 "outil.ch"
                                                                                                            
#line 81 "outil.ch"
#line 82 "outil.ch"
                                                                                                            slot = 1 ;
#line 82 "outil.ch"
#line 83 "outil.ch"
                                                                                                            goto debut ;
                                                                                                            
#line 83 "outil.ch"
#line 84 "outil.ch"
                                                                                                            
#line 84 "outil.ch"
#line 84 "outil.ch"
                                                                                                        }
#line 84 "outil.ch"
#line 85 "outil.ch"
                                                            return (1);
                                                            
#line 85 "outil.ch"
#line 86 "outil.ch"
                                                            
#line 86 "outil.ch"
#line 86 "outil.ch"
                                                        }
                                                        
#line 86 "outil.ch"
#line 87 "outil.ch"
                                                        
#line 87 "outil.ch"
#line 87 "outil.ch"
                                                      } else 
#line 87 "outil.ch"
#line 88 "outil.ch"
        return (0);
        
#line 88 "outil.ch"
    
#line 88 "outil.ch"
#line 89 "outil.ch"
    
#line 89 "outil.ch"
#line 89 "outil.ch"
}
#line 89 "outil.ch"

#line 93 "outil.ch"

#line 93 "outil.ch"
int QCompareTree ( PPTREE tree1, PPTREE tree2, PPTREE father, int slot )
#line 93 "outil.ch"
{
#line 93 "outil.ch"
#line 93 "outil.ch"
    int _nextVal ;
    
#line 93 "outil.ch"
#line 96 "outil.ch"
    int arity, currParam ;
    
#line 96 "outil.ch"
#line 97 "outil.ch"
    int nbTree1, nbTree2 ;
    
#line 97 "outil.ch"
#line 99 "outil.ch"
debut : 
#line 99 "outil.ch"
#line 100 "outil.ch"
    nbTree1 = NumberTree(tree1);
#line 100 "outil.ch"
#line 101 "outil.ch"
    if ( nbTree1 == META ) 
#line 101 "outil.ch"
#line 102 "outil.ch"
        return (1);
    
#line 102 "outil.ch"
#line 103 "outil.ch"
    if ( !tree1 || !tree2 ) 
#line 103 "outil.ch"
#line 104 "outil.ch"
        return !(!tree1 ^ !tree2);
    
#line 104 "outil.ch"
#line 105 "outil.ch"
    nbTree2 = NumberTree(tree2);
#line 105 "outil.ch"
#line 106 "outil.ch"
    if ( nbTree1 == CLASS_TREE ) 
#line 106 "outil.ch"
#line 107 "outil.ch"
        nbTree1 = TERM_TREE ;
#line 107 "outil.ch"
#line 108 "outil.ch"
    if ( nbTree2 == CLASS_TREE ) 
#line 108 "outil.ch"
#line 109 "outil.ch"
        nbTree2 = TERM_TREE ;
#line 109 "outil.ch"
#line 110 "outil.ch"
    if ( nbTree1 == nbTree2 ) {
#line 110 "outil.ch"
#line 111 "outil.ch"
                                    if ( nbTree1 == TERM_TREE ) {
#line 111 "outil.ch"
#line 114 "outil.ch"
                                                                    return !strcmp(Value(tree1), Value(tree2));
                                                                    
#line 114 "outil.ch"
#line 115 "outil.ch"
                                                                    
#line 115 "outil.ch"
#line 115 "outil.ch"
                                                                  } else 
#line 115 "outil.ch"
                                    {
#line 115 "outil.ch"
#line 116 "outil.ch"
                                        if ( (arity = treearity(tree1)) >= 1 ) {
#line 116 "outil.ch"
#line 117 "outil.ch"
#line 117 "outil.ch"
                                                                                        for ( currParam = arity ; currParam > 1 ; currParam-- ) 
#line 117 "outil.ch"
#line 118 "outil.ch"
                                                                                            if ( !QCompareTree(sontree(tree1, currParam), sontree(tree2, currParam), (PPTREE)0, -1) ) 
#line 118 "outil.ch"
#line 119 "outil.ch"
                                                                                                return (0);
                                                                                            
#line 119 "outil.ch"
                                                                                        
#line 119 "outil.ch"
#line 122 "outil.ch"
                                                                                        tree1 = sontree(tree1, 1);
#line 122 "outil.ch"
#line 123 "outil.ch"
                                                                                        tree2 = sontree(tree2, 1);
#line 123 "outil.ch"
#line 124 "outil.ch"
                                                                                        goto debut ;
                                                                                        
#line 124 "outil.ch"
#line 125 "outil.ch"
                                                                                        
#line 125 "outil.ch"
#line 125 "outil.ch"
                                                                                    }
#line 125 "outil.ch"
#line 126 "outil.ch"
                                        return (1);
                                        
#line 126 "outil.ch"
#line 127 "outil.ch"
                                        
#line 127 "outil.ch"
#line 127 "outil.ch"
                                    }
                                    
#line 127 "outil.ch"
#line 128 "outil.ch"
                                    
#line 128 "outil.ch"
#line 128 "outil.ch"
                                } else 
#line 128 "outil.ch"
#line 129 "outil.ch"
        return (0);
        
#line 129 "outil.ch"
    
#line 129 "outil.ch"
#line 130 "outil.ch"
    
#line 130 "outil.ch"
#line 130 "outil.ch"
}
#line 130 "outil.ch"

#line 134 "outil.ch"

#line 134 "outil.ch"
PVAR AllocVar ()
#line 134 "outil.ch"
{
#line 134 "outil.ch"
#line 134 "outil.ch"
    int _nextVal ;
    
#line 134 "outil.ch"
#line 137 "outil.ch"
    PVAR    myPoint ;
    
#line 137 "outil.ch"
#line 139 "outil.ch"
    if ( listFreeVar ) {
#line 139 "outil.ch"
#line 140 "outil.ch"
                            myPoint = listFreeVar ;
#line 140 "outil.ch"
#line 141 "outil.ch"
                            listFreeVar = listFreeVar -> next ;
#line 141 "outil.ch"
#line 142 "outil.ch"
                            
#line 142 "outil.ch"
#line 142 "outil.ch"
                        } else 
#line 142 "outil.ch"
#line 143 "outil.ch"
        myPoint = (PVAR)malloc(sizeof(VAR));
#line 143 "outil.ch"
    
#line 143 "outil.ch"
#line 144 "outil.ch"
    myPoint -> name = (char *)0 ;
#line 144 "outil.ch"
#line 145 "outil.ch"
    myPoint -> father = (PPTREE)0 ;
#line 145 "outil.ch"
#line 146 "outil.ch"
    myPoint -> slot = -1 ;
#line 146 "outil.ch"
#line 147 "outil.ch"
    myPoint -> elem = (PPTREE)0 ;
#line 147 "outil.ch"
#line 148 "outil.ch"
    return (myPoint);
    
#line 148 "outil.ch"
#line 149 "outil.ch"
    
#line 149 "outil.ch"
#line 149 "outil.ch"
}
#line 149 "outil.ch"

#line 153 "outil.ch"

#line 153 "outil.ch"
void FreeVar ()
#line 153 "outil.ch"
{
#line 153 "outil.ch"
#line 153 "outil.ch"
    int _nextVal ;
    
#line 153 "outil.ch"
#line 156 "outil.ch"
    PVAR    interVar, frontVar ;
    
#line 156 "outil.ch"
#line 158 "outil.ch"
    interVar = frontVar = listVar ;
#line 158 "outil.ch"
#line 159 "outil.ch"
    while ( frontVar ) {
#line 159 "outil.ch"
#line 160 "outil.ch"
                            interVar = frontVar ;
#line 160 "outil.ch"
#line 161 "outil.ch"
                            free(frontVar -> name);
#line 161 "outil.ch"
#line 162 "outil.ch"
                            frontVar = frontVar -> next ;
#line 162 "outil.ch"
#line 163 "outil.ch"
                            
#line 163 "outil.ch"
#line 163 "outil.ch"
                        }
#line 163 "outil.ch"
#line 164 "outil.ch"
    if ( frontVar != interVar ) {
#line 164 "outil.ch"
#line 165 "outil.ch"
                                    interVar -> next = listFreeVar ;
#line 165 "outil.ch"
#line 166 "outil.ch"
                                    listFreeVar = listVar ;
#line 166 "outil.ch"
#line 167 "outil.ch"
                                    listVar = (PVAR)0 ;
#line 167 "outil.ch"
#line 168 "outil.ch"
                                    
#line 168 "outil.ch"
#line 168 "outil.ch"
                                  }
#line 168 "outil.ch"
#line 169 "outil.ch"
    
#line 169 "outil.ch"
#line 169 "outil.ch"
}
#line 169 "outil.ch"

#line 173 "outil.ch"

#line 173 "outil.ch"
void InsertVar ( char *name, PTREE father, int slot, PTREE elem )
#line 173 "outil.ch"
{
#line 173 "outil.ch"
#line 173 "outil.ch"
    int _nextVal ;
    
#line 173 "outil.ch"
#line 176 "outil.ch"
    PVAR    pVar ;
    
#line 176 "outil.ch"
#line 178 "outil.ch"
    pVar = AllocVar();
#line 178 "outil.ch"
#line 179 "outil.ch"
    pVar -> name = name ;
#line 179 "outil.ch"
#line 180 "outil.ch"
    pVar -> father = father ;
#line 180 "outil.ch"
#line 181 "outil.ch"
    pVar -> slot = slot ;
#line 181 "outil.ch"
#line 182 "outil.ch"
    pVar -> elem = elem ;
#line 182 "outil.ch"
#line 183 "outil.ch"
    pVar -> next = listVar ;
#line 183 "outil.ch"
#line 184 "outil.ch"
    listVar = pVar ;
#line 184 "outil.ch"
#line 185 "outil.ch"
    
#line 185 "outil.ch"
#line 185 "outil.ch"
}
#line 185 "outil.ch"

#line 189 "outil.ch"

#line 189 "outil.ch"
PVAR SearchVar ( const char *name )
#line 189 "outil.ch"
{
#line 189 "outil.ch"
#line 189 "outil.ch"
    int _nextVal ;
    
#line 189 "outil.ch"
#line 192 "outil.ch"
    register PVAR   pVar = listVar ;
    
#line 192 "outil.ch"
#line 194 "outil.ch"
    while ( pVar ) {
#line 194 "outil.ch"
#line 195 "outil.ch"
                        if ( !strcmp(pVar -> name, name) ) 
#line 195 "outil.ch"
#line 196 "outil.ch"
                            return (pVar);
                        
#line 196 "outil.ch"
#line 197 "outil.ch"
                        pVar = pVar -> next ;
#line 197 "outil.ch"
#line 198 "outil.ch"
                        
#line 198 "outil.ch"
#line 198 "outil.ch"
                    }
#line 198 "outil.ch"
#line 199 "outil.ch"
    return (PVAR)0 ;
    
#line 199 "outil.ch"
#line 200 "outil.ch"
    
#line 200 "outil.ch"
#line 200 "outil.ch"
}
#line 200 "outil.ch"

#line 204 "outil.ch"

#line 204 "outil.ch"
PTREE ForeachTreeMeta ( const char *name, PTREE &treeApp, PTREE(*callFunct)(PTREE &, PTREE &, int, PTREE &, int &), PTREE &father, int position, PTREE &treeSubstitution, int &nbsubstitution )
#line 204 "outil.ch"
{
#line 204 "outil.ch"
#line 204 "outil.ch"
    int _nextVal ;
    
#line 204 "outil.ch"
#line 208 "outil.ch"
    int arity, currParam ;
    
#line 208 "outil.ch"
#line 209 "outil.ch"
    PTREE   retTree((void *)0);
#line 209 "outil.ch"
    
#line 209 "outil.ch"
#line 210 "outil.ch"
    PTREE   son ;
#line 210 "outil.ch"
    
#line 210 "outil.ch"
#line 211 "outil.ch"
    PTREE   operand = (PTREE)0 ;
#line 211 "outil.ch"
    
#line 211 "outil.ch"
#line 212 "outil.ch"
    PTREE   operandFather = (PTREE)0 ;
#line 212 "outil.ch"
    
#line 212 "outil.ch"
#line 211 "outil.ch"
    (operand=treeApp);
#line 211 "outil.ch"
    
#line 211 "outil.ch"
#line 212 "outil.ch"
    (operandFather=father);
#line 212 "outil.ch"
    
#line 212 "outil.ch"
#line 214 "outil.ch"
start : 
#line 214 "outil.ch"
#line 215 "outil.ch"
    if ( (!operand) ) 
#line 215 "outil.ch"
#line 216 "outil.ch"
        return retTree ;
    
#line 216 "outil.ch"
#line 217 "outil.ch"
    if ( NumberTree(operand) == META && !strcmp(BrainyValue(operand), name) ) {
#line 217 "outil.ch"
#line 218 "outil.ch"
                                                                                        PTREE   ret = (PTREE)0 ;
#line 218 "outil.ch"
                                                                                        
#line 218 "outil.ch"
#line 218 "outil.ch"
                                                                                        (ret=(PTREE)(*callFunct)(operand, operandFather, position, treeSubstitution, nbsubstitution));
#line 218 "outil.ch"
                                                                                        
#line 218 "outil.ch"
#line 219 "outil.ch"
                                                                                        if ( retTree == PTREE(0) ) 
#line 219 "outil.ch"
#line 220 "outil.ch"
                                                                                            (retTree=ret);
#line 220 "outil.ch"
                                                                                        
#line 220 "outil.ch"
#line 221 "outil.ch"
                                                                                        return retTree ;
                                                                                        
#line 221 "outil.ch"
#line 222 "outil.ch"
                                                                                        
#line 222 "outil.ch"
#line 222 "outil.ch"
                                                                                      }
#line 222 "outil.ch"
#line 223 "outil.ch"
    if ( NumberTree(operand) == IN_LANGUAGE ) 
#line 223 "outil.ch"
#line 224 "outil.ch"
        return retTree ;
    
#line 224 "outil.ch"
#line 225 "outil.ch"
    if ( NumberTree(operand) != TERM_TREE ) {
#line 225 "outil.ch"
#line 226 "outil.ch"
                                                if ( retTree == PTREE(0) ) 
#line 226 "outil.ch"
#line 227 "outil.ch"
                                                    (retTree=operand);
#line 227 "outil.ch"
                                                
#line 227 "outil.ch"
#line 228 "outil.ch"
                                                arity = treearity(operand);
#line 228 "outil.ch"
#line 229 "outil.ch"
#line 229 "outil.ch"
                                                for ( currParam = 1 ; currParam < arity ; currParam++ ) {
#line 229 "outil.ch"
#line 230 "outil.ch"
                                                                                                                (son=sontree(operand, currParam));
#line 230 "outil.ch"
                                                                                                                
#line 230 "outil.ch"
#line 231 "outil.ch"
                                                                                                                ForeachTreeMeta(name, son, callFunct, operand, currParam, treeSubstitution, nbsubstitution);
#line 231 "outil.ch"
#line 232 "outil.ch"
                                                                                                                
#line 232 "outil.ch"
#line 232 "outil.ch"
                                                                                                             }
#line 232 "outil.ch"
                                                
#line 232 "outil.ch"
#line 233 "outil.ch"
                                                if ( arity >= 1 ) {
#line 233 "outil.ch"
#line 234 "outil.ch"
                                                                        (operandFather=operand);
#line 234 "outil.ch"
                                                                        
#line 234 "outil.ch"
#line 235 "outil.ch"
                                                                        (operand=sontree(operand, arity));
#line 235 "outil.ch"
                                                                        
#line 235 "outil.ch"
#line 236 "outil.ch"
                                                                        position = arity ;
#line 236 "outil.ch"
#line 237 "outil.ch"
                                                                        goto start ;
                                                                        
#line 237 "outil.ch"
#line 238 "outil.ch"
                                                                        
#line 238 "outil.ch"
#line 238 "outil.ch"
                                                                    }
#line 238 "outil.ch"
#line 239 "outil.ch"
                                                
#line 239 "outil.ch"
#line 239 "outil.ch"
                                               }
#line 239 "outil.ch"
#line 240 "outil.ch"
    return retTree ;
    
#line 240 "outil.ch"
#line 241 "outil.ch"
    
#line 241 "outil.ch"
#line 241 "outil.ch"
}
#line 241 "outil.ch"

#line 245 "outil.ch"

#line 245 "outil.ch"
PTREE ForReplace ( PTREE &elem, PTREE &father, int slot, PTREE &treeSubstitution, int &nbsubstitution )
#line 245 "outil.ch"
{
#line 245 "outil.ch"
#line 245 "outil.ch"
    int _nextVal ;
    
#line 245 "outil.ch"
#line 248 "outil.ch"
    if ( (!father) ) 
#line 248 "outil.ch"
#line 249 "outil.ch"
        return treeSubstitution ;
    
#line 249 "outil.ch"
#line 250 "outil.ch"
    if ( !nbsubstitution ) 
#line 250 "outil.ch"
#line 251 "outil.ch"
        nbsubstitution = 1 ;
#line 251 "outil.ch"
    else 
#line 251 "outil.ch"
#line 253 "outil.ch"
        (treeSubstitution=CopyTree(treeSubstitution));
#line 253 "outil.ch"
        
#line 253 "outil.ch"
    
#line 253 "outil.ch"
#line 254 "outil.ch"
    return ReplaceTree(father, slot, treeSubstitution);
    
#line 254 "outil.ch"
#line 255 "outil.ch"
    
#line 255 "outil.ch"
#line 255 "outil.ch"
}
#line 255 "outil.ch"

#line 259 "outil.ch"

#line 259 "outil.ch"
PTREE MetaRep ( const char *name, PPTREE tree, PPTREE treeSubst )
#line 259 "outil.ch"
{
#line 259 "outil.ch"
#line 259 "outil.ch"
    int _nextVal ;
    
#line 259 "outil.ch"
#line 265 "outil.ch"
    PTREE   res ;
#line 265 "outil.ch"
    
#line 265 "outil.ch"
#line 267 "outil.ch"
    AddRef(tree);
#line 267 "outil.ch"
#line 268 "outil.ch"
    AddRef(treeSubst);
#line 268 "outil.ch"
#line 270 "outil.ch"
    {
#line 270 "outil.ch"
#line 270 "outil.ch"
        PTREE   nullTree = (PTREE)0 ;
#line 270 "outil.ch"
        
#line 270 "outil.ch"
#line 271 "outil.ch"
        PTREE   firstTree = (PTREE)0 ;
#line 271 "outil.ch"
        
#line 271 "outil.ch"
#line 272 "outil.ch"
        int nbsubstitution = 0 ;
        
#line 272 "outil.ch"
#line 273 "outil.ch"
        PTREE   treeSubstitution = (PTREE)0 ;
#line 273 "outil.ch"
        
#line 273 "outil.ch"
#line 270 "outil.ch"
        (nullTree=(PTREE)0);
#line 270 "outil.ch"
        
#line 270 "outil.ch"
#line 271 "outil.ch"
        (firstTree=tree);
#line 271 "outil.ch"
        
#line 271 "outil.ch"
#line 273 "outil.ch"
        (treeSubstitution=treeSubst);
#line 273 "outil.ch"
        
#line 273 "outil.ch"
#line 274 "outil.ch"
        (res=ForeachTreeMeta(name, firstTree, ForReplace, nullTree, -1, treeSubstitution, nbsubstitution));
#line 274 "outil.ch"
        
#line 274 "outil.ch"
#line 275 "outil.ch"
        
#line 275 "outil.ch"
#line 275 "outil.ch"
    }
    
#line 275 "outil.ch"
#line 276 "outil.ch"
    RemRef(treeSubst);
#line 276 "outil.ch"
#line 277 "outil.ch"
    RemRef(tree);
#line 277 "outil.ch"
#line 278 "outil.ch"
    StoreRef(res);
#line 278 "outil.ch"
#line 279 "outil.ch"
    return res ;
    
#line 279 "outil.ch"
#line 280 "outil.ch"
    
#line 280 "outil.ch"
#line 280 "outil.ch"
}
#line 280 "outil.ch"

#include "squeeze.c"

#if 0
#line 280 "outil.ch"
#line 285 "outil.ch"
int _retVal [50];

#line 285 "outil.ch"
#line 286 "outil.ch"
PPTREE  _storeVal [50], _nextVal ;

#line 286 "outil.ch"
#line 287 "outil.ch"
PPTREE  stackTree [1024];

#line 287 "outil.ch"
#line 288 "outil.ch"
int ptStackTree = 0 ;

#line 288 "outil.ch"
#line 289 "outil.ch"
extern char *tabLabel ;

#line 289 "outil.ch"
#line 290 "outil.ch"
extern STRINGELEM   *listConst ;

#line 290 "outil.ch"
#line 291 "outil.ch"
extern char *includeEnv ;

#line 291 "outil.ch"
#line 292 "outil.ch"
extern int  input, output, coutput, houtput ;

#line 292 "outil.ch"
#line 292 "outil.ch"

#line 292 "outil.ch"
#endif

#line 300 "outil.ch"

#line 300 "outil.ch"
PTREE find ( PTREE paramTree, PTREE tree )
#line 300 "outil.ch"
{
#line 300 "outil.ch"
#line 300 "outil.ch"
    int _nextVal ;
    
#line 300 "outil.ch"
#line 303 "outil.ch"
    {
#line 303 "outil.ch"
#line 303 "outil.ch"
        ItPtree _iterator1 (tree, paramTree) ;
        
#line 303 "outil.ch"
#line 303 "outil.ch"
        PPTREE  _for_elem ;
        
#line 303 "outil.ch"
#line 303 "outil.ch"
        _iterator1.AllSearch(1);
#line 303 "outil.ch"
#line 303 "outil.ch"
        while ( _for_elem = _iterator1++ ) {
#line 303 "outil.ch"
#line 303 "outil.ch"
            {
#line 303 "outil.ch"
#line 304 "outil.ch"
                return for_elem ;
                
#line 304 "outil.ch"
#line 305 "outil.ch"
                
#line 305 "outil.ch"
#line 305 "outil.ch"
            }
            
#line 305 "outil.ch"
#line 305 "outil.ch"
            _iterator1.Current(_for_elem);
#line 305 "outil.ch"
#line 305 "outil.ch"
            continue ;
            
#line 305 "outil.ch"
#line 305 "outil.ch"
        for_continue1 : 
#line 305 "outil.ch"
#line 305 "outil.ch"
            _iterator1.Current(_for_elem);
#line 305 "outil.ch"
#line 305 "outil.ch"
            _iterator1.SkipSon(1);
#line 305 "outil.ch"
#line 305 "outil.ch"
            continue ;
            
#line 305 "outil.ch"
#line 305 "outil.ch"
        for_break1 : 
#line 305 "outil.ch"
#line 305 "outil.ch"
            break ;
            
#line 305 "outil.ch"
#line 305 "outil.ch"
            
#line 305 "outil.ch"
#line 305 "outil.ch"
        }
#line 305 "outil.ch"
#line 305 "outil.ch"
        
#line 305 "outil.ch"
#line 305 "outil.ch"
    }
    
#line 305 "outil.ch"
#line 306 "outil.ch"
    return (PTREE)0 ;
    
#line 306 "outil.ch"
#line 307 "outil.ch"
    
#line 307 "outil.ch"
#line 307 "outil.ch"
}
#line 307 "outil.ch"

#line 312 "outil.ch"

#line 312 "outil.ch"
PTREE metafind ( PTREE paramTree, PTREE tree )
#line 312 "outil.ch"
{
#line 312 "outil.ch"
    register PPTREE _inter ;
#line 312 "outil.ch"

#line 312 "outil.ch"
#line 312 "outil.ch"
    PTREE   _Baum0 ;
#line 312 "outil.ch"
    
#line 312 "outil.ch"
#line 312 "outil.ch"
    int _nextVal ;
    
#line 312 "outil.ch"
#line 315 "outil.ch"
    char    *myString = (char *)Value(paramTree);
    
#line 315 "outil.ch"
#line 317 "outil.ch"
    {
#line 317 "outil.ch"
        PPTREE _ptTree0= (PPTREE) 0,_ptRes0= (PPTREE) 0;
#line 317 "outil.ch"
        _ptRes0 = MakeTree(META, 1);
#line 317 "outil.ch"
        _ptTree0 = MakeString("meta") ;
#line 317 "outil.ch"
        ReplaceTree(_ptRes0, 1, _ptTree0);
#line 317 "outil.ch"
        _Baum0 = _ptRes0;
#line 317 "outil.ch"
    }
#line 317 "outil.ch"
    
#line 317 "outil.ch"
#line 317 "outil.ch"
    {
#line 317 "outil.ch"
#line 317 "outil.ch"
        ItPtree _iterator1 (tree, _Baum0) ;
        
#line 317 "outil.ch"
#line 317 "outil.ch"
        PPTREE  _for_elem ;
        
#line 317 "outil.ch"
#line 317 "outil.ch"
        _iterator1.AllSearch(1);
#line 317 "outil.ch"
#line 317 "outil.ch"
        while ( _for_elem = _iterator1++ ) {
#line 317 "outil.ch"
#line 317 "outil.ch"
            {
#line 317 "outil.ch"
#line 318 "outil.ch"
                if ( NumberTree(for_elem) == META && !strcmp(myString, CacheAddrRead(sontree(sontree(for_elem, 1), 1))) ) {
#line 318 "outil.ch"
#line 319 "outil.ch"
return for_elem ;

#line 319 "outil.ch"
#line 320 "outil.ch"

#line 320 "outil.ch"
#line 320 "outil.ch"
                                                                                                                                      }
#line 320 "outil.ch"
#line 321 "outil.ch"
                
#line 321 "outil.ch"
#line 321 "outil.ch"
            }
            
#line 321 "outil.ch"
#line 321 "outil.ch"
            _iterator1.Current(_for_elem);
#line 321 "outil.ch"
#line 321 "outil.ch"
            continue ;
            
#line 321 "outil.ch"
#line 321 "outil.ch"
        for_continue1 : 
#line 321 "outil.ch"
#line 321 "outil.ch"
            _iterator1.Current(_for_elem);
#line 321 "outil.ch"
#line 321 "outil.ch"
            _iterator1.SkipSon(1);
#line 321 "outil.ch"
#line 321 "outil.ch"
            continue ;
            
#line 321 "outil.ch"
#line 321 "outil.ch"
        for_break1 : 
#line 321 "outil.ch"
#line 321 "outil.ch"
            break ;
            
#line 321 "outil.ch"
#line 321 "outil.ch"
            
#line 321 "outil.ch"
#line 321 "outil.ch"
        }
#line 321 "outil.ch"
#line 321 "outil.ch"
        
#line 321 "outil.ch"
#line 321 "outil.ch"
    }
    
#line 321 "outil.ch"
#line 322 "outil.ch"
    return (PPTREE)0 ;
    
#line 322 "outil.ch"
#line 323 "outil.ch"
    
#line 323 "outil.ch"
#line 323 "outil.ch"
}
#line 323 "outil.ch"

#line 327 "outil.ch"

#line 327 "outil.ch"
void replace ( PTREE paramTree, PTREE tree, PTREE new_value )
#line 327 "outil.ch"
{
#line 327 "outil.ch"
#line 327 "outil.ch"
    int _nextVal ;
    
#line 327 "outil.ch"
#line 330 "outil.ch"
    int firstReplace = 1 ;
    
#line 330 "outil.ch"
#line 332 "outil.ch"
    {
#line 332 "outil.ch"
#line 332 "outil.ch"
        ItPtree _iterator1 (tree, paramTree) ;
        
#line 332 "outil.ch"
#line 332 "outil.ch"
        PPTREE  _for_elem ;
        
#line 332 "outil.ch"
#line 332 "outil.ch"
        _iterator1.AllSearch(1);
#line 332 "outil.ch"
#line 332 "outil.ch"
        while ( _for_elem = _iterator1++ ) {
#line 332 "outil.ch"
#line 332 "outil.ch"
            {
#line 332 "outil.ch"
#line 333 "outil.ch"
                if ( FatherTree(for_elem) ) {
#line 333 "outil.ch"
#line 334 "outil.ch"
                                                PTREE   replace_tree ;
#line 334 "outil.ch"
                                                
#line 334 "outil.ch"
#line 335 "outil.ch"
                                                if ( firstReplace ) {
#line 335 "outil.ch"
#line 336 "outil.ch"
                                                                        firstReplace = 0 ;
#line 336 "outil.ch"
#line 337 "outil.ch"
                                                                        (replace_tree=new_value);
#line 337 "outil.ch"
                                                                        
#line 337 "outil.ch"
#line 338 "outil.ch"
                                                                        
#line 338 "outil.ch"
#line 338 "outil.ch"
                                                                     } else 
#line 338 "outil.ch"
#line 339 "outil.ch"
                                                    (replace_tree=CopyTree(new_value));
#line 339 "outil.ch"
                                                    
#line 339 "outil.ch"
                                                
#line 339 "outil.ch"
#line 340 "outil.ch"
                                                {
#line 340 "outil.ch"
                                                    PPTREE _ptTree0= (PPTREE) 0,_sonTree0= (PPTREE) 0 ;
#line 340 "outil.ch"
                                                    if (_ptTree0= fathertree(for_elem)) {
#line 340 "outil.ch"
                                                        int rank = ranktree(for_elem);
#line 340 "outil.ch"
                                                        ReplaceTree(_ptTree0,rank,replace_tree);
#line 340 "outil.ch"
                                                    }
#line 340 "outil.ch"
                                                    for_elem = replace_tree;
#line 340 "outil.ch"
                                                }
#line 340 "outil.ch"
                                                
#line 340 "outil.ch"
#line 341 "outil.ch"
                                                goto for_continue1 ;
                                                
#line 341 "outil.ch"
#line 342 "outil.ch"
                                                
#line 342 "outil.ch"
#line 342 "outil.ch"
                                             }
#line 342 "outil.ch"
#line 343 "outil.ch"
                
#line 343 "outil.ch"
#line 343 "outil.ch"
            }
            
#line 343 "outil.ch"
#line 343 "outil.ch"
            _iterator1.Current(_for_elem);
#line 343 "outil.ch"
#line 343 "outil.ch"
            continue ;
            
#line 343 "outil.ch"
#line 343 "outil.ch"
        for_continue1 : 
#line 343 "outil.ch"
#line 343 "outil.ch"
            _iterator1.Current(_for_elem);
#line 343 "outil.ch"
#line 343 "outil.ch"
            _iterator1.SkipSon(1);
#line 343 "outil.ch"
#line 343 "outil.ch"
            continue ;
            
#line 343 "outil.ch"
#line 343 "outil.ch"
        for_break1 : 
#line 343 "outil.ch"
#line 343 "outil.ch"
            break ;
            
#line 343 "outil.ch"
#line 343 "outil.ch"
            
#line 343 "outil.ch"
#line 343 "outil.ch"
        }
#line 343 "outil.ch"
#line 343 "outil.ch"
        
#line 343 "outil.ch"
#line 343 "outil.ch"
    }
    
#line 343 "outil.ch"
#line 344 "outil.ch"
    
#line 344 "outil.ch"
#line 344 "outil.ch"
}
#line 344 "outil.ch"

static int  lineNumberRef = 1 ;
static int  dumpMoreMode = 0 ;
static int  pageNumberRef ;
static int  pageNumber ;

#line 354 "outil.ch"

#line 354 "outil.ch"
void DumpNewLine ( int i )
#line 354 "outil.ch"
{
#line 354 "outil.ch"
#line 354 "outil.ch"
    int _nextVal ;
    
#line 354 "outil.ch"
#line 356 "outil.ch"
    char    c [3];
    
#line 356 "outil.ch"
#line 358 "outil.ch"
    if ( lineNumberRef <= 30000 ) 
#line 358 "outil.ch"
#line 359 "outil.ch"
        LNewLine(i);
#line 359 "outil.ch"
#line 360 "outil.ch"
    if ( dumpMoreMode && currLine - lineNumberRef >= 24 ) {
#line 360 "outil.ch"
#line 361 "outil.ch"
                                                                lineNumberRef = currLine ;
#line 361 "outil.ch"
#line 362 "outil.ch"
                                                                pageNumber++ ;
#line 362 "outil.ch"
#line 363 "outil.ch"
                                                                _read(0, &c, 1);
#line 363 "outil.ch"
#line 364 "outil.ch"
                                                                if ( pageNumber >= pageNumberRef ) 
#line 364 "outil.ch"
#line 365 "outil.ch"
                                                                    lineNumberRef = 30000 ;
#line 365 "outil.ch"
#line 366 "outil.ch"
                                                                
#line 366 "outil.ch"
#line 366 "outil.ch"
                                                              }
#line 366 "outil.ch"
#line 367 "outil.ch"
    
#line 367 "outil.ch"
#line 367 "outil.ch"
}
#line 367 "outil.ch"

#define LNewLine DumpNewLine

#line 371 "outil.ch"

#line 371 "outil.ch"
void CLDumpTree ( PPTREE treeParam )
#line 371 "outil.ch"
{
#line 371 "outil.ch"
#line 371 "outil.ch"
    int _nextVal ;
    
#line 371 "outil.ch"
#line 373 "outil.ch"
    PTREE   nTree = (PTREE)0 ;
#line 373 "outil.ch"
    
#line 373 "outil.ch"
#line 373 "outil.ch"
    (nTree=copytree(treeParam));
#line 373 "outil.ch"
    
#line 373 "outil.ch"
#line 375 "outil.ch"
    DestroyPosCommentRec(nTree);
#line 375 "outil.ch"
#line 376 "outil.ch"
    int oldOutput = output ;
    
#line 376 "outil.ch"
#line 377 "outil.ch"
    Flush();
#line 377 "outil.ch"
#line 378 "outil.ch"
    output = 1 ;
#line 378 "outil.ch"
#line 379 "outil.ch"
    LDumpTree(nTree);
#line 379 "outil.ch"
#line 380 "outil.ch"
    output = oldOutput ;
#line 380 "outil.ch"
#line 381 "outil.ch"
    
#line 381 "outil.ch"
#line 381 "outil.ch"
}
#line 381 "outil.ch"

#line 383 "outil.ch"

#line 383 "outil.ch"
void LDumpTree ( PPTREE treeParam )
#line 383 "outil.ch"
{
#line 383 "outil.ch"
#line 383 "outil.ch"
    int _nextVal ;
    
#line 383 "outil.ch"
#line 385 "outil.ch"
    AddRef(treeParam);
#line 385 "outil.ch"
#line 386 "outil.ch"
    DumpTree(treeParam);
#line 386 "outil.ch"
#line 387 "outil.ch"
    NewLine();
#line 387 "outil.ch"
#line 388 "outil.ch"
    
#line 388 "outil.ch"
#line 388 "outil.ch"
}
#line 388 "outil.ch"

#line 390 "outil.ch"

#line 390 "outil.ch"
void DumpTree ( PPTREE treeParam )
#line 390 "outil.ch"
{
#line 390 "outil.ch"
    register PPTREE _inter ;
#line 390 "outil.ch"

#line 390 "outil.ch"
#line 390 "outil.ch"
    int _nextVal ;
    
#line 390 "outil.ch"
#line 393 "outil.ch"
    int i, test ;
    
#line 393 "outil.ch"
#line 394 "outil.ch"
    PTREE   name1, son ;
#line 394 "outil.ch"
    
#line 394 "outil.ch"
#line 395 "outil.ch"
    PTREE   comm, cont ;
#line 395 "outil.ch"
    
#line 395 "outil.ch"
#line 396 "outil.ch"
    int oldIsVirtMod = isVirtMod ;
    
#line 396 "outil.ch"
#line 398 "outil.ch"
    isVirtMod = 0 ;
#line 398 "outil.ch"
#line 400 "outil.ch"
    PTREE   tree (treeParam) ;
#line 400 "outil.ch"
    
#line 400 "outil.ch"
#line 403 "outil.ch"
    if ( lineNumberRef >= 30000 ) 
#line 403 "outil.ch"
#line 404 "outil.ch"
        return ;
    
#line 404 "outil.ch"
#line 407 "outil.ch"
    if ( (!tree) ) {
#line 407 "outil.ch"
#line 408 "outil.ch"
                        PrintString("[ NIL ] ");
#line 408 "outil.ch"
#line 409 "outil.ch"
                        return ;
                        
#line 409 "outil.ch"
#line 410 "outil.ch"
                        
#line 410 "outil.ch"
#line 410 "outil.ch"
                     }
#line 410 "outil.ch"
#line 413 "outil.ch"
    (comm=(PTREE)0);
#line 413 "outil.ch"
    
#line 413 "outil.ch"
#line 414 "outil.ch"
    while ( (PPTREE)((comm=NextComm(tree, PRE, comm))) ) {
#line 414 "outil.ch"
#line 415 "outil.ch"
                                                                    (cont=(PTREE)0);
#line 415 "outil.ch"
                                                                    
#line 415 "outil.ch"
#line 416 "outil.ch"
                                                                    PrintString("PRE -> ");
#line 416 "outil.ch"
#line 416 "outil.ch"
                                                                    LNewLine(1);
#line 416 "outil.ch"
                                                                    
#line 416 "outil.ch"
#line 417 "outil.ch"
                                                                    Tab();
#line 417 "outil.ch"
                                                                    
#line 417 "outil.ch"
#line 418 "outil.ch"
                                                                    Mark();
#line 418 "outil.ch"
                                                                    while ( (PPTREE)((cont=NextCommContent(comm, cont))) ) {
#line 418 "outil.ch"
#line 419 "outil.ch"
PrintString(BrainyValue(cont));
#line 419 "outil.ch"
#line 419 "outil.ch"
LNewLine(1);
#line 419 "outil.ch"

#line 419 "outil.ch"
#line 420 "outil.ch"

#line 420 "outil.ch"
#line 420 "outil.ch"
                                                                                                                                  }
#line 420 "outil.ch"
                                                                    UnMark();
#line 420 "outil.ch"
                                                                    
#line 420 "outil.ch"
#line 422 "outil.ch"
                                                                    
#line 422 "outil.ch"
#line 422 "outil.ch"
                                                                 }
#line 422 "outil.ch"
#line 423 "outil.ch"
    switch ( NumberTree(tree) ) {
#line 423 "outil.ch"
#line 425 "outil.ch"
        case TERM_TREE : 
#line 425 "outil.ch"
#line 425 "outil.ch"
        _Case5 : 
#line 425 "outil.ch"
#line 425 "outil.ch"
            ;
#line 425 "outil.ch"
#line 425 "outil.ch"
            {
#line 425 "outil.ch"
#line 426 "outil.ch"
                int x, y, dx, dy, x0, y0 ;
                
#line 426 "outil.ch"
#line 427 "outil.ch"
                char    myString [30];
                
#line 427 "outil.ch"
#line 428 "outil.ch"
                if ( GetCoord(tree, &x, &y, &dx, &dy) ) {
#line 428 "outil.ch"
#line 428 "outil.ch"
                                                                    PTREE   _Baum0 ;
#line 428 "outil.ch"
                                                                    
#line 428 "outil.ch"
#line 429 "outil.ch"
                                                                    _Baum0 = (PPTREE) 0 ;
#line 429 "outil.ch"
                                                                    
#line 429 "outil.ch"
#line 429 "outil.ch"
                                                                    GetCoordAbs(tree, _Baum0, &x0, &y0);
#line 429 "outil.ch"
#line 430 "outil.ch"
                                                                    sprintf(myString, "%d %d %d %d %d %d", y0, x0, y, x, dy, dx);
#line 430 "outil.ch"
#line 431 "outil.ch"
                                                                    PrintString("{");
#line 431 "outil.ch"
#line 431 "outil.ch"
                                                                    WriteString(myString);
#line 431 "outil.ch"
#line 431 "outil.ch"
                                                                    PrintString("}");
#line 431 "outil.ch"
#line 431 "outil.ch"
                                                                    LNewLine(1);
#line 431 "outil.ch"
                                                                    
#line 431 "outil.ch"
#line 432 "outil.ch"
                                                                    
#line 432 "outil.ch"
#line 432 "outil.ch"
                                                                  }
#line 432 "outil.ch"
#line 433 "outil.ch"
                
#line 433 "outil.ch"
#line 433 "outil.ch"
            }
            
#line 433 "outil.ch"
#line 434 "outil.ch"
            PrintString("\"");
#line 434 "outil.ch"
#line 434 "outil.ch"
            DumpBrainyValue(tree);
#line 434 "outil.ch"
            
#line 434 "outil.ch"
#line 434 "outil.ch"
            PrintString("\"");
#line 434 "outil.ch"
#line 435 "outil.ch"
            break ;
            
#line 435 "outil.ch"
#line 437 "outil.ch"
        case CLASS_TREE : 
#line 437 "outil.ch"
#line 437 "outil.ch"
        _Case6 : 
#line 437 "outil.ch"
#line 437 "outil.ch"
            ;
#line 437 "outil.ch"
#line 437 "outil.ch"
            {
#line 437 "outil.ch"
#line 438 "outil.ch"
                int x, y, dx, dy, x0, y0 ;
                
#line 438 "outil.ch"
#line 439 "outil.ch"
                char    myString [30];
                
#line 439 "outil.ch"
#line 440 "outil.ch"
                if ( GetCoord(tree, &x, &y, &dx, &dy) ) {
#line 440 "outil.ch"
#line 440 "outil.ch"
                                                                    PTREE   _Baum1 ;
#line 440 "outil.ch"
                                                                    
#line 440 "outil.ch"
#line 441 "outil.ch"
                                                                    _Baum1 = (PPTREE) 0 ;
#line 441 "outil.ch"
                                                                    
#line 441 "outil.ch"
#line 441 "outil.ch"
                                                                    GetCoordAbs(tree, _Baum1, &x0, &y0);
#line 441 "outil.ch"
#line 442 "outil.ch"
                                                                    sprintf(myString, "%d %d %d %d %d %d", y0, x0, y, x, dy, dx);
#line 442 "outil.ch"
#line 443 "outil.ch"
                                                                    PrintString("{");
#line 443 "outil.ch"
#line 443 "outil.ch"
                                                                    WriteString(myString);
#line 443 "outil.ch"
#line 443 "outil.ch"
                                                                    PrintString("}");
#line 443 "outil.ch"
#line 443 "outil.ch"
                                                                    LNewLine(1);
#line 443 "outil.ch"
                                                                    
#line 443 "outil.ch"
#line 444 "outil.ch"
                                                                    
#line 444 "outil.ch"
#line 444 "outil.ch"
                                                                  }
#line 444 "outil.ch"
#line 445 "outil.ch"
                
#line 445 "outil.ch"
#line 445 "outil.ch"
            }
            
#line 445 "outil.ch"
#line 446 "outil.ch"
            PrintString("[");
#line 446 "outil.ch"
#line 446 "outil.ch"
            WriteString(NameConst(APPLY_CLASS(tree, TreeClass, Type())));
#line 446 "outil.ch"
#line 446 "outil.ch"
            WriteString(" <> ");
#line 446 "outil.ch"
#line 446 "outil.ch"
            PrintString("\"");
#line 446 "outil.ch"
#line 446 "outil.ch"
            WriteString(APPLY_CLASS(tree, TreeClass, Value()));
#line 446 "outil.ch"
#line 446 "outil.ch"
            PrintString("\"]");
#line 446 "outil.ch"
#line 447 "outil.ch"
            break ;
            
#line 447 "outil.ch"
#line 449 "outil.ch"
        case LIST : 
#line 449 "outil.ch"
#line 449 "outil.ch"
        _Case7 : 
#line 449 "outil.ch"
#line 449 "outil.ch"
            ;
#line 449 "outil.ch"
#line 449 "outil.ch"
            {
#line 449 "outil.ch"
#line 450 "outil.ch"
                int x, y, dx, dy, x0, y0 ;
                
#line 450 "outil.ch"
#line 451 "outil.ch"
                char    myString [30];
                
#line 451 "outil.ch"
#line 452 "outil.ch"
                if ( GetCoord(tree, &x, &y, &dx, &dy) ) {
#line 452 "outil.ch"
#line 452 "outil.ch"
                                                                    PTREE   _Baum2 ;
#line 452 "outil.ch"
                                                                    
#line 452 "outil.ch"
#line 453 "outil.ch"
                                                                    _Baum2 = (PPTREE) 0 ;
#line 453 "outil.ch"
                                                                    
#line 453 "outil.ch"
#line 453 "outil.ch"
                                                                    GetCoordAbs(tree, _Baum2, &x0, &y0);
#line 453 "outil.ch"
#line 454 "outil.ch"
                                                                    sprintf(myString, "%d %d %d %d %d %d", y0, x0, y, x, dy, dx);
#line 454 "outil.ch"
#line 455 "outil.ch"
                                                                    PrintString("{");
#line 455 "outil.ch"
#line 455 "outil.ch"
                                                                    WriteString(myString);
#line 455 "outil.ch"
#line 455 "outil.ch"
                                                                    PrintString("}");
#line 455 "outil.ch"
#line 455 "outil.ch"
                                                                    LNewLine(1);
#line 455 "outil.ch"
                                                                    
#line 455 "outil.ch"
#line 456 "outil.ch"
                                                                    
#line 456 "outil.ch"
#line 456 "outil.ch"
                                                                  }
#line 456 "outil.ch"
#line 457 "outil.ch"
                
#line 457 "outil.ch"
#line 457 "outil.ch"
            }
            
#line 457 "outil.ch"
#line 458 "outil.ch"
            PrintString("[ LIST ");
#line 458 "outil.ch"
#line 458 "outil.ch"
            LNewLine(1);
#line 458 "outil.ch"
            
#line 458 "outil.ch"
#line 459 "outil.ch"
            Tab();
#line 459 "outil.ch"
            
#line 459 "outil.ch"
#line 460 "outil.ch"
            Mark();
#line 460 "outil.ch"
            while ( !((!tree)) && ((_inter = (PPTREE)tree,1) && 
#line 460 "outil.ch"
                                        (NumberTree(_inter) == LIST) &&
#line 460 "outil.ch"
                                        1) && lineNumberRef < 30000 ) {
#line 460 "outil.ch"
#line 461 "outil.ch"
                                                                            (son=(tree?tree.Nextl():(PPTREE)0));
#line 461 "outil.ch"
                                                                            
#line 461 "outil.ch"
#line 462 "outil.ch"
                                                                            DumpTree(son);
#line 462 "outil.ch"
#line 463 "outil.ch"
                                                                            LNewLine(1);
#line 463 "outil.ch"
                                                                            
#line 463 "outil.ch"
#line 464 "outil.ch"
                                                                            
#line 464 "outil.ch"
#line 464 "outil.ch"
                                                                        }
#line 464 "outil.ch"
            if ( tree && !(((_inter = (PPTREE)tree,1) && 
#line 464 "outil.ch"
                                (NumberTree(_inter) == LIST) &&
#line 464 "outil.ch"
                                1)) ) {
#line 464 "outil.ch"
#line 466 "outil.ch"
                                        PrintString("$");
#line 466 "outil.ch"
#line 467 "outil.ch"
                                        DumpTree(tree);
#line 467 "outil.ch"
#line 468 "outil.ch"
                                        LNewLine(1);
#line 468 "outil.ch"
                                        
#line 468 "outil.ch"
#line 469 "outil.ch"
                                        
#line 469 "outil.ch"
#line 469 "outil.ch"
                                      }
#line 469 "outil.ch"
            UnMark();
#line 469 "outil.ch"
            
#line 469 "outil.ch"
#line 471 "outil.ch"
            PrintString("]");
#line 471 "outil.ch"
#line 472 "outil.ch"
            break ;
            
#line 472 "outil.ch"
#line 474 "outil.ch"
        case IN_LANGUAGE : 
#line 474 "outil.ch"
#line 474 "outil.ch"
        _Case8 : 
#line 474 "outil.ch"
#line 474 "outil.ch"
            ;
#line 474 "outil.ch"
#line 474 "outil.ch"
            {
#line 474 "outil.ch"
#line 475 "outil.ch"
                ((_inter = (PPTREE)tree,1) && 
#line 475 "outil.ch"
                    ((name1=SonTree(_inter,1)),1) &&
#line 475 "outil.ch"
                    ((tree=SonTree(_inter,2)),1) &&
#line 475 "outil.ch"
                    1);
#line 475 "outil.ch"
                ;
#line 475 "outil.ch"
#line 476 "outil.ch"
                {
#line 476 "outil.ch"
                    PLANG _oldLanguage = pCurrentLanguage;
#line 476 "outil.ch"
                    SwitchLang("Value");
#line 476 "outil.ch"
#line 477 "outil.ch"
                    {
#line 477 "outil.ch"
#line 477 "outil.ch"
                        {
#line 477 "outil.ch"
#line 478 "outil.ch"
                            int x, y, dx, dy, x0, y0 ;
                            
#line 478 "outil.ch"
#line 479 "outil.ch"
                            char    myString [30];
                            
#line 479 "outil.ch"
#line 480 "outil.ch"
                            if ( GetCoord(tree, &x, &y, &dx, &dy) ) {
#line 480 "outil.ch"
#line 480 "outil.ch"
                                                                                PTREE   _Baum3 ;
#line 480 "outil.ch"
                                                                                
#line 480 "outil.ch"
#line 481 "outil.ch"
                                                                                _Baum3 = (PPTREE) 0 ;
#line 481 "outil.ch"
                                                                                
#line 481 "outil.ch"
#line 481 "outil.ch"
                                                                                GetCoordAbs(tree, _Baum3, &x0, &y0);
#line 481 "outil.ch"
#line 482 "outil.ch"
                                                                                sprintf(myString, "%d %d %d %d %d %d", y0, x0, y, x, dy, dx);
#line 482 "outil.ch"
#line 483 "outil.ch"
                                                                                PrintString("{");
#line 483 "outil.ch"
#line 483 "outil.ch"
                                                                                WriteString(myString);
#line 483 "outil.ch"
#line 483 "outil.ch"
                                                                                PrintString("}");
#line 483 "outil.ch"
#line 483 "outil.ch"
                                                                                LNewLine(1);
#line 483 "outil.ch"
                                                                                
#line 483 "outil.ch"
#line 484 "outil.ch"
                                                                                
#line 484 "outil.ch"
#line 484 "outil.ch"
                                                                              }
#line 484 "outil.ch"
#line 485 "outil.ch"
                            
#line 485 "outil.ch"
#line 485 "outil.ch"
                        }
                        
#line 485 "outil.ch"
#line 486 "outil.ch"
                        PrintString("[ IN_LANGUAGE");
#line 486 "outil.ch"
#line 486 "outil.ch"
                        LNewLine(1);
#line 486 "outil.ch"
                        
#line 486 "outil.ch"
#line 487 "outil.ch"
                        Tab();
#line 487 "outil.ch"
                        
#line 487 "outil.ch"
#line 488 "outil.ch"
                        Mark();
#line 488 "outil.ch"
                        PrintString("[ \"");
#line 488 "outil.ch"
                        DumpBrainyValue(name1);
#line 488 "outil.ch"
                        
#line 488 "outil.ch"
                        PrintString("\" ]");
#line 488 "outil.ch"
                        LNewLine(1);
#line 488 "outil.ch"
                        
#line 488 "outil.ch"
                        DumpTree(tree);
#line 488 "outil.ch"
                        LNewLine(1);
#line 488 "outil.ch"
                        
#line 488 "outil.ch"
                        UnMark();
#line 488 "outil.ch"
                        
#line 488 "outil.ch"
#line 492 "outil.ch"
                        PrintString("]");
#line 492 "outil.ch"
#line 493 "outil.ch"
                        
#line 493 "outil.ch"
#line 493 "outil.ch"
                    };
#line 493 "outil.ch"
                    SwitchLangPoint(_oldLanguage);
#line 493 "outil.ch"
                }
#line 493 "outil.ch"
                
#line 493 "outil.ch"
#line 494 "outil.ch"
                
#line 494 "outil.ch"
#line 494 "outil.ch"
            }
            
#line 494 "outil.ch"
#line 495 "outil.ch"
            break ;
            
#line 495 "outil.ch"
#line 497 "outil.ch"
        default : 
#line 497 "outil.ch"
#line 497 "outil.ch"
        _Case9 : 
#line 497 "outil.ch"
#line 497 "outil.ch"
            ;
#line 497 "outil.ch"
#line 497 "outil.ch"
            {
#line 497 "outil.ch"
#line 498 "outil.ch"
                int x, y, dx, dy, x0, y0 ;
                
#line 498 "outil.ch"
#line 499 "outil.ch"
                char    myString [30];
                
#line 499 "outil.ch"
#line 500 "outil.ch"
                if ( GetCoord(tree, &x, &y, &dx, &dy) ) {
#line 500 "outil.ch"
#line 500 "outil.ch"
                                                                    PTREE   _Baum4 ;
#line 500 "outil.ch"
                                                                    
#line 500 "outil.ch"
#line 501 "outil.ch"
                                                                    _Baum4 = (PPTREE) 0 ;
#line 501 "outil.ch"
                                                                    
#line 501 "outil.ch"
#line 501 "outil.ch"
                                                                    GetCoordAbs(tree, _Baum4, &x0, &y0);
#line 501 "outil.ch"
#line 502 "outil.ch"
                                                                    sprintf(myString, "%d %d %d %d %d %d", y0, x0, y, x, dy, dx);
#line 502 "outil.ch"
#line 503 "outil.ch"
                                                                    PrintString("{");
#line 503 "outil.ch"
#line 503 "outil.ch"
                                                                    WriteString(myString);
#line 503 "outil.ch"
#line 503 "outil.ch"
                                                                    PrintString("}");
#line 503 "outil.ch"
#line 503 "outil.ch"
                                                                    LNewLine(1);
#line 503 "outil.ch"
                                                                    
#line 503 "outil.ch"
#line 504 "outil.ch"
                                                                    
#line 504 "outil.ch"
#line 504 "outil.ch"
                                                                  }
#line 504 "outil.ch"
#line 505 "outil.ch"
                
#line 505 "outil.ch"
#line 505 "outil.ch"
            }
            
#line 505 "outil.ch"
#line 506 "outil.ch"
            PrintString("[ ");
#line 506 "outil.ch"
#line 506 "outil.ch"
            WriteString(NameConst(NumberTree(tree)));
#line 506 "outil.ch"
#line 507 "outil.ch"
            if ( (test = treearity(tree) > 1 || treearity(tree) == 1 && treearity(sontree(tree, 1)) > 1) ) {
#line 507 "outil.ch"
#line 508 "outil.ch"
LNewLine(1);
#line 508 "outil.ch"

#line 508 "outil.ch"
#line 509 "outil.ch"
Tab();
#line 509 "outil.ch"

#line 509 "outil.ch"
#line 510 "outil.ch"

#line 510 "outil.ch"
#line 510 "outil.ch"
                                                                                                                        } else 
#line 510 "outil.ch"
#line 511 "outil.ch"
                PrintString(" ");
#line 511 "outil.ch"
            
#line 511 "outil.ch"
#line 513 "outil.ch"
            Mark();
#line 513 "outil.ch"
#line 513 "outil.ch"
            for ( i = 1 ; i <= treearity(tree) && lineNumberRef < 30000 ; i++ ) {
#line 513 "outil.ch"
#line 514 "outil.ch"
                                                                                            DumpTree(sontree(tree, i));
#line 514 "outil.ch"
#line 515 "outil.ch"
                                                                                            if ( test ) 
#line 515 "outil.ch"
#line 516 "outil.ch"
                                                                                                LNewLine(1);
#line 516 "outil.ch"
                                                                                            
#line 516 "outil.ch"
#line 517 "outil.ch"
                                                                                            
#line 517 "outil.ch"
#line 517 "outil.ch"
                                                                                        }
#line 517 "outil.ch"
            
#line 517 "outil.ch"
            UnMark();
#line 517 "outil.ch"
            
#line 517 "outil.ch"
#line 519 "outil.ch"
            PrintString("]");
#line 519 "outil.ch"
    }
#line 519 "outil.ch"
    
#line 519 "outil.ch"
#line 523 "outil.ch"
    (comm=(PTREE)0);
#line 523 "outil.ch"
    
#line 523 "outil.ch"
#line 524 "outil.ch"
    while ( ((comm=NextComm(tree, POST, comm))) ) {
#line 524 "outil.ch"
#line 525 "outil.ch"
                                                            (cont=(PTREE)0);
#line 525 "outil.ch"
                                                            
#line 525 "outil.ch"
#line 526 "outil.ch"
                                                            LNewLine(1);
#line 526 "outil.ch"
                                                            
#line 526 "outil.ch"
#line 527 "outil.ch"
                                                            if ( PrePost() ) 
#line 527 "outil.ch"
#line 528 "outil.ch"
                                                                PrintString("PREPOST -> ");
#line 528 "outil.ch"
                                                            else 
#line 528 "outil.ch"
#line 530 "outil.ch"
                                                                PrintString("POST -> ");
#line 530 "outil.ch"
                                                            
#line 530 "outil.ch"
#line 531 "outil.ch"
                                                            LNewLine(1);
#line 531 "outil.ch"
                                                            
#line 531 "outil.ch"
#line 532 "outil.ch"
                                                            Tab();
#line 532 "outil.ch"
                                                            
#line 532 "outil.ch"
#line 533 "outil.ch"
                                                            Mark();
#line 533 "outil.ch"
                                                            while ( ((cont=NextCommContent(comm, cont))) ) {
#line 533 "outil.ch"
#line 534 "outil.ch"
                                                                                                                    PrintString(BrainyValue(cont));
#line 534 "outil.ch"
#line 534 "outil.ch"
                                                                                                                    LNewLine(1);
#line 534 "outil.ch"
                                                                                                                    
#line 534 "outil.ch"
#line 535 "outil.ch"
                                                                                                                    
#line 535 "outil.ch"
#line 535 "outil.ch"
                                                                                                                }
#line 535 "outil.ch"
                                                            UnMark();
#line 535 "outil.ch"
                                                            
#line 535 "outil.ch"
#line 537 "outil.ch"
                                                            
#line 537 "outil.ch"
#line 537 "outil.ch"
                                                        }
#line 537 "outil.ch"
#line 538 "outil.ch"
    isVirtMod = oldIsVirtMod ;
#line 538 "outil.ch"
#line 539 "outil.ch"
    
#line 539 "outil.ch"
#line 539 "outil.ch"
}
#line 539 "outil.ch"

#line 541 "outil.ch"

#line 541 "outil.ch"
void MDumpTree ( PPTREE tree, int pageNum )
#line 541 "outil.ch"
{
#line 541 "outil.ch"
#line 541 "outil.ch"
    int _nextVal ;
    
#line 541 "outil.ch"
#line 544 "outil.ch"
    dumpMoreMode = 1 ;
#line 544 "outil.ch"
#line 545 "outil.ch"
    lineNumberRef = currLine ;
#line 545 "outil.ch"
#line 546 "outil.ch"
    pageNumber = 0 ;
#line 546 "outil.ch"
#line 547 "outil.ch"
    pageNumberRef = pageNum ;
#line 547 "outil.ch"
#line 548 "outil.ch"
    DumpTree(tree);
#line 548 "outil.ch"
#line 549 "outil.ch"
    dumpMoreMode = 0 ;
#line 549 "outil.ch"
#line 550 "outil.ch"
    lineNumberRef = 0 ;
#line 550 "outil.ch"
#line 551 "outil.ch"
    
#line 551 "outil.ch"
#line 551 "outil.ch"
}
#line 551 "outil.ch"

#line 553 "outil.ch"

#line 553 "outil.ch"
void DumpNode ( PPTREE tree )
#line 553 "outil.ch"
{
#line 553 "outil.ch"
#line 553 "outil.ch"
    int _nextVal ;
    
#line 553 "outil.ch"
#line 555 "outil.ch"
    PrintString("[ ");
#line 555 "outil.ch"
#line 555 "outil.ch"
    WriteString(NameConst(NumberTree(tree)));
#line 555 "outil.ch"
#line 555 "outil.ch"
    PrintString("]");
#line 555 "outil.ch"
#line 555 "outil.ch"
    LNewLine(1);
#line 555 "outil.ch"
    
#line 555 "outil.ch"
#line 556 "outil.ch"
    
#line 556 "outil.ch"
#line 556 "outil.ch"
}
#line 556 "outil.ch"

#undef LNewLine

#define INT int

#if !defined(VARARGS_2)
#line 556 "outil.ch"
#line 566 "outil.ch"
#line 566 "outil.ch"

#line 566 "outil.ch"
void TheConstructor ( PPTREE(&stackTree)[1024], int &ptStackTree, int va_alist, ... )
#line 566 "outil.ch"
{
#line 566 "outil.ch"
#line 566 "outil.ch"
    int _nextVal ;
    
#line 566 "outil.ch"
#line 568 "outil.ch"
    register int    arity ;
    
#line 568 "outil.ch"
#line 569 "outil.ch"
    int NodeType ;
    
#line 569 "outil.ch"
#line 570 "outil.ch"
    MY_TREE ptTree ;
    
#line 570 "outil.ch"
#line 571 "outil.ch"
    va_list arg_marker ;
    
#line 571 "outil.ch"
#line 573 "outil.ch"
    va_start(arg_marker);
#line 573 "outil.ch"
#line 574 "outil.ch"
    NodeType = (int)va_arg(arg_marker,INT);
#line 574 "outil.ch"
#line 575 "outil.ch"
    while ( NodeType != -3 ) {
#line 575 "outil.ch"
#line 576 "outil.ch"
                                    switch ( NodeType ) {
#line 576 "outil.ch"
#line 577 "outil.ch"
                                        case -2 : 
#line 577 "outil.ch"
#line 578 "outil.ch"
                                            PushTree((PPTREE)va_arg(arg_marker,PPTREE));
#line 578 "outil.ch"
#line 579 "outil.ch"
                                            break ;
                                            
#line 579 "outil.ch"
#line 580 "outil.ch"
                                        case -4 : 
#line 580 "outil.ch"
#line 581 "outil.ch"
                                            PushTree((PPTREE)0);
#line 581 "outil.ch"
#line 582 "outil.ch"
                                            break ;
                                            
#line 582 "outil.ch"
#line 584 "outil.ch"
                                        default : 
#line 584 "outil.ch"
#line 584 "outil.ch"
                                            ptTree = MakeTree(NodeType, arity = (int)va_arg(arg_marker,INT));
#line 584 "outil.ch"
#line 585 "outil.ch"
#line 585 "outil.ch"
                                            for (; arity ; arity-- ) 
#line 585 "outil.ch"
#line 586 "outil.ch"
                                                ReplaceTree(ptTree, arity, PopTree);
#line 586 "outil.ch"
                                            
#line 586 "outil.ch"
#line 587 "outil.ch"
                                            PushTree(ptTree);
#line 587 "outil.ch"
#line 588 "outil.ch"
                                            break ;
                                            
#line 588 "outil.ch"
                                    }
#line 588 "outil.ch"
                                    
#line 588 "outil.ch"
#line 590 "outil.ch"
                                    NodeType = (int)va_arg(arg_marker,INT);
#line 590 "outil.ch"
#line 591 "outil.ch"
                                    
#line 591 "outil.ch"
#line 591 "outil.ch"
                                }
#line 591 "outil.ch"
#line 592 "outil.ch"
    
#line 592 "outil.ch"
#line 592 "outil.ch"
}
#line 592 "outil.ch"


#line 592 "outil.ch"
#line 594 "outil.ch"
#if 0
#line 594 "outil.ch"
#line 595 "outil.ch"
#line 595 "outil.ch"

#line 595 "outil.ch"
void TheConstructor ( int va_alist, ... )
#line 595 "outil.ch"
{
#line 595 "outil.ch"
#line 595 "outil.ch"
    int _nextVal ;
    
#line 595 "outil.ch"
#line 597 "outil.ch"
    register int    arity ;
    
#line 597 "outil.ch"
#line 598 "outil.ch"
    int NodeType ;
    
#line 598 "outil.ch"
#line 599 "outil.ch"
    MY_TREE ptTree ;
    
#line 599 "outil.ch"
#line 600 "outil.ch"
    va_list arg_marker ;
    
#line 600 "outil.ch"
#line 602 "outil.ch"
    va_start(arg_marker);
#line 602 "outil.ch"
#line 603 "outil.ch"
    NodeType = (int)va_arg(arg_marker,INT);
#line 603 "outil.ch"
#line 604 "outil.ch"
    while ( NodeType != -3 ) {
#line 604 "outil.ch"
#line 605 "outil.ch"
                                    switch ( NodeType ) {
#line 605 "outil.ch"
#line 606 "outil.ch"
                                        case -2 : 
#line 606 "outil.ch"
#line 607 "outil.ch"
                                            PushTree((PPTREE)va_arg(arg_marker,PPTREE));
#line 607 "outil.ch"
#line 608 "outil.ch"
                                            break ;
                                            
#line 608 "outil.ch"
#line 609 "outil.ch"
                                        case -4 : 
#line 609 "outil.ch"
#line 610 "outil.ch"
                                            PushTree((PPTREE)0);
#line 610 "outil.ch"
#line 611 "outil.ch"
                                            break ;
                                            
#line 611 "outil.ch"
#line 613 "outil.ch"
                                        default : 
#line 613 "outil.ch"
#line 613 "outil.ch"
                                            ptTree = MakeTree(NodeType, arity = (int)va_arg(arg_marker,INT));
#line 613 "outil.ch"
#line 614 "outil.ch"
#line 614 "outil.ch"
                                            for (; arity ; arity-- ) 
#line 614 "outil.ch"
#line 615 "outil.ch"
                                                ReplaceTree(ptTree, arity, PopTree);
#line 615 "outil.ch"
                                            
#line 615 "outil.ch"
#line 616 "outil.ch"
                                            PushTree(ptTree);
#line 616 "outil.ch"
#line 617 "outil.ch"
                                            break ;
                                            
#line 617 "outil.ch"
                                    }
#line 617 "outil.ch"
                                    
#line 617 "outil.ch"
#line 619 "outil.ch"
                                    NodeType = (int)va_arg(arg_marker,INT);
#line 619 "outil.ch"
#line 620 "outil.ch"
                                    
#line 620 "outil.ch"
#line 620 "outil.ch"
                                }
#line 620 "outil.ch"
#line 621 "outil.ch"
    
#line 621 "outil.ch"
#line 621 "outil.ch"
}
#line 621 "outil.ch"


#line 621 "outil.ch"
#line 621 "outil.ch"

#line 621 "outil.ch"
#endif

#line 621 "outil.ch"
#line 621 "outil.ch"

#line 621 "outil.ch"
#else 
#line 625 "outil.ch"

#line 625 "outil.ch"
void TheConstructor ( PPTREE(&stackTree)[1024], int &ptStackTree, int NodeType, ... )
#line 625 "outil.ch"
{
#line 625 "outil.ch"
#line 625 "outil.ch"
    int _nextVal ;
    
#line 625 "outil.ch"
#line 628 "outil.ch"
    register int    arity ;
    
#line 628 "outil.ch"
#line 629 "outil.ch"
    MY_TREE ptTree ;
    
#line 629 "outil.ch"
#line 630 "outil.ch"
    va_list arg_marker ;
    
#line 630 "outil.ch"
#line 632 "outil.ch"
    va_start(arg_marker, NodeType);
#line 632 "outil.ch"
#line 633 "outil.ch"
#if 0
#line 633 "outil.ch"
#line 636 "outil.ch"
    NodeType = (int)va_arg(arg_marker,INT);
#line 636 "outil.ch"
#line 636 "outil.ch"
    
#line 636 "outil.ch"
#endif
    
#line 636 "outil.ch"
#line 638 "outil.ch"
    while ( NodeType != -3 ) {
#line 638 "outil.ch"
#line 639 "outil.ch"
                                    switch ( NodeType ) {
#line 639 "outil.ch"
#line 640 "outil.ch"
                                        case -2 : 
#line 640 "outil.ch"
#line 641 "outil.ch"
                                            PushTree((PPTREE)va_arg(arg_marker,PPTREE));
#line 641 "outil.ch"
#line 642 "outil.ch"
                                            break ;
                                            
#line 642 "outil.ch"
#line 643 "outil.ch"
                                        case -4 : 
#line 643 "outil.ch"
#line 644 "outil.ch"
                                            PushTree((PPTREE)0);
#line 644 "outil.ch"
#line 645 "outil.ch"
                                            break ;
                                            
#line 645 "outil.ch"
#line 647 "outil.ch"
                                        default : 
#line 647 "outil.ch"
#line 647 "outil.ch"
                                            ptTree = MakeTree(NodeType, arity = (int)va_arg(arg_marker,INT));
#line 647 "outil.ch"
#line 648 "outil.ch"
#line 648 "outil.ch"
                                            for (; arity ; arity-- ) 
#line 648 "outil.ch"
#line 649 "outil.ch"
                                                ReplaceTree(ptTree, arity, PopTree);
#line 649 "outil.ch"
                                            
#line 649 "outil.ch"
#line 650 "outil.ch"
                                            PushTree(ptTree);
#line 650 "outil.ch"
#line 651 "outil.ch"
                                            break ;
                                            
#line 651 "outil.ch"
                                    }
#line 651 "outil.ch"
                                    
#line 651 "outil.ch"
#line 653 "outil.ch"
                                    NodeType = (int)va_arg(arg_marker,INT);
#line 653 "outil.ch"
#line 654 "outil.ch"
                                    
#line 654 "outil.ch"
#line 654 "outil.ch"
                                }
#line 654 "outil.ch"
#line 655 "outil.ch"
    
#line 655 "outil.ch"
#line 655 "outil.ch"
}
#line 655 "outil.ch"

#if 0
#line 655 "outil.ch"
#line 658 "outil.ch"
#line 658 "outil.ch"

#line 658 "outil.ch"
void TheConstructor ( int NodeType, ... )
#line 658 "outil.ch"
{
#line 658 "outil.ch"
#line 658 "outil.ch"
    int _nextVal ;
    
#line 658 "outil.ch"
#line 661 "outil.ch"
    register int    arity ;
    
#line 661 "outil.ch"
#line 662 "outil.ch"
    MY_TREE ptTree ;
    
#line 662 "outil.ch"
#line 663 "outil.ch"
    va_list arg_marker ;
    
#line 663 "outil.ch"
#line 665 "outil.ch"
    va_start(arg_marker, NodeType);
#line 665 "outil.ch"
#line 666 "outil.ch"
#if 0
#line 666 "outil.ch"
#line 669 "outil.ch"
    NodeType = (int)va_arg(arg_marker,INT);
#line 669 "outil.ch"
#line 669 "outil.ch"
    
#line 669 "outil.ch"
#endif
    
#line 669 "outil.ch"
#line 671 "outil.ch"
    while ( NodeType != -3 ) {
#line 671 "outil.ch"
#line 672 "outil.ch"
                                    switch ( NodeType ) {
#line 672 "outil.ch"
#line 673 "outil.ch"
                                        case -2 : 
#line 673 "outil.ch"
#line 674 "outil.ch"
                                            PushTree((PPTREE)va_arg(arg_marker,PPTREE));
#line 674 "outil.ch"
#line 675 "outil.ch"
                                            break ;
                                            
#line 675 "outil.ch"
#line 676 "outil.ch"
                                        case -4 : 
#line 676 "outil.ch"
#line 677 "outil.ch"
                                            PushTree((PPTREE)0);
#line 677 "outil.ch"
#line 678 "outil.ch"
                                            break ;
                                            
#line 678 "outil.ch"
#line 680 "outil.ch"
                                        default : 
#line 680 "outil.ch"
#line 680 "outil.ch"
                                            ptTree = MakeTree(NodeType, arity = (int)va_arg(arg_marker,INT));
#line 680 "outil.ch"
#line 681 "outil.ch"
#line 681 "outil.ch"
                                            for (; arity ; arity-- ) 
#line 681 "outil.ch"
#line 682 "outil.ch"
                                                ReplaceTree(ptTree, arity, PopTree);
#line 682 "outil.ch"
                                            
#line 682 "outil.ch"
#line 683 "outil.ch"
                                            PushTree(ptTree);
#line 683 "outil.ch"
#line 684 "outil.ch"
                                            break ;
                                            
#line 684 "outil.ch"
                                    }
#line 684 "outil.ch"
                                    
#line 684 "outil.ch"
#line 686 "outil.ch"
                                    NodeType = (int)va_arg(arg_marker,INT);
#line 686 "outil.ch"
#line 687 "outil.ch"
                                    
#line 687 "outil.ch"
#line 687 "outil.ch"
                                }
#line 687 "outil.ch"
#line 688 "outil.ch"
    
#line 688 "outil.ch"
#line 688 "outil.ch"
}
#line 688 "outil.ch"


#line 688 "outil.ch"
#line 688 "outil.ch"

#line 688 "outil.ch"
#endif
#endif

#line 695 "outil.ch"

#line 695 "outil.ch"
void PatchANode ( char *languageName, PTREE the_elem )
#line 695 "outil.ch"
{
#line 695 "outil.ch"
#line 695 "outil.ch"
    int _nextVal ;
    
#line 695 "outil.ch"
#line 698 "outil.ch"
    char    *NodeLanguage ;
    
#line 698 "outil.ch"
#line 699 "outil.ch"
    OVER_LANG   *pOverLang ;
    
#line 699 "outil.ch"
#line 701 "outil.ch"
    NodeLanguage = GetNodeLang(the_elem) -> name ;
#line 701 "outil.ch"
#line 702 "outil.ch"
    pOverLang = GetLang(languageName) -> overLang ;
#line 702 "outil.ch"
#line 703 "outil.ch"
#line 703 "outil.ch"
    for (; pOverLang && pOverLang -> name ; pOverLang++ ) 
#line 703 "outil.ch"
#line 704 "outil.ch"
        if ( !strcmp(pOverLang -> name, NodeLanguage) ) {
#line 704 "outil.ch"
#line 705 "outil.ch"
                                                                if ( NumberTree(the_elem) > IN_LANGUAGE && NumberTree(the_elem) != TERM_TREE ) 
#line 705 "outil.ch"
#line 706 "outil.ch"
                                                                    PatchNode(the_elem, GetLang(languageName), NumberTree(the_elem) + pOverLang -> offset);
#line 706 "outil.ch"
                                                                else 
#line 706 "outil.ch"
#line 708 "outil.ch"
                                                                    PatchNode(the_elem, GetLang(languageName), NumberTree(the_elem));
#line 708 "outil.ch"
                                                                
#line 708 "outil.ch"
#line 709 "outil.ch"
                                                                goto nextNode ;
                                                                
#line 709 "outil.ch"
#line 710 "outil.ch"
                                                                
#line 710 "outil.ch"
#line 710 "outil.ch"
                                                             }
#line 710 "outil.ch"
    
#line 710 "outil.ch"
#line 711 "outil.ch"
    pOverLang = GetNodeLang(the_elem) -> overLang ;
#line 711 "outil.ch"
#line 712 "outil.ch"
#line 712 "outil.ch"
    for (; pOverLang && pOverLang -> name ; pOverLang++ ) 
#line 712 "outil.ch"
#line 713 "outil.ch"
        if ( !strcmp(pOverLang -> name, languageName) ) {
#line 713 "outil.ch"
#line 714 "outil.ch"
                                                                if ( NumberTree(the_elem) > IN_LANGUAGE && NumberTree(the_elem) != TERM_TREE ) 
#line 714 "outil.ch"
#line 715 "outil.ch"
                                                                    PatchNode(the_elem, GetLang(languageName), NumberTree(the_elem) - pOverLang -> offset);
#line 715 "outil.ch"
                                                                else 
#line 715 "outil.ch"
#line 717 "outil.ch"
                                                                    PatchNode(the_elem, GetLang(languageName), NumberTree(the_elem));
#line 717 "outil.ch"
                                                                
#line 717 "outil.ch"
#line 718 "outil.ch"
                                                                goto nextNode ;
                                                                
#line 718 "outil.ch"
#line 719 "outil.ch"
                                                                
#line 719 "outil.ch"
#line 719 "outil.ch"
                                                             }
#line 719 "outil.ch"
    
#line 719 "outil.ch"
#line 720 "outil.ch"
nextNode : 
#line 720 "outil.ch"
#line 721 "outil.ch"
    ;
#line 721 "outil.ch"
#line 722 "outil.ch"
    
#line 722 "outil.ch"
#line 722 "outil.ch"
}
#line 722 "outil.ch"

#line 724 "outil.ch"

#line 724 "outil.ch"
void InLang ( char *languageName, PTREE tree )
#line 724 "outil.ch"
{
#line 724 "outil.ch"
#line 724 "outil.ch"
    int _nextVal ;
    
#line 724 "outil.ch"
#line 726 "outil.ch"
    {
#line 726 "outil.ch"
#line 726 "outil.ch"
        int _for_slot = 1, _arity = treearity(tree);
        
#line 726 "outil.ch"
#line 726 "outil.ch"
        MY_TREE _for_elem = (PPTREE)0 ;
        
#line 726 "outil.ch"
#line 726 "outil.ch"
#line 726 "outil.ch"
        for (; _for_slot <= _arity ; _for_slot++ ) {
#line 726 "outil.ch"
#line 726 "outil.ch"
            _for_elem = SonTree(tree, _for_slot);
#line 726 "outil.ch"
#line 726 "outil.ch"
            if ( _for_elem && NumberTree(_for_elem) != IN_LANGUAGE ) {
#line 726 "outil.ch"
#line 726 "outil.ch"
                InLang(languageName, for_elem);
#line 726 "outil.ch"
#line 726 "outil.ch"
                
#line 726 "outil.ch"
#line 726 "outil.ch"
            }
#line 726 "outil.ch"
#line 726 "outil.ch"
            
#line 726 "outil.ch"
#line 726 "outil.ch"
        }
#line 726 "outil.ch"
        
#line 726 "outil.ch"
#line 726 "outil.ch"
        
#line 726 "outil.ch"
#line 726 "outil.ch"
    }
#line 726 "outil.ch"
#line 729 "outil.ch"
    PatchANode(languageName, tree);
#line 729 "outil.ch"
#line 730 "outil.ch"
    
#line 730 "outil.ch"
#line 730 "outil.ch"
}
#line 730 "outil.ch"

static int  currentLine, currentCol ;

#line 737 "outil.ch"

#line 737 "outil.ch"
char *IsPosComment ( const PTREE &comm )
#line 737 "outil.ch"
{
#line 737 "outil.ch"
#line 737 "outil.ch"
    int _nextVal ;
    
#line 737 "outil.ch"
#line 740 "outil.ch"
    char    *val = Value(comm);
    
#line 740 "outil.ch"
#line 742 "outil.ch"
    if ( !strncmp(val, POS_STUB, strlen(POS_STUB)) ) 
#line 742 "outil.ch"
#line 743 "outil.ch"
        return val ;
    
#line 743 "outil.ch"
    else 
#line 743 "outil.ch"
#line 745 "outil.ch"
        return (char *)0 ;
        
#line 745 "outil.ch"
    
#line 745 "outil.ch"
#line 746 "outil.ch"
    
#line 746 "outil.ch"
#line 746 "outil.ch"
}
#line 746 "outil.ch"

#line 751 "outil.ch"

#line 751 "outil.ch"
bool IsCommNotPos ( const PTREE &tree, int type )
#line 751 "outil.ch"
{
#line 751 "outil.ch"
#line 751 "outil.ch"
    int _nextVal ;
    
#line 751 "outil.ch"
#line 754 "outil.ch"
    PTREE   comm ;
#line 754 "outil.ch"
    
#line 754 "outil.ch"
#line 755 "outil.ch"
    int result = 0 ;
    
#line 755 "outil.ch"
#line 758 "outil.ch"
    while ( ((comm=NextComm(tree, type, comm))) ) {
#line 758 "outil.ch"
#line 759 "outil.ch"
                                                            if ( !IsPosComment(comm) ) {
#line 759 "outil.ch"
#line 762 "outil.ch"
                                                                                            return true ;
                                                                                            
#line 762 "outil.ch"
#line 763 "outil.ch"
                                                                                            
#line 763 "outil.ch"
#line 763 "outil.ch"
                                                                                          }
#line 763 "outil.ch"
#line 764 "outil.ch"
                                                            
#line 764 "outil.ch"
#line 764 "outil.ch"
                                                        }
#line 764 "outil.ch"
#line 767 "outil.ch"
    return false ;
    
#line 767 "outil.ch"
#line 768 "outil.ch"
    
#line 768 "outil.ch"
#line 768 "outil.ch"
}
#line 768 "outil.ch"

#line 773 "outil.ch"

#line 773 "outil.ch"
int GetStartPos ( const PTREE &tree, int *line, int *col, bool opposite )
#line 773 "outil.ch"
{
#line 773 "outil.ch"
#line 773 "outil.ch"
    int _nextVal ;
    
#line 773 "outil.ch"
#line 776 "outil.ch"
    PTREE   comm ;
#line 776 "outil.ch"
    
#line 776 "outil.ch"
#line 777 "outil.ch"
    int result = 0 ;
    
#line 777 "outil.ch"
#line 780 "outil.ch"
    while ( ((comm=NextComm(tree, PRE, comm))) ) {
#line 780 "outil.ch"
#line 781 "outil.ch"
                                                        if ( GetPosCommentContent(comm, line, col) ) {
#line 781 "outil.ch"
#line 786 "outil.ch"
                                                                                                            result = 1 ;
#line 786 "outil.ch"
#line 789 "outil.ch"
                                                                                                            if ( opposite ) 
#line 789 "outil.ch"
#line 790 "outil.ch"
                                                                                                                break ;
                                                                                                            
#line 790 "outil.ch"
#line 791 "outil.ch"
                                                                                                            
#line 791 "outil.ch"
#line 791 "outil.ch"
                                                                                                         }
#line 791 "outil.ch"
#line 792 "outil.ch"
                                                        
#line 792 "outil.ch"
#line 792 "outil.ch"
                                                       }
#line 792 "outil.ch"
#line 795 "outil.ch"
    return result ;
    
#line 795 "outil.ch"
#line 796 "outil.ch"
    
#line 796 "outil.ch"
#line 796 "outil.ch"
}
#line 796 "outil.ch"

#line 801 "outil.ch"

#line 801 "outil.ch"
static  int SearchPosInt ( const PTREE &tree, int *line, int *col )
#line 801 "outil.ch"
{
#line 801 "outil.ch"
#line 801 "outil.ch"
    int _nextVal ;
    
#line 801 "outil.ch"
#line 804 "outil.ch"
    {
#line 804 "outil.ch"
#line 804 "outil.ch"
        int _for_slot = 1, _arity = treearity(tree);
        
#line 804 "outil.ch"
#line 804 "outil.ch"
        MY_TREE _for_elem = (PPTREE)0 ;
        
#line 804 "outil.ch"
#line 804 "outil.ch"
#line 804 "outil.ch"
        for (; _for_slot <= _arity ; _for_slot++ ) {
#line 804 "outil.ch"
#line 804 "outil.ch"
            _for_elem = SonTree(tree, _for_slot);
#line 804 "outil.ch"
#line 804 "outil.ch"
            if ( _for_elem && NumberTree(_for_elem) != IN_LANGUAGE ) 
#line 804 "outil.ch"
#line 804 "outil.ch"
                if ( SearchPos(for_elem, line, col) ) {
#line 804 "outil.ch"
#line 804 "outil.ch"
                    return 1 ;
                    
#line 804 "outil.ch"
#line 804 "outil.ch"
                    
#line 804 "outil.ch"
#line 804 "outil.ch"
                }
#line 804 "outil.ch"
#line 804 "outil.ch"
            
#line 804 "outil.ch"
#line 804 "outil.ch"
        }
#line 804 "outil.ch"
        
#line 804 "outil.ch"
#line 804 "outil.ch"
        
#line 804 "outil.ch"
#line 804 "outil.ch"
    }
#line 804 "outil.ch"
#line 809 "outil.ch"
    if ( GetStartPos(tree, line, col) || GetEndPos(tree, line, col) ) 
#line 809 "outil.ch"
#line 810 "outil.ch"
        return 1 ;
    
#line 810 "outil.ch"
#line 811 "outil.ch"
    return 0 ;
    
#line 811 "outil.ch"
#line 812 "outil.ch"
    
#line 812 "outil.ch"
#line 812 "outil.ch"
}
#line 812 "outil.ch"

#line 816 "outil.ch"

#line 816 "outil.ch"
int SearchPos ( const PTREE &tree, int *line, int *col )
#line 816 "outil.ch"
{
#line 816 "outil.ch"
#line 816 "outil.ch"
    int _nextVal ;
    
#line 816 "outil.ch"
#line 819 "outil.ch"
    if ( !GetStartPos(tree, line, col) ) {
#line 819 "outil.ch"
#line 820 "outil.ch"
                                                return SearchPosInt(tree, line, col);
                                                
#line 820 "outil.ch"
#line 821 "outil.ch"
                                                
#line 821 "outil.ch"
#line 821 "outil.ch"
                                              } else 
#line 821 "outil.ch"
#line 822 "outil.ch"
        return 1 ;
        
#line 822 "outil.ch"
    
#line 822 "outil.ch"
#line 823 "outil.ch"
    
#line 823 "outil.ch"
#line 823 "outil.ch"
}
#line 823 "outil.ch"

#line 828 "outil.ch"

#line 828 "outil.ch"
static  int SearchEndPosInt ( const PTREE &tree, int *line, int *col )
#line 828 "outil.ch"
{
#line 828 "outil.ch"
#line 828 "outil.ch"
    int _nextVal ;
    
#line 828 "outil.ch"
#line 831 "outil.ch"
    int arity = treearity(tree);
    
#line 831 "outil.ch"
#line 833 "outil.ch"
#line 833 "outil.ch"
    for (; arity > 0 ; arity-- ) {
#line 833 "outil.ch"
#line 834 "outil.ch"
                                        PTREE   son = (PTREE)0 ;
#line 834 "outil.ch"
                                        
#line 834 "outil.ch"
#line 834 "outil.ch"
                                        (son=tree [arity]);
#line 834 "outil.ch"
                                        
#line 834 "outil.ch"
#line 835 "outil.ch"
                                        if ( SearchEndPos(son, line, col) ) {
#line 835 "outil.ch"
#line 836 "outil.ch"
                                                                                    return 1 ;
                                                                                    
#line 836 "outil.ch"
#line 837 "outil.ch"
                                                                                    
#line 837 "outil.ch"
#line 837 "outil.ch"
                                                                                }
#line 837 "outil.ch"
#line 838 "outil.ch"
                                        
#line 838 "outil.ch"
#line 838 "outil.ch"
                                    }
#line 838 "outil.ch"
    
#line 838 "outil.ch"
#line 839 "outil.ch"
    if ( GetEndPos(tree, line, col) || GetStartPos(tree, line, col) ) 
#line 839 "outil.ch"
#line 840 "outil.ch"
        return 1 ;
    
#line 840 "outil.ch"
#line 841 "outil.ch"
    return 0 ;
    
#line 841 "outil.ch"
#line 842 "outil.ch"
    
#line 842 "outil.ch"
#line 842 "outil.ch"
}
#line 842 "outil.ch"

#line 846 "outil.ch"

#line 846 "outil.ch"
int SearchEndPos ( const PTREE &tree, int *line, int *col )
#line 846 "outil.ch"
{
#line 846 "outil.ch"
#line 846 "outil.ch"
    int _nextVal ;
    
#line 846 "outil.ch"
#line 849 "outil.ch"
    if ( !GetEndPos(tree, line, col) ) {
#line 849 "outil.ch"
#line 850 "outil.ch"
                                                return SearchEndPosInt(tree, line, col);
                                                
#line 850 "outil.ch"
#line 851 "outil.ch"
                                                
#line 851 "outil.ch"
#line 851 "outil.ch"
                                            } else 
#line 851 "outil.ch"
#line 852 "outil.ch"
        return 1 ;
        
#line 852 "outil.ch"
    
#line 852 "outil.ch"
#line 853 "outil.ch"
    
#line 853 "outil.ch"
#line 853 "outil.ch"
}
#line 853 "outil.ch"

#line 857 "outil.ch"

#line 857 "outil.ch"
int GetEndPos ( const PTREE &tree, int *line, int *col, bool opposite )
#line 857 "outil.ch"
{
#line 857 "outil.ch"
#line 857 "outil.ch"
    int _nextVal ;
    
#line 857 "outil.ch"
#line 860 "outil.ch"
    PTREE   comm ;
#line 860 "outil.ch"
    
#line 860 "outil.ch"
#line 861 "outil.ch"
    int result = 0 ;
    
#line 861 "outil.ch"
#line 864 "outil.ch"
    while ( ((comm=NextComm(tree, POST, comm))) ) {
#line 864 "outil.ch"
#line 865 "outil.ch"
                                                            if ( GetPosCommentContent(comm, line, col) ) {
#line 865 "outil.ch"
#line 868 "outil.ch"
                                                                                                                result = 1 ;
#line 868 "outil.ch"
#line 869 "outil.ch"
                                                                                                                if ( !opposite ) 
#line 869 "outil.ch"
#line 870 "outil.ch"
                                                                                                                    return result ;
                                                                                                                
#line 870 "outil.ch"
#line 871 "outil.ch"
                                                                                                                
#line 871 "outil.ch"
#line 871 "outil.ch"
                                                                                                             }
#line 871 "outil.ch"
#line 872 "outil.ch"
                                                            
#line 872 "outil.ch"
#line 872 "outil.ch"
                                                        }
#line 872 "outil.ch"
#line 875 "outil.ch"
    return result ;
    
#line 875 "outil.ch"
#line 876 "outil.ch"
    
#line 876 "outil.ch"
#line 876 "outil.ch"
}
#line 876 "outil.ch"

#line 880 "outil.ch"

#line 880 "outil.ch"
int GetPosCommentContent ( const PTREE &comm, int *lig, int *col )
#line 880 "outil.ch"
{
#line 880 "outil.ch"
#line 880 "outil.ch"
    int _nextVal ;
    
#line 880 "outil.ch"
#line 883 "outil.ch"
    char    *val ;
    
#line 883 "outil.ch"
#line 885 "outil.ch"
    if ( (val = IsPosComment(comm)) ) {
#line 885 "outil.ch"
#line 886 "outil.ch"
                                            sscanf(val, POS_STUB_FORMAT, lig, col);
#line 886 "outil.ch"
#line 887 "outil.ch"
                                            return 1 ;
                                            
#line 887 "outil.ch"
#line 888 "outil.ch"
                                            
#line 888 "outil.ch"
#line 888 "outil.ch"
                                          }
#line 888 "outil.ch"
#line 889 "outil.ch"
    return 0 ;
    
#line 889 "outil.ch"
#line 890 "outil.ch"
    
#line 890 "outil.ch"
#line 890 "outil.ch"
}
#line 890 "outil.ch"

#line 894 "outil.ch"

#line 894 "outil.ch"
void SetPosCommentContent ( const PTREE &comm, int lig, int col )
#line 894 "outil.ch"
{
#line 894 "outil.ch"
#line 894 "outil.ch"
    int _nextVal ;
    
#line 894 "outil.ch"
#line 897 "outil.ch"
    PTREE   content = (PTREE)0 ;
#line 897 "outil.ch"
    
#line 897 "outil.ch"
#line 897 "outil.ch"
    (content=SonTree(SonTree(comm, 1), 1));
#line 897 "outil.ch"
    
#line 897 "outil.ch"
#line 899 "outil.ch"
    if ( IsPosComment(content) ) {
#line 899 "outil.ch"
#line 900 "outil.ch"
                                    char    addr [MAXLENGTH];
                                    
#line 900 "outil.ch"
#line 901 "outil.ch"
                                    sprintf(addr, POS_STUB_FORMAT, lig, col);
#line 901 "outil.ch"
#line 902 "outil.ch"
                                    replacetree(content, 1, MakeString(addr));
#line 902 "outil.ch"
#line 903 "outil.ch"
                                    
#line 903 "outil.ch"
#line 903 "outil.ch"
                                   }
#line 903 "outil.ch"
#line 904 "outil.ch"
    
#line 904 "outil.ch"
#line 904 "outil.ch"
}
#line 904 "outil.ch"

#line 908 "outil.ch"

#line 908 "outil.ch"
void SetPos ( const PTREE &tree, int type, int lig, int col )
#line 908 "outil.ch"
{
#line 908 "outil.ch"
    register PPTREE _inter ;
#line 908 "outil.ch"

#line 908 "outil.ch"
#line 908 "outil.ch"
    int _nextVal ;
    
#line 908 "outil.ch"
#line 911 "outil.ch"
    char    addr [MAXLENGTH];
    
#line 911 "outil.ch"
#line 912 "outil.ch"
    PTREE   comment ;
#line 912 "outil.ch"
    
#line 912 "outil.ch"
#line 914 "outil.ch"
    if ( !tree ) 
#line 914 "outil.ch"
#line 915 "outil.ch"
        return ;
    
#line 915 "outil.ch"
#line 916 "outil.ch"
    (comment=MakeTree(type, 1));
#line 916 "outil.ch"
    
#line 916 "outil.ch"
#line 917 "outil.ch"
    sprintf(addr, POS_STUB_FORMAT, lig, col);
#line 917 "outil.ch"
#line 918 "outil.ch"
    {
#line 918 "outil.ch"
        PPTREE _ptTree0= (PPTREE) 0,_sonTree0= (PPTREE) 0 ;
#line 918 "outil.ch"
        {
#line 918 "outil.ch"
            PPTREE _ptTree1= (PPTREE) 0,_ptRes1= (PPTREE) 0;
#line 918 "outil.ch"
            _ptRes1 = MakeTree(LIST, 2);
#line 918 "outil.ch"
            _ptTree1 = StoreRef(MakeString(addr));
#line 918 "outil.ch"
            ReplaceTree(_ptRes1, 1, _ptTree1);
#line 918 "outil.ch"
            _ptTree0 = _ptRes1;
#line 918 "outil.ch"
        }
#line 918 "outil.ch"
        ReplaceTree(comment, 1, _ptTree0);
#line 918 "outil.ch"
    }
#line 918 "outil.ch"
    
#line 918 "outil.ch"
#line 919 "outil.ch"
    {
#line 919 "outil.ch"
        PPTREE _ptTree0= (PPTREE) 0,_ptRes0= (PPTREE) 0;
#line 919 "outil.ch"
        _ptRes0 = MakeTree(LIST, 2);
#line 919 "outil.ch"
        ReplaceTree(_ptRes0, 1, comment);
#line 919 "outil.ch"
        comment = _ptRes0;
#line 919 "outil.ch"
    }
#line 919 "outil.ch"
    
#line 919 "outil.ch"
#line 920 "outil.ch"
    PutComm(tree, comment);
#line 920 "outil.ch"
#line 921 "outil.ch"
    
#line 921 "outil.ch"
#line 921 "outil.ch"
}
#line 921 "outil.ch"

#line 925 "outil.ch"

#line 925 "outil.ch"
void AddPos ( const PTREE &tree, int type, int lig, int col )
#line 925 "outil.ch"
{
#line 925 "outil.ch"
    register PPTREE _inter ;
#line 925 "outil.ch"

#line 925 "outil.ch"
#line 925 "outil.ch"
    int _nextVal ;
    
#line 925 "outil.ch"
#line 928 "outil.ch"
    char    addr [MAXLENGTH];
    
#line 928 "outil.ch"
#line 929 "outil.ch"
    PTREE   comment ;
#line 929 "outil.ch"
    
#line 929 "outil.ch"
#line 930 "outil.ch"
    PTREE   oldComment ;
#line 930 "outil.ch"
    
#line 930 "outil.ch"
#line 932 "outil.ch"
    if ( !tree ) 
#line 932 "outil.ch"
#line 933 "outil.ch"
        return ;
    
#line 933 "outil.ch"
#line 936 "outil.ch"
    (oldComment=GetComm(tree));
#line 936 "outil.ch"
    
#line 936 "outil.ch"
#line 939 "outil.ch"
    (comment=MakeTree(type, 1));
#line 939 "outil.ch"
    
#line 939 "outil.ch"
#line 940 "outil.ch"
    sprintf(addr, POS_STUB_FORMAT, lig, col);
#line 940 "outil.ch"
#line 941 "outil.ch"
    {
#line 941 "outil.ch"
        PPTREE _ptTree0= (PPTREE) 0,_sonTree0= (PPTREE) 0 ;
#line 941 "outil.ch"
        {
#line 941 "outil.ch"
            PPTREE _ptTree1= (PPTREE) 0,_ptRes1= (PPTREE) 0;
#line 941 "outil.ch"
            _ptRes1 = MakeTree(LIST, 2);
#line 941 "outil.ch"
            _ptTree1 = StoreRef(MakeString(addr));
#line 941 "outil.ch"
            ReplaceTree(_ptRes1, 1, _ptTree1);
#line 941 "outil.ch"
            _ptTree0 = _ptRes1;
#line 941 "outil.ch"
        }
#line 941 "outil.ch"
        ReplaceTree(comment, 1, _ptTree0);
#line 941 "outil.ch"
    }
#line 941 "outil.ch"
    
#line 941 "outil.ch"
#line 942 "outil.ch"
    {
#line 942 "outil.ch"
        PPTREE _ptTree0= (PPTREE) 0,_ptRes0= (PPTREE) 0;
#line 942 "outil.ch"
        _ptRes0 = MakeTree(LIST, 2);
#line 942 "outil.ch"
        ReplaceTree(_ptRes0, 1, comment);
#line 942 "outil.ch"
        ReplaceTree(_ptRes0, 2, oldComment);
#line 942 "outil.ch"
        comment = _ptRes0;
#line 942 "outil.ch"
    }
#line 942 "outil.ch"
    
#line 942 "outil.ch"
#line 945 "outil.ch"
    PutComm(tree, comment);
#line 945 "outil.ch"
#line 946 "outil.ch"
    
#line 946 "outil.ch"
#line 946 "outil.ch"
}
#line 946 "outil.ch"

#line 950 "outil.ch"

#line 950 "outil.ch"
PTREE DestroyComment ( const PTREE &comm )
#line 950 "outil.ch"
{
#line 950 "outil.ch"
#line 950 "outil.ch"
    int _nextVal ;
    
#line 950 "outil.ch"
#line 953 "outil.ch"
    int rank = ranktree(comm);
    
#line 953 "outil.ch"
#line 954 "outil.ch"
    PTREE   commRet ;
#line 954 "outil.ch"
    
#line 954 "outil.ch"
#line 955 "outil.ch"
    PTREE   father ;
#line 955 "outil.ch"
    
#line 955 "outil.ch"
#line 957 "outil.ch"
    (father=FatherTree(comm));
#line 957 "outil.ch"
    
#line 957 "outil.ch"
#line 958 "outil.ch"
    if ( !father ) 
#line 958 "outil.ch"
#line 959 "outil.ch"
        return 0 ;
    
#line 959 "outil.ch"
#line 962 "outil.ch"
    if ( rank == 2 ) 
#line 962 "outil.ch"
#line 963 "outil.ch"
        (commRet=father);
#line 963 "outil.ch"
    
#line 963 "outil.ch"
    else 
#line 963 "outil.ch"
#line 965 "outil.ch"
        (commRet=(PTREE)0);
#line 965 "outil.ch"
        
#line 965 "outil.ch"
    
#line 965 "outil.ch"
#line 968 "outil.ch"
    replacetree(father, rank, sontree(comm, 2));
#line 968 "outil.ch"
#line 971 "outil.ch"
    return commRet ;
    
#line 971 "outil.ch"
#line 972 "outil.ch"
    
#line 972 "outil.ch"
#line 972 "outil.ch"
}
#line 972 "outil.ch"

#line 976 "outil.ch"

#line 976 "outil.ch"
void TrimPosComment ( const PTREE &tree )
#line 976 "outil.ch"
{
#line 976 "outil.ch"
    register PPTREE _inter ;
#line 976 "outil.ch"

#line 976 "outil.ch"
#line 976 "outil.ch"
    int _nextVal ;
    
#line 976 "outil.ch"
#line 979 "outil.ch"
    PTREE   comm, oldComm, father ;
#line 979 "outil.ch"
    
#line 979 "outil.ch"
#line 980 "outil.ch"
    char    *val ;
    
#line 980 "outil.ch"
#line 981 "outil.ch"
    int preLineMax = -1, preColMax = -1 ;
    
#line 981 "outil.ch"
#line 982 "outil.ch"
    int postLineMin = 32000, postColMin = 32000 ;
    
#line 982 "outil.ch"
#line 983 "outil.ch"
    int line, col ;
    
#line 983 "outil.ch"
#line 984 "outil.ch"
    int lineFather, colFather ;
    
#line 984 "outil.ch"
#line 985 "outil.ch"
    int first ;
    
#line 985 "outil.ch"
#line 986 "outil.ch"
    int again ;
    
#line 986 "outil.ch"
#line 992 "outil.ch"
    if ( !tree || NumberTree(tree) == TERM_TREE ) 
#line 992 "outil.ch"
#line 993 "outil.ch"
        return ;
    
#line 993 "outil.ch"
#line 996 "outil.ch"
    if ( ((comm=GetComm(tree))) ) {
#line 996 "outil.ch"
#line 997 "outil.ch"
                                        while ( !(((_inter = (PPTREE)comm,1) && 
#line 997 "outil.ch"
                                                        (!SonTree(_inter,2)) &&
#line 997 "outil.ch"
                                                        1)) ) {
#line 997 "outil.ch"
#line 998 "outil.ch"
                                                                ((_inter = (PPTREE)comm,1) && 
#line 998 "outil.ch"
                                                                    ((comm=SonTree(_inter,2)),1) &&
#line 998 "outil.ch"
                                                                    1);
#line 998 "outil.ch"
                                                                ;
#line 998 "outil.ch"
#line 999 "outil.ch"
                                                                
#line 999 "outil.ch"
#line 999 "outil.ch"
                                                              }
#line 999 "outil.ch"
#line 1000 "outil.ch"
                                        while ( comm != tree ) {
#line 1000 "outil.ch"
#line 1001 "outil.ch"
                                                                    (father=FatherTree(comm));
#line 1001 "outil.ch"
                                                                    
#line 1001 "outil.ch"
#line 1002 "outil.ch"
                                                                    while ( father != tree && !IsPosComment(father) ) 
#line 1002 "outil.ch"
#line 1003 "outil.ch"
                                                                        (father=FatherTree(father));
#line 1003 "outil.ch"
                                                                    
#line 1003 "outil.ch"
#line 1004 "outil.ch"
                                                                    if ( father != tree && GetPosCommentContent(comm, &line, &col) ) {
#line 1004 "outil.ch"
#line 1005 "outil.ch"
GetPosCommentContent(father, &lineFather, &colFather);
#line 1005 "outil.ch"
#line 1006 "outil.ch"
if ( lineFather > line || lineFather == line && colFather > col ) {
#line 1006 "outil.ch"
#line 1007 "outil.ch"
                                                                            DestroyComment(father);
#line 1007 "outil.ch"
#line 1008 "outil.ch"
                                                                            continue ;
                                                                            
#line 1008 "outil.ch"
#line 1009 "outil.ch"
                                                                            
#line 1009 "outil.ch"
#line 1009 "outil.ch"
                                                                        }
#line 1009 "outil.ch"
#line 1010 "outil.ch"

#line 1010 "outil.ch"
#line 1010 "outil.ch"
                                                                                                                                             }
#line 1010 "outil.ch"
#line 1011 "outil.ch"
                                                                    (comm=father);
#line 1011 "outil.ch"
                                                                    
#line 1011 "outil.ch"
#line 1012 "outil.ch"
                                                                    
#line 1012 "outil.ch"
#line 1012 "outil.ch"
                                                                 }
#line 1012 "outil.ch"
#line 1013 "outil.ch"
                                        
#line 1013 "outil.ch"
#line 1013 "outil.ch"
                                      }
#line 1013 "outil.ch"
#line 1014 "outil.ch"
    (oldComm=(comm=(PTREE)0));
#line 1014 "outil.ch"
    
#line 1014 "outil.ch"
#line 1015 "outil.ch"
    first = 0 ;
#line 1015 "outil.ch"
#line 1016 "outil.ch"
    again = 0 ;
#line 1016 "outil.ch"
#line 1017 "outil.ch"
    while ( ((comm=NextComm(tree, PRE, comm))) ) {
#line 1017 "outil.ch"
#line 1018 "outil.ch"
                                                        if ( GetPosCommentContent(comm, &line, &col) ) {
#line 1018 "outil.ch"
#line 1019 "outil.ch"
                                                                                                                if ( line > preLineMax || line == preLineMax && col > preColMax ) {
#line 1019 "outil.ch"
#line 1020 "outil.ch"
preLineMax = line ;
#line 1020 "outil.ch"
#line 1021 "outil.ch"
preColMax = col ;
#line 1021 "outil.ch"
#line 1024 "outil.ch"
if ( oldComm && !again ) {
#line 1024 "outil.ch"
#line 1025 "outil.ch"
                                DestroyComment(oldComm);
#line 1025 "outil.ch"
#line 1026 "outil.ch"
                                
#line 1026 "outil.ch"
#line 1026 "outil.ch"
                            }
#line 1026 "outil.ch"
#line 1029 "outil.ch"
if ( !again ) 
#line 1029 "outil.ch"
#line 1030 "outil.ch"
    (oldComm=comm);
#line 1030 "outil.ch"

#line 1030 "outil.ch"
else 
#line 1031 "outil.ch"
{
#line 1031 "outil.ch"
#line 1032 "outil.ch"
    (oldComm=(PTREE)0);
#line 1032 "outil.ch"
    
#line 1032 "outil.ch"
#line 1033 "outil.ch"
    again = 0 ;
#line 1033 "outil.ch"
#line 1034 "outil.ch"
    
#line 1034 "outil.ch"
#line 1034 "outil.ch"
}

#line 1034 "outil.ch"
#line 1035 "outil.ch"
first = 1 ;
#line 1035 "outil.ch"
#line 1036 "outil.ch"

#line 1036 "outil.ch"
#line 1036 "outil.ch"
                                                                                                                                                                                        } else 
#line 1036 "outil.ch"
                                                                                                                {
#line 1036 "outil.ch"
#line 1039 "outil.ch"
                                                                                                                    if ( !again ) {
#line 1039 "outil.ch"
#line 1040 "outil.ch"
(comm=DestroyComment(comm));
#line 1040 "outil.ch"

#line 1040 "outil.ch"
#line 1041 "outil.ch"

#line 1041 "outil.ch"
#line 1041 "outil.ch"
                                                                                                                                    } else 
#line 1041 "outil.ch"
                                                                                                                    {
#line 1041 "outil.ch"
#line 1042 "outil.ch"
                                                                                                                        (oldComm=(PTREE)0);
#line 1042 "outil.ch"
                                                                                                                        
#line 1042 "outil.ch"
#line 1043 "outil.ch"
                                                                                                                        again = 0 ;
#line 1043 "outil.ch"
#line 1044 "outil.ch"
                                                                                                                        
#line 1044 "outil.ch"
#line 1044 "outil.ch"
                                                                                                                    }
                                                                                                                    
#line 1044 "outil.ch"
#line 1045 "outil.ch"
                                                                                                                    
#line 1045 "outil.ch"
#line 1045 "outil.ch"
                                                                                                                }
                                                                                                                
#line 1045 "outil.ch"
#line 1046 "outil.ch"
                                                                                                                
#line 1046 "outil.ch"
#line 1046 "outil.ch"
                                                                                                             } else 
#line 1046 "outil.ch"
#line 1047 "outil.ch"
                                                            again = 1 ;
#line 1047 "outil.ch"
                                                        
#line 1047 "outil.ch"
#line 1048 "outil.ch"
                                                        
#line 1048 "outil.ch"
#line 1048 "outil.ch"
                                                       }
#line 1048 "outil.ch"
#line 1049 "outil.ch"
    if ( first ) {
#line 1049 "outil.ch"
#line 1050 "outil.ch"
                    currentLine = preLineMax ;
#line 1050 "outil.ch"
#line 1051 "outil.ch"
                    currentCol = preColMax ;
#line 1051 "outil.ch"
#line 1052 "outil.ch"
                    
#line 1052 "outil.ch"
#line 1052 "outil.ch"
                  }
#line 1052 "outil.ch"
#line 1053 "outil.ch"
    {
#line 1053 "outil.ch"
#line 1053 "outil.ch"
        int _for_slot = 1, _arity = treearity(tree);
        
#line 1053 "outil.ch"
#line 1053 "outil.ch"
        MY_TREE _for_elem = (PPTREE)0 ;
        
#line 1053 "outil.ch"
#line 1053 "outil.ch"
#line 1053 "outil.ch"
        for (; _for_slot <= _arity ; _for_slot++ ) {
#line 1053 "outil.ch"
#line 1053 "outil.ch"
            _for_elem = SonTree(tree, _for_slot);
#line 1053 "outil.ch"
#line 1053 "outil.ch"
            if ( _for_elem && NumberTree(_for_elem) != IN_LANGUAGE ) 
#line 1053 "outil.ch"
#line 1053 "outil.ch"
                TrimPosComment(for_elem);
#line 1053 "outil.ch"
#line 1053 "outil.ch"
            
#line 1053 "outil.ch"
#line 1053 "outil.ch"
        }
#line 1053 "outil.ch"
        
#line 1053 "outil.ch"
#line 1053 "outil.ch"
        
#line 1053 "outil.ch"
#line 1053 "outil.ch"
    }
#line 1053 "outil.ch"
#line 1056 "outil.ch"
    (oldComm=(comm=(PTREE)0));
#line 1056 "outil.ch"
    
#line 1056 "outil.ch"
#line 1057 "outil.ch"
    first = 0 ;
#line 1057 "outil.ch"
#line 1058 "outil.ch"
    again = 0 ;
#line 1058 "outil.ch"
#line 1059 "outil.ch"
    while ( ((comm=NextComm(tree, POST, comm))) ) {
#line 1059 "outil.ch"
#line 1060 "outil.ch"
                                                            if ( GetPosCommentContent(comm, &line, &col) ) {
#line 1060 "outil.ch"
#line 1061 "outil.ch"
                                                                                                                    if ( (line < postLineMin || line == postLineMin && col < postColMin) && (line >= currentLine || line == currentLine && col >= currentCol) ) {
#line 1061 "outil.ch"
#line 1062 "outil.ch"
postLineMin = line ;
#line 1062 "outil.ch"
#line 1063 "outil.ch"
postColMin = col ;
#line 1063 "outil.ch"
#line 1066 "outil.ch"
if ( oldComm && !again ) {
#line 1066 "outil.ch"
#line 1067 "outil.ch"
                                DestroyComment(oldComm);
#line 1067 "outil.ch"
#line 1068 "outil.ch"
                                
#line 1068 "outil.ch"
#line 1068 "outil.ch"
                            }
#line 1068 "outil.ch"
#line 1071 "outil.ch"
if ( !again ) 
#line 1071 "outil.ch"
#line 1072 "outil.ch"
    (oldComm=comm);
#line 1072 "outil.ch"

#line 1072 "outil.ch"
else 
#line 1073 "outil.ch"
{
#line 1073 "outil.ch"
#line 1074 "outil.ch"
    again = 0 ;
#line 1074 "outil.ch"
#line 1075 "outil.ch"
    (oldComm=0);
#line 1075 "outil.ch"
    
#line 1075 "outil.ch"
#line 1076 "outil.ch"
    
#line 1076 "outil.ch"
#line 1076 "outil.ch"
}

#line 1076 "outil.ch"
#line 1077 "outil.ch"
first = 1 ;
#line 1077 "outil.ch"
#line 1078 "outil.ch"

#line 1078 "outil.ch"
#line 1078 "outil.ch"
                                                                                                                                                                                                                                                                              } else 
#line 1078 "outil.ch"
                                                                                                                    {
#line 1078 "outil.ch"
#line 1081 "outil.ch"
                                                                                                                        if ( !again ) {
#line 1081 "outil.ch"
#line 1082 "outil.ch"
(comm=DestroyComment(comm));
#line 1082 "outil.ch"

#line 1082 "outil.ch"
#line 1083 "outil.ch"
again = 0 ;
#line 1083 "outil.ch"
#line 1084 "outil.ch"
(oldComm=0);
#line 1084 "outil.ch"

#line 1084 "outil.ch"
#line 1085 "outil.ch"

#line 1085 "outil.ch"
#line 1085 "outil.ch"
                                                                                                                                        }
#line 1085 "outil.ch"
#line 1086 "outil.ch"
                                                                                                                        
#line 1086 "outil.ch"
#line 1086 "outil.ch"
                                                                                                                    }
                                                                                                                    
#line 1086 "outil.ch"
#line 1087 "outil.ch"
                                                                                                                    
#line 1087 "outil.ch"
#line 1087 "outil.ch"
                                                                                                                 } else 
#line 1087 "outil.ch"
#line 1088 "outil.ch"
                                                                again = 1 ;
#line 1088 "outil.ch"
                                                            
#line 1088 "outil.ch"
#line 1089 "outil.ch"
                                                            
#line 1089 "outil.ch"
#line 1089 "outil.ch"
                                                        }
#line 1089 "outil.ch"
#line 1090 "outil.ch"
    if ( first ) {
#line 1090 "outil.ch"
#line 1091 "outil.ch"
                    currentLine = postLineMin ;
#line 1091 "outil.ch"
#line 1092 "outil.ch"
                    currentCol = postColMin ;
#line 1092 "outil.ch"
#line 1093 "outil.ch"
                    
#line 1093 "outil.ch"
#line 1093 "outil.ch"
                  }
#line 1093 "outil.ch"
#line 1094 "outil.ch"
    
#line 1094 "outil.ch"
#line 1094 "outil.ch"
}
#line 1094 "outil.ch"

#line 1098 "outil.ch"

#line 1098 "outil.ch"
void DestroyPosComment ( const PTREE &tree )
#line 1098 "outil.ch"
{
#line 1098 "outil.ch"
#line 1098 "outil.ch"
    int _nextVal ;
    
#line 1098 "outil.ch"
#line 1101 "outil.ch"
    PTREE   comm, oldComm = (PTREE)0, father ;
#line 1101 "outil.ch"
    
#line 1101 "outil.ch"
#line 1101 "outil.ch"
    (oldComm=PTREE((void *)0));
#line 1101 "outil.ch"
    
#line 1101 "outil.ch"
#line 1103 "outil.ch"
    if ( !tree ) 
#line 1103 "outil.ch"
#line 1104 "outil.ch"
        return ;
    
#line 1104 "outil.ch"
#line 1107 "outil.ch"
    while ( ((comm=NextComm(tree, PRE, comm))) ) 
#line 1107 "outil.ch"
#line 1108 "outil.ch"
        if ( IsPosComment(comm) ) {
#line 1108 "outil.ch"
#line 1111 "outil.ch"
                                        if ( oldComm ) 
#line 1111 "outil.ch"
#line 1112 "outil.ch"
                                            DestroyComment(oldComm);
#line 1112 "outil.ch"
#line 1116 "outil.ch"
                                        (oldComm=comm);
#line 1116 "outil.ch"
                                        
#line 1116 "outil.ch"
#line 1117 "outil.ch"
                                        
#line 1117 "outil.ch"
#line 1117 "outil.ch"
                                    }
#line 1117 "outil.ch"
#line 1120 "outil.ch"
    while ( ((comm=NextComm(tree, POST, comm))) ) 
#line 1120 "outil.ch"
#line 1121 "outil.ch"
        if ( IsPosComment(comm) ) {
#line 1121 "outil.ch"
#line 1124 "outil.ch"
                                        if ( oldComm ) 
#line 1124 "outil.ch"
#line 1125 "outil.ch"
                                            DestroyComment(oldComm);
#line 1125 "outil.ch"
#line 1129 "outil.ch"
                                        (oldComm=comm);
#line 1129 "outil.ch"
                                        
#line 1129 "outil.ch"
#line 1130 "outil.ch"
                                        
#line 1130 "outil.ch"
#line 1130 "outil.ch"
                                    }
#line 1130 "outil.ch"
#line 1133 "outil.ch"
    if ( oldComm ) 
#line 1133 "outil.ch"
#line 1134 "outil.ch"
        DestroyComment(oldComm);
#line 1134 "outil.ch"
#line 1135 "outil.ch"
    
#line 1135 "outil.ch"
#line 1135 "outil.ch"
}
#line 1135 "outil.ch"

#line 1137 "outil.ch"

#line 1137 "outil.ch"
void DestroyPosCommentRec ( const PTREE &tree )
#line 1137 "outil.ch"
{
#line 1137 "outil.ch"
#line 1137 "outil.ch"
    int _nextVal ;
    
#line 1137 "outil.ch"
#line 1139 "outil.ch"
    {
#line 1139 "outil.ch"
#line 1139 "outil.ch"
        ItPtree _iterator1 (tree, (PPTREE) 0) ;
        
#line 1139 "outil.ch"
#line 1139 "outil.ch"
        PPTREE  _for_elem ;
        
#line 1139 "outil.ch"
#line 1139 "outil.ch"
        _iterator1.AllSearch(1);
#line 1139 "outil.ch"
#line 1139 "outil.ch"
        while ( _for_elem = _iterator1++ ) {
#line 1139 "outil.ch"
#line 1139 "outil.ch"
            {
#line 1139 "outil.ch"
#line 1140 "outil.ch"
                DestroyPosComment(for_elem);
#line 1140 "outil.ch"
#line 1141 "outil.ch"
                
#line 1141 "outil.ch"
#line 1141 "outil.ch"
            }
            
#line 1141 "outil.ch"
#line 1141 "outil.ch"
            _iterator1.Current(_for_elem);
#line 1141 "outil.ch"
#line 1141 "outil.ch"
            continue ;
            
#line 1141 "outil.ch"
#line 1141 "outil.ch"
        for_continue1 : 
#line 1141 "outil.ch"
#line 1141 "outil.ch"
            _iterator1.Current(_for_elem);
#line 1141 "outil.ch"
#line 1141 "outil.ch"
            _iterator1.SkipSon(1);
#line 1141 "outil.ch"
#line 1141 "outil.ch"
            continue ;
            
#line 1141 "outil.ch"
#line 1141 "outil.ch"
        for_break1 : 
#line 1141 "outil.ch"
#line 1141 "outil.ch"
            break ;
            
#line 1141 "outil.ch"
#line 1141 "outil.ch"
            
#line 1141 "outil.ch"
#line 1141 "outil.ch"
        }
#line 1141 "outil.ch"
#line 1141 "outil.ch"
        
#line 1141 "outil.ch"
#line 1141 "outil.ch"
    }
    
#line 1141 "outil.ch"
#line 1142 "outil.ch"
    
#line 1142 "outil.ch"
#line 1142 "outil.ch"
}
#line 1142 "outil.ch"

static int  NbTree ;
static int  NbDump ;
bool    theConstructorDump = false ;

#line 1148 "outil.ch"

#line 1148 "outil.ch"
void MakeTreeGenDirRec ( PTREE &paramTree, int nbTreeParam )
#line 1148 "outil.ch"
{
#line 1148 "outil.ch"
    register PPTREE _inter ;
#line 1148 "outil.ch"

#line 1148 "outil.ch"
#line 1148 "outil.ch"
    int _nextVal ;
    
#line 1148 "outil.ch"
#line 1150 "outil.ch"
    int nbParam, currParam, gennode ;
    
#line 1150 "outil.ch"
#line 1151 "outil.ch"
    char    myString [5];
    
#line 1151 "outil.ch"
#line 1152 "outil.ch"
    PTREE   son ;
#line 1152 "outil.ch"
    
#line 1152 "outil.ch"
#line 1154 "outil.ch"
    theConstructorDump = true ;
#line 1154 "outil.ch"
#line 1155 "outil.ch"
    if ( nbTreeParam ) {
#line 1155 "outil.ch"
#line 1156 "outil.ch"
                            Mark();
#line 1156 "outil.ch"
#line 1157 "outil.ch"
                            PrintString("TheConstructor(stackTree,ptStackTree,");
#line 1157 "outil.ch"
#line 1158 "outil.ch"
                            NbTree = nbTreeParam ;
#line 1158 "outil.ch"
#line 1159 "outil.ch"
                            NbDump = 0 ;
#line 1159 "outil.ch"
#line 1160 "outil.ch"
                            MakeTreeGenDirRec(paramTree);
#line 1160 "outil.ch"
#line 1161 "outil.ch"
                            PrintString("-3) ;");
#line 1161 "outil.ch"
#line 1161 "outil.ch"
                            LNewLine(1);
#line 1161 "outil.ch"
                            
#line 1161 "outil.ch"
#line 1162 "outil.ch"
                            UnMark();
#line 1162 "outil.ch"
#line 1163 "outil.ch"
                            return ;
                            
#line 1163 "outil.ch"
#line 1164 "outil.ch"
                            
#line 1164 "outil.ch"
#line 1164 "outil.ch"
                        }
#line 1164 "outil.ch"
#line 1165 "outil.ch"
    if ( NbTree == 50 ) {
#line 1165 "outil.ch"
#line 1166 "outil.ch"
                            PrintString("-3);");
#line 1166 "outil.ch"
#line 1166 "outil.ch"
                            LNewLine(1);
#line 1166 "outil.ch"
                            
#line 1166 "outil.ch"
#line 1167 "outil.ch"
                            PrintString("TheConstructor(stackTree,ptStackTree,");
#line 1167 "outil.ch"
#line 1168 "outil.ch"
                            NbTree = 0 ;
#line 1168 "outil.ch"
#line 1169 "outil.ch"
                            
#line 1169 "outil.ch"
#line 1169 "outil.ch"
                          } else 
#line 1169 "outil.ch"
#line 1170 "outil.ch"
        NbTree++ ;
#line 1170 "outil.ch"
    
#line 1170 "outil.ch"
#line 1171 "outil.ch"
    if ( NbDump == 9 ) {
#line 1171 "outil.ch"
#line 1172 "outil.ch"
                            LNewLine(1);
#line 1172 "outil.ch"
                            
#line 1172 "outil.ch"
#line 1173 "outil.ch"
                            Tab();
#line 1173 "outil.ch"
                            
#line 1173 "outil.ch"
#line 1174 "outil.ch"
                            NbDump = 0 ;
#line 1174 "outil.ch"
#line 1175 "outil.ch"
                            
#line 1175 "outil.ch"
#line 1175 "outil.ch"
                         } else 
#line 1175 "outil.ch"
#line 1176 "outil.ch"
        NbDump++ ;
#line 1176 "outil.ch"
    
#line 1176 "outil.ch"
#line 1177 "outil.ch"
    if ( ((_inter = (PPTREE)paramTree,1) && 
#line 1177 "outil.ch"
            (NumberTree(_inter) == TERM_TREE) &&
#line 1177 "outil.ch"
            1) ) {
#line 1177 "outil.ch"
#line 1178 "outil.ch"
                    PrintString("-2,");
#line 1178 "outil.ch"
                    PrintString("MakeString(\"");
#line 1178 "outil.ch"
#line 1179 "outil.ch"
                    DumpBrainyValue(paramTree);
#line 1179 "outil.ch"
#line 1180 "outil.ch"
                    PrintString("\"),");
#line 1180 "outil.ch"
#line 1181 "outil.ch"
                    return ;
                    
#line 1181 "outil.ch"
#line 1182 "outil.ch"
                    
#line 1182 "outil.ch"
#line 1182 "outil.ch"
                 } else 
#line 1182 "outil.ch"
    if ( NumberTree(paramTree) == CLASS_TREE ) {
#line 1182 "outil.ch"
#line 1183 "outil.ch"
                                                    PrintString("-2,");
#line 1183 "outil.ch"
#line 1184 "outil.ch"
                                                    char    *toBeDumped = (char *)APPLY_CLASS(paramTree, TreeClass, DumpTree());
                                                    
#line 1184 "outil.ch"
#line 1185 "outil.ch"
                                                    WriteString(toBeDumped);
#line 1185 "outil.ch"
#line 1185 "outil.ch"
                                                    WriteString(",");
#line 1185 "outil.ch"
#line 1186 "outil.ch"
                                                    return ;
                                                    
#line 1186 "outil.ch"
#line 1187 "outil.ch"
                                                    
#line 1187 "outil.ch"
#line 1187 "outil.ch"
                                                  }
#line 1187 "outil.ch"
#line 1188 "outil.ch"
    nbParam = treearity(paramTree);
#line 1188 "outil.ch"
#line 1189 "outil.ch"
    currParam = 1 ;
#line 1189 "outil.ch"
#line 1190 "outil.ch"
    while ( currParam <= nbParam ) {
#line 1190 "outil.ch"
#line 1191 "outil.ch"
                                        (son=SonTree(paramTree, currParam));
#line 1191 "outil.ch"
                                        
#line 1191 "outil.ch"
#line 1192 "outil.ch"
                                        if ( !((!son)) ) 
#line 1192 "outil.ch"
#line 1193 "outil.ch"
                                            MakeTreeGenDirRec(son);
#line 1193 "outil.ch"
                                        else 
#line 1193 "outil.ch"
#line 1195 "outil.ch"
                                            PrintString("-4,");
#line 1195 "outil.ch"
                                        
#line 1195 "outil.ch"
#line 1196 "outil.ch"
                                        currParam++ ;
#line 1196 "outil.ch"
#line 1197 "outil.ch"
                                        
#line 1197 "outil.ch"
#line 1197 "outil.ch"
                                     }
#line 1197 "outil.ch"
#line 1198 "outil.ch"
    _itoa(nbParam, myString, 10);
#line 1198 "outil.ch"
#line 1199 "outil.ch"
    WriteString(NameConst(NumberTree(paramTree)));
#line 1199 "outil.ch"
#line 1199 "outil.ch"
    PrintString(",");
#line 1199 "outil.ch"
#line 1199 "outil.ch"
    WriteString(myString);
#line 1199 "outil.ch"
#line 1199 "outil.ch"
    PrintString(",");
#line 1199 "outil.ch"
#line 1200 "outil.ch"
    
#line 1200 "outil.ch"
#line 1200 "outil.ch"
}
#line 1200 "outil.ch"

#line 1200 "outil.ch"
#line 1200 "outil.ch"
static void outil_Anchor () { int i = 1;} 
#line 1200 "outil.ch"
/*Well done my boy */ 
#line 1200 "outil.ch"

