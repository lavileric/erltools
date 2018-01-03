
#line 24 "chopper.ch"
/*************************************************************************/
#line 24 "chopper.ch"
/*                                                                       */
#line 24 "chopper.ch"
/*        Produced by Metachop version 2.0  -    1989-1995               */
#line 24 "chopper.ch"
/*     Tree      Meta     Chopper      developped    by                  */
#line 24 "chopper.ch"
/*                  Eric Lavillonniere                                   */
#line 24 "chopper.ch"
/*                                                                       */
#line 24 "chopper.ch"
/*************************************************************************/
#line 24 "chopper.ch"

#line 24 "chopper.ch"
#include "token.h"
#line 24 "chopper.ch"
#define decomp decomp_chopb
#line 24 "chopper.ch"

#line 24 "chopper.ch"
#ifndef for_elem
#line 24 "chopper.ch"
#line 24 "chopper.ch"
#define for_elem _for_elem

#line 24 "chopper.ch"
#line 24 "chopper.ch"

#line 24 "chopper.ch"
#endif
#ifdef INCONNU
#line 24 "chopper.ch"
#line 24 "chopper.ch"
PTREE   for_elem ;
#line 24 "chopper.ch"

#line 24 "chopper.ch"
#line 24 "chopper.ch"

#line 24 "chopper.ch"
#endif
#include "token.h"
#include "decchopb.h"
#include <fcntl.h>

DecompChopb *DecompChopb::ptDecomp = 0 ;
int nb_par_parse ;

#line 36 "chopper.ch"

#line 36 "chopper.ch"
int main ( int argc, char **argv )
#line 36 "chopper.ch"
{
#line 36 "chopper.ch"
    register PPTREE _inter ;
#line 36 "chopper.ch"

#line 36 "chopper.ch"
#line 36 "chopper.ch"
    PTREE   _Baum0 ;
#line 36 "chopper.ch"
    
#line 36 "chopper.ch"
#line 36 "chopper.ch"
    int _nextVal ;
    
#line 36 "chopper.ch"
#line 38 "chopper.ch"
    PTREE   tree ;
#line 38 "chopper.ch"
    
#line 38 "chopper.ch"
#line 39 "chopper.ch"
    char    name [50];
    
#line 39 "chopper.ch"
#line 40 "chopper.ch"
    char    *ptName ;
    
#line 40 "chopper.ch"
#line 41 "chopper.ch"
    DecompChopb decomp ;
    
#line 41 "chopper.ch"
#line 42 "chopper.ch"
    bool    dumpTree = false ;
    
#line 42 "chopper.ch"
#line 44 "chopper.ch"
    dumpCoord = 0 ;
#line 44 "chopper.ch"
#line 45 "chopper.ch"
    DecompChopb::ptDecomp = &decomp ;
#line 45 "chopper.ch"
#line 46 "chopper.ch"
    DecompCplus::ptDecomp = (DecompCplus *)(&decomp);
#line 46 "chopper.ch"
#line 47 "chopper.ch"
    MetaInit((char *)0);
#line 47 "chopper.ch"
#line 48 "chopper.ch"
    chopb().AsLanguage();
#line 48 "chopper.ch"
#line 50 "chopper.ch"
    EString setFile = "c.set";
    
#line 50 "chopper.ch"
#line 51 "chopper.ch"
    int offset = 0 ;
    
#line 51 "chopper.ch"
#line 53 "chopper.ch"
    while ( true ) {
#line 53 "chopper.ch"
#line 54 "chopper.ch"
                        if ( argc - offset < 2 ) {
#line 54 "chopper.ch"
#line 55 "chopper.ch"
                                                    help : 
#line 55 "chopper.ch"
#line 56 "chopper.ch"
                                                        {
#line 56 "chopper.ch"
#line 57 "chopper.ch"
                                                            EString message = "Bad name for your source file \n";
                                                            
#line 57 "chopper.ch"
#line 58 "chopper.ch"
                                                            message += "chopb [-dump] [-emacs] [-set fileName] fileNames \n";
#line 58 "chopper.ch"
#line 59 "chopper.ch"
                                                            _write(2, message.c_str(), message.length());
#line 59 "chopper.ch"
#line 60 "chopper.ch"
                                                            exit(0);
#line 60 "chopper.ch"
#line 61 "chopper.ch"
                                                            
#line 61 "chopper.ch"
#line 61 "chopper.ch"
                                                        }
                                                        
#line 61 "chopper.ch"
#line 62 "chopper.ch"
                                                        
#line 62 "chopper.ch"
#line 62 "chopper.ch"
                                                    } else 
#line 62 "chopper.ch"
                        {
#line 62 "chopper.ch"
#line 63 "chopper.ch"
                            ptName = *(argv + 1 + offset);
#line 63 "chopper.ch"
#line 64 "chopper.ch"
                            if ( EString("-v") == ptName ) {
#line 64 "chopper.ch"
#line 65 "chopper.ch"
                                                                goto help ;
                                                                
#line 65 "chopper.ch"
#line 66 "chopper.ch"
                                                                
#line 66 "chopper.ch"
#line 66 "chopper.ch"
                                                              } else 
#line 66 "chopper.ch"
                            if ( EString("-help") == ptName ) {
#line 66 "chopper.ch"
#line 67 "chopper.ch"
                                                                    goto help ;
                                                                    
#line 67 "chopper.ch"
#line 68 "chopper.ch"
                                                                    
#line 68 "chopper.ch"
#line 68 "chopper.ch"
                                                                 } else 
#line 68 "chopper.ch"
                            if ( EString("-emacs") == ptName ) {
#line 68 "chopper.ch"
#line 69 "chopper.ch"
                                                                    emacsCompatibleError = 1 ;
#line 69 "chopper.ch"
#line 70 "chopper.ch"
                                                                    
#line 70 "chopper.ch"
#line 70 "chopper.ch"
                                                                  } else 
#line 70 "chopper.ch"
                            if ( EString("-set") == ptName ) {
#line 70 "chopper.ch"
#line 71 "chopper.ch"
                                                                    if ( argc - offset < 3 ) {
#line 71 "chopper.ch"
#line 72 "chopper.ch"
                                                                                                    sprintf(name, "Bad name for your source file \n");
#line 72 "chopper.ch"
#line 73 "chopper.ch"
                                                                                                    _write(2, name, strlen(name));
#line 73 "chopper.ch"
#line 74 "chopper.ch"
                                                                                                    goto help ;
                                                                                                    
#line 74 "chopper.ch"
#line 75 "chopper.ch"
                                                                                                    
#line 75 "chopper.ch"
#line 75 "chopper.ch"
                                                                                                }
#line 75 "chopper.ch"
#line 76 "chopper.ch"
                                                                    setFile = *(argv + 1 + ++offset);
#line 76 "chopper.ch"
#line 77 "chopper.ch"
                                                                    
#line 77 "chopper.ch"
#line 77 "chopper.ch"
                                                                } else 
#line 77 "chopper.ch"
                            if ( EString("-dump") == ptName ) {
#line 77 "chopper.ch"
#line 78 "chopper.ch"
                                                                    dumpTree = true ;
#line 78 "chopper.ch"
#line 79 "chopper.ch"
                                                                    
#line 79 "chopper.ch"
#line 79 "chopper.ch"
                                                                 } else 
#line 79 "chopper.ch"
#line 80 "chopper.ch"
                                break ;
                                
#line 80 "chopper.ch"
                            
#line 80 "chopper.ch"
#line 81 "chopper.ch"
                            offset += 1 ;
#line 81 "chopper.ch"
#line 82 "chopper.ch"
                            
#line 82 "chopper.ch"
#line 82 "chopper.ch"
                        }
                        
#line 82 "chopper.ch"
#line 83 "chopper.ch"
                        
#line 83 "chopper.ch"
#line 83 "chopper.ch"
                    }
#line 83 "chopper.ch"
#line 84 "chopper.ch"
    ReadIncludeS(setFile.c_str(), 1);
#line 84 "chopper.ch"
#line 85 "chopper.ch"
    (tree=chopb().ReadFile(ptName));
#line 85 "chopper.ch"
    
#line 85 "chopper.ch"
#line 86 "chopper.ch"
    AddRef(tree);
#line 86 "chopper.ch"
#line 88 "chopper.ch"
    PTREE   newTree ;
#line 88 "chopper.ch"
    
#line 88 "chopper.ch"
#line 89 "chopper.ch"
    PTREE   rep ;
#line 89 "chopper.ch"
    
#line 89 "chopper.ch"
#line 90 "chopper.ch"
    PTREE   stat, else_stat, if_stat ;
#line 90 "chopper.ch"
    
#line 90 "chopper.ch"
#line 92 "chopper.ch"
    {
#line 92 "chopper.ch"
        PPTREE _ptTree0= (PPTREE) 0,_ptRes0= (PPTREE) 0;
#line 92 "chopper.ch"
        _ptRes0 = MakeTree(chopb::COMPOUND, 1);
#line 92 "chopper.ch"
        newTree = _ptRes0;
#line 92 "chopper.ch"
    }
#line 92 "chopper.ch"
    
#line 92 "chopper.ch"
#line 93 "chopper.ch"
    {
#line 93 "chopper.ch"
        PPTREE _ptTree0= (PPTREE) 0,_ptRes0= (PPTREE) 0;
#line 93 "chopper.ch"
        _ptRes0 = MakeTree(chopb::IF, 0);
#line 93 "chopper.ch"
        _Baum0 = _ptRes0;
#line 93 "chopper.ch"
    }
#line 93 "chopper.ch"
    
#line 93 "chopper.ch"
#line 93 "chopper.ch"
    {
#line 93 "chopper.ch"
#line 93 "chopper.ch"
        ItPtree _iterator1 (tree, _Baum0) ;
        
#line 93 "chopper.ch"
#line 93 "chopper.ch"
        PPTREE  _for_elem ;
        
#line 93 "chopper.ch"
#line 93 "chopper.ch"
        _iterator1.AllSearch(1);
#line 93 "chopper.ch"
#line 93 "chopper.ch"
        while ( _for_elem = _iterator1++ ) {
#line 93 "chopper.ch"
#line 93 "chopper.ch"
            {
#line 93 "chopper.ch"
#line 94 "chopper.ch"
                (stat=for_elem);
#line 94 "chopper.ch"
                
#line 94 "chopper.ch"
#line 95 "chopper.ch"
                ((_inter = (PPTREE)stat,1) && 
#line 95 "chopper.ch"
                    ((if_stat=SonTree(_inter,2)),1) &&
#line 95 "chopper.ch"
                    ((else_stat=SonTree(_inter,3)),1) &&
#line 95 "chopper.ch"
                    1);
#line 95 "chopper.ch"
                ;
#line 95 "chopper.ch"
#line 96 "chopper.ch"
                if ( ((_inter = (PPTREE)if_stat,1) && 
#line 96 "chopper.ch"
                        (NumberTree(_inter) == chopb::STAT_VOID) &&
#line 96 "chopper.ch"
                        1) ) {
#line 96 "chopper.ch"
#line 97 "chopper.ch"
                                (rep=copytree(newTree));
#line 97 "chopper.ch"
                                
#line 97 "chopper.ch"
#line 98 "chopper.ch"
                                {
#line 98 "chopper.ch"
                                    PPTREE _ptTree0= (PPTREE) 0,_sonTree0= (PPTREE) 0 ;
#line 98 "chopper.ch"
                                    if (_ptTree0= fathertree(if_stat)) {
#line 98 "chopper.ch"
                                        int rank = ranktree(if_stat);
#line 98 "chopper.ch"
                                        ReplaceTree(_ptTree0,rank,rep);
#line 98 "chopper.ch"
                                    }
#line 98 "chopper.ch"
                                }
#line 98 "chopper.ch"
                                
#line 98 "chopper.ch"
#line 99 "chopper.ch"
                                
#line 99 "chopper.ch"
#line 99 "chopper.ch"
                             }
#line 99 "chopper.ch"
#line 100 "chopper.ch"
                if ( ((_inter = (PPTREE)else_stat,1) && 
#line 100 "chopper.ch"
                        (NumberTree(_inter) == chopb::STAT_VOID) &&
#line 100 "chopper.ch"
                        1) ) {
#line 100 "chopper.ch"
#line 101 "chopper.ch"
                                (rep=copytree(newTree));
#line 101 "chopper.ch"
                                
#line 101 "chopper.ch"
#line 102 "chopper.ch"
                                {
#line 102 "chopper.ch"
                                    PPTREE _ptTree0= (PPTREE) 0,_sonTree0= (PPTREE) 0 ;
#line 102 "chopper.ch"
                                    if (_ptTree0= fathertree(else_stat)) {
#line 102 "chopper.ch"
                                        int rank = ranktree(else_stat);
#line 102 "chopper.ch"
                                        ReplaceTree(_ptTree0,rank,rep);
#line 102 "chopper.ch"
                                    }
#line 102 "chopper.ch"
                                }
#line 102 "chopper.ch"
                                
#line 102 "chopper.ch"
#line 103 "chopper.ch"
                                
#line 103 "chopper.ch"
#line 103 "chopper.ch"
                             }
#line 103 "chopper.ch"
#line 104 "chopper.ch"
                for_elem = stat [1];
#line 104 "chopper.ch"
#line 105 "chopper.ch"
                
#line 105 "chopper.ch"
#line 105 "chopper.ch"
            }
            
#line 105 "chopper.ch"
#line 105 "chopper.ch"
            _iterator1.Current(_for_elem);
#line 105 "chopper.ch"
#line 105 "chopper.ch"
            continue ;
            
#line 105 "chopper.ch"
#line 105 "chopper.ch"
        for_continue1 : 
#line 105 "chopper.ch"
#line 105 "chopper.ch"
            _iterator1.Current(_for_elem);
#line 105 "chopper.ch"
#line 105 "chopper.ch"
            _iterator1.SkipSon(1);
#line 105 "chopper.ch"
#line 105 "chopper.ch"
            continue ;
            
#line 105 "chopper.ch"
#line 105 "chopper.ch"
        for_break1 : 
#line 105 "chopper.ch"
#line 105 "chopper.ch"
            break ;
            
#line 105 "chopper.ch"
#line 105 "chopper.ch"
            
#line 105 "chopper.ch"
#line 105 "chopper.ch"
        }
#line 105 "chopper.ch"
#line 105 "chopper.ch"
        
#line 105 "chopper.ch"
#line 105 "chopper.ch"
    }
    
#line 105 "chopper.ch"
#line 106 "chopper.ch"
    if ( dumpTree ) {
#line 106 "chopper.ch"
#line 107 "chopper.ch"
                        DumpTree(tree);
#line 107 "chopper.ch"
#line 108 "chopper.ch"
                        LNewLine(1);
#line 108 "chopper.ch"
                        
#line 108 "chopper.ch"
#line 109 "chopper.ch"
                        
#line 109 "chopper.ch"
#line 109 "chopper.ch"
                     } else 
#line 109 "chopper.ch"
#line 110 "chopper.ch"
        decomp.ChopTree(tree);
#line 110 "chopper.ch"
    
#line 110 "chopper.ch"
#line 111 "chopper.ch"
    MetaEnd();
#line 111 "chopper.ch"
#line 112 "chopper.ch"
    if ( !firstError ) 
#line 112 "chopper.ch"
#line 113 "chopper.ch"
        return 1 ;
    
#line 113 "chopper.ch"
    else 
#line 113 "chopper.ch"
#line 115 "chopper.ch"
        return 0 ;
        
#line 115 "chopper.ch"
    
#line 115 "chopper.ch"
#line 116 "chopper.ch"
    return 0 ;
    
#line 116 "chopper.ch"
#line 117 "chopper.ch"
    
#line 117 "chopper.ch"
#line 117 "chopper.ch"
}
#line 117 "chopper.ch"

#line 117 "chopper.ch"
#line 117 "chopper.ch"
static void chopper_Anchor () { int i = 1;} 
#line 117 "chopper.ch"
/*Well done my boy */ 
#line 117 "chopper.ch"

