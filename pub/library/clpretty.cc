
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
#include "Protector.h"

#line 32 "clpretty.ch"

#line 32 "clpretty.ch"
void clpretty::PutAttr ( PTREE tree, PTREE listAttr, int attr, int pos )
#line 32 "clpretty.ch"
{
#line 32 "clpretty.ch"
    register PPTREE _inter ;
#line 32 "clpretty.ch"

#line 32 "clpretty.ch"
#line 32 "clpretty.ch"
    int _nextVal ;
    
#line 32 "clpretty.ch"
#line 36 "clpretty.ch"
    
    PTREE   father = (PTREE)0 ;
#line 36 "clpretty.ch"
    
#line 36 "clpretty.ch"
#line 37 "clpretty.ch"
    
    int rank = ranktree(tree);
    
#line 37 "clpretty.ch"
#line 38 "clpretty.ch"
    
    PTREE   oldListAttr ;
#line 38 "clpretty.ch"
    
#line 38 "clpretty.ch"
#line 36 "clpretty.ch"
    (father=FatherTree(tree));
#line 36 "clpretty.ch"
    
#line 36 "clpretty.ch"
#line 41 "clpretty.ch"
    if ( ((_inter = (PPTREE)tree,1) && 
#line 41 "clpretty.ch"
            (NumberTree(_inter) == pretty::ATTRIBUTS) &&
#line 41 "clpretty.ch"
            1) ) 
#line 41 "clpretty.ch"
#line 42 "clpretty.ch"
        (father=tree);
#line 42 "clpretty.ch"
    
#line 42 "clpretty.ch"
#line 45 "clpretty.ch"
    oldListAttr = (PPTREE) 0 ;
#line 45 "clpretty.ch"
    
#line 45 "clpretty.ch"
#line 46 "clpretty.ch"
    if ( attr == POST_ATTR ) {
#line 46 "clpretty.ch"
#line 47 "clpretty.ch"
                                ((_inter = (PPTREE)father,1) && 
#line 47 "clpretty.ch"
                                    (NumberTree(_inter) == pretty::ATTRIBUTS) &&
#line 47 "clpretty.ch"
                                    ((oldListAttr=SonTree(_inter,3)),1) &&
#line 47 "clpretty.ch"
                                    1);
#line 47 "clpretty.ch"
                                ;
#line 47 "clpretty.ch"
#line 48 "clpretty.ch"
                                
#line 48 "clpretty.ch"
#line 48 "clpretty.ch"
                               } else 
#line 48 "clpretty.ch"
    {
#line 48 "clpretty.ch"
#line 49 "clpretty.ch"
        ((_inter = (PPTREE)father,1) && 
#line 49 "clpretty.ch"
            (NumberTree(_inter) == pretty::ATTRIBUTS) &&
#line 49 "clpretty.ch"
            ((oldListAttr=SonTree(_inter,2)),1) &&
#line 49 "clpretty.ch"
            1);
#line 49 "clpretty.ch"
        ;
#line 49 "clpretty.ch"
#line 50 "clpretty.ch"
        
#line 50 "clpretty.ch"
#line 50 "clpretty.ch"
    }
    
#line 50 "clpretty.ch"
#line 53 "clpretty.ch"
    {
#line 53 "clpretty.ch"
#line 54 "clpretty.ch"
        if ( oldListAttr ) {
#line 54 "clpretty.ch"
#line 55 "clpretty.ch"
                                if ( pos == PUT_BEG ) {
#line 55 "clpretty.ch"
#line 56 "clpretty.ch"
                                                            (oldListAttr=AddListList(copytree(listAttr), oldListAttr));
#line 56 "clpretty.ch"
                                                            
#line 56 "clpretty.ch"
#line 57 "clpretty.ch"
                                                            
#line 57 "clpretty.ch"
#line 57 "clpretty.ch"
                                                        } else 
#line 57 "clpretty.ch"
                                {
#line 57 "clpretty.ch"
#line 58 "clpretty.ch"
                                    (oldListAttr=AddListList(oldListAttr, copytree(listAttr)));
#line 58 "clpretty.ch"
                                    
#line 58 "clpretty.ch"
#line 59 "clpretty.ch"
                                    
#line 59 "clpretty.ch"
#line 59 "clpretty.ch"
                                }
                                
#line 59 "clpretty.ch"
#line 60 "clpretty.ch"
                                
#line 60 "clpretty.ch"
#line 60 "clpretty.ch"
                            } else 
#line 60 "clpretty.ch"
#line 61 "clpretty.ch"
            (oldListAttr=copytree(listAttr));
#line 61 "clpretty.ch"
            
#line 61 "clpretty.ch"
        
#line 61 "clpretty.ch"
#line 62 "clpretty.ch"
        
#line 62 "clpretty.ch"
#line 62 "clpretty.ch"
    }
    
#line 62 "clpretty.ch"
#line 65 "clpretty.ch"
    if ( ((_inter = (PPTREE)father,1) && 
#line 65 "clpretty.ch"
            (NumberTree(_inter) == pretty::ATTRIBUTS) &&
#line 65 "clpretty.ch"
            1) ) {
#line 65 "clpretty.ch"
#line 66 "clpretty.ch"
                    if ( attr == PRE_ATTR ) {
#line 66 "clpretty.ch"
#line 67 "clpretty.ch"
                                                {
#line 67 "clpretty.ch"
                                                    PPTREE _ptTree0= (PPTREE) 0,_sonTree0= (PPTREE) 0 ;
#line 67 "clpretty.ch"
                                                    ReplaceTree(father, 2, oldListAttr);
#line 67 "clpretty.ch"
                                                }
#line 67 "clpretty.ch"
                                                
#line 67 "clpretty.ch"
#line 68 "clpretty.ch"
                                                
#line 68 "clpretty.ch"
#line 68 "clpretty.ch"
                                              } else 
#line 68 "clpretty.ch"
                    {
#line 68 "clpretty.ch"
#line 69 "clpretty.ch"
                        {
#line 69 "clpretty.ch"
                            PPTREE _ptTree0= (PPTREE) 0,_sonTree0= (PPTREE) 0 ;
#line 69 "clpretty.ch"
                            ReplaceTree(father, 3, oldListAttr);
#line 69 "clpretty.ch"
                        }
#line 69 "clpretty.ch"
                        
#line 69 "clpretty.ch"
#line 70 "clpretty.ch"
                        
#line 70 "clpretty.ch"
#line 70 "clpretty.ch"
                    }
                    
#line 70 "clpretty.ch"
#line 71 "clpretty.ch"
                    
#line 71 "clpretty.ch"
#line 71 "clpretty.ch"
                 } else 
#line 71 "clpretty.ch"
    {
#line 71 "clpretty.ch"
#line 72 "clpretty.ch"
        if ( attr == PRE_ATTR ) {
#line 72 "clpretty.ch"
#line 72 "clpretty.ch"
                                    PTREE   _Baum0 ;
#line 72 "clpretty.ch"
                                    
#line 72 "clpretty.ch"
#line 73 "clpretty.ch"
                                    {
#line 73 "clpretty.ch"
                                        PPTREE _ptTree0= (PPTREE) 0,_ptRes0= (PPTREE) 0;
#line 73 "clpretty.ch"
                                        _ptRes0 = MakeTree(pretty::ATTRIBUTS, 3);
#line 73 "clpretty.ch"
                                        ReplaceTree(_ptRes0, 1, tree);
#line 73 "clpretty.ch"
                                        ReplaceTree(_ptRes0, 2, oldListAttr);
#line 73 "clpretty.ch"
                                        _Baum0 = _ptRes0;
#line 73 "clpretty.ch"
                                    }
#line 73 "clpretty.ch"
                                    
#line 73 "clpretty.ch"
#line 73 "clpretty.ch"
                                    replacetree(father, rank, _Baum0);
#line 73 "clpretty.ch"
#line 74 "clpretty.ch"
                                    
#line 74 "clpretty.ch"
#line 74 "clpretty.ch"
                                  } else 
#line 74 "clpretty.ch"
        {
#line 74 "clpretty.ch"
#line 74 "clpretty.ch"
            PTREE   _Baum1 ;
#line 74 "clpretty.ch"
            
#line 74 "clpretty.ch"
#line 75 "clpretty.ch"
            {
#line 75 "clpretty.ch"
                PPTREE _ptTree0= (PPTREE) 0,_ptRes0= (PPTREE) 0;
#line 75 "clpretty.ch"
                _ptRes0 = MakeTree(pretty::ATTRIBUTS, 3);
#line 75 "clpretty.ch"
                ReplaceTree(_ptRes0, 1, tree);
#line 75 "clpretty.ch"
                ReplaceTree(_ptRes0, 3, oldListAttr);
#line 75 "clpretty.ch"
                _Baum1 = _ptRes0;
#line 75 "clpretty.ch"
            }
#line 75 "clpretty.ch"
            
#line 75 "clpretty.ch"
#line 75 "clpretty.ch"
            replacetree(father, rank, _Baum1);
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
#line 78 "clpretty.ch"
    
#line 78 "clpretty.ch"
#line 78 "clpretty.ch"
}
#line 78 "clpretty.ch"

class POS_TREE {
    
    public :
    
        int rank ;
        PTREE   tree ;
#line 78 "clpretty.ch"
        int currMark ;
};

template <class STACKED> 
#line 90 "clpretty.ch"
    
#line 90 "clpretty.ch"
    inline void PushValue ( std::vector<STACKED> &stack, int &pos, STACKED stacked )
#line 90 "clpretty.ch"
    {
#line 90 "clpretty.ch"
#line 90 "clpretty.ch"
        int _nextVal ;
        
#line 90 "clpretty.ch"
#line 92 "clpretty.ch"
        pos++ ;
#line 92 "clpretty.ch"
#line 93 "clpretty.ch"
        if ( pos >= (int)stack.size() ) 
#line 93 "clpretty.ch"
#line 94 "clpretty.ch"
            stack.push_back(stacked);
#line 94 "clpretty.ch"
        else 
#line 94 "clpretty.ch"
#line 96 "clpretty.ch"
            stack [pos] = stacked ;
#line 96 "clpretty.ch"
        
#line 96 "clpretty.ch"
#line 97 "clpretty.ch"
        
#line 97 "clpretty.ch"
#line 97 "clpretty.ch"
    }
#line 97 "clpretty.ch"
    
#line 99 "clpretty.ch"

#line 99 "clpretty.ch"
inline bool SetMark ( PTREE &currTree, int &currMark )
#line 99 "clpretty.ch"
{
#line 99 "clpretty.ch"
#line 99 "clpretty.ch"
    int _nextVal ;
    
#line 99 "clpretty.ch"
#line 102 "clpretty.ch"
    
    int x ;
    
#line 102 "clpretty.ch"
#line 103 "clpretty.ch"
    
    int y ;
    
#line 103 "clpretty.ch"
#line 104 "clpretty.ch"
    
    int dx ;
    
#line 104 "clpretty.ch"
#line 105 "clpretty.ch"
    
    int posMark ;
    
#line 105 "clpretty.ch"
#line 106 "clpretty.ch"
    
    int withCoordinate ;
    
#line 106 "clpretty.ch"
#line 108 "clpretty.ch"
    if ( (!currTree) ) 
#line 108 "clpretty.ch"
#line 109 "clpretty.ch"
        return false ;
    
#line 109 "clpretty.ch"
#line 112 "clpretty.ch"
    withCoordinate = GetCoord(currTree, &x, &y, &dx, &posMark);
#line 112 "clpretty.ch"
#line 115 "clpretty.ch"
    if ( withCoordinate ) {
#line 115 "clpretty.ch"
#line 116 "clpretty.ch"
                            currMark = posMark ;
#line 116 "clpretty.ch"
#line 117 "clpretty.ch"
                            return true ;
                            
#line 117 "clpretty.ch"
#line 118 "clpretty.ch"
                            
#line 118 "clpretty.ch"
#line 118 "clpretty.ch"
                           }
#line 118 "clpretty.ch"
#line 119 "clpretty.ch"
    return false ;
    
#line 119 "clpretty.ch"
#line 120 "clpretty.ch"
    
#line 120 "clpretty.ch"
#line 120 "clpretty.ch"
}
#line 120 "clpretty.ch"

#line 125 "clpretty.ch"

#line 125 "clpretty.ch"
void clpretty::CompleteCoordinates ( PTREE currTree )
#line 125 "clpretty.ch"
{
#line 125 "clpretty.ch"
    register PPTREE _inter ;
#line 125 "clpretty.ch"

#line 125 "clpretty.ch"
#line 125 "clpretty.ch"
    int _retVal [2];
    
#line 125 "clpretty.ch"
#line 125 "clpretty.ch"
    PPTREE  _storeVal [2];
    
#line 125 "clpretty.ch"
#line 125 "clpretty.ch"
    int _nextVal ;
    
#line 125 "clpretty.ch"
#line 129 "clpretty.ch"
    
    int x ;
    
#line 129 "clpretty.ch"
#line 130 "clpretty.ch"
    
    int y ;
    
#line 130 "clpretty.ch"
#line 131 "clpretty.ch"
    
    int dx ;
    
#line 131 "clpretty.ch"
#line 132 "clpretty.ch"
    
    int maxDx = 0 ;
    
#line 132 "clpretty.ch"
#line 133 "clpretty.ch"
    
    int posMark ;
    
#line 133 "clpretty.ch"
#line 134 "clpretty.ch"
    
    Protector<int>     protector (currMark) ;
    
#line 134 "clpretty.ch"
#line 135 "clpretty.ch"
    
    int withCoordinate ;
    
#line 135 "clpretty.ch"
#line 136 "clpretty.ch"
    
    PTREE   inter ;
#line 136 "clpretty.ch"
    
#line 136 "clpretty.ch"
#line 137 "clpretty.ch"
    
    PTREE   topTree (currTree) ;
#line 137 "clpretty.ch"
    
#line 137 "clpretty.ch"
#line 138 "clpretty.ch"
    std::vector<POS_TREE>     posStack ;
    
#line 138 "clpretty.ch"
#line 139 "clpretty.ch"
    int readStack = -1 ;
    
#line 139 "clpretty.ch"
#line 141 "clpretty.ch"
    if ( (!currTree) ) 
#line 141 "clpretty.ch"
#line 142 "clpretty.ch"
        return ;
    
#line 142 "clpretty.ch"
#line 151 "clpretty.ch"
    {
#line 151 "clpretty.ch"
#line 152 "clpretty.ch"
        POS_TREE    curPos = { -1, currTree, currMark };
        
#line 152 "clpretty.ch"
#line 153 "clpretty.ch"
        PushValue<POS_TREE> (posStack, readStack, curPos);
#line 153 "clpretty.ch"
#line 154 "clpretty.ch"
        
#line 154 "clpretty.ch"
#line 154 "clpretty.ch"
    }
    
#line 154 "clpretty.ch"
#line 157 "clpretty.ch"
    while ( !((!currTree)) && currTree.TreeArity() >= 1 ) {
#line 157 "clpretty.ch"
#line 160 "clpretty.ch"
                                                                if ( currTree.TreeArity() == 1 && (((_inter = (PPTREE)currTree,1) && 
#line 160 "clpretty.ch"
                                                                                                            (_retVal[1]=((_storeVal[1]=_inter,_inter=SonTree(_inter,1),1) &&
#line 160 "clpretty.ch"
                                                                                                                (NumberTree(_inter) == TERM_TREE) &&
#line 160 "clpretty.ch"
                                                                                                                1),
#line 160 "clpretty.ch"
                                                                                                                (_inter=_storeVal[1],1),_retVal[1]) &&
#line 160 "clpretty.ch"
                                                                                                            1) || ((_inter = (PPTREE)currTree,1) && 
#line 160 "clpretty.ch"
                                                                                                                        (!SonTree(_inter,1)) &&
#line 160 "clpretty.ch"
                                                                                                                        1)) ) 
#line 160 "clpretty.ch"
#line 161 "clpretty.ch"
                                                                    break ;
                                                                
#line 161 "clpretty.ch"
#line 164 "clpretty.ch"
                                                                
                                                                PTREE   newTree (currTree [1]) ;
#line 164 "clpretty.ch"
                                                                
#line 164 "clpretty.ch"
#line 167 "clpretty.ch"
                                                                SetMark(newTree, currMark);
#line 167 "clpretty.ch"
#line 170 "clpretty.ch"
                                                                {
#line 170 "clpretty.ch"
#line 171 "clpretty.ch"
                                                                    POS_TREE    newPos = { 1, currTree, currMark };
                                                                    
#line 171 "clpretty.ch"
#line 172 "clpretty.ch"
                                                                    PushValue<POS_TREE> (posStack, readStack, newPos);
#line 172 "clpretty.ch"
#line 173 "clpretty.ch"
                                                                    
#line 173 "clpretty.ch"
#line 173 "clpretty.ch"
                                                                }
                                                                
#line 173 "clpretty.ch"
#line 176 "clpretty.ch"
                                                                (currTree=newTree);
#line 176 "clpretty.ch"
                                                                
#line 176 "clpretty.ch"
#line 177 "clpretty.ch"
                                                                
#line 177 "clpretty.ch"
#line 177 "clpretty.ch"
                                                               }
#line 177 "clpretty.ch"
#line 180 "clpretty.ch"
    while ( true ) {
#line 180 "clpretty.ch"
#line 183 "clpretty.ch"
                        if ( posStack [readStack].rank == -1 ) {
#line 183 "clpretty.ch"
#line 184 "clpretty.ch"
                                                                        (currTree=posStack [readStack].tree);
#line 184 "clpretty.ch"
                                                                        
#line 184 "clpretty.ch"
#line 185 "clpretty.ch"
                                                                        
#line 185 "clpretty.ch"
#line 185 "clpretty.ch"
                                                                    } else 
#line 185 "clpretty.ch"
                        {
#line 185 "clpretty.ch"
#line 186 "clpretty.ch"
                            (currTree=posStack [readStack].tree [posStack [readStack].rank]);
#line 186 "clpretty.ch"
                            
#line 186 "clpretty.ch"
#line 187 "clpretty.ch"
                            
#line 187 "clpretty.ch"
#line 187 "clpretty.ch"
                        }
                        
#line 187 "clpretty.ch"
#line 188 "clpretty.ch"
                        currMark = posStack [readStack].currMark ;
#line 188 "clpretty.ch"
#line 192 "clpretty.ch"
                        if ( ((_inter = (PPTREE)currTree,1) && 
#line 192 "clpretty.ch"
                                (NumberTree(_inter) == pretty::ATTRIBUTS) &&
#line 192 "clpretty.ch"
                                ((inter=SonTree(_inter,1)),1) &&
#line 192 "clpretty.ch"
                                1) ) {
#line 192 "clpretty.ch"
#line 193 "clpretty.ch"
                                        GetCoord(inter, &x, &y, &dx, &posMark);
#line 193 "clpretty.ch"
#line 194 "clpretty.ch"
                                        PutCoord(currTree, x, y, dx, posMark);
#line 194 "clpretty.ch"
#line 195 "clpretty.ch"
                                        
#line 195 "clpretty.ch"
#line 195 "clpretty.ch"
                                     } else 
#line 195 "clpretty.ch"
                        if ( !(((_inter = (PPTREE)currTree,1) && 
#line 195 "clpretty.ch"
                                    (NumberTree(_inter) == TERM_TREE) &&
#line 195 "clpretty.ch"
                                    1)) && !((!currTree)) ) {
#line 195 "clpretty.ch"
#line 196 "clpretty.ch"
                                                                withCoordinate = GetCoord(currTree, &x, &y, &dx, &posMark);
#line 196 "clpretty.ch"
#line 199 "clpretty.ch"
                                                                if ( !withCoordinate ) {
#line 199 "clpretty.ch"
#line 200 "clpretty.ch"
                                                                                            int multiLine = 0 ;
                                                                                            
#line 200 "clpretty.ch"
#line 201 "clpretty.ch"
                                                                                            int newLine = 0 ;
                                                                                            
#line 201 "clpretty.ch"
#line 202 "clpretty.ch"
                                                                                            maxDx = 0 ;
#line 202 "clpretty.ch"
#line 205 "clpretty.ch"
                                                                                            {
#line 205 "clpretty.ch"
#line 208 "clpretty.ch"
                                                                                                {
#line 208 "clpretty.ch"
#line 208 "clpretty.ch"
                                                                                                    int _for_slot = 1, _arity = treearity(currTree);
                                                                                                    
#line 208 "clpretty.ch"
#line 208 "clpretty.ch"
                                                                                                    MY_TREE _for_elem = (PPTREE)0 ;
                                                                                                    
#line 208 "clpretty.ch"
#line 208 "clpretty.ch"
#line 208 "clpretty.ch"
                                                                                                    for (; _for_slot <= _arity ; _for_slot++ ) {
#line 208 "clpretty.ch"
#line 208 "clpretty.ch"
                                                                                                        _for_elem = SonTree(currTree, _for_slot);
#line 208 "clpretty.ch"
#line 208 "clpretty.ch"
                                                                                                        if ( _for_elem && NumberTree(_for_elem) != IN_LANGUAGE ) {
#line 208 "clpretty.ch"
#line 208 "clpretty.ch"
                                                                                                            GetCoord(for_elem, &x, &y, &dx, &posMark);
#line 208 "clpretty.ch"
#line 208 "clpretty.ch"
                                                                                                            multiLine |= y & 0x2 ;
#line 208 "clpretty.ch"
#line 208 "clpretty.ch"
                                                                                                            newLine |= y & 0x4 ;
#line 208 "clpretty.ch"
#line 208 "clpretty.ch"
                                                                                                            if ( !dx ) {
#line 208 "clpretty.ch"
#line 208 "clpretty.ch"
                                                                                                                if ( ((_inter = (PPTREE)for_elem,1) && 
#line 208 "clpretty.ch"
                                                                                                                        (NumberTree(_inter) == TERM_TREE) &&
#line 208 "clpretty.ch"
                                                                                                                        1) ) 
#line 208 "clpretty.ch"
#line 208 "clpretty.ch"
                                                                                                                    dx = strlen(Value(for_elem));
#line 208 "clpretty.ch"
#line 208 "clpretty.ch"
                                                                                                                
#line 208 "clpretty.ch"
#line 208 "clpretty.ch"
                                                                                                            }
#line 208 "clpretty.ch"
#line 208 "clpretty.ch"
                                                                                                            if ( x + dx > maxDx ) 
#line 208 "clpretty.ch"
#line 208 "clpretty.ch"
                                                                                                                maxDx = x + dx ;
#line 208 "clpretty.ch"
#line 208 "clpretty.ch"
                                                                                                            
#line 208 "clpretty.ch"
#line 208 "clpretty.ch"
                                                                                                        }
#line 208 "clpretty.ch"
#line 208 "clpretty.ch"
                                                                                                        
#line 208 "clpretty.ch"
#line 208 "clpretty.ch"
                                                                                                    }
#line 208 "clpretty.ch"
                                                                                                    
#line 208 "clpretty.ch"
#line 208 "clpretty.ch"
                                                                                                    
#line 208 "clpretty.ch"
#line 208 "clpretty.ch"
                                                                                                }
#line 208 "clpretty.ch"
#line 219 "clpretty.ch"
                                                                                                
#line 219 "clpretty.ch"
#line 219 "clpretty.ch"
                                                                                            }
                                                                                            
#line 219 "clpretty.ch"
#line 222 "clpretty.ch"
                                                                                            if ( newLine ) 
#line 222 "clpretty.ch"
#line 223 "clpretty.ch"
                                                                                                multiLine = 0x2 ;
#line 223 "clpretty.ch"
#line 224 "clpretty.ch"
                                                                                            PutCoord(currTree, 0, newLine | multiLine, maxDx, currMark);
#line 224 "clpretty.ch"
#line 225 "clpretty.ch"
                                                                                            
#line 225 "clpretty.ch"
#line 225 "clpretty.ch"
                                                                                         }
#line 225 "clpretty.ch"
#line 226 "clpretty.ch"
                                                                
#line 226 "clpretty.ch"
#line 226 "clpretty.ch"
                                                              }
#line 226 "clpretty.ch"
#line 229 "clpretty.ch"
                        if ( posStack [readStack].rank == -1 ) 
#line 229 "clpretty.ch"
#line 230 "clpretty.ch"
                            break ;
                        
#line 230 "clpretty.ch"
#line 233 "clpretty.ch"
                        {
#line 233 "clpretty.ch"
#line 234 "clpretty.ch"
                            bool    found = false ;
                            
#line 234 "clpretty.ch"
#line 237 "clpretty.ch"
                            {
#line 237 "clpretty.ch"
#line 238 "clpretty.ch"
                                int rank(posStack [readStack].rank);
                                
#line 238 "clpretty.ch"
#line 239 "clpretty.ch"
                                PTREE   father(posStack [readStack].tree);
#line 239 "clpretty.ch"
                                
#line 239 "clpretty.ch"
#line 240 "clpretty.ch"
                                while ( !found ) {
#line 240 "clpretty.ch"
#line 241 "clpretty.ch"
                                                    if ( rank < father.TreeArity() ) {
#line 241 "clpretty.ch"
#line 242 "clpretty.ch"
                                                                                            rank = ++(posStack [readStack].rank);
#line 242 "clpretty.ch"
#line 243 "clpretty.ch"
                                                                                            (currTree=father [rank]);
#line 243 "clpretty.ch"
                                                                                            
#line 243 "clpretty.ch"
#line 244 "clpretty.ch"
                                                                                            if ( !((!currTree)) ) {
#line 244 "clpretty.ch"
#line 245 "clpretty.ch"
                                                                                                                        found = true ;
#line 245 "clpretty.ch"
#line 248 "clpretty.ch"
                                                                                                                        {
#line 248 "clpretty.ch"
#line 249 "clpretty.ch"
                                                                                                                        if ( !SetMark(currTree, currMark) ) {
#line 249 "clpretty.ch"
#line 250 "clpretty.ch"
                                                                                                                                                                if ( readStack > 0 ) {
#line 250 "clpretty.ch"
#line 253 "clpretty.ch"
                                                                                                                                                                                       currMark = posStack [readStack - 1].currMark ;
#line 253 "clpretty.ch"
#line 254 "clpretty.ch"
                                                                                                                                                                                       
#line 254 "clpretty.ch"
#line 254 "clpretty.ch"
                                                                                                                                                                                       } else 
#line 254 "clpretty.ch"
                                                                                                                                                                {
#line 254 "clpretty.ch"
#line 255 "clpretty.ch"
                                                                                                                                                                int i = 1 ;
                                                                                                                                                                
#line 255 "clpretty.ch"
#line 256 "clpretty.ch"
                                                                                                                                                                
#line 256 "clpretty.ch"
#line 256 "clpretty.ch"
                                                                                                                                                                }
                                                                                                                                                                
#line 256 "clpretty.ch"
#line 257 "clpretty.ch"
                                                                                                                                                                
#line 257 "clpretty.ch"
#line 257 "clpretty.ch"
                                                                                                                                                                }
#line 257 "clpretty.ch"
#line 258 "clpretty.ch"
                                                                                                                        posStack [readStack].currMark = currMark ;
#line 258 "clpretty.ch"
#line 259 "clpretty.ch"
                                                                                                                        
#line 259 "clpretty.ch"
#line 259 "clpretty.ch"
                                                                                                                        }
                                                                                                                        
#line 259 "clpretty.ch"
#line 262 "clpretty.ch"
                                                                                                                        while ( !((!currTree)) && currTree.TreeArity() >= 1 ) {
#line 262 "clpretty.ch"
#line 265 "clpretty.ch"
                                                                                                                                                                                   if ( currTree.TreeArity() == 1 && (((_inter = (PPTREE)currTree,1) && 
#line 265 "clpretty.ch"
                                                                                                                                                                                                                            (_retVal[1]=((_storeVal[1]=_inter,_inter=SonTree(_inter,1),1) &&
#line 265 "clpretty.ch"
                                                                                                                                                                                                                            (NumberTree(_inter) == TERM_TREE) &&
#line 265 "clpretty.ch"
                                                                                                                                                                                                                            1),
#line 265 "clpretty.ch"
                                                                                                                                                                                                                            (_inter=_storeVal[1],1),_retVal[1]) &&
#line 265 "clpretty.ch"
                                                                                                                                                                                                                            1) || ((_inter = (PPTREE)currTree,1) && 
#line 265 "clpretty.ch"
                                                                                                                                                                                                                                    (!SonTree(_inter,1)) &&
#line 265 "clpretty.ch"
                                                                                                                                                                                                                                    1)) ) 
#line 265 "clpretty.ch"
#line 266 "clpretty.ch"
                                                                                                                                                                                   break ;
                                                                                                                                                                                   
#line 266 "clpretty.ch"
#line 269 "clpretty.ch"
                                                                                                                                                                                   
                                                                                                                                                                                   PTREE newTree (currTree [1]) ;
#line 269 "clpretty.ch"
                                                                                                                                                                                   
#line 269 "clpretty.ch"
#line 272 "clpretty.ch"
                                                                                                                                                                                   SetMark(newTree, currMark);
#line 272 "clpretty.ch"
#line 275 "clpretty.ch"
                                                                                                                                                                                   {
#line 275 "clpretty.ch"
#line 276 "clpretty.ch"
                                                                                                                                                                                   POS_TREE newPos = { 1, currTree, currMark };
                                                                                                                                                                                   
#line 276 "clpretty.ch"
#line 277 "clpretty.ch"
                                                                                                                                                                                   PushValue<POS_TREE> (posStack, readStack, newPos);
#line 277 "clpretty.ch"
#line 278 "clpretty.ch"
                                                                                                                                                                                   
#line 278 "clpretty.ch"
#line 278 "clpretty.ch"
                                                                                                                                                                                   }
                                                                                                                                                                                   
#line 278 "clpretty.ch"
#line 281 "clpretty.ch"
                                                                                                                                                                                   (currTree=newTree);
#line 281 "clpretty.ch"
                                                                                                                                                                                   
#line 281 "clpretty.ch"
#line 282 "clpretty.ch"
                                                                                                                                                                                   
#line 282 "clpretty.ch"
#line 282 "clpretty.ch"
                                                                                                                                                                                   }
#line 282 "clpretty.ch"
#line 283 "clpretty.ch"
                                                                                                                        
#line 283 "clpretty.ch"
#line 283 "clpretty.ch"
                                                                                                                    }
#line 283 "clpretty.ch"
#line 284 "clpretty.ch"
                                                                                            
#line 284 "clpretty.ch"
#line 284 "clpretty.ch"
                                                                                        } else 
#line 284 "clpretty.ch"
#line 285 "clpretty.ch"
                                                        break ;
                                                        
#line 285 "clpretty.ch"
                                                    
#line 285 "clpretty.ch"
#line 286 "clpretty.ch"
                                                    
#line 286 "clpretty.ch"
#line 286 "clpretty.ch"
                                                   }
#line 286 "clpretty.ch"
#line 287 "clpretty.ch"
                                
#line 287 "clpretty.ch"
#line 287 "clpretty.ch"
                            }
                            
#line 287 "clpretty.ch"
#line 290 "clpretty.ch"
                            if ( !found ) {
#line 290 "clpretty.ch"
#line 291 "clpretty.ch"
                                                readStack-- ;
#line 291 "clpretty.ch"
#line 292 "clpretty.ch"
                                                
#line 292 "clpretty.ch"
#line 292 "clpretty.ch"
                                            }
#line 292 "clpretty.ch"
#line 293 "clpretty.ch"
                            
#line 293 "clpretty.ch"
#line 293 "clpretty.ch"
                        }
                        
#line 293 "clpretty.ch"
#line 294 "clpretty.ch"
                        
#line 294 "clpretty.ch"
#line 294 "clpretty.ch"
                    }
#line 294 "clpretty.ch"
#line 302 "clpretty.ch"
    
#line 302 "clpretty.ch"
#line 302 "clpretty.ch"
}
#line 302 "clpretty.ch"

#line 307 "clpretty.ch"

#line 307 "clpretty.ch"
void clpretty::CompleteCoordinatesInt ( PTREE currTree )
#line 307 "clpretty.ch"
{
#line 307 "clpretty.ch"
    register PPTREE _inter ;
#line 307 "clpretty.ch"

#line 307 "clpretty.ch"
#line 307 "clpretty.ch"
    int _nextVal ;
    
#line 307 "clpretty.ch"
#line 311 "clpretty.ch"
    
    int x ;
    
#line 311 "clpretty.ch"
#line 312 "clpretty.ch"
    
    int y ;
    
#line 312 "clpretty.ch"
#line 313 "clpretty.ch"
    
    int dx ;
    
#line 313 "clpretty.ch"
#line 314 "clpretty.ch"
    
    int maxDx = 0 ;
    
#line 314 "clpretty.ch"
#line 315 "clpretty.ch"
    
    int posMark ;
    
#line 315 "clpretty.ch"
#line 316 "clpretty.ch"
    
    Protector<int>     protector (currMark) ;
    
#line 316 "clpretty.ch"
#line 317 "clpretty.ch"
    
    int withCoordinate ;
    
#line 317 "clpretty.ch"
#line 318 "clpretty.ch"
    
    PTREE   inter ;
#line 318 "clpretty.ch"
    
#line 318 "clpretty.ch"
#line 321 "clpretty.ch"
    if ( ((_inter = (PPTREE)currTree,1) && 
#line 321 "clpretty.ch"
            (NumberTree(_inter) == pretty::ATTRIBUTS) &&
#line 321 "clpretty.ch"
            ((inter=SonTree(_inter,1)),1) &&
#line 321 "clpretty.ch"
            1) ) {
#line 321 "clpretty.ch"
#line 322 "clpretty.ch"
                    CompleteCoordinates(inter);
#line 322 "clpretty.ch"
#line 323 "clpretty.ch"
                    GetCoord(inter, &x, &y, &dx, &posMark);
#line 323 "clpretty.ch"
#line 324 "clpretty.ch"
                    PutCoord(currTree, x, y, dx, posMark);
#line 324 "clpretty.ch"
#line 325 "clpretty.ch"
                    return ;
                    
#line 325 "clpretty.ch"
#line 326 "clpretty.ch"
                    
#line 326 "clpretty.ch"
#line 326 "clpretty.ch"
                 }
#line 326 "clpretty.ch"
#line 327 "clpretty.ch"
    withCoordinate = GetCoord(currTree, &x, &y, &dx, &posMark);
#line 327 "clpretty.ch"
#line 330 "clpretty.ch"
    if ( withCoordinate ) {
#line 330 "clpretty.ch"
#line 331 "clpretty.ch"
                            currMark = posMark ;
#line 331 "clpretty.ch"
#line 332 "clpretty.ch"
                            
#line 332 "clpretty.ch"
#line 332 "clpretty.ch"
                           }
#line 332 "clpretty.ch"
#line 335 "clpretty.ch"
    {
#line 335 "clpretty.ch"
#line 335 "clpretty.ch"
        int _for_slot = 1, _arity = treearity(currTree);
        
#line 335 "clpretty.ch"
#line 335 "clpretty.ch"
        MY_TREE _for_elem = (PPTREE)0 ;
        
#line 335 "clpretty.ch"
#line 335 "clpretty.ch"
#line 335 "clpretty.ch"
        for (; _for_slot <= _arity ; _for_slot++ ) {
#line 335 "clpretty.ch"
#line 335 "clpretty.ch"
            _for_elem = SonTree(currTree, _for_slot);
#line 335 "clpretty.ch"
#line 335 "clpretty.ch"
            if ( _for_elem && NumberTree(_for_elem) != IN_LANGUAGE ) 
#line 335 "clpretty.ch"
#line 335 "clpretty.ch"
                CompleteCoordinatesInt(for_elem);
#line 335 "clpretty.ch"
#line 335 "clpretty.ch"
            
#line 335 "clpretty.ch"
#line 335 "clpretty.ch"
        }
#line 335 "clpretty.ch"
        
#line 335 "clpretty.ch"
#line 335 "clpretty.ch"
        
#line 335 "clpretty.ch"
#line 335 "clpretty.ch"
    }
#line 335 "clpretty.ch"
#line 340 "clpretty.ch"
    if ( !withCoordinate && !(((_inter = (PPTREE)currTree,1) && 
#line 340 "clpretty.ch"
                                    (NumberTree(_inter) == TERM_TREE) &&
#line 340 "clpretty.ch"
                                    1)) ) {
#line 340 "clpretty.ch"
#line 341 "clpretty.ch"
                                            int multiLine = 0 ;
                                            
#line 341 "clpretty.ch"
#line 342 "clpretty.ch"
                                            int newLine = 0 ;
                                            
#line 342 "clpretty.ch"
#line 345 "clpretty.ch"
                                            {
#line 345 "clpretty.ch"
#line 348 "clpretty.ch"
                                                {
#line 348 "clpretty.ch"
#line 348 "clpretty.ch"
                                                    int _for_slot = 1, _arity = treearity(currTree);
                                                    
#line 348 "clpretty.ch"
#line 348 "clpretty.ch"
                                                    MY_TREE _for_elem = (PPTREE)0 ;
                                                    
#line 348 "clpretty.ch"
#line 348 "clpretty.ch"
#line 348 "clpretty.ch"
                                                    for (; _for_slot <= _arity ; _for_slot++ ) {
#line 348 "clpretty.ch"
#line 348 "clpretty.ch"
                                                        _for_elem = SonTree(currTree, _for_slot);
#line 348 "clpretty.ch"
#line 348 "clpretty.ch"
                                                        if ( _for_elem && NumberTree(_for_elem) != IN_LANGUAGE ) {
#line 348 "clpretty.ch"
#line 348 "clpretty.ch"
                                                            GetCoord(for_elem, &x, &y, &dx, &posMark);
#line 348 "clpretty.ch"
#line 348 "clpretty.ch"
                                                            multiLine |= y & 0x2 ;
#line 348 "clpretty.ch"
#line 348 "clpretty.ch"
                                                            newLine |= y & 0x4 ;
#line 348 "clpretty.ch"
#line 348 "clpretty.ch"
                                                            if ( !dx ) {
#line 348 "clpretty.ch"
#line 348 "clpretty.ch"
                                                                if ( ((_inter = (PPTREE)for_elem,1) && 
#line 348 "clpretty.ch"
                                                                        (NumberTree(_inter) == TERM_TREE) &&
#line 348 "clpretty.ch"
                                                                        1) ) 
#line 348 "clpretty.ch"
#line 348 "clpretty.ch"
                                                                    dx = strlen(Value(for_elem));
#line 348 "clpretty.ch"
#line 348 "clpretty.ch"
                                                                
#line 348 "clpretty.ch"
#line 348 "clpretty.ch"
                                                            }
#line 348 "clpretty.ch"
#line 348 "clpretty.ch"
                                                            if ( x + dx > maxDx ) 
#line 348 "clpretty.ch"
#line 348 "clpretty.ch"
                                                                maxDx = x + dx ;
#line 348 "clpretty.ch"
#line 348 "clpretty.ch"
                                                            
#line 348 "clpretty.ch"
#line 348 "clpretty.ch"
                                                        }
#line 348 "clpretty.ch"
#line 348 "clpretty.ch"
                                                        
#line 348 "clpretty.ch"
#line 348 "clpretty.ch"
                                                    }
#line 348 "clpretty.ch"
                                                    
#line 348 "clpretty.ch"
#line 348 "clpretty.ch"
                                                    
#line 348 "clpretty.ch"
#line 348 "clpretty.ch"
                                                }
#line 348 "clpretty.ch"
#line 359 "clpretty.ch"
                                                
#line 359 "clpretty.ch"
#line 359 "clpretty.ch"
                                            }
                                            
#line 359 "clpretty.ch"
#line 362 "clpretty.ch"
                                            if ( newLine ) 
#line 362 "clpretty.ch"
#line 363 "clpretty.ch"
                                                multiLine = 0x2 ;
#line 363 "clpretty.ch"
#line 364 "clpretty.ch"
                                            PutCoord(currTree, 0, newLine | multiLine, maxDx, currMark);
#line 364 "clpretty.ch"
#line 365 "clpretty.ch"
                                            
#line 365 "clpretty.ch"
#line 365 "clpretty.ch"
                                          }
#line 365 "clpretty.ch"
#line 366 "clpretty.ch"
    
#line 366 "clpretty.ch"
#line 366 "clpretty.ch"
}
#line 366 "clpretty.ch"

#line 368 "clpretty.ch"

#line 368 "clpretty.ch"
void clpretty::CompleteCoordinatesOld ( PTREE currTree )
#line 368 "clpretty.ch"
{
#line 368 "clpretty.ch"
#line 368 "clpretty.ch"
    int _nextVal ;
    
#line 368 "clpretty.ch"
#line 370 "clpretty.ch"
    
    Protector<int>     protector(output, 1);
    
#line 370 "clpretty.ch"
#line 372 "clpretty.ch"
    PrintString(" ================================= > ");
#line 372 "clpretty.ch"
#line 372 "clpretty.ch"
    LNewLine(1);
#line 372 "clpretty.ch"
    
#line 372 "clpretty.ch"
#line 373 "clpretty.ch"
    DumpTree(currTree);
#line 373 "clpretty.ch"
#line 374 "clpretty.ch"
    NewLine();
#line 374 "clpretty.ch"
#line 375 "clpretty.ch"
    CompleteCoordinatesInt(currTree);
#line 375 "clpretty.ch"
#line 376 "clpretty.ch"
    PrintString(" ================================= >> ");
#line 376 "clpretty.ch"
#line 376 "clpretty.ch"
    LNewLine(1);
#line 376 "clpretty.ch"
    
#line 376 "clpretty.ch"
#line 377 "clpretty.ch"
    DumpTree(currTree);
#line 377 "clpretty.ch"
#line 378 "clpretty.ch"
    NewLine();
#line 378 "clpretty.ch"
#line 379 "clpretty.ch"
    
#line 379 "clpretty.ch"
#line 379 "clpretty.ch"
}
#line 379 "clpretty.ch"

#line 383 "clpretty.ch"

#line 383 "clpretty.ch"
int clpretty::GetBoxSize ( PTREE box )
#line 383 "clpretty.ch"
{
#line 383 "clpretty.ch"
    register PPTREE _inter ;
#line 383 "clpretty.ch"

#line 383 "clpretty.ch"
#line 383 "clpretty.ch"
    int _nextVal ;
    
#line 383 "clpretty.ch"
#line 386 "clpretty.ch"
    
    int x, y, dx, posMark ;
    
#line 386 "clpretty.ch"
#line 387 "clpretty.ch"
    int maxDx = -10000 ;
    
#line 387 "clpretty.ch"
#line 389 "clpretty.ch"
    GetCoord(box, &x, &y, &dx, &posMark);
#line 389 "clpretty.ch"
#line 390 "clpretty.ch"
    if ( dx <= 1 ) {
#line 390 "clpretty.ch"
#line 391 "clpretty.ch"
                        if ( ((_inter = (PPTREE)box,1) && 
#line 391 "clpretty.ch"
                                (NumberTree(_inter) == TERM_TREE) &&
#line 391 "clpretty.ch"
                                1) ) 
#line 391 "clpretty.ch"
#line 392 "clpretty.ch"
                            return x + strlen(Value(box));
                        
#line 392 "clpretty.ch"
                        else 
#line 393 "clpretty.ch"
                        {
#line 393 "clpretty.ch"
#line 394 "clpretty.ch"
                            {
#line 394 "clpretty.ch"
#line 394 "clpretty.ch"
                                int _for_slot = 1, _arity = treearity(box);
                                
#line 394 "clpretty.ch"
#line 394 "clpretty.ch"
                                MY_TREE _for_elem = (PPTREE)0 ;
                                
#line 394 "clpretty.ch"
#line 394 "clpretty.ch"
#line 394 "clpretty.ch"
                                for (; _for_slot <= _arity ; _for_slot++ ) {
#line 394 "clpretty.ch"
#line 394 "clpretty.ch"
                                    _for_elem = SonTree(box, _for_slot);
#line 394 "clpretty.ch"
#line 394 "clpretty.ch"
                                    if ( _for_elem && NumberTree(_for_elem) != IN_LANGUAGE ) {
#line 394 "clpretty.ch"
#line 394 "clpretty.ch"
                                        dx = GetBoxSize(for_elem);
#line 394 "clpretty.ch"
#line 394 "clpretty.ch"
                                        if ( dx > maxDx ) 
#line 394 "clpretty.ch"
#line 394 "clpretty.ch"
                                            maxDx = dx ;
#line 394 "clpretty.ch"
#line 394 "clpretty.ch"
                                        
#line 394 "clpretty.ch"
#line 394 "clpretty.ch"
                                    }
#line 394 "clpretty.ch"
#line 394 "clpretty.ch"
                                    
#line 394 "clpretty.ch"
#line 394 "clpretty.ch"
                                }
#line 394 "clpretty.ch"
                                
#line 394 "clpretty.ch"
#line 394 "clpretty.ch"
                                
#line 394 "clpretty.ch"
#line 394 "clpretty.ch"
                            }
#line 394 "clpretty.ch"
#line 399 "clpretty.ch"
                            return x + maxDx ;
                            
#line 399 "clpretty.ch"
#line 400 "clpretty.ch"
                            
#line 400 "clpretty.ch"
#line 400 "clpretty.ch"
                        }
                        
#line 400 "clpretty.ch"
#line 401 "clpretty.ch"
                        
#line 401 "clpretty.ch"
#line 401 "clpretty.ch"
                     } else 
#line 401 "clpretty.ch"
#line 402 "clpretty.ch"
        return x + dx ;
        
#line 402 "clpretty.ch"
    
#line 402 "clpretty.ch"
#line 403 "clpretty.ch"
    
#line 403 "clpretty.ch"
#line 403 "clpretty.ch"
}
#line 403 "clpretty.ch"

#line 407 "clpretty.ch"

#line 407 "clpretty.ch"
void clpretty::TraitMark ( PTREE tree, int newMark )
#line 407 "clpretty.ch"
{
#line 407 "clpretty.ch"
#line 407 "clpretty.ch"
    int _nextVal ;
    
#line 407 "clpretty.ch"
#line 410 "clpretty.ch"
    
    int x, y, dx, dy ;
    
#line 410 "clpretty.ch"
#line 412 "clpretty.ch"
    {
#line 412 "clpretty.ch"
#line 412 "clpretty.ch"
        ItPtree _iterator1 (tree, (PPTREE) 0) ;
        
#line 412 "clpretty.ch"
#line 412 "clpretty.ch"
        PTREE   _for_elem ;
#line 412 "clpretty.ch"
        
#line 412 "clpretty.ch"
#line 412 "clpretty.ch"
        _iterator1.AllSearch(1);
#line 412 "clpretty.ch"
#line 412 "clpretty.ch"
        while ( (_for_elem=_iterator1++) ) {
#line 412 "clpretty.ch"
#line 412 "clpretty.ch"
            {
#line 412 "clpretty.ch"
#line 413 "clpretty.ch"
                if ( GetCoord(for_elem, &x, &y, &dx, &dy) ) 
#line 413 "clpretty.ch"
#line 414 "clpretty.ch"
                    PutCoord(for_elem, x, y, dx, newMark);
#line 414 "clpretty.ch"
#line 415 "clpretty.ch"
                
#line 415 "clpretty.ch"
#line 415 "clpretty.ch"
            }
            
#line 415 "clpretty.ch"
#line 415 "clpretty.ch"
            _iterator1.Current(_for_elem);
#line 415 "clpretty.ch"
#line 415 "clpretty.ch"
            continue ;
            
#line 415 "clpretty.ch"
#line 415 "clpretty.ch"
        for_continue1 : 
#line 415 "clpretty.ch"
#line 415 "clpretty.ch"
            _iterator1.Current(_for_elem);
#line 415 "clpretty.ch"
#line 415 "clpretty.ch"
            _iterator1.SkipSon(1);
#line 415 "clpretty.ch"
#line 415 "clpretty.ch"
            continue ;
            
#line 415 "clpretty.ch"
#line 415 "clpretty.ch"
        for_break1 : 
#line 415 "clpretty.ch"
#line 415 "clpretty.ch"
            break ;
            
#line 415 "clpretty.ch"
#line 415 "clpretty.ch"
            
#line 415 "clpretty.ch"
#line 415 "clpretty.ch"
        }
#line 415 "clpretty.ch"
#line 415 "clpretty.ch"
        
#line 415 "clpretty.ch"
#line 415 "clpretty.ch"
    }
    
#line 415 "clpretty.ch"
#line 416 "clpretty.ch"
    
#line 416 "clpretty.ch"
#line 416 "clpretty.ch"
}
#line 416 "clpretty.ch"

#line 420 "clpretty.ch"

#line 420 "clpretty.ch"
void clpretty::TraiterExp3 ( PTREE tree, int x0 )
#line 420 "clpretty.ch"
{
#line 420 "clpretty.ch"
    register PPTREE _inter ;
#line 420 "clpretty.ch"

#line 420 "clpretty.ch"
#line 420 "clpretty.ch"
    PTREE   _Baum0 ;
#line 420 "clpretty.ch"
    
#line 420 "clpretty.ch"
#line 420 "clpretty.ch"
    int _nextVal ;
    
#line 420 "clpretty.ch"
#line 423 "clpretty.ch"
    
    PTREE   son1, son2, list1, list2 ;
#line 423 "clpretty.ch"
    
#line 423 "clpretty.ch"
#line 424 "clpretty.ch"
    PTREE   refTree ;
#line 424 "clpretty.ch"
    
#line 424 "clpretty.ch"
#line 425 "clpretty.ch"
    char    string [25];
    
#line 425 "clpretty.ch"
#line 426 "clpretty.ch"
    int posRef, colRef, x, y, dx, dy, delta, ret, y0 ;
    
#line 426 "clpretty.ch"
#line 427 "clpretty.ch"
    PTREE   postAttribute ;
#line 427 "clpretty.ch"
    
#line 427 "clpretty.ch"
#line 428 "clpretty.ch"
    
    PTREE   preAttribute ;
#line 428 "clpretty.ch"
    
#line 428 "clpretty.ch"
#line 429 "clpretty.ch"
    
    int maxDx = 0 ;
    
#line 429 "clpretty.ch"
#line 432 "clpretty.ch"
    GetCoord(tree, &x, &y, &dx, &colRef);
#line 432 "clpretty.ch"
#line 433 "clpretty.ch"
    x0 += x ;
#line 433 "clpretty.ch"
#line 434 "clpretty.ch"
    if ( x0 + dx <= rightMargin ) 
#line 434 "clpretty.ch"
#line 435 "clpretty.ch"
        return ;
    
#line 435 "clpretty.ch"
#line 436 "clpretty.ch"
    MarkCoordTree(tree, x0, 0);
#line 436 "clpretty.ch"
#line 439 "clpretty.ch"
    ((_inter = (PPTREE)tree,1) && 
#line 439 "clpretty.ch"
        ((son1=SonTree(_inter,2)),1) &&
#line 439 "clpretty.ch"
        ((son2=SonTree(_inter,3)),1) &&
#line 439 "clpretty.ch"
        1);
#line 439 "clpretty.ch"
    ;
#line 439 "clpretty.ch"
#line 442 "clpretty.ch"
    if ( colRef == markTab ) {
#line 442 "clpretty.ch"
#line 443 "clpretty.ch"
                                posRef = TAB_VALUE(colRef, nbTab + 1);
#line 443 "clpretty.ch"
#line 444 "clpretty.ch"
                                sprintf(string, "%d", nbTab + 1);
#line 444 "clpretty.ch"
#line 445 "clpretty.ch"
                                
#line 445 "clpretty.ch"
#line 445 "clpretty.ch"
                               } else 
#line 445 "clpretty.ch"
    {
#line 445 "clpretty.ch"
#line 446 "clpretty.ch"
        posRef = TAB_VALUE(colRef, 1);
#line 446 "clpretty.ch"
#line 447 "clpretty.ch"
        strcpy(string, "1");
#line 447 "clpretty.ch"
#line 448 "clpretty.ch"
        
#line 448 "clpretty.ch"
#line 448 "clpretty.ch"
    }
    
#line 448 "clpretty.ch"
#line 449 "clpretty.ch"
    {
#line 449 "clpretty.ch"
        PPTREE _ptTree0=(PPTREE) 0;
#line 449 "clpretty.ch"
        _ptTree0 = (PPTREE) 0;
#line 449 "clpretty.ch"
        {
#line 449 "clpretty.ch"
            PPTREE _ptTree1= (PPTREE) 0 ;
#line 449 "clpretty.ch"
            {
#line 449 "clpretty.ch"
                PPTREE _ptTree2= (PPTREE) 0,_ptRes2= (PPTREE) 0;
#line 449 "clpretty.ch"
                _ptRes2 = MakeTree(pretty::NEWLINE, 1);
#line 449 "clpretty.ch"
                _ptTree2 = MakeString("1") ;
#line 449 "clpretty.ch"
                ReplaceTree(_ptRes2, 1, _ptTree2);
#line 449 "clpretty.ch"
                _ptTree1 = _ptRes2;
#line 449 "clpretty.ch"
            }
#line 449 "clpretty.ch"
            _ptTree0 = AddList( _ptTree0,_ptTree1);
#line 449 "clpretty.ch"
        }
#line 449 "clpretty.ch"
        {
#line 449 "clpretty.ch"
            PPTREE _ptTree1= (PPTREE) 0 ;
#line 449 "clpretty.ch"
            {
#line 449 "clpretty.ch"
                PPTREE _ptTree2= (PPTREE) 0,_ptRes2= (PPTREE) 0;
#line 449 "clpretty.ch"
                _ptRes2 = MakeTree(pretty::TAB, 1);
#line 449 "clpretty.ch"
                _ptTree2 = StoreRef(MakeString(string));
#line 449 "clpretty.ch"
                ReplaceTree(_ptRes2, 1, _ptTree2);
#line 449 "clpretty.ch"
                _ptTree1 = _ptRes2;
#line 449 "clpretty.ch"
            }
#line 449 "clpretty.ch"
            _ptTree0 = AddList( _ptTree0,_ptTree1);
#line 449 "clpretty.ch"
        }
#line 449 "clpretty.ch"
        {
#line 449 "clpretty.ch"
            PPTREE _ptTree1= (PPTREE) 0 ;
#line 449 "clpretty.ch"
            {
#line 449 "clpretty.ch"
                PPTREE _ptTree2= (PPTREE) 0,_ptRes2= (PPTREE) 0;
#line 449 "clpretty.ch"
                _ptRes2 = MakeTree(pretty::MARK, 0);
#line 449 "clpretty.ch"
                _ptTree1 = _ptRes2;
#line 449 "clpretty.ch"
            }
#line 449 "clpretty.ch"
            _ptTree0 = AddList( _ptTree0,_ptTree1);
#line 449 "clpretty.ch"
        }
#line 449 "clpretty.ch"
        {
#line 449 "clpretty.ch"
            PPTREE _ptTree1= (PPTREE) 0 ;
#line 449 "clpretty.ch"
            {
#line 449 "clpretty.ch"
                PPTREE _ptTree2= (PPTREE) 0,_ptRes2= (PPTREE) 0;
#line 449 "clpretty.ch"
                _ptRes2 = MakeTree(pretty::STR, 1);
#line 449 "clpretty.ch"
                _ptTree2 = MakeString("   ") ;
#line 449 "clpretty.ch"
                ReplaceTree(_ptRes2, 1, _ptTree2);
#line 449 "clpretty.ch"
                _ptTree1 = _ptRes2;
#line 449 "clpretty.ch"
            }
#line 449 "clpretty.ch"
            _ptTree0 = AddList( _ptTree0,_ptTree1);
#line 449 "clpretty.ch"
        }
#line 449 "clpretty.ch"
        preAttribute = _ptTree0;
#line 449 "clpretty.ch"
        ;
#line 449 "clpretty.ch"
    }
#line 449 "clpretty.ch"
    
#line 449 "clpretty.ch"
#line 450 "clpretty.ch"
    {
#line 450 "clpretty.ch"
        PPTREE _ptTree0=(PPTREE) 0;
#line 450 "clpretty.ch"
        _ptTree0 = (PPTREE) 0;
#line 450 "clpretty.ch"
        {
#line 450 "clpretty.ch"
            PPTREE _ptTree1= (PPTREE) 0 ;
#line 450 "clpretty.ch"
            {
#line 450 "clpretty.ch"
                PPTREE _ptTree2= (PPTREE) 0,_ptRes2= (PPTREE) 0;
#line 450 "clpretty.ch"
                _ptRes2 = MakeTree(pretty::NEWLINE, 1);
#line 450 "clpretty.ch"
                _ptTree2 = MakeString("1") ;
#line 450 "clpretty.ch"
                ReplaceTree(_ptRes2, 1, _ptTree2);
#line 450 "clpretty.ch"
                _ptTree1 = _ptRes2;
#line 450 "clpretty.ch"
            }
#line 450 "clpretty.ch"
            _ptTree0 = AddList( _ptTree0,_ptTree1);
#line 450 "clpretty.ch"
        }
#line 450 "clpretty.ch"
        postAttribute = _ptTree0;
#line 450 "clpretty.ch"
        ;
#line 450 "clpretty.ch"
    }
#line 450 "clpretty.ch"
    
#line 450 "clpretty.ch"
#line 451 "clpretty.ch"
    PutAttr(son1, preAttribute, PRE_ATTR, PUT_BEG);
#line 451 "clpretty.ch"
#line 452 "clpretty.ch"
    PutAttr(son1, postAttribute, POST_ATTR, PUT_END);
#line 452 "clpretty.ch"
#line 455 "clpretty.ch"
    {
#line 455 "clpretty.ch"
        PPTREE _ptTree0=(PPTREE) 0;
#line 455 "clpretty.ch"
        _ptTree0 = (PPTREE) 0;
#line 455 "clpretty.ch"
        {
#line 455 "clpretty.ch"
            PPTREE _ptTree1= (PPTREE) 0 ;
#line 455 "clpretty.ch"
            {
#line 455 "clpretty.ch"
                PPTREE _ptTree2= (PPTREE) 0,_ptRes2= (PPTREE) 0;
#line 455 "clpretty.ch"
                _ptRes2 = MakeTree(pretty::UNMARK, 0);
#line 455 "clpretty.ch"
                _ptTree1 = _ptRes2;
#line 455 "clpretty.ch"
            }
#line 455 "clpretty.ch"
            _ptTree0 = AddList( _ptTree0,_ptTree1);
#line 455 "clpretty.ch"
        }
#line 455 "clpretty.ch"
        postAttribute = _ptTree0;
#line 455 "clpretty.ch"
        ;
#line 455 "clpretty.ch"
    }
#line 455 "clpretty.ch"
    
#line 455 "clpretty.ch"
#line 456 "clpretty.ch"
    PutAttr(son2, postAttribute, POST_ATTR, PUT_END);
#line 456 "clpretty.ch"
#line 459 "clpretty.ch"
    GetCoord(son1, &x, &y, &dx, &dy);
#line 459 "clpretty.ch"
#line 460 "clpretty.ch"
    _Baum0 = (PPTREE) 0 ;
#line 460 "clpretty.ch"
    
#line 460 "clpretty.ch"
#line 460 "clpretty.ch"
    GetCoordAbs(son1, _Baum0, &x0, &y0);
#line 460 "clpretty.ch"
#line 461 "clpretty.ch"
    delta = posRef + 3 - x0 ;
#line 461 "clpretty.ch"
#line 462 "clpretty.ch"
    PutCoord(son1, x + delta, y, dx, dy);
#line 462 "clpretty.ch"
#line 463 "clpretty.ch"
    if ( x + delta + dx > maxDx ) 
#line 463 "clpretty.ch"
#line 464 "clpretty.ch"
        maxDx = x + delta + dx ;
#line 464 "clpretty.ch"
#line 465 "clpretty.ch"
    TraitMark(son1, posRef);
#line 465 "clpretty.ch"
#line 468 "clpretty.ch"
    delta = posRef - x0 - dx ;
#line 468 "clpretty.ch"
#line 469 "clpretty.ch"
    GetCoord(son2, &x, &y, &dx, &dy);
#line 469 "clpretty.ch"
#line 470 "clpretty.ch"
    PutCoord(son2, x + delta, y, dx, dy);
#line 470 "clpretty.ch"
#line 471 "clpretty.ch"
    if ( x + delta + dx > maxDx ) 
#line 471 "clpretty.ch"
#line 472 "clpretty.ch"
        maxDx = x + delta + dx ;
#line 472 "clpretty.ch"
#line 473 "clpretty.ch"
    TraitMark(son2, posRef);
#line 473 "clpretty.ch"
#line 476 "clpretty.ch"
    GetCoord(sontree(tree, 1), &x, &y, &dx, &dy);
#line 476 "clpretty.ch"
#line 477 "clpretty.ch"
    if ( x + dx > maxDx ) 
#line 477 "clpretty.ch"
#line 478 "clpretty.ch"
        maxDx = x + dx ;
#line 478 "clpretty.ch"
#line 479 "clpretty.ch"
    GetCoord(tree, &x, &y, &dx, &dy);
#line 479 "clpretty.ch"
#line 480 "clpretty.ch"
    PutCoord(tree, x, y, maxDx, dy);
#line 480 "clpretty.ch"
#line 483 "clpretty.ch"
    UnMarkCoordTree(tree);
#line 483 "clpretty.ch"
#line 484 "clpretty.ch"
    
#line 484 "clpretty.ch"
#line 484 "clpretty.ch"
}
#line 484 "clpretty.ch"

#line 488 "clpretty.ch"

#line 488 "clpretty.ch"
void clpretty::TraiterForDeclaration ( PTREE tree, int x0 )
#line 488 "clpretty.ch"
{
#line 488 "clpretty.ch"
    register PPTREE _inter ;
#line 488 "clpretty.ch"

#line 488 "clpretty.ch"
#line 488 "clpretty.ch"
    int _nextVal ;
    
#line 488 "clpretty.ch"
#line 491 "clpretty.ch"
    
    PTREE   son0, son1, son2 ;
#line 491 "clpretty.ch"
    
#line 491 "clpretty.ch"
#line 492 "clpretty.ch"
    PTREE   listAttrib ;
#line 492 "clpretty.ch"
    
#line 492 "clpretty.ch"
#line 493 "clpretty.ch"
    int delta = 0 ;
    
#line 493 "clpretty.ch"
#line 494 "clpretty.ch"
    int x, y, dx, colRef, colRefOrg ;
    
#line 494 "clpretty.ch"
#line 495 "clpretty.ch"
    int aTreatment = 0 ;
    
#line 495 "clpretty.ch"
#line 498 "clpretty.ch"
    GetCoord(tree, &x, &y, &dx, &colRefOrg);
#line 498 "clpretty.ch"
#line 499 "clpretty.ch"
    x0 += x ;
#line 499 "clpretty.ch"
#line 500 "clpretty.ch"
    if ( x0 + dx <= rightMargin ) 
#line 500 "clpretty.ch"
#line 501 "clpretty.ch"
        return ;
    
#line 501 "clpretty.ch"
#line 502 "clpretty.ch"
    MarkCoordTree(tree, x0, 0);
#line 502 "clpretty.ch"
#line 505 "clpretty.ch"
    ((_inter = (PPTREE)tree,1) && 
#line 505 "clpretty.ch"
        ((son0=SonTree(_inter,1)),1) &&
#line 505 "clpretty.ch"
        ((son1=SonTree(_inter,2)),1) &&
#line 505 "clpretty.ch"
        ((son2=SonTree(_inter,3)),1) &&
#line 505 "clpretty.ch"
        1);
#line 505 "clpretty.ch"
    ;
#line 505 "clpretty.ch"
#line 508 "clpretty.ch"
    {
#line 508 "clpretty.ch"
#line 509 "clpretty.ch"
        GetCoord(son1, &x, &y, &dx, &colRef);
#line 509 "clpretty.ch"
#line 510 "clpretty.ch"
        colRef = TAB_VALUE(colRef, 1);
#line 510 "clpretty.ch"
#line 511 "clpretty.ch"
        if ( x0 + x + dx >= rightMargin && (delta = colRef - x0 - x) < 0 ) {
#line 511 "clpretty.ch"
#line 512 "clpretty.ch"
                                                                                        {
#line 512 "clpretty.ch"
                                                                                            PPTREE _ptTree0=(PPTREE) 0;
#line 512 "clpretty.ch"
                                                                                            _ptTree0 = (PPTREE) 0;
#line 512 "clpretty.ch"
                                                                                            {
#line 512 "clpretty.ch"
                                                                                                PPTREE _ptTree1= (PPTREE) 0 ;
#line 512 "clpretty.ch"
                                                                                                {
#line 512 "clpretty.ch"
                                                                                                    PPTREE _ptTree2= (PPTREE) 0,_ptRes2= (PPTREE) 0;
#line 512 "clpretty.ch"
                                                                                                    _ptRes2 = MakeTree(pretty::NEWLINE, 1);
#line 512 "clpretty.ch"
                                                                                                    _ptTree2 = MakeString("1") ;
#line 512 "clpretty.ch"
                                                                                                    ReplaceTree(_ptRes2, 1, _ptTree2);
#line 512 "clpretty.ch"
                                                                                                    _ptTree1 = _ptRes2;
#line 512 "clpretty.ch"
                                                                                                }
#line 512 "clpretty.ch"
                                                                                                _ptTree0 = AddList( _ptTree0,_ptTree1);
#line 512 "clpretty.ch"
                                                                                            }
#line 512 "clpretty.ch"
                                                                                            {
#line 512 "clpretty.ch"
                                                                                                PPTREE _ptTree1= (PPTREE) 0 ;
#line 512 "clpretty.ch"
                                                                                                {
#line 512 "clpretty.ch"
                                                                                                    PPTREE _ptTree2= (PPTREE) 0,_ptRes2= (PPTREE) 0;
#line 512 "clpretty.ch"
                                                                                                    _ptRes2 = MakeTree(pretty::TAB, 1);
#line 512 "clpretty.ch"
                                                                                                    _ptTree2 = MakeString("1") ;
#line 512 "clpretty.ch"
                                                                                                    ReplaceTree(_ptRes2, 1, _ptTree2);
#line 512 "clpretty.ch"
                                                                                                    _ptTree1 = _ptRes2;
#line 512 "clpretty.ch"
                                                                                                }
#line 512 "clpretty.ch"
                                                                                                _ptTree0 = AddList( _ptTree0,_ptTree1);
#line 512 "clpretty.ch"
                                                                                            }
#line 512 "clpretty.ch"
                                                                                            {
#line 512 "clpretty.ch"
                                                                                                PPTREE _ptTree1= (PPTREE) 0 ;
#line 512 "clpretty.ch"
                                                                                                {
#line 512 "clpretty.ch"
                                                                                                    PPTREE _ptTree2= (PPTREE) 0,_ptRes2= (PPTREE) 0;
#line 512 "clpretty.ch"
                                                                                                    _ptRes2 = MakeTree(pretty::MARK, 0);
#line 512 "clpretty.ch"
                                                                                                    _ptTree1 = _ptRes2;
#line 512 "clpretty.ch"
                                                                                                }
#line 512 "clpretty.ch"
                                                                                                _ptTree0 = AddList( _ptTree0,_ptTree1);
#line 512 "clpretty.ch"
                                                                                            }
#line 512 "clpretty.ch"
                                                                                            listAttrib = _ptTree0;
#line 512 "clpretty.ch"
                                                                                            ;
#line 512 "clpretty.ch"
                                                                                        }
#line 512 "clpretty.ch"
                                                                                        
#line 512 "clpretty.ch"
#line 513 "clpretty.ch"
                                                                                        PutAttr(son1, listAttrib, PRE_ATTR, PUT_BEG);
#line 513 "clpretty.ch"
#line 514 "clpretty.ch"
                                                                                        {
#line 514 "clpretty.ch"
                                                                                            PPTREE _ptTree0=(PPTREE) 0;
#line 514 "clpretty.ch"
                                                                                            _ptTree0 = (PPTREE) 0;
#line 514 "clpretty.ch"
                                                                                            {
#line 514 "clpretty.ch"
                                                                                                PPTREE _ptTree1= (PPTREE) 0 ;
#line 514 "clpretty.ch"
                                                                                                {
#line 514 "clpretty.ch"
                                                                                                    PPTREE _ptTree2= (PPTREE) 0,_ptRes2= (PPTREE) 0;
#line 514 "clpretty.ch"
                                                                                                    _ptRes2 = MakeTree(pretty::UNMARK, 0);
#line 514 "clpretty.ch"
                                                                                                    _ptTree1 = _ptRes2;
#line 514 "clpretty.ch"
                                                                                                }
#line 514 "clpretty.ch"
                                                                                                _ptTree0 = AddList( _ptTree0,_ptTree1);
#line 514 "clpretty.ch"
                                                                                            }
#line 514 "clpretty.ch"
                                                                                            listAttrib = _ptTree0;
#line 514 "clpretty.ch"
                                                                                            ;
#line 514 "clpretty.ch"
                                                                                        }
#line 514 "clpretty.ch"
                                                                                        
#line 514 "clpretty.ch"
#line 515 "clpretty.ch"
                                                                                        PutAttr(son1, listAttrib, POST_ATTR, PUT_END);
#line 515 "clpretty.ch"
#line 516 "clpretty.ch"
                                                                                        PutCoord(son1, x + delta, y, dx, colRef);
#line 516 "clpretty.ch"
#line 517 "clpretty.ch"
                                                                                        TraitMark(son1, colRef);
#line 517 "clpretty.ch"
#line 518 "clpretty.ch"
                                                                                        aTreatment = 1 ;
#line 518 "clpretty.ch"
#line 519 "clpretty.ch"
                                                                                        
#line 519 "clpretty.ch"
#line 519 "clpretty.ch"
                                                                                     }
#line 519 "clpretty.ch"
#line 520 "clpretty.ch"
        
#line 520 "clpretty.ch"
#line 520 "clpretty.ch"
    }
    
#line 520 "clpretty.ch"
#line 523 "clpretty.ch"
    if ( !((!son2)) ) {
#line 523 "clpretty.ch"
#line 524 "clpretty.ch"
                            GetCoord(son2, &x, &y, &dx, &colRef);
#line 524 "clpretty.ch"
#line 525 "clpretty.ch"
                            colRef = TAB_VALUE(colRef, 1);
#line 525 "clpretty.ch"
#line 526 "clpretty.ch"
                            if ( x0 + x + dx >= rightMargin && (delta = colRef - x0 - x) < 0 || aTreatment ) {
#line 526 "clpretty.ch"
#line 527 "clpretty.ch"
                                                                                                                        {
#line 527 "clpretty.ch"
                                                                                                                        PPTREE _ptTree0=(PPTREE) 0;
#line 527 "clpretty.ch"
                                                                                                                        _ptTree0 = (PPTREE) 0;
#line 527 "clpretty.ch"
                                                                                                                        {
#line 527 "clpretty.ch"
                                                                                                                        PPTREE _ptTree1= (PPTREE) 0 ;
#line 527 "clpretty.ch"
                                                                                                                        {
#line 527 "clpretty.ch"
                                                                                                                        PPTREE _ptTree2= (PPTREE) 0,_ptRes2= (PPTREE) 0;
#line 527 "clpretty.ch"
                                                                                                                        _ptRes2 = MakeTree(pretty::NEWLINE, 1);
#line 527 "clpretty.ch"
                                                                                                                        _ptTree2 = MakeString("1") ;
#line 527 "clpretty.ch"
                                                                                                                        ReplaceTree(_ptRes2, 1, _ptTree2);
#line 527 "clpretty.ch"
                                                                                                                        _ptTree1 = _ptRes2;
#line 527 "clpretty.ch"
                                                                                                                        }
#line 527 "clpretty.ch"
                                                                                                                        _ptTree0 = AddList( _ptTree0,_ptTree1);
#line 527 "clpretty.ch"
                                                                                                                        }
#line 527 "clpretty.ch"
                                                                                                                        {
#line 527 "clpretty.ch"
                                                                                                                        PPTREE _ptTree1= (PPTREE) 0 ;
#line 527 "clpretty.ch"
                                                                                                                        {
#line 527 "clpretty.ch"
                                                                                                                        PPTREE _ptTree2= (PPTREE) 0,_ptRes2= (PPTREE) 0;
#line 527 "clpretty.ch"
                                                                                                                        _ptRes2 = MakeTree(pretty::TAB, 1);
#line 527 "clpretty.ch"
                                                                                                                        _ptTree2 = MakeString("1") ;
#line 527 "clpretty.ch"
                                                                                                                        ReplaceTree(_ptRes2, 1, _ptTree2);
#line 527 "clpretty.ch"
                                                                                                                        _ptTree1 = _ptRes2;
#line 527 "clpretty.ch"
                                                                                                                        }
#line 527 "clpretty.ch"
                                                                                                                        _ptTree0 = AddList( _ptTree0,_ptTree1);
#line 527 "clpretty.ch"
                                                                                                                        }
#line 527 "clpretty.ch"
                                                                                                                        {
#line 527 "clpretty.ch"
                                                                                                                        PPTREE _ptTree1= (PPTREE) 0 ;
#line 527 "clpretty.ch"
                                                                                                                        {
#line 527 "clpretty.ch"
                                                                                                                        PPTREE _ptTree2= (PPTREE) 0,_ptRes2= (PPTREE) 0;
#line 527 "clpretty.ch"
                                                                                                                        _ptRes2 = MakeTree(pretty::MARK, 0);
#line 527 "clpretty.ch"
                                                                                                                        _ptTree1 = _ptRes2;
#line 527 "clpretty.ch"
                                                                                                                        }
#line 527 "clpretty.ch"
                                                                                                                        _ptTree0 = AddList( _ptTree0,_ptTree1);
#line 527 "clpretty.ch"
                                                                                                                        }
#line 527 "clpretty.ch"
                                                                                                                        listAttrib = _ptTree0;
#line 527 "clpretty.ch"
                                                                                                                        ;
#line 527 "clpretty.ch"
                                                                                                                        }
#line 527 "clpretty.ch"
                                                                                                                        
#line 527 "clpretty.ch"
#line 528 "clpretty.ch"
                                                                                                                        PutAttr(son2, listAttrib, PRE_ATTR, PUT_BEG);
#line 528 "clpretty.ch"
#line 529 "clpretty.ch"
                                                                                                                        {
#line 529 "clpretty.ch"
                                                                                                                        PPTREE _ptTree0=(PPTREE) 0;
#line 529 "clpretty.ch"
                                                                                                                        _ptTree0 = (PPTREE) 0;
#line 529 "clpretty.ch"
                                                                                                                        {
#line 529 "clpretty.ch"
                                                                                                                        PPTREE _ptTree1= (PPTREE) 0 ;
#line 529 "clpretty.ch"
                                                                                                                        {
#line 529 "clpretty.ch"
                                                                                                                        PPTREE _ptTree2= (PPTREE) 0,_ptRes2= (PPTREE) 0;
#line 529 "clpretty.ch"
                                                                                                                        _ptRes2 = MakeTree(pretty::UNMARK, 0);
#line 529 "clpretty.ch"
                                                                                                                        _ptTree1 = _ptRes2;
#line 529 "clpretty.ch"
                                                                                                                        }
#line 529 "clpretty.ch"
                                                                                                                        _ptTree0 = AddList( _ptTree0,_ptTree1);
#line 529 "clpretty.ch"
                                                                                                                        }
#line 529 "clpretty.ch"
                                                                                                                        listAttrib = _ptTree0;
#line 529 "clpretty.ch"
                                                                                                                        ;
#line 529 "clpretty.ch"
                                                                                                                        }
#line 529 "clpretty.ch"
                                                                                                                        
#line 529 "clpretty.ch"
#line 530 "clpretty.ch"
                                                                                                                        PutAttr(son2, listAttrib, POST_ATTR, PUT_END);
#line 530 "clpretty.ch"
#line 531 "clpretty.ch"
                                                                                                                        TraitMark(son2, colRef);
#line 531 "clpretty.ch"
#line 532 "clpretty.ch"
                                                                                                                        aTreatment = 1 ;
#line 532 "clpretty.ch"
#line 533 "clpretty.ch"
                                                                                                                        
#line 533 "clpretty.ch"
#line 533 "clpretty.ch"
                                                                                                                        }
#line 533 "clpretty.ch"
#line 534 "clpretty.ch"
                            PutCoord(son2, x + delta, y, dx, colRef);
#line 534 "clpretty.ch"
#line 535 "clpretty.ch"
                            
#line 535 "clpretty.ch"
#line 535 "clpretty.ch"
                        }
#line 535 "clpretty.ch"
#line 538 "clpretty.ch"
    if ( aTreatment ) {
#line 538 "clpretty.ch"
#line 539 "clpretty.ch"
                        char    string [10];
                        
#line 539 "clpretty.ch"
#line 540 "clpretty.ch"
                        GetCoord(son0, &x, &y, &dx, &colRefOrg);
#line 540 "clpretty.ch"
#line 541 "clpretty.ch"
                        sprintf(string, "%d", colRefOrg);
#line 541 "clpretty.ch"
#line 542 "clpretty.ch"
                        {
#line 542 "clpretty.ch"
                            PPTREE _ptTree0=(PPTREE) 0;
#line 542 "clpretty.ch"
                            _ptTree0 = (PPTREE) 0;
#line 542 "clpretty.ch"
                            {
#line 542 "clpretty.ch"
                                PPTREE _ptTree1= (PPTREE) 0 ;
#line 542 "clpretty.ch"
                                {
#line 542 "clpretty.ch"
                                    PPTREE _ptTree2= (PPTREE) 0,_ptRes2= (PPTREE) 0;
#line 542 "clpretty.ch"
                                    _ptRes2 = MakeTree(pretty::TAB_VIRT, 2);
#line 542 "clpretty.ch"
                                    _ptTree2 = StoreRef(MakeString(string));
#line 542 "clpretty.ch"
                                    ReplaceTree(_ptRes2, 1, _ptTree2);
#line 542 "clpretty.ch"
                                    _ptTree2 = MakeString("1") ;
#line 542 "clpretty.ch"
                                    ReplaceTree(_ptRes2, 2, _ptTree2);
#line 542 "clpretty.ch"
                                    _ptTree1 = _ptRes2;
#line 542 "clpretty.ch"
                                }
#line 542 "clpretty.ch"
                                _ptTree0 = AddList( _ptTree0,_ptTree1);
#line 542 "clpretty.ch"
                            }
#line 542 "clpretty.ch"
                            listAttrib = _ptTree0;
#line 542 "clpretty.ch"
                            ;
#line 542 "clpretty.ch"
                        }
#line 542 "clpretty.ch"
                        
#line 542 "clpretty.ch"
#line 543 "clpretty.ch"
                        PutAttr(son0, listAttrib, PRE_ATTR, PUT_BEG);
#line 543 "clpretty.ch"
#line 544 "clpretty.ch"
                        
#line 544 "clpretty.ch"
#line 544 "clpretty.ch"
                       }
#line 544 "clpretty.ch"
#line 547 "clpretty.ch"
    UnMarkCoordTree(tree);
#line 547 "clpretty.ch"
#line 548 "clpretty.ch"
    
#line 548 "clpretty.ch"
#line 548 "clpretty.ch"
}
#line 548 "clpretty.ch"

#line 552 "clpretty.ch"

#line 552 "clpretty.ch"
void clpretty::AddTree ( PTREE tree, int delta )
#line 552 "clpretty.ch"
{
#line 552 "clpretty.ch"
#line 552 "clpretty.ch"
    int _nextVal ;
    
#line 552 "clpretty.ch"
#line 557 "clpretty.ch"
    if ( currTabTree >= sizeTabTree ) {
#line 557 "clpretty.ch"
#line 558 "clpretty.ch"
                                            if ( sizeTabTree && (tabTree = (PPTREE_DELTA)realloc(tabTree, sizeof(TREE_DELTA) * (sizeTabTree + 10))) || (tabTree = (PPTREE_DELTA)malloc(sizeof(TREE_DELTA) * 10)) ) 
#line 558 "clpretty.ch"
#line 560 "clpretty.ch"
                                                sizeTabTree += 10 ;
#line 560 "clpretty.ch"
#line 561 "clpretty.ch"
                                            
#line 561 "clpretty.ch"
#line 561 "clpretty.ch"
                                        }
#line 561 "clpretty.ch"
#line 564 "clpretty.ch"
#line 564 "clpretty.ch"
    for ( int i = 0 ; i < currTabTree ; i++ ) 
#line 564 "clpretty.ch"
#line 565 "clpretty.ch"
        if ( tabTree [i].tree == tree ) {
#line 565 "clpretty.ch"
#line 566 "clpretty.ch"
                                                tabTree [i].delta = delta ;
#line 566 "clpretty.ch"
#line 567 "clpretty.ch"
                                                return ;
                                                
#line 567 "clpretty.ch"
#line 568 "clpretty.ch"
                                                
#line 568 "clpretty.ch"
#line 568 "clpretty.ch"
                                            }
#line 568 "clpretty.ch"
    
#line 568 "clpretty.ch"
#line 571 "clpretty.ch"
    if ( currTabTree < sizeTabTree ) {
#line 571 "clpretty.ch"
#line 572 "clpretty.ch"
                                        tabTree [currTabTree].tree = tree ;
#line 572 "clpretty.ch"
#line 573 "clpretty.ch"
                                        tabTree [currTabTree].delta = delta ;
#line 573 "clpretty.ch"
#line 574 "clpretty.ch"
                                        currTabTree++ ;
#line 574 "clpretty.ch"
#line 575 "clpretty.ch"
                                        
#line 575 "clpretty.ch"
#line 575 "clpretty.ch"
                                       }
#line 575 "clpretty.ch"
#line 576 "clpretty.ch"
    
#line 576 "clpretty.ch"
#line 576 "clpretty.ch"
}
#line 576 "clpretty.ch"

#line 580 "clpretty.ch"

#line 580 "clpretty.ch"
int clpretty::FindDelta ( PTREE tree )
#line 580 "clpretty.ch"
{
#line 580 "clpretty.ch"
#line 580 "clpretty.ch"
    int _nextVal ;
    
#line 580 "clpretty.ch"
#line 586 "clpretty.ch"
    (tree=fathertree(tree));
#line 586 "clpretty.ch"
    
#line 586 "clpretty.ch"
#line 588 "clpretty.ch"
    int i ;
    
#line 588 "clpretty.ch"
#line 590 "clpretty.ch"
    while ( tree ) {
#line 590 "clpretty.ch"
#line 591 "clpretty.ch"
#line 591 "clpretty.ch"
                        for ( i = 0 ; i < currTabTree ; i++ ) 
#line 591 "clpretty.ch"
#line 592 "clpretty.ch"
                            if ( tabTree [i].tree == tree ) 
#line 592 "clpretty.ch"
#line 593 "clpretty.ch"
                                return tabTree [i].delta ;
                            
#line 593 "clpretty.ch"
                        
#line 593 "clpretty.ch"
#line 594 "clpretty.ch"
                        (tree=fathertree(tree));
#line 594 "clpretty.ch"
                        
#line 594 "clpretty.ch"
#line 595 "clpretty.ch"
                        
#line 595 "clpretty.ch"
#line 595 "clpretty.ch"
                    }
#line 595 "clpretty.ch"
#line 598 "clpretty.ch"
    return 0 ;
    
#line 598 "clpretty.ch"
#line 599 "clpretty.ch"
    
#line 599 "clpretty.ch"
#line 599 "clpretty.ch"
}
#line 599 "clpretty.ch"

#line 603 "clpretty.ch"

#line 603 "clpretty.ch"
void clpretty::TraiterExpList ( PTREE tree, int x0, int valTab, int inParam )
#line 603 "clpretty.ch"
{
#line 603 "clpretty.ch"
    register PPTREE _inter ;
#line 603 "clpretty.ch"

#line 603 "clpretty.ch"
#line 603 "clpretty.ch"
    int _retVal [2];
    
#line 603 "clpretty.ch"
#line 603 "clpretty.ch"
    PPTREE  _storeVal [2];
    
#line 603 "clpretty.ch"
#line 603 "clpretty.ch"
    int _nextVal ;
    
#line 603 "clpretty.ch"
#line 606 "clpretty.ch"
    
    PTREE   list, inter ;
#line 606 "clpretty.ch"
    
#line 606 "clpretty.ch"
#line 607 "clpretty.ch"
    PTREE   postAttribute ;
#line 607 "clpretty.ch"
    
#line 607 "clpretty.ch"
#line 608 "clpretty.ch"
    
    int y0 ;
    
#line 608 "clpretty.ch"
#line 609 "clpretty.ch"
    int x, y, dx, dy ;
    
#line 609 "clpretty.ch"
#line 610 "clpretty.ch"
    int xRef ;
    
#line 610 "clpretty.ch"
#line 611 "clpretty.ch"
    int posMark ;
    
#line 611 "clpretty.ch"
#line 612 "clpretty.ch"
    PTREE   listElem ;
#line 612 "clpretty.ch"
    
#line 612 "clpretty.ch"
#line 613 "clpretty.ch"
    
    PTREE   currElem ;
#line 613 "clpretty.ch"
    
#line 613 "clpretty.ch"
#line 614 "clpretty.ch"
    
    PTREE   refTree ;
#line 614 "clpretty.ch"
    
#line 614 "clpretty.ch"
#line 615 "clpretty.ch"
    
    PTREE   lastTree ;
#line 615 "clpretty.ch"
    
#line 615 "clpretty.ch"
#line 616 "clpretty.ch"
    
    int posRef ;
    
#line 616 "clpretty.ch"
#line 618 "clpretty.ch"
    
    int colRef ;
    
#line 618 "clpretty.ch"
#line 619 "clpretty.ch"
    
    PTREE   father ;
#line 619 "clpretty.ch"
    
#line 619 "clpretty.ch"
#line 620 "clpretty.ch"
    
    int rank ;
    
#line 620 "clpretty.ch"
#line 621 "clpretty.ch"
    
    int hasIndented = 0 ;
    
#line 621 "clpretty.ch"
#line 623 "clpretty.ch"
    
    int deltaInhibitIndent = 0 ;
    
#line 623 "clpretty.ch"
#line 625 "clpretty.ch"
    
    int delta = 0 ;
    
#line 625 "clpretty.ch"
#line 627 "clpretty.ch"
    
    int deltaRef = 0 ;
    
#line 627 "clpretty.ch"
#line 630 "clpretty.ch"
    
    int ret = 1 ;
    
#line 630 "clpretty.ch"
#line 631 "clpretty.ch"
    
    int oldNbTab = nbTab ;
    
#line 631 "clpretty.ch"
#line 632 "clpretty.ch"
    
    int rightX = 0 ;
    
#line 632 "clpretty.ch"
#line 633 "clpretty.ch"
    
    PTREE   hasToPutVirt = (PTREE)0 ;
#line 633 "clpretty.ch"
    
#line 633 "clpretty.ch"
#line 633 "clpretty.ch"
    hasToPutVirt = (PPTREE) 0 ;
#line 633 "clpretty.ch"
    
#line 633 "clpretty.ch"
#line 636 "clpretty.ch"
    GetCoord(tree, &x, &y, &dx, &y);
#line 636 "clpretty.ch"
#line 637 "clpretty.ch"
    x0 += x ;
#line 637 "clpretty.ch"
#line 638 "clpretty.ch"
    if ( x0 + dx <= rightMargin ) 
#line 638 "clpretty.ch"
#line 639 "clpretty.ch"
        return ;
    
#line 639 "clpretty.ch"
#line 640 "clpretty.ch"
    MarkCoordTree(tree, x0, 0);
#line 640 "clpretty.ch"
#line 644 "clpretty.ch"
    if ( !(((_inter = (PPTREE)tree,1) && 
#line 644 "clpretty.ch"
                (NumberTree(_inter) == LIST) &&
#line 644 "clpretty.ch"
                1)) ) {
#line 644 "clpretty.ch"
#line 645 "clpretty.ch"
                        ((_inter = (PPTREE)tree,1) && 
#line 645 "clpretty.ch"
                            (_retVal[1]=((_storeVal[1]=_inter,_inter=SonTree(_inter,1),(listElem=_inter),1) &&
#line 645 "clpretty.ch"
                                ((refTree=SonTree(_inter,1)),1) &&
#line 645 "clpretty.ch"
                                1),
#line 645 "clpretty.ch"
                                (_inter=_storeVal[1],1),_retVal[1]) &&
#line 645 "clpretty.ch"
                            1);
#line 645 "clpretty.ch"
                        ;
#line 645 "clpretty.ch"
#line 646 "clpretty.ch"
                        
#line 646 "clpretty.ch"
#line 646 "clpretty.ch"
                      } else 
#line 646 "clpretty.ch"
    {
#line 646 "clpretty.ch"
#line 647 "clpretty.ch"
        ((_inter = (PPTREE)tree,1) && 
#line 647 "clpretty.ch"
            ((refTree=SonTree(_inter,1)),1) &&
#line 647 "clpretty.ch"
            1);
#line 647 "clpretty.ch"
        ;
#line 647 "clpretty.ch"
#line 648 "clpretty.ch"
        (listElem=tree);
#line 648 "clpretty.ch"
        
#line 648 "clpretty.ch"
#line 649 "clpretty.ch"
        
#line 649 "clpretty.ch"
#line 649 "clpretty.ch"
    }
    
#line 649 "clpretty.ch"
#line 650 "clpretty.ch"
    if ( !(((_inter = (PPTREE)listElem,1) && 
#line 650 "clpretty.ch"
                (NumberTree(_inter) == LIST) &&
#line 650 "clpretty.ch"
                1)) ) 
#line 650 "clpretty.ch"
#line 651 "clpretty.ch"
        return ;
    
#line 651 "clpretty.ch"
#line 655 "clpretty.ch"
    GetCoord(refTree, &x, &y, &dx, &colRef);
#line 655 "clpretty.ch"
#line 658 "clpretty.ch"
    if ( colRef != markTab ) 
#line 658 "clpretty.ch"
#line 659 "clpretty.ch"
        nbTab = 0 ;
#line 659 "clpretty.ch"
#line 660 "clpretty.ch"
    nbTab += valTab ;
#line 660 "clpretty.ch"
#line 661 "clpretty.ch"
    posRef = TAB_VALUE(colRef, nbTab);
#line 661 "clpretty.ch"
#line 662 "clpretty.ch"
    delta = 0 ;
#line 662 "clpretty.ch"
#line 665 "clpretty.ch"
    while ( listElem ) {
#line 665 "clpretty.ch"
#line 665 "clpretty.ch"
                            PTREE   _Baum0 ;
#line 665 "clpretty.ch"
                            
#line 665 "clpretty.ch"
#line 666 "clpretty.ch"
                            (currElem=(listElem?listElem.Nextl():(PPTREE)0));
#line 666 "clpretty.ch"
                            
#line 666 "clpretty.ch"
#line 667 "clpretty.ch"
                            _Baum0 = (PPTREE) 0 ;
#line 667 "clpretty.ch"
                            
#line 667 "clpretty.ch"
#line 667 "clpretty.ch"
                            GetCoordAbs(currElem, _Baum0, &x0, &y0);
#line 667 "clpretty.ch"
#line 668 "clpretty.ch"
                            GetCoord(currElem, &x, &y, &dx, &dy);
#line 668 "clpretty.ch"
#line 672 "clpretty.ch"
                            if ( x0 <= rightX ) {
#line 672 "clpretty.ch"
#line 673 "clpretty.ch"
                                                    delta = 0 ;
#line 673 "clpretty.ch"
#line 674 "clpretty.ch"
                                                    
#line 674 "clpretty.ch"
#line 674 "clpretty.ch"
                                                  }
#line 674 "clpretty.ch"
#line 675 "clpretty.ch"
                            rightX = x0 + dx ;
#line 675 "clpretty.ch"
#line 679 "clpretty.ch"
                            if ( !lastTree && x0 + dx + delta > rightMargin ) {
#line 679 "clpretty.ch"
#line 680 "clpretty.ch"
                                                                                        if ( inParam && x0 + dx > posRef ) {
#line 680 "clpretty.ch"
#line 683 "clpretty.ch"
                                                                                                                               {
#line 683 "clpretty.ch"
                                                                                                                               PPTREE _ptTree0=(PPTREE) 0;
#line 683 "clpretty.ch"
                                                                                                                               _ptTree0 = (PPTREE) 0;
#line 683 "clpretty.ch"
                                                                                                                               {
#line 683 "clpretty.ch"
                                                                                                                               PPTREE _ptTree1= (PPTREE) 0 ;
#line 683 "clpretty.ch"
                                                                                                                               {
#line 683 "clpretty.ch"
                                                                                                                               PPTREE _ptTree2= (PPTREE) 0,_ptRes2= (PPTREE) 0;
#line 683 "clpretty.ch"
                                                                                                                               _ptRes2 = MakeTree(pretty::NEWLINE, 1);
#line 683 "clpretty.ch"
                                                                                                                               _ptTree2 = MakeString("1") ;
#line 683 "clpretty.ch"
                                                                                                                               ReplaceTree(_ptRes2, 1, _ptTree2);
#line 683 "clpretty.ch"
                                                                                                                               _ptTree1 = _ptRes2;
#line 683 "clpretty.ch"
                                                                                                                               }
#line 683 "clpretty.ch"
                                                                                                                               _ptTree0 = AddList( _ptTree0,_ptTree1);
#line 683 "clpretty.ch"
                                                                                                                               }
#line 683 "clpretty.ch"
                                                                                                                               postAttribute = _ptTree0;
#line 683 "clpretty.ch"
                                                                                                                               ;
#line 683 "clpretty.ch"
                                                                                                                               }
#line 683 "clpretty.ch"
                                                                                                                               
#line 683 "clpretty.ch"
#line 685 "clpretty.ch"
                                                                                                                               {
#line 685 "clpretty.ch"
#line 685 "clpretty.ch"
                                                                                                                               char string [10];
                                                                                                                               
#line 685 "clpretty.ch"
#line 686 "clpretty.ch"
                                                                                                                               sprintf(string, "%d", nbTab);
#line 686 "clpretty.ch"
#line 687 "clpretty.ch"
                                                                                                                               {
#line 687 "clpretty.ch"
                                                                                                                               PPTREE _ptTree0= (PPTREE) 0 ;
#line 687 "clpretty.ch"
                                                                                                                               {
#line 687 "clpretty.ch"
                                                                                                                               PPTREE _ptTree1= (PPTREE) 0 ;
#line 687 "clpretty.ch"
                                                                                                                               {
#line 687 "clpretty.ch"
                                                                                                                               PPTREE _ptTree2= (PPTREE) 0,_ptRes2= (PPTREE) 0;
#line 687 "clpretty.ch"
                                                                                                                               _ptRes2 = MakeTree(pretty::TAB, 1);
#line 687 "clpretty.ch"
                                                                                                                               _ptTree2 = StoreRef(MakeString(string));
#line 687 "clpretty.ch"
                                                                                                                               ReplaceTree(_ptRes2, 1, _ptTree2);
#line 687 "clpretty.ch"
                                                                                                                               _ptTree1 = _ptRes2;
#line 687 "clpretty.ch"
                                                                                                                               }
#line 687 "clpretty.ch"
                                                                                                                               postAttribute =  AddList( postAttribute,_ptTree1);
#line 687 "clpretty.ch"
                                                                                                                               }
#line 687 "clpretty.ch"
                                                                                                                               {
#line 687 "clpretty.ch"
                                                                                                                               PPTREE _ptTree1= (PPTREE) 0 ;
#line 687 "clpretty.ch"
                                                                                                                               {
#line 687 "clpretty.ch"
                                                                                                                               PPTREE _ptTree2= (PPTREE) 0,_ptRes2= (PPTREE) 0;
#line 687 "clpretty.ch"
                                                                                                                               _ptRes2 = MakeTree(pretty::MARK, 0);
#line 687 "clpretty.ch"
                                                                                                                               _ptTree1 = _ptRes2;
#line 687 "clpretty.ch"
                                                                                                                               }
#line 687 "clpretty.ch"
                                                                                                                               postAttribute =  AddList( postAttribute,_ptTree1);
#line 687 "clpretty.ch"
                                                                                                                               }
#line 687 "clpretty.ch"
                                                                                                                               }
#line 687 "clpretty.ch"
                                                                                                                               
#line 687 "clpretty.ch"
#line 688 "clpretty.ch"
                                                                                                                               
#line 688 "clpretty.ch"
#line 688 "clpretty.ch"
                                                                                                                               }
                                                                                                                               
#line 688 "clpretty.ch"
#line 689 "clpretty.ch"
                                                                                                                               hasIndented = 1 ;
#line 689 "clpretty.ch"
#line 690 "clpretty.ch"
                                                                                                                               PutAttr(currElem, postAttribute, PRE_ATTR, PUT_BEG);
#line 690 "clpretty.ch"
#line 694 "clpretty.ch"
#if 0
#line 694 "clpretty.ch"
#line 695 "clpretty.ch"
                                                                                                                               delta = posRef - x0 - dx ;
#line 695 "clpretty.ch"
#line 695 "clpretty.ch"
                                                                                                                               
#line 695 "clpretty.ch"
#else 
                                                                                                                               delta = posRef - x0 ;
#endif
                                                                                                                               
#line 695 "clpretty.ch"
#line 699 "clpretty.ch"
                                                                                                                               PutCoord(currElem, x + delta, y, dx, dy);
#line 699 "clpretty.ch"
#line 702 "clpretty.ch"
                                                                                                                               TraitMark(currElem, posRef);
#line 702 "clpretty.ch"
#line 703 "clpretty.ch"
                                                                                                                               
#line 703 "clpretty.ch"
#line 703 "clpretty.ch"
                                                                                                                               } else 
#line 703 "clpretty.ch"
#line 704 "clpretty.ch"
                                                                                            (hasToPutVirt=currElem);
#line 704 "clpretty.ch"
                                                                                            
#line 704 "clpretty.ch"
                                                                                        
#line 704 "clpretty.ch"
#line 705 "clpretty.ch"
                                                                                        
#line 705 "clpretty.ch"
#line 705 "clpretty.ch"
                                                                                    }
#line 705 "clpretty.ch"
#line 709 "clpretty.ch"
                            if ( x0 + dx + delta > rightMargin && lastTree ) {
#line 709 "clpretty.ch"
#line 714 "clpretty.ch"
                                                                                    if ( deltaRef < 0 ) {
#line 714 "clpretty.ch"
#line 717 "clpretty.ch"
                                                                                                            {
#line 717 "clpretty.ch"
                                                                                                                PPTREE _ptTree0=(PPTREE) 0;
#line 717 "clpretty.ch"
                                                                                                                _ptTree0 = (PPTREE) 0;
#line 717 "clpretty.ch"
                                                                                                                {
#line 717 "clpretty.ch"
                                                                                                                    PPTREE _ptTree1= (PPTREE) 0 ;
#line 717 "clpretty.ch"
                                                                                                                    {
#line 717 "clpretty.ch"
                                                                                                                        PPTREE _ptTree2= (PPTREE) 0,_ptRes2= (PPTREE) 0;
#line 717 "clpretty.ch"
                                                                                                                        _ptRes2 = MakeTree(pretty::NEWLINE, 1);
#line 717 "clpretty.ch"
                                                                                                                        _ptTree2 = MakeString("1") ;
#line 717 "clpretty.ch"
                                                                                                                        ReplaceTree(_ptRes2, 1, _ptTree2);
#line 717 "clpretty.ch"
                                                                                                                        _ptTree1 = _ptRes2;
#line 717 "clpretty.ch"
                                                                                                                    }
#line 717 "clpretty.ch"
                                                                                                                    _ptTree0 = AddList( _ptTree0,_ptTree1);
#line 717 "clpretty.ch"
                                                                                                                }
#line 717 "clpretty.ch"
                                                                                                                postAttribute = _ptTree0;
#line 717 "clpretty.ch"
                                                                                                                ;
#line 717 "clpretty.ch"
                                                                                                            }
#line 717 "clpretty.ch"
                                                                                                            
#line 717 "clpretty.ch"
#line 718 "clpretty.ch"
                                                                                                            if ( !hasIndented ) {
#line 718 "clpretty.ch"
#line 719 "clpretty.ch"
                                                                                                                                  {
#line 719 "clpretty.ch"
#line 720 "clpretty.ch"
                                                                                                                                  char string [10];
                                                                                                                                  
#line 720 "clpretty.ch"
#line 721 "clpretty.ch"
                                                                                                                                  sprintf(string, "%d", nbTab);
#line 721 "clpretty.ch"
#line 722 "clpretty.ch"
                                                                                                                                  {
#line 722 "clpretty.ch"
                                                                                                                                  PPTREE _ptTree0= (PPTREE) 0 ;
#line 722 "clpretty.ch"
                                                                                                                                  {
#line 722 "clpretty.ch"
                                                                                                                                  PPTREE _ptTree1= (PPTREE) 0 ;
#line 722 "clpretty.ch"
                                                                                                                                  {
#line 722 "clpretty.ch"
                                                                                                                                  PPTREE _ptTree2= (PPTREE) 0,_ptRes2= (PPTREE) 0;
#line 722 "clpretty.ch"
                                                                                                                                  _ptRes2 = MakeTree(pretty::TAB, 1);
#line 722 "clpretty.ch"
                                                                                                                                  _ptTree2 = StoreRef(MakeString(string));
#line 722 "clpretty.ch"
                                                                                                                                  ReplaceTree(_ptRes2, 1, _ptTree2);
#line 722 "clpretty.ch"
                                                                                                                                  _ptTree1 = _ptRes2;
#line 722 "clpretty.ch"
                                                                                                                                  }
#line 722 "clpretty.ch"
                                                                                                                                  postAttribute =  AddList( postAttribute,_ptTree1);
#line 722 "clpretty.ch"
                                                                                                                                  }
#line 722 "clpretty.ch"
                                                                                                                                  {
#line 722 "clpretty.ch"
                                                                                                                                  PPTREE _ptTree1= (PPTREE) 0 ;
#line 722 "clpretty.ch"
                                                                                                                                  {
#line 722 "clpretty.ch"
                                                                                                                                  PPTREE _ptTree2= (PPTREE) 0,_ptRes2= (PPTREE) 0;
#line 722 "clpretty.ch"
                                                                                                                                  _ptRes2 = MakeTree(pretty::MARK, 0);
#line 722 "clpretty.ch"
                                                                                                                                  _ptTree1 = _ptRes2;
#line 722 "clpretty.ch"
                                                                                                                                  }
#line 722 "clpretty.ch"
                                                                                                                                  postAttribute =  AddList( postAttribute,_ptTree1);
#line 722 "clpretty.ch"
                                                                                                                                  }
#line 722 "clpretty.ch"
                                                                                                                                  }
#line 722 "clpretty.ch"
                                                                                                                                  
#line 722 "clpretty.ch"
#line 723 "clpretty.ch"
                                                                                                                                  
#line 723 "clpretty.ch"
#line 723 "clpretty.ch"
                                                                                                                                  }
                                                                                                                                  
#line 723 "clpretty.ch"
#line 724 "clpretty.ch"
                                                                                                                                  hasIndented = 1 ;
#line 724 "clpretty.ch"
#line 725 "clpretty.ch"
                                                                                                                                  
#line 725 "clpretty.ch"
#line 725 "clpretty.ch"
                                                                                                                                  }
#line 725 "clpretty.ch"
#line 726 "clpretty.ch"
                                                                                                            PutAttr(lastTree, postAttribute, POST_ATTR, PUT_END);
#line 726 "clpretty.ch"
#line 729 "clpretty.ch"
                                                                                                            delta = deltaRef ;
#line 729 "clpretty.ch"
#line 730 "clpretty.ch"
                                                                                                            PutCoord(currElem, x + delta, y, dx, dy);
#line 730 "clpretty.ch"
#line 733 "clpretty.ch"
                                                                                                            TraitMark(currElem, posRef);
#line 733 "clpretty.ch"
#line 734 "clpretty.ch"
                                                                                                            
#line 734 "clpretty.ch"
#line 734 "clpretty.ch"
                                                                                                          } else 
#line 734 "clpretty.ch"
                                                                                    {
#line 734 "clpretty.ch"
#line 735 "clpretty.ch"
                                                                                        deltaInhibitIndent = 1 ;
#line 735 "clpretty.ch"
#line 738 "clpretty.ch"
                                                                                        TraitMark(currElem, colRef);
#line 738 "clpretty.ch"
#line 739 "clpretty.ch"
                                                                                        
#line 739 "clpretty.ch"
#line 739 "clpretty.ch"
                                                                                    }
                                                                                    
#line 739 "clpretty.ch"
#line 740 "clpretty.ch"
                                                                                    
#line 740 "clpretty.ch"
#line 740 "clpretty.ch"
                                                                                  } else 
#line 740 "clpretty.ch"
                            if ( hasIndented ) {
#line 740 "clpretty.ch"
#line 743 "clpretty.ch"
                                                    PutCoord(currElem, x + delta, y, dx, dy);
#line 743 "clpretty.ch"
#line 746 "clpretty.ch"
                                                    TraitMark(currElem, posRef);
#line 746 "clpretty.ch"
#line 747 "clpretty.ch"
                                                    
#line 747 "clpretty.ch"
#line 747 "clpretty.ch"
                                                } else 
#line 747 "clpretty.ch"
                            if ( deltaInhibitIndent ) {
#line 747 "clpretty.ch"
#line 750 "clpretty.ch"
                                                        TraitMark(currElem, colRef);
#line 750 "clpretty.ch"
#line 751 "clpretty.ch"
                                                        
#line 751 "clpretty.ch"
#line 751 "clpretty.ch"
                                                       }
#line 751 "clpretty.ch"
#line 758 "clpretty.ch"
                            deltaRef = posRef - x0 - dx ;
#line 758 "clpretty.ch"
#line 759 "clpretty.ch"
                            (lastTree=currElem);
#line 759 "clpretty.ch"
                            
#line 759 "clpretty.ch"
#line 760 "clpretty.ch"
                            
#line 760 "clpretty.ch"
#line 760 "clpretty.ch"
                        }
#line 760 "clpretty.ch"
#line 764 "clpretty.ch"
    if ( hasIndented ) {
#line 764 "clpretty.ch"
#line 765 "clpretty.ch"
                            {
#line 765 "clpretty.ch"
                                PPTREE _ptTree0=(PPTREE) 0;
#line 765 "clpretty.ch"
                                _ptTree0 = (PPTREE) 0;
#line 765 "clpretty.ch"
                                {
#line 765 "clpretty.ch"
                                    PPTREE _ptTree1= (PPTREE) 0 ;
#line 765 "clpretty.ch"
                                    {
#line 765 "clpretty.ch"
                                        PPTREE _ptTree2= (PPTREE) 0,_ptRes2= (PPTREE) 0;
#line 765 "clpretty.ch"
                                        _ptRes2 = MakeTree(pretty::UNMARK, 0);
#line 765 "clpretty.ch"
                                        _ptTree1 = _ptRes2;
#line 765 "clpretty.ch"
                                    }
#line 765 "clpretty.ch"
                                    _ptTree0 = AddList( _ptTree0,_ptTree1);
#line 765 "clpretty.ch"
                                }
#line 765 "clpretty.ch"
                                list = _ptTree0;
#line 765 "clpretty.ch"
                                ;
#line 765 "clpretty.ch"
                            }
#line 765 "clpretty.ch"
                            
#line 765 "clpretty.ch"
#line 766 "clpretty.ch"
                            PutAttr(lastTree, list, POST_ATTR, PUT_END);
#line 766 "clpretty.ch"
#line 767 "clpretty.ch"
                            
#line 767 "clpretty.ch"
#line 767 "clpretty.ch"
                        }
#line 767 "clpretty.ch"
#line 770 "clpretty.ch"
    if ( hasIndented && hasToPutVirt ) {
#line 770 "clpretty.ch"
#line 771 "clpretty.ch"
                                            char    string [10];
                                            
#line 771 "clpretty.ch"
#line 772 "clpretty.ch"
                                            sprintf(string, "%d", colRef);
#line 772 "clpretty.ch"
#line 773 "clpretty.ch"
                                            {
#line 773 "clpretty.ch"
                                                PPTREE _ptTree0=(PPTREE) 0;
#line 773 "clpretty.ch"
                                                _ptTree0 = (PPTREE) 0;
#line 773 "clpretty.ch"
                                                {
#line 773 "clpretty.ch"
                                                    PPTREE _ptTree1= (PPTREE) 0 ;
#line 773 "clpretty.ch"
                                                    {
#line 773 "clpretty.ch"
                                                        PPTREE _ptTree2= (PPTREE) 0,_ptRes2= (PPTREE) 0;
#line 773 "clpretty.ch"
                                                        _ptRes2 = MakeTree(pretty::TAB_VIRT, 2);
#line 773 "clpretty.ch"
                                                        _ptTree2 = StoreRef(MakeString(string));
#line 773 "clpretty.ch"
                                                        ReplaceTree(_ptRes2, 1, _ptTree2);
#line 773 "clpretty.ch"
                                                        _ptTree2 = MakeString("1") ;
#line 773 "clpretty.ch"
                                                        ReplaceTree(_ptRes2, 2, _ptTree2);
#line 773 "clpretty.ch"
                                                        _ptTree1 = _ptRes2;
#line 773 "clpretty.ch"
                                                    }
#line 773 "clpretty.ch"
                                                    _ptTree0 = AddList( _ptTree0,_ptTree1);
#line 773 "clpretty.ch"
                                                }
#line 773 "clpretty.ch"
                                                list = _ptTree0;
#line 773 "clpretty.ch"
                                                ;
#line 773 "clpretty.ch"
                                            }
#line 773 "clpretty.ch"
                                            
#line 773 "clpretty.ch"
#line 774 "clpretty.ch"
                                            PutAttr(hasToPutVirt, list, PRE_ATTR, PUT_END);
#line 774 "clpretty.ch"
#line 775 "clpretty.ch"
                                            
#line 775 "clpretty.ch"
#line 775 "clpretty.ch"
                                         }
#line 775 "clpretty.ch"
#line 778 "clpretty.ch"
    (listElem=tree);
#line 778 "clpretty.ch"
    
#line 778 "clpretty.ch"
#line 779 "clpretty.ch"
    if ( !(((_inter = (PPTREE)tree,1) && 
#line 779 "clpretty.ch"
                (NumberTree(_inter) == LIST) &&
#line 779 "clpretty.ch"
                1)) ) 
#line 779 "clpretty.ch"
#line 780 "clpretty.ch"
        ((_inter = (PPTREE)tree,1) && 
#line 780 "clpretty.ch"
            ((listElem=SonTree(_inter,1)),1) &&
#line 780 "clpretty.ch"
            1);
#line 780 "clpretty.ch"
        ;
#line 780 "clpretty.ch"
#line 781 "clpretty.ch"
    UpdateSize(listElem, OpType(listElem));
#line 781 "clpretty.ch"
#line 784 "clpretty.ch"
    if ( !(((_inter = (PPTREE)tree,1) && 
#line 784 "clpretty.ch"
                (NumberTree(_inter) == LIST) &&
#line 784 "clpretty.ch"
                1)) ) {
#line 784 "clpretty.ch"
#line 785 "clpretty.ch"
                        int yy ;
                        
#line 785 "clpretty.ch"
#line 786 "clpretty.ch"
                        GetCoord(tree, &xRef, &yy, &dx, &posMark);
#line 786 "clpretty.ch"
#line 787 "clpretty.ch"
                        GetCoord(sontree(tree, 1), &x, &y, &dx, &posMark);
#line 787 "clpretty.ch"
#line 790 "clpretty.ch"
                        if ( !(yy & 0x2) ) 
#line 790 "clpretty.ch"
#line 791 "clpretty.ch"
                            PutCoord(tree, xRef, y, x + dx, posMark);
#line 791 "clpretty.ch"
#line 792 "clpretty.ch"
                        
#line 792 "clpretty.ch"
#line 792 "clpretty.ch"
                      }
#line 792 "clpretty.ch"
#line 795 "clpretty.ch"
    UnMarkCoordTree(tree);
#line 795 "clpretty.ch"
#line 796 "clpretty.ch"
    nbTab = oldNbTab ;
#line 796 "clpretty.ch"
#line 797 "clpretty.ch"
    
#line 797 "clpretty.ch"
#line 797 "clpretty.ch"
}
#line 797 "clpretty.ch"

#line 801 "clpretty.ch"

#line 801 "clpretty.ch"
void clpretty::TraiterMonoParam ( PTREE tree, int x0 )
#line 801 "clpretty.ch"
{
#line 801 "clpretty.ch"
    register PPTREE _inter ;
#line 801 "clpretty.ch"

#line 801 "clpretty.ch"
#line 801 "clpretty.ch"
    int _nextVal ;
    
#line 801 "clpretty.ch"
#line 804 "clpretty.ch"
    
    PTREE   list, inter ;
#line 804 "clpretty.ch"
    
#line 804 "clpretty.ch"
#line 805 "clpretty.ch"
    PTREE   postAttribute ;
#line 805 "clpretty.ch"
    
#line 805 "clpretty.ch"
#line 806 "clpretty.ch"
    
    int y0 ;
    
#line 806 "clpretty.ch"
#line 807 "clpretty.ch"
    int x, y, dx ;
    
#line 807 "clpretty.ch"
#line 808 "clpretty.ch"
    int xRef ;
    
#line 808 "clpretty.ch"
#line 809 "clpretty.ch"
    int posMark ;
    
#line 809 "clpretty.ch"
#line 810 "clpretty.ch"
    PTREE   listElem ;
#line 810 "clpretty.ch"
    
#line 810 "clpretty.ch"
#line 811 "clpretty.ch"
    
    PTREE   refTree ;
#line 811 "clpretty.ch"
    
#line 811 "clpretty.ch"
#line 812 "clpretty.ch"
    
    PTREE   lastTree ;
#line 812 "clpretty.ch"
    
#line 812 "clpretty.ch"
#line 813 "clpretty.ch"
    
    int posRef ;
    
#line 813 "clpretty.ch"
#line 815 "clpretty.ch"
    
    int colRef ;
    
#line 815 "clpretty.ch"
#line 816 "clpretty.ch"
    
    PTREE   father ;
#line 816 "clpretty.ch"
    
#line 816 "clpretty.ch"
#line 817 "clpretty.ch"
    
    int rank ;
    
#line 817 "clpretty.ch"
#line 818 "clpretty.ch"
    
    int hasIndented = 0 ;
    
#line 818 "clpretty.ch"
#line 820 "clpretty.ch"
    
    int deltaInhibitIndent = 0 ;
    
#line 820 "clpretty.ch"
#line 822 "clpretty.ch"
    
    int delta ;
    
#line 822 "clpretty.ch"
#line 824 "clpretty.ch"
    
    int deltaRef ;
    
#line 824 "clpretty.ch"
#line 826 "clpretty.ch"
    
    int ret = 1 ;
    
#line 826 "clpretty.ch"
#line 827 "clpretty.ch"
    
    int oldNbTab = nbTab ;
    
#line 827 "clpretty.ch"
#line 828 "clpretty.ch"
    
    int rightX = 0 ;
    
#line 828 "clpretty.ch"
#line 829 "clpretty.ch"
    
    PTREE   hasToPutVirt = (PTREE)0 ;
#line 829 "clpretty.ch"
    
#line 829 "clpretty.ch"
#line 829 "clpretty.ch"
    hasToPutVirt = (PPTREE) 0 ;
#line 829 "clpretty.ch"
    
#line 829 "clpretty.ch"
#line 832 "clpretty.ch"
    GetCoord(tree, &x, &y, &dx, &colRef);
#line 832 "clpretty.ch"
#line 833 "clpretty.ch"
    x0 += x ;
#line 833 "clpretty.ch"
#line 834 "clpretty.ch"
    if ( x0 + dx <= rightMargin ) 
#line 834 "clpretty.ch"
#line 835 "clpretty.ch"
        return ;
    
#line 835 "clpretty.ch"
#line 838 "clpretty.ch"
    nbTab = 1 ;
#line 838 "clpretty.ch"
#line 839 "clpretty.ch"
    if ( colRef != markTab ) 
#line 839 "clpretty.ch"
#line 840 "clpretty.ch"
        nbTab = 0 ;
#line 840 "clpretty.ch"
#line 841 "clpretty.ch"
    nbTab += 1 ;
#line 841 "clpretty.ch"
#line 842 "clpretty.ch"
    posRef = TAB_VALUE(colRef, nbTab);
#line 842 "clpretty.ch"
#line 843 "clpretty.ch"
    delta = 0 ;
#line 843 "clpretty.ch"
#line 847 "clpretty.ch"
    {
#line 847 "clpretty.ch"
#line 847 "clpretty.ch"
        {
#line 847 "clpretty.ch"
            PPTREE _ptTree0=(PPTREE) 0;
#line 847 "clpretty.ch"
            _ptTree0 = (PPTREE) 0;
#line 847 "clpretty.ch"
            {
#line 847 "clpretty.ch"
                PPTREE _ptTree1= (PPTREE) 0 ;
#line 847 "clpretty.ch"
                {
#line 847 "clpretty.ch"
                    PPTREE _ptTree2= (PPTREE) 0,_ptRes2= (PPTREE) 0;
#line 847 "clpretty.ch"
                    _ptRes2 = MakeTree(pretty::NEWLINE, 1);
#line 847 "clpretty.ch"
                    _ptTree2 = MakeString("1") ;
#line 847 "clpretty.ch"
                    ReplaceTree(_ptRes2, 1, _ptTree2);
#line 847 "clpretty.ch"
                    _ptTree1 = _ptRes2;
#line 847 "clpretty.ch"
                }
#line 847 "clpretty.ch"
                _ptTree0 = AddList( _ptTree0,_ptTree1);
#line 847 "clpretty.ch"
            }
#line 847 "clpretty.ch"
            postAttribute = _ptTree0;
#line 847 "clpretty.ch"
            ;
#line 847 "clpretty.ch"
        }
#line 847 "clpretty.ch"
        
#line 847 "clpretty.ch"
#line 849 "clpretty.ch"
        {
#line 849 "clpretty.ch"
#line 849 "clpretty.ch"
            char    string [10];
            
#line 849 "clpretty.ch"
#line 850 "clpretty.ch"
            sprintf(string, "%d", nbTab);
#line 850 "clpretty.ch"
#line 851 "clpretty.ch"
            {
#line 851 "clpretty.ch"
                PPTREE _ptTree0= (PPTREE) 0 ;
#line 851 "clpretty.ch"
                {
#line 851 "clpretty.ch"
                    PPTREE _ptTree1= (PPTREE) 0 ;
#line 851 "clpretty.ch"
                    {
#line 851 "clpretty.ch"
                        PPTREE _ptTree2= (PPTREE) 0,_ptRes2= (PPTREE) 0;
#line 851 "clpretty.ch"
                        _ptRes2 = MakeTree(pretty::TAB, 1);
#line 851 "clpretty.ch"
                        _ptTree2 = StoreRef(MakeString(string));
#line 851 "clpretty.ch"
                        ReplaceTree(_ptRes2, 1, _ptTree2);
#line 851 "clpretty.ch"
                        _ptTree1 = _ptRes2;
#line 851 "clpretty.ch"
                    }
#line 851 "clpretty.ch"
                    postAttribute =  AddList( postAttribute,_ptTree1);
#line 851 "clpretty.ch"
                }
#line 851 "clpretty.ch"
                {
#line 851 "clpretty.ch"
                    PPTREE _ptTree1= (PPTREE) 0 ;
#line 851 "clpretty.ch"
                    {
#line 851 "clpretty.ch"
                        PPTREE _ptTree2= (PPTREE) 0,_ptRes2= (PPTREE) 0;
#line 851 "clpretty.ch"
                        _ptRes2 = MakeTree(pretty::MARK, 0);
#line 851 "clpretty.ch"
                        _ptTree1 = _ptRes2;
#line 851 "clpretty.ch"
                    }
#line 851 "clpretty.ch"
                    postAttribute =  AddList( postAttribute,_ptTree1);
#line 851 "clpretty.ch"
                }
#line 851 "clpretty.ch"
            }
#line 851 "clpretty.ch"
            
#line 851 "clpretty.ch"
#line 852 "clpretty.ch"
            
#line 852 "clpretty.ch"
#line 852 "clpretty.ch"
        }
        
#line 852 "clpretty.ch"
#line 853 "clpretty.ch"
        hasIndented = 1 ;
#line 853 "clpretty.ch"
#line 854 "clpretty.ch"
        PutAttr(tree, postAttribute, PRE_ATTR, PUT_BEG);
#line 854 "clpretty.ch"
#line 857 "clpretty.ch"
        delta = posRef - x0 ;
#line 857 "clpretty.ch"
#line 858 "clpretty.ch"
        PutCoord(tree, x + delta, y, dx, colRef);
#line 858 "clpretty.ch"
#line 861 "clpretty.ch"
        TraitMark(tree, posRef);
#line 861 "clpretty.ch"
#line 862 "clpretty.ch"
        
#line 862 "clpretty.ch"
#line 862 "clpretty.ch"
    }
    
#line 862 "clpretty.ch"
#line 863 "clpretty.ch"
    {
#line 863 "clpretty.ch"
        PPTREE _ptTree0=(PPTREE) 0;
#line 863 "clpretty.ch"
        _ptTree0 = (PPTREE) 0;
#line 863 "clpretty.ch"
        {
#line 863 "clpretty.ch"
            PPTREE _ptTree1= (PPTREE) 0 ;
#line 863 "clpretty.ch"
            {
#line 863 "clpretty.ch"
                PPTREE _ptTree2= (PPTREE) 0,_ptRes2= (PPTREE) 0;
#line 863 "clpretty.ch"
                _ptRes2 = MakeTree(pretty::UNMARK, 0);
#line 863 "clpretty.ch"
                _ptTree1 = _ptRes2;
#line 863 "clpretty.ch"
            }
#line 863 "clpretty.ch"
            _ptTree0 = AddList( _ptTree0,_ptTree1);
#line 863 "clpretty.ch"
        }
#line 863 "clpretty.ch"
        list = _ptTree0;
#line 863 "clpretty.ch"
        ;
#line 863 "clpretty.ch"
    }
#line 863 "clpretty.ch"
    
#line 863 "clpretty.ch"
#line 864 "clpretty.ch"
    PutAttr(tree, list, POST_ATTR, PUT_END);
#line 864 "clpretty.ch"
#line 865 "clpretty.ch"
    nbTab = oldNbTab ;
#line 865 "clpretty.ch"
#line 866 "clpretty.ch"
    
#line 866 "clpretty.ch"
#line 866 "clpretty.ch"
}
#line 866 "clpretty.ch"

#line 869 "clpretty.ch"

#line 869 "clpretty.ch"
void clpretty::TraiterExpListParam ( PTREE tree, int x0 )
#line 869 "clpretty.ch"
{
#line 869 "clpretty.ch"
#line 869 "clpretty.ch"
    int _nextVal ;
    
#line 869 "clpretty.ch"
#line 872 "clpretty.ch"
    TraiterExpList(tree, x0, 1, 1);
#line 872 "clpretty.ch"
#line 873 "clpretty.ch"
    
#line 873 "clpretty.ch"
#line 873 "clpretty.ch"
}
#line 873 "clpretty.ch"

#line 877 "clpretty.ch"

#line 877 "clpretty.ch"
void clpretty::Treat ( PTREE tree )
#line 877 "clpretty.ch"
{
#line 877 "clpretty.ch"
    register PPTREE _inter ;
#line 877 "clpretty.ch"

#line 877 "clpretty.ch"
#line 877 "clpretty.ch"
    int _nextVal ;
    
#line 877 "clpretty.ch"
#line 880 "clpretty.ch"
    
    int oldNbTab = nbTab ;
    
#line 880 "clpretty.ch"
#line 881 "clpretty.ch"
    int x, y, dx, dy ;
    
#line 881 "clpretty.ch"
#line 882 "clpretty.ch"
    int x0, y0 ;
    
#line 882 "clpretty.ch"
#line 883 "clpretty.ch"
    PTREE   content ;
#line 883 "clpretty.ch"
    
#line 883 "clpretty.ch"
#line 886 "clpretty.ch"
    DecompVirt(tree);
#line 886 "clpretty.ch"
#line 887 "clpretty.ch"
    CompleteCoordinates(tree);
#line 887 "clpretty.ch"
#line 888 "clpretty.ch"
    if ( ((_inter = (PPTREE)tree,1) && 
#line 888 "clpretty.ch"
            (NumberTree(_inter) == pretty::ATTRIBUTS) &&
#line 888 "clpretty.ch"
            1) ) 
#line 888 "clpretty.ch"
#line 889 "clpretty.ch"
        FreeCoord(tree);
#line 889 "clpretty.ch"
#line 892 "clpretty.ch"
    nbTab = 0 ;
#line 892 "clpretty.ch"
#line 893 "clpretty.ch"
    if ( FatherTree(tree) ) {
#line 893 "clpretty.ch"
#line 894 "clpretty.ch"
                                GetCoord(tree, &x, &y, &dx, &dy);
#line 894 "clpretty.ch"
#line 895 "clpretty.ch"
                                TreatGeometry(tree, -x + 3);
#line 895 "clpretty.ch"
#line 896 "clpretty.ch"
                                
#line 896 "clpretty.ch"
#line 896 "clpretty.ch"
                             } else 
#line 896 "clpretty.ch"
#line 897 "clpretty.ch"
        TreatGeometry(tree, 0);
#line 897 "clpretty.ch"
    
#line 897 "clpretty.ch"
#line 900 "clpretty.ch"
    nbTab = oldNbTab ;
#line 900 "clpretty.ch"
#line 901 "clpretty.ch"
    
#line 901 "clpretty.ch"
#line 901 "clpretty.ch"
}
#line 901 "clpretty.ch"

#line 906 "clpretty.ch"

#line 906 "clpretty.ch"
void clpretty::TreatGeometryDepth ( PTREE tree, int x0, unsigned int depth )
#line 906 "clpretty.ch"
{
#line 906 "clpretty.ch"
    register PPTREE _inter ;
#line 906 "clpretty.ch"

#line 906 "clpretty.ch"
#line 906 "clpretty.ch"
    int _nextVal ;
    
#line 906 "clpretty.ch"
#line 909 "clpretty.ch"
    
    int x, y, dx, posMark ;
    
#line 909 "clpretty.ch"
#line 910 "clpretty.ch"
    int xRef, yRef, dxRef, posMarkRef ;
    
#line 910 "clpretty.ch"
#line 911 "clpretty.ch"
    int success = 0 ;
    
#line 911 "clpretty.ch"
#line 912 "clpretty.ch"
    
    PTREE   preAttribute ;
#line 912 "clpretty.ch"
    
#line 912 "clpretty.ch"
#line 913 "clpretty.ch"
    PTREE   elem ;
#line 913 "clpretty.ch"
    
#line 913 "clpretty.ch"
#line 914 "clpretty.ch"
    PTREE   list ;
#line 914 "clpretty.ch"
    
#line 914 "clpretty.ch"
#line 915 "clpretty.ch"
    PTREE   tree1, tree2 ;
#line 915 "clpretty.ch"
    
#line 915 "clpretty.ch"
#line 918 "clpretty.ch"
    if ( depth > 1024 ) 
#line 918 "clpretty.ch"
#line 919 "clpretty.ch"
        return ;
    
#line 919 "clpretty.ch"
#line 920 "clpretty.ch"
    depth += 1 ;
#line 920 "clpretty.ch"
#line 923 "clpretty.ch"
    if ( GetCoordOrg(tree, &x, &y, &dx, &posMark) ) {
#line 923 "clpretty.ch"
#line 926 "clpretty.ch"
                                                                if ( x0 + x + dx > rightMargin ) {
#line 926 "clpretty.ch"
#line 931 "clpretty.ch"
                                                                                                        if ( !(y & 0x1) ) {
#line 931 "clpretty.ch"
#line 932 "clpretty.ch"
                                                                                                                              switch ( OpTypeAlign(tree) ) {
#line 932 "clpretty.ch"
#line 933 "clpretty.ch"
                                                                                                                              case H_ALIGN : 
#line 933 "clpretty.ch"
#line 934 "clpretty.ch"
                                                                                                                              TraiterExp2H(tree, x0);
#line 934 "clpretty.ch"
#line 935 "clpretty.ch"
                                                                                                                              break ;
                                                                                                                              
#line 935 "clpretty.ch"
#line 936 "clpretty.ch"
                                                                                                                              case V_ALIGN : 
#line 936 "clpretty.ch"
#line 937 "clpretty.ch"
                                                                                                                              TraiterExp2V(tree, x0);
#line 937 "clpretty.ch"
#line 938 "clpretty.ch"
                                                                                                                              break ;
                                                                                                                              
#line 938 "clpretty.ch"
#line 939 "clpretty.ch"
                                                                                                                              case COND_ALIGN : 
#line 939 "clpretty.ch"
#line 940 "clpretty.ch"
                                                                                                                              TraiterExp3(tree, x0);
#line 940 "clpretty.ch"
#line 941 "clpretty.ch"
                                                                                                                              break ;
                                                                                                                              
#line 941 "clpretty.ch"
#line 942 "clpretty.ch"
                                                                                                                              case LIST_ALIGN : 
#line 942 "clpretty.ch"
#line 943 "clpretty.ch"
                                                                                                                              TraiterExpList(tree, x0);
#line 943 "clpretty.ch"
#line 944 "clpretty.ch"
                                                                                                                              break ;
                                                                                                                              
#line 944 "clpretty.ch"
                                                                                                                              }
#line 944 "clpretty.ch"
                                                                                                                              
#line 944 "clpretty.ch"
#line 946 "clpretty.ch"
                                                                                                                              
#line 946 "clpretty.ch"
#line 946 "clpretty.ch"
                                                                                                                              }
#line 946 "clpretty.ch"
#line 950 "clpretty.ch"
                                                                                                        if ( TreatGeometrySpecific(tree, x0, x) ) {
#line 950 "clpretty.ch"
#line 951 "clpretty.ch"
                                                                                                                                                      int maxDx = 0 ;
                                                                                                                                                      
#line 951 "clpretty.ch"
#line 952 "clpretty.ch"
                                                                                                                                                      GetCoord(tree, &xRef, &yRef, &dxRef, &posMarkRef);
#line 952 "clpretty.ch"
#line 953 "clpretty.ch"
                                                                                                                                                      {
#line 953 "clpretty.ch"
#line 953 "clpretty.ch"
                                                                                                                                                      int _for_slot = 1, _arity = treearity(tree);
                                                                                                                                                      
#line 953 "clpretty.ch"
#line 953 "clpretty.ch"
                                                                                                                                                      MY_TREE _for_elem = (PPTREE)0 ;
                                                                                                                                                      
#line 953 "clpretty.ch"
#line 953 "clpretty.ch"
#line 953 "clpretty.ch"
                                                                                                                                                      for (; _for_slot <= _arity ; _for_slot++ ) {
#line 953 "clpretty.ch"
#line 953 "clpretty.ch"
                                                                                                                                                      _for_elem = SonTree(tree, _for_slot);
#line 953 "clpretty.ch"
#line 953 "clpretty.ch"
                                                                                                                                                      if ( _for_elem && NumberTree(_for_elem) != IN_LANGUAGE ) {
#line 953 "clpretty.ch"
#line 953 "clpretty.ch"
                                                                                                                                                      (elem=for_elem);
#line 953 "clpretty.ch"
                                                                                                                                                      
#line 953 "clpretty.ch"
#line 953 "clpretty.ch"
                                                                                                                                                      dx = GetBoxSize(elem);
#line 953 "clpretty.ch"
#line 953 "clpretty.ch"
                                                                                                                                                      if ( dx > maxDx ) 
#line 953 "clpretty.ch"
#line 953 "clpretty.ch"
                                                                                                                                                      maxDx = dx ;
#line 953 "clpretty.ch"
#line 953 "clpretty.ch"
                                                                                                                                                      
#line 953 "clpretty.ch"
#line 953 "clpretty.ch"
                                                                                                                                                      }
#line 953 "clpretty.ch"
#line 953 "clpretty.ch"
                                                                                                                                                      
#line 953 "clpretty.ch"
#line 953 "clpretty.ch"
                                                                                                                                                      }
#line 953 "clpretty.ch"
                                                                                                                                                      
#line 953 "clpretty.ch"
#line 953 "clpretty.ch"
                                                                                                                                                      
#line 953 "clpretty.ch"
#line 953 "clpretty.ch"
                                                                                                                                                      }
#line 953 "clpretty.ch"
#line 959 "clpretty.ch"
                                                                                                                                                      PutCoord(tree, xRef, yRef |= 1, maxDx, posMarkRef);
#line 959 "clpretty.ch"
#line 960 "clpretty.ch"
                                                                                                                                                      
#line 960 "clpretty.ch"
#line 960 "clpretty.ch"
                                                                                                                                                      }
#line 960 "clpretty.ch"
#line 963 "clpretty.ch"
                                                                                                        if ( treearity(tree) > 0 ) {
#line 963 "clpretty.ch"
#line 964 "clpretty.ch"
                                                                                                                                      GetCoord(tree, &xRef, &yRef, &dxRef, &posMarkRef);
#line 964 "clpretty.ch"
#line 965 "clpretty.ch"
                                                                                                                                      if ( x0 + xRef + dxRef > rightMargin ) {
#line 965 "clpretty.ch"
#line 966 "clpretty.ch"
                                                                                                                                                                                 int maxDx = 0 ;
                                                                                                                                                                                 
#line 966 "clpretty.ch"
#line 967 "clpretty.ch"
                                                                                                                                                                                 {
#line 967 "clpretty.ch"
#line 967 "clpretty.ch"
                                                                                                                                                                                 int _for_slot = 1, _arity = treearity(tree);
                                                                                                                                                                                 
#line 967 "clpretty.ch"
#line 967 "clpretty.ch"
                                                                                                                                                                                 MY_TREE _for_elem = (PPTREE)0 ;
                                                                                                                                                                                 
#line 967 "clpretty.ch"
#line 967 "clpretty.ch"
#line 967 "clpretty.ch"
                                                                                                                                                                                 for (; _for_slot <= _arity ; _for_slot++ ) {
#line 967 "clpretty.ch"
#line 967 "clpretty.ch"
                                                                                                                                                                                 _for_elem = SonTree(tree, _for_slot);
#line 967 "clpretty.ch"
#line 967 "clpretty.ch"
                                                                                                                                                                                 if ( _for_elem && NumberTree(_for_elem) != IN_LANGUAGE ) {
#line 967 "clpretty.ch"
#line 967 "clpretty.ch"
                                                                                                                                                                                 (elem=for_elem);
#line 967 "clpretty.ch"
                                                                                                                                                                                 
#line 967 "clpretty.ch"
#line 967 "clpretty.ch"
                                                                                                                                                                                 TreatGeometryDepth(elem, x0 + xRef, depth);
#line 967 "clpretty.ch"
#line 967 "clpretty.ch"
                                                                                                                                                                                 dx = GetBoxSize(elem);
#line 967 "clpretty.ch"
#line 967 "clpretty.ch"
                                                                                                                                                                                 if ( dx > maxDx ) 
#line 967 "clpretty.ch"
#line 967 "clpretty.ch"
                                                                                                                                                                                 maxDx = dx ;
#line 967 "clpretty.ch"
#line 967 "clpretty.ch"
                                                                                                                                                                                 
#line 967 "clpretty.ch"
#line 967 "clpretty.ch"
                                                                                                                                                                                 }
#line 967 "clpretty.ch"
#line 967 "clpretty.ch"
                                                                                                                                                                                 
#line 967 "clpretty.ch"
#line 967 "clpretty.ch"
                                                                                                                                                                                 }
#line 967 "clpretty.ch"
                                                                                                                                                                                 
#line 967 "clpretty.ch"
#line 967 "clpretty.ch"
                                                                                                                                                                                 
#line 967 "clpretty.ch"
#line 967 "clpretty.ch"
                                                                                                                                                                                 }
#line 967 "clpretty.ch"
#line 974 "clpretty.ch"
                                                                                                                                                                                 PutCoord(tree, xRef, yRef |= 1, maxDx, posMarkRef);
#line 974 "clpretty.ch"
#line 975 "clpretty.ch"
                                                                                                                                                                                 
#line 975 "clpretty.ch"
#line 975 "clpretty.ch"
                                                                                                                                                                                 }
#line 975 "clpretty.ch"
#line 976 "clpretty.ch"
                                                                                                                                      
#line 976 "clpretty.ch"
#line 976 "clpretty.ch"
                                                                                                                                      }
#line 976 "clpretty.ch"
#line 979 "clpretty.ch"
                                                                                                        GetCoord(tree, &xRef, &yRef, &dxRef, &posMarkRef);
#line 979 "clpretty.ch"
#line 980 "clpretty.ch"
                                                                                                        if ( x0 + xRef + dxRef > rightMargin ) {
#line 980 "clpretty.ch"
#line 981 "clpretty.ch"
                                                                                                                                                   if ( IsTop(tree) != -1 && x0 + xRef > 3 ) {
#line 981 "clpretty.ch"
#line 984 "clpretty.ch"
                                                                                                                                                                                                    CleanAttributs(tree);
#line 984 "clpretty.ch"
#line 987 "clpretty.ch"
                                                                                                                                                                                                    {
#line 987 "clpretty.ch"
                                                                                                                                                                                                    PPTREE _ptTree0=(PPTREE) 0;
#line 987 "clpretty.ch"
                                                                                                                                                                                                    _ptTree0 = (PPTREE) 0;
#line 987 "clpretty.ch"
                                                                                                                                                                                                    {
#line 987 "clpretty.ch"
                                                                                                                                                                                                    PPTREE _ptTree1= (PPTREE) 0 ;
#line 987 "clpretty.ch"
                                                                                                                                                                                                    {
#line 987 "clpretty.ch"
                                                                                                                                                                                                    PPTREE _ptTree2= (PPTREE) 0,_ptRes2= (PPTREE) 0;
#line 987 "clpretty.ch"
                                                                                                                                                                                                    _ptRes2 = MakeTree(pretty::GOTO, 1);
#line 987 "clpretty.ch"
                                                                                                                                                                                                    _ptTree2 = MakeString("3") ;
#line 987 "clpretty.ch"
                                                                                                                                                                                                    ReplaceTree(_ptRes2, 1, _ptTree2);
#line 987 "clpretty.ch"
                                                                                                                                                                                                    _ptTree1 = _ptRes2;
#line 987 "clpretty.ch"
                                                                                                                                                                                                    }
#line 987 "clpretty.ch"
                                                                                                                                                                                                    _ptTree0 = AddList( _ptTree0,_ptTree1);
#line 987 "clpretty.ch"
                                                                                                                                                                                                    }
#line 987 "clpretty.ch"
                                                                                                                                                                                                    {
#line 987 "clpretty.ch"
                                                                                                                                                                                                    PPTREE _ptTree1= (PPTREE) 0 ;
#line 987 "clpretty.ch"
                                                                                                                                                                                                    {
#line 987 "clpretty.ch"
                                                                                                                                                                                                    PPTREE _ptTree2= (PPTREE) 0,_ptRes2= (PPTREE) 0;
#line 987 "clpretty.ch"
                                                                                                                                                                                                    _ptRes2 = MakeTree(pretty::MARK, 0);
#line 987 "clpretty.ch"
                                                                                                                                                                                                    _ptTree1 = _ptRes2;
#line 987 "clpretty.ch"
                                                                                                                                                                                                    }
#line 987 "clpretty.ch"
                                                                                                                                                                                                    _ptTree0 = AddList( _ptTree0,_ptTree1);
#line 987 "clpretty.ch"
                                                                                                                                                                                                    }
#line 987 "clpretty.ch"
                                                                                                                                                                                                    list = _ptTree0;
#line 987 "clpretty.ch"
                                                                                                                                                                                                    ;
#line 987 "clpretty.ch"
                                                                                                                                                                                                    }
#line 987 "clpretty.ch"
                                                                                                                                                                                                    
#line 987 "clpretty.ch"
#line 988 "clpretty.ch"
                                                                                                                                                                                                    PutAttr(tree, list, PRE_ATTR, PUT_END);
#line 988 "clpretty.ch"
#line 989 "clpretty.ch"
                                                                                                                                                                                                    {
#line 989 "clpretty.ch"
                                                                                                                                                                                                    PPTREE _ptTree0=(PPTREE) 0;
#line 989 "clpretty.ch"
                                                                                                                                                                                                    _ptTree0 = (PPTREE) 0;
#line 989 "clpretty.ch"
                                                                                                                                                                                                    {
#line 989 "clpretty.ch"
                                                                                                                                                                                                    PPTREE _ptTree1= (PPTREE) 0 ;
#line 989 "clpretty.ch"
                                                                                                                                                                                                    {
#line 989 "clpretty.ch"
                                                                                                                                                                                                    PPTREE _ptTree2= (PPTREE) 0,_ptRes2= (PPTREE) 0;
#line 989 "clpretty.ch"
                                                                                                                                                                                                    _ptRes2 = MakeTree(pretty::UNMARK, 0);
#line 989 "clpretty.ch"
                                                                                                                                                                                                    _ptTree1 = _ptRes2;
#line 989 "clpretty.ch"
                                                                                                                                                                                                    }
#line 989 "clpretty.ch"
                                                                                                                                                                                                    _ptTree0 = AddList( _ptTree0,_ptTree1);
#line 989 "clpretty.ch"
                                                                                                                                                                                                    }
#line 989 "clpretty.ch"
                                                                                                                                                                                                    list = _ptTree0;
#line 989 "clpretty.ch"
                                                                                                                                                                                                    ;
#line 989 "clpretty.ch"
                                                                                                                                                                                                    }
#line 989 "clpretty.ch"
                                                                                                                                                                                                    
#line 989 "clpretty.ch"
#line 990 "clpretty.ch"
                                                                                                                                                                                                    PutAttr(tree, list, POST_ATTR, PUT_END);
#line 990 "clpretty.ch"
#line 993 "clpretty.ch"
                                                                                                                                                                                                    Treat(FatherTree(tree));
#line 993 "clpretty.ch"
#line 996 "clpretty.ch"
                                                                                                                                                                                                    GetCoord(tree, &xRef, &yRef, &dxRef, &posMarkRef);
#line 996 "clpretty.ch"
#line 997 "clpretty.ch"
                                                                                                                                                                                                    PutCoord(tree, xRef, yRef, 3, posMarkRef);
#line 997 "clpretty.ch"
#line 998 "clpretty.ch"
                                                                                                                                                                                                    
#line 998 "clpretty.ch"
#line 998 "clpretty.ch"
                                                                                                                                                                                                    }
#line 998 "clpretty.ch"
#line 999 "clpretty.ch"
                                                                                                                                                   
#line 999 "clpretty.ch"
#line 999 "clpretty.ch"
                                                                                                                                                   }
#line 999 "clpretty.ch"
#line 1000 "clpretty.ch"
                                                                                                        
#line 1000 "clpretty.ch"
#line 1000 "clpretty.ch"
                                                                                                     }
#line 1000 "clpretty.ch"
#line 1001 "clpretty.ch"
                                                                
#line 1001 "clpretty.ch"
#line 1001 "clpretty.ch"
                                                              } else 
#line 1001 "clpretty.ch"
    if ( ((_inter = (PPTREE)tree,1) && 
#line 1001 "clpretty.ch"
            (NumberTree(_inter) == pretty::ATTRIBUTS) &&
#line 1001 "clpretty.ch"
            ((tree=SonTree(_inter,1)),1) &&
#line 1001 "clpretty.ch"
            ((preAttribute=SonTree(_inter,2)),1) &&
#line 1001 "clpretty.ch"
            1) ) {
#line 1001 "clpretty.ch"
#line 1002 "clpretty.ch"
                    int gotTabVirt = 0 ;
                    
#line 1002 "clpretty.ch"
#line 1003 "clpretty.ch"
                    int oldNbTab = nbTab ;
                    
#line 1003 "clpretty.ch"
#line 1004 "clpretty.ch"
                    int oldMarkTab = markTab ;
                    
#line 1004 "clpretty.ch"
#line 1005 "clpretty.ch"
                    PTREE   elem ;
#line 1005 "clpretty.ch"
                    
#line 1005 "clpretty.ch"
#line 1006 "clpretty.ch"
                    while ( ((elem=(preAttribute?preAttribute.Nextl():(PPTREE)0))) ) {
#line 1006 "clpretty.ch"
#line 1007 "clpretty.ch"
                                                                                            switch ( NumberTree(elem) ) {
#line 1007 "clpretty.ch"
#line 1009 "clpretty.ch"
                                                                                                case pretty::TAB_VIRT : 
#line 1009 "clpretty.ch"
#line 1009 "clpretty.ch"
                                                                                                    (tree1=SonTree(elem, 1));
#line 1009 "clpretty.ch"
                                                                                                    
#line 1009 "clpretty.ch"
#line 1009 "clpretty.ch"
                                                                                                    (tree2=SonTree(elem, 2));
#line 1009 "clpretty.ch"
                                                                                                    
#line 1009 "clpretty.ch"
#line 1009 "clpretty.ch"
                                                                                                _Case1 : 
#line 1009 "clpretty.ch"
#line 1009 "clpretty.ch"
                                                                                                    ;
#line 1009 "clpretty.ch"
#line 1009 "clpretty.ch"
                                                                                                    gotTabVirt = 1 ;
#line 1009 "clpretty.ch"
#line 1010 "clpretty.ch"
                                                                                                    break ;
                                                                                                    
#line 1010 "clpretty.ch"
                                                                                            }
#line 1010 "clpretty.ch"
                                                                                            
#line 1010 "clpretty.ch"
#line 1012 "clpretty.ch"
                                                                                            
#line 1012 "clpretty.ch"
#line 1012 "clpretty.ch"
                                                                                          }
#line 1012 "clpretty.ch"
#line 1013 "clpretty.ch"
                    if ( gotTabVirt ) {
#line 1013 "clpretty.ch"
#line 1014 "clpretty.ch"
                                        GetCoord(tree, &x, &y, &dx, &posMark);
#line 1014 "clpretty.ch"
#line 1015 "clpretty.ch"
                                        markTab = atoi(Value(tree1));
#line 1015 "clpretty.ch"
#line 1016 "clpretty.ch"
                                        if ( oldMarkTab == -1 || posMark == oldMarkTab ) 
#line 1016 "clpretty.ch"
#line 1017 "clpretty.ch"
                                            nbTab += atoi(Value(tree2));
#line 1017 "clpretty.ch"
                                        else 
#line 1017 "clpretty.ch"
#line 1019 "clpretty.ch"
                                            nbTab = 1 ;
#line 1019 "clpretty.ch"
                                        
#line 1019 "clpretty.ch"
#line 1020 "clpretty.ch"
                                        
#line 1020 "clpretty.ch"
#line 1020 "clpretty.ch"
                                       }
#line 1020 "clpretty.ch"
#line 1021 "clpretty.ch"
                    TreatGeometry(tree, x0);
#line 1021 "clpretty.ch"
#line 1024 "clpretty.ch"
                    nbTab = oldNbTab ;
#line 1024 "clpretty.ch"
#line 1025 "clpretty.ch"
                    markTab = oldMarkTab ;
#line 1025 "clpretty.ch"
#line 1026 "clpretty.ch"
                    
#line 1026 "clpretty.ch"
#line 1026 "clpretty.ch"
                 }
#line 1026 "clpretty.ch"
#line 1027 "clpretty.ch"
    
#line 1027 "clpretty.ch"
#line 1027 "clpretty.ch"
}
#line 1027 "clpretty.ch"

#line 1031 "clpretty.ch"

#line 1031 "clpretty.ch"
void clpretty::UpdateSize ( PTREE tree, int type )
#line 1031 "clpretty.ch"
{
#line 1031 "clpretty.ch"
#line 1031 "clpretty.ch"
    int _nextVal ;
    
#line 1031 "clpretty.ch"
#line 1034 "clpretty.ch"
    
    int x, y, dx, dy ;
    
#line 1034 "clpretty.ch"
#line 1035 "clpretty.ch"
    int maxDx ;
    
#line 1035 "clpretty.ch"
#line 1036 "clpretty.ch"
    int xRef, yRef, dxRef, dyRef ;
    
#line 1036 "clpretty.ch"
#line 1038 "clpretty.ch"
    if ( OpType(tree) == type ) {
#line 1038 "clpretty.ch"
#line 1041 "clpretty.ch"
                                    UpdateSize(SonTreeAttr(tree, 1), type);
#line 1041 "clpretty.ch"
#line 1042 "clpretty.ch"
                                    UpdateSize(SonTreeAttr(tree, 2), type);
#line 1042 "clpretty.ch"
#line 1045 "clpretty.ch"
                                    GetCoord(sontree(tree, 1), &x, &y, &dx, &dy);
#line 1045 "clpretty.ch"
#line 1046 "clpretty.ch"
                                    maxDx = x + dx ;
#line 1046 "clpretty.ch"
#line 1047 "clpretty.ch"
                                    GetCoord(sontree(tree, 2), &x, &y, &dx, &dy);
#line 1047 "clpretty.ch"
#line 1048 "clpretty.ch"
                                    if ( x + dx > maxDx ) 
#line 1048 "clpretty.ch"
#line 1049 "clpretty.ch"
                                        maxDx = x + dx ;
#line 1049 "clpretty.ch"
#line 1052 "clpretty.ch"
                                    GetCoord(tree, &x, &y, &dx, &dy);
#line 1052 "clpretty.ch"
#line 1053 "clpretty.ch"
                                    PutCoord(tree, x, y | 1, maxDx, dy);
#line 1053 "clpretty.ch"
#line 1054 "clpretty.ch"
                                    
#line 1054 "clpretty.ch"
#line 1054 "clpretty.ch"
                                   }
#line 1054 "clpretty.ch"
#line 1055 "clpretty.ch"
    
#line 1055 "clpretty.ch"
#line 1055 "clpretty.ch"
}
#line 1055 "clpretty.ch"

#line 1060 "clpretty.ch"

#line 1060 "clpretty.ch"
void clpretty::TraiterExp2H ( PTREE tree, int x0 )
#line 1060 "clpretty.ch"
{
#line 1060 "clpretty.ch"
    register PPTREE _inter ;
#line 1060 "clpretty.ch"

#line 1060 "clpretty.ch"
#line 1060 "clpretty.ch"
    int _nextVal ;
    
#line 1060 "clpretty.ch"
#line 1064 "clpretty.ch"
    
    int y0 ;
    
#line 1064 "clpretty.ch"
#line 1065 "clpretty.ch"
    
    int x ;
    
#line 1065 "clpretty.ch"
#line 1066 "clpretty.ch"
    
    int y ;
    
#line 1066 "clpretty.ch"
#line 1067 "clpretty.ch"
    
    int dx ;
    
#line 1067 "clpretty.ch"
#line 1068 "clpretty.ch"
    
    int lastMark ;
    
#line 1068 "clpretty.ch"
#line 1069 "clpretty.ch"
    
    int deltaRef ;
    
#line 1069 "clpretty.ch"
#line 1070 "clpretty.ch"
    
    int delta ;
    
#line 1070 "clpretty.ch"
#line 1071 "clpretty.ch"
    
    PTREE   lastTree ;
#line 1071 "clpretty.ch"
    
#line 1071 "clpretty.ch"
#line 1072 "clpretty.ch"
    
    PTREE   attributeList ;
#line 1072 "clpretty.ch"
    
#line 1072 "clpretty.ch"
#line 1073 "clpretty.ch"
    
    PTREE   father ;
#line 1073 "clpretty.ch"
    
#line 1073 "clpretty.ch"
#line 1074 "clpretty.ch"
    
    PTREE   treeWithAttribute ;
#line 1074 "clpretty.ch"
    
#line 1074 "clpretty.ch"
#line 1075 "clpretty.ch"
    
    int posTree ;
    
#line 1075 "clpretty.ch"
#line 1076 "clpretty.ch"
    
    PTREE   preAttribute ;
#line 1076 "clpretty.ch"
    
#line 1076 "clpretty.ch"
#line 1077 "clpretty.ch"
    
    PTREE   postAttribute ;
#line 1077 "clpretty.ch"
    
#line 1077 "clpretty.ch"
#line 1078 "clpretty.ch"
    
    PTREE   firstElem = (PTREE)0 ;
#line 1078 "clpretty.ch"
    
#line 1078 "clpretty.ch"
#line 1079 "clpretty.ch"
    
    int hasIndented = 0 ;
    
#line 1079 "clpretty.ch"
#line 1080 "clpretty.ch"
    
    int priority ;
    
#line 1080 "clpretty.ch"
#line 1081 "clpretty.ch"
    
    int nPriority ;
    
#line 1081 "clpretty.ch"
#line 1082 "clpretty.ch"
    
    int posRef ;
    
#line 1082 "clpretty.ch"
#line 1083 "clpretty.ch"
    
    int colRef ;
    
#line 1083 "clpretty.ch"
#line 1084 "clpretty.ch"
    
    int ret = 1 ;
    
#line 1084 "clpretty.ch"
#line 1085 "clpretty.ch"
    
    int maxDx = 0 ;
    
#line 1085 "clpretty.ch"
#line 1086 "clpretty.ch"
    
    PTREE   list ;
#line 1086 "clpretty.ch"
    
#line 1086 "clpretty.ch"
#line 1087 "clpretty.ch"
    
    int oldNbTab = nbTab ;
    
#line 1087 "clpretty.ch"
#line 1088 "clpretty.ch"
    
    PTREE   hasToPutVirt = (PTREE)0 ;
#line 1088 "clpretty.ch"
    
#line 1088 "clpretty.ch"
#line 1089 "clpretty.ch"
    
    int deltaLoc ;
    
#line 1089 "clpretty.ch"
#line 1090 "clpretty.ch"
    
    PTREE   inter ;
#line 1090 "clpretty.ch"
    
#line 1090 "clpretty.ch"
#line 1078 "clpretty.ch"
    firstElem = (PPTREE) 0 ;
#line 1078 "clpretty.ch"
    
#line 1078 "clpretty.ch"
#line 1088 "clpretty.ch"
    hasToPutVirt = (PPTREE) 0 ;
#line 1088 "clpretty.ch"
    
#line 1088 "clpretty.ch"
#line 1093 "clpretty.ch"
    GetCoord(tree, &x, &y, &dx, &colRef);
#line 1093 "clpretty.ch"
#line 1094 "clpretty.ch"
    x0 += x ;
#line 1094 "clpretty.ch"
#line 1095 "clpretty.ch"
    MarkCoordTree(tree, x0, 0);
#line 1095 "clpretty.ch"
#line 1098 "clpretty.ch"
    priority = OpType(tree);
#line 1098 "clpretty.ch"
#line 1099 "clpretty.ch"
    if ( colRef != markTab ) 
#line 1099 "clpretty.ch"
#line 1100 "clpretty.ch"
        nbTab = 0 ;
#line 1100 "clpretty.ch"
#line 1101 "clpretty.ch"
    posRef = TAB_VALUE(colRef, nbTab + 1);
#line 1101 "clpretty.ch"
#line 1102 "clpretty.ch"
    deltaRef = delta = 0 ;
#line 1102 "clpretty.ch"
#line 1103 "clpretty.ch"
    currTabTree = 0 ;
#line 1103 "clpretty.ch"
#line 1106 "clpretty.ch"
    AddTree(tree, 0);
#line 1106 "clpretty.ch"
#line 1109 "clpretty.ch"
    {
#line 1109 "clpretty.ch"
#line 1109 "clpretty.ch"
        ItPtree _iterator1 (tree, (PPTREE) 0) ;
        
#line 1109 "clpretty.ch"
#line 1109 "clpretty.ch"
        PTREE   _for_elem ;
#line 1109 "clpretty.ch"
        
#line 1109 "clpretty.ch"
#line 1109 "clpretty.ch"
        _iterator1.AllSearch(1);
#line 1109 "clpretty.ch"
#line 1109 "clpretty.ch"
        while ( (_for_elem=_iterator1++) ) {
#line 1109 "clpretty.ch"
#line 1109 "clpretty.ch"
            {
#line 1109 "clpretty.ch"
#line 1110 "clpretty.ch"
                nPriority = OpType(for_elem);
#line 1110 "clpretty.ch"
#line 1111 "clpretty.ch"
                GetCoord(for_elem, &x, &y, &dx, &lastMark);
#line 1111 "clpretty.ch"
#line 1112 "clpretty.ch"
                if ( nPriority != priority ) {
#line 1112 "clpretty.ch"
#line 1112 "clpretty.ch"
                                                PTREE   _Baum0 ;
#line 1112 "clpretty.ch"
                                                
#line 1112 "clpretty.ch"
#line 1113 "clpretty.ch"
                                                _Baum0 = (PPTREE) 0 ;
#line 1113 "clpretty.ch"
                                                
#line 1113 "clpretty.ch"
#line 1113 "clpretty.ch"
                                                GetCoordAbs(for_elem, _Baum0, &x0, &y0);
#line 1113 "clpretty.ch"
#line 1117 "clpretty.ch"
                                                if ( (!lastTree || deltaRef >= 0) && x0 + dx + delta > rightMargin ) {
#line 1117 "clpretty.ch"
#line 1118 "clpretty.ch"
                                                                                                                              if ( !hasToPutVirt ) {
#line 1118 "clpretty.ch"
#line 1119 "clpretty.ch"
                                                                                                                                                     (hasToPutVirt=for_elem);
#line 1119 "clpretty.ch"
                                                                                                                                                     
#line 1119 "clpretty.ch"
#line 1120 "clpretty.ch"
                                                                                                                                                     (lastTree=for_elem);
#line 1120 "clpretty.ch"
                                                                                                                                                     
#line 1120 "clpretty.ch"
#line 1121 "clpretty.ch"
                                                                                                                                                     
#line 1121 "clpretty.ch"
#line 1121 "clpretty.ch"
                                                                                                                                                     } else 
#line 1121 "clpretty.ch"
                                                                                                                              {
#line 1121 "clpretty.ch"
#line 1122 "clpretty.ch"
                                                                                                                              char string [10];
                                                                                                                              
#line 1122 "clpretty.ch"
#line 1123 "clpretty.ch"
                                                                                                                              sprintf(string, "%d", colRef);
#line 1123 "clpretty.ch"
#line 1124 "clpretty.ch"
                                                                                                                              {
#line 1124 "clpretty.ch"
                                                                                                                              PPTREE _ptTree0=(PPTREE) 0;
#line 1124 "clpretty.ch"
                                                                                                                              _ptTree0 = (PPTREE) 0;
#line 1124 "clpretty.ch"
                                                                                                                              {
#line 1124 "clpretty.ch"
                                                                                                                              PPTREE _ptTree1= (PPTREE) 0 ;
#line 1124 "clpretty.ch"
                                                                                                                              {
#line 1124 "clpretty.ch"
                                                                                                                              PPTREE _ptTree2= (PPTREE) 0,_ptRes2= (PPTREE) 0;
#line 1124 "clpretty.ch"
                                                                                                                              _ptRes2 = MakeTree(pretty::TAB_VIRT, 2);
#line 1124 "clpretty.ch"
                                                                                                                              _ptTree2 = StoreRef(MakeString(string));
#line 1124 "clpretty.ch"
                                                                                                                              ReplaceTree(_ptRes2, 1, _ptTree2);
#line 1124 "clpretty.ch"
                                                                                                                              _ptTree2 = MakeString("1") ;
#line 1124 "clpretty.ch"
                                                                                                                              ReplaceTree(_ptRes2, 2, _ptTree2);
#line 1124 "clpretty.ch"
                                                                                                                              _ptTree1 = _ptRes2;
#line 1124 "clpretty.ch"
                                                                                                                              }
#line 1124 "clpretty.ch"
                                                                                                                              _ptTree0 = AddList( _ptTree0,_ptTree1);
#line 1124 "clpretty.ch"
                                                                                                                              }
#line 1124 "clpretty.ch"
                                                                                                                              list = _ptTree0;
#line 1124 "clpretty.ch"
                                                                                                                              ;
#line 1124 "clpretty.ch"
                                                                                                                              }
#line 1124 "clpretty.ch"
                                                                                                                              
#line 1124 "clpretty.ch"
#line 1125 "clpretty.ch"
                                                                                                                              PutAttr(for_elem, list, PRE_ATTR, PUT_END);
#line 1125 "clpretty.ch"
#line 1126 "clpretty.ch"
                                                                                                                              (lastTree=for_elem);
#line 1126 "clpretty.ch"
                                                                                                                              
#line 1126 "clpretty.ch"
#line 1127 "clpretty.ch"
                                                                                                                              for_elem = FatherTree(for_elem);
#line 1127 "clpretty.ch"
#line 1128 "clpretty.ch"
                                                                                                                              
#line 1128 "clpretty.ch"
#line 1128 "clpretty.ch"
                                                                                                                              }
                                                                                                                              
#line 1128 "clpretty.ch"
#line 1129 "clpretty.ch"
                                                                                                                              
#line 1129 "clpretty.ch"
#line 1129 "clpretty.ch"
                                                                                                                              } else 
#line 1129 "clpretty.ch"
                                                {
#line 1129 "clpretty.ch"
#line 1133 "clpretty.ch"
                                                    if ( x0 + dx + delta > rightMargin && lastTree && deltaRef < -1 ) {
#line 1133 "clpretty.ch"
#line 1133 "clpretty.ch"
                                                                                                                              PTREE _Baum1 ;
#line 1133 "clpretty.ch"
                                                                                                                              
#line 1133 "clpretty.ch"
#line 1136 "clpretty.ch"
                                                                                                                              {
#line 1136 "clpretty.ch"
                                                                                                                              PPTREE _ptTree0=(PPTREE) 0;
#line 1136 "clpretty.ch"
                                                                                                                              _ptTree0 = (PPTREE) 0;
#line 1136 "clpretty.ch"
                                                                                                                              {
#line 1136 "clpretty.ch"
                                                                                                                              PPTREE _ptTree1= (PPTREE) 0 ;
#line 1136 "clpretty.ch"
                                                                                                                              {
#line 1136 "clpretty.ch"
                                                                                                                              PPTREE _ptTree2= (PPTREE) 0,_ptRes2= (PPTREE) 0;
#line 1136 "clpretty.ch"
                                                                                                                              _ptRes2 = MakeTree(pretty::NEWLINE, 1);
#line 1136 "clpretty.ch"
                                                                                                                              _ptTree2 = MakeString("1") ;
#line 1136 "clpretty.ch"
                                                                                                                              ReplaceTree(_ptRes2, 1, _ptTree2);
#line 1136 "clpretty.ch"
                                                                                                                              _ptTree1 = _ptRes2;
#line 1136 "clpretty.ch"
                                                                                                                              }
#line 1136 "clpretty.ch"
                                                                                                                              _ptTree0 = AddList( _ptTree0,_ptTree1);
#line 1136 "clpretty.ch"
                                                                                                                              }
#line 1136 "clpretty.ch"
                                                                                                                              attributeList = _ptTree0;
#line 1136 "clpretty.ch"
                                                                                                                              ;
#line 1136 "clpretty.ch"
                                                                                                                              }
#line 1136 "clpretty.ch"
                                                                                                                              
#line 1136 "clpretty.ch"
#line 1137 "clpretty.ch"
                                                                                                                              if ( !hasIndented ) {
#line 1137 "clpretty.ch"
#line 1138 "clpretty.ch"
                                                                                                                                                    {
#line 1138 "clpretty.ch"
#line 1139 "clpretty.ch"
                                                                                                                                                    char string [25];
                                                                                                                                                    
#line 1139 "clpretty.ch"
#line 1140 "clpretty.ch"
                                                                                                                                                    sprintf(string, "%d", nbTab + 1);
#line 1140 "clpretty.ch"
#line 1141 "clpretty.ch"
                                                                                                                                                    {
#line 1141 "clpretty.ch"
                                                                                                                                                    PPTREE _ptTree0= (PPTREE) 0 ;
#line 1141 "clpretty.ch"
                                                                                                                                                    {
#line 1141 "clpretty.ch"
                                                                                                                                                    PPTREE _ptTree1= (PPTREE) 0 ;
#line 1141 "clpretty.ch"
                                                                                                                                                    {
#line 1141 "clpretty.ch"
                                                                                                                                                    PPTREE _ptTree2= (PPTREE) 0,_ptRes2= (PPTREE) 0;
#line 1141 "clpretty.ch"
                                                                                                                                                    _ptRes2 = MakeTree(pretty::TAB, 1);
#line 1141 "clpretty.ch"
                                                                                                                                                    _ptTree2 = StoreRef(MakeString(string));
#line 1141 "clpretty.ch"
                                                                                                                                                    ReplaceTree(_ptRes2, 1, _ptTree2);
#line 1141 "clpretty.ch"
                                                                                                                                                    _ptTree1 = _ptRes2;
#line 1141 "clpretty.ch"
                                                                                                                                                    }
#line 1141 "clpretty.ch"
                                                                                                                                                    attributeList =  AddList( attributeList,_ptTree1);
#line 1141 "clpretty.ch"
                                                                                                                                                    }
#line 1141 "clpretty.ch"
                                                                                                                                                    {
#line 1141 "clpretty.ch"
                                                                                                                                                    PPTREE _ptTree1= (PPTREE) 0 ;
#line 1141 "clpretty.ch"
                                                                                                                                                    {
#line 1141 "clpretty.ch"
                                                                                                                                                    PPTREE _ptTree2= (PPTREE) 0,_ptRes2= (PPTREE) 0;
#line 1141 "clpretty.ch"
                                                                                                                                                    _ptRes2 = MakeTree(pretty::MARK, 0);
#line 1141 "clpretty.ch"
                                                                                                                                                    _ptTree1 = _ptRes2;
#line 1141 "clpretty.ch"
                                                                                                                                                    }
#line 1141 "clpretty.ch"
                                                                                                                                                    attributeList =  AddList( attributeList,_ptTree1);
#line 1141 "clpretty.ch"
                                                                                                                                                    }
#line 1141 "clpretty.ch"
                                                                                                                                                    }
#line 1141 "clpretty.ch"
                                                                                                                                                    
#line 1141 "clpretty.ch"
#line 1142 "clpretty.ch"
                                                                                                                                                    
#line 1142 "clpretty.ch"
#line 1142 "clpretty.ch"
                                                                                                                                                    }
                                                                                                                                                    
#line 1142 "clpretty.ch"
#line 1143 "clpretty.ch"
                                                                                                                                                    hasIndented = 1 ;
#line 1143 "clpretty.ch"
#line 1144 "clpretty.ch"
                                                                                                                                                    
#line 1144 "clpretty.ch"
#line 1144 "clpretty.ch"
                                                                                                                                                    }
#line 1144 "clpretty.ch"
#line 1145 "clpretty.ch"
                                                                                                                              PutAttr(lastTree, attributeList, POST_ATTR, PUT_END);
#line 1145 "clpretty.ch"
#line 1148 "clpretty.ch"
                                                                                                                              delta = deltaRef ;
#line 1148 "clpretty.ch"
#line 1149 "clpretty.ch"
                                                                                                                              _Baum1 = (PPTREE) 0 ;
#line 1149 "clpretty.ch"
                                                                                                                              
#line 1149 "clpretty.ch"
#line 1149 "clpretty.ch"
                                                                                                                              (inter=SNextTree(lastTree, _Baum1));
#line 1149 "clpretty.ch"
                                                                                                                              
#line 1149 "clpretty.ch"
#line 1150 "clpretty.ch"
                                                                                                                              while ( 1 ) {
#line 1150 "clpretty.ch"
#line 1150 "clpretty.ch"
                                                                                                                                           PTREE _Baum3 ;
#line 1150 "clpretty.ch"
                                                                                                                                           
#line 1150 "clpretty.ch"
#line 1151 "clpretty.ch"
                                                                                                                                           (father=FatherTree(inter));
#line 1151 "clpretty.ch"
                                                                                                                                           
#line 1151 "clpretty.ch"
#line 1152 "clpretty.ch"
                                                                                                                                           while ( inter && ((_inter = (PPTREE)father,1) && 
#line 1152 "clpretty.ch"
                                                                                                                                                               (NumberTree(_inter) == pretty::ATTRIBUTS) &&
#line 1152 "clpretty.ch"
                                                                                                                                                               1) && ranktree(inter) != 1 ) {
#line 1152 "clpretty.ch"
#line 1152 "clpretty.ch"
                                                                                                                                                                                               PTREE _Baum2 ;
#line 1152 "clpretty.ch"
                                                                                                                                                                                               
#line 1152 "clpretty.ch"
#line 1153 "clpretty.ch"
                                                                                                                                                                                               _Baum2 = (PPTREE) 0 ;
#line 1153 "clpretty.ch"
                                                                                                                                                                                               
#line 1153 "clpretty.ch"
#line 1153 "clpretty.ch"
                                                                                                                                                                                               (inter=SNextTree(father, _Baum2));
#line 1153 "clpretty.ch"
                                                                                                                                                                                               
#line 1153 "clpretty.ch"
#line 1154 "clpretty.ch"
                                                                                                                                                                                               (father=FatherTree(inter));
#line 1154 "clpretty.ch"
                                                                                                                                                                                               
#line 1154 "clpretty.ch"
#line 1155 "clpretty.ch"
                                                                                                                                                                                               
#line 1155 "clpretty.ch"
#line 1155 "clpretty.ch"
                                                                                                                                                                                               }
#line 1155 "clpretty.ch"
#line 1156 "clpretty.ch"
                                                                                                                                           if ( inter != (PTREE)for_elem ) 
#line 1156 "clpretty.ch"
#line 1157 "clpretty.ch"
                                                                                                                                           AddTree(inter, delta);
#line 1157 "clpretty.ch"
                                                                                                                                           else 
#line 1158 "clpretty.ch"
                                                                                                                                           {
#line 1158 "clpretty.ch"
#line 1159 "clpretty.ch"
                                                                                                                                           deltaLoc = delta - FindDelta(inter);
#line 1159 "clpretty.ch"
#line 1160 "clpretty.ch"
                                                                                                                                           PutCoord(inter, x + deltaLoc, y, dx, lastMark);
#line 1160 "clpretty.ch"
#line 1161 "clpretty.ch"
                                                                                                                                           break ;
                                                                                                                                           
#line 1161 "clpretty.ch"
#line 1162 "clpretty.ch"
                                                                                                                                           
#line 1162 "clpretty.ch"
#line 1162 "clpretty.ch"
                                                                                                                                           }
                                                                                                                                           
#line 1162 "clpretty.ch"
#line 1163 "clpretty.ch"
                                                                                                                                           _Baum3 = (PPTREE) 0 ;
#line 1163 "clpretty.ch"
                                                                                                                                           
#line 1163 "clpretty.ch"
#line 1163 "clpretty.ch"
                                                                                                                                           (inter=NextTree(inter, _Baum3));
#line 1163 "clpretty.ch"
                                                                                                                                           
#line 1163 "clpretty.ch"
#line 1164 "clpretty.ch"
                                                                                                                                           
#line 1164 "clpretty.ch"
#line 1164 "clpretty.ch"
                                                                                                                                           }
#line 1164 "clpretty.ch"
#line 1167 "clpretty.ch"
                                                                                                                              TraitMark(for_elem, posRef);
#line 1167 "clpretty.ch"
#line 1168 "clpretty.ch"
                                                                                                                              
#line 1168 "clpretty.ch"
#line 1168 "clpretty.ch"
                                                                                                                              } else 
#line 1168 "clpretty.ch"
                                                    if ( hasIndented ) {
#line 1168 "clpretty.ch"
#line 1171 "clpretty.ch"
                                                                            deltaLoc = delta - FindDelta(for_elem);
#line 1171 "clpretty.ch"
#line 1172 "clpretty.ch"
                                                                            PutCoord(for_elem, x + deltaLoc, y, dx, lastMark);
#line 1172 "clpretty.ch"
#line 1175 "clpretty.ch"
                                                                            TraitMark(for_elem, posRef);
#line 1175 "clpretty.ch"
#line 1176 "clpretty.ch"
                                                                            
#line 1176 "clpretty.ch"
#line 1176 "clpretty.ch"
                                                                        }
#line 1176 "clpretty.ch"
#line 1177 "clpretty.ch"
                                                    (lastTree=for_elem);
#line 1177 "clpretty.ch"
                                                    
#line 1177 "clpretty.ch"
#line 1178 "clpretty.ch"
                                                    
#line 1178 "clpretty.ch"
#line 1178 "clpretty.ch"
                                                }
                                                
#line 1178 "clpretty.ch"
#line 1182 "clpretty.ch"
                                                if ( y & 0x2 ) {
#line 1182 "clpretty.ch"
#line 1183 "clpretty.ch"
                                                                    delta = deltaRef = posRef - colRef ;
#line 1183 "clpretty.ch"
#line 1184 "clpretty.ch"
                                                                    
#line 1184 "clpretty.ch"
#line 1184 "clpretty.ch"
                                                                 } else 
#line 1184 "clpretty.ch"
#line 1185 "clpretty.ch"
                                                    deltaRef = posRef - x0 - dx ;
#line 1185 "clpretty.ch"
                                                
#line 1185 "clpretty.ch"
#line 1188 "clpretty.ch"
                                                goto for_continue1 ;
                                                
#line 1188 "clpretty.ch"
#line 1189 "clpretty.ch"
                                                
#line 1189 "clpretty.ch"
#line 1189 "clpretty.ch"
                                               } else 
#line 1189 "clpretty.ch"
                if ( hasIndented ) {
#line 1189 "clpretty.ch"
#line 1190 "clpretty.ch"
                                        AddTree(for_elem, delta);
#line 1190 "clpretty.ch"
#line 1191 "clpretty.ch"
                                        
#line 1191 "clpretty.ch"
#line 1191 "clpretty.ch"
                                    }
#line 1191 "clpretty.ch"
#line 1192 "clpretty.ch"
                
#line 1192 "clpretty.ch"
#line 1192 "clpretty.ch"
            }
            
#line 1192 "clpretty.ch"
#line 1192 "clpretty.ch"
            _iterator1.Current(_for_elem);
#line 1192 "clpretty.ch"
#line 1192 "clpretty.ch"
            continue ;
            
#line 1192 "clpretty.ch"
#line 1192 "clpretty.ch"
        for_continue1 : 
#line 1192 "clpretty.ch"
#line 1192 "clpretty.ch"
            _iterator1.Current(_for_elem);
#line 1192 "clpretty.ch"
#line 1192 "clpretty.ch"
            _iterator1.SkipSon(1);
#line 1192 "clpretty.ch"
#line 1192 "clpretty.ch"
            continue ;
            
#line 1192 "clpretty.ch"
#line 1192 "clpretty.ch"
        for_break1 : 
#line 1192 "clpretty.ch"
#line 1192 "clpretty.ch"
            break ;
            
#line 1192 "clpretty.ch"
#line 1192 "clpretty.ch"
            
#line 1192 "clpretty.ch"
#line 1192 "clpretty.ch"
        }
#line 1192 "clpretty.ch"
#line 1192 "clpretty.ch"
        
#line 1192 "clpretty.ch"
#line 1192 "clpretty.ch"
    }
    
#line 1192 "clpretty.ch"
#line 1195 "clpretty.ch"
    if ( hasIndented ) {
#line 1195 "clpretty.ch"
#line 1196 "clpretty.ch"
                            {
#line 1196 "clpretty.ch"
                                PPTREE _ptTree0=(PPTREE) 0;
#line 1196 "clpretty.ch"
                                _ptTree0 = (PPTREE) 0;
#line 1196 "clpretty.ch"
                                {
#line 1196 "clpretty.ch"
                                    PPTREE _ptTree1= (PPTREE) 0 ;
#line 1196 "clpretty.ch"
                                    {
#line 1196 "clpretty.ch"
                                        PPTREE _ptTree2= (PPTREE) 0,_ptRes2= (PPTREE) 0;
#line 1196 "clpretty.ch"
                                        _ptRes2 = MakeTree(pretty::UNMARK, 0);
#line 1196 "clpretty.ch"
                                        _ptTree1 = _ptRes2;
#line 1196 "clpretty.ch"
                                    }
#line 1196 "clpretty.ch"
                                    _ptTree0 = AddList( _ptTree0,_ptTree1);
#line 1196 "clpretty.ch"
                                }
#line 1196 "clpretty.ch"
                                list = _ptTree0;
#line 1196 "clpretty.ch"
                                ;
#line 1196 "clpretty.ch"
                            }
#line 1196 "clpretty.ch"
                            
#line 1196 "clpretty.ch"
#line 1197 "clpretty.ch"
                            PutAttr(lastTree, list, POST_ATTR, PUT_BEG);
#line 1197 "clpretty.ch"
#line 1198 "clpretty.ch"
                            
#line 1198 "clpretty.ch"
#line 1198 "clpretty.ch"
                        }
#line 1198 "clpretty.ch"
#line 1201 "clpretty.ch"
    if ( hasIndented && hasToPutVirt ) {
#line 1201 "clpretty.ch"
#line 1202 "clpretty.ch"
                                            char    string [10];
                                            
#line 1202 "clpretty.ch"
#line 1203 "clpretty.ch"
                                            sprintf(string, "%d", colRef);
#line 1203 "clpretty.ch"
#line 1204 "clpretty.ch"
                                            {
#line 1204 "clpretty.ch"
                                                PPTREE _ptTree0=(PPTREE) 0;
#line 1204 "clpretty.ch"
                                                _ptTree0 = (PPTREE) 0;
#line 1204 "clpretty.ch"
                                                {
#line 1204 "clpretty.ch"
                                                    PPTREE _ptTree1= (PPTREE) 0 ;
#line 1204 "clpretty.ch"
                                                    {
#line 1204 "clpretty.ch"
                                                        PPTREE _ptTree2= (PPTREE) 0,_ptRes2= (PPTREE) 0;
#line 1204 "clpretty.ch"
                                                        _ptRes2 = MakeTree(pretty::TAB_VIRT, 2);
#line 1204 "clpretty.ch"
                                                        _ptTree2 = StoreRef(MakeString(string));
#line 1204 "clpretty.ch"
                                                        ReplaceTree(_ptRes2, 1, _ptTree2);
#line 1204 "clpretty.ch"
                                                        _ptTree2 = MakeString("1") ;
#line 1204 "clpretty.ch"
                                                        ReplaceTree(_ptRes2, 2, _ptTree2);
#line 1204 "clpretty.ch"
                                                        _ptTree1 = _ptRes2;
#line 1204 "clpretty.ch"
                                                    }
#line 1204 "clpretty.ch"
                                                    _ptTree0 = AddList( _ptTree0,_ptTree1);
#line 1204 "clpretty.ch"
                                                }
#line 1204 "clpretty.ch"
                                                list = _ptTree0;
#line 1204 "clpretty.ch"
                                                ;
#line 1204 "clpretty.ch"
                                            }
#line 1204 "clpretty.ch"
                                            
#line 1204 "clpretty.ch"
#line 1205 "clpretty.ch"
                                            PutAttr(hasToPutVirt, list, PRE_ATTR, PUT_END);
#line 1205 "clpretty.ch"
#line 1206 "clpretty.ch"
                                            
#line 1206 "clpretty.ch"
#line 1206 "clpretty.ch"
                                         }
#line 1206 "clpretty.ch"
#line 1209 "clpretty.ch"
#line 1209 "clpretty.ch"
    for ( int nbNode = 0 ; nbNode < currTabTree ; nbNode++ ) {
#line 1209 "clpretty.ch"
#line 1210 "clpretty.ch"
                                                                    GetCoord(tabTree [nbNode].tree, &x, &y, &dx, &lastMark);
#line 1210 "clpretty.ch"
#line 1211 "clpretty.ch"
                                                                    deltaLoc = tabTree [nbNode].delta - FindDelta(tabTree [nbNode].tree);
#line 1211 "clpretty.ch"
#line 1212 "clpretty.ch"
                                                                    PutCoord(tabTree [nbNode].tree, x + deltaLoc, y, dx, lastMark);
#line 1212 "clpretty.ch"
#line 1213 "clpretty.ch"
                                                                    
#line 1213 "clpretty.ch"
#line 1213 "clpretty.ch"
                                                                  }
#line 1213 "clpretty.ch"
    
#line 1213 "clpretty.ch"
#line 1216 "clpretty.ch"
    UpdateSize(tree, OpType(tree));
#line 1216 "clpretty.ch"
#line 1219 "clpretty.ch"
    UnMarkCoordTree(tree);
#line 1219 "clpretty.ch"
#line 1220 "clpretty.ch"
    nbTab = oldNbTab ;
#line 1220 "clpretty.ch"
#line 1221 "clpretty.ch"
    
#line 1221 "clpretty.ch"
#line 1221 "clpretty.ch"
}
#line 1221 "clpretty.ch"

#line 1226 "clpretty.ch"

#line 1226 "clpretty.ch"
void clpretty::TraiterExp2V ( PTREE tree, int x0 )
#line 1226 "clpretty.ch"
{
#line 1226 "clpretty.ch"
    register PPTREE _inter ;
#line 1226 "clpretty.ch"

#line 1226 "clpretty.ch"
#line 1226 "clpretty.ch"
    int _nextVal ;
    
#line 1226 "clpretty.ch"
#line 1230 "clpretty.ch"
    
    int y0 ;
    
#line 1230 "clpretty.ch"
#line 1231 "clpretty.ch"
    
    int x ;
    
#line 1231 "clpretty.ch"
#line 1232 "clpretty.ch"
    
    int y ;
    
#line 1232 "clpretty.ch"
#line 1233 "clpretty.ch"
    
    int dx ;
    
#line 1233 "clpretty.ch"
#line 1234 "clpretty.ch"
    
    int lastMark ;
    
#line 1234 "clpretty.ch"
#line 1235 "clpretty.ch"
    
    int deltaRef ;
    
#line 1235 "clpretty.ch"
#line 1236 "clpretty.ch"
    
    int delta ;
    
#line 1236 "clpretty.ch"
#line 1237 "clpretty.ch"
    
    PTREE   lastTree ;
#line 1237 "clpretty.ch"
    
#line 1237 "clpretty.ch"
#line 1238 "clpretty.ch"
    
    PTREE   attributeList ;
#line 1238 "clpretty.ch"
    
#line 1238 "clpretty.ch"
#line 1239 "clpretty.ch"
    
    PTREE   father ;
#line 1239 "clpretty.ch"
    
#line 1239 "clpretty.ch"
#line 1240 "clpretty.ch"
    
    PTREE   treeWithAttribute ;
#line 1240 "clpretty.ch"
    
#line 1240 "clpretty.ch"
#line 1241 "clpretty.ch"
    
    int posTree ;
    
#line 1241 "clpretty.ch"
#line 1242 "clpretty.ch"
    
    PTREE   preAttribute ;
#line 1242 "clpretty.ch"
    
#line 1242 "clpretty.ch"
#line 1243 "clpretty.ch"
    
    PTREE   postAttribute ;
#line 1243 "clpretty.ch"
    
#line 1243 "clpretty.ch"
#line 1244 "clpretty.ch"
    
    PTREE   firstElem = (PTREE)0 ;
#line 1244 "clpretty.ch"
    
#line 1244 "clpretty.ch"
#line 1245 "clpretty.ch"
    
    int hasIndented = 0 ;
    
#line 1245 "clpretty.ch"
#line 1246 "clpretty.ch"
    
    int priority ;
    
#line 1246 "clpretty.ch"
#line 1247 "clpretty.ch"
    
    int nPriority ;
    
#line 1247 "clpretty.ch"
#line 1248 "clpretty.ch"
    
    int posRef ;
    
#line 1248 "clpretty.ch"
#line 1249 "clpretty.ch"
    
    int colRef ;
    
#line 1249 "clpretty.ch"
#line 1250 "clpretty.ch"
    
    int ret = 1 ;
    
#line 1250 "clpretty.ch"
#line 1251 "clpretty.ch"
    
    PTREE   list ;
#line 1251 "clpretty.ch"
    
#line 1251 "clpretty.ch"
#line 1252 "clpretty.ch"
    
    PTREE   hasToPutVirt ;
#line 1252 "clpretty.ch"
    
#line 1252 "clpretty.ch"
#line 1253 "clpretty.ch"
    
    int oldNbTab = nbTab ;
    
#line 1253 "clpretty.ch"
#line 1254 "clpretty.ch"
    
    int deltaLoc ;
    
#line 1254 "clpretty.ch"
#line 1255 "clpretty.ch"
    
    PTREE   inter ;
#line 1255 "clpretty.ch"
    
#line 1255 "clpretty.ch"
#line 1244 "clpretty.ch"
    firstElem = (PPTREE) 0 ;
#line 1244 "clpretty.ch"
    
#line 1244 "clpretty.ch"
#line 1258 "clpretty.ch"
    GetCoord(tree, &x, &y, &dx, &colRef);
#line 1258 "clpretty.ch"
#line 1259 "clpretty.ch"
    x0 += x ;
#line 1259 "clpretty.ch"
#line 1260 "clpretty.ch"
    MarkCoordTree(tree, x0, 0);
#line 1260 "clpretty.ch"
#line 1261 "clpretty.ch"
    colRef = x0 ;
#line 1261 "clpretty.ch"
#line 1264 "clpretty.ch"
    {
#line 1264 "clpretty.ch"
        PPTREE _ptTree0=(PPTREE) 0;
#line 1264 "clpretty.ch"
        _ptTree0 = (PPTREE) 0;
#line 1264 "clpretty.ch"
        {
#line 1264 "clpretty.ch"
            PPTREE _ptTree1= (PPTREE) 0 ;
#line 1264 "clpretty.ch"
            {
#line 1264 "clpretty.ch"
                PPTREE _ptTree2= (PPTREE) 0,_ptRes2= (PPTREE) 0;
#line 1264 "clpretty.ch"
                _ptRes2 = MakeTree(pretty::MARK, 0);
#line 1264 "clpretty.ch"
                _ptTree1 = _ptRes2;
#line 1264 "clpretty.ch"
            }
#line 1264 "clpretty.ch"
            _ptTree0 = AddList( _ptTree0,_ptTree1);
#line 1264 "clpretty.ch"
        }
#line 1264 "clpretty.ch"
        list = _ptTree0;
#line 1264 "clpretty.ch"
        ;
#line 1264 "clpretty.ch"
    }
#line 1264 "clpretty.ch"
    
#line 1264 "clpretty.ch"
#line 1265 "clpretty.ch"
    PutAttr(tree, list, PRE_ATTR, PUT_END);
#line 1265 "clpretty.ch"
#line 1266 "clpretty.ch"
    {
#line 1266 "clpretty.ch"
        PPTREE _ptTree0=(PPTREE) 0;
#line 1266 "clpretty.ch"
        _ptTree0 = (PPTREE) 0;
#line 1266 "clpretty.ch"
        {
#line 1266 "clpretty.ch"
            PPTREE _ptTree1= (PPTREE) 0 ;
#line 1266 "clpretty.ch"
            {
#line 1266 "clpretty.ch"
                PPTREE _ptTree2= (PPTREE) 0,_ptRes2= (PPTREE) 0;
#line 1266 "clpretty.ch"
                _ptRes2 = MakeTree(pretty::UNMARK, 0);
#line 1266 "clpretty.ch"
                _ptTree1 = _ptRes2;
#line 1266 "clpretty.ch"
            }
#line 1266 "clpretty.ch"
            _ptTree0 = AddList( _ptTree0,_ptTree1);
#line 1266 "clpretty.ch"
        }
#line 1266 "clpretty.ch"
        list = _ptTree0;
#line 1266 "clpretty.ch"
        ;
#line 1266 "clpretty.ch"
    }
#line 1266 "clpretty.ch"
    
#line 1266 "clpretty.ch"
#line 1267 "clpretty.ch"
    PutAttr(tree, list, POST_ATTR, PUT_BEG);
#line 1267 "clpretty.ch"
#line 1268 "clpretty.ch"
    TraitMark(tree, colRef);
#line 1268 "clpretty.ch"
#line 1271 "clpretty.ch"
    priority = OpType(tree);
#line 1271 "clpretty.ch"
#line 1272 "clpretty.ch"
    if ( markTab != colRef ) 
#line 1272 "clpretty.ch"
#line 1273 "clpretty.ch"
        nbTab = 0 ;
#line 1273 "clpretty.ch"
#line 1274 "clpretty.ch"
    posRef = TAB_VALUE(x0, nbTab + 1);
#line 1274 "clpretty.ch"
#line 1275 "clpretty.ch"
    deltaRef = delta = 0 ;
#line 1275 "clpretty.ch"
#line 1278 "clpretty.ch"
    AddTree(tree, 0);
#line 1278 "clpretty.ch"
#line 1279 "clpretty.ch"
    {
#line 1279 "clpretty.ch"
#line 1279 "clpretty.ch"
        ItPtree _iterator1 (tree, (PPTREE) 0) ;
        
#line 1279 "clpretty.ch"
#line 1279 "clpretty.ch"
        PTREE   _for_elem ;
#line 1279 "clpretty.ch"
        
#line 1279 "clpretty.ch"
#line 1279 "clpretty.ch"
        _iterator1.AllSearch(1);
#line 1279 "clpretty.ch"
#line 1279 "clpretty.ch"
        while ( (_for_elem=_iterator1++) ) {
#line 1279 "clpretty.ch"
#line 1279 "clpretty.ch"
            {
#line 1279 "clpretty.ch"
#line 1282 "clpretty.ch"
                nPriority = OpType(for_elem);
#line 1282 "clpretty.ch"
#line 1283 "clpretty.ch"
                GetCoord(for_elem, &x, &y, &dx, &lastMark);
#line 1283 "clpretty.ch"
#line 1284 "clpretty.ch"
                if ( nPriority != priority ) {
#line 1284 "clpretty.ch"
#line 1284 "clpretty.ch"
                                                PTREE   _Baum0 ;
#line 1284 "clpretty.ch"
                                                
#line 1284 "clpretty.ch"
#line 1285 "clpretty.ch"
                                                _Baum0 = (PPTREE) 0 ;
#line 1285 "clpretty.ch"
                                                
#line 1285 "clpretty.ch"
#line 1285 "clpretty.ch"
                                                GetCoordAbs(for_elem, _Baum0, &x0, &y0);
#line 1285 "clpretty.ch"
#line 1289 "clpretty.ch"
                                                if ( !lastTree || deltaRef >= 0 ) {
#line 1289 "clpretty.ch"
#line 1290 "clpretty.ch"
                                                                                        if ( !hasToPutVirt ) {
#line 1290 "clpretty.ch"
#line 1291 "clpretty.ch"
                                                                                                                (hasToPutVirt=for_elem);
#line 1291 "clpretty.ch"
                                                                                                                
#line 1291 "clpretty.ch"
#line 1292 "clpretty.ch"
                                                                                                                (lastTree=for_elem);
#line 1292 "clpretty.ch"
                                                                                                                
#line 1292 "clpretty.ch"
#line 1293 "clpretty.ch"
                                                                                                                
#line 1293 "clpretty.ch"
#line 1293 "clpretty.ch"
                                                                                                               } else 
#line 1293 "clpretty.ch"
                                                                                        {
#line 1293 "clpretty.ch"
#line 1294 "clpretty.ch"
                                                                                            char    string [10];
                                                                                            
#line 1294 "clpretty.ch"
#line 1295 "clpretty.ch"
                                                                                            sprintf(string, "%d", colRef);
#line 1295 "clpretty.ch"
#line 1296 "clpretty.ch"
                                                                                            {
#line 1296 "clpretty.ch"
                                                                                                PPTREE _ptTree0=(PPTREE) 0;
#line 1296 "clpretty.ch"
                                                                                                _ptTree0 = (PPTREE) 0;
#line 1296 "clpretty.ch"
                                                                                                {
#line 1296 "clpretty.ch"
                                                                                                    PPTREE _ptTree1= (PPTREE) 0 ;
#line 1296 "clpretty.ch"
                                                                                                    {
#line 1296 "clpretty.ch"
                                                                                                        PPTREE _ptTree2= (PPTREE) 0,_ptRes2= (PPTREE) 0;
#line 1296 "clpretty.ch"
                                                                                                        _ptRes2 = MakeTree(pretty::TAB_VIRT, 2);
#line 1296 "clpretty.ch"
                                                                                                        _ptTree2 = StoreRef(MakeString(string));
#line 1296 "clpretty.ch"
                                                                                                        ReplaceTree(_ptRes2, 1, _ptTree2);
#line 1296 "clpretty.ch"
                                                                                                        _ptTree2 = MakeString("1") ;
#line 1296 "clpretty.ch"
                                                                                                        ReplaceTree(_ptRes2, 2, _ptTree2);
#line 1296 "clpretty.ch"
                                                                                                        _ptTree1 = _ptRes2;
#line 1296 "clpretty.ch"
                                                                                                    }
#line 1296 "clpretty.ch"
                                                                                                    _ptTree0 = AddList( _ptTree0,_ptTree1);
#line 1296 "clpretty.ch"
                                                                                                }
#line 1296 "clpretty.ch"
                                                                                                list = _ptTree0;
#line 1296 "clpretty.ch"
                                                                                                ;
#line 1296 "clpretty.ch"
                                                                                            }
#line 1296 "clpretty.ch"
                                                                                            
#line 1296 "clpretty.ch"
#line 1297 "clpretty.ch"
                                                                                            PutAttr(for_elem, list, PRE_ATTR, PUT_END);
#line 1297 "clpretty.ch"
#line 1298 "clpretty.ch"
                                                                                            (lastTree=for_elem);
#line 1298 "clpretty.ch"
                                                                                            
#line 1298 "clpretty.ch"
#line 1299 "clpretty.ch"
                                                                                            for_elem = FatherTree(for_elem);
#line 1299 "clpretty.ch"
#line 1300 "clpretty.ch"
                                                                                            
#line 1300 "clpretty.ch"
#line 1300 "clpretty.ch"
                                                                                        }
                                                                                        
#line 1300 "clpretty.ch"
#line 1301 "clpretty.ch"
                                                                                        
#line 1301 "clpretty.ch"
#line 1301 "clpretty.ch"
                                                                                      } else 
#line 1301 "clpretty.ch"
                                                {
#line 1301 "clpretty.ch"
#line 1304 "clpretty.ch"
                                                    if ( lastTree && deltaRef < -1 ) {
#line 1304 "clpretty.ch"
#line 1307 "clpretty.ch"
                                                                                            if ( !(((_inter = (PPTREE)lastTree,1) && 
#line 1307 "clpretty.ch"
                                                                                                        (NumberTree(_inter) == pretty::ATTRIBUTS) &&
#line 1307 "clpretty.ch"
                                                                                                        1)) ) {
#line 1307 "clpretty.ch"
#line 1307 "clpretty.ch"
                                                                                                                PTREE   _Baum1 ;
#line 1307 "clpretty.ch"
                                                                                                                
#line 1307 "clpretty.ch"
#line 1310 "clpretty.ch"
                                                                                                                {
#line 1310 "clpretty.ch"
                                                                                                                    PPTREE _ptTree0=(PPTREE) 0;
#line 1310 "clpretty.ch"
                                                                                                                    _ptTree0 = (PPTREE) 0;
#line 1310 "clpretty.ch"
                                                                                                                    {
#line 1310 "clpretty.ch"
                                                                                                                        PPTREE _ptTree1= (PPTREE) 0 ;
#line 1310 "clpretty.ch"
                                                                                                                        {
#line 1310 "clpretty.ch"
                                                                                                                        PPTREE _ptTree2= (PPTREE) 0,_ptRes2= (PPTREE) 0;
#line 1310 "clpretty.ch"
                                                                                                                        _ptRes2 = MakeTree(pretty::NEWLINE, 1);
#line 1310 "clpretty.ch"
                                                                                                                        _ptTree2 = MakeString("1") ;
#line 1310 "clpretty.ch"
                                                                                                                        ReplaceTree(_ptRes2, 1, _ptTree2);
#line 1310 "clpretty.ch"
                                                                                                                        _ptTree1 = _ptRes2;
#line 1310 "clpretty.ch"
                                                                                                                        }
#line 1310 "clpretty.ch"
                                                                                                                        _ptTree0 = AddList( _ptTree0,_ptTree1);
#line 1310 "clpretty.ch"
                                                                                                                    }
#line 1310 "clpretty.ch"
                                                                                                                    attributeList = _ptTree0;
#line 1310 "clpretty.ch"
                                                                                                                    ;
#line 1310 "clpretty.ch"
                                                                                                                }
#line 1310 "clpretty.ch"
                                                                                                                
#line 1310 "clpretty.ch"
#line 1311 "clpretty.ch"
                                                                                                                if ( !hasIndented ) {
#line 1311 "clpretty.ch"
#line 1312 "clpretty.ch"
                                                                                                                                      char string [25];
                                                                                                                                      
#line 1312 "clpretty.ch"
#line 1313 "clpretty.ch"
                                                                                                                                      sprintf(string, "%d", nbTab + 1);
#line 1313 "clpretty.ch"
#line 1314 "clpretty.ch"
                                                                                                                                      {
#line 1314 "clpretty.ch"
                                                                                                                                      PPTREE _ptTree0= (PPTREE) 0 ;
#line 1314 "clpretty.ch"
                                                                                                                                      {
#line 1314 "clpretty.ch"
                                                                                                                                      PPTREE _ptTree1= (PPTREE) 0 ;
#line 1314 "clpretty.ch"
                                                                                                                                      {
#line 1314 "clpretty.ch"
                                                                                                                                      PPTREE _ptTree2= (PPTREE) 0,_ptRes2= (PPTREE) 0;
#line 1314 "clpretty.ch"
                                                                                                                                      _ptRes2 = MakeTree(pretty::TAB, 1);
#line 1314 "clpretty.ch"
                                                                                                                                      _ptTree2 = StoreRef(MakeString(string));
#line 1314 "clpretty.ch"
                                                                                                                                      ReplaceTree(_ptRes2, 1, _ptTree2);
#line 1314 "clpretty.ch"
                                                                                                                                      _ptTree1 = _ptRes2;
#line 1314 "clpretty.ch"
                                                                                                                                      }
#line 1314 "clpretty.ch"
                                                                                                                                      attributeList =  AddList( attributeList,_ptTree1);
#line 1314 "clpretty.ch"
                                                                                                                                      }
#line 1314 "clpretty.ch"
                                                                                                                                      {
#line 1314 "clpretty.ch"
                                                                                                                                      PPTREE _ptTree1= (PPTREE) 0 ;
#line 1314 "clpretty.ch"
                                                                                                                                      {
#line 1314 "clpretty.ch"
                                                                                                                                      PPTREE _ptTree2= (PPTREE) 0,_ptRes2= (PPTREE) 0;
#line 1314 "clpretty.ch"
                                                                                                                                      _ptRes2 = MakeTree(pretty::MARK, 0);
#line 1314 "clpretty.ch"
                                                                                                                                      _ptTree1 = _ptRes2;
#line 1314 "clpretty.ch"
                                                                                                                                      }
#line 1314 "clpretty.ch"
                                                                                                                                      attributeList =  AddList( attributeList,_ptTree1);
#line 1314 "clpretty.ch"
                                                                                                                                      }
#line 1314 "clpretty.ch"
                                                                                                                                      }
#line 1314 "clpretty.ch"
                                                                                                                                      
#line 1314 "clpretty.ch"
#line 1315 "clpretty.ch"
                                                                                                                                      hasIndented = 1 ;
#line 1315 "clpretty.ch"
#line 1316 "clpretty.ch"
                                                                                                                                      
#line 1316 "clpretty.ch"
#line 1316 "clpretty.ch"
                                                                                                                                      }
#line 1316 "clpretty.ch"
#line 1317 "clpretty.ch"
                                                                                                                PutAttr(lastTree, attributeList, POST_ATTR, PUT_END);
#line 1317 "clpretty.ch"
#line 1320 "clpretty.ch"
                                                                                                                delta = deltaRef ;
#line 1320 "clpretty.ch"
#line 1321 "clpretty.ch"
                                                                                                                _Baum1 = (PPTREE) 0 ;
#line 1321 "clpretty.ch"
                                                                                                                
#line 1321 "clpretty.ch"
#line 1321 "clpretty.ch"
                                                                                                                (inter=SNextTree(lastTree, _Baum1));
#line 1321 "clpretty.ch"
                                                                                                                
#line 1321 "clpretty.ch"
#line 1322 "clpretty.ch"
                                                                                                                while ( 1 ) {
#line 1322 "clpretty.ch"
#line 1322 "clpretty.ch"
                                                                                                                             PTREE _Baum3 ;
#line 1322 "clpretty.ch"
                                                                                                                             
#line 1322 "clpretty.ch"
#line 1323 "clpretty.ch"
                                                                                                                             (father=FatherTree(inter));
#line 1323 "clpretty.ch"
                                                                                                                             
#line 1323 "clpretty.ch"
#line 1324 "clpretty.ch"
                                                                                                                             while ( inter && ((_inter = (PPTREE)father,1) && 
#line 1324 "clpretty.ch"
                                                                                                                                                 (NumberTree(_inter) == pretty::ATTRIBUTS) &&
#line 1324 "clpretty.ch"
                                                                                                                                                 1) && ranktree(inter) != 1 ) {
#line 1324 "clpretty.ch"
#line 1324 "clpretty.ch"
                                                                                                                                                                                 PTREE _Baum2 ;
#line 1324 "clpretty.ch"
                                                                                                                                                                                 
#line 1324 "clpretty.ch"
#line 1325 "clpretty.ch"
                                                                                                                                                                                 _Baum2 = (PPTREE) 0 ;
#line 1325 "clpretty.ch"
                                                                                                                                                                                 
#line 1325 "clpretty.ch"
#line 1325 "clpretty.ch"
                                                                                                                                                                                 (inter=SNextTree(father, _Baum2));
#line 1325 "clpretty.ch"
                                                                                                                                                                                 
#line 1325 "clpretty.ch"
#line 1326 "clpretty.ch"
                                                                                                                                                                                 (father=FatherTree(inter));
#line 1326 "clpretty.ch"
                                                                                                                                                                                 
#line 1326 "clpretty.ch"
#line 1327 "clpretty.ch"
                                                                                                                                                                                 
#line 1327 "clpretty.ch"
#line 1327 "clpretty.ch"
                                                                                                                                                                                 }
#line 1327 "clpretty.ch"
#line 1328 "clpretty.ch"
                                                                                                                             if ( inter != (PTREE)for_elem ) 
#line 1328 "clpretty.ch"
#line 1329 "clpretty.ch"
                                                                                                                             AddTree(inter, delta);
#line 1329 "clpretty.ch"
                                                                                                                             else 
#line 1330 "clpretty.ch"
                                                                                                                             {
#line 1330 "clpretty.ch"
#line 1331 "clpretty.ch"
                                                                                                                             deltaLoc = delta - FindDelta(inter);
#line 1331 "clpretty.ch"
#line 1332 "clpretty.ch"
                                                                                                                             PutCoord(inter, x + deltaLoc, y, dx, lastMark);
#line 1332 "clpretty.ch"
#line 1333 "clpretty.ch"
                                                                                                                             break ;
                                                                                                                             
#line 1333 "clpretty.ch"
#line 1334 "clpretty.ch"
                                                                                                                             
#line 1334 "clpretty.ch"
#line 1334 "clpretty.ch"
                                                                                                                             }
                                                                                                                             
#line 1334 "clpretty.ch"
#line 1335 "clpretty.ch"
                                                                                                                             _Baum3 = (PPTREE) 0 ;
#line 1335 "clpretty.ch"
                                                                                                                             
#line 1335 "clpretty.ch"
#line 1335 "clpretty.ch"
                                                                                                                             (inter=NextTree(inter, _Baum3));
#line 1335 "clpretty.ch"
                                                                                                                             
#line 1335 "clpretty.ch"
#line 1336 "clpretty.ch"
                                                                                                                             
#line 1336 "clpretty.ch"
#line 1336 "clpretty.ch"
                                                                                                                             }
#line 1336 "clpretty.ch"
#line 1339 "clpretty.ch"
                                                                                                                TraitMark(for_elem, posRef);
#line 1339 "clpretty.ch"
#line 1340 "clpretty.ch"
                                                                                                                
#line 1340 "clpretty.ch"
#line 1340 "clpretty.ch"
                                                                                                              }
#line 1340 "clpretty.ch"
#line 1341 "clpretty.ch"
                                                                                            
#line 1341 "clpretty.ch"
#line 1341 "clpretty.ch"
                                                                                         } else 
#line 1341 "clpretty.ch"
                                                    if ( hasIndented ) {
#line 1341 "clpretty.ch"
#line 1344 "clpretty.ch"
                                                                            deltaLoc = delta - FindDelta(for_elem);
#line 1344 "clpretty.ch"
#line 1345 "clpretty.ch"
                                                                            PutCoord(for_elem, x + deltaLoc, y, dx, lastMark);
#line 1345 "clpretty.ch"
#line 1348 "clpretty.ch"
                                                                            TraitMark(for_elem, posRef);
#line 1348 "clpretty.ch"
#line 1349 "clpretty.ch"
                                                                            
#line 1349 "clpretty.ch"
#line 1349 "clpretty.ch"
                                                                        }
#line 1349 "clpretty.ch"
#line 1350 "clpretty.ch"
                                                    (lastTree=for_elem);
#line 1350 "clpretty.ch"
                                                    
#line 1350 "clpretty.ch"
#line 1351 "clpretty.ch"
                                                    
#line 1351 "clpretty.ch"
#line 1351 "clpretty.ch"
                                                }
                                                
#line 1351 "clpretty.ch"
#line 1355 "clpretty.ch"
                                                if ( y & 0x2 ) {
#line 1355 "clpretty.ch"
#line 1356 "clpretty.ch"
                                                                    delta = deltaRef = posRef - colRef ;
#line 1356 "clpretty.ch"
#line 1357 "clpretty.ch"
                                                                    
#line 1357 "clpretty.ch"
#line 1357 "clpretty.ch"
                                                                 } else 
#line 1357 "clpretty.ch"
#line 1358 "clpretty.ch"
                                                    deltaRef = posRef - x0 - dx ;
#line 1358 "clpretty.ch"
                                                
#line 1358 "clpretty.ch"
#line 1361 "clpretty.ch"
                                                goto for_continue1 ;
                                                
#line 1361 "clpretty.ch"
#line 1362 "clpretty.ch"
                                                
#line 1362 "clpretty.ch"
#line 1362 "clpretty.ch"
                                               } else 
#line 1362 "clpretty.ch"
                if ( hasIndented ) {
#line 1362 "clpretty.ch"
#line 1363 "clpretty.ch"
                                        AddTree(for_elem, delta);
#line 1363 "clpretty.ch"
#line 1364 "clpretty.ch"
                                        
#line 1364 "clpretty.ch"
#line 1364 "clpretty.ch"
                                    }
#line 1364 "clpretty.ch"
#line 1365 "clpretty.ch"
                
#line 1365 "clpretty.ch"
#line 1365 "clpretty.ch"
            }
            
#line 1365 "clpretty.ch"
#line 1365 "clpretty.ch"
            _iterator1.Current(_for_elem);
#line 1365 "clpretty.ch"
#line 1365 "clpretty.ch"
            continue ;
            
#line 1365 "clpretty.ch"
#line 1365 "clpretty.ch"
        for_continue1 : 
#line 1365 "clpretty.ch"
#line 1365 "clpretty.ch"
            _iterator1.Current(_for_elem);
#line 1365 "clpretty.ch"
#line 1365 "clpretty.ch"
            _iterator1.SkipSon(1);
#line 1365 "clpretty.ch"
#line 1365 "clpretty.ch"
            continue ;
            
#line 1365 "clpretty.ch"
#line 1365 "clpretty.ch"
        for_break1 : 
#line 1365 "clpretty.ch"
#line 1365 "clpretty.ch"
            break ;
            
#line 1365 "clpretty.ch"
#line 1365 "clpretty.ch"
            
#line 1365 "clpretty.ch"
#line 1365 "clpretty.ch"
        }
#line 1365 "clpretty.ch"
#line 1365 "clpretty.ch"
        
#line 1365 "clpretty.ch"
#line 1365 "clpretty.ch"
    }
    
#line 1365 "clpretty.ch"
#line 1368 "clpretty.ch"
    if ( hasIndented ) {
#line 1368 "clpretty.ch"
#line 1369 "clpretty.ch"
                            {
#line 1369 "clpretty.ch"
                                PPTREE _ptTree0=(PPTREE) 0;
#line 1369 "clpretty.ch"
                                _ptTree0 = (PPTREE) 0;
#line 1369 "clpretty.ch"
                                {
#line 1369 "clpretty.ch"
                                    PPTREE _ptTree1= (PPTREE) 0 ;
#line 1369 "clpretty.ch"
                                    {
#line 1369 "clpretty.ch"
                                        PPTREE _ptTree2= (PPTREE) 0,_ptRes2= (PPTREE) 0;
#line 1369 "clpretty.ch"
                                        _ptRes2 = MakeTree(pretty::UNMARK, 0);
#line 1369 "clpretty.ch"
                                        _ptTree1 = _ptRes2;
#line 1369 "clpretty.ch"
                                    }
#line 1369 "clpretty.ch"
                                    _ptTree0 = AddList( _ptTree0,_ptTree1);
#line 1369 "clpretty.ch"
                                }
#line 1369 "clpretty.ch"
                                list = _ptTree0;
#line 1369 "clpretty.ch"
                                ;
#line 1369 "clpretty.ch"
                            }
#line 1369 "clpretty.ch"
                            
#line 1369 "clpretty.ch"
#line 1370 "clpretty.ch"
                            PutAttr(lastTree, list, POST_ATTR, PUT_BEG);
#line 1370 "clpretty.ch"
#line 1371 "clpretty.ch"
                            
#line 1371 "clpretty.ch"
#line 1371 "clpretty.ch"
                        }
#line 1371 "clpretty.ch"
#line 1374 "clpretty.ch"
    if ( hasIndented && hasToPutVirt ) {
#line 1374 "clpretty.ch"
#line 1375 "clpretty.ch"
                                            char    string [10];
                                            
#line 1375 "clpretty.ch"
#line 1376 "clpretty.ch"
                                            sprintf(string, "%d", colRef);
#line 1376 "clpretty.ch"
#line 1377 "clpretty.ch"
                                            {
#line 1377 "clpretty.ch"
                                                PPTREE _ptTree0=(PPTREE) 0;
#line 1377 "clpretty.ch"
                                                _ptTree0 = (PPTREE) 0;
#line 1377 "clpretty.ch"
                                                {
#line 1377 "clpretty.ch"
                                                    PPTREE _ptTree1= (PPTREE) 0 ;
#line 1377 "clpretty.ch"
                                                    {
#line 1377 "clpretty.ch"
                                                        PPTREE _ptTree2= (PPTREE) 0,_ptRes2= (PPTREE) 0;
#line 1377 "clpretty.ch"
                                                        _ptRes2 = MakeTree(pretty::TAB_VIRT, 2);
#line 1377 "clpretty.ch"
                                                        _ptTree2 = StoreRef(MakeString(string));
#line 1377 "clpretty.ch"
                                                        ReplaceTree(_ptRes2, 1, _ptTree2);
#line 1377 "clpretty.ch"
                                                        _ptTree2 = MakeString("1") ;
#line 1377 "clpretty.ch"
                                                        ReplaceTree(_ptRes2, 2, _ptTree2);
#line 1377 "clpretty.ch"
                                                        _ptTree1 = _ptRes2;
#line 1377 "clpretty.ch"
                                                    }
#line 1377 "clpretty.ch"
                                                    _ptTree0 = AddList( _ptTree0,_ptTree1);
#line 1377 "clpretty.ch"
                                                }
#line 1377 "clpretty.ch"
                                                list = _ptTree0;
#line 1377 "clpretty.ch"
                                                ;
#line 1377 "clpretty.ch"
                                            }
#line 1377 "clpretty.ch"
                                            
#line 1377 "clpretty.ch"
#line 1378 "clpretty.ch"
                                            PutAttr(hasToPutVirt, list, PRE_ATTR, PUT_END);
#line 1378 "clpretty.ch"
#line 1379 "clpretty.ch"
                                            
#line 1379 "clpretty.ch"
#line 1379 "clpretty.ch"
                                         }
#line 1379 "clpretty.ch"
#line 1382 "clpretty.ch"
#line 1382 "clpretty.ch"
    for ( int nbNode = 0 ; nbNode < currTabTree ; nbNode++ ) {
#line 1382 "clpretty.ch"
#line 1383 "clpretty.ch"
                                                                    GetCoord(tabTree [nbNode].tree, &x, &y, &dx, &lastMark);
#line 1383 "clpretty.ch"
#line 1384 "clpretty.ch"
                                                                    deltaLoc = tabTree [nbNode].delta - FindDelta(tabTree [nbNode].tree);
#line 1384 "clpretty.ch"
#line 1385 "clpretty.ch"
                                                                    PutCoord(tabTree [nbNode].tree, x + deltaLoc, y, dx, lastMark);
#line 1385 "clpretty.ch"
#line 1386 "clpretty.ch"
                                                                    
#line 1386 "clpretty.ch"
#line 1386 "clpretty.ch"
                                                                  }
#line 1386 "clpretty.ch"
    
#line 1386 "clpretty.ch"
#line 1389 "clpretty.ch"
    UpdateSize(tree, OpType(tree));
#line 1389 "clpretty.ch"
#line 1392 "clpretty.ch"
    UnMarkCoordTree(tree);
#line 1392 "clpretty.ch"
#line 1393 "clpretty.ch"
    nbTab = oldNbTab ;
#line 1393 "clpretty.ch"
#line 1394 "clpretty.ch"
    
#line 1394 "clpretty.ch"
#line 1394 "clpretty.ch"
}
#line 1394 "clpretty.ch"

#line 1396 "clpretty.ch"

#line 1396 "clpretty.ch"
static  inline void LNewLineOrg ( int i )
#line 1396 "clpretty.ch"
{
#line 1396 "clpretty.ch"
#line 1396 "clpretty.ch"
    int _nextVal ;
    
#line 1396 "clpretty.ch"
#line 1398 "clpretty.ch"
    LNewLine(i);
#line 1398 "clpretty.ch"
#line 1399 "clpretty.ch"
    
#line 1399 "clpretty.ch"
#line 1399 "clpretty.ch"
}
#line 1399 "clpretty.ch"

#line 1401 "clpretty.ch"

#line 1401 "clpretty.ch"
void clpretty::LNewLine ( int i )
#line 1401 "clpretty.ch"
{
#line 1401 "clpretty.ch"
#line 1401 "clpretty.ch"
    int _nextVal ;
    
#line 1401 "clpretty.ch"
#line 1403 "clpretty.ch"
    if ( currCol > maxX ) 
#line 1403 "clpretty.ch"
#line 1404 "clpretty.ch"
        maxX = currCol ;
#line 1404 "clpretty.ch"
#line 1405 "clpretty.ch"
    LNewLineOrg(i);
#line 1405 "clpretty.ch"
#line 1406 "clpretty.ch"
    
#line 1406 "clpretty.ch"
#line 1406 "clpretty.ch"
}
#line 1406 "clpretty.ch"

#line 1410 "clpretty.ch"

#line 1410 "clpretty.ch"
void clpretty::DecompVirt ( const PTREE &paramTree )
#line 1410 "clpretty.ch"
{
#line 1410 "clpretty.ch"
    register PPTREE _inter ;
#line 1410 "clpretty.ch"

#line 1410 "clpretty.ch"
#line 1410 "clpretty.ch"
    int _nextVal ;
    
#line 1410 "clpretty.ch"
#line 1413 "clpretty.ch"
    
    int x0, y0, x, y, dx, dy ;
    
#line 1413 "clpretty.ch"
#line 1415 "clpretty.ch"
    GetCoord(paramTree, &x, &y, &dx, &dy);
#line 1415 "clpretty.ch"
#line 1416 "clpretty.ch"
    GetCoordAbs(paramTree, 0, &x0, &y0);
#line 1416 "clpretty.ch"
#line 1418 "clpretty.ch"
    PTREE   father ;
#line 1418 "clpretty.ch"
    
#line 1418 "clpretty.ch"
#line 1420 "clpretty.ch"
    (father=FatherTree(paramTree));
#line 1420 "clpretty.ch"
    
#line 1420 "clpretty.ch"
#line 1421 "clpretty.ch"
    while ( ((_inter = (PPTREE)father,1) && 
#line 1421 "clpretty.ch"
                (NumberTree(_inter) == pretty::ATTRIBUTS) &&
#line 1421 "clpretty.ch"
                1) ) 
#line 1421 "clpretty.ch"
#line 1422 "clpretty.ch"
        (father=FatherTree(father));
#line 1422 "clpretty.ch"
    
#line 1422 "clpretty.ch"
#line 1423 "clpretty.ch"
    GetCoordAbs(father, 0, &xFather, &yFather);
#line 1423 "clpretty.ch"
#line 1424 "clpretty.ch"
    isVirtMod = 1 ;
#line 1424 "clpretty.ch"
#line 1425 "clpretty.ch"
    GotoCol(dy + 1);
#line 1425 "clpretty.ch"
#line 1428 "clpretty.ch"
    Mark();
#line 1428 "clpretty.ch"
#line 1429 "clpretty.ch"
    currCol = x0 ;
#line 1429 "clpretty.ch"
#line 1430 "clpretty.ch"
    currLine = y0 ;
#line 1430 "clpretty.ch"
#line 1431 "clpretty.ch"
    maxX = 0 ;
#line 1431 "clpretty.ch"
#line 1432 "clpretty.ch"
    Decomp(paramTree);
#line 1432 "clpretty.ch"
#line 1433 "clpretty.ch"
    UnMark();
#line 1433 "clpretty.ch"
#line 1434 "clpretty.ch"
    isVirtMod = 0 ;
#line 1434 "clpretty.ch"
#line 1435 "clpretty.ch"
    currLine = currCol = 0 ;
#line 1435 "clpretty.ch"
#line 1436 "clpretty.ch"
    
#line 1436 "clpretty.ch"
#line 1436 "clpretty.ch"
}
#line 1436 "clpretty.ch"

#line 1438 "clpretty.ch"

#line 1438 "clpretty.ch"
void clpretty::TraitAttribut ( PTREE tree )
#line 1438 "clpretty.ch"
{
#line 1438 "clpretty.ch"
    register PPTREE _inter ;
#line 1438 "clpretty.ch"

#line 1438 "clpretty.ch"
#line 1438 "clpretty.ch"
    int _nextVal ;
    
#line 1438 "clpretty.ch"
#line 1440 "clpretty.ch"
    
    PTREE   son ;
#line 1440 "clpretty.ch"
    
#line 1440 "clpretty.ch"
#line 1441 "clpretty.ch"
    int i ;
    
#line 1441 "clpretty.ch"
#line 1443 "clpretty.ch"
    switch ( NumberTree(tree) ) {
#line 1443 "clpretty.ch"
#line 1445 "clpretty.ch"
        case pretty::NEWLINE : 
#line 1445 "clpretty.ch"
#line 1445 "clpretty.ch"
            (son=SonTree(tree, 1));
#line 1445 "clpretty.ch"
            
#line 1445 "clpretty.ch"
#line 1445 "clpretty.ch"
        _Case8 : 
#line 1445 "clpretty.ch"
#line 1445 "clpretty.ch"
            ;
#line 1445 "clpretty.ch"
#line 1445 "clpretty.ch"
            LNewLine(atoi(BrainyValue(son)));
#line 1445 "clpretty.ch"
#line 1446 "clpretty.ch"
            break ;
            
#line 1446 "clpretty.ch"
#line 1448 "clpretty.ch"
        case pretty::TAB : 
#line 1448 "clpretty.ch"
#line 1448 "clpretty.ch"
            (son=SonTree(tree, 1));
#line 1448 "clpretty.ch"
            
#line 1448 "clpretty.ch"
#line 1448 "clpretty.ch"
        _Case9 : 
#line 1448 "clpretty.ch"
#line 1448 "clpretty.ch"
            ;
#line 1448 "clpretty.ch"
#line 1448 "clpretty.ch"
            i = atoi(BrainyValue(son));
#line 1448 "clpretty.ch"
#line 1449 "clpretty.ch"
            while ( i-- > 0 ) 
#line 1449 "clpretty.ch"
#line 1450 "clpretty.ch"
                Tab();
#line 1450 "clpretty.ch"
            
#line 1450 "clpretty.ch"
#line 1451 "clpretty.ch"
            break ;
            
#line 1451 "clpretty.ch"
#line 1453 "clpretty.ch"
        case pretty::STR : 
#line 1453 "clpretty.ch"
#line 1453 "clpretty.ch"
            (son=SonTree(tree, 1));
#line 1453 "clpretty.ch"
            
#line 1453 "clpretty.ch"
#line 1453 "clpretty.ch"
        _Case10 : 
#line 1453 "clpretty.ch"
#line 1453 "clpretty.ch"
            ;
#line 1453 "clpretty.ch"
#line 1453 "clpretty.ch"
            DumpBrainyValue(son);
#line 1453 "clpretty.ch"
            
#line 1453 "clpretty.ch"
#line 1454 "clpretty.ch"
            break ;
            
#line 1454 "clpretty.ch"
#line 1456 "clpretty.ch"
        case pretty::MARK : 
#line 1456 "clpretty.ch"
#line 1456 "clpretty.ch"
        _Case11 : 
#line 1456 "clpretty.ch"
#line 1456 "clpretty.ch"
            ;
#line 1456 "clpretty.ch"
#line 1456 "clpretty.ch"
            Mark();
#line 1456 "clpretty.ch"
#line 1457 "clpretty.ch"
            break ;
            
#line 1457 "clpretty.ch"
#line 1459 "clpretty.ch"
        case pretty::UNMARK : 
#line 1459 "clpretty.ch"
#line 1459 "clpretty.ch"
        _Case12 : 
#line 1459 "clpretty.ch"
#line 1459 "clpretty.ch"
            ;
#line 1459 "clpretty.ch"
#line 1459 "clpretty.ch"
            UnMark();
#line 1459 "clpretty.ch"
#line 1460 "clpretty.ch"
            break ;
            
#line 1460 "clpretty.ch"
#line 1462 "clpretty.ch"
        case pretty::GOTO : 
#line 1462 "clpretty.ch"
#line 1462 "clpretty.ch"
            (son=SonTree(tree, 1));
#line 1462 "clpretty.ch"
            
#line 1462 "clpretty.ch"
#line 1462 "clpretty.ch"
        _Case13 : 
#line 1462 "clpretty.ch"
#line 1462 "clpretty.ch"
            ;
#line 1462 "clpretty.ch"
#line 1462 "clpretty.ch"
            GotoCol(atoi(BrainyValue(son)));
#line 1462 "clpretty.ch"
#line 1463 "clpretty.ch"
            break ;
            
#line 1463 "clpretty.ch"
    }
#line 1463 "clpretty.ch"
    
#line 1463 "clpretty.ch"
#line 1465 "clpretty.ch"
    
#line 1465 "clpretty.ch"
#line 1465 "clpretty.ch"
}
#line 1465 "clpretty.ch"

#line 1469 "clpretty.ch"

#line 1469 "clpretty.ch"
void clpretty::DecompList ( PTREE list, const char *sep, const char *term, int nbNl )
#line 1469 "clpretty.ch"
{
#line 1469 "clpretty.ch"
    register PPTREE _inter ;
#line 1469 "clpretty.ch"

#line 1469 "clpretty.ch"
#line 1469 "clpretty.ch"
    int _nextVal ;
    
#line 1469 "clpretty.ch"
#line 1472 "clpretty.ch"
    
    PTREE   elem ;
#line 1472 "clpretty.ch"
    
#line 1472 "clpretty.ch"
#line 1473 "clpretty.ch"
    int nbNewLine ;
    
#line 1473 "clpretty.ch"
#line 1475 "clpretty.ch"
    while ( ((_inter = (PPTREE)list,1) && 
#line 1475 "clpretty.ch"
                (NumberTree(_inter) == LIST) &&
#line 1475 "clpretty.ch"
                1) ) {
#line 1475 "clpretty.ch"
#line 1476 "clpretty.ch"
                        if ( ((elem=list.Nextl())) ) 
#line 1476 "clpretty.ch"
#line 1477 "clpretty.ch"
                            Decomp(elem);
#line 1477 "clpretty.ch"
#line 1478 "clpretty.ch"
                        if ( list ) {
#line 1478 "clpretty.ch"
#line 1479 "clpretty.ch"
                                        if ( sep ) 
#line 1479 "clpretty.ch"
#line 1480 "clpretty.ch"
                                            PrintString(sep);
#line 1480 "clpretty.ch"
#line 1481 "clpretty.ch"
                                        if ( (nbNewLine = nbNl) ) 
#line 1481 "clpretty.ch"
#line 1482 "clpretty.ch"
                                            LNewLine(nbNewLine);
#line 1482 "clpretty.ch"
#line 1483 "clpretty.ch"
                                        
#line 1483 "clpretty.ch"
#line 1483 "clpretty.ch"
                                     }
#line 1483 "clpretty.ch"
#line 1484 "clpretty.ch"
                        
#line 1484 "clpretty.ch"
#line 1484 "clpretty.ch"
                     }
#line 1484 "clpretty.ch"
#line 1485 "clpretty.ch"
    if ( term ) 
#line 1485 "clpretty.ch"
#line 1486 "clpretty.ch"
        PrintString(term);
#line 1486 "clpretty.ch"
#line 1487 "clpretty.ch"
    
#line 1487 "clpretty.ch"
#line 1487 "clpretty.ch"
}
#line 1487 "clpretty.ch"

#line 1491 "clpretty.ch"

#line 1491 "clpretty.ch"
int clpretty::commAtBeginning ( PTREE tree )
#line 1491 "clpretty.ch"
{
#line 1491 "clpretty.ch"
    register PPTREE _inter ;
#line 1491 "clpretty.ch"

#line 1491 "clpretty.ch"
#line 1491 "clpretty.ch"
    int _nextVal ;
    
#line 1491 "clpretty.ch"
#line 1494 "clpretty.ch"
    
    PTREE   father ;
#line 1494 "clpretty.ch"
    
#line 1494 "clpretty.ch"
#line 1496 "clpretty.ch"
    if ( ( _inter = 
#line 1496 "clpretty.ch"
            FatherTree(tree),((_inter = (PPTREE)_inter,1) && 
#line 1496 "clpretty.ch"
                                (NumberTree(_inter) == pretty::ATTRIBUTS) &&
#line 1496 "clpretty.ch"
                                1)) ) 
#line 1496 "clpretty.ch"
#line 1497 "clpretty.ch"
        (father=NFatherTree(tree,2));
#line 1497 "clpretty.ch"
    
#line 1497 "clpretty.ch"
    else 
#line 1497 "clpretty.ch"
#line 1499 "clpretty.ch"
        (father=FatherTree(tree));
#line 1499 "clpretty.ch"
        
#line 1499 "clpretty.ch"
    
#line 1499 "clpretty.ch"
#line 1500 "clpretty.ch"
    if ( (!father) ) 
#line 1500 "clpretty.ch"
#line 1501 "clpretty.ch"
        return 1 ;
    
#line 1501 "clpretty.ch"
#line 1502 "clpretty.ch"
    if ( ((_inter = (PPTREE)father,1) && 
#line 1502 "clpretty.ch"
            (NumberTree(_inter) == LIST) &&
#line 1502 "clpretty.ch"
            1) ) {
#line 1502 "clpretty.ch"
#line 1503 "clpretty.ch"
                    (father=NFatherTree(father,2));
#line 1503 "clpretty.ch"
                    
#line 1503 "clpretty.ch"
#line 1504 "clpretty.ch"
                    if ( (!father) ) {
#line 1504 "clpretty.ch"
#line 1505 "clpretty.ch"
                                        return 1 ;
                                        
#line 1505 "clpretty.ch"
#line 1506 "clpretty.ch"
                                        
#line 1506 "clpretty.ch"
#line 1506 "clpretty.ch"
                                       }
#line 1506 "clpretty.ch"
#line 1507 "clpretty.ch"
                    
#line 1507 "clpretty.ch"
#line 1507 "clpretty.ch"
                 }
#line 1507 "clpretty.ch"
#line 1508 "clpretty.ch"
    return 0 ;
    
#line 1508 "clpretty.ch"
#line 1509 "clpretty.ch"
    
#line 1509 "clpretty.ch"
#line 1509 "clpretty.ch"
}
#line 1509 "clpretty.ch"

#line 1513 "clpretty.ch"

#line 1513 "clpretty.ch"
int clpretty::comm ( PTREE paramTree, int type )
#line 1513 "clpretty.ch"
{
#line 1513 "clpretty.ch"
#line 1513 "clpretty.ch"
    int _nextVal ;
    
#line 1513 "clpretty.ch"
#line 1516 "clpretty.ch"
    
    char    *comment ;
    
#line 1516 "clpretty.ch"
#line 1517 "clpretty.ch"
    PTREE   father ;
#line 1517 "clpretty.ch"
    
#line 1517 "clpretty.ch"
#line 1518 "clpretty.ch"
    const char  *intStartComment, *intMiddleComment, *intEndComment, *intPlusComment ;
    
#line 1518 "clpretty.ch"
#line 1520 "clpretty.ch"
    intStartComment = startComment ? startComment : "/*";
#line 1520 "clpretty.ch"
#line 1521 "clpretty.ch"
    intMiddleComment = middleComment ? middleComment : "  ";
#line 1521 "clpretty.ch"
#line 1522 "clpretty.ch"
    intEndComment = endComment ? endComment : "*/";
#line 1522 "clpretty.ch"
#line 1523 "clpretty.ch"
    intPlusComment = plusComment ? plusComment : "//";
#line 1523 "clpretty.ch"
#line 1524 "clpretty.ch"
    if ( (!paramTree) || inhibateComment ) 
#line 1524 "clpretty.ch"
#line 1525 "clpretty.ch"
        return 0 ;
    
#line 1525 "clpretty.ch"
#line 1526 "clpretty.ch"
    if ( type == PRE && (comment = IsComm(paramTree, PRE)) ) {
#line 1526 "clpretty.ch"
#line 1527 "clpretty.ch"
                                                                        PTREE   inter = (PTREE)0 ;
#line 1527 "clpretty.ch"
                                                                        
#line 1527 "clpretty.ch"
#line 1528 "clpretty.ch"
                                                                        int beginning = Beginning();
                                                                        
#line 1528 "clpretty.ch"
#line 1527 "clpretty.ch"
                                                                        (inter=(PTREE)0);
#line 1527 "clpretty.ch"
                                                                        
#line 1527 "clpretty.ch"
#line 1529 "clpretty.ch"
                                                                        if ( !commAtBeginning(paramTree) ) {
#line 1529 "clpretty.ch"
#line 1534 "clpretty.ch"
                                                                                                                if ( beginning ) {
#line 1534 "clpretty.ch"
#line 1535 "clpretty.ch"
                                                                                                                                  if ( *comment == *(intPlusComment + 1) && *(comment + 1) == ' ' ) 
#line 1535 "clpretty.ch"
#line 1536 "clpretty.ch"
                                                                                                                                  LNewLine(2);
#line 1536 "clpretty.ch"
                                                                                                                                  else 
#line 1537 "clpretty.ch"
                                                                                                                                  if ( *comment == ' ' ) 
#line 1537 "clpretty.ch"
#line 1538 "clpretty.ch"
                                                                                                                                  LNewLine(2);
#line 1538 "clpretty.ch"
                                                                                                                                  else 
#line 1538 "clpretty.ch"
#line 1540 "clpretty.ch"
                                                                                                                                  LNewLine(1);
#line 1540 "clpretty.ch"
                                                                                                                                  
#line 1540 "clpretty.ch"
                                                                                                                                  
#line 1540 "clpretty.ch"
#line 1541 "clpretty.ch"
                                                                                                                                  
#line 1541 "clpretty.ch"
#line 1541 "clpretty.ch"
                                                                                                                                  } else 
#line 1541 "clpretty.ch"
#line 1542 "clpretty.ch"
                                                                                                                    Space(1);
#line 1542 "clpretty.ch"
                                                                                                                    
#line 1542 "clpretty.ch"
                                                                                                                
#line 1542 "clpretty.ch"
#line 1543 "clpretty.ch"
                                                                                                                
#line 1543 "clpretty.ch"
#line 1543 "clpretty.ch"
                                                                                                              }
#line 1543 "clpretty.ch"
#line 1544 "clpretty.ch"
                                                                        do {
#line 1544 "clpretty.ch"
#line 1545 "clpretty.ch"
                                                                            if ( inter ) 
#line 1545 "clpretty.ch"
#line 1546 "clpretty.ch"
                                                                                comment = BrainyValue(inter);
#line 1546 "clpretty.ch"
#line 1548 "clpretty.ch"
                                                                            Mark();
#line 1548 "clpretty.ch"
                                                                            if ( *comment == *(intPlusComment + 1) ) 
#line 1548 "clpretty.ch"
#line 1549 "clpretty.ch"
                                                                                (inter=PrintCommE(paramTree, PRE, inter, intPlusComment + 1, intPlusComment + 1, ""));
#line 1549 "clpretty.ch"
                                                                            
#line 1549 "clpretty.ch"
                                                                            else 
#line 1549 "clpretty.ch"
#line 1551 "clpretty.ch"
                                                                                (inter=PrintCommE(paramTree, PRE, inter, intMiddleComment, intStartComment, intEndComment));
#line 1551 "clpretty.ch"
                                                                                
#line 1551 "clpretty.ch"
                                                                            
#line 1551 "clpretty.ch"
                                                                            UnMark();
#line 1551 "clpretty.ch"
                                                                            
#line 1551 "clpretty.ch"
#line 1555 "clpretty.ch"
                                                                            if ( beginning || *comment == *(intPlusComment + 1) ) {
#line 1555 "clpretty.ch"
#line 1556 "clpretty.ch"
                                                                                                                                         LNewLine(1);
#line 1556 "clpretty.ch"
                                                                                                                                         
#line 1556 "clpretty.ch"
#line 1557 "clpretty.ch"
                                                                                                                                         
#line 1557 "clpretty.ch"
#line 1557 "clpretty.ch"
                                                                                                                                         } else 
#line 1557 "clpretty.ch"
#line 1558 "clpretty.ch"
                                                                                Space(1);
#line 1558 "clpretty.ch"
                                                                                
#line 1558 "clpretty.ch"
                                                                            
#line 1558 "clpretty.ch"
#line 1559 "clpretty.ch"
                                                                            
#line 1559 "clpretty.ch"
#line 1559 "clpretty.ch"
                                                                           } 
#line 1559 "clpretty.ch"
                                                                        while ( inter );
#line 1559 "clpretty.ch"
                                                                        
#line 1559 "clpretty.ch"
#line 1560 "clpretty.ch"
                                                                        return 1 ;
                                                                        
#line 1560 "clpretty.ch"
#line 1561 "clpretty.ch"
                                                                        
#line 1561 "clpretty.ch"
#line 1561 "clpretty.ch"
                                                                    } else 
#line 1561 "clpretty.ch"
    if ( type == POST && (comment = IsComm(paramTree, POST)) && paramTree != postInhibitor ) {
#line 1561 "clpretty.ch"
#line 1562 "clpretty.ch"
                                                                                                        PTREE   inter = (PTREE)0 ;
#line 1562 "clpretty.ch"
                                                                                                        
#line 1562 "clpretty.ch"
#line 1562 "clpretty.ch"
                                                                                                        (inter=(PTREE)0);
#line 1562 "clpretty.ch"
                                                                                                        
#line 1562 "clpretty.ch"
#line 1564 "clpretty.ch"
                                                                                                        Mark();
#line 1564 "clpretty.ch"
                                                                                                        do {
#line 1564 "clpretty.ch"
#line 1565 "clpretty.ch"
                                                                                                            if ( inter ) 
#line 1565 "clpretty.ch"
#line 1566 "clpretty.ch"
                                                                                                                comment = BrainyValue(inter);
#line 1566 "clpretty.ch"
#line 1567 "clpretty.ch"
                                                                                                            Space(1);
#line 1567 "clpretty.ch"
                                                                                                            
#line 1567 "clpretty.ch"
#line 1568 "clpretty.ch"
                                                                                                            Mark();
#line 1568 "clpretty.ch"
                                                                                                            if ( *comment == *(intPlusComment + 1) ) 
#line 1568 "clpretty.ch"
#line 1569 "clpretty.ch"
                                                                                                                (inter=PrintCommE(paramTree, POST, inter, intPlusComment + 1, intPlusComment + 1, ""));
#line 1569 "clpretty.ch"
                                                                                                            
#line 1569 "clpretty.ch"
                                                                                                            else 
#line 1569 "clpretty.ch"
#line 1571 "clpretty.ch"
                                                                                                                (inter=PrintCommE(paramTree, POST, inter, intMiddleComment, intStartComment, intEndComment));
#line 1571 "clpretty.ch"
                                                                                                                
#line 1571 "clpretty.ch"
                                                                                                            
#line 1571 "clpretty.ch"
                                                                                                            UnMark();
#line 1571 "clpretty.ch"
                                                                                                            
#line 1571 "clpretty.ch"
#line 1573 "clpretty.ch"
                                                                                                            if ( PrePost() && inter || *comment == *(intPlusComment + 1) ) {
#line 1573 "clpretty.ch"
#line 1574 "clpretty.ch"
                                                                                                                                                                                   LNewLine(1);
#line 1574 "clpretty.ch"
                                                                                                                                                                                   
#line 1574 "clpretty.ch"
#line 1575 "clpretty.ch"
                                                                                                                                                                                   
#line 1575 "clpretty.ch"
#line 1575 "clpretty.ch"
                                                                                                                                                                                   } else 
#line 1575 "clpretty.ch"
#line 1576 "clpretty.ch"
                                                                                                                Space(1);
#line 1576 "clpretty.ch"
                                                                                                                
#line 1576 "clpretty.ch"
                                                                                                            
#line 1576 "clpretty.ch"
#line 1577 "clpretty.ch"
                                                                                                            
#line 1577 "clpretty.ch"
#line 1577 "clpretty.ch"
                                                                                                           } 
#line 1577 "clpretty.ch"
                                                                                                        while ( inter );
#line 1577 "clpretty.ch"
                                                                                                        
#line 1577 "clpretty.ch"
                                                                                                        UnMark();
#line 1577 "clpretty.ch"
                                                                                                        
#line 1577 "clpretty.ch"
#line 1579 "clpretty.ch"
                                                                                                        return 1 ;
                                                                                                        
#line 1579 "clpretty.ch"
#line 1580 "clpretty.ch"
                                                                                                        
#line 1580 "clpretty.ch"
#line 1580 "clpretty.ch"
                                                                                                      }
#line 1580 "clpretty.ch"
#line 1581 "clpretty.ch"
    return 0 ;
    
#line 1581 "clpretty.ch"
#line 1582 "clpretty.ch"
    
#line 1582 "clpretty.ch"
#line 1582 "clpretty.ch"
}
#line 1582 "clpretty.ch"

#line 1586 "clpretty.ch"

#line 1586 "clpretty.ch"
void clpretty::Decomp ( const PTREE &paramTree, int funcAlone )
#line 1586 "clpretty.ch"
{
#line 1586 "clpretty.ch"
    register PPTREE _inter ;
#line 1586 "clpretty.ch"

#line 1586 "clpretty.ch"
#line 1586 "clpretty.ch"
    int _nextVal ;
    
#line 1586 "clpretty.ch"
#line 1589 "clpretty.ch"
    
    PTREE   exp, stat, name ;
#line 1589 "clpretty.ch"
    
#line 1589 "clpretty.ch"
#line 1590 "clpretty.ch"
    int oldXFather = xFather, oldYFather = yFather ;
    
#line 1590 "clpretty.ch"
#line 1591 "clpretty.ch"
    int oldMaxX = maxX ;
    
#line 1591 "clpretty.ch"
#line 1592 "clpretty.ch"
    int begCurrCol = currCol, begCurrLine = currLine ;
    
#line 1592 "clpretty.ch"
#line 1593 "clpretty.ch"
    int theMark = GetMark();
    
#line 1593 "clpretty.ch"
#line 1594 "clpretty.ch"
    int startNewLine ;
    
#line 1594 "clpretty.ch"
#line 1597 "clpretty.ch"
    startNewLine = lastLineOn == currLine ? 0 : (lastLineOn = currLine, 0x4);
#line 1597 "clpretty.ch"
#line 1598 "clpretty.ch"
    if ( (!paramTree) ) 
#line 1598 "clpretty.ch"
#line 1599 "clpretty.ch"
        return ;
    
#line 1599 "clpretty.ch"
#line 1603 "clpretty.ch"
    if ( isVirtMod && !(((_inter = (PPTREE)paramTree,1) && 
#line 1603 "clpretty.ch"
                            (NumberTree(_inter) == pretty::ATTRIBUTS) &&
#line 1603 "clpretty.ch"
                            1)) ) {
#line 1603 "clpretty.ch"
#line 1604 "clpretty.ch"
                                    xFather = currCol, yFather = currLine ;
#line 1604 "clpretty.ch"
#line 1605 "clpretty.ch"
                                    maxX = currCol ;
#line 1605 "clpretty.ch"
#line 1606 "clpretty.ch"
                                    
#line 1606 "clpretty.ch"
#line 1606 "clpretty.ch"
                                  }
#line 1606 "clpretty.ch"
#line 1608 "clpretty.ch"
    {
#line 1608 "clpretty.ch"
#line 1608 "clpretty.ch"
        int commPre = 0 ;
        
#line 1608 "clpretty.ch"
#line 1613 "clpretty.ch"
        if ( !Beginning() && (commPre = (int)(long)IsComm(paramTree, PRE)) ) {
#line 1613 "clpretty.ch"
#line 1614 "clpretty.ch"
                                                                                            Mark();
#line 1614 "clpretty.ch"
#line 1619 "clpretty.ch"
                                                                                            currCol++ ;
#line 1619 "clpretty.ch"
#line 1620 "clpretty.ch"
                                                                                            comm(paramTree, PRE);
#line 1620 "clpretty.ch"
#line 1621 "clpretty.ch"
                                                                                            
#line 1621 "clpretty.ch"
#line 1621 "clpretty.ch"
                                                                                        } else 
#line 1621 "clpretty.ch"
#line 1622 "clpretty.ch"
            comm(paramTree, PRE);
#line 1622 "clpretty.ch"
        
#line 1622 "clpretty.ch"
#line 1623 "clpretty.ch"
        IntDecomp(paramTree, funcAlone);
#line 1623 "clpretty.ch"
#line 1624 "clpretty.ch"
        comm(paramTree, POST);
#line 1624 "clpretty.ch"
#line 1625 "clpretty.ch"
        if ( commPre ) {
#line 1625 "clpretty.ch"
#line 1626 "clpretty.ch"
                            UnMark();
#line 1626 "clpretty.ch"
#line 1627 "clpretty.ch"
                            
#line 1627 "clpretty.ch"
#line 1627 "clpretty.ch"
                        }
#line 1627 "clpretty.ch"
#line 1628 "clpretty.ch"
        
#line 1628 "clpretty.ch"
#line 1628 "clpretty.ch"
    }
    
#line 1628 "clpretty.ch"
#line 1629 "clpretty.ch"
    if ( isVirtMod && !(((_inter = (PPTREE)paramTree,1) && 
#line 1629 "clpretty.ch"
                            (NumberTree(_inter) == pretty::ATTRIBUTS) &&
#line 1629 "clpretty.ch"
                            1)) ) {
#line 1629 "clpretty.ch"
#line 1630 "clpretty.ch"
                                    xFather = oldXFather, yFather = oldYFather ;
#line 1630 "clpretty.ch"
#line 1634 "clpretty.ch"
                                    if ( currCol > maxX ) 
#line 1634 "clpretty.ch"
#line 1635 "clpretty.ch"
                                        maxX = currCol ;
#line 1635 "clpretty.ch"
#line 1639 "clpretty.ch"
                                    PutCoord(paramTree, begCurrCol - xFather, (currLine - begCurrLine > 0 ? 2 : 0) | startNewLine, maxX - begCurrCol, theMark);
#line 1639 "clpretty.ch"
#line 1642 "clpretty.ch"
                                    if ( maxX < oldMaxX ) 
#line 1642 "clpretty.ch"
#line 1643 "clpretty.ch"
                                        maxX = oldMaxX ;
#line 1643 "clpretty.ch"
#line 1644 "clpretty.ch"
                                    
#line 1644 "clpretty.ch"
#line 1644 "clpretty.ch"
                                  }
#line 1644 "clpretty.ch"
#line 1645 "clpretty.ch"
    
#line 1645 "clpretty.ch"
#line 1645 "clpretty.ch"
}
#line 1645 "clpretty.ch"

#line 1649 "clpretty.ch"

#line 1649 "clpretty.ch"
void clpretty::CleanAttributs ( PTREE tree )
#line 1649 "clpretty.ch"
{
#line 1649 "clpretty.ch"
    register PPTREE _inter ;
#line 1649 "clpretty.ch"

#line 1649 "clpretty.ch"
#line 1649 "clpretty.ch"
    int _nextVal ;
    
#line 1649 "clpretty.ch"
#line 1652 "clpretty.ch"
    
    PTREE   son ;
#line 1652 "clpretty.ch"
    
#line 1652 "clpretty.ch"
#line 1653 "clpretty.ch"
    int x, y, dx, posMark ;
    
#line 1653 "clpretty.ch"
#line 1655 "clpretty.ch"
    {
#line 1655 "clpretty.ch"
#line 1655 "clpretty.ch"
        ItPtree _iterator1 (tree, (PPTREE) 0) ;
        
#line 1655 "clpretty.ch"
#line 1655 "clpretty.ch"
        PTREE   _for_elem ;
#line 1655 "clpretty.ch"
        
#line 1655 "clpretty.ch"
#line 1655 "clpretty.ch"
        _iterator1.AllSearch(1);
#line 1655 "clpretty.ch"
#line 1655 "clpretty.ch"
        while ( (_for_elem=_iterator1++) ) {
#line 1655 "clpretty.ch"
#line 1655 "clpretty.ch"
            {
#line 1655 "clpretty.ch"
#line 1656 "clpretty.ch"
                if ( ((_inter = (PPTREE)for_elem,1) && 
#line 1656 "clpretty.ch"
                        (NumberTree(_inter) == pretty::ATTRIBUTS) &&
#line 1656 "clpretty.ch"
                        ((son=SonTree(_inter,1)),1) &&
#line 1656 "clpretty.ch"
                        1) && FatherTree(for_elem) ) {
#line 1656 "clpretty.ch"
#line 1657 "clpretty.ch"
                                                        replacetree(FatherTree(for_elem), ranktree(for_elem), son);
#line 1657 "clpretty.ch"
#line 1658 "clpretty.ch"
                                                        for_elem = son ;
#line 1658 "clpretty.ch"
#line 1659 "clpretty.ch"
                                                        
#line 1659 "clpretty.ch"
#line 1659 "clpretty.ch"
                                                      }
#line 1659 "clpretty.ch"
#line 1660 "clpretty.ch"
                if ( GetCoord(for_elem, &x, &y, &dx, &posMark) ) {
#line 1660 "clpretty.ch"
#line 1661 "clpretty.ch"
                                                                            FreeCoord(for_elem);
#line 1661 "clpretty.ch"
#line 1662 "clpretty.ch"
                                                                            
#line 1662 "clpretty.ch"
#line 1662 "clpretty.ch"
                                                                           }
#line 1662 "clpretty.ch"
#line 1663 "clpretty.ch"
                
#line 1663 "clpretty.ch"
#line 1663 "clpretty.ch"
            }
            
#line 1663 "clpretty.ch"
#line 1663 "clpretty.ch"
            _iterator1.Current(_for_elem);
#line 1663 "clpretty.ch"
#line 1663 "clpretty.ch"
            continue ;
            
#line 1663 "clpretty.ch"
#line 1663 "clpretty.ch"
        for_continue1 : 
#line 1663 "clpretty.ch"
#line 1663 "clpretty.ch"
            _iterator1.Current(_for_elem);
#line 1663 "clpretty.ch"
#line 1663 "clpretty.ch"
            _iterator1.SkipSon(1);
#line 1663 "clpretty.ch"
#line 1663 "clpretty.ch"
            continue ;
            
#line 1663 "clpretty.ch"
#line 1663 "clpretty.ch"
        for_break1 : 
#line 1663 "clpretty.ch"
#line 1663 "clpretty.ch"
            break ;
            
#line 1663 "clpretty.ch"
#line 1663 "clpretty.ch"
            
#line 1663 "clpretty.ch"
#line 1663 "clpretty.ch"
        }
#line 1663 "clpretty.ch"
#line 1663 "clpretty.ch"
        
#line 1663 "clpretty.ch"
#line 1663 "clpretty.ch"
    }
    
#line 1663 "clpretty.ch"
#line 1664 "clpretty.ch"
    
#line 1664 "clpretty.ch"
#line 1664 "clpretty.ch"
}
#line 1664 "clpretty.ch"

#line 1669 "clpretty.ch"

#line 1669 "clpretty.ch"
void clpretty::DisplayError ( PTREE printList, bool current )
#line 1669 "clpretty.ch"
{
#line 1669 "clpretty.ch"
    register PPTREE _inter ;
#line 1669 "clpretty.ch"

#line 1669 "clpretty.ch"
#line 1669 "clpretty.ch"
    int _nextVal ;
    
#line 1669 "clpretty.ch"
#line 1672 "clpretty.ch"
    
    PTREE   elem ;
#line 1672 "clpretty.ch"
    
#line 1672 "clpretty.ch"
#line 1673 "clpretty.ch"
    int oldOutput = output ;
    
#line 1673 "clpretty.ch"
#line 1674 "clpretty.ch"
    PTREE   oldList = (PTREE)0 ;
#line 1674 "clpretty.ch"
    
#line 1674 "clpretty.ch"
#line 1674 "clpretty.ch"
    (oldList=printList);
#line 1674 "clpretty.ch"
    
#line 1674 "clpretty.ch"
#line 1676 "clpretty.ch"
    if ( current ) {
#line 1676 "clpretty.ch"
#line 1677 "clpretty.ch"
                        Flush();
#line 1677 "clpretty.ch"
#line 1678 "clpretty.ch"
                        LNewLine(2);
#line 1678 "clpretty.ch"
                        
#line 1678 "clpretty.ch"
#line 1679 "clpretty.ch"
                        if ( !emacsCompatibleError ) {
#line 1679 "clpretty.ch"
#line 1680 "clpretty.ch"
                                                        PrintString("====> ");
#line 1680 "clpretty.ch"
#line 1681 "clpretty.ch"
                                                        
#line 1681 "clpretty.ch"
#line 1681 "clpretty.ch"
                                                       } else 
#line 1681 "clpretty.ch"
                        {
#line 1681 "clpretty.ch"
#line 1682 "clpretty.ch"
                            PrintString("==================================");
#line 1682 "clpretty.ch"
#line 1682 "clpretty.ch"
                            LNewLine(1);
#line 1682 "clpretty.ch"
                            
#line 1682 "clpretty.ch"
#line 1683 "clpretty.ch"
                            
#line 1683 "clpretty.ch"
#line 1683 "clpretty.ch"
                        }
                        
#line 1683 "clpretty.ch"
#line 1684 "clpretty.ch"
                        while ( ((elem=(printList?printList.Nextl():(PPTREE)0))) || !((!printList)) ) {
#line 1684 "clpretty.ch"
#line 1685 "clpretty.ch"
                                                                                                                switch ( NumberTree(elem) ) {
#line 1685 "clpretty.ch"
#line 1687 "clpretty.ch"
                                                                                                                    case TERM_TREE : 
#line 1687 "clpretty.ch"
#line 1687 "clpretty.ch"
                                                                                                                    _Case18 : 
#line 1687 "clpretty.ch"
#line 1687 "clpretty.ch"
                                                                                                                        ;
#line 1687 "clpretty.ch"
#line 1687 "clpretty.ch"
                                                                                                                        DumpBrainyValue(elem);
#line 1687 "clpretty.ch"
                                                                                                                        
#line 1687 "clpretty.ch"
#line 1688 "clpretty.ch"
                                                                                                                        break ;
                                                                                                                        
#line 1688 "clpretty.ch"
#line 1690 "clpretty.ch"
                                                                                                                    default : 
#line 1690 "clpretty.ch"
#line 1690 "clpretty.ch"
                                                                                                                    _Case19 : 
#line 1690 "clpretty.ch"
#line 1690 "clpretty.ch"
                                                                                                                        ;
#line 1690 "clpretty.ch"
#line 1690 "clpretty.ch"
                                                                                                                        LNewLine(1);
#line 1690 "clpretty.ch"
                                                                                                                        
#line 1690 "clpretty.ch"
#line 1691 "clpretty.ch"
                                                                                                                        Decomp(elem, true);
#line 1691 "clpretty.ch"
#line 1692 "clpretty.ch"
                                                                                                                        LNewLine(1);
#line 1692 "clpretty.ch"
                                                                                                                        
#line 1692 "clpretty.ch"
#line 1693 "clpretty.ch"
                                                                                                                        break ;
                                                                                                                        
#line 1693 "clpretty.ch"
                                                                                                                }
#line 1693 "clpretty.ch"
                                                                                                                
#line 1693 "clpretty.ch"
#line 1695 "clpretty.ch"
                                                                                                                
#line 1695 "clpretty.ch"
#line 1695 "clpretty.ch"
                                                                                                             }
#line 1695 "clpretty.ch"
#line 1696 "clpretty.ch"
                        LNewLine(2);
#line 1696 "clpretty.ch"
                        
#line 1696 "clpretty.ch"
#line 1697 "clpretty.ch"
                        
#line 1697 "clpretty.ch"
#line 1697 "clpretty.ch"
                    }
#line 1697 "clpretty.ch"
#line 1698 "clpretty.ch"
    (printList=oldList);
#line 1698 "clpretty.ch"
    
#line 1698 "clpretty.ch"
#line 1699 "clpretty.ch"
    output = 2 ;
#line 1699 "clpretty.ch"
#line 1700 "clpretty.ch"
    if ( !emacsCompatibleError ) {
#line 1700 "clpretty.ch"
#line 1701 "clpretty.ch"
                                    PrintString("====> ");
#line 1701 "clpretty.ch"
#line 1702 "clpretty.ch"
                                    
#line 1702 "clpretty.ch"
#line 1702 "clpretty.ch"
                                   } else 
#line 1702 "clpretty.ch"
    {
#line 1702 "clpretty.ch"
#line 1703 "clpretty.ch"
        PrintString("===================================");
#line 1703 "clpretty.ch"
#line 1703 "clpretty.ch"
        LNewLine(2);
#line 1703 "clpretty.ch"
        
#line 1703 "clpretty.ch"
#line 1704 "clpretty.ch"
        
#line 1704 "clpretty.ch"
#line 1704 "clpretty.ch"
    }
    
#line 1704 "clpretty.ch"
#line 1705 "clpretty.ch"
    while ( ((_inter = (PPTREE)printList,1) && 
#line 1705 "clpretty.ch"
                (NumberTree(_inter) == LIST) &&
#line 1705 "clpretty.ch"
                1) && ((elem=(printList?printList.Nextl():(PPTREE)0))) ) {
#line 1705 "clpretty.ch"
#line 1706 "clpretty.ch"
                                                                                switch ( NumberTree(elem) ) {
#line 1706 "clpretty.ch"
#line 1708 "clpretty.ch"
                                                                                    case TERM_TREE : 
#line 1708 "clpretty.ch"
#line 1708 "clpretty.ch"
                                                                                    _Case20 : 
#line 1708 "clpretty.ch"
#line 1708 "clpretty.ch"
                                                                                        ;
#line 1708 "clpretty.ch"
#line 1708 "clpretty.ch"
                                                                                        DumpBrainyValue(elem);
#line 1708 "clpretty.ch"
                                                                                        
#line 1708 "clpretty.ch"
#line 1709 "clpretty.ch"
                                                                                        break ;
                                                                                        
#line 1709 "clpretty.ch"
#line 1711 "clpretty.ch"
                                                                                    default : 
#line 1711 "clpretty.ch"
#line 1711 "clpretty.ch"
                                                                                    _Case21 : 
#line 1711 "clpretty.ch"
#line 1711 "clpretty.ch"
                                                                                        ;
#line 1711 "clpretty.ch"
#line 1711 "clpretty.ch"
                                                                                        LNewLine(1);
#line 1711 "clpretty.ch"
                                                                                        
#line 1711 "clpretty.ch"
#line 1712 "clpretty.ch"
                                                                                        Decomp(elem, true);
#line 1712 "clpretty.ch"
#line 1713 "clpretty.ch"
                                                                                        LNewLine(1);
#line 1713 "clpretty.ch"
                                                                                        
#line 1713 "clpretty.ch"
#line 1714 "clpretty.ch"
                                                                                        break ;
                                                                                        
#line 1714 "clpretty.ch"
                                                                                }
#line 1714 "clpretty.ch"
                                                                                
#line 1714 "clpretty.ch"
#line 1716 "clpretty.ch"
                                                                                
#line 1716 "clpretty.ch"
#line 1716 "clpretty.ch"
                                                                              }
#line 1716 "clpretty.ch"
#line 1717 "clpretty.ch"
    LNewLine(2);
#line 1717 "clpretty.ch"
    
#line 1717 "clpretty.ch"
#line 1718 "clpretty.ch"
    output = oldOutput ;
#line 1718 "clpretty.ch"
#line 1719 "clpretty.ch"
    
#line 1719 "clpretty.ch"
#line 1719 "clpretty.ch"
}
#line 1719 "clpretty.ch"

#line 1719 "clpretty.ch"
#line 1719 "clpretty.ch"
static void clpretty_Anchor () { int i = 1;} 
#line 1719 "clpretty.ch"
/*Well done my boy */ 
#line 1719 "clpretty.ch"

