
#line 29 "decomp2.ch"
/*************************************************************************/
#line 29 "decomp2.ch"
/*                                                                       */
#line 29 "decomp2.ch"
/*        Produced by Metachop version 2.0  -    1989-1995               */
#line 29 "decomp2.ch"
/*     Tree      Meta     Chopper      developped    by                  */
#line 29 "decomp2.ch"
/*                  Eric Lavillonniere                                   */
#line 29 "decomp2.ch"
/*                                                                       */
#line 29 "decomp2.ch"
/*************************************************************************/
#line 29 "decomp2.ch"

#line 29 "decomp2.ch"
#include "token.h"
#line 29 "decomp2.ch"
#define decomp decomp_metachop
#line 29 "decomp2.ch"

#line 29 "decomp2.ch"
#ifndef for_elem
#line 29 "decomp2.ch"
#line 29 "decomp2.ch"
#define for_elem _for_elem

#line 29 "decomp2.ch"
#line 29 "decomp2.ch"

#line 29 "decomp2.ch"
#endif
#ifdef INCONNU
#line 29 "decomp2.ch"
#line 29 "decomp2.ch"
PTREE   for_elem ;
#line 29 "decomp2.ch"

#line 29 "decomp2.ch"
#line 29 "decomp2.ch"

#line 29 "decomp2.ch"
#endif
#include "decmetac.h"

extern int  equality, caseDesign, simpleCase, ifCase, condDesign, condCase, inDefine ;
extern char *ptEquality, *ptCase, *ptCond ;
extern char tabLabel [], *ptTab, *nameDefine ;
extern char stringNumb [];
extern int  nbLabel ;
extern char *currentLanguage ;

#line 42 "decomp2.ch"

#line 42 "decomp2.ch"
PTREE switch_el ( PTREE paramTree, int last )
#line 42 "decomp2.ch"
{
#line 42 "decomp2.ch"
    register PPTREE _inter ;
#line 42 "decomp2.ch"

#line 42 "decomp2.ch"
#line 42 "decomp2.ch"
    int ptStackTree ;
    
#line 42 "decomp2.ch"
#line 42 "decomp2.ch"
    PPTREE  stackTree [1024];
    
#line 42 "decomp2.ch"
#line 42 "decomp2.ch"
    int _retVal [2];
    
#line 42 "decomp2.ch"
#line 42 "decomp2.ch"
    PPTREE  _storeVal [2];
    
#line 42 "decomp2.ch"
#line 42 "decomp2.ch"
    int _nextVal ;
    
#line 42 "decomp2.ch"
#line 45 "decomp2.ch"
    PTREE   lstat, cond, list, ident, output, list_output, temporary, tree, tree1, son ;
#line 45 "decomp2.ch"
    
#line 45 "decomp2.ch"
#line 47 "decomp2.ch"
    char    *oldPtCase, *name, *name1 ;
    
#line 47 "decomp2.ch"
#line 48 "decomp2.ch"
    int i ;
    
#line 48 "decomp2.ch"
#line 51 "decomp2.ch"
    if ( ((_inter = (PPTREE)paramTree,1) && 
#line 51 "decomp2.ch"
            (NumberTree(_inter) == metachop::DEFAULT) &&
#line 51 "decomp2.ch"
            ((lstat=SonTree(_inter,1)),1) &&
#line 51 "decomp2.ch"
            1) ) {
#line 51 "decomp2.ch"
#line 52 "decomp2.ch"
                    PTREE   rep = (PTREE)0 ;
#line 52 "decomp2.ch"
                    
#line 52 "decomp2.ch"
#line 52 "decomp2.ch"
                    {
#line 52 "decomp2.ch"
                        PPTREE _ptTree0= (PPTREE) 0,_ptRes0= (PPTREE) 0;
#line 52 "decomp2.ch"
                        _ptRes0 = MakeTree(metachop::CASE, 2);
#line 52 "decomp2.ch"
                        {
#line 52 "decomp2.ch"
                            PPTREE _ptTree1= (PPTREE) 0,_ptRes1= (PPTREE) 0;
#line 52 "decomp2.ch"
                            _ptRes1 = MakeTree(metachop::DEF_IDENT, 0);
#line 52 "decomp2.ch"
                            _ptTree0 = _ptRes1;
#line 52 "decomp2.ch"
                        }
#line 52 "decomp2.ch"
                        ReplaceTree(_ptRes0, 1, _ptTree0);
#line 52 "decomp2.ch"
                        ReplaceTree(_ptRes0, 2, lstat);
#line 52 "decomp2.ch"
                        rep = _ptRes0;
#line 52 "decomp2.ch"
                    }
#line 52 "decomp2.ch"
                    
#line 52 "decomp2.ch"
#line 53 "decomp2.ch"
                    {
#line 53 "decomp2.ch"
                        PPTREE _ptTree0= (PPTREE) 0,_sonTree0= (PPTREE) 0 ;
#line 53 "decomp2.ch"
                        if (_ptTree0= fathertree(paramTree)) {
#line 53 "decomp2.ch"
                            int rank = ranktree(paramTree);
#line 53 "decomp2.ch"
                            ReplaceTree(_ptTree0,rank,rep);
#line 53 "decomp2.ch"
                        }
#line 53 "decomp2.ch"
                        paramTree = rep;
#line 53 "decomp2.ch"
                    }
#line 53 "decomp2.ch"
                    
#line 53 "decomp2.ch"
#line 54 "decomp2.ch"
                    
#line 54 "decomp2.ch"
#line 54 "decomp2.ch"
                 }
#line 54 "decomp2.ch"
#line 55 "decomp2.ch"
    ((_inter = (PPTREE)paramTree,1) && 
#line 55 "decomp2.ch"
        ((cond=SonTree(_inter,1)),1) &&
#line 55 "decomp2.ch"
        ((lstat=SonTree(_inter,2)),1) &&
#line 55 "decomp2.ch"
        1);
#line 55 "decomp2.ch"
    ;
#line 55 "decomp2.ch"
#line 56 "decomp2.ch"
    if ( !ifCase ) {
#line 56 "decomp2.ch"
#line 57 "decomp2.ch"
                        if ( ((_inter = (PPTREE)cond,1) && 
#line 57 "decomp2.ch"
                                (NumberTree(_inter) == metachop::IDENT) &&
#line 57 "decomp2.ch"
                                1) ) {
#line 57 "decomp2.ch"
#line 58 "decomp2.ch"
                                        {
#line 58 "decomp2.ch"
                                            /* [ metachop::DEFAULT [ META "stat_list"]]
#line 58 "decomp2.ch"
                                            */
#line 58 "decomp2.ch"
                                            {   ptStackTree = 0 ;
#line 58 "decomp2.ch"
                                                TheConstructor(stackTree,ptStackTree,-2,MakeString("stat_list"),META,1,metachop::DEFAULT,1,-3) ;
                                                output = PopTree ;
#line 58 "decomp2.ch"
                                            }   }
#line 58 "decomp2.ch"
                                        
#line 58 "decomp2.ch"
#line 59 "decomp2.ch"
                                        
#line 59 "decomp2.ch"
#line 59 "decomp2.ch"
                                     } else 
#line 59 "decomp2.ch"
                        if ( ((_inter = (PPTREE)cond,1) && 
#line 59 "decomp2.ch"
                                (NumberTree(_inter) == metachop::DEF_IDENT) &&
#line 59 "decomp2.ch"
                                1) ) {
#line 59 "decomp2.ch"
#line 60 "decomp2.ch"
                                        {
#line 60 "decomp2.ch"
                                            /* [ metachop::DEFAULT [ META "stat_list"]]
#line 60 "decomp2.ch"
                                            */
#line 60 "decomp2.ch"
                                            {   ptStackTree = 0 ;
#line 60 "decomp2.ch"
                                                TheConstructor(stackTree,ptStackTree,-2,MakeString("stat_list"),META,1,metachop::DEFAULT,1,-3) ;
                                                output = PopTree ;
#line 60 "decomp2.ch"
                                            }   }
#line 60 "decomp2.ch"
                                        
#line 60 "decomp2.ch"
#line 61 "decomp2.ch"
                                        
#line 61 "decomp2.ch"
#line 61 "decomp2.ch"
                                     } else 
#line 61 "decomp2.ch"
                        {
#line 61 "decomp2.ch"
#line 62 "decomp2.ch"
                            ((_inter = (PPTREE)cond,1) && 
#line 62 "decomp2.ch"
                                (NumberTree(_inter) == metachop::AFF) &&
#line 62 "decomp2.ch"
                                ((cond=SonTree(_inter,2)),1) &&
#line 62 "decomp2.ch"
                                1);
#line 62 "decomp2.ch"
                            ;
#line 62 "decomp2.ch"
#line 63 "decomp2.ch"
                            {
#line 63 "decomp2.ch"
                                /* [ metachop::CASE
                                    [ META "cond"]
                                    [ META "stat_list"]
                                   ]
#line 63 "decomp2.ch"
                                */
#line 63 "decomp2.ch"
                                {   ptStackTree = 0 ;
#line 63 "decomp2.ch"
                                    TheConstructor(stackTree,ptStackTree,-2,MakeString("cond"),META,1,-2,MakeString("stat_list"),META,1,metachop::CASE,2,-3) ;
                                    output = PopTree ;
#line 63 "decomp2.ch"
                                }   }
#line 63 "decomp2.ch"
                            
#line 63 "decomp2.ch"
#line 64 "decomp2.ch"
                            if ( ((_inter = (PPTREE)cond,1) && 
#line 64 "decomp2.ch"
                                    (NumberTree(_inter) == metachop::NODE_LIST) &&
#line 64 "decomp2.ch"
                                    1) ) {
#line 64 "decomp2.ch"
#line 64 "decomp2.ch"
                            _If2 : 
#line 64 "decomp2.ch"
#line 64 "decomp2.ch"
                                ;
#line 64 "decomp2.ch"
#line 66 "decomp2.ch"
                                {
#line 66 "decomp2.ch"
                                    PPTREE _ptTree0= (PPTREE) 0,_ptRes0= (PPTREE) 0;
#line 66 "decomp2.ch"
                                    _ptRes0 = MakeTree(metachop::IDENT, 1);
#line 66 "decomp2.ch"
                                    _ptTree0 = MakeString("LIST") ;
#line 66 "decomp2.ch"
                                    ReplaceTree(_ptRes0, 1, _ptTree0);
#line 66 "decomp2.ch"
                                    tree = _ptRes0;
#line 66 "decomp2.ch"
                                }
#line 66 "decomp2.ch"
                                
#line 66 "decomp2.ch"
#line 67 "decomp2.ch"
                                metarep("cond", output, tree);
#line 67 "decomp2.ch"
#line 67 "decomp2.ch"
                            } else 
#line 70 "decomp2.ch"
                            if ( ((_inter = (PPTREE)cond,1) && 
#line 70 "decomp2.ch"
                                    (NumberTree(_inter) == metachop::NODE_TREE) &&
#line 70 "decomp2.ch"
                                    (_retVal[1]=((_storeVal[1]=_inter,_inter=SonTree(_inter,1),1) &&
#line 70 "decomp2.ch"
                                        (NumberTree(_inter) == LIST) &&
#line 70 "decomp2.ch"
                                        ((tree=SonTree(_inter,1)),1) &&
#line 70 "decomp2.ch"
                                        1),
#line 70 "decomp2.ch"
                                        (_inter=_storeVal[1],1),_retVal[1]) &&
#line 70 "decomp2.ch"
                                    1) ) {
#line 70 "decomp2.ch"
#line 70 "decomp2.ch"
                            _If3 : 
#line 70 "decomp2.ch"
#line 70 "decomp2.ch"
                                ;
#line 70 "decomp2.ch"
#line 70 "decomp2.ch"
                                if ( ((_inter = (PPTREE)tree,1) && 
#line 70 "decomp2.ch"
                                        (NumberTree(_inter) == metachop::IDENT) &&
#line 70 "decomp2.ch"
                                        1) ) {
#line 70 "decomp2.ch"
#line 71 "decomp2.ch"
                                                if ( cplusGen ) 
#line 71 "decomp2.ch"
#line 72 "decomp2.ch"
                                                    {
#line 72 "decomp2.ch"
                                                        PPTREE _ptTree0= (PPTREE) 0,_ptRes0= (PPTREE) 0;
#line 72 "decomp2.ch"
                                                        _ptRes0 = MakeTree(metachop::IDENT, 1);
#line 72 "decomp2.ch"
                                                        _ptTree0 = StoreRef(MakeString(NameOfNodePlus(Value(tree))));
#line 72 "decomp2.ch"
                                                        ReplaceTree(_ptRes0, 1, _ptTree0);
#line 72 "decomp2.ch"
                                                        tree = _ptRes0;
#line 72 "decomp2.ch"
                                                    }
#line 72 "decomp2.ch"
                                                
#line 72 "decomp2.ch"
                                                else 
#line 72 "decomp2.ch"
#line 75 "decomp2.ch"
                                                    {
#line 75 "decomp2.ch"
                                                        PPTREE _ptTree0= (PPTREE) 0,_ptRes0= (PPTREE) 0;
#line 75 "decomp2.ch"
                                                        _ptRes0 = MakeTree(metachop::IDENT, 1);
#line 75 "decomp2.ch"
                                                        _ptTree0 = StoreRef(MakeString(NameOfNode(Value(tree))));
#line 75 "decomp2.ch"
                                                        ReplaceTree(_ptRes0, 1, _ptTree0);
#line 75 "decomp2.ch"
                                                        tree = _ptRes0;
#line 75 "decomp2.ch"
                                                    }
#line 75 "decomp2.ch"
                                                    
#line 75 "decomp2.ch"
                                                
#line 75 "decomp2.ch"
#line 76 "decomp2.ch"
                                                
#line 76 "decomp2.ch"
#line 76 "decomp2.ch"
                                             } else 
#line 76 "decomp2.ch"
                                if ( ((_inter = (PPTREE)tree,1) && 
#line 76 "decomp2.ch"
                                        (NumberTree(_inter) == metachop::QUALIFIED) &&
#line 76 "decomp2.ch"
                                        1) ) {
#line 76 "decomp2.ch"
#line 77 "decomp2.ch"
                                                EString name = EString(Value(tree [1])) + "::" + Value(tree [2]);
                                                
#line 77 "decomp2.ch"
#line 78 "decomp2.ch"
                                                {
#line 78 "decomp2.ch"
                                                    PPTREE _ptTree0= (PPTREE) 0,_ptRes0= (PPTREE) 0;
#line 78 "decomp2.ch"
                                                    _ptRes0 = MakeTree(metachop::IDENT, 1);
#line 78 "decomp2.ch"
                                                    _ptTree0 = StoreRef(MakeString(name.c_str()));
#line 78 "decomp2.ch"
                                                    ReplaceTree(_ptRes0, 1, _ptTree0);
#line 78 "decomp2.ch"
                                                    tree = _ptRes0;
#line 78 "decomp2.ch"
                                                }
#line 78 "decomp2.ch"
                                                
#line 78 "decomp2.ch"
#line 79 "decomp2.ch"
                                                
#line 79 "decomp2.ch"
#line 79 "decomp2.ch"
                                             }
#line 79 "decomp2.ch"
#line 80 "decomp2.ch"
                                metarep("cond", output, tree);
#line 80 "decomp2.ch"
#line 80 "decomp2.ch"
                            }
#line 80 "decomp2.ch"
#line 83 "decomp2.ch"
                            
#line 83 "decomp2.ch"
#line 83 "decomp2.ch"
                        }
                        
#line 83 "decomp2.ch"
#line 84 "decomp2.ch"
                        list_output = (PPTREE) 0 ;
#line 84 "decomp2.ch"
                        
#line 84 "decomp2.ch"
#line 85 "decomp2.ch"
                        ((_inter = (PPTREE)paramTree,1) && 
#line 85 "decomp2.ch"
                            ((cond=SonTree(_inter,1)),1) &&
#line 85 "decomp2.ch"
                            1);
#line 85 "decomp2.ch"
                        ;
#line 85 "decomp2.ch"
#line 86 "decomp2.ch"
                        if ( (((_inter = (PPTREE)cond,1) && 
#line 86 "decomp2.ch"
                                    (NumberTree(_inter) == metachop::IDENT) &&
#line 86 "decomp2.ch"
                                    1)&& (ident = cond)) || ((_inter = (PPTREE)cond,1) && 
#line 86 "decomp2.ch"
                                                                (NumberTree(_inter) == metachop::AFF) &&
#line 86 "decomp2.ch"
                                                                ((ident=SonTree(_inter,1)),1) &&
#line 86 "decomp2.ch"
                                                                ((cond=SonTree(_inter,2)),1) &&
#line 86 "decomp2.ch"
                                                                1) ) {
#line 86 "decomp2.ch"
#line 87 "decomp2.ch"
                                                                        {
#line 87 "decomp2.ch"
                                                                            PPTREE _ptTree0= (PPTREE) 0,_ptRes0= (PPTREE) 0;
#line 87 "decomp2.ch"
                                                                            _ptRes0 = MakeTree(metachop::IDENT, 1);
#line 87 "decomp2.ch"
                                                                            _ptTree0 = StoreRef(MakeString(ptCase));
#line 87 "decomp2.ch"
                                                                            ReplaceTree(_ptRes0, 1, _ptTree0);
#line 87 "decomp2.ch"
                                                                            tree1 = _ptRes0;
#line 87 "decomp2.ch"
                                                                        }
#line 87 "decomp2.ch"
                                                                        
#line 87 "decomp2.ch"
#line 88 "decomp2.ch"
                                                                        {
#line 88 "decomp2.ch"
                                                                            PPTREE _ptTree0= (PPTREE) 0 ;
#line 88 "decomp2.ch"
                                                                            {
#line 88 "decomp2.ch"
                                                                                PPTREE _ptTree1= (PPTREE) 0,_ptRes1= (PPTREE) 0;
#line 88 "decomp2.ch"
                                                                                _ptRes1 = MakeTree(metachop::AFF, 2);
#line 88 "decomp2.ch"
                                                                                ReplaceTree(_ptRes1, 1, ident);
#line 88 "decomp2.ch"
                                                                                ReplaceTree(_ptRes1, 2, tree1);
#line 88 "decomp2.ch"
                                                                                _ptTree0 = _ptRes1;
#line 88 "decomp2.ch"
                                                                            }
#line 88 "decomp2.ch"
                                                                            list_output =  AddList( list_output,_ptTree0);
#line 88 "decomp2.ch"
                                                                        }
#line 88 "decomp2.ch"
                                                                        
#line 88 "decomp2.ch"
#line 89 "decomp2.ch"
                                                                        
#line 89 "decomp2.ch"
#line 89 "decomp2.ch"
                                                                     }
#line 89 "decomp2.ch"
#line 90 "decomp2.ch"
                        if ( ((_inter = (PPTREE)cond,1) && 
#line 90 "decomp2.ch"
                                (NumberTree(_inter) == metachop::NODE_TREE) &&
#line 90 "decomp2.ch"
                                ((list=SonTree(_inter,1)),1) &&
#line 90 "decomp2.ch"
                                1) && !((!list)) ) {
#line 90 "decomp2.ch"
#line 91 "decomp2.ch"
                                                        i = 1 ;
#line 91 "decomp2.ch"
#line 92 "decomp2.ch"
                                                        (list?list.Nextl():(PPTREE)0);
#line 92 "decomp2.ch"
#line 93 "decomp2.ch"
                                                        while ( !((!list)) ) {
#line 93 "decomp2.ch"
#line 94 "decomp2.ch"
                                                                                if ( ((_inter = (PPTREE)list,1) && 
#line 94 "decomp2.ch"
                                                                                        (_retVal[1]=((_storeVal[1]=_inter,_inter=SonTree(_inter,1),1) &&
#line 94 "decomp2.ch"
                                                                                            (NumberTree(_inter) == metachop::AFF) &&
#line 94 "decomp2.ch"
                                                                                            ((ident=SonTree(_inter,1)),1) &&
#line 94 "decomp2.ch"
                                                                                            1),
#line 94 "decomp2.ch"
                                                                                            (_inter=_storeVal[1],1),_retVal[1]) &&
#line 94 "decomp2.ch"
                                                                                        1) || ((_inter = (PPTREE)list,1) && 
#line 94 "decomp2.ch"
                                                                                                    (_retVal[1]=((_storeVal[1]=_inter,_inter=SonTree(_inter,1),(ident=_inter),1) &&
#line 94 "decomp2.ch"
                                                                                                        (NumberTree(_inter) == metachop::IDENT) &&
#line 94 "decomp2.ch"
                                                                                                        1),
#line 94 "decomp2.ch"
                                                                                                        (_inter=_storeVal[1],1),_retVal[1]) &&
#line 94 "decomp2.ch"
                                                                                                    1) ) {
#line 94 "decomp2.ch"
#line 95 "decomp2.ch"
                                                                                                            {
#line 95 "decomp2.ch"
                                                                                                                /* [ metachop::AFF
                                                                                                                    [ META "aff1"]
                                                                                                                    [ metachop::EXP_LIST
                                                                                                                        [ metachop::IDENT "SonTree"]
                                                                                                                        [ metachop::EXP_SEQ
[ LIST 
    [ META "var1"]
    [ META "var2"]
]
                                                                                                                        ]
                                                                                                                    ]
                                                                                                                   ]
#line 95 "decomp2.ch"
                                                                                                                */
#line 95 "decomp2.ch"
                                                                                                                {   ptStackTree = 0 ;
#line 95 "decomp2.ch"
                                                                                                                    TheConstructor(stackTree,ptStackTree,-2,MakeString("aff1"),META,1,-2,MakeString("SonTree"),metachop::IDENT,1,
                                                                                                                        -2,MakeString("var1"),META,1,-2,MakeString("var2"),META,1,-4,LIST,2,LIST,2,metachop::EXP_SEQ,1,metachop::EXP_LIST,2,metachop::AFF,2,-3) ;
                                                                                                                    temporary = PopTree ;
#line 95 "decomp2.ch"
                                                                                                                }   }
#line 95 "decomp2.ch"
                                                                                                            
#line 95 "decomp2.ch"
#line 96 "decomp2.ch"
                                                                                                            metarep("aff1", temporary, NoCommentCopyTree(ident));
#line 96 "decomp2.ch"
#line 97 "decomp2.ch"
                                                                                                            {
#line 97 "decomp2.ch"
                                                                                                                PPTREE _ptTree0= (PPTREE) 0,_ptRes0= (PPTREE) 0;
#line 97 "decomp2.ch"
                                                                                                                _ptRes0 = MakeTree(metachop::IDENT, 1);
#line 97 "decomp2.ch"
                                                                                                                _ptTree0 = StoreRef(MakeString(ptCase));
#line 97 "decomp2.ch"
                                                                                                                ReplaceTree(_ptRes0, 1, _ptTree0);
#line 97 "decomp2.ch"
                                                                                                                tree1 = _ptRes0;
#line 97 "decomp2.ch"
                                                                                                            }
#line 97 "decomp2.ch"
                                                                                                            
#line 97 "decomp2.ch"
#line 98 "decomp2.ch"
                                                                                                            metarep("var1", temporary, tree1);
#line 98 "decomp2.ch"
#line 99 "decomp2.ch"
                                                                                                            _itoa(i, stringNumb, 10);
#line 99 "decomp2.ch"
#line 100 "decomp2.ch"
                                                                                                            {
#line 100 "decomp2.ch"
                                                                                                                PPTREE _ptTree0= (PPTREE) 0,_ptRes0= (PPTREE) 0;
#line 100 "decomp2.ch"
                                                                                                                _ptRes0 = MakeTree(metachop::INTEGER, 1);
#line 100 "decomp2.ch"
                                                                                                                _ptTree0 = StoreRef(MakeString(stringNumb));
#line 100 "decomp2.ch"
                                                                                                                ReplaceTree(_ptRes0, 1, _ptTree0);
#line 100 "decomp2.ch"
                                                                                                                tree1 = _ptRes0;
#line 100 "decomp2.ch"
                                                                                                            }
#line 100 "decomp2.ch"
                                                                                                            
#line 100 "decomp2.ch"
#line 101 "decomp2.ch"
                                                                                                            metarep("var2", temporary, tree1);
#line 101 "decomp2.ch"
#line 102 "decomp2.ch"
                                                                                                            {
#line 102 "decomp2.ch"
                                                                                                                PPTREE _ptTree0= (PPTREE) 0 ;
#line 102 "decomp2.ch"
                                                                                                                list_output =  AddList( list_output,temporary);
#line 102 "decomp2.ch"
                                                                                                            }
#line 102 "decomp2.ch"
                                                                                                            
#line 102 "decomp2.ch"
#line 103 "decomp2.ch"
                                                                                                            
#line 103 "decomp2.ch"
#line 103 "decomp2.ch"
                                                                                                         }
#line 103 "decomp2.ch"
#line 104 "decomp2.ch"
                                                                                i++ ;
#line 104 "decomp2.ch"
#line 105 "decomp2.ch"
                                                                                (list?list.Nextl():(PPTREE)0);
#line 105 "decomp2.ch"
#line 106 "decomp2.ch"
                                                                                
#line 106 "decomp2.ch"
#line 106 "decomp2.ch"
                                                                               }
#line 106 "decomp2.ch"
#line 107 "decomp2.ch"
                                                        
#line 107 "decomp2.ch"
#line 107 "decomp2.ch"
                                                     }
#line 107 "decomp2.ch"
#line 108 "decomp2.ch"
                        {
#line 108 "decomp2.ch"
                            /* [ metachop::LABEL
                                [ META "label"]
                                [ metachop::STAT_VOID ]
                               ]
#line 108 "decomp2.ch"
                            */
#line 108 "decomp2.ch"
                            {   ptStackTree = 0 ;
#line 108 "decomp2.ch"
                                TheConstructor(stackTree,ptStackTree,-2,MakeString("label"),META,1,metachop::STAT_VOID,0,metachop::LABEL,2,-3) ;
                                temporary = PopTree ;
#line 108 "decomp2.ch"
                            }   }
#line 108 "decomp2.ch"
                        
#line 108 "decomp2.ch"
#line 109 "decomp2.ch"
                        strcpy(stringNumb, "_Case");
#line 109 "decomp2.ch"
#line 110 "decomp2.ch"
                        _itoa(nbLabel++, stringNumb + 5, 10);
#line 110 "decomp2.ch"
#line 111 "decomp2.ch"
                        {
#line 111 "decomp2.ch"
                            PPTREE _ptTree0= (PPTREE) 0,_ptRes0= (PPTREE) 0;
#line 111 "decomp2.ch"
                            _ptRes0 = MakeTree(metachop::IDENT, 1);
#line 111 "decomp2.ch"
                            _ptTree0 = StoreRef(MakeString(stringNumb));
#line 111 "decomp2.ch"
                            ReplaceTree(_ptRes0, 1, _ptTree0);
#line 111 "decomp2.ch"
                            tree1 = _ptRes0;
#line 111 "decomp2.ch"
                        }
#line 111 "decomp2.ch"
                        
#line 111 "decomp2.ch"
#line 112 "decomp2.ch"
                        metarep("label", temporary, tree1);
#line 112 "decomp2.ch"
#line 113 "decomp2.ch"
                        {
#line 113 "decomp2.ch"
                            PPTREE _ptTree0= (PPTREE) 0 ;
#line 113 "decomp2.ch"
                            list_output =  AddList( list_output,temporary);
#line 113 "decomp2.ch"
                        }
#line 113 "decomp2.ch"
                        
#line 113 "decomp2.ch"
#line 114 "decomp2.ch"
                        son = (PPTREE) 0 ;
#line 114 "decomp2.ch"
                        
#line 114 "decomp2.ch"
#line 115 "decomp2.ch"
                        while ( !((!lstat)) ) {
#line 115 "decomp2.ch"
#line 116 "decomp2.ch"
                                                    (son=(lstat?lstat.Nextl():(PPTREE)0));
#line 116 "decomp2.ch"
                                                    
#line 116 "decomp2.ch"
#line 117 "decomp2.ch"
                                                    {
#line 117 "decomp2.ch"
                                                        PPTREE _ptTree0= (PPTREE) 0 ;
#line 117 "decomp2.ch"
                                                        list_output =  AddList( list_output,son);
#line 117 "decomp2.ch"
                                                    }
#line 117 "decomp2.ch"
                                                    
#line 117 "decomp2.ch"
#line 118 "decomp2.ch"
                                                    
#line 118 "decomp2.ch"
#line 118 "decomp2.ch"
                                                }
#line 118 "decomp2.ch"
#line 119 "decomp2.ch"
                        if ( !(((_inter = (PPTREE)son,1) && 
#line 119 "decomp2.ch"
                                    (NumberTree(_inter) == metachop::BREAK) &&
#line 119 "decomp2.ch"
                                    1)) && !last ) {
#line 119 "decomp2.ch"
#line 120 "decomp2.ch"
                                                        strcpy(stringNumb, "_Case");
#line 120 "decomp2.ch"
#line 121 "decomp2.ch"
                                                        _itoa(nbLabel, stringNumb + 5, 10);
#line 121 "decomp2.ch"
#line 122 "decomp2.ch"
                                                        {
#line 122 "decomp2.ch"
                                                            PPTREE _ptTree0= (PPTREE) 0 ;
#line 122 "decomp2.ch"
                                                            {
#line 122 "decomp2.ch"
                                                                PPTREE _ptTree1= (PPTREE) 0,_ptRes1= (PPTREE) 0;
#line 122 "decomp2.ch"
                                                                _ptRes1 = MakeTree(metachop::GOTO, 1);
#line 122 "decomp2.ch"
                                                                {
#line 122 "decomp2.ch"
                                                                    PPTREE _ptTree2= (PPTREE) 0,_ptRes2= (PPTREE) 0;
#line 122 "decomp2.ch"
                                                                    _ptRes2 = MakeTree(metachop::IDENT, 1);
#line 122 "decomp2.ch"
                                                                    _ptTree2 = StoreRef(MakeString(stringNumb));
#line 122 "decomp2.ch"
                                                                    ReplaceTree(_ptRes2, 1, _ptTree2);
#line 122 "decomp2.ch"
                                                                    _ptTree1 = _ptRes2;
#line 122 "decomp2.ch"
                                                                }
#line 122 "decomp2.ch"
                                                                ReplaceTree(_ptRes1, 1, _ptTree1);
#line 122 "decomp2.ch"
                                                                _ptTree0 = _ptRes1;
#line 122 "decomp2.ch"
                                                            }
#line 122 "decomp2.ch"
                                                            list_output =  AddList( list_output,_ptTree0);
#line 122 "decomp2.ch"
                                                        }
#line 122 "decomp2.ch"
                                                        
#line 122 "decomp2.ch"
#line 123 "decomp2.ch"
                                                        
#line 123 "decomp2.ch"
#line 123 "decomp2.ch"
                                                     }
#line 123 "decomp2.ch"
#line 124 "decomp2.ch"
                        metarep("stat_list", output, list_output);
#line 124 "decomp2.ch"
#line 125 "decomp2.ch"
                        
#line 125 "decomp2.ch"
#line 125 "decomp2.ch"
                     } else 
#line 125 "decomp2.ch"
    {
#line 125 "decomp2.ch"
#line 126 "decomp2.ch"
        list_output = (PPTREE) 0 ;
#line 126 "decomp2.ch"
        
#line 126 "decomp2.ch"
#line 127 "decomp2.ch"
        {
#line 127 "decomp2.ch"
            /* [ metachop::IF
                [ META "cond"]
                [ META "stat"]
                [ NIL ] 
               ]
#line 127 "decomp2.ch"
            */
#line 127 "decomp2.ch"
            {   ptStackTree = 0 ;
#line 127 "decomp2.ch"
                TheConstructor(stackTree,ptStackTree,-2,MakeString("cond"),META,1,-2,MakeString("stat"),META,1,-4,metachop::IF,3,-3) ;
                output = PopTree ;
#line 127 "decomp2.ch"
            }   }
#line 127 "decomp2.ch"
        
#line 127 "decomp2.ch"
#line 128 "decomp2.ch"
        if ( ((_inter = (PPTREE)cond,1) && 
#line 128 "decomp2.ch"
                (NumberTree(_inter) == metachop::IDENT) &&
#line 128 "decomp2.ch"
                1) || ((_inter = (PPTREE)cond,1) && 
#line 128 "decomp2.ch"
                            (NumberTree(_inter) == metachop::DEF_IDENT) &&
#line 128 "decomp2.ch"
                            1) || ((_inter = (PPTREE)cond,1) && 
#line 128 "decomp2.ch"
                                        (NumberTree(_inter) == metachop::AFF) &&
#line 128 "decomp2.ch"
                                        (_retVal[1]=((_storeVal[1]=_inter,_inter=SonTree(_inter,2),1) &&
#line 128 "decomp2.ch"
                                            (NumberTree(_inter) == metachop::DEF_IDENT) &&
#line 128 "decomp2.ch"
                                            1),
#line 128 "decomp2.ch"
                                            (_inter=_storeVal[1],1),_retVal[1]) &&
#line 128 "decomp2.ch"
                                        1) ) {
#line 128 "decomp2.ch"
#line 131 "decomp2.ch"
                                                {
#line 131 "decomp2.ch"
                                                    /* [ metachop::INTEGER "1"]
#line 131 "decomp2.ch"
                                                    */
#line 131 "decomp2.ch"
                                                    {   ptStackTree = 0 ;
#line 131 "decomp2.ch"
                                                        TheConstructor(stackTree,ptStackTree,-2,MakeString("1"),metachop::INTEGER,1,-3) ;
                                                        temporary = PopTree ;
#line 131 "decomp2.ch"
                                                    }   }
#line 131 "decomp2.ch"
                                                
#line 131 "decomp2.ch"
#line 132 "decomp2.ch"
                                                metarep("cond", output, temporary);
#line 132 "decomp2.ch"
#line 133 "decomp2.ch"
                                                
#line 133 "decomp2.ch"
#line 133 "decomp2.ch"
                                             } else 
#line 133 "decomp2.ch"
        {
#line 133 "decomp2.ch"
#line 134 "decomp2.ch"
            ((_inter = (PPTREE)cond,1) && 
#line 134 "decomp2.ch"
                (NumberTree(_inter) == metachop::AFF) &&
#line 134 "decomp2.ch"
                ((cond=SonTree(_inter,2)),1) &&
#line 134 "decomp2.ch"
                1);
#line 134 "decomp2.ch"
            ;
#line 134 "decomp2.ch"
#line 135 "decomp2.ch"
            metarep("cond", output, NoCommentCopyTree(cond));
#line 135 "decomp2.ch"
#line 136 "decomp2.ch"
            condDesign = 0 ;
#line 136 "decomp2.ch"
#line 137 "decomp2.ch"
            
#line 137 "decomp2.ch"
#line 137 "decomp2.ch"
        }
        
#line 137 "decomp2.ch"
#line 138 "decomp2.ch"
        ((_inter = (PPTREE)paramTree,1) && 
#line 138 "decomp2.ch"
            ((cond=SonTree(_inter,1)),1) &&
#line 138 "decomp2.ch"
            1);
#line 138 "decomp2.ch"
        ;
#line 138 "decomp2.ch"
#line 139 "decomp2.ch"
        if ( (((_inter = (PPTREE)cond,1) && 
#line 139 "decomp2.ch"
                    (NumberTree(_inter) == metachop::IDENT) &&
#line 139 "decomp2.ch"
                    1)&& (ident = cond)) || ((_inter = (PPTREE)cond,1) && 
#line 139 "decomp2.ch"
                                                (NumberTree(_inter) == metachop::AFF) &&
#line 139 "decomp2.ch"
                                                ((ident=SonTree(_inter,1)),1) &&
#line 139 "decomp2.ch"
                                                1) ) {
#line 139 "decomp2.ch"
#line 142 "decomp2.ch"
                                                        {
#line 142 "decomp2.ch"
                                                            /* [ metachop::AFF
                                                                [ META "ident"]
                                                                [ META "value"]
                                                               ]
#line 142 "decomp2.ch"
                                                            */
#line 142 "decomp2.ch"
                                                            {   ptStackTree = 0 ;
#line 142 "decomp2.ch"
                                                                TheConstructor(stackTree,ptStackTree,-2,MakeString("ident"),META,1,-2,MakeString("value"),META,1,metachop::AFF,2,-3) ;
                                                                temporary = PopTree ;
#line 142 "decomp2.ch"
                                                            }   }
#line 142 "decomp2.ch"
                                                        
#line 142 "decomp2.ch"
#line 143 "decomp2.ch"
                                                        metarep("ident", temporary, NoCommentCopyTree(ident));
#line 143 "decomp2.ch"
#line 144 "decomp2.ch"
                                                        {
#line 144 "decomp2.ch"
                                                            PPTREE _ptTree0= (PPTREE) 0,_ptRes0= (PPTREE) 0;
#line 144 "decomp2.ch"
                                                            _ptRes0 = MakeTree(metachop::IDENT, 1);
#line 144 "decomp2.ch"
                                                            _ptTree0 = StoreRef(MakeString(ptCase));
#line 144 "decomp2.ch"
                                                            ReplaceTree(_ptRes0, 1, _ptTree0);
#line 144 "decomp2.ch"
                                                            ident = _ptRes0;
#line 144 "decomp2.ch"
                                                        }
#line 144 "decomp2.ch"
                                                        
#line 144 "decomp2.ch"
#line 145 "decomp2.ch"
                                                        metarep("value", temporary, NoCommentCopyTree(ident));
#line 145 "decomp2.ch"
#line 146 "decomp2.ch"
                                                        {
#line 146 "decomp2.ch"
                                                            PPTREE _ptTree0= (PPTREE) 0 ;
#line 146 "decomp2.ch"
                                                            list_output =  AddList( list_output,temporary);
#line 146 "decomp2.ch"
                                                        }
#line 146 "decomp2.ch"
                                                        
#line 146 "decomp2.ch"
#line 147 "decomp2.ch"
                                                        
#line 147 "decomp2.ch"
#line 147 "decomp2.ch"
                                                     }
#line 147 "decomp2.ch"
#line 148 "decomp2.ch"
        {
#line 148 "decomp2.ch"
            /* [ metachop::LABEL
                [ META "label"]
                [ metachop::STAT_VOID ]
               ]
#line 148 "decomp2.ch"
            */
#line 148 "decomp2.ch"
            {   ptStackTree = 0 ;
#line 148 "decomp2.ch"
                TheConstructor(stackTree,ptStackTree,-2,MakeString("label"),META,1,metachop::STAT_VOID,0,metachop::LABEL,2,-3) ;
                temporary = PopTree ;
#line 148 "decomp2.ch"
            }   }
#line 148 "decomp2.ch"
        
#line 148 "decomp2.ch"
#line 149 "decomp2.ch"
        strcpy(stringNumb, "_If");
#line 149 "decomp2.ch"
#line 150 "decomp2.ch"
        _itoa(nbLabel++, stringNumb + 3, 10);
#line 150 "decomp2.ch"
#line 151 "decomp2.ch"
        {
#line 151 "decomp2.ch"
            PPTREE _ptTree0= (PPTREE) 0,_ptRes0= (PPTREE) 0;
#line 151 "decomp2.ch"
            _ptRes0 = MakeTree(metachop::IDENT, 1);
#line 151 "decomp2.ch"
            _ptTree0 = StoreRef(MakeString(stringNumb));
#line 151 "decomp2.ch"
            ReplaceTree(_ptRes0, 1, _ptTree0);
#line 151 "decomp2.ch"
            tree1 = _ptRes0;
#line 151 "decomp2.ch"
        }
#line 151 "decomp2.ch"
        
#line 151 "decomp2.ch"
#line 152 "decomp2.ch"
        metarep("label", temporary, tree1);
#line 152 "decomp2.ch"
#line 153 "decomp2.ch"
        {
#line 153 "decomp2.ch"
            PPTREE _ptTree0= (PPTREE) 0 ;
#line 153 "decomp2.ch"
            list_output =  AddList( list_output,temporary);
#line 153 "decomp2.ch"
        }
#line 153 "decomp2.ch"
        
#line 153 "decomp2.ch"
#line 154 "decomp2.ch"
        temporary = (PPTREE) 0 ;
#line 154 "decomp2.ch"
        
#line 154 "decomp2.ch"
#line 157 "decomp2.ch"
        while ( !((!lstat)) ) {
#line 157 "decomp2.ch"
#line 158 "decomp2.ch"
                                    (temporary=(lstat?lstat.Nextl():(PPTREE)0));
#line 158 "decomp2.ch"
                                    
#line 158 "decomp2.ch"
#line 159 "decomp2.ch"
                                    if ( !((!lstat)) ) 
#line 159 "decomp2.ch"
#line 160 "decomp2.ch"
                                        {
#line 160 "decomp2.ch"
                                            PPTREE _ptTree0= (PPTREE) 0 ;
#line 160 "decomp2.ch"
                                            list_output =  AddList( list_output,temporary);
#line 160 "decomp2.ch"
                                        }
#line 160 "decomp2.ch"
                                    
#line 160 "decomp2.ch"
#line 161 "decomp2.ch"
                                    
#line 161 "decomp2.ch"
#line 161 "decomp2.ch"
                                }
#line 161 "decomp2.ch"
#line 164 "decomp2.ch"
        if ( !(((_inter = (PPTREE)temporary,1) && 
#line 164 "decomp2.ch"
                    (NumberTree(_inter) == metachop::BREAK) &&
#line 164 "decomp2.ch"
                    1)) && !last ) {
#line 164 "decomp2.ch"
#line 165 "decomp2.ch"
                                        if ( temporary ) 
#line 165 "decomp2.ch"
#line 166 "decomp2.ch"
                                            {
#line 166 "decomp2.ch"
                                                PPTREE _ptTree0= (PPTREE) 0 ;
#line 166 "decomp2.ch"
                                                list_output =  AddList( list_output,temporary);
#line 166 "decomp2.ch"
                                            }
#line 166 "decomp2.ch"
                                        
#line 166 "decomp2.ch"
#line 167 "decomp2.ch"
                                        strcpy(stringNumb, "_If");
#line 167 "decomp2.ch"
#line 168 "decomp2.ch"
                                        _itoa(nbLabel, stringNumb + 3, 10);
#line 168 "decomp2.ch"
#line 169 "decomp2.ch"
                                        {
#line 169 "decomp2.ch"
                                            PPTREE _ptTree0= (PPTREE) 0 ;
#line 169 "decomp2.ch"
                                            {
#line 169 "decomp2.ch"
                                                PPTREE _ptTree1= (PPTREE) 0,_ptRes1= (PPTREE) 0;
#line 169 "decomp2.ch"
                                                _ptRes1 = MakeTree(metachop::GOTO, 1);
#line 169 "decomp2.ch"
                                                {
#line 169 "decomp2.ch"
                                                    PPTREE _ptTree2= (PPTREE) 0,_ptRes2= (PPTREE) 0;
#line 169 "decomp2.ch"
                                                    _ptRes2 = MakeTree(metachop::IDENT, 1);
#line 169 "decomp2.ch"
                                                    _ptTree2 = StoreRef(MakeString(stringNumb));
#line 169 "decomp2.ch"
                                                    ReplaceTree(_ptRes2, 1, _ptTree2);
#line 169 "decomp2.ch"
                                                    _ptTree1 = _ptRes2;
#line 169 "decomp2.ch"
                                                }
#line 169 "decomp2.ch"
                                                ReplaceTree(_ptRes1, 1, _ptTree1);
#line 169 "decomp2.ch"
                                                _ptTree0 = _ptRes1;
#line 169 "decomp2.ch"
                                            }
#line 169 "decomp2.ch"
                                            list_output =  AddList( list_output,_ptTree0);
#line 169 "decomp2.ch"
                                        }
#line 169 "decomp2.ch"
                                        
#line 169 "decomp2.ch"
#line 170 "decomp2.ch"
                                        
#line 170 "decomp2.ch"
#line 170 "decomp2.ch"
                                     } else 
#line 170 "decomp2.ch"
        if ( !(((_inter = (PPTREE)temporary,1) && 
#line 170 "decomp2.ch"
                    (NumberTree(_inter) == metachop::BREAK) &&
#line 170 "decomp2.ch"
                    1)) ) 
#line 170 "decomp2.ch"
#line 171 "decomp2.ch"
            {
#line 171 "decomp2.ch"
                PPTREE _ptTree0= (PPTREE) 0 ;
#line 171 "decomp2.ch"
                list_output =  AddList( list_output,temporary);
#line 171 "decomp2.ch"
            }
#line 171 "decomp2.ch"
        
#line 171 "decomp2.ch"
#line 174 "decomp2.ch"
        {
#line 174 "decomp2.ch"
            /* [ metachop::COMPOUND
                [ LIST 
                    [ metachop::STAT_VOID ]
                    [ metachop::NONE ]
                ]
               ]
#line 174 "decomp2.ch"
            */
#line 174 "decomp2.ch"
            {   ptStackTree = 0 ;
#line 174 "decomp2.ch"
                TheConstructor(stackTree,ptStackTree,metachop::STAT_VOID,0,metachop::NONE,0,-4,LIST,2,LIST,2,metachop::COMPOUND,1,-3) ;
                temporary = PopTree ;
#line 174 "decomp2.ch"
            }   }
#line 174 "decomp2.ch"
        
#line 174 "decomp2.ch"
#line 175 "decomp2.ch"
        {
#line 175 "decomp2.ch"
            PPTREE _ptTree0= (PPTREE) 0,_sonTree0= (PPTREE) 0 ;
#line 175 "decomp2.ch"
            ReplaceTree(temporary, 1, list_output);
#line 175 "decomp2.ch"
        }
#line 175 "decomp2.ch"
        
#line 175 "decomp2.ch"
#line 176 "decomp2.ch"
        metarep("stat", output, temporary);
#line 176 "decomp2.ch"
#line 177 "decomp2.ch"
        
#line 177 "decomp2.ch"
#line 177 "decomp2.ch"
    }
    
#line 177 "decomp2.ch"
#line 178 "decomp2.ch"
    return (output);
    
#line 178 "decomp2.ch"
#line 179 "decomp2.ch"
    
#line 179 "decomp2.ch"
#line 179 "decomp2.ch"
}
#line 179 "decomp2.ch"

#line 181 "decomp2.ch"

#line 181 "decomp2.ch"
PTREE switch_body ( PTREE paramTree )
#line 181 "decomp2.ch"
{
#line 181 "decomp2.ch"
    register PPTREE _inter ;
#line 181 "decomp2.ch"

#line 181 "decomp2.ch"
#line 181 "decomp2.ch"
    int ptStackTree ;
    
#line 181 "decomp2.ch"
#line 181 "decomp2.ch"
    PPTREE  stackTree [1024];
    
#line 181 "decomp2.ch"
#line 181 "decomp2.ch"
    int _nextVal ;
    
#line 181 "decomp2.ch"
#line 183 "decomp2.ch"
    PTREE   son, temporary, current, ident, tree ;
#line 183 "decomp2.ch"
    
#line 183 "decomp2.ch"
#line 184 "decomp2.ch"
    int first = 1, last ;
    
#line 184 "decomp2.ch"
#line 186 "decomp2.ch"
    current = (PPTREE) 0 ;
#line 186 "decomp2.ch"
    
#line 186 "decomp2.ch"
#line 187 "decomp2.ch"
    while ( !((!paramTree)) ) {
#line 187 "decomp2.ch"
#line 188 "decomp2.ch"
                                    (son=(paramTree?paramTree.Nextl():(PPTREE)0));
#line 188 "decomp2.ch"
                                    
#line 188 "decomp2.ch"
#line 189 "decomp2.ch"
                                    last = (!paramTree) ? 1 : 0 ;
#line 189 "decomp2.ch"
#line 190 "decomp2.ch"
                                    (son=switch_el(son, last));
#line 190 "decomp2.ch"
                                    
#line 190 "decomp2.ch"
#line 191 "decomp2.ch"
                                    if ( first ) {
#line 191 "decomp2.ch"
#line 192 "decomp2.ch"
                                                    if ( ifCase ) {
#line 192 "decomp2.ch"
#line 193 "decomp2.ch"
                                                                    (temporary=(current=son));
#line 193 "decomp2.ch"
                                                                    
#line 193 "decomp2.ch"
#line 194 "decomp2.ch"
                                                                    
#line 194 "decomp2.ch"
#line 194 "decomp2.ch"
                                                                   } else 
#line 194 "decomp2.ch"
                                                    {
#line 194 "decomp2.ch"
#line 195 "decomp2.ch"
                                                        {
#line 195 "decomp2.ch"
                                                            /* [ metachop::SWITCH
                                                                [ metachop::EXP_LIST
                                                                    [ metachop::IDENT "NumberTree"]
                                                                    [ META "tree"]
                                                                ]
                                                                [ LIST 
                                                                    [ metachop::CASE
                                                                        [ META "cond"]
                                                                        [ META "stat"]
                                                                    ]
                                                                ]
                                                               ]
#line 195 "decomp2.ch"
                                                            */
#line 195 "decomp2.ch"
                                                            {   ptStackTree = 0 ;
#line 195 "decomp2.ch"
                                                                TheConstructor(stackTree,ptStackTree,-2,MakeString("NumberTree"),metachop::IDENT,1,-2,MakeString("tree"),META,1,metachop::EXP_LIST,2,
                                                                    -2,MakeString("cond"),META,1,-2,MakeString("stat"),META,1,metachop::CASE,2,-4,LIST,2,metachop::SWITCH,2,-3) ;
                                                                temporary = PopTree ;
#line 195 "decomp2.ch"
                                                            }   }
#line 195 "decomp2.ch"
                                                        
#line 195 "decomp2.ch"
#line 199 "decomp2.ch"
                                                        {
#line 199 "decomp2.ch"
                                                            PPTREE _ptTree0= (PPTREE) 0,_ptRes0= (PPTREE) 0;
#line 199 "decomp2.ch"
                                                            _ptRes0 = MakeTree(metachop::IDENT, 1);
#line 199 "decomp2.ch"
                                                            _ptTree0 = StoreRef(MakeString(ptCase));
#line 199 "decomp2.ch"
                                                            ReplaceTree(_ptRes0, 1, _ptTree0);
#line 199 "decomp2.ch"
                                                            ident = _ptRes0;
#line 199 "decomp2.ch"
                                                        }
#line 199 "decomp2.ch"
                                                        
#line 199 "decomp2.ch"
#line 200 "decomp2.ch"
                                                        metarep("tree", temporary, ident);
#line 200 "decomp2.ch"
#line 201 "decomp2.ch"
                                                        {
#line 201 "decomp2.ch"
                                                            PPTREE _ptTree0= (PPTREE) 0 ;
#line 201 "decomp2.ch"
                                                            current =  AddList( current,son);
#line 201 "decomp2.ch"
                                                        }
#line 201 "decomp2.ch"
                                                        
#line 201 "decomp2.ch"
#line 202 "decomp2.ch"
                                                        
#line 202 "decomp2.ch"
#line 202 "decomp2.ch"
                                                    }
                                                    
#line 202 "decomp2.ch"
#line 203 "decomp2.ch"
                                                    first = 0 ;
#line 203 "decomp2.ch"
#line 204 "decomp2.ch"
                                                    
#line 204 "decomp2.ch"
#line 204 "decomp2.ch"
                                                  } else 
#line 204 "decomp2.ch"
                                    if ( ifCase ) {
#line 204 "decomp2.ch"
#line 205 "decomp2.ch"
                                                    {
#line 205 "decomp2.ch"
                                                        PPTREE _ptTree0= (PPTREE) 0,_sonTree0= (PPTREE) 0 ;
#line 205 "decomp2.ch"
                                                        ReplaceTree(current, 3, son);
#line 205 "decomp2.ch"
                                                    }
#line 205 "decomp2.ch"
                                                    
#line 205 "decomp2.ch"
#line 206 "decomp2.ch"
                                                    (current=son);
#line 206 "decomp2.ch"
                                                    
#line 206 "decomp2.ch"
#line 207 "decomp2.ch"
                                                    
#line 207 "decomp2.ch"
#line 207 "decomp2.ch"
                                                   } else 
#line 207 "decomp2.ch"
#line 208 "decomp2.ch"
                                        {
#line 208 "decomp2.ch"
                                            PPTREE _ptTree0= (PPTREE) 0 ;
#line 208 "decomp2.ch"
                                            current =  AddList( current,son);
#line 208 "decomp2.ch"
                                        }
#line 208 "decomp2.ch"
                                        
#line 208 "decomp2.ch"
                                    
#line 208 "decomp2.ch"
#line 209 "decomp2.ch"
                                    
#line 209 "decomp2.ch"
#line 209 "decomp2.ch"
                                }
#line 209 "decomp2.ch"
#line 210 "decomp2.ch"
    if ( !ifCase ) {
#line 210 "decomp2.ch"
#line 213 "decomp2.ch"
                        {
#line 213 "decomp2.ch"
                            PPTREE _ptTree0= (PPTREE) 0,_sonTree0= (PPTREE) 0 ;
#line 213 "decomp2.ch"
                            ReplaceTree(temporary, 2, current);
#line 213 "decomp2.ch"
                        }
#line 213 "decomp2.ch"
                        
#line 213 "decomp2.ch"
#line 214 "decomp2.ch"
                        
#line 214 "decomp2.ch"
#line 214 "decomp2.ch"
                     }
#line 214 "decomp2.ch"
#line 215 "decomp2.ch"
    return (temporary);
    
#line 215 "decomp2.ch"
#line 216 "decomp2.ch"
    
#line 216 "decomp2.ch"
#line 216 "decomp2.ch"
}
#line 216 "decomp2.ch"

#line 218 "decomp2.ch"

#line 218 "decomp2.ch"
void node ( PTREE paramTree )
#line 218 "decomp2.ch"
{
#line 218 "decomp2.ch"
#line 218 "decomp2.ch"
    int _nextVal ;
    
#line 218 "decomp2.ch"
#line 220 "decomp2.ch"
    if ( equality ) 
#line 220 "decomp2.ch"
#line 221 "decomp2.ch"
        EqualTree(ptCond, ptEquality, 0, paramTree, 0);
#line 221 "decomp2.ch"
    else 
#line 221 "decomp2.ch"
#line 223 "decomp2.ch"
        EqualTree(ptCond, (char *)0, 0, paramTree, 0);
#line 223 "decomp2.ch"
    
#line 223 "decomp2.ch"
#line 224 "decomp2.ch"
    
#line 224 "decomp2.ch"
#line 224 "decomp2.ch"
}
#line 224 "decomp2.ch"

#line 226 "decomp2.ch"

#line 226 "decomp2.ch"
int classify_case ( PTREE paramTree )
#line 226 "decomp2.ch"
{
#line 226 "decomp2.ch"
    register PPTREE _inter ;
#line 226 "decomp2.ch"

#line 226 "decomp2.ch"
#line 226 "decomp2.ch"
    int _retVal [2];
    
#line 226 "decomp2.ch"
#line 226 "decomp2.ch"
    PPTREE  _storeVal [2];
    
#line 226 "decomp2.ch"
#line 226 "decomp2.ch"
    int _nextVal ;
    
#line 226 "decomp2.ch"
#line 228 "decomp2.ch"
    PTREE   list, cond, list1, temporary ;
#line 228 "decomp2.ch"
    
#line 228 "decomp2.ch"
#line 230 "decomp2.ch"
    ((_inter = (PPTREE)paramTree,1) && 
#line 230 "decomp2.ch"
        ((list=SonTree(_inter,2)),1) &&
#line 230 "decomp2.ch"
        1);
#line 230 "decomp2.ch"
    ;
#line 230 "decomp2.ch"
#line 231 "decomp2.ch"
    while ( !((!list)) ) {
#line 231 "decomp2.ch"
#line 232 "decomp2.ch"
                            if ( !(((_inter = (PPTREE)list,1) && 
#line 232 "decomp2.ch"
                                        (_retVal[1]=((_storeVal[1]=_inter,_inter=SonTree(_inter,1),1) &&
#line 232 "decomp2.ch"
                                            (NumberTree(_inter) == metachop::DEFAULT) &&
#line 232 "decomp2.ch"
                                            1),
#line 232 "decomp2.ch"
                                            (_inter=_storeVal[1],1),_retVal[1]) &&
#line 232 "decomp2.ch"
                                        1)) ) {
#line 232 "decomp2.ch"
#line 233 "decomp2.ch"
                                                ((_inter = (PPTREE)list,1) && 
#line 233 "decomp2.ch"
                                                    (_retVal[1]=((_storeVal[1]=_inter,_inter=SonTree(_inter,1),1) &&
#line 233 "decomp2.ch"
                                                        ((cond=SonTree(_inter,1)),1) &&
#line 233 "decomp2.ch"
                                                        1),
#line 233 "decomp2.ch"
                                                        (_inter=_storeVal[1],1),_retVal[1]) &&
#line 233 "decomp2.ch"
                                                    1);
#line 233 "decomp2.ch"
                                                ;
#line 233 "decomp2.ch"
#line 236 "decomp2.ch"
                                                if ( !(((_inter = (PPTREE)cond,1) && 
#line 236 "decomp2.ch"
                                                            (NumberTree(_inter) == metachop::IDENT) &&
#line 236 "decomp2.ch"
                                                            1)) ) {
#line 236 "decomp2.ch"
#line 237 "decomp2.ch"
                                                                    ((_inter = (PPTREE)cond,1) && 
#line 237 "decomp2.ch"
                                                                        (NumberTree(_inter) == metachop::AFF) &&
#line 237 "decomp2.ch"
                                                                        ((cond=SonTree(_inter,2)),1) &&
#line 237 "decomp2.ch"
                                                                        1);
#line 237 "decomp2.ch"
                                                                    ;
#line 237 "decomp2.ch"
#line 238 "decomp2.ch"
                                                                    if ( ((_inter = (PPTREE)cond,1) && 
#line 238 "decomp2.ch"
                                                                            (NumberTree(_inter) == metachop::NODE_LIST) &&
#line 238 "decomp2.ch"
                                                                            (!SonTree(_inter,1)) &&
#line 238 "decomp2.ch"
                                                                            1) ) {
#line 238 "decomp2.ch"
#line 238 "decomp2.ch"
                                                                    _If12 : 
#line 238 "decomp2.ch"
#line 238 "decomp2.ch"
                                                                        ;
#line 238 "decomp2.ch"
#line 239 "decomp2.ch"
                                                                        ;
#line 239 "decomp2.ch"
#line 239 "decomp2.ch"
                                                                        goto _If13 ;
                                                                        
#line 239 "decomp2.ch"
#line 239 "decomp2.ch"
                                                                    } else 
#line 242 "decomp2.ch"
                                                                    if ( ((_inter = (PPTREE)cond,1) && 
#line 242 "decomp2.ch"
                                                                            (NumberTree(_inter) == metachop::DEF_IDENT) &&
#line 242 "decomp2.ch"
                                                                            1) ) {
#line 242 "decomp2.ch"
#line 242 "decomp2.ch"
                                                                    _If13 : 
#line 242 "decomp2.ch"
#line 242 "decomp2.ch"
                                                                        ;
#line 242 "decomp2.ch"
#line 242 "decomp2.ch"
                                                                    } else 
#line 242 "decomp2.ch"
                                                                    if ( ((_inter = (PPTREE)cond,1) && 
#line 242 "decomp2.ch"
                                                                            (NumberTree(_inter) == metachop::NODE_TREE) &&
#line 242 "decomp2.ch"
                                                                            ((list1=SonTree(_inter,1)),1) &&
#line 242 "decomp2.ch"
                                                                            1) ) {
#line 242 "decomp2.ch"
#line 242 "decomp2.ch"
                                                                    _If14 : 
#line 242 "decomp2.ch"
#line 242 "decomp2.ch"
                                                                        ;
#line 242 "decomp2.ch"
#line 242 "decomp2.ch"
                                                                        if ( !(((_inter = (PPTREE)list1,1) && 
#line 242 "decomp2.ch"
                                                                                    (_retVal[1]=((_storeVal[1]=_inter,_inter=SonTree(_inter,1),1) &&
#line 242 "decomp2.ch"
                                                                                        (NumberTree(_inter) == metachop::IDENT) &&
#line 242 "decomp2.ch"
                                                                                        1),
#line 242 "decomp2.ch"
                                                                                        (_inter=_storeVal[1],1),_retVal[1]) &&
#line 242 "decomp2.ch"
                                                                                    1)) && !(((_inter = (PPTREE)list1,1) && 
#line 242 "decomp2.ch"
                                                                                                (_retVal[1]=((_storeVal[1]=_inter,_inter=SonTree(_inter,1),1) &&
#line 242 "decomp2.ch"
                                                                                                    (NumberTree(_inter) == metachop::QUALIFIED) &&
#line 242 "decomp2.ch"
                                                                                                    1),
#line 242 "decomp2.ch"
                                                                                                    (_inter=_storeVal[1],1),_retVal[1]) &&
#line 242 "decomp2.ch"
                                                                                                1)) ) 
#line 242 "decomp2.ch"
#line 243 "decomp2.ch"
                                                                            return 0 ;
                                                                        
#line 243 "decomp2.ch"
#line 244 "decomp2.ch"
                                                                        (list1?list1.Nextl():(PPTREE)0);
#line 244 "decomp2.ch"
#line 245 "decomp2.ch"
                                                                        while ( list1 ) {
#line 245 "decomp2.ch"
#line 246 "decomp2.ch"
                                                                                            (temporary=(list1?list1.Nextl():(PPTREE)0));
#line 246 "decomp2.ch"
                                                                                            
#line 246 "decomp2.ch"
#line 247 "decomp2.ch"
                                                                                            if ( ((_inter = (PPTREE)temporary,1) && 
#line 247 "decomp2.ch"
                                                                                                    (NumberTree(_inter) == metachop::IDENT) &&
#line 247 "decomp2.ch"
                                                                                                    1) ) {
#line 247 "decomp2.ch"
#line 247 "decomp2.ch"
                                                                                            _If16 : 
#line 247 "decomp2.ch"
#line 247 "decomp2.ch"
                                                                                                ;
#line 247 "decomp2.ch"
#line 247 "decomp2.ch"
                                                                                                goto _If17 ;
                                                                                                
#line 247 "decomp2.ch"
#line 247 "decomp2.ch"
                                                                                            } else 
#line 250 "decomp2.ch"
                                                                                            if ( ((_inter = (PPTREE)temporary,1) && 
#line 250 "decomp2.ch"
                                                                                                    (NumberTree(_inter) == metachop::AFF) &&
#line 250 "decomp2.ch"
                                                                                                    (_retVal[1]=((_storeVal[1]=_inter,_inter=SonTree(_inter,2),1) &&
#line 250 "decomp2.ch"
                                                                                                        (NumberTree(_inter) == metachop::DEF_IDENT) &&
#line 250 "decomp2.ch"
                                                                                                        1),
#line 250 "decomp2.ch"
                                                                                                        (_inter=_storeVal[1],1),_retVal[1]) &&
#line 250 "decomp2.ch"
                                                                                                    1) ) {
#line 250 "decomp2.ch"
#line 250 "decomp2.ch"
                                                                                            _If17 : 
#line 250 "decomp2.ch"
#line 250 "decomp2.ch"
                                                                                                ;
#line 250 "decomp2.ch"
#line 250 "decomp2.ch"
                                                                                                goto _If18 ;
                                                                                                
#line 250 "decomp2.ch"
#line 250 "decomp2.ch"
                                                                                            } else 
#line 250 "decomp2.ch"
                                                                                            if ( ((_inter = (PPTREE)temporary,1) && 
#line 250 "decomp2.ch"
                                                                                                    (NumberTree(_inter) == metachop::DEF_IDENT) &&
#line 250 "decomp2.ch"
                                                                                                    1) ) {
#line 250 "decomp2.ch"
#line 250 "decomp2.ch"
                                                                                            _If18 : 
#line 250 "decomp2.ch"
#line 250 "decomp2.ch"
                                                                                                ;
#line 250 "decomp2.ch"
#line 250 "decomp2.ch"
                                                                                                continue ;
                                                                                                
#line 250 "decomp2.ch"
#line 250 "decomp2.ch"
                                                                                                goto _If19 ;
                                                                                                
#line 250 "decomp2.ch"
#line 250 "decomp2.ch"
                                                                                            } else 
#line 251 "decomp2.ch"
                                                                                            if ( 1 ) {
#line 251 "decomp2.ch"
#line 251 "decomp2.ch"
                                                                                            _If19 : 
#line 251 "decomp2.ch"
#line 251 "decomp2.ch"
                                                                                                ;
#line 251 "decomp2.ch"
#line 251 "decomp2.ch"
                                                                                                return 0 ;
                                                                                                
#line 251 "decomp2.ch"
#line 251 "decomp2.ch"
                                                                                            }
#line 251 "decomp2.ch"
#line 253 "decomp2.ch"
                                                                                            
#line 253 "decomp2.ch"
#line 253 "decomp2.ch"
                                                                                         }
#line 253 "decomp2.ch"
#line 253 "decomp2.ch"
                                                                    } else 
#line 256 "decomp2.ch"
                                                                    if ( 1 ) {
#line 256 "decomp2.ch"
#line 256 "decomp2.ch"
                                                                    _If15 : 
#line 256 "decomp2.ch"
#line 256 "decomp2.ch"
                                                                        ;
#line 256 "decomp2.ch"
#line 256 "decomp2.ch"
                                                                        return 0 ;
                                                                        
#line 256 "decomp2.ch"
#line 256 "decomp2.ch"
                                                                    }
#line 256 "decomp2.ch"
#line 259 "decomp2.ch"
                                                                    
#line 259 "decomp2.ch"
#line 259 "decomp2.ch"
                                                                  }
#line 259 "decomp2.ch"
#line 260 "decomp2.ch"
                                                
#line 260 "decomp2.ch"
#line 260 "decomp2.ch"
                                              }
#line 260 "decomp2.ch"
#line 261 "decomp2.ch"
                            (list?list.Nextl():(PPTREE)0);
#line 261 "decomp2.ch"
#line 262 "decomp2.ch"
                            
#line 262 "decomp2.ch"
#line 262 "decomp2.ch"
                           }
#line 262 "decomp2.ch"
#line 263 "decomp2.ch"
    return 1 ;
    
#line 263 "decomp2.ch"
#line 264 "decomp2.ch"
    
#line 264 "decomp2.ch"
#line 264 "decomp2.ch"
}
#line 264 "decomp2.ch"

#line 264 "decomp2.ch"
#line 264 "decomp2.ch"
static void decomp2_Anchor () { int i = 1;} 
#line 264 "decomp2.ch"
/*Well done my boy */ 
#line 264 "decomp2.ch"

