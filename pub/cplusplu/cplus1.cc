/*************************************************************************/
/*                                                                       */
/*        Produced by MetaGen version 2.0  -    1989-2006                 */
/*       Syntaxic Analyzer Meta Generator developped by                  */
/*                  Eric Lavillonniere                                   */
/*                                                                       */
/*************************************************************************/

#include "token.h"
#include "cplus.h"


#line 3390 "cplus.met"
PPTREE cplus::constan ( int error_free)
#line 3390 "cplus.met"
{
#line 3390 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 3390 "cplus.met"
    int _value,_nbPre = 0 ;
#line 3390 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 3390 "cplus.met"
    int _Debug = TRACE_RULE("constan",TRACE_ENTER,(PPTREE)0);
#line 3390 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 3390 "cplus.met"
#line 3391 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3391 "cplus.met"
    switch( lexEl.Value) {
#line 3391 "cplus.met"
#line 3392 "cplus.met"
        case META : 
#line 3392 "cplus.met"
        case INTEGER : 
#line 3392 "cplus.met"
#line 3392 "cplus.met"
            {
#line 3392 "cplus.met"
                PPTREE _ptTree0=0;
#line 3392 "cplus.met"
                {
#line 3392 "cplus.met"
                    PPTREE _ptTree1=0,_ptRes1=0;
#line 3392 "cplus.met"
                    _ptRes1= MakeTree(INTEGER, 1);
#line 3392 "cplus.met"
                    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3392 "cplus.met"
                    if ( ! TERM_OR_META(INTEGER,"INTEGER") || !(BUILD_TERM_META(_ptTree1))) {
#line 3392 "cplus.met"
                        MulFreeTree(3,_ptRes1,_ptTree1,_ptTree0);
                        TOKEN_EXIT(constan_exit,"INTEGER")
#line 3392 "cplus.met"
                    } else {
#line 3392 "cplus.met"
                        tokenAhead = 0 ;
#line 3392 "cplus.met"
                    }
#line 3392 "cplus.met"
                    ReplaceTree(_ptRes1, 1, _ptTree1);
#line 3392 "cplus.met"
                    _ptTree0=_ptRes1;
#line 3392 "cplus.met"
                }
#line 3392 "cplus.met"
                _retValue =_ptTree0;
#line 3392 "cplus.met"
                goto constan_ret;
#line 3392 "cplus.met"
            }
#line 3392 "cplus.met"
            break;
#line 3392 "cplus.met"
#line 3393 "cplus.met"
        case LINTEGER : 
#line 3393 "cplus.met"
#line 3393 "cplus.met"
            {
#line 3393 "cplus.met"
                PPTREE _ptTree0=0;
#line 3393 "cplus.met"
                {
#line 3393 "cplus.met"
                    PPTREE _ptTree1=0,_ptRes1=0;
#line 3393 "cplus.met"
                    _ptRes1= MakeTree(ILONG, 1);
#line 3393 "cplus.met"
                    {
#line 3393 "cplus.met"
                        PPTREE _ptTree2=0,_ptRes2=0;
#line 3393 "cplus.met"
                        _ptRes2= MakeTree(INTEGER, 1);
#line 3393 "cplus.met"
                        (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3393 "cplus.met"
                        if ( ! TERM_OR_META(LINTEGER,"LINTEGER") || !(BUILD_TERM_META(_ptTree2))) {
#line 3393 "cplus.met"
                            MulFreeTree(5,_ptRes2,_ptTree2,_ptRes1,_ptTree1,_ptTree0);
                            TOKEN_EXIT(constan_exit,"LINTEGER")
#line 3393 "cplus.met"
                        } else {
#line 3393 "cplus.met"
                            tokenAhead = 0 ;
#line 3393 "cplus.met"
                        }
#line 3393 "cplus.met"
                        ReplaceTree(_ptRes2, 1, _ptTree2);
#line 3393 "cplus.met"
                        _ptTree1=_ptRes2;
#line 3393 "cplus.met"
                    }
#line 3393 "cplus.met"
                    ReplaceTree(_ptRes1, 1, _ptTree1);
#line 3393 "cplus.met"
                    _ptTree0=_ptRes1;
#line 3393 "cplus.met"
                }
#line 3393 "cplus.met"
                _retValue =_ptTree0;
#line 3393 "cplus.met"
                goto constan_ret;
#line 3393 "cplus.met"
            }
#line 3393 "cplus.met"
            break;
#line 3393 "cplus.met"
#line 3394 "cplus.met"
        case LLINTEGER : 
#line 3394 "cplus.met"
#line 3394 "cplus.met"
            {
#line 3394 "cplus.met"
                PPTREE _ptTree0=0;
#line 3394 "cplus.met"
                {
#line 3394 "cplus.met"
                    PPTREE _ptTree1=0,_ptRes1=0;
#line 3394 "cplus.met"
                    _ptRes1= MakeTree(ILONGLONG, 1);
#line 3394 "cplus.met"
                    {
#line 3394 "cplus.met"
                        PPTREE _ptTree2=0,_ptRes2=0;
#line 3394 "cplus.met"
                        _ptRes2= MakeTree(INTEGER, 1);
#line 3394 "cplus.met"
                        (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3394 "cplus.met"
                        if ( ! TERM_OR_META(LINTEGER,"LINTEGER") || !(BUILD_TERM_META(_ptTree2))) {
#line 3394 "cplus.met"
                            MulFreeTree(5,_ptRes2,_ptTree2,_ptRes1,_ptTree1,_ptTree0);
                            TOKEN_EXIT(constan_exit,"LINTEGER")
#line 3394 "cplus.met"
                        } else {
#line 3394 "cplus.met"
                            tokenAhead = 0 ;
#line 3394 "cplus.met"
                        }
#line 3394 "cplus.met"
                        ReplaceTree(_ptRes2, 1, _ptTree2);
#line 3394 "cplus.met"
                        _ptTree1=_ptRes2;
#line 3394 "cplus.met"
                    }
#line 3394 "cplus.met"
                    ReplaceTree(_ptRes1, 1, _ptTree1);
#line 3394 "cplus.met"
                    _ptTree0=_ptRes1;
#line 3394 "cplus.met"
                }
#line 3394 "cplus.met"
                _retValue =_ptTree0;
#line 3394 "cplus.met"
                goto constan_ret;
#line 3394 "cplus.met"
            }
#line 3394 "cplus.met"
            break;
#line 3394 "cplus.met"
#line 3395 "cplus.met"
        case UINTEGER : 
#line 3395 "cplus.met"
#line 3395 "cplus.met"
            {
#line 3395 "cplus.met"
                PPTREE _ptTree0=0;
#line 3395 "cplus.met"
                {
#line 3395 "cplus.met"
                    PPTREE _ptTree1=0,_ptRes1=0;
#line 3395 "cplus.met"
                    _ptRes1= MakeTree(IUN, 1);
#line 3395 "cplus.met"
                    {
#line 3395 "cplus.met"
                        PPTREE _ptTree2=0,_ptRes2=0;
#line 3395 "cplus.met"
                        _ptRes2= MakeTree(INTEGER, 1);
#line 3395 "cplus.met"
                        (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3395 "cplus.met"
                        if ( ! TERM_OR_META(UINTEGER,"UINTEGER") || !(BUILD_TERM_META(_ptTree2))) {
#line 3395 "cplus.met"
                            MulFreeTree(5,_ptRes2,_ptTree2,_ptRes1,_ptTree1,_ptTree0);
                            TOKEN_EXIT(constan_exit,"UINTEGER")
#line 3395 "cplus.met"
                        } else {
#line 3395 "cplus.met"
                            tokenAhead = 0 ;
#line 3395 "cplus.met"
                        }
#line 3395 "cplus.met"
                        ReplaceTree(_ptRes2, 1, _ptTree2);
#line 3395 "cplus.met"
                        _ptTree1=_ptRes2;
#line 3395 "cplus.met"
                    }
#line 3395 "cplus.met"
                    ReplaceTree(_ptRes1, 1, _ptTree1);
#line 3395 "cplus.met"
                    _ptTree0=_ptRes1;
#line 3395 "cplus.met"
                }
#line 3395 "cplus.met"
                _retValue =_ptTree0;
#line 3395 "cplus.met"
                goto constan_ret;
#line 3395 "cplus.met"
            }
#line 3395 "cplus.met"
            break;
#line 3395 "cplus.met"
#line 3396 "cplus.met"
        case ULINTEGER : 
#line 3396 "cplus.met"
#line 3396 "cplus.met"
            {
#line 3396 "cplus.met"
                PPTREE _ptTree0=0;
#line 3396 "cplus.met"
                {
#line 3396 "cplus.met"
                    PPTREE _ptTree1=0,_ptRes1=0;
#line 3396 "cplus.met"
                    _ptRes1= MakeTree(IUNLONG, 1);
#line 3396 "cplus.met"
                    {
#line 3396 "cplus.met"
                        PPTREE _ptTree2=0,_ptRes2=0;
#line 3396 "cplus.met"
                        _ptRes2= MakeTree(INTEGER, 1);
#line 3396 "cplus.met"
                        (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3396 "cplus.met"
                        if ( ! TERM_OR_META(ULINTEGER,"ULINTEGER") || !(BUILD_TERM_META(_ptTree2))) {
#line 3396 "cplus.met"
                            MulFreeTree(5,_ptRes2,_ptTree2,_ptRes1,_ptTree1,_ptTree0);
                            TOKEN_EXIT(constan_exit,"ULINTEGER")
#line 3396 "cplus.met"
                        } else {
#line 3396 "cplus.met"
                            tokenAhead = 0 ;
#line 3396 "cplus.met"
                        }
#line 3396 "cplus.met"
                        ReplaceTree(_ptRes2, 1, _ptTree2);
#line 3396 "cplus.met"
                        _ptTree1=_ptRes2;
#line 3396 "cplus.met"
                    }
#line 3396 "cplus.met"
                    ReplaceTree(_ptRes1, 1, _ptTree1);
#line 3396 "cplus.met"
                    _ptTree0=_ptRes1;
#line 3396 "cplus.met"
                }
#line 3396 "cplus.met"
                _retValue =_ptTree0;
#line 3396 "cplus.met"
                goto constan_ret;
#line 3396 "cplus.met"
            }
#line 3396 "cplus.met"
            break;
#line 3396 "cplus.met"
#line 3397 "cplus.met"
        case ULLINTEGER : 
#line 3397 "cplus.met"
#line 3397 "cplus.met"
            {
#line 3397 "cplus.met"
                PPTREE _ptTree0=0;
#line 3397 "cplus.met"
                {
#line 3397 "cplus.met"
                    PPTREE _ptTree1=0,_ptRes1=0;
#line 3397 "cplus.met"
                    _ptRes1= MakeTree(IUNLONGLONG, 1);
#line 3397 "cplus.met"
                    {
#line 3397 "cplus.met"
                        PPTREE _ptTree2=0,_ptRes2=0;
#line 3397 "cplus.met"
                        _ptRes2= MakeTree(INTEGER, 1);
#line 3397 "cplus.met"
                        (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3397 "cplus.met"
                        if ( ! TERM_OR_META(ULINTEGER,"ULINTEGER") || !(BUILD_TERM_META(_ptTree2))) {
#line 3397 "cplus.met"
                            MulFreeTree(5,_ptRes2,_ptTree2,_ptRes1,_ptTree1,_ptTree0);
                            TOKEN_EXIT(constan_exit,"ULINTEGER")
#line 3397 "cplus.met"
                        } else {
#line 3397 "cplus.met"
                            tokenAhead = 0 ;
#line 3397 "cplus.met"
                        }
#line 3397 "cplus.met"
                        ReplaceTree(_ptRes2, 1, _ptTree2);
#line 3397 "cplus.met"
                        _ptTree1=_ptRes2;
#line 3397 "cplus.met"
                    }
#line 3397 "cplus.met"
                    ReplaceTree(_ptRes1, 1, _ptTree1);
#line 3397 "cplus.met"
                    _ptTree0=_ptRes1;
#line 3397 "cplus.met"
                }
#line 3397 "cplus.met"
                _retValue =_ptTree0;
#line 3397 "cplus.met"
                goto constan_ret;
#line 3397 "cplus.met"
            }
#line 3397 "cplus.met"
            break;
#line 3397 "cplus.met"
#line 3398 "cplus.met"
        case HEXA : 
#line 3398 "cplus.met"
#line 3398 "cplus.met"
            {
#line 3398 "cplus.met"
                PPTREE _ptTree0=0;
#line 3398 "cplus.met"
                {
#line 3398 "cplus.met"
                    PPTREE _ptTree1=0,_ptRes1=0;
#line 3398 "cplus.met"
                    _ptRes1= MakeTree(HEXA, 1);
#line 3398 "cplus.met"
                    {
#line 3398 "cplus.met"
                        PPTREE _ptTree2=0,_ptRes2=0;
#line 3398 "cplus.met"
                        _ptRes2= MakeTree(INTEGER, 1);
#line 3398 "cplus.met"
                        (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3398 "cplus.met"
                        if ( ! TERM_OR_META(HEXA,"HEXA") || !(BUILD_TERM_META(_ptTree2))) {
#line 3398 "cplus.met"
                            MulFreeTree(5,_ptRes2,_ptTree2,_ptRes1,_ptTree1,_ptTree0);
                            TOKEN_EXIT(constan_exit,"HEXA")
#line 3398 "cplus.met"
                        } else {
#line 3398 "cplus.met"
                            tokenAhead = 0 ;
#line 3398 "cplus.met"
                        }
#line 3398 "cplus.met"
                        ReplaceTree(_ptRes2, 1, _ptTree2);
#line 3398 "cplus.met"
                        _ptTree1=_ptRes2;
#line 3398 "cplus.met"
                    }
#line 3398 "cplus.met"
                    ReplaceTree(_ptRes1, 1, _ptTree1);
#line 3398 "cplus.met"
                    _ptTree0=_ptRes1;
#line 3398 "cplus.met"
                }
#line 3398 "cplus.met"
                _retValue =_ptTree0;
#line 3398 "cplus.met"
                goto constan_ret;
#line 3398 "cplus.met"
            }
#line 3398 "cplus.met"
            break;
#line 3398 "cplus.met"
#line 3399 "cplus.met"
        case BINARY : 
#line 3399 "cplus.met"
#line 3399 "cplus.met"
            {
#line 3399 "cplus.met"
                PPTREE _ptTree0=0;
#line 3399 "cplus.met"
                {
#line 3399 "cplus.met"
                    PPTREE _ptTree1=0,_ptRes1=0;
#line 3399 "cplus.met"
                    _ptRes1= MakeTree(BINARY, 1);
#line 3399 "cplus.met"
                    {
#line 3399 "cplus.met"
                        PPTREE _ptTree2=0,_ptRes2=0;
#line 3399 "cplus.met"
                        _ptRes2= MakeTree(INTEGER, 1);
#line 3399 "cplus.met"
                        (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3399 "cplus.met"
                        if ( ! TERM_OR_META(BINARY,"BINARY") || !(BUILD_TERM_META(_ptTree2))) {
#line 3399 "cplus.met"
                            MulFreeTree(5,_ptRes2,_ptTree2,_ptRes1,_ptTree1,_ptTree0);
                            TOKEN_EXIT(constan_exit,"BINARY")
#line 3399 "cplus.met"
                        } else {
#line 3399 "cplus.met"
                            tokenAhead = 0 ;
#line 3399 "cplus.met"
                        }
#line 3399 "cplus.met"
                        ReplaceTree(_ptRes2, 1, _ptTree2);
#line 3399 "cplus.met"
                        _ptTree1=_ptRes2;
#line 3399 "cplus.met"
                    }
#line 3399 "cplus.met"
                    ReplaceTree(_ptRes1, 1, _ptTree1);
#line 3399 "cplus.met"
                    _ptTree0=_ptRes1;
#line 3399 "cplus.met"
                }
#line 3399 "cplus.met"
                _retValue =_ptTree0;
#line 3399 "cplus.met"
                goto constan_ret;
#line 3399 "cplus.met"
            }
#line 3399 "cplus.met"
            break;
#line 3399 "cplus.met"
#line 3400 "cplus.met"
        case LHEXA : 
#line 3400 "cplus.met"
#line 3400 "cplus.met"
            {
#line 3400 "cplus.met"
                PPTREE _ptTree0=0;
#line 3400 "cplus.met"
                {
#line 3400 "cplus.met"
                    PPTREE _ptTree1=0,_ptRes1=0;
#line 3400 "cplus.met"
                    _ptRes1= MakeTree(LONG, 1);
#line 3400 "cplus.met"
                    {
#line 3400 "cplus.met"
                        PPTREE _ptTree2=0,_ptRes2=0;
#line 3400 "cplus.met"
                        _ptRes2= MakeTree(HEXA, 1);
#line 3400 "cplus.met"
                        {
#line 3400 "cplus.met"
                            PPTREE _ptTree3=0,_ptRes3=0;
#line 3400 "cplus.met"
                            _ptRes3= MakeTree(INTEGER, 1);
#line 3400 "cplus.met"
                            (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3400 "cplus.met"
                            if ( ! TERM_OR_META(LHEXA,"LHEXA") || !(BUILD_TERM_META(_ptTree3))) {
#line 3400 "cplus.met"
                                MulFreeTree(7,_ptRes3,_ptTree3,_ptRes2,_ptTree2,_ptRes1,_ptTree1,_ptTree0);
                                TOKEN_EXIT(constan_exit,"LHEXA")
#line 3400 "cplus.met"
                            } else {
#line 3400 "cplus.met"
                                tokenAhead = 0 ;
#line 3400 "cplus.met"
                            }
#line 3400 "cplus.met"
                            ReplaceTree(_ptRes3, 1, _ptTree3);
#line 3400 "cplus.met"
                            _ptTree2=_ptRes3;
#line 3400 "cplus.met"
                        }
#line 3400 "cplus.met"
                        ReplaceTree(_ptRes2, 1, _ptTree2);
#line 3400 "cplus.met"
                        _ptTree1=_ptRes2;
#line 3400 "cplus.met"
                    }
#line 3400 "cplus.met"
                    ReplaceTree(_ptRes1, 1, _ptTree1);
#line 3400 "cplus.met"
                    _ptTree0=_ptRes1;
#line 3400 "cplus.met"
                }
#line 3400 "cplus.met"
                _retValue =_ptTree0;
#line 3400 "cplus.met"
                goto constan_ret;
#line 3400 "cplus.met"
            }
#line 3400 "cplus.met"
            break;
#line 3400 "cplus.met"
#line 3401 "cplus.met"
        case LLHEXA : 
#line 3401 "cplus.met"
#line 3401 "cplus.met"
            {
#line 3401 "cplus.met"
                PPTREE _ptTree0=0;
#line 3401 "cplus.met"
                {
#line 3401 "cplus.met"
                    PPTREE _ptTree1=0,_ptRes1=0;
#line 3401 "cplus.met"
                    _ptRes1= MakeTree(LONGLONG, 1);
#line 3401 "cplus.met"
                    {
#line 3401 "cplus.met"
                        PPTREE _ptTree2=0,_ptRes2=0;
#line 3401 "cplus.met"
                        _ptRes2= MakeTree(HEXA, 1);
#line 3401 "cplus.met"
                        {
#line 3401 "cplus.met"
                            PPTREE _ptTree3=0,_ptRes3=0;
#line 3401 "cplus.met"
                            _ptRes3= MakeTree(INTEGER, 1);
#line 3401 "cplus.met"
                            (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3401 "cplus.met"
                            if ( ! TERM_OR_META(LLHEXA,"LLHEXA") || !(BUILD_TERM_META(_ptTree3))) {
#line 3401 "cplus.met"
                                MulFreeTree(7,_ptRes3,_ptTree3,_ptRes2,_ptTree2,_ptRes1,_ptTree1,_ptTree0);
                                TOKEN_EXIT(constan_exit,"LLHEXA")
#line 3401 "cplus.met"
                            } else {
#line 3401 "cplus.met"
                                tokenAhead = 0 ;
#line 3401 "cplus.met"
                            }
#line 3401 "cplus.met"
                            ReplaceTree(_ptRes3, 1, _ptTree3);
#line 3401 "cplus.met"
                            _ptTree2=_ptRes3;
#line 3401 "cplus.met"
                        }
#line 3401 "cplus.met"
                        ReplaceTree(_ptRes2, 1, _ptTree2);
#line 3401 "cplus.met"
                        _ptTree1=_ptRes2;
#line 3401 "cplus.met"
                    }
#line 3401 "cplus.met"
                    ReplaceTree(_ptRes1, 1, _ptTree1);
#line 3401 "cplus.met"
                    _ptTree0=_ptRes1;
#line 3401 "cplus.met"
                }
#line 3401 "cplus.met"
                _retValue =_ptTree0;
#line 3401 "cplus.met"
                goto constan_ret;
#line 3401 "cplus.met"
            }
#line 3401 "cplus.met"
            break;
#line 3401 "cplus.met"
#line 3402 "cplus.met"
        case UHEXA : 
#line 3402 "cplus.met"
#line 3402 "cplus.met"
            {
#line 3402 "cplus.met"
                PPTREE _ptTree0=0;
#line 3402 "cplus.met"
                {
#line 3402 "cplus.met"
                    PPTREE _ptTree1=0,_ptRes1=0;
#line 3402 "cplus.met"
                    _ptRes1= MakeTree(IUN, 1);
#line 3402 "cplus.met"
                    {
#line 3402 "cplus.met"
                        PPTREE _ptTree2=0,_ptRes2=0;
#line 3402 "cplus.met"
                        _ptRes2= MakeTree(HEXA, 1);
#line 3402 "cplus.met"
                        {
#line 3402 "cplus.met"
                            PPTREE _ptTree3=0,_ptRes3=0;
#line 3402 "cplus.met"
                            _ptRes3= MakeTree(INTEGER, 1);
#line 3402 "cplus.met"
                            (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3402 "cplus.met"
                            if ( ! TERM_OR_META(UHEXA,"UHEXA") || !(BUILD_TERM_META(_ptTree3))) {
#line 3402 "cplus.met"
                                MulFreeTree(7,_ptRes3,_ptTree3,_ptRes2,_ptTree2,_ptRes1,_ptTree1,_ptTree0);
                                TOKEN_EXIT(constan_exit,"UHEXA")
#line 3402 "cplus.met"
                            } else {
#line 3402 "cplus.met"
                                tokenAhead = 0 ;
#line 3402 "cplus.met"
                            }
#line 3402 "cplus.met"
                            ReplaceTree(_ptRes3, 1, _ptTree3);
#line 3402 "cplus.met"
                            _ptTree2=_ptRes3;
#line 3402 "cplus.met"
                        }
#line 3402 "cplus.met"
                        ReplaceTree(_ptRes2, 1, _ptTree2);
#line 3402 "cplus.met"
                        _ptTree1=_ptRes2;
#line 3402 "cplus.met"
                    }
#line 3402 "cplus.met"
                    ReplaceTree(_ptRes1, 1, _ptTree1);
#line 3402 "cplus.met"
                    _ptTree0=_ptRes1;
#line 3402 "cplus.met"
                }
#line 3402 "cplus.met"
                _retValue =_ptTree0;
#line 3402 "cplus.met"
                goto constan_ret;
#line 3402 "cplus.met"
            }
#line 3402 "cplus.met"
            break;
#line 3402 "cplus.met"
#line 3403 "cplus.met"
        case ULHEXA : 
#line 3403 "cplus.met"
#line 3403 "cplus.met"
            {
#line 3403 "cplus.met"
                PPTREE _ptTree0=0;
#line 3403 "cplus.met"
                {
#line 3403 "cplus.met"
                    PPTREE _ptTree1=0,_ptRes1=0;
#line 3403 "cplus.met"
                    _ptRes1= MakeTree(IUNLONG, 1);
#line 3403 "cplus.met"
                    {
#line 3403 "cplus.met"
                        PPTREE _ptTree2=0,_ptRes2=0;
#line 3403 "cplus.met"
                        _ptRes2= MakeTree(HEXA, 1);
#line 3403 "cplus.met"
                        {
#line 3403 "cplus.met"
                            PPTREE _ptTree3=0,_ptRes3=0;
#line 3403 "cplus.met"
                            _ptRes3= MakeTree(INTEGER, 1);
#line 3403 "cplus.met"
                            (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3403 "cplus.met"
                            if ( ! TERM_OR_META(ULHEXA,"ULHEXA") || !(BUILD_TERM_META(_ptTree3))) {
#line 3403 "cplus.met"
                                MulFreeTree(7,_ptRes3,_ptTree3,_ptRes2,_ptTree2,_ptRes1,_ptTree1,_ptTree0);
                                TOKEN_EXIT(constan_exit,"ULHEXA")
#line 3403 "cplus.met"
                            } else {
#line 3403 "cplus.met"
                                tokenAhead = 0 ;
#line 3403 "cplus.met"
                            }
#line 3403 "cplus.met"
                            ReplaceTree(_ptRes3, 1, _ptTree3);
#line 3403 "cplus.met"
                            _ptTree2=_ptRes3;
#line 3403 "cplus.met"
                        }
#line 3403 "cplus.met"
                        ReplaceTree(_ptRes2, 1, _ptTree2);
#line 3403 "cplus.met"
                        _ptTree1=_ptRes2;
#line 3403 "cplus.met"
                    }
#line 3403 "cplus.met"
                    ReplaceTree(_ptRes1, 1, _ptTree1);
#line 3403 "cplus.met"
                    _ptTree0=_ptRes1;
#line 3403 "cplus.met"
                }
#line 3403 "cplus.met"
                _retValue =_ptTree0;
#line 3403 "cplus.met"
                goto constan_ret;
#line 3403 "cplus.met"
            }
#line 3403 "cplus.met"
            break;
#line 3403 "cplus.met"
#line 3404 "cplus.met"
        case ULLHEXA : 
#line 3404 "cplus.met"
#line 3404 "cplus.met"
            {
#line 3404 "cplus.met"
                PPTREE _ptTree0=0;
#line 3404 "cplus.met"
                {
#line 3404 "cplus.met"
                    PPTREE _ptTree1=0,_ptRes1=0;
#line 3404 "cplus.met"
                    _ptRes1= MakeTree(IUNLONGLONG, 1);
#line 3404 "cplus.met"
                    {
#line 3404 "cplus.met"
                        PPTREE _ptTree2=0,_ptRes2=0;
#line 3404 "cplus.met"
                        _ptRes2= MakeTree(HEXA, 1);
#line 3404 "cplus.met"
                        {
#line 3404 "cplus.met"
                            PPTREE _ptTree3=0,_ptRes3=0;
#line 3404 "cplus.met"
                            _ptRes3= MakeTree(INTEGER, 1);
#line 3404 "cplus.met"
                            (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3404 "cplus.met"
                            if ( ! TERM_OR_META(ULLHEXA,"ULLHEXA") || !(BUILD_TERM_META(_ptTree3))) {
#line 3404 "cplus.met"
                                MulFreeTree(7,_ptRes3,_ptTree3,_ptRes2,_ptTree2,_ptRes1,_ptTree1,_ptTree0);
                                TOKEN_EXIT(constan_exit,"ULLHEXA")
#line 3404 "cplus.met"
                            } else {
#line 3404 "cplus.met"
                                tokenAhead = 0 ;
#line 3404 "cplus.met"
                            }
#line 3404 "cplus.met"
                            ReplaceTree(_ptRes3, 1, _ptTree3);
#line 3404 "cplus.met"
                            _ptTree2=_ptRes3;
#line 3404 "cplus.met"
                        }
#line 3404 "cplus.met"
                        ReplaceTree(_ptRes2, 1, _ptTree2);
#line 3404 "cplus.met"
                        _ptTree1=_ptRes2;
#line 3404 "cplus.met"
                    }
#line 3404 "cplus.met"
                    ReplaceTree(_ptRes1, 1, _ptTree1);
#line 3404 "cplus.met"
                    _ptTree0=_ptRes1;
#line 3404 "cplus.met"
                }
#line 3404 "cplus.met"
                _retValue =_ptTree0;
#line 3404 "cplus.met"
                goto constan_ret;
#line 3404 "cplus.met"
            }
#line 3404 "cplus.met"
            break;
#line 3404 "cplus.met"
#line 3405 "cplus.met"
        case OCTAL : 
#line 3405 "cplus.met"
#line 3405 "cplus.met"
            {
#line 3405 "cplus.met"
                PPTREE _ptTree0=0;
#line 3405 "cplus.met"
                {
#line 3405 "cplus.met"
                    PPTREE _ptTree1=0,_ptRes1=0;
#line 3405 "cplus.met"
                    _ptRes1= MakeTree(OCTAL, 1);
#line 3405 "cplus.met"
                    {
#line 3405 "cplus.met"
                        PPTREE _ptTree2=0,_ptRes2=0;
#line 3405 "cplus.met"
                        _ptRes2= MakeTree(INTEGER, 1);
#line 3405 "cplus.met"
                        (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3405 "cplus.met"
                        if ( ! TERM_OR_META(OCTAL,"OCTAL") || !(BUILD_TERM_META(_ptTree2))) {
#line 3405 "cplus.met"
                            MulFreeTree(5,_ptRes2,_ptTree2,_ptRes1,_ptTree1,_ptTree0);
                            TOKEN_EXIT(constan_exit,"OCTAL")
#line 3405 "cplus.met"
                        } else {
#line 3405 "cplus.met"
                            tokenAhead = 0 ;
#line 3405 "cplus.met"
                        }
#line 3405 "cplus.met"
                        ReplaceTree(_ptRes2, 1, _ptTree2);
#line 3405 "cplus.met"
                        _ptTree1=_ptRes2;
#line 3405 "cplus.met"
                    }
#line 3405 "cplus.met"
                    ReplaceTree(_ptRes1, 1, _ptTree1);
#line 3405 "cplus.met"
                    _ptTree0=_ptRes1;
#line 3405 "cplus.met"
                }
#line 3405 "cplus.met"
                _retValue =_ptTree0;
#line 3405 "cplus.met"
                goto constan_ret;
#line 3405 "cplus.met"
            }
#line 3405 "cplus.met"
            break;
#line 3405 "cplus.met"
#line 3406 "cplus.met"
        case LOCTAL : 
#line 3406 "cplus.met"
#line 3406 "cplus.met"
            {
#line 3406 "cplus.met"
                PPTREE _ptTree0=0;
#line 3406 "cplus.met"
                {
#line 3406 "cplus.met"
                    PPTREE _ptTree1=0,_ptRes1=0;
#line 3406 "cplus.met"
                    _ptRes1= MakeTree(ILONG, 1);
#line 3406 "cplus.met"
                    {
#line 3406 "cplus.met"
                        PPTREE _ptTree2=0,_ptRes2=0;
#line 3406 "cplus.met"
                        _ptRes2= MakeTree(OCTAL, 1);
#line 3406 "cplus.met"
                        {
#line 3406 "cplus.met"
                            PPTREE _ptTree3=0,_ptRes3=0;
#line 3406 "cplus.met"
                            _ptRes3= MakeTree(INTEGER, 1);
#line 3406 "cplus.met"
                            (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3406 "cplus.met"
                            if ( ! TERM_OR_META(LOCTAL,"LOCTAL") || !(BUILD_TERM_META(_ptTree3))) {
#line 3406 "cplus.met"
                                MulFreeTree(7,_ptRes3,_ptTree3,_ptRes2,_ptTree2,_ptRes1,_ptTree1,_ptTree0);
                                TOKEN_EXIT(constan_exit,"LOCTAL")
#line 3406 "cplus.met"
                            } else {
#line 3406 "cplus.met"
                                tokenAhead = 0 ;
#line 3406 "cplus.met"
                            }
#line 3406 "cplus.met"
                            ReplaceTree(_ptRes3, 1, _ptTree3);
#line 3406 "cplus.met"
                            _ptTree2=_ptRes3;
#line 3406 "cplus.met"
                        }
#line 3406 "cplus.met"
                        ReplaceTree(_ptRes2, 1, _ptTree2);
#line 3406 "cplus.met"
                        _ptTree1=_ptRes2;
#line 3406 "cplus.met"
                    }
#line 3406 "cplus.met"
                    ReplaceTree(_ptRes1, 1, _ptTree1);
#line 3406 "cplus.met"
                    _ptTree0=_ptRes1;
#line 3406 "cplus.met"
                }
#line 3406 "cplus.met"
                _retValue =_ptTree0;
#line 3406 "cplus.met"
                goto constan_ret;
#line 3406 "cplus.met"
            }
#line 3406 "cplus.met"
            break;
#line 3406 "cplus.met"
#line 3407 "cplus.met"
        case LLOCTAL : 
#line 3407 "cplus.met"
#line 3407 "cplus.met"
            {
#line 3407 "cplus.met"
                PPTREE _ptTree0=0;
#line 3407 "cplus.met"
                {
#line 3407 "cplus.met"
                    PPTREE _ptTree1=0,_ptRes1=0;
#line 3407 "cplus.met"
                    _ptRes1= MakeTree(ILONGLONG, 1);
#line 3407 "cplus.met"
                    {
#line 3407 "cplus.met"
                        PPTREE _ptTree2=0,_ptRes2=0;
#line 3407 "cplus.met"
                        _ptRes2= MakeTree(OCTAL, 1);
#line 3407 "cplus.met"
                        {
#line 3407 "cplus.met"
                            PPTREE _ptTree3=0,_ptRes3=0;
#line 3407 "cplus.met"
                            _ptRes3= MakeTree(INTEGER, 1);
#line 3407 "cplus.met"
                            (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3407 "cplus.met"
                            if ( ! TERM_OR_META(LLOCTAL,"LLOCTAL") || !(BUILD_TERM_META(_ptTree3))) {
#line 3407 "cplus.met"
                                MulFreeTree(7,_ptRes3,_ptTree3,_ptRes2,_ptTree2,_ptRes1,_ptTree1,_ptTree0);
                                TOKEN_EXIT(constan_exit,"LLOCTAL")
#line 3407 "cplus.met"
                            } else {
#line 3407 "cplus.met"
                                tokenAhead = 0 ;
#line 3407 "cplus.met"
                            }
#line 3407 "cplus.met"
                            ReplaceTree(_ptRes3, 1, _ptTree3);
#line 3407 "cplus.met"
                            _ptTree2=_ptRes3;
#line 3407 "cplus.met"
                        }
#line 3407 "cplus.met"
                        ReplaceTree(_ptRes2, 1, _ptTree2);
#line 3407 "cplus.met"
                        _ptTree1=_ptRes2;
#line 3407 "cplus.met"
                    }
#line 3407 "cplus.met"
                    ReplaceTree(_ptRes1, 1, _ptTree1);
#line 3407 "cplus.met"
                    _ptTree0=_ptRes1;
#line 3407 "cplus.met"
                }
#line 3407 "cplus.met"
                _retValue =_ptTree0;
#line 3407 "cplus.met"
                goto constan_ret;
#line 3407 "cplus.met"
            }
#line 3407 "cplus.met"
            break;
#line 3407 "cplus.met"
#line 3408 "cplus.met"
        case UOCTAL : 
#line 3408 "cplus.met"
#line 3408 "cplus.met"
            {
#line 3408 "cplus.met"
                PPTREE _ptTree0=0;
#line 3408 "cplus.met"
                {
#line 3408 "cplus.met"
                    PPTREE _ptTree1=0,_ptRes1=0;
#line 3408 "cplus.met"
                    _ptRes1= MakeTree(IUN, 1);
#line 3408 "cplus.met"
                    {
#line 3408 "cplus.met"
                        PPTREE _ptTree2=0,_ptRes2=0;
#line 3408 "cplus.met"
                        _ptRes2= MakeTree(OCTAL, 1);
#line 3408 "cplus.met"
                        {
#line 3408 "cplus.met"
                            PPTREE _ptTree3=0,_ptRes3=0;
#line 3408 "cplus.met"
                            _ptRes3= MakeTree(INTEGER, 1);
#line 3408 "cplus.met"
                            (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3408 "cplus.met"
                            if ( ! TERM_OR_META(UOCTAL,"UOCTAL") || !(BUILD_TERM_META(_ptTree3))) {
#line 3408 "cplus.met"
                                MulFreeTree(7,_ptRes3,_ptTree3,_ptRes2,_ptTree2,_ptRes1,_ptTree1,_ptTree0);
                                TOKEN_EXIT(constan_exit,"UOCTAL")
#line 3408 "cplus.met"
                            } else {
#line 3408 "cplus.met"
                                tokenAhead = 0 ;
#line 3408 "cplus.met"
                            }
#line 3408 "cplus.met"
                            ReplaceTree(_ptRes3, 1, _ptTree3);
#line 3408 "cplus.met"
                            _ptTree2=_ptRes3;
#line 3408 "cplus.met"
                        }
#line 3408 "cplus.met"
                        ReplaceTree(_ptRes2, 1, _ptTree2);
#line 3408 "cplus.met"
                        _ptTree1=_ptRes2;
#line 3408 "cplus.met"
                    }
#line 3408 "cplus.met"
                    ReplaceTree(_ptRes1, 1, _ptTree1);
#line 3408 "cplus.met"
                    _ptTree0=_ptRes1;
#line 3408 "cplus.met"
                }
#line 3408 "cplus.met"
                _retValue =_ptTree0;
#line 3408 "cplus.met"
                goto constan_ret;
#line 3408 "cplus.met"
            }
#line 3408 "cplus.met"
            break;
#line 3408 "cplus.met"
#line 3409 "cplus.met"
        case ULOCTAL : 
#line 3409 "cplus.met"
#line 3409 "cplus.met"
            {
#line 3409 "cplus.met"
                PPTREE _ptTree0=0;
#line 3409 "cplus.met"
                {
#line 3409 "cplus.met"
                    PPTREE _ptTree1=0,_ptRes1=0;
#line 3409 "cplus.met"
                    _ptRes1= MakeTree(IUNLONG, 1);
#line 3409 "cplus.met"
                    {
#line 3409 "cplus.met"
                        PPTREE _ptTree2=0,_ptRes2=0;
#line 3409 "cplus.met"
                        _ptRes2= MakeTree(OCTAL, 1);
#line 3409 "cplus.met"
                        {
#line 3409 "cplus.met"
                            PPTREE _ptTree3=0,_ptRes3=0;
#line 3409 "cplus.met"
                            _ptRes3= MakeTree(INTEGER, 1);
#line 3409 "cplus.met"
                            (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3409 "cplus.met"
                            if ( ! TERM_OR_META(ULOCTAL,"ULOCTAL") || !(BUILD_TERM_META(_ptTree3))) {
#line 3409 "cplus.met"
                                MulFreeTree(7,_ptRes3,_ptTree3,_ptRes2,_ptTree2,_ptRes1,_ptTree1,_ptTree0);
                                TOKEN_EXIT(constan_exit,"ULOCTAL")
#line 3409 "cplus.met"
                            } else {
#line 3409 "cplus.met"
                                tokenAhead = 0 ;
#line 3409 "cplus.met"
                            }
#line 3409 "cplus.met"
                            ReplaceTree(_ptRes3, 1, _ptTree3);
#line 3409 "cplus.met"
                            _ptTree2=_ptRes3;
#line 3409 "cplus.met"
                        }
#line 3409 "cplus.met"
                        ReplaceTree(_ptRes2, 1, _ptTree2);
#line 3409 "cplus.met"
                        _ptTree1=_ptRes2;
#line 3409 "cplus.met"
                    }
#line 3409 "cplus.met"
                    ReplaceTree(_ptRes1, 1, _ptTree1);
#line 3409 "cplus.met"
                    _ptTree0=_ptRes1;
#line 3409 "cplus.met"
                }
#line 3409 "cplus.met"
                _retValue =_ptTree0;
#line 3409 "cplus.met"
                goto constan_ret;
#line 3409 "cplus.met"
            }
#line 3409 "cplus.met"
            break;
#line 3409 "cplus.met"
#line 3410 "cplus.met"
        case ULLOCTAL : 
#line 3410 "cplus.met"
#line 3410 "cplus.met"
            {
#line 3410 "cplus.met"
                PPTREE _ptTree0=0;
#line 3410 "cplus.met"
                {
#line 3410 "cplus.met"
                    PPTREE _ptTree1=0,_ptRes1=0;
#line 3410 "cplus.met"
                    _ptRes1= MakeTree(IUNLONGLONG, 1);
#line 3410 "cplus.met"
                    {
#line 3410 "cplus.met"
                        PPTREE _ptTree2=0,_ptRes2=0;
#line 3410 "cplus.met"
                        _ptRes2= MakeTree(OCTAL, 1);
#line 3410 "cplus.met"
                        {
#line 3410 "cplus.met"
                            PPTREE _ptTree3=0,_ptRes3=0;
#line 3410 "cplus.met"
                            _ptRes3= MakeTree(INTEGER, 1);
#line 3410 "cplus.met"
                            (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3410 "cplus.met"
                            if ( ! TERM_OR_META(ULLOCTAL,"ULLOCTAL") || !(BUILD_TERM_META(_ptTree3))) {
#line 3410 "cplus.met"
                                MulFreeTree(7,_ptRes3,_ptTree3,_ptRes2,_ptTree2,_ptRes1,_ptTree1,_ptTree0);
                                TOKEN_EXIT(constan_exit,"ULLOCTAL")
#line 3410 "cplus.met"
                            } else {
#line 3410 "cplus.met"
                                tokenAhead = 0 ;
#line 3410 "cplus.met"
                            }
#line 3410 "cplus.met"
                            ReplaceTree(_ptRes3, 1, _ptTree3);
#line 3410 "cplus.met"
                            _ptTree2=_ptRes3;
#line 3410 "cplus.met"
                        }
#line 3410 "cplus.met"
                        ReplaceTree(_ptRes2, 1, _ptTree2);
#line 3410 "cplus.met"
                        _ptTree1=_ptRes2;
#line 3410 "cplus.met"
                    }
#line 3410 "cplus.met"
                    ReplaceTree(_ptRes1, 1, _ptTree1);
#line 3410 "cplus.met"
                    _ptTree0=_ptRes1;
#line 3410 "cplus.met"
                }
#line 3410 "cplus.met"
                _retValue =_ptTree0;
#line 3410 "cplus.met"
                goto constan_ret;
#line 3410 "cplus.met"
            }
#line 3410 "cplus.met"
            break;
#line 3410 "cplus.met"
#line 3411 "cplus.met"
        case FLOATVAL : 
#line 3411 "cplus.met"
#line 3411 "cplus.met"
            {
#line 3411 "cplus.met"
                PPTREE _ptTree0=0;
#line 3411 "cplus.met"
                {
#line 3411 "cplus.met"
                    PPTREE _ptTree1=0,_ptRes1=0;
#line 3411 "cplus.met"
                    _ptRes1= MakeTree(FLOAT, 1);
#line 3411 "cplus.met"
                    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3411 "cplus.met"
                    if ( ! TERM_OR_META(FLOATVAL,"FLOATVAL") || !(BUILD_TERM_META(_ptTree1))) {
#line 3411 "cplus.met"
                        MulFreeTree(3,_ptRes1,_ptTree1,_ptTree0);
                        TOKEN_EXIT(constan_exit,"FLOATVAL")
#line 3411 "cplus.met"
                    } else {
#line 3411 "cplus.met"
                        tokenAhead = 0 ;
#line 3411 "cplus.met"
                    }
#line 3411 "cplus.met"
                    ReplaceTree(_ptRes1, 1, _ptTree1);
#line 3411 "cplus.met"
                    _ptTree0=_ptRes1;
#line 3411 "cplus.met"
                }
#line 3411 "cplus.met"
                _retValue =_ptTree0;
#line 3411 "cplus.met"
                goto constan_ret;
#line 3411 "cplus.met"
            }
#line 3411 "cplus.met"
            break;
#line 3411 "cplus.met"
#line 3412 "cplus.met"
        case CHARACT : 
#line 3412 "cplus.met"
#line 3412 "cplus.met"
            {
#line 3412 "cplus.met"
                PPTREE _ptTree0=0;
#line 3412 "cplus.met"
                {
#line 3412 "cplus.met"
                    PPTREE _ptTree1=0,_ptRes1=0;
#line 3412 "cplus.met"
                    _ptRes1= MakeTree(CHAR, 1);
#line 3412 "cplus.met"
                    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3412 "cplus.met"
                    if ( ! TERM_OR_META(CHARACT,"CHARACT") || !(BUILD_TERM_META(_ptTree1))) {
#line 3412 "cplus.met"
                        MulFreeTree(3,_ptRes1,_ptTree1,_ptTree0);
                        TOKEN_EXIT(constan_exit,"CHARACT")
#line 3412 "cplus.met"
                    } else {
#line 3412 "cplus.met"
                        tokenAhead = 0 ;
#line 3412 "cplus.met"
                    }
#line 3412 "cplus.met"
                    ReplaceTree(_ptRes1, 1, _ptTree1);
#line 3412 "cplus.met"
                    _ptTree0=_ptRes1;
#line 3412 "cplus.met"
                }
#line 3412 "cplus.met"
                _retValue =_ptTree0;
#line 3412 "cplus.met"
                goto constan_ret;
#line 3412 "cplus.met"
            }
#line 3412 "cplus.met"
            break;
#line 3412 "cplus.met"
        default :
#line 3412 "cplus.met"
            CASE_EXIT(constan_exit,"either INTEGER or LINTEGER or LLINTEGER or UINTEGER or ULINTEGER or ULLINTEGER or HEXA or BINARY or LHEXA or LLHEXA or UHEXA or ULHEXA or ULLHEXA or OCTAL or LOCTAL or LLOCTAL or UOCTAL or ULOCTAL or ULLOCTAL or FLOATVAL or CHARACT")
#line 3412 "cplus.met"
            break;
#line 3412 "cplus.met"
    }
#line 3412 "cplus.met"
#line 3412 "cplus.met"
#line 3413 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 3413 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 3413 "cplus.met"
return((PPTREE) 0);
#line 3413 "cplus.met"

#line 3413 "cplus.met"
constan_exit :
#line 3413 "cplus.met"

#line 3413 "cplus.met"
    _Debug = TRACE_RULE("constan",TRACE_EXIT,(PPTREE)0);
#line 3413 "cplus.met"
    _funcLevel--;
#line 3413 "cplus.met"
    return((PPTREE) -1) ;
#line 3413 "cplus.met"

#line 3413 "cplus.met"
constan_ret :
#line 3413 "cplus.met"
    
#line 3413 "cplus.met"
    _Debug = TRACE_RULE("constan",TRACE_RETURN,_retValue);
#line 3413 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 3413 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 3413 "cplus.met"
    return _retValue ;
#line 3413 "cplus.met"
}
#line 3413 "cplus.met"

#line 3413 "cplus.met"
#line 3526 "cplus.met"
PPTREE cplus::ctor_initializer ( int error_free)
#line 3526 "cplus.met"
{
#line 3526 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 3526 "cplus.met"
    int _value,_nbPre = 0 ;
#line 3526 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 3526 "cplus.met"
    int _Debug = TRACE_RULE("ctor_initializer",TRACE_ENTER,(PPTREE)0);
#line 3526 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 3526 "cplus.met"
#line 3526 "cplus.met"
    PPTREE _addlist1 = (PPTREE) 0;
#line 3526 "cplus.met"
#line 3526 "cplus.met"
    PPTREE retTree = (PPTREE) 0,list = (PPTREE) 0,val = (PPTREE) 0;
#line 3526 "cplus.met"
#line 3528 "cplus.met"
    if ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN(DPOI,":") && (tokenAhead = 0,CommTerm(),1)){
#line 3528 "cplus.met"
#line 3529 "cplus.met"
#line 3529 "cplus.met"
        _addlist1 = list ;
#line 3529 "cplus.met"
#line 3530 "cplus.met"
        do {
#line 3530 "cplus.met"
#line 3531 "cplus.met"
            {
#line 3531 "cplus.met"
                PPTREE _ptTree0=0,_ptRes0=0;
#line 3531 "cplus.met"
                _ptRes0= MakeTree(CTOR_INIT, 3);
#line 3531 "cplus.met"
                if ( (_ptTree0=NQUICK_CALL(_Tak(complete_class_name)(error_free), 32, cplus))== (PPTREE) -1 ) {
#line 3531 "cplus.met"
                    MulFreeTree(6,_ptRes0,_ptTree0,_addlist1,list,retTree,val);
                    PROG_EXIT(ctor_initializer_exit,"ctor_initializer")
#line 3531 "cplus.met"
                }
#line 3531 "cplus.met"
                ReplaceTree(_ptRes0, 1, _ptTree0);
#line 3531 "cplus.met"
                retTree=_ptRes0;
#line 3531 "cplus.met"
            }
#line 3531 "cplus.met"
#line 3532 "cplus.met"
            (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3532 "cplus.met"
            switch( lexEl.Value) {
#line 3532 "cplus.met"
#line 3535 "cplus.met"
                case POUV : 
#line 3535 "cplus.met"
#line 3534 "cplus.met"
#line 3535 "cplus.met"
                    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3535 "cplus.met"
                    if (  !SEE_TOKEN( POUV,"(") || !(CommTerm(),1)) {
#line 3535 "cplus.met"
                        MulFreeTree(4,_addlist1,list,retTree,val);
                        TOKEN_EXIT(ctor_initializer_exit,"(")
#line 3535 "cplus.met"
                    } else {
#line 3535 "cplus.met"
                        tokenAhead = 0 ;
#line 3535 "cplus.met"
                    }
#line 3535 "cplus.met"
#line 3536 "cplus.met"
                    if (NPUSH_CALL_AFF_VERIF(val = ,_Tak(expression), 67, cplus)){
#line 3536 "cplus.met"
#line 3537 "cplus.met"
                        ReplaceTree(retTree ,2 ,val );
#line 3537 "cplus.met"
#line 3537 "cplus.met"
                    }
#line 3537 "cplus.met"
#line 3538 "cplus.met"
                    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3538 "cplus.met"
                    if (  !SEE_TOKEN( PFER,")") || !(CommTerm(),1)) {
#line 3538 "cplus.met"
                        MulFreeTree(4,_addlist1,list,retTree,val);
                        TOKEN_EXIT(ctor_initializer_exit,")")
#line 3538 "cplus.met"
                    } else {
#line 3538 "cplus.met"
                        tokenAhead = 0 ;
#line 3538 "cplus.met"
                    }
#line 3538 "cplus.met"
#line 3538 "cplus.met"
                    break;
#line 3538 "cplus.met"
#line 3542 "cplus.met"
                default : 
#line 3542 "cplus.met"
#line 3541 "cplus.met"
#line 3542 "cplus.met"
                    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3542 "cplus.met"
                    if (  !SEE_TOKEN( AOUV,"{") || !(CommTerm(),1)) {
#line 3542 "cplus.met"
                        MulFreeTree(4,_addlist1,list,retTree,val);
                        TOKEN_EXIT(ctor_initializer_exit,"{")
#line 3542 "cplus.met"
                    } else {
#line 3542 "cplus.met"
                        tokenAhead = 0 ;
#line 3542 "cplus.met"
                    }
#line 3542 "cplus.met"
#line 3543 "cplus.met"
                    if (NPUSH_CALL_AFF_VERIF(val = ,_Tak(expression), 67, cplus)){
#line 3543 "cplus.met"
#line 3544 "cplus.met"
                        ReplaceTree(retTree ,2 ,val );
#line 3544 "cplus.met"
#line 3544 "cplus.met"
                    }
#line 3544 "cplus.met"
#line 3545 "cplus.met"
                    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3545 "cplus.met"
                    if (  !SEE_TOKEN( AFER,"}") || !(CommTerm(),1)) {
#line 3545 "cplus.met"
                        MulFreeTree(4,_addlist1,list,retTree,val);
                        TOKEN_EXIT(ctor_initializer_exit,"}")
#line 3545 "cplus.met"
                    } else {
#line 3545 "cplus.met"
                        tokenAhead = 0 ;
#line 3545 "cplus.met"
                    }
#line 3545 "cplus.met"
#line 3546 "cplus.met"
                    {
#line 3546 "cplus.met"
                        PPTREE _ptTree0=0;
#line 3546 "cplus.met"
                        {
#line 3546 "cplus.met"
                            PPTREE _ptRes1=0;
#line 3546 "cplus.met"
                            _ptRes1= MakeTree(BRACE_MARKER, 0);
#line 3546 "cplus.met"
                            _ptTree0=_ptRes1;
#line 3546 "cplus.met"
                        }
#line 3546 "cplus.met"
                        ReplaceTree(retTree , 3 , _ptTree0);
#line 3546 "cplus.met"
                    }
#line 3546 "cplus.met"
#line 3546 "cplus.met"
                    break;
#line 3546 "cplus.met"
            }
#line 3546 "cplus.met"
#line 3549 "cplus.met"
            _addlist1 =AddList(_addlist1 ,retTree );
#line 3549 "cplus.met"
#line 3549 "cplus.met"
            if (list){
#line 3549 "cplus.met"
#line 3549 "cplus.met"
                _addlist1 = SonTree (_addlist1 ,2 );
#line 3549 "cplus.met"
            } else {
#line 3549 "cplus.met"
#line 3549 "cplus.met"
                list = _addlist1 ;
#line 3549 "cplus.met"
            }
#line 3549 "cplus.met"
#line 3549 "cplus.met"
#line 3550 "cplus.met"
        } while ( !(! ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN(VIRG,",") && (tokenAhead = 0,CommTerm(),1)))) ;
#line 3550 "cplus.met"
#line 3551 "cplus.met"
        {
#line 3551 "cplus.met"
            PPTREE _ptTree0=0;
#line 3551 "cplus.met"
            {
#line 3551 "cplus.met"
                PPTREE _ptRes1=0;
#line 3551 "cplus.met"
                _ptRes1= MakeTree(CTOR_INITIALIZER, 1);
#line 3551 "cplus.met"
                ReplaceTree(_ptRes1, 1, list );
#line 3551 "cplus.met"
                _ptTree0=_ptRes1;
#line 3551 "cplus.met"
            }
#line 3551 "cplus.met"
            _retValue =_ptTree0;
#line 3551 "cplus.met"
            goto ctor_initializer_ret;
#line 3551 "cplus.met"
        }
#line 3551 "cplus.met"
#line 3551 "cplus.met"
#line 3551 "cplus.met"
    }
#line 3551 "cplus.met"
#line 3551 "cplus.met"
#line 3552 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 3552 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 3552 "cplus.met"
return((PPTREE) 0);
#line 3552 "cplus.met"

#line 3552 "cplus.met"
ctor_initializer_exit :
#line 3552 "cplus.met"

#line 3552 "cplus.met"
    _Debug = TRACE_RULE("ctor_initializer",TRACE_EXIT,(PPTREE)0);
#line 3552 "cplus.met"
    _funcLevel--;
#line 3552 "cplus.met"
    return((PPTREE) -1) ;
#line 3552 "cplus.met"

#line 3552 "cplus.met"
ctor_initializer_ret :
#line 3552 "cplus.met"
    
#line 3552 "cplus.met"
    _Debug = TRACE_RULE("ctor_initializer",TRACE_RETURN,_retValue);
#line 3552 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 3552 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 3552 "cplus.met"
    return _retValue ;
#line 3552 "cplus.met"
}
#line 3552 "cplus.met"

#line 3552 "cplus.met"
#line 1887 "cplus.met"
PPTREE cplus::data_decl_exotic ( int error_free)
#line 1887 "cplus.met"
{
#line 1887 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 1887 "cplus.met"
    int _value,_nbPre = 0 ;
#line 1887 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 1887 "cplus.met"
    int _Debug = TRACE_RULE("data_decl_exotic",TRACE_ENTER,(PPTREE)0);
#line 1887 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 1887 "cplus.met"
#line 1887 "cplus.met"
    PPTREE retTree = (PPTREE) 0;
#line 1887 "cplus.met"
#line 1890 "cplus.met"
    if (! (NPUSH_CALL_AFF_VERIF(retTree = ,_Tak(message_map), 102, cplus))){
#line 1890 "cplus.met"
#line 1892 "cplus.met"
        if ( (retTree=NQUICK_CALL(_Tak(macro)(error_free), 98, cplus))== (PPTREE) -1 ) {
#line 1892 "cplus.met"
            MulFreeTree(1,retTree);
            PROG_EXIT(data_decl_exotic_exit,"data_decl_exotic")
#line 1892 "cplus.met"
        }
#line 1892 "cplus.met"
    }
#line 1892 "cplus.met"
#line 1893 "cplus.met"
    {
#line 1893 "cplus.met"
        _retValue = retTree ;
#line 1893 "cplus.met"
        goto data_decl_exotic_ret;
#line 1893 "cplus.met"
        
#line 1893 "cplus.met"
    }
#line 1893 "cplus.met"
#line 1893 "cplus.met"
#line 1893 "cplus.met"

#line 1894 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1894 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 1894 "cplus.met"
return((PPTREE) 0);
#line 1894 "cplus.met"

#line 1894 "cplus.met"
data_decl_exotic_exit :
#line 1894 "cplus.met"

#line 1894 "cplus.met"
    _Debug = TRACE_RULE("data_decl_exotic",TRACE_EXIT,(PPTREE)0);
#line 1894 "cplus.met"
    _funcLevel--;
#line 1894 "cplus.met"
    return((PPTREE) -1) ;
#line 1894 "cplus.met"

#line 1894 "cplus.met"
data_decl_exotic_ret :
#line 1894 "cplus.met"
    
#line 1894 "cplus.met"
    _Debug = TRACE_RULE("data_decl_exotic",TRACE_RETURN,_retValue);
#line 1894 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1894 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 1894 "cplus.met"
    return _retValue ;
#line 1894 "cplus.met"
}
#line 1894 "cplus.met"

#line 1894 "cplus.met"
#line 1840 "cplus.met"
PPTREE cplus::data_decl_sc_decl ( int error_free)
#line 1840 "cplus.met"
{
#line 1840 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 1840 "cplus.met"
    int _value,_nbPre = 0 ;
#line 1840 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 1840 "cplus.met"
    int _Debug = TRACE_RULE("data_decl_sc_decl",TRACE_ENTER,(PPTREE)0);
#line 1840 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 1840 "cplus.met"
#line 1840 "cplus.met"
    PPTREE retTree = (PPTREE) 0;
#line 1840 "cplus.met"
#line 1842 "cplus.met"
    if (! (NPUSH_CALL_AFF_VERIF(retTree = ,_Tak(data_decl_sc_decl_full), 40, cplus))){
#line 1842 "cplus.met"
#line 1843 "cplus.met"
        if ( (retTree=NQUICK_CALL(_Tak(data_decl_sc_decl_short)(error_free), 41, cplus))== (PPTREE) -1 ) {
#line 1843 "cplus.met"
            MulFreeTree(1,retTree);
            PROG_EXIT(data_decl_sc_decl_exit,"data_decl_sc_decl")
#line 1843 "cplus.met"
        }
#line 1843 "cplus.met"
    }
#line 1843 "cplus.met"
#line 1844 "cplus.met"
    {
#line 1844 "cplus.met"
        _retValue = retTree ;
#line 1844 "cplus.met"
        goto data_decl_sc_decl_ret;
#line 1844 "cplus.met"
        
#line 1844 "cplus.met"
    }
#line 1844 "cplus.met"
#line 1844 "cplus.met"
#line 1844 "cplus.met"

#line 1845 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1845 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 1845 "cplus.met"
return((PPTREE) 0);
#line 1845 "cplus.met"

#line 1845 "cplus.met"
data_decl_sc_decl_exit :
#line 1845 "cplus.met"

#line 1845 "cplus.met"
    _Debug = TRACE_RULE("data_decl_sc_decl",TRACE_EXIT,(PPTREE)0);
#line 1845 "cplus.met"
    _funcLevel--;
#line 1845 "cplus.met"
    return((PPTREE) -1) ;
#line 1845 "cplus.met"

#line 1845 "cplus.met"
data_decl_sc_decl_ret :
#line 1845 "cplus.met"
    
#line 1845 "cplus.met"
    _Debug = TRACE_RULE("data_decl_sc_decl",TRACE_RETURN,_retValue);
#line 1845 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1845 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 1845 "cplus.met"
    return _retValue ;
#line 1845 "cplus.met"
}
#line 1845 "cplus.met"

#line 1845 "cplus.met"
#line 1823 "cplus.met"
PPTREE cplus::data_decl_sc_decl_full ( int error_free)
#line 1823 "cplus.met"
{
#line 1823 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 1823 "cplus.met"
    int _value,_nbPre = 0 ;
#line 1823 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 1823 "cplus.met"
    int _Debug = TRACE_RULE("data_decl_sc_decl_full",TRACE_ENTER,(PPTREE)0);
#line 1823 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 1823 "cplus.met"
#line 1823 "cplus.met"
    PPTREE retTree = (PPTREE) 0;
#line 1823 "cplus.met"
#line 1825 "cplus.met"
    {
#line 1825 "cplus.met"
        PPTREE _ptRes0=0;
#line 1825 "cplus.met"
        _ptRes0= MakeTree(DECLARATION, 3);
#line 1825 "cplus.met"
        retTree=_ptRes0;
#line 1825 "cplus.met"
    }
#line 1825 "cplus.met"
#line 1826 "cplus.met"
    {
#line 1826 "cplus.met"
        PPTREE _ptTree0=0;
#line 1826 "cplus.met"
        if ( (_ptTree0=NQUICK_CALL(_Tak(sc_specifier)(error_free), 134, cplus))== (PPTREE) -1 ) {
#line 1826 "cplus.met"
            MulFreeTree(2,_ptTree0,retTree);
            PROG_EXIT(data_decl_sc_decl_full_exit,"data_decl_sc_decl_full")
#line 1826 "cplus.met"
        }
#line 1826 "cplus.met"
        ReplaceTree(retTree , 1 , _ptTree0);
#line 1826 "cplus.met"
    }
#line 1826 "cplus.met"
#line 1827 "cplus.met"
    {
#line 1827 "cplus.met"
        PPTREE _ptTree0=0;
#line 1827 "cplus.met"
        if ( (_ptTree0=NQUICK_CALL(_Tak(declarator_list_init)(error_free), 54, cplus))== (PPTREE) -1 ) {
#line 1827 "cplus.met"
            MulFreeTree(2,_ptTree0,retTree);
            PROG_EXIT(data_decl_sc_decl_full_exit,"data_decl_sc_decl_full")
#line 1827 "cplus.met"
        }
#line 1827 "cplus.met"
        ReplaceTree(retTree , 3 , _ptTree0);
#line 1827 "cplus.met"
    }
#line 1827 "cplus.met"
#line 1828 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 1828 "cplus.met"
    if (  !SEE_TOKEN( PVIR,";") || !(CommTerm(),1)) {
#line 1828 "cplus.met"
        MulFreeTree(1,retTree);
        TOKEN_EXIT(data_decl_sc_decl_full_exit,";")
#line 1828 "cplus.met"
    } else {
#line 1828 "cplus.met"
        tokenAhead = 0 ;
#line 1828 "cplus.met"
    }
#line 1828 "cplus.met"
#line 1829 "cplus.met"
    {
#line 1829 "cplus.met"
        _retValue = retTree ;
#line 1829 "cplus.met"
        goto data_decl_sc_decl_full_ret;
#line 1829 "cplus.met"
        
#line 1829 "cplus.met"
    }
#line 1829 "cplus.met"
#line 1829 "cplus.met"
#line 1829 "cplus.met"

#line 1830 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1830 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 1830 "cplus.met"
return((PPTREE) 0);
#line 1830 "cplus.met"

#line 1830 "cplus.met"
data_decl_sc_decl_full_exit :
#line 1830 "cplus.met"

#line 1830 "cplus.met"
    _Debug = TRACE_RULE("data_decl_sc_decl_full",TRACE_EXIT,(PPTREE)0);
#line 1830 "cplus.met"
    _funcLevel--;
#line 1830 "cplus.met"
    return((PPTREE) -1) ;
#line 1830 "cplus.met"

#line 1830 "cplus.met"
data_decl_sc_decl_full_ret :
#line 1830 "cplus.met"
    
#line 1830 "cplus.met"
    _Debug = TRACE_RULE("data_decl_sc_decl_full",TRACE_RETURN,_retValue);
#line 1830 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1830 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 1830 "cplus.met"
    return _retValue ;
#line 1830 "cplus.met"
}
#line 1830 "cplus.met"

#line 1830 "cplus.met"
#line 1832 "cplus.met"
PPTREE cplus::data_decl_sc_decl_short ( int error_free)
#line 1832 "cplus.met"
{
#line 1832 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 1832 "cplus.met"
    int _value,_nbPre = 0 ;
#line 1832 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 1832 "cplus.met"
    int _Debug = TRACE_RULE("data_decl_sc_decl_short",TRACE_ENTER,(PPTREE)0);
#line 1832 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 1832 "cplus.met"
#line 1832 "cplus.met"
    PPTREE retTree = (PPTREE) 0;
#line 1832 "cplus.met"
#line 1834 "cplus.met"
    {
#line 1834 "cplus.met"
        PPTREE _ptRes0=0;
#line 1834 "cplus.met"
        _ptRes0= MakeTree(DECLARATION, 3);
#line 1834 "cplus.met"
        retTree=_ptRes0;
#line 1834 "cplus.met"
    }
#line 1834 "cplus.met"
#line 1835 "cplus.met"
    {
#line 1835 "cplus.met"
        PPTREE _ptTree0=0;
#line 1835 "cplus.met"
        if ( (_ptTree0=NQUICK_CALL(_Tak(declarator_list_init)(error_free), 54, cplus))== (PPTREE) -1 ) {
#line 1835 "cplus.met"
            MulFreeTree(2,_ptTree0,retTree);
            PROG_EXIT(data_decl_sc_decl_short_exit,"data_decl_sc_decl_short")
#line 1835 "cplus.met"
        }
#line 1835 "cplus.met"
        ReplaceTree(retTree , 3 , _ptTree0);
#line 1835 "cplus.met"
    }
#line 1835 "cplus.met"
#line 1836 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 1836 "cplus.met"
    if (  !SEE_TOKEN( PVIR,";") || !(CommTerm(),1)) {
#line 1836 "cplus.met"
        MulFreeTree(1,retTree);
        TOKEN_EXIT(data_decl_sc_decl_short_exit,";")
#line 1836 "cplus.met"
    } else {
#line 1836 "cplus.met"
        tokenAhead = 0 ;
#line 1836 "cplus.met"
    }
#line 1836 "cplus.met"
#line 1837 "cplus.met"
    {
#line 1837 "cplus.met"
        _retValue = retTree ;
#line 1837 "cplus.met"
        goto data_decl_sc_decl_short_ret;
#line 1837 "cplus.met"
        
#line 1837 "cplus.met"
    }
#line 1837 "cplus.met"
#line 1837 "cplus.met"
#line 1837 "cplus.met"

#line 1838 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1838 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 1838 "cplus.met"
return((PPTREE) 0);
#line 1838 "cplus.met"

#line 1838 "cplus.met"
data_decl_sc_decl_short_exit :
#line 1838 "cplus.met"

#line 1838 "cplus.met"
    _Debug = TRACE_RULE("data_decl_sc_decl_short",TRACE_EXIT,(PPTREE)0);
#line 1838 "cplus.met"
    _funcLevel--;
#line 1838 "cplus.met"
    return((PPTREE) -1) ;
#line 1838 "cplus.met"

#line 1838 "cplus.met"
data_decl_sc_decl_short_ret :
#line 1838 "cplus.met"
    
#line 1838 "cplus.met"
    _Debug = TRACE_RULE("data_decl_sc_decl_short",TRACE_RETURN,_retValue);
#line 1838 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1838 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 1838 "cplus.met"
    return _retValue ;
#line 1838 "cplus.met"
}
#line 1838 "cplus.met"

#line 1838 "cplus.met"
#line 1880 "cplus.met"
PPTREE cplus::data_decl_sc_ty_decl ( int error_free)
#line 1880 "cplus.met"
{
#line 1880 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 1880 "cplus.met"
    int _value,_nbPre = 0 ;
#line 1880 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 1880 "cplus.met"
    int _Debug = TRACE_RULE("data_decl_sc_ty_decl",TRACE_ENTER,(PPTREE)0);
#line 1880 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 1880 "cplus.met"
#line 1880 "cplus.met"
    PPTREE retTree = (PPTREE) 0;
#line 1880 "cplus.met"
#line 1882 "cplus.met"
    if (! (NPUSH_CALL_AFF_VERIF(retTree = ,_Tak(data_decl_sc_ty_decl_full), 43, cplus))){
#line 1882 "cplus.met"
#line 1883 "cplus.met"
        if ( (retTree=NQUICK_CALL(_Tak(data_decl_sc_ty_decl_short)(error_free), 44, cplus))== (PPTREE) -1 ) {
#line 1883 "cplus.met"
            MulFreeTree(1,retTree);
            PROG_EXIT(data_decl_sc_ty_decl_exit,"data_decl_sc_ty_decl")
#line 1883 "cplus.met"
        }
#line 1883 "cplus.met"
    }
#line 1883 "cplus.met"
#line 1884 "cplus.met"
    {
#line 1884 "cplus.met"
        _retValue = retTree ;
#line 1884 "cplus.met"
        goto data_decl_sc_ty_decl_ret;
#line 1884 "cplus.met"
        
#line 1884 "cplus.met"
    }
#line 1884 "cplus.met"
#line 1884 "cplus.met"
#line 1884 "cplus.met"

#line 1885 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1885 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 1885 "cplus.met"
return((PPTREE) 0);
#line 1885 "cplus.met"

#line 1885 "cplus.met"
data_decl_sc_ty_decl_exit :
#line 1885 "cplus.met"

#line 1885 "cplus.met"
    _Debug = TRACE_RULE("data_decl_sc_ty_decl",TRACE_EXIT,(PPTREE)0);
#line 1885 "cplus.met"
    _funcLevel--;
#line 1885 "cplus.met"
    return((PPTREE) -1) ;
#line 1885 "cplus.met"

#line 1885 "cplus.met"
data_decl_sc_ty_decl_ret :
#line 1885 "cplus.met"
    
#line 1885 "cplus.met"
    _Debug = TRACE_RULE("data_decl_sc_ty_decl",TRACE_RETURN,_retValue);
#line 1885 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1885 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 1885 "cplus.met"
    return _retValue ;
#line 1885 "cplus.met"
}
#line 1885 "cplus.met"

#line 1885 "cplus.met"
#line 1857 "cplus.met"
PPTREE cplus::data_decl_sc_ty_decl_full ( int error_free)
#line 1857 "cplus.met"
{
#line 1857 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 1857 "cplus.met"
    int _value,_nbPre = 0 ;
#line 1857 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 1857 "cplus.met"
    int _Debug = TRACE_RULE("data_decl_sc_ty_decl_full",TRACE_ENTER,(PPTREE)0);
#line 1857 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 1857 "cplus.met"
#line 1857 "cplus.met"
    PPTREE retTree = (PPTREE) 0;
#line 1857 "cplus.met"
#line 1860 "cplus.met"
    {
#line 1860 "cplus.met"
        PPTREE _ptRes0=0;
#line 1860 "cplus.met"
        _ptRes0= MakeTree(DECLARATION, 3);
#line 1860 "cplus.met"
        retTree=_ptRes0;
#line 1860 "cplus.met"
    }
#line 1860 "cplus.met"
#line 1862 "cplus.met"
    {
#line 1862 "cplus.met"
        PPTREE _ptTree0=0;
#line 1862 "cplus.met"
        if ( (_ptTree0=NQUICK_CALL(_Tak(sc_specifier)(error_free), 134, cplus))== (PPTREE) -1 ) {
#line 1862 "cplus.met"
            MulFreeTree(2,_ptTree0,retTree);
            PROG_EXIT(data_decl_sc_ty_decl_full_exit,"data_decl_sc_ty_decl_full")
#line 1862 "cplus.met"
        }
#line 1862 "cplus.met"
        ReplaceTree(retTree , 1 , _ptTree0);
#line 1862 "cplus.met"
    }
#line 1862 "cplus.met"
#line 1863 "cplus.met"
    {
#line 1863 "cplus.met"
        PPTREE _ptTree0=0;
#line 1863 "cplus.met"
        if ( (_ptTree0=NQUICK_CALL(_Tak(type_specifier)(error_free), 156, cplus))== (PPTREE) -1 ) {
#line 1863 "cplus.met"
            MulFreeTree(2,_ptTree0,retTree);
            PROG_EXIT(data_decl_sc_ty_decl_full_exit,"data_decl_sc_ty_decl_full")
#line 1863 "cplus.met"
        }
#line 1863 "cplus.met"
        ReplaceTree(retTree , 2 , _ptTree0);
#line 1863 "cplus.met"
    }
#line 1863 "cplus.met"
#line 1864 "cplus.met"
    {
#line 1864 "cplus.met"
        PPTREE _ptTree0=0;
#line 1864 "cplus.met"
        if ( (_ptTree0=NQUICK_CALL(_Tak(declarator_list_init)(error_free), 54, cplus))== (PPTREE) -1 ) {
#line 1864 "cplus.met"
            MulFreeTree(2,_ptTree0,retTree);
            PROG_EXIT(data_decl_sc_ty_decl_full_exit,"data_decl_sc_ty_decl_full")
#line 1864 "cplus.met"
        }
#line 1864 "cplus.met"
        ReplaceTree(retTree , 3 , _ptTree0);
#line 1864 "cplus.met"
    }
#line 1864 "cplus.met"
#line 1865 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 1865 "cplus.met"
    if (  !SEE_TOKEN( PVIR,";") || !(CommTerm(),1)) {
#line 1865 "cplus.met"
        MulFreeTree(1,retTree);
        TOKEN_EXIT(data_decl_sc_ty_decl_full_exit,";")
#line 1865 "cplus.met"
    } else {
#line 1865 "cplus.met"
        tokenAhead = 0 ;
#line 1865 "cplus.met"
    }
#line 1865 "cplus.met"
#line 1866 "cplus.met"
    {
#line 1866 "cplus.met"
        _retValue = retTree ;
#line 1866 "cplus.met"
        goto data_decl_sc_ty_decl_full_ret;
#line 1866 "cplus.met"
        
#line 1866 "cplus.met"
    }
#line 1866 "cplus.met"
#line 1866 "cplus.met"
#line 1866 "cplus.met"

#line 1867 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1867 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 1867 "cplus.met"
return((PPTREE) 0);
#line 1867 "cplus.met"

#line 1867 "cplus.met"
data_decl_sc_ty_decl_full_exit :
#line 1867 "cplus.met"

#line 1867 "cplus.met"
    _Debug = TRACE_RULE("data_decl_sc_ty_decl_full",TRACE_EXIT,(PPTREE)0);
#line 1867 "cplus.met"
    _funcLevel--;
#line 1867 "cplus.met"
    return((PPTREE) -1) ;
#line 1867 "cplus.met"

#line 1867 "cplus.met"
data_decl_sc_ty_decl_full_ret :
#line 1867 "cplus.met"
    
#line 1867 "cplus.met"
    _Debug = TRACE_RULE("data_decl_sc_ty_decl_full",TRACE_RETURN,_retValue);
#line 1867 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1867 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 1867 "cplus.met"
    return _retValue ;
#line 1867 "cplus.met"
}
#line 1867 "cplus.met"

#line 1867 "cplus.met"
#line 1869 "cplus.met"
PPTREE cplus::data_decl_sc_ty_decl_short ( int error_free)
#line 1869 "cplus.met"
{
#line 1869 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 1869 "cplus.met"
    int _value,_nbPre = 0 ;
#line 1869 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 1869 "cplus.met"
    int _Debug = TRACE_RULE("data_decl_sc_ty_decl_short",TRACE_ENTER,(PPTREE)0);
#line 1869 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 1869 "cplus.met"
#line 1869 "cplus.met"
    PPTREE retTree = (PPTREE) 0;
#line 1869 "cplus.met"
#line 1872 "cplus.met"
    {
#line 1872 "cplus.met"
        PPTREE _ptRes0=0;
#line 1872 "cplus.met"
        _ptRes0= MakeTree(DECLARATION, 3);
#line 1872 "cplus.met"
        retTree=_ptRes0;
#line 1872 "cplus.met"
    }
#line 1872 "cplus.met"
#line 1874 "cplus.met"
    {
#line 1874 "cplus.met"
        PPTREE _ptTree0=0;
#line 1874 "cplus.met"
        if ( (_ptTree0=NQUICK_CALL(_Tak(type_specifier)(error_free), 156, cplus))== (PPTREE) -1 ) {
#line 1874 "cplus.met"
            MulFreeTree(2,_ptTree0,retTree);
            PROG_EXIT(data_decl_sc_ty_decl_short_exit,"data_decl_sc_ty_decl_short")
#line 1874 "cplus.met"
        }
#line 1874 "cplus.met"
        ReplaceTree(retTree , 2 , _ptTree0);
#line 1874 "cplus.met"
    }
#line 1874 "cplus.met"
#line 1875 "cplus.met"
    {
#line 1875 "cplus.met"
        PPTREE _ptTree0=0;
#line 1875 "cplus.met"
        if ( (_ptTree0=NQUICK_CALL(_Tak(declarator_list_init)(error_free), 54, cplus))== (PPTREE) -1 ) {
#line 1875 "cplus.met"
            MulFreeTree(2,_ptTree0,retTree);
            PROG_EXIT(data_decl_sc_ty_decl_short_exit,"data_decl_sc_ty_decl_short")
#line 1875 "cplus.met"
        }
#line 1875 "cplus.met"
        ReplaceTree(retTree , 3 , _ptTree0);
#line 1875 "cplus.met"
    }
#line 1875 "cplus.met"
#line 1876 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 1876 "cplus.met"
    if (  !SEE_TOKEN( PVIR,";") || !(CommTerm(),1)) {
#line 1876 "cplus.met"
        MulFreeTree(1,retTree);
        TOKEN_EXIT(data_decl_sc_ty_decl_short_exit,";")
#line 1876 "cplus.met"
    } else {
#line 1876 "cplus.met"
        tokenAhead = 0 ;
#line 1876 "cplus.met"
    }
#line 1876 "cplus.met"
#line 1877 "cplus.met"
    {
#line 1877 "cplus.met"
        _retValue = retTree ;
#line 1877 "cplus.met"
        goto data_decl_sc_ty_decl_short_ret;
#line 1877 "cplus.met"
        
#line 1877 "cplus.met"
    }
#line 1877 "cplus.met"
#line 1877 "cplus.met"
#line 1877 "cplus.met"

#line 1878 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1878 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 1878 "cplus.met"
return((PPTREE) 0);
#line 1878 "cplus.met"

#line 1878 "cplus.met"
data_decl_sc_ty_decl_short_exit :
#line 1878 "cplus.met"

#line 1878 "cplus.met"
    _Debug = TRACE_RULE("data_decl_sc_ty_decl_short",TRACE_EXIT,(PPTREE)0);
#line 1878 "cplus.met"
    _funcLevel--;
#line 1878 "cplus.met"
    return((PPTREE) -1) ;
#line 1878 "cplus.met"

#line 1878 "cplus.met"
data_decl_sc_ty_decl_short_ret :
#line 1878 "cplus.met"
    
#line 1878 "cplus.met"
    _Debug = TRACE_RULE("data_decl_sc_ty_decl_short",TRACE_RETURN,_retValue);
#line 1878 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1878 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 1878 "cplus.met"
    return _retValue ;
#line 1878 "cplus.met"
}
#line 1878 "cplus.met"

#line 1878 "cplus.met"
#line 1847 "cplus.met"
PPTREE cplus::data_declaration ( int error_free)
#line 1847 "cplus.met"
{
#line 1847 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 1847 "cplus.met"
    int _value,_nbPre = 0 ;
#line 1847 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 1847 "cplus.met"
    int _Debug = TRACE_RULE("data_declaration",TRACE_ENTER,(PPTREE)0);
#line 1847 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 1847 "cplus.met"
#line 1847 "cplus.met"
    PPTREE retTree = (PPTREE) 0;
#line 1847 "cplus.met"
#line 1849 "cplus.met"
    if (! (NPUSH_CALL_AFF_VERIF(retTree = ,_Tak(data_decl_sc_decl), 39, cplus))){
#line 1849 "cplus.met"
#line 1850 "cplus.met"
        if ( (retTree=NQUICK_CALL(_Tak(data_declaration_strict)(error_free), 49, cplus))== (PPTREE) -1 ) {
#line 1850 "cplus.met"
            MulFreeTree(1,retTree);
            PROG_EXIT(data_declaration_exit,"data_declaration")
#line 1850 "cplus.met"
        }
#line 1850 "cplus.met"
    }
#line 1850 "cplus.met"
#line 1851 "cplus.met"
    {
#line 1851 "cplus.met"
        _retValue = retTree ;
#line 1851 "cplus.met"
        goto data_declaration_ret;
#line 1851 "cplus.met"
        
#line 1851 "cplus.met"
    }
#line 1851 "cplus.met"
#line 1851 "cplus.met"
#line 1851 "cplus.met"

#line 1852 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1852 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 1852 "cplus.met"
return((PPTREE) 0);
#line 1852 "cplus.met"

#line 1852 "cplus.met"
data_declaration_exit :
#line 1852 "cplus.met"

#line 1852 "cplus.met"
    _Debug = TRACE_RULE("data_declaration",TRACE_EXIT,(PPTREE)0);
#line 1852 "cplus.met"
    _funcLevel--;
#line 1852 "cplus.met"
    return((PPTREE) -1) ;
#line 1852 "cplus.met"

#line 1852 "cplus.met"
data_declaration_ret :
#line 1852 "cplus.met"
    
#line 1852 "cplus.met"
    _Debug = TRACE_RULE("data_declaration",TRACE_RETURN,_retValue);
#line 1852 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1852 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 1852 "cplus.met"
    return _retValue ;
#line 1852 "cplus.met"
}
#line 1852 "cplus.met"

#line 1852 "cplus.met"
#line 1921 "cplus.met"
PPTREE cplus::data_declaration_for ( int error_free)
#line 1921 "cplus.met"
{
#line 1921 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 1921 "cplus.met"
    int _value,_nbPre = 0 ;
#line 1921 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 1921 "cplus.met"
    int _Debug = TRACE_RULE("data_declaration_for",TRACE_ENTER,(PPTREE)0);
#line 1921 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 1921 "cplus.met"
#line 1921 "cplus.met"
    PPTREE retTree = (PPTREE) 0;
#line 1921 "cplus.met"
#line 1923 "cplus.met"
    if (! (NPUSH_CALL_AFF_VERIF(retTree = ,_Tak(data_declaration_for_full), 47, cplus))){
#line 1923 "cplus.met"
#line 1924 "cplus.met"
        if ( (retTree=NQUICK_CALL(_Tak(data_declaration_for_short)(error_free), 48, cplus))== (PPTREE) -1 ) {
#line 1924 "cplus.met"
            MulFreeTree(1,retTree);
            PROG_EXIT(data_declaration_for_exit,"data_declaration_for")
#line 1924 "cplus.met"
        }
#line 1924 "cplus.met"
    }
#line 1924 "cplus.met"
#line 1925 "cplus.met"
    {
#line 1925 "cplus.met"
        _retValue = retTree ;
#line 1925 "cplus.met"
        goto data_declaration_for_ret;
#line 1925 "cplus.met"
        
#line 1925 "cplus.met"
    }
#line 1925 "cplus.met"
#line 1925 "cplus.met"
#line 1925 "cplus.met"

#line 1926 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1926 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 1926 "cplus.met"
return((PPTREE) 0);
#line 1926 "cplus.met"

#line 1926 "cplus.met"
data_declaration_for_exit :
#line 1926 "cplus.met"

#line 1926 "cplus.met"
    _Debug = TRACE_RULE("data_declaration_for",TRACE_EXIT,(PPTREE)0);
#line 1926 "cplus.met"
    _funcLevel--;
#line 1926 "cplus.met"
    return((PPTREE) -1) ;
#line 1926 "cplus.met"

#line 1926 "cplus.met"
data_declaration_for_ret :
#line 1926 "cplus.met"
    
#line 1926 "cplus.met"
    _Debug = TRACE_RULE("data_declaration_for",TRACE_RETURN,_retValue);
#line 1926 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1926 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 1926 "cplus.met"
    return _retValue ;
#line 1926 "cplus.met"
}
#line 1926 "cplus.met"

#line 1926 "cplus.met"
#line 1904 "cplus.met"
PPTREE cplus::data_declaration_for_full ( int error_free)
#line 1904 "cplus.met"
{
#line 1904 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 1904 "cplus.met"
    int _value,_nbPre = 0 ;
#line 1904 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 1904 "cplus.met"
    int _Debug = TRACE_RULE("data_declaration_for_full",TRACE_ENTER,(PPTREE)0);
#line 1904 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 1904 "cplus.met"
#line 1904 "cplus.met"
    PPTREE retTree = (PPTREE) 0;
#line 1904 "cplus.met"
#line 1906 "cplus.met"
    {
#line 1906 "cplus.met"
        PPTREE _ptRes0=0;
#line 1906 "cplus.met"
        _ptRes0= MakeTree(FOR_DECLARATION, 3);
#line 1906 "cplus.met"
        retTree=_ptRes0;
#line 1906 "cplus.met"
    }
#line 1906 "cplus.met"
#line 1907 "cplus.met"
    {
#line 1907 "cplus.met"
        PPTREE _ptTree0=0;
#line 1907 "cplus.met"
        if ( (_ptTree0=NQUICK_CALL(_Tak(sc_specifier)(error_free), 134, cplus))== (PPTREE) -1 ) {
#line 1907 "cplus.met"
            MulFreeTree(2,_ptTree0,retTree);
            PROG_EXIT(data_declaration_for_full_exit,"data_declaration_for_full")
#line 1907 "cplus.met"
        }
#line 1907 "cplus.met"
        ReplaceTree(retTree , 1 , _ptTree0);
#line 1907 "cplus.met"
    }
#line 1907 "cplus.met"
#line 1908 "cplus.met"
    {
#line 1908 "cplus.met"
        PPTREE _ptTree0=0;
#line 1908 "cplus.met"
        if ( (_ptTree0=NQUICK_CALL(_Tak(type_specifier)(error_free), 156, cplus))== (PPTREE) -1 ) {
#line 1908 "cplus.met"
            MulFreeTree(2,_ptTree0,retTree);
            PROG_EXIT(data_declaration_for_full_exit,"data_declaration_for_full")
#line 1908 "cplus.met"
        }
#line 1908 "cplus.met"
        ReplaceTree(retTree , 2 , _ptTree0);
#line 1908 "cplus.met"
    }
#line 1908 "cplus.met"
#line 1909 "cplus.met"
    {
#line 1909 "cplus.met"
        PPTREE _ptTree0=0;
#line 1909 "cplus.met"
        if ( (_ptTree0=NQUICK_CALL(_Tak(declarator_list_init)(error_free), 54, cplus))== (PPTREE) -1 ) {
#line 1909 "cplus.met"
            MulFreeTree(2,_ptTree0,retTree);
            PROG_EXIT(data_declaration_for_full_exit,"data_declaration_for_full")
#line 1909 "cplus.met"
        }
#line 1909 "cplus.met"
        ReplaceTree(retTree , 3 , _ptTree0);
#line 1909 "cplus.met"
    }
#line 1909 "cplus.met"
#line 1910 "cplus.met"
    {
#line 1910 "cplus.met"
        _retValue = retTree ;
#line 1910 "cplus.met"
        goto data_declaration_for_full_ret;
#line 1910 "cplus.met"
        
#line 1910 "cplus.met"
    }
#line 1910 "cplus.met"
#line 1910 "cplus.met"
#line 1910 "cplus.met"

#line 1911 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1911 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 1911 "cplus.met"
return((PPTREE) 0);
#line 1911 "cplus.met"

#line 1911 "cplus.met"
data_declaration_for_full_exit :
#line 1911 "cplus.met"

#line 1911 "cplus.met"
    _Debug = TRACE_RULE("data_declaration_for_full",TRACE_EXIT,(PPTREE)0);
#line 1911 "cplus.met"
    _funcLevel--;
#line 1911 "cplus.met"
    return((PPTREE) -1) ;
#line 1911 "cplus.met"

#line 1911 "cplus.met"
data_declaration_for_full_ret :
#line 1911 "cplus.met"
    
#line 1911 "cplus.met"
    _Debug = TRACE_RULE("data_declaration_for_full",TRACE_RETURN,_retValue);
#line 1911 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1911 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 1911 "cplus.met"
    return _retValue ;
#line 1911 "cplus.met"
}
#line 1911 "cplus.met"

#line 1911 "cplus.met"
#line 1913 "cplus.met"
PPTREE cplus::data_declaration_for_short ( int error_free)
#line 1913 "cplus.met"
{
#line 1913 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 1913 "cplus.met"
    int _value,_nbPre = 0 ;
#line 1913 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 1913 "cplus.met"
    int _Debug = TRACE_RULE("data_declaration_for_short",TRACE_ENTER,(PPTREE)0);
#line 1913 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 1913 "cplus.met"
#line 1913 "cplus.met"
    PPTREE retTree = (PPTREE) 0;
#line 1913 "cplus.met"
#line 1915 "cplus.met"
    {
#line 1915 "cplus.met"
        PPTREE _ptRes0=0;
#line 1915 "cplus.met"
        _ptRes0= MakeTree(FOR_DECLARATION, 3);
#line 1915 "cplus.met"
        retTree=_ptRes0;
#line 1915 "cplus.met"
    }
#line 1915 "cplus.met"
#line 1916 "cplus.met"
    {
#line 1916 "cplus.met"
        PPTREE _ptTree0=0;
#line 1916 "cplus.met"
        if ( (_ptTree0=NQUICK_CALL(_Tak(type_specifier)(error_free), 156, cplus))== (PPTREE) -1 ) {
#line 1916 "cplus.met"
            MulFreeTree(2,_ptTree0,retTree);
            PROG_EXIT(data_declaration_for_short_exit,"data_declaration_for_short")
#line 1916 "cplus.met"
        }
#line 1916 "cplus.met"
        ReplaceTree(retTree , 2 , _ptTree0);
#line 1916 "cplus.met"
    }
#line 1916 "cplus.met"
#line 1917 "cplus.met"
    {
#line 1917 "cplus.met"
        PPTREE _ptTree0=0;
#line 1917 "cplus.met"
        if ( (_ptTree0=NQUICK_CALL(_Tak(declarator_list_init)(error_free), 54, cplus))== (PPTREE) -1 ) {
#line 1917 "cplus.met"
            MulFreeTree(2,_ptTree0,retTree);
            PROG_EXIT(data_declaration_for_short_exit,"data_declaration_for_short")
#line 1917 "cplus.met"
        }
#line 1917 "cplus.met"
        ReplaceTree(retTree , 3 , _ptTree0);
#line 1917 "cplus.met"
    }
#line 1917 "cplus.met"
#line 1918 "cplus.met"
    {
#line 1918 "cplus.met"
        _retValue = retTree ;
#line 1918 "cplus.met"
        goto data_declaration_for_short_ret;
#line 1918 "cplus.met"
        
#line 1918 "cplus.met"
    }
#line 1918 "cplus.met"
#line 1918 "cplus.met"
#line 1918 "cplus.met"

#line 1919 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1919 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 1919 "cplus.met"
return((PPTREE) 0);
#line 1919 "cplus.met"

#line 1919 "cplus.met"
data_declaration_for_short_exit :
#line 1919 "cplus.met"

#line 1919 "cplus.met"
    _Debug = TRACE_RULE("data_declaration_for_short",TRACE_EXIT,(PPTREE)0);
#line 1919 "cplus.met"
    _funcLevel--;
#line 1919 "cplus.met"
    return((PPTREE) -1) ;
#line 1919 "cplus.met"

#line 1919 "cplus.met"
data_declaration_for_short_ret :
#line 1919 "cplus.met"
    
#line 1919 "cplus.met"
    _Debug = TRACE_RULE("data_declaration_for_short",TRACE_RETURN,_retValue);
#line 1919 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1919 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 1919 "cplus.met"
    return _retValue ;
#line 1919 "cplus.met"
}
#line 1919 "cplus.met"

#line 1919 "cplus.met"
#line 1896 "cplus.met"
PPTREE cplus::data_declaration_strict ( int error_free)
#line 1896 "cplus.met"
{
#line 1896 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 1896 "cplus.met"
    int _value,_nbPre = 0 ;
#line 1896 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 1896 "cplus.met"
    int _Debug = TRACE_RULE("data_declaration_strict",TRACE_ENTER,(PPTREE)0);
#line 1896 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 1896 "cplus.met"
#line 1896 "cplus.met"
    PPTREE retTree = (PPTREE) 0;
#line 1896 "cplus.met"
#line 1898 "cplus.met"
    if (! (NPUSH_CALL_AFF_VERIF(retTree = ,_Tak(data_decl_sc_ty_decl), 42, cplus))){
#line 1898 "cplus.met"
#line 1899 "cplus.met"
        if ( (retTree=NQUICK_CALL(_Tak(data_decl_exotic)(error_free), 38, cplus))== (PPTREE) -1 ) {
#line 1899 "cplus.met"
            MulFreeTree(1,retTree);
            PROG_EXIT(data_declaration_strict_exit,"data_declaration_strict")
#line 1899 "cplus.met"
        }
#line 1899 "cplus.met"
    }
#line 1899 "cplus.met"
#line 1900 "cplus.met"
    {
#line 1900 "cplus.met"
        _retValue = retTree ;
#line 1900 "cplus.met"
        goto data_declaration_strict_ret;
#line 1900 "cplus.met"
        
#line 1900 "cplus.met"
    }
#line 1900 "cplus.met"
#line 1900 "cplus.met"
#line 1900 "cplus.met"

#line 1901 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1901 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 1901 "cplus.met"
return((PPTREE) 0);
#line 1901 "cplus.met"

#line 1901 "cplus.met"
data_declaration_strict_exit :
#line 1901 "cplus.met"

#line 1901 "cplus.met"
    _Debug = TRACE_RULE("data_declaration_strict",TRACE_EXIT,(PPTREE)0);
#line 1901 "cplus.met"
    _funcLevel--;
#line 1901 "cplus.met"
    return((PPTREE) -1) ;
#line 1901 "cplus.met"

#line 1901 "cplus.met"
data_declaration_strict_ret :
#line 1901 "cplus.met"
    
#line 1901 "cplus.met"
    _Debug = TRACE_RULE("data_declaration_strict",TRACE_RETURN,_retValue);
#line 1901 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1901 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 1901 "cplus.met"
    return _retValue ;
#line 1901 "cplus.met"
}
#line 1901 "cplus.met"

#line 1901 "cplus.met"
#line 3191 "cplus.met"
PPTREE cplus::deallocation_expression ( int error_free)
#line 3191 "cplus.met"
{
#line 3191 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 3191 "cplus.met"
    int _value,_nbPre = 0 ;
#line 3191 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 3191 "cplus.met"
    int _Debug = TRACE_RULE("deallocation_expression",TRACE_ENTER,(PPTREE)0);
#line 3191 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 3191 "cplus.met"
#line 3191 "cplus.met"
    PPTREE retTree = (PPTREE) 0,expr = (PPTREE) 0,nullTree = (PPTREE) 0;
#line 3191 "cplus.met"
#line 3193 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3193 "cplus.met"
    if (  !SEE_TOKEN( DELETE,"delete") || !(CommTerm(),1)) {
#line 3193 "cplus.met"
        MulFreeTree(3,expr,nullTree,retTree);
        TOKEN_EXIT(deallocation_expression_exit,"delete")
#line 3193 "cplus.met"
    } else {
#line 3193 "cplus.met"
        tokenAhead = 0 ;
#line 3193 "cplus.met"
    }
#line 3193 "cplus.met"
#line 3194 "cplus.met"
    {
#line 3194 "cplus.met"
        PPTREE _ptRes0=0;
#line 3194 "cplus.met"
        _ptRes0= MakeTree(DELETE, 2);
#line 3194 "cplus.met"
        retTree=_ptRes0;
#line 3194 "cplus.met"
    }
#line 3194 "cplus.met"
#line 3195 "cplus.met"
    if ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN(COUV,"[") && (tokenAhead = 0,CommTerm(),1)){
#line 3195 "cplus.met"
#line 3196 "cplus.met"
#line 3199 "cplus.met"
        if (! (NPUSH_CALL_AFF_VERIF(expr = ,_Tak(expression), 67, cplus))){
#line 3199 "cplus.met"
#line 3201 "cplus.met"
            expr = nullTree ;
#line 3201 "cplus.met"
#line 3201 "cplus.met"
        }
#line 3201 "cplus.met"
#line 3202 "cplus.met"
        (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3202 "cplus.met"
        if (  !SEE_TOKEN( CFER,"]") || !(CommTerm(),1)) {
#line 3202 "cplus.met"
            MulFreeTree(3,expr,nullTree,retTree);
            TOKEN_EXIT(deallocation_expression_exit,"]")
#line 3202 "cplus.met"
        } else {
#line 3202 "cplus.met"
            tokenAhead = 0 ;
#line 3202 "cplus.met"
        }
#line 3202 "cplus.met"
#line 3203 "cplus.met"
        {
#line 3203 "cplus.met"
            PPTREE _ptTree0=0;
#line 3203 "cplus.met"
            {
#line 3203 "cplus.met"
                PPTREE _ptRes1=0;
#line 3203 "cplus.met"
                _ptRes1= MakeTree(TYP_ARRAY, 2);
#line 3203 "cplus.met"
                ReplaceTree(_ptRes1, 2, expr );
#line 3203 "cplus.met"
                _ptTree0=_ptRes1;
#line 3203 "cplus.met"
            }
#line 3203 "cplus.met"
            ReplaceTree(retTree , 1 , _ptTree0);
#line 3203 "cplus.met"
        }
#line 3203 "cplus.met"
#line 3203 "cplus.met"
#line 3203 "cplus.met"
    }
#line 3203 "cplus.met"
#line 3205 "cplus.met"
    {
#line 3205 "cplus.met"
        PPTREE _ptTree0=0;
#line 3205 "cplus.met"
        {
#line 3205 "cplus.met"
            PPTREE _ptTree1=0;
#line 3205 "cplus.met"
            if ( (_ptTree1=NQUICK_CALL(_Tak(cast_expression)(error_free), 26, cplus))== (PPTREE) -1 ) {
#line 3205 "cplus.met"
                MulFreeTree(5,_ptTree1,_ptTree0,expr,nullTree,retTree);
                PROG_EXIT(deallocation_expression_exit,"deallocation_expression")
#line 3205 "cplus.met"
            }
#line 3205 "cplus.met"
            _ptTree0=ReplaceTree(retTree , 2 , _ptTree1);
#line 3205 "cplus.met"
        }
#line 3205 "cplus.met"
        _retValue =_ptTree0;
#line 3205 "cplus.met"
        goto deallocation_expression_ret;
#line 3205 "cplus.met"
    }
#line 3205 "cplus.met"
#line 3205 "cplus.met"
#line 3205 "cplus.met"

#line 3206 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 3206 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 3206 "cplus.met"
return((PPTREE) 0);
#line 3206 "cplus.met"

#line 3206 "cplus.met"
deallocation_expression_exit :
#line 3206 "cplus.met"

#line 3206 "cplus.met"
    _Debug = TRACE_RULE("deallocation_expression",TRACE_EXIT,(PPTREE)0);
#line 3206 "cplus.met"
    _funcLevel--;
#line 3206 "cplus.met"
    return((PPTREE) -1) ;
#line 3206 "cplus.met"

#line 3206 "cplus.met"
deallocation_expression_ret :
#line 3206 "cplus.met"
    
#line 3206 "cplus.met"
    _Debug = TRACE_RULE("deallocation_expression",TRACE_RETURN,_retValue);
#line 3206 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 3206 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 3206 "cplus.met"
    return _retValue ;
#line 3206 "cplus.met"
}
#line 3206 "cplus.met"

#line 3206 "cplus.met"
#line 2532 "cplus.met"
PPTREE cplus::declarator ( int error_free)
#line 2532 "cplus.met"
{
#line 2532 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 2532 "cplus.met"
    int _value,_nbPre = 0 ;
#line 2532 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 2532 "cplus.met"
    int _Debug = TRACE_RULE("declarator",TRACE_ENTER,(PPTREE)0);
#line 2532 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 2532 "cplus.met"
#line 2532 "cplus.met"
    PPTREE retTree = (PPTREE) 0,valTree = (PPTREE) 0;
#line 2532 "cplus.met"
#line 2534 "cplus.met"
    if (NPUSH_CALL_AFF_VERIF(valTree = ,_Tak(range_modifier), 129, cplus)){
#line 2534 "cplus.met"
#line 2535 "cplus.met"
        {
#line 2535 "cplus.met"
            PPTREE _ptTree0=0;
#line 2535 "cplus.met"
            {
#line 2535 "cplus.met"
                PPTREE _ptTree1=0;
#line 2535 "cplus.met"
                if ( (_ptTree1=NQUICK_CALL(_Tak(declarator)(error_free), 51, cplus))== (PPTREE) -1 ) {
#line 2535 "cplus.met"
                    MulFreeTree(4,_ptTree1,_ptTree0,retTree,valTree);
                    PROG_EXIT(declarator_exit,"declarator")
#line 2535 "cplus.met"
                }
#line 2535 "cplus.met"
                _ptTree0=ReplaceTree(valTree , 2 , _ptTree1);
#line 2535 "cplus.met"
            }
#line 2535 "cplus.met"
            _retValue =_ptTree0;
#line 2535 "cplus.met"
            goto declarator_ret;
#line 2535 "cplus.met"
        }
#line 2535 "cplus.met"
    } else {
#line 2535 "cplus.met"
#line 2537 "cplus.met"
        (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 2537 "cplus.met"
        switch( lexEl.Value) {
#line 2537 "cplus.met"
#line 2538 "cplus.met"
            case ETOI : 
#line 2538 "cplus.met"
                tokenAhead = 0 ;
#line 2538 "cplus.met"
                CommTerm();
#line 2538 "cplus.met"
#line 2538 "cplus.met"
                {
#line 2538 "cplus.met"
                    PPTREE _ptTree0=0;
#line 2538 "cplus.met"
                    {
#line 2538 "cplus.met"
                        PPTREE _ptTree1=0,_ptRes1=0;
#line 2538 "cplus.met"
                        _ptRes1= MakeTree(TYP_ADDR, 1);
#line 2538 "cplus.met"
                        if ( (_ptTree1=NQUICK_CALL(_Tak(declarator)(error_free), 51, cplus))== (PPTREE) -1 ) {
#line 2538 "cplus.met"
                            MulFreeTree(5,_ptRes1,_ptTree1,_ptTree0,retTree,valTree);
                            PROG_EXIT(declarator_exit,"declarator")
#line 2538 "cplus.met"
                        }
#line 2538 "cplus.met"
                        ReplaceTree(_ptRes1, 1, _ptTree1);
#line 2538 "cplus.met"
                        _ptTree0=_ptRes1;
#line 2538 "cplus.met"
                    }
#line 2538 "cplus.met"
                    _retValue =_ptTree0;
#line 2538 "cplus.met"
                    goto declarator_ret;
#line 2538 "cplus.met"
                }
#line 2538 "cplus.met"
                break;
#line 2538 "cplus.met"
#line 2539 "cplus.met"
            case ETCO : 
#line 2539 "cplus.met"
                tokenAhead = 0 ;
#line 2539 "cplus.met"
                CommTerm();
#line 2539 "cplus.met"
#line 2539 "cplus.met"
                {
#line 2539 "cplus.met"
                    PPTREE _ptTree0=0;
#line 2539 "cplus.met"
                    {
#line 2539 "cplus.met"
                        PPTREE _ptTree1=0,_ptRes1=0;
#line 2539 "cplus.met"
                        _ptRes1= MakeTree(TYP_REF, 1);
#line 2539 "cplus.met"
                        if ( (_ptTree1=NQUICK_CALL(_Tak(declarator)(error_free), 51, cplus))== (PPTREE) -1 ) {
#line 2539 "cplus.met"
                            MulFreeTree(5,_ptRes1,_ptTree1,_ptTree0,retTree,valTree);
                            PROG_EXIT(declarator_exit,"declarator")
#line 2539 "cplus.met"
                        }
#line 2539 "cplus.met"
                        ReplaceTree(_ptRes1, 1, _ptTree1);
#line 2539 "cplus.met"
                        _ptTree0=_ptRes1;
#line 2539 "cplus.met"
                    }
#line 2539 "cplus.met"
                    _retValue =_ptTree0;
#line 2539 "cplus.met"
                    goto declarator_ret;
#line 2539 "cplus.met"
                }
#line 2539 "cplus.met"
                break;
#line 2539 "cplus.met"
#line 2540 "cplus.met"
            case ETCOETCO : 
#line 2540 "cplus.met"
                tokenAhead = 0 ;
#line 2540 "cplus.met"
                CommTerm();
#line 2540 "cplus.met"
#line 2540 "cplus.met"
                {
#line 2540 "cplus.met"
                    PPTREE _ptTree0=0;
#line 2540 "cplus.met"
                    {
#line 2540 "cplus.met"
                        PPTREE _ptTree1=0,_ptRes1=0;
#line 2540 "cplus.met"
                        _ptRes1= MakeTree(TYP_MOV, 1);
#line 2540 "cplus.met"
                        if ( (_ptTree1=NQUICK_CALL(_Tak(declarator)(error_free), 51, cplus))== (PPTREE) -1 ) {
#line 2540 "cplus.met"
                            MulFreeTree(5,_ptRes1,_ptTree1,_ptTree0,retTree,valTree);
                            PROG_EXIT(declarator_exit,"declarator")
#line 2540 "cplus.met"
                        }
#line 2540 "cplus.met"
                        ReplaceTree(_ptRes1, 1, _ptTree1);
#line 2540 "cplus.met"
                        _ptTree0=_ptRes1;
#line 2540 "cplus.met"
                    }
#line 2540 "cplus.met"
                    _retValue =_ptTree0;
#line 2540 "cplus.met"
                    goto declarator_ret;
#line 2540 "cplus.met"
                }
#line 2540 "cplus.met"
                break;
#line 2540 "cplus.met"
#line 2541 "cplus.met"
            case POINPOINPOIN : 
#line 2541 "cplus.met"
                tokenAhead = 0 ;
#line 2541 "cplus.met"
                CommTerm();
#line 2541 "cplus.met"
#line 2541 "cplus.met"
                {
#line 2541 "cplus.met"
                    PPTREE _ptTree0=0;
#line 2541 "cplus.met"
                    {
#line 2541 "cplus.met"
                        PPTREE _ptTree1=0,_ptRes1=0;
#line 2541 "cplus.met"
                        _ptRes1= MakeTree(TYP_VARIADIC, 1);
#line 2541 "cplus.met"
                        if ( (_ptTree1=NQUICK_CALL(_Tak(declarator)(error_free), 51, cplus))== (PPTREE) -1 ) {
#line 2541 "cplus.met"
                            MulFreeTree(5,_ptRes1,_ptTree1,_ptTree0,retTree,valTree);
                            PROG_EXIT(declarator_exit,"declarator")
#line 2541 "cplus.met"
                        }
#line 2541 "cplus.met"
                        ReplaceTree(_ptRes1, 1, _ptTree1);
#line 2541 "cplus.met"
                        _ptTree0=_ptRes1;
#line 2541 "cplus.met"
                    }
#line 2541 "cplus.met"
                    _retValue =_ptTree0;
#line 2541 "cplus.met"
                    goto declarator_ret;
#line 2541 "cplus.met"
                }
#line 2541 "cplus.met"
                break;
#line 2541 "cplus.met"
#line 2542 "cplus.met"
            case TILD : 
#line 2542 "cplus.met"
                tokenAhead = 0 ;
#line 2542 "cplus.met"
                CommTerm();
#line 2542 "cplus.met"
#line 2542 "cplus.met"
                {
#line 2542 "cplus.met"
                    PPTREE _ptTree0=0;
#line 2542 "cplus.met"
                    {
#line 2542 "cplus.met"
                        PPTREE _ptTree1=0,_ptRes1=0;
#line 2542 "cplus.met"
                        _ptRes1= MakeTree(DESTRUCT, 1);
#line 2542 "cplus.met"
                        if ( (_ptTree1=NQUICK_CALL(_Tak(declarator)(error_free), 51, cplus))== (PPTREE) -1 ) {
#line 2542 "cplus.met"
                            MulFreeTree(5,_ptRes1,_ptTree1,_ptTree0,retTree,valTree);
                            PROG_EXIT(declarator_exit,"declarator")
#line 2542 "cplus.met"
                        }
#line 2542 "cplus.met"
                        ReplaceTree(_ptRes1, 1, _ptTree1);
#line 2542 "cplus.met"
                        _ptTree0=_ptRes1;
#line 2542 "cplus.met"
                    }
#line 2542 "cplus.met"
                    _retValue =_ptTree0;
#line 2542 "cplus.met"
                    goto declarator_ret;
#line 2542 "cplus.met"
                }
#line 2542 "cplus.met"
                break;
#line 2542 "cplus.met"
#line 2545 "cplus.met"
            case POUV : 
#line 2545 "cplus.met"
                tokenAhead = 0 ;
#line 2545 "cplus.met"
                CommTerm();
#line 2545 "cplus.met"
#line 2544 "cplus.met"
#line 2545 "cplus.met"
                {
#line 2545 "cplus.met"
                    PPTREE _ptTree0=0,_ptRes0=0;
#line 2545 "cplus.met"
                    _ptRes0= MakeTree(TYP, 1);
#line 2545 "cplus.met"
                    if ( (_ptTree0=NQUICK_CALL(_Tak(declarator)(error_free), 51, cplus))== (PPTREE) -1 ) {
#line 2545 "cplus.met"
                        MulFreeTree(4,_ptRes0,_ptTree0,retTree,valTree);
                        PROG_EXIT(declarator_exit,"declarator")
#line 2545 "cplus.met"
                    }
#line 2545 "cplus.met"
                    ReplaceTree(_ptRes0, 1, _ptTree0);
#line 2545 "cplus.met"
                    retTree=_ptRes0;
#line 2545 "cplus.met"
                }
#line 2545 "cplus.met"
#line 2546 "cplus.met"
                (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 2546 "cplus.met"
                if (  !SEE_TOKEN( PFER,")") || !(CommTerm(),1)) {
#line 2546 "cplus.met"
                    MulFreeTree(2,retTree,valTree);
                    TOKEN_EXIT(declarator_exit,")")
#line 2546 "cplus.met"
                } else {
#line 2546 "cplus.met"
                    tokenAhead = 0 ;
#line 2546 "cplus.met"
                }
#line 2546 "cplus.met"
#line 2547 "cplus.met"
                if (NPUSH_CALL_AFF_VERIF(valTree = ,_Tak(declarator_follow), 52, cplus)){
#line 2547 "cplus.met"
#line 2548 "cplus.met"
                                            { PPTREE theTree ;
#line 2548 "cplus.met"
                                              theTree = valTree ;
#line 2548 "cplus.met"
                                              if (theTree) {
#line 2548 "cplus.met"
                                                  while (SonTree(theTree,1))
#line 2548 "cplus.met"
                                               if (NumberTree(theTree)
#line 2548 "cplus.met"
                                            	   != RANGE_MODIFIER)
#line 2548 "cplus.met"
                                                   theTree = SonTree(theTree,1);
#line 2548 "cplus.met"
                                               else
#line 2548 "cplus.met"
                                                   theTree = SonTree(theTree,2);
#line 2548 "cplus.met"
                                                  ReplaceTree(theTree,1,retTree);
#line 2548 "cplus.met"
                                                  /* modif portage sun */
#line 2548 "cplus.met"
                                                  retTree = valTree;
#line 2548 "cplus.met"
                                              }
#line 2548 "cplus.met"
                                                 }
#line 2548 "cplus.met"
                                        
#line 2548 "cplus.met"
                }
#line 2548 "cplus.met"
#line 2548 "cplus.met"
                break;
#line 2548 "cplus.met"
#line 2565 "cplus.met"
            case META : 
#line 2565 "cplus.met"
            case IDENT : 
#line 2565 "cplus.met"
#line 2566 "cplus.met"
#line 2567 "cplus.met"
                if ( (retTree=NQUICK_CALL(_Tak(qualified_name)(error_free), 124, cplus))== (PPTREE) -1 ) {
#line 2567 "cplus.met"
                    MulFreeTree(2,retTree,valTree);
                    PROG_EXIT(declarator_exit,"declarator")
#line 2567 "cplus.met"
                }
#line 2567 "cplus.met"
#line 2568 "cplus.met"
                if (((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN(DPOIDPOI,"::") && (tokenAhead = 0,CommTerm(),1)) && 
#line 2568 "cplus.met"
                   ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN(ETOI,"*") && (tokenAhead = 0,CommTerm(),1))){
#line 2568 "cplus.met"
#line 2569 "cplus.met"
                    {
#line 2569 "cplus.met"
                        PPTREE _ptTree0=0;
#line 2569 "cplus.met"
                        {
#line 2569 "cplus.met"
                            PPTREE _ptTree1=0,_ptRes1=0;
#line 2569 "cplus.met"
                            _ptRes1= MakeTree(MEMBER_DECLARATOR, 2);
#line 2569 "cplus.met"
                            ReplaceTree(_ptRes1, 1, retTree );
#line 2569 "cplus.met"
                            if ( (_ptTree1=NQUICK_CALL(_Tak(declarator)(error_free), 51, cplus))== (PPTREE) -1 ) {
#line 2569 "cplus.met"
                                MulFreeTree(5,_ptRes1,_ptTree1,_ptTree0,retTree,valTree);
                                PROG_EXIT(declarator_exit,"declarator")
#line 2569 "cplus.met"
                            }
#line 2569 "cplus.met"
                            ReplaceTree(_ptRes1, 2, _ptTree1);
#line 2569 "cplus.met"
                            _ptTree0=_ptRes1;
#line 2569 "cplus.met"
                        }
#line 2569 "cplus.met"
                        _retValue =_ptTree0;
#line 2569 "cplus.met"
                        goto declarator_ret;
#line 2569 "cplus.met"
                    }
#line 2569 "cplus.met"
                }
#line 2569 "cplus.met"
#line 2570 "cplus.met"
                if (NPUSH_CALL_AFF_VERIF(valTree = ,_Tak(declarator_follow), 52, cplus)){
#line 2570 "cplus.met"
#line 2571 "cplus.met"
                                            { PPTREE theTree ;
#line 2571 "cplus.met"
                                              theTree = valTree ;
#line 2571 "cplus.met"
                                              if (theTree) {
#line 2571 "cplus.met"
                                                  while (SonTree(theTree,1))
#line 2571 "cplus.met"
                                               if (NumberTree(theTree)
#line 2571 "cplus.met"
                                            	   != RANGE_MODIFIER)
#line 2571 "cplus.met"
                                                   theTree = SonTree(theTree,1);
#line 2571 "cplus.met"
                                               else
#line 2571 "cplus.met"
                                                   theTree = SonTree(theTree,2);
#line 2571 "cplus.met"
                                                  ReplaceTree(theTree,1,retTree);
#line 2571 "cplus.met"
                                                  /* modif portage sun */
#line 2571 "cplus.met"
                                                  retTree = valTree;
#line 2571 "cplus.met"
                                              }
#line 2571 "cplus.met"
                                                 }
#line 2571 "cplus.met"
                                        
#line 2571 "cplus.met"
                }
#line 2571 "cplus.met"
#line 2571 "cplus.met"
                break;
#line 2571 "cplus.met"
#line 2588 "cplus.met"
            case OPERATOR : 
#line 2588 "cplus.met"
#line 2589 "cplus.met"
#line 2590 "cplus.met"
                if ( (retTree=NQUICK_CALL(_Tak(operator_function_name)(error_free), 111, cplus))== (PPTREE) -1 ) {
#line 2590 "cplus.met"
                    MulFreeTree(2,retTree,valTree);
                    PROG_EXIT(declarator_exit,"declarator")
#line 2590 "cplus.met"
                }
#line 2590 "cplus.met"
#line 2591 "cplus.met"
                if (NPUSH_CALL_AFF_VERIF(valTree = ,_Tak(declarator_follow), 52, cplus)){
#line 2591 "cplus.met"
#line 2592 "cplus.met"
                                            { PPTREE theTree ;
#line 2592 "cplus.met"
                                              theTree = valTree ;
#line 2592 "cplus.met"
                                              if (theTree) {
#line 2592 "cplus.met"
                                                  while (SonTree(theTree,1))
#line 2592 "cplus.met"
                                               if (NumberTree(theTree)
#line 2592 "cplus.met"
                                            	   != RANGE_MODIFIER)
#line 2592 "cplus.met"
                                                   theTree = SonTree(theTree,1);
#line 2592 "cplus.met"
                                               else
#line 2592 "cplus.met"
                                                   theTree = SonTree(theTree,2);
#line 2592 "cplus.met"
                                                  ReplaceTree(theTree,1,retTree);
#line 2592 "cplus.met"
                                                  /* modif portage sun */
#line 2592 "cplus.met"
                                                  retTree = valTree;
#line 2592 "cplus.met"
                                              }
#line 2592 "cplus.met"
                                                 }
#line 2592 "cplus.met"
                                        
#line 2592 "cplus.met"
                }
#line 2592 "cplus.met"
#line 2592 "cplus.met"
                break;
#line 2592 "cplus.met"
            default :
#line 2592 "cplus.met"
                MulFreeTree(2,retTree,valTree);
                CASE_EXIT(declarator_exit,"either * or & or && or ... or ~ or ( or IDENT or operator")
#line 2592 "cplus.met"
                break;
#line 2592 "cplus.met"
        }
#line 2592 "cplus.met"
    }
#line 2592 "cplus.met"
#line 2610 "cplus.met"
    {
#line 2610 "cplus.met"
        _retValue = retTree ;
#line 2610 "cplus.met"
        goto declarator_ret;
#line 2610 "cplus.met"
        
#line 2610 "cplus.met"
    }
#line 2610 "cplus.met"
#line 2610 "cplus.met"
#line 2610 "cplus.met"

#line 2611 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2611 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 2611 "cplus.met"
return((PPTREE) 0);
#line 2611 "cplus.met"

#line 2611 "cplus.met"
declarator_exit :
#line 2611 "cplus.met"

#line 2611 "cplus.met"
    _Debug = TRACE_RULE("declarator",TRACE_EXIT,(PPTREE)0);
#line 2611 "cplus.met"
    _funcLevel--;
#line 2611 "cplus.met"
    return((PPTREE) -1) ;
#line 2611 "cplus.met"

#line 2611 "cplus.met"
declarator_ret :
#line 2611 "cplus.met"
    
#line 2611 "cplus.met"
    _Debug = TRACE_RULE("declarator",TRACE_RETURN,_retValue);
#line 2611 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2611 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 2611 "cplus.met"
    return _retValue ;
#line 2611 "cplus.met"
}
#line 2611 "cplus.met"

#line 2611 "cplus.met"
