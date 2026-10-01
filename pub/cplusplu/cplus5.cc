/*************************************************************************/
/*                                                                       */
/*        Produced by MetaGen version 2.0  -    1989-2006                 */
/*       Syntaxic Analyzer Meta Generator developped by                  */
/*                  Eric Lavillonniere                                   */
/*                                                                       */
/*************************************************************************/

#include "token.h"
#include "cplus.h"


#line 2343 "cplus.met"
PPTREE cplus::long_type ( int error_free)
#line 2343 "cplus.met"
{
#line 2343 "cplus.met"
    int  _oldinside_long = inside_long;
#line 2343 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 2343 "cplus.met"
    int _value,_nbPre = 0 ;
#line 2343 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 2343 "cplus.met"
    int _Debug = TRACE_RULE("long_type",TRACE_ENTER,(PPTREE)0);
#line 2343 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 2343 "cplus.met"
#line 2343 "cplus.met"
    PPTREE retTree = (PPTREE) 0;
#line 2343 "cplus.met"
#line 2345 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 2345 "cplus.met"
    if (  !SEE_TOKEN( LONG,"long") || !(CommTerm(),1)) {
#line 2345 "cplus.met"
        MulFreeTree(1,retTree);
        TOKEN_EXIT(long_type_exit,"long")
#line 2345 "cplus.met"
    } else {
#line 2345 "cplus.met"
        tokenAhead = 0 ;
#line 2345 "cplus.met"
    }
#line 2345 "cplus.met"
#line 2346 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 2346 "cplus.met"
    switch( lexEl.Value) {
#line 2346 "cplus.met"
#line 2347 "cplus.met"
        case FLOAT : 
#line 2347 "cplus.met"
            tokenAhead = 0 ;
#line 2347 "cplus.met"
            CommTerm();
#line 2347 "cplus.met"
#line 2348 "cplus.met"
#line 2349 "cplus.met"
            if ((inside_long) || 
#line 2349 "cplus.met"
               (inside_signed)){
#line 2349 "cplus.met"
#line 2350 "cplus.met"
                
#line 2350 "cplus.met"
                MulFreeTree(1,retTree);
                LEX_EXIT ("",0);
#line 2350 "cplus.met"
                goto long_type_exit;
#line 2350 "cplus.met"
#line 2350 "cplus.met"
            } else {
#line 2350 "cplus.met"
#line 2352 "cplus.met"
                {
#line 2352 "cplus.met"
                    PPTREE _ptTree0=0;
#line 2352 "cplus.met"
                    {
#line 2352 "cplus.met"
                        PPTREE _ptTree1=0,_ptRes1=0;
#line 2352 "cplus.met"
                        _ptRes1= MakeTree(TLONG, 1);
#line 2352 "cplus.met"
                        {
#line 2352 "cplus.met"
                            PPTREE _ptRes2=0;
#line 2352 "cplus.met"
                            _ptRes2= MakeTree(TFLOAT, 0);
#line 2352 "cplus.met"
                            _ptTree1=_ptRes2;
#line 2352 "cplus.met"
                        }
#line 2352 "cplus.met"
                        ReplaceTree(_ptRes1, 1, _ptTree1);
#line 2352 "cplus.met"
                        _ptTree0=_ptRes1;
#line 2352 "cplus.met"
                    }
#line 2352 "cplus.met"
                    _retValue =_ptTree0;
#line 2352 "cplus.met"
                    goto long_type_ret;
#line 2352 "cplus.met"
                }
#line 2352 "cplus.met"
            }
#line 2352 "cplus.met"
#line 2352 "cplus.met"
            break;
#line 2352 "cplus.met"
#line 2354 "cplus.met"
        case DOUBLE : 
#line 2354 "cplus.met"
            tokenAhead = 0 ;
#line 2354 "cplus.met"
            CommTerm();
#line 2354 "cplus.met"
#line 2355 "cplus.met"
#line 2356 "cplus.met"
            if ((inside_long) || 
#line 2356 "cplus.met"
               (inside_signed)){
#line 2356 "cplus.met"
#line 2357 "cplus.met"
                
#line 2357 "cplus.met"
                MulFreeTree(1,retTree);
                LEX_EXIT ("",0);
#line 2357 "cplus.met"
                goto long_type_exit;
#line 2357 "cplus.met"
#line 2357 "cplus.met"
            } else {
#line 2357 "cplus.met"
#line 2359 "cplus.met"
                {
#line 2359 "cplus.met"
                    PPTREE _ptTree0=0;
#line 2359 "cplus.met"
                    {
#line 2359 "cplus.met"
                        PPTREE _ptTree1=0,_ptRes1=0;
#line 2359 "cplus.met"
                        _ptRes1= MakeTree(TLONG, 1);
#line 2359 "cplus.met"
                        {
#line 2359 "cplus.met"
                            PPTREE _ptRes2=0;
#line 2359 "cplus.met"
                            _ptRes2= MakeTree(TDOUBLE, 0);
#line 2359 "cplus.met"
                            _ptTree1=_ptRes2;
#line 2359 "cplus.met"
                        }
#line 2359 "cplus.met"
                        ReplaceTree(_ptRes1, 1, _ptTree1);
#line 2359 "cplus.met"
                        _ptTree0=_ptRes1;
#line 2359 "cplus.met"
                    }
#line 2359 "cplus.met"
                    _retValue =_ptTree0;
#line 2359 "cplus.met"
                    goto long_type_ret;
#line 2359 "cplus.met"
                }
#line 2359 "cplus.met"
            }
#line 2359 "cplus.met"
#line 2359 "cplus.met"
            break;
#line 2359 "cplus.met"
#line 2365 "cplus.met"
        default : 
#line 2365 "cplus.met"
#line 2362 "cplus.met"
#line 2363 "cplus.met"
            {
#line 2363 "cplus.met"
                inside_long = 1 ;
#line 2363 "cplus.met"
#line 2364 "cplus.met"
#line 2365 "cplus.met"
                if (NPUSH_CALL_AFF_VERIF(retTree = ,_Tak(short_long_int_char), 136, cplus)){
#line 2365 "cplus.met"
#line 2366 "cplus.met"
                    {
#line 2366 "cplus.met"
                        PPTREE _ptTree0=0;
#line 2366 "cplus.met"
                        {
#line 2366 "cplus.met"
                            PPTREE _ptRes1=0;
#line 2366 "cplus.met"
                            _ptRes1= MakeTree(TLONG, 1);
#line 2366 "cplus.met"
                            ReplaceTree(_ptRes1, 1, retTree );
#line 2366 "cplus.met"
                            _ptTree0=_ptRes1;
#line 2366 "cplus.met"
                        }
#line 2366 "cplus.met"
                        _retValue =_ptTree0;
#line 2366 "cplus.met"
                        goto long_type_ret;
#line 2366 "cplus.met"
                    }
#line 2366 "cplus.met"
                } else {
#line 2366 "cplus.met"
#line 2368 "cplus.met"
                    {
#line 2368 "cplus.met"
                        PPTREE _ptTree0=0;
#line 2368 "cplus.met"
                        {
#line 2368 "cplus.met"
                            PPTREE _ptRes1=0;
#line 2368 "cplus.met"
                            _ptRes1= MakeTree(TLONG, 1);
#line 2368 "cplus.met"
                            _ptTree0=_ptRes1;
#line 2368 "cplus.met"
                        }
#line 2368 "cplus.met"
                        _retValue =_ptTree0;
#line 2368 "cplus.met"
                        goto long_type_ret;
#line 2368 "cplus.met"
                    }
#line 2368 "cplus.met"
                }
#line 2368 "cplus.met"
#line 2368 "cplus.met"
                inside_long =  _oldinside_long;
#line 2368 "cplus.met"
            }
#line 2368 "cplus.met"
#line 2368 "cplus.met"
            break;
#line 2368 "cplus.met"
    }
#line 2368 "cplus.met"
#line 2368 "cplus.met"
#line 2371 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2371 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 2371 "cplus.met"
inside_long =  _oldinside_long;
#line 2371 "cplus.met"
return((PPTREE) 0);
#line 2371 "cplus.met"

#line 2371 "cplus.met"
long_type_exit :
#line 2371 "cplus.met"

#line 2371 "cplus.met"
    _Debug = TRACE_RULE("long_type",TRACE_EXIT,(PPTREE)0);
#line 2371 "cplus.met"
    _funcLevel--;
#line 2371 "cplus.met"
    inside_long =  _oldinside_long;
#line 2371 "cplus.met"
    return((PPTREE) -1) ;
#line 2371 "cplus.met"

#line 2371 "cplus.met"
long_type_ret :
#line 2371 "cplus.met"
    
#line 2371 "cplus.met"
    _Debug = TRACE_RULE("long_type",TRACE_RETURN,_retValue);
#line 2371 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2371 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 2371 "cplus.met"
    inside_long =  _oldinside_long;
#line 2371 "cplus.met"
    return _retValue ;
#line 2371 "cplus.met"
}
#line 2371 "cplus.met"

#line 2371 "cplus.met"
#line 2119 "cplus.met"
PPTREE cplus::macro ( int error_free)
#line 2119 "cplus.met"
{
#line 2119 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 2119 "cplus.met"
    int _value,_nbPre = 0 ;
#line 2119 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 2119 "cplus.met"
    int _Debug = TRACE_RULE("macro",TRACE_ENTER,(PPTREE)0);
#line 2119 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 2119 "cplus.met"
#line 2119 "cplus.met"
    PPTREE retTree = (PPTREE) 0,valTree = (PPTREE) 0;
#line 2119 "cplus.met"
#line 2121 "cplus.met"
    (tokenAhead == 13|| (specific(),TRACE_LEX(1)));
#line 2121 "cplus.met"
    switch( lexEl.Value) {
#line 2121 "cplus.met"
#line 2122 "cplus.met"
        case META : 
#line 2122 "cplus.met"
        case DECLARE_SERIAL : 
#line 2122 "cplus.met"
            tokenAhead = 0 ;
#line 2122 "cplus.met"
            CommTerm();
#line 2122 "cplus.met"
#line 2122 "cplus.met"
            {
#line 2122 "cplus.met"
                PPTREE _ptRes0=0;
#line 2122 "cplus.met"
                _ptRes0= MakeTree(IDENT, 1);
#line 2122 "cplus.met"
                ReplaceTree(_ptRes0, 1, MakeString ("DECLARE_SERIAL"));
#line 2122 "cplus.met"
                retTree=_ptRes0;
#line 2122 "cplus.met"
            }
#line 2122 "cplus.met"
            break;
#line 2122 "cplus.met"
#line 2123 "cplus.met"
        case DECLARE_DYNAMIC : 
#line 2123 "cplus.met"
            tokenAhead = 0 ;
#line 2123 "cplus.met"
            CommTerm();
#line 2123 "cplus.met"
#line 2123 "cplus.met"
            {
#line 2123 "cplus.met"
                PPTREE _ptRes0=0;
#line 2123 "cplus.met"
                _ptRes0= MakeTree(IDENT, 1);
#line 2123 "cplus.met"
                ReplaceTree(_ptRes0, 1, MakeString ("DECLARE_DYNAMIC"));
#line 2123 "cplus.met"
                retTree=_ptRes0;
#line 2123 "cplus.met"
            }
#line 2123 "cplus.met"
            break;
#line 2123 "cplus.met"
#line 2124 "cplus.met"
        case DECLARE_MESSAGE_MAP : 
#line 2124 "cplus.met"
            tokenAhead = 0 ;
#line 2124 "cplus.met"
            CommTerm();
#line 2124 "cplus.met"
#line 2124 "cplus.met"
            {
#line 2124 "cplus.met"
                PPTREE _ptRes0=0;
#line 2124 "cplus.met"
                _ptRes0= MakeTree(IDENT, 1);
#line 2124 "cplus.met"
                ReplaceTree(_ptRes0, 1, MakeString ("DECLARE_MESSAGE_MAP"));
#line 2124 "cplus.met"
                retTree=_ptRes0;
#line 2124 "cplus.met"
            }
#line 2124 "cplus.met"
            break;
#line 2124 "cplus.met"
#line 2125 "cplus.met"
        case IMPLEMENT_DYNAMIC : 
#line 2125 "cplus.met"
            tokenAhead = 0 ;
#line 2125 "cplus.met"
            CommTerm();
#line 2125 "cplus.met"
#line 2125 "cplus.met"
            {
#line 2125 "cplus.met"
                PPTREE _ptRes0=0;
#line 2125 "cplus.met"
                _ptRes0= MakeTree(IDENT, 1);
#line 2125 "cplus.met"
                ReplaceTree(_ptRes0, 1, MakeString ("IMPLEMENT_DYNAMIC"));
#line 2125 "cplus.met"
                retTree=_ptRes0;
#line 2125 "cplus.met"
            }
#line 2125 "cplus.met"
            break;
#line 2125 "cplus.met"
#line 2126 "cplus.met"
        case IMPLEMENT_DYNCREATE : 
#line 2126 "cplus.met"
            tokenAhead = 0 ;
#line 2126 "cplus.met"
            CommTerm();
#line 2126 "cplus.met"
#line 2126 "cplus.met"
            {
#line 2126 "cplus.met"
                PPTREE _ptRes0=0;
#line 2126 "cplus.met"
                _ptRes0= MakeTree(IDENT, 1);
#line 2126 "cplus.met"
                ReplaceTree(_ptRes0, 1, MakeString ("IMPLEMENT_DYNCREATE"));
#line 2126 "cplus.met"
                retTree=_ptRes0;
#line 2126 "cplus.met"
            }
#line 2126 "cplus.met"
            break;
#line 2126 "cplus.met"
#line 2127 "cplus.met"
        case IMPLEMENT_SERIAL : 
#line 2127 "cplus.met"
            tokenAhead = 0 ;
#line 2127 "cplus.met"
            CommTerm();
#line 2127 "cplus.met"
#line 2127 "cplus.met"
            {
#line 2127 "cplus.met"
                PPTREE _ptRes0=0;
#line 2127 "cplus.met"
                _ptRes0= MakeTree(IDENT, 1);
#line 2127 "cplus.met"
                ReplaceTree(_ptRes0, 1, MakeString ("IMPLEMENT_SERIAL"));
#line 2127 "cplus.met"
                retTree=_ptRes0;
#line 2127 "cplus.met"
            }
#line 2127 "cplus.met"
            break;
#line 2127 "cplus.met"
#line 2128 "cplus.met"
        case BEGIN_MESSAGE_MAP : 
#line 2128 "cplus.met"
            tokenAhead = 0 ;
#line 2128 "cplus.met"
            CommTerm();
#line 2128 "cplus.met"
#line 2128 "cplus.met"
            {
#line 2128 "cplus.met"
                PPTREE _ptRes0=0;
#line 2128 "cplus.met"
                _ptRes0= MakeTree(IDENT, 1);
#line 2128 "cplus.met"
                ReplaceTree(_ptRes0, 1, MakeString ("BEGIN_MESSAGE_MAP"));
#line 2128 "cplus.met"
                retTree=_ptRes0;
#line 2128 "cplus.met"
            }
#line 2128 "cplus.met"
            break;
#line 2128 "cplus.met"
#line 2129 "cplus.met"
        case END_MESSAGE_MAP : 
#line 2129 "cplus.met"
            tokenAhead = 0 ;
#line 2129 "cplus.met"
            CommTerm();
#line 2129 "cplus.met"
#line 2129 "cplus.met"
            {
#line 2129 "cplus.met"
                PPTREE _ptRes0=0;
#line 2129 "cplus.met"
                _ptRes0= MakeTree(IDENT, 1);
#line 2129 "cplus.met"
                ReplaceTree(_ptRes0, 1, MakeString ("END_MESSAGE_MAP"));
#line 2129 "cplus.met"
                retTree=_ptRes0;
#line 2129 "cplus.met"
            }
#line 2129 "cplus.met"
            break;
#line 2129 "cplus.met"
#line 2130 "cplus.met"
        case CATCH_UPPER : 
#line 2130 "cplus.met"
            tokenAhead = 0 ;
#line 2130 "cplus.met"
            CommTerm();
#line 2130 "cplus.met"
#line 2130 "cplus.met"
            {
#line 2130 "cplus.met"
                PPTREE _ptRes0=0;
#line 2130 "cplus.met"
                _ptRes0= MakeTree(IDENT, 1);
#line 2130 "cplus.met"
                ReplaceTree(_ptRes0, 1, MakeString ("CATCH"));
#line 2130 "cplus.met"
                retTree=_ptRes0;
#line 2130 "cplus.met"
            }
#line 2130 "cplus.met"
            break;
#line 2130 "cplus.met"
#line 2131 "cplus.met"
        case CATCH_ALL : 
#line 2131 "cplus.met"
            tokenAhead = 0 ;
#line 2131 "cplus.met"
            CommTerm();
#line 2131 "cplus.met"
#line 2131 "cplus.met"
            {
#line 2131 "cplus.met"
                PPTREE _ptRes0=0;
#line 2131 "cplus.met"
                _ptRes0= MakeTree(IDENT, 1);
#line 2131 "cplus.met"
                ReplaceTree(_ptRes0, 1, MakeString ("CATCH_ALL"));
#line 2131 "cplus.met"
                retTree=_ptRes0;
#line 2131 "cplus.met"
            }
#line 2131 "cplus.met"
            break;
#line 2131 "cplus.met"
#line 2132 "cplus.met"
        case AND_CATCH : 
#line 2132 "cplus.met"
            tokenAhead = 0 ;
#line 2132 "cplus.met"
            CommTerm();
#line 2132 "cplus.met"
#line 2132 "cplus.met"
            {
#line 2132 "cplus.met"
                PPTREE _ptRes0=0;
#line 2132 "cplus.met"
                _ptRes0= MakeTree(IDENT, 1);
#line 2132 "cplus.met"
                ReplaceTree(_ptRes0, 1, MakeString ("AND_CATCH"));
#line 2132 "cplus.met"
                retTree=_ptRes0;
#line 2132 "cplus.met"
            }
#line 2132 "cplus.met"
            break;
#line 2132 "cplus.met"
#line 2133 "cplus.met"
        default : 
#line 2133 "cplus.met"
#line 2133 "cplus.met"
            
#line 2133 "cplus.met"
            MulFreeTree(2,retTree,valTree);
            LEX_EXIT ("",0);
#line 2133 "cplus.met"
            goto macro_exit;
#line 2133 "cplus.met"
            break;
#line 2133 "cplus.met"
    }
#line 2133 "cplus.met"
#line 2135 "cplus.met"
    {
#line 2135 "cplus.met"
        PPTREE _ptRes0=0;
#line 2135 "cplus.met"
        _ptRes0= MakeTree(MACRO, 2);
#line 2135 "cplus.met"
        ReplaceTree(_ptRes0, 1, retTree );
#line 2135 "cplus.met"
        retTree=_ptRes0;
#line 2135 "cplus.met"
    }
#line 2135 "cplus.met"
#line 2136 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 2136 "cplus.met"
    if (  !SEE_TOKEN( POUV,"(") || !(CommTerm(),1)) {
#line 2136 "cplus.met"
        MulFreeTree(2,retTree,valTree);
        TOKEN_EXIT(macro_exit,"(")
#line 2136 "cplus.met"
    } else {
#line 2136 "cplus.met"
        tokenAhead = 0 ;
#line 2136 "cplus.met"
    }
#line 2136 "cplus.met"
#line 2137 "cplus.met"
    if (NPUSH_CALL_AFF_VERIF(valTree = ,_Tak(expression), 67, cplus)){
#line 2137 "cplus.met"
#line 2138 "cplus.met"
        ReplaceTree(retTree ,2 ,valTree );
#line 2138 "cplus.met"
#line 2138 "cplus.met"
    }
#line 2138 "cplus.met"
#line 2139 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 2139 "cplus.met"
    if (  !SEE_TOKEN( PFER,")") || !(CommTerm(),1)) {
#line 2139 "cplus.met"
        MulFreeTree(2,retTree,valTree);
        TOKEN_EXIT(macro_exit,")")
#line 2139 "cplus.met"
    } else {
#line 2139 "cplus.met"
        tokenAhead = 0 ;
#line 2139 "cplus.met"
    }
#line 2139 "cplus.met"
#line 2140 "cplus.met"
    if ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN(PVIR,";") && (tokenAhead = 0,CommTerm(),1)){
#line 2140 "cplus.met"
#line 2140 "cplus.met"
    }
#line 2140 "cplus.met"
#line 2142 "cplus.met"
    {
#line 2142 "cplus.met"
        _retValue = retTree ;
#line 2142 "cplus.met"
        goto macro_ret;
#line 2142 "cplus.met"
        
#line 2142 "cplus.met"
    }
#line 2142 "cplus.met"
#line 2142 "cplus.met"
#line 2142 "cplus.met"

#line 2143 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2143 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 2143 "cplus.met"
return((PPTREE) 0);
#line 2143 "cplus.met"

#line 2143 "cplus.met"
macro_exit :
#line 2143 "cplus.met"

#line 2143 "cplus.met"
    _Debug = TRACE_RULE("macro",TRACE_EXIT,(PPTREE)0);
#line 2143 "cplus.met"
    _funcLevel--;
#line 2143 "cplus.met"
    return((PPTREE) -1) ;
#line 2143 "cplus.met"

#line 2143 "cplus.met"
macro_ret :
#line 2143 "cplus.met"
    
#line 2143 "cplus.met"
    _Debug = TRACE_RULE("macro",TRACE_RETURN,_retValue);
#line 2143 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2143 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 2143 "cplus.met"
    return _retValue ;
#line 2143 "cplus.met"
}
#line 2143 "cplus.met"

#line 2143 "cplus.met"
#line 2145 "cplus.met"
PPTREE cplus::macro_extended ( int error_free)
#line 2145 "cplus.met"
{
#line 2145 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 2145 "cplus.met"
    int _value,_nbPre = 0 ;
#line 2145 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 2145 "cplus.met"
    int _Debug = TRACE_RULE("macro_extended",TRACE_ENTER,(PPTREE)0);
#line 2145 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 2145 "cplus.met"
#line 2145 "cplus.met"
    PPTREE retTree = (PPTREE) 0,valTree = (PPTREE) 0;
#line 2145 "cplus.met"
#line 2147 "cplus.met"
#line 2148 "cplus.met"
    if(((tokenAhead == 13|| (specific(),TRACE_LEX(1)))&&TERM_OR_META(DECLARE_SERIAL,"DECLARE_SERIAL") && (tokenAhead = 0,CommTerm(),1))){
#line 2148 "cplus.met"
#line 2148 "cplus.met"
        {
#line 2148 "cplus.met"
            PPTREE _ptRes0=0;
#line 2148 "cplus.met"
            _ptRes0= MakeTree(IDENT, 1);
#line 2148 "cplus.met"
            ReplaceTree(_ptRes0, 1, MakeString ("DECLARE_SERIAL"));
#line 2148 "cplus.met"
            retTree=_ptRes0;
#line 2148 "cplus.met"
        }
#line 2148 "cplus.met"
    } else 
#line 2148 "cplus.met"
#line 2149 "cplus.met"
    if(((tokenAhead == 13|| (specific(),TRACE_LEX(1)))&&TERM_OR_META(IMPLEMENT_DYNAMIC,"IMPLEMENT_DYNAMIC") && (tokenAhead = 0,CommTerm(),1))){
#line 2149 "cplus.met"
#line 2149 "cplus.met"
        {
#line 2149 "cplus.met"
            PPTREE _ptRes0=0;
#line 2149 "cplus.met"
            _ptRes0= MakeTree(IDENT, 1);
#line 2149 "cplus.met"
            ReplaceTree(_ptRes0, 1, MakeString ("IMPLEMENT_DYNAMIC"));
#line 2149 "cplus.met"
            retTree=_ptRes0;
#line 2149 "cplus.met"
        }
#line 2149 "cplus.met"
    } else 
#line 2149 "cplus.met"
#line 2150 "cplus.met"
    if(((tokenAhead == 13|| (specific(),TRACE_LEX(1)))&&TERM_OR_META(IMPLEMENT_DYNCREATE,"IMPLEMENT_DYNCREATE") && (tokenAhead = 0,CommTerm(),1))){
#line 2150 "cplus.met"
#line 2150 "cplus.met"
        {
#line 2150 "cplus.met"
            PPTREE _ptRes0=0;
#line 2150 "cplus.met"
            _ptRes0= MakeTree(IDENT, 1);
#line 2150 "cplus.met"
            ReplaceTree(_ptRes0, 1, MakeString ("IMPLEMENT_DYNCREATE"));
#line 2150 "cplus.met"
            retTree=_ptRes0;
#line 2150 "cplus.met"
        }
#line 2150 "cplus.met"
    } else 
#line 2150 "cplus.met"
#line 2151 "cplus.met"
    if(((tokenAhead == 13|| (specific(),TRACE_LEX(1)))&&TERM_OR_META(IMPLEMENT_SERIAL,"IMPLEMENT_SERIAL") && (tokenAhead = 0,CommTerm(),1))){
#line 2151 "cplus.met"
#line 2151 "cplus.met"
        {
#line 2151 "cplus.met"
            PPTREE _ptRes0=0;
#line 2151 "cplus.met"
            _ptRes0= MakeTree(IDENT, 1);
#line 2151 "cplus.met"
            ReplaceTree(_ptRes0, 1, MakeString ("IMPLEMENT_SERIAL"));
#line 2151 "cplus.met"
            retTree=_ptRes0;
#line 2151 "cplus.met"
        }
#line 2151 "cplus.met"
    } else 
#line 2151 "cplus.met"
#line 2152 "cplus.met"
    if(((tokenAhead == 13|| (specific(),TRACE_LEX(1)))&&TERM_OR_META(DECLARE_DYNAMIC,"DECLARE_DYNAMIC") && (tokenAhead = 0,CommTerm(),1))){
#line 2152 "cplus.met"
#line 2152 "cplus.met"
        {
#line 2152 "cplus.met"
            PPTREE _ptRes0=0;
#line 2152 "cplus.met"
            _ptRes0= MakeTree(IDENT, 1);
#line 2152 "cplus.met"
            ReplaceTree(_ptRes0, 1, MakeString ("DECLARE_DYNAMIC"));
#line 2152 "cplus.met"
            retTree=_ptRes0;
#line 2152 "cplus.met"
        }
#line 2152 "cplus.met"
    } else 
#line 2152 "cplus.met"
#line 2153 "cplus.met"
    if(((tokenAhead == 13|| (specific(),TRACE_LEX(1)))&&TERM_OR_META(BEGIN_MESSAGE_MAP,"BEGIN_MESSAGE_MAP") && (tokenAhead = 0,CommTerm(),1))){
#line 2153 "cplus.met"
#line 2153 "cplus.met"
        {
#line 2153 "cplus.met"
            PPTREE _ptRes0=0;
#line 2153 "cplus.met"
            _ptRes0= MakeTree(IDENT, 1);
#line 2153 "cplus.met"
            ReplaceTree(_ptRes0, 1, MakeString ("BEGIN_MESSAGE_MAP"));
#line 2153 "cplus.met"
            retTree=_ptRes0;
#line 2153 "cplus.met"
        }
#line 2153 "cplus.met"
    } else 
#line 2153 "cplus.met"
#line 2154 "cplus.met"
    if(((tokenAhead == 13|| (specific(),TRACE_LEX(1)))&&TERM_OR_META(CATCH_UPPER,"CATCH_UPPER") && (tokenAhead = 0,CommTerm(),1))){
#line 2154 "cplus.met"
#line 2154 "cplus.met"
        {
#line 2154 "cplus.met"
            PPTREE _ptRes0=0;
#line 2154 "cplus.met"
            _ptRes0= MakeTree(IDENT, 1);
#line 2154 "cplus.met"
            ReplaceTree(_ptRes0, 1, MakeString ("CATCH"));
#line 2154 "cplus.met"
            retTree=_ptRes0;
#line 2154 "cplus.met"
        }
#line 2154 "cplus.met"
    } else 
#line 2154 "cplus.met"
#line 2155 "cplus.met"
    if(((tokenAhead == 13|| (specific(),TRACE_LEX(1)))&&TERM_OR_META(CATCH_ALL,"CATCH_ALL") && (tokenAhead = 0,CommTerm(),1))){
#line 2155 "cplus.met"
#line 2155 "cplus.met"
        {
#line 2155 "cplus.met"
            PPTREE _ptRes0=0;
#line 2155 "cplus.met"
            _ptRes0= MakeTree(IDENT, 1);
#line 2155 "cplus.met"
            ReplaceTree(_ptRes0, 1, MakeString ("CATCH_ALL"));
#line 2155 "cplus.met"
            retTree=_ptRes0;
#line 2155 "cplus.met"
        }
#line 2155 "cplus.met"
    } else 
#line 2155 "cplus.met"
#line 2156 "cplus.met"
    if(((tokenAhead == 13|| (specific(),TRACE_LEX(1)))&&TERM_OR_META(AND_CATCH,"AND_CATCH") && (tokenAhead = 0,CommTerm(),1))){
#line 2156 "cplus.met"
#line 2156 "cplus.met"
        {
#line 2156 "cplus.met"
            PPTREE _ptRes0=0;
#line 2156 "cplus.met"
            _ptRes0= MakeTree(IDENT, 1);
#line 2156 "cplus.met"
            ReplaceTree(_ptRes0, 1, MakeString ("AND_CATCH"));
#line 2156 "cplus.met"
            retTree=_ptRes0;
#line 2156 "cplus.met"
        }
#line 2156 "cplus.met"
    } else 
#line 2156 "cplus.met"
#line 2157 "cplus.met"
    if(((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN( IDENT,"IDENT"))){
#line 2157 "cplus.met"
#line 2157 "cplus.met"
        {
#line 2157 "cplus.met"
            PPTREE _ptTree0=0,_ptRes0=0;
#line 2157 "cplus.met"
            _ptRes0= MakeTree(IDENT, 1);
#line 2157 "cplus.met"
            (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 2157 "cplus.met"
            if ( ! TERM_OR_META(IDENT,"IDENT") || !(BUILD_TERM_META(_ptTree0))) {
#line 2157 "cplus.met"
                MulFreeTree(4,_ptRes0,_ptTree0,retTree,valTree);
                TOKEN_EXIT(macro_extended_exit,"IDENT")
#line 2157 "cplus.met"
            } else {
#line 2157 "cplus.met"
                tokenAhead = 0 ;
#line 2157 "cplus.met"
            }
#line 2157 "cplus.met"
            ReplaceTree(_ptRes0, 1, _ptTree0);
#line 2157 "cplus.met"
            retTree=_ptRes0;
#line 2157 "cplus.met"
        }
#line 2157 "cplus.met"
    } else 
#line 2157 "cplus.met"
#line 2158 "cplus.met"
    if (1) {
#line 2158 "cplus.met"
#line 2158 "cplus.met"
        
#line 2158 "cplus.met"
        MulFreeTree(2,retTree,valTree);
        LEX_EXIT ("",0);
#line 2158 "cplus.met"
        goto macro_extended_exit;
#line 2158 "cplus.met"
    } else 
#line 2158 "cplus.met"
     ;
#line 2158 "cplus.met"
#line 2160 "cplus.met"
    {
#line 2160 "cplus.met"
        PPTREE _ptRes0=0;
#line 2160 "cplus.met"
        _ptRes0= MakeTree(MACRO, 2);
#line 2160 "cplus.met"
        ReplaceTree(_ptRes0, 1, retTree );
#line 2160 "cplus.met"
        retTree=_ptRes0;
#line 2160 "cplus.met"
    }
#line 2160 "cplus.met"
#line 2161 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 2161 "cplus.met"
    if (  !SEE_TOKEN( POUV,"(") || !(CommTerm(),1)) {
#line 2161 "cplus.met"
        MulFreeTree(2,retTree,valTree);
        TOKEN_EXIT(macro_extended_exit,"(")
#line 2161 "cplus.met"
    } else {
#line 2161 "cplus.met"
        tokenAhead = 0 ;
#line 2161 "cplus.met"
    }
#line 2161 "cplus.met"
#line 2162 "cplus.met"
    if (NPUSH_CALL_AFF_VERIF(valTree = ,_Tak(expression), 67, cplus)){
#line 2162 "cplus.met"
#line 2163 "cplus.met"
        ReplaceTree(retTree ,2 ,valTree );
#line 2163 "cplus.met"
#line 2163 "cplus.met"
    }
#line 2163 "cplus.met"
#line 2164 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 2164 "cplus.met"
    if (  !SEE_TOKEN( PFER,")") || !(CommTerm(),1)) {
#line 2164 "cplus.met"
        MulFreeTree(2,retTree,valTree);
        TOKEN_EXIT(macro_extended_exit,")")
#line 2164 "cplus.met"
    } else {
#line 2164 "cplus.met"
        tokenAhead = 0 ;
#line 2164 "cplus.met"
    }
#line 2164 "cplus.met"
#line 2165 "cplus.met"
    if ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN(PVIR,";") && (tokenAhead = 0,CommTerm(),1)){
#line 2165 "cplus.met"
#line 2165 "cplus.met"
    }
#line 2165 "cplus.met"
#line 2167 "cplus.met"
    {
#line 2167 "cplus.met"
        _retValue = retTree ;
#line 2167 "cplus.met"
        goto macro_extended_ret;
#line 2167 "cplus.met"
        
#line 2167 "cplus.met"
    }
#line 2167 "cplus.met"
#line 2167 "cplus.met"
#line 2167 "cplus.met"

#line 2168 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2168 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 2168 "cplus.met"
return((PPTREE) 0);
#line 2168 "cplus.met"

#line 2168 "cplus.met"
macro_extended_exit :
#line 2168 "cplus.met"

#line 2168 "cplus.met"
    _Debug = TRACE_RULE("macro_extended",TRACE_EXIT,(PPTREE)0);
#line 2168 "cplus.met"
    _funcLevel--;
#line 2168 "cplus.met"
    return((PPTREE) -1) ;
#line 2168 "cplus.met"

#line 2168 "cplus.met"
macro_extended_ret :
#line 2168 "cplus.met"
    
#line 2168 "cplus.met"
    _Debug = TRACE_RULE("macro_extended",TRACE_RETURN,_retValue);
#line 2168 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2168 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 2168 "cplus.met"
    return _retValue ;
#line 2168 "cplus.met"
}
#line 2168 "cplus.met"

#line 2168 "cplus.met"
#line 916 "cplus.met"
PPTREE cplus::main_entry ( int error_free)
#line 916 "cplus.met"
{
#line 916 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 916 "cplus.met"
    int _value,_nbPre = 0 ;
#line 916 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 916 "cplus.met"
    int _Debug = TRACE_RULE("main_entry",TRACE_ENTER,(PPTREE)0);
#line 916 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 916 "cplus.met"
#line 917 "cplus.met"
    {
#line 917 "cplus.met"
        PPTREE _ptTree0=0;
#line 917 "cplus.met"
        if ( (_ptTree0=NQUICK_CALL(_Tak(program)(error_free), 120, cplus))== (PPTREE) -1 ) {
#line 917 "cplus.met"
            MulFreeTree(1,_ptTree0);
            PROG_EXIT(main_entry_exit,"main_entry")
#line 917 "cplus.met"
        }
#line 917 "cplus.met"
        _retValue =_ptTree0;
#line 917 "cplus.met"
        goto main_entry_ret;
#line 917 "cplus.met"
    }
#line 917 "cplus.met"
#line 917 "cplus.met"
#line 917 "cplus.met"

#line 918 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 918 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 918 "cplus.met"
return((PPTREE) 0);
#line 918 "cplus.met"

#line 918 "cplus.met"
main_entry_exit :
#line 918 "cplus.met"

#line 918 "cplus.met"
    _Debug = TRACE_RULE("main_entry",TRACE_EXIT,(PPTREE)0);
#line 918 "cplus.met"
    _funcLevel--;
#line 918 "cplus.met"
    return((PPTREE) -1) ;
#line 918 "cplus.met"

#line 918 "cplus.met"
main_entry_ret :
#line 918 "cplus.met"
    
#line 918 "cplus.met"
    _Debug = TRACE_RULE("main_entry",TRACE_RETURN,_retValue);
#line 918 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 918 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 918 "cplus.met"
    return _retValue ;
#line 918 "cplus.met"
}
#line 918 "cplus.met"

#line 918 "cplus.met"
#line 2445 "cplus.met"
PPTREE cplus::member_declarator ( int error_free)
#line 2445 "cplus.met"
{
#line 2445 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 2445 "cplus.met"
    int _value,_nbPre = 0 ;
#line 2445 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 2445 "cplus.met"
    int _Debug = TRACE_RULE("member_declarator",TRACE_ENTER,(PPTREE)0);
#line 2445 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 2445 "cplus.met"
#line 2445 "cplus.met"
    PPTREE retTree = (PPTREE) 0;
#line 2445 "cplus.met"
#line 2447 "cplus.met"
    {
#line 2447 "cplus.met"
        PPTREE _ptTree0=0,_ptRes0=0;
#line 2447 "cplus.met"
        _ptRes0= MakeTree(MEMBER_DECLARATOR, 2);
#line 2447 "cplus.met"
        if ( (_ptTree0=NQUICK_CALL(_Tak(complete_class_name)(error_free), 32, cplus))== (PPTREE) -1 ) {
#line 2447 "cplus.met"
            MulFreeTree(3,_ptRes0,_ptTree0,retTree);
            PROG_EXIT(member_declarator_exit,"member_declarator")
#line 2447 "cplus.met"
        }
#line 2447 "cplus.met"
        ReplaceTree(_ptRes0, 1, _ptTree0);
#line 2447 "cplus.met"
        retTree=_ptRes0;
#line 2447 "cplus.met"
    }
#line 2447 "cplus.met"
#line 2448 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 2448 "cplus.met"
    if (  !SEE_TOKEN( DPOIDPOI,"::") || !(CommTerm(),1)) {
#line 2448 "cplus.met"
        MulFreeTree(1,retTree);
        TOKEN_EXIT(member_declarator_exit,"::")
#line 2448 "cplus.met"
    } else {
#line 2448 "cplus.met"
        tokenAhead = 0 ;
#line 2448 "cplus.met"
    }
#line 2448 "cplus.met"
#line 2449 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 2449 "cplus.met"
    if (  !SEE_TOKEN( ETOI,"*") || !(CommTerm(),1)) {
#line 2449 "cplus.met"
        MulFreeTree(1,retTree);
        TOKEN_EXIT(member_declarator_exit,"*")
#line 2449 "cplus.met"
    } else {
#line 2449 "cplus.met"
        tokenAhead = 0 ;
#line 2449 "cplus.met"
    }
#line 2449 "cplus.met"
#line 2450 "cplus.met"
    {
#line 2450 "cplus.met"
        _retValue = retTree ;
#line 2450 "cplus.met"
        goto member_declarator_ret;
#line 2450 "cplus.met"
        
#line 2450 "cplus.met"
    }
#line 2450 "cplus.met"
#line 2450 "cplus.met"
#line 2450 "cplus.met"

#line 2451 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2451 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 2451 "cplus.met"
return((PPTREE) 0);
#line 2451 "cplus.met"

#line 2451 "cplus.met"
member_declarator_exit :
#line 2451 "cplus.met"

#line 2451 "cplus.met"
    _Debug = TRACE_RULE("member_declarator",TRACE_EXIT,(PPTREE)0);
#line 2451 "cplus.met"
    _funcLevel--;
#line 2451 "cplus.met"
    return((PPTREE) -1) ;
#line 2451 "cplus.met"

#line 2451 "cplus.met"
member_declarator_ret :
#line 2451 "cplus.met"
    
#line 2451 "cplus.met"
    _Debug = TRACE_RULE("member_declarator",TRACE_RETURN,_retValue);
#line 2451 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2451 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 2451 "cplus.met"
    return _retValue ;
#line 2451 "cplus.met"
}
#line 2451 "cplus.met"

#line 2451 "cplus.met"
#line 2170 "cplus.met"
PPTREE cplus::message_map ( int error_free)
#line 2170 "cplus.met"
{
#line 2170 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 2170 "cplus.met"
    int _value,_nbPre = 0 ;
#line 2170 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 2170 "cplus.met"
    int _Debug = TRACE_RULE("message_map",TRACE_ENTER,(PPTREE)0);
#line 2170 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 2170 "cplus.met"
#line 2170 "cplus.met"
    PPTREE _addlist1 = (PPTREE) 0;
#line 2170 "cplus.met"
#line 2170 "cplus.met"
    PPTREE retTree = (PPTREE) 0,list = (PPTREE) 0;
#line 2170 "cplus.met"
#line 2172 "cplus.met"
    (tokenAhead == 13|| (specific(),TRACE_LEX(1)));
#line 2172 "cplus.met"
    switch( lexEl.Value) {
#line 2172 "cplus.met"
#line 2173 "cplus.met"
        case META : 
#line 2173 "cplus.met"
        case BEGIN_MESSAGE_MAP : 
#line 2173 "cplus.met"
#line 2173 "cplus.met"
            break;
#line 2173 "cplus.met"
        default :
#line 2173 "cplus.met"
            MulFreeTree(3,_addlist1,list,retTree);
            CASE_EXIT(message_map_exit,"BEGIN_MESSAGE_MAP")
#line 2173 "cplus.met"
            break;
#line 2173 "cplus.met"
    }
#line 2173 "cplus.met"
#line 2175 "cplus.met"
    {
#line 2175 "cplus.met"
        PPTREE _ptRes0=0;
#line 2175 "cplus.met"
        _ptRes0= MakeTree(MESSAGE_MAP, 1);
#line 2175 "cplus.met"
        retTree=_ptRes0;
#line 2175 "cplus.met"
    }
#line 2175 "cplus.met"
#line 2175 "cplus.met"
    _addlist1 = list ;
#line 2175 "cplus.met"
#line 2176 "cplus.met"
    while (! ((tokenAhead == 13|| (specific(),TRACE_LEX(1)))&&SEE_TOKEN( END_MESSAGE_MAP,"END_MESSAGE_MAP"))) { 
#line 2176 "cplus.met"
#line 2177 "cplus.met"
#line 2177 "cplus.met"
        {
#line 2177 "cplus.met"
            PPTREE _ptTree0=0;
#line 2177 "cplus.met"
            if ( (_ptTree0=NQUICK_CALL(_Tak(macro_extended)(error_free), 99, cplus))== (PPTREE) -1 ) {
#line 2177 "cplus.met"
                MulFreeTree(4,_ptTree0,_addlist1,list,retTree);
                PROG_EXIT(message_map_exit,"message_map")
#line 2177 "cplus.met"
            }
#line 2177 "cplus.met"
            _addlist1 =AddList(_addlist1 , _ptTree0);
#line 2177 "cplus.met"
        }
#line 2177 "cplus.met"
#line 2177 "cplus.met"
        if (list){
#line 2177 "cplus.met"
#line 2177 "cplus.met"
            _addlist1 = SonTree (_addlist1 ,2 );
#line 2177 "cplus.met"
        } else {
#line 2177 "cplus.met"
#line 2177 "cplus.met"
            list = _addlist1 ;
#line 2177 "cplus.met"
        }
#line 2177 "cplus.met"
    } 
#line 2177 "cplus.met"
#line 2178 "cplus.met"
    if ( (NQUICK_CALL(_Tak(macro)(error_free), 98, cplus))== (PPTREE) -1 ) {
#line 2178 "cplus.met"
        MulFreeTree(3,_addlist1,list,retTree);
        PROG_EXIT(message_map_exit,"message_map")
#line 2178 "cplus.met"
    }
#line 2178 "cplus.met"
#line 2179 "cplus.met"
    {
#line 2179 "cplus.met"
        PPTREE _ptTree0=0;
#line 2179 "cplus.met"
        _ptTree0=ReplaceTree(retTree ,1 ,list );
#line 2179 "cplus.met"
        _retValue =_ptTree0;
#line 2179 "cplus.met"
        goto message_map_ret;
#line 2179 "cplus.met"
    }
#line 2179 "cplus.met"
#line 2179 "cplus.met"
#line 2179 "cplus.met"

#line 2180 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2180 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 2180 "cplus.met"
return((PPTREE) 0);
#line 2180 "cplus.met"

#line 2180 "cplus.met"
message_map_exit :
#line 2180 "cplus.met"

#line 2180 "cplus.met"
    _Debug = TRACE_RULE("message_map",TRACE_EXIT,(PPTREE)0);
#line 2180 "cplus.met"
    _funcLevel--;
#line 2180 "cplus.met"
    return((PPTREE) -1) ;
#line 2180 "cplus.met"

#line 2180 "cplus.met"
message_map_ret :
#line 2180 "cplus.met"
    
#line 2180 "cplus.met"
    _Debug = TRACE_RULE("message_map",TRACE_RETURN,_retValue);
#line 2180 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2180 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 2180 "cplus.met"
    return _retValue ;
#line 2180 "cplus.met"
}
#line 2180 "cplus.met"

#line 2180 "cplus.met"
#line 3032 "cplus.met"
PPTREE cplus::multiplicative_expression ( int error_free)
#line 3032 "cplus.met"
{
#line 3032 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 3032 "cplus.met"
    int _value,_nbPre = 0 ;
#line 3032 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 3032 "cplus.met"
    int _Debug = TRACE_RULE("multiplicative_expression",TRACE_ENTER,(PPTREE)0);
#line 3032 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 3032 "cplus.met"
#line 3032 "cplus.met"
    PPTREE expTree = (PPTREE) 0;
#line 3032 "cplus.met"
#line 3034 "cplus.met"
    if ( (expTree=NQUICK_CALL(_Tak(pm_expression)(error_free), 115, cplus))== (PPTREE) -1 ) {
#line 3034 "cplus.met"
        MulFreeTree(1,expTree);
        PROG_EXIT(multiplicative_expression_exit,"multiplicative_expression")
#line 3034 "cplus.met"
    }
#line 3034 "cplus.met"
#line 3035 "cplus.met"
    while ((((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN( ETOI,"*")) || 
#line 3035 "cplus.met"
           ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN( SLAS,"SLAS"))) || 
#line 3035 "cplus.met"
          ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN( POURC,"%"))) { 
#line 3035 "cplus.met"
#line 3036 "cplus.met"
        (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3036 "cplus.met"
        switch( lexEl.Value) {
#line 3036 "cplus.met"
#line 3037 "cplus.met"
            case ETOI : 
#line 3037 "cplus.met"
                tokenAhead = 0 ;
#line 3037 "cplus.met"
                CommTerm();
#line 3037 "cplus.met"
#line 3037 "cplus.met"
                {
#line 3037 "cplus.met"
                    PPTREE _ptTree0=0,_ptRes0=0;
#line 3037 "cplus.met"
                    _ptRes0= MakeTree(MUL, 2);
#line 3037 "cplus.met"
                    ReplaceTree(_ptRes0, 1, expTree );
#line 3037 "cplus.met"
                    if ( (_ptTree0=NQUICK_CALL(_Tak(pm_expression)(error_free), 115, cplus))== (PPTREE) -1 ) {
#line 3037 "cplus.met"
                        MulFreeTree(3,_ptRes0,_ptTree0,expTree);
                        PROG_EXIT(multiplicative_expression_exit,"multiplicative_expression")
#line 3037 "cplus.met"
                    }
#line 3037 "cplus.met"
                    ReplaceTree(_ptRes0, 2, _ptTree0);
#line 3037 "cplus.met"
                    expTree=_ptRes0;
#line 3037 "cplus.met"
                }
#line 3037 "cplus.met"
                break;
#line 3037 "cplus.met"
#line 3038 "cplus.met"
            case META : 
#line 3038 "cplus.met"
            case SLAS : 
#line 3038 "cplus.met"
                tokenAhead = 0 ;
#line 3038 "cplus.met"
                CommTerm();
#line 3038 "cplus.met"
#line 3038 "cplus.met"
                {
#line 3038 "cplus.met"
                    PPTREE _ptTree0=0,_ptRes0=0;
#line 3038 "cplus.met"
                    _ptRes0= MakeTree(DIV, 2);
#line 3038 "cplus.met"
                    ReplaceTree(_ptRes0, 1, expTree );
#line 3038 "cplus.met"
                    if ( (_ptTree0=NQUICK_CALL(_Tak(pm_expression)(error_free), 115, cplus))== (PPTREE) -1 ) {
#line 3038 "cplus.met"
                        MulFreeTree(3,_ptRes0,_ptTree0,expTree);
                        PROG_EXIT(multiplicative_expression_exit,"multiplicative_expression")
#line 3038 "cplus.met"
                    }
#line 3038 "cplus.met"
                    ReplaceTree(_ptRes0, 2, _ptTree0);
#line 3038 "cplus.met"
                    expTree=_ptRes0;
#line 3038 "cplus.met"
                }
#line 3038 "cplus.met"
                break;
#line 3038 "cplus.met"
#line 3039 "cplus.met"
            case POURC : 
#line 3039 "cplus.met"
                tokenAhead = 0 ;
#line 3039 "cplus.met"
                CommTerm();
#line 3039 "cplus.met"
#line 3039 "cplus.met"
                {
#line 3039 "cplus.met"
                    PPTREE _ptTree0=0,_ptRes0=0;
#line 3039 "cplus.met"
                    _ptRes0= MakeTree(REM, 2);
#line 3039 "cplus.met"
                    ReplaceTree(_ptRes0, 1, expTree );
#line 3039 "cplus.met"
                    if ( (_ptTree0=NQUICK_CALL(_Tak(pm_expression)(error_free), 115, cplus))== (PPTREE) -1 ) {
#line 3039 "cplus.met"
                        MulFreeTree(3,_ptRes0,_ptTree0,expTree);
                        PROG_EXIT(multiplicative_expression_exit,"multiplicative_expression")
#line 3039 "cplus.met"
                    }
#line 3039 "cplus.met"
                    ReplaceTree(_ptRes0, 2, _ptTree0);
#line 3039 "cplus.met"
                    expTree=_ptRes0;
#line 3039 "cplus.met"
                }
#line 3039 "cplus.met"
                break;
#line 3039 "cplus.met"
            default :
#line 3039 "cplus.met"
                MulFreeTree(1,expTree);
                CASE_EXIT(multiplicative_expression_exit,"either * or SLAS or %")
#line 3039 "cplus.met"
                break;
#line 3039 "cplus.met"
        }
#line 3039 "cplus.met"
    } 
#line 3039 "cplus.met"
#line 3041 "cplus.met"
    {
#line 3041 "cplus.met"
        _retValue = expTree ;
#line 3041 "cplus.met"
        goto multiplicative_expression_ret;
#line 3041 "cplus.met"
        
#line 3041 "cplus.met"
    }
#line 3041 "cplus.met"
#line 3041 "cplus.met"
#line 3041 "cplus.met"

#line 3042 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 3042 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 3042 "cplus.met"
return((PPTREE) 0);
#line 3042 "cplus.met"

#line 3042 "cplus.met"
multiplicative_expression_exit :
#line 3042 "cplus.met"

#line 3042 "cplus.met"
    _Debug = TRACE_RULE("multiplicative_expression",TRACE_EXIT,(PPTREE)0);
#line 3042 "cplus.met"
    _funcLevel--;
#line 3042 "cplus.met"
    return((PPTREE) -1) ;
#line 3042 "cplus.met"

#line 3042 "cplus.met"
multiplicative_expression_ret :
#line 3042 "cplus.met"
    
#line 3042 "cplus.met"
    _Debug = TRACE_RULE("multiplicative_expression",TRACE_RETURN,_retValue);
#line 3042 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 3042 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 3042 "cplus.met"
    return _retValue ;
#line 3042 "cplus.met"
}
#line 3042 "cplus.met"

#line 3042 "cplus.met"
#line 3945 "cplus.met"
PPTREE cplus::name_space ( int error_free)
#line 3945 "cplus.met"
{
#line 3945 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 3945 "cplus.met"
    int _value,_nbPre = 0 ;
#line 3945 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 3945 "cplus.met"
    int _Debug = TRACE_RULE("name_space",TRACE_ENTER,(PPTREE)0);
#line 3945 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 3945 "cplus.met"
#line 3945 "cplus.met"
    PPTREE _addlist1 = (PPTREE) 0;
#line 3945 "cplus.met"
#line 3945 "cplus.met"
    PPTREE list = (PPTREE) 0,retTree = (PPTREE) 0,ident = (PPTREE) 0,attrib = (PPTREE) 0;
#line 3945 "cplus.met"
#line 3947 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3947 "cplus.met"
    switch( lexEl.Value) {
#line 3947 "cplus.met"
#line 3948 "cplus.met"
        case NAMESPACE : 
#line 3948 "cplus.met"
            tokenAhead = 0 ;
#line 3948 "cplus.met"
            CommTerm();
#line 3948 "cplus.met"
#line 3949 "cplus.met"
#line 3951 "cplus.met"
            if ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&TERM_OR_META(IDENT,"IDENT") && !(tokenAhead = 0) && ( BUILD_TERM_META(ident))) {
#line 3951 "cplus.met"
#line 3953 "cplus.met"
                {
#line 3953 "cplus.met"
                    PPTREE _ptRes0=0;
#line 3953 "cplus.met"
                    _ptRes0= MakeTree(IDENT, 1);
#line 3953 "cplus.met"
                    ReplaceTree(_ptRes0, 1, ident );
#line 3953 "cplus.met"
                    ident=_ptRes0;
#line 3953 "cplus.met"
                }
#line 3953 "cplus.met"
            }
#line 3953 "cplus.met"
#line 3954 "cplus.met"
            if (NPUSH_CALL_AFF_VERIF(attrib = ,_Tak(attribute_call), 22, cplus)){
#line 3954 "cplus.met"
#line 3954 "cplus.met"
            }
#line 3954 "cplus.met"
#line 3957 "cplus.met"
            (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3957 "cplus.met"
            switch( lexEl.Value) {
#line 3957 "cplus.met"
#line 3961 "cplus.met"
                case AOUV : 
#line 3961 "cplus.met"
                    tokenAhead = 0 ;
#line 3961 "cplus.met"
                    CommTerm();
#line 3961 "cplus.met"
#line 3960 "cplus.met"
#line 3961 "cplus.met"
                    {
#line 3961 "cplus.met"
                        PPTREE _ptRes0=0;
#line 3961 "cplus.met"
                        _ptRes0= MakeTree(NAMESPACE, 3);
#line 3961 "cplus.met"
                        ReplaceTree(_ptRes0, 1, ident );
#line 3961 "cplus.met"
                        ReplaceTree(_ptRes0, 3, attrib );
#line 3961 "cplus.met"
                        retTree=_ptRes0;
#line 3961 "cplus.met"
                    }
#line 3961 "cplus.met"
#line 3961 "cplus.met"
                    _addlist1 = list ;
#line 3961 "cplus.met"
#line 3962 "cplus.met"
                    while (! ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN(AFER,"}") && (tokenAhead = 0,CommTerm(),1))) { 
#line 3962 "cplus.met"
#line 3963 "cplus.met"
#line 3964 "cplus.met"
                        {
#line 3964 "cplus.met"
                            PPTREE _ptTree0=0;
#line 3964 "cplus.met"
                            if ( (_ptTree0=NQUICK_CALL(_Tak(ext_all)(error_free), 69, cplus))== (PPTREE) -1 ) {
#line 3964 "cplus.met"
                                MulFreeTree(6,_ptTree0,_addlist1,attrib,ident,list,retTree);
                                PROG_EXIT(name_space_exit,"name_space")
#line 3964 "cplus.met"
                            }
#line 3964 "cplus.met"
                            _addlist1 =AddList(_addlist1 , _ptTree0);
#line 3964 "cplus.met"
                        }
#line 3964 "cplus.met"
#line 3964 "cplus.met"
                        if (list){
#line 3964 "cplus.met"
#line 3964 "cplus.met"
                            _addlist1 = SonTree (_addlist1 ,2 );
#line 3964 "cplus.met"
                        } else {
#line 3964 "cplus.met"
#line 3964 "cplus.met"
                            list = _addlist1 ;
#line 3964 "cplus.met"
                        }
#line 3964 "cplus.met"
#line 3964 "cplus.met"
                    } 
#line 3964 "cplus.met"
#line 3966 "cplus.met"
                    {
#line 3966 "cplus.met"
                        PPTREE _ptTree0=0;
#line 3966 "cplus.met"
                        if ( (_ptTree0=NQUICK_CALL(_Tak(none_statement)(error_free), 110, cplus))== (PPTREE) -1 ) {
#line 3966 "cplus.met"
                            MulFreeTree(6,_ptTree0,_addlist1,attrib,ident,list,retTree);
                            PROG_EXIT(name_space_exit,"name_space")
#line 3966 "cplus.met"
                        }
#line 3966 "cplus.met"
                        list =AddList(list , _ptTree0);
#line 3966 "cplus.met"
                    }
#line 3966 "cplus.met"
#line 3967 "cplus.met"
                    {
#line 3967 "cplus.met"
                        PPTREE _ptTree0=0;
#line 3967 "cplus.met"
                        {
#line 3967 "cplus.met"
                            PPTREE _ptRes1=0;
#line 3967 "cplus.met"
                            _ptRes1= MakeTree(COMPOUND_EXT, 1);
#line 3967 "cplus.met"
                            ReplaceTree(_ptRes1, 1, list );
#line 3967 "cplus.met"
                            _ptTree0=_ptRes1;
#line 3967 "cplus.met"
                        }
#line 3967 "cplus.met"
                        ReplaceTree(retTree , 2 , _ptTree0);
#line 3967 "cplus.met"
                    }
#line 3967 "cplus.met"
#line 3967 "cplus.met"
                    break;
#line 3967 "cplus.met"
#line 3971 "cplus.met"
                case EGAL : 
#line 3971 "cplus.met"
                    tokenAhead = 0 ;
#line 3971 "cplus.met"
                    CommTerm();
#line 3971 "cplus.met"
#line 3970 "cplus.met"
#line 3971 "cplus.met"
                    if ((ident == (PPTREE) 0 )){
#line 3971 "cplus.met"
#line 3972 "cplus.met"
                        
#line 3972 "cplus.met"
                        MulFreeTree(5,_addlist1,attrib,ident,list,retTree);
                        LEX_EXIT ("",0);
#line 3972 "cplus.met"
                        goto name_space_exit;
#line 3972 "cplus.met"
#line 3972 "cplus.met"
                    }
#line 3972 "cplus.met"
#line 3973 "cplus.met"
                    {
#line 3973 "cplus.met"
                        PPTREE _ptTree0=0,_ptRes0=0;
#line 3973 "cplus.met"
                        _ptRes0= MakeTree(NAMESPACE_ALIAS, 2);
#line 3973 "cplus.met"
                        ReplaceTree(_ptRes0, 1, ident );
#line 3973 "cplus.met"
                        if ( (_ptTree0=NQUICK_CALL(_Tak(complete_class_name)(error_free), 32, cplus))== (PPTREE) -1 ) {
#line 3973 "cplus.met"
                            MulFreeTree(7,_ptRes0,_ptTree0,_addlist1,attrib,ident,list,retTree);
                            PROG_EXIT(name_space_exit,"name_space")
#line 3973 "cplus.met"
                        }
#line 3973 "cplus.met"
                        ReplaceTree(_ptRes0, 2, _ptTree0);
#line 3973 "cplus.met"
                        retTree=_ptRes0;
#line 3973 "cplus.met"
                    }
#line 3973 "cplus.met"
#line 3973 "cplus.met"
                    break;
#line 3973 "cplus.met"
                default :
#line 3973 "cplus.met"
                    MulFreeTree(5,_addlist1,attrib,ident,list,retTree);
                    CASE_EXIT(name_space_exit,"either { or =")
#line 3973 "cplus.met"
                    break;
#line 3973 "cplus.met"
            }
#line 3973 "cplus.met"
#line 3973 "cplus.met"
            break;
#line 3973 "cplus.met"
#line 3977 "cplus.met"
        case USING : 
#line 3977 "cplus.met"
            tokenAhead = 0 ;
#line 3977 "cplus.met"
            CommTerm();
#line 3977 "cplus.met"
#line 3978 "cplus.met"
#line 3979 "cplus.met"
            if ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN(NAMESPACE,"namespace") && (tokenAhead = 0,CommTerm(),1)){
#line 3979 "cplus.met"
#line 3980 "cplus.met"
#line 3981 "cplus.met"
                if (NPUSH_CALL_AFF_VERIF(attrib = ,_Tak(attribute_call), 22, cplus)){
#line 3981 "cplus.met"
#line 3981 "cplus.met"
                }
#line 3981 "cplus.met"
#line 3983 "cplus.met"
                {
#line 3983 "cplus.met"
                    PPTREE _ptTree0=0,_ptRes0=0;
#line 3983 "cplus.met"
                    _ptRes0= MakeTree(USING_NAMESPACE, 2);
#line 3983 "cplus.met"
                    if ( (_ptTree0=NQUICK_CALL(_Tak(complete_class_name)(error_free), 32, cplus))== (PPTREE) -1 ) {
#line 3983 "cplus.met"
                        MulFreeTree(7,_ptRes0,_ptTree0,_addlist1,attrib,ident,list,retTree);
                        PROG_EXIT(name_space_exit,"name_space")
#line 3983 "cplus.met"
                    }
#line 3983 "cplus.met"
                    ReplaceTree(_ptRes0, 1, _ptTree0);
#line 3983 "cplus.met"
                    ReplaceTree(_ptRes0, 2, attrib );
#line 3983 "cplus.met"
                    retTree=_ptRes0;
#line 3983 "cplus.met"
                }
#line 3983 "cplus.met"
#line 3983 "cplus.met"
#line 3983 "cplus.met"
            } else {
#line 3983 "cplus.met"
#line 3986 "cplus.met"
#line 3987 "cplus.met"
                if ( (ident=NQUICK_CALL(_Tak(complete_class_name)(error_free), 32, cplus))== (PPTREE) -1 ) {
#line 3987 "cplus.met"
                    MulFreeTree(5,_addlist1,attrib,ident,list,retTree);
                    PROG_EXIT(name_space_exit,"name_space")
#line 3987 "cplus.met"
                }
#line 3987 "cplus.met"
#line 3988 "cplus.met"
                if ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN(EGAL,"=") && (tokenAhead = 0,CommTerm(),1)){
#line 3988 "cplus.met"
#line 3989 "cplus.met"
#line 3990 "cplus.met"
                    {
#line 3990 "cplus.met"
                        PPTREE _ptTree0=0,_ptRes0=0;
#line 3990 "cplus.met"
                        _ptRes0= MakeTree(USING_TYPE, 2);
#line 3990 "cplus.met"
                        ReplaceTree(_ptRes0, 1, ident );
#line 3990 "cplus.met"
                        if ( (_ptTree0=NQUICK_CALL(_Tak(type_specifier)(error_free), 156, cplus))== (PPTREE) -1 ) {
#line 3990 "cplus.met"
                            MulFreeTree(7,_ptRes0,_ptTree0,_addlist1,attrib,ident,list,retTree);
                            PROG_EXIT(name_space_exit,"name_space")
#line 3990 "cplus.met"
                        }
#line 3990 "cplus.met"
                        ReplaceTree(_ptRes0, 2, _ptTree0);
#line 3990 "cplus.met"
                        retTree=_ptRes0;
#line 3990 "cplus.met"
                    }
#line 3990 "cplus.met"
#line 3990 "cplus.met"
#line 3990 "cplus.met"
                } else {
#line 3990 "cplus.met"
#line 3993 "cplus.met"
                    {
#line 3993 "cplus.met"
                        PPTREE _ptRes0=0;
#line 3993 "cplus.met"
                        _ptRes0= MakeTree(USING, 1);
#line 3993 "cplus.met"
                        ReplaceTree(_ptRes0, 1, ident );
#line 3993 "cplus.met"
                        retTree=_ptRes0;
#line 3993 "cplus.met"
                    }
#line 3993 "cplus.met"
                }
#line 3993 "cplus.met"
#line 3993 "cplus.met"
            }
#line 3993 "cplus.met"
#line 3995 "cplus.met"
            (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3995 "cplus.met"
            if (  !SEE_TOKEN( PVIR,";") || !(CommTerm(),1)) {
#line 3995 "cplus.met"
                MulFreeTree(5,_addlist1,attrib,ident,list,retTree);
                TOKEN_EXIT(name_space_exit,";")
#line 3995 "cplus.met"
            } else {
#line 3995 "cplus.met"
                tokenAhead = 0 ;
#line 3995 "cplus.met"
            }
#line 3995 "cplus.met"
#line 3995 "cplus.met"
            break;
#line 3995 "cplus.met"
        default :
#line 3995 "cplus.met"
            MulFreeTree(5,_addlist1,attrib,ident,list,retTree);
            CASE_EXIT(name_space_exit,"either namespace or using")
#line 3995 "cplus.met"
            break;
#line 3995 "cplus.met"
    }
#line 3995 "cplus.met"
#line 3998 "cplus.met"
    {
#line 3998 "cplus.met"
        _retValue = retTree ;
#line 3998 "cplus.met"
        goto name_space_ret;
#line 3998 "cplus.met"
        
#line 3998 "cplus.met"
    }
#line 3998 "cplus.met"
#line 3998 "cplus.met"
#line 3998 "cplus.met"

#line 3999 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 3999 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 3999 "cplus.met"
return((PPTREE) 0);
#line 3999 "cplus.met"

#line 3999 "cplus.met"
name_space_exit :
#line 3999 "cplus.met"

#line 3999 "cplus.met"
    _Debug = TRACE_RULE("name_space",TRACE_EXIT,(PPTREE)0);
#line 3999 "cplus.met"
    _funcLevel--;
#line 3999 "cplus.met"
    return((PPTREE) -1) ;
#line 3999 "cplus.met"

#line 3999 "cplus.met"
name_space_ret :
#line 3999 "cplus.met"
    
#line 3999 "cplus.met"
    _Debug = TRACE_RULE("name_space",TRACE_RETURN,_retValue);
#line 3999 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 3999 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 3999 "cplus.met"
    return _retValue ;
#line 3999 "cplus.met"
}
#line 3999 "cplus.met"

#line 3999 "cplus.met"
#line 3142 "cplus.met"
PPTREE cplus::new_1 ( int error_free)
#line 3142 "cplus.met"
{
#line 3142 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 3142 "cplus.met"
    int _value,_nbPre = 0 ;
#line 3142 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 3142 "cplus.met"
    int _Debug = TRACE_RULE("new_1",TRACE_ENTER,(PPTREE)0);
#line 3142 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 3142 "cplus.met"
#line 3142 "cplus.met"
    PPTREE retTree = (PPTREE) 0;
#line 3142 "cplus.met"
#line 3144 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3144 "cplus.met"
    if (  !SEE_TOKEN( POUV,"(") || !(CommTerm(),1)) {
#line 3144 "cplus.met"
        MulFreeTree(1,retTree);
        TOKEN_EXIT(new_1_exit,"(")
#line 3144 "cplus.met"
    } else {
#line 3144 "cplus.met"
        tokenAhead = 0 ;
#line 3144 "cplus.met"
    }
#line 3144 "cplus.met"
#line 3145 "cplus.met"
    if ( (retTree=NQUICK_CALL(_Tak(expression)(error_free), 67, cplus))== (PPTREE) -1 ) {
#line 3145 "cplus.met"
        MulFreeTree(1,retTree);
        PROG_EXIT(new_1_exit,"new_1")
#line 3145 "cplus.met"
    }
#line 3145 "cplus.met"
#line 3146 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3146 "cplus.met"
    if (  !SEE_TOKEN( PFER,")") || !(CommTerm(),1)) {
#line 3146 "cplus.met"
        MulFreeTree(1,retTree);
        TOKEN_EXIT(new_1_exit,")")
#line 3146 "cplus.met"
    } else {
#line 3146 "cplus.met"
        tokenAhead = 0 ;
#line 3146 "cplus.met"
    }
#line 3146 "cplus.met"
#line 3147 "cplus.met"
    if ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN(POUV,"(") && (tokenAhead = 0,CommTerm(),1)){
#line 3147 "cplus.met"
#line 3148 "cplus.met"
#line 3149 "cplus.met"
        {
#line 3149 "cplus.met"
            PPTREE _ptTree0=0,_ptRes0=0;
#line 3149 "cplus.met"
            _ptRes0= MakeTree(NEW, 4);
#line 3149 "cplus.met"
            ReplaceTree(_ptRes0, 1, retTree );
#line 3149 "cplus.met"
            if ( (_ptTree0=NQUICK_CALL(_Tak(type_name)(error_free), 155, cplus))== (PPTREE) -1 ) {
#line 3149 "cplus.met"
                MulFreeTree(3,_ptRes0,_ptTree0,retTree);
                PROG_EXIT(new_1_exit,"new_1")
#line 3149 "cplus.met"
            }
#line 3149 "cplus.met"
            ReplaceTree(_ptRes0, 2, _ptTree0);
#line 3149 "cplus.met"
            retTree=_ptRes0;
#line 3149 "cplus.met"
        }
#line 3149 "cplus.met"
#line 3150 "cplus.met"
        (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3150 "cplus.met"
        if (  !SEE_TOKEN( PFER,")") || !(CommTerm(),1)) {
#line 3150 "cplus.met"
            MulFreeTree(1,retTree);
            TOKEN_EXIT(new_1_exit,")")
#line 3150 "cplus.met"
        } else {
#line 3150 "cplus.met"
            tokenAhead = 0 ;
#line 3150 "cplus.met"
        }
#line 3150 "cplus.met"
#line 3151 "cplus.met"
        {
#line 3151 "cplus.met"
            _retValue = retTree ;
#line 3151 "cplus.met"
            goto new_1_ret;
#line 3151 "cplus.met"
            
#line 3151 "cplus.met"
        }
#line 3151 "cplus.met"
#line 3151 "cplus.met"
#line 3151 "cplus.met"
    } else {
#line 3151 "cplus.met"
#line 3154 "cplus.met"
        {
#line 3154 "cplus.met"
            PPTREE _ptTree0=0,_ptRes0=0;
#line 3154 "cplus.met"
            _ptRes0= MakeTree(NEW, 4);
#line 3154 "cplus.met"
            ReplaceTree(_ptRes0, 1, retTree );
#line 3154 "cplus.met"
            if ( (_ptTree0=NQUICK_CALL(_Tak(new_type_name)(error_free), 108, cplus))== (PPTREE) -1 ) {
#line 3154 "cplus.met"
                MulFreeTree(3,_ptRes0,_ptTree0,retTree);
                PROG_EXIT(new_1_exit,"new_1")
#line 3154 "cplus.met"
            }
#line 3154 "cplus.met"
            ReplaceTree(_ptRes0, 2, _ptTree0);
#line 3154 "cplus.met"
            retTree=_ptRes0;
#line 3154 "cplus.met"
        }
#line 3154 "cplus.met"
    }
#line 3154 "cplus.met"
#line 3155 "cplus.met"
    {
#line 3155 "cplus.met"
        _retValue = retTree ;
#line 3155 "cplus.met"
        goto new_1_ret;
#line 3155 "cplus.met"
        
#line 3155 "cplus.met"
    }
#line 3155 "cplus.met"
#line 3155 "cplus.met"
#line 3155 "cplus.met"

#line 3156 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 3156 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 3156 "cplus.met"
return((PPTREE) 0);
#line 3156 "cplus.met"

#line 3156 "cplus.met"
new_1_exit :
#line 3156 "cplus.met"

#line 3156 "cplus.met"
    _Debug = TRACE_RULE("new_1",TRACE_EXIT,(PPTREE)0);
#line 3156 "cplus.met"
    _funcLevel--;
#line 3156 "cplus.met"
    return((PPTREE) -1) ;
#line 3156 "cplus.met"

#line 3156 "cplus.met"
new_1_ret :
#line 3156 "cplus.met"
    
#line 3156 "cplus.met"
    _Debug = TRACE_RULE("new_1",TRACE_RETURN,_retValue);
#line 3156 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 3156 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 3156 "cplus.met"
    return _retValue ;
#line 3156 "cplus.met"
}
#line 3156 "cplus.met"

#line 3156 "cplus.met"
#line 3158 "cplus.met"
PPTREE cplus::new_2 ( int error_free)
#line 3158 "cplus.met"
{
#line 3158 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 3158 "cplus.met"
    int _value,_nbPre = 0 ;
#line 3158 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 3158 "cplus.met"
    int _Debug = TRACE_RULE("new_2",TRACE_ENTER,(PPTREE)0);
#line 3158 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 3158 "cplus.met"
#line 3158 "cplus.met"
    PPTREE retTree = (PPTREE) 0;
#line 3158 "cplus.met"
#line 3160 "cplus.met"
    if ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN(POUV,"(") && (tokenAhead = 0,CommTerm(),1)){
#line 3160 "cplus.met"
#line 3161 "cplus.met"
#line 3162 "cplus.met"
        {
#line 3162 "cplus.met"
            PPTREE _ptTree0=0,_ptRes0=0;
#line 3162 "cplus.met"
            _ptRes0= MakeTree(NEW, 4);
#line 3162 "cplus.met"
            if ( (_ptTree0=NQUICK_CALL(_Tak(type_name)(error_free), 155, cplus))== (PPTREE) -1 ) {
#line 3162 "cplus.met"
                MulFreeTree(3,_ptRes0,_ptTree0,retTree);
                PROG_EXIT(new_2_exit,"new_2")
#line 3162 "cplus.met"
            }
#line 3162 "cplus.met"
            ReplaceTree(_ptRes0, 2, _ptTree0);
#line 3162 "cplus.met"
            retTree=_ptRes0;
#line 3162 "cplus.met"
        }
#line 3162 "cplus.met"
#line 3163 "cplus.met"
        (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3163 "cplus.met"
        if (  !SEE_TOKEN( PFER,")") || !(CommTerm(),1)) {
#line 3163 "cplus.met"
            MulFreeTree(1,retTree);
            TOKEN_EXIT(new_2_exit,")")
#line 3163 "cplus.met"
        } else {
#line 3163 "cplus.met"
            tokenAhead = 0 ;
#line 3163 "cplus.met"
        }
#line 3163 "cplus.met"
#line 3164 "cplus.met"
        {
#line 3164 "cplus.met"
            _retValue = retTree ;
#line 3164 "cplus.met"
            goto new_2_ret;
#line 3164 "cplus.met"
            
#line 3164 "cplus.met"
        }
#line 3164 "cplus.met"
#line 3164 "cplus.met"
#line 3164 "cplus.met"
    } else {
#line 3164 "cplus.met"
#line 3167 "cplus.met"
        {
#line 3167 "cplus.met"
            PPTREE _ptTree0=0,_ptRes0=0;
#line 3167 "cplus.met"
            _ptRes0= MakeTree(NEW, 4);
#line 3167 "cplus.met"
            if ( (_ptTree0=NQUICK_CALL(_Tak(new_type_name)(error_free), 108, cplus))== (PPTREE) -1 ) {
#line 3167 "cplus.met"
                MulFreeTree(3,_ptRes0,_ptTree0,retTree);
                PROG_EXIT(new_2_exit,"new_2")
#line 3167 "cplus.met"
            }
#line 3167 "cplus.met"
            ReplaceTree(_ptRes0, 2, _ptTree0);
#line 3167 "cplus.met"
            retTree=_ptRes0;
#line 3167 "cplus.met"
        }
#line 3167 "cplus.met"
    }
#line 3167 "cplus.met"
#line 3168 "cplus.met"
    {
#line 3168 "cplus.met"
        _retValue = retTree ;
#line 3168 "cplus.met"
        goto new_2_ret;
#line 3168 "cplus.met"
        
#line 3168 "cplus.met"
    }
#line 3168 "cplus.met"
#line 3168 "cplus.met"
#line 3168 "cplus.met"

#line 3169 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 3169 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 3169 "cplus.met"
return((PPTREE) 0);
#line 3169 "cplus.met"

#line 3169 "cplus.met"
new_2_exit :
#line 3169 "cplus.met"

#line 3169 "cplus.met"
    _Debug = TRACE_RULE("new_2",TRACE_EXIT,(PPTREE)0);
#line 3169 "cplus.met"
    _funcLevel--;
#line 3169 "cplus.met"
    return((PPTREE) -1) ;
#line 3169 "cplus.met"

#line 3169 "cplus.met"
new_2_ret :
#line 3169 "cplus.met"
    
#line 3169 "cplus.met"
    _Debug = TRACE_RULE("new_2",TRACE_RETURN,_retValue);
#line 3169 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 3169 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 3169 "cplus.met"
    return _retValue ;
#line 3169 "cplus.met"
}
#line 3169 "cplus.met"

#line 3169 "cplus.met"
#line 2684 "cplus.met"
PPTREE cplus::new_declarator ( int error_free)
#line 2684 "cplus.met"
{
#line 2684 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 2684 "cplus.met"
    int _value,_nbPre = 0 ;
#line 2684 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 2684 "cplus.met"
    int _Debug = TRACE_RULE("new_declarator",TRACE_ENTER,(PPTREE)0);
#line 2684 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 2684 "cplus.met"
#line 2684 "cplus.met"
    PPTREE valTree = (PPTREE) 0,retTree = (PPTREE) 0,expList = (PPTREE) 0;
#line 2684 "cplus.met"
#line 2686 "cplus.met"
    if (NPUSH_CALL_AFF_VERIF(valTree = ,_Tak(range_modifier), 129, cplus)){
#line 2686 "cplus.met"
#line 2687 "cplus.met"
        {
#line 2687 "cplus.met"
            PPTREE _ptTree0=0;
#line 2687 "cplus.met"
            {
#line 2687 "cplus.met"
                PPTREE _ptTree1=0;
#line 2687 "cplus.met"
                if ( (_ptTree1=NQUICK_CALL(_Tak(new_declarator)(error_free), 107, cplus))== (PPTREE) -1 ) {
#line 2687 "cplus.met"
                    MulFreeTree(5,_ptTree1,_ptTree0,expList,retTree,valTree);
                    PROG_EXIT(new_declarator_exit,"new_declarator")
#line 2687 "cplus.met"
                }
#line 2687 "cplus.met"
                _ptTree0=ReplaceTree(valTree , 2 , _ptTree1);
#line 2687 "cplus.met"
            }
#line 2687 "cplus.met"
            _retValue =_ptTree0;
#line 2687 "cplus.met"
            goto new_declarator_ret;
#line 2687 "cplus.met"
        }
#line 2687 "cplus.met"
    }
#line 2687 "cplus.met"
#line 2688 "cplus.met"
    retTree = (PPTREE) 0;
#line 2688 "cplus.met"
#line 2689 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 2689 "cplus.met"
    switch( lexEl.Value) {
#line 2689 "cplus.met"
#line 2690 "cplus.met"
        case ETOI : 
#line 2690 "cplus.met"
            tokenAhead = 0 ;
#line 2690 "cplus.met"
            CommTerm();
#line 2690 "cplus.met"
#line 2690 "cplus.met"
            {
#line 2690 "cplus.met"
                PPTREE _ptTree0=0;
#line 2690 "cplus.met"
                {
#line 2690 "cplus.met"
                    PPTREE _ptTree1=0,_ptRes1=0;
#line 2690 "cplus.met"
                    _ptRes1= MakeTree(TYP_ADDR, 1);
#line 2690 "cplus.met"
                    if ( (_ptTree1=NQUICK_CALL(_Tak(new_declarator)(error_free), 107, cplus))== (PPTREE) -1 ) {
#line 2690 "cplus.met"
                        MulFreeTree(6,_ptRes1,_ptTree1,_ptTree0,expList,retTree,valTree);
                        PROG_EXIT(new_declarator_exit,"new_declarator")
#line 2690 "cplus.met"
                    }
#line 2690 "cplus.met"
                    ReplaceTree(_ptRes1, 1, _ptTree1);
#line 2690 "cplus.met"
                    _ptTree0=_ptRes1;
#line 2690 "cplus.met"
                }
#line 2690 "cplus.met"
                _retValue =_ptTree0;
#line 2690 "cplus.met"
                goto new_declarator_ret;
#line 2690 "cplus.met"
            }
#line 2690 "cplus.met"
            break;
#line 2690 "cplus.met"
#line 2691 "cplus.met"
        case META : 
#line 2691 "cplus.met"
        case IDENT : 
#line 2691 "cplus.met"
#line 2692 "cplus.met"
#line 2693 "cplus.met"
            if ( (valTree=NQUICK_CALL(_Tak(member_declarator)(error_free), 101, cplus))== (PPTREE) -1 ) {
#line 2693 "cplus.met"
                MulFreeTree(3,expList,retTree,valTree);
                PROG_EXIT(new_declarator_exit,"new_declarator")
#line 2693 "cplus.met"
            }
#line 2693 "cplus.met"
#line 2694 "cplus.met"
            {
#line 2694 "cplus.met"
                PPTREE _ptTree0=0;
#line 2694 "cplus.met"
                {
#line 2694 "cplus.met"
                    PPTREE _ptTree1=0;
#line 2694 "cplus.met"
                    if ( (_ptTree1=NQUICK_CALL(_Tak(new_declarator)(error_free), 107, cplus))== (PPTREE) -1 ) {
#line 2694 "cplus.met"
                        MulFreeTree(5,_ptTree1,_ptTree0,expList,retTree,valTree);
                        PROG_EXIT(new_declarator_exit,"new_declarator")
#line 2694 "cplus.met"
                    }
#line 2694 "cplus.met"
                    _ptTree0=ReplaceTree(valTree , 2 , _ptTree1);
#line 2694 "cplus.met"
                }
#line 2694 "cplus.met"
                _retValue =_ptTree0;
#line 2694 "cplus.met"
                goto new_declarator_ret;
#line 2694 "cplus.met"
            }
#line 2694 "cplus.met"
#line 2694 "cplus.met"
            break;
#line 2694 "cplus.met"
#line 2703 "cplus.met"
        default : 
#line 2703 "cplus.met"
#line 2699 "cplus.met"
#line 2701 "cplus.met"
            while ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN(COUV,"[") && (tokenAhead = 0,CommTerm(),1)) { 
#line 2701 "cplus.met"
#line 2702 "cplus.met"
#line 2703 "cplus.met"
                if (NPUSH_CALL_AFF_VERIF(expList = ,_Tak(expression), 67, cplus)){
#line 2703 "cplus.met"
#line 2704 "cplus.met"
                    {
#line 2704 "cplus.met"
                        PPTREE _ptRes0=0;
#line 2704 "cplus.met"
                        _ptRes0= MakeTree(TYP_ARRAY, 2);
#line 2704 "cplus.met"
                        ReplaceTree(_ptRes0, 1, retTree );
#line 2704 "cplus.met"
                        ReplaceTree(_ptRes0, 2, expList );
#line 2704 "cplus.met"
                        retTree=_ptRes0;
#line 2704 "cplus.met"
                    }
#line 2704 "cplus.met"
                } else {
#line 2704 "cplus.met"
#line 2706 "cplus.met"
                    {
#line 2706 "cplus.met"
                        PPTREE _ptRes0=0;
#line 2706 "cplus.met"
                        _ptRes0= MakeTree(TYP_ARRAY, 2);
#line 2706 "cplus.met"
                        ReplaceTree(_ptRes0, 1, retTree );
#line 2706 "cplus.met"
                        retTree=_ptRes0;
#line 2706 "cplus.met"
                    }
#line 2706 "cplus.met"
                }
#line 2706 "cplus.met"
#line 2707 "cplus.met"
                (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 2707 "cplus.met"
                if (  !SEE_TOKEN( CFER,"]") || !(CommTerm(),1)) {
#line 2707 "cplus.met"
                    MulFreeTree(3,expList,retTree,valTree);
                    TOKEN_EXIT(new_declarator_exit,"]")
#line 2707 "cplus.met"
                } else {
#line 2707 "cplus.met"
                    tokenAhead = 0 ;
#line 2707 "cplus.met"
                }
#line 2707 "cplus.met"
#line 2707 "cplus.met"
            } 
#line 2707 "cplus.met"
#line 2709 "cplus.met"
            {
#line 2709 "cplus.met"
                _retValue = retTree ;
#line 2709 "cplus.met"
                goto new_declarator_ret;
#line 2709 "cplus.met"
                
#line 2709 "cplus.met"
            }
#line 2709 "cplus.met"
#line 2709 "cplus.met"
            break;
#line 2709 "cplus.met"
    }
#line 2709 "cplus.met"
#line 2709 "cplus.met"
#line 2711 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2711 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 2711 "cplus.met"
return((PPTREE) 0);
#line 2711 "cplus.met"

#line 2711 "cplus.met"
new_declarator_exit :
#line 2711 "cplus.met"

#line 2711 "cplus.met"
    _Debug = TRACE_RULE("new_declarator",TRACE_EXIT,(PPTREE)0);
#line 2711 "cplus.met"
    _funcLevel--;
#line 2711 "cplus.met"
    return((PPTREE) -1) ;
#line 2711 "cplus.met"

#line 2711 "cplus.met"
new_declarator_ret :
#line 2711 "cplus.met"
    
#line 2711 "cplus.met"
    _Debug = TRACE_RULE("new_declarator",TRACE_RETURN,_retValue);
#line 2711 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2711 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 2711 "cplus.met"
    return _retValue ;
#line 2711 "cplus.met"
}
#line 2711 "cplus.met"

#line 2711 "cplus.met"
#line 2867 "cplus.met"
PPTREE cplus::new_type_name ( int error_free)
#line 2867 "cplus.met"
{
#line 2867 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 2867 "cplus.met"
    int _value,_nbPre = 0 ;
#line 2867 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 2867 "cplus.met"
    int _Debug = TRACE_RULE("new_type_name",TRACE_ENTER,(PPTREE)0);
#line 2867 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 2867 "cplus.met"
#line 2867 "cplus.met"
    PPTREE retTree = (PPTREE) 0,valTree = (PPTREE) 0;
#line 2867 "cplus.met"
#line 2869 "cplus.met"
    if ( (retTree=NQUICK_CALL(_Tak(type_specifier)(error_free), 156, cplus))== (PPTREE) -1 ) {
#line 2869 "cplus.met"
        MulFreeTree(2,retTree,valTree);
        PROG_EXIT(new_type_name_exit,"new_type_name")
#line 2869 "cplus.met"
    }
#line 2869 "cplus.met"
#line 2870 "cplus.met"
    if (NPUSH_CALL_AFF_VERIF(valTree = ,_Tak(new_declarator), 107, cplus)){
#line 2870 "cplus.met"
#line 2871 "cplus.met"
        {
#line 2871 "cplus.met"
            PPTREE _ptRes0=0;
#line 2871 "cplus.met"
            _ptRes0= MakeTree(NEW_DECLARATOR, 2);
#line 2871 "cplus.met"
            ReplaceTree(_ptRes0, 1, retTree );
#line 2871 "cplus.met"
            ReplaceTree(_ptRes0, 2, valTree );
#line 2871 "cplus.met"
            valTree=_ptRes0;
#line 2871 "cplus.met"
        }
#line 2871 "cplus.met"
    } else {
#line 2871 "cplus.met"
#line 2873 "cplus.met"
        valTree = retTree ;
#line 2873 "cplus.met"
    }
#line 2873 "cplus.met"
#line 2874 "cplus.met"
    {
#line 2874 "cplus.met"
        _retValue = valTree ;
#line 2874 "cplus.met"
        goto new_type_name_ret;
#line 2874 "cplus.met"
        
#line 2874 "cplus.met"
    }
#line 2874 "cplus.met"
#line 2874 "cplus.met"
#line 2874 "cplus.met"

#line 2875 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2875 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 2875 "cplus.met"
return((PPTREE) 0);
#line 2875 "cplus.met"

#line 2875 "cplus.met"
new_type_name_exit :
#line 2875 "cplus.met"

#line 2875 "cplus.met"
    _Debug = TRACE_RULE("new_type_name",TRACE_EXIT,(PPTREE)0);
#line 2875 "cplus.met"
    _funcLevel--;
#line 2875 "cplus.met"
    return((PPTREE) -1) ;
#line 2875 "cplus.met"

#line 2875 "cplus.met"
new_type_name_ret :
#line 2875 "cplus.met"
    
#line 2875 "cplus.met"
    _Debug = TRACE_RULE("new_type_name",TRACE_RETURN,_retValue);
#line 2875 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2875 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 2875 "cplus.met"
    return _retValue ;
#line 2875 "cplus.met"
}
#line 2875 "cplus.met"

#line 2875 "cplus.met"
#line 2390 "cplus.met"
PPTREE cplus::noexcept_call ( int error_free)
#line 2390 "cplus.met"
{
#line 2390 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 2390 "cplus.met"
    int _value,_nbPre = 0 ;
#line 2390 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 2390 "cplus.met"
    int _Debug = TRACE_RULE("noexcept_call",TRACE_ENTER,(PPTREE)0);
#line 2390 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 2390 "cplus.met"
#line 2390 "cplus.met"
    PPTREE retTree = (PPTREE) 0;
#line 2390 "cplus.met"
#line 2392 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 2392 "cplus.met"
    if (  !SEE_TOKEN( NOEXCEPT,"noexcept") || !(CommTerm(),1)) {
#line 2392 "cplus.met"
        MulFreeTree(1,retTree);
        TOKEN_EXIT(noexcept_call_exit,"noexcept")
#line 2392 "cplus.met"
    } else {
#line 2392 "cplus.met"
        tokenAhead = 0 ;
#line 2392 "cplus.met"
    }
#line 2392 "cplus.met"
#line 2393 "cplus.met"
    {
#line 2393 "cplus.met"
        PPTREE _ptRes0=0;
#line 2393 "cplus.met"
        _ptRes0= MakeTree(NOEXCEPT, 1);
#line 2393 "cplus.met"
        retTree=_ptRes0;
#line 2393 "cplus.met"
    }
#line 2393 "cplus.met"
#line 2394 "cplus.met"
    if ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN(POUV,"(") && (tokenAhead = 0,CommTerm(),1)){
#line 2394 "cplus.met"
#line 2395 "cplus.met"
#line 2396 "cplus.met"
        {
#line 2396 "cplus.met"
            PPTREE _ptTree0=0;
#line 2396 "cplus.met"
            if ( (_ptTree0=NQUICK_CALL(_Tak(expression)(error_free), 67, cplus))== (PPTREE) -1 ) {
#line 2396 "cplus.met"
                MulFreeTree(2,_ptTree0,retTree);
                PROG_EXIT(noexcept_call_exit,"noexcept_call")
#line 2396 "cplus.met"
            }
#line 2396 "cplus.met"
            ReplaceTree(retTree , 1 , _ptTree0);
#line 2396 "cplus.met"
        }
#line 2396 "cplus.met"
#line 2397 "cplus.met"
        (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 2397 "cplus.met"
        if (  !SEE_TOKEN( PFER,")") || !(CommTerm(),1)) {
#line 2397 "cplus.met"
            MulFreeTree(1,retTree);
            TOKEN_EXIT(noexcept_call_exit,")")
#line 2397 "cplus.met"
        } else {
#line 2397 "cplus.met"
            tokenAhead = 0 ;
#line 2397 "cplus.met"
        }
#line 2397 "cplus.met"
#line 2397 "cplus.met"
#line 2397 "cplus.met"
    }
#line 2397 "cplus.met"
#line 2399 "cplus.met"
    {
#line 2399 "cplus.met"
        _retValue = retTree ;
#line 2399 "cplus.met"
        goto noexcept_call_ret;
#line 2399 "cplus.met"
        
#line 2399 "cplus.met"
    }
#line 2399 "cplus.met"
#line 2399 "cplus.met"
#line 2399 "cplus.met"

#line 2400 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2400 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 2400 "cplus.met"
return((PPTREE) 0);
#line 2400 "cplus.met"

#line 2400 "cplus.met"
noexcept_call_exit :
#line 2400 "cplus.met"

#line 2400 "cplus.met"
    _Debug = TRACE_RULE("noexcept_call",TRACE_EXIT,(PPTREE)0);
#line 2400 "cplus.met"
    _funcLevel--;
#line 2400 "cplus.met"
    return((PPTREE) -1) ;
#line 2400 "cplus.met"

#line 2400 "cplus.met"
noexcept_call_ret :
#line 2400 "cplus.met"
    
#line 2400 "cplus.met"
    _Debug = TRACE_RULE("noexcept_call",TRACE_RETURN,_retValue);
#line 2400 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2400 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 2400 "cplus.met"
    return _retValue ;
#line 2400 "cplus.met"
}
#line 2400 "cplus.met"

#line 2400 "cplus.met"
#line 3651 "cplus.met"
PPTREE cplus::none_statement ( int error_free)
#line 3651 "cplus.met"
{
#line 3651 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 3651 "cplus.met"
    int _value,_nbPre = 0 ;
#line 3651 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 3651 "cplus.met"
    int _Debug = TRACE_RULE("none_statement",TRACE_ENTER,(PPTREE)0);
#line 3651 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 3651 "cplus.met"
#line 3652 "cplus.met"
    {
#line 3652 "cplus.met"
        PPTREE _ptTree0=0;
#line 3652 "cplus.met"
        {
#line 3652 "cplus.met"
            PPTREE _ptRes1=0;
#line 3652 "cplus.met"
            _ptRes1= MakeTree(NONE, 0);
#line 3652 "cplus.met"
            _ptTree0=_ptRes1;
#line 3652 "cplus.met"
        }
#line 3652 "cplus.met"
        _retValue =_ptTree0;
#line 3652 "cplus.met"
        goto none_statement_ret;
#line 3652 "cplus.met"
    }
#line 3652 "cplus.met"
#line 3652 "cplus.met"
#line 3652 "cplus.met"

#line 3653 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 3653 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 3653 "cplus.met"
return((PPTREE) 0);
#line 3653 "cplus.met"

#line 3653 "cplus.met"
none_statement_exit :
#line 3653 "cplus.met"

#line 3653 "cplus.met"
    _Debug = TRACE_RULE("none_statement",TRACE_EXIT,(PPTREE)0);
#line 3653 "cplus.met"
    _funcLevel--;
#line 3653 "cplus.met"
    return((PPTREE) -1) ;
#line 3653 "cplus.met"

#line 3653 "cplus.met"
none_statement_ret :
#line 3653 "cplus.met"
    
#line 3653 "cplus.met"
    _Debug = TRACE_RULE("none_statement",TRACE_RETURN,_retValue);
#line 3653 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 3653 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 3653 "cplus.met"
    return _retValue ;
#line 3653 "cplus.met"
}
#line 3653 "cplus.met"

#line 3653 "cplus.met"
#line 3320 "cplus.met"
PPTREE cplus::operator_function_name ( int error_free)
#line 3320 "cplus.met"
{
#line 3320 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 3320 "cplus.met"
    int _value,_nbPre = 0 ;
#line 3320 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 3320 "cplus.met"
    int _Debug = TRACE_RULE("operator_function_name",TRACE_ENTER,(PPTREE)0);
#line 3320 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 3320 "cplus.met"
#line 3320 "cplus.met"
    PPTREE retTree = (PPTREE) 0,valTree = (PPTREE) 0,list = (PPTREE) 0;
#line 3320 "cplus.met"
#line 3322 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3322 "cplus.met"
    if (  !SEE_TOKEN( OPERATOR,"operator") || !(CommTerm(),1)) {
#line 3322 "cplus.met"
        MulFreeTree(3,list,retTree,valTree);
        TOKEN_EXIT(operator_function_name_exit,"operator")
#line 3322 "cplus.met"
    } else {
#line 3322 "cplus.met"
        tokenAhead = 0 ;
#line 3322 "cplus.met"
    }
#line 3322 "cplus.met"
#line 3323 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3323 "cplus.met"
    switch( lexEl.Value) {
#line 3323 "cplus.met"
#line 3324 "cplus.met"
        case NEW : 
#line 3324 "cplus.met"
            tokenAhead = 0 ;
#line 3324 "cplus.met"
            CommTerm();
#line 3324 "cplus.met"
#line 3324 "cplus.met"
            {
#line 3324 "cplus.met"
                PPTREE _ptTree0=0;
#line 3324 "cplus.met"
                {
#line 3324 "cplus.met"
                    PPTREE _ptRes1=0;
#line 3324 "cplus.met"
                    _ptRes1= MakeTree(OPERATOR, 1);
#line 3324 "cplus.met"
                    ReplaceTree(_ptRes1, 1, MakeString ("new"));
#line 3324 "cplus.met"
                    _ptTree0=_ptRes1;
#line 3324 "cplus.met"
                }
#line 3324 "cplus.met"
                _retValue =_ptTree0;
#line 3324 "cplus.met"
                goto operator_function_name_ret;
#line 3324 "cplus.met"
            }
#line 3324 "cplus.met"
            break;
#line 3324 "cplus.met"
#line 3325 "cplus.met"
        case DELETE : 
#line 3325 "cplus.met"
            tokenAhead = 0 ;
#line 3325 "cplus.met"
            CommTerm();
#line 3325 "cplus.met"
#line 3325 "cplus.met"
            {
#line 3325 "cplus.met"
                PPTREE _ptTree0=0;
#line 3325 "cplus.met"
                {
#line 3325 "cplus.met"
                    PPTREE _ptRes1=0;
#line 3325 "cplus.met"
                    _ptRes1= MakeTree(OPERATOR, 1);
#line 3325 "cplus.met"
                    ReplaceTree(_ptRes1, 1, MakeString ("delete"));
#line 3325 "cplus.met"
                    _ptTree0=_ptRes1;
#line 3325 "cplus.met"
                }
#line 3325 "cplus.met"
                _retValue =_ptTree0;
#line 3325 "cplus.met"
                goto operator_function_name_ret;
#line 3325 "cplus.met"
            }
#line 3325 "cplus.met"
            break;
#line 3325 "cplus.met"
#line 3326 "cplus.met"
        case PLUS : 
#line 3326 "cplus.met"
            tokenAhead = 0 ;
#line 3326 "cplus.met"
            CommTerm();
#line 3326 "cplus.met"
#line 3326 "cplus.met"
            {
#line 3326 "cplus.met"
                PPTREE _ptTree0=0;
#line 3326 "cplus.met"
                {
#line 3326 "cplus.met"
                    PPTREE _ptRes1=0;
#line 3326 "cplus.met"
                    _ptRes1= MakeTree(OPERATOR, 1);
#line 3326 "cplus.met"
                    ReplaceTree(_ptRes1, 1, MakeString ("+"));
#line 3326 "cplus.met"
                    _ptTree0=_ptRes1;
#line 3326 "cplus.met"
                }
#line 3326 "cplus.met"
                _retValue =_ptTree0;
#line 3326 "cplus.met"
                goto operator_function_name_ret;
#line 3326 "cplus.met"
            }
#line 3326 "cplus.met"
            break;
#line 3326 "cplus.met"
#line 3327 "cplus.met"
        case TIRE : 
#line 3327 "cplus.met"
            tokenAhead = 0 ;
#line 3327 "cplus.met"
            CommTerm();
#line 3327 "cplus.met"
#line 3327 "cplus.met"
            {
#line 3327 "cplus.met"
                PPTREE _ptTree0=0;
#line 3327 "cplus.met"
                {
#line 3327 "cplus.met"
                    PPTREE _ptRes1=0;
#line 3327 "cplus.met"
                    _ptRes1= MakeTree(OPERATOR, 1);
#line 3327 "cplus.met"
                    ReplaceTree(_ptRes1, 1, MakeString ("-"));
#line 3327 "cplus.met"
                    _ptTree0=_ptRes1;
#line 3327 "cplus.met"
                }
#line 3327 "cplus.met"
                _retValue =_ptTree0;
#line 3327 "cplus.met"
                goto operator_function_name_ret;
#line 3327 "cplus.met"
            }
#line 3327 "cplus.met"
            break;
#line 3327 "cplus.met"
#line 3328 "cplus.met"
        case ETOI : 
#line 3328 "cplus.met"
            tokenAhead = 0 ;
#line 3328 "cplus.met"
            CommTerm();
#line 3328 "cplus.met"
#line 3328 "cplus.met"
            {
#line 3328 "cplus.met"
                PPTREE _ptTree0=0;
#line 3328 "cplus.met"
                {
#line 3328 "cplus.met"
                    PPTREE _ptRes1=0;
#line 3328 "cplus.met"
                    _ptRes1= MakeTree(OPERATOR, 1);
#line 3328 "cplus.met"
                    ReplaceTree(_ptRes1, 1, MakeString ("*"));
#line 3328 "cplus.met"
                    _ptTree0=_ptRes1;
#line 3328 "cplus.met"
                }
#line 3328 "cplus.met"
                _retValue =_ptTree0;
#line 3328 "cplus.met"
                goto operator_function_name_ret;
#line 3328 "cplus.met"
            }
#line 3328 "cplus.met"
            break;
#line 3328 "cplus.met"
#line 3329 "cplus.met"
        case META : 
#line 3329 "cplus.met"
        case SLAS : 
#line 3329 "cplus.met"
            tokenAhead = 0 ;
#line 3329 "cplus.met"
            CommTerm();
#line 3329 "cplus.met"
#line 3329 "cplus.met"
            {
#line 3329 "cplus.met"
                PPTREE _ptTree0=0;
#line 3329 "cplus.met"
                {
#line 3329 "cplus.met"
                    PPTREE _ptRes1=0;
#line 3329 "cplus.met"
                    _ptRes1= MakeTree(OPERATOR, 1);
#line 3329 "cplus.met"
                    ReplaceTree(_ptRes1, 1, MakeString ("/"));
#line 3329 "cplus.met"
                    _ptTree0=_ptRes1;
#line 3329 "cplus.met"
                }
#line 3329 "cplus.met"
                _retValue =_ptTree0;
#line 3329 "cplus.met"
                goto operator_function_name_ret;
#line 3329 "cplus.met"
            }
#line 3329 "cplus.met"
            break;
#line 3329 "cplus.met"
#line 3330 "cplus.met"
        case POURC : 
#line 3330 "cplus.met"
            tokenAhead = 0 ;
#line 3330 "cplus.met"
            CommTerm();
#line 3330 "cplus.met"
#line 3330 "cplus.met"
            {
#line 3330 "cplus.met"
                PPTREE _ptTree0=0;
#line 3330 "cplus.met"
                {
#line 3330 "cplus.met"
                    PPTREE _ptRes1=0;
#line 3330 "cplus.met"
                    _ptRes1= MakeTree(OPERATOR, 1);
#line 3330 "cplus.met"
                    ReplaceTree(_ptRes1, 1, MakeString ("%"));
#line 3330 "cplus.met"
                    _ptTree0=_ptRes1;
#line 3330 "cplus.met"
                }
#line 3330 "cplus.met"
                _retValue =_ptTree0;
#line 3330 "cplus.met"
                goto operator_function_name_ret;
#line 3330 "cplus.met"
            }
#line 3330 "cplus.met"
            break;
#line 3330 "cplus.met"
#line 3331 "cplus.met"
        case CHAP : 
#line 3331 "cplus.met"
            tokenAhead = 0 ;
#line 3331 "cplus.met"
            CommTerm();
#line 3331 "cplus.met"
#line 3331 "cplus.met"
            {
#line 3331 "cplus.met"
                PPTREE _ptTree0=0;
#line 3331 "cplus.met"
                {
#line 3331 "cplus.met"
                    PPTREE _ptRes1=0;
#line 3331 "cplus.met"
                    _ptRes1= MakeTree(OPERATOR, 1);
#line 3331 "cplus.met"
                    ReplaceTree(_ptRes1, 1, MakeString ("^"));
#line 3331 "cplus.met"
                    _ptTree0=_ptRes1;
#line 3331 "cplus.met"
                }
#line 3331 "cplus.met"
                _retValue =_ptTree0;
#line 3331 "cplus.met"
                goto operator_function_name_ret;
#line 3331 "cplus.met"
            }
#line 3331 "cplus.met"
            break;
#line 3331 "cplus.met"
#line 3332 "cplus.met"
        case ETCO : 
#line 3332 "cplus.met"
            tokenAhead = 0 ;
#line 3332 "cplus.met"
            CommTerm();
#line 3332 "cplus.met"
#line 3332 "cplus.met"
            {
#line 3332 "cplus.met"
                PPTREE _ptTree0=0;
#line 3332 "cplus.met"
                {
#line 3332 "cplus.met"
                    PPTREE _ptRes1=0;
#line 3332 "cplus.met"
                    _ptRes1= MakeTree(OPERATOR, 1);
#line 3332 "cplus.met"
                    ReplaceTree(_ptRes1, 1, MakeString ("&"));
#line 3332 "cplus.met"
                    _ptTree0=_ptRes1;
#line 3332 "cplus.met"
                }
#line 3332 "cplus.met"
                _retValue =_ptTree0;
#line 3332 "cplus.met"
                goto operator_function_name_ret;
#line 3332 "cplus.met"
            }
#line 3332 "cplus.met"
            break;
#line 3332 "cplus.met"
#line 3333 "cplus.met"
        case VBAR : 
#line 3333 "cplus.met"
            tokenAhead = 0 ;
#line 3333 "cplus.met"
            CommTerm();
#line 3333 "cplus.met"
#line 3333 "cplus.met"
            {
#line 3333 "cplus.met"
                PPTREE _ptTree0=0;
#line 3333 "cplus.met"
                {
#line 3333 "cplus.met"
                    PPTREE _ptRes1=0;
#line 3333 "cplus.met"
                    _ptRes1= MakeTree(OPERATOR, 1);
#line 3333 "cplus.met"
                    ReplaceTree(_ptRes1, 1, MakeString ("|"));
#line 3333 "cplus.met"
                    _ptTree0=_ptRes1;
#line 3333 "cplus.met"
                }
#line 3333 "cplus.met"
                _retValue =_ptTree0;
#line 3333 "cplus.met"
                goto operator_function_name_ret;
#line 3333 "cplus.met"
            }
#line 3333 "cplus.met"
            break;
#line 3333 "cplus.met"
#line 3334 "cplus.met"
        case TILD : 
#line 3334 "cplus.met"
            tokenAhead = 0 ;
#line 3334 "cplus.met"
            CommTerm();
#line 3334 "cplus.met"
#line 3334 "cplus.met"
            {
#line 3334 "cplus.met"
                PPTREE _ptTree0=0;
#line 3334 "cplus.met"
                {
#line 3334 "cplus.met"
                    PPTREE _ptRes1=0;
#line 3334 "cplus.met"
                    _ptRes1= MakeTree(OPERATOR, 1);
#line 3334 "cplus.met"
                    ReplaceTree(_ptRes1, 1, MakeString ("~"));
#line 3334 "cplus.met"
                    _ptTree0=_ptRes1;
#line 3334 "cplus.met"
                }
#line 3334 "cplus.met"
                _retValue =_ptTree0;
#line 3334 "cplus.met"
                goto operator_function_name_ret;
#line 3334 "cplus.met"
            }
#line 3334 "cplus.met"
            break;
#line 3334 "cplus.met"
#line 3335 "cplus.met"
        case EXCL : 
#line 3335 "cplus.met"
            tokenAhead = 0 ;
#line 3335 "cplus.met"
            CommTerm();
#line 3335 "cplus.met"
#line 3335 "cplus.met"
            {
#line 3335 "cplus.met"
                PPTREE _ptTree0=0;
#line 3335 "cplus.met"
                {
#line 3335 "cplus.met"
                    PPTREE _ptRes1=0;
#line 3335 "cplus.met"
                    _ptRes1= MakeTree(OPERATOR, 1);
#line 3335 "cplus.met"
                    ReplaceTree(_ptRes1, 1, MakeString ("!"));
#line 3335 "cplus.met"
                    _ptTree0=_ptRes1;
#line 3335 "cplus.met"
                }
#line 3335 "cplus.met"
                _retValue =_ptTree0;
#line 3335 "cplus.met"
                goto operator_function_name_ret;
#line 3335 "cplus.met"
            }
#line 3335 "cplus.met"
            break;
#line 3335 "cplus.met"
#line 3336 "cplus.met"
        case EGAL : 
#line 3336 "cplus.met"
            tokenAhead = 0 ;
#line 3336 "cplus.met"
            CommTerm();
#line 3336 "cplus.met"
#line 3336 "cplus.met"
            {
#line 3336 "cplus.met"
                PPTREE _ptTree0=0;
#line 3336 "cplus.met"
                {
#line 3336 "cplus.met"
                    PPTREE _ptRes1=0;
#line 3336 "cplus.met"
                    _ptRes1= MakeTree(OPERATOR, 1);
#line 3336 "cplus.met"
                    ReplaceTree(_ptRes1, 1, MakeString ("="));
#line 3336 "cplus.met"
                    _ptTree0=_ptRes1;
#line 3336 "cplus.met"
                }
#line 3336 "cplus.met"
                _retValue =_ptTree0;
#line 3336 "cplus.met"
                goto operator_function_name_ret;
#line 3336 "cplus.met"
            }
#line 3336 "cplus.met"
            break;
#line 3336 "cplus.met"
#line 3337 "cplus.met"
        case SUPE : 
#line 3337 "cplus.met"
            tokenAhead = 0 ;
#line 3337 "cplus.met"
            CommTerm();
#line 3337 "cplus.met"
#line 3337 "cplus.met"
            {
#line 3337 "cplus.met"
                PPTREE _ptTree0=0;
#line 3337 "cplus.met"
                {
#line 3337 "cplus.met"
                    PPTREE _ptRes1=0;
#line 3337 "cplus.met"
                    _ptRes1= MakeTree(OPERATOR, 1);
#line 3337 "cplus.met"
                    ReplaceTree(_ptRes1, 1, MakeString (">"));
#line 3337 "cplus.met"
                    _ptTree0=_ptRes1;
#line 3337 "cplus.met"
                }
#line 3337 "cplus.met"
                _retValue =_ptTree0;
#line 3337 "cplus.met"
                goto operator_function_name_ret;
#line 3337 "cplus.met"
            }
#line 3337 "cplus.met"
            break;
#line 3337 "cplus.met"
#line 3338 "cplus.met"
        case INFE : 
#line 3338 "cplus.met"
            tokenAhead = 0 ;
#line 3338 "cplus.met"
            CommTerm();
#line 3338 "cplus.met"
#line 3338 "cplus.met"
            {
#line 3338 "cplus.met"
                PPTREE _ptTree0=0;
#line 3338 "cplus.met"
                {
#line 3338 "cplus.met"
                    PPTREE _ptRes1=0;
#line 3338 "cplus.met"
                    _ptRes1= MakeTree(OPERATOR, 1);
#line 3338 "cplus.met"
                    ReplaceTree(_ptRes1, 1, MakeString ("<"));
#line 3338 "cplus.met"
                    _ptTree0=_ptRes1;
#line 3338 "cplus.met"
                }
#line 3338 "cplus.met"
                _retValue =_ptTree0;
#line 3338 "cplus.met"
                goto operator_function_name_ret;
#line 3338 "cplus.met"
            }
#line 3338 "cplus.met"
            break;
#line 3338 "cplus.met"
#line 3339 "cplus.met"
        case PLUSEGAL : 
#line 3339 "cplus.met"
            tokenAhead = 0 ;
#line 3339 "cplus.met"
            CommTerm();
#line 3339 "cplus.met"
#line 3339 "cplus.met"
            {
#line 3339 "cplus.met"
                PPTREE _ptTree0=0;
#line 3339 "cplus.met"
                {
#line 3339 "cplus.met"
                    PPTREE _ptRes1=0;
#line 3339 "cplus.met"
                    _ptRes1= MakeTree(OPERATOR, 1);
#line 3339 "cplus.met"
                    ReplaceTree(_ptRes1, 1, MakeString ("+="));
#line 3339 "cplus.met"
                    _ptTree0=_ptRes1;
#line 3339 "cplus.met"
                }
#line 3339 "cplus.met"
                _retValue =_ptTree0;
#line 3339 "cplus.met"
                goto operator_function_name_ret;
#line 3339 "cplus.met"
            }
#line 3339 "cplus.met"
            break;
#line 3339 "cplus.met"
#line 3340 "cplus.met"
        case TIREEGAL : 
#line 3340 "cplus.met"
            tokenAhead = 0 ;
#line 3340 "cplus.met"
            CommTerm();
#line 3340 "cplus.met"
#line 3340 "cplus.met"
            {
#line 3340 "cplus.met"
                PPTREE _ptTree0=0;
#line 3340 "cplus.met"
                {
#line 3340 "cplus.met"
                    PPTREE _ptRes1=0;
#line 3340 "cplus.met"
                    _ptRes1= MakeTree(OPERATOR, 1);
#line 3340 "cplus.met"
                    ReplaceTree(_ptRes1, 1, MakeString ("-="));
#line 3340 "cplus.met"
                    _ptTree0=_ptRes1;
#line 3340 "cplus.met"
                }
#line 3340 "cplus.met"
                _retValue =_ptTree0;
#line 3340 "cplus.met"
                goto operator_function_name_ret;
#line 3340 "cplus.met"
            }
#line 3340 "cplus.met"
            break;
#line 3340 "cplus.met"
#line 3341 "cplus.met"
        case ETOIEGAL : 
#line 3341 "cplus.met"
            tokenAhead = 0 ;
#line 3341 "cplus.met"
            CommTerm();
#line 3341 "cplus.met"
#line 3341 "cplus.met"
            {
#line 3341 "cplus.met"
                PPTREE _ptTree0=0;
#line 3341 "cplus.met"
                {
#line 3341 "cplus.met"
                    PPTREE _ptRes1=0;
#line 3341 "cplus.met"
                    _ptRes1= MakeTree(OPERATOR, 1);
#line 3341 "cplus.met"
                    ReplaceTree(_ptRes1, 1, MakeString ("*="));
#line 3341 "cplus.met"
                    _ptTree0=_ptRes1;
#line 3341 "cplus.met"
                }
#line 3341 "cplus.met"
                _retValue =_ptTree0;
#line 3341 "cplus.met"
                goto operator_function_name_ret;
#line 3341 "cplus.met"
            }
#line 3341 "cplus.met"
            break;
#line 3341 "cplus.met"
#line 3342 "cplus.met"
        case SLASEGAL : 
#line 3342 "cplus.met"
            tokenAhead = 0 ;
#line 3342 "cplus.met"
            CommTerm();
#line 3342 "cplus.met"
#line 3342 "cplus.met"
            {
#line 3342 "cplus.met"
                PPTREE _ptTree0=0;
#line 3342 "cplus.met"
                {
#line 3342 "cplus.met"
                    PPTREE _ptRes1=0;
#line 3342 "cplus.met"
                    _ptRes1= MakeTree(OPERATOR, 1);
#line 3342 "cplus.met"
                    ReplaceTree(_ptRes1, 1, MakeString ("/="));
#line 3342 "cplus.met"
                    _ptTree0=_ptRes1;
#line 3342 "cplus.met"
                }
#line 3342 "cplus.met"
                _retValue =_ptTree0;
#line 3342 "cplus.met"
                goto operator_function_name_ret;
#line 3342 "cplus.met"
            }
#line 3342 "cplus.met"
            break;
#line 3342 "cplus.met"
#line 3343 "cplus.met"
        case POURCEGAL : 
#line 3343 "cplus.met"
            tokenAhead = 0 ;
#line 3343 "cplus.met"
            CommTerm();
#line 3343 "cplus.met"
#line 3343 "cplus.met"
            {
#line 3343 "cplus.met"
                PPTREE _ptTree0=0;
#line 3343 "cplus.met"
                {
#line 3343 "cplus.met"
                    PPTREE _ptRes1=0;
#line 3343 "cplus.met"
                    _ptRes1= MakeTree(OPERATOR, 1);
#line 3343 "cplus.met"
                    ReplaceTree(_ptRes1, 1, MakeString ("%="));
#line 3343 "cplus.met"
                    _ptTree0=_ptRes1;
#line 3343 "cplus.met"
                }
#line 3343 "cplus.met"
                _retValue =_ptTree0;
#line 3343 "cplus.met"
                goto operator_function_name_ret;
#line 3343 "cplus.met"
            }
#line 3343 "cplus.met"
            break;
#line 3343 "cplus.met"
#line 3344 "cplus.met"
        case CHAPEGAL : 
#line 3344 "cplus.met"
            tokenAhead = 0 ;
#line 3344 "cplus.met"
            CommTerm();
#line 3344 "cplus.met"
#line 3344 "cplus.met"
            {
#line 3344 "cplus.met"
                PPTREE _ptTree0=0;
#line 3344 "cplus.met"
                {
#line 3344 "cplus.met"
                    PPTREE _ptRes1=0;
#line 3344 "cplus.met"
                    _ptRes1= MakeTree(OPERATOR, 1);
#line 3344 "cplus.met"
                    ReplaceTree(_ptRes1, 1, MakeString ("^="));
#line 3344 "cplus.met"
                    _ptTree0=_ptRes1;
#line 3344 "cplus.met"
                }
#line 3344 "cplus.met"
                _retValue =_ptTree0;
#line 3344 "cplus.met"
                goto operator_function_name_ret;
#line 3344 "cplus.met"
            }
#line 3344 "cplus.met"
            break;
#line 3344 "cplus.met"
#line 3345 "cplus.met"
        case ETCOEGAL : 
#line 3345 "cplus.met"
            tokenAhead = 0 ;
#line 3345 "cplus.met"
            CommTerm();
#line 3345 "cplus.met"
#line 3345 "cplus.met"
            {
#line 3345 "cplus.met"
                PPTREE _ptTree0=0;
#line 3345 "cplus.met"
                {
#line 3345 "cplus.met"
                    PPTREE _ptRes1=0;
#line 3345 "cplus.met"
                    _ptRes1= MakeTree(OPERATOR, 1);
#line 3345 "cplus.met"
                    ReplaceTree(_ptRes1, 1, MakeString ("&="));
#line 3345 "cplus.met"
                    _ptTree0=_ptRes1;
#line 3345 "cplus.met"
                }
#line 3345 "cplus.met"
                _retValue =_ptTree0;
#line 3345 "cplus.met"
                goto operator_function_name_ret;
#line 3345 "cplus.met"
            }
#line 3345 "cplus.met"
            break;
#line 3345 "cplus.met"
#line 3346 "cplus.met"
        case VBAREGAL : 
#line 3346 "cplus.met"
            tokenAhead = 0 ;
#line 3346 "cplus.met"
            CommTerm();
#line 3346 "cplus.met"
#line 3346 "cplus.met"
            {
#line 3346 "cplus.met"
                PPTREE _ptTree0=0;
#line 3346 "cplus.met"
                {
#line 3346 "cplus.met"
                    PPTREE _ptRes1=0;
#line 3346 "cplus.met"
                    _ptRes1= MakeTree(OPERATOR, 1);
#line 3346 "cplus.met"
                    ReplaceTree(_ptRes1, 1, MakeString ("|="));
#line 3346 "cplus.met"
                    _ptTree0=_ptRes1;
#line 3346 "cplus.met"
                }
#line 3346 "cplus.met"
                _retValue =_ptTree0;
#line 3346 "cplus.met"
                goto operator_function_name_ret;
#line 3346 "cplus.met"
            }
#line 3346 "cplus.met"
            break;
#line 3346 "cplus.met"
#line 3347 "cplus.met"
        case EXCLEGAL : 
#line 3347 "cplus.met"
            tokenAhead = 0 ;
#line 3347 "cplus.met"
            CommTerm();
#line 3347 "cplus.met"
#line 3347 "cplus.met"
            {
#line 3347 "cplus.met"
                PPTREE _ptTree0=0;
#line 3347 "cplus.met"
                {
#line 3347 "cplus.met"
                    PPTREE _ptRes1=0;
#line 3347 "cplus.met"
                    _ptRes1= MakeTree(OPERATOR, 1);
#line 3347 "cplus.met"
                    ReplaceTree(_ptRes1, 1, MakeString ("!="));
#line 3347 "cplus.met"
                    _ptTree0=_ptRes1;
#line 3347 "cplus.met"
                }
#line 3347 "cplus.met"
                _retValue =_ptTree0;
#line 3347 "cplus.met"
                goto operator_function_name_ret;
#line 3347 "cplus.met"
            }
#line 3347 "cplus.met"
            break;
#line 3347 "cplus.met"
#line 3348 "cplus.met"
        case EGALEGAL : 
#line 3348 "cplus.met"
            tokenAhead = 0 ;
#line 3348 "cplus.met"
            CommTerm();
#line 3348 "cplus.met"
#line 3348 "cplus.met"
            {
#line 3348 "cplus.met"
                PPTREE _ptTree0=0;
#line 3348 "cplus.met"
                {
#line 3348 "cplus.met"
                    PPTREE _ptRes1=0;
#line 3348 "cplus.met"
                    _ptRes1= MakeTree(OPERATOR, 1);
#line 3348 "cplus.met"
                    ReplaceTree(_ptRes1, 1, MakeString ("=="));
#line 3348 "cplus.met"
                    _ptTree0=_ptRes1;
#line 3348 "cplus.met"
                }
#line 3348 "cplus.met"
                _retValue =_ptTree0;
#line 3348 "cplus.met"
                goto operator_function_name_ret;
#line 3348 "cplus.met"
            }
#line 3348 "cplus.met"
            break;
#line 3348 "cplus.met"
#line 3349 "cplus.met"
        case INFEEGAL : 
#line 3349 "cplus.met"
            tokenAhead = 0 ;
#line 3349 "cplus.met"
            CommTerm();
#line 3349 "cplus.met"
#line 3349 "cplus.met"
            {
#line 3349 "cplus.met"
                PPTREE _ptTree0=0;
#line 3349 "cplus.met"
                {
#line 3349 "cplus.met"
                    PPTREE _ptRes1=0;
#line 3349 "cplus.met"
                    _ptRes1= MakeTree(OPERATOR, 1);
#line 3349 "cplus.met"
                    ReplaceTree(_ptRes1, 1, MakeString ("<="));
#line 3349 "cplus.met"
                    _ptTree0=_ptRes1;
#line 3349 "cplus.met"
                }
#line 3349 "cplus.met"
                _retValue =_ptTree0;
#line 3349 "cplus.met"
                goto operator_function_name_ret;
#line 3349 "cplus.met"
            }
#line 3349 "cplus.met"
            break;
#line 3349 "cplus.met"
#line 3350 "cplus.met"
        case SUPEEGAL : 
#line 3350 "cplus.met"
            tokenAhead = 0 ;
#line 3350 "cplus.met"
            CommTerm();
#line 3350 "cplus.met"
#line 3350 "cplus.met"
            {
#line 3350 "cplus.met"
                PPTREE _ptTree0=0;
#line 3350 "cplus.met"
                {
#line 3350 "cplus.met"
                    PPTREE _ptRes1=0;
#line 3350 "cplus.met"
                    _ptRes1= MakeTree(OPERATOR, 1);
#line 3350 "cplus.met"
                    ReplaceTree(_ptRes1, 1, MakeString (">="));
#line 3350 "cplus.met"
                    _ptTree0=_ptRes1;
#line 3350 "cplus.met"
                }
#line 3350 "cplus.met"
                _retValue =_ptTree0;
#line 3350 "cplus.met"
                goto operator_function_name_ret;
#line 3350 "cplus.met"
            }
#line 3350 "cplus.met"
            break;
#line 3350 "cplus.met"
#line 3351 "cplus.met"
        case INFEINFE : 
#line 3351 "cplus.met"
            tokenAhead = 0 ;
#line 3351 "cplus.met"
            CommTerm();
#line 3351 "cplus.met"
#line 3351 "cplus.met"
            {
#line 3351 "cplus.met"
                PPTREE _ptTree0=0;
#line 3351 "cplus.met"
                {
#line 3351 "cplus.met"
                    PPTREE _ptRes1=0;
#line 3351 "cplus.met"
                    _ptRes1= MakeTree(OPERATOR, 1);
#line 3351 "cplus.met"
                    ReplaceTree(_ptRes1, 1, MakeString ("<<"));
#line 3351 "cplus.met"
                    _ptTree0=_ptRes1;
#line 3351 "cplus.met"
                }
#line 3351 "cplus.met"
                _retValue =_ptTree0;
#line 3351 "cplus.met"
                goto operator_function_name_ret;
#line 3351 "cplus.met"
            }
#line 3351 "cplus.met"
            break;
#line 3351 "cplus.met"
#line 3352 "cplus.met"
        case SUPESUPE : 
#line 3352 "cplus.met"
            tokenAhead = 0 ;
#line 3352 "cplus.met"
            CommTerm();
#line 3352 "cplus.met"
#line 3352 "cplus.met"
            {
#line 3352 "cplus.met"
                PPTREE _ptTree0=0;
#line 3352 "cplus.met"
                {
#line 3352 "cplus.met"
                    PPTREE _ptRes1=0;
#line 3352 "cplus.met"
                    _ptRes1= MakeTree(OPERATOR, 1);
#line 3352 "cplus.met"
                    ReplaceTree(_ptRes1, 1, MakeString (">>"));
#line 3352 "cplus.met"
                    _ptTree0=_ptRes1;
#line 3352 "cplus.met"
                }
#line 3352 "cplus.met"
                _retValue =_ptTree0;
#line 3352 "cplus.met"
                goto operator_function_name_ret;
#line 3352 "cplus.met"
            }
#line 3352 "cplus.met"
            break;
#line 3352 "cplus.met"
#line 3353 "cplus.met"
        case INFEINFEEGAL : 
#line 3353 "cplus.met"
            tokenAhead = 0 ;
#line 3353 "cplus.met"
            CommTerm();
#line 3353 "cplus.met"
#line 3353 "cplus.met"
            {
#line 3353 "cplus.met"
                PPTREE _ptTree0=0;
#line 3353 "cplus.met"
                {
#line 3353 "cplus.met"
                    PPTREE _ptRes1=0;
#line 3353 "cplus.met"
                    _ptRes1= MakeTree(OPERATOR, 1);
#line 3353 "cplus.met"
                    ReplaceTree(_ptRes1, 1, MakeString ("<<="));
#line 3353 "cplus.met"
                    _ptTree0=_ptRes1;
#line 3353 "cplus.met"
                }
#line 3353 "cplus.met"
                _retValue =_ptTree0;
#line 3353 "cplus.met"
                goto operator_function_name_ret;
#line 3353 "cplus.met"
            }
#line 3353 "cplus.met"
            break;
#line 3353 "cplus.met"
#line 3354 "cplus.met"
        case SUPESUPEEGAL : 
#line 3354 "cplus.met"
            tokenAhead = 0 ;
#line 3354 "cplus.met"
            CommTerm();
#line 3354 "cplus.met"
#line 3354 "cplus.met"
            {
#line 3354 "cplus.met"
                PPTREE _ptTree0=0;
#line 3354 "cplus.met"
                {
#line 3354 "cplus.met"
                    PPTREE _ptRes1=0;
#line 3354 "cplus.met"
                    _ptRes1= MakeTree(OPERATOR, 1);
#line 3354 "cplus.met"
                    ReplaceTree(_ptRes1, 1, MakeString (">>="));
#line 3354 "cplus.met"
                    _ptTree0=_ptRes1;
#line 3354 "cplus.met"
                }
#line 3354 "cplus.met"
                _retValue =_ptTree0;
#line 3354 "cplus.met"
                goto operator_function_name_ret;
#line 3354 "cplus.met"
            }
#line 3354 "cplus.met"
            break;
#line 3354 "cplus.met"
#line 3355 "cplus.met"
        case ETCOETCO : 
#line 3355 "cplus.met"
            tokenAhead = 0 ;
#line 3355 "cplus.met"
            CommTerm();
#line 3355 "cplus.met"
#line 3355 "cplus.met"
            {
#line 3355 "cplus.met"
                PPTREE _ptTree0=0;
#line 3355 "cplus.met"
                {
#line 3355 "cplus.met"
                    PPTREE _ptRes1=0;
#line 3355 "cplus.met"
                    _ptRes1= MakeTree(OPERATOR, 1);
#line 3355 "cplus.met"
                    ReplaceTree(_ptRes1, 1, MakeString ("&&"));
#line 3355 "cplus.met"
                    _ptTree0=_ptRes1;
#line 3355 "cplus.met"
                }
#line 3355 "cplus.met"
                _retValue =_ptTree0;
#line 3355 "cplus.met"
                goto operator_function_name_ret;
#line 3355 "cplus.met"
            }
#line 3355 "cplus.met"
            break;
#line 3355 "cplus.met"
#line 3356 "cplus.met"
        case VBARVBAR : 
#line 3356 "cplus.met"
            tokenAhead = 0 ;
#line 3356 "cplus.met"
            CommTerm();
#line 3356 "cplus.met"
#line 3356 "cplus.met"
            {
#line 3356 "cplus.met"
                PPTREE _ptTree0=0;
#line 3356 "cplus.met"
                {
#line 3356 "cplus.met"
                    PPTREE _ptRes1=0;
#line 3356 "cplus.met"
                    _ptRes1= MakeTree(OPERATOR, 1);
#line 3356 "cplus.met"
                    ReplaceTree(_ptRes1, 1, MakeString ("||"));
#line 3356 "cplus.met"
                    _ptTree0=_ptRes1;
#line 3356 "cplus.met"
                }
#line 3356 "cplus.met"
                _retValue =_ptTree0;
#line 3356 "cplus.met"
                goto operator_function_name_ret;
#line 3356 "cplus.met"
            }
#line 3356 "cplus.met"
            break;
#line 3356 "cplus.met"
#line 3357 "cplus.met"
        case PLUSPLUS : 
#line 3357 "cplus.met"
            tokenAhead = 0 ;
#line 3357 "cplus.met"
            CommTerm();
#line 3357 "cplus.met"
#line 3357 "cplus.met"
            {
#line 3357 "cplus.met"
                PPTREE _ptTree0=0;
#line 3357 "cplus.met"
                {
#line 3357 "cplus.met"
                    PPTREE _ptRes1=0;
#line 3357 "cplus.met"
                    _ptRes1= MakeTree(OPERATOR, 1);
#line 3357 "cplus.met"
                    ReplaceTree(_ptRes1, 1, MakeString ("++"));
#line 3357 "cplus.met"
                    _ptTree0=_ptRes1;
#line 3357 "cplus.met"
                }
#line 3357 "cplus.met"
                _retValue =_ptTree0;
#line 3357 "cplus.met"
                goto operator_function_name_ret;
#line 3357 "cplus.met"
            }
#line 3357 "cplus.met"
            break;
#line 3357 "cplus.met"
#line 3358 "cplus.met"
        case TIRETIRE : 
#line 3358 "cplus.met"
            tokenAhead = 0 ;
#line 3358 "cplus.met"
            CommTerm();
#line 3358 "cplus.met"
#line 3358 "cplus.met"
            {
#line 3358 "cplus.met"
                PPTREE _ptTree0=0;
#line 3358 "cplus.met"
                {
#line 3358 "cplus.met"
                    PPTREE _ptRes1=0;
#line 3358 "cplus.met"
                    _ptRes1= MakeTree(OPERATOR, 1);
#line 3358 "cplus.met"
                    ReplaceTree(_ptRes1, 1, MakeString ("--"));
#line 3358 "cplus.met"
                    _ptTree0=_ptRes1;
#line 3358 "cplus.met"
                }
#line 3358 "cplus.met"
                _retValue =_ptTree0;
#line 3358 "cplus.met"
                goto operator_function_name_ret;
#line 3358 "cplus.met"
            }
#line 3358 "cplus.met"
            break;
#line 3358 "cplus.met"
#line 3359 "cplus.met"
        case VIRG : 
#line 3359 "cplus.met"
            tokenAhead = 0 ;
#line 3359 "cplus.met"
            CommTerm();
#line 3359 "cplus.met"
#line 3359 "cplus.met"
            {
#line 3359 "cplus.met"
                PPTREE _ptTree0=0;
#line 3359 "cplus.met"
                {
#line 3359 "cplus.met"
                    PPTREE _ptRes1=0;
#line 3359 "cplus.met"
                    _ptRes1= MakeTree(OPERATOR, 1);
#line 3359 "cplus.met"
                    ReplaceTree(_ptRes1, 1, MakeString (","));
#line 3359 "cplus.met"
                    _ptTree0=_ptRes1;
#line 3359 "cplus.met"
                }
#line 3359 "cplus.met"
                _retValue =_ptTree0;
#line 3359 "cplus.met"
                goto operator_function_name_ret;
#line 3359 "cplus.met"
            }
#line 3359 "cplus.met"
            break;
#line 3359 "cplus.met"
#line 3360 "cplus.met"
        case TIRESUPE : 
#line 3360 "cplus.met"
            tokenAhead = 0 ;
#line 3360 "cplus.met"
            CommTerm();
#line 3360 "cplus.met"
#line 3360 "cplus.met"
            {
#line 3360 "cplus.met"
                PPTREE _ptTree0=0;
#line 3360 "cplus.met"
                {
#line 3360 "cplus.met"
                    PPTREE _ptRes1=0;
#line 3360 "cplus.met"
                    _ptRes1= MakeTree(OPERATOR, 1);
#line 3360 "cplus.met"
                    ReplaceTree(_ptRes1, 1, MakeString ("->"));
#line 3360 "cplus.met"
                    _ptTree0=_ptRes1;
#line 3360 "cplus.met"
                }
#line 3360 "cplus.met"
                _retValue =_ptTree0;
#line 3360 "cplus.met"
                goto operator_function_name_ret;
#line 3360 "cplus.met"
            }
#line 3360 "cplus.met"
            break;
#line 3360 "cplus.met"
#line 3361 "cplus.met"
        case TIRESUPEETOI : 
#line 3361 "cplus.met"
            tokenAhead = 0 ;
#line 3361 "cplus.met"
            CommTerm();
#line 3361 "cplus.met"
#line 3361 "cplus.met"
            {
#line 3361 "cplus.met"
                PPTREE _ptTree0=0;
#line 3361 "cplus.met"
                {
#line 3361 "cplus.met"
                    PPTREE _ptRes1=0;
#line 3361 "cplus.met"
                    _ptRes1= MakeTree(OPERATOR, 1);
#line 3361 "cplus.met"
                    ReplaceTree(_ptRes1, 1, MakeString ("->*"));
#line 3361 "cplus.met"
                    _ptTree0=_ptRes1;
#line 3361 "cplus.met"
                }
#line 3361 "cplus.met"
                _retValue =_ptTree0;
#line 3361 "cplus.met"
                goto operator_function_name_ret;
#line 3361 "cplus.met"
            }
#line 3361 "cplus.met"
            break;
#line 3361 "cplus.met"
#line 3364 "cplus.met"
        case POUV : 
#line 3364 "cplus.met"
            tokenAhead = 0 ;
#line 3364 "cplus.met"
            CommTerm();
#line 3364 "cplus.met"
#line 3363 "cplus.met"
#line 3364 "cplus.met"
            (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3364 "cplus.met"
            if (  !SEE_TOKEN( PFER,")") || !(CommTerm(),1)) {
#line 3364 "cplus.met"
                MulFreeTree(3,list,retTree,valTree);
                TOKEN_EXIT(operator_function_name_exit,")")
#line 3364 "cplus.met"
            } else {
#line 3364 "cplus.met"
                tokenAhead = 0 ;
#line 3364 "cplus.met"
            }
#line 3364 "cplus.met"
#line 3365 "cplus.met"
            {
#line 3365 "cplus.met"
                PPTREE _ptTree0=0;
#line 3365 "cplus.met"
                {
#line 3365 "cplus.met"
                    PPTREE _ptRes1=0;
#line 3365 "cplus.met"
                    _ptRes1= MakeTree(OPERATOR, 1);
#line 3365 "cplus.met"
                    ReplaceTree(_ptRes1, 1, MakeString ("()"));
#line 3365 "cplus.met"
                    _ptTree0=_ptRes1;
#line 3365 "cplus.met"
                }
#line 3365 "cplus.met"
                _retValue =_ptTree0;
#line 3365 "cplus.met"
                goto operator_function_name_ret;
#line 3365 "cplus.met"
            }
#line 3365 "cplus.met"
#line 3365 "cplus.met"
            break;
#line 3365 "cplus.met"
#line 3369 "cplus.met"
        case COUV : 
#line 3369 "cplus.met"
            tokenAhead = 0 ;
#line 3369 "cplus.met"
            CommTerm();
#line 3369 "cplus.met"
#line 3368 "cplus.met"
#line 3369 "cplus.met"
            (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3369 "cplus.met"
            if (  !SEE_TOKEN( CFER,"]") || !(CommTerm(),1)) {
#line 3369 "cplus.met"
                MulFreeTree(3,list,retTree,valTree);
                TOKEN_EXIT(operator_function_name_exit,"]")
#line 3369 "cplus.met"
            } else {
#line 3369 "cplus.met"
                tokenAhead = 0 ;
#line 3369 "cplus.met"
            }
#line 3369 "cplus.met"
#line 3370 "cplus.met"
            {
#line 3370 "cplus.met"
                PPTREE _ptTree0=0;
#line 3370 "cplus.met"
                {
#line 3370 "cplus.met"
                    PPTREE _ptRes1=0;
#line 3370 "cplus.met"
                    _ptRes1= MakeTree(OPERATOR, 1);
#line 3370 "cplus.met"
                    ReplaceTree(_ptRes1, 1, MakeString ("[]"));
#line 3370 "cplus.met"
                    _ptTree0=_ptRes1;
#line 3370 "cplus.met"
                }
#line 3370 "cplus.met"
                _retValue =_ptTree0;
#line 3370 "cplus.met"
                goto operator_function_name_ret;
#line 3370 "cplus.met"
            }
#line 3370 "cplus.met"
#line 3370 "cplus.met"
            break;
#line 3370 "cplus.met"
#line 3370 "cplus.met"
        default : 
#line 3370 "cplus.met"
#line 3370 "cplus.met"
            break;
#line 3370 "cplus.met"
    }
#line 3370 "cplus.met"
#line 3374 "cplus.met"
    if (NPUSH_CALL_AFF_VERIF(retTree = ,_Tak(const_or_volatile), 35, cplus)){
#line 3374 "cplus.met"
#line 3375 "cplus.met"
        {
#line 3375 "cplus.met"
            PPTREE _ptRes0=0;
#line 3375 "cplus.met"
            _ptRes0= MakeTree(FOR_DECLARATION, 3);
#line 3375 "cplus.met"
            ReplaceTree(_ptRes0, 1, retTree );
#line 3375 "cplus.met"
            retTree=_ptRes0;
#line 3375 "cplus.met"
        }
#line 3375 "cplus.met"
    } else {
#line 3375 "cplus.met"
#line 3377 "cplus.met"
        {
#line 3377 "cplus.met"
            PPTREE _ptRes0=0;
#line 3377 "cplus.met"
            _ptRes0= MakeTree(FOR_DECLARATION, 3);
#line 3377 "cplus.met"
            retTree=_ptRes0;
#line 3377 "cplus.met"
        }
#line 3377 "cplus.met"
    }
#line 3377 "cplus.met"
#line 3378 "cplus.met"
    {
#line 3378 "cplus.met"
        PPTREE _ptTree0=0;
#line 3378 "cplus.met"
        if ( (_ptTree0=NQUICK_CALL(_Tak(type_specifier)(error_free), 156, cplus))== (PPTREE) -1 ) {
#line 3378 "cplus.met"
            MulFreeTree(4,_ptTree0,list,retTree,valTree);
            PROG_EXIT(operator_function_name_exit,"operator_function_name")
#line 3378 "cplus.met"
        }
#line 3378 "cplus.met"
        ReplaceTree(retTree , 2 , _ptTree0);
#line 3378 "cplus.met"
    }
#line 3378 "cplus.met"
#line 3379 "cplus.met"
    if (NPUSH_CALL_AFF_VERIF(valTree = ,_Tak(ptr_operator), 123, cplus)){
#line 3379 "cplus.met"
#line 3380 "cplus.met"
#line 3381 "cplus.met"
        list =AddList(list ,valTree );
#line 3381 "cplus.met"
#line 3382 "cplus.met"
        ReplaceTree(retTree ,3 ,list );
#line 3382 "cplus.met"
#line 3382 "cplus.met"
#line 3382 "cplus.met"
    }
#line 3382 "cplus.met"
#line 3384 "cplus.met"
    {
#line 3384 "cplus.met"
        PPTREE _ptTree0=0;
#line 3384 "cplus.met"
        {
#line 3384 "cplus.met"
            PPTREE _ptRes1=0;
#line 3384 "cplus.met"
            _ptRes1= MakeTree(OPERATOR, 1);
#line 3384 "cplus.met"
            ReplaceTree(_ptRes1, 1, retTree );
#line 3384 "cplus.met"
            _ptTree0=_ptRes1;
#line 3384 "cplus.met"
        }
#line 3384 "cplus.met"
        _retValue =_ptTree0;
#line 3384 "cplus.met"
        goto operator_function_name_ret;
#line 3384 "cplus.met"
    }
#line 3384 "cplus.met"
#line 3384 "cplus.met"
#line 3384 "cplus.met"

#line 3385 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 3385 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 3385 "cplus.met"
return((PPTREE) 0);
#line 3385 "cplus.met"

#line 3385 "cplus.met"
operator_function_name_exit :
#line 3385 "cplus.met"

#line 3385 "cplus.met"
    _Debug = TRACE_RULE("operator_function_name",TRACE_EXIT,(PPTREE)0);
#line 3385 "cplus.met"
    _funcLevel--;
#line 3385 "cplus.met"
    return((PPTREE) -1) ;
#line 3385 "cplus.met"

#line 3385 "cplus.met"
operator_function_name_ret :
#line 3385 "cplus.met"
    
#line 3385 "cplus.met"
    _Debug = TRACE_RULE("operator_function_name",TRACE_RETURN,_retValue);
#line 3385 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 3385 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 3385 "cplus.met"
    return _retValue ;
#line 3385 "cplus.met"
}
#line 3385 "cplus.met"

#line 3385 "cplus.met"
