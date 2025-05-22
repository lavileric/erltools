
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
                                                                                            rank = ++posStack [readStack].rank ;
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
#line 559 "clpretty.ch"
                                                sizeTabTree += 10 ;
#line 559 "clpretty.ch"
#line 560 "clpretty.ch"
                                            
#line 560 "clpretty.ch"
#line 560 "clpretty.ch"
                                        }
#line 560 "clpretty.ch"
#line 563 "clpretty.ch"
#line 563 "clpretty.ch"
    for ( int i = 0 ; i < currTabTree ; i++ ) 
#line 563 "clpretty.ch"
#line 564 "clpretty.ch"
        if ( tabTree [i].tree == (PPTREE)tree ) {
#line 564 "clpretty.ch"
#line 565 "clpretty.ch"
                                                        tabTree [i].delta = delta ;
#line 565 "clpretty.ch"
#line 566 "clpretty.ch"
                                                        return ;
                                                        
#line 566 "clpretty.ch"
#line 567 "clpretty.ch"
                                                        
#line 567 "clpretty.ch"
#line 567 "clpretty.ch"
                                                      }
#line 567 "clpretty.ch"
    
#line 567 "clpretty.ch"
#line 570 "clpretty.ch"
    if ( currTabTree < sizeTabTree ) {
#line 570 "clpretty.ch"
#line 571 "clpretty.ch"
                                        tabTree [currTabTree].tree = tree ;
#line 571 "clpretty.ch"
#line 572 "clpretty.ch"
                                        tabTree [currTabTree].delta = delta ;
#line 572 "clpretty.ch"
#line 573 "clpretty.ch"
                                        currTabTree++ ;
#line 573 "clpretty.ch"
#line 574 "clpretty.ch"
                                        
#line 574 "clpretty.ch"
#line 574 "clpretty.ch"
                                       }
#line 574 "clpretty.ch"
#line 575 "clpretty.ch"
    
#line 575 "clpretty.ch"
#line 575 "clpretty.ch"
}
#line 575 "clpretty.ch"

#line 579 "clpretty.ch"

#line 579 "clpretty.ch"
int clpretty::FindDelta ( PTREE tree )
#line 579 "clpretty.ch"
{
#line 579 "clpretty.ch"
#line 579 "clpretty.ch"
    int _nextVal ;
    
#line 579 "clpretty.ch"
#line 585 "clpretty.ch"
    (tree=fathertree(tree));
#line 585 "clpretty.ch"
    
#line 585 "clpretty.ch"
#line 587 "clpretty.ch"
    int i ;
    
#line 587 "clpretty.ch"
#line 589 "clpretty.ch"
    while ( tree ) {
#line 589 "clpretty.ch"
#line 590 "clpretty.ch"
#line 590 "clpretty.ch"
                        for ( i = 0 ; i < currTabTree ; i++ ) 
#line 590 "clpretty.ch"
#line 591 "clpretty.ch"
                            if ( tabTree [i].tree == (PPTREE)tree ) 
#line 591 "clpretty.ch"
#line 592 "clpretty.ch"
                                return tabTree [i].delta ;
                            
#line 592 "clpretty.ch"
                        
#line 592 "clpretty.ch"
#line 593 "clpretty.ch"
                        (tree=fathertree(tree));
#line 593 "clpretty.ch"
                        
#line 593 "clpretty.ch"
#line 594 "clpretty.ch"
                        
#line 594 "clpretty.ch"
#line 594 "clpretty.ch"
                    }
#line 594 "clpretty.ch"
#line 597 "clpretty.ch"
    return 0 ;
    
#line 597 "clpretty.ch"
#line 598 "clpretty.ch"
    
#line 598 "clpretty.ch"
#line 598 "clpretty.ch"
}
#line 598 "clpretty.ch"

#line 602 "clpretty.ch"

#line 602 "clpretty.ch"
void clpretty::TraiterExpList ( PTREE tree, int x0, int valTab, int inParam )
#line 602 "clpretty.ch"
{
#line 602 "clpretty.ch"
    register PPTREE _inter ;
#line 602 "clpretty.ch"

#line 602 "clpretty.ch"
#line 602 "clpretty.ch"
    int _retVal [2];
    
#line 602 "clpretty.ch"
#line 602 "clpretty.ch"
    PPTREE  _storeVal [2];
    
#line 602 "clpretty.ch"
#line 602 "clpretty.ch"
    int _nextVal ;
    
#line 602 "clpretty.ch"
#line 605 "clpretty.ch"
    
    PTREE   list, inter ;
#line 605 "clpretty.ch"
    
#line 605 "clpretty.ch"
#line 606 "clpretty.ch"
    PTREE   postAttribute ;
#line 606 "clpretty.ch"
    
#line 606 "clpretty.ch"
#line 607 "clpretty.ch"
    
    int y0 ;
    
#line 607 "clpretty.ch"
#line 608 "clpretty.ch"
    int x, y, dx, dy ;
    
#line 608 "clpretty.ch"
#line 609 "clpretty.ch"
    int xRef ;
    
#line 609 "clpretty.ch"
#line 610 "clpretty.ch"
    int posMark ;
    
#line 610 "clpretty.ch"
#line 611 "clpretty.ch"
    PTREE   listElem ;
#line 611 "clpretty.ch"
    
#line 611 "clpretty.ch"
#line 612 "clpretty.ch"
    
    PTREE   currElem ;
#line 612 "clpretty.ch"
    
#line 612 "clpretty.ch"
#line 613 "clpretty.ch"
    
    PTREE   refTree ;
#line 613 "clpretty.ch"
    
#line 613 "clpretty.ch"
#line 614 "clpretty.ch"
    
    PTREE   lastTree ;
#line 614 "clpretty.ch"
    
#line 614 "clpretty.ch"
#line 615 "clpretty.ch"
    
    int posRef ;
    
#line 615 "clpretty.ch"
#line 617 "clpretty.ch"
    
    int colRef ;
    
#line 617 "clpretty.ch"
#line 618 "clpretty.ch"
    
    PTREE   father ;
#line 618 "clpretty.ch"
    
#line 618 "clpretty.ch"
#line 619 "clpretty.ch"
    
    int rank ;
    
#line 619 "clpretty.ch"
#line 620 "clpretty.ch"
    
    int hasIndented = 0 ;
    
#line 620 "clpretty.ch"
#line 622 "clpretty.ch"
    
    int deltaInhibitIndent = 0 ;
    
#line 622 "clpretty.ch"
#line 624 "clpretty.ch"
    
    int delta = 0 ;
    
#line 624 "clpretty.ch"
#line 626 "clpretty.ch"
    
    int deltaRef = 0 ;
    
#line 626 "clpretty.ch"
#line 629 "clpretty.ch"
    
    int ret = 1 ;
    
#line 629 "clpretty.ch"
#line 630 "clpretty.ch"
    
    int oldNbTab = nbTab ;
    
#line 630 "clpretty.ch"
#line 631 "clpretty.ch"
    
    int rightX = 0 ;
    
#line 631 "clpretty.ch"
#line 632 "clpretty.ch"
    
    PTREE   hasToPutVirt = (PTREE)0 ;
#line 632 "clpretty.ch"
    
#line 632 "clpretty.ch"
#line 632 "clpretty.ch"
    hasToPutVirt = (PPTREE) 0 ;
#line 632 "clpretty.ch"
    
#line 632 "clpretty.ch"
#line 635 "clpretty.ch"
    GetCoord(tree, &x, &y, &dx, &y);
#line 635 "clpretty.ch"
#line 636 "clpretty.ch"
    x0 += x ;
#line 636 "clpretty.ch"
#line 637 "clpretty.ch"
    if ( x0 + dx <= rightMargin ) 
#line 637 "clpretty.ch"
#line 638 "clpretty.ch"
        return ;
    
#line 638 "clpretty.ch"
#line 639 "clpretty.ch"
    MarkCoordTree(tree, x0, 0);
#line 639 "clpretty.ch"
#line 643 "clpretty.ch"
    if ( !(((_inter = (PPTREE)tree,1) && 
#line 643 "clpretty.ch"
                (NumberTree(_inter) == LIST) &&
#line 643 "clpretty.ch"
                1)) ) {
#line 643 "clpretty.ch"
#line 644 "clpretty.ch"
                        ((_inter = (PPTREE)tree,1) && 
#line 644 "clpretty.ch"
                            (_retVal[1]=((_storeVal[1]=_inter,_inter=SonTree(_inter,1),(listElem=_inter),1) &&
#line 644 "clpretty.ch"
                                ((refTree=SonTree(_inter,1)),1) &&
#line 644 "clpretty.ch"
                                1),
#line 644 "clpretty.ch"
                                (_inter=_storeVal[1],1),_retVal[1]) &&
#line 644 "clpretty.ch"
                            1);
#line 644 "clpretty.ch"
                        ;
#line 644 "clpretty.ch"
#line 645 "clpretty.ch"
                        
#line 645 "clpretty.ch"
#line 645 "clpretty.ch"
                      } else 
#line 645 "clpretty.ch"
    {
#line 645 "clpretty.ch"
#line 646 "clpretty.ch"
        ((_inter = (PPTREE)tree,1) && 
#line 646 "clpretty.ch"
            ((refTree=SonTree(_inter,1)),1) &&
#line 646 "clpretty.ch"
            1);
#line 646 "clpretty.ch"
        ;
#line 646 "clpretty.ch"
#line 647 "clpretty.ch"
        (listElem=tree);
#line 647 "clpretty.ch"
        
#line 647 "clpretty.ch"
#line 648 "clpretty.ch"
        
#line 648 "clpretty.ch"
#line 648 "clpretty.ch"
    }
    
#line 648 "clpretty.ch"
#line 649 "clpretty.ch"
    if ( !(((_inter = (PPTREE)listElem,1) && 
#line 649 "clpretty.ch"
                (NumberTree(_inter) == LIST) &&
#line 649 "clpretty.ch"
                1)) ) 
#line 649 "clpretty.ch"
#line 650 "clpretty.ch"
        return ;
    
#line 650 "clpretty.ch"
#line 654 "clpretty.ch"
    GetCoord(refTree, &x, &y, &dx, &colRef);
#line 654 "clpretty.ch"
#line 657 "clpretty.ch"
    if ( colRef != markTab ) 
#line 657 "clpretty.ch"
#line 658 "clpretty.ch"
        nbTab = 0 ;
#line 658 "clpretty.ch"
#line 659 "clpretty.ch"
    nbTab += valTab ;
#line 659 "clpretty.ch"
#line 660 "clpretty.ch"
    posRef = TAB_VALUE(colRef, nbTab);
#line 660 "clpretty.ch"
#line 661 "clpretty.ch"
    delta = 0 ;
#line 661 "clpretty.ch"
#line 664 "clpretty.ch"
    while ( listElem ) {
#line 664 "clpretty.ch"
#line 664 "clpretty.ch"
                            PTREE   _Baum0 ;
#line 664 "clpretty.ch"
                            
#line 664 "clpretty.ch"
#line 665 "clpretty.ch"
                            (currElem=(listElem?listElem.Nextl():(PPTREE)0));
#line 665 "clpretty.ch"
                            
#line 665 "clpretty.ch"
#line 666 "clpretty.ch"
                            _Baum0 = (PPTREE) 0 ;
#line 666 "clpretty.ch"
                            
#line 666 "clpretty.ch"
#line 666 "clpretty.ch"
                            GetCoordAbs(currElem, _Baum0, &x0, &y0);
#line 666 "clpretty.ch"
#line 667 "clpretty.ch"
                            GetCoord(currElem, &x, &y, &dx, &dy);
#line 667 "clpretty.ch"
#line 671 "clpretty.ch"
                            if ( x0 <= rightX ) {
#line 671 "clpretty.ch"
#line 672 "clpretty.ch"
                                                    delta = 0 ;
#line 672 "clpretty.ch"
#line 673 "clpretty.ch"
                                                    
#line 673 "clpretty.ch"
#line 673 "clpretty.ch"
                                                  }
#line 673 "clpretty.ch"
#line 674 "clpretty.ch"
                            rightX = x0 + dx ;
#line 674 "clpretty.ch"
#line 678 "clpretty.ch"
                            if ( !lastTree && x0 + dx + delta > rightMargin ) {
#line 678 "clpretty.ch"
#line 679 "clpretty.ch"
                                                                                        if ( inParam && x0 + dx > posRef ) {
#line 679 "clpretty.ch"
#line 682 "clpretty.ch"
                                                                                                                               {
#line 682 "clpretty.ch"
                                                                                                                               PPTREE _ptTree0=(PPTREE) 0;
#line 682 "clpretty.ch"
                                                                                                                               _ptTree0 = (PPTREE) 0;
#line 682 "clpretty.ch"
                                                                                                                               {
#line 682 "clpretty.ch"
                                                                                                                               PPTREE _ptTree1= (PPTREE) 0 ;
#line 682 "clpretty.ch"
                                                                                                                               {
#line 682 "clpretty.ch"
                                                                                                                               PPTREE _ptTree2= (PPTREE) 0,_ptRes2= (PPTREE) 0;
#line 682 "clpretty.ch"
                                                                                                                               _ptRes2 = MakeTree(pretty::NEWLINE, 1);
#line 682 "clpretty.ch"
                                                                                                                               _ptTree2 = MakeString("1") ;
#line 682 "clpretty.ch"
                                                                                                                               ReplaceTree(_ptRes2, 1, _ptTree2);
#line 682 "clpretty.ch"
                                                                                                                               _ptTree1 = _ptRes2;
#line 682 "clpretty.ch"
                                                                                                                               }
#line 682 "clpretty.ch"
                                                                                                                               _ptTree0 = AddList( _ptTree0,_ptTree1);
#line 682 "clpretty.ch"
                                                                                                                               }
#line 682 "clpretty.ch"
                                                                                                                               postAttribute = _ptTree0;
#line 682 "clpretty.ch"
                                                                                                                               ;
#line 682 "clpretty.ch"
                                                                                                                               }
#line 682 "clpretty.ch"
                                                                                                                               
#line 682 "clpretty.ch"
#line 684 "clpretty.ch"
                                                                                                                               {
#line 684 "clpretty.ch"
#line 684 "clpretty.ch"
                                                                                                                               char string [10];
                                                                                                                               
#line 684 "clpretty.ch"
#line 685 "clpretty.ch"
                                                                                                                               sprintf(string, "%d", nbTab);
#line 685 "clpretty.ch"
#line 686 "clpretty.ch"
                                                                                                                               {
#line 686 "clpretty.ch"
                                                                                                                               PPTREE _ptTree0= (PPTREE) 0 ;
#line 686 "clpretty.ch"
                                                                                                                               {
#line 686 "clpretty.ch"
                                                                                                                               PPTREE _ptTree1= (PPTREE) 0 ;
#line 686 "clpretty.ch"
                                                                                                                               {
#line 686 "clpretty.ch"
                                                                                                                               PPTREE _ptTree2= (PPTREE) 0,_ptRes2= (PPTREE) 0;
#line 686 "clpretty.ch"
                                                                                                                               _ptRes2 = MakeTree(pretty::TAB, 1);
#line 686 "clpretty.ch"
                                                                                                                               _ptTree2 = StoreRef(MakeString(string));
#line 686 "clpretty.ch"
                                                                                                                               ReplaceTree(_ptRes2, 1, _ptTree2);
#line 686 "clpretty.ch"
                                                                                                                               _ptTree1 = _ptRes2;
#line 686 "clpretty.ch"
                                                                                                                               }
#line 686 "clpretty.ch"
                                                                                                                               postAttribute =  AddList( postAttribute,_ptTree1);
#line 686 "clpretty.ch"
                                                                                                                               }
#line 686 "clpretty.ch"
                                                                                                                               {
#line 686 "clpretty.ch"
                                                                                                                               PPTREE _ptTree1= (PPTREE) 0 ;
#line 686 "clpretty.ch"
                                                                                                                               {
#line 686 "clpretty.ch"
                                                                                                                               PPTREE _ptTree2= (PPTREE) 0,_ptRes2= (PPTREE) 0;
#line 686 "clpretty.ch"
                                                                                                                               _ptRes2 = MakeTree(pretty::MARK, 0);
#line 686 "clpretty.ch"
                                                                                                                               _ptTree1 = _ptRes2;
#line 686 "clpretty.ch"
                                                                                                                               }
#line 686 "clpretty.ch"
                                                                                                                               postAttribute =  AddList( postAttribute,_ptTree1);
#line 686 "clpretty.ch"
                                                                                                                               }
#line 686 "clpretty.ch"
                                                                                                                               }
#line 686 "clpretty.ch"
                                                                                                                               
#line 686 "clpretty.ch"
#line 687 "clpretty.ch"
                                                                                                                               
#line 687 "clpretty.ch"
#line 687 "clpretty.ch"
                                                                                                                               }
                                                                                                                               
#line 687 "clpretty.ch"
#line 688 "clpretty.ch"
                                                                                                                               hasIndented = 1 ;
#line 688 "clpretty.ch"
#line 689 "clpretty.ch"
                                                                                                                               PutAttr(currElem, postAttribute, PRE_ATTR, PUT_BEG);
#line 689 "clpretty.ch"
#line 693 "clpretty.ch"
#if 0
#line 693 "clpretty.ch"
#line 694 "clpretty.ch"
                                                                                                                               delta = posRef - x0 - dx ;
#line 694 "clpretty.ch"
#line 694 "clpretty.ch"
                                                                                                                               
#line 694 "clpretty.ch"
#else 
                                                                                                                               delta = posRef - x0 ;
#endif
                                                                                                                               
#line 694 "clpretty.ch"
#line 698 "clpretty.ch"
                                                                                                                               PutCoord(currElem, x + delta, y, dx, dy);
#line 698 "clpretty.ch"
#line 701 "clpretty.ch"
                                                                                                                               TraitMark(currElem, posRef);
#line 701 "clpretty.ch"
#line 702 "clpretty.ch"
                                                                                                                               
#line 702 "clpretty.ch"
#line 702 "clpretty.ch"
                                                                                                                               } else 
#line 702 "clpretty.ch"
#line 703 "clpretty.ch"
                                                                                            (hasToPutVirt=currElem);
#line 703 "clpretty.ch"
                                                                                            
#line 703 "clpretty.ch"
                                                                                        
#line 703 "clpretty.ch"
#line 704 "clpretty.ch"
                                                                                        
#line 704 "clpretty.ch"
#line 704 "clpretty.ch"
                                                                                    }
#line 704 "clpretty.ch"
#line 708 "clpretty.ch"
                            if ( x0 + dx + delta > rightMargin && lastTree ) {
#line 708 "clpretty.ch"
#line 713 "clpretty.ch"
                                                                                    if ( deltaRef < 0 ) {
#line 713 "clpretty.ch"
#line 716 "clpretty.ch"
                                                                                                            {
#line 716 "clpretty.ch"
                                                                                                                PPTREE _ptTree0=(PPTREE) 0;
#line 716 "clpretty.ch"
                                                                                                                _ptTree0 = (PPTREE) 0;
#line 716 "clpretty.ch"
                                                                                                                {
#line 716 "clpretty.ch"
                                                                                                                    PPTREE _ptTree1= (PPTREE) 0 ;
#line 716 "clpretty.ch"
                                                                                                                    {
#line 716 "clpretty.ch"
                                                                                                                        PPTREE _ptTree2= (PPTREE) 0,_ptRes2= (PPTREE) 0;
#line 716 "clpretty.ch"
                                                                                                                        _ptRes2 = MakeTree(pretty::NEWLINE, 1);
#line 716 "clpretty.ch"
                                                                                                                        _ptTree2 = MakeString("1") ;
#line 716 "clpretty.ch"
                                                                                                                        ReplaceTree(_ptRes2, 1, _ptTree2);
#line 716 "clpretty.ch"
                                                                                                                        _ptTree1 = _ptRes2;
#line 716 "clpretty.ch"
                                                                                                                    }
#line 716 "clpretty.ch"
                                                                                                                    _ptTree0 = AddList( _ptTree0,_ptTree1);
#line 716 "clpretty.ch"
                                                                                                                }
#line 716 "clpretty.ch"
                                                                                                                postAttribute = _ptTree0;
#line 716 "clpretty.ch"
                                                                                                                ;
#line 716 "clpretty.ch"
                                                                                                            }
#line 716 "clpretty.ch"
                                                                                                            
#line 716 "clpretty.ch"
#line 717 "clpretty.ch"
                                                                                                            if ( !hasIndented ) {
#line 717 "clpretty.ch"
#line 718 "clpretty.ch"
                                                                                                                                  {
#line 718 "clpretty.ch"
#line 719 "clpretty.ch"
                                                                                                                                  char string [10];
                                                                                                                                  
#line 719 "clpretty.ch"
#line 720 "clpretty.ch"
                                                                                                                                  sprintf(string, "%d", nbTab);
#line 720 "clpretty.ch"
#line 721 "clpretty.ch"
                                                                                                                                  {
#line 721 "clpretty.ch"
                                                                                                                                  PPTREE _ptTree0= (PPTREE) 0 ;
#line 721 "clpretty.ch"
                                                                                                                                  {
#line 721 "clpretty.ch"
                                                                                                                                  PPTREE _ptTree1= (PPTREE) 0 ;
#line 721 "clpretty.ch"
                                                                                                                                  {
#line 721 "clpretty.ch"
                                                                                                                                  PPTREE _ptTree2= (PPTREE) 0,_ptRes2= (PPTREE) 0;
#line 721 "clpretty.ch"
                                                                                                                                  _ptRes2 = MakeTree(pretty::TAB, 1);
#line 721 "clpretty.ch"
                                                                                                                                  _ptTree2 = StoreRef(MakeString(string));
#line 721 "clpretty.ch"
                                                                                                                                  ReplaceTree(_ptRes2, 1, _ptTree2);
#line 721 "clpretty.ch"
                                                                                                                                  _ptTree1 = _ptRes2;
#line 721 "clpretty.ch"
                                                                                                                                  }
#line 721 "clpretty.ch"
                                                                                                                                  postAttribute =  AddList( postAttribute,_ptTree1);
#line 721 "clpretty.ch"
                                                                                                                                  }
#line 721 "clpretty.ch"
                                                                                                                                  {
#line 721 "clpretty.ch"
                                                                                                                                  PPTREE _ptTree1= (PPTREE) 0 ;
#line 721 "clpretty.ch"
                                                                                                                                  {
#line 721 "clpretty.ch"
                                                                                                                                  PPTREE _ptTree2= (PPTREE) 0,_ptRes2= (PPTREE) 0;
#line 721 "clpretty.ch"
                                                                                                                                  _ptRes2 = MakeTree(pretty::MARK, 0);
#line 721 "clpretty.ch"
                                                                                                                                  _ptTree1 = _ptRes2;
#line 721 "clpretty.ch"
                                                                                                                                  }
#line 721 "clpretty.ch"
                                                                                                                                  postAttribute =  AddList( postAttribute,_ptTree1);
#line 721 "clpretty.ch"
                                                                                                                                  }
#line 721 "clpretty.ch"
                                                                                                                                  }
#line 721 "clpretty.ch"
                                                                                                                                  
#line 721 "clpretty.ch"
#line 722 "clpretty.ch"
                                                                                                                                  
#line 722 "clpretty.ch"
#line 722 "clpretty.ch"
                                                                                                                                  }
                                                                                                                                  
#line 722 "clpretty.ch"
#line 723 "clpretty.ch"
                                                                                                                                  hasIndented = 1 ;
#line 723 "clpretty.ch"
#line 724 "clpretty.ch"
                                                                                                                                  
#line 724 "clpretty.ch"
#line 724 "clpretty.ch"
                                                                                                                                  }
#line 724 "clpretty.ch"
#line 725 "clpretty.ch"
                                                                                                            PutAttr(lastTree, postAttribute, POST_ATTR, PUT_END);
#line 725 "clpretty.ch"
#line 728 "clpretty.ch"
                                                                                                            delta = deltaRef ;
#line 728 "clpretty.ch"
#line 729 "clpretty.ch"
                                                                                                            PutCoord(currElem, x + delta, y, dx, dy);
#line 729 "clpretty.ch"
#line 732 "clpretty.ch"
                                                                                                            TraitMark(currElem, posRef);
#line 732 "clpretty.ch"
#line 733 "clpretty.ch"
                                                                                                            
#line 733 "clpretty.ch"
#line 733 "clpretty.ch"
                                                                                                          } else 
#line 733 "clpretty.ch"
                                                                                    {
#line 733 "clpretty.ch"
#line 734 "clpretty.ch"
                                                                                        deltaInhibitIndent = 1 ;
#line 734 "clpretty.ch"
#line 737 "clpretty.ch"
                                                                                        TraitMark(currElem, colRef);
#line 737 "clpretty.ch"
#line 738 "clpretty.ch"
                                                                                        
#line 738 "clpretty.ch"
#line 738 "clpretty.ch"
                                                                                    }
                                                                                    
#line 738 "clpretty.ch"
#line 739 "clpretty.ch"
                                                                                    
#line 739 "clpretty.ch"
#line 739 "clpretty.ch"
                                                                                  } else 
#line 739 "clpretty.ch"
                            if ( hasIndented ) {
#line 739 "clpretty.ch"
#line 742 "clpretty.ch"
                                                    PutCoord(currElem, x + delta, y, dx, dy);
#line 742 "clpretty.ch"
#line 745 "clpretty.ch"
                                                    TraitMark(currElem, posRef);
#line 745 "clpretty.ch"
#line 746 "clpretty.ch"
                                                    
#line 746 "clpretty.ch"
#line 746 "clpretty.ch"
                                                } else 
#line 746 "clpretty.ch"
                            if ( deltaInhibitIndent ) {
#line 746 "clpretty.ch"
#line 749 "clpretty.ch"
                                                        TraitMark(currElem, colRef);
#line 749 "clpretty.ch"
#line 750 "clpretty.ch"
                                                        
#line 750 "clpretty.ch"
#line 750 "clpretty.ch"
                                                       }
#line 750 "clpretty.ch"
#line 757 "clpretty.ch"
                            deltaRef = posRef - x0 - dx ;
#line 757 "clpretty.ch"
#line 758 "clpretty.ch"
                            (lastTree=currElem);
#line 758 "clpretty.ch"
                            
#line 758 "clpretty.ch"
#line 759 "clpretty.ch"
                            
#line 759 "clpretty.ch"
#line 759 "clpretty.ch"
                        }
#line 759 "clpretty.ch"
#line 763 "clpretty.ch"
    if ( hasIndented ) {
#line 763 "clpretty.ch"
#line 764 "clpretty.ch"
                            {
#line 764 "clpretty.ch"
                                PPTREE _ptTree0=(PPTREE) 0;
#line 764 "clpretty.ch"
                                _ptTree0 = (PPTREE) 0;
#line 764 "clpretty.ch"
                                {
#line 764 "clpretty.ch"
                                    PPTREE _ptTree1= (PPTREE) 0 ;
#line 764 "clpretty.ch"
                                    {
#line 764 "clpretty.ch"
                                        PPTREE _ptTree2= (PPTREE) 0,_ptRes2= (PPTREE) 0;
#line 764 "clpretty.ch"
                                        _ptRes2 = MakeTree(pretty::UNMARK, 0);
#line 764 "clpretty.ch"
                                        _ptTree1 = _ptRes2;
#line 764 "clpretty.ch"
                                    }
#line 764 "clpretty.ch"
                                    _ptTree0 = AddList( _ptTree0,_ptTree1);
#line 764 "clpretty.ch"
                                }
#line 764 "clpretty.ch"
                                list = _ptTree0;
#line 764 "clpretty.ch"
                                ;
#line 764 "clpretty.ch"
                            }
#line 764 "clpretty.ch"
                            
#line 764 "clpretty.ch"
#line 765 "clpretty.ch"
                            PutAttr(lastTree, list, POST_ATTR, PUT_END);
#line 765 "clpretty.ch"
#line 766 "clpretty.ch"
                            
#line 766 "clpretty.ch"
#line 766 "clpretty.ch"
                        }
#line 766 "clpretty.ch"
#line 769 "clpretty.ch"
    if ( hasIndented && hasToPutVirt ) {
#line 769 "clpretty.ch"
#line 770 "clpretty.ch"
                                            char    string [10];
                                            
#line 770 "clpretty.ch"
#line 771 "clpretty.ch"
                                            sprintf(string, "%d", colRef);
#line 771 "clpretty.ch"
#line 772 "clpretty.ch"
                                            {
#line 772 "clpretty.ch"
                                                PPTREE _ptTree0=(PPTREE) 0;
#line 772 "clpretty.ch"
                                                _ptTree0 = (PPTREE) 0;
#line 772 "clpretty.ch"
                                                {
#line 772 "clpretty.ch"
                                                    PPTREE _ptTree1= (PPTREE) 0 ;
#line 772 "clpretty.ch"
                                                    {
#line 772 "clpretty.ch"
                                                        PPTREE _ptTree2= (PPTREE) 0,_ptRes2= (PPTREE) 0;
#line 772 "clpretty.ch"
                                                        _ptRes2 = MakeTree(pretty::TAB_VIRT, 2);
#line 772 "clpretty.ch"
                                                        _ptTree2 = StoreRef(MakeString(string));
#line 772 "clpretty.ch"
                                                        ReplaceTree(_ptRes2, 1, _ptTree2);
#line 772 "clpretty.ch"
                                                        _ptTree2 = MakeString("1") ;
#line 772 "clpretty.ch"
                                                        ReplaceTree(_ptRes2, 2, _ptTree2);
#line 772 "clpretty.ch"
                                                        _ptTree1 = _ptRes2;
#line 772 "clpretty.ch"
                                                    }
#line 772 "clpretty.ch"
                                                    _ptTree0 = AddList( _ptTree0,_ptTree1);
#line 772 "clpretty.ch"
                                                }
#line 772 "clpretty.ch"
                                                list = _ptTree0;
#line 772 "clpretty.ch"
                                                ;
#line 772 "clpretty.ch"
                                            }
#line 772 "clpretty.ch"
                                            
#line 772 "clpretty.ch"
#line 773 "clpretty.ch"
                                            PutAttr(hasToPutVirt, list, PRE_ATTR, PUT_END);
#line 773 "clpretty.ch"
#line 774 "clpretty.ch"
                                            
#line 774 "clpretty.ch"
#line 774 "clpretty.ch"
                                         }
#line 774 "clpretty.ch"
#line 777 "clpretty.ch"
    (listElem=tree);
#line 777 "clpretty.ch"
    
#line 777 "clpretty.ch"
#line 778 "clpretty.ch"
    if ( !(((_inter = (PPTREE)tree,1) && 
#line 778 "clpretty.ch"
                (NumberTree(_inter) == LIST) &&
#line 778 "clpretty.ch"
                1)) ) 
#line 778 "clpretty.ch"
#line 779 "clpretty.ch"
        ((_inter = (PPTREE)tree,1) && 
#line 779 "clpretty.ch"
            ((listElem=SonTree(_inter,1)),1) &&
#line 779 "clpretty.ch"
            1);
#line 779 "clpretty.ch"
        ;
#line 779 "clpretty.ch"
#line 780 "clpretty.ch"
    UpdateSize(listElem, OpType(listElem));
#line 780 "clpretty.ch"
#line 783 "clpretty.ch"
    if ( !(((_inter = (PPTREE)tree,1) && 
#line 783 "clpretty.ch"
                (NumberTree(_inter) == LIST) &&
#line 783 "clpretty.ch"
                1)) ) {
#line 783 "clpretty.ch"
#line 784 "clpretty.ch"
                        int yy ;
                        
#line 784 "clpretty.ch"
#line 785 "clpretty.ch"
                        GetCoord(tree, &xRef, &yy, &dx, &posMark);
#line 785 "clpretty.ch"
#line 786 "clpretty.ch"
                        GetCoord(sontree(tree, 1), &x, &y, &dx, &posMark);
#line 786 "clpretty.ch"
#line 789 "clpretty.ch"
                        if ( !(yy & 0x2) ) 
#line 789 "clpretty.ch"
#line 790 "clpretty.ch"
                            PutCoord(tree, xRef, y, x + dx, posMark);
#line 790 "clpretty.ch"
#line 791 "clpretty.ch"
                        
#line 791 "clpretty.ch"
#line 791 "clpretty.ch"
                      }
#line 791 "clpretty.ch"
#line 794 "clpretty.ch"
    UnMarkCoordTree(tree);
#line 794 "clpretty.ch"
#line 795 "clpretty.ch"
    nbTab = oldNbTab ;
#line 795 "clpretty.ch"
#line 796 "clpretty.ch"
    
#line 796 "clpretty.ch"
#line 796 "clpretty.ch"
}
#line 796 "clpretty.ch"

#line 800 "clpretty.ch"

#line 800 "clpretty.ch"
void clpretty::TraiterMonoParam ( PTREE tree, int x0 )
#line 800 "clpretty.ch"
{
#line 800 "clpretty.ch"
    register PPTREE _inter ;
#line 800 "clpretty.ch"

#line 800 "clpretty.ch"
#line 800 "clpretty.ch"
    int _nextVal ;
    
#line 800 "clpretty.ch"
#line 803 "clpretty.ch"
    
    PTREE   list, inter ;
#line 803 "clpretty.ch"
    
#line 803 "clpretty.ch"
#line 804 "clpretty.ch"
    PTREE   postAttribute ;
#line 804 "clpretty.ch"
    
#line 804 "clpretty.ch"
#line 805 "clpretty.ch"
    
    int y0 ;
    
#line 805 "clpretty.ch"
#line 806 "clpretty.ch"
    int x, y, dx ;
    
#line 806 "clpretty.ch"
#line 807 "clpretty.ch"
    int xRef ;
    
#line 807 "clpretty.ch"
#line 808 "clpretty.ch"
    int posMark ;
    
#line 808 "clpretty.ch"
#line 809 "clpretty.ch"
    PTREE   listElem ;
#line 809 "clpretty.ch"
    
#line 809 "clpretty.ch"
#line 810 "clpretty.ch"
    
    PTREE   refTree ;
#line 810 "clpretty.ch"
    
#line 810 "clpretty.ch"
#line 811 "clpretty.ch"
    
    PTREE   lastTree ;
#line 811 "clpretty.ch"
    
#line 811 "clpretty.ch"
#line 812 "clpretty.ch"
    
    int posRef ;
    
#line 812 "clpretty.ch"
#line 814 "clpretty.ch"
    
    int colRef ;
    
#line 814 "clpretty.ch"
#line 815 "clpretty.ch"
    
    PTREE   father ;
#line 815 "clpretty.ch"
    
#line 815 "clpretty.ch"
#line 816 "clpretty.ch"
    
    int rank ;
    
#line 816 "clpretty.ch"
#line 817 "clpretty.ch"
    
    int hasIndented = 0 ;
    
#line 817 "clpretty.ch"
#line 819 "clpretty.ch"
    
    int deltaInhibitIndent = 0 ;
    
#line 819 "clpretty.ch"
#line 821 "clpretty.ch"
    
    int delta ;
    
#line 821 "clpretty.ch"
#line 823 "clpretty.ch"
    
    int deltaRef ;
    
#line 823 "clpretty.ch"
#line 825 "clpretty.ch"
    
    int ret = 1 ;
    
#line 825 "clpretty.ch"
#line 826 "clpretty.ch"
    
    int oldNbTab = nbTab ;
    
#line 826 "clpretty.ch"
#line 827 "clpretty.ch"
    
    int rightX = 0 ;
    
#line 827 "clpretty.ch"
#line 828 "clpretty.ch"
    
    PTREE   hasToPutVirt = (PTREE)0 ;
#line 828 "clpretty.ch"
    
#line 828 "clpretty.ch"
#line 828 "clpretty.ch"
    hasToPutVirt = (PPTREE) 0 ;
#line 828 "clpretty.ch"
    
#line 828 "clpretty.ch"
#line 831 "clpretty.ch"
    GetCoord(tree, &x, &y, &dx, &colRef);
#line 831 "clpretty.ch"
#line 832 "clpretty.ch"
    x0 += x ;
#line 832 "clpretty.ch"
#line 833 "clpretty.ch"
    if ( x0 + dx <= rightMargin ) 
#line 833 "clpretty.ch"
#line 834 "clpretty.ch"
        return ;
    
#line 834 "clpretty.ch"
#line 837 "clpretty.ch"
    nbTab = 1 ;
#line 837 "clpretty.ch"
#line 838 "clpretty.ch"
    if ( colRef != markTab ) 
#line 838 "clpretty.ch"
#line 839 "clpretty.ch"
        nbTab = 0 ;
#line 839 "clpretty.ch"
#line 840 "clpretty.ch"
    nbTab += 1 ;
#line 840 "clpretty.ch"
#line 841 "clpretty.ch"
    posRef = TAB_VALUE(colRef, nbTab);
#line 841 "clpretty.ch"
#line 842 "clpretty.ch"
    delta = 0 ;
#line 842 "clpretty.ch"
#line 846 "clpretty.ch"
    {
#line 846 "clpretty.ch"
#line 846 "clpretty.ch"
        {
#line 846 "clpretty.ch"
            PPTREE _ptTree0=(PPTREE) 0;
#line 846 "clpretty.ch"
            _ptTree0 = (PPTREE) 0;
#line 846 "clpretty.ch"
            {
#line 846 "clpretty.ch"
                PPTREE _ptTree1= (PPTREE) 0 ;
#line 846 "clpretty.ch"
                {
#line 846 "clpretty.ch"
                    PPTREE _ptTree2= (PPTREE) 0,_ptRes2= (PPTREE) 0;
#line 846 "clpretty.ch"
                    _ptRes2 = MakeTree(pretty::NEWLINE, 1);
#line 846 "clpretty.ch"
                    _ptTree2 = MakeString("1") ;
#line 846 "clpretty.ch"
                    ReplaceTree(_ptRes2, 1, _ptTree2);
#line 846 "clpretty.ch"
                    _ptTree1 = _ptRes2;
#line 846 "clpretty.ch"
                }
#line 846 "clpretty.ch"
                _ptTree0 = AddList( _ptTree0,_ptTree1);
#line 846 "clpretty.ch"
            }
#line 846 "clpretty.ch"
            postAttribute = _ptTree0;
#line 846 "clpretty.ch"
            ;
#line 846 "clpretty.ch"
        }
#line 846 "clpretty.ch"
        
#line 846 "clpretty.ch"
#line 848 "clpretty.ch"
        {
#line 848 "clpretty.ch"
#line 848 "clpretty.ch"
            char    string [10];
            
#line 848 "clpretty.ch"
#line 849 "clpretty.ch"
            sprintf(string, "%d", nbTab);
#line 849 "clpretty.ch"
#line 850 "clpretty.ch"
            {
#line 850 "clpretty.ch"
                PPTREE _ptTree0= (PPTREE) 0 ;
#line 850 "clpretty.ch"
                {
#line 850 "clpretty.ch"
                    PPTREE _ptTree1= (PPTREE) 0 ;
#line 850 "clpretty.ch"
                    {
#line 850 "clpretty.ch"
                        PPTREE _ptTree2= (PPTREE) 0,_ptRes2= (PPTREE) 0;
#line 850 "clpretty.ch"
                        _ptRes2 = MakeTree(pretty::TAB, 1);
#line 850 "clpretty.ch"
                        _ptTree2 = StoreRef(MakeString(string));
#line 850 "clpretty.ch"
                        ReplaceTree(_ptRes2, 1, _ptTree2);
#line 850 "clpretty.ch"
                        _ptTree1 = _ptRes2;
#line 850 "clpretty.ch"
                    }
#line 850 "clpretty.ch"
                    postAttribute =  AddList( postAttribute,_ptTree1);
#line 850 "clpretty.ch"
                }
#line 850 "clpretty.ch"
                {
#line 850 "clpretty.ch"
                    PPTREE _ptTree1= (PPTREE) 0 ;
#line 850 "clpretty.ch"
                    {
#line 850 "clpretty.ch"
                        PPTREE _ptTree2= (PPTREE) 0,_ptRes2= (PPTREE) 0;
#line 850 "clpretty.ch"
                        _ptRes2 = MakeTree(pretty::MARK, 0);
#line 850 "clpretty.ch"
                        _ptTree1 = _ptRes2;
#line 850 "clpretty.ch"
                    }
#line 850 "clpretty.ch"
                    postAttribute =  AddList( postAttribute,_ptTree1);
#line 850 "clpretty.ch"
                }
#line 850 "clpretty.ch"
            }
#line 850 "clpretty.ch"
            
#line 850 "clpretty.ch"
#line 851 "clpretty.ch"
            
#line 851 "clpretty.ch"
#line 851 "clpretty.ch"
        }
        
#line 851 "clpretty.ch"
#line 852 "clpretty.ch"
        hasIndented = 1 ;
#line 852 "clpretty.ch"
#line 853 "clpretty.ch"
        PutAttr(tree, postAttribute, PRE_ATTR, PUT_BEG);
#line 853 "clpretty.ch"
#line 856 "clpretty.ch"
        delta = posRef - x0 ;
#line 856 "clpretty.ch"
#line 857 "clpretty.ch"
        PutCoord(tree, x + delta, y, dx, colRef);
#line 857 "clpretty.ch"
#line 860 "clpretty.ch"
        TraitMark(tree, posRef);
#line 860 "clpretty.ch"
#line 861 "clpretty.ch"
        
#line 861 "clpretty.ch"
#line 861 "clpretty.ch"
    }
    
#line 861 "clpretty.ch"
#line 862 "clpretty.ch"
    {
#line 862 "clpretty.ch"
        PPTREE _ptTree0=(PPTREE) 0;
#line 862 "clpretty.ch"
        _ptTree0 = (PPTREE) 0;
#line 862 "clpretty.ch"
        {
#line 862 "clpretty.ch"
            PPTREE _ptTree1= (PPTREE) 0 ;
#line 862 "clpretty.ch"
            {
#line 862 "clpretty.ch"
                PPTREE _ptTree2= (PPTREE) 0,_ptRes2= (PPTREE) 0;
#line 862 "clpretty.ch"
                _ptRes2 = MakeTree(pretty::UNMARK, 0);
#line 862 "clpretty.ch"
                _ptTree1 = _ptRes2;
#line 862 "clpretty.ch"
            }
#line 862 "clpretty.ch"
            _ptTree0 = AddList( _ptTree0,_ptTree1);
#line 862 "clpretty.ch"
        }
#line 862 "clpretty.ch"
        list = _ptTree0;
#line 862 "clpretty.ch"
        ;
#line 862 "clpretty.ch"
    }
#line 862 "clpretty.ch"
    
#line 862 "clpretty.ch"
#line 863 "clpretty.ch"
    PutAttr(tree, list, POST_ATTR, PUT_END);
#line 863 "clpretty.ch"
#line 864 "clpretty.ch"
    nbTab = oldNbTab ;
#line 864 "clpretty.ch"
#line 865 "clpretty.ch"
    
#line 865 "clpretty.ch"
#line 865 "clpretty.ch"
}
#line 865 "clpretty.ch"

#line 868 "clpretty.ch"

#line 868 "clpretty.ch"
void clpretty::TraiterExpListParam ( PTREE tree, int x0 )
#line 868 "clpretty.ch"
{
#line 868 "clpretty.ch"
#line 868 "clpretty.ch"
    int _nextVal ;
    
#line 868 "clpretty.ch"
#line 871 "clpretty.ch"
    TraiterExpList(tree, x0, 1, 1);
#line 871 "clpretty.ch"
#line 872 "clpretty.ch"
    
#line 872 "clpretty.ch"
#line 872 "clpretty.ch"
}
#line 872 "clpretty.ch"

#line 876 "clpretty.ch"

#line 876 "clpretty.ch"
void clpretty::Treat ( PTREE tree )
#line 876 "clpretty.ch"
{
#line 876 "clpretty.ch"
    register PPTREE _inter ;
#line 876 "clpretty.ch"

#line 876 "clpretty.ch"
#line 876 "clpretty.ch"
    int _nextVal ;
    
#line 876 "clpretty.ch"
#line 879 "clpretty.ch"
    
    int oldNbTab = nbTab ;
    
#line 879 "clpretty.ch"
#line 880 "clpretty.ch"
    int x, y, dx, dy ;
    
#line 880 "clpretty.ch"
#line 881 "clpretty.ch"
    int x0, y0 ;
    
#line 881 "clpretty.ch"
#line 882 "clpretty.ch"
    PTREE   content ;
#line 882 "clpretty.ch"
    
#line 882 "clpretty.ch"
#line 885 "clpretty.ch"
    DecompVirt(tree);
#line 885 "clpretty.ch"
#line 886 "clpretty.ch"
    CompleteCoordinates(tree);
#line 886 "clpretty.ch"
#line 887 "clpretty.ch"
    if ( ((_inter = (PPTREE)tree,1) && 
#line 887 "clpretty.ch"
            (NumberTree(_inter) == pretty::ATTRIBUTS) &&
#line 887 "clpretty.ch"
            1) ) 
#line 887 "clpretty.ch"
#line 888 "clpretty.ch"
        FreeCoord(tree);
#line 888 "clpretty.ch"
#line 891 "clpretty.ch"
    nbTab = 0 ;
#line 891 "clpretty.ch"
#line 892 "clpretty.ch"
    if ( FatherTree(tree) ) {
#line 892 "clpretty.ch"
#line 893 "clpretty.ch"
                                GetCoord(tree, &x, &y, &dx, &dy);
#line 893 "clpretty.ch"
#line 894 "clpretty.ch"
                                TreatGeometry(tree, -x + 3);
#line 894 "clpretty.ch"
#line 895 "clpretty.ch"
                                
#line 895 "clpretty.ch"
#line 895 "clpretty.ch"
                             } else 
#line 895 "clpretty.ch"
#line 896 "clpretty.ch"
        TreatGeometry(tree, 0);
#line 896 "clpretty.ch"
    
#line 896 "clpretty.ch"
#line 899 "clpretty.ch"
    nbTab = oldNbTab ;
#line 899 "clpretty.ch"
#line 900 "clpretty.ch"
    
#line 900 "clpretty.ch"
#line 900 "clpretty.ch"
}
#line 900 "clpretty.ch"

#line 905 "clpretty.ch"

#line 905 "clpretty.ch"
void clpretty::TreatGeometryDepth ( PTREE tree, int x0, unsigned int depth )
#line 905 "clpretty.ch"
{
#line 905 "clpretty.ch"
    register PPTREE _inter ;
#line 905 "clpretty.ch"

#line 905 "clpretty.ch"
#line 905 "clpretty.ch"
    int _nextVal ;
    
#line 905 "clpretty.ch"
#line 908 "clpretty.ch"
    
    int x, y, dx, posMark ;
    
#line 908 "clpretty.ch"
#line 909 "clpretty.ch"
    int xRef, yRef, dxRef, posMarkRef ;
    
#line 909 "clpretty.ch"
#line 910 "clpretty.ch"
    int success = 0 ;
    
#line 910 "clpretty.ch"
#line 911 "clpretty.ch"
    
    PTREE   preAttribute ;
#line 911 "clpretty.ch"
    
#line 911 "clpretty.ch"
#line 912 "clpretty.ch"
    PTREE   elem ;
#line 912 "clpretty.ch"
    
#line 912 "clpretty.ch"
#line 913 "clpretty.ch"
    PTREE   list ;
#line 913 "clpretty.ch"
    
#line 913 "clpretty.ch"
#line 914 "clpretty.ch"
    PTREE   tree1, tree2 ;
#line 914 "clpretty.ch"
    
#line 914 "clpretty.ch"
#line 917 "clpretty.ch"
    if ( depth > 1024 ) 
#line 917 "clpretty.ch"
#line 918 "clpretty.ch"
        return ;
    
#line 918 "clpretty.ch"
#line 919 "clpretty.ch"
    depth += 1 ;
#line 919 "clpretty.ch"
#line 922 "clpretty.ch"
    if ( GetCoordOrg(tree, &x, &y, &dx, &posMark) ) {
#line 922 "clpretty.ch"
#line 925 "clpretty.ch"
                                                                if ( x0 + x + dx > rightMargin ) {
#line 925 "clpretty.ch"
#line 930 "clpretty.ch"
                                                                                                        if ( !(y & 0x1) ) {
#line 930 "clpretty.ch"
#line 931 "clpretty.ch"
                                                                                                                              switch ( OpTypeAlign(tree) ) {
#line 931 "clpretty.ch"
#line 932 "clpretty.ch"
                                                                                                                              case H_ALIGN : 
#line 932 "clpretty.ch"
#line 933 "clpretty.ch"
                                                                                                                              TraiterExp2H(tree, x0);
#line 933 "clpretty.ch"
#line 934 "clpretty.ch"
                                                                                                                              break ;
                                                                                                                              
#line 934 "clpretty.ch"
#line 935 "clpretty.ch"
                                                                                                                              case V_ALIGN : 
#line 935 "clpretty.ch"
#line 936 "clpretty.ch"
                                                                                                                              TraiterExp2V(tree, x0);
#line 936 "clpretty.ch"
#line 937 "clpretty.ch"
                                                                                                                              break ;
                                                                                                                              
#line 937 "clpretty.ch"
#line 938 "clpretty.ch"
                                                                                                                              case COND_ALIGN : 
#line 938 "clpretty.ch"
#line 939 "clpretty.ch"
                                                                                                                              TraiterExp3(tree, x0);
#line 939 "clpretty.ch"
#line 940 "clpretty.ch"
                                                                                                                              break ;
                                                                                                                              
#line 940 "clpretty.ch"
#line 941 "clpretty.ch"
                                                                                                                              case LIST_ALIGN : 
#line 941 "clpretty.ch"
#line 942 "clpretty.ch"
                                                                                                                              TraiterExpList(tree, x0);
#line 942 "clpretty.ch"
#line 943 "clpretty.ch"
                                                                                                                              break ;
                                                                                                                              
#line 943 "clpretty.ch"
                                                                                                                              }
#line 943 "clpretty.ch"
                                                                                                                              
#line 943 "clpretty.ch"
#line 945 "clpretty.ch"
                                                                                                                              
#line 945 "clpretty.ch"
#line 945 "clpretty.ch"
                                                                                                                              }
#line 945 "clpretty.ch"
#line 949 "clpretty.ch"
                                                                                                        if ( TreatGeometrySpecific(tree, x0, x) ) {
#line 949 "clpretty.ch"
#line 950 "clpretty.ch"
                                                                                                                                                      int maxDx = 0 ;
                                                                                                                                                      
#line 950 "clpretty.ch"
#line 951 "clpretty.ch"
                                                                                                                                                      GetCoord(tree, &xRef, &yRef, &dxRef, &posMarkRef);
#line 951 "clpretty.ch"
#line 952 "clpretty.ch"
                                                                                                                                                      {
#line 952 "clpretty.ch"
#line 952 "clpretty.ch"
                                                                                                                                                      int _for_slot = 1, _arity = treearity(tree);
                                                                                                                                                      
#line 952 "clpretty.ch"
#line 952 "clpretty.ch"
                                                                                                                                                      MY_TREE _for_elem = (PPTREE)0 ;
                                                                                                                                                      
#line 952 "clpretty.ch"
#line 952 "clpretty.ch"
#line 952 "clpretty.ch"
                                                                                                                                                      for (; _for_slot <= _arity ; _for_slot++ ) {
#line 952 "clpretty.ch"
#line 952 "clpretty.ch"
                                                                                                                                                      _for_elem = SonTree(tree, _for_slot);
#line 952 "clpretty.ch"
#line 952 "clpretty.ch"
                                                                                                                                                      if ( _for_elem && NumberTree(_for_elem) != IN_LANGUAGE ) {
#line 952 "clpretty.ch"
#line 952 "clpretty.ch"
                                                                                                                                                      (elem=for_elem);
#line 952 "clpretty.ch"
                                                                                                                                                      
#line 952 "clpretty.ch"
#line 952 "clpretty.ch"
                                                                                                                                                      dx = GetBoxSize(elem);
#line 952 "clpretty.ch"
#line 952 "clpretty.ch"
                                                                                                                                                      if ( dx > maxDx ) 
#line 952 "clpretty.ch"
#line 952 "clpretty.ch"
                                                                                                                                                      maxDx = dx ;
#line 952 "clpretty.ch"
#line 952 "clpretty.ch"
                                                                                                                                                      
#line 952 "clpretty.ch"
#line 952 "clpretty.ch"
                                                                                                                                                      }
#line 952 "clpretty.ch"
#line 952 "clpretty.ch"
                                                                                                                                                      
#line 952 "clpretty.ch"
#line 952 "clpretty.ch"
                                                                                                                                                      }
#line 952 "clpretty.ch"
                                                                                                                                                      
#line 952 "clpretty.ch"
#line 952 "clpretty.ch"
                                                                                                                                                      
#line 952 "clpretty.ch"
#line 952 "clpretty.ch"
                                                                                                                                                      }
#line 952 "clpretty.ch"
#line 958 "clpretty.ch"
                                                                                                                                                      PutCoord(tree, xRef, yRef |= 1, maxDx, posMarkRef);
#line 958 "clpretty.ch"
#line 959 "clpretty.ch"
                                                                                                                                                      
#line 959 "clpretty.ch"
#line 959 "clpretty.ch"
                                                                                                                                                      }
#line 959 "clpretty.ch"
#line 962 "clpretty.ch"
                                                                                                        if ( treearity(tree) > 0 ) {
#line 962 "clpretty.ch"
#line 963 "clpretty.ch"
                                                                                                                                      GetCoord(tree, &xRef, &yRef, &dxRef, &posMarkRef);
#line 963 "clpretty.ch"
#line 964 "clpretty.ch"
                                                                                                                                      if ( x0 + xRef + dxRef > rightMargin ) {
#line 964 "clpretty.ch"
#line 965 "clpretty.ch"
                                                                                                                                                                                 int maxDx = 0 ;
                                                                                                                                                                                 
#line 965 "clpretty.ch"
#line 966 "clpretty.ch"
                                                                                                                                                                                 {
#line 966 "clpretty.ch"
#line 966 "clpretty.ch"
                                                                                                                                                                                 int _for_slot = 1, _arity = treearity(tree);
                                                                                                                                                                                 
#line 966 "clpretty.ch"
#line 966 "clpretty.ch"
                                                                                                                                                                                 MY_TREE _for_elem = (PPTREE)0 ;
                                                                                                                                                                                 
#line 966 "clpretty.ch"
#line 966 "clpretty.ch"
#line 966 "clpretty.ch"
                                                                                                                                                                                 for (; _for_slot <= _arity ; _for_slot++ ) {
#line 966 "clpretty.ch"
#line 966 "clpretty.ch"
                                                                                                                                                                                 _for_elem = SonTree(tree, _for_slot);
#line 966 "clpretty.ch"
#line 966 "clpretty.ch"
                                                                                                                                                                                 if ( _for_elem && NumberTree(_for_elem) != IN_LANGUAGE ) {
#line 966 "clpretty.ch"
#line 966 "clpretty.ch"
                                                                                                                                                                                 (elem=for_elem);
#line 966 "clpretty.ch"
                                                                                                                                                                                 
#line 966 "clpretty.ch"
#line 966 "clpretty.ch"
                                                                                                                                                                                 TreatGeometryDepth(elem, x0 + xRef, depth);
#line 966 "clpretty.ch"
#line 966 "clpretty.ch"
                                                                                                                                                                                 dx = GetBoxSize(elem);
#line 966 "clpretty.ch"
#line 966 "clpretty.ch"
                                                                                                                                                                                 if ( dx > maxDx ) 
#line 966 "clpretty.ch"
#line 966 "clpretty.ch"
                                                                                                                                                                                 maxDx = dx ;
#line 966 "clpretty.ch"
#line 966 "clpretty.ch"
                                                                                                                                                                                 
#line 966 "clpretty.ch"
#line 966 "clpretty.ch"
                                                                                                                                                                                 }
#line 966 "clpretty.ch"
#line 966 "clpretty.ch"
                                                                                                                                                                                 
#line 966 "clpretty.ch"
#line 966 "clpretty.ch"
                                                                                                                                                                                 }
#line 966 "clpretty.ch"
                                                                                                                                                                                 
#line 966 "clpretty.ch"
#line 966 "clpretty.ch"
                                                                                                                                                                                 
#line 966 "clpretty.ch"
#line 966 "clpretty.ch"
                                                                                                                                                                                 }
#line 966 "clpretty.ch"
#line 973 "clpretty.ch"
                                                                                                                                                                                 PutCoord(tree, xRef, yRef |= 1, maxDx, posMarkRef);
#line 973 "clpretty.ch"
#line 974 "clpretty.ch"
                                                                                                                                                                                 
#line 974 "clpretty.ch"
#line 974 "clpretty.ch"
                                                                                                                                                                                 }
#line 974 "clpretty.ch"
#line 975 "clpretty.ch"
                                                                                                                                      
#line 975 "clpretty.ch"
#line 975 "clpretty.ch"
                                                                                                                                      }
#line 975 "clpretty.ch"
#line 978 "clpretty.ch"
                                                                                                        GetCoord(tree, &xRef, &yRef, &dxRef, &posMarkRef);
#line 978 "clpretty.ch"
#line 979 "clpretty.ch"
                                                                                                        if ( x0 + xRef + dxRef > rightMargin ) {
#line 979 "clpretty.ch"
#line 980 "clpretty.ch"
                                                                                                                                                   if ( IsTop(tree) != -1 && x0 + xRef > 3 ) {
#line 980 "clpretty.ch"
#line 983 "clpretty.ch"
                                                                                                                                                                                                    CleanAttributs(tree);
#line 983 "clpretty.ch"
#line 986 "clpretty.ch"
                                                                                                                                                                                                    {
#line 986 "clpretty.ch"
                                                                                                                                                                                                    PPTREE _ptTree0=(PPTREE) 0;
#line 986 "clpretty.ch"
                                                                                                                                                                                                    _ptTree0 = (PPTREE) 0;
#line 986 "clpretty.ch"
                                                                                                                                                                                                    {
#line 986 "clpretty.ch"
                                                                                                                                                                                                    PPTREE _ptTree1= (PPTREE) 0 ;
#line 986 "clpretty.ch"
                                                                                                                                                                                                    {
#line 986 "clpretty.ch"
                                                                                                                                                                                                    PPTREE _ptTree2= (PPTREE) 0,_ptRes2= (PPTREE) 0;
#line 986 "clpretty.ch"
                                                                                                                                                                                                    _ptRes2 = MakeTree(pretty::GOTO, 1);
#line 986 "clpretty.ch"
                                                                                                                                                                                                    _ptTree2 = MakeString("3") ;
#line 986 "clpretty.ch"
                                                                                                                                                                                                    ReplaceTree(_ptRes2, 1, _ptTree2);
#line 986 "clpretty.ch"
                                                                                                                                                                                                    _ptTree1 = _ptRes2;
#line 986 "clpretty.ch"
                                                                                                                                                                                                    }
#line 986 "clpretty.ch"
                                                                                                                                                                                                    _ptTree0 = AddList( _ptTree0,_ptTree1);
#line 986 "clpretty.ch"
                                                                                                                                                                                                    }
#line 986 "clpretty.ch"
                                                                                                                                                                                                    {
#line 986 "clpretty.ch"
                                                                                                                                                                                                    PPTREE _ptTree1= (PPTREE) 0 ;
#line 986 "clpretty.ch"
                                                                                                                                                                                                    {
#line 986 "clpretty.ch"
                                                                                                                                                                                                    PPTREE _ptTree2= (PPTREE) 0,_ptRes2= (PPTREE) 0;
#line 986 "clpretty.ch"
                                                                                                                                                                                                    _ptRes2 = MakeTree(pretty::MARK, 0);
#line 986 "clpretty.ch"
                                                                                                                                                                                                    _ptTree1 = _ptRes2;
#line 986 "clpretty.ch"
                                                                                                                                                                                                    }
#line 986 "clpretty.ch"
                                                                                                                                                                                                    _ptTree0 = AddList( _ptTree0,_ptTree1);
#line 986 "clpretty.ch"
                                                                                                                                                                                                    }
#line 986 "clpretty.ch"
                                                                                                                                                                                                    list = _ptTree0;
#line 986 "clpretty.ch"
                                                                                                                                                                                                    ;
#line 986 "clpretty.ch"
                                                                                                                                                                                                    }
#line 986 "clpretty.ch"
                                                                                                                                                                                                    
#line 986 "clpretty.ch"
#line 987 "clpretty.ch"
                                                                                                                                                                                                    PutAttr(tree, list, PRE_ATTR, PUT_END);
#line 987 "clpretty.ch"
#line 988 "clpretty.ch"
                                                                                                                                                                                                    {
#line 988 "clpretty.ch"
                                                                                                                                                                                                    PPTREE _ptTree0=(PPTREE) 0;
#line 988 "clpretty.ch"
                                                                                                                                                                                                    _ptTree0 = (PPTREE) 0;
#line 988 "clpretty.ch"
                                                                                                                                                                                                    {
#line 988 "clpretty.ch"
                                                                                                                                                                                                    PPTREE _ptTree1= (PPTREE) 0 ;
#line 988 "clpretty.ch"
                                                                                                                                                                                                    {
#line 988 "clpretty.ch"
                                                                                                                                                                                                    PPTREE _ptTree2= (PPTREE) 0,_ptRes2= (PPTREE) 0;
#line 988 "clpretty.ch"
                                                                                                                                                                                                    _ptRes2 = MakeTree(pretty::UNMARK, 0);
#line 988 "clpretty.ch"
                                                                                                                                                                                                    _ptTree1 = _ptRes2;
#line 988 "clpretty.ch"
                                                                                                                                                                                                    }
#line 988 "clpretty.ch"
                                                                                                                                                                                                    _ptTree0 = AddList( _ptTree0,_ptTree1);
#line 988 "clpretty.ch"
                                                                                                                                                                                                    }
#line 988 "clpretty.ch"
                                                                                                                                                                                                    list = _ptTree0;
#line 988 "clpretty.ch"
                                                                                                                                                                                                    ;
#line 988 "clpretty.ch"
                                                                                                                                                                                                    }
#line 988 "clpretty.ch"
                                                                                                                                                                                                    
#line 988 "clpretty.ch"
#line 989 "clpretty.ch"
                                                                                                                                                                                                    PutAttr(tree, list, POST_ATTR, PUT_END);
#line 989 "clpretty.ch"
#line 992 "clpretty.ch"
                                                                                                                                                                                                    Treat(FatherTree(tree));
#line 992 "clpretty.ch"
#line 995 "clpretty.ch"
                                                                                                                                                                                                    GetCoord(tree, &xRef, &yRef, &dxRef, &posMarkRef);
#line 995 "clpretty.ch"
#line 996 "clpretty.ch"
                                                                                                                                                                                                    PutCoord(tree, xRef, yRef, 3, posMarkRef);
#line 996 "clpretty.ch"
#line 997 "clpretty.ch"
                                                                                                                                                                                                    
#line 997 "clpretty.ch"
#line 997 "clpretty.ch"
                                                                                                                                                                                                    }
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
                                                              } else 
#line 1000 "clpretty.ch"
    if ( ((_inter = (PPTREE)tree,1) && 
#line 1000 "clpretty.ch"
            (NumberTree(_inter) == pretty::ATTRIBUTS) &&
#line 1000 "clpretty.ch"
            ((tree=SonTree(_inter,1)),1) &&
#line 1000 "clpretty.ch"
            ((preAttribute=SonTree(_inter,2)),1) &&
#line 1000 "clpretty.ch"
            1) ) {
#line 1000 "clpretty.ch"
#line 1001 "clpretty.ch"
                    int gotTabVirt = 0 ;
                    
#line 1001 "clpretty.ch"
#line 1002 "clpretty.ch"
                    int oldNbTab = nbTab ;
                    
#line 1002 "clpretty.ch"
#line 1003 "clpretty.ch"
                    int oldMarkTab = markTab ;
                    
#line 1003 "clpretty.ch"
#line 1004 "clpretty.ch"
                    PTREE   elem ;
#line 1004 "clpretty.ch"
                    
#line 1004 "clpretty.ch"
#line 1005 "clpretty.ch"
                    while ( ((elem=(preAttribute?preAttribute.Nextl():(PPTREE)0))) ) {
#line 1005 "clpretty.ch"
#line 1006 "clpretty.ch"
                                                                                            switch ( NumberTree(elem) ) {
#line 1006 "clpretty.ch"
#line 1008 "clpretty.ch"
                                                                                                case pretty::TAB_VIRT : 
#line 1008 "clpretty.ch"
#line 1008 "clpretty.ch"
                                                                                                    (tree1=SonTree(elem, 1));
#line 1008 "clpretty.ch"
                                                                                                    
#line 1008 "clpretty.ch"
#line 1008 "clpretty.ch"
                                                                                                    (tree2=SonTree(elem, 2));
#line 1008 "clpretty.ch"
                                                                                                    
#line 1008 "clpretty.ch"
#line 1008 "clpretty.ch"
                                                                                                _Case1 : 
#line 1008 "clpretty.ch"
#line 1008 "clpretty.ch"
                                                                                                    ;
#line 1008 "clpretty.ch"
#line 1008 "clpretty.ch"
                                                                                                    gotTabVirt = 1 ;
#line 1008 "clpretty.ch"
#line 1009 "clpretty.ch"
                                                                                                    break ;
                                                                                                    
#line 1009 "clpretty.ch"
                                                                                            }
#line 1009 "clpretty.ch"
                                                                                            
#line 1009 "clpretty.ch"
#line 1011 "clpretty.ch"
                                                                                            
#line 1011 "clpretty.ch"
#line 1011 "clpretty.ch"
                                                                                          }
#line 1011 "clpretty.ch"
#line 1012 "clpretty.ch"
                    if ( gotTabVirt ) {
#line 1012 "clpretty.ch"
#line 1013 "clpretty.ch"
                                        GetCoord(tree, &x, &y, &dx, &posMark);
#line 1013 "clpretty.ch"
#line 1014 "clpretty.ch"
                                        markTab = atoi(Value(tree1));
#line 1014 "clpretty.ch"
#line 1015 "clpretty.ch"
                                        if ( oldMarkTab == -1 || posMark == oldMarkTab ) 
#line 1015 "clpretty.ch"
#line 1016 "clpretty.ch"
                                            nbTab += atoi(Value(tree2));
#line 1016 "clpretty.ch"
                                        else 
#line 1016 "clpretty.ch"
#line 1018 "clpretty.ch"
                                            nbTab = 1 ;
#line 1018 "clpretty.ch"
                                        
#line 1018 "clpretty.ch"
#line 1019 "clpretty.ch"
                                        
#line 1019 "clpretty.ch"
#line 1019 "clpretty.ch"
                                       }
#line 1019 "clpretty.ch"
#line 1020 "clpretty.ch"
                    TreatGeometry(tree, x0);
#line 1020 "clpretty.ch"
#line 1023 "clpretty.ch"
                    nbTab = oldNbTab ;
#line 1023 "clpretty.ch"
#line 1024 "clpretty.ch"
                    markTab = oldMarkTab ;
#line 1024 "clpretty.ch"
#line 1025 "clpretty.ch"
                    
#line 1025 "clpretty.ch"
#line 1025 "clpretty.ch"
                 }
#line 1025 "clpretty.ch"
#line 1026 "clpretty.ch"
    
#line 1026 "clpretty.ch"
#line 1026 "clpretty.ch"
}
#line 1026 "clpretty.ch"

#line 1030 "clpretty.ch"

#line 1030 "clpretty.ch"
void clpretty::UpdateSize ( PTREE tree, int type )
#line 1030 "clpretty.ch"
{
#line 1030 "clpretty.ch"
#line 1030 "clpretty.ch"
    int _nextVal ;
    
#line 1030 "clpretty.ch"
#line 1033 "clpretty.ch"
    
    int x, y, dx, dy ;
    
#line 1033 "clpretty.ch"
#line 1034 "clpretty.ch"
    int maxDx ;
    
#line 1034 "clpretty.ch"
#line 1035 "clpretty.ch"
    int xRef, yRef, dxRef, dyRef ;
    
#line 1035 "clpretty.ch"
#line 1037 "clpretty.ch"
    if ( OpType(tree) == type ) {
#line 1037 "clpretty.ch"
#line 1040 "clpretty.ch"
                                    UpdateSize(SonTreeAttr(tree, 1), type);
#line 1040 "clpretty.ch"
#line 1041 "clpretty.ch"
                                    UpdateSize(SonTreeAttr(tree, 2), type);
#line 1041 "clpretty.ch"
#line 1044 "clpretty.ch"
                                    GetCoord(sontree(tree, 1), &x, &y, &dx, &dy);
#line 1044 "clpretty.ch"
#line 1045 "clpretty.ch"
                                    maxDx = x + dx ;
#line 1045 "clpretty.ch"
#line 1046 "clpretty.ch"
                                    GetCoord(sontree(tree, 2), &x, &y, &dx, &dy);
#line 1046 "clpretty.ch"
#line 1047 "clpretty.ch"
                                    if ( x + dx > maxDx ) 
#line 1047 "clpretty.ch"
#line 1048 "clpretty.ch"
                                        maxDx = x + dx ;
#line 1048 "clpretty.ch"
#line 1051 "clpretty.ch"
                                    GetCoord(tree, &x, &y, &dx, &dy);
#line 1051 "clpretty.ch"
#line 1052 "clpretty.ch"
                                    PutCoord(tree, x, y | 1, maxDx, dy);
#line 1052 "clpretty.ch"
#line 1053 "clpretty.ch"
                                    
#line 1053 "clpretty.ch"
#line 1053 "clpretty.ch"
                                   }
#line 1053 "clpretty.ch"
#line 1054 "clpretty.ch"
    
#line 1054 "clpretty.ch"
#line 1054 "clpretty.ch"
}
#line 1054 "clpretty.ch"

#line 1059 "clpretty.ch"

#line 1059 "clpretty.ch"
void clpretty::TraiterExp2H ( PTREE tree, int x0 )
#line 1059 "clpretty.ch"
{
#line 1059 "clpretty.ch"
    register PPTREE _inter ;
#line 1059 "clpretty.ch"

#line 1059 "clpretty.ch"
#line 1059 "clpretty.ch"
    int _nextVal ;
    
#line 1059 "clpretty.ch"
#line 1063 "clpretty.ch"
    
    int y0 ;
    
#line 1063 "clpretty.ch"
#line 1064 "clpretty.ch"
    
    int x ;
    
#line 1064 "clpretty.ch"
#line 1065 "clpretty.ch"
    
    int y ;
    
#line 1065 "clpretty.ch"
#line 1066 "clpretty.ch"
    
    int dx ;
    
#line 1066 "clpretty.ch"
#line 1067 "clpretty.ch"
    
    int lastMark ;
    
#line 1067 "clpretty.ch"
#line 1068 "clpretty.ch"
    
    int deltaRef ;
    
#line 1068 "clpretty.ch"
#line 1069 "clpretty.ch"
    
    int delta ;
    
#line 1069 "clpretty.ch"
#line 1070 "clpretty.ch"
    
    PTREE   lastTree ;
#line 1070 "clpretty.ch"
    
#line 1070 "clpretty.ch"
#line 1071 "clpretty.ch"
    
    PTREE   attributeList ;
#line 1071 "clpretty.ch"
    
#line 1071 "clpretty.ch"
#line 1072 "clpretty.ch"
    
    PTREE   father ;
#line 1072 "clpretty.ch"
    
#line 1072 "clpretty.ch"
#line 1073 "clpretty.ch"
    
    PTREE   treeWithAttribute ;
#line 1073 "clpretty.ch"
    
#line 1073 "clpretty.ch"
#line 1074 "clpretty.ch"
    
    int posTree ;
    
#line 1074 "clpretty.ch"
#line 1075 "clpretty.ch"
    
    PTREE   preAttribute ;
#line 1075 "clpretty.ch"
    
#line 1075 "clpretty.ch"
#line 1076 "clpretty.ch"
    
    PTREE   postAttribute ;
#line 1076 "clpretty.ch"
    
#line 1076 "clpretty.ch"
#line 1077 "clpretty.ch"
    
    PTREE   firstElem = (PTREE)0 ;
#line 1077 "clpretty.ch"
    
#line 1077 "clpretty.ch"
#line 1078 "clpretty.ch"
    
    int hasIndented = 0 ;
    
#line 1078 "clpretty.ch"
#line 1079 "clpretty.ch"
    
    int priority ;
    
#line 1079 "clpretty.ch"
#line 1080 "clpretty.ch"
    
    int nPriority ;
    
#line 1080 "clpretty.ch"
#line 1081 "clpretty.ch"
    
    int posRef ;
    
#line 1081 "clpretty.ch"
#line 1082 "clpretty.ch"
    
    int colRef ;
    
#line 1082 "clpretty.ch"
#line 1083 "clpretty.ch"
    
    int ret = 1 ;
    
#line 1083 "clpretty.ch"
#line 1084 "clpretty.ch"
    
    int maxDx = 0 ;
    
#line 1084 "clpretty.ch"
#line 1085 "clpretty.ch"
    
    PTREE   list ;
#line 1085 "clpretty.ch"
    
#line 1085 "clpretty.ch"
#line 1086 "clpretty.ch"
    
    int oldNbTab = nbTab ;
    
#line 1086 "clpretty.ch"
#line 1087 "clpretty.ch"
    
    PTREE   hasToPutVirt = (PTREE)0 ;
#line 1087 "clpretty.ch"
    
#line 1087 "clpretty.ch"
#line 1088 "clpretty.ch"
    
    int deltaLoc ;
    
#line 1088 "clpretty.ch"
#line 1089 "clpretty.ch"
    
    PTREE   inter ;
#line 1089 "clpretty.ch"
    
#line 1089 "clpretty.ch"
#line 1077 "clpretty.ch"
    firstElem = (PPTREE) 0 ;
#line 1077 "clpretty.ch"
    
#line 1077 "clpretty.ch"
#line 1087 "clpretty.ch"
    hasToPutVirt = (PPTREE) 0 ;
#line 1087 "clpretty.ch"
    
#line 1087 "clpretty.ch"
#line 1092 "clpretty.ch"
    GetCoord(tree, &x, &y, &dx, &colRef);
#line 1092 "clpretty.ch"
#line 1093 "clpretty.ch"
    x0 += x ;
#line 1093 "clpretty.ch"
#line 1094 "clpretty.ch"
    MarkCoordTree(tree, x0, 0);
#line 1094 "clpretty.ch"
#line 1097 "clpretty.ch"
    priority = OpType(tree);
#line 1097 "clpretty.ch"
#line 1098 "clpretty.ch"
    if ( colRef != markTab ) 
#line 1098 "clpretty.ch"
#line 1099 "clpretty.ch"
        nbTab = 0 ;
#line 1099 "clpretty.ch"
#line 1100 "clpretty.ch"
    posRef = TAB_VALUE(colRef, nbTab + 1);
#line 1100 "clpretty.ch"
#line 1101 "clpretty.ch"
    deltaRef = delta = 0 ;
#line 1101 "clpretty.ch"
#line 1102 "clpretty.ch"
    currTabTree = 0 ;
#line 1102 "clpretty.ch"
#line 1105 "clpretty.ch"
    AddTree(tree, 0);
#line 1105 "clpretty.ch"
#line 1108 "clpretty.ch"
    {
#line 1108 "clpretty.ch"
#line 1108 "clpretty.ch"
        ItPtree _iterator1 (tree, (PPTREE) 0) ;
        
#line 1108 "clpretty.ch"
#line 1108 "clpretty.ch"
        PTREE   _for_elem ;
#line 1108 "clpretty.ch"
        
#line 1108 "clpretty.ch"
#line 1108 "clpretty.ch"
        _iterator1.AllSearch(1);
#line 1108 "clpretty.ch"
#line 1108 "clpretty.ch"
        while ( (_for_elem=_iterator1++) ) {
#line 1108 "clpretty.ch"
#line 1108 "clpretty.ch"
            {
#line 1108 "clpretty.ch"
#line 1109 "clpretty.ch"
                nPriority = OpType(for_elem);
#line 1109 "clpretty.ch"
#line 1110 "clpretty.ch"
                GetCoord(for_elem, &x, &y, &dx, &lastMark);
#line 1110 "clpretty.ch"
#line 1111 "clpretty.ch"
                if ( nPriority != priority ) {
#line 1111 "clpretty.ch"
#line 1111 "clpretty.ch"
                                                PTREE   _Baum0 ;
#line 1111 "clpretty.ch"
                                                
#line 1111 "clpretty.ch"
#line 1112 "clpretty.ch"
                                                _Baum0 = (PPTREE) 0 ;
#line 1112 "clpretty.ch"
                                                
#line 1112 "clpretty.ch"
#line 1112 "clpretty.ch"
                                                GetCoordAbs(for_elem, _Baum0, &x0, &y0);
#line 1112 "clpretty.ch"
#line 1116 "clpretty.ch"
                                                if ( (!lastTree || deltaRef >= 0) && x0 + dx + delta > rightMargin ) {
#line 1116 "clpretty.ch"
#line 1117 "clpretty.ch"
                                                                                                                              if ( !hasToPutVirt ) {
#line 1117 "clpretty.ch"
#line 1118 "clpretty.ch"
                                                                                                                                                     (hasToPutVirt=for_elem);
#line 1118 "clpretty.ch"
                                                                                                                                                     
#line 1118 "clpretty.ch"
#line 1119 "clpretty.ch"
                                                                                                                                                     (lastTree=for_elem);
#line 1119 "clpretty.ch"
                                                                                                                                                     
#line 1119 "clpretty.ch"
#line 1120 "clpretty.ch"
                                                                                                                                                     
#line 1120 "clpretty.ch"
#line 1120 "clpretty.ch"
                                                                                                                                                     } else 
#line 1120 "clpretty.ch"
                                                                                                                              {
#line 1120 "clpretty.ch"
#line 1121 "clpretty.ch"
                                                                                                                              char string [10];
                                                                                                                              
#line 1121 "clpretty.ch"
#line 1122 "clpretty.ch"
                                                                                                                              sprintf(string, "%d", colRef);
#line 1122 "clpretty.ch"
#line 1123 "clpretty.ch"
                                                                                                                              {
#line 1123 "clpretty.ch"
                                                                                                                              PPTREE _ptTree0=(PPTREE) 0;
#line 1123 "clpretty.ch"
                                                                                                                              _ptTree0 = (PPTREE) 0;
#line 1123 "clpretty.ch"
                                                                                                                              {
#line 1123 "clpretty.ch"
                                                                                                                              PPTREE _ptTree1= (PPTREE) 0 ;
#line 1123 "clpretty.ch"
                                                                                                                              {
#line 1123 "clpretty.ch"
                                                                                                                              PPTREE _ptTree2= (PPTREE) 0,_ptRes2= (PPTREE) 0;
#line 1123 "clpretty.ch"
                                                                                                                              _ptRes2 = MakeTree(pretty::TAB_VIRT, 2);
#line 1123 "clpretty.ch"
                                                                                                                              _ptTree2 = StoreRef(MakeString(string));
#line 1123 "clpretty.ch"
                                                                                                                              ReplaceTree(_ptRes2, 1, _ptTree2);
#line 1123 "clpretty.ch"
                                                                                                                              _ptTree2 = MakeString("1") ;
#line 1123 "clpretty.ch"
                                                                                                                              ReplaceTree(_ptRes2, 2, _ptTree2);
#line 1123 "clpretty.ch"
                                                                                                                              _ptTree1 = _ptRes2;
#line 1123 "clpretty.ch"
                                                                                                                              }
#line 1123 "clpretty.ch"
                                                                                                                              _ptTree0 = AddList( _ptTree0,_ptTree1);
#line 1123 "clpretty.ch"
                                                                                                                              }
#line 1123 "clpretty.ch"
                                                                                                                              list = _ptTree0;
#line 1123 "clpretty.ch"
                                                                                                                              ;
#line 1123 "clpretty.ch"
                                                                                                                              }
#line 1123 "clpretty.ch"
                                                                                                                              
#line 1123 "clpretty.ch"
#line 1124 "clpretty.ch"
                                                                                                                              PutAttr(for_elem, list, PRE_ATTR, PUT_END);
#line 1124 "clpretty.ch"
#line 1125 "clpretty.ch"
                                                                                                                              (lastTree=for_elem);
#line 1125 "clpretty.ch"
                                                                                                                              
#line 1125 "clpretty.ch"
#line 1126 "clpretty.ch"
                                                                                                                              for_elem = FatherTree(for_elem);
#line 1126 "clpretty.ch"
#line 1127 "clpretty.ch"
                                                                                                                              
#line 1127 "clpretty.ch"
#line 1127 "clpretty.ch"
                                                                                                                              }
                                                                                                                              
#line 1127 "clpretty.ch"
#line 1128 "clpretty.ch"
                                                                                                                              
#line 1128 "clpretty.ch"
#line 1128 "clpretty.ch"
                                                                                                                              } else 
#line 1128 "clpretty.ch"
                                                {
#line 1128 "clpretty.ch"
#line 1132 "clpretty.ch"
                                                    if ( x0 + dx + delta > rightMargin && lastTree && deltaRef < -1 ) {
#line 1132 "clpretty.ch"
#line 1132 "clpretty.ch"
                                                                                                                              PTREE _Baum1 ;
#line 1132 "clpretty.ch"
                                                                                                                              
#line 1132 "clpretty.ch"
#line 1135 "clpretty.ch"
                                                                                                                              {
#line 1135 "clpretty.ch"
                                                                                                                              PPTREE _ptTree0=(PPTREE) 0;
#line 1135 "clpretty.ch"
                                                                                                                              _ptTree0 = (PPTREE) 0;
#line 1135 "clpretty.ch"
                                                                                                                              {
#line 1135 "clpretty.ch"
                                                                                                                              PPTREE _ptTree1= (PPTREE) 0 ;
#line 1135 "clpretty.ch"
                                                                                                                              {
#line 1135 "clpretty.ch"
                                                                                                                              PPTREE _ptTree2= (PPTREE) 0,_ptRes2= (PPTREE) 0;
#line 1135 "clpretty.ch"
                                                                                                                              _ptRes2 = MakeTree(pretty::NEWLINE, 1);
#line 1135 "clpretty.ch"
                                                                                                                              _ptTree2 = MakeString("1") ;
#line 1135 "clpretty.ch"
                                                                                                                              ReplaceTree(_ptRes2, 1, _ptTree2);
#line 1135 "clpretty.ch"
                                                                                                                              _ptTree1 = _ptRes2;
#line 1135 "clpretty.ch"
                                                                                                                              }
#line 1135 "clpretty.ch"
                                                                                                                              _ptTree0 = AddList( _ptTree0,_ptTree1);
#line 1135 "clpretty.ch"
                                                                                                                              }
#line 1135 "clpretty.ch"
                                                                                                                              attributeList = _ptTree0;
#line 1135 "clpretty.ch"
                                                                                                                              ;
#line 1135 "clpretty.ch"
                                                                                                                              }
#line 1135 "clpretty.ch"
                                                                                                                              
#line 1135 "clpretty.ch"
#line 1136 "clpretty.ch"
                                                                                                                              if ( !hasIndented ) {
#line 1136 "clpretty.ch"
#line 1137 "clpretty.ch"
                                                                                                                                                    {
#line 1137 "clpretty.ch"
#line 1138 "clpretty.ch"
                                                                                                                                                    char string [25];
                                                                                                                                                    
#line 1138 "clpretty.ch"
#line 1139 "clpretty.ch"
                                                                                                                                                    sprintf(string, "%d", nbTab + 1);
#line 1139 "clpretty.ch"
#line 1140 "clpretty.ch"
                                                                                                                                                    {
#line 1140 "clpretty.ch"
                                                                                                                                                    PPTREE _ptTree0= (PPTREE) 0 ;
#line 1140 "clpretty.ch"
                                                                                                                                                    {
#line 1140 "clpretty.ch"
                                                                                                                                                    PPTREE _ptTree1= (PPTREE) 0 ;
#line 1140 "clpretty.ch"
                                                                                                                                                    {
#line 1140 "clpretty.ch"
                                                                                                                                                    PPTREE _ptTree2= (PPTREE) 0,_ptRes2= (PPTREE) 0;
#line 1140 "clpretty.ch"
                                                                                                                                                    _ptRes2 = MakeTree(pretty::TAB, 1);
#line 1140 "clpretty.ch"
                                                                                                                                                    _ptTree2 = StoreRef(MakeString(string));
#line 1140 "clpretty.ch"
                                                                                                                                                    ReplaceTree(_ptRes2, 1, _ptTree2);
#line 1140 "clpretty.ch"
                                                                                                                                                    _ptTree1 = _ptRes2;
#line 1140 "clpretty.ch"
                                                                                                                                                    }
#line 1140 "clpretty.ch"
                                                                                                                                                    attributeList =  AddList( attributeList,_ptTree1);
#line 1140 "clpretty.ch"
                                                                                                                                                    }
#line 1140 "clpretty.ch"
                                                                                                                                                    {
#line 1140 "clpretty.ch"
                                                                                                                                                    PPTREE _ptTree1= (PPTREE) 0 ;
#line 1140 "clpretty.ch"
                                                                                                                                                    {
#line 1140 "clpretty.ch"
                                                                                                                                                    PPTREE _ptTree2= (PPTREE) 0,_ptRes2= (PPTREE) 0;
#line 1140 "clpretty.ch"
                                                                                                                                                    _ptRes2 = MakeTree(pretty::MARK, 0);
#line 1140 "clpretty.ch"
                                                                                                                                                    _ptTree1 = _ptRes2;
#line 1140 "clpretty.ch"
                                                                                                                                                    }
#line 1140 "clpretty.ch"
                                                                                                                                                    attributeList =  AddList( attributeList,_ptTree1);
#line 1140 "clpretty.ch"
                                                                                                                                                    }
#line 1140 "clpretty.ch"
                                                                                                                                                    }
#line 1140 "clpretty.ch"
                                                                                                                                                    
#line 1140 "clpretty.ch"
#line 1141 "clpretty.ch"
                                                                                                                                                    
#line 1141 "clpretty.ch"
#line 1141 "clpretty.ch"
                                                                                                                                                    }
                                                                                                                                                    
#line 1141 "clpretty.ch"
#line 1142 "clpretty.ch"
                                                                                                                                                    hasIndented = 1 ;
#line 1142 "clpretty.ch"
#line 1143 "clpretty.ch"
                                                                                                                                                    
#line 1143 "clpretty.ch"
#line 1143 "clpretty.ch"
                                                                                                                                                    }
#line 1143 "clpretty.ch"
#line 1144 "clpretty.ch"
                                                                                                                              PutAttr(lastTree, attributeList, POST_ATTR, PUT_END);
#line 1144 "clpretty.ch"
#line 1147 "clpretty.ch"
                                                                                                                              delta = deltaRef ;
#line 1147 "clpretty.ch"
#line 1148 "clpretty.ch"
                                                                                                                              _Baum1 = (PPTREE) 0 ;
#line 1148 "clpretty.ch"
                                                                                                                              
#line 1148 "clpretty.ch"
#line 1148 "clpretty.ch"
                                                                                                                              (inter=SNextTree(lastTree, _Baum1));
#line 1148 "clpretty.ch"
                                                                                                                              
#line 1148 "clpretty.ch"
#line 1149 "clpretty.ch"
                                                                                                                              while ( 1 ) {
#line 1149 "clpretty.ch"
#line 1149 "clpretty.ch"
                                                                                                                                           PTREE _Baum3 ;
#line 1149 "clpretty.ch"
                                                                                                                                           
#line 1149 "clpretty.ch"
#line 1150 "clpretty.ch"
                                                                                                                                           (father=FatherTree(inter));
#line 1150 "clpretty.ch"
                                                                                                                                           
#line 1150 "clpretty.ch"
#line 1151 "clpretty.ch"
                                                                                                                                           while ( inter && ((_inter = (PPTREE)father,1) && 
#line 1151 "clpretty.ch"
                                                                                                                                                               (NumberTree(_inter) == pretty::ATTRIBUTS) &&
#line 1151 "clpretty.ch"
                                                                                                                                                               1) && ranktree(inter) != 1 ) {
#line 1151 "clpretty.ch"
#line 1151 "clpretty.ch"
                                                                                                                                                                                               PTREE _Baum2 ;
#line 1151 "clpretty.ch"
                                                                                                                                                                                               
#line 1151 "clpretty.ch"
#line 1152 "clpretty.ch"
                                                                                                                                                                                               _Baum2 = (PPTREE) 0 ;
#line 1152 "clpretty.ch"
                                                                                                                                                                                               
#line 1152 "clpretty.ch"
#line 1152 "clpretty.ch"
                                                                                                                                                                                               (inter=SNextTree(father, _Baum2));
#line 1152 "clpretty.ch"
                                                                                                                                                                                               
#line 1152 "clpretty.ch"
#line 1153 "clpretty.ch"
                                                                                                                                                                                               (father=FatherTree(inter));
#line 1153 "clpretty.ch"
                                                                                                                                                                                               
#line 1153 "clpretty.ch"
#line 1154 "clpretty.ch"
                                                                                                                                                                                               
#line 1154 "clpretty.ch"
#line 1154 "clpretty.ch"
                                                                                                                                                                                               }
#line 1154 "clpretty.ch"
#line 1155 "clpretty.ch"
                                                                                                                                           if ( inter != (PTREE)for_elem ) 
#line 1155 "clpretty.ch"
#line 1156 "clpretty.ch"
                                                                                                                                           AddTree(inter, delta);
#line 1156 "clpretty.ch"
                                                                                                                                           else 
#line 1157 "clpretty.ch"
                                                                                                                                           {
#line 1157 "clpretty.ch"
#line 1158 "clpretty.ch"
                                                                                                                                           deltaLoc = delta - FindDelta(inter);
#line 1158 "clpretty.ch"
#line 1159 "clpretty.ch"
                                                                                                                                           PutCoord(inter, x + deltaLoc, y, dx, lastMark);
#line 1159 "clpretty.ch"
#line 1160 "clpretty.ch"
                                                                                                                                           break ;
                                                                                                                                           
#line 1160 "clpretty.ch"
#line 1161 "clpretty.ch"
                                                                                                                                           
#line 1161 "clpretty.ch"
#line 1161 "clpretty.ch"
                                                                                                                                           }
                                                                                                                                           
#line 1161 "clpretty.ch"
#line 1162 "clpretty.ch"
                                                                                                                                           _Baum3 = (PPTREE) 0 ;
#line 1162 "clpretty.ch"
                                                                                                                                           
#line 1162 "clpretty.ch"
#line 1162 "clpretty.ch"
                                                                                                                                           (inter=NextTree(inter, _Baum3));
#line 1162 "clpretty.ch"
                                                                                                                                           
#line 1162 "clpretty.ch"
#line 1163 "clpretty.ch"
                                                                                                                                           
#line 1163 "clpretty.ch"
#line 1163 "clpretty.ch"
                                                                                                                                           }
#line 1163 "clpretty.ch"
#line 1166 "clpretty.ch"
                                                                                                                              TraitMark(for_elem, posRef);
#line 1166 "clpretty.ch"
#line 1167 "clpretty.ch"
                                                                                                                              
#line 1167 "clpretty.ch"
#line 1167 "clpretty.ch"
                                                                                                                              } else 
#line 1167 "clpretty.ch"
                                                    if ( hasIndented ) {
#line 1167 "clpretty.ch"
#line 1170 "clpretty.ch"
                                                                            deltaLoc = delta - FindDelta(for_elem);
#line 1170 "clpretty.ch"
#line 1171 "clpretty.ch"
                                                                            PutCoord(for_elem, x + deltaLoc, y, dx, lastMark);
#line 1171 "clpretty.ch"
#line 1174 "clpretty.ch"
                                                                            TraitMark(for_elem, posRef);
#line 1174 "clpretty.ch"
#line 1175 "clpretty.ch"
                                                                            
#line 1175 "clpretty.ch"
#line 1175 "clpretty.ch"
                                                                        }
#line 1175 "clpretty.ch"
#line 1176 "clpretty.ch"
                                                    (lastTree=for_elem);
#line 1176 "clpretty.ch"
                                                    
#line 1176 "clpretty.ch"
#line 1177 "clpretty.ch"
                                                    
#line 1177 "clpretty.ch"
#line 1177 "clpretty.ch"
                                                }
                                                
#line 1177 "clpretty.ch"
#line 1181 "clpretty.ch"
                                                if ( y & 0x2 ) {
#line 1181 "clpretty.ch"
#line 1182 "clpretty.ch"
                                                                    delta = deltaRef = posRef - colRef ;
#line 1182 "clpretty.ch"
#line 1183 "clpretty.ch"
                                                                    
#line 1183 "clpretty.ch"
#line 1183 "clpretty.ch"
                                                                 } else 
#line 1183 "clpretty.ch"
#line 1184 "clpretty.ch"
                                                    deltaRef = posRef - x0 - dx ;
#line 1184 "clpretty.ch"
                                                
#line 1184 "clpretty.ch"
#line 1187 "clpretty.ch"
                                                goto for_continue1 ;
                                                
#line 1187 "clpretty.ch"
#line 1188 "clpretty.ch"
                                                
#line 1188 "clpretty.ch"
#line 1188 "clpretty.ch"
                                               } else 
#line 1188 "clpretty.ch"
                if ( hasIndented ) {
#line 1188 "clpretty.ch"
#line 1189 "clpretty.ch"
                                        AddTree(for_elem, delta);
#line 1189 "clpretty.ch"
#line 1190 "clpretty.ch"
                                        
#line 1190 "clpretty.ch"
#line 1190 "clpretty.ch"
                                    }
#line 1190 "clpretty.ch"
#line 1191 "clpretty.ch"
                
#line 1191 "clpretty.ch"
#line 1191 "clpretty.ch"
            }
            
#line 1191 "clpretty.ch"
#line 1191 "clpretty.ch"
            _iterator1.Current(_for_elem);
#line 1191 "clpretty.ch"
#line 1191 "clpretty.ch"
            continue ;
            
#line 1191 "clpretty.ch"
#line 1191 "clpretty.ch"
        for_continue1 : 
#line 1191 "clpretty.ch"
#line 1191 "clpretty.ch"
            _iterator1.Current(_for_elem);
#line 1191 "clpretty.ch"
#line 1191 "clpretty.ch"
            _iterator1.SkipSon(1);
#line 1191 "clpretty.ch"
#line 1191 "clpretty.ch"
            continue ;
            
#line 1191 "clpretty.ch"
#line 1191 "clpretty.ch"
        for_break1 : 
#line 1191 "clpretty.ch"
#line 1191 "clpretty.ch"
            break ;
            
#line 1191 "clpretty.ch"
#line 1191 "clpretty.ch"
            
#line 1191 "clpretty.ch"
#line 1191 "clpretty.ch"
        }
#line 1191 "clpretty.ch"
#line 1191 "clpretty.ch"
        
#line 1191 "clpretty.ch"
#line 1191 "clpretty.ch"
    }
    
#line 1191 "clpretty.ch"
#line 1194 "clpretty.ch"
    if ( hasIndented ) {
#line 1194 "clpretty.ch"
#line 1195 "clpretty.ch"
                            {
#line 1195 "clpretty.ch"
                                PPTREE _ptTree0=(PPTREE) 0;
#line 1195 "clpretty.ch"
                                _ptTree0 = (PPTREE) 0;
#line 1195 "clpretty.ch"
                                {
#line 1195 "clpretty.ch"
                                    PPTREE _ptTree1= (PPTREE) 0 ;
#line 1195 "clpretty.ch"
                                    {
#line 1195 "clpretty.ch"
                                        PPTREE _ptTree2= (PPTREE) 0,_ptRes2= (PPTREE) 0;
#line 1195 "clpretty.ch"
                                        _ptRes2 = MakeTree(pretty::UNMARK, 0);
#line 1195 "clpretty.ch"
                                        _ptTree1 = _ptRes2;
#line 1195 "clpretty.ch"
                                    }
#line 1195 "clpretty.ch"
                                    _ptTree0 = AddList( _ptTree0,_ptTree1);
#line 1195 "clpretty.ch"
                                }
#line 1195 "clpretty.ch"
                                list = _ptTree0;
#line 1195 "clpretty.ch"
                                ;
#line 1195 "clpretty.ch"
                            }
#line 1195 "clpretty.ch"
                            
#line 1195 "clpretty.ch"
#line 1196 "clpretty.ch"
                            PutAttr(lastTree, list, POST_ATTR, PUT_BEG);
#line 1196 "clpretty.ch"
#line 1197 "clpretty.ch"
                            
#line 1197 "clpretty.ch"
#line 1197 "clpretty.ch"
                        }
#line 1197 "clpretty.ch"
#line 1200 "clpretty.ch"
    if ( hasIndented && hasToPutVirt ) {
#line 1200 "clpretty.ch"
#line 1201 "clpretty.ch"
                                            char    string [10];
                                            
#line 1201 "clpretty.ch"
#line 1202 "clpretty.ch"
                                            sprintf(string, "%d", colRef);
#line 1202 "clpretty.ch"
#line 1203 "clpretty.ch"
                                            {
#line 1203 "clpretty.ch"
                                                PPTREE _ptTree0=(PPTREE) 0;
#line 1203 "clpretty.ch"
                                                _ptTree0 = (PPTREE) 0;
#line 1203 "clpretty.ch"
                                                {
#line 1203 "clpretty.ch"
                                                    PPTREE _ptTree1= (PPTREE) 0 ;
#line 1203 "clpretty.ch"
                                                    {
#line 1203 "clpretty.ch"
                                                        PPTREE _ptTree2= (PPTREE) 0,_ptRes2= (PPTREE) 0;
#line 1203 "clpretty.ch"
                                                        _ptRes2 = MakeTree(pretty::TAB_VIRT, 2);
#line 1203 "clpretty.ch"
                                                        _ptTree2 = StoreRef(MakeString(string));
#line 1203 "clpretty.ch"
                                                        ReplaceTree(_ptRes2, 1, _ptTree2);
#line 1203 "clpretty.ch"
                                                        _ptTree2 = MakeString("1") ;
#line 1203 "clpretty.ch"
                                                        ReplaceTree(_ptRes2, 2, _ptTree2);
#line 1203 "clpretty.ch"
                                                        _ptTree1 = _ptRes2;
#line 1203 "clpretty.ch"
                                                    }
#line 1203 "clpretty.ch"
                                                    _ptTree0 = AddList( _ptTree0,_ptTree1);
#line 1203 "clpretty.ch"
                                                }
#line 1203 "clpretty.ch"
                                                list = _ptTree0;
#line 1203 "clpretty.ch"
                                                ;
#line 1203 "clpretty.ch"
                                            }
#line 1203 "clpretty.ch"
                                            
#line 1203 "clpretty.ch"
#line 1204 "clpretty.ch"
                                            PutAttr(hasToPutVirt, list, PRE_ATTR, PUT_END);
#line 1204 "clpretty.ch"
#line 1205 "clpretty.ch"
                                            
#line 1205 "clpretty.ch"
#line 1205 "clpretty.ch"
                                         }
#line 1205 "clpretty.ch"
#line 1208 "clpretty.ch"
#line 1208 "clpretty.ch"
    for ( int nbNode = 0 ; nbNode < currTabTree ; nbNode++ ) {
#line 1208 "clpretty.ch"
#line 1209 "clpretty.ch"
                                                                    GetCoord(tabTree [nbNode].tree, &x, &y, &dx, &lastMark);
#line 1209 "clpretty.ch"
#line 1210 "clpretty.ch"
                                                                    deltaLoc = tabTree [nbNode].delta - FindDelta(tabTree [nbNode].tree);
#line 1210 "clpretty.ch"
#line 1211 "clpretty.ch"
                                                                    PutCoord(tabTree [nbNode].tree, x + deltaLoc, y, dx, lastMark);
#line 1211 "clpretty.ch"
#line 1212 "clpretty.ch"
                                                                    
#line 1212 "clpretty.ch"
#line 1212 "clpretty.ch"
                                                                  }
#line 1212 "clpretty.ch"
    
#line 1212 "clpretty.ch"
#line 1215 "clpretty.ch"
    UpdateSize(tree, OpType(tree));
#line 1215 "clpretty.ch"
#line 1218 "clpretty.ch"
    UnMarkCoordTree(tree);
#line 1218 "clpretty.ch"
#line 1219 "clpretty.ch"
    nbTab = oldNbTab ;
#line 1219 "clpretty.ch"
#line 1220 "clpretty.ch"
    
#line 1220 "clpretty.ch"
#line 1220 "clpretty.ch"
}
#line 1220 "clpretty.ch"

#line 1225 "clpretty.ch"

#line 1225 "clpretty.ch"
void clpretty::TraiterExp2V ( PTREE tree, int x0 )
#line 1225 "clpretty.ch"
{
#line 1225 "clpretty.ch"
    register PPTREE _inter ;
#line 1225 "clpretty.ch"

#line 1225 "clpretty.ch"
#line 1225 "clpretty.ch"
    int _nextVal ;
    
#line 1225 "clpretty.ch"
#line 1229 "clpretty.ch"
    
    int y0 ;
    
#line 1229 "clpretty.ch"
#line 1230 "clpretty.ch"
    
    int x ;
    
#line 1230 "clpretty.ch"
#line 1231 "clpretty.ch"
    
    int y ;
    
#line 1231 "clpretty.ch"
#line 1232 "clpretty.ch"
    
    int dx ;
    
#line 1232 "clpretty.ch"
#line 1233 "clpretty.ch"
    
    int lastMark ;
    
#line 1233 "clpretty.ch"
#line 1234 "clpretty.ch"
    
    int deltaRef ;
    
#line 1234 "clpretty.ch"
#line 1235 "clpretty.ch"
    
    int delta ;
    
#line 1235 "clpretty.ch"
#line 1236 "clpretty.ch"
    
    PTREE   lastTree ;
#line 1236 "clpretty.ch"
    
#line 1236 "clpretty.ch"
#line 1237 "clpretty.ch"
    
    PTREE   attributeList ;
#line 1237 "clpretty.ch"
    
#line 1237 "clpretty.ch"
#line 1238 "clpretty.ch"
    
    PTREE   father ;
#line 1238 "clpretty.ch"
    
#line 1238 "clpretty.ch"
#line 1239 "clpretty.ch"
    
    PTREE   treeWithAttribute ;
#line 1239 "clpretty.ch"
    
#line 1239 "clpretty.ch"
#line 1240 "clpretty.ch"
    
    int posTree ;
    
#line 1240 "clpretty.ch"
#line 1241 "clpretty.ch"
    
    PTREE   preAttribute ;
#line 1241 "clpretty.ch"
    
#line 1241 "clpretty.ch"
#line 1242 "clpretty.ch"
    
    PTREE   postAttribute ;
#line 1242 "clpretty.ch"
    
#line 1242 "clpretty.ch"
#line 1243 "clpretty.ch"
    
    PTREE   firstElem = (PTREE)0 ;
#line 1243 "clpretty.ch"
    
#line 1243 "clpretty.ch"
#line 1244 "clpretty.ch"
    
    int hasIndented = 0 ;
    
#line 1244 "clpretty.ch"
#line 1245 "clpretty.ch"
    
    int priority ;
    
#line 1245 "clpretty.ch"
#line 1246 "clpretty.ch"
    
    int nPriority ;
    
#line 1246 "clpretty.ch"
#line 1247 "clpretty.ch"
    
    int posRef ;
    
#line 1247 "clpretty.ch"
#line 1248 "clpretty.ch"
    
    int colRef ;
    
#line 1248 "clpretty.ch"
#line 1249 "clpretty.ch"
    
    int ret = 1 ;
    
#line 1249 "clpretty.ch"
#line 1250 "clpretty.ch"
    
    PTREE   list ;
#line 1250 "clpretty.ch"
    
#line 1250 "clpretty.ch"
#line 1251 "clpretty.ch"
    
    PTREE   hasToPutVirt ;
#line 1251 "clpretty.ch"
    
#line 1251 "clpretty.ch"
#line 1252 "clpretty.ch"
    
    int oldNbTab = nbTab ;
    
#line 1252 "clpretty.ch"
#line 1253 "clpretty.ch"
    
    int deltaLoc ;
    
#line 1253 "clpretty.ch"
#line 1254 "clpretty.ch"
    
    PTREE   inter ;
#line 1254 "clpretty.ch"
    
#line 1254 "clpretty.ch"
#line 1243 "clpretty.ch"
    firstElem = (PPTREE) 0 ;
#line 1243 "clpretty.ch"
    
#line 1243 "clpretty.ch"
#line 1257 "clpretty.ch"
    GetCoord(tree, &x, &y, &dx, &colRef);
#line 1257 "clpretty.ch"
#line 1258 "clpretty.ch"
    x0 += x ;
#line 1258 "clpretty.ch"
#line 1259 "clpretty.ch"
    MarkCoordTree(tree, x0, 0);
#line 1259 "clpretty.ch"
#line 1260 "clpretty.ch"
    colRef = x0 ;
#line 1260 "clpretty.ch"
#line 1263 "clpretty.ch"
    {
#line 1263 "clpretty.ch"
        PPTREE _ptTree0=(PPTREE) 0;
#line 1263 "clpretty.ch"
        _ptTree0 = (PPTREE) 0;
#line 1263 "clpretty.ch"
        {
#line 1263 "clpretty.ch"
            PPTREE _ptTree1= (PPTREE) 0 ;
#line 1263 "clpretty.ch"
            {
#line 1263 "clpretty.ch"
                PPTREE _ptTree2= (PPTREE) 0,_ptRes2= (PPTREE) 0;
#line 1263 "clpretty.ch"
                _ptRes2 = MakeTree(pretty::MARK, 0);
#line 1263 "clpretty.ch"
                _ptTree1 = _ptRes2;
#line 1263 "clpretty.ch"
            }
#line 1263 "clpretty.ch"
            _ptTree0 = AddList( _ptTree0,_ptTree1);
#line 1263 "clpretty.ch"
        }
#line 1263 "clpretty.ch"
        list = _ptTree0;
#line 1263 "clpretty.ch"
        ;
#line 1263 "clpretty.ch"
    }
#line 1263 "clpretty.ch"
    
#line 1263 "clpretty.ch"
#line 1264 "clpretty.ch"
    PutAttr(tree, list, PRE_ATTR, PUT_END);
#line 1264 "clpretty.ch"
#line 1265 "clpretty.ch"
    {
#line 1265 "clpretty.ch"
        PPTREE _ptTree0=(PPTREE) 0;
#line 1265 "clpretty.ch"
        _ptTree0 = (PPTREE) 0;
#line 1265 "clpretty.ch"
        {
#line 1265 "clpretty.ch"
            PPTREE _ptTree1= (PPTREE) 0 ;
#line 1265 "clpretty.ch"
            {
#line 1265 "clpretty.ch"
                PPTREE _ptTree2= (PPTREE) 0,_ptRes2= (PPTREE) 0;
#line 1265 "clpretty.ch"
                _ptRes2 = MakeTree(pretty::UNMARK, 0);
#line 1265 "clpretty.ch"
                _ptTree1 = _ptRes2;
#line 1265 "clpretty.ch"
            }
#line 1265 "clpretty.ch"
            _ptTree0 = AddList( _ptTree0,_ptTree1);
#line 1265 "clpretty.ch"
        }
#line 1265 "clpretty.ch"
        list = _ptTree0;
#line 1265 "clpretty.ch"
        ;
#line 1265 "clpretty.ch"
    }
#line 1265 "clpretty.ch"
    
#line 1265 "clpretty.ch"
#line 1266 "clpretty.ch"
    PutAttr(tree, list, POST_ATTR, PUT_BEG);
#line 1266 "clpretty.ch"
#line 1267 "clpretty.ch"
    TraitMark(tree, colRef);
#line 1267 "clpretty.ch"
#line 1270 "clpretty.ch"
    priority = OpType(tree);
#line 1270 "clpretty.ch"
#line 1271 "clpretty.ch"
    if ( markTab != colRef ) 
#line 1271 "clpretty.ch"
#line 1272 "clpretty.ch"
        nbTab = 0 ;
#line 1272 "clpretty.ch"
#line 1273 "clpretty.ch"
    posRef = TAB_VALUE(x0, nbTab + 1);
#line 1273 "clpretty.ch"
#line 1274 "clpretty.ch"
    deltaRef = delta = 0 ;
#line 1274 "clpretty.ch"
#line 1277 "clpretty.ch"
    AddTree(tree, 0);
#line 1277 "clpretty.ch"
#line 1278 "clpretty.ch"
    {
#line 1278 "clpretty.ch"
#line 1278 "clpretty.ch"
        ItPtree _iterator1 (tree, (PPTREE) 0) ;
        
#line 1278 "clpretty.ch"
#line 1278 "clpretty.ch"
        PTREE   _for_elem ;
#line 1278 "clpretty.ch"
        
#line 1278 "clpretty.ch"
#line 1278 "clpretty.ch"
        _iterator1.AllSearch(1);
#line 1278 "clpretty.ch"
#line 1278 "clpretty.ch"
        while ( (_for_elem=_iterator1++) ) {
#line 1278 "clpretty.ch"
#line 1278 "clpretty.ch"
            {
#line 1278 "clpretty.ch"
#line 1281 "clpretty.ch"
                nPriority = OpType(for_elem);
#line 1281 "clpretty.ch"
#line 1282 "clpretty.ch"
                GetCoord(for_elem, &x, &y, &dx, &lastMark);
#line 1282 "clpretty.ch"
#line 1283 "clpretty.ch"
                if ( nPriority != priority ) {
#line 1283 "clpretty.ch"
#line 1283 "clpretty.ch"
                                                PTREE   _Baum0 ;
#line 1283 "clpretty.ch"
                                                
#line 1283 "clpretty.ch"
#line 1284 "clpretty.ch"
                                                _Baum0 = (PPTREE) 0 ;
#line 1284 "clpretty.ch"
                                                
#line 1284 "clpretty.ch"
#line 1284 "clpretty.ch"
                                                GetCoordAbs(for_elem, _Baum0, &x0, &y0);
#line 1284 "clpretty.ch"
#line 1288 "clpretty.ch"
                                                if ( !lastTree || deltaRef >= 0 ) {
#line 1288 "clpretty.ch"
#line 1289 "clpretty.ch"
                                                                                        if ( !hasToPutVirt ) {
#line 1289 "clpretty.ch"
#line 1290 "clpretty.ch"
                                                                                                                (hasToPutVirt=for_elem);
#line 1290 "clpretty.ch"
                                                                                                                
#line 1290 "clpretty.ch"
#line 1291 "clpretty.ch"
                                                                                                                (lastTree=for_elem);
#line 1291 "clpretty.ch"
                                                                                                                
#line 1291 "clpretty.ch"
#line 1292 "clpretty.ch"
                                                                                                                
#line 1292 "clpretty.ch"
#line 1292 "clpretty.ch"
                                                                                                               } else 
#line 1292 "clpretty.ch"
                                                                                        {
#line 1292 "clpretty.ch"
#line 1293 "clpretty.ch"
                                                                                            char    string [10];
                                                                                            
#line 1293 "clpretty.ch"
#line 1294 "clpretty.ch"
                                                                                            sprintf(string, "%d", colRef);
#line 1294 "clpretty.ch"
#line 1295 "clpretty.ch"
                                                                                            {
#line 1295 "clpretty.ch"
                                                                                                PPTREE _ptTree0=(PPTREE) 0;
#line 1295 "clpretty.ch"
                                                                                                _ptTree0 = (PPTREE) 0;
#line 1295 "clpretty.ch"
                                                                                                {
#line 1295 "clpretty.ch"
                                                                                                    PPTREE _ptTree1= (PPTREE) 0 ;
#line 1295 "clpretty.ch"
                                                                                                    {
#line 1295 "clpretty.ch"
                                                                                                        PPTREE _ptTree2= (PPTREE) 0,_ptRes2= (PPTREE) 0;
#line 1295 "clpretty.ch"
                                                                                                        _ptRes2 = MakeTree(pretty::TAB_VIRT, 2);
#line 1295 "clpretty.ch"
                                                                                                        _ptTree2 = StoreRef(MakeString(string));
#line 1295 "clpretty.ch"
                                                                                                        ReplaceTree(_ptRes2, 1, _ptTree2);
#line 1295 "clpretty.ch"
                                                                                                        _ptTree2 = MakeString("1") ;
#line 1295 "clpretty.ch"
                                                                                                        ReplaceTree(_ptRes2, 2, _ptTree2);
#line 1295 "clpretty.ch"
                                                                                                        _ptTree1 = _ptRes2;
#line 1295 "clpretty.ch"
                                                                                                    }
#line 1295 "clpretty.ch"
                                                                                                    _ptTree0 = AddList( _ptTree0,_ptTree1);
#line 1295 "clpretty.ch"
                                                                                                }
#line 1295 "clpretty.ch"
                                                                                                list = _ptTree0;
#line 1295 "clpretty.ch"
                                                                                                ;
#line 1295 "clpretty.ch"
                                                                                            }
#line 1295 "clpretty.ch"
                                                                                            
#line 1295 "clpretty.ch"
#line 1296 "clpretty.ch"
                                                                                            PutAttr(for_elem, list, PRE_ATTR, PUT_END);
#line 1296 "clpretty.ch"
#line 1297 "clpretty.ch"
                                                                                            (lastTree=for_elem);
#line 1297 "clpretty.ch"
                                                                                            
#line 1297 "clpretty.ch"
#line 1298 "clpretty.ch"
                                                                                            for_elem = FatherTree(for_elem);
#line 1298 "clpretty.ch"
#line 1299 "clpretty.ch"
                                                                                            
#line 1299 "clpretty.ch"
#line 1299 "clpretty.ch"
                                                                                        }
                                                                                        
#line 1299 "clpretty.ch"
#line 1300 "clpretty.ch"
                                                                                        
#line 1300 "clpretty.ch"
#line 1300 "clpretty.ch"
                                                                                      } else 
#line 1300 "clpretty.ch"
                                                {
#line 1300 "clpretty.ch"
#line 1303 "clpretty.ch"
                                                    if ( lastTree && deltaRef < -1 ) {
#line 1303 "clpretty.ch"
#line 1306 "clpretty.ch"
                                                                                            if ( !(((_inter = (PPTREE)lastTree,1) && 
#line 1306 "clpretty.ch"
                                                                                                        (NumberTree(_inter) == pretty::ATTRIBUTS) &&
#line 1306 "clpretty.ch"
                                                                                                        1)) ) {
#line 1306 "clpretty.ch"
#line 1306 "clpretty.ch"
                                                                                                                PTREE   _Baum1 ;
#line 1306 "clpretty.ch"
                                                                                                                
#line 1306 "clpretty.ch"
#line 1309 "clpretty.ch"
                                                                                                                {
#line 1309 "clpretty.ch"
                                                                                                                    PPTREE _ptTree0=(PPTREE) 0;
#line 1309 "clpretty.ch"
                                                                                                                    _ptTree0 = (PPTREE) 0;
#line 1309 "clpretty.ch"
                                                                                                                    {
#line 1309 "clpretty.ch"
                                                                                                                        PPTREE _ptTree1= (PPTREE) 0 ;
#line 1309 "clpretty.ch"
                                                                                                                        {
#line 1309 "clpretty.ch"
                                                                                                                        PPTREE _ptTree2= (PPTREE) 0,_ptRes2= (PPTREE) 0;
#line 1309 "clpretty.ch"
                                                                                                                        _ptRes2 = MakeTree(pretty::NEWLINE, 1);
#line 1309 "clpretty.ch"
                                                                                                                        _ptTree2 = MakeString("1") ;
#line 1309 "clpretty.ch"
                                                                                                                        ReplaceTree(_ptRes2, 1, _ptTree2);
#line 1309 "clpretty.ch"
                                                                                                                        _ptTree1 = _ptRes2;
#line 1309 "clpretty.ch"
                                                                                                                        }
#line 1309 "clpretty.ch"
                                                                                                                        _ptTree0 = AddList( _ptTree0,_ptTree1);
#line 1309 "clpretty.ch"
                                                                                                                    }
#line 1309 "clpretty.ch"
                                                                                                                    attributeList = _ptTree0;
#line 1309 "clpretty.ch"
                                                                                                                    ;
#line 1309 "clpretty.ch"
                                                                                                                }
#line 1309 "clpretty.ch"
                                                                                                                
#line 1309 "clpretty.ch"
#line 1310 "clpretty.ch"
                                                                                                                if ( !hasIndented ) {
#line 1310 "clpretty.ch"
#line 1311 "clpretty.ch"
                                                                                                                                      char string [25];
                                                                                                                                      
#line 1311 "clpretty.ch"
#line 1312 "clpretty.ch"
                                                                                                                                      sprintf(string, "%d", nbTab + 1);
#line 1312 "clpretty.ch"
#line 1313 "clpretty.ch"
                                                                                                                                      {
#line 1313 "clpretty.ch"
                                                                                                                                      PPTREE _ptTree0= (PPTREE) 0 ;
#line 1313 "clpretty.ch"
                                                                                                                                      {
#line 1313 "clpretty.ch"
                                                                                                                                      PPTREE _ptTree1= (PPTREE) 0 ;
#line 1313 "clpretty.ch"
                                                                                                                                      {
#line 1313 "clpretty.ch"
                                                                                                                                      PPTREE _ptTree2= (PPTREE) 0,_ptRes2= (PPTREE) 0;
#line 1313 "clpretty.ch"
                                                                                                                                      _ptRes2 = MakeTree(pretty::TAB, 1);
#line 1313 "clpretty.ch"
                                                                                                                                      _ptTree2 = StoreRef(MakeString(string));
#line 1313 "clpretty.ch"
                                                                                                                                      ReplaceTree(_ptRes2, 1, _ptTree2);
#line 1313 "clpretty.ch"
                                                                                                                                      _ptTree1 = _ptRes2;
#line 1313 "clpretty.ch"
                                                                                                                                      }
#line 1313 "clpretty.ch"
                                                                                                                                      attributeList =  AddList( attributeList,_ptTree1);
#line 1313 "clpretty.ch"
                                                                                                                                      }
#line 1313 "clpretty.ch"
                                                                                                                                      {
#line 1313 "clpretty.ch"
                                                                                                                                      PPTREE _ptTree1= (PPTREE) 0 ;
#line 1313 "clpretty.ch"
                                                                                                                                      {
#line 1313 "clpretty.ch"
                                                                                                                                      PPTREE _ptTree2= (PPTREE) 0,_ptRes2= (PPTREE) 0;
#line 1313 "clpretty.ch"
                                                                                                                                      _ptRes2 = MakeTree(pretty::MARK, 0);
#line 1313 "clpretty.ch"
                                                                                                                                      _ptTree1 = _ptRes2;
#line 1313 "clpretty.ch"
                                                                                                                                      }
#line 1313 "clpretty.ch"
                                                                                                                                      attributeList =  AddList( attributeList,_ptTree1);
#line 1313 "clpretty.ch"
                                                                                                                                      }
#line 1313 "clpretty.ch"
                                                                                                                                      }
#line 1313 "clpretty.ch"
                                                                                                                                      
#line 1313 "clpretty.ch"
#line 1314 "clpretty.ch"
                                                                                                                                      hasIndented = 1 ;
#line 1314 "clpretty.ch"
#line 1315 "clpretty.ch"
                                                                                                                                      
#line 1315 "clpretty.ch"
#line 1315 "clpretty.ch"
                                                                                                                                      }
#line 1315 "clpretty.ch"
#line 1316 "clpretty.ch"
                                                                                                                PutAttr(lastTree, attributeList, POST_ATTR, PUT_END);
#line 1316 "clpretty.ch"
#line 1319 "clpretty.ch"
                                                                                                                delta = deltaRef ;
#line 1319 "clpretty.ch"
#line 1320 "clpretty.ch"
                                                                                                                _Baum1 = (PPTREE) 0 ;
#line 1320 "clpretty.ch"
                                                                                                                
#line 1320 "clpretty.ch"
#line 1320 "clpretty.ch"
                                                                                                                (inter=SNextTree(lastTree, _Baum1));
#line 1320 "clpretty.ch"
                                                                                                                
#line 1320 "clpretty.ch"
#line 1321 "clpretty.ch"
                                                                                                                while ( 1 ) {
#line 1321 "clpretty.ch"
#line 1321 "clpretty.ch"
                                                                                                                             PTREE _Baum3 ;
#line 1321 "clpretty.ch"
                                                                                                                             
#line 1321 "clpretty.ch"
#line 1322 "clpretty.ch"
                                                                                                                             (father=FatherTree(inter));
#line 1322 "clpretty.ch"
                                                                                                                             
#line 1322 "clpretty.ch"
#line 1323 "clpretty.ch"
                                                                                                                             while ( inter && ((_inter = (PPTREE)father,1) && 
#line 1323 "clpretty.ch"
                                                                                                                                                 (NumberTree(_inter) == pretty::ATTRIBUTS) &&
#line 1323 "clpretty.ch"
                                                                                                                                                 1) && ranktree(inter) != 1 ) {
#line 1323 "clpretty.ch"
#line 1323 "clpretty.ch"
                                                                                                                                                                                 PTREE _Baum2 ;
#line 1323 "clpretty.ch"
                                                                                                                                                                                 
#line 1323 "clpretty.ch"
#line 1324 "clpretty.ch"
                                                                                                                                                                                 _Baum2 = (PPTREE) 0 ;
#line 1324 "clpretty.ch"
                                                                                                                                                                                 
#line 1324 "clpretty.ch"
#line 1324 "clpretty.ch"
                                                                                                                                                                                 (inter=SNextTree(father, _Baum2));
#line 1324 "clpretty.ch"
                                                                                                                                                                                 
#line 1324 "clpretty.ch"
#line 1325 "clpretty.ch"
                                                                                                                                                                                 (father=FatherTree(inter));
#line 1325 "clpretty.ch"
                                                                                                                                                                                 
#line 1325 "clpretty.ch"
#line 1326 "clpretty.ch"
                                                                                                                                                                                 
#line 1326 "clpretty.ch"
#line 1326 "clpretty.ch"
                                                                                                                                                                                 }
#line 1326 "clpretty.ch"
#line 1327 "clpretty.ch"
                                                                                                                             if ( inter != (PTREE)for_elem ) 
#line 1327 "clpretty.ch"
#line 1328 "clpretty.ch"
                                                                                                                             AddTree(inter, delta);
#line 1328 "clpretty.ch"
                                                                                                                             else 
#line 1329 "clpretty.ch"
                                                                                                                             {
#line 1329 "clpretty.ch"
#line 1330 "clpretty.ch"
                                                                                                                             deltaLoc = delta - FindDelta(inter);
#line 1330 "clpretty.ch"
#line 1331 "clpretty.ch"
                                                                                                                             PutCoord(inter, x + deltaLoc, y, dx, lastMark);
#line 1331 "clpretty.ch"
#line 1332 "clpretty.ch"
                                                                                                                             break ;
                                                                                                                             
#line 1332 "clpretty.ch"
#line 1333 "clpretty.ch"
                                                                                                                             
#line 1333 "clpretty.ch"
#line 1333 "clpretty.ch"
                                                                                                                             }
                                                                                                                             
#line 1333 "clpretty.ch"
#line 1334 "clpretty.ch"
                                                                                                                             _Baum3 = (PPTREE) 0 ;
#line 1334 "clpretty.ch"
                                                                                                                             
#line 1334 "clpretty.ch"
#line 1334 "clpretty.ch"
                                                                                                                             (inter=NextTree(inter, _Baum3));
#line 1334 "clpretty.ch"
                                                                                                                             
#line 1334 "clpretty.ch"
#line 1337 "clpretty.ch"
                                                                                                                             if ( (!inter) ) 
#line 1337 "clpretty.ch"
#line 1338 "clpretty.ch"
                                                                                                                             break ;
                                                                                                                             
#line 1338 "clpretty.ch"
#line 1339 "clpretty.ch"
                                                                                                                             
#line 1339 "clpretty.ch"
#line 1339 "clpretty.ch"
                                                                                                                             }
#line 1339 "clpretty.ch"
#line 1342 "clpretty.ch"
                                                                                                                TraitMark(for_elem, posRef);
#line 1342 "clpretty.ch"
#line 1343 "clpretty.ch"
                                                                                                                
#line 1343 "clpretty.ch"
#line 1343 "clpretty.ch"
                                                                                                              }
#line 1343 "clpretty.ch"
#line 1344 "clpretty.ch"
                                                                                            
#line 1344 "clpretty.ch"
#line 1344 "clpretty.ch"
                                                                                         } else 
#line 1344 "clpretty.ch"
                                                    if ( hasIndented ) {
#line 1344 "clpretty.ch"
#line 1347 "clpretty.ch"
                                                                            deltaLoc = delta - FindDelta(for_elem);
#line 1347 "clpretty.ch"
#line 1348 "clpretty.ch"
                                                                            PutCoord(for_elem, x + deltaLoc, y, dx, lastMark);
#line 1348 "clpretty.ch"
#line 1351 "clpretty.ch"
                                                                            TraitMark(for_elem, posRef);
#line 1351 "clpretty.ch"
#line 1352 "clpretty.ch"
                                                                            
#line 1352 "clpretty.ch"
#line 1352 "clpretty.ch"
                                                                        }
#line 1352 "clpretty.ch"
#line 1353 "clpretty.ch"
                                                    (lastTree=for_elem);
#line 1353 "clpretty.ch"
                                                    
#line 1353 "clpretty.ch"
#line 1354 "clpretty.ch"
                                                    
#line 1354 "clpretty.ch"
#line 1354 "clpretty.ch"
                                                }
                                                
#line 1354 "clpretty.ch"
#line 1358 "clpretty.ch"
                                                if ( y & 0x2 ) {
#line 1358 "clpretty.ch"
#line 1359 "clpretty.ch"
                                                                    delta = deltaRef = posRef - colRef ;
#line 1359 "clpretty.ch"
#line 1360 "clpretty.ch"
                                                                    
#line 1360 "clpretty.ch"
#line 1360 "clpretty.ch"
                                                                 } else 
#line 1360 "clpretty.ch"
#line 1361 "clpretty.ch"
                                                    deltaRef = posRef - x0 - dx ;
#line 1361 "clpretty.ch"
                                                
#line 1361 "clpretty.ch"
#line 1364 "clpretty.ch"
                                                goto for_continue1 ;
                                                
#line 1364 "clpretty.ch"
#line 1365 "clpretty.ch"
                                                
#line 1365 "clpretty.ch"
#line 1365 "clpretty.ch"
                                               } else 
#line 1365 "clpretty.ch"
                if ( hasIndented ) {
#line 1365 "clpretty.ch"
#line 1366 "clpretty.ch"
                                        AddTree(for_elem, delta);
#line 1366 "clpretty.ch"
#line 1367 "clpretty.ch"
                                        
#line 1367 "clpretty.ch"
#line 1367 "clpretty.ch"
                                    }
#line 1367 "clpretty.ch"
#line 1368 "clpretty.ch"
                
#line 1368 "clpretty.ch"
#line 1368 "clpretty.ch"
            }
            
#line 1368 "clpretty.ch"
#line 1368 "clpretty.ch"
            _iterator1.Current(_for_elem);
#line 1368 "clpretty.ch"
#line 1368 "clpretty.ch"
            continue ;
            
#line 1368 "clpretty.ch"
#line 1368 "clpretty.ch"
        for_continue1 : 
#line 1368 "clpretty.ch"
#line 1368 "clpretty.ch"
            _iterator1.Current(_for_elem);
#line 1368 "clpretty.ch"
#line 1368 "clpretty.ch"
            _iterator1.SkipSon(1);
#line 1368 "clpretty.ch"
#line 1368 "clpretty.ch"
            continue ;
            
#line 1368 "clpretty.ch"
#line 1368 "clpretty.ch"
        for_break1 : 
#line 1368 "clpretty.ch"
#line 1368 "clpretty.ch"
            break ;
            
#line 1368 "clpretty.ch"
#line 1368 "clpretty.ch"
            
#line 1368 "clpretty.ch"
#line 1368 "clpretty.ch"
        }
#line 1368 "clpretty.ch"
#line 1368 "clpretty.ch"
        
#line 1368 "clpretty.ch"
#line 1368 "clpretty.ch"
    }
    
#line 1368 "clpretty.ch"
#line 1371 "clpretty.ch"
    if ( hasIndented ) {
#line 1371 "clpretty.ch"
#line 1372 "clpretty.ch"
                            {
#line 1372 "clpretty.ch"
                                PPTREE _ptTree0=(PPTREE) 0;
#line 1372 "clpretty.ch"
                                _ptTree0 = (PPTREE) 0;
#line 1372 "clpretty.ch"
                                {
#line 1372 "clpretty.ch"
                                    PPTREE _ptTree1= (PPTREE) 0 ;
#line 1372 "clpretty.ch"
                                    {
#line 1372 "clpretty.ch"
                                        PPTREE _ptTree2= (PPTREE) 0,_ptRes2= (PPTREE) 0;
#line 1372 "clpretty.ch"
                                        _ptRes2 = MakeTree(pretty::UNMARK, 0);
#line 1372 "clpretty.ch"
                                        _ptTree1 = _ptRes2;
#line 1372 "clpretty.ch"
                                    }
#line 1372 "clpretty.ch"
                                    _ptTree0 = AddList( _ptTree0,_ptTree1);
#line 1372 "clpretty.ch"
                                }
#line 1372 "clpretty.ch"
                                list = _ptTree0;
#line 1372 "clpretty.ch"
                                ;
#line 1372 "clpretty.ch"
                            }
#line 1372 "clpretty.ch"
                            
#line 1372 "clpretty.ch"
#line 1373 "clpretty.ch"
                            PutAttr(lastTree, list, POST_ATTR, PUT_BEG);
#line 1373 "clpretty.ch"
#line 1374 "clpretty.ch"
                            
#line 1374 "clpretty.ch"
#line 1374 "clpretty.ch"
                        }
#line 1374 "clpretty.ch"
#line 1377 "clpretty.ch"
    if ( hasIndented && hasToPutVirt ) {
#line 1377 "clpretty.ch"
#line 1378 "clpretty.ch"
                                            char    string [10];
                                            
#line 1378 "clpretty.ch"
#line 1379 "clpretty.ch"
                                            sprintf(string, "%d", colRef);
#line 1379 "clpretty.ch"
#line 1380 "clpretty.ch"
                                            {
#line 1380 "clpretty.ch"
                                                PPTREE _ptTree0=(PPTREE) 0;
#line 1380 "clpretty.ch"
                                                _ptTree0 = (PPTREE) 0;
#line 1380 "clpretty.ch"
                                                {
#line 1380 "clpretty.ch"
                                                    PPTREE _ptTree1= (PPTREE) 0 ;
#line 1380 "clpretty.ch"
                                                    {
#line 1380 "clpretty.ch"
                                                        PPTREE _ptTree2= (PPTREE) 0,_ptRes2= (PPTREE) 0;
#line 1380 "clpretty.ch"
                                                        _ptRes2 = MakeTree(pretty::TAB_VIRT, 2);
#line 1380 "clpretty.ch"
                                                        _ptTree2 = StoreRef(MakeString(string));
#line 1380 "clpretty.ch"
                                                        ReplaceTree(_ptRes2, 1, _ptTree2);
#line 1380 "clpretty.ch"
                                                        _ptTree2 = MakeString("1") ;
#line 1380 "clpretty.ch"
                                                        ReplaceTree(_ptRes2, 2, _ptTree2);
#line 1380 "clpretty.ch"
                                                        _ptTree1 = _ptRes2;
#line 1380 "clpretty.ch"
                                                    }
#line 1380 "clpretty.ch"
                                                    _ptTree0 = AddList( _ptTree0,_ptTree1);
#line 1380 "clpretty.ch"
                                                }
#line 1380 "clpretty.ch"
                                                list = _ptTree0;
#line 1380 "clpretty.ch"
                                                ;
#line 1380 "clpretty.ch"
                                            }
#line 1380 "clpretty.ch"
                                            
#line 1380 "clpretty.ch"
#line 1381 "clpretty.ch"
                                            PutAttr(hasToPutVirt, list, PRE_ATTR, PUT_END);
#line 1381 "clpretty.ch"
#line 1382 "clpretty.ch"
                                            
#line 1382 "clpretty.ch"
#line 1382 "clpretty.ch"
                                         }
#line 1382 "clpretty.ch"
#line 1385 "clpretty.ch"
#line 1385 "clpretty.ch"
    for ( int nbNode = 0 ; nbNode < currTabTree ; nbNode++ ) {
#line 1385 "clpretty.ch"
#line 1386 "clpretty.ch"
                                                                    GetCoord(tabTree [nbNode].tree, &x, &y, &dx, &lastMark);
#line 1386 "clpretty.ch"
#line 1387 "clpretty.ch"
                                                                    deltaLoc = tabTree [nbNode].delta - FindDelta(tabTree [nbNode].tree);
#line 1387 "clpretty.ch"
#line 1388 "clpretty.ch"
                                                                    PutCoord(tabTree [nbNode].tree, x + deltaLoc, y, dx, lastMark);
#line 1388 "clpretty.ch"
#line 1389 "clpretty.ch"
                                                                    
#line 1389 "clpretty.ch"
#line 1389 "clpretty.ch"
                                                                  }
#line 1389 "clpretty.ch"
    
#line 1389 "clpretty.ch"
#line 1392 "clpretty.ch"
    UpdateSize(tree, OpType(tree));
#line 1392 "clpretty.ch"
#line 1395 "clpretty.ch"
    UnMarkCoordTree(tree);
#line 1395 "clpretty.ch"
#line 1396 "clpretty.ch"
    nbTab = oldNbTab ;
#line 1396 "clpretty.ch"
#line 1397 "clpretty.ch"
    
#line 1397 "clpretty.ch"
#line 1397 "clpretty.ch"
}
#line 1397 "clpretty.ch"

#line 1399 "clpretty.ch"

#line 1399 "clpretty.ch"
static  inline void LNewLineOrg ( int i )
#line 1399 "clpretty.ch"
{
#line 1399 "clpretty.ch"
#line 1399 "clpretty.ch"
    int _nextVal ;
    
#line 1399 "clpretty.ch"
#line 1401 "clpretty.ch"
    LNewLine(i);
#line 1401 "clpretty.ch"
#line 1402 "clpretty.ch"
    
#line 1402 "clpretty.ch"
#line 1402 "clpretty.ch"
}
#line 1402 "clpretty.ch"

#line 1404 "clpretty.ch"

#line 1404 "clpretty.ch"
void clpretty::LNewLine ( int i )
#line 1404 "clpretty.ch"
{
#line 1404 "clpretty.ch"
#line 1404 "clpretty.ch"
    int _nextVal ;
    
#line 1404 "clpretty.ch"
#line 1406 "clpretty.ch"
    if ( currCol > maxX ) 
#line 1406 "clpretty.ch"
#line 1407 "clpretty.ch"
        maxX = currCol ;
#line 1407 "clpretty.ch"
#line 1408 "clpretty.ch"
    LNewLineOrg(i);
#line 1408 "clpretty.ch"
#line 1409 "clpretty.ch"
    
#line 1409 "clpretty.ch"
#line 1409 "clpretty.ch"
}
#line 1409 "clpretty.ch"

#line 1413 "clpretty.ch"

#line 1413 "clpretty.ch"
void clpretty::DecompVirt ( const PTREE &paramTree )
#line 1413 "clpretty.ch"
{
#line 1413 "clpretty.ch"
    register PPTREE _inter ;
#line 1413 "clpretty.ch"

#line 1413 "clpretty.ch"
#line 1413 "clpretty.ch"
    int _nextVal ;
    
#line 1413 "clpretty.ch"
#line 1416 "clpretty.ch"
    
    int x0, y0, x, y, dx, dy ;
    
#line 1416 "clpretty.ch"
#line 1418 "clpretty.ch"
    GetCoord(paramTree, &x, &y, &dx, &dy);
#line 1418 "clpretty.ch"
#line 1419 "clpretty.ch"
    GetCoordAbs(paramTree, 0, &x0, &y0);
#line 1419 "clpretty.ch"
#line 1421 "clpretty.ch"
    PTREE   father ;
#line 1421 "clpretty.ch"
    
#line 1421 "clpretty.ch"
#line 1423 "clpretty.ch"
    (father=FatherTree(paramTree));
#line 1423 "clpretty.ch"
    
#line 1423 "clpretty.ch"
#line 1424 "clpretty.ch"
    while ( ((_inter = (PPTREE)father,1) && 
#line 1424 "clpretty.ch"
                (NumberTree(_inter) == pretty::ATTRIBUTS) &&
#line 1424 "clpretty.ch"
                1) ) 
#line 1424 "clpretty.ch"
#line 1425 "clpretty.ch"
        (father=FatherTree(father));
#line 1425 "clpretty.ch"
    
#line 1425 "clpretty.ch"
#line 1426 "clpretty.ch"
    GetCoordAbs(father, 0, &xFather, &yFather);
#line 1426 "clpretty.ch"
#line 1427 "clpretty.ch"
    isVirtMod = 1 ;
#line 1427 "clpretty.ch"
#line 1428 "clpretty.ch"
    GotoCol(dy + 1);
#line 1428 "clpretty.ch"
#line 1431 "clpretty.ch"
    Mark();
#line 1431 "clpretty.ch"
#line 1432 "clpretty.ch"
    currCol = x0 ;
#line 1432 "clpretty.ch"
#line 1433 "clpretty.ch"
    currLine = y0 ;
#line 1433 "clpretty.ch"
#line 1434 "clpretty.ch"
    maxX = 0 ;
#line 1434 "clpretty.ch"
#line 1435 "clpretty.ch"
    Decomp(paramTree);
#line 1435 "clpretty.ch"
#line 1436 "clpretty.ch"
    UnMark();
#line 1436 "clpretty.ch"
#line 1437 "clpretty.ch"
    isVirtMod = 0 ;
#line 1437 "clpretty.ch"
#line 1438 "clpretty.ch"
    currLine = currCol = 0 ;
#line 1438 "clpretty.ch"
#line 1439 "clpretty.ch"
    
#line 1439 "clpretty.ch"
#line 1439 "clpretty.ch"
}
#line 1439 "clpretty.ch"

#line 1441 "clpretty.ch"

#line 1441 "clpretty.ch"
void clpretty::TraitAttribut ( PTREE tree )
#line 1441 "clpretty.ch"
{
#line 1441 "clpretty.ch"
    register PPTREE _inter ;
#line 1441 "clpretty.ch"

#line 1441 "clpretty.ch"
#line 1441 "clpretty.ch"
    int _nextVal ;
    
#line 1441 "clpretty.ch"
#line 1443 "clpretty.ch"
    
    PTREE   son ;
#line 1443 "clpretty.ch"
    
#line 1443 "clpretty.ch"
#line 1444 "clpretty.ch"
    int i ;
    
#line 1444 "clpretty.ch"
#line 1446 "clpretty.ch"
    switch ( NumberTree(tree) ) {
#line 1446 "clpretty.ch"
#line 1448 "clpretty.ch"
        case pretty::NEWLINE : 
#line 1448 "clpretty.ch"
#line 1448 "clpretty.ch"
            (son=SonTree(tree, 1));
#line 1448 "clpretty.ch"
            
#line 1448 "clpretty.ch"
#line 1448 "clpretty.ch"
        _Case8 : 
#line 1448 "clpretty.ch"
#line 1448 "clpretty.ch"
            ;
#line 1448 "clpretty.ch"
#line 1448 "clpretty.ch"
            LNewLine(atoi(BrainyValue(son)));
#line 1448 "clpretty.ch"
#line 1449 "clpretty.ch"
            break ;
            
#line 1449 "clpretty.ch"
#line 1451 "clpretty.ch"
        case pretty::TAB : 
#line 1451 "clpretty.ch"
#line 1451 "clpretty.ch"
            (son=SonTree(tree, 1));
#line 1451 "clpretty.ch"
            
#line 1451 "clpretty.ch"
#line 1451 "clpretty.ch"
        _Case9 : 
#line 1451 "clpretty.ch"
#line 1451 "clpretty.ch"
            ;
#line 1451 "clpretty.ch"
#line 1451 "clpretty.ch"
            i = atoi(BrainyValue(son));
#line 1451 "clpretty.ch"
#line 1452 "clpretty.ch"
            while ( i-- > 0 ) 
#line 1452 "clpretty.ch"
#line 1453 "clpretty.ch"
                Tab();
#line 1453 "clpretty.ch"
            
#line 1453 "clpretty.ch"
#line 1454 "clpretty.ch"
            break ;
            
#line 1454 "clpretty.ch"
#line 1456 "clpretty.ch"
        case pretty::STR : 
#line 1456 "clpretty.ch"
#line 1456 "clpretty.ch"
            (son=SonTree(tree, 1));
#line 1456 "clpretty.ch"
            
#line 1456 "clpretty.ch"
#line 1456 "clpretty.ch"
        _Case10 : 
#line 1456 "clpretty.ch"
#line 1456 "clpretty.ch"
            ;
#line 1456 "clpretty.ch"
#line 1456 "clpretty.ch"
            DumpBrainyValue(son);
#line 1456 "clpretty.ch"
            
#line 1456 "clpretty.ch"
#line 1457 "clpretty.ch"
            break ;
            
#line 1457 "clpretty.ch"
#line 1459 "clpretty.ch"
        case pretty::MARK : 
#line 1459 "clpretty.ch"
#line 1459 "clpretty.ch"
        _Case11 : 
#line 1459 "clpretty.ch"
#line 1459 "clpretty.ch"
            ;
#line 1459 "clpretty.ch"
#line 1459 "clpretty.ch"
            Mark();
#line 1459 "clpretty.ch"
#line 1460 "clpretty.ch"
            break ;
            
#line 1460 "clpretty.ch"
#line 1462 "clpretty.ch"
        case pretty::UNMARK : 
#line 1462 "clpretty.ch"
#line 1462 "clpretty.ch"
        _Case12 : 
#line 1462 "clpretty.ch"
#line 1462 "clpretty.ch"
            ;
#line 1462 "clpretty.ch"
#line 1462 "clpretty.ch"
            UnMark();
#line 1462 "clpretty.ch"
#line 1463 "clpretty.ch"
            break ;
            
#line 1463 "clpretty.ch"
#line 1465 "clpretty.ch"
        case pretty::GOTO : 
#line 1465 "clpretty.ch"
#line 1465 "clpretty.ch"
            (son=SonTree(tree, 1));
#line 1465 "clpretty.ch"
            
#line 1465 "clpretty.ch"
#line 1465 "clpretty.ch"
        _Case13 : 
#line 1465 "clpretty.ch"
#line 1465 "clpretty.ch"
            ;
#line 1465 "clpretty.ch"
#line 1465 "clpretty.ch"
            GotoCol(atoi(BrainyValue(son)));
#line 1465 "clpretty.ch"
#line 1466 "clpretty.ch"
            break ;
            
#line 1466 "clpretty.ch"
    }
#line 1466 "clpretty.ch"
    
#line 1466 "clpretty.ch"
#line 1468 "clpretty.ch"
    
#line 1468 "clpretty.ch"
#line 1468 "clpretty.ch"
}
#line 1468 "clpretty.ch"

#line 1472 "clpretty.ch"

#line 1472 "clpretty.ch"
void clpretty::DecompList ( PTREE list, const char *sep, const char *term, int nbNl )
#line 1472 "clpretty.ch"
{
#line 1472 "clpretty.ch"
    register PPTREE _inter ;
#line 1472 "clpretty.ch"

#line 1472 "clpretty.ch"
#line 1472 "clpretty.ch"
    int _nextVal ;
    
#line 1472 "clpretty.ch"
#line 1475 "clpretty.ch"
    
    PTREE   elem ;
#line 1475 "clpretty.ch"
    
#line 1475 "clpretty.ch"
#line 1476 "clpretty.ch"
    int nbNewLine ;
    
#line 1476 "clpretty.ch"
#line 1478 "clpretty.ch"
    while ( ((_inter = (PPTREE)list,1) && 
#line 1478 "clpretty.ch"
                (NumberTree(_inter) == LIST) &&
#line 1478 "clpretty.ch"
                1) ) {
#line 1478 "clpretty.ch"
#line 1479 "clpretty.ch"
                        if ( ((elem=list.Nextl())) ) 
#line 1479 "clpretty.ch"
#line 1480 "clpretty.ch"
                            Decomp(elem);
#line 1480 "clpretty.ch"
#line 1481 "clpretty.ch"
                        if ( list ) {
#line 1481 "clpretty.ch"
#line 1482 "clpretty.ch"
                                        if ( sep ) 
#line 1482 "clpretty.ch"
#line 1483 "clpretty.ch"
                                            PrintString(sep);
#line 1483 "clpretty.ch"
#line 1484 "clpretty.ch"
                                        if ( (nbNewLine = nbNl) ) 
#line 1484 "clpretty.ch"
#line 1485 "clpretty.ch"
                                            LNewLine(nbNewLine);
#line 1485 "clpretty.ch"
#line 1486 "clpretty.ch"
                                        
#line 1486 "clpretty.ch"
#line 1486 "clpretty.ch"
                                     }
#line 1486 "clpretty.ch"
#line 1487 "clpretty.ch"
                        
#line 1487 "clpretty.ch"
#line 1487 "clpretty.ch"
                     }
#line 1487 "clpretty.ch"
#line 1488 "clpretty.ch"
    if ( term ) 
#line 1488 "clpretty.ch"
#line 1489 "clpretty.ch"
        PrintString(term);
#line 1489 "clpretty.ch"
#line 1490 "clpretty.ch"
    
#line 1490 "clpretty.ch"
#line 1490 "clpretty.ch"
}
#line 1490 "clpretty.ch"

#line 1494 "clpretty.ch"

#line 1494 "clpretty.ch"
int clpretty::commAtBeginning ( PTREE tree )
#line 1494 "clpretty.ch"
{
#line 1494 "clpretty.ch"
    register PPTREE _inter ;
#line 1494 "clpretty.ch"

#line 1494 "clpretty.ch"
#line 1494 "clpretty.ch"
    int _nextVal ;
    
#line 1494 "clpretty.ch"
#line 1497 "clpretty.ch"
    
    PTREE   father ;
#line 1497 "clpretty.ch"
    
#line 1497 "clpretty.ch"
#line 1499 "clpretty.ch"
    if ( ( _inter = 
#line 1499 "clpretty.ch"
            FatherTree(tree),((_inter = (PPTREE)_inter,1) && 
#line 1499 "clpretty.ch"
                                (NumberTree(_inter) == pretty::ATTRIBUTS) &&
#line 1499 "clpretty.ch"
                                1)) ) 
#line 1499 "clpretty.ch"
#line 1500 "clpretty.ch"
        (father=NFatherTree(tree,2));
#line 1500 "clpretty.ch"
    
#line 1500 "clpretty.ch"
    else 
#line 1500 "clpretty.ch"
#line 1502 "clpretty.ch"
        (father=FatherTree(tree));
#line 1502 "clpretty.ch"
        
#line 1502 "clpretty.ch"
    
#line 1502 "clpretty.ch"
#line 1503 "clpretty.ch"
    if ( (!father) ) 
#line 1503 "clpretty.ch"
#line 1504 "clpretty.ch"
        return 1 ;
    
#line 1504 "clpretty.ch"
#line 1505 "clpretty.ch"
    if ( ((_inter = (PPTREE)father,1) && 
#line 1505 "clpretty.ch"
            (NumberTree(_inter) == LIST) &&
#line 1505 "clpretty.ch"
            1) ) {
#line 1505 "clpretty.ch"
#line 1506 "clpretty.ch"
                    (father=NFatherTree(father,2));
#line 1506 "clpretty.ch"
                    
#line 1506 "clpretty.ch"
#line 1507 "clpretty.ch"
                    if ( (!father) ) {
#line 1507 "clpretty.ch"
#line 1508 "clpretty.ch"
                                        return 1 ;
                                        
#line 1508 "clpretty.ch"
#line 1509 "clpretty.ch"
                                        
#line 1509 "clpretty.ch"
#line 1509 "clpretty.ch"
                                       }
#line 1509 "clpretty.ch"
#line 1510 "clpretty.ch"
                    
#line 1510 "clpretty.ch"
#line 1510 "clpretty.ch"
                 }
#line 1510 "clpretty.ch"
#line 1511 "clpretty.ch"
    return 0 ;
    
#line 1511 "clpretty.ch"
#line 1512 "clpretty.ch"
    
#line 1512 "clpretty.ch"
#line 1512 "clpretty.ch"
}
#line 1512 "clpretty.ch"

#line 1516 "clpretty.ch"

#line 1516 "clpretty.ch"
int clpretty::comm ( PTREE paramTree, int type )
#line 1516 "clpretty.ch"
{
#line 1516 "clpretty.ch"
#line 1516 "clpretty.ch"
    int _nextVal ;
    
#line 1516 "clpretty.ch"
#line 1519 "clpretty.ch"
    
    char    *comment ;
    
#line 1519 "clpretty.ch"
#line 1520 "clpretty.ch"
    PTREE   father ;
#line 1520 "clpretty.ch"
    
#line 1520 "clpretty.ch"
#line 1521 "clpretty.ch"
    const char  *intStartComment, *intMiddleComment, *intEndComment, *intPlusComment ;
    
#line 1521 "clpretty.ch"
#line 1523 "clpretty.ch"
    intStartComment = startComment ? startComment : "/*";
#line 1523 "clpretty.ch"
#line 1524 "clpretty.ch"
    intMiddleComment = middleComment ? middleComment : "  ";
#line 1524 "clpretty.ch"
#line 1525 "clpretty.ch"
    intEndComment = endComment ? endComment : "*/";
#line 1525 "clpretty.ch"
#line 1526 "clpretty.ch"
    intPlusComment = plusComment ? plusComment : "//";
#line 1526 "clpretty.ch"
#line 1527 "clpretty.ch"
    if ( (!paramTree) || inhibateComment ) 
#line 1527 "clpretty.ch"
#line 1528 "clpretty.ch"
        return 0 ;
    
#line 1528 "clpretty.ch"
#line 1529 "clpretty.ch"
    if ( type == PRE && (comment = IsComm(paramTree, PRE)) ) {
#line 1529 "clpretty.ch"
#line 1530 "clpretty.ch"
                                                                        PTREE   inter = (PTREE)0 ;
#line 1530 "clpretty.ch"
                                                                        
#line 1530 "clpretty.ch"
#line 1531 "clpretty.ch"
                                                                        int beginning = Beginning();
                                                                        
#line 1531 "clpretty.ch"
#line 1530 "clpretty.ch"
                                                                        (inter=(PTREE)0);
#line 1530 "clpretty.ch"
                                                                        
#line 1530 "clpretty.ch"
#line 1532 "clpretty.ch"
                                                                        if ( !commAtBeginning(paramTree) ) {
#line 1532 "clpretty.ch"
#line 1537 "clpretty.ch"
                                                                                                                if ( beginning ) {
#line 1537 "clpretty.ch"
#line 1538 "clpretty.ch"
                                                                                                                                  if ( *comment == *(intPlusComment + 1) && *(comment + 1) == ' ' ) 
#line 1538 "clpretty.ch"
#line 1539 "clpretty.ch"
                                                                                                                                  LNewLine(2);
#line 1539 "clpretty.ch"
                                                                                                                                  else 
#line 1540 "clpretty.ch"
                                                                                                                                  if ( *comment == ' ' ) 
#line 1540 "clpretty.ch"
#line 1541 "clpretty.ch"
                                                                                                                                  LNewLine(2);
#line 1541 "clpretty.ch"
                                                                                                                                  else 
#line 1541 "clpretty.ch"
#line 1543 "clpretty.ch"
                                                                                                                                  LNewLine(1);
#line 1543 "clpretty.ch"
                                                                                                                                  
#line 1543 "clpretty.ch"
                                                                                                                                  
#line 1543 "clpretty.ch"
#line 1544 "clpretty.ch"
                                                                                                                                  
#line 1544 "clpretty.ch"
#line 1544 "clpretty.ch"
                                                                                                                                  } else 
#line 1544 "clpretty.ch"
#line 1545 "clpretty.ch"
                                                                                                                    Space(1);
#line 1545 "clpretty.ch"
                                                                                                                    
#line 1545 "clpretty.ch"
                                                                                                                
#line 1545 "clpretty.ch"
#line 1546 "clpretty.ch"
                                                                                                                
#line 1546 "clpretty.ch"
#line 1546 "clpretty.ch"
                                                                                                              }
#line 1546 "clpretty.ch"
#line 1547 "clpretty.ch"
                                                                        do {
#line 1547 "clpretty.ch"
#line 1548 "clpretty.ch"
                                                                            if ( inter ) 
#line 1548 "clpretty.ch"
#line 1549 "clpretty.ch"
                                                                                comment = BrainyValue(inter);
#line 1549 "clpretty.ch"
#line 1551 "clpretty.ch"
                                                                            Mark();
#line 1551 "clpretty.ch"
                                                                            if ( *comment == *(intPlusComment + 1) ) 
#line 1551 "clpretty.ch"
#line 1552 "clpretty.ch"
                                                                                (inter=PrintCommE(paramTree, PRE, inter, intPlusComment + 1, intPlusComment + 1, ""));
#line 1552 "clpretty.ch"
                                                                            
#line 1552 "clpretty.ch"
                                                                            else 
#line 1552 "clpretty.ch"
#line 1554 "clpretty.ch"
                                                                                (inter=PrintCommE(paramTree, PRE, inter, intMiddleComment, intStartComment, intEndComment));
#line 1554 "clpretty.ch"
                                                                                
#line 1554 "clpretty.ch"
                                                                            
#line 1554 "clpretty.ch"
                                                                            UnMark();
#line 1554 "clpretty.ch"
                                                                            
#line 1554 "clpretty.ch"
#line 1558 "clpretty.ch"
                                                                            if ( beginning || *comment == *(intPlusComment + 1) ) {
#line 1558 "clpretty.ch"
#line 1559 "clpretty.ch"
                                                                                                                                         LNewLine(1);
#line 1559 "clpretty.ch"
                                                                                                                                         
#line 1559 "clpretty.ch"
#line 1560 "clpretty.ch"
                                                                                                                                         
#line 1560 "clpretty.ch"
#line 1560 "clpretty.ch"
                                                                                                                                         } else 
#line 1560 "clpretty.ch"
#line 1561 "clpretty.ch"
                                                                                Space(1);
#line 1561 "clpretty.ch"
                                                                                
#line 1561 "clpretty.ch"
                                                                            
#line 1561 "clpretty.ch"
#line 1562 "clpretty.ch"
                                                                            
#line 1562 "clpretty.ch"
#line 1562 "clpretty.ch"
                                                                           } 
#line 1562 "clpretty.ch"
                                                                        while ( inter );
#line 1562 "clpretty.ch"
                                                                        
#line 1562 "clpretty.ch"
#line 1563 "clpretty.ch"
                                                                        return 1 ;
                                                                        
#line 1563 "clpretty.ch"
#line 1564 "clpretty.ch"
                                                                        
#line 1564 "clpretty.ch"
#line 1564 "clpretty.ch"
                                                                    } else 
#line 1564 "clpretty.ch"
    if ( type == POST && (comment = IsComm(paramTree, POST)) && paramTree != postInhibitor ) {
#line 1564 "clpretty.ch"
#line 1565 "clpretty.ch"
                                                                                                        PTREE   inter = (PTREE)0 ;
#line 1565 "clpretty.ch"
                                                                                                        
#line 1565 "clpretty.ch"
#line 1565 "clpretty.ch"
                                                                                                        (inter=(PTREE)0);
#line 1565 "clpretty.ch"
                                                                                                        
#line 1565 "clpretty.ch"
#line 1567 "clpretty.ch"
                                                                                                        Mark();
#line 1567 "clpretty.ch"
                                                                                                        do {
#line 1567 "clpretty.ch"
#line 1568 "clpretty.ch"
                                                                                                            if ( inter ) 
#line 1568 "clpretty.ch"
#line 1569 "clpretty.ch"
                                                                                                                comment = BrainyValue(inter);
#line 1569 "clpretty.ch"
#line 1570 "clpretty.ch"
                                                                                                            Space(1);
#line 1570 "clpretty.ch"
                                                                                                            
#line 1570 "clpretty.ch"
#line 1571 "clpretty.ch"
                                                                                                            Mark();
#line 1571 "clpretty.ch"
                                                                                                            if ( *comment == *(intPlusComment + 1) ) 
#line 1571 "clpretty.ch"
#line 1572 "clpretty.ch"
                                                                                                                (inter=PrintCommE(paramTree, POST, inter, intPlusComment + 1, intPlusComment + 1, ""));
#line 1572 "clpretty.ch"
                                                                                                            
#line 1572 "clpretty.ch"
                                                                                                            else 
#line 1572 "clpretty.ch"
#line 1574 "clpretty.ch"
                                                                                                                (inter=PrintCommE(paramTree, POST, inter, intMiddleComment, intStartComment, intEndComment));
#line 1574 "clpretty.ch"
                                                                                                                
#line 1574 "clpretty.ch"
                                                                                                            
#line 1574 "clpretty.ch"
                                                                                                            UnMark();
#line 1574 "clpretty.ch"
                                                                                                            
#line 1574 "clpretty.ch"
#line 1576 "clpretty.ch"
                                                                                                            if ( PrePost() && inter || *comment == *(intPlusComment + 1) ) {
#line 1576 "clpretty.ch"
#line 1577 "clpretty.ch"
                                                                                                                                                                                   LNewLine(1);
#line 1577 "clpretty.ch"
                                                                                                                                                                                   
#line 1577 "clpretty.ch"
#line 1578 "clpretty.ch"
                                                                                                                                                                                   
#line 1578 "clpretty.ch"
#line 1578 "clpretty.ch"
                                                                                                                                                                                   } else 
#line 1578 "clpretty.ch"
#line 1579 "clpretty.ch"
                                                                                                                Space(1);
#line 1579 "clpretty.ch"
                                                                                                                
#line 1579 "clpretty.ch"
                                                                                                            
#line 1579 "clpretty.ch"
#line 1580 "clpretty.ch"
                                                                                                            
#line 1580 "clpretty.ch"
#line 1580 "clpretty.ch"
                                                                                                           } 
#line 1580 "clpretty.ch"
                                                                                                        while ( inter );
#line 1580 "clpretty.ch"
                                                                                                        
#line 1580 "clpretty.ch"
                                                                                                        UnMark();
#line 1580 "clpretty.ch"
                                                                                                        
#line 1580 "clpretty.ch"
#line 1582 "clpretty.ch"
                                                                                                        return 1 ;
                                                                                                        
#line 1582 "clpretty.ch"
#line 1583 "clpretty.ch"
                                                                                                        
#line 1583 "clpretty.ch"
#line 1583 "clpretty.ch"
                                                                                                      }
#line 1583 "clpretty.ch"
#line 1584 "clpretty.ch"
    return 0 ;
    
#line 1584 "clpretty.ch"
#line 1585 "clpretty.ch"
    
#line 1585 "clpretty.ch"
#line 1585 "clpretty.ch"
}
#line 1585 "clpretty.ch"

#line 1589 "clpretty.ch"

#line 1589 "clpretty.ch"
void clpretty::Decomp ( const PTREE &paramTree, int funcAlone )
#line 1589 "clpretty.ch"
{
#line 1589 "clpretty.ch"
    register PPTREE _inter ;
#line 1589 "clpretty.ch"

#line 1589 "clpretty.ch"
#line 1589 "clpretty.ch"
    int _nextVal ;
    
#line 1589 "clpretty.ch"
#line 1592 "clpretty.ch"
    
    PTREE   exp, stat, name ;
#line 1592 "clpretty.ch"
    
#line 1592 "clpretty.ch"
#line 1593 "clpretty.ch"
    int oldXFather = xFather, oldYFather = yFather ;
    
#line 1593 "clpretty.ch"
#line 1594 "clpretty.ch"
    int oldMaxX = maxX ;
    
#line 1594 "clpretty.ch"
#line 1595 "clpretty.ch"
    int begCurrCol = currCol, begCurrLine = currLine ;
    
#line 1595 "clpretty.ch"
#line 1596 "clpretty.ch"
    int theMark = GetMark();
    
#line 1596 "clpretty.ch"
#line 1597 "clpretty.ch"
    int startNewLine ;
    
#line 1597 "clpretty.ch"
#line 1600 "clpretty.ch"
    startNewLine = lastLineOn == currLine ? 0 : (lastLineOn = currLine, 0x4);
#line 1600 "clpretty.ch"
#line 1601 "clpretty.ch"
    if ( (!paramTree) ) 
#line 1601 "clpretty.ch"
#line 1602 "clpretty.ch"
        return ;
    
#line 1602 "clpretty.ch"
#line 1606 "clpretty.ch"
    if ( isVirtMod && !(((_inter = (PPTREE)paramTree,1) && 
#line 1606 "clpretty.ch"
                            (NumberTree(_inter) == pretty::ATTRIBUTS) &&
#line 1606 "clpretty.ch"
                            1)) ) {
#line 1606 "clpretty.ch"
#line 1607 "clpretty.ch"
                                    xFather = currCol, yFather = currLine ;
#line 1607 "clpretty.ch"
#line 1608 "clpretty.ch"
                                    maxX = currCol ;
#line 1608 "clpretty.ch"
#line 1609 "clpretty.ch"
                                    
#line 1609 "clpretty.ch"
#line 1609 "clpretty.ch"
                                  }
#line 1609 "clpretty.ch"
#line 1611 "clpretty.ch"
    {
#line 1611 "clpretty.ch"
#line 1611 "clpretty.ch"
        int commPre = 0 ;
        
#line 1611 "clpretty.ch"
#line 1616 "clpretty.ch"
        if ( !Beginning() && (commPre = (int)(long)IsComm(paramTree, PRE)) ) {
#line 1616 "clpretty.ch"
#line 1617 "clpretty.ch"
                                                                                            Mark();
#line 1617 "clpretty.ch"
#line 1622 "clpretty.ch"
                                                                                            currCol++ ;
#line 1622 "clpretty.ch"
#line 1623 "clpretty.ch"
                                                                                            comm(paramTree, PRE);
#line 1623 "clpretty.ch"
#line 1624 "clpretty.ch"
                                                                                            
#line 1624 "clpretty.ch"
#line 1624 "clpretty.ch"
                                                                                        } else 
#line 1624 "clpretty.ch"
#line 1625 "clpretty.ch"
            comm(paramTree, PRE);
#line 1625 "clpretty.ch"
        
#line 1625 "clpretty.ch"
#line 1626 "clpretty.ch"
        IntDecomp(paramTree, funcAlone);
#line 1626 "clpretty.ch"
#line 1627 "clpretty.ch"
        comm(paramTree, POST);
#line 1627 "clpretty.ch"
#line 1628 "clpretty.ch"
        if ( commPre ) {
#line 1628 "clpretty.ch"
#line 1629 "clpretty.ch"
                            UnMark();
#line 1629 "clpretty.ch"
#line 1630 "clpretty.ch"
                            
#line 1630 "clpretty.ch"
#line 1630 "clpretty.ch"
                        }
#line 1630 "clpretty.ch"
#line 1631 "clpretty.ch"
        
#line 1631 "clpretty.ch"
#line 1631 "clpretty.ch"
    }
    
#line 1631 "clpretty.ch"
#line 1632 "clpretty.ch"
    if ( isVirtMod && !(((_inter = (PPTREE)paramTree,1) && 
#line 1632 "clpretty.ch"
                            (NumberTree(_inter) == pretty::ATTRIBUTS) &&
#line 1632 "clpretty.ch"
                            1)) ) {
#line 1632 "clpretty.ch"
#line 1633 "clpretty.ch"
                                    xFather = oldXFather, yFather = oldYFather ;
#line 1633 "clpretty.ch"
#line 1637 "clpretty.ch"
                                    if ( currCol > maxX ) 
#line 1637 "clpretty.ch"
#line 1638 "clpretty.ch"
                                        maxX = currCol ;
#line 1638 "clpretty.ch"
#line 1642 "clpretty.ch"
                                    PutCoord(paramTree, begCurrCol - xFather, (currLine - begCurrLine > 0 ? 2 : 0) | startNewLine, maxX - begCurrCol, theMark);
#line 1642 "clpretty.ch"
#line 1645 "clpretty.ch"
                                    if ( maxX < oldMaxX ) 
#line 1645 "clpretty.ch"
#line 1646 "clpretty.ch"
                                        maxX = oldMaxX ;
#line 1646 "clpretty.ch"
#line 1647 "clpretty.ch"
                                    
#line 1647 "clpretty.ch"
#line 1647 "clpretty.ch"
                                  }
#line 1647 "clpretty.ch"
#line 1648 "clpretty.ch"
    
#line 1648 "clpretty.ch"
#line 1648 "clpretty.ch"
}
#line 1648 "clpretty.ch"

#line 1652 "clpretty.ch"

#line 1652 "clpretty.ch"
void clpretty::CleanAttributs ( PTREE tree )
#line 1652 "clpretty.ch"
{
#line 1652 "clpretty.ch"
    register PPTREE _inter ;
#line 1652 "clpretty.ch"

#line 1652 "clpretty.ch"
#line 1652 "clpretty.ch"
    int _nextVal ;
    
#line 1652 "clpretty.ch"
#line 1655 "clpretty.ch"
    
    PTREE   son ;
#line 1655 "clpretty.ch"
    
#line 1655 "clpretty.ch"
#line 1656 "clpretty.ch"
    int x, y, dx, posMark ;
    
#line 1656 "clpretty.ch"
#line 1658 "clpretty.ch"
    {
#line 1658 "clpretty.ch"
#line 1658 "clpretty.ch"
        ItPtree _iterator1 (tree, (PPTREE) 0) ;
        
#line 1658 "clpretty.ch"
#line 1658 "clpretty.ch"
        PTREE   _for_elem ;
#line 1658 "clpretty.ch"
        
#line 1658 "clpretty.ch"
#line 1658 "clpretty.ch"
        _iterator1.AllSearch(1);
#line 1658 "clpretty.ch"
#line 1658 "clpretty.ch"
        while ( (_for_elem=_iterator1++) ) {
#line 1658 "clpretty.ch"
#line 1658 "clpretty.ch"
            {
#line 1658 "clpretty.ch"
#line 1659 "clpretty.ch"
                if ( ((_inter = (PPTREE)for_elem,1) && 
#line 1659 "clpretty.ch"
                        (NumberTree(_inter) == pretty::ATTRIBUTS) &&
#line 1659 "clpretty.ch"
                        ((son=SonTree(_inter,1)),1) &&
#line 1659 "clpretty.ch"
                        1) && FatherTree(for_elem) ) {
#line 1659 "clpretty.ch"
#line 1660 "clpretty.ch"
                                                        replacetree(FatherTree(for_elem), ranktree(for_elem), son);
#line 1660 "clpretty.ch"
#line 1661 "clpretty.ch"
                                                        for_elem = son ;
#line 1661 "clpretty.ch"
#line 1662 "clpretty.ch"
                                                        
#line 1662 "clpretty.ch"
#line 1662 "clpretty.ch"
                                                      }
#line 1662 "clpretty.ch"
#line 1663 "clpretty.ch"
                if ( GetCoord(for_elem, &x, &y, &dx, &posMark) ) {
#line 1663 "clpretty.ch"
#line 1664 "clpretty.ch"
                                                                            FreeCoord(for_elem);
#line 1664 "clpretty.ch"
#line 1665 "clpretty.ch"
                                                                            
#line 1665 "clpretty.ch"
#line 1665 "clpretty.ch"
                                                                           }
#line 1665 "clpretty.ch"
#line 1666 "clpretty.ch"
                
#line 1666 "clpretty.ch"
#line 1666 "clpretty.ch"
            }
            
#line 1666 "clpretty.ch"
#line 1666 "clpretty.ch"
            _iterator1.Current(_for_elem);
#line 1666 "clpretty.ch"
#line 1666 "clpretty.ch"
            continue ;
            
#line 1666 "clpretty.ch"
#line 1666 "clpretty.ch"
        for_continue1 : 
#line 1666 "clpretty.ch"
#line 1666 "clpretty.ch"
            _iterator1.Current(_for_elem);
#line 1666 "clpretty.ch"
#line 1666 "clpretty.ch"
            _iterator1.SkipSon(1);
#line 1666 "clpretty.ch"
#line 1666 "clpretty.ch"
            continue ;
            
#line 1666 "clpretty.ch"
#line 1666 "clpretty.ch"
        for_break1 : 
#line 1666 "clpretty.ch"
#line 1666 "clpretty.ch"
            break ;
            
#line 1666 "clpretty.ch"
#line 1666 "clpretty.ch"
            
#line 1666 "clpretty.ch"
#line 1666 "clpretty.ch"
        }
#line 1666 "clpretty.ch"
#line 1666 "clpretty.ch"
        
#line 1666 "clpretty.ch"
#line 1666 "clpretty.ch"
    }
    
#line 1666 "clpretty.ch"
#line 1667 "clpretty.ch"
    
#line 1667 "clpretty.ch"
#line 1667 "clpretty.ch"
}
#line 1667 "clpretty.ch"

#line 1672 "clpretty.ch"

#line 1672 "clpretty.ch"
void clpretty::DisplayError ( PTREE printList, bool current )
#line 1672 "clpretty.ch"
{
#line 1672 "clpretty.ch"
    register PPTREE _inter ;
#line 1672 "clpretty.ch"

#line 1672 "clpretty.ch"
#line 1672 "clpretty.ch"
    int _nextVal ;
    
#line 1672 "clpretty.ch"
#line 1675 "clpretty.ch"
    
    PTREE   elem ;
#line 1675 "clpretty.ch"
    
#line 1675 "clpretty.ch"
#line 1676 "clpretty.ch"
    int oldOutput = output ;
    
#line 1676 "clpretty.ch"
#line 1677 "clpretty.ch"
    PTREE   oldList = (PTREE)0 ;
#line 1677 "clpretty.ch"
    
#line 1677 "clpretty.ch"
#line 1677 "clpretty.ch"
    (oldList=printList);
#line 1677 "clpretty.ch"
    
#line 1677 "clpretty.ch"
#line 1679 "clpretty.ch"
    if ( current ) {
#line 1679 "clpretty.ch"
#line 1680 "clpretty.ch"
                        Flush();
#line 1680 "clpretty.ch"
#line 1681 "clpretty.ch"
                        LNewLine(2);
#line 1681 "clpretty.ch"
                        
#line 1681 "clpretty.ch"
#line 1682 "clpretty.ch"
                        if ( !emacsCompatibleError ) {
#line 1682 "clpretty.ch"
#line 1683 "clpretty.ch"
                                                        PrintString("====> ");
#line 1683 "clpretty.ch"
#line 1684 "clpretty.ch"
                                                        
#line 1684 "clpretty.ch"
#line 1684 "clpretty.ch"
                                                       } else 
#line 1684 "clpretty.ch"
                        {
#line 1684 "clpretty.ch"
#line 1685 "clpretty.ch"
                            PrintString("==================================");
#line 1685 "clpretty.ch"
#line 1685 "clpretty.ch"
                            LNewLine(1);
#line 1685 "clpretty.ch"
                            
#line 1685 "clpretty.ch"
#line 1686 "clpretty.ch"
                            
#line 1686 "clpretty.ch"
#line 1686 "clpretty.ch"
                        }
                        
#line 1686 "clpretty.ch"
#line 1687 "clpretty.ch"
                        while ( ((elem=(printList?printList.Nextl():(PPTREE)0))) || !((!printList)) ) {
#line 1687 "clpretty.ch"
#line 1688 "clpretty.ch"
                                                                                                                switch ( NumberTree(elem) ) {
#line 1688 "clpretty.ch"
#line 1690 "clpretty.ch"
                                                                                                                    case TERM_TREE : 
#line 1690 "clpretty.ch"
#line 1690 "clpretty.ch"
                                                                                                                    _Case18 : 
#line 1690 "clpretty.ch"
#line 1690 "clpretty.ch"
                                                                                                                        ;
#line 1690 "clpretty.ch"
#line 1690 "clpretty.ch"
                                                                                                                        DumpBrainyValue(elem);
#line 1690 "clpretty.ch"
                                                                                                                        
#line 1690 "clpretty.ch"
#line 1691 "clpretty.ch"
                                                                                                                        break ;
                                                                                                                        
#line 1691 "clpretty.ch"
#line 1693 "clpretty.ch"
                                                                                                                    default : 
#line 1693 "clpretty.ch"
#line 1693 "clpretty.ch"
                                                                                                                    _Case19 : 
#line 1693 "clpretty.ch"
#line 1693 "clpretty.ch"
                                                                                                                        ;
#line 1693 "clpretty.ch"
#line 1693 "clpretty.ch"
                                                                                                                        LNewLine(1);
#line 1693 "clpretty.ch"
                                                                                                                        
#line 1693 "clpretty.ch"
#line 1694 "clpretty.ch"
                                                                                                                        Decomp(elem, true);
#line 1694 "clpretty.ch"
#line 1695 "clpretty.ch"
                                                                                                                        LNewLine(1);
#line 1695 "clpretty.ch"
                                                                                                                        
#line 1695 "clpretty.ch"
#line 1696 "clpretty.ch"
                                                                                                                        break ;
                                                                                                                        
#line 1696 "clpretty.ch"
                                                                                                                }
#line 1696 "clpretty.ch"
                                                                                                                
#line 1696 "clpretty.ch"
#line 1698 "clpretty.ch"
                                                                                                                
#line 1698 "clpretty.ch"
#line 1698 "clpretty.ch"
                                                                                                             }
#line 1698 "clpretty.ch"
#line 1699 "clpretty.ch"
                        LNewLine(2);
#line 1699 "clpretty.ch"
                        
#line 1699 "clpretty.ch"
#line 1700 "clpretty.ch"
                        
#line 1700 "clpretty.ch"
#line 1700 "clpretty.ch"
                    }
#line 1700 "clpretty.ch"
#line 1701 "clpretty.ch"
    (printList=oldList);
#line 1701 "clpretty.ch"
    
#line 1701 "clpretty.ch"
#line 1702 "clpretty.ch"
    output = 2 ;
#line 1702 "clpretty.ch"
#line 1703 "clpretty.ch"
    if ( !emacsCompatibleError ) {
#line 1703 "clpretty.ch"
#line 1704 "clpretty.ch"
                                    PrintString("====> ");
#line 1704 "clpretty.ch"
#line 1705 "clpretty.ch"
                                    
#line 1705 "clpretty.ch"
#line 1705 "clpretty.ch"
                                   } else 
#line 1705 "clpretty.ch"
    {
#line 1705 "clpretty.ch"
#line 1706 "clpretty.ch"
        PrintString("===================================");
#line 1706 "clpretty.ch"
#line 1706 "clpretty.ch"
        LNewLine(2);
#line 1706 "clpretty.ch"
        
#line 1706 "clpretty.ch"
#line 1707 "clpretty.ch"
        
#line 1707 "clpretty.ch"
#line 1707 "clpretty.ch"
    }
    
#line 1707 "clpretty.ch"
#line 1708 "clpretty.ch"
    while ( ((_inter = (PPTREE)printList,1) && 
#line 1708 "clpretty.ch"
                (NumberTree(_inter) == LIST) &&
#line 1708 "clpretty.ch"
                1) && ((elem=(printList?printList.Nextl():(PPTREE)0))) ) {
#line 1708 "clpretty.ch"
#line 1709 "clpretty.ch"
                                                                                switch ( NumberTree(elem) ) {
#line 1709 "clpretty.ch"
#line 1711 "clpretty.ch"
                                                                                    case TERM_TREE : 
#line 1711 "clpretty.ch"
#line 1711 "clpretty.ch"
                                                                                    _Case20 : 
#line 1711 "clpretty.ch"
#line 1711 "clpretty.ch"
                                                                                        ;
#line 1711 "clpretty.ch"
#line 1711 "clpretty.ch"
                                                                                        DumpBrainyValue(elem);
#line 1711 "clpretty.ch"
                                                                                        
#line 1711 "clpretty.ch"
#line 1712 "clpretty.ch"
                                                                                        break ;
                                                                                        
#line 1712 "clpretty.ch"
#line 1714 "clpretty.ch"
                                                                                    default : 
#line 1714 "clpretty.ch"
#line 1714 "clpretty.ch"
                                                                                    _Case21 : 
#line 1714 "clpretty.ch"
#line 1714 "clpretty.ch"
                                                                                        ;
#line 1714 "clpretty.ch"
#line 1714 "clpretty.ch"
                                                                                        LNewLine(1);
#line 1714 "clpretty.ch"
                                                                                        
#line 1714 "clpretty.ch"
#line 1715 "clpretty.ch"
                                                                                        Decomp(elem, true);
#line 1715 "clpretty.ch"
#line 1716 "clpretty.ch"
                                                                                        LNewLine(1);
#line 1716 "clpretty.ch"
                                                                                        
#line 1716 "clpretty.ch"
#line 1717 "clpretty.ch"
                                                                                        break ;
                                                                                        
#line 1717 "clpretty.ch"
                                                                                }
#line 1717 "clpretty.ch"
                                                                                
#line 1717 "clpretty.ch"
#line 1719 "clpretty.ch"
                                                                                
#line 1719 "clpretty.ch"
#line 1719 "clpretty.ch"
                                                                              }
#line 1719 "clpretty.ch"
#line 1720 "clpretty.ch"
    LNewLine(2);
#line 1720 "clpretty.ch"
    
#line 1720 "clpretty.ch"
#line 1721 "clpretty.ch"
    output = oldOutput ;
#line 1721 "clpretty.ch"
#line 1722 "clpretty.ch"
    
#line 1722 "clpretty.ch"
#line 1722 "clpretty.ch"
}
#line 1722 "clpretty.ch"

#line 1722 "clpretty.ch"
#line 1722 "clpretty.ch"
static void clpretty_Anchor () { int i = 1;} 
#line 1722 "clpretty.ch"
/*Well done my boy */ 
#line 1722 "clpretty.ch"
