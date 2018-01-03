
#line 24 "kern.ch"
/*************************************************************************/
#line 24 "kern.ch"
/*                                                                       */
#line 24 "kern.ch"
/*        Produced by Metachop version 2.0  -    1989-1995               */
#line 24 "kern.ch"
/*     Tree      Meta     Chopper      developped    by                  */
#line 24 "kern.ch"
/*                  Eric Lavillonniere                                   */
#line 24 "kern.ch"
/*                                                                       */
#line 24 "kern.ch"
/*************************************************************************/
#line 24 "kern.ch"

#line 24 "kern.ch"
#include "token.h"
#line 24 "kern.ch"
#define decomp decomp_cplus
#line 24 "kern.ch"

#line 24 "kern.ch"
#ifndef for_elem
#line 24 "kern.ch"
#line 24 "kern.ch"
#define for_elem _for_elem

#line 24 "kern.ch"
#line 24 "kern.ch"

#line 24 "kern.ch"
#endif
#ifdef INCONNU
#line 24 "kern.ch"
#line 24 "kern.ch"
PTREE   for_elem ;
#line 24 "kern.ch"

#line 24 "kern.ch"
#line 24 "kern.ch"

#line 24 "kern.ch"
#endif
#include <stdio.h>
#include <stdlib.h>
#include "deccplus.h"
#include <fcntl.h>

PPTREE  parse_cplus (int) ;

#line 34 "kern.ch"

#line 34 "kern.ch"
int main ( int argc, char **argv )
#line 34 "kern.ch"
{
#line 34 "kern.ch"
    register PPTREE _inter ;
#line 34 "kern.ch"

#line 34 "kern.ch"
#line 34 "kern.ch"
    PTREE   _Baum1 ;
#line 34 "kern.ch"
    
#line 34 "kern.ch"
#line 34 "kern.ch"
    PTREE   _Baum0 ;
#line 34 "kern.ch"
    
#line 34 "kern.ch"
#line 34 "kern.ch"
    int _nextVal ;
    
#line 34 "kern.ch"
#line 37 "kern.ch"
    PTREE   tree ;
#line 37 "kern.ch"
    
#line 37 "kern.ch"
#line 38 "kern.ch"
    char    name [50];
    
#line 38 "kern.ch"
#line 39 "kern.ch"
    char    *ptName ;
    
#line 39 "kern.ch"
#line 40 "kern.ch"
    DecompCplus decompObj ;
    
#line 40 "kern.ch"
#line 41 "kern.ch"
    bool    dumpTree = false ;
    
#line 41 "kern.ch"
#line 43 "kern.ch"
    dumpCoord = 0 ;
#line 43 "kern.ch"
#line 44 "kern.ch"
    DecompCplus::ptDecomp = &decompObj ;
#line 44 "kern.ch"
#line 45 "kern.ch"
    MetaInit((char *)0);
#line 45 "kern.ch"
#line 46 "kern.ch"
    cplus().AsLanguage();
#line 46 "kern.ch"
#line 48 "kern.ch"
    EString setFile = "c.set";
    
#line 48 "kern.ch"
#line 49 "kern.ch"
    int offset = 0 ;
    
#line 49 "kern.ch"
#line 50 "kern.ch"
    int theMargin = -1 ;
    
#line 50 "kern.ch"
#line 52 "kern.ch"
    while ( true ) {
#line 52 "kern.ch"
#line 53 "kern.ch"
                        if ( argc - offset < 2 ) {
#line 53 "kern.ch"
#line 54 "kern.ch"
                                                    help : 
#line 54 "kern.ch"
#line 55 "kern.ch"
                                                        {
#line 55 "kern.ch"
#line 56 "kern.ch"
                                                            EString message = "Bad name for your source file \n";
                                                            
#line 56 "kern.ch"
#line 57 "kern.ch"
                                                            message += "cplus [-flat] [-emacs] [-set fileName] filenames\n";
#line 57 "kern.ch"
#line 58 "kern.ch"
                                                            message += "\t-flat \t: classes indented on left\n";
#line 58 "kern.ch"
#line 59 "kern.ch"
                                                            message += "\t-emacs \t: error messages compatible with emacs\n";
#line 59 "kern.ch"
#line 60 "kern.ch"
                                                            message += "\t-dump \t: dump the tree\n";
#line 60 "kern.ch"
#line 61 "kern.ch"
                                                            message += "\t-set \t: uses this c.set file\n";
#line 61 "kern.ch"
#line 62 "kern.ch"
                                                            _write(2, message.c_str(), message.length());
#line 62 "kern.ch"
#line 63 "kern.ch"
                                                            exit(0);
#line 63 "kern.ch"
#line 64 "kern.ch"
                                                            
#line 64 "kern.ch"
#line 64 "kern.ch"
                                                        }
                                                        
#line 64 "kern.ch"
#line 65 "kern.ch"
                                                        
#line 65 "kern.ch"
#line 65 "kern.ch"
                                                    } else 
#line 65 "kern.ch"
                        {
#line 65 "kern.ch"
#line 66 "kern.ch"
                            ptName = *(argv + 1 + offset);
#line 66 "kern.ch"
#line 67 "kern.ch"
                            if ( EString("-flat") == ptName ) {
#line 67 "kern.ch"
#line 68 "kern.ch"
                                                                    decompObj.FlatFunct(true);
#line 68 "kern.ch"
#line 69 "kern.ch"
                                                                    
#line 69 "kern.ch"
#line 69 "kern.ch"
                                                                 } else 
#line 69 "kern.ch"
                            if ( EString("-v") == ptName ) {
#line 69 "kern.ch"
#line 70 "kern.ch"
                                                                goto help ;
                                                                
#line 70 "kern.ch"
#line 71 "kern.ch"
                                                                
#line 71 "kern.ch"
#line 71 "kern.ch"
                                                              } else 
#line 71 "kern.ch"
                            if ( EString("-help") == ptName ) {
#line 71 "kern.ch"
#line 72 "kern.ch"
                                                                    goto help ;
                                                                    
#line 72 "kern.ch"
#line 73 "kern.ch"
                                                                    
#line 73 "kern.ch"
#line 73 "kern.ch"
                                                                 } else 
#line 73 "kern.ch"
                            if ( EString("-emacs") == ptName ) {
#line 73 "kern.ch"
#line 74 "kern.ch"
                                                                    emacsCompatibleError = 1 ;
#line 74 "kern.ch"
#line 75 "kern.ch"
                                                                    
#line 75 "kern.ch"
#line 75 "kern.ch"
                                                                  } else 
#line 75 "kern.ch"
                            if ( EString("-set") == ptName ) {
#line 75 "kern.ch"
#line 76 "kern.ch"
                                                                    if ( argc - offset < 3 ) {
#line 76 "kern.ch"
#line 77 "kern.ch"
                                                                                                    sprintf(name, "Bad name for your source file \n");
#line 77 "kern.ch"
#line 78 "kern.ch"
                                                                                                    _write(2, name, strlen(name));
#line 78 "kern.ch"
#line 79 "kern.ch"
                                                                                                    exit(0);
#line 79 "kern.ch"
#line 80 "kern.ch"
                                                                                                    
#line 80 "kern.ch"
#line 80 "kern.ch"
                                                                                                }
#line 80 "kern.ch"
#line 81 "kern.ch"
                                                                    setFile = *(argv + 1 + ++offset);
#line 81 "kern.ch"
#line 82 "kern.ch"
                                                                    
#line 82 "kern.ch"
#line 82 "kern.ch"
                                                                } else 
#line 82 "kern.ch"
                            if ( EString("-dump") == ptName ) {
#line 82 "kern.ch"
#line 83 "kern.ch"
                                                                    dumpTree = true ;
#line 83 "kern.ch"
#line 84 "kern.ch"
                                                                    
#line 84 "kern.ch"
#line 84 "kern.ch"
                                                                 } else 
#line 84 "kern.ch"
                            if ( EString("-rightMargin") == ptName ) {
#line 84 "kern.ch"
#line 85 "kern.ch"
                                                                            if ( argc - offset >= 3 ) {
#line 85 "kern.ch"
#line 86 "kern.ch"
                                                                                                            theMargin = atoi(ptName + 1);
#line 86 "kern.ch"
#line 87 "kern.ch"
                                                                                                            offset += 1 ;
#line 87 "kern.ch"
#line 88 "kern.ch"
                                                                                                            
#line 88 "kern.ch"
#line 88 "kern.ch"
                                                                                                         }
#line 88 "kern.ch"
#line 89 "kern.ch"
                                                                            
#line 89 "kern.ch"
#line 89 "kern.ch"
                                                                        } else 
#line 89 "kern.ch"
#line 90 "kern.ch"
                                break ;
                                
#line 90 "kern.ch"
                            
#line 90 "kern.ch"
#line 91 "kern.ch"
                            offset += 1 ;
#line 91 "kern.ch"
#line 92 "kern.ch"
                            
#line 92 "kern.ch"
#line 92 "kern.ch"
                        }
                        
#line 92 "kern.ch"
#line 93 "kern.ch"
                        
#line 93 "kern.ch"
#line 93 "kern.ch"
                    }
#line 93 "kern.ch"
#line 94 "kern.ch"
    ReadIncludeS(setFile.c_str(), 1);
#line 94 "kern.ch"
#line 95 "kern.ch"
    (tree=cplus().ReadFile(ptName));
#line 95 "kern.ch"
    
#line 95 "kern.ch"
#line 96 "kern.ch"
    AddRef(tree);
#line 96 "kern.ch"
#line 97 "kern.ch"
    SwitchLang("cplus");
#line 97 "kern.ch"
#line 98 "kern.ch"
    if ( theMargin > 0 ) 
#line 98 "kern.ch"
#line 99 "kern.ch"
        rightMargin = theMargin ;
#line 99 "kern.ch"
#line 102 "kern.ch"
    {
#line 102 "kern.ch"
        PPTREE _ptTree0= (PPTREE) 0,_ptRes0= (PPTREE) 0;
#line 102 "kern.ch"
        _ptRes0 = MakeTree(cplus::NONE, 0);
#line 102 "kern.ch"
        _Baum0 = _ptRes0;
#line 102 "kern.ch"
    }
#line 102 "kern.ch"
    
#line 102 "kern.ch"
#line 102 "kern.ch"
    {
#line 102 "kern.ch"
#line 102 "kern.ch"
        ItPtree _iterator1 (tree, _Baum0) ;
        
#line 102 "kern.ch"
#line 102 "kern.ch"
        PPTREE  _for_elem ;
        
#line 102 "kern.ch"
#line 102 "kern.ch"
        _iterator1.AllSearch(1);
#line 102 "kern.ch"
#line 102 "kern.ch"
        while ( _for_elem = _iterator1++ ) {
#line 102 "kern.ch"
#line 102 "kern.ch"
            {
#line 102 "kern.ch"
#line 103 "kern.ch"
                PTREE   list = (PTREE)0 ;
#line 103 "kern.ch"
                
#line 103 "kern.ch"
#line 104 "kern.ch"
                PTREE   nil ;
#line 104 "kern.ch"
                
#line 104 "kern.ch"
#line 103 "kern.ch"
                (list=for_elem);
#line 103 "kern.ch"
                
#line 103 "kern.ch"
#line 105 "kern.ch"
                if ( !IsComm(list, POST) && !IsComm(list, PRE) ) {
#line 105 "kern.ch"
#line 106 "kern.ch"
                                                                            (list=FatherTree(list));
#line 106 "kern.ch"
                                                                            
#line 106 "kern.ch"
#line 107 "kern.ch"
                                                                            for_elem = FatherTree(list);
#line 107 "kern.ch"
#line 108 "kern.ch"
                                                                            {
#line 108 "kern.ch"
                                                                                PPTREE _ptTree0= (PPTREE) 0,_sonTree0= (PPTREE) 0 ;
#line 108 "kern.ch"
                                                                                if (_ptTree0= fathertree(list)) {
#line 108 "kern.ch"
                                                                                    int rank = ranktree(list);
#line 108 "kern.ch"
                                                                                    ReplaceTree(_ptTree0,rank,nil);
#line 108 "kern.ch"
                                                                                }
#line 108 "kern.ch"
                                                                            }
#line 108 "kern.ch"
                                                                            
#line 108 "kern.ch"
#line 109 "kern.ch"
                                                                            
#line 109 "kern.ch"
#line 109 "kern.ch"
                                                                         }
#line 109 "kern.ch"
#line 110 "kern.ch"
                
#line 110 "kern.ch"
#line 110 "kern.ch"
            }
            
#line 110 "kern.ch"
#line 110 "kern.ch"
            _iterator1.Current(_for_elem);
#line 110 "kern.ch"
#line 110 "kern.ch"
            continue ;
            
#line 110 "kern.ch"
#line 110 "kern.ch"
        for_continue1 : 
#line 110 "kern.ch"
#line 110 "kern.ch"
            _iterator1.Current(_for_elem);
#line 110 "kern.ch"
#line 110 "kern.ch"
            _iterator1.SkipSon(1);
#line 110 "kern.ch"
#line 110 "kern.ch"
            continue ;
            
#line 110 "kern.ch"
#line 110 "kern.ch"
        for_break1 : 
#line 110 "kern.ch"
#line 110 "kern.ch"
            break ;
            
#line 110 "kern.ch"
#line 110 "kern.ch"
            
#line 110 "kern.ch"
#line 110 "kern.ch"
        }
#line 110 "kern.ch"
#line 110 "kern.ch"
        
#line 110 "kern.ch"
#line 110 "kern.ch"
    }
    
#line 110 "kern.ch"
#line 112 "kern.ch"
    PTREE   stat, else_stat, if_stat ;
#line 112 "kern.ch"
    
#line 112 "kern.ch"
#line 114 "kern.ch"
    {
#line 114 "kern.ch"
        PPTREE _ptTree0= (PPTREE) 0,_ptRes0= (PPTREE) 0;
#line 114 "kern.ch"
        _ptRes0 = MakeTree(cplus::IF, 0);
#line 114 "kern.ch"
        _Baum1 = _ptRes0;
#line 114 "kern.ch"
    }
#line 114 "kern.ch"
    
#line 114 "kern.ch"
#line 114 "kern.ch"
    {
#line 114 "kern.ch"
#line 114 "kern.ch"
        ItPtree _iterator2 (tree, _Baum1) ;
        
#line 114 "kern.ch"
#line 114 "kern.ch"
        PPTREE  _for_elem ;
        
#line 114 "kern.ch"
#line 114 "kern.ch"
        _iterator2.AllSearch(1);
#line 114 "kern.ch"
#line 114 "kern.ch"
        while ( _for_elem = _iterator2++ ) {
#line 114 "kern.ch"
#line 114 "kern.ch"
            {
#line 114 "kern.ch"
#line 115 "kern.ch"
                (stat=for_elem);
#line 115 "kern.ch"
                
#line 115 "kern.ch"
#line 116 "kern.ch"
                ((_inter = (PPTREE)stat,1) && 
#line 116 "kern.ch"
                    ((if_stat=SonTree(_inter,2)),1) &&
#line 116 "kern.ch"
                    ((else_stat=SonTree(_inter,3)),1) &&
#line 116 "kern.ch"
                    1);
#line 116 "kern.ch"
                ;
#line 116 "kern.ch"
#line 117 "kern.ch"
                if ( ((_inter = (PPTREE)if_stat,1) && 
#line 117 "kern.ch"
                        (NumberTree(_inter) == cplus::STAT_VOID) &&
#line 117 "kern.ch"
                        1) ) {
#line 117 "kern.ch"
#line 118 "kern.ch"
                                {
#line 118 "kern.ch"
                                    PPTREE _ptTree0= (PPTREE) 0,_sonTree0= (PPTREE) 0 ;
#line 118 "kern.ch"
                                    {
#line 118 "kern.ch"
                                        PPTREE _ptTree1= (PPTREE) 0,_ptRes1= (PPTREE) 0;
#line 118 "kern.ch"
                                        _ptRes1 = MakeTree(cplus::COMPOUND, 1);
#line 118 "kern.ch"
                                        _ptTree0 = _ptRes1;
#line 118 "kern.ch"
                                    }
#line 118 "kern.ch"
                                    ReplaceTree(stat, 2, _ptTree0);
#line 118 "kern.ch"
                                }
#line 118 "kern.ch"
                                
#line 118 "kern.ch"
#line 119 "kern.ch"
                                
#line 119 "kern.ch"
#line 119 "kern.ch"
                             }
#line 119 "kern.ch"
#line 120 "kern.ch"
                if ( ((_inter = (PPTREE)else_stat,1) && 
#line 120 "kern.ch"
                        (NumberTree(_inter) == cplus::STAT_VOID) &&
#line 120 "kern.ch"
                        1) ) {
#line 120 "kern.ch"
#line 121 "kern.ch"
                                {
#line 121 "kern.ch"
                                    PPTREE _ptTree0= (PPTREE) 0,_sonTree0= (PPTREE) 0 ;
#line 121 "kern.ch"
                                    {
#line 121 "kern.ch"
                                        PPTREE _ptTree1= (PPTREE) 0,_ptRes1= (PPTREE) 0;
#line 121 "kern.ch"
                                        _ptRes1 = MakeTree(cplus::COMPOUND, 1);
#line 121 "kern.ch"
                                        _ptTree0 = _ptRes1;
#line 121 "kern.ch"
                                    }
#line 121 "kern.ch"
                                    ReplaceTree(stat, 3, _ptTree0);
#line 121 "kern.ch"
                                }
#line 121 "kern.ch"
                                
#line 121 "kern.ch"
#line 122 "kern.ch"
                                
#line 122 "kern.ch"
#line 122 "kern.ch"
                             }
#line 122 "kern.ch"
#line 123 "kern.ch"
                for_elem = stat [1];
#line 123 "kern.ch"
#line 124 "kern.ch"
                
#line 124 "kern.ch"
#line 124 "kern.ch"
            }
            
#line 124 "kern.ch"
#line 124 "kern.ch"
            _iterator2.Current(_for_elem);
#line 124 "kern.ch"
#line 124 "kern.ch"
            continue ;
            
#line 124 "kern.ch"
#line 124 "kern.ch"
        for_continue2 : 
#line 124 "kern.ch"
#line 124 "kern.ch"
            _iterator2.Current(_for_elem);
#line 124 "kern.ch"
#line 124 "kern.ch"
            _iterator2.SkipSon(1);
#line 124 "kern.ch"
#line 124 "kern.ch"
            continue ;
            
#line 124 "kern.ch"
#line 124 "kern.ch"
        for_break2 : 
#line 124 "kern.ch"
#line 124 "kern.ch"
            break ;
            
#line 124 "kern.ch"
#line 124 "kern.ch"
            
#line 124 "kern.ch"
#line 124 "kern.ch"
        }
#line 124 "kern.ch"
#line 124 "kern.ch"
        
#line 124 "kern.ch"
#line 124 "kern.ch"
    }
    
#line 124 "kern.ch"
#line 125 "kern.ch"
    if ( dumpTree ) {
#line 125 "kern.ch"
#line 126 "kern.ch"
                        DumpTree(tree);
#line 126 "kern.ch"
#line 127 "kern.ch"
                        LNewLine(1);
#line 127 "kern.ch"
                        
#line 127 "kern.ch"
#line 128 "kern.ch"
                        
#line 128 "kern.ch"
#line 128 "kern.ch"
                     } else 
#line 128 "kern.ch"
#line 129 "kern.ch"
        decompObj.ChopTree(tree);
#line 129 "kern.ch"
    
#line 129 "kern.ch"
#line 130 "kern.ch"
    MetaEnd();
#line 130 "kern.ch"
#line 131 "kern.ch"
    if ( !firstError ) 
#line 131 "kern.ch"
#line 132 "kern.ch"
        return 1 ;
    
#line 132 "kern.ch"
    else 
#line 132 "kern.ch"
#line 134 "kern.ch"
        return 0 ;
        
#line 134 "kern.ch"
    
#line 134 "kern.ch"
#line 135 "kern.ch"
    
#line 135 "kern.ch"
#line 135 "kern.ch"
}
#line 135 "kern.ch"

#line 135 "kern.ch"
#line 135 "kern.ch"
static void kern_Anchor () { int i = 1;} 
#line 135 "kern.ch"
/*Well done my boy */ 
#line 135 "kern.ch"

