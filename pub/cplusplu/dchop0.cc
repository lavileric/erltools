
#line 24 "dchop0.ch"
/*************************************************************************/
#line 24 "dchop0.ch"
/*                                                                       */
#line 24 "dchop0.ch"
/*        Produced by Metachop version 2.0  -    1989-1995               */
#line 24 "dchop0.ch"
/*     Tree      Meta     Chopper      developped    by                  */
#line 24 "dchop0.ch"
/*                  Eric Lavillonniere                                   */
#line 24 "dchop0.ch"
/*                                                                       */
#line 24 "dchop0.ch"
/*************************************************************************/
#line 24 "dchop0.ch"

#line 24 "dchop0.ch"
#include "token.h"
#line 24 "dchop0.ch"
#define decomp decomp_cplus
#line 24 "dchop0.ch"

#line 24 "dchop0.ch"
#ifndef for_elem
#line 24 "dchop0.ch"
#line 24 "dchop0.ch"
#define for_elem _for_elem

#line 24 "dchop0.ch"
#line 24 "dchop0.ch"

#line 24 "dchop0.ch"
#endif
#ifdef INCONNU
#line 24 "dchop0.ch"
#line 24 "dchop0.ch"
PTREE   for_elem ;
#line 24 "dchop0.ch"

#line 24 "dchop0.ch"
#line 24 "dchop0.ch"

#line 24 "dchop0.ch"
#endif
#ifdef FOR_METACHOP
#line 24 "dchop0.ch"
#line 28 "dchop0.ch"
PTREE   postComment ;
#line 28 "dchop0.ch"

#line 28 "dchop0.ch"
#line 28 "dchop0.ch"

#line 28 "dchop0.ch"
#endif

#include "deccplus.h"
#include "memges.h"

#line 34 "dchop0.ch"

#line 34 "dchop0.ch"
void DecompCplus::lstat_dec ( PTREE paramTree )
#line 34 "dchop0.ch"
{
#line 34 "dchop0.ch"
#line 34 "dchop0.ch"
    int _nextVal ;
    
#line 34 "dchop0.ch"
#line 36 "dchop0.ch"
    PTREE   son ;
#line 36 "dchop0.ch"
    
#line 36 "dchop0.ch"
#line 37 "dchop0.ch"
    PTREE   oldPostComment = (PTREE)0 ;
#line 37 "dchop0.ch"
    
#line 37 "dchop0.ch"
#line 37 "dchop0.ch"
    (oldPostComment=postComment);
#line 37 "dchop0.ch"
    
#line 37 "dchop0.ch"
#line 39 "dchop0.ch"
    while ( !((!paramTree)) ) {
#line 39 "dchop0.ch"
#line 40 "dchop0.ch"
                                    (son=(paramTree?paramTree.Nextl():(PPTREE)0));
#line 40 "dchop0.ch"
                                    
#line 40 "dchop0.ch"
#line 41 "dchop0.ch"
                                    (postComment=son);
#line 41 "dchop0.ch"
                                    
#line 41 "dchop0.ch"
#line 42 "dchop0.ch"
                                    decomp(son);
#line 42 "dchop0.ch"
                                    
#line 42 "dchop0.ch"
#line 43 "dchop0.ch"
                                    if ( !Sequence(son, son) ) {
#line 43 "dchop0.ch"
#line 44 "dchop0.ch"
                                                                    control_stat1(son);
#line 44 "dchop0.ch"
#line 45 "dchop0.ch"
                                                                    LNewLine(1);
#line 45 "dchop0.ch"
                                                                    
#line 45 "dchop0.ch"
#line 46 "dchop0.ch"
                                                                    
#line 46 "dchop0.ch"
#line 46 "dchop0.ch"
                                                                   }
#line 46 "dchop0.ch"
#line 47 "dchop0.ch"
                                    
#line 47 "dchop0.ch"
#line 47 "dchop0.ch"
                                }
#line 47 "dchop0.ch"
#line 48 "dchop0.ch"
    (postComment=oldPostComment);
#line 48 "dchop0.ch"
    
#line 48 "dchop0.ch"
#line 49 "dchop0.ch"
    
#line 49 "dchop0.ch"
#line 49 "dchop0.ch"
}
#line 49 "dchop0.ch"

#line 51 "dchop0.ch"

#line 51 "dchop0.ch"
void DecompCplus::follow_if_dir ( PTREE paramTree, PTREE reference )
#line 51 "dchop0.ch"
{
#line 51 "dchop0.ch"
    register PPTREE _inter ;
#line 51 "dchop0.ch"

#line 51 "dchop0.ch"
#line 51 "dchop0.ch"
    int _nextVal ;
    
#line 51 "dchop0.ch"
#line 53 "dchop0.ch"
    PTREE   stat1, stat2, son, my_exp ;
#line 53 "dchop0.ch"
    
#line 53 "dchop0.ch"
#line 54 "dchop0.ch"
    PTREE   oldPostComment = (PTREE)0 ;
#line 54 "dchop0.ch"
    
#line 54 "dchop0.ch"
#line 54 "dchop0.ch"
    (oldPostComment=postComment);
#line 54 "dchop0.ch"
    
#line 54 "dchop0.ch"
#line 56 "dchop0.ch"
    if ( (!paramTree) ) {
#line 56 "dchop0.ch"
#line 57 "dchop0.ch"
                            {
#line 57 "dchop0.ch"
#line 58 "dchop0.ch"
                                if ( tabDirective ) 
#line 58 "dchop0.ch"
#line 59 "dchop0.ch"
                                    Mark();
#line 59 "dchop0.ch"
#line 60 "dchop0.ch"
                                gotocol(0);
#line 60 "dchop0.ch"
#line 61 "dchop0.ch"
                                PrintString("#");
#line 61 "dchop0.ch"
#line 62 "dchop0.ch"
                                if ( tabDirective ) 
#line 62 "dchop0.ch"
#line 63 "dchop0.ch"
                                    UnMark();
#line 63 "dchop0.ch"
#line 64 "dchop0.ch"
                                
#line 64 "dchop0.ch"
#line 64 "dchop0.ch"
                            }
                            
#line 64 "dchop0.ch"
#line 65 "dchop0.ch"
                            PrintString("endif");
#line 65 "dchop0.ch"
#line 66 "dchop0.ch"
                            if ( !LastInTopList(reference) ) 
#line 66 "dchop0.ch"
#line 67 "dchop0.ch"
                                LNewLine(1);
#line 67 "dchop0.ch"
                            
#line 67 "dchop0.ch"
#line 68 "dchop0.ch"
                            
#line 68 "dchop0.ch"
#line 68 "dchop0.ch"
                          } else 
#line 68 "dchop0.ch"
    if ( ((_inter = (PPTREE)paramTree,1) && 
#line 68 "dchop0.ch"
            (NumberTree(_inter) == cplus::IF_DIR) &&
#line 68 "dchop0.ch"
            ((my_exp=SonTree(_inter,1)),1) &&
#line 68 "dchop0.ch"
            ((stat1=SonTree(_inter,2)),1) &&
#line 68 "dchop0.ch"
            ((stat2=SonTree(_inter,3)),1) &&
#line 68 "dchop0.ch"
            1) ) {
#line 68 "dchop0.ch"
#line 69 "dchop0.ch"
                    {
#line 69 "dchop0.ch"
#line 70 "dchop0.ch"
                        if ( tabDirective ) 
#line 70 "dchop0.ch"
#line 71 "dchop0.ch"
                            Mark();
#line 71 "dchop0.ch"
#line 72 "dchop0.ch"
                        gotocol(0);
#line 72 "dchop0.ch"
#line 73 "dchop0.ch"
                        PrintString("#");
#line 73 "dchop0.ch"
#line 74 "dchop0.ch"
                        if ( tabDirective ) 
#line 74 "dchop0.ch"
#line 75 "dchop0.ch"
                            UnMark();
#line 75 "dchop0.ch"
#line 76 "dchop0.ch"
                        
#line 76 "dchop0.ch"
#line 76 "dchop0.ch"
                    }
                    
#line 76 "dchop0.ch"
#line 77 "dchop0.ch"
                    PrintString("elif ");
#line 77 "dchop0.ch"
#line 77 "dchop0.ch"
                    decomp(my_exp);
#line 77 "dchop0.ch"
                    
#line 77 "dchop0.ch"
#line 77 "dchop0.ch"
                    LNewLine(1);
#line 77 "dchop0.ch"
                    
#line 77 "dchop0.ch"
#line 78 "dchop0.ch"
                    Tab();
#line 78 "dchop0.ch"
                    
#line 78 "dchop0.ch"
#line 79 "dchop0.ch"
                    Mark();
#line 79 "dchop0.ch"
                    while ( !((!stat1)) ) {
#line 79 "dchop0.ch"
#line 80 "dchop0.ch"
                                                (son=(stat1?stat1.Nextl():(PPTREE)0));
#line 80 "dchop0.ch"
                                                
#line 80 "dchop0.ch"
#line 81 "dchop0.ch"
                                                (postComment=son);
#line 81 "dchop0.ch"
                                                
#line 81 "dchop0.ch"
#line 82 "dchop0.ch"
                                                decomp(son);
#line 82 "dchop0.ch"
                                                
#line 82 "dchop0.ch"
#line 83 "dchop0.ch"
                                                if ( !Sequence(son, son) ) {
#line 83 "dchop0.ch"
#line 84 "dchop0.ch"
                                                                                control_stat1(son);
#line 84 "dchop0.ch"
#line 85 "dchop0.ch"
                                                                                LNewLine(1);
#line 85 "dchop0.ch"
                                                                                
#line 85 "dchop0.ch"
#line 86 "dchop0.ch"
                                                                                
#line 86 "dchop0.ch"
#line 86 "dchop0.ch"
                                                                               }
#line 86 "dchop0.ch"
#line 87 "dchop0.ch"
                                                
#line 87 "dchop0.ch"
#line 87 "dchop0.ch"
                                            }
#line 87 "dchop0.ch"
                    UnMark();
#line 87 "dchop0.ch"
                    
#line 87 "dchop0.ch"
#line 89 "dchop0.ch"
                    follow_if_dir(stat2, reference);
#line 89 "dchop0.ch"
#line 90 "dchop0.ch"
                    
#line 90 "dchop0.ch"
#line 90 "dchop0.ch"
                 } else 
#line 90 "dchop0.ch"
    {
#line 90 "dchop0.ch"
#line 91 "dchop0.ch"
        {
#line 91 "dchop0.ch"
#line 92 "dchop0.ch"
            if ( tabDirective ) 
#line 92 "dchop0.ch"
#line 93 "dchop0.ch"
                Mark();
#line 93 "dchop0.ch"
#line 94 "dchop0.ch"
            gotocol(0);
#line 94 "dchop0.ch"
#line 95 "dchop0.ch"
            PrintString("#");
#line 95 "dchop0.ch"
#line 96 "dchop0.ch"
            if ( tabDirective ) 
#line 96 "dchop0.ch"
#line 97 "dchop0.ch"
                UnMark();
#line 97 "dchop0.ch"
#line 98 "dchop0.ch"
            
#line 98 "dchop0.ch"
#line 98 "dchop0.ch"
        }
        
#line 98 "dchop0.ch"
#line 99 "dchop0.ch"
        PrintString("else ");
#line 99 "dchop0.ch"
#line 99 "dchop0.ch"
        LNewLine(1);
#line 99 "dchop0.ch"
        
#line 99 "dchop0.ch"
#line 100 "dchop0.ch"
        if ( tabDirective ) {
#line 100 "dchop0.ch"
#line 101 "dchop0.ch"
                                Tab();
#line 101 "dchop0.ch"
                                
#line 101 "dchop0.ch"
#line 102 "dchop0.ch"
                                Mark();
#line 102 "dchop0.ch"
#line 103 "dchop0.ch"
                                
#line 103 "dchop0.ch"
#line 103 "dchop0.ch"
                             }
#line 103 "dchop0.ch"
#line 104 "dchop0.ch"
        while ( !((!paramTree)) ) {
#line 104 "dchop0.ch"
#line 105 "dchop0.ch"
                                        (son=(paramTree?paramTree.Nextl():(PPTREE)0));
#line 105 "dchop0.ch"
                                        
#line 105 "dchop0.ch"
#line 106 "dchop0.ch"
                                        (postComment=son);
#line 106 "dchop0.ch"
                                        
#line 106 "dchop0.ch"
#line 107 "dchop0.ch"
                                        decomp(son);
#line 107 "dchop0.ch"
                                        
#line 107 "dchop0.ch"
#line 108 "dchop0.ch"
                                        if ( !Sequence(son, son) ) {
#line 108 "dchop0.ch"
#line 109 "dchop0.ch"
                                                                        control_stat1(son);
#line 109 "dchop0.ch"
#line 110 "dchop0.ch"
                                                                        LNewLine(1);
#line 110 "dchop0.ch"
                                                                        
#line 110 "dchop0.ch"
#line 111 "dchop0.ch"
                                                                        
#line 111 "dchop0.ch"
#line 111 "dchop0.ch"
                                                                       }
#line 111 "dchop0.ch"
#line 112 "dchop0.ch"
                                        
#line 112 "dchop0.ch"
#line 112 "dchop0.ch"
                                    }
#line 112 "dchop0.ch"
#line 113 "dchop0.ch"
        if ( tabDirective ) {
#line 113 "dchop0.ch"
#line 114 "dchop0.ch"
                                UnMark();
#line 114 "dchop0.ch"
#line 115 "dchop0.ch"
                                
#line 115 "dchop0.ch"
#line 115 "dchop0.ch"
                             }
#line 115 "dchop0.ch"
#line 117 "dchop0.ch"
        {
#line 117 "dchop0.ch"
#line 117 "dchop0.ch"
            if ( tabDirective ) 
#line 117 "dchop0.ch"
#line 118 "dchop0.ch"
                Mark();
#line 118 "dchop0.ch"
#line 119 "dchop0.ch"
            gotocol(0);
#line 119 "dchop0.ch"
#line 120 "dchop0.ch"
            PrintString("#");
#line 120 "dchop0.ch"
#line 121 "dchop0.ch"
            if ( tabDirective ) 
#line 121 "dchop0.ch"
#line 122 "dchop0.ch"
                UnMark();
#line 122 "dchop0.ch"
#line 123 "dchop0.ch"
            
#line 123 "dchop0.ch"
#line 123 "dchop0.ch"
        }
        
#line 123 "dchop0.ch"
#line 124 "dchop0.ch"
        PrintString("endif");
#line 124 "dchop0.ch"
#line 125 "dchop0.ch"
        if ( !LastInTopList(reference) ) 
#line 125 "dchop0.ch"
#line 126 "dchop0.ch"
            LNewLine(1);
#line 126 "dchop0.ch"
        
#line 126 "dchop0.ch"
#line 127 "dchop0.ch"
        
#line 127 "dchop0.ch"
#line 127 "dchop0.ch"
    }
    
#line 127 "dchop0.ch"
#line 128 "dchop0.ch"
    (postComment=oldPostComment);
#line 128 "dchop0.ch"
    
#line 128 "dchop0.ch"
#line 129 "dchop0.ch"
    
#line 129 "dchop0.ch"
#line 129 "dchop0.ch"
}
#line 129 "dchop0.ch"

#line 131 "dchop0.ch"

#line 131 "dchop0.ch"
int DecompCplus::Sequence ( PTREE tree1, PTREE tree2 )
#line 131 "dchop0.ch"
{
#line 131 "dchop0.ch"
    register PPTREE _inter ;
#line 131 "dchop0.ch"

#line 131 "dchop0.ch"
#line 131 "dchop0.ch"
    int _nextVal ;
    
#line 131 "dchop0.ch"
#line 133 "dchop0.ch"
    ((_inter = (PPTREE)tree1,1) && 
#line 133 "dchop0.ch"
        (NumberTree(_inter) == cplus::ATTRIBUTS) &&
#line 133 "dchop0.ch"
        ((tree1=SonTree(_inter,1)),1) &&
#line 133 "dchop0.ch"
        1);
#line 133 "dchop0.ch"
    ;
#line 133 "dchop0.ch"
#line 134 "dchop0.ch"
    switch ( NumberTree(tree1) ) {
#line 134 "dchop0.ch"
#line 134 "dchop0.ch"
        case cplus::MACRO : 
#line 134 "dchop0.ch"
#line 134 "dchop0.ch"
        _Case3 : 
#line 134 "dchop0.ch"
#line 134 "dchop0.ch"
            ;
#line 134 "dchop0.ch"
#line 134 "dchop0.ch"
            goto _Case4 ;
            
#line 134 "dchop0.ch"
#line 137 "dchop0.ch"
        case cplus::EXCEPTION : 
#line 137 "dchop0.ch"
#line 137 "dchop0.ch"
        _Case4 : 
#line 137 "dchop0.ch"
#line 137 "dchop0.ch"
            ;
#line 137 "dchop0.ch"
#line 137 "dchop0.ch"
            return 1 ;
            
#line 137 "dchop0.ch"
#line 138 "dchop0.ch"
            break ;
            
#line 138 "dchop0.ch"
#line 139 "dchop0.ch"
        default : 
#line 139 "dchop0.ch"
#line 139 "dchop0.ch"
        _Case5 : 
#line 139 "dchop0.ch"
#line 139 "dchop0.ch"
            ;
#line 139 "dchop0.ch"
#line 139 "dchop0.ch"
            return 0 ;
            
#line 139 "dchop0.ch"
    }
#line 139 "dchop0.ch"
    
#line 139 "dchop0.ch"
#line 141 "dchop0.ch"
    
#line 141 "dchop0.ch"
#line 141 "dchop0.ch"
}
#line 141 "dchop0.ch"

#line 143 "dchop0.ch"

#line 143 "dchop0.ch"
void DecompCplus::control_stat1 ( PTREE paramTree )
#line 143 "dchop0.ch"
{
#line 143 "dchop0.ch"
    register PPTREE _inter ;
#line 143 "dchop0.ch"

#line 143 "dchop0.ch"
#line 143 "dchop0.ch"
    int _nextVal ;
    
#line 143 "dchop0.ch"
#line 145 "dchop0.ch"
    PTREE   exp1 ;
#line 145 "dchop0.ch"
    
#line 145 "dchop0.ch"
#line 147 "dchop0.ch"
    switch ( NumberTree(paramTree) ) {
#line 147 "dchop0.ch"
#line 147 "dchop0.ch"
        case cplus::IF : 
#line 147 "dchop0.ch"
#line 147 "dchop0.ch"
        _Case56 : 
#line 147 "dchop0.ch"
#line 147 "dchop0.ch"
            ;
#line 147 "dchop0.ch"
#line 147 "dchop0.ch"
            goto _Case57 ;
            
#line 147 "dchop0.ch"
#line 147 "dchop0.ch"
        case cplus::WHILE : 
#line 147 "dchop0.ch"
#line 147 "dchop0.ch"
        _Case57 : 
#line 147 "dchop0.ch"
#line 147 "dchop0.ch"
            ;
#line 147 "dchop0.ch"
#line 147 "dchop0.ch"
            goto _Case58 ;
            
#line 147 "dchop0.ch"
#line 147 "dchop0.ch"
        case cplus::EXCEPTION_ANSI : 
#line 147 "dchop0.ch"
#line 147 "dchop0.ch"
        _Case58 : 
#line 147 "dchop0.ch"
#line 147 "dchop0.ch"
            ;
#line 147 "dchop0.ch"
#line 147 "dchop0.ch"
            goto _Case59 ;
            
#line 147 "dchop0.ch"
#line 147 "dchop0.ch"
        case cplus::CATCH_ANSI : 
#line 147 "dchop0.ch"
#line 147 "dchop0.ch"
        _Case59 : 
#line 147 "dchop0.ch"
#line 147 "dchop0.ch"
            ;
#line 147 "dchop0.ch"
#line 147 "dchop0.ch"
            goto _Case60 ;
            
#line 147 "dchop0.ch"
#line 147 "dchop0.ch"
        case cplus::FOR : 
#line 147 "dchop0.ch"
#line 147 "dchop0.ch"
        _Case60 : 
#line 147 "dchop0.ch"
#line 147 "dchop0.ch"
            ;
#line 147 "dchop0.ch"
#line 147 "dchop0.ch"
            goto _Case61 ;
            
#line 147 "dchop0.ch"
#line 147 "dchop0.ch"
        case cplus::DO : 
#line 147 "dchop0.ch"
#line 147 "dchop0.ch"
        _Case61 : 
#line 147 "dchop0.ch"
#line 147 "dchop0.ch"
            ;
#line 147 "dchop0.ch"
#line 147 "dchop0.ch"
            goto _Case62 ;
            
#line 147 "dchop0.ch"
#line 147 "dchop0.ch"
        case cplus::SWITCH : 
#line 147 "dchop0.ch"
#line 147 "dchop0.ch"
        _Case62 : 
#line 147 "dchop0.ch"
#line 147 "dchop0.ch"
            ;
#line 147 "dchop0.ch"
#line 147 "dchop0.ch"
            goto _Case63 ;
            
#line 147 "dchop0.ch"
#line 156 "dchop0.ch"
        case cplus::LABEL : 
#line 156 "dchop0.ch"
#line 156 "dchop0.ch"
        _Case63 : 
#line 156 "dchop0.ch"
#line 156 "dchop0.ch"
            ;
#line 156 "dchop0.ch"
#line 156 "dchop0.ch"
            comm(paramTree, POST);
#line 156 "dchop0.ch"
#line 157 "dchop0.ch"
            return ;
            
#line 157 "dchop0.ch"
#line 157 "dchop0.ch"
            goto _Case64 ;
            
#line 157 "dchop0.ch"
#line 158 "dchop0.ch"
        case cplus::BREAK : 
#line 158 "dchop0.ch"
#line 158 "dchop0.ch"
        _Case64 : 
#line 158 "dchop0.ch"
#line 158 "dchop0.ch"
            ;
#line 158 "dchop0.ch"
#line 158 "dchop0.ch"
            return ;
            
#line 158 "dchop0.ch"
#line 158 "dchop0.ch"
            goto _Case65 ;
            
#line 158 "dchop0.ch"
#line 159 "dchop0.ch"
        case cplus::CONTINUE : 
#line 159 "dchop0.ch"
#line 159 "dchop0.ch"
        _Case65 : 
#line 159 "dchop0.ch"
#line 159 "dchop0.ch"
            ;
#line 159 "dchop0.ch"
#line 159 "dchop0.ch"
            return ;
            
#line 159 "dchop0.ch"
#line 159 "dchop0.ch"
            goto _Case66 ;
            
#line 159 "dchop0.ch"
#line 159 "dchop0.ch"
        case cplus::FUNC : 
#line 159 "dchop0.ch"
#line 159 "dchop0.ch"
        _Case66 : 
#line 159 "dchop0.ch"
#line 159 "dchop0.ch"
            ;
#line 159 "dchop0.ch"
#line 159 "dchop0.ch"
            goto _Case67 ;
            
#line 159 "dchop0.ch"
#line 159 "dchop0.ch"
        case cplus::COMPOUND : 
#line 159 "dchop0.ch"
#line 159 "dchop0.ch"
        _Case67 : 
#line 159 "dchop0.ch"
#line 159 "dchop0.ch"
            ;
#line 159 "dchop0.ch"
#line 159 "dchop0.ch"
            goto _Case68 ;
            
#line 159 "dchop0.ch"
#line 159 "dchop0.ch"
        case cplus::CASE : 
#line 159 "dchop0.ch"
#line 159 "dchop0.ch"
        _Case68 : 
#line 159 "dchop0.ch"
#line 159 "dchop0.ch"
            ;
#line 159 "dchop0.ch"
#line 159 "dchop0.ch"
            goto _Case69 ;
            
#line 159 "dchop0.ch"
#line 164 "dchop0.ch"
        case cplus::DEFAULT : 
#line 164 "dchop0.ch"
#line 164 "dchop0.ch"
        _Case69 : 
#line 164 "dchop0.ch"
#line 164 "dchop0.ch"
            ;
#line 164 "dchop0.ch"
#line 164 "dchop0.ch"
            comm(paramTree, POST);
#line 164 "dchop0.ch"
#line 165 "dchop0.ch"
            LNewLine(1);
#line 165 "dchop0.ch"
            
#line 165 "dchop0.ch"
#line 166 "dchop0.ch"
            return ;
            
#line 166 "dchop0.ch"
#line 166 "dchop0.ch"
            goto _Case70 ;
            
#line 166 "dchop0.ch"
#line 166 "dchop0.ch"
        case cplus::NONE : 
#line 166 "dchop0.ch"
#line 166 "dchop0.ch"
        _Case70 : 
#line 166 "dchop0.ch"
#line 166 "dchop0.ch"
            ;
#line 166 "dchop0.ch"
#line 166 "dchop0.ch"
            goto _Case71 ;
            
#line 166 "dchop0.ch"
#line 168 "dchop0.ch"
        case cplus::GOTO : 
#line 168 "dchop0.ch"
#line 168 "dchop0.ch"
        _Case71 : 
#line 168 "dchop0.ch"
#line 168 "dchop0.ch"
            ;
#line 168 "dchop0.ch"
#line 168 "dchop0.ch"
            return ;
            
#line 168 "dchop0.ch"
#line 168 "dchop0.ch"
            goto _Case72 ;
            
#line 168 "dchop0.ch"
#line 173 "dchop0.ch"
        case cplus::STAT_VOID : 
#line 173 "dchop0.ch"
#line 173 "dchop0.ch"
        _Case72 : 
#line 173 "dchop0.ch"
#line 173 "dchop0.ch"
            ;
#line 173 "dchop0.ch"
#line 173 "dchop0.ch"
            return ;
            
#line 173 "dchop0.ch"
#line 173 "dchop0.ch"
            goto _Case73 ;
            
#line 173 "dchop0.ch"
#line 174 "dchop0.ch"
        case cplus::RETURN : 
#line 174 "dchop0.ch"
#line 174 "dchop0.ch"
        _Case73 : 
#line 174 "dchop0.ch"
#line 174 "dchop0.ch"
            ;
#line 174 "dchop0.ch"
#line 174 "dchop0.ch"
            return ;
            
#line 174 "dchop0.ch"
#line 174 "dchop0.ch"
            goto _Case74 ;
            
#line 174 "dchop0.ch"
#line 175 "dchop0.ch"
        case cplus::THROW_ANSI : 
#line 175 "dchop0.ch"
#line 175 "dchop0.ch"
        _Case74 : 
#line 175 "dchop0.ch"
#line 175 "dchop0.ch"
            ;
#line 175 "dchop0.ch"
#line 175 "dchop0.ch"
            return ;
            
#line 175 "dchop0.ch"
#line 175 "dchop0.ch"
            goto _Case75 ;
            
#line 175 "dchop0.ch"
#line 176 "dchop0.ch"
        case cplus::DECLARATION : 
#line 176 "dchop0.ch"
#line 176 "dchop0.ch"
        _Case75 : 
#line 176 "dchop0.ch"
#line 176 "dchop0.ch"
            ;
#line 176 "dchop0.ch"
#line 176 "dchop0.ch"
            return ;
            
#line 176 "dchop0.ch"
#line 176 "dchop0.ch"
            goto _Case76 ;
            
#line 176 "dchop0.ch"
#line 177 "dchop0.ch"
        case cplus::EXTERNAL : 
#line 177 "dchop0.ch"
#line 177 "dchop0.ch"
        _Case76 : 
#line 177 "dchop0.ch"
#line 177 "dchop0.ch"
            ;
#line 177 "dchop0.ch"
#line 177 "dchop0.ch"
            return ;
            
#line 177 "dchop0.ch"
#line 177 "dchop0.ch"
            goto _Case77 ;
            
#line 177 "dchop0.ch"
#line 178 "dchop0.ch"
        case cplus::NAMESPACE : 
#line 178 "dchop0.ch"
#line 178 "dchop0.ch"
        _Case77 : 
#line 178 "dchop0.ch"
#line 178 "dchop0.ch"
            ;
#line 178 "dchop0.ch"
#line 178 "dchop0.ch"
            return ;
            
#line 178 "dchop0.ch"
#line 178 "dchop0.ch"
            goto _Case78 ;
            
#line 178 "dchop0.ch"
#line 179 "dchop0.ch"
        case cplus::NAMESPACE_ALIAS : 
#line 179 "dchop0.ch"
#line 179 "dchop0.ch"
        _Case78 : 
#line 179 "dchop0.ch"
#line 179 "dchop0.ch"
            ;
#line 179 "dchop0.ch"
#line 179 "dchop0.ch"
            return ;
            
#line 179 "dchop0.ch"
#line 179 "dchop0.ch"
            goto _Case79 ;
            
#line 179 "dchop0.ch"
#line 180 "dchop0.ch"
        case cplus::USING : 
#line 180 "dchop0.ch"
#line 180 "dchop0.ch"
        _Case79 : 
#line 180 "dchop0.ch"
#line 180 "dchop0.ch"
            ;
#line 180 "dchop0.ch"
#line 180 "dchop0.ch"
            return ;
            
#line 180 "dchop0.ch"
#line 180 "dchop0.ch"
            goto _Case80 ;
            
#line 180 "dchop0.ch"
#line 181 "dchop0.ch"
        case cplus::USING_NAMESPACE : 
#line 181 "dchop0.ch"
#line 181 "dchop0.ch"
        _Case80 : 
#line 181 "dchop0.ch"
#line 181 "dchop0.ch"
            ;
#line 181 "dchop0.ch"
#line 181 "dchop0.ch"
            return ;
            
#line 181 "dchop0.ch"
#line 181 "dchop0.ch"
            goto _Case81 ;
            
#line 181 "dchop0.ch"
#line 182 "dchop0.ch"
        case cplus::INCLUDE_DIR : 
#line 182 "dchop0.ch"
#line 182 "dchop0.ch"
        _Case81 : 
#line 182 "dchop0.ch"
#line 182 "dchop0.ch"
            ;
#line 182 "dchop0.ch"
#line 182 "dchop0.ch"
            return ;
            
#line 182 "dchop0.ch"
#line 182 "dchop0.ch"
            goto _Case82 ;
            
#line 182 "dchop0.ch"
#line 183 "dchop0.ch"
        case cplus::ERROR : 
#line 183 "dchop0.ch"
#line 183 "dchop0.ch"
        _Case82 : 
#line 183 "dchop0.ch"
#line 183 "dchop0.ch"
            ;
#line 183 "dchop0.ch"
#line 183 "dchop0.ch"
            return ;
            
#line 183 "dchop0.ch"
#line 183 "dchop0.ch"
            goto _Case83 ;
            
#line 183 "dchop0.ch"
#line 184 "dchop0.ch"
        case cplus::PRAGMA : 
#line 184 "dchop0.ch"
#line 184 "dchop0.ch"
        _Case83 : 
#line 184 "dchop0.ch"
#line 184 "dchop0.ch"
            ;
#line 184 "dchop0.ch"
#line 184 "dchop0.ch"
            return ;
            
#line 184 "dchop0.ch"
#line 184 "dchop0.ch"
            goto _Case84 ;
            
#line 184 "dchop0.ch"
#line 185 "dchop0.ch"
        case cplus::UNDEF : 
#line 185 "dchop0.ch"
#line 185 "dchop0.ch"
        _Case84 : 
#line 185 "dchop0.ch"
#line 185 "dchop0.ch"
            ;
#line 185 "dchop0.ch"
#line 185 "dchop0.ch"
            return ;
            
#line 185 "dchop0.ch"
#line 185 "dchop0.ch"
            goto _Case85 ;
            
#line 185 "dchop0.ch"
#line 186 "dchop0.ch"
        case cplus::IF_DIR : 
#line 186 "dchop0.ch"
#line 186 "dchop0.ch"
        _Case85 : 
#line 186 "dchop0.ch"
#line 186 "dchop0.ch"
            ;
#line 186 "dchop0.ch"
#line 186 "dchop0.ch"
            return ;
            
#line 186 "dchop0.ch"
#line 186 "dchop0.ch"
            goto _Case86 ;
            
#line 186 "dchop0.ch"
#line 187 "dchop0.ch"
        case cplus::IFDEF_DIR : 
#line 187 "dchop0.ch"
#line 187 "dchop0.ch"
        _Case86 : 
#line 187 "dchop0.ch"
#line 187 "dchop0.ch"
            ;
#line 187 "dchop0.ch"
#line 187 "dchop0.ch"
            return ;
            
#line 187 "dchop0.ch"
#line 187 "dchop0.ch"
            goto _Case87 ;
            
#line 187 "dchop0.ch"
#line 188 "dchop0.ch"
        case cplus::IFNDEF_DIR : 
#line 188 "dchop0.ch"
#line 188 "dchop0.ch"
        _Case87 : 
#line 188 "dchop0.ch"
#line 188 "dchop0.ch"
            ;
#line 188 "dchop0.ch"
#line 188 "dchop0.ch"
            return ;
            
#line 188 "dchop0.ch"
#line 188 "dchop0.ch"
            goto _Case88 ;
            
#line 188 "dchop0.ch"
#line 189 "dchop0.ch"
        case cplus::NOT_MANAGED : 
#line 189 "dchop0.ch"
#line 189 "dchop0.ch"
        _Case88 : 
#line 189 "dchop0.ch"
#line 189 "dchop0.ch"
            ;
#line 189 "dchop0.ch"
#line 189 "dchop0.ch"
            return ;
            
#line 189 "dchop0.ch"
#line 189 "dchop0.ch"
            goto _Case89 ;
            
#line 189 "dchop0.ch"
#line 190 "dchop0.ch"
        case cplus::NO_PRETTY : 
#line 190 "dchop0.ch"
#line 190 "dchop0.ch"
        _Case89 : 
#line 190 "dchop0.ch"
#line 190 "dchop0.ch"
            ;
#line 190 "dchop0.ch"
#line 190 "dchop0.ch"
            return ;
            
#line 190 "dchop0.ch"
#line 190 "dchop0.ch"
            goto _Case90 ;
            
#line 190 "dchop0.ch"
#line 191 "dchop0.ch"
        case cplus::DEFINE_DIR : 
#line 191 "dchop0.ch"
#line 191 "dchop0.ch"
        _Case90 : 
#line 191 "dchop0.ch"
#line 191 "dchop0.ch"
            ;
#line 191 "dchop0.ch"
#line 191 "dchop0.ch"
            return ;
            
#line 191 "dchop0.ch"
#line 191 "dchop0.ch"
            goto _Case91 ;
            
#line 191 "dchop0.ch"
#line 192 "dchop0.ch"
        case cplus::TYPEDEF : 
#line 192 "dchop0.ch"
#line 192 "dchop0.ch"
        _Case91 : 
#line 192 "dchop0.ch"
#line 192 "dchop0.ch"
            ;
#line 192 "dchop0.ch"
#line 192 "dchop0.ch"
            return ;
            
#line 192 "dchop0.ch"
#line 192 "dchop0.ch"
            goto _Case92 ;
            
#line 192 "dchop0.ch"
#line 193 "dchop0.ch"
        case cplus::AFF : 
#line 193 "dchop0.ch"
#line 193 "dchop0.ch"
        _Case92 : 
#line 193 "dchop0.ch"
#line 193 "dchop0.ch"
            ;
#line 193 "dchop0.ch"
#line 193 "dchop0.ch"
            goto terminal ;
            
#line 193 "dchop0.ch"
#line 193 "dchop0.ch"
            goto _Case93 ;
            
#line 193 "dchop0.ch"
#line 194 "dchop0.ch"
        case cplus::MUL_AFF : 
#line 194 "dchop0.ch"
#line 194 "dchop0.ch"
        _Case93 : 
#line 194 "dchop0.ch"
#line 194 "dchop0.ch"
            ;
#line 194 "dchop0.ch"
#line 194 "dchop0.ch"
            goto terminal ;
            
#line 194 "dchop0.ch"
#line 194 "dchop0.ch"
            goto _Case94 ;
            
#line 194 "dchop0.ch"
#line 195 "dchop0.ch"
        case cplus::DIV_AFF : 
#line 195 "dchop0.ch"
#line 195 "dchop0.ch"
        _Case94 : 
#line 195 "dchop0.ch"
#line 195 "dchop0.ch"
            ;
#line 195 "dchop0.ch"
#line 195 "dchop0.ch"
            goto terminal ;
            
#line 195 "dchop0.ch"
#line 195 "dchop0.ch"
            goto _Case95 ;
            
#line 195 "dchop0.ch"
#line 196 "dchop0.ch"
        case cplus::REM_AFF : 
#line 196 "dchop0.ch"
#line 196 "dchop0.ch"
        _Case95 : 
#line 196 "dchop0.ch"
#line 196 "dchop0.ch"
            ;
#line 196 "dchop0.ch"
#line 196 "dchop0.ch"
            goto terminal ;
            
#line 196 "dchop0.ch"
#line 196 "dchop0.ch"
            goto _Case96 ;
            
#line 196 "dchop0.ch"
#line 197 "dchop0.ch"
        case cplus::PLU_AFF : 
#line 197 "dchop0.ch"
#line 197 "dchop0.ch"
        _Case96 : 
#line 197 "dchop0.ch"
#line 197 "dchop0.ch"
            ;
#line 197 "dchop0.ch"
#line 197 "dchop0.ch"
            goto terminal ;
            
#line 197 "dchop0.ch"
#line 197 "dchop0.ch"
            goto _Case97 ;
            
#line 197 "dchop0.ch"
#line 198 "dchop0.ch"
        case cplus::MIN_AFF : 
#line 198 "dchop0.ch"
#line 198 "dchop0.ch"
        _Case97 : 
#line 198 "dchop0.ch"
#line 198 "dchop0.ch"
            ;
#line 198 "dchop0.ch"
#line 198 "dchop0.ch"
            goto terminal ;
            
#line 198 "dchop0.ch"
#line 198 "dchop0.ch"
            goto _Case98 ;
            
#line 198 "dchop0.ch"
#line 199 "dchop0.ch"
        case cplus::LSH_AFF : 
#line 199 "dchop0.ch"
#line 199 "dchop0.ch"
        _Case98 : 
#line 199 "dchop0.ch"
#line 199 "dchop0.ch"
            ;
#line 199 "dchop0.ch"
#line 199 "dchop0.ch"
            goto terminal ;
            
#line 199 "dchop0.ch"
#line 199 "dchop0.ch"
            goto _Case99 ;
            
#line 199 "dchop0.ch"
#line 200 "dchop0.ch"
        case cplus::RSH_AFF : 
#line 200 "dchop0.ch"
#line 200 "dchop0.ch"
        _Case99 : 
#line 200 "dchop0.ch"
#line 200 "dchop0.ch"
            ;
#line 200 "dchop0.ch"
#line 200 "dchop0.ch"
            goto terminal ;
            
#line 200 "dchop0.ch"
#line 200 "dchop0.ch"
            goto _Case100 ;
            
#line 200 "dchop0.ch"
#line 201 "dchop0.ch"
        case cplus::AND_AFF : 
#line 201 "dchop0.ch"
#line 201 "dchop0.ch"
        _Case100 : 
#line 201 "dchop0.ch"
#line 201 "dchop0.ch"
            ;
#line 201 "dchop0.ch"
#line 201 "dchop0.ch"
            goto terminal ;
            
#line 201 "dchop0.ch"
#line 201 "dchop0.ch"
            goto _Case101 ;
            
#line 201 "dchop0.ch"
#line 202 "dchop0.ch"
        case cplus::OR_AFF : 
#line 202 "dchop0.ch"
#line 202 "dchop0.ch"
        _Case101 : 
#line 202 "dchop0.ch"
#line 202 "dchop0.ch"
            ;
#line 202 "dchop0.ch"
#line 202 "dchop0.ch"
            goto terminal ;
            
#line 202 "dchop0.ch"
#line 202 "dchop0.ch"
            goto _Case102 ;
            
#line 202 "dchop0.ch"
#line 203 "dchop0.ch"
        case cplus::XOR_AFF : 
#line 203 "dchop0.ch"
#line 203 "dchop0.ch"
        _Case102 : 
#line 203 "dchop0.ch"
#line 203 "dchop0.ch"
            ;
#line 203 "dchop0.ch"
#line 203 "dchop0.ch"
            goto terminal ;
            
#line 203 "dchop0.ch"
#line 203 "dchop0.ch"
            goto _Case103 ;
            
#line 203 "dchop0.ch"
#line 204 "dchop0.ch"
        case cplus::COND_AFF : 
#line 204 "dchop0.ch"
#line 204 "dchop0.ch"
        _Case103 : 
#line 204 "dchop0.ch"
#line 204 "dchop0.ch"
            ;
#line 204 "dchop0.ch"
#line 204 "dchop0.ch"
            goto terminal ;
            
#line 204 "dchop0.ch"
#line 204 "dchop0.ch"
            goto _Case104 ;
            
#line 204 "dchop0.ch"
#line 205 "dchop0.ch"
        case cplus::TEMPLATE_DECL : 
#line 205 "dchop0.ch"
#line 205 "dchop0.ch"
        _Case104 : 
#line 205 "dchop0.ch"
#line 205 "dchop0.ch"
            ;
#line 205 "dchop0.ch"
#line 205 "dchop0.ch"
            goto terminal ;
            
#line 205 "dchop0.ch"
#line 205 "dchop0.ch"
            goto _Case105 ;
            
#line 205 "dchop0.ch"
#line 207 "dchop0.ch"
        case cplus::ATTRIBUTS : 
#line 207 "dchop0.ch"
#line 207 "dchop0.ch"
        _Case105 : 
#line 207 "dchop0.ch"
#line 207 "dchop0.ch"
            ;
#line 207 "dchop0.ch"
#line 207 "dchop0.ch"
            control_stat1(sontree(paramTree, 1));
#line 207 "dchop0.ch"
#line 208 "dchop0.ch"
            return ;
            
#line 208 "dchop0.ch"
    }
#line 208 "dchop0.ch"
    
#line 208 "dchop0.ch"
#line 210 "dchop0.ch"
    SepBefore();
#line 210 "dchop0.ch"
    
#line 210 "dchop0.ch"
#line 210 "dchop0.ch"
    PrintString(";");
#line 210 "dchop0.ch"
#line 211 "dchop0.ch"
terminal : 
#line 211 "dchop0.ch"
#line 212 "dchop0.ch"
    comm(paramTree, POST);
#line 212 "dchop0.ch"
#line 213 "dchop0.ch"
    
#line 213 "dchop0.ch"
#line 213 "dchop0.ch"
}
#line 213 "dchop0.ch"

#line 215 "dchop0.ch"

#line 215 "dchop0.ch"
int DecompCplus::commAtBeginning ( PTREE tree )
#line 215 "dchop0.ch"
{
#line 215 "dchop0.ch"
    register PPTREE _inter ;
#line 215 "dchop0.ch"

#line 215 "dchop0.ch"
#line 215 "dchop0.ch"
    int _nextVal ;
    
#line 215 "dchop0.ch"
#line 218 "dchop0.ch"
    PTREE   father ;
#line 218 "dchop0.ch"
    
#line 218 "dchop0.ch"
#line 220 "dchop0.ch"
    if ( ( _inter = 
#line 220 "dchop0.ch"
            FatherTree(tree),((_inter = (PPTREE)_inter,1) && 
#line 220 "dchop0.ch"
                                (NumberTree(_inter) == cplus::ATTRIBUTS) &&
#line 220 "dchop0.ch"
                                1)) ) 
#line 220 "dchop0.ch"
#line 221 "dchop0.ch"
        (father=NFatherTree(tree,2));
#line 221 "dchop0.ch"
    
#line 221 "dchop0.ch"
    else 
#line 221 "dchop0.ch"
#line 223 "dchop0.ch"
        (father=FatherTree(tree));
#line 223 "dchop0.ch"
        
#line 223 "dchop0.ch"
    
#line 223 "dchop0.ch"
#line 224 "dchop0.ch"
    if ( (!father) ) 
#line 224 "dchop0.ch"
#line 225 "dchop0.ch"
        return 1 ;
    
#line 225 "dchop0.ch"
#line 226 "dchop0.ch"
    if ( ((_inter = (PPTREE)father,1) && 
#line 226 "dchop0.ch"
            (NumberTree(_inter) == LIST) &&
#line 226 "dchop0.ch"
            1) ) {
#line 226 "dchop0.ch"
#line 227 "dchop0.ch"
                    (father=FatherTree(father));
#line 227 "dchop0.ch"
                    
#line 227 "dchop0.ch"
#line 228 "dchop0.ch"
                    if ( ((_inter = (PPTREE)father,1) && 
#line 228 "dchop0.ch"
                            (NumberTree(_inter) == cplus::LANGUAGE) &&
#line 228 "dchop0.ch"
                            1) ) {
#line 228 "dchop0.ch"
#line 229 "dchop0.ch"
                                    return 1 ;
                                    
#line 229 "dchop0.ch"
#line 230 "dchop0.ch"
                                    
#line 230 "dchop0.ch"
#line 230 "dchop0.ch"
                                 }
#line 230 "dchop0.ch"
#line 231 "dchop0.ch"
                    
#line 231 "dchop0.ch"
#line 231 "dchop0.ch"
                 }
#line 231 "dchop0.ch"
#line 232 "dchop0.ch"
    return 0 ;
    
#line 232 "dchop0.ch"
#line 233 "dchop0.ch"
    
#line 233 "dchop0.ch"
#line 233 "dchop0.ch"
}
#line 233 "dchop0.ch"

#line 235 "dchop0.ch"

#line 235 "dchop0.ch"
int DecompCplus::comm ( PTREE paramTree, int type )
#line 235 "dchop0.ch"
{
#line 235 "dchop0.ch"
    register PPTREE _inter ;
#line 235 "dchop0.ch"

#line 235 "dchop0.ch"
#line 235 "dchop0.ch"
    int _nextVal ;
    
#line 235 "dchop0.ch"
#line 237 "dchop0.ch"
    char    *comment ;
    
#line 237 "dchop0.ch"
#line 238 "dchop0.ch"
    PTREE   father ;
#line 238 "dchop0.ch"
    
#line 238 "dchop0.ch"
#line 239 "dchop0.ch"
    const char  *intStartComment, *intMiddleComment, *intEndComment, *intPlusComment ;
    
#line 239 "dchop0.ch"
#line 241 "dchop0.ch"
    intStartComment = startComment ? startComment : "/*";
#line 241 "dchop0.ch"
#line 242 "dchop0.ch"
    intMiddleComment = middleComment ? middleComment : "  ";
#line 242 "dchop0.ch"
#line 243 "dchop0.ch"
    intEndComment = endComment ? endComment : "*/";
#line 243 "dchop0.ch"
#line 244 "dchop0.ch"
    intPlusComment = plusComment ? plusComment : "/";
#line 244 "dchop0.ch"
#line 245 "dchop0.ch"
    if ( (!paramTree) || inhibateComment ) 
#line 245 "dchop0.ch"
#line 246 "dchop0.ch"
        return 0 ;
    
#line 246 "dchop0.ch"
#line 247 "dchop0.ch"
    if ( type == PRE && (comment = IsComm(paramTree, PRE)) ) {
#line 247 "dchop0.ch"
#line 248 "dchop0.ch"
                                                                        PTREE   inter = (PTREE)0 ;
#line 248 "dchop0.ch"
                                                                        
#line 248 "dchop0.ch"
#line 249 "dchop0.ch"
                                                                        int beginning = Beginning();
                                                                        
#line 249 "dchop0.ch"
#line 248 "dchop0.ch"
                                                                        (inter=(PTREE)0);
#line 248 "dchop0.ch"
                                                                        
#line 248 "dchop0.ch"
#line 250 "dchop0.ch"
                                                                        if ( !commAtBeginning(paramTree) ) {
#line 250 "dchop0.ch"
#line 256 "dchop0.ch"
                                                                                                                if ( beginning ) {
#line 256 "dchop0.ch"
#line 257 "dchop0.ch"
if ( *comment == '/' && *(comment + 1) == ' ' && ( _inter = 
#line 257 "dchop0.ch"
                                                            FatherTree(paramTree),!(((_inter = (PPTREE)_inter,1) && 
#line 257 "dchop0.ch"
                                                                                        (NumberTree(_inter) == cplus::IF) &&
#line 257 "dchop0.ch"
                                                                                        1))) ) 
#line 257 "dchop0.ch"
#line 258 "dchop0.ch"
    LNewLine(2);
#line 258 "dchop0.ch"
else 
#line 259 "dchop0.ch"
if ( *comment == ' ' && ( _inter = 
#line 259 "dchop0.ch"
                            FatherTree(paramTree),!(((_inter = (PPTREE)_inter,1) && 
#line 259 "dchop0.ch"
                                                        (NumberTree(_inter) == cplus::IF) &&
#line 259 "dchop0.ch"
                                                        1))) ) 
#line 259 "dchop0.ch"
#line 260 "dchop0.ch"
    LNewLine(2);
#line 260 "dchop0.ch"
else 
#line 260 "dchop0.ch"
#line 262 "dchop0.ch"
    LNewLine(1);
#line 262 "dchop0.ch"
    
#line 262 "dchop0.ch"

#line 262 "dchop0.ch"
#line 263 "dchop0.ch"

#line 263 "dchop0.ch"
#line 263 "dchop0.ch"
                                                                                                                                  } else 
#line 263 "dchop0.ch"
#line 264 "dchop0.ch"
                                                                                                                    Space(1);
#line 264 "dchop0.ch"
                                                                                                                    
#line 264 "dchop0.ch"
                                                                                                                
#line 264 "dchop0.ch"
#line 265 "dchop0.ch"
                                                                                                                
#line 265 "dchop0.ch"
#line 265 "dchop0.ch"
                                                                                                              }
#line 265 "dchop0.ch"
#line 266 "dchop0.ch"
                                                                        do {
#line 266 "dchop0.ch"
#line 267 "dchop0.ch"
                                                                            if ( inter ) 
#line 267 "dchop0.ch"
#line 268 "dchop0.ch"
                                                                                comment = BrainyValue(inter);
#line 268 "dchop0.ch"
#line 270 "dchop0.ch"
                                                                            Mark();
#line 270 "dchop0.ch"
                                                                            if ( *comment == '/' ) 
#line 270 "dchop0.ch"
#line 271 "dchop0.ch"
                                                                                (inter=PrintCommE(paramTree, PRE, inter, intPlusComment, intPlusComment, ""));
#line 271 "dchop0.ch"
                                                                            
#line 271 "dchop0.ch"
                                                                            else 
#line 271 "dchop0.ch"
#line 273 "dchop0.ch"
                                                                                (inter=PrintCommE(paramTree, PRE, inter, intMiddleComment, intStartComment, intEndComment));
#line 273 "dchop0.ch"
                                                                                
#line 273 "dchop0.ch"
                                                                            
#line 273 "dchop0.ch"
                                                                            UnMark();
#line 273 "dchop0.ch"
                                                                            
#line 273 "dchop0.ch"
#line 277 "dchop0.ch"
                                                                            if ( beginning || *comment == '/' ) {
#line 277 "dchop0.ch"
#line 278 "dchop0.ch"
                                                                                                                        LNewLine(1);
#line 278 "dchop0.ch"
                                                                                                                        
#line 278 "dchop0.ch"
#line 279 "dchop0.ch"
                                                                                                                        
#line 279 "dchop0.ch"
#line 279 "dchop0.ch"
                                                                                                                    } else 
#line 279 "dchop0.ch"
#line 280 "dchop0.ch"
                                                                                Space(1);
#line 280 "dchop0.ch"
                                                                                
#line 280 "dchop0.ch"
                                                                            
#line 280 "dchop0.ch"
#line 281 "dchop0.ch"
                                                                            
#line 281 "dchop0.ch"
#line 281 "dchop0.ch"
                                                                           } 
#line 281 "dchop0.ch"
                                                                        while ( inter );
#line 281 "dchop0.ch"
                                                                        
#line 281 "dchop0.ch"
#line 282 "dchop0.ch"
                                                                        return 1 ;
                                                                        
#line 282 "dchop0.ch"
#line 283 "dchop0.ch"
                                                                        
#line 283 "dchop0.ch"
#line 283 "dchop0.ch"
                                                                    } else 
#line 283 "dchop0.ch"
    if ( type == POST && (comment = IsComm(paramTree, POST)) ) {
#line 283 "dchop0.ch"
#line 284 "dchop0.ch"
                                                                        PTREE   inter = (PTREE)0 ;
#line 284 "dchop0.ch"
                                                                        
#line 284 "dchop0.ch"
#line 284 "dchop0.ch"
                                                                        (inter=(PTREE)0);
#line 284 "dchop0.ch"
                                                                        
#line 284 "dchop0.ch"
#line 286 "dchop0.ch"
                                                                        Mark();
#line 286 "dchop0.ch"
                                                                        do {
#line 286 "dchop0.ch"
#line 287 "dchop0.ch"
                                                                            if ( inter ) 
#line 287 "dchop0.ch"
#line 288 "dchop0.ch"
                                                                                comment = BrainyValue(inter);
#line 288 "dchop0.ch"
#line 289 "dchop0.ch"
                                                                            Space(1);
#line 289 "dchop0.ch"
                                                                            
#line 289 "dchop0.ch"
#line 290 "dchop0.ch"
                                                                            Mark();
#line 290 "dchop0.ch"
                                                                            if ( *comment == '/' ) 
#line 290 "dchop0.ch"
#line 291 "dchop0.ch"
                                                                                (inter=PrintCommE(paramTree, POST, inter, intPlusComment, intPlusComment, ""));
#line 291 "dchop0.ch"
                                                                            
#line 291 "dchop0.ch"
                                                                            else 
#line 291 "dchop0.ch"
#line 293 "dchop0.ch"
                                                                                (inter=PrintCommE(paramTree, POST, inter, intMiddleComment, intStartComment, intEndComment));
#line 293 "dchop0.ch"
                                                                                
#line 293 "dchop0.ch"
                                                                            
#line 293 "dchop0.ch"
                                                                            UnMark();
#line 293 "dchop0.ch"
                                                                            
#line 293 "dchop0.ch"
#line 295 "dchop0.ch"
                                                                            if ( PrePost() && inter || *comment == '/' ) {
#line 295 "dchop0.ch"
#line 296 "dchop0.ch"
LNewLine(1);
#line 296 "dchop0.ch"

#line 296 "dchop0.ch"
#line 297 "dchop0.ch"

#line 297 "dchop0.ch"
#line 297 "dchop0.ch"
                                                                                                                              } else 
#line 297 "dchop0.ch"
#line 298 "dchop0.ch"
                                                                                Space(1);
#line 298 "dchop0.ch"
                                                                                
#line 298 "dchop0.ch"
                                                                            
#line 298 "dchop0.ch"
#line 299 "dchop0.ch"
                                                                            
#line 299 "dchop0.ch"
#line 299 "dchop0.ch"
                                                                           } 
#line 299 "dchop0.ch"
                                                                        while ( inter );
#line 299 "dchop0.ch"
                                                                        
#line 299 "dchop0.ch"
                                                                        UnMark();
#line 299 "dchop0.ch"
                                                                        
#line 299 "dchop0.ch"
#line 301 "dchop0.ch"
                                                                        return 1 ;
                                                                        
#line 301 "dchop0.ch"
#line 302 "dchop0.ch"
                                                                        
#line 302 "dchop0.ch"
#line 302 "dchop0.ch"
                                                                      }
#line 302 "dchop0.ch"
#line 303 "dchop0.ch"
    return 0 ;
    
#line 303 "dchop0.ch"
#line 304 "dchop0.ch"
    
#line 304 "dchop0.ch"
#line 304 "dchop0.ch"
}
#line 304 "dchop0.ch"

#line 306 "dchop0.ch"

#line 306 "dchop0.ch"
DecompCplus::DecompCplus ()
#line 306 "dchop0.ch"
{
#line 306 "dchop0.ch"
#line 306 "dchop0.ch"
    int _nextVal ;
    
#line 306 "dchop0.ch"
#line 308 "dchop0.ch"
    statementf = 1 ;
#line 308 "dchop0.ch"
#line 309 "dchop0.ch"
    inClass = 0 ;
#line 309 "dchop0.ch"
#line 310 "dchop0.ch"
    maxX = -1 ;
#line 310 "dchop0.ch"
#line 311 "dchop0.ch"
    indentFuncFlag = 0 ;
#line 311 "dchop0.ch"
#line 312 "dchop0.ch"
    xFather = yFather = 0 ;
#line 312 "dchop0.ch"
#line 313 "dchop0.ch"
#define POST_COMMENT postComment
    
#line 313 "dchop0.ch"
#line 314 "dchop0.ch"
    POST_COMMENT = (PTREE)0 ;
#line 314 "dchop0.ch"
#line 315 "dchop0.ch"
#undef POST_COMMENT
#line 315 "dchop0.ch"
#line 316 "dchop0.ch"
    simplifyExpression = 1 ;
#line 316 "dchop0.ch"
#line 317 "dchop0.ch"
    inhibateComment = 0 ;
#line 317 "dchop0.ch"
#line 318 "dchop0.ch"
    flatFunct = false ;
#line 318 "dchop0.ch"
#line 319 "dchop0.ch"
    copyPrinted = false ;
#line 319 "dchop0.ch"
#line 320 "dchop0.ch"
    
#line 320 "dchop0.ch"
#line 320 "dchop0.ch"
}
#line 320 "dchop0.ch"

#define RIGHT_TO_LEFT 1
#define LEFT_TO_RIGHT 2

#line 325 "dchop0.ch"

#line 325 "dchop0.ch"
int DecompCplus::OpAssociativity ( PTREE tree )
#line 325 "dchop0.ch"
{
#line 325 "dchop0.ch"
    register PPTREE _inter ;
#line 325 "dchop0.ch"

#line 325 "dchop0.ch"
#line 325 "dchop0.ch"
    int _nextVal ;
    
#line 325 "dchop0.ch"
#line 327 "dchop0.ch"
    switch ( NumberTree(tree) ) {
#line 327 "dchop0.ch"
#line 327 "dchop0.ch"
        case cplus::AFF : 
#line 327 "dchop0.ch"
#line 327 "dchop0.ch"
        _Case132 : 
#line 327 "dchop0.ch"
#line 327 "dchop0.ch"
            ;
#line 327 "dchop0.ch"
#line 327 "dchop0.ch"
            goto _Case133 ;
            
#line 327 "dchop0.ch"
#line 327 "dchop0.ch"
        case cplus::MUL_AFF : 
#line 327 "dchop0.ch"
#line 327 "dchop0.ch"
        _Case133 : 
#line 327 "dchop0.ch"
#line 327 "dchop0.ch"
            ;
#line 327 "dchop0.ch"
#line 327 "dchop0.ch"
            goto _Case134 ;
            
#line 327 "dchop0.ch"
#line 327 "dchop0.ch"
        case cplus::DIV_AFF : 
#line 327 "dchop0.ch"
#line 327 "dchop0.ch"
        _Case134 : 
#line 327 "dchop0.ch"
#line 327 "dchop0.ch"
            ;
#line 327 "dchop0.ch"
#line 327 "dchop0.ch"
            goto _Case135 ;
            
#line 327 "dchop0.ch"
#line 327 "dchop0.ch"
        case cplus::REM_AFF : 
#line 327 "dchop0.ch"
#line 327 "dchop0.ch"
        _Case135 : 
#line 327 "dchop0.ch"
#line 327 "dchop0.ch"
            ;
#line 327 "dchop0.ch"
#line 327 "dchop0.ch"
            goto _Case136 ;
            
#line 327 "dchop0.ch"
#line 327 "dchop0.ch"
        case cplus::MIN_AFF : 
#line 327 "dchop0.ch"
#line 327 "dchop0.ch"
        _Case136 : 
#line 327 "dchop0.ch"
#line 327 "dchop0.ch"
            ;
#line 327 "dchop0.ch"
#line 327 "dchop0.ch"
            goto _Case137 ;
            
#line 327 "dchop0.ch"
#line 327 "dchop0.ch"
        case cplus::PLU_AFF : 
#line 327 "dchop0.ch"
#line 327 "dchop0.ch"
        _Case137 : 
#line 327 "dchop0.ch"
#line 327 "dchop0.ch"
            ;
#line 327 "dchop0.ch"
#line 327 "dchop0.ch"
            goto _Case138 ;
            
#line 327 "dchop0.ch"
#line 327 "dchop0.ch"
        case cplus::LSH_AFF : 
#line 327 "dchop0.ch"
#line 327 "dchop0.ch"
        _Case138 : 
#line 327 "dchop0.ch"
#line 327 "dchop0.ch"
            ;
#line 327 "dchop0.ch"
#line 327 "dchop0.ch"
            goto _Case139 ;
            
#line 327 "dchop0.ch"
#line 327 "dchop0.ch"
        case cplus::RSH_AFF : 
#line 327 "dchop0.ch"
#line 327 "dchop0.ch"
        _Case139 : 
#line 327 "dchop0.ch"
#line 327 "dchop0.ch"
            ;
#line 327 "dchop0.ch"
#line 327 "dchop0.ch"
            goto _Case140 ;
            
#line 327 "dchop0.ch"
#line 327 "dchop0.ch"
        case cplus::AND_AFF : 
#line 327 "dchop0.ch"
#line 327 "dchop0.ch"
        _Case140 : 
#line 327 "dchop0.ch"
#line 327 "dchop0.ch"
            ;
#line 327 "dchop0.ch"
#line 327 "dchop0.ch"
            goto _Case141 ;
            
#line 327 "dchop0.ch"
#line 327 "dchop0.ch"
        case cplus::OR_AFF : 
#line 327 "dchop0.ch"
#line 327 "dchop0.ch"
        _Case141 : 
#line 327 "dchop0.ch"
#line 327 "dchop0.ch"
            ;
#line 327 "dchop0.ch"
#line 327 "dchop0.ch"
            goto _Case142 ;
            
#line 327 "dchop0.ch"
#line 327 "dchop0.ch"
        case cplus::XOR_AFF : 
#line 327 "dchop0.ch"
#line 327 "dchop0.ch"
        _Case142 : 
#line 327 "dchop0.ch"
#line 327 "dchop0.ch"
            ;
#line 327 "dchop0.ch"
#line 327 "dchop0.ch"
            goto _Case143 ;
            
#line 327 "dchop0.ch"
#line 327 "dchop0.ch"
        case cplus::COND_AFF : 
#line 327 "dchop0.ch"
#line 327 "dchop0.ch"
        _Case143 : 
#line 327 "dchop0.ch"
#line 327 "dchop0.ch"
            ;
#line 327 "dchop0.ch"
#line 327 "dchop0.ch"
            goto _Case144 ;
            
#line 327 "dchop0.ch"
#line 327 "dchop0.ch"
        case cplus::NEG : 
#line 327 "dchop0.ch"
#line 327 "dchop0.ch"
        _Case144 : 
#line 327 "dchop0.ch"
#line 327 "dchop0.ch"
            ;
#line 327 "dchop0.ch"
#line 327 "dchop0.ch"
            goto _Case145 ;
            
#line 327 "dchop0.ch"
#line 327 "dchop0.ch"
        case cplus::POS : 
#line 327 "dchop0.ch"
#line 327 "dchop0.ch"
        _Case145 : 
#line 327 "dchop0.ch"
#line 327 "dchop0.ch"
            ;
#line 327 "dchop0.ch"
#line 327 "dchop0.ch"
            goto _Case146 ;
            
#line 327 "dchop0.ch"
#line 327 "dchop0.ch"
        case cplus::LNEG : 
#line 327 "dchop0.ch"
#line 327 "dchop0.ch"
        _Case146 : 
#line 327 "dchop0.ch"
#line 327 "dchop0.ch"
            ;
#line 327 "dchop0.ch"
#line 327 "dchop0.ch"
            goto _Case147 ;
            
#line 327 "dchop0.ch"
#line 327 "dchop0.ch"
        case cplus::NOT : 
#line 327 "dchop0.ch"
#line 327 "dchop0.ch"
        _Case147 : 
#line 327 "dchop0.ch"
#line 327 "dchop0.ch"
            ;
#line 327 "dchop0.ch"
#line 327 "dchop0.ch"
            goto _Case148 ;
            
#line 327 "dchop0.ch"
#line 327 "dchop0.ch"
        case cplus::POINT : 
#line 327 "dchop0.ch"
#line 327 "dchop0.ch"
        _Case148 : 
#line 327 "dchop0.ch"
#line 327 "dchop0.ch"
            ;
#line 327 "dchop0.ch"
#line 327 "dchop0.ch"
            goto _Case149 ;
            
#line 327 "dchop0.ch"
#line 327 "dchop0.ch"
        case cplus::ARROW_MEMB : 
#line 327 "dchop0.ch"
#line 327 "dchop0.ch"
        _Case149 : 
#line 327 "dchop0.ch"
#line 327 "dchop0.ch"
            ;
#line 327 "dchop0.ch"
#line 327 "dchop0.ch"
            goto _Case150 ;
            
#line 327 "dchop0.ch"
#line 327 "dchop0.ch"
        case cplus::DOT_MEMB : 
#line 327 "dchop0.ch"
#line 327 "dchop0.ch"
        _Case150 : 
#line 327 "dchop0.ch"
#line 327 "dchop0.ch"
            ;
#line 327 "dchop0.ch"
#line 327 "dchop0.ch"
            goto _Case151 ;
            
#line 327 "dchop0.ch"
#line 327 "dchop0.ch"
        case cplus::ADDR : 
#line 327 "dchop0.ch"
#line 327 "dchop0.ch"
        _Case151 : 
#line 327 "dchop0.ch"
#line 327 "dchop0.ch"
            ;
#line 327 "dchop0.ch"
#line 327 "dchop0.ch"
            goto _Case152 ;
            
#line 327 "dchop0.ch"
#line 327 "dchop0.ch"
        case cplus::EXP : 
#line 327 "dchop0.ch"
#line 327 "dchop0.ch"
        _Case152 : 
#line 327 "dchop0.ch"
#line 327 "dchop0.ch"
            ;
#line 327 "dchop0.ch"
#line 327 "dchop0.ch"
            goto _Case153 ;
            
#line 327 "dchop0.ch"
#line 327 "dchop0.ch"
        case cplus::AINCR : 
#line 327 "dchop0.ch"
#line 327 "dchop0.ch"
        _Case153 : 
#line 327 "dchop0.ch"
#line 327 "dchop0.ch"
            ;
#line 327 "dchop0.ch"
#line 327 "dchop0.ch"
            goto _Case154 ;
            
#line 327 "dchop0.ch"
#line 327 "dchop0.ch"
        case cplus::ADECR : 
#line 327 "dchop0.ch"
#line 327 "dchop0.ch"
        _Case154 : 
#line 327 "dchop0.ch"
#line 327 "dchop0.ch"
            ;
#line 327 "dchop0.ch"
#line 327 "dchop0.ch"
            goto _Case155 ;
            
#line 327 "dchop0.ch"
#line 327 "dchop0.ch"
        case cplus::BINCR : 
#line 327 "dchop0.ch"
#line 327 "dchop0.ch"
        _Case155 : 
#line 327 "dchop0.ch"
#line 327 "dchop0.ch"
            ;
#line 327 "dchop0.ch"
#line 327 "dchop0.ch"
            goto _Case156 ;
            
#line 327 "dchop0.ch"
#line 352 "dchop0.ch"
        case cplus::BDECR : 
#line 352 "dchop0.ch"
#line 352 "dchop0.ch"
        _Case156 : 
#line 352 "dchop0.ch"
#line 352 "dchop0.ch"
            ;
#line 352 "dchop0.ch"
#line 352 "dchop0.ch"
            return RIGHT_TO_LEFT ;
            
#line 352 "dchop0.ch"
#line 352 "dchop0.ch"
            goto _Case157 ;
            
#line 352 "dchop0.ch"
#line 353 "dchop0.ch"
        default : 
#line 353 "dchop0.ch"
#line 353 "dchop0.ch"
        _Case157 : 
#line 353 "dchop0.ch"
#line 353 "dchop0.ch"
            ;
#line 353 "dchop0.ch"
#line 353 "dchop0.ch"
            return LEFT_TO_RIGHT ;
            
#line 353 "dchop0.ch"
    }
#line 353 "dchop0.ch"
    
#line 353 "dchop0.ch"
#line 355 "dchop0.ch"
    
#line 355 "dchop0.ch"
#line 355 "dchop0.ch"
}
#line 355 "dchop0.ch"

#line 357 "dchop0.ch"

#line 357 "dchop0.ch"
bool IsAff ( PTREE tree )
#line 357 "dchop0.ch"
{
#line 357 "dchop0.ch"
    register PPTREE _inter ;
#line 357 "dchop0.ch"

#line 357 "dchop0.ch"
#line 357 "dchop0.ch"
    int _nextVal ;
    
#line 357 "dchop0.ch"
#line 359 "dchop0.ch"
    switch ( NumberTree(tree) ) {
#line 359 "dchop0.ch"
#line 359 "dchop0.ch"
        case cplus::AFF : 
#line 359 "dchop0.ch"
#line 359 "dchop0.ch"
        _Case170 : 
#line 359 "dchop0.ch"
#line 359 "dchop0.ch"
            ;
#line 359 "dchop0.ch"
#line 359 "dchop0.ch"
            goto _Case171 ;
            
#line 359 "dchop0.ch"
#line 359 "dchop0.ch"
        case cplus::MUL_AFF : 
#line 359 "dchop0.ch"
#line 359 "dchop0.ch"
        _Case171 : 
#line 359 "dchop0.ch"
#line 359 "dchop0.ch"
            ;
#line 359 "dchop0.ch"
#line 359 "dchop0.ch"
            goto _Case172 ;
            
#line 359 "dchop0.ch"
#line 359 "dchop0.ch"
        case cplus::DIV_AFF : 
#line 359 "dchop0.ch"
#line 359 "dchop0.ch"
        _Case172 : 
#line 359 "dchop0.ch"
#line 359 "dchop0.ch"
            ;
#line 359 "dchop0.ch"
#line 359 "dchop0.ch"
            goto _Case173 ;
            
#line 359 "dchop0.ch"
#line 359 "dchop0.ch"
        case cplus::REM_AFF : 
#line 359 "dchop0.ch"
#line 359 "dchop0.ch"
        _Case173 : 
#line 359 "dchop0.ch"
#line 359 "dchop0.ch"
            ;
#line 359 "dchop0.ch"
#line 359 "dchop0.ch"
            goto _Case174 ;
            
#line 359 "dchop0.ch"
#line 359 "dchop0.ch"
        case cplus::MIN_AFF : 
#line 359 "dchop0.ch"
#line 359 "dchop0.ch"
        _Case174 : 
#line 359 "dchop0.ch"
#line 359 "dchop0.ch"
            ;
#line 359 "dchop0.ch"
#line 359 "dchop0.ch"
            goto _Case175 ;
            
#line 359 "dchop0.ch"
#line 359 "dchop0.ch"
        case cplus::PLU_AFF : 
#line 359 "dchop0.ch"
#line 359 "dchop0.ch"
        _Case175 : 
#line 359 "dchop0.ch"
#line 359 "dchop0.ch"
            ;
#line 359 "dchop0.ch"
#line 359 "dchop0.ch"
            goto _Case176 ;
            
#line 359 "dchop0.ch"
#line 359 "dchop0.ch"
        case cplus::LSH_AFF : 
#line 359 "dchop0.ch"
#line 359 "dchop0.ch"
        _Case176 : 
#line 359 "dchop0.ch"
#line 359 "dchop0.ch"
            ;
#line 359 "dchop0.ch"
#line 359 "dchop0.ch"
            goto _Case177 ;
            
#line 359 "dchop0.ch"
#line 359 "dchop0.ch"
        case cplus::RSH_AFF : 
#line 359 "dchop0.ch"
#line 359 "dchop0.ch"
        _Case177 : 
#line 359 "dchop0.ch"
#line 359 "dchop0.ch"
            ;
#line 359 "dchop0.ch"
#line 359 "dchop0.ch"
            goto _Case178 ;
            
#line 359 "dchop0.ch"
#line 359 "dchop0.ch"
        case cplus::AND_AFF : 
#line 359 "dchop0.ch"
#line 359 "dchop0.ch"
        _Case178 : 
#line 359 "dchop0.ch"
#line 359 "dchop0.ch"
            ;
#line 359 "dchop0.ch"
#line 359 "dchop0.ch"
            goto _Case179 ;
            
#line 359 "dchop0.ch"
#line 359 "dchop0.ch"
        case cplus::OR_AFF : 
#line 359 "dchop0.ch"
#line 359 "dchop0.ch"
        _Case179 : 
#line 359 "dchop0.ch"
#line 359 "dchop0.ch"
            ;
#line 359 "dchop0.ch"
#line 359 "dchop0.ch"
            goto _Case180 ;
            
#line 359 "dchop0.ch"
#line 370 "dchop0.ch"
        case cplus::XOR_AFF : 
#line 370 "dchop0.ch"
#line 370 "dchop0.ch"
        _Case180 : 
#line 370 "dchop0.ch"
#line 370 "dchop0.ch"
            ;
#line 370 "dchop0.ch"
#line 370 "dchop0.ch"
            return true ;
            
#line 370 "dchop0.ch"
#line 370 "dchop0.ch"
            goto _Case181 ;
            
#line 370 "dchop0.ch"
#line 371 "dchop0.ch"
        default : 
#line 371 "dchop0.ch"
#line 371 "dchop0.ch"
        _Case181 : 
#line 371 "dchop0.ch"
#line 371 "dchop0.ch"
            ;
#line 371 "dchop0.ch"
#line 371 "dchop0.ch"
            return false ;
            
#line 371 "dchop0.ch"
    }
#line 371 "dchop0.ch"
    
#line 371 "dchop0.ch"
#line 373 "dchop0.ch"
    
#line 373 "dchop0.ch"
#line 373 "dchop0.ch"
}
#line 373 "dchop0.ch"

#line 375 "dchop0.ch"

#line 375 "dchop0.ch"
int DecompCplus::OpPriority ( PTREE tree )
#line 375 "dchop0.ch"
{
#line 375 "dchop0.ch"
    register PPTREE _inter ;
#line 375 "dchop0.ch"

#line 375 "dchop0.ch"
#line 375 "dchop0.ch"
    int _nextVal ;
    
#line 375 "dchop0.ch"
#line 377 "dchop0.ch"
    PTREE   son ;
#line 377 "dchop0.ch"
    
#line 377 "dchop0.ch"
#line 379 "dchop0.ch"
    switch ( NumberTree(tree) ) {
#line 379 "dchop0.ch"
#line 379 "dchop0.ch"
        case cplus::EXP_SEQ : 
#line 379 "dchop0.ch"
#line 379 "dchop0.ch"
        _Case250 : 
#line 379 "dchop0.ch"
#line 379 "dchop0.ch"
            ;
#line 379 "dchop0.ch"
#line 379 "dchop0.ch"
            goto _Case251 ;
            
#line 379 "dchop0.ch"
#line 382 "dchop0.ch"
        case cplus::INITIALIZER : 
#line 382 "dchop0.ch"
#line 382 "dchop0.ch"
        _Case251 : 
#line 382 "dchop0.ch"
#line 382 "dchop0.ch"
            ;
#line 382 "dchop0.ch"
#line 382 "dchop0.ch"
            return 0 ;
            
#line 382 "dchop0.ch"
#line 383 "dchop0.ch"
            break ;
            
#line 383 "dchop0.ch"
#line 383 "dchop0.ch"
        case cplus::AFF : 
#line 383 "dchop0.ch"
#line 383 "dchop0.ch"
        _Case252 : 
#line 383 "dchop0.ch"
#line 383 "dchop0.ch"
            ;
#line 383 "dchop0.ch"
#line 383 "dchop0.ch"
            goto _Case253 ;
            
#line 383 "dchop0.ch"
#line 383 "dchop0.ch"
        case cplus::MUL_AFF : 
#line 383 "dchop0.ch"
#line 383 "dchop0.ch"
        _Case253 : 
#line 383 "dchop0.ch"
#line 383 "dchop0.ch"
            ;
#line 383 "dchop0.ch"
#line 383 "dchop0.ch"
            goto _Case254 ;
            
#line 383 "dchop0.ch"
#line 383 "dchop0.ch"
        case cplus::DIV_AFF : 
#line 383 "dchop0.ch"
#line 383 "dchop0.ch"
        _Case254 : 
#line 383 "dchop0.ch"
#line 383 "dchop0.ch"
            ;
#line 383 "dchop0.ch"
#line 383 "dchop0.ch"
            goto _Case255 ;
            
#line 383 "dchop0.ch"
#line 383 "dchop0.ch"
        case cplus::REM_AFF : 
#line 383 "dchop0.ch"
#line 383 "dchop0.ch"
        _Case255 : 
#line 383 "dchop0.ch"
#line 383 "dchop0.ch"
            ;
#line 383 "dchop0.ch"
#line 383 "dchop0.ch"
            goto _Case256 ;
            
#line 383 "dchop0.ch"
#line 383 "dchop0.ch"
        case cplus::MIN_AFF : 
#line 383 "dchop0.ch"
#line 383 "dchop0.ch"
        _Case256 : 
#line 383 "dchop0.ch"
#line 383 "dchop0.ch"
            ;
#line 383 "dchop0.ch"
#line 383 "dchop0.ch"
            goto _Case257 ;
            
#line 383 "dchop0.ch"
#line 383 "dchop0.ch"
        case cplus::PLU_AFF : 
#line 383 "dchop0.ch"
#line 383 "dchop0.ch"
        _Case257 : 
#line 383 "dchop0.ch"
#line 383 "dchop0.ch"
            ;
#line 383 "dchop0.ch"
#line 383 "dchop0.ch"
            goto _Case258 ;
            
#line 383 "dchop0.ch"
#line 383 "dchop0.ch"
        case cplus::LSH_AFF : 
#line 383 "dchop0.ch"
#line 383 "dchop0.ch"
        _Case258 : 
#line 383 "dchop0.ch"
#line 383 "dchop0.ch"
            ;
#line 383 "dchop0.ch"
#line 383 "dchop0.ch"
            goto _Case259 ;
            
#line 383 "dchop0.ch"
#line 383 "dchop0.ch"
        case cplus::RSH_AFF : 
#line 383 "dchop0.ch"
#line 383 "dchop0.ch"
        _Case259 : 
#line 383 "dchop0.ch"
#line 383 "dchop0.ch"
            ;
#line 383 "dchop0.ch"
#line 383 "dchop0.ch"
            goto _Case260 ;
            
#line 383 "dchop0.ch"
#line 383 "dchop0.ch"
        case cplus::AND_AFF : 
#line 383 "dchop0.ch"
#line 383 "dchop0.ch"
        _Case260 : 
#line 383 "dchop0.ch"
#line 383 "dchop0.ch"
            ;
#line 383 "dchop0.ch"
#line 383 "dchop0.ch"
            goto _Case261 ;
            
#line 383 "dchop0.ch"
#line 383 "dchop0.ch"
        case cplus::OR_AFF : 
#line 383 "dchop0.ch"
#line 383 "dchop0.ch"
        _Case261 : 
#line 383 "dchop0.ch"
#line 383 "dchop0.ch"
            ;
#line 383 "dchop0.ch"
#line 383 "dchop0.ch"
            goto _Case262 ;
            
#line 383 "dchop0.ch"
#line 395 "dchop0.ch"
        case cplus::XOR_AFF : 
#line 395 "dchop0.ch"
#line 395 "dchop0.ch"
        _Case262 : 
#line 395 "dchop0.ch"
#line 395 "dchop0.ch"
            ;
#line 395 "dchop0.ch"
#line 395 "dchop0.ch"
            return 1 ;
            
#line 395 "dchop0.ch"
#line 396 "dchop0.ch"
            break ;
            
#line 396 "dchop0.ch"
#line 398 "dchop0.ch"
        case cplus::COND_AFF : 
#line 398 "dchop0.ch"
#line 398 "dchop0.ch"
        _Case263 : 
#line 398 "dchop0.ch"
#line 398 "dchop0.ch"
            ;
#line 398 "dchop0.ch"
#line 398 "dchop0.ch"
            return 2 ;
            
#line 398 "dchop0.ch"
#line 399 "dchop0.ch"
            break ;
            
#line 399 "dchop0.ch"
#line 401 "dchop0.ch"
        case cplus::OR : 
#line 401 "dchop0.ch"
#line 401 "dchop0.ch"
        _Case264 : 
#line 401 "dchop0.ch"
#line 401 "dchop0.ch"
            ;
#line 401 "dchop0.ch"
#line 401 "dchop0.ch"
            return 3 ;
            
#line 401 "dchop0.ch"
#line 402 "dchop0.ch"
            break ;
            
#line 402 "dchop0.ch"
#line 404 "dchop0.ch"
        case cplus::AND : 
#line 404 "dchop0.ch"
#line 404 "dchop0.ch"
        _Case265 : 
#line 404 "dchop0.ch"
#line 404 "dchop0.ch"
            ;
#line 404 "dchop0.ch"
#line 404 "dchop0.ch"
            return 4 ;
            
#line 404 "dchop0.ch"
#line 405 "dchop0.ch"
            break ;
            
#line 405 "dchop0.ch"
#line 407 "dchop0.ch"
        case cplus::LOR : 
#line 407 "dchop0.ch"
#line 407 "dchop0.ch"
        _Case266 : 
#line 407 "dchop0.ch"
#line 407 "dchop0.ch"
            ;
#line 407 "dchop0.ch"
#line 407 "dchop0.ch"
            return 5 ;
            
#line 407 "dchop0.ch"
#line 408 "dchop0.ch"
            break ;
            
#line 408 "dchop0.ch"
#line 410 "dchop0.ch"
        case cplus::LXOR : 
#line 410 "dchop0.ch"
#line 410 "dchop0.ch"
        _Case267 : 
#line 410 "dchop0.ch"
#line 410 "dchop0.ch"
            ;
#line 410 "dchop0.ch"
#line 410 "dchop0.ch"
            return 6 ;
            
#line 410 "dchop0.ch"
#line 411 "dchop0.ch"
            break ;
            
#line 411 "dchop0.ch"
#line 413 "dchop0.ch"
        case cplus::LAND : 
#line 413 "dchop0.ch"
#line 413 "dchop0.ch"
        _Case268 : 
#line 413 "dchop0.ch"
#line 413 "dchop0.ch"
            ;
#line 413 "dchop0.ch"
#line 413 "dchop0.ch"
            return 7 ;
            
#line 413 "dchop0.ch"
#line 414 "dchop0.ch"
            break ;
            
#line 414 "dchop0.ch"
#line 414 "dchop0.ch"
        case cplus::EQU : 
#line 414 "dchop0.ch"
#line 414 "dchop0.ch"
        _Case269 : 
#line 414 "dchop0.ch"
#line 414 "dchop0.ch"
            ;
#line 414 "dchop0.ch"
#line 414 "dchop0.ch"
            goto _Case270 ;
            
#line 414 "dchop0.ch"
#line 417 "dchop0.ch"
        case cplus::NEQU : 
#line 417 "dchop0.ch"
#line 417 "dchop0.ch"
        _Case270 : 
#line 417 "dchop0.ch"
#line 417 "dchop0.ch"
            ;
#line 417 "dchop0.ch"
#line 417 "dchop0.ch"
            return 8 ;
            
#line 417 "dchop0.ch"
#line 418 "dchop0.ch"
            break ;
            
#line 418 "dchop0.ch"
#line 418 "dchop0.ch"
        case cplus::LEQU : 
#line 418 "dchop0.ch"
#line 418 "dchop0.ch"
        _Case271 : 
#line 418 "dchop0.ch"
#line 418 "dchop0.ch"
            ;
#line 418 "dchop0.ch"
#line 418 "dchop0.ch"
            goto _Case272 ;
            
#line 418 "dchop0.ch"
#line 418 "dchop0.ch"
        case cplus::GEQU : 
#line 418 "dchop0.ch"
#line 418 "dchop0.ch"
        _Case272 : 
#line 418 "dchop0.ch"
#line 418 "dchop0.ch"
            ;
#line 418 "dchop0.ch"
#line 418 "dchop0.ch"
            goto _Case273 ;
            
#line 418 "dchop0.ch"
#line 418 "dchop0.ch"
        case cplus::GT : 
#line 418 "dchop0.ch"
#line 418 "dchop0.ch"
        _Case273 : 
#line 418 "dchop0.ch"
#line 418 "dchop0.ch"
            ;
#line 418 "dchop0.ch"
#line 418 "dchop0.ch"
            goto _Case274 ;
            
#line 418 "dchop0.ch"
#line 423 "dchop0.ch"
        case cplus::LT : 
#line 423 "dchop0.ch"
#line 423 "dchop0.ch"
        _Case274 : 
#line 423 "dchop0.ch"
#line 423 "dchop0.ch"
            ;
#line 423 "dchop0.ch"
#line 423 "dchop0.ch"
            return 9 ;
            
#line 423 "dchop0.ch"
#line 424 "dchop0.ch"
            break ;
            
#line 424 "dchop0.ch"
#line 424 "dchop0.ch"
        case cplus::LSHI : 
#line 424 "dchop0.ch"
#line 424 "dchop0.ch"
        _Case275 : 
#line 424 "dchop0.ch"
#line 424 "dchop0.ch"
            ;
#line 424 "dchop0.ch"
#line 424 "dchop0.ch"
            goto _Case276 ;
            
#line 424 "dchop0.ch"
#line 427 "dchop0.ch"
        case cplus::RSHI : 
#line 427 "dchop0.ch"
#line 427 "dchop0.ch"
        _Case276 : 
#line 427 "dchop0.ch"
#line 427 "dchop0.ch"
            ;
#line 427 "dchop0.ch"
#line 427 "dchop0.ch"
            return 10 ;
            
#line 427 "dchop0.ch"
#line 428 "dchop0.ch"
            break ;
            
#line 428 "dchop0.ch"
#line 428 "dchop0.ch"
        case cplus::MINUS : 
#line 428 "dchop0.ch"
#line 428 "dchop0.ch"
        _Case277 : 
#line 428 "dchop0.ch"
#line 428 "dchop0.ch"
            ;
#line 428 "dchop0.ch"
#line 428 "dchop0.ch"
            goto _Case278 ;
            
#line 428 "dchop0.ch"
#line 428 "dchop0.ch"
        case cplus::PLUS : 
#line 428 "dchop0.ch"
#line 428 "dchop0.ch"
        _Case278 : 
#line 428 "dchop0.ch"
#line 428 "dchop0.ch"
            ;
#line 428 "dchop0.ch"
#line 428 "dchop0.ch"
            goto _Case279 ;
            
#line 428 "dchop0.ch"
#line 435 "dchop0.ch"
        case cplus::TYP_AFF : 
#line 435 "dchop0.ch"
#line 435 "dchop0.ch"
        _Case279 : 
#line 435 "dchop0.ch"
#line 435 "dchop0.ch"
            ;
#line 435 "dchop0.ch"
#line 435 "dchop0.ch"
            return 11 ;
            
#line 435 "dchop0.ch"
#line 436 "dchop0.ch"
            break ;
            
#line 436 "dchop0.ch"
#line 436 "dchop0.ch"
        case cplus::MUL : 
#line 436 "dchop0.ch"
#line 436 "dchop0.ch"
        _Case280 : 
#line 436 "dchop0.ch"
#line 436 "dchop0.ch"
            ;
#line 436 "dchop0.ch"
#line 436 "dchop0.ch"
            goto _Case281 ;
            
#line 436 "dchop0.ch"
#line 436 "dchop0.ch"
        case cplus::DIV : 
#line 436 "dchop0.ch"
#line 436 "dchop0.ch"
        _Case281 : 
#line 436 "dchop0.ch"
#line 436 "dchop0.ch"
            ;
#line 436 "dchop0.ch"
#line 436 "dchop0.ch"
            goto _Case282 ;
            
#line 436 "dchop0.ch"
#line 440 "dchop0.ch"
        case cplus::REM : 
#line 440 "dchop0.ch"
#line 440 "dchop0.ch"
        _Case282 : 
#line 440 "dchop0.ch"
#line 440 "dchop0.ch"
            ;
#line 440 "dchop0.ch"
#line 440 "dchop0.ch"
            return 12 ;
            
#line 440 "dchop0.ch"
#line 441 "dchop0.ch"
            break ;
            
#line 441 "dchop0.ch"
#line 441 "dchop0.ch"
        case cplus::DOT_MEMB : 
#line 441 "dchop0.ch"
#line 441 "dchop0.ch"
        _Case283 : 
#line 441 "dchop0.ch"
#line 441 "dchop0.ch"
            ;
#line 441 "dchop0.ch"
#line 441 "dchop0.ch"
            goto _Case284 ;
            
#line 441 "dchop0.ch"
#line 444 "dchop0.ch"
        case cplus::ARROW_MEMB : 
#line 444 "dchop0.ch"
#line 444 "dchop0.ch"
        _Case284 : 
#line 444 "dchop0.ch"
#line 444 "dchop0.ch"
            ;
#line 444 "dchop0.ch"
#line 444 "dchop0.ch"
            return 13 ;
            
#line 444 "dchop0.ch"
#line 445 "dchop0.ch"
            break ;
            
#line 445 "dchop0.ch"
#line 445 "dchop0.ch"
        case cplus::NEG : 
#line 445 "dchop0.ch"
#line 445 "dchop0.ch"
        _Case285 : 
#line 445 "dchop0.ch"
#line 445 "dchop0.ch"
            ;
#line 445 "dchop0.ch"
#line 445 "dchop0.ch"
            goto _Case286 ;
            
#line 445 "dchop0.ch"
#line 445 "dchop0.ch"
        case cplus::POS : 
#line 445 "dchop0.ch"
#line 445 "dchop0.ch"
        _Case286 : 
#line 445 "dchop0.ch"
#line 445 "dchop0.ch"
            ;
#line 445 "dchop0.ch"
#line 445 "dchop0.ch"
            goto _Case287 ;
            
#line 445 "dchop0.ch"
#line 445 "dchop0.ch"
        case cplus::LNEG : 
#line 445 "dchop0.ch"
#line 445 "dchop0.ch"
        _Case287 : 
#line 445 "dchop0.ch"
#line 445 "dchop0.ch"
            ;
#line 445 "dchop0.ch"
#line 445 "dchop0.ch"
            goto _Case288 ;
            
#line 445 "dchop0.ch"
#line 445 "dchop0.ch"
        case cplus::NOT : 
#line 445 "dchop0.ch"
#line 445 "dchop0.ch"
        _Case288 : 
#line 445 "dchop0.ch"
#line 445 "dchop0.ch"
            ;
#line 445 "dchop0.ch"
#line 445 "dchop0.ch"
            goto _Case289 ;
            
#line 445 "dchop0.ch"
#line 445 "dchop0.ch"
        case cplus::POINT : 
#line 445 "dchop0.ch"
#line 445 "dchop0.ch"
        _Case289 : 
#line 445 "dchop0.ch"
#line 445 "dchop0.ch"
            ;
#line 445 "dchop0.ch"
#line 445 "dchop0.ch"
            goto _Case290 ;
            
#line 445 "dchop0.ch"
#line 445 "dchop0.ch"
        case cplus::ADDR : 
#line 445 "dchop0.ch"
#line 445 "dchop0.ch"
        _Case290 : 
#line 445 "dchop0.ch"
#line 445 "dchop0.ch"
            ;
#line 445 "dchop0.ch"
#line 445 "dchop0.ch"
            goto _Case291 ;
            
#line 445 "dchop0.ch"
#line 445 "dchop0.ch"
        case cplus::AINCR : 
#line 445 "dchop0.ch"
#line 445 "dchop0.ch"
        _Case291 : 
#line 445 "dchop0.ch"
#line 445 "dchop0.ch"
            ;
#line 445 "dchop0.ch"
#line 445 "dchop0.ch"
            goto _Case292 ;
            
#line 445 "dchop0.ch"
#line 445 "dchop0.ch"
        case cplus::ADECR : 
#line 445 "dchop0.ch"
#line 445 "dchop0.ch"
        _Case292 : 
#line 445 "dchop0.ch"
#line 445 "dchop0.ch"
            ;
#line 445 "dchop0.ch"
#line 445 "dchop0.ch"
            goto _Case293 ;
            
#line 445 "dchop0.ch"
#line 445 "dchop0.ch"
        case cplus::BINCR : 
#line 445 "dchop0.ch"
#line 445 "dchop0.ch"
        _Case293 : 
#line 445 "dchop0.ch"
#line 445 "dchop0.ch"
            ;
#line 445 "dchop0.ch"
#line 445 "dchop0.ch"
            goto _Case294 ;
            
#line 445 "dchop0.ch"
#line 456 "dchop0.ch"
        case cplus::BDECR : 
#line 456 "dchop0.ch"
#line 456 "dchop0.ch"
        _Case294 : 
#line 456 "dchop0.ch"
#line 456 "dchop0.ch"
            ;
#line 456 "dchop0.ch"
#line 456 "dchop0.ch"
            return 14 ;
            
#line 456 "dchop0.ch"
#line 457 "dchop0.ch"
            break ;
            
#line 457 "dchop0.ch"
#line 457 "dchop0.ch"
        case cplus::EXP_ARRAY : 
#line 457 "dchop0.ch"
#line 457 "dchop0.ch"
        _Case295 : 
#line 457 "dchop0.ch"
#line 457 "dchop0.ch"
            ;
#line 457 "dchop0.ch"
#line 457 "dchop0.ch"
            goto _Case296 ;
            
#line 457 "dchop0.ch"
#line 457 "dchop0.ch"
        case cplus::REF : 
#line 457 "dchop0.ch"
#line 457 "dchop0.ch"
        _Case296 : 
#line 457 "dchop0.ch"
#line 457 "dchop0.ch"
            ;
#line 457 "dchop0.ch"
#line 457 "dchop0.ch"
            goto _Case297 ;
            
#line 457 "dchop0.ch"
#line 461 "dchop0.ch"
        case cplus::ARROW : 
#line 461 "dchop0.ch"
#line 461 "dchop0.ch"
        _Case297 : 
#line 461 "dchop0.ch"
#line 461 "dchop0.ch"
            ;
#line 461 "dchop0.ch"
#line 461 "dchop0.ch"
            return 15 ;
            
#line 461 "dchop0.ch"
#line 462 "dchop0.ch"
            break ;
            
#line 462 "dchop0.ch"
#line 464 "dchop0.ch"
        case cplus::EXP : 
#line 464 "dchop0.ch"
#line 464 "dchop0.ch"
        _Case298 : 
#line 464 "dchop0.ch"
#line 464 "dchop0.ch"
            ;
#line 464 "dchop0.ch"
#line 464 "dchop0.ch"
            return 16 ;
            
#line 464 "dchop0.ch"
#line 465 "dchop0.ch"
            break ;
            
#line 465 "dchop0.ch"
#line 467 "dchop0.ch"
        case cplus::EXP_LIST : 
#line 467 "dchop0.ch"
#line 467 "dchop0.ch"
            (son=SonTree(tree, 1));
#line 467 "dchop0.ch"
            
#line 467 "dchop0.ch"
#line 467 "dchop0.ch"
        _Case299 : 
#line 467 "dchop0.ch"
#line 467 "dchop0.ch"
            ;
#line 467 "dchop0.ch"
#line 467 "dchop0.ch"
            if ( BrainyValue(son) && (strcmp(BrainyValue(son), "WriteString") || strcmp(BrainyValue(son), "PrintString")) ) 
#line 467 "dchop0.ch"
#line 468 "dchop0.ch"
                return 17 ;
            
#line 468 "dchop0.ch"
            else 
#line 468 "dchop0.ch"
#line 470 "dchop0.ch"
                return -1 ;
                
#line 470 "dchop0.ch"
            
#line 470 "dchop0.ch"
#line 471 "dchop0.ch"
            break ;
            
#line 471 "dchop0.ch"
#line 472 "dchop0.ch"
        case cplus::VA_ARG : 
#line 472 "dchop0.ch"
#line 472 "dchop0.ch"
        _Case300 : 
#line 472 "dchop0.ch"
#line 472 "dchop0.ch"
            ;
#line 472 "dchop0.ch"
#line 472 "dchop0.ch"
            return -1 ;
            
#line 472 "dchop0.ch"
#line 472 "dchop0.ch"
            goto _Case301 ;
            
#line 472 "dchop0.ch"
#line 472 "dchop0.ch"
        case cplus::BASE_LIST : 
#line 472 "dchop0.ch"
#line 472 "dchop0.ch"
        _Case301 : 
#line 472 "dchop0.ch"
#line 472 "dchop0.ch"
            ;
#line 472 "dchop0.ch"
#line 472 "dchop0.ch"
            goto _Case302 ;
            
#line 472 "dchop0.ch"
#line 474 "dchop0.ch"
        case cplus::NEW : 
#line 474 "dchop0.ch"
#line 474 "dchop0.ch"
        _Case302 : 
#line 474 "dchop0.ch"
#line 474 "dchop0.ch"
            ;
#line 474 "dchop0.ch"
#line 474 "dchop0.ch"
            return 12 ;
            
#line 474 "dchop0.ch"
#line 474 "dchop0.ch"
            goto _Case303 ;
            
#line 474 "dchop0.ch"
#line 474 "dchop0.ch"
        case cplus::ENUM : 
#line 474 "dchop0.ch"
#line 474 "dchop0.ch"
        _Case303 : 
#line 474 "dchop0.ch"
#line 474 "dchop0.ch"
            ;
#line 474 "dchop0.ch"
#line 474 "dchop0.ch"
            goto _Case304 ;
            
#line 474 "dchop0.ch"
#line 477 "dchop0.ch"
        case cplus::TYP_LIST : 
#line 477 "dchop0.ch"
#line 477 "dchop0.ch"
        _Case304 : 
#line 477 "dchop0.ch"
#line 477 "dchop0.ch"
            ;
#line 477 "dchop0.ch"
#line 477 "dchop0.ch"
            return 17 ;
            
#line 477 "dchop0.ch"
#line 478 "dchop0.ch"
            break ;
            
#line 478 "dchop0.ch"
#line 478 "dchop0.ch"
        case cplus::ILONGLONG : 
#line 478 "dchop0.ch"
#line 478 "dchop0.ch"
        _Case305 : 
#line 478 "dchop0.ch"
#line 478 "dchop0.ch"
            ;
#line 478 "dchop0.ch"
#line 478 "dchop0.ch"
            goto _Case306 ;
            
#line 478 "dchop0.ch"
#line 478 "dchop0.ch"
        case cplus::IUN : 
#line 478 "dchop0.ch"
#line 478 "dchop0.ch"
        _Case306 : 
#line 478 "dchop0.ch"
#line 478 "dchop0.ch"
            ;
#line 478 "dchop0.ch"
#line 478 "dchop0.ch"
            goto _Case307 ;
            
#line 478 "dchop0.ch"
#line 478 "dchop0.ch"
        case cplus::IUNLONG : 
#line 478 "dchop0.ch"
#line 478 "dchop0.ch"
        _Case307 : 
#line 478 "dchop0.ch"
#line 478 "dchop0.ch"
            ;
#line 478 "dchop0.ch"
#line 478 "dchop0.ch"
            goto _Case308 ;
            
#line 478 "dchop0.ch"
#line 478 "dchop0.ch"
        case cplus::IUNLONGLONG : 
#line 478 "dchop0.ch"
#line 478 "dchop0.ch"
        _Case308 : 
#line 478 "dchop0.ch"
#line 478 "dchop0.ch"
            ;
#line 478 "dchop0.ch"
#line 478 "dchop0.ch"
            goto _Case309 ;
            
#line 478 "dchop0.ch"
#line 478 "dchop0.ch"
        case cplus::ILONG : 
#line 478 "dchop0.ch"
#line 478 "dchop0.ch"
        _Case309 : 
#line 478 "dchop0.ch"
#line 478 "dchop0.ch"
            ;
#line 478 "dchop0.ch"
#line 478 "dchop0.ch"
            goto _Case310 ;
            
#line 478 "dchop0.ch"
#line 478 "dchop0.ch"
        case cplus::LONG : 
#line 478 "dchop0.ch"
#line 478 "dchop0.ch"
        _Case310 : 
#line 478 "dchop0.ch"
#line 478 "dchop0.ch"
            ;
#line 478 "dchop0.ch"
#line 478 "dchop0.ch"
            goto _Case311 ;
            
#line 478 "dchop0.ch"
#line 478 "dchop0.ch"
        case cplus::FLOAT : 
#line 478 "dchop0.ch"
#line 478 "dchop0.ch"
        _Case311 : 
#line 478 "dchop0.ch"
#line 478 "dchop0.ch"
            ;
#line 478 "dchop0.ch"
#line 478 "dchop0.ch"
            goto _Case312 ;
            
#line 478 "dchop0.ch"
#line 478 "dchop0.ch"
        case cplus::INTEGER : 
#line 478 "dchop0.ch"
#line 478 "dchop0.ch"
        _Case312 : 
#line 478 "dchop0.ch"
#line 478 "dchop0.ch"
            ;
#line 478 "dchop0.ch"
#line 478 "dchop0.ch"
            goto _Case313 ;
            
#line 478 "dchop0.ch"
#line 478 "dchop0.ch"
        case cplus::HEXA : 
#line 478 "dchop0.ch"
#line 478 "dchop0.ch"
        _Case313 : 
#line 478 "dchop0.ch"
#line 478 "dchop0.ch"
            ;
#line 478 "dchop0.ch"
#line 478 "dchop0.ch"
            goto _Case314 ;
            
#line 478 "dchop0.ch"
#line 478 "dchop0.ch"
        case cplus::OCTAL : 
#line 478 "dchop0.ch"
#line 478 "dchop0.ch"
        _Case314 : 
#line 478 "dchop0.ch"
#line 478 "dchop0.ch"
            ;
#line 478 "dchop0.ch"
#line 478 "dchop0.ch"
            goto _Case315 ;
            
#line 478 "dchop0.ch"
#line 478 "dchop0.ch"
        case cplus::STRING : 
#line 478 "dchop0.ch"
#line 478 "dchop0.ch"
        _Case315 : 
#line 478 "dchop0.ch"
#line 478 "dchop0.ch"
            ;
#line 478 "dchop0.ch"
#line 478 "dchop0.ch"
            goto _Case316 ;
            
#line 478 "dchop0.ch"
#line 490 "dchop0.ch"
        case cplus::CHAR : 
#line 490 "dchop0.ch"
#line 490 "dchop0.ch"
        _Case316 : 
#line 490 "dchop0.ch"
#line 490 "dchop0.ch"
            ;
#line 490 "dchop0.ch"
#line 490 "dchop0.ch"
            return 18 ;
            
#line 490 "dchop0.ch"
#line 490 "dchop0.ch"
            goto _Case317 ;
            
#line 490 "dchop0.ch"
#line 491 "dchop0.ch"
        default : 
#line 491 "dchop0.ch"
#line 491 "dchop0.ch"
        _Case317 : 
#line 491 "dchop0.ch"
#line 491 "dchop0.ch"
            ;
#line 491 "dchop0.ch"
#line 491 "dchop0.ch"
            return -1 ;
            
#line 491 "dchop0.ch"
    }
#line 491 "dchop0.ch"
    
#line 491 "dchop0.ch"
#line 493 "dchop0.ch"
    return -1 ;
    
#line 493 "dchop0.ch"
#line 494 "dchop0.ch"
    
#line 494 "dchop0.ch"
#line 494 "dchop0.ch"
}
#line 494 "dchop0.ch"

#line 496 "dchop0.ch"

#line 496 "dchop0.ch"
int DecompCplus::IsTopInstr ( PTREE tree )
#line 496 "dchop0.ch"
{
#line 496 "dchop0.ch"
    register PPTREE _inter ;
#line 496 "dchop0.ch"

#line 496 "dchop0.ch"
#line 496 "dchop0.ch"
    int _nextVal ;
    
#line 496 "dchop0.ch"
#line 498 "dchop0.ch"
    switch ( NumberTree(tree) ) {
#line 498 "dchop0.ch"
#line 499 "dchop0.ch"
        case cplus::DECLARATION : 
#line 499 "dchop0.ch"
#line 499 "dchop0.ch"
        _Case355 : 
#line 499 "dchop0.ch"
#line 499 "dchop0.ch"
            ;
#line 499 "dchop0.ch"
#line 499 "dchop0.ch"
            return 100 ;
            
#line 499 "dchop0.ch"
#line 499 "dchop0.ch"
            goto _Case356 ;
            
#line 499 "dchop0.ch"
#line 500 "dchop0.ch"
        case cplus::TYPEDEF : 
#line 500 "dchop0.ch"
#line 500 "dchop0.ch"
        _Case356 : 
#line 500 "dchop0.ch"
#line 500 "dchop0.ch"
            ;
#line 500 "dchop0.ch"
#line 500 "dchop0.ch"
            return 101 ;
            
#line 500 "dchop0.ch"
#line 500 "dchop0.ch"
            goto _Case357 ;
            
#line 500 "dchop0.ch"
#line 501 "dchop0.ch"
        case cplus::IF : 
#line 501 "dchop0.ch"
#line 501 "dchop0.ch"
        _Case357 : 
#line 501 "dchop0.ch"
#line 501 "dchop0.ch"
            ;
#line 501 "dchop0.ch"
#line 501 "dchop0.ch"
            return 1 ;
            
#line 501 "dchop0.ch"
#line 501 "dchop0.ch"
            goto _Case358 ;
            
#line 501 "dchop0.ch"
#line 502 "dchop0.ch"
        case cplus::WHILE : 
#line 502 "dchop0.ch"
#line 502 "dchop0.ch"
        _Case358 : 
#line 502 "dchop0.ch"
#line 502 "dchop0.ch"
            ;
#line 502 "dchop0.ch"
#line 502 "dchop0.ch"
            return 2 ;
            
#line 502 "dchop0.ch"
#line 502 "dchop0.ch"
            goto _Case359 ;
            
#line 502 "dchop0.ch"
#line 503 "dchop0.ch"
        case cplus::FOR : 
#line 503 "dchop0.ch"
#line 503 "dchop0.ch"
        _Case359 : 
#line 503 "dchop0.ch"
#line 503 "dchop0.ch"
            ;
#line 503 "dchop0.ch"
#line 503 "dchop0.ch"
            return 3 ;
            
#line 503 "dchop0.ch"
#line 503 "dchop0.ch"
            goto _Case360 ;
            
#line 503 "dchop0.ch"
#line 504 "dchop0.ch"
        case cplus::DO : 
#line 504 "dchop0.ch"
#line 504 "dchop0.ch"
        _Case360 : 
#line 504 "dchop0.ch"
#line 504 "dchop0.ch"
            ;
#line 504 "dchop0.ch"
#line 504 "dchop0.ch"
            return 4 ;
            
#line 504 "dchop0.ch"
#line 504 "dchop0.ch"
            goto _Case361 ;
            
#line 504 "dchop0.ch"
#line 505 "dchop0.ch"
        case cplus::BREAK : 
#line 505 "dchop0.ch"
#line 505 "dchop0.ch"
        _Case361 : 
#line 505 "dchop0.ch"
#line 505 "dchop0.ch"
            ;
#line 505 "dchop0.ch"
#line 505 "dchop0.ch"
            return 5 ;
            
#line 505 "dchop0.ch"
#line 505 "dchop0.ch"
            goto _Case362 ;
            
#line 505 "dchop0.ch"
#line 506 "dchop0.ch"
        case cplus::CONTINUE : 
#line 506 "dchop0.ch"
#line 506 "dchop0.ch"
        _Case362 : 
#line 506 "dchop0.ch"
#line 506 "dchop0.ch"
            ;
#line 506 "dchop0.ch"
#line 506 "dchop0.ch"
            return 6 ;
            
#line 506 "dchop0.ch"
#line 506 "dchop0.ch"
            goto _Case363 ;
            
#line 506 "dchop0.ch"
#line 507 "dchop0.ch"
        case cplus::COMPOUND : 
#line 507 "dchop0.ch"
#line 507 "dchop0.ch"
        _Case363 : 
#line 507 "dchop0.ch"
#line 507 "dchop0.ch"
            ;
#line 507 "dchop0.ch"
#line 507 "dchop0.ch"
            return 7 ;
            
#line 507 "dchop0.ch"
#line 507 "dchop0.ch"
            goto _Case364 ;
            
#line 507 "dchop0.ch"
#line 508 "dchop0.ch"
        case cplus::GOTO : 
#line 508 "dchop0.ch"
#line 508 "dchop0.ch"
        _Case364 : 
#line 508 "dchop0.ch"
#line 508 "dchop0.ch"
            ;
#line 508 "dchop0.ch"
#line 508 "dchop0.ch"
            return 8 ;
            
#line 508 "dchop0.ch"
#line 508 "dchop0.ch"
            goto _Case365 ;
            
#line 508 "dchop0.ch"
#line 509 "dchop0.ch"
        case cplus::STAT_VOID : 
#line 509 "dchop0.ch"
#line 509 "dchop0.ch"
        _Case365 : 
#line 509 "dchop0.ch"
#line 509 "dchop0.ch"
            ;
#line 509 "dchop0.ch"
#line 509 "dchop0.ch"
            return 9 ;
            
#line 509 "dchop0.ch"
#line 509 "dchop0.ch"
            goto _Case366 ;
            
#line 509 "dchop0.ch"
#line 510 "dchop0.ch"
        case cplus::LABEL : 
#line 510 "dchop0.ch"
#line 510 "dchop0.ch"
        _Case366 : 
#line 510 "dchop0.ch"
#line 510 "dchop0.ch"
            ;
#line 510 "dchop0.ch"
#line 510 "dchop0.ch"
            return 10 ;
            
#line 510 "dchop0.ch"
#line 510 "dchop0.ch"
            goto _Case367 ;
            
#line 510 "dchop0.ch"
#line 511 "dchop0.ch"
        case cplus::RETURN : 
#line 511 "dchop0.ch"
#line 511 "dchop0.ch"
        _Case367 : 
#line 511 "dchop0.ch"
#line 511 "dchop0.ch"
            ;
#line 511 "dchop0.ch"
#line 511 "dchop0.ch"
            return 11 ;
            
#line 511 "dchop0.ch"
#line 511 "dchop0.ch"
            goto _Case368 ;
            
#line 511 "dchop0.ch"
#line 512 "dchop0.ch"
        case cplus::SWITCH : 
#line 512 "dchop0.ch"
#line 512 "dchop0.ch"
        _Case368 : 
#line 512 "dchop0.ch"
#line 512 "dchop0.ch"
            ;
#line 512 "dchop0.ch"
#line 512 "dchop0.ch"
            return 12 ;
            
#line 512 "dchop0.ch"
#line 512 "dchop0.ch"
            goto _Case369 ;
            
#line 512 "dchop0.ch"
#line 513 "dchop0.ch"
        case cplus::INCLUDE_DIR : 
#line 513 "dchop0.ch"
#line 513 "dchop0.ch"
        _Case369 : 
#line 513 "dchop0.ch"
#line 513 "dchop0.ch"
            ;
#line 513 "dchop0.ch"
#line 513 "dchop0.ch"
            return 14 ;
            
#line 513 "dchop0.ch"
#line 513 "dchop0.ch"
            goto _Case370 ;
            
#line 513 "dchop0.ch"
#line 514 "dchop0.ch"
        case cplus::IF_DIR : 
#line 514 "dchop0.ch"
#line 514 "dchop0.ch"
        _Case370 : 
#line 514 "dchop0.ch"
#line 514 "dchop0.ch"
            ;
#line 514 "dchop0.ch"
#line 514 "dchop0.ch"
            return 15 ;
            
#line 514 "dchop0.ch"
#line 514 "dchop0.ch"
            goto _Case371 ;
            
#line 514 "dchop0.ch"
#line 515 "dchop0.ch"
        case cplus::IFDEF_DIR : 
#line 515 "dchop0.ch"
#line 515 "dchop0.ch"
        _Case371 : 
#line 515 "dchop0.ch"
#line 515 "dchop0.ch"
            ;
#line 515 "dchop0.ch"
#line 515 "dchop0.ch"
            return 16 ;
            
#line 515 "dchop0.ch"
#line 515 "dchop0.ch"
            goto _Case372 ;
            
#line 515 "dchop0.ch"
#line 516 "dchop0.ch"
        case cplus::IFNDEF_DIR : 
#line 516 "dchop0.ch"
#line 516 "dchop0.ch"
        _Case372 : 
#line 516 "dchop0.ch"
#line 516 "dchop0.ch"
            ;
#line 516 "dchop0.ch"
#line 516 "dchop0.ch"
            return 17 ;
            
#line 516 "dchop0.ch"
#line 516 "dchop0.ch"
            goto _Case373 ;
            
#line 516 "dchop0.ch"
#line 517 "dchop0.ch"
        case cplus::NOT_MANAGED : 
#line 517 "dchop0.ch"
#line 517 "dchop0.ch"
        _Case373 : 
#line 517 "dchop0.ch"
#line 517 "dchop0.ch"
            ;
#line 517 "dchop0.ch"
#line 517 "dchop0.ch"
            return 17 ;
            
#line 517 "dchop0.ch"
#line 517 "dchop0.ch"
            goto _Case374 ;
            
#line 517 "dchop0.ch"
#line 518 "dchop0.ch"
        case cplus::NO_PRETTY : 
#line 518 "dchop0.ch"
#line 518 "dchop0.ch"
        _Case374 : 
#line 518 "dchop0.ch"
#line 518 "dchop0.ch"
            ;
#line 518 "dchop0.ch"
#line 518 "dchop0.ch"
            return 17 ;
            
#line 518 "dchop0.ch"
#line 518 "dchop0.ch"
            goto _Case375 ;
            
#line 518 "dchop0.ch"
#line 519 "dchop0.ch"
        case cplus::AFF : 
#line 519 "dchop0.ch"
#line 519 "dchop0.ch"
        _Case375 : 
#line 519 "dchop0.ch"
#line 519 "dchop0.ch"
            ;
#line 519 "dchop0.ch"
#line 519 "dchop0.ch"
            return 19 ;
            
#line 519 "dchop0.ch"
#line 519 "dchop0.ch"
            goto _Case376 ;
            
#line 519 "dchop0.ch"
#line 520 "dchop0.ch"
        case cplus::MUL_AFF : 
#line 520 "dchop0.ch"
#line 520 "dchop0.ch"
        _Case376 : 
#line 520 "dchop0.ch"
#line 520 "dchop0.ch"
            ;
#line 520 "dchop0.ch"
#line 520 "dchop0.ch"
            return 20 ;
            
#line 520 "dchop0.ch"
#line 520 "dchop0.ch"
            goto _Case377 ;
            
#line 520 "dchop0.ch"
#line 521 "dchop0.ch"
        case cplus::DIV_AFF : 
#line 521 "dchop0.ch"
#line 521 "dchop0.ch"
        _Case377 : 
#line 521 "dchop0.ch"
#line 521 "dchop0.ch"
            ;
#line 521 "dchop0.ch"
#line 521 "dchop0.ch"
            return 21 ;
            
#line 521 "dchop0.ch"
#line 521 "dchop0.ch"
            goto _Case378 ;
            
#line 521 "dchop0.ch"
#line 522 "dchop0.ch"
        case cplus::REM_AFF : 
#line 522 "dchop0.ch"
#line 522 "dchop0.ch"
        _Case378 : 
#line 522 "dchop0.ch"
#line 522 "dchop0.ch"
            ;
#line 522 "dchop0.ch"
#line 522 "dchop0.ch"
            return 22 ;
            
#line 522 "dchop0.ch"
#line 522 "dchop0.ch"
            goto _Case379 ;
            
#line 522 "dchop0.ch"
#line 523 "dchop0.ch"
        case cplus::PLU_AFF : 
#line 523 "dchop0.ch"
#line 523 "dchop0.ch"
        _Case379 : 
#line 523 "dchop0.ch"
#line 523 "dchop0.ch"
            ;
#line 523 "dchop0.ch"
#line 523 "dchop0.ch"
            return 23 ;
            
#line 523 "dchop0.ch"
#line 523 "dchop0.ch"
            goto _Case380 ;
            
#line 523 "dchop0.ch"
#line 524 "dchop0.ch"
        case cplus::MIN_AFF : 
#line 524 "dchop0.ch"
#line 524 "dchop0.ch"
        _Case380 : 
#line 524 "dchop0.ch"
#line 524 "dchop0.ch"
            ;
#line 524 "dchop0.ch"
#line 524 "dchop0.ch"
            return 24 ;
            
#line 524 "dchop0.ch"
#line 524 "dchop0.ch"
            goto _Case381 ;
            
#line 524 "dchop0.ch"
#line 525 "dchop0.ch"
        case cplus::LSH_AFF : 
#line 525 "dchop0.ch"
#line 525 "dchop0.ch"
        _Case381 : 
#line 525 "dchop0.ch"
#line 525 "dchop0.ch"
            ;
#line 525 "dchop0.ch"
#line 525 "dchop0.ch"
            return 25 ;
            
#line 525 "dchop0.ch"
#line 525 "dchop0.ch"
            goto _Case382 ;
            
#line 525 "dchop0.ch"
#line 526 "dchop0.ch"
        case cplus::RSH_AFF : 
#line 526 "dchop0.ch"
#line 526 "dchop0.ch"
        _Case382 : 
#line 526 "dchop0.ch"
#line 526 "dchop0.ch"
            ;
#line 526 "dchop0.ch"
#line 526 "dchop0.ch"
            return 26 ;
            
#line 526 "dchop0.ch"
#line 526 "dchop0.ch"
            goto _Case383 ;
            
#line 526 "dchop0.ch"
#line 527 "dchop0.ch"
        case cplus::AND_AFF : 
#line 527 "dchop0.ch"
#line 527 "dchop0.ch"
        _Case383 : 
#line 527 "dchop0.ch"
#line 527 "dchop0.ch"
            ;
#line 527 "dchop0.ch"
#line 527 "dchop0.ch"
            return 27 ;
            
#line 527 "dchop0.ch"
#line 527 "dchop0.ch"
            goto _Case384 ;
            
#line 527 "dchop0.ch"
#line 528 "dchop0.ch"
        case cplus::OR_AFF : 
#line 528 "dchop0.ch"
#line 528 "dchop0.ch"
        _Case384 : 
#line 528 "dchop0.ch"
#line 528 "dchop0.ch"
            ;
#line 528 "dchop0.ch"
#line 528 "dchop0.ch"
            return 28 ;
            
#line 528 "dchop0.ch"
#line 528 "dchop0.ch"
            goto _Case385 ;
            
#line 528 "dchop0.ch"
#line 529 "dchop0.ch"
        case cplus::XOR_AFF : 
#line 529 "dchop0.ch"
#line 529 "dchop0.ch"
        _Case385 : 
#line 529 "dchop0.ch"
#line 529 "dchop0.ch"
            ;
#line 529 "dchop0.ch"
#line 529 "dchop0.ch"
            return 29 ;
            
#line 529 "dchop0.ch"
#line 529 "dchop0.ch"
            goto _Case386 ;
            
#line 529 "dchop0.ch"
#line 530 "dchop0.ch"
        case cplus::COND_AFF : 
#line 530 "dchop0.ch"
#line 530 "dchop0.ch"
        _Case386 : 
#line 530 "dchop0.ch"
#line 530 "dchop0.ch"
            ;
#line 530 "dchop0.ch"
#line 530 "dchop0.ch"
            return 30 ;
            
#line 530 "dchop0.ch"
#line 530 "dchop0.ch"
            goto _Case387 ;
            
#line 530 "dchop0.ch"
#line 531 "dchop0.ch"
        case cplus::EXCEPTION_ANSI : 
#line 531 "dchop0.ch"
#line 531 "dchop0.ch"
        _Case387 : 
#line 531 "dchop0.ch"
#line 531 "dchop0.ch"
            ;
#line 531 "dchop0.ch"
#line 531 "dchop0.ch"
            return 31 ;
            
#line 531 "dchop0.ch"
#line 531 "dchop0.ch"
            goto _Case388 ;
            
#line 531 "dchop0.ch"
#line 532 "dchop0.ch"
        case cplus::THROW_ANSI : 
#line 532 "dchop0.ch"
#line 532 "dchop0.ch"
        _Case388 : 
#line 532 "dchop0.ch"
#line 532 "dchop0.ch"
            ;
#line 532 "dchop0.ch"
#line 532 "dchop0.ch"
            return 32 ;
            
#line 532 "dchop0.ch"
#line 532 "dchop0.ch"
            goto _Case389 ;
            
#line 532 "dchop0.ch"
#line 533 "dchop0.ch"
        case cplus::CATCH_ANSI : 
#line 533 "dchop0.ch"
#line 533 "dchop0.ch"
        _Case389 : 
#line 533 "dchop0.ch"
#line 533 "dchop0.ch"
            ;
#line 533 "dchop0.ch"
#line 533 "dchop0.ch"
            return 33 ;
            
#line 533 "dchop0.ch"
#line 533 "dchop0.ch"
            goto _Case390 ;
            
#line 533 "dchop0.ch"
#line 534 "dchop0.ch"
        case cplus::NONE : 
#line 534 "dchop0.ch"
#line 534 "dchop0.ch"
        _Case390 : 
#line 534 "dchop0.ch"
#line 534 "dchop0.ch"
            ;
#line 534 "dchop0.ch"
#line 534 "dchop0.ch"
            return 34 ;
            
#line 534 "dchop0.ch"
#line 534 "dchop0.ch"
            goto _Case391 ;
            
#line 534 "dchop0.ch"
#line 538 "dchop0.ch"
        default : 
#line 538 "dchop0.ch"
#line 538 "dchop0.ch"
        _Case391 : 
#line 538 "dchop0.ch"
#line 538 "dchop0.ch"
            ;
#line 538 "dchop0.ch"
#line 538 "dchop0.ch"
            return -1 ;
            
#line 538 "dchop0.ch"
    }
#line 538 "dchop0.ch"
    
#line 538 "dchop0.ch"
#line 540 "dchop0.ch"
    SepBefore();
#line 540 "dchop0.ch"
    
#line 540 "dchop0.ch"
#line 540 "dchop0.ch"
    PrintString(";");
#line 540 "dchop0.ch"
#line 541 "dchop0.ch"
terminal : 
#line 541 "dchop0.ch"
#line 542 "dchop0.ch"
    LNewLine(1);
#line 542 "dchop0.ch"
    
#line 542 "dchop0.ch"
#line 543 "dchop0.ch"
    
#line 543 "dchop0.ch"
#line 543 "dchop0.ch"
}
#line 543 "dchop0.ch"

#line 545 "dchop0.ch"

#line 545 "dchop0.ch"
void DecompCplus::clean_tree ( PTREE tree )
#line 545 "dchop0.ch"
{
#line 545 "dchop0.ch"
    register PPTREE _inter ;
#line 545 "dchop0.ch"

#line 545 "dchop0.ch"
#line 545 "dchop0.ch"
    int _retVal [2];
    
#line 545 "dchop0.ch"
#line 545 "dchop0.ch"
    PPTREE  _storeVal [2];
    
#line 545 "dchop0.ch"
#line 545 "dchop0.ch"
    int _nextVal ;
    
#line 545 "dchop0.ch"
#line 547 "dchop0.ch"
    PTREE   father ;
#line 547 "dchop0.ch"
    
#line 547 "dchop0.ch"
#line 548 "dchop0.ch"
    PPTREE  _for_elem ;
    
#line 548 "dchop0.ch"
#line 549 "dchop0.ch"
    ItPtree it (tree) ;
    
#line 549 "dchop0.ch"
#line 550 "dchop0.ch"
    PTREE   cond ;
#line 550 "dchop0.ch"
    
#line 550 "dchop0.ch"
#line 551 "dchop0.ch"
    PTREE   stat1 ;
#line 551 "dchop0.ch"
    
#line 551 "dchop0.ch"
#line 552 "dchop0.ch"
    PTREE   stat2 ;
#line 552 "dchop0.ch"
    
#line 552 "dchop0.ch"
#line 554 "dchop0.ch"
    while ( (_for_elem = it++) ) {
#line 554 "dchop0.ch"
#line 555 "dchop0.ch"
                                        switch ( NumberTree(for_elem) ) {
#line 555 "dchop0.ch"
#line 557 "dchop0.ch"
                                            case cplus::STAT_VOID : 
#line 557 "dchop0.ch"
#line 557 "dchop0.ch"
                                            _Case412 : 
#line 557 "dchop0.ch"
#line 557 "dchop0.ch"
                                                ;
#line 557 "dchop0.ch"
#line 557 "dchop0.ch"
                                                {
#line 557 "dchop0.ch"
#line 558 "dchop0.ch"
                                                    PTREE   father = (PTREE)0 ;
#line 558 "dchop0.ch"
                                                    
#line 558 "dchop0.ch"
#line 559 "dchop0.ch"
                                                    PTREE   son ;
#line 559 "dchop0.ch"
                                                    
#line 559 "dchop0.ch"
#line 558 "dchop0.ch"
                                                    (father=FatherTree(for_elem));
#line 558 "dchop0.ch"
                                                    
#line 558 "dchop0.ch"
#line 560 "dchop0.ch"
                                                    if ( ((_inter = (PPTREE)father,1) && 
#line 560 "dchop0.ch"
                                                            (NumberTree(_inter) == LIST) &&
#line 560 "dchop0.ch"
                                                            1) ) {
#line 560 "dchop0.ch"
#line 561 "dchop0.ch"
                                                                    (son=sontree(father, 2));
#line 561 "dchop0.ch"
                                                                    
#line 561 "dchop0.ch"
#line 562 "dchop0.ch"
                                                                    if ( (!son) ) {
#line 562 "dchop0.ch"
#line 563 "dchop0.ch"
                                                                                        (father=FatherTree(father));
#line 563 "dchop0.ch"
                                                                                        
#line 563 "dchop0.ch"
#line 564 "dchop0.ch"
                                                                                        if ( ((_inter = (PPTREE)father,1) && 
#line 564 "dchop0.ch"
                                                                                                (NumberTree(_inter) == LIST) &&
#line 564 "dchop0.ch"
                                                                                                1) ) {
#line 564 "dchop0.ch"
#line 565 "dchop0.ch"
                                                                                                        {
#line 565 "dchop0.ch"
                                                                                                            PPTREE _ptTree0= (PPTREE) 0,_sonTree0= (PPTREE) 0 ;
#line 565 "dchop0.ch"
                                                                                                            _ptTree0 = (PPTREE) 0;
#line 565 "dchop0.ch"
                                                                                                            ReplaceTree(father, 2, _ptTree0);
#line 565 "dchop0.ch"
                                                                                                        }
#line 565 "dchop0.ch"
                                                                                                        
#line 565 "dchop0.ch"
#line 566 "dchop0.ch"
                                                                                                        it.Current(father);
#line 566 "dchop0.ch"
#line 567 "dchop0.ch"
                                                                                                        
#line 567 "dchop0.ch"
#line 567 "dchop0.ch"
                                                                                                     }
#line 567 "dchop0.ch"
#line 568 "dchop0.ch"
                                                                                        
#line 568 "dchop0.ch"
#line 568 "dchop0.ch"
                                                                                    } else 
#line 568 "dchop0.ch"
                                                                    {
#line 568 "dchop0.ch"
#line 569 "dchop0.ch"
                                                                        {
#line 569 "dchop0.ch"
                                                                            PPTREE _ptTree0= (PPTREE) 0,_sonTree0= (PPTREE) 0 ;
#line 569 "dchop0.ch"
                                                                            _ptTree0 = StoreRef(sontree(son, 1));
#line 569 "dchop0.ch"
                                                                            ReplaceTree(father, 1, _ptTree0);
#line 569 "dchop0.ch"
                                                                            _ptTree0 = StoreRef(sontree(son, 2));
#line 569 "dchop0.ch"
                                                                            ReplaceTree(father, 2, _ptTree0);
#line 569 "dchop0.ch"
                                                                        }
#line 569 "dchop0.ch"
                                                                        
#line 569 "dchop0.ch"
#line 570 "dchop0.ch"
                                                                        it.Current(father);
#line 570 "dchop0.ch"
#line 571 "dchop0.ch"
                                                                        
#line 571 "dchop0.ch"
#line 571 "dchop0.ch"
                                                                    }
                                                                    
#line 571 "dchop0.ch"
#line 572 "dchop0.ch"
                                                                    
#line 572 "dchop0.ch"
#line 572 "dchop0.ch"
                                                                 }
#line 572 "dchop0.ch"
#line 573 "dchop0.ch"
                                                    break ;
                                                    
#line 573 "dchop0.ch"
#line 574 "dchop0.ch"
                                                    
#line 574 "dchop0.ch"
#line 574 "dchop0.ch"
                                                }
                                                
#line 574 "dchop0.ch"
#line 574 "dchop0.ch"
                                                goto _Case413 ;
                                                
#line 574 "dchop0.ch"
#line 576 "dchop0.ch"
                                            case cplus::AND : 
#line 576 "dchop0.ch"
#line 576 "dchop0.ch"
                                            _Case413 : 
#line 576 "dchop0.ch"
#line 576 "dchop0.ch"
                                                ;
#line 576 "dchop0.ch"
#line 576 "dchop0.ch"
                                                {
#line 576 "dchop0.ch"
#line 577 "dchop0.ch"
                                                    PTREE   father = (PTREE)0 ;
#line 577 "dchop0.ch"
                                                    
#line 577 "dchop0.ch"
#line 578 "dchop0.ch"
                                                    int rank ;
                                                    
#line 578 "dchop0.ch"
#line 579 "dchop0.ch"
                                                    PTREE   x, y ;
#line 579 "dchop0.ch"
                                                    
#line 579 "dchop0.ch"
#line 580 "dchop0.ch"
                                                    int modified = 0 ;
                                                    
#line 580 "dchop0.ch"
#line 577 "dchop0.ch"
                                                    (father=FatherTree(for_elem));
#line 577 "dchop0.ch"
                                                    
#line 577 "dchop0.ch"
#line 581 "dchop0.ch"
                                                    if ( ((_inter = (PPTREE)for_elem,1) && 
#line 581 "dchop0.ch"
                                                            (NumberTree(_inter) == cplus::AND) &&
#line 581 "dchop0.ch"
                                                            (_retVal[1]=((_storeVal[1]=_inter,_inter=SonTree(_inter,1),1) &&
#line 581 "dchop0.ch"
                                                                (NumberTree(_inter) == cplus::INTEGER) &&
#line 581 "dchop0.ch"
                                                                ((x=SonTree(_inter,1)),1) &&
#line 581 "dchop0.ch"
                                                                1),
#line 581 "dchop0.ch"
                                                                (_inter=_storeVal[1],1),_retVal[1]) &&
#line 581 "dchop0.ch"
                                                            1) || ((_inter = (PPTREE)for_elem,1) && 
#line 581 "dchop0.ch"
                                                                        (NumberTree(_inter) == cplus::AND) &&
#line 581 "dchop0.ch"
                                                                        (_retVal[1]=((_storeVal[1]=_inter,_inter=SonTree(_inter,2),1) &&
#line 581 "dchop0.ch"
                                                                            (NumberTree(_inter) == cplus::INTEGER) &&
#line 581 "dchop0.ch"
                                                                            ((y=SonTree(_inter,1)),1) &&
#line 581 "dchop0.ch"
                                                                            1),
#line 581 "dchop0.ch"
                                                                            (_inter=_storeVal[1],1),_retVal[1]) &&
#line 581 "dchop0.ch"
                                                                        1) ) {
#line 581 "dchop0.ch"
#line 582 "dchop0.ch"
                                                                                rank = ranktree(for_elem);
#line 582 "dchop0.ch"
#line 583 "dchop0.ch"
                                                                                if ( x && !strcmp(BrainyValue(x), "1") ) {
#line 583 "dchop0.ch"
#line 584 "dchop0.ch"
replacetree(father, rank, sontree(for_elem, 2));
#line 584 "dchop0.ch"
#line 585 "dchop0.ch"
modified = 1 ;
#line 585 "dchop0.ch"
#line 586 "dchop0.ch"

#line 586 "dchop0.ch"
#line 586 "dchop0.ch"
                                                                                                                              }
#line 586 "dchop0.ch"
#line 587 "dchop0.ch"
                                                                                if ( y && !strcmp(BrainyValue(y), "1") ) {
#line 587 "dchop0.ch"
#line 588 "dchop0.ch"
replacetree(father, rank, sontree(for_elem, 1));
#line 588 "dchop0.ch"
#line 589 "dchop0.ch"
modified = 1 ;
#line 589 "dchop0.ch"
#line 590 "dchop0.ch"

#line 590 "dchop0.ch"
#line 590 "dchop0.ch"
                                                                                                                              }
#line 590 "dchop0.ch"
#line 591 "dchop0.ch"
                                                                                if ( modified ) 
#line 591 "dchop0.ch"
#line 592 "dchop0.ch"
                                                                                    it.Current(father);
#line 592 "dchop0.ch"
#line 593 "dchop0.ch"
                                                                                
#line 593 "dchop0.ch"
#line 593 "dchop0.ch"
                                                                             }
#line 593 "dchop0.ch"
#line 594 "dchop0.ch"
                                                    break ;
                                                    
#line 594 "dchop0.ch"
#line 595 "dchop0.ch"
                                                    
#line 595 "dchop0.ch"
#line 595 "dchop0.ch"
                                                }
                                                
#line 595 "dchop0.ch"
#line 595 "dchop0.ch"
                                                goto _Case414 ;
                                                
#line 595 "dchop0.ch"
#line 597 "dchop0.ch"
                                            case cplus::NOT : 
#line 597 "dchop0.ch"
#line 597 "dchop0.ch"
                                            _Case414 : 
#line 597 "dchop0.ch"
#line 597 "dchop0.ch"
                                                ;
#line 597 "dchop0.ch"
#line 597 "dchop0.ch"
                                                {
#line 597 "dchop0.ch"
#line 598 "dchop0.ch"
                                                    PTREE   father = (PTREE)0 ;
#line 598 "dchop0.ch"
                                                    
#line 598 "dchop0.ch"
#line 599 "dchop0.ch"
                                                    PTREE   exp ;
#line 599 "dchop0.ch"
                                                    
#line 599 "dchop0.ch"
#line 598 "dchop0.ch"
                                                    (father=FatherTree(for_elem));
#line 598 "dchop0.ch"
                                                    
#line 598 "dchop0.ch"
#line 600 "dchop0.ch"
                                                    if ( ((_inter = (PPTREE)for_elem,1) && 
#line 600 "dchop0.ch"
                                                            (NumberTree(_inter) == cplus::NOT) &&
#line 600 "dchop0.ch"
                                                            (_retVal[1]=((_storeVal[1]=_inter,_inter=SonTree(_inter,1),1) &&
#line 600 "dchop0.ch"
                                                                (NumberTree(_inter) == cplus::NOT) &&
#line 600 "dchop0.ch"
                                                                ((exp=SonTree(_inter,1)),1) &&
#line 600 "dchop0.ch"
                                                                1),
#line 600 "dchop0.ch"
                                                                (_inter=_storeVal[1],1),_retVal[1]) &&
#line 600 "dchop0.ch"
                                                            1) ) {
#line 600 "dchop0.ch"
#line 601 "dchop0.ch"
                                                                    {
#line 601 "dchop0.ch"
                                                                        PPTREE _ptTree0= (PPTREE) 0,_sonTree0= (PPTREE) 0 ;
#line 601 "dchop0.ch"
                                                                        if (_ptTree0= fathertree(for_elem)) {
#line 601 "dchop0.ch"
                                                                            int rank = ranktree(for_elem);
#line 601 "dchop0.ch"
                                                                            ReplaceTree(_ptTree0,rank,exp);
#line 601 "dchop0.ch"
                                                                        }
#line 601 "dchop0.ch"
                                                                    }
#line 601 "dchop0.ch"
                                                                    
#line 601 "dchop0.ch"
#line 602 "dchop0.ch"
                                                                    if ( father ) 
#line 602 "dchop0.ch"
#line 603 "dchop0.ch"
                                                                        it.Current(father);
#line 603 "dchop0.ch"
                                                                    else 
#line 603 "dchop0.ch"
#line 605 "dchop0.ch"
                                                                        it.Current(exp);
#line 605 "dchop0.ch"
                                                                    
#line 605 "dchop0.ch"
#line 606 "dchop0.ch"
                                                                    
#line 606 "dchop0.ch"
#line 606 "dchop0.ch"
                                                                 }
#line 606 "dchop0.ch"
#line 607 "dchop0.ch"
                                                    break ;
                                                    
#line 607 "dchop0.ch"
#line 608 "dchop0.ch"
                                                    
#line 608 "dchop0.ch"
#line 608 "dchop0.ch"
                                                }
                                                
#line 608 "dchop0.ch"
#line 608 "dchop0.ch"
                                                goto _Case415 ;
                                                
#line 608 "dchop0.ch"
#line 610 "dchop0.ch"
                                            case cplus::EXP : 
#line 610 "dchop0.ch"
#line 610 "dchop0.ch"
                                            _Case415 : 
#line 610 "dchop0.ch"
#line 610 "dchop0.ch"
                                                ;
#line 610 "dchop0.ch"
#line 610 "dchop0.ch"
                                                {
#line 610 "dchop0.ch"
#line 611 "dchop0.ch"
                                                    PTREE   father = (PTREE)0 ;
#line 611 "dchop0.ch"
                                                    
#line 611 "dchop0.ch"
#line 611 "dchop0.ch"
                                                    (father=FatherTree(for_elem));
#line 611 "dchop0.ch"
                                                    
#line 611 "dchop0.ch"
#line 612 "dchop0.ch"
                                                    if ( ((_inter = (PPTREE)father,1) && 
#line 612 "dchop0.ch"
                                                            (NumberTree(_inter) == cplus::CAST) &&
#line 612 "dchop0.ch"
                                                            1) || ( _inter = 
#line 612 "dchop0.ch"
                                                                    FatherTree(father),((_inter = (PPTREE)_inter,1) && 
#line 612 "dchop0.ch"
                                                                                            (NumberTree(_inter) == cplus::PARAM_TYPE) &&
#line 612 "dchop0.ch"
                                                                                            1)) || ((_inter = (PPTREE)father,1) && 
#line 612 "dchop0.ch"
                                                                                                        (NumberTree(_inter) == LIST) &&
#line 612 "dchop0.ch"
                                                                                                        1) ) 
#line 612 "dchop0.ch"
#line 613 "dchop0.ch"
                                                        break ;
                                                    
#line 613 "dchop0.ch"
#line 614 "dchop0.ch"
                                                    PTREE   son = (PTREE)0 ;
#line 614 "dchop0.ch"
                                                    
#line 614 "dchop0.ch"
#line 614 "dchop0.ch"
                                                    (son=for_elem);
#line 614 "dchop0.ch"
                                                    
#line 614 "dchop0.ch"
#line 615 "dchop0.ch"
                                                    (son=son [1]);
#line 615 "dchop0.ch"
                                                    
#line 615 "dchop0.ch"
#line 616 "dchop0.ch"
                                                    if ( IsAff(son) ) 
#line 616 "dchop0.ch"
#line 617 "dchop0.ch"
                                                        break ;
                                                    
#line 617 "dchop0.ch"
#line 618 "dchop0.ch"
                                                    if ( OpPriority(father) < OpPriority(son) ) {
#line 618 "dchop0.ch"
#line 619 "dchop0.ch"
                                                                                                        PTREE   keep = (PTREE)0 ;
#line 619 "dchop0.ch"
                                                                                                        
#line 619 "dchop0.ch"
#line 619 "dchop0.ch"
                                                                                                        (keep=father);
#line 619 "dchop0.ch"
                                                                                                        
#line 619 "dchop0.ch"
#line 620 "dchop0.ch"
                                                                                                        replacetree(father, ranktree(for_elem), son);
#line 620 "dchop0.ch"
#line 621 "dchop0.ch"
                                                                                                        it.Current(keep);
#line 621 "dchop0.ch"
#line 622 "dchop0.ch"
                                                                                                        
#line 622 "dchop0.ch"
#line 622 "dchop0.ch"
                                                                                                    } else 
#line 622 "dchop0.ch"
                                                    if ( OpPriority(father) == OpPriority(son) ) {
#line 622 "dchop0.ch"
#line 623 "dchop0.ch"
                                                                                                        PTREE   keep = (PTREE)0 ;
#line 623 "dchop0.ch"
                                                                                                        
#line 623 "dchop0.ch"
#line 623 "dchop0.ch"
                                                                                                        (keep=father);
#line 623 "dchop0.ch"
                                                                                                        
#line 623 "dchop0.ch"
#line 624 "dchop0.ch"
                                                                                                        switch ( treearity(keep) ) {
#line 624 "dchop0.ch"
#line 625 "dchop0.ch"
                                                                                                            case 2 : 
#line 625 "dchop0.ch"
#line 626 "dchop0.ch"
                                                                                                                if ( ranktree(for_elem) == 1 && OpAssociativity(keep) == LEFT_TO_RIGHT || ranktree(for_elem) == 2 && OpAssociativity(keep) == RIGHT_TO_LEFT ) {
#line 626 "dchop0.ch"
#line 628 "dchop0.ch"
replacetree(keep, ranktree(for_elem), sontree(for_elem, 1));
#line 628 "dchop0.ch"
#line 629 "dchop0.ch"
it.Current(keep);
#line 629 "dchop0.ch"
#line 630 "dchop0.ch"

#line 630 "dchop0.ch"
#line 630 "dchop0.ch"
                                                                                                                                                                                                                                                                          }
#line 630 "dchop0.ch"
#line 631 "dchop0.ch"
                                                                                                                break ;
                                                                                                                
#line 631 "dchop0.ch"
#line 632 "dchop0.ch"
                                                                                                            case 1 : 
#line 632 "dchop0.ch"
#line 633 "dchop0.ch"
                                                                                                                if ( OpAssociativity(keep) == RIGHT_TO_LEFT ) {
#line 633 "dchop0.ch"
#line 634 "dchop0.ch"
if ( !(((_inter = (PPTREE)keep,1) && 
#line 634 "dchop0.ch"
            (NumberTree(_inter) == cplus::AINCR) &&
#line 634 "dchop0.ch"
            1)) && !(((_inter = (PPTREE)keep,1) && 
#line 634 "dchop0.ch"
                        (NumberTree(_inter) == cplus::ADECR) &&
#line 634 "dchop0.ch"
                        1)) ) {
#line 634 "dchop0.ch"
#line 635 "dchop0.ch"
                                replacetree(keep, 1, sontree(for_elem, 1));
#line 635 "dchop0.ch"
#line 636 "dchop0.ch"
                                it.Current(keep);
#line 636 "dchop0.ch"
#line 637 "dchop0.ch"
                                
#line 637 "dchop0.ch"
#line 637 "dchop0.ch"
                              }
#line 637 "dchop0.ch"
#line 638 "dchop0.ch"

#line 638 "dchop0.ch"
#line 638 "dchop0.ch"
                                                                                                                                                                 }
#line 638 "dchop0.ch"
#line 639 "dchop0.ch"
                                                                                                                break ;
                                                                                                                
#line 639 "dchop0.ch"
#line 640 "dchop0.ch"
                                                                                                            default : 
#line 640 "dchop0.ch"
#line 640 "dchop0.ch"
                                                                                                                break ;
                                                                                                                
#line 640 "dchop0.ch"
                                                                                                        }
#line 640 "dchop0.ch"
                                                                                                        
#line 640 "dchop0.ch"
#line 642 "dchop0.ch"
                                                                                                        
#line 642 "dchop0.ch"
#line 642 "dchop0.ch"
                                                                                                     }
#line 642 "dchop0.ch"
#line 643 "dchop0.ch"
                                                    break ;
                                                    
#line 643 "dchop0.ch"
#line 644 "dchop0.ch"
                                                    
#line 644 "dchop0.ch"
#line 644 "dchop0.ch"
                                                }
                                                
#line 644 "dchop0.ch"
#line 644 "dchop0.ch"
                                                goto _Case416 ;
                                                
#line 644 "dchop0.ch"
#line 644 "dchop0.ch"
                                            case cplus::AFF : 
#line 644 "dchop0.ch"
#line 644 "dchop0.ch"
                                            _Case416 : 
#line 644 "dchop0.ch"
#line 644 "dchop0.ch"
                                                ;
#line 644 "dchop0.ch"
#line 644 "dchop0.ch"
                                                goto _Case417 ;
                                                
#line 644 "dchop0.ch"
#line 644 "dchop0.ch"
                                            case cplus::MUL_AFF : 
#line 644 "dchop0.ch"
#line 644 "dchop0.ch"
                                            _Case417 : 
#line 644 "dchop0.ch"
#line 644 "dchop0.ch"
                                                ;
#line 644 "dchop0.ch"
#line 644 "dchop0.ch"
                                                goto _Case418 ;
                                                
#line 644 "dchop0.ch"
#line 644 "dchop0.ch"
                                            case cplus::DIV_AFF : 
#line 644 "dchop0.ch"
#line 644 "dchop0.ch"
                                            _Case418 : 
#line 644 "dchop0.ch"
#line 644 "dchop0.ch"
                                                ;
#line 644 "dchop0.ch"
#line 644 "dchop0.ch"
                                                goto _Case419 ;
                                                
#line 644 "dchop0.ch"
#line 644 "dchop0.ch"
                                            case cplus::REM_AFF : 
#line 644 "dchop0.ch"
#line 644 "dchop0.ch"
                                            _Case419 : 
#line 644 "dchop0.ch"
#line 644 "dchop0.ch"
                                                ;
#line 644 "dchop0.ch"
#line 644 "dchop0.ch"
                                                goto _Case420 ;
                                                
#line 644 "dchop0.ch"
#line 644 "dchop0.ch"
                                            case cplus::MIN_AFF : 
#line 644 "dchop0.ch"
#line 644 "dchop0.ch"
                                            _Case420 : 
#line 644 "dchop0.ch"
#line 644 "dchop0.ch"
                                                ;
#line 644 "dchop0.ch"
#line 644 "dchop0.ch"
                                                goto _Case421 ;
                                                
#line 644 "dchop0.ch"
#line 644 "dchop0.ch"
                                            case cplus::PLU_AFF : 
#line 644 "dchop0.ch"
#line 644 "dchop0.ch"
                                            _Case421 : 
#line 644 "dchop0.ch"
#line 644 "dchop0.ch"
                                                ;
#line 644 "dchop0.ch"
#line 644 "dchop0.ch"
                                                goto _Case422 ;
                                                
#line 644 "dchop0.ch"
#line 644 "dchop0.ch"
                                            case cplus::LSH_AFF : 
#line 644 "dchop0.ch"
#line 644 "dchop0.ch"
                                            _Case422 : 
#line 644 "dchop0.ch"
#line 644 "dchop0.ch"
                                                ;
#line 644 "dchop0.ch"
#line 644 "dchop0.ch"
                                                goto _Case423 ;
                                                
#line 644 "dchop0.ch"
#line 644 "dchop0.ch"
                                            case cplus::RSH_AFF : 
#line 644 "dchop0.ch"
#line 644 "dchop0.ch"
                                            _Case423 : 
#line 644 "dchop0.ch"
#line 644 "dchop0.ch"
                                                ;
#line 644 "dchop0.ch"
#line 644 "dchop0.ch"
                                                goto _Case424 ;
                                                
#line 644 "dchop0.ch"
#line 644 "dchop0.ch"
                                            case cplus::AND_AFF : 
#line 644 "dchop0.ch"
#line 644 "dchop0.ch"
                                            _Case424 : 
#line 644 "dchop0.ch"
#line 644 "dchop0.ch"
                                                ;
#line 644 "dchop0.ch"
#line 644 "dchop0.ch"
                                                goto _Case425 ;
                                                
#line 644 "dchop0.ch"
#line 644 "dchop0.ch"
                                            case cplus::OR_AFF : 
#line 644 "dchop0.ch"
#line 644 "dchop0.ch"
                                            _Case425 : 
#line 644 "dchop0.ch"
#line 644 "dchop0.ch"
                                                ;
#line 644 "dchop0.ch"
#line 644 "dchop0.ch"
                                                goto _Case426 ;
                                                
#line 644 "dchop0.ch"
#line 656 "dchop0.ch"
                                            case cplus::XOR_AFF : 
#line 656 "dchop0.ch"
#line 656 "dchop0.ch"
                                            _Case426 : 
#line 656 "dchop0.ch"
#line 656 "dchop0.ch"
                                                ;
#line 656 "dchop0.ch"
#line 656 "dchop0.ch"
                                                {
#line 656 "dchop0.ch"
#line 657 "dchop0.ch"
                                                    PTREE   elem = (PTREE)0 ;
#line 657 "dchop0.ch"
                                                    
#line 657 "dchop0.ch"
#line 658 "dchop0.ch"
                                                    PTREE   father = (PTREE)0 ;
#line 658 "dchop0.ch"
                                                    
#line 658 "dchop0.ch"
#line 659 "dchop0.ch"
                                                    unsigned int   rank ;
                                                    
#line 659 "dchop0.ch"
#line 657 "dchop0.ch"
                                                    (elem=for_elem);
#line 657 "dchop0.ch"
                                                    
#line 657 "dchop0.ch"
#line 658 "dchop0.ch"
                                                    (father=for_elem);
#line 658 "dchop0.ch"
                                                    
#line 658 "dchop0.ch"
#line 660 "dchop0.ch"
                                                    rank = ranktree(elem);
#line 660 "dchop0.ch"
#line 661 "dchop0.ch"
                                                    (father=FatherTree(elem));
#line 661 "dchop0.ch"
                                                    
#line 661 "dchop0.ch"
#line 662 "dchop0.ch"
                                                    if ( ((_inter = (PPTREE)father,1) && 
#line 662 "dchop0.ch"
                                                            (NumberTree(_inter) == cplus::EXP) &&
#line 662 "dchop0.ch"
                                                            1) ) 
#line 662 "dchop0.ch"
#line 663 "dchop0.ch"
                                                        break ;
                                                    
#line 663 "dchop0.ch"
#line 664 "dchop0.ch"
                                                    do {
#line 664 "dchop0.ch"
#line 665 "dchop0.ch"
                                                        bool    tested = false ;
                                                        
#line 665 "dchop0.ch"
#line 666 "dchop0.ch"
                                                        switch ( NumberTree(father) ) {
#line 666 "dchop0.ch"
#line 666 "dchop0.ch"
                                                            case cplus::WHILE : 
#line 666 "dchop0.ch"
#line 666 "dchop0.ch"
                                                            _Case427 : 
#line 666 "dchop0.ch"
#line 666 "dchop0.ch"
                                                                ;
#line 666 "dchop0.ch"
#line 666 "dchop0.ch"
                                                                goto _Case428 ;
                                                                
#line 666 "dchop0.ch"
#line 669 "dchop0.ch"
                                                            case cplus::IF : 
#line 669 "dchop0.ch"
#line 669 "dchop0.ch"
                                                            _Case428 : 
#line 669 "dchop0.ch"
#line 669 "dchop0.ch"
                                                                ;
#line 669 "dchop0.ch"
#line 669 "dchop0.ch"
                                                                {
#line 669 "dchop0.ch"
#line 670 "dchop0.ch"
                                                                    if ( rank != 1 ) {
#line 670 "dchop0.ch"
#line 671 "dchop0.ch"
                                                                                        father = (PPTREE) 0 ;
#line 671 "dchop0.ch"
                                                                                        
#line 671 "dchop0.ch"
#line 672 "dchop0.ch"
                                                                                        break ;
                                                                                        
#line 672 "dchop0.ch"
#line 673 "dchop0.ch"
                                                                                        
#line 673 "dchop0.ch"
#line 673 "dchop0.ch"
                                                                                       }
#line 673 "dchop0.ch"
#line 674 "dchop0.ch"
                                                                    tested = true ;
#line 674 "dchop0.ch"
#line 675 "dchop0.ch"
                                                                    
#line 675 "dchop0.ch"
#line 675 "dchop0.ch"
                                                                }
                                                                
#line 675 "dchop0.ch"
#line 675 "dchop0.ch"
                                                                goto _Case429 ;
                                                                
#line 675 "dchop0.ch"
#line 675 "dchop0.ch"
                                                            case cplus::DO : 
#line 675 "dchop0.ch"
#line 675 "dchop0.ch"
                                                            _Case429 : 
#line 675 "dchop0.ch"
#line 675 "dchop0.ch"
                                                                ;
#line 675 "dchop0.ch"
#line 675 "dchop0.ch"
                                                                goto _Case430 ;
                                                                
#line 675 "dchop0.ch"
#line 678 "dchop0.ch"
                                                            case cplus::FOR : 
#line 678 "dchop0.ch"
#line 678 "dchop0.ch"
                                                            _Case430 : 
#line 678 "dchop0.ch"
#line 678 "dchop0.ch"
                                                                ;
#line 678 "dchop0.ch"
#line 678 "dchop0.ch"
                                                                {
#line 678 "dchop0.ch"
#line 679 "dchop0.ch"
                                                                    if ( !tested && rank != 2 ) {
#line 679 "dchop0.ch"
#line 680 "dchop0.ch"
                                                                                                        father = (PPTREE) 0 ;
#line 680 "dchop0.ch"
                                                                                                        
#line 680 "dchop0.ch"
#line 681 "dchop0.ch"
                                                                                                        break ;
                                                                                                        
#line 681 "dchop0.ch"
#line 682 "dchop0.ch"
                                                                                                        
#line 682 "dchop0.ch"
#line 682 "dchop0.ch"
                                                                                                    }
#line 682 "dchop0.ch"
#line 683 "dchop0.ch"
                                                                    
#line 683 "dchop0.ch"
#line 683 "dchop0.ch"
                                                                }
                                                                
#line 683 "dchop0.ch"
#line 685 "dchop0.ch"
                                                                {
#line 685 "dchop0.ch"
#line 685 "dchop0.ch"
                                                                    rank = ranktree(elem);
#line 685 "dchop0.ch"
#line 686 "dchop0.ch"
                                                                    PTREE   rep ;
#line 686 "dchop0.ch"
                                                                    
#line 686 "dchop0.ch"
#line 687 "dchop0.ch"
                                                                    (father=FatherTree(elem));
#line 687 "dchop0.ch"
                                                                    
#line 687 "dchop0.ch"
#line 688 "dchop0.ch"
                                                                    {
#line 688 "dchop0.ch"
                                                                        PPTREE _ptTree0= (PPTREE) 0,_ptRes0= (PPTREE) 0;
#line 688 "dchop0.ch"
                                                                        _ptRes0 = MakeTree(cplus::EXP, 1);
#line 688 "dchop0.ch"
                                                                        _ptTree0 = StoreRef(copytree(elem));
#line 688 "dchop0.ch"
                                                                        ReplaceTree(_ptRes0, 1, _ptTree0);
#line 688 "dchop0.ch"
                                                                        rep = _ptRes0;
#line 688 "dchop0.ch"
                                                                    }
#line 688 "dchop0.ch"
                                                                    
#line 688 "dchop0.ch"
#line 689 "dchop0.ch"
                                                                    replacetree(father, rank, rep);
#line 689 "dchop0.ch"
#line 690 "dchop0.ch"
                                                                    it.Current(rep);
#line 690 "dchop0.ch"
#line 691 "dchop0.ch"
                                                                    father = (PPTREE) 0 ;
#line 691 "dchop0.ch"
                                                                    
#line 691 "dchop0.ch"
#line 692 "dchop0.ch"
                                                                    
#line 692 "dchop0.ch"
#line 692 "dchop0.ch"
                                                                }
                                                                
#line 692 "dchop0.ch"
#line 693 "dchop0.ch"
                                                                break ;
                                                                
#line 693 "dchop0.ch"
#line 695 "dchop0.ch"
                                                            case cplus::COMPOUND : 
#line 695 "dchop0.ch"
#line 695 "dchop0.ch"
                                                            _Case431 : 
#line 695 "dchop0.ch"
#line 695 "dchop0.ch"
                                                                ;
#line 695 "dchop0.ch"
#line 695 "dchop0.ch"
                                                                father = (PPTREE) 0 ;
#line 695 "dchop0.ch"
                                                                
#line 695 "dchop0.ch"
#line 696 "dchop0.ch"
                                                                break ;
                                                                
#line 696 "dchop0.ch"
                                                        }
#line 696 "dchop0.ch"
                                                        
#line 696 "dchop0.ch"
#line 698 "dchop0.ch"
                                                        if ( !((!father)) ) {
#line 698 "dchop0.ch"
#line 699 "dchop0.ch"
                                                                                rank = ranktree(father);
#line 699 "dchop0.ch"
#line 700 "dchop0.ch"
                                                                                (father=FatherTree(father));
#line 700 "dchop0.ch"
                                                                                
#line 700 "dchop0.ch"
#line 701 "dchop0.ch"
                                                                                
#line 701 "dchop0.ch"
#line 701 "dchop0.ch"
                                                                              }
#line 701 "dchop0.ch"
#line 702 "dchop0.ch"
                                                        
#line 702 "dchop0.ch"
#line 702 "dchop0.ch"
                                                       } 
#line 702 "dchop0.ch"
                                                    while ( !((!father)) );
#line 702 "dchop0.ch"
                                                    
#line 702 "dchop0.ch"
#line 703 "dchop0.ch"
                                                    
#line 703 "dchop0.ch"
#line 703 "dchop0.ch"
                                                }
                                                
#line 703 "dchop0.ch"
#line 704 "dchop0.ch"
                                                break ;
                                                
#line 704 "dchop0.ch"
                                        }
#line 704 "dchop0.ch"
                                        
#line 704 "dchop0.ch"
#line 706 "dchop0.ch"
                                        
#line 706 "dchop0.ch"
#line 706 "dchop0.ch"
                                    }
#line 706 "dchop0.ch"
#line 707 "dchop0.ch"
    
#line 707 "dchop0.ch"
#line 707 "dchop0.ch"
}
#line 707 "dchop0.ch"

#line 707 "dchop0.ch"
#line 707 "dchop0.ch"
static void dchop0_Anchor () { int i = 1;} 
#line 707 "dchop0.ch"
/*Well done my boy */ 
#line 707 "dchop0.ch"

