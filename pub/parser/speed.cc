
#line 28 "speed.ch"
/*************************************************************************/
#line 28 "speed.ch"
/*                                                                       */
#line 28 "speed.ch"
/*        Produced by Metachop version 2.0  -    1989-1995               */
#line 28 "speed.ch"
/*     Tree      Meta     Chopper      developped    by                  */
#line 28 "speed.ch"
/*                  Eric Lavillonniere                                   */
#line 28 "speed.ch"
/*                                                                       */
#line 28 "speed.ch"
/*************************************************************************/
#line 28 "speed.ch"

#line 28 "speed.ch"
#include "token.h"
#line 28 "speed.ch"
#define decomp decomp_metalang
#line 28 "speed.ch"

#line 28 "speed.ch"
#ifndef for_elem
#line 28 "speed.ch"
#line 28 "speed.ch"
#define for_elem _for_elem

#line 28 "speed.ch"
#line 28 "speed.ch"

#line 28 "speed.ch"
#endif
#ifdef INCONNU
#line 28 "speed.ch"
#line 28 "speed.ch"
PTREE   for_elem ;
#line 28 "speed.ch"

#line 28 "speed.ch"
#line 28 "speed.ch"

#line 28 "speed.ch"
#endif
#include "token.h"
#include "metalang.h"
#include "tablist.h"

extern int  houtput, coutput ;
static PTREE    listFuncNoStop = (PTREE)0 ;
#line 28 "speed.ch"
static TabList  *listFuncToken = 0 ;
static PTREE    rootTree = (PTREE)0 ;
#line 28 "speed.ch"

typedef struct array_entry {
    signed char    arrayEntry [MAX_TOKEN / 8];
    struct array_entry *next ;
}   ARRAY_ENTRY,    *PARRAY_ENTRY ;

static PARRAY_ENTRY listArrayEntry = (PARRAY_ENTRY)0 ;
static PARRAY_ENTRY listArrayEntryFree = (PARRAY_ENTRY)0 ;
static PARRAY_ENTRY arrayEntryCurrent = (PARRAY_ENTRY)0 ;
static signed char arrayEntry [MAX_TOKEN / 8];
extern int  metaQuick ;
extern int  cplusGen ;
extern PTREE    theUsedGrammar ;
#line 28 "speed.ch"
static PTREE    listLevel ;
#line 28 "speed.ch"

#line 78 "speed.ch"

#line 78 "speed.ch"
int StopFind ( PTREE tree, PTREE list )
#line 78 "speed.ch"
{
#line 78 "speed.ch"
    register PPTREE _inter ;
#line 78 "speed.ch"

#line 78 "speed.ch"
#line 78 "speed.ch"
    int _retVal [2];
    
#line 78 "speed.ch"
#line 78 "speed.ch"
    PPTREE  _storeVal [2];
    
#line 78 "speed.ch"
#line 78 "speed.ch"
    int _nextVal ;
    
#line 78 "speed.ch"
#line 81 "speed.ch"
    PTREE   elem ;
#line 81 "speed.ch"
    
#line 81 "speed.ch"
#line 82 "speed.ch"
    PTREE   statement, condition, statement1, statement2, tree1, tree2 ;
#line 82 "speed.ch"
    
#line 82 "speed.ch"
#line 84 "speed.ch"
    if ( !tree ) 
#line 84 "speed.ch"
#line 85 "speed.ch"
        return 0 ;
    
#line 85 "speed.ch"
#line 86 "speed.ch"
    switch ( NumberTree(tree) ) {
#line 86 "speed.ch"
#line 90 "speed.ch"
        case metalang::MAKETREE : 
#line 90 "speed.ch"
#line 90 "speed.ch"
            (tree=SonTree(tree, 1));
#line 90 "speed.ch"
            
#line 90 "speed.ch"
#line 90 "speed.ch"
        _Case31 : 
#line 90 "speed.ch"
#line 90 "speed.ch"
            ;
#line 90 "speed.ch"
#line 90 "speed.ch"
            (tree?tree.Nextl():(PPTREE)0);
#line 90 "speed.ch"
#line 90 "speed.ch"
            goto _Case32 ;
            
#line 90 "speed.ch"
#line 92 "speed.ch"
        case LIST : 
#line 92 "speed.ch"
#line 92 "speed.ch"
        _Case32 : 
#line 92 "speed.ch"
#line 92 "speed.ch"
            ;
#line 92 "speed.ch"
#line 92 "speed.ch"
            while ( tree ) {
#line 92 "speed.ch"
#line 93 "speed.ch"
                                (elem=(tree?tree.Nextl():(PPTREE)0));
#line 93 "speed.ch"
                                
#line 93 "speed.ch"
#line 94 "speed.ch"
                                if ( StopFind(elem, list) ) 
#line 94 "speed.ch"
#line 95 "speed.ch"
                                    return 1 ;
                                
#line 95 "speed.ch"
#line 96 "speed.ch"
                                
#line 96 "speed.ch"
#line 96 "speed.ch"
                            }
#line 96 "speed.ch"
#line 97 "speed.ch"
            return 0 ;
            
#line 97 "speed.ch"
#line 97 "speed.ch"
            goto _Case33 ;
            
#line 97 "speed.ch"
#line 99 "speed.ch"
        case metalang::REPLACETREE : 
#line 99 "speed.ch"
#line 99 "speed.ch"
            (tree=SonTree(tree, 1));
#line 99 "speed.ch"
            
#line 99 "speed.ch"
#line 99 "speed.ch"
        _Case33 : 
#line 99 "speed.ch"
#line 99 "speed.ch"
            ;
#line 99 "speed.ch"
#line 99 "speed.ch"
            (tree?tree.Nextl():(PPTREE)0);
#line 99 "speed.ch"
#line 100 "speed.ch"
            (tree?tree.Nextl():(PPTREE)0);
#line 100 "speed.ch"
#line 101 "speed.ch"
            (elem=(tree?tree.Nextl():(PPTREE)0));
#line 101 "speed.ch"
            
#line 101 "speed.ch"
#line 102 "speed.ch"
            return StopFind(elem, list);
            
#line 102 "speed.ch"
#line 102 "speed.ch"
            goto _Case34 ;
            
#line 102 "speed.ch"
#line 104 "speed.ch"
        case metalang::ADDLIST : 
#line 104 "speed.ch"
#line 104 "speed.ch"
            (tree=SonTree(tree, 1));
#line 104 "speed.ch"
            
#line 104 "speed.ch"
#line 104 "speed.ch"
        _Case34 : 
#line 104 "speed.ch"
#line 104 "speed.ch"
            ;
#line 104 "speed.ch"
#line 104 "speed.ch"
            (tree?tree.Nextl():(PPTREE)0);
#line 104 "speed.ch"
#line 105 "speed.ch"
            (elem=(tree?tree.Nextl():(PPTREE)0));
#line 105 "speed.ch"
            
#line 105 "speed.ch"
#line 106 "speed.ch"
            return StopFind(elem, list);
            
#line 106 "speed.ch"
#line 106 "speed.ch"
            goto _Case35 ;
            
#line 106 "speed.ch"
#line 108 "speed.ch"
        case metalang::NOT : 
#line 108 "speed.ch"
#line 108 "speed.ch"
            (tree=SonTree(tree, 1));
#line 108 "speed.ch"
            
#line 108 "speed.ch"
#line 108 "speed.ch"
        _Case35 : 
#line 108 "speed.ch"
#line 108 "speed.ch"
            ;
#line 108 "speed.ch"
#line 108 "speed.ch"
            StopFind(tree, list);
#line 108 "speed.ch"
#line 111 "speed.ch"
            return 0 ;
            
#line 111 "speed.ch"
#line 111 "speed.ch"
            goto _Case36 ;
            
#line 111 "speed.ch"
#line 111 "speed.ch"
        case metalang::COND : 
#line 111 "speed.ch"
#line 111 "speed.ch"
            (tree=SonTree(tree, 1));
#line 111 "speed.ch"
            
#line 111 "speed.ch"
#line 111 "speed.ch"
        _Case36 : 
#line 111 "speed.ch"
#line 111 "speed.ch"
            ;
#line 111 "speed.ch"
#line 111 "speed.ch"
            goto _Case37 ;
            
#line 111 "speed.ch"
#line 111 "speed.ch"
        case metalang::EQUAL : 
#line 111 "speed.ch"
#line 111 "speed.ch"
            (tree=SonTree(tree, 2));
#line 111 "speed.ch"
            
#line 111 "speed.ch"
#line 111 "speed.ch"
        _Case37 : 
#line 111 "speed.ch"
#line 111 "speed.ch"
            ;
#line 111 "speed.ch"
#line 111 "speed.ch"
            goto _Case38 ;
            
#line 111 "speed.ch"
#line 114 "speed.ch"
        case metalang::BEGIN : 
#line 114 "speed.ch"
#line 114 "speed.ch"
            (tree=SonTree(tree, 1));
#line 114 "speed.ch"
            
#line 114 "speed.ch"
#line 114 "speed.ch"
        _Case38 : 
#line 114 "speed.ch"
#line 114 "speed.ch"
            ;
#line 114 "speed.ch"
#line 114 "speed.ch"
            return StopFind(tree, list);
            
#line 114 "speed.ch"
#line 114 "speed.ch"
            goto _Case39 ;
            
#line 114 "speed.ch"
#line 115 "speed.ch"
        case metalang::RETURN : 
#line 115 "speed.ch"
#line 115 "speed.ch"
            (tree=SonTree(tree, 1));
#line 115 "speed.ch"
            
#line 115 "speed.ch"
#line 115 "speed.ch"
        _Case39 : 
#line 115 "speed.ch"
#line 115 "speed.ch"
            ;
#line 115 "speed.ch"
#line 115 "speed.ch"
            return StopFind(tree, list);
            
#line 115 "speed.ch"
#line 115 "speed.ch"
            goto _Case40 ;
            
#line 115 "speed.ch"
#line 116 "speed.ch"
        case metalang::OR : 
#line 116 "speed.ch"
#line 116 "speed.ch"
            (tree1=SonTree(tree, 1));
#line 116 "speed.ch"
            
#line 116 "speed.ch"
#line 116 "speed.ch"
            (tree2=SonTree(tree, 2));
#line 116 "speed.ch"
            
#line 116 "speed.ch"
#line 116 "speed.ch"
        _Case40 : 
#line 116 "speed.ch"
#line 116 "speed.ch"
            ;
#line 116 "speed.ch"
#line 116 "speed.ch"
            return StopFind(tree1, list) & StopFind(tree2, list);
            
#line 116 "speed.ch"
#line 116 "speed.ch"
            goto _Case41 ;
            
#line 116 "speed.ch"
#line 118 "speed.ch"
        case metalang::AND : 
#line 118 "speed.ch"
#line 118 "speed.ch"
            (tree1=SonTree(tree, 1));
#line 118 "speed.ch"
            
#line 118 "speed.ch"
#line 118 "speed.ch"
            (tree2=SonTree(tree, 2));
#line 118 "speed.ch"
            
#line 118 "speed.ch"
#line 118 "speed.ch"
        _Case41 : 
#line 118 "speed.ch"
#line 118 "speed.ch"
            ;
#line 118 "speed.ch"
#line 118 "speed.ch"
            if ( !StopFind(tree1, list) ) 
#line 118 "speed.ch"
#line 119 "speed.ch"
                return StopFind(tree2, list);
            
#line 119 "speed.ch"
#line 120 "speed.ch"
            return 1 ;
            
#line 120 "speed.ch"
#line 120 "speed.ch"
            goto _Case42 ;
            
#line 120 "speed.ch"
#line 122 "speed.ch"
        case metalang::CASE : 
#line 122 "speed.ch"
#line 122 "speed.ch"
            (tree=SonTree(tree, 1));
#line 122 "speed.ch"
            
#line 122 "speed.ch"
#line 122 "speed.ch"
        _Case42 : 
#line 122 "speed.ch"
#line 122 "speed.ch"
            ;
#line 122 "speed.ch"
#line 122 "speed.ch"
            {
#line 122 "speed.ch"
#line 123 "speed.ch"
                int result = 1 ;
                
#line 123 "speed.ch"
#line 124 "speed.ch"
                while ( tree ) {
#line 124 "speed.ch"
#line 125 "speed.ch"
                                    (elem=(tree?tree.Nextl():(PPTREE)0));
#line 125 "speed.ch"
                                    
#line 125 "speed.ch"
#line 126 "speed.ch"
                                    ((_inter = (PPTREE)elem,1) && 
#line 126 "speed.ch"
                                        (NumberTree(_inter) == metalang::SWITCH) &&
#line 126 "speed.ch"
                                        ((condition=SonTree(_inter,1)),1) &&
#line 126 "speed.ch"
                                        ((statement=SonTree(_inter,2)),1) &&
#line 126 "speed.ch"
                                        1);
#line 126 "speed.ch"
                                    ;
#line 126 "speed.ch"
#line 127 "speed.ch"
                                    if ( !StopFind(condition, list) ) 
#line 127 "speed.ch"
#line 128 "speed.ch"
                                        result &= StopFind(statement, list);
#line 128 "speed.ch"
#line 129 "speed.ch"
                                    
#line 129 "speed.ch"
#line 129 "speed.ch"
                                }
#line 129 "speed.ch"
#line 130 "speed.ch"
                return result ;
                
#line 130 "speed.ch"
#line 131 "speed.ch"
                
#line 131 "speed.ch"
#line 131 "speed.ch"
            }
            
#line 131 "speed.ch"
#line 131 "speed.ch"
            goto _Case43 ;
            
#line 131 "speed.ch"
#line 132 "speed.ch"
        case metalang::BREAK : 
#line 132 "speed.ch"
#line 132 "speed.ch"
        _Case43 : 
#line 132 "speed.ch"
#line 132 "speed.ch"
            ;
#line 132 "speed.ch"
#line 132 "speed.ch"
            return 1 ;
            
#line 132 "speed.ch"
#line 132 "speed.ch"
            goto _Case44 ;
            
#line 132 "speed.ch"
#line 134 "speed.ch"
        case metalang::TAKE : 
#line 134 "speed.ch"
#line 134 "speed.ch"
            (tree=SonTree(tree, 1));
#line 134 "speed.ch"
            
#line 134 "speed.ch"
#line 134 "speed.ch"
        _Case44 : 
#line 134 "speed.ch"
#line 134 "speed.ch"
            ;
#line 134 "speed.ch"
#line 134 "speed.ch"
            if ( ((_inter = (PPTREE)tree,1) && 
#line 134 "speed.ch"
                    (NumberTree(_inter) == metalang::EXCLA) &&
#line 134 "speed.ch"
                    (!strcmp(Value(SonTree(_inter,1)),"NOTHING")) &&
#line 134 "speed.ch"
                    1) ) 
#line 134 "speed.ch"
#line 135 "speed.ch"
                {
#line 135 "speed.ch"
                    PPTREE _ptTree0= (PPTREE) 0 ;
#line 135 "speed.ch"
                    {
#line 135 "speed.ch"
                        PPTREE _ptTree1= (PPTREE) 0,_ptRes1= (PPTREE) 0;
#line 135 "speed.ch"
                        _ptRes1 = MakeTree(metalang::STRING, 1);
#line 135 "speed.ch"
                        _ptTree1 = MakeString("_ALL_") ;
#line 135 "speed.ch"
                        ReplaceTree(_ptRes1, 1, _ptTree1);
#line 135 "speed.ch"
                        _ptTree0 = _ptRes1;
#line 135 "speed.ch"
                    }
#line 135 "speed.ch"
                    list =  AddList( list,_ptTree0);
#line 135 "speed.ch"
                }
#line 135 "speed.ch"
            
#line 135 "speed.ch"
            else 
#line 136 "speed.ch"
            if ( ((_inter = (PPTREE)tree,1) && 
#line 136 "speed.ch"
                    (NumberTree(_inter) == metalang::IDENT) &&
#line 136 "speed.ch"
                    1) ) {
#line 136 "speed.ch"
#line 137 "speed.ch"
                            if ( !ListFind(listFuncNoStop, tree) ) {
#line 137 "speed.ch"
#line 138 "speed.ch"
                                                                        {
#line 138 "speed.ch"
                                                                            PPTREE _ptTree0= (PPTREE) 0 ;
#line 138 "speed.ch"
                                                                            _ptTree0 = StoreRef(copytree(tree));
#line 138 "speed.ch"
                                                                            list =  AddList( list,_ptTree0);
#line 138 "speed.ch"
                                                                        }
#line 138 "speed.ch"
                                                                        
#line 138 "speed.ch"
#line 139 "speed.ch"
                                                                        return 1 ;
                                                                        
#line 139 "speed.ch"
#line 140 "speed.ch"
                                                                        
#line 140 "speed.ch"
#line 140 "speed.ch"
                                                                       } else 
#line 140 "speed.ch"
                            {
#line 140 "speed.ch"
#line 141 "speed.ch"
                                {
#line 141 "speed.ch"
                                    PPTREE _ptTree0=(PPTREE) 0;
#line 141 "speed.ch"
                                    _ptTree0 = list;
#line 141 "speed.ch"
                                    {
#line 141 "speed.ch"
                                        PPTREE _ptTree1= (PPTREE) 0 ;
#line 141 "speed.ch"
                                        _ptTree1 = StoreRef(copytree(tree));
#line 141 "speed.ch"
                                        _ptTree0 = AddList( _ptTree0,_ptTree1);
#line 141 "speed.ch"
                                    }
#line 141 "speed.ch"
                                    {
#line 141 "speed.ch"
                                        PPTREE _ptTree1= (PPTREE) 0 ;
#line 141 "speed.ch"
                                        {
#line 141 "speed.ch"
                                            PPTREE _ptTree2= (PPTREE) 0,_ptRes2= (PPTREE) 0;
#line 141 "speed.ch"
                                            _ptRes2 = MakeTree(metalang::STRING, 1);
#line 141 "speed.ch"
                                            _ptTree2 = MakeString("_NO_STOP_ALL_FOUND_") ;
#line 141 "speed.ch"
                                            ReplaceTree(_ptRes2, 1, _ptTree2);
#line 141 "speed.ch"
                                            _ptTree1 = _ptRes2;
#line 141 "speed.ch"
                                        }
#line 141 "speed.ch"
                                        _ptTree0 = AddList( _ptTree0,_ptTree1);
#line 141 "speed.ch"
                                    }
#line 141 "speed.ch"
                                    list = _ptTree0;
#line 141 "speed.ch"
                                    ;
#line 141 "speed.ch"
                                }
#line 141 "speed.ch"
                                
#line 141 "speed.ch"
#line 142 "speed.ch"
                                return 0 ;
                                
#line 142 "speed.ch"
#line 143 "speed.ch"
                                
#line 143 "speed.ch"
#line 143 "speed.ch"
                            }
                            
#line 143 "speed.ch"
#line 144 "speed.ch"
                            
#line 144 "speed.ch"
#line 144 "speed.ch"
                         } else 
#line 144 "speed.ch"
            {
#line 144 "speed.ch"
#line 145 "speed.ch"
                {
#line 145 "speed.ch"
                    PPTREE _ptTree0= (PPTREE) 0 ;
#line 145 "speed.ch"
                    _ptTree0 = StoreRef(copytree(tree));
#line 145 "speed.ch"
                    list =  AddList( list,_ptTree0);
#line 145 "speed.ch"
                }
#line 145 "speed.ch"
                
#line 145 "speed.ch"
#line 146 "speed.ch"
                return 1 ;
                
#line 146 "speed.ch"
#line 147 "speed.ch"
                
#line 147 "speed.ch"
#line 147 "speed.ch"
            }
            
#line 147 "speed.ch"
#line 147 "speed.ch"
            goto _Case45 ;
            
#line 147 "speed.ch"
#line 149 "speed.ch"
        case metalang::SEE : 
#line 149 "speed.ch"
#line 149 "speed.ch"
            (tree=SonTree(tree, 1));
#line 149 "speed.ch"
            
#line 149 "speed.ch"
#line 149 "speed.ch"
        _Case45 : 
#line 149 "speed.ch"
#line 149 "speed.ch"
            ;
#line 149 "speed.ch"
#line 149 "speed.ch"
            {
#line 149 "speed.ch"
#line 150 "speed.ch"
                if ( ((_inter = (PPTREE)tree,1) && 
#line 150 "speed.ch"
                        (NumberTree(_inter) == metalang::EXCLA) &&
#line 150 "speed.ch"
                        (!strcmp(Value(SonTree(_inter,1)),"NOTHING")) &&
#line 150 "speed.ch"
                        1) ) 
#line 150 "speed.ch"
#line 151 "speed.ch"
                    return 0 ;
                
#line 151 "speed.ch"
                else 
#line 151 "speed.ch"
#line 153 "speed.ch"
                    {
#line 153 "speed.ch"
                        PPTREE _ptTree0= (PPTREE) 0 ;
#line 153 "speed.ch"
                        _ptTree0 = StoreRef(copytree(tree));
#line 153 "speed.ch"
                        list =  AddList( list,_ptTree0);
#line 153 "speed.ch"
                    }
#line 153 "speed.ch"
                    
#line 153 "speed.ch"
                
#line 153 "speed.ch"
#line 154 "speed.ch"
                return 1 ;
                
#line 154 "speed.ch"
#line 155 "speed.ch"
                
#line 155 "speed.ch"
#line 155 "speed.ch"
            }
            
#line 155 "speed.ch"
#line 155 "speed.ch"
            goto _Case46 ;
            
#line 155 "speed.ch"
#line 155 "speed.ch"
        case metalang::WITHOUT_CONTEXT : 
#line 155 "speed.ch"
#line 155 "speed.ch"
            (statement=SonTree(tree, 2));
#line 155 "speed.ch"
            
#line 155 "speed.ch"
#line 155 "speed.ch"
        _Case46 : 
#line 155 "speed.ch"
#line 155 "speed.ch"
            ;
#line 155 "speed.ch"
#line 155 "speed.ch"
            goto _Case47 ;
            
#line 155 "speed.ch"
#line 157 "speed.ch"
        case metalang::WITH_CONTEXT : 
#line 157 "speed.ch"
#line 157 "speed.ch"
            (statement=SonTree(tree, 2));
#line 157 "speed.ch"
            
#line 157 "speed.ch"
#line 157 "speed.ch"
        _Case47 : 
#line 157 "speed.ch"
#line 157 "speed.ch"
            ;
#line 157 "speed.ch"
#line 157 "speed.ch"
            return StopFind(statement, list);
            
#line 157 "speed.ch"
#line 157 "speed.ch"
            goto _Case48 ;
            
#line 157 "speed.ch"
#line 159 "speed.ch"
        case metalang::REPEAT : 
#line 159 "speed.ch"
#line 159 "speed.ch"
            (statement=SonTree(tree, 1));
#line 159 "speed.ch"
            
#line 159 "speed.ch"
#line 159 "speed.ch"
            (condition=SonTree(tree, 2));
#line 159 "speed.ch"
            
#line 159 "speed.ch"
#line 159 "speed.ch"
        _Case48 : 
#line 159 "speed.ch"
#line 159 "speed.ch"
            ;
#line 159 "speed.ch"
#line 159 "speed.ch"
            if ( !StopFind(statement, list) ) {
#line 159 "speed.ch"
#line 160 "speed.ch"
                                                    return StopFind(condition, list);
                                                    
#line 160 "speed.ch"
#line 161 "speed.ch"
                                                    
#line 161 "speed.ch"
#line 161 "speed.ch"
                                                  } else 
#line 161 "speed.ch"
#line 162 "speed.ch"
                return 1 ;
                
#line 162 "speed.ch"
            
#line 162 "speed.ch"
#line 162 "speed.ch"
            goto _Case49 ;
            
#line 162 "speed.ch"
#line 168 "speed.ch"
        case metalang::IF : 
#line 168 "speed.ch"
#line 168 "speed.ch"
            (condition=SonTree(tree, 1));
#line 168 "speed.ch"
            
#line 168 "speed.ch"
#line 168 "speed.ch"
            (statement1=SonTree(tree, 2));
#line 168 "speed.ch"
            
#line 168 "speed.ch"
#line 168 "speed.ch"
            (statement2=SonTree(tree, 3));
#line 168 "speed.ch"
            
#line 168 "speed.ch"
#line 168 "speed.ch"
        _Case49 : 
#line 168 "speed.ch"
#line 168 "speed.ch"
            ;
#line 168 "speed.ch"
#line 168 "speed.ch"
            while ( ((_inter = (PPTREE)condition,1) && 
#line 168 "speed.ch"
                        (NumberTree(_inter) == metalang::COND) &&
#line 168 "speed.ch"
                        ((condition=SonTree(_inter,1)),1) &&
#line 168 "speed.ch"
                        1) || ((_inter = (PPTREE)condition,1) && 
#line 168 "speed.ch"
                                    (NumberTree(_inter) == metalang::NOT) &&
#line 168 "speed.ch"
                                    (_retVal[1]=((_storeVal[1]=_inter,_inter=SonTree(_inter,1),1) &&
#line 168 "speed.ch"
                                        (NumberTree(_inter) == metalang::NOT) &&
#line 168 "speed.ch"
                                        ((condition=SonTree(_inter,1)),1) &&
#line 168 "speed.ch"
                                        1),
#line 168 "speed.ch"
                                        (_inter=_storeVal[1],1),_retVal[1]) &&
#line 168 "speed.ch"
                                    1) ) 
#line 168 "speed.ch"
#line 169 "speed.ch"
                ;
#line 169 "speed.ch"
#line 170 "speed.ch"
            if ( ((_inter = (PPTREE)condition,1) && 
#line 170 "speed.ch"
                    (NumberTree(_inter) == metalang::NOT) &&
#line 170 "speed.ch"
                    ((condition=SonTree(_inter,1)),1) &&
#line 170 "speed.ch"
                    1) ) {
#line 170 "speed.ch"
#line 171 "speed.ch"
                            if ( StopFind(condition, list) ) 
#line 171 "speed.ch"
#line 172 "speed.ch"
                                return StopFind(statement1, list);
                            
#line 172 "speed.ch"
                            else 
#line 172 "speed.ch"
#line 174 "speed.ch"
                                return StopFind(statement1, list) & StopFind(statement2, list);
                                
#line 174 "speed.ch"
                            
#line 174 "speed.ch"
#line 175 "speed.ch"
                            
#line 175 "speed.ch"
#line 175 "speed.ch"
                         } else 
#line 175 "speed.ch"
            {
#line 175 "speed.ch"
#line 176 "speed.ch"
                if ( StopFind(condition, list) ) 
#line 176 "speed.ch"
#line 177 "speed.ch"
                    return StopFind(statement2, list);
                
#line 177 "speed.ch"
                else 
#line 177 "speed.ch"
#line 179 "speed.ch"
                    return StopFind(statement1, list) & StopFind(statement2, list);
                    
#line 179 "speed.ch"
                
#line 179 "speed.ch"
#line 180 "speed.ch"
                
#line 180 "speed.ch"
#line 180 "speed.ch"
            }
            
#line 180 "speed.ch"
#line 180 "speed.ch"
            goto _Case50 ;
            
#line 180 "speed.ch"
#line 182 "speed.ch"
        case metalang::WHILE : 
#line 182 "speed.ch"
#line 182 "speed.ch"
            (condition=SonTree(tree, 1));
#line 182 "speed.ch"
            
#line 182 "speed.ch"
#line 182 "speed.ch"
            (statement=SonTree(tree, 2));
#line 182 "speed.ch"
            
#line 182 "speed.ch"
#line 182 "speed.ch"
        _Case50 : 
#line 182 "speed.ch"
#line 182 "speed.ch"
            ;
#line 182 "speed.ch"
#line 182 "speed.ch"
            while ( ((_inter = (PPTREE)condition,1) && 
#line 182 "speed.ch"
                        (NumberTree(_inter) == metalang::COND) &&
#line 182 "speed.ch"
                        ((condition=SonTree(_inter,1)),1) &&
#line 182 "speed.ch"
                        1) || ((_inter = (PPTREE)condition,1) && 
#line 182 "speed.ch"
                                    (NumberTree(_inter) == metalang::NOT) &&
#line 182 "speed.ch"
                                    (_retVal[1]=((_storeVal[1]=_inter,_inter=SonTree(_inter,1),1) &&
#line 182 "speed.ch"
                                        (NumberTree(_inter) == metalang::NOT) &&
#line 182 "speed.ch"
                                        ((condition=SonTree(_inter,1)),1) &&
#line 182 "speed.ch"
                                        1),
#line 182 "speed.ch"
                                        (_inter=_storeVal[1],1),_retVal[1]) &&
#line 182 "speed.ch"
                                    1) ) 
#line 182 "speed.ch"
#line 183 "speed.ch"
                ;
#line 183 "speed.ch"
#line 184 "speed.ch"
            if ( ((_inter = (PPTREE)condition,1) && 
#line 184 "speed.ch"
                    (NumberTree(_inter) == metalang::NOT) &&
#line 184 "speed.ch"
                    ((tree1=SonTree(_inter,1)),1) &&
#line 184 "speed.ch"
                    1) && StopFind(tree1, list) ) {
#line 184 "speed.ch"
#line 185 "speed.ch"
                                                        StopFind(statement, list);
#line 185 "speed.ch"
#line 186 "speed.ch"
                                                        return 1 ;
                                                        
#line 186 "speed.ch"
#line 187 "speed.ch"
                                                        
#line 187 "speed.ch"
#line 187 "speed.ch"
                                                     } else 
#line 187 "speed.ch"
            if ( !StopFind(condition, list) ) 
#line 187 "speed.ch"
#line 188 "speed.ch"
                StopFind(statement, list);
#line 188 "speed.ch"
#line 189 "speed.ch"
            return 0 ;
            
#line 189 "speed.ch"
#line 189 "speed.ch"
            goto _Case51 ;
            
#line 189 "speed.ch"
#line 189 "speed.ch"
        case metalang::ASIT : 
#line 189 "speed.ch"
#line 189 "speed.ch"
        _Case51 : 
#line 189 "speed.ch"
#line 189 "speed.ch"
            ;
#line 189 "speed.ch"
#line 189 "speed.ch"
            goto _Case52 ;
            
#line 189 "speed.ch"
#line 189 "speed.ch"
        case metalang::SKIP : 
#line 189 "speed.ch"
#line 189 "speed.ch"
        _Case52 : 
#line 189 "speed.ch"
#line 189 "speed.ch"
            ;
#line 189 "speed.ch"
#line 189 "speed.ch"
            goto _Case53 ;
            
#line 189 "speed.ch"
#line 189 "speed.ch"
        case metalang::TAKEL : 
#line 189 "speed.ch"
#line 189 "speed.ch"
        _Case53 : 
#line 189 "speed.ch"
#line 189 "speed.ch"
            ;
#line 189 "speed.ch"
#line 189 "speed.ch"
            goto _Case54 ;
            
#line 189 "speed.ch"
#line 189 "speed.ch"
        case metalang::SEEL : 
#line 189 "speed.ch"
#line 189 "speed.ch"
        _Case54 : 
#line 189 "speed.ch"
#line 189 "speed.ch"
            ;
#line 189 "speed.ch"
#line 189 "speed.ch"
            goto _Case55 ;
            
#line 189 "speed.ch"
#line 189 "speed.ch"
        case metalang::STOREL : 
#line 189 "speed.ch"
#line 189 "speed.ch"
        _Case55 : 
#line 189 "speed.ch"
#line 189 "speed.ch"
            ;
#line 189 "speed.ch"
#line 189 "speed.ch"
            goto _Case56 ;
            
#line 189 "speed.ch"
#line 189 "speed.ch"
        case metalang::RESETL : 
#line 189 "speed.ch"
#line 189 "speed.ch"
        _Case56 : 
#line 189 "speed.ch"
#line 189 "speed.ch"
            ;
#line 189 "speed.ch"
#line 189 "speed.ch"
            goto _Case57 ;
            
#line 189 "speed.ch"
#line 189 "speed.ch"
        case metalang::FORGETL : 
#line 189 "speed.ch"
#line 189 "speed.ch"
        _Case57 : 
#line 189 "speed.ch"
#line 189 "speed.ch"
            ;
#line 189 "speed.ch"
#line 189 "speed.ch"
            goto _Case58 ;
            
#line 189 "speed.ch"
#line 189 "speed.ch"
        case metalang::RECOVERL : 
#line 189 "speed.ch"
#line 189 "speed.ch"
        _Case58 : 
#line 189 "speed.ch"
#line 189 "speed.ch"
            ;
#line 189 "speed.ch"
#line 189 "speed.ch"
            goto _Case59 ;
            
#line 189 "speed.ch"
#line 189 "speed.ch"
        case metalang::FORGET : 
#line 189 "speed.ch"
#line 189 "speed.ch"
        _Case59 : 
#line 189 "speed.ch"
#line 189 "speed.ch"
            ;
#line 189 "speed.ch"
#line 189 "speed.ch"
            goto _Case60 ;
            
#line 189 "speed.ch"
#line 202 "speed.ch"
        case metalang::RECOGNIZE_STRING : 
#line 202 "speed.ch"
#line 202 "speed.ch"
        _Case60 : 
#line 202 "speed.ch"
#line 202 "speed.ch"
            ;
#line 202 "speed.ch"
#line 202 "speed.ch"
            {
#line 202 "speed.ch"
                PPTREE _ptTree0= (PPTREE) 0 ;
#line 202 "speed.ch"
                {
#line 202 "speed.ch"
                    PPTREE _ptTree1= (PPTREE) 0,_ptRes1= (PPTREE) 0;
#line 202 "speed.ch"
                    _ptRes1 = MakeTree(metalang::STRING, 1);
#line 202 "speed.ch"
                    _ptTree1 = MakeString("_ALL_") ;
#line 202 "speed.ch"
                    ReplaceTree(_ptRes1, 1, _ptTree1);
#line 202 "speed.ch"
                    _ptTree0 = _ptRes1;
#line 202 "speed.ch"
                }
#line 202 "speed.ch"
                list =  AddList( list,_ptTree0);
#line 202 "speed.ch"
            }
#line 202 "speed.ch"
            
#line 202 "speed.ch"
#line 206 "speed.ch"
            return 1 ;
            
#line 206 "speed.ch"
#line 206 "speed.ch"
            goto _Case61 ;
            
#line 206 "speed.ch"
#line 207 "speed.ch"
        default : 
#line 207 "speed.ch"
#line 207 "speed.ch"
        _Case61 : 
#line 207 "speed.ch"
#line 207 "speed.ch"
            ;
#line 207 "speed.ch"
#line 207 "speed.ch"
            return 0 ;
            
#line 207 "speed.ch"
    }
#line 207 "speed.ch"
    
#line 207 "speed.ch"
#line 209 "speed.ch"
    
#line 209 "speed.ch"
#line 209 "speed.ch"
}
#line 209 "speed.ch"

void    FunctionExpand (PTREE, TabList *, PTREE) ;

#line 216 "speed.ch"

#line 216 "speed.ch"
PTREE FunctionContent ( PTREE function, TabList *allFunction, PTREE stacked )
#line 216 "speed.ch"
{
#line 216 "speed.ch"
    register PPTREE _inter ;
#line 216 "speed.ch"

#line 216 "speed.ch"
#line 216 "speed.ch"
    int _retVal [2];
    
#line 216 "speed.ch"
#line 216 "speed.ch"
    PPTREE  _storeVal [2];
    
#line 216 "speed.ch"
#line 216 "speed.ch"
    int _nextVal ;
    
#line 216 "speed.ch"
#line 221 "speed.ch"
    PTREE   elem ;
#line 221 "speed.ch"
    
#line 221 "speed.ch"
#line 222 "speed.ch"
    PTREE   retValue ;
#line 222 "speed.ch"
    
#line 222 "speed.ch"
#line 225 "speed.ch"
    if ( ((elem=(PPTREE)(*allFunction)[function])) ) {
#line 225 "speed.ch"
#line 228 "speed.ch"
                                                                FunctionExpand(elem, allFunction, stacked);
#line 228 "speed.ch"
#line 231 "speed.ch"
                                                                (elem?elem.Nextl():(PPTREE)0);
#line 231 "speed.ch"
#line 232 "speed.ch"
                                                                (elem?elem.Nextl():(PPTREE)0);
#line 232 "speed.ch"
#line 233 "speed.ch"
                                                                (retValue=copytree(elem));
#line 233 "speed.ch"
                                                                
#line 233 "speed.ch"
#line 234 "speed.ch"
                                                                
#line 234 "speed.ch"
#line 234 "speed.ch"
                                                             } else 
#line 234 "speed.ch"
    {
#line 234 "speed.ch"
#line 237 "speed.ch"
        char    message [MAXLENGTH];
        
#line 237 "speed.ch"
#line 238 "speed.ch"
        {
#line 238 "speed.ch"
            PPTREE _ptTree0= (PPTREE) 0,_ptRes0= (PPTREE) 0;
#line 238 "speed.ch"
            _ptRes0 = MakeTree(LIST, 2);
#line 238 "speed.ch"
            {
#line 238 "speed.ch"
                PPTREE _ptTree1= (PPTREE) 0,_ptRes1= (PPTREE) 0;
#line 238 "speed.ch"
                _ptRes1 = MakeTree(metalang::STRING, 1);
#line 238 "speed.ch"
                _ptTree1 = MakeString("_ALL_") ;
#line 238 "speed.ch"
                ReplaceTree(_ptRes1, 1, _ptTree1);
#line 238 "speed.ch"
                _ptTree0 = _ptRes1;
#line 238 "speed.ch"
            }
#line 238 "speed.ch"
            ReplaceTree(_ptRes0, 1, _ptTree0);
#line 238 "speed.ch"
            retValue = _ptRes0;
#line 238 "speed.ch"
        }
#line 238 "speed.ch"
        
#line 238 "speed.ch"
#line 239 "speed.ch"
        sprintf(message, "Could not find rule : %s \n", Value(function));
#line 239 "speed.ch"
#line 240 "speed.ch"
        _write(2, message, strlen(message));
#line 240 "speed.ch"
#line 241 "speed.ch"
        
#line 241 "speed.ch"
#line 241 "speed.ch"
    }
    
#line 241 "speed.ch"
#line 244 "speed.ch"
    {
#line 244 "speed.ch"
#line 245 "speed.ch"
        PTREE   list = (PTREE)0 ;
#line 245 "speed.ch"
        
#line 245 "speed.ch"
#line 245 "speed.ch"
        (list=retValue);
#line 245 "speed.ch"
        
#line 245 "speed.ch"
#line 246 "speed.ch"
        while ( list ) {
#line 246 "speed.ch"
#line 247 "speed.ch"
                            if ( ((_inter = (PPTREE)list,1) && 
#line 247 "speed.ch"
                                    (_retVal[1]=((_storeVal[1]=_inter,_inter=SonTree(_inter,1),1) &&
#line 247 "speed.ch"
                                        (NumberTree(_inter) == metalang::IDENT) &&
#line 247 "speed.ch"
                                        1),
#line 247 "speed.ch"
                                        (_inter=_storeVal[1],1),_retVal[1]) &&
#line 247 "speed.ch"
                                    1) ) {
#line 247 "speed.ch"
#line 248 "speed.ch"
                                            if ( list == retValue ) {
#line 248 "speed.ch"
#line 249 "speed.ch"
                                                                        ((_inter = (PPTREE)list,1) && 
#line 249 "speed.ch"
                                                                            ((list=SonTree(_inter,2)),1) &&
#line 249 "speed.ch"
                                                                            1);
#line 249 "speed.ch"
                                                                        ;
#line 249 "speed.ch"
#line 250 "speed.ch"
                                                                        (retValue=list);
#line 250 "speed.ch"
                                                                        
#line 250 "speed.ch"
#line 251 "speed.ch"
                                                                        
#line 251 "speed.ch"
#line 251 "speed.ch"
                                                                      } else 
#line 251 "speed.ch"
                                            {
#line 251 "speed.ch"
#line 252 "speed.ch"
                                                PTREE   father = (PTREE)0 ;
#line 252 "speed.ch"
                                                
#line 252 "speed.ch"
#line 252 "speed.ch"
                                                (father=fathertree(list));
#line 252 "speed.ch"
                                                
#line 252 "speed.ch"
#line 253 "speed.ch"
                                                ((_inter = (PPTREE)list,1) && 
#line 253 "speed.ch"
                                                    ((list=SonTree(_inter,2)),1) &&
#line 253 "speed.ch"
                                                    1);
#line 253 "speed.ch"
                                                ;
#line 253 "speed.ch"
#line 254 "speed.ch"
                                                {
#line 254 "speed.ch"
                                                    PPTREE _ptTree0= (PPTREE) 0,_sonTree0= (PPTREE) 0 ;
#line 254 "speed.ch"
                                                    ReplaceTree(father, 2, list);
#line 254 "speed.ch"
                                                }
#line 254 "speed.ch"
                                                
#line 254 "speed.ch"
#line 255 "speed.ch"
                                                
#line 255 "speed.ch"
#line 255 "speed.ch"
                                            }
                                            
#line 255 "speed.ch"
#line 256 "speed.ch"
                                            
#line 256 "speed.ch"
#line 256 "speed.ch"
                                         }
#line 256 "speed.ch"
#line 257 "speed.ch"
                            (list?list.Nextl():(PPTREE)0);
#line 257 "speed.ch"
#line 258 "speed.ch"
                            
#line 258 "speed.ch"
#line 258 "speed.ch"
                        }
#line 258 "speed.ch"
#line 259 "speed.ch"
        
#line 259 "speed.ch"
#line 259 "speed.ch"
    }
    
#line 259 "speed.ch"
#line 260 "speed.ch"
    return retValue ;
    
#line 260 "speed.ch"
#line 261 "speed.ch"
    
#line 261 "speed.ch"
#line 261 "speed.ch"
}
#line 261 "speed.ch"

#line 265 "speed.ch"

#line 265 "speed.ch"
void FunctionExpand ( PTREE function, TabList *allFunction, PTREE stacked )
#line 265 "speed.ch"
{
#line 265 "speed.ch"
    register PPTREE _inter ;
#line 265 "speed.ch"

#line 265 "speed.ch"
#line 265 "speed.ch"
    int _nextVal ;
    
#line 265 "speed.ch"
#line 271 "speed.ch"
    PTREE   elem ;
#line 271 "speed.ch"
    
#line 271 "speed.ch"
#line 272 "speed.ch"
    PTREE   name ;
#line 272 "speed.ch"
    
#line 272 "speed.ch"
#line 273 "speed.ch"
    PTREE   functionBase ;
#line 273 "speed.ch"
    
#line 273 "speed.ch"
#line 274 "speed.ch"
    PTREE   functionElem ;
#line 274 "speed.ch"
    
#line 274 "speed.ch"
#line 275 "speed.ch"
    int recomputeFunction ;
    
#line 275 "speed.ch"
#line 279 "speed.ch"
debut : 
#line 279 "speed.ch"
#line 280 "speed.ch"
    (functionElem=(functionBase=function));
#line 280 "speed.ch"
    
#line 280 "speed.ch"
#line 281 "speed.ch"
    (name=(functionElem?functionElem.Nextl():(PPTREE)0));
#line 281 "speed.ch"
    
#line 281 "speed.ch"
#line 282 "speed.ch"
    (functionElem?functionElem.Nextl():(PPTREE)0);
#line 282 "speed.ch"
#line 284 "speed.ch"
    while ( functionElem ) {
#line 284 "speed.ch"
#line 285 "speed.ch"
                                (elem=(functionElem?functionElem.Nextl():(PPTREE)0));
#line 285 "speed.ch"
                                
#line 285 "speed.ch"
#line 288 "speed.ch"
                                if ( ((_inter = (PPTREE)elem,1) && 
#line 288 "speed.ch"
                                        (NumberTree(_inter) == metalang::IDENT) &&
#line 288 "speed.ch"
                                        1) ) {
#line 288 "speed.ch"
#line 289 "speed.ch"
                                                PTREE   stackList ;
#line 289 "speed.ch"
                                                
#line 289 "speed.ch"
#line 290 "speed.ch"
                                                if ( !strcmp(Value(elem), Value(functionBase)) ) {
#line 290 "speed.ch"
#line 291 "speed.ch"
                                                                                                        PTREE   father = (PTREE)0 ;
#line 291 "speed.ch"
                                                                                                        
#line 291 "speed.ch"
#line 291 "speed.ch"
                                                                                                        (father=fathertree(elem));
#line 291 "speed.ch"
                                                                                                        
#line 291 "speed.ch"
#line 294 "speed.ch"
                                                                                                        ((_inter = (PPTREE)father,1) && 
#line 294 "speed.ch"
                                                                                                            ((elem=SonTree(_inter,2)),1) &&
#line 294 "speed.ch"
                                                                                                            1);
#line 294 "speed.ch"
                                                                                                        ;
#line 294 "speed.ch"
#line 295 "speed.ch"
                                                                                                        (father=fathertree(father));
#line 295 "speed.ch"
                                                                                                        
#line 295 "speed.ch"
#line 296 "speed.ch"
                                                                                                        {
#line 296 "speed.ch"
                                                                                                            PPTREE _ptTree0= (PPTREE) 0,_sonTree0= (PPTREE) 0 ;
#line 296 "speed.ch"
                                                                                                            ReplaceTree(father, 2, elem);
#line 296 "speed.ch"
                                                                                                        }
#line 296 "speed.ch"
                                                                                                        
#line 296 "speed.ch"
#line 297 "speed.ch"
                                                                                                        
#line 297 "speed.ch"
#line 297 "speed.ch"
                                                                                                       } else 
#line 297 "speed.ch"
                                                {
#line 297 "speed.ch"
#line 301 "speed.ch"
                                                    if ( !ListFind(stacked, functionBase) ) {
#line 301 "speed.ch"
#line 302 "speed.ch"
                                                                                                    PTREE   newContent ;
#line 302 "speed.ch"
                                                                                                    
#line 302 "speed.ch"
#line 303 "speed.ch"
                                                                                                    PTREE   father = (PTREE)0 ;
#line 303 "speed.ch"
                                                                                                    
#line 303 "speed.ch"
#line 303 "speed.ch"
                                                                                                    (father=fathertree(elem));
#line 303 "speed.ch"
                                                                                                    
#line 303 "speed.ch"
#line 304 "speed.ch"
                                                                                                    (father=fathertree(father));
#line 304 "speed.ch"
                                                                                                    
#line 304 "speed.ch"
#line 307 "speed.ch"
                                                                                                    (stackList=copytree(stacked));
#line 307 "speed.ch"
                                                                                                    
#line 307 "speed.ch"
#line 308 "speed.ch"
                                                                                                    {
#line 308 "speed.ch"
                                                                                                        PPTREE _ptTree0= (PPTREE) 0 ;
#line 308 "speed.ch"
                                                                                                        _ptTree0 = StoreRef(copytree(name));
#line 308 "speed.ch"
                                                                                                        stackList =  AddList( stackList,_ptTree0);
#line 308 "speed.ch"
                                                                                                    }
#line 308 "speed.ch"
                                                                                                    
#line 308 "speed.ch"
#line 309 "speed.ch"
                                                                                                    (newContent=FunctionContent(elem, allFunction, stackList));
#line 309 "speed.ch"
                                                                                                    
#line 309 "speed.ch"
#line 312 "speed.ch"
                                                                                                    {
#line 312 "speed.ch"
                                                                                                        PPTREE _ptTree0= (PPTREE) 0,_sonTree0= (PPTREE) 0 ;
#line 312 "speed.ch"
                                                                                                        ReplaceTree(father, 2, newContent);
#line 312 "speed.ch"
                                                                                                    }
#line 312 "speed.ch"
                                                                                                    
#line 312 "speed.ch"
#line 315 "speed.ch"
                                                                                                    while ( !(((_inter = (PPTREE)father,1) && 
#line 315 "speed.ch"
                                                                                                                    (!SonTree(_inter,2)) &&
#line 315 "speed.ch"
                                                                                                                    1)) ) 
#line 315 "speed.ch"
#line 316 "speed.ch"
                                                                                                        ((_inter = (PPTREE)father,1) && 
#line 316 "speed.ch"
                                                                                                            ((father=SonTree(_inter,2)),1) &&
#line 316 "speed.ch"
                                                                                                            1);
#line 316 "speed.ch"
                                                                                                        ;
#line 316 "speed.ch"
#line 317 "speed.ch"
                                                                                                    {
#line 317 "speed.ch"
                                                                                                        PPTREE _ptTree0= (PPTREE) 0,_sonTree0= (PPTREE) 0 ;
#line 317 "speed.ch"
                                                                                                        ReplaceTree(father, 2, functionElem);
#line 317 "speed.ch"
                                                                                                    }
#line 317 "speed.ch"
                                                                                                    
#line 317 "speed.ch"
#line 318 "speed.ch"
                                                                                                    
#line 318 "speed.ch"
#line 318 "speed.ch"
                                                                                                }
#line 318 "speed.ch"
#line 319 "speed.ch"
                                                    
#line 319 "speed.ch"
#line 319 "speed.ch"
                                                }
                                                
#line 319 "speed.ch"
#line 320 "speed.ch"
                                                
#line 320 "speed.ch"
#line 320 "speed.ch"
                                             } else 
#line 320 "speed.ch"
                                if ( !strcmp(BrainyValue(elem), "_ALL_") ) {
#line 320 "speed.ch"
#line 321 "speed.ch"
                                                                                break ;
                                                                                
#line 321 "speed.ch"
#line 322 "speed.ch"
                                                                                
#line 322 "speed.ch"
#line 322 "speed.ch"
                                                                               }
#line 322 "speed.ch"
#line 323 "speed.ch"
                                
#line 323 "speed.ch"
#line 323 "speed.ch"
                            }
#line 323 "speed.ch"
#line 324 "speed.ch"
    (functionElem=functionBase);
#line 324 "speed.ch"
    
#line 324 "speed.ch"
#line 325 "speed.ch"
    recomputeFunction = 0 ;
#line 325 "speed.ch"
#line 326 "speed.ch"
    (functionElem?functionElem.Nextl():(PPTREE)0);
#line 326 "speed.ch"
#line 329 "speed.ch"
    while ( functionElem ) {
#line 329 "speed.ch"
#line 330 "speed.ch"
                                (elem=(functionElem?functionElem.Nextl():(PPTREE)0));
#line 330 "speed.ch"
                                
#line 330 "speed.ch"
#line 331 "speed.ch"
                                if ( !strcmp(BrainyValue(elem), "_ALL_") ) {
#line 331 "speed.ch"
#line 332 "speed.ch"
                                                                                {
#line 332 "speed.ch"
                                                                                    PPTREE _ptTree0= (PPTREE) 0,_sonTree0= (PPTREE) 0 ;
#line 332 "speed.ch"
                                                                                    _sonTree0 = SonTree(functionBase,2);
#line 332 "speed.ch"
                                                                                    {
#line 332 "speed.ch"
                                                                                        PPTREE _ptTree1= (PPTREE) 0,_sonTree1= (PPTREE) 0 ;
#line 332 "speed.ch"
                                                                                        {
#line 332 "speed.ch"
                                                                                            PPTREE _ptTree2= (PPTREE) 0,_ptRes2= (PPTREE) 0;
#line 332 "speed.ch"
                                                                                            _ptRes2 = MakeTree(LIST, 2);
#line 332 "speed.ch"
                                                                                            {
#line 332 "speed.ch"
                                                                                                PPTREE _ptTree3= (PPTREE) 0,_ptRes3= (PPTREE) 0;
#line 332 "speed.ch"
                                                                                                _ptRes3 = MakeTree(metalang::STRING, 1);
#line 332 "speed.ch"
                                                                                                _ptTree3 = MakeString("_ALL_") ;
#line 332 "speed.ch"
                                                                                                ReplaceTree(_ptRes3, 1, _ptTree3);
#line 332 "speed.ch"
                                                                                                _ptTree2 = _ptRes3;
#line 332 "speed.ch"
                                                                                            }
#line 332 "speed.ch"
                                                                                            ReplaceTree(_ptRes2, 1, _ptTree2);
#line 332 "speed.ch"
                                                                                            _ptTree1 = _ptRes2;
#line 332 "speed.ch"
                                                                                        }
#line 332 "speed.ch"
                                                                                        _ptTree0 = ReplaceTree(_sonTree0, 2, _ptTree1);
#line 332 "speed.ch"
                                                                                    }
#line 332 "speed.ch"
                                                                                    ReplaceTree(functionBase, 2, _ptTree0);
#line 332 "speed.ch"
                                                                                }
#line 332 "speed.ch"
                                                                                
#line 332 "speed.ch"
#line 333 "speed.ch"
                                                                                recomputeFunction = 0 ;
#line 333 "speed.ch"
#line 334 "speed.ch"
                                                                                break ;
                                                                                
#line 334 "speed.ch"
#line 335 "speed.ch"
                                                                                
#line 335 "speed.ch"
#line 335 "speed.ch"
                                                                               } else 
#line 335 "speed.ch"
                                if ( !strcmp(BrainyValue(elem), "_NO_STOP_ALL_") ) {
#line 335 "speed.ch"
#line 339 "speed.ch"
                                                                                        recomputeFunction += 1 ;
#line 339 "speed.ch"
#line 340 "speed.ch"
                                                                                        
#line 340 "speed.ch"
#line 340 "speed.ch"
                                                                                       } else 
#line 340 "speed.ch"
                                if ( !strcmp(BrainyValue(elem), "_NO_STOP_ALL_FOUND_") ) {
#line 340 "speed.ch"
#line 341 "speed.ch"
                                                                                                recomputeFunction -= 1 ;
#line 341 "speed.ch"
#line 342 "speed.ch"
                                                                                                
#line 342 "speed.ch"
#line 342 "speed.ch"
                                                                                             }
#line 342 "speed.ch"
#line 343 "speed.ch"
                                
#line 343 "speed.ch"
#line 343 "speed.ch"
                            }
#line 343 "speed.ch"
#line 346 "speed.ch"
    if ( recomputeFunction ) {
#line 346 "speed.ch"
#line 347 "speed.ch"
                                if ( !ListFind(listFuncNoStop, function) ) {
#line 347 "speed.ch"
#line 348 "speed.ch"
                                                                                {
#line 348 "speed.ch"
                                                                                    PPTREE _ptTree0= (PPTREE) 0,_sonTree0= (PPTREE) 0 ;
#line 348 "speed.ch"
                                                                                    _sonTree0 = SonTree(functionBase,2);
#line 348 "speed.ch"
                                                                                    {
#line 348 "speed.ch"
                                                                                        PPTREE _ptTree1= (PPTREE) 0,_sonTree1= (PPTREE) 0 ;
#line 348 "speed.ch"
                                                                                        _ptTree1 = StoreRef(GetTokensFunctionName(name));
#line 348 "speed.ch"
                                                                                        _ptTree0 = ReplaceTree(_sonTree0, 2, _ptTree1);
#line 348 "speed.ch"
                                                                                    }
#line 348 "speed.ch"
                                                                                    ReplaceTree(functionBase, 2, _ptTree0);
#line 348 "speed.ch"
                                                                                }
#line 348 "speed.ch"
                                                                                
#line 348 "speed.ch"
#line 349 "speed.ch"
                                                                                goto debut ;
                                                                                
#line 349 "speed.ch"
#line 350 "speed.ch"
                                                                                
#line 350 "speed.ch"
#line 350 "speed.ch"
                                                                               }
#line 350 "speed.ch"
#line 351 "speed.ch"
                                
#line 351 "speed.ch"
#line 351 "speed.ch"
                              }
#line 351 "speed.ch"
#line 352 "speed.ch"
    
#line 352 "speed.ch"
#line 352 "speed.ch"
}
#line 352 "speed.ch"

#line 356 "speed.ch"

#line 356 "speed.ch"
void FunctionSort ( PTREE function )
#line 356 "speed.ch"
{
#line 356 "speed.ch"
    register PPTREE _inter ;
#line 356 "speed.ch"

#line 356 "speed.ch"
#line 356 "speed.ch"
    int _nextVal ;
    
#line 356 "speed.ch"
#line 361 "speed.ch"
    PTREE   compare ;
#line 361 "speed.ch"
    
#line 361 "speed.ch"
#line 362 "speed.ch"
    PTREE   current ;
#line 362 "speed.ch"
    
#line 362 "speed.ch"
#line 364 "speed.ch"
    (function?function.Nextl():(PPTREE)0);
#line 364 "speed.ch"
#line 365 "speed.ch"
    (function?function.Nextl():(PPTREE)0);
#line 365 "speed.ch"
#line 366 "speed.ch"
    (compare=function);
#line 366 "speed.ch"
    
#line 366 "speed.ch"
#line 369 "speed.ch"
    while ( compare ) {
#line 369 "speed.ch"
#line 370 "speed.ch"
                        char    *name = AllocString(BrainyValue(compare));
                        
#line 370 "speed.ch"
#line 371 "speed.ch"
                        PTREE   compareElem = (PTREE)0 ;
#line 371 "speed.ch"
                        
#line 371 "speed.ch"
#line 371 "speed.ch"
                        (compareElem=(compare?compare.Nextl():(PPTREE)0));
#line 371 "speed.ch"
                        
#line 371 "speed.ch"
#line 375 "speed.ch"
                        if ( !strcmp(name, "_NO_STOP_ALL_") || !strcmp(name, "_NO_STOP_ALL_FOUND_") ) 
#line 375 "speed.ch"
#line 376 "speed.ch"
                            continue ;
                        
#line 376 "speed.ch"
#line 377 "speed.ch"
                        (current=compare);
#line 377 "speed.ch"
                        
#line 377 "speed.ch"
#line 378 "speed.ch"
                        while ( current ) {
#line 378 "speed.ch"
#line 379 "speed.ch"
                                            PTREE   currentElem = (PTREE)0 ;
#line 379 "speed.ch"
                                            
#line 379 "speed.ch"
#line 379 "speed.ch"
                                            (currentElem=(current?current.Nextl():(PPTREE)0));
#line 379 "speed.ch"
                                            
#line 379 "speed.ch"
#line 382 "speed.ch"
                                            if ( qcomparetree(compareElem, currentElem) ) {
#line 382 "speed.ch"
#line 383 "speed.ch"
                                                                                                PTREE   father = (PTREE)0 ;
#line 383 "speed.ch"
                                                                                                
#line 383 "speed.ch"
#line 383 "speed.ch"
                                                                                                (father=fathertree(currentElem));
#line 383 "speed.ch"
                                                                                                
#line 383 "speed.ch"
#line 384 "speed.ch"
                                                                                                ((_inter = (PPTREE)father,1) && 
#line 384 "speed.ch"
                                                                                                    ((currentElem=SonTree(_inter,2)),1) &&
#line 384 "speed.ch"
                                                                                                    1);
#line 384 "speed.ch"
                                                                                                ;
#line 384 "speed.ch"
#line 385 "speed.ch"
                                                                                                (father=fathertree(father));
#line 385 "speed.ch"
                                                                                                
#line 385 "speed.ch"
#line 386 "speed.ch"
                                                                                                {
#line 386 "speed.ch"
                                                                                                    PPTREE _ptTree0= (PPTREE) 0,_sonTree0= (PPTREE) 0 ;
#line 386 "speed.ch"
                                                                                                    ReplaceTree(father, 2, currentElem);
#line 386 "speed.ch"
                                                                                                }
#line 386 "speed.ch"
                                                                                                
#line 386 "speed.ch"
#line 387 "speed.ch"
                                                                                                
#line 387 "speed.ch"
#line 387 "speed.ch"
                                                                                             } else 
#line 387 "speed.ch"
                                            if ( !strcmp(name, BrainyValue(currentElem)) ) {
#line 387 "speed.ch"
#line 388 "speed.ch"
                                                                                                char    Message [MAXLENGTH];
                                                                                                
#line 388 "speed.ch"
#line 389 "speed.ch"
                                                                                                sprintf(Message, "Two types of token for %s \n", name);
#line 389 "speed.ch"
#line 390 "speed.ch"
                                                                                                _write(2, Message, strlen(Message));
#line 390 "speed.ch"
#line 391 "speed.ch"
                                                                                                
#line 391 "speed.ch"
#line 391 "speed.ch"
                                                                                               }
#line 391 "speed.ch"
#line 392 "speed.ch"
                                            
#line 392 "speed.ch"
#line 392 "speed.ch"
                                           }
#line 392 "speed.ch"
#line 393 "speed.ch"
                        free(name);
#line 393 "speed.ch"
#line 394 "speed.ch"
                        
#line 394 "speed.ch"
#line 394 "speed.ch"
                       }
#line 394 "speed.ch"
#line 395 "speed.ch"
    
#line 395 "speed.ch"
#line 395 "speed.ch"
}
#line 395 "speed.ch"

int nbRule = 0 ;

#line 402 "speed.ch"

#line 402 "speed.ch"
PTREE GetTokensFunctionName ( PTREE func )
#line 402 "speed.ch"
{
#line 402 "speed.ch"
    register PPTREE _inter ;
#line 402 "speed.ch"

#line 402 "speed.ch"
#line 402 "speed.ch"
    int _nextVal ;
    
#line 402 "speed.ch"
#line 406 "speed.ch"
    PTREE   tree = (PTREE)0 ;
#line 406 "speed.ch"
    
#line 406 "speed.ch"
#line 407 "speed.ch"
    PTREE   name ;
#line 407 "speed.ch"
    
#line 407 "speed.ch"
#line 406 "speed.ch"
    (tree=rootTree);
#line 406 "speed.ch"
    
#line 406 "speed.ch"
#line 409 "speed.ch"
    {
#line 409 "speed.ch"
#line 409 "speed.ch"
        ItPtree _iterator1 (tree, (PPTREE) 0) ;
        
#line 409 "speed.ch"
#line 409 "speed.ch"
        PPTREE  _for_elem ;
        
#line 409 "speed.ch"
#line 409 "speed.ch"
        _iterator1.AllSearch(1);
#line 409 "speed.ch"
#line 409 "speed.ch"
        while ( _for_elem = _iterator1++ ) {
#line 409 "speed.ch"
#line 409 "speed.ch"
            {
#line 409 "speed.ch"
#line 410 "speed.ch"
                if ( ((_inter = (PPTREE)for_elem,1) && 
#line 410 "speed.ch"
                        (NumberTree(_inter) == metalang::DEFINE) &&
#line 410 "speed.ch"
                        ((name=SonTree(_inter,1)),1) &&
#line 410 "speed.ch"
                        1) ) {
#line 410 "speed.ch"
#line 411 "speed.ch"
                                if ( !strcmp(BrainyValue(for_elem), BrainyValue(func)) ) {
#line 411 "speed.ch"
#line 412 "speed.ch"
                                                                                                return GetTokensFunction(for_elem);
                                                                                                
#line 412 "speed.ch"
#line 413 "speed.ch"
                                                                                                
#line 413 "speed.ch"
#line 413 "speed.ch"
                                                                                             }
#line 413 "speed.ch"
#line 414 "speed.ch"
                                goto for_continue1 ;
                                
#line 414 "speed.ch"
#line 415 "speed.ch"
                                
#line 415 "speed.ch"
#line 415 "speed.ch"
                             } else 
#line 415 "speed.ch"
                if ( ((_inter = (PPTREE)for_elem,1) && 
#line 415 "speed.ch"
                        (NumberTree(_inter) == metalang::LEXDEFINE) &&
#line 415 "speed.ch"
                        1) ) {
#line 415 "speed.ch"
#line 416 "speed.ch"
                                goto for_continue1 ;
                                
#line 416 "speed.ch"
#line 417 "speed.ch"
                                
#line 417 "speed.ch"
#line 417 "speed.ch"
                             }
#line 417 "speed.ch"
#line 418 "speed.ch"
                
#line 418 "speed.ch"
#line 418 "speed.ch"
            }
            
#line 418 "speed.ch"
#line 418 "speed.ch"
            _iterator1.Current(_for_elem);
#line 418 "speed.ch"
#line 418 "speed.ch"
            continue ;
            
#line 418 "speed.ch"
#line 418 "speed.ch"
        for_continue1 : 
#line 418 "speed.ch"
#line 418 "speed.ch"
            _iterator1.Current(_for_elem);
#line 418 "speed.ch"
#line 418 "speed.ch"
            _iterator1.SkipSon(1);
#line 418 "speed.ch"
#line 418 "speed.ch"
            continue ;
            
#line 418 "speed.ch"
#line 418 "speed.ch"
        for_break1 : 
#line 418 "speed.ch"
#line 418 "speed.ch"
            break ;
            
#line 418 "speed.ch"
#line 418 "speed.ch"
            
#line 418 "speed.ch"
#line 418 "speed.ch"
        }
#line 418 "speed.ch"
#line 418 "speed.ch"
        
#line 418 "speed.ch"
#line 418 "speed.ch"
    }
    
#line 418 "speed.ch"
#line 421 "speed.ch"
    {
#line 421 "speed.ch"
#line 422 "speed.ch"
        PTREE   list = (PTREE)0 ;
#line 422 "speed.ch"
        
#line 422 "speed.ch"
#line 422 "speed.ch"
        {
#line 422 "speed.ch"
            PPTREE _ptTree0= (PPTREE) 0,_ptRes0= (PPTREE) 0;
#line 422 "speed.ch"
            _ptRes0 = MakeTree(LIST, 2);
#line 422 "speed.ch"
            {
#line 422 "speed.ch"
                PPTREE _ptTree1= (PPTREE) 0,_ptRes1= (PPTREE) 0;
#line 422 "speed.ch"
                _ptRes1 = MakeTree(metalang::STRING, 1);
#line 422 "speed.ch"
                _ptTree1 = MakeString("_ALL_") ;
#line 422 "speed.ch"
                ReplaceTree(_ptRes1, 1, _ptTree1);
#line 422 "speed.ch"
                _ptTree0 = _ptRes1;
#line 422 "speed.ch"
            }
#line 422 "speed.ch"
            ReplaceTree(_ptRes0, 1, _ptTree0);
#line 422 "speed.ch"
            list = _ptRes0;
#line 422 "speed.ch"
        }
#line 422 "speed.ch"
        
#line 422 "speed.ch"
#line 423 "speed.ch"
        {
#line 423 "speed.ch"
            PPTREE _ptTree0= (PPTREE) 0 ;
#line 423 "speed.ch"
            _ptTree0 = StoreRef(copytree(name));
#line 423 "speed.ch"
            listFuncNoStop =  AddList( listFuncNoStop,_ptTree0);
#line 423 "speed.ch"
        }
#line 423 "speed.ch"
        
#line 423 "speed.ch"
#line 424 "speed.ch"
        return list ;
        
#line 424 "speed.ch"
#line 425 "speed.ch"
        
#line 425 "speed.ch"
#line 425 "speed.ch"
    }
    
#line 425 "speed.ch"
#line 426 "speed.ch"
    
#line 426 "speed.ch"
#line 426 "speed.ch"
}
#line 426 "speed.ch"

#line 428 "speed.ch"

#line 428 "speed.ch"
PTREE GetTokensFunction ( PTREE func )
#line 428 "speed.ch"
{
#line 428 "speed.ch"
    register PPTREE _inter ;
#line 428 "speed.ch"

#line 428 "speed.ch"
#line 428 "speed.ch"
    int _nextVal ;
    
#line 428 "speed.ch"
#line 432 "speed.ch"
    PTREE   list = (PTREE)0 ;
#line 432 "speed.ch"
    
#line 432 "speed.ch"
#line 433 "speed.ch"
    PTREE   name, pattern ;
#line 433 "speed.ch"
    
#line 433 "speed.ch"
#line 434 "speed.ch"
    int stop ;
    
#line 434 "speed.ch"
#line 432 "speed.ch"
    {
#line 432 "speed.ch"
        PPTREE _ptTree0= (PPTREE) 0,_ptRes0= (PPTREE) 0;
#line 432 "speed.ch"
        _ptRes0 = MakeTree(LIST, 2);
#line 432 "speed.ch"
        list = _ptRes0;
#line 432 "speed.ch"
    }
#line 432 "speed.ch"
    
#line 432 "speed.ch"
#line 436 "speed.ch"
    if ( ((_inter = (PPTREE)func,1) && 
#line 436 "speed.ch"
            (NumberTree(_inter) == metalang::DEFINE) &&
#line 436 "speed.ch"
            ((name=SonTree(_inter,1)),1) &&
#line 436 "speed.ch"
            ((pattern=SonTree(_inter,2)),1) &&
#line 436 "speed.ch"
            1) ) {
#line 436 "speed.ch"
#line 439 "speed.ch"
                    stop = StopFind(pattern, list);
#line 439 "speed.ch"
#line 443 "speed.ch"
                    if ( !stop ) {
#line 443 "speed.ch"
#line 444 "speed.ch"
                                    {
#line 444 "speed.ch"
                                        PPTREE _ptTree0= (PPTREE) 0 ;
#line 444 "speed.ch"
                                        {
#line 444 "speed.ch"
                                            PPTREE _ptTree1= (PPTREE) 0,_ptRes1= (PPTREE) 0;
#line 444 "speed.ch"
                                            _ptRes1 = MakeTree(metalang::STRING, 1);
#line 444 "speed.ch"
                                            _ptTree1 = MakeString("_NO_STOP_ALL_") ;
#line 444 "speed.ch"
                                            ReplaceTree(_ptRes1, 1, _ptTree1);
#line 444 "speed.ch"
                                            _ptTree0 = _ptRes1;
#line 444 "speed.ch"
                                        }
#line 444 "speed.ch"
                                        list =  AddList( list,_ptTree0);
#line 444 "speed.ch"
                                    }
#line 444 "speed.ch"
                                    
#line 444 "speed.ch"
#line 445 "speed.ch"
                                    {
#line 445 "speed.ch"
                                        PPTREE _ptTree0= (PPTREE) 0 ;
#line 445 "speed.ch"
                                        _ptTree0 = StoreRef(copytree(name));
#line 445 "speed.ch"
                                        listFuncNoStop =  AddList( listFuncNoStop,_ptTree0);
#line 445 "speed.ch"
                                    }
#line 445 "speed.ch"
                                    
#line 445 "speed.ch"
#line 446 "speed.ch"
                                    
#line 446 "speed.ch"
#line 446 "speed.ch"
                                   }
#line 446 "speed.ch"
#line 449 "speed.ch"
                    (list?list.Nextl():(PPTREE)0);
#line 449 "speed.ch"
#line 450 "speed.ch"
                    
#line 450 "speed.ch"
#line 450 "speed.ch"
                 }
#line 450 "speed.ch"
#line 453 "speed.ch"
    {
#line 453 "speed.ch"
#line 453 "speed.ch"
        ItPtree _iterator1 (list, (PPTREE) 0) ;
        
#line 453 "speed.ch"
#line 453 "speed.ch"
        PPTREE  _for_elem ;
        
#line 453 "speed.ch"
#line 453 "speed.ch"
        _iterator1.AllSearch(1);
#line 453 "speed.ch"
#line 454 "speed.ch"
        while ( _for_elem = _iterator1++ ) {
#line 454 "speed.ch"
#line 454 "speed.ch"
            replacetree(for_elem, 0, (PTREE)0);
#line 454 "speed.ch"
#line 454 "speed.ch"
            _iterator1.Current(_for_elem);
#line 454 "speed.ch"
#line 454 "speed.ch"
            continue ;
            
#line 454 "speed.ch"
#line 454 "speed.ch"
        for_continue1 : 
#line 454 "speed.ch"
#line 454 "speed.ch"
            _iterator1.Current(_for_elem);
#line 454 "speed.ch"
#line 454 "speed.ch"
            _iterator1.SkipSon(1);
#line 454 "speed.ch"
#line 454 "speed.ch"
            continue ;
            
#line 454 "speed.ch"
#line 454 "speed.ch"
        for_break1 : 
#line 454 "speed.ch"
#line 454 "speed.ch"
            break ;
            
#line 454 "speed.ch"
#line 454 "speed.ch"
            
#line 454 "speed.ch"
#line 454 "speed.ch"
        }
#line 454 "speed.ch"
#line 454 "speed.ch"
        
#line 454 "speed.ch"
#line 454 "speed.ch"
    }
    
#line 454 "speed.ch"
#line 458 "speed.ch"
    return list ;
    
#line 458 "speed.ch"
#line 459 "speed.ch"
    
#line 459 "speed.ch"
#line 459 "speed.ch"
}
#line 459 "speed.ch"

static int  nbArrayEntry = (int)0 ;

#line 463 "speed.ch"

#line 463 "speed.ch"
void TreeTokenAnalyze ( const PTREE &tree )
#line 463 "speed.ch"
{
#line 463 "speed.ch"
    register PPTREE _inter ;
#line 463 "speed.ch"

#line 463 "speed.ch"
#line 463 "speed.ch"
    int _nextVal ;
    
#line 463 "speed.ch"
#line 465 "speed.ch"
    PTREE   name, list, listFunc, elem, function, newList ;
#line 465 "speed.ch"
    
#line 465 "speed.ch"
#line 466 "speed.ch"
    TabList *ptTabList ;
    
#line 466 "speed.ch"
#line 468 "speed.ch"
    if ( listArrayEntry ) {
#line 468 "speed.ch"
#line 469 "speed.ch"
                            FreeArrayEntry();
#line 469 "speed.ch"
#line 470 "speed.ch"
                            
#line 470 "speed.ch"
#line 470 "speed.ch"
                           }
#line 470 "speed.ch"
#line 471 "speed.ch"
    (rootTree=tree);
#line 471 "speed.ch"
    
#line 471 "speed.ch"
#line 474 "speed.ch"
    {
#line 474 "speed.ch"
        PPTREE _ptTree0= (PPTREE) 0,_ptRes0= (PPTREE) 0;
#line 474 "speed.ch"
        _ptRes0 = MakeTree(LIST, 2);
#line 474 "speed.ch"
        listFunc = _ptRes0;
#line 474 "speed.ch"
    }
#line 474 "speed.ch"
    
#line 474 "speed.ch"
#line 475 "speed.ch"
    {
#line 475 "speed.ch"
#line 475 "speed.ch"
        ItPtree _iterator1 (tree, (PPTREE) 0) ;
        
#line 475 "speed.ch"
#line 475 "speed.ch"
        PPTREE  _for_elem ;
        
#line 475 "speed.ch"
#line 475 "speed.ch"
        _iterator1.AllSearch(1);
#line 475 "speed.ch"
#line 475 "speed.ch"
        while ( _for_elem = _iterator1++ ) {
#line 475 "speed.ch"
#line 475 "speed.ch"
            {
#line 475 "speed.ch"
#line 476 "speed.ch"
                if ( ((_inter = (PPTREE)for_elem,1) && 
#line 476 "speed.ch"
                        (NumberTree(_inter) == metalang::DEFINE) &&
#line 476 "speed.ch"
                        ((name=SonTree(_inter,1)),1) &&
#line 476 "speed.ch"
                        1) ) {
#line 476 "speed.ch"
#line 479 "speed.ch"
                                {
#line 479 "speed.ch"
                                    PPTREE _ptTree0= (PPTREE) 0,_ptRes0= (PPTREE) 0;
#line 479 "speed.ch"
                                    _ptRes0 = MakeTree(LIST, 2);
#line 479 "speed.ch"
                                    _ptTree0 = StoreRef(copytree(name));
#line 479 "speed.ch"
                                    ReplaceTree(_ptRes0, 1, _ptTree0);
#line 479 "speed.ch"
                                    {
#line 479 "speed.ch"
                                        PPTREE _ptTree1= (PPTREE) 0,_ptRes1= (PPTREE) 0;
#line 479 "speed.ch"
                                        _ptRes1 = MakeTree(LIST, 2);
#line 479 "speed.ch"
                                        {
#line 479 "speed.ch"
                                            PPTREE _ptTree2= (PPTREE) 0,_ptRes2= (PPTREE) 0;
#line 479 "speed.ch"
                                            _ptRes2 = MakeTree(LIST, 2);
#line 479 "speed.ch"
                                            _ptTree1 = _ptRes2;
#line 479 "speed.ch"
                                        }
#line 479 "speed.ch"
                                        ReplaceTree(_ptRes1, 1, _ptTree1);
#line 479 "speed.ch"
                                        _ptTree1 = StoreRef(GetTokensFunction(for_elem));
#line 479 "speed.ch"
                                        ReplaceTree(_ptRes1, 2, _ptTree1);
#line 479 "speed.ch"
                                        _ptTree0 = _ptRes1;
#line 479 "speed.ch"
                                    }
#line 479 "speed.ch"
                                    ReplaceTree(_ptRes0, 2, _ptTree0);
#line 479 "speed.ch"
                                    list = _ptRes0;
#line 479 "speed.ch"
                                }
#line 479 "speed.ch"
                                
#line 479 "speed.ch"
#line 480 "speed.ch"
                                {
#line 480 "speed.ch"
                                    PPTREE _ptTree0= (PPTREE) 0 ;
#line 480 "speed.ch"
                                    listFunc =  AddList( listFunc,list);
#line 480 "speed.ch"
                                }
#line 480 "speed.ch"
                                
#line 480 "speed.ch"
#line 481 "speed.ch"
                                goto for_continue1 ;
                                
#line 481 "speed.ch"
#line 482 "speed.ch"
                                
#line 482 "speed.ch"
#line 482 "speed.ch"
                             } else 
#line 482 "speed.ch"
                if ( ((_inter = (PPTREE)for_elem,1) && 
#line 482 "speed.ch"
                        (NumberTree(_inter) == metalang::LEXDEFINE) &&
#line 482 "speed.ch"
                        1) ) {
#line 482 "speed.ch"
#line 483 "speed.ch"
                                goto for_continue1 ;
                                
#line 483 "speed.ch"
#line 484 "speed.ch"
                                
#line 484 "speed.ch"
#line 484 "speed.ch"
                             }
#line 484 "speed.ch"
#line 485 "speed.ch"
                
#line 485 "speed.ch"
#line 485 "speed.ch"
            }
            
#line 485 "speed.ch"
#line 485 "speed.ch"
            _iterator1.Current(_for_elem);
#line 485 "speed.ch"
#line 485 "speed.ch"
            continue ;
            
#line 485 "speed.ch"
#line 485 "speed.ch"
        for_continue1 : 
#line 485 "speed.ch"
#line 485 "speed.ch"
            _iterator1.Current(_for_elem);
#line 485 "speed.ch"
#line 485 "speed.ch"
            _iterator1.SkipSon(1);
#line 485 "speed.ch"
#line 485 "speed.ch"
            continue ;
            
#line 485 "speed.ch"
#line 485 "speed.ch"
        for_break1 : 
#line 485 "speed.ch"
#line 485 "speed.ch"
            break ;
            
#line 485 "speed.ch"
#line 485 "speed.ch"
            
#line 485 "speed.ch"
#line 485 "speed.ch"
        }
#line 485 "speed.ch"
#line 485 "speed.ch"
        
#line 485 "speed.ch"
#line 485 "speed.ch"
    }
    
#line 485 "speed.ch"
#line 488 "speed.ch"
    (listFunc?listFunc.Nextl():(PPTREE)0);
#line 488 "speed.ch"
#line 491 "speed.ch"
    (list=listFunc);
#line 491 "speed.ch"
    
#line 491 "speed.ch"
#line 492 "speed.ch"
    ptTabList = new TabList(listFunc);
#line 492 "speed.ch"
#line 493 "speed.ch"
    while ( list ) {
#line 493 "speed.ch"
#line 493 "speed.ch"
                        PTREE   _Baum0 ;
#line 493 "speed.ch"
                        
#line 493 "speed.ch"
#line 494 "speed.ch"
                        (elem=(list?list.Nextl():(PPTREE)0));
#line 494 "speed.ch"
                        
#line 494 "speed.ch"
#line 495 "speed.ch"
                        {
#line 495 "speed.ch"
                            PPTREE _ptTree0= (PPTREE) 0,_ptRes0= (PPTREE) 0;
#line 495 "speed.ch"
                            _ptRes0 = MakeTree(LIST, 2);
#line 495 "speed.ch"
                            {
#line 495 "speed.ch"
                                PPTREE _ptTree1= (PPTREE) 0,_ptRes1= (PPTREE) 0;
#line 495 "speed.ch"
                                _ptRes1 = MakeTree(metalang::IDENT, 1);
#line 495 "speed.ch"
                                _ptTree1 = MakeString("_ROOT_") ;
#line 495 "speed.ch"
                                ReplaceTree(_ptRes1, 1, _ptTree1);
#line 495 "speed.ch"
                                _ptTree0 = _ptRes1;
#line 495 "speed.ch"
                            }
#line 495 "speed.ch"
                            ReplaceTree(_ptRes0, 1, _ptTree0);
#line 495 "speed.ch"
                            _Baum0 = _ptRes0;
#line 495 "speed.ch"
                        }
#line 495 "speed.ch"
                        
#line 495 "speed.ch"
#line 495 "speed.ch"
                        FunctionExpand(elem, ptTabList, _Baum0);
#line 495 "speed.ch"
#line 496 "speed.ch"
                        
#line 496 "speed.ch"
#line 496 "speed.ch"
                    }
#line 496 "speed.ch"
#line 497 "speed.ch"
    delete ptTabList ;
#line 497 "speed.ch"
#line 500 "speed.ch"
    (list=listFunc);
#line 500 "speed.ch"
    
#line 500 "speed.ch"
#line 501 "speed.ch"
    while ( list ) {
#line 501 "speed.ch"
#line 502 "speed.ch"
                        (elem=(list?list.Nextl():(PPTREE)0));
#line 502 "speed.ch"
                        
#line 502 "speed.ch"
#line 503 "speed.ch"
                        FunctionSort(elem);
#line 503 "speed.ch"
#line 504 "speed.ch"
                        
#line 504 "speed.ch"
#line 504 "speed.ch"
                    }
#line 504 "speed.ch"
#line 507 "speed.ch"
#if 0
#line 507 "speed.ch"
#line 508 "speed.ch"
    listFuncNoStop = (PPTREE) 0 ;
#line 508 "speed.ch"
    
#line 508 "speed.ch"
#line 509 "speed.ch"
    rootTree = (PPTREE) 0 ;
#line 509 "speed.ch"
    
#line 509 "speed.ch"
#line 509 "speed.ch"
    
#line 509 "speed.ch"
#endif
    
#line 509 "speed.ch"
#line 513 "speed.ch"
    if ( !listFuncToken ) {
#line 513 "speed.ch"
#line 514 "speed.ch"
                                listFuncToken = new TabList(listFunc);
#line 514 "speed.ch"
#line 515 "speed.ch"
                                listFuncToken -> Sort();
#line 515 "speed.ch"
#line 516 "speed.ch"
                                (list=listFunc);
#line 516 "speed.ch"
                                
#line 516 "speed.ch"
#line 517 "speed.ch"
                                while ( ((elem=(list?list.Nextl():(PPTREE)0))) ) {
#line 517 "speed.ch"
#line 518 "speed.ch"
                                                                                        {
#line 518 "speed.ch"
                                                                                            PPTREE _ptTree0= (PPTREE) 0 ;
#line 518 "speed.ch"
                                                                                            {
#line 518 "speed.ch"
                                                                                                PPTREE _ptTree1= (PPTREE) 0,_ptRes1= (PPTREE) 0;
#line 518 "speed.ch"
                                                                                                _ptRes1 = MakeTree(metalang::IDENT, 1);
#line 518 "speed.ch"
                                                                                                _ptTree1 = StoreRef(MakeString(Value(elem)));
#line 518 "speed.ch"
                                                                                                ReplaceTree(_ptRes1, 1, _ptTree1);
#line 518 "speed.ch"
                                                                                                _ptTree0 = _ptRes1;
#line 518 "speed.ch"
                                                                                            }
#line 518 "speed.ch"
                                                                                            newList =  AddList( newList,_ptTree0);
#line 518 "speed.ch"
                                                                                        }
#line 518 "speed.ch"
                                                                                        
#line 518 "speed.ch"
#line 519 "speed.ch"
                                                                                        
#line 519 "speed.ch"
#line 519 "speed.ch"
                                                                                      }
#line 519 "speed.ch"
#line 520 "speed.ch"
                                {
#line 520 "speed.ch"
                                    PPTREE _ptTree0= (PPTREE) 0,_ptRes0= (PPTREE) 0;
#line 520 "speed.ch"
                                    _ptRes0 = MakeTree(LIST, 2);
#line 520 "speed.ch"
                                    ReplaceTree(_ptRes0, 1, newList);
#line 520 "speed.ch"
                                    listLevel = _ptRes0;
#line 520 "speed.ch"
                                }
#line 520 "speed.ch"
                                
#line 520 "speed.ch"
#line 521 "speed.ch"
                                
#line 521 "speed.ch"
#line 521 "speed.ch"
                            } else 
#line 521 "speed.ch"
    {
#line 521 "speed.ch"
#line 525 "speed.ch"
        (list=listFunc);
#line 525 "speed.ch"
        
#line 525 "speed.ch"
#line 526 "speed.ch"
        while ( ((elem=(list?list.Nextl():(PPTREE)0))) ) {
#line 526 "speed.ch"
#line 527 "speed.ch"
                                                                if ( !(*listFuncToken)[elem] ) {
#line 527 "speed.ch"
#line 528 "speed.ch"
                                                                                                        {
#line 528 "speed.ch"
                                                                                                            PPTREE _ptTree0= (PPTREE) 0 ;
#line 528 "speed.ch"
                                                                                                            {
#line 528 "speed.ch"
                                                                                                                PPTREE _ptTree1= (PPTREE) 0,_ptRes1= (PPTREE) 0;
#line 528 "speed.ch"
                                                                                                                _ptRes1 = MakeTree(metalang::IDENT, 1);
#line 528 "speed.ch"
                                                                                                                _ptTree1 = StoreRef(MakeString(Value(elem)));
#line 528 "speed.ch"
                                                                                                                ReplaceTree(_ptRes1, 1, _ptTree1);
#line 528 "speed.ch"
                                                                                                                _ptTree0 = _ptRes1;
#line 528 "speed.ch"
                                                                                                            }
#line 528 "speed.ch"
                                                                                                            newList =  AddList( newList,_ptTree0);
#line 528 "speed.ch"
                                                                                                        }
#line 528 "speed.ch"
                                                                                                        
#line 528 "speed.ch"
#line 529 "speed.ch"
                                                                                                        
#line 529 "speed.ch"
#line 529 "speed.ch"
                                                                                                    }
#line 529 "speed.ch"
#line 530 "speed.ch"
                                                                listFuncToken -> InsertRemove(elem);
#line 530 "speed.ch"
#line 531 "speed.ch"
                                                                
#line 531 "speed.ch"
#line 531 "speed.ch"
                                                              }
#line 531 "speed.ch"
#line 534 "speed.ch"
        {
#line 534 "speed.ch"
            PPTREE _ptTree0= (PPTREE) 0 ;
#line 534 "speed.ch"
            listLevel =  AddList( listLevel,newList);
#line 534 "speed.ch"
        }
#line 534 "speed.ch"
        
#line 534 "speed.ch"
#line 535 "speed.ch"
        
#line 535 "speed.ch"
#line 535 "speed.ch"
    }
    
#line 535 "speed.ch"
#line 538 "speed.ch"
    listFuncToken -> Sort();
#line 538 "speed.ch"
#line 542 "speed.ch"
    (list=listLevel);
#line 542 "speed.ch"
    
#line 542 "speed.ch"
#line 543 "speed.ch"
    while ( list ) {
#line 543 "speed.ch"
#line 544 "speed.ch"
                        (elem=(list?list.Nextl():(PPTREE)0));
#line 544 "speed.ch"
                        
#line 544 "speed.ch"
#line 545 "speed.ch"
                        while ( ((name=(elem?elem.Nextl():(PPTREE)0))) ) {
#line 545 "speed.ch"
#line 546 "speed.ch"
                                                                                (function=FuncAccelerator(name));
#line 546 "speed.ch"
                                                                                
#line 546 "speed.ch"
#line 547 "speed.ch"
                                                                                
#line 547 "speed.ch"
#line 547 "speed.ch"
                                                                              }
#line 547 "speed.ch"
#line 548 "speed.ch"
                        
#line 548 "speed.ch"
#line 548 "speed.ch"
                    }
#line 548 "speed.ch"
#line 549 "speed.ch"
    
#line 549 "speed.ch"
#line 549 "speed.ch"
}
#line 549 "speed.ch"

#line 562 "speed.ch"

#line 562 "speed.ch"
void FreeArrayEntry ()
#line 562 "speed.ch"
{
#line 562 "speed.ch"
#line 562 "speed.ch"
    int _nextVal ;
    
#line 562 "speed.ch"
#line 565 "speed.ch"
    PARRAY_ENTRY    pt = listArrayEntry ;
    
#line 565 "speed.ch"
#line 567 "speed.ch"
    while ( pt -> next ) 
#line 567 "speed.ch"
#line 568 "speed.ch"
        pt = pt -> next ;
#line 568 "speed.ch"
#line 569 "speed.ch"
    pt -> next = listArrayEntryFree ;
#line 569 "speed.ch"
#line 570 "speed.ch"
    listArrayEntryFree = listArrayEntry ;
#line 570 "speed.ch"
#line 571 "speed.ch"
    arrayEntryCurrent = listArrayEntry = (PARRAY_ENTRY)0 ;
#line 571 "speed.ch"
#line 572 "speed.ch"
    nbArrayEntry = 0 ;
#line 572 "speed.ch"
#line 573 "speed.ch"
    
#line 573 "speed.ch"
#line 573 "speed.ch"
}
#line 573 "speed.ch"

#line 575 "speed.ch"

#line 575 "speed.ch"
PARRAY_ENTRY AllocArrayEntryUnit ()
#line 575 "speed.ch"
{
#line 575 "speed.ch"
#line 575 "speed.ch"
    int _nextVal ;
    
#line 575 "speed.ch"
#line 577 "speed.ch"
    PARRAY_ENTRY    pt ;
    
#line 577 "speed.ch"
#line 579 "speed.ch"
    if ( listArrayEntryFree ) {
#line 579 "speed.ch"
#line 580 "speed.ch"
                                pt = listArrayEntryFree ;
#line 580 "speed.ch"
#line 581 "speed.ch"
                                listArrayEntryFree = listArrayEntryFree -> next ;
#line 581 "speed.ch"
#line 582 "speed.ch"
                                
#line 582 "speed.ch"
#line 582 "speed.ch"
                               } else 
#line 582 "speed.ch"
    {
#line 582 "speed.ch"
#line 583 "speed.ch"
        pt = (PARRAY_ENTRY)malloc(sizeof(ARRAY_ENTRY));
#line 583 "speed.ch"
#line 584 "speed.ch"
        
#line 584 "speed.ch"
#line 584 "speed.ch"
    }
    
#line 584 "speed.ch"
#line 585 "speed.ch"
    pt -> next = (PARRAY_ENTRY)0 ;
#line 585 "speed.ch"
#line 586 "speed.ch"
    if ( arrayEntryCurrent ) {
#line 586 "speed.ch"
#line 587 "speed.ch"
                                arrayEntryCurrent -> next = pt ;
#line 587 "speed.ch"
#line 588 "speed.ch"
                                
#line 588 "speed.ch"
#line 588 "speed.ch"
                              } else 
#line 588 "speed.ch"
#line 589 "speed.ch"
        listArrayEntry = pt ;
#line 589 "speed.ch"
    
#line 589 "speed.ch"
#line 590 "speed.ch"
    arrayEntryCurrent = pt ;
#line 590 "speed.ch"
#line 591 "speed.ch"
    return pt ;
    
#line 591 "speed.ch"
#line 592 "speed.ch"
    
#line 592 "speed.ch"
#line 592 "speed.ch"
}
#line 592 "speed.ch"

#line 594 "speed.ch"

#line 594 "speed.ch"
PTREE FuncAccelerator ( PTREE funcName )
#line 594 "speed.ch"
{
#line 594 "speed.ch"
    register PPTREE _inter ;
#line 594 "speed.ch"

#line 594 "speed.ch"
#line 594 "speed.ch"
    int _nextVal ;
    
#line 594 "speed.ch"
#line 598 "speed.ch"
    PTREE   funcElem ;
#line 598 "speed.ch"
    
#line 598 "speed.ch"
#line 600 "speed.ch"
    PTREE   tokenElem ;
#line 600 "speed.ch"
    
#line 600 "speed.ch"
#line 601 "speed.ch"
    int lexEntry = -1 ;
    
#line 601 "speed.ch"
#line 602 "speed.ch"
    PTREE   lexEntryFunc ;
#line 602 "speed.ch"
    
#line 602 "speed.ch"
#line 604 "speed.ch"
    if ( metaQuick ) 
#line 604 "speed.ch"
#line 605 "speed.ch"
        return (PTREE)0 ;
    
#line 605 "speed.ch"
#line 608 "speed.ch"
    if ( ((funcElem=(PPTREE)(*listFuncToken)[funcName])) ) {
#line 608 "speed.ch"
#line 609 "speed.ch"
                                                                    PTREE   ptArray ;
#line 609 "speed.ch"
                                                                    
#line 609 "speed.ch"
#line 610 "speed.ch"
                                                                    PTREE   funcInit = (PTREE)0 ;
#line 610 "speed.ch"
                                                                    
#line 610 "speed.ch"
#line 610 "speed.ch"
                                                                    (funcInit=funcElem);
#line 610 "speed.ch"
                                                                    
#line 610 "speed.ch"
#line 611 "speed.ch"
                                                                    (funcElem?funcElem.Nextl():(PPTREE)0);
#line 611 "speed.ch"
#line 612 "speed.ch"
                                                                    (ptArray=(funcElem?funcElem.Nextl():(PPTREE)0));
#line 612 "speed.ch"
                                                                    
#line 612 "speed.ch"
#line 616 "speed.ch"
                                                                    if ( !(((_inter = (PPTREE)ptArray,1) && 
#line 616 "speed.ch"
                                                                                (NumberTree(_inter) == LIST) &&
#line 616 "speed.ch"
                                                                                (!SonTree(_inter,1)) &&
#line 616 "speed.ch"
                                                                                (!SonTree(_inter,2)) &&
#line 616 "speed.ch"
                                                                                1)) ) {
#line 616 "speed.ch"
#line 619 "speed.ch"
                                                                                        return ptArray ;
                                                                                        
#line 619 "speed.ch"
#line 620 "speed.ch"
                                                                                        
#line 620 "speed.ch"
#line 620 "speed.ch"
                                                                                      } else 
#line 620 "speed.ch"
                                                                    {
#line 620 "speed.ch"
#line 623 "speed.ch"
                                                                        int nbNoStop = 0 ;
                                                                        
#line 623 "speed.ch"
#line 624 "speed.ch"
                                                                        int getAll = 0 ;
                                                                        
#line 624 "speed.ch"
#line 627 "speed.ch"
                                                                        {
#line 627 "speed.ch"
#line 628 "speed.ch"
                                                                            int i ;
                                                                            
#line 628 "speed.ch"
#line 629 "speed.ch"
#line 629 "speed.ch"
                                                                            for ( i = MAX_TOKEN / 8 ; i-- ; ) 
#line 629 "speed.ch"
#line 630 "speed.ch"
                                                                                arrayEntry [i] = '\0';
#line 630 "speed.ch"
                                                                            
#line 630 "speed.ch"
#line 631 "speed.ch"
                                                                            
#line 631 "speed.ch"
#line 631 "speed.ch"
                                                                        }
                                                                        
#line 631 "speed.ch"
#line 634 "speed.ch"
                                                                        {
#line 634 "speed.ch"
#line 635 "speed.ch"
                                                                            PTREE   tokenList = (PTREE)0 ;
#line 635 "speed.ch"
                                                                            
#line 635 "speed.ch"
#line 635 "speed.ch"
                                                                            (tokenList=funcElem);
#line 635 "speed.ch"
                                                                            
#line 635 "speed.ch"
#line 636 "speed.ch"
                                                                            while ( ((tokenElem=(tokenList?tokenList.Nextl():(PPTREE)0))) ) {
#line 636 "speed.ch"
#line 639 "speed.ch"
                                                                                                                                                 if ( ((_inter = (PPTREE)tokenElem,1) && 
#line 639 "speed.ch"
                                                                                                                                                        (NumberTree(_inter) == metalang::STRING) &&
#line 639 "speed.ch"
                                                                                                                                                        (!strcmp(Value(SonTree(_inter,1)),"_ALL_")) &&
#line 639 "speed.ch"
                                                                                                                                                        1) ) {
#line 639 "speed.ch"
#line 640 "speed.ch"
                                                                                                                                                             getAll = 1 ;
#line 640 "speed.ch"
#line 641 "speed.ch"
                                                                                                                                                             break ;
                                                                                                                                                             
#line 641 "speed.ch"
#line 642 "speed.ch"
                                                                                                                                                             
#line 642 "speed.ch"
#line 642 "speed.ch"
                                                                                                                                                             } else 
#line 642 "speed.ch"
                                                                                                                                                 if ( ((_inter = (PPTREE)tokenElem,1) && 
#line 642 "speed.ch"
                                                                                                                                                        (NumberTree(_inter) == metalang::STRING) &&
#line 642 "speed.ch"
                                                                                                                                                        (!strcmp(Value(SonTree(_inter,1)),"_NO_STOP_ALL_")) &&
#line 642 "speed.ch"
                                                                                                                                                        1) ) {
#line 642 "speed.ch"
#line 643 "speed.ch"
                                                                                                                                                             nbNoStop += 1 ;
#line 643 "speed.ch"
#line 644 "speed.ch"
                                                                                                                                                             continue ;
                                                                                                                                                             
#line 644 "speed.ch"
#line 645 "speed.ch"
                                                                                                                                                             
#line 645 "speed.ch"
#line 645 "speed.ch"
                                                                                                                                                             } else 
#line 645 "speed.ch"
                                                                                                                                                 if ( ((_inter = (PPTREE)tokenElem,1) && 
#line 645 "speed.ch"
                                                                                                                                                        (NumberTree(_inter) == metalang::STRING) &&
#line 645 "speed.ch"
                                                                                                                                                        (!strcmp(Value(SonTree(_inter,1)),"_NO_STOP_ALL_FOUND_")) &&
#line 645 "speed.ch"
                                                                                                                                                        1) ) {
#line 645 "speed.ch"
#line 646 "speed.ch"
                                                                                                                                                             nbNoStop -= 1 ;
#line 646 "speed.ch"
#line 647 "speed.ch"
                                                                                                                                                             continue ;
                                                                                                                                                             
#line 647 "speed.ch"
#line 648 "speed.ch"
                                                                                                                                                             
#line 648 "speed.ch"
#line 648 "speed.ch"
                                                                                                                                                             }
#line 648 "speed.ch"
#line 649 "speed.ch"
                                                                                                                                                 
#line 649 "speed.ch"
#line 649 "speed.ch"
                                                                                                                                                 }
#line 649 "speed.ch"
#line 650 "speed.ch"
                                                                            
#line 650 "speed.ch"
#line 650 "speed.ch"
                                                                        }
                                                                        
#line 650 "speed.ch"
#line 655 "speed.ch"
                                                                        if ( getAll || nbNoStop ) {
#line 655 "speed.ch"
#line 656 "speed.ch"
                                                                                                        PTREE   listToken ;
#line 656 "speed.ch"
                                                                                                        
#line 656 "speed.ch"
#line 657 "speed.ch"
                                                                                                        int oldOutput = output ;
                                                                                                        
#line 657 "speed.ch"
#line 658 "speed.ch"
                                                                                                        bool    noStopAllFound = false ;
                                                                                                        
#line 658 "speed.ch"
#line 659 "speed.ch"
                                                                                                        (listToken=GetTokensFunctionName(funcName));
#line 659 "speed.ch"
                                                                                                        
#line 659 "speed.ch"
#line 660 "speed.ch"
                                                                                                        while ( ((tokenElem=(listToken?listToken.Nextl():(PPTREE)0))) ) {
#line 660 "speed.ch"
#line 661 "speed.ch"
                                                                                                                                                                             if ( ((_inter = (PPTREE)tokenElem,1) && 
#line 661 "speed.ch"
                                                                                                                                                                                    (NumberTree(_inter) == metalang::STRING) &&
#line 661 "speed.ch"
                                                                                                                                                                                    (!strcmp(Value(SonTree(_inter,1)),"_ALL_")) &&
#line 661 "speed.ch"
                                                                                                                                                                                    1) ) {
#line 661 "speed.ch"
#line 662 "speed.ch"
                                                                                                                                                                                         output = 2 ;
#line 662 "speed.ch"
#line 663 "speed.ch"
                                                                                                                                                                                         gotocol(1);
#line 663 "speed.ch"
#line 664 "speed.ch"
                                                                                                                                                                                         PrintString("Warning -> Rule may take all tokens");
#line 664 "speed.ch"
#line 664 "speed.ch"
                                                                                                                                                                                         LNewLine(1);
#line 664 "speed.ch"
                                                                                                                                                                                         
#line 664 "speed.ch"
#line 665 "speed.ch"
                                                                                                                                                                                         output = oldOutput ;
#line 665 "speed.ch"
#line 666 "speed.ch"
                                                                                                                                                                                         break ;
                                                                                                                                                                                         
#line 666 "speed.ch"
#line 667 "speed.ch"
                                                                                                                                                                                         
#line 667 "speed.ch"
#line 667 "speed.ch"
                                                                                                                                                                                         } else 
#line 667 "speed.ch"
                                                                                                                                                                             if ( ((_inter = (PPTREE)tokenElem,1) && 
#line 667 "speed.ch"
                                                                                                                                                                                    (NumberTree(_inter) == metalang::STRING) &&
#line 667 "speed.ch"
                                                                                                                                                                                    (!strcmp(Value(SonTree(_inter,1)),"_NO_STOP_ALL_FOUND_")) &&
#line 667 "speed.ch"
                                                                                                                                                                                    1) ) {
#line 667 "speed.ch"
#line 668 "speed.ch"
                                                                                                                                                                                         noStopAllFound = true ;
#line 668 "speed.ch"
#line 669 "speed.ch"
                                                                                                                                                                                         continue ;
                                                                                                                                                                                         
#line 669 "speed.ch"
#line 670 "speed.ch"
                                                                                                                                                                                         
#line 670 "speed.ch"
#line 670 "speed.ch"
                                                                                                                                                                                         } else 
#line 670 "speed.ch"
                                                                                                                                                                             if ( !noStopAllFound && ((_inter = (PPTREE)tokenElem,1) && 
#line 670 "speed.ch"
                                                                                                                                                                                                         (NumberTree(_inter) == metalang::STRING) &&
#line 670 "speed.ch"
                                                                                                                                                                                                         (!strcmp(Value(SonTree(_inter,1)),"_NO_STOP_ALL_")) &&
#line 670 "speed.ch"
                                                                                                                                                                                                         1) ) {
#line 670 "speed.ch"
#line 671 "speed.ch"
                                                                                                                                                                                                              output = 2 ;
#line 671 "speed.ch"
#line 672 "speed.ch"
                                                                                                                                                                                                              gotocol(1);
#line 672 "speed.ch"
#line 673 "speed.ch"
                                                                                                                                                                                                              PrintString("Warning -> Rule must allways be looked at");
#line 673 "speed.ch"
#line 673 "speed.ch"
                                                                                                                                                                                                              LNewLine(1);
#line 673 "speed.ch"
                                                                                                                                                                                                              
#line 673 "speed.ch"
#line 674 "speed.ch"
                                                                                                                                                                                                              output = oldOutput ;
#line 674 "speed.ch"
#line 675 "speed.ch"
                                                                                                                                                                                                              break ;
                                                                                                                                                                                                              
#line 675 "speed.ch"
#line 676 "speed.ch"
                                                                                                                                                                                                              
#line 676 "speed.ch"
#line 676 "speed.ch"
                                                                                                                                                                                                              }
#line 676 "speed.ch"
#line 677 "speed.ch"
                                                                                                                                                                             noStopAllFound = false ;
#line 677 "speed.ch"
#line 678 "speed.ch"
                                                                                                                                                                             
#line 678 "speed.ch"
#line 678 "speed.ch"
                                                                                                                                                                             }
#line 678 "speed.ch"
#line 679 "speed.ch"
                                                                                                        
#line 679 "speed.ch"
#line 679 "speed.ch"
                                                                                                    }
#line 679 "speed.ch"
#line 682 "speed.ch"
                                                                        if ( !getAll && !nbNoStop ) {
#line 682 "speed.ch"
#line 683 "speed.ch"
                                                                                                            PDESCRIPT_ELEM pDescript = (PDESCRIPT_ELEM)0 ;
                                                                                                            
#line 683 "speed.ch"
#line 684 "speed.ch"
                                                                                                            PDESCRIPT_ELEM ptDescriptOld = (PDESCRIPT_ELEM)0 ;
                                                                                                            
#line 684 "speed.ch"
#line 685 "speed.ch"
                                                                                                            int nbToken ;
                                                                                                            
#line 685 "speed.ch"
#line 686 "speed.ch"
                                                                                                            while ( funcElem ) {
#line 686 "speed.ch"
#line 687 "speed.ch"
                                                                                                                                (tokenElem=(funcElem?funcElem.Nextl():(PPTREE)0));
#line 687 "speed.ch"
                                                                                                                                
#line 687 "speed.ch"
#line 692 "speed.ch"
                                                                                                                                if ( ((_inter = (PPTREE)tokenElem,1) && 
#line 692 "speed.ch"
                                                                                                                                       (NumberTree(_inter) == metalang::STRING) &&
#line 692 "speed.ch"
                                                                                                                                       (!strcmp(Value(SonTree(_inter,1)),"_NO_STOP_ALL_")) &&
#line 692 "speed.ch"
                                                                                                                                       1) ) {
#line 692 "speed.ch"
#line 693 "speed.ch"
                                                                                                                                            continue ;
                                                                                                                                            
#line 693 "speed.ch"
#line 694 "speed.ch"
                                                                                                                                            
#line 694 "speed.ch"
#line 694 "speed.ch"
                                                                                                                                            } else 
#line 694 "speed.ch"
                                                                                                                                if ( ((_inter = (PPTREE)tokenElem,1) && 
#line 694 "speed.ch"
                                                                                                                                       (NumberTree(_inter) == metalang::STRING) &&
#line 694 "speed.ch"
                                                                                                                                       (!strcmp(Value(SonTree(_inter,1)),"_NO_STOP_ALL_FOUND_")) &&
#line 694 "speed.ch"
                                                                                                                                       1) ) {
#line 694 "speed.ch"
#line 695 "speed.ch"
                                                                                                                                            continue ;
                                                                                                                                            
#line 695 "speed.ch"
#line 696 "speed.ch"
                                                                                                                                            
#line 696 "speed.ch"
#line 696 "speed.ch"
                                                                                                                                            }
#line 696 "speed.ch"
#line 697 "speed.ch"
                                                                                                                                switch ( NumberTree(tokenElem) ) {
#line 697 "speed.ch"
#line 699 "speed.ch"
                                                                                                                                case metalang::TOKEN : 
#line 699 "speed.ch"
#line 699 "speed.ch"
                                                                                                                                _Case69 : 
#line 699 "speed.ch"
#line 699 "speed.ch"
                                                                                                                                ;
#line 699 "speed.ch"
#line 699 "speed.ch"
                                                                                                                                pDescript = FindStringDescript(AddKey(BrainyValue(tokenElem)), tokenElem);
#line 699 "speed.ch"
#line 700 "speed.ch"
                                                                                                                                if ( cplusGen ) 
#line 700 "speed.ch"
#line 701 "speed.ch"
                                                                                                                                nbToken = AddConst(AddKey(BrainyValue(tokenElem)));
#line 701 "speed.ch"
                                                                                                                                else 
#line 701 "speed.ch"
#line 703 "speed.ch"
                                                                                                                                nbToken = AddConst(AddKey(BrainyValue(tokenElem)));
#line 703 "speed.ch"
                                                                                                                                
#line 703 "speed.ch"
#line 704 "speed.ch"
                                                                                                                                break ;
                                                                                                                                
#line 704 "speed.ch"
#line 704 "speed.ch"
                                                                                                                                case metalang::STRING : 
#line 704 "speed.ch"
#line 704 "speed.ch"
                                                                                                                                _Case70 : 
#line 704 "speed.ch"
#line 704 "speed.ch"
                                                                                                                                ;
#line 704 "speed.ch"
#line 704 "speed.ch"
                                                                                                                                goto _Case71 ;
                                                                                                                                
#line 704 "speed.ch"
#line 707 "speed.ch"
                                                                                                                                case metalang::EXCLA : 
#line 707 "speed.ch"
#line 707 "speed.ch"
                                                                                                                                _Case71 : 
#line 707 "speed.ch"
#line 707 "speed.ch"
                                                                                                                                ;
#line 707 "speed.ch"
#line 707 "speed.ch"
                                                                                                                                pDescript = FindStringDescript(SymboName(BrainyValue(tokenElem), 0), tokenElem);
#line 707 "speed.ch"
#line 708 "speed.ch"
                                                                                                                                nbToken = AddConst(SymboName(BrainyValue(tokenElem), 0));
#line 708 "speed.ch"
#line 709 "speed.ch"
                                                                                                                                break ;
                                                                                                                                
#line 709 "speed.ch"
#line 711 "speed.ch"
                                                                                                                                default : 
#line 711 "speed.ch"
#line 711 "speed.ch"
                                                                                                                                _Case72 : 
#line 711 "speed.ch"
#line 711 "speed.ch"
                                                                                                                                ;
#line 711 "speed.ch"
#line 711 "speed.ch"
                                                                                                                                pDescript = (PDESCRIPT_ELEM)0 ;
#line 711 "speed.ch"
#line 712 "speed.ch"
                                                                                                                                lexEntry = -2 ;
#line 712 "speed.ch"
#line 713 "speed.ch"
                                                                                                                                nbToken = 0 ;
#line 713 "speed.ch"
                                                                                                                                }
#line 713 "speed.ch"
                                                                                                                                
#line 713 "speed.ch"
#line 715 "speed.ch"
                                                                                                                                if ( pDescript ) {
#line 715 "speed.ch"
#line 718 "speed.ch"
                                                                                                                                                  if ( lexEntry == -1 ) {
#line 718 "speed.ch"
#line 719 "speed.ch"
                                                                                                                                                                           lexEntry = pDescript -> offset ;
#line 719 "speed.ch"
#line 720 "speed.ch"
                                                                                                                                                                           (lexEntryFunc=pDescript -> proc);
#line 720 "speed.ch"
                                                                                                                                                                           
#line 720 "speed.ch"
#line 721 "speed.ch"
                                                                                                                                                                           ptDescriptOld = pDescript ;
#line 721 "speed.ch"
#line 722 "speed.ch"
                                                                                                                                                                           
#line 722 "speed.ch"
#line 722 "speed.ch"
                                                                                                                                                                           } else 
#line 722 "speed.ch"
                                                                                                                                                  if ( lexEntry != pDescript -> offset ) {
#line 722 "speed.ch"
#line 723 "speed.ch"
                                                                                                                                                                                            int oldOutput = output ;
                                                                                                                                                                                            
#line 723 "speed.ch"
#line 726 "speed.ch"
                                                                                                                                                                                            PDESCRIPT_ELEM ptDescriptMeta = FindStringDescript("META", (PTREE)0);
                                                                                                                                                                                            
#line 726 "speed.ch"
#line 729 "speed.ch"
                                                                                                                                                                                            if ( ptDescriptOld == ptDescriptMeta ) {
#line 729 "speed.ch"
#line 730 "speed.ch"
                                                                                                                                                                                                                                     lexEntry = pDescript -> offset ;
#line 730 "speed.ch"
#line 731 "speed.ch"
                                                                                                                                                                                                                                     (lexEntryFunc=pDescript -> proc);
#line 731 "speed.ch"
                                                                                                                                                                                                                                     
#line 731 "speed.ch"
#line 732 "speed.ch"
                                                                                                                                                                                                                                     ptDescriptOld = pDescript ;
#line 732 "speed.ch"
#line 733 "speed.ch"
                                                                                                                                                                                                                                     
#line 733 "speed.ch"
#line 733 "speed.ch"
                                                                                                                                                                                                                                     }
#line 733 "speed.ch"
#line 736 "speed.ch"
                                                                                                                                                                                            if ( pDescript != ptDescriptMeta ) {
#line 736 "speed.ch"
#line 739 "speed.ch"
                                                                                                                                                                                                                                 output = 2 ;
#line 739 "speed.ch"
#line 740 "speed.ch"
                                                                                                                                                                                                                                 gotocol(1);
#line 740 "speed.ch"
#line 741 "speed.ch"
                                                                                                                                                                                                                                 PrintString("Warning -> Rule use lex entry : ");
#line 741 "speed.ch"
#line 741 "speed.ch"
                                                                                                                                                                                                                                 WriteString(Value(lexEntryFunc));
#line 741 "speed.ch"
#line 741 "speed.ch"
                                                                                                                                                                                                                                 PrintString(" and ");
#line 741 "speed.ch"
#line 741 "speed.ch"
                                                                                                                                                                                                                                 WriteString(Value(pDescript -> proc));
#line 741 "speed.ch"
#line 741 "speed.ch"
                                                                                                                                                                                                                                 LNewLine(1);
#line 741 "speed.ch"
                                                                                                                                                                                                                                 
#line 741 "speed.ch"
#line 742 "speed.ch"
                                                                                                                                                                                                                                 gotocol(1);
#line 742 "speed.ch"
#line 743 "speed.ch"
                                                                                                                                                                                                                                 WriteString("    For entries ");
#line 743 "speed.ch"
#line 743 "speed.ch"
                                                                                                                                                                                                                                 WriteString(pDescript -> name);
#line 743 "speed.ch"
#line 743 "speed.ch"
                                                                                                                                                                                                                                 WriteString(" And ");
#line 743 "speed.ch"
#line 743 "speed.ch"
                                                                                                                                                                                                                                 WriteString(ptDescriptOld -> name);
#line 743 "speed.ch"
#line 743 "speed.ch"
                                                                                                                                                                                                                                 LNewLine(1);
#line 743 "speed.ch"
                                                                                                                                                                                                                                 
#line 743 "speed.ch"
#line 744 "speed.ch"
                                                                                                                                                                                                                                 output = oldOutput ;
#line 744 "speed.ch"
#line 745 "speed.ch"
                                                                                                                                                                                                                                 lexEntry = -1 ;
#line 745 "speed.ch"
#line 746 "speed.ch"
                                                                                                                                                                                                                                 break ;
                                                                                                                                                                                                                                 
#line 746 "speed.ch"
#line 747 "speed.ch"
                                                                                                                                                                                                                                 
#line 747 "speed.ch"
#line 747 "speed.ch"
                                                                                                                                                                                                                                 }
#line 747 "speed.ch"
#line 748 "speed.ch"
                                                                                                                                                                                            
#line 748 "speed.ch"
#line 748 "speed.ch"
                                                                                                                                                                                            }
#line 748 "speed.ch"
#line 751 "speed.ch"
                                                                                                                                                  SET_ARRAY_VALUE(arrayEntry, nbToken);
#line 751 "speed.ch"
#line 752 "speed.ch"
                                                                                                                                                  
#line 752 "speed.ch"
#line 752 "speed.ch"
                                                                                                                                                  } else 
#line 752 "speed.ch"
                                                                                                                                {
#line 752 "speed.ch"
#line 753 "speed.ch"
                                                                                                                                lexEntry = -2 ;
#line 753 "speed.ch"
#line 754 "speed.ch"
                                                                                                                                break ;
                                                                                                                                
#line 754 "speed.ch"
#line 755 "speed.ch"
                                                                                                                                
#line 755 "speed.ch"
#line 755 "speed.ch"
                                                                                                                                }
                                                                                                                                
#line 755 "speed.ch"
#line 756 "speed.ch"
                                                                                                                                
#line 756 "speed.ch"
#line 756 "speed.ch"
                                                                                                                                }
#line 756 "speed.ch"
#line 757 "speed.ch"
                                                                                                            
#line 757 "speed.ch"
#line 757 "speed.ch"
                                                                                                        }
#line 757 "speed.ch"
#line 760 "speed.ch"
                                                                        if ( FindStringDescript("META", (PTREE)0) ) {
#line 760 "speed.ch"
#line 761 "speed.ch"
                                                                                                                         int nbToken = AddConst("META");
                                                                                                                         
#line 761 "speed.ch"
#line 762 "speed.ch"
                                                                                                                         SET_ARRAY_VALUE(arrayEntry, nbToken);
#line 762 "speed.ch"
#line 763 "speed.ch"
                                                                                                                         
#line 763 "speed.ch"
#line 763 "speed.ch"
                                                                                                                         }
#line 763 "speed.ch"
#line 764 "speed.ch"
                                                                        if ( nbNoStop > 0 ) 
#line 764 "speed.ch"
#line 765 "speed.ch"
                                                                            lexEntry = -3 ;
#line 765 "speed.ch"
#line 769 "speed.ch"
                                                                        (funcElem=funcInit);
#line 769 "speed.ch"
                                                                        
#line 769 "speed.ch"
#line 770 "speed.ch"
                                                                        (funcElem?funcElem.Nextl():(PPTREE)0);
#line 770 "speed.ch"
#line 771 "speed.ch"
                                                                        if ( lexEntry >= 0 ) {
#line 771 "speed.ch"
#line 772 "speed.ch"
                                                                                                PARRAY_ENTRY    pt = AllocArrayEntryUnit();
                                                                                                
#line 772 "speed.ch"
#line 773 "speed.ch"
                                                                                                memcpy(pt -> arrayEntry, arrayEntry, MAX_TOKEN / 8);
#line 773 "speed.ch"
#line 775 "speed.ch"
                                                                                                {
#line 775 "speed.ch"
#line 775 "speed.ch"
                                                                                                    char    name [20];
                                                                                                    
#line 775 "speed.ch"
#line 776 "speed.ch"
                                                                                                    sprintf(name, "%d", nbArrayEntry++);
#line 776 "speed.ch"
#line 777 "speed.ch"
                                                                                                    {
#line 777 "speed.ch"
                                                                                                        PPTREE _ptTree0= (PPTREE) 0,_sonTree0= (PPTREE) 0 ;
#line 777 "speed.ch"
                                                                                                        {
#line 777 "speed.ch"
                                                                                                            PPTREE _ptTree1= (PPTREE) 0,_ptRes1= (PPTREE) 0;
#line 777 "speed.ch"
                                                                                                            _ptRes1 = MakeTree(LIST, 2);
#line 777 "speed.ch"
                                                                                                            {
#line 777 "speed.ch"
                                                                                                                PPTREE _ptTree2= (PPTREE) 0,_ptRes2= (PPTREE) 0;
#line 777 "speed.ch"
                                                                                                                _ptRes2 = MakeTree(LIST, 2);
#line 777 "speed.ch"
                                                                                                                {
#line 777 "speed.ch"
                                                                                                                    PPTREE _ptTree3= (PPTREE) 0,_ptRes3= (PPTREE) 0;
#line 777 "speed.ch"
                                                                                                                    _ptRes3 = MakeTree(metalang::NUMB, 1);
#line 777 "speed.ch"
                                                                                                                    _ptTree3 = StoreRef(MakeString(name));
#line 777 "speed.ch"
                                                                                                                    ReplaceTree(_ptRes3, 1, _ptTree3);
#line 777 "speed.ch"
                                                                                                                    _ptTree2 = _ptRes3;
#line 777 "speed.ch"
                                                                                                                }
#line 777 "speed.ch"
                                                                                                                ReplaceTree(_ptRes2, 1, _ptTree2);
#line 777 "speed.ch"
                                                                                                                _ptTree1 = _ptRes2;
#line 777 "speed.ch"
                                                                                                            }
#line 777 "speed.ch"
                                                                                                            ReplaceTree(_ptRes1, 1, _ptTree1);
#line 777 "speed.ch"
                                                                                                            _ptTree1 = StoreRef(copytree(lexEntryFunc));
#line 777 "speed.ch"
                                                                                                            ReplaceTree(_ptRes1, 2, _ptTree1);
#line 777 "speed.ch"
                                                                                                            _ptTree0 = _ptRes1;
#line 777 "speed.ch"
                                                                                                        }
#line 777 "speed.ch"
                                                                                                        ReplaceTree(funcElem, 1, _ptTree0);
#line 777 "speed.ch"
                                                                                                    }
#line 777 "speed.ch"
                                                                                                    
#line 777 "speed.ch"
#line 778 "speed.ch"
                                                                                                    sprintf(name, "%d", lexEntry);
#line 778 "speed.ch"
#line 779 "speed.ch"
                                                                                                    {
#line 779 "speed.ch"
                                                                                                        PPTREE _ptTree0= (PPTREE) 0,_sonTree0= (PPTREE) 0 ;
#line 779 "speed.ch"
                                                                                                        _sonTree0 = SonTree(funcElem,1);
#line 779 "speed.ch"
                                                                                                        {
#line 779 "speed.ch"
                                                                                                            PPTREE _ptTree1= (PPTREE) 0,_sonTree1= (PPTREE) 0 ;
#line 779 "speed.ch"
                                                                                                            _sonTree1 = SonTree(_sonTree0,1);
#line 779 "speed.ch"
                                                                                                            {
#line 779 "speed.ch"
                                                                                                                PPTREE _ptTree2= (PPTREE) 0,_sonTree2= (PPTREE) 0 ;
#line 779 "speed.ch"
                                                                                                                _ptTree2 = StoreRef(MakeString(name));
#line 779 "speed.ch"
                                                                                                                _ptTree1 = ReplaceTree(_sonTree1, 2, _ptTree2);
#line 779 "speed.ch"
                                                                                                            }
#line 779 "speed.ch"
                                                                                                            _ptTree0 = ReplaceTree(_sonTree0, 1, _ptTree1);
#line 779 "speed.ch"
                                                                                                        }
#line 779 "speed.ch"
                                                                                                        ReplaceTree(funcElem, 1, _ptTree0);
#line 779 "speed.ch"
                                                                                                    }
#line 779 "speed.ch"
                                                                                                    
#line 779 "speed.ch"
#line 780 "speed.ch"
                                                                                                    ((_inter = (PPTREE)funcElem,1) && 
#line 780 "speed.ch"
                                                                                                        ((funcElem=SonTree(_inter,1)),1) &&
#line 780 "speed.ch"
                                                                                                        1);
#line 780 "speed.ch"
                                                                                                    ;
#line 780 "speed.ch"
#line 781 "speed.ch"
                                                                                                    return funcElem ;
                                                                                                    
#line 781 "speed.ch"
#line 782 "speed.ch"
                                                                                                    
#line 782 "speed.ch"
#line 782 "speed.ch"
                                                                                                }
                                                                                                
#line 782 "speed.ch"
#line 783 "speed.ch"
                                                                                                
#line 783 "speed.ch"
#line 783 "speed.ch"
                                                                                               } else 
#line 783 "speed.ch"
                                                                        {
#line 783 "speed.ch"
#line 784 "speed.ch"
                                                                            PARRAY_ENTRY    pt = AllocArrayEntryUnit();
                                                                            
#line 784 "speed.ch"
#line 785 "speed.ch"
                                                                            if ( lexEntry == -2 ) {
#line 785 "speed.ch"
#line 786 "speed.ch"
                                                                                                        int oldOutput = output ;
                                                                                                        
#line 786 "speed.ch"
#line 789 "speed.ch"
                                                                                                        output = 2 ;
#line 789 "speed.ch"
#line 792 "speed.ch"
                                                                                                        gotocol(1);
#line 792 "speed.ch"
#line 793 "speed.ch"
                                                                                                        PrintString("Warning -> no lex entry for : ");
#line 793 "speed.ch"
#line 794 "speed.ch"
                                                                                                        switch ( NumberTree(tokenElem) ) {
#line 794 "speed.ch"
#line 795 "speed.ch"
                                                                                                            case metalang::TOKEN : 
#line 795 "speed.ch"
#line 795 "speed.ch"
                                                                                                            _Case73 : 
#line 795 "speed.ch"
#line 795 "speed.ch"
                                                                                                                ;
#line 795 "speed.ch"
#line 795 "speed.ch"
                                                                                                                PrintString("#");
#line 795 "speed.ch"
#line 795 "speed.ch"
                                                                                                                goto _Case74 ;
                                                                                                                
#line 795 "speed.ch"
#line 797 "speed.ch"
                                                                                                            case metalang::STRING : 
#line 797 "speed.ch"
#line 797 "speed.ch"
                                                                                                            _Case74 : 
#line 797 "speed.ch"
#line 797 "speed.ch"
                                                                                                                ;
#line 797 "speed.ch"
#line 797 "speed.ch"
                                                                                                                PrintString("\"");
#line 797 "speed.ch"
#line 797 "speed.ch"
                                                                                                                WriteString(BrainyValue(tokenElem));
#line 797 "speed.ch"
#line 797 "speed.ch"
                                                                                                                PrintString("\"");
#line 797 "speed.ch"
#line 798 "speed.ch"
                                                                                                                break ;
                                                                                                                
#line 798 "speed.ch"
#line 800 "speed.ch"
                                                                                                            case metalang::EXCLA : 
#line 800 "speed.ch"
#line 800 "speed.ch"
                                                                                                            _Case75 : 
#line 800 "speed.ch"
#line 800 "speed.ch"
                                                                                                                ;
#line 800 "speed.ch"
#line 800 "speed.ch"
                                                                                                                PrintString("!");
#line 800 "speed.ch"
#line 800 "speed.ch"
                                                                                                                WriteString(BrainyValue(tokenElem));
#line 800 "speed.ch"
#line 801 "speed.ch"
                                                                                                                break ;
                                                                                                                
#line 801 "speed.ch"
                                                                                                        }
#line 801 "speed.ch"
                                                                                                        
#line 801 "speed.ch"
#line 803 "speed.ch"
                                                                                                        LNewLine(1);
#line 803 "speed.ch"
                                                                                                        
#line 803 "speed.ch"
#line 804 "speed.ch"
                                                                                                        output = oldOutput ;
#line 804 "speed.ch"
#line 805 "speed.ch"
                                                                                                        
#line 805 "speed.ch"
#line 805 "speed.ch"
                                                                                                     }
#line 805 "speed.ch"
#line 811 "speed.ch"
                                                                            {
#line 811 "speed.ch"
#line 812 "speed.ch"
                                                                                int i ;
                                                                                
#line 812 "speed.ch"
#line 813 "speed.ch"
#line 813 "speed.ch"
                                                                                for ( i = MAX_TOKEN / 8 ; i-- ; ) 
#line 813 "speed.ch"
#line 814 "speed.ch"
                                                                                    arrayEntry [i] = '\377';
#line 814 "speed.ch"
                                                                                
#line 814 "speed.ch"
#line 815 "speed.ch"
                                                                                
#line 815 "speed.ch"
#line 815 "speed.ch"
                                                                            }
                                                                            
#line 815 "speed.ch"
#line 816 "speed.ch"
                                                                            memcpy(pt -> arrayEntry, arrayEntry, MAX_TOKEN / 8);
#line 816 "speed.ch"
#line 818 "speed.ch"
                                                                            {
#line 818 "speed.ch"
#line 818 "speed.ch"
                                                                                char    name [10];
                                                                                
#line 818 "speed.ch"
#line 819 "speed.ch"
                                                                                sprintf(name, "%d", nbArrayEntry++);
#line 819 "speed.ch"
#line 820 "speed.ch"
                                                                                {
#line 820 "speed.ch"
                                                                                    PPTREE _ptTree0= (PPTREE) 0,_sonTree0= (PPTREE) 0 ;
#line 820 "speed.ch"
                                                                                    {
#line 820 "speed.ch"
                                                                                        PPTREE _ptTree1= (PPTREE) 0,_ptRes1= (PPTREE) 0;
#line 820 "speed.ch"
                                                                                        _ptRes1 = MakeTree(LIST, 2);
#line 820 "speed.ch"
                                                                                        {
#line 820 "speed.ch"
                                                                                            PPTREE _ptTree2= (PPTREE) 0,_ptRes2= (PPTREE) 0;
#line 820 "speed.ch"
                                                                                            _ptRes2 = MakeTree(LIST, 2);
#line 820 "speed.ch"
                                                                                            {
#line 820 "speed.ch"
                                                                                                PPTREE _ptTree3= (PPTREE) 0,_ptRes3= (PPTREE) 0;
#line 820 "speed.ch"
                                                                                                _ptRes3 = MakeTree(metalang::NUMB, 1);
#line 820 "speed.ch"
                                                                                                _ptTree3 = StoreRef(MakeString(name));
#line 820 "speed.ch"
                                                                                                ReplaceTree(_ptRes3, 1, _ptTree3);
#line 820 "speed.ch"
                                                                                                _ptTree2 = _ptRes3;
#line 820 "speed.ch"
                                                                                            }
#line 820 "speed.ch"
                                                                                            ReplaceTree(_ptRes2, 1, _ptTree2);
#line 820 "speed.ch"
                                                                                            _ptTree1 = _ptRes2;
#line 820 "speed.ch"
                                                                                        }
#line 820 "speed.ch"
                                                                                        ReplaceTree(_ptRes1, 1, _ptTree1);
#line 820 "speed.ch"
                                                                                        _ptTree1 = StoreRef(MakeString("0"));
#line 820 "speed.ch"
                                                                                        ReplaceTree(_ptRes1, 2, _ptTree1);
#line 820 "speed.ch"
                                                                                        _ptTree0 = _ptRes1;
#line 820 "speed.ch"
                                                                                    }
#line 820 "speed.ch"
                                                                                    ReplaceTree(funcElem, 1, _ptTree0);
#line 820 "speed.ch"
                                                                                }
#line 820 "speed.ch"
                                                                                
#line 820 "speed.ch"
#line 821 "speed.ch"
                                                                                sprintf(name, "%d", 0);
#line 821 "speed.ch"
#line 822 "speed.ch"
                                                                                {
#line 822 "speed.ch"
                                                                                    PPTREE _ptTree0= (PPTREE) 0,_sonTree0= (PPTREE) 0 ;
#line 822 "speed.ch"
                                                                                    _sonTree0 = SonTree(funcElem,1);
#line 822 "speed.ch"
                                                                                    {
#line 822 "speed.ch"
                                                                                        PPTREE _ptTree1= (PPTREE) 0,_sonTree1= (PPTREE) 0 ;
#line 822 "speed.ch"
                                                                                        _sonTree1 = SonTree(_sonTree0,1);
#line 822 "speed.ch"
                                                                                        {
#line 822 "speed.ch"
                                                                                            PPTREE _ptTree2= (PPTREE) 0,_sonTree2= (PPTREE) 0 ;
#line 822 "speed.ch"
                                                                                            _ptTree2 = StoreRef(MakeString(name));
#line 822 "speed.ch"
                                                                                            _ptTree1 = ReplaceTree(_sonTree1, 2, _ptTree2);
#line 822 "speed.ch"
                                                                                        }
#line 822 "speed.ch"
                                                                                        _ptTree0 = ReplaceTree(_sonTree0, 1, _ptTree1);
#line 822 "speed.ch"
                                                                                    }
#line 822 "speed.ch"
                                                                                    ReplaceTree(funcElem, 1, _ptTree0);
#line 822 "speed.ch"
                                                                                }
#line 822 "speed.ch"
                                                                                
#line 822 "speed.ch"
#line 823 "speed.ch"
                                                                                ((_inter = (PPTREE)funcElem,1) && 
#line 823 "speed.ch"
                                                                                    ((funcElem=SonTree(_inter,1)),1) &&
#line 823 "speed.ch"
                                                                                    1);
#line 823 "speed.ch"
                                                                                ;
#line 823 "speed.ch"
#line 824 "speed.ch"
                                                                                
#line 824 "speed.ch"
#line 824 "speed.ch"
                                                                            }
                                                                            
#line 824 "speed.ch"
#line 827 "speed.ch"
                                                                            {
#line 827 "speed.ch"
#line 828 "speed.ch"
                                                                                int oldOutput = output ;
                                                                                
#line 828 "speed.ch"
#line 829 "speed.ch"
                                                                                LNewLine(1);
#line 829 "speed.ch"
                                                                                
#line 829 "speed.ch"
#line 830 "speed.ch"
                                                                                output = 2 ;
#line 830 "speed.ch"
#line 831 "speed.ch"
                                                                                gotocol(1);
#line 831 "speed.ch"
#line 832 "speed.ch"
                                                                                PrintString("Warning ===> not optimized : ");
#line 832 "speed.ch"
#line 832 "speed.ch"
                                                                                WriteString(BrainyValue(funcName));
#line 832 "speed.ch"
#line 832 "speed.ch"
                                                                                LNewLine(2);
#line 832 "speed.ch"
                                                                                
#line 832 "speed.ch"
#line 833 "speed.ch"
                                                                                output = oldOutput ;
#line 833 "speed.ch"
#line 834 "speed.ch"
                                                                                
#line 834 "speed.ch"
#line 834 "speed.ch"
                                                                            }
                                                                            
#line 834 "speed.ch"
#line 835 "speed.ch"
                                                                            return funcElem ;
                                                                            
#line 835 "speed.ch"
#line 836 "speed.ch"
                                                                            
#line 836 "speed.ch"
#line 836 "speed.ch"
                                                                        }
                                                                        
#line 836 "speed.ch"
#line 837 "speed.ch"
                                                                        
#line 837 "speed.ch"
#line 837 "speed.ch"
                                                                    }
                                                                    
#line 837 "speed.ch"
#line 838 "speed.ch"
                                                                    
#line 838 "speed.ch"
#line 838 "speed.ch"
                                                                   }
#line 838 "speed.ch"
#line 841 "speed.ch"
    return (PTREE)0 ;
    
#line 841 "speed.ch"
#line 842 "speed.ch"
    
#line 842 "speed.ch"
#line 842 "speed.ch"
}
#line 842 "speed.ch"

static char stringConvert [4];

#line 849 "speed.ch"

#line 849 "speed.ch"
char *ConvertToOctal ( int numb )
#line 849 "speed.ch"
{
#line 849 "speed.ch"
#line 849 "speed.ch"
    int _nextVal ;
    
#line 849 "speed.ch"
#line 852 "speed.ch"
    int nb1, nb2, nb3 ;
    
#line 852 "speed.ch"
#line 854 "speed.ch"
    nb1 = numb >> 6 & 0x3 ;
#line 854 "speed.ch"
#line 855 "speed.ch"
    nb2 = numb >> 3 & 0x7 ;
#line 855 "speed.ch"
#line 856 "speed.ch"
    nb3 = numb & 0x7 ;
#line 856 "speed.ch"
#line 857 "speed.ch"
    *(stringConvert) = '0' + nb1 ;
#line 857 "speed.ch"
#line 858 "speed.ch"
    *(stringConvert + 1) = '0' + nb2 ;
#line 858 "speed.ch"
#line 859 "speed.ch"
    *(stringConvert + 2) = '0' + nb3 ;
#line 859 "speed.ch"
#line 860 "speed.ch"
    *(stringConvert + 3) = '\0';
#line 860 "speed.ch"
#line 861 "speed.ch"
    return stringConvert ;
    
#line 861 "speed.ch"
#line 862 "speed.ch"
    
#line 862 "speed.ch"
#line 862 "speed.ch"
}
#line 862 "speed.ch"

extern int  numberConst ;

#line 870 "speed.ch"

#line 870 "speed.ch"
void DumpTokenArray ()
#line 870 "speed.ch"
{
#line 870 "speed.ch"
    register PPTREE _inter ;
#line 870 "speed.ch"

#line 870 "speed.ch"
#line 870 "speed.ch"
    int _retVal [4];
    
#line 870 "speed.ch"
#line 870 "speed.ch"
    PPTREE  _storeVal [4];
    
#line 870 "speed.ch"
#line 870 "speed.ch"
    int _nextVal ;
    
#line 870 "speed.ch"
#line 872 "speed.ch"
    PARRAY_ENTRY    ptArray = listArrayEntry ;
    
#line 872 "speed.ch"
#line 873 "speed.ch"
    char    name [20];
    
#line 873 "speed.ch"
#line 874 "speed.ch"
    int ligne, col ;
    
#line 874 "speed.ch"
#line 876 "speed.ch"
    if ( metaQuick ) 
#line 876 "speed.ch"
#line 877 "speed.ch"
        return ;
    
#line 877 "speed.ch"
#line 880 "speed.ch"
    PrintString("/* ");
#line 880 "speed.ch"
#line 880 "speed.ch"
    LNewLine(1);
#line 880 "speed.ch"
    
#line 880 "speed.ch"
#line 881 "speed.ch"
#line 881 "speed.ch"
    for ( ligne = 0 ; ligne < nbArrayEntry ; ligne++ ) {
#line 881 "speed.ch"
#line 882 "speed.ch"
                                                                PTREE   list = (PTREE)0 ;
#line 882 "speed.ch"
                                                                
#line 882 "speed.ch"
#line 882 "speed.ch"
                                                                (list=listFuncToken -> List());
#line 882 "speed.ch"
                                                                
#line 882 "speed.ch"
#line 883 "speed.ch"
                                                                sprintf(name, "%d", ligne);
#line 883 "speed.ch"
#line 884 "speed.ch"
                                                                sprintf(name, "-- %d -- ", ligne);
#line 884 "speed.ch"
#line 885 "speed.ch"
                                                                WriteString(name);
#line 885 "speed.ch"
#line 886 "speed.ch"
                                                                sprintf(name, "%d", ligne);
#line 886 "speed.ch"
#line 889 "speed.ch"
                                                                while ( list ) {
#line 889 "speed.ch"
#line 890 "speed.ch"
                                                                                    PTREE   elem = (PTREE)0 ;
#line 890 "speed.ch"
                                                                                    
#line 890 "speed.ch"
#line 890 "speed.ch"
                                                                                    (elem=(list?list.Nextl():(PPTREE)0));
#line 890 "speed.ch"
                                                                                    
#line 890 "speed.ch"
#line 891 "speed.ch"
                                                                                    if ( !strcmp(Value(sontree(elem, 2)), name) ) {
#line 891 "speed.ch"
#line 892 "speed.ch"
                                                                                                                                         DumpBrainyValue(elem);
#line 892 "speed.ch"
                                                                                                                                         
#line 892 "speed.ch"
#line 893 "speed.ch"
                                                                                                                                         ((_inter = (PPTREE)elem,1) && 
#line 893 "speed.ch"
                                                                                                                                         (_retVal[1]=((_storeVal[1]=_inter,_inter=SonTree(_inter,2),1) &&
#line 893 "speed.ch"
                                                                                                                                         (_retVal[2]=((_storeVal[2]=_inter,_inter=SonTree(_inter,1),1) &&
#line 893 "speed.ch"
                                                                                                                                         ((elem=SonTree(_inter,2)),1) &&
#line 893 "speed.ch"
                                                                                                                                         1),
#line 893 "speed.ch"
                                                                                                                                         (_inter=_storeVal[2],1),_retVal[2]) &&
#line 893 "speed.ch"
                                                                                                                                         1),
#line 893 "speed.ch"
                                                                                                                                         (_inter=_storeVal[1],1),_retVal[1]) &&
#line 893 "speed.ch"
                                                                                                                                         1);
#line 893 "speed.ch"
                                                                                                                                         ;
#line 893 "speed.ch"
#line 894 "speed.ch"
                                                                                                                                         if ( strcmp(Value(elem), "0") ) {
#line 894 "speed.ch"
#line 895 "speed.ch"
                                                                                                                                                                             LNewLine(1);
#line 895 "speed.ch"
                                                                                                                                                                             
#line 895 "speed.ch"
#line 896 "speed.ch"
                                                                                                                                                                             Tab();
#line 896 "speed.ch"
                                                                                                                                                                             
#line 896 "speed.ch"
#line 897 "speed.ch"
                                                                                                                                                                             Mark();
#line 897 "speed.ch"
#line 897 "speed.ch"
                                                                                                                                                                             for ( col = 0 ; col < numberConst ; col++ ) {
#line 897 "speed.ch"
#line 898 "speed.ch"
                                                                                                                                                                                                                              if ( GET_ARRAY_VALUE(ptArray -> arrayEntry, col) ) 
#line 898 "speed.ch"
#line 899 "speed.ch"
                                                                                                                                                                                                                              WriteString(NameConst(col));
#line 899 "speed.ch"
#line 900 "speed.ch"
                                                                                                                                                                                                                              LNewLine(1);
#line 900 "speed.ch"
                                                                                                                                                                                                                              
#line 900 "speed.ch"
#line 901 "speed.ch"
                                                                                                                                                                                                                              
#line 901 "speed.ch"
#line 901 "speed.ch"
                                                                                                                                                                                                                              }
#line 901 "speed.ch"
                                                                                                                                                                             
#line 901 "speed.ch"
                                                                                                                                                                             UnMark();
#line 901 "speed.ch"
                                                                                                                                                                             
#line 901 "speed.ch"
#line 902 "speed.ch"
                                                                                                                                                                             LNewLine(1);
#line 902 "speed.ch"
                                                                                                                                                                             
#line 902 "speed.ch"
#line 903 "speed.ch"
                                                                                                                                                                             
#line 903 "speed.ch"
#line 903 "speed.ch"
                                                                                                                                                                             } else 
#line 903 "speed.ch"
                                                                                                                                         {
#line 903 "speed.ch"
#line 904 "speed.ch"
                                                                                                                                         LNewLine(1);
#line 904 "speed.ch"
                                                                                                                                         
#line 904 "speed.ch"
#line 905 "speed.ch"
                                                                                                                                         Tab();
#line 905 "speed.ch"
                                                                                                                                         
#line 905 "speed.ch"
#line 905 "speed.ch"
                                                                                                                                         PrintString("ALWAYS");
#line 905 "speed.ch"
#line 905 "speed.ch"
                                                                                                                                         LNewLine(1);
#line 905 "speed.ch"
                                                                                                                                         
#line 905 "speed.ch"
#line 906 "speed.ch"
                                                                                                                                         
#line 906 "speed.ch"
#line 906 "speed.ch"
                                                                                                                                         }
                                                                                                                                         
#line 906 "speed.ch"
#line 907 "speed.ch"
                                                                                                                                         break ;
                                                                                                                                         
#line 907 "speed.ch"
#line 908 "speed.ch"
                                                                                                                                         
#line 908 "speed.ch"
#line 908 "speed.ch"
                                                                                                                                         }
#line 908 "speed.ch"
#line 909 "speed.ch"
                                                                                    
#line 909 "speed.ch"
#line 909 "speed.ch"
                                                                                }
#line 909 "speed.ch"
#line 910 "speed.ch"
                                                                ptArray = ptArray -> next ;
#line 910 "speed.ch"
#line 911 "speed.ch"
                                                                
#line 911 "speed.ch"
#line 911 "speed.ch"
                                                            }
#line 911 "speed.ch"
    
#line 911 "speed.ch"
#line 912 "speed.ch"
    PrintString("*/");
#line 912 "speed.ch"
#line 912 "speed.ch"
    LNewLine(2);
#line 912 "speed.ch"
    
#line 912 "speed.ch"
#line 915 "speed.ch"
    output = houtput ;
#line 915 "speed.ch"
#line 918 "speed.ch"
    sprintf(name, "%d", nbArrayEntry);
#line 918 "speed.ch"
#line 919 "speed.ch"
    if ( cplusGen ) {
#line 919 "speed.ch"
#line 920 "speed.ch"
                        Tab();
#line 920 "speed.ch"
                        
#line 920 "speed.ch"
#line 920 "speed.ch"
                        PrintString("static ");
#line 920 "speed.ch"
#line 921 "speed.ch"
                        
#line 921 "speed.ch"
#line 921 "speed.ch"
                     } else 
#line 921 "speed.ch"
    {
#line 921 "speed.ch"
#line 922 "speed.ch"
        PrintString("extern ");
#line 922 "speed.ch"
#line 923 "speed.ch"
        
#line 923 "speed.ch"
#line 923 "speed.ch"
    }
    
#line 923 "speed.ch"
#line 924 "speed.ch"
    PrintString("signed char * ");
#line 924 "speed.ch"
#line 925 "speed.ch"
    if ( cplusGen ) 
#line 925 "speed.ch"
#line 926 "speed.ch"
        WriteString("_tokenArray");
#line 926 "speed.ch"
    else 
#line 926 "speed.ch"
#line 928 "speed.ch"
        WriteString(NameLang("_tokenArray"));
#line 928 "speed.ch"
    
#line 928 "speed.ch"
#line 929 "speed.ch"
    PrintString(" [");
#line 929 "speed.ch"
#line 929 "speed.ch"
    WriteString(name);
#line 929 "speed.ch"
#line 929 "speed.ch"
    PrintString("];");
#line 929 "speed.ch"
#line 929 "speed.ch"
    LNewLine(1);
#line 929 "speed.ch"
    
#line 929 "speed.ch"
#line 933 "speed.ch"
    if ( cplusGen ) {
#line 933 "speed.ch"
#line 934 "speed.ch"
                        Tab();
#line 934 "speed.ch"
                        
#line 934 "speed.ch"
#line 935 "speed.ch"
                        
#line 935 "speed.ch"
#line 935 "speed.ch"
                     }
#line 935 "speed.ch"
#line 936 "speed.ch"
    PrintString("static int (");
#line 936 "speed.ch"
#line 936 "speed.ch"
    WriteString(LanguageName(LO_CASE));
#line 936 "speed.ch"
#line 936 "speed.ch"
    PrintString("::*(");
#line 936 "speed.ch"
#line 937 "speed.ch"
    if ( cplusGen ) {
#line 937 "speed.ch"
#line 938 "speed.ch"
                        WriteString("_tokenFuncArray");
#line 938 "speed.ch"
#line 939 "speed.ch"
                        
#line 939 "speed.ch"
#line 939 "speed.ch"
                     } else 
#line 939 "speed.ch"
#line 940 "speed.ch"
        WriteString(NameLang("_tokenFuncArray"));
#line 940 "speed.ch"
    
#line 940 "speed.ch"
#line 941 "speed.ch"
    sprintf(name, "%d", nbArrayEntry);
#line 941 "speed.ch"
#line 942 "speed.ch"
    PrintString(" [");
#line 942 "speed.ch"
#line 942 "speed.ch"
    WriteString(name);
#line 942 "speed.ch"
#line 942 "speed.ch"
    PrintString("])) ();");
#line 942 "speed.ch"
#line 942 "speed.ch"
    LNewLine(1);
#line 942 "speed.ch"
    
#line 942 "speed.ch"
#line 943 "speed.ch"
    if ( cplusGen ) {
#line 943 "speed.ch"
#line 944 "speed.ch"
                        Tab();
#line 944 "speed.ch"
                        
#line 944 "speed.ch"
#line 945 "speed.ch"
                        
#line 945 "speed.ch"
#line 945 "speed.ch"
                     }
#line 945 "speed.ch"
#line 946 "speed.ch"
    PrintString("static int ");
#line 946 "speed.ch"
#line 947 "speed.ch"
    if ( cplusGen ) 
#line 947 "speed.ch"
#line 948 "speed.ch"
        WriteString("_tokenNbFuncArray");
#line 948 "speed.ch"
    else 
#line 948 "speed.ch"
#line 950 "speed.ch"
        WriteString(NameLang("_tokenNbFuncArray"));
#line 950 "speed.ch"
    
#line 950 "speed.ch"
#line 951 "speed.ch"
    sprintf(name, "%d", nbArrayEntry);
#line 951 "speed.ch"
#line 952 "speed.ch"
    PrintString(" [");
#line 952 "speed.ch"
#line 952 "speed.ch"
    WriteString(name);
#line 952 "speed.ch"
#line 952 "speed.ch"
    PrintString("];");
#line 952 "speed.ch"
#line 952 "speed.ch"
    LNewLine(2);
#line 952 "speed.ch"
    
#line 952 "speed.ch"
#line 956 "speed.ch"
    if ( (!theUsedGrammar) ) {
#line 956 "speed.ch"
#line 957 "speed.ch"
                                Tab();
#line 957 "speed.ch"
                                
#line 957 "speed.ch"
#line 957 "speed.ch"
                                PrintString("signed char **ptTokenArray;");
#line 957 "speed.ch"
#line 957 "speed.ch"
                                LNewLine(1);
#line 957 "speed.ch"
                                
#line 957 "speed.ch"
#line 958 "speed.ch"
                                Tab();
#line 958 "speed.ch"
                                
#line 958 "speed.ch"
#line 958 "speed.ch"
                                PrintString("int (");
#line 958 "speed.ch"
#line 958 "speed.ch"
                                WriteString(LanguageName(LO_CASE));
#line 958 "speed.ch"
#line 958 "speed.ch"
                                PrintString("::** ptTokenFuncArray) ();");
#line 958 "speed.ch"
#line 958 "speed.ch"
                                LNewLine(1);
#line 958 "speed.ch"
                                
#line 958 "speed.ch"
#line 959 "speed.ch"
                                Tab();
#line 959 "speed.ch"
                                
#line 959 "speed.ch"
#line 959 "speed.ch"
                                PrintString("int *ptTokenNbFuncArray;");
#line 959 "speed.ch"
#line 959 "speed.ch"
                                LNewLine(2);
#line 959 "speed.ch"
                                
#line 959 "speed.ch"
#line 960 "speed.ch"
                                
#line 960 "speed.ch"
#line 960 "speed.ch"
                               }
#line 960 "speed.ch"
#line 963 "speed.ch"
    output = coutput ;
#line 963 "speed.ch"
#line 964 "speed.ch"
    ptArray = listArrayEntry ;
#line 964 "speed.ch"
#line 965 "speed.ch"
    sprintf(name, "%d", nbArrayEntry);
#line 965 "speed.ch"
#line 966 "speed.ch"
    PrintString("signed char *");
#line 966 "speed.ch"
#line 967 "speed.ch"
    if ( cplusGen ) {
#line 967 "speed.ch"
#line 968 "speed.ch"
                        WriteString(LanguageName(LO_CASE));
#line 968 "speed.ch"
#line 968 "speed.ch"
                        WriteString("::");
#line 968 "speed.ch"
#line 968 "speed.ch"
                        WriteString("_tokenArray");
#line 968 "speed.ch"
#line 969 "speed.ch"
                        
#line 969 "speed.ch"
#line 969 "speed.ch"
                     } else 
#line 969 "speed.ch"
    {
#line 969 "speed.ch"
#line 970 "speed.ch"
        WriteString(NameLang("_tokenArray"));
#line 970 "speed.ch"
#line 971 "speed.ch"
        
#line 971 "speed.ch"
#line 971 "speed.ch"
    }
    
#line 971 "speed.ch"
#line 972 "speed.ch"
    PrintString(" [");
#line 972 "speed.ch"
#line 972 "speed.ch"
    WriteString(name);
#line 972 "speed.ch"
#line 972 "speed.ch"
    PrintString("] = ");
#line 972 "speed.ch"
    PrintString("{");
#line 972 "speed.ch"
#line 972 "speed.ch"
    LNewLine(1);
#line 972 "speed.ch"
    
#line 972 "speed.ch"
#line 973 "speed.ch"
    Tab();
#line 973 "speed.ch"
    
#line 973 "speed.ch"
#line 974 "speed.ch"
    Mark();
#line 974 "speed.ch"
#line 974 "speed.ch"
    for ( ligne = 0 ; ligne < nbArrayEntry ; ligne++ ) {
#line 974 "speed.ch"
#line 975 "speed.ch"
                                                                PrintString("(signed char *) \"");
#line 975 "speed.ch"
#line 976 "speed.ch"
#line 976 "speed.ch"
                                                                for ( col = 0 ; col < (numberConst + 8) / 8 ; col++ ) {
#line 976 "speed.ch"
#line 977 "speed.ch"
                                                                                                                              sprintf(name, "\\%s", ConvertToOctal(ptArray -> arrayEntry [col]));
#line 977 "speed.ch"
#line 978 "speed.ch"
                                                                                                                              WriteString(name);
#line 978 "speed.ch"
#line 979 "speed.ch"
                                                                                                                              
#line 979 "speed.ch"
#line 979 "speed.ch"
                                                                                                                              }
#line 979 "speed.ch"
                                                                
#line 979 "speed.ch"
#line 980 "speed.ch"
                                                                PrintString("\"");
#line 980 "speed.ch"
#line 980 "speed.ch"
                                                                LNewLine(1);
#line 980 "speed.ch"
                                                                
#line 980 "speed.ch"
#line 981 "speed.ch"
                                                                if ( ligne < nbArrayEntry - 1 ) 
#line 981 "speed.ch"
#line 982 "speed.ch"
                                                                    PrintString(",");
#line 982 "speed.ch"
#line 983 "speed.ch"
                                                                ptArray = ptArray -> next ;
#line 983 "speed.ch"
#line 984 "speed.ch"
                                                                
#line 984 "speed.ch"
#line 984 "speed.ch"
                                                            }
#line 984 "speed.ch"
    
#line 984 "speed.ch"
    UnMark();
#line 984 "speed.ch"
    
#line 984 "speed.ch"
#line 986 "speed.ch"
    PrintString("};");
#line 986 "speed.ch"
#line 986 "speed.ch"
    LNewLine(1);
#line 986 "speed.ch"
    
#line 986 "speed.ch"
#line 987 "speed.ch"
    sprintf(name, "%d", nbArrayEntry);
#line 987 "speed.ch"
#line 988 "speed.ch"
    PrintString("typedef int (");
#line 988 "speed.ch"
#line 988 "speed.ch"
    WriteString(LanguageName(LO_CASE));
#line 988 "speed.ch"
#line 988 "speed.ch"
    PrintString("::*(");
#line 988 "speed.ch"
#line 989 "speed.ch"
    if ( cplusGen ) {
#line 989 "speed.ch"
#line 990 "speed.ch"
                        WriteString("DEF_FUNC_TOKEN_ARRAY");
#line 990 "speed.ch"
#line 991 "speed.ch"
                        
#line 991 "speed.ch"
#line 991 "speed.ch"
                     } else 
#line 991 "speed.ch"
    {
#line 991 "speed.ch"
#line 992 "speed.ch"
        WriteString(NameLang("_tokenFuncArray"));
#line 992 "speed.ch"
#line 993 "speed.ch"
        
#line 993 "speed.ch"
#line 993 "speed.ch"
    }
    
#line 993 "speed.ch"
#line 994 "speed.ch"
    PrintString(" [");
#line 994 "speed.ch"
#line 994 "speed.ch"
    WriteString(name);
#line 994 "speed.ch"
#line 994 "speed.ch"
    PrintString("]))() ;");
#line 994 "speed.ch"
#line 994 "speed.ch"
    LNewLine(1);
#line 994 "speed.ch"
    
#line 994 "speed.ch"
#line 995 "speed.ch"
    PrintString("DEF_FUNC_TOKEN_ARRAY ");
#line 995 "speed.ch"
#line 995 "speed.ch"
    WriteString(LanguageName(LO_CASE));
#line 995 "speed.ch"
#line 995 "speed.ch"
    PrintString("::_tokenFuncArray = ");
#line 995 "speed.ch"
    PrintString("{");
#line 995 "speed.ch"
#line 995 "speed.ch"
    LNewLine(1);
#line 995 "speed.ch"
    
#line 995 "speed.ch"
#line 996 "speed.ch"
    Tab();
#line 996 "speed.ch"
    
#line 996 "speed.ch"
#line 997 "speed.ch"
    Mark();
#line 997 "speed.ch"
#line 997 "speed.ch"
    for ( ligne = 0 ; ligne < nbArrayEntry ; ligne++ ) {
#line 997 "speed.ch"
#line 998 "speed.ch"
                                                                PTREE   list = (PTREE)0 ;
#line 998 "speed.ch"
                                                                
#line 998 "speed.ch"
#line 998 "speed.ch"
                                                                (list=listFuncToken -> List());
#line 998 "speed.ch"
                                                                
#line 998 "speed.ch"
#line 999 "speed.ch"
                                                                if ( ligne != 0 ) {
#line 999 "speed.ch"
#line 1000 "speed.ch"
                                                                                        PrintString(",");
#line 1000 "speed.ch"
#line 1000 "speed.ch"
                                                                                        LNewLine(1);
#line 1000 "speed.ch"
                                                                                        
#line 1000 "speed.ch"
#line 1001 "speed.ch"
                                                                                        
#line 1001 "speed.ch"
#line 1001 "speed.ch"
                                                                                    }
#line 1001 "speed.ch"
#line 1002 "speed.ch"
                                                                sprintf(name, "%d", ligne);
#line 1002 "speed.ch"
#line 1003 "speed.ch"
                                                                while ( list ) {
#line 1003 "speed.ch"
#line 1004 "speed.ch"
                                                                                    PTREE   elem = (PTREE)0 ;
#line 1004 "speed.ch"
                                                                                    
#line 1004 "speed.ch"
#line 1004 "speed.ch"
                                                                                    (elem=(list?list.Nextl():(PPTREE)0));
#line 1004 "speed.ch"
                                                                                    
#line 1004 "speed.ch"
#line 1005 "speed.ch"
                                                                                    if ( !strcmp(Value(sontree(elem, 2)), name) ) {
#line 1005 "speed.ch"
#line 1006 "speed.ch"
                                                                                                                                         PrintString("/*");
#line 1006 "speed.ch"
#line 1006 "speed.ch"
                                                                                                                                         DumpBrainyValue(elem);
#line 1006 "speed.ch"
                                                                                                                                         
#line 1006 "speed.ch"
#line 1007 "speed.ch"
                                                                                                                                         gotocol(38);
#line 1007 "speed.ch"
#line 1008 "speed.ch"
                                                                                                                                         PrintString("*/");
#line 1008 "speed.ch"
#line 1009 "speed.ch"
                                                                                                                                         ((_inter = (PPTREE)elem,1) && 
#line 1009 "speed.ch"
                                                                                                                                         (_retVal[1]=((_storeVal[1]=_inter,_inter=SonTree(_inter,2),1) &&
#line 1009 "speed.ch"
                                                                                                                                         (_retVal[2]=((_storeVal[2]=_inter,_inter=SonTree(_inter,1),1) &&
#line 1009 "speed.ch"
                                                                                                                                         ((elem=SonTree(_inter,2)),1) &&
#line 1009 "speed.ch"
                                                                                                                                         1),
#line 1009 "speed.ch"
                                                                                                                                         (_inter=_storeVal[2],1),_retVal[2]) &&
#line 1009 "speed.ch"
                                                                                                                                         1),
#line 1009 "speed.ch"
                                                                                                                                         (_inter=_storeVal[1],1),_retVal[1]) &&
#line 1009 "speed.ch"
                                                                                                                                         1);
#line 1009 "speed.ch"
                                                                                                                                         ;
#line 1009 "speed.ch"
#line 1010 "speed.ch"
                                                                                                                                         gotocol(40);
#line 1010 "speed.ch"
#line 1011 "speed.ch"
                                                                                                                                         if ( strcmp(Value(elem), "0") ) {
#line 1011 "speed.ch"
#line 1012 "speed.ch"
                                                                                                                                                                             PrintString("(&");
#line 1012 "speed.ch"
#line 1013 "speed.ch"
                                                                                                                                                                             if ( cplusGen ) {
#line 1013 "speed.ch"
#line 1014 "speed.ch"
                                                                                                                                                                                              WriteString(LanguageName(LO_CASE));
#line 1014 "speed.ch"
#line 1014 "speed.ch"
                                                                                                                                                                                              WriteString("::");
#line 1014 "speed.ch"
#line 1014 "speed.ch"
                                                                                                                                                                                              WriteString(Value(elem));
#line 1014 "speed.ch"
#line 1015 "speed.ch"
                                                                                                                                                                                              
#line 1015 "speed.ch"
#line 1015 "speed.ch"
                                                                                                                                                                                              } else 
#line 1015 "speed.ch"
#line 1016 "speed.ch"
                                                                                                                                                                             WriteString(NameLang(Value(elem)));
#line 1016 "speed.ch"
                                                                                                                                                                             
#line 1016 "speed.ch"
#line 1017 "speed.ch"
                                                                                                                                                                             PrintString(")");
#line 1017 "speed.ch"
#line 1018 "speed.ch"
                                                                                                                                                                             break ;
                                                                                                                                                                             
#line 1018 "speed.ch"
#line 1019 "speed.ch"
                                                                                                                                                                             
#line 1019 "speed.ch"
#line 1019 "speed.ch"
                                                                                                                                                                             } else 
#line 1019 "speed.ch"
                                                                                                                                         {
#line 1019 "speed.ch"
#line 1020 "speed.ch"
                                                                                                                                         DumpBrainyValue(elem);
#line 1020 "speed.ch"
                                                                                                                                         
#line 1020 "speed.ch"
#line 1021 "speed.ch"
                                                                                                                                         
#line 1021 "speed.ch"
#line 1021 "speed.ch"
                                                                                                                                         }
                                                                                                                                         
#line 1021 "speed.ch"
#line 1022 "speed.ch"
                                                                                                                                         break ;
                                                                                                                                         
#line 1022 "speed.ch"
#line 1023 "speed.ch"
                                                                                                                                         
#line 1023 "speed.ch"
#line 1023 "speed.ch"
                                                                                                                                         }
#line 1023 "speed.ch"
#line 1024 "speed.ch"
                                                                                    
#line 1024 "speed.ch"
#line 1024 "speed.ch"
                                                                                }
#line 1024 "speed.ch"
#line 1025 "speed.ch"
                                                                
#line 1025 "speed.ch"
#line 1025 "speed.ch"
                                                            }
#line 1025 "speed.ch"
    
#line 1025 "speed.ch"
    UnMark();
#line 1025 "speed.ch"
    
#line 1025 "speed.ch"
#line 1026 "speed.ch"
    LNewLine(1);
#line 1026 "speed.ch"
    
#line 1026 "speed.ch"
#line 1027 "speed.ch"
    PrintString("};");
#line 1027 "speed.ch"
#line 1027 "speed.ch"
    LNewLine(1);
#line 1027 "speed.ch"
    
#line 1027 "speed.ch"
#line 1028 "speed.ch"
    sprintf(name, "%d", nbArrayEntry);
#line 1028 "speed.ch"
#line 1029 "speed.ch"
    PrintString("int ");
#line 1029 "speed.ch"
#line 1030 "speed.ch"
    if ( cplusGen ) {
#line 1030 "speed.ch"
#line 1031 "speed.ch"
                        WriteString(LanguageName(LO_CASE));
#line 1031 "speed.ch"
#line 1031 "speed.ch"
                        WriteString("::");
#line 1031 "speed.ch"
#line 1031 "speed.ch"
                        WriteString("_tokenNbFuncArray");
#line 1031 "speed.ch"
#line 1032 "speed.ch"
                        
#line 1032 "speed.ch"
#line 1032 "speed.ch"
                     } else 
#line 1032 "speed.ch"
    {
#line 1032 "speed.ch"
#line 1033 "speed.ch"
        WriteString(NameLang("_tokenNbFuncArray"));
#line 1033 "speed.ch"
#line 1034 "speed.ch"
        
#line 1034 "speed.ch"
#line 1034 "speed.ch"
    }
    
#line 1034 "speed.ch"
#line 1035 "speed.ch"
    PrintString(" [");
#line 1035 "speed.ch"
#line 1035 "speed.ch"
    WriteString(name);
#line 1035 "speed.ch"
#line 1035 "speed.ch"
    PrintString("] = ");
#line 1035 "speed.ch"
    PrintString("{");
#line 1035 "speed.ch"
#line 1035 "speed.ch"
    LNewLine(1);
#line 1035 "speed.ch"
    
#line 1035 "speed.ch"
#line 1036 "speed.ch"
    Tab();
#line 1036 "speed.ch"
    
#line 1036 "speed.ch"
#line 1037 "speed.ch"
    Mark();
#line 1037 "speed.ch"
#line 1037 "speed.ch"
    for ( ligne = 0 ; ligne < nbArrayEntry ; ligne++ ) {
#line 1037 "speed.ch"
#line 1038 "speed.ch"
                                                                PTREE   list = (PTREE)0 ;
#line 1038 "speed.ch"
                                                                
#line 1038 "speed.ch"
#line 1038 "speed.ch"
                                                                (list=listFuncToken -> List());
#line 1038 "speed.ch"
                                                                
#line 1038 "speed.ch"
#line 1039 "speed.ch"
                                                                if ( ligne != 0 ) {
#line 1039 "speed.ch"
#line 1040 "speed.ch"
                                                                                        PrintString(",");
#line 1040 "speed.ch"
#line 1040 "speed.ch"
                                                                                        LNewLine(1);
#line 1040 "speed.ch"
                                                                                        
#line 1040 "speed.ch"
#line 1041 "speed.ch"
                                                                                        
#line 1041 "speed.ch"
#line 1041 "speed.ch"
                                                                                    }
#line 1041 "speed.ch"
#line 1042 "speed.ch"
                                                                sprintf(name, "%d", ligne);
#line 1042 "speed.ch"
#line 1043 "speed.ch"
                                                                while ( list ) {
#line 1043 "speed.ch"
#line 1044 "speed.ch"
                                                                                    PTREE   elem = (PTREE)0 ;
#line 1044 "speed.ch"
                                                                                    
#line 1044 "speed.ch"
#line 1044 "speed.ch"
                                                                                    (elem=(list?list.Nextl():(PPTREE)0));
#line 1044 "speed.ch"
                                                                                    
#line 1044 "speed.ch"
#line 1045 "speed.ch"
                                                                                    if ( !strcmp(Value(sontree(elem, 2)), name) ) {
#line 1045 "speed.ch"
#line 1046 "speed.ch"
                                                                                                                                         PrintString("/*");
#line 1046 "speed.ch"
#line 1046 "speed.ch"
                                                                                                                                         DumpBrainyValue(elem);
#line 1046 "speed.ch"
                                                                                                                                         
#line 1046 "speed.ch"
#line 1047 "speed.ch"
                                                                                                                                         gotocol(38);
#line 1047 "speed.ch"
#line 1048 "speed.ch"
                                                                                                                                         PrintString("*/");
#line 1048 "speed.ch"
#line 1049 "speed.ch"
                                                                                                                                         gotocol(40);
#line 1049 "speed.ch"
#line 1050 "speed.ch"
                                                                                                                                         ((_inter = (PPTREE)elem,1) && 
#line 1050 "speed.ch"
                                                                                                                                         (_retVal[1]=((_storeVal[1]=_inter,_inter=SonTree(_inter,2),1) &&
#line 1050 "speed.ch"
                                                                                                                                         (_retVal[2]=((_storeVal[2]=_inter,_inter=SonTree(_inter,1),1) &&
#line 1050 "speed.ch"
                                                                                                                                         (_retVal[3]=((_storeVal[3]=_inter,_inter=SonTree(_inter,1),1) &&
#line 1050 "speed.ch"
                                                                                                                                         ((elem=SonTree(_inter,2)),1) &&
#line 1050 "speed.ch"
                                                                                                                                         1),
#line 1050 "speed.ch"
                                                                                                                                         (_inter=_storeVal[3],1),_retVal[3]) &&
#line 1050 "speed.ch"
                                                                                                                                         1),
#line 1050 "speed.ch"
                                                                                                                                         (_inter=_storeVal[2],1),_retVal[2]) &&
#line 1050 "speed.ch"
                                                                                                                                         1),
#line 1050 "speed.ch"
                                                                                                                                         (_inter=_storeVal[1],1),_retVal[1]) &&
#line 1050 "speed.ch"
                                                                                                                                         1);
#line 1050 "speed.ch"
                                                                                                                                         ;
#line 1050 "speed.ch"
#line 1051 "speed.ch"
                                                                                                                                         WriteString(Value(elem));
#line 1051 "speed.ch"
#line 1052 "speed.ch"
                                                                                                                                         break ;
                                                                                                                                         
#line 1052 "speed.ch"
#line 1053 "speed.ch"
                                                                                                                                         
#line 1053 "speed.ch"
#line 1053 "speed.ch"
                                                                                                                                         }
#line 1053 "speed.ch"
#line 1054 "speed.ch"
                                                                                    
#line 1054 "speed.ch"
#line 1054 "speed.ch"
                                                                                }
#line 1054 "speed.ch"
#line 1055 "speed.ch"
                                                                
#line 1055 "speed.ch"
#line 1055 "speed.ch"
                                                            }
#line 1055 "speed.ch"
    
#line 1055 "speed.ch"
    UnMark();
#line 1055 "speed.ch"
    
#line 1055 "speed.ch"
#line 1056 "speed.ch"
    LNewLine(1);
#line 1056 "speed.ch"
    
#line 1056 "speed.ch"
#line 1057 "speed.ch"
    PrintString("};");
#line 1057 "speed.ch"
#line 1057 "speed.ch"
    LNewLine(1);
#line 1057 "speed.ch"
    
#line 1057 "speed.ch"
#line 1058 "speed.ch"
    
#line 1058 "speed.ch"
#line 1058 "speed.ch"
}
#line 1058 "speed.ch"

#line 1062 "speed.ch"

#line 1062 "speed.ch"
PTREE GetWithContext ( PTREE tree )
#line 1062 "speed.ch"
{
#line 1062 "speed.ch"
    register PPTREE _inter ;
#line 1062 "speed.ch"

#line 1062 "speed.ch"
#line 1062 "speed.ch"
    int _nextVal ;
    
#line 1062 "speed.ch"
#line 1065 "speed.ch"
    PTREE   name, list ;
#line 1065 "speed.ch"
    
#line 1065 "speed.ch"
#line 1066 "speed.ch"
    PTREE   theList ;
#line 1066 "speed.ch"
    
#line 1066 "speed.ch"
#line 1068 "speed.ch"
    {
#line 1068 "speed.ch"
#line 1068 "speed.ch"
        ItPtree _iterator1 (tree, (PPTREE) 0) ;
        
#line 1068 "speed.ch"
#line 1068 "speed.ch"
        PPTREE  _for_elem ;
        
#line 1068 "speed.ch"
#line 1068 "speed.ch"
        _iterator1.AllSearch(1);
#line 1068 "speed.ch"
#line 1068 "speed.ch"
        while ( _for_elem = _iterator1++ ) {
#line 1068 "speed.ch"
#line 1068 "speed.ch"
            {
#line 1068 "speed.ch"
#line 1069 "speed.ch"
                if ( ((_inter = (PPTREE)for_elem,1) && 
#line 1069 "speed.ch"
                        (NumberTree(_inter) == metalang::WITH_CONTEXT) &&
#line 1069 "speed.ch"
                        ((name=SonTree(_inter,1)),1) &&
#line 1069 "speed.ch"
                        1) || ((_inter = (PPTREE)for_elem,1) && 
#line 1069 "speed.ch"
                                    (NumberTree(_inter) == metalang::WITHOUT_CONTEXT) &&
#line 1069 "speed.ch"
                                    ((name=SonTree(_inter,1)),1) &&
#line 1069 "speed.ch"
                                    1) ) {
#line 1069 "speed.ch"
#line 1070 "speed.ch"
                                            (name=copytree(name));
#line 1070 "speed.ch"
                                            
#line 1070 "speed.ch"
#line 1073 "speed.ch"
                                            if ( !ListFind(list, name) ) {
#line 1073 "speed.ch"
#line 1074 "speed.ch"
                                                                                {
#line 1074 "speed.ch"
                                                                                    PPTREE _ptTree0= (PPTREE) 0 ;
#line 1074 "speed.ch"
                                                                                    list =  AddList( list,name);
#line 1074 "speed.ch"
                                                                                }
#line 1074 "speed.ch"
                                                                                
#line 1074 "speed.ch"
#line 1075 "speed.ch"
                                                                                
#line 1075 "speed.ch"
#line 1075 "speed.ch"
                                                                             }
#line 1075 "speed.ch"
#line 1076 "speed.ch"
                                            
#line 1076 "speed.ch"
#line 1076 "speed.ch"
                                         }
#line 1076 "speed.ch"
#line 1077 "speed.ch"
                
#line 1077 "speed.ch"
#line 1077 "speed.ch"
            }
            
#line 1077 "speed.ch"
#line 1077 "speed.ch"
            _iterator1.Current(_for_elem);
#line 1077 "speed.ch"
#line 1077 "speed.ch"
            continue ;
            
#line 1077 "speed.ch"
#line 1077 "speed.ch"
        for_continue1 : 
#line 1077 "speed.ch"
#line 1077 "speed.ch"
            _iterator1.Current(_for_elem);
#line 1077 "speed.ch"
#line 1077 "speed.ch"
            _iterator1.SkipSon(1);
#line 1077 "speed.ch"
#line 1077 "speed.ch"
            continue ;
            
#line 1077 "speed.ch"
#line 1077 "speed.ch"
        for_break1 : 
#line 1077 "speed.ch"
#line 1077 "speed.ch"
            break ;
            
#line 1077 "speed.ch"
#line 1077 "speed.ch"
            
#line 1077 "speed.ch"
#line 1077 "speed.ch"
        }
#line 1077 "speed.ch"
#line 1077 "speed.ch"
        
#line 1077 "speed.ch"
#line 1077 "speed.ch"
    }
    
#line 1077 "speed.ch"
#line 1078 "speed.ch"
    return list ;
    
#line 1078 "speed.ch"
#line 1079 "speed.ch"
    
#line 1079 "speed.ch"
#line 1079 "speed.ch"
}
#line 1079 "speed.ch"

#line 1084 "speed.ch"

#line 1084 "speed.ch"
void ReleasePosComment ( PTREE tree )
#line 1084 "speed.ch"
{
#line 1084 "speed.ch"
    register PPTREE _inter ;
#line 1084 "speed.ch"

#line 1084 "speed.ch"
#line 1084 "speed.ch"
    int _nextVal ;
    
#line 1084 "speed.ch"
#line 1087 "speed.ch"
    PTREE   list, elem, son1, son2 ;
#line 1087 "speed.ch"
    
#line 1087 "speed.ch"
#line 1090 "speed.ch"
    if ( (!tree) ) 
#line 1090 "speed.ch"
#line 1091 "speed.ch"
        return ;
    
#line 1091 "speed.ch"
#line 1095 "speed.ch"
    switch ( NumberTree(tree) ) {
#line 1095 "speed.ch"
#line 1095 "speed.ch"
        case metalang::DEFINE : 
#line 1095 "speed.ch"
#line 1095 "speed.ch"
            (elem=SonTree(tree, 1));
#line 1095 "speed.ch"
            
#line 1095 "speed.ch"
#line 1095 "speed.ch"
            (list=SonTree(tree, 2));
#line 1095 "speed.ch"
            
#line 1095 "speed.ch"
#line 1095 "speed.ch"
        _Case87 : 
#line 1095 "speed.ch"
#line 1095 "speed.ch"
            ;
#line 1095 "speed.ch"
#line 1095 "speed.ch"
            goto _Case88 ;
            
#line 1095 "speed.ch"
#line 1095 "speed.ch"
        case metalang::LEXDEFINE : 
#line 1095 "speed.ch"
#line 1095 "speed.ch"
            (elem=SonTree(tree, 1));
#line 1095 "speed.ch"
            
#line 1095 "speed.ch"
#line 1095 "speed.ch"
            (list=SonTree(tree, 2));
#line 1095 "speed.ch"
            
#line 1095 "speed.ch"
#line 1095 "speed.ch"
        _Case88 : 
#line 1095 "speed.ch"
#line 1095 "speed.ch"
            ;
#line 1095 "speed.ch"
#line 1095 "speed.ch"
            goto _Case89 ;
            
#line 1095 "speed.ch"
#line 1095 "speed.ch"
        case metalang::REPEAT : 
#line 1095 "speed.ch"
#line 1095 "speed.ch"
            (list=SonTree(tree, 1));
#line 1095 "speed.ch"
            
#line 1095 "speed.ch"
#line 1095 "speed.ch"
        _Case89 : 
#line 1095 "speed.ch"
#line 1095 "speed.ch"
            ;
#line 1095 "speed.ch"
#line 1095 "speed.ch"
            goto _Case90 ;
            
#line 1095 "speed.ch"
#line 1095 "speed.ch"
        case metalang::BEGIN : 
#line 1095 "speed.ch"
#line 1095 "speed.ch"
            (list=SonTree(tree, 1));
#line 1095 "speed.ch"
            
#line 1095 "speed.ch"
#line 1095 "speed.ch"
        _Case90 : 
#line 1095 "speed.ch"
#line 1095 "speed.ch"
            ;
#line 1095 "speed.ch"
#line 1095 "speed.ch"
            goto _Case91 ;
            
#line 1095 "speed.ch"
#line 1101 "speed.ch"
        case metalang::CASE : 
#line 1101 "speed.ch"
#line 1101 "speed.ch"
            (list=SonTree(tree, 1));
#line 1101 "speed.ch"
            
#line 1101 "speed.ch"
#line 1101 "speed.ch"
        _Case91 : 
#line 1101 "speed.ch"
#line 1101 "speed.ch"
            ;
#line 1101 "speed.ch"
#line 1101 "speed.ch"
            replacetree(elem, 0, (PTREE)0);
#line 1101 "speed.ch"
#line 1102 "speed.ch"
            while ( ((elem=(list?list.Nextl():(PPTREE)0))) ) {
#line 1102 "speed.ch"
#line 1103 "speed.ch"
                                                                    ReleasePosComment(elem);
#line 1103 "speed.ch"
#line 1104 "speed.ch"
                                                                    
#line 1104 "speed.ch"
#line 1104 "speed.ch"
                                                                  }
#line 1104 "speed.ch"
#line 1105 "speed.ch"
            break ;
            
#line 1105 "speed.ch"
#line 1105 "speed.ch"
        case metalang::WHILE : 
#line 1105 "speed.ch"
#line 1105 "speed.ch"
            (elem=SonTree(tree, 1));
#line 1105 "speed.ch"
            
#line 1105 "speed.ch"
#line 1105 "speed.ch"
            (son1=SonTree(tree, 2));
#line 1105 "speed.ch"
            
#line 1105 "speed.ch"
#line 1105 "speed.ch"
        _Case92 : 
#line 1105 "speed.ch"
#line 1105 "speed.ch"
            ;
#line 1105 "speed.ch"
#line 1105 "speed.ch"
            goto _Case93 ;
            
#line 1105 "speed.ch"
#line 1105 "speed.ch"
        case metalang::WITHOUT_CONTEXT : 
#line 1105 "speed.ch"
#line 1105 "speed.ch"
            (elem=SonTree(tree, 1));
#line 1105 "speed.ch"
            
#line 1105 "speed.ch"
#line 1105 "speed.ch"
            (son1=SonTree(tree, 2));
#line 1105 "speed.ch"
            
#line 1105 "speed.ch"
#line 1105 "speed.ch"
        _Case93 : 
#line 1105 "speed.ch"
#line 1105 "speed.ch"
            ;
#line 1105 "speed.ch"
#line 1105 "speed.ch"
            goto _Case94 ;
            
#line 1105 "speed.ch"
#line 1105 "speed.ch"
        case metalang::WITH_CONTEXT : 
#line 1105 "speed.ch"
#line 1105 "speed.ch"
            (elem=SonTree(tree, 1));
#line 1105 "speed.ch"
            
#line 1105 "speed.ch"
#line 1105 "speed.ch"
            (son1=SonTree(tree, 2));
#line 1105 "speed.ch"
            
#line 1105 "speed.ch"
#line 1105 "speed.ch"
        _Case94 : 
#line 1105 "speed.ch"
#line 1105 "speed.ch"
            ;
#line 1105 "speed.ch"
#line 1105 "speed.ch"
            goto _Case95 ;
            
#line 1105 "speed.ch"
#line 1105 "speed.ch"
        case metalang::SWITCH : 
#line 1105 "speed.ch"
#line 1105 "speed.ch"
            (elem=SonTree(tree, 1));
#line 1105 "speed.ch"
            
#line 1105 "speed.ch"
#line 1105 "speed.ch"
            (son1=SonTree(tree, 2));
#line 1105 "speed.ch"
            
#line 1105 "speed.ch"
#line 1105 "speed.ch"
        _Case95 : 
#line 1105 "speed.ch"
#line 1105 "speed.ch"
            ;
#line 1105 "speed.ch"
#line 1105 "speed.ch"
            goto _Case96 ;
            
#line 1105 "speed.ch"
#line 1111 "speed.ch"
        case metalang::IF : 
#line 1111 "speed.ch"
#line 1111 "speed.ch"
            (elem=SonTree(tree, 1));
#line 1111 "speed.ch"
            
#line 1111 "speed.ch"
#line 1111 "speed.ch"
            (son1=SonTree(tree, 2));
#line 1111 "speed.ch"
            
#line 1111 "speed.ch"
#line 1111 "speed.ch"
            (son2=SonTree(tree, 3));
#line 1111 "speed.ch"
            
#line 1111 "speed.ch"
#line 1111 "speed.ch"
        _Case96 : 
#line 1111 "speed.ch"
#line 1111 "speed.ch"
            ;
#line 1111 "speed.ch"
#line 1111 "speed.ch"
            replacetree(elem, 0, (PTREE)0);
#line 1111 "speed.ch"
#line 1112 "speed.ch"
            ReleasePosComment(son1);
#line 1112 "speed.ch"
#line 1113 "speed.ch"
            ReleasePosComment(son2);
#line 1113 "speed.ch"
#line 1114 "speed.ch"
            break ;
            
#line 1114 "speed.ch"
#line 1116 "speed.ch"
        default : 
#line 1116 "speed.ch"
#line 1116 "speed.ch"
        _Case97 : 
#line 1116 "speed.ch"
#line 1116 "speed.ch"
            ;
#line 1116 "speed.ch"
#line 1116 "speed.ch"
            {
#line 1116 "speed.ch"
#line 1116 "speed.ch"
                int _for_slot = 1, _arity = treearity(tree);
                
#line 1116 "speed.ch"
#line 1116 "speed.ch"
                MY_TREE _for_elem = (PPTREE)0 ;
                
#line 1116 "speed.ch"
#line 1116 "speed.ch"
#line 1116 "speed.ch"
                for (; _for_slot <= _arity ; _for_slot++ ) {
#line 1116 "speed.ch"
#line 1116 "speed.ch"
                    _for_elem = SonTree(tree, _for_slot);
#line 1116 "speed.ch"
#line 1116 "speed.ch"
                    if ( _for_elem && NumberTree(_for_elem) != IN_LANGUAGE ) {
#line 1116 "speed.ch"
#line 1116 "speed.ch"
                        if ( !(((_inter = (PPTREE)for_elem,1) && 
#line 1116 "speed.ch"
                                (NumberTree(_inter) == metalang::DEFINE) &&
#line 1116 "speed.ch"
                                1)) && !(((_inter = (PPTREE)for_elem,1) && 
#line 1116 "speed.ch"
                                            (NumberTree(_inter) == metalang::LEXDEFINE) &&
#line 1116 "speed.ch"
                                            1)) ) 
#line 1116 "speed.ch"
#line 1116 "speed.ch"
                            replacetree(for_elem, 0, (PTREE)0);
#line 1116 "speed.ch"
#line 1116 "speed.ch"
                        ReleasePosComment(for_elem);
#line 1116 "speed.ch"
#line 1116 "speed.ch"
                        
#line 1116 "speed.ch"
#line 1116 "speed.ch"
                    }
#line 1116 "speed.ch"
#line 1116 "speed.ch"
                    
#line 1116 "speed.ch"
#line 1116 "speed.ch"
                }
#line 1116 "speed.ch"
                
#line 1116 "speed.ch"
#line 1116 "speed.ch"
                
#line 1116 "speed.ch"
#line 1116 "speed.ch"
            }
#line 1116 "speed.ch"
#line 1121 "speed.ch"
            break ;
            
#line 1121 "speed.ch"
    }
#line 1121 "speed.ch"
    
#line 1121 "speed.ch"
#line 1123 "speed.ch"
    
#line 1123 "speed.ch"
#line 1123 "speed.ch"
}
#line 1123 "speed.ch"

#line 1123 "speed.ch"
#line 1123 "speed.ch"
static void speed_Anchor () { int i = 1;} 
#line 1123 "speed.ch"
/*Well done my boy */ 

