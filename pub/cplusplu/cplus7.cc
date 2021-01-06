/*************************************************************************/
/*                                                                       */
/*        Produced by MetaGen version 2.0  -    1989-2006                 */
/*       Syntaxic Analyzer Meta Generator developped by                  */
/*                  Eric Lavillonniere                                   */
/*                                                                       */
/*************************************************************************/

#include "token.h"
#include "cplus.h"


#line 2091 "cplus.met"
PPTREE cplus::range_in_liste ( int error_free)
#line 2091 "cplus.met"
{
#line 2091 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 2091 "cplus.met"
    int _value,_nbPre = 0 ;
#line 2091 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 2091 "cplus.met"
    int _Debug = TRACE_RULE("range_in_liste",TRACE_ENTER,(PPTREE)0);
#line 2091 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 2091 "cplus.met"
#line 2091 "cplus.met"
    PPTREE retTree = (PPTREE) 0;
#line 2091 "cplus.met"
#line 2093 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 2093 "cplus.met"
    if ( ! TERM_OR_META(IDENT,"IDENT") || !(BUILD_TERM_META(retTree))) {
#line 2093 "cplus.met"
        MulFreeTree(1,retTree);
        TOKEN_EXIT(range_in_liste_exit,"IDENT")
#line 2093 "cplus.met"
    } else {
#line 2093 "cplus.met"
        tokenAhead = 0 ;
#line 2093 "cplus.met"
    }
#line 2093 "cplus.met"
#line 2094 "cplus.met"
    if ( IsRange(lexEl.string())){
#line 2094 "cplus.met"
#line 2095 "cplus.met"
        {
#line 2095 "cplus.met"
            _retValue = retTree ;
#line 2095 "cplus.met"
            goto range_in_liste_ret;
#line 2095 "cplus.met"
            
#line 2095 "cplus.met"
        }
#line 2095 "cplus.met"
    } else {
#line 2095 "cplus.met"
#line 2097 "cplus.met"
        
#line 2097 "cplus.met"
        MulFreeTree(1,retTree);
        LEX_EXIT ("",0);
#line 2097 "cplus.met"
        goto range_in_liste_exit;
#line 2097 "cplus.met"
    }
#line 2097 "cplus.met"
#line 2097 "cplus.met"
#line 2097 "cplus.met"

#line 2098 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2098 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 2098 "cplus.met"
return((PPTREE) 0);
#line 2098 "cplus.met"

#line 2098 "cplus.met"
range_in_liste_exit :
#line 2098 "cplus.met"

#line 2098 "cplus.met"
    _Debug = TRACE_RULE("range_in_liste",TRACE_EXIT,(PPTREE)0);
#line 2098 "cplus.met"
    _funcLevel--;
#line 2098 "cplus.met"
    return((PPTREE) -1) ;
#line 2098 "cplus.met"

#line 2098 "cplus.met"
range_in_liste_ret :
#line 2098 "cplus.met"
    
#line 2098 "cplus.met"
    _Debug = TRACE_RULE("range_in_liste",TRACE_RETURN,_retValue);
#line 2098 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2098 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 2098 "cplus.met"
    return _retValue ;
#line 2098 "cplus.met"
}
#line 2098 "cplus.met"

#line 2098 "cplus.met"
#line 2135 "cplus.met"
PPTREE cplus::range_modifier ( int error_free)
#line 2135 "cplus.met"
{
#line 2135 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 2135 "cplus.met"
    int _value,_nbPre = 0 ;
#line 2135 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 2135 "cplus.met"
    int _Debug = TRACE_RULE("range_modifier",TRACE_ENTER,(PPTREE)0);
#line 2135 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 2135 "cplus.met"
#line 2135 "cplus.met"
    PPTREE retTree = (PPTREE) 0;
#line 2135 "cplus.met"
#line 2137 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 2137 "cplus.met"
    switch( lexEl.Value) {
#line 2137 "cplus.met"
#line 2138 "cplus.met"
        case META : 
#line 2138 "cplus.met"
        case IDENT : 
#line 2138 "cplus.met"
#line 2138 "cplus.met"
            {
#line 2138 "cplus.met"
                PPTREE _ptTree0=0;
#line 2138 "cplus.met"
                {
#line 2138 "cplus.met"
                    PPTREE _ptTree1=0,_ptRes1=0;
#line 2138 "cplus.met"
                    _ptRes1= MakeTree(RANGE_MODIFIER, 2);
#line 2138 "cplus.met"
                    if ( (_ptTree1=NQUICK_CALL(_Tak(range_in_liste)(error_free), 120, cplus))== (PPTREE) -1 ) {
#line 2138 "cplus.met"
                        MulFreeTree(4,_ptRes1,_ptTree1,_ptTree0,retTree);
                        PROG_EXIT(range_modifier_exit,"range_modifier")
#line 2138 "cplus.met"
                    }
#line 2138 "cplus.met"
                    ReplaceTree(_ptRes1, 1, _ptTree1);
#line 2138 "cplus.met"
                    _ptTree0=_ptRes1;
#line 2138 "cplus.met"
                }
#line 2138 "cplus.met"
                _retValue =_ptTree0;
#line 2138 "cplus.met"
                goto range_modifier_ret;
#line 2138 "cplus.met"
            }
#line 2138 "cplus.met"
            break;
#line 2138 "cplus.met"
#line 2139 "cplus.met"
        case VOLATILE : 
#line 2139 "cplus.met"
#line 2139 "cplus.met"
            {
#line 2139 "cplus.met"
                PPTREE _ptTree0=0;
#line 2139 "cplus.met"
                {
#line 2139 "cplus.met"
                    PPTREE _ptTree1=0,_ptRes1=0;
#line 2139 "cplus.met"
                    _ptRes1= MakeTree(RANGE_MODIFIER, 2);
#line 2139 "cplus.met"
                    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 2139 "cplus.met"
                    if (  !SEE_TOKEN( VOLATILE,"volatile") || !(_ptTree1 = CommString(lexEl.string()))) {
#line 2139 "cplus.met"
                        MulFreeTree(4,_ptRes1,_ptTree1,_ptTree0,retTree);
                        TOKEN_EXIT(range_modifier_exit,"volatile")
#line 2139 "cplus.met"
                    } else {
#line 2139 "cplus.met"
                        tokenAhead = 0 ;
#line 2139 "cplus.met"
                    }
#line 2139 "cplus.met"
                    ReplaceTree(_ptRes1, 1, _ptTree1);
#line 2139 "cplus.met"
                    _ptTree0=_ptRes1;
#line 2139 "cplus.met"
                }
#line 2139 "cplus.met"
                _retValue =_ptTree0;
#line 2139 "cplus.met"
                goto range_modifier_ret;
#line 2139 "cplus.met"
            }
#line 2139 "cplus.met"
            break;
#line 2139 "cplus.met"
#line 2140 "cplus.met"
        case REGISTER : 
#line 2140 "cplus.met"
#line 2140 "cplus.met"
            {
#line 2140 "cplus.met"
                PPTREE _ptTree0=0;
#line 2140 "cplus.met"
                {
#line 2140 "cplus.met"
                    PPTREE _ptTree1=0,_ptRes1=0;
#line 2140 "cplus.met"
                    _ptRes1= MakeTree(RANGE_MODIFIER, 2);
#line 2140 "cplus.met"
                    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 2140 "cplus.met"
                    if (  !SEE_TOKEN( REGISTER,"register") || !(_ptTree1 = CommString(lexEl.string()))) {
#line 2140 "cplus.met"
                        MulFreeTree(4,_ptRes1,_ptTree1,_ptTree0,retTree);
                        TOKEN_EXIT(range_modifier_exit,"register")
#line 2140 "cplus.met"
                    } else {
#line 2140 "cplus.met"
                        tokenAhead = 0 ;
#line 2140 "cplus.met"
                    }
#line 2140 "cplus.met"
                    ReplaceTree(_ptRes1, 1, _ptTree1);
#line 2140 "cplus.met"
                    _ptTree0=_ptRes1;
#line 2140 "cplus.met"
                }
#line 2140 "cplus.met"
                _retValue =_ptTree0;
#line 2140 "cplus.met"
                goto range_modifier_ret;
#line 2140 "cplus.met"
            }
#line 2140 "cplus.met"
            break;
#line 2140 "cplus.met"
#line 2141 "cplus.met"
        case __ATTRIBUTE__ : 
#line 2141 "cplus.met"
#line 2142 "cplus.met"
#line 2143 "cplus.met"
            {
#line 2143 "cplus.met"
                PPTREE _ptTree0=0;
#line 2143 "cplus.met"
                {
#line 2143 "cplus.met"
                    PPTREE _ptTree1=0,_ptRes1=0;
#line 2143 "cplus.met"
                    _ptRes1= MakeTree(RANGE_MODIFIER, 2);
#line 2143 "cplus.met"
                    if ( (_ptTree1=NQUICK_CALL(_Tak(attribute_call)(error_free), 17, cplus))== (PPTREE) -1 ) {
#line 2143 "cplus.met"
                        MulFreeTree(4,_ptRes1,_ptTree1,_ptTree0,retTree);
                        PROG_EXIT(range_modifier_exit,"range_modifier")
#line 2143 "cplus.met"
                    }
#line 2143 "cplus.met"
                    ReplaceTree(_ptRes1, 1, _ptTree1);
#line 2143 "cplus.met"
                    _ptTree0=_ptRes1;
#line 2143 "cplus.met"
                }
#line 2143 "cplus.met"
                _retValue =_ptTree0;
#line 2143 "cplus.met"
                goto range_modifier_ret;
#line 2143 "cplus.met"
            }
#line 2143 "cplus.met"
#line 2143 "cplus.met"
            break;
#line 2143 "cplus.met"
#line 2145 "cplus.met"
        case __ASM__ : 
#line 2145 "cplus.met"
#line 2146 "cplus.met"
#line 2147 "cplus.met"
            {
#line 2147 "cplus.met"
                PPTREE _ptTree0=0;
#line 2147 "cplus.met"
                {
#line 2147 "cplus.met"
                    PPTREE _ptTree1=0,_ptRes1=0;
#line 2147 "cplus.met"
                    _ptRes1= MakeTree(RANGE_MODIFIER, 2);
#line 2147 "cplus.met"
                    if ( (_ptTree1=NQUICK_CALL(_Tak(asm_call)(error_free), 13, cplus))== (PPTREE) -1 ) {
#line 2147 "cplus.met"
                        MulFreeTree(4,_ptRes1,_ptTree1,_ptTree0,retTree);
                        PROG_EXIT(range_modifier_exit,"range_modifier")
#line 2147 "cplus.met"
                    }
#line 2147 "cplus.met"
                    ReplaceTree(_ptRes1, 1, _ptTree1);
#line 2147 "cplus.met"
                    _ptTree0=_ptRes1;
#line 2147 "cplus.met"
                }
#line 2147 "cplus.met"
                _retValue =_ptTree0;
#line 2147 "cplus.met"
                goto range_modifier_ret;
#line 2147 "cplus.met"
            }
#line 2147 "cplus.met"
#line 2147 "cplus.met"
            break;
#line 2147 "cplus.met"
#line 2149 "cplus.met"
        default : 
#line 2149 "cplus.met"
#line 2149 "cplus.met"
            {
#line 2149 "cplus.met"
                PPTREE _ptTree0=0;
#line 2149 "cplus.met"
                if ( (_ptTree0=NQUICK_CALL(_Tak(range_modifier_function)(error_free), 122, cplus))== (PPTREE) -1 ) {
#line 2149 "cplus.met"
                    MulFreeTree(2,_ptTree0,retTree);
                    PROG_EXIT(range_modifier_exit,"range_modifier")
#line 2149 "cplus.met"
                }
#line 2149 "cplus.met"
                _retValue =_ptTree0;
#line 2149 "cplus.met"
                goto range_modifier_ret;
#line 2149 "cplus.met"
            }
#line 2149 "cplus.met"
            break;
#line 2149 "cplus.met"
    }
#line 2149 "cplus.met"
#line 2149 "cplus.met"
#line 2150 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2150 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 2150 "cplus.met"
return((PPTREE) 0);
#line 2150 "cplus.met"

#line 2150 "cplus.met"
range_modifier_exit :
#line 2150 "cplus.met"

#line 2150 "cplus.met"
    _Debug = TRACE_RULE("range_modifier",TRACE_EXIT,(PPTREE)0);
#line 2150 "cplus.met"
    _funcLevel--;
#line 2150 "cplus.met"
    return((PPTREE) -1) ;
#line 2150 "cplus.met"

#line 2150 "cplus.met"
range_modifier_ret :
#line 2150 "cplus.met"
    
#line 2150 "cplus.met"
    _Debug = TRACE_RULE("range_modifier",TRACE_RETURN,_retValue);
#line 2150 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2150 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 2150 "cplus.met"
    return _retValue ;
#line 2150 "cplus.met"
}
#line 2150 "cplus.met"

#line 2150 "cplus.met"
#line 2107 "cplus.met"
PPTREE cplus::range_modifier_function ( int error_free)
#line 2107 "cplus.met"
{
#line 2107 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 2107 "cplus.met"
    int _value,_nbPre = 0 ;
#line 2107 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 2107 "cplus.met"
    int _Debug = TRACE_RULE("range_modifier_function",TRACE_ENTER,(PPTREE)0);
#line 2107 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 2107 "cplus.met"
#line 2108 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 2108 "cplus.met"
    switch( lexEl.Value) {
#line 2108 "cplus.met"
#line 2109 "cplus.met"
        case INLINE : 
#line 2109 "cplus.met"
#line 2109 "cplus.met"
            {
#line 2109 "cplus.met"
                PPTREE _ptTree0=0;
#line 2109 "cplus.met"
                {
#line 2109 "cplus.met"
                    PPTREE _ptTree1=0,_ptRes1=0;
#line 2109 "cplus.met"
                    _ptRes1= MakeTree(RANGE_MODIFIER, 2);
#line 2109 "cplus.met"
                    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 2109 "cplus.met"
                    if (  !SEE_TOKEN( INLINE,"inline") || !(_ptTree1 = CommString(lexEl.string()))) {
#line 2109 "cplus.met"
                        MulFreeTree(3,_ptRes1,_ptTree1,_ptTree0);
                        TOKEN_EXIT(range_modifier_function_exit,"inline")
#line 2109 "cplus.met"
                    } else {
#line 2109 "cplus.met"
                        tokenAhead = 0 ;
#line 2109 "cplus.met"
                    }
#line 2109 "cplus.met"
                    ReplaceTree(_ptRes1, 1, _ptTree1);
#line 2109 "cplus.met"
                    _ptTree0=_ptRes1;
#line 2109 "cplus.met"
                }
#line 2109 "cplus.met"
                _retValue =_ptTree0;
#line 2109 "cplus.met"
                goto range_modifier_function_ret;
#line 2109 "cplus.met"
            }
#line 2109 "cplus.met"
            break;
#line 2109 "cplus.met"
#line 2110 "cplus.met"
        case VIRTUAL : 
#line 2110 "cplus.met"
#line 2110 "cplus.met"
            {
#line 2110 "cplus.met"
                PPTREE _ptTree0=0;
#line 2110 "cplus.met"
                {
#line 2110 "cplus.met"
                    PPTREE _ptTree1=0,_ptRes1=0;
#line 2110 "cplus.met"
                    _ptRes1= MakeTree(RANGE_MODIFIER, 2);
#line 2110 "cplus.met"
                    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 2110 "cplus.met"
                    if (  !SEE_TOKEN( VIRTUAL,"virtual") || !(_ptTree1 = CommString(lexEl.string()))) {
#line 2110 "cplus.met"
                        MulFreeTree(3,_ptRes1,_ptTree1,_ptTree0);
                        TOKEN_EXIT(range_modifier_function_exit,"virtual")
#line 2110 "cplus.met"
                    } else {
#line 2110 "cplus.met"
                        tokenAhead = 0 ;
#line 2110 "cplus.met"
                    }
#line 2110 "cplus.met"
                    ReplaceTree(_ptRes1, 1, _ptTree1);
#line 2110 "cplus.met"
                    _ptTree0=_ptRes1;
#line 2110 "cplus.met"
                }
#line 2110 "cplus.met"
                _retValue =_ptTree0;
#line 2110 "cplus.met"
                goto range_modifier_function_ret;
#line 2110 "cplus.met"
            }
#line 2110 "cplus.met"
            break;
#line 2110 "cplus.met"
#line 2111 "cplus.met"
        case FRIEND : 
#line 2111 "cplus.met"
#line 2111 "cplus.met"
            {
#line 2111 "cplus.met"
                PPTREE _ptTree0=0;
#line 2111 "cplus.met"
                {
#line 2111 "cplus.met"
                    PPTREE _ptTree1=0,_ptRes1=0;
#line 2111 "cplus.met"
                    _ptRes1= MakeTree(RANGE_MODIFIER, 2);
#line 2111 "cplus.met"
                    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 2111 "cplus.met"
                    if (  !SEE_TOKEN( FRIEND,"friend") || !(_ptTree1 = CommString(lexEl.string()))) {
#line 2111 "cplus.met"
                        MulFreeTree(3,_ptRes1,_ptTree1,_ptTree0);
                        TOKEN_EXIT(range_modifier_function_exit,"friend")
#line 2111 "cplus.met"
                    } else {
#line 2111 "cplus.met"
                        tokenAhead = 0 ;
#line 2111 "cplus.met"
                    }
#line 2111 "cplus.met"
                    ReplaceTree(_ptRes1, 1, _ptTree1);
#line 2111 "cplus.met"
                    _ptTree0=_ptRes1;
#line 2111 "cplus.met"
                }
#line 2111 "cplus.met"
                _retValue =_ptTree0;
#line 2111 "cplus.met"
                goto range_modifier_function_ret;
#line 2111 "cplus.met"
            }
#line 2111 "cplus.met"
            break;
#line 2111 "cplus.met"
#line 2112 "cplus.met"
        case CONST : 
#line 2112 "cplus.met"
#line 2112 "cplus.met"
            {
#line 2112 "cplus.met"
                PPTREE _ptTree0=0;
#line 2112 "cplus.met"
                {
#line 2112 "cplus.met"
                    PPTREE _ptTree1=0,_ptRes1=0;
#line 2112 "cplus.met"
                    _ptRes1= MakeTree(RANGE_MODIFIER, 2);
#line 2112 "cplus.met"
                    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 2112 "cplus.met"
                    if (  !SEE_TOKEN( CONST,"const") || !(_ptTree1 = CommString(lexEl.string()))) {
#line 2112 "cplus.met"
                        MulFreeTree(3,_ptRes1,_ptTree1,_ptTree0);
                        TOKEN_EXIT(range_modifier_function_exit,"const")
#line 2112 "cplus.met"
                    } else {
#line 2112 "cplus.met"
                        tokenAhead = 0 ;
#line 2112 "cplus.met"
                    }
#line 2112 "cplus.met"
                    ReplaceTree(_ptRes1, 1, _ptTree1);
#line 2112 "cplus.met"
                    _ptTree0=_ptRes1;
#line 2112 "cplus.met"
                }
#line 2112 "cplus.met"
                _retValue =_ptTree0;
#line 2112 "cplus.met"
                goto range_modifier_function_ret;
#line 2112 "cplus.met"
            }
#line 2112 "cplus.met"
            break;
#line 2112 "cplus.met"
#line 2113 "cplus.met"
        case CONSTEXPR : 
#line 2113 "cplus.met"
#line 2113 "cplus.met"
            {
#line 2113 "cplus.met"
                PPTREE _ptTree0=0;
#line 2113 "cplus.met"
                {
#line 2113 "cplus.met"
                    PPTREE _ptTree1=0,_ptRes1=0;
#line 2113 "cplus.met"
                    _ptRes1= MakeTree(RANGE_MODIFIER, 2);
#line 2113 "cplus.met"
                    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 2113 "cplus.met"
                    if (  !SEE_TOKEN( CONSTEXPR,"constexpr") || !(_ptTree1 = CommString(lexEl.string()))) {
#line 2113 "cplus.met"
                        MulFreeTree(3,_ptRes1,_ptTree1,_ptTree0);
                        TOKEN_EXIT(range_modifier_function_exit,"constexpr")
#line 2113 "cplus.met"
                    } else {
#line 2113 "cplus.met"
                        tokenAhead = 0 ;
#line 2113 "cplus.met"
                    }
#line 2113 "cplus.met"
                    ReplaceTree(_ptRes1, 1, _ptTree1);
#line 2113 "cplus.met"
                    _ptTree0=_ptRes1;
#line 2113 "cplus.met"
                }
#line 2113 "cplus.met"
                _retValue =_ptTree0;
#line 2113 "cplus.met"
                goto range_modifier_function_ret;
#line 2113 "cplus.met"
            }
#line 2113 "cplus.met"
            break;
#line 2113 "cplus.met"
        default :
#line 2113 "cplus.met"
            CASE_EXIT(range_modifier_function_exit,"either inline or virtual or friend or const or constexpr")
#line 2113 "cplus.met"
            break;
#line 2113 "cplus.met"
    }
#line 2113 "cplus.met"
#line 2113 "cplus.met"
#line 2114 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2114 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 2114 "cplus.met"
return((PPTREE) 0);
#line 2114 "cplus.met"

#line 2114 "cplus.met"
range_modifier_function_exit :
#line 2114 "cplus.met"

#line 2114 "cplus.met"
    _Debug = TRACE_RULE("range_modifier_function",TRACE_EXIT,(PPTREE)0);
#line 2114 "cplus.met"
    _funcLevel--;
#line 2114 "cplus.met"
    return((PPTREE) -1) ;
#line 2114 "cplus.met"

#line 2114 "cplus.met"
range_modifier_function_ret :
#line 2114 "cplus.met"
    
#line 2114 "cplus.met"
    _Debug = TRACE_RULE("range_modifier_function",TRACE_RETURN,_retValue);
#line 2114 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2114 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 2114 "cplus.met"
    return _retValue ;
#line 2114 "cplus.met"
}
#line 2114 "cplus.met"

#line 2114 "cplus.met"
#line 1957 "cplus.met"
PPTREE cplus::range_modifier_ident ( int error_free)
#line 1957 "cplus.met"
{
#line 1957 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 1957 "cplus.met"
    int _value,_nbPre = 0 ;
#line 1957 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 1957 "cplus.met"
    int _Debug = TRACE_RULE("range_modifier_ident",TRACE_ENTER,(PPTREE)0);
#line 1957 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 1957 "cplus.met"
#line 1957 "cplus.met"
    PPTREE retTree = (PPTREE) 0;
#line 1957 "cplus.met"
#line 1959 "cplus.met"
    if (NPUSH_CALL_AFF_VERIF(retTree = ,_Tak(range_modifier), 121, cplus)){
#line 1959 "cplus.met"
#line 1960 "cplus.met"
        {
#line 1960 "cplus.met"
            PPTREE _ptTree0=0;
#line 1960 "cplus.met"
            {
#line 1960 "cplus.met"
                PPTREE _ptTree1=0;
#line 1960 "cplus.met"
                if ( (_ptTree1=NQUICK_CALL(_Tak(range_modifier_ident)(error_free), 123, cplus))== (PPTREE) -1 ) {
#line 1960 "cplus.met"
                    MulFreeTree(3,_ptTree1,_ptTree0,retTree);
                    PROG_EXIT(range_modifier_ident_exit,"range_modifier_ident")
#line 1960 "cplus.met"
                }
#line 1960 "cplus.met"
                _ptTree0=ReplaceTree(retTree , 2 , _ptTree1);
#line 1960 "cplus.met"
            }
#line 1960 "cplus.met"
            _retValue =_ptTree0;
#line 1960 "cplus.met"
            goto range_modifier_ident_ret;
#line 1960 "cplus.met"
        }
#line 1960 "cplus.met"
    } else {
#line 1960 "cplus.met"
#line 1962 "cplus.met"
        if ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN( IDENT,"IDENT")){
#line 1962 "cplus.met"
#line 1963 "cplus.met"
            {
#line 1963 "cplus.met"
                PPTREE _ptTree0=0;
#line 1963 "cplus.met"
                {
#line 1963 "cplus.met"
                    PPTREE _ptTree1=0,_ptRes1=0;
#line 1963 "cplus.met"
                    _ptRes1= MakeTree(IDENT, 1);
#line 1963 "cplus.met"
                    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 1963 "cplus.met"
                    if ( ! TERM_OR_META(IDENT,"IDENT") || !(BUILD_TERM_META(_ptTree1))) {
#line 1963 "cplus.met"
                        MulFreeTree(4,_ptRes1,_ptTree1,_ptTree0,retTree);
                        TOKEN_EXIT(range_modifier_ident_exit,"IDENT")
#line 1963 "cplus.met"
                    } else {
#line 1963 "cplus.met"
                        tokenAhead = 0 ;
#line 1963 "cplus.met"
                    }
#line 1963 "cplus.met"
                    ReplaceTree(_ptRes1, 1, _ptTree1);
#line 1963 "cplus.met"
                    _ptTree0=_ptRes1;
#line 1963 "cplus.met"
                }
#line 1963 "cplus.met"
                _retValue =_ptTree0;
#line 1963 "cplus.met"
                goto range_modifier_ident_ret;
#line 1963 "cplus.met"
            }
#line 1963 "cplus.met"
        }
#line 1963 "cplus.met"
    }
#line 1963 "cplus.met"
#line 1963 "cplus.met"
#line 1963 "cplus.met"

#line 1964 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1964 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 1964 "cplus.met"
return((PPTREE) 0);
#line 1964 "cplus.met"

#line 1964 "cplus.met"
range_modifier_ident_exit :
#line 1964 "cplus.met"

#line 1964 "cplus.met"
    _Debug = TRACE_RULE("range_modifier_ident",TRACE_EXIT,(PPTREE)0);
#line 1964 "cplus.met"
    _funcLevel--;
#line 1964 "cplus.met"
    return((PPTREE) -1) ;
#line 1964 "cplus.met"

#line 1964 "cplus.met"
range_modifier_ident_ret :
#line 1964 "cplus.met"
    
#line 1964 "cplus.met"
    _Debug = TRACE_RULE("range_modifier_ident",TRACE_RETURN,_retValue);
#line 1964 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1964 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 1964 "cplus.met"
    return _retValue ;
#line 1964 "cplus.met"
}
#line 1964 "cplus.met"

#line 1964 "cplus.met"
#line 800 "cplus.met"
PPTREE cplus::range_pragma ( int error_free)
#line 800 "cplus.met"
{
#line 800 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 800 "cplus.met"
    int _value,_nbPre = 0 ;
#line 800 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 800 "cplus.met"
    int _Debug = TRACE_RULE("range_pragma",TRACE_ENTER,(PPTREE)0);
#line 800 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 800 "cplus.met"
#line 801 "cplus.met"
    (tokenAhead == 8|| (LexPragma(),TRACE_LEX(1)));
#line 801 "cplus.met"
    if ( ! TERM_OR_META(PRAGMA_RANGE,"PRAGMA_RANGE") || !(CommTerm(),1)) {
#line 801 "cplus.met"
            TOKEN_EXIT(range_pragma_exit,"PRAGMA_RANGE")
#line 801 "cplus.met"
    } else {
#line 801 "cplus.met"
        tokenAhead = 0 ;
#line 801 "cplus.met"
    }
#line 801 "cplus.met"
#line 802 "cplus.met"
    (tokenAhead == 9|| (LexPragmaSmall(),TRACE_LEX(1)));
#line 802 "cplus.met"
    if ( ! TERM_OR_META(SMALL_PRAGMA_CONTENT,"SMALL_PRAGMA_CONTENT") || !(CommTerm(),1)) {
#line 802 "cplus.met"
            TOKEN_EXIT(range_pragma_exit,"SMALL_PRAGMA_CONTENT")
#line 802 "cplus.met"
    } else {
#line 802 "cplus.met"
        tokenAhead = 0 ;
#line 802 "cplus.met"
    }
#line 802 "cplus.met"
#line 803 "cplus.met"
     AnalyseRange(lexEl.string());
#line 803 "cplus.met"
#line 803 "cplus.met"
#line 803 "cplus.met"

#line 804 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 804 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 804 "cplus.met"
return((PPTREE) 0);
#line 804 "cplus.met"

#line 804 "cplus.met"
range_pragma_exit :
#line 804 "cplus.met"

#line 804 "cplus.met"
    _Debug = TRACE_RULE("range_pragma",TRACE_EXIT,(PPTREE)0);
#line 804 "cplus.met"
    _funcLevel--;
#line 804 "cplus.met"
    return((PPTREE) -1) ;
#line 804 "cplus.met"

#line 804 "cplus.met"
range_pragma_ret :
#line 804 "cplus.met"
    
#line 804 "cplus.met"
    _Debug = TRACE_RULE("range_pragma",TRACE_RETURN,_retValue);
#line 804 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 804 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 804 "cplus.met"
    return _retValue ;
#line 804 "cplus.met"
}
#line 804 "cplus.met"

#line 804 "cplus.met"
#line 2657 "cplus.met"
PPTREE cplus::relational_expression ( int error_free)
#line 2657 "cplus.met"
{
#line 2657 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 2657 "cplus.met"
    int _value,_nbPre = 0 ;
#line 2657 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 2657 "cplus.met"
    int _Debug = TRACE_RULE("relational_expression",TRACE_ENTER,(PPTREE)0);
#line 2657 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 2657 "cplus.met"
#line 2657 "cplus.met"
    PPTREE expTree = (PPTREE) 0;
#line 2657 "cplus.met"
#line 2659 "cplus.met"
    if ( (expTree=NQUICK_CALL(_Tak(shift_expression)(error_free), 127, cplus))== (PPTREE) -1 ) {
#line 2659 "cplus.met"
        MulFreeTree(1,expTree);
        PROG_EXIT(relational_expression_exit,"relational_expression")
#line 2659 "cplus.met"
    }
#line 2659 "cplus.met"
#line 2660 "cplus.met"
    while (((((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN( INFEEGAL,"<=")) || 
#line 2660 "cplus.met"
            ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN( SUPEEGAL,">="))) || 
#line 2660 "cplus.met"
           (((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN( SUPE,">")))) || 
#line 2660 "cplus.met"
          ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN( INFE,"<"))) { 
#line 2660 "cplus.met"
#line 2661 "cplus.met"
        (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 2661 "cplus.met"
        switch( lexEl.Value) {
#line 2661 "cplus.met"
#line 2662 "cplus.met"
            case INFEEGAL : 
#line 2662 "cplus.met"
                tokenAhead = 0 ;
#line 2662 "cplus.met"
                CommTerm();
#line 2662 "cplus.met"
#line 2662 "cplus.met"
                {
#line 2662 "cplus.met"
                    PPTREE _ptTree0=0,_ptRes0=0;
#line 2662 "cplus.met"
                    _ptRes0= MakeTree(LEQU, 2);
#line 2662 "cplus.met"
                    ReplaceTree(_ptRes0, 1, expTree );
#line 2662 "cplus.met"
                    if ( (_ptTree0=NQUICK_CALL(_Tak(shift_expression)(error_free), 127, cplus))== (PPTREE) -1 ) {
#line 2662 "cplus.met"
                        MulFreeTree(3,_ptRes0,_ptTree0,expTree);
                        PROG_EXIT(relational_expression_exit,"relational_expression")
#line 2662 "cplus.met"
                    }
#line 2662 "cplus.met"
                    ReplaceTree(_ptRes0, 2, _ptTree0);
#line 2662 "cplus.met"
                    expTree=_ptRes0;
#line 2662 "cplus.met"
                }
#line 2662 "cplus.met"
                break;
#line 2662 "cplus.met"
#line 2663 "cplus.met"
            case SUPEEGAL : 
#line 2663 "cplus.met"
                tokenAhead = 0 ;
#line 2663 "cplus.met"
                CommTerm();
#line 2663 "cplus.met"
#line 2663 "cplus.met"
                {
#line 2663 "cplus.met"
                    PPTREE _ptTree0=0,_ptRes0=0;
#line 2663 "cplus.met"
                    _ptRes0= MakeTree(GEQU, 2);
#line 2663 "cplus.met"
                    ReplaceTree(_ptRes0, 1, expTree );
#line 2663 "cplus.met"
                    if ( (_ptTree0=NQUICK_CALL(_Tak(shift_expression)(error_free), 127, cplus))== (PPTREE) -1 ) {
#line 2663 "cplus.met"
                        MulFreeTree(3,_ptRes0,_ptTree0,expTree);
                        PROG_EXIT(relational_expression_exit,"relational_expression")
#line 2663 "cplus.met"
                    }
#line 2663 "cplus.met"
                    ReplaceTree(_ptRes0, 2, _ptTree0);
#line 2663 "cplus.met"
                    expTree=_ptRes0;
#line 2663 "cplus.met"
                }
#line 2663 "cplus.met"
                break;
#line 2663 "cplus.met"
#line 2664 "cplus.met"
            case SUPE : 
#line 2664 "cplus.met"
                tokenAhead = 0 ;
#line 2664 "cplus.met"
                CommTerm();
#line 2664 "cplus.met"
#line 2664 "cplus.met"
                {
#line 2664 "cplus.met"
                    PPTREE _ptTree0=0,_ptRes0=0;
#line 2664 "cplus.met"
                    _ptRes0= MakeTree(GT, 2);
#line 2664 "cplus.met"
                    ReplaceTree(_ptRes0, 1, expTree );
#line 2664 "cplus.met"
                    if ( (_ptTree0=NQUICK_CALL(_Tak(shift_expression)(error_free), 127, cplus))== (PPTREE) -1 ) {
#line 2664 "cplus.met"
                        MulFreeTree(3,_ptRes0,_ptTree0,expTree);
                        PROG_EXIT(relational_expression_exit,"relational_expression")
#line 2664 "cplus.met"
                    }
#line 2664 "cplus.met"
                    ReplaceTree(_ptRes0, 2, _ptTree0);
#line 2664 "cplus.met"
                    expTree=_ptRes0;
#line 2664 "cplus.met"
                }
#line 2664 "cplus.met"
                break;
#line 2664 "cplus.met"
#line 2665 "cplus.met"
            case INFE : 
#line 2665 "cplus.met"
                tokenAhead = 0 ;
#line 2665 "cplus.met"
                CommTerm();
#line 2665 "cplus.met"
#line 2665 "cplus.met"
                {
#line 2665 "cplus.met"
                    PPTREE _ptTree0=0,_ptRes0=0;
#line 2665 "cplus.met"
                    _ptRes0= MakeTree(LT, 2);
#line 2665 "cplus.met"
                    ReplaceTree(_ptRes0, 1, expTree );
#line 2665 "cplus.met"
                    if ( (_ptTree0=NQUICK_CALL(_Tak(shift_expression)(error_free), 127, cplus))== (PPTREE) -1 ) {
#line 2665 "cplus.met"
                        MulFreeTree(3,_ptRes0,_ptTree0,expTree);
                        PROG_EXIT(relational_expression_exit,"relational_expression")
#line 2665 "cplus.met"
                    }
#line 2665 "cplus.met"
                    ReplaceTree(_ptRes0, 2, _ptTree0);
#line 2665 "cplus.met"
                    expTree=_ptRes0;
#line 2665 "cplus.met"
                }
#line 2665 "cplus.met"
                break;
#line 2665 "cplus.met"
            default :
#line 2665 "cplus.met"
                MulFreeTree(1,expTree);
                CASE_EXIT(relational_expression_exit,"either <= or >= or > or <")
#line 2665 "cplus.met"
                break;
#line 2665 "cplus.met"
        }
#line 2665 "cplus.met"
    } 
#line 2665 "cplus.met"
#line 2667 "cplus.met"
    {
#line 2667 "cplus.met"
        _retValue = expTree ;
#line 2667 "cplus.met"
        goto relational_expression_ret;
#line 2667 "cplus.met"
        
#line 2667 "cplus.met"
    }
#line 2667 "cplus.met"
#line 2667 "cplus.met"
#line 2667 "cplus.met"

#line 2668 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2668 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 2668 "cplus.met"
return((PPTREE) 0);
#line 2668 "cplus.met"

#line 2668 "cplus.met"
relational_expression_exit :
#line 2668 "cplus.met"

#line 2668 "cplus.met"
    _Debug = TRACE_RULE("relational_expression",TRACE_EXIT,(PPTREE)0);
#line 2668 "cplus.met"
    _funcLevel--;
#line 2668 "cplus.met"
    return((PPTREE) -1) ;
#line 2668 "cplus.met"

#line 2668 "cplus.met"
relational_expression_ret :
#line 2668 "cplus.met"
    
#line 2668 "cplus.met"
    _Debug = TRACE_RULE("relational_expression",TRACE_RETURN,_retValue);
#line 2668 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2668 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 2668 "cplus.met"
    return _retValue ;
#line 2668 "cplus.met"
}
#line 2668 "cplus.met"

#line 2668 "cplus.met"
#line 1437 "cplus.met"
PPTREE cplus::sc_specifier ( int error_free)
#line 1437 "cplus.met"
{
#line 1437 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 1437 "cplus.met"
    int _value,_nbPre = 0 ;
#line 1437 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 1437 "cplus.met"
    int _Debug = TRACE_RULE("sc_specifier",TRACE_ENTER,(PPTREE)0);
#line 1437 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 1437 "cplus.met"
#line 1438 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 1438 "cplus.met"
    switch( lexEl.Value) {
#line 1438 "cplus.met"
#line 1439 "cplus.met"
        case AUTO : 
#line 1439 "cplus.met"
#line 1439 "cplus.met"
            {
#line 1439 "cplus.met"
                PPTREE _ptTree0=0;
#line 1439 "cplus.met"
                (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 1439 "cplus.met"
                if (  !SEE_TOKEN( AUTO,"auto") || !(_ptTree0 = CommString(lexEl.string()))) {
#line 1439 "cplus.met"
                    MulFreeTree(1,_ptTree0);
                    TOKEN_EXIT(sc_specifier_exit,"auto")
#line 1439 "cplus.met"
                } else {
#line 1439 "cplus.met"
                    tokenAhead = 0 ;
#line 1439 "cplus.met"
                }
#line 1439 "cplus.met"
                _retValue =_ptTree0;
#line 1439 "cplus.met"
                goto sc_specifier_ret;
#line 1439 "cplus.met"
            }
#line 1439 "cplus.met"
            break;
#line 1439 "cplus.met"
#line 1440 "cplus.met"
        case STATIC : 
#line 1440 "cplus.met"
#line 1440 "cplus.met"
            {
#line 1440 "cplus.met"
                PPTREE _ptTree0=0;
#line 1440 "cplus.met"
                (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 1440 "cplus.met"
                if (  !SEE_TOKEN( STATIC,"static") || !(_ptTree0 = CommString(lexEl.string()))) {
#line 1440 "cplus.met"
                    MulFreeTree(1,_ptTree0);
                    TOKEN_EXIT(sc_specifier_exit,"static")
#line 1440 "cplus.met"
                } else {
#line 1440 "cplus.met"
                    tokenAhead = 0 ;
#line 1440 "cplus.met"
                }
#line 1440 "cplus.met"
                _retValue =_ptTree0;
#line 1440 "cplus.met"
                goto sc_specifier_ret;
#line 1440 "cplus.met"
            }
#line 1440 "cplus.met"
            break;
#line 1440 "cplus.met"
#line 1441 "cplus.met"
        case EXTERN : 
#line 1441 "cplus.met"
#line 1441 "cplus.met"
            {
#line 1441 "cplus.met"
                PPTREE _ptTree0=0;
#line 1441 "cplus.met"
                (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 1441 "cplus.met"
                if (  !SEE_TOKEN( EXTERN,"extern") || !(_ptTree0 = CommString(lexEl.string()))) {
#line 1441 "cplus.met"
                    MulFreeTree(1,_ptTree0);
                    TOKEN_EXIT(sc_specifier_exit,"extern")
#line 1441 "cplus.met"
                } else {
#line 1441 "cplus.met"
                    tokenAhead = 0 ;
#line 1441 "cplus.met"
                }
#line 1441 "cplus.met"
                _retValue =_ptTree0;
#line 1441 "cplus.met"
                goto sc_specifier_ret;
#line 1441 "cplus.met"
            }
#line 1441 "cplus.met"
            break;
#line 1441 "cplus.met"
#line 1442 "cplus.met"
        case REGISTER : 
#line 1442 "cplus.met"
#line 1442 "cplus.met"
            {
#line 1442 "cplus.met"
                PPTREE _ptTree0=0;
#line 1442 "cplus.met"
                (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 1442 "cplus.met"
                if (  !SEE_TOKEN( REGISTER,"register") || !(_ptTree0 = CommString(lexEl.string()))) {
#line 1442 "cplus.met"
                    MulFreeTree(1,_ptTree0);
                    TOKEN_EXIT(sc_specifier_exit,"register")
#line 1442 "cplus.met"
                } else {
#line 1442 "cplus.met"
                    tokenAhead = 0 ;
#line 1442 "cplus.met"
                }
#line 1442 "cplus.met"
                _retValue =_ptTree0;
#line 1442 "cplus.met"
                goto sc_specifier_ret;
#line 1442 "cplus.met"
            }
#line 1442 "cplus.met"
            break;
#line 1442 "cplus.met"
#line 1442 "cplus.met"
        default : 
#line 1442 "cplus.met"
#line 1442 "cplus.met"
            break;
#line 1442 "cplus.met"
    }
#line 1442 "cplus.met"
#line 1442 "cplus.met"
#line 1444 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1444 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 1444 "cplus.met"
return((PPTREE) 0);
#line 1444 "cplus.met"

#line 1444 "cplus.met"
sc_specifier_exit :
#line 1444 "cplus.met"

#line 1444 "cplus.met"
    _Debug = TRACE_RULE("sc_specifier",TRACE_EXIT,(PPTREE)0);
#line 1444 "cplus.met"
    _funcLevel--;
#line 1444 "cplus.met"
    return((PPTREE) -1) ;
#line 1444 "cplus.met"

#line 1444 "cplus.met"
sc_specifier_ret :
#line 1444 "cplus.met"
    
#line 1444 "cplus.met"
    _Debug = TRACE_RULE("sc_specifier",TRACE_RETURN,_retValue);
#line 1444 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1444 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 1444 "cplus.met"
    return _retValue ;
#line 1444 "cplus.met"
}
#line 1444 "cplus.met"

#line 1444 "cplus.met"
#line 2670 "cplus.met"
PPTREE cplus::shift_expression ( int error_free)
#line 2670 "cplus.met"
{
#line 2670 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 2670 "cplus.met"
    int _value,_nbPre = 0 ;
#line 2670 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 2670 "cplus.met"
    int _Debug = TRACE_RULE("shift_expression",TRACE_ENTER,(PPTREE)0);
#line 2670 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 2670 "cplus.met"
#line 2670 "cplus.met"
    PPTREE expTree = (PPTREE) 0;
#line 2670 "cplus.met"
#line 2672 "cplus.met"
    if ( (expTree=NQUICK_CALL(_Tak(additive_expression)(error_free), 3, cplus))== (PPTREE) -1 ) {
#line 2672 "cplus.met"
        MulFreeTree(1,expTree);
        PROG_EXIT(shift_expression_exit,"shift_expression")
#line 2672 "cplus.met"
    }
#line 2672 "cplus.met"
#line 2673 "cplus.met"
    while (((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN( INFEINFE,"<<")) || 
#line 2673 "cplus.met"
          ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN( SUPESUPE,">>"))) { 
#line 2673 "cplus.met"
#line 2674 "cplus.met"
        (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 2674 "cplus.met"
        switch( lexEl.Value) {
#line 2674 "cplus.met"
#line 2675 "cplus.met"
            case INFEINFE : 
#line 2675 "cplus.met"
                tokenAhead = 0 ;
#line 2675 "cplus.met"
                CommTerm();
#line 2675 "cplus.met"
#line 2675 "cplus.met"
                {
#line 2675 "cplus.met"
                    PPTREE _ptTree0=0,_ptRes0=0;
#line 2675 "cplus.met"
                    _ptRes0= MakeTree(LSHI, 2);
#line 2675 "cplus.met"
                    ReplaceTree(_ptRes0, 1, expTree );
#line 2675 "cplus.met"
                    if ( (_ptTree0=NQUICK_CALL(_Tak(additive_expression)(error_free), 3, cplus))== (PPTREE) -1 ) {
#line 2675 "cplus.met"
                        MulFreeTree(3,_ptRes0,_ptTree0,expTree);
                        PROG_EXIT(shift_expression_exit,"shift_expression")
#line 2675 "cplus.met"
                    }
#line 2675 "cplus.met"
                    ReplaceTree(_ptRes0, 2, _ptTree0);
#line 2675 "cplus.met"
                    expTree=_ptRes0;
#line 2675 "cplus.met"
                }
#line 2675 "cplus.met"
                break;
#line 2675 "cplus.met"
#line 2676 "cplus.met"
            case SUPESUPE : 
#line 2676 "cplus.met"
                tokenAhead = 0 ;
#line 2676 "cplus.met"
                CommTerm();
#line 2676 "cplus.met"
#line 2676 "cplus.met"
                {
#line 2676 "cplus.met"
                    PPTREE _ptTree0=0,_ptRes0=0;
#line 2676 "cplus.met"
                    _ptRes0= MakeTree(RSHI, 2);
#line 2676 "cplus.met"
                    ReplaceTree(_ptRes0, 1, expTree );
#line 2676 "cplus.met"
                    if ( (_ptTree0=NQUICK_CALL(_Tak(additive_expression)(error_free), 3, cplus))== (PPTREE) -1 ) {
#line 2676 "cplus.met"
                        MulFreeTree(3,_ptRes0,_ptTree0,expTree);
                        PROG_EXIT(shift_expression_exit,"shift_expression")
#line 2676 "cplus.met"
                    }
#line 2676 "cplus.met"
                    ReplaceTree(_ptRes0, 2, _ptTree0);
#line 2676 "cplus.met"
                    expTree=_ptRes0;
#line 2676 "cplus.met"
                }
#line 2676 "cplus.met"
                break;
#line 2676 "cplus.met"
            default :
#line 2676 "cplus.met"
                MulFreeTree(1,expTree);
                CASE_EXIT(shift_expression_exit,"either << or >>")
#line 2676 "cplus.met"
                break;
#line 2676 "cplus.met"
        }
#line 2676 "cplus.met"
    } 
#line 2676 "cplus.met"
#line 2678 "cplus.met"
    {
#line 2678 "cplus.met"
        _retValue = expTree ;
#line 2678 "cplus.met"
        goto shift_expression_ret;
#line 2678 "cplus.met"
        
#line 2678 "cplus.met"
    }
#line 2678 "cplus.met"
#line 2678 "cplus.met"
#line 2678 "cplus.met"

#line 2679 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2679 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 2679 "cplus.met"
return((PPTREE) 0);
#line 2679 "cplus.met"

#line 2679 "cplus.met"
shift_expression_exit :
#line 2679 "cplus.met"

#line 2679 "cplus.met"
    _Debug = TRACE_RULE("shift_expression",TRACE_EXIT,(PPTREE)0);
#line 2679 "cplus.met"
    _funcLevel--;
#line 2679 "cplus.met"
    return((PPTREE) -1) ;
#line 2679 "cplus.met"

#line 2679 "cplus.met"
shift_expression_ret :
#line 2679 "cplus.met"
    
#line 2679 "cplus.met"
    _Debug = TRACE_RULE("shift_expression",TRACE_RETURN,_retValue);
#line 2679 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2679 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 2679 "cplus.met"
    return _retValue ;
#line 2679 "cplus.met"
}
#line 2679 "cplus.met"

#line 2679 "cplus.met"
#line 2016 "cplus.met"
PPTREE cplus::short_long_int_char ( int error_free)
#line 2016 "cplus.met"
{
#line 2016 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 2016 "cplus.met"
    int _value,_nbPre = 0 ;
#line 2016 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 2016 "cplus.met"
    int _Debug = TRACE_RULE("short_long_int_char",TRACE_ENTER,(PPTREE)0);
#line 2016 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 2016 "cplus.met"
#line 2017 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 2017 "cplus.met"
    switch( lexEl.Value) {
#line 2017 "cplus.met"
#line 2018 "cplus.met"
        case INT : 
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
                    PPTREE _ptRes1=0;
#line 2018 "cplus.met"
                    _ptRes1= MakeTree(TINT, 0);
#line 2018 "cplus.met"
                    _ptTree0=_ptRes1;
#line 2018 "cplus.met"
                }
#line 2018 "cplus.met"
                _retValue =_ptTree0;
#line 2018 "cplus.met"
                goto short_long_int_char_ret;
#line 2018 "cplus.met"
            }
#line 2018 "cplus.met"
            break;
#line 2018 "cplus.met"
#line 2019 "cplus.met"
        case CHAR : 
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
                    PPTREE _ptRes1=0;
#line 2019 "cplus.met"
                    _ptRes1= MakeTree(TCHAR, 0);
#line 2019 "cplus.met"
                    _ptTree0=_ptRes1;
#line 2019 "cplus.met"
                }
#line 2019 "cplus.met"
                _retValue =_ptTree0;
#line 2019 "cplus.met"
                goto short_long_int_char_ret;
#line 2019 "cplus.met"
            }
#line 2019 "cplus.met"
            break;
#line 2019 "cplus.met"
#line 2020 "cplus.met"
        case LONG : 
#line 2020 "cplus.met"
#line 2020 "cplus.met"
            {
#line 2020 "cplus.met"
                PPTREE _ptTree0=0;
#line 2020 "cplus.met"
                if ( (_ptTree0=NQUICK_CALL(_Tak(long_type)(error_free), 91, cplus))== (PPTREE) -1 ) {
#line 2020 "cplus.met"
                    MulFreeTree(1,_ptTree0);
                    PROG_EXIT(short_long_int_char_exit,"short_long_int_char")
#line 2020 "cplus.met"
                }
#line 2020 "cplus.met"
                _retValue =_ptTree0;
#line 2020 "cplus.met"
                goto short_long_int_char_ret;
#line 2020 "cplus.met"
            }
#line 2020 "cplus.met"
            break;
#line 2020 "cplus.met"
#line 2021 "cplus.met"
        case SHORT : 
#line 2021 "cplus.met"
            tokenAhead = 0 ;
#line 2021 "cplus.met"
            CommTerm();
#line 2021 "cplus.met"
#line 2022 "cplus.met"
            if (inside_long){
#line 2022 "cplus.met"
#line 2023 "cplus.met"
                
#line 2023 "cplus.met"
                LEX_EXIT ("",0);
#line 2023 "cplus.met"
                goto short_long_int_char_exit;
#line 2023 "cplus.met"
#line 2023 "cplus.met"
            } else {
#line 2023 "cplus.met"
#line 2025 "cplus.met"
#line 2026 "cplus.met"
                (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 2026 "cplus.met"
                switch( lexEl.Value) {
#line 2026 "cplus.met"
#line 2027 "cplus.met"
                    case INT : 
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
                                PPTREE _ptTree1=0,_ptRes1=0;
#line 2027 "cplus.met"
                                _ptRes1= MakeTree(TSHORT, 1);
#line 2027 "cplus.met"
                                {
#line 2027 "cplus.met"
                                    PPTREE _ptRes2=0;
#line 2027 "cplus.met"
                                    _ptRes2= MakeTree(TINT, 0);
#line 2027 "cplus.met"
                                    _ptTree1=_ptRes2;
#line 2027 "cplus.met"
                                }
#line 2027 "cplus.met"
                                ReplaceTree(_ptRes1, 1, _ptTree1);
#line 2027 "cplus.met"
                                _ptTree0=_ptRes1;
#line 2027 "cplus.met"
                            }
#line 2027 "cplus.met"
                            _retValue =_ptTree0;
#line 2027 "cplus.met"
                            goto short_long_int_char_ret;
#line 2027 "cplus.met"
                        }
#line 2027 "cplus.met"
                        break;
#line 2027 "cplus.met"
#line 2028 "cplus.met"
                    default : 
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
                                _ptRes1= MakeTree(TSHORT, 1);
#line 2028 "cplus.met"
                                _ptTree0=_ptRes1;
#line 2028 "cplus.met"
                            }
#line 2028 "cplus.met"
                            _retValue =_ptTree0;
#line 2028 "cplus.met"
                            goto short_long_int_char_ret;
#line 2028 "cplus.met"
                        }
#line 2028 "cplus.met"
                        break;
#line 2028 "cplus.met"
                }
#line 2028 "cplus.met"
#line 2028 "cplus.met"
            }
#line 2028 "cplus.met"
            break;
#line 2028 "cplus.met"
#line 2031 "cplus.met"
        case SIGNED : 
#line 2031 "cplus.met"
#line 2031 "cplus.met"
            {
#line 2031 "cplus.met"
                PPTREE _ptTree0=0;
#line 2031 "cplus.met"
                if ( (_ptTree0=NQUICK_CALL(_Tak(signed_type)(error_free), 129, cplus))== (PPTREE) -1 ) {
#line 2031 "cplus.met"
                    MulFreeTree(1,_ptTree0);
                    PROG_EXIT(short_long_int_char_exit,"short_long_int_char")
#line 2031 "cplus.met"
                }
#line 2031 "cplus.met"
                _retValue =_ptTree0;
#line 2031 "cplus.met"
                goto short_long_int_char_ret;
#line 2031 "cplus.met"
            }
#line 2031 "cplus.met"
            break;
#line 2031 "cplus.met"
#line 2032 "cplus.met"
        case UNSIGNED : 
#line 2032 "cplus.met"
#line 2032 "cplus.met"
            {
#line 2032 "cplus.met"
                PPTREE _ptTree0=0;
#line 2032 "cplus.met"
                if ( (_ptTree0=NQUICK_CALL(_Tak(unsigned_type)(error_free), 151, cplus))== (PPTREE) -1 ) {
#line 2032 "cplus.met"
                    MulFreeTree(1,_ptTree0);
                    PROG_EXIT(short_long_int_char_exit,"short_long_int_char")
#line 2032 "cplus.met"
                }
#line 2032 "cplus.met"
                _retValue =_ptTree0;
#line 2032 "cplus.met"
                goto short_long_int_char_ret;
#line 2032 "cplus.met"
            }
#line 2032 "cplus.met"
            break;
#line 2032 "cplus.met"
        default :
#line 2032 "cplus.met"
            CASE_EXIT(short_long_int_char_exit,"either int or char or long or short or signed or unsigned")
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
short_long_int_char_exit :
#line 2033 "cplus.met"

#line 2033 "cplus.met"
    _Debug = TRACE_RULE("short_long_int_char",TRACE_EXIT,(PPTREE)0);
#line 2033 "cplus.met"
    _funcLevel--;
#line 2033 "cplus.met"
    return((PPTREE) -1) ;
#line 2033 "cplus.met"

#line 2033 "cplus.met"
short_long_int_char_ret :
#line 2033 "cplus.met"
    
#line 2033 "cplus.met"
    _Debug = TRACE_RULE("short_long_int_char",TRACE_RETURN,_retValue);
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
#line 2036 "cplus.met"
PPTREE cplus::signed_type ( int error_free)
#line 2036 "cplus.met"
{
#line 2036 "cplus.met"
    int  _oldinside_signed = inside_signed;
#line 2036 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 2036 "cplus.met"
    int _value,_nbPre = 0 ;
#line 2036 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 2036 "cplus.met"
    int _Debug = TRACE_RULE("signed_type",TRACE_ENTER,(PPTREE)0);
#line 2036 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 2036 "cplus.met"
#line 2036 "cplus.met"
    PPTREE retTree = (PPTREE) 0;
#line 2036 "cplus.met"
#line 2038 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 2038 "cplus.met"
    if (  !SEE_TOKEN( SIGNED,"signed") || !(CommTerm(),1)) {
#line 2038 "cplus.met"
        MulFreeTree(1,retTree);
        TOKEN_EXIT(signed_type_exit,"signed")
#line 2038 "cplus.met"
    } else {
#line 2038 "cplus.met"
        tokenAhead = 0 ;
#line 2038 "cplus.met"
    }
#line 2038 "cplus.met"
#line 2039 "cplus.met"
    {
#line 2039 "cplus.met"
        inside_signed = 1 ;
#line 2039 "cplus.met"
#line 2040 "cplus.met"
#line 2041 "cplus.met"
        if (NPUSH_CALL_AFF_VERIF(retTree = ,_Tak(short_long_int_char), 128, cplus)){
#line 2041 "cplus.met"
#line 2042 "cplus.met"
            {
#line 2042 "cplus.met"
                PPTREE _ptTree0=0;
#line 2042 "cplus.met"
                {
#line 2042 "cplus.met"
                    PPTREE _ptRes1=0;
#line 2042 "cplus.met"
                    _ptRes1= MakeTree(TSIGNED, 1);
#line 2042 "cplus.met"
                    ReplaceTree(_ptRes1, 1, retTree );
#line 2042 "cplus.met"
                    _ptTree0=_ptRes1;
#line 2042 "cplus.met"
                }
#line 2042 "cplus.met"
                _retValue =_ptTree0;
#line 2042 "cplus.met"
                goto signed_type_ret;
#line 2042 "cplus.met"
            }
#line 2042 "cplus.met"
        } else {
#line 2042 "cplus.met"
#line 2044 "cplus.met"
            {
#line 2044 "cplus.met"
                PPTREE _ptTree0=0;
#line 2044 "cplus.met"
                {
#line 2044 "cplus.met"
                    PPTREE _ptRes1=0;
#line 2044 "cplus.met"
                    _ptRes1= MakeTree(TSIGNED, 1);
#line 2044 "cplus.met"
                    _ptTree0=_ptRes1;
#line 2044 "cplus.met"
                }
#line 2044 "cplus.met"
                _retValue =_ptTree0;
#line 2044 "cplus.met"
                goto signed_type_ret;
#line 2044 "cplus.met"
            }
#line 2044 "cplus.met"
        }
#line 2044 "cplus.met"
#line 2044 "cplus.met"
        inside_signed =  _oldinside_signed;
#line 2044 "cplus.met"
    }
#line 2044 "cplus.met"
#line 2044 "cplus.met"
#line 2045 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2045 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 2045 "cplus.met"
inside_signed =  _oldinside_signed;
#line 2045 "cplus.met"
return((PPTREE) 0);
#line 2045 "cplus.met"

#line 2045 "cplus.met"
signed_type_exit :
#line 2045 "cplus.met"

#line 2045 "cplus.met"
    _Debug = TRACE_RULE("signed_type",TRACE_EXIT,(PPTREE)0);
#line 2045 "cplus.met"
    _funcLevel--;
#line 2045 "cplus.met"
    inside_signed =  _oldinside_signed;
#line 2045 "cplus.met"
    return((PPTREE) -1) ;
#line 2045 "cplus.met"

#line 2045 "cplus.met"
signed_type_ret :
#line 2045 "cplus.met"
    
#line 2045 "cplus.met"
    _Debug = TRACE_RULE("signed_type",TRACE_RETURN,_retValue);
#line 2045 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2045 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 2045 "cplus.met"
    inside_signed =  _oldinside_signed;
#line 2045 "cplus.met"
    return _retValue ;
#line 2045 "cplus.met"
}
#line 2045 "cplus.met"

#line 2045 "cplus.met"
#line 1995 "cplus.met"
PPTREE cplus::simple_type ( int error_free)
#line 1995 "cplus.met"
{
#line 1995 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 1995 "cplus.met"
    int _value,_nbPre = 0 ;
#line 1995 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 1995 "cplus.met"
    int _Debug = TRACE_RULE("simple_type",TRACE_ENTER,(PPTREE)0);
#line 1995 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 1995 "cplus.met"
#line 1995 "cplus.met"
    PPTREE valTree = (PPTREE) 0;
#line 1995 "cplus.met"
#line 1997 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 1997 "cplus.met"
    switch( lexEl.Value) {
#line 1997 "cplus.met"
#line 1998 "cplus.met"
        case TYPENAME : 
#line 1998 "cplus.met"
            tokenAhead = 0 ;
#line 1998 "cplus.met"
            CommTerm();
#line 1998 "cplus.met"
#line 1998 "cplus.met"
            {
#line 1998 "cplus.met"
                PPTREE _ptTree0=0;
#line 1998 "cplus.met"
                {
#line 1998 "cplus.met"
                    PPTREE _ptTree1=0,_ptRes1=0;
#line 1998 "cplus.met"
                    _ptRes1= MakeTree(TYPENAME, 1);
#line 1998 "cplus.met"
                    {
#line 1998 "cplus.met"
                        PPTREE _ptTree2=0,_ptRes2=0;
#line 1998 "cplus.met"
                        _ptRes2= MakeTree(TIDENT, 1);
#line 1998 "cplus.met"
                        if ( (_ptTree2=NQUICK_CALL(_Tak(complete_class_name)(error_free), 27, cplus))== (PPTREE) -1 ) {
#line 1998 "cplus.met"
                            MulFreeTree(6,_ptRes2,_ptTree2,_ptRes1,_ptTree1,_ptTree0,valTree);
                            PROG_EXIT(simple_type_exit,"simple_type")
#line 1998 "cplus.met"
                        }
#line 1998 "cplus.met"
                        ReplaceTree(_ptRes2, 1, _ptTree2);
#line 1998 "cplus.met"
                        _ptTree1=_ptRes2;
#line 1998 "cplus.met"
                    }
#line 1998 "cplus.met"
                    ReplaceTree(_ptRes1, 1, _ptTree1);
#line 1998 "cplus.met"
                    _ptTree0=_ptRes1;
#line 1998 "cplus.met"
                }
#line 1998 "cplus.met"
                _retValue =_ptTree0;
#line 1998 "cplus.met"
                goto simple_type_ret;
#line 1998 "cplus.met"
            }
#line 1998 "cplus.met"
            break;
#line 1998 "cplus.met"
#line 1999 "cplus.met"
        case DECLTYPE : 
#line 1999 "cplus.met"
            tokenAhead = 0 ;
#line 1999 "cplus.met"
            CommTerm();
#line 1999 "cplus.met"
#line 2000 "cplus.met"
#line 2001 "cplus.met"
            (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 2001 "cplus.met"
            if (  !SEE_TOKEN( POUV,"(") || !(CommTerm(),1)) {
#line 2001 "cplus.met"
                MulFreeTree(1,valTree);
                TOKEN_EXIT(simple_type_exit,"(")
#line 2001 "cplus.met"
            } else {
#line 2001 "cplus.met"
                tokenAhead = 0 ;
#line 2001 "cplus.met"
            }
#line 2001 "cplus.met"
#line 2002 "cplus.met"
            {
#line 2002 "cplus.met"
                PPTREE _ptTree0=0,_ptRes0=0;
#line 2002 "cplus.met"
                _ptRes0= MakeTree(DECL_TYPE, 1);
#line 2002 "cplus.met"
                if ( (_ptTree0=NQUICK_CALL(_Tak(postfix_expression)(error_free), 109, cplus))== (PPTREE) -1 ) {
#line 2002 "cplus.met"
                    MulFreeTree(3,_ptRes0,_ptTree0,valTree);
                    PROG_EXIT(simple_type_exit,"simple_type")
#line 2002 "cplus.met"
                }
#line 2002 "cplus.met"
                ReplaceTree(_ptRes0, 1, _ptTree0);
#line 2002 "cplus.met"
                valTree=_ptRes0;
#line 2002 "cplus.met"
            }
#line 2002 "cplus.met"
#line 2003 "cplus.met"
            (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 2003 "cplus.met"
            if (  !SEE_TOKEN( PFER,")") || !(CommTerm(),1)) {
#line 2003 "cplus.met"
                MulFreeTree(1,valTree);
                TOKEN_EXIT(simple_type_exit,")")
#line 2003 "cplus.met"
            } else {
#line 2003 "cplus.met"
                tokenAhead = 0 ;
#line 2003 "cplus.met"
            }
#line 2003 "cplus.met"
#line 2004 "cplus.met"
            {
#line 2004 "cplus.met"
                _retValue = valTree ;
#line 2004 "cplus.met"
                goto simple_type_ret;
#line 2004 "cplus.met"
                
#line 2004 "cplus.met"
            }
#line 2004 "cplus.met"
#line 2004 "cplus.met"
            break;
#line 2004 "cplus.met"
#line 2006 "cplus.met"
        case AUTO : 
#line 2006 "cplus.met"
            tokenAhead = 0 ;
#line 2006 "cplus.met"
            CommTerm();
#line 2006 "cplus.met"
#line 2006 "cplus.met"
            {
#line 2006 "cplus.met"
                PPTREE _ptTree0=0;
#line 2006 "cplus.met"
                {
#line 2006 "cplus.met"
                    PPTREE _ptRes1=0;
#line 2006 "cplus.met"
                    _ptRes1= MakeTree(AUTO, 0);
#line 2006 "cplus.met"
                    _ptTree0=_ptRes1;
#line 2006 "cplus.met"
                }
#line 2006 "cplus.met"
                _retValue =_ptTree0;
#line 2006 "cplus.met"
                goto simple_type_ret;
#line 2006 "cplus.met"
            }
#line 2006 "cplus.met"
            break;
#line 2006 "cplus.met"
#line 2007 "cplus.met"
        case DOUBLE : 
#line 2007 "cplus.met"
            tokenAhead = 0 ;
#line 2007 "cplus.met"
            CommTerm();
#line 2007 "cplus.met"
#line 2007 "cplus.met"
            {
#line 2007 "cplus.met"
                PPTREE _ptTree0=0;
#line 2007 "cplus.met"
                {
#line 2007 "cplus.met"
                    PPTREE _ptRes1=0;
#line 2007 "cplus.met"
                    _ptRes1= MakeTree(TDOUBLE, 0);
#line 2007 "cplus.met"
                    _ptTree0=_ptRes1;
#line 2007 "cplus.met"
                }
#line 2007 "cplus.met"
                _retValue =_ptTree0;
#line 2007 "cplus.met"
                goto simple_type_ret;
#line 2007 "cplus.met"
            }
#line 2007 "cplus.met"
            break;
#line 2007 "cplus.met"
#line 2008 "cplus.met"
        case FLOAT : 
#line 2008 "cplus.met"
            tokenAhead = 0 ;
#line 2008 "cplus.met"
            CommTerm();
#line 2008 "cplus.met"
#line 2008 "cplus.met"
            {
#line 2008 "cplus.met"
                PPTREE _ptTree0=0;
#line 2008 "cplus.met"
                {
#line 2008 "cplus.met"
                    PPTREE _ptRes1=0;
#line 2008 "cplus.met"
                    _ptRes1= MakeTree(TFLOAT, 0);
#line 2008 "cplus.met"
                    _ptTree0=_ptRes1;
#line 2008 "cplus.met"
                }
#line 2008 "cplus.met"
                _retValue =_ptTree0;
#line 2008 "cplus.met"
                goto simple_type_ret;
#line 2008 "cplus.met"
            }
#line 2008 "cplus.met"
            break;
#line 2008 "cplus.met"
#line 2009 "cplus.met"
        case VOID : 
#line 2009 "cplus.met"
            tokenAhead = 0 ;
#line 2009 "cplus.met"
            CommTerm();
#line 2009 "cplus.met"
#line 2009 "cplus.met"
            {
#line 2009 "cplus.met"
                PPTREE _ptTree0=0;
#line 2009 "cplus.met"
                {
#line 2009 "cplus.met"
                    PPTREE _ptRes1=0;
#line 2009 "cplus.met"
                    _ptRes1= MakeTree(VOID, 0);
#line 2009 "cplus.met"
                    _ptTree0=_ptRes1;
#line 2009 "cplus.met"
                }
#line 2009 "cplus.met"
                _retValue =_ptTree0;
#line 2009 "cplus.met"
                goto simple_type_ret;
#line 2009 "cplus.met"
            }
#line 2009 "cplus.met"
            break;
#line 2009 "cplus.met"
#line 2010 "cplus.met"
        case DPOIDPOI : 
#line 2010 "cplus.met"
#line 2010 "cplus.met"
            {
#line 2010 "cplus.met"
                PPTREE _ptTree0=0;
#line 2010 "cplus.met"
                {
#line 2010 "cplus.met"
                    PPTREE _ptTree1=0,_ptRes1=0;
#line 2010 "cplus.met"
                    _ptRes1= MakeTree(TIDENT, 1);
#line 2010 "cplus.met"
                    if ( (_ptTree1=NQUICK_CALL(_Tak(complete_class_name)(error_free), 27, cplus))== (PPTREE) -1 ) {
#line 2010 "cplus.met"
                        MulFreeTree(4,_ptRes1,_ptTree1,_ptTree0,valTree);
                        PROG_EXIT(simple_type_exit,"simple_type")
#line 2010 "cplus.met"
                    }
#line 2010 "cplus.met"
                    ReplaceTree(_ptRes1, 1, _ptTree1);
#line 2010 "cplus.met"
                    _ptTree0=_ptRes1;
#line 2010 "cplus.met"
                }
#line 2010 "cplus.met"
                _retValue =_ptTree0;
#line 2010 "cplus.met"
                goto simple_type_ret;
#line 2010 "cplus.met"
            }
#line 2010 "cplus.met"
            break;
#line 2010 "cplus.met"
#line 2011 "cplus.met"
        case META : 
#line 2011 "cplus.met"
        case IDENT : 
#line 2011 "cplus.met"
#line 2011 "cplus.met"
            {
#line 2011 "cplus.met"
                PPTREE _ptTree0=0;
#line 2011 "cplus.met"
                {
#line 2011 "cplus.met"
                    PPTREE _ptTree1=0,_ptRes1=0;
#line 2011 "cplus.met"
                    _ptRes1= MakeTree(TIDENT, 1);
#line 2011 "cplus.met"
                    if ( (_ptTree1=NQUICK_CALL(_Tak(complete_class_name)(error_free), 27, cplus))== (PPTREE) -1 ) {
#line 2011 "cplus.met"
                        MulFreeTree(4,_ptRes1,_ptTree1,_ptTree0,valTree);
                        PROG_EXIT(simple_type_exit,"simple_type")
#line 2011 "cplus.met"
                    }
#line 2011 "cplus.met"
                    ReplaceTree(_ptRes1, 1, _ptTree1);
#line 2011 "cplus.met"
                    _ptTree0=_ptRes1;
#line 2011 "cplus.met"
                }
#line 2011 "cplus.met"
                _retValue =_ptTree0;
#line 2011 "cplus.met"
                goto simple_type_ret;
#line 2011 "cplus.met"
            }
#line 2011 "cplus.met"
            break;
#line 2011 "cplus.met"
#line 2012 "cplus.met"
        default : 
#line 2012 "cplus.met"
#line 2012 "cplus.met"
            {
#line 2012 "cplus.met"
                PPTREE _ptTree0=0;
#line 2012 "cplus.met"
                if ( (_ptTree0=NQUICK_CALL(_Tak(short_long_int_char)(error_free), 128, cplus))== (PPTREE) -1 ) {
#line 2012 "cplus.met"
                    MulFreeTree(2,_ptTree0,valTree);
                    PROG_EXIT(simple_type_exit,"simple_type")
#line 2012 "cplus.met"
                }
#line 2012 "cplus.met"
                _retValue =_ptTree0;
#line 2012 "cplus.met"
                goto simple_type_ret;
#line 2012 "cplus.met"
            }
#line 2012 "cplus.met"
            break;
#line 2012 "cplus.met"
    }
#line 2012 "cplus.met"
#line 2012 "cplus.met"
#line 2013 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2013 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 2013 "cplus.met"
return((PPTREE) 0);
#line 2013 "cplus.met"

#line 2013 "cplus.met"
simple_type_exit :
#line 2013 "cplus.met"

#line 2013 "cplus.met"
    _Debug = TRACE_RULE("simple_type",TRACE_EXIT,(PPTREE)0);
#line 2013 "cplus.met"
    _funcLevel--;
#line 2013 "cplus.met"
    return((PPTREE) -1) ;
#line 2013 "cplus.met"

#line 2013 "cplus.met"
simple_type_ret :
#line 2013 "cplus.met"
    
#line 2013 "cplus.met"
    _Debug = TRACE_RULE("simple_type",TRACE_RETURN,_retValue);
#line 2013 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2013 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 2013 "cplus.met"
    return _retValue ;
#line 2013 "cplus.met"
}
#line 2013 "cplus.met"

#line 2013 "cplus.met"
#line 2865 "cplus.met"
PPTREE cplus::simple_type_name ( int error_free)
#line 2865 "cplus.met"
{
#line 2865 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 2865 "cplus.met"
    int _value,_nbPre = 0 ;
#line 2865 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 2865 "cplus.met"
    int _Debug = TRACE_RULE("simple_type_name",TRACE_ENTER,(PPTREE)0);
#line 2865 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 2865 "cplus.met"
#line 2866 "cplus.met"
    if (! ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN( IDENT,"IDENT"))){
#line 2866 "cplus.met"
#line 2867 "cplus.met"
        {
#line 2867 "cplus.met"
            PPTREE _ptTree0=0;
#line 2867 "cplus.met"
            if ( (_ptTree0=NQUICK_CALL(_Tak(simple_type)(error_free), 130, cplus))== (PPTREE) -1 ) {
#line 2867 "cplus.met"
                MulFreeTree(1,_ptTree0);
                PROG_EXIT(simple_type_name_exit,"simple_type_name")
#line 2867 "cplus.met"
            }
#line 2867 "cplus.met"
            _retValue =_ptTree0;
#line 2867 "cplus.met"
            goto simple_type_name_ret;
#line 2867 "cplus.met"
        }
#line 2867 "cplus.met"
    } else {
#line 2867 "cplus.met"
#line 2869 "cplus.met"
        
#line 2869 "cplus.met"
        LEX_EXIT ("",0);
#line 2869 "cplus.met"
        goto simple_type_name_exit;
#line 2869 "cplus.met"
    }
#line 2869 "cplus.met"
#line 2869 "cplus.met"
#line 2869 "cplus.met"

#line 2870 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2870 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 2870 "cplus.met"
return((PPTREE) 0);
#line 2870 "cplus.met"

#line 2870 "cplus.met"
simple_type_name_exit :
#line 2870 "cplus.met"

#line 2870 "cplus.met"
    _Debug = TRACE_RULE("simple_type_name",TRACE_EXIT,(PPTREE)0);
#line 2870 "cplus.met"
    _funcLevel--;
#line 2870 "cplus.met"
    return((PPTREE) -1) ;
#line 2870 "cplus.met"

#line 2870 "cplus.met"
simple_type_name_ret :
#line 2870 "cplus.met"
    
#line 2870 "cplus.met"
    _Debug = TRACE_RULE("simple_type_name",TRACE_RETURN,_retValue);
#line 2870 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2870 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 2870 "cplus.met"
    return _retValue ;
#line 2870 "cplus.met"
}
#line 2870 "cplus.met"

#line 2870 "cplus.met"
#line 2731 "cplus.met"
PPTREE cplus::sizeof_type ( int error_free)
#line 2731 "cplus.met"
{
#line 2731 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 2731 "cplus.met"
    int _value,_nbPre = 0 ;
#line 2731 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 2731 "cplus.met"
    int _Debug = TRACE_RULE("sizeof_type",TRACE_ENTER,(PPTREE)0);
#line 2731 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 2731 "cplus.met"
#line 2731 "cplus.met"
    PPTREE expTree = (PPTREE) 0;
#line 2731 "cplus.met"
#line 2733 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 2733 "cplus.met"
    if (  !SEE_TOKEN( POUV,"(") || !(CommTerm(),1)) {
#line 2733 "cplus.met"
        MulFreeTree(1,expTree);
        TOKEN_EXIT(sizeof_type_exit,"(")
#line 2733 "cplus.met"
    } else {
#line 2733 "cplus.met"
        tokenAhead = 0 ;
#line 2733 "cplus.met"
    }
#line 2733 "cplus.met"
#line 2734 "cplus.met"
    if ( (expTree=NQUICK_CALL(_Tak(type_name)(error_free), 146, cplus))== (PPTREE) -1 ) {
#line 2734 "cplus.met"
        MulFreeTree(1,expTree);
        PROG_EXIT(sizeof_type_exit,"sizeof_type")
#line 2734 "cplus.met"
    }
#line 2734 "cplus.met"
#line 2735 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 2735 "cplus.met"
    if (  !SEE_TOKEN( PFER,")") || !(CommTerm(),1)) {
#line 2735 "cplus.met"
        MulFreeTree(1,expTree);
        TOKEN_EXIT(sizeof_type_exit,")")
#line 2735 "cplus.met"
    } else {
#line 2735 "cplus.met"
        tokenAhead = 0 ;
#line 2735 "cplus.met"
    }
#line 2735 "cplus.met"
#line 2736 "cplus.met"
    {
#line 2736 "cplus.met"
        _retValue = expTree ;
#line 2736 "cplus.met"
        goto sizeof_type_ret;
#line 2736 "cplus.met"
        
#line 2736 "cplus.met"
    }
#line 2736 "cplus.met"
#line 2736 "cplus.met"
#line 2736 "cplus.met"

#line 2737 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2737 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 2737 "cplus.met"
return((PPTREE) 0);
#line 2737 "cplus.met"

#line 2737 "cplus.met"
sizeof_type_exit :
#line 2737 "cplus.met"

#line 2737 "cplus.met"
    _Debug = TRACE_RULE("sizeof_type",TRACE_EXIT,(PPTREE)0);
#line 2737 "cplus.met"
    _funcLevel--;
#line 2737 "cplus.met"
    return((PPTREE) -1) ;
#line 2737 "cplus.met"

#line 2737 "cplus.met"
sizeof_type_ret :
#line 2737 "cplus.met"
    
#line 2737 "cplus.met"
    _Debug = TRACE_RULE("sizeof_type",TRACE_RETURN,_retValue);
#line 2737 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2737 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 2737 "cplus.met"
    return _retValue ;
#line 2737 "cplus.met"
}
#line 2737 "cplus.met"

#line 2737 "cplus.met"
#line 967 "cplus.met"
PPTREE cplus::stat_all ( int error_free)
#line 967 "cplus.met"
{
#line 967 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 967 "cplus.met"
    int _value,_nbPre = 0 ;
#line 967 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 967 "cplus.met"
    int _Debug = TRACE_RULE("stat_all",TRACE_ENTER,(PPTREE)0);
#line 967 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 967 "cplus.met"
#line 967 "cplus.met"
    PPTREE stat = (PPTREE) 0;
#line 967 "cplus.met"
#line 969 "cplus.met"
    if (((((NPUSH_CALL_AFF_VERIF(stat = ,_Tak(statement), 138, cplus)) || 
#line 969 "cplus.met"
          (NPUSH_CALL_AFF_VERIF(stat = ,_Tak(data_declaration), 40, cplus))) || 
#line 969 "cplus.met"
         (NPUSH_CALL_AFF_VERIF(stat = ,_Tak(stat_dir), 134, cplus))) || 
#line 969 "cplus.met"
        (NPUSH_CALL_AFF_VERIF(stat = ,_Tak(exception), 58, cplus))) || 
#line 969 "cplus.met"
       (NPUSH_CALL_AFF_VERIF(stat = ,_Tak(ext_data_declaration), 71, cplus))){
#line 969 "cplus.met"
#line 970 "cplus.met"
        {
#line 970 "cplus.met"
            _retValue = stat ;
#line 970 "cplus.met"
            goto stat_all_ret;
#line 970 "cplus.met"
            
#line 970 "cplus.met"
        }
#line 970 "cplus.met"
    } else {
#line 970 "cplus.met"
#line 972 "cplus.met"
        {
#line 972 "cplus.met"
            PPTREE _ptTree0=0;
#line 972 "cplus.met"
            if ( (_ptTree0=NQUICK_CALL(_Tak(statement)(error_free), 138, cplus))== (PPTREE) -1 ) {
#line 972 "cplus.met"
                MulFreeTree(2,_ptTree0,stat);
                PROG_EXIT(stat_all_exit,"stat_all")
#line 972 "cplus.met"
            }
#line 972 "cplus.met"
            _retValue =_ptTree0;
#line 972 "cplus.met"
            goto stat_all_ret;
#line 972 "cplus.met"
        }
#line 972 "cplus.met"
    }
#line 972 "cplus.met"
#line 972 "cplus.met"
#line 972 "cplus.met"

#line 973 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 973 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 973 "cplus.met"
return((PPTREE) 0);
#line 973 "cplus.met"

#line 973 "cplus.met"
stat_all_exit :
#line 973 "cplus.met"

#line 973 "cplus.met"
    _Debug = TRACE_RULE("stat_all",TRACE_EXIT,(PPTREE)0);
#line 973 "cplus.met"
    _funcLevel--;
#line 973 "cplus.met"
    return((PPTREE) -1) ;
#line 973 "cplus.met"

#line 973 "cplus.met"
stat_all_ret :
#line 973 "cplus.met"
    
#line 973 "cplus.met"
    _Debug = TRACE_RULE("stat_all",TRACE_RETURN,_retValue);
#line 973 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 973 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 973 "cplus.met"
    return _retValue ;
#line 973 "cplus.met"
}
#line 973 "cplus.met"

#line 973 "cplus.met"
#line 1136 "cplus.met"
PPTREE cplus::stat_dir ( int error_free)
#line 1136 "cplus.met"
{
#line 1136 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 1136 "cplus.met"
    int _value,_nbPre = 0 ;
#line 1136 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 1136 "cplus.met"
    int _Debug = TRACE_RULE("stat_dir",TRACE_ENTER,(PPTREE)0);
#line 1136 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 1136 "cplus.met"
#line 1136 "cplus.met"
    PPTREE retTree = (PPTREE) 0;
#line 1136 "cplus.met"
#line 1138 "cplus.met"
    if (NPUSH_CALL_AFF_VERIF(retTree = ,_Tak(directive), 52, cplus)){
#line 1138 "cplus.met"
#line 1139 "cplus.met"
        {
#line 1139 "cplus.met"
            _retValue = retTree ;
#line 1139 "cplus.met"
            goto stat_dir_ret;
#line 1139 "cplus.met"
            
#line 1139 "cplus.met"
        }
#line 1139 "cplus.met"
    }
#line 1139 "cplus.met"
#line 1140 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 1140 "cplus.met"
    switch( lexEl.Value) {
#line 1140 "cplus.met"
#line 1141 "cplus.met"
        case META : 
#line 1141 "cplus.met"
        case IF_DIR : 
#line 1141 "cplus.met"
            tokenAhead = 0 ;
#line 1141 "cplus.met"
            CommTerm();
#line 1141 "cplus.met"
#line 1141 "cplus.met"
            {
#line 1141 "cplus.met"
                PPTREE _ptTree0=0;
#line 1141 "cplus.met"
                if ( (_ptTree0=NQUICK_CALL(_Tak(stat_if_dir)(error_free), 136, cplus))== (PPTREE) -1 ) {
#line 1141 "cplus.met"
                    MulFreeTree(2,_ptTree0,retTree);
                    PROG_EXIT(stat_dir_exit,"stat_dir")
#line 1141 "cplus.met"
                }
#line 1141 "cplus.met"
                _retValue =_ptTree0;
#line 1141 "cplus.met"
                goto stat_dir_ret;
#line 1141 "cplus.met"
            }
#line 1141 "cplus.met"
            break;
#line 1141 "cplus.met"
#line 1142 "cplus.met"
        case IFDEF_DIR : 
#line 1142 "cplus.met"
#line 1142 "cplus.met"
            {
#line 1142 "cplus.met"
                PPTREE _ptTree0=0;
#line 1142 "cplus.met"
                if ( (_ptTree0=NQUICK_CALL(_Tak(stat_ifdef_dir)(error_free), 137, cplus))== (PPTREE) -1 ) {
#line 1142 "cplus.met"
                    MulFreeTree(2,_ptTree0,retTree);
                    PROG_EXIT(stat_dir_exit,"stat_dir")
#line 1142 "cplus.met"
                }
#line 1142 "cplus.met"
                _retValue =_ptTree0;
#line 1142 "cplus.met"
                goto stat_dir_ret;
#line 1142 "cplus.met"
            }
#line 1142 "cplus.met"
            break;
#line 1142 "cplus.met"
#line 1143 "cplus.met"
        case IFNDEF_DIR : 
#line 1143 "cplus.met"
#line 1143 "cplus.met"
            {
#line 1143 "cplus.met"
                PPTREE _ptTree0=0;
#line 1143 "cplus.met"
                if ( (_ptTree0=NQUICK_CALL(_Tak(stat_ifdef_dir)(error_free), 137, cplus))== (PPTREE) -1 ) {
#line 1143 "cplus.met"
                    MulFreeTree(2,_ptTree0,retTree);
                    PROG_EXIT(stat_dir_exit,"stat_dir")
#line 1143 "cplus.met"
                }
#line 1143 "cplus.met"
                _retValue =_ptTree0;
#line 1143 "cplus.met"
                goto stat_dir_ret;
#line 1143 "cplus.met"
            }
#line 1143 "cplus.met"
            break;
#line 1143 "cplus.met"
        default :
#line 1143 "cplus.met"
            MulFreeTree(1,retTree);
            CASE_EXIT(stat_dir_exit,"either IF_DIR or IFDEF_DIR or IFNDEF_DIR")
#line 1143 "cplus.met"
            break;
#line 1143 "cplus.met"
    }
#line 1143 "cplus.met"
#line 1143 "cplus.met"
#line 1144 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1144 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 1144 "cplus.met"
return((PPTREE) 0);
#line 1144 "cplus.met"

#line 1144 "cplus.met"
stat_dir_exit :
#line 1144 "cplus.met"

#line 1144 "cplus.met"
    _Debug = TRACE_RULE("stat_dir",TRACE_EXIT,(PPTREE)0);
#line 1144 "cplus.met"
    _funcLevel--;
#line 1144 "cplus.met"
    return((PPTREE) -1) ;
#line 1144 "cplus.met"

#line 1144 "cplus.met"
stat_dir_ret :
#line 1144 "cplus.met"
    
#line 1144 "cplus.met"
    _Debug = TRACE_RULE("stat_dir",TRACE_RETURN,_retValue);
#line 1144 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1144 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 1144 "cplus.met"
    return _retValue ;
#line 1144 "cplus.met"
}
#line 1144 "cplus.met"

#line 1144 "cplus.met"
#line 3483 "cplus.met"
PPTREE cplus::stat_dir_switch ( int error_free)
#line 3483 "cplus.met"
{
#line 3483 "cplus.met"
    int  _oldswitchContext = switchContext;
#line 3483 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 3483 "cplus.met"
    int _value,_nbPre = 0 ;
#line 3483 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 3483 "cplus.met"
    int _Debug = TRACE_RULE("stat_dir_switch",TRACE_ENTER,(PPTREE)0);
#line 3483 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 3483 "cplus.met"
#line 3484 "cplus.met"
    {
#line 3484 "cplus.met"
        switchContext = 1 ;
#line 3484 "cplus.met"
#line 3485 "cplus.met"
        {
#line 3485 "cplus.met"
            PPTREE _ptTree0=0;
#line 3485 "cplus.met"
            if ( (_ptTree0=NQUICK_CALL(_Tak(stat_dir)(error_free), 134, cplus))== (PPTREE) -1 ) {
#line 3485 "cplus.met"
                MulFreeTree(1,_ptTree0);
                PROG_EXIT(stat_dir_switch_exit,"stat_dir_switch")
#line 3485 "cplus.met"
            }
#line 3485 "cplus.met"
            _retValue =_ptTree0;
#line 3485 "cplus.met"
            goto stat_dir_switch_ret;
#line 3485 "cplus.met"
        }
#line 3485 "cplus.met"
        switchContext =  _oldswitchContext;
#line 3485 "cplus.met"
    }
#line 3485 "cplus.met"
#line 3485 "cplus.met"
#line 3485 "cplus.met"

#line 3486 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 3486 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 3486 "cplus.met"
switchContext =  _oldswitchContext;
#line 3486 "cplus.met"
return((PPTREE) 0);
#line 3486 "cplus.met"

#line 3486 "cplus.met"
stat_dir_switch_exit :
#line 3486 "cplus.met"

#line 3486 "cplus.met"
    _Debug = TRACE_RULE("stat_dir_switch",TRACE_EXIT,(PPTREE)0);
#line 3486 "cplus.met"
    _funcLevel--;
#line 3486 "cplus.met"
    switchContext =  _oldswitchContext;
#line 3486 "cplus.met"
    return((PPTREE) -1) ;
#line 3486 "cplus.met"

#line 3486 "cplus.met"
stat_dir_switch_ret :
#line 3486 "cplus.met"
    
#line 3486 "cplus.met"
    _Debug = TRACE_RULE("stat_dir_switch",TRACE_RETURN,_retValue);
#line 3486 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 3486 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 3486 "cplus.met"
    switchContext =  _oldswitchContext;
#line 3486 "cplus.met"
    return _retValue ;
#line 3486 "cplus.met"
}
#line 3486 "cplus.met"

#line 3486 "cplus.met"
#line 1035 "cplus.met"
PPTREE cplus::stat_if_dir ( int error_free)
#line 1035 "cplus.met"
{
#line 1035 "cplus.met"
    int  _oldkeepCarriage = keepCarriage;
#line 1035 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 1035 "cplus.met"
    int _value,_nbPre = 0 ;
#line 1035 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 1035 "cplus.met"
    int _Debug = TRACE_RULE("stat_if_dir",TRACE_ENTER,(PPTREE)0);
#line 1035 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 1035 "cplus.met"
#line 1035 "cplus.met"
    PPTREE _addlist1 = (PPTREE) 0,_addlist2 = (PPTREE) 0;
#line 1035 "cplus.met"
#line 1035 "cplus.met"
    PPTREE retTree = (PPTREE) 0,list = (PPTREE) 0,list2 = (PPTREE) 0;
#line 1035 "cplus.met"
#line 1037 "cplus.met"
    {
#line 1037 "cplus.met"
        keepCarriage = 1 ;
#line 1037 "cplus.met"
#line 1038 "cplus.met"
#line 1039 "cplus.met"
        {
#line 1039 "cplus.met"
            PPTREE _ptTree0=0,_ptRes0=0;
#line 1039 "cplus.met"
            _ptRes0= MakeTree(IF_DIR, 3);
#line 1039 "cplus.met"
            if ( (_ptTree0=NQUICK_CALL(_Tak(expression)(error_free), 62, cplus))== (PPTREE) -1 ) {
#line 1039 "cplus.met"
                MulFreeTree(7,_ptRes0,_ptTree0,_addlist1,_addlist2,list,list2,retTree);
                PROG_EXIT(stat_if_dir_exit,"stat_if_dir")
#line 1039 "cplus.met"
            }
#line 1039 "cplus.met"
            ReplaceTree(_ptRes0, 1, _ptTree0);
#line 1039 "cplus.met"
            retTree=_ptRes0;
#line 1039 "cplus.met"
        }
#line 1039 "cplus.met"
#line 1040 "cplus.met"
        (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 1040 "cplus.met"
        if ( ! TERM_OR_META(CARRIAGE_RETURN,"CARRIAGE_RETURN") || !(CommTerm(),1)) {
#line 1040 "cplus.met"
            MulFreeTree(5,_addlist1,_addlist2,list,list2,retTree);
            TOKEN_EXIT(stat_if_dir_exit,"CARRIAGE_RETURN")
#line 1040 "cplus.met"
        } else {
#line 1040 "cplus.met"
            tokenAhead = 0 ;
#line 1040 "cplus.met"
        }
#line 1040 "cplus.met"
#line 1040 "cplus.met"
        keepCarriage =  _oldkeepCarriage;
#line 1040 "cplus.met"
    }
#line 1040 "cplus.met"
#line 1040 "cplus.met"
    _addlist1 = list ;
#line 1040 "cplus.met"
#line 1042 "cplus.met"
    while (((! ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN( ELSE_DIR,"ELSE_DIR"))) && 
#line 1042 "cplus.met"
           (! ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN( ELIF_DIR,"ELIF_DIR")))) && 
#line 1042 "cplus.met"
          (! ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN( ENDIF_DIR,"ENDIF_DIR")))) { 
#line 1042 "cplus.met"
#line 1043 "cplus.met"
#line 1043 "cplus.met"
        {
#line 1043 "cplus.met"
            PPTREE _ptTree0=0;
#line 1043 "cplus.met"
            if ( (_ptTree0=NQUICK_CALL(_Tak(stat_all)(error_free), 133, cplus))== (PPTREE) -1 ) {
#line 1043 "cplus.met"
                MulFreeTree(6,_ptTree0,_addlist1,_addlist2,list,list2,retTree);
                PROG_EXIT(stat_if_dir_exit,"stat_if_dir")
#line 1043 "cplus.met"
            }
#line 1043 "cplus.met"
            _addlist1 =AddList(_addlist1 , _ptTree0);
#line 1043 "cplus.met"
        }
#line 1043 "cplus.met"
#line 1043 "cplus.met"
        if (list){
#line 1043 "cplus.met"
#line 1043 "cplus.met"
            _addlist1 = SonTree (_addlist1 ,2 );
#line 1043 "cplus.met"
        } else {
#line 1043 "cplus.met"
#line 1043 "cplus.met"
            list = _addlist1 ;
#line 1043 "cplus.met"
        }
#line 1043 "cplus.met"
    } 
#line 1043 "cplus.met"
#line 1044 "cplus.met"
    {
#line 1044 "cplus.met"
        PPTREE _ptTree0=0;
#line 1044 "cplus.met"
        if ( (_ptTree0=NQUICK_CALL(_Tak(none_statement)(error_free), 103, cplus))== (PPTREE) -1 ) {
#line 1044 "cplus.met"
            MulFreeTree(6,_ptTree0,_addlist1,_addlist2,list,list2,retTree);
            PROG_EXIT(stat_if_dir_exit,"stat_if_dir")
#line 1044 "cplus.met"
        }
#line 1044 "cplus.met"
        list =AddList(list , _ptTree0);
#line 1044 "cplus.met"
    }
#line 1044 "cplus.met"
#line 1045 "cplus.met"
    ReplaceTree(retTree ,2 ,list );
#line 1045 "cplus.met"
#line 1046 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 1046 "cplus.met"
    switch( lexEl.Value) {
#line 1046 "cplus.met"
#line 1047 "cplus.met"
        case META : 
#line 1047 "cplus.met"
        case ELSE_DIR : 
#line 1047 "cplus.met"
            tokenAhead = 0 ;
#line 1047 "cplus.met"
            CommTerm();
#line 1047 "cplus.met"
#line 1048 "cplus.met"
#line 1048 "cplus.met"
            _addlist2 = list2 ;
#line 1048 "cplus.met"
#line 1049 "cplus.met"
            while (((tokenAhead && tokenAhead != -1)|| (c != EOF)) && 
#line 1049 "cplus.met"
                  (! ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN( ENDIF_DIR,"ENDIF_DIR")))) { 
#line 1049 "cplus.met"
#line 1050 "cplus.met"
#line 1050 "cplus.met"
                {
#line 1050 "cplus.met"
                    PPTREE _ptTree0=0;
#line 1050 "cplus.met"
                    if ( (_ptTree0=NQUICK_CALL(_Tak(stat_all)(error_free), 133, cplus))== (PPTREE) -1 ) {
#line 1050 "cplus.met"
                        MulFreeTree(6,_ptTree0,_addlist1,_addlist2,list,list2,retTree);
                        PROG_EXIT(stat_if_dir_exit,"stat_if_dir")
#line 1050 "cplus.met"
                    }
#line 1050 "cplus.met"
                    _addlist2 =AddList(_addlist2 , _ptTree0);
#line 1050 "cplus.met"
                }
#line 1050 "cplus.met"
#line 1050 "cplus.met"
                if (list2){
#line 1050 "cplus.met"
#line 1050 "cplus.met"
                    _addlist2 = SonTree (_addlist2 ,2 );
#line 1050 "cplus.met"
                } else {
#line 1050 "cplus.met"
#line 1050 "cplus.met"
                    list2 = _addlist2 ;
#line 1050 "cplus.met"
                }
#line 1050 "cplus.met"
            } 
#line 1050 "cplus.met"
#line 1051 "cplus.met"
            {
#line 1051 "cplus.met"
                PPTREE _ptTree0=0;
#line 1051 "cplus.met"
                if ( (_ptTree0=NQUICK_CALL(_Tak(none_statement)(error_free), 103, cplus))== (PPTREE) -1 ) {
#line 1051 "cplus.met"
                    MulFreeTree(6,_ptTree0,_addlist1,_addlist2,list,list2,retTree);
                    PROG_EXIT(stat_if_dir_exit,"stat_if_dir")
#line 1051 "cplus.met"
                }
#line 1051 "cplus.met"
                list2 =AddList(list2 , _ptTree0);
#line 1051 "cplus.met"
            }
#line 1051 "cplus.met"
#line 1052 "cplus.met"
            (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 1052 "cplus.met"
            if ( ! TERM_OR_META(ENDIF_DIR,"ENDIF_DIR") || !(CommTerm(),1)) {
#line 1052 "cplus.met"
                MulFreeTree(5,_addlist1,_addlist2,list,list2,retTree);
                TOKEN_EXIT(stat_if_dir_exit,"ENDIF_DIR")
#line 1052 "cplus.met"
            } else {
#line 1052 "cplus.met"
                tokenAhead = 0 ;
#line 1052 "cplus.met"
            }
#line 1052 "cplus.met"
#line 1053 "cplus.met"
            {
#line 1053 "cplus.met"
                PPTREE _ptTree0=0;
#line 1053 "cplus.met"
                _ptTree0=ReplaceTree(retTree ,3 ,list2 );
#line 1053 "cplus.met"
                _retValue =_ptTree0;
#line 1053 "cplus.met"
                goto stat_if_dir_ret;
#line 1053 "cplus.met"
            }
#line 1053 "cplus.met"
#line 1053 "cplus.met"
            break;
#line 1053 "cplus.met"
#line 1055 "cplus.met"
        case ELIF_DIR : 
#line 1055 "cplus.met"
            tokenAhead = 0 ;
#line 1055 "cplus.met"
            CommTerm();
#line 1055 "cplus.met"
#line 1055 "cplus.met"
            {
#line 1055 "cplus.met"
                PPTREE _ptTree0=0;
#line 1055 "cplus.met"
                {
#line 1055 "cplus.met"
                    PPTREE _ptTree1=0;
#line 1055 "cplus.met"
                    if ( (_ptTree1=NQUICK_CALL(_Tak(stat_if_dir)(error_free), 136, cplus))== (PPTREE) -1 ) {
#line 1055 "cplus.met"
                        MulFreeTree(7,_ptTree1,_ptTree0,_addlist1,_addlist2,list,list2,retTree);
                        PROG_EXIT(stat_if_dir_exit,"stat_if_dir")
#line 1055 "cplus.met"
                    }
#line 1055 "cplus.met"
                    _ptTree0=ReplaceTree(retTree , 3 , _ptTree1);
#line 1055 "cplus.met"
                }
#line 1055 "cplus.met"
                _retValue =_ptTree0;
#line 1055 "cplus.met"
                goto stat_if_dir_ret;
#line 1055 "cplus.met"
            }
#line 1055 "cplus.met"
            break;
#line 1055 "cplus.met"
#line 1056 "cplus.met"
        case ENDIF_DIR : 
#line 1056 "cplus.met"
            tokenAhead = 0 ;
#line 1056 "cplus.met"
            CommTerm();
#line 1056 "cplus.met"
#line 1056 "cplus.met"
            {
#line 1056 "cplus.met"
                _retValue = retTree ;
#line 1056 "cplus.met"
                goto stat_if_dir_ret;
#line 1056 "cplus.met"
                
#line 1056 "cplus.met"
            }
#line 1056 "cplus.met"
            break;
#line 1056 "cplus.met"
        default :
#line 1056 "cplus.met"
            MulFreeTree(5,_addlist1,_addlist2,list,list2,retTree);
            CASE_EXIT(stat_if_dir_exit,"either ELSE_DIR or ELIF_DIR or ENDIF_DIR")
#line 1056 "cplus.met"
            break;
#line 1056 "cplus.met"
    }
#line 1056 "cplus.met"
#line 1056 "cplus.met"
#line 1057 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1057 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 1057 "cplus.met"
keepCarriage =  _oldkeepCarriage;
#line 1057 "cplus.met"
return((PPTREE) 0);
#line 1057 "cplus.met"

#line 1057 "cplus.met"
stat_if_dir_exit :
#line 1057 "cplus.met"

#line 1057 "cplus.met"
    _Debug = TRACE_RULE("stat_if_dir",TRACE_EXIT,(PPTREE)0);
#line 1057 "cplus.met"
    _funcLevel--;
#line 1057 "cplus.met"
    keepCarriage =  _oldkeepCarriage;
#line 1057 "cplus.met"
    return((PPTREE) -1) ;
#line 1057 "cplus.met"

#line 1057 "cplus.met"
stat_if_dir_ret :
#line 1057 "cplus.met"
    
#line 1057 "cplus.met"
    _Debug = TRACE_RULE("stat_if_dir",TRACE_RETURN,_retValue);
#line 1057 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1057 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 1057 "cplus.met"
    keepCarriage =  _oldkeepCarriage;
#line 1057 "cplus.met"
    return _retValue ;
#line 1057 "cplus.met"
}
#line 1057 "cplus.met"

#line 1057 "cplus.met"
