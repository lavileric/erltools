/*************************************************************************/
/*                                                                       */
/*        Produced by MetaGen version 2.0  -    1989-2006                 */
/*       Syntaxic Analyzer Meta Generator developped by                  */
/*                  Eric Lavillonniere                                   */
/*                                                                       */
/*************************************************************************/

#include "token.h"
#include "cplus.h"


#line 3233 "cplus.met"
PPTREE cplus::constan ( int error_free)
#line 3233 "cplus.met"
{
#line 3233 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 3233 "cplus.met"
    int _value,_nbPre = 0 ;
#line 3233 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 3233 "cplus.met"
    int _Debug = TRACE_RULE("constan",TRACE_ENTER,(PPTREE)0);
#line 3233 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 3233 "cplus.met"
#line 3234 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3234 "cplus.met"
    switch( lexEl.Value) {
#line 3234 "cplus.met"
#line 3235 "cplus.met"
        case META : 
#line 3235 "cplus.met"
        case INTEGER : 
#line 3235 "cplus.met"
#line 3235 "cplus.met"
            {
#line 3235 "cplus.met"
                PPTREE _ptTree0=0;
#line 3235 "cplus.met"
                {
#line 3235 "cplus.met"
                    PPTREE _ptTree1=0,_ptRes1=0;
#line 3235 "cplus.met"
                    _ptRes1= MakeTree(INTEGER, 1);
#line 3235 "cplus.met"
                    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3235 "cplus.met"
                    if ( ! TERM_OR_META(INTEGER,"INTEGER") || !(BUILD_TERM_META(_ptTree1))) {
#line 3235 "cplus.met"
                        MulFreeTree(3,_ptRes1,_ptTree1,_ptTree0);
                        TOKEN_EXIT(constan_exit,"INTEGER")
#line 3235 "cplus.met"
                    } else {
#line 3235 "cplus.met"
                        tokenAhead = 0 ;
#line 3235 "cplus.met"
                    }
#line 3235 "cplus.met"
                    ReplaceTree(_ptRes1, 1, _ptTree1);
#line 3235 "cplus.met"
                    _ptTree0=_ptRes1;
#line 3235 "cplus.met"
                }
#line 3235 "cplus.met"
                _retValue =_ptTree0;
#line 3235 "cplus.met"
                goto constan_ret;
#line 3235 "cplus.met"
            }
#line 3235 "cplus.met"
            break;
#line 3235 "cplus.met"
#line 3236 "cplus.met"
        case LINTEGER : 
#line 3236 "cplus.met"
#line 3236 "cplus.met"
            {
#line 3236 "cplus.met"
                PPTREE _ptTree0=0;
#line 3236 "cplus.met"
                {
#line 3236 "cplus.met"
                    PPTREE _ptTree1=0,_ptRes1=0;
#line 3236 "cplus.met"
                    _ptRes1= MakeTree(ILONG, 1);
#line 3236 "cplus.met"
                    {
#line 3236 "cplus.met"
                        PPTREE _ptTree2=0,_ptRes2=0;
#line 3236 "cplus.met"
                        _ptRes2= MakeTree(INTEGER, 1);
#line 3236 "cplus.met"
                        (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3236 "cplus.met"
                        if ( ! TERM_OR_META(LINTEGER,"LINTEGER") || !(BUILD_TERM_META(_ptTree2))) {
#line 3236 "cplus.met"
                            MulFreeTree(5,_ptRes2,_ptTree2,_ptRes1,_ptTree1,_ptTree0);
                            TOKEN_EXIT(constan_exit,"LINTEGER")
#line 3236 "cplus.met"
                        } else {
#line 3236 "cplus.met"
                            tokenAhead = 0 ;
#line 3236 "cplus.met"
                        }
#line 3236 "cplus.met"
                        ReplaceTree(_ptRes2, 1, _ptTree2);
#line 3236 "cplus.met"
                        _ptTree1=_ptRes2;
#line 3236 "cplus.met"
                    }
#line 3236 "cplus.met"
                    ReplaceTree(_ptRes1, 1, _ptTree1);
#line 3236 "cplus.met"
                    _ptTree0=_ptRes1;
#line 3236 "cplus.met"
                }
#line 3236 "cplus.met"
                _retValue =_ptTree0;
#line 3236 "cplus.met"
                goto constan_ret;
#line 3236 "cplus.met"
            }
#line 3236 "cplus.met"
            break;
#line 3236 "cplus.met"
#line 3237 "cplus.met"
        case LLINTEGER : 
#line 3237 "cplus.met"
#line 3237 "cplus.met"
            {
#line 3237 "cplus.met"
                PPTREE _ptTree0=0;
#line 3237 "cplus.met"
                {
#line 3237 "cplus.met"
                    PPTREE _ptTree1=0,_ptRes1=0;
#line 3237 "cplus.met"
                    _ptRes1= MakeTree(ILONGLONG, 1);
#line 3237 "cplus.met"
                    {
#line 3237 "cplus.met"
                        PPTREE _ptTree2=0,_ptRes2=0;
#line 3237 "cplus.met"
                        _ptRes2= MakeTree(INTEGER, 1);
#line 3237 "cplus.met"
                        (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3237 "cplus.met"
                        if ( ! TERM_OR_META(LINTEGER,"LINTEGER") || !(BUILD_TERM_META(_ptTree2))) {
#line 3237 "cplus.met"
                            MulFreeTree(5,_ptRes2,_ptTree2,_ptRes1,_ptTree1,_ptTree0);
                            TOKEN_EXIT(constan_exit,"LINTEGER")
#line 3237 "cplus.met"
                        } else {
#line 3237 "cplus.met"
                            tokenAhead = 0 ;
#line 3237 "cplus.met"
                        }
#line 3237 "cplus.met"
                        ReplaceTree(_ptRes2, 1, _ptTree2);
#line 3237 "cplus.met"
                        _ptTree1=_ptRes2;
#line 3237 "cplus.met"
                    }
#line 3237 "cplus.met"
                    ReplaceTree(_ptRes1, 1, _ptTree1);
#line 3237 "cplus.met"
                    _ptTree0=_ptRes1;
#line 3237 "cplus.met"
                }
#line 3237 "cplus.met"
                _retValue =_ptTree0;
#line 3237 "cplus.met"
                goto constan_ret;
#line 3237 "cplus.met"
            }
#line 3237 "cplus.met"
            break;
#line 3237 "cplus.met"
#line 3238 "cplus.met"
        case UINTEGER : 
#line 3238 "cplus.met"
#line 3238 "cplus.met"
            {
#line 3238 "cplus.met"
                PPTREE _ptTree0=0;
#line 3238 "cplus.met"
                {
#line 3238 "cplus.met"
                    PPTREE _ptTree1=0,_ptRes1=0;
#line 3238 "cplus.met"
                    _ptRes1= MakeTree(IUN, 1);
#line 3238 "cplus.met"
                    {
#line 3238 "cplus.met"
                        PPTREE _ptTree2=0,_ptRes2=0;
#line 3238 "cplus.met"
                        _ptRes2= MakeTree(INTEGER, 1);
#line 3238 "cplus.met"
                        (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3238 "cplus.met"
                        if ( ! TERM_OR_META(UINTEGER,"UINTEGER") || !(BUILD_TERM_META(_ptTree2))) {
#line 3238 "cplus.met"
                            MulFreeTree(5,_ptRes2,_ptTree2,_ptRes1,_ptTree1,_ptTree0);
                            TOKEN_EXIT(constan_exit,"UINTEGER")
#line 3238 "cplus.met"
                        } else {
#line 3238 "cplus.met"
                            tokenAhead = 0 ;
#line 3238 "cplus.met"
                        }
#line 3238 "cplus.met"
                        ReplaceTree(_ptRes2, 1, _ptTree2);
#line 3238 "cplus.met"
                        _ptTree1=_ptRes2;
#line 3238 "cplus.met"
                    }
#line 3238 "cplus.met"
                    ReplaceTree(_ptRes1, 1, _ptTree1);
#line 3238 "cplus.met"
                    _ptTree0=_ptRes1;
#line 3238 "cplus.met"
                }
#line 3238 "cplus.met"
                _retValue =_ptTree0;
#line 3238 "cplus.met"
                goto constan_ret;
#line 3238 "cplus.met"
            }
#line 3238 "cplus.met"
            break;
#line 3238 "cplus.met"
#line 3239 "cplus.met"
        case ULINTEGER : 
#line 3239 "cplus.met"
#line 3239 "cplus.met"
            {
#line 3239 "cplus.met"
                PPTREE _ptTree0=0;
#line 3239 "cplus.met"
                {
#line 3239 "cplus.met"
                    PPTREE _ptTree1=0,_ptRes1=0;
#line 3239 "cplus.met"
                    _ptRes1= MakeTree(IUNLONG, 1);
#line 3239 "cplus.met"
                    {
#line 3239 "cplus.met"
                        PPTREE _ptTree2=0,_ptRes2=0;
#line 3239 "cplus.met"
                        _ptRes2= MakeTree(INTEGER, 1);
#line 3239 "cplus.met"
                        (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3239 "cplus.met"
                        if ( ! TERM_OR_META(ULINTEGER,"ULINTEGER") || !(BUILD_TERM_META(_ptTree2))) {
#line 3239 "cplus.met"
                            MulFreeTree(5,_ptRes2,_ptTree2,_ptRes1,_ptTree1,_ptTree0);
                            TOKEN_EXIT(constan_exit,"ULINTEGER")
#line 3239 "cplus.met"
                        } else {
#line 3239 "cplus.met"
                            tokenAhead = 0 ;
#line 3239 "cplus.met"
                        }
#line 3239 "cplus.met"
                        ReplaceTree(_ptRes2, 1, _ptTree2);
#line 3239 "cplus.met"
                        _ptTree1=_ptRes2;
#line 3239 "cplus.met"
                    }
#line 3239 "cplus.met"
                    ReplaceTree(_ptRes1, 1, _ptTree1);
#line 3239 "cplus.met"
                    _ptTree0=_ptRes1;
#line 3239 "cplus.met"
                }
#line 3239 "cplus.met"
                _retValue =_ptTree0;
#line 3239 "cplus.met"
                goto constan_ret;
#line 3239 "cplus.met"
            }
#line 3239 "cplus.met"
            break;
#line 3239 "cplus.met"
#line 3240 "cplus.met"
        case ULLINTEGER : 
#line 3240 "cplus.met"
#line 3240 "cplus.met"
            {
#line 3240 "cplus.met"
                PPTREE _ptTree0=0;
#line 3240 "cplus.met"
                {
#line 3240 "cplus.met"
                    PPTREE _ptTree1=0,_ptRes1=0;
#line 3240 "cplus.met"
                    _ptRes1= MakeTree(IUNLONGLONG, 1);
#line 3240 "cplus.met"
                    {
#line 3240 "cplus.met"
                        PPTREE _ptTree2=0,_ptRes2=0;
#line 3240 "cplus.met"
                        _ptRes2= MakeTree(INTEGER, 1);
#line 3240 "cplus.met"
                        (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3240 "cplus.met"
                        if ( ! TERM_OR_META(ULINTEGER,"ULINTEGER") || !(BUILD_TERM_META(_ptTree2))) {
#line 3240 "cplus.met"
                            MulFreeTree(5,_ptRes2,_ptTree2,_ptRes1,_ptTree1,_ptTree0);
                            TOKEN_EXIT(constan_exit,"ULINTEGER")
#line 3240 "cplus.met"
                        } else {
#line 3240 "cplus.met"
                            tokenAhead = 0 ;
#line 3240 "cplus.met"
                        }
#line 3240 "cplus.met"
                        ReplaceTree(_ptRes2, 1, _ptTree2);
#line 3240 "cplus.met"
                        _ptTree1=_ptRes2;
#line 3240 "cplus.met"
                    }
#line 3240 "cplus.met"
                    ReplaceTree(_ptRes1, 1, _ptTree1);
#line 3240 "cplus.met"
                    _ptTree0=_ptRes1;
#line 3240 "cplus.met"
                }
#line 3240 "cplus.met"
                _retValue =_ptTree0;
#line 3240 "cplus.met"
                goto constan_ret;
#line 3240 "cplus.met"
            }
#line 3240 "cplus.met"
            break;
#line 3240 "cplus.met"
#line 3241 "cplus.met"
        case HEXA : 
#line 3241 "cplus.met"
#line 3241 "cplus.met"
            {
#line 3241 "cplus.met"
                PPTREE _ptTree0=0;
#line 3241 "cplus.met"
                {
#line 3241 "cplus.met"
                    PPTREE _ptTree1=0,_ptRes1=0;
#line 3241 "cplus.met"
                    _ptRes1= MakeTree(HEXA, 1);
#line 3241 "cplus.met"
                    {
#line 3241 "cplus.met"
                        PPTREE _ptTree2=0,_ptRes2=0;
#line 3241 "cplus.met"
                        _ptRes2= MakeTree(INTEGER, 1);
#line 3241 "cplus.met"
                        (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3241 "cplus.met"
                        if ( ! TERM_OR_META(HEXA,"HEXA") || !(BUILD_TERM_META(_ptTree2))) {
#line 3241 "cplus.met"
                            MulFreeTree(5,_ptRes2,_ptTree2,_ptRes1,_ptTree1,_ptTree0);
                            TOKEN_EXIT(constan_exit,"HEXA")
#line 3241 "cplus.met"
                        } else {
#line 3241 "cplus.met"
                            tokenAhead = 0 ;
#line 3241 "cplus.met"
                        }
#line 3241 "cplus.met"
                        ReplaceTree(_ptRes2, 1, _ptTree2);
#line 3241 "cplus.met"
                        _ptTree1=_ptRes2;
#line 3241 "cplus.met"
                    }
#line 3241 "cplus.met"
                    ReplaceTree(_ptRes1, 1, _ptTree1);
#line 3241 "cplus.met"
                    _ptTree0=_ptRes1;
#line 3241 "cplus.met"
                }
#line 3241 "cplus.met"
                _retValue =_ptTree0;
#line 3241 "cplus.met"
                goto constan_ret;
#line 3241 "cplus.met"
            }
#line 3241 "cplus.met"
            break;
#line 3241 "cplus.met"
#line 3242 "cplus.met"
        case BINARY : 
#line 3242 "cplus.met"
#line 3242 "cplus.met"
            {
#line 3242 "cplus.met"
                PPTREE _ptTree0=0;
#line 3242 "cplus.met"
                {
#line 3242 "cplus.met"
                    PPTREE _ptTree1=0,_ptRes1=0;
#line 3242 "cplus.met"
                    _ptRes1= MakeTree(BINARY, 1);
#line 3242 "cplus.met"
                    {
#line 3242 "cplus.met"
                        PPTREE _ptTree2=0,_ptRes2=0;
#line 3242 "cplus.met"
                        _ptRes2= MakeTree(INTEGER, 1);
#line 3242 "cplus.met"
                        (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3242 "cplus.met"
                        if ( ! TERM_OR_META(BINARY,"BINARY") || !(BUILD_TERM_META(_ptTree2))) {
#line 3242 "cplus.met"
                            MulFreeTree(5,_ptRes2,_ptTree2,_ptRes1,_ptTree1,_ptTree0);
                            TOKEN_EXIT(constan_exit,"BINARY")
#line 3242 "cplus.met"
                        } else {
#line 3242 "cplus.met"
                            tokenAhead = 0 ;
#line 3242 "cplus.met"
                        }
#line 3242 "cplus.met"
                        ReplaceTree(_ptRes2, 1, _ptTree2);
#line 3242 "cplus.met"
                        _ptTree1=_ptRes2;
#line 3242 "cplus.met"
                    }
#line 3242 "cplus.met"
                    ReplaceTree(_ptRes1, 1, _ptTree1);
#line 3242 "cplus.met"
                    _ptTree0=_ptRes1;
#line 3242 "cplus.met"
                }
#line 3242 "cplus.met"
                _retValue =_ptTree0;
#line 3242 "cplus.met"
                goto constan_ret;
#line 3242 "cplus.met"
            }
#line 3242 "cplus.met"
            break;
#line 3242 "cplus.met"
#line 3243 "cplus.met"
        case LHEXA : 
#line 3243 "cplus.met"
#line 3243 "cplus.met"
            {
#line 3243 "cplus.met"
                PPTREE _ptTree0=0;
#line 3243 "cplus.met"
                {
#line 3243 "cplus.met"
                    PPTREE _ptTree1=0,_ptRes1=0;
#line 3243 "cplus.met"
                    _ptRes1= MakeTree(LONG, 1);
#line 3243 "cplus.met"
                    {
#line 3243 "cplus.met"
                        PPTREE _ptTree2=0,_ptRes2=0;
#line 3243 "cplus.met"
                        _ptRes2= MakeTree(HEXA, 1);
#line 3243 "cplus.met"
                        {
#line 3243 "cplus.met"
                            PPTREE _ptTree3=0,_ptRes3=0;
#line 3243 "cplus.met"
                            _ptRes3= MakeTree(INTEGER, 1);
#line 3243 "cplus.met"
                            (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3243 "cplus.met"
                            if ( ! TERM_OR_META(LHEXA,"LHEXA") || !(BUILD_TERM_META(_ptTree3))) {
#line 3243 "cplus.met"
                                MulFreeTree(7,_ptRes3,_ptTree3,_ptRes2,_ptTree2,_ptRes1,_ptTree1,_ptTree0);
                                TOKEN_EXIT(constan_exit,"LHEXA")
#line 3243 "cplus.met"
                            } else {
#line 3243 "cplus.met"
                                tokenAhead = 0 ;
#line 3243 "cplus.met"
                            }
#line 3243 "cplus.met"
                            ReplaceTree(_ptRes3, 1, _ptTree3);
#line 3243 "cplus.met"
                            _ptTree2=_ptRes3;
#line 3243 "cplus.met"
                        }
#line 3243 "cplus.met"
                        ReplaceTree(_ptRes2, 1, _ptTree2);
#line 3243 "cplus.met"
                        _ptTree1=_ptRes2;
#line 3243 "cplus.met"
                    }
#line 3243 "cplus.met"
                    ReplaceTree(_ptRes1, 1, _ptTree1);
#line 3243 "cplus.met"
                    _ptTree0=_ptRes1;
#line 3243 "cplus.met"
                }
#line 3243 "cplus.met"
                _retValue =_ptTree0;
#line 3243 "cplus.met"
                goto constan_ret;
#line 3243 "cplus.met"
            }
#line 3243 "cplus.met"
            break;
#line 3243 "cplus.met"
#line 3244 "cplus.met"
        case LLHEXA : 
#line 3244 "cplus.met"
#line 3244 "cplus.met"
            {
#line 3244 "cplus.met"
                PPTREE _ptTree0=0;
#line 3244 "cplus.met"
                {
#line 3244 "cplus.met"
                    PPTREE _ptTree1=0,_ptRes1=0;
#line 3244 "cplus.met"
                    _ptRes1= MakeTree(LONGLONG, 1);
#line 3244 "cplus.met"
                    {
#line 3244 "cplus.met"
                        PPTREE _ptTree2=0,_ptRes2=0;
#line 3244 "cplus.met"
                        _ptRes2= MakeTree(HEXA, 1);
#line 3244 "cplus.met"
                        {
#line 3244 "cplus.met"
                            PPTREE _ptTree3=0,_ptRes3=0;
#line 3244 "cplus.met"
                            _ptRes3= MakeTree(INTEGER, 1);
#line 3244 "cplus.met"
                            (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3244 "cplus.met"
                            if ( ! TERM_OR_META(LHEXA,"LHEXA") || !(BUILD_TERM_META(_ptTree3))) {
#line 3244 "cplus.met"
                                MulFreeTree(7,_ptRes3,_ptTree3,_ptRes2,_ptTree2,_ptRes1,_ptTree1,_ptTree0);
                                TOKEN_EXIT(constan_exit,"LHEXA")
#line 3244 "cplus.met"
                            } else {
#line 3244 "cplus.met"
                                tokenAhead = 0 ;
#line 3244 "cplus.met"
                            }
#line 3244 "cplus.met"
                            ReplaceTree(_ptRes3, 1, _ptTree3);
#line 3244 "cplus.met"
                            _ptTree2=_ptRes3;
#line 3244 "cplus.met"
                        }
#line 3244 "cplus.met"
                        ReplaceTree(_ptRes2, 1, _ptTree2);
#line 3244 "cplus.met"
                        _ptTree1=_ptRes2;
#line 3244 "cplus.met"
                    }
#line 3244 "cplus.met"
                    ReplaceTree(_ptRes1, 1, _ptTree1);
#line 3244 "cplus.met"
                    _ptTree0=_ptRes1;
#line 3244 "cplus.met"
                }
#line 3244 "cplus.met"
                _retValue =_ptTree0;
#line 3244 "cplus.met"
                goto constan_ret;
#line 3244 "cplus.met"
            }
#line 3244 "cplus.met"
            break;
#line 3244 "cplus.met"
#line 3245 "cplus.met"
        case UHEXA : 
#line 3245 "cplus.met"
#line 3245 "cplus.met"
            {
#line 3245 "cplus.met"
                PPTREE _ptTree0=0;
#line 3245 "cplus.met"
                {
#line 3245 "cplus.met"
                    PPTREE _ptTree1=0,_ptRes1=0;
#line 3245 "cplus.met"
                    _ptRes1= MakeTree(IUN, 1);
#line 3245 "cplus.met"
                    {
#line 3245 "cplus.met"
                        PPTREE _ptTree2=0,_ptRes2=0;
#line 3245 "cplus.met"
                        _ptRes2= MakeTree(HEXA, 1);
#line 3245 "cplus.met"
                        {
#line 3245 "cplus.met"
                            PPTREE _ptTree3=0,_ptRes3=0;
#line 3245 "cplus.met"
                            _ptRes3= MakeTree(INTEGER, 1);
#line 3245 "cplus.met"
                            (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3245 "cplus.met"
                            if ( ! TERM_OR_META(UHEXA,"UHEXA") || !(BUILD_TERM_META(_ptTree3))) {
#line 3245 "cplus.met"
                                MulFreeTree(7,_ptRes3,_ptTree3,_ptRes2,_ptTree2,_ptRes1,_ptTree1,_ptTree0);
                                TOKEN_EXIT(constan_exit,"UHEXA")
#line 3245 "cplus.met"
                            } else {
#line 3245 "cplus.met"
                                tokenAhead = 0 ;
#line 3245 "cplus.met"
                            }
#line 3245 "cplus.met"
                            ReplaceTree(_ptRes3, 1, _ptTree3);
#line 3245 "cplus.met"
                            _ptTree2=_ptRes3;
#line 3245 "cplus.met"
                        }
#line 3245 "cplus.met"
                        ReplaceTree(_ptRes2, 1, _ptTree2);
#line 3245 "cplus.met"
                        _ptTree1=_ptRes2;
#line 3245 "cplus.met"
                    }
#line 3245 "cplus.met"
                    ReplaceTree(_ptRes1, 1, _ptTree1);
#line 3245 "cplus.met"
                    _ptTree0=_ptRes1;
#line 3245 "cplus.met"
                }
#line 3245 "cplus.met"
                _retValue =_ptTree0;
#line 3245 "cplus.met"
                goto constan_ret;
#line 3245 "cplus.met"
            }
#line 3245 "cplus.met"
            break;
#line 3245 "cplus.met"
#line 3246 "cplus.met"
        case ULHEXA : 
#line 3246 "cplus.met"
#line 3246 "cplus.met"
            {
#line 3246 "cplus.met"
                PPTREE _ptTree0=0;
#line 3246 "cplus.met"
                {
#line 3246 "cplus.met"
                    PPTREE _ptTree1=0,_ptRes1=0;
#line 3246 "cplus.met"
                    _ptRes1= MakeTree(IUNLONG, 1);
#line 3246 "cplus.met"
                    {
#line 3246 "cplus.met"
                        PPTREE _ptTree2=0,_ptRes2=0;
#line 3246 "cplus.met"
                        _ptRes2= MakeTree(HEXA, 1);
#line 3246 "cplus.met"
                        {
#line 3246 "cplus.met"
                            PPTREE _ptTree3=0,_ptRes3=0;
#line 3246 "cplus.met"
                            _ptRes3= MakeTree(INTEGER, 1);
#line 3246 "cplus.met"
                            (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3246 "cplus.met"
                            if ( ! TERM_OR_META(ULHEXA,"ULHEXA") || !(BUILD_TERM_META(_ptTree3))) {
#line 3246 "cplus.met"
                                MulFreeTree(7,_ptRes3,_ptTree3,_ptRes2,_ptTree2,_ptRes1,_ptTree1,_ptTree0);
                                TOKEN_EXIT(constan_exit,"ULHEXA")
#line 3246 "cplus.met"
                            } else {
#line 3246 "cplus.met"
                                tokenAhead = 0 ;
#line 3246 "cplus.met"
                            }
#line 3246 "cplus.met"
                            ReplaceTree(_ptRes3, 1, _ptTree3);
#line 3246 "cplus.met"
                            _ptTree2=_ptRes3;
#line 3246 "cplus.met"
                        }
#line 3246 "cplus.met"
                        ReplaceTree(_ptRes2, 1, _ptTree2);
#line 3246 "cplus.met"
                        _ptTree1=_ptRes2;
#line 3246 "cplus.met"
                    }
#line 3246 "cplus.met"
                    ReplaceTree(_ptRes1, 1, _ptTree1);
#line 3246 "cplus.met"
                    _ptTree0=_ptRes1;
#line 3246 "cplus.met"
                }
#line 3246 "cplus.met"
                _retValue =_ptTree0;
#line 3246 "cplus.met"
                goto constan_ret;
#line 3246 "cplus.met"
            }
#line 3246 "cplus.met"
            break;
#line 3246 "cplus.met"
#line 3247 "cplus.met"
        case ULLHEXA : 
#line 3247 "cplus.met"
#line 3247 "cplus.met"
            {
#line 3247 "cplus.met"
                PPTREE _ptTree0=0;
#line 3247 "cplus.met"
                {
#line 3247 "cplus.met"
                    PPTREE _ptTree1=0,_ptRes1=0;
#line 3247 "cplus.met"
                    _ptRes1= MakeTree(IUNLONGLONG, 1);
#line 3247 "cplus.met"
                    {
#line 3247 "cplus.met"
                        PPTREE _ptTree2=0,_ptRes2=0;
#line 3247 "cplus.met"
                        _ptRes2= MakeTree(HEXA, 1);
#line 3247 "cplus.met"
                        {
#line 3247 "cplus.met"
                            PPTREE _ptTree3=0,_ptRes3=0;
#line 3247 "cplus.met"
                            _ptRes3= MakeTree(INTEGER, 1);
#line 3247 "cplus.met"
                            (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3247 "cplus.met"
                            if ( ! TERM_OR_META(ULHEXA,"ULHEXA") || !(BUILD_TERM_META(_ptTree3))) {
#line 3247 "cplus.met"
                                MulFreeTree(7,_ptRes3,_ptTree3,_ptRes2,_ptTree2,_ptRes1,_ptTree1,_ptTree0);
                                TOKEN_EXIT(constan_exit,"ULHEXA")
#line 3247 "cplus.met"
                            } else {
#line 3247 "cplus.met"
                                tokenAhead = 0 ;
#line 3247 "cplus.met"
                            }
#line 3247 "cplus.met"
                            ReplaceTree(_ptRes3, 1, _ptTree3);
#line 3247 "cplus.met"
                            _ptTree2=_ptRes3;
#line 3247 "cplus.met"
                        }
#line 3247 "cplus.met"
                        ReplaceTree(_ptRes2, 1, _ptTree2);
#line 3247 "cplus.met"
                        _ptTree1=_ptRes2;
#line 3247 "cplus.met"
                    }
#line 3247 "cplus.met"
                    ReplaceTree(_ptRes1, 1, _ptTree1);
#line 3247 "cplus.met"
                    _ptTree0=_ptRes1;
#line 3247 "cplus.met"
                }
#line 3247 "cplus.met"
                _retValue =_ptTree0;
#line 3247 "cplus.met"
                goto constan_ret;
#line 3247 "cplus.met"
            }
#line 3247 "cplus.met"
            break;
#line 3247 "cplus.met"
#line 3248 "cplus.met"
        case OCTAL : 
#line 3248 "cplus.met"
#line 3248 "cplus.met"
            {
#line 3248 "cplus.met"
                PPTREE _ptTree0=0;
#line 3248 "cplus.met"
                {
#line 3248 "cplus.met"
                    PPTREE _ptTree1=0,_ptRes1=0;
#line 3248 "cplus.met"
                    _ptRes1= MakeTree(OCTAL, 1);
#line 3248 "cplus.met"
                    {
#line 3248 "cplus.met"
                        PPTREE _ptTree2=0,_ptRes2=0;
#line 3248 "cplus.met"
                        _ptRes2= MakeTree(INTEGER, 1);
#line 3248 "cplus.met"
                        (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3248 "cplus.met"
                        if ( ! TERM_OR_META(OCTAL,"OCTAL") || !(BUILD_TERM_META(_ptTree2))) {
#line 3248 "cplus.met"
                            MulFreeTree(5,_ptRes2,_ptTree2,_ptRes1,_ptTree1,_ptTree0);
                            TOKEN_EXIT(constan_exit,"OCTAL")
#line 3248 "cplus.met"
                        } else {
#line 3248 "cplus.met"
                            tokenAhead = 0 ;
#line 3248 "cplus.met"
                        }
#line 3248 "cplus.met"
                        ReplaceTree(_ptRes2, 1, _ptTree2);
#line 3248 "cplus.met"
                        _ptTree1=_ptRes2;
#line 3248 "cplus.met"
                    }
#line 3248 "cplus.met"
                    ReplaceTree(_ptRes1, 1, _ptTree1);
#line 3248 "cplus.met"
                    _ptTree0=_ptRes1;
#line 3248 "cplus.met"
                }
#line 3248 "cplus.met"
                _retValue =_ptTree0;
#line 3248 "cplus.met"
                goto constan_ret;
#line 3248 "cplus.met"
            }
#line 3248 "cplus.met"
            break;
#line 3248 "cplus.met"
#line 3249 "cplus.met"
        case LOCTAL : 
#line 3249 "cplus.met"
#line 3249 "cplus.met"
            {
#line 3249 "cplus.met"
                PPTREE _ptTree0=0;
#line 3249 "cplus.met"
                {
#line 3249 "cplus.met"
                    PPTREE _ptTree1=0,_ptRes1=0;
#line 3249 "cplus.met"
                    _ptRes1= MakeTree(ILONG, 1);
#line 3249 "cplus.met"
                    {
#line 3249 "cplus.met"
                        PPTREE _ptTree2=0,_ptRes2=0;
#line 3249 "cplus.met"
                        _ptRes2= MakeTree(OCTAL, 1);
#line 3249 "cplus.met"
                        {
#line 3249 "cplus.met"
                            PPTREE _ptTree3=0,_ptRes3=0;
#line 3249 "cplus.met"
                            _ptRes3= MakeTree(INTEGER, 1);
#line 3249 "cplus.met"
                            (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3249 "cplus.met"
                            if ( ! TERM_OR_META(LOCTAL,"LOCTAL") || !(BUILD_TERM_META(_ptTree3))) {
#line 3249 "cplus.met"
                                MulFreeTree(7,_ptRes3,_ptTree3,_ptRes2,_ptTree2,_ptRes1,_ptTree1,_ptTree0);
                                TOKEN_EXIT(constan_exit,"LOCTAL")
#line 3249 "cplus.met"
                            } else {
#line 3249 "cplus.met"
                                tokenAhead = 0 ;
#line 3249 "cplus.met"
                            }
#line 3249 "cplus.met"
                            ReplaceTree(_ptRes3, 1, _ptTree3);
#line 3249 "cplus.met"
                            _ptTree2=_ptRes3;
#line 3249 "cplus.met"
                        }
#line 3249 "cplus.met"
                        ReplaceTree(_ptRes2, 1, _ptTree2);
#line 3249 "cplus.met"
                        _ptTree1=_ptRes2;
#line 3249 "cplus.met"
                    }
#line 3249 "cplus.met"
                    ReplaceTree(_ptRes1, 1, _ptTree1);
#line 3249 "cplus.met"
                    _ptTree0=_ptRes1;
#line 3249 "cplus.met"
                }
#line 3249 "cplus.met"
                _retValue =_ptTree0;
#line 3249 "cplus.met"
                goto constan_ret;
#line 3249 "cplus.met"
            }
#line 3249 "cplus.met"
            break;
#line 3249 "cplus.met"
#line 3250 "cplus.met"
        case LLOCTAL : 
#line 3250 "cplus.met"
#line 3250 "cplus.met"
            {
#line 3250 "cplus.met"
                PPTREE _ptTree0=0;
#line 3250 "cplus.met"
                {
#line 3250 "cplus.met"
                    PPTREE _ptTree1=0,_ptRes1=0;
#line 3250 "cplus.met"
                    _ptRes1= MakeTree(ILONGLONG, 1);
#line 3250 "cplus.met"
                    {
#line 3250 "cplus.met"
                        PPTREE _ptTree2=0,_ptRes2=0;
#line 3250 "cplus.met"
                        _ptRes2= MakeTree(OCTAL, 1);
#line 3250 "cplus.met"
                        {
#line 3250 "cplus.met"
                            PPTREE _ptTree3=0,_ptRes3=0;
#line 3250 "cplus.met"
                            _ptRes3= MakeTree(INTEGER, 1);
#line 3250 "cplus.met"
                            (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3250 "cplus.met"
                            if ( ! TERM_OR_META(LOCTAL,"LOCTAL") || !(BUILD_TERM_META(_ptTree3))) {
#line 3250 "cplus.met"
                                MulFreeTree(7,_ptRes3,_ptTree3,_ptRes2,_ptTree2,_ptRes1,_ptTree1,_ptTree0);
                                TOKEN_EXIT(constan_exit,"LOCTAL")
#line 3250 "cplus.met"
                            } else {
#line 3250 "cplus.met"
                                tokenAhead = 0 ;
#line 3250 "cplus.met"
                            }
#line 3250 "cplus.met"
                            ReplaceTree(_ptRes3, 1, _ptTree3);
#line 3250 "cplus.met"
                            _ptTree2=_ptRes3;
#line 3250 "cplus.met"
                        }
#line 3250 "cplus.met"
                        ReplaceTree(_ptRes2, 1, _ptTree2);
#line 3250 "cplus.met"
                        _ptTree1=_ptRes2;
#line 3250 "cplus.met"
                    }
#line 3250 "cplus.met"
                    ReplaceTree(_ptRes1, 1, _ptTree1);
#line 3250 "cplus.met"
                    _ptTree0=_ptRes1;
#line 3250 "cplus.met"
                }
#line 3250 "cplus.met"
                _retValue =_ptTree0;
#line 3250 "cplus.met"
                goto constan_ret;
#line 3250 "cplus.met"
            }
#line 3250 "cplus.met"
            break;
#line 3250 "cplus.met"
#line 3251 "cplus.met"
        case UOCTAL : 
#line 3251 "cplus.met"
#line 3251 "cplus.met"
            {
#line 3251 "cplus.met"
                PPTREE _ptTree0=0;
#line 3251 "cplus.met"
                {
#line 3251 "cplus.met"
                    PPTREE _ptTree1=0,_ptRes1=0;
#line 3251 "cplus.met"
                    _ptRes1= MakeTree(IUN, 1);
#line 3251 "cplus.met"
                    {
#line 3251 "cplus.met"
                        PPTREE _ptTree2=0,_ptRes2=0;
#line 3251 "cplus.met"
                        _ptRes2= MakeTree(OCTAL, 1);
#line 3251 "cplus.met"
                        {
#line 3251 "cplus.met"
                            PPTREE _ptTree3=0,_ptRes3=0;
#line 3251 "cplus.met"
                            _ptRes3= MakeTree(INTEGER, 1);
#line 3251 "cplus.met"
                            (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3251 "cplus.met"
                            if ( ! TERM_OR_META(UOCTAL,"UOCTAL") || !(BUILD_TERM_META(_ptTree3))) {
#line 3251 "cplus.met"
                                MulFreeTree(7,_ptRes3,_ptTree3,_ptRes2,_ptTree2,_ptRes1,_ptTree1,_ptTree0);
                                TOKEN_EXIT(constan_exit,"UOCTAL")
#line 3251 "cplus.met"
                            } else {
#line 3251 "cplus.met"
                                tokenAhead = 0 ;
#line 3251 "cplus.met"
                            }
#line 3251 "cplus.met"
                            ReplaceTree(_ptRes3, 1, _ptTree3);
#line 3251 "cplus.met"
                            _ptTree2=_ptRes3;
#line 3251 "cplus.met"
                        }
#line 3251 "cplus.met"
                        ReplaceTree(_ptRes2, 1, _ptTree2);
#line 3251 "cplus.met"
                        _ptTree1=_ptRes2;
#line 3251 "cplus.met"
                    }
#line 3251 "cplus.met"
                    ReplaceTree(_ptRes1, 1, _ptTree1);
#line 3251 "cplus.met"
                    _ptTree0=_ptRes1;
#line 3251 "cplus.met"
                }
#line 3251 "cplus.met"
                _retValue =_ptTree0;
#line 3251 "cplus.met"
                goto constan_ret;
#line 3251 "cplus.met"
            }
#line 3251 "cplus.met"
            break;
#line 3251 "cplus.met"
#line 3252 "cplus.met"
        case ULOCTAL : 
#line 3252 "cplus.met"
#line 3252 "cplus.met"
            {
#line 3252 "cplus.met"
                PPTREE _ptTree0=0;
#line 3252 "cplus.met"
                {
#line 3252 "cplus.met"
                    PPTREE _ptTree1=0,_ptRes1=0;
#line 3252 "cplus.met"
                    _ptRes1= MakeTree(IUNLONG, 1);
#line 3252 "cplus.met"
                    {
#line 3252 "cplus.met"
                        PPTREE _ptTree2=0,_ptRes2=0;
#line 3252 "cplus.met"
                        _ptRes2= MakeTree(OCTAL, 1);
#line 3252 "cplus.met"
                        {
#line 3252 "cplus.met"
                            PPTREE _ptTree3=0,_ptRes3=0;
#line 3252 "cplus.met"
                            _ptRes3= MakeTree(INTEGER, 1);
#line 3252 "cplus.met"
                            (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3252 "cplus.met"
                            if ( ! TERM_OR_META(ULOCTAL,"ULOCTAL") || !(BUILD_TERM_META(_ptTree3))) {
#line 3252 "cplus.met"
                                MulFreeTree(7,_ptRes3,_ptTree3,_ptRes2,_ptTree2,_ptRes1,_ptTree1,_ptTree0);
                                TOKEN_EXIT(constan_exit,"ULOCTAL")
#line 3252 "cplus.met"
                            } else {
#line 3252 "cplus.met"
                                tokenAhead = 0 ;
#line 3252 "cplus.met"
                            }
#line 3252 "cplus.met"
                            ReplaceTree(_ptRes3, 1, _ptTree3);
#line 3252 "cplus.met"
                            _ptTree2=_ptRes3;
#line 3252 "cplus.met"
                        }
#line 3252 "cplus.met"
                        ReplaceTree(_ptRes2, 1, _ptTree2);
#line 3252 "cplus.met"
                        _ptTree1=_ptRes2;
#line 3252 "cplus.met"
                    }
#line 3252 "cplus.met"
                    ReplaceTree(_ptRes1, 1, _ptTree1);
#line 3252 "cplus.met"
                    _ptTree0=_ptRes1;
#line 3252 "cplus.met"
                }
#line 3252 "cplus.met"
                _retValue =_ptTree0;
#line 3252 "cplus.met"
                goto constan_ret;
#line 3252 "cplus.met"
            }
#line 3252 "cplus.met"
            break;
#line 3252 "cplus.met"
#line 3253 "cplus.met"
        case ULLOCTAL : 
#line 3253 "cplus.met"
#line 3253 "cplus.met"
            {
#line 3253 "cplus.met"
                PPTREE _ptTree0=0;
#line 3253 "cplus.met"
                {
#line 3253 "cplus.met"
                    PPTREE _ptTree1=0,_ptRes1=0;
#line 3253 "cplus.met"
                    _ptRes1= MakeTree(IUNLONGLONG, 1);
#line 3253 "cplus.met"
                    {
#line 3253 "cplus.met"
                        PPTREE _ptTree2=0,_ptRes2=0;
#line 3253 "cplus.met"
                        _ptRes2= MakeTree(OCTAL, 1);
#line 3253 "cplus.met"
                        {
#line 3253 "cplus.met"
                            PPTREE _ptTree3=0,_ptRes3=0;
#line 3253 "cplus.met"
                            _ptRes3= MakeTree(INTEGER, 1);
#line 3253 "cplus.met"
                            (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3253 "cplus.met"
                            if ( ! TERM_OR_META(ULOCTAL,"ULOCTAL") || !(BUILD_TERM_META(_ptTree3))) {
#line 3253 "cplus.met"
                                MulFreeTree(7,_ptRes3,_ptTree3,_ptRes2,_ptTree2,_ptRes1,_ptTree1,_ptTree0);
                                TOKEN_EXIT(constan_exit,"ULOCTAL")
#line 3253 "cplus.met"
                            } else {
#line 3253 "cplus.met"
                                tokenAhead = 0 ;
#line 3253 "cplus.met"
                            }
#line 3253 "cplus.met"
                            ReplaceTree(_ptRes3, 1, _ptTree3);
#line 3253 "cplus.met"
                            _ptTree2=_ptRes3;
#line 3253 "cplus.met"
                        }
#line 3253 "cplus.met"
                        ReplaceTree(_ptRes2, 1, _ptTree2);
#line 3253 "cplus.met"
                        _ptTree1=_ptRes2;
#line 3253 "cplus.met"
                    }
#line 3253 "cplus.met"
                    ReplaceTree(_ptRes1, 1, _ptTree1);
#line 3253 "cplus.met"
                    _ptTree0=_ptRes1;
#line 3253 "cplus.met"
                }
#line 3253 "cplus.met"
                _retValue =_ptTree0;
#line 3253 "cplus.met"
                goto constan_ret;
#line 3253 "cplus.met"
            }
#line 3253 "cplus.met"
            break;
#line 3253 "cplus.met"
#line 3254 "cplus.met"
        case FLOATVAL : 
#line 3254 "cplus.met"
#line 3254 "cplus.met"
            {
#line 3254 "cplus.met"
                PPTREE _ptTree0=0;
#line 3254 "cplus.met"
                {
#line 3254 "cplus.met"
                    PPTREE _ptTree1=0,_ptRes1=0;
#line 3254 "cplus.met"
                    _ptRes1= MakeTree(FLOAT, 1);
#line 3254 "cplus.met"
                    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3254 "cplus.met"
                    if ( ! TERM_OR_META(FLOATVAL,"FLOATVAL") || !(BUILD_TERM_META(_ptTree1))) {
#line 3254 "cplus.met"
                        MulFreeTree(3,_ptRes1,_ptTree1,_ptTree0);
                        TOKEN_EXIT(constan_exit,"FLOATVAL")
#line 3254 "cplus.met"
                    } else {
#line 3254 "cplus.met"
                        tokenAhead = 0 ;
#line 3254 "cplus.met"
                    }
#line 3254 "cplus.met"
                    ReplaceTree(_ptRes1, 1, _ptTree1);
#line 3254 "cplus.met"
                    _ptTree0=_ptRes1;
#line 3254 "cplus.met"
                }
#line 3254 "cplus.met"
                _retValue =_ptTree0;
#line 3254 "cplus.met"
                goto constan_ret;
#line 3254 "cplus.met"
            }
#line 3254 "cplus.met"
            break;
#line 3254 "cplus.met"
#line 3255 "cplus.met"
        case CHARACT : 
#line 3255 "cplus.met"
#line 3255 "cplus.met"
            {
#line 3255 "cplus.met"
                PPTREE _ptTree0=0;
#line 3255 "cplus.met"
                {
#line 3255 "cplus.met"
                    PPTREE _ptTree1=0,_ptRes1=0;
#line 3255 "cplus.met"
                    _ptRes1= MakeTree(CHAR, 1);
#line 3255 "cplus.met"
                    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3255 "cplus.met"
                    if ( ! TERM_OR_META(CHARACT,"CHARACT") || !(BUILD_TERM_META(_ptTree1))) {
#line 3255 "cplus.met"
                        MulFreeTree(3,_ptRes1,_ptTree1,_ptTree0);
                        TOKEN_EXIT(constan_exit,"CHARACT")
#line 3255 "cplus.met"
                    } else {
#line 3255 "cplus.met"
                        tokenAhead = 0 ;
#line 3255 "cplus.met"
                    }
#line 3255 "cplus.met"
                    ReplaceTree(_ptRes1, 1, _ptTree1);
#line 3255 "cplus.met"
                    _ptTree0=_ptRes1;
#line 3255 "cplus.met"
                }
#line 3255 "cplus.met"
                _retValue =_ptTree0;
#line 3255 "cplus.met"
                goto constan_ret;
#line 3255 "cplus.met"
            }
#line 3255 "cplus.met"
            break;
#line 3255 "cplus.met"
        default :
#line 3255 "cplus.met"
            CASE_EXIT(constan_exit,"either INTEGER or LINTEGER or LLINTEGER or UINTEGER or ULINTEGER or ULLINTEGER or HEXA or BINARY or LHEXA or LLHEXA or UHEXA or ULHEXA or ULLHEXA or OCTAL or LOCTAL or LLOCTAL or UOCTAL or ULOCTAL or ULLOCTAL or FLOATVAL or CHARACT")
#line 3255 "cplus.met"
            break;
#line 3255 "cplus.met"
    }
#line 3255 "cplus.met"
#line 3255 "cplus.met"
#line 3256 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 3256 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 3256 "cplus.met"
return((PPTREE) 0);
#line 3256 "cplus.met"

#line 3256 "cplus.met"
constan_exit :
#line 3256 "cplus.met"

#line 3256 "cplus.met"
    _Debug = TRACE_RULE("constan",TRACE_EXIT,(PPTREE)0);
#line 3256 "cplus.met"
    _funcLevel--;
#line 3256 "cplus.met"
    return((PPTREE) -1) ;
#line 3256 "cplus.met"

#line 3256 "cplus.met"
constan_ret :
#line 3256 "cplus.met"
    
#line 3256 "cplus.met"
    _Debug = TRACE_RULE("constan",TRACE_RETURN,_retValue);
#line 3256 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 3256 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 3256 "cplus.met"
    return _retValue ;
#line 3256 "cplus.met"
}
#line 3256 "cplus.met"

#line 3256 "cplus.met"
#line 3369 "cplus.met"
PPTREE cplus::ctor_initializer ( int error_free)
#line 3369 "cplus.met"
{
#line 3369 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 3369 "cplus.met"
    int _value,_nbPre = 0 ;
#line 3369 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 3369 "cplus.met"
    int _Debug = TRACE_RULE("ctor_initializer",TRACE_ENTER,(PPTREE)0);
#line 3369 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 3369 "cplus.met"
#line 3369 "cplus.met"
    PPTREE _addlist1 = (PPTREE) 0;
#line 3369 "cplus.met"
#line 3369 "cplus.met"
    PPTREE retTree = (PPTREE) 0,list = (PPTREE) 0,val = (PPTREE) 0;
#line 3369 "cplus.met"
#line 3371 "cplus.met"
    if ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN(DPOI,":") && (tokenAhead = 0,CommTerm(),1)){
#line 3371 "cplus.met"
#line 3372 "cplus.met"
#line 3372 "cplus.met"
        _addlist1 = list ;
#line 3372 "cplus.met"
#line 3373 "cplus.met"
        do {
#line 3373 "cplus.met"
#line 3374 "cplus.met"
            {
#line 3374 "cplus.met"
                PPTREE _ptTree0=0,_ptRes0=0;
#line 3374 "cplus.met"
                _ptRes0= MakeTree(CTOR_INIT, 3);
#line 3374 "cplus.met"
                if ( (_ptTree0=NQUICK_CALL(_Tak(complete_class_name)(error_free), 32, cplus))== (PPTREE) -1 ) {
#line 3374 "cplus.met"
                    MulFreeTree(6,_ptRes0,_ptTree0,_addlist1,list,retTree,val);
                    PROG_EXIT(ctor_initializer_exit,"ctor_initializer")
#line 3374 "cplus.met"
                }
#line 3374 "cplus.met"
                ReplaceTree(_ptRes0, 1, _ptTree0);
#line 3374 "cplus.met"
                retTree=_ptRes0;
#line 3374 "cplus.met"
            }
#line 3374 "cplus.met"
#line 3375 "cplus.met"
            (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3375 "cplus.met"
            switch( lexEl.Value) {
#line 3375 "cplus.met"
#line 3378 "cplus.met"
                case POUV : 
#line 3378 "cplus.met"
#line 3377 "cplus.met"
#line 3378 "cplus.met"
                    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3378 "cplus.met"
                    if (  !SEE_TOKEN( POUV,"(") || !(CommTerm(),1)) {
#line 3378 "cplus.met"
                        MulFreeTree(4,_addlist1,list,retTree,val);
                        TOKEN_EXIT(ctor_initializer_exit,"(")
#line 3378 "cplus.met"
                    } else {
#line 3378 "cplus.met"
                        tokenAhead = 0 ;
#line 3378 "cplus.met"
                    }
#line 3378 "cplus.met"
#line 3379 "cplus.met"
                    if (NPUSH_CALL_AFF_VERIF(val = ,_Tak(expression), 67, cplus)){
#line 3379 "cplus.met"
#line 3380 "cplus.met"
                        ReplaceTree(retTree ,2 ,val );
#line 3380 "cplus.met"
#line 3380 "cplus.met"
                    }
#line 3380 "cplus.met"
#line 3381 "cplus.met"
                    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3381 "cplus.met"
                    if (  !SEE_TOKEN( PFER,")") || !(CommTerm(),1)) {
#line 3381 "cplus.met"
                        MulFreeTree(4,_addlist1,list,retTree,val);
                        TOKEN_EXIT(ctor_initializer_exit,")")
#line 3381 "cplus.met"
                    } else {
#line 3381 "cplus.met"
                        tokenAhead = 0 ;
#line 3381 "cplus.met"
                    }
#line 3381 "cplus.met"
#line 3381 "cplus.met"
                    break;
#line 3381 "cplus.met"
#line 3385 "cplus.met"
                default : 
#line 3385 "cplus.met"
#line 3384 "cplus.met"
#line 3385 "cplus.met"
                    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3385 "cplus.met"
                    if (  !SEE_TOKEN( AOUV,"{") || !(CommTerm(),1)) {
#line 3385 "cplus.met"
                        MulFreeTree(4,_addlist1,list,retTree,val);
                        TOKEN_EXIT(ctor_initializer_exit,"{")
#line 3385 "cplus.met"
                    } else {
#line 3385 "cplus.met"
                        tokenAhead = 0 ;
#line 3385 "cplus.met"
                    }
#line 3385 "cplus.met"
#line 3386 "cplus.met"
                    if (NPUSH_CALL_AFF_VERIF(val = ,_Tak(expression), 67, cplus)){
#line 3386 "cplus.met"
#line 3387 "cplus.met"
                        ReplaceTree(retTree ,2 ,val );
#line 3387 "cplus.met"
#line 3387 "cplus.met"
                    }
#line 3387 "cplus.met"
#line 3388 "cplus.met"
                    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3388 "cplus.met"
                    if (  !SEE_TOKEN( AFER,"}") || !(CommTerm(),1)) {
#line 3388 "cplus.met"
                        MulFreeTree(4,_addlist1,list,retTree,val);
                        TOKEN_EXIT(ctor_initializer_exit,"}")
#line 3388 "cplus.met"
                    } else {
#line 3388 "cplus.met"
                        tokenAhead = 0 ;
#line 3388 "cplus.met"
                    }
#line 3388 "cplus.met"
#line 3389 "cplus.met"
                    {
#line 3389 "cplus.met"
                        PPTREE _ptTree0=0;
#line 3389 "cplus.met"
                        {
#line 3389 "cplus.met"
                            PPTREE _ptRes1=0;
#line 3389 "cplus.met"
                            _ptRes1= MakeTree(BRACE_MARKER, 0);
#line 3389 "cplus.met"
                            _ptTree0=_ptRes1;
#line 3389 "cplus.met"
                        }
#line 3389 "cplus.met"
                        ReplaceTree(retTree , 3 , _ptTree0);
#line 3389 "cplus.met"
                    }
#line 3389 "cplus.met"
#line 3389 "cplus.met"
                    break;
#line 3389 "cplus.met"
            }
#line 3389 "cplus.met"
#line 3392 "cplus.met"
            _addlist1 =AddList(_addlist1 ,retTree );
#line 3392 "cplus.met"
#line 3392 "cplus.met"
            if (list){
#line 3392 "cplus.met"
#line 3392 "cplus.met"
                _addlist1 = SonTree (_addlist1 ,2 );
#line 3392 "cplus.met"
            } else {
#line 3392 "cplus.met"
#line 3392 "cplus.met"
                list = _addlist1 ;
#line 3392 "cplus.met"
            }
#line 3392 "cplus.met"
#line 3392 "cplus.met"
#line 3393 "cplus.met"
        } while ( !(! ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN(VIRG,",") && (tokenAhead = 0,CommTerm(),1)))) ;
#line 3393 "cplus.met"
#line 3394 "cplus.met"
        {
#line 3394 "cplus.met"
            PPTREE _ptTree0=0;
#line 3394 "cplus.met"
            {
#line 3394 "cplus.met"
                PPTREE _ptRes1=0;
#line 3394 "cplus.met"
                _ptRes1= MakeTree(CTOR_INITIALIZER, 1);
#line 3394 "cplus.met"
                ReplaceTree(_ptRes1, 1, list );
#line 3394 "cplus.met"
                _ptTree0=_ptRes1;
#line 3394 "cplus.met"
            }
#line 3394 "cplus.met"
            _retValue =_ptTree0;
#line 3394 "cplus.met"
            goto ctor_initializer_ret;
#line 3394 "cplus.met"
        }
#line 3394 "cplus.met"
#line 3394 "cplus.met"
#line 3394 "cplus.met"
    }
#line 3394 "cplus.met"
#line 3394 "cplus.met"
#line 3395 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 3395 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 3395 "cplus.met"
return((PPTREE) 0);
#line 3395 "cplus.met"

#line 3395 "cplus.met"
ctor_initializer_exit :
#line 3395 "cplus.met"

#line 3395 "cplus.met"
    _Debug = TRACE_RULE("ctor_initializer",TRACE_EXIT,(PPTREE)0);
#line 3395 "cplus.met"
    _funcLevel--;
#line 3395 "cplus.met"
    return((PPTREE) -1) ;
#line 3395 "cplus.met"

#line 3395 "cplus.met"
ctor_initializer_ret :
#line 3395 "cplus.met"
    
#line 3395 "cplus.met"
    _Debug = TRACE_RULE("ctor_initializer",TRACE_RETURN,_retValue);
#line 3395 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 3395 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 3395 "cplus.met"
    return _retValue ;
#line 3395 "cplus.met"
}
#line 3395 "cplus.met"

#line 3395 "cplus.met"
#line 1740 "cplus.met"
PPTREE cplus::data_decl_exotic ( int error_free)
#line 1740 "cplus.met"
{
#line 1740 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 1740 "cplus.met"
    int _value,_nbPre = 0 ;
#line 1740 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 1740 "cplus.met"
    int _Debug = TRACE_RULE("data_decl_exotic",TRACE_ENTER,(PPTREE)0);
#line 1740 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 1740 "cplus.met"
#line 1740 "cplus.met"
    PPTREE retTree = (PPTREE) 0;
#line 1740 "cplus.met"
#line 1743 "cplus.met"
    if (! (NPUSH_CALL_AFF_VERIF(retTree = ,_Tak(message_map), 102, cplus))){
#line 1743 "cplus.met"
#line 1745 "cplus.met"
        if ( (retTree=NQUICK_CALL(_Tak(macro)(error_free), 98, cplus))== (PPTREE) -1 ) {
#line 1745 "cplus.met"
            MulFreeTree(1,retTree);
            PROG_EXIT(data_decl_exotic_exit,"data_decl_exotic")
#line 1745 "cplus.met"
        }
#line 1745 "cplus.met"
    }
#line 1745 "cplus.met"
#line 1746 "cplus.met"
    {
#line 1746 "cplus.met"
        _retValue = retTree ;
#line 1746 "cplus.met"
        goto data_decl_exotic_ret;
#line 1746 "cplus.met"
        
#line 1746 "cplus.met"
    }
#line 1746 "cplus.met"
#line 1746 "cplus.met"
#line 1746 "cplus.met"

#line 1747 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1747 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 1747 "cplus.met"
return((PPTREE) 0);
#line 1747 "cplus.met"

#line 1747 "cplus.met"
data_decl_exotic_exit :
#line 1747 "cplus.met"

#line 1747 "cplus.met"
    _Debug = TRACE_RULE("data_decl_exotic",TRACE_EXIT,(PPTREE)0);
#line 1747 "cplus.met"
    _funcLevel--;
#line 1747 "cplus.met"
    return((PPTREE) -1) ;
#line 1747 "cplus.met"

#line 1747 "cplus.met"
data_decl_exotic_ret :
#line 1747 "cplus.met"
    
#line 1747 "cplus.met"
    _Debug = TRACE_RULE("data_decl_exotic",TRACE_RETURN,_retValue);
#line 1747 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1747 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 1747 "cplus.met"
    return _retValue ;
#line 1747 "cplus.met"
}
#line 1747 "cplus.met"

#line 1747 "cplus.met"
#line 1693 "cplus.met"
PPTREE cplus::data_decl_sc_decl ( int error_free)
#line 1693 "cplus.met"
{
#line 1693 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 1693 "cplus.met"
    int _value,_nbPre = 0 ;
#line 1693 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 1693 "cplus.met"
    int _Debug = TRACE_RULE("data_decl_sc_decl",TRACE_ENTER,(PPTREE)0);
#line 1693 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 1693 "cplus.met"
#line 1693 "cplus.met"
    PPTREE retTree = (PPTREE) 0;
#line 1693 "cplus.met"
#line 1695 "cplus.met"
    if (! (NPUSH_CALL_AFF_VERIF(retTree = ,_Tak(data_decl_sc_decl_full), 40, cplus))){
#line 1695 "cplus.met"
#line 1696 "cplus.met"
        if ( (retTree=NQUICK_CALL(_Tak(data_decl_sc_decl_short)(error_free), 41, cplus))== (PPTREE) -1 ) {
#line 1696 "cplus.met"
            MulFreeTree(1,retTree);
            PROG_EXIT(data_decl_sc_decl_exit,"data_decl_sc_decl")
#line 1696 "cplus.met"
        }
#line 1696 "cplus.met"
    }
#line 1696 "cplus.met"
#line 1697 "cplus.met"
    {
#line 1697 "cplus.met"
        _retValue = retTree ;
#line 1697 "cplus.met"
        goto data_decl_sc_decl_ret;
#line 1697 "cplus.met"
        
#line 1697 "cplus.met"
    }
#line 1697 "cplus.met"
#line 1697 "cplus.met"
#line 1697 "cplus.met"

#line 1698 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1698 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 1698 "cplus.met"
return((PPTREE) 0);
#line 1698 "cplus.met"

#line 1698 "cplus.met"
data_decl_sc_decl_exit :
#line 1698 "cplus.met"

#line 1698 "cplus.met"
    _Debug = TRACE_RULE("data_decl_sc_decl",TRACE_EXIT,(PPTREE)0);
#line 1698 "cplus.met"
    _funcLevel--;
#line 1698 "cplus.met"
    return((PPTREE) -1) ;
#line 1698 "cplus.met"

#line 1698 "cplus.met"
data_decl_sc_decl_ret :
#line 1698 "cplus.met"
    
#line 1698 "cplus.met"
    _Debug = TRACE_RULE("data_decl_sc_decl",TRACE_RETURN,_retValue);
#line 1698 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1698 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 1698 "cplus.met"
    return _retValue ;
#line 1698 "cplus.met"
}
#line 1698 "cplus.met"

#line 1698 "cplus.met"
#line 1676 "cplus.met"
PPTREE cplus::data_decl_sc_decl_full ( int error_free)
#line 1676 "cplus.met"
{
#line 1676 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 1676 "cplus.met"
    int _value,_nbPre = 0 ;
#line 1676 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 1676 "cplus.met"
    int _Debug = TRACE_RULE("data_decl_sc_decl_full",TRACE_ENTER,(PPTREE)0);
#line 1676 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 1676 "cplus.met"
#line 1676 "cplus.met"
    PPTREE retTree = (PPTREE) 0;
#line 1676 "cplus.met"
#line 1678 "cplus.met"
    {
#line 1678 "cplus.met"
        PPTREE _ptRes0=0;
#line 1678 "cplus.met"
        _ptRes0= MakeTree(DECLARATION, 3);
#line 1678 "cplus.met"
        retTree=_ptRes0;
#line 1678 "cplus.met"
    }
#line 1678 "cplus.met"
#line 1679 "cplus.met"
    {
#line 1679 "cplus.met"
        PPTREE _ptTree0=0;
#line 1679 "cplus.met"
        if ( (_ptTree0=NQUICK_CALL(_Tak(sc_specifier)(error_free), 133, cplus))== (PPTREE) -1 ) {
#line 1679 "cplus.met"
            MulFreeTree(2,_ptTree0,retTree);
            PROG_EXIT(data_decl_sc_decl_full_exit,"data_decl_sc_decl_full")
#line 1679 "cplus.met"
        }
#line 1679 "cplus.met"
        ReplaceTree(retTree , 1 , _ptTree0);
#line 1679 "cplus.met"
    }
#line 1679 "cplus.met"
#line 1680 "cplus.met"
    {
#line 1680 "cplus.met"
        PPTREE _ptTree0=0;
#line 1680 "cplus.met"
        if ( (_ptTree0=NQUICK_CALL(_Tak(declarator_list_init)(error_free), 54, cplus))== (PPTREE) -1 ) {
#line 1680 "cplus.met"
            MulFreeTree(2,_ptTree0,retTree);
            PROG_EXIT(data_decl_sc_decl_full_exit,"data_decl_sc_decl_full")
#line 1680 "cplus.met"
        }
#line 1680 "cplus.met"
        ReplaceTree(retTree , 3 , _ptTree0);
#line 1680 "cplus.met"
    }
#line 1680 "cplus.met"
#line 1681 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 1681 "cplus.met"
    if (  !SEE_TOKEN( PVIR,";") || !(CommTerm(),1)) {
#line 1681 "cplus.met"
        MulFreeTree(1,retTree);
        TOKEN_EXIT(data_decl_sc_decl_full_exit,";")
#line 1681 "cplus.met"
    } else {
#line 1681 "cplus.met"
        tokenAhead = 0 ;
#line 1681 "cplus.met"
    }
#line 1681 "cplus.met"
#line 1682 "cplus.met"
    {
#line 1682 "cplus.met"
        _retValue = retTree ;
#line 1682 "cplus.met"
        goto data_decl_sc_decl_full_ret;
#line 1682 "cplus.met"
        
#line 1682 "cplus.met"
    }
#line 1682 "cplus.met"
#line 1682 "cplus.met"
#line 1682 "cplus.met"

#line 1683 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1683 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 1683 "cplus.met"
return((PPTREE) 0);
#line 1683 "cplus.met"

#line 1683 "cplus.met"
data_decl_sc_decl_full_exit :
#line 1683 "cplus.met"

#line 1683 "cplus.met"
    _Debug = TRACE_RULE("data_decl_sc_decl_full",TRACE_EXIT,(PPTREE)0);
#line 1683 "cplus.met"
    _funcLevel--;
#line 1683 "cplus.met"
    return((PPTREE) -1) ;
#line 1683 "cplus.met"

#line 1683 "cplus.met"
data_decl_sc_decl_full_ret :
#line 1683 "cplus.met"
    
#line 1683 "cplus.met"
    _Debug = TRACE_RULE("data_decl_sc_decl_full",TRACE_RETURN,_retValue);
#line 1683 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1683 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 1683 "cplus.met"
    return _retValue ;
#line 1683 "cplus.met"
}
#line 1683 "cplus.met"

#line 1683 "cplus.met"
#line 1685 "cplus.met"
PPTREE cplus::data_decl_sc_decl_short ( int error_free)
#line 1685 "cplus.met"
{
#line 1685 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 1685 "cplus.met"
    int _value,_nbPre = 0 ;
#line 1685 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 1685 "cplus.met"
    int _Debug = TRACE_RULE("data_decl_sc_decl_short",TRACE_ENTER,(PPTREE)0);
#line 1685 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 1685 "cplus.met"
#line 1685 "cplus.met"
    PPTREE retTree = (PPTREE) 0;
#line 1685 "cplus.met"
#line 1687 "cplus.met"
    {
#line 1687 "cplus.met"
        PPTREE _ptRes0=0;
#line 1687 "cplus.met"
        _ptRes0= MakeTree(DECLARATION, 3);
#line 1687 "cplus.met"
        retTree=_ptRes0;
#line 1687 "cplus.met"
    }
#line 1687 "cplus.met"
#line 1688 "cplus.met"
    {
#line 1688 "cplus.met"
        PPTREE _ptTree0=0;
#line 1688 "cplus.met"
        if ( (_ptTree0=NQUICK_CALL(_Tak(declarator_list_init)(error_free), 54, cplus))== (PPTREE) -1 ) {
#line 1688 "cplus.met"
            MulFreeTree(2,_ptTree0,retTree);
            PROG_EXIT(data_decl_sc_decl_short_exit,"data_decl_sc_decl_short")
#line 1688 "cplus.met"
        }
#line 1688 "cplus.met"
        ReplaceTree(retTree , 3 , _ptTree0);
#line 1688 "cplus.met"
    }
#line 1688 "cplus.met"
#line 1689 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 1689 "cplus.met"
    if (  !SEE_TOKEN( PVIR,";") || !(CommTerm(),1)) {
#line 1689 "cplus.met"
        MulFreeTree(1,retTree);
        TOKEN_EXIT(data_decl_sc_decl_short_exit,";")
#line 1689 "cplus.met"
    } else {
#line 1689 "cplus.met"
        tokenAhead = 0 ;
#line 1689 "cplus.met"
    }
#line 1689 "cplus.met"
#line 1690 "cplus.met"
    {
#line 1690 "cplus.met"
        _retValue = retTree ;
#line 1690 "cplus.met"
        goto data_decl_sc_decl_short_ret;
#line 1690 "cplus.met"
        
#line 1690 "cplus.met"
    }
#line 1690 "cplus.met"
#line 1690 "cplus.met"
#line 1690 "cplus.met"

#line 1691 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1691 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 1691 "cplus.met"
return((PPTREE) 0);
#line 1691 "cplus.met"

#line 1691 "cplus.met"
data_decl_sc_decl_short_exit :
#line 1691 "cplus.met"

#line 1691 "cplus.met"
    _Debug = TRACE_RULE("data_decl_sc_decl_short",TRACE_EXIT,(PPTREE)0);
#line 1691 "cplus.met"
    _funcLevel--;
#line 1691 "cplus.met"
    return((PPTREE) -1) ;
#line 1691 "cplus.met"

#line 1691 "cplus.met"
data_decl_sc_decl_short_ret :
#line 1691 "cplus.met"
    
#line 1691 "cplus.met"
    _Debug = TRACE_RULE("data_decl_sc_decl_short",TRACE_RETURN,_retValue);
#line 1691 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1691 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 1691 "cplus.met"
    return _retValue ;
#line 1691 "cplus.met"
}
#line 1691 "cplus.met"

#line 1691 "cplus.met"
#line 1733 "cplus.met"
PPTREE cplus::data_decl_sc_ty_decl ( int error_free)
#line 1733 "cplus.met"
{
#line 1733 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 1733 "cplus.met"
    int _value,_nbPre = 0 ;
#line 1733 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 1733 "cplus.met"
    int _Debug = TRACE_RULE("data_decl_sc_ty_decl",TRACE_ENTER,(PPTREE)0);
#line 1733 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 1733 "cplus.met"
#line 1733 "cplus.met"
    PPTREE retTree = (PPTREE) 0;
#line 1733 "cplus.met"
#line 1735 "cplus.met"
    if (! (NPUSH_CALL_AFF_VERIF(retTree = ,_Tak(data_decl_sc_ty_decl_full), 43, cplus))){
#line 1735 "cplus.met"
#line 1736 "cplus.met"
        if ( (retTree=NQUICK_CALL(_Tak(data_decl_sc_ty_decl_short)(error_free), 44, cplus))== (PPTREE) -1 ) {
#line 1736 "cplus.met"
            MulFreeTree(1,retTree);
            PROG_EXIT(data_decl_sc_ty_decl_exit,"data_decl_sc_ty_decl")
#line 1736 "cplus.met"
        }
#line 1736 "cplus.met"
    }
#line 1736 "cplus.met"
#line 1737 "cplus.met"
    {
#line 1737 "cplus.met"
        _retValue = retTree ;
#line 1737 "cplus.met"
        goto data_decl_sc_ty_decl_ret;
#line 1737 "cplus.met"
        
#line 1737 "cplus.met"
    }
#line 1737 "cplus.met"
#line 1737 "cplus.met"
#line 1737 "cplus.met"

#line 1738 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1738 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 1738 "cplus.met"
return((PPTREE) 0);
#line 1738 "cplus.met"

#line 1738 "cplus.met"
data_decl_sc_ty_decl_exit :
#line 1738 "cplus.met"

#line 1738 "cplus.met"
    _Debug = TRACE_RULE("data_decl_sc_ty_decl",TRACE_EXIT,(PPTREE)0);
#line 1738 "cplus.met"
    _funcLevel--;
#line 1738 "cplus.met"
    return((PPTREE) -1) ;
#line 1738 "cplus.met"

#line 1738 "cplus.met"
data_decl_sc_ty_decl_ret :
#line 1738 "cplus.met"
    
#line 1738 "cplus.met"
    _Debug = TRACE_RULE("data_decl_sc_ty_decl",TRACE_RETURN,_retValue);
#line 1738 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1738 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 1738 "cplus.met"
    return _retValue ;
#line 1738 "cplus.met"
}
#line 1738 "cplus.met"

#line 1738 "cplus.met"
#line 1710 "cplus.met"
PPTREE cplus::data_decl_sc_ty_decl_full ( int error_free)
#line 1710 "cplus.met"
{
#line 1710 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 1710 "cplus.met"
    int _value,_nbPre = 0 ;
#line 1710 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 1710 "cplus.met"
    int _Debug = TRACE_RULE("data_decl_sc_ty_decl_full",TRACE_ENTER,(PPTREE)0);
#line 1710 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 1710 "cplus.met"
#line 1710 "cplus.met"
    PPTREE retTree = (PPTREE) 0;
#line 1710 "cplus.met"
#line 1713 "cplus.met"
    {
#line 1713 "cplus.met"
        PPTREE _ptRes0=0;
#line 1713 "cplus.met"
        _ptRes0= MakeTree(DECLARATION, 3);
#line 1713 "cplus.met"
        retTree=_ptRes0;
#line 1713 "cplus.met"
    }
#line 1713 "cplus.met"
#line 1715 "cplus.met"
    {
#line 1715 "cplus.met"
        PPTREE _ptTree0=0;
#line 1715 "cplus.met"
        if ( (_ptTree0=NQUICK_CALL(_Tak(sc_specifier)(error_free), 133, cplus))== (PPTREE) -1 ) {
#line 1715 "cplus.met"
            MulFreeTree(2,_ptTree0,retTree);
            PROG_EXIT(data_decl_sc_ty_decl_full_exit,"data_decl_sc_ty_decl_full")
#line 1715 "cplus.met"
        }
#line 1715 "cplus.met"
        ReplaceTree(retTree , 1 , _ptTree0);
#line 1715 "cplus.met"
    }
#line 1715 "cplus.met"
#line 1716 "cplus.met"
    {
#line 1716 "cplus.met"
        PPTREE _ptTree0=0;
#line 1716 "cplus.met"
        if ( (_ptTree0=NQUICK_CALL(_Tak(type_specifier)(error_free), 155, cplus))== (PPTREE) -1 ) {
#line 1716 "cplus.met"
            MulFreeTree(2,_ptTree0,retTree);
            PROG_EXIT(data_decl_sc_ty_decl_full_exit,"data_decl_sc_ty_decl_full")
#line 1716 "cplus.met"
        }
#line 1716 "cplus.met"
        ReplaceTree(retTree , 2 , _ptTree0);
#line 1716 "cplus.met"
    }
#line 1716 "cplus.met"
#line 1717 "cplus.met"
    {
#line 1717 "cplus.met"
        PPTREE _ptTree0=0;
#line 1717 "cplus.met"
        if ( (_ptTree0=NQUICK_CALL(_Tak(declarator_list_init)(error_free), 54, cplus))== (PPTREE) -1 ) {
#line 1717 "cplus.met"
            MulFreeTree(2,_ptTree0,retTree);
            PROG_EXIT(data_decl_sc_ty_decl_full_exit,"data_decl_sc_ty_decl_full")
#line 1717 "cplus.met"
        }
#line 1717 "cplus.met"
        ReplaceTree(retTree , 3 , _ptTree0);
#line 1717 "cplus.met"
    }
#line 1717 "cplus.met"
#line 1718 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 1718 "cplus.met"
    if (  !SEE_TOKEN( PVIR,";") || !(CommTerm(),1)) {
#line 1718 "cplus.met"
        MulFreeTree(1,retTree);
        TOKEN_EXIT(data_decl_sc_ty_decl_full_exit,";")
#line 1718 "cplus.met"
    } else {
#line 1718 "cplus.met"
        tokenAhead = 0 ;
#line 1718 "cplus.met"
    }
#line 1718 "cplus.met"
#line 1719 "cplus.met"
    {
#line 1719 "cplus.met"
        _retValue = retTree ;
#line 1719 "cplus.met"
        goto data_decl_sc_ty_decl_full_ret;
#line 1719 "cplus.met"
        
#line 1719 "cplus.met"
    }
#line 1719 "cplus.met"
#line 1719 "cplus.met"
#line 1719 "cplus.met"

#line 1720 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1720 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 1720 "cplus.met"
return((PPTREE) 0);
#line 1720 "cplus.met"

#line 1720 "cplus.met"
data_decl_sc_ty_decl_full_exit :
#line 1720 "cplus.met"

#line 1720 "cplus.met"
    _Debug = TRACE_RULE("data_decl_sc_ty_decl_full",TRACE_EXIT,(PPTREE)0);
#line 1720 "cplus.met"
    _funcLevel--;
#line 1720 "cplus.met"
    return((PPTREE) -1) ;
#line 1720 "cplus.met"

#line 1720 "cplus.met"
data_decl_sc_ty_decl_full_ret :
#line 1720 "cplus.met"
    
#line 1720 "cplus.met"
    _Debug = TRACE_RULE("data_decl_sc_ty_decl_full",TRACE_RETURN,_retValue);
#line 1720 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1720 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 1720 "cplus.met"
    return _retValue ;
#line 1720 "cplus.met"
}
#line 1720 "cplus.met"

#line 1720 "cplus.met"
#line 1722 "cplus.met"
PPTREE cplus::data_decl_sc_ty_decl_short ( int error_free)
#line 1722 "cplus.met"
{
#line 1722 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 1722 "cplus.met"
    int _value,_nbPre = 0 ;
#line 1722 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 1722 "cplus.met"
    int _Debug = TRACE_RULE("data_decl_sc_ty_decl_short",TRACE_ENTER,(PPTREE)0);
#line 1722 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 1722 "cplus.met"
#line 1722 "cplus.met"
    PPTREE retTree = (PPTREE) 0;
#line 1722 "cplus.met"
#line 1725 "cplus.met"
    {
#line 1725 "cplus.met"
        PPTREE _ptRes0=0;
#line 1725 "cplus.met"
        _ptRes0= MakeTree(DECLARATION, 3);
#line 1725 "cplus.met"
        retTree=_ptRes0;
#line 1725 "cplus.met"
    }
#line 1725 "cplus.met"
#line 1727 "cplus.met"
    {
#line 1727 "cplus.met"
        PPTREE _ptTree0=0;
#line 1727 "cplus.met"
        if ( (_ptTree0=NQUICK_CALL(_Tak(type_specifier)(error_free), 155, cplus))== (PPTREE) -1 ) {
#line 1727 "cplus.met"
            MulFreeTree(2,_ptTree0,retTree);
            PROG_EXIT(data_decl_sc_ty_decl_short_exit,"data_decl_sc_ty_decl_short")
#line 1727 "cplus.met"
        }
#line 1727 "cplus.met"
        ReplaceTree(retTree , 2 , _ptTree0);
#line 1727 "cplus.met"
    }
#line 1727 "cplus.met"
#line 1728 "cplus.met"
    {
#line 1728 "cplus.met"
        PPTREE _ptTree0=0;
#line 1728 "cplus.met"
        if ( (_ptTree0=NQUICK_CALL(_Tak(declarator_list_init)(error_free), 54, cplus))== (PPTREE) -1 ) {
#line 1728 "cplus.met"
            MulFreeTree(2,_ptTree0,retTree);
            PROG_EXIT(data_decl_sc_ty_decl_short_exit,"data_decl_sc_ty_decl_short")
#line 1728 "cplus.met"
        }
#line 1728 "cplus.met"
        ReplaceTree(retTree , 3 , _ptTree0);
#line 1728 "cplus.met"
    }
#line 1728 "cplus.met"
#line 1729 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 1729 "cplus.met"
    if (  !SEE_TOKEN( PVIR,";") || !(CommTerm(),1)) {
#line 1729 "cplus.met"
        MulFreeTree(1,retTree);
        TOKEN_EXIT(data_decl_sc_ty_decl_short_exit,";")
#line 1729 "cplus.met"
    } else {
#line 1729 "cplus.met"
        tokenAhead = 0 ;
#line 1729 "cplus.met"
    }
#line 1729 "cplus.met"
#line 1730 "cplus.met"
    {
#line 1730 "cplus.met"
        _retValue = retTree ;
#line 1730 "cplus.met"
        goto data_decl_sc_ty_decl_short_ret;
#line 1730 "cplus.met"
        
#line 1730 "cplus.met"
    }
#line 1730 "cplus.met"
#line 1730 "cplus.met"
#line 1730 "cplus.met"

#line 1731 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1731 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 1731 "cplus.met"
return((PPTREE) 0);
#line 1731 "cplus.met"

#line 1731 "cplus.met"
data_decl_sc_ty_decl_short_exit :
#line 1731 "cplus.met"

#line 1731 "cplus.met"
    _Debug = TRACE_RULE("data_decl_sc_ty_decl_short",TRACE_EXIT,(PPTREE)0);
#line 1731 "cplus.met"
    _funcLevel--;
#line 1731 "cplus.met"
    return((PPTREE) -1) ;
#line 1731 "cplus.met"

#line 1731 "cplus.met"
data_decl_sc_ty_decl_short_ret :
#line 1731 "cplus.met"
    
#line 1731 "cplus.met"
    _Debug = TRACE_RULE("data_decl_sc_ty_decl_short",TRACE_RETURN,_retValue);
#line 1731 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1731 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 1731 "cplus.met"
    return _retValue ;
#line 1731 "cplus.met"
}
#line 1731 "cplus.met"

#line 1731 "cplus.met"
#line 1700 "cplus.met"
PPTREE cplus::data_declaration ( int error_free)
#line 1700 "cplus.met"
{
#line 1700 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 1700 "cplus.met"
    int _value,_nbPre = 0 ;
#line 1700 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 1700 "cplus.met"
    int _Debug = TRACE_RULE("data_declaration",TRACE_ENTER,(PPTREE)0);
#line 1700 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 1700 "cplus.met"
#line 1700 "cplus.met"
    PPTREE retTree = (PPTREE) 0;
#line 1700 "cplus.met"
#line 1702 "cplus.met"
    if (! (NPUSH_CALL_AFF_VERIF(retTree = ,_Tak(data_decl_sc_decl), 39, cplus))){
#line 1702 "cplus.met"
#line 1703 "cplus.met"
        if ( (retTree=NQUICK_CALL(_Tak(data_declaration_strict)(error_free), 49, cplus))== (PPTREE) -1 ) {
#line 1703 "cplus.met"
            MulFreeTree(1,retTree);
            PROG_EXIT(data_declaration_exit,"data_declaration")
#line 1703 "cplus.met"
        }
#line 1703 "cplus.met"
    }
#line 1703 "cplus.met"
#line 1704 "cplus.met"
    {
#line 1704 "cplus.met"
        _retValue = retTree ;
#line 1704 "cplus.met"
        goto data_declaration_ret;
#line 1704 "cplus.met"
        
#line 1704 "cplus.met"
    }
#line 1704 "cplus.met"
#line 1704 "cplus.met"
#line 1704 "cplus.met"

#line 1705 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1705 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 1705 "cplus.met"
return((PPTREE) 0);
#line 1705 "cplus.met"

#line 1705 "cplus.met"
data_declaration_exit :
#line 1705 "cplus.met"

#line 1705 "cplus.met"
    _Debug = TRACE_RULE("data_declaration",TRACE_EXIT,(PPTREE)0);
#line 1705 "cplus.met"
    _funcLevel--;
#line 1705 "cplus.met"
    return((PPTREE) -1) ;
#line 1705 "cplus.met"

#line 1705 "cplus.met"
data_declaration_ret :
#line 1705 "cplus.met"
    
#line 1705 "cplus.met"
    _Debug = TRACE_RULE("data_declaration",TRACE_RETURN,_retValue);
#line 1705 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1705 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 1705 "cplus.met"
    return _retValue ;
#line 1705 "cplus.met"
}
#line 1705 "cplus.met"

#line 1705 "cplus.met"
#line 1774 "cplus.met"
PPTREE cplus::data_declaration_for ( int error_free)
#line 1774 "cplus.met"
{
#line 1774 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 1774 "cplus.met"
    int _value,_nbPre = 0 ;
#line 1774 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 1774 "cplus.met"
    int _Debug = TRACE_RULE("data_declaration_for",TRACE_ENTER,(PPTREE)0);
#line 1774 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 1774 "cplus.met"
#line 1774 "cplus.met"
    PPTREE retTree = (PPTREE) 0;
#line 1774 "cplus.met"
#line 1776 "cplus.met"
    if (! (NPUSH_CALL_AFF_VERIF(retTree = ,_Tak(data_declaration_for_full), 47, cplus))){
#line 1776 "cplus.met"
#line 1777 "cplus.met"
        if ( (retTree=NQUICK_CALL(_Tak(data_declaration_for_short)(error_free), 48, cplus))== (PPTREE) -1 ) {
#line 1777 "cplus.met"
            MulFreeTree(1,retTree);
            PROG_EXIT(data_declaration_for_exit,"data_declaration_for")
#line 1777 "cplus.met"
        }
#line 1777 "cplus.met"
    }
#line 1777 "cplus.met"
#line 1778 "cplus.met"
    {
#line 1778 "cplus.met"
        _retValue = retTree ;
#line 1778 "cplus.met"
        goto data_declaration_for_ret;
#line 1778 "cplus.met"
        
#line 1778 "cplus.met"
    }
#line 1778 "cplus.met"
#line 1778 "cplus.met"
#line 1778 "cplus.met"

#line 1779 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1779 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 1779 "cplus.met"
return((PPTREE) 0);
#line 1779 "cplus.met"

#line 1779 "cplus.met"
data_declaration_for_exit :
#line 1779 "cplus.met"

#line 1779 "cplus.met"
    _Debug = TRACE_RULE("data_declaration_for",TRACE_EXIT,(PPTREE)0);
#line 1779 "cplus.met"
    _funcLevel--;
#line 1779 "cplus.met"
    return((PPTREE) -1) ;
#line 1779 "cplus.met"

#line 1779 "cplus.met"
data_declaration_for_ret :
#line 1779 "cplus.met"
    
#line 1779 "cplus.met"
    _Debug = TRACE_RULE("data_declaration_for",TRACE_RETURN,_retValue);
#line 1779 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1779 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 1779 "cplus.met"
    return _retValue ;
#line 1779 "cplus.met"
}
#line 1779 "cplus.met"

#line 1779 "cplus.met"
#line 1757 "cplus.met"
PPTREE cplus::data_declaration_for_full ( int error_free)
#line 1757 "cplus.met"
{
#line 1757 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 1757 "cplus.met"
    int _value,_nbPre = 0 ;
#line 1757 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 1757 "cplus.met"
    int _Debug = TRACE_RULE("data_declaration_for_full",TRACE_ENTER,(PPTREE)0);
#line 1757 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 1757 "cplus.met"
#line 1757 "cplus.met"
    PPTREE retTree = (PPTREE) 0;
#line 1757 "cplus.met"
#line 1759 "cplus.met"
    {
#line 1759 "cplus.met"
        PPTREE _ptRes0=0;
#line 1759 "cplus.met"
        _ptRes0= MakeTree(FOR_DECLARATION, 3);
#line 1759 "cplus.met"
        retTree=_ptRes0;
#line 1759 "cplus.met"
    }
#line 1759 "cplus.met"
#line 1760 "cplus.met"
    {
#line 1760 "cplus.met"
        PPTREE _ptTree0=0;
#line 1760 "cplus.met"
        if ( (_ptTree0=NQUICK_CALL(_Tak(sc_specifier)(error_free), 133, cplus))== (PPTREE) -1 ) {
#line 1760 "cplus.met"
            MulFreeTree(2,_ptTree0,retTree);
            PROG_EXIT(data_declaration_for_full_exit,"data_declaration_for_full")
#line 1760 "cplus.met"
        }
#line 1760 "cplus.met"
        ReplaceTree(retTree , 1 , _ptTree0);
#line 1760 "cplus.met"
    }
#line 1760 "cplus.met"
#line 1761 "cplus.met"
    {
#line 1761 "cplus.met"
        PPTREE _ptTree0=0;
#line 1761 "cplus.met"
        if ( (_ptTree0=NQUICK_CALL(_Tak(type_specifier)(error_free), 155, cplus))== (PPTREE) -1 ) {
#line 1761 "cplus.met"
            MulFreeTree(2,_ptTree0,retTree);
            PROG_EXIT(data_declaration_for_full_exit,"data_declaration_for_full")
#line 1761 "cplus.met"
        }
#line 1761 "cplus.met"
        ReplaceTree(retTree , 2 , _ptTree0);
#line 1761 "cplus.met"
    }
#line 1761 "cplus.met"
#line 1762 "cplus.met"
    {
#line 1762 "cplus.met"
        PPTREE _ptTree0=0;
#line 1762 "cplus.met"
        if ( (_ptTree0=NQUICK_CALL(_Tak(declarator_list_init)(error_free), 54, cplus))== (PPTREE) -1 ) {
#line 1762 "cplus.met"
            MulFreeTree(2,_ptTree0,retTree);
            PROG_EXIT(data_declaration_for_full_exit,"data_declaration_for_full")
#line 1762 "cplus.met"
        }
#line 1762 "cplus.met"
        ReplaceTree(retTree , 3 , _ptTree0);
#line 1762 "cplus.met"
    }
#line 1762 "cplus.met"
#line 1763 "cplus.met"
    {
#line 1763 "cplus.met"
        _retValue = retTree ;
#line 1763 "cplus.met"
        goto data_declaration_for_full_ret;
#line 1763 "cplus.met"
        
#line 1763 "cplus.met"
    }
#line 1763 "cplus.met"
#line 1763 "cplus.met"
#line 1763 "cplus.met"

#line 1764 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1764 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 1764 "cplus.met"
return((PPTREE) 0);
#line 1764 "cplus.met"

#line 1764 "cplus.met"
data_declaration_for_full_exit :
#line 1764 "cplus.met"

#line 1764 "cplus.met"
    _Debug = TRACE_RULE("data_declaration_for_full",TRACE_EXIT,(PPTREE)0);
#line 1764 "cplus.met"
    _funcLevel--;
#line 1764 "cplus.met"
    return((PPTREE) -1) ;
#line 1764 "cplus.met"

#line 1764 "cplus.met"
data_declaration_for_full_ret :
#line 1764 "cplus.met"
    
#line 1764 "cplus.met"
    _Debug = TRACE_RULE("data_declaration_for_full",TRACE_RETURN,_retValue);
#line 1764 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1764 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 1764 "cplus.met"
    return _retValue ;
#line 1764 "cplus.met"
}
#line 1764 "cplus.met"

#line 1764 "cplus.met"
#line 1766 "cplus.met"
PPTREE cplus::data_declaration_for_short ( int error_free)
#line 1766 "cplus.met"
{
#line 1766 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 1766 "cplus.met"
    int _value,_nbPre = 0 ;
#line 1766 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 1766 "cplus.met"
    int _Debug = TRACE_RULE("data_declaration_for_short",TRACE_ENTER,(PPTREE)0);
#line 1766 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 1766 "cplus.met"
#line 1766 "cplus.met"
    PPTREE retTree = (PPTREE) 0;
#line 1766 "cplus.met"
#line 1768 "cplus.met"
    {
#line 1768 "cplus.met"
        PPTREE _ptRes0=0;
#line 1768 "cplus.met"
        _ptRes0= MakeTree(FOR_DECLARATION, 3);
#line 1768 "cplus.met"
        retTree=_ptRes0;
#line 1768 "cplus.met"
    }
#line 1768 "cplus.met"
#line 1769 "cplus.met"
    {
#line 1769 "cplus.met"
        PPTREE _ptTree0=0;
#line 1769 "cplus.met"
        if ( (_ptTree0=NQUICK_CALL(_Tak(type_specifier)(error_free), 155, cplus))== (PPTREE) -1 ) {
#line 1769 "cplus.met"
            MulFreeTree(2,_ptTree0,retTree);
            PROG_EXIT(data_declaration_for_short_exit,"data_declaration_for_short")
#line 1769 "cplus.met"
        }
#line 1769 "cplus.met"
        ReplaceTree(retTree , 2 , _ptTree0);
#line 1769 "cplus.met"
    }
#line 1769 "cplus.met"
#line 1770 "cplus.met"
    {
#line 1770 "cplus.met"
        PPTREE _ptTree0=0;
#line 1770 "cplus.met"
        if ( (_ptTree0=NQUICK_CALL(_Tak(declarator_list_init)(error_free), 54, cplus))== (PPTREE) -1 ) {
#line 1770 "cplus.met"
            MulFreeTree(2,_ptTree0,retTree);
            PROG_EXIT(data_declaration_for_short_exit,"data_declaration_for_short")
#line 1770 "cplus.met"
        }
#line 1770 "cplus.met"
        ReplaceTree(retTree , 3 , _ptTree0);
#line 1770 "cplus.met"
    }
#line 1770 "cplus.met"
#line 1771 "cplus.met"
    {
#line 1771 "cplus.met"
        _retValue = retTree ;
#line 1771 "cplus.met"
        goto data_declaration_for_short_ret;
#line 1771 "cplus.met"
        
#line 1771 "cplus.met"
    }
#line 1771 "cplus.met"
#line 1771 "cplus.met"
#line 1771 "cplus.met"

#line 1772 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1772 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 1772 "cplus.met"
return((PPTREE) 0);
#line 1772 "cplus.met"

#line 1772 "cplus.met"
data_declaration_for_short_exit :
#line 1772 "cplus.met"

#line 1772 "cplus.met"
    _Debug = TRACE_RULE("data_declaration_for_short",TRACE_EXIT,(PPTREE)0);
#line 1772 "cplus.met"
    _funcLevel--;
#line 1772 "cplus.met"
    return((PPTREE) -1) ;
#line 1772 "cplus.met"

#line 1772 "cplus.met"
data_declaration_for_short_ret :
#line 1772 "cplus.met"
    
#line 1772 "cplus.met"
    _Debug = TRACE_RULE("data_declaration_for_short",TRACE_RETURN,_retValue);
#line 1772 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1772 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 1772 "cplus.met"
    return _retValue ;
#line 1772 "cplus.met"
}
#line 1772 "cplus.met"

#line 1772 "cplus.met"
#line 1749 "cplus.met"
PPTREE cplus::data_declaration_strict ( int error_free)
#line 1749 "cplus.met"
{
#line 1749 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 1749 "cplus.met"
    int _value,_nbPre = 0 ;
#line 1749 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 1749 "cplus.met"
    int _Debug = TRACE_RULE("data_declaration_strict",TRACE_ENTER,(PPTREE)0);
#line 1749 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 1749 "cplus.met"
#line 1749 "cplus.met"
    PPTREE retTree = (PPTREE) 0;
#line 1749 "cplus.met"
#line 1751 "cplus.met"
    if (! (NPUSH_CALL_AFF_VERIF(retTree = ,_Tak(data_decl_sc_ty_decl), 42, cplus))){
#line 1751 "cplus.met"
#line 1752 "cplus.met"
        if ( (retTree=NQUICK_CALL(_Tak(data_decl_exotic)(error_free), 38, cplus))== (PPTREE) -1 ) {
#line 1752 "cplus.met"
            MulFreeTree(1,retTree);
            PROG_EXIT(data_declaration_strict_exit,"data_declaration_strict")
#line 1752 "cplus.met"
        }
#line 1752 "cplus.met"
    }
#line 1752 "cplus.met"
#line 1753 "cplus.met"
    {
#line 1753 "cplus.met"
        _retValue = retTree ;
#line 1753 "cplus.met"
        goto data_declaration_strict_ret;
#line 1753 "cplus.met"
        
#line 1753 "cplus.met"
    }
#line 1753 "cplus.met"
#line 1753 "cplus.met"
#line 1753 "cplus.met"

#line 1754 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1754 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 1754 "cplus.met"
return((PPTREE) 0);
#line 1754 "cplus.met"

#line 1754 "cplus.met"
data_declaration_strict_exit :
#line 1754 "cplus.met"

#line 1754 "cplus.met"
    _Debug = TRACE_RULE("data_declaration_strict",TRACE_EXIT,(PPTREE)0);
#line 1754 "cplus.met"
    _funcLevel--;
#line 1754 "cplus.met"
    return((PPTREE) -1) ;
#line 1754 "cplus.met"

#line 1754 "cplus.met"
data_declaration_strict_ret :
#line 1754 "cplus.met"
    
#line 1754 "cplus.met"
    _Debug = TRACE_RULE("data_declaration_strict",TRACE_RETURN,_retValue);
#line 1754 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1754 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 1754 "cplus.met"
    return _retValue ;
#line 1754 "cplus.met"
}
#line 1754 "cplus.met"

#line 1754 "cplus.met"
#line 3034 "cplus.met"
PPTREE cplus::deallocation_expression ( int error_free)
#line 3034 "cplus.met"
{
#line 3034 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 3034 "cplus.met"
    int _value,_nbPre = 0 ;
#line 3034 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 3034 "cplus.met"
    int _Debug = TRACE_RULE("deallocation_expression",TRACE_ENTER,(PPTREE)0);
#line 3034 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 3034 "cplus.met"
#line 3034 "cplus.met"
    PPTREE retTree = (PPTREE) 0,expr = (PPTREE) 0,nullTree = (PPTREE) 0;
#line 3034 "cplus.met"
#line 3036 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3036 "cplus.met"
    if (  !SEE_TOKEN( DELETE,"delete") || !(CommTerm(),1)) {
#line 3036 "cplus.met"
        MulFreeTree(3,expr,nullTree,retTree);
        TOKEN_EXIT(deallocation_expression_exit,"delete")
#line 3036 "cplus.met"
    } else {
#line 3036 "cplus.met"
        tokenAhead = 0 ;
#line 3036 "cplus.met"
    }
#line 3036 "cplus.met"
#line 3037 "cplus.met"
    {
#line 3037 "cplus.met"
        PPTREE _ptRes0=0;
#line 3037 "cplus.met"
        _ptRes0= MakeTree(DELETE, 2);
#line 3037 "cplus.met"
        retTree=_ptRes0;
#line 3037 "cplus.met"
    }
#line 3037 "cplus.met"
#line 3038 "cplus.met"
    if ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN(COUV,"[") && (tokenAhead = 0,CommTerm(),1)){
#line 3038 "cplus.met"
#line 3039 "cplus.met"
#line 3042 "cplus.met"
        if (! (NPUSH_CALL_AFF_VERIF(expr = ,_Tak(expression), 67, cplus))){
#line 3042 "cplus.met"
#line 3044 "cplus.met"
            expr = nullTree ;
#line 3044 "cplus.met"
#line 3044 "cplus.met"
        }
#line 3044 "cplus.met"
#line 3045 "cplus.met"
        (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3045 "cplus.met"
        if (  !SEE_TOKEN( CFER,"]") || !(CommTerm(),1)) {
#line 3045 "cplus.met"
            MulFreeTree(3,expr,nullTree,retTree);
            TOKEN_EXIT(deallocation_expression_exit,"]")
#line 3045 "cplus.met"
        } else {
#line 3045 "cplus.met"
            tokenAhead = 0 ;
#line 3045 "cplus.met"
        }
#line 3045 "cplus.met"
#line 3046 "cplus.met"
        {
#line 3046 "cplus.met"
            PPTREE _ptTree0=0;
#line 3046 "cplus.met"
            {
#line 3046 "cplus.met"
                PPTREE _ptRes1=0;
#line 3046 "cplus.met"
                _ptRes1= MakeTree(TYP_ARRAY, 2);
#line 3046 "cplus.met"
                ReplaceTree(_ptRes1, 2, expr );
#line 3046 "cplus.met"
                _ptTree0=_ptRes1;
#line 3046 "cplus.met"
            }
#line 3046 "cplus.met"
            ReplaceTree(retTree , 1 , _ptTree0);
#line 3046 "cplus.met"
        }
#line 3046 "cplus.met"
#line 3046 "cplus.met"
#line 3046 "cplus.met"
    }
#line 3046 "cplus.met"
#line 3048 "cplus.met"
    {
#line 3048 "cplus.met"
        PPTREE _ptTree0=0;
#line 3048 "cplus.met"
        {
#line 3048 "cplus.met"
            PPTREE _ptTree1=0;
#line 3048 "cplus.met"
            if ( (_ptTree1=NQUICK_CALL(_Tak(cast_expression)(error_free), 26, cplus))== (PPTREE) -1 ) {
#line 3048 "cplus.met"
                MulFreeTree(5,_ptTree1,_ptTree0,expr,nullTree,retTree);
                PROG_EXIT(deallocation_expression_exit,"deallocation_expression")
#line 3048 "cplus.met"
            }
#line 3048 "cplus.met"
            _ptTree0=ReplaceTree(retTree , 2 , _ptTree1);
#line 3048 "cplus.met"
        }
#line 3048 "cplus.met"
        _retValue =_ptTree0;
#line 3048 "cplus.met"
        goto deallocation_expression_ret;
#line 3048 "cplus.met"
    }
#line 3048 "cplus.met"
#line 3048 "cplus.met"
#line 3048 "cplus.met"

#line 3049 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 3049 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 3049 "cplus.met"
return((PPTREE) 0);
#line 3049 "cplus.met"

#line 3049 "cplus.met"
deallocation_expression_exit :
#line 3049 "cplus.met"

#line 3049 "cplus.met"
    _Debug = TRACE_RULE("deallocation_expression",TRACE_EXIT,(PPTREE)0);
#line 3049 "cplus.met"
    _funcLevel--;
#line 3049 "cplus.met"
    return((PPTREE) -1) ;
#line 3049 "cplus.met"

#line 3049 "cplus.met"
deallocation_expression_ret :
#line 3049 "cplus.met"
    
#line 3049 "cplus.met"
    _Debug = TRACE_RULE("deallocation_expression",TRACE_RETURN,_retValue);
#line 3049 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 3049 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 3049 "cplus.met"
    return _retValue ;
#line 3049 "cplus.met"
}
#line 3049 "cplus.met"

#line 3049 "cplus.met"
#line 2375 "cplus.met"
PPTREE cplus::declarator ( int error_free)
#line 2375 "cplus.met"
{
#line 2375 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 2375 "cplus.met"
    int _value,_nbPre = 0 ;
#line 2375 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 2375 "cplus.met"
    int _Debug = TRACE_RULE("declarator",TRACE_ENTER,(PPTREE)0);
#line 2375 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 2375 "cplus.met"
#line 2375 "cplus.met"
    PPTREE retTree = (PPTREE) 0,valTree = (PPTREE) 0;
#line 2375 "cplus.met"
#line 2377 "cplus.met"
    if (NPUSH_CALL_AFF_VERIF(valTree = ,_Tak(range_modifier), 128, cplus)){
#line 2377 "cplus.met"
#line 2378 "cplus.met"
        {
#line 2378 "cplus.met"
            PPTREE _ptTree0=0;
#line 2378 "cplus.met"
            {
#line 2378 "cplus.met"
                PPTREE _ptTree1=0;
#line 2378 "cplus.met"
                if ( (_ptTree1=NQUICK_CALL(_Tak(declarator)(error_free), 51, cplus))== (PPTREE) -1 ) {
#line 2378 "cplus.met"
                    MulFreeTree(4,_ptTree1,_ptTree0,retTree,valTree);
                    PROG_EXIT(declarator_exit,"declarator")
#line 2378 "cplus.met"
                }
#line 2378 "cplus.met"
                _ptTree0=ReplaceTree(valTree , 2 , _ptTree1);
#line 2378 "cplus.met"
            }
#line 2378 "cplus.met"
            _retValue =_ptTree0;
#line 2378 "cplus.met"
            goto declarator_ret;
#line 2378 "cplus.met"
        }
#line 2378 "cplus.met"
    } else {
#line 2378 "cplus.met"
#line 2380 "cplus.met"
        (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 2380 "cplus.met"
        switch( lexEl.Value) {
#line 2380 "cplus.met"
#line 2381 "cplus.met"
            case ETOI : 
#line 2381 "cplus.met"
                tokenAhead = 0 ;
#line 2381 "cplus.met"
                CommTerm();
#line 2381 "cplus.met"
#line 2381 "cplus.met"
                {
#line 2381 "cplus.met"
                    PPTREE _ptTree0=0;
#line 2381 "cplus.met"
                    {
#line 2381 "cplus.met"
                        PPTREE _ptTree1=0,_ptRes1=0;
#line 2381 "cplus.met"
                        _ptRes1= MakeTree(TYP_ADDR, 1);
#line 2381 "cplus.met"
                        if ( (_ptTree1=NQUICK_CALL(_Tak(declarator)(error_free), 51, cplus))== (PPTREE) -1 ) {
#line 2381 "cplus.met"
                            MulFreeTree(5,_ptRes1,_ptTree1,_ptTree0,retTree,valTree);
                            PROG_EXIT(declarator_exit,"declarator")
#line 2381 "cplus.met"
                        }
#line 2381 "cplus.met"
                        ReplaceTree(_ptRes1, 1, _ptTree1);
#line 2381 "cplus.met"
                        _ptTree0=_ptRes1;
#line 2381 "cplus.met"
                    }
#line 2381 "cplus.met"
                    _retValue =_ptTree0;
#line 2381 "cplus.met"
                    goto declarator_ret;
#line 2381 "cplus.met"
                }
#line 2381 "cplus.met"
                break;
#line 2381 "cplus.met"
#line 2382 "cplus.met"
            case ETCO : 
#line 2382 "cplus.met"
                tokenAhead = 0 ;
#line 2382 "cplus.met"
                CommTerm();
#line 2382 "cplus.met"
#line 2382 "cplus.met"
                {
#line 2382 "cplus.met"
                    PPTREE _ptTree0=0;
#line 2382 "cplus.met"
                    {
#line 2382 "cplus.met"
                        PPTREE _ptTree1=0,_ptRes1=0;
#line 2382 "cplus.met"
                        _ptRes1= MakeTree(TYP_REF, 1);
#line 2382 "cplus.met"
                        if ( (_ptTree1=NQUICK_CALL(_Tak(declarator)(error_free), 51, cplus))== (PPTREE) -1 ) {
#line 2382 "cplus.met"
                            MulFreeTree(5,_ptRes1,_ptTree1,_ptTree0,retTree,valTree);
                            PROG_EXIT(declarator_exit,"declarator")
#line 2382 "cplus.met"
                        }
#line 2382 "cplus.met"
                        ReplaceTree(_ptRes1, 1, _ptTree1);
#line 2382 "cplus.met"
                        _ptTree0=_ptRes1;
#line 2382 "cplus.met"
                    }
#line 2382 "cplus.met"
                    _retValue =_ptTree0;
#line 2382 "cplus.met"
                    goto declarator_ret;
#line 2382 "cplus.met"
                }
#line 2382 "cplus.met"
                break;
#line 2382 "cplus.met"
#line 2383 "cplus.met"
            case ETCOETCO : 
#line 2383 "cplus.met"
                tokenAhead = 0 ;
#line 2383 "cplus.met"
                CommTerm();
#line 2383 "cplus.met"
#line 2383 "cplus.met"
                {
#line 2383 "cplus.met"
                    PPTREE _ptTree0=0;
#line 2383 "cplus.met"
                    {
#line 2383 "cplus.met"
                        PPTREE _ptTree1=0,_ptRes1=0;
#line 2383 "cplus.met"
                        _ptRes1= MakeTree(TYP_MOV, 1);
#line 2383 "cplus.met"
                        if ( (_ptTree1=NQUICK_CALL(_Tak(declarator)(error_free), 51, cplus))== (PPTREE) -1 ) {
#line 2383 "cplus.met"
                            MulFreeTree(5,_ptRes1,_ptTree1,_ptTree0,retTree,valTree);
                            PROG_EXIT(declarator_exit,"declarator")
#line 2383 "cplus.met"
                        }
#line 2383 "cplus.met"
                        ReplaceTree(_ptRes1, 1, _ptTree1);
#line 2383 "cplus.met"
                        _ptTree0=_ptRes1;
#line 2383 "cplus.met"
                    }
#line 2383 "cplus.met"
                    _retValue =_ptTree0;
#line 2383 "cplus.met"
                    goto declarator_ret;
#line 2383 "cplus.met"
                }
#line 2383 "cplus.met"
                break;
#line 2383 "cplus.met"
#line 2384 "cplus.met"
            case POINPOINPOIN : 
#line 2384 "cplus.met"
                tokenAhead = 0 ;
#line 2384 "cplus.met"
                CommTerm();
#line 2384 "cplus.met"
#line 2384 "cplus.met"
                {
#line 2384 "cplus.met"
                    PPTREE _ptTree0=0;
#line 2384 "cplus.met"
                    {
#line 2384 "cplus.met"
                        PPTREE _ptTree1=0,_ptRes1=0;
#line 2384 "cplus.met"
                        _ptRes1= MakeTree(TYP_VARIADIC, 1);
#line 2384 "cplus.met"
                        if ( (_ptTree1=NQUICK_CALL(_Tak(declarator)(error_free), 51, cplus))== (PPTREE) -1 ) {
#line 2384 "cplus.met"
                            MulFreeTree(5,_ptRes1,_ptTree1,_ptTree0,retTree,valTree);
                            PROG_EXIT(declarator_exit,"declarator")
#line 2384 "cplus.met"
                        }
#line 2384 "cplus.met"
                        ReplaceTree(_ptRes1, 1, _ptTree1);
#line 2384 "cplus.met"
                        _ptTree0=_ptRes1;
#line 2384 "cplus.met"
                    }
#line 2384 "cplus.met"
                    _retValue =_ptTree0;
#line 2384 "cplus.met"
                    goto declarator_ret;
#line 2384 "cplus.met"
                }
#line 2384 "cplus.met"
                break;
#line 2384 "cplus.met"
#line 2385 "cplus.met"
            case TILD : 
#line 2385 "cplus.met"
                tokenAhead = 0 ;
#line 2385 "cplus.met"
                CommTerm();
#line 2385 "cplus.met"
#line 2385 "cplus.met"
                {
#line 2385 "cplus.met"
                    PPTREE _ptTree0=0;
#line 2385 "cplus.met"
                    {
#line 2385 "cplus.met"
                        PPTREE _ptTree1=0,_ptRes1=0;
#line 2385 "cplus.met"
                        _ptRes1= MakeTree(DESTRUCT, 1);
#line 2385 "cplus.met"
                        if ( (_ptTree1=NQUICK_CALL(_Tak(declarator)(error_free), 51, cplus))== (PPTREE) -1 ) {
#line 2385 "cplus.met"
                            MulFreeTree(5,_ptRes1,_ptTree1,_ptTree0,retTree,valTree);
                            PROG_EXIT(declarator_exit,"declarator")
#line 2385 "cplus.met"
                        }
#line 2385 "cplus.met"
                        ReplaceTree(_ptRes1, 1, _ptTree1);
#line 2385 "cplus.met"
                        _ptTree0=_ptRes1;
#line 2385 "cplus.met"
                    }
#line 2385 "cplus.met"
                    _retValue =_ptTree0;
#line 2385 "cplus.met"
                    goto declarator_ret;
#line 2385 "cplus.met"
                }
#line 2385 "cplus.met"
                break;
#line 2385 "cplus.met"
#line 2388 "cplus.met"
            case POUV : 
#line 2388 "cplus.met"
                tokenAhead = 0 ;
#line 2388 "cplus.met"
                CommTerm();
#line 2388 "cplus.met"
#line 2387 "cplus.met"
#line 2388 "cplus.met"
                {
#line 2388 "cplus.met"
                    PPTREE _ptTree0=0,_ptRes0=0;
#line 2388 "cplus.met"
                    _ptRes0= MakeTree(TYP, 1);
#line 2388 "cplus.met"
                    if ( (_ptTree0=NQUICK_CALL(_Tak(declarator)(error_free), 51, cplus))== (PPTREE) -1 ) {
#line 2388 "cplus.met"
                        MulFreeTree(4,_ptRes0,_ptTree0,retTree,valTree);
                        PROG_EXIT(declarator_exit,"declarator")
#line 2388 "cplus.met"
                    }
#line 2388 "cplus.met"
                    ReplaceTree(_ptRes0, 1, _ptTree0);
#line 2388 "cplus.met"
                    retTree=_ptRes0;
#line 2388 "cplus.met"
                }
#line 2388 "cplus.met"
#line 2389 "cplus.met"
                (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 2389 "cplus.met"
                if (  !SEE_TOKEN( PFER,")") || !(CommTerm(),1)) {
#line 2389 "cplus.met"
                    MulFreeTree(2,retTree,valTree);
                    TOKEN_EXIT(declarator_exit,")")
#line 2389 "cplus.met"
                } else {
#line 2389 "cplus.met"
                    tokenAhead = 0 ;
#line 2389 "cplus.met"
                }
#line 2389 "cplus.met"
#line 2390 "cplus.met"
                if (NPUSH_CALL_AFF_VERIF(valTree = ,_Tak(declarator_follow), 52, cplus)){
#line 2390 "cplus.met"
#line 2391 "cplus.met"
                                            { PPTREE theTree ;
#line 2391 "cplus.met"
                                              theTree = valTree ;
#line 2391 "cplus.met"
                                              if (theTree) {
#line 2391 "cplus.met"
                                                  while (SonTree(theTree,1))
#line 2391 "cplus.met"
                                               if (NumberTree(theTree)
#line 2391 "cplus.met"
                                            	   != RANGE_MODIFIER)
#line 2391 "cplus.met"
                                                   theTree = SonTree(theTree,1);
#line 2391 "cplus.met"
                                               else
#line 2391 "cplus.met"
                                                   theTree = SonTree(theTree,2);
#line 2391 "cplus.met"
                                                  ReplaceTree(theTree,1,retTree);
#line 2391 "cplus.met"
                                                  /* modif portage sun */
#line 2391 "cplus.met"
                                                  retTree = valTree;
#line 2391 "cplus.met"
                                              }
#line 2391 "cplus.met"
                                                 }
#line 2391 "cplus.met"
                                        
#line 2391 "cplus.met"
                }
#line 2391 "cplus.met"
#line 2391 "cplus.met"
                break;
#line 2391 "cplus.met"
#line 2408 "cplus.met"
            case META : 
#line 2408 "cplus.met"
            case IDENT : 
#line 2408 "cplus.met"
#line 2409 "cplus.met"
#line 2410 "cplus.met"
                if ( (retTree=NQUICK_CALL(_Tak(qualified_name)(error_free), 123, cplus))== (PPTREE) -1 ) {
#line 2410 "cplus.met"
                    MulFreeTree(2,retTree,valTree);
                    PROG_EXIT(declarator_exit,"declarator")
#line 2410 "cplus.met"
                }
#line 2410 "cplus.met"
#line 2411 "cplus.met"
                if (((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN(DPOIDPOI,"::") && (tokenAhead = 0,CommTerm(),1)) && 
#line 2411 "cplus.met"
                   ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN(ETOI,"*") && (tokenAhead = 0,CommTerm(),1))){
#line 2411 "cplus.met"
#line 2412 "cplus.met"
                    {
#line 2412 "cplus.met"
                        PPTREE _ptTree0=0;
#line 2412 "cplus.met"
                        {
#line 2412 "cplus.met"
                            PPTREE _ptTree1=0,_ptRes1=0;
#line 2412 "cplus.met"
                            _ptRes1= MakeTree(MEMBER_DECLARATOR, 2);
#line 2412 "cplus.met"
                            ReplaceTree(_ptRes1, 1, retTree );
#line 2412 "cplus.met"
                            if ( (_ptTree1=NQUICK_CALL(_Tak(declarator)(error_free), 51, cplus))== (PPTREE) -1 ) {
#line 2412 "cplus.met"
                                MulFreeTree(5,_ptRes1,_ptTree1,_ptTree0,retTree,valTree);
                                PROG_EXIT(declarator_exit,"declarator")
#line 2412 "cplus.met"
                            }
#line 2412 "cplus.met"
                            ReplaceTree(_ptRes1, 2, _ptTree1);
#line 2412 "cplus.met"
                            _ptTree0=_ptRes1;
#line 2412 "cplus.met"
                        }
#line 2412 "cplus.met"
                        _retValue =_ptTree0;
#line 2412 "cplus.met"
                        goto declarator_ret;
#line 2412 "cplus.met"
                    }
#line 2412 "cplus.met"
                }
#line 2412 "cplus.met"
#line 2413 "cplus.met"
                if (NPUSH_CALL_AFF_VERIF(valTree = ,_Tak(declarator_follow), 52, cplus)){
#line 2413 "cplus.met"
#line 2414 "cplus.met"
                                            { PPTREE theTree ;
#line 2414 "cplus.met"
                                              theTree = valTree ;
#line 2414 "cplus.met"
                                              if (theTree) {
#line 2414 "cplus.met"
                                                  while (SonTree(theTree,1))
#line 2414 "cplus.met"
                                               if (NumberTree(theTree)
#line 2414 "cplus.met"
                                            	   != RANGE_MODIFIER)
#line 2414 "cplus.met"
                                                   theTree = SonTree(theTree,1);
#line 2414 "cplus.met"
                                               else
#line 2414 "cplus.met"
                                                   theTree = SonTree(theTree,2);
#line 2414 "cplus.met"
                                                  ReplaceTree(theTree,1,retTree);
#line 2414 "cplus.met"
                                                  /* modif portage sun */
#line 2414 "cplus.met"
                                                  retTree = valTree;
#line 2414 "cplus.met"
                                              }
#line 2414 "cplus.met"
                                                 }
#line 2414 "cplus.met"
                                        
#line 2414 "cplus.met"
                }
#line 2414 "cplus.met"
#line 2414 "cplus.met"
                break;
#line 2414 "cplus.met"
#line 2431 "cplus.met"
            case OPERATOR : 
#line 2431 "cplus.met"
#line 2432 "cplus.met"
#line 2433 "cplus.met"
                if ( (retTree=NQUICK_CALL(_Tak(operator_function_name)(error_free), 110, cplus))== (PPTREE) -1 ) {
#line 2433 "cplus.met"
                    MulFreeTree(2,retTree,valTree);
                    PROG_EXIT(declarator_exit,"declarator")
#line 2433 "cplus.met"
                }
#line 2433 "cplus.met"
#line 2434 "cplus.met"
                if (NPUSH_CALL_AFF_VERIF(valTree = ,_Tak(declarator_follow), 52, cplus)){
#line 2434 "cplus.met"
#line 2435 "cplus.met"
                                            { PPTREE theTree ;
#line 2435 "cplus.met"
                                              theTree = valTree ;
#line 2435 "cplus.met"
                                              if (theTree) {
#line 2435 "cplus.met"
                                                  while (SonTree(theTree,1))
#line 2435 "cplus.met"
                                               if (NumberTree(theTree)
#line 2435 "cplus.met"
                                            	   != RANGE_MODIFIER)
#line 2435 "cplus.met"
                                                   theTree = SonTree(theTree,1);
#line 2435 "cplus.met"
                                               else
#line 2435 "cplus.met"
                                                   theTree = SonTree(theTree,2);
#line 2435 "cplus.met"
                                                  ReplaceTree(theTree,1,retTree);
#line 2435 "cplus.met"
                                                  /* modif portage sun */
#line 2435 "cplus.met"
                                                  retTree = valTree;
#line 2435 "cplus.met"
                                              }
#line 2435 "cplus.met"
                                                 }
#line 2435 "cplus.met"
                                        
#line 2435 "cplus.met"
                }
#line 2435 "cplus.met"
#line 2435 "cplus.met"
                break;
#line 2435 "cplus.met"
            default :
#line 2435 "cplus.met"
                MulFreeTree(2,retTree,valTree);
                CASE_EXIT(declarator_exit,"either * or & or && or ... or ~ or ( or IDENT or operator")
#line 2435 "cplus.met"
                break;
#line 2435 "cplus.met"
        }
#line 2435 "cplus.met"
    }
#line 2435 "cplus.met"
#line 2453 "cplus.met"
    {
#line 2453 "cplus.met"
        _retValue = retTree ;
#line 2453 "cplus.met"
        goto declarator_ret;
#line 2453 "cplus.met"
        
#line 2453 "cplus.met"
    }
#line 2453 "cplus.met"
#line 2453 "cplus.met"
#line 2453 "cplus.met"

#line 2454 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2454 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 2454 "cplus.met"
return((PPTREE) 0);
#line 2454 "cplus.met"

#line 2454 "cplus.met"
declarator_exit :
#line 2454 "cplus.met"

#line 2454 "cplus.met"
    _Debug = TRACE_RULE("declarator",TRACE_EXIT,(PPTREE)0);
#line 2454 "cplus.met"
    _funcLevel--;
#line 2454 "cplus.met"
    return((PPTREE) -1) ;
#line 2454 "cplus.met"

#line 2454 "cplus.met"
declarator_ret :
#line 2454 "cplus.met"
    
#line 2454 "cplus.met"
    _Debug = TRACE_RULE("declarator",TRACE_RETURN,_retValue);
#line 2454 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2454 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 2454 "cplus.met"
    return _retValue ;
#line 2454 "cplus.met"
}
#line 2454 "cplus.met"

#line 2454 "cplus.met"
