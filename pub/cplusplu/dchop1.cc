
#line 24 "dchop1.ch"
/*************************************************************************/
#line 24 "dchop1.ch"
/*                                                                       */
#line 24 "dchop1.ch"
/*        Produced by Metachop version 2.0  -    1989-1995               */
#line 24 "dchop1.ch"
/*     Tree      Meta     Chopper      developped    by                  */
#line 24 "dchop1.ch"
/*                  Eric Lavillonniere                                   */
#line 24 "dchop1.ch"
/*                                                                       */
#line 24 "dchop1.ch"
/*************************************************************************/
#line 24 "dchop1.ch"

#line 24 "dchop1.ch"
#include "token.h"
#line 24 "dchop1.ch"
#define decomp decomp_cplus
#line 24 "dchop1.ch"

#line 24 "dchop1.ch"
#ifndef for_elem
#line 24 "dchop1.ch"
#line 24 "dchop1.ch"
#define for_elem _for_elem

#line 24 "dchop1.ch"
#line 24 "dchop1.ch"

#line 24 "dchop1.ch"
#endif
#ifdef INCONNU
#line 24 "dchop1.ch"
#line 24 "dchop1.ch"
PTREE   for_elem ;
#line 24 "dchop1.ch"

#line 24 "dchop1.ch"
#line 24 "dchop1.ch"

#line 24 "dchop1.ch"
#endif
#ifdef FOR_METACHOP
#line 24 "dchop1.ch"
#line 28 "dchop1.ch"
PTREE   postComment ;
#line 28 "dchop1.ch"

#line 28 "dchop1.ch"
#line 28 "dchop1.ch"

#line 28 "dchop1.ch"
#endif

#include "deccplus.h"
#include "memges.h"

#line 34 "dchop1.ch"

#line 34 "dchop1.ch"
int DecompCplus::OpTypeAlign ( PTREE tree )
#line 34 "dchop1.ch"
{
#line 34 "dchop1.ch"
    register PPTREE _inter ;
#line 34 "dchop1.ch"

#line 34 "dchop1.ch"
#line 34 "dchop1.ch"
    int _nextVal ;
    
#line 34 "dchop1.ch"
#line 36 "dchop1.ch"
    PTREE   son ;
#line 36 "dchop1.ch"
    
#line 36 "dchop1.ch"
#line 38 "dchop1.ch"
    switch ( NumberTree(tree) ) {
#line 38 "dchop1.ch"
#line 38 "dchop1.ch"
        case cplus::EXP_SEQ : 
#line 38 "dchop1.ch"
#line 38 "dchop1.ch"
        _Case41 : 
#line 38 "dchop1.ch"
#line 38 "dchop1.ch"
            ;
#line 38 "dchop1.ch"
#line 38 "dchop1.ch"
            goto _Case42 ;
            
#line 38 "dchop1.ch"
#line 38 "dchop1.ch"
        case cplus::INITIALIZER : 
#line 38 "dchop1.ch"
#line 38 "dchop1.ch"
        _Case42 : 
#line 38 "dchop1.ch"
#line 38 "dchop1.ch"
            ;
#line 38 "dchop1.ch"
#line 38 "dchop1.ch"
            goto _Case43 ;
            
#line 38 "dchop1.ch"
#line 38 "dchop1.ch"
        case cplus::BASE_LIST : 
#line 38 "dchop1.ch"
#line 38 "dchop1.ch"
        _Case43 : 
#line 38 "dchop1.ch"
#line 38 "dchop1.ch"
            ;
#line 38 "dchop1.ch"
#line 38 "dchop1.ch"
            goto _Case44 ;
            
#line 38 "dchop1.ch"
#line 38 "dchop1.ch"
        case cplus::STRING_LIST : 
#line 38 "dchop1.ch"
#line 38 "dchop1.ch"
        _Case44 : 
#line 38 "dchop1.ch"
#line 38 "dchop1.ch"
            ;
#line 38 "dchop1.ch"
#line 38 "dchop1.ch"
            goto _Case45 ;
            
#line 38 "dchop1.ch"
#line 44 "dchop1.ch"
        case cplus::EXCEPTION_LIST : 
#line 44 "dchop1.ch"
#line 44 "dchop1.ch"
        _Case45 : 
#line 44 "dchop1.ch"
#line 44 "dchop1.ch"
            ;
#line 44 "dchop1.ch"
#line 44 "dchop1.ch"
            return LIST_ALIGN ;
            
#line 44 "dchop1.ch"
#line 45 "dchop1.ch"
            break ;
            
#line 45 "dchop1.ch"
#line 45 "dchop1.ch"
        case cplus::AFF : 
#line 45 "dchop1.ch"
#line 45 "dchop1.ch"
        _Case46 : 
#line 45 "dchop1.ch"
#line 45 "dchop1.ch"
            ;
#line 45 "dchop1.ch"
#line 45 "dchop1.ch"
            goto _Case47 ;
            
#line 45 "dchop1.ch"
#line 45 "dchop1.ch"
        case cplus::MUL_AFF : 
#line 45 "dchop1.ch"
#line 45 "dchop1.ch"
        _Case47 : 
#line 45 "dchop1.ch"
#line 45 "dchop1.ch"
            ;
#line 45 "dchop1.ch"
#line 45 "dchop1.ch"
            goto _Case48 ;
            
#line 45 "dchop1.ch"
#line 45 "dchop1.ch"
        case cplus::DIV_AFF : 
#line 45 "dchop1.ch"
#line 45 "dchop1.ch"
        _Case48 : 
#line 45 "dchop1.ch"
#line 45 "dchop1.ch"
            ;
#line 45 "dchop1.ch"
#line 45 "dchop1.ch"
            goto _Case49 ;
            
#line 45 "dchop1.ch"
#line 45 "dchop1.ch"
        case cplus::REM_AFF : 
#line 45 "dchop1.ch"
#line 45 "dchop1.ch"
        _Case49 : 
#line 45 "dchop1.ch"
#line 45 "dchop1.ch"
            ;
#line 45 "dchop1.ch"
#line 45 "dchop1.ch"
            goto _Case50 ;
            
#line 45 "dchop1.ch"
#line 45 "dchop1.ch"
        case cplus::MIN_AFF : 
#line 45 "dchop1.ch"
#line 45 "dchop1.ch"
        _Case50 : 
#line 45 "dchop1.ch"
#line 45 "dchop1.ch"
            ;
#line 45 "dchop1.ch"
#line 45 "dchop1.ch"
            goto _Case51 ;
            
#line 45 "dchop1.ch"
#line 45 "dchop1.ch"
        case cplus::PLU_AFF : 
#line 45 "dchop1.ch"
#line 45 "dchop1.ch"
        _Case51 : 
#line 45 "dchop1.ch"
#line 45 "dchop1.ch"
            ;
#line 45 "dchop1.ch"
#line 45 "dchop1.ch"
            goto _Case52 ;
            
#line 45 "dchop1.ch"
#line 45 "dchop1.ch"
        case cplus::LSH_AFF : 
#line 45 "dchop1.ch"
#line 45 "dchop1.ch"
        _Case52 : 
#line 45 "dchop1.ch"
#line 45 "dchop1.ch"
            ;
#line 45 "dchop1.ch"
#line 45 "dchop1.ch"
            goto _Case53 ;
            
#line 45 "dchop1.ch"
#line 45 "dchop1.ch"
        case cplus::RSH_AFF : 
#line 45 "dchop1.ch"
#line 45 "dchop1.ch"
        _Case53 : 
#line 45 "dchop1.ch"
#line 45 "dchop1.ch"
            ;
#line 45 "dchop1.ch"
#line 45 "dchop1.ch"
            goto _Case54 ;
            
#line 45 "dchop1.ch"
#line 45 "dchop1.ch"
        case cplus::AND_AFF : 
#line 45 "dchop1.ch"
#line 45 "dchop1.ch"
        _Case54 : 
#line 45 "dchop1.ch"
#line 45 "dchop1.ch"
            ;
#line 45 "dchop1.ch"
#line 45 "dchop1.ch"
            goto _Case55 ;
            
#line 45 "dchop1.ch"
#line 45 "dchop1.ch"
        case cplus::OR_AFF : 
#line 45 "dchop1.ch"
#line 45 "dchop1.ch"
        _Case55 : 
#line 45 "dchop1.ch"
#line 45 "dchop1.ch"
            ;
#line 45 "dchop1.ch"
#line 45 "dchop1.ch"
            goto _Case56 ;
            
#line 45 "dchop1.ch"
#line 57 "dchop1.ch"
        case cplus::XOR_AFF : 
#line 57 "dchop1.ch"
#line 57 "dchop1.ch"
        _Case56 : 
#line 57 "dchop1.ch"
#line 57 "dchop1.ch"
            ;
#line 57 "dchop1.ch"
#line 57 "dchop1.ch"
            return H_ALIGN ;
            
#line 57 "dchop1.ch"
#line 58 "dchop1.ch"
            break ;
            
#line 58 "dchop1.ch"
#line 58 "dchop1.ch"
        case cplus::OR : 
#line 58 "dchop1.ch"
#line 58 "dchop1.ch"
        _Case57 : 
#line 58 "dchop1.ch"
#line 58 "dchop1.ch"
            ;
#line 58 "dchop1.ch"
#line 58 "dchop1.ch"
            goto _Case58 ;
            
#line 58 "dchop1.ch"
#line 61 "dchop1.ch"
        case cplus::AND : 
#line 61 "dchop1.ch"
#line 61 "dchop1.ch"
        _Case58 : 
#line 61 "dchop1.ch"
#line 61 "dchop1.ch"
            ;
#line 61 "dchop1.ch"
#line 61 "dchop1.ch"
            return V_ALIGN ;
            
#line 61 "dchop1.ch"
#line 62 "dchop1.ch"
            break ;
            
#line 62 "dchop1.ch"
#line 64 "dchop1.ch"
        case cplus::COND_AFF : 
#line 64 "dchop1.ch"
#line 64 "dchop1.ch"
        _Case59 : 
#line 64 "dchop1.ch"
#line 64 "dchop1.ch"
            ;
#line 64 "dchop1.ch"
#line 64 "dchop1.ch"
            return COND_ALIGN ;
            
#line 64 "dchop1.ch"
#line 65 "dchop1.ch"
            break ;
            
#line 65 "dchop1.ch"
#line 65 "dchop1.ch"
        case cplus::LOR : 
#line 65 "dchop1.ch"
#line 65 "dchop1.ch"
        _Case60 : 
#line 65 "dchop1.ch"
#line 65 "dchop1.ch"
            ;
#line 65 "dchop1.ch"
#line 65 "dchop1.ch"
            goto _Case61 ;
            
#line 65 "dchop1.ch"
#line 65 "dchop1.ch"
        case cplus::LXOR : 
#line 65 "dchop1.ch"
#line 65 "dchop1.ch"
        _Case61 : 
#line 65 "dchop1.ch"
#line 65 "dchop1.ch"
            ;
#line 65 "dchop1.ch"
#line 65 "dchop1.ch"
            goto _Case62 ;
            
#line 65 "dchop1.ch"
#line 65 "dchop1.ch"
        case cplus::LAND : 
#line 65 "dchop1.ch"
#line 65 "dchop1.ch"
        _Case62 : 
#line 65 "dchop1.ch"
#line 65 "dchop1.ch"
            ;
#line 65 "dchop1.ch"
#line 65 "dchop1.ch"
            goto _Case63 ;
            
#line 65 "dchop1.ch"
#line 65 "dchop1.ch"
        case cplus::EQU : 
#line 65 "dchop1.ch"
#line 65 "dchop1.ch"
        _Case63 : 
#line 65 "dchop1.ch"
#line 65 "dchop1.ch"
            ;
#line 65 "dchop1.ch"
#line 65 "dchop1.ch"
            goto _Case64 ;
            
#line 65 "dchop1.ch"
#line 65 "dchop1.ch"
        case cplus::NEQU : 
#line 65 "dchop1.ch"
#line 65 "dchop1.ch"
        _Case64 : 
#line 65 "dchop1.ch"
#line 65 "dchop1.ch"
            ;
#line 65 "dchop1.ch"
#line 65 "dchop1.ch"
            goto _Case65 ;
            
#line 65 "dchop1.ch"
#line 65 "dchop1.ch"
        case cplus::LEQU : 
#line 65 "dchop1.ch"
#line 65 "dchop1.ch"
        _Case65 : 
#line 65 "dchop1.ch"
#line 65 "dchop1.ch"
            ;
#line 65 "dchop1.ch"
#line 65 "dchop1.ch"
            goto _Case66 ;
            
#line 65 "dchop1.ch"
#line 65 "dchop1.ch"
        case cplus::GEQU : 
#line 65 "dchop1.ch"
#line 65 "dchop1.ch"
        _Case66 : 
#line 65 "dchop1.ch"
#line 65 "dchop1.ch"
            ;
#line 65 "dchop1.ch"
#line 65 "dchop1.ch"
            goto _Case67 ;
            
#line 65 "dchop1.ch"
#line 65 "dchop1.ch"
        case cplus::GT : 
#line 65 "dchop1.ch"
#line 65 "dchop1.ch"
        _Case67 : 
#line 65 "dchop1.ch"
#line 65 "dchop1.ch"
            ;
#line 65 "dchop1.ch"
#line 65 "dchop1.ch"
            goto _Case68 ;
            
#line 65 "dchop1.ch"
#line 65 "dchop1.ch"
        case cplus::LT : 
#line 65 "dchop1.ch"
#line 65 "dchop1.ch"
        _Case68 : 
#line 65 "dchop1.ch"
#line 65 "dchop1.ch"
            ;
#line 65 "dchop1.ch"
#line 65 "dchop1.ch"
            goto _Case69 ;
            
#line 65 "dchop1.ch"
#line 65 "dchop1.ch"
        case cplus::LSHI : 
#line 65 "dchop1.ch"
#line 65 "dchop1.ch"
        _Case69 : 
#line 65 "dchop1.ch"
#line 65 "dchop1.ch"
            ;
#line 65 "dchop1.ch"
#line 65 "dchop1.ch"
            goto _Case70 ;
            
#line 65 "dchop1.ch"
#line 65 "dchop1.ch"
        case cplus::RSHI : 
#line 65 "dchop1.ch"
#line 65 "dchop1.ch"
        _Case70 : 
#line 65 "dchop1.ch"
#line 65 "dchop1.ch"
            ;
#line 65 "dchop1.ch"
#line 65 "dchop1.ch"
            goto _Case71 ;
            
#line 65 "dchop1.ch"
#line 65 "dchop1.ch"
        case cplus::MINUS : 
#line 65 "dchop1.ch"
#line 65 "dchop1.ch"
        _Case71 : 
#line 65 "dchop1.ch"
#line 65 "dchop1.ch"
            ;
#line 65 "dchop1.ch"
#line 65 "dchop1.ch"
            goto _Case72 ;
            
#line 65 "dchop1.ch"
#line 65 "dchop1.ch"
        case cplus::PLUS : 
#line 65 "dchop1.ch"
#line 65 "dchop1.ch"
        _Case72 : 
#line 65 "dchop1.ch"
#line 65 "dchop1.ch"
            ;
#line 65 "dchop1.ch"
#line 65 "dchop1.ch"
            goto _Case73 ;
            
#line 65 "dchop1.ch"
#line 65 "dchop1.ch"
        case cplus::TYP_AFF : 
#line 65 "dchop1.ch"
#line 65 "dchop1.ch"
        _Case73 : 
#line 65 "dchop1.ch"
#line 65 "dchop1.ch"
            ;
#line 65 "dchop1.ch"
#line 65 "dchop1.ch"
            goto _Case74 ;
            
#line 65 "dchop1.ch"
#line 65 "dchop1.ch"
        case cplus::MUL : 
#line 65 "dchop1.ch"
#line 65 "dchop1.ch"
        _Case74 : 
#line 65 "dchop1.ch"
#line 65 "dchop1.ch"
            ;
#line 65 "dchop1.ch"
#line 65 "dchop1.ch"
            goto _Case75 ;
            
#line 65 "dchop1.ch"
#line 65 "dchop1.ch"
        case cplus::DIV : 
#line 65 "dchop1.ch"
#line 65 "dchop1.ch"
        _Case75 : 
#line 65 "dchop1.ch"
#line 65 "dchop1.ch"
            ;
#line 65 "dchop1.ch"
#line 65 "dchop1.ch"
            goto _Case76 ;
            
#line 65 "dchop1.ch"
#line 65 "dchop1.ch"
        case cplus::REM : 
#line 65 "dchop1.ch"
#line 65 "dchop1.ch"
        _Case76 : 
#line 65 "dchop1.ch"
#line 65 "dchop1.ch"
            ;
#line 65 "dchop1.ch"
#line 65 "dchop1.ch"
            goto _Case77 ;
            
#line 65 "dchop1.ch"
#line 65 "dchop1.ch"
        case cplus::DOT_MEMB : 
#line 65 "dchop1.ch"
#line 65 "dchop1.ch"
        _Case77 : 
#line 65 "dchop1.ch"
#line 65 "dchop1.ch"
            ;
#line 65 "dchop1.ch"
#line 65 "dchop1.ch"
            goto _Case78 ;
            
#line 65 "dchop1.ch"
#line 65 "dchop1.ch"
        case cplus::ARROW_MEMB : 
#line 65 "dchop1.ch"
#line 65 "dchop1.ch"
        _Case78 : 
#line 65 "dchop1.ch"
#line 65 "dchop1.ch"
            ;
#line 65 "dchop1.ch"
#line 65 "dchop1.ch"
            goto _Case79 ;
            
#line 65 "dchop1.ch"
#line 65 "dchop1.ch"
        case cplus::REF : 
#line 65 "dchop1.ch"
#line 65 "dchop1.ch"
        _Case79 : 
#line 65 "dchop1.ch"
#line 65 "dchop1.ch"
            ;
#line 65 "dchop1.ch"
#line 65 "dchop1.ch"
            goto _Case80 ;
            
#line 65 "dchop1.ch"
#line 87 "dchop1.ch"
        case cplus::ARROW : 
#line 87 "dchop1.ch"
#line 87 "dchop1.ch"
        _Case80 : 
#line 87 "dchop1.ch"
#line 87 "dchop1.ch"
            ;
#line 87 "dchop1.ch"
#line 87 "dchop1.ch"
            return H_ALIGN ;
            
#line 87 "dchop1.ch"
#line 88 "dchop1.ch"
            break ;
            
#line 88 "dchop1.ch"
#line 89 "dchop1.ch"
        default : 
#line 89 "dchop1.ch"
#line 89 "dchop1.ch"
        _Case81 : 
#line 89 "dchop1.ch"
#line 89 "dchop1.ch"
            ;
#line 89 "dchop1.ch"
#line 89 "dchop1.ch"
            return -1 ;
            
#line 89 "dchop1.ch"
    }
#line 89 "dchop1.ch"
    
#line 89 "dchop1.ch"
#line 91 "dchop1.ch"
    
#line 91 "dchop1.ch"
#line 91 "dchop1.ch"
}
#line 91 "dchop1.ch"

#line 93 "dchop1.ch"

#line 93 "dchop1.ch"
int DecompCplus::OpType ( PTREE tree )
#line 93 "dchop1.ch"
{
#line 93 "dchop1.ch"
    register PPTREE _inter ;
#line 93 "dchop1.ch"

#line 93 "dchop1.ch"
#line 93 "dchop1.ch"
    int _nextVal ;
    
#line 93 "dchop1.ch"
#line 95 "dchop1.ch"
    PTREE   son ;
#line 95 "dchop1.ch"
    
#line 95 "dchop1.ch"
#line 97 "dchop1.ch"
    switch ( NumberTree(tree) ) {
#line 97 "dchop1.ch"
#line 98 "dchop1.ch"
        case LIST : 
#line 98 "dchop1.ch"
#line 98 "dchop1.ch"
        _Case125 : 
#line 98 "dchop1.ch"
#line 98 "dchop1.ch"
            ;
#line 98 "dchop1.ch"
#line 98 "dchop1.ch"
            return 1000 ;
            
#line 98 "dchop1.ch"
#line 98 "dchop1.ch"
            goto _Case126 ;
            
#line 98 "dchop1.ch"
#line 98 "dchop1.ch"
        case cplus::EXP_SEQ : 
#line 98 "dchop1.ch"
#line 98 "dchop1.ch"
        _Case126 : 
#line 98 "dchop1.ch"
#line 98 "dchop1.ch"
            ;
#line 98 "dchop1.ch"
#line 98 "dchop1.ch"
            goto _Case127 ;
            
#line 98 "dchop1.ch"
#line 98 "dchop1.ch"
        case cplus::INITIALIZER : 
#line 98 "dchop1.ch"
#line 98 "dchop1.ch"
        _Case127 : 
#line 98 "dchop1.ch"
#line 98 "dchop1.ch"
            ;
#line 98 "dchop1.ch"
#line 98 "dchop1.ch"
            goto _Case128 ;
            
#line 98 "dchop1.ch"
#line 98 "dchop1.ch"
        case cplus::BASE_LIST : 
#line 98 "dchop1.ch"
#line 98 "dchop1.ch"
        _Case128 : 
#line 98 "dchop1.ch"
#line 98 "dchop1.ch"
            ;
#line 98 "dchop1.ch"
#line 98 "dchop1.ch"
            goto _Case129 ;
            
#line 98 "dchop1.ch"
#line 103 "dchop1.ch"
        case cplus::EXCEPTION_LIST : 
#line 103 "dchop1.ch"
#line 103 "dchop1.ch"
        _Case129 : 
#line 103 "dchop1.ch"
#line 103 "dchop1.ch"
            ;
#line 103 "dchop1.ch"
#line 103 "dchop1.ch"
            return 0 ;
            
#line 103 "dchop1.ch"
#line 104 "dchop1.ch"
            break ;
            
#line 104 "dchop1.ch"
#line 104 "dchop1.ch"
        case cplus::AFF : 
#line 104 "dchop1.ch"
#line 104 "dchop1.ch"
        _Case130 : 
#line 104 "dchop1.ch"
#line 104 "dchop1.ch"
            ;
#line 104 "dchop1.ch"
#line 104 "dchop1.ch"
            goto _Case131 ;
            
#line 104 "dchop1.ch"
#line 104 "dchop1.ch"
        case cplus::MUL_AFF : 
#line 104 "dchop1.ch"
#line 104 "dchop1.ch"
        _Case131 : 
#line 104 "dchop1.ch"
#line 104 "dchop1.ch"
            ;
#line 104 "dchop1.ch"
#line 104 "dchop1.ch"
            goto _Case132 ;
            
#line 104 "dchop1.ch"
#line 104 "dchop1.ch"
        case cplus::DIV_AFF : 
#line 104 "dchop1.ch"
#line 104 "dchop1.ch"
        _Case132 : 
#line 104 "dchop1.ch"
#line 104 "dchop1.ch"
            ;
#line 104 "dchop1.ch"
#line 104 "dchop1.ch"
            goto _Case133 ;
            
#line 104 "dchop1.ch"
#line 104 "dchop1.ch"
        case cplus::REM_AFF : 
#line 104 "dchop1.ch"
#line 104 "dchop1.ch"
        _Case133 : 
#line 104 "dchop1.ch"
#line 104 "dchop1.ch"
            ;
#line 104 "dchop1.ch"
#line 104 "dchop1.ch"
            goto _Case134 ;
            
#line 104 "dchop1.ch"
#line 104 "dchop1.ch"
        case cplus::MIN_AFF : 
#line 104 "dchop1.ch"
#line 104 "dchop1.ch"
        _Case134 : 
#line 104 "dchop1.ch"
#line 104 "dchop1.ch"
            ;
#line 104 "dchop1.ch"
#line 104 "dchop1.ch"
            goto _Case135 ;
            
#line 104 "dchop1.ch"
#line 104 "dchop1.ch"
        case cplus::PLU_AFF : 
#line 104 "dchop1.ch"
#line 104 "dchop1.ch"
        _Case135 : 
#line 104 "dchop1.ch"
#line 104 "dchop1.ch"
            ;
#line 104 "dchop1.ch"
#line 104 "dchop1.ch"
            goto _Case136 ;
            
#line 104 "dchop1.ch"
#line 104 "dchop1.ch"
        case cplus::LSH_AFF : 
#line 104 "dchop1.ch"
#line 104 "dchop1.ch"
        _Case136 : 
#line 104 "dchop1.ch"
#line 104 "dchop1.ch"
            ;
#line 104 "dchop1.ch"
#line 104 "dchop1.ch"
            goto _Case137 ;
            
#line 104 "dchop1.ch"
#line 104 "dchop1.ch"
        case cplus::RSH_AFF : 
#line 104 "dchop1.ch"
#line 104 "dchop1.ch"
        _Case137 : 
#line 104 "dchop1.ch"
#line 104 "dchop1.ch"
            ;
#line 104 "dchop1.ch"
#line 104 "dchop1.ch"
            goto _Case138 ;
            
#line 104 "dchop1.ch"
#line 104 "dchop1.ch"
        case cplus::AND_AFF : 
#line 104 "dchop1.ch"
#line 104 "dchop1.ch"
        _Case138 : 
#line 104 "dchop1.ch"
#line 104 "dchop1.ch"
            ;
#line 104 "dchop1.ch"
#line 104 "dchop1.ch"
            goto _Case139 ;
            
#line 104 "dchop1.ch"
#line 104 "dchop1.ch"
        case cplus::OR_AFF : 
#line 104 "dchop1.ch"
#line 104 "dchop1.ch"
        _Case139 : 
#line 104 "dchop1.ch"
#line 104 "dchop1.ch"
            ;
#line 104 "dchop1.ch"
#line 104 "dchop1.ch"
            goto _Case140 ;
            
#line 104 "dchop1.ch"
#line 116 "dchop1.ch"
        case cplus::XOR_AFF : 
#line 116 "dchop1.ch"
#line 116 "dchop1.ch"
        _Case140 : 
#line 116 "dchop1.ch"
#line 116 "dchop1.ch"
            ;
#line 116 "dchop1.ch"
#line 116 "dchop1.ch"
            return 100 ;
            
#line 116 "dchop1.ch"
#line 117 "dchop1.ch"
            break ;
            
#line 117 "dchop1.ch"
#line 119 "dchop1.ch"
        case cplus::COND_AFF : 
#line 119 "dchop1.ch"
#line 119 "dchop1.ch"
        _Case141 : 
#line 119 "dchop1.ch"
#line 119 "dchop1.ch"
            ;
#line 119 "dchop1.ch"
#line 119 "dchop1.ch"
            return 101 ;
            
#line 119 "dchop1.ch"
#line 120 "dchop1.ch"
            break ;
            
#line 120 "dchop1.ch"
#line 122 "dchop1.ch"
        case cplus::OR : 
#line 122 "dchop1.ch"
#line 122 "dchop1.ch"
        _Case142 : 
#line 122 "dchop1.ch"
#line 122 "dchop1.ch"
            ;
#line 122 "dchop1.ch"
#line 122 "dchop1.ch"
            return 102 ;
            
#line 122 "dchop1.ch"
#line 123 "dchop1.ch"
            break ;
            
#line 123 "dchop1.ch"
#line 125 "dchop1.ch"
        case cplus::AND : 
#line 125 "dchop1.ch"
#line 125 "dchop1.ch"
        _Case143 : 
#line 125 "dchop1.ch"
#line 125 "dchop1.ch"
            ;
#line 125 "dchop1.ch"
#line 125 "dchop1.ch"
            return 103 ;
            
#line 125 "dchop1.ch"
#line 126 "dchop1.ch"
            break ;
            
#line 126 "dchop1.ch"
#line 128 "dchop1.ch"
        case cplus::LOR : 
#line 128 "dchop1.ch"
#line 128 "dchop1.ch"
        _Case144 : 
#line 128 "dchop1.ch"
#line 128 "dchop1.ch"
            ;
#line 128 "dchop1.ch"
#line 128 "dchop1.ch"
            return 104 ;
            
#line 128 "dchop1.ch"
#line 129 "dchop1.ch"
            break ;
            
#line 129 "dchop1.ch"
#line 131 "dchop1.ch"
        case cplus::LXOR : 
#line 131 "dchop1.ch"
#line 131 "dchop1.ch"
        _Case145 : 
#line 131 "dchop1.ch"
#line 131 "dchop1.ch"
            ;
#line 131 "dchop1.ch"
#line 131 "dchop1.ch"
            return 105 ;
            
#line 131 "dchop1.ch"
#line 132 "dchop1.ch"
            break ;
            
#line 132 "dchop1.ch"
#line 134 "dchop1.ch"
        case cplus::LAND : 
#line 134 "dchop1.ch"
#line 134 "dchop1.ch"
        _Case146 : 
#line 134 "dchop1.ch"
#line 134 "dchop1.ch"
            ;
#line 134 "dchop1.ch"
#line 134 "dchop1.ch"
            return 106 ;
            
#line 134 "dchop1.ch"
#line 135 "dchop1.ch"
            break ;
            
#line 135 "dchop1.ch"
#line 135 "dchop1.ch"
        case cplus::EQU : 
#line 135 "dchop1.ch"
#line 135 "dchop1.ch"
        _Case147 : 
#line 135 "dchop1.ch"
#line 135 "dchop1.ch"
            ;
#line 135 "dchop1.ch"
#line 135 "dchop1.ch"
            goto _Case148 ;
            
#line 135 "dchop1.ch"
#line 138 "dchop1.ch"
        case cplus::NEQU : 
#line 138 "dchop1.ch"
#line 138 "dchop1.ch"
        _Case148 : 
#line 138 "dchop1.ch"
#line 138 "dchop1.ch"
            ;
#line 138 "dchop1.ch"
#line 138 "dchop1.ch"
            return 107 ;
            
#line 138 "dchop1.ch"
#line 139 "dchop1.ch"
            break ;
            
#line 139 "dchop1.ch"
#line 139 "dchop1.ch"
        case cplus::LEQU : 
#line 139 "dchop1.ch"
#line 139 "dchop1.ch"
        _Case149 : 
#line 139 "dchop1.ch"
#line 139 "dchop1.ch"
            ;
#line 139 "dchop1.ch"
#line 139 "dchop1.ch"
            goto _Case150 ;
            
#line 139 "dchop1.ch"
#line 139 "dchop1.ch"
        case cplus::GEQU : 
#line 139 "dchop1.ch"
#line 139 "dchop1.ch"
        _Case150 : 
#line 139 "dchop1.ch"
#line 139 "dchop1.ch"
            ;
#line 139 "dchop1.ch"
#line 139 "dchop1.ch"
            goto _Case151 ;
            
#line 139 "dchop1.ch"
#line 139 "dchop1.ch"
        case cplus::GT : 
#line 139 "dchop1.ch"
#line 139 "dchop1.ch"
        _Case151 : 
#line 139 "dchop1.ch"
#line 139 "dchop1.ch"
            ;
#line 139 "dchop1.ch"
#line 139 "dchop1.ch"
            goto _Case152 ;
            
#line 139 "dchop1.ch"
#line 144 "dchop1.ch"
        case cplus::LT : 
#line 144 "dchop1.ch"
#line 144 "dchop1.ch"
        _Case152 : 
#line 144 "dchop1.ch"
#line 144 "dchop1.ch"
            ;
#line 144 "dchop1.ch"
#line 144 "dchop1.ch"
            return 108 ;
            
#line 144 "dchop1.ch"
#line 145 "dchop1.ch"
            break ;
            
#line 145 "dchop1.ch"
#line 145 "dchop1.ch"
        case cplus::LSHI : 
#line 145 "dchop1.ch"
#line 145 "dchop1.ch"
        _Case153 : 
#line 145 "dchop1.ch"
#line 145 "dchop1.ch"
            ;
#line 145 "dchop1.ch"
#line 145 "dchop1.ch"
            goto _Case154 ;
            
#line 145 "dchop1.ch"
#line 148 "dchop1.ch"
        case cplus::RSHI : 
#line 148 "dchop1.ch"
#line 148 "dchop1.ch"
        _Case154 : 
#line 148 "dchop1.ch"
#line 148 "dchop1.ch"
            ;
#line 148 "dchop1.ch"
#line 148 "dchop1.ch"
            return 109 ;
            
#line 148 "dchop1.ch"
#line 149 "dchop1.ch"
            break ;
            
#line 149 "dchop1.ch"
#line 149 "dchop1.ch"
        case cplus::MINUS : 
#line 149 "dchop1.ch"
#line 149 "dchop1.ch"
        _Case155 : 
#line 149 "dchop1.ch"
#line 149 "dchop1.ch"
            ;
#line 149 "dchop1.ch"
#line 149 "dchop1.ch"
            goto _Case156 ;
            
#line 149 "dchop1.ch"
#line 149 "dchop1.ch"
        case cplus::PLUS : 
#line 149 "dchop1.ch"
#line 149 "dchop1.ch"
        _Case156 : 
#line 149 "dchop1.ch"
#line 149 "dchop1.ch"
            ;
#line 149 "dchop1.ch"
#line 149 "dchop1.ch"
            goto _Case157 ;
            
#line 149 "dchop1.ch"
#line 156 "dchop1.ch"
        case cplus::TYP_AFF : 
#line 156 "dchop1.ch"
#line 156 "dchop1.ch"
        _Case157 : 
#line 156 "dchop1.ch"
#line 156 "dchop1.ch"
            ;
#line 156 "dchop1.ch"
#line 156 "dchop1.ch"
            return 110 ;
            
#line 156 "dchop1.ch"
#line 157 "dchop1.ch"
            break ;
            
#line 157 "dchop1.ch"
#line 157 "dchop1.ch"
        case cplus::MUL : 
#line 157 "dchop1.ch"
#line 157 "dchop1.ch"
        _Case158 : 
#line 157 "dchop1.ch"
#line 157 "dchop1.ch"
            ;
#line 157 "dchop1.ch"
#line 157 "dchop1.ch"
            goto _Case159 ;
            
#line 157 "dchop1.ch"
#line 157 "dchop1.ch"
        case cplus::DIV : 
#line 157 "dchop1.ch"
#line 157 "dchop1.ch"
        _Case159 : 
#line 157 "dchop1.ch"
#line 157 "dchop1.ch"
            ;
#line 157 "dchop1.ch"
#line 157 "dchop1.ch"
            goto _Case160 ;
            
#line 157 "dchop1.ch"
#line 161 "dchop1.ch"
        case cplus::REM : 
#line 161 "dchop1.ch"
#line 161 "dchop1.ch"
        _Case160 : 
#line 161 "dchop1.ch"
#line 161 "dchop1.ch"
            ;
#line 161 "dchop1.ch"
#line 161 "dchop1.ch"
            return 111 ;
            
#line 161 "dchop1.ch"
#line 162 "dchop1.ch"
            break ;
            
#line 162 "dchop1.ch"
#line 162 "dchop1.ch"
        case cplus::DOT_MEMB : 
#line 162 "dchop1.ch"
#line 162 "dchop1.ch"
        _Case161 : 
#line 162 "dchop1.ch"
#line 162 "dchop1.ch"
            ;
#line 162 "dchop1.ch"
#line 162 "dchop1.ch"
            goto _Case162 ;
            
#line 162 "dchop1.ch"
#line 165 "dchop1.ch"
        case cplus::ARROW_MEMB : 
#line 165 "dchop1.ch"
#line 165 "dchop1.ch"
        _Case162 : 
#line 165 "dchop1.ch"
#line 165 "dchop1.ch"
            ;
#line 165 "dchop1.ch"
#line 165 "dchop1.ch"
            return 112 ;
            
#line 165 "dchop1.ch"
#line 166 "dchop1.ch"
            break ;
            
#line 166 "dchop1.ch"
#line 166 "dchop1.ch"
        case cplus::EXP_ARRAY : 
#line 166 "dchop1.ch"
#line 166 "dchop1.ch"
        _Case163 : 
#line 166 "dchop1.ch"
#line 166 "dchop1.ch"
            ;
#line 166 "dchop1.ch"
#line 166 "dchop1.ch"
            goto _Case164 ;
            
#line 166 "dchop1.ch"
#line 166 "dchop1.ch"
        case cplus::REF : 
#line 166 "dchop1.ch"
#line 166 "dchop1.ch"
        _Case164 : 
#line 166 "dchop1.ch"
#line 166 "dchop1.ch"
            ;
#line 166 "dchop1.ch"
#line 166 "dchop1.ch"
            goto _Case165 ;
            
#line 166 "dchop1.ch"
#line 170 "dchop1.ch"
        case cplus::ARROW : 
#line 170 "dchop1.ch"
#line 170 "dchop1.ch"
        _Case165 : 
#line 170 "dchop1.ch"
#line 170 "dchop1.ch"
            ;
#line 170 "dchop1.ch"
#line 170 "dchop1.ch"
            return 15 ;
            
#line 170 "dchop1.ch"
#line 171 "dchop1.ch"
            break ;
            
#line 171 "dchop1.ch"
#line 173 "dchop1.ch"
        case cplus::EXP : 
#line 173 "dchop1.ch"
#line 173 "dchop1.ch"
        _Case166 : 
#line 173 "dchop1.ch"
#line 173 "dchop1.ch"
            ;
#line 173 "dchop1.ch"
#line 173 "dchop1.ch"
            return 16 ;
            
#line 173 "dchop1.ch"
#line 174 "dchop1.ch"
            break ;
            
#line 174 "dchop1.ch"
#line 175 "dchop1.ch"
        default : 
#line 175 "dchop1.ch"
#line 175 "dchop1.ch"
        _Case167 : 
#line 175 "dchop1.ch"
#line 175 "dchop1.ch"
            ;
#line 175 "dchop1.ch"
#line 175 "dchop1.ch"
            return -1 ;
            
#line 175 "dchop1.ch"
    }
#line 175 "dchop1.ch"
    
#line 175 "dchop1.ch"
#line 177 "dchop1.ch"
    
#line 177 "dchop1.ch"
#line 177 "dchop1.ch"
}
#line 177 "dchop1.ch"

#line 179 "dchop1.ch"

#line 179 "dchop1.ch"
int DecompCplus::IsTop ( PTREE tree, int internal )
#line 179 "dchop1.ch"
{
#line 179 "dchop1.ch"
    register PPTREE _inter ;
#line 179 "dchop1.ch"

#line 179 "dchop1.ch"
#line 179 "dchop1.ch"
    int _nextVal ;
    
#line 179 "dchop1.ch"
#line 181 "dchop1.ch"
    PTREE   treeOld ;
#line 181 "dchop1.ch"
    
#line 181 "dchop1.ch"
#line 183 "dchop1.ch"
    switch ( NumberTree(tree) ) {
#line 183 "dchop1.ch"
#line 184 "dchop1.ch"
        case cplus::LABEL : 
#line 184 "dchop1.ch"
#line 184 "dchop1.ch"
        _Case242 : 
#line 184 "dchop1.ch"
#line 184 "dchop1.ch"
            ;
#line 184 "dchop1.ch"
#line 184 "dchop1.ch"
            return -1 ;
            
#line 184 "dchop1.ch"
#line 184 "dchop1.ch"
            goto _Case243 ;
            
#line 184 "dchop1.ch"
#line 185 "dchop1.ch"
        case cplus::DECLARATION : 
#line 185 "dchop1.ch"
#line 185 "dchop1.ch"
        _Case243 : 
#line 185 "dchop1.ch"
#line 185 "dchop1.ch"
            ;
#line 185 "dchop1.ch"
#line 185 "dchop1.ch"
            return -1 ;
            
#line 185 "dchop1.ch"
#line 185 "dchop1.ch"
            goto _Case244 ;
            
#line 185 "dchop1.ch"
#line 186 "dchop1.ch"
        case cplus::TYPEDEF : 
#line 186 "dchop1.ch"
#line 186 "dchop1.ch"
        _Case244 : 
#line 186 "dchop1.ch"
#line 186 "dchop1.ch"
            ;
#line 186 "dchop1.ch"
#line 186 "dchop1.ch"
            return -1 ;
            
#line 186 "dchop1.ch"
#line 186 "dchop1.ch"
            goto _Case245 ;
            
#line 186 "dchop1.ch"
#line 187 "dchop1.ch"
        case cplus::IF : 
#line 187 "dchop1.ch"
#line 187 "dchop1.ch"
        _Case245 : 
#line 187 "dchop1.ch"
#line 187 "dchop1.ch"
            ;
#line 187 "dchop1.ch"
#line 187 "dchop1.ch"
            return 1 ;
            
#line 187 "dchop1.ch"
#line 187 "dchop1.ch"
            goto _Case246 ;
            
#line 187 "dchop1.ch"
#line 188 "dchop1.ch"
        case cplus::WHILE : 
#line 188 "dchop1.ch"
#line 188 "dchop1.ch"
        _Case246 : 
#line 188 "dchop1.ch"
#line 188 "dchop1.ch"
            ;
#line 188 "dchop1.ch"
#line 188 "dchop1.ch"
            return 2 ;
            
#line 188 "dchop1.ch"
#line 188 "dchop1.ch"
            goto _Case247 ;
            
#line 188 "dchop1.ch"
#line 189 "dchop1.ch"
        case cplus::FOR : 
#line 189 "dchop1.ch"
#line 189 "dchop1.ch"
        _Case247 : 
#line 189 "dchop1.ch"
#line 189 "dchop1.ch"
            ;
#line 189 "dchop1.ch"
#line 189 "dchop1.ch"
            return 3 ;
            
#line 189 "dchop1.ch"
#line 189 "dchop1.ch"
            goto _Case248 ;
            
#line 189 "dchop1.ch"
#line 190 "dchop1.ch"
        case cplus::DO : 
#line 190 "dchop1.ch"
#line 190 "dchop1.ch"
        _Case248 : 
#line 190 "dchop1.ch"
#line 190 "dchop1.ch"
            ;
#line 190 "dchop1.ch"
#line 190 "dchop1.ch"
            return 4 ;
            
#line 190 "dchop1.ch"
#line 190 "dchop1.ch"
            goto _Case249 ;
            
#line 190 "dchop1.ch"
#line 191 "dchop1.ch"
        case cplus::BREAK : 
#line 191 "dchop1.ch"
#line 191 "dchop1.ch"
        _Case249 : 
#line 191 "dchop1.ch"
#line 191 "dchop1.ch"
            ;
#line 191 "dchop1.ch"
#line 191 "dchop1.ch"
            return 5 ;
            
#line 191 "dchop1.ch"
#line 191 "dchop1.ch"
            goto _Case250 ;
            
#line 191 "dchop1.ch"
#line 192 "dchop1.ch"
        case cplus::CONTINUE : 
#line 192 "dchop1.ch"
#line 192 "dchop1.ch"
        _Case250 : 
#line 192 "dchop1.ch"
#line 192 "dchop1.ch"
            ;
#line 192 "dchop1.ch"
#line 192 "dchop1.ch"
            return 6 ;
            
#line 192 "dchop1.ch"
#line 192 "dchop1.ch"
            goto _Case251 ;
            
#line 192 "dchop1.ch"
#line 194 "dchop1.ch"
        case cplus::COMPOUND : 
#line 194 "dchop1.ch"
#line 194 "dchop1.ch"
        _Case251 : 
#line 194 "dchop1.ch"
#line 194 "dchop1.ch"
            ;
#line 194 "dchop1.ch"
#line 194 "dchop1.ch"
            if ( !internal && IsTop(FatherTree(tree), 1) == -1 ) 
#line 194 "dchop1.ch"
#line 195 "dchop1.ch"
                return 7 ;
            
#line 195 "dchop1.ch"
            else 
#line 195 "dchop1.ch"
#line 197 "dchop1.ch"
                return -1 ;
                
#line 197 "dchop1.ch"
            
#line 197 "dchop1.ch"
#line 197 "dchop1.ch"
            goto _Case252 ;
            
#line 197 "dchop1.ch"
#line 198 "dchop1.ch"
        case cplus::GOTO : 
#line 198 "dchop1.ch"
#line 198 "dchop1.ch"
        _Case252 : 
#line 198 "dchop1.ch"
#line 198 "dchop1.ch"
            ;
#line 198 "dchop1.ch"
#line 198 "dchop1.ch"
            return 8 ;
            
#line 198 "dchop1.ch"
#line 198 "dchop1.ch"
            goto _Case253 ;
            
#line 198 "dchop1.ch"
#line 199 "dchop1.ch"
        case cplus::STAT_VOID : 
#line 199 "dchop1.ch"
#line 199 "dchop1.ch"
        _Case253 : 
#line 199 "dchop1.ch"
#line 199 "dchop1.ch"
            ;
#line 199 "dchop1.ch"
#line 199 "dchop1.ch"
            return 9 ;
            
#line 199 "dchop1.ch"
#line 199 "dchop1.ch"
            goto _Case254 ;
            
#line 199 "dchop1.ch"
#line 200 "dchop1.ch"
        case cplus::RETURN : 
#line 200 "dchop1.ch"
#line 200 "dchop1.ch"
        _Case254 : 
#line 200 "dchop1.ch"
#line 200 "dchop1.ch"
            ;
#line 200 "dchop1.ch"
#line 200 "dchop1.ch"
            return 11 ;
            
#line 200 "dchop1.ch"
#line 200 "dchop1.ch"
            goto _Case255 ;
            
#line 200 "dchop1.ch"
#line 201 "dchop1.ch"
        case cplus::SWITCH : 
#line 201 "dchop1.ch"
#line 201 "dchop1.ch"
        _Case255 : 
#line 201 "dchop1.ch"
#line 201 "dchop1.ch"
            ;
#line 201 "dchop1.ch"
#line 201 "dchop1.ch"
            return 12 ;
            
#line 201 "dchop1.ch"
#line 201 "dchop1.ch"
            goto _Case256 ;
            
#line 201 "dchop1.ch"
#line 202 "dchop1.ch"
        case cplus::INCLUDE_DIR : 
#line 202 "dchop1.ch"
#line 202 "dchop1.ch"
        _Case256 : 
#line 202 "dchop1.ch"
#line 202 "dchop1.ch"
            ;
#line 202 "dchop1.ch"
#line 202 "dchop1.ch"
            return 14 ;
            
#line 202 "dchop1.ch"
#line 202 "dchop1.ch"
            goto _Case257 ;
            
#line 202 "dchop1.ch"
#line 203 "dchop1.ch"
        case cplus::IF_DIR : 
#line 203 "dchop1.ch"
#line 203 "dchop1.ch"
        _Case257 : 
#line 203 "dchop1.ch"
#line 203 "dchop1.ch"
            ;
#line 203 "dchop1.ch"
#line 203 "dchop1.ch"
            return 15 ;
            
#line 203 "dchop1.ch"
#line 203 "dchop1.ch"
            goto _Case258 ;
            
#line 203 "dchop1.ch"
#line 204 "dchop1.ch"
        case cplus::IFDEF_DIR : 
#line 204 "dchop1.ch"
#line 204 "dchop1.ch"
        _Case258 : 
#line 204 "dchop1.ch"
#line 204 "dchop1.ch"
            ;
#line 204 "dchop1.ch"
#line 204 "dchop1.ch"
            return 16 ;
            
#line 204 "dchop1.ch"
#line 204 "dchop1.ch"
            goto _Case259 ;
            
#line 204 "dchop1.ch"
#line 205 "dchop1.ch"
        case cplus::IFNDEF_DIR : 
#line 205 "dchop1.ch"
#line 205 "dchop1.ch"
        _Case259 : 
#line 205 "dchop1.ch"
#line 205 "dchop1.ch"
            ;
#line 205 "dchop1.ch"
#line 205 "dchop1.ch"
            return 17 ;
            
#line 205 "dchop1.ch"
#line 205 "dchop1.ch"
            goto _Case260 ;
            
#line 205 "dchop1.ch"
#line 206 "dchop1.ch"
        case cplus::NO_PRETTY : 
#line 206 "dchop1.ch"
#line 206 "dchop1.ch"
        _Case260 : 
#line 206 "dchop1.ch"
#line 206 "dchop1.ch"
            ;
#line 206 "dchop1.ch"
#line 206 "dchop1.ch"
            return 17 ;
            
#line 206 "dchop1.ch"
#line 206 "dchop1.ch"
            goto _Case261 ;
            
#line 206 "dchop1.ch"
#line 207 "dchop1.ch"
        case cplus::NOT_MANAGED : 
#line 207 "dchop1.ch"
#line 207 "dchop1.ch"
        _Case261 : 
#line 207 "dchop1.ch"
#line 207 "dchop1.ch"
            ;
#line 207 "dchop1.ch"
#line 207 "dchop1.ch"
            return 17 ;
            
#line 207 "dchop1.ch"
#line 207 "dchop1.ch"
            goto _Case262 ;
            
#line 207 "dchop1.ch"
#line 208 "dchop1.ch"
        case cplus::AFF : 
#line 208 "dchop1.ch"
#line 208 "dchop1.ch"
        _Case262 : 
#line 208 "dchop1.ch"
#line 208 "dchop1.ch"
            ;
#line 208 "dchop1.ch"
#line 208 "dchop1.ch"
            ;
#line 208 "dchop1.ch"
#line 208 "dchop1.ch"
            goto _Case263 ;
            
#line 208 "dchop1.ch"
#line 209 "dchop1.ch"
        case cplus::MUL_AFF : 
#line 209 "dchop1.ch"
#line 209 "dchop1.ch"
        _Case263 : 
#line 209 "dchop1.ch"
#line 209 "dchop1.ch"
            ;
#line 209 "dchop1.ch"
#line 209 "dchop1.ch"
            ;
#line 209 "dchop1.ch"
#line 209 "dchop1.ch"
            goto _Case264 ;
            
#line 209 "dchop1.ch"
#line 210 "dchop1.ch"
        case cplus::DIV_AFF : 
#line 210 "dchop1.ch"
#line 210 "dchop1.ch"
        _Case264 : 
#line 210 "dchop1.ch"
#line 210 "dchop1.ch"
            ;
#line 210 "dchop1.ch"
#line 210 "dchop1.ch"
            ;
#line 210 "dchop1.ch"
#line 210 "dchop1.ch"
            goto _Case265 ;
            
#line 210 "dchop1.ch"
#line 211 "dchop1.ch"
        case cplus::REM_AFF : 
#line 211 "dchop1.ch"
#line 211 "dchop1.ch"
        _Case265 : 
#line 211 "dchop1.ch"
#line 211 "dchop1.ch"
            ;
#line 211 "dchop1.ch"
#line 211 "dchop1.ch"
            ;
#line 211 "dchop1.ch"
#line 211 "dchop1.ch"
            goto _Case266 ;
            
#line 211 "dchop1.ch"
#line 212 "dchop1.ch"
        case cplus::PLU_AFF : 
#line 212 "dchop1.ch"
#line 212 "dchop1.ch"
        _Case266 : 
#line 212 "dchop1.ch"
#line 212 "dchop1.ch"
            ;
#line 212 "dchop1.ch"
#line 212 "dchop1.ch"
            ;
#line 212 "dchop1.ch"
#line 212 "dchop1.ch"
            goto _Case267 ;
            
#line 212 "dchop1.ch"
#line 213 "dchop1.ch"
        case cplus::MIN_AFF : 
#line 213 "dchop1.ch"
#line 213 "dchop1.ch"
        _Case267 : 
#line 213 "dchop1.ch"
#line 213 "dchop1.ch"
            ;
#line 213 "dchop1.ch"
#line 213 "dchop1.ch"
            ;
#line 213 "dchop1.ch"
#line 213 "dchop1.ch"
            goto _Case268 ;
            
#line 213 "dchop1.ch"
#line 214 "dchop1.ch"
        case cplus::LSH_AFF : 
#line 214 "dchop1.ch"
#line 214 "dchop1.ch"
        _Case268 : 
#line 214 "dchop1.ch"
#line 214 "dchop1.ch"
            ;
#line 214 "dchop1.ch"
#line 214 "dchop1.ch"
            ;
#line 214 "dchop1.ch"
#line 214 "dchop1.ch"
            goto _Case269 ;
            
#line 214 "dchop1.ch"
#line 215 "dchop1.ch"
        case cplus::RSH_AFF : 
#line 215 "dchop1.ch"
#line 215 "dchop1.ch"
        _Case269 : 
#line 215 "dchop1.ch"
#line 215 "dchop1.ch"
            ;
#line 215 "dchop1.ch"
#line 215 "dchop1.ch"
            ;
#line 215 "dchop1.ch"
#line 215 "dchop1.ch"
            goto _Case270 ;
            
#line 215 "dchop1.ch"
#line 216 "dchop1.ch"
        case cplus::AND_AFF : 
#line 216 "dchop1.ch"
#line 216 "dchop1.ch"
        _Case270 : 
#line 216 "dchop1.ch"
#line 216 "dchop1.ch"
            ;
#line 216 "dchop1.ch"
#line 216 "dchop1.ch"
            ;
#line 216 "dchop1.ch"
#line 216 "dchop1.ch"
            goto _Case271 ;
            
#line 216 "dchop1.ch"
#line 217 "dchop1.ch"
        case cplus::OR_AFF : 
#line 217 "dchop1.ch"
#line 217 "dchop1.ch"
        _Case271 : 
#line 217 "dchop1.ch"
#line 217 "dchop1.ch"
            ;
#line 217 "dchop1.ch"
#line 217 "dchop1.ch"
            ;
#line 217 "dchop1.ch"
#line 217 "dchop1.ch"
            goto _Case272 ;
            
#line 217 "dchop1.ch"
#line 218 "dchop1.ch"
        case cplus::XOR_AFF : 
#line 218 "dchop1.ch"
#line 218 "dchop1.ch"
        _Case272 : 
#line 218 "dchop1.ch"
#line 218 "dchop1.ch"
            ;
#line 218 "dchop1.ch"
#line 218 "dchop1.ch"
            ;
#line 218 "dchop1.ch"
#line 218 "dchop1.ch"
            goto _Case273 ;
            
#line 218 "dchop1.ch"
#line 218 "dchop1.ch"
        case cplus::COND_AFF : 
#line 218 "dchop1.ch"
#line 218 "dchop1.ch"
        _Case273 : 
#line 218 "dchop1.ch"
#line 218 "dchop1.ch"
            ;
#line 218 "dchop1.ch"
#line 218 "dchop1.ch"
            goto _Case274 ;
            
#line 218 "dchop1.ch"
#line 221 "dchop1.ch"
        case cplus::EXP_LIST : 
#line 221 "dchop1.ch"
#line 221 "dchop1.ch"
        _Case274 : 
#line 221 "dchop1.ch"
#line 221 "dchop1.ch"
            ;
#line 221 "dchop1.ch"
#line 221 "dchop1.ch"
            (treeOld=tree);
#line 221 "dchop1.ch"
            
#line 221 "dchop1.ch"
#line 222 "dchop1.ch"
            (tree=FatherTree(tree));
#line 222 "dchop1.ch"
            
#line 222 "dchop1.ch"
#line 223 "dchop1.ch"
            while ( tree ) {
#line 223 "dchop1.ch"
#line 224 "dchop1.ch"
                                switch ( NumberTree(tree) ) {
#line 224 "dchop1.ch"
#line 225 "dchop1.ch"
                                    case cplus::LABEL : 
#line 225 "dchop1.ch"
#line 225 "dchop1.ch"
                                    _Case282 : 
#line 225 "dchop1.ch"
#line 225 "dchop1.ch"
                                        ;
#line 225 "dchop1.ch"
#line 225 "dchop1.ch"
                                        return -1 ;
                                        
#line 225 "dchop1.ch"
#line 225 "dchop1.ch"
                                        goto _Case283 ;
                                        
#line 225 "dchop1.ch"
#line 226 "dchop1.ch"
                                    case cplus::DECLARATION : 
#line 226 "dchop1.ch"
#line 226 "dchop1.ch"
                                    _Case283 : 
#line 226 "dchop1.ch"
#line 226 "dchop1.ch"
                                        ;
#line 226 "dchop1.ch"
#line 226 "dchop1.ch"
                                        return 101 ;
                                        
#line 226 "dchop1.ch"
#line 226 "dchop1.ch"
                                        goto _Case284 ;
                                        
#line 226 "dchop1.ch"
#line 227 "dchop1.ch"
                                    case cplus::TYPEDEF : 
#line 227 "dchop1.ch"
#line 227 "dchop1.ch"
                                    _Case284 : 
#line 227 "dchop1.ch"
#line 227 "dchop1.ch"
                                        ;
#line 227 "dchop1.ch"
#line 227 "dchop1.ch"
                                        return 102 ;
                                        
#line 227 "dchop1.ch"
#line 227 "dchop1.ch"
                                        goto _Case285 ;
                                        
#line 227 "dchop1.ch"
#line 227 "dchop1.ch"
                                    case cplus::IF : 
#line 227 "dchop1.ch"
#line 227 "dchop1.ch"
                                    _Case285 : 
#line 227 "dchop1.ch"
#line 227 "dchop1.ch"
                                        ;
#line 227 "dchop1.ch"
#line 227 "dchop1.ch"
                                        goto _Case286 ;
                                        
#line 227 "dchop1.ch"
#line 227 "dchop1.ch"
                                    case cplus::WHILE : 
#line 227 "dchop1.ch"
#line 227 "dchop1.ch"
                                    _Case286 : 
#line 227 "dchop1.ch"
#line 227 "dchop1.ch"
                                        ;
#line 227 "dchop1.ch"
#line 227 "dchop1.ch"
                                        goto _Case287 ;
                                        
#line 227 "dchop1.ch"
#line 231 "dchop1.ch"
                                    case cplus::FOR : 
#line 231 "dchop1.ch"
#line 231 "dchop1.ch"
                                    _Case287 : 
#line 231 "dchop1.ch"
#line 231 "dchop1.ch"
                                        ;
#line 231 "dchop1.ch"
#line 231 "dchop1.ch"
                                        if ( ranktree(treeOld) != 1 ) 
#line 231 "dchop1.ch"
#line 232 "dchop1.ch"
                                            return 1 ;
                                        
#line 232 "dchop1.ch"
                                        else 
#line 232 "dchop1.ch"
#line 234 "dchop1.ch"
                                            return -1 ;
                                            
#line 234 "dchop1.ch"
                                        
#line 234 "dchop1.ch"
#line 234 "dchop1.ch"
                                        goto _Case288 ;
                                        
#line 234 "dchop1.ch"
#line 236 "dchop1.ch"
                                    case cplus::DO : 
#line 236 "dchop1.ch"
#line 236 "dchop1.ch"
                                    _Case288 : 
#line 236 "dchop1.ch"
#line 236 "dchop1.ch"
                                        ;
#line 236 "dchop1.ch"
#line 236 "dchop1.ch"
                                        if ( ranktree(treeOld) != 2 ) 
#line 236 "dchop1.ch"
#line 237 "dchop1.ch"
                                            return 4 ;
                                        
#line 237 "dchop1.ch"
                                        else 
#line 237 "dchop1.ch"
#line 239 "dchop1.ch"
                                            return -1 ;
                                            
#line 239 "dchop1.ch"
                                        
#line 239 "dchop1.ch"
#line 239 "dchop1.ch"
                                        goto _Case289 ;
                                        
#line 239 "dchop1.ch"
#line 240 "dchop1.ch"
                                    case cplus::BREAK : 
#line 240 "dchop1.ch"
#line 240 "dchop1.ch"
                                    _Case289 : 
#line 240 "dchop1.ch"
#line 240 "dchop1.ch"
                                        ;
#line 240 "dchop1.ch"
#line 240 "dchop1.ch"
                                        return 5 ;
                                        
#line 240 "dchop1.ch"
#line 240 "dchop1.ch"
                                        goto _Case290 ;
                                        
#line 240 "dchop1.ch"
#line 241 "dchop1.ch"
                                    case cplus::CONTINUE : 
#line 241 "dchop1.ch"
#line 241 "dchop1.ch"
                                    _Case290 : 
#line 241 "dchop1.ch"
#line 241 "dchop1.ch"
                                        ;
#line 241 "dchop1.ch"
#line 241 "dchop1.ch"
                                        return 6 ;
                                        
#line 241 "dchop1.ch"
#line 241 "dchop1.ch"
                                        goto _Case291 ;
                                        
#line 241 "dchop1.ch"
#line 242 "dchop1.ch"
                                    case cplus::COMPOUND : 
#line 242 "dchop1.ch"
#line 242 "dchop1.ch"
                                    _Case291 : 
#line 242 "dchop1.ch"
#line 242 "dchop1.ch"
                                        ;
#line 242 "dchop1.ch"
#line 242 "dchop1.ch"
                                        return 7 ;
                                        
#line 242 "dchop1.ch"
#line 242 "dchop1.ch"
                                        goto _Case292 ;
                                        
#line 242 "dchop1.ch"
#line 243 "dchop1.ch"
                                    case cplus::GOTO : 
#line 243 "dchop1.ch"
#line 243 "dchop1.ch"
                                    _Case292 : 
#line 243 "dchop1.ch"
#line 243 "dchop1.ch"
                                        ;
#line 243 "dchop1.ch"
#line 243 "dchop1.ch"
                                        return -1 ;
                                        
#line 243 "dchop1.ch"
#line 243 "dchop1.ch"
                                        goto _Case293 ;
                                        
#line 243 "dchop1.ch"
#line 244 "dchop1.ch"
                                    case cplus::STAT_VOID : 
#line 244 "dchop1.ch"
#line 244 "dchop1.ch"
                                    _Case293 : 
#line 244 "dchop1.ch"
#line 244 "dchop1.ch"
                                        ;
#line 244 "dchop1.ch"
#line 244 "dchop1.ch"
                                        return 9 ;
                                        
#line 244 "dchop1.ch"
#line 244 "dchop1.ch"
                                        goto _Case294 ;
                                        
#line 244 "dchop1.ch"
#line 245 "dchop1.ch"
                                    case cplus::RETURN : 
#line 245 "dchop1.ch"
#line 245 "dchop1.ch"
                                    _Case294 : 
#line 245 "dchop1.ch"
#line 245 "dchop1.ch"
                                        ;
#line 245 "dchop1.ch"
#line 245 "dchop1.ch"
                                        return -1 ;
                                        
#line 245 "dchop1.ch"
#line 245 "dchop1.ch"
                                        goto _Case295 ;
                                        
#line 245 "dchop1.ch"
#line 246 "dchop1.ch"
                                    case cplus::SWITCH : 
#line 246 "dchop1.ch"
#line 246 "dchop1.ch"
                                    _Case295 : 
#line 246 "dchop1.ch"
#line 246 "dchop1.ch"
                                        ;
#line 246 "dchop1.ch"
#line 246 "dchop1.ch"
                                        return -1 ;
                                        
#line 246 "dchop1.ch"
#line 246 "dchop1.ch"
                                        goto _Case296 ;
                                        
#line 246 "dchop1.ch"
#line 247 "dchop1.ch"
                                    case cplus::INCLUDE_DIR : 
#line 247 "dchop1.ch"
#line 247 "dchop1.ch"
                                    _Case296 : 
#line 247 "dchop1.ch"
#line 247 "dchop1.ch"
                                        ;
#line 247 "dchop1.ch"
#line 247 "dchop1.ch"
                                        return 14 ;
                                        
#line 247 "dchop1.ch"
#line 247 "dchop1.ch"
                                        goto _Case297 ;
                                        
#line 247 "dchop1.ch"
#line 249 "dchop1.ch"
                                    case cplus::IF_DIR : 
#line 249 "dchop1.ch"
#line 249 "dchop1.ch"
                                    _Case297 : 
#line 249 "dchop1.ch"
#line 249 "dchop1.ch"
                                        ;
#line 249 "dchop1.ch"
#line 249 "dchop1.ch"
                                        if ( ranktree(treeOld) != 1 ) 
#line 249 "dchop1.ch"
#line 250 "dchop1.ch"
                                            return 15 ;
                                        
#line 250 "dchop1.ch"
                                        else 
#line 250 "dchop1.ch"
#line 252 "dchop1.ch"
                                            return -1 ;
                                            
#line 252 "dchop1.ch"
                                        
#line 252 "dchop1.ch"
#line 252 "dchop1.ch"
                                        goto _Case298 ;
                                        
#line 252 "dchop1.ch"
#line 254 "dchop1.ch"
                                    case cplus::IFDEF_DIR : 
#line 254 "dchop1.ch"
#line 254 "dchop1.ch"
                                    _Case298 : 
#line 254 "dchop1.ch"
#line 254 "dchop1.ch"
                                        ;
#line 254 "dchop1.ch"
#line 254 "dchop1.ch"
                                        if ( ranktree(treeOld) != 1 ) 
#line 254 "dchop1.ch"
#line 255 "dchop1.ch"
                                            return 16 ;
                                        
#line 255 "dchop1.ch"
                                        else 
#line 255 "dchop1.ch"
#line 257 "dchop1.ch"
                                            return -1 ;
                                            
#line 257 "dchop1.ch"
                                        
#line 257 "dchop1.ch"
#line 257 "dchop1.ch"
                                        goto _Case299 ;
                                        
#line 257 "dchop1.ch"
#line 259 "dchop1.ch"
                                    case cplus::IFNDEF_DIR : 
#line 259 "dchop1.ch"
#line 259 "dchop1.ch"
                                    _Case299 : 
#line 259 "dchop1.ch"
#line 259 "dchop1.ch"
                                        ;
#line 259 "dchop1.ch"
#line 259 "dchop1.ch"
                                        if ( ranktree(treeOld) != 1 ) 
#line 259 "dchop1.ch"
#line 260 "dchop1.ch"
                                            return 17 ;
                                        
#line 260 "dchop1.ch"
                                        else 
#line 260 "dchop1.ch"
#line 262 "dchop1.ch"
                                            return -1 ;
                                            
#line 262 "dchop1.ch"
                                        
#line 262 "dchop1.ch"
#line 262 "dchop1.ch"
                                        goto _Case300 ;
                                        
#line 262 "dchop1.ch"
#line 263 "dchop1.ch"
                                    case cplus::NOT_MANAGED : 
#line 263 "dchop1.ch"
#line 263 "dchop1.ch"
                                    _Case300 : 
#line 263 "dchop1.ch"
#line 263 "dchop1.ch"
                                        ;
#line 263 "dchop1.ch"
#line 263 "dchop1.ch"
                                        return 17 ;
                                        
#line 263 "dchop1.ch"
#line 263 "dchop1.ch"
                                        goto _Case301 ;
                                        
#line 263 "dchop1.ch"
#line 264 "dchop1.ch"
                                    case cplus::NO_PRETTY : 
#line 264 "dchop1.ch"
#line 264 "dchop1.ch"
                                    _Case301 : 
#line 264 "dchop1.ch"
#line 264 "dchop1.ch"
                                        ;
#line 264 "dchop1.ch"
#line 264 "dchop1.ch"
                                        return 17 ;
                                        
#line 264 "dchop1.ch"
#line 264 "dchop1.ch"
                                        goto _Case302 ;
                                        
#line 264 "dchop1.ch"
#line 265 "dchop1.ch"
                                    case cplus::AFF : 
#line 265 "dchop1.ch"
#line 265 "dchop1.ch"
                                    _Case302 : 
#line 265 "dchop1.ch"
#line 265 "dchop1.ch"
                                        ;
#line 265 "dchop1.ch"
#line 265 "dchop1.ch"
                                        ;
#line 265 "dchop1.ch"
#line 265 "dchop1.ch"
                                        goto _Case303 ;
                                        
#line 265 "dchop1.ch"
#line 266 "dchop1.ch"
                                    case cplus::MUL_AFF : 
#line 266 "dchop1.ch"
#line 266 "dchop1.ch"
                                    _Case303 : 
#line 266 "dchop1.ch"
#line 266 "dchop1.ch"
                                        ;
#line 266 "dchop1.ch"
#line 266 "dchop1.ch"
                                        ;
#line 266 "dchop1.ch"
#line 266 "dchop1.ch"
                                        goto _Case304 ;
                                        
#line 266 "dchop1.ch"
#line 267 "dchop1.ch"
                                    case cplus::DIV_AFF : 
#line 267 "dchop1.ch"
#line 267 "dchop1.ch"
                                    _Case304 : 
#line 267 "dchop1.ch"
#line 267 "dchop1.ch"
                                        ;
#line 267 "dchop1.ch"
#line 267 "dchop1.ch"
                                        ;
#line 267 "dchop1.ch"
#line 267 "dchop1.ch"
                                        goto _Case305 ;
                                        
#line 267 "dchop1.ch"
#line 268 "dchop1.ch"
                                    case cplus::REM_AFF : 
#line 268 "dchop1.ch"
#line 268 "dchop1.ch"
                                    _Case305 : 
#line 268 "dchop1.ch"
#line 268 "dchop1.ch"
                                        ;
#line 268 "dchop1.ch"
#line 268 "dchop1.ch"
                                        ;
#line 268 "dchop1.ch"
#line 268 "dchop1.ch"
                                        goto _Case306 ;
                                        
#line 268 "dchop1.ch"
#line 269 "dchop1.ch"
                                    case cplus::PLU_AFF : 
#line 269 "dchop1.ch"
#line 269 "dchop1.ch"
                                    _Case306 : 
#line 269 "dchop1.ch"
#line 269 "dchop1.ch"
                                        ;
#line 269 "dchop1.ch"
#line 269 "dchop1.ch"
                                        ;
#line 269 "dchop1.ch"
#line 269 "dchop1.ch"
                                        goto _Case307 ;
                                        
#line 269 "dchop1.ch"
#line 270 "dchop1.ch"
                                    case cplus::MIN_AFF : 
#line 270 "dchop1.ch"
#line 270 "dchop1.ch"
                                    _Case307 : 
#line 270 "dchop1.ch"
#line 270 "dchop1.ch"
                                        ;
#line 270 "dchop1.ch"
#line 270 "dchop1.ch"
                                        ;
#line 270 "dchop1.ch"
#line 270 "dchop1.ch"
                                        goto _Case308 ;
                                        
#line 270 "dchop1.ch"
#line 271 "dchop1.ch"
                                    case cplus::LSH_AFF : 
#line 271 "dchop1.ch"
#line 271 "dchop1.ch"
                                    _Case308 : 
#line 271 "dchop1.ch"
#line 271 "dchop1.ch"
                                        ;
#line 271 "dchop1.ch"
#line 271 "dchop1.ch"
                                        ;
#line 271 "dchop1.ch"
#line 271 "dchop1.ch"
                                        goto _Case309 ;
                                        
#line 271 "dchop1.ch"
#line 272 "dchop1.ch"
                                    case cplus::RSH_AFF : 
#line 272 "dchop1.ch"
#line 272 "dchop1.ch"
                                    _Case309 : 
#line 272 "dchop1.ch"
#line 272 "dchop1.ch"
                                        ;
#line 272 "dchop1.ch"
#line 272 "dchop1.ch"
                                        ;
#line 272 "dchop1.ch"
#line 272 "dchop1.ch"
                                        goto _Case310 ;
                                        
#line 272 "dchop1.ch"
#line 273 "dchop1.ch"
                                    case cplus::AND_AFF : 
#line 273 "dchop1.ch"
#line 273 "dchop1.ch"
                                    _Case310 : 
#line 273 "dchop1.ch"
#line 273 "dchop1.ch"
                                        ;
#line 273 "dchop1.ch"
#line 273 "dchop1.ch"
                                        ;
#line 273 "dchop1.ch"
#line 273 "dchop1.ch"
                                        goto _Case311 ;
                                        
#line 273 "dchop1.ch"
#line 274 "dchop1.ch"
                                    case cplus::OR_AFF : 
#line 274 "dchop1.ch"
#line 274 "dchop1.ch"
                                    _Case311 : 
#line 274 "dchop1.ch"
#line 274 "dchop1.ch"
                                        ;
#line 274 "dchop1.ch"
#line 274 "dchop1.ch"
                                        ;
#line 274 "dchop1.ch"
#line 274 "dchop1.ch"
                                        goto _Case312 ;
                                        
#line 274 "dchop1.ch"
#line 275 "dchop1.ch"
                                    case cplus::XOR_AFF : 
#line 275 "dchop1.ch"
#line 275 "dchop1.ch"
                                    _Case312 : 
#line 275 "dchop1.ch"
#line 275 "dchop1.ch"
                                        ;
#line 275 "dchop1.ch"
#line 275 "dchop1.ch"
                                        ;
#line 275 "dchop1.ch"
#line 275 "dchop1.ch"
                                        goto _Case313 ;
                                        
#line 275 "dchop1.ch"
#line 275 "dchop1.ch"
                                    case cplus::COND_AFF : 
#line 275 "dchop1.ch"
#line 275 "dchop1.ch"
                                    _Case313 : 
#line 275 "dchop1.ch"
#line 275 "dchop1.ch"
                                        ;
#line 275 "dchop1.ch"
#line 275 "dchop1.ch"
                                        goto _Case314 ;
                                        
#line 275 "dchop1.ch"
#line 277 "dchop1.ch"
                                    case cplus::EXP_LIST : 
#line 277 "dchop1.ch"
#line 277 "dchop1.ch"
                                    _Case314 : 
#line 277 "dchop1.ch"
#line 277 "dchop1.ch"
                                        ;
#line 277 "dchop1.ch"
#line 277 "dchop1.ch"
                                        return -1 ;
                                        
#line 277 "dchop1.ch"
#line 277 "dchop1.ch"
                                        goto _Case315 ;
                                        
#line 277 "dchop1.ch"
#line 279 "dchop1.ch"
                                    default : 
#line 279 "dchop1.ch"
#line 279 "dchop1.ch"
                                    _Case315 : 
#line 279 "dchop1.ch"
#line 279 "dchop1.ch"
                                        ;
#line 279 "dchop1.ch"
#line 279 "dchop1.ch"
                                        (treeOld=tree);
#line 279 "dchop1.ch"
                                        
#line 279 "dchop1.ch"
#line 280 "dchop1.ch"
                                        (tree=FatherTree(tree));
#line 280 "dchop1.ch"
                                        
#line 280 "dchop1.ch"
                                }
#line 280 "dchop1.ch"
                                
#line 280 "dchop1.ch"
#line 282 "dchop1.ch"
                                
#line 282 "dchop1.ch"
#line 282 "dchop1.ch"
                            }
#line 282 "dchop1.ch"
#line 283 "dchop1.ch"
            if ( internal || IsTop(FatherTree(tree), 1) == -1 ) 
#line 283 "dchop1.ch"
#line 284 "dchop1.ch"
                return 19 ;
            
#line 284 "dchop1.ch"
            else 
#line 284 "dchop1.ch"
#line 286 "dchop1.ch"
                return -1 ;
                
#line 286 "dchop1.ch"
            
#line 286 "dchop1.ch"
#line 286 "dchop1.ch"
            goto _Case275 ;
            
#line 286 "dchop1.ch"
#line 286 "dchop1.ch"
        case LIST : 
#line 286 "dchop1.ch"
#line 286 "dchop1.ch"
        _Case275 : 
#line 286 "dchop1.ch"
#line 286 "dchop1.ch"
            ;
#line 286 "dchop1.ch"
#line 286 "dchop1.ch"
            goto _Case276 ;
            
#line 286 "dchop1.ch"
#line 288 "dchop1.ch"
        case cplus::ATTRIBUTS : 
#line 288 "dchop1.ch"
#line 288 "dchop1.ch"
        _Case276 : 
#line 288 "dchop1.ch"
#line 288 "dchop1.ch"
            ;
#line 288 "dchop1.ch"
#line 288 "dchop1.ch"
            return -1 ;
            
#line 288 "dchop1.ch"
#line 288 "dchop1.ch"
            goto _Case277 ;
            
#line 288 "dchop1.ch"
#line 289 "dchop1.ch"
        case cplus::EXCEPTION_ANSI : 
#line 289 "dchop1.ch"
#line 289 "dchop1.ch"
        _Case277 : 
#line 289 "dchop1.ch"
#line 289 "dchop1.ch"
            ;
#line 289 "dchop1.ch"
#line 289 "dchop1.ch"
            return 31 ;
            
#line 289 "dchop1.ch"
#line 289 "dchop1.ch"
            goto _Case278 ;
            
#line 289 "dchop1.ch"
#line 290 "dchop1.ch"
        case cplus::CATCH_ANSI : 
#line 290 "dchop1.ch"
#line 290 "dchop1.ch"
        _Case278 : 
#line 290 "dchop1.ch"
#line 290 "dchop1.ch"
            ;
#line 290 "dchop1.ch"
#line 290 "dchop1.ch"
            return 32 ;
            
#line 290 "dchop1.ch"
#line 290 "dchop1.ch"
            goto _Case279 ;
            
#line 290 "dchop1.ch"
#line 291 "dchop1.ch"
        case cplus::THROW_ANSI : 
#line 291 "dchop1.ch"
#line 291 "dchop1.ch"
        _Case279 : 
#line 291 "dchop1.ch"
#line 291 "dchop1.ch"
            ;
#line 291 "dchop1.ch"
#line 291 "dchop1.ch"
            return 33 ;
            
#line 291 "dchop1.ch"
#line 291 "dchop1.ch"
            goto _Case280 ;
            
#line 291 "dchop1.ch"
#line 292 "dchop1.ch"
        case cplus::NONE : 
#line 292 "dchop1.ch"
#line 292 "dchop1.ch"
        _Case280 : 
#line 292 "dchop1.ch"
#line 292 "dchop1.ch"
            ;
#line 292 "dchop1.ch"
#line 292 "dchop1.ch"
            return 34 ;
            
#line 292 "dchop1.ch"
#line 292 "dchop1.ch"
            goto _Case281 ;
            
#line 292 "dchop1.ch"
#line 296 "dchop1.ch"
        default : 
#line 296 "dchop1.ch"
#line 296 "dchop1.ch"
        _Case281 : 
#line 296 "dchop1.ch"
#line 296 "dchop1.ch"
            ;
#line 296 "dchop1.ch"
#line 296 "dchop1.ch"
            return -1 ;
            
#line 296 "dchop1.ch"
    }
#line 296 "dchop1.ch"
    
#line 296 "dchop1.ch"
#line 298 "dchop1.ch"
    
#line 298 "dchop1.ch"
#line 298 "dchop1.ch"
}
#line 298 "dchop1.ch"

#line 302 "dchop1.ch"

#line 302 "dchop1.ch"
void DecompCplus::Treat ( PTREE tree )
#line 302 "dchop1.ch"
{
#line 302 "dchop1.ch"
    register PPTREE _inter ;
#line 302 "dchop1.ch"

#line 302 "dchop1.ch"
#line 302 "dchop1.ch"
    int _nextVal ;
    
#line 302 "dchop1.ch"
#line 305 "dchop1.ch"
    int oldNbTab = nbTab ;
    
#line 305 "dchop1.ch"
#line 306 "dchop1.ch"
    int x, y, dx, dy ;
    
#line 306 "dchop1.ch"
#line 307 "dchop1.ch"
    int x0, y0 ;
    
#line 307 "dchop1.ch"
#line 310 "dchop1.ch"
    DecompVirt(tree);
#line 310 "dchop1.ch"
#line 311 "dchop1.ch"
    CompleteCoordinates(tree);
#line 311 "dchop1.ch"
#line 312 "dchop1.ch"
    if ( ((_inter = (PPTREE)tree,1) && 
#line 312 "dchop1.ch"
            (NumberTree(_inter) == cplus::ATTRIBUTS) &&
#line 312 "dchop1.ch"
            1) ) 
#line 312 "dchop1.ch"
#line 313 "dchop1.ch"
        FreeCoord(tree);
#line 313 "dchop1.ch"
#line 316 "dchop1.ch"
    {
#line 316 "dchop1.ch"
#line 317 "dchop1.ch"
        ItPtree it (tree) ;
        
#line 317 "dchop1.ch"
#line 318 "dchop1.ch"
        PPTREE  _for_elem ;
        
#line 318 "dchop1.ch"
#line 319 "dchop1.ch"
        while ( (for_elem = it++) ) {
#line 319 "dchop1.ch"
#line 320 "dchop1.ch"
                                        switch ( NumberTree(for_elem) ) {
#line 320 "dchop1.ch"
#line 322 "dchop1.ch"
                                            case cplus::DECLARATION : 
#line 322 "dchop1.ch"
#line 322 "dchop1.ch"
                                            _Case328 : 
#line 322 "dchop1.ch"
#line 322 "dchop1.ch"
                                                ;
#line 322 "dchop1.ch"
#line 322 "dchop1.ch"
                                                TraiterAlignTypeDecl(for_elem);
#line 322 "dchop1.ch"
#line 323 "dchop1.ch"
                                                break ;
                                                
#line 323 "dchop1.ch"
#line 323 "dchop1.ch"
                                            case cplus::AFF : 
#line 323 "dchop1.ch"
#line 323 "dchop1.ch"
                                            _Case329 : 
#line 323 "dchop1.ch"
#line 323 "dchop1.ch"
                                                ;
#line 323 "dchop1.ch"
#line 323 "dchop1.ch"
                                                goto _Case330 ;
                                                
#line 323 "dchop1.ch"
#line 323 "dchop1.ch"
                                            case cplus::MUL_AFF : 
#line 323 "dchop1.ch"
#line 323 "dchop1.ch"
                                            _Case330 : 
#line 323 "dchop1.ch"
#line 323 "dchop1.ch"
                                                ;
#line 323 "dchop1.ch"
#line 323 "dchop1.ch"
                                                goto _Case331 ;
                                                
#line 323 "dchop1.ch"
#line 323 "dchop1.ch"
                                            case cplus::DIV_AFF : 
#line 323 "dchop1.ch"
#line 323 "dchop1.ch"
                                            _Case331 : 
#line 323 "dchop1.ch"
#line 323 "dchop1.ch"
                                                ;
#line 323 "dchop1.ch"
#line 323 "dchop1.ch"
                                                goto _Case332 ;
                                                
#line 323 "dchop1.ch"
#line 323 "dchop1.ch"
                                            case cplus::REM_AFF : 
#line 323 "dchop1.ch"
#line 323 "dchop1.ch"
                                            _Case332 : 
#line 323 "dchop1.ch"
#line 323 "dchop1.ch"
                                                ;
#line 323 "dchop1.ch"
#line 323 "dchop1.ch"
                                                goto _Case333 ;
                                                
#line 323 "dchop1.ch"
#line 323 "dchop1.ch"
                                            case cplus::MIN_AFF : 
#line 323 "dchop1.ch"
#line 323 "dchop1.ch"
                                            _Case333 : 
#line 323 "dchop1.ch"
#line 323 "dchop1.ch"
                                                ;
#line 323 "dchop1.ch"
#line 323 "dchop1.ch"
                                                goto _Case334 ;
                                                
#line 323 "dchop1.ch"
#line 323 "dchop1.ch"
                                            case cplus::PLU_AFF : 
#line 323 "dchop1.ch"
#line 323 "dchop1.ch"
                                            _Case334 : 
#line 323 "dchop1.ch"
#line 323 "dchop1.ch"
                                                ;
#line 323 "dchop1.ch"
#line 323 "dchop1.ch"
                                                goto _Case335 ;
                                                
#line 323 "dchop1.ch"
#line 323 "dchop1.ch"
                                            case cplus::LSH_AFF : 
#line 323 "dchop1.ch"
#line 323 "dchop1.ch"
                                            _Case335 : 
#line 323 "dchop1.ch"
#line 323 "dchop1.ch"
                                                ;
#line 323 "dchop1.ch"
#line 323 "dchop1.ch"
                                                goto _Case336 ;
                                                
#line 323 "dchop1.ch"
#line 323 "dchop1.ch"
                                            case cplus::RSH_AFF : 
#line 323 "dchop1.ch"
#line 323 "dchop1.ch"
                                            _Case336 : 
#line 323 "dchop1.ch"
#line 323 "dchop1.ch"
                                                ;
#line 323 "dchop1.ch"
#line 323 "dchop1.ch"
                                                goto _Case337 ;
                                                
#line 323 "dchop1.ch"
#line 323 "dchop1.ch"
                                            case cplus::AND_AFF : 
#line 323 "dchop1.ch"
#line 323 "dchop1.ch"
                                            _Case337 : 
#line 323 "dchop1.ch"
#line 323 "dchop1.ch"
                                                ;
#line 323 "dchop1.ch"
#line 323 "dchop1.ch"
                                                goto _Case338 ;
                                                
#line 323 "dchop1.ch"
#line 323 "dchop1.ch"
                                            case cplus::OR_AFF : 
#line 323 "dchop1.ch"
#line 323 "dchop1.ch"
                                            _Case338 : 
#line 323 "dchop1.ch"
#line 323 "dchop1.ch"
                                                ;
#line 323 "dchop1.ch"
#line 323 "dchop1.ch"
                                                goto _Case339 ;
                                                
#line 323 "dchop1.ch"
#line 335 "dchop1.ch"
                                            case cplus::XOR_AFF : 
#line 335 "dchop1.ch"
#line 335 "dchop1.ch"
                                            _Case339 : 
#line 335 "dchop1.ch"
#line 335 "dchop1.ch"
                                                ;
#line 335 "dchop1.ch"
#line 335 "dchop1.ch"
                                                TraiterAlignAff(for_elem);
#line 335 "dchop1.ch"
#line 336 "dchop1.ch"
                                                it.SkipSon(1);
#line 336 "dchop1.ch"
#line 337 "dchop1.ch"
                                                break ;
                                                
#line 337 "dchop1.ch"
                                        }
#line 337 "dchop1.ch"
                                        
#line 337 "dchop1.ch"
#line 339 "dchop1.ch"
                                        
#line 339 "dchop1.ch"
#line 339 "dchop1.ch"
                                       }
#line 339 "dchop1.ch"
#line 340 "dchop1.ch"
        
#line 340 "dchop1.ch"
#line 340 "dchop1.ch"
    }
    
#line 340 "dchop1.ch"
#line 343 "dchop1.ch"
    TraiterSequence(tree);
#line 343 "dchop1.ch"
#line 346 "dchop1.ch"
    nbTab = 0 ;
#line 346 "dchop1.ch"
#line 347 "dchop1.ch"
    if ( FatherTree(tree) ) {
#line 347 "dchop1.ch"
#line 348 "dchop1.ch"
                                GetCoord(tree, &x, &y, &dx, &dy);
#line 348 "dchop1.ch"
#line 349 "dchop1.ch"
                                TreatGeometry(tree, -x + 3);
#line 349 "dchop1.ch"
#line 350 "dchop1.ch"
                                
#line 350 "dchop1.ch"
#line 350 "dchop1.ch"
                             } else 
#line 350 "dchop1.ch"
#line 351 "dchop1.ch"
        TreatGeometry(tree, 0);
#line 351 "dchop1.ch"
    
#line 351 "dchop1.ch"
#line 354 "dchop1.ch"
    nbTab = oldNbTab ;
#line 354 "dchop1.ch"
#line 356 "dchop1.ch"
    {
#line 356 "dchop1.ch"
#line 356 "dchop1.ch"
        PTREE   _Baum0 ;
#line 356 "dchop1.ch"
        
#line 356 "dchop1.ch"
#line 356 "dchop1.ch"
        {
#line 356 "dchop1.ch"
            PPTREE _ptTree0= (PPTREE) 0,_ptRes0= (PPTREE) 0;
#line 356 "dchop1.ch"
            _ptRes0 = MakeTree(cplus::DECLARATION, 0);
#line 356 "dchop1.ch"
            _Baum0 = _ptRes0;
#line 356 "dchop1.ch"
        }
#line 356 "dchop1.ch"
        
#line 356 "dchop1.ch"
#line 356 "dchop1.ch"
        ItPtree it(tree, _Baum0);
        
#line 356 "dchop1.ch"
#line 357 "dchop1.ch"
        PPTREE  _for_elem ;
        
#line 357 "dchop1.ch"
#line 358 "dchop1.ch"
        while ( (for_elem = it++) ) {
#line 358 "dchop1.ch"
#line 359 "dchop1.ch"
                                        TraiterListDeclaration(for_elem);
#line 359 "dchop1.ch"
#line 360 "dchop1.ch"
                                        
#line 360 "dchop1.ch"
#line 360 "dchop1.ch"
                                       }
#line 360 "dchop1.ch"
#line 361 "dchop1.ch"
        
#line 361 "dchop1.ch"
#line 361 "dchop1.ch"
    }
    
#line 361 "dchop1.ch"
#line 363 "dchop1.ch"
    {
#line 363 "dchop1.ch"
#line 363 "dchop1.ch"
        PTREE   _Baum1 ;
#line 363 "dchop1.ch"
        
#line 363 "dchop1.ch"
#line 363 "dchop1.ch"
        {
#line 363 "dchop1.ch"
            PPTREE _ptTree0= (PPTREE) 0,_ptRes0= (PPTREE) 0;
#line 363 "dchop1.ch"
            _ptRes0 = MakeTree(cplus::ENUM, 0);
#line 363 "dchop1.ch"
            _Baum1 = _ptRes0;
#line 363 "dchop1.ch"
        }
#line 363 "dchop1.ch"
        
#line 363 "dchop1.ch"
#line 363 "dchop1.ch"
        ItPtree it(tree, _Baum1);
        
#line 363 "dchop1.ch"
#line 364 "dchop1.ch"
        PPTREE  _for_elem ;
        
#line 364 "dchop1.ch"
#line 365 "dchop1.ch"
        while ( (for_elem = it++) ) {
#line 365 "dchop1.ch"
#line 366 "dchop1.ch"
                                        PTREE   elem = (PTREE)0 ;
#line 366 "dchop1.ch"
                                        
#line 366 "dchop1.ch"
#line 366 "dchop1.ch"
                                        (elem=for_elem);
#line 366 "dchop1.ch"
                                        
#line 366 "dchop1.ch"
#line 367 "dchop1.ch"
                                        (elem=elem [2]);
#line 367 "dchop1.ch"
                                        
#line 367 "dchop1.ch"
#line 368 "dchop1.ch"
                                        TraiterDeclAlignEnum(elem);
#line 368 "dchop1.ch"
#line 369 "dchop1.ch"
                                        
#line 369 "dchop1.ch"
#line 369 "dchop1.ch"
                                       }
#line 369 "dchop1.ch"
#line 370 "dchop1.ch"
        
#line 370 "dchop1.ch"
#line 370 "dchop1.ch"
    }
    
#line 370 "dchop1.ch"
#line 372 "dchop1.ch"
    {
#line 372 "dchop1.ch"
#line 372 "dchop1.ch"
        PTREE   _Baum2 ;
#line 372 "dchop1.ch"
        
#line 372 "dchop1.ch"
#line 372 "dchop1.ch"
        PTREE   elem, param, stat ;
#line 372 "dchop1.ch"
        
#line 372 "dchop1.ch"
#line 373 "dchop1.ch"
        {
#line 373 "dchop1.ch"
            PPTREE _ptTree0= (PPTREE) 0,_ptRes0= (PPTREE) 0;
#line 373 "dchop1.ch"
            _ptRes0 = MakeTree(cplus::FUNC, 0);
#line 373 "dchop1.ch"
            _Baum2 = _ptRes0;
#line 373 "dchop1.ch"
        }
#line 373 "dchop1.ch"
        
#line 373 "dchop1.ch"
#line 373 "dchop1.ch"
        {
#line 373 "dchop1.ch"
#line 373 "dchop1.ch"
            ItPtree _iterator1 (tree, _Baum2) ;
            
#line 373 "dchop1.ch"
#line 373 "dchop1.ch"
            PPTREE  _for_elem ;
            
#line 373 "dchop1.ch"
#line 373 "dchop1.ch"
            _iterator1.AllSearch(1);
#line 373 "dchop1.ch"
#line 373 "dchop1.ch"
            while ( _for_elem = _iterator1++ ) {
#line 373 "dchop1.ch"
#line 373 "dchop1.ch"
                {
#line 373 "dchop1.ch"
#line 374 "dchop1.ch"
                    (elem=for_elem);
#line 374 "dchop1.ch"
                    
#line 374 "dchop1.ch"
#line 375 "dchop1.ch"
                    if ( ((_inter = (PPTREE)elem,1) && 
#line 375 "dchop1.ch"
                            (NumberTree(_inter) == cplus::FUNC) &&
#line 375 "dchop1.ch"
                            ((param=SonTree(_inter,4)),1) &&
#line 375 "dchop1.ch"
                            ((stat=SonTree(_inter,8)),1) &&
#line 375 "dchop1.ch"
                            1) && !((!stat)) ) {
#line 375 "dchop1.ch"
#line 376 "dchop1.ch"
                                                    TraiterListDeclarator(param);
#line 376 "dchop1.ch"
#line 377 "dchop1.ch"
                                                    
#line 377 "dchop1.ch"
#line 377 "dchop1.ch"
                                                 }
#line 377 "dchop1.ch"
#line 378 "dchop1.ch"
                    
#line 378 "dchop1.ch"
#line 378 "dchop1.ch"
                }
                
#line 378 "dchop1.ch"
#line 378 "dchop1.ch"
                _iterator1.Current(_for_elem);
#line 378 "dchop1.ch"
#line 378 "dchop1.ch"
                continue ;
                
#line 378 "dchop1.ch"
#line 378 "dchop1.ch"
            for_continue1 : 
#line 378 "dchop1.ch"
#line 378 "dchop1.ch"
                _iterator1.Current(_for_elem);
#line 378 "dchop1.ch"
#line 378 "dchop1.ch"
                _iterator1.SkipSon(1);
#line 378 "dchop1.ch"
#line 378 "dchop1.ch"
                continue ;
                
#line 378 "dchop1.ch"
#line 378 "dchop1.ch"
            for_break1 : 
#line 378 "dchop1.ch"
#line 378 "dchop1.ch"
                break ;
                
#line 378 "dchop1.ch"
#line 378 "dchop1.ch"
                
#line 378 "dchop1.ch"
#line 378 "dchop1.ch"
            }
#line 378 "dchop1.ch"
#line 378 "dchop1.ch"
            
#line 378 "dchop1.ch"
#line 378 "dchop1.ch"
        }
        
#line 378 "dchop1.ch"
#line 379 "dchop1.ch"
        
#line 379 "dchop1.ch"
#line 379 "dchop1.ch"
    }
    
#line 379 "dchop1.ch"
#line 380 "dchop1.ch"
    
#line 380 "dchop1.ch"
#line 380 "dchop1.ch"
}
#line 380 "dchop1.ch"

#line 385 "dchop1.ch"

#line 385 "dchop1.ch"
int DecompCplus::TreatGeometrySpecific ( PTREE tree, int x0, int x )
#line 385 "dchop1.ch"
{
#line 385 "dchop1.ch"
    register PPTREE _inter ;
#line 385 "dchop1.ch"

#line 385 "dchop1.ch"
#line 385 "dchop1.ch"
    int _nextVal ;
    
#line 385 "dchop1.ch"
#line 388 "dchop1.ch"
    PTREE   tree1, tree2, cond ;
#line 388 "dchop1.ch"
    
#line 388 "dchop1.ch"
#line 391 "dchop1.ch"
    switch ( NumberTree(tree) ) {
#line 391 "dchop1.ch"
#line 396 "dchop1.ch"
        case cplus::FUNC : 
#line 396 "dchop1.ch"
#line 396 "dchop1.ch"
            (tree1=SonTree(tree, 4));
#line 396 "dchop1.ch"
            
#line 396 "dchop1.ch"
#line 396 "dchop1.ch"
            (tree2=SonTree(tree, 7));
#line 396 "dchop1.ch"
            
#line 396 "dchop1.ch"
#line 396 "dchop1.ch"
        _Case352 : 
#line 396 "dchop1.ch"
#line 396 "dchop1.ch"
            ;
#line 396 "dchop1.ch"
#line 396 "dchop1.ch"
            if ( tree1 && !IsVerticalDecl(tree1) ) 
#line 396 "dchop1.ch"
#line 397 "dchop1.ch"
                TraiterExpListParam(tree1, x0 + x);
#line 397 "dchop1.ch"
#line 400 "dchop1.ch"
            if ( tree2 ) 
#line 400 "dchop1.ch"
#line 401 "dchop1.ch"
                TraiterExpList(tree2, x0 + x);
#line 401 "dchop1.ch"
#line 402 "dchop1.ch"
            break ;
            
#line 402 "dchop1.ch"
#line 404 "dchop1.ch"
        case cplus::IF_DIR : 
#line 404 "dchop1.ch"
#line 404 "dchop1.ch"
            (cond=SonTree(tree, 1));
#line 404 "dchop1.ch"
            
#line 404 "dchop1.ch"
#line 404 "dchop1.ch"
            (tree1=SonTree(tree, 2));
#line 404 "dchop1.ch"
            
#line 404 "dchop1.ch"
#line 404 "dchop1.ch"
            (tree2=SonTree(tree, 3));
#line 404 "dchop1.ch"
            
#line 404 "dchop1.ch"
#line 404 "dchop1.ch"
        _Case353 : 
#line 404 "dchop1.ch"
#line 404 "dchop1.ch"
            ;
#line 404 "dchop1.ch"
#line 404 "dchop1.ch"
            {
#line 404 "dchop1.ch"
#line 405 "dchop1.ch"
                int x, y, dx, posMark ;
                
#line 405 "dchop1.ch"
#line 406 "dchop1.ch"
                TreatGeometry(tree1, 0);
#line 406 "dchop1.ch"
#line 407 "dchop1.ch"
                TreatGeometry(tree2, 0);
#line 407 "dchop1.ch"
#line 410 "dchop1.ch"
                GetCoord(cond, &x, &y, &dx, &posMark);
#line 410 "dchop1.ch"
#line 411 "dchop1.ch"
                PutCoord(cond, x, y, 10, posMark);
#line 411 "dchop1.ch"
#line 412 "dchop1.ch"
                
#line 412 "dchop1.ch"
#line 412 "dchop1.ch"
            }
            
#line 412 "dchop1.ch"
#line 413 "dchop1.ch"
            break ;
            
#line 413 "dchop1.ch"
#line 413 "dchop1.ch"
        case cplus::EXP_ARRAY : 
#line 413 "dchop1.ch"
#line 413 "dchop1.ch"
            (tree2=SonTree(tree, 2));
#line 413 "dchop1.ch"
            
#line 413 "dchop1.ch"
#line 413 "dchop1.ch"
        _Case354 : 
#line 413 "dchop1.ch"
#line 413 "dchop1.ch"
            ;
#line 413 "dchop1.ch"
#line 413 "dchop1.ch"
            goto _Case355 ;
            
#line 413 "dchop1.ch"
#line 416 "dchop1.ch"
        case cplus::EXP_LIST : 
#line 416 "dchop1.ch"
#line 416 "dchop1.ch"
            (tree2=SonTree(tree, 2));
#line 416 "dchop1.ch"
            
#line 416 "dchop1.ch"
#line 416 "dchop1.ch"
        _Case355 : 
#line 416 "dchop1.ch"
#line 416 "dchop1.ch"
            ;
#line 416 "dchop1.ch"
#line 416 "dchop1.ch"
            if ( ((_inter = (PPTREE)tree2,1) && 
#line 416 "dchop1.ch"
                    (NumberTree(_inter) == cplus::EXP_SEQ) &&
#line 416 "dchop1.ch"
                    1) ) 
#line 416 "dchop1.ch"
#line 417 "dchop1.ch"
                TraiterExpListParam(tree2, x0 + x);
#line 417 "dchop1.ch"
            else 
#line 417 "dchop1.ch"
#line 419 "dchop1.ch"
                TraiterMonoParam(tree2, x0 + x);
#line 419 "dchop1.ch"
            
#line 419 "dchop1.ch"
#line 420 "dchop1.ch"
            break ;
            
#line 420 "dchop1.ch"
#line 422 "dchop1.ch"
        case cplus::ASM : 
#line 422 "dchop1.ch"
#line 422 "dchop1.ch"
            (tree2=SonTree(tree, 1));
#line 422 "dchop1.ch"
            
#line 422 "dchop1.ch"
#line 422 "dchop1.ch"
        _Case356 : 
#line 422 "dchop1.ch"
#line 422 "dchop1.ch"
            ;
#line 422 "dchop1.ch"
#line 422 "dchop1.ch"
            TraiterMonoParam(tree2, x0 + x);
#line 422 "dchop1.ch"
#line 423 "dchop1.ch"
            break ;
            
#line 423 "dchop1.ch"
#line 423 "dchop1.ch"
        case cplus::TYP_LIST : 
#line 423 "dchop1.ch"
#line 423 "dchop1.ch"
            (tree2=SonTree(tree, 2));
#line 423 "dchop1.ch"
            
#line 423 "dchop1.ch"
#line 423 "dchop1.ch"
        _Case357 : 
#line 423 "dchop1.ch"
#line 423 "dchop1.ch"
            ;
#line 423 "dchop1.ch"
#line 423 "dchop1.ch"
            goto _Case358 ;
            
#line 423 "dchop1.ch"
#line 426 "dchop1.ch"
        case cplus::PARAM_TYPE : 
#line 426 "dchop1.ch"
#line 426 "dchop1.ch"
            (tree2=SonTree(tree, 2));
#line 426 "dchop1.ch"
            
#line 426 "dchop1.ch"
#line 426 "dchop1.ch"
        _Case358 : 
#line 426 "dchop1.ch"
#line 426 "dchop1.ch"
            ;
#line 426 "dchop1.ch"
#line 426 "dchop1.ch"
            TraiterExpListParam(tree2, x0 + x);
#line 426 "dchop1.ch"
#line 427 "dchop1.ch"
            break ;
            
#line 427 "dchop1.ch"
#line 427 "dchop1.ch"
        case cplus::DECLARATION : 
#line 427 "dchop1.ch"
#line 427 "dchop1.ch"
            (tree2=SonTree(tree, 3));
#line 427 "dchop1.ch"
            
#line 427 "dchop1.ch"
#line 427 "dchop1.ch"
        _Case359 : 
#line 427 "dchop1.ch"
#line 427 "dchop1.ch"
            ;
#line 427 "dchop1.ch"
#line 427 "dchop1.ch"
            goto _Case360 ;
            
#line 427 "dchop1.ch"
#line 430 "dchop1.ch"
        case cplus::ENUM : 
#line 430 "dchop1.ch"
#line 430 "dchop1.ch"
            (tree2=SonTree(tree, 2));
#line 430 "dchop1.ch"
            
#line 430 "dchop1.ch"
#line 430 "dchop1.ch"
        _Case360 : 
#line 430 "dchop1.ch"
#line 430 "dchop1.ch"
            ;
#line 430 "dchop1.ch"
#line 430 "dchop1.ch"
            if ( ((_inter = (PPTREE)tree2,1) && 
#line 430 "dchop1.ch"
                    (NumberTree(_inter) == LIST) &&
#line 430 "dchop1.ch"
                    1) ) 
#line 430 "dchop1.ch"
#line 431 "dchop1.ch"
                TraiterExpList(tree2, x0 + x);
#line 431 "dchop1.ch"
#line 432 "dchop1.ch"
            break ;
            
#line 432 "dchop1.ch"
#line 434 "dchop1.ch"
        case cplus::NEW : 
#line 434 "dchop1.ch"
#line 434 "dchop1.ch"
            (tree2=SonTree(tree, 3));
#line 434 "dchop1.ch"
            
#line 434 "dchop1.ch"
#line 434 "dchop1.ch"
        _Case361 : 
#line 434 "dchop1.ch"
#line 434 "dchop1.ch"
            ;
#line 434 "dchop1.ch"
#line 434 "dchop1.ch"
            if ( tree2 ) 
#line 434 "dchop1.ch"
#line 435 "dchop1.ch"
                TraiterExpListParam(tree2, x0 + x);
#line 435 "dchop1.ch"
#line 436 "dchop1.ch"
            break ;
            
#line 436 "dchop1.ch"
#line 438 "dchop1.ch"
        case cplus::FOR : 
#line 438 "dchop1.ch"
#line 438 "dchop1.ch"
        _Case362 : 
#line 438 "dchop1.ch"
#line 438 "dchop1.ch"
            ;
#line 438 "dchop1.ch"
#line 438 "dchop1.ch"
            TraiterForDeclaration(tree, x0);
#line 438 "dchop1.ch"
#line 439 "dchop1.ch"
            break ;
            
#line 439 "dchop1.ch"
#line 441 "dchop1.ch"
        default : 
#line 441 "dchop1.ch"
#line 441 "dchop1.ch"
        _Case363 : 
#line 441 "dchop1.ch"
#line 441 "dchop1.ch"
            ;
#line 441 "dchop1.ch"
#line 441 "dchop1.ch"
            {
#line 441 "dchop1.ch"
#line 442 "dchop1.ch"
                return 0 ;
                
#line 442 "dchop1.ch"
#line 443 "dchop1.ch"
                
#line 443 "dchop1.ch"
#line 443 "dchop1.ch"
            }
            
#line 443 "dchop1.ch"
    }
#line 443 "dchop1.ch"
    
#line 443 "dchop1.ch"
#line 445 "dchop1.ch"
    return 1 ;
    
#line 445 "dchop1.ch"
#line 446 "dchop1.ch"
    
#line 446 "dchop1.ch"
#line 446 "dchop1.ch"
}
#line 446 "dchop1.ch"

#line 450 "dchop1.ch"

#line 450 "dchop1.ch"
int DecompCplus::ComputeTabEnum ( PTREE list, int tabMax, int realign )
#line 450 "dchop1.ch"
{
#line 450 "dchop1.ch"
    register PPTREE _inter ;
#line 450 "dchop1.ch"

#line 450 "dchop1.ch"
#line 450 "dchop1.ch"
    int _nextVal ;
    
#line 450 "dchop1.ch"
#line 453 "dchop1.ch"
    PTREE   son, list1, type ;
#line 453 "dchop1.ch"
    
#line 453 "dchop1.ch"
#line 454 "dchop1.ch"
    PTREE   declaration, listDecl ;
#line 454 "dchop1.ch"
    
#line 454 "dchop1.ch"
#line 455 "dchop1.ch"
    int x0, y0, x, y, dx, dy ;
    
#line 455 "dchop1.ch"
#line 457 "dchop1.ch"
    while ( !((!list)) ) {
#line 457 "dchop1.ch"
#line 458 "dchop1.ch"
                            (son=(list?list.Nextl():(PPTREE)0));
#line 458 "dchop1.ch"
                            
#line 458 "dchop1.ch"
#line 461 "dchop1.ch"
                            if ( ((_inter = (PPTREE)son,1) && 
#line 461 "dchop1.ch"
                                    (NumberTree(_inter) == cplus::ATTRIBUTS) &&
#line 461 "dchop1.ch"
                                    ((declaration=SonTree(_inter,1)),1) &&
#line 461 "dchop1.ch"
                                    ((list1=SonTree(_inter,3)),1) &&
#line 461 "dchop1.ch"
                                    1) ) {
#line 461 "dchop1.ch"
#line 462 "dchop1.ch"
                                            int ok = 0 ;
                                            
#line 462 "dchop1.ch"
#line 463 "dchop1.ch"
                                            PTREE   att ;
#line 463 "dchop1.ch"
                                            
#line 463 "dchop1.ch"
#line 464 "dchop1.ch"
                                            while ( !((!list1)) ) {
#line 464 "dchop1.ch"
#line 465 "dchop1.ch"
                                                                        (att=(list1?list1.Nextl():(PPTREE)0));
#line 465 "dchop1.ch"
                                                                        
#line 465 "dchop1.ch"
#line 466 "dchop1.ch"
                                                                        if ( ((_inter = (PPTREE)att,1) && 
#line 466 "dchop1.ch"
                                                                                (NumberTree(_inter) == cplus::GOTO) &&
#line 466 "dchop1.ch"
                                                                                1) ) {
#line 466 "dchop1.ch"
#line 467 "dchop1.ch"
                                                                                        ok = 1 ;
#line 467 "dchop1.ch"
#line 468 "dchop1.ch"
                                                                                        break ;
                                                                                        
#line 468 "dchop1.ch"
#line 469 "dchop1.ch"
                                                                                        
#line 469 "dchop1.ch"
#line 469 "dchop1.ch"
                                                                                     }
#line 469 "dchop1.ch"
#line 470 "dchop1.ch"
                                                                        
#line 470 "dchop1.ch"
#line 470 "dchop1.ch"
                                                                    }
#line 470 "dchop1.ch"
#line 473 "dchop1.ch"
                                            if ( ok ) {
#line 473 "dchop1.ch"
#line 473 "dchop1.ch"
                                                        PTREE   _Baum0 ;
#line 473 "dchop1.ch"
                                                        
#line 473 "dchop1.ch"
#line 474 "dchop1.ch"
                                                        int x ;
                                                        
#line 474 "dchop1.ch"
#line 475 "dchop1.ch"
                                                        int deltaLoop = 0 ;
                                                        
#line 475 "dchop1.ch"
#line 476 "dchop1.ch"
                                                       loop : 
#line 476 "dchop1.ch"
#line 479 "dchop1.ch"
                                                        (son=declaration);
#line 479 "dchop1.ch"
                                                        
#line 479 "dchop1.ch"
#line 480 "dchop1.ch"
                                                        ((_inter = (PPTREE)declaration,1) && 
#line 480 "dchop1.ch"
                                                            (NumberTree(_inter) == cplus::TYP_AFF) &&
#line 480 "dchop1.ch"
                                                            ((son=SonTree(_inter,2)),1) &&
#line 480 "dchop1.ch"
                                                            1);
#line 480 "dchop1.ch"
                                                        ;
#line 480 "dchop1.ch"
#line 481 "dchop1.ch"
                                                        if ( (!son) ) 
#line 481 "dchop1.ch"
#line 482 "dchop1.ch"
                                                            ((_inter = (PPTREE)declaration,1) && 
#line 482 "dchop1.ch"
                                                                (NumberTree(_inter) == cplus::TYP_AFF) &&
#line 482 "dchop1.ch"
                                                                ((son=SonTree(_inter,1)),1) &&
#line 482 "dchop1.ch"
                                                                1);
#line 482 "dchop1.ch"
                                                            ;
#line 482 "dchop1.ch"
#line 485 "dchop1.ch"
                                                        _Baum0 = (PPTREE) 0 ;
#line 485 "dchop1.ch"
                                                        
#line 485 "dchop1.ch"
#line 485 "dchop1.ch"
                                                        GetCoordAbs(son, _Baum0, &x0, &y0);
#line 485 "dchop1.ch"
#line 486 "dchop1.ch"
                                                        GetCoord(son, &x, &y, &dx, &dy);
#line 486 "dchop1.ch"
#line 491 "dchop1.ch"
                                                        x = x0 + dx + 3 + deltaLoop ;
#line 491 "dchop1.ch"
#line 494 "dchop1.ch"
                                                        if ( !enumVert ) 
#line 494 "dchop1.ch"
#line 495 "dchop1.ch"
                                                            x += 1 ;
#line 495 "dchop1.ch"
#line 498 "dchop1.ch"
                                                        if ( !realign && x > tabMax && x <= MAX_REALIGN ) 
#line 498 "dchop1.ch"
#line 499 "dchop1.ch"
                                                            tabMax = x ;
#line 499 "dchop1.ch"
                                                        else 
#line 500 "dchop1.ch"
                                                        if ( realign && x <= tabMax ) {
#line 500 "dchop1.ch"
#line 501 "dchop1.ch"
                                                                                            char    string [20];
                                                                                            
#line 501 "dchop1.ch"
#line 502 "dchop1.ch"
                                                                                            sprintf(string, "%d", tabMax);
#line 502 "dchop1.ch"
#line 503 "dchop1.ch"
                                                                                            {
#line 503 "dchop1.ch"
                                                                                                PPTREE _ptTree0= (PPTREE) 0,_sonTree0= (PPTREE) 0 ;
#line 503 "dchop1.ch"
                                                                                                _ptTree0 = StoreRef(MakeString(string));
#line 503 "dchop1.ch"
                                                                                                ReplaceTree(att, 1, _ptTree0);
#line 503 "dchop1.ch"
                                                                                            }
#line 503 "dchop1.ch"
                                                                                            
#line 503 "dchop1.ch"
#line 504 "dchop1.ch"
                                                                                            
#line 504 "dchop1.ch"
#line 504 "dchop1.ch"
                                                                                         } else 
#line 504 "dchop1.ch"
                                                        if ( realign ) {
#line 504 "dchop1.ch"
#line 505 "dchop1.ch"
                                                                            PTREE   subst = (PTREE)0 ;
#line 505 "dchop1.ch"
                                                                            
#line 505 "dchop1.ch"
#line 505 "dchop1.ch"
                                                                            {
#line 505 "dchop1.ch"
                                                                                PPTREE _ptTree0= (PPTREE) 0,_ptRes0= (PPTREE) 0;
#line 505 "dchop1.ch"
                                                                                _ptRes0 = MakeTree(cplus::STR, 1);
#line 505 "dchop1.ch"
                                                                                _ptTree0 = MakeString(" ") ;
#line 505 "dchop1.ch"
                                                                                ReplaceTree(_ptRes0, 1, _ptTree0);
#line 505 "dchop1.ch"
                                                                                subst = _ptRes0;
#line 505 "dchop1.ch"
                                                                            }
#line 505 "dchop1.ch"
                                                                            
#line 505 "dchop1.ch"
#line 506 "dchop1.ch"
                                                                            {
#line 506 "dchop1.ch"
                                                                                PPTREE _ptTree0= (PPTREE) 0,_sonTree0= (PPTREE) 0 ;
#line 506 "dchop1.ch"
                                                                                if (_ptTree0= fathertree(att)) {
#line 506 "dchop1.ch"
                                                                                    int rank = ranktree(att);
#line 506 "dchop1.ch"
                                                                                    ReplaceTree(_ptTree0,rank,subst);
#line 506 "dchop1.ch"
                                                                                }
#line 506 "dchop1.ch"
                                                                            }
#line 506 "dchop1.ch"
                                                                            
#line 506 "dchop1.ch"
#line 507 "dchop1.ch"
                                                                            
#line 507 "dchop1.ch"
#line 507 "dchop1.ch"
                                                                        }
#line 507 "dchop1.ch"
#line 508 "dchop1.ch"
                                                        
#line 508 "dchop1.ch"
#line 508 "dchop1.ch"
                                                       }
#line 508 "dchop1.ch"
#line 509 "dchop1.ch"
                                            
#line 509 "dchop1.ch"
#line 509 "dchop1.ch"
                                         }
#line 509 "dchop1.ch"
#line 510 "dchop1.ch"
                            
#line 510 "dchop1.ch"
#line 510 "dchop1.ch"
                           }
#line 510 "dchop1.ch"
#line 511 "dchop1.ch"
    return tabMax ;
    
#line 511 "dchop1.ch"
#line 512 "dchop1.ch"
    
#line 512 "dchop1.ch"
#line 512 "dchop1.ch"
}
#line 512 "dchop1.ch"

#line 516 "dchop1.ch"

#line 516 "dchop1.ch"
void DecompCplus::TraiterDeclAlignEnum ( PTREE start )
#line 516 "dchop1.ch"
{
#line 516 "dchop1.ch"
    register PPTREE _inter ;
#line 516 "dchop1.ch"

#line 516 "dchop1.ch"
#line 516 "dchop1.ch"
    int _nextVal ;
    
#line 516 "dchop1.ch"
#line 519 "dchop1.ch"
    PTREE   list, son ;
#line 519 "dchop1.ch"
    
#line 519 "dchop1.ch"
#line 520 "dchop1.ch"
    PTREE   listAttr ;
#line 520 "dchop1.ch"
    
#line 520 "dchop1.ch"
#line 521 "dchop1.ch"
    int found = 0 ;
    
#line 521 "dchop1.ch"
#line 522 "dchop1.ch"
    PTREE   father, upFather ;
#line 522 "dchop1.ch"
    
#line 522 "dchop1.ch"
#line 523 "dchop1.ch"
    PTREE   comm ;
#line 523 "dchop1.ch"
    
#line 523 "dchop1.ch"
#line 524 "dchop1.ch"
    int ok ;
    
#line 524 "dchop1.ch"
#line 525 "dchop1.ch"
    PTREE   end ;
#line 525 "dchop1.ch"
    
#line 525 "dchop1.ch"
#line 528 "dchop1.ch"
    (list=start);
#line 528 "dchop1.ch"
    
#line 528 "dchop1.ch"
#line 529 "dchop1.ch"
    if ( !(((_inter = (PPTREE)list,1) && 
#line 529 "dchop1.ch"
                (NumberTree(_inter) == LIST) &&
#line 529 "dchop1.ch"
                1)) ) 
#line 529 "dchop1.ch"
#line 530 "dchop1.ch"
        return ;
    
#line 530 "dchop1.ch"
#line 532 "dchop1.ch"
    bool    indent = false ;
    
#line 532 "dchop1.ch"
#line 534 "dchop1.ch"
    if ( enumVert ) 
#line 534 "dchop1.ch"
#line 535 "dchop1.ch"
        indent = true ;
#line 535 "dchop1.ch"
    else 
#line 535 "dchop1.ch"
#line 537 "dchop1.ch"
        while ( !((!list)) ) {
#line 537 "dchop1.ch"
#line 538 "dchop1.ch"
                                (son=list [1]);
#line 538 "dchop1.ch"
                                
#line 538 "dchop1.ch"
#line 539 "dchop1.ch"
                                if ( IsComm(son, POST) ) {
#line 539 "dchop1.ch"
#line 540 "dchop1.ch"
                                                                indent = true ;
#line 540 "dchop1.ch"
#line 541 "dchop1.ch"
                                                                break ;
                                                                
#line 541 "dchop1.ch"
#line 542 "dchop1.ch"
                                                                
#line 542 "dchop1.ch"
#line 542 "dchop1.ch"
                                                            }
#line 542 "dchop1.ch"
#line 543 "dchop1.ch"
                                (list?list.Nextl():(PPTREE)0);
#line 543 "dchop1.ch"
#line 544 "dchop1.ch"
                                
#line 544 "dchop1.ch"
#line 544 "dchop1.ch"
                               }
#line 544 "dchop1.ch"
    
#line 544 "dchop1.ch"
#line 547 "dchop1.ch"
    if ( !indent ) 
#line 547 "dchop1.ch"
#line 548 "dchop1.ch"
        return ;
    
#line 548 "dchop1.ch"
#line 551 "dchop1.ch"
    if ( end != start ) {
#line 551 "dchop1.ch"
#line 552 "dchop1.ch"
                            (list=start);
#line 552 "dchop1.ch"
                            
#line 552 "dchop1.ch"
#line 553 "dchop1.ch"
                            (end?end.Nextl():(PPTREE)0);
#line 553 "dchop1.ch"
#line 554 "dchop1.ch"
                            while ( !((!list)) && list != end ) {
#line 554 "dchop1.ch"
#line 555 "dchop1.ch"
                                                                        (son=(list?list.Nextl():(PPTREE)0));
#line 555 "dchop1.ch"
                                                                        
#line 555 "dchop1.ch"
#line 556 "dchop1.ch"
                                                                        if ( IsComm(son, POST) ) {
#line 556 "dchop1.ch"
#line 556 "dchop1.ch"
                                                                                                        PTREE   _Baum0 ;
#line 556 "dchop1.ch"
                                                                                                        
#line 556 "dchop1.ch"
#line 557 "dchop1.ch"
                                                                                                        found = 1 ;
#line 557 "dchop1.ch"
#line 563 "dchop1.ch"
                                                                                                        {
#line 563 "dchop1.ch"
                                                                                                            PPTREE _ptTree0=(PPTREE) 0;
#line 563 "dchop1.ch"
                                                                                                            _ptTree0 = (PPTREE) 0;
#line 563 "dchop1.ch"
                                                                                                            {
#line 563 "dchop1.ch"
                                                                                                                PPTREE _ptTree1= (PPTREE) 0 ;
#line 563 "dchop1.ch"
                                                                                                                {
#line 563 "dchop1.ch"
                                                                                                                    PPTREE _ptTree2= (PPTREE) 0,_ptRes2= (PPTREE) 0;
#line 563 "dchop1.ch"
                                                                                                                    _ptRes2 = MakeTree(cplus::GOTO, 1);
#line 563 "dchop1.ch"
                                                                                                                    _ptTree2 = MakeString("1") ;
#line 563 "dchop1.ch"
                                                                                                                    ReplaceTree(_ptRes2, 1, _ptTree2);
#line 563 "dchop1.ch"
                                                                                                                    _ptTree1 = _ptRes2;
#line 563 "dchop1.ch"
                                                                                                                }
#line 563 "dchop1.ch"
                                                                                                                _ptTree0 = AddList( _ptTree0,_ptTree1);
#line 563 "dchop1.ch"
                                                                                                            }
#line 563 "dchop1.ch"
                                                                                                            {
#line 563 "dchop1.ch"
                                                                                                                PPTREE _ptTree1= (PPTREE) 0 ;
#line 563 "dchop1.ch"
                                                                                                                {
#line 563 "dchop1.ch"
                                                                                                                    PPTREE _ptTree2= (PPTREE) 0,_ptRes2= (PPTREE) 0;
#line 563 "dchop1.ch"
                                                                                                                    _ptRes2 = MakeTree(cplus::NEWLINE, 1);
#line 563 "dchop1.ch"
                                                                                                                    _ptTree2 = MakeString("1") ;
#line 563 "dchop1.ch"
                                                                                                                    ReplaceTree(_ptRes2, 1, _ptTree2);
#line 563 "dchop1.ch"
                                                                                                                    _ptTree1 = _ptRes2;
#line 563 "dchop1.ch"
                                                                                                                }
#line 563 "dchop1.ch"
                                                                                                                _ptTree0 = AddList( _ptTree0,_ptTree1);
#line 563 "dchop1.ch"
                                                                                                            }
#line 563 "dchop1.ch"
                                                                                                            listAttr = _ptTree0;
#line 563 "dchop1.ch"
                                                                                                            ;
#line 563 "dchop1.ch"
                                                                                                        }
#line 563 "dchop1.ch"
                                                                                                        
#line 563 "dchop1.ch"
#line 564 "dchop1.ch"
                                                                                                        PutAttr(son, listAttr, POST_ATTR, PUT_END);
#line 564 "dchop1.ch"
#line 567 "dchop1.ch"
                                                                                                        (comm=GetComm(son));
#line 567 "dchop1.ch"
                                                                                                        
#line 567 "dchop1.ch"
#line 568 "dchop1.ch"
                                                                                                        _Baum0 = (PPTREE) 0 ;
#line 568 "dchop1.ch"
                                                                                                        
#line 568 "dchop1.ch"
#line 568 "dchop1.ch"
                                                                                                        PutComm(son, _Baum0);
#line 568 "dchop1.ch"
#line 569 "dchop1.ch"
                                                                                                        PutComm(FatherTree(son), comm);
#line 569 "dchop1.ch"
#line 570 "dchop1.ch"
                                                                                                        
#line 570 "dchop1.ch"
#line 570 "dchop1.ch"
                                                                                                    }
#line 570 "dchop1.ch"
#line 571 "dchop1.ch"
                                                                        
#line 571 "dchop1.ch"
#line 571 "dchop1.ch"
                                                                    }
#line 571 "dchop1.ch"
#line 572 "dchop1.ch"
                            if ( found ) {
#line 572 "dchop1.ch"
#line 573 "dchop1.ch"
                                            PTREE   list, son ;
#line 573 "dchop1.ch"
                                            
#line 573 "dchop1.ch"
#line 576 "dchop1.ch"
                                            ComputeTabEnum(start, ComputeTabEnum(start, 0, 0), 1);
#line 576 "dchop1.ch"
#line 577 "dchop1.ch"
                                            found = 0 ;
#line 577 "dchop1.ch"
#line 578 "dchop1.ch"
                                            
#line 578 "dchop1.ch"
#line 578 "dchop1.ch"
                                          }
#line 578 "dchop1.ch"
#line 579 "dchop1.ch"
                            
#line 579 "dchop1.ch"
#line 579 "dchop1.ch"
                          }
#line 579 "dchop1.ch"
#line 580 "dchop1.ch"
    
#line 580 "dchop1.ch"
#line 580 "dchop1.ch"
}
#line 580 "dchop1.ch"

#line 584 "dchop1.ch"

#line 584 "dchop1.ch"
int DecompCplus::ComputeTab ( PTREE list, int tabMax, int realign )
#line 584 "dchop1.ch"
{
#line 584 "dchop1.ch"
    register PPTREE _inter ;
#line 584 "dchop1.ch"

#line 584 "dchop1.ch"
#line 584 "dchop1.ch"
    int _retVal [2];
    
#line 584 "dchop1.ch"
#line 584 "dchop1.ch"
    PPTREE  _storeVal [2];
    
#line 584 "dchop1.ch"
#line 584 "dchop1.ch"
    int _nextVal ;
    
#line 584 "dchop1.ch"
#line 587 "dchop1.ch"
    PTREE   son, list1, type ;
#line 587 "dchop1.ch"
    
#line 587 "dchop1.ch"
#line 588 "dchop1.ch"
    PTREE   declaration, listDecl ;
#line 588 "dchop1.ch"
    
#line 588 "dchop1.ch"
#line 589 "dchop1.ch"
    int x0, y0, x, y, dx, dy ;
    
#line 589 "dchop1.ch"
#line 591 "dchop1.ch"
    while ( !((!list)) ) {
#line 591 "dchop1.ch"
#line 592 "dchop1.ch"
                            (son=(list?list.Nextl():(PPTREE)0));
#line 592 "dchop1.ch"
                            
#line 592 "dchop1.ch"
#line 595 "dchop1.ch"
                            if ( ((_inter = (PPTREE)son,1) && 
#line 595 "dchop1.ch"
                                    (NumberTree(_inter) == cplus::ATTRIBUTS) &&
#line 595 "dchop1.ch"
                                    ((declaration=SonTree(_inter,1)),1) &&
#line 595 "dchop1.ch"
                                    ((list1=SonTree(_inter,3)),1) &&
#line 595 "dchop1.ch"
                                    1) ) {
#line 595 "dchop1.ch"
#line 596 "dchop1.ch"
                                            int ok = 0 ;
                                            
#line 596 "dchop1.ch"
#line 597 "dchop1.ch"
                                            PTREE   att ;
#line 597 "dchop1.ch"
                                            
#line 597 "dchop1.ch"
#line 598 "dchop1.ch"
                                            while ( !((!list1)) ) {
#line 598 "dchop1.ch"
#line 599 "dchop1.ch"
                                                                        (att=(list1?list1.Nextl():(PPTREE)0));
#line 599 "dchop1.ch"
                                                                        
#line 599 "dchop1.ch"
#line 600 "dchop1.ch"
                                                                        if ( ((_inter = (PPTREE)att,1) && 
#line 600 "dchop1.ch"
                                                                                (NumberTree(_inter) == cplus::GOTO) &&
#line 600 "dchop1.ch"
                                                                                1) ) {
#line 600 "dchop1.ch"
#line 601 "dchop1.ch"
                                                                                        ok = 1 ;
#line 601 "dchop1.ch"
#line 602 "dchop1.ch"
                                                                                        break ;
                                                                                        
#line 602 "dchop1.ch"
#line 603 "dchop1.ch"
                                                                                        
#line 603 "dchop1.ch"
#line 603 "dchop1.ch"
                                                                                     }
#line 603 "dchop1.ch"
#line 604 "dchop1.ch"
                                                                        
#line 604 "dchop1.ch"
#line 604 "dchop1.ch"
                                                                    }
#line 604 "dchop1.ch"
#line 607 "dchop1.ch"
                                            if ( ok ) {
#line 607 "dchop1.ch"
#line 607 "dchop1.ch"
                                                        PTREE   _Baum0 ;
#line 607 "dchop1.ch"
                                                        
#line 607 "dchop1.ch"
#line 608 "dchop1.ch"
                                                        int x ;
                                                        
#line 608 "dchop1.ch"
#line 609 "dchop1.ch"
                                                        int deltaLoop = 0 ;
                                                        
#line 609 "dchop1.ch"
#line 612 "dchop1.ch"
                                                        if ( ((_inter = (PPTREE)declaration,1) && 
#line 612 "dchop1.ch"
                                                                (NumberTree(_inter) == cplus::DECLARATION) &&
#line 612 "dchop1.ch"
                                                                ((type=SonTree(_inter,2)),1) &&
#line 612 "dchop1.ch"
                                                                ((listDecl=SonTree(_inter,3)),1) &&
#line 612 "dchop1.ch"
                                                                1) || ((_inter = (PPTREE)declaration,1) && 
#line 612 "dchop1.ch"
                                                                            (NumberTree(_inter) == cplus::DECLARATOR) &&
#line 612 "dchop1.ch"
                                                                            ((type=SonTree(_inter,2)),1) &&
#line 612 "dchop1.ch"
                                                                            1) ) {
#line 612 "dchop1.ch"
#line 613 "dchop1.ch"
                                                                                    
#line 613 "dchop1.ch"
#line 613 "dchop1.ch"
                                                                                 }
#line 613 "dchop1.ch"
#line 614 "dchop1.ch"
                                                       loop : 
#line 614 "dchop1.ch"
#line 615 "dchop1.ch"
                                                        while ( !(((_inter = (PPTREE)listDecl,1) && 
#line 615 "dchop1.ch"
                                                                        (!SonTree(_inter,2)) &&
#line 615 "dchop1.ch"
                                                                        1)) ) 
#line 615 "dchop1.ch"
#line 616 "dchop1.ch"
                                                            (listDecl?listDecl.Nextl():(PPTREE)0);
#line 616 "dchop1.ch"
#line 617 "dchop1.ch"
                                                        if ( ((_inter = (PPTREE)listDecl,1) && 
#line 617 "dchop1.ch"
                                                                (_retVal[1]=((_storeVal[1]=_inter,_inter=SonTree(_inter,1),1) &&
#line 617 "dchop1.ch"
                                                                    (NumberTree(_inter) == cplus::TYP_LIST) &&
#line 617 "dchop1.ch"
                                                                    ((listDecl=SonTree(_inter,2)),1) &&
#line 617 "dchop1.ch"
                                                                    1),
#line 617 "dchop1.ch"
                                                                    (_inter=_storeVal[1],1),_retVal[1]) &&
#line 617 "dchop1.ch"
                                                                1) ) {
#line 617 "dchop1.ch"
#line 618 "dchop1.ch"
                                                                        deltaLoop++ ;
#line 618 "dchop1.ch"
#line 619 "dchop1.ch"
                                                                        goto loop ;
                                                                        
#line 619 "dchop1.ch"
#line 620 "dchop1.ch"
                                                                        
#line 620 "dchop1.ch"
#line 620 "dchop1.ch"
                                                                     }
#line 620 "dchop1.ch"
#line 621 "dchop1.ch"
                                                        (son=(listDecl?listDecl.Nextl():(PPTREE)0));
#line 621 "dchop1.ch"
                                                        
#line 621 "dchop1.ch"
#line 625 "dchop1.ch"
                                                        if ( (!son) ) 
#line 625 "dchop1.ch"
#line 626 "dchop1.ch"
                                                            (son=type);
#line 626 "dchop1.ch"
                                                        
#line 626 "dchop1.ch"
#line 629 "dchop1.ch"
                                                        _Baum0 = (PPTREE) 0 ;
#line 629 "dchop1.ch"
                                                        
#line 629 "dchop1.ch"
#line 629 "dchop1.ch"
                                                        GetCoordAbs(son, _Baum0, &x0, &y0);
#line 629 "dchop1.ch"
#line 630 "dchop1.ch"
                                                        GetCoord(son, &x, &y, &dx, &dy);
#line 630 "dchop1.ch"
#line 635 "dchop1.ch"
                                                        x = x0 + dx + 3 + deltaLoop ;
#line 635 "dchop1.ch"
#line 638 "dchop1.ch"
                                                        if ( !declAlign ) 
#line 638 "dchop1.ch"
#line 639 "dchop1.ch"
                                                            x += 1 ;
#line 639 "dchop1.ch"
#line 642 "dchop1.ch"
                                                        if ( !realign && x > tabMax && x <= MAX_REALIGN ) 
#line 642 "dchop1.ch"
#line 643 "dchop1.ch"
                                                            tabMax = x ;
#line 643 "dchop1.ch"
                                                        else 
#line 644 "dchop1.ch"
                                                        if ( realign && x <= tabMax ) {
#line 644 "dchop1.ch"
#line 645 "dchop1.ch"
                                                                                            char    string [20];
                                                                                            
#line 645 "dchop1.ch"
#line 646 "dchop1.ch"
                                                                                            sprintf(string, "%d", tabMax);
#line 646 "dchop1.ch"
#line 647 "dchop1.ch"
                                                                                            {
#line 647 "dchop1.ch"
                                                                                                PPTREE _ptTree0= (PPTREE) 0,_sonTree0= (PPTREE) 0 ;
#line 647 "dchop1.ch"
                                                                                                _ptTree0 = StoreRef(MakeString(string));
#line 647 "dchop1.ch"
                                                                                                ReplaceTree(att, 1, _ptTree0);
#line 647 "dchop1.ch"
                                                                                            }
#line 647 "dchop1.ch"
                                                                                            
#line 647 "dchop1.ch"
#line 648 "dchop1.ch"
                                                                                            
#line 648 "dchop1.ch"
#line 648 "dchop1.ch"
                                                                                         } else 
#line 648 "dchop1.ch"
                                                        if ( realign ) {
#line 648 "dchop1.ch"
#line 649 "dchop1.ch"
                                                                            PTREE   subst = (PTREE)0 ;
#line 649 "dchop1.ch"
                                                                            
#line 649 "dchop1.ch"
#line 649 "dchop1.ch"
                                                                            {
#line 649 "dchop1.ch"
                                                                                PPTREE _ptTree0= (PPTREE) 0,_ptRes0= (PPTREE) 0;
#line 649 "dchop1.ch"
                                                                                _ptRes0 = MakeTree(cplus::STR, 1);
#line 649 "dchop1.ch"
                                                                                _ptTree0 = MakeString(" ") ;
#line 649 "dchop1.ch"
                                                                                ReplaceTree(_ptRes0, 1, _ptTree0);
#line 649 "dchop1.ch"
                                                                                subst = _ptRes0;
#line 649 "dchop1.ch"
                                                                            }
#line 649 "dchop1.ch"
                                                                            
#line 649 "dchop1.ch"
#line 650 "dchop1.ch"
                                                                            {
#line 650 "dchop1.ch"
                                                                                PPTREE _ptTree0= (PPTREE) 0,_sonTree0= (PPTREE) 0 ;
#line 650 "dchop1.ch"
                                                                                if (_ptTree0= fathertree(att)) {
#line 650 "dchop1.ch"
                                                                                    int rank = ranktree(att);
#line 650 "dchop1.ch"
                                                                                    ReplaceTree(_ptTree0,rank,subst);
#line 650 "dchop1.ch"
                                                                                }
#line 650 "dchop1.ch"
                                                                            }
#line 650 "dchop1.ch"
                                                                            
#line 650 "dchop1.ch"
#line 651 "dchop1.ch"
                                                                            
#line 651 "dchop1.ch"
#line 651 "dchop1.ch"
                                                                        }
#line 651 "dchop1.ch"
#line 652 "dchop1.ch"
                                                        
#line 652 "dchop1.ch"
#line 652 "dchop1.ch"
                                                       }
#line 652 "dchop1.ch"
#line 653 "dchop1.ch"
                                            
#line 653 "dchop1.ch"
#line 653 "dchop1.ch"
                                         }
#line 653 "dchop1.ch"
#line 654 "dchop1.ch"
                            
#line 654 "dchop1.ch"
#line 654 "dchop1.ch"
                           }
#line 654 "dchop1.ch"
#line 655 "dchop1.ch"
    return tabMax ;
    
#line 655 "dchop1.ch"
#line 656 "dchop1.ch"
    
#line 656 "dchop1.ch"
#line 656 "dchop1.ch"
}
#line 656 "dchop1.ch"

#line 660 "dchop1.ch"

#line 660 "dchop1.ch"
void DecompCplus::TraiterDeclAlign ( PTREE start, PTREE end, bool declarator )
#line 660 "dchop1.ch"
{
#line 660 "dchop1.ch"
    register PPTREE _inter ;
#line 660 "dchop1.ch"

#line 660 "dchop1.ch"
#line 660 "dchop1.ch"
    int _nextVal ;
    
#line 660 "dchop1.ch"
#line 663 "dchop1.ch"
    PTREE   list, son ;
#line 663 "dchop1.ch"
    
#line 663 "dchop1.ch"
#line 664 "dchop1.ch"
    PTREE   listAttr ;
#line 664 "dchop1.ch"
    
#line 664 "dchop1.ch"
#line 665 "dchop1.ch"
    int found = 0 ;
    
#line 665 "dchop1.ch"
#line 666 "dchop1.ch"
    PTREE   father, upFather ;
#line 666 "dchop1.ch"
    
#line 666 "dchop1.ch"
#line 667 "dchop1.ch"
    PTREE   comm ;
#line 667 "dchop1.ch"
    
#line 667 "dchop1.ch"
#line 668 "dchop1.ch"
    int ok ;
    
#line 668 "dchop1.ch"
#line 670 "dchop1.ch"
    if ( end != start ) {
#line 670 "dchop1.ch"
#line 671 "dchop1.ch"
                            (list=start);
#line 671 "dchop1.ch"
                            
#line 671 "dchop1.ch"
#line 672 "dchop1.ch"
                            (end?end.Nextl():(PPTREE)0);
#line 672 "dchop1.ch"
#line 673 "dchop1.ch"
                            while ( !((!list)) && list != end ) {
#line 673 "dchop1.ch"
#line 674 "dchop1.ch"
                                                                        (son=(list?list.Nextl():(PPTREE)0));
#line 674 "dchop1.ch"
                                                                        
#line 674 "dchop1.ch"
#line 675 "dchop1.ch"
                                                                        if ( IsComm(son, POST) ) {
#line 675 "dchop1.ch"
#line 675 "dchop1.ch"
                                                                                                        PTREE   _Baum0 ;
#line 675 "dchop1.ch"
                                                                                                        
#line 675 "dchop1.ch"
#line 676 "dchop1.ch"
                                                                                                        found = 1 ;
#line 676 "dchop1.ch"
#line 682 "dchop1.ch"
                                                                                                        {
#line 682 "dchop1.ch"
                                                                                                            PPTREE _ptTree0=(PPTREE) 0;
#line 682 "dchop1.ch"
                                                                                                            _ptTree0 = (PPTREE) 0;
#line 682 "dchop1.ch"
                                                                                                            {
#line 682 "dchop1.ch"
                                                                                                                PPTREE _ptTree1= (PPTREE) 0 ;
#line 682 "dchop1.ch"
                                                                                                                {
#line 682 "dchop1.ch"
                                                                                                                    PPTREE _ptTree2= (PPTREE) 0,_ptRes2= (PPTREE) 0;
#line 682 "dchop1.ch"
                                                                                                                    _ptRes2 = MakeTree(cplus::GOTO, 1);
#line 682 "dchop1.ch"
                                                                                                                    _ptTree2 = MakeString("1") ;
#line 682 "dchop1.ch"
                                                                                                                    ReplaceTree(_ptRes2, 1, _ptTree2);
#line 682 "dchop1.ch"
                                                                                                                    _ptTree1 = _ptRes2;
#line 682 "dchop1.ch"
                                                                                                                }
#line 682 "dchop1.ch"
                                                                                                                _ptTree0 = AddList( _ptTree0,_ptTree1);
#line 682 "dchop1.ch"
                                                                                                            }
#line 682 "dchop1.ch"
                                                                                                            {
#line 682 "dchop1.ch"
                                                                                                                PPTREE _ptTree1= (PPTREE) 0 ;
#line 682 "dchop1.ch"
                                                                                                                {
#line 682 "dchop1.ch"
                                                                                                                    PPTREE _ptTree2= (PPTREE) 0,_ptRes2= (PPTREE) 0;
#line 682 "dchop1.ch"
                                                                                                                    _ptRes2 = MakeTree(cplus::NEWLINE, 1);
#line 682 "dchop1.ch"
                                                                                                                    _ptTree2 = MakeString("1") ;
#line 682 "dchop1.ch"
                                                                                                                    ReplaceTree(_ptRes2, 1, _ptTree2);
#line 682 "dchop1.ch"
                                                                                                                    _ptTree1 = _ptRes2;
#line 682 "dchop1.ch"
                                                                                                                }
#line 682 "dchop1.ch"
                                                                                                                _ptTree0 = AddList( _ptTree0,_ptTree1);
#line 682 "dchop1.ch"
                                                                                                            }
#line 682 "dchop1.ch"
                                                                                                            listAttr = _ptTree0;
#line 682 "dchop1.ch"
                                                                                                            ;
#line 682 "dchop1.ch"
                                                                                                        }
#line 682 "dchop1.ch"
                                                                                                        
#line 682 "dchop1.ch"
#line 683 "dchop1.ch"
                                                                                                        PutAttr(son, listAttr, POST_ATTR, PUT_END);
#line 683 "dchop1.ch"
#line 686 "dchop1.ch"
                                                                                                        (comm=GetComm(son));
#line 686 "dchop1.ch"
                                                                                                        
#line 686 "dchop1.ch"
#line 687 "dchop1.ch"
                                                                                                        _Baum0 = (PPTREE) 0 ;
#line 687 "dchop1.ch"
                                                                                                        
#line 687 "dchop1.ch"
#line 687 "dchop1.ch"
                                                                                                        PutComm(son, _Baum0);
#line 687 "dchop1.ch"
#line 688 "dchop1.ch"
                                                                                                        PutComm(FatherTree(son), comm);
#line 688 "dchop1.ch"
#line 689 "dchop1.ch"
                                                                                                        
#line 689 "dchop1.ch"
#line 689 "dchop1.ch"
                                                                                                    }
#line 689 "dchop1.ch"
#line 690 "dchop1.ch"
                                                                        
#line 690 "dchop1.ch"
#line 690 "dchop1.ch"
                                                                    }
#line 690 "dchop1.ch"
#line 691 "dchop1.ch"
                            if ( found ) {
#line 691 "dchop1.ch"
#line 692 "dchop1.ch"
                                            PTREE   list, son ;
#line 692 "dchop1.ch"
                                            
#line 692 "dchop1.ch"
#line 695 "dchop1.ch"
                                            ComputeTab(start, ComputeTab(start, 0, 0), 1);
#line 695 "dchop1.ch"
#line 696 "dchop1.ch"
                                            found = 0 ;
#line 696 "dchop1.ch"
#line 697 "dchop1.ch"
                                            
#line 697 "dchop1.ch"
#line 697 "dchop1.ch"
                                          }
#line 697 "dchop1.ch"
#line 698 "dchop1.ch"
                            
#line 698 "dchop1.ch"
#line 698 "dchop1.ch"
                          } else 
#line 698 "dchop1.ch"
#line 699 "dchop1.ch"
        (end?end.Nextl():(PPTREE)0);
#line 699 "dchop1.ch"
    
#line 699 "dchop1.ch"
#line 703 "dchop1.ch"
    if ( !declarator ) {
#line 703 "dchop1.ch"
#line 704 "dchop1.ch"
                            PTREE   elem = (PTREE)0 ;
#line 704 "dchop1.ch"
                            
#line 704 "dchop1.ch"
#line 704 "dchop1.ch"
                            (elem=start);
#line 704 "dchop1.ch"
                            
#line 704 "dchop1.ch"
#line 705 "dchop1.ch"
                            (elem=FatherTree(SFatherTree(elem,cplus::COMPOUND)));
#line 705 "dchop1.ch"
                            
#line 705 "dchop1.ch"
#line 706 "dchop1.ch"
                            if ( !(((_inter = (PPTREE)elem,1) && 
#line 706 "dchop1.ch"
                                        (NumberTree(_inter) == cplus::FUNC) &&
#line 706 "dchop1.ch"
                                        1)) ) 
#line 706 "dchop1.ch"
#line 707 "dchop1.ch"
                                return ;
                            
#line 707 "dchop1.ch"
#line 708 "dchop1.ch"
                            
#line 708 "dchop1.ch"
#line 708 "dchop1.ch"
                         }
#line 708 "dchop1.ch"
#line 712 "dchop1.ch"
    if ( start && end ) {
#line 712 "dchop1.ch"
#line 713 "dchop1.ch"
                            (son=sontree(start, 1));
#line 713 "dchop1.ch"
                            
#line 713 "dchop1.ch"
#line 714 "dchop1.ch"
                            if ( ((_inter = (PPTREE)son,1) && 
#line 714 "dchop1.ch"
                                    (NumberTree(_inter) == cplus::ATTRIBUTS) &&
#line 714 "dchop1.ch"
                                    ((list=SonTree(_inter,2)),1) &&
#line 714 "dchop1.ch"
                                    1) ) 
#line 714 "dchop1.ch"
#line 717 "dchop1.ch"
                                {
#line 717 "dchop1.ch"
                                    PPTREE _ptTree0= (PPTREE) 0,_sonTree0= (PPTREE) 0 ;
#line 717 "dchop1.ch"
                                    _ptTree0 = list;
#line 717 "dchop1.ch"
                                    {
#line 717 "dchop1.ch"
                                        PPTREE _ptTree1= (PPTREE) 0 ;
#line 717 "dchop1.ch"
                                        {
#line 717 "dchop1.ch"
                                            PPTREE _ptTree2= (PPTREE) 0,_ptRes2= (PPTREE) 0;
#line 717 "dchop1.ch"
                                            _ptRes2 = MakeTree(cplus::NEWLINE, 1);
#line 717 "dchop1.ch"
                                            _ptTree2 = MakeString("2") ;
#line 717 "dchop1.ch"
                                            ReplaceTree(_ptRes2, 1, _ptTree2);
#line 717 "dchop1.ch"
                                            _ptTree1 = _ptRes2;
#line 717 "dchop1.ch"
                                        }
#line 717 "dchop1.ch"
                                        _ptTree0 = AddList( _ptTree0,_ptTree1);
#line 717 "dchop1.ch"
                                    }
#line 717 "dchop1.ch"
                                    ReplaceTree(son, 2, _ptTree0);
#line 717 "dchop1.ch"
                                }
#line 717 "dchop1.ch"
                            
#line 717 "dchop1.ch"
                            else 
#line 719 "dchop1.ch"
                            {
#line 719 "dchop1.ch"
#line 723 "dchop1.ch"
                                (upFather=FatherTree(start));
#line 723 "dchop1.ch"
                                
#line 723 "dchop1.ch"
#line 724 "dchop1.ch"
                                if ( ((_inter = (PPTREE)upFather,1) && 
#line 724 "dchop1.ch"
                                        (NumberTree(_inter) == cplus::COMPOUND) &&
#line 724 "dchop1.ch"
                                        1) ) 
#line 724 "dchop1.ch"
#line 725 "dchop1.ch"
                                    ok = 0 ;
#line 725 "dchop1.ch"
                                else 
#line 725 "dchop1.ch"
#line 727 "dchop1.ch"
                                    ok = 1 ;
#line 727 "dchop1.ch"
                                
#line 727 "dchop1.ch"
#line 728 "dchop1.ch"
                                if ( !ok || IsComm(son, PRE) ) {
#line 728 "dchop1.ch"
#line 728 "dchop1.ch"
                                                                        PTREE   _Baum1 ;
#line 728 "dchop1.ch"
                                                                        
#line 728 "dchop1.ch"
#line 729 "dchop1.ch"
                                                                        {
#line 729 "dchop1.ch"
                                                                            PPTREE _ptTree0= (PPTREE) 0,_ptRes0= (PPTREE) 0;
#line 729 "dchop1.ch"
                                                                            _ptRes0 = MakeTree(cplus::ATTRIBUTS, 3);
#line 729 "dchop1.ch"
                                                                            ReplaceTree(_ptRes0, 1, son);
#line 729 "dchop1.ch"
                                                                            {
#line 729 "dchop1.ch"
                                                                                PPTREE _ptTree1= (PPTREE) 0,_ptRes1= (PPTREE) 0;
#line 729 "dchop1.ch"
                                                                                _ptRes1 = MakeTree(LIST, 2);
#line 729 "dchop1.ch"
                                                                                {
#line 729 "dchop1.ch"
                                                                                    PPTREE _ptTree2= (PPTREE) 0,_ptRes2= (PPTREE) 0;
#line 729 "dchop1.ch"
                                                                                    _ptRes2 = MakeTree(cplus::NEWLINE, 1);
#line 729 "dchop1.ch"
                                                                                    _ptTree2 = MakeString("1") ;
#line 729 "dchop1.ch"
                                                                                    ReplaceTree(_ptRes2, 1, _ptTree2);
#line 729 "dchop1.ch"
                                                                                    _ptTree1 = _ptRes2;
#line 729 "dchop1.ch"
                                                                                }
#line 729 "dchop1.ch"
                                                                                ReplaceTree(_ptRes1, 1, _ptTree1);
#line 729 "dchop1.ch"
                                                                                _ptTree0 = _ptRes1;
#line 729 "dchop1.ch"
                                                                            }
#line 729 "dchop1.ch"
                                                                            ReplaceTree(_ptRes0, 2, _ptTree0);
#line 729 "dchop1.ch"
                                                                            {
#line 729 "dchop1.ch"
                                                                                PPTREE _ptTree1= (PPTREE) 0,_ptRes1= (PPTREE) 0;
#line 729 "dchop1.ch"
                                                                                _ptRes1 = MakeTree(LIST, 2);
#line 729 "dchop1.ch"
                                                                                {
#line 729 "dchop1.ch"
                                                                                    PPTREE _ptTree2= (PPTREE) 0,_ptRes2= (PPTREE) 0;
#line 729 "dchop1.ch"
                                                                                    _ptRes2 = MakeTree(cplus::NEWLINE, 1);
#line 729 "dchop1.ch"
                                                                                    _ptTree2 = MakeString("1") ;
#line 729 "dchop1.ch"
                                                                                    ReplaceTree(_ptRes2, 1, _ptTree2);
#line 729 "dchop1.ch"
                                                                                    _ptTree1 = _ptRes2;
#line 729 "dchop1.ch"
                                                                                }
#line 729 "dchop1.ch"
                                                                                ReplaceTree(_ptRes1, 1, _ptTree1);
#line 729 "dchop1.ch"
                                                                                _ptTree0 = _ptRes1;
#line 729 "dchop1.ch"
                                                                            }
#line 729 "dchop1.ch"
                                                                            ReplaceTree(_ptRes0, 3, _ptTree0);
#line 729 "dchop1.ch"
                                                                            _Baum1 = _ptRes0;
#line 729 "dchop1.ch"
                                                                        }
#line 729 "dchop1.ch"
                                                                        
#line 729 "dchop1.ch"
#line 729 "dchop1.ch"
                                                                        replacetree(start, 1, _Baum1);
#line 729 "dchop1.ch"
#line 730 "dchop1.ch"
                                                                        
#line 730 "dchop1.ch"
#line 730 "dchop1.ch"
                                                                    } else 
#line 730 "dchop1.ch"
                                {
#line 730 "dchop1.ch"
#line 730 "dchop1.ch"
                                    PTREE   _Baum2 ;
#line 730 "dchop1.ch"
                                    
#line 730 "dchop1.ch"
#line 731 "dchop1.ch"
                                    {
#line 731 "dchop1.ch"
                                        PPTREE _ptTree0= (PPTREE) 0,_ptRes0= (PPTREE) 0;
#line 731 "dchop1.ch"
                                        _ptRes0 = MakeTree(cplus::ATTRIBUTS, 3);
#line 731 "dchop1.ch"
                                        ReplaceTree(_ptRes0, 1, son);
#line 731 "dchop1.ch"
                                        {
#line 731 "dchop1.ch"
                                            PPTREE _ptTree1= (PPTREE) 0,_ptRes1= (PPTREE) 0;
#line 731 "dchop1.ch"
                                            _ptRes1 = MakeTree(LIST, 2);
#line 731 "dchop1.ch"
                                            {
#line 731 "dchop1.ch"
                                                PPTREE _ptTree2= (PPTREE) 0,_ptRes2= (PPTREE) 0;
#line 731 "dchop1.ch"
                                                _ptRes2 = MakeTree(cplus::NEWLINE, 1);
#line 731 "dchop1.ch"
                                                _ptTree2 = MakeString("2") ;
#line 731 "dchop1.ch"
                                                ReplaceTree(_ptRes2, 1, _ptTree2);
#line 731 "dchop1.ch"
                                                _ptTree1 = _ptRes2;
#line 731 "dchop1.ch"
                                            }
#line 731 "dchop1.ch"
                                            ReplaceTree(_ptRes1, 1, _ptTree1);
#line 731 "dchop1.ch"
                                            _ptTree0 = _ptRes1;
#line 731 "dchop1.ch"
                                        }
#line 731 "dchop1.ch"
                                        ReplaceTree(_ptRes0, 2, _ptTree0);
#line 731 "dchop1.ch"
                                        {
#line 731 "dchop1.ch"
                                            PPTREE _ptTree1= (PPTREE) 0,_ptRes1= (PPTREE) 0;
#line 731 "dchop1.ch"
                                            _ptRes1 = MakeTree(LIST, 2);
#line 731 "dchop1.ch"
                                            {
#line 731 "dchop1.ch"
                                                PPTREE _ptTree2= (PPTREE) 0,_ptRes2= (PPTREE) 0;
#line 731 "dchop1.ch"
                                                _ptRes2 = MakeTree(cplus::NEWLINE, 1);
#line 731 "dchop1.ch"
                                                _ptTree2 = MakeString("1") ;
#line 731 "dchop1.ch"
                                                ReplaceTree(_ptRes2, 1, _ptTree2);
#line 731 "dchop1.ch"
                                                _ptTree1 = _ptRes2;
#line 731 "dchop1.ch"
                                            }
#line 731 "dchop1.ch"
                                            ReplaceTree(_ptRes1, 1, _ptTree1);
#line 731 "dchop1.ch"
                                            _ptTree0 = _ptRes1;
#line 731 "dchop1.ch"
                                        }
#line 731 "dchop1.ch"
                                        ReplaceTree(_ptRes0, 3, _ptTree0);
#line 731 "dchop1.ch"
                                        _Baum2 = _ptRes0;
#line 731 "dchop1.ch"
                                    }
#line 731 "dchop1.ch"
                                    
#line 731 "dchop1.ch"
#line 731 "dchop1.ch"
                                    replacetree(start, 1, _Baum2);
#line 731 "dchop1.ch"
#line 732 "dchop1.ch"
                                    
#line 732 "dchop1.ch"
#line 732 "dchop1.ch"
                                }
                                
#line 732 "dchop1.ch"
#line 733 "dchop1.ch"
                                
#line 733 "dchop1.ch"
#line 733 "dchop1.ch"
                            }
                            
#line 733 "dchop1.ch"
#line 734 "dchop1.ch"
                            
#line 734 "dchop1.ch"
#line 734 "dchop1.ch"
                          }
#line 734 "dchop1.ch"
#line 738 "dchop1.ch"
    if ( end ) {
#line 738 "dchop1.ch"
#line 739 "dchop1.ch"
                    PTREE   listAttr ;
#line 739 "dchop1.ch"
                    
#line 739 "dchop1.ch"
#line 740 "dchop1.ch"
                    (son=sontree(end, 1));
#line 740 "dchop1.ch"
                    
#line 740 "dchop1.ch"
#line 741 "dchop1.ch"
                    {
#line 741 "dchop1.ch"
                        PPTREE _ptTree0=(PPTREE) 0;
#line 741 "dchop1.ch"
                        _ptTree0 = (PPTREE) 0;
#line 741 "dchop1.ch"
                        {
#line 741 "dchop1.ch"
                            PPTREE _ptTree1= (PPTREE) 0 ;
#line 741 "dchop1.ch"
                            {
#line 741 "dchop1.ch"
                                PPTREE _ptTree2= (PPTREE) 0,_ptRes2= (PPTREE) 0;
#line 741 "dchop1.ch"
                                _ptRes2 = MakeTree(cplus::NEWLINE, 1);
#line 741 "dchop1.ch"
                                _ptTree2 = MakeString("2") ;
#line 741 "dchop1.ch"
                                ReplaceTree(_ptRes2, 1, _ptTree2);
#line 741 "dchop1.ch"
                                _ptTree1 = _ptRes2;
#line 741 "dchop1.ch"
                            }
#line 741 "dchop1.ch"
                            _ptTree0 = AddList( _ptTree0,_ptTree1);
#line 741 "dchop1.ch"
                        }
#line 741 "dchop1.ch"
                        listAttr = _ptTree0;
#line 741 "dchop1.ch"
                        ;
#line 741 "dchop1.ch"
                    }
#line 741 "dchop1.ch"
                    
#line 741 "dchop1.ch"
#line 742 "dchop1.ch"
                    PutAttr(son, listAttr, PRE_ATTR, PUT_END);
#line 742 "dchop1.ch"
#line 743 "dchop1.ch"
                    
#line 743 "dchop1.ch"
#line 743 "dchop1.ch"
                }
#line 743 "dchop1.ch"
#line 744 "dchop1.ch"
    
#line 744 "dchop1.ch"
#line 744 "dchop1.ch"
}
#line 744 "dchop1.ch"

#line 748 "dchop1.ch"

#line 748 "dchop1.ch"
void DecompCplus::TraiterListDeclaration ( PTREE tree )
#line 748 "dchop1.ch"
{
#line 748 "dchop1.ch"
    register PPTREE _inter ;
#line 748 "dchop1.ch"

#line 748 "dchop1.ch"
#line 748 "dchop1.ch"
    int _retVal [2];
    
#line 748 "dchop1.ch"
#line 748 "dchop1.ch"
    PPTREE  _storeVal [2];
    
#line 748 "dchop1.ch"
#line 748 "dchop1.ch"
    int _nextVal ;
    
#line 748 "dchop1.ch"
#line 751 "dchop1.ch"
    PTREE   father = (PTREE)0, fatherOld ;
#line 751 "dchop1.ch"
    
#line 751 "dchop1.ch"
#line 752 "dchop1.ch"
    PTREE   son ;
#line 752 "dchop1.ch"
    
#line 752 "dchop1.ch"
#line 753 "dchop1.ch"
    int x0, y0 ;
    
#line 753 "dchop1.ch"
#line 751 "dchop1.ch"
    (father=FatherTree(tree));
#line 751 "dchop1.ch"
    
#line 751 "dchop1.ch"
#line 757 "dchop1.ch"
    if ( !(((_inter = (PPTREE)father,1) && 
#line 757 "dchop1.ch"
                (NumberTree(_inter) == LIST) &&
#line 757 "dchop1.ch"
                1)) ) 
#line 757 "dchop1.ch"
#line 758 "dchop1.ch"
        return ;
    
#line 758 "dchop1.ch"
#line 759 "dchop1.ch"
    (father?father.Nextl():(PPTREE)0);
#line 759 "dchop1.ch"
#line 760 "dchop1.ch"
    (son=(father?father.Nextl():(PPTREE)0));
#line 760 "dchop1.ch"
    
#line 760 "dchop1.ch"
#line 761 "dchop1.ch"
    if ( !(((_inter = (PPTREE)son,1) && 
#line 761 "dchop1.ch"
                (NumberTree(_inter) == cplus::DECLARATION) &&
#line 761 "dchop1.ch"
                1)) ) {
#line 761 "dchop1.ch"
#line 761 "dchop1.ch"
                        PTREE   _Baum0 ;
#line 761 "dchop1.ch"
                        
#line 761 "dchop1.ch"
#line 764 "dchop1.ch"
                        (fatherOld=(father=FatherTree(tree)));
#line 764 "dchop1.ch"
                        
#line 764 "dchop1.ch"
#line 765 "dchop1.ch"
                        _Baum0 = (PPTREE) 0 ;
#line 765 "dchop1.ch"
                        
#line 765 "dchop1.ch"
#line 765 "dchop1.ch"
                        GetCoordAbs(father, _Baum0, &x0, &y0);
#line 765 "dchop1.ch"
#line 766 "dchop1.ch"
                        MarkCoordTree(father, x0, 0);
#line 766 "dchop1.ch"
#line 769 "dchop1.ch"
                        while ( father && ((_inter = (PPTREE)father,1) && 
#line 769 "dchop1.ch"
                                                (NumberTree(_inter) == LIST) &&
#line 769 "dchop1.ch"
                                                1) ) {
#line 769 "dchop1.ch"
#line 770 "dchop1.ch"
                                                        if ( !(((_inter = (PPTREE)father,1) && 
#line 770 "dchop1.ch"
                                                                    (_retVal[1]=((_storeVal[1]=_inter,_inter=SonTree(_inter,1),1) &&
#line 770 "dchop1.ch"
                                                                        (NumberTree(_inter) == cplus::DECLARATION) &&
#line 770 "dchop1.ch"
                                                                        1),
#line 770 "dchop1.ch"
                                                                        (_inter=_storeVal[1],1),_retVal[1]) &&
#line 770 "dchop1.ch"
                                                                    1)) ) 
#line 770 "dchop1.ch"
#line 771 "dchop1.ch"
                                                            break ;
                                                        
#line 771 "dchop1.ch"
#line 772 "dchop1.ch"
                                                        (fatherOld=father);
#line 772 "dchop1.ch"
                                                        
#line 772 "dchop1.ch"
#line 773 "dchop1.ch"
                                                        (father=FatherTree(father));
#line 773 "dchop1.ch"
                                                        
#line 773 "dchop1.ch"
#line 774 "dchop1.ch"
                                                        
#line 774 "dchop1.ch"
#line 774 "dchop1.ch"
                                                     }
#line 774 "dchop1.ch"
#line 777 "dchop1.ch"
                        TraiterDeclAlign(fatherOld, FatherTree(tree));
#line 777 "dchop1.ch"
#line 780 "dchop1.ch"
                        UnMarkCoordTree(FatherTree(tree));
#line 780 "dchop1.ch"
#line 781 "dchop1.ch"
                        
#line 781 "dchop1.ch"
#line 781 "dchop1.ch"
                      }
#line 781 "dchop1.ch"
#line 782 "dchop1.ch"
    
#line 782 "dchop1.ch"
#line 782 "dchop1.ch"
}
#line 782 "dchop1.ch"

#line 786 "dchop1.ch"

#line 786 "dchop1.ch"
bool DecompCplus::IsVerticalDecl ( PTREE father )
#line 786 "dchop1.ch"
{
#line 786 "dchop1.ch"
    register PPTREE _inter ;
#line 786 "dchop1.ch"

#line 786 "dchop1.ch"
#line 786 "dchop1.ch"
    int _nextVal ;
    
#line 786 "dchop1.ch"
#line 789 "dchop1.ch"
    bool    vertical = false ;
    
#line 789 "dchop1.ch"
#line 792 "dchop1.ch"
    {
#line 792 "dchop1.ch"
#line 793 "dchop1.ch"
        PTREE   listDecl = (PTREE)0 ;
#line 793 "dchop1.ch"
        
#line 793 "dchop1.ch"
#line 794 "dchop1.ch"
        PTREE   oneElem, variable, comm ;
#line 794 "dchop1.ch"
        
#line 794 "dchop1.ch"
#line 793 "dchop1.ch"
        (listDecl=father);
#line 793 "dchop1.ch"
        
#line 793 "dchop1.ch"
#line 795 "dchop1.ch"
        while ( ((oneElem=(listDecl?listDecl.Nextl():(PPTREE)0))) ) {
#line 795 "dchop1.ch"
#line 796 "dchop1.ch"
                                                                            if ( IsComm(oneElem, POST) ) 
#line 796 "dchop1.ch"
#line 797 "dchop1.ch"
                                                                                vertical = true ;
#line 797 "dchop1.ch"
                                                                            else 
#line 800 "dchop1.ch"
                                                                            {
#line 800 "dchop1.ch"
#line 801 "dchop1.ch"
                                                                                PTREE   currElem = (PTREE)0 ;
#line 801 "dchop1.ch"
                                                                                
#line 801 "dchop1.ch"
#line 802 "dchop1.ch"
                                                                                int arity ;
                                                                                
#line 802 "dchop1.ch"
#line 803 "dchop1.ch"
                                                                                bool    search = true ;
                                                                                
#line 803 "dchop1.ch"
#line 801 "dchop1.ch"
                                                                                (currElem=oneElem);
#line 801 "dchop1.ch"
                                                                                
#line 801 "dchop1.ch"
#line 804 "dchop1.ch"
                                                                                while ( search && (arity = currElem.TreeArity()) >= 1 ) {
#line 804 "dchop1.ch"
#line 805 "dchop1.ch"
                                                                                                                                              search = false ;
#line 805 "dchop1.ch"
#line 806 "dchop1.ch"
#line 806 "dchop1.ch"
                                                                                                                                              for (; arity > 0 ; arity-- ) {
#line 806 "dchop1.ch"
#line 807 "dchop1.ch"
                                                                                                                                                                              PTREE son = (PTREE)0 ;
#line 807 "dchop1.ch"
                                                                                                                                                                              
#line 807 "dchop1.ch"
#line 807 "dchop1.ch"
                                                                                                                                                                              (son=SonTree(currElem, arity));
#line 807 "dchop1.ch"
                                                                                                                                                                              
#line 807 "dchop1.ch"
#line 808 "dchop1.ch"
                                                                                                                                                                              if ( !((!son)) ) {
#line 808 "dchop1.ch"
#line 809 "dchop1.ch"
                                                                                                                                                                                                 if ( IsComm(son, POST) ) {
#line 809 "dchop1.ch"
#line 810 "dchop1.ch"
                                                                                                                                                                                                                             PTREE listComm, comm ;
#line 810 "dchop1.ch"
                                                                                                                                                                                                                             
#line 810 "dchop1.ch"
#line 811 "dchop1.ch"
                                                                                                                                                                                                                             while ( ((comm=NextComm(son, POST, 0))) ) {
#line 811 "dchop1.ch"
#line 812 "dchop1.ch"
                                                                                                                                                                                                                                                                             PTREE nextComm ;
#line 812 "dchop1.ch"
                                                                                                                                                                                                                                                                             
#line 812 "dchop1.ch"
#line 813 "dchop1.ch"
                                                                                                                                                                                                                                                                             PTREE elemComm = (PTREE)0 ;
#line 813 "dchop1.ch"
                                                                                                                                                                                                                                                                             
#line 813 "dchop1.ch"
#line 813 "dchop1.ch"
                                                                                                                                                                                                                                                                             (elemComm=comm);
#line 813 "dchop1.ch"
                                                                                                                                                                                                                                                                             
#line 813 "dchop1.ch"
#line 814 "dchop1.ch"
                                                                                                                                                                                                                                                                             if ( ((_inter = (PPTREE)comm,1) && 
#line 814 "dchop1.ch"
                                                                                                                                                                                                                                                                                    (NumberTree(_inter) == LIST) &&
#line 814 "dchop1.ch"
                                                                                                                                                                                                                                                                                    ((nextComm=SonTree(_inter,2)),1) &&
#line 814 "dchop1.ch"
                                                                                                                                                                                                                                                                                    1) ) {
#line 814 "dchop1.ch"
#line 815 "dchop1.ch"
                                                                                                                                                                                                                                                                                         {
#line 815 "dchop1.ch"
                                                                                                                                                                                                                                                                                         PPTREE _ptTree0= (PPTREE) 0,_sonTree0= (PPTREE) 0 ;
#line 815 "dchop1.ch"
                                                                                                                                                                                                                                                                                         if (_ptTree0= fathertree(comm)) {
#line 815 "dchop1.ch"
                                                                                                                                                                                                                                                                                         int rank = ranktree(comm);
#line 815 "dchop1.ch"
                                                                                                                                                                                                                                                                                         ReplaceTree(_ptTree0,rank,nextComm);
#line 815 "dchop1.ch"
                                                                                                                                                                                                                                                                                         }
#line 815 "dchop1.ch"
                                                                                                                                                                                                                                                                                         }
#line 815 "dchop1.ch"
                                                                                                                                                                                                                                                                                         
#line 815 "dchop1.ch"
#line 816 "dchop1.ch"
                                                                                                                                                                                                                                                                                         (listComm=AddListList(listComm, elemComm));
#line 816 "dchop1.ch"
                                                                                                                                                                                                                                                                                         
#line 816 "dchop1.ch"
#line 817 "dchop1.ch"
                                                                                                                                                                                                                                                                                         
#line 817 "dchop1.ch"
#line 817 "dchop1.ch"
                                                                                                                                                                                                                                                                                         }
#line 817 "dchop1.ch"
#line 818 "dchop1.ch"
                                                                                                                                                                                                                                                                             
#line 818 "dchop1.ch"
#line 818 "dchop1.ch"
                                                                                                                                                                                                                                                                             }
#line 818 "dchop1.ch"
#line 819 "dchop1.ch"
                                                                                                                                                                                                                             (comm=COMM_SON_VALUE((PPTREE)oneElem));
#line 819 "dchop1.ch"
                                                                                                                                                                                                                             
#line 819 "dchop1.ch"
#line 820 "dchop1.ch"
                                                                                                                                                                                                                             if ( (!comm) ) 
#line 820 "dchop1.ch"
#line 821 "dchop1.ch"
                                                                                                                                                                                                                             PutComm(COMM_FATHER_VALUE((PPTREE)oneElem), listComm);
#line 821 "dchop1.ch"
                                                                                                                                                                                                                             else 
#line 822 "dchop1.ch"
                                                                                                                                                                                                                             {
#line 822 "dchop1.ch"
#line 823 "dchop1.ch"
                                                                                                                                                                                                                             (listComm=AddListList(listComm, comm));
#line 823 "dchop1.ch"
                                                                                                                                                                                                                             
#line 823 "dchop1.ch"
#line 824 "dchop1.ch"
                                                                                                                                                                                                                             PutComm(COMM_FATHER_VALUE((PPTREE)oneElem), listComm);
#line 824 "dchop1.ch"
#line 825 "dchop1.ch"
                                                                                                                                                                                                                             
#line 825 "dchop1.ch"
#line 825 "dchop1.ch"
                                                                                                                                                                                                                             }
                                                                                                                                                                                                                             
#line 825 "dchop1.ch"
#line 826 "dchop1.ch"
                                                                                                                                                                                                                             vertical = true ;
#line 826 "dchop1.ch"
#line 827 "dchop1.ch"
                                                                                                                                                                                                                             break ;
                                                                                                                                                                                                                             
#line 827 "dchop1.ch"
#line 828 "dchop1.ch"
                                                                                                                                                                                                                             
#line 828 "dchop1.ch"
#line 828 "dchop1.ch"
                                                                                                                                                                                                                             } else 
#line 828 "dchop1.ch"
                                                                                                                                                                                                 {
#line 828 "dchop1.ch"
#line 829 "dchop1.ch"
                                                                                                                                                                                                 (currElem=son);
#line 829 "dchop1.ch"
                                                                                                                                                                                                 
#line 829 "dchop1.ch"
#line 830 "dchop1.ch"
                                                                                                                                                                                                 search = true ;
#line 830 "dchop1.ch"
#line 831 "dchop1.ch"
                                                                                                                                                                                                 break ;
                                                                                                                                                                                                 
#line 831 "dchop1.ch"
#line 832 "dchop1.ch"
                                                                                                                                                                                                 
#line 832 "dchop1.ch"
#line 832 "dchop1.ch"
                                                                                                                                                                                                 }
                                                                                                                                                                                                 
#line 832 "dchop1.ch"
#line 833 "dchop1.ch"
                                                                                                                                                                                                 
#line 833 "dchop1.ch"
#line 833 "dchop1.ch"
                                                                                                                                                                                                 }
#line 833 "dchop1.ch"
#line 834 "dchop1.ch"
                                                                                                                                                                              
#line 834 "dchop1.ch"
#line 834 "dchop1.ch"
                                                                                                                                                                              }
#line 834 "dchop1.ch"
                                                                                                                                              
#line 834 "dchop1.ch"
#line 835 "dchop1.ch"
                                                                                                                                              
#line 835 "dchop1.ch"
#line 835 "dchop1.ch"
                                                                                                                                              }
#line 835 "dchop1.ch"
#line 836 "dchop1.ch"
                                                                                
#line 836 "dchop1.ch"
#line 836 "dchop1.ch"
                                                                            }
                                                                            
#line 836 "dchop1.ch"
#line 837 "dchop1.ch"
                                                                            
#line 837 "dchop1.ch"
#line 837 "dchop1.ch"
                                                                         }
#line 837 "dchop1.ch"
#line 838 "dchop1.ch"
        
#line 838 "dchop1.ch"
#line 838 "dchop1.ch"
    }
    
#line 838 "dchop1.ch"
#line 839 "dchop1.ch"
    return vertical ;
    
#line 839 "dchop1.ch"
#line 840 "dchop1.ch"
    
#line 840 "dchop1.ch"
#line 840 "dchop1.ch"
}
#line 840 "dchop1.ch"

#line 844 "dchop1.ch"

#line 844 "dchop1.ch"
void DecompCplus::TraiterListDeclarator ( PTREE father )
#line 844 "dchop1.ch"
{
#line 844 "dchop1.ch"
    register PPTREE _inter ;
#line 844 "dchop1.ch"

#line 844 "dchop1.ch"
#line 844 "dchop1.ch"
    PTREE   _Baum0 ;
#line 844 "dchop1.ch"
    
#line 844 "dchop1.ch"
#line 844 "dchop1.ch"
    int _nextVal ;
    
#line 844 "dchop1.ch"
#line 847 "dchop1.ch"
    PTREE   tree, fatherOld ;
#line 847 "dchop1.ch"
    
#line 847 "dchop1.ch"
#line 848 "dchop1.ch"
    PTREE   fatherFirst = (PTREE)0 ;
#line 848 "dchop1.ch"
    
#line 848 "dchop1.ch"
#line 849 "dchop1.ch"
    PTREE   son ;
#line 849 "dchop1.ch"
    
#line 849 "dchop1.ch"
#line 850 "dchop1.ch"
    int x0, y0 ;
    
#line 850 "dchop1.ch"
#line 848 "dchop1.ch"
    (fatherFirst=father);
#line 848 "dchop1.ch"
    
#line 848 "dchop1.ch"
#line 854 "dchop1.ch"
    if ( !(((_inter = (PPTREE)father,1) && 
#line 854 "dchop1.ch"
                (NumberTree(_inter) == LIST) &&
#line 854 "dchop1.ch"
                1)) || !IsVerticalDecl(father) ) 
#line 854 "dchop1.ch"
#line 855 "dchop1.ch"
        return ;
    
#line 855 "dchop1.ch"
#line 856 "dchop1.ch"
    while ( father ) {
#line 856 "dchop1.ch"
#line 857 "dchop1.ch"
                        (fatherOld=father);
#line 857 "dchop1.ch"
                        
#line 857 "dchop1.ch"
#line 858 "dchop1.ch"
                        (father?father.Nextl():(PPTREE)0);
#line 858 "dchop1.ch"
#line 859 "dchop1.ch"
                        
#line 859 "dchop1.ch"
#line 859 "dchop1.ch"
                      }
#line 859 "dchop1.ch"
#line 860 "dchop1.ch"
    ((_inter = (PPTREE)fatherOld,1) && 
#line 860 "dchop1.ch"
        ((tree=SonTree(_inter,1)),1) &&
#line 860 "dchop1.ch"
        1);
#line 860 "dchop1.ch"
    ;
#line 860 "dchop1.ch"
#line 861 "dchop1.ch"
    (father=fatherOld);
#line 861 "dchop1.ch"
    
#line 861 "dchop1.ch"
#line 864 "dchop1.ch"
    _Baum0 = (PPTREE) 0 ;
#line 864 "dchop1.ch"
    
#line 864 "dchop1.ch"
#line 864 "dchop1.ch"
    GetCoordAbs(father, _Baum0, &x0, &y0);
#line 864 "dchop1.ch"
#line 865 "dchop1.ch"
    MarkCoordTree(father, x0, 0);
#line 865 "dchop1.ch"
#line 868 "dchop1.ch"
    TraiterDeclAlign(fatherFirst, FatherTree(tree), true);
#line 868 "dchop1.ch"
#line 871 "dchop1.ch"
    UnMarkCoordTree(FatherTree(tree));
#line 871 "dchop1.ch"
#line 872 "dchop1.ch"
    
#line 872 "dchop1.ch"
#line 872 "dchop1.ch"
}
#line 872 "dchop1.ch"

#line 876 "dchop1.ch"

#line 876 "dchop1.ch"
int DecompCplus::ComputeStart ( PTREE start, PTREE end )
#line 876 "dchop1.ch"
{
#line 876 "dchop1.ch"
    register PPTREE _inter ;
#line 876 "dchop1.ch"

#line 876 "dchop1.ch"
#line 876 "dchop1.ch"
    int _retVal [2];
    
#line 876 "dchop1.ch"
#line 876 "dchop1.ch"
    PPTREE  _storeVal [2];
    
#line 876 "dchop1.ch"
#line 876 "dchop1.ch"
    int _nextVal ;
    
#line 876 "dchop1.ch"
#line 879 "dchop1.ch"
    int x, y, dx, dy ;
    
#line 879 "dchop1.ch"
#line 880 "dchop1.ch"
    int x0 = -1, y0 ;
    
#line 880 "dchop1.ch"
#line 881 "dchop1.ch"
    int maxPos = 0 ;
    
#line 881 "dchop1.ch"
#line 882 "dchop1.ch"
    PTREE   son ;
#line 882 "dchop1.ch"
    
#line 882 "dchop1.ch"
#line 884 "dchop1.ch"
    if ( end == start ) 
#line 884 "dchop1.ch"
#line 885 "dchop1.ch"
        return 0 ;
    
#line 885 "dchop1.ch"
#line 886 "dchop1.ch"
    (end?end.Nextl():(PPTREE)0);
#line 886 "dchop1.ch"
#line 889 "dchop1.ch"
    while ( start && start != end ) {
#line 889 "dchop1.ch"
#line 890 "dchop1.ch"
                                        (son=(start?start.Nextl():(PPTREE)0));
#line 890 "dchop1.ch"
                                        
#line 890 "dchop1.ch"
#line 891 "dchop1.ch"
                                        if ( ((_inter = (PPTREE)son,1) && 
#line 891 "dchop1.ch"
                                                (NumberTree(_inter) == cplus::DECLARATION) &&
#line 891 "dchop1.ch"
                                                (_retVal[1]=((_storeVal[1]=_inter,_inter=SonTree(_inter,3),1) &&
#line 891 "dchop1.ch"
                                                    (NumberTree(_inter) == LIST) &&
#line 891 "dchop1.ch"
                                                    ((son=SonTree(_inter,1)),1) &&
#line 891 "dchop1.ch"
                                                    1),
#line 891 "dchop1.ch"
                                                    (_inter=_storeVal[1],1),_retVal[1]) &&
#line 891 "dchop1.ch"
                                                1) ) {
#line 891 "dchop1.ch"
#line 892 "dchop1.ch"
                                                        GetCoord(son, &x, &y, &dx, &dy);
#line 892 "dchop1.ch"
#line 893 "dchop1.ch"
                                                        if ( x0 < 0 ) {
#line 893 "dchop1.ch"
#line 893 "dchop1.ch"
                                                                            PTREE   _Baum0 ;
#line 893 "dchop1.ch"
                                                                            
#line 893 "dchop1.ch"
#line 894 "dchop1.ch"
                                                                            _Baum0 = (PPTREE) 0 ;
#line 894 "dchop1.ch"
                                                                            
#line 894 "dchop1.ch"
#line 894 "dchop1.ch"
                                                                            GetCoordAbs(son, _Baum0, &x0, &y0);
#line 894 "dchop1.ch"
#line 895 "dchop1.ch"
                                                                            
#line 895 "dchop1.ch"
#line 895 "dchop1.ch"
                                                                        }
#line 895 "dchop1.ch"
#line 896 "dchop1.ch"
                                                        if ( x > maxPos && x + x0 <= MAX_REALIGN ) 
#line 896 "dchop1.ch"
#line 897 "dchop1.ch"
                                                            maxPos = x ;
#line 897 "dchop1.ch"
#line 898 "dchop1.ch"
                                                        
#line 898 "dchop1.ch"
#line 898 "dchop1.ch"
                                                     }
#line 898 "dchop1.ch"
#line 899 "dchop1.ch"
                                        
#line 899 "dchop1.ch"
#line 899 "dchop1.ch"
                                       }
#line 899 "dchop1.ch"
#line 902 "dchop1.ch"
    if ( !declAlign ) 
#line 902 "dchop1.ch"
#line 903 "dchop1.ch"
        return -1 ;
    
#line 903 "dchop1.ch"
    else 
#line 903 "dchop1.ch"
#line 905 "dchop1.ch"
        return maxPos ;
        
#line 905 "dchop1.ch"
    
#line 905 "dchop1.ch"
#line 906 "dchop1.ch"
    
#line 906 "dchop1.ch"
#line 906 "dchop1.ch"
}
#line 906 "dchop1.ch"

#line 910 "dchop1.ch"

#line 910 "dchop1.ch"
void DecompCplus::SetStart ( PTREE start, PTREE end, int pos )
#line 910 "dchop1.ch"
{
#line 910 "dchop1.ch"
    register PPTREE _inter ;
#line 910 "dchop1.ch"

#line 910 "dchop1.ch"
#line 910 "dchop1.ch"
    int _retVal [2];
    
#line 910 "dchop1.ch"
#line 910 "dchop1.ch"
    PPTREE  _storeVal [2];
    
#line 910 "dchop1.ch"
#line 910 "dchop1.ch"
    int _nextVal ;
    
#line 910 "dchop1.ch"
#line 913 "dchop1.ch"
    int x0, y0 ;
    
#line 913 "dchop1.ch"
#line 914 "dchop1.ch"
    int x, y, dx, dy ;
    
#line 914 "dchop1.ch"
#line 915 "dchop1.ch"
    PTREE   son, decl ;
#line 915 "dchop1.ch"
    
#line 915 "dchop1.ch"
#line 916 "dchop1.ch"
    PTREE   list ;
#line 916 "dchop1.ch"
    
#line 916 "dchop1.ch"
#line 917 "dchop1.ch"
    int delta ;
    
#line 917 "dchop1.ch"
#line 918 "dchop1.ch"
    PTREE   listAttr ;
#line 918 "dchop1.ch"
    
#line 918 "dchop1.ch"
#line 919 "dchop1.ch"
    char    string [10];
    
#line 919 "dchop1.ch"
#line 920 "dchop1.ch"
    int first = 1 ;
    
#line 920 "dchop1.ch"
#line 922 "dchop1.ch"
    if ( end == start ) 
#line 922 "dchop1.ch"
#line 923 "dchop1.ch"
        return ;
    
#line 923 "dchop1.ch"
#line 924 "dchop1.ch"
    (end?end.Nextl():(PPTREE)0);
#line 924 "dchop1.ch"
#line 925 "dchop1.ch"
    if ( !pos ) 
#line 925 "dchop1.ch"
#line 926 "dchop1.ch"
        return ;
    
#line 926 "dchop1.ch"
#line 927 "dchop1.ch"
    pos++ ;
#line 927 "dchop1.ch"
#line 930 "dchop1.ch"
    while ( start && start != end ) {
#line 930 "dchop1.ch"
#line 931 "dchop1.ch"
                                        (son=(start?start.Nextl():(PPTREE)0));
#line 931 "dchop1.ch"
                                        
#line 931 "dchop1.ch"
#line 932 "dchop1.ch"
                                        if ( ((_inter = (PPTREE)son,1) && 
#line 932 "dchop1.ch"
                                                (NumberTree(_inter) == cplus::DECLARATION) &&
#line 932 "dchop1.ch"
                                                (_retVal[1]=((_storeVal[1]=_inter,_inter=SonTree(_inter,3),1) &&
#line 932 "dchop1.ch"
                                                    (NumberTree(_inter) == LIST) &&
#line 932 "dchop1.ch"
                                                    ((decl=SonTree(_inter,1)),1) &&
#line 932 "dchop1.ch"
                                                    1),
#line 932 "dchop1.ch"
                                                    (_inter=_storeVal[1],1),_retVal[1]) &&
#line 932 "dchop1.ch"
                                                1) ) {
#line 932 "dchop1.ch"
#line 933 "dchop1.ch"
                                                        GetCoord(decl, &x, &y, &dx, &dy);
#line 933 "dchop1.ch"
#line 934 "dchop1.ch"
                                                        if ( (delta = pos - x) >= 0 ) {
#line 934 "dchop1.ch"
#line 935 "dchop1.ch"
                                                                                            if ( first ) {
#line 935 "dchop1.ch"
#line 935 "dchop1.ch"
                                                                                                            PTREE   _Baum0 ;
#line 935 "dchop1.ch"
                                                                                                            
#line 935 "dchop1.ch"
#line 936 "dchop1.ch"
                                                                                                            first = 0 ;
#line 936 "dchop1.ch"
#line 937 "dchop1.ch"
                                                                                                            _Baum0 = (PPTREE) 0 ;
#line 937 "dchop1.ch"
                                                                                                            
#line 937 "dchop1.ch"
#line 937 "dchop1.ch"
                                                                                                            GetCoordAbs(son, _Baum0, &x0, &y0);
#line 937 "dchop1.ch"
#line 940 "dchop1.ch"
                                                                                                            sprintf(string, "%d", pos + x0);
#line 940 "dchop1.ch"
#line 941 "dchop1.ch"
                                                                                                            
#line 941 "dchop1.ch"
#line 941 "dchop1.ch"
                                                                                                          }
#line 941 "dchop1.ch"
#line 942 "dchop1.ch"
                                                                                            {
#line 942 "dchop1.ch"
                                                                                                PPTREE _ptTree0=(PPTREE) 0;
#line 942 "dchop1.ch"
                                                                                                _ptTree0 = (PPTREE) 0;
#line 942 "dchop1.ch"
                                                                                                {
#line 942 "dchop1.ch"
                                                                                                    PPTREE _ptTree1= (PPTREE) 0 ;
#line 942 "dchop1.ch"
                                                                                                    {
#line 942 "dchop1.ch"
                                                                                                        PPTREE _ptTree2= (PPTREE) 0,_ptRes2= (PPTREE) 0;
#line 942 "dchop1.ch"
                                                                                                        _ptRes2 = MakeTree(cplus::GOTO, 1);
#line 942 "dchop1.ch"
                                                                                                        _ptTree2 = StoreRef(MakeString(string));
#line 942 "dchop1.ch"
                                                                                                        ReplaceTree(_ptRes2, 1, _ptTree2);
#line 942 "dchop1.ch"
                                                                                                        _ptTree1 = _ptRes2;
#line 942 "dchop1.ch"
                                                                                                    }
#line 942 "dchop1.ch"
                                                                                                    _ptTree0 = AddList( _ptTree0,_ptTree1);
#line 942 "dchop1.ch"
                                                                                                }
#line 942 "dchop1.ch"
                                                                                                listAttr = _ptTree0;
#line 942 "dchop1.ch"
                                                                                                ;
#line 942 "dchop1.ch"
                                                                                            }
#line 942 "dchop1.ch"
                                                                                            
#line 942 "dchop1.ch"
#line 943 "dchop1.ch"
                                                                                            PutAttr(decl, listAttr, PRE_ATTR, PUT_BEG);
#line 943 "dchop1.ch"
#line 944 "dchop1.ch"
                                                                                            GetCoord(son, &x, &y, &dx, &dy);
#line 944 "dchop1.ch"
#line 945 "dchop1.ch"
                                                                                            PutCoord(son, x, y, dx + delta, dy);
#line 945 "dchop1.ch"
#line 946 "dchop1.ch"
                                                                                            (list=SFatherTree(decl,LIST));
#line 946 "dchop1.ch"
                                                                                            
#line 946 "dchop1.ch"
#line 947 "dchop1.ch"
                                                                                            while ( ((decl=(list?list.Nextl():(PPTREE)0))) ) {
#line 947 "dchop1.ch"
#line 948 "dchop1.ch"
                                                                                                                                                  GetCoord(decl, &x, &y, &dx, &dy);
#line 948 "dchop1.ch"
#line 949 "dchop1.ch"
                                                                                                                                                  PutCoord(decl, x + delta, y, dx, dy);
#line 949 "dchop1.ch"
#line 950 "dchop1.ch"
                                                                                                                                                  
#line 950 "dchop1.ch"
#line 950 "dchop1.ch"
                                                                                                                                                  }
#line 950 "dchop1.ch"
#line 951 "dchop1.ch"
                                                                                            
#line 951 "dchop1.ch"
#line 951 "dchop1.ch"
                                                                                           }
#line 951 "dchop1.ch"
#line 952 "dchop1.ch"
                                                        
#line 952 "dchop1.ch"
#line 952 "dchop1.ch"
                                                     }
#line 952 "dchop1.ch"
#line 953 "dchop1.ch"
                                        
#line 953 "dchop1.ch"
#line 953 "dchop1.ch"
                                       }
#line 953 "dchop1.ch"
#line 954 "dchop1.ch"
    
#line 954 "dchop1.ch"
#line 954 "dchop1.ch"
}
#line 954 "dchop1.ch"

#line 958 "dchop1.ch"

#line 958 "dchop1.ch"
void DecompCplus::TraiterAlignTypeDecl ( PTREE tree )
#line 958 "dchop1.ch"
{
#line 958 "dchop1.ch"
    register PPTREE _inter ;
#line 958 "dchop1.ch"

#line 958 "dchop1.ch"
#line 958 "dchop1.ch"
    int _retVal [2];
    
#line 958 "dchop1.ch"
#line 958 "dchop1.ch"
    PPTREE  _storeVal [2];
    
#line 958 "dchop1.ch"
#line 958 "dchop1.ch"
    int _nextVal ;
    
#line 958 "dchop1.ch"
#line 961 "dchop1.ch"
    PTREE   father = (PTREE)0, fatherOld ;
#line 961 "dchop1.ch"
    
#line 961 "dchop1.ch"
#line 962 "dchop1.ch"
    PTREE   son ;
#line 962 "dchop1.ch"
    
#line 962 "dchop1.ch"
#line 963 "dchop1.ch"
    int x0, y0 ;
    
#line 963 "dchop1.ch"
#line 961 "dchop1.ch"
    (father=FatherTree(tree));
#line 961 "dchop1.ch"
    
#line 961 "dchop1.ch"
#line 967 "dchop1.ch"
    if ( !(((_inter = (PPTREE)father,1) && 
#line 967 "dchop1.ch"
                (NumberTree(_inter) == LIST) &&
#line 967 "dchop1.ch"
                1)) ) 
#line 967 "dchop1.ch"
#line 968 "dchop1.ch"
        return ;
    
#line 968 "dchop1.ch"
#line 969 "dchop1.ch"
    (father?father.Nextl():(PPTREE)0);
#line 969 "dchop1.ch"
#line 970 "dchop1.ch"
    if ( father ) 
#line 970 "dchop1.ch"
#line 971 "dchop1.ch"
        (son=(father?father.Nextl():(PPTREE)0));
#line 971 "dchop1.ch"
    
#line 971 "dchop1.ch"
#line 972 "dchop1.ch"
    if ( !(((_inter = (PPTREE)son,1) && 
#line 972 "dchop1.ch"
                (NumberTree(_inter) == cplus::DECLARATION) &&
#line 972 "dchop1.ch"
                1)) ) {
#line 972 "dchop1.ch"
#line 972 "dchop1.ch"
                        PTREE   _Baum0 ;
#line 972 "dchop1.ch"
                        
#line 972 "dchop1.ch"
#line 975 "dchop1.ch"
                        (fatherOld=(father=FatherTree(tree)));
#line 975 "dchop1.ch"
                        
#line 975 "dchop1.ch"
#line 976 "dchop1.ch"
                        _Baum0 = (PPTREE) 0 ;
#line 976 "dchop1.ch"
                        
#line 976 "dchop1.ch"
#line 976 "dchop1.ch"
                        GetCoordAbs(father, _Baum0, &x0, &y0);
#line 976 "dchop1.ch"
#line 977 "dchop1.ch"
                        MarkCoordTree(father, x0, 0);
#line 977 "dchop1.ch"
#line 980 "dchop1.ch"
                        while ( father && ((_inter = (PPTREE)father,1) && 
#line 980 "dchop1.ch"
                                                (NumberTree(_inter) == LIST) &&
#line 980 "dchop1.ch"
                                                1) ) {
#line 980 "dchop1.ch"
#line 981 "dchop1.ch"
                                                        if ( !(((_inter = (PPTREE)father,1) && 
#line 981 "dchop1.ch"
                                                                    (_retVal[1]=((_storeVal[1]=_inter,_inter=SonTree(_inter,1),1) &&
#line 981 "dchop1.ch"
                                                                        (NumberTree(_inter) == cplus::DECLARATION) &&
#line 981 "dchop1.ch"
                                                                        1),
#line 981 "dchop1.ch"
                                                                        (_inter=_storeVal[1],1),_retVal[1]) &&
#line 981 "dchop1.ch"
                                                                    1)) ) 
#line 981 "dchop1.ch"
#line 982 "dchop1.ch"
                                                            break ;
                                                        
#line 982 "dchop1.ch"
#line 983 "dchop1.ch"
                                                        (fatherOld=father);
#line 983 "dchop1.ch"
                                                        
#line 983 "dchop1.ch"
#line 984 "dchop1.ch"
                                                        (father=FatherTree(father));
#line 984 "dchop1.ch"
                                                        
#line 984 "dchop1.ch"
#line 985 "dchop1.ch"
                                                        
#line 985 "dchop1.ch"
#line 985 "dchop1.ch"
                                                     }
#line 985 "dchop1.ch"
#line 988 "dchop1.ch"
                        SetStart(fatherOld, FatherTree(tree), ComputeStart(fatherOld, FatherTree(tree)));
#line 988 "dchop1.ch"
#line 991 "dchop1.ch"
                        UnMarkCoordTree(FatherTree(tree));
#line 991 "dchop1.ch"
#line 992 "dchop1.ch"
                        
#line 992 "dchop1.ch"
#line 992 "dchop1.ch"
                      }
#line 992 "dchop1.ch"
#line 993 "dchop1.ch"
    
#line 993 "dchop1.ch"
#line 993 "dchop1.ch"
}
#line 993 "dchop1.ch"

#line 997 "dchop1.ch"

#line 997 "dchop1.ch"
int DecompCplus::ComputeStartAff ( PTREE start, PTREE end )
#line 997 "dchop1.ch"
{
#line 997 "dchop1.ch"
    register PPTREE _inter ;
#line 997 "dchop1.ch"

#line 997 "dchop1.ch"
#line 997 "dchop1.ch"
    int _nextVal ;
    
#line 997 "dchop1.ch"
#line 1000 "dchop1.ch"
    int x, y, dx, dy ;
    
#line 1000 "dchop1.ch"
#line 1001 "dchop1.ch"
    int x0 = -1, y0 ;
    
#line 1001 "dchop1.ch"
#line 1002 "dchop1.ch"
    int maxPos = 0 ;
    
#line 1002 "dchop1.ch"
#line 1003 "dchop1.ch"
    PTREE   son ;
#line 1003 "dchop1.ch"
    
#line 1003 "dchop1.ch"
#line 1004 "dchop1.ch"
    PTREE   name ;
#line 1004 "dchop1.ch"
    
#line 1004 "dchop1.ch"
#line 1006 "dchop1.ch"
    if ( end == start ) 
#line 1006 "dchop1.ch"
#line 1007 "dchop1.ch"
        return 0 ;
    
#line 1007 "dchop1.ch"
#line 1008 "dchop1.ch"
    (end?end.Nextl():(PPTREE)0);
#line 1008 "dchop1.ch"
#line 1011 "dchop1.ch"
    while ( start && start != end ) {
#line 1011 "dchop1.ch"
#line 1012 "dchop1.ch"
                                        (son=(start?start.Nextl():(PPTREE)0));
#line 1012 "dchop1.ch"
                                        
#line 1012 "dchop1.ch"
#line 1013 "dchop1.ch"
                                        if ( ((_inter = (PPTREE)son,1) && 
#line 1013 "dchop1.ch"
                                                ((name=SonTree(_inter,1)),1) &&
#line 1013 "dchop1.ch"
                                                1) ) {
#line 1013 "dchop1.ch"
#line 1014 "dchop1.ch"
                                                        GetCoord(name, &x, &y, &dx, &dy);
#line 1014 "dchop1.ch"
#line 1015 "dchop1.ch"
                                                        if ( x0 < 0 ) {
#line 1015 "dchop1.ch"
#line 1015 "dchop1.ch"
                                                                            PTREE   _Baum0 ;
#line 1015 "dchop1.ch"
                                                                            
#line 1015 "dchop1.ch"
#line 1016 "dchop1.ch"
                                                                            _Baum0 = (PPTREE) 0 ;
#line 1016 "dchop1.ch"
                                                                            
#line 1016 "dchop1.ch"
#line 1016 "dchop1.ch"
                                                                            GetCoordAbs(son, _Baum0, &x0, &y0);
#line 1016 "dchop1.ch"
#line 1017 "dchop1.ch"
                                                                            
#line 1017 "dchop1.ch"
#line 1017 "dchop1.ch"
                                                                        }
#line 1017 "dchop1.ch"
#line 1018 "dchop1.ch"
                                                        if ( x + dx > maxPos && x + dx + x0 <= MAX_REALIGN ) 
#line 1018 "dchop1.ch"
#line 1019 "dchop1.ch"
                                                            maxPos = x + dx ;
#line 1019 "dchop1.ch"
#line 1020 "dchop1.ch"
                                                        
#line 1020 "dchop1.ch"
#line 1020 "dchop1.ch"
                                                     }
#line 1020 "dchop1.ch"
#line 1021 "dchop1.ch"
                                        
#line 1021 "dchop1.ch"
#line 1021 "dchop1.ch"
                                       }
#line 1021 "dchop1.ch"
#line 1024 "dchop1.ch"
    return maxPos ;
    
#line 1024 "dchop1.ch"
#line 1025 "dchop1.ch"
    
#line 1025 "dchop1.ch"
#line 1025 "dchop1.ch"
}
#line 1025 "dchop1.ch"

#line 1029 "dchop1.ch"

#line 1029 "dchop1.ch"
void DecompCplus::SetStartAff ( PTREE start, PTREE end, int pos )
#line 1029 "dchop1.ch"
{
#line 1029 "dchop1.ch"
    register PPTREE _inter ;
#line 1029 "dchop1.ch"

#line 1029 "dchop1.ch"
#line 1029 "dchop1.ch"
    int _nextVal ;
    
#line 1029 "dchop1.ch"
#line 1032 "dchop1.ch"
    int x0, y0 ;
    
#line 1032 "dchop1.ch"
#line 1033 "dchop1.ch"
    int x, y, dx, dy ;
    
#line 1033 "dchop1.ch"
#line 1034 "dchop1.ch"
    PTREE   son, decl ;
#line 1034 "dchop1.ch"
    
#line 1034 "dchop1.ch"
#line 1035 "dchop1.ch"
    PTREE   list ;
#line 1035 "dchop1.ch"
    
#line 1035 "dchop1.ch"
#line 1036 "dchop1.ch"
    int delta ;
    
#line 1036 "dchop1.ch"
#line 1037 "dchop1.ch"
    PTREE   listAttr ;
#line 1037 "dchop1.ch"
    
#line 1037 "dchop1.ch"
#line 1038 "dchop1.ch"
    char    string [10];
    
#line 1038 "dchop1.ch"
#line 1039 "dchop1.ch"
    int first = 1 ;
    
#line 1039 "dchop1.ch"
#line 1040 "dchop1.ch"
    PTREE   name ;
#line 1040 "dchop1.ch"
    
#line 1040 "dchop1.ch"
#line 1041 "dchop1.ch"
    PTREE   assignment ;
#line 1041 "dchop1.ch"
    
#line 1041 "dchop1.ch"
#line 1043 "dchop1.ch"
    if ( end == start ) 
#line 1043 "dchop1.ch"
#line 1044 "dchop1.ch"
        return ;
    
#line 1044 "dchop1.ch"
#line 1045 "dchop1.ch"
    (end?end.Nextl():(PPTREE)0);
#line 1045 "dchop1.ch"
#line 1046 "dchop1.ch"
    if ( !pos ) 
#line 1046 "dchop1.ch"
#line 1047 "dchop1.ch"
        return ;
    
#line 1047 "dchop1.ch"
#line 1048 "dchop1.ch"
    pos += 2 ;
#line 1048 "dchop1.ch"
#line 1051 "dchop1.ch"
    while ( start && start != end ) {
#line 1051 "dchop1.ch"
#line 1052 "dchop1.ch"
                                        (son=(start?start.Nextl():(PPTREE)0));
#line 1052 "dchop1.ch"
                                        
#line 1052 "dchop1.ch"
#line 1053 "dchop1.ch"
                                        if ( ((_inter = (PPTREE)son,1) && 
#line 1053 "dchop1.ch"
                                                ((name=SonTree(_inter,1)),1) &&
#line 1053 "dchop1.ch"
                                                ((assignment=SonTree(_inter,2)),1) &&
#line 1053 "dchop1.ch"
                                                1) ) {
#line 1053 "dchop1.ch"
#line 1054 "dchop1.ch"
                                                        GetCoord(name, &x, &y, &dx, &dy);
#line 1054 "dchop1.ch"
#line 1055 "dchop1.ch"
                                                        if ( (delta = pos - x - dx) >= 0 ) {
#line 1055 "dchop1.ch"
#line 1056 "dchop1.ch"
                                                                                                    if ( first ) {
#line 1056 "dchop1.ch"
#line 1056 "dchop1.ch"
                                                                                                                    PTREE _Baum0 ;
#line 1056 "dchop1.ch"
                                                                                                                    
#line 1056 "dchop1.ch"
#line 1057 "dchop1.ch"
                                                                                                                    first = 0 ;
#line 1057 "dchop1.ch"
#line 1058 "dchop1.ch"
                                                                                                                    _Baum0 = (PPTREE) 0 ;
#line 1058 "dchop1.ch"
                                                                                                                    
#line 1058 "dchop1.ch"
#line 1058 "dchop1.ch"
                                                                                                                    GetCoordAbs(son, _Baum0, &x0, &y0);
#line 1058 "dchop1.ch"
#line 1061 "dchop1.ch"
                                                                                                                    sprintf(string, "%d", pos + x0);
#line 1061 "dchop1.ch"
#line 1062 "dchop1.ch"
                                                                                                                    
#line 1062 "dchop1.ch"
#line 1062 "dchop1.ch"
                                                                                                                  }
#line 1062 "dchop1.ch"
#line 1063 "dchop1.ch"
                                                                                                    {
#line 1063 "dchop1.ch"
                                                                                                        PPTREE _ptTree0=(PPTREE) 0;
#line 1063 "dchop1.ch"
                                                                                                        _ptTree0 = (PPTREE) 0;
#line 1063 "dchop1.ch"
                                                                                                        {
#line 1063 "dchop1.ch"
                                                                                                            PPTREE _ptTree1= (PPTREE) 0 ;
#line 1063 "dchop1.ch"
                                                                                                            {
#line 1063 "dchop1.ch"
                                                                                                                PPTREE _ptTree2= (PPTREE) 0,_ptRes2= (PPTREE) 0;
#line 1063 "dchop1.ch"
                                                                                                                _ptRes2 = MakeTree(cplus::GOTO, 1);
#line 1063 "dchop1.ch"
                                                                                                                _ptTree2 = StoreRef(MakeString(string));
#line 1063 "dchop1.ch"
                                                                                                                ReplaceTree(_ptRes2, 1, _ptTree2);
#line 1063 "dchop1.ch"
                                                                                                                _ptTree1 = _ptRes2;
#line 1063 "dchop1.ch"
                                                                                                            }
#line 1063 "dchop1.ch"
                                                                                                            _ptTree0 = AddList( _ptTree0,_ptTree1);
#line 1063 "dchop1.ch"
                                                                                                        }
#line 1063 "dchop1.ch"
                                                                                                        listAttr = _ptTree0;
#line 1063 "dchop1.ch"
                                                                                                        ;
#line 1063 "dchop1.ch"
                                                                                                    }
#line 1063 "dchop1.ch"
                                                                                                    
#line 1063 "dchop1.ch"
#line 1064 "dchop1.ch"
                                                                                                    PutAttr(name, listAttr, POST_ATTR, PUT_END);
#line 1064 "dchop1.ch"
#line 1065 "dchop1.ch"
                                                                                                    GetCoord(son, &x, &y, &dx, &dy);
#line 1065 "dchop1.ch"
#line 1066 "dchop1.ch"
                                                                                                    PutCoord(son, x, y, dx + delta, dy);
#line 1066 "dchop1.ch"
#line 1067 "dchop1.ch"
                                                                                                    GetCoord(assignment, &x, &y, &dx, &dy);
#line 1067 "dchop1.ch"
#line 1068 "dchop1.ch"
                                                                                                    PutCoord(assignment, x + delta, y, dx, dy);
#line 1068 "dchop1.ch"
#line 1069 "dchop1.ch"
                                                                                                    
#line 1069 "dchop1.ch"
#line 1069 "dchop1.ch"
                                                                                                 }
#line 1069 "dchop1.ch"
#line 1070 "dchop1.ch"
                                                        
#line 1070 "dchop1.ch"
#line 1070 "dchop1.ch"
                                                     }
#line 1070 "dchop1.ch"
#line 1071 "dchop1.ch"
                                        
#line 1071 "dchop1.ch"
#line 1071 "dchop1.ch"
                                       }
#line 1071 "dchop1.ch"
#line 1072 "dchop1.ch"
    
#line 1072 "dchop1.ch"
#line 1072 "dchop1.ch"
}
#line 1072 "dchop1.ch"

#line 1076 "dchop1.ch"

#line 1076 "dchop1.ch"
void DecompCplus::TraiterAlignAff ( PTREE tree )
#line 1076 "dchop1.ch"
{
#line 1076 "dchop1.ch"
    register PPTREE _inter ;
#line 1076 "dchop1.ch"

#line 1076 "dchop1.ch"
#line 1076 "dchop1.ch"
    int _nextVal ;
    
#line 1076 "dchop1.ch"
#line 1079 "dchop1.ch"
    PTREE   father = (PTREE)0, fatherOld ;
#line 1079 "dchop1.ch"
    
#line 1079 "dchop1.ch"
#line 1080 "dchop1.ch"
    PTREE   son ;
#line 1080 "dchop1.ch"
    
#line 1080 "dchop1.ch"
#line 1081 "dchop1.ch"
    int x0, y0 ;
    
#line 1081 "dchop1.ch"
#line 1079 "dchop1.ch"
    (father=FatherTree(tree));
#line 1079 "dchop1.ch"
    
#line 1079 "dchop1.ch"
#line 1083 "dchop1.ch"
    if ( !assignAlign ) 
#line 1083 "dchop1.ch"
#line 1084 "dchop1.ch"
        return ;
    
#line 1084 "dchop1.ch"
#line 1088 "dchop1.ch"
    if ( !(((_inter = (PPTREE)father,1) && 
#line 1088 "dchop1.ch"
                (NumberTree(_inter) == LIST) &&
#line 1088 "dchop1.ch"
                1)) ) 
#line 1088 "dchop1.ch"
#line 1089 "dchop1.ch"
        return ;
    
#line 1089 "dchop1.ch"
#line 1090 "dchop1.ch"
    (father?father.Nextl():(PPTREE)0);
#line 1090 "dchop1.ch"
#line 1091 "dchop1.ch"
    if ( father ) 
#line 1091 "dchop1.ch"
#line 1092 "dchop1.ch"
        (son=(father?father.Nextl():(PPTREE)0));
#line 1092 "dchop1.ch"
    
#line 1092 "dchop1.ch"
#line 1093 "dchop1.ch"
    switch ( NumberTree(son) ) {
#line 1093 "dchop1.ch"
#line 1093 "dchop1.ch"
        case cplus::AFF : 
#line 1093 "dchop1.ch"
#line 1093 "dchop1.ch"
        _Case388 : 
#line 1093 "dchop1.ch"
#line 1093 "dchop1.ch"
            ;
#line 1093 "dchop1.ch"
#line 1093 "dchop1.ch"
            goto _Case389 ;
            
#line 1093 "dchop1.ch"
#line 1093 "dchop1.ch"
        case cplus::MUL_AFF : 
#line 1093 "dchop1.ch"
#line 1093 "dchop1.ch"
        _Case389 : 
#line 1093 "dchop1.ch"
#line 1093 "dchop1.ch"
            ;
#line 1093 "dchop1.ch"
#line 1093 "dchop1.ch"
            goto _Case390 ;
            
#line 1093 "dchop1.ch"
#line 1093 "dchop1.ch"
        case cplus::DIV_AFF : 
#line 1093 "dchop1.ch"
#line 1093 "dchop1.ch"
        _Case390 : 
#line 1093 "dchop1.ch"
#line 1093 "dchop1.ch"
            ;
#line 1093 "dchop1.ch"
#line 1093 "dchop1.ch"
            goto _Case391 ;
            
#line 1093 "dchop1.ch"
#line 1093 "dchop1.ch"
        case cplus::REM_AFF : 
#line 1093 "dchop1.ch"
#line 1093 "dchop1.ch"
        _Case391 : 
#line 1093 "dchop1.ch"
#line 1093 "dchop1.ch"
            ;
#line 1093 "dchop1.ch"
#line 1093 "dchop1.ch"
            goto _Case392 ;
            
#line 1093 "dchop1.ch"
#line 1093 "dchop1.ch"
        case cplus::MIN_AFF : 
#line 1093 "dchop1.ch"
#line 1093 "dchop1.ch"
        _Case392 : 
#line 1093 "dchop1.ch"
#line 1093 "dchop1.ch"
            ;
#line 1093 "dchop1.ch"
#line 1093 "dchop1.ch"
            goto _Case393 ;
            
#line 1093 "dchop1.ch"
#line 1093 "dchop1.ch"
        case cplus::PLU_AFF : 
#line 1093 "dchop1.ch"
#line 1093 "dchop1.ch"
        _Case393 : 
#line 1093 "dchop1.ch"
#line 1093 "dchop1.ch"
            ;
#line 1093 "dchop1.ch"
#line 1093 "dchop1.ch"
            goto _Case394 ;
            
#line 1093 "dchop1.ch"
#line 1093 "dchop1.ch"
        case cplus::LSH_AFF : 
#line 1093 "dchop1.ch"
#line 1093 "dchop1.ch"
        _Case394 : 
#line 1093 "dchop1.ch"
#line 1093 "dchop1.ch"
            ;
#line 1093 "dchop1.ch"
#line 1093 "dchop1.ch"
            goto _Case395 ;
            
#line 1093 "dchop1.ch"
#line 1093 "dchop1.ch"
        case cplus::RSH_AFF : 
#line 1093 "dchop1.ch"
#line 1093 "dchop1.ch"
        _Case395 : 
#line 1093 "dchop1.ch"
#line 1093 "dchop1.ch"
            ;
#line 1093 "dchop1.ch"
#line 1093 "dchop1.ch"
            goto _Case396 ;
            
#line 1093 "dchop1.ch"
#line 1093 "dchop1.ch"
        case cplus::AND_AFF : 
#line 1093 "dchop1.ch"
#line 1093 "dchop1.ch"
        _Case396 : 
#line 1093 "dchop1.ch"
#line 1093 "dchop1.ch"
            ;
#line 1093 "dchop1.ch"
#line 1093 "dchop1.ch"
            goto _Case397 ;
            
#line 1093 "dchop1.ch"
#line 1093 "dchop1.ch"
        case cplus::OR_AFF : 
#line 1093 "dchop1.ch"
#line 1093 "dchop1.ch"
        _Case397 : 
#line 1093 "dchop1.ch"
#line 1093 "dchop1.ch"
            ;
#line 1093 "dchop1.ch"
#line 1093 "dchop1.ch"
            goto _Case398 ;
            
#line 1093 "dchop1.ch"
#line 1104 "dchop1.ch"
        case cplus::XOR_AFF : 
#line 1104 "dchop1.ch"
#line 1104 "dchop1.ch"
        _Case398 : 
#line 1104 "dchop1.ch"
#line 1104 "dchop1.ch"
            ;
#line 1104 "dchop1.ch"
#line 1104 "dchop1.ch"
            break ;
            
#line 1104 "dchop1.ch"
#line 1106 "dchop1.ch"
        default : 
#line 1106 "dchop1.ch"
#line 1106 "dchop1.ch"
        _Case399 : 
#line 1106 "dchop1.ch"
#line 1106 "dchop1.ch"
            ;
#line 1106 "dchop1.ch"
#line 1106 "dchop1.ch"
            {
#line 1106 "dchop1.ch"
#line 1106 "dchop1.ch"
                PTREE   _Baum0 ;
#line 1106 "dchop1.ch"
                
#line 1106 "dchop1.ch"
#line 1109 "dchop1.ch"
                (fatherOld=(father=FatherTree(tree)));
#line 1109 "dchop1.ch"
                
#line 1109 "dchop1.ch"
#line 1110 "dchop1.ch"
                _Baum0 = (PPTREE) 0 ;
#line 1110 "dchop1.ch"
                
#line 1110 "dchop1.ch"
#line 1110 "dchop1.ch"
                GetCoordAbs(father, _Baum0, &x0, &y0);
#line 1110 "dchop1.ch"
#line 1111 "dchop1.ch"
                MarkCoordTree(father, x0, 0);
#line 1111 "dchop1.ch"
#line 1114 "dchop1.ch"
                int stop = 0 ;
                
#line 1114 "dchop1.ch"
#line 1115 "dchop1.ch"
                while ( father && ((_inter = (PPTREE)father,1) && 
#line 1115 "dchop1.ch"
                                        (NumberTree(_inter) == LIST) &&
#line 1115 "dchop1.ch"
                                        1) && !stop ) {
#line 1115 "dchop1.ch"
#line 1116 "dchop1.ch"
                                                            (son=sontree(father, 1));
#line 1116 "dchop1.ch"
                                                            
#line 1116 "dchop1.ch"
#line 1117 "dchop1.ch"
                                                            switch ( NumberTree(son) ) {
#line 1117 "dchop1.ch"
#line 1117 "dchop1.ch"
                                                                case cplus::AFF : 
#line 1117 "dchop1.ch"
#line 1117 "dchop1.ch"
                                                                _Case400 : 
#line 1117 "dchop1.ch"
#line 1117 "dchop1.ch"
                                                                    ;
#line 1117 "dchop1.ch"
#line 1117 "dchop1.ch"
                                                                    goto _Case401 ;
                                                                    
#line 1117 "dchop1.ch"
#line 1117 "dchop1.ch"
                                                                case cplus::MUL_AFF : 
#line 1117 "dchop1.ch"
#line 1117 "dchop1.ch"
                                                                _Case401 : 
#line 1117 "dchop1.ch"
#line 1117 "dchop1.ch"
                                                                    ;
#line 1117 "dchop1.ch"
#line 1117 "dchop1.ch"
                                                                    goto _Case402 ;
                                                                    
#line 1117 "dchop1.ch"
#line 1117 "dchop1.ch"
                                                                case cplus::DIV_AFF : 
#line 1117 "dchop1.ch"
#line 1117 "dchop1.ch"
                                                                _Case402 : 
#line 1117 "dchop1.ch"
#line 1117 "dchop1.ch"
                                                                    ;
#line 1117 "dchop1.ch"
#line 1117 "dchop1.ch"
                                                                    goto _Case403 ;
                                                                    
#line 1117 "dchop1.ch"
#line 1117 "dchop1.ch"
                                                                case cplus::REM_AFF : 
#line 1117 "dchop1.ch"
#line 1117 "dchop1.ch"
                                                                _Case403 : 
#line 1117 "dchop1.ch"
#line 1117 "dchop1.ch"
                                                                    ;
#line 1117 "dchop1.ch"
#line 1117 "dchop1.ch"
                                                                    goto _Case404 ;
                                                                    
#line 1117 "dchop1.ch"
#line 1117 "dchop1.ch"
                                                                case cplus::MIN_AFF : 
#line 1117 "dchop1.ch"
#line 1117 "dchop1.ch"
                                                                _Case404 : 
#line 1117 "dchop1.ch"
#line 1117 "dchop1.ch"
                                                                    ;
#line 1117 "dchop1.ch"
#line 1117 "dchop1.ch"
                                                                    goto _Case405 ;
                                                                    
#line 1117 "dchop1.ch"
#line 1117 "dchop1.ch"
                                                                case cplus::PLU_AFF : 
#line 1117 "dchop1.ch"
#line 1117 "dchop1.ch"
                                                                _Case405 : 
#line 1117 "dchop1.ch"
#line 1117 "dchop1.ch"
                                                                    ;
#line 1117 "dchop1.ch"
#line 1117 "dchop1.ch"
                                                                    goto _Case406 ;
                                                                    
#line 1117 "dchop1.ch"
#line 1117 "dchop1.ch"
                                                                case cplus::LSH_AFF : 
#line 1117 "dchop1.ch"
#line 1117 "dchop1.ch"
                                                                _Case406 : 
#line 1117 "dchop1.ch"
#line 1117 "dchop1.ch"
                                                                    ;
#line 1117 "dchop1.ch"
#line 1117 "dchop1.ch"
                                                                    goto _Case407 ;
                                                                    
#line 1117 "dchop1.ch"
#line 1117 "dchop1.ch"
                                                                case cplus::RSH_AFF : 
#line 1117 "dchop1.ch"
#line 1117 "dchop1.ch"
                                                                _Case407 : 
#line 1117 "dchop1.ch"
#line 1117 "dchop1.ch"
                                                                    ;
#line 1117 "dchop1.ch"
#line 1117 "dchop1.ch"
                                                                    goto _Case408 ;
                                                                    
#line 1117 "dchop1.ch"
#line 1117 "dchop1.ch"
                                                                case cplus::AND_AFF : 
#line 1117 "dchop1.ch"
#line 1117 "dchop1.ch"
                                                                _Case408 : 
#line 1117 "dchop1.ch"
#line 1117 "dchop1.ch"
                                                                    ;
#line 1117 "dchop1.ch"
#line 1117 "dchop1.ch"
                                                                    goto _Case409 ;
                                                                    
#line 1117 "dchop1.ch"
#line 1117 "dchop1.ch"
                                                                case cplus::OR_AFF : 
#line 1117 "dchop1.ch"
#line 1117 "dchop1.ch"
                                                                _Case409 : 
#line 1117 "dchop1.ch"
#line 1117 "dchop1.ch"
                                                                    ;
#line 1117 "dchop1.ch"
#line 1117 "dchop1.ch"
                                                                    goto _Case410 ;
                                                                    
#line 1117 "dchop1.ch"
#line 1129 "dchop1.ch"
                                                                case cplus::XOR_AFF : 
#line 1129 "dchop1.ch"
#line 1129 "dchop1.ch"
                                                                _Case410 : 
#line 1129 "dchop1.ch"
#line 1129 "dchop1.ch"
                                                                    ;
#line 1129 "dchop1.ch"
#line 1129 "dchop1.ch"
                                                                    (fatherOld=father);
#line 1129 "dchop1.ch"
                                                                    
#line 1129 "dchop1.ch"
#line 1130 "dchop1.ch"
                                                                    (father=FatherTree(father));
#line 1130 "dchop1.ch"
                                                                    
#line 1130 "dchop1.ch"
#line 1131 "dchop1.ch"
                                                                    break ;
                                                                    
#line 1131 "dchop1.ch"
#line 1133 "dchop1.ch"
                                                                default : 
#line 1133 "dchop1.ch"
#line 1133 "dchop1.ch"
                                                                _Case411 : 
#line 1133 "dchop1.ch"
#line 1133 "dchop1.ch"
                                                                    ;
#line 1133 "dchop1.ch"
#line 1133 "dchop1.ch"
                                                                    stop = 1 ;
#line 1133 "dchop1.ch"
#line 1134 "dchop1.ch"
                                                                    break ;
                                                                    
#line 1134 "dchop1.ch"
                                                            }
#line 1134 "dchop1.ch"
                                                            
#line 1134 "dchop1.ch"
#line 1136 "dchop1.ch"
                                                            
#line 1136 "dchop1.ch"
#line 1136 "dchop1.ch"
                                                        }
#line 1136 "dchop1.ch"
#line 1139 "dchop1.ch"
                SetStartAff(fatherOld, FatherTree(tree), ComputeStartAff(fatherOld, FatherTree(tree)));
#line 1139 "dchop1.ch"
#line 1142 "dchop1.ch"
                UnMarkCoordTree(FatherTree(tree));
#line 1142 "dchop1.ch"
#line 1143 "dchop1.ch"
                
#line 1143 "dchop1.ch"
#line 1143 "dchop1.ch"
            }
            
#line 1143 "dchop1.ch"
    }
#line 1143 "dchop1.ch"
    
#line 1143 "dchop1.ch"
#line 1145 "dchop1.ch"
    
#line 1145 "dchop1.ch"
#line 1145 "dchop1.ch"
}
#line 1145 "dchop1.ch"

#line 1145 "dchop1.ch"
#line 1145 "dchop1.ch"
static void dchop1_Anchor () { int i = 1;} 
#line 1145 "dchop1.ch"
/*Well done my boy */ 
#line 1145 "dchop1.ch"

