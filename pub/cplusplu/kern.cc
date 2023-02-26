
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
    while ( true ) {
#line 69 "kern.ch"
#line 70 "kern.ch"
                        if ( argc - offset < 2 ) {
#line 70 "kern.ch"
#line 71 "kern.ch"
                                                    help : 
#line 71 "kern.ch"
#line 72 "kern.ch"
                                                        {
#line 72 "kern.ch"
#line 73 "kern.ch"
                                                            EString message = "Bad name for your source file \n";
                                                            
#line 73 "kern.ch"
#line 74 "kern.ch"
                                                            message += "cplus [-flat] [-emacs] [-set fileName] filenames\n";
#line 74 "kern.ch"
#line 75 "kern.ch"
                                                            message += "\t-flat \t: classes indented on left\n";
#line 75 "kern.ch"
#line 76 "kern.ch"
                                                            message += "\t-emacs \t: error messages compatible with emacs\n";
#line 76 "kern.ch"
#line 77 "kern.ch"
                                                            message += "\t-dump \t: dump the tree\n";
#line 77 "kern.ch"
#line 78 "kern.ch"
                                                            message += "\t-set \t: uses this c.set file\n";
#line 78 "kern.ch"
#line 79 "kern.ch"
                                                            _write(2, message.c_str(), message.length());
#line 79 "kern.ch"
#line 80 "kern.ch"
                                                            exit(0);
#line 80 "kern.ch"
#line 81 "kern.ch"
                                                            
#line 81 "kern.ch"
#line 81 "kern.ch"
                                                        }
                                                        
#line 81 "kern.ch"
#line 82 "kern.ch"
                                                        
#line 82 "kern.ch"
#line 82 "kern.ch"
                                                    } else 
#line 82 "kern.ch"
                        {
#line 82 "kern.ch"
#line 83 "kern.ch"
                            ptName = *(argv + 1 + offset);
#line 83 "kern.ch"
#line 84 "kern.ch"
                            if ( EString("-flat") == ptName ) {
#line 84 "kern.ch"
#line 85 "kern.ch"
                                                                    decompObj.FlatFunct(true);
#line 85 "kern.ch"
#line 86 "kern.ch"
                                                                    
#line 86 "kern.ch"
#line 86 "kern.ch"
                                                                 } else 
#line 86 "kern.ch"
                            if ( EString("-v") == ptName ) {
#line 86 "kern.ch"
#line 87 "kern.ch"
                                                                goto help ;
                                                                
#line 87 "kern.ch"
#line 88 "kern.ch"
                                                                
#line 88 "kern.ch"
#line 88 "kern.ch"
                                                              } else 
#line 88 "kern.ch"
                            if ( EString("-help") == ptName ) {
#line 88 "kern.ch"
#line 89 "kern.ch"
                                                                    goto help ;
                                                                    
#line 89 "kern.ch"
#line 90 "kern.ch"
                                                                    
#line 90 "kern.ch"
#line 90 "kern.ch"
                                                                 } else 
#line 90 "kern.ch"
                            if ( EString("-tableString") == ptName ) {
#line 90 "kern.ch"
#line 91 "kern.ch"
                                                                            symbString = true ;
#line 91 "kern.ch"
#line 91 "kern.ch"
                                                                            ;
#line 91 "kern.ch"
#line 92 "kern.ch"
                                                                            
#line 92 "kern.ch"
#line 92 "kern.ch"
                                                                        } else 
#line 92 "kern.ch"
                            if ( EString("-emacs") == ptName ) {
#line 92 "kern.ch"
#line 93 "kern.ch"
                                                                    emacsCompatibleError = 1 ;
#line 93 "kern.ch"
#line 94 "kern.ch"
                                                                    
#line 94 "kern.ch"
#line 94 "kern.ch"
                                                                  } else 
#line 94 "kern.ch"
                            if ( EString("-set") == ptName ) {
#line 94 "kern.ch"
#line 95 "kern.ch"
                                                                    if ( argc - offset < 3 ) {
#line 95 "kern.ch"
#line 96 "kern.ch"
                                                                                                    sprintf(name, "Bad name for your source file \n");
#line 96 "kern.ch"
#line 97 "kern.ch"
                                                                                                    _write(2, name, strlen(name));
#line 97 "kern.ch"
#line 98 "kern.ch"
                                                                                                    exit(0);
#line 98 "kern.ch"
#line 99 "kern.ch"
                                                                                                    
#line 99 "kern.ch"
#line 99 "kern.ch"
                                                                                                }
#line 99 "kern.ch"
#line 100 "kern.ch"
                                                                    setFile = *(argv + 1 + ++offset);
#line 100 "kern.ch"
#line 101 "kern.ch"
                                                                    
#line 101 "kern.ch"
#line 101 "kern.ch"
                                                                } else 
#line 101 "kern.ch"
                            if ( EString("-dump") == ptName ) {
#line 101 "kern.ch"
#line 102 "kern.ch"
                                                                    dumpTree = true ;
#line 102 "kern.ch"
#line 103 "kern.ch"
                                                                    
#line 103 "kern.ch"
#line 103 "kern.ch"
                                                                 } else 
#line 103 "kern.ch"
                            if ( EString("-count") == ptName ) {
#line 103 "kern.ch"
#line 104 "kern.ch"
                                                                    counter = true ;
#line 104 "kern.ch"
#line 105 "kern.ch"
                                                                    
#line 105 "kern.ch"
#line 105 "kern.ch"
                                                                  } else 
#line 105 "kern.ch"
                            if ( EString("-rightMargin") == ptName ) {
#line 105 "kern.ch"
#line 106 "kern.ch"
                                                                            if ( argc - offset >= 3 ) {
#line 106 "kern.ch"
#line 107 "kern.ch"
                                                                                                            theMargin = atoi(ptName + 1);
#line 107 "kern.ch"
#line 108 "kern.ch"
                                                                                                            offset += 1 ;
#line 108 "kern.ch"
#line 109 "kern.ch"
                                                                                                            
#line 109 "kern.ch"
#line 109 "kern.ch"
                                                                                                         }
#line 109 "kern.ch"
#line 110 "kern.ch"
                                                                            
#line 110 "kern.ch"
#line 110 "kern.ch"
                                                                        } else 
#line 110 "kern.ch"
#line 111 "kern.ch"
                                break ;
                                
#line 111 "kern.ch"
                            
#line 111 "kern.ch"
#line 112 "kern.ch"
                            offset += 1 ;
#line 112 "kern.ch"
#line 113 "kern.ch"
                            
#line 113 "kern.ch"
#line 113 "kern.ch"
                        }
                        
#line 113 "kern.ch"
#line 114 "kern.ch"
                        
#line 114 "kern.ch"
#line 114 "kern.ch"
                    }
#line 114 "kern.ch"
#line 115 "kern.ch"
    ReadIncludeS(setFile.c_str(), 1);
#line 115 "kern.ch"
#line 116 "kern.ch"
    (tree=cplus().ReadFile(ptName));
#line 116 "kern.ch"
    
#line 116 "kern.ch"
#line 117 "kern.ch"
    AddRef(tree);
#line 117 "kern.ch"
#line 118 "kern.ch"
    SwitchLang("cplus");
#line 118 "kern.ch"
#line 119 "kern.ch"
    if ( theMargin > 0 ) 
#line 119 "kern.ch"
#line 120 "kern.ch"
        rightMargin = theMargin ;
#line 120 "kern.ch"
#line 123 "kern.ch"
    {
#line 123 "kern.ch"
        PPTREE _ptTree0= (PPTREE) 0,_ptRes0= (PPTREE) 0;
#line 123 "kern.ch"
        _ptRes0 = MakeTree(cplus::NONE, 0);
#line 123 "kern.ch"
        _Baum0 = _ptRes0;
#line 123 "kern.ch"
    }
#line 123 "kern.ch"
    
#line 123 "kern.ch"
#line 123 "kern.ch"
    {
#line 123 "kern.ch"
#line 123 "kern.ch"
        ItPtree _iterator1 (tree, _Baum0) ;
        
#line 123 "kern.ch"
#line 123 "kern.ch"
        PTREE   _for_elem ;
#line 123 "kern.ch"
        
#line 123 "kern.ch"
#line 123 "kern.ch"
        _iterator1.AllSearch(1);
#line 123 "kern.ch"
#line 123 "kern.ch"
        while ( (_for_elem=_iterator1++) ) {
#line 123 "kern.ch"
#line 123 "kern.ch"
            {
#line 123 "kern.ch"
#line 124 "kern.ch"
                PTREE   list = (PTREE)0 ;
#line 124 "kern.ch"
                
#line 124 "kern.ch"
#line 125 "kern.ch"
                PTREE   nil ;
#line 125 "kern.ch"
                
#line 125 "kern.ch"
#line 124 "kern.ch"
                (list=for_elem);
#line 124 "kern.ch"
                
#line 124 "kern.ch"
#line 126 "kern.ch"
                if ( !IsComm(list, POST) && !IsComm(list, PRE) ) {
#line 126 "kern.ch"
#line 127 "kern.ch"
                                                                            (list=FatherTree(list));
#line 127 "kern.ch"
                                                                            
#line 127 "kern.ch"
#line 128 "kern.ch"
                                                                            for_elem = FatherTree(list);
#line 128 "kern.ch"
#line 129 "kern.ch"
                                                                            {
#line 129 "kern.ch"
                                                                                PPTREE _ptTree0= (PPTREE) 0,_sonTree0= (PPTREE) 0 ;
#line 129 "kern.ch"
                                                                                if (_ptTree0= fathertree(list)) {
#line 129 "kern.ch"
                                                                                    int rank = ranktree(list);
#line 129 "kern.ch"
                                                                                    ReplaceTree(_ptTree0,rank,nil);
#line 129 "kern.ch"
                                                                                }
#line 129 "kern.ch"
                                                                            }
#line 129 "kern.ch"
                                                                            
#line 129 "kern.ch"
#line 130 "kern.ch"
                                                                            
#line 130 "kern.ch"
#line 130 "kern.ch"
                                                                         }
#line 130 "kern.ch"
#line 131 "kern.ch"
                
#line 131 "kern.ch"
#line 131 "kern.ch"
            }
            
#line 131 "kern.ch"
#line 131 "kern.ch"
            _iterator1.Current(_for_elem);
#line 131 "kern.ch"
#line 131 "kern.ch"
            continue ;
            
#line 131 "kern.ch"
#line 131 "kern.ch"
        for_continue1 : 
#line 131 "kern.ch"
#line 131 "kern.ch"
            _iterator1.Current(_for_elem);
#line 131 "kern.ch"
#line 131 "kern.ch"
            _iterator1.SkipSon(1);
#line 131 "kern.ch"
#line 131 "kern.ch"
            continue ;
            
#line 131 "kern.ch"
#line 131 "kern.ch"
        for_break1 : 
#line 131 "kern.ch"
#line 131 "kern.ch"
            break ;
            
#line 131 "kern.ch"
#line 131 "kern.ch"
            
#line 131 "kern.ch"
#line 131 "kern.ch"
        }
#line 131 "kern.ch"
#line 131 "kern.ch"
        
#line 131 "kern.ch"
#line 131 "kern.ch"
    }
    
#line 131 "kern.ch"
#line 133 "kern.ch"
    PTREE   stat, else_stat, if_stat ;
#line 133 "kern.ch"
    
#line 133 "kern.ch"
#line 135 "kern.ch"
    {
#line 135 "kern.ch"
        PPTREE _ptTree0= (PPTREE) 0,_ptRes0= (PPTREE) 0;
#line 135 "kern.ch"
        _ptRes0 = MakeTree(cplus::IF, 0);
#line 135 "kern.ch"
        _Baum1 = _ptRes0;
#line 135 "kern.ch"
    }
#line 135 "kern.ch"
    
#line 135 "kern.ch"
#line 135 "kern.ch"
    {
#line 135 "kern.ch"
#line 135 "kern.ch"
        ItPtree _iterator2 (tree, _Baum1) ;
        
#line 135 "kern.ch"
#line 135 "kern.ch"
        PTREE   _for_elem ;
#line 135 "kern.ch"
        
#line 135 "kern.ch"
#line 135 "kern.ch"
        _iterator2.AllSearch(1);
#line 135 "kern.ch"
#line 135 "kern.ch"
        while ( (_for_elem=_iterator2++) ) {
#line 135 "kern.ch"
#line 135 "kern.ch"
            {
#line 135 "kern.ch"
#line 136 "kern.ch"
                (stat=for_elem);
#line 136 "kern.ch"
                
#line 136 "kern.ch"
#line 137 "kern.ch"
                ((_inter = (PPTREE)stat,1) && 
#line 137 "kern.ch"
                    ((if_stat=SonTree(_inter,2)),1) &&
#line 137 "kern.ch"
                    ((else_stat=SonTree(_inter,3)),1) &&
#line 137 "kern.ch"
                    1);
#line 137 "kern.ch"
                ;
#line 137 "kern.ch"
#line 138 "kern.ch"
                if ( ((_inter = (PPTREE)if_stat,1) && 
#line 138 "kern.ch"
                        (NumberTree(_inter) == cplus::STAT_VOID) &&
#line 138 "kern.ch"
                        1) ) {
#line 138 "kern.ch"
#line 139 "kern.ch"
                                {
#line 139 "kern.ch"
                                    PPTREE _ptTree0= (PPTREE) 0,_sonTree0= (PPTREE) 0 ;
#line 139 "kern.ch"
                                    {
#line 139 "kern.ch"
                                        PPTREE _ptTree1= (PPTREE) 0,_ptRes1= (PPTREE) 0;
#line 139 "kern.ch"
                                        _ptRes1 = MakeTree(cplus::COMPOUND, 1);
#line 139 "kern.ch"
                                        _ptTree0 = _ptRes1;
#line 139 "kern.ch"
                                    }
#line 139 "kern.ch"
                                    ReplaceTree(stat, 2, _ptTree0);
#line 139 "kern.ch"
                                }
#line 139 "kern.ch"
                                
#line 139 "kern.ch"
#line 140 "kern.ch"
                                
#line 140 "kern.ch"
#line 140 "kern.ch"
                             }
#line 140 "kern.ch"
#line 141 "kern.ch"
                if ( ((_inter = (PPTREE)else_stat,1) && 
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
                                    ReplaceTree(stat, 3, _ptTree0);
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
                for_elem = stat [1];
#line 144 "kern.ch"
#line 145 "kern.ch"
                
#line 145 "kern.ch"
#line 145 "kern.ch"
            }
            
#line 145 "kern.ch"
#line 145 "kern.ch"
            _iterator2.Current(_for_elem);
#line 145 "kern.ch"
#line 145 "kern.ch"
            continue ;
            
#line 145 "kern.ch"
#line 145 "kern.ch"
        for_continue2 : 
#line 145 "kern.ch"
#line 145 "kern.ch"
            _iterator2.Current(_for_elem);
#line 145 "kern.ch"
#line 145 "kern.ch"
            _iterator2.SkipSon(1);
#line 145 "kern.ch"
#line 145 "kern.ch"
            continue ;
            
#line 145 "kern.ch"
#line 145 "kern.ch"
        for_break2 : 
#line 145 "kern.ch"
#line 145 "kern.ch"
            break ;
            
#line 145 "kern.ch"
#line 145 "kern.ch"
            
#line 145 "kern.ch"
#line 145 "kern.ch"
        }
#line 145 "kern.ch"
#line 145 "kern.ch"
        
#line 145 "kern.ch"
#line 145 "kern.ch"
    }
    
#line 145 "kern.ch"
#line 146 "kern.ch"
    if ( dumpTree ) {
#line 146 "kern.ch"
#line 147 "kern.ch"
                        DumpTree(tree);
#line 147 "kern.ch"
#line 148 "kern.ch"
                        LNewLine(1);
#line 148 "kern.ch"
                        
#line 148 "kern.ch"
#line 149 "kern.ch"
                        
#line 149 "kern.ch"
#line 149 "kern.ch"
                     } else 
#line 149 "kern.ch"
    if ( counter ) {
#line 149 "kern.ch"
#line 152 "kern.ch"
                        unsigned int   counterFunct = 0 ;
                        
#line 152 "kern.ch"
#line 153 "kern.ch"
                        EString fileName (ptName) ;
                        
#line 153 "kern.ch"
#line 155 "kern.ch"
                        {
#line 155 "kern.ch"
#line 155 "kern.ch"
                            PTREE   _Baum2 ;
#line 155 "kern.ch"
                            
#line 155 "kern.ch"
#line 155 "kern.ch"
                            {
#line 155 "kern.ch"
                                PPTREE _ptTree0= (PPTREE) 0,_ptRes0= (PPTREE) 0;
#line 155 "kern.ch"
                                _ptRes0 = MakeTree(cplus::FUNC, 0);
#line 155 "kern.ch"
                                _Baum2 = _ptRes0;
#line 155 "kern.ch"
                            }
#line 155 "kern.ch"
                            
#line 155 "kern.ch"
#line 155 "kern.ch"
                            {
#line 155 "kern.ch"
#line 155 "kern.ch"
                                ItPtree _iterator3 (tree, _Baum2) ;
                                
#line 155 "kern.ch"
#line 155 "kern.ch"
                                PTREE   _for_elem ;
#line 155 "kern.ch"
                                
#line 155 "kern.ch"
#line 155 "kern.ch"
                                _iterator3.AllSearch(1);
#line 155 "kern.ch"
#line 156 "kern.ch"
                                while ( (_for_elem=_iterator3++) ) {
#line 156 "kern.ch"
#line 156 "kern.ch"
                                    counterFunct++ ;
#line 156 "kern.ch"
#line 156 "kern.ch"
                                    _iterator3.Current(_for_elem);
#line 156 "kern.ch"
#line 156 "kern.ch"
                                    continue ;
                                    
#line 156 "kern.ch"
#line 156 "kern.ch"
                                for_continue3 : 
#line 156 "kern.ch"
#line 156 "kern.ch"
                                    _iterator3.Current(_for_elem);
#line 156 "kern.ch"
#line 156 "kern.ch"
                                    _iterator3.SkipSon(1);
#line 156 "kern.ch"
#line 156 "kern.ch"
                                    continue ;
                                    
#line 156 "kern.ch"
#line 156 "kern.ch"
                                for_break3 : 
#line 156 "kern.ch"
#line 156 "kern.ch"
                                    break ;
                                    
#line 156 "kern.ch"
#line 156 "kern.ch"
                                    
#line 156 "kern.ch"
#line 156 "kern.ch"
                                }
#line 156 "kern.ch"
#line 156 "kern.ch"
                                
#line 156 "kern.ch"
#line 156 "kern.ch"
                            }
                            
#line 156 "kern.ch"
#line 158 "kern.ch"
                            PrintString(fileName);
#line 158 "kern.ch"
#line 158 "kern.ch"
                            PrintString(":  Number of Func : ");
#line 158 "kern.ch"
#line 158 "kern.ch"
                            PrintString(EString((int)counterFunct));
#line 158 "kern.ch"
#line 158 "kern.ch"
                            LNewLine(1);
#line 158 "kern.ch"
                            
#line 158 "kern.ch"
#line 159 "kern.ch"
                            
#line 159 "kern.ch"
#line 159 "kern.ch"
                        }
                        
#line 159 "kern.ch"
#line 162 "kern.ch"
                        
                        unsigned int   nbLine = 0 ;
                        
#line 162 "kern.ch"
#line 164 "kern.ch"
                        {
#line 164 "kern.ch"
#line 164 "kern.ch"
                            Protector<int>     protector(output, -1);
                            
#line 164 "kern.ch"
#line 165 "kern.ch"
                            StartOutputString();
#line 165 "kern.ch"
#line 166 "kern.ch"
                            decompObj.ChopTree(tree);
#line 166 "kern.ch"
#line 167 "kern.ch"
                            EString dString = EndOutputString();
                            
#line 167 "kern.ch"
#line 168 "kern.ch"
                            char    *pt = (char *)dString.c_str();
                            
#line 168 "kern.ch"
#line 169 "kern.ch"
                            bool    start = false ;
                            
#line 169 "kern.ch"
#line 170 "kern.ch"
#line 170 "kern.ch"
                            for (; *pt ; pt++ ) {
#line 170 "kern.ch"
#line 171 "kern.ch"
                                                    if ( *pt != ' ' && *pt != '\t' && *pt != '\n' ) 
#line 171 "kern.ch"
#line 172 "kern.ch"
                                                        start = false ;
#line 172 "kern.ch"
#line 173 "kern.ch"
                                                    if ( !start && *pt == '\n' ) {
#line 173 "kern.ch"
#line 174 "kern.ch"
                                                                                        nbLine++ ;
#line 174 "kern.ch"
#line 175 "kern.ch"
                                                                                        start = true ;
#line 175 "kern.ch"
#line 176 "kern.ch"
                                                                                        
#line 176 "kern.ch"
#line 176 "kern.ch"
                                                                                      }
#line 176 "kern.ch"
#line 177 "kern.ch"
                                                    
#line 177 "kern.ch"
#line 177 "kern.ch"
                                                   }
#line 177 "kern.ch"
                            
#line 177 "kern.ch"
#line 178 "kern.ch"
                            
#line 178 "kern.ch"
#line 178 "kern.ch"
                        }
                        
#line 178 "kern.ch"
#line 179 "kern.ch"
                        PrintString(fileName);
#line 179 "kern.ch"
#line 179 "kern.ch"
                        PrintString(":  Number of lines : ");
#line 179 "kern.ch"
#line 179 "kern.ch"
                        PrintString(EString((int)nbLine));
#line 179 "kern.ch"
#line 179 "kern.ch"
                        LNewLine(1);
#line 179 "kern.ch"
                        
#line 179 "kern.ch"
#line 182 "kern.ch"
                        nbLine = 0 ;
#line 182 "kern.ch"
#line 184 "kern.ch"
                        {
#line 184 "kern.ch"
#line 184 "kern.ch"
                            PTREE   nocTree = (PTREE)0 ;
#line 184 "kern.ch"
                            
#line 184 "kern.ch"
#line 185 "kern.ch"
                            Protector<int>     protector(output, -1);
                            
#line 185 "kern.ch"
#line 184 "kern.ch"
                            (nocTree=NoCommentCopyTree(tree));
#line 184 "kern.ch"
                            
#line 184 "kern.ch"
#line 186 "kern.ch"
                            StartOutputString();
#line 186 "kern.ch"
#line 187 "kern.ch"
                            decompObj.ChopTree(nocTree);
#line 187 "kern.ch"
#line 188 "kern.ch"
                            EString dString = EndOutputString();
                            
#line 188 "kern.ch"
#line 189 "kern.ch"
                            char    *pt = (char *)dString.c_str();
                            
#line 189 "kern.ch"
#line 190 "kern.ch"
                            bool    start = false ;
                            
#line 190 "kern.ch"
#line 191 "kern.ch"
#line 191 "kern.ch"
                            for (; *pt ; pt++ ) {
#line 191 "kern.ch"
#line 192 "kern.ch"
                                                    if ( *pt != ' ' && *pt != '\t' && *pt != '\n' ) 
#line 192 "kern.ch"
#line 193 "kern.ch"
                                                        start = false ;
#line 193 "kern.ch"
#line 194 "kern.ch"
                                                    if ( !start && *pt == '\n' ) {
#line 194 "kern.ch"
#line 195 "kern.ch"
                                                                                        nbLine++ ;
#line 195 "kern.ch"
#line 196 "kern.ch"
                                                                                        start = true ;
#line 196 "kern.ch"
#line 197 "kern.ch"
                                                                                        
#line 197 "kern.ch"
#line 197 "kern.ch"
                                                                                      }
#line 197 "kern.ch"
#line 198 "kern.ch"
                                                    
#line 198 "kern.ch"
#line 198 "kern.ch"
                                                   }
#line 198 "kern.ch"
                            
#line 198 "kern.ch"
#line 199 "kern.ch"
                            
#line 199 "kern.ch"
#line 199 "kern.ch"
                        }
                        
#line 199 "kern.ch"
#line 200 "kern.ch"
                        PrintString(fileName);
#line 200 "kern.ch"
#line 200 "kern.ch"
                        PrintString(":  Number of non commented lines : ");
#line 200 "kern.ch"
#line 200 "kern.ch"
                        PrintString(EString((int)nbLine));
#line 200 "kern.ch"
#line 200 "kern.ch"
                        LNewLine(1);
#line 200 "kern.ch"
                        
#line 200 "kern.ch"
#line 201 "kern.ch"
                        
#line 201 "kern.ch"
#line 201 "kern.ch"
                    } else 
#line 201 "kern.ch"
#line 202 "kern.ch"
        decompObj.ChopTree(tree);
#line 202 "kern.ch"
    
#line 202 "kern.ch"
#line 203 "kern.ch"
    MetaEnd();
#line 203 "kern.ch"
#line 204 "kern.ch"
    if ( !firstError ) 
#line 204 "kern.ch"
#line 205 "kern.ch"
        return 1 ;
    
#line 205 "kern.ch"
    else 
#line 205 "kern.ch"
#line 207 "kern.ch"
        return 0 ;
        
#line 207 "kern.ch"
    
#line 207 "kern.ch"
#line 208 "kern.ch"
    
#line 208 "kern.ch"
#line 208 "kern.ch"
}
#line 208 "kern.ch"

#line 208 "kern.ch"
#line 208 "kern.ch"
static void kern_Anchor () { int i = 1;} 
#line 208 "kern.ch"
/*Well done my boy */ 
#line 208 "kern.ch"

