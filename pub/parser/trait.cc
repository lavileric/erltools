
#line 28 "trait.ch"
/*************************************************************************/
#line 28 "trait.ch"
/*                                                                       */
#line 28 "trait.ch"
/*        Produced by Metachop version 2.0  -    1989-1995               */
#line 28 "trait.ch"
/*     Tree      Meta     Chopper      developped    by                  */
#line 28 "trait.ch"
/*                  Eric Lavillonniere                                   */
#line 28 "trait.ch"
/*                                                                       */
#line 28 "trait.ch"
/*************************************************************************/
#line 28 "trait.ch"

#line 28 "trait.ch"
#include "token.h"
#line 28 "trait.ch"
#define decomp decomp_metalang
#line 28 "trait.ch"

#line 28 "trait.ch"
#ifndef for_elem
#line 28 "trait.ch"
#line 28 "trait.ch"
#define for_elem _for_elem

#line 28 "trait.ch"
#line 28 "trait.ch"

#line 28 "trait.ch"
#endif
#ifdef INCONNU
#line 28 "trait.ch"
#line 28 "trait.ch"
PTREE   for_elem ;
#line 28 "trait.ch"

#line 28 "trait.ch"
#line 28 "trait.ch"

#line 28 "trait.ch"
#endif
#include "metalang.h"

void    traitement_addlist (PTREE) ;
void    traitement_proc (PTREE) ;
void    traitement_while (PTREE) ;
void    rep_addlist (PTREE, PTREE, PTREE) ;
int nb_addlist, find_elem ;

#line 46 "trait.ch"

#line 46 "trait.ch"
void traitement ( PTREE tree )
#line 46 "trait.ch"
{
#line 46 "trait.ch"
    register PPTREE _inter ;
#line 46 "trait.ch"

#line 46 "trait.ch"
#line 46 "trait.ch"
    PTREE   _Baum0 ;
#line 46 "trait.ch"
    
#line 46 "trait.ch"
#line 46 "trait.ch"
    int _nextVal ;
    
#line 46 "trait.ch"
#line 50 "trait.ch"
    {
#line 50 "trait.ch"
        PPTREE _ptTree0= (PPTREE) 0,_ptRes0= (PPTREE) 0;
#line 50 "trait.ch"
        _ptRes0 = MakeTree(metalang::DEFINE, 2);
#line 50 "trait.ch"
        {
#line 50 "trait.ch"
            PPTREE _ptTree1= (PPTREE) 0,_ptRes1= (PPTREE) 0;
#line 50 "trait.ch"
            _ptRes1 = MakeTree(META, 1);
#line 50 "trait.ch"
            _ptTree1 = MakeString("name") ;
#line 50 "trait.ch"
            ReplaceTree(_ptRes1, 1, _ptTree1);
#line 50 "trait.ch"
            _ptTree0 = _ptRes1;
#line 50 "trait.ch"
        }
#line 50 "trait.ch"
        ReplaceTree(_ptRes0, 1, _ptTree0);
#line 50 "trait.ch"
        {
#line 50 "trait.ch"
            PPTREE _ptTree1= (PPTREE) 0,_ptRes1= (PPTREE) 0;
#line 50 "trait.ch"
            _ptRes1 = MakeTree(META, 1);
#line 50 "trait.ch"
            _ptTree1 = MakeString("list") ;
#line 50 "trait.ch"
            ReplaceTree(_ptRes1, 1, _ptTree1);
#line 50 "trait.ch"
            _ptTree0 = _ptRes1;
#line 50 "trait.ch"
        }
#line 50 "trait.ch"
        ReplaceTree(_ptRes0, 2, _ptTree0);
#line 50 "trait.ch"
        _Baum0 = _ptRes0;
#line 50 "trait.ch"
    }
#line 50 "trait.ch"
    
#line 50 "trait.ch"
#line 50 "trait.ch"
    {
#line 50 "trait.ch"
#line 50 "trait.ch"
        ItPtree _iterator1 (tree, _Baum0) ;
        
#line 50 "trait.ch"
#line 50 "trait.ch"
        PPTREE  _for_elem ;
        
#line 50 "trait.ch"
#line 50 "trait.ch"
        _iterator1.AllSearch(1);
#line 50 "trait.ch"
#line 50 "trait.ch"
        while ( _for_elem = _iterator1++ ) {
#line 50 "trait.ch"
#line 50 "trait.ch"
            {
#line 50 "trait.ch"
#line 51 "trait.ch"
                traitement_proc(for_elem);
#line 51 "trait.ch"
#line 52 "trait.ch"
                goto for_continue1 ;
                
#line 52 "trait.ch"
#line 53 "trait.ch"
                
#line 53 "trait.ch"
#line 53 "trait.ch"
            }
            
#line 53 "trait.ch"
#line 53 "trait.ch"
            _iterator1.Current(_for_elem);
#line 53 "trait.ch"
#line 53 "trait.ch"
            continue ;
            
#line 53 "trait.ch"
#line 53 "trait.ch"
        for_continue1 : 
#line 53 "trait.ch"
#line 53 "trait.ch"
            _iterator1.Current(_for_elem);
#line 53 "trait.ch"
#line 53 "trait.ch"
            _iterator1.SkipSon(1);
#line 53 "trait.ch"
#line 53 "trait.ch"
            continue ;
            
#line 53 "trait.ch"
#line 53 "trait.ch"
        for_break1 : 
#line 53 "trait.ch"
#line 53 "trait.ch"
            break ;
            
#line 53 "trait.ch"
#line 53 "trait.ch"
            
#line 53 "trait.ch"
#line 53 "trait.ch"
        }
#line 53 "trait.ch"
#line 53 "trait.ch"
        
#line 53 "trait.ch"
#line 53 "trait.ch"
    }
    
#line 53 "trait.ch"
#line 54 "trait.ch"
    
#line 54 "trait.ch"
#line 54 "trait.ch"
}
#line 54 "trait.ch"

static PTREE    the_while ;
#line 54 "trait.ch"

#line 61 "trait.ch"

#line 61 "trait.ch"
void traitement_proc ( PTREE tree )
#line 61 "trait.ch"
{
#line 61 "trait.ch"
    register PPTREE _inter ;
#line 61 "trait.ch"

#line 61 "trait.ch"
#line 61 "trait.ch"
    PTREE   _Baum1 ;
#line 61 "trait.ch"
    
#line 61 "trait.ch"
#line 61 "trait.ch"
    PTREE   _Baum0 ;
#line 61 "trait.ch"
    
#line 61 "trait.ch"
#line 61 "trait.ch"
    int ptStackTree ;
    
#line 61 "trait.ch"
#line 61 "trait.ch"
    PPTREE  stackTree [1024];
    
#line 61 "trait.ch"
#line 61 "trait.ch"
    int _nextVal ;
    
#line 61 "trait.ch"
#line 64 "trait.ch"
    
    PTREE   searched, declaration, elem, position ;
#line 64 "trait.ch"
    
#line 64 "trait.ch"
#line 65 "trait.ch"
    char    name [20];
    
#line 65 "trait.ch"
#line 66 "trait.ch"
    int i ;
    
#line 66 "trait.ch"
#line 68 "trait.ch"
    nb_addlist = 0 ;
#line 68 "trait.ch"
#line 69 "trait.ch"
    {
#line 69 "trait.ch"
        /* [ metalang::WHILE
            [ META "condition"]
            [ META "stat"]
           ]
#line 69 "trait.ch"
        */
#line 69 "trait.ch"
        {   ptStackTree = 0 ;
#line 69 "trait.ch"
            TheConstructor(stackTree,ptStackTree,-2,MakeString("condition"),META,1,-2,MakeString("stat"),META,1,metalang::WHILE,2,-3) ;
            _Baum0 = PopTree ;
#line 69 "trait.ch"
        }   }
#line 69 "trait.ch"
    
#line 69 "trait.ch"
#line 69 "trait.ch"
    {
#line 69 "trait.ch"
#line 69 "trait.ch"
        ItPtree _iterator1 (tree, _Baum0) ;
        
#line 69 "trait.ch"
#line 69 "trait.ch"
        PPTREE  _for_elem ;
        
#line 69 "trait.ch"
#line 69 "trait.ch"
        _iterator1.AllSearch(1);
#line 69 "trait.ch"
#line 69 "trait.ch"
        while ( _for_elem = _iterator1++ ) {
#line 69 "trait.ch"
#line 69 "trait.ch"
            {
#line 69 "trait.ch"
#line 70 "trait.ch"
                (the_while=for_elem);
#line 70 "trait.ch"
                
#line 70 "trait.ch"
#line 71 "trait.ch"
                traitement_while(for_elem);
#line 71 "trait.ch"
#line 72 "trait.ch"
                goto for_continue1 ;
                
#line 72 "trait.ch"
#line 73 "trait.ch"
                
#line 73 "trait.ch"
#line 73 "trait.ch"
            }
            
#line 73 "trait.ch"
#line 73 "trait.ch"
            _iterator1.Current(_for_elem);
#line 73 "trait.ch"
#line 73 "trait.ch"
            continue ;
            
#line 73 "trait.ch"
#line 73 "trait.ch"
        for_continue1 : 
#line 73 "trait.ch"
#line 73 "trait.ch"
            _iterator1.Current(_for_elem);
#line 73 "trait.ch"
#line 73 "trait.ch"
            _iterator1.SkipSon(1);
#line 73 "trait.ch"
#line 73 "trait.ch"
            continue ;
            
#line 73 "trait.ch"
#line 73 "trait.ch"
        for_break1 : 
#line 73 "trait.ch"
#line 73 "trait.ch"
            break ;
            
#line 73 "trait.ch"
#line 73 "trait.ch"
            
#line 73 "trait.ch"
#line 73 "trait.ch"
        }
#line 73 "trait.ch"
#line 73 "trait.ch"
        
#line 73 "trait.ch"
#line 73 "trait.ch"
    }
    
#line 73 "trait.ch"
#line 74 "trait.ch"
    {
#line 74 "trait.ch"
        /* [ metalang::REPEAT
            [ META [ META "stat"]]
            [ META "condition"]
           ]
#line 74 "trait.ch"
        */
#line 74 "trait.ch"
        {   ptStackTree = 0 ;
#line 74 "trait.ch"
            TheConstructor(stackTree,ptStackTree,-2,MakeString("stat"),META,1,META,1,-2,MakeString("condition"),META,1,metalang::REPEAT,2,-3) ;
            _Baum1 = PopTree ;
#line 74 "trait.ch"
        }   }
#line 74 "trait.ch"
    
#line 74 "trait.ch"
#line 74 "trait.ch"
    {
#line 74 "trait.ch"
#line 74 "trait.ch"
        ItPtree _iterator2 (tree, _Baum1) ;
        
#line 74 "trait.ch"
#line 74 "trait.ch"
        PPTREE  _for_elem ;
        
#line 74 "trait.ch"
#line 74 "trait.ch"
        _iterator2.AllSearch(1);
#line 74 "trait.ch"
#line 74 "trait.ch"
        while ( _for_elem = _iterator2++ ) {
#line 74 "trait.ch"
#line 74 "trait.ch"
            {
#line 74 "trait.ch"
#line 75 "trait.ch"
                (the_while=for_elem);
#line 75 "trait.ch"
                
#line 75 "trait.ch"
#line 76 "trait.ch"
                traitement_while(for_elem);
#line 76 "trait.ch"
#line 77 "trait.ch"
                goto for_continue2 ;
                
#line 77 "trait.ch"
#line 78 "trait.ch"
                
#line 78 "trait.ch"
#line 78 "trait.ch"
            }
            
#line 78 "trait.ch"
#line 78 "trait.ch"
            _iterator2.Current(_for_elem);
#line 78 "trait.ch"
#line 78 "trait.ch"
            continue ;
            
#line 78 "trait.ch"
#line 78 "trait.ch"
        for_continue2 : 
#line 78 "trait.ch"
#line 78 "trait.ch"
            _iterator2.Current(_for_elem);
#line 78 "trait.ch"
#line 78 "trait.ch"
            _iterator2.SkipSon(1);
#line 78 "trait.ch"
#line 78 "trait.ch"
            continue ;
            
#line 78 "trait.ch"
#line 78 "trait.ch"
        for_break2 : 
#line 78 "trait.ch"
#line 78 "trait.ch"
            break ;
            
#line 78 "trait.ch"
#line 78 "trait.ch"
            
#line 78 "trait.ch"
#line 78 "trait.ch"
        }
#line 78 "trait.ch"
#line 78 "trait.ch"
        
#line 78 "trait.ch"
#line 78 "trait.ch"
    }
    
#line 78 "trait.ch"
#line 79 "trait.ch"
    if ( nb_addlist ) {
#line 79 "trait.ch"
#line 80 "trait.ch"
                        position = (PPTREE) 0 ;
#line 80 "trait.ch"
                        
#line 80 "trait.ch"
#line 81 "trait.ch"
#line 81 "trait.ch"
                        for ( i = 1 ; i <= nb_addlist ; i++ ) {
#line 81 "trait.ch"
#line 82 "trait.ch"
                                                                    sprintf(name, "%s%d", "_addlist", i);
#line 82 "trait.ch"
#line 83 "trait.ch"
                                                                    {
#line 83 "trait.ch"
                                                                        PPTREE _ptTree0= (PPTREE) 0 ;
#line 83 "trait.ch"
                                                                        {
#line 83 "trait.ch"
                                                                            PPTREE _ptTree1= (PPTREE) 0,_ptRes1= (PPTREE) 0;
#line 83 "trait.ch"
                                                                            _ptRes1 = MakeTree(metalang::IDENT, 1);
#line 83 "trait.ch"
                                                                            _ptTree1 = StoreRef(MakeString(name));
#line 83 "trait.ch"
                                                                            ReplaceTree(_ptRes1, 1, _ptTree1);
#line 83 "trait.ch"
                                                                            _ptTree0 = _ptRes1;
#line 83 "trait.ch"
                                                                        }
#line 83 "trait.ch"
                                                                        position =  AddList( position,_ptTree0);
#line 83 "trait.ch"
                                                                    }
#line 83 "trait.ch"
                                                                    
#line 83 "trait.ch"
#line 84 "trait.ch"
                                                                    
#line 84 "trait.ch"
#line 84 "trait.ch"
                                                                   }
#line 84 "trait.ch"
                        
#line 84 "trait.ch"
#line 85 "trait.ch"
                        {
#line 85 "trait.ch"
                            /* [ metalang::DECLARE
                                [ LIST 
                                    [ META "position"]
                                ]
                               ]
#line 85 "trait.ch"
                            */
#line 85 "trait.ch"
                            {   ptStackTree = 0 ;
#line 85 "trait.ch"
                                TheConstructor(stackTree,ptStackTree,-2,MakeString("position"),META,1,-4,LIST,2,metalang::DECLARE,1,-3) ;
                                declaration = PopTree ;
#line 85 "trait.ch"
                            }   {
#line 85 "trait.ch"
                                    register PPTREE _inter ;
#line 85 "trait.ch"
                                
#line 85 "trait.ch"
#line 85 "trait.ch"
                                    MetaRep("position", declaration, position);
#line 85 "trait.ch"
#line 85 "trait.ch"
                                }
#line 85 "trait.ch"
                        }
#line 85 "trait.ch"
                        
#line 85 "trait.ch"
#line 88 "trait.ch"
                        
                        PTREE   father = (PTREE)0 ;
#line 88 "trait.ch"
                        
#line 88 "trait.ch"
#line 88 "trait.ch"
                        (father=FatherTree(position));
#line 88 "trait.ch"
                        
#line 88 "trait.ch"
#line 89 "trait.ch"
                        if ( ((_inter = (PPTREE)father,1) && 
#line 89 "trait.ch"
                                (NumberTree(_inter) == LIST) &&
#line 89 "trait.ch"
                                1) ) 
#line 89 "trait.ch"
#line 89 "trait.ch"
                            {
#line 89 "trait.ch"
                                PPTREE _ptTree0= (PPTREE) 0,_sonTree0= (PPTREE) 0 ;
#line 89 "trait.ch"
                                if (_ptTree0= fathertree(father)) {
#line 89 "trait.ch"
                                    int rank = ranktree(father);
#line 89 "trait.ch"
                                    ReplaceTree(_ptTree0,rank,position);
#line 89 "trait.ch"
                                }
#line 89 "trait.ch"
                            }
#line 89 "trait.ch"
                        
#line 89 "trait.ch"
#line 92 "trait.ch"
                        ((_inter = (PPTREE)tree,1) && 
#line 92 "trait.ch"
                            ((elem=SonTree(_inter,2)),1) &&
#line 92 "trait.ch"
                            1);
#line 92 "trait.ch"
                        ;
#line 92 "trait.ch"
#line 93 "trait.ch"
                        {
#line 93 "trait.ch"
                            PPTREE _ptTree0= (PPTREE) 0,_sonTree0= (PPTREE) 0 ;
#line 93 "trait.ch"
                            _ptTree0 = declaration;
#line 93 "trait.ch"
                            {
#line 93 "trait.ch"
                                PPTREE _ptTree1= (PPTREE) 0 ;
#line 93 "trait.ch"
                                _ptTree0 = AddList( _ptTree0,elem);
#line 93 "trait.ch"
                            }
#line 93 "trait.ch"
                            ReplaceTree(tree, 2, _ptTree0);
#line 93 "trait.ch"
                        }
#line 93 "trait.ch"
                        
#line 93 "trait.ch"
#line 94 "trait.ch"
                        
#line 94 "trait.ch"
#line 94 "trait.ch"
                       }
#line 94 "trait.ch"
#line 95 "trait.ch"
    
#line 95 "trait.ch"
#line 95 "trait.ch"
}
#line 95 "trait.ch"

#line 99 "trait.ch"

#line 99 "trait.ch"
void traitement_while ( PTREE tree )
#line 99 "trait.ch"
{
#line 99 "trait.ch"
#line 99 "trait.ch"
    PTREE   _Baum0 ;
#line 99 "trait.ch"
    
#line 99 "trait.ch"
#line 99 "trait.ch"
    int ptStackTree ;
    
#line 99 "trait.ch"
#line 99 "trait.ch"
    PPTREE  stackTree [1024];
    
#line 99 "trait.ch"
#line 99 "trait.ch"
    int _nextVal ;
    
#line 99 "trait.ch"
#line 103 "trait.ch"
    {
#line 103 "trait.ch"
        /* [ metalang::ADDLIST
            [ LIST 
                [ META "list"]
                [ META "elem"]
            ]
           ]
#line 103 "trait.ch"
        */
#line 103 "trait.ch"
        {   ptStackTree = 0 ;
#line 103 "trait.ch"
            TheConstructor(stackTree,ptStackTree,-2,MakeString("list"),META,1,-2,MakeString("elem"),META,1,-4,LIST,2,LIST,2,metalang::ADDLIST,1,-3) ;
            _Baum0 = PopTree ;
#line 103 "trait.ch"
        }   }
#line 103 "trait.ch"
    
#line 103 "trait.ch"
#line 103 "trait.ch"
    {
#line 103 "trait.ch"
#line 103 "trait.ch"
        ItPtree _iterator1 (tree, _Baum0) ;
        
#line 103 "trait.ch"
#line 103 "trait.ch"
        PPTREE  _for_elem ;
        
#line 103 "trait.ch"
#line 103 "trait.ch"
        _iterator1.AllSearch(1);
#line 103 "trait.ch"
#line 103 "trait.ch"
        while ( _for_elem = _iterator1++ ) {
#line 103 "trait.ch"
#line 103 "trait.ch"
            {
#line 103 "trait.ch"
#line 104 "trait.ch"
                traitement_addlist(for_elem);
#line 104 "trait.ch"
#line 105 "trait.ch"
                goto for_continue1 ;
                
#line 105 "trait.ch"
#line 106 "trait.ch"
                
#line 106 "trait.ch"
#line 106 "trait.ch"
            }
            
#line 106 "trait.ch"
#line 106 "trait.ch"
            _iterator1.Current(_for_elem);
#line 106 "trait.ch"
#line 106 "trait.ch"
            continue ;
            
#line 106 "trait.ch"
#line 106 "trait.ch"
        for_continue1 : 
#line 106 "trait.ch"
#line 106 "trait.ch"
            _iterator1.Current(_for_elem);
#line 106 "trait.ch"
#line 106 "trait.ch"
            _iterator1.SkipSon(1);
#line 106 "trait.ch"
#line 106 "trait.ch"
            continue ;
            
#line 106 "trait.ch"
#line 106 "trait.ch"
        for_break1 : 
#line 106 "trait.ch"
#line 106 "trait.ch"
            break ;
            
#line 106 "trait.ch"
#line 106 "trait.ch"
            
#line 106 "trait.ch"
#line 106 "trait.ch"
        }
#line 106 "trait.ch"
#line 106 "trait.ch"
        
#line 106 "trait.ch"
#line 106 "trait.ch"
    }
    
#line 106 "trait.ch"
#line 107 "trait.ch"
    
#line 107 "trait.ch"
#line 107 "trait.ch"
}
#line 107 "trait.ch"

static PTREE    theName, theOldName ;
#line 107 "trait.ch"
static int  useValue ;

#line 115 "trait.ch"

#line 115 "trait.ch"
void traitement_addlist ( PTREE tree )
#line 115 "trait.ch"
{
#line 115 "trait.ch"
    register PPTREE _inter ;
#line 115 "trait.ch"

#line 115 "trait.ch"
#line 115 "trait.ch"
    PTREE   _Baum0 ;
#line 115 "trait.ch"
    
#line 115 "trait.ch"
#line 115 "trait.ch"
    int ptStackTree ;
    
#line 115 "trait.ch"
#line 115 "trait.ch"
    PPTREE  stackTree [1024];
    
#line 115 "trait.ch"
#line 115 "trait.ch"
    int _nextVal ;
    
#line 115 "trait.ch"
#line 118 "trait.ch"
    
    PTREE   inter, searched, new_value, old_value, list_elem ;
#line 118 "trait.ch"
    
#line 118 "trait.ch"
#line 119 "trait.ch"
    int rank ;
    
#line 119 "trait.ch"
#line 120 "trait.ch"
    char    name [20];
    
#line 120 "trait.ch"
#line 122 "trait.ch"
    find_elem = 0 ;
#line 122 "trait.ch"
#line 123 "trait.ch"
    {
#line 123 "trait.ch"
        PPTREE _ptTree0= (PPTREE) 0,_ptRes0= (PPTREE) 0;
#line 123 "trait.ch"
        _ptRes0 = MakeTree(metalang::IDENT, 1);
#line 123 "trait.ch"
        _ptTree0 = StoreRef(MakeString(Value(tree)));
#line 123 "trait.ch"
        ReplaceTree(_ptRes0, 1, _ptTree0);
#line 123 "trait.ch"
        old_value = _ptRes0;
#line 123 "trait.ch"
    }
#line 123 "trait.ch"
    
#line 123 "trait.ch"
#line 124 "trait.ch"
    {
#line 124 "trait.ch"
        /* [ metalang::EQUAL
            [ META "old_value"]
            [ META "aff"]
           ]
#line 124 "trait.ch"
        */
#line 124 "trait.ch"
        {   ptStackTree = 0 ;
#line 124 "trait.ch"
            TheConstructor(stackTree,ptStackTree,-2,MakeString("old_value"),META,1,-2,MakeString("aff"),META,1,metalang::EQUAL,2,-3) ;
            _Baum0 = PopTree ;
#line 124 "trait.ch"
        }   {
#line 124 "trait.ch"
                register PPTREE _inter ;
#line 124 "trait.ch"
            
#line 124 "trait.ch"
#line 124 "trait.ch"
                MetaRep("old_value", _Baum0, old_value);
#line 124 "trait.ch"
#line 124 "trait.ch"
            }
#line 124 "trait.ch"
    }
#line 124 "trait.ch"
    
#line 124 "trait.ch"
#line 124 "trait.ch"
    {
#line 124 "trait.ch"
#line 124 "trait.ch"
        ItPtree _iterator1 (the_while, _Baum0) ;
        
#line 124 "trait.ch"
#line 124 "trait.ch"
        PPTREE  _for_elem ;
        
#line 124 "trait.ch"
#line 124 "trait.ch"
        _iterator1.AllSearch(1);
#line 124 "trait.ch"
#line 125 "trait.ch"
        while ( _for_elem = _iterator1++ ) {
#line 125 "trait.ch"
#line 125 "trait.ch"
            find_elem++ ;
#line 125 "trait.ch"
#line 125 "trait.ch"
            _iterator1.Current(_for_elem);
#line 125 "trait.ch"
#line 125 "trait.ch"
            continue ;
            
#line 125 "trait.ch"
#line 125 "trait.ch"
        for_continue1 : 
#line 125 "trait.ch"
#line 125 "trait.ch"
            _iterator1.Current(_for_elem);
#line 125 "trait.ch"
#line 125 "trait.ch"
            _iterator1.SkipSon(1);
#line 125 "trait.ch"
#line 125 "trait.ch"
            continue ;
            
#line 125 "trait.ch"
#line 125 "trait.ch"
        for_break1 : 
#line 125 "trait.ch"
#line 125 "trait.ch"
            break ;
            
#line 125 "trait.ch"
#line 125 "trait.ch"
            
#line 125 "trait.ch"
#line 125 "trait.ch"
        }
#line 125 "trait.ch"
#line 125 "trait.ch"
        
#line 125 "trait.ch"
#line 125 "trait.ch"
    }
    
#line 125 "trait.ch"
#line 127 "trait.ch"
    if ( !find_elem ) {
#line 127 "trait.ch"
#line 127 "trait.ch"
                            PTREE   _Baum1 ;
#line 127 "trait.ch"
                            
#line 127 "trait.ch"
#line 128 "trait.ch"
                            nb_addlist++ ;
#line 128 "trait.ch"
#line 129 "trait.ch"
                            sprintf(name, "%s%d", "_addlist", nb_addlist);
#line 129 "trait.ch"
#line 130 "trait.ch"
                            {
#line 130 "trait.ch"
                                PPTREE _ptTree0= (PPTREE) 0,_ptRes0= (PPTREE) 0;
#line 130 "trait.ch"
                                _ptRes0 = MakeTree(metalang::IDENT, 1);
#line 130 "trait.ch"
                                _ptTree0 = StoreRef(MakeString(name));
#line 130 "trait.ch"
                                ReplaceTree(_ptRes0, 1, _ptTree0);
#line 130 "trait.ch"
                                new_value = _ptRes0;
#line 130 "trait.ch"
                            }
#line 130 "trait.ch"
                            
#line 130 "trait.ch"
#line 131 "trait.ch"
                            useValue = 0 ;
#line 131 "trait.ch"
#line 132 "trait.ch"
                            (theName=new_value);
#line 132 "trait.ch"
                            
#line 132 "trait.ch"
#line 133 "trait.ch"
                            (theOldName=old_value);
#line 133 "trait.ch"
                            
#line 133 "trait.ch"
#line 134 "trait.ch"
                            {
#line 134 "trait.ch"
                                /* [ metalang::ADDLIST
                                    [ LIST 
                                        [ META "meta0"]
                                        [ META "list"]
                                    ]
                                   ]
#line 134 "trait.ch"
                                */
#line 134 "trait.ch"
                                {   ptStackTree = 0 ;
#line 134 "trait.ch"
                                    TheConstructor(stackTree,ptStackTree,-2,MakeString("meta0"),META,1,-2,MakeString("list"),META,1,-4,LIST,2,LIST,2,metalang::ADDLIST,1,-3) ;
                                    _Baum1 = PopTree ;
#line 134 "trait.ch"
                                }   {
#line 134 "trait.ch"
                                        register PPTREE _inter ;
#line 134 "trait.ch"
                                    
#line 134 "trait.ch"
#line 134 "trait.ch"
                                        MetaRep("meta0", _Baum1, CopyTree(old_value));
#line 134 "trait.ch"
#line 134 "trait.ch"
                                    }
#line 134 "trait.ch"
                            }
#line 134 "trait.ch"
                            
#line 134 "trait.ch"
#line 134 "trait.ch"
                            {
#line 134 "trait.ch"
#line 134 "trait.ch"
                                ItPtree _iterator2 (the_while, _Baum1) ;
                                
#line 134 "trait.ch"
#line 134 "trait.ch"
                                PPTREE  _for_elem ;
                                
#line 134 "trait.ch"
#line 134 "trait.ch"
                                _iterator2.AllSearch(1);
#line 134 "trait.ch"
#line 135 "trait.ch"
                                while ( _for_elem = _iterator2++ ) {
#line 135 "trait.ch"
#line 135 "trait.ch"
                                    rep_addlist(for_elem, theName, theOldName);
#line 135 "trait.ch"
#line 135 "trait.ch"
                                    _iterator2.Current(_for_elem);
#line 135 "trait.ch"
#line 135 "trait.ch"
                                    continue ;
                                    
#line 135 "trait.ch"
#line 135 "trait.ch"
                                for_continue2 : 
#line 135 "trait.ch"
#line 135 "trait.ch"
                                    _iterator2.Current(_for_elem);
#line 135 "trait.ch"
#line 135 "trait.ch"
                                    _iterator2.SkipSon(1);
#line 135 "trait.ch"
#line 135 "trait.ch"
                                    continue ;
                                    
#line 135 "trait.ch"
#line 135 "trait.ch"
                                for_break2 : 
#line 135 "trait.ch"
#line 135 "trait.ch"
                                    break ;
                                    
#line 135 "trait.ch"
#line 135 "trait.ch"
                                    
#line 135 "trait.ch"
#line 135 "trait.ch"
                                }
#line 135 "trait.ch"
#line 135 "trait.ch"
                                
#line 135 "trait.ch"
#line 135 "trait.ch"
                            }
                            
#line 135 "trait.ch"
#line 137 "trait.ch"
                            if ( useValue ) {
#line 137 "trait.ch"
#line 138 "trait.ch"
                                                {
#line 138 "trait.ch"
                                                    /* [ metalang::EQUAL
                                                        [ META "new_value"]
                                                        [ META "old_value"]
                                                       ]
#line 138 "trait.ch"
                                                    */
#line 138 "trait.ch"
                                                    {   ptStackTree = 0 ;
#line 138 "trait.ch"
                                                        TheConstructor(stackTree,ptStackTree,-2,MakeString("new_value"),META,1,-2,MakeString("old_value"),META,1,metalang::EQUAL,2,-3) ;
                                                        list_elem = PopTree ;
#line 138 "trait.ch"
                                                    }   {
#line 138 "trait.ch"
                                                            register PPTREE _inter ;
#line 138 "trait.ch"
                                                        
#line 138 "trait.ch"
#line 138 "trait.ch"
                                                            MetaRep("new_value", list_elem, new_value);
#line 138 "trait.ch"
#line 138 "trait.ch"
                                                            MetaRep("old_value", list_elem, old_value);
#line 138 "trait.ch"
#line 138 "trait.ch"
                                                        }
#line 138 "trait.ch"
                                                }
#line 138 "trait.ch"
                                                
#line 138 "trait.ch"
#line 139 "trait.ch"
                                                (searched=fathertree(the_while));
#line 139 "trait.ch"
                                                
#line 139 "trait.ch"
#line 140 "trait.ch"
                                                if ( !(((_inter = (PPTREE)searched,1) && 
#line 140 "trait.ch"
                                                            (NumberTree(_inter) == LIST) &&
#line 140 "trait.ch"
                                                            1)) ) {
#line 140 "trait.ch"
#line 141 "trait.ch"
                                                                    rank = ranktree(the_while);
#line 141 "trait.ch"
#line 142 "trait.ch"
                                                                    {
#line 142 "trait.ch"
                                                                        PPTREE _ptTree0= (PPTREE) 0,_ptRes0= (PPTREE) 0;
#line 142 "trait.ch"
                                                                        _ptRes0 = MakeTree(metalang::BEGIN, 1);
#line 142 "trait.ch"
                                                                        _ptTree0 = the_while;
#line 142 "trait.ch"
                                                                        {
#line 142 "trait.ch"
                                                                            PPTREE _ptTree1= (PPTREE) 0 ;
#line 142 "trait.ch"
                                                                            _ptTree1 = (PPTREE) 0;
#line 142 "trait.ch"
                                                                            _ptTree0 = AddList( _ptTree0,_ptTree1);
#line 142 "trait.ch"
                                                                        }
#line 142 "trait.ch"
                                                                        ReplaceTree(_ptRes0, 1, _ptTree0);
#line 142 "trait.ch"
                                                                        inter = _ptRes0;
#line 142 "trait.ch"
                                                                    }
#line 142 "trait.ch"
                                                                    
#line 142 "trait.ch"
#line 143 "trait.ch"
                                                                    replacetree(searched, rank, inter);
#line 143 "trait.ch"
#line 144 "trait.ch"
                                                                    ((_inter = (PPTREE)inter,1) && 
#line 144 "trait.ch"
                                                                        ((inter=SonTree(_inter,1)),1) &&
#line 144 "trait.ch"
                                                                        1);
#line 144 "trait.ch"
                                                                    ;
#line 144 "trait.ch"
#line 145 "trait.ch"
                                                                    
#line 145 "trait.ch"
#line 145 "trait.ch"
                                                                  } else 
#line 145 "trait.ch"
#line 146 "trait.ch"
                                                    (inter=searched);
#line 146 "trait.ch"
                                                    
#line 146 "trait.ch"
                                                
#line 146 "trait.ch"
#line 147 "trait.ch"
                                                (searched=fathertree(inter));
#line 147 "trait.ch"
                                                
#line 147 "trait.ch"
#line 148 "trait.ch"
                                                rank = ranktree(inter);
#line 148 "trait.ch"
#line 149 "trait.ch"
                                                {
#line 149 "trait.ch"
                                                    PPTREE _ptTree0=(PPTREE) 0;
#line 149 "trait.ch"
                                                    _ptTree0 = list_elem;
#line 149 "trait.ch"
                                                    {
#line 149 "trait.ch"
                                                        PPTREE _ptTree1= (PPTREE) 0 ;
#line 149 "trait.ch"
                                                        _ptTree0 = AddList( _ptTree0,inter);
#line 149 "trait.ch"
                                                    }
#line 149 "trait.ch"
                                                    inter = _ptTree0;
#line 149 "trait.ch"
                                                    ;
#line 149 "trait.ch"
                                                }
#line 149 "trait.ch"
                                                
#line 149 "trait.ch"
#line 150 "trait.ch"
                                                replacetree(searched, rank, inter);
#line 150 "trait.ch"
#line 151 "trait.ch"
                                                
#line 151 "trait.ch"
#line 151 "trait.ch"
                                             } else 
#line 151 "trait.ch"
#line 152 "trait.ch"
                                nb_addlist-- ;
#line 152 "trait.ch"
                            
#line 152 "trait.ch"
#line 153 "trait.ch"
                            
#line 153 "trait.ch"
#line 153 "trait.ch"
                        }
#line 153 "trait.ch"
#line 154 "trait.ch"
    
#line 154 "trait.ch"
#line 154 "trait.ch"
}
#line 154 "trait.ch"

#line 158 "trait.ch"

#line 158 "trait.ch"
void rep_addlist ( PTREE tree, PTREE new_value, PTREE old_value )
#line 158 "trait.ch"
{
#line 158 "trait.ch"
    register PPTREE _inter ;
#line 158 "trait.ch"

#line 158 "trait.ch"
#line 158 "trait.ch"
    int ptStackTree ;
    
#line 158 "trait.ch"
#line 158 "trait.ch"
    PPTREE  stackTree [1024];
    
#line 158 "trait.ch"
#line 158 "trait.ch"
    int _nextVal ;
    
#line 158 "trait.ch"
#line 163 "trait.ch"
    
    PTREE   inter, elem, rep, elem1, cond, list ;
#line 163 "trait.ch"
    
#line 163 "trait.ch"
#line 164 "trait.ch"
    int rank ;
    
#line 164 "trait.ch"
#line 166 "trait.ch"
    (inter=fathertree(tree));
#line 166 "trait.ch"
    
#line 166 "trait.ch"
#line 167 "trait.ch"
    while ( !(((_inter = (PPTREE)inter,1) && 
#line 167 "trait.ch"
                    (NumberTree(_inter) == metalang::DEFINE) &&
#line 167 "trait.ch"
                    1)) ) {
#line 167 "trait.ch"
#line 168 "trait.ch"
                            switch ( NumberTree(inter) ) {
#line 168 "trait.ch"
#line 169 "trait.ch"
                                case metalang::MAKETREE : 
#line 169 "trait.ch"
#line 169 "trait.ch"
                                _Case5 : 
#line 169 "trait.ch"
#line 169 "trait.ch"
                                    ;
#line 169 "trait.ch"
#line 169 "trait.ch"
                                    return ;
                                    
#line 169 "trait.ch"
#line 169 "trait.ch"
                                    goto _Case6 ;
                                    
#line 169 "trait.ch"
#line 170 "trait.ch"
                                case metalang::REPLACETREE : 
#line 170 "trait.ch"
#line 170 "trait.ch"
                                _Case6 : 
#line 170 "trait.ch"
#line 170 "trait.ch"
                                    ;
#line 170 "trait.ch"
#line 170 "trait.ch"
                                    return ;
                                    
#line 170 "trait.ch"
#line 170 "trait.ch"
                                    goto _Case7 ;
                                    
#line 170 "trait.ch"
#line 171 "trait.ch"
                                case metalang::ADDLIST : 
#line 171 "trait.ch"
#line 171 "trait.ch"
                                _Case7 : 
#line 171 "trait.ch"
#line 171 "trait.ch"
                                    ;
#line 171 "trait.ch"
#line 171 "trait.ch"
                                    return ;
                                    
#line 171 "trait.ch"
#line 171 "trait.ch"
                                    goto _Case8 ;
                                    
#line 171 "trait.ch"
#line 172 "trait.ch"
                                case metalang::RETURN : 
#line 172 "trait.ch"
#line 172 "trait.ch"
                                _Case8 : 
#line 172 "trait.ch"
#line 172 "trait.ch"
                                    ;
#line 172 "trait.ch"
#line 172 "trait.ch"
                                    return ;
                                    
#line 172 "trait.ch"
#line 172 "trait.ch"
                                    goto _Case9 ;
                                    
#line 172 "trait.ch"
#line 173 "trait.ch"
                                default : 
#line 173 "trait.ch"
#line 173 "trait.ch"
                                _Case9 : 
#line 173 "trait.ch"
#line 173 "trait.ch"
                                    ;
#line 173 "trait.ch"
#line 173 "trait.ch"
                                    (inter=fathertree(inter));
#line 173 "trait.ch"
                                    
#line 173 "trait.ch"
                            }
#line 173 "trait.ch"
                            
#line 173 "trait.ch"
#line 175 "trait.ch"
                            
#line 175 "trait.ch"
#line 175 "trait.ch"
                          }
#line 175 "trait.ch"
#line 176 "trait.ch"
    replace(old_value, tree, CopyTree(new_value));
#line 176 "trait.ch"
#line 177 "trait.ch"
    {
#line 177 "trait.ch"
        PPTREE _ptTree0= (PPTREE) 0,_ptRes0= (PPTREE) 0;
#line 177 "trait.ch"
        _ptRes0 = MakeTree(metalang::ASIT, 1);
#line 177 "trait.ch"
        {
#line 177 "trait.ch"
            PPTREE _ptTree1= (PPTREE) 0,_ptRes1= (PPTREE) 0;
#line 177 "trait.ch"
            _ptRes1 = MakeTree(LIST, 2);
#line 177 "trait.ch"
            _ptTree1 = StoreRef(MakeString(Value(old_value)));
#line 177 "trait.ch"
            ReplaceTree(_ptRes1, 1, _ptTree1);
#line 177 "trait.ch"
            _ptTree0 = _ptRes1;
#line 177 "trait.ch"
        }
#line 177 "trait.ch"
        ReplaceTree(_ptRes0, 1, _ptTree0);
#line 177 "trait.ch"
        cond = _ptRes0;
#line 177 "trait.ch"
    }
#line 177 "trait.ch"
    
#line 177 "trait.ch"
#line 178 "trait.ch"
    (elem1=CopyTree(new_value));
#line 178 "trait.ch"
    
#line 178 "trait.ch"
#line 179 "trait.ch"
    (list=CopyTree(old_value));
#line 179 "trait.ch"
    
#line 179 "trait.ch"
#line 180 "trait.ch"
    {
#line 180 "trait.ch"
        /* [ metalang::IF
            [ META "cond"]
            [ metalang::EQUAL
                [ META "elem1"]
                [ metalang::FUNC
                    [ metalang::IDENT "SonTree"]
                    [ LIST 
                        [ META "elem1"]
                        [ metalang::NUMB "2"]
                    ]
                ]
            ]
            [ metalang::EQUAL
                [ META "list"]
                [ META "elem1"]
            ]
           ]
#line 180 "trait.ch"
        */
#line 180 "trait.ch"
        {   ptStackTree = 0 ;
#line 180 "trait.ch"
            TheConstructor(stackTree,ptStackTree,-2,MakeString("cond"),META,1,-2,MakeString("elem1"),META,1,-2,MakeString("SonTree"),metalang::IDENT,1,
                -2,MakeString("elem1"),META,1,-2,MakeString("2"),metalang::NUMB,1,-4,LIST,2,LIST,2,metalang::FUNC,2,metalang::EQUAL,2,-2,MakeString("list"),META,1,
                -2,MakeString("elem1"),META,1,metalang::EQUAL,2,metalang::IF,3,-3) ;
            elem = PopTree ;
#line 180 "trait.ch"
        }   {
#line 180 "trait.ch"
                register PPTREE _inter ;
#line 180 "trait.ch"
            
#line 180 "trait.ch"
#line 180 "trait.ch"
                MetaRep("cond", elem, cond);
#line 180 "trait.ch"
#line 180 "trait.ch"
                MetaRep("elem1", elem, elem1);
#line 180 "trait.ch"
#line 180 "trait.ch"
                MetaRep("list", elem, list);
#line 180 "trait.ch"
#line 180 "trait.ch"
            }
#line 180 "trait.ch"
    }
#line 180 "trait.ch"
    
#line 180 "trait.ch"
#line 186 "trait.ch"
    (inter=tree);
#line 186 "trait.ch"
    
#line 186 "trait.ch"
#line 187 "trait.ch"
    (rep=fathertree(inter));
#line 187 "trait.ch"
    
#line 187 "trait.ch"
#line 188 "trait.ch"
    if ( !(((_inter = (PPTREE)rep,1) && 
#line 188 "trait.ch"
                (NumberTree(_inter) == LIST) &&
#line 188 "trait.ch"
                1)) ) {
#line 188 "trait.ch"
#line 189 "trait.ch"
                        rank = ranktree(inter);
#line 189 "trait.ch"
#line 190 "trait.ch"
                        {
#line 190 "trait.ch"
                            PPTREE _ptTree0= (PPTREE) 0,_ptRes0= (PPTREE) 0;
#line 190 "trait.ch"
                            _ptRes0 = MakeTree(metalang::BEGIN, 1);
#line 190 "trait.ch"
                            _ptTree0 = inter;
#line 190 "trait.ch"
                            {
#line 190 "trait.ch"
                                PPTREE _ptTree1= (PPTREE) 0 ;
#line 190 "trait.ch"
                                _ptTree1 = (PPTREE) 0;
#line 190 "trait.ch"
                                _ptTree0 = AddList( _ptTree0,_ptTree1);
#line 190 "trait.ch"
                            }
#line 190 "trait.ch"
                            ReplaceTree(_ptRes0, 1, _ptTree0);
#line 190 "trait.ch"
                            inter = _ptRes0;
#line 190 "trait.ch"
                        }
#line 190 "trait.ch"
                        
#line 190 "trait.ch"
#line 191 "trait.ch"
                        replacetree(rep, rank, inter);
#line 191 "trait.ch"
#line 192 "trait.ch"
                        ((_inter = (PPTREE)inter,1) && 
#line 192 "trait.ch"
                            ((inter=SonTree(_inter,1)),1) &&
#line 192 "trait.ch"
                            1);
#line 192 "trait.ch"
                        ;
#line 192 "trait.ch"
#line 193 "trait.ch"
                        
#line 193 "trait.ch"
#line 193 "trait.ch"
                      } else 
#line 193 "trait.ch"
#line 194 "trait.ch"
        (inter=rep);
#line 194 "trait.ch"
        
#line 194 "trait.ch"
    
#line 194 "trait.ch"
#line 195 "trait.ch"
    ((_inter = (PPTREE)inter,1) && 
#line 195 "trait.ch"
        ((rep=SonTree(_inter,2)),1) &&
#line 195 "trait.ch"
        1);
#line 195 "trait.ch"
    ;
#line 195 "trait.ch"
#line 196 "trait.ch"
    {
#line 196 "trait.ch"
        PPTREE _ptTree0= (PPTREE) 0,_sonTree0= (PPTREE) 0 ;
#line 196 "trait.ch"
        _ptTree0 = elem;
#line 196 "trait.ch"
        {
#line 196 "trait.ch"
            PPTREE _ptTree1= (PPTREE) 0 ;
#line 196 "trait.ch"
            _ptTree0 = AddList( _ptTree0,rep);
#line 196 "trait.ch"
        }
#line 196 "trait.ch"
        ReplaceTree(inter, 2, _ptTree0);
#line 196 "trait.ch"
    }
#line 196 "trait.ch"
    
#line 196 "trait.ch"
#line 197 "trait.ch"
    useValue = 1 ;
#line 197 "trait.ch"
#line 198 "trait.ch"
    
#line 198 "trait.ch"
#line 198 "trait.ch"
}
#line 198 "trait.ch"

#line 198 "trait.ch"
#line 198 "trait.ch"
static void trait_Anchor () { int i = 1;} 
#line 198 "trait.ch"
/*Well done my boy */ 

