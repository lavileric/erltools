
#line 29 "chopper.ch"
/*************************************************************************/
#line 29 "chopper.ch"
/*                                                                       */
#line 29 "chopper.ch"
/*        Produced by Metachop version 2.0  -    1989-1995               */
#line 29 "chopper.ch"
/*     Tree      Meta     Chopper      developped    by                  */
#line 29 "chopper.ch"
/*                  Eric Lavillonniere                                   */
#line 29 "chopper.ch"
/*                                                                       */
#line 29 "chopper.ch"
/*************************************************************************/
#line 29 "chopper.ch"

#line 29 "chopper.ch"
#include "token.h"
#line 29 "chopper.ch"
#define decomp decomp_chopb
#line 29 "chopper.ch"

#line 29 "chopper.ch"
#ifndef for_elem
#line 29 "chopper.ch"
#line 29 "chopper.ch"
#define for_elem _for_elem

#line 29 "chopper.ch"
#line 29 "chopper.ch"

#line 29 "chopper.ch"
#endif
#ifdef INCONNU
#line 29 "chopper.ch"
#line 29 "chopper.ch"
PTREE   for_elem ;
#line 29 "chopper.ch"

#line 29 "chopper.ch"
#line 29 "chopper.ch"

#line 29 "chopper.ch"
#endif
#include "token.h"
#include "decchopb.h"
#include <fcntl.h>
#include "Protector.h"

DecompChopb *DecompChopb::ptDecomp = 0 ;

int nb_par_parse ;

#line 51 "chopper.ch"

#line 51 "chopper.ch"
int main ( int argc, char **argv )
#line 51 "chopper.ch"
{
#line 51 "chopper.ch"
    register PPTREE _inter ;
#line 51 "chopper.ch"

#line 51 "chopper.ch"
#line 51 "chopper.ch"
    PTREE   _Baum0 ;
#line 51 "chopper.ch"
    
#line 51 "chopper.ch"
#line 51 "chopper.ch"
    int _nextVal ;
    
#line 51 "chopper.ch"
#line 54 "chopper.ch"
    
    PTREE   tree ;
#line 54 "chopper.ch"
    
#line 54 "chopper.ch"
#line 55 "chopper.ch"
    char    name [50];
    
#line 55 "chopper.ch"
#line 56 "chopper.ch"
    char    *ptName ;
    
#line 56 "chopper.ch"
#line 57 "chopper.ch"
    DecompChopb decomp ;
    
#line 57 "chopper.ch"
#line 58 "chopper.ch"
    bool    dumpTree = false ;
    
#line 58 "chopper.ch"
#line 59 "chopper.ch"
    bool    counter = false ;
    
#line 59 "chopper.ch"
#line 61 "chopper.ch"
    dumpCoord = 0 ;
#line 61 "chopper.ch"
#line 62 "chopper.ch"
    DecompChopb::ptDecomp = &decomp ;
#line 62 "chopper.ch"
#line 63 "chopper.ch"
    DecompCplus::ptDecomp = (DecompCplus *)(&decomp);
#line 63 "chopper.ch"
#line 64 "chopper.ch"
    MetaInit((char *)0);
#line 64 "chopper.ch"
#line 65 "chopper.ch"
    chopb().AsLanguage();
#line 65 "chopper.ch"
#line 68 "chopper.ch"
    erltoolsStorageKeeper = true ;
#line 68 "chopper.ch"
#line 69 "chopper.ch"
    SetSingleThread(true);
#line 69 "chopper.ch"
#line 71 "chopper.ch"
    EString setFile = "c.set";
    
#line 71 "chopper.ch"
#line 72 "chopper.ch"
    int offset = 0 ;
    
#line 72 "chopper.ch"
#line 74 "chopper.ch"
    while ( true ) {
#line 74 "chopper.ch"
#line 75 "chopper.ch"
                        if ( argc - offset < 2 ) {
#line 75 "chopper.ch"
#line 76 "chopper.ch"
                                                    help : 
#line 76 "chopper.ch"
#line 77 "chopper.ch"
                                                        {
#line 77 "chopper.ch"
#line 78 "chopper.ch"
                                                            EString message = "Bad name for your source file \n";
                                                            
#line 78 "chopper.ch"
#line 79 "chopper.ch"
                                                            message += "chopb [-dump] [-emacs] [-set fileName] fileNames \n";
#line 79 "chopper.ch"
#line 80 "chopper.ch"
                                                            _write(2, message.c_str(), message.length());
#line 80 "chopper.ch"
#line 81 "chopper.ch"
                                                            exit(0);
#line 81 "chopper.ch"
#line 82 "chopper.ch"
                                                            
#line 82 "chopper.ch"
#line 82 "chopper.ch"
                                                        }
                                                        
#line 82 "chopper.ch"
#line 83 "chopper.ch"
                                                        
#line 83 "chopper.ch"
#line 83 "chopper.ch"
                                                    } else 
#line 83 "chopper.ch"
                        {
#line 83 "chopper.ch"
#line 84 "chopper.ch"
                            ptName = *(argv + 1 + offset);
#line 84 "chopper.ch"
#line 85 "chopper.ch"
                            if ( EString("-v") == ptName ) {
#line 85 "chopper.ch"
#line 86 "chopper.ch"
                                                                goto help ;
                                                                
#line 86 "chopper.ch"
#line 87 "chopper.ch"
                                                                
#line 87 "chopper.ch"
#line 87 "chopper.ch"
                                                              } else 
#line 87 "chopper.ch"
                            if ( EString("-help") == ptName ) {
#line 87 "chopper.ch"
#line 88 "chopper.ch"
                                                                    goto help ;
                                                                    
#line 88 "chopper.ch"
#line 89 "chopper.ch"
                                                                    
#line 89 "chopper.ch"
#line 89 "chopper.ch"
                                                                 } else 
#line 89 "chopper.ch"
                            if ( EString("-emacs") == ptName ) {
#line 89 "chopper.ch"
#line 90 "chopper.ch"
                                                                    emacsCompatibleError = 1 ;
#line 90 "chopper.ch"
#line 91 "chopper.ch"
                                                                    
#line 91 "chopper.ch"
#line 91 "chopper.ch"
                                                                  } else 
#line 91 "chopper.ch"
                            if ( EString("-tableString") == ptName ) {
#line 91 "chopper.ch"
#line 92 "chopper.ch"
                                                                            symbString = true ;
#line 92 "chopper.ch"
#line 93 "chopper.ch"
                                                                            
#line 93 "chopper.ch"
#line 93 "chopper.ch"
                                                                        } else 
#line 93 "chopper.ch"
                            if ( EString("-set") == ptName ) {
#line 93 "chopper.ch"
#line 94 "chopper.ch"
                                                                    if ( argc - offset < 3 ) {
#line 94 "chopper.ch"
#line 95 "chopper.ch"
                                                                                                    sprintf(name, "Bad name for your source file \n");
#line 95 "chopper.ch"
#line 96 "chopper.ch"
                                                                                                    _write(2, name, strlen(name));
#line 96 "chopper.ch"
#line 97 "chopper.ch"
                                                                                                    goto help ;
                                                                                                    
#line 97 "chopper.ch"
#line 98 "chopper.ch"
                                                                                                    
#line 98 "chopper.ch"
#line 98 "chopper.ch"
                                                                                                }
#line 98 "chopper.ch"
#line 99 "chopper.ch"
                                                                    setFile = *(argv + 1 + ++offset);
#line 99 "chopper.ch"
#line 100 "chopper.ch"
                                                                    
#line 100 "chopper.ch"
#line 100 "chopper.ch"
                                                                } else 
#line 100 "chopper.ch"
                            if ( EString("-dump") == ptName ) {
#line 100 "chopper.ch"
#line 101 "chopper.ch"
                                                                    dumpTree = true ;
#line 101 "chopper.ch"
#line 102 "chopper.ch"
                                                                    
#line 102 "chopper.ch"
#line 102 "chopper.ch"
                                                                 } else 
#line 102 "chopper.ch"
                            if ( EString("-count") == ptName ) {
#line 102 "chopper.ch"
#line 103 "chopper.ch"
                                                                    counter = true ;
#line 103 "chopper.ch"
#line 104 "chopper.ch"
                                                                    
#line 104 "chopper.ch"
#line 104 "chopper.ch"
                                                                  } else 
#line 104 "chopper.ch"
#line 105 "chopper.ch"
                                break ;
                                
#line 105 "chopper.ch"
                            
#line 105 "chopper.ch"
#line 106 "chopper.ch"
                            offset += 1 ;
#line 106 "chopper.ch"
#line 107 "chopper.ch"
                            
#line 107 "chopper.ch"
#line 107 "chopper.ch"
                        }
                        
#line 107 "chopper.ch"
#line 108 "chopper.ch"
                        
#line 108 "chopper.ch"
#line 108 "chopper.ch"
                    }
#line 108 "chopper.ch"
#line 109 "chopper.ch"
    ReadIncludeS(setFile.c_str(), 1);
#line 109 "chopper.ch"
#line 110 "chopper.ch"
    (tree=chopb().ReadFile(ptName));
#line 110 "chopper.ch"
    
#line 110 "chopper.ch"
#line 111 "chopper.ch"
    AddRef(tree);
#line 111 "chopper.ch"
#line 113 "chopper.ch"
    PTREE   newTree ;
#line 113 "chopper.ch"
    
#line 113 "chopper.ch"
#line 114 "chopper.ch"
    PTREE   rep ;
#line 114 "chopper.ch"
    
#line 114 "chopper.ch"
#line 115 "chopper.ch"
    PTREE   stat, else_stat, if_stat ;
#line 115 "chopper.ch"
    
#line 115 "chopper.ch"
#line 117 "chopper.ch"
    {
#line 117 "chopper.ch"
        PPTREE _ptTree0= (PPTREE) 0,_ptRes0= (PPTREE) 0;
#line 117 "chopper.ch"
        _ptRes0 = MakeTree(chopb::COMPOUND, 1);
#line 117 "chopper.ch"
        newTree = _ptRes0;
#line 117 "chopper.ch"
    }
#line 117 "chopper.ch"
    
#line 117 "chopper.ch"
#line 118 "chopper.ch"
    {
#line 118 "chopper.ch"
        PPTREE _ptTree0= (PPTREE) 0,_ptRes0= (PPTREE) 0;
#line 118 "chopper.ch"
        _ptRes0 = MakeTree(chopb::IF, 0);
#line 118 "chopper.ch"
        _Baum0 = _ptRes0;
#line 118 "chopper.ch"
    }
#line 118 "chopper.ch"
    
#line 118 "chopper.ch"
#line 118 "chopper.ch"
    {
#line 118 "chopper.ch"
#line 118 "chopper.ch"
        ItPtree _iterator1 (tree, _Baum0) ;
        
#line 118 "chopper.ch"
#line 118 "chopper.ch"
        PTREE   _for_elem ;
#line 118 "chopper.ch"
        
#line 118 "chopper.ch"
#line 118 "chopper.ch"
        _iterator1.AllSearch(1);
#line 118 "chopper.ch"
#line 118 "chopper.ch"
        while ( (_for_elem=_iterator1++) ) {
#line 118 "chopper.ch"
#line 118 "chopper.ch"
            {
#line 118 "chopper.ch"
#line 119 "chopper.ch"
                (stat=for_elem);
#line 119 "chopper.ch"
                
#line 119 "chopper.ch"
#line 120 "chopper.ch"
                ((_inter = (PPTREE)stat,1) && 
#line 120 "chopper.ch"
                    ((if_stat=SonTree(_inter,2)),1) &&
#line 120 "chopper.ch"
                    ((else_stat=SonTree(_inter,3)),1) &&
#line 120 "chopper.ch"
                    1);
#line 120 "chopper.ch"
                ;
#line 120 "chopper.ch"
#line 121 "chopper.ch"
                if ( ((_inter = (PPTREE)if_stat,1) && 
#line 121 "chopper.ch"
                        (NumberTree(_inter) == chopb::STAT_VOID) &&
#line 121 "chopper.ch"
                        1) ) {
#line 121 "chopper.ch"
#line 122 "chopper.ch"
                                (rep=copytree(newTree));
#line 122 "chopper.ch"
                                
#line 122 "chopper.ch"
#line 123 "chopper.ch"
                                {
#line 123 "chopper.ch"
                                    PPTREE _ptTree0= (PPTREE) 0,_sonTree0= (PPTREE) 0 ;
#line 123 "chopper.ch"
                                    if (_ptTree0= fathertree(if_stat)) {
#line 123 "chopper.ch"
                                        int rank = ranktree(if_stat);
#line 123 "chopper.ch"
                                        ReplaceTree(_ptTree0,rank,rep);
#line 123 "chopper.ch"
                                    }
#line 123 "chopper.ch"
                                }
#line 123 "chopper.ch"
                                
#line 123 "chopper.ch"
#line 124 "chopper.ch"
                                
#line 124 "chopper.ch"
#line 124 "chopper.ch"
                             }
#line 124 "chopper.ch"
#line 125 "chopper.ch"
                if ( ((_inter = (PPTREE)else_stat,1) && 
#line 125 "chopper.ch"
                        (NumberTree(_inter) == chopb::STAT_VOID) &&
#line 125 "chopper.ch"
                        1) ) {
#line 125 "chopper.ch"
#line 126 "chopper.ch"
                                (rep=copytree(newTree));
#line 126 "chopper.ch"
                                
#line 126 "chopper.ch"
#line 127 "chopper.ch"
                                {
#line 127 "chopper.ch"
                                    PPTREE _ptTree0= (PPTREE) 0,_sonTree0= (PPTREE) 0 ;
#line 127 "chopper.ch"
                                    if (_ptTree0= fathertree(else_stat)) {
#line 127 "chopper.ch"
                                        int rank = ranktree(else_stat);
#line 127 "chopper.ch"
                                        ReplaceTree(_ptTree0,rank,rep);
#line 127 "chopper.ch"
                                    }
#line 127 "chopper.ch"
                                }
#line 127 "chopper.ch"
                                
#line 127 "chopper.ch"
#line 128 "chopper.ch"
                                
#line 128 "chopper.ch"
#line 128 "chopper.ch"
                             }
#line 128 "chopper.ch"
#line 129 "chopper.ch"
                for_elem = stat [1];
#line 129 "chopper.ch"
#line 130 "chopper.ch"
                
#line 130 "chopper.ch"
#line 130 "chopper.ch"
            }
            
#line 130 "chopper.ch"
#line 130 "chopper.ch"
            _iterator1.Current(_for_elem);
#line 130 "chopper.ch"
#line 130 "chopper.ch"
            continue ;
            
#line 130 "chopper.ch"
#line 130 "chopper.ch"
        for_continue1 : 
#line 130 "chopper.ch"
#line 130 "chopper.ch"
            _iterator1.Current(_for_elem);
#line 130 "chopper.ch"
#line 130 "chopper.ch"
            _iterator1.SkipSon(1);
#line 130 "chopper.ch"
#line 130 "chopper.ch"
            continue ;
            
#line 130 "chopper.ch"
#line 130 "chopper.ch"
        for_break1 : 
#line 130 "chopper.ch"
#line 130 "chopper.ch"
            break ;
            
#line 130 "chopper.ch"
#line 130 "chopper.ch"
            
#line 130 "chopper.ch"
#line 130 "chopper.ch"
        }
#line 130 "chopper.ch"
#line 130 "chopper.ch"
        
#line 130 "chopper.ch"
#line 130 "chopper.ch"
    }
    
#line 130 "chopper.ch"
#line 131 "chopper.ch"
    if ( dumpTree ) {
#line 131 "chopper.ch"
#line 132 "chopper.ch"
                        DumpTree(tree);
#line 132 "chopper.ch"
#line 133 "chopper.ch"
                        LNewLine(1);
#line 133 "chopper.ch"
                        
#line 133 "chopper.ch"
#line 134 "chopper.ch"
                        
#line 134 "chopper.ch"
#line 134 "chopper.ch"
                     } else 
#line 134 "chopper.ch"
    if ( counter ) {
#line 134 "chopper.ch"
#line 137 "chopper.ch"
                        unsigned int   counterFunct = 0 ;
                        
#line 137 "chopper.ch"
#line 138 "chopper.ch"
                        EString fileName (ptName) ;
                        
#line 138 "chopper.ch"
#line 140 "chopper.ch"
                        {
#line 140 "chopper.ch"
#line 140 "chopper.ch"
                            PTREE   _Baum1 ;
#line 140 "chopper.ch"
                            
#line 140 "chopper.ch"
#line 140 "chopper.ch"
                            {
#line 140 "chopper.ch"
                                PPTREE _ptTree0= (PPTREE) 0,_ptRes0= (PPTREE) 0;
#line 140 "chopper.ch"
                                _ptRes0 = MakeTree(chopb::FUNC, 0);
#line 140 "chopper.ch"
                                _Baum1 = _ptRes0;
#line 140 "chopper.ch"
                            }
#line 140 "chopper.ch"
                            
#line 140 "chopper.ch"
#line 140 "chopper.ch"
                            {
#line 140 "chopper.ch"
#line 140 "chopper.ch"
                                ItPtree _iterator2 (tree, _Baum1) ;
                                
#line 140 "chopper.ch"
#line 140 "chopper.ch"
                                PTREE   _for_elem ;
#line 140 "chopper.ch"
                                
#line 140 "chopper.ch"
#line 140 "chopper.ch"
                                _iterator2.AllSearch(1);
#line 140 "chopper.ch"
#line 141 "chopper.ch"
                                while ( (_for_elem=_iterator2++) ) {
#line 141 "chopper.ch"
#line 141 "chopper.ch"
                                    counterFunct++ ;
#line 141 "chopper.ch"
#line 141 "chopper.ch"
                                    _iterator2.Current(_for_elem);
#line 141 "chopper.ch"
#line 141 "chopper.ch"
                                    continue ;
                                    
#line 141 "chopper.ch"
#line 141 "chopper.ch"
                                for_continue2 : 
#line 141 "chopper.ch"
#line 141 "chopper.ch"
                                    _iterator2.Current(_for_elem);
#line 141 "chopper.ch"
#line 141 "chopper.ch"
                                    _iterator2.SkipSon(1);
#line 141 "chopper.ch"
#line 141 "chopper.ch"
                                    continue ;
                                    
#line 141 "chopper.ch"
#line 141 "chopper.ch"
                                for_break2 : 
#line 141 "chopper.ch"
#line 141 "chopper.ch"
                                    break ;
                                    
#line 141 "chopper.ch"
#line 141 "chopper.ch"
                                    
#line 141 "chopper.ch"
#line 141 "chopper.ch"
                                }
#line 141 "chopper.ch"
#line 141 "chopper.ch"
                                
#line 141 "chopper.ch"
#line 141 "chopper.ch"
                            }
                            
#line 141 "chopper.ch"
#line 143 "chopper.ch"
                            PrintString(fileName);
#line 143 "chopper.ch"
#line 143 "chopper.ch"
                            PrintString(":  Number of Func : ");
#line 143 "chopper.ch"
#line 143 "chopper.ch"
                            PrintString(EString((int)counterFunct));
#line 143 "chopper.ch"
#line 143 "chopper.ch"
                            LNewLine(1);
#line 143 "chopper.ch"
                            
#line 143 "chopper.ch"
#line 144 "chopper.ch"
                            
#line 144 "chopper.ch"
#line 144 "chopper.ch"
                        }
                        
#line 144 "chopper.ch"
#line 147 "chopper.ch"
                        
                        unsigned int   nbLine = 0 ;
                        
#line 147 "chopper.ch"
#line 149 "chopper.ch"
                        {
#line 149 "chopper.ch"
#line 149 "chopper.ch"
                            Protector<int>     protector(output, -1);
                            
#line 149 "chopper.ch"
#line 150 "chopper.ch"
                            StartOutputString();
#line 150 "chopper.ch"
#line 151 "chopper.ch"
                            decomp.ChopTree(tree);
#line 151 "chopper.ch"
#line 152 "chopper.ch"
                            EString dString = EndOutputString();
                            
#line 152 "chopper.ch"
#line 153 "chopper.ch"
                            char    *pt = (char *)dString.c_str();
                            
#line 153 "chopper.ch"
#line 154 "chopper.ch"
                            bool    start = false ;
                            
#line 154 "chopper.ch"
#line 155 "chopper.ch"
#line 155 "chopper.ch"
                            for (; *pt ; pt++ ) {
#line 155 "chopper.ch"
#line 156 "chopper.ch"
                                                    if ( *pt != ' ' && *pt != '\t' && *pt != '\n' ) 
#line 156 "chopper.ch"
#line 157 "chopper.ch"
                                                        start = false ;
#line 157 "chopper.ch"
#line 158 "chopper.ch"
                                                    if ( !start && *pt == '\n' ) {
#line 158 "chopper.ch"
#line 159 "chopper.ch"
                                                                                        nbLine++ ;
#line 159 "chopper.ch"
#line 160 "chopper.ch"
                                                                                        start = true ;
#line 160 "chopper.ch"
#line 161 "chopper.ch"
                                                                                        
#line 161 "chopper.ch"
#line 161 "chopper.ch"
                                                                                      }
#line 161 "chopper.ch"
#line 162 "chopper.ch"
                                                    
#line 162 "chopper.ch"
#line 162 "chopper.ch"
                                                   }
#line 162 "chopper.ch"
                            
#line 162 "chopper.ch"
#line 163 "chopper.ch"
                            
#line 163 "chopper.ch"
#line 163 "chopper.ch"
                        }
                        
#line 163 "chopper.ch"
#line 164 "chopper.ch"
                        PrintString(fileName);
#line 164 "chopper.ch"
#line 164 "chopper.ch"
                        PrintString(":  Number of lines : ");
#line 164 "chopper.ch"
#line 164 "chopper.ch"
                        PrintString(EString((int)nbLine));
#line 164 "chopper.ch"
#line 164 "chopper.ch"
                        LNewLine(1);
#line 164 "chopper.ch"
                        
#line 164 "chopper.ch"
#line 167 "chopper.ch"
                        nbLine = 0 ;
#line 167 "chopper.ch"
#line 169 "chopper.ch"
                        {
#line 169 "chopper.ch"
#line 169 "chopper.ch"
                            PTREE   nocTree = (PTREE)0 ;
#line 169 "chopper.ch"
                            
#line 169 "chopper.ch"
#line 170 "chopper.ch"
                            Protector<int>     protector(output, -1);
                            
#line 170 "chopper.ch"
#line 169 "chopper.ch"
                            (nocTree=NoCommentCopyTree(tree));
#line 169 "chopper.ch"
                            
#line 169 "chopper.ch"
#line 171 "chopper.ch"
                            StartOutputString();
#line 171 "chopper.ch"
#line 172 "chopper.ch"
                            decomp.ChopTree(nocTree);
#line 172 "chopper.ch"
#line 173 "chopper.ch"
                            EString dString = EndOutputString();
                            
#line 173 "chopper.ch"
#line 174 "chopper.ch"
                            char    *pt = (char *)dString.c_str();
                            
#line 174 "chopper.ch"
#line 175 "chopper.ch"
                            bool    start = false ;
                            
#line 175 "chopper.ch"
#line 176 "chopper.ch"
#line 176 "chopper.ch"
                            for (; *pt ; pt++ ) {
#line 176 "chopper.ch"
#line 177 "chopper.ch"
                                                    if ( *pt != ' ' && *pt != '\t' && *pt != '\n' ) 
#line 177 "chopper.ch"
#line 178 "chopper.ch"
                                                        start = false ;
#line 178 "chopper.ch"
#line 179 "chopper.ch"
                                                    if ( !start && *pt == '\n' ) {
#line 179 "chopper.ch"
#line 180 "chopper.ch"
                                                                                        nbLine++ ;
#line 180 "chopper.ch"
#line 181 "chopper.ch"
                                                                                        start = true ;
#line 181 "chopper.ch"
#line 182 "chopper.ch"
                                                                                        
#line 182 "chopper.ch"
#line 182 "chopper.ch"
                                                                                      }
#line 182 "chopper.ch"
#line 183 "chopper.ch"
                                                    
#line 183 "chopper.ch"
#line 183 "chopper.ch"
                                                   }
#line 183 "chopper.ch"
                            
#line 183 "chopper.ch"
#line 184 "chopper.ch"
                            
#line 184 "chopper.ch"
#line 184 "chopper.ch"
                        }
                        
#line 184 "chopper.ch"
#line 185 "chopper.ch"
                        PrintString(fileName);
#line 185 "chopper.ch"
#line 185 "chopper.ch"
                        PrintString(":  Number of non commented lines : ");
#line 185 "chopper.ch"
#line 185 "chopper.ch"
                        PrintString(EString((int)nbLine));
#line 185 "chopper.ch"
#line 185 "chopper.ch"
                        LNewLine(1);
#line 185 "chopper.ch"
                        
#line 185 "chopper.ch"
#line 186 "chopper.ch"
                        
#line 186 "chopper.ch"
#line 186 "chopper.ch"
                    } else 
#line 186 "chopper.ch"
#line 187 "chopper.ch"
        decomp.ChopTree(tree);
#line 187 "chopper.ch"
    
#line 187 "chopper.ch"
#line 188 "chopper.ch"
    MetaEnd();
#line 188 "chopper.ch"
#line 189 "chopper.ch"
    if ( !firstError ) 
#line 189 "chopper.ch"
#line 190 "chopper.ch"
        return 1 ;
    
#line 190 "chopper.ch"
    else 
#line 190 "chopper.ch"
#line 192 "chopper.ch"
        return 0 ;
        
#line 192 "chopper.ch"
    
#line 192 "chopper.ch"
#line 193 "chopper.ch"
    return 0 ;
    
#line 193 "chopper.ch"
#line 194 "chopper.ch"
    
#line 194 "chopper.ch"
#line 194 "chopper.ch"
}
#line 194 "chopper.ch"

#line 194 "chopper.ch"
#line 194 "chopper.ch"
static void chopper_Anchor () { int i = 1;} 
#line 194 "chopper.ch"
/*Well done my boy */ 
#line 194 "chopper.ch"
