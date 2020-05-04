/*************************************************************************/
/*                                                                       */
/*        Produced by MetaGen version 2.0  -    1989-2006                 */
/*       Syntaxic Analyzer Meta Generator developped by                  */
/*                  Eric Lavillonniere                                   */
/*                                                                       */
/*************************************************************************/
#include "token.h"
#include "cplus.h"

PPTREE cplus::stat_if_dir ( int error_free )
{
    int             _oldkeepCarriage = keepCarriage ;
    PFILE_POSITION  _filePosition = (PFILE_POSITION)0 ;
    int             _value, _nbPre = 0 ;
    PCOMM_ELEM      _ptPreComm = ((tokenAhead || (LexComment(), tokenAhead =  -1, TRACE_LEX(1))), listComm ? LookComm(&_nbPre) : (_funcLevel++, (PCOMM_ELEM)0));
    int             _Debug = TRACE_RULE("stat_if_dir", TRACE_ENTER, (PPTREE)0);
    PPTREE          lastTree = _lastTree, _retValue ;
    PPTREE          _addlist1 = (PPTREE)0, _addlist2 = (PPTREE)0 ;
    PPTREE          retTree = (PPTREE)0, list = (PPTREE)0, list2 = (PPTREE)0 ;
    
    {
        keepCarriage =  1 ;
        {
            PPTREE  _ptTree0 = 0, _ptRes0 = 0 ;
            _ptRes0 =  MakeTree(IF_DIR, 3);
            if ( (_ptTree0 = NQUICK_CALL(_Tak(expression)(error_free), 62, cplus)) == (PPTREE) -1 ) {
                MulFreeTree(7, _ptRes0, _ptTree0, _addlist1, _addlist2, list, list2, retTree);
                PROG_EXIT(stat_if_dir_exit, "stat_if_dir");
            }
            ReplaceTree(_ptRes0, 1, _ptTree0);
            retTree =  _ptRes0 ;
        }
        (tokenAhead == 1 || (Lex(), TRACE_LEX(1)));
        if ( !TERM_OR_META(CARRIAGE_RETURN, "CARRIAGE_RETURN") || !(CommTerm(), 1) ) {
            MulFreeTree(5, _addlist1, _addlist2, list, list2, retTree);
            TOKEN_EXIT(stat_if_dir_exit, "CARRIAGE_RETURN");
        } else {
            tokenAhead =  0 ;
        }
        keepCarriage =  _oldkeepCarriage ;
    }
    _addlist1 =  list ;
    while ( !((tokenAhead == 1 || (Lex(), TRACE_LEX(1))) && SEE_TOKEN(ELSE_DIR, "ELSE_DIR"))
                && !((tokenAhead == 1 || (Lex(), TRACE_LEX(1))) && SEE_TOKEN(ELIF_DIR, "ELIF_DIR"))
                && !((tokenAhead == 1 || (Lex(), TRACE_LEX(1))) && SEE_TOKEN(ENDIF_DIR, "ENDIF_DIR")) ) {
        {
            PPTREE  _ptTree0 = 0 ;
            if ( (_ptTree0 = NQUICK_CALL(_Tak(stat_all)(error_free), 131, cplus)) == (PPTREE) -1 ) {
                MulFreeTree(6, _ptTree0, _addlist1, _addlist2, list, list2, retTree);
                PROG_EXIT(stat_if_dir_exit, "stat_if_dir");
            }
            _addlist1 =  AddList(_addlist1, _ptTree0);
        }
        if ( list ) {
            _addlist1 =  SonTree(_addlist1, 2);
        } else {
            list =  _addlist1 ;
        }
    }
    {
        PPTREE  _ptTree0 = 0 ;
        if ( (_ptTree0 = NQUICK_CALL(_Tak(none_statement)(error_free), 103, cplus)) == (PPTREE) -1 ) {
            MulFreeTree(6, _ptTree0, _addlist1, _addlist2, list, list2, retTree);
            PROG_EXIT(stat_if_dir_exit, "stat_if_dir");
        }
        list =  AddList(list, _ptTree0);
    }
    ReplaceTree(retTree, 2, list);
    (tokenAhead == 1 || (Lex(), TRACE_LEX(1)));
    switch ( lexEl.Value ) {
        case META : 
        case ELSE_DIR : 
            tokenAhead = 0 ;
            CommTerm();
            _addlist2 = list2 ;
            while ( (tokenAhead && tokenAhead != -1 || c != EOF) && !((tokenAhead == 1 || (Lex(), TRACE_LEX(1))) && SEE_TOKEN(ENDIF_DIR, "ENDIF_DIR")) ) {
                {
                    PPTREE  _ptTree0 = 0 ;
                    if ( (_ptTree0 = NQUICK_CALL(_Tak(stat_all)(error_free), 131, cplus)) == (PPTREE) -1 ) {
                        MulFreeTree(6, _ptTree0, _addlist1, _addlist2, list, list2, retTree);
                        PROG_EXIT(stat_if_dir_exit, "stat_if_dir");
                    }
                    _addlist2 =  AddList(_addlist2, _ptTree0);
                }
                if ( list2 ) {
                    _addlist2 =  SonTree(_addlist2, 2);
                } else {
                    list2 =  _addlist2 ;
                }
            }
            {
                PPTREE  _ptTree0 = 0 ;
                if ( (_ptTree0 = NQUICK_CALL(_Tak(none_statement)(error_free), 103, cplus)) == (PPTREE) -1 ) {
                    MulFreeTree(6, _ptTree0, _addlist1, _addlist2, list, list2, retTree);
                    PROG_EXIT(stat_if_dir_exit, "stat_if_dir");
                }
                list2 =  AddList(list2, _ptTree0);
            }
            (tokenAhead == 1 || (Lex(), TRACE_LEX(1)));
            if ( !TERM_OR_META(ENDIF_DIR, "ENDIF_DIR") || !(CommTerm(), 1) ) {
                MulFreeTree(5, _addlist1, _addlist2, list, list2, retTree);
                TOKEN_EXIT(stat_if_dir_exit, "ENDIF_DIR");
            } else {
                tokenAhead =  0 ;
            }
            {
                PPTREE  _ptTree0 = 0 ;
                _ptTree0  =  ReplaceTree(retTree, 3, list2);
                _retValue =  _ptTree0 ;
                goto stat_if_dir_ret ;
            }
            break ;
        case ELIF_DIR : 
            tokenAhead = 0 ;
            CommTerm();
            {
                PPTREE  _ptTree0 = 0 ;
                {
                    PPTREE  _ptTree1 = 0 ;
                    if ( (_ptTree1 = NQUICK_CALL(_Tak(stat_if_dir)(error_free), 134, cplus)) == (PPTREE) -1 ) {
                        MulFreeTree(7, _ptTree1, _ptTree0, _addlist1, _addlist2, list, list2, retTree);
                        PROG_EXIT(stat_if_dir_exit, "stat_if_dir");
                    }
                    _ptTree0 =  ReplaceTree(retTree, 3, _ptTree1);
                }
                _retValue =  _ptTree0 ;
                goto stat_if_dir_ret ;
            }
            break ;
        case ENDIF_DIR : 
            tokenAhead = 0 ;
            CommTerm();
            {
                _retValue =  retTree ;
                goto stat_if_dir_ret ;
            }
            break ;
        default : 
            MulFreeTree(5, _addlist1, _addlist2, list, list2, retTree);
            CASE_EXIT(stat_if_dir_exit, "either ELSE_DIR or ELIF_DIR or ENDIF_DIR");
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
    return (PPTREE)0 ;
stat_if_dir_exit : 
    _Debug = TRACE_RULE("stat_if_dir", TRACE_EXIT, (PPTREE)0);
    _funcLevel-- ;
    keepCarriage =  _oldkeepCarriage ;
    return (PPTREE) -1 ;
stat_if_dir_ret : 
    _Debug = TRACE_RULE("stat_if_dir", TRACE_RETURN, _retValue);
    (tokenAhead || (LexComment(), tokenAhead =  -1, TRACE_LEX(1)));
    if ( _nbPre || listComm ) 
        AddComm(_ptPreComm, _nbPre, _retValue, lastTree);
    else {
        _lastTree =  _retValue ;
        _funcLevel-- ;
    }
    keepCarriage =  _oldkeepCarriage ;
    return _retValue ;
}

PPTREE cplus::stat_ifdef_dir ( int error_free )
{
    int             _oldkeepCarriage = keepCarriage ;
    PFILE_POSITION  _filePosition = (PFILE_POSITION)0 ;
    int             _value, _nbPre = 0 ;
    PCOMM_ELEM      _ptPreComm = ((tokenAhead || (LexComment(), tokenAhead =  -1, TRACE_LEX(1))), listComm ? LookComm(&_nbPre) : (_funcLevel++, (PCOMM_ELEM)0));
    int             _Debug = TRACE_RULE("stat_ifdef_dir", TRACE_ENTER, (PPTREE)0);
    PPTREE          lastTree = _lastTree, _retValue ;
    PPTREE          _addlist1 = (PPTREE)0, _addlist2 = (PPTREE)0 ;
    PPTREE          retTree = (PPTREE)0, list = (PPTREE)0, list2 = (PPTREE)0, express = (PPTREE)0 ;
    
    if ( (tokenAhead == 1 || (Lex(), TRACE_LEX(1))) && TERM_OR_META(IFDEF_DIR, "IFDEF_DIR") && ((tokenAhead = 0), CommTerm(), 1) ) {
        {
            keepCarriage =  1 ;
            {
                PPTREE  _ptTree0 = 0, _ptRes0 = 0 ;
                _ptRes0 =  MakeTree(IFDEF_DIR, 3);
                if ( (_ptTree0 = NQUICK_CALL(_Tak(expression)(error_free), 62, cplus)) == (PPTREE) -1 ) {
                    MulFreeTree(8, _ptRes0, _ptTree0, _addlist1, _addlist2, express, list, list2, retTree);
                    PROG_EXIT(stat_ifdef_dir_exit, "stat_ifdef_dir");
                }
                ReplaceTree(_ptRes0, 1, _ptTree0);
                retTree =  _ptRes0 ;
            }
            (tokenAhead == 1 || (Lex(), TRACE_LEX(1)));
            if ( !TERM_OR_META(CARRIAGE_RETURN, "CARRIAGE_RETURN") || !(CommTerm(), 1) ) {
                MulFreeTree(6, _addlist1, _addlist2, express, list, list2, retTree);
                TOKEN_EXIT(stat_ifdef_dir_exit, "CARRIAGE_RETURN");
            } else {
                tokenAhead =  0 ;
            }
            keepCarriage =  _oldkeepCarriage ;
        }
    } else {
        (tokenAhead == 1 || (Lex(), TRACE_LEX(1)));
        if ( !TERM_OR_META(IFNDEF_DIR, "IFNDEF_DIR") || !(CommTerm(), 1) ) {
            MulFreeTree(6, _addlist1, _addlist2, express, list, list2, retTree);
            TOKEN_EXIT(stat_ifdef_dir_exit, "IFNDEF_DIR");
        } else {
            tokenAhead =  0 ;
        }
        {
            keepCarriage =  1 ;
            if ( (express = NQUICK_CALL(_Tak(expression)(error_free), 62, cplus)) == (PPTREE) -1 ) {
                MulFreeTree(6, _addlist1, _addlist2, express, list, list2, retTree);
                PROG_EXIT(stat_ifdef_dir_exit, "stat_ifdef_dir");
            }
            (tokenAhead == 1 || (Lex(), TRACE_LEX(1)));
            if ( !TERM_OR_META(CARRIAGE_RETURN, "CARRIAGE_RETURN") || !(CommTerm(), 1) ) {
                MulFreeTree(6, _addlist1, _addlist2, express, list, list2, retTree);
                TOKEN_EXIT(stat_ifdef_dir_exit, "CARRIAGE_RETURN");
            } else {
                tokenAhead =  0 ;
            }
            keepCarriage =  _oldkeepCarriage ;
        }
        {
            PPTREE  _ptRes0 = 0 ;
            _ptRes0 =  MakeTree(IFNDEF_DIR, 3);
            ReplaceTree(_ptRes0, 1, express);
            retTree =  _ptRes0 ;
        }
    }
    _addlist1 =  list ;
    while ( !((tokenAhead == 1 || (Lex(), TRACE_LEX(1))) && SEE_TOKEN(ELSE_DIR, "ELSE_DIR"))
                && !((tokenAhead == 1 || (Lex(), TRACE_LEX(1))) && SEE_TOKEN(ELIF_DIR, "ELIF_DIR"))
                && !((tokenAhead == 1 || (Lex(), TRACE_LEX(1))) && SEE_TOKEN(ENDIF_DIR, "ENDIF_DIR")) ) {
        {
            PPTREE  _ptTree0 = 0 ;
            if ( (_ptTree0 = NQUICK_CALL(_Tak(stat_all)(error_free), 131, cplus)) == (PPTREE) -1 ) {
                MulFreeTree(7, _ptTree0, _addlist1, _addlist2, express, list, list2, retTree);
                PROG_EXIT(stat_ifdef_dir_exit, "stat_ifdef_dir");
            }
            _addlist1 =  AddList(_addlist1, _ptTree0);
        }
        if ( list ) {
            _addlist1 =  SonTree(_addlist1, 2);
        } else {
            list =  _addlist1 ;
        }
    }
    {
        PPTREE  _ptTree0 = 0 ;
        if ( (_ptTree0 = NQUICK_CALL(_Tak(none_statement)(error_free), 103, cplus)) == (PPTREE) -1 ) {
            MulFreeTree(7, _ptTree0, _addlist1, _addlist2, express, list, list2, retTree);
            PROG_EXIT(stat_ifdef_dir_exit, "stat_ifdef_dir");
        }
        list =  AddList(list, _ptTree0);
    }
    ReplaceTree(retTree, 2, list);
    (tokenAhead == 1 || (Lex(), TRACE_LEX(1)));
    switch ( lexEl.Value ) {
        case META : 
        case ELSE_DIR : 
            tokenAhead = 0 ;
            CommTerm();
            _addlist2 = list2 ;
            while ( (tokenAhead && tokenAhead != -1 || c != EOF) && !((tokenAhead == 1 || (Lex(), TRACE_LEX(1))) && SEE_TOKEN(ENDIF_DIR, "ENDIF_DIR")) ) {
                {
                    PPTREE  _ptTree0 = 0 ;
                    if ( (_ptTree0 = NQUICK_CALL(_Tak(stat_all)(error_free), 131, cplus)) == (PPTREE) -1 ) {
                        MulFreeTree(7, _ptTree0, _addlist1, _addlist2, express, list, list2, retTree);
                        PROG_EXIT(stat_ifdef_dir_exit, "stat_ifdef_dir");
                    }
                    _addlist2 =  AddList(_addlist2, _ptTree0);
                }
                if ( list2 ) {
                    _addlist2 =  SonTree(_addlist2, 2);
                } else {
                    list2 =  _addlist2 ;
                }
            }
            {
                PPTREE  _ptTree0 = 0 ;
                if ( (_ptTree0 = NQUICK_CALL(_Tak(none_statement)(error_free), 103, cplus)) == (PPTREE) -1 ) {
                    MulFreeTree(7, _ptTree0, _addlist1, _addlist2, express, list, list2, retTree);
                    PROG_EXIT(stat_ifdef_dir_exit, "stat_ifdef_dir");
                }
                list2 =  AddList(list2, _ptTree0);
            }
            (tokenAhead == 1 || (Lex(), TRACE_LEX(1)));
            if ( !TERM_OR_META(ENDIF_DIR, "ENDIF_DIR") || !(CommTerm(), 1) ) {
                MulFreeTree(6, _addlist1, _addlist2, express, list, list2, retTree);
                TOKEN_EXIT(stat_ifdef_dir_exit, "ENDIF_DIR");
            } else {
                tokenAhead =  0 ;
            }
            {
                PPTREE  _ptTree0 = 0 ;
                _ptTree0  =  ReplaceTree(retTree, 3, list2);
                _retValue =  _ptTree0 ;
                goto stat_ifdef_dir_ret ;
            }
            break ;
        case ELIF_DIR : 
            tokenAhead = 0 ;
            CommTerm();
            {
                PPTREE  _ptTree0 = 0 ;
                {
                    PPTREE  _ptTree1 = 0 ;
                    if ( (_ptTree1 = NQUICK_CALL(_Tak(stat_if_dir)(error_free), 134, cplus)) == (PPTREE) -1 ) {
                        MulFreeTree(8, _ptTree1, _ptTree0, _addlist1, _addlist2, express, list, list2, retTree);
                        PROG_EXIT(stat_ifdef_dir_exit, "stat_ifdef_dir");
                    }
                    _ptTree0 =  ReplaceTree(retTree, 3, _ptTree1);
                }
                _retValue =  _ptTree0 ;
                goto stat_ifdef_dir_ret ;
            }
            break ;
        case ENDIF_DIR : 
            tokenAhead = 0 ;
            CommTerm();
            {
                _retValue =  retTree ;
                goto stat_ifdef_dir_ret ;
            }
            break ;
        default : 
            MulFreeTree(6, _addlist1, _addlist2, express, list, list2, retTree);
            CASE_EXIT(stat_ifdef_dir_exit, "either ELSE_DIR or ELIF_DIR or ENDIF_DIR");
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
    return (PPTREE)0 ;
stat_ifdef_dir_exit : 
    _Debug = TRACE_RULE("stat_ifdef_dir", TRACE_EXIT, (PPTREE)0);
    _funcLevel-- ;
    keepCarriage =  _oldkeepCarriage ;
    return (PPTREE) -1 ;
stat_ifdef_dir_ret : 
    _Debug = TRACE_RULE("stat_ifdef_dir", TRACE_RETURN, _retValue);
    (tokenAhead || (LexComment(), tokenAhead =  -1, TRACE_LEX(1)));
    if ( _nbPre || listComm ) 
        AddComm(_ptPreComm, _nbPre, _retValue, lastTree);
    else {
        _lastTree =  _retValue ;
        _funcLevel-- ;
    }
    keepCarriage =  _oldkeepCarriage ;
    return _retValue ;
}

PPTREE cplus::statement ( int error_free )
{
    int             _oldswitchContext = switchContext ;
    PFILE_POSITION  _filePosition = (PFILE_POSITION)0 ;
    int             _value, _nbPre = 0 ;
    PCOMM_ELEM      _ptPreComm = ((tokenAhead || (LexComment(), tokenAhead =  -1, TRACE_LEX(1))), listComm ? LookComm(&_nbPre) : (_funcLevel++, (PCOMM_ELEM)0));
    int             _Debug = TRACE_RULE("statement", TRACE_ENTER, (PPTREE)0);
    PPTREE          lastTree = _lastTree, _retValue ;
    PPTREE          statTree = (PPTREE)0, opt = (PPTREE)0, stat = (PPTREE)0 ;
    
    (tokenAhead == 1 || (Lex(), TRACE_LEX(1)));
    switch ( lexEl.Value ) {
        case BREAK : 
            tokenAhead = 0 ;
            CommTerm();
            {
                PPTREE  _ptRes0 = 0 ;
                _ptRes0  =  MakeTree(BREAK, 1);
                statTree =  _ptRes0 ;
            }
            (tokenAhead == 1 || (Lex(), TRACE_LEX(1)));
            if ( !SEE_TOKEN(PVIR, ";") || !(CommTerm(), 1) ) {
                MulFreeTree(3, opt, stat, statTree);
                TOKEN_EXIT(statement_exit, ";");
            } else {
                tokenAhead =  0 ;
            }
            break ;
        case CONTINUE : 
            tokenAhead = 0 ;
            CommTerm();
            {
                PPTREE  _ptRes0 = 0 ;
                _ptRes0  =  MakeTree(CONTINUE, 1);
                statTree =  _ptRes0 ;
            }
            (tokenAhead == 1 || (Lex(), TRACE_LEX(1)));
            if ( !SEE_TOKEN(PVIR, ";") || !(CommTerm(), 1) ) {
                MulFreeTree(3, opt, stat, statTree);
                TOKEN_EXIT(statement_exit, ";");
            } else {
                tokenAhead =  0 ;
            }
            break ;
        case DO : 
            tokenAhead = 0 ;
            CommTerm();
            {
                switchContext =  0 ;
                {
                    PPTREE  _ptTree0 = 0, _ptRes0 = 0 ;
                    _ptRes0 =  MakeTree(DO, 2);
                    if ( (_ptTree0 = NQUICK_CALL(_Tak(statement)(error_free), 136, cplus)) == (PPTREE) -1 ) {
                        MulFreeTree(5, _ptRes0, _ptTree0, opt, stat, statTree);
                        PROG_EXIT(statement_exit, "statement");
                    }
                    ReplaceTree(_ptRes0, 1, _ptTree0);
                    statTree =  _ptRes0 ;
                }
                switchContext =  _oldswitchContext ;
            }
            (tokenAhead == 1 || (Lex(), TRACE_LEX(1)));
            if ( !SEE_TOKEN(WHILE, "while") || !(CommTerm(), 1) ) {
                MulFreeTree(3, opt, stat, statTree);
                TOKEN_EXIT(statement_exit, "while");
            } else {
                tokenAhead =  0 ;
            }
            (tokenAhead == 1 || (Lex(), TRACE_LEX(1)));
            if ( !SEE_TOKEN(POUV, "(") || !(CommTerm(), 1) ) {
                MulFreeTree(3, opt, stat, statTree);
                TOKEN_EXIT(statement_exit, "(");
            } else {
                tokenAhead =  0 ;
            }
            {
                PPTREE  _ptTree0 = 0 ;
                if ( (_ptTree0 = NQUICK_CALL(_Tak(expression)(error_free), 62, cplus)) == (PPTREE) -1 ) {
                    MulFreeTree(4, _ptTree0, opt, stat, statTree);
                    PROG_EXIT(statement_exit, "statement");
                }
                ReplaceTree(statTree, 2, _ptTree0);
            }
            (tokenAhead == 1 || (Lex(), TRACE_LEX(1)));
            if ( !SEE_TOKEN(PFER, ")") || !(CommTerm(), 1) ) {
                MulFreeTree(3, opt, stat, statTree);
                TOKEN_EXIT(statement_exit, ")");
            } else {
                tokenAhead =  0 ;
            }
            (tokenAhead == 1 || (Lex(), TRACE_LEX(1)));
            if ( !SEE_TOKEN(PVIR, ";") || !(CommTerm(), 1) ) {
                MulFreeTree(3, opt, stat, statTree);
                TOKEN_EXIT(statement_exit, ";");
            } else {
                tokenAhead =  0 ;
            }
            break ;
        case AOUV : 
            if ( (statTree = NQUICK_CALL(_Tak(compound_statement)(error_free), 28, cplus)) == (PPTREE) -1 ) {
                MulFreeTree(3, opt, stat, statTree);
                PROG_EXIT(statement_exit, "statement");
            }
            break ;
        case FOR : 
            tokenAhead = 0 ;
            CommTerm();
            {
                PPTREE  _ptTree0 = 0 ;
                if ( (_ptTree0 = NQUICK_CALL(_Tak(for_statement)(error_free), 75, cplus)) == (PPTREE) -1 ) {
                    MulFreeTree(4, _ptTree0, opt, stat, statTree);
                    PROG_EXIT(statement_exit, "statement");
                }
                _retValue =  _ptTree0 ;
                goto statement_ret ;
            }
            break ;
        case GOTO : 
            tokenAhead = 0 ;
            CommTerm();
            {
                PPTREE  _ptTree0 = 0, _ptRes0 = 0 ;
                _ptRes0 =  MakeTree(GOTO, 1);
                {
                    PPTREE  _ptTree1 = 0, _ptRes1 = 0 ;
                    _ptRes1 =  MakeTree(IDENT, 1);
                    (tokenAhead == 1 || (Lex(), TRACE_LEX(1)));
                    if ( !TERM_OR_META(IDENT, "IDENT") || !BUILD_TERM_META(_ptTree1) ) {
                        MulFreeTree(7, _ptRes1, _ptTree1, _ptRes0, _ptTree0, opt, stat, statTree);
                        TOKEN_EXIT(statement_exit, "IDENT");
                    } else {
                        tokenAhead =  0 ;
                    }
                    ReplaceTree(_ptRes1, 1, _ptTree1);
                    _ptTree0 =  _ptRes1 ;
                }
                ReplaceTree(_ptRes0, 1, _ptTree0);
                statTree =  _ptRes0 ;
            }
            (tokenAhead == 1 || (Lex(), TRACE_LEX(1)));
            if ( !SEE_TOKEN(PVIR, ";") || !(CommTerm(), 1) ) {
                MulFreeTree(3, opt, stat, statTree);
                TOKEN_EXIT(statement_exit, ";");
            } else {
                tokenAhead =  0 ;
            }
            break ;
        case IF : 
            tokenAhead = 0 ;
            CommTerm();
            (tokenAhead == 1 || (Lex(), TRACE_LEX(1)));
            if ( !SEE_TOKEN(POUV, "(") || !(CommTerm(), 1) ) {
                MulFreeTree(3, opt, stat, statTree);
                TOKEN_EXIT(statement_exit, "(");
            } else {
                tokenAhead =  0 ;
            }
            {
                PPTREE  _ptTree0 = 0, _ptRes0 = 0 ;
                _ptRes0 =  MakeTree(IF, 3);
                if ( (_ptTree0 = NQUICK_CALL(_Tak(expression)(error_free), 62, cplus)) == (PPTREE) -1 ) {
                    MulFreeTree(5, _ptRes0, _ptTree0, opt, stat, statTree);
                    PROG_EXIT(statement_exit, "statement");
                }
                ReplaceTree(_ptRes0, 1, _ptTree0);
                statTree =  _ptRes0 ;
            }
            (tokenAhead == 1 || (Lex(), TRACE_LEX(1)));
            if ( !SEE_TOKEN(PFER, ")") || !(CommTerm(), 1) ) {
                MulFreeTree(3, opt, stat, statTree);
                TOKEN_EXIT(statement_exit, ")");
            } else {
                tokenAhead =  0 ;
            }
            {
                switchContext =  0 ;
                {
                    PPTREE  _ptTree0 = 0 ;
                    if ( (_ptTree0 = NQUICK_CALL(_Tak(statement)(error_free), 136, cplus)) == (PPTREE) -1 ) {
                        MulFreeTree(4, _ptTree0, opt, stat, statTree);
                        PROG_EXIT(statement_exit, "statement");
                    }
                    ReplaceTree(statTree, 2, _ptTree0);
                }
                switchContext =  _oldswitchContext ;
            }
            if ( (tokenAhead == 1 || (Lex(), TRACE_LEX(1))) && SEE_TOKEN(ELSE, "else") && ((tokenAhead = 0), CommTerm(), 1) ) {
                {
                    switchContext =  0 ;
                    {
                        PPTREE  _ptTree0 = 0 ;
                        if ( (_ptTree0 = NQUICK_CALL(_Tak(statement)(error_free), 136, cplus)) == (PPTREE) -1 ) {
                            MulFreeTree(4, _ptTree0, opt, stat, statTree);
                            PROG_EXIT(statement_exit, "statement");
                        }
                        ReplaceTree(statTree, 3, _ptTree0);
                    }
                    switchContext =  _oldswitchContext ;
                }
            }
            break ;
        case PVIR : 
            tokenAhead = 0 ;
            CommTerm();
            {
                PPTREE  _ptRes0 = 0 ;
                _ptRes0  =  MakeTree(STAT_VOID, 0);
                statTree =  _ptRes0 ;
            }
            break ;
        case RETURN : 
            tokenAhead = 0 ;
            CommTerm();
            {
                PPTREE  _ptRes0 = 0 ;
                _ptRes0  =  MakeTree(RETURN, 1);
                statTree =  _ptRes0 ;
            }
            if ( NPUSH_CALL_AFF_VERIF(opt = , _Tak(expression), 62, cplus) ) {
                ReplaceTree(statTree, 1, opt);
            }
            (tokenAhead == 1 || (Lex(), TRACE_LEX(1)));
            if ( !SEE_TOKEN(PVIR, ";") || !(CommTerm(), 1) ) {
                MulFreeTree(3, opt, stat, statTree);
                TOKEN_EXIT(statement_exit, ";");
            } else {
                tokenAhead =  0 ;
            }
            break ;
        case SWITCH : 
            tokenAhead = 0 ;
            CommTerm();
            (tokenAhead == 1 || (Lex(), TRACE_LEX(1)));
            if ( !SEE_TOKEN(POUV, "(") || !(CommTerm(), 1) ) {
                MulFreeTree(3, opt, stat, statTree);
                TOKEN_EXIT(statement_exit, "(");
            } else {
                tokenAhead =  0 ;
            }
            {
                PPTREE  _ptTree0 = 0, _ptRes0 = 0 ;
                _ptRes0 =  MakeTree(SWITCH, 2);
                if ( (_ptTree0 = NQUICK_CALL(_Tak(expression)(error_free), 62, cplus)) == (PPTREE) -1 ) {
                    MulFreeTree(5, _ptRes0, _ptTree0, opt, stat, statTree);
                    PROG_EXIT(statement_exit, "statement");
                }
                ReplaceTree(_ptRes0, 1, _ptTree0);
                statTree =  _ptRes0 ;
            }
            (tokenAhead == 1 || (Lex(), TRACE_LEX(1)));
            if ( !SEE_TOKEN(PFER, ")") || !(CommTerm(), 1) ) {
                MulFreeTree(3, opt, stat, statTree);
                TOKEN_EXIT(statement_exit, ")");
            } else {
                tokenAhead =  0 ;
            }
            {
                switchContext =  0 ;
                {
                    PPTREE  _ptTree0 = 0 ;
                    if ( (_ptTree0 = NQUICK_CALL(_Tak(switch_list)(error_free), 140, cplus)) == (PPTREE) -1 ) {
                        MulFreeTree(4, _ptTree0, opt, stat, statTree);
                        PROG_EXIT(statement_exit, "statement");
                    }
                    ReplaceTree(statTree, 2, _ptTree0);
                }
                switchContext =  _oldswitchContext ;
            }
            break ;
        case WHILE : 
            tokenAhead = 0 ;
            CommTerm();
            (tokenAhead == 1 || (Lex(), TRACE_LEX(1)));
            if ( !SEE_TOKEN(POUV, "(") || !(CommTerm(), 1) ) {
                MulFreeTree(3, opt, stat, statTree);
                TOKEN_EXIT(statement_exit, "(");
            } else {
                tokenAhead =  0 ;
            }
            {
                PPTREE  _ptTree0 = 0, _ptRes0 = 0 ;
                _ptRes0 =  MakeTree(WHILE, 2);
                if ( (_ptTree0 = NQUICK_CALL(_Tak(expression)(error_free), 62, cplus)) == (PPTREE) -1 ) {
                    MulFreeTree(5, _ptRes0, _ptTree0, opt, stat, statTree);
                    PROG_EXIT(statement_exit, "statement");
                }
                ReplaceTree(_ptRes0, 1, _ptTree0);
                statTree =  _ptRes0 ;
            }
            (tokenAhead == 1 || (Lex(), TRACE_LEX(1)));
            if ( !SEE_TOKEN(PFER, ")") || !(CommTerm(), 1) ) {
                MulFreeTree(3, opt, stat, statTree);
                TOKEN_EXIT(statement_exit, ")");
            } else {
                tokenAhead =  0 ;
            }
            {
                switchContext =  0 ;
                {
                    PPTREE  _ptTree0 = 0 ;
                    if ( (_ptTree0 = NQUICK_CALL(_Tak(statement)(error_free), 136, cplus)) == (PPTREE) -1 ) {
                        MulFreeTree(4, _ptTree0, opt, stat, statTree);
                        PROG_EXIT(statement_exit, "statement");
                    }
                    ReplaceTree(statTree, 2, _ptTree0);
                }
                switchContext =  _oldswitchContext ;
            }
            break ;
        case FORALLSONS : 
            tokenAhead = 0 ;
            CommTerm();
            (tokenAhead == 1 || (Lex(), TRACE_LEX(1)));
            if ( !SEE_TOKEN(POUV, "(") || !(CommTerm(), 1) ) {
                MulFreeTree(3, opt, stat, statTree);
                TOKEN_EXIT(statement_exit, "(");
            } else {
                tokenAhead =  0 ;
            }
            {
                PPTREE  _ptTree0 = 0, _ptRes0 = 0 ;
                _ptRes0 =  MakeTree(FORALLSONS, 2);
                {
                    PPTREE  _ptTree1 = 0, _ptRes1 = 0 ;
                    _ptRes1 =  MakeTree(IDENT, 1);
                    (tokenAhead == 1 || (Lex(), TRACE_LEX(1)));
                    if ( !TERM_OR_META(IDENT, "IDENT") || !BUILD_TERM_META(_ptTree1) ) {
                        MulFreeTree(7, _ptRes1, _ptTree1, _ptRes0, _ptTree0, opt, stat, statTree);
                        TOKEN_EXIT(statement_exit, "IDENT");
                    } else {
                        tokenAhead =  0 ;
                    }
                    ReplaceTree(_ptRes1, 1, _ptTree1);
                    _ptTree0 =  _ptRes1 ;
                }
                ReplaceTree(_ptRes0, 1, _ptTree0);
                statTree =  _ptRes0 ;
            }
            (tokenAhead == 1 || (Lex(), TRACE_LEX(1)));
            if ( !SEE_TOKEN(VIRG, ",") || !(CommTerm(), 1) ) {
                MulFreeTree(3, opt, stat, statTree);
                TOKEN_EXIT(statement_exit, ",");
            } else {
                tokenAhead =  0 ;
            }
            {
                switchContext =  0 ;
                if ( !NPUSH_CALL_AFF_VERIF(stat = , _Tak(statement), 136, cplus) ) {
                    if ( (stat = NQUICK_CALL(_Tak(expression)(error_free), 62, cplus)) == (PPTREE) -1 ) {
                        MulFreeTree(3, opt, stat, statTree);
                        PROG_EXIT(statement_exit, "statement");
                    }
                }
                switchContext =  _oldswitchContext ;
            }
            ReplaceTree(statTree, 2, stat);
            (tokenAhead == 1 || (Lex(), TRACE_LEX(1)));
            if ( !SEE_TOKEN(PFER, ")") || !(CommTerm(), 1) ) {
                MulFreeTree(3, opt, stat, statTree);
                TOKEN_EXIT(statement_exit, ")");
            } else {
                tokenAhead =  0 ;
            }
            break ;
        case THROW : 
            tokenAhead = 0 ;
            CommTerm();
            {
                PPTREE  _ptRes0 = 0 ;
                _ptRes0  =  MakeTree(THROW_ANSI, 1);
                statTree =  _ptRes0 ;
            }
            if ( NPUSH_CALL_AFF_VERIF(opt = , _Tak(expression), 62, cplus) ) {
                ReplaceTree(statTree, 1, opt);
            }
            (tokenAhead == 1 || (Lex(), TRACE_LEX(1)));
            if ( !SEE_TOKEN(PVIR, ";") || !(CommTerm(), 1) ) {
                MulFreeTree(3, opt, stat, statTree);
                TOKEN_EXIT(statement_exit, ";");
            } else {
                tokenAhead =  0 ;
            }
            break ;
        case TRY : 
            if ( (statTree = NQUICK_CALL(_Tak(exception_ansi)(error_free), 59, cplus)) == (PPTREE) -1 ) {
                MulFreeTree(3, opt, stat, statTree);
                PROG_EXIT(statement_exit, "statement");
            }
            break ;
        case META : 
            if ( NPUSH_CALL_VERIF(_Tak(label_beg), 87, cplus) ) {
                {
                    PPTREE  _ptTree0 = 0, _ptRes0 = 0 ;
                    _ptRes0 =  MakeTree(LABEL, 2);
                    {
                        PPTREE  _ptTree1 = 0, _ptRes1 = 0 ;
                        _ptRes1 =  MakeTree(IDENT, 1);
                        (tokenAhead == 1 || (Lex(), TRACE_LEX(1)));
                        if ( !TERM_OR_META(IDENT, "IDENT") || !BUILD_TERM_META(_ptTree1) ) {
                            MulFreeTree(7, _ptRes1, _ptTree1, _ptRes0, _ptTree0, opt, stat, statTree);
                            TOKEN_EXIT(statement_exit, "IDENT");
                        } else {
                            tokenAhead =  0 ;
                        }
                        ReplaceTree(_ptRes1, 1, _ptTree1);
                        _ptTree0 =  _ptRes1 ;
                    }
                    ReplaceTree(_ptRes0, 1, _ptTree0);
                    statTree =  _ptRes0 ;
                }
                (tokenAhead == 1 || (Lex(), TRACE_LEX(1)));
                if ( !SEE_TOKEN(DPOI, ":") || !(CommTerm(), 1) ) {
                    MulFreeTree(3, opt, stat, statTree);
                    TOKEN_EXIT(statement_exit, ":");
                } else {
                    tokenAhead =  0 ;
                }
                {
                    switchContext =  0 ;
                    {
                        PPTREE  _ptTree0 = 0 ;
                        if ( (_ptTree0 = NQUICK_CALL(_Tak(statement)(error_free), 136, cplus)) == (PPTREE) -1 ) {
                            MulFreeTree(4, _ptTree0, opt, stat, statTree);
                            PROG_EXIT(statement_exit, "statement");
                        }
                        ReplaceTree(statTree, 2, _ptTree0);
                    }
                    switchContext =  _oldswitchContext ;
                }
            } else {
                if ( NPUSH_CALL_VERIF(_Tak(ident_mul), 78, cplus) ) {
                    MulFreeTree(3, opt, stat, statTree);
                    LEX_EXIT("", 0);
                    goto statement_exit ;
                } else {
                    if ( (statTree = NQUICK_CALL(_Tak(expression)(error_free), 62, cplus)) == (PPTREE) -1 ) {
                        MulFreeTree(3, opt, stat, statTree);
                        PROG_EXIT(statement_exit, "statement");
                    }
                    (tokenAhead == 1 || (Lex(), TRACE_LEX(1)));
                    if ( !SEE_TOKEN(PVIR, ";") || !(CommTerm(), 1) ) {
                        MulFreeTree(3, opt, stat, statTree);
                        TOKEN_EXIT(statement_exit, ";");
                    } else {
                        tokenAhead =  0 ;
                    }
                }
            }
            break ;
        case CASE : 
            if ( !(switchContext) ) {
                MulFreeTree(3, opt, stat, statTree);
                LEX_EXIT("", 0);
                goto statement_exit ;
            } else {
                {
                    PPTREE  _ptTree0 = 0 ;
                    if ( (_ptTree0 = NQUICK_CALL(_Tak(switch_elem)(error_free), 139, cplus)) == (PPTREE) -1 ) {
                        MulFreeTree(4, _ptTree0, opt, stat, statTree);
                        PROG_EXIT(statement_exit, "statement");
                    }
                    _retValue =  _ptTree0 ;
                    goto statement_ret ;
                }
            }
            break ;
        case DEFAULT : 
            if ( !(switchContext) ) {
                MulFreeTree(3, opt, stat, statTree);
                LEX_EXIT("", 0);
                goto statement_exit ;
            } else {
                {
                    PPTREE  _ptTree0 = 0 ;
                    if ( (_ptTree0 = NQUICK_CALL(_Tak(switch_elem)(error_free), 139, cplus)) == (PPTREE) -1 ) {
                        MulFreeTree(4, _ptTree0, opt, stat, statTree);
                        PROG_EXIT(statement_exit, "statement");
                    }
                    _retValue =  _ptTree0 ;
                    goto statement_ret ;
                }
            }
            break ;
        case IDENT : 
            (tokenAhead == 14 || (the_exit(), TRACE_LEX(1)));
            switch ( lexEl.Value ) {
                case META : 
                case FUNC_SPEC : 
                    {
                        PPTREE  _ptTree0 = 0, _ptRes0 = 0 ;
                        _ptRes0 =  MakeTree(FUNC_SPEC, 2);
                        {
                            PPTREE  _ptTree1 = 0, _ptRes1 = 0 ;
                            _ptRes1 =  MakeTree(IDENT, 1);
                            (tokenAhead == 14 || (the_exit(), TRACE_LEX(1)));
                            if ( !TERM_OR_META(FUNC_SPEC, "FUNC_SPEC") || !BUILD_TERM_META(_ptTree1) ) {
                                MulFreeTree(7, _ptRes1, _ptTree1, _ptRes0, _ptTree0, opt, stat, statTree);
                                TOKEN_EXIT(statement_exit, "FUNC_SPEC");
                            } else {
                                tokenAhead =  0 ;
                            }
                            ReplaceTree(_ptRes1, 1, _ptTree1);
                            _ptTree0 =  _ptRes1 ;
                        }
                        ReplaceTree(_ptRes0, 1, _ptTree0);
                        statTree =  _ptRes0 ;
                    }
                    (tokenAhead == 1 || (Lex(), TRACE_LEX(1)));
                    if ( !SEE_TOKEN(POUV, "(") || !(CommTerm(), 1) ) {
                        MulFreeTree(3, opt, stat, statTree);
                        TOKEN_EXIT(statement_exit, "(");
                    } else {
                        tokenAhead =  0 ;
                    }
                    {
                        PPTREE  _ptTree0 = 0 ;
                        if ( (_ptTree0 = NQUICK_CALL(_Tak(expression)(error_free), 62, cplus)) == (PPTREE) -1 ) {
                            MulFreeTree(4, _ptTree0, opt, stat, statTree);
                            PROG_EXIT(statement_exit, "statement");
                        }
                        ReplaceTree(statTree, 2, _ptTree0);
                    }
                    (tokenAhead == 1 || (Lex(), TRACE_LEX(1)));
                    if ( !SEE_TOKEN(PFER, ")") || !(CommTerm(), 1) ) {
                        MulFreeTree(3, opt, stat, statTree);
                        TOKEN_EXIT(statement_exit, ")");
                    } else {
                        tokenAhead =  0 ;
                    }
                    break ;
                default : 
                    if ( NPUSH_CALL_VERIF(_Tak(label_beg), 87, cplus) ) {
                        {
                            PPTREE  _ptTree0 = 0, _ptRes0 = 0 ;
                            _ptRes0 =  MakeTree(LABEL, 2);
                            {
                                PPTREE  _ptTree1 = 0, _ptRes1 = 0 ;
                                _ptRes1 =  MakeTree(IDENT, 1);
                                (tokenAhead == 1 || (Lex(), TRACE_LEX(1)));
                                if ( !TERM_OR_META(IDENT, "IDENT") || !BUILD_TERM_META(_ptTree1) ) {
                                    MulFreeTree(7, _ptRes1, _ptTree1, _ptRes0, _ptTree0, opt, stat, statTree);
                                    TOKEN_EXIT(statement_exit, "IDENT");
                                } else {
                                    tokenAhead =  0 ;
                                }
                                ReplaceTree(_ptRes1, 1, _ptTree1);
                                _ptTree0 =  _ptRes1 ;
                            }
                            ReplaceTree(_ptRes0, 1, _ptTree0);
                            statTree =  _ptRes0 ;
                        }
                        (tokenAhead == 1 || (Lex(), TRACE_LEX(1)));
                        if ( !SEE_TOKEN(DPOI, ":") || !(CommTerm(), 1) ) {
                            MulFreeTree(3, opt, stat, statTree);
                            TOKEN_EXIT(statement_exit, ":");
                        } else {
                            tokenAhead =  0 ;
                        }
                        {
                            switchContext =  0 ;
                            {
                                PPTREE  _ptTree0 = 0 ;
                                if ( (_ptTree0 = NQUICK_CALL(_Tak(statement)(error_free), 136, cplus)) == (PPTREE) -1 ) {
                                    MulFreeTree(4, _ptTree0, opt, stat, statTree);
                                    PROG_EXIT(statement_exit, "statement");
                                }
                                ReplaceTree(statTree, 2, _ptTree0);
                            }
                            switchContext =  _oldswitchContext ;
                        }
                    } else {
                        if ( NPUSH_CALL_VERIF(_Tak(ident_mul), 78, cplus) ) {
                            MulFreeTree(3, opt, stat, statTree);
                            LEX_EXIT("", 0);
                            goto statement_exit ;
                        } else {
                            if ( (statTree = NQUICK_CALL(_Tak(statement_expression)(error_free), 137, cplus)) == (PPTREE) -1 ) {
                                MulFreeTree(3, opt, stat, statTree);
                                PROG_EXIT(statement_exit, "statement");
                            }
                        }
                    }
                    break ;
            }
            break ;
        default : 
            if ( NPUSH_CALL_VERIF(_Tak(ident_mul), 78, cplus) ) {
                MulFreeTree(3, opt, stat, statTree);
                LEX_EXIT("", 0);
                goto statement_exit ;
            } else {
                if ( (statTree = NQUICK_CALL(_Tak(expression)(error_free), 62, cplus)) == (PPTREE) -1 ) {
                    MulFreeTree(3, opt, stat, statTree);
                    PROG_EXIT(statement_exit, "statement");
                }
                (tokenAhead == 1 || (Lex(), TRACE_LEX(1)));
                if ( !SEE_TOKEN(PVIR, ";") || !(CommTerm(), 1) ) {
                    MulFreeTree(3, opt, stat, statTree);
                    TOKEN_EXIT(statement_exit, ";");
                } else {
                    tokenAhead =  0 ;
                }
            }
            break ;
    }
    {
        _retValue =  statTree ;
        goto statement_ret ;
    }
    (tokenAhead || (LexComment(), tokenAhead =  -1, TRACE_LEX(1)));
    if ( _nbPre || listComm ) 
        AddComm(_ptPreComm, _nbPre, (PPTREE)0, lastTree);
    else {
        _lastTree =  (PPTREE)0 ;
        _funcLevel-- ;
    }
    switchContext =  _oldswitchContext ;
    return (PPTREE)0 ;
statement_exit : 
    _Debug = TRACE_RULE("statement", TRACE_EXIT, (PPTREE)0);
    _funcLevel-- ;
    switchContext =  _oldswitchContext ;
    return (PPTREE) -1 ;
statement_ret : 
    _Debug = TRACE_RULE("statement", TRACE_RETURN, _retValue);
    (tokenAhead || (LexComment(), tokenAhead =  -1, TRACE_LEX(1)));
    if ( _nbPre || listComm ) 
        AddComm(_ptPreComm, _nbPre, _retValue, lastTree);
    else {
        _lastTree =  _retValue ;
        _funcLevel-- ;
    }
    switchContext =  _oldswitchContext ;
    return _retValue ;
}

PPTREE cplus::statement_expression ( int error_free )
{
    PFILE_POSITION  _filePosition = (PFILE_POSITION)0 ;
    int             _value, _nbPre = 0 ;
    PCOMM_ELEM      _ptPreComm = ((tokenAhead || (LexComment(), tokenAhead =  -1, TRACE_LEX(1))), listComm ? LookComm(&_nbPre) : (_funcLevel++, (PCOMM_ELEM)0));
    int             _Debug = TRACE_RULE("statement_expression", TRACE_ENTER, (PPTREE)0);
    PPTREE          lastTree = _lastTree, _retValue ;
    PPTREE          statTree = (PPTREE)0 ;
    
    if ( (statTree = NQUICK_CALL(_Tak(expression)(error_free), 62, cplus)) == (PPTREE) -1 ) {
        MulFreeTree(1, statTree);
        PROG_EXIT(statement_expression_exit, "statement_expression");
    }
    (tokenAhead == 1 || (Lex(), TRACE_LEX(1)));
    if ( !SEE_TOKEN(PVIR, ";") || !(CommTerm(), 1) ) {
        MulFreeTree(1, statTree);
        TOKEN_EXIT(statement_expression_exit, ";");
    } else {
        tokenAhead =  0 ;
    }
    {
        _retValue =  statTree ;
        goto statement_expression_ret ;
    }
    (tokenAhead || (LexComment(), tokenAhead =  -1, TRACE_LEX(1)));
    if ( _nbPre || listComm ) 
        AddComm(_ptPreComm, _nbPre, (PPTREE)0, lastTree);
    else {
        _lastTree =  (PPTREE)0 ;
        _funcLevel-- ;
    }
    return (PPTREE)0 ;
statement_expression_exit : 
    _Debug = TRACE_RULE("statement_expression", TRACE_EXIT, (PPTREE)0);
    _funcLevel-- ;
    return (PPTREE) -1 ;
statement_expression_ret : 
    _Debug = TRACE_RULE("statement_expression", TRACE_RETURN, _retValue);
    (tokenAhead || (LexComment(), tokenAhead =  -1, TRACE_LEX(1)));
    if ( _nbPre || listComm ) 
        AddComm(_ptPreComm, _nbPre, _retValue, lastTree);
    else {
        _lastTree =  _retValue ;
        _funcLevel-- ;
    }
    return _retValue ;
}

PPTREE cplus::string_list ( int error_free )
{
    PFILE_POSITION  _filePosition = (PFILE_POSITION)0 ;
    int             _value, _nbPre = 0 ;
    PCOMM_ELEM      _ptPreComm = ((tokenAhead || (LexComment(), tokenAhead =  -1, TRACE_LEX(1))), listComm ? LookComm(&_nbPre) : (_funcLevel++, (PCOMM_ELEM)0));
    int             _Debug = TRACE_RULE("string_list", TRACE_ENTER, (PPTREE)0);
    PPTREE          lastTree = _lastTree, _retValue ;
    PPTREE          _addlist1 = (PPTREE)0 ;
    PPTREE          retTree = (PPTREE)0, list = (PPTREE)0 ;
    
    {
        PPTREE  _ptTree0 = 0, _ptRes0 = 0 ;
        _ptRes0 =  MakeTree(STRING, 1);
        (tokenAhead == 1 || (Lex(), TRACE_LEX(1)));
        if ( !TERM_OR_META(STRING, "STRING") || !BUILD_TERM_META(_ptTree0) ) {
            MulFreeTree(5, _ptRes0, _ptTree0, _addlist1, list, retTree);
            TOKEN_EXIT(string_list_exit, "STRING");
        } else {
            tokenAhead =  0 ;
        }
        ReplaceTree(_ptRes0, 1, _ptTree0);
        retTree =  _ptRes0 ;
    }
    if ( (tokenAhead == 1 || (Lex(), TRACE_LEX(1))) && SEE_TOKEN(STRING, "STRING") ) {
        list      =  AddList(list, retTree);
        _addlist1 =  list ;
        while ( (tokenAhead == 1 || (Lex(), TRACE_LEX(1))) && SEE_TOKEN(STRING, "STRING") ) {
            {
                PPTREE  _ptTree0 = 0 ;
                {
                    PPTREE  _ptTree1 = 0, _ptRes1 = 0 ;
                    _ptRes1 =  MakeTree(STRING, 1);
                    (tokenAhead == 1 || (Lex(), TRACE_LEX(1)));
                    if ( !TERM_OR_META(STRING, "STRING") || !BUILD_TERM_META(_ptTree1) ) {
                        MulFreeTree(6, _ptRes1, _ptTree1, _ptTree0, _addlist1, list, retTree);
                        TOKEN_EXIT(string_list_exit, "STRING");
                    } else {
                        tokenAhead =  0 ;
                    }
                    ReplaceTree(_ptRes1, 1, _ptTree1);
                    _ptTree0 =  _ptRes1 ;
                }
                _addlist1 =  AddList(_addlist1, _ptTree0);
            }
            if ( list ) {
                _addlist1 =  SonTree(_addlist1, 2);
            } else {
                list =  _addlist1 ;
            }
        }
        {
            PPTREE  _ptRes0 = 0 ;
            _ptRes0 =  MakeTree(STRING_LIST, 1);
            ReplaceTree(_ptRes0, 1, list);
            retTree =  _ptRes0 ;
        }
    }
    {
        _retValue =  retTree ;
        goto string_list_ret ;
    }
    (tokenAhead || (LexComment(), tokenAhead =  -1, TRACE_LEX(1)));
    if ( _nbPre || listComm ) 
        AddComm(_ptPreComm, _nbPre, (PPTREE)0, lastTree);
    else {
        _lastTree =  (PPTREE)0 ;
        _funcLevel-- ;
    }
    return (PPTREE)0 ;
string_list_exit : 
    _Debug = TRACE_RULE("string_list", TRACE_EXIT, (PPTREE)0);
    _funcLevel-- ;
    return (PPTREE) -1 ;
string_list_ret : 
    _Debug = TRACE_RULE("string_list", TRACE_RETURN, _retValue);
    (tokenAhead || (LexComment(), tokenAhead =  -1, TRACE_LEX(1)));
    if ( _nbPre || listComm ) 
        AddComm(_ptPreComm, _nbPre, _retValue, lastTree);
    else {
        _lastTree =  _retValue ;
        _funcLevel-- ;
    }
    return _retValue ;
}

PPTREE cplus::switch_elem ( int error_free )
{
    int             _oldswitchContext = switchContext ;
    PFILE_POSITION  _filePosition = (PFILE_POSITION)0 ;
    int             _value, _nbPre = 0 ;
    PCOMM_ELEM      _ptPreComm = ((tokenAhead || (LexComment(), tokenAhead =  -1, TRACE_LEX(1))), listComm ? LookComm(&_nbPre) : (_funcLevel++, (PCOMM_ELEM)0));
    int             _Debug = TRACE_RULE("switch_elem", TRACE_ENTER, (PPTREE)0);
    PPTREE          lastTree = _lastTree, _retValue ;
    PPTREE          _addlist1 = (PPTREE)0, _addlist2 = (PPTREE)0 ;
    PPTREE          retTree = (PPTREE)0, list = (PPTREE)0, inter = (PPTREE)0 ;
    
    (tokenAhead == 1 || (Lex(), TRACE_LEX(1)));
    switch ( lexEl.Value ) {
        case CASE : 
            tokenAhead = 0 ;
            CommTerm();
            {
                PPTREE  _ptTree0 = 0, _ptRes0 = 0 ;
                _ptRes0 =  MakeTree(CASE, 2);
                if ( (_ptTree0 = NQUICK_CALL(_Tak(expression)(error_free), 62, cplus)) == (PPTREE) -1 ) {
                    MulFreeTree(7, _ptRes0, _ptTree0, _addlist1, _addlist2, inter, list, retTree);
                    PROG_EXIT(switch_elem_exit, "switch_elem");
                }
                ReplaceTree(_ptRes0, 1, _ptTree0);
                retTree =  _ptRes0 ;
            }
            (tokenAhead == 1 || (Lex(), TRACE_LEX(1)));
            if ( !SEE_TOKEN(DPOI, ":") || !(CommTerm(), 1) ) {
                MulFreeTree(5, _addlist1, _addlist2, inter, list, retTree);
                TOKEN_EXIT(switch_elem_exit, ":");
            } else {
                tokenAhead =  0 ;
            }
            {
                switchContext =  0 ;
                _addlist1     =  list ;
                while ( NPUSH_CALL_AFF_VERIF(inter = , _Tak(statement), 136, cplus) || NPUSH_CALL_AFF_VERIF(inter = , _Tak(stat_dir), 132, cplus) ) {
                    _addlist1 =  AddList(_addlist1, inter);
                    if ( list ) {
                        _addlist1 =  SonTree(_addlist1, 2);
                    } else {
                        list =  _addlist1 ;
                    }
                }
                switchContext =  _oldswitchContext ;
            }
            {
                PPTREE  _ptTree0 = 0 ;
                _ptTree0  =  ReplaceTree(retTree, 2, list);
                _retValue =  _ptTree0 ;
                goto switch_elem_ret ;
            }
            break ;
        case DEFAULT : 
            tokenAhead = 0 ;
            CommTerm();
            {
                PPTREE  _ptRes0 = 0 ;
                _ptRes0 =  MakeTree(DEFAULT, 1);
                retTree =  _ptRes0 ;
            }
            (tokenAhead == 1 || (Lex(), TRACE_LEX(1)));
            if ( !SEE_TOKEN(DPOI, ":") || !(CommTerm(), 1) ) {
                MulFreeTree(5, _addlist1, _addlist2, inter, list, retTree);
                TOKEN_EXIT(switch_elem_exit, ":");
            } else {
                tokenAhead =  0 ;
            }
            {
                switchContext =  0 ;
                _addlist2     =  list ;
                while ( NPUSH_CALL_AFF_VERIF(inter = , _Tak(statement), 136, cplus) || NPUSH_CALL_AFF_VERIF(inter = , _Tak(stat_dir), 132, cplus) ) {
                    _addlist2 =  AddList(_addlist2, inter);
                    if ( list ) {
                        _addlist2 =  SonTree(_addlist2, 2);
                    } else {
                        list =  _addlist2 ;
                    }
                }
                switchContext =  _oldswitchContext ;
            }
            {
                PPTREE  _ptTree0 = 0 ;
                _ptTree0  =  ReplaceTree(retTree, 1, list);
                _retValue =  _ptTree0 ;
                goto switch_elem_ret ;
            }
            break ;
        default : 
            if ( NPUSH_CALL_AFF_VERIF(retTree = , _Tak(stat_dir_switch), 133, cplus) ) {
                {
                    _retValue =  retTree ;
                    goto switch_elem_ret ;
                }
            } else {
                MulFreeTree(5, _addlist1, _addlist2, inter, list, retTree);
                LEX_EXIT("", 0);
                goto switch_elem_exit ;
            }
            break ;
    }
    (tokenAhead || (LexComment(), tokenAhead =  -1, TRACE_LEX(1)));
    if ( _nbPre || listComm ) 
        AddComm(_ptPreComm, _nbPre, (PPTREE)0, lastTree);
    else {
        _lastTree =  (PPTREE)0 ;
        _funcLevel-- ;
    }
    switchContext =  _oldswitchContext ;
    return (PPTREE)0 ;
switch_elem_exit : 
    _Debug = TRACE_RULE("switch_elem", TRACE_EXIT, (PPTREE)0);
    _funcLevel-- ;
    switchContext =  _oldswitchContext ;
    return (PPTREE) -1 ;
switch_elem_ret : 
    _Debug = TRACE_RULE("switch_elem", TRACE_RETURN, _retValue);
    (tokenAhead || (LexComment(), tokenAhead =  -1, TRACE_LEX(1)));
    if ( _nbPre || listComm ) 
        AddComm(_ptPreComm, _nbPre, _retValue, lastTree);
    else {
        _lastTree =  _retValue ;
        _funcLevel-- ;
    }
    switchContext =  _oldswitchContext ;
    return _retValue ;
}

PPTREE cplus::switch_list ( int error_free )
{
    PFILE_POSITION  _filePosition = (PFILE_POSITION)0 ;
    int             _value, _nbPre = 0 ;
    PCOMM_ELEM      _ptPreComm = ((tokenAhead || (LexComment(), tokenAhead =  -1, TRACE_LEX(1))), listComm ? LookComm(&_nbPre) : (_funcLevel++, (PCOMM_ELEM)0));
    int             _Debug = TRACE_RULE("switch_list", TRACE_ENTER, (PPTREE)0);
    PPTREE          lastTree = _lastTree, _retValue ;
    PPTREE          _addlist1 = (PPTREE)0 ;
    PPTREE          list = (PPTREE)0, retTree = (PPTREE)0 ;
    
    (tokenAhead == 1 || (Lex(), TRACE_LEX(1)));
    if ( !SEE_TOKEN(AOUV, "{") || !(CommTerm(), 1) ) {
        MulFreeTree(3, _addlist1, list, retTree);
        TOKEN_EXIT(switch_list_exit, "{");
    } else {
        tokenAhead =  0 ;
    }
    _addlist1 =  list ;
    while ( NPUSH_CALL_AFF_VERIF(retTree = , _Tak(switch_elem), 139, cplus) ) {
        _addlist1 =  AddList(_addlist1, retTree);
        if ( list ) {
            _addlist1 =  SonTree(_addlist1, 2);
        } else {
            list =  _addlist1 ;
        }
    }
    (tokenAhead == 1 || (Lex(), TRACE_LEX(1)));
    if ( !SEE_TOKEN(AFER, "}") || !(CommTerm(), 1) ) {
        MulFreeTree(3, _addlist1, list, retTree);
        TOKEN_EXIT(switch_list_exit, "}");
    } else {
        tokenAhead =  0 ;
    }
    {
        _retValue =  list ;
        goto switch_list_ret ;
    }
    (tokenAhead || (LexComment(), tokenAhead =  -1, TRACE_LEX(1)));
    if ( _nbPre || listComm ) 
        AddComm(_ptPreComm, _nbPre, (PPTREE)0, lastTree);
    else {
        _lastTree =  (PPTREE)0 ;
        _funcLevel-- ;
    }
    return (PPTREE)0 ;
switch_list_exit : 
    _Debug = TRACE_RULE("switch_list", TRACE_EXIT, (PPTREE)0);
    _funcLevel-- ;
    return (PPTREE) -1 ;
switch_list_ret : 
    _Debug = TRACE_RULE("switch_list", TRACE_RETURN, _retValue);
    (tokenAhead || (LexComment(), tokenAhead =  -1, TRACE_LEX(1)));
    if ( _nbPre || listComm ) 
        AddComm(_ptPreComm, _nbPre, _retValue, lastTree);
    else {
        _lastTree =  _retValue ;
        _funcLevel-- ;
    }
    return _retValue ;
}

PPTREE cplus::template_type ( int error_free )
{
    PFILE_POSITION  _filePosition = (PFILE_POSITION)0 ;
    int             _value, _nbPre = 0 ;
    PCOMM_ELEM      _ptPreComm = ((tokenAhead || (LexComment(), tokenAhead =  -1, TRACE_LEX(1))), listComm ? LookComm(&_nbPre) : (_funcLevel++, (PCOMM_ELEM)0));
    int             _Debug = TRACE_RULE("template_type", TRACE_ENTER, (PPTREE)0);
    PPTREE          lastTree = _lastTree, _retValue ;
    PPTREE          _addlist1 = (PPTREE)0 ;
    PPTREE          exp = (PPTREE)0, listParam = (PPTREE)0 ;
    
    (tokenAhead == 1 || (Lex(), TRACE_LEX(1)));
    if ( !SEE_TOKEN(INFE, "<") || !(CommTerm(), 1) ) {
        MulFreeTree(3, _addlist1, exp, listParam);
        TOKEN_EXIT(template_type_exit, "<");
    } else {
        tokenAhead =  0 ;
    }
    _addlist1 =  listParam ;
    do {
        if ( NPUSH_CALL_AFF_VERIF(exp = , _Tak(additive_expression), 3, cplus) || NPUSH_CALL_AFF_VERIF(exp = , _Tak(type_name), 144, cplus) ) {
            _addlist1 =  AddList(_addlist1, exp);
            if ( listParam ) {
                _addlist1 =  SonTree(_addlist1, 2);
            } else {
                listParam =  _addlist1 ;
            }
        }
    } while ( !!((tokenAhead == 1 || (Lex(), TRACE_LEX(1))) && SEE_TOKEN(VIRG, ",") && ((tokenAhead = 0), CommTerm(), 1)) );
    (tokenAhead == 1 || (Lex(), TRACE_LEX(1)));
    if ( !SEE_TOKEN(SUPE, ">") || !(CommTerm(), 1) ) {
        MulFreeTree(3, _addlist1, exp, listParam);
        TOKEN_EXIT(template_type_exit, ">");
    } else {
        tokenAhead =  0 ;
    }
    {
        PPTREE  _ptTree0 = 0 ;
        {
            PPTREE  _ptRes1 = 0 ;
            _ptRes1 =  MakeTree(PARAM_TYPE, 2);
            ReplaceTree(_ptRes1, 2, listParam);
            _ptTree0 =  _ptRes1 ;
        }
        _retValue =  _ptTree0 ;
        goto template_type_ret ;
    }
    (tokenAhead || (LexComment(), tokenAhead =  -1, TRACE_LEX(1)));
    if ( _nbPre || listComm ) 
        AddComm(_ptPreComm, _nbPre, (PPTREE)0, lastTree);
    else {
        _lastTree =  (PPTREE)0 ;
        _funcLevel-- ;
    }
    return (PPTREE)0 ;
template_type_exit : 
    _Debug = TRACE_RULE("template_type", TRACE_EXIT, (PPTREE)0);
    _funcLevel-- ;
    return (PPTREE) -1 ;
template_type_ret : 
    _Debug = TRACE_RULE("template_type", TRACE_RETURN, _retValue);
    (tokenAhead || (LexComment(), tokenAhead =  -1, TRACE_LEX(1)));
    if ( _nbPre || listComm ) 
        AddComm(_ptPreComm, _nbPre, _retValue, lastTree);
    else {
        _lastTree =  _retValue ;
        _funcLevel-- ;
    }
    return _retValue ;
}

PPTREE cplus::type_and_declarator ( int error_free )
{
    PFILE_POSITION  _filePosition = (PFILE_POSITION)0 ;
    int             _value, _nbPre = 0 ;
    PCOMM_ELEM      _ptPreComm = ((tokenAhead || (LexComment(), tokenAhead =  -1, TRACE_LEX(1))), listComm ? LookComm(&_nbPre) : (_funcLevel++, (PCOMM_ELEM)0));
    int             _Debug = TRACE_RULE("type_and_declarator", TRACE_ENTER, (PPTREE)0);
    PPTREE          lastTree = _lastTree, _retValue ;
    PPTREE          funcTree = (PPTREE)0 ;
    
    {
        PPTREE  _ptTree0 = 0, _ptRes0 = 0 ;
        _ptRes0 =  MakeTree(FUNC, 11);
        if ( (_ptTree0 = NQUICK_CALL(_Tak(sc_specifier)(error_free), 126, cplus)) == (PPTREE) -1 ) {
            MulFreeTree(3, _ptRes0, _ptTree0, funcTree);
            PROG_EXIT(type_and_declarator_exit, "type_and_declarator");
        }
        ReplaceTree(_ptRes0, 1, _ptTree0);
        funcTree =  _ptRes0 ;
    }
    {
        PPTREE  _ptTree0 = 0 ;
        if ( (_ptTree0 = NQUICK_CALL(_Tak(type_specifier)(error_free), 145, cplus)) == (PPTREE) -1 ) {
            MulFreeTree(2, _ptTree0, funcTree);
            PROG_EXIT(type_and_declarator_exit, "type_and_declarator");
        }
        ReplaceTree(funcTree, 2, _ptTree0);
    }
    {
        PPTREE  _ptTree0 = 0 ;
        if ( (_ptTree0 = NQUICK_CALL(_Tak(func_declarator)(error_free), 77, cplus)) == (PPTREE) -1 ) {
            MulFreeTree(2, _ptTree0, funcTree);
            PROG_EXIT(type_and_declarator_exit, "type_and_declarator");
        }
        ReplaceTree(funcTree, 3, _ptTree0);
    }
    {
        _retValue =  funcTree ;
        goto type_and_declarator_ret ;
    }
    (tokenAhead || (LexComment(), tokenAhead =  -1, TRACE_LEX(1)));
    if ( _nbPre || listComm ) 
        AddComm(_ptPreComm, _nbPre, (PPTREE)0, lastTree);
    else {
        _lastTree =  (PPTREE)0 ;
        _funcLevel-- ;
    }
    return (PPTREE)0 ;
type_and_declarator_exit : 
    _Debug = TRACE_RULE("type_and_declarator", TRACE_EXIT, (PPTREE)0);
    _funcLevel-- ;
    return (PPTREE) -1 ;
type_and_declarator_ret : 
    _Debug = TRACE_RULE("type_and_declarator", TRACE_RETURN, _retValue);
    (tokenAhead || (LexComment(), tokenAhead =  -1, TRACE_LEX(1)));
    if ( _nbPre || listComm ) 
        AddComm(_ptPreComm, _nbPre, _retValue, lastTree);
    else {
        _lastTree =  _retValue ;
        _funcLevel-- ;
    }
    return _retValue ;
}
