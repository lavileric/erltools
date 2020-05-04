/*************************************************************************/
/*                                                                       */
/*        Produced by MetaGen version 2.0  -    1989-2006                 */
/*       Syntaxic Analyzer Meta Generator developped by                  */
/*                  Eric Lavillonniere                                   */
/*                                                                       */
/*************************************************************************/
#include "token.h"
#include "cplus.h"

PPTREE cplus::directive ( int error_free )
{
    int             _oldkeepCarriage = keepCarriage ;
    int             _oldkeepAll = keepAll ;
    PFILE_POSITION  _filePosition = (PFILE_POSITION)0 ;
    int             _value, _nbPre = 0 ;
    PCOMM_ELEM      _ptPreComm = ((tokenAhead || (LexComment(), tokenAhead =  -1, TRACE_LEX(1))), listComm ? LookComm(&_nbPre) : (_funcLevel++, (PCOMM_ELEM)0));
    int             _Debug = TRACE_RULE("directive", TRACE_ENTER, (PPTREE)0);
    PPTREE          lastTree = _lastTree, _retValue ;
    PPTREE          _addlist1 = (PPTREE)0, _addlist2 = (PPTREE)0, _addlist3 = (PPTREE)0 ;
    PPTREE          retTree = (PPTREE)0, interTree = (PPTREE)0, list = (PPTREE)0, exp = (PPTREE)0 ;
    
    (tokenAhead == 1 || (Lex(), TRACE_LEX(1)));
    switch ( lexEl.Value ) {
        case META : 
        case DEFINE_DIR : 
            {
                PPTREE  _ptTree0 = 0 ;
                if ( (_ptTree0 = NQUICK_CALL(_Tak(define_dir)(error_free), 51, cplus)) == (PPTREE) -1 ) {
                    MulFreeTree(8, _ptTree0, _addlist1, _addlist2, _addlist3, exp, interTree, list, retTree);
                    PROG_EXIT(directive_exit, "directive");
                }
                _retValue =  _ptTree0 ;
                goto directive_ret ;
            }
            break ;
        case INCLUDE_DIR : 
            {
                PPTREE  _ptTree0 = 0 ;
                if ( (_ptTree0 = NQUICK_CALL(_Tak(include_dir)(error_free), 79, cplus)) == (PPTREE) -1 ) {
                    MulFreeTree(8, _ptTree0, _addlist1, _addlist2, _addlist3, exp, interTree, list, retTree);
                    PROG_EXIT(directive_exit, "directive");
                }
                _retValue =  _ptTree0 ;
                goto directive_ret ;
            }
            break ;
        case LINE_DIR : 
            tokenAhead = 0 ;
            CommTerm();
            {
                keepCarriage =  1 ;
                {
                    PPTREE  _ptTree0 = 0, _ptRes0 = 0 ;
                    _ptRes0 =  MakeTree(LINE_DIR, 2);
                    if ( (_ptTree0 = NQUICK_CALL(_Tak(expression)(error_free), 62, cplus)) == (PPTREE) -1 ) {
                        MulFreeTree(9, _ptRes0, _ptTree0, _addlist1, _addlist2, _addlist3, exp, interTree, list, retTree);
                        PROG_EXIT(directive_exit, "directive");
                    }
                    ReplaceTree(_ptRes0, 1, _ptTree0);
                    retTree =  _ptRes0 ;
                }
                if ( (tokenAhead == 1 || (Lex(), TRACE_LEX(1))) && TERM_OR_META(STRING, "STRING") && !(tokenAhead = 0) && BUILD_TERM_META(interTree) ) {
                    {
                        PPTREE  _ptTree0 = 0 ;
                        {
                            PPTREE  _ptRes1 = 0 ;
                            _ptRes1 =  MakeTree(STRING, 1);
                            ReplaceTree(_ptRes1, 1, interTree);
                            _ptTree0 =  _ptRes1 ;
                        }
                        ReplaceTree(retTree, 2, _ptTree0);
                    }
                }
                (tokenAhead == 1 || (Lex(), TRACE_LEX(1)));
                if ( !TERM_OR_META(CARRIAGE_RETURN, "CARRIAGE_RETURN") || !(CommTerm(), 1) ) {
                    MulFreeTree(7, _addlist1, _addlist2, _addlist3, exp, interTree, list, retTree);
                    TOKEN_EXIT(directive_exit, "CARRIAGE_RETURN");
                } else {
                    tokenAhead =  0 ;
                }
                keepCarriage =  _oldkeepCarriage ;
            }
            {
                _retValue =  retTree ;
                goto directive_ret ;
            }
            break ;
        case LINE_REFERENCE_DIR : 
            tokenAhead = 0 ;
            CommTerm();
            {
                keepCarriage =  1 ;
                {
                    PPTREE  _ptTree0 = 0, _ptRes0 = 0 ;
                    _ptRes0 =  MakeTree(LINE_REFERENCE_DIR, 3);
                    if ( (_ptTree0 = NQUICK_CALL(_Tak(expression)(error_free), 62, cplus)) == (PPTREE) -1 ) {
                        MulFreeTree(9, _ptRes0, _ptTree0, _addlist1, _addlist2, _addlist3, exp, interTree, list, retTree);
                        PROG_EXIT(directive_exit, "directive");
                    }
                    ReplaceTree(_ptRes0, 1, _ptTree0);
                    retTree =  _ptRes0 ;
                }
                if ( (tokenAhead == 1 || (Lex(), TRACE_LEX(1))) && TERM_OR_META(STRING, "STRING") && !(tokenAhead = 0) && BUILD_TERM_META(interTree) ) {
                    {
                        PPTREE  _ptTree0 = 0 ;
                        {
                            PPTREE  _ptRes1 = 0 ;
                            _ptRes1 =  MakeTree(STRING, 1);
                            ReplaceTree(_ptRes1, 1, interTree);
                            _ptTree0 =  _ptRes1 ;
                        }
                        ReplaceTree(retTree, 2, _ptTree0);
                    }
                }
                _addlist1 =  list ;
                while ( NPUSH_CALL_AFF_VERIF(exp = , _Tak(expression), 62, cplus) ) {
                    _addlist1 =  AddList(_addlist1, exp);
                    if ( list ) {
                        _addlist1 =  SonTree(_addlist1, 2);
                    } else {
                        list =  _addlist1 ;
                    }
                }
                ReplaceTree(retTree, 3, list);
                (tokenAhead == 1 || (Lex(), TRACE_LEX(1)));
                if ( !TERM_OR_META(CARRIAGE_RETURN, "CARRIAGE_RETURN") || !(CommTerm(), 1) ) {
                    MulFreeTree(7, _addlist1, _addlist2, _addlist3, exp, interTree, list, retTree);
                    TOKEN_EXIT(directive_exit, "CARRIAGE_RETURN");
                } else {
                    tokenAhead =  0 ;
                }
                keepCarriage =  _oldkeepCarriage ;
            }
            {
                _retValue =  retTree ;
                goto directive_ret ;
            }
            break ;
        case UNDEF_DIR : 
            tokenAhead = 0 ;
            CommTerm();
            {
                PPTREE  _ptTree0 = 0 ;
                {
                    PPTREE  _ptTree1 = 0, _ptRes1 = 0 ;
                    _ptRes1 =  MakeTree(UNDEF, 1);
                    (tokenAhead == 10 || (LexUndef(), TRACE_LEX(1)));
                    if ( !TERM_OR_META(UNDEF_CONTENT, "UNDEF_CONTENT") || !BUILD_TERM_META(_ptTree1) ) {
                        MulFreeTree(10, _ptRes1, _ptTree1, _ptTree0, _addlist1, _addlist2, _addlist3, exp, interTree, list, retTree);
                        TOKEN_EXIT(directive_exit, "UNDEF_CONTENT");
                    } else {
                        tokenAhead =  0 ;
                    }
                    ReplaceTree(_ptRes1, 1, _ptTree1);
                    _ptTree0 =  _ptRes1 ;
                }
                _retValue =  _ptTree0 ;
                goto directive_ret ;
            }
            break ;
        case ERROR_DIR : 
            tokenAhead = 0 ;
            CommTerm();
            {
                PPTREE  _ptTree0 = 0 ;
                {
                    PPTREE  _ptTree1 = 0, _ptRes1 = 0 ;
                    _ptRes1 =  MakeTree(ERROR, 1);
                    (tokenAhead == 5 || (LexEndLine(), TRACE_LEX(1)));
                    if ( !TERM_OR_META(END_LINE, "END_LINE") || !BUILD_TERM_META(_ptTree1) ) {
                        MulFreeTree(10, _ptRes1, _ptTree1, _ptTree0, _addlist1, _addlist2, _addlist3, exp, interTree, list, retTree);
                        TOKEN_EXIT(directive_exit, "END_LINE");
                    } else {
                        tokenAhead =  0 ;
                    }
                    ReplaceTree(_ptRes1, 1, _ptTree1);
                    _ptTree0 =  _ptRes1 ;
                }
                _retValue =  _ptTree0 ;
                goto directive_ret ;
            }
            break ;
        case PRAGMA_DIR : 
            tokenAhead = 0 ;
            CommTerm();
            if ( (tokenAhead == 8 || (LexPragma(), TRACE_LEX(1))) && TERM_OR_META(PRAGMA_NOPRETTY, "PRAGMA_NOPRETTY") && ((tokenAhead = 0), CommTerm(), 1) ) {
                {
                    keepCarriage =  1 ;
                    {
                        keepAll =  1 ;
                        (tokenAhead == 5 || (LexEndLine(), TRACE_LEX(1)));
                        if ( !TERM_OR_META(END_LINE, "END_LINE") || !(CommTerm(), 1) ) {
                            MulFreeTree(7, _addlist1, _addlist2, _addlist3, exp, interTree, list, retTree);
                            TOKEN_EXIT(directive_exit, "END_LINE");
                        } else {
                            tokenAhead =  0 ;
                        }
                        _addlist2 =  list ;
                        while ( !NPUSH_CALL_VERIF(_Tak(end_pragma), 53, cplus) ) {
                            {
                                PPTREE  _ptTree0 = 0 ;
                                {
                                    PPTREE  _ptTree1 = 0, _ptRes1 = 0 ;
                                    _ptRes1 =  MakeTree(ALINE, 1);
                                    (tokenAhead == 5 || (LexEndLine(), TRACE_LEX(1)));
                                    if ( !TERM_OR_META(END_LINE, "END_LINE") || !BUILD_TERM_META(_ptTree1) ) {
                                        MulFreeTree(10, _ptRes1, _ptTree1, _ptTree0, _addlist1, _addlist2, _addlist3, exp, interTree, list, retTree);
                                        TOKEN_EXIT(directive_exit, "END_LINE");
                                    } else {
                                        tokenAhead =  0 ;
                                    }
                                    ReplaceTree(_ptRes1, 1, _ptTree1);
                                    _ptTree0 =  _ptRes1 ;
                                }
                                _addlist2 =  AddList(_addlist2, _ptTree0);
                            }
                            if ( list ) {
                                _addlist2 =  SonTree(_addlist2, 2);
                            } else {
                                list =  _addlist2 ;
                            }
                        }
                        if ( NQUICK_CALL(_Tak(end_pragma)(error_free), 53, cplus) == (PPTREE) -1 ) {
                            MulFreeTree(7, _addlist1, _addlist2, _addlist3, exp, interTree, list, retTree);
                            PROG_EXIT(directive_exit, "directive");
                        }
                        keepAll =  _oldkeepAll ;
                    }
                    keepCarriage =  _oldkeepCarriage ;
                }
                tokenAhead =  0 ;
                {
                    PPTREE  _ptTree0 = 0 ;
                    {
                        PPTREE  _ptRes1 = 0 ;
                        _ptRes1 =  MakeTree(NO_PRETTY, 1);
                        ReplaceTree(_ptRes1, 1, list);
                        _ptTree0 =  _ptRes1 ;
                    }
                    _retValue =  _ptTree0 ;
                    goto directive_ret ;
                }
            } else if ( (tokenAhead == 8 || (LexPragma(), TRACE_LEX(1))) && TERM_OR_META(PRAGMA_NOT_MANAGED, "PRAGMA_NOT_MANAGED") && ((tokenAhead = 0), CommTerm(), 1) ) {
                {
                    keepCarriage =  1 ;
                    {
                        keepAll =  1 ;
                        (tokenAhead == 5 || (LexEndLine(), TRACE_LEX(1)));
                        if ( !TERM_OR_META(END_LINE, "END_LINE") || !(CommTerm(), 1) ) {
                            MulFreeTree(7, _addlist1, _addlist2, _addlist3, exp, interTree, list, retTree);
                            TOKEN_EXIT(directive_exit, "END_LINE");
                        } else {
                            tokenAhead =  0 ;
                        }
                        _addlist3 =  list ;
                        while ( !NPUSH_CALL_VERIF(_Tak(end_pragma_managed), 54, cplus) ) {
                            {
                                PPTREE  _ptTree0 = 0 ;
                                {
                                    PPTREE  _ptTree1 = 0, _ptRes1 = 0 ;
                                    _ptRes1 =  MakeTree(ALINE, 1);
                                    (tokenAhead == 5 || (LexEndLine(), TRACE_LEX(1)));
                                    if ( !TERM_OR_META(END_LINE, "END_LINE") || !BUILD_TERM_META(_ptTree1) ) {
                                        MulFreeTree(10, _ptRes1, _ptTree1, _ptTree0, _addlist1, _addlist2, _addlist3, exp, interTree, list, retTree);
                                        TOKEN_EXIT(directive_exit, "END_LINE");
                                    } else {
                                        tokenAhead =  0 ;
                                    }
                                    ReplaceTree(_ptRes1, 1, _ptTree1);
                                    _ptTree0 =  _ptRes1 ;
                                }
                                _addlist3 =  AddList(_addlist3, _ptTree0);
                            }
                            if ( list ) {
                                _addlist3 =  SonTree(_addlist3, 2);
                            } else {
                                list =  _addlist3 ;
                            }
                        }
                        if ( NQUICK_CALL(_Tak(end_pragma_managed)(error_free), 54, cplus) == (PPTREE) -1 ) {
                            MulFreeTree(7, _addlist1, _addlist2, _addlist3, exp, interTree, list, retTree);
                            PROG_EXIT(directive_exit, "directive");
                        }
                        keepAll =  _oldkeepAll ;
                    }
                    keepCarriage =  _oldkeepCarriage ;
                }
                tokenAhead =  0 ;
                {
                    PPTREE  _ptTree0 = 0 ;
                    {
                        PPTREE  _ptRes1 = 0 ;
                        _ptRes1 =  MakeTree(NOT_MANAGED, 1);
                        ReplaceTree(_ptRes1, 1, list);
                        _ptTree0 =  _ptRes1 ;
                    }
                    _retValue =  _ptTree0 ;
                    goto directive_ret ;
                }
            } else if ( (tokenAhead == 8 || (LexPragma(), TRACE_LEX(1))) && TERM_OR_META(PRAGMA_CONFIG, "PRAGMA_CONFIG") && ((tokenAhead = 0), CommTerm(), 1) ) {
                (tokenAhead == 8 || (LexPragma(), TRACE_LEX(1)));
                switch ( lexEl.Value ) {
                    case META : 
                    case PRAGMA_TAB : 
                        tokenAhead = 0 ;
                        CommTerm();
                        {
                            PPTREE  _ptTree0 = 0, _ptRes0 = 0 ;
                            _ptRes0 =  MakeTree(CONFIG, 1);
                            {
                                PPTREE  _ptTree1 = 0, _ptRes1 = 0 ;
                                _ptRes1 =  MakeTree(TAB_VALUE, 1);
                                (tokenAhead == 1 || (Lex(), TRACE_LEX(1)));
                                if ( !TERM_OR_META(INTEGER, "INTEGER") || !BUILD_TERM_META(_ptTree1) ) {
                                    MulFreeTree(11, _ptRes1, _ptTree1, _ptRes0, _ptTree0, _addlist1, _addlist2, _addlist3, exp, interTree, list, retTree);
                                    TOKEN_EXIT(directive_exit, "INTEGER");
                                } else {
                                    tokenAhead =  0 ;
                                }
                                ReplaceTree(_ptRes1, 1, _ptTree1);
                                _ptTree0 =  _ptRes1 ;
                            }
                            ReplaceTree(_ptRes0, 1, _ptTree0);
                            retTree =  _ptRes0 ;
                        }
                        AnalyzeTab(retTree);
                        {
                            _retValue =  retTree ;
                            goto directive_ret ;
                        }
                        break ;
                    case PRAGMA_MODE : 
                        tokenAhead = 0 ;
                        CommTerm();
                        {
                            PPTREE  _ptTree0 = 0, _ptRes0 = 0 ;
                            _ptRes0 =  MakeTree(CONFIG, 1);
                            {
                                PPTREE  _ptTree1 = 0, _ptRes1 = 0 ;
                                _ptRes1 =  MakeTree(MODE_VALUE, 1);
                                (tokenAhead == 1 || (Lex(), TRACE_LEX(1)));
                                if ( !TERM_OR_META(IDENT, "IDENT") || !BUILD_TERM_META(_ptTree1) ) {
                                    MulFreeTree(11, _ptRes1, _ptTree1, _ptRes0, _ptTree0, _addlist1, _addlist2, _addlist3, exp, interTree, list, retTree);
                                    TOKEN_EXIT(directive_exit, "IDENT");
                                } else {
                                    tokenAhead =  0 ;
                                }
                                ReplaceTree(_ptRes1, 1, _ptTree1);
                                _ptTree0 =  _ptRes1 ;
                            }
                            ReplaceTree(_ptRes0, 1, _ptTree0);
                            retTree =  _ptRes0 ;
                        }
                        AnalyzeMode(retTree);
                        {
                            _retValue =  retTree ;
                            goto directive_ret ;
                        }
                        break ;
                    case PRAGMA_SIMPLIFY : 
                        tokenAhead = 0 ;
                        CommTerm();
                        {
                            PPTREE  _ptTree0 = 0, _ptRes0 = 0 ;
                            _ptRes0 =  MakeTree(SIMPLIFY, 1);
                            {
                                PPTREE  _ptTree1 = 0, _ptRes1 = 0 ;
                                _ptRes1 =  MakeTree(SIMPLIFY_VALUE, 1);
                                (tokenAhead == 1 || (Lex(), TRACE_LEX(1)));
                                if ( !TERM_OR_META(IDENT, "IDENT") || !BUILD_TERM_META(_ptTree1) ) {
                                    MulFreeTree(11, _ptRes1, _ptTree1, _ptRes0, _ptTree0, _addlist1, _addlist2, _addlist3, exp, interTree, list, retTree);
                                    TOKEN_EXIT(directive_exit, "IDENT");
                                } else {
                                    tokenAhead =  0 ;
                                }
                                ReplaceTree(_ptRes1, 1, _ptTree1);
                                _ptTree0 =  _ptRes1 ;
                            }
                            ReplaceTree(_ptRes0, 1, _ptTree0);
                            retTree =  _ptRes0 ;
                        }
                        AnalyzeSimplify(retTree);
                        {
                            _retValue =  retTree ;
                            goto directive_ret ;
                        }
                        break ;
                    case PRAGMA_SINGLE_SWITCH_INDENT : 
                        tokenAhead = 0 ;
                        CommTerm();
                        {
                            PPTREE  _ptTree0 = 0, _ptRes0 = 0 ;
                            _ptRes0 =  MakeTree(CONFIG, 1);
                            {
                                PPTREE  _ptTree1 = 0, _ptRes1 = 0 ;
                                _ptRes1 =  MakeTree(SINGLE_SWITCH_INDENT_VALUE, 1);
                                (tokenAhead == 1 || (Lex(), TRACE_LEX(1)));
                                if ( !TERM_OR_META(IDENT, "IDENT") || !BUILD_TERM_META(_ptTree1) ) {
                                    MulFreeTree(11, _ptRes1, _ptTree1, _ptRes0, _ptTree0, _addlist1, _addlist2, _addlist3, exp, interTree, list, retTree);
                                    TOKEN_EXIT(directive_exit, "IDENT");
                                } else {
                                    tokenAhead =  0 ;
                                }
                                ReplaceTree(_ptRes1, 1, _ptTree1);
                                _ptTree0 =  _ptRes1 ;
                            }
                            ReplaceTree(_ptRes0, 1, _ptTree0);
                            retTree =  _ptRes0 ;
                        }
                        AnalyzeSingleSwitchIndent(retTree);
                        {
                            _retValue =  retTree ;
                            goto directive_ret ;
                        }
                        break ;
                    case PRAGMA_ASSIGN_ALIGN : 
                        tokenAhead = 0 ;
                        CommTerm();
                        {
                            PPTREE  _ptTree0 = 0, _ptRes0 = 0 ;
                            _ptRes0 =  MakeTree(CONFIG, 1);
                            {
                                PPTREE  _ptTree1 = 0, _ptRes1 = 0 ;
                                _ptRes1 =  MakeTree(ASSIGN_ALIGN, 1);
                                (tokenAhead == 1 || (Lex(), TRACE_LEX(1)));
                                if ( !TERM_OR_META(IDENT, "IDENT") || !BUILD_TERM_META(_ptTree1) ) {
                                    MulFreeTree(11, _ptRes1, _ptTree1, _ptRes0, _ptTree0, _addlist1, _addlist2, _addlist3, exp, interTree, list, retTree);
                                    TOKEN_EXIT(directive_exit, "IDENT");
                                } else {
                                    tokenAhead =  0 ;
                                }
                                ReplaceTree(_ptRes1, 1, _ptTree1);
                                _ptTree0 =  _ptRes1 ;
                            }
                            ReplaceTree(_ptRes0, 1, _ptTree0);
                            retTree =  _ptRes0 ;
                        }
                        AnalyzeAssignAlign(retTree);
                        {
                            _retValue =  retTree ;
                            goto directive_ret ;
                        }
                        break ;
                    case PRAGMA_DECL_ALIGN : 
                        tokenAhead = 0 ;
                        CommTerm();
                        {
                            PPTREE  _ptTree0 = 0, _ptRes0 = 0 ;
                            _ptRes0 =  MakeTree(CONFIG, 1);
                            {
                                PPTREE  _ptTree1 = 0, _ptRes1 = 0 ;
                                _ptRes1 =  MakeTree(DECL_ALIGN, 1);
                                (tokenAhead == 1 || (Lex(), TRACE_LEX(1)));
                                if ( !TERM_OR_META(IDENT, "IDENT") || !BUILD_TERM_META(_ptTree1) ) {
                                    MulFreeTree(11, _ptRes1, _ptTree1, _ptRes0, _ptTree0, _addlist1, _addlist2, _addlist3, exp, interTree, list, retTree);
                                    TOKEN_EXIT(directive_exit, "IDENT");
                                } else {
                                    tokenAhead =  0 ;
                                }
                                ReplaceTree(_ptRes1, 1, _ptTree1);
                                _ptTree0 =  _ptRes1 ;
                            }
                            ReplaceTree(_ptRes0, 1, _ptTree0);
                            retTree =  _ptRes0 ;
                        }
                        AnalyzeDeclAlign(retTree);
                        {
                            _retValue =  retTree ;
                            goto directive_ret ;
                        }
                        break ;
                    case PRAGMA_BRACE_ALIGN : 
                        tokenAhead = 0 ;
                        CommTerm();
                        {
                            PPTREE  _ptTree0 = 0, _ptRes0 = 0 ;
                            _ptRes0 =  MakeTree(CONFIG, 1);
                            {
                                PPTREE  _ptTree1 = 0, _ptRes1 = 0 ;
                                _ptRes1 =  MakeTree(BRACE_ALIGN_VALUE, 1);
                                (tokenAhead == 1 || (Lex(), TRACE_LEX(1)));
                                if ( !TERM_OR_META(IDENT, "IDENT") || !BUILD_TERM_META(_ptTree1) ) {
                                    MulFreeTree(11, _ptRes1, _ptTree1, _ptRes0, _ptTree0, _addlist1, _addlist2, _addlist3, exp, interTree, list, retTree);
                                    TOKEN_EXIT(directive_exit, "IDENT");
                                } else {
                                    tokenAhead =  0 ;
                                }
                                ReplaceTree(_ptRes1, 1, _ptTree1);
                                _ptTree0 =  _ptRes1 ;
                            }
                            ReplaceTree(_ptRes0, 1, _ptTree0);
                            retTree =  _ptRes0 ;
                        }
                        AnalyzeBraceAlign(retTree);
                        {
                            _retValue =  retTree ;
                            goto directive_ret ;
                        }
                        break ;
                    case PRAGMA_MARGIN : 
                        tokenAhead = 0 ;
                        CommTerm();
                        {
                            PPTREE  _ptTree0 = 0, _ptRes0 = 0 ;
                            _ptRes0 =  MakeTree(CONFIG, 1);
                            {
                                PPTREE  _ptTree1 = 0, _ptRes1 = 0 ;
                                _ptRes1 =  MakeTree(MARGIN_VALUE, 1);
                                (tokenAhead == 1 || (Lex(), TRACE_LEX(1)));
                                if ( !TERM_OR_META(INTEGER, "INTEGER") || !BUILD_TERM_META(_ptTree1) ) {
                                    MulFreeTree(11, _ptRes1, _ptTree1, _ptRes0, _ptTree0, _addlist1, _addlist2, _addlist3, exp, interTree, list, retTree);
                                    TOKEN_EXIT(directive_exit, "INTEGER");
                                } else {
                                    tokenAhead =  0 ;
                                }
                                ReplaceTree(_ptRes1, 1, _ptTree1);
                                _ptTree0 =  _ptRes1 ;
                            }
                            ReplaceTree(_ptRes0, 1, _ptTree0);
                            retTree =  _ptRes0 ;
                        }
                        AnalyzeMargin(retTree);
                        {
                            _retValue =  retTree ;
                            goto directive_ret ;
                        }
                        break ;
                    case PRAGMA_COMMENT_START : 
                        tokenAhead = 0 ;
                        CommTerm();
                        {
                            PPTREE  _ptTree0 = 0, _ptRes0 = 0 ;
                            _ptRes0 =  MakeTree(CONFIG, 1);
                            {
                                PPTREE  _ptTree1 = 0, _ptRes1 = 0 ;
                                _ptRes1 =  MakeTree(COMMENT_START, 1);
                                (tokenAhead == 1 || (Lex(), TRACE_LEX(1)));
                                if ( !TERM_OR_META(STRING, "STRING") || !BUILD_TERM_META(_ptTree1) ) {
                                    MulFreeTree(11, _ptRes1, _ptTree1, _ptRes0, _ptTree0, _addlist1, _addlist2, _addlist3, exp, interTree, list, retTree);
                                    TOKEN_EXIT(directive_exit, "STRING");
                                } else {
                                    tokenAhead =  0 ;
                                }
                                ReplaceTree(_ptRes1, 1, _ptTree1);
                                _ptTree0 =  _ptRes1 ;
                            }
                            ReplaceTree(_ptRes0, 1, _ptTree0);
                            retTree =  _ptRes0 ;
                        }
                        AnalyzeComment(retTree);
                        {
                            _retValue =  retTree ;
                            goto directive_ret ;
                        }
                        break ;
                    case PRAGMA_COMMENT_MIDDLE : 
                        tokenAhead = 0 ;
                        CommTerm();
                        {
                            PPTREE  _ptTree0 = 0, _ptRes0 = 0 ;
                            _ptRes0 =  MakeTree(CONFIG, 1);
                            {
                                PPTREE  _ptTree1 = 0, _ptRes1 = 0 ;
                                _ptRes1 =  MakeTree(COMMENT_MIDDLE, 1);
                                (tokenAhead == 1 || (Lex(), TRACE_LEX(1)));
                                if ( !TERM_OR_META(STRING, "STRING") || !BUILD_TERM_META(_ptTree1) ) {
                                    MulFreeTree(11, _ptRes1, _ptTree1, _ptRes0, _ptTree0, _addlist1, _addlist2, _addlist3, exp, interTree, list, retTree);
                                    TOKEN_EXIT(directive_exit, "STRING");
                                } else {
                                    tokenAhead =  0 ;
                                }
                                ReplaceTree(_ptRes1, 1, _ptTree1);
                                _ptTree0 =  _ptRes1 ;
                            }
                            ReplaceTree(_ptRes0, 1, _ptTree0);
                            retTree =  _ptRes0 ;
                        }
                        AnalyzeComment(retTree);
                        {
                            _retValue =  retTree ;
                            goto directive_ret ;
                        }
                        break ;
                    case PRAGMA_COMMENT_END : 
                        tokenAhead = 0 ;
                        CommTerm();
                        {
                            PPTREE  _ptTree0 = 0, _ptRes0 = 0 ;
                            _ptRes0 =  MakeTree(CONFIG, 1);
                            {
                                PPTREE  _ptTree1 = 0, _ptRes1 = 0 ;
                                _ptRes1 =  MakeTree(COMMENT_END, 1);
                                (tokenAhead == 1 || (Lex(), TRACE_LEX(1)));
                                if ( !TERM_OR_META(STRING, "STRING") || !BUILD_TERM_META(_ptTree1) ) {
                                    MulFreeTree(11, _ptRes1, _ptTree1, _ptRes0, _ptTree0, _addlist1, _addlist2, _addlist3, exp, interTree, list, retTree);
                                    TOKEN_EXIT(directive_exit, "STRING");
                                } else {
                                    tokenAhead =  0 ;
                                }
                                ReplaceTree(_ptRes1, 1, _ptTree1);
                                _ptTree0 =  _ptRes1 ;
                            }
                            ReplaceTree(_ptRes0, 1, _ptTree0);
                            retTree =  _ptRes0 ;
                        }
                        AnalyzeComment(retTree);
                        {
                            _retValue =  retTree ;
                            goto directive_ret ;
                        }
                        break ;
                    case PRAGMA_COMMENT_PLUS : 
                        tokenAhead = 0 ;
                        CommTerm();
                        {
                            PPTREE  _ptTree0 = 0, _ptRes0 = 0 ;
                            _ptRes0 =  MakeTree(CONFIG, 1);
                            {
                                PPTREE  _ptTree1 = 0, _ptRes1 = 0 ;
                                _ptRes1 =  MakeTree(COMMENT_PLUS, 1);
                                (tokenAhead == 1 || (Lex(), TRACE_LEX(1)));
                                if ( !TERM_OR_META(STRING, "STRING") || !BUILD_TERM_META(_ptTree1) ) {
                                    MulFreeTree(11, _ptRes1, _ptTree1, _ptRes0, _ptTree0, _addlist1, _addlist2, _addlist3, exp, interTree, list, retTree);
                                    TOKEN_EXIT(directive_exit, "STRING");
                                } else {
                                    tokenAhead =  0 ;
                                }
                                ReplaceTree(_ptRes1, 1, _ptTree1);
                                _ptTree0 =  _ptRes1 ;
                            }
                            ReplaceTree(_ptRes0, 1, _ptTree0);
                            retTree =  _ptRes0 ;
                        }
                        AnalyzeComment(retTree);
                        {
                            _retValue =  retTree ;
                            goto directive_ret ;
                        }
                        break ;
                    case PRAGMA_INDENT_FUNCTION_TYPE : 
                        tokenAhead = 0 ;
                        CommTerm();
                        {
                            PPTREE  _ptTree0 = 0, _ptRes0 = 0 ;
                            _ptRes0 =  MakeTree(CONFIG, 1);
                            {
                                PPTREE  _ptTree1 = 0, _ptRes1 = 0 ;
                                _ptRes1 =  MakeTree(INDENT_FUNCTION_TYPE, 1);
                                (tokenAhead == 1 || (Lex(), TRACE_LEX(1)));
                                if ( !TERM_OR_META(IDENT, "IDENT") || !BUILD_TERM_META(_ptTree1) ) {
                                    MulFreeTree(11, _ptRes1, _ptTree1, _ptRes0, _ptTree0, _addlist1, _addlist2, _addlist3, exp, interTree, list, retTree);
                                    TOKEN_EXIT(directive_exit, "IDENT");
                                } else {
                                    tokenAhead =  0 ;
                                }
                                ReplaceTree(_ptRes1, 1, _ptTree1);
                                _ptTree0 =  _ptRes1 ;
                            }
                            ReplaceTree(_ptRes0, 1, _ptTree0);
                            retTree =  _ptRes0 ;
                        }
                        AnalyzeIndentFunctionType(retTree);
                        {
                            _retValue =  retTree ;
                            goto directive_ret ;
                        }
                        break ;
                    case PRAGMA_FUNC_HEADER : 
                        tokenAhead = 0 ;
                        CommTerm();
                        {
                            PPTREE  _ptTree0 = 0, _ptRes0 = 0 ;
                            _ptRes0 =  MakeTree(CONFIG, 1);
                            {
                                PPTREE  _ptTree1 = 0, _ptRes1 = 0 ;
                                _ptRes1 =  MakeTree(FUNC_HEADER, 1);
                                (tokenAhead == 1 || (Lex(), TRACE_LEX(1)));
                                if ( !TERM_OR_META(STRING, "STRING") || !BUILD_TERM_META(_ptTree1) ) {
                                    MulFreeTree(11, _ptRes1, _ptTree1, _ptRes0, _ptTree0, _addlist1, _addlist2, _addlist3, exp, interTree, list, retTree);
                                    TOKEN_EXIT(directive_exit, "STRING");
                                } else {
                                    tokenAhead =  0 ;
                                }
                                ReplaceTree(_ptRes1, 1, _ptTree1);
                                _ptTree0 =  _ptRes1 ;
                            }
                            ReplaceTree(_ptRes0, 1, _ptTree0);
                            retTree =  _ptRes0 ;
                        }
                        AnalyzeFuncHeader(retTree);
                        {
                            _retValue =  retTree ;
                            goto directive_ret ;
                        }
                        break ;
                    case PRAGMA_PARAMETERS : 
                        tokenAhead = 0 ;
                        CommTerm();
                        {
                            PPTREE  _ptTree0 = 0, _ptRes0 = 0 ;
                            _ptRes0 =  MakeTree(CONFIG, 1);
                            {
                                PPTREE  _ptTree1 = 0, _ptRes1 = 0 ;
                                _ptRes1 =  MakeTree(PARAMETERS, 1);
                                (tokenAhead == 1 || (Lex(), TRACE_LEX(1)));
                                if ( !TERM_OR_META(STRING, "STRING") || !BUILD_TERM_META(_ptTree1) ) {
                                    MulFreeTree(11, _ptRes1, _ptTree1, _ptRes0, _ptTree0, _addlist1, _addlist2, _addlist3, exp, interTree, list, retTree);
                                    TOKEN_EXIT(directive_exit, "STRING");
                                } else {
                                    tokenAhead =  0 ;
                                }
                                ReplaceTree(_ptRes1, 1, _ptTree1);
                                _ptTree0 =  _ptRes1 ;
                            }
                            ReplaceTree(_ptRes0, 1, _ptTree0);
                            retTree =  _ptRes0 ;
                        }
                        AnalyzeParameters(retTree);
                        {
                            _retValue =  retTree ;
                            goto directive_ret ;
                        }
                        break ;
                    default : 
                        {
                            PPTREE  _ptTree0 = 0 ;
                            if ( (_ptTree0 = NQUICK_CALL(_Tak(other_config)(error_free), 105, cplus)) == (PPTREE) -1 ) {
                                MulFreeTree(8, _ptTree0, _addlist1, _addlist2, _addlist3, exp, interTree, list, retTree);
                                PROG_EXIT(directive_exit, "directive");
                            }
                            _retValue =  _ptTree0 ;
                            goto directive_ret ;
                        }
                        break ;
                }
            } else if ( NPUSH_CALL_VERIF(_Tak(range_pragma), 124, cplus) ) {
                {
                    PPTREE  _ptTree0 = 0 ;
                    {
                        PPTREE  _ptTree1 = 0, _ptRes1 = 0 ;
                        _ptRes1 =  MakeTree(PRAGMA, 1);
                        (tokenAhead == 8 || (LexPragma(), TRACE_LEX(1)));
                        if ( !TERM_OR_META(PRAGMA_CONTENT, "PRAGMA_CONTENT") || !BUILD_TERM_META(_ptTree1) ) {
                            MulFreeTree(10, _ptRes1, _ptTree1, _ptTree0, _addlist1, _addlist2, _addlist3, exp, interTree, list, retTree);
                            TOKEN_EXIT(directive_exit, "PRAGMA_CONTENT");
                        } else {
                            tokenAhead =  0 ;
                        }
                        ReplaceTree(_ptRes1, 1, _ptTree1);
                        _ptTree0 =  _ptRes1 ;
                    }
                    _retValue =  _ptTree0 ;
                    goto directive_ret ;
                }
            } else if ( 1 ) {
                {
                    PPTREE  _ptTree0 = 0 ;
                    if ( (_ptTree0 = NQUICK_CALL(_Tak(other_config)(error_free), 105, cplus)) == (PPTREE) -1 ) {
                        MulFreeTree(8, _ptTree0, _addlist1, _addlist2, _addlist3, exp, interTree, list, retTree);
                        PROG_EXIT(directive_exit, "directive");
                    }
                    _retValue =  _ptTree0 ;
                    goto directive_ret ;
                }
            } else {
            }
            break ;
        default : 
            MulFreeTree(7, _addlist1, _addlist2, _addlist3, exp, interTree, list, retTree);
            CASE_EXIT(directive_exit, "either DEFINE_DIR or INCLUDE_DIR or LINE_DIR or LINE_REFERENCE_DIR or UNDEF_DIR or ERROR_DIR or PRAGMA_DIR");
            break ;
    }
    (tokenAhead || (LexComment(), tokenAhead =  -1, TRACE_LEX(1)));
    if ( _nbPre || listComm ) 
        AddComm(_ptPreComm, _nbPre, (PPTREE)0, lastTree);
    else {
        _lastTree =  (PPTREE)0 ;
        _funcLevel-- ;
    }
    keepCarriage =  _oldkeepCarriage ;
    keepAll      =  _oldkeepAll ;
    return (PPTREE)0 ;
directive_exit : 
    _Debug = TRACE_RULE("directive", TRACE_EXIT, (PPTREE)0);
    _funcLevel-- ;
    keepCarriage =  _oldkeepCarriage ;
    keepAll      =  _oldkeepAll ;
    return (PPTREE) -1 ;
directive_ret : 
    _Debug = TRACE_RULE("directive", TRACE_RETURN, _retValue);
    (tokenAhead || (LexComment(), tokenAhead =  -1, TRACE_LEX(1)));
    if ( _nbPre || listComm ) 
        AddComm(_ptPreComm, _nbPre, _retValue, lastTree);
    else {
        _lastTree =  _retValue ;
        _funcLevel-- ;
    }
    keepCarriage =  _oldkeepCarriage ;
    keepAll      =  _oldkeepAll ;
    return _retValue ;
}

PPTREE cplus::end_pragma ( int error_free )
{
    PFILE_POSITION  _filePosition = (PFILE_POSITION)0 ;
    int             _value, _nbPre = 0 ;
    PCOMM_ELEM      _ptPreComm = ((tokenAhead || (LexComment(), tokenAhead =  -1, TRACE_LEX(1))), listComm ? LookComm(&_nbPre) : (_funcLevel++, (PCOMM_ELEM)0));
    int             _Debug = TRACE_RULE("end_pragma", TRACE_ENTER, (PPTREE)0);
    PPTREE          lastTree = _lastTree, _retValue ;
    
    (tokenAhead == 1 || (Lex(), TRACE_LEX(1)));
    if ( !TERM_OR_META(PRAGMA_DIR, "PRAGMA_DIR") || !(CommTerm(), 1) ) {
        TOKEN_EXIT(end_pragma_exit, "PRAGMA_DIR");
    } else {
        tokenAhead =  0 ;
    }
    (tokenAhead == 8 || (LexPragma(), TRACE_LEX(1)));
    if ( !TERM_OR_META(PRAGMA_PRETTY, "PRAGMA_PRETTY") || !(CommTerm(), 1) ) {
        TOKEN_EXIT(end_pragma_exit, "PRAGMA_PRETTY");
    } else {
        tokenAhead =  0 ;
    }
    (tokenAhead || (LexComment(), tokenAhead =  -1, TRACE_LEX(1)));
    if ( _nbPre || listComm ) 
        AddComm(_ptPreComm, _nbPre, (PPTREE)0, lastTree);
    else {
        _lastTree =  (PPTREE)0 ;
        _funcLevel-- ;
    }
    return (PPTREE)0 ;
end_pragma_exit : 
    _Debug = TRACE_RULE("end_pragma", TRACE_EXIT, (PPTREE)0);
    _funcLevel-- ;
    return (PPTREE) -1 ;
end_pragma_ret : 
    _Debug = TRACE_RULE("end_pragma", TRACE_RETURN, _retValue);
    (tokenAhead || (LexComment(), tokenAhead =  -1, TRACE_LEX(1)));
    if ( _nbPre || listComm ) 
        AddComm(_ptPreComm, _nbPre, _retValue, lastTree);
    else {
        _lastTree =  _retValue ;
        _funcLevel-- ;
    }
    return _retValue ;
}

PPTREE cplus::end_pragma_managed ( int error_free )
{
    PFILE_POSITION  _filePosition = (PFILE_POSITION)0 ;
    int             _value, _nbPre = 0 ;
    PCOMM_ELEM      _ptPreComm = ((tokenAhead || (LexComment(), tokenAhead =  -1, TRACE_LEX(1))), listComm ? LookComm(&_nbPre) : (_funcLevel++, (PCOMM_ELEM)0));
    int             _Debug = TRACE_RULE("end_pragma_managed", TRACE_ENTER, (PPTREE)0);
    PPTREE          lastTree = _lastTree, _retValue ;
    
    (tokenAhead == 1 || (Lex(), TRACE_LEX(1)));
    if ( !TERM_OR_META(PRAGMA_DIR, "PRAGMA_DIR") || !(CommTerm(), 1) ) {
        TOKEN_EXIT(end_pragma_managed_exit, "PRAGMA_DIR");
    } else {
        tokenAhead =  0 ;
    }
    (tokenAhead == 8 || (LexPragma(), TRACE_LEX(1)));
    if ( !TERM_OR_META(PRAGMA_MANAGED, "PRAGMA_MANAGED") || !(CommTerm(), 1) ) {
        TOKEN_EXIT(end_pragma_managed_exit, "PRAGMA_MANAGED");
    } else {
        tokenAhead =  0 ;
    }
    (tokenAhead || (LexComment(), tokenAhead =  -1, TRACE_LEX(1)));
    if ( _nbPre || listComm ) 
        AddComm(_ptPreComm, _nbPre, (PPTREE)0, lastTree);
    else {
        _lastTree =  (PPTREE)0 ;
        _funcLevel-- ;
    }
    return (PPTREE)0 ;
end_pragma_managed_exit : 
    _Debug = TRACE_RULE("end_pragma_managed", TRACE_EXIT, (PPTREE)0);
    _funcLevel-- ;
    return (PPTREE) -1 ;
end_pragma_managed_ret : 
    _Debug = TRACE_RULE("end_pragma_managed", TRACE_RETURN, _retValue);
    (tokenAhead || (LexComment(), tokenAhead =  -1, TRACE_LEX(1)));
    if ( _nbPre || listComm ) 
        AddComm(_ptPreComm, _nbPre, _retValue, lastTree);
    else {
        _lastTree =  _retValue ;
        _funcLevel-- ;
    }
    return _retValue ;
}

PPTREE cplus::enum_declarator ( int error_free )
{
    PFILE_POSITION  _filePosition = (PFILE_POSITION)0 ;
    int             _value, _nbPre = 0 ;
    PCOMM_ELEM      _ptPreComm = ((tokenAhead || (LexComment(), tokenAhead =  -1, TRACE_LEX(1))), listComm ? LookComm(&_nbPre) : (_funcLevel++, (PCOMM_ELEM)0));
    int             _Debug = TRACE_RULE("enum_declarator", TRACE_ENTER, (PPTREE)0);
    PPTREE          lastTree = _lastTree, _retValue ;
    PPTREE          _addlist1 = (PPTREE)0 ;
    PPTREE          retTree = (PPTREE)0, valTree = (PPTREE)0, list = (PPTREE)0, classMarker = (PPTREE)0 ;
    
    (tokenAhead == 1 || (Lex(), TRACE_LEX(1)));
    if ( !SEE_TOKEN(ENUM, "enum") || !(CommTerm(), 1) ) {
        MulFreeTree(5, _addlist1, classMarker, list, retTree, valTree);
        TOKEN_EXIT(enum_declarator_exit, "enum");
    } else {
        tokenAhead =  0 ;
    }
    if ( (tokenAhead == 1 || (Lex(), TRACE_LEX(1))) && SEE_TOKEN(CLASS, "class") && ((tokenAhead = 0), CommTerm(), 1) ) {
        {
            PPTREE  _ptRes0 = 0 ;
            _ptRes0     =  MakeTree(ENUM_CLASS, 0);
            classMarker =  _ptRes0 ;
        }
    }
    if ( (tokenAhead == 1 || (Lex(), TRACE_LEX(1))) && SEE_TOKEN(IDENT, "IDENT") ) {
        {
            PPTREE  _ptTree0 = 0, _ptRes0 = 0 ;
            _ptRes0 =  MakeTree(ENUM, 4);
            {
                PPTREE  _ptTree1 = 0, _ptRes1 = 0 ;
                _ptRes1 =  MakeTree(IDENT, 1);
                (tokenAhead == 1 || (Lex(), TRACE_LEX(1)));
                if ( !TERM_OR_META(IDENT, "IDENT") || !BUILD_TERM_META(_ptTree1) ) {
                    MulFreeTree(9, _ptRes1, _ptTree1, _ptRes0, _ptTree0, _addlist1, classMarker, list, retTree, valTree);
                    TOKEN_EXIT(enum_declarator_exit, "IDENT");
                } else {
                    tokenAhead =  0 ;
                }
                ReplaceTree(_ptRes1, 1, _ptTree1);
                _ptTree0 =  _ptRes1 ;
            }
            ReplaceTree(_ptRes0, 1, _ptTree0);
            ReplaceTree(_ptRes0, 3, classMarker);
            retTree =  _ptRes0 ;
        }
    } else {
        {
            PPTREE  _ptRes0 = 0 ;
            _ptRes0 =  MakeTree(ENUM, 4);
            ReplaceTree(_ptRes0, 3, classMarker);
            retTree =  _ptRes0 ;
        }
    }
    if ( (tokenAhead == 1 || (Lex(), TRACE_LEX(1))) && SEE_TOKEN(DPOI, ":") && ((tokenAhead = 0), CommTerm(), 1) ) {
        {
            PPTREE  _ptTree0 = 0 ;
            if ( (_ptTree0 = NQUICK_CALL(_Tak(simple_type)(error_free), 128, cplus)) == (PPTREE) -1 ) {
                MulFreeTree(6, _ptTree0, _addlist1, classMarker, list, retTree, valTree);
                PROG_EXIT(enum_declarator_exit, "enum_declarator");
            }
            ReplaceTree(retTree, 4, _ptTree0);
        }
    }
    if ( (tokenAhead == 1 || (Lex(), TRACE_LEX(1))) && SEE_TOKEN(AOUV, "{") && ((tokenAhead = 0), CommTerm(), 1) ) {
        _addlist1 =  list ;
        do {
            if ( NPUSH_CALL_AFF_VERIF(valTree = , _Tak(enum_val), 56, cplus) ) {
                _addlist1 =  AddList(_addlist1, valTree);
                if ( list ) {
                    _addlist1 =  SonTree(_addlist1, 2);
                } else {
                    list =  _addlist1 ;
                }
            } else {
                MulFreeTree(5, _addlist1, classMarker, list, retTree, valTree);
                LEX_EXIT("", 0);
                goto enum_declarator_exit ;
            }
        } while ( !((tokenAhead == 1 || (Lex(), TRACE_LEX(1))) && SEE_TOKEN(AFER, "}") || !(tokenAhead && tokenAhead != -1 || c != EOF)) );
        (tokenAhead == 1 || (Lex(), TRACE_LEX(1)));
        if ( !SEE_TOKEN(AFER, "}") || !(CommTerm(), 1) ) {
            MulFreeTree(5, _addlist1, classMarker, list, retTree, valTree);
            TOKEN_EXIT(enum_declarator_exit, "}");
        } else {
            tokenAhead =  0 ;
        }
        ReplaceTree(retTree, 2, list);
    }
    {
        _retValue =  retTree ;
        goto enum_declarator_ret ;
    }
    (tokenAhead || (LexComment(), tokenAhead =  -1, TRACE_LEX(1)));
    if ( _nbPre || listComm ) 
        AddComm(_ptPreComm, _nbPre, (PPTREE)0, lastTree);
    else {
        _lastTree =  (PPTREE)0 ;
        _funcLevel-- ;
    }
    return (PPTREE)0 ;
enum_declarator_exit : 
    _Debug = TRACE_RULE("enum_declarator", TRACE_EXIT, (PPTREE)0);
    _funcLevel-- ;
    return (PPTREE) -1 ;
enum_declarator_ret : 
    _Debug = TRACE_RULE("enum_declarator", TRACE_RETURN, _retValue);
    (tokenAhead || (LexComment(), tokenAhead =  -1, TRACE_LEX(1)));
    if ( _nbPre || listComm ) 
        AddComm(_ptPreComm, _nbPre, _retValue, lastTree);
    else {
        _lastTree =  _retValue ;
        _funcLevel-- ;
    }
    return _retValue ;
}

PPTREE cplus::enum_val ( int error_free )
{
    PFILE_POSITION  _filePosition = (PFILE_POSITION)0 ;
    int             _value, _nbPre = 0 ;
    PCOMM_ELEM      _ptPreComm = ((tokenAhead || (LexComment(), tokenAhead =  -1, TRACE_LEX(1))), listComm ? LookComm(&_nbPre) : (_funcLevel++, (PCOMM_ELEM)0));
    int             _Debug = TRACE_RULE("enum_val", TRACE_ENTER, (PPTREE)0);
    PPTREE          lastTree = _lastTree, _retValue ;
    PPTREE          valTree = (PPTREE)0 ;
    
    {
        PPTREE  _ptTree0 = 0, _ptRes0 = 0 ;
        _ptRes0 =  MakeTree(TYP_AFF, 2);
        {
            PPTREE  _ptTree1 = 0, _ptRes1 = 0 ;
            _ptRes1 =  MakeTree(IDENT, 1);
            (tokenAhead == 1 || (Lex(), TRACE_LEX(1)));
            if ( !TERM_OR_META(IDENT, "IDENT") || !BUILD_TERM_META(_ptTree1) ) {
                MulFreeTree(5, _ptRes1, _ptTree1, _ptRes0, _ptTree0, valTree);
                TOKEN_EXIT(enum_val_exit, "IDENT");
            } else {
                tokenAhead =  0 ;
            }
            ReplaceTree(_ptRes1, 1, _ptTree1);
            _ptTree0 =  _ptRes1 ;
        }
        ReplaceTree(_ptRes0, 1, _ptTree0);
        valTree =  _ptRes0 ;
    }
    if ( (tokenAhead == 1 || (Lex(), TRACE_LEX(1))) && SEE_TOKEN(EGAL, "=") && ((tokenAhead = 0), CommTerm(), 1) ) {
        {
            PPTREE  _ptTree0 = 0 ;
            if ( (_ptTree0 = NQUICK_CALL(_Tak(assignment_expression)(error_free), 16, cplus)) == (PPTREE) -1 ) {
                MulFreeTree(2, _ptTree0, valTree);
                PROG_EXIT(enum_val_exit, "enum_val");
            }
            ReplaceTree(valTree, 2, _ptTree0);
        }
    }
    if ( (tokenAhead == 1 || (Lex(), TRACE_LEX(1))) && SEE_TOKEN(VIRG, ",") && ((tokenAhead = 0), CommTerm(), 1) ) {}
    {
        _retValue =  valTree ;
        goto enum_val_ret ;
    }
    (tokenAhead || (LexComment(), tokenAhead =  -1, TRACE_LEX(1)));
    if ( _nbPre || listComm ) 
        AddComm(_ptPreComm, _nbPre, (PPTREE)0, lastTree);
    else {
        _lastTree =  (PPTREE)0 ;
        _funcLevel-- ;
    }
    return (PPTREE)0 ;
enum_val_exit : 
    _Debug = TRACE_RULE("enum_val", TRACE_EXIT, (PPTREE)0);
    _funcLevel-- ;
    return (PPTREE) -1 ;
enum_val_ret : 
    _Debug = TRACE_RULE("enum_val", TRACE_RETURN, _retValue);
    (tokenAhead || (LexComment(), tokenAhead =  -1, TRACE_LEX(1)));
    if ( _nbPre || listComm ) 
        AddComm(_ptPreComm, _nbPre, _retValue, lastTree);
    else {
        _lastTree =  _retValue ;
        _funcLevel-- ;
    }
    return _retValue ;
}

PPTREE cplus::equality_expression ( int error_free )
{
    PFILE_POSITION  _filePosition = (PFILE_POSITION)0 ;
    int             _value, _nbPre = 0 ;
    PCOMM_ELEM      _ptPreComm = ((tokenAhead || (LexComment(), tokenAhead =  -1, TRACE_LEX(1))), listComm ? LookComm(&_nbPre) : (_funcLevel++, (PCOMM_ELEM)0));
    int             _Debug = TRACE_RULE("equality_expression", TRACE_ENTER, (PPTREE)0);
    PPTREE          lastTree = _lastTree, _retValue ;
    PPTREE          expTree = (PPTREE)0 ;
    
    if ( (expTree = NQUICK_CALL(_Tak(relational_expression)(error_free), 125, cplus)) == (PPTREE) -1 ) {
        MulFreeTree(1, expTree);
        PROG_EXIT(equality_expression_exit, "equality_expression");
    }
    while ( (tokenAhead == 1 || (Lex(), TRACE_LEX(1))) && SEE_TOKEN(EGALEGAL, "==") || (tokenAhead == 1 || (Lex(), TRACE_LEX(1))) && SEE_TOKEN(EXCLEGAL, "!=") ) {
        if ( (tokenAhead == 1 || (Lex(), TRACE_LEX(1))) && SEE_TOKEN(EGALEGAL, "==") && ((tokenAhead = 0), CommTerm(), 1) ) {
            {
                PPTREE  _ptTree0 = 0, _ptRes0 = 0 ;
                _ptRes0 =  MakeTree(EQU, 2);
                ReplaceTree(_ptRes0, 1, expTree);
                if ( (_ptTree0 = NQUICK_CALL(_Tak(relational_expression)(error_free), 125, cplus)) == (PPTREE) -1 ) {
                    MulFreeTree(3, _ptRes0, _ptTree0, expTree);
                    PROG_EXIT(equality_expression_exit, "equality_expression");
                }
                ReplaceTree(_ptRes0, 2, _ptTree0);
                expTree =  _ptRes0 ;
            }
        } else {
            (tokenAhead == 1 || (Lex(), TRACE_LEX(1)));
            if ( !SEE_TOKEN(EXCLEGAL, "!=") || !(CommTerm(), 1) ) {
                MulFreeTree(1, expTree);
                TOKEN_EXIT(equality_expression_exit, "!=");
            } else {
                tokenAhead =  0 ;
            }
            {
                PPTREE  _ptTree0 = 0, _ptRes0 = 0 ;
                _ptRes0 =  MakeTree(NEQU, 2);
                ReplaceTree(_ptRes0, 1, expTree);
                if ( (_ptTree0 = NQUICK_CALL(_Tak(relational_expression)(error_free), 125, cplus)) == (PPTREE) -1 ) {
                    MulFreeTree(3, _ptRes0, _ptTree0, expTree);
                    PROG_EXIT(equality_expression_exit, "equality_expression");
                }
                ReplaceTree(_ptRes0, 2, _ptTree0);
                expTree =  _ptRes0 ;
            }
        }
    }
    {
        _retValue =  expTree ;
        goto equality_expression_ret ;
    }
    (tokenAhead || (LexComment(), tokenAhead =  -1, TRACE_LEX(1)));
    if ( _nbPre || listComm ) 
        AddComm(_ptPreComm, _nbPre, (PPTREE)0, lastTree);
    else {
        _lastTree =  (PPTREE)0 ;
        _funcLevel-- ;
    }
    return (PPTREE)0 ;
equality_expression_exit : 
    _Debug = TRACE_RULE("equality_expression", TRACE_EXIT, (PPTREE)0);
    _funcLevel-- ;
    return (PPTREE) -1 ;
equality_expression_ret : 
    _Debug = TRACE_RULE("equality_expression", TRACE_RETURN, _retValue);
    (tokenAhead || (LexComment(), tokenAhead =  -1, TRACE_LEX(1)));
    if ( _nbPre || listComm ) 
        AddComm(_ptPreComm, _nbPre, _retValue, lastTree);
    else {
        _lastTree =  _retValue ;
        _funcLevel-- ;
    }
    return _retValue ;
}

PPTREE cplus::exception ( int error_free )
{
    PFILE_POSITION  _filePosition = (PFILE_POSITION)0 ;
    int             _value, _nbPre = 0 ;
    PCOMM_ELEM      _ptPreComm = ((tokenAhead || (LexComment(), tokenAhead =  -1, TRACE_LEX(1))), listComm ? LookComm(&_nbPre) : (_funcLevel++, (PCOMM_ELEM)0));
    int             _Debug = TRACE_RULE("exception", TRACE_ENTER, (PPTREE)0);
    PPTREE          lastTree = _lastTree, _retValue ;
    PPTREE          _addlist1 = (PPTREE)0 ;
    PPTREE          retTree = (PPTREE)0, list = (PPTREE)0 ;
    
    (tokenAhead == 13 || (specific(), TRACE_LEX(1)));
    if ( !TERM_OR_META(TRY_UPPER, "TRY_UPPER") || !(CommTerm(), 1) ) {
        MulFreeTree(3, _addlist1, list, retTree);
        TOKEN_EXIT(exception_exit, "TRY_UPPER");
    } else {
        tokenAhead =  0 ;
    }
    {
        PPTREE  _ptTree0 = 0, _ptRes0 = 0 ;
        _ptRes0 =  MakeTree(EXCEPTION, 2);
        if ( (_ptTree0 = NQUICK_CALL(_Tak(compound_statement)(error_free), 28, cplus)) == (PPTREE) -1 ) {
            MulFreeTree(5, _ptRes0, _ptTree0, _addlist1, list, retTree);
            PROG_EXIT(exception_exit, "exception");
        }
        ReplaceTree(_ptRes0, 1, _ptTree0);
        retTree =  _ptRes0 ;
    }
    _addlist1 =  list ;
    do {
        {
            PPTREE  _ptTree0 = 0 ;
            if ( (_ptTree0 = NQUICK_CALL(_Tak(catch_unit)(error_free), 23, cplus)) == (PPTREE) -1 ) {
                MulFreeTree(4, _ptTree0, _addlist1, list, retTree);
                PROG_EXIT(exception_exit, "exception");
            }
            _addlist1 =  AddList(_addlist1, _ptTree0);
        }
        if ( list ) {
            _addlist1 =  SonTree(_addlist1, 2);
        } else {
            list =  _addlist1 ;
        }
    } while ( !((tokenAhead == 13 || (specific(), TRACE_LEX(1))) && TERM_OR_META(END_CATCH, "END_CATCH") && ((tokenAhead = 0), CommTerm(), 1)
                    || (tokenAhead == 13 || (specific(), TRACE_LEX(1))) && TERM_OR_META(END_CATCH_ALL, "END_CATCH_ALL") && ((tokenAhead = 0), CommTerm(), 1)
                    || !(tokenAhead && tokenAhead != -1 || c != EOF)) );
    {
        PPTREE  _ptTree0 = 0 ;
        _ptTree0  =  ReplaceTree(retTree, 2, list);
        _retValue =  _ptTree0 ;
        goto exception_ret ;
    }
    (tokenAhead || (LexComment(), tokenAhead =  -1, TRACE_LEX(1)));
    if ( _nbPre || listComm ) 
        AddComm(_ptPreComm, _nbPre, (PPTREE)0, lastTree);
    else {
        _lastTree =  (PPTREE)0 ;
        _funcLevel-- ;
    }
    return (PPTREE)0 ;
exception_exit : 
    _Debug = TRACE_RULE("exception", TRACE_EXIT, (PPTREE)0);
    _funcLevel-- ;
    return (PPTREE) -1 ;
exception_ret : 
    _Debug = TRACE_RULE("exception", TRACE_RETURN, _retValue);
    (tokenAhead || (LexComment(), tokenAhead =  -1, TRACE_LEX(1)));
    if ( _nbPre || listComm ) 
        AddComm(_ptPreComm, _nbPre, _retValue, lastTree);
    else {
        _lastTree =  _retValue ;
        _funcLevel-- ;
    }
    return _retValue ;
}

PPTREE cplus::exception_ansi ( int error_free )
{
    PFILE_POSITION  _filePosition = (PFILE_POSITION)0 ;
    int             _value, _nbPre = 0 ;
    PCOMM_ELEM      _ptPreComm = ((tokenAhead || (LexComment(), tokenAhead =  -1, TRACE_LEX(1))), listComm ? LookComm(&_nbPre) : (_funcLevel++, (PCOMM_ELEM)0));
    int             _Debug = TRACE_RULE("exception_ansi", TRACE_ENTER, (PPTREE)0);
    PPTREE          lastTree = _lastTree, _retValue ;
    PPTREE          _addlist1 = (PPTREE)0 ;
    PPTREE          retTree = (PPTREE)0, list = (PPTREE)0, elem = (PPTREE)0 ;
    
    (tokenAhead == 1 || (Lex(), TRACE_LEX(1)));
    if ( !SEE_TOKEN(TRY, "try") || !(CommTerm(), 1) ) {
        MulFreeTree(4, _addlist1, elem, list, retTree);
        TOKEN_EXIT(exception_ansi_exit, "try");
    } else {
        tokenAhead =  0 ;
    }
    {
        PPTREE  _ptTree0 = 0, _ptRes0 = 0 ;
        _ptRes0 =  MakeTree(EXCEPTION_ANSI, 2);
        if ( (_ptTree0 = NQUICK_CALL(_Tak(compound_statement)(error_free), 28, cplus)) == (PPTREE) -1 ) {
            MulFreeTree(6, _ptRes0, _ptTree0, _addlist1, elem, list, retTree);
            PROG_EXIT(exception_ansi_exit, "exception_ansi");
        }
        ReplaceTree(_ptRes0, 1, _ptTree0);
        retTree =  _ptRes0 ;
    }
    _addlist1 =  list ;
    while ( NPUSH_CALL_AFF_VERIF(elem = , _Tak(catch_unit_ansi), 24, cplus) ) {
        _addlist1 =  AddList(_addlist1, elem);
        if ( list ) {
            _addlist1 =  SonTree(_addlist1, 2);
        } else {
            list =  _addlist1 ;
        }
    }
    {
        PPTREE  _ptTree0 = 0 ;
        _ptTree0  =  ReplaceTree(retTree, 2, list);
        _retValue =  _ptTree0 ;
        goto exception_ansi_ret ;
    }
    (tokenAhead || (LexComment(), tokenAhead =  -1, TRACE_LEX(1)));
    if ( _nbPre || listComm ) 
        AddComm(_ptPreComm, _nbPre, (PPTREE)0, lastTree);
    else {
        _lastTree =  (PPTREE)0 ;
        _funcLevel-- ;
    }
    return (PPTREE)0 ;
exception_ansi_exit : 
    _Debug = TRACE_RULE("exception_ansi", TRACE_EXIT, (PPTREE)0);
    _funcLevel-- ;
    return (PPTREE) -1 ;
exception_ansi_ret : 
    _Debug = TRACE_RULE("exception_ansi", TRACE_RETURN, _retValue);
    (tokenAhead || (LexComment(), tokenAhead =  -1, TRACE_LEX(1)));
    if ( _nbPre || listComm ) 
        AddComm(_ptPreComm, _nbPre, _retValue, lastTree);
    else {
        _lastTree =  _retValue ;
        _funcLevel-- ;
    }
    return _retValue ;
}

PPTREE cplus::exception_list ( int error_free )
{
    PFILE_POSITION  _filePosition = (PFILE_POSITION)0 ;
    int             _value, _nbPre = 0 ;
    PCOMM_ELEM      _ptPreComm = ((tokenAhead || (LexComment(), tokenAhead =  -1, TRACE_LEX(1))), listComm ? LookComm(&_nbPre) : (_funcLevel++, (PCOMM_ELEM)0));
    int             _Debug = TRACE_RULE("exception_list", TRACE_ENTER, (PPTREE)0);
    PPTREE          lastTree = _lastTree, _retValue ;
    PPTREE          _addlist1 = (PPTREE)0 ;
    PPTREE          exceptionList = (PPTREE)0 ;
    
    (tokenAhead == 1 || (Lex(), TRACE_LEX(1)));
    if ( !SEE_TOKEN(THROW, "throw") || !(CommTerm(), 1) ) {
        MulFreeTree(2, _addlist1, exceptionList);
        TOKEN_EXIT(exception_list_exit, "throw");
    } else {
        tokenAhead =  0 ;
    }
    if ( (tokenAhead == 1 || (Lex(), TRACE_LEX(1))) && SEE_TOKEN(POUV, "(") && ((tokenAhead = 0), CommTerm(), 1) ) {
        if ( !((tokenAhead == 1 || (Lex(), TRACE_LEX(1))) && SEE_TOKEN(PFER, ")")) ) {
            _addlist1 =  exceptionList ;
            do {
                {
                    PPTREE  _ptTree0 = 0 ;
                    if ( (_ptTree0 = NQUICK_CALL(_Tak(qualified_name)(error_free), 116, cplus)) == (PPTREE) -1 ) {
                        MulFreeTree(3, _ptTree0, _addlist1, exceptionList);
                        PROG_EXIT(exception_list_exit, "exception_list");
                    }
                    _addlist1 =  AddList(_addlist1, _ptTree0);
                }
                if ( exceptionList ) {
                    _addlist1 =  SonTree(_addlist1, 2);
                } else {
                    exceptionList =  _addlist1 ;
                }
            } while ( !!((tokenAhead == 1 || (Lex(), TRACE_LEX(1))) && SEE_TOKEN(VIRG, ",") && ((tokenAhead = 0), CommTerm(), 1)) );
        }
        (tokenAhead == 1 || (Lex(), TRACE_LEX(1)));
        if ( !SEE_TOKEN(PFER, ")") || !(CommTerm(), 1) ) {
            MulFreeTree(2, _addlist1, exceptionList);
            TOKEN_EXIT(exception_list_exit, ")");
        } else {
            tokenAhead =  0 ;
        }
    } else {
        {
            PPTREE  _ptTree0 = 0 ;
            if ( (_ptTree0 = NQUICK_CALL(_Tak(qualified_name)(error_free), 116, cplus)) == (PPTREE) -1 ) {
                MulFreeTree(3, _ptTree0, _addlist1, exceptionList);
                PROG_EXIT(exception_list_exit, "exception_list");
            }
            exceptionList =  AddList(exceptionList, _ptTree0);
        }
    }
    {
        PPTREE  _ptTree0 = 0 ;
        {
            PPTREE  _ptRes1 = 0 ;
            _ptRes1 =  MakeTree(EXCEPTION_LIST, 1);
            ReplaceTree(_ptRes1, 1, exceptionList);
            _ptTree0 =  _ptRes1 ;
        }
        _retValue =  _ptTree0 ;
        goto exception_list_ret ;
    }
    (tokenAhead || (LexComment(), tokenAhead =  -1, TRACE_LEX(1)));
    if ( _nbPre || listComm ) 
        AddComm(_ptPreComm, _nbPre, (PPTREE)0, lastTree);
    else {
        _lastTree =  (PPTREE)0 ;
        _funcLevel-- ;
    }
    return (PPTREE)0 ;
exception_list_exit : 
    _Debug = TRACE_RULE("exception_list", TRACE_EXIT, (PPTREE)0);
    _funcLevel-- ;
    return (PPTREE) -1 ;
exception_list_ret : 
    _Debug = TRACE_RULE("exception_list", TRACE_RETURN, _retValue);
    (tokenAhead || (LexComment(), tokenAhead =  -1, TRACE_LEX(1)));
    if ( _nbPre || listComm ) 
        AddComm(_ptPreComm, _nbPre, _retValue, lastTree);
    else {
        _lastTree =  _retValue ;
        _funcLevel-- ;
    }
    return _retValue ;
}

PPTREE cplus::exclusive_or_expression ( int error_free )
{
    PFILE_POSITION  _filePosition = (PFILE_POSITION)0 ;
    int             _value, _nbPre = 0 ;
    PCOMM_ELEM      _ptPreComm = ((tokenAhead || (LexComment(), tokenAhead =  -1, TRACE_LEX(1))), listComm ? LookComm(&_nbPre) : (_funcLevel++, (PCOMM_ELEM)0));
    int             _Debug = TRACE_RULE("exclusive_or_expression", TRACE_ENTER, (PPTREE)0);
    PPTREE          lastTree = _lastTree, _retValue ;
    PPTREE          expTree = (PPTREE)0 ;
    
    if ( (expTree = NQUICK_CALL(_Tak(and_expression)(error_free), 6, cplus)) == (PPTREE) -1 ) {
        MulFreeTree(1, expTree);
        PROG_EXIT(exclusive_or_expression_exit, "exclusive_or_expression");
    }
    while ( (tokenAhead == 1 || (Lex(), TRACE_LEX(1))) && SEE_TOKEN(CHAP, "^") && ((tokenAhead = 0), CommTerm(), 1) ) {
        {
            PPTREE  _ptTree0 = 0, _ptRes0 = 0 ;
            _ptRes0 =  MakeTree(LXOR, 2);
            ReplaceTree(_ptRes0, 1, expTree);
            if ( (_ptTree0 = NQUICK_CALL(_Tak(and_expression)(error_free), 6, cplus)) == (PPTREE) -1 ) {
                MulFreeTree(3, _ptRes0, _ptTree0, expTree);
                PROG_EXIT(exclusive_or_expression_exit, "exclusive_or_expression");
            }
            ReplaceTree(_ptRes0, 2, _ptTree0);
            expTree =  _ptRes0 ;
        }
    }
    {
        _retValue =  expTree ;
        goto exclusive_or_expression_ret ;
    }
    (tokenAhead || (LexComment(), tokenAhead =  -1, TRACE_LEX(1)));
    if ( _nbPre || listComm ) 
        AddComm(_ptPreComm, _nbPre, (PPTREE)0, lastTree);
    else {
        _lastTree =  (PPTREE)0 ;
        _funcLevel-- ;
    }
    return (PPTREE)0 ;
exclusive_or_expression_exit : 
    _Debug = TRACE_RULE("exclusive_or_expression", TRACE_EXIT, (PPTREE)0);
    _funcLevel-- ;
    return (PPTREE) -1 ;
exclusive_or_expression_ret : 
    _Debug = TRACE_RULE("exclusive_or_expression", TRACE_RETURN, _retValue);
    (tokenAhead || (LexComment(), tokenAhead =  -1, TRACE_LEX(1)));
    if ( _nbPre || listComm ) 
        AddComm(_ptPreComm, _nbPre, _retValue, lastTree);
    else {
        _lastTree =  _retValue ;
        _funcLevel-- ;
    }
    return _retValue ;
}
