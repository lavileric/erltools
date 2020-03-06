
#line 29 "decomp3.ch"
/*************************************************************************/
#line 29 "decomp3.ch"
/*                                                                       */
#line 29 "decomp3.ch"
/*        Produced by Metachop version 2.0  -    1989-1995               */
#line 29 "decomp3.ch"
/*     Tree      Meta     Chopper      developped    by                  */
#line 29 "decomp3.ch"
/*                  Eric Lavillonniere                                   */
#line 29 "decomp3.ch"
/*                                                                       */
#line 29 "decomp3.ch"
/*************************************************************************/
#line 29 "decomp3.ch"

#line 29 "decomp3.ch"
#include "token.h"
#line 29 "decomp3.ch"
#define decomp decomp_metachop
#line 29 "decomp3.ch"

#line 29 "decomp3.ch"
#ifndef for_elem
#line 29 "decomp3.ch"
#line 29 "decomp3.ch"
#define for_elem _for_elem

#line 29 "decomp3.ch"
#line 29 "decomp3.ch"

#line 29 "decomp3.ch"
#endif
#ifdef INCONNU
#line 29 "decomp3.ch"
#line 29 "decomp3.ch"
PTREE   for_elem ;
#line 29 "decomp3.ch"

#line 29 "decomp3.ch"
#line 29 "decomp3.ch"

#line 29 "decomp3.ch"
#endif
#include "decmetac.h"
#include "memges.h"
#include "test.h"

extern char *currentLanguage ;
extern int  cplusGen ;
extern int  line ;

#line 43 "decomp3.ch"

#line 43 "decomp3.ch"
static  void DestroyComments ( PTREE tree )
#line 43 "decomp3.ch"
{
#line 43 "decomp3.ch"
#line 43 "decomp3.ch"
    int _nextVal ;
    
#line 43 "decomp3.ch"
#line 45 "decomp3.ch"
    {
#line 45 "decomp3.ch"
#line 45 "decomp3.ch"
        ItPtree _iterator1 (tree, (PPTREE) 0) ;
        
#line 45 "decomp3.ch"
#line 45 "decomp3.ch"
        PPTREE  _for_elem ;
        
#line 45 "decomp3.ch"
#line 45 "decomp3.ch"
        _iterator1.AllSearch(1);
#line 45 "decomp3.ch"
#line 45 "decomp3.ch"
        while ( _for_elem = _iterator1++ ) {
#line 45 "decomp3.ch"
#line 45 "decomp3.ch"
            {
#line 45 "decomp3.ch"
#line 46 "decomp3.ch"
                DestroyPosComment(for_elem);
#line 46 "decomp3.ch"
#line 47 "decomp3.ch"
                
#line 47 "decomp3.ch"
#line 47 "decomp3.ch"
            }
            
#line 47 "decomp3.ch"
#line 47 "decomp3.ch"
            _iterator1.Current(_for_elem);
#line 47 "decomp3.ch"
#line 47 "decomp3.ch"
            continue ;
            
#line 47 "decomp3.ch"
#line 47 "decomp3.ch"
        for_continue1 : 
#line 47 "decomp3.ch"
#line 47 "decomp3.ch"
            _iterator1.Current(_for_elem);
#line 47 "decomp3.ch"
#line 47 "decomp3.ch"
            _iterator1.SkipSon(1);
#line 47 "decomp3.ch"
#line 47 "decomp3.ch"
            continue ;
            
#line 47 "decomp3.ch"
#line 47 "decomp3.ch"
        for_break1 : 
#line 47 "decomp3.ch"
#line 47 "decomp3.ch"
            break ;
            
#line 47 "decomp3.ch"
#line 47 "decomp3.ch"
            
#line 47 "decomp3.ch"
#line 47 "decomp3.ch"
        }
#line 47 "decomp3.ch"
#line 47 "decomp3.ch"
        
#line 47 "decomp3.ch"
#line 47 "decomp3.ch"
    }
    
#line 47 "decomp3.ch"
#line 48 "decomp3.ch"
    
#line 48 "decomp3.ch"
#line 48 "decomp3.ch"
}
#line 48 "decomp3.ch"

#line 51 "decomp3.ch"

#line 51 "decomp3.ch"
PTREE LookMeta ( PTREE tree, char *nameVar )
#line 51 "decomp3.ch"
{
#line 51 "decomp3.ch"
    register PPTREE _inter ;
#line 51 "decomp3.ch"

#line 51 "decomp3.ch"
#line 51 "decomp3.ch"
    int ptStackTree ;
    
#line 51 "decomp3.ch"
#line 51 "decomp3.ch"
    PPTREE  stackTree [1024];
    
#line 51 "decomp3.ch"
#line 51 "decomp3.ch"
    int _retVal [2];
    
#line 51 "decomp3.ch"
#line 51 "decomp3.ch"
    PPTREE  _storeVal [2];
    
#line 51 "decomp3.ch"
#line 51 "decomp3.ch"
    int _nextVal ;
    
#line 51 "decomp3.ch"
#line 54 "decomp3.ch"
    char    *theValue ;
    
#line 54 "decomp3.ch"
#line 55 "decomp3.ch"
    PTREE   ret, aux, inter1, catcher ;
#line 55 "decomp3.ch"
    
#line 55 "decomp3.ch"
#line 56 "decomp3.ch"
    PTREE   retListStat ;
#line 56 "decomp3.ch"
    
#line 56 "decomp3.ch"
#line 58 "decomp3.ch"
    char    name [20];
    
#line 58 "decomp3.ch"
#line 59 "decomp3.ch"
    int varNumber = 0 ;
    
#line 59 "decomp3.ch"
#line 60 "decomp3.ch"
    ItPtree it (tree) ;
    
#line 60 "decomp3.ch"
#line 61 "decomp3.ch"
    PPTREE  _for_elem ;
    
#line 61 "decomp3.ch"
#line 63 "decomp3.ch"
    retListStat = (PPTREE) 0 ;
#line 63 "decomp3.ch"
    
#line 63 "decomp3.ch"
#line 64 "decomp3.ch"
    while ( (for_elem = it++) ) {
#line 64 "decomp3.ch"
#line 65 "decomp3.ch"
                                    if ( ((_inter = (PPTREE)for_elem,1) && 
#line 65 "decomp3.ch"
                                            (NumberTree(_inter) == META) &&
#line 65 "decomp3.ch"
                                            (_retVal[1]=((_storeVal[1]=_inter,_inter=SonTree(_inter,1),1) &&
#line 65 "decomp3.ch"
                                                (NumberTree(_inter) == TERM_TREE) &&
#line 65 "decomp3.ch"
                                                1),
#line 65 "decomp3.ch"
                                                (_inter=_storeVal[1],1),_retVal[1]) &&
#line 65 "decomp3.ch"
                                            1) ) {
#line 65 "decomp3.ch"
#line 66 "decomp3.ch"
                                                    theValue = Value(for_elem);
#line 66 "decomp3.ch"
#line 67 "decomp3.ch"
                                                    if ( *theValue == '(' ) {
#line 67 "decomp3.ch"
#line 68 "decomp3.ch"
                                                                                theValue = AllocString(theValue + 1);
#line 68 "decomp3.ch"
#line 69 "decomp3.ch"
                                                                                {
#line 69 "decomp3.ch"
                                                                                    PLANG _oldLanguage = pCurrentLanguage;
#line 69 "decomp3.ch"
                                                                                    SwitchLang("metachop");
#line 69 "decomp3.ch"
#line 69 "decomp3.ch"
                                                                                    (ret=metachop().ReadInString(theValue));
#line 69 "decomp3.ch"
                                                                                    ;
#line 69 "decomp3.ch"
                                                                                    SwitchLangPoint(_oldLanguage);
#line 69 "decomp3.ch"
                                                                                }
#line 69 "decomp3.ch"
                                                                                
#line 69 "decomp3.ch"
#line 72 "decomp3.ch"
                                                                                if ( ret == (PTREE) -1 ) {
#line 72 "decomp3.ch"
#line 73 "decomp3.ch"
                                                                                                                char    string [MAXLENGTH];
                                                                                                                
#line 73 "decomp3.ch"
#line 74 "decomp3.ch"
                                                                                                                *(theValue + strlen(theValue) - 1) = '\0';
#line 74 "decomp3.ch"
#line 75 "decomp3.ch"
                                                                                                                strcpy(string, "Error while parsing : ");
#line 75 "decomp3.ch"
#line 76 "decomp3.ch"
                                                                                                                strcat(string, theValue);
#line 76 "decomp3.ch"
#line 77 "decomp3.ch"
                                                                                                                strcat(string, "\n");
#line 77 "decomp3.ch"
#line 78 "decomp3.ch"
                                                                                                                line = 0 ;
#line 78 "decomp3.ch"
#line 79 "decomp3.ch"
                                                                                                                PrintError(string, "", 0, 0, 0, 3, 1);
#line 79 "decomp3.ch"
#line 80 "decomp3.ch"
                                                                                                                exit(0);
#line 80 "decomp3.ch"
#line 81 "decomp3.ch"
                                                                                                                
#line 81 "decomp3.ch"
#line 81 "decomp3.ch"
                                                                                                              }
#line 81 "decomp3.ch"
#line 82 "decomp3.ch"
                                                                                if ( ((_inter = (PPTREE)ret,1) && 
#line 82 "decomp3.ch"
                                                                                        (NumberTree(_inter) == metachop::IDENT) &&
#line 82 "decomp3.ch"
                                                                                        1) ) {
#line 82 "decomp3.ch"
#line 83 "decomp3.ch"
                                                                                                (catcher=ret);
#line 83 "decomp3.ch"
                                                                                                
#line 83 "decomp3.ch"
#line 84 "decomp3.ch"
                                                                                                ((_inter = (PPTREE)ret,1) && 
#line 84 "decomp3.ch"
                                                                                                    ((ret=SonTree(_inter,1)),1) &&
#line 84 "decomp3.ch"
                                                                                                    1);
#line 84 "decomp3.ch"
                                                                                                ;
#line 84 "decomp3.ch"
#line 90 "decomp3.ch"
                                                                                                {
#line 90 "decomp3.ch"
#line 91 "decomp3.ch"
                                                                                                    ItPtree it (tree) ;
                                                                                                    
#line 91 "decomp3.ch"
#line 92 "decomp3.ch"
                                                                                                    PPTREE  _for_elem ;
                                                                                                    
#line 92 "decomp3.ch"
#line 93 "decomp3.ch"
                                                                                                    while ( (for_elem = it++) ) {
#line 93 "decomp3.ch"
#line 94 "decomp3.ch"
                                                                                                                                   if ( ((_inter = (PPTREE)for_elem,1) && 
#line 94 "decomp3.ch"
                                                                                                                                          (NumberTree(_inter) == META) &&
#line 94 "decomp3.ch"
                                                                                                                                          1) && !strcmp(Value(for_elem) + 1, theValue) ) {
#line 94 "decomp3.ch"
#line 95 "decomp3.ch"
                                                                                                                                                                                               {
#line 95 "decomp3.ch"
                                                                                                                                                                                               PPTREE _ptTree0= (PPTREE) 0,_sonTree0= (PPTREE) 0 ;
#line 95 "decomp3.ch"
                                                                                                                                                                                               _ptTree0 = StoreRef(CopyTree(ret));
#line 95 "decomp3.ch"
                                                                                                                                                                                               ReplaceTree(for_elem, 1, _ptTree0);
#line 95 "decomp3.ch"
                                                                                                                                                                                               }
#line 95 "decomp3.ch"
                                                                                                                                                                                               
#line 95 "decomp3.ch"
#line 96 "decomp3.ch"
                                                                                                                                                                                               
#line 96 "decomp3.ch"
#line 96 "decomp3.ch"
                                                                                                                                                                                               }
#line 96 "decomp3.ch"
#line 97 "decomp3.ch"
                                                                                                                                   
#line 97 "decomp3.ch"
#line 97 "decomp3.ch"
                                                                                                                                   }
#line 97 "decomp3.ch"
#line 98 "decomp3.ch"
                                                                                                    
#line 98 "decomp3.ch"
#line 98 "decomp3.ch"
                                                                                                }
                                                                                                
#line 98 "decomp3.ch"
#line 103 "decomp3.ch"
                                                                                                {
#line 103 "decomp3.ch"
                                                                                                    PLANG _oldLanguage = pCurrentLanguage;
#line 103 "decomp3.ch"
                                                                                                    SwitchLang("metachop");
#line 103 "decomp3.ch"
#line 104 "decomp3.ch"
                                                                                                    {
#line 104 "decomp3.ch"
#line 104 "decomp3.ch"
                                                                                                        {
#line 104 "decomp3.ch"
                                                                                                            /* [ metachop::EXP_LIST
                                                                                                                [ metachop::IDENT "MetaRep"]
                                                                                                                [ metachop::EXP_SEQ
                                                                                                                    [ LIST 
                                                                                                                        [ META "meta0"]
                                                                                                                        [ META "meta1"]
                                                                                                                        [ META "meta2"]
                                                                                                                    ]
                                                                                                                ]
                                                                                                               ]
#line 104 "decomp3.ch"
                                                                                                            */
#line 104 "decomp3.ch"
                                                                                                            {   ptStackTree = 0 ;
#line 104 "decomp3.ch"
                                                                                                                TheConstructor(stackTree,ptStackTree,-2,MakeString("MetaRep"),metachop::IDENT,1,-2,MakeString("meta0"),META,1,
                                                                                                                    -2,MakeString("meta1"),META,1,-2,MakeString("meta2"),META,1,-4,LIST,2,LIST,2,LIST,2,metachop::EXP_SEQ,1,metachop::EXP_LIST,2,-3) ;
                                                                                                                inter1 = PopTree ;
#line 104 "decomp3.ch"
                                                                                                            }   {
#line 104 "decomp3.ch"
                                                                                                                    register PPTREE _inter ;
#line 104 "decomp3.ch"
                                                                                                                
#line 104 "decomp3.ch"
#line 104 "decomp3.ch"
                                                                                                                    PTREE _Baum1 ;
#line 104 "decomp3.ch"
                                                                                                                    
#line 104 "decomp3.ch"
#line 104 "decomp3.ch"
                                                                                                                    PTREE _Baum0 ;
#line 104 "decomp3.ch"
                                                                                                                    
#line 104 "decomp3.ch"
#line 104 "decomp3.ch"
                                                                                                                    {
#line 104 "decomp3.ch"
                                                                                                                        PPTREE _ptTree0= (PPTREE) 0,_ptRes0= (PPTREE) 0;
#line 104 "decomp3.ch"
                                                                                                                        _ptRes0 = MakeTree(metachop::STRING, 1);
#line 104 "decomp3.ch"
                                                                                                                        _ptTree0 = StoreRef(MakeString(Value(ret)));
#line 104 "decomp3.ch"
                                                                                                                        ReplaceTree(_ptRes0, 1, _ptTree0);
#line 104 "decomp3.ch"
                                                                                                                        _Baum0 = _ptRes0;
#line 104 "decomp3.ch"
                                                                                                                    }
#line 104 "decomp3.ch"
                                                                                                                    
#line 104 "decomp3.ch"
#line 104 "decomp3.ch"
                                                                                                                    MetaRep("meta0", inter1, _Baum0);
#line 104 "decomp3.ch"
#line 104 "decomp3.ch"
                                                                                                                    {
#line 104 "decomp3.ch"
                                                                                                                        PPTREE _ptTree0= (PPTREE) 0,_ptRes0= (PPTREE) 0;
#line 104 "decomp3.ch"
                                                                                                                        _ptRes0 = MakeTree(metachop::IDENT, 1);
#line 104 "decomp3.ch"
                                                                                                                        _ptTree0 = StoreRef(MakeString(nameVar));
#line 104 "decomp3.ch"
                                                                                                                        ReplaceTree(_ptRes0, 1, _ptTree0);
#line 104 "decomp3.ch"
                                                                                                                        _Baum1 = _ptRes0;
#line 104 "decomp3.ch"
                                                                                                                    }
#line 104 "decomp3.ch"
                                                                                                                    
#line 104 "decomp3.ch"
#line 104 "decomp3.ch"
                                                                                                                    MetaRep("meta1", inter1, _Baum1);
#line 104 "decomp3.ch"
#line 104 "decomp3.ch"
                                                                                                                    MetaRep("meta2", inter1, fathertree(ret));
#line 104 "decomp3.ch"
#line 104 "decomp3.ch"
                                                                                                                }
#line 104 "decomp3.ch"
                                                                                                        }
#line 104 "decomp3.ch"
                                                                                                        
#line 104 "decomp3.ch"
#line 109 "decomp3.ch"
                                                                                                        {
#line 109 "decomp3.ch"
                                                                                                            PPTREE _ptTree0= (PPTREE) 0 ;
#line 109 "decomp3.ch"
                                                                                                            retListStat =  AddList( retListStat,inter1);
#line 109 "decomp3.ch"
                                                                                                        }
#line 109 "decomp3.ch"
                                                                                                        
#line 109 "decomp3.ch"
#line 110 "decomp3.ch"
                                                                                                        
#line 110 "decomp3.ch"
#line 110 "decomp3.ch"
                                                                                                    };
#line 110 "decomp3.ch"
                                                                                                    SwitchLangPoint(_oldLanguage);
#line 110 "decomp3.ch"
                                                                                                }
#line 110 "decomp3.ch"
                                                                                                
#line 110 "decomp3.ch"
#line 111 "decomp3.ch"
                                                                                                
#line 111 "decomp3.ch"
#line 111 "decomp3.ch"
                                                                                             } else 
#line 111 "decomp3.ch"
                                                                                {
#line 111 "decomp3.ch"
#line 112 "decomp3.ch"
                                                                                    sprintf(name, "meta%d", varNumber++);
#line 112 "decomp3.ch"
#line 113 "decomp3.ch"
                                                                                    {
#line 113 "decomp3.ch"
                                                                                        PPTREE _ptTree0= (PPTREE) 0,_ptRes0= (PPTREE) 0;
#line 113 "decomp3.ch"
                                                                                        _ptRes0 = MakeTree(META, 1);
#line 113 "decomp3.ch"
                                                                                        _ptTree0 = StoreRef(MakeString(name));
#line 113 "decomp3.ch"
                                                                                        ReplaceTree(_ptRes0, 1, _ptTree0);
#line 113 "decomp3.ch"
                                                                                        aux = _ptRes0;
#line 113 "decomp3.ch"
                                                                                    }
#line 113 "decomp3.ch"
                                                                                    
#line 113 "decomp3.ch"
#line 117 "decomp3.ch"
                                                                                    {
#line 117 "decomp3.ch"
                                                                                        PPTREE _ptTree0= (PPTREE) 0,_sonTree0= (PPTREE) 0 ;
#line 117 "decomp3.ch"
                                                                                        if (_ptTree0= fathertree(for_elem)) {
#line 117 "decomp3.ch"
                                                                                            int rank = ranktree(for_elem);
#line 117 "decomp3.ch"
                                                                                            ReplaceTree(_ptTree0,rank,aux);
#line 117 "decomp3.ch"
                                                                                        }
#line 117 "decomp3.ch"
                                                                                        for_elem = aux;
#line 117 "decomp3.ch"
                                                                                    }
#line 117 "decomp3.ch"
                                                                                    
#line 117 "decomp3.ch"
#line 118 "decomp3.ch"
                                                                                    it.Current(for_elem);
#line 118 "decomp3.ch"
#line 122 "decomp3.ch"
                                                                                    {
#line 122 "decomp3.ch"
                                                                                        PLANG _oldLanguage = pCurrentLanguage;
#line 122 "decomp3.ch"
                                                                                        SwitchLang("metachop");
#line 122 "decomp3.ch"
#line 123 "decomp3.ch"
                                                                                        {
#line 123 "decomp3.ch"
#line 123 "decomp3.ch"
                                                                                            {
#line 123 "decomp3.ch"
                                                                                                /* [ metachop::EXP_LIST
                                                                                                    [ metachop::IDENT "MetaRep"]
                                                                                                    [ metachop::EXP_SEQ
                                                                                                        [ LIST 
                                                                                                            [ META "meta0"]
                                                                                                            [ META "meta1"]
                                                                                                            [ META "ret"]
                                                                                                        ]
                                                                                                    ]
                                                                                                   ]
#line 123 "decomp3.ch"
                                                                                                */
#line 123 "decomp3.ch"
                                                                                                {   ptStackTree = 0 ;
#line 123 "decomp3.ch"
                                                                                                    TheConstructor(stackTree,ptStackTree,-2,MakeString("MetaRep"),metachop::IDENT,1,-2,MakeString("meta0"),META,1,
                                                                                                        -2,MakeString("meta1"),META,1,-2,MakeString("ret"),META,1,-4,LIST,2,LIST,2,LIST,2,metachop::EXP_SEQ,1,metachop::EXP_LIST,2,-3) ;
                                                                                                    inter1 = PopTree ;
#line 123 "decomp3.ch"
                                                                                                }   {
#line 123 "decomp3.ch"
                                                                                                        register PPTREE _inter ;
#line 123 "decomp3.ch"
                                                                                                    
#line 123 "decomp3.ch"
#line 123 "decomp3.ch"
                                                                                                        PTREE   _Baum1 ;
#line 123 "decomp3.ch"
                                                                                                        
#line 123 "decomp3.ch"
#line 123 "decomp3.ch"
                                                                                                        PTREE   _Baum0 ;
#line 123 "decomp3.ch"
                                                                                                        
#line 123 "decomp3.ch"
#line 123 "decomp3.ch"
                                                                                                        {
#line 123 "decomp3.ch"
                                                                                                            PPTREE _ptTree0= (PPTREE) 0,_ptRes0= (PPTREE) 0;
#line 123 "decomp3.ch"
                                                                                                            _ptRes0 = MakeTree(metachop::STRING, 1);
#line 123 "decomp3.ch"
                                                                                                            _ptTree0 = StoreRef(MakeString(name));
#line 123 "decomp3.ch"
                                                                                                            ReplaceTree(_ptRes0, 1, _ptTree0);
#line 123 "decomp3.ch"
                                                                                                            _Baum0 = _ptRes0;
#line 123 "decomp3.ch"
                                                                                                        }
#line 123 "decomp3.ch"
                                                                                                        
#line 123 "decomp3.ch"
#line 123 "decomp3.ch"
                                                                                                        MetaRep("meta0", inter1, _Baum0);
#line 123 "decomp3.ch"
#line 123 "decomp3.ch"
                                                                                                        {
#line 123 "decomp3.ch"
                                                                                                            PPTREE _ptTree0= (PPTREE) 0,_ptRes0= (PPTREE) 0;
#line 123 "decomp3.ch"
                                                                                                            _ptRes0 = MakeTree(metachop::IDENT, 1);
#line 123 "decomp3.ch"
                                                                                                            _ptTree0 = StoreRef(MakeString(nameVar));
#line 123 "decomp3.ch"
                                                                                                            ReplaceTree(_ptRes0, 1, _ptTree0);
#line 123 "decomp3.ch"
                                                                                                            _Baum1 = _ptRes0;
#line 123 "decomp3.ch"
                                                                                                        }
#line 123 "decomp3.ch"
                                                                                                        
#line 123 "decomp3.ch"
#line 123 "decomp3.ch"
                                                                                                        MetaRep("meta1", inter1, _Baum1);
#line 123 "decomp3.ch"
#line 123 "decomp3.ch"
                                                                                                        MetaRep("ret", inter1, ret);
#line 123 "decomp3.ch"
#line 123 "decomp3.ch"
                                                                                                    }
#line 123 "decomp3.ch"
                                                                                            }
#line 123 "decomp3.ch"
                                                                                            
#line 123 "decomp3.ch"
#line 128 "decomp3.ch"
                                                                                            {
#line 128 "decomp3.ch"
                                                                                                PPTREE _ptTree0= (PPTREE) 0 ;
#line 128 "decomp3.ch"
                                                                                                retListStat =  AddList( retListStat,inter1);
#line 128 "decomp3.ch"
                                                                                            }
#line 128 "decomp3.ch"
                                                                                            
#line 128 "decomp3.ch"
#line 129 "decomp3.ch"
                                                                                            
#line 129 "decomp3.ch"
#line 129 "decomp3.ch"
                                                                                        };
#line 129 "decomp3.ch"
                                                                                        SwitchLangPoint(_oldLanguage);
#line 129 "decomp3.ch"
                                                                                    }
#line 129 "decomp3.ch"
                                                                                    
#line 129 "decomp3.ch"
#line 130 "decomp3.ch"
                                                                                    
#line 130 "decomp3.ch"
#line 130 "decomp3.ch"
                                                                                }
                                                                                
#line 130 "decomp3.ch"
#line 131 "decomp3.ch"
                                                                                free(theValue);
#line 131 "decomp3.ch"
#line 132 "decomp3.ch"
                                                                                
#line 132 "decomp3.ch"
#line 132 "decomp3.ch"
                                                                               }
#line 132 "decomp3.ch"
#line 133 "decomp3.ch"
                                                    
#line 133 "decomp3.ch"
#line 133 "decomp3.ch"
                                                 }
#line 133 "decomp3.ch"
#line 134 "decomp3.ch"
                                    
#line 134 "decomp3.ch"
#line 134 "decomp3.ch"
                                   }
#line 134 "decomp3.ch"
#line 138 "decomp3.ch"
    if ( !((!retListStat)) ) {
#line 138 "decomp3.ch"
#line 139 "decomp3.ch"
                                DestroyComments(retListStat);
#line 139 "decomp3.ch"
#line 140 "decomp3.ch"
                                {
#line 140 "decomp3.ch"
                                    PLANG _oldLanguage = pCurrentLanguage;
#line 140 "decomp3.ch"
                                    SwitchLang("metachop");
#line 140 "decomp3.ch"
#line 141 "decomp3.ch"
                                    {
#line 141 "decomp3.ch"
#line 141 "decomp3.ch"
                                        if ( ((_inter = (PPTREE)retListStat,1) && 
#line 141 "decomp3.ch"
                                                (NumberTree(_inter) == LIST) &&
#line 141 "decomp3.ch"
                                                1) ) {
#line 141 "decomp3.ch"
#line 142 "decomp3.ch"
                                                        {
#line 142 "decomp3.ch"
                                                            PPTREE _ptTree0= (PPTREE) 0,_ptRes0= (PPTREE) 0;
#line 142 "decomp3.ch"
                                                            _ptRes0 = MakeTree(metachop::COMPOUND, 1);
#line 142 "decomp3.ch"
                                                            ReplaceTree(_ptRes0, 1, retListStat);
#line 142 "decomp3.ch"
                                                            retListStat = _ptRes0;
#line 142 "decomp3.ch"
                                                        }
#line 142 "decomp3.ch"
                                                        
#line 142 "decomp3.ch"
#line 143 "decomp3.ch"
                                                        
#line 143 "decomp3.ch"
#line 143 "decomp3.ch"
                                                     }
#line 143 "decomp3.ch"
#line 144 "decomp3.ch"
                                        GenTree(retListStat);
#line 144 "decomp3.ch"
#line 145 "decomp3.ch"
                                        GCManager(retListStat);
#line 145 "decomp3.ch"
#line 146 "decomp3.ch"
                                        
#line 146 "decomp3.ch"
#line 146 "decomp3.ch"
                                    };
#line 146 "decomp3.ch"
                                    SwitchLangPoint(_oldLanguage);
#line 146 "decomp3.ch"
                                }
#line 146 "decomp3.ch"
                                
#line 146 "decomp3.ch"
#line 147 "decomp3.ch"
                                
#line 147 "decomp3.ch"
#line 147 "decomp3.ch"
                               }
#line 147 "decomp3.ch"
#line 148 "decomp3.ch"
    return retListStat ;
    
#line 148 "decomp3.ch"
#line 149 "decomp3.ch"
    
#line 149 "decomp3.ch"
#line 149 "decomp3.ch"
}
#line 149 "decomp3.ch"

#line 153 "decomp3.ch"

#line 153 "decomp3.ch"
void englob ( PTREE tree )
#line 153 "decomp3.ch"
{
#line 153 "decomp3.ch"
    register PPTREE _inter ;
#line 153 "decomp3.ch"

#line 153 "decomp3.ch"
#line 153 "decomp3.ch"
    int _nextVal ;
    
#line 153 "decomp3.ch"
#line 156 "decomp3.ch"
    PTREE   father, temporary ;
#line 156 "decomp3.ch"
    
#line 156 "decomp3.ch"
#line 157 "decomp3.ch"
    int rank ;
    
#line 157 "decomp3.ch"
#line 159 "decomp3.ch"
    (father=FatherTree(tree));
#line 159 "decomp3.ch"
    
#line 159 "decomp3.ch"
#line 160 "decomp3.ch"
    if ( !(((_inter = (PPTREE)father,1) && 
#line 160 "decomp3.ch"
                (NumberTree(_inter) == LIST) &&
#line 160 "decomp3.ch"
                1)) ) {
#line 160 "decomp3.ch"
#line 161 "decomp3.ch"
                        rank = ranktree(tree);
#line 161 "decomp3.ch"
#line 162 "decomp3.ch"
                        {
#line 162 "decomp3.ch"
                            PPTREE _ptTree0= (PPTREE) 0,_ptRes0= (PPTREE) 0;
#line 162 "decomp3.ch"
                            _ptRes0 = MakeTree(metachop::COMPOUND, 1);
#line 162 "decomp3.ch"
                            _ptTree0 = tree;
#line 162 "decomp3.ch"
                            {
#line 162 "decomp3.ch"
                                PPTREE _ptTree1= (PPTREE) 0 ;
#line 162 "decomp3.ch"
                                _ptTree1 = (PPTREE) 0;
#line 162 "decomp3.ch"
                                _ptTree0 = AddList( _ptTree0,_ptTree1);
#line 162 "decomp3.ch"
                            }
#line 162 "decomp3.ch"
                            ReplaceTree(_ptRes0, 1, _ptTree0);
#line 162 "decomp3.ch"
                            temporary = _ptRes0;
#line 162 "decomp3.ch"
                        }
#line 162 "decomp3.ch"
                        
#line 162 "decomp3.ch"
#line 163 "decomp3.ch"
                        replacetree(father, rank, temporary);
#line 163 "decomp3.ch"
#line 164 "decomp3.ch"
                        
#line 164 "decomp3.ch"
#line 164 "decomp3.ch"
                      }
#line 164 "decomp3.ch"
#line 165 "decomp3.ch"
    
#line 165 "decomp3.ch"
#line 165 "decomp3.ch"
}
#line 165 "decomp3.ch"

#line 172 "decomp3.ch"

#line 172 "decomp3.ch"
void GenTree ( PTREE tree )
#line 172 "decomp3.ch"
{
#line 172 "decomp3.ch"
    register PPTREE _inter ;
#line 172 "decomp3.ch"

#line 172 "decomp3.ch"
#line 172 "decomp3.ch"
    int ptStackTree ;
    
#line 172 "decomp3.ch"
#line 172 "decomp3.ch"
    PPTREE  stackTree [1024];
    
#line 172 "decomp3.ch"
#line 172 "decomp3.ch"
    int _nextVal ;
    
#line 172 "decomp3.ch"
#line 175 "decomp3.ch"
    PTREE   ptTree, temporary, list, theList ;
#line 175 "decomp3.ch"
    
#line 175 "decomp3.ch"
#line 176 "decomp3.ch"
    PTREE   compoundTree ;
#line 176 "decomp3.ch"
    
#line 176 "decomp3.ch"
#line 177 "decomp3.ch"
    char    varName [20];
    
#line 177 "decomp3.ch"
#line 178 "decomp3.ch"
    char    str [5];
    
#line 178 "decomp3.ch"
#line 179 "decomp3.ch"
    int inList ;
    
#line 179 "decomp3.ch"
#line 185 "decomp3.ch"
    int massageIt ;
    
#line 185 "decomp3.ch"
#line 188 "decomp3.ch"
    int varNumber = 0 ;
    
#line 188 "decomp3.ch"
#line 189 "decomp3.ch"
    ItPtree it (tree) ;
    
#line 189 "decomp3.ch"
#line 190 "decomp3.ch"
    PPTREE  _for_elem ;
    
#line 190 "decomp3.ch"
#line 191 "decomp3.ch"
    PTREE   elem ;
#line 191 "decomp3.ch"
    
#line 191 "decomp3.ch"
#line 193 "decomp3.ch"
    while ( (for_elem = it++) ) {
#line 193 "decomp3.ch"
#line 194 "decomp3.ch"
                                    (elem=for_elem);
#line 194 "decomp3.ch"
                                    
#line 194 "decomp3.ch"
#line 195 "decomp3.ch"
                                    switch ( NumberTree(elem) ) {
#line 195 "decomp3.ch"
#line 195 "decomp3.ch"
                                        case metachop::PARSE : 
#line 195 "decomp3.ch"
#line 195 "decomp3.ch"
                                            (temporary=SonTree(elem, 1));
#line 195 "decomp3.ch"
                                            
#line 195 "decomp3.ch"
#line 195 "decomp3.ch"
                                        _Case13 : 
#line 195 "decomp3.ch"
#line 195 "decomp3.ch"
                                            ;
#line 195 "decomp3.ch"
#line 195 "decomp3.ch"
                                            goto _Case14 ;
                                            
#line 195 "decomp3.ch"
#line 195 "decomp3.ch"
                                        case metachop::NODE_TREE : 
#line 195 "decomp3.ch"
#line 195 "decomp3.ch"
                                        _Case14 : 
#line 195 "decomp3.ch"
#line 195 "decomp3.ch"
                                            ;
#line 195 "decomp3.ch"
#line 195 "decomp3.ch"
                                            goto _Case15 ;
                                            
#line 195 "decomp3.ch"
#line 195 "decomp3.ch"
                                        case metachop::NODE_LIST : 
#line 195 "decomp3.ch"
#line 195 "decomp3.ch"
                                        _Case15 : 
#line 195 "decomp3.ch"
#line 195 "decomp3.ch"
                                            ;
#line 195 "decomp3.ch"
#line 195 "decomp3.ch"
                                            goto _Case16 ;
                                            
#line 195 "decomp3.ch"
#line 200 "decomp3.ch"
                                        case metachop::NIL : 
#line 200 "decomp3.ch"
#line 200 "decomp3.ch"
                                        _Case16 : 
#line 200 "decomp3.ch"
#line 200 "decomp3.ch"
                                            ;
#line 200 "decomp3.ch"
#line 200 "decomp3.ch"
                                            (ptTree=for_elem);
#line 200 "decomp3.ch"
                                            
#line 200 "decomp3.ch"
#line 201 "decomp3.ch"
                                            massageIt = 0 ;
#line 201 "decomp3.ch"
#line 202 "decomp3.ch"
                                            inList = 0 ;
#line 202 "decomp3.ch"
#line 203 "decomp3.ch"
                                            while ( !(((_inter = (PPTREE)ptTree,1) && 
#line 203 "decomp3.ch"
                                                            (NumberTree(_inter) == metachop::COMPOUND) &&
#line 203 "decomp3.ch"
                                                            1)) ) {
#line 203 "decomp3.ch"
#line 204 "decomp3.ch"
                                                                    if ( !((ptTree=FatherTree(ptTree))) ) {
#line 204 "decomp3.ch"
#line 207 "decomp3.ch"
                                                                                                                massageIt = 0 ;
#line 207 "decomp3.ch"
#line 208 "decomp3.ch"
                                                                                                                break ;
                                                                                                                
#line 208 "decomp3.ch"
#line 209 "decomp3.ch"
                                                                                                                
#line 209 "decomp3.ch"
#line 209 "decomp3.ch"
                                                                                                              }
#line 209 "decomp3.ch"
#line 210 "decomp3.ch"
                                                                    switch ( NumberTree(ptTree) ) {
#line 210 "decomp3.ch"
#line 210 "decomp3.ch"
                                                                        case metachop::EXP_SEQ : 
#line 210 "decomp3.ch"
#line 210 "decomp3.ch"
                                                                        _Case19 : 
#line 210 "decomp3.ch"
#line 210 "decomp3.ch"
                                                                            ;
#line 210 "decomp3.ch"
#line 210 "decomp3.ch"
                                                                            goto _Case20 ;
                                                                            
#line 210 "decomp3.ch"
#line 210 "decomp3.ch"
                                                                        case metachop::FOREACH : 
#line 210 "decomp3.ch"
#line 210 "decomp3.ch"
                                                                        _Case20 : 
#line 210 "decomp3.ch"
#line 210 "decomp3.ch"
                                                                            ;
#line 210 "decomp3.ch"
#line 210 "decomp3.ch"
                                                                            goto _Case21 ;
                                                                            
#line 210 "decomp3.ch"
#line 214 "decomp3.ch"
                                                                        case metachop::RETURN : 
#line 214 "decomp3.ch"
#line 214 "decomp3.ch"
                                                                        _Case21 : 
#line 214 "decomp3.ch"
#line 214 "decomp3.ch"
                                                                            ;
#line 214 "decomp3.ch"
#line 214 "decomp3.ch"
                                                                            massageIt = 1 ;
#line 214 "decomp3.ch"
#line 215 "decomp3.ch"
                                                                            inList = 0 ;
#line 215 "decomp3.ch"
#line 216 "decomp3.ch"
                                                                            break ;
                                                                            
#line 216 "decomp3.ch"
#line 222 "decomp3.ch"
                                                                        case LIST : 
#line 222 "decomp3.ch"
#line 222 "decomp3.ch"
                                                                        _Case22 : 
#line 222 "decomp3.ch"
#line 222 "decomp3.ch"
                                                                            ;
#line 222 "decomp3.ch"
#line 222 "decomp3.ch"
                                                                            if ( !inList ) {
#line 222 "decomp3.ch"
#line 223 "decomp3.ch"
                                                                                                inList = 1 ;
#line 223 "decomp3.ch"
#line 224 "decomp3.ch"
                                                                                                (theList=ptTree);
#line 224 "decomp3.ch"
                                                                                                
#line 224 "decomp3.ch"
#line 225 "decomp3.ch"
                                                                                                
#line 225 "decomp3.ch"
#line 225 "decomp3.ch"
                                                                                             }
#line 225 "decomp3.ch"
#line 226 "decomp3.ch"
                                                                            break ;
                                                                            
#line 226 "decomp3.ch"
#line 226 "decomp3.ch"
                                                                        case metachop::EQU : 
#line 226 "decomp3.ch"
#line 226 "decomp3.ch"
                                                                        _Case23 : 
#line 226 "decomp3.ch"
#line 226 "decomp3.ch"
                                                                            ;
#line 226 "decomp3.ch"
#line 226 "decomp3.ch"
                                                                            goto _Case24 ;
                                                                            
#line 226 "decomp3.ch"
#line 229 "decomp3.ch"
                                                                        case metachop::NEQU : 
#line 229 "decomp3.ch"
#line 229 "decomp3.ch"
                                                                        _Case24 : 
#line 229 "decomp3.ch"
#line 229 "decomp3.ch"
                                                                            ;
#line 229 "decomp3.ch"
#line 229 "decomp3.ch"
                                                                            it.SkipSon(1);
#line 229 "decomp3.ch"
#line 230 "decomp3.ch"
                                                                            goto for_continue ;
                                                                            
#line 230 "decomp3.ch"
#line 230 "decomp3.ch"
                                                                            goto _Case25 ;
                                                                            
#line 230 "decomp3.ch"
#line 232 "decomp3.ch"
                                                                        default : 
#line 232 "decomp3.ch"
#line 232 "decomp3.ch"
                                                                        _Case25 : 
#line 232 "decomp3.ch"
#line 232 "decomp3.ch"
                                                                            ;
#line 232 "decomp3.ch"
#line 232 "decomp3.ch"
                                                                            inList = 0 ;
#line 232 "decomp3.ch"
#line 233 "decomp3.ch"
                                                                            break ;
                                                                            
#line 233 "decomp3.ch"
                                                                    }
#line 233 "decomp3.ch"
                                                                    
#line 233 "decomp3.ch"
#line 235 "decomp3.ch"
                                                                    
#line 235 "decomp3.ch"
#line 235 "decomp3.ch"
                                                                  }
#line 235 "decomp3.ch"
#line 238 "decomp3.ch"
                                            (compoundTree=ptTree);
#line 238 "decomp3.ch"
                                            
#line 238 "decomp3.ch"
#line 239 "decomp3.ch"
                                            if ( massageIt ) {
#line 239 "decomp3.ch"
#line 240 "decomp3.ch"
                                                                PTREE   keep ;
#line 240 "decomp3.ch"
                                                                
#line 240 "decomp3.ch"
#line 243 "decomp3.ch"
                                                                ((_inter = (PPTREE)compoundTree,1) && 
#line 243 "decomp3.ch"
                                                                    ((list=SonTree(_inter,1)),1) &&
#line 243 "decomp3.ch"
                                                                    1);
#line 243 "decomp3.ch"
                                                                ;
#line 243 "decomp3.ch"
#line 244 "decomp3.ch"
                                                                sprintf(varName, "_Baum%d", varNumber++);
#line 244 "decomp3.ch"
#line 245 "decomp3.ch"
                                                                {
#line 245 "decomp3.ch"
                                                                    /* [ metachop::DECLARATION
                                                                        [ NIL ] 
                                                                        [ metachop::TIDENT [ metachop::IDENT "PTREE"]]
                                                                        [ LIST 
                                                                            [ META "meta0"]
                                                                        ]
                                                                       ]
#line 245 "decomp3.ch"
                                                                    */
#line 245 "decomp3.ch"
                                                                    {   ptStackTree = 0 ;
#line 245 "decomp3.ch"
                                                                        TheConstructor(stackTree,ptStackTree,-4,-2,MakeString("PTREE"),metachop::IDENT,1,metachop::TIDENT,1,-2,MakeString("meta0"),META,1,-4,LIST,2,metachop::DECLARATION,3,-3) ;
                                                                        temporary = PopTree ;
#line 245 "decomp3.ch"
                                                                    }   {
#line 245 "decomp3.ch"
                                                                            register PPTREE _inter ;
#line 245 "decomp3.ch"
                                                                        
#line 245 "decomp3.ch"
#line 245 "decomp3.ch"
                                                                            PTREE   _Baum0 ;
#line 245 "decomp3.ch"
                                                                            
#line 245 "decomp3.ch"
#line 245 "decomp3.ch"
                                                                            {
#line 245 "decomp3.ch"
                                                                                PPTREE _ptTree0= (PPTREE) 0,_ptRes0= (PPTREE) 0;
#line 245 "decomp3.ch"
                                                                                _ptRes0 = MakeTree(LIST, 2);
#line 245 "decomp3.ch"
                                                                                {
#line 245 "decomp3.ch"
                                                                                    PPTREE _ptTree1= (PPTREE) 0,_ptRes1= (PPTREE) 0;
#line 245 "decomp3.ch"
                                                                                    _ptRes1 = MakeTree(metachop::IDENT, 1);
#line 245 "decomp3.ch"
                                                                                    _ptTree1 = StoreRef(MakeString(varName));
#line 245 "decomp3.ch"
                                                                                    ReplaceTree(_ptRes1, 1, _ptTree1);
#line 245 "decomp3.ch"
                                                                                    _ptTree0 = _ptRes1;
#line 245 "decomp3.ch"
                                                                                }
#line 245 "decomp3.ch"
                                                                                ReplaceTree(_ptRes0, 1, _ptTree0);
#line 245 "decomp3.ch"
                                                                                _Baum0 = _ptRes0;
#line 245 "decomp3.ch"
                                                                            }
#line 245 "decomp3.ch"
                                                                            
#line 245 "decomp3.ch"
#line 245 "decomp3.ch"
                                                                            MetaRep("meta0", temporary, _Baum0);
#line 245 "decomp3.ch"
#line 245 "decomp3.ch"
                                                                        }
#line 245 "decomp3.ch"
                                                                }
#line 245 "decomp3.ch"
                                                                
#line 245 "decomp3.ch"
#line 249 "decomp3.ch"
                                                                {
#line 249 "decomp3.ch"
                                                                    PPTREE _ptTree0= (PPTREE) 0,_sonTree0= (PPTREE) 0 ;
#line 249 "decomp3.ch"
                                                                    _ptTree0 = temporary;
#line 249 "decomp3.ch"
                                                                    {
#line 249 "decomp3.ch"
                                                                        PPTREE _ptTree1= (PPTREE) 0 ;
#line 249 "decomp3.ch"
                                                                        _ptTree0 = AddList( _ptTree0,list);
#line 249 "decomp3.ch"
                                                                    }
#line 249 "decomp3.ch"
                                                                    ReplaceTree(compoundTree, 1, _ptTree0);
#line 249 "decomp3.ch"
                                                                }
#line 249 "decomp3.ch"
                                                                
#line 249 "decomp3.ch"
#line 253 "decomp3.ch"
                                                                {
#line 253 "decomp3.ch"
                                                                    PPTREE _ptTree0= (PPTREE) 0,_ptRes0= (PPTREE) 0;
#line 253 "decomp3.ch"
                                                                    _ptRes0 = MakeTree(metachop::IDENT, 1);
#line 253 "decomp3.ch"
                                                                    _ptTree0 = StoreRef(MakeString(varName));
#line 253 "decomp3.ch"
                                                                    ReplaceTree(_ptRes0, 1, _ptTree0);
#line 253 "decomp3.ch"
                                                                    ptTree = _ptRes0;
#line 253 "decomp3.ch"
                                                                }
#line 253 "decomp3.ch"
                                                                
#line 253 "decomp3.ch"
#line 254 "decomp3.ch"
                                                                (keep=for_elem);
#line 254 "decomp3.ch"
                                                                
#line 254 "decomp3.ch"
#line 255 "decomp3.ch"
                                                                {
#line 255 "decomp3.ch"
                                                                    PPTREE _ptTree0= (PPTREE) 0,_sonTree0= (PPTREE) 0 ;
#line 255 "decomp3.ch"
                                                                    if (_ptTree0= fathertree(for_elem)) {
#line 255 "decomp3.ch"
                                                                        int rank = ranktree(for_elem);
#line 255 "decomp3.ch"
                                                                        ReplaceTree(_ptTree0,rank,ptTree);
#line 255 "decomp3.ch"
                                                                    }
#line 255 "decomp3.ch"
                                                                }
#line 255 "decomp3.ch"
                                                                
#line 255 "decomp3.ch"
#line 259 "decomp3.ch"
                                                                {
#line 259 "decomp3.ch"
                                                                    /* [ metachop::AFF
                                                                        [ META "meta0"]
                                                                        [ META "for_elem"]
                                                                       ]
#line 259 "decomp3.ch"
                                                                    */
#line 259 "decomp3.ch"
                                                                    {   ptStackTree = 0 ;
#line 259 "decomp3.ch"
                                                                        TheConstructor(stackTree,ptStackTree,-2,MakeString("meta0"),META,1,-2,MakeString("for_elem"),META,1,metachop::AFF,2,-3) ;
                                                                        temporary = PopTree ;
#line 259 "decomp3.ch"
                                                                    }   {
#line 259 "decomp3.ch"
                                                                            register PPTREE _inter ;
#line 259 "decomp3.ch"
                                                                        
#line 259 "decomp3.ch"
#line 259 "decomp3.ch"
                                                                            PTREE   _Baum0 ;
#line 259 "decomp3.ch"
                                                                            
#line 259 "decomp3.ch"
#line 259 "decomp3.ch"
                                                                            {
#line 259 "decomp3.ch"
                                                                                PPTREE _ptTree0= (PPTREE) 0,_ptRes0= (PPTREE) 0;
#line 259 "decomp3.ch"
                                                                                _ptRes0 = MakeTree(metachop::IDENT, 1);
#line 259 "decomp3.ch"
                                                                                _ptTree0 = StoreRef(MakeString(varName));
#line 259 "decomp3.ch"
                                                                                ReplaceTree(_ptRes0, 1, _ptTree0);
#line 259 "decomp3.ch"
                                                                                _Baum0 = _ptRes0;
#line 259 "decomp3.ch"
                                                                            }
#line 259 "decomp3.ch"
                                                                            
#line 259 "decomp3.ch"
#line 259 "decomp3.ch"
                                                                            MetaRep("meta0", temporary, _Baum0);
#line 259 "decomp3.ch"
#line 259 "decomp3.ch"
                                                                            MetaRep("for_elem", temporary, for_elem);
#line 259 "decomp3.ch"
#line 259 "decomp3.ch"
                                                                        }
#line 259 "decomp3.ch"
                                                                }
#line 259 "decomp3.ch"
                                                                
#line 259 "decomp3.ch"
#line 263 "decomp3.ch"
                                                                (theList=FatherTree(theList));
#line 263 "decomp3.ch"
                                                                
#line 263 "decomp3.ch"
#line 268 "decomp3.ch"
                                                                ((_inter = (PPTREE)theList,1) && 
#line 268 "decomp3.ch"
                                                                    ((ptTree=SonTree(_inter,2)),1) &&
#line 268 "decomp3.ch"
                                                                    1);
#line 268 "decomp3.ch"
                                                                ;
#line 268 "decomp3.ch"
#line 269 "decomp3.ch"
                                                                {
#line 269 "decomp3.ch"
                                                                    PPTREE _ptTree0= (PPTREE) 0,_sonTree0= (PPTREE) 0 ;
#line 269 "decomp3.ch"
                                                                    _ptTree0 = temporary;
#line 269 "decomp3.ch"
                                                                    {
#line 269 "decomp3.ch"
                                                                        PPTREE _ptTree1= (PPTREE) 0 ;
#line 269 "decomp3.ch"
                                                                        _ptTree0 = AddList( _ptTree0,ptTree);
#line 269 "decomp3.ch"
                                                                    }
#line 269 "decomp3.ch"
                                                                    ReplaceTree(theList, 2, _ptTree0);
#line 269 "decomp3.ch"
                                                                }
#line 269 "decomp3.ch"
                                                                
#line 269 "decomp3.ch"
#line 270 "decomp3.ch"
                                                                it.Current(temporary);
#line 270 "decomp3.ch"
#line 271 "decomp3.ch"
                                                                
#line 271 "decomp3.ch"
#line 271 "decomp3.ch"
                                                              }
#line 271 "decomp3.ch"
#line 272 "decomp3.ch"
                                            it.SkipSon(1);
#line 272 "decomp3.ch"
#line 273 "decomp3.ch"
                                            continue ;
                                            
#line 273 "decomp3.ch"
#line 273 "decomp3.ch"
                                            goto _Case17 ;
                                            
#line 273 "decomp3.ch"
#line 278 "decomp3.ch"
                                        case metachop::FOREACH : 
#line 278 "decomp3.ch"
#line 278 "decomp3.ch"
                                            (temporary=SonTree(elem, 1));
#line 278 "decomp3.ch"
                                            
#line 278 "decomp3.ch"
#line 278 "decomp3.ch"
                                        _Case17 : 
#line 278 "decomp3.ch"
#line 278 "decomp3.ch"
                                            ;
#line 278 "decomp3.ch"
#line 278 "decomp3.ch"
                                            if ( ((_inter = (PPTREE)temporary,1) && 
#line 278 "decomp3.ch"
                                                    (NumberTree(_inter) == metachop::NIL) &&
#line 278 "decomp3.ch"
                                                    1) ) 
#line 278 "decomp3.ch"
#line 279 "decomp3.ch"
                                                it.Current(temporary);
#line 279 "decomp3.ch"
#line 280 "decomp3.ch"
                                            break ;
                                            
#line 280 "decomp3.ch"
#line 281 "decomp3.ch"
                                        default : 
#line 281 "decomp3.ch"
#line 281 "decomp3.ch"
                                        _Case18 : 
#line 281 "decomp3.ch"
#line 281 "decomp3.ch"
                                            ;
#line 281 "decomp3.ch"
#line 281 "decomp3.ch"
                                            break ;
                                            
#line 281 "decomp3.ch"
                                    }
#line 281 "decomp3.ch"
                                    
#line 281 "decomp3.ch"
#line 283 "decomp3.ch"
                                   for_continue : 
#line 283 "decomp3.ch"
#line 284 "decomp3.ch"
                                    ;
#line 284 "decomp3.ch"
#line 285 "decomp3.ch"
                                    
#line 285 "decomp3.ch"
#line 285 "decomp3.ch"
                                   }
#line 285 "decomp3.ch"
#line 286 "decomp3.ch"
    
#line 286 "decomp3.ch"
#line 286 "decomp3.ch"
}
#line 286 "decomp3.ch"

#line 290 "decomp3.ch"

#line 290 "decomp3.ch"
PTREE CreateGCClass ( char *name )
#line 290 "decomp3.ch"
{
#line 290 "decomp3.ch"
    register PPTREE _inter ;
#line 290 "decomp3.ch"

#line 290 "decomp3.ch"
#line 290 "decomp3.ch"
    PTREE   _Baum0 ;
#line 290 "decomp3.ch"
    
#line 290 "decomp3.ch"
#line 290 "decomp3.ch"
    int ptStackTree ;
    
#line 290 "decomp3.ch"
#line 290 "decomp3.ch"
    PPTREE  stackTree [1024];
    
#line 290 "decomp3.ch"
#line 290 "decomp3.ch"
    int _nextVal ;
    
#line 290 "decomp3.ch"
#line 293 "decomp3.ch"
    char    *nName = (char *)malloc(strlen(name) + 3);
    
#line 293 "decomp3.ch"
#line 294 "decomp3.ch"
    PTREE   pattern ;
#line 294 "decomp3.ch"
    
#line 294 "decomp3.ch"
#line 297 "decomp3.ch"
    strcpy(nName, "__");
#line 297 "decomp3.ch"
#line 298 "decomp3.ch"
    strcat(nName, name);
#line 298 "decomp3.ch"
#line 302 "decomp3.ch"
    {
#line 302 "decomp3.ch"
        /* [ metachop::DECLARATION
            [ NIL ] 
            [ metachop::TIDENT [ metachop::IDENT "CPTREE"]]
            [ LIST 
                [ metachop::TYP_AFF_CALL
                    [ META "meta0"]
                    [ metachop::ADDR [ META "meta1"]]
                ]
            ]
           ]
#line 302 "decomp3.ch"
        */
#line 302 "decomp3.ch"
        {   ptStackTree = 0 ;
#line 302 "decomp3.ch"
            TheConstructor(stackTree,ptStackTree,-4,-2,MakeString("CPTREE"),metachop::IDENT,1,metachop::TIDENT,1,-2,MakeString("meta0"),META,1,
                -2,MakeString("meta1"),META,1,metachop::ADDR,1,metachop::TYP_AFF_CALL,2,-4,LIST,2,metachop::DECLARATION,3,-3) ;
            pattern = PopTree ;
#line 302 "decomp3.ch"
        }   {
#line 302 "decomp3.ch"
                register PPTREE _inter ;
#line 302 "decomp3.ch"
            
#line 302 "decomp3.ch"
#line 302 "decomp3.ch"
                PTREE   _Baum1 ;
#line 302 "decomp3.ch"
                
#line 302 "decomp3.ch"
#line 302 "decomp3.ch"
                PTREE   _Baum0 ;
#line 302 "decomp3.ch"
                
#line 302 "decomp3.ch"
#line 302 "decomp3.ch"
                {
#line 302 "decomp3.ch"
                    PPTREE _ptTree0= (PPTREE) 0,_ptRes0= (PPTREE) 0;
#line 302 "decomp3.ch"
                    _ptRes0 = MakeTree(metachop::IDENT, 1);
#line 302 "decomp3.ch"
                    _ptTree0 = StoreRef(MakeString(nName));
#line 302 "decomp3.ch"
                    ReplaceTree(_ptRes0, 1, _ptTree0);
#line 302 "decomp3.ch"
                    _Baum0 = _ptRes0;
#line 302 "decomp3.ch"
                }
#line 302 "decomp3.ch"
                
#line 302 "decomp3.ch"
#line 302 "decomp3.ch"
                MetaRep("meta0", pattern, _Baum0);
#line 302 "decomp3.ch"
#line 302 "decomp3.ch"
                {
#line 302 "decomp3.ch"
                    PPTREE _ptTree0= (PPTREE) 0,_ptRes0= (PPTREE) 0;
#line 302 "decomp3.ch"
                    _ptRes0 = MakeTree(metachop::IDENT, 1);
#line 302 "decomp3.ch"
                    _ptTree0 = StoreRef(MakeString(nName + 2));
#line 302 "decomp3.ch"
                    ReplaceTree(_ptRes0, 1, _ptTree0);
#line 302 "decomp3.ch"
                    _Baum1 = _ptRes0;
#line 302 "decomp3.ch"
                }
#line 302 "decomp3.ch"
                
#line 302 "decomp3.ch"
#line 302 "decomp3.ch"
                MetaRep("meta1", pattern, _Baum1);
#line 302 "decomp3.ch"
#line 302 "decomp3.ch"
            }
#line 302 "decomp3.ch"
    }
#line 302 "decomp3.ch"
    
#line 302 "decomp3.ch"
#line 308 "decomp3.ch"
    {
#line 308 "decomp3.ch"
        PPTREE _ptTree0= (PPTREE) 0,_ptRes0= (PPTREE) 0;
#line 308 "decomp3.ch"
        _ptRes0 = MakeTree(metachop::TYP_AFF_CALL, 2);
#line 308 "decomp3.ch"
        {
#line 308 "decomp3.ch"
            PPTREE _ptTree1= (PPTREE) 0,_ptRes1= (PPTREE) 0;
#line 308 "decomp3.ch"
            _ptRes1 = MakeTree(META, 1);
#line 308 "decomp3.ch"
            _ptTree1 = MakeString("x") ;
#line 308 "decomp3.ch"
            ReplaceTree(_ptRes1, 1, _ptTree1);
#line 308 "decomp3.ch"
            _ptTree0 = _ptRes1;
#line 308 "decomp3.ch"
        }
#line 308 "decomp3.ch"
        ReplaceTree(_ptRes0, 1, _ptTree0);
#line 308 "decomp3.ch"
        {
#line 308 "decomp3.ch"
            PPTREE _ptTree1= (PPTREE) 0,_ptRes1= (PPTREE) 0;
#line 308 "decomp3.ch"
            _ptRes1 = MakeTree(META, 1);
#line 308 "decomp3.ch"
            _ptTree1 = MakeString("y") ;
#line 308 "decomp3.ch"
            ReplaceTree(_ptRes1, 1, _ptTree1);
#line 308 "decomp3.ch"
            _ptTree0 = _ptRes1;
#line 308 "decomp3.ch"
        }
#line 308 "decomp3.ch"
        ReplaceTree(_ptRes0, 2, _ptTree0);
#line 308 "decomp3.ch"
        _Baum0 = _ptRes0;
#line 308 "decomp3.ch"
    }
#line 308 "decomp3.ch"
    
#line 308 "decomp3.ch"
#line 308 "decomp3.ch"
    (pattern=find(_Baum0, pattern));
#line 308 "decomp3.ch"
    
#line 308 "decomp3.ch"
#line 311 "decomp3.ch"
    free(nName);
#line 311 "decomp3.ch"
#line 312 "decomp3.ch"
    return pattern ;
    
#line 312 "decomp3.ch"
#line 313 "decomp3.ch"
    
#line 313 "decomp3.ch"
#line 313 "decomp3.ch"
}
#line 313 "decomp3.ch"

#line 319 "decomp3.ch"

#line 319 "decomp3.ch"
PTREE FullCreateGCClass ( PTREE list )
#line 319 "decomp3.ch"
{
#line 319 "decomp3.ch"
    register PPTREE _inter ;
#line 319 "decomp3.ch"

#line 319 "decomp3.ch"
#line 319 "decomp3.ch"
    PTREE   _Baum0 ;
#line 319 "decomp3.ch"
    
#line 319 "decomp3.ch"
#line 319 "decomp3.ch"
    int ptStackTree ;
    
#line 319 "decomp3.ch"
#line 319 "decomp3.ch"
    PPTREE  stackTree [1024];
    
#line 319 "decomp3.ch"
#line 319 "decomp3.ch"
    int _nextVal ;
    
#line 319 "decomp3.ch"
#line 322 "decomp3.ch"
    PTREE   pattern, temporary, father ;
#line 322 "decomp3.ch"
    
#line 322 "decomp3.ch"
#line 323 "decomp3.ch"
    int rank ;
    
#line 323 "decomp3.ch"
#line 325 "decomp3.ch"
    {
#line 325 "decomp3.ch"
        /* [ metachop::DECLARATION
            [ NIL ] 
            [ metachop::TIDENT [ metachop::IDENT "CPTREE"]]
            [ LIST 
                [ metachop::IDENT "a1"]
                [ metachop::IDENT "a2"]
            ]
           ]
#line 325 "decomp3.ch"
        */
#line 325 "decomp3.ch"
        {   ptStackTree = 0 ;
#line 325 "decomp3.ch"
            TheConstructor(stackTree,ptStackTree,-4,-2,MakeString("CPTREE"),metachop::IDENT,1,metachop::TIDENT,1,-2,MakeString("a1"),metachop::IDENT,1,
                -2,MakeString("a2"),metachop::IDENT,1,-4,LIST,2,LIST,2,metachop::DECLARATION,3,-3) ;
            pattern = PopTree ;
#line 325 "decomp3.ch"
        }   }
#line 325 "decomp3.ch"
    
#line 325 "decomp3.ch"
#line 326 "decomp3.ch"
    {
#line 326 "decomp3.ch"
        PPTREE _ptTree0= (PPTREE) 0,_ptRes0= (PPTREE) 0;
#line 326 "decomp3.ch"
        _ptRes0 = MakeTree(LIST, 2);
#line 326 "decomp3.ch"
        {
#line 326 "decomp3.ch"
            PPTREE _ptTree1= (PPTREE) 0,_ptRes1= (PPTREE) 0;
#line 326 "decomp3.ch"
            _ptRes1 = MakeTree(META, 1);
#line 326 "decomp3.ch"
            _ptTree1 = MakeString("x") ;
#line 326 "decomp3.ch"
            ReplaceTree(_ptRes1, 1, _ptTree1);
#line 326 "decomp3.ch"
            _ptTree0 = _ptRes1;
#line 326 "decomp3.ch"
        }
#line 326 "decomp3.ch"
        ReplaceTree(_ptRes0, 1, _ptTree0);
#line 326 "decomp3.ch"
        {
#line 326 "decomp3.ch"
            PPTREE _ptTree1= (PPTREE) 0,_ptRes1= (PPTREE) 0;
#line 326 "decomp3.ch"
            _ptRes1 = MakeTree(META, 1);
#line 326 "decomp3.ch"
            _ptTree1 = MakeString("y") ;
#line 326 "decomp3.ch"
            ReplaceTree(_ptRes1, 1, _ptTree1);
#line 326 "decomp3.ch"
            _ptTree0 = _ptRes1;
#line 326 "decomp3.ch"
        }
#line 326 "decomp3.ch"
        ReplaceTree(_ptRes0, 2, _ptTree0);
#line 326 "decomp3.ch"
        _Baum0 = _ptRes0;
#line 326 "decomp3.ch"
    }
#line 326 "decomp3.ch"
    
#line 326 "decomp3.ch"
#line 326 "decomp3.ch"
    (temporary=find(_Baum0, pattern));
#line 326 "decomp3.ch"
    
#line 326 "decomp3.ch"
#line 327 "decomp3.ch"
    {
#line 327 "decomp3.ch"
        PPTREE _ptTree0= (PPTREE) 0,_sonTree0= (PPTREE) 0 ;
#line 327 "decomp3.ch"
        if (_ptTree0= fathertree(temporary)) {
#line 327 "decomp3.ch"
            int rank = ranktree(temporary);
#line 327 "decomp3.ch"
            ReplaceTree(_ptTree0,rank,list);
#line 327 "decomp3.ch"
        }
#line 327 "decomp3.ch"
    }
#line 327 "decomp3.ch"
    
#line 327 "decomp3.ch"
#line 328 "decomp3.ch"
    return pattern ;
    
#line 328 "decomp3.ch"
#line 329 "decomp3.ch"
    
#line 329 "decomp3.ch"
#line 329 "decomp3.ch"
}
#line 329 "decomp3.ch"

#line 333 "decomp3.ch"

#line 333 "decomp3.ch"
void GCManager ( PTREE tree )
#line 333 "decomp3.ch"
{
#line 333 "decomp3.ch"
    register PPTREE _inter ;
#line 333 "decomp3.ch"

#line 333 "decomp3.ch"
#line 333 "decomp3.ch"
    PTREE   _Baum0 ;
#line 333 "decomp3.ch"
    
#line 333 "decomp3.ch"
#line 333 "decomp3.ch"
    int ptStackTree ;
    
#line 333 "decomp3.ch"
#line 333 "decomp3.ch"
    PPTREE  stackTree [1024];
    
#line 333 "decomp3.ch"
#line 333 "decomp3.ch"
    int _retVal [3];
    
#line 333 "decomp3.ch"
#line 333 "decomp3.ch"
    PPTREE  _storeVal [3];
    
#line 333 "decomp3.ch"
#line 333 "decomp3.ch"
    int _nextVal ;
    
#line 333 "decomp3.ch"
#line 336 "decomp3.ch"
    PTREE   list, pt_list, list_decl, son, son_decl, pattern, temporary, list_init, listClassInit ;
#line 336 "decomp3.ch"
    
#line 336 "decomp3.ch"
#line 337 "decomp3.ch"
    int somethingDone = 0 ;
    
#line 337 "decomp3.ch"
#line 338 "decomp3.ch"
    {
#line 338 "decomp3.ch"
        PPTREE _ptTree0= (PPTREE) 0,_ptRes0= (PPTREE) 0;
#line 338 "decomp3.ch"
        _ptRes0 = MakeTree(metachop::COMPOUND, 1);
#line 338 "decomp3.ch"
        {
#line 338 "decomp3.ch"
            PPTREE _ptTree1= (PPTREE) 0,_ptRes1= (PPTREE) 0;
#line 338 "decomp3.ch"
            _ptRes1 = MakeTree(META, 1);
#line 338 "decomp3.ch"
            _ptTree1 = MakeString("B") ;
#line 338 "decomp3.ch"
            ReplaceTree(_ptRes1, 1, _ptTree1);
#line 338 "decomp3.ch"
            _ptTree0 = _ptRes1;
#line 338 "decomp3.ch"
        }
#line 338 "decomp3.ch"
        ReplaceTree(_ptRes0, 1, _ptTree0);
#line 338 "decomp3.ch"
        _Baum0 = _ptRes0;
#line 338 "decomp3.ch"
    }
#line 338 "decomp3.ch"
    
#line 338 "decomp3.ch"
#line 338 "decomp3.ch"
    ItPtree it(tree, _Baum0);
    
#line 338 "decomp3.ch"
#line 339 "decomp3.ch"
    PPTREE  _for_elem ;
    
#line 339 "decomp3.ch"
#line 341 "decomp3.ch"
    while ( (for_elem = it++) ) {
#line 341 "decomp3.ch"
#line 342 "decomp3.ch"
                                    ((_inter = (PPTREE)for_elem,1) && 
#line 342 "decomp3.ch"
                                        ((list=SonTree(_inter,1)),1) &&
#line 342 "decomp3.ch"
                                        1);
#line 342 "decomp3.ch"
                                    ;
#line 342 "decomp3.ch"
#line 343 "decomp3.ch"
                                    (pt_list=list);
#line 343 "decomp3.ch"
                                    
#line 343 "decomp3.ch"
#line 344 "decomp3.ch"
                                    listClassInit = (PPTREE) 0 ;
#line 344 "decomp3.ch"
                                    
#line 344 "decomp3.ch"
#line 345 "decomp3.ch"
                                    list_init = (PPTREE) 0 ;
#line 345 "decomp3.ch"
                                    
#line 345 "decomp3.ch"
#line 346 "decomp3.ch"
                                    while ( !((!pt_list)) ) {
#line 346 "decomp3.ch"
#line 347 "decomp3.ch"
                                                                (son=(pt_list?pt_list.Nextl():(PPTREE)0));
#line 347 "decomp3.ch"
                                                                
#line 347 "decomp3.ch"
#line 351 "decomp3.ch"
                                                                if ( !(((_inter = (PPTREE)son,1) && 
#line 351 "decomp3.ch"
                                                                            (NumberTree(_inter) == metachop::DECLARATION) &&
#line 351 "decomp3.ch"
                                                                            1)) ) {
#line 351 "decomp3.ch"
#line 354 "decomp3.ch"
                                                                                    if ( listClassInit ) {
#line 354 "decomp3.ch"
#line 355 "decomp3.ch"
                                                                                                            {
#line 355 "decomp3.ch"
                                                                                                                PPTREE _ptTree0= (PPTREE) 0 ;
#line 355 "decomp3.ch"
                                                                                                                _ptTree0 = StoreRef(FullCreateGCClass(listClassInit));
#line 355 "decomp3.ch"
                                                                                                                list_init =  AddList( list_init,_ptTree0);
#line 355 "decomp3.ch"
                                                                                                            }
#line 355 "decomp3.ch"
                                                                                                            
#line 355 "decomp3.ch"
#line 356 "decomp3.ch"
                                                                                                            
#line 356 "decomp3.ch"
#line 356 "decomp3.ch"
                                                                                                          }
#line 356 "decomp3.ch"
#line 357 "decomp3.ch"
                                                                                    if ( list_init ) {
#line 357 "decomp3.ch"
#line 361 "decomp3.ch"
                                                                                                        (temporary=FatherTree(FatherTree(son)));
#line 361 "decomp3.ch"
                                                                                                        
#line 361 "decomp3.ch"
#line 364 "decomp3.ch"
                                                                                                        ((_inter = (PPTREE)temporary,1) && 
#line 364 "decomp3.ch"
                                                                                                            ((list=SonTree(_inter,2)),1) &&
#line 364 "decomp3.ch"
                                                                                                            1);
#line 364 "decomp3.ch"
                                                                                                        ;
#line 364 "decomp3.ch"
#line 365 "decomp3.ch"
                                                                                                        while ( ((son=(list_init?list_init.Nextl():(PPTREE)0))) ) {
#line 365 "decomp3.ch"
#line 366 "decomp3.ch"
                                                                                                                                                                       {
#line 366 "decomp3.ch"
                                                                                                                                                                       PPTREE _ptTree0=(PPTREE) 0;
#line 366 "decomp3.ch"
                                                                                                                                                                       _ptTree0 = son;
#line 366 "decomp3.ch"
                                                                                                                                                                       {
#line 366 "decomp3.ch"
                                                                                                                                                                       PPTREE _ptTree1= (PPTREE) 0 ;
#line 366 "decomp3.ch"
                                                                                                                                                                       _ptTree0 = AddList( _ptTree0,list);
#line 366 "decomp3.ch"
                                                                                                                                                                       }
#line 366 "decomp3.ch"
                                                                                                                                                                       list = _ptTree0;
#line 366 "decomp3.ch"
                                                                                                                                                                       ;
#line 366 "decomp3.ch"
                                                                                                                                                                       }
#line 366 "decomp3.ch"
                                                                                                                                                                       
#line 366 "decomp3.ch"
#line 367 "decomp3.ch"
                                                                                                                                                                       
#line 367 "decomp3.ch"
#line 367 "decomp3.ch"
                                                                                                                                                                       }
#line 367 "decomp3.ch"
#line 368 "decomp3.ch"
                                                                                                        {
#line 368 "decomp3.ch"
                                                                                                            PPTREE _ptTree0= (PPTREE) 0,_sonTree0= (PPTREE) 0 ;
#line 368 "decomp3.ch"
                                                                                                            ReplaceTree(temporary, 2, list);
#line 368 "decomp3.ch"
                                                                                                        }
#line 368 "decomp3.ch"
                                                                                                        
#line 368 "decomp3.ch"
#line 369 "decomp3.ch"
                                                                                                        
#line 369 "decomp3.ch"
#line 369 "decomp3.ch"
                                                                                                      }
#line 369 "decomp3.ch"
#line 370 "decomp3.ch"
                                                                                    (listClassInit=list_init = (PPTREE) 0 );
#line 370 "decomp3.ch"
                                                                                    
#line 370 "decomp3.ch"
#line 371 "decomp3.ch"
                                                                                    
#line 371 "decomp3.ch"
#line 371 "decomp3.ch"
                                                                                  }
#line 371 "decomp3.ch"
#line 372 "decomp3.ch"
                                                                if ( ((_inter = (PPTREE)son,1) && 
#line 372 "decomp3.ch"
                                                                        (NumberTree(_inter) == metachop::DECLARATION) &&
#line 372 "decomp3.ch"
                                                                        (_retVal[1]=((_storeVal[1]=_inter,_inter=SonTree(_inter,2),1) &&
#line 372 "decomp3.ch"
                                                                            (NumberTree(_inter) == metachop::TIDENT) &&
#line 372 "decomp3.ch"
                                                                            (_retVal[2]=((_storeVal[2]=_inter,_inter=SonTree(_inter,1),1) &&
#line 372 "decomp3.ch"
                                                                                (NumberTree(_inter) == metachop::IDENT) &&
#line 372 "decomp3.ch"
                                                                                (!strcmp(Value(SonTree(_inter,1)),"PTREE")) &&
#line 372 "decomp3.ch"
                                                                                1),
#line 372 "decomp3.ch"
                                                                                (_inter=_storeVal[2],1),_retVal[2]) &&
#line 372 "decomp3.ch"
                                                                            1),
#line 372 "decomp3.ch"
                                                                            (_inter=_storeVal[1],1),_retVal[1]) &&
#line 372 "decomp3.ch"
                                                                        ((list_decl=SonTree(_inter,3)),1) &&
#line 372 "decomp3.ch"
                                                                        1) ) {
#line 372 "decomp3.ch"
#line 373 "decomp3.ch"
                                                                                somethingDone = 1 ;
#line 373 "decomp3.ch"
#line 374 "decomp3.ch"
                                                                                while ( !((!list_decl)) ) {
#line 374 "decomp3.ch"
#line 375 "decomp3.ch"
                                                                                                                (son_decl=(list_decl?list_decl.Nextl():(PPTREE)0));
#line 375 "decomp3.ch"
                                                                                                                
#line 375 "decomp3.ch"
#line 376 "decomp3.ch"
#if 0
#line 376 "decomp3.ch"
#line 377 "decomp3.ch"
                                                                                                                if ( !(((_inter = (PPTREE)son_decl,1) && 
#line 377 "decomp3.ch"
                                                                                                                         (NumberTree(_inter) == metachop::TYP_AFF) &&
#line 377 "decomp3.ch"
                                                                                                                         1)) ) {
#line 377 "decomp3.ch"
#line 377 "decomp3.ch"
                                                                                                                               PTREE _Baum1 ;
#line 377 "decomp3.ch"
                                                                                                                               
#line 377 "decomp3.ch"
#line 381 "decomp3.ch"
                                                                                                                               (temporary=FatherTree(son_decl));
#line 381 "decomp3.ch"
                                                                                                                               
#line 381 "decomp3.ch"
#line 382 "decomp3.ch"
                                                                                                                               {
#line 382 "decomp3.ch"
                                                                                                                               /* [ metachop::DECLARATION
                                                                                                                                  [ NIL ] 
                                                                                                                                  [ metachop::TIDENT [ metachop::IDENT "PTREE"]]
                                                                                                                                  [ LIST 
                                                                                                                                  [ metachop::TYP_AFF
                                                                                                                                  [ META "son_decl"]
                                                                                                                                  [ metachop::INITIALIZER
                                                                                                                                  [ metachop::CAST
                                                                                                                                  [ metachop::ABST_DECLARATOR
                                                                                                                                  [ metachop::TIDENT [ metachop::IDENT "PTREE"]]
                                                                                                                                  [ NIL ] 
                                                                                                                                  ]
                                                                                                                                  [ metachop::INTEGER "0"]
                                                                                                                                  ]
                                                                                                                                  ]
                                                                                                                                  ]
                                                                                                                                  ]
                                                                                                                                  ]
#line 382 "decomp3.ch"
                                                                                                                               */
#line 382 "decomp3.ch"
                                                                                                                               {ptStackTree = 0 ;
#line 382 "decomp3.ch"
                                                                                                                                TheConstructor(stackTree,ptStackTree,-4,-2,MakeString("PTREE"),metachop::IDENT,1,metachop::TIDENT,1,-2,MakeString("son_decl"),META,1,
                                                                                                                                -2,MakeString("PTREE"),metachop::IDENT,1,metachop::TIDENT,1,-4,metachop::ABST_DECLARATOR,2,-2,MakeString("0"),metachop::INTEGER,1,metachop::CAST,2,metachop::INITIALIZER,1,metachop::TYP_AFF,2,-4,LIST,2,metachop::DECLARATION,3,-3) ;
                                                                                                                                pattern = PopTree ;
#line 382 "decomp3.ch"
                                                                                                                               }{
#line 382 "decomp3.ch"
                                                                                                                                register PPTREE _inter ;
#line 382 "decomp3.ch"
                                                                                                                                
#line 382 "decomp3.ch"
#line 382 "decomp3.ch"
                                                                                                                                MetaRep("son_decl", pattern, son_decl);
#line 382 "decomp3.ch"
#line 382 "decomp3.ch"
                                                                                                                                }
#line 382 "decomp3.ch"
                                                                                                                               }
#line 382 "decomp3.ch"
                                                                                                                               
#line 382 "decomp3.ch"
#line 383 "decomp3.ch"
                                                                                                                               {
#line 383 "decomp3.ch"
                                                                                                                               PPTREE _ptTree0= (PPTREE) 0,_ptRes0= (PPTREE) 0;
#line 383 "decomp3.ch"
                                                                                                                               _ptRes0 = MakeTree(metachop::TYP_AFF, 2);
#line 383 "decomp3.ch"
                                                                                                                               {
#line 383 "decomp3.ch"
                                                                                                                               PPTREE _ptTree1= (PPTREE) 0,_ptRes1= (PPTREE) 0;
#line 383 "decomp3.ch"
                                                                                                                               _ptRes1 = MakeTree(META, 1);
#line 383 "decomp3.ch"
                                                                                                                               _ptTree1 = MakeString("x") ;
#line 383 "decomp3.ch"
                                                                                                                               ReplaceTree(_ptRes1, 1, _ptTree1);
#line 383 "decomp3.ch"
                                                                                                                               _ptTree0 = _ptRes1;
#line 383 "decomp3.ch"
                                                                                                                               }
#line 383 "decomp3.ch"
                                                                                                                               ReplaceTree(_ptRes0, 1, _ptTree0);
#line 383 "decomp3.ch"
                                                                                                                               {
#line 383 "decomp3.ch"
                                                                                                                               PPTREE _ptTree1= (PPTREE) 0,_ptRes1= (PPTREE) 0;
#line 383 "decomp3.ch"
                                                                                                                               _ptRes1 = MakeTree(META, 1);
#line 383 "decomp3.ch"
                                                                                                                               _ptTree1 = MakeString("y") ;
#line 383 "decomp3.ch"
                                                                                                                               ReplaceTree(_ptRes1, 1, _ptTree1);
#line 383 "decomp3.ch"
                                                                                                                               _ptTree0 = _ptRes1;
#line 383 "decomp3.ch"
                                                                                                                               }
#line 383 "decomp3.ch"
                                                                                                                               ReplaceTree(_ptRes0, 2, _ptTree0);
#line 383 "decomp3.ch"
                                                                                                                               _Baum1 = _ptRes0;
#line 383 "decomp3.ch"
                                                                                                                               }
#line 383 "decomp3.ch"
                                                                                                                               
#line 383 "decomp3.ch"
#line 383 "decomp3.ch"
                                                                                                                               (pattern=find(_Baum1, pattern));
#line 383 "decomp3.ch"
                                                                                                                               
#line 383 "decomp3.ch"
#line 384 "decomp3.ch"
                                                                                                                               {
#line 384 "decomp3.ch"
                                                                                                                               PPTREE _ptTree0= (PPTREE) 0,_sonTree0= (PPTREE) 0 ;
#line 384 "decomp3.ch"
                                                                                                                               ReplaceTree(temporary, 1, pattern);
#line 384 "decomp3.ch"
                                                                                                                               }
#line 384 "decomp3.ch"
                                                                                                                               
#line 384 "decomp3.ch"
#line 385 "decomp3.ch"
                                                                                                                               
#line 385 "decomp3.ch"
#line 385 "decomp3.ch"
                                                                                                                               } else 
#line 385 "decomp3.ch"
                                                                                                                {
#line 385 "decomp3.ch"
#line 386 "decomp3.ch"
                                                                                                                    
#line 386 "decomp3.ch"
#line 386 "decomp3.ch"
                                                                                                                }
                                                                                                                
#line 386 "decomp3.ch"
#line 386 "decomp3.ch"
                                                                                                                
#line 386 "decomp3.ch"
#endif
                                                                                                                
#line 386 "decomp3.ch"
#line 388 "decomp3.ch"
                                                                                                                if ( ((_inter = (PPTREE)son_decl,1) && 
#line 388 "decomp3.ch"
                                                                                                                        (NumberTree(_inter) == metachop::TYP_AFF) &&
#line 388 "decomp3.ch"
                                                                                                                        1) ) {
#line 388 "decomp3.ch"
#line 388 "decomp3.ch"
                                                                                                                             PTREE _Baum2 ;
#line 388 "decomp3.ch"
                                                                                                                             
#line 388 "decomp3.ch"
#line 394 "decomp3.ch"
                                                                                                                             ((_inter = (PPTREE)son_decl,1) && 
#line 394 "decomp3.ch"
                                                                                                                             (_retVal[1]=((_storeVal[1]=_inter,_inter=SonTree(_inter,2),1) &&
#line 394 "decomp3.ch"
                                                                                                                             ((temporary=SonTree(_inter,1)),1) &&
#line 394 "decomp3.ch"
                                                                                                                             1),
#line 394 "decomp3.ch"
                                                                                                                             (_inter=_storeVal[1],1),_retVal[1]) &&
#line 394 "decomp3.ch"
                                                                                                                             1);
#line 394 "decomp3.ch"
                                                                                                                             ;
#line 394 "decomp3.ch"
#line 395 "decomp3.ch"
                                                                                                                             {
#line 395 "decomp3.ch"
                                                                                                                             /* [ metachop::AFF
                                                                                                                                [ META "meta0"]
                                                                                                                                [ META "temporary"]
                                                                                                                                ]
#line 395 "decomp3.ch"
                                                                                                                             */
#line 395 "decomp3.ch"
                                                                                                                             {ptStackTree = 0 ;
#line 395 "decomp3.ch"
                                                                                                                              TheConstructor(stackTree,ptStackTree,-2,MakeString("meta0"),META,1,-2,MakeString("temporary"),META,1,metachop::AFF,2,-3) ;
                                                                                                                              pattern = PopTree ;
#line 395 "decomp3.ch"
                                                                                                                             }{
#line 395 "decomp3.ch"
                                                                                                                              register PPTREE _inter ;
#line 395 "decomp3.ch"
                                                                                                                              
#line 395 "decomp3.ch"
#line 395 "decomp3.ch"
                                                                                                                              PTREE _Baum0 ;
#line 395 "decomp3.ch"
                                                                                                                              
#line 395 "decomp3.ch"
#line 395 "decomp3.ch"
                                                                                                                              {
#line 395 "decomp3.ch"
                                                                                                                              PPTREE _ptTree0= (PPTREE) 0,_ptRes0= (PPTREE) 0;
#line 395 "decomp3.ch"
                                                                                                                              _ptRes0 = MakeTree(metachop::IDENT, 1);
#line 395 "decomp3.ch"
                                                                                                                              _ptTree0 = StoreRef(MakeString(Value(son_decl)));
#line 395 "decomp3.ch"
                                                                                                                              ReplaceTree(_ptRes0, 1, _ptTree0);
#line 395 "decomp3.ch"
                                                                                                                              _Baum0 = _ptRes0;
#line 395 "decomp3.ch"
                                                                                                                              }
#line 395 "decomp3.ch"
                                                                                                                              
#line 395 "decomp3.ch"
#line 395 "decomp3.ch"
                                                                                                                              MetaRep("meta0", pattern, _Baum0);
#line 395 "decomp3.ch"
#line 395 "decomp3.ch"
                                                                                                                              MetaRep("temporary", pattern, temporary);
#line 395 "decomp3.ch"
#line 395 "decomp3.ch"
                                                                                                                              }
#line 395 "decomp3.ch"
                                                                                                                             }
#line 395 "decomp3.ch"
                                                                                                                             
#line 395 "decomp3.ch"
#line 400 "decomp3.ch"
                                                                                                                             {
#line 400 "decomp3.ch"
                                                                                                                             PPTREE _ptTree0=(PPTREE) 0;
#line 400 "decomp3.ch"
                                                                                                                             _ptTree0 = pattern;
#line 400 "decomp3.ch"
                                                                                                                             {
#line 400 "decomp3.ch"
                                                                                                                             PPTREE _ptTree1= (PPTREE) 0 ;
#line 400 "decomp3.ch"
                                                                                                                             _ptTree0 = AddList( _ptTree0,list_init);
#line 400 "decomp3.ch"
                                                                                                                             }
#line 400 "decomp3.ch"
                                                                                                                             list_init = _ptTree0;
#line 400 "decomp3.ch"
                                                                                                                             ;
#line 400 "decomp3.ch"
                                                                                                                             }
#line 400 "decomp3.ch"
                                                                                                                             
#line 400 "decomp3.ch"
#line 401 "decomp3.ch"
                                                                                                                             {
#line 401 "decomp3.ch"
                                                                                                                             /* [ metachop::DECLARATION
                                                                                                                                [ NIL ] 
                                                                                                                                [ metachop::TIDENT [ metachop::IDENT "PTREE"]]
                                                                                                                                [ LIST 
                                                                                                                                [ metachop::TYP_AFF
                                                                                                                                [ META "toto"]
                                                                                                                                [ metachop::INITIALIZER
                                                                                                                                [ metachop::CAST
                                                                                                                                [ metachop::ABST_DECLARATOR
                                                                                                                                [ metachop::TIDENT [ metachop::IDENT "PTREE"]]
                                                                                                                                [ NIL ] 
                                                                                                                                ]
                                                                                                                                [ metachop::INTEGER "0"]
                                                                                                                                ]
                                                                                                                                ]
                                                                                                                                ]
                                                                                                                                ]
                                                                                                                                ]
#line 401 "decomp3.ch"
                                                                                                                             */
#line 401 "decomp3.ch"
                                                                                                                             {ptStackTree = 0 ;
#line 401 "decomp3.ch"
                                                                                                                              TheConstructor(stackTree,ptStackTree,-4,-2,MakeString("PTREE"),metachop::IDENT,1,metachop::TIDENT,1,-2,MakeString("toto"),META,1,
                                                                                                                              -2,MakeString("PTREE"),metachop::IDENT,1,metachop::TIDENT,1,-4,metachop::ABST_DECLARATOR,2,-2,MakeString("0"),metachop::INTEGER,1,metachop::CAST,2,metachop::INITIALIZER,1,metachop::TYP_AFF,2,-4,LIST,2,metachop::DECLARATION,3,-3) ;
                                                                                                                              pattern = PopTree ;
#line 401 "decomp3.ch"
                                                                                                                             }}
#line 401 "decomp3.ch"
                                                                                                                             
#line 401 "decomp3.ch"
#line 402 "decomp3.ch"
                                                                                                                             {
#line 402 "decomp3.ch"
                                                                                                                             PPTREE _ptTree0= (PPTREE) 0,_ptRes0= (PPTREE) 0;
#line 402 "decomp3.ch"
                                                                                                                             _ptRes0 = MakeTree(metachop::TYP_AFF, 2);
#line 402 "decomp3.ch"
                                                                                                                             {
#line 402 "decomp3.ch"
                                                                                                                             PPTREE _ptTree1= (PPTREE) 0,_ptRes1= (PPTREE) 0;
#line 402 "decomp3.ch"
                                                                                                                             _ptRes1 = MakeTree(META, 1);
#line 402 "decomp3.ch"
                                                                                                                             _ptTree1 = MakeString("x") ;
#line 402 "decomp3.ch"
                                                                                                                             ReplaceTree(_ptRes1, 1, _ptTree1);
#line 402 "decomp3.ch"
                                                                                                                             _ptTree0 = _ptRes1;
#line 402 "decomp3.ch"
                                                                                                                             }
#line 402 "decomp3.ch"
                                                                                                                             ReplaceTree(_ptRes0, 1, _ptTree0);
#line 402 "decomp3.ch"
                                                                                                                             {
#line 402 "decomp3.ch"
                                                                                                                             PPTREE _ptTree1= (PPTREE) 0,_ptRes1= (PPTREE) 0;
#line 402 "decomp3.ch"
                                                                                                                             _ptRes1 = MakeTree(META, 1);
#line 402 "decomp3.ch"
                                                                                                                             _ptTree1 = MakeString("y") ;
#line 402 "decomp3.ch"
                                                                                                                             ReplaceTree(_ptRes1, 1, _ptTree1);
#line 402 "decomp3.ch"
                                                                                                                             _ptTree0 = _ptRes1;
#line 402 "decomp3.ch"
                                                                                                                             }
#line 402 "decomp3.ch"
                                                                                                                             ReplaceTree(_ptRes0, 2, _ptTree0);
#line 402 "decomp3.ch"
                                                                                                                             _Baum2 = _ptRes0;
#line 402 "decomp3.ch"
                                                                                                                             }
#line 402 "decomp3.ch"
                                                                                                                             
#line 402 "decomp3.ch"
#line 402 "decomp3.ch"
                                                                                                                             (pattern=find(_Baum2, pattern));
#line 402 "decomp3.ch"
                                                                                                                             
#line 402 "decomp3.ch"
#line 403 "decomp3.ch"
                                                                                                                             ((_inter = (PPTREE)pattern,1) && 
#line 403 "decomp3.ch"
                                                                                                                             ((pattern=SonTree(_inter,2)),1) &&
#line 403 "decomp3.ch"
                                                                                                                             1);
#line 403 "decomp3.ch"
                                                                                                                             ;
#line 403 "decomp3.ch"
#line 404 "decomp3.ch"
                                                                                                                             {
#line 404 "decomp3.ch"
                                                                                                                             PPTREE _ptTree0= (PPTREE) 0,_sonTree0= (PPTREE) 0 ;
#line 404 "decomp3.ch"
                                                                                                                             ReplaceTree(son_decl, 2, pattern);
#line 404 "decomp3.ch"
                                                                                                                             }
#line 404 "decomp3.ch"
                                                                                                                             
#line 404 "decomp3.ch"
#line 405 "decomp3.ch"
                                                                                                                             
#line 405 "decomp3.ch"
#line 405 "decomp3.ch"
                                                                                                                             }
#line 405 "decomp3.ch"
#line 406 "decomp3.ch"
#if 0
#line 406 "decomp3.ch"
#line 407 "decomp3.ch"
                                                                                                                if ( !cplusGen ) {
#line 407 "decomp3.ch"
#line 408 "decomp3.ch"
                                                                                                                                   {
#line 408 "decomp3.ch"
                                                                                                                                   /* [ metachop::IF
                                                                                                                                      [ META "meta0"]
                                                                                                                                      [ metachop::EXP_LIST
                                                                                                                                      [ metachop::IDENT "FreeRef"]
                                                                                                                                      [ META "meta1"]
                                                                                                                                      ]
                                                                                                                                      [ NIL ] 
                                                                                                                                      ]
#line 408 "decomp3.ch"
                                                                                                                                   */
#line 408 "decomp3.ch"
                                                                                                                                   {ptStackTree = 0 ;
#line 408 "decomp3.ch"
                                                                                                                                    TheConstructor(stackTree,ptStackTree,-2,MakeString("meta0"),META,1,-2,MakeString("FreeRef"),metachop::IDENT,1,-2,MakeString("meta1"),META,1,metachop::EXP_LIST,2,-4,metachop::IF,3,-3) ;
                                                                                                                                    temporary = PopTree ;
#line 408 "decomp3.ch"
                                                                                                                                   }{
#line 408 "decomp3.ch"
                                                                                                                                    register PPTREE _inter ;
#line 408 "decomp3.ch"
                                                                                                                                    
#line 408 "decomp3.ch"
#line 408 "decomp3.ch"
                                                                                                                                    PTREE _Baum1 ;
#line 408 "decomp3.ch"
                                                                                                                                    
#line 408 "decomp3.ch"
#line 408 "decomp3.ch"
                                                                                                                                    PTREE _Baum0 ;
#line 408 "decomp3.ch"
                                                                                                                                    
#line 408 "decomp3.ch"
#line 408 "decomp3.ch"
                                                                                                                                    {
#line 408 "decomp3.ch"
                                                                                                                                    PPTREE _ptTree0= (PPTREE) 0,_ptRes0= (PPTREE) 0;
#line 408 "decomp3.ch"
                                                                                                                                    _ptRes0 = MakeTree(metachop::IDENT, 1);
#line 408 "decomp3.ch"
                                                                                                                                    _ptTree0 = StoreRef(MakeString(Value(son_decl)));
#line 408 "decomp3.ch"
                                                                                                                                    ReplaceTree(_ptRes0, 1, _ptTree0);
#line 408 "decomp3.ch"
                                                                                                                                    _Baum0 = _ptRes0;
#line 408 "decomp3.ch"
                                                                                                                                    }
#line 408 "decomp3.ch"
                                                                                                                                    
#line 408 "decomp3.ch"
#line 408 "decomp3.ch"
                                                                                                                                    MetaRep("meta0", temporary, _Baum0);
#line 408 "decomp3.ch"
#line 408 "decomp3.ch"
                                                                                                                                    {
#line 408 "decomp3.ch"
                                                                                                                                    PPTREE _ptTree0= (PPTREE) 0,_ptRes0= (PPTREE) 0;
#line 408 "decomp3.ch"
                                                                                                                                    _ptRes0 = MakeTree(metachop::IDENT, 1);
#line 408 "decomp3.ch"
                                                                                                                                    _ptTree0 = StoreRef(MakeString(Value(son_decl)));
#line 408 "decomp3.ch"
                                                                                                                                    ReplaceTree(_ptRes0, 1, _ptTree0);
#line 408 "decomp3.ch"
                                                                                                                                    _Baum1 = _ptRes0;
#line 408 "decomp3.ch"
                                                                                                                                    }
#line 408 "decomp3.ch"
                                                                                                                                    
#line 408 "decomp3.ch"
#line 408 "decomp3.ch"
                                                                                                                                    MetaRep("meta1", temporary, _Baum1);
#line 408 "decomp3.ch"
#line 408 "decomp3.ch"
                                                                                                                                    }
#line 408 "decomp3.ch"
                                                                                                                                   }
#line 408 "decomp3.ch"
                                                                                                                                   
#line 408 "decomp3.ch"
#line 413 "decomp3.ch"
                                                                                                                                   {
#line 413 "decomp3.ch"
                                                                                                                                   PPTREE _ptTree0= (PPTREE) 0 ;
#line 413 "decomp3.ch"
                                                                                                                                   list =  AddList( list,temporary);
#line 413 "decomp3.ch"
                                                                                                                                   }
#line 413 "decomp3.ch"
                                                                                                                                   
#line 413 "decomp3.ch"
#line 414 "decomp3.ch"
                                                                                                                                   
#line 414 "decomp3.ch"
#line 414 "decomp3.ch"
                                                                                                                                   } else 
#line 414 "decomp3.ch"
                                                                                                                {
#line 414 "decomp3.ch"
#line 415 "decomp3.ch"
                                                                                                                    {
#line 415 "decomp3.ch"
                                                                                                                        PPTREE _ptTree0= (PPTREE) 0 ;
#line 415 "decomp3.ch"
                                                                                                                        _ptTree0 = StoreRef(CreateGCClass(Value(son_decl)));
#line 415 "decomp3.ch"
                                                                                                                        listClassInit =  AddList( listClassInit,_ptTree0);
#line 415 "decomp3.ch"
                                                                                                                    }
#line 415 "decomp3.ch"
                                                                                                                    
#line 415 "decomp3.ch"
#line 416 "decomp3.ch"
                                                                                                                    
#line 416 "decomp3.ch"
#line 416 "decomp3.ch"
                                                                                                                }
                                                                                                                
#line 416 "decomp3.ch"
#line 416 "decomp3.ch"
                                                                                                                
#line 416 "decomp3.ch"
#endif
                                                                                                                
#line 416 "decomp3.ch"
#line 418 "decomp3.ch"
                                                                                                                
#line 418 "decomp3.ch"
#line 418 "decomp3.ch"
                                                                                                            }
#line 418 "decomp3.ch"
#line 419 "decomp3.ch"
                                                                                
#line 419 "decomp3.ch"
#line 419 "decomp3.ch"
                                                                             }
#line 419 "decomp3.ch"
#line 420 "decomp3.ch"
                                                                
#line 420 "decomp3.ch"
#line 420 "decomp3.ch"
                                                              }
#line 420 "decomp3.ch"
#line 421 "decomp3.ch"
                                    
#line 421 "decomp3.ch"
#line 421 "decomp3.ch"
                                   }
#line 421 "decomp3.ch"
#line 422 "decomp3.ch"
    
#line 422 "decomp3.ch"
#line 422 "decomp3.ch"
}
#line 422 "decomp3.ch"

#line 426 "decomp3.ch"

#line 426 "decomp3.ch"
void GCManagerFunc ( PTREE tree )
#line 426 "decomp3.ch"
{
#line 426 "decomp3.ch"
    register PPTREE _inter ;
#line 426 "decomp3.ch"

#line 426 "decomp3.ch"
#line 426 "decomp3.ch"
    int ptStackTree ;
    
#line 426 "decomp3.ch"
#line 426 "decomp3.ch"
    PPTREE  stackTree [1024];
    
#line 426 "decomp3.ch"
#line 426 "decomp3.ch"
    int _retVal [3];
    
#line 426 "decomp3.ch"
#line 426 "decomp3.ch"
    PPTREE  _storeVal [3];
    
#line 426 "decomp3.ch"
#line 426 "decomp3.ch"
    int _nextVal ;
    
#line 426 "decomp3.ch"
#line 429 "decomp3.ch"
    PTREE   list, pt_list, son, son_decl, old, temporary, inter1, addref, list_decl, type, list_insert, param, list_name, name ;
#line 429 "decomp3.ch"
    
#line 429 "decomp3.ch"
#line 430 "decomp3.ch"
    int somethingDone = 0 ;
    
#line 430 "decomp3.ch"
#line 432 "decomp3.ch"
    ((_inter = (PPTREE)tree,1) && 
#line 432 "decomp3.ch"
        ((type=SonTree(_inter,2)),1) &&
#line 432 "decomp3.ch"
        ((param=SonTree(_inter,4)),1) &&
#line 432 "decomp3.ch"
        ((pt_list=SonTree(_inter,6)),1) &&
#line 432 "decomp3.ch"
        (_retVal[1]=((_storeVal[1]=_inter,_inter=SonTree(_inter,8),1) &&
#line 432 "decomp3.ch"
            (NumberTree(_inter) == metachop::COMPOUND) &&
#line 432 "decomp3.ch"
            ((list=SonTree(_inter,1)),1) &&
#line 432 "decomp3.ch"
            1),
#line 432 "decomp3.ch"
            (_inter=_storeVal[1],1),_retVal[1]) &&
#line 432 "decomp3.ch"
        1);
#line 432 "decomp3.ch"
    ;
#line 432 "decomp3.ch"
#line 435 "decomp3.ch"
    (old=(temporary=list));
#line 435 "decomp3.ch"
    
#line 435 "decomp3.ch"
#line 436 "decomp3.ch"
    while ( ((_inter = (PPTREE)temporary,1) && 
#line 436 "decomp3.ch"
                (_retVal[1]=((_storeVal[1]=_inter,_inter=SonTree(_inter,1),1) &&
#line 436 "decomp3.ch"
                    (NumberTree(_inter) == metachop::DECLARATION) &&
#line 436 "decomp3.ch"
                    1),
#line 436 "decomp3.ch"
                    (_inter=_storeVal[1],1),_retVal[1]) &&
#line 436 "decomp3.ch"
                1) ) {
#line 436 "decomp3.ch"
#line 437 "decomp3.ch"
                        (old=temporary);
#line 437 "decomp3.ch"
                        
#line 437 "decomp3.ch"
#line 438 "decomp3.ch"
                        (temporary?temporary.Nextl():(PPTREE)0);
#line 438 "decomp3.ch"
#line 439 "decomp3.ch"
                        
#line 439 "decomp3.ch"
#line 439 "decomp3.ch"
                     }
#line 439 "decomp3.ch"
#line 442 "decomp3.ch"
    while ( !((!pt_list)) ) {
#line 442 "decomp3.ch"
#line 443 "decomp3.ch"
                                (son=(pt_list?pt_list.Nextl():(PPTREE)0));
#line 443 "decomp3.ch"
                                
#line 443 "decomp3.ch"
#line 444 "decomp3.ch"
                                if ( ((_inter = (PPTREE)son,1) && 
#line 444 "decomp3.ch"
                                        (_retVal[1]=((_storeVal[1]=_inter,_inter=SonTree(_inter,2),1) &&
#line 444 "decomp3.ch"
                                            (NumberTree(_inter) == metachop::TIDENT) &&
#line 444 "decomp3.ch"
                                            (_retVal[2]=((_storeVal[2]=_inter,_inter=SonTree(_inter,1),1) &&
#line 444 "decomp3.ch"
                                                (NumberTree(_inter) == metachop::IDENT) &&
#line 444 "decomp3.ch"
                                                (!strcmp(Value(SonTree(_inter,1)),"PTREE")) &&
#line 444 "decomp3.ch"
                                                1),
#line 444 "decomp3.ch"
                                                (_inter=_storeVal[2],1),_retVal[2]) &&
#line 444 "decomp3.ch"
                                            1),
#line 444 "decomp3.ch"
                                            (_inter=_storeVal[1],1),_retVal[1]) &&
#line 444 "decomp3.ch"
                                        ((list_decl=SonTree(_inter,3)),1) &&
#line 444 "decomp3.ch"
                                        1) ) {
#line 444 "decomp3.ch"
#line 445 "decomp3.ch"
                                                somethingDone = 1 ;
#line 445 "decomp3.ch"
#line 446 "decomp3.ch"
                                                while ( ((name=(list_decl?list_decl.Nextl():(PPTREE)0))) && ((_inter = (PPTREE)name,1) && 
#line 446 "decomp3.ch"
                                                                                                                    (NumberTree(_inter) == metachop::IDENT) &&
#line 446 "decomp3.ch"
                                                                                                                    1) ) {
#line 446 "decomp3.ch"
#line 447 "decomp3.ch"
                                                                                                                         if ( !cplusGen ) {
#line 447 "decomp3.ch"
#line 448 "decomp3.ch"
                                                                                                                                            {
#line 448 "decomp3.ch"
                                                                                                                                            /* [ metachop::EXP_LIST
                                                                                                                                               [ metachop::IDENT "AddRef"]
                                                                                                                                               [ META "meta0"]
                                                                                                                                               ]
#line 448 "decomp3.ch"
                                                                                                                                            */
#line 448 "decomp3.ch"
                                                                                                                                            {ptStackTree = 0 ;
#line 448 "decomp3.ch"
                                                                                                                                             TheConstructor(stackTree,ptStackTree,-2,MakeString("AddRef"),metachop::IDENT,1,-2,MakeString("meta0"),META,1,metachop::EXP_LIST,2,-3) ;
                                                                                                                                             addref = PopTree ;
#line 448 "decomp3.ch"
                                                                                                                                            }{
#line 448 "decomp3.ch"
                                                                                                                                             register PPTREE _inter ;
#line 448 "decomp3.ch"
                                                                                                                                             
#line 448 "decomp3.ch"
#line 448 "decomp3.ch"
                                                                                                                                             MetaRep("meta0", addref, copytree(name));
#line 448 "decomp3.ch"
#line 448 "decomp3.ch"
                                                                                                                                             }
#line 448 "decomp3.ch"
                                                                                                                                            }
#line 448 "decomp3.ch"
                                                                                                                                            
#line 448 "decomp3.ch"
#line 449 "decomp3.ch"
                                                                                                                                            if ( old == temporary ) 
#line 449 "decomp3.ch"
#line 450 "decomp3.ch"
                                                                                                                                            {
#line 450 "decomp3.ch"
                                                                                                                                            PPTREE _ptTree0=(PPTREE) 0;
#line 450 "decomp3.ch"
                                                                                                                                            _ptTree0 = addref;
#line 450 "decomp3.ch"
                                                                                                                                            {
#line 450 "decomp3.ch"
                                                                                                                                            PPTREE _ptTree1= (PPTREE) 0 ;
#line 450 "decomp3.ch"
                                                                                                                                            _ptTree0 = AddList( _ptTree0,list);
#line 450 "decomp3.ch"
                                                                                                                                            }
#line 450 "decomp3.ch"
                                                                                                                                            list = _ptTree0;
#line 450 "decomp3.ch"
                                                                                                                                            ;
#line 450 "decomp3.ch"
                                                                                                                                            }
#line 450 "decomp3.ch"
                                                                                                                                            
#line 450 "decomp3.ch"
                                                                                                                                            else 
#line 451 "decomp3.ch"
                                                                                                                                            {
#line 451 "decomp3.ch"
#line 452 "decomp3.ch"
                                                                                                                                            {
#line 452 "decomp3.ch"
                                                                                                                                            PPTREE _ptTree0=(PPTREE) 0;
#line 452 "decomp3.ch"
                                                                                                                                            _ptTree0 = addref;
#line 452 "decomp3.ch"
                                                                                                                                            {
#line 452 "decomp3.ch"
                                                                                                                                            PPTREE _ptTree1= (PPTREE) 0 ;
#line 452 "decomp3.ch"
                                                                                                                                            _ptTree0 = AddList( _ptTree0,temporary);
#line 452 "decomp3.ch"
                                                                                                                                            }
#line 452 "decomp3.ch"
                                                                                                                                            temporary = _ptTree0;
#line 452 "decomp3.ch"
                                                                                                                                            ;
#line 452 "decomp3.ch"
                                                                                                                                            }
#line 452 "decomp3.ch"
                                                                                                                                            
#line 452 "decomp3.ch"
#line 453 "decomp3.ch"
                                                                                                                                            {
#line 453 "decomp3.ch"
                                                                                                                                            PPTREE _ptTree0= (PPTREE) 0,_sonTree0= (PPTREE) 0 ;
#line 453 "decomp3.ch"
                                                                                                                                            ReplaceTree(old, 2, temporary);
#line 453 "decomp3.ch"
                                                                                                                                            }
#line 453 "decomp3.ch"
                                                                                                                                            
#line 453 "decomp3.ch"
#line 454 "decomp3.ch"
                                                                                                                                            
#line 454 "decomp3.ch"
#line 454 "decomp3.ch"
                                                                                                                                            }
                                                                                                                                            
#line 454 "decomp3.ch"
#line 455 "decomp3.ch"
                                                                                                                                            {
#line 455 "decomp3.ch"
                                                                                                                                            /* [ metachop::IF
                                                                                                                                               [ META "meta0"]
                                                                                                                                               [ metachop::EXP_LIST
                                                                                                                                               [ metachop::IDENT "FreeRef"]
                                                                                                                                               [ META "meta1"]
                                                                                                                                               ]
                                                                                                                                               [ NIL ] 
                                                                                                                                               ]
#line 455 "decomp3.ch"
                                                                                                                                            */
#line 455 "decomp3.ch"
                                                                                                                                            {ptStackTree = 0 ;
#line 455 "decomp3.ch"
                                                                                                                                             TheConstructor(stackTree,ptStackTree,-2,MakeString("meta0"),META,1,-2,MakeString("FreeRef"),metachop::IDENT,1,-2,MakeString("meta1"),META,1,metachop::EXP_LIST,2,-4,metachop::IF,3,-3) ;
                                                                                                                                             inter1 = PopTree ;
#line 455 "decomp3.ch"
                                                                                                                                            }{
#line 455 "decomp3.ch"
                                                                                                                                             register PPTREE _inter ;
#line 455 "decomp3.ch"
                                                                                                                                             
#line 455 "decomp3.ch"
#line 455 "decomp3.ch"
                                                                                                                                             MetaRep("meta0", inter1, copytree(name));
#line 455 "decomp3.ch"
#line 455 "decomp3.ch"
                                                                                                                                             MetaRep("meta1", inter1, copytree(name));
#line 455 "decomp3.ch"
#line 455 "decomp3.ch"
                                                                                                                                             }
#line 455 "decomp3.ch"
                                                                                                                                            }
#line 455 "decomp3.ch"
                                                                                                                                            
#line 455 "decomp3.ch"
#line 459 "decomp3.ch"
                                                                                                                                            {
#line 459 "decomp3.ch"
                                                                                                                                            PPTREE _ptTree0= (PPTREE) 0 ;
#line 459 "decomp3.ch"
                                                                                                                                            list =  AddList( list,inter1);
#line 459 "decomp3.ch"
                                                                                                                                            }
#line 459 "decomp3.ch"
                                                                                                                                            
#line 459 "decomp3.ch"
#line 460 "decomp3.ch"
                                                                                                                                            
#line 460 "decomp3.ch"
#line 460 "decomp3.ch"
                                                                                                                                            } else 
#line 460 "decomp3.ch"
                                                                                                                         {
#line 460 "decomp3.ch"
#line 461 "decomp3.ch"
                                                                                                                         {
#line 461 "decomp3.ch"
                                                                                                                         PPTREE _ptTree0=(PPTREE) 0;
#line 461 "decomp3.ch"
                                                                                                                         _ptTree0 = list_insert;
#line 461 "decomp3.ch"
                                                                                                                         {
#line 461 "decomp3.ch"
                                                                                                                         PPTREE _ptTree1= (PPTREE) 0 ;
#line 461 "decomp3.ch"
                                                                                                                         _ptTree1 = StoreRef(CreateGCClass(Value(name)));
#line 461 "decomp3.ch"
                                                                                                                         _ptTree0 = AddList( _ptTree0,_ptTree1);
#line 461 "decomp3.ch"
                                                                                                                         }
#line 461 "decomp3.ch"
                                                                                                                         list_insert = _ptTree0;
#line 461 "decomp3.ch"
                                                                                                                         ;
#line 461 "decomp3.ch"
                                                                                                                         }
#line 461 "decomp3.ch"
                                                                                                                         
#line 461 "decomp3.ch"
#line 462 "decomp3.ch"
                                                                                                                         {
#line 462 "decomp3.ch"
                                                                                                                         PPTREE _ptTree0= (PPTREE) 0 ;
#line 462 "decomp3.ch"
                                                                                                                         _ptTree0 = StoreRef(copytree(name));
#line 462 "decomp3.ch"
                                                                                                                         list_name =  AddList( list_name,_ptTree0);
#line 462 "decomp3.ch"
                                                                                                                         }
#line 462 "decomp3.ch"
                                                                                                                         
#line 462 "decomp3.ch"
#line 463 "decomp3.ch"
                                                                                                                         
#line 463 "decomp3.ch"
#line 463 "decomp3.ch"
                                                                                                                         }
                                                                                                                         
#line 463 "decomp3.ch"
#line 464 "decomp3.ch"
                                                                                                                         
#line 464 "decomp3.ch"
#line 464 "decomp3.ch"
                                                                                                                         }
#line 464 "decomp3.ch"
#line 465 "decomp3.ch"
                                                
#line 465 "decomp3.ch"
#line 465 "decomp3.ch"
                                             }
#line 465 "decomp3.ch"
#line 466 "decomp3.ch"
                                
#line 466 "decomp3.ch"
#line 466 "decomp3.ch"
                              }
#line 466 "decomp3.ch"
#line 470 "decomp3.ch"
    while ( ((son=(param?param.Nextl():(PPTREE)0))) ) {
#line 470 "decomp3.ch"
#line 471 "decomp3.ch"
                                                            if ( ((_inter = (PPTREE)son,1) && 
#line 471 "decomp3.ch"
                                                                    (NumberTree(_inter) == metachop::DECLARATOR) &&
#line 471 "decomp3.ch"
                                                                    (_retVal[1]=((_storeVal[1]=_inter,_inter=SonTree(_inter,1),1) &&
#line 471 "decomp3.ch"
                                                                        (NumberTree(_inter) == metachop::TIDENT) &&
#line 471 "decomp3.ch"
                                                                        (_retVal[2]=((_storeVal[2]=_inter,_inter=SonTree(_inter,1),1) &&
#line 471 "decomp3.ch"
                                                                            (NumberTree(_inter) == metachop::IDENT) &&
#line 471 "decomp3.ch"
                                                                            (!strcmp(Value(SonTree(_inter,1)),"PTREE")) &&
#line 471 "decomp3.ch"
                                                                            1),
#line 471 "decomp3.ch"
                                                                            (_inter=_storeVal[2],1),_retVal[2]) &&
#line 471 "decomp3.ch"
                                                                        1),
#line 471 "decomp3.ch"
                                                                        (_inter=_storeVal[1],1),_retVal[1]) &&
#line 471 "decomp3.ch"
                                                                    ((name=SonTree(_inter,2)),1) &&
#line 471 "decomp3.ch"
                                                                    1) && ((_inter = (PPTREE)name,1) && 
#line 471 "decomp3.ch"
                                                                                (NumberTree(_inter) == metachop::IDENT) &&
#line 471 "decomp3.ch"
                                                                                1) && !ListFind(list_name, name) ) {
#line 471 "decomp3.ch"
#line 472 "decomp3.ch"
                                                                                                                        somethingDone = 1 ;
#line 472 "decomp3.ch"
#line 473 "decomp3.ch"
                                                                                                                        if ( !cplusGen ) {
#line 473 "decomp3.ch"
#line 474 "decomp3.ch"
                                                                                                                                           {
#line 474 "decomp3.ch"
                                                                                                                                           /* [ metachop::EXP_LIST
                                                                                                                                              [ metachop::IDENT "AddRef"]
                                                                                                                                              [ META "meta0"]
                                                                                                                                              ]
#line 474 "decomp3.ch"
                                                                                                                                           */
#line 474 "decomp3.ch"
                                                                                                                                           {ptStackTree = 0 ;
#line 474 "decomp3.ch"
                                                                                                                                            TheConstructor(stackTree,ptStackTree,-2,MakeString("AddRef"),metachop::IDENT,1,-2,MakeString("meta0"),META,1,metachop::EXP_LIST,2,-3) ;
                                                                                                                                            addref = PopTree ;
#line 474 "decomp3.ch"
                                                                                                                                           }{
#line 474 "decomp3.ch"
                                                                                                                                            register PPTREE _inter ;
#line 474 "decomp3.ch"
                                                                                                                                            
#line 474 "decomp3.ch"
#line 474 "decomp3.ch"
                                                                                                                                            MetaRep("meta0", addref, copytree(name));
#line 474 "decomp3.ch"
#line 474 "decomp3.ch"
                                                                                                                                            }
#line 474 "decomp3.ch"
                                                                                                                                           }
#line 474 "decomp3.ch"
                                                                                                                                           
#line 474 "decomp3.ch"
#line 475 "decomp3.ch"
                                                                                                                                           if ( old == temporary ) 
#line 475 "decomp3.ch"
#line 476 "decomp3.ch"
                                                                                                                                           {
#line 476 "decomp3.ch"
                                                                                                                                           PPTREE _ptTree0=(PPTREE) 0;
#line 476 "decomp3.ch"
                                                                                                                                           _ptTree0 = addref;
#line 476 "decomp3.ch"
                                                                                                                                           {
#line 476 "decomp3.ch"
                                                                                                                                           PPTREE _ptTree1= (PPTREE) 0 ;
#line 476 "decomp3.ch"
                                                                                                                                           _ptTree0 = AddList( _ptTree0,list);
#line 476 "decomp3.ch"
                                                                                                                                           }
#line 476 "decomp3.ch"
                                                                                                                                           list = _ptTree0;
#line 476 "decomp3.ch"
                                                                                                                                           ;
#line 476 "decomp3.ch"
                                                                                                                                           }
#line 476 "decomp3.ch"
                                                                                                                                           
#line 476 "decomp3.ch"
                                                                                                                                           else 
#line 477 "decomp3.ch"
                                                                                                                                           {
#line 477 "decomp3.ch"
#line 478 "decomp3.ch"
                                                                                                                                           {
#line 478 "decomp3.ch"
                                                                                                                                           PPTREE _ptTree0=(PPTREE) 0;
#line 478 "decomp3.ch"
                                                                                                                                           _ptTree0 = addref;
#line 478 "decomp3.ch"
                                                                                                                                           {
#line 478 "decomp3.ch"
                                                                                                                                           PPTREE _ptTree1= (PPTREE) 0 ;
#line 478 "decomp3.ch"
                                                                                                                                           _ptTree0 = AddList( _ptTree0,temporary);
#line 478 "decomp3.ch"
                                                                                                                                           }
#line 478 "decomp3.ch"
                                                                                                                                           temporary = _ptTree0;
#line 478 "decomp3.ch"
                                                                                                                                           ;
#line 478 "decomp3.ch"
                                                                                                                                           }
#line 478 "decomp3.ch"
                                                                                                                                           
#line 478 "decomp3.ch"
#line 479 "decomp3.ch"
                                                                                                                                           {
#line 479 "decomp3.ch"
                                                                                                                                           PPTREE _ptTree0= (PPTREE) 0,_sonTree0= (PPTREE) 0 ;
#line 479 "decomp3.ch"
                                                                                                                                           ReplaceTree(old, 2, temporary);
#line 479 "decomp3.ch"
                                                                                                                                           }
#line 479 "decomp3.ch"
                                                                                                                                           
#line 479 "decomp3.ch"
#line 480 "decomp3.ch"
                                                                                                                                           
#line 480 "decomp3.ch"
#line 480 "decomp3.ch"
                                                                                                                                           }
                                                                                                                                           
#line 480 "decomp3.ch"
#line 481 "decomp3.ch"
                                                                                                                                           {
#line 481 "decomp3.ch"
                                                                                                                                           /* [ metachop::IF
                                                                                                                                              [ META "meta0"]
                                                                                                                                              [ metachop::EXP_LIST
                                                                                                                                              [ metachop::IDENT "FreeRef"]
                                                                                                                                              [ META "meta1"]
                                                                                                                                              ]
                                                                                                                                              [ NIL ] 
                                                                                                                                              ]
#line 481 "decomp3.ch"
                                                                                                                                           */
#line 481 "decomp3.ch"
                                                                                                                                           {ptStackTree = 0 ;
#line 481 "decomp3.ch"
                                                                                                                                            TheConstructor(stackTree,ptStackTree,-2,MakeString("meta0"),META,1,-2,MakeString("FreeRef"),metachop::IDENT,1,-2,MakeString("meta1"),META,1,metachop::EXP_LIST,2,-4,metachop::IF,3,-3) ;
                                                                                                                                            inter1 = PopTree ;
#line 481 "decomp3.ch"
                                                                                                                                           }{
#line 481 "decomp3.ch"
                                                                                                                                            register PPTREE _inter ;
#line 481 "decomp3.ch"
                                                                                                                                            
#line 481 "decomp3.ch"
#line 481 "decomp3.ch"
                                                                                                                                            MetaRep("meta0", inter1, copytree(name));
#line 481 "decomp3.ch"
#line 481 "decomp3.ch"
                                                                                                                                            MetaRep("meta1", inter1, copytree(name));
#line 481 "decomp3.ch"
#line 481 "decomp3.ch"
                                                                                                                                            }
#line 481 "decomp3.ch"
                                                                                                                                           }
#line 481 "decomp3.ch"
                                                                                                                                           
#line 481 "decomp3.ch"
#line 485 "decomp3.ch"
                                                                                                                                           {
#line 485 "decomp3.ch"
                                                                                                                                           PPTREE _ptTree0= (PPTREE) 0 ;
#line 485 "decomp3.ch"
                                                                                                                                           list =  AddList( list,inter1);
#line 485 "decomp3.ch"
                                                                                                                                           }
#line 485 "decomp3.ch"
                                                                                                                                           
#line 485 "decomp3.ch"
#line 486 "decomp3.ch"
                                                                                                                                           
#line 486 "decomp3.ch"
#line 486 "decomp3.ch"
                                                                                                                                           } else 
#line 486 "decomp3.ch"
                                                                                                                        {
#line 486 "decomp3.ch"
#line 487 "decomp3.ch"
                                                                                                                        {
#line 487 "decomp3.ch"
                                                                                                                        PPTREE _ptTree0=(PPTREE) 0;
#line 487 "decomp3.ch"
                                                                                                                        _ptTree0 = list_insert;
#line 487 "decomp3.ch"
                                                                                                                        {
#line 487 "decomp3.ch"
                                                                                                                        PPTREE _ptTree1= (PPTREE) 0 ;
#line 487 "decomp3.ch"
                                                                                                                        _ptTree1 = StoreRef(CreateGCClass(Value(name)));
#line 487 "decomp3.ch"
                                                                                                                        _ptTree0 = AddList( _ptTree0,_ptTree1);
#line 487 "decomp3.ch"
                                                                                                                        }
#line 487 "decomp3.ch"
                                                                                                                        list_insert = _ptTree0;
#line 487 "decomp3.ch"
                                                                                                                        ;
#line 487 "decomp3.ch"
                                                                                                                        }
#line 487 "decomp3.ch"
                                                                                                                        
#line 487 "decomp3.ch"
#line 488 "decomp3.ch"
                                                                                                                        {
#line 488 "decomp3.ch"
                                                                                                                        PPTREE _ptTree0= (PPTREE) 0 ;
#line 488 "decomp3.ch"
                                                                                                                        _ptTree0 = StoreRef(copytree(name));
#line 488 "decomp3.ch"
                                                                                                                        list_name =  AddList( list_name,_ptTree0);
#line 488 "decomp3.ch"
                                                                                                                        }
#line 488 "decomp3.ch"
                                                                                                                        
#line 488 "decomp3.ch"
#line 489 "decomp3.ch"
                                                                                                                        
#line 489 "decomp3.ch"
#line 489 "decomp3.ch"
                                                                                                                        }
                                                                                                                        
#line 489 "decomp3.ch"
#line 490 "decomp3.ch"
                                                                                                                        
#line 490 "decomp3.ch"
#line 490 "decomp3.ch"
                                                                                                                       }
#line 490 "decomp3.ch"
#line 491 "decomp3.ch"
                                                            
#line 491 "decomp3.ch"
#line 491 "decomp3.ch"
                                                           }
#line 491 "decomp3.ch"
#line 494 "decomp3.ch"
    if ( cplusGen && somethingDone ) {
#line 494 "decomp3.ch"
#line 495 "decomp3.ch"
                                        (list_insert=FullCreateGCClass(list_insert));
#line 495 "decomp3.ch"
                                        
#line 495 "decomp3.ch"
#line 496 "decomp3.ch"
                                        if ( old == temporary ) 
#line 496 "decomp3.ch"
#line 497 "decomp3.ch"
                                            {
#line 497 "decomp3.ch"
                                                PPTREE _ptTree0=(PPTREE) 0;
#line 497 "decomp3.ch"
                                                _ptTree0 = list_insert;
#line 497 "decomp3.ch"
                                                {
#line 497 "decomp3.ch"
                                                    PPTREE _ptTree1= (PPTREE) 0 ;
#line 497 "decomp3.ch"
                                                    _ptTree0 = AddList( _ptTree0,list);
#line 497 "decomp3.ch"
                                                }
#line 497 "decomp3.ch"
                                                list = _ptTree0;
#line 497 "decomp3.ch"
                                                ;
#line 497 "decomp3.ch"
                                            }
#line 497 "decomp3.ch"
                                        
#line 497 "decomp3.ch"
                                        else 
#line 497 "decomp3.ch"
#line 499 "decomp3.ch"
                                            {
#line 499 "decomp3.ch"
                                                PPTREE _ptTree0= (PPTREE) 0,_sonTree0= (PPTREE) 0 ;
#line 499 "decomp3.ch"
                                                _ptTree0 = list_insert;
#line 499 "decomp3.ch"
                                                {
#line 499 "decomp3.ch"
                                                    PPTREE _ptTree1= (PPTREE) 0 ;
#line 499 "decomp3.ch"
                                                    _ptTree0 = AddList( _ptTree0,temporary);
#line 499 "decomp3.ch"
                                                }
#line 499 "decomp3.ch"
                                                ReplaceTree(old, 2, _ptTree0);
#line 499 "decomp3.ch"
                                            }
#line 499 "decomp3.ch"
                                            
#line 499 "decomp3.ch"
                                        
#line 499 "decomp3.ch"
#line 500 "decomp3.ch"
                                        
#line 500 "decomp3.ch"
#line 500 "decomp3.ch"
                                       }
#line 500 "decomp3.ch"
#line 501 "decomp3.ch"
    if ( somethingDone ) 
#line 501 "decomp3.ch"
#line 502 "decomp3.ch"
        {
#line 502 "decomp3.ch"
            PPTREE _ptTree0= (PPTREE) 0,_sonTree0= (PPTREE) 0 ;
#line 502 "decomp3.ch"
            _sonTree0 = SonTree(tree,8);
#line 502 "decomp3.ch"
            {
#line 502 "decomp3.ch"
                PPTREE _ptTree1= (PPTREE) 0,_sonTree1= (PPTREE) 0 ;
#line 502 "decomp3.ch"
                _ptTree0 = ReplaceTree(_sonTree0, 1, list);
#line 502 "decomp3.ch"
            }
#line 502 "decomp3.ch"
            ReplaceTree(tree, 8, _ptTree0);
#line 502 "decomp3.ch"
        }
#line 502 "decomp3.ch"
    
#line 502 "decomp3.ch"
#line 503 "decomp3.ch"
    
#line 503 "decomp3.ch"
#line 503 "decomp3.ch"
}
#line 503 "decomp3.ch"

#line 507 "decomp3.ch"

#line 507 "decomp3.ch"
void GCManagerRetBeg ( PTREE tree )
#line 507 "decomp3.ch"
{
#line 507 "decomp3.ch"
    register PPTREE _inter ;
#line 507 "decomp3.ch"

#line 507 "decomp3.ch"
#line 507 "decomp3.ch"
    int ptStackTree ;
    
#line 507 "decomp3.ch"
#line 507 "decomp3.ch"
    PPTREE  stackTree [1024];
    
#line 507 "decomp3.ch"
#line 507 "decomp3.ch"
    int _retVal [2];
    
#line 507 "decomp3.ch"
#line 507 "decomp3.ch"
    PPTREE  _storeVal [2];
    
#line 507 "decomp3.ch"
#line 507 "decomp3.ch"
    int _nextVal ;
    
#line 507 "decomp3.ch"
#line 510 "decomp3.ch"
    PTREE   list, construct ;
#line 510 "decomp3.ch"
    
#line 510 "decomp3.ch"
#line 511 "decomp3.ch"
    int retATree = 0 ;
    
#line 511 "decomp3.ch"
#line 513 "decomp3.ch"
    if ( !cplusGen ) {
#line 513 "decomp3.ch"
#line 513 "decomp3.ch"
                        PTREE   _Baum0 ;
#line 513 "decomp3.ch"
                        
#line 513 "decomp3.ch"
#line 514 "decomp3.ch"
                        {
#line 514 "decomp3.ch"
                            PPTREE _ptTree0= (PPTREE) 0,_ptRes0= (PPTREE) 0;
#line 514 "decomp3.ch"
                            _ptRes0 = MakeTree(metachop::RETURN, 1);
#line 514 "decomp3.ch"
                            {
#line 514 "decomp3.ch"
                                PPTREE _ptTree1= (PPTREE) 0,_ptRes1= (PPTREE) 0;
#line 514 "decomp3.ch"
                                _ptRes1 = MakeTree(META, 1);
#line 514 "decomp3.ch"
                                _ptTree1 = MakeString("toto") ;
#line 514 "decomp3.ch"
                                ReplaceTree(_ptRes1, 1, _ptTree1);
#line 514 "decomp3.ch"
                                _ptTree0 = _ptRes1;
#line 514 "decomp3.ch"
                            }
#line 514 "decomp3.ch"
                            ReplaceTree(_ptRes0, 1, _ptTree0);
#line 514 "decomp3.ch"
                            _Baum0 = _ptRes0;
#line 514 "decomp3.ch"
                        }
#line 514 "decomp3.ch"
                        
#line 514 "decomp3.ch"
#line 514 "decomp3.ch"
                        {
#line 514 "decomp3.ch"
#line 514 "decomp3.ch"
                            ItPtree _iterator1 (tree, _Baum0) ;
                            
#line 514 "decomp3.ch"
#line 514 "decomp3.ch"
                            PPTREE  _for_elem ;
                            
#line 514 "decomp3.ch"
#line 514 "decomp3.ch"
                            _iterator1.AllSearch(1);
#line 514 "decomp3.ch"
#line 514 "decomp3.ch"
                            while ( _for_elem = _iterator1++ ) {
#line 514 "decomp3.ch"
#line 514 "decomp3.ch"
                                {
#line 514 "decomp3.ch"
#line 515 "decomp3.ch"
                                    retATree = 1 ;
#line 515 "decomp3.ch"
#line 516 "decomp3.ch"
                                    goto for_break1 ;
                                    
#line 516 "decomp3.ch"
#line 517 "decomp3.ch"
                                    
#line 517 "decomp3.ch"
#line 517 "decomp3.ch"
                                }
                                
#line 517 "decomp3.ch"
#line 517 "decomp3.ch"
                                _iterator1.Current(_for_elem);
#line 517 "decomp3.ch"
#line 517 "decomp3.ch"
                                continue ;
                                
#line 517 "decomp3.ch"
#line 517 "decomp3.ch"
                            for_continue1 : 
#line 517 "decomp3.ch"
#line 517 "decomp3.ch"
                                _iterator1.Current(_for_elem);
#line 517 "decomp3.ch"
#line 517 "decomp3.ch"
                                _iterator1.SkipSon(1);
#line 517 "decomp3.ch"
#line 517 "decomp3.ch"
                                continue ;
                                
#line 517 "decomp3.ch"
#line 517 "decomp3.ch"
                            for_break1 : 
#line 517 "decomp3.ch"
#line 517 "decomp3.ch"
                                break ;
                                
#line 517 "decomp3.ch"
#line 517 "decomp3.ch"
                                
#line 517 "decomp3.ch"
#line 517 "decomp3.ch"
                            }
#line 517 "decomp3.ch"
#line 517 "decomp3.ch"
                            
#line 517 "decomp3.ch"
#line 517 "decomp3.ch"
                        }
                        
#line 517 "decomp3.ch"
#line 521 "decomp3.ch"
                        if ( retATree ) {
#line 521 "decomp3.ch"
#line 522 "decomp3.ch"
                                            ((_inter = (PPTREE)tree,1) && 
#line 522 "decomp3.ch"
                                                (_retVal[1]=((_storeVal[1]=_inter,_inter=SonTree(_inter,8),1) &&
#line 522 "decomp3.ch"
                                                    ((list=SonTree(_inter,1)),1) &&
#line 522 "decomp3.ch"
                                                    1),
#line 522 "decomp3.ch"
                                                    (_inter=_storeVal[1],1),_retVal[1]) &&
#line 522 "decomp3.ch"
                                                1);
#line 522 "decomp3.ch"
                                            ;
#line 522 "decomp3.ch"
#line 523 "decomp3.ch"
                                            {
#line 523 "decomp3.ch"
                                                /* [ metachop::LABEL
                                                    [ metachop::IDENT "_retLabel"]
                                                    [ metachop::STAT_VOID ]
                                                   ]
#line 523 "decomp3.ch"
                                                */
#line 523 "decomp3.ch"
                                                {   ptStackTree = 0 ;
#line 523 "decomp3.ch"
                                                    TheConstructor(stackTree,ptStackTree,-2,MakeString("_retLabel"),metachop::IDENT,1,metachop::STAT_VOID,0,metachop::LABEL,2,-3) ;
                                                    construct = PopTree ;
#line 523 "decomp3.ch"
                                                }   }
#line 523 "decomp3.ch"
                                            
#line 523 "decomp3.ch"
#line 524 "decomp3.ch"
                                            {
#line 524 "decomp3.ch"
                                                PPTREE _ptTree0= (PPTREE) 0 ;
#line 524 "decomp3.ch"
                                                list =  AddList( list,construct);
#line 524 "decomp3.ch"
                                            }
#line 524 "decomp3.ch"
                                            
#line 524 "decomp3.ch"
#line 525 "decomp3.ch"
                                            {
#line 525 "decomp3.ch"
                                                PPTREE _ptTree0= (PPTREE) 0,_sonTree0= (PPTREE) 0 ;
#line 525 "decomp3.ch"
                                                _sonTree0 = SonTree(tree,8);
#line 525 "decomp3.ch"
                                                {
#line 525 "decomp3.ch"
                                                    PPTREE _ptTree1= (PPTREE) 0,_sonTree1= (PPTREE) 0 ;
#line 525 "decomp3.ch"
                                                    _ptTree0 = ReplaceTree(_sonTree0, 1, list);
#line 525 "decomp3.ch"
                                                }
#line 525 "decomp3.ch"
                                                ReplaceTree(tree, 8, _ptTree0);
#line 525 "decomp3.ch"
                                            }
#line 525 "decomp3.ch"
                                            
#line 525 "decomp3.ch"
#line 526 "decomp3.ch"
                                            
#line 526 "decomp3.ch"
#line 526 "decomp3.ch"
                                         }
#line 526 "decomp3.ch"
#line 527 "decomp3.ch"
                        
#line 527 "decomp3.ch"
#line 527 "decomp3.ch"
                       }
#line 527 "decomp3.ch"
#line 528 "decomp3.ch"
    
#line 528 "decomp3.ch"
#line 528 "decomp3.ch"
}
#line 528 "decomp3.ch"

#line 530 "decomp3.ch"

#line 530 "decomp3.ch"
void GCManagerRetEnd ( PTREE tree, int retTree )
#line 530 "decomp3.ch"
{
#line 530 "decomp3.ch"
    register PPTREE _inter ;
#line 530 "decomp3.ch"

#line 530 "decomp3.ch"
#line 530 "decomp3.ch"
    int ptStackTree ;
    
#line 530 "decomp3.ch"
#line 530 "decomp3.ch"
    PPTREE  stackTree [1024];
    
#line 530 "decomp3.ch"
#line 530 "decomp3.ch"
    int _retVal [3];
    
#line 530 "decomp3.ch"
#line 530 "decomp3.ch"
    PPTREE  _storeVal [3];
    
#line 530 "decomp3.ch"
#line 530 "decomp3.ch"
    int _nextVal ;
    
#line 530 "decomp3.ch"
#line 532 "decomp3.ch"
    PTREE   sonde, list, construct, son, temporary, ptFather, ptStat, ptListDecl, ptDecl, list_name ;
#line 532 "decomp3.ch"
    
#line 532 "decomp3.ch"
#line 533 "decomp3.ch"
    MY_TREE tabTree [50];
    
#line 533 "decomp3.ch"
#line 534 "decomp3.ch"
    int indTabTree, found = 0 ;
    
#line 534 "decomp3.ch"
#line 535 "decomp3.ch"
    char    *ptString ;
    
#line 535 "decomp3.ch"
#line 537 "decomp3.ch"
    if ( !cplusGen ) {
#line 537 "decomp3.ch"
#line 538 "decomp3.ch"
                        {
#line 538 "decomp3.ch"
                            /* [ metachop::LABEL
                                [ metachop::IDENT "_retLabel"]
                                [ metachop::STAT_VOID ]
                               ]
#line 538 "decomp3.ch"
                            */
#line 538 "decomp3.ch"
                            {   ptStackTree = 0 ;
#line 538 "decomp3.ch"
                                TheConstructor(stackTree,ptStackTree,-2,MakeString("_retLabel"),metachop::IDENT,1,metachop::STAT_VOID,0,metachop::LABEL,2,-3) ;
                                sonde = PopTree ;
#line 538 "decomp3.ch"
                            }   }
#line 538 "decomp3.ch"
                        
#line 538 "decomp3.ch"
#line 539 "decomp3.ch"
                        ((_inter = (PPTREE)tree,1) && 
#line 539 "decomp3.ch"
                            (_retVal[1]=((_storeVal[1]=_inter,_inter=SonTree(_inter,8),1) &&
#line 539 "decomp3.ch"
                                ((list=SonTree(_inter,1)),1) &&
#line 539 "decomp3.ch"
                                1),
#line 539 "decomp3.ch"
                                (_inter=_storeVal[1],1),_retVal[1]) &&
#line 539 "decomp3.ch"
                            1);
#line 539 "decomp3.ch"
                        ;
#line 539 "decomp3.ch"
#line 540 "decomp3.ch"
                        while ( !((!list)) ) {
#line 540 "decomp3.ch"
#line 541 "decomp3.ch"
                                                (son=(list?list.Nextl():(PPTREE)0));
#line 541 "decomp3.ch"
                                                
#line 541 "decomp3.ch"
#line 542 "decomp3.ch"
                                                if ( qcomparetree(son, sonde) ) {
#line 542 "decomp3.ch"
#line 543 "decomp3.ch"
                                                                                    found = 1 ;
#line 543 "decomp3.ch"
#line 544 "decomp3.ch"
                                                                                    (ptFather=FatherTree(son));
#line 544 "decomp3.ch"
                                                                                    
#line 544 "decomp3.ch"
#line 545 "decomp3.ch"
                                                                                    if ( list ) {
#line 545 "decomp3.ch"
#line 546 "decomp3.ch"
                                                                                                    ((_inter = (PPTREE)list,1) && 
#line 546 "decomp3.ch"
                                                                                                        ((son=SonTree(_inter,1)),1) &&
#line 546 "decomp3.ch"
                                                                                                        ((temporary=SonTree(_inter,2)),1) &&
#line 546 "decomp3.ch"
                                                                                                        1);
#line 546 "decomp3.ch"
                                                                                                    ;
#line 546 "decomp3.ch"
#line 547 "decomp3.ch"
                                                                                                    {
#line 547 "decomp3.ch"
                                                                                                        PPTREE _ptTree0= (PPTREE) 0,_sonTree0= (PPTREE) 0 ;
#line 547 "decomp3.ch"
                                                                                                        list = ReplaceTree(ptFather, 1, son);
#line 547 "decomp3.ch"
                                                                                                        list = ReplaceTree(ptFather, 2, temporary);
#line 547 "decomp3.ch"
                                                                                                    }
#line 547 "decomp3.ch"
                                                                                                    
#line 547 "decomp3.ch"
#line 548 "decomp3.ch"
                                                                                                    
#line 548 "decomp3.ch"
#line 548 "decomp3.ch"
                                                                                                 } else 
#line 548 "decomp3.ch"
                                                                                    {
#line 548 "decomp3.ch"
#line 549 "decomp3.ch"
                                                                                        {
#line 549 "decomp3.ch"
                                                                                            PPTREE _ptTree0= (PPTREE) 0,_sonTree0= (PPTREE) 0 ;
#line 549 "decomp3.ch"
                                                                                            if (_ptTree0= fathertree(son)) {
#line 549 "decomp3.ch"
                                                                                                int rank = ranktree(son);
#line 549 "decomp3.ch"
                                                                                                ReplaceTree(_ptTree0,rank,(PPTREE) 0 );
#line 549 "decomp3.ch"
                                                                                            }
#line 549 "decomp3.ch"
                                                                                        }
#line 549 "decomp3.ch"
                                                                                        
#line 549 "decomp3.ch"
#line 550 "decomp3.ch"
                                                                                        
#line 550 "decomp3.ch"
#line 550 "decomp3.ch"
                                                                                    }
                                                                                    
#line 550 "decomp3.ch"
#line 551 "decomp3.ch"
                                                                                    break ;
                                                                                    
#line 551 "decomp3.ch"
#line 552 "decomp3.ch"
                                                                                    
#line 552 "decomp3.ch"
#line 552 "decomp3.ch"
                                                                                   }
#line 552 "decomp3.ch"
#line 553 "decomp3.ch"
                                                
#line 553 "decomp3.ch"
#line 553 "decomp3.ch"
                                               }
#line 553 "decomp3.ch"
#line 557 "decomp3.ch"
                        if ( found && !((!list)) ) {
#line 557 "decomp3.ch"
#line 557 "decomp3.ch"
                                                        PTREE   _Baum0 ;
#line 557 "decomp3.ch"
                                                        
#line 557 "decomp3.ch"
#line 558 "decomp3.ch"
                                                        {
#line 558 "decomp3.ch"
                                                            PPTREE _ptTree0= (PPTREE) 0,_ptRes0= (PPTREE) 0;
#line 558 "decomp3.ch"
                                                            _ptRes0 = MakeTree(metachop::RETURN, 1);
#line 558 "decomp3.ch"
                                                            {
#line 558 "decomp3.ch"
                                                                PPTREE _ptTree1= (PPTREE) 0,_ptRes1= (PPTREE) 0;
#line 558 "decomp3.ch"
                                                                _ptRes1 = MakeTree(META, 1);
#line 558 "decomp3.ch"
                                                                _ptTree1 = MakeString("toto") ;
#line 558 "decomp3.ch"
                                                                ReplaceTree(_ptRes1, 1, _ptTree1);
#line 558 "decomp3.ch"
                                                                _ptTree0 = _ptRes1;
#line 558 "decomp3.ch"
                                                            }
#line 558 "decomp3.ch"
                                                            ReplaceTree(_ptRes0, 1, _ptTree0);
#line 558 "decomp3.ch"
                                                            _Baum0 = _ptRes0;
#line 558 "decomp3.ch"
                                                        }
#line 558 "decomp3.ch"
                                                        
#line 558 "decomp3.ch"
#line 558 "decomp3.ch"
                                                        ItPtree it(tree, _Baum0);
                                                        
#line 558 "decomp3.ch"
#line 559 "decomp3.ch"
                                                        PPTREE  _for_elem ;
                                                        
#line 559 "decomp3.ch"
#line 560 "decomp3.ch"
                                                        (sonde=list);
#line 560 "decomp3.ch"
                                                        
#line 560 "decomp3.ch"
#line 561 "decomp3.ch"
                                                        while ( (for_elem = it++) ) {
#line 561 "decomp3.ch"
#line 562 "decomp3.ch"
                                                                                        (ptFather=FatherTree(for_elem));
#line 562 "decomp3.ch"
                                                                                        
#line 562 "decomp3.ch"
#line 563 "decomp3.ch"
                                                                                        (list=CopyTree(sonde));
#line 563 "decomp3.ch"
                                                                                        
#line 563 "decomp3.ch"
#line 564 "decomp3.ch"
                                                                                        indTabTree = 0 ;
#line 564 "decomp3.ch"
#line 567 "decomp3.ch"
                                                                                        while ( !((!ptFather)) ) {
#line 567 "decomp3.ch"
#line 568 "decomp3.ch"
                                                                                                                    if ( ((_inter = (PPTREE)ptFather,1) && 
#line 568 "decomp3.ch"
                                                                                                                           (NumberTree(_inter) == metachop::COMPOUND) &&
#line 568 "decomp3.ch"
                                                                                                                           1) ) 
#line 568 "decomp3.ch"
#line 569 "decomp3.ch"
                                                                                                                        tabTree [indTabTree++] = ptFather ;
#line 569 "decomp3.ch"
#line 570 "decomp3.ch"
                                                                                                                    (ptFather=FatherTree(ptFather));
#line 570 "decomp3.ch"
                                                                                                                    
#line 570 "decomp3.ch"
#line 571 "decomp3.ch"
                                                                                                                    
#line 571 "decomp3.ch"
#line 571 "decomp3.ch"
                                                                                                                   }
#line 571 "decomp3.ch"
#line 572 "decomp3.ch"
                                                                                        indTabTree -= 2 ;
#line 572 "decomp3.ch"
#line 576 "decomp3.ch"
                                                                                        while ( indTabTree >= 0 ) {
#line 576 "decomp3.ch"
#line 577 "decomp3.ch"
                                                                                                                        (ptStat=tabTree [indTabTree--]);
#line 577 "decomp3.ch"
                                                                                                                        
#line 577 "decomp3.ch"
#line 578 "decomp3.ch"
                                                                                                                        ((_inter = (PPTREE)ptStat,1) && 
#line 578 "decomp3.ch"
                                                                                                                        ((ptStat=SonTree(_inter,1)),1) &&
#line 578 "decomp3.ch"
                                                                                                                        1);
#line 578 "decomp3.ch"
                                                                                                                        ;
#line 578 "decomp3.ch"
#line 579 "decomp3.ch"
                                                                                                                        while ( ((ptListDecl=(ptStat?ptStat.Nextl():(PPTREE)0))) ) {
#line 579 "decomp3.ch"
#line 580 "decomp3.ch"
                                                                                                                                                                                        if ( ((_inter = (PPTREE)ptListDecl,1) && 
#line 580 "decomp3.ch"
                                                                                                                                                                                               (NumberTree(_inter) == metachop::DECLARATION) &&
#line 580 "decomp3.ch"
                                                                                                                                                                                               (_retVal[1]=((_storeVal[1]=_inter,_inter=SonTree(_inter,2),1) &&
#line 580 "decomp3.ch"
                                                                                                                                                                                               (NumberTree(_inter) == metachop::TIDENT) &&
#line 580 "decomp3.ch"
                                                                                                                                                                                               (_retVal[2]=((_storeVal[2]=_inter,_inter=SonTree(_inter,1),1) &&
#line 580 "decomp3.ch"
                                                                                                                                                                                               (NumberTree(_inter) == metachop::IDENT) &&
#line 580 "decomp3.ch"
                                                                                                                                                                                               (!strcmp(Value(SonTree(_inter,1)),"PTREE")) &&
#line 580 "decomp3.ch"
                                                                                                                                                                                               1),
#line 580 "decomp3.ch"
                                                                                                                                                                                               (_inter=_storeVal[2],1),_retVal[2]) &&
#line 580 "decomp3.ch"
                                                                                                                                                                                               1),
#line 580 "decomp3.ch"
                                                                                                                                                                                               (_inter=_storeVal[1],1),_retVal[1]) &&
#line 580 "decomp3.ch"
                                                                                                                                                                                               ((ptListDecl=SonTree(_inter,3)),1) &&
#line 580 "decomp3.ch"
                                                                                                                                                                                               1) ) 
#line 580 "decomp3.ch"
#line 581 "decomp3.ch"
                                                                                                                                                                                        while ( ((ptDecl=(ptListDecl?ptListDecl.Nextl():(PPTREE)0))) && ((_inter = (PPTREE)ptDecl,1) && 
#line 581 "decomp3.ch"
                                                                                                                                                                                                                                                               (NumberTree(_inter) == metachop::IDENT) &&
#line 581 "decomp3.ch"
                                                                                                                                                                                                                                                               1) ) {
#line 581 "decomp3.ch"
#line 582 "decomp3.ch"
                                                                                                                                                                                                                                                                    {
#line 582 "decomp3.ch"
                                                                                                                                                                                                                                                                    /* [ metachop::IF
                                                                                                                                                                                                                                                                       [ META "meta0"]
                                                                                                                                                                                                                                                                       [ metachop::EXP_LIST
                                                                                                                                                                                                                                                                       [ metachop::IDENT "FreeRef"]
                                                                                                                                                                                                                                                                       [ META "meta1"]
                                                                                                                                                                                                                                                                       ]
                                                                                                                                                                                                                                                                       [ NIL ] 
                                                                                                                                                                                                                                                                       ]
#line 582 "decomp3.ch"
                                                                                                                                                                                                                                                                    */
#line 582 "decomp3.ch"
                                                                                                                                                                                                                                                                    {ptStackTree = 0 ;
#line 582 "decomp3.ch"
                                                                                                                                                                                                                                                                     TheConstructor(stackTree,ptStackTree,-2,MakeString("meta0"),META,1,-2,MakeString("FreeRef"),metachop::IDENT,1,-2,MakeString("meta1"),META,1,metachop::EXP_LIST,2,-4,metachop::IF,3,-3) ;
                                                                                                                                                                                                                                                                     temporary = PopTree ;
#line 582 "decomp3.ch"
                                                                                                                                                                                                                                                                    }{
#line 582 "decomp3.ch"
                                                                                                                                                                                                                                                                     register PPTREE _inter ;
#line 582 "decomp3.ch"
                                                                                                                                                                                                                                                                     
#line 582 "decomp3.ch"
#line 582 "decomp3.ch"
                                                                                                                                                                                                                                                                     MetaRep("meta0", temporary, copytree(ptDecl));
#line 582 "decomp3.ch"
#line 582 "decomp3.ch"
                                                                                                                                                                                                                                                                     MetaRep("meta1", temporary, copytree(ptDecl));
#line 582 "decomp3.ch"
#line 582 "decomp3.ch"
                                                                                                                                                                                                                                                                     }
#line 582 "decomp3.ch"
                                                                                                                                                                                                                                                                    }
#line 582 "decomp3.ch"
                                                                                                                                                                                                                                                                    
#line 582 "decomp3.ch"
#line 586 "decomp3.ch"
                                                                                                                                                                                                                                                                    {
#line 586 "decomp3.ch"
                                                                                                                                                                                                                                                                    PPTREE _ptTree0= (PPTREE) 0 ;
#line 586 "decomp3.ch"
                                                                                                                                                                                                                                                                    list =  AddList( list,temporary);
#line 586 "decomp3.ch"
                                                                                                                                                                                                                                                                    }
#line 586 "decomp3.ch"
                                                                                                                                                                                                                                                                    
#line 586 "decomp3.ch"
#line 587 "decomp3.ch"
                                                                                                                                                                                                                                                                    if ( ListFind(list_name, ptDecl) ) {
#line 587 "decomp3.ch"
#line 588 "decomp3.ch"
                                                                                                                                                                                                                                                                                                          PrintString("Twice use of ");
#line 588 "decomp3.ch"
#line 588 "decomp3.ch"
                                                                                                                                                                                                                                                                                                          WriteString(Value(ptDecl));
#line 588 "decomp3.ch"
#line 588 "decomp3.ch"
                                                                                                                                                                                                                                                                                                          PrintString(" at different levels in ");
#line 588 "decomp3.ch"
#line 588 "decomp3.ch"
                                                                                                                                                                                                                                                                                                          WriteString(Value(SonTree(tree, 3)));
#line 588 "decomp3.ch"
#line 588 "decomp3.ch"
                                                                                                                                                                                                                                                                                                          LNewLine(1);
#line 588 "decomp3.ch"
                                                                                                                                                                                                                                                                                                          
#line 588 "decomp3.ch"
#line 589 "decomp3.ch"
                                                                                                                                                                                                                                                                                                          exit(0);
#line 589 "decomp3.ch"
#line 590 "decomp3.ch"
                                                                                                                                                                                                                                                                                                          
#line 590 "decomp3.ch"
#line 590 "decomp3.ch"
                                                                                                                                                                                                                                                                                                          } else 
#line 590 "decomp3.ch"
                                                                                                                                                                                                                                                                    {
#line 590 "decomp3.ch"
#line 591 "decomp3.ch"
                                                                                                                                                                                                                                                                    {
#line 591 "decomp3.ch"
                                                                                                                                                                                                                                                                    PPTREE _ptTree0= (PPTREE) 0 ;
#line 591 "decomp3.ch"
                                                                                                                                                                                                                                                                    _ptTree0 = StoreRef(copytree(ptDecl));
#line 591 "decomp3.ch"
                                                                                                                                                                                                                                                                    list_name =  AddList( list_name,_ptTree0);
#line 591 "decomp3.ch"
                                                                                                                                                                                                                                                                    }
#line 591 "decomp3.ch"
                                                                                                                                                                                                                                                                    
#line 591 "decomp3.ch"
#line 592 "decomp3.ch"
                                                                                                                                                                                                                                                                    
#line 592 "decomp3.ch"
#line 592 "decomp3.ch"
                                                                                                                                                                                                                                                                    }
                                                                                                                                                                                                                                                                    
#line 592 "decomp3.ch"
#line 593 "decomp3.ch"
                                                                                                                                                                                                                                                                    
#line 593 "decomp3.ch"
#line 593 "decomp3.ch"
                                                                                                                                                                                                                                                                    }
#line 593 "decomp3.ch"
#line 594 "decomp3.ch"
                                                                                                                                                                                        
#line 594 "decomp3.ch"
#line 594 "decomp3.ch"
                                                                                                                                                                                        }
#line 594 "decomp3.ch"
#line 595 "decomp3.ch"
                                                                                                                        
#line 595 "decomp3.ch"
#line 595 "decomp3.ch"
                                                                                                                    }
#line 595 "decomp3.ch"
#line 598 "decomp3.ch"
                                                                                        if ( !retTree ) {
#line 598 "decomp3.ch"
#line 599 "decomp3.ch"
                                                                                                            {
#line 599 "decomp3.ch"
                                                                                                                /* [ metachop::COMPOUND
                                                                                                                    [ LIST 
                                                                                                                        [ META "list"]
                                                                                                                        [ metachop::NONE ]
                                                                                                                    ]
                                                                                                                   ]
#line 599 "decomp3.ch"
                                                                                                                */
#line 599 "decomp3.ch"
                                                                                                                {   ptStackTree = 0 ;
#line 599 "decomp3.ch"
                                                                                                                    TheConstructor(stackTree,ptStackTree,-2,MakeString("list"),META,1,metachop::NONE,0,-4,LIST,2,LIST,2,metachop::COMPOUND,1,-3) ;
                                                                                                                    construct = PopTree ;
#line 599 "decomp3.ch"
                                                                                                                }   {
#line 599 "decomp3.ch"
                                                                                                                        register PPTREE _inter ;
#line 599 "decomp3.ch"
                                                                                                                    
#line 599 "decomp3.ch"
#line 599 "decomp3.ch"
                                                                                                                        MetaRep("list", construct, list);
#line 599 "decomp3.ch"
#line 599 "decomp3.ch"
                                                                                                                    }
#line 599 "decomp3.ch"
                                                                                                            }
#line 599 "decomp3.ch"
                                                                                                            
#line 599 "decomp3.ch"
#line 600 "decomp3.ch"
                                                                                                            {
#line 600 "decomp3.ch"
                                                                                                                PPTREE _ptTree0= (PPTREE) 0 ;
#line 600 "decomp3.ch"
                                                                                                                list =  AddList( list,for_elem);
#line 600 "decomp3.ch"
                                                                                                            }
#line 600 "decomp3.ch"
                                                                                                            
#line 600 "decomp3.ch"
#line 601 "decomp3.ch"
                                                                                                            
#line 601 "decomp3.ch"
#line 601 "decomp3.ch"
                                                                                                          } else 
#line 601 "decomp3.ch"
                                                                                        {
#line 601 "decomp3.ch"
#line 602 "decomp3.ch"
                                                                                            {
#line 602 "decomp3.ch"
                                                                                                /* [ metachop::COMPOUND
                                                                                                    [ LIST 
                                                                                                        [ metachop::DECLARATION
                                                                                                            [ NIL ] 
                                                                                                            [ metachop::TIDENT [ metachop::IDENT "PTREE"]]
                                                                                                            [ LIST 
                                                                                                                [ metachop::TYP_AFF
                                                                                                                    [ metachop::IDENT "_retValueTree"]
                                                                                                                    [ metachop::INITIALIZER
                                                                                                                        [ metachop::CAST
                                                                                                                        [ metachop::ABST_DECLARATOR
                                                                                                                        [ metachop::TIDENT [ metachop::IDENT "PTREE"]]
                                                                                                                        [ NIL ] 
                                                                                                                        ]
                                                                                                                        [ metachop::INTEGER "0"]
                                                                                                                        ]
                                                                                                                    ]
                                                                                                                ]
                                                                                                            ]
                                                                                                        ]
                                                                                                        [ metachop::AFF
                                                                                                            [ metachop::IDENT "_retValueTree"]
                                                                                                            [ META "meta0"]
                                                                                                        ]
                                                                                                        [ metachop::COMPOUND
                                                                                                            [ LIST 
                                                                                                                [ META "list"]
                                                                                                                [ metachop::NONE ]
                                                                                                            ]
                                                                                                        ]
                                                                                                        [ metachop::EXP_LIST
                                                                                                            [ metachop::IDENT "RemRef"]
                                                                                                            [ metachop::IDENT "_retValueTree"]
                                                                                                        ]
                                                                                                        [ metachop::RETURN [ metachop::IDENT "_retValueTree"]]
                                                                                                        [ metachop::NONE ]
                                                                                                    ]
                                                                                                   ]
#line 602 "decomp3.ch"
                                                                                                */
#line 602 "decomp3.ch"
                                                                                                {   ptStackTree = 0 ;
#line 602 "decomp3.ch"
                                                                                                    TheConstructor(stackTree,ptStackTree,-4,-2,MakeString("PTREE"),metachop::IDENT,1,metachop::TIDENT,1,
                                                                                                        -2,MakeString("_retValueTree"),metachop::IDENT,1,-2,MakeString("PTREE"),metachop::IDENT,1,metachop::TIDENT,1,-4,metachop::ABST_DECLARATOR,2,-2,MakeString("0"),metachop::INTEGER,1,metachop::CAST,2,metachop::INITIALIZER,1,metachop::TYP_AFF,2,-4,LIST,2,metachop::DECLARATION,3,
                                                                                                        -2,MakeString("_retValueTree"),metachop::IDENT,1,-2,MakeString("meta0"),META,1,metachop::AFF,2,-2,MakeString("list"),META,1,
                                                                                                        metachop::NONE,0,-4,LIST,2,LIST,2,metachop::COMPOUND,1,-2,MakeString("RemRef"),metachop::IDENT,1,-2,MakeString("_retValueTree"),metachop::IDENT,1,metachop::EXP_LIST,2,
                                                                                                        -2,MakeString("_retValueTree"),metachop::IDENT,1,metachop::RETURN,1,metachop::NONE,0,-4,LIST,2,LIST,2,LIST,2,LIST,2,LIST,2,LIST,2,metachop::COMPOUND,1,-3) ;
                                                                                                    construct = PopTree ;
#line 602 "decomp3.ch"
                                                                                                }   {
#line 602 "decomp3.ch"
                                                                                                        register PPTREE _inter ;
#line 602 "decomp3.ch"
                                                                                                    
#line 602 "decomp3.ch"
#line 602 "decomp3.ch"
                                                                                                        MetaRep("meta0", construct, SonTree(for_elem, 1));
#line 602 "decomp3.ch"
#line 602 "decomp3.ch"
                                                                                                        MetaRep("list", construct, list);
#line 602 "decomp3.ch"
#line 602 "decomp3.ch"
                                                                                                    }
#line 602 "decomp3.ch"
                                                                                            }
#line 602 "decomp3.ch"
                                                                                            
#line 602 "decomp3.ch"
#line 611 "decomp3.ch"
                                                                                            
#line 611 "decomp3.ch"
#line 611 "decomp3.ch"
                                                                                        }
                                                                                        
#line 611 "decomp3.ch"
#line 612 "decomp3.ch"
                                                                                        {
#line 612 "decomp3.ch"
                                                                                            PPTREE _ptTree0= (PPTREE) 0,_sonTree0= (PPTREE) 0 ;
#line 612 "decomp3.ch"
                                                                                            if (_ptTree0= fathertree(for_elem)) {
#line 612 "decomp3.ch"
                                                                                                int rank = ranktree(for_elem);
#line 612 "decomp3.ch"
                                                                                                ReplaceTree(_ptTree0,rank,construct);
#line 612 "decomp3.ch"
                                                                                            }
#line 612 "decomp3.ch"
                                                                                            for_elem = construct;
#line 612 "decomp3.ch"
                                                                                        }
#line 612 "decomp3.ch"
                                                                                        
#line 612 "decomp3.ch"
#line 613 "decomp3.ch"
                                                                                        it.Current(for_elem);
#line 613 "decomp3.ch"
#line 614 "decomp3.ch"
                                                                                        it.SkipSon(1);
#line 614 "decomp3.ch"
#line 615 "decomp3.ch"
                                                                                        
#line 615 "decomp3.ch"
#line 615 "decomp3.ch"
                                                                                       }
#line 615 "decomp3.ch"
#line 616 "decomp3.ch"
                                                        
#line 616 "decomp3.ch"
#line 616 "decomp3.ch"
                                                      }
#line 616 "decomp3.ch"
#line 617 "decomp3.ch"
                        
#line 617 "decomp3.ch"
#line 617 "decomp3.ch"
                       } else 
#line 617 "decomp3.ch"
    {
#line 617 "decomp3.ch"
#line 618 "decomp3.ch"
        if ( retTree ) {
#line 618 "decomp3.ch"
#line 618 "decomp3.ch"
                            PTREE   _Baum1 ;
#line 618 "decomp3.ch"
                            
#line 618 "decomp3.ch"
#line 619 "decomp3.ch"
                            {
#line 619 "decomp3.ch"
                                PPTREE _ptTree0= (PPTREE) 0,_ptRes0= (PPTREE) 0;
#line 619 "decomp3.ch"
                                _ptRes0 = MakeTree(metachop::RETURN, 1);
#line 619 "decomp3.ch"
                                {
#line 619 "decomp3.ch"
                                    PPTREE _ptTree1= (PPTREE) 0,_ptRes1= (PPTREE) 0;
#line 619 "decomp3.ch"
                                    _ptRes1 = MakeTree(META, 1);
#line 619 "decomp3.ch"
                                    _ptTree1 = MakeString("toto") ;
#line 619 "decomp3.ch"
                                    ReplaceTree(_ptRes1, 1, _ptTree1);
#line 619 "decomp3.ch"
                                    _ptTree0 = _ptRes1;
#line 619 "decomp3.ch"
                                }
#line 619 "decomp3.ch"
                                ReplaceTree(_ptRes0, 1, _ptTree0);
#line 619 "decomp3.ch"
                                _Baum1 = _ptRes0;
#line 619 "decomp3.ch"
                            }
#line 619 "decomp3.ch"
                            
#line 619 "decomp3.ch"
#line 619 "decomp3.ch"
                            ItPtree it(tree, _Baum1);
                            
#line 619 "decomp3.ch"
#line 620 "decomp3.ch"
                            PPTREE  _for_elem ;
                            
#line 620 "decomp3.ch"
#line 621 "decomp3.ch"
                            while ( (for_elem = it++) ) {
#line 621 "decomp3.ch"
#line 622 "decomp3.ch"
                                                            PTREE   newVal = (PTREE)0 ;
#line 622 "decomp3.ch"
                                                            
#line 622 "decomp3.ch"
#line 622 "decomp3.ch"
                                                            {
#line 622 "decomp3.ch"
                                                                /* [ metachop::EXP_LIST
                                                                    [ metachop::IDENT "StoreRef"]
                                                                    [ META "meta0"]
                                                                   ]
#line 622 "decomp3.ch"
                                                                */
#line 622 "decomp3.ch"
                                                                {   ptStackTree = 0 ;
#line 622 "decomp3.ch"
                                                                    TheConstructor(stackTree,ptStackTree,-2,MakeString("StoreRef"),metachop::IDENT,1,-2,MakeString("meta0"),META,1,metachop::EXP_LIST,2,-3) ;
                                                                    newVal = PopTree ;
#line 622 "decomp3.ch"
                                                                }   {
#line 622 "decomp3.ch"
                                                                        register PPTREE _inter ;
#line 622 "decomp3.ch"
                                                                    
#line 622 "decomp3.ch"
#line 622 "decomp3.ch"
                                                                        MetaRep("meta0", newVal, sontree(for_elem, 1));
#line 622 "decomp3.ch"
#line 622 "decomp3.ch"
                                                                    }
#line 622 "decomp3.ch"
                                                            }
#line 622 "decomp3.ch"
                                                            
#line 622 "decomp3.ch"
#line 623 "decomp3.ch"
                                                            {
#line 623 "decomp3.ch"
                                                                PPTREE _ptTree0= (PPTREE) 0,_sonTree0= (PPTREE) 0 ;
#line 623 "decomp3.ch"
                                                                ReplaceTree(for_elem, 1, newVal);
#line 623 "decomp3.ch"
                                                            }
#line 623 "decomp3.ch"
                                                            
#line 623 "decomp3.ch"
#line 624 "decomp3.ch"
                                                            it.Current(newVal);
#line 624 "decomp3.ch"
#line 625 "decomp3.ch"
                                                            it.SkipSon(1);
#line 625 "decomp3.ch"
#line 626 "decomp3.ch"
                                                            
#line 626 "decomp3.ch"
#line 626 "decomp3.ch"
                                                           }
#line 626 "decomp3.ch"
#line 627 "decomp3.ch"
                            
#line 627 "decomp3.ch"
#line 627 "decomp3.ch"
                        }
#line 627 "decomp3.ch"
#line 628 "decomp3.ch"
        
#line 628 "decomp3.ch"
#line 628 "decomp3.ch"
    }
    
#line 628 "decomp3.ch"
#line 629 "decomp3.ch"
    
#line 629 "decomp3.ch"
#line 629 "decomp3.ch"
}
#line 629 "decomp3.ch"

#line 629 "decomp3.ch"
#line 629 "decomp3.ch"
static void decomp3_Anchor () { int i = 1;} 
#line 629 "decomp3.ch"
/*Well done my boy */ 
#line 629 "decomp3.ch"

