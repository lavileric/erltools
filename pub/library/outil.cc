
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
                                                                                                            slot =  1 ;
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
    nbTree2 =  NumberTree(tree2);
#line 105 "outil.ch"
#line 106 "outil.ch"
    if ( nbTree1 == CLASS_TREE ) 
#line 106 "outil.ch"
#line 107 "outil.ch"
        nbTree1 =  TERM_TREE ;
#line 107 "outil.ch"
#line 108 "outil.ch"
    if ( nbTree2 == CLASS_TREE ) 
#line 108 "outil.ch"
#line 109 "outil.ch"
        nbTree2 =  TERM_TREE ;
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
                                                                                        tree1 =  sontree(tree1, 1);
#line 122 "outil.ch"
#line 123 "outil.ch"
                                                                                        tree2 =  sontree(tree2, 1);
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
                            myPoint =  listFreeVar ;
#line 140 "outil.ch"
#line 141 "outil.ch"
                            listFreeVar =  listFreeVar -> next ;
#line 141 "outil.ch"
#line 142 "outil.ch"
                            
#line 142 "outil.ch"
#line 142 "outil.ch"
                        } else 
#line 142 "outil.ch"
#line 143 "outil.ch"
        myPoint =  (PVAR)malloc(sizeof(VAR));
#line 143 "outil.ch"
    
#line 143 "outil.ch"
#line 144 "outil.ch"
    myPoint -> name =  (char *)0 ;
#line 144 "outil.ch"
#line 145 "outil.ch"
    myPoint -> father =  (PPTREE)0 ;
#line 145 "outil.ch"
#line 146 "outil.ch"
    myPoint -> slot =  -1 ;
#line 146 "outil.ch"
#line 147 "outil.ch"
    myPoint -> elem =  (PPTREE)0 ;
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
    interVar =  frontVar = listVar ;
#line 158 "outil.ch"
#line 159 "outil.ch"
    while ( frontVar ) {
#line 159 "outil.ch"
#line 160 "outil.ch"
                            interVar =  frontVar ;
#line 160 "outil.ch"
#line 161 "outil.ch"
                            free(frontVar -> name);
#line 161 "outil.ch"
#line 162 "outil.ch"
                            frontVar =  frontVar -> next ;
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
                                    interVar -> next =  listFreeVar ;
#line 165 "outil.ch"
#line 166 "outil.ch"
                                    listFreeVar =  listVar ;
#line 166 "outil.ch"
#line 167 "outil.ch"
                                    listVar =  (PVAR)0 ;
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
    pVar =  AllocVar();
#line 178 "outil.ch"
#line 179 "outil.ch"
    pVar -> name =  name ;
#line 179 "outil.ch"
#line 180 "outil.ch"
    pVar -> father =  father ;
#line 180 "outil.ch"
#line 181 "outil.ch"
    pVar -> slot =  slot ;
#line 181 "outil.ch"
#line 182 "outil.ch"
    pVar -> elem =  elem ;
#line 182 "outil.ch"
#line 183 "outil.ch"
    pVar -> next =  listVar ;
#line 183 "outil.ch"
#line 184 "outil.ch"
    listVar =  pVar ;
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
                        pVar =  pVar -> next ;
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
                                                arity =  treearity(operand);
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
                                                                        position =  arity ;
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
        nbsubstitution =  1 ;
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
        PTREE   _for_elem ;
#line 303 "outil.ch"
        
#line 303 "outil.ch"
#line 303 "outil.ch"
        _iterator1.AllSearch(1);
#line 303 "outil.ch"
#line 303 "outil.ch"
        while ( (_for_elem=_iterator1++) ) {
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
        PTREE   _for_elem ;
#line 317 "outil.ch"
        
#line 317 "outil.ch"
#line 317 "outil.ch"
        _iterator1.AllSearch(1);
#line 317 "outil.ch"
#line 317 "outil.ch"
        while ( (_for_elem=_iterator1++) ) {
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
        PTREE   _for_elem ;
#line 332 "outil.ch"
        
#line 332 "outil.ch"
#line 332 "outil.ch"
        _iterator1.AllSearch(1);
#line 332 "outil.ch"
#line 332 "outil.ch"
        while ( (_for_elem=_iterator1++) ) {
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
                                                                        firstReplace =  0 ;
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

#line 348 "outil.ch"

#line 348 "outil.ch"
void CLDumpTree ( PPTREE treeParam )
#line 348 "outil.ch"
{
#line 348 "outil.ch"
#line 348 "outil.ch"
    int _nextVal ;
    
#line 348 "outil.ch"
#line 351 "outil.ch"
    
    PTREE   tree (treeParam) ;
#line 351 "outil.ch"
    
#line 351 "outil.ch"
#line 353 "outil.ch"
    tree.CLDumpTree();
#line 353 "outil.ch"
#line 354 "outil.ch"
    
#line 354 "outil.ch"
#line 354 "outil.ch"
}
#line 354 "outil.ch"

#line 356 "outil.ch"

#line 356 "outil.ch"
void LDumpTree ( PPTREE treeParam )
#line 356 "outil.ch"
{
#line 356 "outil.ch"
#line 356 "outil.ch"
    int _nextVal ;
    
#line 356 "outil.ch"
#line 358 "outil.ch"
    PTREE(treeParam).LDumpTree();
#line 358 "outil.ch"
#line 359 "outil.ch"
    
#line 359 "outil.ch"
#line 359 "outil.ch"
}
#line 359 "outil.ch"

#line 361 "outil.ch"

#line 361 "outil.ch"
void DumpTree ( PPTREE treeParam )
#line 361 "outil.ch"
{
#line 361 "outil.ch"
#line 361 "outil.ch"
    int _nextVal ;
    
#line 361 "outil.ch"
#line 364 "outil.ch"
    PTREE(treeParam).DumpTree();
#line 364 "outil.ch"
#line 365 "outil.ch"
    
#line 365 "outil.ch"
#line 365 "outil.ch"
}
#line 365 "outil.ch"

#line 367 "outil.ch"

#line 367 "outil.ch"
void MDumpTree ( PPTREE tree, int pageNum )
#line 367 "outil.ch"
{
#line 367 "outil.ch"
#line 367 "outil.ch"
    int _nextVal ;
    
#line 367 "outil.ch"
#line 370 "outil.ch"
    PTREE(tree).MDumpTree(pageNum);
#line 370 "outil.ch"
#line 371 "outil.ch"
    
#line 371 "outil.ch"
#line 371 "outil.ch"
}
#line 371 "outil.ch"

#line 373 "outil.ch"

#line 373 "outil.ch"
void DumpNode ( PPTREE tree )
#line 373 "outil.ch"
{
#line 373 "outil.ch"
#line 373 "outil.ch"
    int _nextVal ;
    
#line 373 "outil.ch"
#line 375 "outil.ch"
    PTREE(tree).DumpNode();
#line 375 "outil.ch"
#line 376 "outil.ch"
    
#line 376 "outil.ch"
#line 376 "outil.ch"
}
#line 376 "outil.ch"

#undef LNewLine

#define INT int

#if !defined(VARARGS_2)
#line 376 "outil.ch"
#line 386 "outil.ch"
#line 386 "outil.ch"

#line 386 "outil.ch"
void TheConstructor ( PPTREE(&stackTree)[1024], int &ptStackTree, int va_alist, ... )
#line 386 "outil.ch"
{
#line 386 "outil.ch"
#line 386 "outil.ch"
    int _nextVal ;
    
#line 386 "outil.ch"
#line 388 "outil.ch"
    
    register int    arity ;
    
#line 388 "outil.ch"
#line 389 "outil.ch"
    int NodeType ;
    
#line 389 "outil.ch"
#line 390 "outil.ch"
    MY_TREE ptTree ;
    
#line 390 "outil.ch"
#line 391 "outil.ch"
    va_list arg_marker ;
    
#line 391 "outil.ch"
#line 393 "outil.ch"
    va_start(arg_marker);
#line 393 "outil.ch"
#line 394 "outil.ch"
    NodeType =  (int)va_arg(arg_marker,INT);
#line 394 "outil.ch"
#line 395 "outil.ch"
    while ( NodeType != -3 ) {
#line 395 "outil.ch"
#line 396 "outil.ch"
                                    switch ( NodeType ) {
#line 396 "outil.ch"
#line 397 "outil.ch"
                                        case -2 : 
#line 397 "outil.ch"
#line 398 "outil.ch"
                                            PushTree((PPTREE)va_arg(arg_marker,PPTREE));
#line 398 "outil.ch"
#line 399 "outil.ch"
                                            break ;
                                            
#line 399 "outil.ch"
#line 400 "outil.ch"
                                        case -4 : 
#line 400 "outil.ch"
#line 401 "outil.ch"
                                            PushTree((PPTREE)0);
#line 401 "outil.ch"
#line 402 "outil.ch"
                                            break ;
                                            
#line 402 "outil.ch"
#line 404 "outil.ch"
                                        default : 
#line 404 "outil.ch"
#line 404 "outil.ch"
                                            ptTree = MakeTree(NodeType, arity = (int)va_arg(arg_marker,INT));
#line 404 "outil.ch"
#line 405 "outil.ch"
#line 405 "outil.ch"
                                            for (; arity ; arity-- ) 
#line 405 "outil.ch"
#line 406 "outil.ch"
                                                ReplaceTree(ptTree, arity, PopTree);
#line 406 "outil.ch"
                                            
#line 406 "outil.ch"
#line 407 "outil.ch"
                                            PushTree(ptTree);
#line 407 "outil.ch"
#line 408 "outil.ch"
                                            break ;
                                            
#line 408 "outil.ch"
                                    }
#line 408 "outil.ch"
                                    
#line 408 "outil.ch"
#line 410 "outil.ch"
                                    NodeType =  (int)va_arg(arg_marker,INT);
#line 410 "outil.ch"
#line 411 "outil.ch"
                                    
#line 411 "outil.ch"
#line 411 "outil.ch"
                                }
#line 411 "outil.ch"
#line 412 "outil.ch"
    
#line 412 "outil.ch"
#line 412 "outil.ch"
}
#line 412 "outil.ch"


#line 412 "outil.ch"
#line 414 "outil.ch"
#if 0
#line 414 "outil.ch"
#line 415 "outil.ch"
#line 415 "outil.ch"

#line 415 "outil.ch"
void TheConstructor ( int va_alist, ... )
#line 415 "outil.ch"
{
#line 415 "outil.ch"
#line 415 "outil.ch"
    int _nextVal ;
    
#line 415 "outil.ch"
#line 417 "outil.ch"
    
    register int    arity ;
    
#line 417 "outil.ch"
#line 418 "outil.ch"
    int NodeType ;
    
#line 418 "outil.ch"
#line 419 "outil.ch"
    MY_TREE ptTree ;
    
#line 419 "outil.ch"
#line 420 "outil.ch"
    va_list arg_marker ;
    
#line 420 "outil.ch"
#line 422 "outil.ch"
    va_start(arg_marker);
#line 422 "outil.ch"
#line 423 "outil.ch"
    NodeType =  (int)va_arg(arg_marker,INT);
#line 423 "outil.ch"
#line 424 "outil.ch"
    while ( NodeType != -3 ) {
#line 424 "outil.ch"
#line 425 "outil.ch"
                                    switch ( NodeType ) {
#line 425 "outil.ch"
#line 426 "outil.ch"
                                        case -2 : 
#line 426 "outil.ch"
#line 427 "outil.ch"
                                            PushTree((PPTREE)va_arg(arg_marker,PPTREE));
#line 427 "outil.ch"
#line 428 "outil.ch"
                                            break ;
                                            
#line 428 "outil.ch"
#line 429 "outil.ch"
                                        case -4 : 
#line 429 "outil.ch"
#line 430 "outil.ch"
                                            PushTree((PPTREE)0);
#line 430 "outil.ch"
#line 431 "outil.ch"
                                            break ;
                                            
#line 431 "outil.ch"
#line 433 "outil.ch"
                                        default : 
#line 433 "outil.ch"
#line 433 "outil.ch"
                                            ptTree = MakeTree(NodeType, arity = (int)va_arg(arg_marker,INT));
#line 433 "outil.ch"
#line 434 "outil.ch"
#line 434 "outil.ch"
                                            for (; arity ; arity-- ) 
#line 434 "outil.ch"
#line 435 "outil.ch"
                                                ReplaceTree(ptTree, arity, PopTree);
#line 435 "outil.ch"
                                            
#line 435 "outil.ch"
#line 436 "outil.ch"
                                            PushTree(ptTree);
#line 436 "outil.ch"
#line 437 "outil.ch"
                                            break ;
                                            
#line 437 "outil.ch"
                                    }
#line 437 "outil.ch"
                                    
#line 437 "outil.ch"
#line 439 "outil.ch"
                                    NodeType =  (int)va_arg(arg_marker,INT);
#line 439 "outil.ch"
#line 440 "outil.ch"
                                    
#line 440 "outil.ch"
#line 440 "outil.ch"
                                }
#line 440 "outil.ch"
#line 441 "outil.ch"
    
#line 441 "outil.ch"
#line 441 "outil.ch"
}
#line 441 "outil.ch"


#line 441 "outil.ch"
#line 441 "outil.ch"

#line 441 "outil.ch"
#endif

#line 441 "outil.ch"
#line 441 "outil.ch"

#line 441 "outil.ch"
#else 
#line 445 "outil.ch"
    
#line 445 "outil.ch"
    void TheConstructor ( PPTREE(&stackTree)[1024], int &ptStackTree, int NodeType, ... )
#line 445 "outil.ch"
    {
#line 445 "outil.ch"
#line 445 "outil.ch"
        int _nextVal ;
        
#line 445 "outil.ch"
#line 448 "outil.ch"
        
        register int    arity ;
        
#line 448 "outil.ch"
#line 449 "outil.ch"
        MY_TREE ptTree ;
        
#line 449 "outil.ch"
#line 450 "outil.ch"
        va_list arg_marker ;
        
#line 450 "outil.ch"
#line 452 "outil.ch"
        va_start(arg_marker, NodeType);
#line 452 "outil.ch"
#line 453 "outil.ch"
#if 0
#line 453 "outil.ch"
#line 456 "outil.ch"
        NodeType =  (int)va_arg(arg_marker,INT);
#line 456 "outil.ch"
#line 456 "outil.ch"
        
#line 456 "outil.ch"
#       endif
        
#line 456 "outil.ch"
#line 458 "outil.ch"
        while ( NodeType != -3 ) {
#line 458 "outil.ch"
#line 459 "outil.ch"
                                        switch ( NodeType ) {
#line 459 "outil.ch"
#line 460 "outil.ch"
                                            case -2 : 
#line 460 "outil.ch"
#line 461 "outil.ch"
                                                PushTree((PPTREE)va_arg(arg_marker,PPTREE));
#line 461 "outil.ch"
#line 462 "outil.ch"
                                                break ;
                                                
#line 462 "outil.ch"
#line 463 "outil.ch"
                                            case -4 : 
#line 463 "outil.ch"
#line 464 "outil.ch"
                                                PushTree((PPTREE)0);
#line 464 "outil.ch"
#line 465 "outil.ch"
                                                break ;
                                                
#line 465 "outil.ch"
#line 467 "outil.ch"
                                            default : 
#line 467 "outil.ch"
#line 467 "outil.ch"
                                                ptTree = MakeTree(NodeType, arity = (int)va_arg(arg_marker,INT));
#line 467 "outil.ch"
#line 468 "outil.ch"
#line 468 "outil.ch"
                                                for (; arity ; arity-- ) 
#line 468 "outil.ch"
#line 469 "outil.ch"
                                                    ReplaceTree(ptTree, arity, PopTree);
#line 469 "outil.ch"
                                                
#line 469 "outil.ch"
#line 470 "outil.ch"
                                                PushTree(ptTree);
#line 470 "outil.ch"
#line 471 "outil.ch"
                                                break ;
                                                
#line 471 "outil.ch"
                                        }
#line 471 "outil.ch"
                                        
#line 471 "outil.ch"
#line 473 "outil.ch"
                                        NodeType =  (int)va_arg(arg_marker,INT);
#line 473 "outil.ch"
#line 474 "outil.ch"
                                        
#line 474 "outil.ch"
#line 474 "outil.ch"
                                    }
#line 474 "outil.ch"
#line 475 "outil.ch"
        
#line 475 "outil.ch"
#line 475 "outil.ch"
    }
#line 475 "outil.ch"
    
#if 0
#line 475 "outil.ch"
#line 478 "outil.ch"
#line 478 "outil.ch"
    
#line 478 "outil.ch"
    void TheConstructor ( int NodeType, ... )
#line 478 "outil.ch"
    {
#line 478 "outil.ch"
#line 478 "outil.ch"
        int _nextVal ;
        
#line 478 "outil.ch"
#line 481 "outil.ch"
        
        register int    arity ;
        
#line 481 "outil.ch"
#line 482 "outil.ch"
        MY_TREE ptTree ;
        
#line 482 "outil.ch"
#line 483 "outil.ch"
        va_list arg_marker ;
        
#line 483 "outil.ch"
#line 485 "outil.ch"
        va_start(arg_marker, NodeType);
#line 485 "outil.ch"
#line 486 "outil.ch"
#if 0
#line 486 "outil.ch"
#line 489 "outil.ch"
        NodeType =  (int)va_arg(arg_marker,INT);
#line 489 "outil.ch"
#line 489 "outil.ch"
        
#line 489 "outil.ch"
#       endif
        
#line 489 "outil.ch"
#line 491 "outil.ch"
        while ( NodeType != -3 ) {
#line 491 "outil.ch"
#line 492 "outil.ch"
                                        switch ( NodeType ) {
#line 492 "outil.ch"
#line 493 "outil.ch"
                                            case -2 : 
#line 493 "outil.ch"
#line 494 "outil.ch"
                                                PushTree((PPTREE)va_arg(arg_marker,PPTREE));
#line 494 "outil.ch"
#line 495 "outil.ch"
                                                break ;
                                                
#line 495 "outil.ch"
#line 496 "outil.ch"
                                            case -4 : 
#line 496 "outil.ch"
#line 497 "outil.ch"
                                                PushTree((PPTREE)0);
#line 497 "outil.ch"
#line 498 "outil.ch"
                                                break ;
                                                
#line 498 "outil.ch"
#line 500 "outil.ch"
                                            default : 
#line 500 "outil.ch"
#line 500 "outil.ch"
                                                ptTree = MakeTree(NodeType, arity = (int)va_arg(arg_marker,INT));
#line 500 "outil.ch"
#line 501 "outil.ch"
#line 501 "outil.ch"
                                                for (; arity ; arity-- ) 
#line 501 "outil.ch"
#line 502 "outil.ch"
                                                    ReplaceTree(ptTree, arity, PopTree);
#line 502 "outil.ch"
                                                
#line 502 "outil.ch"
#line 503 "outil.ch"
                                                PushTree(ptTree);
#line 503 "outil.ch"
#line 504 "outil.ch"
                                                break ;
                                                
#line 504 "outil.ch"
                                        }
#line 504 "outil.ch"
                                        
#line 504 "outil.ch"
#line 506 "outil.ch"
                                        NodeType =  (int)va_arg(arg_marker,INT);
#line 506 "outil.ch"
#line 507 "outil.ch"
                                        
#line 507 "outil.ch"
#line 507 "outil.ch"
                                    }
#line 507 "outil.ch"
#line 508 "outil.ch"
        
#line 508 "outil.ch"
#line 508 "outil.ch"
    }
#line 508 "outil.ch"
    
    
#line 508 "outil.ch"
#line 508 "outil.ch"
    
#line 508 "outil.ch"
#   endif
#endif

#line 515 "outil.ch"

#line 515 "outil.ch"
void PatchANode ( char *languageName, PTREE the_elem )
#line 515 "outil.ch"
{
#line 515 "outil.ch"
#line 515 "outil.ch"
    int _nextVal ;
    
#line 515 "outil.ch"
#line 518 "outil.ch"
    
    char    *NodeLanguage ;
    
#line 518 "outil.ch"
#line 519 "outil.ch"
    OVER_LANG   *pOverLang ;
    
#line 519 "outil.ch"
#line 521 "outil.ch"
    NodeLanguage =  GetNodeLang(the_elem) -> name ;
#line 521 "outil.ch"
#line 522 "outil.ch"
    pOverLang =  GetLang(languageName) -> overLang ;
#line 522 "outil.ch"
#line 523 "outil.ch"
#line 523 "outil.ch"
    for (; pOverLang && pOverLang -> name ; pOverLang++ ) 
#line 523 "outil.ch"
#line 524 "outil.ch"
        if ( !strcmp(pOverLang -> name, NodeLanguage) ) {
#line 524 "outil.ch"
#line 525 "outil.ch"
                                                                if ( NumberTree(the_elem) > IN_LANGUAGE && NumberTree(the_elem) != TERM_TREE ) 
#line 525 "outil.ch"
#line 526 "outil.ch"
                                                                    PatchNode(the_elem, GetLang(languageName), NumberTree(the_elem) + pOverLang -> offset);
#line 526 "outil.ch"
                                                                else 
#line 526 "outil.ch"
#line 528 "outil.ch"
                                                                    PatchNode(the_elem, GetLang(languageName), NumberTree(the_elem));
#line 528 "outil.ch"
                                                                
#line 528 "outil.ch"
#line 529 "outil.ch"
                                                                goto nextNode ;
                                                                
#line 529 "outil.ch"
#line 530 "outil.ch"
                                                                
#line 530 "outil.ch"
#line 530 "outil.ch"
                                                             }
#line 530 "outil.ch"
    
#line 530 "outil.ch"
#line 531 "outil.ch"
    pOverLang =  GetNodeLang(the_elem) -> overLang ;
#line 531 "outil.ch"
#line 532 "outil.ch"
#line 532 "outil.ch"
    for (; pOverLang && pOverLang -> name ; pOverLang++ ) 
#line 532 "outil.ch"
#line 533 "outil.ch"
        if ( !strcmp(pOverLang -> name, languageName) ) {
#line 533 "outil.ch"
#line 534 "outil.ch"
                                                                if ( NumberTree(the_elem) > IN_LANGUAGE && NumberTree(the_elem) != TERM_TREE ) 
#line 534 "outil.ch"
#line 535 "outil.ch"
                                                                    PatchNode(the_elem, GetLang(languageName), NumberTree(the_elem) - pOverLang -> offset);
#line 535 "outil.ch"
                                                                else 
#line 535 "outil.ch"
#line 537 "outil.ch"
                                                                    PatchNode(the_elem, GetLang(languageName), NumberTree(the_elem));
#line 537 "outil.ch"
                                                                
#line 537 "outil.ch"
#line 538 "outil.ch"
                                                                goto nextNode ;
                                                                
#line 538 "outil.ch"
#line 539 "outil.ch"
                                                                
#line 539 "outil.ch"
#line 539 "outil.ch"
                                                             }
#line 539 "outil.ch"
    
#line 539 "outil.ch"
#line 540 "outil.ch"
nextNode : 
#line 540 "outil.ch"
#line 541 "outil.ch"
    ;
#line 541 "outil.ch"
#line 542 "outil.ch"
    
#line 542 "outil.ch"
#line 542 "outil.ch"
}
#line 542 "outil.ch"

#line 544 "outil.ch"

#line 544 "outil.ch"
void InLang ( char *languageName, PTREE tree )
#line 544 "outil.ch"
{
#line 544 "outil.ch"
#line 544 "outil.ch"
    int _nextVal ;
    
#line 544 "outil.ch"
#line 546 "outil.ch"
    {
#line 546 "outil.ch"
#line 546 "outil.ch"
        int _for_slot = 1, _arity = treearity(tree);
        
#line 546 "outil.ch"
#line 546 "outil.ch"
        MY_TREE _for_elem = (PPTREE)0 ;
        
#line 546 "outil.ch"
#line 546 "outil.ch"
#line 546 "outil.ch"
        for (; _for_slot <= _arity ; _for_slot++ ) {
#line 546 "outil.ch"
#line 546 "outil.ch"
            _for_elem =  SonTree(tree, _for_slot);
#line 546 "outil.ch"
#line 546 "outil.ch"
            if ( _for_elem && NumberTree(_for_elem) != IN_LANGUAGE ) {
#line 546 "outil.ch"
#line 546 "outil.ch"
                InLang(languageName, for_elem);
#line 546 "outil.ch"
#line 546 "outil.ch"
                
#line 546 "outil.ch"
#line 546 "outil.ch"
            }
#line 546 "outil.ch"
#line 546 "outil.ch"
            
#line 546 "outil.ch"
#line 546 "outil.ch"
        }
#line 546 "outil.ch"
        
#line 546 "outil.ch"
#line 546 "outil.ch"
        
#line 546 "outil.ch"
#line 546 "outil.ch"
    }
#line 546 "outil.ch"
#line 549 "outil.ch"
    PatchANode(languageName, tree);
#line 549 "outil.ch"
#line 550 "outil.ch"
    
#line 550 "outil.ch"
#line 550 "outil.ch"
}
#line 550 "outil.ch"

static int  currentLine, currentCol ;

#line 557 "outil.ch"

#line 557 "outil.ch"
char *IsPosComment ( const PTREE &comm )
#line 557 "outil.ch"
{
#line 557 "outil.ch"
#line 557 "outil.ch"
    int _nextVal ;
    
#line 557 "outil.ch"
#line 560 "outil.ch"
    
    char    *val = Value(comm);
    
#line 560 "outil.ch"
#line 562 "outil.ch"
    if ( !strncmp(val, POS_STUB, strlen(POS_STUB)) ) 
#line 562 "outil.ch"
#line 563 "outil.ch"
        return val ;
    
#line 563 "outil.ch"
    else 
#line 563 "outil.ch"
#line 565 "outil.ch"
        return (char *)0 ;
        
#line 565 "outil.ch"
    
#line 565 "outil.ch"
#line 566 "outil.ch"
    
#line 566 "outil.ch"
#line 566 "outil.ch"
}
#line 566 "outil.ch"

#line 571 "outil.ch"

#line 571 "outil.ch"
bool IsCommNotPos ( const PTREE &tree, int type )
#line 571 "outil.ch"
{
#line 571 "outil.ch"
#line 571 "outil.ch"
    int _nextVal ;
    
#line 571 "outil.ch"
#line 574 "outil.ch"
    
    PTREE   comm ;
#line 574 "outil.ch"
    
#line 574 "outil.ch"
#line 575 "outil.ch"
    int result = 0 ;
    
#line 575 "outil.ch"
#line 578 "outil.ch"
    while ( ((comm=NextComm(tree, type, comm))) ) {
#line 578 "outil.ch"
#line 579 "outil.ch"
                                                            if ( !IsPosComment(comm) ) {
#line 579 "outil.ch"
#line 582 "outil.ch"
                                                                                            return true ;
                                                                                            
#line 582 "outil.ch"
#line 583 "outil.ch"
                                                                                            
#line 583 "outil.ch"
#line 583 "outil.ch"
                                                                                          }
#line 583 "outil.ch"
#line 584 "outil.ch"
                                                            
#line 584 "outil.ch"
#line 584 "outil.ch"
                                                        }
#line 584 "outil.ch"
#line 587 "outil.ch"
    return false ;
    
#line 587 "outil.ch"
#line 588 "outil.ch"
    
#line 588 "outil.ch"
#line 588 "outil.ch"
}
#line 588 "outil.ch"

#line 593 "outil.ch"

#line 593 "outil.ch"
int GetStartPos ( const PTREE &tree, int *line, int *col, bool opposite )
#line 593 "outil.ch"
{
#line 593 "outil.ch"
#line 593 "outil.ch"
    int _nextVal ;
    
#line 593 "outil.ch"
#line 596 "outil.ch"
    
    PTREE   comm ;
#line 596 "outil.ch"
    
#line 596 "outil.ch"
#line 597 "outil.ch"
    int result = 0 ;
    
#line 597 "outil.ch"
#line 600 "outil.ch"
    while ( ((comm=NextComm(tree, PRE, comm))) ) {
#line 600 "outil.ch"
#line 601 "outil.ch"
                                                        if ( GetPosCommentContent(comm, line, col) ) {
#line 601 "outil.ch"
#line 606 "outil.ch"
                                                                                                            result =  1 ;
#line 606 "outil.ch"
#line 609 "outil.ch"
                                                                                                            if ( opposite ) 
#line 609 "outil.ch"
#line 610 "outil.ch"
                                                                                                                break ;
                                                                                                            
#line 610 "outil.ch"
#line 611 "outil.ch"
                                                                                                            
#line 611 "outil.ch"
#line 611 "outil.ch"
                                                                                                         }
#line 611 "outil.ch"
#line 612 "outil.ch"
                                                        
#line 612 "outil.ch"
#line 612 "outil.ch"
                                                       }
#line 612 "outil.ch"
#line 615 "outil.ch"
    return result ;
    
#line 615 "outil.ch"
#line 616 "outil.ch"
    
#line 616 "outil.ch"
#line 616 "outil.ch"
}
#line 616 "outil.ch"

#line 621 "outil.ch"

#line 621 "outil.ch"
static  int SearchPosInt ( const PTREE &tree, int *line, int *col )
#line 621 "outil.ch"
{
#line 621 "outil.ch"
#line 621 "outil.ch"
    int _nextVal ;
    
#line 621 "outil.ch"
#line 624 "outil.ch"
    {
#line 624 "outil.ch"
#line 624 "outil.ch"
        int _for_slot = 1, _arity = treearity(tree);
        
#line 624 "outil.ch"
#line 624 "outil.ch"
        MY_TREE _for_elem = (PPTREE)0 ;
        
#line 624 "outil.ch"
#line 624 "outil.ch"
#line 624 "outil.ch"
        for (; _for_slot <= _arity ; _for_slot++ ) {
#line 624 "outil.ch"
#line 624 "outil.ch"
            _for_elem =  SonTree(tree, _for_slot);
#line 624 "outil.ch"
#line 624 "outil.ch"
            if ( _for_elem && NumberTree(_for_elem) != IN_LANGUAGE ) 
#line 624 "outil.ch"
#line 624 "outil.ch"
                if ( SearchPos(for_elem, line, col) ) {
#line 624 "outil.ch"
#line 624 "outil.ch"
                    return 1 ;
                    
#line 624 "outil.ch"
#line 624 "outil.ch"
                    
#line 624 "outil.ch"
#line 624 "outil.ch"
                }
#line 624 "outil.ch"
#line 624 "outil.ch"
            
#line 624 "outil.ch"
#line 624 "outil.ch"
        }
#line 624 "outil.ch"
        
#line 624 "outil.ch"
#line 624 "outil.ch"
        
#line 624 "outil.ch"
#line 624 "outil.ch"
    }
#line 624 "outil.ch"
#line 629 "outil.ch"
    if ( GetStartPos(tree, line, col) || GetEndPos(tree, line, col) ) 
#line 629 "outil.ch"
#line 630 "outil.ch"
        return 1 ;
    
#line 630 "outil.ch"
#line 631 "outil.ch"
    return 0 ;
    
#line 631 "outil.ch"
#line 632 "outil.ch"
    
#line 632 "outil.ch"
#line 632 "outil.ch"
}
#line 632 "outil.ch"

#line 636 "outil.ch"

#line 636 "outil.ch"
int SearchPos ( const PTREE &tree, int *line, int *col )
#line 636 "outil.ch"
{
#line 636 "outil.ch"
#line 636 "outil.ch"
    int _nextVal ;
    
#line 636 "outil.ch"
#line 639 "outil.ch"
    if ( !GetStartPos(tree, line, col) ) {
#line 639 "outil.ch"
#line 640 "outil.ch"
                                                return SearchPosInt(tree, line, col);
                                                
#line 640 "outil.ch"
#line 641 "outil.ch"
                                                
#line 641 "outil.ch"
#line 641 "outil.ch"
                                              } else 
#line 641 "outil.ch"
#line 642 "outil.ch"
        return 1 ;
        
#line 642 "outil.ch"
    
#line 642 "outil.ch"
#line 643 "outil.ch"
    
#line 643 "outil.ch"
#line 643 "outil.ch"
}
#line 643 "outil.ch"

#line 648 "outil.ch"

#line 648 "outil.ch"
static  int SearchEndPosInt ( const PTREE &tree, int *line, int *col )
#line 648 "outil.ch"
{
#line 648 "outil.ch"
#line 648 "outil.ch"
    int _nextVal ;
    
#line 648 "outil.ch"
#line 651 "outil.ch"
    
    int arity = treearity(tree);
    
#line 651 "outil.ch"
#line 653 "outil.ch"
#line 653 "outil.ch"
    for (; arity > 0 ; arity-- ) {
#line 653 "outil.ch"
#line 654 "outil.ch"
                                        PTREE   son = (PTREE)0 ;
#line 654 "outil.ch"
                                        
#line 654 "outil.ch"
#line 654 "outil.ch"
                                        (son=tree [arity]);
#line 654 "outil.ch"
                                        
#line 654 "outil.ch"
#line 655 "outil.ch"
                                        if ( SearchEndPos(son, line, col) ) {
#line 655 "outil.ch"
#line 656 "outil.ch"
                                                                                    return 1 ;
                                                                                    
#line 656 "outil.ch"
#line 657 "outil.ch"
                                                                                    
#line 657 "outil.ch"
#line 657 "outil.ch"
                                                                                }
#line 657 "outil.ch"
#line 658 "outil.ch"
                                        
#line 658 "outil.ch"
#line 658 "outil.ch"
                                    }
#line 658 "outil.ch"
    
#line 658 "outil.ch"
#line 659 "outil.ch"
    if ( GetEndPos(tree, line, col) || GetStartPos(tree, line, col) ) 
#line 659 "outil.ch"
#line 660 "outil.ch"
        return 1 ;
    
#line 660 "outil.ch"
#line 661 "outil.ch"
    return 0 ;
    
#line 661 "outil.ch"
#line 662 "outil.ch"
    
#line 662 "outil.ch"
#line 662 "outil.ch"
}
#line 662 "outil.ch"

#line 666 "outil.ch"

#line 666 "outil.ch"
int SearchEndPos ( const PTREE &tree, int *line, int *col )
#line 666 "outil.ch"
{
#line 666 "outil.ch"
#line 666 "outil.ch"
    int _nextVal ;
    
#line 666 "outil.ch"
#line 669 "outil.ch"
    if ( !GetEndPos(tree, line, col) ) {
#line 669 "outil.ch"
#line 670 "outil.ch"
                                                return SearchEndPosInt(tree, line, col);
                                                
#line 670 "outil.ch"
#line 671 "outil.ch"
                                                
#line 671 "outil.ch"
#line 671 "outil.ch"
                                            } else 
#line 671 "outil.ch"
#line 672 "outil.ch"
        return 1 ;
        
#line 672 "outil.ch"
    
#line 672 "outil.ch"
#line 673 "outil.ch"
    
#line 673 "outil.ch"
#line 673 "outil.ch"
}
#line 673 "outil.ch"

#line 677 "outil.ch"

#line 677 "outil.ch"
int GetEndPos ( const PTREE &tree, int *line, int *col, bool opposite )
#line 677 "outil.ch"
{
#line 677 "outil.ch"
#line 677 "outil.ch"
    int _nextVal ;
    
#line 677 "outil.ch"
#line 680 "outil.ch"
    
    PTREE   comm ;
#line 680 "outil.ch"
    
#line 680 "outil.ch"
#line 681 "outil.ch"
    int result = 0 ;
    
#line 681 "outil.ch"
#line 684 "outil.ch"
    while ( ((comm=NextComm(tree, POST, comm))) ) {
#line 684 "outil.ch"
#line 685 "outil.ch"
                                                            if ( GetPosCommentContent(comm, line, col) ) {
#line 685 "outil.ch"
#line 688 "outil.ch"
                                                                                                                result =  1 ;
#line 688 "outil.ch"
#line 689 "outil.ch"
                                                                                                                if ( !opposite ) 
#line 689 "outil.ch"
#line 690 "outil.ch"
                                                                                                                    return result ;
                                                                                                                
#line 690 "outil.ch"
#line 691 "outil.ch"
                                                                                                                
#line 691 "outil.ch"
#line 691 "outil.ch"
                                                                                                             }
#line 691 "outil.ch"
#line 692 "outil.ch"
                                                            
#line 692 "outil.ch"
#line 692 "outil.ch"
                                                        }
#line 692 "outil.ch"
#line 695 "outil.ch"
    return result ;
    
#line 695 "outil.ch"
#line 696 "outil.ch"
    
#line 696 "outil.ch"
#line 696 "outil.ch"
}
#line 696 "outil.ch"

#line 700 "outil.ch"

#line 700 "outil.ch"
int GetPosCommentContent ( const PTREE &comm, int *lig, int *col )
#line 700 "outil.ch"
{
#line 700 "outil.ch"
#line 700 "outil.ch"
    int _nextVal ;
    
#line 700 "outil.ch"
#line 703 "outil.ch"
    
    char    *val ;
    
#line 703 "outil.ch"
#line 705 "outil.ch"
    if ( (val = IsPosComment(comm)) ) {
#line 705 "outil.ch"
#line 706 "outil.ch"
                                            sscanf(val, POS_STUB_FORMAT, lig, col);
#line 706 "outil.ch"
#line 707 "outil.ch"
                                            return 1 ;
                                            
#line 707 "outil.ch"
#line 708 "outil.ch"
                                            
#line 708 "outil.ch"
#line 708 "outil.ch"
                                          }
#line 708 "outil.ch"
#line 709 "outil.ch"
    return 0 ;
    
#line 709 "outil.ch"
#line 710 "outil.ch"
    
#line 710 "outil.ch"
#line 710 "outil.ch"
}
#line 710 "outil.ch"

#line 714 "outil.ch"

#line 714 "outil.ch"
void SetPosCommentContent ( const PTREE &comm, int lig, int col )
#line 714 "outil.ch"
{
#line 714 "outil.ch"
#line 714 "outil.ch"
    int _nextVal ;
    
#line 714 "outil.ch"
#line 717 "outil.ch"
    
    PTREE   content = (PTREE)0 ;
#line 717 "outil.ch"
    
#line 717 "outil.ch"
#line 717 "outil.ch"
    (content=SonTree(SonTree(comm, 1), 1));
#line 717 "outil.ch"
    
#line 717 "outil.ch"
#line 719 "outil.ch"
    if ( IsPosComment(content) ) {
#line 719 "outil.ch"
#line 720 "outil.ch"
                                    char    addr [MAXLENGTH];
                                    
#line 720 "outil.ch"
#line 721 "outil.ch"
                                    sprintf(addr, POS_STUB_FORMAT, lig, col);
#line 721 "outil.ch"
#line 722 "outil.ch"
                                    replacetree(content, 1, MakeString(addr));
#line 722 "outil.ch"
#line 723 "outil.ch"
                                    
#line 723 "outil.ch"
#line 723 "outil.ch"
                                   }
#line 723 "outil.ch"
#line 724 "outil.ch"
    
#line 724 "outil.ch"
#line 724 "outil.ch"
}
#line 724 "outil.ch"

#line 728 "outil.ch"

#line 728 "outil.ch"
void SetPos ( const PTREE &tree, int type, int lig, int col )
#line 728 "outil.ch"
{
#line 728 "outil.ch"
    register PPTREE _inter ;
#line 728 "outil.ch"

#line 728 "outil.ch"
#line 728 "outil.ch"
    int _nextVal ;
    
#line 728 "outil.ch"
#line 731 "outil.ch"
    
    char    addr [MAXLENGTH];
    
#line 731 "outil.ch"
#line 732 "outil.ch"
    PTREE   comment ;
#line 732 "outil.ch"
    
#line 732 "outil.ch"
#line 734 "outil.ch"
    if ( !tree ) 
#line 734 "outil.ch"
#line 735 "outil.ch"
        return ;
    
#line 735 "outil.ch"
#line 736 "outil.ch"
    (comment=MakeTree(type, 1));
#line 736 "outil.ch"
    
#line 736 "outil.ch"
#line 737 "outil.ch"
    sprintf(addr, POS_STUB_FORMAT, lig, col);
#line 737 "outil.ch"
#line 738 "outil.ch"
    {
#line 738 "outil.ch"
        PPTREE _ptTree0= (PPTREE) 0,_sonTree0= (PPTREE) 0 ;
#line 738 "outil.ch"
        {
#line 738 "outil.ch"
            PPTREE _ptTree1= (PPTREE) 0,_ptRes1= (PPTREE) 0;
#line 738 "outil.ch"
            _ptRes1 = MakeTree(LIST, 2);
#line 738 "outil.ch"
            _ptTree1 = StoreRef(MakeString(addr));
#line 738 "outil.ch"
            ReplaceTree(_ptRes1, 1, _ptTree1);
#line 738 "outil.ch"
            _ptTree0 = _ptRes1;
#line 738 "outil.ch"
        }
#line 738 "outil.ch"
        ReplaceTree(comment, 1, _ptTree0);
#line 738 "outil.ch"
    }
#line 738 "outil.ch"
    
#line 738 "outil.ch"
#line 739 "outil.ch"
    {
#line 739 "outil.ch"
        PPTREE _ptTree0= (PPTREE) 0,_ptRes0= (PPTREE) 0;
#line 739 "outil.ch"
        _ptRes0 = MakeTree(LIST, 2);
#line 739 "outil.ch"
        ReplaceTree(_ptRes0, 1, comment);
#line 739 "outil.ch"
        comment = _ptRes0;
#line 739 "outil.ch"
    }
#line 739 "outil.ch"
    
#line 739 "outil.ch"
#line 740 "outil.ch"
    PutComm(tree, comment);
#line 740 "outil.ch"
#line 741 "outil.ch"
    
#line 741 "outil.ch"
#line 741 "outil.ch"
}
#line 741 "outil.ch"

#line 745 "outil.ch"

#line 745 "outil.ch"
void AddPos ( const PTREE &tree, int type, int lig, int col )
#line 745 "outil.ch"
{
#line 745 "outil.ch"
    register PPTREE _inter ;
#line 745 "outil.ch"

#line 745 "outil.ch"
#line 745 "outil.ch"
    int _nextVal ;
    
#line 745 "outil.ch"
#line 748 "outil.ch"
    
    char    addr [MAXLENGTH];
    
#line 748 "outil.ch"
#line 749 "outil.ch"
    PTREE   comment ;
#line 749 "outil.ch"
    
#line 749 "outil.ch"
#line 750 "outil.ch"
    PTREE   oldComment ;
#line 750 "outil.ch"
    
#line 750 "outil.ch"
#line 752 "outil.ch"
    if ( !tree ) 
#line 752 "outil.ch"
#line 753 "outil.ch"
        return ;
    
#line 753 "outil.ch"
#line 756 "outil.ch"
    (oldComment=GetComm(tree));
#line 756 "outil.ch"
    
#line 756 "outil.ch"
#line 759 "outil.ch"
    (comment=MakeTree(type, 1));
#line 759 "outil.ch"
    
#line 759 "outil.ch"
#line 760 "outil.ch"
    sprintf(addr, POS_STUB_FORMAT, lig, col);
#line 760 "outil.ch"
#line 761 "outil.ch"
    {
#line 761 "outil.ch"
        PPTREE _ptTree0= (PPTREE) 0,_sonTree0= (PPTREE) 0 ;
#line 761 "outil.ch"
        {
#line 761 "outil.ch"
            PPTREE _ptTree1= (PPTREE) 0,_ptRes1= (PPTREE) 0;
#line 761 "outil.ch"
            _ptRes1 = MakeTree(LIST, 2);
#line 761 "outil.ch"
            _ptTree1 = StoreRef(MakeString(addr));
#line 761 "outil.ch"
            ReplaceTree(_ptRes1, 1, _ptTree1);
#line 761 "outil.ch"
            _ptTree0 = _ptRes1;
#line 761 "outil.ch"
        }
#line 761 "outil.ch"
        ReplaceTree(comment, 1, _ptTree0);
#line 761 "outil.ch"
    }
#line 761 "outil.ch"
    
#line 761 "outil.ch"
#line 762 "outil.ch"
    {
#line 762 "outil.ch"
        PPTREE _ptTree0= (PPTREE) 0,_ptRes0= (PPTREE) 0;
#line 762 "outil.ch"
        _ptRes0 = MakeTree(LIST, 2);
#line 762 "outil.ch"
        ReplaceTree(_ptRes0, 1, comment);
#line 762 "outil.ch"
        ReplaceTree(_ptRes0, 2, oldComment);
#line 762 "outil.ch"
        comment = _ptRes0;
#line 762 "outil.ch"
    }
#line 762 "outil.ch"
    
#line 762 "outil.ch"
#line 765 "outil.ch"
    PutComm(tree, comment);
#line 765 "outil.ch"
#line 766 "outil.ch"
    
#line 766 "outil.ch"
#line 766 "outil.ch"
}
#line 766 "outil.ch"

#line 770 "outil.ch"

#line 770 "outil.ch"
PTREE DestroyComment ( const PTREE &comm )
#line 770 "outil.ch"
{
#line 770 "outil.ch"
#line 770 "outil.ch"
    int _nextVal ;
    
#line 770 "outil.ch"
#line 773 "outil.ch"
    
    int rank = ranktree(comm);
    
#line 773 "outil.ch"
#line 774 "outil.ch"
    PTREE   commRet ;
#line 774 "outil.ch"
    
#line 774 "outil.ch"
#line 775 "outil.ch"
    PTREE   father ;
#line 775 "outil.ch"
    
#line 775 "outil.ch"
#line 777 "outil.ch"
    (father=FatherTree(comm));
#line 777 "outil.ch"
    
#line 777 "outil.ch"
#line 778 "outil.ch"
    if ( !father ) 
#line 778 "outil.ch"
#line 779 "outil.ch"
        return 0 ;
    
#line 779 "outil.ch"
#line 782 "outil.ch"
    if ( rank == 2 ) 
#line 782 "outil.ch"
#line 783 "outil.ch"
        (commRet=father);
#line 783 "outil.ch"
    
#line 783 "outil.ch"
    else 
#line 783 "outil.ch"
#line 785 "outil.ch"
        (commRet=(PTREE)0);
#line 785 "outil.ch"
        
#line 785 "outil.ch"
    
#line 785 "outil.ch"
#line 788 "outil.ch"
    replacetree(father, rank, sontree(comm, 2));
#line 788 "outil.ch"
#line 791 "outil.ch"
    return commRet ;
    
#line 791 "outil.ch"
#line 792 "outil.ch"
    
#line 792 "outil.ch"
#line 792 "outil.ch"
}
#line 792 "outil.ch"

#line 796 "outil.ch"

#line 796 "outil.ch"
void TrimPosComment ( const PTREE &tree )
#line 796 "outil.ch"
{
#line 796 "outil.ch"
    register PPTREE _inter ;
#line 796 "outil.ch"

#line 796 "outil.ch"
#line 796 "outil.ch"
    int _nextVal ;
    
#line 796 "outil.ch"
#line 799 "outil.ch"
    
    PTREE   comm, oldComm, father ;
#line 799 "outil.ch"
    
#line 799 "outil.ch"
#line 800 "outil.ch"
    char    *val ;
    
#line 800 "outil.ch"
#line 801 "outil.ch"
    int preLineMax = -1, preColMax = -1 ;
    
#line 801 "outil.ch"
#line 802 "outil.ch"
    int postLineMin = 32000, postColMin = 32000 ;
    
#line 802 "outil.ch"
#line 803 "outil.ch"
    int line, col ;
    
#line 803 "outil.ch"
#line 804 "outil.ch"
    int lineFather, colFather ;
    
#line 804 "outil.ch"
#line 805 "outil.ch"
    int first ;
    
#line 805 "outil.ch"
#line 806 "outil.ch"
    
    int again ;
    
#line 806 "outil.ch"
#line 812 "outil.ch"
    if ( !tree || NumberTree(tree) == TERM_TREE ) 
#line 812 "outil.ch"
#line 813 "outil.ch"
        return ;
    
#line 813 "outil.ch"
#line 816 "outil.ch"
    if ( ((comm=GetComm(tree))) ) {
#line 816 "outil.ch"
#line 817 "outil.ch"
                                        while ( !(((_inter = (PPTREE)comm,1) && 
#line 817 "outil.ch"
                                                        (!SonTree(_inter,2)) &&
#line 817 "outil.ch"
                                                        1)) ) {
#line 817 "outil.ch"
#line 818 "outil.ch"
                                                                ((_inter = (PPTREE)comm,1) && 
#line 818 "outil.ch"
                                                                    ((comm=SonTree(_inter,2)),1) &&
#line 818 "outil.ch"
                                                                    1);
#line 818 "outil.ch"
                                                                ;
#line 818 "outil.ch"
#line 819 "outil.ch"
                                                                
#line 819 "outil.ch"
#line 819 "outil.ch"
                                                              }
#line 819 "outil.ch"
#line 820 "outil.ch"
                                        while ( comm != tree ) {
#line 820 "outil.ch"
#line 821 "outil.ch"
                                                                    (father=FatherTree(comm));
#line 821 "outil.ch"
                                                                    
#line 821 "outil.ch"
#line 822 "outil.ch"
                                                                    while ( father != tree && !IsPosComment(father) ) 
#line 822 "outil.ch"
#line 823 "outil.ch"
                                                                        (father=FatherTree(father));
#line 823 "outil.ch"
                                                                    
#line 823 "outil.ch"
#line 824 "outil.ch"
                                                                    if ( father != tree && GetPosCommentContent(comm, &line, &col) ) {
#line 824 "outil.ch"
#line 825 "outil.ch"
                                                                                                                                                GetPosCommentContent(father, &lineFather, &colFather);
#line 825 "outil.ch"
#line 826 "outil.ch"
                                                                                                                                                if ( lineFather > line || lineFather == line && colFather > col ) {
#line 826 "outil.ch"
#line 827 "outil.ch"
                                                                                                                                                                                                                        DestroyComment(father);
#line 827 "outil.ch"
#line 828 "outil.ch"
                                                                                                                                                                                                                        continue ;
                                                                                                                                                                                                                        
#line 828 "outil.ch"
#line 829 "outil.ch"
                                                                                                                                                                                                                        
#line 829 "outil.ch"
#line 829 "outil.ch"
                                                                                                                                                                                                                        }
#line 829 "outil.ch"
#line 830 "outil.ch"
                                                                                                                                                
#line 830 "outil.ch"
#line 830 "outil.ch"
                                                                                                                                             }
#line 830 "outil.ch"
#line 831 "outil.ch"
                                                                    (comm=father);
#line 831 "outil.ch"
                                                                    
#line 831 "outil.ch"
#line 832 "outil.ch"
                                                                    
#line 832 "outil.ch"
#line 832 "outil.ch"
                                                                 }
#line 832 "outil.ch"
#line 833 "outil.ch"
                                        
#line 833 "outil.ch"
#line 833 "outil.ch"
                                      }
#line 833 "outil.ch"
#line 834 "outil.ch"
    (oldComm=(comm=(PTREE)0));
#line 834 "outil.ch"
    
#line 834 "outil.ch"
#line 835 "outil.ch"
    first =  0 ;
#line 835 "outil.ch"
#line 836 "outil.ch"
    again =  0 ;
#line 836 "outil.ch"
#line 837 "outil.ch"
    while ( ((comm=NextComm(tree, PRE, comm))) ) {
#line 837 "outil.ch"
#line 838 "outil.ch"
                                                        if ( GetPosCommentContent(comm, &line, &col) ) {
#line 838 "outil.ch"
#line 839 "outil.ch"
                                                                                                                if ( line > preLineMax || line == preLineMax && col > preColMax ) {
#line 839 "outil.ch"
#line 840 "outil.ch"
                                                                                                                                                                                        preLineMax =  line ;
#line 840 "outil.ch"
#line 841 "outil.ch"
                                                                                                                                                                                        preColMax =  col ;
#line 841 "outil.ch"
#line 844 "outil.ch"
                                                                                                                                                                                        if ( oldComm && !again ) {
#line 844 "outil.ch"
#line 845 "outil.ch"
                                                                                                                                                                                                                    DestroyComment(oldComm);
#line 845 "outil.ch"
#line 846 "outil.ch"
                                                                                                                                                                                                                    
#line 846 "outil.ch"
#line 846 "outil.ch"
                                                                                                                                                                                                                    }
#line 846 "outil.ch"
#line 849 "outil.ch"
                                                                                                                                                                                        if ( !again ) 
#line 849 "outil.ch"
#line 850 "outil.ch"
                                                                                                                                                                                        (oldComm=comm);
#line 850 "outil.ch"
                                                                                                                                                                                        
#line 850 "outil.ch"
                                                                                                                                                                                        else 
#line 851 "outil.ch"
                                                                                                                                                                                        {
#line 851 "outil.ch"
#line 852 "outil.ch"
                                                                                                                                                                                        (oldComm=(PTREE)0);
#line 852 "outil.ch"
                                                                                                                                                                                        
#line 852 "outil.ch"
#line 853 "outil.ch"
                                                                                                                                                                                        again =  0 ;
#line 853 "outil.ch"
#line 854 "outil.ch"
                                                                                                                                                                                        
#line 854 "outil.ch"
#line 854 "outil.ch"
                                                                                                                                                                                        }
                                                                                                                                                                                        
#line 854 "outil.ch"
#line 855 "outil.ch"
                                                                                                                                                                                        first =  1 ;
#line 855 "outil.ch"
#line 856 "outil.ch"
                                                                                                                                                                                        
#line 856 "outil.ch"
#line 856 "outil.ch"
                                                                                                                                                                                        } else 
#line 856 "outil.ch"
                                                                                                                {
#line 856 "outil.ch"
#line 859 "outil.ch"
                                                                                                                    if ( !again ) {
#line 859 "outil.ch"
#line 860 "outil.ch"
                                                                                                                                        (comm=DestroyComment(comm));
#line 860 "outil.ch"
                                                                                                                                        
#line 860 "outil.ch"
#line 861 "outil.ch"
                                                                                                                                        
#line 861 "outil.ch"
#line 861 "outil.ch"
                                                                                                                                    } else 
#line 861 "outil.ch"
                                                                                                                    {
#line 861 "outil.ch"
#line 862 "outil.ch"
                                                                                                                        (oldComm=(PTREE)0);
#line 862 "outil.ch"
                                                                                                                        
#line 862 "outil.ch"
#line 863 "outil.ch"
                                                                                                                        again =  0 ;
#line 863 "outil.ch"
#line 864 "outil.ch"
                                                                                                                        
#line 864 "outil.ch"
#line 864 "outil.ch"
                                                                                                                    }
                                                                                                                    
#line 864 "outil.ch"
#line 865 "outil.ch"
                                                                                                                    
#line 865 "outil.ch"
#line 865 "outil.ch"
                                                                                                                }
                                                                                                                
#line 865 "outil.ch"
#line 866 "outil.ch"
                                                                                                                
#line 866 "outil.ch"
#line 866 "outil.ch"
                                                                                                             } else 
#line 866 "outil.ch"
#line 867 "outil.ch"
                                                            again =  1 ;
#line 867 "outil.ch"
                                                        
#line 867 "outil.ch"
#line 868 "outil.ch"
                                                        
#line 868 "outil.ch"
#line 868 "outil.ch"
                                                       }
#line 868 "outil.ch"
#line 869 "outil.ch"
    if ( first ) {
#line 869 "outil.ch"
#line 870 "outil.ch"
                    currentLine =  preLineMax ;
#line 870 "outil.ch"
#line 871 "outil.ch"
                    currentCol =  preColMax ;
#line 871 "outil.ch"
#line 872 "outil.ch"
                    
#line 872 "outil.ch"
#line 872 "outil.ch"
                  }
#line 872 "outil.ch"
#line 873 "outil.ch"
    {
#line 873 "outil.ch"
#line 873 "outil.ch"
        int _for_slot = 1, _arity = treearity(tree);
        
#line 873 "outil.ch"
#line 873 "outil.ch"
        MY_TREE _for_elem = (PPTREE)0 ;
        
#line 873 "outil.ch"
#line 873 "outil.ch"
#line 873 "outil.ch"
        for (; _for_slot <= _arity ; _for_slot++ ) {
#line 873 "outil.ch"
#line 873 "outil.ch"
            _for_elem =  SonTree(tree, _for_slot);
#line 873 "outil.ch"
#line 873 "outil.ch"
            if ( _for_elem && NumberTree(_for_elem) != IN_LANGUAGE ) 
#line 873 "outil.ch"
#line 873 "outil.ch"
                TrimPosComment(for_elem);
#line 873 "outil.ch"
#line 873 "outil.ch"
            
#line 873 "outil.ch"
#line 873 "outil.ch"
        }
#line 873 "outil.ch"
        
#line 873 "outil.ch"
#line 873 "outil.ch"
        
#line 873 "outil.ch"
#line 873 "outil.ch"
    }
#line 873 "outil.ch"
#line 876 "outil.ch"
    (oldComm=(comm=(PTREE)0));
#line 876 "outil.ch"
    
#line 876 "outil.ch"
#line 877 "outil.ch"
    first =  0 ;
#line 877 "outil.ch"
#line 878 "outil.ch"
    again =  0 ;
#line 878 "outil.ch"
#line 879 "outil.ch"
    while ( ((comm=NextComm(tree, POST, comm))) ) {
#line 879 "outil.ch"
#line 880 "outil.ch"
                                                            if ( GetPosCommentContent(comm, &line, &col) ) {
#line 880 "outil.ch"
#line 881 "outil.ch"
                                                                                                                    if ( (line < postLineMin || line == postLineMin && col < postColMin) && (line >= currentLine || line == currentLine && col >= currentCol) ) {
#line 881 "outil.ch"
#line 882 "outil.ch"
                                                                                                                                                                                                                                                                              postLineMin =  line ;
#line 882 "outil.ch"
#line 883 "outil.ch"
                                                                                                                                                                                                                                                                              postColMin =  col ;
#line 883 "outil.ch"
#line 886 "outil.ch"
                                                                                                                                                                                                                                                                              if ( oldComm && !again ) {
#line 886 "outil.ch"
#line 887 "outil.ch"
                                                                                                                                                                                                                                                                                                          DestroyComment(oldComm);
#line 887 "outil.ch"
#line 888 "outil.ch"
                                                                                                                                                                                                                                                                                                          
#line 888 "outil.ch"
#line 888 "outil.ch"
                                                                                                                                                                                                                                                                                                          }
#line 888 "outil.ch"
#line 891 "outil.ch"
                                                                                                                                                                                                                                                                              if ( !again ) 
#line 891 "outil.ch"
#line 892 "outil.ch"
                                                                                                                                                                                                                                                                              (oldComm=comm);
#line 892 "outil.ch"
                                                                                                                                                                                                                                                                              
#line 892 "outil.ch"
                                                                                                                                                                                                                                                                              else 
#line 893 "outil.ch"
                                                                                                                                                                                                                                                                              {
#line 893 "outil.ch"
#line 894 "outil.ch"
                                                                                                                                                                                                                                                                              again =  0 ;
#line 894 "outil.ch"
#line 895 "outil.ch"
                                                                                                                                                                                                                                                                              (oldComm=0);
#line 895 "outil.ch"
                                                                                                                                                                                                                                                                              
#line 895 "outil.ch"
#line 896 "outil.ch"
                                                                                                                                                                                                                                                                              
#line 896 "outil.ch"
#line 896 "outil.ch"
                                                                                                                                                                                                                                                                              }
                                                                                                                                                                                                                                                                              
#line 896 "outil.ch"
#line 897 "outil.ch"
                                                                                                                                                                                                                                                                              first =  1 ;
#line 897 "outil.ch"
#line 898 "outil.ch"
                                                                                                                                                                                                                                                                              
#line 898 "outil.ch"
#line 898 "outil.ch"
                                                                                                                                                                                                                                                                              } else 
#line 898 "outil.ch"
                                                                                                                    {
#line 898 "outil.ch"
#line 901 "outil.ch"
                                                                                                                        if ( !again ) {
#line 901 "outil.ch"
#line 902 "outil.ch"
                                                                                                                                            (comm=DestroyComment(comm));
#line 902 "outil.ch"
                                                                                                                                            
#line 902 "outil.ch"
#line 903 "outil.ch"
                                                                                                                                            again =  0 ;
#line 903 "outil.ch"
#line 904 "outil.ch"
                                                                                                                                            (oldComm=0);
#line 904 "outil.ch"
                                                                                                                                            
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
#line 907 "outil.ch"
                                                                                                                    
#line 907 "outil.ch"
#line 907 "outil.ch"
                                                                                                                 } else 
#line 907 "outil.ch"
#line 908 "outil.ch"
                                                                again =  1 ;
#line 908 "outil.ch"
                                                            
#line 908 "outil.ch"
#line 909 "outil.ch"
                                                            
#line 909 "outil.ch"
#line 909 "outil.ch"
                                                        }
#line 909 "outil.ch"
#line 910 "outil.ch"
    if ( first ) {
#line 910 "outil.ch"
#line 911 "outil.ch"
                    currentLine =  postLineMin ;
#line 911 "outil.ch"
#line 912 "outil.ch"
                    currentCol =  postColMin ;
#line 912 "outil.ch"
#line 913 "outil.ch"
                    
#line 913 "outil.ch"
#line 913 "outil.ch"
                  }
#line 913 "outil.ch"
#line 914 "outil.ch"
    
#line 914 "outil.ch"
#line 914 "outil.ch"
}
#line 914 "outil.ch"

#line 918 "outil.ch"

#line 918 "outil.ch"
void DestroyPosComment ( const PTREE &tree )
#line 918 "outil.ch"
{
#line 918 "outil.ch"
#line 918 "outil.ch"
    int _nextVal ;
    
#line 918 "outil.ch"
#line 921 "outil.ch"
    
    PTREE   comm, oldComm = (PTREE)0, father ;
#line 921 "outil.ch"
    
#line 921 "outil.ch"
#line 921 "outil.ch"
    (oldComm=PTREE((void *)0));
#line 921 "outil.ch"
    
#line 921 "outil.ch"
#line 923 "outil.ch"
    if ( !tree ) 
#line 923 "outil.ch"
#line 924 "outil.ch"
        return ;
    
#line 924 "outil.ch"
#line 927 "outil.ch"
    while ( ((comm=NextComm(tree, PRE, comm))) ) 
#line 927 "outil.ch"
#line 928 "outil.ch"
        if ( IsPosComment(comm) ) {
#line 928 "outil.ch"
#line 931 "outil.ch"
                                        if ( oldComm ) 
#line 931 "outil.ch"
#line 932 "outil.ch"
                                            DestroyComment(oldComm);
#line 932 "outil.ch"
#line 936 "outil.ch"
                                        (oldComm=comm);
#line 936 "outil.ch"
                                        
#line 936 "outil.ch"
#line 937 "outil.ch"
                                        
#line 937 "outil.ch"
#line 937 "outil.ch"
                                    }
#line 937 "outil.ch"
#line 940 "outil.ch"
    while ( ((comm=NextComm(tree, POST, comm))) ) 
#line 940 "outil.ch"
#line 941 "outil.ch"
        if ( IsPosComment(comm) ) {
#line 941 "outil.ch"
#line 944 "outil.ch"
                                        if ( oldComm ) 
#line 944 "outil.ch"
#line 945 "outil.ch"
                                            DestroyComment(oldComm);
#line 945 "outil.ch"
#line 949 "outil.ch"
                                        (oldComm=comm);
#line 949 "outil.ch"
                                        
#line 949 "outil.ch"
#line 950 "outil.ch"
                                        
#line 950 "outil.ch"
#line 950 "outil.ch"
                                    }
#line 950 "outil.ch"
#line 953 "outil.ch"
    if ( oldComm ) 
#line 953 "outil.ch"
#line 954 "outil.ch"
        DestroyComment(oldComm);
#line 954 "outil.ch"
#line 955 "outil.ch"
    
#line 955 "outil.ch"
#line 955 "outil.ch"
}
#line 955 "outil.ch"

#line 957 "outil.ch"

#line 957 "outil.ch"
void DestroyPosCommentRec ( const PTREE &tree )
#line 957 "outil.ch"
{
#line 957 "outil.ch"
#line 957 "outil.ch"
    int _nextVal ;
    
#line 957 "outil.ch"
#line 959 "outil.ch"
    {
#line 959 "outil.ch"
#line 959 "outil.ch"
        ItPtree _iterator1 (tree, (PPTREE) 0) ;
        
#line 959 "outil.ch"
#line 959 "outil.ch"
        PTREE   _for_elem ;
#line 959 "outil.ch"
        
#line 959 "outil.ch"
#line 959 "outil.ch"
        _iterator1.AllSearch(1);
#line 959 "outil.ch"
#line 959 "outil.ch"
        while ( (_for_elem=_iterator1++) ) {
#line 959 "outil.ch"
#line 959 "outil.ch"
            {
#line 959 "outil.ch"
#line 960 "outil.ch"
                DestroyPosComment(for_elem);
#line 960 "outil.ch"
#line 961 "outil.ch"
                
#line 961 "outil.ch"
#line 961 "outil.ch"
            }
            
#line 961 "outil.ch"
#line 961 "outil.ch"
            _iterator1.Current(_for_elem);
#line 961 "outil.ch"
#line 961 "outil.ch"
            continue ;
            
#line 961 "outil.ch"
#line 961 "outil.ch"
        for_continue1 : 
#line 961 "outil.ch"
#line 961 "outil.ch"
            _iterator1.Current(_for_elem);
#line 961 "outil.ch"
#line 961 "outil.ch"
            _iterator1.SkipSon(1);
#line 961 "outil.ch"
#line 961 "outil.ch"
            continue ;
            
#line 961 "outil.ch"
#line 961 "outil.ch"
        for_break1 : 
#line 961 "outil.ch"
#line 961 "outil.ch"
            break ;
            
#line 961 "outil.ch"
#line 961 "outil.ch"
            
#line 961 "outil.ch"
#line 961 "outil.ch"
        }
#line 961 "outil.ch"
#line 961 "outil.ch"
        
#line 961 "outil.ch"
#line 961 "outil.ch"
    }
    
#line 961 "outil.ch"
#line 962 "outil.ch"
    
#line 962 "outil.ch"
#line 962 "outil.ch"
}
#line 962 "outil.ch"

static int  NbTree ;

static int  NbDump ;

bool    theConstructorDump = false ;

#line 968 "outil.ch"

#line 968 "outil.ch"
void MakeTreeGenDirRec ( PTREE &paramTree, int nbTreeParam )
#line 968 "outil.ch"
{
#line 968 "outil.ch"
    register PPTREE _inter ;
#line 968 "outil.ch"

#line 968 "outil.ch"
#line 968 "outil.ch"
    int _nextVal ;
    
#line 968 "outil.ch"
#line 970 "outil.ch"
    
    int nbParam, currParam, gennode ;
    
#line 970 "outil.ch"
#line 971 "outil.ch"
    char    myString [5];
    
#line 971 "outil.ch"
#line 972 "outil.ch"
    PTREE   son ;
#line 972 "outil.ch"
    
#line 972 "outil.ch"
#line 974 "outil.ch"
    theConstructorDump =  true ;
#line 974 "outil.ch"
#line 975 "outil.ch"
    if ( nbTreeParam ) {
#line 975 "outil.ch"
#line 976 "outil.ch"
                            Mark();
#line 976 "outil.ch"
#line 977 "outil.ch"
                            PrintString("TheConstructor(stackTree,ptStackTree,");
#line 977 "outil.ch"
#line 978 "outil.ch"
                            NbTree =  nbTreeParam ;
#line 978 "outil.ch"
#line 979 "outil.ch"
                            NbDump =  0 ;
#line 979 "outil.ch"
#line 980 "outil.ch"
                            MakeTreeGenDirRec(paramTree);
#line 980 "outil.ch"
#line 981 "outil.ch"
                            PrintString("-3) ;");
#line 981 "outil.ch"
#line 981 "outil.ch"
                            LNewLine(1);
#line 981 "outil.ch"
                            
#line 981 "outil.ch"
#line 982 "outil.ch"
                            UnMark();
#line 982 "outil.ch"
#line 983 "outil.ch"
                            return ;
                            
#line 983 "outil.ch"
#line 984 "outil.ch"
                            
#line 984 "outil.ch"
#line 984 "outil.ch"
                        }
#line 984 "outil.ch"
#line 985 "outil.ch"
    if ( NbTree == 50 ) {
#line 985 "outil.ch"
#line 986 "outil.ch"
                            PrintString("-3);");
#line 986 "outil.ch"
#line 986 "outil.ch"
                            LNewLine(1);
#line 986 "outil.ch"
                            
#line 986 "outil.ch"
#line 987 "outil.ch"
                            PrintString("TheConstructor(stackTree,ptStackTree,");
#line 987 "outil.ch"
#line 988 "outil.ch"
                            NbTree =  0 ;
#line 988 "outil.ch"
#line 989 "outil.ch"
                            
#line 989 "outil.ch"
#line 989 "outil.ch"
                          } else 
#line 989 "outil.ch"
#line 990 "outil.ch"
        NbTree++ ;
#line 990 "outil.ch"
    
#line 990 "outil.ch"
#line 991 "outil.ch"
    if ( NbDump == 9 ) {
#line 991 "outil.ch"
#line 992 "outil.ch"
                            LNewLine(1);
#line 992 "outil.ch"
                            
#line 992 "outil.ch"
#line 993 "outil.ch"
                            Tab();
#line 993 "outil.ch"
                            
#line 993 "outil.ch"
#line 994 "outil.ch"
                            NbDump =  0 ;
#line 994 "outil.ch"
#line 995 "outil.ch"
                            
#line 995 "outil.ch"
#line 995 "outil.ch"
                         } else 
#line 995 "outil.ch"
#line 996 "outil.ch"
        NbDump++ ;
#line 996 "outil.ch"
    
#line 996 "outil.ch"
#line 997 "outil.ch"
    if ( ((_inter = (PPTREE)paramTree,1) && 
#line 997 "outil.ch"
            (NumberTree(_inter) == TERM_TREE) &&
#line 997 "outil.ch"
            1) ) {
#line 997 "outil.ch"
#line 998 "outil.ch"
                    PrintString("-2,");
#line 998 "outil.ch"
                    PrintString("MakeString(\"");
#line 998 "outil.ch"
#line 999 "outil.ch"
                    DumpBrainyValue(paramTree);
#line 999 "outil.ch"
#line 1000 "outil.ch"
                    PrintString("\"),");
#line 1000 "outil.ch"
#line 1001 "outil.ch"
                    return ;
                    
#line 1001 "outil.ch"
#line 1002 "outil.ch"
                    
#line 1002 "outil.ch"
#line 1002 "outil.ch"
                 } else 
#line 1002 "outil.ch"
    if ( NumberTree(paramTree) == CLASS_TREE ) {
#line 1002 "outil.ch"
#line 1003 "outil.ch"
                                                    PrintString("-2,");
#line 1003 "outil.ch"
#line 1004 "outil.ch"
                                                    char    *toBeDumped = (char *)APPLY_CLASS(paramTree, TreeClass, DumpTree());
                                                    
#line 1004 "outil.ch"
#line 1005 "outil.ch"
                                                    WriteString(toBeDumped);
#line 1005 "outil.ch"
#line 1005 "outil.ch"
                                                    WriteString(",");
#line 1005 "outil.ch"
#line 1006 "outil.ch"
                                                    return ;
                                                    
#line 1006 "outil.ch"
#line 1007 "outil.ch"
                                                    
#line 1007 "outil.ch"
#line 1007 "outil.ch"
                                                  }
#line 1007 "outil.ch"
#line 1008 "outil.ch"
    nbParam =  treearity(paramTree);
#line 1008 "outil.ch"
#line 1009 "outil.ch"
    currParam =  1 ;
#line 1009 "outil.ch"
#line 1010 "outil.ch"
    while ( currParam <= nbParam ) {
#line 1010 "outil.ch"
#line 1011 "outil.ch"
                                        (son=SonTree(paramTree, currParam));
#line 1011 "outil.ch"
                                        
#line 1011 "outil.ch"
#line 1012 "outil.ch"
                                        if ( !((!son)) ) 
#line 1012 "outil.ch"
#line 1013 "outil.ch"
                                            MakeTreeGenDirRec(son);
#line 1013 "outil.ch"
                                        else 
#line 1013 "outil.ch"
#line 1015 "outil.ch"
                                            PrintString("-4,");
#line 1015 "outil.ch"
                                        
#line 1015 "outil.ch"
#line 1016 "outil.ch"
                                        currParam++ ;
#line 1016 "outil.ch"
#line 1017 "outil.ch"
                                        
#line 1017 "outil.ch"
#line 1017 "outil.ch"
                                     }
#line 1017 "outil.ch"
#line 1018 "outil.ch"
    _itoa(nbParam, myString, 10);
#line 1018 "outil.ch"
#line 1019 "outil.ch"
    WriteString(NameConst(NumberTree(paramTree)));
#line 1019 "outil.ch"
#line 1019 "outil.ch"
    PrintString(",");
#line 1019 "outil.ch"
#line 1019 "outil.ch"
    WriteString(myString);
#line 1019 "outil.ch"
#line 1019 "outil.ch"
    PrintString(",");
#line 1019 "outil.ch"
#line 1020 "outil.ch"
    
#line 1020 "outil.ch"
#line 1020 "outil.ch"
}
#line 1020 "outil.ch"

#line 1020 "outil.ch"
#line 1020 "outil.ch"
static void outil_Anchor () { int i = 1;} 
#line 1020 "outil.ch"
/*Well done my boy */ 
#line 1020 "outil.ch"
