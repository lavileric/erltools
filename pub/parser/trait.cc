
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
#endif
#ifdef INCONNU
#line 28 "trait.ch"
#line 28 "trait.ch"
PTREE   for_elem ;
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
            [ META "stat"]
            [ META "condition"]
           ]
#line 74 "trait.ch"
        */
#line 74 "trait.ch"
        {   ptStackTree = 0 ;
#line 74 "trait.ch"
            TheConstructor(stackTree,ptStackTree,-2,MakeString("stat"),META,1,-2,MakeString("condition"),META,1,metalang::REPEAT,2,-3) ;
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
                            /* [ metalang::DECLARE [ META "position"]]
#line 85 "trait.ch"
                            */
#line 85 "trait.ch"
                            {   ptStackTree = 0 ;
#line 85 "trait.ch"
                                TheConstructor(stackTree,ptStackTree,-2,MakeString("position"),META,1,metalang::DECLARE,1,-3) ;
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
#line 86 "trait.ch"
                        ((_inter = (PPTREE)tree,1) && 
#line 86 "trait.ch"
                            ((elem=SonTree(_inter,2)),1) &&
#line 86 "trait.ch"
                            1);
#line 86 "trait.ch"
                        ;
#line 86 "trait.ch"
#line 87 "trait.ch"
                        {
#line 87 "trait.ch"
                            PPTREE _ptTree0= (PPTREE) 0,_sonTree0= (PPTREE) 0 ;
#line 87 "trait.ch"
                            _ptTree0 = declaration;
#line 87 "trait.ch"
                            {
#line 87 "trait.ch"
                                PPTREE _ptTree1= (PPTREE) 0 ;
#line 87 "trait.ch"
                                _ptTree0 = AddList( _ptTree0,elem);
#line 87 "trait.ch"
                            }
#line 87 "trait.ch"
                            ReplaceTree(tree, 2, _ptTree0);
#line 87 "trait.ch"
                        }
#line 87 "trait.ch"
#line 87 "trait.ch"
#line 88 "trait.ch"
#line 88 "trait.ch"
#line 88 "trait.ch"
                       }
#line 88 "trait.ch"
#line 89 "trait.ch"
#line 89 "trait.ch"
#line 89 "trait.ch"
}
#line 89 "trait.ch"

#line 93 "trait.ch"
#line 93 "trait.ch"
void traitement_while ( PTREE tree )
#line 93 "trait.ch"
{
#line 93 "trait.ch"
#line 93 "trait.ch"
    PTREE   _Baum0 ;
#line 93 "trait.ch"
#line 93 "trait.ch"
#line 93 "trait.ch"
    int ptStackTree ;
#line 93 "trait.ch"
#line 93 "trait.ch"
    PPTREE  stackTree [1024];
#line 93 "trait.ch"
#line 93 "trait.ch"
    int _nextVal ;
#line 93 "trait.ch"
#line 97 "trait.ch"
    {
#line 97 "trait.ch"
        /* [ metalang::ADDLIST
            [ LIST 
                [ META "list"]
                [ META "elem"]
            ]
           ]
#line 97 "trait.ch"
        */
#line 97 "trait.ch"
        {   ptStackTree = 0 ;
#line 97 "trait.ch"
            TheConstructor(stackTree,ptStackTree,-2,MakeString("list"),META,1,-2,MakeString("elem"),META,1,-4,LIST,2,LIST,2,metalang::ADDLIST,1,-3) ;
            _Baum0 = PopTree ;
#line 97 "trait.ch"
        }   }
#line 97 "trait.ch"
#line 97 "trait.ch"
#line 97 "trait.ch"
    {
#line 97 "trait.ch"
#line 97 "trait.ch"
        ItPtree _iterator1 (tree, _Baum0) ;
#line 97 "trait.ch"
#line 97 "trait.ch"
        PPTREE  _for_elem ;
#line 97 "trait.ch"
#line 97 "trait.ch"
        _iterator1.AllSearch(1);
#line 97 "trait.ch"
#line 97 "trait.ch"
        while ( _for_elem = _iterator1++ ) {
#line 97 "trait.ch"
#line 97 "trait.ch"
            {
#line 97 "trait.ch"
#line 98 "trait.ch"
                traitement_addlist(for_elem);
#line 98 "trait.ch"
#line 99 "trait.ch"
                goto for_continue1 ;
#line 99 "trait.ch"
#line 100 "trait.ch"
#line 100 "trait.ch"
#line 100 "trait.ch"
            }
#line 100 "trait.ch"
#line 100 "trait.ch"
            _iterator1.Current(_for_elem);
#line 100 "trait.ch"
#line 100 "trait.ch"
            continue ;
#line 100 "trait.ch"
#line 100 "trait.ch"
        for_continue1 : 
#line 100 "trait.ch"
#line 100 "trait.ch"
            _iterator1.Current(_for_elem);
#line 100 "trait.ch"
#line 100 "trait.ch"
            _iterator1.SkipSon(1);
#line 100 "trait.ch"
#line 100 "trait.ch"
            continue ;
#line 100 "trait.ch"
#line 100 "trait.ch"
        for_break1 : 
#line 100 "trait.ch"
#line 100 "trait.ch"
            break ;
#line 100 "trait.ch"
#line 100 "trait.ch"
#line 100 "trait.ch"
#line 100 "trait.ch"
        }
#line 100 "trait.ch"
#line 100 "trait.ch"
#line 100 "trait.ch"
#line 100 "trait.ch"
    }
#line 100 "trait.ch"
#line 101 "trait.ch"
#line 101 "trait.ch"
#line 101 "trait.ch"
}
#line 101 "trait.ch"

static PTREE    theName, theOldName ;
#line 101 "trait.ch"
static int  useValue ;

#line 109 "trait.ch"
#line 109 "trait.ch"
void traitement_addlist ( PTREE tree )
#line 109 "trait.ch"
{
#line 109 "trait.ch"
    register PPTREE _inter ;
#line 109 "trait.ch"
#line 109 "trait.ch"
#line 109 "trait.ch"
    PTREE   _Baum0 ;
#line 109 "trait.ch"
#line 109 "trait.ch"
#line 109 "trait.ch"
    int ptStackTree ;
#line 109 "trait.ch"
#line 109 "trait.ch"
    PPTREE  stackTree [1024];
#line 109 "trait.ch"
#line 109 "trait.ch"
    int _nextVal ;
#line 109 "trait.ch"
#line 112 "trait.ch"
    PTREE   inter, searched, new_value, old_value, list_elem ;
#line 112 "trait.ch"
#line 112 "trait.ch"
#line 113 "trait.ch"
    int rank ;
#line 113 "trait.ch"
#line 114 "trait.ch"
    char    name [20];
#line 114 "trait.ch"
#line 116 "trait.ch"
    find_elem = 0 ;
#line 116 "trait.ch"
#line 117 "trait.ch"
    {
#line 117 "trait.ch"
        PPTREE _ptTree0= (PPTREE) 0,_ptRes0= (PPTREE) 0;
#line 117 "trait.ch"
        _ptRes0 = MakeTree(metalang::IDENT, 1);
#line 117 "trait.ch"
        _ptTree0 = StoreRef(MakeString(Value(tree)));
#line 117 "trait.ch"
        ReplaceTree(_ptRes0, 1, _ptTree0);
#line 117 "trait.ch"
        old_value = _ptRes0;
#line 117 "trait.ch"
    }
#line 117 "trait.ch"
#line 117 "trait.ch"
#line 118 "trait.ch"
    {
#line 118 "trait.ch"
        /* [ metalang::EQUAL
            [ META "old_value"]
            [ META "aff"]
           ]
#line 118 "trait.ch"
        */
#line 118 "trait.ch"
        {   ptStackTree = 0 ;
#line 118 "trait.ch"
            TheConstructor(stackTree,ptStackTree,-2,MakeString("old_value"),META,1,-2,MakeString("aff"),META,1,metalang::EQUAL,2,-3) ;
            _Baum0 = PopTree ;
#line 118 "trait.ch"
        }   {
#line 118 "trait.ch"
                register PPTREE _inter ;
#line 118 "trait.ch"
#line 118 "trait.ch"
#line 118 "trait.ch"
                MetaRep("old_value", _Baum0, old_value);
#line 118 "trait.ch"
#line 118 "trait.ch"
            }
#line 118 "trait.ch"
    }
#line 118 "trait.ch"
#line 118 "trait.ch"
#line 118 "trait.ch"
    {
#line 118 "trait.ch"
#line 118 "trait.ch"
        ItPtree _iterator1 (the_while, _Baum0) ;
#line 118 "trait.ch"
#line 118 "trait.ch"
        PPTREE  _for_elem ;
#line 118 "trait.ch"
#line 118 "trait.ch"
        _iterator1.AllSearch(1);
#line 118 "trait.ch"
#line 119 "trait.ch"
        while ( _for_elem = _iterator1++ ) {
#line 119 "trait.ch"
#line 119 "trait.ch"
            find_elem++ ;
#line 119 "trait.ch"
#line 119 "trait.ch"
            _iterator1.Current(_for_elem);
#line 119 "trait.ch"
#line 119 "trait.ch"
            continue ;
#line 119 "trait.ch"
#line 119 "trait.ch"
        for_continue1 : 
#line 119 "trait.ch"
#line 119 "trait.ch"
            _iterator1.Current(_for_elem);
#line 119 "trait.ch"
#line 119 "trait.ch"
            _iterator1.SkipSon(1);
#line 119 "trait.ch"
#line 119 "trait.ch"
            continue ;
#line 119 "trait.ch"
#line 119 "trait.ch"
        for_break1 : 
#line 119 "trait.ch"
#line 119 "trait.ch"
            break ;
#line 119 "trait.ch"
#line 119 "trait.ch"
#line 119 "trait.ch"
#line 119 "trait.ch"
        }
#line 119 "trait.ch"
#line 119 "trait.ch"
#line 119 "trait.ch"
#line 119 "trait.ch"
    }
#line 119 "trait.ch"
#line 121 "trait.ch"
    if ( !find_elem ) {
#line 121 "trait.ch"
#line 121 "trait.ch"
                            PTREE   _Baum1 ;
#line 121 "trait.ch"
#line 121 "trait.ch"
#line 122 "trait.ch"
                            nb_addlist++ ;
#line 122 "trait.ch"
#line 123 "trait.ch"
                            sprintf(name, "%s%d", "_addlist", nb_addlist);
#line 123 "trait.ch"
#line 124 "trait.ch"
                            {
#line 124 "trait.ch"
                                PPTREE _ptTree0= (PPTREE) 0,_ptRes0= (PPTREE) 0;
#line 124 "trait.ch"
                                _ptRes0 = MakeTree(metalang::IDENT, 1);
#line 124 "trait.ch"
                                _ptTree0 = StoreRef(MakeString(name));
#line 124 "trait.ch"
                                ReplaceTree(_ptRes0, 1, _ptTree0);
#line 124 "trait.ch"
                                new_value = _ptRes0;
#line 124 "trait.ch"
                            }
#line 124 "trait.ch"
#line 124 "trait.ch"
#line 125 "trait.ch"
                            useValue = 0 ;
#line 125 "trait.ch"
#line 126 "trait.ch"
                            (theName=new_value);
#line 126 "trait.ch"
#line 126 "trait.ch"
#line 127 "trait.ch"
                            (theOldName=old_value);
#line 127 "trait.ch"
#line 127 "trait.ch"
#line 128 "trait.ch"
                            {
#line 128 "trait.ch"
                                /* [ metalang::ADDLIST
                                    [ LIST 
                                        [ META "meta0"]
                                        [ META "list"]
                                    ]
                                   ]
#line 128 "trait.ch"
                                */
#line 128 "trait.ch"
                                {   ptStackTree = 0 ;
#line 128 "trait.ch"
                                    TheConstructor(stackTree,ptStackTree,-2,MakeString("meta0"),META,1,-2,MakeString("list"),META,1,-4,LIST,2,LIST,2,metalang::ADDLIST,1,-3) ;
                                    _Baum1 = PopTree ;
#line 128 "trait.ch"
                                }   {
#line 128 "trait.ch"
                                        register PPTREE _inter ;
#line 128 "trait.ch"
#line 128 "trait.ch"
#line 128 "trait.ch"
                                        MetaRep("meta0", _Baum1, CopyTree(old_value));
#line 128 "trait.ch"
#line 128 "trait.ch"
                                    }
#line 128 "trait.ch"
                            }
#line 128 "trait.ch"
#line 128 "trait.ch"
#line 128 "trait.ch"
                            {
#line 128 "trait.ch"
#line 128 "trait.ch"
                                ItPtree _iterator2 (the_while, _Baum1) ;
#line 128 "trait.ch"
#line 128 "trait.ch"
                                PPTREE  _for_elem ;
#line 128 "trait.ch"
#line 128 "trait.ch"
                                _iterator2.AllSearch(1);
#line 128 "trait.ch"
#line 129 "trait.ch"
                                while ( _for_elem = _iterator2++ ) {
#line 129 "trait.ch"
#line 129 "trait.ch"
                                    rep_addlist(for_elem, theName, theOldName);
#line 129 "trait.ch"
#line 129 "trait.ch"
                                    _iterator2.Current(_for_elem);
#line 129 "trait.ch"
#line 129 "trait.ch"
                                    continue ;
#line 129 "trait.ch"
#line 129 "trait.ch"
                                for_continue2 : 
#line 129 "trait.ch"
#line 129 "trait.ch"
                                    _iterator2.Current(_for_elem);
#line 129 "trait.ch"
#line 129 "trait.ch"
                                    _iterator2.SkipSon(1);
#line 129 "trait.ch"
#line 129 "trait.ch"
                                    continue ;
#line 129 "trait.ch"
#line 129 "trait.ch"
                                for_break2 : 
#line 129 "trait.ch"
#line 129 "trait.ch"
                                    break ;
#line 129 "trait.ch"
#line 129 "trait.ch"
#line 129 "trait.ch"
#line 129 "trait.ch"
                                }
#line 129 "trait.ch"
#line 129 "trait.ch"
#line 129 "trait.ch"
#line 129 "trait.ch"
                            }
#line 129 "trait.ch"
#line 131 "trait.ch"
                            if ( useValue ) {
#line 131 "trait.ch"
#line 132 "trait.ch"
                                                {
#line 132 "trait.ch"
                                                    /* [ metalang::EQUAL
                                                        [ META "new_value"]
                                                        [ META "old_value"]
                                                       ]
#line 132 "trait.ch"
                                                    */
#line 132 "trait.ch"
                                                    {   ptStackTree = 0 ;
#line 132 "trait.ch"
                                                        TheConstructor(stackTree,ptStackTree,-2,MakeString("new_value"),META,1,-2,MakeString("old_value"),META,1,metalang::EQUAL,2,-3) ;
                                                        list_elem = PopTree ;
#line 132 "trait.ch"
                                                    }   {
#line 132 "trait.ch"
                                                            register PPTREE _inter ;
#line 132 "trait.ch"
#line 132 "trait.ch"
#line 132 "trait.ch"
                                                            MetaRep("new_value", list_elem, new_value);
#line 132 "trait.ch"
#line 132 "trait.ch"
                                                            MetaRep("old_value", list_elem, old_value);
#line 132 "trait.ch"
#line 132 "trait.ch"
                                                        }
#line 132 "trait.ch"
                                                }
#line 132 "trait.ch"
#line 132 "trait.ch"
#line 133 "trait.ch"
                                                (searched=fathertree(the_while));
#line 133 "trait.ch"
#line 133 "trait.ch"
#line 134 "trait.ch"
                                                if ( !(((_inter = (PPTREE)searched,1) && 
#line 134 "trait.ch"
                                                            (NumberTree(_inter) == LIST) &&
#line 134 "trait.ch"
                                                            1)) ) {
#line 134 "trait.ch"
#line 135 "trait.ch"
                                                                    rank = ranktree(the_while);
#line 135 "trait.ch"
#line 136 "trait.ch"
                                                                    {
#line 136 "trait.ch"
                                                                        PPTREE _ptTree0= (PPTREE) 0,_ptRes0= (PPTREE) 0;
#line 136 "trait.ch"
                                                                        _ptRes0 = MakeTree(metalang::BEGIN, 1);
#line 136 "trait.ch"
                                                                        _ptTree0 = the_while;
#line 136 "trait.ch"
                                                                        {
#line 136 "trait.ch"
PPTREE _ptTree1= (PPTREE) 0 ;
#line 136 "trait.ch"
_ptTree1 = (PPTREE) 0;
#line 136 "trait.ch"
_ptTree0 = AddList( _ptTree0,_ptTree1);
#line 136 "trait.ch"
                                                                        }
#line 136 "trait.ch"
                                                                        ReplaceTree(_ptRes0, 1, _ptTree0);
#line 136 "trait.ch"
                                                                        inter = _ptRes0;
#line 136 "trait.ch"
                                                                    }
#line 136 "trait.ch"
#line 136 "trait.ch"
#line 137 "trait.ch"
                                                                    replacetree(searched, rank, inter);
#line 137 "trait.ch"
#line 138 "trait.ch"
                                                                    ((_inter = (PPTREE)inter,1) && 
#line 138 "trait.ch"
                                                                        ((inter=SonTree(_inter,1)),1) &&
#line 138 "trait.ch"
                                                                        1);
#line 138 "trait.ch"
                                                                    ;
#line 138 "trait.ch"
#line 139 "trait.ch"
#line 139 "trait.ch"
#line 139 "trait.ch"
                                                                  } else 
#line 139 "trait.ch"
#line 140 "trait.ch"
                                                    (inter=searched);
#line 140 "trait.ch"
#line 140 "trait.ch"
#line 140 "trait.ch"
#line 141 "trait.ch"
                                                (searched=fathertree(inter));
#line 141 "trait.ch"
#line 141 "trait.ch"
#line 142 "trait.ch"
                                                rank = ranktree(inter);
#line 142 "trait.ch"
#line 143 "trait.ch"
                                                {
#line 143 "trait.ch"
                                                    PPTREE _ptTree0=(PPTREE) 0;
#line 143 "trait.ch"
                                                    _ptTree0 = list_elem;
#line 143 "trait.ch"
                                                    {
#line 143 "trait.ch"
                                                        PPTREE _ptTree1= (PPTREE) 0 ;
#line 143 "trait.ch"
                                                        _ptTree0 = AddList( _ptTree0,inter);
#line 143 "trait.ch"
                                                    }
#line 143 "trait.ch"
                                                    inter = _ptTree0;
#line 143 "trait.ch"
                                                    ;
#line 143 "trait.ch"
                                                }
#line 143 "trait.ch"
#line 143 "trait.ch"
#line 144 "trait.ch"
                                                replacetree(searched, rank, inter);
#line 144 "trait.ch"
#line 145 "trait.ch"
#line 145 "trait.ch"
#line 145 "trait.ch"
                                             } else 
#line 145 "trait.ch"
#line 146 "trait.ch"
                                nb_addlist-- ;
#line 146 "trait.ch"
#line 146 "trait.ch"
#line 147 "trait.ch"
#line 147 "trait.ch"
#line 147 "trait.ch"
                        }
#line 147 "trait.ch"
#line 148 "trait.ch"
#line 148 "trait.ch"
#line 148 "trait.ch"
}
#line 148 "trait.ch"

#line 152 "trait.ch"

#line 152 "trait.ch"
void rep_addlist ( PTREE tree, PTREE new_value, PTREE old_value )
#line 152 "trait.ch"
{
#line 152 "trait.ch"
    register PPTREE _inter ;
#line 152 "trait.ch"
#line 152 "trait.ch"
#line 152 "trait.ch"
    int ptStackTree ;
#line 152 "trait.ch"
#line 152 "trait.ch"
    PPTREE  stackTree [1024];
#line 152 "trait.ch"
#line 152 "trait.ch"
    int _nextVal ;
#line 152 "trait.ch"
#line 157 "trait.ch"
    PTREE   inter, elem, rep, elem1, cond, list ;
#line 157 "trait.ch"
#line 157 "trait.ch"
#line 158 "trait.ch"
    int rank ;
#line 158 "trait.ch"
#line 160 "trait.ch"
    (inter=fathertree(tree));
#line 160 "trait.ch"
#line 160 "trait.ch"
#line 161 "trait.ch"
    while ( !(((_inter = (PPTREE)inter,1) && 
#line 161 "trait.ch"
                    (NumberTree(_inter) == metalang::DEFINE) &&
#line 161 "trait.ch"
                    1)) ) {
#line 161 "trait.ch"
#line 162 "trait.ch"
                            switch ( NumberTree(inter) ) {
#line 162 "trait.ch"
#line 163 "trait.ch"
                                case metalang::MAKETREE : 
#line 163 "trait.ch"
#line 163 "trait.ch"
                                _Case5 : 
#line 163 "trait.ch"
#line 163 "trait.ch"
                                    ;
#line 163 "trait.ch"
#line 163 "trait.ch"
                                    return ;
#line 163 "trait.ch"
#line 163 "trait.ch"
                                    goto _Case6 ;
#line 163 "trait.ch"
#line 164 "trait.ch"
                                case metalang::REPLACETREE : 
#line 164 "trait.ch"
#line 164 "trait.ch"
                                _Case6 : 
#line 164 "trait.ch"
#line 164 "trait.ch"
                                    ;
#line 164 "trait.ch"
#line 164 "trait.ch"
                                    return ;
#line 164 "trait.ch"
#line 164 "trait.ch"
                                    goto _Case7 ;
#line 164 "trait.ch"
#line 165 "trait.ch"
                                case metalang::ADDLIST : 
#line 165 "trait.ch"
#line 165 "trait.ch"
                                _Case7 : 
#line 165 "trait.ch"
#line 165 "trait.ch"
                                    ;
#line 165 "trait.ch"
#line 165 "trait.ch"
                                    return ;
#line 165 "trait.ch"
#line 165 "trait.ch"
                                    goto _Case8 ;
#line 165 "trait.ch"
#line 166 "trait.ch"
                                case metalang::RETURN : 
#line 166 "trait.ch"
#line 166 "trait.ch"
                                _Case8 : 
#line 166 "trait.ch"
#line 166 "trait.ch"
                                    ;
#line 166 "trait.ch"
#line 166 "trait.ch"
                                    return ;
#line 166 "trait.ch"
#line 166 "trait.ch"
                                    goto _Case9 ;
#line 166 "trait.ch"
#line 167 "trait.ch"
                                default : 
#line 167 "trait.ch"
#line 167 "trait.ch"
                                _Case9 : 
#line 167 "trait.ch"
#line 167 "trait.ch"
                                    ;
#line 167 "trait.ch"
#line 167 "trait.ch"
                                    (inter=fathertree(inter));
#line 167 "trait.ch"
#line 167 "trait.ch"
                            }
#line 167 "trait.ch"
#line 167 "trait.ch"
#line 169 "trait.ch"
#line 169 "trait.ch"
#line 169 "trait.ch"
                          }
#line 169 "trait.ch"
#line 170 "trait.ch"
    replace(old_value, tree, CopyTree(new_value));
#line 170 "trait.ch"
#line 171 "trait.ch"
    {
#line 171 "trait.ch"
        PPTREE _ptTree0= (PPTREE) 0,_ptRes0= (PPTREE) 0;
#line 171 "trait.ch"
        _ptRes0 = MakeTree(metalang::ASIT, 1);
#line 171 "trait.ch"
        {
#line 171 "trait.ch"
            PPTREE _ptTree1= (PPTREE) 0,_ptRes1= (PPTREE) 0;
#line 171 "trait.ch"
            _ptRes1 = MakeTree(LIST, 2);
#line 171 "trait.ch"
            _ptTree1 = StoreRef(MakeString(Value(old_value)));
#line 171 "trait.ch"
            ReplaceTree(_ptRes1, 1, _ptTree1);
#line 171 "trait.ch"
            _ptTree0 = _ptRes1;
#line 171 "trait.ch"
        }
#line 171 "trait.ch"
        ReplaceTree(_ptRes0, 1, _ptTree0);
#line 171 "trait.ch"
        cond = _ptRes0;
#line 171 "trait.ch"
    }
#line 171 "trait.ch"
#line 171 "trait.ch"
#line 172 "trait.ch"
    (elem1=CopyTree(new_value));
#line 172 "trait.ch"
#line 172 "trait.ch"
#line 173 "trait.ch"
    (list=CopyTree(old_value));
#line 173 "trait.ch"
#line 173 "trait.ch"
#line 174 "trait.ch"
    {
#line 174 "trait.ch"
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
#line 174 "trait.ch"
        */
#line 174 "trait.ch"
        {   ptStackTree = 0 ;
#line 174 "trait.ch"
            TheConstructor(stackTree,ptStackTree,-2,MakeString("cond"),META,1,-2,MakeString("elem1"),META,1,-2,MakeString("SonTree"),metalang::IDENT,1,
                -2,MakeString("elem1"),META,1,-2,MakeString("2"),metalang::NUMB,1,-4,LIST,2,LIST,2,metalang::FUNC,2,metalang::EQUAL,2,-2,MakeString("list"),META,1,
                -2,MakeString("elem1"),META,1,metalang::EQUAL,2,metalang::IF,3,-3) ;
            elem = PopTree ;
#line 174 "trait.ch"
        }   {
#line 174 "trait.ch"
                register PPTREE _inter ;
#line 174 "trait.ch"
#line 174 "trait.ch"
#line 174 "trait.ch"
                MetaRep("cond", elem, cond);
#line 174 "trait.ch"
#line 174 "trait.ch"
                MetaRep("elem1", elem, elem1);
#line 174 "trait.ch"
#line 174 "trait.ch"
                MetaRep("list", elem, list);
#line 174 "trait.ch"
#line 174 "trait.ch"
            }
#line 174 "trait.ch"
    }
#line 174 "trait.ch"
#line 174 "trait.ch"
#line 180 "trait.ch"
    (inter=tree);
#line 180 "trait.ch"
#line 180 "trait.ch"
#line 181 "trait.ch"
    (rep=fathertree(inter));
#line 181 "trait.ch"
#line 181 "trait.ch"
#line 182 "trait.ch"
    if ( !(((_inter = (PPTREE)rep,1) && 
#line 182 "trait.ch"
                (NumberTree(_inter) == LIST) &&
#line 182 "trait.ch"
                1)) ) {
#line 182 "trait.ch"
#line 183 "trait.ch"
                        rank = ranktree(inter);
#line 183 "trait.ch"
#line 184 "trait.ch"
                        {
#line 184 "trait.ch"
                            PPTREE _ptTree0= (PPTREE) 0,_ptRes0= (PPTREE) 0;
#line 184 "trait.ch"
                            _ptRes0 = MakeTree(metalang::BEGIN, 1);
#line 184 "trait.ch"
                            _ptTree0 = inter;
#line 184 "trait.ch"
                            {
#line 184 "trait.ch"
                                PPTREE _ptTree1= (PPTREE) 0 ;
#line 184 "trait.ch"
                                _ptTree1 = (PPTREE) 0;
#line 184 "trait.ch"
                                _ptTree0 = AddList( _ptTree0,_ptTree1);
#line 184 "trait.ch"
                            }
#line 184 "trait.ch"
                            ReplaceTree(_ptRes0, 1, _ptTree0);
#line 184 "trait.ch"
                            inter = _ptRes0;
#line 184 "trait.ch"
                        }
#line 184 "trait.ch"
#line 184 "trait.ch"
#line 185 "trait.ch"
                        replacetree(rep, rank, inter);
#line 185 "trait.ch"
#line 186 "trait.ch"
                        ((_inter = (PPTREE)inter,1) && 
#line 186 "trait.ch"
                            ((inter=SonTree(_inter,1)),1) &&
#line 186 "trait.ch"
                            1);
#line 186 "trait.ch"
                        ;
#line 186 "trait.ch"
#line 187 "trait.ch"
#line 187 "trait.ch"
#line 187 "trait.ch"
                      } else 
#line 187 "trait.ch"
#line 188 "trait.ch"
        (inter=rep);
#line 188 "trait.ch"
#line 188 "trait.ch"
#line 188 "trait.ch"
#line 189 "trait.ch"
    ((_inter = (PPTREE)inter,1) && 
#line 189 "trait.ch"
        ((rep=SonTree(_inter,2)),1) &&
#line 189 "trait.ch"
        1);
#line 189 "trait.ch"
    ;
#line 189 "trait.ch"
#line 190 "trait.ch"
    {
#line 190 "trait.ch"
        PPTREE _ptTree0= (PPTREE) 0,_sonTree0= (PPTREE) 0 ;
#line 190 "trait.ch"
        _ptTree0 = elem;
#line 190 "trait.ch"
        {
#line 190 "trait.ch"
            PPTREE _ptTree1= (PPTREE) 0 ;
#line 190 "trait.ch"
            _ptTree0 = AddList( _ptTree0,rep);
#line 190 "trait.ch"
        }
#line 190 "trait.ch"
        ReplaceTree(inter, 2, _ptTree0);
#line 190 "trait.ch"
    }
#line 190 "trait.ch"
#line 190 "trait.ch"
#line 191 "trait.ch"
    useValue = 1 ;
#line 191 "trait.ch"
#line 192 "trait.ch"
#line 192 "trait.ch"
#line 192 "trait.ch"
}
#line 192 "trait.ch"

#line 192 "trait.ch"
/*Well done my boy */ 

