/*************************************************************************/
/*                                                                       */
/*        Produced by MetaGen version 2.0  -    1989-2006                 */
/*       Syntaxic Analyzer Meta Generator developped by                  */
/*                  Eric Lavillonniere                                   */
/*                                                                       */
/*************************************************************************/

#include "token.h"
#include "cplus.h"


#line 2111 "cplus.met"
PPTREE cplus::range_in_liste ( int error_free)
#line 2111 "cplus.met"
{
#line 2111 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 2111 "cplus.met"
    int _value,_nbPre = 0 ;
#line 2111 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 2111 "cplus.met"
    int _Debug = TRACE_RULE("range_in_liste",TRACE_ENTER,(PPTREE)0);
#line 2111 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 2111 "cplus.met"
#line 2111 "cplus.met"
    PPTREE retTree = (PPTREE) 0;
#line 2111 "cplus.met"
#line 2113 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 2113 "cplus.met"
    if ( ! TERM_OR_META(IDENT,"IDENT") || !(BUILD_TERM_META(retTree))) {
#line 2113 "cplus.met"
        MulFreeTree(1,retTree);
        TOKEN_EXIT(range_in_liste_exit,"IDENT")
#line 2113 "cplus.met"
    } else {
#line 2113 "cplus.met"
        tokenAhead = 0 ;
#line 2113 "cplus.met"
    }
#line 2113 "cplus.met"
#line 2114 "cplus.met"
    if ( IsRange(lexEl.string())){
#line 2114 "cplus.met"
#line 2115 "cplus.met"
        {
#line 2115 "cplus.met"
            _retValue = retTree ;
#line 2115 "cplus.met"
            goto range_in_liste_ret;
#line 2115 "cplus.met"
            
#line 2115 "cplus.met"
        }
#line 2115 "cplus.met"
    } else {
#line 2115 "cplus.met"
#line 2117 "cplus.met"
        
#line 2117 "cplus.met"
        MulFreeTree(1,retTree);
        LEX_EXIT ("",0);
#line 2117 "cplus.met"
        goto range_in_liste_exit;
#line 2117 "cplus.met"
    }
#line 2117 "cplus.met"
#line 2117 "cplus.met"
#line 2117 "cplus.met"

#line 2118 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2118 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 2118 "cplus.met"
return((PPTREE) 0);
#line 2118 "cplus.met"

#line 2118 "cplus.met"
range_in_liste_exit :
#line 2118 "cplus.met"

#line 2118 "cplus.met"
    _Debug = TRACE_RULE("range_in_liste",TRACE_EXIT,(PPTREE)0);
#line 2118 "cplus.met"
    _funcLevel--;
#line 2118 "cplus.met"
    return((PPTREE) -1) ;
#line 2118 "cplus.met"

#line 2118 "cplus.met"
range_in_liste_ret :
#line 2118 "cplus.met"
    
#line 2118 "cplus.met"
    _Debug = TRACE_RULE("range_in_liste",TRACE_RETURN,_retValue);
#line 2118 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2118 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 2118 "cplus.met"
    return _retValue ;
#line 2118 "cplus.met"
}
#line 2118 "cplus.met"

#line 2118 "cplus.met"
#line 2155 "cplus.met"
PPTREE cplus::range_modifier ( int error_free)
#line 2155 "cplus.met"
{
#line 2155 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 2155 "cplus.met"
    int _value,_nbPre = 0 ;
#line 2155 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 2155 "cplus.met"
    int _Debug = TRACE_RULE("range_modifier",TRACE_ENTER,(PPTREE)0);
#line 2155 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 2155 "cplus.met"
#line 2156 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 2156 "cplus.met"
    switch( lexEl.Value) {
#line 2156 "cplus.met"
#line 2157 "cplus.met"
        case META : 
#line 2157 "cplus.met"
        case IDENT : 
#line 2157 "cplus.met"
#line 2157 "cplus.met"
            {
#line 2157 "cplus.met"
                PPTREE _ptTree0=0;
#line 2157 "cplus.met"
                {
#line 2157 "cplus.met"
                    PPTREE _ptTree1=0,_ptRes1=0;
#line 2157 "cplus.met"
                    _ptRes1= MakeTree(RANGE_MODIFIER, 2);
#line 2157 "cplus.met"
                    if ( (_ptTree1=NQUICK_CALL(_Tak(range_in_liste)(error_free), 121, cplus))== (PPTREE) -1 ) {
#line 2157 "cplus.met"
                        MulFreeTree(3,_ptRes1,_ptTree1,_ptTree0);
                        PROG_EXIT(range_modifier_exit,"range_modifier")
#line 2157 "cplus.met"
                    }
#line 2157 "cplus.met"
                    ReplaceTree(_ptRes1, 1, _ptTree1);
#line 2157 "cplus.met"
                    _ptTree0=_ptRes1;
#line 2157 "cplus.met"
                }
#line 2157 "cplus.met"
                _retValue =_ptTree0;
#line 2157 "cplus.met"
                goto range_modifier_ret;
#line 2157 "cplus.met"
            }
#line 2157 "cplus.met"
            break;
#line 2157 "cplus.met"
#line 2158 "cplus.met"
        case VOLATILE : 
#line 2158 "cplus.met"
#line 2158 "cplus.met"
            {
#line 2158 "cplus.met"
                PPTREE _ptTree0=0;
#line 2158 "cplus.met"
                {
#line 2158 "cplus.met"
                    PPTREE _ptTree1=0,_ptRes1=0;
#line 2158 "cplus.met"
                    _ptRes1= MakeTree(RANGE_MODIFIER, 2);
#line 2158 "cplus.met"
                    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 2158 "cplus.met"
                    if (  !SEE_TOKEN( VOLATILE,"volatile") || !(_ptTree1 = CommString(lexEl.string()))) {
#line 2158 "cplus.met"
                        MulFreeTree(3,_ptRes1,_ptTree1,_ptTree0);
                        TOKEN_EXIT(range_modifier_exit,"volatile")
#line 2158 "cplus.met"
                    } else {
#line 2158 "cplus.met"
                        tokenAhead = 0 ;
#line 2158 "cplus.met"
                    }
#line 2158 "cplus.met"
                    ReplaceTree(_ptRes1, 1, _ptTree1);
#line 2158 "cplus.met"
                    _ptTree0=_ptRes1;
#line 2158 "cplus.met"
                }
#line 2158 "cplus.met"
                _retValue =_ptTree0;
#line 2158 "cplus.met"
                goto range_modifier_ret;
#line 2158 "cplus.met"
            }
#line 2158 "cplus.met"
            break;
#line 2158 "cplus.met"
#line 2159 "cplus.met"
        case REGISTER : 
#line 2159 "cplus.met"
#line 2159 "cplus.met"
            {
#line 2159 "cplus.met"
                PPTREE _ptTree0=0;
#line 2159 "cplus.met"
                {
#line 2159 "cplus.met"
                    PPTREE _ptTree1=0,_ptRes1=0;
#line 2159 "cplus.met"
                    _ptRes1= MakeTree(RANGE_MODIFIER, 2);
#line 2159 "cplus.met"
                    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 2159 "cplus.met"
                    if (  !SEE_TOKEN( REGISTER,"register") || !(_ptTree1 = CommString(lexEl.string()))) {
#line 2159 "cplus.met"
                        MulFreeTree(3,_ptRes1,_ptTree1,_ptTree0);
                        TOKEN_EXIT(range_modifier_exit,"register")
#line 2159 "cplus.met"
                    } else {
#line 2159 "cplus.met"
                        tokenAhead = 0 ;
#line 2159 "cplus.met"
                    }
#line 2159 "cplus.met"
                    ReplaceTree(_ptRes1, 1, _ptTree1);
#line 2159 "cplus.met"
                    _ptTree0=_ptRes1;
#line 2159 "cplus.met"
                }
#line 2159 "cplus.met"
                _retValue =_ptTree0;
#line 2159 "cplus.met"
                goto range_modifier_ret;
#line 2159 "cplus.met"
            }
#line 2159 "cplus.met"
            break;
#line 2159 "cplus.met"
#line 2160 "cplus.met"
        case __ATTRIBUTE__ : 
#line 2160 "cplus.met"
#line 2161 "cplus.met"
#line 2162 "cplus.met"
            {
#line 2162 "cplus.met"
                PPTREE _ptTree0=0;
#line 2162 "cplus.met"
                {
#line 2162 "cplus.met"
                    PPTREE _ptTree1=0,_ptRes1=0;
#line 2162 "cplus.met"
                    _ptRes1= MakeTree(RANGE_MODIFIER, 2);
#line 2162 "cplus.met"
                    if ( (_ptTree1=NQUICK_CALL(_Tak(attribute_call)(error_free), 18, cplus))== (PPTREE) -1 ) {
#line 2162 "cplus.met"
                        MulFreeTree(3,_ptRes1,_ptTree1,_ptTree0);
                        PROG_EXIT(range_modifier_exit,"range_modifier")
#line 2162 "cplus.met"
                    }
#line 2162 "cplus.met"
                    ReplaceTree(_ptRes1, 1, _ptTree1);
#line 2162 "cplus.met"
                    _ptTree0=_ptRes1;
#line 2162 "cplus.met"
                }
#line 2162 "cplus.met"
                _retValue =_ptTree0;
#line 2162 "cplus.met"
                goto range_modifier_ret;
#line 2162 "cplus.met"
            }
#line 2162 "cplus.met"
#line 2162 "cplus.met"
            break;
#line 2162 "cplus.met"
#line 2164 "cplus.met"
        case __ASM__ : 
#line 2164 "cplus.met"
#line 2165 "cplus.met"
#line 2166 "cplus.met"
            {
#line 2166 "cplus.met"
                PPTREE _ptTree0=0;
#line 2166 "cplus.met"
                {
#line 2166 "cplus.met"
                    PPTREE _ptTree1=0,_ptRes1=0;
#line 2166 "cplus.met"
                    _ptRes1= MakeTree(RANGE_MODIFIER, 2);
#line 2166 "cplus.met"
                    if ( (_ptTree1=NQUICK_CALL(_Tak(asm_call)(error_free), 14, cplus))== (PPTREE) -1 ) {
#line 2166 "cplus.met"
                        MulFreeTree(3,_ptRes1,_ptTree1,_ptTree0);
                        PROG_EXIT(range_modifier_exit,"range_modifier")
#line 2166 "cplus.met"
                    }
#line 2166 "cplus.met"
                    ReplaceTree(_ptRes1, 1, _ptTree1);
#line 2166 "cplus.met"
                    _ptTree0=_ptRes1;
#line 2166 "cplus.met"
                }
#line 2166 "cplus.met"
                _retValue =_ptTree0;
#line 2166 "cplus.met"
                goto range_modifier_ret;
#line 2166 "cplus.met"
            }
#line 2166 "cplus.met"
#line 2166 "cplus.met"
            break;
#line 2166 "cplus.met"
#line 2168 "cplus.met"
        default : 
#line 2168 "cplus.met"
#line 2168 "cplus.met"
            {
#line 2168 "cplus.met"
                PPTREE _ptTree0=0;
#line 2168 "cplus.met"
                if ( (_ptTree0=NQUICK_CALL(_Tak(range_modifier_function)(error_free), 123, cplus))== (PPTREE) -1 ) {
#line 2168 "cplus.met"
                    MulFreeTree(1,_ptTree0);
                    PROG_EXIT(range_modifier_exit,"range_modifier")
#line 2168 "cplus.met"
                }
#line 2168 "cplus.met"
                _retValue =_ptTree0;
#line 2168 "cplus.met"
                goto range_modifier_ret;
#line 2168 "cplus.met"
            }
#line 2168 "cplus.met"
            break;
#line 2168 "cplus.met"
    }
#line 2168 "cplus.met"
#line 2168 "cplus.met"
#line 2169 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2169 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 2169 "cplus.met"
return((PPTREE) 0);
#line 2169 "cplus.met"

#line 2169 "cplus.met"
range_modifier_exit :
#line 2169 "cplus.met"

#line 2169 "cplus.met"
    _Debug = TRACE_RULE("range_modifier",TRACE_EXIT,(PPTREE)0);
#line 2169 "cplus.met"
    _funcLevel--;
#line 2169 "cplus.met"
    return((PPTREE) -1) ;
#line 2169 "cplus.met"

#line 2169 "cplus.met"
range_modifier_ret :
#line 2169 "cplus.met"
    
#line 2169 "cplus.met"
    _Debug = TRACE_RULE("range_modifier",TRACE_RETURN,_retValue);
#line 2169 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2169 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 2169 "cplus.met"
    return _retValue ;
#line 2169 "cplus.met"
}
#line 2169 "cplus.met"

#line 2169 "cplus.met"
#line 2127 "cplus.met"
PPTREE cplus::range_modifier_function ( int error_free)
#line 2127 "cplus.met"
{
#line 2127 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 2127 "cplus.met"
    int _value,_nbPre = 0 ;
#line 2127 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 2127 "cplus.met"
    int _Debug = TRACE_RULE("range_modifier_function",TRACE_ENTER,(PPTREE)0);
#line 2127 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 2127 "cplus.met"
#line 2128 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 2128 "cplus.met"
    switch( lexEl.Value) {
#line 2128 "cplus.met"
#line 2129 "cplus.met"
        case INLINE : 
#line 2129 "cplus.met"
#line 2129 "cplus.met"
            {
#line 2129 "cplus.met"
                PPTREE _ptTree0=0;
#line 2129 "cplus.met"
                {
#line 2129 "cplus.met"
                    PPTREE _ptTree1=0,_ptRes1=0;
#line 2129 "cplus.met"
                    _ptRes1= MakeTree(RANGE_MODIFIER, 2);
#line 2129 "cplus.met"
                    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 2129 "cplus.met"
                    if (  !SEE_TOKEN( INLINE,"inline") || !(_ptTree1 = CommString(lexEl.string()))) {
#line 2129 "cplus.met"
                        MulFreeTree(3,_ptRes1,_ptTree1,_ptTree0);
                        TOKEN_EXIT(range_modifier_function_exit,"inline")
#line 2129 "cplus.met"
                    } else {
#line 2129 "cplus.met"
                        tokenAhead = 0 ;
#line 2129 "cplus.met"
                    }
#line 2129 "cplus.met"
                    ReplaceTree(_ptRes1, 1, _ptTree1);
#line 2129 "cplus.met"
                    _ptTree0=_ptRes1;
#line 2129 "cplus.met"
                }
#line 2129 "cplus.met"
                _retValue =_ptTree0;
#line 2129 "cplus.met"
                goto range_modifier_function_ret;
#line 2129 "cplus.met"
            }
#line 2129 "cplus.met"
            break;
#line 2129 "cplus.met"
#line 2130 "cplus.met"
        case VIRTUAL : 
#line 2130 "cplus.met"
#line 2130 "cplus.met"
            {
#line 2130 "cplus.met"
                PPTREE _ptTree0=0;
#line 2130 "cplus.met"
                {
#line 2130 "cplus.met"
                    PPTREE _ptTree1=0,_ptRes1=0;
#line 2130 "cplus.met"
                    _ptRes1= MakeTree(RANGE_MODIFIER, 2);
#line 2130 "cplus.met"
                    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 2130 "cplus.met"
                    if (  !SEE_TOKEN( VIRTUAL,"virtual") || !(_ptTree1 = CommString(lexEl.string()))) {
#line 2130 "cplus.met"
                        MulFreeTree(3,_ptRes1,_ptTree1,_ptTree0);
                        TOKEN_EXIT(range_modifier_function_exit,"virtual")
#line 2130 "cplus.met"
                    } else {
#line 2130 "cplus.met"
                        tokenAhead = 0 ;
#line 2130 "cplus.met"
                    }
#line 2130 "cplus.met"
                    ReplaceTree(_ptRes1, 1, _ptTree1);
#line 2130 "cplus.met"
                    _ptTree0=_ptRes1;
#line 2130 "cplus.met"
                }
#line 2130 "cplus.met"
                _retValue =_ptTree0;
#line 2130 "cplus.met"
                goto range_modifier_function_ret;
#line 2130 "cplus.met"
            }
#line 2130 "cplus.met"
            break;
#line 2130 "cplus.met"
#line 2131 "cplus.met"
        case FRIEND : 
#line 2131 "cplus.met"
#line 2131 "cplus.met"
            {
#line 2131 "cplus.met"
                PPTREE _ptTree0=0;
#line 2131 "cplus.met"
                {
#line 2131 "cplus.met"
                    PPTREE _ptTree1=0,_ptRes1=0;
#line 2131 "cplus.met"
                    _ptRes1= MakeTree(RANGE_MODIFIER, 2);
#line 2131 "cplus.met"
                    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 2131 "cplus.met"
                    if (  !SEE_TOKEN( FRIEND,"friend") || !(_ptTree1 = CommString(lexEl.string()))) {
#line 2131 "cplus.met"
                        MulFreeTree(3,_ptRes1,_ptTree1,_ptTree0);
                        TOKEN_EXIT(range_modifier_function_exit,"friend")
#line 2131 "cplus.met"
                    } else {
#line 2131 "cplus.met"
                        tokenAhead = 0 ;
#line 2131 "cplus.met"
                    }
#line 2131 "cplus.met"
                    ReplaceTree(_ptRes1, 1, _ptTree1);
#line 2131 "cplus.met"
                    _ptTree0=_ptRes1;
#line 2131 "cplus.met"
                }
#line 2131 "cplus.met"
                _retValue =_ptTree0;
#line 2131 "cplus.met"
                goto range_modifier_function_ret;
#line 2131 "cplus.met"
            }
#line 2131 "cplus.met"
            break;
#line 2131 "cplus.met"
#line 2132 "cplus.met"
        case CONST : 
#line 2132 "cplus.met"
#line 2132 "cplus.met"
            {
#line 2132 "cplus.met"
                PPTREE _ptTree0=0;
#line 2132 "cplus.met"
                {
#line 2132 "cplus.met"
                    PPTREE _ptTree1=0,_ptRes1=0;
#line 2132 "cplus.met"
                    _ptRes1= MakeTree(RANGE_MODIFIER, 2);
#line 2132 "cplus.met"
                    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 2132 "cplus.met"
                    if (  !SEE_TOKEN( CONST,"const") || !(_ptTree1 = CommString(lexEl.string()))) {
#line 2132 "cplus.met"
                        MulFreeTree(3,_ptRes1,_ptTree1,_ptTree0);
                        TOKEN_EXIT(range_modifier_function_exit,"const")
#line 2132 "cplus.met"
                    } else {
#line 2132 "cplus.met"
                        tokenAhead = 0 ;
#line 2132 "cplus.met"
                    }
#line 2132 "cplus.met"
                    ReplaceTree(_ptRes1, 1, _ptTree1);
#line 2132 "cplus.met"
                    _ptTree0=_ptRes1;
#line 2132 "cplus.met"
                }
#line 2132 "cplus.met"
                _retValue =_ptTree0;
#line 2132 "cplus.met"
                goto range_modifier_function_ret;
#line 2132 "cplus.met"
            }
#line 2132 "cplus.met"
            break;
#line 2132 "cplus.met"
#line 2133 "cplus.met"
        case CONSTEXPR : 
#line 2133 "cplus.met"
#line 2133 "cplus.met"
            {
#line 2133 "cplus.met"
                PPTREE _ptTree0=0;
#line 2133 "cplus.met"
                {
#line 2133 "cplus.met"
                    PPTREE _ptTree1=0,_ptRes1=0;
#line 2133 "cplus.met"
                    _ptRes1= MakeTree(RANGE_MODIFIER, 2);
#line 2133 "cplus.met"
                    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 2133 "cplus.met"
                    if (  !SEE_TOKEN( CONSTEXPR,"constexpr") || !(_ptTree1 = CommString(lexEl.string()))) {
#line 2133 "cplus.met"
                        MulFreeTree(3,_ptRes1,_ptTree1,_ptTree0);
                        TOKEN_EXIT(range_modifier_function_exit,"constexpr")
#line 2133 "cplus.met"
                    } else {
#line 2133 "cplus.met"
                        tokenAhead = 0 ;
#line 2133 "cplus.met"
                    }
#line 2133 "cplus.met"
                    ReplaceTree(_ptRes1, 1, _ptTree1);
#line 2133 "cplus.met"
                    _ptTree0=_ptRes1;
#line 2133 "cplus.met"
                }
#line 2133 "cplus.met"
                _retValue =_ptTree0;
#line 2133 "cplus.met"
                goto range_modifier_function_ret;
#line 2133 "cplus.met"
            }
#line 2133 "cplus.met"
            break;
#line 2133 "cplus.met"
        default :
#line 2133 "cplus.met"
            CASE_EXIT(range_modifier_function_exit,"either inline or virtual or friend or const or constexpr")
#line 2133 "cplus.met"
            break;
#line 2133 "cplus.met"
    }
#line 2133 "cplus.met"
#line 2133 "cplus.met"
#line 2134 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2134 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 2134 "cplus.met"
return((PPTREE) 0);
#line 2134 "cplus.met"

#line 2134 "cplus.met"
range_modifier_function_exit :
#line 2134 "cplus.met"

#line 2134 "cplus.met"
    _Debug = TRACE_RULE("range_modifier_function",TRACE_EXIT,(PPTREE)0);
#line 2134 "cplus.met"
    _funcLevel--;
#line 2134 "cplus.met"
    return((PPTREE) -1) ;
#line 2134 "cplus.met"

#line 2134 "cplus.met"
range_modifier_function_ret :
#line 2134 "cplus.met"
    
#line 2134 "cplus.met"
    _Debug = TRACE_RULE("range_modifier_function",TRACE_RETURN,_retValue);
#line 2134 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2134 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 2134 "cplus.met"
    return _retValue ;
#line 2134 "cplus.met"
}
#line 2134 "cplus.met"

#line 2134 "cplus.met"
#line 1977 "cplus.met"
PPTREE cplus::range_modifier_ident ( int error_free)
#line 1977 "cplus.met"
{
#line 1977 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 1977 "cplus.met"
    int _value,_nbPre = 0 ;
#line 1977 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 1977 "cplus.met"
    int _Debug = TRACE_RULE("range_modifier_ident",TRACE_ENTER,(PPTREE)0);
#line 1977 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 1977 "cplus.met"
#line 1977 "cplus.met"
    PPTREE retTree = (PPTREE) 0;
#line 1977 "cplus.met"
#line 1979 "cplus.met"
    if (NPUSH_CALL_AFF_VERIF(retTree = ,_Tak(range_modifier), 122, cplus)){
#line 1979 "cplus.met"
#line 1980 "cplus.met"
        {
#line 1980 "cplus.met"
            PPTREE _ptTree0=0;
#line 1980 "cplus.met"
            {
#line 1980 "cplus.met"
                PPTREE _ptTree1=0;
#line 1980 "cplus.met"
                if ( (_ptTree1=NQUICK_CALL(_Tak(range_modifier_ident)(error_free), 124, cplus))== (PPTREE) -1 ) {
#line 1980 "cplus.met"
                    MulFreeTree(3,_ptTree1,_ptTree0,retTree);
                    PROG_EXIT(range_modifier_ident_exit,"range_modifier_ident")
#line 1980 "cplus.met"
                }
#line 1980 "cplus.met"
                _ptTree0=ReplaceTree(retTree , 2 , _ptTree1);
#line 1980 "cplus.met"
            }
#line 1980 "cplus.met"
            _retValue =_ptTree0;
#line 1980 "cplus.met"
            goto range_modifier_ident_ret;
#line 1980 "cplus.met"
        }
#line 1980 "cplus.met"
    } else {
#line 1980 "cplus.met"
#line 1982 "cplus.met"
        if ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN( IDENT,"IDENT")){
#line 1982 "cplus.met"
#line 1983 "cplus.met"
            {
#line 1983 "cplus.met"
                PPTREE _ptTree0=0;
#line 1983 "cplus.met"
                {
#line 1983 "cplus.met"
                    PPTREE _ptTree1=0,_ptRes1=0;
#line 1983 "cplus.met"
                    _ptRes1= MakeTree(IDENT, 1);
#line 1983 "cplus.met"
                    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 1983 "cplus.met"
                    if ( ! TERM_OR_META(IDENT,"IDENT") || !(BUILD_TERM_META(_ptTree1))) {
#line 1983 "cplus.met"
                        MulFreeTree(4,_ptRes1,_ptTree1,_ptTree0,retTree);
                        TOKEN_EXIT(range_modifier_ident_exit,"IDENT")
#line 1983 "cplus.met"
                    } else {
#line 1983 "cplus.met"
                        tokenAhead = 0 ;
#line 1983 "cplus.met"
                    }
#line 1983 "cplus.met"
                    ReplaceTree(_ptRes1, 1, _ptTree1);
#line 1983 "cplus.met"
                    _ptTree0=_ptRes1;
#line 1983 "cplus.met"
                }
#line 1983 "cplus.met"
                _retValue =_ptTree0;
#line 1983 "cplus.met"
                goto range_modifier_ident_ret;
#line 1983 "cplus.met"
            }
#line 1983 "cplus.met"
        }
#line 1983 "cplus.met"
    }
#line 1983 "cplus.met"
#line 1983 "cplus.met"
#line 1983 "cplus.met"

#line 1984 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1984 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 1984 "cplus.met"
return((PPTREE) 0);
#line 1984 "cplus.met"

#line 1984 "cplus.met"
range_modifier_ident_exit :
#line 1984 "cplus.met"

#line 1984 "cplus.met"
    _Debug = TRACE_RULE("range_modifier_ident",TRACE_EXIT,(PPTREE)0);
#line 1984 "cplus.met"
    _funcLevel--;
#line 1984 "cplus.met"
    return((PPTREE) -1) ;
#line 1984 "cplus.met"

#line 1984 "cplus.met"
range_modifier_ident_ret :
#line 1984 "cplus.met"
    
#line 1984 "cplus.met"
    _Debug = TRACE_RULE("range_modifier_ident",TRACE_RETURN,_retValue);
#line 1984 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1984 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 1984 "cplus.met"
    return _retValue ;
#line 1984 "cplus.met"
}
#line 1984 "cplus.met"

#line 1984 "cplus.met"
#line 816 "cplus.met"
PPTREE cplus::range_pragma ( int error_free)
#line 816 "cplus.met"
{
#line 816 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 816 "cplus.met"
    int _value,_nbPre = 0 ;
#line 816 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 816 "cplus.met"
    int _Debug = TRACE_RULE("range_pragma",TRACE_ENTER,(PPTREE)0);
#line 816 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 816 "cplus.met"
#line 817 "cplus.met"
    (tokenAhead == 8|| (LexPragma(),TRACE_LEX(1)));
#line 817 "cplus.met"
    if ( ! TERM_OR_META(PRAGMA_RANGE,"PRAGMA_RANGE") || !(CommTerm(),1)) {
#line 817 "cplus.met"
            TOKEN_EXIT(range_pragma_exit,"PRAGMA_RANGE")
#line 817 "cplus.met"
    } else {
#line 817 "cplus.met"
        tokenAhead = 0 ;
#line 817 "cplus.met"
    }
#line 817 "cplus.met"
#line 818 "cplus.met"
    (tokenAhead == 9|| (LexPragmaSmall(),TRACE_LEX(1)));
#line 818 "cplus.met"
    if ( ! TERM_OR_META(SMALL_PRAGMA_CONTENT,"SMALL_PRAGMA_CONTENT") || !(CommTerm(),1)) {
#line 818 "cplus.met"
            TOKEN_EXIT(range_pragma_exit,"SMALL_PRAGMA_CONTENT")
#line 818 "cplus.met"
    } else {
#line 818 "cplus.met"
        tokenAhead = 0 ;
#line 818 "cplus.met"
    }
#line 818 "cplus.met"
#line 819 "cplus.met"
     AnalyseRange(lexEl.string());
#line 819 "cplus.met"
#line 819 "cplus.met"
#line 819 "cplus.met"

#line 820 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 820 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 820 "cplus.met"
return((PPTREE) 0);
#line 820 "cplus.met"

#line 820 "cplus.met"
range_pragma_exit :
#line 820 "cplus.met"

#line 820 "cplus.met"
    _Debug = TRACE_RULE("range_pragma",TRACE_EXIT,(PPTREE)0);
#line 820 "cplus.met"
    _funcLevel--;
#line 820 "cplus.met"
    return((PPTREE) -1) ;
#line 820 "cplus.met"

#line 820 "cplus.met"
range_pragma_ret :
#line 820 "cplus.met"
    
#line 820 "cplus.met"
    _Debug = TRACE_RULE("range_pragma",TRACE_RETURN,_retValue);
#line 820 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 820 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 820 "cplus.met"
    return _retValue ;
#line 820 "cplus.met"
}
#line 820 "cplus.met"

#line 820 "cplus.met"
#line 2685 "cplus.met"
PPTREE cplus::relational_expression ( int error_free)
#line 2685 "cplus.met"
{
#line 2685 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 2685 "cplus.met"
    int _value,_nbPre = 0 ;
#line 2685 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 2685 "cplus.met"
    int _Debug = TRACE_RULE("relational_expression",TRACE_ENTER,(PPTREE)0);
#line 2685 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 2685 "cplus.met"
#line 2685 "cplus.met"
    PPTREE expTree = (PPTREE) 0;
#line 2685 "cplus.met"
#line 2687 "cplus.met"
    if ( (expTree=NQUICK_CALL(_Tak(shift_expression)(error_free), 128, cplus))== (PPTREE) -1 ) {
#line 2687 "cplus.met"
        MulFreeTree(1,expTree);
        PROG_EXIT(relational_expression_exit,"relational_expression")
#line 2687 "cplus.met"
    }
#line 2687 "cplus.met"
#line 2688 "cplus.met"
    while (((((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN( INFEEGAL,"<=")) || 
#line 2688 "cplus.met"
            ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN( SUPEEGAL,">="))) || 
#line 2688 "cplus.met"
           (((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN( SUPE,">")))) || 
#line 2688 "cplus.met"
          ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN( INFE,"<"))) { 
#line 2688 "cplus.met"
#line 2689 "cplus.met"
        (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 2689 "cplus.met"
        switch( lexEl.Value) {
#line 2689 "cplus.met"
#line 2690 "cplus.met"
            case INFEEGAL : 
#line 2690 "cplus.met"
                tokenAhead = 0 ;
#line 2690 "cplus.met"
                CommTerm();
#line 2690 "cplus.met"
#line 2690 "cplus.met"
                {
#line 2690 "cplus.met"
                    PPTREE _ptTree0=0,_ptRes0=0;
#line 2690 "cplus.met"
                    _ptRes0= MakeTree(LEQU, 2);
#line 2690 "cplus.met"
                    ReplaceTree(_ptRes0, 1, expTree );
#line 2690 "cplus.met"
                    if ( (_ptTree0=NQUICK_CALL(_Tak(shift_expression)(error_free), 128, cplus))== (PPTREE) -1 ) {
#line 2690 "cplus.met"
                        MulFreeTree(3,_ptRes0,_ptTree0,expTree);
                        PROG_EXIT(relational_expression_exit,"relational_expression")
#line 2690 "cplus.met"
                    }
#line 2690 "cplus.met"
                    ReplaceTree(_ptRes0, 2, _ptTree0);
#line 2690 "cplus.met"
                    expTree=_ptRes0;
#line 2690 "cplus.met"
                }
#line 2690 "cplus.met"
                break;
#line 2690 "cplus.met"
#line 2691 "cplus.met"
            case SUPEEGAL : 
#line 2691 "cplus.met"
                tokenAhead = 0 ;
#line 2691 "cplus.met"
                CommTerm();
#line 2691 "cplus.met"
#line 2691 "cplus.met"
                {
#line 2691 "cplus.met"
                    PPTREE _ptTree0=0,_ptRes0=0;
#line 2691 "cplus.met"
                    _ptRes0= MakeTree(GEQU, 2);
#line 2691 "cplus.met"
                    ReplaceTree(_ptRes0, 1, expTree );
#line 2691 "cplus.met"
                    if ( (_ptTree0=NQUICK_CALL(_Tak(shift_expression)(error_free), 128, cplus))== (PPTREE) -1 ) {
#line 2691 "cplus.met"
                        MulFreeTree(3,_ptRes0,_ptTree0,expTree);
                        PROG_EXIT(relational_expression_exit,"relational_expression")
#line 2691 "cplus.met"
                    }
#line 2691 "cplus.met"
                    ReplaceTree(_ptRes0, 2, _ptTree0);
#line 2691 "cplus.met"
                    expTree=_ptRes0;
#line 2691 "cplus.met"
                }
#line 2691 "cplus.met"
                break;
#line 2691 "cplus.met"
#line 2692 "cplus.met"
            case SUPE : 
#line 2692 "cplus.met"
                tokenAhead = 0 ;
#line 2692 "cplus.met"
                CommTerm();
#line 2692 "cplus.met"
#line 2692 "cplus.met"
                {
#line 2692 "cplus.met"
                    PPTREE _ptTree0=0,_ptRes0=0;
#line 2692 "cplus.met"
                    _ptRes0= MakeTree(GT, 2);
#line 2692 "cplus.met"
                    ReplaceTree(_ptRes0, 1, expTree );
#line 2692 "cplus.met"
                    if ( (_ptTree0=NQUICK_CALL(_Tak(shift_expression)(error_free), 128, cplus))== (PPTREE) -1 ) {
#line 2692 "cplus.met"
                        MulFreeTree(3,_ptRes0,_ptTree0,expTree);
                        PROG_EXIT(relational_expression_exit,"relational_expression")
#line 2692 "cplus.met"
                    }
#line 2692 "cplus.met"
                    ReplaceTree(_ptRes0, 2, _ptTree0);
#line 2692 "cplus.met"
                    expTree=_ptRes0;
#line 2692 "cplus.met"
                }
#line 2692 "cplus.met"
                break;
#line 2692 "cplus.met"
#line 2693 "cplus.met"
            case INFE : 
#line 2693 "cplus.met"
                tokenAhead = 0 ;
#line 2693 "cplus.met"
                CommTerm();
#line 2693 "cplus.met"
#line 2693 "cplus.met"
                {
#line 2693 "cplus.met"
                    PPTREE _ptTree0=0,_ptRes0=0;
#line 2693 "cplus.met"
                    _ptRes0= MakeTree(LT, 2);
#line 2693 "cplus.met"
                    ReplaceTree(_ptRes0, 1, expTree );
#line 2693 "cplus.met"
                    if ( (_ptTree0=NQUICK_CALL(_Tak(shift_expression)(error_free), 128, cplus))== (PPTREE) -1 ) {
#line 2693 "cplus.met"
                        MulFreeTree(3,_ptRes0,_ptTree0,expTree);
                        PROG_EXIT(relational_expression_exit,"relational_expression")
#line 2693 "cplus.met"
                    }
#line 2693 "cplus.met"
                    ReplaceTree(_ptRes0, 2, _ptTree0);
#line 2693 "cplus.met"
                    expTree=_ptRes0;
#line 2693 "cplus.met"
                }
#line 2693 "cplus.met"
                break;
#line 2693 "cplus.met"
            default :
#line 2693 "cplus.met"
                MulFreeTree(1,expTree);
                CASE_EXIT(relational_expression_exit,"either <= or >= or > or <")
#line 2693 "cplus.met"
                break;
#line 2693 "cplus.met"
        }
#line 2693 "cplus.met"
    } 
#line 2693 "cplus.met"
#line 2695 "cplus.met"
    {
#line 2695 "cplus.met"
        _retValue = expTree ;
#line 2695 "cplus.met"
        goto relational_expression_ret;
#line 2695 "cplus.met"
        
#line 2695 "cplus.met"
    }
#line 2695 "cplus.met"
#line 2695 "cplus.met"
#line 2695 "cplus.met"

#line 2696 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2696 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 2696 "cplus.met"
return((PPTREE) 0);
#line 2696 "cplus.met"

#line 2696 "cplus.met"
relational_expression_exit :
#line 2696 "cplus.met"

#line 2696 "cplus.met"
    _Debug = TRACE_RULE("relational_expression",TRACE_EXIT,(PPTREE)0);
#line 2696 "cplus.met"
    _funcLevel--;
#line 2696 "cplus.met"
    return((PPTREE) -1) ;
#line 2696 "cplus.met"

#line 2696 "cplus.met"
relational_expression_ret :
#line 2696 "cplus.met"
    
#line 2696 "cplus.met"
    _Debug = TRACE_RULE("relational_expression",TRACE_RETURN,_retValue);
#line 2696 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2696 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 2696 "cplus.met"
    return _retValue ;
#line 2696 "cplus.met"
}
#line 2696 "cplus.met"

#line 2696 "cplus.met"
#line 1453 "cplus.met"
PPTREE cplus::sc_specifier ( int error_free)
#line 1453 "cplus.met"
{
#line 1453 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 1453 "cplus.met"
    int _value,_nbPre = 0 ;
#line 1453 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 1453 "cplus.met"
    int _Debug = TRACE_RULE("sc_specifier",TRACE_ENTER,(PPTREE)0);
#line 1453 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 1453 "cplus.met"
#line 1454 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 1454 "cplus.met"
    switch( lexEl.Value) {
#line 1454 "cplus.met"
#line 1455 "cplus.met"
        case AUTO : 
#line 1455 "cplus.met"
#line 1455 "cplus.met"
            {
#line 1455 "cplus.met"
                PPTREE _ptTree0=0;
#line 1455 "cplus.met"
                (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 1455 "cplus.met"
                if (  !SEE_TOKEN( AUTO,"auto") || !(_ptTree0 = CommString(lexEl.string()))) {
#line 1455 "cplus.met"
                    MulFreeTree(1,_ptTree0);
                    TOKEN_EXIT(sc_specifier_exit,"auto")
#line 1455 "cplus.met"
                } else {
#line 1455 "cplus.met"
                    tokenAhead = 0 ;
#line 1455 "cplus.met"
                }
#line 1455 "cplus.met"
                _retValue =_ptTree0;
#line 1455 "cplus.met"
                goto sc_specifier_ret;
#line 1455 "cplus.met"
            }
#line 1455 "cplus.met"
            break;
#line 1455 "cplus.met"
#line 1456 "cplus.met"
        case STATIC : 
#line 1456 "cplus.met"
#line 1456 "cplus.met"
            {
#line 1456 "cplus.met"
                PPTREE _ptTree0=0;
#line 1456 "cplus.met"
                (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 1456 "cplus.met"
                if (  !SEE_TOKEN( STATIC,"static") || !(_ptTree0 = CommString(lexEl.string()))) {
#line 1456 "cplus.met"
                    MulFreeTree(1,_ptTree0);
                    TOKEN_EXIT(sc_specifier_exit,"static")
#line 1456 "cplus.met"
                } else {
#line 1456 "cplus.met"
                    tokenAhead = 0 ;
#line 1456 "cplus.met"
                }
#line 1456 "cplus.met"
                _retValue =_ptTree0;
#line 1456 "cplus.met"
                goto sc_specifier_ret;
#line 1456 "cplus.met"
            }
#line 1456 "cplus.met"
            break;
#line 1456 "cplus.met"
#line 1457 "cplus.met"
        case EXTERN : 
#line 1457 "cplus.met"
#line 1457 "cplus.met"
            {
#line 1457 "cplus.met"
                PPTREE _ptTree0=0;
#line 1457 "cplus.met"
                (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 1457 "cplus.met"
                if (  !SEE_TOKEN( EXTERN,"extern") || !(_ptTree0 = CommString(lexEl.string()))) {
#line 1457 "cplus.met"
                    MulFreeTree(1,_ptTree0);
                    TOKEN_EXIT(sc_specifier_exit,"extern")
#line 1457 "cplus.met"
                } else {
#line 1457 "cplus.met"
                    tokenAhead = 0 ;
#line 1457 "cplus.met"
                }
#line 1457 "cplus.met"
                _retValue =_ptTree0;
#line 1457 "cplus.met"
                goto sc_specifier_ret;
#line 1457 "cplus.met"
            }
#line 1457 "cplus.met"
            break;
#line 1457 "cplus.met"
#line 1458 "cplus.met"
        case REGISTER : 
#line 1458 "cplus.met"
#line 1458 "cplus.met"
            {
#line 1458 "cplus.met"
                PPTREE _ptTree0=0;
#line 1458 "cplus.met"
                (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 1458 "cplus.met"
                if (  !SEE_TOKEN( REGISTER,"register") || !(_ptTree0 = CommString(lexEl.string()))) {
#line 1458 "cplus.met"
                    MulFreeTree(1,_ptTree0);
                    TOKEN_EXIT(sc_specifier_exit,"register")
#line 1458 "cplus.met"
                } else {
#line 1458 "cplus.met"
                    tokenAhead = 0 ;
#line 1458 "cplus.met"
                }
#line 1458 "cplus.met"
                _retValue =_ptTree0;
#line 1458 "cplus.met"
                goto sc_specifier_ret;
#line 1458 "cplus.met"
            }
#line 1458 "cplus.met"
            break;
#line 1458 "cplus.met"
#line 1458 "cplus.met"
        default : 
#line 1458 "cplus.met"
#line 1458 "cplus.met"
            break;
#line 1458 "cplus.met"
    }
#line 1458 "cplus.met"
#line 1458 "cplus.met"
#line 1460 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1460 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 1460 "cplus.met"
return((PPTREE) 0);
#line 1460 "cplus.met"

#line 1460 "cplus.met"
sc_specifier_exit :
#line 1460 "cplus.met"

#line 1460 "cplus.met"
    _Debug = TRACE_RULE("sc_specifier",TRACE_EXIT,(PPTREE)0);
#line 1460 "cplus.met"
    _funcLevel--;
#line 1460 "cplus.met"
    return((PPTREE) -1) ;
#line 1460 "cplus.met"

#line 1460 "cplus.met"
sc_specifier_ret :
#line 1460 "cplus.met"
    
#line 1460 "cplus.met"
    _Debug = TRACE_RULE("sc_specifier",TRACE_RETURN,_retValue);
#line 1460 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1460 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 1460 "cplus.met"
    return _retValue ;
#line 1460 "cplus.met"
}
#line 1460 "cplus.met"

#line 1460 "cplus.met"
#line 2698 "cplus.met"
PPTREE cplus::shift_expression ( int error_free)
#line 2698 "cplus.met"
{
#line 2698 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 2698 "cplus.met"
    int _value,_nbPre = 0 ;
#line 2698 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 2698 "cplus.met"
    int _Debug = TRACE_RULE("shift_expression",TRACE_ENTER,(PPTREE)0);
#line 2698 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 2698 "cplus.met"
#line 2698 "cplus.met"
    PPTREE expTree = (PPTREE) 0;
#line 2698 "cplus.met"
#line 2700 "cplus.met"
    if ( (expTree=NQUICK_CALL(_Tak(additive_expression)(error_free), 3, cplus))== (PPTREE) -1 ) {
#line 2700 "cplus.met"
        MulFreeTree(1,expTree);
        PROG_EXIT(shift_expression_exit,"shift_expression")
#line 2700 "cplus.met"
    }
#line 2700 "cplus.met"
#line 2701 "cplus.met"
    while (((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN( INFEINFE,"<<")) || 
#line 2701 "cplus.met"
          ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN( SUPESUPE,">>"))) { 
#line 2701 "cplus.met"
#line 2702 "cplus.met"
        (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 2702 "cplus.met"
        switch( lexEl.Value) {
#line 2702 "cplus.met"
#line 2703 "cplus.met"
            case INFEINFE : 
#line 2703 "cplus.met"
                tokenAhead = 0 ;
#line 2703 "cplus.met"
                CommTerm();
#line 2703 "cplus.met"
#line 2703 "cplus.met"
                {
#line 2703 "cplus.met"
                    PPTREE _ptTree0=0,_ptRes0=0;
#line 2703 "cplus.met"
                    _ptRes0= MakeTree(LSHI, 2);
#line 2703 "cplus.met"
                    ReplaceTree(_ptRes0, 1, expTree );
#line 2703 "cplus.met"
                    if ( (_ptTree0=NQUICK_CALL(_Tak(additive_expression)(error_free), 3, cplus))== (PPTREE) -1 ) {
#line 2703 "cplus.met"
                        MulFreeTree(3,_ptRes0,_ptTree0,expTree);
                        PROG_EXIT(shift_expression_exit,"shift_expression")
#line 2703 "cplus.met"
                    }
#line 2703 "cplus.met"
                    ReplaceTree(_ptRes0, 2, _ptTree0);
#line 2703 "cplus.met"
                    expTree=_ptRes0;
#line 2703 "cplus.met"
                }
#line 2703 "cplus.met"
                break;
#line 2703 "cplus.met"
#line 2704 "cplus.met"
            case SUPESUPE : 
#line 2704 "cplus.met"
                tokenAhead = 0 ;
#line 2704 "cplus.met"
                CommTerm();
#line 2704 "cplus.met"
#line 2704 "cplus.met"
                {
#line 2704 "cplus.met"
                    PPTREE _ptTree0=0,_ptRes0=0;
#line 2704 "cplus.met"
                    _ptRes0= MakeTree(RSHI, 2);
#line 2704 "cplus.met"
                    ReplaceTree(_ptRes0, 1, expTree );
#line 2704 "cplus.met"
                    if ( (_ptTree0=NQUICK_CALL(_Tak(additive_expression)(error_free), 3, cplus))== (PPTREE) -1 ) {
#line 2704 "cplus.met"
                        MulFreeTree(3,_ptRes0,_ptTree0,expTree);
                        PROG_EXIT(shift_expression_exit,"shift_expression")
#line 2704 "cplus.met"
                    }
#line 2704 "cplus.met"
                    ReplaceTree(_ptRes0, 2, _ptTree0);
#line 2704 "cplus.met"
                    expTree=_ptRes0;
#line 2704 "cplus.met"
                }
#line 2704 "cplus.met"
                break;
#line 2704 "cplus.met"
            default :
#line 2704 "cplus.met"
                MulFreeTree(1,expTree);
                CASE_EXIT(shift_expression_exit,"either << or >>")
#line 2704 "cplus.met"
                break;
#line 2704 "cplus.met"
        }
#line 2704 "cplus.met"
    } 
#line 2704 "cplus.met"
#line 2706 "cplus.met"
    {
#line 2706 "cplus.met"
        _retValue = expTree ;
#line 2706 "cplus.met"
        goto shift_expression_ret;
#line 2706 "cplus.met"
        
#line 2706 "cplus.met"
    }
#line 2706 "cplus.met"
#line 2706 "cplus.met"
#line 2706 "cplus.met"

#line 2707 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2707 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 2707 "cplus.met"
return((PPTREE) 0);
#line 2707 "cplus.met"

#line 2707 "cplus.met"
shift_expression_exit :
#line 2707 "cplus.met"

#line 2707 "cplus.met"
    _Debug = TRACE_RULE("shift_expression",TRACE_EXIT,(PPTREE)0);
#line 2707 "cplus.met"
    _funcLevel--;
#line 2707 "cplus.met"
    return((PPTREE) -1) ;
#line 2707 "cplus.met"

#line 2707 "cplus.met"
shift_expression_ret :
#line 2707 "cplus.met"
    
#line 2707 "cplus.met"
    _Debug = TRACE_RULE("shift_expression",TRACE_RETURN,_retValue);
#line 2707 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2707 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 2707 "cplus.met"
    return _retValue ;
#line 2707 "cplus.met"
}
#line 2707 "cplus.met"

#line 2707 "cplus.met"
#line 2036 "cplus.met"
PPTREE cplus::short_long_int_char ( int error_free)
#line 2036 "cplus.met"
{
#line 2036 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 2036 "cplus.met"
    int _value,_nbPre = 0 ;
#line 2036 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 2036 "cplus.met"
    int _Debug = TRACE_RULE("short_long_int_char",TRACE_ENTER,(PPTREE)0);
#line 2036 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 2036 "cplus.met"
#line 2037 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 2037 "cplus.met"
    switch( lexEl.Value) {
#line 2037 "cplus.met"
#line 2038 "cplus.met"
        case INT : 
#line 2038 "cplus.met"
            tokenAhead = 0 ;
#line 2038 "cplus.met"
            CommTerm();
#line 2038 "cplus.met"
#line 2038 "cplus.met"
            {
#line 2038 "cplus.met"
                PPTREE _ptTree0=0;
#line 2038 "cplus.met"
                {
#line 2038 "cplus.met"
                    PPTREE _ptRes1=0;
#line 2038 "cplus.met"
                    _ptRes1= MakeTree(TINT, 0);
#line 2038 "cplus.met"
                    _ptTree0=_ptRes1;
#line 2038 "cplus.met"
                }
#line 2038 "cplus.met"
                _retValue =_ptTree0;
#line 2038 "cplus.met"
                goto short_long_int_char_ret;
#line 2038 "cplus.met"
            }
#line 2038 "cplus.met"
            break;
#line 2038 "cplus.met"
#line 2039 "cplus.met"
        case CHAR : 
#line 2039 "cplus.met"
            tokenAhead = 0 ;
#line 2039 "cplus.met"
            CommTerm();
#line 2039 "cplus.met"
#line 2039 "cplus.met"
            {
#line 2039 "cplus.met"
                PPTREE _ptTree0=0;
#line 2039 "cplus.met"
                {
#line 2039 "cplus.met"
                    PPTREE _ptRes1=0;
#line 2039 "cplus.met"
                    _ptRes1= MakeTree(TCHAR, 0);
#line 2039 "cplus.met"
                    _ptTree0=_ptRes1;
#line 2039 "cplus.met"
                }
#line 2039 "cplus.met"
                _retValue =_ptTree0;
#line 2039 "cplus.met"
                goto short_long_int_char_ret;
#line 2039 "cplus.met"
            }
#line 2039 "cplus.met"
            break;
#line 2039 "cplus.met"
#line 2040 "cplus.met"
        case LONG : 
#line 2040 "cplus.met"
#line 2040 "cplus.met"
            {
#line 2040 "cplus.met"
                PPTREE _ptTree0=0;
#line 2040 "cplus.met"
                if ( (_ptTree0=NQUICK_CALL(_Tak(long_type)(error_free), 92, cplus))== (PPTREE) -1 ) {
#line 2040 "cplus.met"
                    MulFreeTree(1,_ptTree0);
                    PROG_EXIT(short_long_int_char_exit,"short_long_int_char")
#line 2040 "cplus.met"
                }
#line 2040 "cplus.met"
                _retValue =_ptTree0;
#line 2040 "cplus.met"
                goto short_long_int_char_ret;
#line 2040 "cplus.met"
            }
#line 2040 "cplus.met"
            break;
#line 2040 "cplus.met"
#line 2041 "cplus.met"
        case SHORT : 
#line 2041 "cplus.met"
            tokenAhead = 0 ;
#line 2041 "cplus.met"
            CommTerm();
#line 2041 "cplus.met"
#line 2042 "cplus.met"
            if (inside_long){
#line 2042 "cplus.met"
#line 2043 "cplus.met"
                
#line 2043 "cplus.met"
                LEX_EXIT ("",0);
#line 2043 "cplus.met"
                goto short_long_int_char_exit;
#line 2043 "cplus.met"
#line 2043 "cplus.met"
            } else {
#line 2043 "cplus.met"
#line 2045 "cplus.met"
#line 2046 "cplus.met"
                (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 2046 "cplus.met"
                switch( lexEl.Value) {
#line 2046 "cplus.met"
#line 2047 "cplus.met"
                    case INT : 
#line 2047 "cplus.met"
                        tokenAhead = 0 ;
#line 2047 "cplus.met"
                        CommTerm();
#line 2047 "cplus.met"
#line 2047 "cplus.met"
                        {
#line 2047 "cplus.met"
                            PPTREE _ptTree0=0;
#line 2047 "cplus.met"
                            {
#line 2047 "cplus.met"
                                PPTREE _ptTree1=0,_ptRes1=0;
#line 2047 "cplus.met"
                                _ptRes1= MakeTree(TSHORT, 1);
#line 2047 "cplus.met"
                                {
#line 2047 "cplus.met"
                                    PPTREE _ptRes2=0;
#line 2047 "cplus.met"
                                    _ptRes2= MakeTree(TINT, 0);
#line 2047 "cplus.met"
                                    _ptTree1=_ptRes2;
#line 2047 "cplus.met"
                                }
#line 2047 "cplus.met"
                                ReplaceTree(_ptRes1, 1, _ptTree1);
#line 2047 "cplus.met"
                                _ptTree0=_ptRes1;
#line 2047 "cplus.met"
                            }
#line 2047 "cplus.met"
                            _retValue =_ptTree0;
#line 2047 "cplus.met"
                            goto short_long_int_char_ret;
#line 2047 "cplus.met"
                        }
#line 2047 "cplus.met"
                        break;
#line 2047 "cplus.met"
#line 2048 "cplus.met"
                    default : 
#line 2048 "cplus.met"
#line 2048 "cplus.met"
                        {
#line 2048 "cplus.met"
                            PPTREE _ptTree0=0;
#line 2048 "cplus.met"
                            {
#line 2048 "cplus.met"
                                PPTREE _ptRes1=0;
#line 2048 "cplus.met"
                                _ptRes1= MakeTree(TSHORT, 1);
#line 2048 "cplus.met"
                                _ptTree0=_ptRes1;
#line 2048 "cplus.met"
                            }
#line 2048 "cplus.met"
                            _retValue =_ptTree0;
#line 2048 "cplus.met"
                            goto short_long_int_char_ret;
#line 2048 "cplus.met"
                        }
#line 2048 "cplus.met"
                        break;
#line 2048 "cplus.met"
                }
#line 2048 "cplus.met"
#line 2048 "cplus.met"
            }
#line 2048 "cplus.met"
            break;
#line 2048 "cplus.met"
#line 2051 "cplus.met"
        case SIGNED : 
#line 2051 "cplus.met"
#line 2051 "cplus.met"
            {
#line 2051 "cplus.met"
                PPTREE _ptTree0=0;
#line 2051 "cplus.met"
                if ( (_ptTree0=NQUICK_CALL(_Tak(signed_type)(error_free), 130, cplus))== (PPTREE) -1 ) {
#line 2051 "cplus.met"
                    MulFreeTree(1,_ptTree0);
                    PROG_EXIT(short_long_int_char_exit,"short_long_int_char")
#line 2051 "cplus.met"
                }
#line 2051 "cplus.met"
                _retValue =_ptTree0;
#line 2051 "cplus.met"
                goto short_long_int_char_ret;
#line 2051 "cplus.met"
            }
#line 2051 "cplus.met"
            break;
#line 2051 "cplus.met"
#line 2052 "cplus.met"
        case UNSIGNED : 
#line 2052 "cplus.met"
#line 2052 "cplus.met"
            {
#line 2052 "cplus.met"
                PPTREE _ptTree0=0;
#line 2052 "cplus.met"
                if ( (_ptTree0=NQUICK_CALL(_Tak(unsigned_type)(error_free), 153, cplus))== (PPTREE) -1 ) {
#line 2052 "cplus.met"
                    MulFreeTree(1,_ptTree0);
                    PROG_EXIT(short_long_int_char_exit,"short_long_int_char")
#line 2052 "cplus.met"
                }
#line 2052 "cplus.met"
                _retValue =_ptTree0;
#line 2052 "cplus.met"
                goto short_long_int_char_ret;
#line 2052 "cplus.met"
            }
#line 2052 "cplus.met"
            break;
#line 2052 "cplus.met"
        default :
#line 2052 "cplus.met"
            CASE_EXIT(short_long_int_char_exit,"either int or char or long or short or signed or unsigned")
#line 2052 "cplus.met"
            break;
#line 2052 "cplus.met"
    }
#line 2052 "cplus.met"
#line 2052 "cplus.met"
#line 2053 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2053 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 2053 "cplus.met"
return((PPTREE) 0);
#line 2053 "cplus.met"

#line 2053 "cplus.met"
short_long_int_char_exit :
#line 2053 "cplus.met"

#line 2053 "cplus.met"
    _Debug = TRACE_RULE("short_long_int_char",TRACE_EXIT,(PPTREE)0);
#line 2053 "cplus.met"
    _funcLevel--;
#line 2053 "cplus.met"
    return((PPTREE) -1) ;
#line 2053 "cplus.met"

#line 2053 "cplus.met"
short_long_int_char_ret :
#line 2053 "cplus.met"
    
#line 2053 "cplus.met"
    _Debug = TRACE_RULE("short_long_int_char",TRACE_RETURN,_retValue);
#line 2053 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2053 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 2053 "cplus.met"
    return _retValue ;
#line 2053 "cplus.met"
}
#line 2053 "cplus.met"

#line 2053 "cplus.met"
#line 2056 "cplus.met"
PPTREE cplus::signed_type ( int error_free)
#line 2056 "cplus.met"
{
#line 2056 "cplus.met"
    int  _oldinside_signed = inside_signed;
#line 2056 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 2056 "cplus.met"
    int _value,_nbPre = 0 ;
#line 2056 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 2056 "cplus.met"
    int _Debug = TRACE_RULE("signed_type",TRACE_ENTER,(PPTREE)0);
#line 2056 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 2056 "cplus.met"
#line 2056 "cplus.met"
    PPTREE retTree = (PPTREE) 0;
#line 2056 "cplus.met"
#line 2058 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 2058 "cplus.met"
    if (  !SEE_TOKEN( SIGNED,"signed") || !(CommTerm(),1)) {
#line 2058 "cplus.met"
        MulFreeTree(1,retTree);
        TOKEN_EXIT(signed_type_exit,"signed")
#line 2058 "cplus.met"
    } else {
#line 2058 "cplus.met"
        tokenAhead = 0 ;
#line 2058 "cplus.met"
    }
#line 2058 "cplus.met"
#line 2059 "cplus.met"
    {
#line 2059 "cplus.met"
        inside_signed = 1 ;
#line 2059 "cplus.met"
#line 2060 "cplus.met"
#line 2061 "cplus.met"
        if (NPUSH_CALL_AFF_VERIF(retTree = ,_Tak(short_long_int_char), 129, cplus)){
#line 2061 "cplus.met"
#line 2062 "cplus.met"
            {
#line 2062 "cplus.met"
                PPTREE _ptTree0=0;
#line 2062 "cplus.met"
                {
#line 2062 "cplus.met"
                    PPTREE _ptRes1=0;
#line 2062 "cplus.met"
                    _ptRes1= MakeTree(TSIGNED, 1);
#line 2062 "cplus.met"
                    ReplaceTree(_ptRes1, 1, retTree );
#line 2062 "cplus.met"
                    _ptTree0=_ptRes1;
#line 2062 "cplus.met"
                }
#line 2062 "cplus.met"
                _retValue =_ptTree0;
#line 2062 "cplus.met"
                goto signed_type_ret;
#line 2062 "cplus.met"
            }
#line 2062 "cplus.met"
        } else {
#line 2062 "cplus.met"
#line 2064 "cplus.met"
            {
#line 2064 "cplus.met"
                PPTREE _ptTree0=0;
#line 2064 "cplus.met"
                {
#line 2064 "cplus.met"
                    PPTREE _ptRes1=0;
#line 2064 "cplus.met"
                    _ptRes1= MakeTree(TSIGNED, 1);
#line 2064 "cplus.met"
                    _ptTree0=_ptRes1;
#line 2064 "cplus.met"
                }
#line 2064 "cplus.met"
                _retValue =_ptTree0;
#line 2064 "cplus.met"
                goto signed_type_ret;
#line 2064 "cplus.met"
            }
#line 2064 "cplus.met"
        }
#line 2064 "cplus.met"
#line 2064 "cplus.met"
        inside_signed =  _oldinside_signed;
#line 2064 "cplus.met"
    }
#line 2064 "cplus.met"
#line 2064 "cplus.met"
#line 2065 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2065 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 2065 "cplus.met"
inside_signed =  _oldinside_signed;
#line 2065 "cplus.met"
return((PPTREE) 0);
#line 2065 "cplus.met"

#line 2065 "cplus.met"
signed_type_exit :
#line 2065 "cplus.met"

#line 2065 "cplus.met"
    _Debug = TRACE_RULE("signed_type",TRACE_EXIT,(PPTREE)0);
#line 2065 "cplus.met"
    _funcLevel--;
#line 2065 "cplus.met"
    inside_signed =  _oldinside_signed;
#line 2065 "cplus.met"
    return((PPTREE) -1) ;
#line 2065 "cplus.met"

#line 2065 "cplus.met"
signed_type_ret :
#line 2065 "cplus.met"
    
#line 2065 "cplus.met"
    _Debug = TRACE_RULE("signed_type",TRACE_RETURN,_retValue);
#line 2065 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2065 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 2065 "cplus.met"
    inside_signed =  _oldinside_signed;
#line 2065 "cplus.met"
    return _retValue ;
#line 2065 "cplus.met"
}
#line 2065 "cplus.met"

#line 2065 "cplus.met"
#line 1789 "cplus.met"
PPTREE cplus::simple_ident ( int error_free)
#line 1789 "cplus.met"
{
#line 1789 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 1789 "cplus.met"
    int _value,_nbPre = 0 ;
#line 1789 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 1789 "cplus.met"
    int _Debug = TRACE_RULE("simple_ident",TRACE_ENTER,(PPTREE)0);
#line 1789 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 1789 "cplus.met"
#line 1790 "cplus.met"
    {
#line 1790 "cplus.met"
        PPTREE _ptTree0=0;
#line 1790 "cplus.met"
        {
#line 1790 "cplus.met"
            PPTREE _ptTree1=0,_ptRes1=0;
#line 1790 "cplus.met"
            _ptRes1= MakeTree(IDENT, 1);
#line 1790 "cplus.met"
            (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 1790 "cplus.met"
            if ( ! TERM_OR_META(IDENT,"IDENT") || !(BUILD_TERM_META(_ptTree1))) {
#line 1790 "cplus.met"
                MulFreeTree(3,_ptRes1,_ptTree1,_ptTree0);
                TOKEN_EXIT(simple_ident_exit,"IDENT")
#line 1790 "cplus.met"
            } else {
#line 1790 "cplus.met"
                tokenAhead = 0 ;
#line 1790 "cplus.met"
            }
#line 1790 "cplus.met"
            ReplaceTree(_ptRes1, 1, _ptTree1);
#line 1790 "cplus.met"
            _ptTree0=_ptRes1;
#line 1790 "cplus.met"
        }
#line 1790 "cplus.met"
        _retValue =_ptTree0;
#line 1790 "cplus.met"
        goto simple_ident_ret;
#line 1790 "cplus.met"
    }
#line 1790 "cplus.met"
#line 1790 "cplus.met"
#line 1790 "cplus.met"

#line 1791 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1791 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 1791 "cplus.met"
return((PPTREE) 0);
#line 1791 "cplus.met"

#line 1791 "cplus.met"
simple_ident_exit :
#line 1791 "cplus.met"

#line 1791 "cplus.met"
    _Debug = TRACE_RULE("simple_ident",TRACE_EXIT,(PPTREE)0);
#line 1791 "cplus.met"
    _funcLevel--;
#line 1791 "cplus.met"
    return((PPTREE) -1) ;
#line 1791 "cplus.met"

#line 1791 "cplus.met"
simple_ident_ret :
#line 1791 "cplus.met"
    
#line 1791 "cplus.met"
    _Debug = TRACE_RULE("simple_ident",TRACE_RETURN,_retValue);
#line 1791 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1791 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 1791 "cplus.met"
    return _retValue ;
#line 1791 "cplus.met"
}
#line 1791 "cplus.met"

#line 1791 "cplus.met"
#line 2015 "cplus.met"
PPTREE cplus::simple_type ( int error_free)
#line 2015 "cplus.met"
{
#line 2015 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 2015 "cplus.met"
    int _value,_nbPre = 0 ;
#line 2015 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 2015 "cplus.met"
    int _Debug = TRACE_RULE("simple_type",TRACE_ENTER,(PPTREE)0);
#line 2015 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 2015 "cplus.met"
#line 2015 "cplus.met"
    PPTREE valTree = (PPTREE) 0;
#line 2015 "cplus.met"
#line 2017 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 2017 "cplus.met"
    switch( lexEl.Value) {
#line 2017 "cplus.met"
#line 2018 "cplus.met"
        case TYPENAME : 
#line 2018 "cplus.met"
            tokenAhead = 0 ;
#line 2018 "cplus.met"
            CommTerm();
#line 2018 "cplus.met"
#line 2018 "cplus.met"
            {
#line 2018 "cplus.met"
                PPTREE _ptTree0=0;
#line 2018 "cplus.met"
                {
#line 2018 "cplus.met"
                    PPTREE _ptTree1=0,_ptRes1=0;
#line 2018 "cplus.met"
                    _ptRes1= MakeTree(TYPENAME, 1);
#line 2018 "cplus.met"
                    {
#line 2018 "cplus.met"
                        PPTREE _ptTree2=0,_ptRes2=0;
#line 2018 "cplus.met"
                        _ptRes2= MakeTree(TIDENT, 1);
#line 2018 "cplus.met"
                        if ( (_ptTree2=NQUICK_CALL(_Tak(complete_class_name)(error_free), 28, cplus))== (PPTREE) -1 ) {
#line 2018 "cplus.met"
                            MulFreeTree(6,_ptRes2,_ptTree2,_ptRes1,_ptTree1,_ptTree0,valTree);
                            PROG_EXIT(simple_type_exit,"simple_type")
#line 2018 "cplus.met"
                        }
#line 2018 "cplus.met"
                        ReplaceTree(_ptRes2, 1, _ptTree2);
#line 2018 "cplus.met"
                        _ptTree1=_ptRes2;
#line 2018 "cplus.met"
                    }
#line 2018 "cplus.met"
                    ReplaceTree(_ptRes1, 1, _ptTree1);
#line 2018 "cplus.met"
                    _ptTree0=_ptRes1;
#line 2018 "cplus.met"
                }
#line 2018 "cplus.met"
                _retValue =_ptTree0;
#line 2018 "cplus.met"
                goto simple_type_ret;
#line 2018 "cplus.met"
            }
#line 2018 "cplus.met"
            break;
#line 2018 "cplus.met"
#line 2019 "cplus.met"
        case DECLTYPE : 
#line 2019 "cplus.met"
            tokenAhead = 0 ;
#line 2019 "cplus.met"
            CommTerm();
#line 2019 "cplus.met"
#line 2020 "cplus.met"
#line 2021 "cplus.met"
            (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 2021 "cplus.met"
            if (  !SEE_TOKEN( POUV,"(") || !(CommTerm(),1)) {
#line 2021 "cplus.met"
                MulFreeTree(1,valTree);
                TOKEN_EXIT(simple_type_exit,"(")
#line 2021 "cplus.met"
            } else {
#line 2021 "cplus.met"
                tokenAhead = 0 ;
#line 2021 "cplus.met"
            }
#line 2021 "cplus.met"
#line 2022 "cplus.met"
            {
#line 2022 "cplus.met"
                PPTREE _ptTree0=0,_ptRes0=0;
#line 2022 "cplus.met"
                _ptRes0= MakeTree(DECL_TYPE, 1);
#line 2022 "cplus.met"
                if ( (_ptTree0=NQUICK_CALL(_Tak(postfix_expression)(error_free), 110, cplus))== (PPTREE) -1 ) {
#line 2022 "cplus.met"
                    MulFreeTree(3,_ptRes0,_ptTree0,valTree);
                    PROG_EXIT(simple_type_exit,"simple_type")
#line 2022 "cplus.met"
                }
#line 2022 "cplus.met"
                ReplaceTree(_ptRes0, 1, _ptTree0);
#line 2022 "cplus.met"
                valTree=_ptRes0;
#line 2022 "cplus.met"
            }
#line 2022 "cplus.met"
#line 2023 "cplus.met"
            (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 2023 "cplus.met"
            if (  !SEE_TOKEN( PFER,")") || !(CommTerm(),1)) {
#line 2023 "cplus.met"
                MulFreeTree(1,valTree);
                TOKEN_EXIT(simple_type_exit,")")
#line 2023 "cplus.met"
            } else {
#line 2023 "cplus.met"
                tokenAhead = 0 ;
#line 2023 "cplus.met"
            }
#line 2023 "cplus.met"
#line 2024 "cplus.met"
            {
#line 2024 "cplus.met"
                _retValue = valTree ;
#line 2024 "cplus.met"
                goto simple_type_ret;
#line 2024 "cplus.met"
                
#line 2024 "cplus.met"
            }
#line 2024 "cplus.met"
#line 2024 "cplus.met"
            break;
#line 2024 "cplus.met"
#line 2026 "cplus.met"
        case AUTO : 
#line 2026 "cplus.met"
            tokenAhead = 0 ;
#line 2026 "cplus.met"
            CommTerm();
#line 2026 "cplus.met"
#line 2026 "cplus.met"
            {
#line 2026 "cplus.met"
                PPTREE _ptTree0=0;
#line 2026 "cplus.met"
                {
#line 2026 "cplus.met"
                    PPTREE _ptRes1=0;
#line 2026 "cplus.met"
                    _ptRes1= MakeTree(AUTO, 0);
#line 2026 "cplus.met"
                    _ptTree0=_ptRes1;
#line 2026 "cplus.met"
                }
#line 2026 "cplus.met"
                _retValue =_ptTree0;
#line 2026 "cplus.met"
                goto simple_type_ret;
#line 2026 "cplus.met"
            }
#line 2026 "cplus.met"
            break;
#line 2026 "cplus.met"
#line 2027 "cplus.met"
        case DOUBLE : 
#line 2027 "cplus.met"
            tokenAhead = 0 ;
#line 2027 "cplus.met"
            CommTerm();
#line 2027 "cplus.met"
#line 2027 "cplus.met"
            {
#line 2027 "cplus.met"
                PPTREE _ptTree0=0;
#line 2027 "cplus.met"
                {
#line 2027 "cplus.met"
                    PPTREE _ptRes1=0;
#line 2027 "cplus.met"
                    _ptRes1= MakeTree(TDOUBLE, 0);
#line 2027 "cplus.met"
                    _ptTree0=_ptRes1;
#line 2027 "cplus.met"
                }
#line 2027 "cplus.met"
                _retValue =_ptTree0;
#line 2027 "cplus.met"
                goto simple_type_ret;
#line 2027 "cplus.met"
            }
#line 2027 "cplus.met"
            break;
#line 2027 "cplus.met"
#line 2028 "cplus.met"
        case FLOAT : 
#line 2028 "cplus.met"
            tokenAhead = 0 ;
#line 2028 "cplus.met"
            CommTerm();
#line 2028 "cplus.met"
#line 2028 "cplus.met"
            {
#line 2028 "cplus.met"
                PPTREE _ptTree0=0;
#line 2028 "cplus.met"
                {
#line 2028 "cplus.met"
                    PPTREE _ptRes1=0;
#line 2028 "cplus.met"
                    _ptRes1= MakeTree(TFLOAT, 0);
#line 2028 "cplus.met"
                    _ptTree0=_ptRes1;
#line 2028 "cplus.met"
                }
#line 2028 "cplus.met"
                _retValue =_ptTree0;
#line 2028 "cplus.met"
                goto simple_type_ret;
#line 2028 "cplus.met"
            }
#line 2028 "cplus.met"
            break;
#line 2028 "cplus.met"
#line 2029 "cplus.met"
        case VOID : 
#line 2029 "cplus.met"
            tokenAhead = 0 ;
#line 2029 "cplus.met"
            CommTerm();
#line 2029 "cplus.met"
#line 2029 "cplus.met"
            {
#line 2029 "cplus.met"
                PPTREE _ptTree0=0;
#line 2029 "cplus.met"
                {
#line 2029 "cplus.met"
                    PPTREE _ptRes1=0;
#line 2029 "cplus.met"
                    _ptRes1= MakeTree(VOID, 0);
#line 2029 "cplus.met"
                    _ptTree0=_ptRes1;
#line 2029 "cplus.met"
                }
#line 2029 "cplus.met"
                _retValue =_ptTree0;
#line 2029 "cplus.met"
                goto simple_type_ret;
#line 2029 "cplus.met"
            }
#line 2029 "cplus.met"
            break;
#line 2029 "cplus.met"
#line 2030 "cplus.met"
        case DPOIDPOI : 
#line 2030 "cplus.met"
#line 2030 "cplus.met"
            {
#line 2030 "cplus.met"
                PPTREE _ptTree0=0;
#line 2030 "cplus.met"
                {
#line 2030 "cplus.met"
                    PPTREE _ptTree1=0,_ptRes1=0;
#line 2030 "cplus.met"
                    _ptRes1= MakeTree(TIDENT, 1);
#line 2030 "cplus.met"
                    if ( (_ptTree1=NQUICK_CALL(_Tak(complete_class_name)(error_free), 28, cplus))== (PPTREE) -1 ) {
#line 2030 "cplus.met"
                        MulFreeTree(4,_ptRes1,_ptTree1,_ptTree0,valTree);
                        PROG_EXIT(simple_type_exit,"simple_type")
#line 2030 "cplus.met"
                    }
#line 2030 "cplus.met"
                    ReplaceTree(_ptRes1, 1, _ptTree1);
#line 2030 "cplus.met"
                    _ptTree0=_ptRes1;
#line 2030 "cplus.met"
                }
#line 2030 "cplus.met"
                _retValue =_ptTree0;
#line 2030 "cplus.met"
                goto simple_type_ret;
#line 2030 "cplus.met"
            }
#line 2030 "cplus.met"
            break;
#line 2030 "cplus.met"
#line 2031 "cplus.met"
        case META : 
#line 2031 "cplus.met"
        case IDENT : 
#line 2031 "cplus.met"
#line 2031 "cplus.met"
            {
#line 2031 "cplus.met"
                PPTREE _ptTree0=0;
#line 2031 "cplus.met"
                {
#line 2031 "cplus.met"
                    PPTREE _ptTree1=0,_ptRes1=0;
#line 2031 "cplus.met"
                    _ptRes1= MakeTree(TIDENT, 1);
#line 2031 "cplus.met"
                    if ( (_ptTree1=NQUICK_CALL(_Tak(complete_class_name)(error_free), 28, cplus))== (PPTREE) -1 ) {
#line 2031 "cplus.met"
                        MulFreeTree(4,_ptRes1,_ptTree1,_ptTree0,valTree);
                        PROG_EXIT(simple_type_exit,"simple_type")
#line 2031 "cplus.met"
                    }
#line 2031 "cplus.met"
                    ReplaceTree(_ptRes1, 1, _ptTree1);
#line 2031 "cplus.met"
                    _ptTree0=_ptRes1;
#line 2031 "cplus.met"
                }
#line 2031 "cplus.met"
                _retValue =_ptTree0;
#line 2031 "cplus.met"
                goto simple_type_ret;
#line 2031 "cplus.met"
            }
#line 2031 "cplus.met"
            break;
#line 2031 "cplus.met"
#line 2032 "cplus.met"
        default : 
#line 2032 "cplus.met"
#line 2032 "cplus.met"
            {
#line 2032 "cplus.met"
                PPTREE _ptTree0=0;
#line 2032 "cplus.met"
                if ( (_ptTree0=NQUICK_CALL(_Tak(short_long_int_char)(error_free), 129, cplus))== (PPTREE) -1 ) {
#line 2032 "cplus.met"
                    MulFreeTree(2,_ptTree0,valTree);
                    PROG_EXIT(simple_type_exit,"simple_type")
#line 2032 "cplus.met"
                }
#line 2032 "cplus.met"
                _retValue =_ptTree0;
#line 2032 "cplus.met"
                goto simple_type_ret;
#line 2032 "cplus.met"
            }
#line 2032 "cplus.met"
            break;
#line 2032 "cplus.met"
    }
#line 2032 "cplus.met"
#line 2032 "cplus.met"
#line 2033 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2033 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 2033 "cplus.met"
return((PPTREE) 0);
#line 2033 "cplus.met"

#line 2033 "cplus.met"
simple_type_exit :
#line 2033 "cplus.met"

#line 2033 "cplus.met"
    _Debug = TRACE_RULE("simple_type",TRACE_EXIT,(PPTREE)0);
#line 2033 "cplus.met"
    _funcLevel--;
#line 2033 "cplus.met"
    return((PPTREE) -1) ;
#line 2033 "cplus.met"

#line 2033 "cplus.met"
simple_type_ret :
#line 2033 "cplus.met"
    
#line 2033 "cplus.met"
    _Debug = TRACE_RULE("simple_type",TRACE_RETURN,_retValue);
#line 2033 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2033 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 2033 "cplus.met"
    return _retValue ;
#line 2033 "cplus.met"
}
#line 2033 "cplus.met"

#line 2033 "cplus.met"
#line 2893 "cplus.met"
PPTREE cplus::simple_type_name ( int error_free)
#line 2893 "cplus.met"
{
#line 2893 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 2893 "cplus.met"
    int _value,_nbPre = 0 ;
#line 2893 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 2893 "cplus.met"
    int _Debug = TRACE_RULE("simple_type_name",TRACE_ENTER,(PPTREE)0);
#line 2893 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 2893 "cplus.met"
#line 2894 "cplus.met"
    if (! ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN( IDENT,"IDENT"))){
#line 2894 "cplus.met"
#line 2895 "cplus.met"
        {
#line 2895 "cplus.met"
            PPTREE _ptTree0=0;
#line 2895 "cplus.met"
            if ( (_ptTree0=NQUICK_CALL(_Tak(simple_type)(error_free), 132, cplus))== (PPTREE) -1 ) {
#line 2895 "cplus.met"
                MulFreeTree(1,_ptTree0);
                PROG_EXIT(simple_type_name_exit,"simple_type_name")
#line 2895 "cplus.met"
            }
#line 2895 "cplus.met"
            _retValue =_ptTree0;
#line 2895 "cplus.met"
            goto simple_type_name_ret;
#line 2895 "cplus.met"
        }
#line 2895 "cplus.met"
    } else {
#line 2895 "cplus.met"
#line 2897 "cplus.met"
        
#line 2897 "cplus.met"
        LEX_EXIT ("",0);
#line 2897 "cplus.met"
        goto simple_type_name_exit;
#line 2897 "cplus.met"
    }
#line 2897 "cplus.met"
#line 2897 "cplus.met"
#line 2897 "cplus.met"

#line 2898 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2898 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 2898 "cplus.met"
return((PPTREE) 0);
#line 2898 "cplus.met"

#line 2898 "cplus.met"
simple_type_name_exit :
#line 2898 "cplus.met"

#line 2898 "cplus.met"
    _Debug = TRACE_RULE("simple_type_name",TRACE_EXIT,(PPTREE)0);
#line 2898 "cplus.met"
    _funcLevel--;
#line 2898 "cplus.met"
    return((PPTREE) -1) ;
#line 2898 "cplus.met"

#line 2898 "cplus.met"
simple_type_name_ret :
#line 2898 "cplus.met"
    
#line 2898 "cplus.met"
    _Debug = TRACE_RULE("simple_type_name",TRACE_RETURN,_retValue);
#line 2898 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2898 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 2898 "cplus.met"
    return _retValue ;
#line 2898 "cplus.met"
}
#line 2898 "cplus.met"

#line 2898 "cplus.met"
#line 2759 "cplus.met"
PPTREE cplus::sizeof_type ( int error_free)
#line 2759 "cplus.met"
{
#line 2759 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 2759 "cplus.met"
    int _value,_nbPre = 0 ;
#line 2759 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 2759 "cplus.met"
    int _Debug = TRACE_RULE("sizeof_type",TRACE_ENTER,(PPTREE)0);
#line 2759 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 2759 "cplus.met"
#line 2759 "cplus.met"
    PPTREE expTree = (PPTREE) 0;
#line 2759 "cplus.met"
#line 2761 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 2761 "cplus.met"
    if (  !SEE_TOKEN( POUV,"(") || !(CommTerm(),1)) {
#line 2761 "cplus.met"
        MulFreeTree(1,expTree);
        TOKEN_EXIT(sizeof_type_exit,"(")
#line 2761 "cplus.met"
    } else {
#line 2761 "cplus.met"
        tokenAhead = 0 ;
#line 2761 "cplus.met"
    }
#line 2761 "cplus.met"
#line 2762 "cplus.met"
    if ( (expTree=NQUICK_CALL(_Tak(type_name)(error_free), 148, cplus))== (PPTREE) -1 ) {
#line 2762 "cplus.met"
        MulFreeTree(1,expTree);
        PROG_EXIT(sizeof_type_exit,"sizeof_type")
#line 2762 "cplus.met"
    }
#line 2762 "cplus.met"
#line 2763 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 2763 "cplus.met"
    if (  !SEE_TOKEN( PFER,")") || !(CommTerm(),1)) {
#line 2763 "cplus.met"
        MulFreeTree(1,expTree);
        TOKEN_EXIT(sizeof_type_exit,")")
#line 2763 "cplus.met"
    } else {
#line 2763 "cplus.met"
        tokenAhead = 0 ;
#line 2763 "cplus.met"
    }
#line 2763 "cplus.met"
#line 2764 "cplus.met"
    {
#line 2764 "cplus.met"
        _retValue = expTree ;
#line 2764 "cplus.met"
        goto sizeof_type_ret;
#line 2764 "cplus.met"
        
#line 2764 "cplus.met"
    }
#line 2764 "cplus.met"
#line 2764 "cplus.met"
#line 2764 "cplus.met"

#line 2765 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2765 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 2765 "cplus.met"
return((PPTREE) 0);
#line 2765 "cplus.met"

#line 2765 "cplus.met"
sizeof_type_exit :
#line 2765 "cplus.met"

#line 2765 "cplus.met"
    _Debug = TRACE_RULE("sizeof_type",TRACE_EXIT,(PPTREE)0);
#line 2765 "cplus.met"
    _funcLevel--;
#line 2765 "cplus.met"
    return((PPTREE) -1) ;
#line 2765 "cplus.met"

#line 2765 "cplus.met"
sizeof_type_ret :
#line 2765 "cplus.met"
    
#line 2765 "cplus.met"
    _Debug = TRACE_RULE("sizeof_type",TRACE_RETURN,_retValue);
#line 2765 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2765 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 2765 "cplus.met"
    return _retValue ;
#line 2765 "cplus.met"
}
#line 2765 "cplus.met"

#line 2765 "cplus.met"
#line 983 "cplus.met"
PPTREE cplus::stat_all ( int error_free)
#line 983 "cplus.met"
{
#line 983 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 983 "cplus.met"
    int _value,_nbPre = 0 ;
#line 983 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 983 "cplus.met"
    int _Debug = TRACE_RULE("stat_all",TRACE_ENTER,(PPTREE)0);
#line 983 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 983 "cplus.met"
#line 983 "cplus.met"
    PPTREE stat = (PPTREE) 0;
#line 983 "cplus.met"
#line 985 "cplus.met"
    if (((((NPUSH_CALL_AFF_VERIF(stat = ,_Tak(statement), 140, cplus)) || 
#line 985 "cplus.met"
          (NPUSH_CALL_AFF_VERIF(stat = ,_Tak(data_declaration), 41, cplus))) || 
#line 985 "cplus.met"
         (NPUSH_CALL_AFF_VERIF(stat = ,_Tak(stat_dir), 136, cplus))) || 
#line 985 "cplus.met"
        (NPUSH_CALL_AFF_VERIF(stat = ,_Tak(exception), 59, cplus))) || 
#line 985 "cplus.met"
       (NPUSH_CALL_AFF_VERIF(stat = ,_Tak(ext_data_declaration), 72, cplus))){
#line 985 "cplus.met"
#line 986 "cplus.met"
        {
#line 986 "cplus.met"
            _retValue = stat ;
#line 986 "cplus.met"
            goto stat_all_ret;
#line 986 "cplus.met"
            
#line 986 "cplus.met"
        }
#line 986 "cplus.met"
    } else {
#line 986 "cplus.met"
#line 988 "cplus.met"
        {
#line 988 "cplus.met"
            PPTREE _ptTree0=0;
#line 988 "cplus.met"
            if ( (_ptTree0=NQUICK_CALL(_Tak(statement)(error_free), 140, cplus))== (PPTREE) -1 ) {
#line 988 "cplus.met"
                MulFreeTree(2,_ptTree0,stat);
                PROG_EXIT(stat_all_exit,"stat_all")
#line 988 "cplus.met"
            }
#line 988 "cplus.met"
            _retValue =_ptTree0;
#line 988 "cplus.met"
            goto stat_all_ret;
#line 988 "cplus.met"
        }
#line 988 "cplus.met"
    }
#line 988 "cplus.met"
#line 988 "cplus.met"
#line 988 "cplus.met"

#line 989 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 989 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 989 "cplus.met"
return((PPTREE) 0);
#line 989 "cplus.met"

#line 989 "cplus.met"
stat_all_exit :
#line 989 "cplus.met"

#line 989 "cplus.met"
    _Debug = TRACE_RULE("stat_all",TRACE_EXIT,(PPTREE)0);
#line 989 "cplus.met"
    _funcLevel--;
#line 989 "cplus.met"
    return((PPTREE) -1) ;
#line 989 "cplus.met"

#line 989 "cplus.met"
stat_all_ret :
#line 989 "cplus.met"
    
#line 989 "cplus.met"
    _Debug = TRACE_RULE("stat_all",TRACE_RETURN,_retValue);
#line 989 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 989 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 989 "cplus.met"
    return _retValue ;
#line 989 "cplus.met"
}
#line 989 "cplus.met"

#line 989 "cplus.met"
#line 1152 "cplus.met"
PPTREE cplus::stat_dir ( int error_free)
#line 1152 "cplus.met"
{
#line 1152 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 1152 "cplus.met"
    int _value,_nbPre = 0 ;
#line 1152 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 1152 "cplus.met"
    int _Debug = TRACE_RULE("stat_dir",TRACE_ENTER,(PPTREE)0);
#line 1152 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 1152 "cplus.met"
#line 1152 "cplus.met"
    PPTREE retTree = (PPTREE) 0;
#line 1152 "cplus.met"
#line 1154 "cplus.met"
    if (NPUSH_CALL_AFF_VERIF(retTree = ,_Tak(directive), 53, cplus)){
#line 1154 "cplus.met"
#line 1155 "cplus.met"
        {
#line 1155 "cplus.met"
            _retValue = retTree ;
#line 1155 "cplus.met"
            goto stat_dir_ret;
#line 1155 "cplus.met"
            
#line 1155 "cplus.met"
        }
#line 1155 "cplus.met"
    }
#line 1155 "cplus.met"
#line 1156 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 1156 "cplus.met"
    switch( lexEl.Value) {
#line 1156 "cplus.met"
#line 1157 "cplus.met"
        case META : 
#line 1157 "cplus.met"
        case IF_DIR : 
#line 1157 "cplus.met"
            tokenAhead = 0 ;
#line 1157 "cplus.met"
            CommTerm();
#line 1157 "cplus.met"
#line 1157 "cplus.met"
            {
#line 1157 "cplus.met"
                PPTREE _ptTree0=0;
#line 1157 "cplus.met"
                if ( (_ptTree0=NQUICK_CALL(_Tak(stat_if_dir)(error_free), 138, cplus))== (PPTREE) -1 ) {
#line 1157 "cplus.met"
                    MulFreeTree(2,_ptTree0,retTree);
                    PROG_EXIT(stat_dir_exit,"stat_dir")
#line 1157 "cplus.met"
                }
#line 1157 "cplus.met"
                _retValue =_ptTree0;
#line 1157 "cplus.met"
                goto stat_dir_ret;
#line 1157 "cplus.met"
            }
#line 1157 "cplus.met"
            break;
#line 1157 "cplus.met"
#line 1158 "cplus.met"
        case IFDEF_DIR : 
#line 1158 "cplus.met"
#line 1158 "cplus.met"
            {
#line 1158 "cplus.met"
                PPTREE _ptTree0=0;
#line 1158 "cplus.met"
                if ( (_ptTree0=NQUICK_CALL(_Tak(stat_ifdef_dir)(error_free), 139, cplus))== (PPTREE) -1 ) {
#line 1158 "cplus.met"
                    MulFreeTree(2,_ptTree0,retTree);
                    PROG_EXIT(stat_dir_exit,"stat_dir")
#line 1158 "cplus.met"
                }
#line 1158 "cplus.met"
                _retValue =_ptTree0;
#line 1158 "cplus.met"
                goto stat_dir_ret;
#line 1158 "cplus.met"
            }
#line 1158 "cplus.met"
            break;
#line 1158 "cplus.met"
#line 1159 "cplus.met"
        case IFNDEF_DIR : 
#line 1159 "cplus.met"
#line 1159 "cplus.met"
            {
#line 1159 "cplus.met"
                PPTREE _ptTree0=0;
#line 1159 "cplus.met"
                if ( (_ptTree0=NQUICK_CALL(_Tak(stat_ifdef_dir)(error_free), 139, cplus))== (PPTREE) -1 ) {
#line 1159 "cplus.met"
                    MulFreeTree(2,_ptTree0,retTree);
                    PROG_EXIT(stat_dir_exit,"stat_dir")
#line 1159 "cplus.met"
                }
#line 1159 "cplus.met"
                _retValue =_ptTree0;
#line 1159 "cplus.met"
                goto stat_dir_ret;
#line 1159 "cplus.met"
            }
#line 1159 "cplus.met"
            break;
#line 1159 "cplus.met"
        default :
#line 1159 "cplus.met"
            MulFreeTree(1,retTree);
            CASE_EXIT(stat_dir_exit,"either IF_DIR or IFDEF_DIR or IFNDEF_DIR")
#line 1159 "cplus.met"
            break;
#line 1159 "cplus.met"
    }
#line 1159 "cplus.met"
#line 1159 "cplus.met"
#line 1160 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1160 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 1160 "cplus.met"
return((PPTREE) 0);
#line 1160 "cplus.met"

#line 1160 "cplus.met"
stat_dir_exit :
#line 1160 "cplus.met"

#line 1160 "cplus.met"
    _Debug = TRACE_RULE("stat_dir",TRACE_EXIT,(PPTREE)0);
#line 1160 "cplus.met"
    _funcLevel--;
#line 1160 "cplus.met"
    return((PPTREE) -1) ;
#line 1160 "cplus.met"

#line 1160 "cplus.met"
stat_dir_ret :
#line 1160 "cplus.met"
    
#line 1160 "cplus.met"
    _Debug = TRACE_RULE("stat_dir",TRACE_RETURN,_retValue);
#line 1160 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1160 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 1160 "cplus.met"
    return _retValue ;
#line 1160 "cplus.met"
}
#line 1160 "cplus.met"

#line 1160 "cplus.met"
#line 3519 "cplus.met"
PPTREE cplus::stat_dir_switch ( int error_free)
#line 3519 "cplus.met"
{
#line 3519 "cplus.met"
    int  _oldswitchContext = switchContext;
#line 3519 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 3519 "cplus.met"
    int _value,_nbPre = 0 ;
#line 3519 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 3519 "cplus.met"
    int _Debug = TRACE_RULE("stat_dir_switch",TRACE_ENTER,(PPTREE)0);
#line 3519 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 3519 "cplus.met"
#line 3520 "cplus.met"
    {
#line 3520 "cplus.met"
        switchContext = 1 ;
#line 3520 "cplus.met"
#line 3521 "cplus.met"
        {
#line 3521 "cplus.met"
            PPTREE _ptTree0=0;
#line 3521 "cplus.met"
            if ( (_ptTree0=NQUICK_CALL(_Tak(stat_dir)(error_free), 136, cplus))== (PPTREE) -1 ) {
#line 3521 "cplus.met"
                MulFreeTree(1,_ptTree0);
                PROG_EXIT(stat_dir_switch_exit,"stat_dir_switch")
#line 3521 "cplus.met"
            }
#line 3521 "cplus.met"
            _retValue =_ptTree0;
#line 3521 "cplus.met"
            goto stat_dir_switch_ret;
#line 3521 "cplus.met"
        }
#line 3521 "cplus.met"
        switchContext =  _oldswitchContext;
#line 3521 "cplus.met"
    }
#line 3521 "cplus.met"
#line 3521 "cplus.met"
#line 3521 "cplus.met"

#line 3522 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 3522 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 3522 "cplus.met"
switchContext =  _oldswitchContext;
#line 3522 "cplus.met"
return((PPTREE) 0);
#line 3522 "cplus.met"

#line 3522 "cplus.met"
stat_dir_switch_exit :
#line 3522 "cplus.met"

#line 3522 "cplus.met"
    _Debug = TRACE_RULE("stat_dir_switch",TRACE_EXIT,(PPTREE)0);
#line 3522 "cplus.met"
    _funcLevel--;
#line 3522 "cplus.met"
    switchContext =  _oldswitchContext;
#line 3522 "cplus.met"
    return((PPTREE) -1) ;
#line 3522 "cplus.met"

#line 3522 "cplus.met"
stat_dir_switch_ret :
#line 3522 "cplus.met"
    
#line 3522 "cplus.met"
    _Debug = TRACE_RULE("stat_dir_switch",TRACE_RETURN,_retValue);
#line 3522 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 3522 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 3522 "cplus.met"
    switchContext =  _oldswitchContext;
#line 3522 "cplus.met"
    return _retValue ;
#line 3522 "cplus.met"
}
#line 3522 "cplus.met"

#line 3522 "cplus.met"
#line 1051 "cplus.met"
PPTREE cplus::stat_if_dir ( int error_free)
#line 1051 "cplus.met"
{
#line 1051 "cplus.met"
    int  _oldkeepCarriage = keepCarriage;
#line 1051 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 1051 "cplus.met"
    int _value,_nbPre = 0 ;
#line 1051 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 1051 "cplus.met"
    int _Debug = TRACE_RULE("stat_if_dir",TRACE_ENTER,(PPTREE)0);
#line 1051 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 1051 "cplus.met"
#line 1051 "cplus.met"
    PPTREE _addlist1 = (PPTREE) 0,_addlist2 = (PPTREE) 0;
#line 1051 "cplus.met"
#line 1051 "cplus.met"
    PPTREE retTree = (PPTREE) 0,list = (PPTREE) 0,list2 = (PPTREE) 0;
#line 1051 "cplus.met"
#line 1053 "cplus.met"
    {
#line 1053 "cplus.met"
        keepCarriage = 1 ;
#line 1053 "cplus.met"
#line 1054 "cplus.met"
#line 1055 "cplus.met"
        {
#line 1055 "cplus.met"
            PPTREE _ptTree0=0,_ptRes0=0;
#line 1055 "cplus.met"
            _ptRes0= MakeTree(IF_DIR, 3);
#line 1055 "cplus.met"
            if ( (_ptTree0=NQUICK_CALL(_Tak(expression)(error_free), 63, cplus))== (PPTREE) -1 ) {
#line 1055 "cplus.met"
                MulFreeTree(7,_ptRes0,_ptTree0,_addlist1,_addlist2,list,list2,retTree);
                PROG_EXIT(stat_if_dir_exit,"stat_if_dir")
#line 1055 "cplus.met"
            }
#line 1055 "cplus.met"
            ReplaceTree(_ptRes0, 1, _ptTree0);
#line 1055 "cplus.met"
            retTree=_ptRes0;
#line 1055 "cplus.met"
        }
#line 1055 "cplus.met"
#line 1056 "cplus.met"
        (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 1056 "cplus.met"
        if ( ! TERM_OR_META(CARRIAGE_RETURN,"CARRIAGE_RETURN") || !(CommTerm(),1)) {
#line 1056 "cplus.met"
            MulFreeTree(5,_addlist1,_addlist2,list,list2,retTree);
            TOKEN_EXIT(stat_if_dir_exit,"CARRIAGE_RETURN")
#line 1056 "cplus.met"
        } else {
#line 1056 "cplus.met"
            tokenAhead = 0 ;
#line 1056 "cplus.met"
        }
#line 1056 "cplus.met"
#line 1056 "cplus.met"
        keepCarriage =  _oldkeepCarriage;
#line 1056 "cplus.met"
    }
#line 1056 "cplus.met"
#line 1056 "cplus.met"
    _addlist1 = list ;
#line 1056 "cplus.met"
#line 1058 "cplus.met"
    while (((! ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN( ELSE_DIR,"ELSE_DIR"))) && 
#line 1058 "cplus.met"
           (! ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN( ELIF_DIR,"ELIF_DIR")))) && 
#line 1058 "cplus.met"
          (! ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN( ENDIF_DIR,"ENDIF_DIR")))) { 
#line 1058 "cplus.met"
#line 1059 "cplus.met"
#line 1059 "cplus.met"
        {
#line 1059 "cplus.met"
            PPTREE _ptTree0=0;
#line 1059 "cplus.met"
            if ( (_ptTree0=NQUICK_CALL(_Tak(stat_all)(error_free), 135, cplus))== (PPTREE) -1 ) {
#line 1059 "cplus.met"
                MulFreeTree(6,_ptTree0,_addlist1,_addlist2,list,list2,retTree);
                PROG_EXIT(stat_if_dir_exit,"stat_if_dir")
#line 1059 "cplus.met"
            }
#line 1059 "cplus.met"
            _addlist1 =AddList(_addlist1 , _ptTree0);
#line 1059 "cplus.met"
        }
#line 1059 "cplus.met"
#line 1059 "cplus.met"
        if (list){
#line 1059 "cplus.met"
#line 1059 "cplus.met"
            _addlist1 = SonTree (_addlist1 ,2 );
#line 1059 "cplus.met"
        } else {
#line 1059 "cplus.met"
#line 1059 "cplus.met"
            list = _addlist1 ;
#line 1059 "cplus.met"
        }
#line 1059 "cplus.met"
    } 
#line 1059 "cplus.met"
#line 1060 "cplus.met"
    {
#line 1060 "cplus.met"
        PPTREE _ptTree0=0;
#line 1060 "cplus.met"
        if ( (_ptTree0=NQUICK_CALL(_Tak(none_statement)(error_free), 104, cplus))== (PPTREE) -1 ) {
#line 1060 "cplus.met"
            MulFreeTree(6,_ptTree0,_addlist1,_addlist2,list,list2,retTree);
            PROG_EXIT(stat_if_dir_exit,"stat_if_dir")
#line 1060 "cplus.met"
        }
#line 1060 "cplus.met"
        list =AddList(list , _ptTree0);
#line 1060 "cplus.met"
    }
#line 1060 "cplus.met"
#line 1061 "cplus.met"
    ReplaceTree(retTree ,2 ,list );
#line 1061 "cplus.met"
#line 1062 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 1062 "cplus.met"
    switch( lexEl.Value) {
#line 1062 "cplus.met"
#line 1063 "cplus.met"
        case META : 
#line 1063 "cplus.met"
        case ELSE_DIR : 
#line 1063 "cplus.met"
            tokenAhead = 0 ;
#line 1063 "cplus.met"
            CommTerm();
#line 1063 "cplus.met"
#line 1064 "cplus.met"
#line 1064 "cplus.met"
            _addlist2 = list2 ;
#line 1064 "cplus.met"
#line 1065 "cplus.met"
            while (((tokenAhead && tokenAhead != -1)|| (c != EOF)) && 
#line 1065 "cplus.met"
                  (! ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN( ENDIF_DIR,"ENDIF_DIR")))) { 
#line 1065 "cplus.met"
#line 1066 "cplus.met"
#line 1066 "cplus.met"
                {
#line 1066 "cplus.met"
                    PPTREE _ptTree0=0;
#line 1066 "cplus.met"
                    if ( (_ptTree0=NQUICK_CALL(_Tak(stat_all)(error_free), 135, cplus))== (PPTREE) -1 ) {
#line 1066 "cplus.met"
                        MulFreeTree(6,_ptTree0,_addlist1,_addlist2,list,list2,retTree);
                        PROG_EXIT(stat_if_dir_exit,"stat_if_dir")
#line 1066 "cplus.met"
                    }
#line 1066 "cplus.met"
                    _addlist2 =AddList(_addlist2 , _ptTree0);
#line 1066 "cplus.met"
                }
#line 1066 "cplus.met"
#line 1066 "cplus.met"
                if (list2){
#line 1066 "cplus.met"
#line 1066 "cplus.met"
                    _addlist2 = SonTree (_addlist2 ,2 );
#line 1066 "cplus.met"
                } else {
#line 1066 "cplus.met"
#line 1066 "cplus.met"
                    list2 = _addlist2 ;
#line 1066 "cplus.met"
                }
#line 1066 "cplus.met"
            } 
#line 1066 "cplus.met"
#line 1067 "cplus.met"
            {
#line 1067 "cplus.met"
                PPTREE _ptTree0=0;
#line 1067 "cplus.met"
                if ( (_ptTree0=NQUICK_CALL(_Tak(none_statement)(error_free), 104, cplus))== (PPTREE) -1 ) {
#line 1067 "cplus.met"
                    MulFreeTree(6,_ptTree0,_addlist1,_addlist2,list,list2,retTree);
                    PROG_EXIT(stat_if_dir_exit,"stat_if_dir")
#line 1067 "cplus.met"
                }
#line 1067 "cplus.met"
                list2 =AddList(list2 , _ptTree0);
#line 1067 "cplus.met"
            }
#line 1067 "cplus.met"
#line 1068 "cplus.met"
            (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 1068 "cplus.met"
            if ( ! TERM_OR_META(ENDIF_DIR,"ENDIF_DIR") || !(CommTerm(),1)) {
#line 1068 "cplus.met"
                MulFreeTree(5,_addlist1,_addlist2,list,list2,retTree);
                TOKEN_EXIT(stat_if_dir_exit,"ENDIF_DIR")
#line 1068 "cplus.met"
            } else {
#line 1068 "cplus.met"
                tokenAhead = 0 ;
#line 1068 "cplus.met"
            }
#line 1068 "cplus.met"
#line 1069 "cplus.met"
            {
#line 1069 "cplus.met"
                PPTREE _ptTree0=0;
#line 1069 "cplus.met"
                _ptTree0=ReplaceTree(retTree ,3 ,list2 );
#line 1069 "cplus.met"
                _retValue =_ptTree0;
#line 1069 "cplus.met"
                goto stat_if_dir_ret;
#line 1069 "cplus.met"
            }
#line 1069 "cplus.met"
#line 1069 "cplus.met"
            break;
#line 1069 "cplus.met"
#line 1071 "cplus.met"
        case ELIF_DIR : 
#line 1071 "cplus.met"
            tokenAhead = 0 ;
#line 1071 "cplus.met"
            CommTerm();
#line 1071 "cplus.met"
#line 1071 "cplus.met"
            {
#line 1071 "cplus.met"
                PPTREE _ptTree0=0;
#line 1071 "cplus.met"
                {
#line 1071 "cplus.met"
                    PPTREE _ptTree1=0;
#line 1071 "cplus.met"
                    if ( (_ptTree1=NQUICK_CALL(_Tak(stat_if_dir)(error_free), 138, cplus))== (PPTREE) -1 ) {
#line 1071 "cplus.met"
                        MulFreeTree(7,_ptTree1,_ptTree0,_addlist1,_addlist2,list,list2,retTree);
                        PROG_EXIT(stat_if_dir_exit,"stat_if_dir")
#line 1071 "cplus.met"
                    }
#line 1071 "cplus.met"
                    _ptTree0=ReplaceTree(retTree , 3 , _ptTree1);
#line 1071 "cplus.met"
                }
#line 1071 "cplus.met"
                _retValue =_ptTree0;
#line 1071 "cplus.met"
                goto stat_if_dir_ret;
#line 1071 "cplus.met"
            }
#line 1071 "cplus.met"
            break;
#line 1071 "cplus.met"
#line 1072 "cplus.met"
        case ENDIF_DIR : 
#line 1072 "cplus.met"
            tokenAhead = 0 ;
#line 1072 "cplus.met"
            CommTerm();
#line 1072 "cplus.met"
#line 1072 "cplus.met"
            {
#line 1072 "cplus.met"
                _retValue = retTree ;
#line 1072 "cplus.met"
                goto stat_if_dir_ret;
#line 1072 "cplus.met"
                
#line 1072 "cplus.met"
            }
#line 1072 "cplus.met"
            break;
#line 1072 "cplus.met"
        default :
#line 1072 "cplus.met"
            MulFreeTree(5,_addlist1,_addlist2,list,list2,retTree);
            CASE_EXIT(stat_if_dir_exit,"either ELSE_DIR or ELIF_DIR or ENDIF_DIR")
#line 1072 "cplus.met"
            break;
#line 1072 "cplus.met"
    }
#line 1072 "cplus.met"
#line 1072 "cplus.met"
#line 1073 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1073 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 1073 "cplus.met"
keepCarriage =  _oldkeepCarriage;
#line 1073 "cplus.met"
return((PPTREE) 0);
#line 1073 "cplus.met"

#line 1073 "cplus.met"
stat_if_dir_exit :
#line 1073 "cplus.met"

#line 1073 "cplus.met"
    _Debug = TRACE_RULE("stat_if_dir",TRACE_EXIT,(PPTREE)0);
#line 1073 "cplus.met"
    _funcLevel--;
#line 1073 "cplus.met"
    keepCarriage =  _oldkeepCarriage;
#line 1073 "cplus.met"
    return((PPTREE) -1) ;
#line 1073 "cplus.met"

#line 1073 "cplus.met"
stat_if_dir_ret :
#line 1073 "cplus.met"
    
#line 1073 "cplus.met"
    _Debug = TRACE_RULE("stat_if_dir",TRACE_RETURN,_retValue);
#line 1073 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1073 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 1073 "cplus.met"
    keepCarriage =  _oldkeepCarriage;
#line 1073 "cplus.met"
    return _retValue ;
#line 1073 "cplus.met"
}
#line 1073 "cplus.met"

#line 1073 "cplus.met"
