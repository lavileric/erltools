
#line 29 "kern.ch"
/*************************************************************************/
#line 29 "kern.ch"
/*                                                                       */
#line 29 "kern.ch"
/*        Produced by Metachop version 2.0  -    1989-1995               */
#line 29 "kern.ch"
/*     Tree      Meta     Chopper      developped    by                  */
#line 29 "kern.ch"
/*                  Eric Lavillonniere                                   */
#line 29 "kern.ch"
/*                                                                       */
#line 29 "kern.ch"
/*************************************************************************/
#line 29 "kern.ch"

#line 29 "kern.ch"
#include "token.h"
#line 29 "kern.ch"
#define decomp decomp_cplus
#line 29 "kern.ch"

#line 29 "kern.ch"
#ifndef for_elem
#line 29 "kern.ch"
#line 29 "kern.ch"
#define for_elem _for_elem

#line 29 "kern.ch"
#line 29 "kern.ch"

#line 29 "kern.ch"
#endif
#ifdef INCONNU
#line 29 "kern.ch"
#line 29 "kern.ch"
PTREE   for_elem ;
#line 29 "kern.ch"

#line 29 "kern.ch"
#line 29 "kern.ch"

#line 29 "kern.ch"
#endif
#include <stdio.h>
#include <stdlib.h>
#include "deccplus.h"
#include <fcntl.h>
#include "Protector.h"

PPTREE  parse_cplus (int) ;

#line 50 "kern.ch"

#line 50 "kern.ch"
int main ( int argc, char **argv )
#line 50 "kern.ch"
{
#line 50 "kern.ch"
    register PPTREE _inter ;
#line 50 "kern.ch"

#line 50 "kern.ch"
#line 50 "kern.ch"
    PTREE   _Baum1 ;
#line 50 "kern.ch"
    
#line 50 "kern.ch"
#line 50 "kern.ch"
    PTREE   _Baum0 ;
#line 50 "kern.ch"
    
#line 50 "kern.ch"
#line 50 "kern.ch"
    int _nextVal ;
    
#line 50 "kern.ch"
#line 53 "kern.ch"
    
    PTREE   tree ;
#line 53 "kern.ch"
    
#line 53 "kern.ch"
#line 54 "kern.ch"
    char    name [50];
    
#line 54 "kern.ch"
#line 55 "kern.ch"
    char    *ptName ;
    
#line 55 "kern.ch"
#line 56 "kern.ch"
    DecompCplus decompObj ;
    
#line 56 "kern.ch"
#line 57 "kern.ch"
    bool    dumpTree = false ;
    
#line 57 "kern.ch"
#line 58 "kern.ch"
    bool    counter = false ;
    
#line 58 "kern.ch"
#line 60 "kern.ch"
    dumpCoord = 0 ;
#line 60 "kern.ch"
#line 61 "kern.ch"
    DecompCplus::ptDecomp = &decompObj ;
#line 61 "kern.ch"
#line 62 "kern.ch"
    MetaInit((char *)0);
#line 62 "kern.ch"
#line 63 "kern.ch"
    cplus().AsLanguage();
#line 63 "kern.ch"
#line 65 "kern.ch"
    EString setFile = "c.set";
    
#line 65 "kern.ch"
#line 66 "kern.ch"
    int offset = 0 ;
    
#line 66 "kern.ch"
#line 67 "kern.ch"
    int theMargin = -1 ;
    
#line 67 "kern.ch"
#line 69 "kern.ch"
    erltoolsStorageKeeper = true ;
#line 69 "kern.ch"
#line 70 "kern.ch"
    SetSingleThread(true);
#line 70 "kern.ch"
#line 72 "kern.ch"
    while ( true ) {
#line 72 "kern.ch"
#line 73 "kern.ch"
                        if ( argc - offset < 2 ) {
#line 73 "kern.ch"
#line 74 "kern.ch"
                                                    help : 
#line 74 "kern.ch"
#line 75 "kern.ch"
                                                        {
#line 75 "kern.ch"
#line 76 "kern.ch"
                                                            EString message = "Bad name for your source file \n";
                                                            
#line 76 "kern.ch"
#line 77 "kern.ch"
                                                            message += "cplus [-flat] [-emacs] [-set fileName] filenames\n";
#line 77 "kern.ch"
#line 78 "kern.ch"
                                                            message += "\t-flat \t: classes indented on left\n";
#line 78 "kern.ch"
#line 79 "kern.ch"
                                                            message += "\t-emacs \t: error messages compatible with emacs\n";
#line 79 "kern.ch"
#line 80 "kern.ch"
                                                            message += "\t-dump \t: dump the tree\n";
#line 80 "kern.ch"
#line 81 "kern.ch"
                                                            message += "\t-set \t: uses this c.set file\n";
#line 81 "kern.ch"
#line 82 "kern.ch"
                                                            _write(2, message.c_str(), message.length());
#line 82 "kern.ch"
#line 83 "kern.ch"
                                                            exit(0);
#line 83 "kern.ch"
#line 84 "kern.ch"
                                                            
#line 84 "kern.ch"
#line 84 "kern.ch"
                                                        }
                                                        
#line 84 "kern.ch"
#line 85 "kern.ch"
                                                        
#line 85 "kern.ch"
#line 85 "kern.ch"
                                                    } else 
#line 85 "kern.ch"
                        {
#line 85 "kern.ch"
#line 86 "kern.ch"
                            ptName = *(argv + 1 + offset);
#line 86 "kern.ch"
#line 87 "kern.ch"
                            if ( EString("-flat") == ptName ) {
#line 87 "kern.ch"
#line 88 "kern.ch"
                                                                    decompObj.FlatFunct(true);
#line 88 "kern.ch"
#line 89 "kern.ch"
                                                                    
#line 89 "kern.ch"
#line 89 "kern.ch"
                                                                 } else 
#line 89 "kern.ch"
                            if ( EString("-v") == ptName ) {
#line 89 "kern.ch"
#line 90 "kern.ch"
                                                                goto help ;
                                                                
#line 90 "kern.ch"
#line 91 "kern.ch"
                                                                
#line 91 "kern.ch"
#line 91 "kern.ch"
                                                              } else 
#line 91 "kern.ch"
                            if ( EString("-help") == ptName ) {
#line 91 "kern.ch"
#line 92 "kern.ch"
                                                                    goto help ;
                                                                    
#line 92 "kern.ch"
#line 93 "kern.ch"
                                                                    
#line 93 "kern.ch"
#line 93 "kern.ch"
                                                                 } else 
#line 93 "kern.ch"
                            if ( EString("-tableString") == ptName ) {
#line 93 "kern.ch"
#line 94 "kern.ch"
                                                                            symbString = true ;
#line 94 "kern.ch"
#line 95 "kern.ch"
                                                                            
#line 95 "kern.ch"
#line 95 "kern.ch"
                                                                        } else 
#line 95 "kern.ch"
                            if ( EString("-emacs") == ptName ) {
#line 95 "kern.ch"
#line 96 "kern.ch"
                                                                    emacsCompatibleError = 1 ;
#line 96 "kern.ch"
#line 97 "kern.ch"
                                                                    
#line 97 "kern.ch"
#line 97 "kern.ch"
                                                                  } else 
#line 97 "kern.ch"
                            if ( EString("-set") == ptName ) {
#line 97 "kern.ch"
#line 98 "kern.ch"
                                                                    if ( argc - offset < 3 ) {
#line 98 "kern.ch"
#line 99 "kern.ch"
                                                                                                    sprintf(name, "Bad name for your source file \n");
#line 99 "kern.ch"
#line 100 "kern.ch"
                                                                                                    _write(2, name, strlen(name));
#line 100 "kern.ch"
#line 101 "kern.ch"
                                                                                                    exit(0);
#line 101 "kern.ch"
#line 102 "kern.ch"
                                                                                                    
#line 102 "kern.ch"
#line 102 "kern.ch"
                                                                                                }
#line 102 "kern.ch"
#line 103 "kern.ch"
                                                                    setFile = *(argv + 1 + ++offset);
#line 103 "kern.ch"
#line 104 "kern.ch"
                                                                    
#line 104 "kern.ch"
#line 104 "kern.ch"
                                                                } else 
#line 104 "kern.ch"
                            if ( EString("-dump") == ptName ) {
#line 104 "kern.ch"
#line 105 "kern.ch"
                                                                    dumpTree = true ;
#line 105 "kern.ch"
#line 106 "kern.ch"
                                                                    
#line 106 "kern.ch"
#line 106 "kern.ch"
                                                                 } else 
#line 106 "kern.ch"
                            if ( EString("-count") == ptName ) {
#line 106 "kern.ch"
#line 107 "kern.ch"
                                                                    counter = true ;
#line 107 "kern.ch"
#line 108 "kern.ch"
                                                                    
#line 108 "kern.ch"
#line 108 "kern.ch"
                                                                  } else 
#line 108 "kern.ch"
                            if ( EString("-rightMargin") == ptName ) {
#line 108 "kern.ch"
#line 109 "kern.ch"
                                                                            if ( argc - offset >= 3 ) {
#line 109 "kern.ch"
#line 110 "kern.ch"
                                                                                                            theMargin = atoi(ptName + 1);
#line 110 "kern.ch"
#line 111 "kern.ch"
                                                                                                            offset += 1 ;
#line 111 "kern.ch"
#line 112 "kern.ch"
                                                                                                            
#line 112 "kern.ch"
#line 112 "kern.ch"
                                                                                                         }
#line 112 "kern.ch"
#line 113 "kern.ch"
                                                                            
#line 113 "kern.ch"
#line 113 "kern.ch"
                                                                        } else 
#line 113 "kern.ch"
#line 114 "kern.ch"
                                break ;
                                
#line 114 "kern.ch"
                            
#line 114 "kern.ch"
#line 115 "kern.ch"
                            offset += 1 ;
#line 115 "kern.ch"
#line 116 "kern.ch"
                            
#line 116 "kern.ch"
#line 116 "kern.ch"
                        }
                        
#line 116 "kern.ch"
#line 117 "kern.ch"
                        
#line 117 "kern.ch"
#line 117 "kern.ch"
                    }
#line 117 "kern.ch"
#line 118 "kern.ch"
    ReadIncludeS(setFile.c_str(), 1);
#line 118 "kern.ch"
#line 119 "kern.ch"
    (tree=cplus().ReadFile(ptName));
#line 119 "kern.ch"
    
#line 119 "kern.ch"
#line 120 "kern.ch"
    AddRef(tree);
#line 120 "kern.ch"
#line 121 "kern.ch"
    SwitchLang("cplus");
#line 121 "kern.ch"
#line 122 "kern.ch"
    if ( theMargin > 0 ) 
#line 122 "kern.ch"
#line 123 "kern.ch"
        rightMargin = theMargin ;
#line 123 "kern.ch"
#line 126 "kern.ch"
    {
#line 126 "kern.ch"
        PPTREE _ptTree0= (PPTREE) 0,_ptRes0= (PPTREE) 0;
#line 126 "kern.ch"
        _ptRes0 = MakeTree(cplus::NONE, 0);
#line 126 "kern.ch"
        _Baum0 = _ptRes0;
#line 126 "kern.ch"
    }
#line 126 "kern.ch"
    
#line 126 "kern.ch"
#line 126 "kern.ch"
    {
#line 126 "kern.ch"
#line 126 "kern.ch"
        ItPtree _iterator1 (tree, _Baum0) ;
        
#line 126 "kern.ch"
#line 126 "kern.ch"
        PTREE   _for_elem ;
#line 126 "kern.ch"
        
#line 126 "kern.ch"
#line 126 "kern.ch"
        _iterator1.AllSearch(1);
#line 126 "kern.ch"
#line 126 "kern.ch"
        while ( (_for_elem=_iterator1++) ) {
#line 126 "kern.ch"
#line 126 "kern.ch"
            {
#line 126 "kern.ch"
#line 127 "kern.ch"
                PTREE   list = (PTREE)0 ;
#line 127 "kern.ch"
                
#line 127 "kern.ch"
#line 128 "kern.ch"
                PTREE   nil ;
#line 128 "kern.ch"
                
#line 128 "kern.ch"
#line 127 "kern.ch"
                (list=for_elem);
#line 127 "kern.ch"
                
#line 127 "kern.ch"
#line 129 "kern.ch"
                if ( !IsComm(list, POST) && !IsComm(list, PRE) ) {
#line 129 "kern.ch"
#line 130 "kern.ch"
                                                                            (list=FatherTree(list));
#line 130 "kern.ch"
                                                                            
#line 130 "kern.ch"
#line 131 "kern.ch"
                                                                            for_elem = FatherTree(list);
#line 131 "kern.ch"
#line 132 "kern.ch"
                                                                            {
#line 132 "kern.ch"
                                                                                PPTREE _ptTree0= (PPTREE) 0,_sonTree0= (PPTREE) 0 ;
#line 132 "kern.ch"
                                                                                if (_ptTree0= fathertree(list)) {
#line 132 "kern.ch"
                                                                                    int rank = ranktree(list);
#line 132 "kern.ch"
                                                                                    ReplaceTree(_ptTree0,rank,nil);
#line 132 "kern.ch"
                                                                                }
#line 132 "kern.ch"
                                                                            }
#line 132 "kern.ch"
                                                                            
#line 132 "kern.ch"
#line 133 "kern.ch"
                                                                            
#line 133 "kern.ch"
#line 133 "kern.ch"
                                                                         }
#line 133 "kern.ch"
#line 134 "kern.ch"
                
#line 134 "kern.ch"
#line 134 "kern.ch"
            }
            
#line 134 "kern.ch"
#line 134 "kern.ch"
            _iterator1.Current(_for_elem);
#line 134 "kern.ch"
#line 134 "kern.ch"
            continue ;
            
#line 134 "kern.ch"
#line 134 "kern.ch"
        for_continue1 : 
#line 134 "kern.ch"
#line 134 "kern.ch"
            _iterator1.Current(_for_elem);
#line 134 "kern.ch"
#line 134 "kern.ch"
            _iterator1.SkipSon(1);
#line 134 "kern.ch"
#line 134 "kern.ch"
            continue ;
            
#line 134 "kern.ch"
#line 134 "kern.ch"
        for_break1 : 
#line 134 "kern.ch"
#line 134 "kern.ch"
            break ;
            
#line 134 "kern.ch"
#line 134 "kern.ch"
            
#line 134 "kern.ch"
#line 134 "kern.ch"
        }
#line 134 "kern.ch"
#line 134 "kern.ch"
        
#line 134 "kern.ch"
#line 134 "kern.ch"
    }
    
#line 134 "kern.ch"
#line 136 "kern.ch"
    PTREE   stat, else_stat, if_stat ;
#line 136 "kern.ch"
    
#line 136 "kern.ch"
#line 138 "kern.ch"
    {
#line 138 "kern.ch"
        PPTREE _ptTree0= (PPTREE) 0,_ptRes0= (PPTREE) 0;
#line 138 "kern.ch"
        _ptRes0 = MakeTree(cplus::IF, 0);
#line 138 "kern.ch"
        _Baum1 = _ptRes0;
#line 138 "kern.ch"
    }
#line 138 "kern.ch"
    
#line 138 "kern.ch"
#line 138 "kern.ch"
    {
#line 138 "kern.ch"
#line 138 "kern.ch"
        ItPtree _iterator2 (tree, _Baum1) ;
        
#line 138 "kern.ch"
#line 138 "kern.ch"
        PTREE   _for_elem ;
#line 138 "kern.ch"
        
#line 138 "kern.ch"
#line 138 "kern.ch"
        _iterator2.AllSearch(1);
#line 138 "kern.ch"
#line 138 "kern.ch"
        while ( (_for_elem=_iterator2++) ) {
#line 138 "kern.ch"
#line 138 "kern.ch"
            {
#line 138 "kern.ch"
#line 139 "kern.ch"
                (stat=for_elem);
#line 139 "kern.ch"
                
#line 139 "kern.ch"
#line 140 "kern.ch"
                ((_inter = (PPTREE)stat,1) && 
#line 140 "kern.ch"
                    ((if_stat=SonTree(_inter,2)),1) &&
#line 140 "kern.ch"
                    ((else_stat=SonTree(_inter,3)),1) &&
#line 140 "kern.ch"
                    1);
#line 140 "kern.ch"
                ;
#line 140 "kern.ch"
#line 141 "kern.ch"
                if ( ((_inter = (PPTREE)if_stat,1) && 
#line 141 "kern.ch"
                        (NumberTree(_inter) == cplus::STAT_VOID) &&
#line 141 "kern.ch"
                        1) ) {
#line 141 "kern.ch"
#line 142 "kern.ch"
                                {
#line 142 "kern.ch"
                                    PPTREE _ptTree0= (PPTREE) 0,_sonTree0= (PPTREE) 0 ;
#line 142 "kern.ch"
                                    {
#line 142 "kern.ch"
                                        PPTREE _ptTree1= (PPTREE) 0,_ptRes1= (PPTREE) 0;
#line 142 "kern.ch"
                                        _ptRes1 = MakeTree(cplus::COMPOUND, 1);
#line 142 "kern.ch"
                                        _ptTree0 = _ptRes1;
#line 142 "kern.ch"
                                    }
#line 142 "kern.ch"
                                    ReplaceTree(stat, 2, _ptTree0);
#line 142 "kern.ch"
                                }
#line 142 "kern.ch"
                                
#line 142 "kern.ch"
#line 143 "kern.ch"
                                
#line 143 "kern.ch"
#line 143 "kern.ch"
                             }
#line 143 "kern.ch"
#line 144 "kern.ch"
                if ( ((_inter = (PPTREE)else_stat,1) && 
#line 144 "kern.ch"
                        (NumberTree(_inter) == cplus::STAT_VOID) &&
#line 144 "kern.ch"
                        1) ) {
#line 144 "kern.ch"
#line 145 "kern.ch"
                                {
#line 145 "kern.ch"
                                    PPTREE _ptTree0= (PPTREE) 0,_sonTree0= (PPTREE) 0 ;
#line 145 "kern.ch"
                                    {
#line 145 "kern.ch"
                                        PPTREE _ptTree1= (PPTREE) 0,_ptRes1= (PPTREE) 0;
#line 145 "kern.ch"
                                        _ptRes1 = MakeTree(cplus::COMPOUND, 1);
#line 145 "kern.ch"
                                        _ptTree0 = _ptRes1;
#line 145 "kern.ch"
                                    }
#line 145 "kern.ch"
                                    ReplaceTree(stat, 3, _ptTree0);
#line 145 "kern.ch"
                                }
#line 145 "kern.ch"
                                
#line 145 "kern.ch"
#line 146 "kern.ch"
                                
#line 146 "kern.ch"
#line 146 "kern.ch"
                             }
#line 146 "kern.ch"
#line 147 "kern.ch"
                for_elem = stat [1];
#line 147 "kern.ch"
#line 148 "kern.ch"
                
#line 148 "kern.ch"
#line 148 "kern.ch"
            }
            
#line 148 "kern.ch"
#line 148 "kern.ch"
            _iterator2.Current(_for_elem);
#line 148 "kern.ch"
#line 148 "kern.ch"
            continue ;
            
#line 148 "kern.ch"
#line 148 "kern.ch"
        for_continue2 : 
#line 148 "kern.ch"
#line 148 "kern.ch"
            _iterator2.Current(_for_elem);
#line 148 "kern.ch"
#line 148 "kern.ch"
            _iterator2.SkipSon(1);
#line 148 "kern.ch"
#line 148 "kern.ch"
            continue ;
            
#line 148 "kern.ch"
#line 148 "kern.ch"
        for_break2 : 
#line 148 "kern.ch"
#line 148 "kern.ch"
            break ;
            
#line 148 "kern.ch"
#line 148 "kern.ch"
            
#line 148 "kern.ch"
#line 148 "kern.ch"
        }
#line 148 "kern.ch"
#line 148 "kern.ch"
        
#line 148 "kern.ch"
#line 148 "kern.ch"
    }
    
#line 148 "kern.ch"
#line 149 "kern.ch"
    if ( dumpTree ) {
#line 149 "kern.ch"
#line 150 "kern.ch"
                        DumpTree(tree);
#line 150 "kern.ch"
#line 151 "kern.ch"
                        LNewLine(1);
#line 151 "kern.ch"
                        
#line 151 "kern.ch"
#line 152 "kern.ch"
                        
#line 152 "kern.ch"
#line 152 "kern.ch"
                     } else 
#line 152 "kern.ch"
    if ( counter ) {
#line 152 "kern.ch"
#line 155 "kern.ch"
                        unsigned int   counterFunct = 0 ;
                        
#line 155 "kern.ch"
#line 156 "kern.ch"
                        EString fileName (ptName) ;
                        
#line 156 "kern.ch"
#line 158 "kern.ch"
                        {
#line 158 "kern.ch"
#line 158 "kern.ch"
                            PTREE   _Baum2 ;
#line 158 "kern.ch"
                            
#line 158 "kern.ch"
#line 158 "kern.ch"
                            {
#line 158 "kern.ch"
                                PPTREE _ptTree0= (PPTREE) 0,_ptRes0= (PPTREE) 0;
#line 158 "kern.ch"
                                _ptRes0 = MakeTree(cplus::FUNC, 0);
#line 158 "kern.ch"
                                _Baum2 = _ptRes0;
#line 158 "kern.ch"
                            }
#line 158 "kern.ch"
                            
#line 158 "kern.ch"
#line 158 "kern.ch"
                            {
#line 158 "kern.ch"
#line 158 "kern.ch"
                                ItPtree _iterator3 (tree, _Baum2) ;
                                
#line 158 "kern.ch"
#line 158 "kern.ch"
                                PTREE   _for_elem ;
#line 158 "kern.ch"
                                
#line 158 "kern.ch"
#line 158 "kern.ch"
                                _iterator3.AllSearch(1);
#line 158 "kern.ch"
#line 159 "kern.ch"
                                while ( (_for_elem=_iterator3++) ) {
#line 159 "kern.ch"
#line 159 "kern.ch"
                                    counterFunct++ ;
#line 159 "kern.ch"
#line 159 "kern.ch"
                                    _iterator3.Current(_for_elem);
#line 159 "kern.ch"
#line 159 "kern.ch"
                                    continue ;
                                    
#line 159 "kern.ch"
#line 159 "kern.ch"
                                for_continue3 : 
#line 159 "kern.ch"
#line 159 "kern.ch"
                                    _iterator3.Current(_for_elem);
#line 159 "kern.ch"
#line 159 "kern.ch"
                                    _iterator3.SkipSon(1);
#line 159 "kern.ch"
#line 159 "kern.ch"
                                    continue ;
                                    
#line 159 "kern.ch"
#line 159 "kern.ch"
                                for_break3 : 
#line 159 "kern.ch"
#line 159 "kern.ch"
                                    break ;
                                    
#line 159 "kern.ch"
#line 159 "kern.ch"
                                    
#line 159 "kern.ch"
#line 159 "kern.ch"
                                }
#line 159 "kern.ch"
#line 159 "kern.ch"
                                
#line 159 "kern.ch"
#line 159 "kern.ch"
                            }
                            
#line 159 "kern.ch"
#line 161 "kern.ch"
                            PrintString(fileName);
#line 161 "kern.ch"
#line 161 "kern.ch"
                            PrintString(":  Number of Func : ");
#line 161 "kern.ch"
#line 161 "kern.ch"
                            PrintString(EString((int)counterFunct));
#line 161 "kern.ch"
#line 161 "kern.ch"
                            LNewLine(1);
#line 161 "kern.ch"
                            
#line 161 "kern.ch"
#line 162 "kern.ch"
                            
#line 162 "kern.ch"
#line 162 "kern.ch"
                        }
                        
#line 162 "kern.ch"
#line 165 "kern.ch"
                        
                        unsigned int   nbLine = 0 ;
                        
#line 165 "kern.ch"
#line 167 "kern.ch"
                        {
#line 167 "kern.ch"
#line 167 "kern.ch"
                            Protector<int>     protector (output, -1) ;
                            
#line 167 "kern.ch"
#line 168 "kern.ch"
                            StartOutputString();
#line 168 "kern.ch"
#line 169 "kern.ch"
                            decompObj.ChopTree(tree);
#line 169 "kern.ch"
#line 170 "kern.ch"
                            EString dString = EndOutputString();
                            
#line 170 "kern.ch"
#line 171 "kern.ch"
                            char    *pt = (char *)dString.c_str();
                            
#line 171 "kern.ch"
#line 172 "kern.ch"
                            bool    start = false ;
                            
#line 172 "kern.ch"
#line 173 "kern.ch"
#line 173 "kern.ch"
                            for (; *pt ; pt++ ) {
#line 173 "kern.ch"
#line 174 "kern.ch"
                                                    if ( *pt != ' ' && *pt != '\t' && *pt != '\n' ) 
#line 174 "kern.ch"
#line 175 "kern.ch"
                                                        start = false ;
#line 175 "kern.ch"
#line 176 "kern.ch"
                                                    if ( !start && *pt == '\n' ) {
#line 176 "kern.ch"
#line 177 "kern.ch"
                                                                                        nbLine++ ;
#line 177 "kern.ch"
#line 178 "kern.ch"
                                                                                        start = true ;
#line 178 "kern.ch"
#line 179 "kern.ch"
                                                                                        
#line 179 "kern.ch"
#line 179 "kern.ch"
                                                                                      }
#line 179 "kern.ch"
#line 180 "kern.ch"
                                                    
#line 180 "kern.ch"
#line 180 "kern.ch"
                                                   }
#line 180 "kern.ch"
                            
#line 180 "kern.ch"
#line 181 "kern.ch"
                            
#line 181 "kern.ch"
#line 181 "kern.ch"
                        }
                        
#line 181 "kern.ch"
#line 182 "kern.ch"
                        PrintString(fileName);
#line 182 "kern.ch"
#line 182 "kern.ch"
                        PrintString(":  Number of lines : ");
#line 182 "kern.ch"
#line 182 "kern.ch"
                        PrintString(EString((int)nbLine));
#line 182 "kern.ch"
#line 182 "kern.ch"
                        LNewLine(1);
#line 182 "kern.ch"
                        
#line 182 "kern.ch"
#line 185 "kern.ch"
                        nbLine = 0 ;
#line 185 "kern.ch"
#line 187 "kern.ch"
                        {
#line 187 "kern.ch"
#line 187 "kern.ch"
                            PTREE   nocTree = (PTREE)0 ;
#line 187 "kern.ch"
                            
#line 187 "kern.ch"
#line 188 "kern.ch"
                            Protector<int>     protector (output, -1) ;
                            
#line 188 "kern.ch"
#line 187 "kern.ch"
                            (nocTree=NoCommentCopyTree(tree));
#line 187 "kern.ch"
                            
#line 187 "kern.ch"
#line 189 "kern.ch"
                            StartOutputString();
#line 189 "kern.ch"
#line 190 "kern.ch"
                            decompObj.ChopTree(nocTree);
#line 190 "kern.ch"
#line 191 "kern.ch"
                            EString dString = EndOutputString();
                            
#line 191 "kern.ch"
#line 192 "kern.ch"
                            char    *pt = (char *)dString.c_str();
                            
#line 192 "kern.ch"
#line 193 "kern.ch"
                            bool    start = false ;
                            
#line 193 "kern.ch"
#line 194 "kern.ch"
#line 194 "kern.ch"
                            for (; *pt ; pt++ ) {
#line 194 "kern.ch"
#line 195 "kern.ch"
                                                    if ( *pt != ' ' && *pt != '\t' && *pt != '\n' ) 
#line 195 "kern.ch"
#line 196 "kern.ch"
                                                        start = false ;
#line 196 "kern.ch"
#line 197 "kern.ch"
                                                    if ( !start && *pt == '\n' ) {
#line 197 "kern.ch"
#line 198 "kern.ch"
                                                                                        nbLine++ ;
#line 198 "kern.ch"
#line 199 "kern.ch"
                                                                                        start = true ;
#line 199 "kern.ch"
#line 200 "kern.ch"
                                                                                        
#line 200 "kern.ch"
#line 200 "kern.ch"
                                                                                      }
#line 200 "kern.ch"
#line 201 "kern.ch"
                                                    
#line 201 "kern.ch"
#line 201 "kern.ch"
                                                   }
#line 201 "kern.ch"
                            
#line 201 "kern.ch"
#line 202 "kern.ch"
                            
#line 202 "kern.ch"
#line 202 "kern.ch"
                        }
                        
#line 202 "kern.ch"
#line 203 "kern.ch"
                        PrintString(fileName);
#line 203 "kern.ch"
#line 203 "kern.ch"
                        PrintString(":  Number of non commented lines : ");
#line 203 "kern.ch"
#line 203 "kern.ch"
                        PrintString(EString((int)nbLine));
#line 203 "kern.ch"
#line 203 "kern.ch"
                        LNewLine(1);
#line 203 "kern.ch"
                        
#line 203 "kern.ch"
#line 204 "kern.ch"
                        
#line 204 "kern.ch"
#line 204 "kern.ch"
                    } else 
#line 204 "kern.ch"
#line 205 "kern.ch"
        decompObj.ChopTree(tree);
#line 205 "kern.ch"
    
#line 205 "kern.ch"
#line 206 "kern.ch"
    MetaEnd();
#line 206 "kern.ch"
#line 207 "kern.ch"
    if ( !firstError ) 
#line 207 "kern.ch"
#line 208 "kern.ch"
        return 1 ;
    
#line 208 "kern.ch"
    else 
#line 208 "kern.ch"
#line 210 "kern.ch"
        return 0 ;
        
#line 210 "kern.ch"
    
#line 210 "kern.ch"
#line 211 "kern.ch"
    
#line 211 "kern.ch"
#line 211 "kern.ch"
}
#line 211 "kern.ch"

#line 211 "kern.ch"
#line 211 "kern.ch"
static void kern_Anchor () { int i = 1;} 
#line 211 "kern.ch"
/*Well done my boy */ 
#line 211 "kern.ch"
