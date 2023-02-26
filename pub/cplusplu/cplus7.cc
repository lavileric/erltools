/*************************************************************************/
/*                                                                       */
/*        Produced by MetaGen version 2.0  -    1989-2006                 */
/*       Syntaxic Analyzer Meta Generator developped by                  */
/*                  Eric Lavillonniere                                   */
/*                                                                       */
/*************************************************************************/

#include "token.h"
#include "cplus.h"


#line 2112 "cplus.met"
PPTREE cplus::range_in_liste ( int error_free)
#line 2112 "cplus.met"
{
#line 2112 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 2112 "cplus.met"
    int _value,_nbPre = 0 ;
#line 2112 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 2112 "cplus.met"
    int _Debug = TRACE_RULE("range_in_liste",TRACE_ENTER,(PPTREE)0);
#line 2112 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 2112 "cplus.met"
#line 2112 "cplus.met"
    PPTREE retTree = (PPTREE) 0;
#line 2112 "cplus.met"
#line 2114 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 2114 "cplus.met"
    if ( ! TERM_OR_META(IDENT,"IDENT") || !(BUILD_TERM_META(retTree))) {
#line 2114 "cplus.met"
        MulFreeTree(1,retTree);
        TOKEN_EXIT(range_in_liste_exit,"IDENT")
#line 2114 "cplus.met"
    } else {
#line 2114 "cplus.met"
        tokenAhead = 0 ;
#line 2114 "cplus.met"
    }
#line 2114 "cplus.met"
#line 2115 "cplus.met"
    if ( IsRange(lexEl.string())){
#line 2115 "cplus.met"
#line 2116 "cplus.met"
        {
#line 2116 "cplus.met"
            _retValue = retTree ;
#line 2116 "cplus.met"
            goto range_in_liste_ret;
#line 2116 "cplus.met"
            
#line 2116 "cplus.met"
        }
#line 2116 "cplus.met"
    } else {
#line 2116 "cplus.met"
#line 2118 "cplus.met"
        
#line 2118 "cplus.met"
        MulFreeTree(1,retTree);
        LEX_EXIT ("",0);
#line 2118 "cplus.met"
        goto range_in_liste_exit;
#line 2118 "cplus.met"
    }
#line 2118 "cplus.met"
#line 2118 "cplus.met"
#line 2118 "cplus.met"

#line 2119 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2119 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 2119 "cplus.met"
return((PPTREE) 0);
#line 2119 "cplus.met"

#line 2119 "cplus.met"
range_in_liste_exit :
#line 2119 "cplus.met"

#line 2119 "cplus.met"
    _Debug = TRACE_RULE("range_in_liste",TRACE_EXIT,(PPTREE)0);
#line 2119 "cplus.met"
    _funcLevel--;
#line 2119 "cplus.met"
    return((PPTREE) -1) ;
#line 2119 "cplus.met"

#line 2119 "cplus.met"
range_in_liste_ret :
#line 2119 "cplus.met"
    
#line 2119 "cplus.met"
    _Debug = TRACE_RULE("range_in_liste",TRACE_RETURN,_retValue);
#line 2119 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2119 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 2119 "cplus.met"
    return _retValue ;
#line 2119 "cplus.met"
}
#line 2119 "cplus.met"

#line 2119 "cplus.met"
#line 2156 "cplus.met"
PPTREE cplus::range_modifier ( int error_free)
#line 2156 "cplus.met"
{
#line 2156 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 2156 "cplus.met"
    int _value,_nbPre = 0 ;
#line 2156 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 2156 "cplus.met"
    int _Debug = TRACE_RULE("range_modifier",TRACE_ENTER,(PPTREE)0);
#line 2156 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 2156 "cplus.met"
#line 2157 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 2157 "cplus.met"
    switch( lexEl.Value) {
#line 2157 "cplus.met"
#line 2158 "cplus.met"
        case META : 
#line 2158 "cplus.met"
        case IDENT : 
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
                    if ( (_ptTree1=NQUICK_CALL(_Tak(range_in_liste)(error_free), 121, cplus))== (PPTREE) -1 ) {
#line 2158 "cplus.met"
                        MulFreeTree(3,_ptRes1,_ptTree1,_ptTree0);
                        PROG_EXIT(range_modifier_exit,"range_modifier")
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
        case VOLATILE : 
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
                    if (  !SEE_TOKEN( VOLATILE,"volatile") || !(_ptTree1 = CommString(lexEl.string()))) {
#line 2159 "cplus.met"
                        MulFreeTree(3,_ptRes1,_ptTree1,_ptTree0);
                        TOKEN_EXIT(range_modifier_exit,"volatile")
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
        case REGISTER : 
#line 2160 "cplus.met"
#line 2160 "cplus.met"
            {
#line 2160 "cplus.met"
                PPTREE _ptTree0=0;
#line 2160 "cplus.met"
                {
#line 2160 "cplus.met"
                    PPTREE _ptTree1=0,_ptRes1=0;
#line 2160 "cplus.met"
                    _ptRes1= MakeTree(RANGE_MODIFIER, 2);
#line 2160 "cplus.met"
                    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 2160 "cplus.met"
                    if (  !SEE_TOKEN( REGISTER,"register") || !(_ptTree1 = CommString(lexEl.string()))) {
#line 2160 "cplus.met"
                        MulFreeTree(3,_ptRes1,_ptTree1,_ptTree0);
                        TOKEN_EXIT(range_modifier_exit,"register")
#line 2160 "cplus.met"
                    } else {
#line 2160 "cplus.met"
                        tokenAhead = 0 ;
#line 2160 "cplus.met"
                    }
#line 2160 "cplus.met"
                    ReplaceTree(_ptRes1, 1, _ptTree1);
#line 2160 "cplus.met"
                    _ptTree0=_ptRes1;
#line 2160 "cplus.met"
                }
#line 2160 "cplus.met"
                _retValue =_ptTree0;
#line 2160 "cplus.met"
                goto range_modifier_ret;
#line 2160 "cplus.met"
            }
#line 2160 "cplus.met"
            break;
#line 2160 "cplus.met"
#line 2161 "cplus.met"
        case __ATTRIBUTE__ : 
#line 2161 "cplus.met"
#line 2162 "cplus.met"
#line 2163 "cplus.met"
            {
#line 2163 "cplus.met"
                PPTREE _ptTree0=0;
#line 2163 "cplus.met"
                {
#line 2163 "cplus.met"
                    PPTREE _ptTree1=0,_ptRes1=0;
#line 2163 "cplus.met"
                    _ptRes1= MakeTree(RANGE_MODIFIER, 2);
#line 2163 "cplus.met"
                    if ( (_ptTree1=NQUICK_CALL(_Tak(attribute_call)(error_free), 18, cplus))== (PPTREE) -1 ) {
#line 2163 "cplus.met"
                        MulFreeTree(3,_ptRes1,_ptTree1,_ptTree0);
                        PROG_EXIT(range_modifier_exit,"range_modifier")
#line 2163 "cplus.met"
                    }
#line 2163 "cplus.met"
                    ReplaceTree(_ptRes1, 1, _ptTree1);
#line 2163 "cplus.met"
                    _ptTree0=_ptRes1;
#line 2163 "cplus.met"
                }
#line 2163 "cplus.met"
                _retValue =_ptTree0;
#line 2163 "cplus.met"
                goto range_modifier_ret;
#line 2163 "cplus.met"
            }
#line 2163 "cplus.met"
#line 2163 "cplus.met"
            break;
#line 2163 "cplus.met"
#line 2165 "cplus.met"
        case __ASM__ : 
#line 2165 "cplus.met"
#line 2166 "cplus.met"
#line 2167 "cplus.met"
            {
#line 2167 "cplus.met"
                PPTREE _ptTree0=0;
#line 2167 "cplus.met"
                {
#line 2167 "cplus.met"
                    PPTREE _ptTree1=0,_ptRes1=0;
#line 2167 "cplus.met"
                    _ptRes1= MakeTree(RANGE_MODIFIER, 2);
#line 2167 "cplus.met"
                    if ( (_ptTree1=NQUICK_CALL(_Tak(asm_call)(error_free), 14, cplus))== (PPTREE) -1 ) {
#line 2167 "cplus.met"
                        MulFreeTree(3,_ptRes1,_ptTree1,_ptTree0);
                        PROG_EXIT(range_modifier_exit,"range_modifier")
#line 2167 "cplus.met"
                    }
#line 2167 "cplus.met"
                    ReplaceTree(_ptRes1, 1, _ptTree1);
#line 2167 "cplus.met"
                    _ptTree0=_ptRes1;
#line 2167 "cplus.met"
                }
#line 2167 "cplus.met"
                _retValue =_ptTree0;
#line 2167 "cplus.met"
                goto range_modifier_ret;
#line 2167 "cplus.met"
            }
#line 2167 "cplus.met"
#line 2167 "cplus.met"
            break;
#line 2167 "cplus.met"
#line 2169 "cplus.met"
        default : 
#line 2169 "cplus.met"
#line 2169 "cplus.met"
            {
#line 2169 "cplus.met"
                PPTREE _ptTree0=0;
#line 2169 "cplus.met"
                if ( (_ptTree0=NQUICK_CALL(_Tak(range_modifier_function)(error_free), 123, cplus))== (PPTREE) -1 ) {
#line 2169 "cplus.met"
                    MulFreeTree(1,_ptTree0);
                    PROG_EXIT(range_modifier_exit,"range_modifier")
#line 2169 "cplus.met"
                }
#line 2169 "cplus.met"
                _retValue =_ptTree0;
#line 2169 "cplus.met"
                goto range_modifier_ret;
#line 2169 "cplus.met"
            }
#line 2169 "cplus.met"
            break;
#line 2169 "cplus.met"
    }
#line 2169 "cplus.met"
#line 2169 "cplus.met"
#line 2170 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2170 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 2170 "cplus.met"
return((PPTREE) 0);
#line 2170 "cplus.met"

#line 2170 "cplus.met"
range_modifier_exit :
#line 2170 "cplus.met"

#line 2170 "cplus.met"
    _Debug = TRACE_RULE("range_modifier",TRACE_EXIT,(PPTREE)0);
#line 2170 "cplus.met"
    _funcLevel--;
#line 2170 "cplus.met"
    return((PPTREE) -1) ;
#line 2170 "cplus.met"

#line 2170 "cplus.met"
range_modifier_ret :
#line 2170 "cplus.met"
    
#line 2170 "cplus.met"
    _Debug = TRACE_RULE("range_modifier",TRACE_RETURN,_retValue);
#line 2170 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2170 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 2170 "cplus.met"
    return _retValue ;
#line 2170 "cplus.met"
}
#line 2170 "cplus.met"

#line 2170 "cplus.met"
#line 2128 "cplus.met"
PPTREE cplus::range_modifier_function ( int error_free)
#line 2128 "cplus.met"
{
#line 2128 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 2128 "cplus.met"
    int _value,_nbPre = 0 ;
#line 2128 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 2128 "cplus.met"
    int _Debug = TRACE_RULE("range_modifier_function",TRACE_ENTER,(PPTREE)0);
#line 2128 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 2128 "cplus.met"
#line 2129 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 2129 "cplus.met"
    switch( lexEl.Value) {
#line 2129 "cplus.met"
#line 2130 "cplus.met"
        case INLINE : 
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
                    if (  !SEE_TOKEN( INLINE,"inline") || !(_ptTree1 = CommString(lexEl.string()))) {
#line 2130 "cplus.met"
                        MulFreeTree(3,_ptRes1,_ptTree1,_ptTree0);
                        TOKEN_EXIT(range_modifier_function_exit,"inline")
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
        case VIRTUAL : 
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
                    if (  !SEE_TOKEN( VIRTUAL,"virtual") || !(_ptTree1 = CommString(lexEl.string()))) {
#line 2131 "cplus.met"
                        MulFreeTree(3,_ptRes1,_ptTree1,_ptTree0);
                        TOKEN_EXIT(range_modifier_function_exit,"virtual")
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
        case FRIEND : 
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
                    if (  !SEE_TOKEN( FRIEND,"friend") || !(_ptTree1 = CommString(lexEl.string()))) {
#line 2132 "cplus.met"
                        MulFreeTree(3,_ptRes1,_ptTree1,_ptTree0);
                        TOKEN_EXIT(range_modifier_function_exit,"friend")
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
        case CONST : 
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
                    if (  !SEE_TOKEN( CONST,"const") || !(_ptTree1 = CommString(lexEl.string()))) {
#line 2133 "cplus.met"
                        MulFreeTree(3,_ptRes1,_ptTree1,_ptTree0);
                        TOKEN_EXIT(range_modifier_function_exit,"const")
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
#line 2134 "cplus.met"
        case CONSTEXPR : 
#line 2134 "cplus.met"
#line 2134 "cplus.met"
            {
#line 2134 "cplus.met"
                PPTREE _ptTree0=0;
#line 2134 "cplus.met"
                {
#line 2134 "cplus.met"
                    PPTREE _ptTree1=0,_ptRes1=0;
#line 2134 "cplus.met"
                    _ptRes1= MakeTree(RANGE_MODIFIER, 2);
#line 2134 "cplus.met"
                    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 2134 "cplus.met"
                    if (  !SEE_TOKEN( CONSTEXPR,"constexpr") || !(_ptTree1 = CommString(lexEl.string()))) {
#line 2134 "cplus.met"
                        MulFreeTree(3,_ptRes1,_ptTree1,_ptTree0);
                        TOKEN_EXIT(range_modifier_function_exit,"constexpr")
#line 2134 "cplus.met"
                    } else {
#line 2134 "cplus.met"
                        tokenAhead = 0 ;
#line 2134 "cplus.met"
                    }
#line 2134 "cplus.met"
                    ReplaceTree(_ptRes1, 1, _ptTree1);
#line 2134 "cplus.met"
                    _ptTree0=_ptRes1;
#line 2134 "cplus.met"
                }
#line 2134 "cplus.met"
                _retValue =_ptTree0;
#line 2134 "cplus.met"
                goto range_modifier_function_ret;
#line 2134 "cplus.met"
            }
#line 2134 "cplus.met"
            break;
#line 2134 "cplus.met"
        default :
#line 2134 "cplus.met"
            CASE_EXIT(range_modifier_function_exit,"either inline or virtual or friend or const or constexpr")
#line 2134 "cplus.met"
            break;
#line 2134 "cplus.met"
    }
#line 2134 "cplus.met"
#line 2134 "cplus.met"
#line 2135 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2135 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 2135 "cplus.met"
return((PPTREE) 0);
#line 2135 "cplus.met"

#line 2135 "cplus.met"
range_modifier_function_exit :
#line 2135 "cplus.met"

#line 2135 "cplus.met"
    _Debug = TRACE_RULE("range_modifier_function",TRACE_EXIT,(PPTREE)0);
#line 2135 "cplus.met"
    _funcLevel--;
#line 2135 "cplus.met"
    return((PPTREE) -1) ;
#line 2135 "cplus.met"

#line 2135 "cplus.met"
range_modifier_function_ret :
#line 2135 "cplus.met"
    
#line 2135 "cplus.met"
    _Debug = TRACE_RULE("range_modifier_function",TRACE_RETURN,_retValue);
#line 2135 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2135 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 2135 "cplus.met"
    return _retValue ;
#line 2135 "cplus.met"
}
#line 2135 "cplus.met"

#line 2135 "cplus.met"
#line 1978 "cplus.met"
PPTREE cplus::range_modifier_ident ( int error_free)
#line 1978 "cplus.met"
{
#line 1978 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 1978 "cplus.met"
    int _value,_nbPre = 0 ;
#line 1978 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 1978 "cplus.met"
    int _Debug = TRACE_RULE("range_modifier_ident",TRACE_ENTER,(PPTREE)0);
#line 1978 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 1978 "cplus.met"
#line 1978 "cplus.met"
    PPTREE retTree = (PPTREE) 0;
#line 1978 "cplus.met"
#line 1980 "cplus.met"
    if (NPUSH_CALL_AFF_VERIF(retTree = ,_Tak(range_modifier), 122, cplus)){
#line 1980 "cplus.met"
#line 1981 "cplus.met"
        {
#line 1981 "cplus.met"
            PPTREE _ptTree0=0;
#line 1981 "cplus.met"
            {
#line 1981 "cplus.met"
                PPTREE _ptTree1=0;
#line 1981 "cplus.met"
                if ( (_ptTree1=NQUICK_CALL(_Tak(range_modifier_ident)(error_free), 124, cplus))== (PPTREE) -1 ) {
#line 1981 "cplus.met"
                    MulFreeTree(3,_ptTree1,_ptTree0,retTree);
                    PROG_EXIT(range_modifier_ident_exit,"range_modifier_ident")
#line 1981 "cplus.met"
                }
#line 1981 "cplus.met"
                _ptTree0=ReplaceTree(retTree , 2 , _ptTree1);
#line 1981 "cplus.met"
            }
#line 1981 "cplus.met"
            _retValue =_ptTree0;
#line 1981 "cplus.met"
            goto range_modifier_ident_ret;
#line 1981 "cplus.met"
        }
#line 1981 "cplus.met"
    } else {
#line 1981 "cplus.met"
#line 1983 "cplus.met"
        if ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN( IDENT,"IDENT")){
#line 1983 "cplus.met"
#line 1984 "cplus.met"
            {
#line 1984 "cplus.met"
                PPTREE _ptTree0=0;
#line 1984 "cplus.met"
                {
#line 1984 "cplus.met"
                    PPTREE _ptTree1=0,_ptRes1=0;
#line 1984 "cplus.met"
                    _ptRes1= MakeTree(IDENT, 1);
#line 1984 "cplus.met"
                    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 1984 "cplus.met"
                    if ( ! TERM_OR_META(IDENT,"IDENT") || !(BUILD_TERM_META(_ptTree1))) {
#line 1984 "cplus.met"
                        MulFreeTree(4,_ptRes1,_ptTree1,_ptTree0,retTree);
                        TOKEN_EXIT(range_modifier_ident_exit,"IDENT")
#line 1984 "cplus.met"
                    } else {
#line 1984 "cplus.met"
                        tokenAhead = 0 ;
#line 1984 "cplus.met"
                    }
#line 1984 "cplus.met"
                    ReplaceTree(_ptRes1, 1, _ptTree1);
#line 1984 "cplus.met"
                    _ptTree0=_ptRes1;
#line 1984 "cplus.met"
                }
#line 1984 "cplus.met"
                _retValue =_ptTree0;
#line 1984 "cplus.met"
                goto range_modifier_ident_ret;
#line 1984 "cplus.met"
            }
#line 1984 "cplus.met"
        }
#line 1984 "cplus.met"
    }
#line 1984 "cplus.met"
#line 1984 "cplus.met"
#line 1984 "cplus.met"

#line 1985 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1985 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 1985 "cplus.met"
return((PPTREE) 0);
#line 1985 "cplus.met"

#line 1985 "cplus.met"
range_modifier_ident_exit :
#line 1985 "cplus.met"

#line 1985 "cplus.met"
    _Debug = TRACE_RULE("range_modifier_ident",TRACE_EXIT,(PPTREE)0);
#line 1985 "cplus.met"
    _funcLevel--;
#line 1985 "cplus.met"
    return((PPTREE) -1) ;
#line 1985 "cplus.met"

#line 1985 "cplus.met"
range_modifier_ident_ret :
#line 1985 "cplus.met"
    
#line 1985 "cplus.met"
    _Debug = TRACE_RULE("range_modifier_ident",TRACE_RETURN,_retValue);
#line 1985 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1985 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 1985 "cplus.met"
    return _retValue ;
#line 1985 "cplus.met"
}
#line 1985 "cplus.met"

#line 1985 "cplus.met"
#line 817 "cplus.met"
PPTREE cplus::range_pragma ( int error_free)
#line 817 "cplus.met"
{
#line 817 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 817 "cplus.met"
    int _value,_nbPre = 0 ;
#line 817 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 817 "cplus.met"
    int _Debug = TRACE_RULE("range_pragma",TRACE_ENTER,(PPTREE)0);
#line 817 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 817 "cplus.met"
#line 818 "cplus.met"
    (tokenAhead == 8|| (LexPragma(),TRACE_LEX(1)));
#line 818 "cplus.met"
    if ( ! TERM_OR_META(PRAGMA_RANGE,"PRAGMA_RANGE") || !(CommTerm(),1)) {
#line 818 "cplus.met"
            TOKEN_EXIT(range_pragma_exit,"PRAGMA_RANGE")
#line 818 "cplus.met"
    } else {
#line 818 "cplus.met"
        tokenAhead = 0 ;
#line 818 "cplus.met"
    }
#line 818 "cplus.met"
#line 819 "cplus.met"
    (tokenAhead == 9|| (LexPragmaSmall(),TRACE_LEX(1)));
#line 819 "cplus.met"
    if ( ! TERM_OR_META(SMALL_PRAGMA_CONTENT,"SMALL_PRAGMA_CONTENT") || !(CommTerm(),1)) {
#line 819 "cplus.met"
            TOKEN_EXIT(range_pragma_exit,"SMALL_PRAGMA_CONTENT")
#line 819 "cplus.met"
    } else {
#line 819 "cplus.met"
        tokenAhead = 0 ;
#line 819 "cplus.met"
    }
#line 819 "cplus.met"
#line 820 "cplus.met"
     AnalyseRange(lexEl.string());
#line 820 "cplus.met"
#line 820 "cplus.met"
#line 820 "cplus.met"

#line 821 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 821 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 821 "cplus.met"
return((PPTREE) 0);
#line 821 "cplus.met"

#line 821 "cplus.met"
range_pragma_exit :
#line 821 "cplus.met"

#line 821 "cplus.met"
    _Debug = TRACE_RULE("range_pragma",TRACE_EXIT,(PPTREE)0);
#line 821 "cplus.met"
    _funcLevel--;
#line 821 "cplus.met"
    return((PPTREE) -1) ;
#line 821 "cplus.met"

#line 821 "cplus.met"
range_pragma_ret :
#line 821 "cplus.met"
    
#line 821 "cplus.met"
    _Debug = TRACE_RULE("range_pragma",TRACE_RETURN,_retValue);
#line 821 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 821 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 821 "cplus.met"
    return _retValue ;
#line 821 "cplus.met"
}
#line 821 "cplus.met"

#line 821 "cplus.met"
#line 2677 "cplus.met"
PPTREE cplus::relational_expression ( int error_free)
#line 2677 "cplus.met"
{
#line 2677 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 2677 "cplus.met"
    int _value,_nbPre = 0 ;
#line 2677 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 2677 "cplus.met"
    int _Debug = TRACE_RULE("relational_expression",TRACE_ENTER,(PPTREE)0);
#line 2677 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 2677 "cplus.met"
#line 2677 "cplus.met"
    PPTREE expTree = (PPTREE) 0;
#line 2677 "cplus.met"
#line 2679 "cplus.met"
    if ( (expTree=NQUICK_CALL(_Tak(shift_expression)(error_free), 128, cplus))== (PPTREE) -1 ) {
#line 2679 "cplus.met"
        MulFreeTree(1,expTree);
        PROG_EXIT(relational_expression_exit,"relational_expression")
#line 2679 "cplus.met"
    }
#line 2679 "cplus.met"
#line 2680 "cplus.met"
    while (((((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN( INFEEGAL,"<=")) || 
#line 2680 "cplus.met"
            ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN( SUPEEGAL,">="))) || 
#line 2680 "cplus.met"
           (((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN( SUPE,">")))) || 
#line 2680 "cplus.met"
          ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN( INFE,"<"))) { 
#line 2680 "cplus.met"
#line 2681 "cplus.met"
        (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 2681 "cplus.met"
        switch( lexEl.Value) {
#line 2681 "cplus.met"
#line 2682 "cplus.met"
            case INFEEGAL : 
#line 2682 "cplus.met"
                tokenAhead = 0 ;
#line 2682 "cplus.met"
                CommTerm();
#line 2682 "cplus.met"
#line 2682 "cplus.met"
                {
#line 2682 "cplus.met"
                    PPTREE _ptTree0=0,_ptRes0=0;
#line 2682 "cplus.met"
                    _ptRes0= MakeTree(LEQU, 2);
#line 2682 "cplus.met"
                    ReplaceTree(_ptRes0, 1, expTree );
#line 2682 "cplus.met"
                    if ( (_ptTree0=NQUICK_CALL(_Tak(shift_expression)(error_free), 128, cplus))== (PPTREE) -1 ) {
#line 2682 "cplus.met"
                        MulFreeTree(3,_ptRes0,_ptTree0,expTree);
                        PROG_EXIT(relational_expression_exit,"relational_expression")
#line 2682 "cplus.met"
                    }
#line 2682 "cplus.met"
                    ReplaceTree(_ptRes0, 2, _ptTree0);
#line 2682 "cplus.met"
                    expTree=_ptRes0;
#line 2682 "cplus.met"
                }
#line 2682 "cplus.met"
                break;
#line 2682 "cplus.met"
#line 2683 "cplus.met"
            case SUPEEGAL : 
#line 2683 "cplus.met"
                tokenAhead = 0 ;
#line 2683 "cplus.met"
                CommTerm();
#line 2683 "cplus.met"
#line 2683 "cplus.met"
                {
#line 2683 "cplus.met"
                    PPTREE _ptTree0=0,_ptRes0=0;
#line 2683 "cplus.met"
                    _ptRes0= MakeTree(GEQU, 2);
#line 2683 "cplus.met"
                    ReplaceTree(_ptRes0, 1, expTree );
#line 2683 "cplus.met"
                    if ( (_ptTree0=NQUICK_CALL(_Tak(shift_expression)(error_free), 128, cplus))== (PPTREE) -1 ) {
#line 2683 "cplus.met"
                        MulFreeTree(3,_ptRes0,_ptTree0,expTree);
                        PROG_EXIT(relational_expression_exit,"relational_expression")
#line 2683 "cplus.met"
                    }
#line 2683 "cplus.met"
                    ReplaceTree(_ptRes0, 2, _ptTree0);
#line 2683 "cplus.met"
                    expTree=_ptRes0;
#line 2683 "cplus.met"
                }
#line 2683 "cplus.met"
                break;
#line 2683 "cplus.met"
#line 2684 "cplus.met"
            case SUPE : 
#line 2684 "cplus.met"
                tokenAhead = 0 ;
#line 2684 "cplus.met"
                CommTerm();
#line 2684 "cplus.met"
#line 2684 "cplus.met"
                {
#line 2684 "cplus.met"
                    PPTREE _ptTree0=0,_ptRes0=0;
#line 2684 "cplus.met"
                    _ptRes0= MakeTree(GT, 2);
#line 2684 "cplus.met"
                    ReplaceTree(_ptRes0, 1, expTree );
#line 2684 "cplus.met"
                    if ( (_ptTree0=NQUICK_CALL(_Tak(shift_expression)(error_free), 128, cplus))== (PPTREE) -1 ) {
#line 2684 "cplus.met"
                        MulFreeTree(3,_ptRes0,_ptTree0,expTree);
                        PROG_EXIT(relational_expression_exit,"relational_expression")
#line 2684 "cplus.met"
                    }
#line 2684 "cplus.met"
                    ReplaceTree(_ptRes0, 2, _ptTree0);
#line 2684 "cplus.met"
                    expTree=_ptRes0;
#line 2684 "cplus.met"
                }
#line 2684 "cplus.met"
                break;
#line 2684 "cplus.met"
#line 2685 "cplus.met"
            case INFE : 
#line 2685 "cplus.met"
                tokenAhead = 0 ;
#line 2685 "cplus.met"
                CommTerm();
#line 2685 "cplus.met"
#line 2685 "cplus.met"
                {
#line 2685 "cplus.met"
                    PPTREE _ptTree0=0,_ptRes0=0;
#line 2685 "cplus.met"
                    _ptRes0= MakeTree(LT, 2);
#line 2685 "cplus.met"
                    ReplaceTree(_ptRes0, 1, expTree );
#line 2685 "cplus.met"
                    if ( (_ptTree0=NQUICK_CALL(_Tak(shift_expression)(error_free), 128, cplus))== (PPTREE) -1 ) {
#line 2685 "cplus.met"
                        MulFreeTree(3,_ptRes0,_ptTree0,expTree);
                        PROG_EXIT(relational_expression_exit,"relational_expression")
#line 2685 "cplus.met"
                    }
#line 2685 "cplus.met"
                    ReplaceTree(_ptRes0, 2, _ptTree0);
#line 2685 "cplus.met"
                    expTree=_ptRes0;
#line 2685 "cplus.met"
                }
#line 2685 "cplus.met"
                break;
#line 2685 "cplus.met"
            default :
#line 2685 "cplus.met"
                MulFreeTree(1,expTree);
                CASE_EXIT(relational_expression_exit,"either <= or >= or > or <")
#line 2685 "cplus.met"
                break;
#line 2685 "cplus.met"
        }
#line 2685 "cplus.met"
    } 
#line 2685 "cplus.met"
#line 2687 "cplus.met"
    {
#line 2687 "cplus.met"
        _retValue = expTree ;
#line 2687 "cplus.met"
        goto relational_expression_ret;
#line 2687 "cplus.met"
        
#line 2687 "cplus.met"
    }
#line 2687 "cplus.met"
#line 2687 "cplus.met"
#line 2687 "cplus.met"

#line 2688 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2688 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 2688 "cplus.met"
return((PPTREE) 0);
#line 2688 "cplus.met"

#line 2688 "cplus.met"
relational_expression_exit :
#line 2688 "cplus.met"

#line 2688 "cplus.met"
    _Debug = TRACE_RULE("relational_expression",TRACE_EXIT,(PPTREE)0);
#line 2688 "cplus.met"
    _funcLevel--;
#line 2688 "cplus.met"
    return((PPTREE) -1) ;
#line 2688 "cplus.met"

#line 2688 "cplus.met"
relational_expression_ret :
#line 2688 "cplus.met"
    
#line 2688 "cplus.met"
    _Debug = TRACE_RULE("relational_expression",TRACE_RETURN,_retValue);
#line 2688 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2688 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 2688 "cplus.met"
    return _retValue ;
#line 2688 "cplus.met"
}
#line 2688 "cplus.met"

#line 2688 "cplus.met"
#line 1454 "cplus.met"
PPTREE cplus::sc_specifier ( int error_free)
#line 1454 "cplus.met"
{
#line 1454 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 1454 "cplus.met"
    int _value,_nbPre = 0 ;
#line 1454 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 1454 "cplus.met"
    int _Debug = TRACE_RULE("sc_specifier",TRACE_ENTER,(PPTREE)0);
#line 1454 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 1454 "cplus.met"
#line 1455 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 1455 "cplus.met"
    switch( lexEl.Value) {
#line 1455 "cplus.met"
#line 1456 "cplus.met"
        case AUTO : 
#line 1456 "cplus.met"
#line 1456 "cplus.met"
            {
#line 1456 "cplus.met"
                PPTREE _ptTree0=0;
#line 1456 "cplus.met"
                (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 1456 "cplus.met"
                if (  !SEE_TOKEN( AUTO,"auto") || !(_ptTree0 = CommString(lexEl.string()))) {
#line 1456 "cplus.met"
                    MulFreeTree(1,_ptTree0);
                    TOKEN_EXIT(sc_specifier_exit,"auto")
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
        case STATIC : 
#line 1457 "cplus.met"
#line 1457 "cplus.met"
            {
#line 1457 "cplus.met"
                PPTREE _ptTree0=0;
#line 1457 "cplus.met"
                (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 1457 "cplus.met"
                if (  !SEE_TOKEN( STATIC,"static") || !(_ptTree0 = CommString(lexEl.string()))) {
#line 1457 "cplus.met"
                    MulFreeTree(1,_ptTree0);
                    TOKEN_EXIT(sc_specifier_exit,"static")
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
        case EXTERN : 
#line 1458 "cplus.met"
#line 1458 "cplus.met"
            {
#line 1458 "cplus.met"
                PPTREE _ptTree0=0;
#line 1458 "cplus.met"
                (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 1458 "cplus.met"
                if (  !SEE_TOKEN( EXTERN,"extern") || !(_ptTree0 = CommString(lexEl.string()))) {
#line 1458 "cplus.met"
                    MulFreeTree(1,_ptTree0);
                    TOKEN_EXIT(sc_specifier_exit,"extern")
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
#line 1459 "cplus.met"
        case REGISTER : 
#line 1459 "cplus.met"
#line 1459 "cplus.met"
            {
#line 1459 "cplus.met"
                PPTREE _ptTree0=0;
#line 1459 "cplus.met"
                (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 1459 "cplus.met"
                if (  !SEE_TOKEN( REGISTER,"register") || !(_ptTree0 = CommString(lexEl.string()))) {
#line 1459 "cplus.met"
                    MulFreeTree(1,_ptTree0);
                    TOKEN_EXIT(sc_specifier_exit,"register")
#line 1459 "cplus.met"
                } else {
#line 1459 "cplus.met"
                    tokenAhead = 0 ;
#line 1459 "cplus.met"
                }
#line 1459 "cplus.met"
                _retValue =_ptTree0;
#line 1459 "cplus.met"
                goto sc_specifier_ret;
#line 1459 "cplus.met"
            }
#line 1459 "cplus.met"
            break;
#line 1459 "cplus.met"
#line 1459 "cplus.met"
        default : 
#line 1459 "cplus.met"
#line 1459 "cplus.met"
            break;
#line 1459 "cplus.met"
    }
#line 1459 "cplus.met"
#line 1459 "cplus.met"
#line 1461 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1461 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 1461 "cplus.met"
return((PPTREE) 0);
#line 1461 "cplus.met"

#line 1461 "cplus.met"
sc_specifier_exit :
#line 1461 "cplus.met"

#line 1461 "cplus.met"
    _Debug = TRACE_RULE("sc_specifier",TRACE_EXIT,(PPTREE)0);
#line 1461 "cplus.met"
    _funcLevel--;
#line 1461 "cplus.met"
    return((PPTREE) -1) ;
#line 1461 "cplus.met"

#line 1461 "cplus.met"
sc_specifier_ret :
#line 1461 "cplus.met"
    
#line 1461 "cplus.met"
    _Debug = TRACE_RULE("sc_specifier",TRACE_RETURN,_retValue);
#line 1461 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1461 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 1461 "cplus.met"
    return _retValue ;
#line 1461 "cplus.met"
}
#line 1461 "cplus.met"

#line 1461 "cplus.met"
#line 2690 "cplus.met"
PPTREE cplus::shift_expression ( int error_free)
#line 2690 "cplus.met"
{
#line 2690 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 2690 "cplus.met"
    int _value,_nbPre = 0 ;
#line 2690 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 2690 "cplus.met"
    int _Debug = TRACE_RULE("shift_expression",TRACE_ENTER,(PPTREE)0);
#line 2690 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 2690 "cplus.met"
#line 2690 "cplus.met"
    PPTREE expTree = (PPTREE) 0;
#line 2690 "cplus.met"
#line 2692 "cplus.met"
    if ( (expTree=NQUICK_CALL(_Tak(additive_expression)(error_free), 3, cplus))== (PPTREE) -1 ) {
#line 2692 "cplus.met"
        MulFreeTree(1,expTree);
        PROG_EXIT(shift_expression_exit,"shift_expression")
#line 2692 "cplus.met"
    }
#line 2692 "cplus.met"
#line 2693 "cplus.met"
    while (((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN( INFEINFE,"<<")) || 
#line 2693 "cplus.met"
          ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN( SUPESUPE,">>"))) { 
#line 2693 "cplus.met"
#line 2694 "cplus.met"
        (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 2694 "cplus.met"
        switch( lexEl.Value) {
#line 2694 "cplus.met"
#line 2695 "cplus.met"
            case INFEINFE : 
#line 2695 "cplus.met"
                tokenAhead = 0 ;
#line 2695 "cplus.met"
                CommTerm();
#line 2695 "cplus.met"
#line 2695 "cplus.met"
                {
#line 2695 "cplus.met"
                    PPTREE _ptTree0=0,_ptRes0=0;
#line 2695 "cplus.met"
                    _ptRes0= MakeTree(LSHI, 2);
#line 2695 "cplus.met"
                    ReplaceTree(_ptRes0, 1, expTree );
#line 2695 "cplus.met"
                    if ( (_ptTree0=NQUICK_CALL(_Tak(additive_expression)(error_free), 3, cplus))== (PPTREE) -1 ) {
#line 2695 "cplus.met"
                        MulFreeTree(3,_ptRes0,_ptTree0,expTree);
                        PROG_EXIT(shift_expression_exit,"shift_expression")
#line 2695 "cplus.met"
                    }
#line 2695 "cplus.met"
                    ReplaceTree(_ptRes0, 2, _ptTree0);
#line 2695 "cplus.met"
                    expTree=_ptRes0;
#line 2695 "cplus.met"
                }
#line 2695 "cplus.met"
                break;
#line 2695 "cplus.met"
#line 2696 "cplus.met"
            case SUPESUPE : 
#line 2696 "cplus.met"
                tokenAhead = 0 ;
#line 2696 "cplus.met"
                CommTerm();
#line 2696 "cplus.met"
#line 2696 "cplus.met"
                {
#line 2696 "cplus.met"
                    PPTREE _ptTree0=0,_ptRes0=0;
#line 2696 "cplus.met"
                    _ptRes0= MakeTree(RSHI, 2);
#line 2696 "cplus.met"
                    ReplaceTree(_ptRes0, 1, expTree );
#line 2696 "cplus.met"
                    if ( (_ptTree0=NQUICK_CALL(_Tak(additive_expression)(error_free), 3, cplus))== (PPTREE) -1 ) {
#line 2696 "cplus.met"
                        MulFreeTree(3,_ptRes0,_ptTree0,expTree);
                        PROG_EXIT(shift_expression_exit,"shift_expression")
#line 2696 "cplus.met"
                    }
#line 2696 "cplus.met"
                    ReplaceTree(_ptRes0, 2, _ptTree0);
#line 2696 "cplus.met"
                    expTree=_ptRes0;
#line 2696 "cplus.met"
                }
#line 2696 "cplus.met"
                break;
#line 2696 "cplus.met"
            default :
#line 2696 "cplus.met"
                MulFreeTree(1,expTree);
                CASE_EXIT(shift_expression_exit,"either << or >>")
#line 2696 "cplus.met"
                break;
#line 2696 "cplus.met"
        }
#line 2696 "cplus.met"
    } 
#line 2696 "cplus.met"
#line 2698 "cplus.met"
    {
#line 2698 "cplus.met"
        _retValue = expTree ;
#line 2698 "cplus.met"
        goto shift_expression_ret;
#line 2698 "cplus.met"
        
#line 2698 "cplus.met"
    }
#line 2698 "cplus.met"
#line 2698 "cplus.met"
#line 2698 "cplus.met"

#line 2699 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2699 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 2699 "cplus.met"
return((PPTREE) 0);
#line 2699 "cplus.met"

#line 2699 "cplus.met"
shift_expression_exit :
#line 2699 "cplus.met"

#line 2699 "cplus.met"
    _Debug = TRACE_RULE("shift_expression",TRACE_EXIT,(PPTREE)0);
#line 2699 "cplus.met"
    _funcLevel--;
#line 2699 "cplus.met"
    return((PPTREE) -1) ;
#line 2699 "cplus.met"

#line 2699 "cplus.met"
shift_expression_ret :
#line 2699 "cplus.met"
    
#line 2699 "cplus.met"
    _Debug = TRACE_RULE("shift_expression",TRACE_RETURN,_retValue);
#line 2699 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2699 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 2699 "cplus.met"
    return _retValue ;
#line 2699 "cplus.met"
}
#line 2699 "cplus.met"

#line 2699 "cplus.met"
#line 2037 "cplus.met"
PPTREE cplus::short_long_int_char ( int error_free)
#line 2037 "cplus.met"
{
#line 2037 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 2037 "cplus.met"
    int _value,_nbPre = 0 ;
#line 2037 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 2037 "cplus.met"
    int _Debug = TRACE_RULE("short_long_int_char",TRACE_ENTER,(PPTREE)0);
#line 2037 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 2037 "cplus.met"
#line 2038 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 2038 "cplus.met"
    switch( lexEl.Value) {
#line 2038 "cplus.met"
#line 2039 "cplus.met"
        case INT : 
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
                    _ptRes1= MakeTree(TINT, 0);
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
        case CHAR : 
#line 2040 "cplus.met"
            tokenAhead = 0 ;
#line 2040 "cplus.met"
            CommTerm();
#line 2040 "cplus.met"
#line 2040 "cplus.met"
            {
#line 2040 "cplus.met"
                PPTREE _ptTree0=0;
#line 2040 "cplus.met"
                {
#line 2040 "cplus.met"
                    PPTREE _ptRes1=0;
#line 2040 "cplus.met"
                    _ptRes1= MakeTree(TCHAR, 0);
#line 2040 "cplus.met"
                    _ptTree0=_ptRes1;
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
        case LONG : 
#line 2041 "cplus.met"
#line 2041 "cplus.met"
            {
#line 2041 "cplus.met"
                PPTREE _ptTree0=0;
#line 2041 "cplus.met"
                if ( (_ptTree0=NQUICK_CALL(_Tak(long_type)(error_free), 92, cplus))== (PPTREE) -1 ) {
#line 2041 "cplus.met"
                    MulFreeTree(1,_ptTree0);
                    PROG_EXIT(short_long_int_char_exit,"short_long_int_char")
#line 2041 "cplus.met"
                }
#line 2041 "cplus.met"
                _retValue =_ptTree0;
#line 2041 "cplus.met"
                goto short_long_int_char_ret;
#line 2041 "cplus.met"
            }
#line 2041 "cplus.met"
            break;
#line 2041 "cplus.met"
#line 2042 "cplus.met"
        case SHORT : 
#line 2042 "cplus.met"
            tokenAhead = 0 ;
#line 2042 "cplus.met"
            CommTerm();
#line 2042 "cplus.met"
#line 2043 "cplus.met"
            if (inside_long){
#line 2043 "cplus.met"
#line 2044 "cplus.met"
                
#line 2044 "cplus.met"
                LEX_EXIT ("",0);
#line 2044 "cplus.met"
                goto short_long_int_char_exit;
#line 2044 "cplus.met"
#line 2044 "cplus.met"
            } else {
#line 2044 "cplus.met"
#line 2046 "cplus.met"
#line 2047 "cplus.met"
                (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 2047 "cplus.met"
                switch( lexEl.Value) {
#line 2047 "cplus.met"
#line 2048 "cplus.met"
                    case INT : 
#line 2048 "cplus.met"
                        tokenAhead = 0 ;
#line 2048 "cplus.met"
                        CommTerm();
#line 2048 "cplus.met"
#line 2048 "cplus.met"
                        {
#line 2048 "cplus.met"
                            PPTREE _ptTree0=0;
#line 2048 "cplus.met"
                            {
#line 2048 "cplus.met"
                                PPTREE _ptTree1=0,_ptRes1=0;
#line 2048 "cplus.met"
                                _ptRes1= MakeTree(TSHORT, 1);
#line 2048 "cplus.met"
                                {
#line 2048 "cplus.met"
                                    PPTREE _ptRes2=0;
#line 2048 "cplus.met"
                                    _ptRes2= MakeTree(TINT, 0);
#line 2048 "cplus.met"
                                    _ptTree1=_ptRes2;
#line 2048 "cplus.met"
                                }
#line 2048 "cplus.met"
                                ReplaceTree(_ptRes1, 1, _ptTree1);
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
#line 2049 "cplus.met"
                    default : 
#line 2049 "cplus.met"
#line 2049 "cplus.met"
                        {
#line 2049 "cplus.met"
                            PPTREE _ptTree0=0;
#line 2049 "cplus.met"
                            {
#line 2049 "cplus.met"
                                PPTREE _ptRes1=0;
#line 2049 "cplus.met"
                                _ptRes1= MakeTree(TSHORT, 1);
#line 2049 "cplus.met"
                                _ptTree0=_ptRes1;
#line 2049 "cplus.met"
                            }
#line 2049 "cplus.met"
                            _retValue =_ptTree0;
#line 2049 "cplus.met"
                            goto short_long_int_char_ret;
#line 2049 "cplus.met"
                        }
#line 2049 "cplus.met"
                        break;
#line 2049 "cplus.met"
                }
#line 2049 "cplus.met"
#line 2049 "cplus.met"
            }
#line 2049 "cplus.met"
            break;
#line 2049 "cplus.met"
#line 2052 "cplus.met"
        case SIGNED : 
#line 2052 "cplus.met"
#line 2052 "cplus.met"
            {
#line 2052 "cplus.met"
                PPTREE _ptTree0=0;
#line 2052 "cplus.met"
                if ( (_ptTree0=NQUICK_CALL(_Tak(signed_type)(error_free), 130, cplus))== (PPTREE) -1 ) {
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
#line 2053 "cplus.met"
        case UNSIGNED : 
#line 2053 "cplus.met"
#line 2053 "cplus.met"
            {
#line 2053 "cplus.met"
                PPTREE _ptTree0=0;
#line 2053 "cplus.met"
                if ( (_ptTree0=NQUICK_CALL(_Tak(unsigned_type)(error_free), 153, cplus))== (PPTREE) -1 ) {
#line 2053 "cplus.met"
                    MulFreeTree(1,_ptTree0);
                    PROG_EXIT(short_long_int_char_exit,"short_long_int_char")
#line 2053 "cplus.met"
                }
#line 2053 "cplus.met"
                _retValue =_ptTree0;
#line 2053 "cplus.met"
                goto short_long_int_char_ret;
#line 2053 "cplus.met"
            }
#line 2053 "cplus.met"
            break;
#line 2053 "cplus.met"
        default :
#line 2053 "cplus.met"
            CASE_EXIT(short_long_int_char_exit,"either int or char or long or short or signed or unsigned")
#line 2053 "cplus.met"
            break;
#line 2053 "cplus.met"
    }
#line 2053 "cplus.met"
#line 2053 "cplus.met"
#line 2054 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2054 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 2054 "cplus.met"
return((PPTREE) 0);
#line 2054 "cplus.met"

#line 2054 "cplus.met"
short_long_int_char_exit :
#line 2054 "cplus.met"

#line 2054 "cplus.met"
    _Debug = TRACE_RULE("short_long_int_char",TRACE_EXIT,(PPTREE)0);
#line 2054 "cplus.met"
    _funcLevel--;
#line 2054 "cplus.met"
    return((PPTREE) -1) ;
#line 2054 "cplus.met"

#line 2054 "cplus.met"
short_long_int_char_ret :
#line 2054 "cplus.met"
    
#line 2054 "cplus.met"
    _Debug = TRACE_RULE("short_long_int_char",TRACE_RETURN,_retValue);
#line 2054 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2054 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 2054 "cplus.met"
    return _retValue ;
#line 2054 "cplus.met"
}
#line 2054 "cplus.met"

#line 2054 "cplus.met"
#line 2057 "cplus.met"
PPTREE cplus::signed_type ( int error_free)
#line 2057 "cplus.met"
{
#line 2057 "cplus.met"
    int  _oldinside_signed = inside_signed;
#line 2057 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 2057 "cplus.met"
    int _value,_nbPre = 0 ;
#line 2057 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 2057 "cplus.met"
    int _Debug = TRACE_RULE("signed_type",TRACE_ENTER,(PPTREE)0);
#line 2057 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 2057 "cplus.met"
#line 2057 "cplus.met"
    PPTREE retTree = (PPTREE) 0;
#line 2057 "cplus.met"
#line 2059 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 2059 "cplus.met"
    if (  !SEE_TOKEN( SIGNED,"signed") || !(CommTerm(),1)) {
#line 2059 "cplus.met"
        MulFreeTree(1,retTree);
        TOKEN_EXIT(signed_type_exit,"signed")
#line 2059 "cplus.met"
    } else {
#line 2059 "cplus.met"
        tokenAhead = 0 ;
#line 2059 "cplus.met"
    }
#line 2059 "cplus.met"
#line 2060 "cplus.met"
    {
#line 2060 "cplus.met"
        inside_signed = 1 ;
#line 2060 "cplus.met"
#line 2061 "cplus.met"
#line 2062 "cplus.met"
        if (NPUSH_CALL_AFF_VERIF(retTree = ,_Tak(short_long_int_char), 129, cplus)){
#line 2062 "cplus.met"
#line 2063 "cplus.met"
            {
#line 2063 "cplus.met"
                PPTREE _ptTree0=0;
#line 2063 "cplus.met"
                {
#line 2063 "cplus.met"
                    PPTREE _ptRes1=0;
#line 2063 "cplus.met"
                    _ptRes1= MakeTree(TSIGNED, 1);
#line 2063 "cplus.met"
                    ReplaceTree(_ptRes1, 1, retTree );
#line 2063 "cplus.met"
                    _ptTree0=_ptRes1;
#line 2063 "cplus.met"
                }
#line 2063 "cplus.met"
                _retValue =_ptTree0;
#line 2063 "cplus.met"
                goto signed_type_ret;
#line 2063 "cplus.met"
            }
#line 2063 "cplus.met"
        } else {
#line 2063 "cplus.met"
#line 2065 "cplus.met"
            {
#line 2065 "cplus.met"
                PPTREE _ptTree0=0;
#line 2065 "cplus.met"
                {
#line 2065 "cplus.met"
                    PPTREE _ptRes1=0;
#line 2065 "cplus.met"
                    _ptRes1= MakeTree(TSIGNED, 1);
#line 2065 "cplus.met"
                    _ptTree0=_ptRes1;
#line 2065 "cplus.met"
                }
#line 2065 "cplus.met"
                _retValue =_ptTree0;
#line 2065 "cplus.met"
                goto signed_type_ret;
#line 2065 "cplus.met"
            }
#line 2065 "cplus.met"
        }
#line 2065 "cplus.met"
#line 2065 "cplus.met"
        inside_signed =  _oldinside_signed;
#line 2065 "cplus.met"
    }
#line 2065 "cplus.met"
#line 2065 "cplus.met"
#line 2066 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2066 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 2066 "cplus.met"
inside_signed =  _oldinside_signed;
#line 2066 "cplus.met"
return((PPTREE) 0);
#line 2066 "cplus.met"

#line 2066 "cplus.met"
signed_type_exit :
#line 2066 "cplus.met"

#line 2066 "cplus.met"
    _Debug = TRACE_RULE("signed_type",TRACE_EXIT,(PPTREE)0);
#line 2066 "cplus.met"
    _funcLevel--;
#line 2066 "cplus.met"
    inside_signed =  _oldinside_signed;
#line 2066 "cplus.met"
    return((PPTREE) -1) ;
#line 2066 "cplus.met"

#line 2066 "cplus.met"
signed_type_ret :
#line 2066 "cplus.met"
    
#line 2066 "cplus.met"
    _Debug = TRACE_RULE("signed_type",TRACE_RETURN,_retValue);
#line 2066 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2066 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 2066 "cplus.met"
    inside_signed =  _oldinside_signed;
#line 2066 "cplus.met"
    return _retValue ;
#line 2066 "cplus.met"
}
#line 2066 "cplus.met"

#line 2066 "cplus.met"
#line 1790 "cplus.met"
PPTREE cplus::simple_ident ( int error_free)
#line 1790 "cplus.met"
{
#line 1790 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 1790 "cplus.met"
    int _value,_nbPre = 0 ;
#line 1790 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 1790 "cplus.met"
    int _Debug = TRACE_RULE("simple_ident",TRACE_ENTER,(PPTREE)0);
#line 1790 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 1790 "cplus.met"
#line 1791 "cplus.met"
    {
#line 1791 "cplus.met"
        PPTREE _ptTree0=0;
#line 1791 "cplus.met"
        {
#line 1791 "cplus.met"
            PPTREE _ptTree1=0,_ptRes1=0;
#line 1791 "cplus.met"
            _ptRes1= MakeTree(IDENT, 1);
#line 1791 "cplus.met"
            (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 1791 "cplus.met"
            if ( ! TERM_OR_META(IDENT,"IDENT") || !(BUILD_TERM_META(_ptTree1))) {
#line 1791 "cplus.met"
                MulFreeTree(3,_ptRes1,_ptTree1,_ptTree0);
                TOKEN_EXIT(simple_ident_exit,"IDENT")
#line 1791 "cplus.met"
            } else {
#line 1791 "cplus.met"
                tokenAhead = 0 ;
#line 1791 "cplus.met"
            }
#line 1791 "cplus.met"
            ReplaceTree(_ptRes1, 1, _ptTree1);
#line 1791 "cplus.met"
            _ptTree0=_ptRes1;
#line 1791 "cplus.met"
        }
#line 1791 "cplus.met"
        _retValue =_ptTree0;
#line 1791 "cplus.met"
        goto simple_ident_ret;
#line 1791 "cplus.met"
    }
#line 1791 "cplus.met"
#line 1791 "cplus.met"
#line 1791 "cplus.met"

#line 1792 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1792 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 1792 "cplus.met"
return((PPTREE) 0);
#line 1792 "cplus.met"

#line 1792 "cplus.met"
simple_ident_exit :
#line 1792 "cplus.met"

#line 1792 "cplus.met"
    _Debug = TRACE_RULE("simple_ident",TRACE_EXIT,(PPTREE)0);
#line 1792 "cplus.met"
    _funcLevel--;
#line 1792 "cplus.met"
    return((PPTREE) -1) ;
#line 1792 "cplus.met"

#line 1792 "cplus.met"
simple_ident_ret :
#line 1792 "cplus.met"
    
#line 1792 "cplus.met"
    _Debug = TRACE_RULE("simple_ident",TRACE_RETURN,_retValue);
#line 1792 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1792 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 1792 "cplus.met"
    return _retValue ;
#line 1792 "cplus.met"
}
#line 1792 "cplus.met"

#line 1792 "cplus.met"
#line 2016 "cplus.met"
PPTREE cplus::simple_type ( int error_free)
#line 2016 "cplus.met"
{
#line 2016 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 2016 "cplus.met"
    int _value,_nbPre = 0 ;
#line 2016 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 2016 "cplus.met"
    int _Debug = TRACE_RULE("simple_type",TRACE_ENTER,(PPTREE)0);
#line 2016 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 2016 "cplus.met"
#line 2016 "cplus.met"
    PPTREE valTree = (PPTREE) 0;
#line 2016 "cplus.met"
#line 2018 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 2018 "cplus.met"
    switch( lexEl.Value) {
#line 2018 "cplus.met"
#line 2019 "cplus.met"
        case TYPENAME : 
#line 2019 "cplus.met"
            tokenAhead = 0 ;
#line 2019 "cplus.met"
            CommTerm();
#line 2019 "cplus.met"
#line 2019 "cplus.met"
            {
#line 2019 "cplus.met"
                PPTREE _ptTree0=0;
#line 2019 "cplus.met"
                {
#line 2019 "cplus.met"
                    PPTREE _ptTree1=0,_ptRes1=0;
#line 2019 "cplus.met"
                    _ptRes1= MakeTree(TYPENAME, 1);
#line 2019 "cplus.met"
                    {
#line 2019 "cplus.met"
                        PPTREE _ptTree2=0,_ptRes2=0;
#line 2019 "cplus.met"
                        _ptRes2= MakeTree(TIDENT, 1);
#line 2019 "cplus.met"
                        if ( (_ptTree2=NQUICK_CALL(_Tak(complete_class_name)(error_free), 28, cplus))== (PPTREE) -1 ) {
#line 2019 "cplus.met"
                            MulFreeTree(6,_ptRes2,_ptTree2,_ptRes1,_ptTree1,_ptTree0,valTree);
                            PROG_EXIT(simple_type_exit,"simple_type")
#line 2019 "cplus.met"
                        }
#line 2019 "cplus.met"
                        ReplaceTree(_ptRes2, 1, _ptTree2);
#line 2019 "cplus.met"
                        _ptTree1=_ptRes2;
#line 2019 "cplus.met"
                    }
#line 2019 "cplus.met"
                    ReplaceTree(_ptRes1, 1, _ptTree1);
#line 2019 "cplus.met"
                    _ptTree0=_ptRes1;
#line 2019 "cplus.met"
                }
#line 2019 "cplus.met"
                _retValue =_ptTree0;
#line 2019 "cplus.met"
                goto simple_type_ret;
#line 2019 "cplus.met"
            }
#line 2019 "cplus.met"
            break;
#line 2019 "cplus.met"
#line 2020 "cplus.met"
        case DECLTYPE : 
#line 2020 "cplus.met"
            tokenAhead = 0 ;
#line 2020 "cplus.met"
            CommTerm();
#line 2020 "cplus.met"
#line 2021 "cplus.met"
#line 2022 "cplus.met"
            (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 2022 "cplus.met"
            if (  !SEE_TOKEN( POUV,"(") || !(CommTerm(),1)) {
#line 2022 "cplus.met"
                MulFreeTree(1,valTree);
                TOKEN_EXIT(simple_type_exit,"(")
#line 2022 "cplus.met"
            } else {
#line 2022 "cplus.met"
                tokenAhead = 0 ;
#line 2022 "cplus.met"
            }
#line 2022 "cplus.met"
#line 2023 "cplus.met"
            {
#line 2023 "cplus.met"
                PPTREE _ptTree0=0,_ptRes0=0;
#line 2023 "cplus.met"
                _ptRes0= MakeTree(DECL_TYPE, 1);
#line 2023 "cplus.met"
                if ( (_ptTree0=NQUICK_CALL(_Tak(postfix_expression)(error_free), 110, cplus))== (PPTREE) -1 ) {
#line 2023 "cplus.met"
                    MulFreeTree(3,_ptRes0,_ptTree0,valTree);
                    PROG_EXIT(simple_type_exit,"simple_type")
#line 2023 "cplus.met"
                }
#line 2023 "cplus.met"
                ReplaceTree(_ptRes0, 1, _ptTree0);
#line 2023 "cplus.met"
                valTree=_ptRes0;
#line 2023 "cplus.met"
            }
#line 2023 "cplus.met"
#line 2024 "cplus.met"
            (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 2024 "cplus.met"
            if (  !SEE_TOKEN( PFER,")") || !(CommTerm(),1)) {
#line 2024 "cplus.met"
                MulFreeTree(1,valTree);
                TOKEN_EXIT(simple_type_exit,")")
#line 2024 "cplus.met"
            } else {
#line 2024 "cplus.met"
                tokenAhead = 0 ;
#line 2024 "cplus.met"
            }
#line 2024 "cplus.met"
#line 2025 "cplus.met"
            {
#line 2025 "cplus.met"
                _retValue = valTree ;
#line 2025 "cplus.met"
                goto simple_type_ret;
#line 2025 "cplus.met"
                
#line 2025 "cplus.met"
            }
#line 2025 "cplus.met"
#line 2025 "cplus.met"
            break;
#line 2025 "cplus.met"
#line 2027 "cplus.met"
        case AUTO : 
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
                    _ptRes1= MakeTree(AUTO, 0);
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
        case DOUBLE : 
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
                    _ptRes1= MakeTree(TDOUBLE, 0);
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
        case FLOAT : 
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
                    _ptRes1= MakeTree(TFLOAT, 0);
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
        case VOID : 
#line 2030 "cplus.met"
            tokenAhead = 0 ;
#line 2030 "cplus.met"
            CommTerm();
#line 2030 "cplus.met"
#line 2030 "cplus.met"
            {
#line 2030 "cplus.met"
                PPTREE _ptTree0=0;
#line 2030 "cplus.met"
                {
#line 2030 "cplus.met"
                    PPTREE _ptRes1=0;
#line 2030 "cplus.met"
                    _ptRes1= MakeTree(VOID, 0);
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
        case DPOIDPOI : 
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
        case META : 
#line 2032 "cplus.met"
        case IDENT : 
#line 2032 "cplus.met"
#line 2032 "cplus.met"
            {
#line 2032 "cplus.met"
                PPTREE _ptTree0=0;
#line 2032 "cplus.met"
                {
#line 2032 "cplus.met"
                    PPTREE _ptTree1=0,_ptRes1=0;
#line 2032 "cplus.met"
                    _ptRes1= MakeTree(TIDENT, 1);
#line 2032 "cplus.met"
                    if ( (_ptTree1=NQUICK_CALL(_Tak(complete_class_name)(error_free), 28, cplus))== (PPTREE) -1 ) {
#line 2032 "cplus.met"
                        MulFreeTree(4,_ptRes1,_ptTree1,_ptTree0,valTree);
                        PROG_EXIT(simple_type_exit,"simple_type")
#line 2032 "cplus.met"
                    }
#line 2032 "cplus.met"
                    ReplaceTree(_ptRes1, 1, _ptTree1);
#line 2032 "cplus.met"
                    _ptTree0=_ptRes1;
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
#line 2033 "cplus.met"
        default : 
#line 2033 "cplus.met"
#line 2033 "cplus.met"
            {
#line 2033 "cplus.met"
                PPTREE _ptTree0=0;
#line 2033 "cplus.met"
                if ( (_ptTree0=NQUICK_CALL(_Tak(short_long_int_char)(error_free), 129, cplus))== (PPTREE) -1 ) {
#line 2033 "cplus.met"
                    MulFreeTree(2,_ptTree0,valTree);
                    PROG_EXIT(simple_type_exit,"simple_type")
#line 2033 "cplus.met"
                }
#line 2033 "cplus.met"
                _retValue =_ptTree0;
#line 2033 "cplus.met"
                goto simple_type_ret;
#line 2033 "cplus.met"
            }
#line 2033 "cplus.met"
            break;
#line 2033 "cplus.met"
    }
#line 2033 "cplus.met"
#line 2033 "cplus.met"
#line 2034 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2034 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 2034 "cplus.met"
return((PPTREE) 0);
#line 2034 "cplus.met"

#line 2034 "cplus.met"
simple_type_exit :
#line 2034 "cplus.met"

#line 2034 "cplus.met"
    _Debug = TRACE_RULE("simple_type",TRACE_EXIT,(PPTREE)0);
#line 2034 "cplus.met"
    _funcLevel--;
#line 2034 "cplus.met"
    return((PPTREE) -1) ;
#line 2034 "cplus.met"

#line 2034 "cplus.met"
simple_type_ret :
#line 2034 "cplus.met"
    
#line 2034 "cplus.met"
    _Debug = TRACE_RULE("simple_type",TRACE_RETURN,_retValue);
#line 2034 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2034 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 2034 "cplus.met"
    return _retValue ;
#line 2034 "cplus.met"
}
#line 2034 "cplus.met"

#line 2034 "cplus.met"
#line 2885 "cplus.met"
PPTREE cplus::simple_type_name ( int error_free)
#line 2885 "cplus.met"
{
#line 2885 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 2885 "cplus.met"
    int _value,_nbPre = 0 ;
#line 2885 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 2885 "cplus.met"
    int _Debug = TRACE_RULE("simple_type_name",TRACE_ENTER,(PPTREE)0);
#line 2885 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 2885 "cplus.met"
#line 2886 "cplus.met"
    if (! ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN( IDENT,"IDENT"))){
#line 2886 "cplus.met"
#line 2887 "cplus.met"
        {
#line 2887 "cplus.met"
            PPTREE _ptTree0=0;
#line 2887 "cplus.met"
            if ( (_ptTree0=NQUICK_CALL(_Tak(simple_type)(error_free), 132, cplus))== (PPTREE) -1 ) {
#line 2887 "cplus.met"
                MulFreeTree(1,_ptTree0);
                PROG_EXIT(simple_type_name_exit,"simple_type_name")
#line 2887 "cplus.met"
            }
#line 2887 "cplus.met"
            _retValue =_ptTree0;
#line 2887 "cplus.met"
            goto simple_type_name_ret;
#line 2887 "cplus.met"
        }
#line 2887 "cplus.met"
    } else {
#line 2887 "cplus.met"
#line 2889 "cplus.met"
        
#line 2889 "cplus.met"
        LEX_EXIT ("",0);
#line 2889 "cplus.met"
        goto simple_type_name_exit;
#line 2889 "cplus.met"
    }
#line 2889 "cplus.met"
#line 2889 "cplus.met"
#line 2889 "cplus.met"

#line 2890 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2890 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 2890 "cplus.met"
return((PPTREE) 0);
#line 2890 "cplus.met"

#line 2890 "cplus.met"
simple_type_name_exit :
#line 2890 "cplus.met"

#line 2890 "cplus.met"
    _Debug = TRACE_RULE("simple_type_name",TRACE_EXIT,(PPTREE)0);
#line 2890 "cplus.met"
    _funcLevel--;
#line 2890 "cplus.met"
    return((PPTREE) -1) ;
#line 2890 "cplus.met"

#line 2890 "cplus.met"
simple_type_name_ret :
#line 2890 "cplus.met"
    
#line 2890 "cplus.met"
    _Debug = TRACE_RULE("simple_type_name",TRACE_RETURN,_retValue);
#line 2890 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2890 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 2890 "cplus.met"
    return _retValue ;
#line 2890 "cplus.met"
}
#line 2890 "cplus.met"

#line 2890 "cplus.met"
#line 2751 "cplus.met"
PPTREE cplus::sizeof_type ( int error_free)
#line 2751 "cplus.met"
{
#line 2751 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 2751 "cplus.met"
    int _value,_nbPre = 0 ;
#line 2751 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 2751 "cplus.met"
    int _Debug = TRACE_RULE("sizeof_type",TRACE_ENTER,(PPTREE)0);
#line 2751 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 2751 "cplus.met"
#line 2751 "cplus.met"
    PPTREE expTree = (PPTREE) 0;
#line 2751 "cplus.met"
#line 2753 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 2753 "cplus.met"
    if (  !SEE_TOKEN( POUV,"(") || !(CommTerm(),1)) {
#line 2753 "cplus.met"
        MulFreeTree(1,expTree);
        TOKEN_EXIT(sizeof_type_exit,"(")
#line 2753 "cplus.met"
    } else {
#line 2753 "cplus.met"
        tokenAhead = 0 ;
#line 2753 "cplus.met"
    }
#line 2753 "cplus.met"
#line 2754 "cplus.met"
    if ( (expTree=NQUICK_CALL(_Tak(type_name)(error_free), 148, cplus))== (PPTREE) -1 ) {
#line 2754 "cplus.met"
        MulFreeTree(1,expTree);
        PROG_EXIT(sizeof_type_exit,"sizeof_type")
#line 2754 "cplus.met"
    }
#line 2754 "cplus.met"
#line 2755 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 2755 "cplus.met"
    if (  !SEE_TOKEN( PFER,")") || !(CommTerm(),1)) {
#line 2755 "cplus.met"
        MulFreeTree(1,expTree);
        TOKEN_EXIT(sizeof_type_exit,")")
#line 2755 "cplus.met"
    } else {
#line 2755 "cplus.met"
        tokenAhead = 0 ;
#line 2755 "cplus.met"
    }
#line 2755 "cplus.met"
#line 2756 "cplus.met"
    {
#line 2756 "cplus.met"
        _retValue = expTree ;
#line 2756 "cplus.met"
        goto sizeof_type_ret;
#line 2756 "cplus.met"
        
#line 2756 "cplus.met"
    }
#line 2756 "cplus.met"
#line 2756 "cplus.met"
#line 2756 "cplus.met"

#line 2757 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2757 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 2757 "cplus.met"
return((PPTREE) 0);
#line 2757 "cplus.met"

#line 2757 "cplus.met"
sizeof_type_exit :
#line 2757 "cplus.met"

#line 2757 "cplus.met"
    _Debug = TRACE_RULE("sizeof_type",TRACE_EXIT,(PPTREE)0);
#line 2757 "cplus.met"
    _funcLevel--;
#line 2757 "cplus.met"
    return((PPTREE) -1) ;
#line 2757 "cplus.met"

#line 2757 "cplus.met"
sizeof_type_ret :
#line 2757 "cplus.met"
    
#line 2757 "cplus.met"
    _Debug = TRACE_RULE("sizeof_type",TRACE_RETURN,_retValue);
#line 2757 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2757 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 2757 "cplus.met"
    return _retValue ;
#line 2757 "cplus.met"
}
#line 2757 "cplus.met"

#line 2757 "cplus.met"
#line 984 "cplus.met"
PPTREE cplus::stat_all ( int error_free)
#line 984 "cplus.met"
{
#line 984 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 984 "cplus.met"
    int _value,_nbPre = 0 ;
#line 984 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 984 "cplus.met"
    int _Debug = TRACE_RULE("stat_all",TRACE_ENTER,(PPTREE)0);
#line 984 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 984 "cplus.met"
#line 984 "cplus.met"
    PPTREE stat = (PPTREE) 0;
#line 984 "cplus.met"
#line 986 "cplus.met"
    if (((((NPUSH_CALL_AFF_VERIF(stat = ,_Tak(statement), 140, cplus)) || 
#line 986 "cplus.met"
          (NPUSH_CALL_AFF_VERIF(stat = ,_Tak(data_declaration), 41, cplus))) || 
#line 986 "cplus.met"
         (NPUSH_CALL_AFF_VERIF(stat = ,_Tak(stat_dir), 136, cplus))) || 
#line 986 "cplus.met"
        (NPUSH_CALL_AFF_VERIF(stat = ,_Tak(exception), 59, cplus))) || 
#line 986 "cplus.met"
       (NPUSH_CALL_AFF_VERIF(stat = ,_Tak(ext_data_declaration), 72, cplus))){
#line 986 "cplus.met"
#line 987 "cplus.met"
        {
#line 987 "cplus.met"
            _retValue = stat ;
#line 987 "cplus.met"
            goto stat_all_ret;
#line 987 "cplus.met"
            
#line 987 "cplus.met"
        }
#line 987 "cplus.met"
    } else {
#line 987 "cplus.met"
#line 989 "cplus.met"
        {
#line 989 "cplus.met"
            PPTREE _ptTree0=0;
#line 989 "cplus.met"
            if ( (_ptTree0=NQUICK_CALL(_Tak(statement)(error_free), 140, cplus))== (PPTREE) -1 ) {
#line 989 "cplus.met"
                MulFreeTree(2,_ptTree0,stat);
                PROG_EXIT(stat_all_exit,"stat_all")
#line 989 "cplus.met"
            }
#line 989 "cplus.met"
            _retValue =_ptTree0;
#line 989 "cplus.met"
            goto stat_all_ret;
#line 989 "cplus.met"
        }
#line 989 "cplus.met"
    }
#line 989 "cplus.met"
#line 989 "cplus.met"
#line 989 "cplus.met"

#line 990 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 990 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 990 "cplus.met"
return((PPTREE) 0);
#line 990 "cplus.met"

#line 990 "cplus.met"
stat_all_exit :
#line 990 "cplus.met"

#line 990 "cplus.met"
    _Debug = TRACE_RULE("stat_all",TRACE_EXIT,(PPTREE)0);
#line 990 "cplus.met"
    _funcLevel--;
#line 990 "cplus.met"
    return((PPTREE) -1) ;
#line 990 "cplus.met"

#line 990 "cplus.met"
stat_all_ret :
#line 990 "cplus.met"
    
#line 990 "cplus.met"
    _Debug = TRACE_RULE("stat_all",TRACE_RETURN,_retValue);
#line 990 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 990 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 990 "cplus.met"
    return _retValue ;
#line 990 "cplus.met"
}
#line 990 "cplus.met"

#line 990 "cplus.met"
#line 1153 "cplus.met"
PPTREE cplus::stat_dir ( int error_free)
#line 1153 "cplus.met"
{
#line 1153 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 1153 "cplus.met"
    int _value,_nbPre = 0 ;
#line 1153 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 1153 "cplus.met"
    int _Debug = TRACE_RULE("stat_dir",TRACE_ENTER,(PPTREE)0);
#line 1153 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 1153 "cplus.met"
#line 1153 "cplus.met"
    PPTREE retTree = (PPTREE) 0;
#line 1153 "cplus.met"
#line 1155 "cplus.met"
    if (NPUSH_CALL_AFF_VERIF(retTree = ,_Tak(directive), 53, cplus)){
#line 1155 "cplus.met"
#line 1156 "cplus.met"
        {
#line 1156 "cplus.met"
            _retValue = retTree ;
#line 1156 "cplus.met"
            goto stat_dir_ret;
#line 1156 "cplus.met"
            
#line 1156 "cplus.met"
        }
#line 1156 "cplus.met"
    }
#line 1156 "cplus.met"
#line 1157 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 1157 "cplus.met"
    switch( lexEl.Value) {
#line 1157 "cplus.met"
#line 1158 "cplus.met"
        case META : 
#line 1158 "cplus.met"
        case IF_DIR : 
#line 1158 "cplus.met"
            tokenAhead = 0 ;
#line 1158 "cplus.met"
            CommTerm();
#line 1158 "cplus.met"
#line 1158 "cplus.met"
            {
#line 1158 "cplus.met"
                PPTREE _ptTree0=0;
#line 1158 "cplus.met"
                if ( (_ptTree0=NQUICK_CALL(_Tak(stat_if_dir)(error_free), 138, cplus))== (PPTREE) -1 ) {
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
        case IFDEF_DIR : 
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
#line 1160 "cplus.met"
        case IFNDEF_DIR : 
#line 1160 "cplus.met"
#line 1160 "cplus.met"
            {
#line 1160 "cplus.met"
                PPTREE _ptTree0=0;
#line 1160 "cplus.met"
                if ( (_ptTree0=NQUICK_CALL(_Tak(stat_ifdef_dir)(error_free), 139, cplus))== (PPTREE) -1 ) {
#line 1160 "cplus.met"
                    MulFreeTree(2,_ptTree0,retTree);
                    PROG_EXIT(stat_dir_exit,"stat_dir")
#line 1160 "cplus.met"
                }
#line 1160 "cplus.met"
                _retValue =_ptTree0;
#line 1160 "cplus.met"
                goto stat_dir_ret;
#line 1160 "cplus.met"
            }
#line 1160 "cplus.met"
            break;
#line 1160 "cplus.met"
        default :
#line 1160 "cplus.met"
            MulFreeTree(1,retTree);
            CASE_EXIT(stat_dir_exit,"either IF_DIR or IFDEF_DIR or IFNDEF_DIR")
#line 1160 "cplus.met"
            break;
#line 1160 "cplus.met"
    }
#line 1160 "cplus.met"
#line 1160 "cplus.met"
#line 1161 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1161 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 1161 "cplus.met"
return((PPTREE) 0);
#line 1161 "cplus.met"

#line 1161 "cplus.met"
stat_dir_exit :
#line 1161 "cplus.met"

#line 1161 "cplus.met"
    _Debug = TRACE_RULE("stat_dir",TRACE_EXIT,(PPTREE)0);
#line 1161 "cplus.met"
    _funcLevel--;
#line 1161 "cplus.met"
    return((PPTREE) -1) ;
#line 1161 "cplus.met"

#line 1161 "cplus.met"
stat_dir_ret :
#line 1161 "cplus.met"
    
#line 1161 "cplus.met"
    _Debug = TRACE_RULE("stat_dir",TRACE_RETURN,_retValue);
#line 1161 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1161 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 1161 "cplus.met"
    return _retValue ;
#line 1161 "cplus.met"
}
#line 1161 "cplus.met"

#line 1161 "cplus.met"
#line 3511 "cplus.met"
PPTREE cplus::stat_dir_switch ( int error_free)
#line 3511 "cplus.met"
{
#line 3511 "cplus.met"
    int  _oldswitchContext = switchContext;
#line 3511 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 3511 "cplus.met"
    int _value,_nbPre = 0 ;
#line 3511 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 3511 "cplus.met"
    int _Debug = TRACE_RULE("stat_dir_switch",TRACE_ENTER,(PPTREE)0);
#line 3511 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 3511 "cplus.met"
#line 3512 "cplus.met"
    {
#line 3512 "cplus.met"
        switchContext = 1 ;
#line 3512 "cplus.met"
#line 3513 "cplus.met"
        {
#line 3513 "cplus.met"
            PPTREE _ptTree0=0;
#line 3513 "cplus.met"
            if ( (_ptTree0=NQUICK_CALL(_Tak(stat_dir)(error_free), 136, cplus))== (PPTREE) -1 ) {
#line 3513 "cplus.met"
                MulFreeTree(1,_ptTree0);
                PROG_EXIT(stat_dir_switch_exit,"stat_dir_switch")
#line 3513 "cplus.met"
            }
#line 3513 "cplus.met"
            _retValue =_ptTree0;
#line 3513 "cplus.met"
            goto stat_dir_switch_ret;
#line 3513 "cplus.met"
        }
#line 3513 "cplus.met"
        switchContext =  _oldswitchContext;
#line 3513 "cplus.met"
    }
#line 3513 "cplus.met"
#line 3513 "cplus.met"
#line 3513 "cplus.met"

#line 3514 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 3514 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 3514 "cplus.met"
switchContext =  _oldswitchContext;
#line 3514 "cplus.met"
return((PPTREE) 0);
#line 3514 "cplus.met"

#line 3514 "cplus.met"
stat_dir_switch_exit :
#line 3514 "cplus.met"

#line 3514 "cplus.met"
    _Debug = TRACE_RULE("stat_dir_switch",TRACE_EXIT,(PPTREE)0);
#line 3514 "cplus.met"
    _funcLevel--;
#line 3514 "cplus.met"
    switchContext =  _oldswitchContext;
#line 3514 "cplus.met"
    return((PPTREE) -1) ;
#line 3514 "cplus.met"

#line 3514 "cplus.met"
stat_dir_switch_ret :
#line 3514 "cplus.met"
    
#line 3514 "cplus.met"
    _Debug = TRACE_RULE("stat_dir_switch",TRACE_RETURN,_retValue);
#line 3514 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 3514 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 3514 "cplus.met"
    switchContext =  _oldswitchContext;
#line 3514 "cplus.met"
    return _retValue ;
#line 3514 "cplus.met"
}
#line 3514 "cplus.met"

#line 3514 "cplus.met"
#line 1052 "cplus.met"
PPTREE cplus::stat_if_dir ( int error_free)
#line 1052 "cplus.met"
{
#line 1052 "cplus.met"
    int  _oldkeepCarriage = keepCarriage;
#line 1052 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 1052 "cplus.met"
    int _value,_nbPre = 0 ;
#line 1052 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 1052 "cplus.met"
    int _Debug = TRACE_RULE("stat_if_dir",TRACE_ENTER,(PPTREE)0);
#line 1052 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 1052 "cplus.met"
#line 1052 "cplus.met"
    PPTREE _addlist1 = (PPTREE) 0,_addlist2 = (PPTREE) 0;
#line 1052 "cplus.met"
#line 1052 "cplus.met"
    PPTREE retTree = (PPTREE) 0,list = (PPTREE) 0,list2 = (PPTREE) 0;
#line 1052 "cplus.met"
#line 1054 "cplus.met"
    {
#line 1054 "cplus.met"
        keepCarriage = 1 ;
#line 1054 "cplus.met"
#line 1055 "cplus.met"
#line 1056 "cplus.met"
        {
#line 1056 "cplus.met"
            PPTREE _ptTree0=0,_ptRes0=0;
#line 1056 "cplus.met"
            _ptRes0= MakeTree(IF_DIR, 3);
#line 1056 "cplus.met"
            if ( (_ptTree0=NQUICK_CALL(_Tak(expression)(error_free), 63, cplus))== (PPTREE) -1 ) {
#line 1056 "cplus.met"
                MulFreeTree(7,_ptRes0,_ptTree0,_addlist1,_addlist2,list,list2,retTree);
                PROG_EXIT(stat_if_dir_exit,"stat_if_dir")
#line 1056 "cplus.met"
            }
#line 1056 "cplus.met"
            ReplaceTree(_ptRes0, 1, _ptTree0);
#line 1056 "cplus.met"
            retTree=_ptRes0;
#line 1056 "cplus.met"
        }
#line 1056 "cplus.met"
#line 1057 "cplus.met"
        (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 1057 "cplus.met"
        if ( ! TERM_OR_META(CARRIAGE_RETURN,"CARRIAGE_RETURN") || !(CommTerm(),1)) {
#line 1057 "cplus.met"
            MulFreeTree(5,_addlist1,_addlist2,list,list2,retTree);
            TOKEN_EXIT(stat_if_dir_exit,"CARRIAGE_RETURN")
#line 1057 "cplus.met"
        } else {
#line 1057 "cplus.met"
            tokenAhead = 0 ;
#line 1057 "cplus.met"
        }
#line 1057 "cplus.met"
#line 1057 "cplus.met"
        keepCarriage =  _oldkeepCarriage;
#line 1057 "cplus.met"
    }
#line 1057 "cplus.met"
#line 1057 "cplus.met"
    _addlist1 = list ;
#line 1057 "cplus.met"
#line 1059 "cplus.met"
    while (((! ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN( ELSE_DIR,"ELSE_DIR"))) && 
#line 1059 "cplus.met"
           (! ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN( ELIF_DIR,"ELIF_DIR")))) && 
#line 1059 "cplus.met"
          (! ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN( ENDIF_DIR,"ENDIF_DIR")))) { 
#line 1059 "cplus.met"
#line 1060 "cplus.met"
#line 1060 "cplus.met"
        {
#line 1060 "cplus.met"
            PPTREE _ptTree0=0;
#line 1060 "cplus.met"
            if ( (_ptTree0=NQUICK_CALL(_Tak(stat_all)(error_free), 135, cplus))== (PPTREE) -1 ) {
#line 1060 "cplus.met"
                MulFreeTree(6,_ptTree0,_addlist1,_addlist2,list,list2,retTree);
                PROG_EXIT(stat_if_dir_exit,"stat_if_dir")
#line 1060 "cplus.met"
            }
#line 1060 "cplus.met"
            _addlist1 =AddList(_addlist1 , _ptTree0);
#line 1060 "cplus.met"
        }
#line 1060 "cplus.met"
#line 1060 "cplus.met"
        if (list){
#line 1060 "cplus.met"
#line 1060 "cplus.met"
            _addlist1 = SonTree (_addlist1 ,2 );
#line 1060 "cplus.met"
        } else {
#line 1060 "cplus.met"
#line 1060 "cplus.met"
            list = _addlist1 ;
#line 1060 "cplus.met"
        }
#line 1060 "cplus.met"
    } 
#line 1060 "cplus.met"
#line 1061 "cplus.met"
    {
#line 1061 "cplus.met"
        PPTREE _ptTree0=0;
#line 1061 "cplus.met"
        if ( (_ptTree0=NQUICK_CALL(_Tak(none_statement)(error_free), 104, cplus))== (PPTREE) -1 ) {
#line 1061 "cplus.met"
            MulFreeTree(6,_ptTree0,_addlist1,_addlist2,list,list2,retTree);
            PROG_EXIT(stat_if_dir_exit,"stat_if_dir")
#line 1061 "cplus.met"
        }
#line 1061 "cplus.met"
        list =AddList(list , _ptTree0);
#line 1061 "cplus.met"
    }
#line 1061 "cplus.met"
#line 1062 "cplus.met"
    ReplaceTree(retTree ,2 ,list );
#line 1062 "cplus.met"
#line 1063 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 1063 "cplus.met"
    switch( lexEl.Value) {
#line 1063 "cplus.met"
#line 1064 "cplus.met"
        case META : 
#line 1064 "cplus.met"
        case ELSE_DIR : 
#line 1064 "cplus.met"
            tokenAhead = 0 ;
#line 1064 "cplus.met"
            CommTerm();
#line 1064 "cplus.met"
#line 1065 "cplus.met"
#line 1065 "cplus.met"
            _addlist2 = list2 ;
#line 1065 "cplus.met"
#line 1066 "cplus.met"
            while (((tokenAhead && tokenAhead != -1)|| (c != EOF)) && 
#line 1066 "cplus.met"
                  (! ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN( ENDIF_DIR,"ENDIF_DIR")))) { 
#line 1066 "cplus.met"
#line 1067 "cplus.met"
#line 1067 "cplus.met"
                {
#line 1067 "cplus.met"
                    PPTREE _ptTree0=0;
#line 1067 "cplus.met"
                    if ( (_ptTree0=NQUICK_CALL(_Tak(stat_all)(error_free), 135, cplus))== (PPTREE) -1 ) {
#line 1067 "cplus.met"
                        MulFreeTree(6,_ptTree0,_addlist1,_addlist2,list,list2,retTree);
                        PROG_EXIT(stat_if_dir_exit,"stat_if_dir")
#line 1067 "cplus.met"
                    }
#line 1067 "cplus.met"
                    _addlist2 =AddList(_addlist2 , _ptTree0);
#line 1067 "cplus.met"
                }
#line 1067 "cplus.met"
#line 1067 "cplus.met"
                if (list2){
#line 1067 "cplus.met"
#line 1067 "cplus.met"
                    _addlist2 = SonTree (_addlist2 ,2 );
#line 1067 "cplus.met"
                } else {
#line 1067 "cplus.met"
#line 1067 "cplus.met"
                    list2 = _addlist2 ;
#line 1067 "cplus.met"
                }
#line 1067 "cplus.met"
            } 
#line 1067 "cplus.met"
#line 1068 "cplus.met"
            {
#line 1068 "cplus.met"
                PPTREE _ptTree0=0;
#line 1068 "cplus.met"
                if ( (_ptTree0=NQUICK_CALL(_Tak(none_statement)(error_free), 104, cplus))== (PPTREE) -1 ) {
#line 1068 "cplus.met"
                    MulFreeTree(6,_ptTree0,_addlist1,_addlist2,list,list2,retTree);
                    PROG_EXIT(stat_if_dir_exit,"stat_if_dir")
#line 1068 "cplus.met"
                }
#line 1068 "cplus.met"
                list2 =AddList(list2 , _ptTree0);
#line 1068 "cplus.met"
            }
#line 1068 "cplus.met"
#line 1069 "cplus.met"
            (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 1069 "cplus.met"
            if ( ! TERM_OR_META(ENDIF_DIR,"ENDIF_DIR") || !(CommTerm(),1)) {
#line 1069 "cplus.met"
                MulFreeTree(5,_addlist1,_addlist2,list,list2,retTree);
                TOKEN_EXIT(stat_if_dir_exit,"ENDIF_DIR")
#line 1069 "cplus.met"
            } else {
#line 1069 "cplus.met"
                tokenAhead = 0 ;
#line 1069 "cplus.met"
            }
#line 1069 "cplus.met"
#line 1070 "cplus.met"
            {
#line 1070 "cplus.met"
                PPTREE _ptTree0=0;
#line 1070 "cplus.met"
                _ptTree0=ReplaceTree(retTree ,3 ,list2 );
#line 1070 "cplus.met"
                _retValue =_ptTree0;
#line 1070 "cplus.met"
                goto stat_if_dir_ret;
#line 1070 "cplus.met"
            }
#line 1070 "cplus.met"
#line 1070 "cplus.met"
            break;
#line 1070 "cplus.met"
#line 1072 "cplus.met"
        case ELIF_DIR : 
#line 1072 "cplus.met"
            tokenAhead = 0 ;
#line 1072 "cplus.met"
            CommTerm();
#line 1072 "cplus.met"
#line 1072 "cplus.met"
            {
#line 1072 "cplus.met"
                PPTREE _ptTree0=0;
#line 1072 "cplus.met"
                {
#line 1072 "cplus.met"
                    PPTREE _ptTree1=0;
#line 1072 "cplus.met"
                    if ( (_ptTree1=NQUICK_CALL(_Tak(stat_if_dir)(error_free), 138, cplus))== (PPTREE) -1 ) {
#line 1072 "cplus.met"
                        MulFreeTree(7,_ptTree1,_ptTree0,_addlist1,_addlist2,list,list2,retTree);
                        PROG_EXIT(stat_if_dir_exit,"stat_if_dir")
#line 1072 "cplus.met"
                    }
#line 1072 "cplus.met"
                    _ptTree0=ReplaceTree(retTree , 3 , _ptTree1);
#line 1072 "cplus.met"
                }
#line 1072 "cplus.met"
                _retValue =_ptTree0;
#line 1072 "cplus.met"
                goto stat_if_dir_ret;
#line 1072 "cplus.met"
            }
#line 1072 "cplus.met"
            break;
#line 1072 "cplus.met"
#line 1073 "cplus.met"
        case ENDIF_DIR : 
#line 1073 "cplus.met"
            tokenAhead = 0 ;
#line 1073 "cplus.met"
            CommTerm();
#line 1073 "cplus.met"
#line 1073 "cplus.met"
            {
#line 1073 "cplus.met"
                _retValue = retTree ;
#line 1073 "cplus.met"
                goto stat_if_dir_ret;
#line 1073 "cplus.met"
                
#line 1073 "cplus.met"
            }
#line 1073 "cplus.met"
            break;
#line 1073 "cplus.met"
        default :
#line 1073 "cplus.met"
            MulFreeTree(5,_addlist1,_addlist2,list,list2,retTree);
            CASE_EXIT(stat_if_dir_exit,"either ELSE_DIR or ELIF_DIR or ENDIF_DIR")
#line 1073 "cplus.met"
            break;
#line 1073 "cplus.met"
    }
#line 1073 "cplus.met"
#line 1073 "cplus.met"
#line 1074 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1074 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 1074 "cplus.met"
keepCarriage =  _oldkeepCarriage;
#line 1074 "cplus.met"
return((PPTREE) 0);
#line 1074 "cplus.met"

#line 1074 "cplus.met"
stat_if_dir_exit :
#line 1074 "cplus.met"

#line 1074 "cplus.met"
    _Debug = TRACE_RULE("stat_if_dir",TRACE_EXIT,(PPTREE)0);
#line 1074 "cplus.met"
    _funcLevel--;
#line 1074 "cplus.met"
    keepCarriage =  _oldkeepCarriage;
#line 1074 "cplus.met"
    return((PPTREE) -1) ;
#line 1074 "cplus.met"

#line 1074 "cplus.met"
stat_if_dir_ret :
#line 1074 "cplus.met"
    
#line 1074 "cplus.met"
    _Debug = TRACE_RULE("stat_if_dir",TRACE_RETURN,_retValue);
#line 1074 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1074 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 1074 "cplus.met"
    keepCarriage =  _oldkeepCarriage;
#line 1074 "cplus.met"
    return _retValue ;
#line 1074 "cplus.met"
}
#line 1074 "cplus.met"

#line 1074 "cplus.met"
