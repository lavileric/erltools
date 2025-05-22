
#line 28 "toksearc.ch"
/*************************************************************************/
#line 28 "toksearc.ch"
/*                                                                       */
#line 28 "toksearc.ch"
/*        Produced by Metachop version 2.0  -    1989-1995               */
#line 28 "toksearc.ch"
/*     Tree      Meta     Chopper      developped    by                  */
#line 28 "toksearc.ch"
/*                  Eric Lavillonniere                                   */
#line 28 "toksearc.ch"
/*                                                                       */
#line 28 "toksearc.ch"
/*************************************************************************/
#line 28 "toksearc.ch"

#line 28 "toksearc.ch"
#include "token.h"
#line 28 "toksearc.ch"
#define decomp decomp_metalang
#line 28 "toksearc.ch"

#line 28 "toksearc.ch"
#ifndef for_elem
#line 28 "toksearc.ch"
#line 28 "toksearc.ch"
#define for_elem _for_elem

#line 28 "toksearc.ch"
#line 28 "toksearc.ch"

#line 28 "toksearc.ch"
#endif
#ifdef INCONNU
#line 28 "toksearc.ch"
#line 28 "toksearc.ch"
PTREE   for_elem ;
#line 28 "toksearc.ch"

#line 28 "toksearc.ch"
#line 28 "toksearc.ch"

#line 28 "toksearc.ch"
#endif
#include "metalang.h"

extern PPTREE   treeToken ;

static PTREE    listLex = (PTREE)0 ;
#line 28 "toksearc.ch"

static int  nbLex = 1 ;

#line 47 "toksearc.ch"

#line 47 "toksearc.ch"
int LexNumber ( PTREE tree )
#line 47 "toksearc.ch"
{
#line 47 "toksearc.ch"
    register PPTREE _inter ;
#line 47 "toksearc.ch"

#line 47 "toksearc.ch"
#line 47 "toksearc.ch"
    int _nextVal ;
    
#line 47 "toksearc.ch"
#line 50 "toksearc.ch"
    
    PTREE   lexNumb ;
#line 50 "toksearc.ch"
    
#line 50 "toksearc.ch"
#line 51 "toksearc.ch"
    char    string [10];
    
#line 51 "toksearc.ch"
#line 53 "toksearc.ch"
    if ( ((lexNumb=ListFind(listLex, tree))) ) {
#line 53 "toksearc.ch"
#line 57 "toksearc.ch"
                                                        ((_inter = (PPTREE)lexNumb,1) && 
#line 57 "toksearc.ch"
                                                            ((lexNumb=SonTree(_inter,2)),1) &&
#line 57 "toksearc.ch"
                                                            1);
#line 57 "toksearc.ch"
                                                        ;
#line 57 "toksearc.ch"
#line 58 "toksearc.ch"
                                                        return atoi(Value(lexNumb));
                                                        
#line 58 "toksearc.ch"
#line 59 "toksearc.ch"
                                                        
#line 59 "toksearc.ch"
#line 59 "toksearc.ch"
                                                    } else 
#line 59 "toksearc.ch"
    {
#line 59 "toksearc.ch"
#line 62 "toksearc.ch"
        sprintf(string, "%d", nbLex);
#line 62 "toksearc.ch"
#line 63 "toksearc.ch"
        {
#line 63 "toksearc.ch"
            PPTREE _ptTree0= (PPTREE) 0,_ptRes0= (PPTREE) 0;
#line 63 "toksearc.ch"
            _ptRes0 = MakeTree(LIST, 2);
#line 63 "toksearc.ch"
            {
#line 63 "toksearc.ch"
                PPTREE _ptTree1= (PPTREE) 0,_ptRes1= (PPTREE) 0;
#line 63 "toksearc.ch"
                _ptRes1 = MakeTree(LIST, 2);
#line 63 "toksearc.ch"
                _ptTree1 = StoreRef(MakeString(Value(tree)));
#line 63 "toksearc.ch"
                ReplaceTree(_ptRes1, 1, _ptTree1);
#line 63 "toksearc.ch"
                _ptTree1 = StoreRef(MakeString(string));
#line 63 "toksearc.ch"
                ReplaceTree(_ptRes1, 2, _ptTree1);
#line 63 "toksearc.ch"
                _ptTree0 = _ptRes1;
#line 63 "toksearc.ch"
            }
#line 63 "toksearc.ch"
            ReplaceTree(_ptRes0, 1, _ptTree0);
#line 63 "toksearc.ch"
            ReplaceTree(_ptRes0, 2, listLex);
#line 63 "toksearc.ch"
            listLex = _ptRes0;
#line 63 "toksearc.ch"
        }
#line 63 "toksearc.ch"
        
#line 63 "toksearc.ch"
#line 64 "toksearc.ch"
        return nbLex++ ;
        
#line 64 "toksearc.ch"
#line 65 "toksearc.ch"
        
#line 65 "toksearc.ch"
#line 65 "toksearc.ch"
    }
    
#line 65 "toksearc.ch"
#line 66 "toksearc.ch"
    
#line 66 "toksearc.ch"
#line 66 "toksearc.ch"
}
#line 66 "toksearc.ch"

#line 70 "toksearc.ch"

#line 70 "toksearc.ch"
void SearchLexToken ( PTREE tree )
#line 70 "toksearc.ch"
{
#line 70 "toksearc.ch"
#line 70 "toksearc.ch"
    int _nextVal ;
    
#line 70 "toksearc.ch"
#line 74 "toksearc.ch"
    
    PTREE   ptTree = (PTREE)0 ;
#line 74 "toksearc.ch"
    
#line 74 "toksearc.ch"
#line 75 "toksearc.ch"
    PTREE   lexNumb ;
#line 75 "toksearc.ch"
    
#line 75 "toksearc.ch"
#line 74 "toksearc.ch"
    (ptTree=tree);
#line 74 "toksearc.ch"
    
#line 74 "toksearc.ch"
#line 78 "toksearc.ch"
    FreeDescriptList();
#line 78 "toksearc.ch"
#line 79 "toksearc.ch"
    while ( ptTree ) {
#line 79 "toksearc.ch"
#line 80 "toksearc.ch"
                        if ( ptTree && numbertree(SonTree(ptTree, 1)) == LEXDEFINE_metalang ) {
#line 80 "toksearc.ch"
#line 81 "toksearc.ch"
                                                                                                        SearchToken(sontree(ptTree, 1), LexNumber(ptTree));
#line 81 "toksearc.ch"
#line 82 "toksearc.ch"
                                                                                                        
#line 82 "toksearc.ch"
#line 82 "toksearc.ch"
                                                                                                    }
#line 82 "toksearc.ch"
#line 83 "toksearc.ch"
                        (ptTree=sontree(ptTree, 2));
#line 83 "toksearc.ch"
                        
#line 83 "toksearc.ch"
#line 84 "toksearc.ch"
                        
#line 84 "toksearc.ch"
#line 84 "toksearc.ch"
                      }
#line 84 "toksearc.ch"
#line 85 "toksearc.ch"
    
#line 85 "toksearc.ch"
#line 85 "toksearc.ch"
}
#line 85 "toksearc.ch"

#line 87 "toksearc.ch"

#line 87 "toksearc.ch"
void SearchToken ( PTREE tree, int numb )
#line 87 "toksearc.ch"
{
#line 87 "toksearc.ch"
    register PPTREE _inter ;
#line 87 "toksearc.ch"

#line 87 "toksearc.ch"
#line 87 "toksearc.ch"
    int _nextVal ;
    
#line 87 "toksearc.ch"
#line 92 "toksearc.ch"
    
    PTREE   val, list ;
#line 92 "toksearc.ch"
    
#line 92 "toksearc.ch"
#line 93 "toksearc.ch"
    char    *theValue ;
    
#line 93 "toksearc.ch"
#line 94 "toksearc.ch"
    int i ;
    
#line 94 "toksearc.ch"
#line 97 "toksearc.ch"
    {
#line 97 "toksearc.ch"
#line 97 "toksearc.ch"
        ItPtree _iterator1 (tree, (PPTREE) 0) ;
        
#line 97 "toksearc.ch"
#line 97 "toksearc.ch"
        PTREE   _for_elem ;
#line 97 "toksearc.ch"
        
#line 97 "toksearc.ch"
#line 97 "toksearc.ch"
        _iterator1.AllSearch(1);
#line 97 "toksearc.ch"
#line 97 "toksearc.ch"
        while ( (_for_elem=_iterator1++) ) {
#line 97 "toksearc.ch"
#line 97 "toksearc.ch"
            {
#line 97 "toksearc.ch"
#line 98 "toksearc.ch"
                switch ( NumberTree(for_elem) ) {
#line 98 "toksearc.ch"
#line 100 "toksearc.ch"
                    case metalang::RETURN : 
#line 100 "toksearc.ch"
#line 100 "toksearc.ch"
                        (val=SonTree(for_elem, 1));
#line 100 "toksearc.ch"
                        
#line 100 "toksearc.ch"
#line 100 "toksearc.ch"
                    _Case8 : 
#line 100 "toksearc.ch"
#line 100 "toksearc.ch"
                        ;
#line 100 "toksearc.ch"
#line 100 "toksearc.ch"
                    INSERT_VAL : 
#line 100 "toksearc.ch"
#line 101 "toksearc.ch"
                        switch ( NumberTree(val) ) {
#line 101 "toksearc.ch"
#line 103 "toksearc.ch"
                            case metalang::TOKEN : 
#line 103 "toksearc.ch"
#line 103 "toksearc.ch"
                            _Case12 : 
#line 103 "toksearc.ch"
#line 103 "toksearc.ch"
                                ;
#line 103 "toksearc.ch"
#line 103 "toksearc.ch"
                                theValue = AddKey(BrainyValue(val));
#line 103 "toksearc.ch"
#line 104 "toksearc.ch"
                                i = AddConst(theValue);
#line 104 "toksearc.ch"
#line 105 "toksearc.ch"
                                InsertDescript(i, theValue, numb, sontree(tree, 1));
#line 105 "toksearc.ch"
#line 106 "toksearc.ch"
                                break ;
                                
#line 106 "toksearc.ch"
#line 108 "toksearc.ch"
                            case metalang::EXCLA : 
#line 108 "toksearc.ch"
#line 108 "toksearc.ch"
                            _Case13 : 
#line 108 "toksearc.ch"
#line 108 "toksearc.ch"
                                ;
#line 108 "toksearc.ch"
#line 108 "toksearc.ch"
                                i = AddConst(SymboName(BrainyValue(val), 0));
#line 108 "toksearc.ch"
#line 109 "toksearc.ch"
                                InsertDescript(i, SymboName(BrainyValue(val), 0), numb, sontree(tree, 1));
#line 109 "toksearc.ch"
#line 110 "toksearc.ch"
                                break ;
                                
#line 110 "toksearc.ch"
#line 112 "toksearc.ch"
                            case metalang::STRING : 
#line 112 "toksearc.ch"
#line 112 "toksearc.ch"
                            _Case14 : 
#line 112 "toksearc.ch"
#line 112 "toksearc.ch"
                                ;
#line 112 "toksearc.ch"
#line 112 "toksearc.ch"
                                treeToken = AddToken(BrainyValue(val), SymboName(BrainyValue(val), 0), treeToken);
#line 112 "toksearc.ch"
#line 113 "toksearc.ch"
                                i = AddConst(SymboName(BrainyValue(val), 0));
#line 113 "toksearc.ch"
#line 114 "toksearc.ch"
                                InsertDescript(i, SymboName(BrainyValue(val), 0), numb, sontree(tree, 1));
#line 114 "toksearc.ch"
#line 115 "toksearc.ch"
                                break ;
                                
#line 115 "toksearc.ch"
#line 117 "toksearc.ch"
                            case metalang::FUNC : 
#line 117 "toksearc.ch"
#line 117 "toksearc.ch"
                                (list=SonTree(val, 2));
#line 117 "toksearc.ch"
                                
#line 117 "toksearc.ch"
#line 117 "toksearc.ch"
                            _Case15 : 
#line 117 "toksearc.ch"
#line 117 "toksearc.ch"
                                ;
#line 117 "toksearc.ch"
#line 117 "toksearc.ch"
                                {
#line 117 "toksearc.ch"
#line 118 "toksearc.ch"
                                    if ( !strcmp(BrainyValue(val), "SortKeyWord") || !strcmp(BrainyValue(val), "UpSortKeyWord") ) 
#line 118 "toksearc.ch"
#line 119 "toksearc.ch"
                                        InsertDescript(0, "KeyWord", numb, sontree(tree, 1));
#line 119 "toksearc.ch"
#line 123 "toksearc.ch"
                                    ((_inter = (PPTREE)list,1) && 
#line 123 "toksearc.ch"
                                        ((val=SonTree(_inter,1)),1) &&
#line 123 "toksearc.ch"
                                        1);
#line 123 "toksearc.ch"
                                    ;
#line 123 "toksearc.ch"
#line 128 "toksearc.ch"
                                    if ( ((_inter = (PPTREE)val,1) && 
#line 128 "toksearc.ch"
                                            (NumberTree(_inter) == metalang::IDENT) &&
#line 128 "toksearc.ch"
                                            1) ) {
#line 128 "toksearc.ch"
#line 129 "toksearc.ch"
                                                    InsertDescript(AddConst(BrainyValue(val)), BrainyValue(val), numb, sontree(tree, 1));
#line 129 "toksearc.ch"
#line 130 "toksearc.ch"
                                                    
#line 130 "toksearc.ch"
#line 130 "toksearc.ch"
                                                 } else 
#line 130 "toksearc.ch"
#line 131 "toksearc.ch"
                                        goto INSERT_VAL ;
                                        
#line 131 "toksearc.ch"
                                    
#line 131 "toksearc.ch"
#line 132 "toksearc.ch"
                                    
#line 132 "toksearc.ch"
#line 132 "toksearc.ch"
                                }
                                
#line 132 "toksearc.ch"
                        }
#line 132 "toksearc.ch"
                        
#line 132 "toksearc.ch"
#line 134 "toksearc.ch"
                        goto for_continue1 ;
                        
#line 134 "toksearc.ch"
#line 135 "toksearc.ch"
                        break ;
                        
#line 135 "toksearc.ch"
#line 137 "toksearc.ch"
                    case metalang::STORE_COMMENT_LINE : 
#line 137 "toksearc.ch"
#line 137 "toksearc.ch"
                    _Case9 : 
#line 137 "toksearc.ch"
#line 137 "toksearc.ch"
                        ;
#line 137 "toksearc.ch"
#line 137 "toksearc.ch"
                        InsertDescript( -1, "Comment", numb, sontree(tree, 1));
#line 137 "toksearc.ch"
#line 138 "toksearc.ch"
                        break ;
                        
#line 138 "toksearc.ch"
#line 140 "toksearc.ch"
                    case metalang::RECOGNIZE_STRING : 
#line 140 "toksearc.ch"
#line 140 "toksearc.ch"
                    _Case10 : 
#line 140 "toksearc.ch"
#line 140 "toksearc.ch"
                        ;
#line 140 "toksearc.ch"
#line 140 "toksearc.ch"
                        InsertDescript( -2, "String", numb, sontree(tree, 1));
#line 140 "toksearc.ch"
#line 141 "toksearc.ch"
                        break ;
                        
#line 141 "toksearc.ch"
#line 142 "toksearc.ch"
                    default : 
#line 142 "toksearc.ch"
#line 142 "toksearc.ch"
                    _Case11 : 
#line 142 "toksearc.ch"
#line 142 "toksearc.ch"
                        ;
#line 142 "toksearc.ch"
#line 142 "toksearc.ch"
                        break ;
                        
#line 142 "toksearc.ch"
                }
#line 142 "toksearc.ch"
                
#line 142 "toksearc.ch"
#line 144 "toksearc.ch"
                
#line 144 "toksearc.ch"
#line 144 "toksearc.ch"
            }
            
#line 144 "toksearc.ch"
#line 144 "toksearc.ch"
            _iterator1.Current(_for_elem);
#line 144 "toksearc.ch"
#line 144 "toksearc.ch"
            continue ;
            
#line 144 "toksearc.ch"
#line 144 "toksearc.ch"
        for_continue1 : 
#line 144 "toksearc.ch"
#line 144 "toksearc.ch"
            _iterator1.Current(_for_elem);
#line 144 "toksearc.ch"
#line 144 "toksearc.ch"
            _iterator1.SkipSon(1);
#line 144 "toksearc.ch"
#line 144 "toksearc.ch"
            continue ;
            
#line 144 "toksearc.ch"
#line 144 "toksearc.ch"
        for_break1 : 
#line 144 "toksearc.ch"
#line 144 "toksearc.ch"
            break ;
            
#line 144 "toksearc.ch"
#line 144 "toksearc.ch"
            
#line 144 "toksearc.ch"
#line 144 "toksearc.ch"
        }
#line 144 "toksearc.ch"
#line 144 "toksearc.ch"
        
#line 144 "toksearc.ch"
#line 144 "toksearc.ch"
    }
    
#line 144 "toksearc.ch"
#line 145 "toksearc.ch"
    
#line 145 "toksearc.ch"
#line 145 "toksearc.ch"
}
#line 145 "toksearc.ch"

#line 145 "toksearc.ch"
#line 145 "toksearc.ch"
static void toksearc_Anchor () { int i = 1;} 
#line 145 "toksearc.ch"
/*Well done my boy */ 
