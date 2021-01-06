
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
                                return 1 ;
                                
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
                                                                                                                    return 0 ;
                                                                                                                
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
                                                            return 1 ;
                                                            
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
        return 0 ;
        
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
        return 1 ;
    
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
                                                                                                return 0 ;
                                                                                            
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
                                        return 1 ;
                                        
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
        return 0 ;
        
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
#line 377 "outil.ch"
    int oldOutput = output ;
    
#line 377 "outil.ch"
#line 379 "outil.ch"
    Flush();
#line 379 "outil.ch"
#line 380 "outil.ch"
    output = 1 ;
#line 380 "outil.ch"
#line 381 "outil.ch"
    LDumpTree(nTree);
#line 381 "outil.ch"
#line 382 "outil.ch"
    output = oldOutput ;
#line 382 "outil.ch"
#line 383 "outil.ch"
    
#line 383 "outil.ch"
#line 383 "outil.ch"
}
#line 383 "outil.ch"

#line 385 "outil.ch"

#line 385 "outil.ch"
void LDumpTree ( PPTREE treeParam )
#line 385 "outil.ch"
{
#line 385 "outil.ch"
#line 385 "outil.ch"
    int _nextVal ;
    
#line 385 "outil.ch"
#line 387 "outil.ch"
    AddRef(treeParam);
#line 387 "outil.ch"
#line 388 "outil.ch"
    DumpTree(treeParam);
#line 388 "outil.ch"
#line 389 "outil.ch"
    NewLine();
#line 389 "outil.ch"
#line 390 "outil.ch"
    
#line 390 "outil.ch"
#line 390 "outil.ch"
}
#line 390 "outil.ch"

#line 392 "outil.ch"

#line 392 "outil.ch"
void DumpTree ( PPTREE treeParam )
#line 392 "outil.ch"
{
#line 392 "outil.ch"
    register PPTREE _inter ;
#line 392 "outil.ch"

#line 392 "outil.ch"
#line 392 "outil.ch"
    int _nextVal ;
    
#line 392 "outil.ch"
#line 395 "outil.ch"
    
    int i, test ;
    
#line 395 "outil.ch"
#line 396 "outil.ch"
    PTREE   name1, son ;
#line 396 "outil.ch"
    
#line 396 "outil.ch"
#line 397 "outil.ch"
    PTREE   comm, cont ;
#line 397 "outil.ch"
    
#line 397 "outil.ch"
#line 398 "outil.ch"
    int oldIsVirtMod = isVirtMod ;
    
#line 398 "outil.ch"
#line 400 "outil.ch"
    isVirtMod = 0 ;
#line 400 "outil.ch"
#line 402 "outil.ch"
    PTREE   tree (treeParam) ;
#line 402 "outil.ch"
    
#line 402 "outil.ch"
#line 405 "outil.ch"
    if ( lineNumberRef >= 30000 ) 
#line 405 "outil.ch"
#line 406 "outil.ch"
        return ;
    
#line 406 "outil.ch"
#line 409 "outil.ch"
    if ( (!tree) ) {
#line 409 "outil.ch"
#line 410 "outil.ch"
                        PrintString("[ NIL ] ");
#line 410 "outil.ch"
#line 411 "outil.ch"
                        return ;
                        
#line 411 "outil.ch"
#line 412 "outil.ch"
                        
#line 412 "outil.ch"
#line 412 "outil.ch"
                     }
#line 412 "outil.ch"
#line 415 "outil.ch"
    (comm=(PTREE)0);
#line 415 "outil.ch"
    
#line 415 "outil.ch"
#line 416 "outil.ch"
    while ( (PPTREE)((comm=NextComm(tree, PRE, comm))) ) {
#line 416 "outil.ch"
#line 417 "outil.ch"
                                                                    (cont=(PTREE)0);
#line 417 "outil.ch"
                                                                    
#line 417 "outil.ch"
#line 418 "outil.ch"
                                                                    PrintString("PRE -> ");
#line 418 "outil.ch"
#line 418 "outil.ch"
                                                                    LNewLine(1);
#line 418 "outil.ch"
                                                                    
#line 418 "outil.ch"
#line 419 "outil.ch"
                                                                    Tab();
#line 419 "outil.ch"
                                                                    
#line 419 "outil.ch"
#line 420 "outil.ch"
                                                                    Mark();
#line 420 "outil.ch"
                                                                    while ( (PPTREE)((cont=NextCommContent(comm, cont))) ) {
#line 420 "outil.ch"
#line 421 "outil.ch"
                                                                                                                                  PrintString(BrainyValue(cont));
#line 421 "outil.ch"
#line 421 "outil.ch"
                                                                                                                                  LNewLine(1);
#line 421 "outil.ch"
                                                                                                                                  
#line 421 "outil.ch"
#line 422 "outil.ch"
                                                                                                                                  
#line 422 "outil.ch"
#line 422 "outil.ch"
                                                                                                                                  }
#line 422 "outil.ch"
                                                                    UnMark();
#line 422 "outil.ch"
                                                                    
#line 422 "outil.ch"
#line 424 "outil.ch"
                                                                    
#line 424 "outil.ch"
#line 424 "outil.ch"
                                                                 }
#line 424 "outil.ch"
#line 425 "outil.ch"
    switch ( NumberTree(tree) ) {
#line 425 "outil.ch"
#line 427 "outil.ch"
        case TERM_TREE : 
#line 427 "outil.ch"
#line 427 "outil.ch"
        _Case5 : 
#line 427 "outil.ch"
#line 427 "outil.ch"
            ;
#line 427 "outil.ch"
#line 427 "outil.ch"
            {
#line 427 "outil.ch"
#line 428 "outil.ch"
                int x, y, dx, dy, x0, y0 ;
                
#line 428 "outil.ch"
#line 429 "outil.ch"
                char    myString [30];
                
#line 429 "outil.ch"
#line 430 "outil.ch"
                if ( GetCoord(tree, &x, &y, &dx, &dy) ) {
#line 430 "outil.ch"
#line 430 "outil.ch"
                                                                    PTREE   _Baum0 ;
#line 430 "outil.ch"
                                                                    
#line 430 "outil.ch"
#line 431 "outil.ch"
                                                                    _Baum0 = (PPTREE) 0 ;
#line 431 "outil.ch"
                                                                    
#line 431 "outil.ch"
#line 431 "outil.ch"
                                                                    GetCoordAbs(tree, _Baum0, &x0, &y0);
#line 431 "outil.ch"
#line 432 "outil.ch"
                                                                    sprintf(myString, "%d %d %d %d %d %d", y0, x0, y, x, dy, dx);
#line 432 "outil.ch"
#line 433 "outil.ch"
                                                                    PrintString("{");
#line 433 "outil.ch"
#line 433 "outil.ch"
                                                                    WriteString(myString);
#line 433 "outil.ch"
#line 433 "outil.ch"
                                                                    PrintString("}");
#line 433 "outil.ch"
#line 433 "outil.ch"
                                                                    LNewLine(1);
#line 433 "outil.ch"
                                                                    
#line 433 "outil.ch"
#line 434 "outil.ch"
                                                                    
#line 434 "outil.ch"
#line 434 "outil.ch"
                                                                  }
#line 434 "outil.ch"
#line 435 "outil.ch"
                
#line 435 "outil.ch"
#line 435 "outil.ch"
            }
            
#line 435 "outil.ch"
#line 436 "outil.ch"
            PrintString("\"");
#line 436 "outil.ch"
#line 436 "outil.ch"
            DumpBrainyValue(tree);
#line 436 "outil.ch"
            
#line 436 "outil.ch"
#line 436 "outil.ch"
            PrintString("\"");
#line 436 "outil.ch"
#line 437 "outil.ch"
            break ;
            
#line 437 "outil.ch"
#line 439 "outil.ch"
        case CLASS_TREE : 
#line 439 "outil.ch"
#line 439 "outil.ch"
        _Case6 : 
#line 439 "outil.ch"
#line 439 "outil.ch"
            ;
#line 439 "outil.ch"
#line 439 "outil.ch"
            {
#line 439 "outil.ch"
#line 440 "outil.ch"
                int x, y, dx, dy, x0, y0 ;
                
#line 440 "outil.ch"
#line 441 "outil.ch"
                char    myString [30];
                
#line 441 "outil.ch"
#line 442 "outil.ch"
                if ( GetCoord(tree, &x, &y, &dx, &dy) ) {
#line 442 "outil.ch"
#line 442 "outil.ch"
                                                                    PTREE   _Baum1 ;
#line 442 "outil.ch"
                                                                    
#line 442 "outil.ch"
#line 443 "outil.ch"
                                                                    _Baum1 = (PPTREE) 0 ;
#line 443 "outil.ch"
                                                                    
#line 443 "outil.ch"
#line 443 "outil.ch"
                                                                    GetCoordAbs(tree, _Baum1, &x0, &y0);
#line 443 "outil.ch"
#line 444 "outil.ch"
                                                                    sprintf(myString, "%d %d %d %d %d %d", y0, x0, y, x, dy, dx);
#line 444 "outil.ch"
#line 445 "outil.ch"
                                                                    PrintString("{");
#line 445 "outil.ch"
#line 445 "outil.ch"
                                                                    WriteString(myString);
#line 445 "outil.ch"
#line 445 "outil.ch"
                                                                    PrintString("}");
#line 445 "outil.ch"
#line 445 "outil.ch"
                                                                    LNewLine(1);
#line 445 "outil.ch"
                                                                    
#line 445 "outil.ch"
#line 446 "outil.ch"
                                                                    
#line 446 "outil.ch"
#line 446 "outil.ch"
                                                                  }
#line 446 "outil.ch"
#line 447 "outil.ch"
                
#line 447 "outil.ch"
#line 447 "outil.ch"
            }
            
#line 447 "outil.ch"
#line 448 "outil.ch"
            PrintString("[");
#line 448 "outil.ch"
#line 448 "outil.ch"
            WriteString(NameConst(APPLY_CLASS(tree, TreeClass, Type())));
#line 448 "outil.ch"
#line 448 "outil.ch"
            WriteString(" <> ");
#line 448 "outil.ch"
#line 448 "outil.ch"
            PrintString("\"");
#line 448 "outil.ch"
#line 448 "outil.ch"
            WriteString(APPLY_CLASS(tree, TreeClass, Value()));
#line 448 "outil.ch"
#line 448 "outil.ch"
            PrintString("\"]");
#line 448 "outil.ch"
#line 449 "outil.ch"
            break ;
            
#line 449 "outil.ch"
#line 451 "outil.ch"
        case LIST : 
#line 451 "outil.ch"
#line 451 "outil.ch"
        _Case7 : 
#line 451 "outil.ch"
#line 451 "outil.ch"
            ;
#line 451 "outil.ch"
#line 451 "outil.ch"
            {
#line 451 "outil.ch"
#line 452 "outil.ch"
                int x, y, dx, dy, x0, y0 ;
                
#line 452 "outil.ch"
#line 453 "outil.ch"
                char    myString [30];
                
#line 453 "outil.ch"
#line 454 "outil.ch"
                if ( GetCoord(tree, &x, &y, &dx, &dy) ) {
#line 454 "outil.ch"
#line 454 "outil.ch"
                                                                    PTREE   _Baum2 ;
#line 454 "outil.ch"
                                                                    
#line 454 "outil.ch"
#line 455 "outil.ch"
                                                                    _Baum2 = (PPTREE) 0 ;
#line 455 "outil.ch"
                                                                    
#line 455 "outil.ch"
#line 455 "outil.ch"
                                                                    GetCoordAbs(tree, _Baum2, &x0, &y0);
#line 455 "outil.ch"
#line 456 "outil.ch"
                                                                    sprintf(myString, "%d %d %d %d %d %d", y0, x0, y, x, dy, dx);
#line 456 "outil.ch"
#line 457 "outil.ch"
                                                                    PrintString("{");
#line 457 "outil.ch"
#line 457 "outil.ch"
                                                                    WriteString(myString);
#line 457 "outil.ch"
#line 457 "outil.ch"
                                                                    PrintString("}");
#line 457 "outil.ch"
#line 457 "outil.ch"
                                                                    LNewLine(1);
#line 457 "outil.ch"
                                                                    
#line 457 "outil.ch"
#line 458 "outil.ch"
                                                                    
#line 458 "outil.ch"
#line 458 "outil.ch"
                                                                  }
#line 458 "outil.ch"
#line 459 "outil.ch"
                
#line 459 "outil.ch"
#line 459 "outil.ch"
            }
            
#line 459 "outil.ch"
#line 460 "outil.ch"
            PrintString("[ LIST ");
#line 460 "outil.ch"
#line 460 "outil.ch"
            LNewLine(1);
#line 460 "outil.ch"
            
#line 460 "outil.ch"
#line 461 "outil.ch"
            Tab();
#line 461 "outil.ch"
            
#line 461 "outil.ch"
#line 462 "outil.ch"
            Mark();
#line 462 "outil.ch"
            while ( !((!tree)) && ((_inter = (PPTREE)tree,1) && 
#line 462 "outil.ch"
                                        (NumberTree(_inter) == LIST) &&
#line 462 "outil.ch"
                                        1) && lineNumberRef < 30000 ) {
#line 462 "outil.ch"
#line 463 "outil.ch"
                                                                            (son=(tree?tree.Nextl():(PPTREE)0));
#line 463 "outil.ch"
                                                                            
#line 463 "outil.ch"
#line 464 "outil.ch"
                                                                            DumpTree(son);
#line 464 "outil.ch"
#line 465 "outil.ch"
                                                                            LNewLine(1);
#line 465 "outil.ch"
                                                                            
#line 465 "outil.ch"
#line 466 "outil.ch"
                                                                            
#line 466 "outil.ch"
#line 466 "outil.ch"
                                                                        }
#line 466 "outil.ch"
            if ( tree && !(((_inter = (PPTREE)tree,1) && 
#line 466 "outil.ch"
                                (NumberTree(_inter) == LIST) &&
#line 466 "outil.ch"
                                1)) ) {
#line 466 "outil.ch"
#line 468 "outil.ch"
                                        PrintString("$");
#line 468 "outil.ch"
#line 469 "outil.ch"
                                        DumpTree(tree);
#line 469 "outil.ch"
#line 470 "outil.ch"
                                        LNewLine(1);
#line 470 "outil.ch"
                                        
#line 470 "outil.ch"
#line 471 "outil.ch"
                                        
#line 471 "outil.ch"
#line 471 "outil.ch"
                                      }
#line 471 "outil.ch"
            UnMark();
#line 471 "outil.ch"
            
#line 471 "outil.ch"
#line 473 "outil.ch"
            PrintString("]");
#line 473 "outil.ch"
#line 474 "outil.ch"
            break ;
            
#line 474 "outil.ch"
#line 476 "outil.ch"
        case IN_LANGUAGE : 
#line 476 "outil.ch"
#line 476 "outil.ch"
        _Case8 : 
#line 476 "outil.ch"
#line 476 "outil.ch"
            ;
#line 476 "outil.ch"
#line 476 "outil.ch"
            {
#line 476 "outil.ch"
#line 477 "outil.ch"
                ((_inter = (PPTREE)tree,1) && 
#line 477 "outil.ch"
                    ((name1=SonTree(_inter,1)),1) &&
#line 477 "outil.ch"
                    ((tree=SonTree(_inter,2)),1) &&
#line 477 "outil.ch"
                    1);
#line 477 "outil.ch"
                ;
#line 477 "outil.ch"
#line 478 "outil.ch"
                {
#line 478 "outil.ch"
                    PLANG _oldLanguage = pCurrentLanguage;
#line 478 "outil.ch"
                    SwitchLang("Value");
#line 478 "outil.ch"
#line 479 "outil.ch"
                    {
#line 479 "outil.ch"
#line 479 "outil.ch"
                        {
#line 479 "outil.ch"
#line 480 "outil.ch"
                            int x, y, dx, dy, x0, y0 ;
                            
#line 480 "outil.ch"
#line 481 "outil.ch"
                            char    myString [30];
                            
#line 481 "outil.ch"
#line 482 "outil.ch"
                            if ( GetCoord(tree, &x, &y, &dx, &dy) ) {
#line 482 "outil.ch"
#line 482 "outil.ch"
                                                                                PTREE   _Baum3 ;
#line 482 "outil.ch"
                                                                                
#line 482 "outil.ch"
#line 483 "outil.ch"
                                                                                _Baum3 = (PPTREE) 0 ;
#line 483 "outil.ch"
                                                                                
#line 483 "outil.ch"
#line 483 "outil.ch"
                                                                                GetCoordAbs(tree, _Baum3, &x0, &y0);
#line 483 "outil.ch"
#line 484 "outil.ch"
                                                                                sprintf(myString, "%d %d %d %d %d %d", y0, x0, y, x, dy, dx);
#line 484 "outil.ch"
#line 485 "outil.ch"
                                                                                PrintString("{");
#line 485 "outil.ch"
#line 485 "outil.ch"
                                                                                WriteString(myString);
#line 485 "outil.ch"
#line 485 "outil.ch"
                                                                                PrintString("}");
#line 485 "outil.ch"
#line 485 "outil.ch"
                                                                                LNewLine(1);
#line 485 "outil.ch"
                                                                                
#line 485 "outil.ch"
#line 486 "outil.ch"
                                                                                
#line 486 "outil.ch"
#line 486 "outil.ch"
                                                                              }
#line 486 "outil.ch"
#line 487 "outil.ch"
                            
#line 487 "outil.ch"
#line 487 "outil.ch"
                        }
                        
#line 487 "outil.ch"
#line 488 "outil.ch"
                        PrintString("[ IN_LANGUAGE");
#line 488 "outil.ch"
#line 488 "outil.ch"
                        LNewLine(1);
#line 488 "outil.ch"
                        
#line 488 "outil.ch"
#line 489 "outil.ch"
                        Tab();
#line 489 "outil.ch"
                        
#line 489 "outil.ch"
#line 490 "outil.ch"
                        Mark();
#line 490 "outil.ch"
                        PrintString("[ \"");
#line 490 "outil.ch"
                        DumpBrainyValue(name1);
#line 490 "outil.ch"
                        
#line 490 "outil.ch"
                        PrintString("\" ]");
#line 490 "outil.ch"
                        LNewLine(1);
#line 490 "outil.ch"
                        
#line 490 "outil.ch"
                        DumpTree(tree);
#line 490 "outil.ch"
                        LNewLine(1);
#line 490 "outil.ch"
                        
#line 490 "outil.ch"
                        UnMark();
#line 490 "outil.ch"
                        
#line 490 "outil.ch"
#line 494 "outil.ch"
                        PrintString("]");
#line 494 "outil.ch"
#line 495 "outil.ch"
                        
#line 495 "outil.ch"
#line 495 "outil.ch"
                    };
#line 495 "outil.ch"
                    SwitchLangPoint(_oldLanguage);
#line 495 "outil.ch"
                }
#line 495 "outil.ch"
                
#line 495 "outil.ch"
#line 496 "outil.ch"
                
#line 496 "outil.ch"
#line 496 "outil.ch"
            }
            
#line 496 "outil.ch"
#line 497 "outil.ch"
            break ;
            
#line 497 "outil.ch"
#line 499 "outil.ch"
        default : 
#line 499 "outil.ch"
#line 499 "outil.ch"
        _Case9 : 
#line 499 "outil.ch"
#line 499 "outil.ch"
            ;
#line 499 "outil.ch"
#line 499 "outil.ch"
            {
#line 499 "outil.ch"
#line 500 "outil.ch"
                int x, y, dx, dy, x0, y0 ;
                
#line 500 "outil.ch"
#line 501 "outil.ch"
                char    myString [30];
                
#line 501 "outil.ch"
#line 502 "outil.ch"
                if ( GetCoord(tree, &x, &y, &dx, &dy) ) {
#line 502 "outil.ch"
#line 502 "outil.ch"
                                                                    PTREE   _Baum4 ;
#line 502 "outil.ch"
                                                                    
#line 502 "outil.ch"
#line 503 "outil.ch"
                                                                    _Baum4 = (PPTREE) 0 ;
#line 503 "outil.ch"
                                                                    
#line 503 "outil.ch"
#line 503 "outil.ch"
                                                                    GetCoordAbs(tree, _Baum4, &x0, &y0);
#line 503 "outil.ch"
#line 504 "outil.ch"
                                                                    sprintf(myString, "%d %d %d %d %d %d", y0, x0, y, x, dy, dx);
#line 504 "outil.ch"
#line 505 "outil.ch"
                                                                    PrintString("{");
#line 505 "outil.ch"
#line 505 "outil.ch"
                                                                    WriteString(myString);
#line 505 "outil.ch"
#line 505 "outil.ch"
                                                                    PrintString("}");
#line 505 "outil.ch"
#line 505 "outil.ch"
                                                                    LNewLine(1);
#line 505 "outil.ch"
                                                                    
#line 505 "outil.ch"
#line 506 "outil.ch"
                                                                    
#line 506 "outil.ch"
#line 506 "outil.ch"
                                                                  }
#line 506 "outil.ch"
#line 507 "outil.ch"
                
#line 507 "outil.ch"
#line 507 "outil.ch"
            }
            
#line 507 "outil.ch"
#line 508 "outil.ch"
            PrintString("[ ");
#line 508 "outil.ch"
#line 508 "outil.ch"
            WriteString(NameConst(NumberTree(tree)));
#line 508 "outil.ch"
#line 509 "outil.ch"
            if ( (test = treearity(tree) > 1 || treearity(tree) == 1 && treearity(sontree(tree, 1)) > 1) ) {
#line 509 "outil.ch"
#line 510 "outil.ch"
                                                                                                                        LNewLine(1);
#line 510 "outil.ch"
                                                                                                                        
#line 510 "outil.ch"
#line 511 "outil.ch"
                                                                                                                        Tab();
#line 511 "outil.ch"
                                                                                                                        
#line 511 "outil.ch"
#line 512 "outil.ch"
                                                                                                                        
#line 512 "outil.ch"
#line 512 "outil.ch"
                                                                                                                        } else 
#line 512 "outil.ch"
#line 513 "outil.ch"
                PrintString(" ");
#line 513 "outil.ch"
            
#line 513 "outil.ch"
#line 515 "outil.ch"
            Mark();
#line 515 "outil.ch"
#line 515 "outil.ch"
            for ( i = 1 ; i <= treearity(tree) && lineNumberRef < 30000 ; i++ ) {
#line 515 "outil.ch"
#line 516 "outil.ch"
                                                                                            DumpTree(sontree(tree, i));
#line 516 "outil.ch"
#line 517 "outil.ch"
                                                                                            if ( test ) 
#line 517 "outil.ch"
#line 518 "outil.ch"
                                                                                                LNewLine(1);
#line 518 "outil.ch"
                                                                                            
#line 518 "outil.ch"
#line 519 "outil.ch"
                                                                                            
#line 519 "outil.ch"
#line 519 "outil.ch"
                                                                                        }
#line 519 "outil.ch"
            
#line 519 "outil.ch"
            UnMark();
#line 519 "outil.ch"
            
#line 519 "outil.ch"
#line 521 "outil.ch"
            PrintString("]");
#line 521 "outil.ch"
    }
#line 521 "outil.ch"
    
#line 521 "outil.ch"
#line 525 "outil.ch"
    (comm=(PTREE)0);
#line 525 "outil.ch"
    
#line 525 "outil.ch"
#line 526 "outil.ch"
    while ( ((comm=NextComm(tree, POST, comm))) ) {
#line 526 "outil.ch"
#line 527 "outil.ch"
                                                            (cont=(PTREE)0);
#line 527 "outil.ch"
                                                            
#line 527 "outil.ch"
#line 528 "outil.ch"
                                                            LNewLine(1);
#line 528 "outil.ch"
                                                            
#line 528 "outil.ch"
#line 529 "outil.ch"
                                                            if ( PrePost() ) 
#line 529 "outil.ch"
#line 530 "outil.ch"
                                                                PrintString("PREPOST -> ");
#line 530 "outil.ch"
                                                            else 
#line 530 "outil.ch"
#line 532 "outil.ch"
                                                                PrintString("POST -> ");
#line 532 "outil.ch"
                                                            
#line 532 "outil.ch"
#line 533 "outil.ch"
                                                            LNewLine(1);
#line 533 "outil.ch"
                                                            
#line 533 "outil.ch"
#line 534 "outil.ch"
                                                            Tab();
#line 534 "outil.ch"
                                                            
#line 534 "outil.ch"
#line 535 "outil.ch"
                                                            Mark();
#line 535 "outil.ch"
                                                            while ( ((cont=NextCommContent(comm, cont))) ) {
#line 535 "outil.ch"
#line 536 "outil.ch"
                                                                                                                    PrintString(BrainyValue(cont));
#line 536 "outil.ch"
#line 536 "outil.ch"
                                                                                                                    LNewLine(1);
#line 536 "outil.ch"
                                                                                                                    
#line 536 "outil.ch"
#line 537 "outil.ch"
                                                                                                                    
#line 537 "outil.ch"
#line 537 "outil.ch"
                                                                                                                }
#line 537 "outil.ch"
                                                            UnMark();
#line 537 "outil.ch"
                                                            
#line 537 "outil.ch"
#line 539 "outil.ch"
                                                            
#line 539 "outil.ch"
#line 539 "outil.ch"
                                                        }
#line 539 "outil.ch"
#line 540 "outil.ch"
    isVirtMod = oldIsVirtMod ;
#line 540 "outil.ch"
#line 541 "outil.ch"
    
#line 541 "outil.ch"
#line 541 "outil.ch"
}
#line 541 "outil.ch"

#line 543 "outil.ch"

#line 543 "outil.ch"
void MDumpTree ( PPTREE tree, int pageNum )
#line 543 "outil.ch"
{
#line 543 "outil.ch"
#line 543 "outil.ch"
    int _nextVal ;
    
#line 543 "outil.ch"
#line 546 "outil.ch"
    dumpMoreMode = 1 ;
#line 546 "outil.ch"
#line 547 "outil.ch"
    lineNumberRef = currLine ;
#line 547 "outil.ch"
#line 548 "outil.ch"
    pageNumber = 0 ;
#line 548 "outil.ch"
#line 549 "outil.ch"
    pageNumberRef = pageNum ;
#line 549 "outil.ch"
#line 550 "outil.ch"
    DumpTree(tree);
#line 550 "outil.ch"
#line 551 "outil.ch"
    dumpMoreMode = 0 ;
#line 551 "outil.ch"
#line 552 "outil.ch"
    lineNumberRef = 0 ;
#line 552 "outil.ch"
#line 553 "outil.ch"
    
#line 553 "outil.ch"
#line 553 "outil.ch"
}
#line 553 "outil.ch"

#line 555 "outil.ch"

#line 555 "outil.ch"
void DumpNode ( PPTREE tree )
#line 555 "outil.ch"
{
#line 555 "outil.ch"
#line 555 "outil.ch"
    int _nextVal ;
    
#line 555 "outil.ch"
#line 557 "outil.ch"
    PrintString("[ ");
#line 557 "outil.ch"
#line 557 "outil.ch"
    WriteString(NameConst(NumberTree(tree)));
#line 557 "outil.ch"
#line 557 "outil.ch"
    PrintString("]");
#line 557 "outil.ch"
#line 557 "outil.ch"
    LNewLine(1);
#line 557 "outil.ch"
    
#line 557 "outil.ch"
#line 558 "outil.ch"
    
#line 558 "outil.ch"
#line 558 "outil.ch"
}
#line 558 "outil.ch"

#undef LNewLine

#define INT int

#if !defined(VARARGS_2)
#line 558 "outil.ch"
#line 568 "outil.ch"
#line 568 "outil.ch"

#line 568 "outil.ch"
void TheConstructor ( PPTREE(&stackTree)[1024], int &ptStackTree, int va_alist, ... )
#line 568 "outil.ch"
{
#line 568 "outil.ch"
#line 568 "outil.ch"
    int _nextVal ;
    
#line 568 "outil.ch"
#line 570 "outil.ch"
    
    register int    arity ;
    
#line 570 "outil.ch"
#line 571 "outil.ch"
    int NodeType ;
    
#line 571 "outil.ch"
#line 572 "outil.ch"
    MY_TREE ptTree ;
    
#line 572 "outil.ch"
#line 573 "outil.ch"
    va_list arg_marker ;
    
#line 573 "outil.ch"
#line 575 "outil.ch"
    va_start(arg_marker);
#line 575 "outil.ch"
#line 576 "outil.ch"
    NodeType = (int)va_arg(arg_marker,INT);
#line 576 "outil.ch"
#line 577 "outil.ch"
    while ( NodeType != -3 ) {
#line 577 "outil.ch"
#line 578 "outil.ch"
                                    switch ( NodeType ) {
#line 578 "outil.ch"
#line 579 "outil.ch"
                                        case -2 : 
#line 579 "outil.ch"
#line 580 "outil.ch"
                                            PushTree((PPTREE)va_arg(arg_marker,PPTREE));
#line 580 "outil.ch"
#line 581 "outil.ch"
                                            break ;
                                            
#line 581 "outil.ch"
#line 582 "outil.ch"
                                        case -4 : 
#line 582 "outil.ch"
#line 583 "outil.ch"
                                            PushTree((PPTREE)0);
#line 583 "outil.ch"
#line 584 "outil.ch"
                                            break ;
                                            
#line 584 "outil.ch"
#line 586 "outil.ch"
                                        default : 
#line 586 "outil.ch"
#line 586 "outil.ch"
                                            ptTree = MakeTree(NodeType, arity = (int)va_arg(arg_marker,INT));
#line 586 "outil.ch"
#line 587 "outil.ch"
#line 587 "outil.ch"
                                            for (; arity ; arity-- ) 
#line 587 "outil.ch"
#line 588 "outil.ch"
                                                ReplaceTree(ptTree, arity, PopTree);
#line 588 "outil.ch"
                                            
#line 588 "outil.ch"
#line 589 "outil.ch"
                                            PushTree(ptTree);
#line 589 "outil.ch"
#line 590 "outil.ch"
                                            break ;
                                            
#line 590 "outil.ch"
                                    }
#line 590 "outil.ch"
                                    
#line 590 "outil.ch"
#line 592 "outil.ch"
                                    NodeType = (int)va_arg(arg_marker,INT);
#line 592 "outil.ch"
#line 593 "outil.ch"
                                    
#line 593 "outil.ch"
#line 593 "outil.ch"
                                }
#line 593 "outil.ch"
#line 594 "outil.ch"
    
#line 594 "outil.ch"
#line 594 "outil.ch"
}
#line 594 "outil.ch"


#line 594 "outil.ch"
#line 596 "outil.ch"
#if 0
#line 596 "outil.ch"
#line 597 "outil.ch"
#line 597 "outil.ch"

#line 597 "outil.ch"
void TheConstructor ( int va_alist, ... )
#line 597 "outil.ch"
{
#line 597 "outil.ch"
#line 597 "outil.ch"
    int _nextVal ;
    
#line 597 "outil.ch"
#line 599 "outil.ch"
    
    register int    arity ;
    
#line 599 "outil.ch"
#line 600 "outil.ch"
    int NodeType ;
    
#line 600 "outil.ch"
#line 601 "outil.ch"
    MY_TREE ptTree ;
    
#line 601 "outil.ch"
#line 602 "outil.ch"
    va_list arg_marker ;
    
#line 602 "outil.ch"
#line 604 "outil.ch"
    va_start(arg_marker);
#line 604 "outil.ch"
#line 605 "outil.ch"
    NodeType = (int)va_arg(arg_marker,INT);
#line 605 "outil.ch"
#line 606 "outil.ch"
    while ( NodeType != -3 ) {
#line 606 "outil.ch"
#line 607 "outil.ch"
                                    switch ( NodeType ) {
#line 607 "outil.ch"
#line 608 "outil.ch"
                                        case -2 : 
#line 608 "outil.ch"
#line 609 "outil.ch"
                                            PushTree((PPTREE)va_arg(arg_marker,PPTREE));
#line 609 "outil.ch"
#line 610 "outil.ch"
                                            break ;
                                            
#line 610 "outil.ch"
#line 611 "outil.ch"
                                        case -4 : 
#line 611 "outil.ch"
#line 612 "outil.ch"
                                            PushTree((PPTREE)0);
#line 612 "outil.ch"
#line 613 "outil.ch"
                                            break ;
                                            
#line 613 "outil.ch"
#line 615 "outil.ch"
                                        default : 
#line 615 "outil.ch"
#line 615 "outil.ch"
                                            ptTree = MakeTree(NodeType, arity = (int)va_arg(arg_marker,INT));
#line 615 "outil.ch"
#line 616 "outil.ch"
#line 616 "outil.ch"
                                            for (; arity ; arity-- ) 
#line 616 "outil.ch"
#line 617 "outil.ch"
                                                ReplaceTree(ptTree, arity, PopTree);
#line 617 "outil.ch"
                                            
#line 617 "outil.ch"
#line 618 "outil.ch"
                                            PushTree(ptTree);
#line 618 "outil.ch"
#line 619 "outil.ch"
                                            break ;
                                            
#line 619 "outil.ch"
                                    }
#line 619 "outil.ch"
                                    
#line 619 "outil.ch"
#line 621 "outil.ch"
                                    NodeType = (int)va_arg(arg_marker,INT);
#line 621 "outil.ch"
#line 622 "outil.ch"
                                    
#line 622 "outil.ch"
#line 622 "outil.ch"
                                }
#line 622 "outil.ch"
#line 623 "outil.ch"
    
#line 623 "outil.ch"
#line 623 "outil.ch"
}
#line 623 "outil.ch"


#line 623 "outil.ch"
#line 623 "outil.ch"

#line 623 "outil.ch"
#endif

#line 623 "outil.ch"
#line 623 "outil.ch"

#line 623 "outil.ch"
#else 
#line 627 "outil.ch"

#line 627 "outil.ch"
void TheConstructor ( PPTREE(&stackTree)[1024], int &ptStackTree, int NodeType, ... )
#line 627 "outil.ch"
{
#line 627 "outil.ch"
#line 627 "outil.ch"
    int _nextVal ;
    
#line 627 "outil.ch"
#line 630 "outil.ch"
    
    register int    arity ;
    
#line 630 "outil.ch"
#line 631 "outil.ch"
    MY_TREE ptTree ;
    
#line 631 "outil.ch"
#line 632 "outil.ch"
    va_list arg_marker ;
    
#line 632 "outil.ch"
#line 634 "outil.ch"
    va_start(arg_marker, NodeType);
#line 634 "outil.ch"
#line 635 "outil.ch"
#if 0
#line 635 "outil.ch"
#line 638 "outil.ch"
    NodeType = (int)va_arg(arg_marker,INT);
#line 638 "outil.ch"
#line 638 "outil.ch"
    
#line 638 "outil.ch"
#endif
    
#line 638 "outil.ch"
#line 640 "outil.ch"
    while ( NodeType != -3 ) {
#line 640 "outil.ch"
#line 641 "outil.ch"
                                    switch ( NodeType ) {
#line 641 "outil.ch"
#line 642 "outil.ch"
                                        case -2 : 
#line 642 "outil.ch"
#line 643 "outil.ch"
                                            PushTree((PPTREE)va_arg(arg_marker,PPTREE));
#line 643 "outil.ch"
#line 644 "outil.ch"
                                            break ;
                                            
#line 644 "outil.ch"
#line 645 "outil.ch"
                                        case -4 : 
#line 645 "outil.ch"
#line 646 "outil.ch"
                                            PushTree((PPTREE)0);
#line 646 "outil.ch"
#line 647 "outil.ch"
                                            break ;
                                            
#line 647 "outil.ch"
#line 649 "outil.ch"
                                        default : 
#line 649 "outil.ch"
#line 649 "outil.ch"
                                            ptTree = MakeTree(NodeType, arity = (int)va_arg(arg_marker,INT));
#line 649 "outil.ch"
#line 650 "outil.ch"
#line 650 "outil.ch"
                                            for (; arity ; arity-- ) 
#line 650 "outil.ch"
#line 651 "outil.ch"
                                                ReplaceTree(ptTree, arity, PopTree);
#line 651 "outil.ch"
                                            
#line 651 "outil.ch"
#line 652 "outil.ch"
                                            PushTree(ptTree);
#line 652 "outil.ch"
#line 653 "outil.ch"
                                            break ;
                                            
#line 653 "outil.ch"
                                    }
#line 653 "outil.ch"
                                    
#line 653 "outil.ch"
#line 655 "outil.ch"
                                    NodeType = (int)va_arg(arg_marker,INT);
#line 655 "outil.ch"
#line 656 "outil.ch"
                                    
#line 656 "outil.ch"
#line 656 "outil.ch"
                                }
#line 656 "outil.ch"
#line 657 "outil.ch"
    
#line 657 "outil.ch"
#line 657 "outil.ch"
}
#line 657 "outil.ch"

#if 0
#line 657 "outil.ch"
#line 660 "outil.ch"
#line 660 "outil.ch"

#line 660 "outil.ch"
void TheConstructor ( int NodeType, ... )
#line 660 "outil.ch"
{
#line 660 "outil.ch"
#line 660 "outil.ch"
    int _nextVal ;
    
#line 660 "outil.ch"
#line 663 "outil.ch"
    
    register int    arity ;
    
#line 663 "outil.ch"
#line 664 "outil.ch"
    MY_TREE ptTree ;
    
#line 664 "outil.ch"
#line 665 "outil.ch"
    va_list arg_marker ;
    
#line 665 "outil.ch"
#line 667 "outil.ch"
    va_start(arg_marker, NodeType);
#line 667 "outil.ch"
#line 668 "outil.ch"
#if 0
#line 668 "outil.ch"
#line 671 "outil.ch"
    NodeType = (int)va_arg(arg_marker,INT);
#line 671 "outil.ch"
#line 671 "outil.ch"
    
#line 671 "outil.ch"
#endif
    
#line 671 "outil.ch"
#line 673 "outil.ch"
    while ( NodeType != -3 ) {
#line 673 "outil.ch"
#line 674 "outil.ch"
                                    switch ( NodeType ) {
#line 674 "outil.ch"
#line 675 "outil.ch"
                                        case -2 : 
#line 675 "outil.ch"
#line 676 "outil.ch"
                                            PushTree((PPTREE)va_arg(arg_marker,PPTREE));
#line 676 "outil.ch"
#line 677 "outil.ch"
                                            break ;
                                            
#line 677 "outil.ch"
#line 678 "outil.ch"
                                        case -4 : 
#line 678 "outil.ch"
#line 679 "outil.ch"
                                            PushTree((PPTREE)0);
#line 679 "outil.ch"
#line 680 "outil.ch"
                                            break ;
                                            
#line 680 "outil.ch"
#line 682 "outil.ch"
                                        default : 
#line 682 "outil.ch"
#line 682 "outil.ch"
                                            ptTree = MakeTree(NodeType, arity = (int)va_arg(arg_marker,INT));
#line 682 "outil.ch"
#line 683 "outil.ch"
#line 683 "outil.ch"
                                            for (; arity ; arity-- ) 
#line 683 "outil.ch"
#line 684 "outil.ch"
                                                ReplaceTree(ptTree, arity, PopTree);
#line 684 "outil.ch"
                                            
#line 684 "outil.ch"
#line 685 "outil.ch"
                                            PushTree(ptTree);
#line 685 "outil.ch"
#line 686 "outil.ch"
                                            break ;
                                            
#line 686 "outil.ch"
                                    }
#line 686 "outil.ch"
                                    
#line 686 "outil.ch"
#line 688 "outil.ch"
                                    NodeType = (int)va_arg(arg_marker,INT);
#line 688 "outil.ch"
#line 689 "outil.ch"
                                    
#line 689 "outil.ch"
#line 689 "outil.ch"
                                }
#line 689 "outil.ch"
#line 690 "outil.ch"
    
#line 690 "outil.ch"
#line 690 "outil.ch"
}
#line 690 "outil.ch"


#line 690 "outil.ch"
#line 690 "outil.ch"

#line 690 "outil.ch"
#endif
#endif

#line 697 "outil.ch"

#line 697 "outil.ch"
void PatchANode ( char *languageName, PTREE the_elem )
#line 697 "outil.ch"
{
#line 697 "outil.ch"
#line 697 "outil.ch"
    int _nextVal ;
    
#line 697 "outil.ch"
#line 700 "outil.ch"
    
    char    *NodeLanguage ;
    
#line 700 "outil.ch"
#line 701 "outil.ch"
    OVER_LANG   *pOverLang ;
    
#line 701 "outil.ch"
#line 703 "outil.ch"
    NodeLanguage = GetNodeLang(the_elem) -> name ;
#line 703 "outil.ch"
#line 704 "outil.ch"
    pOverLang = GetLang(languageName) -> overLang ;
#line 704 "outil.ch"
#line 705 "outil.ch"
#line 705 "outil.ch"
    for (; pOverLang && pOverLang -> name ; pOverLang++ ) 
#line 705 "outil.ch"
#line 706 "outil.ch"
        if ( !strcmp(pOverLang -> name, NodeLanguage) ) {
#line 706 "outil.ch"
#line 707 "outil.ch"
                                                                if ( NumberTree(the_elem) > IN_LANGUAGE && NumberTree(the_elem) != TERM_TREE ) 
#line 707 "outil.ch"
#line 708 "outil.ch"
                                                                    PatchNode(the_elem, GetLang(languageName), NumberTree(the_elem) + pOverLang -> offset);
#line 708 "outil.ch"
                                                                else 
#line 708 "outil.ch"
#line 710 "outil.ch"
                                                                    PatchNode(the_elem, GetLang(languageName), NumberTree(the_elem));
#line 710 "outil.ch"
                                                                
#line 710 "outil.ch"
#line 711 "outil.ch"
                                                                goto nextNode ;
                                                                
#line 711 "outil.ch"
#line 712 "outil.ch"
                                                                
#line 712 "outil.ch"
#line 712 "outil.ch"
                                                             }
#line 712 "outil.ch"
    
#line 712 "outil.ch"
#line 713 "outil.ch"
    pOverLang = GetNodeLang(the_elem) -> overLang ;
#line 713 "outil.ch"
#line 714 "outil.ch"
#line 714 "outil.ch"
    for (; pOverLang && pOverLang -> name ; pOverLang++ ) 
#line 714 "outil.ch"
#line 715 "outil.ch"
        if ( !strcmp(pOverLang -> name, languageName) ) {
#line 715 "outil.ch"
#line 716 "outil.ch"
                                                                if ( NumberTree(the_elem) > IN_LANGUAGE && NumberTree(the_elem) != TERM_TREE ) 
#line 716 "outil.ch"
#line 717 "outil.ch"
                                                                    PatchNode(the_elem, GetLang(languageName), NumberTree(the_elem) - pOverLang -> offset);
#line 717 "outil.ch"
                                                                else 
#line 717 "outil.ch"
#line 719 "outil.ch"
                                                                    PatchNode(the_elem, GetLang(languageName), NumberTree(the_elem));
#line 719 "outil.ch"
                                                                
#line 719 "outil.ch"
#line 720 "outil.ch"
                                                                goto nextNode ;
                                                                
#line 720 "outil.ch"
#line 721 "outil.ch"
                                                                
#line 721 "outil.ch"
#line 721 "outil.ch"
                                                             }
#line 721 "outil.ch"
    
#line 721 "outil.ch"
#line 722 "outil.ch"
nextNode : 
#line 722 "outil.ch"
#line 723 "outil.ch"
    ;
#line 723 "outil.ch"
#line 724 "outil.ch"
    
#line 724 "outil.ch"
#line 724 "outil.ch"
}
#line 724 "outil.ch"

#line 726 "outil.ch"

#line 726 "outil.ch"
void InLang ( char *languageName, PTREE tree )
#line 726 "outil.ch"
{
#line 726 "outil.ch"
#line 726 "outil.ch"
    int _nextVal ;
    
#line 726 "outil.ch"
#line 728 "outil.ch"
    {
#line 728 "outil.ch"
#line 728 "outil.ch"
        int _for_slot = 1, _arity = treearity(tree);
        
#line 728 "outil.ch"
#line 728 "outil.ch"
        MY_TREE _for_elem = (PPTREE)0 ;
        
#line 728 "outil.ch"
#line 728 "outil.ch"
#line 728 "outil.ch"
        for (; _for_slot <= _arity ; _for_slot++ ) {
#line 728 "outil.ch"
#line 728 "outil.ch"
            _for_elem = SonTree(tree, _for_slot);
#line 728 "outil.ch"
#line 728 "outil.ch"
            if ( _for_elem && NumberTree(_for_elem) != IN_LANGUAGE ) {
#line 728 "outil.ch"
#line 728 "outil.ch"
                InLang(languageName, for_elem);
#line 728 "outil.ch"
#line 728 "outil.ch"
                
#line 728 "outil.ch"
#line 728 "outil.ch"
            }
#line 728 "outil.ch"
#line 728 "outil.ch"
            
#line 728 "outil.ch"
#line 728 "outil.ch"
        }
#line 728 "outil.ch"
        
#line 728 "outil.ch"
#line 728 "outil.ch"
        
#line 728 "outil.ch"
#line 728 "outil.ch"
    }
#line 728 "outil.ch"
#line 731 "outil.ch"
    PatchANode(languageName, tree);
#line 731 "outil.ch"
#line 732 "outil.ch"
    
#line 732 "outil.ch"
#line 732 "outil.ch"
}
#line 732 "outil.ch"

static int  currentLine, currentCol ;

#line 739 "outil.ch"

#line 739 "outil.ch"
char *IsPosComment ( const PTREE &comm )
#line 739 "outil.ch"
{
#line 739 "outil.ch"
#line 739 "outil.ch"
    int _nextVal ;
    
#line 739 "outil.ch"
#line 742 "outil.ch"
    
    char    *val = Value(comm);
    
#line 742 "outil.ch"
#line 744 "outil.ch"
    if ( !strncmp(val, POS_STUB, strlen(POS_STUB)) ) 
#line 744 "outil.ch"
#line 745 "outil.ch"
        return val ;
    
#line 745 "outil.ch"
    else 
#line 745 "outil.ch"
#line 747 "outil.ch"
        return (char *)0 ;
        
#line 747 "outil.ch"
    
#line 747 "outil.ch"
#line 748 "outil.ch"
    
#line 748 "outil.ch"
#line 748 "outil.ch"
}
#line 748 "outil.ch"

#line 753 "outil.ch"

#line 753 "outil.ch"
bool IsCommNotPos ( const PTREE &tree, int type )
#line 753 "outil.ch"
{
#line 753 "outil.ch"
#line 753 "outil.ch"
    int _nextVal ;
    
#line 753 "outil.ch"
#line 756 "outil.ch"
    
    PTREE   comm ;
#line 756 "outil.ch"
    
#line 756 "outil.ch"
#line 757 "outil.ch"
    int result = 0 ;
    
#line 757 "outil.ch"
#line 760 "outil.ch"
    while ( ((comm=NextComm(tree, type, comm))) ) {
#line 760 "outil.ch"
#line 761 "outil.ch"
                                                            if ( !IsPosComment(comm) ) {
#line 761 "outil.ch"
#line 764 "outil.ch"
                                                                                            return true ;
                                                                                            
#line 764 "outil.ch"
#line 765 "outil.ch"
                                                                                            
#line 765 "outil.ch"
#line 765 "outil.ch"
                                                                                          }
#line 765 "outil.ch"
#line 766 "outil.ch"
                                                            
#line 766 "outil.ch"
#line 766 "outil.ch"
                                                        }
#line 766 "outil.ch"
#line 769 "outil.ch"
    return false ;
    
#line 769 "outil.ch"
#line 770 "outil.ch"
    
#line 770 "outil.ch"
#line 770 "outil.ch"
}
#line 770 "outil.ch"

#line 775 "outil.ch"

#line 775 "outil.ch"
int GetStartPos ( const PTREE &tree, int *line, int *col, bool opposite )
#line 775 "outil.ch"
{
#line 775 "outil.ch"
#line 775 "outil.ch"
    int _nextVal ;
    
#line 775 "outil.ch"
#line 778 "outil.ch"
    
    PTREE   comm ;
#line 778 "outil.ch"
    
#line 778 "outil.ch"
#line 779 "outil.ch"
    int result = 0 ;
    
#line 779 "outil.ch"
#line 782 "outil.ch"
    while ( ((comm=NextComm(tree, PRE, comm))) ) {
#line 782 "outil.ch"
#line 783 "outil.ch"
                                                        if ( GetPosCommentContent(comm, line, col) ) {
#line 783 "outil.ch"
#line 788 "outil.ch"
                                                                                                            result = 1 ;
#line 788 "outil.ch"
#line 791 "outil.ch"
                                                                                                            if ( opposite ) 
#line 791 "outil.ch"
#line 792 "outil.ch"
                                                                                                                break ;
                                                                                                            
#line 792 "outil.ch"
#line 793 "outil.ch"
                                                                                                            
#line 793 "outil.ch"
#line 793 "outil.ch"
                                                                                                         }
#line 793 "outil.ch"
#line 794 "outil.ch"
                                                        
#line 794 "outil.ch"
#line 794 "outil.ch"
                                                       }
#line 794 "outil.ch"
#line 797 "outil.ch"
    return result ;
    
#line 797 "outil.ch"
#line 798 "outil.ch"
    
#line 798 "outil.ch"
#line 798 "outil.ch"
}
#line 798 "outil.ch"

#line 803 "outil.ch"

#line 803 "outil.ch"
static  int SearchPosInt ( const PTREE &tree, int *line, int *col )
#line 803 "outil.ch"
{
#line 803 "outil.ch"
#line 803 "outil.ch"
    int _nextVal ;
    
#line 803 "outil.ch"
#line 806 "outil.ch"
    {
#line 806 "outil.ch"
#line 806 "outil.ch"
        int _for_slot = 1, _arity = treearity(tree);
        
#line 806 "outil.ch"
#line 806 "outil.ch"
        MY_TREE _for_elem = (PPTREE)0 ;
        
#line 806 "outil.ch"
#line 806 "outil.ch"
#line 806 "outil.ch"
        for (; _for_slot <= _arity ; _for_slot++ ) {
#line 806 "outil.ch"
#line 806 "outil.ch"
            _for_elem = SonTree(tree, _for_slot);
#line 806 "outil.ch"
#line 806 "outil.ch"
            if ( _for_elem && NumberTree(_for_elem) != IN_LANGUAGE ) 
#line 806 "outil.ch"
#line 806 "outil.ch"
                if ( SearchPos(for_elem, line, col) ) {
#line 806 "outil.ch"
#line 806 "outil.ch"
                    return 1 ;
                    
#line 806 "outil.ch"
#line 806 "outil.ch"
                    
#line 806 "outil.ch"
#line 806 "outil.ch"
                }
#line 806 "outil.ch"
#line 806 "outil.ch"
            
#line 806 "outil.ch"
#line 806 "outil.ch"
        }
#line 806 "outil.ch"
        
#line 806 "outil.ch"
#line 806 "outil.ch"
        
#line 806 "outil.ch"
#line 806 "outil.ch"
    }
#line 806 "outil.ch"
#line 811 "outil.ch"
    if ( GetStartPos(tree, line, col) || GetEndPos(tree, line, col) ) 
#line 811 "outil.ch"
#line 812 "outil.ch"
        return 1 ;
    
#line 812 "outil.ch"
#line 813 "outil.ch"
    return 0 ;
    
#line 813 "outil.ch"
#line 814 "outil.ch"
    
#line 814 "outil.ch"
#line 814 "outil.ch"
}
#line 814 "outil.ch"

#line 818 "outil.ch"

#line 818 "outil.ch"
int SearchPos ( const PTREE &tree, int *line, int *col )
#line 818 "outil.ch"
{
#line 818 "outil.ch"
#line 818 "outil.ch"
    int _nextVal ;
    
#line 818 "outil.ch"
#line 821 "outil.ch"
    if ( !GetStartPos(tree, line, col) ) {
#line 821 "outil.ch"
#line 822 "outil.ch"
                                                return SearchPosInt(tree, line, col);
                                                
#line 822 "outil.ch"
#line 823 "outil.ch"
                                                
#line 823 "outil.ch"
#line 823 "outil.ch"
                                              } else 
#line 823 "outil.ch"
#line 824 "outil.ch"
        return 1 ;
        
#line 824 "outil.ch"
    
#line 824 "outil.ch"
#line 825 "outil.ch"
    
#line 825 "outil.ch"
#line 825 "outil.ch"
}
#line 825 "outil.ch"

#line 830 "outil.ch"

#line 830 "outil.ch"
static  int SearchEndPosInt ( const PTREE &tree, int *line, int *col )
#line 830 "outil.ch"
{
#line 830 "outil.ch"
#line 830 "outil.ch"
    int _nextVal ;
    
#line 830 "outil.ch"
#line 833 "outil.ch"
    
    int arity = treearity(tree);
    
#line 833 "outil.ch"
#line 835 "outil.ch"
#line 835 "outil.ch"
    for (; arity > 0 ; arity-- ) {
#line 835 "outil.ch"
#line 836 "outil.ch"
                                        PTREE   son = (PTREE)0 ;
#line 836 "outil.ch"
                                        
#line 836 "outil.ch"
#line 836 "outil.ch"
                                        (son=tree [arity]);
#line 836 "outil.ch"
                                        
#line 836 "outil.ch"
#line 837 "outil.ch"
                                        if ( SearchEndPos(son, line, col) ) {
#line 837 "outil.ch"
#line 838 "outil.ch"
                                                                                    return 1 ;
                                                                                    
#line 838 "outil.ch"
#line 839 "outil.ch"
                                                                                    
#line 839 "outil.ch"
#line 839 "outil.ch"
                                                                                }
#line 839 "outil.ch"
#line 840 "outil.ch"
                                        
#line 840 "outil.ch"
#line 840 "outil.ch"
                                    }
#line 840 "outil.ch"
    
#line 840 "outil.ch"
#line 841 "outil.ch"
    if ( GetEndPos(tree, line, col) || GetStartPos(tree, line, col) ) 
#line 841 "outil.ch"
#line 842 "outil.ch"
        return 1 ;
    
#line 842 "outil.ch"
#line 843 "outil.ch"
    return 0 ;
    
#line 843 "outil.ch"
#line 844 "outil.ch"
    
#line 844 "outil.ch"
#line 844 "outil.ch"
}
#line 844 "outil.ch"

#line 848 "outil.ch"

#line 848 "outil.ch"
int SearchEndPos ( const PTREE &tree, int *line, int *col )
#line 848 "outil.ch"
{
#line 848 "outil.ch"
#line 848 "outil.ch"
    int _nextVal ;
    
#line 848 "outil.ch"
#line 851 "outil.ch"
    if ( !GetEndPos(tree, line, col) ) {
#line 851 "outil.ch"
#line 852 "outil.ch"
                                                return SearchEndPosInt(tree, line, col);
                                                
#line 852 "outil.ch"
#line 853 "outil.ch"
                                                
#line 853 "outil.ch"
#line 853 "outil.ch"
                                            } else 
#line 853 "outil.ch"
#line 854 "outil.ch"
        return 1 ;
        
#line 854 "outil.ch"
    
#line 854 "outil.ch"
#line 855 "outil.ch"
    
#line 855 "outil.ch"
#line 855 "outil.ch"
}
#line 855 "outil.ch"

#line 859 "outil.ch"

#line 859 "outil.ch"
int GetEndPos ( const PTREE &tree, int *line, int *col, bool opposite )
#line 859 "outil.ch"
{
#line 859 "outil.ch"
#line 859 "outil.ch"
    int _nextVal ;
    
#line 859 "outil.ch"
#line 862 "outil.ch"
    
    PTREE   comm ;
#line 862 "outil.ch"
    
#line 862 "outil.ch"
#line 863 "outil.ch"
    int result = 0 ;
    
#line 863 "outil.ch"
#line 866 "outil.ch"
    while ( ((comm=NextComm(tree, POST, comm))) ) {
#line 866 "outil.ch"
#line 867 "outil.ch"
                                                            if ( GetPosCommentContent(comm, line, col) ) {
#line 867 "outil.ch"
#line 870 "outil.ch"
                                                                                                                result = 1 ;
#line 870 "outil.ch"
#line 871 "outil.ch"
                                                                                                                if ( !opposite ) 
#line 871 "outil.ch"
#line 872 "outil.ch"
                                                                                                                    return result ;
                                                                                                                
#line 872 "outil.ch"
#line 873 "outil.ch"
                                                                                                                
#line 873 "outil.ch"
#line 873 "outil.ch"
                                                                                                             }
#line 873 "outil.ch"
#line 874 "outil.ch"
                                                            
#line 874 "outil.ch"
#line 874 "outil.ch"
                                                        }
#line 874 "outil.ch"
#line 877 "outil.ch"
    return result ;
    
#line 877 "outil.ch"
#line 878 "outil.ch"
    
#line 878 "outil.ch"
#line 878 "outil.ch"
}
#line 878 "outil.ch"

#line 882 "outil.ch"

#line 882 "outil.ch"
int GetPosCommentContent ( const PTREE &comm, int *lig, int *col )
#line 882 "outil.ch"
{
#line 882 "outil.ch"
#line 882 "outil.ch"
    int _nextVal ;
    
#line 882 "outil.ch"
#line 885 "outil.ch"
    
    char    *val ;
    
#line 885 "outil.ch"
#line 887 "outil.ch"
    if ( (val = IsPosComment(comm)) ) {
#line 887 "outil.ch"
#line 888 "outil.ch"
                                            sscanf(val, POS_STUB_FORMAT, lig, col);
#line 888 "outil.ch"
#line 889 "outil.ch"
                                            return 1 ;
                                            
#line 889 "outil.ch"
#line 890 "outil.ch"
                                            
#line 890 "outil.ch"
#line 890 "outil.ch"
                                          }
#line 890 "outil.ch"
#line 891 "outil.ch"
    return 0 ;
    
#line 891 "outil.ch"
#line 892 "outil.ch"
    
#line 892 "outil.ch"
#line 892 "outil.ch"
}
#line 892 "outil.ch"

#line 896 "outil.ch"

#line 896 "outil.ch"
void SetPosCommentContent ( const PTREE &comm, int lig, int col )
#line 896 "outil.ch"
{
#line 896 "outil.ch"
#line 896 "outil.ch"
    int _nextVal ;
    
#line 896 "outil.ch"
#line 899 "outil.ch"
    
    PTREE   content = (PTREE)0 ;
#line 899 "outil.ch"
    
#line 899 "outil.ch"
#line 899 "outil.ch"
    (content=SonTree(SonTree(comm, 1), 1));
#line 899 "outil.ch"
    
#line 899 "outil.ch"
#line 901 "outil.ch"
    if ( IsPosComment(content) ) {
#line 901 "outil.ch"
#line 902 "outil.ch"
                                    char    addr [MAXLENGTH];
                                    
#line 902 "outil.ch"
#line 903 "outil.ch"
                                    sprintf(addr, POS_STUB_FORMAT, lig, col);
#line 903 "outil.ch"
#line 904 "outil.ch"
                                    replacetree(content, 1, MakeString(addr));
#line 904 "outil.ch"
#line 905 "outil.ch"
                                    
#line 905 "outil.ch"
#line 905 "outil.ch"
                                   }
#line 905 "outil.ch"
#line 906 "outil.ch"
    
#line 906 "outil.ch"
#line 906 "outil.ch"
}
#line 906 "outil.ch"

#line 910 "outil.ch"

#line 910 "outil.ch"
void SetPos ( const PTREE &tree, int type, int lig, int col )
#line 910 "outil.ch"
{
#line 910 "outil.ch"
    register PPTREE _inter ;
#line 910 "outil.ch"

#line 910 "outil.ch"
#line 910 "outil.ch"
    int _nextVal ;
    
#line 910 "outil.ch"
#line 913 "outil.ch"
    
    char    addr [MAXLENGTH];
    
#line 913 "outil.ch"
#line 914 "outil.ch"
    PTREE   comment ;
#line 914 "outil.ch"
    
#line 914 "outil.ch"
#line 916 "outil.ch"
    if ( !tree ) 
#line 916 "outil.ch"
#line 917 "outil.ch"
        return ;
    
#line 917 "outil.ch"
#line 918 "outil.ch"
    (comment=MakeTree(type, 1));
#line 918 "outil.ch"
    
#line 918 "outil.ch"
#line 919 "outil.ch"
    sprintf(addr, POS_STUB_FORMAT, lig, col);
#line 919 "outil.ch"
#line 920 "outil.ch"
    {
#line 920 "outil.ch"
        PPTREE _ptTree0= (PPTREE) 0,_sonTree0= (PPTREE) 0 ;
#line 920 "outil.ch"
        {
#line 920 "outil.ch"
            PPTREE _ptTree1= (PPTREE) 0,_ptRes1= (PPTREE) 0;
#line 920 "outil.ch"
            _ptRes1 = MakeTree(LIST, 2);
#line 920 "outil.ch"
            _ptTree1 = StoreRef(MakeString(addr));
#line 920 "outil.ch"
            ReplaceTree(_ptRes1, 1, _ptTree1);
#line 920 "outil.ch"
            _ptTree0 = _ptRes1;
#line 920 "outil.ch"
        }
#line 920 "outil.ch"
        ReplaceTree(comment, 1, _ptTree0);
#line 920 "outil.ch"
    }
#line 920 "outil.ch"
    
#line 920 "outil.ch"
#line 921 "outil.ch"
    {
#line 921 "outil.ch"
        PPTREE _ptTree0= (PPTREE) 0,_ptRes0= (PPTREE) 0;
#line 921 "outil.ch"
        _ptRes0 = MakeTree(LIST, 2);
#line 921 "outil.ch"
        ReplaceTree(_ptRes0, 1, comment);
#line 921 "outil.ch"
        comment = _ptRes0;
#line 921 "outil.ch"
    }
#line 921 "outil.ch"
    
#line 921 "outil.ch"
#line 922 "outil.ch"
    PutComm(tree, comment);
#line 922 "outil.ch"
#line 923 "outil.ch"
    
#line 923 "outil.ch"
#line 923 "outil.ch"
}
#line 923 "outil.ch"

#line 927 "outil.ch"

#line 927 "outil.ch"
void AddPos ( const PTREE &tree, int type, int lig, int col )
#line 927 "outil.ch"
{
#line 927 "outil.ch"
    register PPTREE _inter ;
#line 927 "outil.ch"

#line 927 "outil.ch"
#line 927 "outil.ch"
    int _nextVal ;
    
#line 927 "outil.ch"
#line 930 "outil.ch"
    
    char    addr [MAXLENGTH];
    
#line 930 "outil.ch"
#line 931 "outil.ch"
    PTREE   comment ;
#line 931 "outil.ch"
    
#line 931 "outil.ch"
#line 932 "outil.ch"
    PTREE   oldComment ;
#line 932 "outil.ch"
    
#line 932 "outil.ch"
#line 934 "outil.ch"
    if ( !tree ) 
#line 934 "outil.ch"
#line 935 "outil.ch"
        return ;
    
#line 935 "outil.ch"
#line 938 "outil.ch"
    (oldComment=GetComm(tree));
#line 938 "outil.ch"
    
#line 938 "outil.ch"
#line 941 "outil.ch"
    (comment=MakeTree(type, 1));
#line 941 "outil.ch"
    
#line 941 "outil.ch"
#line 942 "outil.ch"
    sprintf(addr, POS_STUB_FORMAT, lig, col);
#line 942 "outil.ch"
#line 943 "outil.ch"
    {
#line 943 "outil.ch"
        PPTREE _ptTree0= (PPTREE) 0,_sonTree0= (PPTREE) 0 ;
#line 943 "outil.ch"
        {
#line 943 "outil.ch"
            PPTREE _ptTree1= (PPTREE) 0,_ptRes1= (PPTREE) 0;
#line 943 "outil.ch"
            _ptRes1 = MakeTree(LIST, 2);
#line 943 "outil.ch"
            _ptTree1 = StoreRef(MakeString(addr));
#line 943 "outil.ch"
            ReplaceTree(_ptRes1, 1, _ptTree1);
#line 943 "outil.ch"
            _ptTree0 = _ptRes1;
#line 943 "outil.ch"
        }
#line 943 "outil.ch"
        ReplaceTree(comment, 1, _ptTree0);
#line 943 "outil.ch"
    }
#line 943 "outil.ch"
    
#line 943 "outil.ch"
#line 944 "outil.ch"
    {
#line 944 "outil.ch"
        PPTREE _ptTree0= (PPTREE) 0,_ptRes0= (PPTREE) 0;
#line 944 "outil.ch"
        _ptRes0 = MakeTree(LIST, 2);
#line 944 "outil.ch"
        ReplaceTree(_ptRes0, 1, comment);
#line 944 "outil.ch"
        ReplaceTree(_ptRes0, 2, oldComment);
#line 944 "outil.ch"
        comment = _ptRes0;
#line 944 "outil.ch"
    }
#line 944 "outil.ch"
    
#line 944 "outil.ch"
#line 947 "outil.ch"
    PutComm(tree, comment);
#line 947 "outil.ch"
#line 948 "outil.ch"
    
#line 948 "outil.ch"
#line 948 "outil.ch"
}
#line 948 "outil.ch"

#line 952 "outil.ch"

#line 952 "outil.ch"
PTREE DestroyComment ( const PTREE &comm )
#line 952 "outil.ch"
{
#line 952 "outil.ch"
#line 952 "outil.ch"
    int _nextVal ;
    
#line 952 "outil.ch"
#line 955 "outil.ch"
    
    int rank = ranktree(comm);
    
#line 955 "outil.ch"
#line 956 "outil.ch"
    PTREE   commRet ;
#line 956 "outil.ch"
    
#line 956 "outil.ch"
#line 957 "outil.ch"
    PTREE   father ;
#line 957 "outil.ch"
    
#line 957 "outil.ch"
#line 959 "outil.ch"
    (father=FatherTree(comm));
#line 959 "outil.ch"
    
#line 959 "outil.ch"
#line 960 "outil.ch"
    if ( !father ) 
#line 960 "outil.ch"
#line 961 "outil.ch"
        return 0 ;
    
#line 961 "outil.ch"
#line 964 "outil.ch"
    if ( rank == 2 ) 
#line 964 "outil.ch"
#line 965 "outil.ch"
        (commRet=father);
#line 965 "outil.ch"
    
#line 965 "outil.ch"
    else 
#line 965 "outil.ch"
#line 967 "outil.ch"
        (commRet=(PTREE)0);
#line 967 "outil.ch"
        
#line 967 "outil.ch"
    
#line 967 "outil.ch"
#line 970 "outil.ch"
    replacetree(father, rank, sontree(comm, 2));
#line 970 "outil.ch"
#line 973 "outil.ch"
    return commRet ;
    
#line 973 "outil.ch"
#line 974 "outil.ch"
    
#line 974 "outil.ch"
#line 974 "outil.ch"
}
#line 974 "outil.ch"

#line 978 "outil.ch"

#line 978 "outil.ch"
void TrimPosComment ( const PTREE &tree )
#line 978 "outil.ch"
{
#line 978 "outil.ch"
    register PPTREE _inter ;
#line 978 "outil.ch"

#line 978 "outil.ch"
#line 978 "outil.ch"
    int _nextVal ;
    
#line 978 "outil.ch"
#line 981 "outil.ch"
    
    PTREE   comm, oldComm, father ;
#line 981 "outil.ch"
    
#line 981 "outil.ch"
#line 982 "outil.ch"
    char    *val ;
    
#line 982 "outil.ch"
#line 983 "outil.ch"
    int preLineMax = -1, preColMax = -1 ;
    
#line 983 "outil.ch"
#line 984 "outil.ch"
    int postLineMin = 32000, postColMin = 32000 ;
    
#line 984 "outil.ch"
#line 985 "outil.ch"
    int line, col ;
    
#line 985 "outil.ch"
#line 986 "outil.ch"
    int lineFather, colFather ;
    
#line 986 "outil.ch"
#line 987 "outil.ch"
    int first ;
    
#line 987 "outil.ch"
#line 988 "outil.ch"
    
    int again ;
    
#line 988 "outil.ch"
#line 994 "outil.ch"
    if ( !tree || NumberTree(tree) == TERM_TREE ) 
#line 994 "outil.ch"
#line 995 "outil.ch"
        return ;
    
#line 995 "outil.ch"
#line 998 "outil.ch"
    if ( ((comm=GetComm(tree))) ) {
#line 998 "outil.ch"
#line 999 "outil.ch"
                                        while ( !(((_inter = (PPTREE)comm,1) && 
#line 999 "outil.ch"
                                                        (!SonTree(_inter,2)) &&
#line 999 "outil.ch"
                                                        1)) ) {
#line 999 "outil.ch"
#line 1000 "outil.ch"
                                                                ((_inter = (PPTREE)comm,1) && 
#line 1000 "outil.ch"
                                                                    ((comm=SonTree(_inter,2)),1) &&
#line 1000 "outil.ch"
                                                                    1);
#line 1000 "outil.ch"
                                                                ;
#line 1000 "outil.ch"
#line 1001 "outil.ch"
                                                                
#line 1001 "outil.ch"
#line 1001 "outil.ch"
                                                              }
#line 1001 "outil.ch"
#line 1002 "outil.ch"
                                        while ( comm != tree ) {
#line 1002 "outil.ch"
#line 1003 "outil.ch"
                                                                    (father=FatherTree(comm));
#line 1003 "outil.ch"
                                                                    
#line 1003 "outil.ch"
#line 1004 "outil.ch"
                                                                    while ( father != tree && !IsPosComment(father) ) 
#line 1004 "outil.ch"
#line 1005 "outil.ch"
                                                                        (father=FatherTree(father));
#line 1005 "outil.ch"
                                                                    
#line 1005 "outil.ch"
#line 1006 "outil.ch"
                                                                    if ( father != tree && GetPosCommentContent(comm, &line, &col) ) {
#line 1006 "outil.ch"
#line 1007 "outil.ch"
                                                                                                                                             GetPosCommentContent(father, &lineFather, &colFather);
#line 1007 "outil.ch"
#line 1008 "outil.ch"
                                                                                                                                             if ( lineFather > line || lineFather == line && colFather > col ) {
#line 1008 "outil.ch"
#line 1009 "outil.ch"
                                                                                                                                                                                                                     DestroyComment(father);
#line 1009 "outil.ch"
#line 1010 "outil.ch"
                                                                                                                                                                                                                     continue ;
                                                                                                                                                                                                                     
#line 1010 "outil.ch"
#line 1011 "outil.ch"
                                                                                                                                                                                                                     
#line 1011 "outil.ch"
#line 1011 "outil.ch"
                                                                                                                                                                                                                     }
#line 1011 "outil.ch"
#line 1012 "outil.ch"
                                                                                                                                             
#line 1012 "outil.ch"
#line 1012 "outil.ch"
                                                                                                                                             }
#line 1012 "outil.ch"
#line 1013 "outil.ch"
                                                                    (comm=father);
#line 1013 "outil.ch"
                                                                    
#line 1013 "outil.ch"
#line 1014 "outil.ch"
                                                                    
#line 1014 "outil.ch"
#line 1014 "outil.ch"
                                                                 }
#line 1014 "outil.ch"
#line 1015 "outil.ch"
                                        
#line 1015 "outil.ch"
#line 1015 "outil.ch"
                                      }
#line 1015 "outil.ch"
#line 1016 "outil.ch"
    (oldComm=(comm=(PTREE)0));
#line 1016 "outil.ch"
    
#line 1016 "outil.ch"
#line 1017 "outil.ch"
    first = 0 ;
#line 1017 "outil.ch"
#line 1018 "outil.ch"
    again = 0 ;
#line 1018 "outil.ch"
#line 1019 "outil.ch"
    while ( ((comm=NextComm(tree, PRE, comm))) ) {
#line 1019 "outil.ch"
#line 1020 "outil.ch"
                                                        if ( GetPosCommentContent(comm, &line, &col) ) {
#line 1020 "outil.ch"
#line 1021 "outil.ch"
                                                                                                                if ( line > preLineMax || line == preLineMax && col > preColMax ) {
#line 1021 "outil.ch"
#line 1022 "outil.ch"
                                                                                                                                                                                        preLineMax = line ;
#line 1022 "outil.ch"
#line 1023 "outil.ch"
                                                                                                                                                                                        preColMax = col ;
#line 1023 "outil.ch"
#line 1026 "outil.ch"
                                                                                                                                                                                        if ( oldComm && !again ) {
#line 1026 "outil.ch"
#line 1027 "outil.ch"
                                                                                                                                                                                                                    DestroyComment(oldComm);
#line 1027 "outil.ch"
#line 1028 "outil.ch"
                                                                                                                                                                                                                    
#line 1028 "outil.ch"
#line 1028 "outil.ch"
                                                                                                                                                                                                                    }
#line 1028 "outil.ch"
#line 1031 "outil.ch"
                                                                                                                                                                                        if ( !again ) 
#line 1031 "outil.ch"
#line 1032 "outil.ch"
                                                                                                                                                                                        (oldComm=comm);
#line 1032 "outil.ch"
                                                                                                                                                                                        
#line 1032 "outil.ch"
                                                                                                                                                                                        else 
#line 1033 "outil.ch"
                                                                                                                                                                                        {
#line 1033 "outil.ch"
#line 1034 "outil.ch"
                                                                                                                                                                                        (oldComm=(PTREE)0);
#line 1034 "outil.ch"
                                                                                                                                                                                        
#line 1034 "outil.ch"
#line 1035 "outil.ch"
                                                                                                                                                                                        again = 0 ;
#line 1035 "outil.ch"
#line 1036 "outil.ch"
                                                                                                                                                                                        
#line 1036 "outil.ch"
#line 1036 "outil.ch"
                                                                                                                                                                                        }
                                                                                                                                                                                        
#line 1036 "outil.ch"
#line 1037 "outil.ch"
                                                                                                                                                                                        first = 1 ;
#line 1037 "outil.ch"
#line 1038 "outil.ch"
                                                                                                                                                                                        
#line 1038 "outil.ch"
#line 1038 "outil.ch"
                                                                                                                                                                                        } else 
#line 1038 "outil.ch"
                                                                                                                {
#line 1038 "outil.ch"
#line 1041 "outil.ch"
                                                                                                                    if ( !again ) {
#line 1041 "outil.ch"
#line 1042 "outil.ch"
                                                                                                                                    (comm=DestroyComment(comm));
#line 1042 "outil.ch"
                                                                                                                                    
#line 1042 "outil.ch"
#line 1043 "outil.ch"
                                                                                                                                    
#line 1043 "outil.ch"
#line 1043 "outil.ch"
                                                                                                                                    } else 
#line 1043 "outil.ch"
                                                                                                                    {
#line 1043 "outil.ch"
#line 1044 "outil.ch"
                                                                                                                        (oldComm=(PTREE)0);
#line 1044 "outil.ch"
                                                                                                                        
#line 1044 "outil.ch"
#line 1045 "outil.ch"
                                                                                                                        again = 0 ;
#line 1045 "outil.ch"
#line 1046 "outil.ch"
                                                                                                                        
#line 1046 "outil.ch"
#line 1046 "outil.ch"
                                                                                                                    }
                                                                                                                    
#line 1046 "outil.ch"
#line 1047 "outil.ch"
                                                                                                                    
#line 1047 "outil.ch"
#line 1047 "outil.ch"
                                                                                                                }
                                                                                                                
#line 1047 "outil.ch"
#line 1048 "outil.ch"
                                                                                                                
#line 1048 "outil.ch"
#line 1048 "outil.ch"
                                                                                                             } else 
#line 1048 "outil.ch"
#line 1049 "outil.ch"
                                                            again = 1 ;
#line 1049 "outil.ch"
                                                        
#line 1049 "outil.ch"
#line 1050 "outil.ch"
                                                        
#line 1050 "outil.ch"
#line 1050 "outil.ch"
                                                       }
#line 1050 "outil.ch"
#line 1051 "outil.ch"
    if ( first ) {
#line 1051 "outil.ch"
#line 1052 "outil.ch"
                    currentLine = preLineMax ;
#line 1052 "outil.ch"
#line 1053 "outil.ch"
                    currentCol = preColMax ;
#line 1053 "outil.ch"
#line 1054 "outil.ch"
                    
#line 1054 "outil.ch"
#line 1054 "outil.ch"
                  }
#line 1054 "outil.ch"
#line 1055 "outil.ch"
    {
#line 1055 "outil.ch"
#line 1055 "outil.ch"
        int _for_slot = 1, _arity = treearity(tree);
        
#line 1055 "outil.ch"
#line 1055 "outil.ch"
        MY_TREE _for_elem = (PPTREE)0 ;
        
#line 1055 "outil.ch"
#line 1055 "outil.ch"
#line 1055 "outil.ch"
        for (; _for_slot <= _arity ; _for_slot++ ) {
#line 1055 "outil.ch"
#line 1055 "outil.ch"
            _for_elem = SonTree(tree, _for_slot);
#line 1055 "outil.ch"
#line 1055 "outil.ch"
            if ( _for_elem && NumberTree(_for_elem) != IN_LANGUAGE ) 
#line 1055 "outil.ch"
#line 1055 "outil.ch"
                TrimPosComment(for_elem);
#line 1055 "outil.ch"
#line 1055 "outil.ch"
            
#line 1055 "outil.ch"
#line 1055 "outil.ch"
        }
#line 1055 "outil.ch"
        
#line 1055 "outil.ch"
#line 1055 "outil.ch"
        
#line 1055 "outil.ch"
#line 1055 "outil.ch"
    }
#line 1055 "outil.ch"
#line 1058 "outil.ch"
    (oldComm=(comm=(PTREE)0));
#line 1058 "outil.ch"
    
#line 1058 "outil.ch"
#line 1059 "outil.ch"
    first = 0 ;
#line 1059 "outil.ch"
#line 1060 "outil.ch"
    again = 0 ;
#line 1060 "outil.ch"
#line 1061 "outil.ch"
    while ( ((comm=NextComm(tree, POST, comm))) ) {
#line 1061 "outil.ch"
#line 1062 "outil.ch"
                                                            if ( GetPosCommentContent(comm, &line, &col) ) {
#line 1062 "outil.ch"
#line 1063 "outil.ch"
                                                                                                                    if ( (line < postLineMin || line == postLineMin && col < postColMin) && (line >= currentLine || line == currentLine && col >= currentCol) ) {
#line 1063 "outil.ch"
#line 1064 "outil.ch"
                                                                                                                                                                                                                                                                              postLineMin = line ;
#line 1064 "outil.ch"
#line 1065 "outil.ch"
                                                                                                                                                                                                                                                                              postColMin = col ;
#line 1065 "outil.ch"
#line 1068 "outil.ch"
                                                                                                                                                                                                                                                                              if ( oldComm && !again ) {
#line 1068 "outil.ch"
#line 1069 "outil.ch"
                                                                                                                                                                                                                                                                                                          DestroyComment(oldComm);
#line 1069 "outil.ch"
#line 1070 "outil.ch"
                                                                                                                                                                                                                                                                                                          
#line 1070 "outil.ch"
#line 1070 "outil.ch"
                                                                                                                                                                                                                                                                                                          }
#line 1070 "outil.ch"
#line 1073 "outil.ch"
                                                                                                                                                                                                                                                                              if ( !again ) 
#line 1073 "outil.ch"
#line 1074 "outil.ch"
                                                                                                                                                                                                                                                                              (oldComm=comm);
#line 1074 "outil.ch"
                                                                                                                                                                                                                                                                              
#line 1074 "outil.ch"
                                                                                                                                                                                                                                                                              else 
#line 1075 "outil.ch"
                                                                                                                                                                                                                                                                              {
#line 1075 "outil.ch"
#line 1076 "outil.ch"
                                                                                                                                                                                                                                                                              again = 0 ;
#line 1076 "outil.ch"
#line 1077 "outil.ch"
                                                                                                                                                                                                                                                                              (oldComm=0);
#line 1077 "outil.ch"
                                                                                                                                                                                                                                                                              
#line 1077 "outil.ch"
#line 1078 "outil.ch"
                                                                                                                                                                                                                                                                              
#line 1078 "outil.ch"
#line 1078 "outil.ch"
                                                                                                                                                                                                                                                                              }
                                                                                                                                                                                                                                                                              
#line 1078 "outil.ch"
#line 1079 "outil.ch"
                                                                                                                                                                                                                                                                              first = 1 ;
#line 1079 "outil.ch"
#line 1080 "outil.ch"
                                                                                                                                                                                                                                                                              
#line 1080 "outil.ch"
#line 1080 "outil.ch"
                                                                                                                                                                                                                                                                              } else 
#line 1080 "outil.ch"
                                                                                                                    {
#line 1080 "outil.ch"
#line 1083 "outil.ch"
                                                                                                                        if ( !again ) {
#line 1083 "outil.ch"
#line 1084 "outil.ch"
                                                                                                                                        (comm=DestroyComment(comm));
#line 1084 "outil.ch"
                                                                                                                                        
#line 1084 "outil.ch"
#line 1085 "outil.ch"
                                                                                                                                        again = 0 ;
#line 1085 "outil.ch"
#line 1086 "outil.ch"
                                                                                                                                        (oldComm=0);
#line 1086 "outil.ch"
                                                                                                                                        
#line 1086 "outil.ch"
#line 1087 "outil.ch"
                                                                                                                                        
#line 1087 "outil.ch"
#line 1087 "outil.ch"
                                                                                                                                        }
#line 1087 "outil.ch"
#line 1088 "outil.ch"
                                                                                                                        
#line 1088 "outil.ch"
#line 1088 "outil.ch"
                                                                                                                    }
                                                                                                                    
#line 1088 "outil.ch"
#line 1089 "outil.ch"
                                                                                                                    
#line 1089 "outil.ch"
#line 1089 "outil.ch"
                                                                                                                 } else 
#line 1089 "outil.ch"
#line 1090 "outil.ch"
                                                                again = 1 ;
#line 1090 "outil.ch"
                                                            
#line 1090 "outil.ch"
#line 1091 "outil.ch"
                                                            
#line 1091 "outil.ch"
#line 1091 "outil.ch"
                                                        }
#line 1091 "outil.ch"
#line 1092 "outil.ch"
    if ( first ) {
#line 1092 "outil.ch"
#line 1093 "outil.ch"
                    currentLine = postLineMin ;
#line 1093 "outil.ch"
#line 1094 "outil.ch"
                    currentCol = postColMin ;
#line 1094 "outil.ch"
#line 1095 "outil.ch"
                    
#line 1095 "outil.ch"
#line 1095 "outil.ch"
                  }
#line 1095 "outil.ch"
#line 1096 "outil.ch"
    
#line 1096 "outil.ch"
#line 1096 "outil.ch"
}
#line 1096 "outil.ch"

#line 1100 "outil.ch"

#line 1100 "outil.ch"
void DestroyPosComment ( const PTREE &tree )
#line 1100 "outil.ch"
{
#line 1100 "outil.ch"
#line 1100 "outil.ch"
    int _nextVal ;
    
#line 1100 "outil.ch"
#line 1103 "outil.ch"
    
    PTREE   comm, oldComm = (PTREE)0, father ;
#line 1103 "outil.ch"
    
#line 1103 "outil.ch"
#line 1103 "outil.ch"
    (oldComm=PTREE((void *)0));
#line 1103 "outil.ch"
    
#line 1103 "outil.ch"
#line 1105 "outil.ch"
    if ( !tree ) 
#line 1105 "outil.ch"
#line 1106 "outil.ch"
        return ;
    
#line 1106 "outil.ch"
#line 1109 "outil.ch"
    while ( ((comm=NextComm(tree, PRE, comm))) ) 
#line 1109 "outil.ch"
#line 1110 "outil.ch"
        if ( IsPosComment(comm) ) {
#line 1110 "outil.ch"
#line 1113 "outil.ch"
                                        if ( oldComm ) 
#line 1113 "outil.ch"
#line 1114 "outil.ch"
                                            DestroyComment(oldComm);
#line 1114 "outil.ch"
#line 1118 "outil.ch"
                                        (oldComm=comm);
#line 1118 "outil.ch"
                                        
#line 1118 "outil.ch"
#line 1119 "outil.ch"
                                        
#line 1119 "outil.ch"
#line 1119 "outil.ch"
                                    }
#line 1119 "outil.ch"
#line 1122 "outil.ch"
    while ( ((comm=NextComm(tree, POST, comm))) ) 
#line 1122 "outil.ch"
#line 1123 "outil.ch"
        if ( IsPosComment(comm) ) {
#line 1123 "outil.ch"
#line 1126 "outil.ch"
                                        if ( oldComm ) 
#line 1126 "outil.ch"
#line 1127 "outil.ch"
                                            DestroyComment(oldComm);
#line 1127 "outil.ch"
#line 1131 "outil.ch"
                                        (oldComm=comm);
#line 1131 "outil.ch"
                                        
#line 1131 "outil.ch"
#line 1132 "outil.ch"
                                        
#line 1132 "outil.ch"
#line 1132 "outil.ch"
                                    }
#line 1132 "outil.ch"
#line 1135 "outil.ch"
    if ( oldComm ) 
#line 1135 "outil.ch"
#line 1136 "outil.ch"
        DestroyComment(oldComm);
#line 1136 "outil.ch"
#line 1137 "outil.ch"
    
#line 1137 "outil.ch"
#line 1137 "outil.ch"
}
#line 1137 "outil.ch"

#line 1139 "outil.ch"

#line 1139 "outil.ch"
void DestroyPosCommentRec ( const PTREE &tree )
#line 1139 "outil.ch"
{
#line 1139 "outil.ch"
#line 1139 "outil.ch"
    int _nextVal ;
    
#line 1139 "outil.ch"
#line 1141 "outil.ch"
    {
#line 1141 "outil.ch"
#line 1141 "outil.ch"
        ItPtree _iterator1 (tree, (PPTREE) 0) ;
        
#line 1141 "outil.ch"
#line 1141 "outil.ch"
        PPTREE  _for_elem ;
        
#line 1141 "outil.ch"
#line 1141 "outil.ch"
        _iterator1.AllSearch(1);
#line 1141 "outil.ch"
#line 1141 "outil.ch"
        while ( _for_elem = _iterator1++ ) {
#line 1141 "outil.ch"
#line 1141 "outil.ch"
            {
#line 1141 "outil.ch"
#line 1142 "outil.ch"
                DestroyPosComment(for_elem);
#line 1142 "outil.ch"
#line 1143 "outil.ch"
                
#line 1143 "outil.ch"
#line 1143 "outil.ch"
            }
            
#line 1143 "outil.ch"
#line 1143 "outil.ch"
            _iterator1.Current(_for_elem);
#line 1143 "outil.ch"
#line 1143 "outil.ch"
            continue ;
            
#line 1143 "outil.ch"
#line 1143 "outil.ch"
        for_continue1 : 
#line 1143 "outil.ch"
#line 1143 "outil.ch"
            _iterator1.Current(_for_elem);
#line 1143 "outil.ch"
#line 1143 "outil.ch"
            _iterator1.SkipSon(1);
#line 1143 "outil.ch"
#line 1143 "outil.ch"
            continue ;
            
#line 1143 "outil.ch"
#line 1143 "outil.ch"
        for_break1 : 
#line 1143 "outil.ch"
#line 1143 "outil.ch"
            break ;
            
#line 1143 "outil.ch"
#line 1143 "outil.ch"
            
#line 1143 "outil.ch"
#line 1143 "outil.ch"
        }
#line 1143 "outil.ch"
#line 1143 "outil.ch"
        
#line 1143 "outil.ch"
#line 1143 "outil.ch"
    }
    
#line 1143 "outil.ch"
#line 1144 "outil.ch"
    
#line 1144 "outil.ch"
#line 1144 "outil.ch"
}
#line 1144 "outil.ch"

static int  NbTree ;

static int  NbDump ;

bool    theConstructorDump = false ;

#line 1150 "outil.ch"

#line 1150 "outil.ch"
void MakeTreeGenDirRec ( PTREE &paramTree, int nbTreeParam )
#line 1150 "outil.ch"
{
#line 1150 "outil.ch"
    register PPTREE _inter ;
#line 1150 "outil.ch"

#line 1150 "outil.ch"
#line 1150 "outil.ch"
    int _nextVal ;
    
#line 1150 "outil.ch"
#line 1152 "outil.ch"
    
    int nbParam, currParam, gennode ;
    
#line 1152 "outil.ch"
#line 1153 "outil.ch"
    char    myString [5];
    
#line 1153 "outil.ch"
#line 1154 "outil.ch"
    PTREE   son ;
#line 1154 "outil.ch"
    
#line 1154 "outil.ch"
#line 1156 "outil.ch"
    theConstructorDump = true ;
#line 1156 "outil.ch"
#line 1157 "outil.ch"
    if ( nbTreeParam ) {
#line 1157 "outil.ch"
#line 1158 "outil.ch"
                            Mark();
#line 1158 "outil.ch"
#line 1159 "outil.ch"
                            PrintString("TheConstructor(stackTree,ptStackTree,");
#line 1159 "outil.ch"
#line 1160 "outil.ch"
                            NbTree = nbTreeParam ;
#line 1160 "outil.ch"
#line 1161 "outil.ch"
                            NbDump = 0 ;
#line 1161 "outil.ch"
#line 1162 "outil.ch"
                            MakeTreeGenDirRec(paramTree);
#line 1162 "outil.ch"
#line 1163 "outil.ch"
                            PrintString("-3) ;");
#line 1163 "outil.ch"
#line 1163 "outil.ch"
                            LNewLine(1);
#line 1163 "outil.ch"
                            
#line 1163 "outil.ch"
#line 1164 "outil.ch"
                            UnMark();
#line 1164 "outil.ch"
#line 1165 "outil.ch"
                            return ;
                            
#line 1165 "outil.ch"
#line 1166 "outil.ch"
                            
#line 1166 "outil.ch"
#line 1166 "outil.ch"
                        }
#line 1166 "outil.ch"
#line 1167 "outil.ch"
    if ( NbTree == 50 ) {
#line 1167 "outil.ch"
#line 1168 "outil.ch"
                            PrintString("-3);");
#line 1168 "outil.ch"
#line 1168 "outil.ch"
                            LNewLine(1);
#line 1168 "outil.ch"
                            
#line 1168 "outil.ch"
#line 1169 "outil.ch"
                            PrintString("TheConstructor(stackTree,ptStackTree,");
#line 1169 "outil.ch"
#line 1170 "outil.ch"
                            NbTree = 0 ;
#line 1170 "outil.ch"
#line 1171 "outil.ch"
                            
#line 1171 "outil.ch"
#line 1171 "outil.ch"
                          } else 
#line 1171 "outil.ch"
#line 1172 "outil.ch"
        NbTree++ ;
#line 1172 "outil.ch"
    
#line 1172 "outil.ch"
#line 1173 "outil.ch"
    if ( NbDump == 9 ) {
#line 1173 "outil.ch"
#line 1174 "outil.ch"
                            LNewLine(1);
#line 1174 "outil.ch"
                            
#line 1174 "outil.ch"
#line 1175 "outil.ch"
                            Tab();
#line 1175 "outil.ch"
                            
#line 1175 "outil.ch"
#line 1176 "outil.ch"
                            NbDump = 0 ;
#line 1176 "outil.ch"
#line 1177 "outil.ch"
                            
#line 1177 "outil.ch"
#line 1177 "outil.ch"
                         } else 
#line 1177 "outil.ch"
#line 1178 "outil.ch"
        NbDump++ ;
#line 1178 "outil.ch"
    
#line 1178 "outil.ch"
#line 1179 "outil.ch"
    if ( ((_inter = (PPTREE)paramTree,1) && 
#line 1179 "outil.ch"
            (NumberTree(_inter) == TERM_TREE) &&
#line 1179 "outil.ch"
            1) ) {
#line 1179 "outil.ch"
#line 1180 "outil.ch"
                    PrintString("-2,");
#line 1180 "outil.ch"
                    PrintString("MakeString(\"");
#line 1180 "outil.ch"
#line 1181 "outil.ch"
                    DumpBrainyValue(paramTree);
#line 1181 "outil.ch"
#line 1182 "outil.ch"
                    PrintString("\"),");
#line 1182 "outil.ch"
#line 1183 "outil.ch"
                    return ;
                    
#line 1183 "outil.ch"
#line 1184 "outil.ch"
                    
#line 1184 "outil.ch"
#line 1184 "outil.ch"
                 } else 
#line 1184 "outil.ch"
    if ( NumberTree(paramTree) == CLASS_TREE ) {
#line 1184 "outil.ch"
#line 1185 "outil.ch"
                                                    PrintString("-2,");
#line 1185 "outil.ch"
#line 1186 "outil.ch"
                                                    char    *toBeDumped = (char *)APPLY_CLASS(paramTree, TreeClass, DumpTree());
                                                    
#line 1186 "outil.ch"
#line 1187 "outil.ch"
                                                    WriteString(toBeDumped);
#line 1187 "outil.ch"
#line 1187 "outil.ch"
                                                    WriteString(",");
#line 1187 "outil.ch"
#line 1188 "outil.ch"
                                                    return ;
                                                    
#line 1188 "outil.ch"
#line 1189 "outil.ch"
                                                    
#line 1189 "outil.ch"
#line 1189 "outil.ch"
                                                  }
#line 1189 "outil.ch"
#line 1190 "outil.ch"
    nbParam = treearity(paramTree);
#line 1190 "outil.ch"
#line 1191 "outil.ch"
    currParam = 1 ;
#line 1191 "outil.ch"
#line 1192 "outil.ch"
    while ( currParam <= nbParam ) {
#line 1192 "outil.ch"
#line 1193 "outil.ch"
                                        (son=SonTree(paramTree, currParam));
#line 1193 "outil.ch"
                                        
#line 1193 "outil.ch"
#line 1194 "outil.ch"
                                        if ( !((!son)) ) 
#line 1194 "outil.ch"
#line 1195 "outil.ch"
                                            MakeTreeGenDirRec(son);
#line 1195 "outil.ch"
                                        else 
#line 1195 "outil.ch"
#line 1197 "outil.ch"
                                            PrintString("-4,");
#line 1197 "outil.ch"
                                        
#line 1197 "outil.ch"
#line 1198 "outil.ch"
                                        currParam++ ;
#line 1198 "outil.ch"
#line 1199 "outil.ch"
                                        
#line 1199 "outil.ch"
#line 1199 "outil.ch"
                                     }
#line 1199 "outil.ch"
#line 1200 "outil.ch"
    _itoa(nbParam, myString, 10);
#line 1200 "outil.ch"
#line 1201 "outil.ch"
    WriteString(NameConst(NumberTree(paramTree)));
#line 1201 "outil.ch"
#line 1201 "outil.ch"
    PrintString(",");
#line 1201 "outil.ch"
#line 1201 "outil.ch"
    WriteString(myString);
#line 1201 "outil.ch"
#line 1201 "outil.ch"
    PrintString(",");
#line 1201 "outil.ch"
#line 1202 "outil.ch"
    
#line 1202 "outil.ch"
#line 1202 "outil.ch"
}
#line 1202 "outil.ch"

#line 1202 "outil.ch"
#line 1202 "outil.ch"
static void outil_Anchor () { int i = 1;} 
#line 1202 "outil.ch"
/*Well done my boy */ 
#line 1202 "outil.ch"

