
#line 5 "decomp.ch"
/*************************************************************************/
#line 5 "decomp.ch"
/*                                                                       */
#line 5 "decomp.ch"
/*        Produced by Metachop version 2.0  -    1989-1995               */
#line 5 "decomp.ch"
/*     Tree      Meta     Chopper      developped    by                  */
#line 5 "decomp.ch"
/*                  Eric Lavillonniere                                   */
#line 5 "decomp.ch"
/*                                                                       */
#line 5 "decomp.ch"
/*************************************************************************/
#line 5 "decomp.ch"

#line 5 "decomp.ch"
#include "token.h"
#line 5 "decomp.ch"
#define decomp decomp_chopb
#line 5 "decomp.ch"

#line 5 "decomp.ch"
#ifndef for_elem
#line 5 "decomp.ch"
#line 5 "decomp.ch"
#define for_elem _for_elem

#line 5 "decomp.ch"
#line 5 "decomp.ch"

#line 5 "decomp.ch"
#endif
#ifdef INCONNU
#line 5 "decomp.ch"
#line 5 "decomp.ch"
PTREE   for_elem ;
#line 5 "decomp.ch"

#line 5 "decomp.ch"
#line 5 "decomp.ch"

#line 5 "decomp.ch"
#endif
#include "decchopb.h"

#ifdef FOR_METACHOP
#line 5 "decomp.ch"
#line 11 "decomp.ch"
PTREE   postComment ;
#line 11 "decomp.ch"

#line 11 "decomp.ch"
#line 11 "decomp.ch"

#line 11 "decomp.ch"
#endif

#line 16 "decomp.ch"

#line 16 "decomp.ch"
void DecompChopb::FrameContent ( PTREE list )
#line 16 "decomp.ch"
{
#line 16 "decomp.ch"
    register PPTREE _inter ;
#line 16 "decomp.ch"

#line 16 "decomp.ch"
#line 16 "decomp.ch"
    int _nextVal ;
    
#line 16 "decomp.ch"
#line 19 "decomp.ch"
    
    int nb, min = 32000 ;
    
#line 19 "decomp.ch"
#line 20 "decomp.ch"
    PTREE   inter = (PTREE)0, line ;
#line 20 "decomp.ch"
    
#line 20 "decomp.ch"
#line 21 "decomp.ch"
    char    *ptLine ;
    
#line 21 "decomp.ch"
#line 20 "decomp.ch"
    (inter=list);
#line 20 "decomp.ch"
    
#line 20 "decomp.ch"
#line 23 "decomp.ch"
    while ( ((_inter = (PPTREE)inter,1) && 
#line 23 "decomp.ch"
                (NumberTree(_inter) == LIST) &&
#line 23 "decomp.ch"
                1) ) {
#line 23 "decomp.ch"
#line 24 "decomp.ch"
                        ptLine = BrainyValue(inter);
#line 24 "decomp.ch"
#line 25 "decomp.ch"
                        nb = 0 ;
#line 25 "decomp.ch"
#line 26 "decomp.ch"
                        while ( *ptLine && (*ptLine == ' ' || *ptLine == '\t') ) {
#line 26 "decomp.ch"
#line 27 "decomp.ch"
                                                                                            ptLine++ ;
#line 27 "decomp.ch"
#line 28 "decomp.ch"
                                                                                            nb++ ;
#line 28 "decomp.ch"
#line 29 "decomp.ch"
                                                                                            
#line 29 "decomp.ch"
#line 29 "decomp.ch"
                                                                                          }
#line 29 "decomp.ch"
#line 30 "decomp.ch"
                        if ( *ptLine ) 
#line 30 "decomp.ch"
#line 31 "decomp.ch"
                            min = nb < min ? nb : min ;
#line 31 "decomp.ch"
#line 32 "decomp.ch"
                        (inter?inter.Nextl():(PPTREE)0);
#line 32 "decomp.ch"
#line 33 "decomp.ch"
                        
#line 33 "decomp.ch"
#line 33 "decomp.ch"
                     }
#line 33 "decomp.ch"
#line 34 "decomp.ch"
    if ( min != 32000 && min ) {
#line 34 "decomp.ch"
#line 35 "decomp.ch"
                                    (inter=list);
#line 35 "decomp.ch"
                                    
#line 35 "decomp.ch"
#line 36 "decomp.ch"
                                    while ( ((_inter = (PPTREE)inter,1) && 
#line 36 "decomp.ch"
                                                (NumberTree(_inter) == LIST) &&
#line 36 "decomp.ch"
                                                1) ) {
#line 36 "decomp.ch"
#line 37 "decomp.ch"
                                                        ptLine = BrainyValue(inter);
#line 37 "decomp.ch"
#line 38 "decomp.ch"
                                                        if ( (nb = strlen(ptLine)) >= min ) {
#line 38 "decomp.ch"
#line 39 "decomp.ch"
                                                                                                    memmove(ptLine, ptLine + min, nb - min + 1);
#line 39 "decomp.ch"
#line 40 "decomp.ch"
                                                                                                    
#line 40 "decomp.ch"
#line 40 "decomp.ch"
                                                                                                 }
#line 40 "decomp.ch"
#line 41 "decomp.ch"
                                                        (inter?inter.Nextl():(PPTREE)0);
#line 41 "decomp.ch"
#line 42 "decomp.ch"
                                                        
#line 42 "decomp.ch"
#line 42 "decomp.ch"
                                                     }
#line 42 "decomp.ch"
#line 43 "decomp.ch"
                                    
#line 43 "decomp.ch"
#line 43 "decomp.ch"
                                  }
#line 43 "decomp.ch"
#line 46 "decomp.ch"
    (inter=list);
#line 46 "decomp.ch"
    
#line 46 "decomp.ch"
#line 47 "decomp.ch"
    while ( ((_inter = (PPTREE)inter,1) && 
#line 47 "decomp.ch"
                (NumberTree(_inter) == LIST) &&
#line 47 "decomp.ch"
                1) ) {
#line 47 "decomp.ch"
#line 48 "decomp.ch"
                        char    *string = Value(inter);
                        
#line 48 "decomp.ch"
#line 49 "decomp.ch"
                        ptLine = string + strlen(string) - 1 ;
#line 49 "decomp.ch"
#line 50 "decomp.ch"
                        while ( ptLine >= string && (*ptLine == ' ' || *ptLine == '\t') ) 
#line 50 "decomp.ch"
#line 51 "decomp.ch"
                            ptLine-- ;
#line 51 "decomp.ch"
#line 52 "decomp.ch"
                        *(ptLine + 1) = '\0';
#line 52 "decomp.ch"
#line 53 "decomp.ch"
                        (inter?inter.Nextl():(PPTREE)0);
#line 53 "decomp.ch"
#line 54 "decomp.ch"
                        
#line 54 "decomp.ch"
#line 54 "decomp.ch"
                     }
#line 54 "decomp.ch"
#line 57 "decomp.ch"
    (inter=list);
#line 57 "decomp.ch"
    
#line 57 "decomp.ch"
#line 58 "decomp.ch"
    while ( ((_inter = (PPTREE)inter,1) && 
#line 58 "decomp.ch"
                (NumberTree(_inter) == LIST) &&
#line 58 "decomp.ch"
                1) ) {
#line 58 "decomp.ch"
#line 59 "decomp.ch"
                        if ( !strlen(Value(inter)) ) {
#line 59 "decomp.ch"
#line 60 "decomp.ch"
                                                            PTREE   old = (PTREE)0 ;
#line 60 "decomp.ch"
                                                            
#line 60 "decomp.ch"
#line 60 "decomp.ch"
                                                            (old=inter);
#line 60 "decomp.ch"
                                                            
#line 60 "decomp.ch"
#line 61 "decomp.ch"
                                                            (inter?inter.Nextl():(PPTREE)0);
#line 61 "decomp.ch"
#line 62 "decomp.ch"
                                                            {
#line 62 "decomp.ch"
                                                                PPTREE _ptTree0= (PPTREE) 0,_sonTree0= (PPTREE) 0 ;
#line 62 "decomp.ch"
                                                                if (_ptTree0= fathertree(old)) {
#line 62 "decomp.ch"
                                                                    int rank = ranktree(old);
#line 62 "decomp.ch"
                                                                    ReplaceTree(_ptTree0,rank,inter);
#line 62 "decomp.ch"
                                                                }
#line 62 "decomp.ch"
                                                            }
#line 62 "decomp.ch"
                                                            
#line 62 "decomp.ch"
#line 63 "decomp.ch"
                                                            
#line 63 "decomp.ch"
#line 63 "decomp.ch"
                                                         } else 
#line 63 "decomp.ch"
#line 64 "decomp.ch"
                            (inter?inter.Nextl():(PPTREE)0);
#line 64 "decomp.ch"
                        
#line 64 "decomp.ch"
#line 65 "decomp.ch"
                        
#line 65 "decomp.ch"
#line 65 "decomp.ch"
                     }
#line 65 "decomp.ch"
#line 66 "decomp.ch"
    
#line 66 "decomp.ch"
#line 66 "decomp.ch"
}
#line 66 "decomp.ch"

#line 70 "decomp.ch"

#line 70 "decomp.ch"
PTREE DecompChopb::IntDecomp ( const PTREE &paramTree, int funcAlone )
#line 70 "decomp.ch"
{
#line 70 "decomp.ch"
    register PPTREE _inter ;
#line 70 "decomp.ch"

#line 70 "decomp.ch"
#line 70 "decomp.ch"
    int _nextVal ;
    
#line 70 "decomp.ch"
#line 73 "decomp.ch"
    
    PTREE   ident, tree, list, son, exp1, exp2, exp, stat, param ;
#line 73 "decomp.ch"
    
#line 73 "decomp.ch"
#line 74 "decomp.ch"
    int oldStatement = statementf ;
    
#line 74 "decomp.ch"
#line 75 "decomp.ch"
    PTREE   oldPostComment = (PTREE)0 ;
#line 75 "decomp.ch"
    
#line 75 "decomp.ch"
#line 76 "decomp.ch"
    int first = 1 ;
    
#line 76 "decomp.ch"
#line 75 "decomp.ch"
    (oldPostComment=postComment);
#line 75 "decomp.ch"
    
#line 75 "decomp.ch"
#line 78 "decomp.ch"
    switch ( NumberTree(paramTree) ) {
#line 78 "decomp.ch"
#line 80 "decomp.ch"
        case chopb::CHOP_DEF : 
#line 80 "decomp.ch"
#line 80 "decomp.ch"
            (ident=SonTree(paramTree, 1));
#line 80 "decomp.ch"
            
#line 80 "decomp.ch"
#line 80 "decomp.ch"
            (tree=SonTree(paramTree, 2));
#line 80 "decomp.ch"
            
#line 80 "decomp.ch"
#line 80 "decomp.ch"
        _Case23 : 
#line 80 "decomp.ch"
#line 80 "decomp.ch"
            ;
#line 80 "decomp.ch"
#line 80 "decomp.ch"
            if ( !((!ident)) ) {
#line 80 "decomp.ch"
#line 81 "decomp.ch"
                                    PrintString("language ");
#line 81 "decomp.ch"
#line 81 "decomp.ch"
                                    decomp(ident);
#line 81 "decomp.ch"
                                    
#line 81 "decomp.ch"
#line 81 "decomp.ch"
                                    PrintString(";");
#line 81 "decomp.ch"
#line 81 "decomp.ch"
                                    LNewLine(1);
#line 81 "decomp.ch"
                                    
#line 81 "decomp.ch"
#line 82 "decomp.ch"
                                    LNewLine(2);
#line 82 "decomp.ch"
                                    
#line 82 "decomp.ch"
#line 83 "decomp.ch"
                                    
#line 83 "decomp.ch"
#line 83 "decomp.ch"
                                 }
#line 83 "decomp.ch"
#line 84 "decomp.ch"
            decomp(tree);
#line 84 "decomp.ch"
            
#line 84 "decomp.ch"
#line 85 "decomp.ch"
            break ;
            
#line 85 "decomp.ch"
#line 87 "decomp.ch"
        case chopb::PARSE_ELEM : 
#line 87 "decomp.ch"
#line 87 "decomp.ch"
            (tree=SonTree(paramTree, 1));
#line 87 "decomp.ch"
            
#line 87 "decomp.ch"
#line 87 "decomp.ch"
        _Case24 : 
#line 87 "decomp.ch"
#line 87 "decomp.ch"
            ;
#line 87 "decomp.ch"
#line 87 "decomp.ch"
            DumpBrainyValue(tree);
#line 87 "decomp.ch"
            
#line 87 "decomp.ch"
#line 88 "decomp.ch"
            break ;
            
#line 88 "decomp.ch"
#line 90 "decomp.ch"
        case chopb::PARSE : 
#line 90 "decomp.ch"
#line 90 "decomp.ch"
            (list=SonTree(paramTree, 1));
#line 90 "decomp.ch"
            
#line 90 "decomp.ch"
#line 90 "decomp.ch"
        _Case25 : 
#line 90 "decomp.ch"
#line 90 "decomp.ch"
            ;
#line 90 "decomp.ch"
#line 90 "decomp.ch"
            FrameContent(list);
#line 90 "decomp.ch"
#line 91 "decomp.ch"
            ((_inter = (PPTREE)paramTree,1) && 
#line 91 "decomp.ch"
                ((list=SonTree(_inter,1)),1) &&
#line 91 "decomp.ch"
                1);
#line 91 "decomp.ch"
            ;
#line 91 "decomp.ch"
#line 92 "decomp.ch"
            PrintString("parse (");
#line 92 "decomp.ch"
#line 93 "decomp.ch"
            if ( ListLength(list) > 1 ) {
#line 93 "decomp.ch"
#line 94 "decomp.ch"
                                            LNewLine(1);
#line 94 "decomp.ch"
                                            
#line 94 "decomp.ch"
#line 95 "decomp.ch"
                                            Tab();
#line 95 "decomp.ch"
                                            
#line 95 "decomp.ch"
#line 96 "decomp.ch"
                                            
#line 96 "decomp.ch"
#line 96 "decomp.ch"
                                           }
#line 96 "decomp.ch"
#line 98 "decomp.ch"
            Mark();
#line 98 "decomp.ch"
            while ( ((son=(list?list.Nextl():(PPTREE)0))) ) {
#line 98 "decomp.ch"
#line 99 "decomp.ch"
                                                                    decomp(son);
#line 99 "decomp.ch"
                                                                    
#line 99 "decomp.ch"
#line 100 "decomp.ch"
                                                                    if ( list ) 
#line 100 "decomp.ch"
#line 101 "decomp.ch"
                                                                        LNewLine(1);
#line 101 "decomp.ch"
                                                                    
#line 101 "decomp.ch"
#line 102 "decomp.ch"
                                                                    
#line 102 "decomp.ch"
#line 102 "decomp.ch"
                                                                 }
#line 102 "decomp.ch"
            UnMark();
#line 102 "decomp.ch"
            
#line 102 "decomp.ch"
#line 106 "decomp.ch"
            if ( ListLength(sontree(paramTree, 1)) > 1 ) 
#line 106 "decomp.ch"
#line 107 "decomp.ch"
                LNewLine(1);
#line 107 "decomp.ch"
            
#line 107 "decomp.ch"
#line 108 "decomp.ch"
            PrintString(")");
#line 108 "decomp.ch"
#line 109 "decomp.ch"
            break ;
            
#line 109 "decomp.ch"
#line 111 "decomp.ch"
        case chopb::NODE_TREE : 
#line 111 "decomp.ch"
#line 111 "decomp.ch"
            (list=SonTree(paramTree, 1));
#line 111 "decomp.ch"
            
#line 111 "decomp.ch"
#line 111 "decomp.ch"
        _Case26 : 
#line 111 "decomp.ch"
#line 111 "decomp.ch"
            ;
#line 111 "decomp.ch"
#line 111 "decomp.ch"
            statementf = 0 ;
#line 111 "decomp.ch"
#line 112 "decomp.ch"
            PrintString("<");
#line 112 "decomp.ch"
#line 113 "decomp.ch"
            while ( list ) {
#line 113 "decomp.ch"
#line 114 "decomp.ch"
                                (son=(list?list.Nextl():(PPTREE)0));
#line 114 "decomp.ch"
                                
#line 114 "decomp.ch"
#line 115 "decomp.ch"
                                decomp(son);
#line 115 "decomp.ch"
                                
#line 115 "decomp.ch"
#line 116 "decomp.ch"
                                if ( list ) 
#line 116 "decomp.ch"
#line 117 "decomp.ch"
                                    PrintString(",");
#line 117 "decomp.ch"
#line 118 "decomp.ch"
                                
#line 118 "decomp.ch"
#line 118 "decomp.ch"
                            }
#line 118 "decomp.ch"
#line 119 "decomp.ch"
            PrintString(">");
#line 119 "decomp.ch"
#line 120 "decomp.ch"
            break ;
            
#line 120 "decomp.ch"
#line 122 "decomp.ch"
        case chopb::NIL : 
#line 122 "decomp.ch"
#line 122 "decomp.ch"
        _Case27 : 
#line 122 "decomp.ch"
#line 122 "decomp.ch"
            ;
#line 122 "decomp.ch"
#line 122 "decomp.ch"
            PrintString("()");
#line 122 "decomp.ch"
#line 123 "decomp.ch"
            break ;
            
#line 123 "decomp.ch"
#line 125 "decomp.ch"
        case chopb::DEF_IDENT : 
#line 125 "decomp.ch"
#line 125 "decomp.ch"
        _Case28 : 
#line 125 "decomp.ch"
#line 125 "decomp.ch"
            ;
#line 125 "decomp.ch"
#line 125 "decomp.ch"
            PrintString("<>");
#line 125 "decomp.ch"
#line 126 "decomp.ch"
            break ;
            
#line 126 "decomp.ch"
#line 128 "decomp.ch"
        case chopb::VALUE : 
#line 128 "decomp.ch"
#line 128 "decomp.ch"
            (ident=SonTree(paramTree, 1));
#line 128 "decomp.ch"
            
#line 128 "decomp.ch"
#line 128 "decomp.ch"
        _Case29 : 
#line 128 "decomp.ch"
#line 128 "decomp.ch"
            ;
#line 128 "decomp.ch"
#line 128 "decomp.ch"
            statementf = 0 ;
#line 128 "decomp.ch"
#line 129 "decomp.ch"
            PrintString("value(");
#line 129 "decomp.ch"
#line 129 "decomp.ch"
            decomp(ident);
#line 129 "decomp.ch"
            
#line 129 "decomp.ch"
#line 129 "decomp.ch"
            PrintString(")");
#line 129 "decomp.ch"
#line 130 "decomp.ch"
            break ;
            
#line 130 "decomp.ch"
#line 132 "decomp.ch"
        case chopb::NEXT : 
#line 132 "decomp.ch"
#line 132 "decomp.ch"
            (ident=SonTree(paramTree, 1));
#line 132 "decomp.ch"
            
#line 132 "decomp.ch"
#line 132 "decomp.ch"
        _Case30 : 
#line 132 "decomp.ch"
#line 132 "decomp.ch"
            ;
#line 132 "decomp.ch"
#line 132 "decomp.ch"
            statementf = 0 ;
#line 132 "decomp.ch"
#line 133 "decomp.ch"
            PrintString("nextl(");
#line 133 "decomp.ch"
#line 133 "decomp.ch"
            decomp(ident);
#line 133 "decomp.ch"
            
#line 133 "decomp.ch"
#line 133 "decomp.ch"
            PrintString(")");
#line 133 "decomp.ch"
#line 134 "decomp.ch"
            if ( oldStatement ) {
#line 134 "decomp.ch"
#line 135 "decomp.ch"
                                    SepBefore();
#line 135 "decomp.ch"
                                    
#line 135 "decomp.ch"
#line 135 "decomp.ch"
                                    PrintString(";");
#line 135 "decomp.ch"
#line 136 "decomp.ch"
                                    
#line 136 "decomp.ch"
#line 136 "decomp.ch"
                                 }
#line 136 "decomp.ch"
#line 137 "decomp.ch"
            break ;
            
#line 137 "decomp.ch"
#line 139 "decomp.ch"
        case chopb::IN_LANG : 
#line 139 "decomp.ch"
#line 139 "decomp.ch"
            (exp1=SonTree(paramTree, 1));
#line 139 "decomp.ch"
            
#line 139 "decomp.ch"
#line 139 "decomp.ch"
            (exp2=SonTree(paramTree, 2));
#line 139 "decomp.ch"
            
#line 139 "decomp.ch"
#line 139 "decomp.ch"
        _Case31 : 
#line 139 "decomp.ch"
#line 139 "decomp.ch"
            ;
#line 139 "decomp.ch"
#line 139 "decomp.ch"
            PrintString("in ");
#line 139 "decomp.ch"
#line 139 "decomp.ch"
            decomp(exp1);
#line 139 "decomp.ch"
            
#line 139 "decomp.ch"
#line 139 "decomp.ch"
            SepAfter();
#line 139 "decomp.ch"
            
#line 139 "decomp.ch"
#line 140 "decomp.ch"
            (postComment=exp2);
#line 140 "decomp.ch"
            
#line 140 "decomp.ch"
#line 141 "decomp.ch"
            decomp(exp2);
#line 141 "decomp.ch"
            
#line 141 "decomp.ch"
#line 142 "decomp.ch"
            control_stat1(exp2);
#line 142 "decomp.ch"
#line 143 "decomp.ch"
            break ;
            
#line 143 "decomp.ch"
#line 145 "decomp.ch"
        case chopb::EXPO : 
#line 145 "decomp.ch"
#line 145 "decomp.ch"
            (exp1=SonTree(paramTree, 1));
#line 145 "decomp.ch"
            
#line 145 "decomp.ch"
#line 145 "decomp.ch"
            (exp2=SonTree(paramTree, 2));
#line 145 "decomp.ch"
            
#line 145 "decomp.ch"
#line 145 "decomp.ch"
        _Case32 : 
#line 145 "decomp.ch"
#line 145 "decomp.ch"
            ;
#line 145 "decomp.ch"
#line 145 "decomp.ch"
            decomp(exp1);
#line 145 "decomp.ch"
            
#line 145 "decomp.ch"
#line 145 "decomp.ch"
            Space(1);
#line 145 "decomp.ch"
            
#line 145 "decomp.ch"
#line 145 "decomp.ch"
            PrintString("**");
#line 145 "decomp.ch"
#line 145 "decomp.ch"
            Space(1);
#line 145 "decomp.ch"
            
#line 145 "decomp.ch"
#line 145 "decomp.ch"
            decomp(exp2);
#line 145 "decomp.ch"
            
#line 145 "decomp.ch"
#line 146 "decomp.ch"
            break ;
            
#line 146 "decomp.ch"
#line 148 "decomp.ch"
        case chopb::EXPO_AFF : 
#line 148 "decomp.ch"
#line 148 "decomp.ch"
            (exp1=SonTree(paramTree, 1));
#line 148 "decomp.ch"
            
#line 148 "decomp.ch"
#line 148 "decomp.ch"
            (exp2=SonTree(paramTree, 2));
#line 148 "decomp.ch"
            
#line 148 "decomp.ch"
#line 148 "decomp.ch"
        _Case33 : 
#line 148 "decomp.ch"
#line 148 "decomp.ch"
            ;
#line 148 "decomp.ch"
#line 148 "decomp.ch"
            statementf = 0 ;
#line 148 "decomp.ch"
#line 149 "decomp.ch"
            decomp(exp1);
#line 149 "decomp.ch"
            
#line 149 "decomp.ch"
#line 149 "decomp.ch"
            PrintString(" **= ");
#line 149 "decomp.ch"
#line 149 "decomp.ch"
            decomp(exp2);
#line 149 "decomp.ch"
            
#line 149 "decomp.ch"
#line 150 "decomp.ch"
            if ( oldStatement ) {
#line 150 "decomp.ch"
#line 151 "decomp.ch"
                                    SepBefore();
#line 151 "decomp.ch"
                                    
#line 151 "decomp.ch"
#line 151 "decomp.ch"
                                    PrintString(";");
#line 151 "decomp.ch"
#line 152 "decomp.ch"
                                    
#line 152 "decomp.ch"
#line 152 "decomp.ch"
                                 }
#line 152 "decomp.ch"
#line 153 "decomp.ch"
            break ;
            
#line 153 "decomp.ch"
#line 155 "decomp.ch"
        case chopb::NODE_LIST : 
#line 155 "decomp.ch"
#line 155 "decomp.ch"
            (exp1=SonTree(paramTree, 1));
#line 155 "decomp.ch"
            
#line 155 "decomp.ch"
#line 155 "decomp.ch"
        _Case34 : 
#line 155 "decomp.ch"
#line 155 "decomp.ch"
            ;
#line 155 "decomp.ch"
#line 155 "decomp.ch"
            PrintString("... ");
#line 155 "decomp.ch"
#line 156 "decomp.ch"
            while ( !((!exp1)) ) {
#line 156 "decomp.ch"
#line 157 "decomp.ch"
                                    (son=(exp1?exp1.Nextl():(PPTREE)0));
#line 157 "decomp.ch"
                                    
#line 157 "decomp.ch"
#line 158 "decomp.ch"
                                    decomp(son);
#line 158 "decomp.ch"
                                    
#line 158 "decomp.ch"
#line 159 "decomp.ch"
                                    if ( !((!exp1)) ) 
#line 159 "decomp.ch"
#line 160 "decomp.ch"
                                        PrintString(" || ");
#line 160 "decomp.ch"
#line 161 "decomp.ch"
                                    
#line 161 "decomp.ch"
#line 161 "decomp.ch"
                                   }
#line 161 "decomp.ch"
#line 162 "decomp.ch"
            break ;
            
#line 162 "decomp.ch"
#line 164 "decomp.ch"
        case chopb::ARRO : 
#line 164 "decomp.ch"
#line 164 "decomp.ch"
            (exp1=SonTree(paramTree, 1));
#line 164 "decomp.ch"
            
#line 164 "decomp.ch"
#line 164 "decomp.ch"
        _Case35 : 
#line 164 "decomp.ch"
#line 164 "decomp.ch"
            ;
#line 164 "decomp.ch"
#line 164 "decomp.ch"
            statementf = 0 ;
#line 164 "decomp.ch"
#line 165 "decomp.ch"
            PrintString("@");
#line 165 "decomp.ch"
#line 165 "decomp.ch"
            decomp(exp1);
#line 165 "decomp.ch"
            
#line 165 "decomp.ch"
#line 166 "decomp.ch"
            break ;
            
#line 166 "decomp.ch"
#line 168 "decomp.ch"
        case chopb::ALINEA : 
#line 168 "decomp.ch"
#line 168 "decomp.ch"
            (list=SonTree(paramTree, 1));
#line 168 "decomp.ch"
            
#line 168 "decomp.ch"
#line 168 "decomp.ch"
        _Case36 : 
#line 168 "decomp.ch"
#line 168 "decomp.ch"
            ;
#line 168 "decomp.ch"
#line 168 "decomp.ch"
            Mark();
#line 168 "decomp.ch"
            PrintString("{{");
#line 168 "decomp.ch"
            LNewLine(1);
#line 168 "decomp.ch"
            
#line 168 "decomp.ch"
            Tab();
#line 168 "decomp.ch"
            
#line 168 "decomp.ch"
            Mark();
#line 168 "decomp.ch"
            statementf = 1 ;
#line 168 "decomp.ch"
            while ( !((!list)) ) {
#line 168 "decomp.ch"
#line 173 "decomp.ch"
                                    (son=(list?list.Nextl():(PPTREE)0));
#line 173 "decomp.ch"
                                    
#line 173 "decomp.ch"
#line 174 "decomp.ch"
                                    (postComment=son);
#line 174 "decomp.ch"
                                    
#line 174 "decomp.ch"
#line 175 "decomp.ch"
                                    decomp(son);
#line 175 "decomp.ch"
                                    
#line 175 "decomp.ch"
#line 176 "decomp.ch"
                                    if ( !Sequence(son, sontree(list, 1)) ) {
#line 176 "decomp.ch"
#line 177 "decomp.ch"
                                                                                    control_stat1(son);
#line 177 "decomp.ch"
#line 178 "decomp.ch"
                                                                                    LNewLine(1);
#line 178 "decomp.ch"
                                                                                    
#line 178 "decomp.ch"
#line 179 "decomp.ch"
                                                                                    
#line 179 "decomp.ch"
#line 179 "decomp.ch"
                                                                                  } else 
#line 179 "decomp.ch"
#line 180 "decomp.ch"
                                        Space(1);
#line 180 "decomp.ch"
                                        
#line 180 "decomp.ch"
                                    
#line 180 "decomp.ch"
#line 181 "decomp.ch"
                                    
#line 181 "decomp.ch"
#line 181 "decomp.ch"
                                   }
#line 181 "decomp.ch"
            UnMark();
#line 181 "decomp.ch"
            
#line 181 "decomp.ch"
            PrintString("}}");
#line 181 "decomp.ch"
            UnMark();
#line 181 "decomp.ch"
            
#line 181 "decomp.ch"
#line 185 "decomp.ch"
            break ;
            
#line 185 "decomp.ch"
#line 187 "decomp.ch"
        case chopb::FOREACH : 
#line 187 "decomp.ch"
#line 187 "decomp.ch"
            (exp1=SonTree(paramTree, 1));
#line 187 "decomp.ch"
            
#line 187 "decomp.ch"
#line 187 "decomp.ch"
            (exp2=SonTree(paramTree, 2));
#line 187 "decomp.ch"
            
#line 187 "decomp.ch"
#line 187 "decomp.ch"
            (stat=SonTree(paramTree, 3));
#line 187 "decomp.ch"
            
#line 187 "decomp.ch"
#line 187 "decomp.ch"
        _Case37 : 
#line 187 "decomp.ch"
#line 187 "decomp.ch"
            ;
#line 187 "decomp.ch"
#line 187 "decomp.ch"
            PrintString("foreach (");
#line 187 "decomp.ch"
#line 187 "decomp.ch"
            decomp(exp1);
#line 187 "decomp.ch"
            
#line 187 "decomp.ch"
#line 187 "decomp.ch"
            PrintString(",");
#line 187 "decomp.ch"
#line 187 "decomp.ch"
            decomp(exp2);
#line 187 "decomp.ch"
            
#line 187 "decomp.ch"
#line 187 "decomp.ch"
            PrintString(",");
#line 187 "decomp.ch"
#line 188 "decomp.ch"
            if ( !(((_inter = (PPTREE)stat,1) && 
#line 188 "decomp.ch"
                        (NumberTree(_inter) == chopb::COMPOUND) &&
#line 188 "decomp.ch"
                        1)) ) {
#line 188 "decomp.ch"
#line 189 "decomp.ch"
                                LNewLine(1);
#line 189 "decomp.ch"
                                
#line 189 "decomp.ch"
#line 190 "decomp.ch"
                                Tab();
#line 190 "decomp.ch"
                                
#line 190 "decomp.ch"
#line 191 "decomp.ch"
                                Mark();
#line 191 "decomp.ch"
#line 192 "decomp.ch"
                                
#line 192 "decomp.ch"
#line 192 "decomp.ch"
                              }
#line 192 "decomp.ch"
#line 193 "decomp.ch"
            decomp(stat);
#line 193 "decomp.ch"
            
#line 193 "decomp.ch"
#line 194 "decomp.ch"
            if ( !(((_inter = (PPTREE)stat,1) && 
#line 194 "decomp.ch"
                        (NumberTree(_inter) == chopb::COMPOUND) &&
#line 194 "decomp.ch"
                        1)) ) {
#line 194 "decomp.ch"
#line 195 "decomp.ch"
                                UnMark();
#line 195 "decomp.ch"
#line 196 "decomp.ch"
                                LNewLine(1);
#line 196 "decomp.ch"
                                
#line 196 "decomp.ch"
#line 197 "decomp.ch"
                                
#line 197 "decomp.ch"
#line 197 "decomp.ch"
                              }
#line 197 "decomp.ch"
#line 198 "decomp.ch"
            PrintString(")");
#line 198 "decomp.ch"
#line 199 "decomp.ch"
            break ;
            
#line 199 "decomp.ch"
#line 201 "decomp.ch"
        case chopb::FORALLSONS : 
#line 201 "decomp.ch"
#line 201 "decomp.ch"
            (exp1=SonTree(paramTree, 1));
#line 201 "decomp.ch"
            
#line 201 "decomp.ch"
#line 201 "decomp.ch"
            (stat=SonTree(paramTree, 2));
#line 201 "decomp.ch"
            
#line 201 "decomp.ch"
#line 201 "decomp.ch"
        _Case38 : 
#line 201 "decomp.ch"
#line 201 "decomp.ch"
            ;
#line 201 "decomp.ch"
#line 201 "decomp.ch"
            PrintString("forallsons (");
#line 201 "decomp.ch"
#line 201 "decomp.ch"
            decomp(exp1);
#line 201 "decomp.ch"
            
#line 201 "decomp.ch"
#line 201 "decomp.ch"
            PrintString(",");
#line 201 "decomp.ch"
#line 202 "decomp.ch"
            if ( !(((_inter = (PPTREE)stat,1) && 
#line 202 "decomp.ch"
                        (NumberTree(_inter) == chopb::COMPOUND) &&
#line 202 "decomp.ch"
                        1)) ) {
#line 202 "decomp.ch"
#line 203 "decomp.ch"
                                LNewLine(1);
#line 203 "decomp.ch"
                                
#line 203 "decomp.ch"
#line 204 "decomp.ch"
                                Tab();
#line 204 "decomp.ch"
                                
#line 204 "decomp.ch"
#line 205 "decomp.ch"
                                Mark();
#line 205 "decomp.ch"
#line 206 "decomp.ch"
                                
#line 206 "decomp.ch"
#line 206 "decomp.ch"
                              }
#line 206 "decomp.ch"
#line 207 "decomp.ch"
            decomp(stat);
#line 207 "decomp.ch"
            
#line 207 "decomp.ch"
#line 208 "decomp.ch"
            if ( !(((_inter = (PPTREE)stat,1) && 
#line 208 "decomp.ch"
                        (NumberTree(_inter) == chopb::COMPOUND) &&
#line 208 "decomp.ch"
                        1)) ) {
#line 208 "decomp.ch"
#line 209 "decomp.ch"
                                UnMark();
#line 209 "decomp.ch"
#line 210 "decomp.ch"
                                LNewLine(1);
#line 210 "decomp.ch"
                                
#line 210 "decomp.ch"
#line 211 "decomp.ch"
                                
#line 211 "decomp.ch"
#line 211 "decomp.ch"
                              }
#line 211 "decomp.ch"
#line 212 "decomp.ch"
            PrintString(")");
#line 212 "decomp.ch"
#line 213 "decomp.ch"
            break ;
            
#line 213 "decomp.ch"
#line 215 "decomp.ch"
        case chopb::SEP_BEFORE : 
#line 215 "decomp.ch"
#line 215 "decomp.ch"
        _Case39 : 
#line 215 "decomp.ch"
#line 215 "decomp.ch"
            ;
#line 215 "decomp.ch"
#line 215 "decomp.ch"
            PrintString("<SEPB>");
#line 215 "decomp.ch"
#line 216 "decomp.ch"
            break ;
            
#line 216 "decomp.ch"
#line 218 "decomp.ch"
        case chopb::SEP_AFTER : 
#line 218 "decomp.ch"
#line 218 "decomp.ch"
        _Case40 : 
#line 218 "decomp.ch"
#line 218 "decomp.ch"
            ;
#line 218 "decomp.ch"
#line 218 "decomp.ch"
            PrintString("<SEPA>");
#line 218 "decomp.ch"
#line 219 "decomp.ch"
            break ;
            
#line 219 "decomp.ch"
#line 221 "decomp.ch"
        case chopb::SEP_OMIT : 
#line 221 "decomp.ch"
#line 221 "decomp.ch"
        _Case41 : 
#line 221 "decomp.ch"
#line 221 "decomp.ch"
            ;
#line 221 "decomp.ch"
#line 221 "decomp.ch"
            PrintString("<SEPO>");
#line 221 "decomp.ch"
#line 222 "decomp.ch"
            break ;
            
#line 222 "decomp.ch"
#line 224 "decomp.ch"
        case chopb::NEWLINE : 
#line 224 "decomp.ch"
#line 224 "decomp.ch"
            (param=SonTree(paramTree, 1));
#line 224 "decomp.ch"
            
#line 224 "decomp.ch"
#line 224 "decomp.ch"
        _Case42 : 
#line 224 "decomp.ch"
#line 224 "decomp.ch"
            ;
#line 224 "decomp.ch"
#line 224 "decomp.ch"
            if ( (!param) ) 
#line 224 "decomp.ch"
#line 225 "decomp.ch"
                PrintString("<NL>");
#line 225 "decomp.ch"
            else 
#line 226 "decomp.ch"
            {
#line 226 "decomp.ch"
#line 227 "decomp.ch"
                PrintString("<NL,");
#line 227 "decomp.ch"
#line 227 "decomp.ch"
                decomp(param);
#line 227 "decomp.ch"
                
#line 227 "decomp.ch"
#line 227 "decomp.ch"
                PrintString(">");
#line 227 "decomp.ch"
#line 228 "decomp.ch"
                
#line 228 "decomp.ch"
#line 228 "decomp.ch"
            }
            
#line 228 "decomp.ch"
#line 229 "decomp.ch"
            (oldPostComment=paramTree);
#line 229 "decomp.ch"
            
#line 229 "decomp.ch"
#line 230 "decomp.ch"
            comm(paramTree, POST);
#line 230 "decomp.ch"
#line 231 "decomp.ch"
            LNewLine(1);
#line 231 "decomp.ch"
            
#line 231 "decomp.ch"
#line 232 "decomp.ch"
            break ;
            
#line 232 "decomp.ch"
#line 234 "decomp.ch"
        case chopb::SPACE : 
#line 234 "decomp.ch"
#line 234 "decomp.ch"
            (param=SonTree(paramTree, 1));
#line 234 "decomp.ch"
            
#line 234 "decomp.ch"
#line 234 "decomp.ch"
        _Case43 : 
#line 234 "decomp.ch"
#line 234 "decomp.ch"
            ;
#line 234 "decomp.ch"
#line 234 "decomp.ch"
            if ( (!param) ) 
#line 234 "decomp.ch"
#line 235 "decomp.ch"
                PrintString("<S>");
#line 235 "decomp.ch"
            else 
#line 236 "decomp.ch"
            {
#line 236 "decomp.ch"
#line 237 "decomp.ch"
                PrintString("<S,");
#line 237 "decomp.ch"
#line 237 "decomp.ch"
                decomp(param);
#line 237 "decomp.ch"
                
#line 237 "decomp.ch"
#line 237 "decomp.ch"
                PrintString(">");
#line 237 "decomp.ch"
#line 238 "decomp.ch"
                
#line 238 "decomp.ch"
#line 238 "decomp.ch"
            }
            
#line 238 "decomp.ch"
#line 239 "decomp.ch"
            break ;
            
#line 239 "decomp.ch"
#line 241 "decomp.ch"
        case chopb::TAB : 
#line 241 "decomp.ch"
#line 241 "decomp.ch"
        _Case44 : 
#line 241 "decomp.ch"
#line 241 "decomp.ch"
            ;
#line 241 "decomp.ch"
#line 241 "decomp.ch"
            Tab();
#line 241 "decomp.ch"
            
#line 241 "decomp.ch"
#line 241 "decomp.ch"
            PrintString("<T>");
#line 241 "decomp.ch"
#line 242 "decomp.ch"
            break ;
            
#line 242 "decomp.ch"
#line 243 "decomp.ch"
        default : 
#line 243 "decomp.ch"
#line 243 "decomp.ch"
        _Case45 : 
#line 243 "decomp.ch"
#line 243 "decomp.ch"
            ;
#line 243 "decomp.ch"
#line 243 "decomp.ch"
            return DecompCplus::IntDecomp(paramTree, funcAlone);
            
#line 243 "decomp.ch"
    }
#line 243 "decomp.ch"
    
#line 243 "decomp.ch"
#line 245 "decomp.ch"
    statementf = oldStatement ;
#line 245 "decomp.ch"
#line 246 "decomp.ch"
    return oldPostComment ;
    
#line 246 "decomp.ch"
#line 247 "decomp.ch"
    
#line 247 "decomp.ch"
#line 247 "decomp.ch"
}
#line 247 "decomp.ch"

#line 249 "decomp.ch"

#line 249 "decomp.ch"
int DecompChopb::Sequence ( PTREE tree1, PTREE tree2 )
#line 249 "decomp.ch"
{
#line 249 "decomp.ch"
    register PPTREE _inter ;
#line 249 "decomp.ch"

#line 249 "decomp.ch"
#line 249 "decomp.ch"
    int _nextVal ;
    
#line 249 "decomp.ch"
#line 251 "decomp.ch"
    
    PTREE   son ;
#line 251 "decomp.ch"
    
#line 251 "decomp.ch"
#line 254 "decomp.ch"
    if ( !tree1 | !tree2 ) 
#line 254 "decomp.ch"
#line 255 "decomp.ch"
        return 0 ;
    
#line 255 "decomp.ch"
#line 258 "decomp.ch"
    ((_inter = (PPTREE)tree1,1) && 
#line 258 "decomp.ch"
        (NumberTree(_inter) == chopb::ATTRIBUTS) &&
#line 258 "decomp.ch"
        ((tree1=SonTree(_inter,1)),1) &&
#line 258 "decomp.ch"
        1);
#line 258 "decomp.ch"
    ;
#line 258 "decomp.ch"
#line 259 "decomp.ch"
    ((_inter = (PPTREE)tree2,1) && 
#line 259 "decomp.ch"
        (NumberTree(_inter) == chopb::ATTRIBUTS) &&
#line 259 "decomp.ch"
        ((tree2=SonTree(_inter,1)),1) &&
#line 259 "decomp.ch"
        1);
#line 259 "decomp.ch"
    ;
#line 259 "decomp.ch"
#line 262 "decomp.ch"
    switch ( NumberTree(tree1) ) {
#line 262 "decomp.ch"
#line 264 "decomp.ch"
        case chopb::EXP_LIST : 
#line 264 "decomp.ch"
#line 264 "decomp.ch"
            (son=SonTree(tree1, 1));
#line 264 "decomp.ch"
            
#line 264 "decomp.ch"
#line 264 "decomp.ch"
        _Case71 : 
#line 264 "decomp.ch"
#line 264 "decomp.ch"
            ;
#line 264 "decomp.ch"
#line 264 "decomp.ch"
            if ( strcmp(BrainyValue(son), "WriteString") && strcmp(BrainyValue(son), "PrintString") ) 
#line 264 "decomp.ch"
#line 265 "decomp.ch"
                return 0 ;
            
#line 265 "decomp.ch"
#line 265 "decomp.ch"
            goto _Case72 ;
            
#line 265 "decomp.ch"
#line 266 "decomp.ch"
        case chopb::STRING_LIST : 
#line 266 "decomp.ch"
#line 266 "decomp.ch"
        _Case72 : 
#line 266 "decomp.ch"
#line 266 "decomp.ch"
            ;
#line 266 "decomp.ch"
#line 266 "decomp.ch"
            ;
#line 266 "decomp.ch"
#line 266 "decomp.ch"
            goto _Case73 ;
            
#line 266 "decomp.ch"
#line 267 "decomp.ch"
        case chopb::STRING : 
#line 267 "decomp.ch"
#line 267 "decomp.ch"
        _Case73 : 
#line 267 "decomp.ch"
#line 267 "decomp.ch"
            ;
#line 267 "decomp.ch"
#line 267 "decomp.ch"
            ;
#line 267 "decomp.ch"
#line 267 "decomp.ch"
            goto _Case74 ;
            
#line 267 "decomp.ch"
#line 268 "decomp.ch"
        case chopb::ARRO : 
#line 268 "decomp.ch"
#line 268 "decomp.ch"
        _Case74 : 
#line 268 "decomp.ch"
#line 268 "decomp.ch"
            ;
#line 268 "decomp.ch"
#line 268 "decomp.ch"
            ;
#line 268 "decomp.ch"
#line 268 "decomp.ch"
            goto _Case75 ;
            
#line 268 "decomp.ch"
#line 269 "decomp.ch"
        case chopb::VALUE : 
#line 269 "decomp.ch"
#line 269 "decomp.ch"
        _Case75 : 
#line 269 "decomp.ch"
#line 269 "decomp.ch"
            ;
#line 269 "decomp.ch"
#line 269 "decomp.ch"
            ;
#line 269 "decomp.ch"
#line 269 "decomp.ch"
            goto _Case76 ;
            
#line 269 "decomp.ch"
#line 270 "decomp.ch"
        case chopb::SPACE : 
#line 270 "decomp.ch"
#line 270 "decomp.ch"
        _Case76 : 
#line 270 "decomp.ch"
#line 270 "decomp.ch"
            ;
#line 270 "decomp.ch"
#line 270 "decomp.ch"
            ;
#line 270 "decomp.ch"
#line 270 "decomp.ch"
            goto _Case77 ;
            
#line 270 "decomp.ch"
#line 271 "decomp.ch"
        case chopb::SEP_BEFORE : 
#line 271 "decomp.ch"
#line 271 "decomp.ch"
        _Case77 : 
#line 271 "decomp.ch"
#line 271 "decomp.ch"
            ;
#line 271 "decomp.ch"
#line 271 "decomp.ch"
            ;
#line 271 "decomp.ch"
#line 271 "decomp.ch"
            goto _Case78 ;
            
#line 271 "decomp.ch"
#line 272 "decomp.ch"
        case chopb::SEP_AFTER : 
#line 272 "decomp.ch"
#line 272 "decomp.ch"
        _Case78 : 
#line 272 "decomp.ch"
#line 272 "decomp.ch"
            ;
#line 272 "decomp.ch"
#line 272 "decomp.ch"
            ;
#line 272 "decomp.ch"
#line 272 "decomp.ch"
            goto _Case79 ;
            
#line 272 "decomp.ch"
#line 273 "decomp.ch"
        case chopb::SEP_OMIT : 
#line 273 "decomp.ch"
#line 273 "decomp.ch"
        _Case79 : 
#line 273 "decomp.ch"
#line 273 "decomp.ch"
            ;
#line 273 "decomp.ch"
#line 273 "decomp.ch"
            ;
#line 273 "decomp.ch"
#line 273 "decomp.ch"
            goto _Case80 ;
            
#line 273 "decomp.ch"
#line 275 "decomp.ch"
        case chopb::TAB : 
#line 275 "decomp.ch"
#line 275 "decomp.ch"
        _Case80 : 
#line 275 "decomp.ch"
#line 275 "decomp.ch"
            ;
#line 275 "decomp.ch"
#line 275 "decomp.ch"
            switch ( NumberTree(tree2) ) {
#line 275 "decomp.ch"
#line 277 "decomp.ch"
                case chopb::EXP_LIST : 
#line 277 "decomp.ch"
#line 277 "decomp.ch"
                    (son=SonTree(tree2, 1));
#line 277 "decomp.ch"
                    
#line 277 "decomp.ch"
#line 277 "decomp.ch"
                _Case83 : 
#line 277 "decomp.ch"
#line 277 "decomp.ch"
                    ;
#line 277 "decomp.ch"
#line 277 "decomp.ch"
                    if ( strcmp(BrainyValue(son), "WriteString") && strcmp(BrainyValue(son), "PrintString") ) 
#line 277 "decomp.ch"
#line 278 "decomp.ch"
                        return 0 ;
                    
#line 278 "decomp.ch"
#line 278 "decomp.ch"
                    goto _Case84 ;
                    
#line 278 "decomp.ch"
#line 278 "decomp.ch"
                case chopb::STRING_LIST : 
#line 278 "decomp.ch"
#line 278 "decomp.ch"
                _Case84 : 
#line 278 "decomp.ch"
#line 278 "decomp.ch"
                    ;
#line 278 "decomp.ch"
#line 278 "decomp.ch"
                    goto _Case85 ;
                    
#line 278 "decomp.ch"
#line 278 "decomp.ch"
                case chopb::STRING : 
#line 278 "decomp.ch"
#line 278 "decomp.ch"
                _Case85 : 
#line 278 "decomp.ch"
#line 278 "decomp.ch"
                    ;
#line 278 "decomp.ch"
#line 278 "decomp.ch"
                    goto _Case86 ;
                    
#line 278 "decomp.ch"
#line 278 "decomp.ch"
                case chopb::ARRO : 
#line 278 "decomp.ch"
#line 278 "decomp.ch"
                _Case86 : 
#line 278 "decomp.ch"
#line 278 "decomp.ch"
                    ;
#line 278 "decomp.ch"
#line 278 "decomp.ch"
                    goto _Case87 ;
                    
#line 278 "decomp.ch"
#line 278 "decomp.ch"
                case chopb::VALUE : 
#line 278 "decomp.ch"
#line 278 "decomp.ch"
                _Case87 : 
#line 278 "decomp.ch"
#line 278 "decomp.ch"
                    ;
#line 278 "decomp.ch"
#line 278 "decomp.ch"
                    goto _Case88 ;
                    
#line 278 "decomp.ch"
#line 278 "decomp.ch"
                case chopb::NEWLINE : 
#line 278 "decomp.ch"
#line 278 "decomp.ch"
                _Case88 : 
#line 278 "decomp.ch"
#line 278 "decomp.ch"
                    ;
#line 278 "decomp.ch"
#line 278 "decomp.ch"
                    goto _Case89 ;
                    
#line 278 "decomp.ch"
#line 278 "decomp.ch"
                case chopb::SPACE : 
#line 278 "decomp.ch"
#line 278 "decomp.ch"
                _Case89 : 
#line 278 "decomp.ch"
#line 278 "decomp.ch"
                    ;
#line 278 "decomp.ch"
#line 278 "decomp.ch"
                    goto _Case90 ;
                    
#line 278 "decomp.ch"
#line 278 "decomp.ch"
                case chopb::ALINEA : 
#line 278 "decomp.ch"
#line 278 "decomp.ch"
                _Case90 : 
#line 278 "decomp.ch"
#line 278 "decomp.ch"
                    ;
#line 278 "decomp.ch"
#line 278 "decomp.ch"
                    goto _Case91 ;
                    
#line 278 "decomp.ch"
#line 286 "decomp.ch"
                case chopb::SEP_BEFORE : 
#line 286 "decomp.ch"
#line 286 "decomp.ch"
                _Case91 : 
#line 286 "decomp.ch"
#line 286 "decomp.ch"
                    ;
#line 286 "decomp.ch"
#line 286 "decomp.ch"
                    ;
#line 286 "decomp.ch"
#line 286 "decomp.ch"
                    goto _Case92 ;
                    
#line 286 "decomp.ch"
#line 287 "decomp.ch"
                case chopb::SEP_AFTER : 
#line 287 "decomp.ch"
#line 287 "decomp.ch"
                _Case92 : 
#line 287 "decomp.ch"
#line 287 "decomp.ch"
                    ;
#line 287 "decomp.ch"
#line 287 "decomp.ch"
                    ;
#line 287 "decomp.ch"
#line 287 "decomp.ch"
                    goto _Case93 ;
                    
#line 287 "decomp.ch"
#line 288 "decomp.ch"
                case chopb::SEP_OMIT : 
#line 288 "decomp.ch"
#line 288 "decomp.ch"
                _Case93 : 
#line 288 "decomp.ch"
#line 288 "decomp.ch"
                    ;
#line 288 "decomp.ch"
#line 288 "decomp.ch"
                    ;
#line 288 "decomp.ch"
#line 288 "decomp.ch"
                    goto _Case94 ;
                    
#line 288 "decomp.ch"
#line 290 "decomp.ch"
                case chopb::TAB : 
#line 290 "decomp.ch"
#line 290 "decomp.ch"
                _Case94 : 
#line 290 "decomp.ch"
#line 290 "decomp.ch"
                    ;
#line 290 "decomp.ch"
#line 290 "decomp.ch"
                    return 1 ;
                    
#line 290 "decomp.ch"
#line 291 "decomp.ch"
                    break ;
                    
#line 291 "decomp.ch"
#line 292 "decomp.ch"
                default : 
#line 292 "decomp.ch"
#line 292 "decomp.ch"
                _Case95 : 
#line 292 "decomp.ch"
#line 292 "decomp.ch"
                    ;
#line 292 "decomp.ch"
#line 292 "decomp.ch"
                    return 0 ;
                    
#line 292 "decomp.ch"
            }
#line 292 "decomp.ch"
            
#line 292 "decomp.ch"
#line 294 "decomp.ch"
            break ;
            
#line 294 "decomp.ch"
#line 296 "decomp.ch"
        case chopb::ALINEA : 
#line 296 "decomp.ch"
#line 296 "decomp.ch"
        _Case81 : 
#line 296 "decomp.ch"
#line 296 "decomp.ch"
            ;
#line 296 "decomp.ch"
#line 296 "decomp.ch"
            if ( ((_inter = (PPTREE)tree2,1) && 
#line 296 "decomp.ch"
                    (NumberTree(_inter) == chopb::NEWLINE) &&
#line 296 "decomp.ch"
                    1) ) 
#line 296 "decomp.ch"
#line 297 "decomp.ch"
                return 1 ;
            
#line 297 "decomp.ch"
            else 
#line 297 "decomp.ch"
#line 299 "decomp.ch"
                return 0 ;
                
#line 299 "decomp.ch"
            
#line 299 "decomp.ch"
#line 299 "decomp.ch"
            goto _Case82 ;
            
#line 299 "decomp.ch"
#line 300 "decomp.ch"
        default : 
#line 300 "decomp.ch"
#line 300 "decomp.ch"
        _Case82 : 
#line 300 "decomp.ch"
#line 300 "decomp.ch"
            ;
#line 300 "decomp.ch"
#line 300 "decomp.ch"
            return DecompCplus::Sequence(tree1, tree2);
            
#line 300 "decomp.ch"
    }
#line 300 "decomp.ch"
    
#line 300 "decomp.ch"
#line 302 "decomp.ch"
    return 0 ;
    
#line 302 "decomp.ch"
#line 303 "decomp.ch"
    
#line 303 "decomp.ch"
#line 303 "decomp.ch"
}
#line 303 "decomp.ch"

#line 305 "decomp.ch"

#line 305 "decomp.ch"
void DecompChopb::control_stat1 ( PTREE paramTree )
#line 305 "decomp.ch"
{
#line 305 "decomp.ch"
    register PPTREE _inter ;
#line 305 "decomp.ch"

#line 305 "decomp.ch"
#line 305 "decomp.ch"
    int _nextVal ;
    
#line 305 "decomp.ch"
#line 307 "decomp.ch"
    
    PTREE   exp1 ;
#line 307 "decomp.ch"
    
#line 307 "decomp.ch"
#line 309 "decomp.ch"
    switch ( NumberTree(paramTree) ) {
#line 309 "decomp.ch"
#line 311 "decomp.ch"
        case chopb::TAB : 
#line 311 "decomp.ch"
#line 311 "decomp.ch"
        _Case110 : 
#line 311 "decomp.ch"
#line 311 "decomp.ch"
            ;
#line 311 "decomp.ch"
#line 311 "decomp.ch"
            comm(paramTree, POST);
#line 311 "decomp.ch"
#line 312 "decomp.ch"
            return ;
            
#line 312 "decomp.ch"
#line 312 "decomp.ch"
            goto _Case111 ;
            
#line 312 "decomp.ch"
#line 314 "decomp.ch"
        case chopb::NEWLINE : 
#line 314 "decomp.ch"
#line 314 "decomp.ch"
        _Case111 : 
#line 314 "decomp.ch"
#line 314 "decomp.ch"
            ;
#line 314 "decomp.ch"
#line 314 "decomp.ch"
            comm(paramTree, POST);
#line 314 "decomp.ch"
#line 315 "decomp.ch"
            return ;
            
#line 315 "decomp.ch"
#line 315 "decomp.ch"
            goto _Case112 ;
            
#line 315 "decomp.ch"
#line 316 "decomp.ch"
        case chopb::ARRO : 
#line 316 "decomp.ch"
#line 316 "decomp.ch"
        _Case112 : 
#line 316 "decomp.ch"
#line 316 "decomp.ch"
            ;
#line 316 "decomp.ch"
#line 316 "decomp.ch"
            goto terminal ;
            
#line 316 "decomp.ch"
#line 316 "decomp.ch"
            goto _Case113 ;
            
#line 316 "decomp.ch"
#line 317 "decomp.ch"
        case chopb::VALUE : 
#line 317 "decomp.ch"
#line 317 "decomp.ch"
        _Case113 : 
#line 317 "decomp.ch"
#line 317 "decomp.ch"
            ;
#line 317 "decomp.ch"
#line 317 "decomp.ch"
            goto terminal ;
            
#line 317 "decomp.ch"
#line 317 "decomp.ch"
            goto _Case114 ;
            
#line 317 "decomp.ch"
#line 318 "decomp.ch"
        case chopb::NEXT : 
#line 318 "decomp.ch"
#line 318 "decomp.ch"
        _Case114 : 
#line 318 "decomp.ch"
#line 318 "decomp.ch"
            ;
#line 318 "decomp.ch"
#line 318 "decomp.ch"
            goto terminal ;
            
#line 318 "decomp.ch"
#line 318 "decomp.ch"
            goto _Case115 ;
            
#line 318 "decomp.ch"
#line 319 "decomp.ch"
        case chopb::FOREACH : 
#line 319 "decomp.ch"
#line 319 "decomp.ch"
        _Case115 : 
#line 319 "decomp.ch"
#line 319 "decomp.ch"
            ;
#line 319 "decomp.ch"
#line 319 "decomp.ch"
            goto terminal ;
            
#line 319 "decomp.ch"
#line 319 "decomp.ch"
            goto _Case116 ;
            
#line 319 "decomp.ch"
#line 320 "decomp.ch"
        case chopb::FORALLSONS : 
#line 320 "decomp.ch"
#line 320 "decomp.ch"
        _Case116 : 
#line 320 "decomp.ch"
#line 320 "decomp.ch"
            ;
#line 320 "decomp.ch"
#line 320 "decomp.ch"
            goto terminal ;
            
#line 320 "decomp.ch"
#line 320 "decomp.ch"
            goto _Case117 ;
            
#line 320 "decomp.ch"
#line 321 "decomp.ch"
        case chopb::IN_LANG : 
#line 321 "decomp.ch"
#line 321 "decomp.ch"
        _Case117 : 
#line 321 "decomp.ch"
#line 321 "decomp.ch"
            ;
#line 321 "decomp.ch"
#line 321 "decomp.ch"
            return ;
            
#line 321 "decomp.ch"
#line 321 "decomp.ch"
            goto _Case118 ;
            
#line 321 "decomp.ch"
#line 321 "decomp.ch"
        case chopb::SPACE : 
#line 321 "decomp.ch"
#line 321 "decomp.ch"
        _Case118 : 
#line 321 "decomp.ch"
#line 321 "decomp.ch"
            ;
#line 321 "decomp.ch"
#line 321 "decomp.ch"
            goto _Case119 ;
            
#line 321 "decomp.ch"
#line 321 "decomp.ch"
        case chopb::ALINEA : 
#line 321 "decomp.ch"
#line 321 "decomp.ch"
        _Case119 : 
#line 321 "decomp.ch"
#line 321 "decomp.ch"
            ;
#line 321 "decomp.ch"
#line 321 "decomp.ch"
            goto _Case120 ;
            
#line 321 "decomp.ch"
#line 324 "decomp.ch"
        case chopb::SEP_BEFORE : 
#line 324 "decomp.ch"
#line 324 "decomp.ch"
        _Case120 : 
#line 324 "decomp.ch"
#line 324 "decomp.ch"
            ;
#line 324 "decomp.ch"
#line 324 "decomp.ch"
            ;
#line 324 "decomp.ch"
#line 324 "decomp.ch"
            goto _Case121 ;
            
#line 324 "decomp.ch"
#line 325 "decomp.ch"
        case chopb::SEP_AFTER : 
#line 325 "decomp.ch"
#line 325 "decomp.ch"
        _Case121 : 
#line 325 "decomp.ch"
#line 325 "decomp.ch"
            ;
#line 325 "decomp.ch"
#line 325 "decomp.ch"
            ;
#line 325 "decomp.ch"
#line 325 "decomp.ch"
            goto _Case122 ;
            
#line 325 "decomp.ch"
#line 326 "decomp.ch"
        case chopb::SEP_OMIT : 
#line 326 "decomp.ch"
#line 326 "decomp.ch"
        _Case122 : 
#line 326 "decomp.ch"
#line 326 "decomp.ch"
            ;
#line 326 "decomp.ch"
#line 326 "decomp.ch"
            return ;
            
#line 326 "decomp.ch"
#line 326 "decomp.ch"
            goto _Case123 ;
            
#line 326 "decomp.ch"
#line 328 "decomp.ch"
        default : 
#line 328 "decomp.ch"
#line 328 "decomp.ch"
        _Case123 : 
#line 328 "decomp.ch"
#line 328 "decomp.ch"
            ;
#line 328 "decomp.ch"
#line 328 "decomp.ch"
            DecompCplus::control_stat1(paramTree);
#line 328 "decomp.ch"
#line 329 "decomp.ch"
            return ;
            
#line 329 "decomp.ch"
    }
#line 329 "decomp.ch"
    
#line 329 "decomp.ch"
#line 331 "decomp.ch"
    SepBefore();
#line 331 "decomp.ch"
    
#line 331 "decomp.ch"
#line 331 "decomp.ch"
    PrintString(";");
#line 331 "decomp.ch"
#line 332 "decomp.ch"
terminal : 
#line 332 "decomp.ch"
#line 333 "decomp.ch"
    comm(paramTree, POST);
#line 333 "decomp.ch"
#line 334 "decomp.ch"
    
#line 334 "decomp.ch"
#line 334 "decomp.ch"
}
#line 334 "decomp.ch"

#line 336 "decomp.ch"

#line 336 "decomp.ch"
int DecompChopb::OpTypeAlign ( PTREE tree )
#line 336 "decomp.ch"
{
#line 336 "decomp.ch"
    register PPTREE _inter ;
#line 336 "decomp.ch"

#line 336 "decomp.ch"
#line 336 "decomp.ch"
    int _nextVal ;
    
#line 336 "decomp.ch"
#line 338 "decomp.ch"
    
    PTREE   son ;
#line 338 "decomp.ch"
    
#line 338 "decomp.ch"
#line 340 "decomp.ch"
    switch ( NumberTree(tree) ) {
#line 340 "decomp.ch"
#line 340 "decomp.ch"
        case chopb::NODE_TREE : 
#line 340 "decomp.ch"
#line 340 "decomp.ch"
        _Case127 : 
#line 340 "decomp.ch"
#line 340 "decomp.ch"
            ;
#line 340 "decomp.ch"
#line 340 "decomp.ch"
            goto _Case128 ;
            
#line 340 "decomp.ch"
#line 343 "decomp.ch"
        case chopb::NODE_LIST : 
#line 343 "decomp.ch"
#line 343 "decomp.ch"
        _Case128 : 
#line 343 "decomp.ch"
#line 343 "decomp.ch"
            ;
#line 343 "decomp.ch"
#line 343 "decomp.ch"
            return LIST_ALIGN ;
            
#line 343 "decomp.ch"
#line 344 "decomp.ch"
            break ;
            
#line 344 "decomp.ch"
#line 345 "decomp.ch"
        default : 
#line 345 "decomp.ch"
#line 345 "decomp.ch"
        _Case129 : 
#line 345 "decomp.ch"
#line 345 "decomp.ch"
            ;
#line 345 "decomp.ch"
#line 345 "decomp.ch"
            return DecompCplus::OpTypeAlign(tree);
            
#line 345 "decomp.ch"
    }
#line 345 "decomp.ch"
    
#line 345 "decomp.ch"
#line 347 "decomp.ch"
    
#line 347 "decomp.ch"
#line 347 "decomp.ch"
}
#line 347 "decomp.ch"

#line 349 "decomp.ch"

#line 349 "decomp.ch"
int DecompChopb::OpType ( PTREE tree )
#line 349 "decomp.ch"
{
#line 349 "decomp.ch"
    register PPTREE _inter ;
#line 349 "decomp.ch"

#line 349 "decomp.ch"
#line 349 "decomp.ch"
    int _nextVal ;
    
#line 349 "decomp.ch"
#line 351 "decomp.ch"
    
    PTREE   son ;
#line 351 "decomp.ch"
    
#line 351 "decomp.ch"
#line 353 "decomp.ch"
    switch ( NumberTree(tree) ) {
#line 353 "decomp.ch"
#line 353 "decomp.ch"
        case chopb::NODE_TREE : 
#line 353 "decomp.ch"
#line 353 "decomp.ch"
        _Case133 : 
#line 353 "decomp.ch"
#line 353 "decomp.ch"
            ;
#line 353 "decomp.ch"
#line 353 "decomp.ch"
            goto _Case134 ;
            
#line 353 "decomp.ch"
#line 355 "decomp.ch"
        case chopb::NODE_LIST : 
#line 355 "decomp.ch"
#line 355 "decomp.ch"
        _Case134 : 
#line 355 "decomp.ch"
#line 355 "decomp.ch"
            ;
#line 355 "decomp.ch"
#line 355 "decomp.ch"
            return 0 ;
            
#line 355 "decomp.ch"
#line 355 "decomp.ch"
            goto _Case135 ;
            
#line 355 "decomp.ch"
#line 356 "decomp.ch"
        default : 
#line 356 "decomp.ch"
#line 356 "decomp.ch"
        _Case135 : 
#line 356 "decomp.ch"
#line 356 "decomp.ch"
            ;
#line 356 "decomp.ch"
#line 356 "decomp.ch"
            return DecompCplus::OpType(tree);
            
#line 356 "decomp.ch"
    }
#line 356 "decomp.ch"
    
#line 356 "decomp.ch"
#line 358 "decomp.ch"
    
#line 358 "decomp.ch"
#line 358 "decomp.ch"
}
#line 358 "decomp.ch"

#line 360 "decomp.ch"

#line 360 "decomp.ch"
int DecompChopb::IsTop ( PTREE tree, int internal )
#line 360 "decomp.ch"
{
#line 360 "decomp.ch"
    register PPTREE _inter ;
#line 360 "decomp.ch"

#line 360 "decomp.ch"
#line 360 "decomp.ch"
    int _nextVal ;
    
#line 360 "decomp.ch"
#line 362 "decomp.ch"
    
    PTREE   father, prec, son ;
#line 362 "decomp.ch"
    
#line 362 "decomp.ch"
#line 364 "decomp.ch"
    switch ( NumberTree(tree) ) {
#line 364 "decomp.ch"
#line 366 "decomp.ch"
        case chopb::EXP_LIST : 
#line 366 "decomp.ch"
#line 366 "decomp.ch"
            (son=SonTree(tree, 1));
#line 366 "decomp.ch"
            
#line 366 "decomp.ch"
#line 366 "decomp.ch"
        _Case147 : 
#line 366 "decomp.ch"
#line 366 "decomp.ch"
            ;
#line 366 "decomp.ch"
#line 366 "decomp.ch"
            if ( strcmp(BrainyValue(son), "WriteString") && strcmp(BrainyValue(son), "PrintString") ) 
#line 366 "decomp.ch"
#line 367 "decomp.ch"
                return DecompCplus::IsTop(tree, internal);
            
#line 367 "decomp.ch"
#line 367 "decomp.ch"
            goto _Case148 ;
            
#line 367 "decomp.ch"
#line 368 "decomp.ch"
        case chopb::STRING_LIST : 
#line 368 "decomp.ch"
#line 368 "decomp.ch"
        _Case148 : 
#line 368 "decomp.ch"
#line 368 "decomp.ch"
            ;
#line 368 "decomp.ch"
#line 368 "decomp.ch"
            ;
#line 368 "decomp.ch"
#line 368 "decomp.ch"
            goto _Case149 ;
            
#line 368 "decomp.ch"
#line 370 "decomp.ch"
        case chopb::STRING : 
#line 370 "decomp.ch"
#line 370 "decomp.ch"
        _Case149 : 
#line 370 "decomp.ch"
#line 370 "decomp.ch"
            ;
#line 370 "decomp.ch"
#line 370 "decomp.ch"
            if ( DecompCplus::IsTop(tree, internal) == -1 ) 
#line 370 "decomp.ch"
#line 371 "decomp.ch"
                return -1 ;
            
#line 371 "decomp.ch"
#line 371 "decomp.ch"
            goto _Case150 ;
            
#line 371 "decomp.ch"
#line 372 "decomp.ch"
        case chopb::ARRO : 
#line 372 "decomp.ch"
#line 372 "decomp.ch"
        _Case150 : 
#line 372 "decomp.ch"
#line 372 "decomp.ch"
            ;
#line 372 "decomp.ch"
#line 372 "decomp.ch"
            ;
#line 372 "decomp.ch"
#line 372 "decomp.ch"
            goto _Case151 ;
            
#line 372 "decomp.ch"
#line 373 "decomp.ch"
        case chopb::VALUE : 
#line 373 "decomp.ch"
#line 373 "decomp.ch"
        _Case151 : 
#line 373 "decomp.ch"
#line 373 "decomp.ch"
            ;
#line 373 "decomp.ch"
#line 373 "decomp.ch"
            ;
#line 373 "decomp.ch"
#line 373 "decomp.ch"
            goto _Case152 ;
            
#line 373 "decomp.ch"
#line 374 "decomp.ch"
        case chopb::SPACE : 
#line 374 "decomp.ch"
#line 374 "decomp.ch"
        _Case152 : 
#line 374 "decomp.ch"
#line 374 "decomp.ch"
            ;
#line 374 "decomp.ch"
#line 374 "decomp.ch"
            ;
#line 374 "decomp.ch"
#line 374 "decomp.ch"
            goto _Case153 ;
            
#line 374 "decomp.ch"
#line 375 "decomp.ch"
        case chopb::SEP_BEFORE : 
#line 375 "decomp.ch"
#line 375 "decomp.ch"
        _Case153 : 
#line 375 "decomp.ch"
#line 375 "decomp.ch"
            ;
#line 375 "decomp.ch"
#line 375 "decomp.ch"
            ;
#line 375 "decomp.ch"
#line 375 "decomp.ch"
            goto _Case154 ;
            
#line 375 "decomp.ch"
#line 376 "decomp.ch"
        case chopb::SEP_AFTER : 
#line 376 "decomp.ch"
#line 376 "decomp.ch"
        _Case154 : 
#line 376 "decomp.ch"
#line 376 "decomp.ch"
            ;
#line 376 "decomp.ch"
#line 376 "decomp.ch"
            ;
#line 376 "decomp.ch"
#line 376 "decomp.ch"
            goto _Case155 ;
            
#line 376 "decomp.ch"
#line 377 "decomp.ch"
        case chopb::SEP_OMIT : 
#line 377 "decomp.ch"
#line 377 "decomp.ch"
        _Case155 : 
#line 377 "decomp.ch"
#line 377 "decomp.ch"
            ;
#line 377 "decomp.ch"
#line 377 "decomp.ch"
            ;
#line 377 "decomp.ch"
#line 377 "decomp.ch"
            goto _Case156 ;
            
#line 377 "decomp.ch"
#line 379 "decomp.ch"
        case chopb::TAB : 
#line 379 "decomp.ch"
#line 379 "decomp.ch"
        _Case156 : 
#line 379 "decomp.ch"
#line 379 "decomp.ch"
            ;
#line 379 "decomp.ch"
#line 379 "decomp.ch"
            (father=FatherTree(tree));
#line 379 "decomp.ch"
            
#line 379 "decomp.ch"
#line 380 "decomp.ch"
            if ( ((_inter = (PPTREE)father,1) && 
#line 380 "decomp.ch"
                    (NumberTree(_inter) == LIST) &&
#line 380 "decomp.ch"
                    ((prec=SonTree(_inter,1)),1) &&
#line 380 "decomp.ch"
                    1) ) {
#line 380 "decomp.ch"
#line 381 "decomp.ch"
                            if ( Sequence(prec, tree) ) 
#line 381 "decomp.ch"
#line 382 "decomp.ch"
                                return -1 ;
                            
#line 382 "decomp.ch"
                            else 
#line 382 "decomp.ch"
#line 384 "decomp.ch"
                                return 300 ;
                                
#line 384 "decomp.ch"
                            
#line 384 "decomp.ch"
#line 385 "decomp.ch"
                            
#line 385 "decomp.ch"
#line 385 "decomp.ch"
                         } else 
#line 385 "decomp.ch"
#line 386 "decomp.ch"
                return 300 ;
                
#line 386 "decomp.ch"
            
#line 386 "decomp.ch"
#line 387 "decomp.ch"
            break ;
            
#line 387 "decomp.ch"
#line 388 "decomp.ch"
        default : 
#line 388 "decomp.ch"
#line 388 "decomp.ch"
        _Case157 : 
#line 388 "decomp.ch"
#line 388 "decomp.ch"
            ;
#line 388 "decomp.ch"
#line 388 "decomp.ch"
            return DecompCplus::IsTop(tree, internal);
            
#line 388 "decomp.ch"
    }
#line 388 "decomp.ch"
    
#line 388 "decomp.ch"
#line 390 "decomp.ch"
    return 0 ;
    
#line 390 "decomp.ch"
#line 391 "decomp.ch"
    
#line 391 "decomp.ch"
#line 391 "decomp.ch"
}
#line 391 "decomp.ch"

#line 396 "decomp.ch"

#line 396 "decomp.ch"
void DecompChopb::TraiterSequence ( PTREE tree )
#line 396 "decomp.ch"
{
#line 396 "decomp.ch"
    register PPTREE _inter ;
#line 396 "decomp.ch"

#line 396 "decomp.ch"
#line 396 "decomp.ch"
    int _nextVal ;
    
#line 396 "decomp.ch"
#line 399 "decomp.ch"
    
    PTREE   list, son, father, list1, list2 ;
#line 399 "decomp.ch"
    
#line 399 "decomp.ch"
#line 400 "decomp.ch"
    int x0, y0, x, y, dx, dy ;
    
#line 400 "decomp.ch"
#line 401 "decomp.ch"
    int delta = 0 ;
    
#line 401 "decomp.ch"
#line 402 "decomp.ch"
    PTREE   sonOld ;
#line 402 "decomp.ch"
    
#line 402 "decomp.ch"
#line 403 "decomp.ch"
    ItPtree it (tree) ;
    
#line 403 "decomp.ch"
#line 404 "decomp.ch"
    PPTREE  _for_elem ;
    
#line 404 "decomp.ch"
#line 406 "decomp.ch"
    while ( (for_elem = it++) ) {
#line 406 "decomp.ch"
#line 407 "decomp.ch"
                                    switch ( NumberTree(for_elem) ) {
#line 407 "decomp.ch"
#line 409 "decomp.ch"
                                        case chopb::DECLARATION : 
#line 409 "decomp.ch"
#line 409 "decomp.ch"
                                        _Case162 : 
#line 409 "decomp.ch"
#line 409 "decomp.ch"
                                            ;
#line 409 "decomp.ch"
#line 409 "decomp.ch"
                                            it.SkipSon(1);
#line 409 "decomp.ch"
#line 410 "decomp.ch"
                                            continue ;
                                            
#line 410 "decomp.ch"
#line 410 "decomp.ch"
                                            goto _Case163 ;
                                            
#line 410 "decomp.ch"
#line 410 "decomp.ch"
                                        case chopb::COMPOUND : 
#line 410 "decomp.ch"
#line 410 "decomp.ch"
                                        _Case163 : 
#line 410 "decomp.ch"
#line 410 "decomp.ch"
                                            ;
#line 410 "decomp.ch"
#line 410 "decomp.ch"
                                            goto _Case164 ;
                                            
#line 410 "decomp.ch"
#line 413 "decomp.ch"
                                        case chopb::ALINEA : 
#line 413 "decomp.ch"
#line 413 "decomp.ch"
                                        _Case164 : 
#line 413 "decomp.ch"
#line 413 "decomp.ch"
                                            ;
#line 413 "decomp.ch"
#line 413 "decomp.ch"
                                            {
#line 413 "decomp.ch"
#line 413 "decomp.ch"
                                                PTREE   _Baum0 ;
#line 413 "decomp.ch"
                                                
#line 413 "decomp.ch"
#line 414 "decomp.ch"
                                                
                                                int oldX = 0 ;
                                                
#line 414 "decomp.ch"
#line 415 "decomp.ch"
                                                delta = 0 ;
#line 415 "decomp.ch"
#line 418 "decomp.ch"
                                                _Baum0 = (PPTREE) 0 ;
#line 418 "decomp.ch"
                                                
#line 418 "decomp.ch"
#line 418 "decomp.ch"
                                                GetCoordAbs(for_elem, _Baum0, &x0, &y0);
#line 418 "decomp.ch"
#line 419 "decomp.ch"
                                                MarkCoordTree(for_elem, x0, 0);
#line 419 "decomp.ch"
#line 422 "decomp.ch"
                                                ((_inter = (PPTREE)for_elem,1) && 
#line 422 "decomp.ch"
                                                    ((list=SonTree(_inter,1)),1) &&
#line 422 "decomp.ch"
                                                    1);
#line 422 "decomp.ch"
                                                ;
#line 422 "decomp.ch"
#line 423 "decomp.ch"
                                                sonOld = (PPTREE) 0 ;
#line 423 "decomp.ch"
                                                
#line 423 "decomp.ch"
#line 424 "decomp.ch"
                                                while ( list ) {
#line 424 "decomp.ch"
#line 424 "decomp.ch"
                                                                    PTREE   _Baum1 ;
#line 424 "decomp.ch"
                                                                    
#line 424 "decomp.ch"
#line 425 "decomp.ch"
                                                                    (son=(list?list.Nextl():(PPTREE)0));
#line 425 "decomp.ch"
                                                                    
#line 425 "decomp.ch"
#line 426 "decomp.ch"
                                                                    _Baum1 = (PPTREE) 0 ;
#line 426 "decomp.ch"
                                                                    
#line 426 "decomp.ch"
#line 426 "decomp.ch"
                                                                    GetCoordAbs(son, _Baum1, &x0, &y0);
#line 426 "decomp.ch"
#line 427 "decomp.ch"
                                                                    GetCoord(son, &x, &y, &dx, &dy);
#line 427 "decomp.ch"
#line 430 "decomp.ch"
                                                                    if ( x0 <= oldX ) {
#line 430 "decomp.ch"
#line 431 "decomp.ch"
                                                                                            delta = 0 ;
#line 431 "decomp.ch"
#line 432 "decomp.ch"
                                                                                            
#line 432 "decomp.ch"
#line 432 "decomp.ch"
                                                                                        }
#line 432 "decomp.ch"
#line 433 "decomp.ch"
                                                                    oldX = x0 ;
#line 433 "decomp.ch"
#line 436 "decomp.ch"
                                                                    if ( x0 + dx + delta > rightMargin ) {
#line 436 "decomp.ch"
#line 437 "decomp.ch"
                                                                                                                if ( Sequence(sonOld, son) ) {
#line 437 "decomp.ch"
#line 438 "decomp.ch"
                                                                                                                                                {
#line 438 "decomp.ch"
                                                                                                                                                PPTREE _ptTree0=(PPTREE) 0;
#line 438 "decomp.ch"
                                                                                                                                                _ptTree0 = (PPTREE) 0;
#line 438 "decomp.ch"
                                                                                                                                                {
#line 438 "decomp.ch"
                                                                                                                                                PPTREE _ptTree1= (PPTREE) 0 ;
#line 438 "decomp.ch"
                                                                                                                                                {
#line 438 "decomp.ch"
                                                                                                                                                PPTREE _ptTree2= (PPTREE) 0,_ptRes2= (PPTREE) 0;
#line 438 "decomp.ch"
                                                                                                                                                _ptRes2 = MakeTree(chopb::NEWLINE, 1);
#line 438 "decomp.ch"
                                                                                                                                                _ptTree2 = MakeString("1") ;
#line 438 "decomp.ch"
                                                                                                                                                ReplaceTree(_ptRes2, 1, _ptTree2);
#line 438 "decomp.ch"
                                                                                                                                                _ptTree1 = _ptRes2;
#line 438 "decomp.ch"
                                                                                                                                                }
#line 438 "decomp.ch"
                                                                                                                                                _ptTree0 = AddList( _ptTree0,_ptTree1);
#line 438 "decomp.ch"
                                                                                                                                                }
#line 438 "decomp.ch"
                                                                                                                                                {
#line 438 "decomp.ch"
                                                                                                                                                PPTREE _ptTree1= (PPTREE) 0 ;
#line 438 "decomp.ch"
                                                                                                                                                {
#line 438 "decomp.ch"
                                                                                                                                                PPTREE _ptTree2= (PPTREE) 0,_ptRes2= (PPTREE) 0;
#line 438 "decomp.ch"
                                                                                                                                                _ptRes2 = MakeTree(chopb::TAB, 1);
#line 438 "decomp.ch"
                                                                                                                                                _ptTree2 = MakeString("1") ;
#line 438 "decomp.ch"
                                                                                                                                                ReplaceTree(_ptRes2, 1, _ptTree2);
#line 438 "decomp.ch"
                                                                                                                                                _ptTree1 = _ptRes2;
#line 438 "decomp.ch"
                                                                                                                                                }
#line 438 "decomp.ch"
                                                                                                                                                _ptTree0 = AddList( _ptTree0,_ptTree1);
#line 438 "decomp.ch"
                                                                                                                                                }
#line 438 "decomp.ch"
                                                                                                                                                list2 = _ptTree0;
#line 438 "decomp.ch"
                                                                                                                                                ;
#line 438 "decomp.ch"
                                                                                                                                                }
#line 438 "decomp.ch"
                                                                                                                                                
#line 438 "decomp.ch"
#line 439 "decomp.ch"
                                                                                                                                                PutAttr(son, list2, PRE_ATTR, PUT_BEG);
#line 439 "decomp.ch"
#line 440 "decomp.ch"
                                                                                                                                                delta = -x0 + TAB_VALUE(dy, 1);
#line 440 "decomp.ch"
#line 441 "decomp.ch"
                                                                                                                                                
#line 441 "decomp.ch"
#line 441 "decomp.ch"
                                                                                                                                                }
#line 441 "decomp.ch"
#line 442 "decomp.ch"
                                                                                                                
#line 442 "decomp.ch"
#line 442 "decomp.ch"
                                                                                                             }
#line 442 "decomp.ch"
#line 443 "decomp.ch"
                                                                    PutCoord(son, x + delta, y, dx, dy);
#line 443 "decomp.ch"
#line 444 "decomp.ch"
                                                                    (sonOld=son);
#line 444 "decomp.ch"
                                                                    
#line 444 "decomp.ch"
#line 445 "decomp.ch"
                                                                    
#line 445 "decomp.ch"
#line 445 "decomp.ch"
                                                                }
#line 445 "decomp.ch"
#line 448 "decomp.ch"
                                                UnMarkCoordTree(for_elem);
#line 448 "decomp.ch"
#line 449 "decomp.ch"
                                                
#line 449 "decomp.ch"
#line 449 "decomp.ch"
                                            }
                                            
#line 449 "decomp.ch"
#line 450 "decomp.ch"
                                            break ;
                                            
#line 450 "decomp.ch"
#line 452 "decomp.ch"
                                        case chopb::PARSE : 
#line 452 "decomp.ch"
#line 452 "decomp.ch"
                                            (list=SonTree(for_elem, 1));
#line 452 "decomp.ch"
                                            
#line 452 "decomp.ch"
#line 452 "decomp.ch"
                                        _Case165 : 
#line 452 "decomp.ch"
#line 452 "decomp.ch"
                                            ;
#line 452 "decomp.ch"
#line 452 "decomp.ch"
                                            {
#line 452 "decomp.ch"
#line 453 "decomp.ch"
                                                int overlap = 0 ;
                                                
#line 453 "decomp.ch"
#line 454 "decomp.ch"
                                                while ( ((_inter = (PPTREE)list,1) && 
#line 454 "decomp.ch"
                                                            (NumberTree(_inter) == LIST) &&
#line 454 "decomp.ch"
                                                            1) ) {
#line 454 "decomp.ch"
#line 454 "decomp.ch"
                                                                    PTREE   _Baum2 ;
#line 454 "decomp.ch"
                                                                    
#line 454 "decomp.ch"
#line 455 "decomp.ch"
                                                                    (son=(list?list.Nextl():(PPTREE)0));
#line 455 "decomp.ch"
                                                                    
#line 455 "decomp.ch"
#line 456 "decomp.ch"
                                                                    _Baum2 = (PPTREE) 0 ;
#line 456 "decomp.ch"
                                                                    
#line 456 "decomp.ch"
#line 456 "decomp.ch"
                                                                    GetCoordAbs(son, _Baum2, &x0, &y0);
#line 456 "decomp.ch"
#line 457 "decomp.ch"
                                                                    GetCoord(son, &x, &y, &dx, &dy);
#line 457 "decomp.ch"
#line 458 "decomp.ch"
                                                                    if ( x0 + dx > rightMargin ) {
#line 458 "decomp.ch"
#line 459 "decomp.ch"
                                                                                                        overlap = 1 ;
#line 459 "decomp.ch"
#line 460 "decomp.ch"
                                                                                                        break ;
                                                                                                        
#line 460 "decomp.ch"
#line 461 "decomp.ch"
                                                                                                        
#line 461 "decomp.ch"
#line 461 "decomp.ch"
                                                                                                    }
#line 461 "decomp.ch"
#line 462 "decomp.ch"
                                                                    
#line 462 "decomp.ch"
#line 462 "decomp.ch"
                                                                 }
#line 462 "decomp.ch"
#line 468 "decomp.ch"
                                                if ( overlap ) {
#line 468 "decomp.ch"
#line 469 "decomp.ch"
                                                                    ((_inter = (PPTREE)for_elem,1) && 
#line 469 "decomp.ch"
                                                                        ((list=SonTree(_inter,1)),1) &&
#line 469 "decomp.ch"
                                                                        1);
#line 469 "decomp.ch"
                                                                    ;
#line 469 "decomp.ch"
#line 470 "decomp.ch"
                                                                    {
#line 470 "decomp.ch"
                                                                        PPTREE _ptTree0=(PPTREE) 0;
#line 470 "decomp.ch"
                                                                        _ptTree0 = (PPTREE) 0;
#line 470 "decomp.ch"
                                                                        {
#line 470 "decomp.ch"
                                                                            PPTREE _ptTree1= (PPTREE) 0 ;
#line 470 "decomp.ch"
                                                                            {
#line 470 "decomp.ch"
                                                                                PPTREE _ptTree2= (PPTREE) 0,_ptRes2= (PPTREE) 0;
#line 470 "decomp.ch"
                                                                                _ptRes2 = MakeTree(chopb::NEWLINE, 1);
#line 470 "decomp.ch"
                                                                                _ptTree2 = MakeString("1") ;
#line 470 "decomp.ch"
                                                                                ReplaceTree(_ptRes2, 1, _ptTree2);
#line 470 "decomp.ch"
                                                                                _ptTree1 = _ptRes2;
#line 470 "decomp.ch"
                                                                            }
#line 470 "decomp.ch"
                                                                            _ptTree0 = AddList( _ptTree0,_ptTree1);
#line 470 "decomp.ch"
                                                                        }
#line 470 "decomp.ch"
                                                                        {
#line 470 "decomp.ch"
                                                                            PPTREE _ptTree1= (PPTREE) 0 ;
#line 470 "decomp.ch"
                                                                            {
#line 470 "decomp.ch"
                                                                                PPTREE _ptTree2= (PPTREE) 0,_ptRes2= (PPTREE) 0;
#line 470 "decomp.ch"
                                                                                _ptRes2 = MakeTree(chopb::GOTO, 1);
#line 470 "decomp.ch"
                                                                                _ptTree2 = MakeString("0") ;
#line 470 "decomp.ch"
                                                                                ReplaceTree(_ptRes2, 1, _ptTree2);
#line 470 "decomp.ch"
                                                                                _ptTree1 = _ptRes2;
#line 470 "decomp.ch"
                                                                            }
#line 470 "decomp.ch"
                                                                            _ptTree0 = AddList( _ptTree0,_ptTree1);
#line 470 "decomp.ch"
                                                                        }
#line 470 "decomp.ch"
                                                                        {
#line 470 "decomp.ch"
                                                                            PPTREE _ptTree1= (PPTREE) 0 ;
#line 470 "decomp.ch"
                                                                            {
#line 470 "decomp.ch"
                                                                                PPTREE _ptTree2= (PPTREE) 0,_ptRes2= (PPTREE) 0;
#line 470 "decomp.ch"
                                                                                _ptRes2 = MakeTree(chopb::MARK, 0);
#line 470 "decomp.ch"
                                                                                _ptTree1 = _ptRes2;
#line 470 "decomp.ch"
                                                                            }
#line 470 "decomp.ch"
                                                                            _ptTree0 = AddList( _ptTree0,_ptTree1);
#line 470 "decomp.ch"
                                                                        }
#line 470 "decomp.ch"
                                                                        list1 = _ptTree0;
#line 470 "decomp.ch"
                                                                        ;
#line 470 "decomp.ch"
                                                                    }
#line 470 "decomp.ch"
                                                                    
#line 470 "decomp.ch"
#line 471 "decomp.ch"
                                                                    {
#line 471 "decomp.ch"
                                                                        PPTREE _ptTree0=(PPTREE) 0;
#line 471 "decomp.ch"
                                                                        _ptTree0 = (PPTREE) 0;
#line 471 "decomp.ch"
                                                                        {
#line 471 "decomp.ch"
                                                                            PPTREE _ptTree1= (PPTREE) 0 ;
#line 471 "decomp.ch"
                                                                            {
#line 471 "decomp.ch"
                                                                                PPTREE _ptTree2= (PPTREE) 0,_ptRes2= (PPTREE) 0;
#line 471 "decomp.ch"
                                                                                _ptRes2 = MakeTree(chopb::UNMARK, 0);
#line 471 "decomp.ch"
                                                                                _ptTree1 = _ptRes2;
#line 471 "decomp.ch"
                                                                            }
#line 471 "decomp.ch"
                                                                            _ptTree0 = AddList( _ptTree0,_ptTree1);
#line 471 "decomp.ch"
                                                                        }
#line 471 "decomp.ch"
                                                                        list2 = _ptTree0;
#line 471 "decomp.ch"
                                                                        ;
#line 471 "decomp.ch"
                                                                    }
#line 471 "decomp.ch"
                                                                    
#line 471 "decomp.ch"
#line 472 "decomp.ch"
                                                                    if ( !sontree(list, 2) ) {
#line 472 "decomp.ch"
#line 472 "decomp.ch"
                                                                                                    PTREE   _Baum3 ;
#line 472 "decomp.ch"
                                                                                                    
#line 472 "decomp.ch"
#line 473 "decomp.ch"
                                                                                                    {
#line 473 "decomp.ch"
                                                                                                        PPTREE _ptTree0= (PPTREE) 0,_ptRes0= (PPTREE) 0;
#line 473 "decomp.ch"
                                                                                                        _ptRes0 = MakeTree(chopb::ATTRIBUTS, 3);
#line 473 "decomp.ch"
                                                                                                        _ptTree0 = StoreRef(sontree(list, 1));
#line 473 "decomp.ch"
                                                                                                        ReplaceTree(_ptRes0, 1, _ptTree0);
#line 473 "decomp.ch"
                                                                                                        ReplaceTree(_ptRes0, 2, list1);
#line 473 "decomp.ch"
                                                                                                        ReplaceTree(_ptRes0, 3, list2);
#line 473 "decomp.ch"
                                                                                                        _Baum3 = _ptRes0;
#line 473 "decomp.ch"
                                                                                                    }
#line 473 "decomp.ch"
                                                                                                    
#line 473 "decomp.ch"
#line 473 "decomp.ch"
                                                                                                    replacetree(list, 1, _Baum3);
#line 473 "decomp.ch"
#line 474 "decomp.ch"
                                                                                                    
#line 474 "decomp.ch"
#line 474 "decomp.ch"
                                                                                                 } else 
#line 474 "decomp.ch"
                                                                    {
#line 474 "decomp.ch"
#line 474 "decomp.ch"
                                                                        PTREE   _Baum5 ;
#line 474 "decomp.ch"
                                                                        
#line 474 "decomp.ch"
#line 474 "decomp.ch"
                                                                        PTREE   _Baum4 ;
#line 474 "decomp.ch"
                                                                        
#line 474 "decomp.ch"
#line 475 "decomp.ch"
                                                                        {
#line 475 "decomp.ch"
                                                                            PPTREE _ptTree0= (PPTREE) 0,_ptRes0= (PPTREE) 0;
#line 475 "decomp.ch"
                                                                            _ptRes0 = MakeTree(chopb::ATTRIBUTS, 3);
#line 475 "decomp.ch"
                                                                            _ptTree0 = StoreRef(sontree(list, 1));
#line 475 "decomp.ch"
                                                                            ReplaceTree(_ptRes0, 1, _ptTree0);
#line 475 "decomp.ch"
                                                                            ReplaceTree(_ptRes0, 2, list1);
#line 475 "decomp.ch"
                                                                            _Baum4 = _ptRes0;
#line 475 "decomp.ch"
                                                                        }
#line 475 "decomp.ch"
                                                                        
#line 475 "decomp.ch"
#line 475 "decomp.ch"
                                                                        replacetree(list, 1, _Baum4);
#line 475 "decomp.ch"
#line 476 "decomp.ch"
                                                                        while ( sontree(list, 2) ) 
#line 476 "decomp.ch"
#line 477 "decomp.ch"
                                                                            (list?list.Nextl():(PPTREE)0);
#line 477 "decomp.ch"
#line 478 "decomp.ch"
                                                                        {
#line 478 "decomp.ch"
                                                                            PPTREE _ptTree0= (PPTREE) 0,_ptRes0= (PPTREE) 0;
#line 478 "decomp.ch"
                                                                            _ptRes0 = MakeTree(chopb::ATTRIBUTS, 3);
#line 478 "decomp.ch"
                                                                            _ptTree0 = StoreRef(sontree(list, 1));
#line 478 "decomp.ch"
                                                                            ReplaceTree(_ptRes0, 1, _ptTree0);
#line 478 "decomp.ch"
                                                                            ReplaceTree(_ptRes0, 3, list2);
#line 478 "decomp.ch"
                                                                            _Baum5 = _ptRes0;
#line 478 "decomp.ch"
                                                                        }
#line 478 "decomp.ch"
                                                                        
#line 478 "decomp.ch"
#line 478 "decomp.ch"
                                                                        replacetree(list, 1, _Baum5);
#line 478 "decomp.ch"
#line 479 "decomp.ch"
                                                                        
#line 479 "decomp.ch"
#line 479 "decomp.ch"
                                                                    }
                                                                    
#line 479 "decomp.ch"
#line 480 "decomp.ch"
                                                                    
#line 480 "decomp.ch"
#line 480 "decomp.ch"
                                                                }
#line 480 "decomp.ch"
#line 481 "decomp.ch"
                                                
#line 481 "decomp.ch"
#line 481 "decomp.ch"
                                            }
                                            
#line 481 "decomp.ch"
                                    }
#line 481 "decomp.ch"
                                    
#line 481 "decomp.ch"
#line 483 "decomp.ch"
                                    
#line 483 "decomp.ch"
#line 483 "decomp.ch"
                                   }
#line 483 "decomp.ch"
#line 484 "decomp.ch"
    
#line 484 "decomp.ch"
#line 484 "decomp.ch"
}
#line 484 "decomp.ch"

#line 488 "decomp.ch"

#line 488 "decomp.ch"
void DecompChopb::ChopTree ( PTREE tree, int funcAlone )
#line 488 "decomp.ch"
{
#line 488 "decomp.ch"
#line 488 "decomp.ch"
    int _nextVal ;
    
#line 488 "decomp.ch"
#line 491 "decomp.ch"
    
    static bool first = true ;
    
#line 491 "decomp.ch"
#line 493 "decomp.ch"
    if ( first ) {
#line 493 "decomp.ch"
#line 494 "decomp.ch"
                    copy();
#line 494 "decomp.ch"
#line 495 "decomp.ch"
                    first = false ;
#line 495 "decomp.ch"
#line 496 "decomp.ch"
                    
#line 496 "decomp.ch"
#line 496 "decomp.ch"
                  }
#line 496 "decomp.ch"
#line 497 "decomp.ch"
    SwitchLang("chopb");
#line 497 "decomp.ch"
#line 498 "decomp.ch"
    if ( simplifyExpression ) 
#line 498 "decomp.ch"
#line 499 "decomp.ch"
        clean_tree(tree);
#line 499 "decomp.ch"
#line 500 "decomp.ch"
    Treat(tree);
#line 500 "decomp.ch"
#line 501 "decomp.ch"
    Decomp(tree, funcAlone);
#line 501 "decomp.ch"
#line 502 "decomp.ch"
    AddRef(tree);
#line 502 "decomp.ch"
#line 503 "decomp.ch"
    
#line 503 "decomp.ch"
#line 503 "decomp.ch"
}
#line 503 "decomp.ch"

#line 507 "decomp.ch"

#line 507 "decomp.ch"
void DecompChopb::copy ()
#line 507 "decomp.ch"
{
#line 507 "decomp.ch"
#line 507 "decomp.ch"
    int _nextVal ;
    
#line 507 "decomp.ch"
#line 510 "decomp.ch"
    
    const char  *str ;
    
#line 510 "decomp.ch"
#line 512 "decomp.ch"
    str = "\n\r Metachop prettyPrinter version 3.0, CopyRight(C) 1995-2023 Eric Lavillonniere \n\r";
#line 512 "decomp.ch"
#line 513 "decomp.ch"
    _write(2, str, strlen(str));
#line 513 "decomp.ch"
#line 514 "decomp.ch"
    str = " C++ prettyPrinter comes with ABSOLUTELY NO WARRANTY.\n\r";
#line 514 "decomp.ch"
#line 515 "decomp.ch"
    _write(2, str, strlen(str));
#line 515 "decomp.ch"
#line 516 "decomp.ch"
    str = " This is free software, and you are welcome to redistribute it \n\r";
#line 516 "decomp.ch"
#line 517 "decomp.ch"
    _write(2, str, strlen(str));
#line 517 "decomp.ch"
#line 518 "decomp.ch"
    str = " under certain conditions.\n\r";
#line 518 "decomp.ch"
#line 519 "decomp.ch"
    _write(2, str, strlen(str));
#line 519 "decomp.ch"
#line 520 "decomp.ch"
    str = " For details see file COPYING in C++ prettyPrinter directory.\n\r\n\r";
#line 520 "decomp.ch"
#line 521 "decomp.ch"
    _write(2, str, strlen(str));
#line 521 "decomp.ch"
#line 522 "decomp.ch"
    
#line 522 "decomp.ch"
#line 522 "decomp.ch"
}
#line 522 "decomp.ch"

#line 522 "decomp.ch"
#line 522 "decomp.ch"
static void decomp_Anchor () { int i = 1;} 
#line 522 "decomp.ch"
/*Well done my boy */ 
#line 522 "decomp.ch"
