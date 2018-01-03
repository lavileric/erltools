
#line 24 "clpretty.ch"
/*************************************************************************/
#line 24 "clpretty.ch"
/*                                                                       */
#line 24 "clpretty.ch"
/*        Produced by Metachop version 2.0  -    1989-1995               */
#line 24 "clpretty.ch"
/*     Tree      Meta     Chopper      developped    by                  */
#line 24 "clpretty.ch"
/*                  Eric Lavillonniere                                   */
#line 24 "clpretty.ch"
/*                                                                       */
#line 24 "clpretty.ch"
/*************************************************************************/
#line 24 "clpretty.ch"

#line 24 "clpretty.ch"
#include "token.h"
#line 24 "clpretty.ch"
#define decomp decomp_pretty
#line 24 "clpretty.ch"

#line 24 "clpretty.ch"
#ifndef for_elem
#line 24 "clpretty.ch"
#line 24 "clpretty.ch"
#define for_elem _for_elem

#line 24 "clpretty.ch"
#line 24 "clpretty.ch"

#line 24 "clpretty.ch"
#endif
#ifdef INCONNU
#line 24 "clpretty.ch"
#line 24 "clpretty.ch"
PTREE   for_elem ;
#line 24 "clpretty.ch"

#line 24 "clpretty.ch"
#line 24 "clpretty.ch"

#line 24 "clpretty.ch"
#endif
#include "clpretty.h"

#line 31 "clpretty.ch"

#line 31 "clpretty.ch"
void clpretty::PutAttr ( PTREE tree, PTREE listAttr, int attr, int pos )
#line 31 "clpretty.ch"
{
#line 31 "clpretty.ch"
    register PPTREE _inter ;
#line 31 "clpretty.ch"

#line 31 "clpretty.ch"
#line 31 "clpretty.ch"
    int _nextVal ;
    
#line 31 "clpretty.ch"
#line 35 "clpretty.ch"
    PTREE   father = (PTREE)0 ;
#line 35 "clpretty.ch"
    
#line 35 "clpretty.ch"
#line 36 "clpretty.ch"
    int rank = ranktree(tree);
    
#line 36 "clpretty.ch"
#line 37 "clpretty.ch"
    PTREE   oldListAttr ;
#line 37 "clpretty.ch"
    
#line 37 "clpretty.ch"
#line 35 "clpretty.ch"
    (father=FatherTree(tree));
#line 35 "clpretty.ch"
    
#line 35 "clpretty.ch"
#line 40 "clpretty.ch"
    if ( ((_inter = (PPTREE)tree,1) && 
#line 40 "clpretty.ch"
            (NumberTree(_inter) == pretty::ATTRIBUTS) &&
#line 40 "clpretty.ch"
            1) ) 
#line 40 "clpretty.ch"
#line 41 "clpretty.ch"
        (father=tree);
#line 41 "clpretty.ch"
    
#line 41 "clpretty.ch"
#line 44 "clpretty.ch"
    oldListAttr = (PPTREE) 0 ;
#line 44 "clpretty.ch"
    
#line 44 "clpretty.ch"
#line 45 "clpretty.ch"
    if ( attr == POST_ATTR ) {
#line 45 "clpretty.ch"
#line 46 "clpretty.ch"
                                ((_inter = (PPTREE)father,1) && 
#line 46 "clpretty.ch"
                                    (NumberTree(_inter) == pretty::ATTRIBUTS) &&
#line 46 "clpretty.ch"
                                    ((oldListAttr=SonTree(_inter,3)),1) &&
#line 46 "clpretty.ch"
                                    1);
#line 46 "clpretty.ch"
                                ;
#line 46 "clpretty.ch"
#line 47 "clpretty.ch"
                                
#line 47 "clpretty.ch"
#line 47 "clpretty.ch"
                               } else 
#line 47 "clpretty.ch"
    {
#line 47 "clpretty.ch"
#line 48 "clpretty.ch"
        ((_inter = (PPTREE)father,1) && 
#line 48 "clpretty.ch"
            (NumberTree(_inter) == pretty::ATTRIBUTS) &&
#line 48 "clpretty.ch"
            ((oldListAttr=SonTree(_inter,2)),1) &&
#line 48 "clpretty.ch"
            1);
#line 48 "clpretty.ch"
        ;
#line 48 "clpretty.ch"
#line 49 "clpretty.ch"
        
#line 49 "clpretty.ch"
#line 49 "clpretty.ch"
    }
    
#line 49 "clpretty.ch"
#line 52 "clpretty.ch"
    {
#line 52 "clpretty.ch"
#line 53 "clpretty.ch"
        if ( oldListAttr ) {
#line 53 "clpretty.ch"
#line 54 "clpretty.ch"
                                if ( pos == PUT_BEG ) {
#line 54 "clpretty.ch"
#line 55 "clpretty.ch"
                                                            (oldListAttr=AddListList(copytree(listAttr), oldListAttr));
#line 55 "clpretty.ch"
                                                            
#line 55 "clpretty.ch"
#line 56 "clpretty.ch"
                                                            
#line 56 "clpretty.ch"
#line 56 "clpretty.ch"
                                                        } else 
#line 56 "clpretty.ch"
                                {
#line 56 "clpretty.ch"
#line 57 "clpretty.ch"
                                    (oldListAttr=AddListList(oldListAttr, copytree(listAttr)));
#line 57 "clpretty.ch"
                                    
#line 57 "clpretty.ch"
#line 58 "clpretty.ch"
                                    
#line 58 "clpretty.ch"
#line 58 "clpretty.ch"
                                }
                                
#line 58 "clpretty.ch"
#line 59 "clpretty.ch"
                                
#line 59 "clpretty.ch"
#line 59 "clpretty.ch"
                            } else 
#line 59 "clpretty.ch"
#line 60 "clpretty.ch"
            (oldListAttr=copytree(listAttr));
#line 60 "clpretty.ch"
            
#line 60 "clpretty.ch"
        
#line 60 "clpretty.ch"
#line 61 "clpretty.ch"
        
#line 61 "clpretty.ch"
#line 61 "clpretty.ch"
    }
    
#line 61 "clpretty.ch"
#line 64 "clpretty.ch"
    if ( ((_inter = (PPTREE)father,1) && 
#line 64 "clpretty.ch"
            (NumberTree(_inter) == pretty::ATTRIBUTS) &&
#line 64 "clpretty.ch"
            1) ) {
#line 64 "clpretty.ch"
#line 65 "clpretty.ch"
                    if ( attr == PRE_ATTR ) {
#line 65 "clpretty.ch"
#line 66 "clpretty.ch"
                                                {
#line 66 "clpretty.ch"
                                                    PPTREE _ptTree0= (PPTREE) 0,_sonTree0= (PPTREE) 0 ;
#line 66 "clpretty.ch"
                                                    ReplaceTree(father, 2, oldListAttr);
#line 66 "clpretty.ch"
                                                }
#line 66 "clpretty.ch"
                                                
#line 66 "clpretty.ch"
#line 67 "clpretty.ch"
                                                
#line 67 "clpretty.ch"
#line 67 "clpretty.ch"
                                              } else 
#line 67 "clpretty.ch"
                    {
#line 67 "clpretty.ch"
#line 68 "clpretty.ch"
                        {
#line 68 "clpretty.ch"
                            PPTREE _ptTree0= (PPTREE) 0,_sonTree0= (PPTREE) 0 ;
#line 68 "clpretty.ch"
                            ReplaceTree(father, 3, oldListAttr);
#line 68 "clpretty.ch"
                        }
#line 68 "clpretty.ch"
                        
#line 68 "clpretty.ch"
#line 69 "clpretty.ch"
                        
#line 69 "clpretty.ch"
#line 69 "clpretty.ch"
                    }
                    
#line 69 "clpretty.ch"
#line 70 "clpretty.ch"
                    
#line 70 "clpretty.ch"
#line 70 "clpretty.ch"
                 } else 
#line 70 "clpretty.ch"
    {
#line 70 "clpretty.ch"
#line 71 "clpretty.ch"
        if ( attr == PRE_ATTR ) {
#line 71 "clpretty.ch"
#line 71 "clpretty.ch"
                                    PTREE   _Baum0 ;
#line 71 "clpretty.ch"
                                    
#line 71 "clpretty.ch"
#line 72 "clpretty.ch"
                                    {
#line 72 "clpretty.ch"
                                        PPTREE _ptTree0= (PPTREE) 0,_ptRes0= (PPTREE) 0;
#line 72 "clpretty.ch"
                                        _ptRes0 = MakeTree(pretty::ATTRIBUTS, 3);
#line 72 "clpretty.ch"
                                        ReplaceTree(_ptRes0, 1, tree);
#line 72 "clpretty.ch"
                                        ReplaceTree(_ptRes0, 2, oldListAttr);
#line 72 "clpretty.ch"
                                        _Baum0 = _ptRes0;
#line 72 "clpretty.ch"
                                    }
#line 72 "clpretty.ch"
                                    
#line 72 "clpretty.ch"
#line 72 "clpretty.ch"
                                    replacetree(father, rank, _Baum0);
#line 72 "clpretty.ch"
#line 73 "clpretty.ch"
                                    
#line 73 "clpretty.ch"
#line 73 "clpretty.ch"
                                  } else 
#line 73 "clpretty.ch"
        {
#line 73 "clpretty.ch"
#line 73 "clpretty.ch"
            PTREE   _Baum1 ;
#line 73 "clpretty.ch"
            
#line 73 "clpretty.ch"
#line 74 "clpretty.ch"
            {
#line 74 "clpretty.ch"
                PPTREE _ptTree0= (PPTREE) 0,_ptRes0= (PPTREE) 0;
#line 74 "clpretty.ch"
                _ptRes0 = MakeTree(pretty::ATTRIBUTS, 3);
#line 74 "clpretty.ch"
                ReplaceTree(_ptRes0, 1, tree);
#line 74 "clpretty.ch"
                ReplaceTree(_ptRes0, 3, oldListAttr);
#line 74 "clpretty.ch"
                _Baum1 = _ptRes0;
#line 74 "clpretty.ch"
            }
#line 74 "clpretty.ch"
            
#line 74 "clpretty.ch"
#line 74 "clpretty.ch"
            replacetree(father, rank, _Baum1);
#line 74 "clpretty.ch"
#line 75 "clpretty.ch"
            
#line 75 "clpretty.ch"
#line 75 "clpretty.ch"
        }
        
#line 75 "clpretty.ch"
#line 76 "clpretty.ch"
        
#line 76 "clpretty.ch"
#line 76 "clpretty.ch"
    }
    
#line 76 "clpretty.ch"
#line 77 "clpretty.ch"
    
#line 77 "clpretty.ch"
#line 77 "clpretty.ch"
}
#line 77 "clpretty.ch"

#line 82 "clpretty.ch"

#line 82 "clpretty.ch"
void clpretty::CompleteCoordinates ( PTREE currTree )
#line 82 "clpretty.ch"
{
#line 82 "clpretty.ch"
    register PPTREE _inter ;
#line 82 "clpretty.ch"

#line 82 "clpretty.ch"
#line 82 "clpretty.ch"
    int _nextVal ;
    
#line 82 "clpretty.ch"
#line 86 "clpretty.ch"
    int x ;
    
#line 86 "clpretty.ch"
#line 87 "clpretty.ch"
    int y ;
    
#line 87 "clpretty.ch"
#line 88 "clpretty.ch"
    int dx ;
    
#line 88 "clpretty.ch"
#line 89 "clpretty.ch"
    int maxDx = 0 ;
    
#line 89 "clpretty.ch"
#line 90 "clpretty.ch"
    int posMark ;
    
#line 90 "clpretty.ch"
#line 91 "clpretty.ch"
    int oldCurrMark = currMark ;
    
#line 91 "clpretty.ch"
#line 92 "clpretty.ch"
    int withCoordinate ;
    
#line 92 "clpretty.ch"
#line 93 "clpretty.ch"
    PTREE   inter ;
#line 93 "clpretty.ch"
    
#line 93 "clpretty.ch"
#line 96 "clpretty.ch"
    if ( ((_inter = (PPTREE)currTree,1) && 
#line 96 "clpretty.ch"
            (NumberTree(_inter) == pretty::ATTRIBUTS) &&
#line 96 "clpretty.ch"
            ((inter=SonTree(_inter,1)),1) &&
#line 96 "clpretty.ch"
            1) ) {
#line 96 "clpretty.ch"
#line 97 "clpretty.ch"
                    CompleteCoordinates(inter);
#line 97 "clpretty.ch"
#line 98 "clpretty.ch"
                    GetCoord(inter, &x, &y, &dx, &posMark);
#line 98 "clpretty.ch"
#line 99 "clpretty.ch"
                    PutCoord(currTree, x, y, dx, posMark);
#line 99 "clpretty.ch"
#line 100 "clpretty.ch"
                    return ;
                    
#line 100 "clpretty.ch"
#line 101 "clpretty.ch"
                    
#line 101 "clpretty.ch"
#line 101 "clpretty.ch"
                 }
#line 101 "clpretty.ch"
#line 102 "clpretty.ch"
    withCoordinate = GetCoord(currTree, &x, &y, &dx, &posMark);
#line 102 "clpretty.ch"
#line 105 "clpretty.ch"
    if ( withCoordinate ) {
#line 105 "clpretty.ch"
#line 106 "clpretty.ch"
                            currMark = posMark ;
#line 106 "clpretty.ch"
#line 107 "clpretty.ch"
                            
#line 107 "clpretty.ch"
#line 107 "clpretty.ch"
                           }
#line 107 "clpretty.ch"
#line 110 "clpretty.ch"
    {
#line 110 "clpretty.ch"
#line 110 "clpretty.ch"
        int _for_slot = 1, _arity = treearity(currTree);
        
#line 110 "clpretty.ch"
#line 110 "clpretty.ch"
        MY_TREE _for_elem = (PPTREE)0 ;
        
#line 110 "clpretty.ch"
#line 110 "clpretty.ch"
#line 110 "clpretty.ch"
        for (; _for_slot <= _arity ; _for_slot++ ) {
#line 110 "clpretty.ch"
#line 110 "clpretty.ch"
            _for_elem = SonTree(currTree, _for_slot);
#line 110 "clpretty.ch"
#line 110 "clpretty.ch"
            if ( _for_elem && NumberTree(_for_elem) != IN_LANGUAGE ) 
#line 110 "clpretty.ch"
#line 110 "clpretty.ch"
                CompleteCoordinates(for_elem);
#line 110 "clpretty.ch"
#line 110 "clpretty.ch"
            
#line 110 "clpretty.ch"
#line 110 "clpretty.ch"
        }
#line 110 "clpretty.ch"
        
#line 110 "clpretty.ch"
#line 110 "clpretty.ch"
        
#line 110 "clpretty.ch"
#line 110 "clpretty.ch"
    }
#line 110 "clpretty.ch"
#line 115 "clpretty.ch"
    if ( !withCoordinate && !(((_inter = (PPTREE)currTree,1) && 
#line 115 "clpretty.ch"
                                    (NumberTree(_inter) == TERM_TREE) &&
#line 115 "clpretty.ch"
                                    1)) ) {
#line 115 "clpretty.ch"
#line 116 "clpretty.ch"
                                            int multiLine = 0 ;
                                            
#line 116 "clpretty.ch"
#line 117 "clpretty.ch"
                                            int newLine = 0 ;
                                            
#line 117 "clpretty.ch"
#line 120 "clpretty.ch"
                                            {
#line 120 "clpretty.ch"
#line 123 "clpretty.ch"
                                                {
#line 123 "clpretty.ch"
#line 123 "clpretty.ch"
                                                    int _for_slot = 1, _arity = treearity(currTree);
                                                    
#line 123 "clpretty.ch"
#line 123 "clpretty.ch"
                                                    MY_TREE _for_elem = (PPTREE)0 ;
                                                    
#line 123 "clpretty.ch"
#line 123 "clpretty.ch"
#line 123 "clpretty.ch"
                                                    for (; _for_slot <= _arity ; _for_slot++ ) {
#line 123 "clpretty.ch"
#line 123 "clpretty.ch"
                                                        _for_elem = SonTree(currTree, _for_slot);
#line 123 "clpretty.ch"
#line 123 "clpretty.ch"
                                                        if ( _for_elem && NumberTree(_for_elem) != IN_LANGUAGE ) {
#line 123 "clpretty.ch"
#line 123 "clpretty.ch"
                                                            GetCoord(for_elem, &x, &y, &dx, &posMark);
#line 123 "clpretty.ch"
#line 123 "clpretty.ch"
                                                            multiLine |= y & 0x2 ;
#line 123 "clpretty.ch"
#line 123 "clpretty.ch"
                                                            newLine |= y & 0x4 ;
#line 123 "clpretty.ch"
#line 123 "clpretty.ch"
                                                            if ( !dx ) {
#line 123 "clpretty.ch"
#line 123 "clpretty.ch"
                                                                if ( ((_inter = (PPTREE)for_elem,1) && 
#line 123 "clpretty.ch"
                                                                        (NumberTree(_inter) == TERM_TREE) &&
#line 123 "clpretty.ch"
                                                                        1) ) 
#line 123 "clpretty.ch"
#line 123 "clpretty.ch"
                                                                    dx = strlen(Value(for_elem));
#line 123 "clpretty.ch"
#line 123 "clpretty.ch"
                                                                
#line 123 "clpretty.ch"
#line 123 "clpretty.ch"
                                                            }
#line 123 "clpretty.ch"
#line 123 "clpretty.ch"
                                                            if ( x + dx > maxDx ) 
#line 123 "clpretty.ch"
#line 123 "clpretty.ch"
                                                                maxDx = x + dx ;
#line 123 "clpretty.ch"
#line 123 "clpretty.ch"
                                                            
#line 123 "clpretty.ch"
#line 123 "clpretty.ch"
                                                        }
#line 123 "clpretty.ch"
#line 123 "clpretty.ch"
                                                        
#line 123 "clpretty.ch"
#line 123 "clpretty.ch"
                                                    }
#line 123 "clpretty.ch"
                                                    
#line 123 "clpretty.ch"
#line 123 "clpretty.ch"
                                                    
#line 123 "clpretty.ch"
#line 123 "clpretty.ch"
                                                }
#line 123 "clpretty.ch"
#line 134 "clpretty.ch"
                                                
#line 134 "clpretty.ch"
#line 134 "clpretty.ch"
                                            }
                                            
#line 134 "clpretty.ch"
#line 137 "clpretty.ch"
                                            if ( newLine ) 
#line 137 "clpretty.ch"
#line 138 "clpretty.ch"
                                                multiLine = 0x2 ;
#line 138 "clpretty.ch"
#line 139 "clpretty.ch"
                                            PutCoord(currTree, 0, newLine | multiLine, maxDx, currMark);
#line 139 "clpretty.ch"
#line 140 "clpretty.ch"
                                            
#line 140 "clpretty.ch"
#line 140 "clpretty.ch"
                                          }
#line 140 "clpretty.ch"
#line 143 "clpretty.ch"
    currMark = oldCurrMark ;
#line 143 "clpretty.ch"
#line 144 "clpretty.ch"
    
#line 144 "clpretty.ch"
#line 144 "clpretty.ch"
}
#line 144 "clpretty.ch"

#line 148 "clpretty.ch"

#line 148 "clpretty.ch"
int clpretty::GetBoxSize ( PTREE box )
#line 148 "clpretty.ch"
{
#line 148 "clpretty.ch"
    register PPTREE _inter ;
#line 148 "clpretty.ch"

#line 148 "clpretty.ch"
#line 148 "clpretty.ch"
    int _nextVal ;
    
#line 148 "clpretty.ch"
#line 151 "clpretty.ch"
    int x, y, dx, posMark ;
    
#line 151 "clpretty.ch"
#line 152 "clpretty.ch"
    int maxDx = -10000 ;
    
#line 152 "clpretty.ch"
#line 154 "clpretty.ch"
    GetCoord(box, &x, &y, &dx, &posMark);
#line 154 "clpretty.ch"
#line 155 "clpretty.ch"
    if ( dx <= 1 ) {
#line 155 "clpretty.ch"
#line 156 "clpretty.ch"
                        if ( ((_inter = (PPTREE)box,1) && 
#line 156 "clpretty.ch"
                                (NumberTree(_inter) == TERM_TREE) &&
#line 156 "clpretty.ch"
                                1) ) 
#line 156 "clpretty.ch"
#line 157 "clpretty.ch"
                            return x + strlen(Value(box));
                        
#line 157 "clpretty.ch"
                        else 
#line 158 "clpretty.ch"
                        {
#line 158 "clpretty.ch"
#line 159 "clpretty.ch"
                            {
#line 159 "clpretty.ch"
#line 159 "clpretty.ch"
                                int _for_slot = 1, _arity = treearity(box);
                                
#line 159 "clpretty.ch"
#line 159 "clpretty.ch"
                                MY_TREE _for_elem = (PPTREE)0 ;
                                
#line 159 "clpretty.ch"
#line 159 "clpretty.ch"
#line 159 "clpretty.ch"
                                for (; _for_slot <= _arity ; _for_slot++ ) {
#line 159 "clpretty.ch"
#line 159 "clpretty.ch"
                                    _for_elem = SonTree(box, _for_slot);
#line 159 "clpretty.ch"
#line 159 "clpretty.ch"
                                    if ( _for_elem && NumberTree(_for_elem) != IN_LANGUAGE ) {
#line 159 "clpretty.ch"
#line 159 "clpretty.ch"
                                        dx = GetBoxSize(for_elem);
#line 159 "clpretty.ch"
#line 159 "clpretty.ch"
                                        if ( dx > maxDx ) 
#line 159 "clpretty.ch"
#line 159 "clpretty.ch"
                                            maxDx = dx ;
#line 159 "clpretty.ch"
#line 159 "clpretty.ch"
                                        
#line 159 "clpretty.ch"
#line 159 "clpretty.ch"
                                    }
#line 159 "clpretty.ch"
#line 159 "clpretty.ch"
                                    
#line 159 "clpretty.ch"
#line 159 "clpretty.ch"
                                }
#line 159 "clpretty.ch"
                                
#line 159 "clpretty.ch"
#line 159 "clpretty.ch"
                                
#line 159 "clpretty.ch"
#line 159 "clpretty.ch"
                            }
#line 159 "clpretty.ch"
#line 164 "clpretty.ch"
                            return x + maxDx ;
                            
#line 164 "clpretty.ch"
#line 165 "clpretty.ch"
                            
#line 165 "clpretty.ch"
#line 165 "clpretty.ch"
                        }
                        
#line 165 "clpretty.ch"
#line 166 "clpretty.ch"
                        
#line 166 "clpretty.ch"
#line 166 "clpretty.ch"
                     } else 
#line 166 "clpretty.ch"
#line 167 "clpretty.ch"
        return x + dx ;
        
#line 167 "clpretty.ch"
    
#line 167 "clpretty.ch"
#line 168 "clpretty.ch"
    
#line 168 "clpretty.ch"
#line 168 "clpretty.ch"
}
#line 168 "clpretty.ch"

#line 172 "clpretty.ch"

#line 172 "clpretty.ch"
void clpretty::TraitMark ( PTREE tree, int newMark )
#line 172 "clpretty.ch"
{
#line 172 "clpretty.ch"
#line 172 "clpretty.ch"
    int _nextVal ;
    
#line 172 "clpretty.ch"
#line 175 "clpretty.ch"
    int x, y, dx, dy ;
    
#line 175 "clpretty.ch"
#line 177 "clpretty.ch"
    {
#line 177 "clpretty.ch"
#line 177 "clpretty.ch"
        ItPtree _iterator1 (tree, (PPTREE) 0) ;
        
#line 177 "clpretty.ch"
#line 177 "clpretty.ch"
        PPTREE  _for_elem ;
        
#line 177 "clpretty.ch"
#line 177 "clpretty.ch"
        _iterator1.AllSearch(1);
#line 177 "clpretty.ch"
#line 177 "clpretty.ch"
        while ( _for_elem = _iterator1++ ) {
#line 177 "clpretty.ch"
#line 177 "clpretty.ch"
            {
#line 177 "clpretty.ch"
#line 178 "clpretty.ch"
                if ( GetCoord(for_elem, &x, &y, &dx, &dy) ) 
#line 178 "clpretty.ch"
#line 179 "clpretty.ch"
                    PutCoord(for_elem, x, y, dx, newMark);
#line 179 "clpretty.ch"
#line 180 "clpretty.ch"
                
#line 180 "clpretty.ch"
#line 180 "clpretty.ch"
            }
            
#line 180 "clpretty.ch"
#line 180 "clpretty.ch"
            _iterator1.Current(_for_elem);
#line 180 "clpretty.ch"
#line 180 "clpretty.ch"
            continue ;
            
#line 180 "clpretty.ch"
#line 180 "clpretty.ch"
        for_continue1 : 
#line 180 "clpretty.ch"
#line 180 "clpretty.ch"
            _iterator1.Current(_for_elem);
#line 180 "clpretty.ch"
#line 180 "clpretty.ch"
            _iterator1.SkipSon(1);
#line 180 "clpretty.ch"
#line 180 "clpretty.ch"
            continue ;
            
#line 180 "clpretty.ch"
#line 180 "clpretty.ch"
        for_break1 : 
#line 180 "clpretty.ch"
#line 180 "clpretty.ch"
            break ;
            
#line 180 "clpretty.ch"
#line 180 "clpretty.ch"
            
#line 180 "clpretty.ch"
#line 180 "clpretty.ch"
        }
#line 180 "clpretty.ch"
#line 180 "clpretty.ch"
        
#line 180 "clpretty.ch"
#line 180 "clpretty.ch"
    }
    
#line 180 "clpretty.ch"
#line 181 "clpretty.ch"
    
#line 181 "clpretty.ch"
#line 181 "clpretty.ch"
}
#line 181 "clpretty.ch"

#line 185 "clpretty.ch"

#line 185 "clpretty.ch"
void clpretty::TraiterExp3 ( PTREE tree, int x0 )
#line 185 "clpretty.ch"
{
#line 185 "clpretty.ch"
    register PPTREE _inter ;
#line 185 "clpretty.ch"

#line 185 "clpretty.ch"
#line 185 "clpretty.ch"
    PTREE   _Baum0 ;
#line 185 "clpretty.ch"
    
#line 185 "clpretty.ch"
#line 185 "clpretty.ch"
    int _nextVal ;
    
#line 185 "clpretty.ch"
#line 188 "clpretty.ch"
    PTREE   son1, son2, list1, list2 ;
#line 188 "clpretty.ch"
    
#line 188 "clpretty.ch"
#line 189 "clpretty.ch"
    PTREE   refTree ;
#line 189 "clpretty.ch"
    
#line 189 "clpretty.ch"
#line 190 "clpretty.ch"
    char    string [3];
    
#line 190 "clpretty.ch"
#line 191 "clpretty.ch"
    int posRef, colRef, x, y, dx, dy, delta, ret, y0 ;
    
#line 191 "clpretty.ch"
#line 192 "clpretty.ch"
    PTREE   postAttribute ;
#line 192 "clpretty.ch"
    
#line 192 "clpretty.ch"
#line 193 "clpretty.ch"
    PTREE   preAttribute ;
#line 193 "clpretty.ch"
    
#line 193 "clpretty.ch"
#line 194 "clpretty.ch"
    int maxDx = 0 ;
    
#line 194 "clpretty.ch"
#line 197 "clpretty.ch"
    GetCoord(tree, &x, &y, &dx, &colRef);
#line 197 "clpretty.ch"
#line 198 "clpretty.ch"
    x0 += x ;
#line 198 "clpretty.ch"
#line 199 "clpretty.ch"
    if ( x0 + dx <= rightMargin ) 
#line 199 "clpretty.ch"
#line 200 "clpretty.ch"
        return ;
    
#line 200 "clpretty.ch"
#line 201 "clpretty.ch"
    MarkCoordTree(tree, x0, 0);
#line 201 "clpretty.ch"
#line 204 "clpretty.ch"
    ((_inter = (PPTREE)tree,1) && 
#line 204 "clpretty.ch"
        ((son1=SonTree(_inter,2)),1) &&
#line 204 "clpretty.ch"
        ((son2=SonTree(_inter,3)),1) &&
#line 204 "clpretty.ch"
        1);
#line 204 "clpretty.ch"
    ;
#line 204 "clpretty.ch"
#line 207 "clpretty.ch"
    if ( colRef == markTab ) {
#line 207 "clpretty.ch"
#line 208 "clpretty.ch"
                                posRef = TAB_VALUE(colRef, nbTab + 1);
#line 208 "clpretty.ch"
#line 209 "clpretty.ch"
                                sprintf(string, "%d", nbTab + 1);
#line 209 "clpretty.ch"
#line 210 "clpretty.ch"
                                
#line 210 "clpretty.ch"
#line 210 "clpretty.ch"
                               } else 
#line 210 "clpretty.ch"
    {
#line 210 "clpretty.ch"
#line 211 "clpretty.ch"
        posRef = TAB_VALUE(colRef, 1);
#line 211 "clpretty.ch"
#line 212 "clpretty.ch"
        strcpy(string, "1");
#line 212 "clpretty.ch"
#line 213 "clpretty.ch"
        
#line 213 "clpretty.ch"
#line 213 "clpretty.ch"
    }
    
#line 213 "clpretty.ch"
#line 214 "clpretty.ch"
    {
#line 214 "clpretty.ch"
        PPTREE _ptTree0=(PPTREE) 0;
#line 214 "clpretty.ch"
        _ptTree0 = (PPTREE) 0;
#line 214 "clpretty.ch"
        {
#line 214 "clpretty.ch"
            PPTREE _ptTree1= (PPTREE) 0 ;
#line 214 "clpretty.ch"
            {
#line 214 "clpretty.ch"
                PPTREE _ptTree2= (PPTREE) 0,_ptRes2= (PPTREE) 0;
#line 214 "clpretty.ch"
                _ptRes2 = MakeTree(pretty::NEWLINE, 1);
#line 214 "clpretty.ch"
                _ptTree2 = MakeString("1") ;
#line 214 "clpretty.ch"
                ReplaceTree(_ptRes2, 1, _ptTree2);
#line 214 "clpretty.ch"
                _ptTree1 = _ptRes2;
#line 214 "clpretty.ch"
            }
#line 214 "clpretty.ch"
            _ptTree0 = AddList( _ptTree0,_ptTree1);
#line 214 "clpretty.ch"
        }
#line 214 "clpretty.ch"
        {
#line 214 "clpretty.ch"
            PPTREE _ptTree1= (PPTREE) 0 ;
#line 214 "clpretty.ch"
            {
#line 214 "clpretty.ch"
                PPTREE _ptTree2= (PPTREE) 0,_ptRes2= (PPTREE) 0;
#line 214 "clpretty.ch"
                _ptRes2 = MakeTree(pretty::TAB, 1);
#line 214 "clpretty.ch"
                _ptTree2 = StoreRef(MakeString(string));
#line 214 "clpretty.ch"
                ReplaceTree(_ptRes2, 1, _ptTree2);
#line 214 "clpretty.ch"
                _ptTree1 = _ptRes2;
#line 214 "clpretty.ch"
            }
#line 214 "clpretty.ch"
            _ptTree0 = AddList( _ptTree0,_ptTree1);
#line 214 "clpretty.ch"
        }
#line 214 "clpretty.ch"
        {
#line 214 "clpretty.ch"
            PPTREE _ptTree1= (PPTREE) 0 ;
#line 214 "clpretty.ch"
            {
#line 214 "clpretty.ch"
                PPTREE _ptTree2= (PPTREE) 0,_ptRes2= (PPTREE) 0;
#line 214 "clpretty.ch"
                _ptRes2 = MakeTree(pretty::MARK, 0);
#line 214 "clpretty.ch"
                _ptTree1 = _ptRes2;
#line 214 "clpretty.ch"
            }
#line 214 "clpretty.ch"
            _ptTree0 = AddList( _ptTree0,_ptTree1);
#line 214 "clpretty.ch"
        }
#line 214 "clpretty.ch"
        {
#line 214 "clpretty.ch"
            PPTREE _ptTree1= (PPTREE) 0 ;
#line 214 "clpretty.ch"
            {
#line 214 "clpretty.ch"
                PPTREE _ptTree2= (PPTREE) 0,_ptRes2= (PPTREE) 0;
#line 214 "clpretty.ch"
                _ptRes2 = MakeTree(pretty::STR, 1);
#line 214 "clpretty.ch"
                _ptTree2 = MakeString("   ") ;
#line 214 "clpretty.ch"
                ReplaceTree(_ptRes2, 1, _ptTree2);
#line 214 "clpretty.ch"
                _ptTree1 = _ptRes2;
#line 214 "clpretty.ch"
            }
#line 214 "clpretty.ch"
            _ptTree0 = AddList( _ptTree0,_ptTree1);
#line 214 "clpretty.ch"
        }
#line 214 "clpretty.ch"
        preAttribute = _ptTree0;
#line 214 "clpretty.ch"
        ;
#line 214 "clpretty.ch"
    }
#line 214 "clpretty.ch"
    
#line 214 "clpretty.ch"
#line 215 "clpretty.ch"
    {
#line 215 "clpretty.ch"
        PPTREE _ptTree0=(PPTREE) 0;
#line 215 "clpretty.ch"
        _ptTree0 = (PPTREE) 0;
#line 215 "clpretty.ch"
        {
#line 215 "clpretty.ch"
            PPTREE _ptTree1= (PPTREE) 0 ;
#line 215 "clpretty.ch"
            {
#line 215 "clpretty.ch"
                PPTREE _ptTree2= (PPTREE) 0,_ptRes2= (PPTREE) 0;
#line 215 "clpretty.ch"
                _ptRes2 = MakeTree(pretty::NEWLINE, 1);
#line 215 "clpretty.ch"
                _ptTree2 = MakeString("1") ;
#line 215 "clpretty.ch"
                ReplaceTree(_ptRes2, 1, _ptTree2);
#line 215 "clpretty.ch"
                _ptTree1 = _ptRes2;
#line 215 "clpretty.ch"
            }
#line 215 "clpretty.ch"
            _ptTree0 = AddList( _ptTree0,_ptTree1);
#line 215 "clpretty.ch"
        }
#line 215 "clpretty.ch"
        postAttribute = _ptTree0;
#line 215 "clpretty.ch"
        ;
#line 215 "clpretty.ch"
    }
#line 215 "clpretty.ch"
    
#line 215 "clpretty.ch"
#line 216 "clpretty.ch"
    PutAttr(son1, preAttribute, PRE_ATTR, PUT_BEG);
#line 216 "clpretty.ch"
#line 217 "clpretty.ch"
    PutAttr(son1, postAttribute, POST_ATTR, PUT_END);
#line 217 "clpretty.ch"
#line 220 "clpretty.ch"
    {
#line 220 "clpretty.ch"
        PPTREE _ptTree0=(PPTREE) 0;
#line 220 "clpretty.ch"
        _ptTree0 = (PPTREE) 0;
#line 220 "clpretty.ch"
        {
#line 220 "clpretty.ch"
            PPTREE _ptTree1= (PPTREE) 0 ;
#line 220 "clpretty.ch"
            {
#line 220 "clpretty.ch"
                PPTREE _ptTree2= (PPTREE) 0,_ptRes2= (PPTREE) 0;
#line 220 "clpretty.ch"
                _ptRes2 = MakeTree(pretty::UNMARK, 0);
#line 220 "clpretty.ch"
                _ptTree1 = _ptRes2;
#line 220 "clpretty.ch"
            }
#line 220 "clpretty.ch"
            _ptTree0 = AddList( _ptTree0,_ptTree1);
#line 220 "clpretty.ch"
        }
#line 220 "clpretty.ch"
        postAttribute = _ptTree0;
#line 220 "clpretty.ch"
        ;
#line 220 "clpretty.ch"
    }
#line 220 "clpretty.ch"
    
#line 220 "clpretty.ch"
#line 221 "clpretty.ch"
    PutAttr(son2, postAttribute, POST_ATTR, PUT_END);
#line 221 "clpretty.ch"
#line 224 "clpretty.ch"
    GetCoord(son1, &x, &y, &dx, &dy);
#line 224 "clpretty.ch"
#line 225 "clpretty.ch"
    _Baum0 = (PPTREE) 0 ;
#line 225 "clpretty.ch"
    
#line 225 "clpretty.ch"
#line 225 "clpretty.ch"
    GetCoordAbs(son1, _Baum0, &x0, &y0);
#line 225 "clpretty.ch"
#line 226 "clpretty.ch"
    delta = posRef + 3 - x0 ;
#line 226 "clpretty.ch"
#line 227 "clpretty.ch"
    PutCoord(son1, x + delta, y, dx, dy);
#line 227 "clpretty.ch"
#line 228 "clpretty.ch"
    if ( x + delta + dx > maxDx ) 
#line 228 "clpretty.ch"
#line 229 "clpretty.ch"
        maxDx = x + delta + dx ;
#line 229 "clpretty.ch"
#line 230 "clpretty.ch"
    TraitMark(son1, posRef);
#line 230 "clpretty.ch"
#line 233 "clpretty.ch"
    delta = posRef - x0 - dx ;
#line 233 "clpretty.ch"
#line 234 "clpretty.ch"
    GetCoord(son2, &x, &y, &dx, &dy);
#line 234 "clpretty.ch"
#line 235 "clpretty.ch"
    PutCoord(son2, x + delta, y, dx, dy);
#line 235 "clpretty.ch"
#line 236 "clpretty.ch"
    if ( x + delta + dx > maxDx ) 
#line 236 "clpretty.ch"
#line 237 "clpretty.ch"
        maxDx = x + delta + dx ;
#line 237 "clpretty.ch"
#line 238 "clpretty.ch"
    TraitMark(son2, posRef);
#line 238 "clpretty.ch"
#line 241 "clpretty.ch"
    GetCoord(sontree(tree, 1), &x, &y, &dx, &dy);
#line 241 "clpretty.ch"
#line 242 "clpretty.ch"
    if ( x + dx > maxDx ) 
#line 242 "clpretty.ch"
#line 243 "clpretty.ch"
        maxDx = x + dx ;
#line 243 "clpretty.ch"
#line 244 "clpretty.ch"
    GetCoord(tree, &x, &y, &dx, &dy);
#line 244 "clpretty.ch"
#line 245 "clpretty.ch"
    PutCoord(tree, x, y, maxDx, dy);
#line 245 "clpretty.ch"
#line 248 "clpretty.ch"
    UnMarkCoordTree(tree);
#line 248 "clpretty.ch"
#line 249 "clpretty.ch"
    
#line 249 "clpretty.ch"
#line 249 "clpretty.ch"
}
#line 249 "clpretty.ch"

#line 253 "clpretty.ch"

#line 253 "clpretty.ch"
void clpretty::TraiterForDeclaration ( PTREE tree, int x0 )
#line 253 "clpretty.ch"
{
#line 253 "clpretty.ch"
    register PPTREE _inter ;
#line 253 "clpretty.ch"

#line 253 "clpretty.ch"
#line 253 "clpretty.ch"
    int _nextVal ;
    
#line 253 "clpretty.ch"
#line 256 "clpretty.ch"
    PTREE   son0, son1, son2 ;
#line 256 "clpretty.ch"
    
#line 256 "clpretty.ch"
#line 257 "clpretty.ch"
    PTREE   listAttrib ;
#line 257 "clpretty.ch"
    
#line 257 "clpretty.ch"
#line 258 "clpretty.ch"
    int delta = 0 ;
    
#line 258 "clpretty.ch"
#line 259 "clpretty.ch"
    int x, y, dx, colRef, colRefOrg ;
    
#line 259 "clpretty.ch"
#line 260 "clpretty.ch"
    int aTreatment = 0 ;
    
#line 260 "clpretty.ch"
#line 263 "clpretty.ch"
    GetCoord(tree, &x, &y, &dx, &colRefOrg);
#line 263 "clpretty.ch"
#line 264 "clpretty.ch"
    x0 += x ;
#line 264 "clpretty.ch"
#line 265 "clpretty.ch"
    if ( x0 + dx <= rightMargin ) 
#line 265 "clpretty.ch"
#line 266 "clpretty.ch"
        return ;
    
#line 266 "clpretty.ch"
#line 267 "clpretty.ch"
    MarkCoordTree(tree, x0, 0);
#line 267 "clpretty.ch"
#line 270 "clpretty.ch"
    ((_inter = (PPTREE)tree,1) && 
#line 270 "clpretty.ch"
        ((son0=SonTree(_inter,1)),1) &&
#line 270 "clpretty.ch"
        ((son1=SonTree(_inter,2)),1) &&
#line 270 "clpretty.ch"
        ((son2=SonTree(_inter,3)),1) &&
#line 270 "clpretty.ch"
        1);
#line 270 "clpretty.ch"
    ;
#line 270 "clpretty.ch"
#line 273 "clpretty.ch"
    {
#line 273 "clpretty.ch"
#line 274 "clpretty.ch"
        GetCoord(son1, &x, &y, &dx, &colRef);
#line 274 "clpretty.ch"
#line 275 "clpretty.ch"
        colRef = TAB_VALUE(colRef, 1);
#line 275 "clpretty.ch"
#line 276 "clpretty.ch"
        if ( x0 + x + dx >= rightMargin && (delta = colRef - x0 - x) < 0 ) {
#line 276 "clpretty.ch"
#line 277 "clpretty.ch"
                                                                                        {
#line 277 "clpretty.ch"
                                                                                            PPTREE _ptTree0=(PPTREE) 0;
#line 277 "clpretty.ch"
                                                                                            _ptTree0 = (PPTREE) 0;
#line 277 "clpretty.ch"
                                                                                            {
#line 277 "clpretty.ch"
                                                                                                PPTREE _ptTree1= (PPTREE) 0 ;
#line 277 "clpretty.ch"
                                                                                                {
#line 277 "clpretty.ch"
                                                                                                    PPTREE _ptTree2= (PPTREE) 0,_ptRes2= (PPTREE) 0;
#line 277 "clpretty.ch"
                                                                                                    _ptRes2 = MakeTree(pretty::NEWLINE, 1);
#line 277 "clpretty.ch"
                                                                                                    _ptTree2 = MakeString("1") ;
#line 277 "clpretty.ch"
                                                                                                    ReplaceTree(_ptRes2, 1, _ptTree2);
#line 277 "clpretty.ch"
                                                                                                    _ptTree1 = _ptRes2;
#line 277 "clpretty.ch"
                                                                                                }
#line 277 "clpretty.ch"
                                                                                                _ptTree0 = AddList( _ptTree0,_ptTree1);
#line 277 "clpretty.ch"
                                                                                            }
#line 277 "clpretty.ch"
                                                                                            {
#line 277 "clpretty.ch"
                                                                                                PPTREE _ptTree1= (PPTREE) 0 ;
#line 277 "clpretty.ch"
                                                                                                {
#line 277 "clpretty.ch"
                                                                                                    PPTREE _ptTree2= (PPTREE) 0,_ptRes2= (PPTREE) 0;
#line 277 "clpretty.ch"
                                                                                                    _ptRes2 = MakeTree(pretty::TAB, 1);
#line 277 "clpretty.ch"
                                                                                                    _ptTree2 = MakeString("1") ;
#line 277 "clpretty.ch"
                                                                                                    ReplaceTree(_ptRes2, 1, _ptTree2);
#line 277 "clpretty.ch"
                                                                                                    _ptTree1 = _ptRes2;
#line 277 "clpretty.ch"
                                                                                                }
#line 277 "clpretty.ch"
                                                                                                _ptTree0 = AddList( _ptTree0,_ptTree1);
#line 277 "clpretty.ch"
                                                                                            }
#line 277 "clpretty.ch"
                                                                                            {
#line 277 "clpretty.ch"
                                                                                                PPTREE _ptTree1= (PPTREE) 0 ;
#line 277 "clpretty.ch"
                                                                                                {
#line 277 "clpretty.ch"
                                                                                                    PPTREE _ptTree2= (PPTREE) 0,_ptRes2= (PPTREE) 0;
#line 277 "clpretty.ch"
                                                                                                    _ptRes2 = MakeTree(pretty::MARK, 0);
#line 277 "clpretty.ch"
                                                                                                    _ptTree1 = _ptRes2;
#line 277 "clpretty.ch"
                                                                                                }
#line 277 "clpretty.ch"
                                                                                                _ptTree0 = AddList( _ptTree0,_ptTree1);
#line 277 "clpretty.ch"
                                                                                            }
#line 277 "clpretty.ch"
                                                                                            listAttrib = _ptTree0;
#line 277 "clpretty.ch"
                                                                                            ;
#line 277 "clpretty.ch"
                                                                                        }
#line 277 "clpretty.ch"
                                                                                        
#line 277 "clpretty.ch"
#line 278 "clpretty.ch"
                                                                                        PutAttr(son1, listAttrib, PRE_ATTR, PUT_BEG);
#line 278 "clpretty.ch"
#line 279 "clpretty.ch"
                                                                                        {
#line 279 "clpretty.ch"
                                                                                            PPTREE _ptTree0=(PPTREE) 0;
#line 279 "clpretty.ch"
                                                                                            _ptTree0 = (PPTREE) 0;
#line 279 "clpretty.ch"
                                                                                            {
#line 279 "clpretty.ch"
                                                                                                PPTREE _ptTree1= (PPTREE) 0 ;
#line 279 "clpretty.ch"
                                                                                                {
#line 279 "clpretty.ch"
                                                                                                    PPTREE _ptTree2= (PPTREE) 0,_ptRes2= (PPTREE) 0;
#line 279 "clpretty.ch"
                                                                                                    _ptRes2 = MakeTree(pretty::UNMARK, 0);
#line 279 "clpretty.ch"
                                                                                                    _ptTree1 = _ptRes2;
#line 279 "clpretty.ch"
                                                                                                }
#line 279 "clpretty.ch"
                                                                                                _ptTree0 = AddList( _ptTree0,_ptTree1);
#line 279 "clpretty.ch"
                                                                                            }
#line 279 "clpretty.ch"
                                                                                            listAttrib = _ptTree0;
#line 279 "clpretty.ch"
                                                                                            ;
#line 279 "clpretty.ch"
                                                                                        }
#line 279 "clpretty.ch"
                                                                                        
#line 279 "clpretty.ch"
#line 280 "clpretty.ch"
                                                                                        PutAttr(son1, listAttrib, POST_ATTR, PUT_END);
#line 280 "clpretty.ch"
#line 281 "clpretty.ch"
                                                                                        PutCoord(son1, x + delta, y, dx, colRef);
#line 281 "clpretty.ch"
#line 282 "clpretty.ch"
                                                                                        TraitMark(son1, colRef);
#line 282 "clpretty.ch"
#line 283 "clpretty.ch"
                                                                                        aTreatment = 1 ;
#line 283 "clpretty.ch"
#line 284 "clpretty.ch"
                                                                                        
#line 284 "clpretty.ch"
#line 284 "clpretty.ch"
                                                                                     }
#line 284 "clpretty.ch"
#line 285 "clpretty.ch"
        
#line 285 "clpretty.ch"
#line 285 "clpretty.ch"
    }
    
#line 285 "clpretty.ch"
#line 288 "clpretty.ch"
    if ( !((!son2)) ) {
#line 288 "clpretty.ch"
#line 289 "clpretty.ch"
                            GetCoord(son2, &x, &y, &dx, &colRef);
#line 289 "clpretty.ch"
#line 290 "clpretty.ch"
                            colRef = TAB_VALUE(colRef, 1);
#line 290 "clpretty.ch"
#line 291 "clpretty.ch"
                            if ( x0 + x + dx >= rightMargin && (delta = colRef - x0 - x) < 0 || aTreatment ) {
#line 291 "clpretty.ch"
#line 292 "clpretty.ch"
{
#line 292 "clpretty.ch"
    PPTREE _ptTree0=(PPTREE) 0;
#line 292 "clpretty.ch"
    _ptTree0 = (PPTREE) 0;
#line 292 "clpretty.ch"
    {
#line 292 "clpretty.ch"
        PPTREE _ptTree1= (PPTREE) 0 ;
#line 292 "clpretty.ch"
        {
#line 292 "clpretty.ch"
            PPTREE _ptTree2= (PPTREE) 0,_ptRes2= (PPTREE) 0;
#line 292 "clpretty.ch"
            _ptRes2 = MakeTree(pretty::NEWLINE, 1);
#line 292 "clpretty.ch"
            _ptTree2 = MakeString("1") ;
#line 292 "clpretty.ch"
            ReplaceTree(_ptRes2, 1, _ptTree2);
#line 292 "clpretty.ch"
            _ptTree1 = _ptRes2;
#line 292 "clpretty.ch"
        }
#line 292 "clpretty.ch"
        _ptTree0 = AddList( _ptTree0,_ptTree1);
#line 292 "clpretty.ch"
    }
#line 292 "clpretty.ch"
    {
#line 292 "clpretty.ch"
        PPTREE _ptTree1= (PPTREE) 0 ;
#line 292 "clpretty.ch"
        {
#line 292 "clpretty.ch"
            PPTREE _ptTree2= (PPTREE) 0,_ptRes2= (PPTREE) 0;
#line 292 "clpretty.ch"
            _ptRes2 = MakeTree(pretty::TAB, 1);
#line 292 "clpretty.ch"
            _ptTree2 = MakeString("1") ;
#line 292 "clpretty.ch"
            ReplaceTree(_ptRes2, 1, _ptTree2);
#line 292 "clpretty.ch"
            _ptTree1 = _ptRes2;
#line 292 "clpretty.ch"
        }
#line 292 "clpretty.ch"
        _ptTree0 = AddList( _ptTree0,_ptTree1);
#line 292 "clpretty.ch"
    }
#line 292 "clpretty.ch"
    {
#line 292 "clpretty.ch"
        PPTREE _ptTree1= (PPTREE) 0 ;
#line 292 "clpretty.ch"
        {
#line 292 "clpretty.ch"
            PPTREE _ptTree2= (PPTREE) 0,_ptRes2= (PPTREE) 0;
#line 292 "clpretty.ch"
            _ptRes2 = MakeTree(pretty::MARK, 0);
#line 292 "clpretty.ch"
            _ptTree1 = _ptRes2;
#line 292 "clpretty.ch"
        }
#line 292 "clpretty.ch"
        _ptTree0 = AddList( _ptTree0,_ptTree1);
#line 292 "clpretty.ch"
    }
#line 292 "clpretty.ch"
    listAttrib = _ptTree0;
#line 292 "clpretty.ch"
    ;
#line 292 "clpretty.ch"
}
#line 292 "clpretty.ch"

#line 292 "clpretty.ch"
#line 293 "clpretty.ch"
PutAttr(son2, listAttrib, PRE_ATTR, PUT_BEG);
#line 293 "clpretty.ch"
#line 294 "clpretty.ch"
{
#line 294 "clpretty.ch"
    PPTREE _ptTree0=(PPTREE) 0;
#line 294 "clpretty.ch"
    _ptTree0 = (PPTREE) 0;
#line 294 "clpretty.ch"
    {
#line 294 "clpretty.ch"
        PPTREE _ptTree1= (PPTREE) 0 ;
#line 294 "clpretty.ch"
        {
#line 294 "clpretty.ch"
            PPTREE _ptTree2= (PPTREE) 0,_ptRes2= (PPTREE) 0;
#line 294 "clpretty.ch"
            _ptRes2 = MakeTree(pretty::UNMARK, 0);
#line 294 "clpretty.ch"
            _ptTree1 = _ptRes2;
#line 294 "clpretty.ch"
        }
#line 294 "clpretty.ch"
        _ptTree0 = AddList( _ptTree0,_ptTree1);
#line 294 "clpretty.ch"
    }
#line 294 "clpretty.ch"
    listAttrib = _ptTree0;
#line 294 "clpretty.ch"
    ;
#line 294 "clpretty.ch"
}
#line 294 "clpretty.ch"

#line 294 "clpretty.ch"
#line 295 "clpretty.ch"
PutAttr(son2, listAttrib, POST_ATTR, PUT_END);
#line 295 "clpretty.ch"
#line 296 "clpretty.ch"
TraitMark(son2, colRef);
#line 296 "clpretty.ch"
#line 297 "clpretty.ch"
aTreatment = 1 ;
#line 297 "clpretty.ch"
#line 298 "clpretty.ch"

#line 298 "clpretty.ch"
#line 298 "clpretty.ch"
                                                                                                                        }
#line 298 "clpretty.ch"
#line 299 "clpretty.ch"
                            PutCoord(son2, x + delta, y, dx, colRef);
#line 299 "clpretty.ch"
#line 300 "clpretty.ch"
                            
#line 300 "clpretty.ch"
#line 300 "clpretty.ch"
                        }
#line 300 "clpretty.ch"
#line 303 "clpretty.ch"
    if ( aTreatment ) {
#line 303 "clpretty.ch"
#line 304 "clpretty.ch"
                        char    string [10];
                        
#line 304 "clpretty.ch"
#line 305 "clpretty.ch"
                        GetCoord(son0, &x, &y, &dx, &colRefOrg);
#line 305 "clpretty.ch"
#line 306 "clpretty.ch"
                        sprintf(string, "%d", colRefOrg);
#line 306 "clpretty.ch"
#line 307 "clpretty.ch"
                        {
#line 307 "clpretty.ch"
                            PPTREE _ptTree0=(PPTREE) 0;
#line 307 "clpretty.ch"
                            _ptTree0 = (PPTREE) 0;
#line 307 "clpretty.ch"
                            {
#line 307 "clpretty.ch"
                                PPTREE _ptTree1= (PPTREE) 0 ;
#line 307 "clpretty.ch"
                                {
#line 307 "clpretty.ch"
                                    PPTREE _ptTree2= (PPTREE) 0,_ptRes2= (PPTREE) 0;
#line 307 "clpretty.ch"
                                    _ptRes2 = MakeTree(pretty::TAB_VIRT, 2);
#line 307 "clpretty.ch"
                                    _ptTree2 = StoreRef(MakeString(string));
#line 307 "clpretty.ch"
                                    ReplaceTree(_ptRes2, 1, _ptTree2);
#line 307 "clpretty.ch"
                                    _ptTree2 = MakeString("1") ;
#line 307 "clpretty.ch"
                                    ReplaceTree(_ptRes2, 2, _ptTree2);
#line 307 "clpretty.ch"
                                    _ptTree1 = _ptRes2;
#line 307 "clpretty.ch"
                                }
#line 307 "clpretty.ch"
                                _ptTree0 = AddList( _ptTree0,_ptTree1);
#line 307 "clpretty.ch"
                            }
#line 307 "clpretty.ch"
                            listAttrib = _ptTree0;
#line 307 "clpretty.ch"
                            ;
#line 307 "clpretty.ch"
                        }
#line 307 "clpretty.ch"
                        
#line 307 "clpretty.ch"
#line 308 "clpretty.ch"
                        PutAttr(son0, listAttrib, PRE_ATTR, PUT_BEG);
#line 308 "clpretty.ch"
#line 309 "clpretty.ch"
                        
#line 309 "clpretty.ch"
#line 309 "clpretty.ch"
                       }
#line 309 "clpretty.ch"
#line 312 "clpretty.ch"
    UnMarkCoordTree(tree);
#line 312 "clpretty.ch"
#line 313 "clpretty.ch"
    
#line 313 "clpretty.ch"
#line 313 "clpretty.ch"
}
#line 313 "clpretty.ch"

#line 317 "clpretty.ch"

#line 317 "clpretty.ch"
void clpretty::AddTree ( PTREE tree, int delta )
#line 317 "clpretty.ch"
{
#line 317 "clpretty.ch"
#line 317 "clpretty.ch"
    int _nextVal ;
    
#line 317 "clpretty.ch"
#line 322 "clpretty.ch"
    if ( currTabTree >= sizeTabTree ) {
#line 322 "clpretty.ch"
#line 323 "clpretty.ch"
                                            if ( sizeTabTree && (tabTree = (PPTREE_DELTA)realloc(tabTree, sizeof(TREE_DELTA) * (sizeTabTree + 10))) || (tabTree = (PPTREE_DELTA)malloc(sizeof(TREE_DELTA) * 10)) ) 
#line 323 "clpretty.ch"
#line 325 "clpretty.ch"
                                                sizeTabTree += 10 ;
#line 325 "clpretty.ch"
#line 326 "clpretty.ch"
                                            
#line 326 "clpretty.ch"
#line 326 "clpretty.ch"
                                        }
#line 326 "clpretty.ch"
#line 329 "clpretty.ch"
#line 329 "clpretty.ch"
    for ( int i = 0 ; i < currTabTree ; i++ ) 
#line 329 "clpretty.ch"
#line 330 "clpretty.ch"
        if ( tabTree [i].tree == tree ) {
#line 330 "clpretty.ch"
#line 331 "clpretty.ch"
                                                tabTree [i].delta = delta ;
#line 331 "clpretty.ch"
#line 332 "clpretty.ch"
                                                return ;
                                                
#line 332 "clpretty.ch"
#line 333 "clpretty.ch"
                                                
#line 333 "clpretty.ch"
#line 333 "clpretty.ch"
                                            }
#line 333 "clpretty.ch"
    
#line 333 "clpretty.ch"
#line 336 "clpretty.ch"
    if ( currTabTree < sizeTabTree ) {
#line 336 "clpretty.ch"
#line 337 "clpretty.ch"
                                        tabTree [currTabTree].tree = tree ;
#line 337 "clpretty.ch"
#line 338 "clpretty.ch"
                                        tabTree [currTabTree].delta = delta ;
#line 338 "clpretty.ch"
#line 339 "clpretty.ch"
                                        currTabTree++ ;
#line 339 "clpretty.ch"
#line 340 "clpretty.ch"
                                        
#line 340 "clpretty.ch"
#line 340 "clpretty.ch"
                                       }
#line 340 "clpretty.ch"
#line 341 "clpretty.ch"
    
#line 341 "clpretty.ch"
#line 341 "clpretty.ch"
}
#line 341 "clpretty.ch"

#line 345 "clpretty.ch"

#line 345 "clpretty.ch"
int clpretty::FindDelta ( PTREE tree )
#line 345 "clpretty.ch"
{
#line 345 "clpretty.ch"
#line 345 "clpretty.ch"
    int _nextVal ;
    
#line 345 "clpretty.ch"
#line 351 "clpretty.ch"
    (tree=fathertree(tree));
#line 351 "clpretty.ch"
    
#line 351 "clpretty.ch"
#line 353 "clpretty.ch"
    int i ;
    
#line 353 "clpretty.ch"
#line 355 "clpretty.ch"
    while ( tree ) {
#line 355 "clpretty.ch"
#line 356 "clpretty.ch"
#line 356 "clpretty.ch"
                        for ( i = 0 ; i < currTabTree ; i++ ) 
#line 356 "clpretty.ch"
#line 357 "clpretty.ch"
                            if ( tabTree [i].tree == tree ) 
#line 357 "clpretty.ch"
#line 358 "clpretty.ch"
                                return tabTree [i].delta ;
                            
#line 358 "clpretty.ch"
                        
#line 358 "clpretty.ch"
#line 359 "clpretty.ch"
                        (tree=fathertree(tree));
#line 359 "clpretty.ch"
                        
#line 359 "clpretty.ch"
#line 360 "clpretty.ch"
                        
#line 360 "clpretty.ch"
#line 360 "clpretty.ch"
                    }
#line 360 "clpretty.ch"
#line 363 "clpretty.ch"
    return 0 ;
    
#line 363 "clpretty.ch"
#line 364 "clpretty.ch"
    
#line 364 "clpretty.ch"
#line 364 "clpretty.ch"
}
#line 364 "clpretty.ch"

#line 368 "clpretty.ch"

#line 368 "clpretty.ch"
void clpretty::TraiterExpList ( PTREE tree, int x0, int valTab, int inParam )
#line 368 "clpretty.ch"
{
#line 368 "clpretty.ch"
    register PPTREE _inter ;
#line 368 "clpretty.ch"

#line 368 "clpretty.ch"
#line 368 "clpretty.ch"
    int _retVal [2];
    
#line 368 "clpretty.ch"
#line 368 "clpretty.ch"
    PPTREE  _storeVal [2];
    
#line 368 "clpretty.ch"
#line 368 "clpretty.ch"
    int _nextVal ;
    
#line 368 "clpretty.ch"
#line 371 "clpretty.ch"
    PTREE   list, inter ;
#line 371 "clpretty.ch"
    
#line 371 "clpretty.ch"
#line 372 "clpretty.ch"
    PTREE   postAttribute ;
#line 372 "clpretty.ch"
    
#line 372 "clpretty.ch"
#line 373 "clpretty.ch"
    int y0 ;
    
#line 373 "clpretty.ch"
#line 374 "clpretty.ch"
    int x, y, dx, dy ;
    
#line 374 "clpretty.ch"
#line 375 "clpretty.ch"
    int xRef ;
    
#line 375 "clpretty.ch"
#line 376 "clpretty.ch"
    int posMark ;
    
#line 376 "clpretty.ch"
#line 377 "clpretty.ch"
    PTREE   listElem ;
#line 377 "clpretty.ch"
    
#line 377 "clpretty.ch"
#line 378 "clpretty.ch"
    PTREE   currElem ;
#line 378 "clpretty.ch"
    
#line 378 "clpretty.ch"
#line 379 "clpretty.ch"
    PTREE   refTree ;
#line 379 "clpretty.ch"
    
#line 379 "clpretty.ch"
#line 380 "clpretty.ch"
    PTREE   lastTree ;
#line 380 "clpretty.ch"
    
#line 380 "clpretty.ch"
#line 381 "clpretty.ch"
    int posRef ;
    
#line 381 "clpretty.ch"
#line 383 "clpretty.ch"
    int colRef ;
    
#line 383 "clpretty.ch"
#line 384 "clpretty.ch"
    PTREE   father ;
#line 384 "clpretty.ch"
    
#line 384 "clpretty.ch"
#line 385 "clpretty.ch"
    int rank ;
    
#line 385 "clpretty.ch"
#line 386 "clpretty.ch"
    int hasIndented = 0 ;
    
#line 386 "clpretty.ch"
#line 388 "clpretty.ch"
    int deltaInhibitIndent = 0 ;
    
#line 388 "clpretty.ch"
#line 390 "clpretty.ch"
    int delta = 0 ;
    
#line 390 "clpretty.ch"
#line 392 "clpretty.ch"
    int deltaRef = 0 ;
    
#line 392 "clpretty.ch"
#line 395 "clpretty.ch"
    int ret = 1 ;
    
#line 395 "clpretty.ch"
#line 396 "clpretty.ch"
    int oldNbTab = nbTab ;
    
#line 396 "clpretty.ch"
#line 397 "clpretty.ch"
    int rightX = 0 ;
    
#line 397 "clpretty.ch"
#line 398 "clpretty.ch"
    PTREE   hasToPutVirt = (PTREE)0 ;
#line 398 "clpretty.ch"
    
#line 398 "clpretty.ch"
#line 398 "clpretty.ch"
    hasToPutVirt = (PPTREE) 0 ;
#line 398 "clpretty.ch"
    
#line 398 "clpretty.ch"
#line 401 "clpretty.ch"
    GetCoord(tree, &x, &y, &dx, &y);
#line 401 "clpretty.ch"
#line 402 "clpretty.ch"
    x0 += x ;
#line 402 "clpretty.ch"
#line 403 "clpretty.ch"
    if ( x0 + dx <= rightMargin ) 
#line 403 "clpretty.ch"
#line 404 "clpretty.ch"
        return ;
    
#line 404 "clpretty.ch"
#line 405 "clpretty.ch"
    MarkCoordTree(tree, x0, 0);
#line 405 "clpretty.ch"
#line 409 "clpretty.ch"
    if ( !(((_inter = (PPTREE)tree,1) && 
#line 409 "clpretty.ch"
                (NumberTree(_inter) == LIST) &&
#line 409 "clpretty.ch"
                1)) ) {
#line 409 "clpretty.ch"
#line 410 "clpretty.ch"
                        ((_inter = (PPTREE)tree,1) && 
#line 410 "clpretty.ch"
                            (_retVal[1]=((_storeVal[1]=_inter,_inter=SonTree(_inter,1),(listElem=_inter),1) &&
#line 410 "clpretty.ch"
                                ((refTree=SonTree(_inter,1)),1) &&
#line 410 "clpretty.ch"
                                1),
#line 410 "clpretty.ch"
                                (_inter=_storeVal[1],1),_retVal[1]) &&
#line 410 "clpretty.ch"
                            1);
#line 410 "clpretty.ch"
                        ;
#line 410 "clpretty.ch"
#line 411 "clpretty.ch"
                        
#line 411 "clpretty.ch"
#line 411 "clpretty.ch"
                      } else 
#line 411 "clpretty.ch"
    {
#line 411 "clpretty.ch"
#line 412 "clpretty.ch"
        ((_inter = (PPTREE)tree,1) && 
#line 412 "clpretty.ch"
            ((refTree=SonTree(_inter,1)),1) &&
#line 412 "clpretty.ch"
            1);
#line 412 "clpretty.ch"
        ;
#line 412 "clpretty.ch"
#line 413 "clpretty.ch"
        (listElem=tree);
#line 413 "clpretty.ch"
        
#line 413 "clpretty.ch"
#line 414 "clpretty.ch"
        
#line 414 "clpretty.ch"
#line 414 "clpretty.ch"
    }
    
#line 414 "clpretty.ch"
#line 415 "clpretty.ch"
    if ( !(((_inter = (PPTREE)listElem,1) && 
#line 415 "clpretty.ch"
                (NumberTree(_inter) == LIST) &&
#line 415 "clpretty.ch"
                1)) ) 
#line 415 "clpretty.ch"
#line 416 "clpretty.ch"
        return ;
    
#line 416 "clpretty.ch"
#line 420 "clpretty.ch"
    GetCoord(refTree, &x, &y, &dx, &colRef);
#line 420 "clpretty.ch"
#line 423 "clpretty.ch"
    if ( colRef != markTab ) 
#line 423 "clpretty.ch"
#line 424 "clpretty.ch"
        nbTab = 0 ;
#line 424 "clpretty.ch"
#line 425 "clpretty.ch"
    nbTab += valTab ;
#line 425 "clpretty.ch"
#line 426 "clpretty.ch"
    posRef = TAB_VALUE(colRef, nbTab);
#line 426 "clpretty.ch"
#line 427 "clpretty.ch"
    delta = 0 ;
#line 427 "clpretty.ch"
#line 430 "clpretty.ch"
    while ( listElem ) {
#line 430 "clpretty.ch"
#line 430 "clpretty.ch"
                            PTREE   _Baum0 ;
#line 430 "clpretty.ch"
                            
#line 430 "clpretty.ch"
#line 431 "clpretty.ch"
                            (currElem=(listElem?listElem.Nextl():(PPTREE)0));
#line 431 "clpretty.ch"
                            
#line 431 "clpretty.ch"
#line 432 "clpretty.ch"
                            _Baum0 = (PPTREE) 0 ;
#line 432 "clpretty.ch"
                            
#line 432 "clpretty.ch"
#line 432 "clpretty.ch"
                            GetCoordAbs(currElem, _Baum0, &x0, &y0);
#line 432 "clpretty.ch"
#line 433 "clpretty.ch"
                            GetCoord(currElem, &x, &y, &dx, &dy);
#line 433 "clpretty.ch"
#line 437 "clpretty.ch"
                            if ( x0 <= rightX ) {
#line 437 "clpretty.ch"
#line 438 "clpretty.ch"
                                                    delta = 0 ;
#line 438 "clpretty.ch"
#line 439 "clpretty.ch"
                                                    
#line 439 "clpretty.ch"
#line 439 "clpretty.ch"
                                                  }
#line 439 "clpretty.ch"
#line 440 "clpretty.ch"
                            rightX = x0 + dx ;
#line 440 "clpretty.ch"
#line 444 "clpretty.ch"
                            if ( !lastTree && x0 + dx + delta > rightMargin ) {
#line 444 "clpretty.ch"
#line 445 "clpretty.ch"
                                                                                        if ( inParam && x0 + dx > posRef ) {
#line 445 "clpretty.ch"
#line 448 "clpretty.ch"
{
#line 448 "clpretty.ch"
    PPTREE _ptTree0=(PPTREE) 0;
#line 448 "clpretty.ch"
    _ptTree0 = (PPTREE) 0;
#line 448 "clpretty.ch"
    {
#line 448 "clpretty.ch"
        PPTREE _ptTree1= (PPTREE) 0 ;
#line 448 "clpretty.ch"
        {
#line 448 "clpretty.ch"
            PPTREE _ptTree2= (PPTREE) 0,_ptRes2= (PPTREE) 0;
#line 448 "clpretty.ch"
            _ptRes2 = MakeTree(pretty::NEWLINE, 1);
#line 448 "clpretty.ch"
            _ptTree2 = MakeString("1") ;
#line 448 "clpretty.ch"
            ReplaceTree(_ptRes2, 1, _ptTree2);
#line 448 "clpretty.ch"
            _ptTree1 = _ptRes2;
#line 448 "clpretty.ch"
        }
#line 448 "clpretty.ch"
        _ptTree0 = AddList( _ptTree0,_ptTree1);
#line 448 "clpretty.ch"
    }
#line 448 "clpretty.ch"
    postAttribute = _ptTree0;
#line 448 "clpretty.ch"
    ;
#line 448 "clpretty.ch"
}
#line 448 "clpretty.ch"

#line 448 "clpretty.ch"
#line 450 "clpretty.ch"
{
#line 450 "clpretty.ch"
#line 450 "clpretty.ch"
    char    string [10];
    
#line 450 "clpretty.ch"
#line 451 "clpretty.ch"
    sprintf(string, "%d", nbTab);
#line 451 "clpretty.ch"
#line 452 "clpretty.ch"
    {
#line 452 "clpretty.ch"
        PPTREE _ptTree0= (PPTREE) 0 ;
#line 452 "clpretty.ch"
        {
#line 452 "clpretty.ch"
            PPTREE _ptTree1= (PPTREE) 0 ;
#line 452 "clpretty.ch"
            {
#line 452 "clpretty.ch"
                PPTREE _ptTree2= (PPTREE) 0,_ptRes2= (PPTREE) 0;
#line 452 "clpretty.ch"
                _ptRes2 = MakeTree(pretty::TAB, 1);
#line 452 "clpretty.ch"
                _ptTree2 = StoreRef(MakeString(string));
#line 452 "clpretty.ch"
                ReplaceTree(_ptRes2, 1, _ptTree2);
#line 452 "clpretty.ch"
                _ptTree1 = _ptRes2;
#line 452 "clpretty.ch"
            }
#line 452 "clpretty.ch"
            postAttribute =  AddList( postAttribute,_ptTree1);
#line 452 "clpretty.ch"
        }
#line 452 "clpretty.ch"
        {
#line 452 "clpretty.ch"
            PPTREE _ptTree1= (PPTREE) 0 ;
#line 452 "clpretty.ch"
            {
#line 452 "clpretty.ch"
                PPTREE _ptTree2= (PPTREE) 0,_ptRes2= (PPTREE) 0;
#line 452 "clpretty.ch"
                _ptRes2 = MakeTree(pretty::MARK, 0);
#line 452 "clpretty.ch"
                _ptTree1 = _ptRes2;
#line 452 "clpretty.ch"
            }
#line 452 "clpretty.ch"
            postAttribute =  AddList( postAttribute,_ptTree1);
#line 452 "clpretty.ch"
        }
#line 452 "clpretty.ch"
    }
#line 452 "clpretty.ch"
    
#line 452 "clpretty.ch"
#line 453 "clpretty.ch"
    
#line 453 "clpretty.ch"
#line 453 "clpretty.ch"
}

#line 453 "clpretty.ch"
#line 454 "clpretty.ch"
hasIndented = 1 ;
#line 454 "clpretty.ch"
#line 455 "clpretty.ch"
PutAttr(currElem, postAttribute, PRE_ATTR, PUT_BEG);
#line 455 "clpretty.ch"
#line 459 "clpretty.ch"
#if 0
#line 459 "clpretty.ch"
#line 460 "clpretty.ch"
delta = posRef - x0 - dx ;
#line 460 "clpretty.ch"
#line 460 "clpretty.ch"

#line 460 "clpretty.ch"
#else 
delta = posRef - x0 ;
#endif

#line 460 "clpretty.ch"
#line 464 "clpretty.ch"
PutCoord(currElem, x + delta, y, dx, dy);
#line 464 "clpretty.ch"
#line 467 "clpretty.ch"
TraitMark(currElem, posRef);
#line 467 "clpretty.ch"
#line 468 "clpretty.ch"

#line 468 "clpretty.ch"
#line 468 "clpretty.ch"
                                                                                                                               } else 
#line 468 "clpretty.ch"
#line 469 "clpretty.ch"
                                                                                            (hasToPutVirt=currElem);
#line 469 "clpretty.ch"
                                                                                            
#line 469 "clpretty.ch"
                                                                                        
#line 469 "clpretty.ch"
#line 470 "clpretty.ch"
                                                                                        
#line 470 "clpretty.ch"
#line 470 "clpretty.ch"
                                                                                    }
#line 470 "clpretty.ch"
#line 474 "clpretty.ch"
                            if ( x0 + dx + delta > rightMargin && lastTree ) {
#line 474 "clpretty.ch"
#line 479 "clpretty.ch"
                                                                                    if ( deltaRef < 0 ) {
#line 479 "clpretty.ch"
#line 482 "clpretty.ch"
                                                                                                            {
#line 482 "clpretty.ch"
                                                                                                                PPTREE _ptTree0=(PPTREE) 0;
#line 482 "clpretty.ch"
                                                                                                                _ptTree0 = (PPTREE) 0;
#line 482 "clpretty.ch"
                                                                                                                {
#line 482 "clpretty.ch"
                                                                                                                    PPTREE _ptTree1= (PPTREE) 0 ;
#line 482 "clpretty.ch"
                                                                                                                    {
#line 482 "clpretty.ch"
                                                                                                                        PPTREE _ptTree2= (PPTREE) 0,_ptRes2= (PPTREE) 0;
#line 482 "clpretty.ch"
                                                                                                                        _ptRes2 = MakeTree(pretty::NEWLINE, 1);
#line 482 "clpretty.ch"
                                                                                                                        _ptTree2 = MakeString("1") ;
#line 482 "clpretty.ch"
                                                                                                                        ReplaceTree(_ptRes2, 1, _ptTree2);
#line 482 "clpretty.ch"
                                                                                                                        _ptTree1 = _ptRes2;
#line 482 "clpretty.ch"
                                                                                                                    }
#line 482 "clpretty.ch"
                                                                                                                    _ptTree0 = AddList( _ptTree0,_ptTree1);
#line 482 "clpretty.ch"
                                                                                                                }
#line 482 "clpretty.ch"
                                                                                                                postAttribute = _ptTree0;
#line 482 "clpretty.ch"
                                                                                                                ;
#line 482 "clpretty.ch"
                                                                                                            }
#line 482 "clpretty.ch"
                                                                                                            
#line 482 "clpretty.ch"
#line 483 "clpretty.ch"
                                                                                                            if ( !hasIndented ) {
#line 483 "clpretty.ch"
#line 484 "clpretty.ch"
{
#line 484 "clpretty.ch"
#line 485 "clpretty.ch"
    char    string [10];
    
#line 485 "clpretty.ch"
#line 486 "clpretty.ch"
    sprintf(string, "%d", nbTab);
#line 486 "clpretty.ch"
#line 487 "clpretty.ch"
    {
#line 487 "clpretty.ch"
        PPTREE _ptTree0= (PPTREE) 0 ;
#line 487 "clpretty.ch"
        {
#line 487 "clpretty.ch"
            PPTREE _ptTree1= (PPTREE) 0 ;
#line 487 "clpretty.ch"
            {
#line 487 "clpretty.ch"
                PPTREE _ptTree2= (PPTREE) 0,_ptRes2= (PPTREE) 0;
#line 487 "clpretty.ch"
                _ptRes2 = MakeTree(pretty::TAB, 1);
#line 487 "clpretty.ch"
                _ptTree2 = StoreRef(MakeString(string));
#line 487 "clpretty.ch"
                ReplaceTree(_ptRes2, 1, _ptTree2);
#line 487 "clpretty.ch"
                _ptTree1 = _ptRes2;
#line 487 "clpretty.ch"
            }
#line 487 "clpretty.ch"
            postAttribute =  AddList( postAttribute,_ptTree1);
#line 487 "clpretty.ch"
        }
#line 487 "clpretty.ch"
        {
#line 487 "clpretty.ch"
            PPTREE _ptTree1= (PPTREE) 0 ;
#line 487 "clpretty.ch"
            {
#line 487 "clpretty.ch"
                PPTREE _ptTree2= (PPTREE) 0,_ptRes2= (PPTREE) 0;
#line 487 "clpretty.ch"
                _ptRes2 = MakeTree(pretty::MARK, 0);
#line 487 "clpretty.ch"
                _ptTree1 = _ptRes2;
#line 487 "clpretty.ch"
            }
#line 487 "clpretty.ch"
            postAttribute =  AddList( postAttribute,_ptTree1);
#line 487 "clpretty.ch"
        }
#line 487 "clpretty.ch"
    }
#line 487 "clpretty.ch"
    
#line 487 "clpretty.ch"
#line 488 "clpretty.ch"
    
#line 488 "clpretty.ch"
#line 488 "clpretty.ch"
}

#line 488 "clpretty.ch"
#line 489 "clpretty.ch"
hasIndented = 1 ;
#line 489 "clpretty.ch"
#line 490 "clpretty.ch"

#line 490 "clpretty.ch"
#line 490 "clpretty.ch"
                                                                                                                                  }
#line 490 "clpretty.ch"
#line 491 "clpretty.ch"
                                                                                                            PutAttr(lastTree, postAttribute, POST_ATTR, PUT_END);
#line 491 "clpretty.ch"
#line 494 "clpretty.ch"
                                                                                                            delta = deltaRef ;
#line 494 "clpretty.ch"
#line 495 "clpretty.ch"
                                                                                                            PutCoord(currElem, x + delta, y, dx, dy);
#line 495 "clpretty.ch"
#line 498 "clpretty.ch"
                                                                                                            TraitMark(currElem, posRef);
#line 498 "clpretty.ch"
#line 499 "clpretty.ch"
                                                                                                            
#line 499 "clpretty.ch"
#line 499 "clpretty.ch"
                                                                                                          } else 
#line 499 "clpretty.ch"
                                                                                    {
#line 499 "clpretty.ch"
#line 500 "clpretty.ch"
                                                                                        deltaInhibitIndent = 1 ;
#line 500 "clpretty.ch"
#line 503 "clpretty.ch"
                                                                                        TraitMark(currElem, colRef);
#line 503 "clpretty.ch"
#line 504 "clpretty.ch"
                                                                                        
#line 504 "clpretty.ch"
#line 504 "clpretty.ch"
                                                                                    }
                                                                                    
#line 504 "clpretty.ch"
#line 505 "clpretty.ch"
                                                                                    
#line 505 "clpretty.ch"
#line 505 "clpretty.ch"
                                                                                  } else 
#line 505 "clpretty.ch"
                            if ( hasIndented ) {
#line 505 "clpretty.ch"
#line 508 "clpretty.ch"
                                                    PutCoord(currElem, x + delta, y, dx, dy);
#line 508 "clpretty.ch"
#line 511 "clpretty.ch"
                                                    TraitMark(currElem, posRef);
#line 511 "clpretty.ch"
#line 512 "clpretty.ch"
                                                    
#line 512 "clpretty.ch"
#line 512 "clpretty.ch"
                                                } else 
#line 512 "clpretty.ch"
                            if ( deltaInhibitIndent ) {
#line 512 "clpretty.ch"
#line 515 "clpretty.ch"
                                                        TraitMark(currElem, colRef);
#line 515 "clpretty.ch"
#line 516 "clpretty.ch"
                                                        
#line 516 "clpretty.ch"
#line 516 "clpretty.ch"
                                                       }
#line 516 "clpretty.ch"
#line 523 "clpretty.ch"
                            deltaRef = posRef - x0 - dx ;
#line 523 "clpretty.ch"
#line 524 "clpretty.ch"
                            (lastTree=currElem);
#line 524 "clpretty.ch"
                            
#line 524 "clpretty.ch"
#line 525 "clpretty.ch"
                            
#line 525 "clpretty.ch"
#line 525 "clpretty.ch"
                        }
#line 525 "clpretty.ch"
#line 529 "clpretty.ch"
    if ( hasIndented ) {
#line 529 "clpretty.ch"
#line 530 "clpretty.ch"
                            {
#line 530 "clpretty.ch"
                                PPTREE _ptTree0=(PPTREE) 0;
#line 530 "clpretty.ch"
                                _ptTree0 = (PPTREE) 0;
#line 530 "clpretty.ch"
                                {
#line 530 "clpretty.ch"
                                    PPTREE _ptTree1= (PPTREE) 0 ;
#line 530 "clpretty.ch"
                                    {
#line 530 "clpretty.ch"
                                        PPTREE _ptTree2= (PPTREE) 0,_ptRes2= (PPTREE) 0;
#line 530 "clpretty.ch"
                                        _ptRes2 = MakeTree(pretty::UNMARK, 0);
#line 530 "clpretty.ch"
                                        _ptTree1 = _ptRes2;
#line 530 "clpretty.ch"
                                    }
#line 530 "clpretty.ch"
                                    _ptTree0 = AddList( _ptTree0,_ptTree1);
#line 530 "clpretty.ch"
                                }
#line 530 "clpretty.ch"
                                list = _ptTree0;
#line 530 "clpretty.ch"
                                ;
#line 530 "clpretty.ch"
                            }
#line 530 "clpretty.ch"
                            
#line 530 "clpretty.ch"
#line 531 "clpretty.ch"
                            PutAttr(lastTree, list, POST_ATTR, PUT_END);
#line 531 "clpretty.ch"
#line 532 "clpretty.ch"
                            
#line 532 "clpretty.ch"
#line 532 "clpretty.ch"
                        }
#line 532 "clpretty.ch"
#line 535 "clpretty.ch"
    if ( hasIndented && hasToPutVirt ) {
#line 535 "clpretty.ch"
#line 536 "clpretty.ch"
                                            char    string [10];
                                            
#line 536 "clpretty.ch"
#line 537 "clpretty.ch"
                                            sprintf(string, "%d", colRef);
#line 537 "clpretty.ch"
#line 538 "clpretty.ch"
                                            {
#line 538 "clpretty.ch"
                                                PPTREE _ptTree0=(PPTREE) 0;
#line 538 "clpretty.ch"
                                                _ptTree0 = (PPTREE) 0;
#line 538 "clpretty.ch"
                                                {
#line 538 "clpretty.ch"
                                                    PPTREE _ptTree1= (PPTREE) 0 ;
#line 538 "clpretty.ch"
                                                    {
#line 538 "clpretty.ch"
                                                        PPTREE _ptTree2= (PPTREE) 0,_ptRes2= (PPTREE) 0;
#line 538 "clpretty.ch"
                                                        _ptRes2 = MakeTree(pretty::TAB_VIRT, 2);
#line 538 "clpretty.ch"
                                                        _ptTree2 = StoreRef(MakeString(string));
#line 538 "clpretty.ch"
                                                        ReplaceTree(_ptRes2, 1, _ptTree2);
#line 538 "clpretty.ch"
                                                        _ptTree2 = MakeString("1") ;
#line 538 "clpretty.ch"
                                                        ReplaceTree(_ptRes2, 2, _ptTree2);
#line 538 "clpretty.ch"
                                                        _ptTree1 = _ptRes2;
#line 538 "clpretty.ch"
                                                    }
#line 538 "clpretty.ch"
                                                    _ptTree0 = AddList( _ptTree0,_ptTree1);
#line 538 "clpretty.ch"
                                                }
#line 538 "clpretty.ch"
                                                list = _ptTree0;
#line 538 "clpretty.ch"
                                                ;
#line 538 "clpretty.ch"
                                            }
#line 538 "clpretty.ch"
                                            
#line 538 "clpretty.ch"
#line 539 "clpretty.ch"
                                            PutAttr(hasToPutVirt, list, PRE_ATTR, PUT_END);
#line 539 "clpretty.ch"
#line 540 "clpretty.ch"
                                            
#line 540 "clpretty.ch"
#line 540 "clpretty.ch"
                                         }
#line 540 "clpretty.ch"
#line 543 "clpretty.ch"
    (listElem=tree);
#line 543 "clpretty.ch"
    
#line 543 "clpretty.ch"
#line 544 "clpretty.ch"
    if ( !(((_inter = (PPTREE)tree,1) && 
#line 544 "clpretty.ch"
                (NumberTree(_inter) == LIST) &&
#line 544 "clpretty.ch"
                1)) ) 
#line 544 "clpretty.ch"
#line 545 "clpretty.ch"
        ((_inter = (PPTREE)tree,1) && 
#line 545 "clpretty.ch"
            ((listElem=SonTree(_inter,1)),1) &&
#line 545 "clpretty.ch"
            1);
#line 545 "clpretty.ch"
        ;
#line 545 "clpretty.ch"
#line 546 "clpretty.ch"
    UpdateSize(listElem, OpType(listElem));
#line 546 "clpretty.ch"
#line 549 "clpretty.ch"
    if ( !(((_inter = (PPTREE)tree,1) && 
#line 549 "clpretty.ch"
                (NumberTree(_inter) == LIST) &&
#line 549 "clpretty.ch"
                1)) ) {
#line 549 "clpretty.ch"
#line 550 "clpretty.ch"
                        int yy ;
                        
#line 550 "clpretty.ch"
#line 551 "clpretty.ch"
                        GetCoord(tree, &xRef, &yy, &dx, &posMark);
#line 551 "clpretty.ch"
#line 552 "clpretty.ch"
                        GetCoord(sontree(tree, 1), &x, &y, &dx, &posMark);
#line 552 "clpretty.ch"
#line 555 "clpretty.ch"
                        if ( !(yy & 0x2) ) 
#line 555 "clpretty.ch"
#line 556 "clpretty.ch"
                            PutCoord(tree, xRef, y, x + dx, posMark);
#line 556 "clpretty.ch"
#line 557 "clpretty.ch"
                        
#line 557 "clpretty.ch"
#line 557 "clpretty.ch"
                      }
#line 557 "clpretty.ch"
#line 560 "clpretty.ch"
    UnMarkCoordTree(tree);
#line 560 "clpretty.ch"
#line 561 "clpretty.ch"
    nbTab = oldNbTab ;
#line 561 "clpretty.ch"
#line 562 "clpretty.ch"
    
#line 562 "clpretty.ch"
#line 562 "clpretty.ch"
}
#line 562 "clpretty.ch"

#line 566 "clpretty.ch"

#line 566 "clpretty.ch"
void clpretty::TraiterMonoParam ( PTREE tree, int x0 )
#line 566 "clpretty.ch"
{
#line 566 "clpretty.ch"
    register PPTREE _inter ;
#line 566 "clpretty.ch"

#line 566 "clpretty.ch"
#line 566 "clpretty.ch"
    int _nextVal ;
    
#line 566 "clpretty.ch"
#line 569 "clpretty.ch"
    PTREE   list, inter ;
#line 569 "clpretty.ch"
    
#line 569 "clpretty.ch"
#line 570 "clpretty.ch"
    PTREE   postAttribute ;
#line 570 "clpretty.ch"
    
#line 570 "clpretty.ch"
#line 571 "clpretty.ch"
    int y0 ;
    
#line 571 "clpretty.ch"
#line 572 "clpretty.ch"
    int x, y, dx ;
    
#line 572 "clpretty.ch"
#line 573 "clpretty.ch"
    int xRef ;
    
#line 573 "clpretty.ch"
#line 574 "clpretty.ch"
    int posMark ;
    
#line 574 "clpretty.ch"
#line 575 "clpretty.ch"
    PTREE   listElem ;
#line 575 "clpretty.ch"
    
#line 575 "clpretty.ch"
#line 576 "clpretty.ch"
    PTREE   refTree ;
#line 576 "clpretty.ch"
    
#line 576 "clpretty.ch"
#line 577 "clpretty.ch"
    PTREE   lastTree ;
#line 577 "clpretty.ch"
    
#line 577 "clpretty.ch"
#line 578 "clpretty.ch"
    int posRef ;
    
#line 578 "clpretty.ch"
#line 580 "clpretty.ch"
    int colRef ;
    
#line 580 "clpretty.ch"
#line 581 "clpretty.ch"
    PTREE   father ;
#line 581 "clpretty.ch"
    
#line 581 "clpretty.ch"
#line 582 "clpretty.ch"
    int rank ;
    
#line 582 "clpretty.ch"
#line 583 "clpretty.ch"
    int hasIndented = 0 ;
    
#line 583 "clpretty.ch"
#line 585 "clpretty.ch"
    int deltaInhibitIndent = 0 ;
    
#line 585 "clpretty.ch"
#line 587 "clpretty.ch"
    int delta ;
    
#line 587 "clpretty.ch"
#line 589 "clpretty.ch"
    int deltaRef ;
    
#line 589 "clpretty.ch"
#line 591 "clpretty.ch"
    int ret = 1 ;
    
#line 591 "clpretty.ch"
#line 592 "clpretty.ch"
    int oldNbTab = nbTab ;
    
#line 592 "clpretty.ch"
#line 593 "clpretty.ch"
    int rightX = 0 ;
    
#line 593 "clpretty.ch"
#line 594 "clpretty.ch"
    PTREE   hasToPutVirt = (PTREE)0 ;
#line 594 "clpretty.ch"
    
#line 594 "clpretty.ch"
#line 594 "clpretty.ch"
    hasToPutVirt = (PPTREE) 0 ;
#line 594 "clpretty.ch"
    
#line 594 "clpretty.ch"
#line 597 "clpretty.ch"
    GetCoord(tree, &x, &y, &dx, &colRef);
#line 597 "clpretty.ch"
#line 598 "clpretty.ch"
    x0 += x ;
#line 598 "clpretty.ch"
#line 599 "clpretty.ch"
    if ( x0 + dx <= rightMargin ) 
#line 599 "clpretty.ch"
#line 600 "clpretty.ch"
        return ;
    
#line 600 "clpretty.ch"
#line 603 "clpretty.ch"
    nbTab = 1 ;
#line 603 "clpretty.ch"
#line 604 "clpretty.ch"
    if ( colRef != markTab ) 
#line 604 "clpretty.ch"
#line 605 "clpretty.ch"
        nbTab = 0 ;
#line 605 "clpretty.ch"
#line 606 "clpretty.ch"
    nbTab += 1 ;
#line 606 "clpretty.ch"
#line 607 "clpretty.ch"
    posRef = TAB_VALUE(colRef, nbTab);
#line 607 "clpretty.ch"
#line 608 "clpretty.ch"
    delta = 0 ;
#line 608 "clpretty.ch"
#line 612 "clpretty.ch"
    {
#line 612 "clpretty.ch"
#line 612 "clpretty.ch"
        {
#line 612 "clpretty.ch"
            PPTREE _ptTree0=(PPTREE) 0;
#line 612 "clpretty.ch"
            _ptTree0 = (PPTREE) 0;
#line 612 "clpretty.ch"
            {
#line 612 "clpretty.ch"
                PPTREE _ptTree1= (PPTREE) 0 ;
#line 612 "clpretty.ch"
                {
#line 612 "clpretty.ch"
                    PPTREE _ptTree2= (PPTREE) 0,_ptRes2= (PPTREE) 0;
#line 612 "clpretty.ch"
                    _ptRes2 = MakeTree(pretty::NEWLINE, 1);
#line 612 "clpretty.ch"
                    _ptTree2 = MakeString("1") ;
#line 612 "clpretty.ch"
                    ReplaceTree(_ptRes2, 1, _ptTree2);
#line 612 "clpretty.ch"
                    _ptTree1 = _ptRes2;
#line 612 "clpretty.ch"
                }
#line 612 "clpretty.ch"
                _ptTree0 = AddList( _ptTree0,_ptTree1);
#line 612 "clpretty.ch"
            }
#line 612 "clpretty.ch"
            postAttribute = _ptTree0;
#line 612 "clpretty.ch"
            ;
#line 612 "clpretty.ch"
        }
#line 612 "clpretty.ch"
        
#line 612 "clpretty.ch"
#line 614 "clpretty.ch"
        {
#line 614 "clpretty.ch"
#line 614 "clpretty.ch"
            char    string [10];
            
#line 614 "clpretty.ch"
#line 615 "clpretty.ch"
            sprintf(string, "%d", nbTab);
#line 615 "clpretty.ch"
#line 616 "clpretty.ch"
            {
#line 616 "clpretty.ch"
                PPTREE _ptTree0= (PPTREE) 0 ;
#line 616 "clpretty.ch"
                {
#line 616 "clpretty.ch"
                    PPTREE _ptTree1= (PPTREE) 0 ;
#line 616 "clpretty.ch"
                    {
#line 616 "clpretty.ch"
                        PPTREE _ptTree2= (PPTREE) 0,_ptRes2= (PPTREE) 0;
#line 616 "clpretty.ch"
                        _ptRes2 = MakeTree(pretty::TAB, 1);
#line 616 "clpretty.ch"
                        _ptTree2 = StoreRef(MakeString(string));
#line 616 "clpretty.ch"
                        ReplaceTree(_ptRes2, 1, _ptTree2);
#line 616 "clpretty.ch"
                        _ptTree1 = _ptRes2;
#line 616 "clpretty.ch"
                    }
#line 616 "clpretty.ch"
                    postAttribute =  AddList( postAttribute,_ptTree1);
#line 616 "clpretty.ch"
                }
#line 616 "clpretty.ch"
                {
#line 616 "clpretty.ch"
                    PPTREE _ptTree1= (PPTREE) 0 ;
#line 616 "clpretty.ch"
                    {
#line 616 "clpretty.ch"
                        PPTREE _ptTree2= (PPTREE) 0,_ptRes2= (PPTREE) 0;
#line 616 "clpretty.ch"
                        _ptRes2 = MakeTree(pretty::MARK, 0);
#line 616 "clpretty.ch"
                        _ptTree1 = _ptRes2;
#line 616 "clpretty.ch"
                    }
#line 616 "clpretty.ch"
                    postAttribute =  AddList( postAttribute,_ptTree1);
#line 616 "clpretty.ch"
                }
#line 616 "clpretty.ch"
            }
#line 616 "clpretty.ch"
            
#line 616 "clpretty.ch"
#line 617 "clpretty.ch"
            
#line 617 "clpretty.ch"
#line 617 "clpretty.ch"
        }
        
#line 617 "clpretty.ch"
#line 618 "clpretty.ch"
        hasIndented = 1 ;
#line 618 "clpretty.ch"
#line 619 "clpretty.ch"
        PutAttr(tree, postAttribute, PRE_ATTR, PUT_BEG);
#line 619 "clpretty.ch"
#line 622 "clpretty.ch"
        delta = posRef - x0 ;
#line 622 "clpretty.ch"
#line 623 "clpretty.ch"
        PutCoord(tree, x + delta, y, dx, colRef);
#line 623 "clpretty.ch"
#line 626 "clpretty.ch"
        TraitMark(tree, posRef);
#line 626 "clpretty.ch"
#line 627 "clpretty.ch"
        
#line 627 "clpretty.ch"
#line 627 "clpretty.ch"
    }
    
#line 627 "clpretty.ch"
#line 628 "clpretty.ch"
    {
#line 628 "clpretty.ch"
        PPTREE _ptTree0=(PPTREE) 0;
#line 628 "clpretty.ch"
        _ptTree0 = (PPTREE) 0;
#line 628 "clpretty.ch"
        {
#line 628 "clpretty.ch"
            PPTREE _ptTree1= (PPTREE) 0 ;
#line 628 "clpretty.ch"
            {
#line 628 "clpretty.ch"
                PPTREE _ptTree2= (PPTREE) 0,_ptRes2= (PPTREE) 0;
#line 628 "clpretty.ch"
                _ptRes2 = MakeTree(pretty::UNMARK, 0);
#line 628 "clpretty.ch"
                _ptTree1 = _ptRes2;
#line 628 "clpretty.ch"
            }
#line 628 "clpretty.ch"
            _ptTree0 = AddList( _ptTree0,_ptTree1);
#line 628 "clpretty.ch"
        }
#line 628 "clpretty.ch"
        list = _ptTree0;
#line 628 "clpretty.ch"
        ;
#line 628 "clpretty.ch"
    }
#line 628 "clpretty.ch"
    
#line 628 "clpretty.ch"
#line 629 "clpretty.ch"
    PutAttr(tree, list, POST_ATTR, PUT_END);
#line 629 "clpretty.ch"
#line 630 "clpretty.ch"
    nbTab = oldNbTab ;
#line 630 "clpretty.ch"
#line 631 "clpretty.ch"
    
#line 631 "clpretty.ch"
#line 631 "clpretty.ch"
}
#line 631 "clpretty.ch"

#line 634 "clpretty.ch"

#line 634 "clpretty.ch"
void clpretty::TraiterExpListParam ( PTREE tree, int x0 )
#line 634 "clpretty.ch"
{
#line 634 "clpretty.ch"
#line 634 "clpretty.ch"
    int _nextVal ;
    
#line 634 "clpretty.ch"
#line 637 "clpretty.ch"
    TraiterExpList(tree, x0, 1, 1);
#line 637 "clpretty.ch"
#line 638 "clpretty.ch"
    
#line 638 "clpretty.ch"
#line 638 "clpretty.ch"
}
#line 638 "clpretty.ch"

#line 642 "clpretty.ch"

#line 642 "clpretty.ch"
void clpretty::Treat ( PTREE tree )
#line 642 "clpretty.ch"
{
#line 642 "clpretty.ch"
    register PPTREE _inter ;
#line 642 "clpretty.ch"

#line 642 "clpretty.ch"
#line 642 "clpretty.ch"
    int _nextVal ;
    
#line 642 "clpretty.ch"
#line 645 "clpretty.ch"
    int oldNbTab = nbTab ;
    
#line 645 "clpretty.ch"
#line 646 "clpretty.ch"
    int x, y, dx, dy ;
    
#line 646 "clpretty.ch"
#line 647 "clpretty.ch"
    int x0, y0 ;
    
#line 647 "clpretty.ch"
#line 648 "clpretty.ch"
    PTREE   content ;
#line 648 "clpretty.ch"
    
#line 648 "clpretty.ch"
#line 651 "clpretty.ch"
    DecompVirt(tree);
#line 651 "clpretty.ch"
#line 652 "clpretty.ch"
    CompleteCoordinates(tree);
#line 652 "clpretty.ch"
#line 653 "clpretty.ch"
    if ( ((_inter = (PPTREE)tree,1) && 
#line 653 "clpretty.ch"
            (NumberTree(_inter) == pretty::ATTRIBUTS) &&
#line 653 "clpretty.ch"
            1) ) 
#line 653 "clpretty.ch"
#line 654 "clpretty.ch"
        FreeCoord(tree);
#line 654 "clpretty.ch"
#line 657 "clpretty.ch"
    nbTab = 0 ;
#line 657 "clpretty.ch"
#line 658 "clpretty.ch"
    if ( FatherTree(tree) ) {
#line 658 "clpretty.ch"
#line 659 "clpretty.ch"
                                GetCoord(tree, &x, &y, &dx, &dy);
#line 659 "clpretty.ch"
#line 660 "clpretty.ch"
                                TreatGeometry(tree, -x + 3);
#line 660 "clpretty.ch"
#line 661 "clpretty.ch"
                                
#line 661 "clpretty.ch"
#line 661 "clpretty.ch"
                             } else 
#line 661 "clpretty.ch"
#line 662 "clpretty.ch"
        TreatGeometry(tree, 0);
#line 662 "clpretty.ch"
    
#line 662 "clpretty.ch"
#line 665 "clpretty.ch"
    nbTab = oldNbTab ;
#line 665 "clpretty.ch"
#line 666 "clpretty.ch"
    
#line 666 "clpretty.ch"
#line 666 "clpretty.ch"
}
#line 666 "clpretty.ch"

#line 671 "clpretty.ch"

#line 671 "clpretty.ch"
void clpretty::TreatGeometryDepth ( PTREE tree, int x0, unsigned int depth )
#line 671 "clpretty.ch"
{
#line 671 "clpretty.ch"
    register PPTREE _inter ;
#line 671 "clpretty.ch"

#line 671 "clpretty.ch"
#line 671 "clpretty.ch"
    int _nextVal ;
    
#line 671 "clpretty.ch"
#line 674 "clpretty.ch"
    int x, y, dx, posMark ;
    
#line 674 "clpretty.ch"
#line 675 "clpretty.ch"
    int xRef, yRef, dxRef, posMarkRef ;
    
#line 675 "clpretty.ch"
#line 676 "clpretty.ch"
    int success = 0 ;
    
#line 676 "clpretty.ch"
#line 677 "clpretty.ch"
    PTREE   preAttribute ;
#line 677 "clpretty.ch"
    
#line 677 "clpretty.ch"
#line 678 "clpretty.ch"
    PTREE   elem ;
#line 678 "clpretty.ch"
    
#line 678 "clpretty.ch"
#line 679 "clpretty.ch"
    PTREE   list ;
#line 679 "clpretty.ch"
    
#line 679 "clpretty.ch"
#line 680 "clpretty.ch"
    PTREE   tree1, tree2 ;
#line 680 "clpretty.ch"
    
#line 680 "clpretty.ch"
#line 683 "clpretty.ch"
    if ( depth > 1024 ) 
#line 683 "clpretty.ch"
#line 684 "clpretty.ch"
        return ;
    
#line 684 "clpretty.ch"
#line 685 "clpretty.ch"
    depth += 1 ;
#line 685 "clpretty.ch"
#line 688 "clpretty.ch"
    if ( GetCoordOrg(tree, &x, &y, &dx, &posMark) ) {
#line 688 "clpretty.ch"
#line 691 "clpretty.ch"
                                                                if ( x0 + x + dx > rightMargin ) {
#line 691 "clpretty.ch"
#line 696 "clpretty.ch"
                                                                                                        if ( !(y & 0x1) ) {
#line 696 "clpretty.ch"
#line 697 "clpretty.ch"
switch ( OpTypeAlign(tree) ) {
#line 697 "clpretty.ch"
#line 698 "clpretty.ch"
    case H_ALIGN : 
#line 698 "clpretty.ch"
#line 699 "clpretty.ch"
        TraiterExp2H(tree, x0);
#line 699 "clpretty.ch"
#line 700 "clpretty.ch"
        break ;
        
#line 700 "clpretty.ch"
#line 701 "clpretty.ch"
    case V_ALIGN : 
#line 701 "clpretty.ch"
#line 702 "clpretty.ch"
        TraiterExp2V(tree, x0);
#line 702 "clpretty.ch"
#line 703 "clpretty.ch"
        break ;
        
#line 703 "clpretty.ch"
#line 704 "clpretty.ch"
    case COND_ALIGN : 
#line 704 "clpretty.ch"
#line 705 "clpretty.ch"
        TraiterExp3(tree, x0);
#line 705 "clpretty.ch"
#line 706 "clpretty.ch"
        break ;
        
#line 706 "clpretty.ch"
#line 707 "clpretty.ch"
    case LIST_ALIGN : 
#line 707 "clpretty.ch"
#line 708 "clpretty.ch"
        TraiterExpList(tree, x0);
#line 708 "clpretty.ch"
#line 709 "clpretty.ch"
        break ;
        
#line 709 "clpretty.ch"
}
#line 709 "clpretty.ch"

#line 709 "clpretty.ch"
#line 711 "clpretty.ch"

#line 711 "clpretty.ch"
#line 711 "clpretty.ch"
                                                                                                                              }
#line 711 "clpretty.ch"
#line 715 "clpretty.ch"
                                                                                                        if ( TreatGeometrySpecific(tree, x0, x) ) {
#line 715 "clpretty.ch"
#line 716 "clpretty.ch"
int maxDx = 0 ;

#line 716 "clpretty.ch"
#line 717 "clpretty.ch"
GetCoord(tree, &xRef, &yRef, &dxRef, &posMarkRef);
#line 717 "clpretty.ch"
#line 718 "clpretty.ch"
{
#line 718 "clpretty.ch"
#line 718 "clpretty.ch"
    int _for_slot = 1, _arity = treearity(tree);
    
#line 718 "clpretty.ch"
#line 718 "clpretty.ch"
    MY_TREE _for_elem = (PPTREE)0 ;
    
#line 718 "clpretty.ch"
#line 718 "clpretty.ch"
#line 718 "clpretty.ch"
    for (; _for_slot <= _arity ; _for_slot++ ) {
#line 718 "clpretty.ch"
#line 718 "clpretty.ch"
        _for_elem = SonTree(tree, _for_slot);
#line 718 "clpretty.ch"
#line 718 "clpretty.ch"
        if ( _for_elem && NumberTree(_for_elem) != IN_LANGUAGE ) {
#line 718 "clpretty.ch"
#line 718 "clpretty.ch"
            (elem=for_elem);
#line 718 "clpretty.ch"
            
#line 718 "clpretty.ch"
#line 718 "clpretty.ch"
            dx = GetBoxSize(elem);
#line 718 "clpretty.ch"
#line 718 "clpretty.ch"
            if ( dx > maxDx ) 
#line 718 "clpretty.ch"
#line 718 "clpretty.ch"
                maxDx = dx ;
#line 718 "clpretty.ch"
#line 718 "clpretty.ch"
            
#line 718 "clpretty.ch"
#line 718 "clpretty.ch"
        }
#line 718 "clpretty.ch"
#line 718 "clpretty.ch"
        
#line 718 "clpretty.ch"
#line 718 "clpretty.ch"
    }
#line 718 "clpretty.ch"
    
#line 718 "clpretty.ch"
#line 718 "clpretty.ch"
    
#line 718 "clpretty.ch"
#line 718 "clpretty.ch"
}
#line 718 "clpretty.ch"
#line 724 "clpretty.ch"
PutCoord(tree, xRef, yRef |= 1, maxDx, posMarkRef);
#line 724 "clpretty.ch"
#line 725 "clpretty.ch"

#line 725 "clpretty.ch"
#line 725 "clpretty.ch"
                                                                                                                                                      }
#line 725 "clpretty.ch"
#line 728 "clpretty.ch"
                                                                                                        if ( treearity(tree) > 0 ) {
#line 728 "clpretty.ch"
#line 729 "clpretty.ch"
GetCoord(tree, &xRef, &yRef, &dxRef, &posMarkRef);
#line 729 "clpretty.ch"
#line 730 "clpretty.ch"
if ( x0 + xRef + dxRef > rightMargin ) {
#line 730 "clpretty.ch"
#line 731 "clpretty.ch"
                                            int maxDx = 0 ;
                                            
#line 731 "clpretty.ch"
#line 732 "clpretty.ch"
                                            {
#line 732 "clpretty.ch"
#line 732 "clpretty.ch"
                                                int _for_slot = 1, _arity = treearity(tree);
                                                
#line 732 "clpretty.ch"
#line 732 "clpretty.ch"
                                                MY_TREE _for_elem = (PPTREE)0 ;
                                                
#line 732 "clpretty.ch"
#line 732 "clpretty.ch"
#line 732 "clpretty.ch"
                                                for (; _for_slot <= _arity ; _for_slot++ ) {
#line 732 "clpretty.ch"
#line 732 "clpretty.ch"
                                                    _for_elem = SonTree(tree, _for_slot);
#line 732 "clpretty.ch"
#line 732 "clpretty.ch"
                                                    if ( _for_elem && NumberTree(_for_elem) != IN_LANGUAGE ) {
#line 732 "clpretty.ch"
#line 732 "clpretty.ch"
                                                        (elem=for_elem);
#line 732 "clpretty.ch"
                                                        
#line 732 "clpretty.ch"
#line 732 "clpretty.ch"
                                                        TreatGeometryDepth(elem, x0 + xRef, depth);
#line 732 "clpretty.ch"
#line 732 "clpretty.ch"
                                                        dx = GetBoxSize(elem);
#line 732 "clpretty.ch"
#line 732 "clpretty.ch"
                                                        if ( dx > maxDx ) 
#line 732 "clpretty.ch"
#line 732 "clpretty.ch"
                                                            maxDx = dx ;
#line 732 "clpretty.ch"
#line 732 "clpretty.ch"
                                                        
#line 732 "clpretty.ch"
#line 732 "clpretty.ch"
                                                    }
#line 732 "clpretty.ch"
#line 732 "clpretty.ch"
                                                    
#line 732 "clpretty.ch"
#line 732 "clpretty.ch"
                                                }
#line 732 "clpretty.ch"
                                                
#line 732 "clpretty.ch"
#line 732 "clpretty.ch"
                                                
#line 732 "clpretty.ch"
#line 732 "clpretty.ch"
                                            }
#line 732 "clpretty.ch"
#line 739 "clpretty.ch"
                                            PutCoord(tree, xRef, yRef |= 1, maxDx, posMarkRef);
#line 739 "clpretty.ch"
#line 740 "clpretty.ch"
                                            
#line 740 "clpretty.ch"
#line 740 "clpretty.ch"
                                           }
#line 740 "clpretty.ch"
#line 741 "clpretty.ch"

#line 741 "clpretty.ch"
#line 741 "clpretty.ch"
                                                                                                                                      }
#line 741 "clpretty.ch"
#line 744 "clpretty.ch"
                                                                                                        GetCoord(tree, &xRef, &yRef, &dxRef, &posMarkRef);
#line 744 "clpretty.ch"
#line 745 "clpretty.ch"
                                                                                                        if ( x0 + xRef + dxRef > rightMargin ) {
#line 745 "clpretty.ch"
#line 746 "clpretty.ch"
if ( IsTop(tree) != -1 && x0 + xRef > 3 ) {
#line 746 "clpretty.ch"
#line 749 "clpretty.ch"
                                                    CleanAttributs(tree);
#line 749 "clpretty.ch"
#line 752 "clpretty.ch"
                                                    {
#line 752 "clpretty.ch"
                                                        PPTREE _ptTree0=(PPTREE) 0;
#line 752 "clpretty.ch"
                                                        _ptTree0 = (PPTREE) 0;
#line 752 "clpretty.ch"
                                                        {
#line 752 "clpretty.ch"
                                                            PPTREE _ptTree1= (PPTREE) 0 ;
#line 752 "clpretty.ch"
                                                            {
#line 752 "clpretty.ch"
                                                                PPTREE _ptTree2= (PPTREE) 0,_ptRes2= (PPTREE) 0;
#line 752 "clpretty.ch"
                                                                _ptRes2 = MakeTree(pretty::GOTO, 1);
#line 752 "clpretty.ch"
                                                                _ptTree2 = MakeString("3") ;
#line 752 "clpretty.ch"
                                                                ReplaceTree(_ptRes2, 1, _ptTree2);
#line 752 "clpretty.ch"
                                                                _ptTree1 = _ptRes2;
#line 752 "clpretty.ch"
                                                            }
#line 752 "clpretty.ch"
                                                            _ptTree0 = AddList( _ptTree0,_ptTree1);
#line 752 "clpretty.ch"
                                                        }
#line 752 "clpretty.ch"
                                                        {
#line 752 "clpretty.ch"
                                                            PPTREE _ptTree1= (PPTREE) 0 ;
#line 752 "clpretty.ch"
                                                            {
#line 752 "clpretty.ch"
                                                                PPTREE _ptTree2= (PPTREE) 0,_ptRes2= (PPTREE) 0;
#line 752 "clpretty.ch"
                                                                _ptRes2 = MakeTree(pretty::MARK, 0);
#line 752 "clpretty.ch"
                                                                _ptTree1 = _ptRes2;
#line 752 "clpretty.ch"
                                                            }
#line 752 "clpretty.ch"
                                                            _ptTree0 = AddList( _ptTree0,_ptTree1);
#line 752 "clpretty.ch"
                                                        }
#line 752 "clpretty.ch"
                                                        list = _ptTree0;
#line 752 "clpretty.ch"
                                                        ;
#line 752 "clpretty.ch"
                                                    }
#line 752 "clpretty.ch"
                                                    
#line 752 "clpretty.ch"
#line 753 "clpretty.ch"
                                                    PutAttr(tree, list, PRE_ATTR, PUT_END);
#line 753 "clpretty.ch"
#line 754 "clpretty.ch"
                                                    {
#line 754 "clpretty.ch"
                                                        PPTREE _ptTree0=(PPTREE) 0;
#line 754 "clpretty.ch"
                                                        _ptTree0 = (PPTREE) 0;
#line 754 "clpretty.ch"
                                                        {
#line 754 "clpretty.ch"
                                                            PPTREE _ptTree1= (PPTREE) 0 ;
#line 754 "clpretty.ch"
                                                            {
#line 754 "clpretty.ch"
                                                                PPTREE _ptTree2= (PPTREE) 0,_ptRes2= (PPTREE) 0;
#line 754 "clpretty.ch"
                                                                _ptRes2 = MakeTree(pretty::UNMARK, 0);
#line 754 "clpretty.ch"
                                                                _ptTree1 = _ptRes2;
#line 754 "clpretty.ch"
                                                            }
#line 754 "clpretty.ch"
                                                            _ptTree0 = AddList( _ptTree0,_ptTree1);
#line 754 "clpretty.ch"
                                                        }
#line 754 "clpretty.ch"
                                                        list = _ptTree0;
#line 754 "clpretty.ch"
                                                        ;
#line 754 "clpretty.ch"
                                                    }
#line 754 "clpretty.ch"
                                                    
#line 754 "clpretty.ch"
#line 755 "clpretty.ch"
                                                    PutAttr(tree, list, POST_ATTR, PUT_END);
#line 755 "clpretty.ch"
#line 758 "clpretty.ch"
                                                    Treat(FatherTree(tree));
#line 758 "clpretty.ch"
#line 761 "clpretty.ch"
                                                    GetCoord(tree, &xRef, &yRef, &dxRef, &posMarkRef);
#line 761 "clpretty.ch"
#line 762 "clpretty.ch"
                                                    PutCoord(tree, xRef, yRef, 3, posMarkRef);
#line 762 "clpretty.ch"
#line 763 "clpretty.ch"
                                                    
#line 763 "clpretty.ch"
#line 763 "clpretty.ch"
                                                 }
#line 763 "clpretty.ch"
#line 764 "clpretty.ch"

#line 764 "clpretty.ch"
#line 764 "clpretty.ch"
                                                                                                                                                   }
#line 764 "clpretty.ch"
#line 765 "clpretty.ch"
                                                                                                        
#line 765 "clpretty.ch"
#line 765 "clpretty.ch"
                                                                                                     }
#line 765 "clpretty.ch"
#line 766 "clpretty.ch"
                                                                
#line 766 "clpretty.ch"
#line 766 "clpretty.ch"
                                                              } else 
#line 766 "clpretty.ch"
    if ( ((_inter = (PPTREE)tree,1) && 
#line 766 "clpretty.ch"
            (NumberTree(_inter) == pretty::ATTRIBUTS) &&
#line 766 "clpretty.ch"
            ((tree=SonTree(_inter,1)),1) &&
#line 766 "clpretty.ch"
            ((preAttribute=SonTree(_inter,2)),1) &&
#line 766 "clpretty.ch"
            1) ) {
#line 766 "clpretty.ch"
#line 767 "clpretty.ch"
                    int gotTabVirt = 0 ;
                    
#line 767 "clpretty.ch"
#line 768 "clpretty.ch"
                    int oldNbTab = nbTab ;
                    
#line 768 "clpretty.ch"
#line 769 "clpretty.ch"
                    int oldMarkTab = markTab ;
                    
#line 769 "clpretty.ch"
#line 770 "clpretty.ch"
                    PTREE   elem ;
#line 770 "clpretty.ch"
                    
#line 770 "clpretty.ch"
#line 771 "clpretty.ch"
                    while ( ((elem=(preAttribute?preAttribute.Nextl():(PPTREE)0))) ) {
#line 771 "clpretty.ch"
#line 772 "clpretty.ch"
                                                                                            switch ( NumberTree(elem) ) {
#line 772 "clpretty.ch"
#line 774 "clpretty.ch"
                                                                                                case pretty::TAB_VIRT : 
#line 774 "clpretty.ch"
#line 774 "clpretty.ch"
                                                                                                    (tree1=SonTree(elem, 1));
#line 774 "clpretty.ch"
                                                                                                    
#line 774 "clpretty.ch"
#line 774 "clpretty.ch"
                                                                                                    (tree2=SonTree(elem, 2));
#line 774 "clpretty.ch"
                                                                                                    
#line 774 "clpretty.ch"
#line 774 "clpretty.ch"
                                                                                                _Case1 : 
#line 774 "clpretty.ch"
#line 774 "clpretty.ch"
                                                                                                    ;
#line 774 "clpretty.ch"
#line 774 "clpretty.ch"
                                                                                                    gotTabVirt = 1 ;
#line 774 "clpretty.ch"
#line 775 "clpretty.ch"
                                                                                                    break ;
                                                                                                    
#line 775 "clpretty.ch"
                                                                                            }
#line 775 "clpretty.ch"
                                                                                            
#line 775 "clpretty.ch"
#line 777 "clpretty.ch"
                                                                                            
#line 777 "clpretty.ch"
#line 777 "clpretty.ch"
                                                                                          }
#line 777 "clpretty.ch"
#line 778 "clpretty.ch"
                    if ( gotTabVirt ) {
#line 778 "clpretty.ch"
#line 779 "clpretty.ch"
                                        GetCoord(tree, &x, &y, &dx, &posMark);
#line 779 "clpretty.ch"
#line 780 "clpretty.ch"
                                        markTab = atoi(Value(tree1));
#line 780 "clpretty.ch"
#line 781 "clpretty.ch"
                                        if ( oldMarkTab == -1 || posMark == oldMarkTab ) 
#line 781 "clpretty.ch"
#line 782 "clpretty.ch"
                                            nbTab += atoi(Value(tree2));
#line 782 "clpretty.ch"
                                        else 
#line 782 "clpretty.ch"
#line 784 "clpretty.ch"
                                            nbTab = 1 ;
#line 784 "clpretty.ch"
                                        
#line 784 "clpretty.ch"
#line 785 "clpretty.ch"
                                        
#line 785 "clpretty.ch"
#line 785 "clpretty.ch"
                                       }
#line 785 "clpretty.ch"
#line 786 "clpretty.ch"
                    TreatGeometry(tree, x0);
#line 786 "clpretty.ch"
#line 789 "clpretty.ch"
                    nbTab = oldNbTab ;
#line 789 "clpretty.ch"
#line 790 "clpretty.ch"
                    markTab = oldMarkTab ;
#line 790 "clpretty.ch"
#line 791 "clpretty.ch"
                    
#line 791 "clpretty.ch"
#line 791 "clpretty.ch"
                 }
#line 791 "clpretty.ch"
#line 792 "clpretty.ch"
    
#line 792 "clpretty.ch"
#line 792 "clpretty.ch"
}
#line 792 "clpretty.ch"

#line 796 "clpretty.ch"

#line 796 "clpretty.ch"
void clpretty::UpdateSize ( PTREE tree, int type )
#line 796 "clpretty.ch"
{
#line 796 "clpretty.ch"
#line 796 "clpretty.ch"
    int _nextVal ;
    
#line 796 "clpretty.ch"
#line 799 "clpretty.ch"
    int x, y, dx, dy ;
    
#line 799 "clpretty.ch"
#line 800 "clpretty.ch"
    int maxDx ;
    
#line 800 "clpretty.ch"
#line 801 "clpretty.ch"
    int xRef, yRef, dxRef, dyRef ;
    
#line 801 "clpretty.ch"
#line 803 "clpretty.ch"
    if ( OpType(tree) == type ) {
#line 803 "clpretty.ch"
#line 806 "clpretty.ch"
                                    UpdateSize(SonTreeAttr(tree, 1), type);
#line 806 "clpretty.ch"
#line 807 "clpretty.ch"
                                    UpdateSize(SonTreeAttr(tree, 2), type);
#line 807 "clpretty.ch"
#line 810 "clpretty.ch"
                                    GetCoord(sontree(tree, 1), &x, &y, &dx, &dy);
#line 810 "clpretty.ch"
#line 811 "clpretty.ch"
                                    maxDx = x + dx ;
#line 811 "clpretty.ch"
#line 812 "clpretty.ch"
                                    GetCoord(sontree(tree, 2), &x, &y, &dx, &dy);
#line 812 "clpretty.ch"
#line 813 "clpretty.ch"
                                    if ( x + dx > maxDx ) 
#line 813 "clpretty.ch"
#line 814 "clpretty.ch"
                                        maxDx = x + dx ;
#line 814 "clpretty.ch"
#line 817 "clpretty.ch"
                                    GetCoord(tree, &x, &y, &dx, &dy);
#line 817 "clpretty.ch"
#line 818 "clpretty.ch"
                                    PutCoord(tree, x, y | 1, maxDx, dy);
#line 818 "clpretty.ch"
#line 819 "clpretty.ch"
                                    
#line 819 "clpretty.ch"
#line 819 "clpretty.ch"
                                   }
#line 819 "clpretty.ch"
#line 820 "clpretty.ch"
    
#line 820 "clpretty.ch"
#line 820 "clpretty.ch"
}
#line 820 "clpretty.ch"

#line 825 "clpretty.ch"

#line 825 "clpretty.ch"
void clpretty::TraiterExp2H ( PTREE tree, int x0 )
#line 825 "clpretty.ch"
{
#line 825 "clpretty.ch"
    register PPTREE _inter ;
#line 825 "clpretty.ch"

#line 825 "clpretty.ch"
#line 825 "clpretty.ch"
    int _nextVal ;
    
#line 825 "clpretty.ch"
#line 829 "clpretty.ch"
    int y0 ;
    
#line 829 "clpretty.ch"
#line 830 "clpretty.ch"
    int x ;
    
#line 830 "clpretty.ch"
#line 831 "clpretty.ch"
    int y ;
    
#line 831 "clpretty.ch"
#line 832 "clpretty.ch"
    int dx ;
    
#line 832 "clpretty.ch"
#line 833 "clpretty.ch"
    int lastMark ;
    
#line 833 "clpretty.ch"
#line 834 "clpretty.ch"
    int deltaRef ;
    
#line 834 "clpretty.ch"
#line 835 "clpretty.ch"
    int delta ;
    
#line 835 "clpretty.ch"
#line 836 "clpretty.ch"
    PTREE   lastTree ;
#line 836 "clpretty.ch"
    
#line 836 "clpretty.ch"
#line 837 "clpretty.ch"
    PTREE   attributeList ;
#line 837 "clpretty.ch"
    
#line 837 "clpretty.ch"
#line 838 "clpretty.ch"
    PTREE   father ;
#line 838 "clpretty.ch"
    
#line 838 "clpretty.ch"
#line 839 "clpretty.ch"
    PTREE   treeWithAttribute ;
#line 839 "clpretty.ch"
    
#line 839 "clpretty.ch"
#line 840 "clpretty.ch"
    int posTree ;
    
#line 840 "clpretty.ch"
#line 841 "clpretty.ch"
    PTREE   preAttribute ;
#line 841 "clpretty.ch"
    
#line 841 "clpretty.ch"
#line 842 "clpretty.ch"
    PTREE   postAttribute ;
#line 842 "clpretty.ch"
    
#line 842 "clpretty.ch"
#line 843 "clpretty.ch"
    PTREE   firstElem = (PTREE)0 ;
#line 843 "clpretty.ch"
    
#line 843 "clpretty.ch"
#line 844 "clpretty.ch"
    int hasIndented = 0 ;
    
#line 844 "clpretty.ch"
#line 845 "clpretty.ch"
    int priority ;
    
#line 845 "clpretty.ch"
#line 846 "clpretty.ch"
    int nPriority ;
    
#line 846 "clpretty.ch"
#line 847 "clpretty.ch"
    int posRef ;
    
#line 847 "clpretty.ch"
#line 848 "clpretty.ch"
    int colRef ;
    
#line 848 "clpretty.ch"
#line 849 "clpretty.ch"
    int ret = 1 ;
    
#line 849 "clpretty.ch"
#line 850 "clpretty.ch"
    int maxDx = 0 ;
    
#line 850 "clpretty.ch"
#line 851 "clpretty.ch"
    PTREE   list ;
#line 851 "clpretty.ch"
    
#line 851 "clpretty.ch"
#line 852 "clpretty.ch"
    int oldNbTab = nbTab ;
    
#line 852 "clpretty.ch"
#line 853 "clpretty.ch"
    PTREE   hasToPutVirt = (PTREE)0 ;
#line 853 "clpretty.ch"
    
#line 853 "clpretty.ch"
#line 854 "clpretty.ch"
    int deltaLoc ;
    
#line 854 "clpretty.ch"
#line 855 "clpretty.ch"
    PTREE   inter ;
#line 855 "clpretty.ch"
    
#line 855 "clpretty.ch"
#line 843 "clpretty.ch"
    firstElem = (PPTREE) 0 ;
#line 843 "clpretty.ch"
    
#line 843 "clpretty.ch"
#line 853 "clpretty.ch"
    hasToPutVirt = (PPTREE) 0 ;
#line 853 "clpretty.ch"
    
#line 853 "clpretty.ch"
#line 858 "clpretty.ch"
    GetCoord(tree, &x, &y, &dx, &colRef);
#line 858 "clpretty.ch"
#line 859 "clpretty.ch"
    x0 += x ;
#line 859 "clpretty.ch"
#line 860 "clpretty.ch"
    MarkCoordTree(tree, x0, 0);
#line 860 "clpretty.ch"
#line 863 "clpretty.ch"
    priority = OpType(tree);
#line 863 "clpretty.ch"
#line 864 "clpretty.ch"
    if ( colRef != markTab ) 
#line 864 "clpretty.ch"
#line 865 "clpretty.ch"
        nbTab = 0 ;
#line 865 "clpretty.ch"
#line 866 "clpretty.ch"
    posRef = TAB_VALUE(colRef, nbTab + 1);
#line 866 "clpretty.ch"
#line 867 "clpretty.ch"
    deltaRef = delta = 0 ;
#line 867 "clpretty.ch"
#line 868 "clpretty.ch"
    currTabTree = 0 ;
#line 868 "clpretty.ch"
#line 871 "clpretty.ch"
    AddTree(tree, 0);
#line 871 "clpretty.ch"
#line 874 "clpretty.ch"
    {
#line 874 "clpretty.ch"
#line 874 "clpretty.ch"
        ItPtree _iterator1 (tree, (PPTREE) 0) ;
        
#line 874 "clpretty.ch"
#line 874 "clpretty.ch"
        PPTREE  _for_elem ;
        
#line 874 "clpretty.ch"
#line 874 "clpretty.ch"
        _iterator1.AllSearch(1);
#line 874 "clpretty.ch"
#line 874 "clpretty.ch"
        while ( _for_elem = _iterator1++ ) {
#line 874 "clpretty.ch"
#line 874 "clpretty.ch"
            {
#line 874 "clpretty.ch"
#line 875 "clpretty.ch"
                nPriority = OpType(for_elem);
#line 875 "clpretty.ch"
#line 876 "clpretty.ch"
                GetCoord(for_elem, &x, &y, &dx, &lastMark);
#line 876 "clpretty.ch"
#line 877 "clpretty.ch"
                if ( nPriority != priority ) {
#line 877 "clpretty.ch"
#line 877 "clpretty.ch"
                                                PTREE   _Baum0 ;
#line 877 "clpretty.ch"
                                                
#line 877 "clpretty.ch"
#line 878 "clpretty.ch"
                                                _Baum0 = (PPTREE) 0 ;
#line 878 "clpretty.ch"
                                                
#line 878 "clpretty.ch"
#line 878 "clpretty.ch"
                                                GetCoordAbs(for_elem, _Baum0, &x0, &y0);
#line 878 "clpretty.ch"
#line 882 "clpretty.ch"
                                                if ( (!lastTree || deltaRef >= 0) && x0 + dx + delta > rightMargin ) {
#line 882 "clpretty.ch"
#line 883 "clpretty.ch"
if ( !hasToPutVirt ) {
#line 883 "clpretty.ch"
#line 884 "clpretty.ch"
                        (hasToPutVirt=for_elem);
#line 884 "clpretty.ch"
                        
#line 884 "clpretty.ch"
#line 885 "clpretty.ch"
                        (lastTree=for_elem);
#line 885 "clpretty.ch"
                        
#line 885 "clpretty.ch"
#line 886 "clpretty.ch"
                        
#line 886 "clpretty.ch"
#line 886 "clpretty.ch"
                       } else 
#line 886 "clpretty.ch"
{
#line 886 "clpretty.ch"
#line 887 "clpretty.ch"
    char    string [10];
    
#line 887 "clpretty.ch"
#line 888 "clpretty.ch"
    sprintf(string, "%d", colRef);
#line 888 "clpretty.ch"
#line 889 "clpretty.ch"
    {
#line 889 "clpretty.ch"
        PPTREE _ptTree0=(PPTREE) 0;
#line 889 "clpretty.ch"
        _ptTree0 = (PPTREE) 0;
#line 889 "clpretty.ch"
        {
#line 889 "clpretty.ch"
            PPTREE _ptTree1= (PPTREE) 0 ;
#line 889 "clpretty.ch"
            {
#line 889 "clpretty.ch"
                PPTREE _ptTree2= (PPTREE) 0,_ptRes2= (PPTREE) 0;
#line 889 "clpretty.ch"
                _ptRes2 = MakeTree(pretty::TAB_VIRT, 2);
#line 889 "clpretty.ch"
                _ptTree2 = StoreRef(MakeString(string));
#line 889 "clpretty.ch"
                ReplaceTree(_ptRes2, 1, _ptTree2);
#line 889 "clpretty.ch"
                _ptTree2 = MakeString("1") ;
#line 889 "clpretty.ch"
                ReplaceTree(_ptRes2, 2, _ptTree2);
#line 889 "clpretty.ch"
                _ptTree1 = _ptRes2;
#line 889 "clpretty.ch"
            }
#line 889 "clpretty.ch"
            _ptTree0 = AddList( _ptTree0,_ptTree1);
#line 889 "clpretty.ch"
        }
#line 889 "clpretty.ch"
        list = _ptTree0;
#line 889 "clpretty.ch"
        ;
#line 889 "clpretty.ch"
    }
#line 889 "clpretty.ch"
    
#line 889 "clpretty.ch"
#line 890 "clpretty.ch"
    PutAttr(for_elem, list, PRE_ATTR, PUT_END);
#line 890 "clpretty.ch"
#line 891 "clpretty.ch"
    (lastTree=for_elem);
#line 891 "clpretty.ch"
    
#line 891 "clpretty.ch"
#line 892 "clpretty.ch"
    for_elem = FatherTree(for_elem);
#line 892 "clpretty.ch"
#line 893 "clpretty.ch"
    
#line 893 "clpretty.ch"
#line 893 "clpretty.ch"
}

#line 893 "clpretty.ch"
#line 894 "clpretty.ch"

#line 894 "clpretty.ch"
#line 894 "clpretty.ch"
                                                                                                                              } else 
#line 894 "clpretty.ch"
                                                {
#line 894 "clpretty.ch"
#line 898 "clpretty.ch"
                                                    if ( x0 + dx + delta > rightMargin && lastTree && deltaRef < -1 ) {
#line 898 "clpretty.ch"
#line 898 "clpretty.ch"
PTREE   _Baum1 ;
#line 898 "clpretty.ch"

#line 898 "clpretty.ch"
#line 901 "clpretty.ch"
{
#line 901 "clpretty.ch"
    PPTREE _ptTree0=(PPTREE) 0;
#line 901 "clpretty.ch"
    _ptTree0 = (PPTREE) 0;
#line 901 "clpretty.ch"
    {
#line 901 "clpretty.ch"
        PPTREE _ptTree1= (PPTREE) 0 ;
#line 901 "clpretty.ch"
        {
#line 901 "clpretty.ch"
            PPTREE _ptTree2= (PPTREE) 0,_ptRes2= (PPTREE) 0;
#line 901 "clpretty.ch"
            _ptRes2 = MakeTree(pretty::NEWLINE, 1);
#line 901 "clpretty.ch"
            _ptTree2 = MakeString("1") ;
#line 901 "clpretty.ch"
            ReplaceTree(_ptRes2, 1, _ptTree2);
#line 901 "clpretty.ch"
            _ptTree1 = _ptRes2;
#line 901 "clpretty.ch"
        }
#line 901 "clpretty.ch"
        _ptTree0 = AddList( _ptTree0,_ptTree1);
#line 901 "clpretty.ch"
    }
#line 901 "clpretty.ch"
    attributeList = _ptTree0;
#line 901 "clpretty.ch"
    ;
#line 901 "clpretty.ch"
}
#line 901 "clpretty.ch"

#line 901 "clpretty.ch"
#line 902 "clpretty.ch"
if ( !hasIndented ) {
#line 902 "clpretty.ch"
#line 903 "clpretty.ch"
                        {
#line 903 "clpretty.ch"
#line 904 "clpretty.ch"
                            char    string [3];
                            
#line 904 "clpretty.ch"
#line 905 "clpretty.ch"
                            sprintf(string, "%d", nbTab + 1);
#line 905 "clpretty.ch"
#line 906 "clpretty.ch"
                            {
#line 906 "clpretty.ch"
                                PPTREE _ptTree0= (PPTREE) 0 ;
#line 906 "clpretty.ch"
                                {
#line 906 "clpretty.ch"
                                    PPTREE _ptTree1= (PPTREE) 0 ;
#line 906 "clpretty.ch"
                                    {
#line 906 "clpretty.ch"
                                        PPTREE _ptTree2= (PPTREE) 0,_ptRes2= (PPTREE) 0;
#line 906 "clpretty.ch"
                                        _ptRes2 = MakeTree(pretty::TAB, 1);
#line 906 "clpretty.ch"
                                        _ptTree2 = StoreRef(MakeString(string));
#line 906 "clpretty.ch"
                                        ReplaceTree(_ptRes2, 1, _ptTree2);
#line 906 "clpretty.ch"
                                        _ptTree1 = _ptRes2;
#line 906 "clpretty.ch"
                                    }
#line 906 "clpretty.ch"
                                    attributeList =  AddList( attributeList,_ptTree1);
#line 906 "clpretty.ch"
                                }
#line 906 "clpretty.ch"
                                {
#line 906 "clpretty.ch"
                                    PPTREE _ptTree1= (PPTREE) 0 ;
#line 906 "clpretty.ch"
                                    {
#line 906 "clpretty.ch"
                                        PPTREE _ptTree2= (PPTREE) 0,_ptRes2= (PPTREE) 0;
#line 906 "clpretty.ch"
                                        _ptRes2 = MakeTree(pretty::MARK, 0);
#line 906 "clpretty.ch"
                                        _ptTree1 = _ptRes2;
#line 906 "clpretty.ch"
                                    }
#line 906 "clpretty.ch"
                                    attributeList =  AddList( attributeList,_ptTree1);
#line 906 "clpretty.ch"
                                }
#line 906 "clpretty.ch"
                            }
#line 906 "clpretty.ch"
                            
#line 906 "clpretty.ch"
#line 907 "clpretty.ch"
                            
#line 907 "clpretty.ch"
#line 907 "clpretty.ch"
                        }
                        
#line 907 "clpretty.ch"
#line 908 "clpretty.ch"
                        hasIndented = 1 ;
#line 908 "clpretty.ch"
#line 909 "clpretty.ch"
                        
#line 909 "clpretty.ch"
#line 909 "clpretty.ch"
                      }
#line 909 "clpretty.ch"
#line 910 "clpretty.ch"
PutAttr(lastTree, attributeList, POST_ATTR, PUT_END);
#line 910 "clpretty.ch"
#line 913 "clpretty.ch"
delta = deltaRef ;
#line 913 "clpretty.ch"
#line 914 "clpretty.ch"
_Baum1 = (PPTREE) 0 ;
#line 914 "clpretty.ch"

#line 914 "clpretty.ch"
#line 914 "clpretty.ch"
(inter=SNextTree(lastTree, _Baum1));
#line 914 "clpretty.ch"

#line 914 "clpretty.ch"
#line 915 "clpretty.ch"
while ( 1 ) {
#line 915 "clpretty.ch"
#line 915 "clpretty.ch"
                PTREE   _Baum3 ;
#line 915 "clpretty.ch"
                
#line 915 "clpretty.ch"
#line 916 "clpretty.ch"
                (father=FatherTree(inter));
#line 916 "clpretty.ch"
                
#line 916 "clpretty.ch"
#line 917 "clpretty.ch"
                while ( inter && ((_inter = (PPTREE)father,1) && 
#line 917 "clpretty.ch"
                                        (NumberTree(_inter) == pretty::ATTRIBUTS) &&
#line 917 "clpretty.ch"
                                        1) && ranktree(inter) != 1 ) {
#line 917 "clpretty.ch"
#line 917 "clpretty.ch"
                                                                            PTREE   _Baum2 ;
#line 917 "clpretty.ch"
                                                                            
#line 917 "clpretty.ch"
#line 918 "clpretty.ch"
                                                                            _Baum2 = (PPTREE) 0 ;
#line 918 "clpretty.ch"
                                                                            
#line 918 "clpretty.ch"
#line 918 "clpretty.ch"
                                                                            (inter=SNextTree(father, _Baum2));
#line 918 "clpretty.ch"
                                                                            
#line 918 "clpretty.ch"
#line 919 "clpretty.ch"
                                                                            (father=FatherTree(inter));
#line 919 "clpretty.ch"
                                                                            
#line 919 "clpretty.ch"
#line 920 "clpretty.ch"
                                                                            
#line 920 "clpretty.ch"
#line 920 "clpretty.ch"
                                                                        }
#line 920 "clpretty.ch"
#line 921 "clpretty.ch"
                if ( inter != (PTREE)for_elem ) 
#line 921 "clpretty.ch"
#line 922 "clpretty.ch"
                    AddTree(inter, delta);
#line 922 "clpretty.ch"
                else 
#line 923 "clpretty.ch"
                {
#line 923 "clpretty.ch"
#line 924 "clpretty.ch"
                    deltaLoc = delta - FindDelta(inter);
#line 924 "clpretty.ch"
#line 925 "clpretty.ch"
                    PutCoord(inter, x + deltaLoc, y, dx, lastMark);
#line 925 "clpretty.ch"
#line 926 "clpretty.ch"
                    break ;
                    
#line 926 "clpretty.ch"
#line 927 "clpretty.ch"
                    
#line 927 "clpretty.ch"
#line 927 "clpretty.ch"
                }
                
#line 927 "clpretty.ch"
#line 928 "clpretty.ch"
                _Baum3 = (PPTREE) 0 ;
#line 928 "clpretty.ch"
                
#line 928 "clpretty.ch"
#line 928 "clpretty.ch"
                (inter=NextTree(inter, _Baum3));
#line 928 "clpretty.ch"
                
#line 928 "clpretty.ch"
#line 929 "clpretty.ch"
                
#line 929 "clpretty.ch"
#line 929 "clpretty.ch"
             }
#line 929 "clpretty.ch"
#line 932 "clpretty.ch"
TraitMark(for_elem, posRef);
#line 932 "clpretty.ch"
#line 933 "clpretty.ch"

#line 933 "clpretty.ch"
#line 933 "clpretty.ch"
                                                                                                                              } else 
#line 933 "clpretty.ch"
                                                    if ( hasIndented ) {
#line 933 "clpretty.ch"
#line 936 "clpretty.ch"
                                                                            deltaLoc = delta - FindDelta(for_elem);
#line 936 "clpretty.ch"
#line 937 "clpretty.ch"
                                                                            PutCoord(for_elem, x + deltaLoc, y, dx, lastMark);
#line 937 "clpretty.ch"
#line 940 "clpretty.ch"
                                                                            TraitMark(for_elem, posRef);
#line 940 "clpretty.ch"
#line 941 "clpretty.ch"
                                                                            
#line 941 "clpretty.ch"
#line 941 "clpretty.ch"
                                                                        }
#line 941 "clpretty.ch"
#line 942 "clpretty.ch"
                                                    (lastTree=for_elem);
#line 942 "clpretty.ch"
                                                    
#line 942 "clpretty.ch"
#line 943 "clpretty.ch"
                                                    
#line 943 "clpretty.ch"
#line 943 "clpretty.ch"
                                                }
                                                
#line 943 "clpretty.ch"
#line 947 "clpretty.ch"
                                                if ( y & 0x2 ) {
#line 947 "clpretty.ch"
#line 948 "clpretty.ch"
                                                                    delta = deltaRef = posRef - colRef ;
#line 948 "clpretty.ch"
#line 949 "clpretty.ch"
                                                                    
#line 949 "clpretty.ch"
#line 949 "clpretty.ch"
                                                                 } else 
#line 949 "clpretty.ch"
#line 950 "clpretty.ch"
                                                    deltaRef = posRef - x0 - dx ;
#line 950 "clpretty.ch"
                                                
#line 950 "clpretty.ch"
#line 953 "clpretty.ch"
                                                goto for_continue1 ;
                                                
#line 953 "clpretty.ch"
#line 954 "clpretty.ch"
                                                
#line 954 "clpretty.ch"
#line 954 "clpretty.ch"
                                               } else 
#line 954 "clpretty.ch"
                if ( hasIndented ) {
#line 954 "clpretty.ch"
#line 955 "clpretty.ch"
                                        AddTree(for_elem, delta);
#line 955 "clpretty.ch"
#line 956 "clpretty.ch"
                                        
#line 956 "clpretty.ch"
#line 956 "clpretty.ch"
                                    }
#line 956 "clpretty.ch"
#line 957 "clpretty.ch"
                
#line 957 "clpretty.ch"
#line 957 "clpretty.ch"
            }
            
#line 957 "clpretty.ch"
#line 957 "clpretty.ch"
            _iterator1.Current(_for_elem);
#line 957 "clpretty.ch"
#line 957 "clpretty.ch"
            continue ;
            
#line 957 "clpretty.ch"
#line 957 "clpretty.ch"
        for_continue1 : 
#line 957 "clpretty.ch"
#line 957 "clpretty.ch"
            _iterator1.Current(_for_elem);
#line 957 "clpretty.ch"
#line 957 "clpretty.ch"
            _iterator1.SkipSon(1);
#line 957 "clpretty.ch"
#line 957 "clpretty.ch"
            continue ;
            
#line 957 "clpretty.ch"
#line 957 "clpretty.ch"
        for_break1 : 
#line 957 "clpretty.ch"
#line 957 "clpretty.ch"
            break ;
            
#line 957 "clpretty.ch"
#line 957 "clpretty.ch"
            
#line 957 "clpretty.ch"
#line 957 "clpretty.ch"
        }
#line 957 "clpretty.ch"
#line 957 "clpretty.ch"
        
#line 957 "clpretty.ch"
#line 957 "clpretty.ch"
    }
    
#line 957 "clpretty.ch"
#line 960 "clpretty.ch"
    if ( hasIndented ) {
#line 960 "clpretty.ch"
#line 961 "clpretty.ch"
                            {
#line 961 "clpretty.ch"
                                PPTREE _ptTree0=(PPTREE) 0;
#line 961 "clpretty.ch"
                                _ptTree0 = (PPTREE) 0;
#line 961 "clpretty.ch"
                                {
#line 961 "clpretty.ch"
                                    PPTREE _ptTree1= (PPTREE) 0 ;
#line 961 "clpretty.ch"
                                    {
#line 961 "clpretty.ch"
                                        PPTREE _ptTree2= (PPTREE) 0,_ptRes2= (PPTREE) 0;
#line 961 "clpretty.ch"
                                        _ptRes2 = MakeTree(pretty::UNMARK, 0);
#line 961 "clpretty.ch"
                                        _ptTree1 = _ptRes2;
#line 961 "clpretty.ch"
                                    }
#line 961 "clpretty.ch"
                                    _ptTree0 = AddList( _ptTree0,_ptTree1);
#line 961 "clpretty.ch"
                                }
#line 961 "clpretty.ch"
                                list = _ptTree0;
#line 961 "clpretty.ch"
                                ;
#line 961 "clpretty.ch"
                            }
#line 961 "clpretty.ch"
                            
#line 961 "clpretty.ch"
#line 962 "clpretty.ch"
                            PutAttr(lastTree, list, POST_ATTR, PUT_BEG);
#line 962 "clpretty.ch"
#line 963 "clpretty.ch"
                            
#line 963 "clpretty.ch"
#line 963 "clpretty.ch"
                        }
#line 963 "clpretty.ch"
#line 966 "clpretty.ch"
    if ( hasIndented && hasToPutVirt ) {
#line 966 "clpretty.ch"
#line 967 "clpretty.ch"
                                            char    string [10];
                                            
#line 967 "clpretty.ch"
#line 968 "clpretty.ch"
                                            sprintf(string, "%d", colRef);
#line 968 "clpretty.ch"
#line 969 "clpretty.ch"
                                            {
#line 969 "clpretty.ch"
                                                PPTREE _ptTree0=(PPTREE) 0;
#line 969 "clpretty.ch"
                                                _ptTree0 = (PPTREE) 0;
#line 969 "clpretty.ch"
                                                {
#line 969 "clpretty.ch"
                                                    PPTREE _ptTree1= (PPTREE) 0 ;
#line 969 "clpretty.ch"
                                                    {
#line 969 "clpretty.ch"
                                                        PPTREE _ptTree2= (PPTREE) 0,_ptRes2= (PPTREE) 0;
#line 969 "clpretty.ch"
                                                        _ptRes2 = MakeTree(pretty::TAB_VIRT, 2);
#line 969 "clpretty.ch"
                                                        _ptTree2 = StoreRef(MakeString(string));
#line 969 "clpretty.ch"
                                                        ReplaceTree(_ptRes2, 1, _ptTree2);
#line 969 "clpretty.ch"
                                                        _ptTree2 = MakeString("1") ;
#line 969 "clpretty.ch"
                                                        ReplaceTree(_ptRes2, 2, _ptTree2);
#line 969 "clpretty.ch"
                                                        _ptTree1 = _ptRes2;
#line 969 "clpretty.ch"
                                                    }
#line 969 "clpretty.ch"
                                                    _ptTree0 = AddList( _ptTree0,_ptTree1);
#line 969 "clpretty.ch"
                                                }
#line 969 "clpretty.ch"
                                                list = _ptTree0;
#line 969 "clpretty.ch"
                                                ;
#line 969 "clpretty.ch"
                                            }
#line 969 "clpretty.ch"
                                            
#line 969 "clpretty.ch"
#line 970 "clpretty.ch"
                                            PutAttr(hasToPutVirt, list, PRE_ATTR, PUT_END);
#line 970 "clpretty.ch"
#line 971 "clpretty.ch"
                                            
#line 971 "clpretty.ch"
#line 971 "clpretty.ch"
                                         }
#line 971 "clpretty.ch"
#line 974 "clpretty.ch"
#line 974 "clpretty.ch"
    for ( int nbNode = 0 ; nbNode < currTabTree ; nbNode++ ) {
#line 974 "clpretty.ch"
#line 975 "clpretty.ch"
                                                                    GetCoord(tabTree [nbNode].tree, &x, &y, &dx, &lastMark);
#line 975 "clpretty.ch"
#line 976 "clpretty.ch"
                                                                    deltaLoc = tabTree [nbNode].delta - FindDelta(tabTree [nbNode].tree);
#line 976 "clpretty.ch"
#line 977 "clpretty.ch"
                                                                    PutCoord(tabTree [nbNode].tree, x + deltaLoc, y, dx, lastMark);
#line 977 "clpretty.ch"
#line 978 "clpretty.ch"
                                                                    
#line 978 "clpretty.ch"
#line 978 "clpretty.ch"
                                                                  }
#line 978 "clpretty.ch"
    
#line 978 "clpretty.ch"
#line 981 "clpretty.ch"
    UpdateSize(tree, OpType(tree));
#line 981 "clpretty.ch"
#line 984 "clpretty.ch"
    UnMarkCoordTree(tree);
#line 984 "clpretty.ch"
#line 985 "clpretty.ch"
    nbTab = oldNbTab ;
#line 985 "clpretty.ch"
#line 986 "clpretty.ch"
    
#line 986 "clpretty.ch"
#line 986 "clpretty.ch"
}
#line 986 "clpretty.ch"

#line 991 "clpretty.ch"

#line 991 "clpretty.ch"
void clpretty::TraiterExp2V ( PTREE tree, int x0 )
#line 991 "clpretty.ch"
{
#line 991 "clpretty.ch"
    register PPTREE _inter ;
#line 991 "clpretty.ch"

#line 991 "clpretty.ch"
#line 991 "clpretty.ch"
    int _nextVal ;
    
#line 991 "clpretty.ch"
#line 995 "clpretty.ch"
    int y0 ;
    
#line 995 "clpretty.ch"
#line 996 "clpretty.ch"
    int x ;
    
#line 996 "clpretty.ch"
#line 997 "clpretty.ch"
    int y ;
    
#line 997 "clpretty.ch"
#line 998 "clpretty.ch"
    int dx ;
    
#line 998 "clpretty.ch"
#line 999 "clpretty.ch"
    int lastMark ;
    
#line 999 "clpretty.ch"
#line 1000 "clpretty.ch"
    int deltaRef ;
    
#line 1000 "clpretty.ch"
#line 1001 "clpretty.ch"
    int delta ;
    
#line 1001 "clpretty.ch"
#line 1002 "clpretty.ch"
    PTREE   lastTree ;
#line 1002 "clpretty.ch"
    
#line 1002 "clpretty.ch"
#line 1003 "clpretty.ch"
    PTREE   attributeList ;
#line 1003 "clpretty.ch"
    
#line 1003 "clpretty.ch"
#line 1004 "clpretty.ch"
    PTREE   father ;
#line 1004 "clpretty.ch"
    
#line 1004 "clpretty.ch"
#line 1005 "clpretty.ch"
    PTREE   treeWithAttribute ;
#line 1005 "clpretty.ch"
    
#line 1005 "clpretty.ch"
#line 1006 "clpretty.ch"
    int posTree ;
    
#line 1006 "clpretty.ch"
#line 1007 "clpretty.ch"
    PTREE   preAttribute ;
#line 1007 "clpretty.ch"
    
#line 1007 "clpretty.ch"
#line 1008 "clpretty.ch"
    PTREE   postAttribute ;
#line 1008 "clpretty.ch"
    
#line 1008 "clpretty.ch"
#line 1009 "clpretty.ch"
    PTREE   firstElem = (PTREE)0 ;
#line 1009 "clpretty.ch"
    
#line 1009 "clpretty.ch"
#line 1010 "clpretty.ch"
    int hasIndented = 0 ;
    
#line 1010 "clpretty.ch"
#line 1011 "clpretty.ch"
    int priority ;
    
#line 1011 "clpretty.ch"
#line 1012 "clpretty.ch"
    int nPriority ;
    
#line 1012 "clpretty.ch"
#line 1013 "clpretty.ch"
    int posRef ;
    
#line 1013 "clpretty.ch"
#line 1014 "clpretty.ch"
    int colRef ;
    
#line 1014 "clpretty.ch"
#line 1015 "clpretty.ch"
    int ret = 1 ;
    
#line 1015 "clpretty.ch"
#line 1016 "clpretty.ch"
    PTREE   list ;
#line 1016 "clpretty.ch"
    
#line 1016 "clpretty.ch"
#line 1017 "clpretty.ch"
    PTREE   hasToPutVirt ;
#line 1017 "clpretty.ch"
    
#line 1017 "clpretty.ch"
#line 1018 "clpretty.ch"
    int oldNbTab = nbTab ;
    
#line 1018 "clpretty.ch"
#line 1019 "clpretty.ch"
    int deltaLoc ;
    
#line 1019 "clpretty.ch"
#line 1020 "clpretty.ch"
    PTREE   inter ;
#line 1020 "clpretty.ch"
    
#line 1020 "clpretty.ch"
#line 1009 "clpretty.ch"
    firstElem = (PPTREE) 0 ;
#line 1009 "clpretty.ch"
    
#line 1009 "clpretty.ch"
#line 1023 "clpretty.ch"
    GetCoord(tree, &x, &y, &dx, &colRef);
#line 1023 "clpretty.ch"
#line 1024 "clpretty.ch"
    x0 += x ;
#line 1024 "clpretty.ch"
#line 1025 "clpretty.ch"
    MarkCoordTree(tree, x0, 0);
#line 1025 "clpretty.ch"
#line 1026 "clpretty.ch"
    colRef = x0 ;
#line 1026 "clpretty.ch"
#line 1029 "clpretty.ch"
    {
#line 1029 "clpretty.ch"
        PPTREE _ptTree0=(PPTREE) 0;
#line 1029 "clpretty.ch"
        _ptTree0 = (PPTREE) 0;
#line 1029 "clpretty.ch"
        {
#line 1029 "clpretty.ch"
            PPTREE _ptTree1= (PPTREE) 0 ;
#line 1029 "clpretty.ch"
            {
#line 1029 "clpretty.ch"
                PPTREE _ptTree2= (PPTREE) 0,_ptRes2= (PPTREE) 0;
#line 1029 "clpretty.ch"
                _ptRes2 = MakeTree(pretty::MARK, 0);
#line 1029 "clpretty.ch"
                _ptTree1 = _ptRes2;
#line 1029 "clpretty.ch"
            }
#line 1029 "clpretty.ch"
            _ptTree0 = AddList( _ptTree0,_ptTree1);
#line 1029 "clpretty.ch"
        }
#line 1029 "clpretty.ch"
        list = _ptTree0;
#line 1029 "clpretty.ch"
        ;
#line 1029 "clpretty.ch"
    }
#line 1029 "clpretty.ch"
    
#line 1029 "clpretty.ch"
#line 1030 "clpretty.ch"
    PutAttr(tree, list, PRE_ATTR, PUT_END);
#line 1030 "clpretty.ch"
#line 1031 "clpretty.ch"
    {
#line 1031 "clpretty.ch"
        PPTREE _ptTree0=(PPTREE) 0;
#line 1031 "clpretty.ch"
        _ptTree0 = (PPTREE) 0;
#line 1031 "clpretty.ch"
        {
#line 1031 "clpretty.ch"
            PPTREE _ptTree1= (PPTREE) 0 ;
#line 1031 "clpretty.ch"
            {
#line 1031 "clpretty.ch"
                PPTREE _ptTree2= (PPTREE) 0,_ptRes2= (PPTREE) 0;
#line 1031 "clpretty.ch"
                _ptRes2 = MakeTree(pretty::UNMARK, 0);
#line 1031 "clpretty.ch"
                _ptTree1 = _ptRes2;
#line 1031 "clpretty.ch"
            }
#line 1031 "clpretty.ch"
            _ptTree0 = AddList( _ptTree0,_ptTree1);
#line 1031 "clpretty.ch"
        }
#line 1031 "clpretty.ch"
        list = _ptTree0;
#line 1031 "clpretty.ch"
        ;
#line 1031 "clpretty.ch"
    }
#line 1031 "clpretty.ch"
    
#line 1031 "clpretty.ch"
#line 1032 "clpretty.ch"
    PutAttr(tree, list, POST_ATTR, PUT_BEG);
#line 1032 "clpretty.ch"
#line 1033 "clpretty.ch"
    TraitMark(tree, colRef);
#line 1033 "clpretty.ch"
#line 1036 "clpretty.ch"
    priority = OpType(tree);
#line 1036 "clpretty.ch"
#line 1037 "clpretty.ch"
    if ( markTab != colRef ) 
#line 1037 "clpretty.ch"
#line 1038 "clpretty.ch"
        nbTab = 0 ;
#line 1038 "clpretty.ch"
#line 1039 "clpretty.ch"
    posRef = TAB_VALUE(x0, nbTab + 1);
#line 1039 "clpretty.ch"
#line 1040 "clpretty.ch"
    deltaRef = delta = 0 ;
#line 1040 "clpretty.ch"
#line 1043 "clpretty.ch"
    AddTree(tree, 0);
#line 1043 "clpretty.ch"
#line 1044 "clpretty.ch"
    {
#line 1044 "clpretty.ch"
#line 1044 "clpretty.ch"
        ItPtree _iterator1 (tree, (PPTREE) 0) ;
        
#line 1044 "clpretty.ch"
#line 1044 "clpretty.ch"
        PPTREE  _for_elem ;
        
#line 1044 "clpretty.ch"
#line 1044 "clpretty.ch"
        _iterator1.AllSearch(1);
#line 1044 "clpretty.ch"
#line 1044 "clpretty.ch"
        while ( _for_elem = _iterator1++ ) {
#line 1044 "clpretty.ch"
#line 1044 "clpretty.ch"
            {
#line 1044 "clpretty.ch"
#line 1047 "clpretty.ch"
                nPriority = OpType(for_elem);
#line 1047 "clpretty.ch"
#line 1048 "clpretty.ch"
                GetCoord(for_elem, &x, &y, &dx, &lastMark);
#line 1048 "clpretty.ch"
#line 1049 "clpretty.ch"
                if ( nPriority != priority ) {
#line 1049 "clpretty.ch"
#line 1049 "clpretty.ch"
                                                PTREE   _Baum0 ;
#line 1049 "clpretty.ch"
                                                
#line 1049 "clpretty.ch"
#line 1050 "clpretty.ch"
                                                _Baum0 = (PPTREE) 0 ;
#line 1050 "clpretty.ch"
                                                
#line 1050 "clpretty.ch"
#line 1050 "clpretty.ch"
                                                GetCoordAbs(for_elem, _Baum0, &x0, &y0);
#line 1050 "clpretty.ch"
#line 1054 "clpretty.ch"
                                                if ( !lastTree || deltaRef >= 0 ) {
#line 1054 "clpretty.ch"
#line 1055 "clpretty.ch"
                                                                                        if ( !hasToPutVirt ) {
#line 1055 "clpretty.ch"
#line 1056 "clpretty.ch"
                                                                                                                (hasToPutVirt=for_elem);
#line 1056 "clpretty.ch"
                                                                                                                
#line 1056 "clpretty.ch"
#line 1057 "clpretty.ch"
                                                                                                                (lastTree=for_elem);
#line 1057 "clpretty.ch"
                                                                                                                
#line 1057 "clpretty.ch"
#line 1058 "clpretty.ch"
                                                                                                                
#line 1058 "clpretty.ch"
#line 1058 "clpretty.ch"
                                                                                                               } else 
#line 1058 "clpretty.ch"
                                                                                        {
#line 1058 "clpretty.ch"
#line 1059 "clpretty.ch"
                                                                                            char    string [10];
                                                                                            
#line 1059 "clpretty.ch"
#line 1060 "clpretty.ch"
                                                                                            sprintf(string, "%d", colRef);
#line 1060 "clpretty.ch"
#line 1061 "clpretty.ch"
                                                                                            {
#line 1061 "clpretty.ch"
                                                                                                PPTREE _ptTree0=(PPTREE) 0;
#line 1061 "clpretty.ch"
                                                                                                _ptTree0 = (PPTREE) 0;
#line 1061 "clpretty.ch"
                                                                                                {
#line 1061 "clpretty.ch"
                                                                                                    PPTREE _ptTree1= (PPTREE) 0 ;
#line 1061 "clpretty.ch"
                                                                                                    {
#line 1061 "clpretty.ch"
                                                                                                        PPTREE _ptTree2= (PPTREE) 0,_ptRes2= (PPTREE) 0;
#line 1061 "clpretty.ch"
                                                                                                        _ptRes2 = MakeTree(pretty::TAB_VIRT, 2);
#line 1061 "clpretty.ch"
                                                                                                        _ptTree2 = StoreRef(MakeString(string));
#line 1061 "clpretty.ch"
                                                                                                        ReplaceTree(_ptRes2, 1, _ptTree2);
#line 1061 "clpretty.ch"
                                                                                                        _ptTree2 = MakeString("1") ;
#line 1061 "clpretty.ch"
                                                                                                        ReplaceTree(_ptRes2, 2, _ptTree2);
#line 1061 "clpretty.ch"
                                                                                                        _ptTree1 = _ptRes2;
#line 1061 "clpretty.ch"
                                                                                                    }
#line 1061 "clpretty.ch"
                                                                                                    _ptTree0 = AddList( _ptTree0,_ptTree1);
#line 1061 "clpretty.ch"
                                                                                                }
#line 1061 "clpretty.ch"
                                                                                                list = _ptTree0;
#line 1061 "clpretty.ch"
                                                                                                ;
#line 1061 "clpretty.ch"
                                                                                            }
#line 1061 "clpretty.ch"
                                                                                            
#line 1061 "clpretty.ch"
#line 1062 "clpretty.ch"
                                                                                            PutAttr(for_elem, list, PRE_ATTR, PUT_END);
#line 1062 "clpretty.ch"
#line 1063 "clpretty.ch"
                                                                                            (lastTree=for_elem);
#line 1063 "clpretty.ch"
                                                                                            
#line 1063 "clpretty.ch"
#line 1064 "clpretty.ch"
                                                                                            for_elem = FatherTree(for_elem);
#line 1064 "clpretty.ch"
#line 1065 "clpretty.ch"
                                                                                            
#line 1065 "clpretty.ch"
#line 1065 "clpretty.ch"
                                                                                        }
                                                                                        
#line 1065 "clpretty.ch"
#line 1066 "clpretty.ch"
                                                                                        
#line 1066 "clpretty.ch"
#line 1066 "clpretty.ch"
                                                                                      } else 
#line 1066 "clpretty.ch"
                                                {
#line 1066 "clpretty.ch"
#line 1069 "clpretty.ch"
                                                    if ( lastTree && deltaRef < -1 ) {
#line 1069 "clpretty.ch"
#line 1072 "clpretty.ch"
                                                                                            if ( !(((_inter = (PPTREE)lastTree,1) && 
#line 1072 "clpretty.ch"
                                                                                                        (NumberTree(_inter) == pretty::ATTRIBUTS) &&
#line 1072 "clpretty.ch"
                                                                                                        1)) ) {
#line 1072 "clpretty.ch"
#line 1072 "clpretty.ch"
                                                                                                                PTREE   _Baum1 ;
#line 1072 "clpretty.ch"
                                                                                                                
#line 1072 "clpretty.ch"
#line 1075 "clpretty.ch"
                                                                                                                {
#line 1075 "clpretty.ch"
                                                                                                                    PPTREE _ptTree0=(PPTREE) 0;
#line 1075 "clpretty.ch"
                                                                                                                    _ptTree0 = (PPTREE) 0;
#line 1075 "clpretty.ch"
                                                                                                                    {
#line 1075 "clpretty.ch"
                                                                                                                        PPTREE _ptTree1= (PPTREE) 0 ;
#line 1075 "clpretty.ch"
                                                                                                                        {
#line 1075 "clpretty.ch"
PPTREE _ptTree2= (PPTREE) 0,_ptRes2= (PPTREE) 0;
#line 1075 "clpretty.ch"
_ptRes2 = MakeTree(pretty::NEWLINE, 1);
#line 1075 "clpretty.ch"
_ptTree2 = MakeString("1") ;
#line 1075 "clpretty.ch"
ReplaceTree(_ptRes2, 1, _ptTree2);
#line 1075 "clpretty.ch"
_ptTree1 = _ptRes2;
#line 1075 "clpretty.ch"
                                                                                                                        }
#line 1075 "clpretty.ch"
                                                                                                                        _ptTree0 = AddList( _ptTree0,_ptTree1);
#line 1075 "clpretty.ch"
                                                                                                                    }
#line 1075 "clpretty.ch"
                                                                                                                    attributeList = _ptTree0;
#line 1075 "clpretty.ch"
                                                                                                                    ;
#line 1075 "clpretty.ch"
                                                                                                                }
#line 1075 "clpretty.ch"
                                                                                                                
#line 1075 "clpretty.ch"
#line 1076 "clpretty.ch"
                                                                                                                if ( !hasIndented ) {
#line 1076 "clpretty.ch"
#line 1077 "clpretty.ch"
char    string [10];

#line 1077 "clpretty.ch"
#line 1078 "clpretty.ch"
sprintf(string, "%d", nbTab + 1);
#line 1078 "clpretty.ch"
#line 1079 "clpretty.ch"
{
#line 1079 "clpretty.ch"
    PPTREE _ptTree0= (PPTREE) 0 ;
#line 1079 "clpretty.ch"
    {
#line 1079 "clpretty.ch"
        PPTREE _ptTree1= (PPTREE) 0 ;
#line 1079 "clpretty.ch"
        {
#line 1079 "clpretty.ch"
            PPTREE _ptTree2= (PPTREE) 0,_ptRes2= (PPTREE) 0;
#line 1079 "clpretty.ch"
            _ptRes2 = MakeTree(pretty::TAB, 1);
#line 1079 "clpretty.ch"
            _ptTree2 = StoreRef(MakeString(string));
#line 1079 "clpretty.ch"
            ReplaceTree(_ptRes2, 1, _ptTree2);
#line 1079 "clpretty.ch"
            _ptTree1 = _ptRes2;
#line 1079 "clpretty.ch"
        }
#line 1079 "clpretty.ch"
        attributeList =  AddList( attributeList,_ptTree1);
#line 1079 "clpretty.ch"
    }
#line 1079 "clpretty.ch"
    {
#line 1079 "clpretty.ch"
        PPTREE _ptTree1= (PPTREE) 0 ;
#line 1079 "clpretty.ch"
        {
#line 1079 "clpretty.ch"
            PPTREE _ptTree2= (PPTREE) 0,_ptRes2= (PPTREE) 0;
#line 1079 "clpretty.ch"
            _ptRes2 = MakeTree(pretty::MARK, 0);
#line 1079 "clpretty.ch"
            _ptTree1 = _ptRes2;
#line 1079 "clpretty.ch"
        }
#line 1079 "clpretty.ch"
        attributeList =  AddList( attributeList,_ptTree1);
#line 1079 "clpretty.ch"
    }
#line 1079 "clpretty.ch"
}
#line 1079 "clpretty.ch"

#line 1079 "clpretty.ch"
#line 1080 "clpretty.ch"
hasIndented = 1 ;
#line 1080 "clpretty.ch"
#line 1081 "clpretty.ch"

#line 1081 "clpretty.ch"
#line 1081 "clpretty.ch"
                                                                                                                                      }
#line 1081 "clpretty.ch"
#line 1082 "clpretty.ch"
                                                                                                                PutAttr(lastTree, attributeList, POST_ATTR, PUT_END);
#line 1082 "clpretty.ch"
#line 1085 "clpretty.ch"
                                                                                                                delta = deltaRef ;
#line 1085 "clpretty.ch"
#line 1086 "clpretty.ch"
                                                                                                                _Baum1 = (PPTREE) 0 ;
#line 1086 "clpretty.ch"
                                                                                                                
#line 1086 "clpretty.ch"
#line 1086 "clpretty.ch"
                                                                                                                (inter=SNextTree(lastTree, _Baum1));
#line 1086 "clpretty.ch"
                                                                                                                
#line 1086 "clpretty.ch"
#line 1087 "clpretty.ch"
                                                                                                                while ( 1 ) {
#line 1087 "clpretty.ch"
#line 1087 "clpretty.ch"
PTREE   _Baum3 ;
#line 1087 "clpretty.ch"

#line 1087 "clpretty.ch"
#line 1088 "clpretty.ch"
(father=FatherTree(inter));
#line 1088 "clpretty.ch"

#line 1088 "clpretty.ch"
#line 1089 "clpretty.ch"
while ( inter && ((_inter = (PPTREE)father,1) && 
#line 1089 "clpretty.ch"
                        (NumberTree(_inter) == pretty::ATTRIBUTS) &&
#line 1089 "clpretty.ch"
                        1) && ranktree(inter) != 1 ) {
#line 1089 "clpretty.ch"
#line 1089 "clpretty.ch"
                                                            PTREE   _Baum2 ;
#line 1089 "clpretty.ch"
                                                            
#line 1089 "clpretty.ch"
#line 1090 "clpretty.ch"
                                                            _Baum2 = (PPTREE) 0 ;
#line 1090 "clpretty.ch"
                                                            
#line 1090 "clpretty.ch"
#line 1090 "clpretty.ch"
                                                            (inter=SNextTree(father, _Baum2));
#line 1090 "clpretty.ch"
                                                            
#line 1090 "clpretty.ch"
#line 1091 "clpretty.ch"
                                                            (father=FatherTree(inter));
#line 1091 "clpretty.ch"
                                                            
#line 1091 "clpretty.ch"
#line 1092 "clpretty.ch"
                                                            
#line 1092 "clpretty.ch"
#line 1092 "clpretty.ch"
                                                        }
#line 1092 "clpretty.ch"
#line 1093 "clpretty.ch"
if ( inter != (PTREE)for_elem ) 
#line 1093 "clpretty.ch"
#line 1094 "clpretty.ch"
    AddTree(inter, delta);
#line 1094 "clpretty.ch"
else 
#line 1095 "clpretty.ch"
{
#line 1095 "clpretty.ch"
#line 1096 "clpretty.ch"
    deltaLoc = delta - FindDelta(inter);
#line 1096 "clpretty.ch"
#line 1097 "clpretty.ch"
    PutCoord(inter, x + deltaLoc, y, dx, lastMark);
#line 1097 "clpretty.ch"
#line 1098 "clpretty.ch"
    break ;
    
#line 1098 "clpretty.ch"
#line 1099 "clpretty.ch"
    
#line 1099 "clpretty.ch"
#line 1099 "clpretty.ch"
}

#line 1099 "clpretty.ch"
#line 1100 "clpretty.ch"
_Baum3 = (PPTREE) 0 ;
#line 1100 "clpretty.ch"

#line 1100 "clpretty.ch"
#line 1100 "clpretty.ch"
(inter=NextTree(inter, _Baum3));
#line 1100 "clpretty.ch"

#line 1100 "clpretty.ch"
#line 1101 "clpretty.ch"

#line 1101 "clpretty.ch"
#line 1101 "clpretty.ch"
                                                                                                                             }
#line 1101 "clpretty.ch"
#line 1104 "clpretty.ch"
                                                                                                                TraitMark(for_elem, posRef);
#line 1104 "clpretty.ch"
#line 1105 "clpretty.ch"
                                                                                                                
#line 1105 "clpretty.ch"
#line 1105 "clpretty.ch"
                                                                                                              }
#line 1105 "clpretty.ch"
#line 1106 "clpretty.ch"
                                                                                            
#line 1106 "clpretty.ch"
#line 1106 "clpretty.ch"
                                                                                         } else 
#line 1106 "clpretty.ch"
                                                    if ( hasIndented ) {
#line 1106 "clpretty.ch"
#line 1109 "clpretty.ch"
                                                                            deltaLoc = delta - FindDelta(for_elem);
#line 1109 "clpretty.ch"
#line 1110 "clpretty.ch"
                                                                            PutCoord(for_elem, x + deltaLoc, y, dx, lastMark);
#line 1110 "clpretty.ch"
#line 1113 "clpretty.ch"
                                                                            TraitMark(for_elem, posRef);
#line 1113 "clpretty.ch"
#line 1114 "clpretty.ch"
                                                                            
#line 1114 "clpretty.ch"
#line 1114 "clpretty.ch"
                                                                        }
#line 1114 "clpretty.ch"
#line 1115 "clpretty.ch"
                                                    (lastTree=for_elem);
#line 1115 "clpretty.ch"
                                                    
#line 1115 "clpretty.ch"
#line 1116 "clpretty.ch"
                                                    
#line 1116 "clpretty.ch"
#line 1116 "clpretty.ch"
                                                }
                                                
#line 1116 "clpretty.ch"
#line 1120 "clpretty.ch"
                                                if ( y & 0x2 ) {
#line 1120 "clpretty.ch"
#line 1121 "clpretty.ch"
                                                                    delta = deltaRef = posRef - colRef ;
#line 1121 "clpretty.ch"
#line 1122 "clpretty.ch"
                                                                    
#line 1122 "clpretty.ch"
#line 1122 "clpretty.ch"
                                                                 } else 
#line 1122 "clpretty.ch"
#line 1123 "clpretty.ch"
                                                    deltaRef = posRef - x0 - dx ;
#line 1123 "clpretty.ch"
                                                
#line 1123 "clpretty.ch"
#line 1126 "clpretty.ch"
                                                goto for_continue1 ;
                                                
#line 1126 "clpretty.ch"
#line 1127 "clpretty.ch"
                                                
#line 1127 "clpretty.ch"
#line 1127 "clpretty.ch"
                                               } else 
#line 1127 "clpretty.ch"
                if ( hasIndented ) {
#line 1127 "clpretty.ch"
#line 1128 "clpretty.ch"
                                        AddTree(for_elem, delta);
#line 1128 "clpretty.ch"
#line 1129 "clpretty.ch"
                                        
#line 1129 "clpretty.ch"
#line 1129 "clpretty.ch"
                                    }
#line 1129 "clpretty.ch"
#line 1130 "clpretty.ch"
                
#line 1130 "clpretty.ch"
#line 1130 "clpretty.ch"
            }
            
#line 1130 "clpretty.ch"
#line 1130 "clpretty.ch"
            _iterator1.Current(_for_elem);
#line 1130 "clpretty.ch"
#line 1130 "clpretty.ch"
            continue ;
            
#line 1130 "clpretty.ch"
#line 1130 "clpretty.ch"
        for_continue1 : 
#line 1130 "clpretty.ch"
#line 1130 "clpretty.ch"
            _iterator1.Current(_for_elem);
#line 1130 "clpretty.ch"
#line 1130 "clpretty.ch"
            _iterator1.SkipSon(1);
#line 1130 "clpretty.ch"
#line 1130 "clpretty.ch"
            continue ;
            
#line 1130 "clpretty.ch"
#line 1130 "clpretty.ch"
        for_break1 : 
#line 1130 "clpretty.ch"
#line 1130 "clpretty.ch"
            break ;
            
#line 1130 "clpretty.ch"
#line 1130 "clpretty.ch"
            
#line 1130 "clpretty.ch"
#line 1130 "clpretty.ch"
        }
#line 1130 "clpretty.ch"
#line 1130 "clpretty.ch"
        
#line 1130 "clpretty.ch"
#line 1130 "clpretty.ch"
    }
    
#line 1130 "clpretty.ch"
#line 1133 "clpretty.ch"
    if ( hasIndented ) {
#line 1133 "clpretty.ch"
#line 1134 "clpretty.ch"
                            {
#line 1134 "clpretty.ch"
                                PPTREE _ptTree0=(PPTREE) 0;
#line 1134 "clpretty.ch"
                                _ptTree0 = (PPTREE) 0;
#line 1134 "clpretty.ch"
                                {
#line 1134 "clpretty.ch"
                                    PPTREE _ptTree1= (PPTREE) 0 ;
#line 1134 "clpretty.ch"
                                    {
#line 1134 "clpretty.ch"
                                        PPTREE _ptTree2= (PPTREE) 0,_ptRes2= (PPTREE) 0;
#line 1134 "clpretty.ch"
                                        _ptRes2 = MakeTree(pretty::UNMARK, 0);
#line 1134 "clpretty.ch"
                                        _ptTree1 = _ptRes2;
#line 1134 "clpretty.ch"
                                    }
#line 1134 "clpretty.ch"
                                    _ptTree0 = AddList( _ptTree0,_ptTree1);
#line 1134 "clpretty.ch"
                                }
#line 1134 "clpretty.ch"
                                list = _ptTree0;
#line 1134 "clpretty.ch"
                                ;
#line 1134 "clpretty.ch"
                            }
#line 1134 "clpretty.ch"
                            
#line 1134 "clpretty.ch"
#line 1135 "clpretty.ch"
                            PutAttr(lastTree, list, POST_ATTR, PUT_BEG);
#line 1135 "clpretty.ch"
#line 1136 "clpretty.ch"
                            
#line 1136 "clpretty.ch"
#line 1136 "clpretty.ch"
                        }
#line 1136 "clpretty.ch"
#line 1139 "clpretty.ch"
    if ( hasIndented && hasToPutVirt ) {
#line 1139 "clpretty.ch"
#line 1140 "clpretty.ch"
                                            char    string [10];
                                            
#line 1140 "clpretty.ch"
#line 1141 "clpretty.ch"
                                            sprintf(string, "%d", colRef);
#line 1141 "clpretty.ch"
#line 1142 "clpretty.ch"
                                            {
#line 1142 "clpretty.ch"
                                                PPTREE _ptTree0=(PPTREE) 0;
#line 1142 "clpretty.ch"
                                                _ptTree0 = (PPTREE) 0;
#line 1142 "clpretty.ch"
                                                {
#line 1142 "clpretty.ch"
                                                    PPTREE _ptTree1= (PPTREE) 0 ;
#line 1142 "clpretty.ch"
                                                    {
#line 1142 "clpretty.ch"
                                                        PPTREE _ptTree2= (PPTREE) 0,_ptRes2= (PPTREE) 0;
#line 1142 "clpretty.ch"
                                                        _ptRes2 = MakeTree(pretty::TAB_VIRT, 2);
#line 1142 "clpretty.ch"
                                                        _ptTree2 = StoreRef(MakeString(string));
#line 1142 "clpretty.ch"
                                                        ReplaceTree(_ptRes2, 1, _ptTree2);
#line 1142 "clpretty.ch"
                                                        _ptTree2 = MakeString("1") ;
#line 1142 "clpretty.ch"
                                                        ReplaceTree(_ptRes2, 2, _ptTree2);
#line 1142 "clpretty.ch"
                                                        _ptTree1 = _ptRes2;
#line 1142 "clpretty.ch"
                                                    }
#line 1142 "clpretty.ch"
                                                    _ptTree0 = AddList( _ptTree0,_ptTree1);
#line 1142 "clpretty.ch"
                                                }
#line 1142 "clpretty.ch"
                                                list = _ptTree0;
#line 1142 "clpretty.ch"
                                                ;
#line 1142 "clpretty.ch"
                                            }
#line 1142 "clpretty.ch"
                                            
#line 1142 "clpretty.ch"
#line 1143 "clpretty.ch"
                                            PutAttr(hasToPutVirt, list, PRE_ATTR, PUT_END);
#line 1143 "clpretty.ch"
#line 1144 "clpretty.ch"
                                            
#line 1144 "clpretty.ch"
#line 1144 "clpretty.ch"
                                         }
#line 1144 "clpretty.ch"
#line 1147 "clpretty.ch"
#line 1147 "clpretty.ch"
    for ( int nbNode = 0 ; nbNode < currTabTree ; nbNode++ ) {
#line 1147 "clpretty.ch"
#line 1148 "clpretty.ch"
                                                                    GetCoord(tabTree [nbNode].tree, &x, &y, &dx, &lastMark);
#line 1148 "clpretty.ch"
#line 1149 "clpretty.ch"
                                                                    deltaLoc = tabTree [nbNode].delta - FindDelta(tabTree [nbNode].tree);
#line 1149 "clpretty.ch"
#line 1150 "clpretty.ch"
                                                                    PutCoord(tabTree [nbNode].tree, x + deltaLoc, y, dx, lastMark);
#line 1150 "clpretty.ch"
#line 1151 "clpretty.ch"
                                                                    
#line 1151 "clpretty.ch"
#line 1151 "clpretty.ch"
                                                                  }
#line 1151 "clpretty.ch"
    
#line 1151 "clpretty.ch"
#line 1154 "clpretty.ch"
    UpdateSize(tree, OpType(tree));
#line 1154 "clpretty.ch"
#line 1157 "clpretty.ch"
    UnMarkCoordTree(tree);
#line 1157 "clpretty.ch"
#line 1158 "clpretty.ch"
    nbTab = oldNbTab ;
#line 1158 "clpretty.ch"
#line 1159 "clpretty.ch"
    
#line 1159 "clpretty.ch"
#line 1159 "clpretty.ch"
}
#line 1159 "clpretty.ch"

#line 1161 "clpretty.ch"

#line 1161 "clpretty.ch"
static  inline void LNewLineOrg ( int i )
#line 1161 "clpretty.ch"
{
#line 1161 "clpretty.ch"
#line 1161 "clpretty.ch"
    int _nextVal ;
    
#line 1161 "clpretty.ch"
#line 1163 "clpretty.ch"
    LNewLine(i);
#line 1163 "clpretty.ch"
#line 1164 "clpretty.ch"
    
#line 1164 "clpretty.ch"
#line 1164 "clpretty.ch"
}
#line 1164 "clpretty.ch"

#line 1166 "clpretty.ch"

#line 1166 "clpretty.ch"
void clpretty::LNewLine ( int i )
#line 1166 "clpretty.ch"
{
#line 1166 "clpretty.ch"
#line 1166 "clpretty.ch"
    int _nextVal ;
    
#line 1166 "clpretty.ch"
#line 1168 "clpretty.ch"
    if ( currCol > maxX ) 
#line 1168 "clpretty.ch"
#line 1169 "clpretty.ch"
        maxX = currCol ;
#line 1169 "clpretty.ch"
#line 1170 "clpretty.ch"
    LNewLineOrg(i);
#line 1170 "clpretty.ch"
#line 1171 "clpretty.ch"
    
#line 1171 "clpretty.ch"
#line 1171 "clpretty.ch"
}
#line 1171 "clpretty.ch"

#line 1175 "clpretty.ch"

#line 1175 "clpretty.ch"
void clpretty::DecompVirt ( const PTREE &paramTree )
#line 1175 "clpretty.ch"
{
#line 1175 "clpretty.ch"
    register PPTREE _inter ;
#line 1175 "clpretty.ch"

#line 1175 "clpretty.ch"
#line 1175 "clpretty.ch"
    int _nextVal ;
    
#line 1175 "clpretty.ch"
#line 1178 "clpretty.ch"
    int x0, y0, x, y, dx, dy ;
    
#line 1178 "clpretty.ch"
#line 1180 "clpretty.ch"
    GetCoord(paramTree, &x, &y, &dx, &dy);
#line 1180 "clpretty.ch"
#line 1181 "clpretty.ch"
    GetCoordAbs(paramTree, 0, &x0, &y0);
#line 1181 "clpretty.ch"
#line 1183 "clpretty.ch"
    PTREE   father ;
#line 1183 "clpretty.ch"
    
#line 1183 "clpretty.ch"
#line 1185 "clpretty.ch"
    (father=FatherTree(paramTree));
#line 1185 "clpretty.ch"
    
#line 1185 "clpretty.ch"
#line 1186 "clpretty.ch"
    while ( ((_inter = (PPTREE)father,1) && 
#line 1186 "clpretty.ch"
                (NumberTree(_inter) == pretty::ATTRIBUTS) &&
#line 1186 "clpretty.ch"
                1) ) 
#line 1186 "clpretty.ch"
#line 1187 "clpretty.ch"
        (father=FatherTree(father));
#line 1187 "clpretty.ch"
    
#line 1187 "clpretty.ch"
#line 1188 "clpretty.ch"
    GetCoordAbs(father, 0, &xFather, &yFather);
#line 1188 "clpretty.ch"
#line 1189 "clpretty.ch"
    isVirtMod = 1 ;
#line 1189 "clpretty.ch"
#line 1190 "clpretty.ch"
    GotoCol(dy + 1);
#line 1190 "clpretty.ch"
#line 1193 "clpretty.ch"
    Mark();
#line 1193 "clpretty.ch"
#line 1194 "clpretty.ch"
    currCol = x0 ;
#line 1194 "clpretty.ch"
#line 1195 "clpretty.ch"
    currLine = y0 ;
#line 1195 "clpretty.ch"
#line 1196 "clpretty.ch"
    maxX = 0 ;
#line 1196 "clpretty.ch"
#line 1197 "clpretty.ch"
    Decomp(paramTree);
#line 1197 "clpretty.ch"
#line 1198 "clpretty.ch"
    UnMark();
#line 1198 "clpretty.ch"
#line 1199 "clpretty.ch"
    isVirtMod = 0 ;
#line 1199 "clpretty.ch"
#line 1200 "clpretty.ch"
    currLine = currCol = 0 ;
#line 1200 "clpretty.ch"
#line 1201 "clpretty.ch"
    
#line 1201 "clpretty.ch"
#line 1201 "clpretty.ch"
}
#line 1201 "clpretty.ch"

#line 1203 "clpretty.ch"

#line 1203 "clpretty.ch"
void clpretty::TraitAttribut ( PTREE tree )
#line 1203 "clpretty.ch"
{
#line 1203 "clpretty.ch"
    register PPTREE _inter ;
#line 1203 "clpretty.ch"

#line 1203 "clpretty.ch"
#line 1203 "clpretty.ch"
    int _nextVal ;
    
#line 1203 "clpretty.ch"
#line 1205 "clpretty.ch"
    PTREE   son ;
#line 1205 "clpretty.ch"
    
#line 1205 "clpretty.ch"
#line 1206 "clpretty.ch"
    int i ;
    
#line 1206 "clpretty.ch"
#line 1208 "clpretty.ch"
    switch ( NumberTree(tree) ) {
#line 1208 "clpretty.ch"
#line 1210 "clpretty.ch"
        case pretty::NEWLINE : 
#line 1210 "clpretty.ch"
#line 1210 "clpretty.ch"
            (son=SonTree(tree, 1));
#line 1210 "clpretty.ch"
            
#line 1210 "clpretty.ch"
#line 1210 "clpretty.ch"
        _Case8 : 
#line 1210 "clpretty.ch"
#line 1210 "clpretty.ch"
            ;
#line 1210 "clpretty.ch"
#line 1210 "clpretty.ch"
            LNewLine(atoi(BrainyValue(son)));
#line 1210 "clpretty.ch"
#line 1211 "clpretty.ch"
            break ;
            
#line 1211 "clpretty.ch"
#line 1213 "clpretty.ch"
        case pretty::TAB : 
#line 1213 "clpretty.ch"
#line 1213 "clpretty.ch"
            (son=SonTree(tree, 1));
#line 1213 "clpretty.ch"
            
#line 1213 "clpretty.ch"
#line 1213 "clpretty.ch"
        _Case9 : 
#line 1213 "clpretty.ch"
#line 1213 "clpretty.ch"
            ;
#line 1213 "clpretty.ch"
#line 1213 "clpretty.ch"
            i = atoi(BrainyValue(son));
#line 1213 "clpretty.ch"
#line 1214 "clpretty.ch"
            while ( i-- > 0 ) 
#line 1214 "clpretty.ch"
#line 1215 "clpretty.ch"
                Tab();
#line 1215 "clpretty.ch"
            
#line 1215 "clpretty.ch"
#line 1216 "clpretty.ch"
            break ;
            
#line 1216 "clpretty.ch"
#line 1218 "clpretty.ch"
        case pretty::STR : 
#line 1218 "clpretty.ch"
#line 1218 "clpretty.ch"
            (son=SonTree(tree, 1));
#line 1218 "clpretty.ch"
            
#line 1218 "clpretty.ch"
#line 1218 "clpretty.ch"
        _Case10 : 
#line 1218 "clpretty.ch"
#line 1218 "clpretty.ch"
            ;
#line 1218 "clpretty.ch"
#line 1218 "clpretty.ch"
            DumpBrainyValue(son);
#line 1218 "clpretty.ch"
            
#line 1218 "clpretty.ch"
#line 1219 "clpretty.ch"
            break ;
            
#line 1219 "clpretty.ch"
#line 1221 "clpretty.ch"
        case pretty::MARK : 
#line 1221 "clpretty.ch"
#line 1221 "clpretty.ch"
        _Case11 : 
#line 1221 "clpretty.ch"
#line 1221 "clpretty.ch"
            ;
#line 1221 "clpretty.ch"
#line 1221 "clpretty.ch"
            Mark();
#line 1221 "clpretty.ch"
#line 1222 "clpretty.ch"
            break ;
            
#line 1222 "clpretty.ch"
#line 1224 "clpretty.ch"
        case pretty::UNMARK : 
#line 1224 "clpretty.ch"
#line 1224 "clpretty.ch"
        _Case12 : 
#line 1224 "clpretty.ch"
#line 1224 "clpretty.ch"
            ;
#line 1224 "clpretty.ch"
#line 1224 "clpretty.ch"
            UnMark();
#line 1224 "clpretty.ch"
#line 1225 "clpretty.ch"
            break ;
            
#line 1225 "clpretty.ch"
#line 1227 "clpretty.ch"
        case pretty::GOTO : 
#line 1227 "clpretty.ch"
#line 1227 "clpretty.ch"
            (son=SonTree(tree, 1));
#line 1227 "clpretty.ch"
            
#line 1227 "clpretty.ch"
#line 1227 "clpretty.ch"
        _Case13 : 
#line 1227 "clpretty.ch"
#line 1227 "clpretty.ch"
            ;
#line 1227 "clpretty.ch"
#line 1227 "clpretty.ch"
            GotoCol(atoi(BrainyValue(son)));
#line 1227 "clpretty.ch"
#line 1228 "clpretty.ch"
            break ;
            
#line 1228 "clpretty.ch"
    }
#line 1228 "clpretty.ch"
    
#line 1228 "clpretty.ch"
#line 1230 "clpretty.ch"
    
#line 1230 "clpretty.ch"
#line 1230 "clpretty.ch"
}
#line 1230 "clpretty.ch"

#line 1234 "clpretty.ch"

#line 1234 "clpretty.ch"
void clpretty::DecompList ( PTREE list, const char *sep, const char *term, int nbNl )
#line 1234 "clpretty.ch"
{
#line 1234 "clpretty.ch"
    register PPTREE _inter ;
#line 1234 "clpretty.ch"

#line 1234 "clpretty.ch"
#line 1234 "clpretty.ch"
    int _nextVal ;
    
#line 1234 "clpretty.ch"
#line 1237 "clpretty.ch"
    PTREE   elem ;
#line 1237 "clpretty.ch"
    
#line 1237 "clpretty.ch"
#line 1238 "clpretty.ch"
    int nbNewLine ;
    
#line 1238 "clpretty.ch"
#line 1240 "clpretty.ch"
    while ( ((_inter = (PPTREE)list,1) && 
#line 1240 "clpretty.ch"
                (NumberTree(_inter) == LIST) &&
#line 1240 "clpretty.ch"
                1) ) {
#line 1240 "clpretty.ch"
#line 1241 "clpretty.ch"
                        if ( ((elem=list.Nextl())) ) 
#line 1241 "clpretty.ch"
#line 1242 "clpretty.ch"
                            Decomp(elem);
#line 1242 "clpretty.ch"
#line 1243 "clpretty.ch"
                        if ( list ) {
#line 1243 "clpretty.ch"
#line 1244 "clpretty.ch"
                                        if ( sep ) 
#line 1244 "clpretty.ch"
#line 1245 "clpretty.ch"
                                            PrintString(sep);
#line 1245 "clpretty.ch"
#line 1246 "clpretty.ch"
                                        if ( (nbNewLine = nbNl) ) 
#line 1246 "clpretty.ch"
#line 1247 "clpretty.ch"
                                            LNewLine(nbNewLine);
#line 1247 "clpretty.ch"
#line 1248 "clpretty.ch"
                                        
#line 1248 "clpretty.ch"
#line 1248 "clpretty.ch"
                                     }
#line 1248 "clpretty.ch"
#line 1249 "clpretty.ch"
                        
#line 1249 "clpretty.ch"
#line 1249 "clpretty.ch"
                     }
#line 1249 "clpretty.ch"
#line 1250 "clpretty.ch"
    if ( term ) 
#line 1250 "clpretty.ch"
#line 1251 "clpretty.ch"
        PrintString(term);
#line 1251 "clpretty.ch"
#line 1252 "clpretty.ch"
    
#line 1252 "clpretty.ch"
#line 1252 "clpretty.ch"
}
#line 1252 "clpretty.ch"

#line 1256 "clpretty.ch"

#line 1256 "clpretty.ch"
int clpretty::commAtBeginning ( PTREE tree )
#line 1256 "clpretty.ch"
{
#line 1256 "clpretty.ch"
    register PPTREE _inter ;
#line 1256 "clpretty.ch"

#line 1256 "clpretty.ch"
#line 1256 "clpretty.ch"
    int _nextVal ;
    
#line 1256 "clpretty.ch"
#line 1259 "clpretty.ch"
    PTREE   father ;
#line 1259 "clpretty.ch"
    
#line 1259 "clpretty.ch"
#line 1261 "clpretty.ch"
    if ( ( _inter = 
#line 1261 "clpretty.ch"
            FatherTree(tree),((_inter = (PPTREE)_inter,1) && 
#line 1261 "clpretty.ch"
                                (NumberTree(_inter) == pretty::ATTRIBUTS) &&
#line 1261 "clpretty.ch"
                                1)) ) 
#line 1261 "clpretty.ch"
#line 1262 "clpretty.ch"
        (father=NFatherTree(tree,2));
#line 1262 "clpretty.ch"
    
#line 1262 "clpretty.ch"
    else 
#line 1262 "clpretty.ch"
#line 1264 "clpretty.ch"
        (father=FatherTree(tree));
#line 1264 "clpretty.ch"
        
#line 1264 "clpretty.ch"
    
#line 1264 "clpretty.ch"
#line 1265 "clpretty.ch"
    if ( (!father) ) 
#line 1265 "clpretty.ch"
#line 1266 "clpretty.ch"
        return 1 ;
    
#line 1266 "clpretty.ch"
#line 1267 "clpretty.ch"
    if ( ((_inter = (PPTREE)father,1) && 
#line 1267 "clpretty.ch"
            (NumberTree(_inter) == LIST) &&
#line 1267 "clpretty.ch"
            1) ) {
#line 1267 "clpretty.ch"
#line 1268 "clpretty.ch"
                    (father=NFatherTree(father,2));
#line 1268 "clpretty.ch"
                    
#line 1268 "clpretty.ch"
#line 1269 "clpretty.ch"
                    if ( (!father) ) {
#line 1269 "clpretty.ch"
#line 1270 "clpretty.ch"
                                        return 1 ;
                                        
#line 1270 "clpretty.ch"
#line 1271 "clpretty.ch"
                                        
#line 1271 "clpretty.ch"
#line 1271 "clpretty.ch"
                                       }
#line 1271 "clpretty.ch"
#line 1272 "clpretty.ch"
                    
#line 1272 "clpretty.ch"
#line 1272 "clpretty.ch"
                 }
#line 1272 "clpretty.ch"
#line 1273 "clpretty.ch"
    return 0 ;
    
#line 1273 "clpretty.ch"
#line 1274 "clpretty.ch"
    
#line 1274 "clpretty.ch"
#line 1274 "clpretty.ch"
}
#line 1274 "clpretty.ch"

#line 1278 "clpretty.ch"

#line 1278 "clpretty.ch"
int clpretty::comm ( PTREE paramTree, int type )
#line 1278 "clpretty.ch"
{
#line 1278 "clpretty.ch"
#line 1278 "clpretty.ch"
    int _nextVal ;
    
#line 1278 "clpretty.ch"
#line 1281 "clpretty.ch"
    char    *comment ;
    
#line 1281 "clpretty.ch"
#line 1282 "clpretty.ch"
    PTREE   father ;
#line 1282 "clpretty.ch"
    
#line 1282 "clpretty.ch"
#line 1283 "clpretty.ch"
    const char  *intStartComment, *intMiddleComment, *intEndComment, *intPlusComment ;
    
#line 1283 "clpretty.ch"
#line 1285 "clpretty.ch"
    intStartComment = startComment ? startComment : "/*";
#line 1285 "clpretty.ch"
#line 1286 "clpretty.ch"
    intMiddleComment = middleComment ? middleComment : "  ";
#line 1286 "clpretty.ch"
#line 1287 "clpretty.ch"
    intEndComment = endComment ? endComment : "*/";
#line 1287 "clpretty.ch"
#line 1288 "clpretty.ch"
    intPlusComment = plusComment ? plusComment : "//";
#line 1288 "clpretty.ch"
#line 1289 "clpretty.ch"
    if ( (!paramTree) || inhibateComment ) 
#line 1289 "clpretty.ch"
#line 1290 "clpretty.ch"
        return 0 ;
    
#line 1290 "clpretty.ch"
#line 1291 "clpretty.ch"
    if ( type == PRE && (comment = IsComm(paramTree, PRE)) ) {
#line 1291 "clpretty.ch"
#line 1292 "clpretty.ch"
                                                                        PTREE   inter = (PTREE)0 ;
#line 1292 "clpretty.ch"
                                                                        
#line 1292 "clpretty.ch"
#line 1293 "clpretty.ch"
                                                                        int beginning = Beginning();
                                                                        
#line 1293 "clpretty.ch"
#line 1292 "clpretty.ch"
                                                                        (inter=(PTREE)0);
#line 1292 "clpretty.ch"
                                                                        
#line 1292 "clpretty.ch"
#line 1294 "clpretty.ch"
                                                                        if ( !commAtBeginning(paramTree) ) {
#line 1294 "clpretty.ch"
#line 1299 "clpretty.ch"
                                                                                                                if ( beginning ) {
#line 1299 "clpretty.ch"
#line 1300 "clpretty.ch"
if ( *comment == *(intPlusComment + 1) && *(comment + 1) == ' ' ) 
#line 1300 "clpretty.ch"
#line 1301 "clpretty.ch"
    LNewLine(2);
#line 1301 "clpretty.ch"
else 
#line 1302 "clpretty.ch"
if ( *comment == ' ' ) 
#line 1302 "clpretty.ch"
#line 1303 "clpretty.ch"
    LNewLine(2);
#line 1303 "clpretty.ch"
else 
#line 1303 "clpretty.ch"
#line 1305 "clpretty.ch"
    LNewLine(1);
#line 1305 "clpretty.ch"
    
#line 1305 "clpretty.ch"

#line 1305 "clpretty.ch"
#line 1306 "clpretty.ch"

#line 1306 "clpretty.ch"
#line 1306 "clpretty.ch"
                                                                                                                                  } else 
#line 1306 "clpretty.ch"
#line 1307 "clpretty.ch"
                                                                                                                    Space(1);
#line 1307 "clpretty.ch"
                                                                                                                    
#line 1307 "clpretty.ch"
                                                                                                                
#line 1307 "clpretty.ch"
#line 1308 "clpretty.ch"
                                                                                                                
#line 1308 "clpretty.ch"
#line 1308 "clpretty.ch"
                                                                                                              }
#line 1308 "clpretty.ch"
#line 1309 "clpretty.ch"
                                                                        do {
#line 1309 "clpretty.ch"
#line 1310 "clpretty.ch"
                                                                            if ( inter ) 
#line 1310 "clpretty.ch"
#line 1311 "clpretty.ch"
                                                                                comment = BrainyValue(inter);
#line 1311 "clpretty.ch"
#line 1313 "clpretty.ch"
                                                                            Mark();
#line 1313 "clpretty.ch"
                                                                            if ( *comment == *(intPlusComment + 1) ) 
#line 1313 "clpretty.ch"
#line 1314 "clpretty.ch"
                                                                                (inter=PrintCommE(paramTree, PRE, inter, intPlusComment + 1, intPlusComment + 1, ""));
#line 1314 "clpretty.ch"
                                                                            
#line 1314 "clpretty.ch"
                                                                            else 
#line 1314 "clpretty.ch"
#line 1316 "clpretty.ch"
                                                                                (inter=PrintCommE(paramTree, PRE, inter, intMiddleComment, intStartComment, intEndComment));
#line 1316 "clpretty.ch"
                                                                                
#line 1316 "clpretty.ch"
                                                                            
#line 1316 "clpretty.ch"
                                                                            UnMark();
#line 1316 "clpretty.ch"
                                                                            
#line 1316 "clpretty.ch"
#line 1320 "clpretty.ch"
                                                                            if ( beginning || *comment == *(intPlusComment + 1) ) {
#line 1320 "clpretty.ch"
#line 1321 "clpretty.ch"
LNewLine(1);
#line 1321 "clpretty.ch"

#line 1321 "clpretty.ch"
#line 1322 "clpretty.ch"

#line 1322 "clpretty.ch"
#line 1322 "clpretty.ch"
                                                                                                                                         } else 
#line 1322 "clpretty.ch"
#line 1323 "clpretty.ch"
                                                                                Space(1);
#line 1323 "clpretty.ch"
                                                                                
#line 1323 "clpretty.ch"
                                                                            
#line 1323 "clpretty.ch"
#line 1324 "clpretty.ch"
                                                                            
#line 1324 "clpretty.ch"
#line 1324 "clpretty.ch"
                                                                           } 
#line 1324 "clpretty.ch"
                                                                        while ( inter );
#line 1324 "clpretty.ch"
                                                                        
#line 1324 "clpretty.ch"
#line 1325 "clpretty.ch"
                                                                        return 1 ;
                                                                        
#line 1325 "clpretty.ch"
#line 1326 "clpretty.ch"
                                                                        
#line 1326 "clpretty.ch"
#line 1326 "clpretty.ch"
                                                                    } else 
#line 1326 "clpretty.ch"
    if ( type == POST && (comment = IsComm(paramTree, POST)) && paramTree != postInhibitor ) {
#line 1326 "clpretty.ch"
#line 1327 "clpretty.ch"
                                                                                                        PTREE   inter = (PTREE)0 ;
#line 1327 "clpretty.ch"
                                                                                                        
#line 1327 "clpretty.ch"
#line 1327 "clpretty.ch"
                                                                                                        (inter=(PTREE)0);
#line 1327 "clpretty.ch"
                                                                                                        
#line 1327 "clpretty.ch"
#line 1329 "clpretty.ch"
                                                                                                        Mark();
#line 1329 "clpretty.ch"
                                                                                                        do {
#line 1329 "clpretty.ch"
#line 1330 "clpretty.ch"
                                                                                                            if ( inter ) 
#line 1330 "clpretty.ch"
#line 1331 "clpretty.ch"
                                                                                                                comment = BrainyValue(inter);
#line 1331 "clpretty.ch"
#line 1332 "clpretty.ch"
                                                                                                            Space(1);
#line 1332 "clpretty.ch"
                                                                                                            
#line 1332 "clpretty.ch"
#line 1333 "clpretty.ch"
                                                                                                            Mark();
#line 1333 "clpretty.ch"
                                                                                                            if ( *comment == *(intPlusComment + 1) ) 
#line 1333 "clpretty.ch"
#line 1334 "clpretty.ch"
                                                                                                                (inter=PrintCommE(paramTree, POST, inter, intPlusComment + 1, intPlusComment + 1, ""));
#line 1334 "clpretty.ch"
                                                                                                            
#line 1334 "clpretty.ch"
                                                                                                            else 
#line 1334 "clpretty.ch"
#line 1336 "clpretty.ch"
                                                                                                                (inter=PrintCommE(paramTree, POST, inter, intMiddleComment, intStartComment, intEndComment));
#line 1336 "clpretty.ch"
                                                                                                                
#line 1336 "clpretty.ch"
                                                                                                            
#line 1336 "clpretty.ch"
                                                                                                            UnMark();
#line 1336 "clpretty.ch"
                                                                                                            
#line 1336 "clpretty.ch"
#line 1338 "clpretty.ch"
                                                                                                            if ( PrePost() && inter || *comment == *(intPlusComment + 1) ) {
#line 1338 "clpretty.ch"
#line 1339 "clpretty.ch"
LNewLine(1);
#line 1339 "clpretty.ch"

#line 1339 "clpretty.ch"
#line 1340 "clpretty.ch"

#line 1340 "clpretty.ch"
#line 1340 "clpretty.ch"
                                                                                                                                                                                   } else 
#line 1340 "clpretty.ch"
#line 1341 "clpretty.ch"
                                                                                                                Space(1);
#line 1341 "clpretty.ch"
                                                                                                                
#line 1341 "clpretty.ch"
                                                                                                            
#line 1341 "clpretty.ch"
#line 1342 "clpretty.ch"
                                                                                                            
#line 1342 "clpretty.ch"
#line 1342 "clpretty.ch"
                                                                                                           } 
#line 1342 "clpretty.ch"
                                                                                                        while ( inter );
#line 1342 "clpretty.ch"
                                                                                                        
#line 1342 "clpretty.ch"
                                                                                                        UnMark();
#line 1342 "clpretty.ch"
                                                                                                        
#line 1342 "clpretty.ch"
#line 1344 "clpretty.ch"
                                                                                                        return 1 ;
                                                                                                        
#line 1344 "clpretty.ch"
#line 1345 "clpretty.ch"
                                                                                                        
#line 1345 "clpretty.ch"
#line 1345 "clpretty.ch"
                                                                                                      }
#line 1345 "clpretty.ch"
#line 1346 "clpretty.ch"
    return 0 ;
    
#line 1346 "clpretty.ch"
#line 1347 "clpretty.ch"
    
#line 1347 "clpretty.ch"
#line 1347 "clpretty.ch"
}
#line 1347 "clpretty.ch"

#line 1351 "clpretty.ch"

#line 1351 "clpretty.ch"
void clpretty::Decomp ( const PTREE &paramTree, int funcAlone )
#line 1351 "clpretty.ch"
{
#line 1351 "clpretty.ch"
    register PPTREE _inter ;
#line 1351 "clpretty.ch"

#line 1351 "clpretty.ch"
#line 1351 "clpretty.ch"
    int _nextVal ;
    
#line 1351 "clpretty.ch"
#line 1354 "clpretty.ch"
    PTREE   exp, stat, name ;
#line 1354 "clpretty.ch"
    
#line 1354 "clpretty.ch"
#line 1355 "clpretty.ch"
    int oldXFather = xFather, oldYFather = yFather ;
    
#line 1355 "clpretty.ch"
#line 1356 "clpretty.ch"
    int oldMaxX = maxX ;
    
#line 1356 "clpretty.ch"
#line 1357 "clpretty.ch"
    int begCurrCol = currCol, begCurrLine = currLine ;
    
#line 1357 "clpretty.ch"
#line 1358 "clpretty.ch"
    int theMark = GetMark();
    
#line 1358 "clpretty.ch"
#line 1359 "clpretty.ch"
    int startNewLine ;
    
#line 1359 "clpretty.ch"
#line 1362 "clpretty.ch"
    startNewLine = lastLineOn == currLine ? 0 : (lastLineOn = currLine, 0x4);
#line 1362 "clpretty.ch"
#line 1363 "clpretty.ch"
    if ( (!paramTree) ) 
#line 1363 "clpretty.ch"
#line 1364 "clpretty.ch"
        return ;
    
#line 1364 "clpretty.ch"
#line 1368 "clpretty.ch"
    if ( isVirtMod && !(((_inter = (PPTREE)paramTree,1) && 
#line 1368 "clpretty.ch"
                            (NumberTree(_inter) == pretty::ATTRIBUTS) &&
#line 1368 "clpretty.ch"
                            1)) ) {
#line 1368 "clpretty.ch"
#line 1369 "clpretty.ch"
                                    xFather = currCol, yFather = currLine ;
#line 1369 "clpretty.ch"
#line 1370 "clpretty.ch"
                                    maxX = currCol ;
#line 1370 "clpretty.ch"
#line 1371 "clpretty.ch"
                                    
#line 1371 "clpretty.ch"
#line 1371 "clpretty.ch"
                                  }
#line 1371 "clpretty.ch"
#line 1373 "clpretty.ch"
    {
#line 1373 "clpretty.ch"
#line 1373 "clpretty.ch"
        int commPre = 0 ;
        
#line 1373 "clpretty.ch"
#line 1378 "clpretty.ch"
        if ( !Beginning() && (commPre = (int)(long)IsComm(paramTree, PRE)) ) {
#line 1378 "clpretty.ch"
#line 1379 "clpretty.ch"
                                                                                            Mark();
#line 1379 "clpretty.ch"
#line 1384 "clpretty.ch"
                                                                                            currCol++ ;
#line 1384 "clpretty.ch"
#line 1385 "clpretty.ch"
                                                                                            comm(paramTree, PRE);
#line 1385 "clpretty.ch"
#line 1386 "clpretty.ch"
                                                                                            
#line 1386 "clpretty.ch"
#line 1386 "clpretty.ch"
                                                                                        } else 
#line 1386 "clpretty.ch"
#line 1387 "clpretty.ch"
            comm(paramTree, PRE);
#line 1387 "clpretty.ch"
        
#line 1387 "clpretty.ch"
#line 1388 "clpretty.ch"
        IntDecomp(paramTree, funcAlone);
#line 1388 "clpretty.ch"
#line 1389 "clpretty.ch"
        comm(paramTree, POST);
#line 1389 "clpretty.ch"
#line 1390 "clpretty.ch"
        if ( commPre ) {
#line 1390 "clpretty.ch"
#line 1391 "clpretty.ch"
                            UnMark();
#line 1391 "clpretty.ch"
#line 1392 "clpretty.ch"
                            
#line 1392 "clpretty.ch"
#line 1392 "clpretty.ch"
                        }
#line 1392 "clpretty.ch"
#line 1393 "clpretty.ch"
        
#line 1393 "clpretty.ch"
#line 1393 "clpretty.ch"
    }
    
#line 1393 "clpretty.ch"
#line 1394 "clpretty.ch"
    if ( isVirtMod && !(((_inter = (PPTREE)paramTree,1) && 
#line 1394 "clpretty.ch"
                            (NumberTree(_inter) == pretty::ATTRIBUTS) &&
#line 1394 "clpretty.ch"
                            1)) ) {
#line 1394 "clpretty.ch"
#line 1395 "clpretty.ch"
                                    xFather = oldXFather, yFather = oldYFather ;
#line 1395 "clpretty.ch"
#line 1399 "clpretty.ch"
                                    if ( currCol > maxX ) 
#line 1399 "clpretty.ch"
#line 1400 "clpretty.ch"
                                        maxX = currCol ;
#line 1400 "clpretty.ch"
#line 1404 "clpretty.ch"
                                    PutCoord(paramTree, begCurrCol - xFather, (currLine - begCurrLine > 0 ? 2 : 0) | startNewLine, maxX - begCurrCol, theMark);
#line 1404 "clpretty.ch"
#line 1407 "clpretty.ch"
                                    if ( maxX < oldMaxX ) 
#line 1407 "clpretty.ch"
#line 1408 "clpretty.ch"
                                        maxX = oldMaxX ;
#line 1408 "clpretty.ch"
#line 1409 "clpretty.ch"
                                    
#line 1409 "clpretty.ch"
#line 1409 "clpretty.ch"
                                  }
#line 1409 "clpretty.ch"
#line 1410 "clpretty.ch"
    
#line 1410 "clpretty.ch"
#line 1410 "clpretty.ch"
}
#line 1410 "clpretty.ch"

#line 1414 "clpretty.ch"

#line 1414 "clpretty.ch"
void clpretty::CleanAttributs ( PTREE tree )
#line 1414 "clpretty.ch"
{
#line 1414 "clpretty.ch"
    register PPTREE _inter ;
#line 1414 "clpretty.ch"

#line 1414 "clpretty.ch"
#line 1414 "clpretty.ch"
    int _nextVal ;
    
#line 1414 "clpretty.ch"
#line 1417 "clpretty.ch"
    PTREE   son ;
#line 1417 "clpretty.ch"
    
#line 1417 "clpretty.ch"
#line 1418 "clpretty.ch"
    int x, y, dx, posMark ;
    
#line 1418 "clpretty.ch"
#line 1420 "clpretty.ch"
    {
#line 1420 "clpretty.ch"
#line 1420 "clpretty.ch"
        ItPtree _iterator1 (tree, (PPTREE) 0) ;
        
#line 1420 "clpretty.ch"
#line 1420 "clpretty.ch"
        PPTREE  _for_elem ;
        
#line 1420 "clpretty.ch"
#line 1420 "clpretty.ch"
        _iterator1.AllSearch(1);
#line 1420 "clpretty.ch"
#line 1420 "clpretty.ch"
        while ( _for_elem = _iterator1++ ) {
#line 1420 "clpretty.ch"
#line 1420 "clpretty.ch"
            {
#line 1420 "clpretty.ch"
#line 1421 "clpretty.ch"
                if ( ((_inter = (PPTREE)for_elem,1) && 
#line 1421 "clpretty.ch"
                        (NumberTree(_inter) == pretty::ATTRIBUTS) &&
#line 1421 "clpretty.ch"
                        ((son=SonTree(_inter,1)),1) &&
#line 1421 "clpretty.ch"
                        1) && FatherTree(for_elem) ) {
#line 1421 "clpretty.ch"
#line 1422 "clpretty.ch"
                                                        replacetree(FatherTree(for_elem), ranktree(for_elem), son);
#line 1422 "clpretty.ch"
#line 1423 "clpretty.ch"
                                                        for_elem = son ;
#line 1423 "clpretty.ch"
#line 1424 "clpretty.ch"
                                                        
#line 1424 "clpretty.ch"
#line 1424 "clpretty.ch"
                                                      }
#line 1424 "clpretty.ch"
#line 1425 "clpretty.ch"
                if ( GetCoord(for_elem, &x, &y, &dx, &posMark) ) {
#line 1425 "clpretty.ch"
#line 1426 "clpretty.ch"
                                                                            FreeCoord(for_elem);
#line 1426 "clpretty.ch"
#line 1427 "clpretty.ch"
                                                                            
#line 1427 "clpretty.ch"
#line 1427 "clpretty.ch"
                                                                           }
#line 1427 "clpretty.ch"
#line 1428 "clpretty.ch"
                
#line 1428 "clpretty.ch"
#line 1428 "clpretty.ch"
            }
            
#line 1428 "clpretty.ch"
#line 1428 "clpretty.ch"
            _iterator1.Current(_for_elem);
#line 1428 "clpretty.ch"
#line 1428 "clpretty.ch"
            continue ;
            
#line 1428 "clpretty.ch"
#line 1428 "clpretty.ch"
        for_continue1 : 
#line 1428 "clpretty.ch"
#line 1428 "clpretty.ch"
            _iterator1.Current(_for_elem);
#line 1428 "clpretty.ch"
#line 1428 "clpretty.ch"
            _iterator1.SkipSon(1);
#line 1428 "clpretty.ch"
#line 1428 "clpretty.ch"
            continue ;
            
#line 1428 "clpretty.ch"
#line 1428 "clpretty.ch"
        for_break1 : 
#line 1428 "clpretty.ch"
#line 1428 "clpretty.ch"
            break ;
            
#line 1428 "clpretty.ch"
#line 1428 "clpretty.ch"
            
#line 1428 "clpretty.ch"
#line 1428 "clpretty.ch"
        }
#line 1428 "clpretty.ch"
#line 1428 "clpretty.ch"
        
#line 1428 "clpretty.ch"
#line 1428 "clpretty.ch"
    }
    
#line 1428 "clpretty.ch"
#line 1429 "clpretty.ch"
    
#line 1429 "clpretty.ch"
#line 1429 "clpretty.ch"
}
#line 1429 "clpretty.ch"

#line 1434 "clpretty.ch"

#line 1434 "clpretty.ch"
void clpretty::DisplayError ( PTREE printList, bool current )
#line 1434 "clpretty.ch"
{
#line 1434 "clpretty.ch"
    register PPTREE _inter ;
#line 1434 "clpretty.ch"

#line 1434 "clpretty.ch"
#line 1434 "clpretty.ch"
    int _nextVal ;
    
#line 1434 "clpretty.ch"
#line 1437 "clpretty.ch"
    PTREE   elem ;
#line 1437 "clpretty.ch"
    
#line 1437 "clpretty.ch"
#line 1438 "clpretty.ch"
    int oldOutput = output ;
    
#line 1438 "clpretty.ch"
#line 1439 "clpretty.ch"
    PTREE   oldList = (PTREE)0 ;
#line 1439 "clpretty.ch"
    
#line 1439 "clpretty.ch"
#line 1439 "clpretty.ch"
    (oldList=printList);
#line 1439 "clpretty.ch"
    
#line 1439 "clpretty.ch"
#line 1441 "clpretty.ch"
    if ( current ) {
#line 1441 "clpretty.ch"
#line 1442 "clpretty.ch"
                        Flush();
#line 1442 "clpretty.ch"
#line 1443 "clpretty.ch"
                        LNewLine(2);
#line 1443 "clpretty.ch"
                        
#line 1443 "clpretty.ch"
#line 1444 "clpretty.ch"
                        if ( !emacsCompatibleError ) {
#line 1444 "clpretty.ch"
#line 1445 "clpretty.ch"
                                                        PrintString("====> ");
#line 1445 "clpretty.ch"
#line 1446 "clpretty.ch"
                                                        
#line 1446 "clpretty.ch"
#line 1446 "clpretty.ch"
                                                       } else 
#line 1446 "clpretty.ch"
                        {
#line 1446 "clpretty.ch"
#line 1447 "clpretty.ch"
                            PrintString("==================================");
#line 1447 "clpretty.ch"
#line 1447 "clpretty.ch"
                            LNewLine(1);
#line 1447 "clpretty.ch"
                            
#line 1447 "clpretty.ch"
#line 1448 "clpretty.ch"
                            
#line 1448 "clpretty.ch"
#line 1448 "clpretty.ch"
                        }
                        
#line 1448 "clpretty.ch"
#line 1449 "clpretty.ch"
                        while ( ((elem=(printList?printList.Nextl():(PPTREE)0))) || !((!printList)) ) {
#line 1449 "clpretty.ch"
#line 1450 "clpretty.ch"
                                                                                                                switch ( NumberTree(elem) ) {
#line 1450 "clpretty.ch"
#line 1452 "clpretty.ch"
                                                                                                                    case TERM_TREE : 
#line 1452 "clpretty.ch"
#line 1452 "clpretty.ch"
                                                                                                                    _Case18 : 
#line 1452 "clpretty.ch"
#line 1452 "clpretty.ch"
                                                                                                                        ;
#line 1452 "clpretty.ch"
#line 1452 "clpretty.ch"
                                                                                                                        DumpBrainyValue(elem);
#line 1452 "clpretty.ch"
                                                                                                                        
#line 1452 "clpretty.ch"
#line 1453 "clpretty.ch"
                                                                                                                        break ;
                                                                                                                        
#line 1453 "clpretty.ch"
#line 1455 "clpretty.ch"
                                                                                                                    default : 
#line 1455 "clpretty.ch"
#line 1455 "clpretty.ch"
                                                                                                                    _Case19 : 
#line 1455 "clpretty.ch"
#line 1455 "clpretty.ch"
                                                                                                                        ;
#line 1455 "clpretty.ch"
#line 1455 "clpretty.ch"
                                                                                                                        LNewLine(1);
#line 1455 "clpretty.ch"
                                                                                                                        
#line 1455 "clpretty.ch"
#line 1456 "clpretty.ch"
                                                                                                                        Decomp(elem, true);
#line 1456 "clpretty.ch"
#line 1457 "clpretty.ch"
                                                                                                                        LNewLine(1);
#line 1457 "clpretty.ch"
                                                                                                                        
#line 1457 "clpretty.ch"
#line 1458 "clpretty.ch"
                                                                                                                        break ;
                                                                                                                        
#line 1458 "clpretty.ch"
                                                                                                                }
#line 1458 "clpretty.ch"
                                                                                                                
#line 1458 "clpretty.ch"
#line 1460 "clpretty.ch"
                                                                                                                
#line 1460 "clpretty.ch"
#line 1460 "clpretty.ch"
                                                                                                             }
#line 1460 "clpretty.ch"
#line 1461 "clpretty.ch"
                        LNewLine(2);
#line 1461 "clpretty.ch"
                        
#line 1461 "clpretty.ch"
#line 1462 "clpretty.ch"
                        
#line 1462 "clpretty.ch"
#line 1462 "clpretty.ch"
                    }
#line 1462 "clpretty.ch"
#line 1463 "clpretty.ch"
    (printList=oldList);
#line 1463 "clpretty.ch"
    
#line 1463 "clpretty.ch"
#line 1464 "clpretty.ch"
    output = 2 ;
#line 1464 "clpretty.ch"
#line 1465 "clpretty.ch"
    if ( !emacsCompatibleError ) {
#line 1465 "clpretty.ch"
#line 1466 "clpretty.ch"
                                    PrintString("====> ");
#line 1466 "clpretty.ch"
#line 1467 "clpretty.ch"
                                    
#line 1467 "clpretty.ch"
#line 1467 "clpretty.ch"
                                   } else 
#line 1467 "clpretty.ch"
    {
#line 1467 "clpretty.ch"
#line 1468 "clpretty.ch"
        PrintString("===================================");
#line 1468 "clpretty.ch"
#line 1468 "clpretty.ch"
        LNewLine(2);
#line 1468 "clpretty.ch"
        
#line 1468 "clpretty.ch"
#line 1469 "clpretty.ch"
        
#line 1469 "clpretty.ch"
#line 1469 "clpretty.ch"
    }
    
#line 1469 "clpretty.ch"
#line 1470 "clpretty.ch"
    while ( ((_inter = (PPTREE)printList,1) && 
#line 1470 "clpretty.ch"
                (NumberTree(_inter) == LIST) &&
#line 1470 "clpretty.ch"
                1) && ((elem=(printList?printList.Nextl():(PPTREE)0))) ) {
#line 1470 "clpretty.ch"
#line 1471 "clpretty.ch"
                                                                                switch ( NumberTree(elem) ) {
#line 1471 "clpretty.ch"
#line 1473 "clpretty.ch"
                                                                                    case TERM_TREE : 
#line 1473 "clpretty.ch"
#line 1473 "clpretty.ch"
                                                                                    _Case20 : 
#line 1473 "clpretty.ch"
#line 1473 "clpretty.ch"
                                                                                        ;
#line 1473 "clpretty.ch"
#line 1473 "clpretty.ch"
                                                                                        DumpBrainyValue(elem);
#line 1473 "clpretty.ch"
                                                                                        
#line 1473 "clpretty.ch"
#line 1474 "clpretty.ch"
                                                                                        break ;
                                                                                        
#line 1474 "clpretty.ch"
#line 1476 "clpretty.ch"
                                                                                    default : 
#line 1476 "clpretty.ch"
#line 1476 "clpretty.ch"
                                                                                    _Case21 : 
#line 1476 "clpretty.ch"
#line 1476 "clpretty.ch"
                                                                                        ;
#line 1476 "clpretty.ch"
#line 1476 "clpretty.ch"
                                                                                        LNewLine(1);
#line 1476 "clpretty.ch"
                                                                                        
#line 1476 "clpretty.ch"
#line 1477 "clpretty.ch"
                                                                                        Decomp(elem, true);
#line 1477 "clpretty.ch"
#line 1478 "clpretty.ch"
                                                                                        LNewLine(1);
#line 1478 "clpretty.ch"
                                                                                        
#line 1478 "clpretty.ch"
#line 1479 "clpretty.ch"
                                                                                        break ;
                                                                                        
#line 1479 "clpretty.ch"
                                                                                }
#line 1479 "clpretty.ch"
                                                                                
#line 1479 "clpretty.ch"
#line 1481 "clpretty.ch"
                                                                                
#line 1481 "clpretty.ch"
#line 1481 "clpretty.ch"
                                                                              }
#line 1481 "clpretty.ch"
#line 1482 "clpretty.ch"
    LNewLine(2);
#line 1482 "clpretty.ch"
    
#line 1482 "clpretty.ch"
#line 1483 "clpretty.ch"
    output = oldOutput ;
#line 1483 "clpretty.ch"
#line 1484 "clpretty.ch"
    
#line 1484 "clpretty.ch"
#line 1484 "clpretty.ch"
}
#line 1484 "clpretty.ch"

#line 1484 "clpretty.ch"
#line 1484 "clpretty.ch"
static void clpretty_Anchor () { int i = 1;} 
#line 1484 "clpretty.ch"
/*Well done my boy */ 
#line 1484 "clpretty.ch"

