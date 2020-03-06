/*************************************************************************/
/*                                                                       */
/*        Produced by MetaGen version 2.0  -    1989-2006                 */
/*       Syntaxic Analyzer Meta Generator developped by                  */
/*                  Eric Lavillonniere                                   */
/*                                                                       */
/*************************************************************************/

#include "token.h"
#include "cplus.h"


#line 2072 "cplus.met"
PPTREE cplus::range_in_liste ( int error_free)
#line 2072 "cplus.met"
{
#line 2072 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 2072 "cplus.met"
    int _value,_nbPre = 0 ;
#line 2072 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 2072 "cplus.met"
    int _Debug = TRACE_RULE("range_in_liste",TRACE_ENTER,(PPTREE)0);
#line 2072 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 2072 "cplus.met"
#line 2072 "cplus.met"
    PPTREE retTree = (PPTREE) 0;
#line 2072 "cplus.met"
#line 2074 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 2074 "cplus.met"
    if ( ! TERM_OR_META(IDENT,"IDENT") || !(BUILD_TERM_META(retTree))) {
#line 2074 "cplus.met"
        MulFreeTree(1,retTree);
        TOKEN_EXIT(range_in_liste_exit,"IDENT")
#line 2074 "cplus.met"
    } else {
#line 2074 "cplus.met"
        tokenAhead = 0 ;
#line 2074 "cplus.met"
    }
#line 2074 "cplus.met"
#line 2075 "cplus.met"
    if ( IsRange(lexEl.string())){
#line 2075 "cplus.met"
#line 2076 "cplus.met"
        {
#line 2076 "cplus.met"
            _retValue = retTree ;
#line 2076 "cplus.met"
            goto range_in_liste_ret;
#line 2076 "cplus.met"
            
#line 2076 "cplus.met"
        }
#line 2076 "cplus.met"
    } else {
#line 2076 "cplus.met"
#line 2078 "cplus.met"
        
#line 2078 "cplus.met"
        MulFreeTree(1,retTree);
        LEX_EXIT ("",0);
#line 2078 "cplus.met"
        goto range_in_liste_exit;
#line 2078 "cplus.met"
    }
#line 2078 "cplus.met"
#line 2078 "cplus.met"
#line 2078 "cplus.met"

#line 2079 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2079 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 2079 "cplus.met"
return((PPTREE) 0);
#line 2079 "cplus.met"

#line 2079 "cplus.met"
range_in_liste_exit :
#line 2079 "cplus.met"

#line 2079 "cplus.met"
    _Debug = TRACE_RULE("range_in_liste",TRACE_EXIT,(PPTREE)0);
#line 2079 "cplus.met"
    _funcLevel--;
#line 2079 "cplus.met"
    return((PPTREE) -1) ;
#line 2079 "cplus.met"

#line 2079 "cplus.met"
range_in_liste_ret :
#line 2079 "cplus.met"
    
#line 2079 "cplus.met"
    _Debug = TRACE_RULE("range_in_liste",TRACE_RETURN,_retValue);
#line 2079 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2079 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 2079 "cplus.met"
    return _retValue ;
#line 2079 "cplus.met"
}
#line 2079 "cplus.met"

#line 2079 "cplus.met"
#line 2116 "cplus.met"
PPTREE cplus::range_modifier ( int error_free)
#line 2116 "cplus.met"
{
#line 2116 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 2116 "cplus.met"
    int _value,_nbPre = 0 ;
#line 2116 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 2116 "cplus.met"
    int _Debug = TRACE_RULE("range_modifier",TRACE_ENTER,(PPTREE)0);
#line 2116 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 2116 "cplus.met"
#line 2116 "cplus.met"
    PPTREE retTree = (PPTREE) 0;
#line 2116 "cplus.met"
#line 2118 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 2118 "cplus.met"
    switch( lexEl.Value) {
#line 2118 "cplus.met"
#line 2119 "cplus.met"
        case META : 
#line 2119 "cplus.met"
        case IDENT : 
#line 2119 "cplus.met"
#line 2119 "cplus.met"
            {
#line 2119 "cplus.met"
                PPTREE _ptTree0=0;
#line 2119 "cplus.met"
                {
#line 2119 "cplus.met"
                    PPTREE _ptTree1=0,_ptRes1=0;
#line 2119 "cplus.met"
                    _ptRes1= MakeTree(RANGE_MODIFIER, 2);
#line 2119 "cplus.met"
                    if ( (_ptTree1=NQUICK_CALL(_Tak(range_in_liste)(error_free), 120, cplus))== (PPTREE) -1 ) {
#line 2119 "cplus.met"
                        MulFreeTree(4,_ptRes1,_ptTree1,_ptTree0,retTree);
                        PROG_EXIT(range_modifier_exit,"range_modifier")
#line 2119 "cplus.met"
                    }
#line 2119 "cplus.met"
                    ReplaceTree(_ptRes1, 1, _ptTree1);
#line 2119 "cplus.met"
                    _ptTree0=_ptRes1;
#line 2119 "cplus.met"
                }
#line 2119 "cplus.met"
                _retValue =_ptTree0;
#line 2119 "cplus.met"
                goto range_modifier_ret;
#line 2119 "cplus.met"
            }
#line 2119 "cplus.met"
            break;
#line 2119 "cplus.met"
#line 2120 "cplus.met"
        case VOLATILE : 
#line 2120 "cplus.met"
#line 2120 "cplus.met"
            {
#line 2120 "cplus.met"
                PPTREE _ptTree0=0;
#line 2120 "cplus.met"
                {
#line 2120 "cplus.met"
                    PPTREE _ptTree1=0,_ptRes1=0;
#line 2120 "cplus.met"
                    _ptRes1= MakeTree(RANGE_MODIFIER, 2);
#line 2120 "cplus.met"
                    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 2120 "cplus.met"
                    if (  !SEE_TOKEN( VOLATILE,"volatile") || !(_ptTree1 = CommString(lexEl.string()))) {
#line 2120 "cplus.met"
                        MulFreeTree(4,_ptRes1,_ptTree1,_ptTree0,retTree);
                        TOKEN_EXIT(range_modifier_exit,"volatile")
#line 2120 "cplus.met"
                    } else {
#line 2120 "cplus.met"
                        tokenAhead = 0 ;
#line 2120 "cplus.met"
                    }
#line 2120 "cplus.met"
                    ReplaceTree(_ptRes1, 1, _ptTree1);
#line 2120 "cplus.met"
                    _ptTree0=_ptRes1;
#line 2120 "cplus.met"
                }
#line 2120 "cplus.met"
                _retValue =_ptTree0;
#line 2120 "cplus.met"
                goto range_modifier_ret;
#line 2120 "cplus.met"
            }
#line 2120 "cplus.met"
            break;
#line 2120 "cplus.met"
#line 2121 "cplus.met"
        case REGISTER : 
#line 2121 "cplus.met"
#line 2121 "cplus.met"
            {
#line 2121 "cplus.met"
                PPTREE _ptTree0=0;
#line 2121 "cplus.met"
                {
#line 2121 "cplus.met"
                    PPTREE _ptTree1=0,_ptRes1=0;
#line 2121 "cplus.met"
                    _ptRes1= MakeTree(RANGE_MODIFIER, 2);
#line 2121 "cplus.met"
                    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 2121 "cplus.met"
                    if (  !SEE_TOKEN( REGISTER,"register") || !(_ptTree1 = CommString(lexEl.string()))) {
#line 2121 "cplus.met"
                        MulFreeTree(4,_ptRes1,_ptTree1,_ptTree0,retTree);
                        TOKEN_EXIT(range_modifier_exit,"register")
#line 2121 "cplus.met"
                    } else {
#line 2121 "cplus.met"
                        tokenAhead = 0 ;
#line 2121 "cplus.met"
                    }
#line 2121 "cplus.met"
                    ReplaceTree(_ptRes1, 1, _ptTree1);
#line 2121 "cplus.met"
                    _ptTree0=_ptRes1;
#line 2121 "cplus.met"
                }
#line 2121 "cplus.met"
                _retValue =_ptTree0;
#line 2121 "cplus.met"
                goto range_modifier_ret;
#line 2121 "cplus.met"
            }
#line 2121 "cplus.met"
            break;
#line 2121 "cplus.met"
#line 2122 "cplus.met"
        case __ATTRIBUTE__ : 
#line 2122 "cplus.met"
#line 2123 "cplus.met"
#line 2124 "cplus.met"
            {
#line 2124 "cplus.met"
                PPTREE _ptTree0=0;
#line 2124 "cplus.met"
                {
#line 2124 "cplus.met"
                    PPTREE _ptTree1=0,_ptRes1=0;
#line 2124 "cplus.met"
                    _ptRes1= MakeTree(RANGE_MODIFIER, 2);
#line 2124 "cplus.met"
                    if ( (_ptTree1=NQUICK_CALL(_Tak(attribute_call)(error_free), 17, cplus))== (PPTREE) -1 ) {
#line 2124 "cplus.met"
                        MulFreeTree(4,_ptRes1,_ptTree1,_ptTree0,retTree);
                        PROG_EXIT(range_modifier_exit,"range_modifier")
#line 2124 "cplus.met"
                    }
#line 2124 "cplus.met"
                    ReplaceTree(_ptRes1, 1, _ptTree1);
#line 2124 "cplus.met"
                    _ptTree0=_ptRes1;
#line 2124 "cplus.met"
                }
#line 2124 "cplus.met"
                _retValue =_ptTree0;
#line 2124 "cplus.met"
                goto range_modifier_ret;
#line 2124 "cplus.met"
            }
#line 2124 "cplus.met"
#line 2124 "cplus.met"
            break;
#line 2124 "cplus.met"
#line 2126 "cplus.met"
        case __ASM__ : 
#line 2126 "cplus.met"
#line 2127 "cplus.met"
#line 2128 "cplus.met"
            {
#line 2128 "cplus.met"
                PPTREE _ptTree0=0;
#line 2128 "cplus.met"
                {
#line 2128 "cplus.met"
                    PPTREE _ptTree1=0,_ptRes1=0;
#line 2128 "cplus.met"
                    _ptRes1= MakeTree(RANGE_MODIFIER, 2);
#line 2128 "cplus.met"
                    if ( (_ptTree1=NQUICK_CALL(_Tak(asm_call)(error_free), 13, cplus))== (PPTREE) -1 ) {
#line 2128 "cplus.met"
                        MulFreeTree(4,_ptRes1,_ptTree1,_ptTree0,retTree);
                        PROG_EXIT(range_modifier_exit,"range_modifier")
#line 2128 "cplus.met"
                    }
#line 2128 "cplus.met"
                    ReplaceTree(_ptRes1, 1, _ptTree1);
#line 2128 "cplus.met"
                    _ptTree0=_ptRes1;
#line 2128 "cplus.met"
                }
#line 2128 "cplus.met"
                _retValue =_ptTree0;
#line 2128 "cplus.met"
                goto range_modifier_ret;
#line 2128 "cplus.met"
            }
#line 2128 "cplus.met"
#line 2128 "cplus.met"
            break;
#line 2128 "cplus.met"
#line 2130 "cplus.met"
        default : 
#line 2130 "cplus.met"
#line 2130 "cplus.met"
            {
#line 2130 "cplus.met"
                PPTREE _ptTree0=0;
#line 2130 "cplus.met"
                if ( (_ptTree0=NQUICK_CALL(_Tak(range_modifier_function)(error_free), 122, cplus))== (PPTREE) -1 ) {
#line 2130 "cplus.met"
                    MulFreeTree(2,_ptTree0,retTree);
                    PROG_EXIT(range_modifier_exit,"range_modifier")
#line 2130 "cplus.met"
                }
#line 2130 "cplus.met"
                _retValue =_ptTree0;
#line 2130 "cplus.met"
                goto range_modifier_ret;
#line 2130 "cplus.met"
            }
#line 2130 "cplus.met"
            break;
#line 2130 "cplus.met"
    }
#line 2130 "cplus.met"
#line 2130 "cplus.met"
#line 2131 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2131 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 2131 "cplus.met"
return((PPTREE) 0);
#line 2131 "cplus.met"

#line 2131 "cplus.met"
range_modifier_exit :
#line 2131 "cplus.met"

#line 2131 "cplus.met"
    _Debug = TRACE_RULE("range_modifier",TRACE_EXIT,(PPTREE)0);
#line 2131 "cplus.met"
    _funcLevel--;
#line 2131 "cplus.met"
    return((PPTREE) -1) ;
#line 2131 "cplus.met"

#line 2131 "cplus.met"
range_modifier_ret :
#line 2131 "cplus.met"
    
#line 2131 "cplus.met"
    _Debug = TRACE_RULE("range_modifier",TRACE_RETURN,_retValue);
#line 2131 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2131 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 2131 "cplus.met"
    return _retValue ;
#line 2131 "cplus.met"
}
#line 2131 "cplus.met"

#line 2131 "cplus.met"
#line 2088 "cplus.met"
PPTREE cplus::range_modifier_function ( int error_free)
#line 2088 "cplus.met"
{
#line 2088 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 2088 "cplus.met"
    int _value,_nbPre = 0 ;
#line 2088 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 2088 "cplus.met"
    int _Debug = TRACE_RULE("range_modifier_function",TRACE_ENTER,(PPTREE)0);
#line 2088 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 2088 "cplus.met"
#line 2089 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 2089 "cplus.met"
    switch( lexEl.Value) {
#line 2089 "cplus.met"
#line 2090 "cplus.met"
        case INLINE : 
#line 2090 "cplus.met"
#line 2090 "cplus.met"
            {
#line 2090 "cplus.met"
                PPTREE _ptTree0=0;
#line 2090 "cplus.met"
                {
#line 2090 "cplus.met"
                    PPTREE _ptTree1=0,_ptRes1=0;
#line 2090 "cplus.met"
                    _ptRes1= MakeTree(RANGE_MODIFIER, 2);
#line 2090 "cplus.met"
                    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 2090 "cplus.met"
                    if (  !SEE_TOKEN( INLINE,"inline") || !(_ptTree1 = CommString(lexEl.string()))) {
#line 2090 "cplus.met"
                        MulFreeTree(3,_ptRes1,_ptTree1,_ptTree0);
                        TOKEN_EXIT(range_modifier_function_exit,"inline")
#line 2090 "cplus.met"
                    } else {
#line 2090 "cplus.met"
                        tokenAhead = 0 ;
#line 2090 "cplus.met"
                    }
#line 2090 "cplus.met"
                    ReplaceTree(_ptRes1, 1, _ptTree1);
#line 2090 "cplus.met"
                    _ptTree0=_ptRes1;
#line 2090 "cplus.met"
                }
#line 2090 "cplus.met"
                _retValue =_ptTree0;
#line 2090 "cplus.met"
                goto range_modifier_function_ret;
#line 2090 "cplus.met"
            }
#line 2090 "cplus.met"
            break;
#line 2090 "cplus.met"
#line 2091 "cplus.met"
        case VIRTUAL : 
#line 2091 "cplus.met"
#line 2091 "cplus.met"
            {
#line 2091 "cplus.met"
                PPTREE _ptTree0=0;
#line 2091 "cplus.met"
                {
#line 2091 "cplus.met"
                    PPTREE _ptTree1=0,_ptRes1=0;
#line 2091 "cplus.met"
                    _ptRes1= MakeTree(RANGE_MODIFIER, 2);
#line 2091 "cplus.met"
                    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 2091 "cplus.met"
                    if (  !SEE_TOKEN( VIRTUAL,"virtual") || !(_ptTree1 = CommString(lexEl.string()))) {
#line 2091 "cplus.met"
                        MulFreeTree(3,_ptRes1,_ptTree1,_ptTree0);
                        TOKEN_EXIT(range_modifier_function_exit,"virtual")
#line 2091 "cplus.met"
                    } else {
#line 2091 "cplus.met"
                        tokenAhead = 0 ;
#line 2091 "cplus.met"
                    }
#line 2091 "cplus.met"
                    ReplaceTree(_ptRes1, 1, _ptTree1);
#line 2091 "cplus.met"
                    _ptTree0=_ptRes1;
#line 2091 "cplus.met"
                }
#line 2091 "cplus.met"
                _retValue =_ptTree0;
#line 2091 "cplus.met"
                goto range_modifier_function_ret;
#line 2091 "cplus.met"
            }
#line 2091 "cplus.met"
            break;
#line 2091 "cplus.met"
#line 2092 "cplus.met"
        case FRIEND : 
#line 2092 "cplus.met"
#line 2092 "cplus.met"
            {
#line 2092 "cplus.met"
                PPTREE _ptTree0=0;
#line 2092 "cplus.met"
                {
#line 2092 "cplus.met"
                    PPTREE _ptTree1=0,_ptRes1=0;
#line 2092 "cplus.met"
                    _ptRes1= MakeTree(RANGE_MODIFIER, 2);
#line 2092 "cplus.met"
                    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 2092 "cplus.met"
                    if (  !SEE_TOKEN( FRIEND,"friend") || !(_ptTree1 = CommString(lexEl.string()))) {
#line 2092 "cplus.met"
                        MulFreeTree(3,_ptRes1,_ptTree1,_ptTree0);
                        TOKEN_EXIT(range_modifier_function_exit,"friend")
#line 2092 "cplus.met"
                    } else {
#line 2092 "cplus.met"
                        tokenAhead = 0 ;
#line 2092 "cplus.met"
                    }
#line 2092 "cplus.met"
                    ReplaceTree(_ptRes1, 1, _ptTree1);
#line 2092 "cplus.met"
                    _ptTree0=_ptRes1;
#line 2092 "cplus.met"
                }
#line 2092 "cplus.met"
                _retValue =_ptTree0;
#line 2092 "cplus.met"
                goto range_modifier_function_ret;
#line 2092 "cplus.met"
            }
#line 2092 "cplus.met"
            break;
#line 2092 "cplus.met"
#line 2093 "cplus.met"
        case CONST : 
#line 2093 "cplus.met"
#line 2093 "cplus.met"
            {
#line 2093 "cplus.met"
                PPTREE _ptTree0=0;
#line 2093 "cplus.met"
                {
#line 2093 "cplus.met"
                    PPTREE _ptTree1=0,_ptRes1=0;
#line 2093 "cplus.met"
                    _ptRes1= MakeTree(RANGE_MODIFIER, 2);
#line 2093 "cplus.met"
                    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 2093 "cplus.met"
                    if (  !SEE_TOKEN( CONST,"const") || !(_ptTree1 = CommString(lexEl.string()))) {
#line 2093 "cplus.met"
                        MulFreeTree(3,_ptRes1,_ptTree1,_ptTree0);
                        TOKEN_EXIT(range_modifier_function_exit,"const")
#line 2093 "cplus.met"
                    } else {
#line 2093 "cplus.met"
                        tokenAhead = 0 ;
#line 2093 "cplus.met"
                    }
#line 2093 "cplus.met"
                    ReplaceTree(_ptRes1, 1, _ptTree1);
#line 2093 "cplus.met"
                    _ptTree0=_ptRes1;
#line 2093 "cplus.met"
                }
#line 2093 "cplus.met"
                _retValue =_ptTree0;
#line 2093 "cplus.met"
                goto range_modifier_function_ret;
#line 2093 "cplus.met"
            }
#line 2093 "cplus.met"
            break;
#line 2093 "cplus.met"
#line 2094 "cplus.met"
        case CONSTEXPR : 
#line 2094 "cplus.met"
#line 2094 "cplus.met"
            {
#line 2094 "cplus.met"
                PPTREE _ptTree0=0;
#line 2094 "cplus.met"
                {
#line 2094 "cplus.met"
                    PPTREE _ptTree1=0,_ptRes1=0;
#line 2094 "cplus.met"
                    _ptRes1= MakeTree(RANGE_MODIFIER, 2);
#line 2094 "cplus.met"
                    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 2094 "cplus.met"
                    if (  !SEE_TOKEN( CONSTEXPR,"constexpr") || !(_ptTree1 = CommString(lexEl.string()))) {
#line 2094 "cplus.met"
                        MulFreeTree(3,_ptRes1,_ptTree1,_ptTree0);
                        TOKEN_EXIT(range_modifier_function_exit,"constexpr")
#line 2094 "cplus.met"
                    } else {
#line 2094 "cplus.met"
                        tokenAhead = 0 ;
#line 2094 "cplus.met"
                    }
#line 2094 "cplus.met"
                    ReplaceTree(_ptRes1, 1, _ptTree1);
#line 2094 "cplus.met"
                    _ptTree0=_ptRes1;
#line 2094 "cplus.met"
                }
#line 2094 "cplus.met"
                _retValue =_ptTree0;
#line 2094 "cplus.met"
                goto range_modifier_function_ret;
#line 2094 "cplus.met"
            }
#line 2094 "cplus.met"
            break;
#line 2094 "cplus.met"
        default :
#line 2094 "cplus.met"
            CASE_EXIT(range_modifier_function_exit,"either inline or virtual or friend or const or constexpr")
#line 2094 "cplus.met"
            break;
#line 2094 "cplus.met"
    }
#line 2094 "cplus.met"
#line 2094 "cplus.met"
#line 2095 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2095 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 2095 "cplus.met"
return((PPTREE) 0);
#line 2095 "cplus.met"

#line 2095 "cplus.met"
range_modifier_function_exit :
#line 2095 "cplus.met"

#line 2095 "cplus.met"
    _Debug = TRACE_RULE("range_modifier_function",TRACE_EXIT,(PPTREE)0);
#line 2095 "cplus.met"
    _funcLevel--;
#line 2095 "cplus.met"
    return((PPTREE) -1) ;
#line 2095 "cplus.met"

#line 2095 "cplus.met"
range_modifier_function_ret :
#line 2095 "cplus.met"
    
#line 2095 "cplus.met"
    _Debug = TRACE_RULE("range_modifier_function",TRACE_RETURN,_retValue);
#line 2095 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2095 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 2095 "cplus.met"
    return _retValue ;
#line 2095 "cplus.met"
}
#line 2095 "cplus.met"

#line 2095 "cplus.met"
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
#line 2638 "cplus.met"
PPTREE cplus::relational_expression ( int error_free)
#line 2638 "cplus.met"
{
#line 2638 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 2638 "cplus.met"
    int _value,_nbPre = 0 ;
#line 2638 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 2638 "cplus.met"
    int _Debug = TRACE_RULE("relational_expression",TRACE_ENTER,(PPTREE)0);
#line 2638 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 2638 "cplus.met"
#line 2638 "cplus.met"
    PPTREE expTree = (PPTREE) 0;
#line 2638 "cplus.met"
#line 2640 "cplus.met"
    if ( (expTree=NQUICK_CALL(_Tak(shift_expression)(error_free), 127, cplus))== (PPTREE) -1 ) {
#line 2640 "cplus.met"
        MulFreeTree(1,expTree);
        PROG_EXIT(relational_expression_exit,"relational_expression")
#line 2640 "cplus.met"
    }
#line 2640 "cplus.met"
#line 2641 "cplus.met"
    while (((((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN( INFEEGAL,"<=")) || 
#line 2641 "cplus.met"
            ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN( SUPEEGAL,">="))) || 
#line 2641 "cplus.met"
           (((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN( SUPE,">")))) || 
#line 2641 "cplus.met"
          ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN( INFE,"<"))) { 
#line 2641 "cplus.met"
#line 2642 "cplus.met"
        (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 2642 "cplus.met"
        switch( lexEl.Value) {
#line 2642 "cplus.met"
#line 2643 "cplus.met"
            case INFEEGAL : 
#line 2643 "cplus.met"
                tokenAhead = 0 ;
#line 2643 "cplus.met"
                CommTerm();
#line 2643 "cplus.met"
#line 2643 "cplus.met"
                {
#line 2643 "cplus.met"
                    PPTREE _ptTree0=0,_ptRes0=0;
#line 2643 "cplus.met"
                    _ptRes0= MakeTree(LEQU, 2);
#line 2643 "cplus.met"
                    ReplaceTree(_ptRes0, 1, expTree );
#line 2643 "cplus.met"
                    if ( (_ptTree0=NQUICK_CALL(_Tak(shift_expression)(error_free), 127, cplus))== (PPTREE) -1 ) {
#line 2643 "cplus.met"
                        MulFreeTree(3,_ptRes0,_ptTree0,expTree);
                        PROG_EXIT(relational_expression_exit,"relational_expression")
#line 2643 "cplus.met"
                    }
#line 2643 "cplus.met"
                    ReplaceTree(_ptRes0, 2, _ptTree0);
#line 2643 "cplus.met"
                    expTree=_ptRes0;
#line 2643 "cplus.met"
                }
#line 2643 "cplus.met"
                break;
#line 2643 "cplus.met"
#line 2644 "cplus.met"
            case SUPEEGAL : 
#line 2644 "cplus.met"
                tokenAhead = 0 ;
#line 2644 "cplus.met"
                CommTerm();
#line 2644 "cplus.met"
#line 2644 "cplus.met"
                {
#line 2644 "cplus.met"
                    PPTREE _ptTree0=0,_ptRes0=0;
#line 2644 "cplus.met"
                    _ptRes0= MakeTree(GEQU, 2);
#line 2644 "cplus.met"
                    ReplaceTree(_ptRes0, 1, expTree );
#line 2644 "cplus.met"
                    if ( (_ptTree0=NQUICK_CALL(_Tak(shift_expression)(error_free), 127, cplus))== (PPTREE) -1 ) {
#line 2644 "cplus.met"
                        MulFreeTree(3,_ptRes0,_ptTree0,expTree);
                        PROG_EXIT(relational_expression_exit,"relational_expression")
#line 2644 "cplus.met"
                    }
#line 2644 "cplus.met"
                    ReplaceTree(_ptRes0, 2, _ptTree0);
#line 2644 "cplus.met"
                    expTree=_ptRes0;
#line 2644 "cplus.met"
                }
#line 2644 "cplus.met"
                break;
#line 2644 "cplus.met"
#line 2645 "cplus.met"
            case SUPE : 
#line 2645 "cplus.met"
                tokenAhead = 0 ;
#line 2645 "cplus.met"
                CommTerm();
#line 2645 "cplus.met"
#line 2645 "cplus.met"
                {
#line 2645 "cplus.met"
                    PPTREE _ptTree0=0,_ptRes0=0;
#line 2645 "cplus.met"
                    _ptRes0= MakeTree(GT, 2);
#line 2645 "cplus.met"
                    ReplaceTree(_ptRes0, 1, expTree );
#line 2645 "cplus.met"
                    if ( (_ptTree0=NQUICK_CALL(_Tak(shift_expression)(error_free), 127, cplus))== (PPTREE) -1 ) {
#line 2645 "cplus.met"
                        MulFreeTree(3,_ptRes0,_ptTree0,expTree);
                        PROG_EXIT(relational_expression_exit,"relational_expression")
#line 2645 "cplus.met"
                    }
#line 2645 "cplus.met"
                    ReplaceTree(_ptRes0, 2, _ptTree0);
#line 2645 "cplus.met"
                    expTree=_ptRes0;
#line 2645 "cplus.met"
                }
#line 2645 "cplus.met"
                break;
#line 2645 "cplus.met"
#line 2646 "cplus.met"
            case INFE : 
#line 2646 "cplus.met"
                tokenAhead = 0 ;
#line 2646 "cplus.met"
                CommTerm();
#line 2646 "cplus.met"
#line 2646 "cplus.met"
                {
#line 2646 "cplus.met"
                    PPTREE _ptTree0=0,_ptRes0=0;
#line 2646 "cplus.met"
                    _ptRes0= MakeTree(LT, 2);
#line 2646 "cplus.met"
                    ReplaceTree(_ptRes0, 1, expTree );
#line 2646 "cplus.met"
                    if ( (_ptTree0=NQUICK_CALL(_Tak(shift_expression)(error_free), 127, cplus))== (PPTREE) -1 ) {
#line 2646 "cplus.met"
                        MulFreeTree(3,_ptRes0,_ptTree0,expTree);
                        PROG_EXIT(relational_expression_exit,"relational_expression")
#line 2646 "cplus.met"
                    }
#line 2646 "cplus.met"
                    ReplaceTree(_ptRes0, 2, _ptTree0);
#line 2646 "cplus.met"
                    expTree=_ptRes0;
#line 2646 "cplus.met"
                }
#line 2646 "cplus.met"
                break;
#line 2646 "cplus.met"
            default :
#line 2646 "cplus.met"
                MulFreeTree(1,expTree);
                CASE_EXIT(relational_expression_exit,"either <= or >= or > or <")
#line 2646 "cplus.met"
                break;
#line 2646 "cplus.met"
        }
#line 2646 "cplus.met"
    } 
#line 2646 "cplus.met"
#line 2648 "cplus.met"
    {
#line 2648 "cplus.met"
        _retValue = expTree ;
#line 2648 "cplus.met"
        goto relational_expression_ret;
#line 2648 "cplus.met"
        
#line 2648 "cplus.met"
    }
#line 2648 "cplus.met"
#line 2648 "cplus.met"
#line 2648 "cplus.met"

#line 2649 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2649 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 2649 "cplus.met"
return((PPTREE) 0);
#line 2649 "cplus.met"

#line 2649 "cplus.met"
relational_expression_exit :
#line 2649 "cplus.met"

#line 2649 "cplus.met"
    _Debug = TRACE_RULE("relational_expression",TRACE_EXIT,(PPTREE)0);
#line 2649 "cplus.met"
    _funcLevel--;
#line 2649 "cplus.met"
    return((PPTREE) -1) ;
#line 2649 "cplus.met"

#line 2649 "cplus.met"
relational_expression_ret :
#line 2649 "cplus.met"
    
#line 2649 "cplus.met"
    _Debug = TRACE_RULE("relational_expression",TRACE_RETURN,_retValue);
#line 2649 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2649 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 2649 "cplus.met"
    return _retValue ;
#line 2649 "cplus.met"
}
#line 2649 "cplus.met"

#line 2649 "cplus.met"
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
#line 2651 "cplus.met"
PPTREE cplus::shift_expression ( int error_free)
#line 2651 "cplus.met"
{
#line 2651 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 2651 "cplus.met"
    int _value,_nbPre = 0 ;
#line 2651 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 2651 "cplus.met"
    int _Debug = TRACE_RULE("shift_expression",TRACE_ENTER,(PPTREE)0);
#line 2651 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 2651 "cplus.met"
#line 2651 "cplus.met"
    PPTREE expTree = (PPTREE) 0;
#line 2651 "cplus.met"
#line 2653 "cplus.met"
    if ( (expTree=NQUICK_CALL(_Tak(additive_expression)(error_free), 3, cplus))== (PPTREE) -1 ) {
#line 2653 "cplus.met"
        MulFreeTree(1,expTree);
        PROG_EXIT(shift_expression_exit,"shift_expression")
#line 2653 "cplus.met"
    }
#line 2653 "cplus.met"
#line 2654 "cplus.met"
    while (((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN( INFEINFE,"<<")) || 
#line 2654 "cplus.met"
          ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN( SUPESUPE,">>"))) { 
#line 2654 "cplus.met"
#line 2655 "cplus.met"
        (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 2655 "cplus.met"
        switch( lexEl.Value) {
#line 2655 "cplus.met"
#line 2656 "cplus.met"
            case INFEINFE : 
#line 2656 "cplus.met"
                tokenAhead = 0 ;
#line 2656 "cplus.met"
                CommTerm();
#line 2656 "cplus.met"
#line 2656 "cplus.met"
                {
#line 2656 "cplus.met"
                    PPTREE _ptTree0=0,_ptRes0=0;
#line 2656 "cplus.met"
                    _ptRes0= MakeTree(LSHI, 2);
#line 2656 "cplus.met"
                    ReplaceTree(_ptRes0, 1, expTree );
#line 2656 "cplus.met"
                    if ( (_ptTree0=NQUICK_CALL(_Tak(additive_expression)(error_free), 3, cplus))== (PPTREE) -1 ) {
#line 2656 "cplus.met"
                        MulFreeTree(3,_ptRes0,_ptTree0,expTree);
                        PROG_EXIT(shift_expression_exit,"shift_expression")
#line 2656 "cplus.met"
                    }
#line 2656 "cplus.met"
                    ReplaceTree(_ptRes0, 2, _ptTree0);
#line 2656 "cplus.met"
                    expTree=_ptRes0;
#line 2656 "cplus.met"
                }
#line 2656 "cplus.met"
                break;
#line 2656 "cplus.met"
#line 2657 "cplus.met"
            case SUPESUPE : 
#line 2657 "cplus.met"
                tokenAhead = 0 ;
#line 2657 "cplus.met"
                CommTerm();
#line 2657 "cplus.met"
#line 2657 "cplus.met"
                {
#line 2657 "cplus.met"
                    PPTREE _ptTree0=0,_ptRes0=0;
#line 2657 "cplus.met"
                    _ptRes0= MakeTree(RSHI, 2);
#line 2657 "cplus.met"
                    ReplaceTree(_ptRes0, 1, expTree );
#line 2657 "cplus.met"
                    if ( (_ptTree0=NQUICK_CALL(_Tak(additive_expression)(error_free), 3, cplus))== (PPTREE) -1 ) {
#line 2657 "cplus.met"
                        MulFreeTree(3,_ptRes0,_ptTree0,expTree);
                        PROG_EXIT(shift_expression_exit,"shift_expression")
#line 2657 "cplus.met"
                    }
#line 2657 "cplus.met"
                    ReplaceTree(_ptRes0, 2, _ptTree0);
#line 2657 "cplus.met"
                    expTree=_ptRes0;
#line 2657 "cplus.met"
                }
#line 2657 "cplus.met"
                break;
#line 2657 "cplus.met"
            default :
#line 2657 "cplus.met"
                MulFreeTree(1,expTree);
                CASE_EXIT(shift_expression_exit,"either << or >>")
#line 2657 "cplus.met"
                break;
#line 2657 "cplus.met"
        }
#line 2657 "cplus.met"
    } 
#line 2657 "cplus.met"
#line 2659 "cplus.met"
    {
#line 2659 "cplus.met"
        _retValue = expTree ;
#line 2659 "cplus.met"
        goto shift_expression_ret;
#line 2659 "cplus.met"
        
#line 2659 "cplus.met"
    }
#line 2659 "cplus.met"
#line 2659 "cplus.met"
#line 2659 "cplus.met"

#line 2660 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2660 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 2660 "cplus.met"
return((PPTREE) 0);
#line 2660 "cplus.met"

#line 2660 "cplus.met"
shift_expression_exit :
#line 2660 "cplus.met"

#line 2660 "cplus.met"
    _Debug = TRACE_RULE("shift_expression",TRACE_EXIT,(PPTREE)0);
#line 2660 "cplus.met"
    _funcLevel--;
#line 2660 "cplus.met"
    return((PPTREE) -1) ;
#line 2660 "cplus.met"

#line 2660 "cplus.met"
shift_expression_ret :
#line 2660 "cplus.met"
    
#line 2660 "cplus.met"
    _Debug = TRACE_RULE("shift_expression",TRACE_RETURN,_retValue);
#line 2660 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2660 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 2660 "cplus.met"
    return _retValue ;
#line 2660 "cplus.met"
}
#line 2660 "cplus.met"

#line 2660 "cplus.met"
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
        case INT : 
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
                    _ptRes1= MakeTree(TINT, 0);
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
        case CHAR : 
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
                    _ptRes1= MakeTree(TCHAR, 0);
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
        case FLOAT : 
#line 2010 "cplus.met"
            tokenAhead = 0 ;
#line 2010 "cplus.met"
            CommTerm();
#line 2010 "cplus.met"
#line 2010 "cplus.met"
            {
#line 2010 "cplus.met"
                PPTREE _ptTree0=0;
#line 2010 "cplus.met"
                {
#line 2010 "cplus.met"
                    PPTREE _ptRes1=0;
#line 2010 "cplus.met"
                    _ptRes1= MakeTree(TFLOAT, 0);
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
        case VOID : 
#line 2011 "cplus.met"
            tokenAhead = 0 ;
#line 2011 "cplus.met"
            CommTerm();
#line 2011 "cplus.met"
#line 2011 "cplus.met"
            {
#line 2011 "cplus.met"
                PPTREE _ptTree0=0;
#line 2011 "cplus.met"
                {
#line 2011 "cplus.met"
                    PPTREE _ptRes1=0;
#line 2011 "cplus.met"
                    _ptRes1= MakeTree(VOID, 0);
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
        case DPOIDPOI : 
#line 2012 "cplus.met"
#line 2012 "cplus.met"
            {
#line 2012 "cplus.met"
                PPTREE _ptTree0=0;
#line 2012 "cplus.met"
                {
#line 2012 "cplus.met"
                    PPTREE _ptTree1=0,_ptRes1=0;
#line 2012 "cplus.met"
                    _ptRes1= MakeTree(TIDENT, 1);
#line 2012 "cplus.met"
                    if ( (_ptTree1=NQUICK_CALL(_Tak(complete_class_name)(error_free), 27, cplus))== (PPTREE) -1 ) {
#line 2012 "cplus.met"
                        MulFreeTree(4,_ptRes1,_ptTree1,_ptTree0,valTree);
                        PROG_EXIT(simple_type_exit,"simple_type")
#line 2012 "cplus.met"
                    }
#line 2012 "cplus.met"
                    ReplaceTree(_ptRes1, 1, _ptTree1);
#line 2012 "cplus.met"
                    _ptTree0=_ptRes1;
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
#line 2013 "cplus.met"
        case META : 
#line 2013 "cplus.met"
        case IDENT : 
#line 2013 "cplus.met"
#line 2013 "cplus.met"
            {
#line 2013 "cplus.met"
                PPTREE _ptTree0=0;
#line 2013 "cplus.met"
                {
#line 2013 "cplus.met"
                    PPTREE _ptTree1=0,_ptRes1=0;
#line 2013 "cplus.met"
                    _ptRes1= MakeTree(TIDENT, 1);
#line 2013 "cplus.met"
                    if ( (_ptTree1=NQUICK_CALL(_Tak(complete_class_name)(error_free), 27, cplus))== (PPTREE) -1 ) {
#line 2013 "cplus.met"
                        MulFreeTree(4,_ptRes1,_ptTree1,_ptTree0,valTree);
                        PROG_EXIT(simple_type_exit,"simple_type")
#line 2013 "cplus.met"
                    }
#line 2013 "cplus.met"
                    ReplaceTree(_ptRes1, 1, _ptTree1);
#line 2013 "cplus.met"
                    _ptTree0=_ptRes1;
#line 2013 "cplus.met"
                }
#line 2013 "cplus.met"
                _retValue =_ptTree0;
#line 2013 "cplus.met"
                goto simple_type_ret;
#line 2013 "cplus.met"
            }
#line 2013 "cplus.met"
            break;
#line 2013 "cplus.met"
#line 2014 "cplus.met"
        case LONG : 
#line 2014 "cplus.met"
            tokenAhead = 0 ;
#line 2014 "cplus.met"
            CommTerm();
#line 2014 "cplus.met"
#line 2015 "cplus.met"
            (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 2015 "cplus.met"
            switch( lexEl.Value) {
#line 2015 "cplus.met"
#line 2016 "cplus.met"
                case FLOAT : 
#line 2016 "cplus.met"
                    tokenAhead = 0 ;
#line 2016 "cplus.met"
                    CommTerm();
#line 2016 "cplus.met"
#line 2016 "cplus.met"
                    {
#line 2016 "cplus.met"
                        PPTREE _ptTree0=0;
#line 2016 "cplus.met"
                        {
#line 2016 "cplus.met"
                            PPTREE _ptTree1=0,_ptRes1=0;
#line 2016 "cplus.met"
                            _ptRes1= MakeTree(TLONG, 1);
#line 2016 "cplus.met"
                            {
#line 2016 "cplus.met"
                                PPTREE _ptRes2=0;
#line 2016 "cplus.met"
                                _ptRes2= MakeTree(TFLOAT, 0);
#line 2016 "cplus.met"
                                _ptTree1=_ptRes2;
#line 2016 "cplus.met"
                            }
#line 2016 "cplus.met"
                            ReplaceTree(_ptRes1, 1, _ptTree1);
#line 2016 "cplus.met"
                            _ptTree0=_ptRes1;
#line 2016 "cplus.met"
                        }
#line 2016 "cplus.met"
                        _retValue =_ptTree0;
#line 2016 "cplus.met"
                        goto simple_type_ret;
#line 2016 "cplus.met"
                    }
#line 2016 "cplus.met"
                    break;
#line 2016 "cplus.met"
#line 2017 "cplus.met"
                case DOUBLE : 
#line 2017 "cplus.met"
                    tokenAhead = 0 ;
#line 2017 "cplus.met"
                    CommTerm();
#line 2017 "cplus.met"
#line 2017 "cplus.met"
                    {
#line 2017 "cplus.met"
                        PPTREE _ptTree0=0;
#line 2017 "cplus.met"
                        {
#line 2017 "cplus.met"
                            PPTREE _ptTree1=0,_ptRes1=0;
#line 2017 "cplus.met"
                            _ptRes1= MakeTree(TLONG, 1);
#line 2017 "cplus.met"
                            {
#line 2017 "cplus.met"
                                PPTREE _ptRes2=0;
#line 2017 "cplus.met"
                                _ptRes2= MakeTree(TDOUBLE, 0);
#line 2017 "cplus.met"
                                _ptTree1=_ptRes2;
#line 2017 "cplus.met"
                            }
#line 2017 "cplus.met"
                            ReplaceTree(_ptRes1, 1, _ptTree1);
#line 2017 "cplus.met"
                            _ptTree0=_ptRes1;
#line 2017 "cplus.met"
                        }
#line 2017 "cplus.met"
                        _retValue =_ptTree0;
#line 2017 "cplus.met"
                        goto simple_type_ret;
#line 2017 "cplus.met"
                    }
#line 2017 "cplus.met"
                    break;
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
                            PPTREE _ptTree1=0,_ptRes1=0;
#line 2018 "cplus.met"
                            _ptRes1= MakeTree(TLONG, 1);
#line 2018 "cplus.met"
                            {
#line 2018 "cplus.met"
                                PPTREE _ptRes2=0;
#line 2018 "cplus.met"
                                _ptRes2= MakeTree(TINT, 0);
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
                case SIGNED : 
#line 2019 "cplus.met"
                    tokenAhead = 0 ;
#line 2019 "cplus.met"
                    CommTerm();
#line 2019 "cplus.met"
#line 2020 "cplus.met"
#line 2021 "cplus.met"
                    if (NPUSH_CALL_AFF_VERIF(valTree = ,_Tak(long_short_int_char), 91, cplus)){
#line 2021 "cplus.met"
#line 2022 "cplus.met"
                        {
#line 2022 "cplus.met"
                            PPTREE _ptTree0=0;
#line 2022 "cplus.met"
                            {
#line 2022 "cplus.met"
                                PPTREE _ptTree1=0,_ptRes1=0;
#line 2022 "cplus.met"
                                _ptRes1= MakeTree(TSIGNED, 1);
#line 2022 "cplus.met"
                                {
#line 2022 "cplus.met"
                                    PPTREE _ptRes2=0;
#line 2022 "cplus.met"
                                    _ptRes2= MakeTree(TLONG, 1);
#line 2022 "cplus.met"
                                    ReplaceTree(_ptRes2, 1, valTree );
#line 2022 "cplus.met"
                                    _ptTree1=_ptRes2;
#line 2022 "cplus.met"
                                }
#line 2022 "cplus.met"
                                ReplaceTree(_ptRes1, 1, _ptTree1);
#line 2022 "cplus.met"
                                _ptTree0=_ptRes1;
#line 2022 "cplus.met"
                            }
#line 2022 "cplus.met"
                            _retValue =_ptTree0;
#line 2022 "cplus.met"
                            goto simple_type_ret;
#line 2022 "cplus.met"
                        }
#line 2022 "cplus.met"
                    }
#line 2022 "cplus.met"
#line 2022 "cplus.met"
                    break;
#line 2022 "cplus.met"
#line 2024 "cplus.met"
                case UNSIGNED : 
#line 2024 "cplus.met"
                    tokenAhead = 0 ;
#line 2024 "cplus.met"
                    CommTerm();
#line 2024 "cplus.met"
#line 2025 "cplus.met"
#line 2026 "cplus.met"
                    if (NPUSH_CALL_AFF_VERIF(valTree = ,_Tak(long_short_int_char), 91, cplus)){
#line 2026 "cplus.met"
#line 2027 "cplus.met"
                        {
#line 2027 "cplus.met"
                            PPTREE _ptTree0=0;
#line 2027 "cplus.met"
                            {
#line 2027 "cplus.met"
                                PPTREE _ptTree1=0,_ptRes1=0;
#line 2027 "cplus.met"
                                _ptRes1= MakeTree(TUNSIGNED, 1);
#line 2027 "cplus.met"
                                {
#line 2027 "cplus.met"
                                    PPTREE _ptRes2=0;
#line 2027 "cplus.met"
                                    _ptRes2= MakeTree(TLONG, 1);
#line 2027 "cplus.met"
                                    ReplaceTree(_ptRes2, 1, valTree );
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
                            goto simple_type_ret;
#line 2027 "cplus.met"
                        }
#line 2027 "cplus.met"
                    }
#line 2027 "cplus.met"
#line 2027 "cplus.met"
                    break;
#line 2027 "cplus.met"
#line 2029 "cplus.met"
                case LONG : 
#line 2029 "cplus.met"
                    tokenAhead = 0 ;
#line 2029 "cplus.met"
                    CommTerm();
#line 2029 "cplus.met"
#line 2030 "cplus.met"
#line 2031 "cplus.met"
                    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 2031 "cplus.met"
                    switch( lexEl.Value) {
#line 2031 "cplus.met"
#line 2032 "cplus.met"
                        case FLOAT : 
#line 2032 "cplus.met"
                            tokenAhead = 0 ;
#line 2032 "cplus.met"
                            CommTerm();
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
                                    _ptRes1= MakeTree(TLONG, 1);
#line 2032 "cplus.met"
                                    {
#line 2032 "cplus.met"
                                        PPTREE _ptTree2=0,_ptRes2=0;
#line 2032 "cplus.met"
                                        _ptRes2= MakeTree(TLONG, 1);
#line 2032 "cplus.met"
                                        {
#line 2032 "cplus.met"
                                            PPTREE _ptRes3=0;
#line 2032 "cplus.met"
                                            _ptRes3= MakeTree(TFLOAT, 0);
#line 2032 "cplus.met"
                                            _ptTree2=_ptRes3;
#line 2032 "cplus.met"
                                        }
#line 2032 "cplus.met"
                                        ReplaceTree(_ptRes2, 1, _ptTree2);
#line 2032 "cplus.met"
                                        _ptTree1=_ptRes2;
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
                        case DOUBLE : 
#line 2033 "cplus.met"
                            tokenAhead = 0 ;
#line 2033 "cplus.met"
                            CommTerm();
#line 2033 "cplus.met"
#line 2033 "cplus.met"
                            {
#line 2033 "cplus.met"
                                PPTREE _ptTree0=0;
#line 2033 "cplus.met"
                                {
#line 2033 "cplus.met"
                                    PPTREE _ptTree1=0,_ptRes1=0;
#line 2033 "cplus.met"
                                    _ptRes1= MakeTree(TLONG, 1);
#line 2033 "cplus.met"
                                    {
#line 2033 "cplus.met"
                                        PPTREE _ptTree2=0,_ptRes2=0;
#line 2033 "cplus.met"
                                        _ptRes2= MakeTree(TLONG, 1);
#line 2033 "cplus.met"
                                        {
#line 2033 "cplus.met"
                                            PPTREE _ptRes3=0;
#line 2033 "cplus.met"
                                            _ptRes3= MakeTree(TDOUBLE, 0);
#line 2033 "cplus.met"
                                            _ptTree2=_ptRes3;
#line 2033 "cplus.met"
                                        }
#line 2033 "cplus.met"
                                        ReplaceTree(_ptRes2, 1, _ptTree2);
#line 2033 "cplus.met"
                                        _ptTree1=_ptRes2;
#line 2033 "cplus.met"
                                    }
#line 2033 "cplus.met"
                                    ReplaceTree(_ptRes1, 1, _ptTree1);
#line 2033 "cplus.met"
                                    _ptTree0=_ptRes1;
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
#line 2034 "cplus.met"
                        case INT : 
#line 2034 "cplus.met"
                            tokenAhead = 0 ;
#line 2034 "cplus.met"
                            CommTerm();
#line 2034 "cplus.met"
#line 2034 "cplus.met"
                            {
#line 2034 "cplus.met"
                                PPTREE _ptTree0=0;
#line 2034 "cplus.met"
                                {
#line 2034 "cplus.met"
                                    PPTREE _ptTree1=0,_ptRes1=0;
#line 2034 "cplus.met"
                                    _ptRes1= MakeTree(TLONG, 1);
#line 2034 "cplus.met"
                                    {
#line 2034 "cplus.met"
                                        PPTREE _ptTree2=0,_ptRes2=0;
#line 2034 "cplus.met"
                                        _ptRes2= MakeTree(TLONG, 1);
#line 2034 "cplus.met"
                                        {
#line 2034 "cplus.met"
                                            PPTREE _ptRes3=0;
#line 2034 "cplus.met"
                                            _ptRes3= MakeTree(TINT, 0);
#line 2034 "cplus.met"
                                            _ptTree2=_ptRes3;
#line 2034 "cplus.met"
                                        }
#line 2034 "cplus.met"
                                        ReplaceTree(_ptRes2, 1, _ptTree2);
#line 2034 "cplus.met"
                                        _ptTree1=_ptRes2;
#line 2034 "cplus.met"
                                    }
#line 2034 "cplus.met"
                                    ReplaceTree(_ptRes1, 1, _ptTree1);
#line 2034 "cplus.met"
                                    _ptTree0=_ptRes1;
#line 2034 "cplus.met"
                                }
#line 2034 "cplus.met"
                                _retValue =_ptTree0;
#line 2034 "cplus.met"
                                goto simple_type_ret;
#line 2034 "cplus.met"
                            }
#line 2034 "cplus.met"
                            break;
#line 2034 "cplus.met"
#line 2035 "cplus.met"
                        case LONG : 
#line 2035 "cplus.met"
                            tokenAhead = 0 ;
#line 2035 "cplus.met"
                            CommTerm();
#line 2035 "cplus.met"
#line 2035 "cplus.met"
                            break;
#line 2035 "cplus.met"
#line 2036 "cplus.met"
                        default : 
#line 2036 "cplus.met"
#line 2036 "cplus.met"
                            {
#line 2036 "cplus.met"
                                PPTREE _ptTree0=0;
#line 2036 "cplus.met"
                                {
#line 2036 "cplus.met"
                                    PPTREE _ptTree1=0,_ptRes1=0;
#line 2036 "cplus.met"
                                    _ptRes1= MakeTree(TLONG, 1);
#line 2036 "cplus.met"
                                    {
#line 2036 "cplus.met"
                                        PPTREE _ptRes2=0;
#line 2036 "cplus.met"
                                        _ptRes2= MakeTree(TLONG, 1);
#line 2036 "cplus.met"
                                        _ptTree1=_ptRes2;
#line 2036 "cplus.met"
                                    }
#line 2036 "cplus.met"
                                    ReplaceTree(_ptRes1, 1, _ptTree1);
#line 2036 "cplus.met"
                                    _ptTree0=_ptRes1;
#line 2036 "cplus.met"
                                }
#line 2036 "cplus.met"
                                _retValue =_ptTree0;
#line 2036 "cplus.met"
                                goto simple_type_ret;
#line 2036 "cplus.met"
                            }
#line 2036 "cplus.met"
                            break;
#line 2036 "cplus.met"
                    }
#line 2036 "cplus.met"
#line 2036 "cplus.met"
                    break;
#line 2036 "cplus.met"
#line 2039 "cplus.met"
                default : 
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
                            _ptRes1= MakeTree(TLONG, 1);
#line 2039 "cplus.met"
                            _ptTree0=_ptRes1;
#line 2039 "cplus.met"
                        }
#line 2039 "cplus.met"
                        _retValue =_ptTree0;
#line 2039 "cplus.met"
                        goto simple_type_ret;
#line 2039 "cplus.met"
                    }
#line 2039 "cplus.met"
                    break;
#line 2039 "cplus.met"
            }
#line 2039 "cplus.met"
            break;
#line 2039 "cplus.met"
#line 2041 "cplus.met"
        case SIGNED : 
#line 2041 "cplus.met"
            tokenAhead = 0 ;
#line 2041 "cplus.met"
            CommTerm();
#line 2041 "cplus.met"
#line 2042 "cplus.met"
            if (NPUSH_CALL_AFF_VERIF(valTree = ,_Tak(long_short_int_char), 91, cplus)){
#line 2042 "cplus.met"
#line 2043 "cplus.met"
                {
#line 2043 "cplus.met"
                    PPTREE _ptTree0=0;
#line 2043 "cplus.met"
                    {
#line 2043 "cplus.met"
                        PPTREE _ptRes1=0;
#line 2043 "cplus.met"
                        _ptRes1= MakeTree(TSIGNED, 1);
#line 2043 "cplus.met"
                        ReplaceTree(_ptRes1, 1, valTree );
#line 2043 "cplus.met"
                        _ptTree0=_ptRes1;
#line 2043 "cplus.met"
                    }
#line 2043 "cplus.met"
                    _retValue =_ptTree0;
#line 2043 "cplus.met"
                    goto simple_type_ret;
#line 2043 "cplus.met"
                }
#line 2043 "cplus.met"
            } else {
#line 2043 "cplus.met"
#line 2045 "cplus.met"
                {
#line 2045 "cplus.met"
                    PPTREE _ptTree0=0;
#line 2045 "cplus.met"
                    {
#line 2045 "cplus.met"
                        PPTREE _ptRes1=0;
#line 2045 "cplus.met"
                        _ptRes1= MakeTree(TSIGNED, 1);
#line 2045 "cplus.met"
                        _ptTree0=_ptRes1;
#line 2045 "cplus.met"
                    }
#line 2045 "cplus.met"
                    _retValue =_ptTree0;
#line 2045 "cplus.met"
                    goto simple_type_ret;
#line 2045 "cplus.met"
                }
#line 2045 "cplus.met"
            }
#line 2045 "cplus.met"
            break;
#line 2045 "cplus.met"
#line 2046 "cplus.met"
        case UNSIGNED : 
#line 2046 "cplus.met"
            tokenAhead = 0 ;
#line 2046 "cplus.met"
            CommTerm();
#line 2046 "cplus.met"
#line 2047 "cplus.met"
            if (NPUSH_CALL_AFF_VERIF(valTree = ,_Tak(long_short_int_char), 91, cplus)){
#line 2047 "cplus.met"
#line 2048 "cplus.met"
                {
#line 2048 "cplus.met"
                    PPTREE _ptTree0=0;
#line 2048 "cplus.met"
                    {
#line 2048 "cplus.met"
                        PPTREE _ptRes1=0;
#line 2048 "cplus.met"
                        _ptRes1= MakeTree(TUNSIGNED, 1);
#line 2048 "cplus.met"
                        ReplaceTree(_ptRes1, 1, valTree );
#line 2048 "cplus.met"
                        _ptTree0=_ptRes1;
#line 2048 "cplus.met"
                    }
#line 2048 "cplus.met"
                    _retValue =_ptTree0;
#line 2048 "cplus.met"
                    goto simple_type_ret;
#line 2048 "cplus.met"
                }
#line 2048 "cplus.met"
            } else {
#line 2048 "cplus.met"
#line 2050 "cplus.met"
                {
#line 2050 "cplus.met"
                    PPTREE _ptTree0=0;
#line 2050 "cplus.met"
                    {
#line 2050 "cplus.met"
                        PPTREE _ptRes1=0;
#line 2050 "cplus.met"
                        _ptRes1= MakeTree(TUNSIGNED, 1);
#line 2050 "cplus.met"
                        _ptTree0=_ptRes1;
#line 2050 "cplus.met"
                    }
#line 2050 "cplus.met"
                    _retValue =_ptTree0;
#line 2050 "cplus.met"
                    goto simple_type_ret;
#line 2050 "cplus.met"
                }
#line 2050 "cplus.met"
            }
#line 2050 "cplus.met"
            break;
#line 2050 "cplus.met"
#line 2051 "cplus.met"
        default : 
#line 2051 "cplus.met"
#line 2051 "cplus.met"
            {
#line 2051 "cplus.met"
                PPTREE _ptTree0=0;
#line 2051 "cplus.met"
                if ( (_ptTree0=NQUICK_CALL(_Tak(long_short_int_char)(error_free), 91, cplus))== (PPTREE) -1 ) {
#line 2051 "cplus.met"
                    MulFreeTree(2,_ptTree0,valTree);
                    PROG_EXIT(simple_type_exit,"simple_type")
#line 2051 "cplus.met"
                }
#line 2051 "cplus.met"
                _retValue =_ptTree0;
#line 2051 "cplus.met"
                goto simple_type_ret;
#line 2051 "cplus.met"
            }
#line 2051 "cplus.met"
            break;
#line 2051 "cplus.met"
    }
#line 2051 "cplus.met"
#line 2051 "cplus.met"
#line 2052 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2052 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 2052 "cplus.met"
return((PPTREE) 0);
#line 2052 "cplus.met"

#line 2052 "cplus.met"
simple_type_exit :
#line 2052 "cplus.met"

#line 2052 "cplus.met"
    _Debug = TRACE_RULE("simple_type",TRACE_EXIT,(PPTREE)0);
#line 2052 "cplus.met"
    _funcLevel--;
#line 2052 "cplus.met"
    return((PPTREE) -1) ;
#line 2052 "cplus.met"

#line 2052 "cplus.met"
simple_type_ret :
#line 2052 "cplus.met"
    
#line 2052 "cplus.met"
    _Debug = TRACE_RULE("simple_type",TRACE_RETURN,_retValue);
#line 2052 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2052 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 2052 "cplus.met"
    return _retValue ;
#line 2052 "cplus.met"
}
#line 2052 "cplus.met"

#line 2052 "cplus.met"
#line 2846 "cplus.met"
PPTREE cplus::simple_type_name ( int error_free)
#line 2846 "cplus.met"
{
#line 2846 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 2846 "cplus.met"
    int _value,_nbPre = 0 ;
#line 2846 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 2846 "cplus.met"
    int _Debug = TRACE_RULE("simple_type_name",TRACE_ENTER,(PPTREE)0);
#line 2846 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 2846 "cplus.met"
#line 2847 "cplus.met"
    if (! ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN( IDENT,"IDENT"))){
#line 2847 "cplus.met"
#line 2848 "cplus.met"
        {
#line 2848 "cplus.met"
            PPTREE _ptTree0=0;
#line 2848 "cplus.met"
            if ( (_ptTree0=NQUICK_CALL(_Tak(simple_type)(error_free), 128, cplus))== (PPTREE) -1 ) {
#line 2848 "cplus.met"
                MulFreeTree(1,_ptTree0);
                PROG_EXIT(simple_type_name_exit,"simple_type_name")
#line 2848 "cplus.met"
            }
#line 2848 "cplus.met"
            _retValue =_ptTree0;
#line 2848 "cplus.met"
            goto simple_type_name_ret;
#line 2848 "cplus.met"
        }
#line 2848 "cplus.met"
    } else {
#line 2848 "cplus.met"
#line 2850 "cplus.met"
        
#line 2850 "cplus.met"
        LEX_EXIT ("",0);
#line 2850 "cplus.met"
        goto simple_type_name_exit;
#line 2850 "cplus.met"
    }
#line 2850 "cplus.met"
#line 2850 "cplus.met"
#line 2850 "cplus.met"

#line 2851 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2851 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 2851 "cplus.met"
return((PPTREE) 0);
#line 2851 "cplus.met"

#line 2851 "cplus.met"
simple_type_name_exit :
#line 2851 "cplus.met"

#line 2851 "cplus.met"
    _Debug = TRACE_RULE("simple_type_name",TRACE_EXIT,(PPTREE)0);
#line 2851 "cplus.met"
    _funcLevel--;
#line 2851 "cplus.met"
    return((PPTREE) -1) ;
#line 2851 "cplus.met"

#line 2851 "cplus.met"
simple_type_name_ret :
#line 2851 "cplus.met"
    
#line 2851 "cplus.met"
    _Debug = TRACE_RULE("simple_type_name",TRACE_RETURN,_retValue);
#line 2851 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2851 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 2851 "cplus.met"
    return _retValue ;
#line 2851 "cplus.met"
}
#line 2851 "cplus.met"

#line 2851 "cplus.met"
#line 2712 "cplus.met"
PPTREE cplus::sizeof_type ( int error_free)
#line 2712 "cplus.met"
{
#line 2712 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 2712 "cplus.met"
    int _value,_nbPre = 0 ;
#line 2712 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 2712 "cplus.met"
    int _Debug = TRACE_RULE("sizeof_type",TRACE_ENTER,(PPTREE)0);
#line 2712 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 2712 "cplus.met"
#line 2712 "cplus.met"
    PPTREE expTree = (PPTREE) 0;
#line 2712 "cplus.met"
#line 2714 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 2714 "cplus.met"
    if (  !SEE_TOKEN( POUV,"(") || !(CommTerm(),1)) {
#line 2714 "cplus.met"
        MulFreeTree(1,expTree);
        TOKEN_EXIT(sizeof_type_exit,"(")
#line 2714 "cplus.met"
    } else {
#line 2714 "cplus.met"
        tokenAhead = 0 ;
#line 2714 "cplus.met"
    }
#line 2714 "cplus.met"
#line 2715 "cplus.met"
    if ( (expTree=NQUICK_CALL(_Tak(type_name)(error_free), 144, cplus))== (PPTREE) -1 ) {
#line 2715 "cplus.met"
        MulFreeTree(1,expTree);
        PROG_EXIT(sizeof_type_exit,"sizeof_type")
#line 2715 "cplus.met"
    }
#line 2715 "cplus.met"
#line 2716 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 2716 "cplus.met"
    if (  !SEE_TOKEN( PFER,")") || !(CommTerm(),1)) {
#line 2716 "cplus.met"
        MulFreeTree(1,expTree);
        TOKEN_EXIT(sizeof_type_exit,")")
#line 2716 "cplus.met"
    } else {
#line 2716 "cplus.met"
        tokenAhead = 0 ;
#line 2716 "cplus.met"
    }
#line 2716 "cplus.met"
#line 2717 "cplus.met"
    {
#line 2717 "cplus.met"
        _retValue = expTree ;
#line 2717 "cplus.met"
        goto sizeof_type_ret;
#line 2717 "cplus.met"
        
#line 2717 "cplus.met"
    }
#line 2717 "cplus.met"
#line 2717 "cplus.met"
#line 2717 "cplus.met"

#line 2718 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2718 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 2718 "cplus.met"
return((PPTREE) 0);
#line 2718 "cplus.met"

#line 2718 "cplus.met"
sizeof_type_exit :
#line 2718 "cplus.met"

#line 2718 "cplus.met"
    _Debug = TRACE_RULE("sizeof_type",TRACE_EXIT,(PPTREE)0);
#line 2718 "cplus.met"
    _funcLevel--;
#line 2718 "cplus.met"
    return((PPTREE) -1) ;
#line 2718 "cplus.met"

#line 2718 "cplus.met"
sizeof_type_ret :
#line 2718 "cplus.met"
    
#line 2718 "cplus.met"
    _Debug = TRACE_RULE("sizeof_type",TRACE_RETURN,_retValue);
#line 2718 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2718 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 2718 "cplus.met"
    return _retValue ;
#line 2718 "cplus.met"
}
#line 2718 "cplus.met"

#line 2718 "cplus.met"
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
    if (((((NPUSH_CALL_AFF_VERIF(stat = ,_Tak(statement), 136, cplus)) || 
#line 969 "cplus.met"
          (NPUSH_CALL_AFF_VERIF(stat = ,_Tak(data_declaration), 40, cplus))) || 
#line 969 "cplus.met"
         (NPUSH_CALL_AFF_VERIF(stat = ,_Tak(stat_dir), 132, cplus))) || 
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
            if ( (_ptTree0=NQUICK_CALL(_Tak(statement)(error_free), 136, cplus))== (PPTREE) -1 ) {
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
                if ( (_ptTree0=NQUICK_CALL(_Tak(stat_if_dir)(error_free), 134, cplus))== (PPTREE) -1 ) {
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
                if ( (_ptTree0=NQUICK_CALL(_Tak(stat_ifdef_dir)(error_free), 135, cplus))== (PPTREE) -1 ) {
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
                if ( (_ptTree0=NQUICK_CALL(_Tak(stat_ifdef_dir)(error_free), 135, cplus))== (PPTREE) -1 ) {
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
#line 3464 "cplus.met"
PPTREE cplus::stat_dir_switch ( int error_free)
#line 3464 "cplus.met"
{
#line 3464 "cplus.met"
    int  _oldswitchContext = switchContext;
#line 3464 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 3464 "cplus.met"
    int _value,_nbPre = 0 ;
#line 3464 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 3464 "cplus.met"
    int _Debug = TRACE_RULE("stat_dir_switch",TRACE_ENTER,(PPTREE)0);
#line 3464 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 3464 "cplus.met"
#line 3465 "cplus.met"
    {
#line 3465 "cplus.met"
        switchContext = 1 ;
#line 3465 "cplus.met"
#line 3466 "cplus.met"
        {
#line 3466 "cplus.met"
            PPTREE _ptTree0=0;
#line 3466 "cplus.met"
            if ( (_ptTree0=NQUICK_CALL(_Tak(stat_dir)(error_free), 132, cplus))== (PPTREE) -1 ) {
#line 3466 "cplus.met"
                MulFreeTree(1,_ptTree0);
                PROG_EXIT(stat_dir_switch_exit,"stat_dir_switch")
#line 3466 "cplus.met"
            }
#line 3466 "cplus.met"
            _retValue =_ptTree0;
#line 3466 "cplus.met"
            goto stat_dir_switch_ret;
#line 3466 "cplus.met"
        }
#line 3466 "cplus.met"
        switchContext =  _oldswitchContext;
#line 3466 "cplus.met"
    }
#line 3466 "cplus.met"
#line 3466 "cplus.met"
#line 3466 "cplus.met"

#line 3467 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 3467 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 3467 "cplus.met"
switchContext =  _oldswitchContext;
#line 3467 "cplus.met"
return((PPTREE) 0);
#line 3467 "cplus.met"

#line 3467 "cplus.met"
stat_dir_switch_exit :
#line 3467 "cplus.met"

#line 3467 "cplus.met"
    _Debug = TRACE_RULE("stat_dir_switch",TRACE_EXIT,(PPTREE)0);
#line 3467 "cplus.met"
    _funcLevel--;
#line 3467 "cplus.met"
    switchContext =  _oldswitchContext;
#line 3467 "cplus.met"
    return((PPTREE) -1) ;
#line 3467 "cplus.met"

#line 3467 "cplus.met"
stat_dir_switch_ret :
#line 3467 "cplus.met"
    
#line 3467 "cplus.met"
    _Debug = TRACE_RULE("stat_dir_switch",TRACE_RETURN,_retValue);
#line 3467 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 3467 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 3467 "cplus.met"
    switchContext =  _oldswitchContext;
#line 3467 "cplus.met"
    return _retValue ;
#line 3467 "cplus.met"
}
#line 3467 "cplus.met"

#line 3467 "cplus.met"
