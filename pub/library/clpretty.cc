/*************************************************************************/
/*                                                                       */
/*        Produced by Metachop version 2.0  -    1989-1995               */
/*     Tree      Meta     Chopper      developped    by                  */
/*                  Eric Lavillonniere                                   */
/*                                                                       */
/*************************************************************************/
#include "token.h"

#define decomp decomp_pretty

#ifndef for_elem
#   define for_elem _for_elem
#endif
#ifdef INCONNU
    PTREE   for_elem ;
#endif

#include "clpretty.h"
#include "Protector.h"

void clpretty::PutAttr ( PTREE tree, PTREE listAttr, int attr, int pos )
{
    register PPTREE _inter ;
    int             _nextVal ;
    PTREE           father = (PTREE)0 ;
    int             rank = ranktree(tree);
    PTREE           oldListAttr ;
    
    (father =  FatherTree(tree));
    if ( ((_inter = (PPTREE)tree), 1) && NumberTree(_inter) == pretty::ATTRIBUTS ) 
        (father =  tree);
    oldListAttr =  (PPTREE)0 ;
    if ( attr == POST_ATTR ) {
        ((_inter =  (PPTREE)father, 1) && NumberTree(_inter) == pretty::ATTRIBUTS && ((oldListAttr =  SonTree(_inter, 3)), 1));
    } else {
        ((_inter =  (PPTREE)father, 1) && NumberTree(_inter) == pretty::ATTRIBUTS && ((oldListAttr =  SonTree(_inter, 2)), 1));
    }
    {
        if ( oldListAttr ) {
            if ( pos == PUT_BEG ) {
                (oldListAttr =  AddListList(copytree(listAttr), oldListAttr));
            } else {
                (oldListAttr =  AddListList(oldListAttr, copytree(listAttr)));
            }
        } else 
            (oldListAttr =  copytree(listAttr));
    }
    if ( ((_inter = (PPTREE)father), 1) && NumberTree(_inter) == pretty::ATTRIBUTS ) {
        if ( attr == PRE_ATTR ) {
            {
                PPTREE  _ptTree0 = (PPTREE)0, _sonTree0 = (PPTREE)0 ;
                ReplaceTree(father, 2, oldListAttr);
            }
        } else {
            {
                PPTREE  _ptTree0 = (PPTREE)0, _sonTree0 = (PPTREE)0 ;
                ReplaceTree(father, 3, oldListAttr);
            }
        }
    } else {
        if ( attr == PRE_ATTR ) {
            PTREE   _Baum0 ;
            {
                PPTREE  _ptTree0 = (PPTREE)0, _ptRes0 = (PPTREE)0 ;
                _ptRes0 =  MakeTree(pretty::ATTRIBUTS, 3);
                ReplaceTree(_ptRes0, 1, tree);
                ReplaceTree(_ptRes0, 2, oldListAttr);
                _Baum0 =  _ptRes0 ;
            }
            replacetree(father, rank, _Baum0);
        } else {
            PTREE   _Baum1 ;
            {
                PPTREE  _ptTree0 = (PPTREE)0, _ptRes0 = (PPTREE)0 ;
                _ptRes0 =  MakeTree(pretty::ATTRIBUTS, 3);
                ReplaceTree(_ptRes0, 1, tree);
                ReplaceTree(_ptRes0, 3, oldListAttr);
                _Baum1 =  _ptRes0 ;
            }
            replacetree(father, rank, _Baum1);
        }
    }
}

class POS_TREE {
    
    public :
    
        int     rank ;
        PTREE   tree ;
        int     currMark ;
};

template <class STACKED> 
    inline void PushValue ( std::vector<STACKED> &stack, int &pos, STACKED stacked )
    {
        int _nextVal ;
        
        pos++ ;
        if ( pos >= (int)stack.size() ) 
            stack.push_back(stacked);
        else 
            stack [pos] =  stacked ;
    }
    
inline bool SetMark ( PTREE &currTree, int &currMark )
{
    int _nextVal ;
    int x ;
    int y ;
    int dx ;
    int posMark ;
    int withCoordinate ;
    
    if ( !currTree ) 
        return false ;
    withCoordinate =  GetCoord(currTree, &x, &y, &dx, &posMark);
    if ( withCoordinate ) {
        currMark =  posMark ;
        return true ;
    }
    return false ;
}

void clpretty::CompleteCoordinates ( PTREE currTree )
{
    register PPTREE         _inter ;
    int                     _retVal [2];
    PPTREE                  _storeVal [2];
    int                     _nextVal ;
    int                     x ;
    int                     y ;
    int                     dx ;
    int                     maxDx = 0 ;
    int                     posMark ;
    Protector<int>          protector (currMark) ;
    int                     withCoordinate ;
    PTREE                   inter ;
    PTREE                   topTree (currTree) ;
    std::vector<POS_TREE>   posStack ;
    int                     readStack = -1 ;
    
    if ( !currTree ) 
        return ;
    {
        POS_TREE    curPos = { -1, currTree, currMark };
        PushValue<POS_TREE> (posStack, readStack, curPos);
    }
    while ( !!currTree && currTree.TreeArity() >= 1 ) {
        if ( currTree.TreeArity() == 1
                && (((_inter = (PPTREE)currTree), 1)
                            && ((_retVal [1] = ((_storeVal [1] = _inter), (_inter = SonTree(_inter, 1)), 1) && NumberTree(_inter) == TERM_TREE), ((_inter = _storeVal [1]), 1)
                                , _retVal [1])
                        || ((_inter = (PPTREE)currTree), 1) && !SonTree(_inter, 1)) ) 
            break ;
        PTREE   newTree (currTree [1]) ;
        SetMark(newTree, currMark);
        {
            POS_TREE    newPos = { 1, currTree, currMark };
            PushValue<POS_TREE> (posStack, readStack, newPos);
        }
        (currTree =  newTree);
    }
    while ( true ) {
        if ( posStack [readStack].rank == -1 ) {
            (currTree =  posStack [readStack].tree);
        } else {
            (currTree =  posStack [readStack].tree [posStack [readStack].rank]);
        }
        currMark =  posStack [readStack].currMark ;
        if ( ((_inter = (PPTREE)currTree), 1) && NumberTree(_inter) == pretty::ATTRIBUTS && ((inter = SonTree(_inter, 1)), 1) ) {
            GetCoord(inter, &x, &y, &dx, &posMark);
            PutCoord(currTree, x, y, dx, posMark);
        } else if ( !(((_inter = (PPTREE)currTree), 1) && NumberTree(_inter) == TERM_TREE) && !!currTree ) {
            withCoordinate =  GetCoord(currTree, &x, &y, &dx, &posMark);
            if ( !withCoordinate ) {
                int multiLine = 0 ;
                int newLine = 0 ;
                maxDx =  0 ;
                {
                    {
                        int     _for_slot = 1, _arity = treearity(currTree);
                        MY_TREE _for_elem = (PPTREE)0 ;
                        for (; _for_slot <= _arity ; _for_slot++ ) {
                            _for_elem =  SonTree(currTree, _for_slot);
                            if ( _for_elem && NumberTree(_for_elem) != IN_LANGUAGE ) {
                                GetCoord(for_elem, &x, &y, &dx, &posMark);
                                multiLine |= y & 0x2 ;
                                newLine   |= y & 0x4 ;
                                if ( !dx ) {
                                    if ( ((_inter = (PPTREE)for_elem), 1) && NumberTree(_inter) == TERM_TREE ) 
                                        dx =  strlen(Value(for_elem));
                                }
                                if ( x + dx > maxDx ) 
                                    maxDx =  x + dx ;
                            }
                        }
                    }
                }
                if ( newLine ) 
                    multiLine =  0x2 ;
                PutCoord(currTree, 0, newLine | multiLine, maxDx, currMark);
            }
        }
        if ( posStack [readStack].rank == -1 ) 
            break ;
        {
            bool    found = false ;
            {
                int     rank(posStack [readStack].rank);
                PTREE   father(posStack [readStack].tree);
                while ( !found ) {
                    if ( rank < father.TreeArity() ) {
                        rank =  ++posStack [readStack].rank ;
                        (currTree =  father [rank]);
                        if ( !!currTree ) {
                            found =  true ;
                            {
                                if ( !SetMark(currTree, currMark) ) {
                                    if ( readStack > 0 ) {
                                        currMark =  posStack [readStack - 1].currMark ;
                                    } else {
                                        int i = 1 ;
                                    }
                                }
                                posStack [readStack].currMark =  currMark ;
                            }
                            while ( !!currTree && currTree.TreeArity() >= 1 ) {
                                if ( currTree.TreeArity() == 1
                                        && (((_inter = (PPTREE)currTree), 1)
                                                    && ((_retVal [1] = ((_storeVal [1] = _inter), (_inter = SonTree(_inter, 1)), 1) && NumberTree(_inter) == TERM_TREE)
                                                        , ((_inter = _storeVal [1]), 1), _retVal [1])
                                                || ((_inter = (PPTREE)currTree), 1) && !SonTree(_inter, 1)) ) 
                                    break ;
                                PTREE   newTree (currTree [1]) ;
                                SetMark(newTree, currMark);
                                {
                                    POS_TREE    newPos = { 1, currTree, currMark };
                                    PushValue<POS_TREE> (posStack, readStack, newPos);
                                }
                                (currTree =  newTree);
                            }
                        }
                    } else 
                        break ;
                }
            }
            if ( !found ) {
                readStack-- ;
            }
        }
    }
}

void clpretty::CompleteCoordinatesInt ( PTREE currTree )
{
    register PPTREE _inter ;
    int             _nextVal ;
    int             x ;
    int             y ;
    int             dx ;
    int             maxDx = 0 ;
    int             posMark ;
    Protector<int>  protector (currMark) ;
    int             withCoordinate ;
    PTREE           inter ;
    
    if ( ((_inter = (PPTREE)currTree), 1) && NumberTree(_inter) == pretty::ATTRIBUTS && ((inter = SonTree(_inter, 1)), 1) ) {
        CompleteCoordinates(inter);
        GetCoord(inter, &x, &y, &dx, &posMark);
        PutCoord(currTree, x, y, dx, posMark);
        return ;
    }
    withCoordinate =  GetCoord(currTree, &x, &y, &dx, &posMark);
    if ( withCoordinate ) {
        currMark =  posMark ;
    }
    {
        int     _for_slot = 1, _arity = treearity(currTree);
        MY_TREE _for_elem = (PPTREE)0 ;
        for (; _for_slot <= _arity ; _for_slot++ ) {
            _for_elem =  SonTree(currTree, _for_slot);
            if ( _for_elem && NumberTree(_for_elem) != IN_LANGUAGE ) 
                CompleteCoordinatesInt(for_elem);
        }
    }
    if ( !withCoordinate && !(((_inter = (PPTREE)currTree), 1) && NumberTree(_inter) == TERM_TREE) ) {
        int multiLine = 0 ;
        int newLine = 0 ;
        {
            {
                int     _for_slot = 1, _arity = treearity(currTree);
                MY_TREE _for_elem = (PPTREE)0 ;
                for (; _for_slot <= _arity ; _for_slot++ ) {
                    _for_elem =  SonTree(currTree, _for_slot);
                    if ( _for_elem && NumberTree(_for_elem) != IN_LANGUAGE ) {
                        GetCoord(for_elem, &x, &y, &dx, &posMark);
                        multiLine |= y & 0x2 ;
                        newLine   |= y & 0x4 ;
                        if ( !dx ) {
                            if ( ((_inter = (PPTREE)for_elem), 1) && NumberTree(_inter) == TERM_TREE ) 
                                dx =  strlen(Value(for_elem));
                        }
                        if ( x + dx > maxDx ) 
                            maxDx =  x + dx ;
                    }
                }
            }
        }
        if ( newLine ) 
            multiLine =  0x2 ;
        PutCoord(currTree, 0, newLine | multiLine, maxDx, currMark);
    }
}

void clpretty::CompleteCoordinatesOld ( PTREE currTree )
{
    int             _nextVal ;
    Protector<int>  protector(output, 1);
    
    PrintString(" ================================= > ");
    LNewLine(1);
    DumpTree(currTree);
    NewLine();
    CompleteCoordinatesInt(currTree);
    PrintString(" ================================= >> ");
    LNewLine(1);
    DumpTree(currTree);
    NewLine();
}

int clpretty::GetBoxSize ( PTREE box )
{
    register PPTREE _inter ;
    int             _nextVal ;
    int             x, y, dx, posMark ;
    int             maxDx = -10000 ;
    
    GetCoord(box, &x, &y, &dx, &posMark);
    if ( dx <= 1 ) {
        if ( ((_inter = (PPTREE)box), 1) && NumberTree(_inter) == TERM_TREE ) 
            return x + strlen(Value(box));
        else {
            {
                int     _for_slot = 1, _arity = treearity(box);
                MY_TREE _for_elem = (PPTREE)0 ;
                for (; _for_slot <= _arity ; _for_slot++ ) {
                    _for_elem =  SonTree(box, _for_slot);
                    if ( _for_elem && NumberTree(_for_elem) != IN_LANGUAGE ) {
                        dx =  GetBoxSize(for_elem);
                        if ( dx > maxDx ) 
                            maxDx =  dx ;
                    }
                }
            }
            return x + maxDx ;
        }
    } else 
        return x + dx ;
}

void clpretty::TraitMark ( PTREE tree, int newMark )
{
    int _nextVal ;
    int x, y, dx, dy ;
    
    {
        ItPtree _iterator1(tree, (PPTREE)0);
        PTREE   _for_elem ;
        _iterator1.AllSearch(1);
        while ( (_for_elem = _iterator1++) ) {
            {
                if ( GetCoord(for_elem, &x, &y, &dx, &dy) ) 
                    PutCoord(for_elem, x, y, dx, newMark);
            }
            _iterator1.Current(_for_elem);
            continue ;
        for_continue1 : 
            _iterator1.Current(_for_elem);
            _iterator1.SkipSon(1);
            continue ;
        for_break1 : 
            break ;
        }
    }
}

void clpretty::TraiterExp3 ( PTREE tree, int x0 )
{
    register PPTREE _inter ;
    PTREE           _Baum0 ;
    int             _nextVal ;
    PTREE           son1, son2, list1, list2 ;
    PTREE           refTree ;
    char            string [25];
    int             posRef, colRef, x, y, dx, dy, delta, ret, y0 ;
    PTREE           postAttribute ;
    PTREE           preAttribute ;
    int             maxDx = 0 ;
    
    GetCoord(tree, &x, &y, &dx, &colRef);
    x0 += x ;
    if ( x0 + dx <= rightMargin ) 
        return ;
    MarkCoordTree(tree, x0, 0);
    ((_inter =  (PPTREE)tree, 1) && ((son1 =  SonTree(_inter, 2)), 1) && ((son2 =  SonTree(_inter, 3)), 1));
    if ( colRef == markTab ) {
        posRef =  TAB_VALUE(colRef, nbTab + 1);
        sprintf(string, "%d", nbTab + 1);
    } else {
        posRef =  TAB_VALUE(colRef, 1);
        strcpy(string, "1");
    }
    {
        PPTREE  _ptTree0 = (PPTREE)0 ;
        _ptTree0 =  (PPTREE)0 ;
        {
            PPTREE  _ptTree1 = (PPTREE)0 ;
            {
                PPTREE  _ptTree2 = (PPTREE)0, _ptRes2 = (PPTREE)0 ;
                _ptRes2  =  MakeTree(pretty::NEWLINE, 1);
                _ptTree2 =  MakeString("1");
                ReplaceTree(_ptRes2, 1, _ptTree2);
                _ptTree1 =  _ptRes2 ;
            }
            _ptTree0 =  AddList(_ptTree0, _ptTree1);
        }
        {
            PPTREE  _ptTree1 = (PPTREE)0 ;
            {
                PPTREE  _ptTree2 = (PPTREE)0, _ptRes2 = (PPTREE)0 ;
                _ptRes2  =  MakeTree(pretty::TAB, 1);
                _ptTree2 =  StoreRef(MakeString(string));
                ReplaceTree(_ptRes2, 1, _ptTree2);
                _ptTree1 =  _ptRes2 ;
            }
            _ptTree0 =  AddList(_ptTree0, _ptTree1);
        }
        {
            PPTREE  _ptTree1 = (PPTREE)0 ;
            {
                PPTREE  _ptTree2 = (PPTREE)0, _ptRes2 = (PPTREE)0 ;
                _ptRes2  =  MakeTree(pretty::MARK, 0);
                _ptTree1 =  _ptRes2 ;
            }
            _ptTree0 =  AddList(_ptTree0, _ptTree1);
        }
        {
            PPTREE  _ptTree1 = (PPTREE)0 ;
            {
                PPTREE  _ptTree2 = (PPTREE)0, _ptRes2 = (PPTREE)0 ;
                _ptRes2  =  MakeTree(pretty::STR, 1);
                _ptTree2 =  MakeString("   ");
                ReplaceTree(_ptRes2, 1, _ptTree2);
                _ptTree1 =  _ptRes2 ;
            }
            _ptTree0 =  AddList(_ptTree0, _ptTree1);
        }
        preAttribute =  _ptTree0 ;
    }
    {
        PPTREE  _ptTree0 = (PPTREE)0 ;
        _ptTree0 =  (PPTREE)0 ;
        {
            PPTREE  _ptTree1 = (PPTREE)0 ;
            {
                PPTREE  _ptTree2 = (PPTREE)0, _ptRes2 = (PPTREE)0 ;
                _ptRes2  =  MakeTree(pretty::NEWLINE, 1);
                _ptTree2 =  MakeString("1");
                ReplaceTree(_ptRes2, 1, _ptTree2);
                _ptTree1 =  _ptRes2 ;
            }
            _ptTree0 =  AddList(_ptTree0, _ptTree1);
        }
        postAttribute =  _ptTree0 ;
    }
    PutAttr(son1, preAttribute, PRE_ATTR, PUT_BEG);
    PutAttr(son1, postAttribute, POST_ATTR, PUT_END);
    {
        PPTREE  _ptTree0 = (PPTREE)0 ;
        _ptTree0 =  (PPTREE)0 ;
        {
            PPTREE  _ptTree1 = (PPTREE)0 ;
            {
                PPTREE  _ptTree2 = (PPTREE)0, _ptRes2 = (PPTREE)0 ;
                _ptRes2  =  MakeTree(pretty::UNMARK, 0);
                _ptTree1 =  _ptRes2 ;
            }
            _ptTree0 =  AddList(_ptTree0, _ptTree1);
        }
        postAttribute =  _ptTree0 ;
    }
    PutAttr(son2, postAttribute, POST_ATTR, PUT_END);
    GetCoord(son1, &x, &y, &dx, &dy);
    _Baum0 =  (PPTREE)0 ;
    GetCoordAbs(son1, _Baum0, &x0, &y0);
    delta =  posRef + 3 - x0 ;
    PutCoord(son1, x + delta, y, dx, dy);
    if ( x + delta + dx > maxDx ) 
        maxDx =  x + delta + dx ;
    TraitMark(son1, posRef);
    delta =  posRef - x0 - dx ;
    GetCoord(son2, &x, &y, &dx, &dy);
    PutCoord(son2, x + delta, y, dx, dy);
    if ( x + delta + dx > maxDx ) 
        maxDx =  x + delta + dx ;
    TraitMark(son2, posRef);
    GetCoord(sontree(tree, 1), &x, &y, &dx, &dy);
    if ( x + dx > maxDx ) 
        maxDx =  x + dx ;
    GetCoord(tree, &x, &y, &dx, &dy);
    PutCoord(tree, x, y, maxDx, dy);
    UnMarkCoordTree(tree);
}

void clpretty::TraiterForDeclaration ( PTREE tree, int x0 )
{
    register PPTREE _inter ;
    int             _nextVal ;
    PTREE           son0, son1, son2 ;
    PTREE           listAttrib ;
    int             delta = 0 ;
    int             x, y, dx, colRef, colRefOrg ;
    int             aTreatment = 0 ;
    
    GetCoord(tree, &x, &y, &dx, &colRefOrg);
    x0 += x ;
    if ( x0 + dx <= rightMargin ) 
        return ;
    MarkCoordTree(tree, x0, 0);
    ((_inter =  (PPTREE)tree, 1) && ((son0 =  SonTree(_inter, 1)), 1) && ((son1 =  SonTree(_inter, 2)), 1) && ((son2 =  SonTree(_inter, 3)), 1));
    {
        GetCoord(son1, &x, &y, &dx, &colRef);
        colRef =  TAB_VALUE(colRef, 1);
        if ( x0 + x + dx >= rightMargin && (delta = colRef - x0 - x) < 0 ) {
            {
                PPTREE  _ptTree0 = (PPTREE)0 ;
                _ptTree0 =  (PPTREE)0 ;
                {
                    PPTREE  _ptTree1 = (PPTREE)0 ;
                    {
                        PPTREE  _ptTree2 = (PPTREE)0, _ptRes2 = (PPTREE)0 ;
                        _ptRes2  =  MakeTree(pretty::NEWLINE, 1);
                        _ptTree2 =  MakeString("1");
                        ReplaceTree(_ptRes2, 1, _ptTree2);
                        _ptTree1 =  _ptRes2 ;
                    }
                    _ptTree0 =  AddList(_ptTree0, _ptTree1);
                }
                {
                    PPTREE  _ptTree1 = (PPTREE)0 ;
                    {
                        PPTREE  _ptTree2 = (PPTREE)0, _ptRes2 = (PPTREE)0 ;
                        _ptRes2  =  MakeTree(pretty::TAB, 1);
                        _ptTree2 =  MakeString("1");
                        ReplaceTree(_ptRes2, 1, _ptTree2);
                        _ptTree1 =  _ptRes2 ;
                    }
                    _ptTree0 =  AddList(_ptTree0, _ptTree1);
                }
                {
                    PPTREE  _ptTree1 = (PPTREE)0 ;
                    {
                        PPTREE  _ptTree2 = (PPTREE)0, _ptRes2 = (PPTREE)0 ;
                        _ptRes2  =  MakeTree(pretty::MARK, 0);
                        _ptTree1 =  _ptRes2 ;
                    }
                    _ptTree0 =  AddList(_ptTree0, _ptTree1);
                }
                listAttrib =  _ptTree0 ;
            }
            PutAttr(son1, listAttrib, PRE_ATTR, PUT_BEG);
            {
                PPTREE  _ptTree0 = (PPTREE)0 ;
                _ptTree0 =  (PPTREE)0 ;
                {
                    PPTREE  _ptTree1 = (PPTREE)0 ;
                    {
                        PPTREE  _ptTree2 = (PPTREE)0, _ptRes2 = (PPTREE)0 ;
                        _ptRes2  =  MakeTree(pretty::UNMARK, 0);
                        _ptTree1 =  _ptRes2 ;
                    }
                    _ptTree0 =  AddList(_ptTree0, _ptTree1);
                }
                listAttrib =  _ptTree0 ;
            }
            PutAttr(son1, listAttrib, POST_ATTR, PUT_END);
            PutCoord(son1, x + delta, y, dx, colRef);
            TraitMark(son1, colRef);
            aTreatment =  1 ;
        }
    }
    if ( !!son2 ) {
        GetCoord(son2, &x, &y, &dx, &colRef);
        colRef =  TAB_VALUE(colRef, 1);
        if ( x0 + x + dx >= rightMargin && (delta = colRef - x0 - x) < 0 || aTreatment ) {
            {
                PPTREE  _ptTree0 = (PPTREE)0 ;
                _ptTree0 =  (PPTREE)0 ;
                {
                    PPTREE  _ptTree1 = (PPTREE)0 ;
                    {
                        PPTREE  _ptTree2 = (PPTREE)0, _ptRes2 = (PPTREE)0 ;
                        _ptRes2  =  MakeTree(pretty::NEWLINE, 1);
                        _ptTree2 =  MakeString("1");
                        ReplaceTree(_ptRes2, 1, _ptTree2);
                        _ptTree1 =  _ptRes2 ;
                    }
                    _ptTree0 =  AddList(_ptTree0, _ptTree1);
                }
                {
                    PPTREE  _ptTree1 = (PPTREE)0 ;
                    {
                        PPTREE  _ptTree2 = (PPTREE)0, _ptRes2 = (PPTREE)0 ;
                        _ptRes2  =  MakeTree(pretty::TAB, 1);
                        _ptTree2 =  MakeString("1");
                        ReplaceTree(_ptRes2, 1, _ptTree2);
                        _ptTree1 =  _ptRes2 ;
                    }
                    _ptTree0 =  AddList(_ptTree0, _ptTree1);
                }
                {
                    PPTREE  _ptTree1 = (PPTREE)0 ;
                    {
                        PPTREE  _ptTree2 = (PPTREE)0, _ptRes2 = (PPTREE)0 ;
                        _ptRes2  =  MakeTree(pretty::MARK, 0);
                        _ptTree1 =  _ptRes2 ;
                    }
                    _ptTree0 =  AddList(_ptTree0, _ptTree1);
                }
                listAttrib =  _ptTree0 ;
            }
            PutAttr(son2, listAttrib, PRE_ATTR, PUT_BEG);
            {
                PPTREE  _ptTree0 = (PPTREE)0 ;
                _ptTree0 =  (PPTREE)0 ;
                {
                    PPTREE  _ptTree1 = (PPTREE)0 ;
                    {
                        PPTREE  _ptTree2 = (PPTREE)0, _ptRes2 = (PPTREE)0 ;
                        _ptRes2  =  MakeTree(pretty::UNMARK, 0);
                        _ptTree1 =  _ptRes2 ;
                    }
                    _ptTree0 =  AddList(_ptTree0, _ptTree1);
                }
                listAttrib =  _ptTree0 ;
            }
            PutAttr(son2, listAttrib, POST_ATTR, PUT_END);
            TraitMark(son2, colRef);
            aTreatment =  1 ;
        }
        PutCoord(son2, x + delta, y, dx, colRef);
    }
    if ( aTreatment ) {
        char    string [10];
        GetCoord(son0, &x, &y, &dx, &colRefOrg);
        sprintf(string, "%d", colRefOrg);
        {
            PPTREE  _ptTree0 = (PPTREE)0 ;
            _ptTree0 =  (PPTREE)0 ;
            {
                PPTREE  _ptTree1 = (PPTREE)0 ;
                {
                    PPTREE  _ptTree2 = (PPTREE)0, _ptRes2 = (PPTREE)0 ;
                    _ptRes2  =  MakeTree(pretty::TAB_VIRT, 2);
                    _ptTree2 =  StoreRef(MakeString(string));
                    ReplaceTree(_ptRes2, 1, _ptTree2);
                    _ptTree2 =  MakeString("1");
                    ReplaceTree(_ptRes2, 2, _ptTree2);
                    _ptTree1 =  _ptRes2 ;
                }
                _ptTree0 =  AddList(_ptTree0, _ptTree1);
            }
            listAttrib =  _ptTree0 ;
        }
        PutAttr(son0, listAttrib, PRE_ATTR, PUT_BEG);
    }
    UnMarkCoordTree(tree);
}

void clpretty::AddTree ( PTREE tree, int delta )
{
    int _nextVal ;
    
    if ( currTabTree >= sizeTabTree ) {
        if ( sizeTabTree && (tabTree = (PPTREE_DELTA)realloc(tabTree, sizeof(TREE_DELTA) * (sizeTabTree + 10))) || (tabTree = (PPTREE_DELTA)malloc(sizeof(TREE_DELTA) * 10)) ) 
            sizeTabTree += 10 ;
    }
    for ( int i = 0 ; i < currTabTree ; i++ ) 
        if ( tabTree [i].tree == (PPTREE)tree ) {
            tabTree [i].delta =  delta ;
            return ;
        }
    if ( currTabTree < sizeTabTree ) {
        tabTree [currTabTree].tree  =  tree ;
        tabTree [currTabTree].delta =  delta ;
        currTabTree++ ;
    }
}

int clpretty::FindDelta ( PTREE tree )
{
    int _nextVal ;
    
    (tree =  fathertree(tree));
    
    int i ;
    
    while ( tree ) {
        for ( i = 0 ; i < currTabTree ; i++ ) 
            if ( tabTree [i].tree == (PPTREE)tree ) 
                return tabTree [i].delta ;
        (tree =  fathertree(tree));
    }
    return 0 ;
}

void clpretty::TraiterExpList ( PTREE tree, int x0, int valTab, int inParam )
{
    register PPTREE _inter ;
    int             _retVal [2];
    PPTREE          _storeVal [2];
    int             _nextVal ;
    PTREE           list, inter ;
    PTREE           postAttribute ;
    int             y0 ;
    int             x, y, dx, dy ;
    int             xRef ;
    int             posMark ;
    PTREE           listElem ;
    PTREE           currElem ;
    PTREE           refTree ;
    PTREE           lastTree ;
    int             posRef ;
    int             colRef ;
    PTREE           father ;
    int             rank ;
    int             hasIndented = 0 ;
    int             deltaInhibitIndent = 0 ;
    int             delta = 0 ;
    int             deltaRef = 0 ;
    int             ret = 1 ;
    int             oldNbTab = nbTab ;
    int             rightX = 0 ;
    PTREE           hasToPutVirt = (PTREE)0 ;
    
    hasToPutVirt =  (PPTREE)0 ;
    GetCoord(tree, &x, &y, &dx, &y);
    x0 += x ;
    if ( x0 + dx <= rightMargin ) 
        return ;
    MarkCoordTree(tree, x0, 0);
    if ( !(((_inter = (PPTREE)tree), 1) && NumberTree(_inter) == LIST) ) {
        ((_inter =  (PPTREE)tree, 1)
            && (_retVal [1] =  (_storeVal [1] = _inter, _inter = SonTree(_inter, 1), (listElem = _inter), 1) && ((refTree = SonTree(_inter, 1)), 1), (_inter =  _storeVal [1], 1)
                , _retVal [1]));
    } else {
        ((_inter =  (PPTREE)tree, 1) && ((refTree =  SonTree(_inter, 1)), 1));
        (listElem =  tree);
    }
    if ( !(((_inter = (PPTREE)listElem), 1) && NumberTree(_inter) == LIST) ) 
        return ;
    GetCoord(refTree, &x, &y, &dx, &colRef);
    if ( colRef != markTab ) 
        nbTab =  0 ;
    nbTab  += valTab ;
    posRef =  TAB_VALUE(colRef, nbTab);
    delta  =  0 ;
    while ( listElem ) {
        PTREE   _Baum0 ;
        (currElem =  listElem ? listElem.Nextl() : (PPTREE)0);
        _Baum0 =  (PPTREE)0 ;
        GetCoordAbs(currElem, _Baum0, &x0, &y0);
        GetCoord(currElem, &x, &y, &dx, &dy);
        if ( x0 <= rightX ) {
            delta =  0 ;
        }
        rightX =  x0 + dx ;
        if ( !lastTree && x0 + dx + delta > rightMargin ) {
            if ( inParam && x0 + dx > posRef ) {
                {
                    PPTREE  _ptTree0 = (PPTREE)0 ;
                    _ptTree0 =  (PPTREE)0 ;
                    {
                        PPTREE  _ptTree1 = (PPTREE)0 ;
                        {
                            PPTREE  _ptTree2 = (PPTREE)0, _ptRes2 = (PPTREE)0 ;
                            _ptRes2  =  MakeTree(pretty::NEWLINE, 1);
                            _ptTree2 =  MakeString("1");
                            ReplaceTree(_ptRes2, 1, _ptTree2);
                            _ptTree1 =  _ptRes2 ;
                        }
                        _ptTree0 =  AddList(_ptTree0, _ptTree1);
                    }
                    postAttribute =  _ptTree0 ;
                }
                {
                    char    string [10];
                    sprintf(string, "%d", nbTab);
                    {
                        PPTREE  _ptTree0 = (PPTREE)0 ;
                        {
                            PPTREE  _ptTree1 = (PPTREE)0 ;
                            {
                                PPTREE  _ptTree2 = (PPTREE)0, _ptRes2 = (PPTREE)0 ;
                                _ptRes2  =  MakeTree(pretty::TAB, 1);
                                _ptTree2 =  StoreRef(MakeString(string));
                                ReplaceTree(_ptRes2, 1, _ptTree2);
                                _ptTree1 =  _ptRes2 ;
                            }
                            postAttribute =  AddList(postAttribute, _ptTree1);
                        }
                        {
                            PPTREE  _ptTree1 = (PPTREE)0 ;
                            {
                                PPTREE  _ptTree2 = (PPTREE)0, _ptRes2 = (PPTREE)0 ;
                                _ptRes2  =  MakeTree(pretty::MARK, 0);
                                _ptTree1 =  _ptRes2 ;
                            }
                            postAttribute =  AddList(postAttribute, _ptTree1);
                        }
                    }
                }
                hasIndented =  1 ;
                PutAttr(currElem, postAttribute, PRE_ATTR, PUT_BEG);
#               if 0
                    delta =  posRef - x0 - dx ;
#               else 
                    delta =  posRef - x0 ;
#               endif
                PutCoord(currElem, x + delta, y, dx, dy);
                TraitMark(currElem, posRef);
            } else 
                (hasToPutVirt =  currElem);
        }
        if ( x0 + dx + delta > rightMargin && lastTree ) {
            if ( deltaRef < 0 ) {
                {
                    PPTREE  _ptTree0 = (PPTREE)0 ;
                    _ptTree0 =  (PPTREE)0 ;
                    {
                        PPTREE  _ptTree1 = (PPTREE)0 ;
                        {
                            PPTREE  _ptTree2 = (PPTREE)0, _ptRes2 = (PPTREE)0 ;
                            _ptRes2  =  MakeTree(pretty::NEWLINE, 1);
                            _ptTree2 =  MakeString("1");
                            ReplaceTree(_ptRes2, 1, _ptTree2);
                            _ptTree1 =  _ptRes2 ;
                        }
                        _ptTree0 =  AddList(_ptTree0, _ptTree1);
                    }
                    postAttribute =  _ptTree0 ;
                }
                if ( !hasIndented ) {
                    {
                        char    string [10];
                        sprintf(string, "%d", nbTab);
                        {
                            PPTREE  _ptTree0 = (PPTREE)0 ;
                            {
                                PPTREE  _ptTree1 = (PPTREE)0 ;
                                {
                                    PPTREE  _ptTree2 = (PPTREE)0, _ptRes2 = (PPTREE)0 ;
                                    _ptRes2  =  MakeTree(pretty::TAB, 1);
                                    _ptTree2 =  StoreRef(MakeString(string));
                                    ReplaceTree(_ptRes2, 1, _ptTree2);
                                    _ptTree1 =  _ptRes2 ;
                                }
                                postAttribute =  AddList(postAttribute, _ptTree1);
                            }
                            {
                                PPTREE  _ptTree1 = (PPTREE)0 ;
                                {
                                    PPTREE  _ptTree2 = (PPTREE)0, _ptRes2 = (PPTREE)0 ;
                                    _ptRes2  =  MakeTree(pretty::MARK, 0);
                                    _ptTree1 =  _ptRes2 ;
                                }
                                postAttribute =  AddList(postAttribute, _ptTree1);
                            }
                        }
                    }
                    hasIndented =  1 ;
                }
                PutAttr(lastTree, postAttribute, POST_ATTR, PUT_END);
                delta =  deltaRef ;
                PutCoord(currElem, x + delta, y, dx, dy);
                TraitMark(currElem, posRef);
            } else {
                deltaInhibitIndent =  1 ;
                TraitMark(currElem, colRef);
            }
        } else if ( hasIndented ) {
            PutCoord(currElem, x + delta, y, dx, dy);
            TraitMark(currElem, posRef);
        } else if ( deltaInhibitIndent ) {
            TraitMark(currElem, colRef);
        }
        deltaRef =  posRef - x0 - dx ;
        (lastTree =  currElem);
    }
    if ( hasIndented ) {
        {
            PPTREE  _ptTree0 = (PPTREE)0 ;
            _ptTree0 =  (PPTREE)0 ;
            {
                PPTREE  _ptTree1 = (PPTREE)0 ;
                {
                    PPTREE  _ptTree2 = (PPTREE)0, _ptRes2 = (PPTREE)0 ;
                    _ptRes2  =  MakeTree(pretty::UNMARK, 0);
                    _ptTree1 =  _ptRes2 ;
                }
                _ptTree0 =  AddList(_ptTree0, _ptTree1);
            }
            list =  _ptTree0 ;
        }
        PutAttr(lastTree, list, POST_ATTR, PUT_END);
    }
    if ( hasIndented && hasToPutVirt ) {
        char    string [10];
        sprintf(string, "%d", colRef);
        {
            PPTREE  _ptTree0 = (PPTREE)0 ;
            _ptTree0 =  (PPTREE)0 ;
            {
                PPTREE  _ptTree1 = (PPTREE)0 ;
                {
                    PPTREE  _ptTree2 = (PPTREE)0, _ptRes2 = (PPTREE)0 ;
                    _ptRes2  =  MakeTree(pretty::TAB_VIRT, 2);
                    _ptTree2 =  StoreRef(MakeString(string));
                    ReplaceTree(_ptRes2, 1, _ptTree2);
                    _ptTree2 =  MakeString("1");
                    ReplaceTree(_ptRes2, 2, _ptTree2);
                    _ptTree1 =  _ptRes2 ;
                }
                _ptTree0 =  AddList(_ptTree0, _ptTree1);
            }
            list =  _ptTree0 ;
        }
        PutAttr(hasToPutVirt, list, PRE_ATTR, PUT_END);
    }
    (listElem =  tree);
    if ( !(((_inter = (PPTREE)tree), 1) && NumberTree(_inter) == LIST) ) 
        (_inter =  (PPTREE)tree, 1) && ((listElem =  SonTree(_inter, 1)), 1);
    UpdateSize(listElem, OpType(listElem));
    if ( !(((_inter = (PPTREE)tree), 1) && NumberTree(_inter) == LIST) ) {
        int yy ;
        GetCoord(tree, &xRef, &yy, &dx, &posMark);
        GetCoord(sontree(tree, 1), &x, &y, &dx, &posMark);
        if ( !(yy & 0x2) ) 
            PutCoord(tree, xRef, y, x + dx, posMark);
    }
    UnMarkCoordTree(tree);
    nbTab =  oldNbTab ;
}

void clpretty::TraiterMonoParam ( PTREE tree, int x0 )
{
    register PPTREE _inter ;
    int             _nextVal ;
    PTREE           list, inter ;
    PTREE           postAttribute ;
    int             y0 ;
    int             x, y, dx ;
    int             xRef ;
    int             posMark ;
    PTREE           listElem ;
    PTREE           refTree ;
    PTREE           lastTree ;
    int             posRef ;
    int             colRef ;
    PTREE           father ;
    int             rank ;
    int             hasIndented = 0 ;
    int             deltaInhibitIndent = 0 ;
    int             delta ;
    int             deltaRef ;
    int             ret = 1 ;
    int             oldNbTab = nbTab ;
    int             rightX = 0 ;
    PTREE           hasToPutVirt = (PTREE)0 ;
    
    hasToPutVirt =  (PPTREE)0 ;
    GetCoord(tree, &x, &y, &dx, &colRef);
    x0 += x ;
    if ( x0 + dx <= rightMargin ) 
        return ;
    nbTab =  1 ;
    if ( colRef != markTab ) 
        nbTab =  0 ;
    nbTab  += 1 ;
    posRef =  TAB_VALUE(colRef, nbTab);
    delta  =  0 ;
    {
        {
            PPTREE  _ptTree0 = (PPTREE)0 ;
            _ptTree0 =  (PPTREE)0 ;
            {
                PPTREE  _ptTree1 = (PPTREE)0 ;
                {
                    PPTREE  _ptTree2 = (PPTREE)0, _ptRes2 = (PPTREE)0 ;
                    _ptRes2  =  MakeTree(pretty::NEWLINE, 1);
                    _ptTree2 =  MakeString("1");
                    ReplaceTree(_ptRes2, 1, _ptTree2);
                    _ptTree1 =  _ptRes2 ;
                }
                _ptTree0 =  AddList(_ptTree0, _ptTree1);
            }
            postAttribute =  _ptTree0 ;
        }
        {
            char    string [10];
            sprintf(string, "%d", nbTab);
            {
                PPTREE  _ptTree0 = (PPTREE)0 ;
                {
                    PPTREE  _ptTree1 = (PPTREE)0 ;
                    {
                        PPTREE  _ptTree2 = (PPTREE)0, _ptRes2 = (PPTREE)0 ;
                        _ptRes2  =  MakeTree(pretty::TAB, 1);
                        _ptTree2 =  StoreRef(MakeString(string));
                        ReplaceTree(_ptRes2, 1, _ptTree2);
                        _ptTree1 =  _ptRes2 ;
                    }
                    postAttribute =  AddList(postAttribute, _ptTree1);
                }
                {
                    PPTREE  _ptTree1 = (PPTREE)0 ;
                    {
                        PPTREE  _ptTree2 = (PPTREE)0, _ptRes2 = (PPTREE)0 ;
                        _ptRes2  =  MakeTree(pretty::MARK, 0);
                        _ptTree1 =  _ptRes2 ;
                    }
                    postAttribute =  AddList(postAttribute, _ptTree1);
                }
            }
        }
        hasIndented =  1 ;
        PutAttr(tree, postAttribute, PRE_ATTR, PUT_BEG);
        delta =  posRef - x0 ;
        PutCoord(tree, x + delta, y, dx, colRef);
        TraitMark(tree, posRef);
    }
    {
        PPTREE  _ptTree0 = (PPTREE)0 ;
        _ptTree0 =  (PPTREE)0 ;
        {
            PPTREE  _ptTree1 = (PPTREE)0 ;
            {
                PPTREE  _ptTree2 = (PPTREE)0, _ptRes2 = (PPTREE)0 ;
                _ptRes2  =  MakeTree(pretty::UNMARK, 0);
                _ptTree1 =  _ptRes2 ;
            }
            _ptTree0 =  AddList(_ptTree0, _ptTree1);
        }
        list =  _ptTree0 ;
    }
    PutAttr(tree, list, POST_ATTR, PUT_END);
    nbTab =  oldNbTab ;
}

void clpretty::TraiterExpListParam ( PTREE tree, int x0 )
{
    int _nextVal ;
    
    TraiterExpList(tree, x0, 1, 1);
}

void clpretty::Treat ( PTREE tree )
{
    register PPTREE _inter ;
    int             _nextVal ;
    int             oldNbTab = nbTab ;
    int             x, y, dx, dy ;
    int             x0, y0 ;
    PTREE           content ;
    
    DecompVirt(tree);
    CompleteCoordinates(tree);
    if ( ((_inter = (PPTREE)tree), 1) && NumberTree(_inter) == pretty::ATTRIBUTS ) 
        FreeCoord(tree);
    nbTab =  0 ;
    if ( FatherTree(tree) ) {
        GetCoord(tree, &x, &y, &dx, &dy);
        TreatGeometry(tree, -x + 3);
    } else 
        TreatGeometry(tree, 0);
    nbTab =  oldNbTab ;
}

void clpretty::TreatGeometryDepth ( PTREE tree, int x0, unsigned int depth )
{
    register PPTREE _inter ;
    int             _nextVal ;
    int             x, y, dx, posMark ;
    int             xRef, yRef, dxRef, posMarkRef ;
    int             success = 0 ;
    PTREE           preAttribute ;
    PTREE           elem ;
    PTREE           list ;
    PTREE           tree1, tree2 ;
    
    if ( depth > 1024 ) 
        return ;
    depth += 1 ;
    if ( GetCoordOrg(tree, &x, &y, &dx, &posMark) ) {
        if ( x0 + x + dx > rightMargin ) {
            if ( !(y & 0x1) ) {
                switch ( OpTypeAlign(tree) ) {
                    case H_ALIGN : 
                        TraiterExp2H(tree, x0);
                        break ;
                    case V_ALIGN : 
                        TraiterExp2V(tree, x0);
                        break ;
                    case COND_ALIGN : 
                        TraiterExp3(tree, x0);
                        break ;
                    case LIST_ALIGN : 
                        TraiterExpList(tree, x0);
                        break ;
                }
            }
            if ( TreatGeometrySpecific(tree, x0, x) ) {
                int maxDx = 0 ;
                GetCoord(tree, &xRef, &yRef, &dxRef, &posMarkRef);
                {
                    int     _for_slot = 1, _arity = treearity(tree);
                    MY_TREE _for_elem = (PPTREE)0 ;
                    for (; _for_slot <= _arity ; _for_slot++ ) {
                        _for_elem =  SonTree(tree, _for_slot);
                        if ( _for_elem && NumberTree(_for_elem) != IN_LANGUAGE ) {
                            (elem =  for_elem);
                            dx =  GetBoxSize(elem);
                            if ( dx > maxDx ) 
                                maxDx =  dx ;
                        }
                    }
                }
                PutCoord(tree, xRef, yRef |= 1, maxDx, posMarkRef);
            }
            if ( treearity(tree) > 0 ) {
                GetCoord(tree, &xRef, &yRef, &dxRef, &posMarkRef);
                if ( x0 + xRef + dxRef > rightMargin ) {
                    int maxDx = 0 ;
                    {
                        int     _for_slot = 1, _arity = treearity(tree);
                        MY_TREE _for_elem = (PPTREE)0 ;
                        for (; _for_slot <= _arity ; _for_slot++ ) {
                            _for_elem =  SonTree(tree, _for_slot);
                            if ( _for_elem && NumberTree(_for_elem) != IN_LANGUAGE ) {
                                (elem =  for_elem);
                                TreatGeometryDepth(elem, x0 + xRef, depth);
                                dx =  GetBoxSize(elem);
                                if ( dx > maxDx ) 
                                    maxDx =  dx ;
                            }
                        }
                    }
                    PutCoord(tree, xRef, yRef |= 1, maxDx, posMarkRef);
                }
            }
            GetCoord(tree, &xRef, &yRef, &dxRef, &posMarkRef);
            if ( x0 + xRef + dxRef > rightMargin ) {
                if ( IsTop(tree) != -1 && x0 + xRef > 3 ) {
                    CleanAttributs(tree);
                    {
                        PPTREE  _ptTree0 = (PPTREE)0 ;
                        _ptTree0 =  (PPTREE)0 ;
                        {
                            PPTREE  _ptTree1 = (PPTREE)0 ;
                            {
                                PPTREE  _ptTree2 = (PPTREE)0, _ptRes2 = (PPTREE)0 ;
                                _ptRes2  =  MakeTree(pretty::GOTO, 1);
                                _ptTree2 =  MakeString("3");
                                ReplaceTree(_ptRes2, 1, _ptTree2);
                                _ptTree1 =  _ptRes2 ;
                            }
                            _ptTree0 =  AddList(_ptTree0, _ptTree1);
                        }
                        {
                            PPTREE  _ptTree1 = (PPTREE)0 ;
                            {
                                PPTREE  _ptTree2 = (PPTREE)0, _ptRes2 = (PPTREE)0 ;
                                _ptRes2  =  MakeTree(pretty::MARK, 0);
                                _ptTree1 =  _ptRes2 ;
                            }
                            _ptTree0 =  AddList(_ptTree0, _ptTree1);
                        }
                        list =  _ptTree0 ;
                    }
                    PutAttr(tree, list, PRE_ATTR, PUT_END);
                    {
                        PPTREE  _ptTree0 = (PPTREE)0 ;
                        _ptTree0 =  (PPTREE)0 ;
                        {
                            PPTREE  _ptTree1 = (PPTREE)0 ;
                            {
                                PPTREE  _ptTree2 = (PPTREE)0, _ptRes2 = (PPTREE)0 ;
                                _ptRes2  =  MakeTree(pretty::UNMARK, 0);
                                _ptTree1 =  _ptRes2 ;
                            }
                            _ptTree0 =  AddList(_ptTree0, _ptTree1);
                        }
                        list =  _ptTree0 ;
                    }
                    PutAttr(tree, list, POST_ATTR, PUT_END);
                    Treat(FatherTree(tree));
                    GetCoord(tree, &xRef, &yRef, &dxRef, &posMarkRef);
                    PutCoord(tree, xRef, yRef, 3, posMarkRef);
                }
            }
        }
    } else if ( ((_inter = (PPTREE)tree), 1) && NumberTree(_inter) == pretty::ATTRIBUTS && ((tree = SonTree(_inter, 1)), 1) && ((preAttribute = SonTree(_inter, 2)), 1) ) {
        int     gotTabVirt = 0 ;
        int     oldNbTab = nbTab ;
        int     oldMarkTab = markTab ;
        PTREE   elem ;
        while ( (elem = preAttribute ? preAttribute.Nextl() : (PPTREE)0) ) {
            switch ( NumberTree(elem) ) {
                case pretty::TAB_VIRT : 
                    (tree1 = SonTree(elem, 1));
                    (tree2 = SonTree(elem, 2));
                _Case1 : 
                    ;
                    gotTabVirt = 1 ;
                    break ;
            }
        }
        if ( gotTabVirt ) {
            GetCoord(tree, &x, &y, &dx, &posMark);
            markTab =  atoi(Value(tree1));
            if ( oldMarkTab == -1 || posMark == oldMarkTab ) 
                nbTab += atoi(Value(tree2));
            else 
                nbTab =  1 ;
        }
        TreatGeometry(tree, x0);
        nbTab   =  oldNbTab ;
        markTab =  oldMarkTab ;
    }
}

void clpretty::UpdateSize ( PTREE tree, int type )
{
    int _nextVal ;
    int x, y, dx, dy ;
    int maxDx ;
    int xRef, yRef, dxRef, dyRef ;
    
    if ( OpType(tree) == type ) {
        UpdateSize(SonTreeAttr(tree, 1), type);
        UpdateSize(SonTreeAttr(tree, 2), type);
        GetCoord(sontree(tree, 1), &x, &y, &dx, &dy);
        maxDx =  x + dx ;
        GetCoord(sontree(tree, 2), &x, &y, &dx, &dy);
        if ( x + dx > maxDx ) 
            maxDx =  x + dx ;
        GetCoord(tree, &x, &y, &dx, &dy);
        PutCoord(tree, x, y | 1, maxDx, dy);
    }
}

void clpretty::TraiterExp2H ( PTREE tree, int x0 )
{
    register PPTREE _inter ;
    int             _nextVal ;
    int             y0 ;
    int             x ;
    int             y ;
    int             dx ;
    int             lastMark ;
    int             deltaRef ;
    int             delta ;
    PTREE           lastTree ;
    PTREE           attributeList ;
    PTREE           father ;
    PTREE           treeWithAttribute ;
    int             posTree ;
    PTREE           preAttribute ;
    PTREE           postAttribute ;
    PTREE           firstElem = (PTREE)0 ;
    int             hasIndented = 0 ;
    int             priority ;
    int             nPriority ;
    int             posRef ;
    int             colRef ;
    int             ret = 1 ;
    int             maxDx = 0 ;
    PTREE           list ;
    int             oldNbTab = nbTab ;
    PTREE           hasToPutVirt = (PTREE)0 ;
    int             deltaLoc ;
    PTREE           inter ;
    
    firstElem    =  (PPTREE)0 ;
    hasToPutVirt =  (PPTREE)0 ;
    GetCoord(tree, &x, &y, &dx, &colRef);
    x0 += x ;
    MarkCoordTree(tree, x0, 0);
    priority =  OpType(tree);
    if ( colRef != markTab ) 
        nbTab =  0 ;
    posRef      =  TAB_VALUE(colRef, nbTab + 1);
    deltaRef    =  delta = 0 ;
    currTabTree =  0 ;
    AddTree(tree, 0);
    {
        ItPtree _iterator1(tree, (PPTREE)0);
        PTREE   _for_elem ;
        _iterator1.AllSearch(1);
        while ( (_for_elem = _iterator1++) ) {
            {
                nPriority =  OpType(for_elem);
                GetCoord(for_elem, &x, &y, &dx, &lastMark);
                if ( nPriority != priority ) {
                    PTREE   _Baum0 ;
                    _Baum0 =  (PPTREE)0 ;
                    GetCoordAbs(for_elem, _Baum0, &x0, &y0);
                    if ( (!lastTree || deltaRef >= 0) && x0 + dx + delta > rightMargin ) {
                        if ( !hasToPutVirt ) {
                            (hasToPutVirt =  for_elem);
                            (lastTree =  for_elem);
                        } else {
                            char    string [10];
                            sprintf(string, "%d", colRef);
                            {
                                PPTREE  _ptTree0 = (PPTREE)0 ;
                                _ptTree0 =  (PPTREE)0 ;
                                {
                                    PPTREE  _ptTree1 = (PPTREE)0 ;
                                    {
                                        PPTREE  _ptTree2 = (PPTREE)0, _ptRes2 = (PPTREE)0 ;
                                        _ptRes2  =  MakeTree(pretty::TAB_VIRT, 2);
                                        _ptTree2 =  StoreRef(MakeString(string));
                                        ReplaceTree(_ptRes2, 1, _ptTree2);
                                        _ptTree2 =  MakeString("1");
                                        ReplaceTree(_ptRes2, 2, _ptTree2);
                                        _ptTree1 =  _ptRes2 ;
                                    }
                                    _ptTree0 =  AddList(_ptTree0, _ptTree1);
                                }
                                list =  _ptTree0 ;
                            }
                            PutAttr(for_elem, list, PRE_ATTR, PUT_END);
                            (lastTree =  for_elem);
                            for_elem =  FatherTree(for_elem);
                        }
                    } else {
                        if ( x0 + dx + delta > rightMargin && lastTree && deltaRef < -1 ) {
                            PTREE   _Baum1 ;
                            {
                                PPTREE  _ptTree0 = (PPTREE)0 ;
                                _ptTree0 =  (PPTREE)0 ;
                                {
                                    PPTREE  _ptTree1 = (PPTREE)0 ;
                                    {
                                        PPTREE  _ptTree2 = (PPTREE)0, _ptRes2 = (PPTREE)0 ;
                                        _ptRes2  =  MakeTree(pretty::NEWLINE, 1);
                                        _ptTree2 =  MakeString("1");
                                        ReplaceTree(_ptRes2, 1, _ptTree2);
                                        _ptTree1 =  _ptRes2 ;
                                    }
                                    _ptTree0 =  AddList(_ptTree0, _ptTree1);
                                }
                                attributeList =  _ptTree0 ;
                            }
                            if ( !hasIndented ) {
                                {
                                    char    string [25];
                                    sprintf(string, "%d", nbTab + 1);
                                    {
                                        PPTREE  _ptTree0 = (PPTREE)0 ;
                                        {
                                            PPTREE  _ptTree1 = (PPTREE)0 ;
                                            {
                                                PPTREE  _ptTree2 = (PPTREE)0, _ptRes2 = (PPTREE)0 ;
                                                _ptRes2  =  MakeTree(pretty::TAB, 1);
                                                _ptTree2 =  StoreRef(MakeString(string));
                                                ReplaceTree(_ptRes2, 1, _ptTree2);
                                                _ptTree1 =  _ptRes2 ;
                                            }
                                            attributeList =  AddList(attributeList, _ptTree1);
                                        }
                                        {
                                            PPTREE  _ptTree1 = (PPTREE)0 ;
                                            {
                                                PPTREE  _ptTree2 = (PPTREE)0, _ptRes2 = (PPTREE)0 ;
                                                _ptRes2  =  MakeTree(pretty::MARK, 0);
                                                _ptTree1 =  _ptRes2 ;
                                            }
                                            attributeList =  AddList(attributeList, _ptTree1);
                                        }
                                    }
                                }
                                hasIndented =  1 ;
                            }
                            PutAttr(lastTree, attributeList, POST_ATTR, PUT_END);
                            delta  =  deltaRef ;
                            _Baum1 =  (PPTREE)0 ;
                            (inter =  SNextTree(lastTree, _Baum1));
                            while ( 1 ) {
                                PTREE   _Baum3 ;
                                (father =  FatherTree(inter));
                                while ( inter && (((_inter = (PPTREE)father), 1) && NumberTree(_inter) == pretty::ATTRIBUTS) && ranktree(inter) != 1 ) {
                                    PTREE   _Baum2 ;
                                    _Baum2 =  (PPTREE)0 ;
                                    (inter =  SNextTree(father, _Baum2));
                                    (father =  FatherTree(inter));
                                }
                                if ( inter != (PTREE)for_elem ) 
                                    AddTree(inter, delta);
                                else {
                                    deltaLoc =  delta - FindDelta(inter);
                                    PutCoord(inter, x + deltaLoc, y, dx, lastMark);
                                    break ;
                                }
                                _Baum3 =  (PPTREE)0 ;
                                (inter =  NextTree(inter, _Baum3));
                            }
                            TraitMark(for_elem, posRef);
                        } else if ( hasIndented ) {
                            deltaLoc =  delta - FindDelta(for_elem);
                            PutCoord(for_elem, x + deltaLoc, y, dx, lastMark);
                            TraitMark(for_elem, posRef);
                        }
                        (lastTree =  for_elem);
                    }
                    if ( y & 0x2 ) {
                        delta =  deltaRef = posRef - colRef ;
                    } else 
                        deltaRef =  posRef - x0 - dx ;
                    goto for_continue1 ;
                } else if ( hasIndented ) {
                    AddTree(for_elem, delta);
                }
            }
            _iterator1.Current(_for_elem);
            continue ;
        for_continue1 : 
            _iterator1.Current(_for_elem);
            _iterator1.SkipSon(1);
            continue ;
        for_break1 : 
            break ;
        }
    }
    if ( hasIndented ) {
        {
            PPTREE  _ptTree0 = (PPTREE)0 ;
            _ptTree0 =  (PPTREE)0 ;
            {
                PPTREE  _ptTree1 = (PPTREE)0 ;
                {
                    PPTREE  _ptTree2 = (PPTREE)0, _ptRes2 = (PPTREE)0 ;
                    _ptRes2  =  MakeTree(pretty::UNMARK, 0);
                    _ptTree1 =  _ptRes2 ;
                }
                _ptTree0 =  AddList(_ptTree0, _ptTree1);
            }
            list =  _ptTree0 ;
        }
        PutAttr(lastTree, list, POST_ATTR, PUT_BEG);
    }
    if ( hasIndented && hasToPutVirt ) {
        char    string [10];
        sprintf(string, "%d", colRef);
        {
            PPTREE  _ptTree0 = (PPTREE)0 ;
            _ptTree0 =  (PPTREE)0 ;
            {
                PPTREE  _ptTree1 = (PPTREE)0 ;
                {
                    PPTREE  _ptTree2 = (PPTREE)0, _ptRes2 = (PPTREE)0 ;
                    _ptRes2  =  MakeTree(pretty::TAB_VIRT, 2);
                    _ptTree2 =  StoreRef(MakeString(string));
                    ReplaceTree(_ptRes2, 1, _ptTree2);
                    _ptTree2 =  MakeString("1");
                    ReplaceTree(_ptRes2, 2, _ptTree2);
                    _ptTree1 =  _ptRes2 ;
                }
                _ptTree0 =  AddList(_ptTree0, _ptTree1);
            }
            list =  _ptTree0 ;
        }
        PutAttr(hasToPutVirt, list, PRE_ATTR, PUT_END);
    }
    for ( int nbNode = 0 ; nbNode < currTabTree ; nbNode++ ) {
        GetCoord(tabTree [nbNode].tree, &x, &y, &dx, &lastMark);
        deltaLoc =  tabTree [nbNode].delta - FindDelta(tabTree [nbNode].tree);
        PutCoord(tabTree [nbNode].tree, x + deltaLoc, y, dx, lastMark);
    }
    UpdateSize(tree, OpType(tree));
    UnMarkCoordTree(tree);
    nbTab =  oldNbTab ;
}

void clpretty::TraiterExp2V ( PTREE tree, int x0 )
{
    register PPTREE _inter ;
    int             _nextVal ;
    int             y0 ;
    int             x ;
    int             y ;
    int             dx ;
    int             lastMark ;
    int             deltaRef ;
    int             delta ;
    PTREE           lastTree ;
    PTREE           attributeList ;
    PTREE           father ;
    PTREE           treeWithAttribute ;
    int             posTree ;
    PTREE           preAttribute ;
    PTREE           postAttribute ;
    PTREE           firstElem = (PTREE)0 ;
    int             hasIndented = 0 ;
    int             priority ;
    int             nPriority ;
    int             posRef ;
    int             colRef ;
    int             ret = 1 ;
    PTREE           list ;
    PTREE           hasToPutVirt ;
    int             oldNbTab = nbTab ;
    int             deltaLoc ;
    PTREE           inter ;
    
    firstElem =  (PPTREE)0 ;
    GetCoord(tree, &x, &y, &dx, &colRef);
    x0 += x ;
    MarkCoordTree(tree, x0, 0);
    colRef =  x0 ;
    {
        PPTREE  _ptTree0 = (PPTREE)0 ;
        _ptTree0 =  (PPTREE)0 ;
        {
            PPTREE  _ptTree1 = (PPTREE)0 ;
            {
                PPTREE  _ptTree2 = (PPTREE)0, _ptRes2 = (PPTREE)0 ;
                _ptRes2  =  MakeTree(pretty::MARK, 0);
                _ptTree1 =  _ptRes2 ;
            }
            _ptTree0 =  AddList(_ptTree0, _ptTree1);
        }
        list =  _ptTree0 ;
    }
    PutAttr(tree, list, PRE_ATTR, PUT_END);
    {
        PPTREE  _ptTree0 = (PPTREE)0 ;
        _ptTree0 =  (PPTREE)0 ;
        {
            PPTREE  _ptTree1 = (PPTREE)0 ;
            {
                PPTREE  _ptTree2 = (PPTREE)0, _ptRes2 = (PPTREE)0 ;
                _ptRes2  =  MakeTree(pretty::UNMARK, 0);
                _ptTree1 =  _ptRes2 ;
            }
            _ptTree0 =  AddList(_ptTree0, _ptTree1);
        }
        list =  _ptTree0 ;
    }
    PutAttr(tree, list, POST_ATTR, PUT_BEG);
    TraitMark(tree, colRef);
    priority =  OpType(tree);
    if ( markTab != colRef ) 
        nbTab =  0 ;
    posRef   =  TAB_VALUE(x0, nbTab + 1);
    deltaRef =  delta = 0 ;
    AddTree(tree, 0);
    {
        ItPtree _iterator1(tree, (PPTREE)0);
        PTREE   _for_elem ;
        _iterator1.AllSearch(1);
        while ( (_for_elem = _iterator1++) ) {
            {
                nPriority =  OpType(for_elem);
                GetCoord(for_elem, &x, &y, &dx, &lastMark);
                if ( nPriority != priority ) {
                    PTREE   _Baum0 ;
                    _Baum0 =  (PPTREE)0 ;
                    GetCoordAbs(for_elem, _Baum0, &x0, &y0);
                    if ( !lastTree || deltaRef >= 0 ) {
                        if ( !hasToPutVirt ) {
                            (hasToPutVirt =  for_elem);
                            (lastTree =  for_elem);
                        } else {
                            char    string [10];
                            sprintf(string, "%d", colRef);
                            {
                                PPTREE  _ptTree0 = (PPTREE)0 ;
                                _ptTree0 =  (PPTREE)0 ;
                                {
                                    PPTREE  _ptTree1 = (PPTREE)0 ;
                                    {
                                        PPTREE  _ptTree2 = (PPTREE)0, _ptRes2 = (PPTREE)0 ;
                                        _ptRes2  =  MakeTree(pretty::TAB_VIRT, 2);
                                        _ptTree2 =  StoreRef(MakeString(string));
                                        ReplaceTree(_ptRes2, 1, _ptTree2);
                                        _ptTree2 =  MakeString("1");
                                        ReplaceTree(_ptRes2, 2, _ptTree2);
                                        _ptTree1 =  _ptRes2 ;
                                    }
                                    _ptTree0 =  AddList(_ptTree0, _ptTree1);
                                }
                                list =  _ptTree0 ;
                            }
                            PutAttr(for_elem, list, PRE_ATTR, PUT_END);
                            (lastTree =  for_elem);
                            for_elem =  FatherTree(for_elem);
                        }
                    } else {
                        if ( lastTree && deltaRef < -1 ) {
                            if ( !(((_inter = (PPTREE)lastTree), 1) && NumberTree(_inter) == pretty::ATTRIBUTS) ) {
                                PTREE   _Baum1 ;
                                {
                                    PPTREE  _ptTree0 = (PPTREE)0 ;
                                    _ptTree0 =  (PPTREE)0 ;
                                    {
                                        PPTREE  _ptTree1 = (PPTREE)0 ;
                                        {
                                            PPTREE  _ptTree2 = (PPTREE)0, _ptRes2 = (PPTREE)0 ;
                                            _ptRes2  =  MakeTree(pretty::NEWLINE, 1);
                                            _ptTree2 =  MakeString("1");
                                            ReplaceTree(_ptRes2, 1, _ptTree2);
                                            _ptTree1 =  _ptRes2 ;
                                        }
                                        _ptTree0 =  AddList(_ptTree0, _ptTree1);
                                    }
                                    attributeList =  _ptTree0 ;
                                }
                                if ( !hasIndented ) {
                                    char    string [25];
                                    sprintf(string, "%d", nbTab + 1);
                                    {
                                        PPTREE  _ptTree0 = (PPTREE)0 ;
                                        {
                                            PPTREE  _ptTree1 = (PPTREE)0 ;
                                            {
                                                PPTREE  _ptTree2 = (PPTREE)0, _ptRes2 = (PPTREE)0 ;
                                                _ptRes2  =  MakeTree(pretty::TAB, 1);
                                                _ptTree2 =  StoreRef(MakeString(string));
                                                ReplaceTree(_ptRes2, 1, _ptTree2);
                                                _ptTree1 =  _ptRes2 ;
                                            }
                                            attributeList =  AddList(attributeList, _ptTree1);
                                        }
                                        {
                                            PPTREE  _ptTree1 = (PPTREE)0 ;
                                            {
                                                PPTREE  _ptTree2 = (PPTREE)0, _ptRes2 = (PPTREE)0 ;
                                                _ptRes2  =  MakeTree(pretty::MARK, 0);
                                                _ptTree1 =  _ptRes2 ;
                                            }
                                            attributeList =  AddList(attributeList, _ptTree1);
                                        }
                                    }
                                    hasIndented =  1 ;
                                }
                                PutAttr(lastTree, attributeList, POST_ATTR, PUT_END);
                                delta  =  deltaRef ;
                                _Baum1 =  (PPTREE)0 ;
                                (inter =  SNextTree(lastTree, _Baum1));
                                while ( 1 ) {
                                    PTREE   _Baum3 ;
                                    (father =  FatherTree(inter));
                                    while ( inter && (((_inter = (PPTREE)father), 1) && NumberTree(_inter) == pretty::ATTRIBUTS) && ranktree(inter) != 1 ) {
                                        PTREE   _Baum2 ;
                                        _Baum2 =  (PPTREE)0 ;
                                        (inter =  SNextTree(father, _Baum2));
                                        (father =  FatherTree(inter));
                                    }
                                    if ( inter != (PTREE)for_elem ) 
                                        AddTree(inter, delta);
                                    else {
                                        deltaLoc =  delta - FindDelta(inter);
                                        PutCoord(inter, x + deltaLoc, y, dx, lastMark);
                                        break ;
                                    }
                                    _Baum3 =  (PPTREE)0 ;
                                    (inter =  NextTree(inter, _Baum3));
                                }
                                TraitMark(for_elem, posRef);
                            }
                        } else if ( hasIndented ) {
                            deltaLoc =  delta - FindDelta(for_elem);
                            PutCoord(for_elem, x + deltaLoc, y, dx, lastMark);
                            TraitMark(for_elem, posRef);
                        }
                        (lastTree =  for_elem);
                    }
                    if ( y & 0x2 ) {
                        delta =  deltaRef = posRef - colRef ;
                    } else 
                        deltaRef =  posRef - x0 - dx ;
                    goto for_continue1 ;
                } else if ( hasIndented ) {
                    AddTree(for_elem, delta);
                }
            }
            _iterator1.Current(_for_elem);
            continue ;
        for_continue1 : 
            _iterator1.Current(_for_elem);
            _iterator1.SkipSon(1);
            continue ;
        for_break1 : 
            break ;
        }
    }
    if ( hasIndented ) {
        {
            PPTREE  _ptTree0 = (PPTREE)0 ;
            _ptTree0 =  (PPTREE)0 ;
            {
                PPTREE  _ptTree1 = (PPTREE)0 ;
                {
                    PPTREE  _ptTree2 = (PPTREE)0, _ptRes2 = (PPTREE)0 ;
                    _ptRes2  =  MakeTree(pretty::UNMARK, 0);
                    _ptTree1 =  _ptRes2 ;
                }
                _ptTree0 =  AddList(_ptTree0, _ptTree1);
            }
            list =  _ptTree0 ;
        }
        PutAttr(lastTree, list, POST_ATTR, PUT_BEG);
    }
    if ( hasIndented && hasToPutVirt ) {
        char    string [10];
        sprintf(string, "%d", colRef);
        {
            PPTREE  _ptTree0 = (PPTREE)0 ;
            _ptTree0 =  (PPTREE)0 ;
            {
                PPTREE  _ptTree1 = (PPTREE)0 ;
                {
                    PPTREE  _ptTree2 = (PPTREE)0, _ptRes2 = (PPTREE)0 ;
                    _ptRes2  =  MakeTree(pretty::TAB_VIRT, 2);
                    _ptTree2 =  StoreRef(MakeString(string));
                    ReplaceTree(_ptRes2, 1, _ptTree2);
                    _ptTree2 =  MakeString("1");
                    ReplaceTree(_ptRes2, 2, _ptTree2);
                    _ptTree1 =  _ptRes2 ;
                }
                _ptTree0 =  AddList(_ptTree0, _ptTree1);
            }
            list =  _ptTree0 ;
        }
        PutAttr(hasToPutVirt, list, PRE_ATTR, PUT_END);
    }
    for ( int nbNode = 0 ; nbNode < currTabTree ; nbNode++ ) {
        GetCoord(tabTree [nbNode].tree, &x, &y, &dx, &lastMark);
        deltaLoc =  tabTree [nbNode].delta - FindDelta(tabTree [nbNode].tree);
        PutCoord(tabTree [nbNode].tree, x + deltaLoc, y, dx, lastMark);
    }
    UpdateSize(tree, OpType(tree));
    UnMarkCoordTree(tree);
    nbTab =  oldNbTab ;
}

static  inline void LNewLineOrg ( int i )
{
    int _nextVal ;
    
    LNewLine(i);
}

void clpretty::LNewLine ( int i )
{
    int _nextVal ;
    
    if ( currCol > maxX ) 
        maxX =  currCol ;
    LNewLineOrg(i);
}

void clpretty::DecompVirt ( const PTREE &paramTree )
{
    register PPTREE _inter ;
    int             _nextVal ;
    int             x0, y0, x, y, dx, dy ;
    
    GetCoord(paramTree, &x, &y, &dx, &dy);
    GetCoordAbs(paramTree, 0, &x0, &y0);
    
    PTREE   father ;
    
    (father =  FatherTree(paramTree));
    while ( ((_inter = (PPTREE)father), 1) && NumberTree(_inter) == pretty::ATTRIBUTS ) 
        (father =  FatherTree(father));
    GetCoordAbs(father, 0, &xFather, &yFather);
    isVirtMod =  1 ;
    GotoCol(dy + 1);
    Mark();
    currCol  =  x0 ;
    currLine =  y0 ;
    maxX     =  0 ;
    Decomp(paramTree);
    UnMark();
    isVirtMod =  0 ;
    currLine  =  currCol = 0 ;
}

void clpretty::TraitAttribut ( PTREE tree )
{
    register PPTREE _inter ;
    int             _nextVal ;
    PTREE           son ;
    int             i ;
    
    switch ( NumberTree(tree) ) {
        case pretty::NEWLINE : 
            (son = SonTree(tree, 1));
        _Case8 : 
            ;
            LNewLine(atoi(BrainyValue(son)));
            break ;
        case pretty::TAB : 
            (son = SonTree(tree, 1));
        _Case9 : 
            ;
            i = atoi(BrainyValue(son));
            while ( i-- > 0 ) 
                Tab();
            break ;
        case pretty::STR : 
            (son = SonTree(tree, 1));
        _Case10 : 
            ;
            DumpBrainyValue(son);
            break ;
        case pretty::MARK : 
        _Case11 : 
            ;
            Mark();
            break ;
        case pretty::UNMARK : 
        _Case12 : 
            ;
            UnMark();
            break ;
        case pretty::GOTO : 
            (son = SonTree(tree, 1));
        _Case13 : 
            ;
            GotoCol(atoi(BrainyValue(son)));
            break ;
    }
}

void clpretty::DecompList ( PTREE list, const char *sep, const char *term, int nbNl )
{
    register PPTREE _inter ;
    int             _nextVal ;
    PTREE           elem ;
    int             nbNewLine ;
    
    while ( ((_inter = (PPTREE)list), 1) && NumberTree(_inter) == LIST ) {
        if ( (elem = list.Nextl()) ) 
            Decomp(elem);
        if ( list ) {
            if ( sep ) 
                PrintString(sep);
            if ( (nbNewLine = nbNl) ) 
                LNewLine(nbNewLine);
        }
    }
    if ( term ) 
        PrintString(term);
}

int clpretty::commAtBeginning ( PTREE tree )
{
    register PPTREE _inter ;
    int             _nextVal ;
    PTREE           father ;
    
    if ( (_inter = FatherTree(tree)), (((_inter = (PPTREE)_inter), 1) && NumberTree(_inter) == pretty::ATTRIBUTS) ) 
        (father =  NFatherTree(tree, 2));
    else 
        (father =  FatherTree(tree));
    if ( !father ) 
        return 1 ;
    if ( ((_inter = (PPTREE)father), 1) && NumberTree(_inter) == LIST ) {
        (father =  NFatherTree(father, 2));
        if ( !father ) {
            return 1 ;
        }
    }
    return 0 ;
}

int clpretty::comm ( PTREE paramTree, int type )
{
    int         _nextVal ;
    char        *comment ;
    PTREE       father ;
    const char  *intStartComment, *intMiddleComment, *intEndComment, *intPlusComment ;
    
    intStartComment  =  startComment ? startComment : "/*";
    intMiddleComment =  middleComment ? middleComment : "  ";
    intEndComment    =  endComment ? endComment : "*/";
    intPlusComment   =  plusComment ? plusComment : "//";
    if ( !paramTree || inhibateComment ) 
        return 0 ;
    if ( type == PRE && (comment = IsComm(paramTree, PRE)) ) {
        PTREE   inter = (PTREE)0 ;
        int     beginning = Beginning();
        (inter =  (PTREE)0);
        if ( !commAtBeginning(paramTree) ) {
            if ( beginning ) {
                if ( *comment == *(intPlusComment + 1) && *(comment + 1) == ' ' ) 
                    LNewLine(2);
                else if ( *comment == ' ' ) 
                    LNewLine(2);
                else 
                    LNewLine(1);
            } else 
                Space(1);
        }
        do {
            if ( inter ) 
                comment =  BrainyValue(inter);
            Mark();
            if ( *comment == *(intPlusComment + 1) ) 
                (inter =  PrintCommE(paramTree, PRE, inter, intPlusComment + 1, intPlusComment + 1, ""));
            else 
                (inter =  PrintCommE(paramTree, PRE, inter, intMiddleComment, intStartComment, intEndComment));
            UnMark();
            if ( beginning || *comment == *(intPlusComment + 1) ) {
                LNewLine(1);
            } else 
                Space(1);
        } while ( inter );
        return 1 ;
    } else if ( type == POST && (comment = IsComm(paramTree, POST)) && paramTree != postInhibitor ) {
        PTREE   inter = (PTREE)0 ;
        (inter =  (PTREE)0);
        Mark();
        do {
            if ( inter ) 
                comment =  BrainyValue(inter);
            Space(1);
            Mark();
            if ( *comment == *(intPlusComment + 1) ) 
                (inter =  PrintCommE(paramTree, POST, inter, intPlusComment + 1, intPlusComment + 1, ""));
            else 
                (inter =  PrintCommE(paramTree, POST, inter, intMiddleComment, intStartComment, intEndComment));
            UnMark();
            if ( PrePost() && inter || *comment == *(intPlusComment + 1) ) {
                LNewLine(1);
            } else 
                Space(1);
        } while ( inter );
        UnMark();
        return 1 ;
    }
    return 0 ;
}

void clpretty::Decomp ( const PTREE &paramTree, int funcAlone )
{
    register PPTREE _inter ;
    int             _nextVal ;
    PTREE           exp, stat, name ;
    int             oldXFather = xFather, oldYFather = yFather ;
    int             oldMaxX = maxX ;
    int             begCurrCol = currCol, begCurrLine = currLine ;
    int             theMark = GetMark();
    int             startNewLine ;
    
    startNewLine =  lastLineOn == currLine ? 0 : (lastLineOn = currLine, 0x4);
    if ( !paramTree ) 
        return ;
    if ( isVirtMod && !(((_inter = (PPTREE)paramTree), 1) && NumberTree(_inter) == pretty::ATTRIBUTS) ) {
        xFather =  currCol, yFather =  currLine ;
        maxX =  currCol ;
    }
    {
        int commPre = 0 ;
        if ( !Beginning() && (commPre = (int)(long)IsComm(paramTree, PRE)) ) {
            Mark();
            currCol++ ;
            comm(paramTree, PRE);
        } else 
            comm(paramTree, PRE);
        IntDecomp(paramTree, funcAlone);
        comm(paramTree, POST);
        if ( commPre ) {
            UnMark();
        }
    }
    if ( isVirtMod && !(((_inter = (PPTREE)paramTree), 1) && NumberTree(_inter) == pretty::ATTRIBUTS) ) {
        xFather =  oldXFather, yFather =  oldYFather ;
        if ( currCol > maxX ) 
            maxX =  currCol ;
        PutCoord(paramTree, begCurrCol - xFather, (currLine - begCurrLine > 0 ? 2 : 0) | startNewLine, maxX - begCurrCol, theMark);
        if ( maxX < oldMaxX ) 
            maxX =  oldMaxX ;
    }
}

void clpretty::CleanAttributs ( PTREE tree )
{
    register PPTREE _inter ;
    int             _nextVal ;
    PTREE           son ;
    int             x, y, dx, posMark ;
    
    {
        ItPtree _iterator1(tree, (PPTREE)0);
        PTREE   _for_elem ;
        _iterator1.AllSearch(1);
        while ( (_for_elem = _iterator1++) ) {
            {
                if ( ((_inter = (PPTREE)for_elem), 1) && NumberTree(_inter) == pretty::ATTRIBUTS && ((son = SonTree(_inter, 1)), 1) && FatherTree(for_elem) ) {
                    replacetree(FatherTree(for_elem), ranktree(for_elem), son);
                    for_elem =  son ;
                }
                if ( GetCoord(for_elem, &x, &y, &dx, &posMark) ) {
                    FreeCoord(for_elem);
                }
            }
            _iterator1.Current(_for_elem);
            continue ;
        for_continue1 : 
            _iterator1.Current(_for_elem);
            _iterator1.SkipSon(1);
            continue ;
        for_break1 : 
            break ;
        }
    }
}

void clpretty::DisplayError ( PTREE printList, bool current )
{
    register PPTREE _inter ;
    int             _nextVal ;
    PTREE           elem ;
    int             oldOutput = output ;
    PTREE           oldList = (PTREE)0 ;
    
    (oldList =  printList);
    if ( current ) {
        Flush();
        LNewLine(2);
        if ( !emacsCompatibleError ) {
            PrintString("====> ");
        } else {
            PrintString("==================================");
            LNewLine(1);
        }
        while ( (elem = printList ? printList.Nextl() : (PPTREE)0) || !!printList ) {
            switch ( NumberTree(elem) ) {
                case TERM_TREE : 
                _Case18 : 
                    ;
                    DumpBrainyValue(elem);
                    break ;
                default : 
                _Case19 : 
                    ;
                    LNewLine(1);
                    Decomp(elem, true);
                    LNewLine(1);
                    break ;
            }
        }
        LNewLine(2);
    }
    (printList =  oldList);
    output =  2 ;
    if ( !emacsCompatibleError ) {
        PrintString("====> ");
    } else {
        PrintString("===================================");
        LNewLine(2);
    }
    while ( ((_inter = (PPTREE)printList), 1) && NumberTree(_inter) == LIST && (elem = printList ? printList.Nextl() : (PPTREE)0) ) {
        switch ( NumberTree(elem) ) {
            case TERM_TREE : 
            _Case20 : 
                ;
                DumpBrainyValue(elem);
                break ;
            default : 
            _Case21 : 
                ;
                LNewLine(1);
                Decomp(elem, true);
                LNewLine(1);
                break ;
        }
    }
    LNewLine(2);
    output =  oldOutput ;
}

static  void clpretty_Anchor ()
{
    int i = 1 ;
}

/*Well done my boy */
