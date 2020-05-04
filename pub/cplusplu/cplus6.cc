/*************************************************************************/
/*                                                                       */
/*        Produced by MetaGen version 2.0  -    1989-2006                 */
/*       Syntaxic Analyzer Meta Generator developped by                  */
/*                  Eric Lavillonniere                                   */
/*                                                                       */
/*************************************************************************/
#include "token.h"
#include "cplus.h"

PPTREE cplus::parameter_list_extended ( int error_free )
{
    PFILE_POSITION  _filePosition = (PFILE_POSITION)0 ;
    int             _value, _nbPre = 0 ;
    PCOMM_ELEM      _ptPreComm = ((tokenAhead || (LexComment(), tokenAhead =  -1, TRACE_LEX(1))), listComm ? LookComm(&_nbPre) : (_funcLevel++, (PCOMM_ELEM)0));
    int             _Debug = TRACE_RULE("parameter_list_extended", TRACE_ENTER, (PPTREE)0);
    PPTREE          lastTree = _lastTree, _retValue ;
    PPTREE          _addlist1 = (PPTREE)0 ;
    PPTREE          paramList = (PPTREE)0, valTree = (PPTREE)0 ;
    
    (tokenAhead == 1 || (Lex(), TRACE_LEX(1)));
    if ( !SEE_TOKEN(POUV, "(") || !(CommTerm(), 1) ) {
        MulFreeTree(3, _addlist1, paramList, valTree);
        TOKEN_EXIT(parameter_list_extended_exit, "(");
    } else {
        tokenAhead =  0 ;
    }
    {
        int followed = 0 ;
        if ( !((tokenAhead == 1 || (Lex(), TRACE_LEX(1))) && SEE_TOKEN(PFER, ")")) ) {
            {
                int exit = 0 ;
                if ( NPUSH_CALL_AFF_VERIF(valTree = , _Tak(arg_declarator_followed), 9, cplus) ) {
                    followed  =  1 ;
                    paramList =  AddList(paramList, valTree);
                } else {
                    if ( NPUSH_CALL_AFF_VERIF(valTree = , _Tak(arg_declarator), 7, cplus) ) {
                        paramList =  AddList(paramList, valTree);
                    } else {
                        if ( (tokenAhead == 1 || (Lex(), TRACE_LEX(1))) && TERM_OR_META(IDENT, "IDENT") && !(tokenAhead = 0) && BUILD_TERM_META(valTree) ) {
                            {
                                PPTREE  _ptTree0 = 0 ;
                                {
                                    PPTREE  _ptRes1 = 0 ;
                                    _ptRes1 =  MakeTree(IDENT, 1);
                                    ReplaceTree(_ptRes1, 1, valTree);
                                    _ptTree0 =  _ptRes1 ;
                                }
                                paramList =  AddList(paramList, _ptTree0);
                            }
                        }
                        if ( (tokenAhead == 1 || (Lex(), TRACE_LEX(1))) && SEE_TOKEN(POINPOINPOIN, "...")
                                || (tokenAhead == 1 || (Lex(), TRACE_LEX(1))) && SEE_TOKEN(VIRG, ",") ) {
                            followed =  1 ;
                        }
                        if ( !((tokenAhead == 1 || (Lex(), TRACE_LEX(1))) && SEE_TOKEN(PFER, ")"))
                                && !((tokenAhead == 1 || (Lex(), TRACE_LEX(1))) && SEE_TOKEN(POINPOINPOIN, "...")) ) {
                            followed =  1 ;
                            (tokenAhead == 1 || (Lex(), TRACE_LEX(1)));
                            if ( !SEE_TOKEN(VIRG, ",") || !(CommTerm(), 1) ) {
                                MulFreeTree(3, _addlist1, paramList, valTree);
                                TOKEN_EXIT(parameter_list_extended_exit, ",");
                            } else {
                                tokenAhead =  0 ;
                            }
                        }
                    }
                }
                _addlist1 =  paramList ;
                while ( followed && !exit ) {
                    followed =  0 ;
                    if ( NPUSH_CALL_AFF_VERIF(valTree = , _Tak(arg_declarator_followed), 9, cplus) ) {
                        followed  =  1 ;
                        _addlist1 =  AddList(_addlist1, valTree);
                        if ( paramList ) {
                            _addlist1 =  SonTree(_addlist1, 2);
                        } else {
                            paramList =  _addlist1 ;
                        }
                    } else {
                        if ( NPUSH_CALL_AFF_VERIF(valTree = , _Tak(arg_declarator), 7, cplus) ) {
                            _addlist1 =  AddList(_addlist1, valTree);
                            if ( paramList ) {
                                _addlist1 =  SonTree(_addlist1, 2);
                            } else {
                                paramList =  _addlist1 ;
                            }
                        } else {
                            if ( (tokenAhead == 1 || (Lex(), TRACE_LEX(1))) && TERM_OR_META(IDENT, "IDENT") && !(tokenAhead = 0) && BUILD_TERM_META(valTree) ) {
                                {
                                    PPTREE  _ptTree0 = 0 ;
                                    {
                                        PPTREE  _ptRes1 = 0 ;
                                        _ptRes1 =  MakeTree(IDENT, 1);
                                        ReplaceTree(_ptRes1, 1, valTree);
                                        _ptTree0 =  _ptRes1 ;
                                    }
                                    _addlist1 =  AddList(_addlist1, _ptTree0);
                                }
                                if ( paramList ) {
                                    _addlist1 =  SonTree(_addlist1, 2);
                                } else {
                                    paramList =  _addlist1 ;
                                }
                                if ( (tokenAhead == 1 || (Lex(), TRACE_LEX(1))) && SEE_TOKEN(POINPOINPOIN, "...")
                                        || (tokenAhead == 1 || (Lex(), TRACE_LEX(1))) && SEE_TOKEN(VIRG, ",") ) {
                                    followed =  1 ;
                                }
                                if ( !((tokenAhead == 1 || (Lex(), TRACE_LEX(1))) && SEE_TOKEN(PFER, ")"))
                                        && !((tokenAhead == 1 || (Lex(), TRACE_LEX(1))) && SEE_TOKEN(POINPOINPOIN, "...")) ) {
                                    followed =  1 ;
                                    (tokenAhead == 1 || (Lex(), TRACE_LEX(1)));
                                    if ( !SEE_TOKEN(VIRG, ",") || !(CommTerm(), 1) ) {
                                        MulFreeTree(3, _addlist1, paramList, valTree);
                                        TOKEN_EXIT(parameter_list_extended_exit, ",");
                                    } else {
                                        tokenAhead =  0 ;
                                    }
                                }
                            } else {
                                {
                                    PPTREE  _ptTree0 = 0 ;
                                    {
                                        PPTREE  _ptRes1 = 0 ;
                                        _ptRes1  =  MakeTree(VAR_LIST, 0);
                                        _ptTree0 =  _ptRes1 ;
                                    }
                                    _addlist1 =  AddList(_addlist1, _ptTree0);
                                }
                                if ( paramList ) {
                                    _addlist1 =  SonTree(_addlist1, 2);
                                } else {
                                    paramList =  _addlist1 ;
                                }
                                exit =  1 ;
                                if ( (tokenAhead == 1 || (Lex(), TRACE_LEX(1))) && SEE_TOKEN(POINPOINPOIN, "...") && ((tokenAhead = 0), CommTerm(), 1) ) {}
                                if ( !((tokenAhead == 1 || (Lex(), TRACE_LEX(1))) && SEE_TOKEN(PFER, ")")) ) {
                                    (tokenAhead == 1 || (Lex(), TRACE_LEX(1)));
                                    if ( !SEE_TOKEN(PFER, ")") || !(CommTerm(), 1) ) {
                                        MulFreeTree(3, _addlist1, paramList, valTree);
                                        TOKEN_EXIT(parameter_list_extended_exit, ")");
                                    } else {
                                        tokenAhead =  0 ;
                                    }
                                }
                            }
                        }
                    }
                }
                if ( !(exit) && ((tokenAhead == 1 || (Lex(), TRACE_LEX(1))) && SEE_TOKEN(POINPOINPOIN, "...") && ((tokenAhead = 0), CommTerm(), 1)) ) {
                    {
                        PPTREE  _ptTree0 = 0 ;
                        {
                            PPTREE  _ptRes1 = 0 ;
                            _ptRes1  =  MakeTree(VAR_LIST, 0);
                            _ptTree0 =  _ptRes1 ;
                        }
                        paramList =  AddList(paramList, _ptTree0);
                    }
                }
            }
        }
    }
    (tokenAhead == 1 || (Lex(), TRACE_LEX(1)));
    if ( !SEE_TOKEN(PFER, ")") || !(CommTerm(), 1) ) {
        MulFreeTree(3, _addlist1, paramList, valTree);
        TOKEN_EXIT(parameter_list_extended_exit, ")");
    } else {
        tokenAhead =  0 ;
    }
    {
        _retValue =  paramList ;
        goto parameter_list_extended_ret ;
    }
    (tokenAhead || (LexComment(), tokenAhead =  -1, TRACE_LEX(1)));
    if ( _nbPre || listComm ) 
        AddComm(_ptPreComm, _nbPre, (PPTREE)0, lastTree);
    else {
        _lastTree =  (PPTREE)0 ;
        _funcLevel-- ;
    }
    return (PPTREE)0 ;
parameter_list_extended_exit : 
    _Debug = TRACE_RULE("parameter_list_extended", TRACE_EXIT, (PPTREE)0);
    _funcLevel-- ;
    return (PPTREE) -1 ;
parameter_list_extended_ret : 
    _Debug = TRACE_RULE("parameter_list_extended", TRACE_RETURN, _retValue);
    (tokenAhead || (LexComment(), tokenAhead =  -1, TRACE_LEX(1)));
    if ( _nbPre || listComm ) 
        AddComm(_ptPreComm, _nbPre, _retValue, lastTree);
    else {
        _lastTree =  _retValue ;
        _funcLevel-- ;
    }
    return _retValue ;
}

PPTREE cplus::parse_entry ( int error_free )
{
    PFILE_POSITION  _filePosition = (PFILE_POSITION)0 ;
    int             _value, _nbPre = 0 ;
    PCOMM_ELEM      _ptPreComm = ((tokenAhead || (LexComment(), tokenAhead =  -1, TRACE_LEX(1))), listComm ? LookComm(&_nbPre) : (_funcLevel++, (PCOMM_ELEM)0));
    int             _Debug = TRACE_RULE("parse_entry", TRACE_ENTER, (PPTREE)0);
    PPTREE          lastTree = _lastTree, _retValue ;
    PPTREE          retValue = (PPTREE)0 ;
    
    if ( NPUSH_CALL_AFF_VERIF(retValue = , _Tak(func_declaration), 76, cplus)
            || NPUSH_CALL_AFF_VERIF(retValue = , _Tak(statement), 136, cplus)
            || NPUSH_CALL_AFF_VERIF(retValue = , _Tak(data_declaration), 40, cplus)
            || NPUSH_CALL_AFF_VERIF(retValue = , _Tak(switch_list), 140, cplus)
            || NPUSH_CALL_AFF_VERIF(retValue = , _Tak(switch_elem), 139, cplus)
            || NPUSH_CALL_AFF_VERIF(retValue = , _Tak(expression), 62, cplus) ) {
        {
            _retValue =  retValue ;
            goto parse_entry_ret ;
        }
    } else {
        if ( NQUICK_CALL(_Tak(statement)(error_free), 136, cplus) == (PPTREE) -1 ) {
            MulFreeTree(1, retValue);
            PROG_EXIT(parse_entry_exit, "parse_entry");
        }
    }
    (tokenAhead || (LexComment(), tokenAhead =  -1, TRACE_LEX(1)));
    if ( _nbPre || listComm ) 
        AddComm(_ptPreComm, _nbPre, (PPTREE)0, lastTree);
    else {
        _lastTree =  (PPTREE)0 ;
        _funcLevel-- ;
    }
    return (PPTREE)0 ;
parse_entry_exit : 
    _Debug = TRACE_RULE("parse_entry", TRACE_EXIT, (PPTREE)0);
    _funcLevel-- ;
    return (PPTREE) -1 ;
parse_entry_ret : 
    _Debug = TRACE_RULE("parse_entry", TRACE_RETURN, _retValue);
    (tokenAhead || (LexComment(), tokenAhead =  -1, TRACE_LEX(1)));
    if ( _nbPre || listComm ) 
        AddComm(_ptPreComm, _nbPre, _retValue, lastTree);
    else {
        _lastTree =  _retValue ;
        _funcLevel-- ;
    }
    return _retValue ;
}

PPTREE cplus::pm_expression ( int error_free )
{
    PFILE_POSITION  _filePosition = (PFILE_POSITION)0 ;
    int             _value, _nbPre = 0 ;
    PCOMM_ELEM      _ptPreComm = ((tokenAhead || (LexComment(), tokenAhead =  -1, TRACE_LEX(1))), listComm ? LookComm(&_nbPre) : (_funcLevel++, (PCOMM_ELEM)0));
    int             _Debug = TRACE_RULE("pm_expression", TRACE_ENTER, (PPTREE)0);
    PPTREE          lastTree = _lastTree, _retValue ;
    PPTREE          expTree = (PPTREE)0 ;
    
    if ( (expTree = NQUICK_CALL(_Tak(cast_expression)(error_free), 21, cplus)) == (PPTREE) -1 ) {
        MulFreeTree(1, expTree);
        PROG_EXIT(pm_expression_exit, "pm_expression");
    }
    while ( (tokenAhead == 1 || (Lex(), TRACE_LEX(1))) && SEE_TOKEN(POINETOI, ".*") || (tokenAhead == 1 || (Lex(), TRACE_LEX(1))) && SEE_TOKEN(TIRESUPEETOI, "->*") ) {
        (tokenAhead == 1 || (Lex(), TRACE_LEX(1)));
        switch ( lexEl.Value ) {
            case POINETOI : 
                tokenAhead = 0 ;
                CommTerm();
                {
                    PPTREE  _ptTree0 = 0, _ptRes0 = 0 ;
                    _ptRes0 =  MakeTree(DOT_MEMB, 2);
                    ReplaceTree(_ptRes0, 1, expTree);
                    if ( (_ptTree0 = NQUICK_CALL(_Tak(cast_expression)(error_free), 21, cplus)) == (PPTREE) -1 ) {
                        MulFreeTree(3, _ptRes0, _ptTree0, expTree);
                        PROG_EXIT(pm_expression_exit, "pm_expression");
                    }
                    ReplaceTree(_ptRes0, 2, _ptTree0);
                    expTree =  _ptRes0 ;
                }
                break ;
            case TIRESUPEETOI : 
                tokenAhead = 0 ;
                CommTerm();
                {
                    PPTREE  _ptTree0 = 0, _ptRes0 = 0 ;
                    _ptRes0 =  MakeTree(ARROW_MEMB, 2);
                    ReplaceTree(_ptRes0, 1, expTree);
                    if ( (_ptTree0 = NQUICK_CALL(_Tak(cast_expression)(error_free), 21, cplus)) == (PPTREE) -1 ) {
                        MulFreeTree(3, _ptRes0, _ptTree0, expTree);
                        PROG_EXIT(pm_expression_exit, "pm_expression");
                    }
                    ReplaceTree(_ptRes0, 2, _ptTree0);
                    expTree =  _ptRes0 ;
                }
                break ;
            default : 
                MulFreeTree(1, expTree);
                CASE_EXIT(pm_expression_exit, "either .* or ->*");
                break ;
        }
    }
    {
        _retValue =  expTree ;
        goto pm_expression_ret ;
    }
    (tokenAhead || (LexComment(), tokenAhead =  -1, TRACE_LEX(1)));
    if ( _nbPre || listComm ) 
        AddComm(_ptPreComm, _nbPre, (PPTREE)0, lastTree);
    else {
        _lastTree =  (PPTREE)0 ;
        _funcLevel-- ;
    }
    return (PPTREE)0 ;
pm_expression_exit : 
    _Debug = TRACE_RULE("pm_expression", TRACE_EXIT, (PPTREE)0);
    _funcLevel-- ;
    return (PPTREE) -1 ;
pm_expression_ret : 
    _Debug = TRACE_RULE("pm_expression", TRACE_RETURN, _retValue);
    (tokenAhead || (LexComment(), tokenAhead =  -1, TRACE_LEX(1)));
    if ( _nbPre || listComm ) 
        AddComm(_ptPreComm, _nbPre, _retValue, lastTree);
    else {
        _lastTree =  _retValue ;
        _funcLevel-- ;
    }
    return _retValue ;
}

PPTREE cplus::postfix_expression ( int error_free )
{
    PFILE_POSITION  _filePosition = (PFILE_POSITION)0 ;
    int             _value, _nbPre = 0 ;
    PCOMM_ELEM      _ptPreComm = ((tokenAhead || (LexComment(), tokenAhead =  -1, TRACE_LEX(1))), listComm ? LookComm(&_nbPre) : (_funcLevel++, (PCOMM_ELEM)0));
    int             _Debug = TRACE_RULE("postfix_expression", TRACE_ENTER, (PPTREE)0);
    PPTREE          lastTree = _lastTree, _retValue ;
    PPTREE          expTree = (PPTREE)0, expList = (PPTREE)0 ;
    
    if ( !NPUSH_CALL_AFF_VERIF(expTree = , _Tak(primary_expression), 112, cplus) ) {
        if ( (expTree = NQUICK_CALL(_Tak(simple_type_name)(error_free), 129, cplus)) == (PPTREE) -1 ) {
            MulFreeTree(2, expList, expTree);
            PROG_EXIT(postfix_expression_exit, "postfix_expression");
        }
        if ( !((tokenAhead == 1 || (Lex(), TRACE_LEX(1))) && SEE_TOKEN(POUV, "(")) ) {
            MulFreeTree(2, expList, expTree);
            LEX_EXIT("", 0);
            goto postfix_expression_exit ;
        }
    }
    while ( (tokenAhead == 1 || (Lex(), TRACE_LEX(1))) && SEE_TOKEN(POUV, "(")
                || (tokenAhead == 1 || (Lex(), TRACE_LEX(1))) && SEE_TOKEN(COUV, "[")
                || (tokenAhead == 1 || (Lex(), TRACE_LEX(1))) && SEE_TOKEN(POINT, "POINT")
                || (tokenAhead == 1 || (Lex(), TRACE_LEX(1))) && SEE_TOKEN(TIRESUPE, "->")
                || (tokenAhead == 1 || (Lex(), TRACE_LEX(1))) && SEE_TOKEN(PLUSPLUS, "++")
                || (tokenAhead == 1 || (Lex(), TRACE_LEX(1))) && SEE_TOKEN(TIRETIRE, "--")
                || (tokenAhead == 1 || (Lex(), TRACE_LEX(1))) && SEE_TOKEN(AOUV, "{") ) {
        (tokenAhead == 1 || (Lex(), TRACE_LEX(1)));
        switch ( lexEl.Value ) {
            case POUV : 
                tokenAhead = 0 ;
                CommTerm();
                if ( NPUSH_CALL_AFF_VERIF(expList = , _Tak(expression), 62, cplus) ) {
                    {
                        PPTREE  _ptRes0 = 0 ;
                        _ptRes0 =  MakeTree(EXP_LIST, 2);
                        ReplaceTree(_ptRes0, 1, expTree);
                        ReplaceTree(_ptRes0, 2, expList);
                        expTree =  _ptRes0 ;
                    }
                } else {
                    {
                        PPTREE  _ptRes0 = 0 ;
                        _ptRes0 =  MakeTree(EXP_LIST, 2);
                        ReplaceTree(_ptRes0, 1, expTree);
                        expTree =  _ptRes0 ;
                    }
                }
                (tokenAhead == 1 || (Lex(), TRACE_LEX(1)));
                if ( !SEE_TOKEN(PFER, ")") || !(CommTerm(), 1) ) {
                    MulFreeTree(2, expList, expTree);
                    TOKEN_EXIT(postfix_expression_exit, ")");
                } else {
                    tokenAhead =  0 ;
                }
                break ;
            case AOUV : 
                tokenAhead = 0 ;
                CommTerm();
                if ( NPUSH_CALL_AFF_VERIF(expList = , _Tak(expression), 62, cplus) ) {
                    {
                        PPTREE  _ptRes0 = 0 ;
                        _ptRes0 =  MakeTree(EXP_BRA, 2);
                        ReplaceTree(_ptRes0, 1, expTree);
                        ReplaceTree(_ptRes0, 2, expList);
                        expTree =  _ptRes0 ;
                    }
                } else {
                    {
                        PPTREE  _ptRes0 = 0 ;
                        _ptRes0 =  MakeTree(EXP_BRA, 2);
                        ReplaceTree(_ptRes0, 1, expTree);
                        expTree =  _ptRes0 ;
                    }
                }
                (tokenAhead == 1 || (Lex(), TRACE_LEX(1)));
                if ( !SEE_TOKEN(AFER, "}") || !(CommTerm(), 1) ) {
                    MulFreeTree(2, expList, expTree);
                    TOKEN_EXIT(postfix_expression_exit, "}");
                } else {
                    tokenAhead =  0 ;
                }
                break ;
            case COUV : 
                tokenAhead = 0 ;
                CommTerm();
                if ( NPUSH_CALL_AFF_VERIF(expList = , _Tak(expression), 62, cplus) ) {
                    {
                        PPTREE  _ptRes0 = 0 ;
                        _ptRes0 =  MakeTree(EXP_ARRAY, 2);
                        ReplaceTree(_ptRes0, 1, expTree);
                        ReplaceTree(_ptRes0, 2, expList);
                        expTree =  _ptRes0 ;
                    }
                } else {
                    {
                        PPTREE  _ptRes0 = 0 ;
                        _ptRes0 =  MakeTree(EXP_ARRAY, 2);
                        ReplaceTree(_ptRes0, 1, expTree);
                        expTree =  _ptRes0 ;
                    }
                }
                (tokenAhead == 1 || (Lex(), TRACE_LEX(1)));
                if ( !SEE_TOKEN(CFER, "]") || !(CommTerm(), 1) ) {
                    MulFreeTree(2, expList, expTree);
                    TOKEN_EXIT(postfix_expression_exit, "]");
                } else {
                    tokenAhead =  0 ;
                }
                break ;
            case META : 
            case POINT : 
                tokenAhead = 0 ;
                CommTerm();
                {
                    PPTREE  _ptTree0 = 0, _ptRes0 = 0 ;
                    _ptRes0 =  MakeTree(REF, 2);
                    ReplaceTree(_ptRes0, 1, expTree);
                    if ( (_ptTree0 = NQUICK_CALL(_Tak(primary_expression)(error_free), 112, cplus)) == (PPTREE) -1 ) {
                        MulFreeTree(4, _ptRes0, _ptTree0, expList, expTree);
                        PROG_EXIT(postfix_expression_exit, "postfix_expression");
                    }
                    ReplaceTree(_ptRes0, 2, _ptTree0);
                    expTree =  _ptRes0 ;
                }
                break ;
            case TIRESUPE : 
                tokenAhead = 0 ;
                CommTerm();
                {
                    PPTREE  _ptTree0 = 0, _ptRes0 = 0 ;
                    _ptRes0 =  MakeTree(ARROW, 2);
                    ReplaceTree(_ptRes0, 1, expTree);
                    if ( (_ptTree0 = NQUICK_CALL(_Tak(primary_expression)(error_free), 112, cplus)) == (PPTREE) -1 ) {
                        MulFreeTree(4, _ptRes0, _ptTree0, expList, expTree);
                        PROG_EXIT(postfix_expression_exit, "postfix_expression");
                    }
                    ReplaceTree(_ptRes0, 2, _ptTree0);
                    expTree =  _ptRes0 ;
                }
                break ;
            case PLUSPLUS : 
                tokenAhead = 0 ;
                CommTerm();
                {
                    PPTREE  _ptRes0 = 0 ;
                    _ptRes0 =  MakeTree(AINCR, 1);
                    ReplaceTree(_ptRes0, 1, expTree);
                    expTree =  _ptRes0 ;
                }
                break ;
            case TIRETIRE : 
                tokenAhead = 0 ;
                CommTerm();
                {
                    PPTREE  _ptRes0 = 0 ;
                    _ptRes0 =  MakeTree(ADECR, 1);
                    ReplaceTree(_ptRes0, 1, expTree);
                    expTree =  _ptRes0 ;
                }
                break ;
            default : 
                MulFreeTree(2, expList, expTree);
                CASE_EXIT(postfix_expression_exit, "either ( or { or [ or POINT or -> or ++ or --");
                break ;
        }
    }
    {
        _retValue =  expTree ;
        goto postfix_expression_ret ;
    }
    (tokenAhead || (LexComment(), tokenAhead =  -1, TRACE_LEX(1)));
    if ( _nbPre || listComm ) 
        AddComm(_ptPreComm, _nbPre, (PPTREE)0, lastTree);
    else {
        _lastTree =  (PPTREE)0 ;
        _funcLevel-- ;
    }
    return (PPTREE)0 ;
postfix_expression_exit : 
    _Debug = TRACE_RULE("postfix_expression", TRACE_EXIT, (PPTREE)0);
    _funcLevel-- ;
    return (PPTREE) -1 ;
postfix_expression_ret : 
    _Debug = TRACE_RULE("postfix_expression", TRACE_RETURN, _retValue);
    (tokenAhead || (LexComment(), tokenAhead =  -1, TRACE_LEX(1)));
    if ( _nbPre || listComm ) 
        AddComm(_ptPreComm, _nbPre, _retValue, lastTree);
    else {
        _lastTree =  _retValue ;
        _funcLevel-- ;
    }
    return _retValue ;
}

PPTREE cplus::primary_expression ( int error_free )
{
    PFILE_POSITION  _filePosition = (PFILE_POSITION)0 ;
    int             _value, _nbPre = 0 ;
    PCOMM_ELEM      _ptPreComm = ((tokenAhead || (LexComment(), tokenAhead =  -1, TRACE_LEX(1))), listComm ? LookComm(&_nbPre) : (_funcLevel++, (PCOMM_ELEM)0));
    int             _Debug = TRACE_RULE("primary_expression", TRACE_ENTER, (PPTREE)0);
    PPTREE          lastTree = _lastTree, _retValue ;
    PPTREE          result = (PPTREE)0, expTree = (PPTREE)0, list = (PPTREE)0 ;
    
    (tokenAhead == 1 || (Lex(), TRACE_LEX(1)));
    switch ( lexEl.Value ) {
        case POUV : 
            tokenAhead = 0 ;
            CommTerm();
            if ( (expTree = NQUICK_CALL(_Tak(expression)(error_free), 62, cplus)) == (PPTREE) -1 ) {
                MulFreeTree(3, expTree, list, result);
                PROG_EXIT(primary_expression_exit, "primary_expression");
            }
            (tokenAhead == 1 || (Lex(), TRACE_LEX(1)));
            if ( !SEE_TOKEN(PFER, ")") || !(CommTerm(), 1) ) {
                MulFreeTree(3, expTree, list, result);
                TOKEN_EXIT(primary_expression_exit, ")");
            } else {
                tokenAhead =  0 ;
            }
            {
                PPTREE  _ptTree0 = 0 ;
                {
                    PPTREE  _ptRes1 = 0 ;
                    _ptRes1 =  MakeTree(EXP, 1);
                    ReplaceTree(_ptRes1, 1, expTree);
                    _ptTree0 =  _ptRes1 ;
                }
                _retValue =  _ptTree0 ;
                goto primary_expression_ret ;
            }
            break ;
        case OPERATOR : 
            {
                PPTREE  _ptTree0 = 0 ;
                if ( (_ptTree0 = NQUICK_CALL(_Tak(operator_function_name)(error_free), 104, cplus)) == (PPTREE) -1 ) {
                    MulFreeTree(4, _ptTree0, expTree, list, result);
                    PROG_EXIT(primary_expression_exit, "primary_expression");
                }
                _retValue =  _ptTree0 ;
                goto primary_expression_ret ;
            }
            break ;
        case TILD : 
            {
                PPTREE  _ptTree0 = 0 ;
                if ( (_ptTree0 = NQUICK_CALL(_Tak(qualified_name)(error_free), 116, cplus)) == (PPTREE) -1 ) {
                    MulFreeTree(4, _ptTree0, expTree, list, result);
                    PROG_EXIT(primary_expression_exit, "primary_expression");
                }
                _retValue =  _ptTree0 ;
                goto primary_expression_ret ;
            }
            break ;
        case META : 
            {
                PPTREE  _ptTree0 = 0 ;
                {
                    PPTREE  _ptTree1 = 0, _ptRes1 = 0 ;
                    _ptRes1 =  MakeTree(META, 1);
                    (tokenAhead == 7 || (LexMeta(), TRACE_LEX(1)));
                    if ( !TERM_OR_META(META, "META") || !BUILD_TERM_META(_ptTree1) ) {
                        MulFreeTree(6, _ptRes1, _ptTree1, _ptTree0, expTree, list, result);
                        TOKEN_EXIT(primary_expression_exit, "META");
                    } else {
                        tokenAhead =  0 ;
                    }
                    ReplaceTree(_ptRes1, 1, _ptTree1);
                    _ptTree0 =  _ptRes1 ;
                }
                _retValue =  _ptTree0 ;
                goto primary_expression_ret ;
            }
            break ;
        case IDENT : 
            if ( (tokenAhead == 12 || (PushFunction(), TRACE_LEX(1))) && TERM_OR_META(PUSH_FUNCTION, "PUSH_FUNCTION") && !(tokenAhead = 0) && BUILD_TERM_META(result) ) {
                (tokenAhead == 1 || (Lex(), TRACE_LEX(1)));
                if ( !SEE_TOKEN(POUV, "(") || !(CommTerm(), 1) ) {
                    MulFreeTree(3, expTree, list, result);
                    TOKEN_EXIT(primary_expression_exit, "(");
                } else {
                    tokenAhead =  0 ;
                }
                {
                    PPTREE  _ptTree0 = 0 ;
                    {
                        PPTREE  _ptTree1 = 0, _ptRes1 = 0 ;
                        _ptRes1 =  MakeTree(IDENT, 1);
                        (tokenAhead == 11 || (PushArgument(), TRACE_LEX(1)));
                        if ( !TERM_OR_META(PUSH_ARGUMENT, "PUSH_ARGUMENT") || !BUILD_TERM_META(_ptTree1) ) {
                            MulFreeTree(6, _ptRes1, _ptTree1, _ptTree0, expTree, list, result);
                            TOKEN_EXIT(primary_expression_exit, "PUSH_ARGUMENT");
                        } else {
                            tokenAhead =  0 ;
                        }
                        ReplaceTree(_ptRes1, 1, _ptTree1);
                        _ptTree0 =  _ptRes1 ;
                    }
                    list =  AddList(list, _ptTree0);
                }
                (tokenAhead == 1 || (Lex(), TRACE_LEX(1)));
                if ( !SEE_TOKEN(VIRG, ",") || !(CommTerm(), 1) ) {
                    MulFreeTree(3, expTree, list, result);
                    TOKEN_EXIT(primary_expression_exit, ",");
                } else {
                    tokenAhead =  0 ;
                }
                {
                    PPTREE  _ptTree0 = 0 ;
                    if ( (_ptTree0 = NQUICK_CALL(_Tak(expression)(error_free), 62, cplus)) == (PPTREE) -1 ) {
                        MulFreeTree(4, _ptTree0, expTree, list, result);
                        PROG_EXIT(primary_expression_exit, "primary_expression");
                    }
                    list =  AddList(list, _ptTree0);
                }
                {
                    PPTREE  _ptRes0 = 0 ;
                    _ptRes0 =  MakeTree(EXP_SEQ, 1);
                    ReplaceTree(_ptRes0, 1, list);
                    expTree =  _ptRes0 ;
                }
                (tokenAhead == 1 || (Lex(), TRACE_LEX(1)));
                if ( !SEE_TOKEN(PFER, ")") || !(CommTerm(), 1) ) {
                    MulFreeTree(3, expTree, list, result);
                    TOKEN_EXIT(primary_expression_exit, ")");
                } else {
                    tokenAhead =  0 ;
                }
                {
                    PPTREE  _ptTree0 = 0 ;
                    {
                        PPTREE  _ptTree1 = 0, _ptRes1 = 0 ;
                        _ptRes1 =  MakeTree(EXP_LIST, 2);
                        {
                            PPTREE  _ptRes2 = 0 ;
                            _ptRes2 =  MakeTree(IDENT, 1);
                            ReplaceTree(_ptRes2, 1, result);
                            _ptTree1 =  _ptRes2 ;
                        }
                        ReplaceTree(_ptRes1, 1, _ptTree1);
                        ReplaceTree(_ptRes1, 2, expTree);
                        _ptTree0 =  _ptRes1 ;
                    }
                    _retValue =  _ptTree0 ;
                    goto primary_expression_ret ;
                }
            } else {
                {
                    PPTREE  _ptTree0 = 0 ;
                    if ( (_ptTree0 = NQUICK_CALL(_Tak(qualified_name)(error_free), 116, cplus)) == (PPTREE) -1 ) {
                        MulFreeTree(4, _ptTree0, expTree, list, result);
                        PROG_EXIT(primary_expression_exit, "primary_expression");
                    }
                    _retValue =  _ptTree0 ;
                    goto primary_expression_ret ;
                }
            }
            break ;
        case STRING : 
            {
                PPTREE  _ptTree0 = 0 ;
                if ( (_ptTree0 = NQUICK_CALL(_Tak(string_list)(error_free), 138, cplus)) == (PPTREE) -1 ) {
                    MulFreeTree(4, _ptTree0, expTree, list, result);
                    PROG_EXIT(primary_expression_exit, "primary_expression");
                }
                _retValue =  _ptTree0 ;
                goto primary_expression_ret ;
            }
            break ;
        case VA_ARG : 
            tokenAhead = 0 ;
            CommTerm();
            (tokenAhead == 1 || (Lex(), TRACE_LEX(1)));
            if ( !SEE_TOKEN(POUV, "(") || !(CommTerm(), 1) ) {
                MulFreeTree(3, expTree, list, result);
                TOKEN_EXIT(primary_expression_exit, "(");
            } else {
                tokenAhead =  0 ;
            }
            {
                PPTREE  _ptTree0 = 0, _ptRes0 = 0 ;
                _ptRes0 =  MakeTree(VA_ARG, 2);
                if ( (_ptTree0 = NQUICK_CALL(_Tak(assignment_expression)(error_free), 16, cplus)) == (PPTREE) -1 ) {
                    MulFreeTree(5, _ptRes0, _ptTree0, expTree, list, result);
                    PROG_EXIT(primary_expression_exit, "primary_expression");
                }
                ReplaceTree(_ptRes0, 1, _ptTree0);
                expTree =  _ptRes0 ;
            }
            (tokenAhead == 1 || (Lex(), TRACE_LEX(1)));
            if ( !SEE_TOKEN(VIRG, ",") || !(CommTerm(), 1) ) {
                MulFreeTree(3, expTree, list, result);
                TOKEN_EXIT(primary_expression_exit, ",");
            } else {
                tokenAhead =  0 ;
            }
            {
                PPTREE  _ptTree0 = 0 ;
                if ( (_ptTree0 = NQUICK_CALL(_Tak(type_name)(error_free), 144, cplus)) == (PPTREE) -1 ) {
                    MulFreeTree(4, _ptTree0, expTree, list, result);
                    PROG_EXIT(primary_expression_exit, "primary_expression");
                }
                ReplaceTree(expTree, 2, _ptTree0);
            }
            (tokenAhead == 1 || (Lex(), TRACE_LEX(1)));
            if ( !SEE_TOKEN(PFER, ")") || !(CommTerm(), 1) ) {
                MulFreeTree(3, expTree, list, result);
                TOKEN_EXIT(primary_expression_exit, ")");
            } else {
                tokenAhead =  0 ;
            }
            {
                _retValue =  expTree ;
                goto primary_expression_ret ;
            }
            break ;
        default : 
            {
                PPTREE  _ptTree0 = 0 ;
                if ( (_ptTree0 = NQUICK_CALL(_Tak(constan)(error_free), 31, cplus)) == (PPTREE) -1 ) {
                    MulFreeTree(4, _ptTree0, expTree, list, result);
                    PROG_EXIT(primary_expression_exit, "primary_expression");
                }
                _retValue =  _ptTree0 ;
                goto primary_expression_ret ;
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
    return (PPTREE)0 ;
primary_expression_exit : 
    _Debug = TRACE_RULE("primary_expression", TRACE_EXIT, (PPTREE)0);
    _funcLevel-- ;
    return (PPTREE) -1 ;
primary_expression_ret : 
    _Debug = TRACE_RULE("primary_expression", TRACE_RETURN, _retValue);
    (tokenAhead || (LexComment(), tokenAhead =  -1, TRACE_LEX(1)));
    if ( _nbPre || listComm ) 
        AddComm(_ptPreComm, _nbPre, _retValue, lastTree);
    else {
        _lastTree =  _retValue ;
        _funcLevel-- ;
    }
    return _retValue ;
}

PPTREE cplus::program ( int error_free )
{
    PFILE_POSITION  _filePosition = (PFILE_POSITION)0 ;
    int             _value, _nbPre = 0 ;
    PCOMM_ELEM      _ptPreComm = ((tokenAhead || (LexComment(), tokenAhead =  -1, TRACE_LEX(1))), listComm ? LookComm(&_nbPre) : (_funcLevel++, (PCOMM_ELEM)0));
    int             _Debug = TRACE_RULE("program", TRACE_ENTER, (PPTREE)0);
    PPTREE          lastTree = _lastTree, _retValue ;
    PPTREE          _addlist1 = (PPTREE)0 ;
    PPTREE          list = (PPTREE)0, valTree = (PPTREE)0 ;
    
debut : 
    _addlist1 = list ;
    while ( NPUSH_CALL_AFF_VERIF(valTree = , _Tak(ext_all), 64, cplus) ) {
        _addlist1 =  AddList(_addlist1, valTree);
        if ( list ) {
            _addlist1 =  SonTree(_addlist1, 2);
        } else {
            list =  _addlist1 ;
        }
    }
    {
        PPTREE  _ptTree0 = 0 ;
        if ( (_ptTree0 = NQUICK_CALL(_Tak(none_statement)(error_free), 103, cplus)) == (PPTREE) -1 ) {
            MulFreeTree(4, _ptTree0, _addlist1, list, valTree);
            PROG_EXIT(program_exit, "program");
        }
        list =  AddList(list, _ptTree0);
    }
    if ( NPUSH_CALL_AFF_VERIF(NOTHING, _Tak(comment_eater), 26, cplus) ) {}
    if ( tokenAhead && tokenAhead != -1 || c != EOF ) {
        dumperror();
        (tokenAhead == 5 || (LexEndLine(), TRACE_LEX(1)));
        if ( !TERM_OR_META(END_LINE, "END_LINE") || !(CommTerm(), 1) ) {
            MulFreeTree(3, _addlist1, list, valTree);
            TOKEN_EXIT(program_exit, "END_LINE");
        } else {
            tokenAhead =  0 ;
        }
        hasGotError =  1 ;
        goto debut ;
    }
    if ( hasGotError && !_inhibit_exit_on_error ) {
        exit( -1);
    }
    {
        PPTREE  _ptTree0 = 0 ;
        {
            PPTREE  _ptRes1 = 0 ;
            _ptRes1 =  MakeTree(LANGUAGE, 1);
            ReplaceTree(_ptRes1, 1, list);
            _ptTree0 =  _ptRes1 ;
        }
        _retValue =  _ptTree0 ;
        goto program_ret ;
    }
    (tokenAhead || (LexComment(), tokenAhead =  -1, TRACE_LEX(1)));
    if ( _nbPre || listComm ) 
        AddComm(_ptPreComm, _nbPre, (PPTREE)0, lastTree);
    else {
        _lastTree =  (PPTREE)0 ;
        _funcLevel-- ;
    }
    return (PPTREE)0 ;
program_exit : 
    _Debug = TRACE_RULE("program", TRACE_EXIT, (PPTREE)0);
    _funcLevel-- ;
    return (PPTREE) -1 ;
program_ret : 
    _Debug = TRACE_RULE("program", TRACE_RETURN, _retValue);
    (tokenAhead || (LexComment(), tokenAhead =  -1, TRACE_LEX(1)));
    if ( _nbPre || listComm ) 
        AddComm(_ptPreComm, _nbPre, _retValue, lastTree);
    else {
        _lastTree =  _retValue ;
        _funcLevel-- ;
    }
    return _retValue ;
}

PPTREE cplus::protect_declare ( int error_free )
{
    PFILE_POSITION  _filePosition = (PFILE_POSITION)0 ;
    int             _value, _nbPre = 0 ;
    PCOMM_ELEM      _ptPreComm = ((tokenAhead || (LexComment(), tokenAhead =  -1, TRACE_LEX(1))), listComm ? LookComm(&_nbPre) : (_funcLevel++, (PCOMM_ELEM)0));
    int             _Debug = TRACE_RULE("protect_declare", TRACE_ENTER, (PPTREE)0);
    PPTREE          lastTree = _lastTree, _retValue ;
    PPTREE          _addlist1 = (PPTREE)0 ;
    PPTREE          retTree = (PPTREE)0, inter = (PPTREE)0, list = (PPTREE)0 ;
    
    (tokenAhead == 1 || (Lex(), TRACE_LEX(1)));
    switch ( lexEl.Value ) {
        case PUBLIC : 
            tokenAhead = 0 ;
            CommTerm();
            {
                PPTREE  _ptRes0 = 0 ;
                _ptRes0 =  MakeTree(PROTECT_MEMB, 2);
                ReplaceTree(_ptRes0, 1, MakeString("public"));
                retTree =  _ptRes0 ;
            }
            break ;
        case PROTECTED : 
            tokenAhead = 0 ;
            CommTerm();
            {
                PPTREE  _ptRes0 = 0 ;
                _ptRes0 =  MakeTree(PROTECT_MEMB, 2);
                ReplaceTree(_ptRes0, 1, MakeString("protected"));
                retTree =  _ptRes0 ;
            }
            break ;
        case PRIVATE : 
            tokenAhead = 0 ;
            CommTerm();
            {
                PPTREE  _ptRes0 = 0 ;
                _ptRes0 =  MakeTree(PROTECT_MEMB, 2);
                ReplaceTree(_ptRes0, 1, MakeString("private"));
                retTree =  _ptRes0 ;
            }
            break ;
        default : 
            MulFreeTree(4, _addlist1, inter, list, retTree);
            CASE_EXIT(protect_declare_exit, "either public or protected or private");
            break ;
    }
    (tokenAhead == 1 || (Lex(), TRACE_LEX(1)));
    if ( !SEE_TOKEN(DPOI, ":") || !(CommTerm(), 1) ) {
        MulFreeTree(4, _addlist1, inter, list, retTree);
        TOKEN_EXIT(protect_declare_exit, ":");
    } else {
        tokenAhead =  0 ;
    }
    _addlist1 =  list ;
    while ( NPUSH_CALL_AFF_VERIF(inter = , _Tak(inside_declaration), 83, cplus) ) {
        _addlist1 =  AddList(_addlist1, inter);
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
        goto protect_declare_ret ;
    }
    (tokenAhead || (LexComment(), tokenAhead =  -1, TRACE_LEX(1)));
    if ( _nbPre || listComm ) 
        AddComm(_ptPreComm, _nbPre, (PPTREE)0, lastTree);
    else {
        _lastTree =  (PPTREE)0 ;
        _funcLevel-- ;
    }
    return (PPTREE)0 ;
protect_declare_exit : 
    _Debug = TRACE_RULE("protect_declare", TRACE_EXIT, (PPTREE)0);
    _funcLevel-- ;
    return (PPTREE) -1 ;
protect_declare_ret : 
    _Debug = TRACE_RULE("protect_declare", TRACE_RETURN, _retValue);
    (tokenAhead || (LexComment(), tokenAhead =  -1, TRACE_LEX(1)));
    if ( _nbPre || listComm ) 
        AddComm(_ptPreComm, _nbPre, _retValue, lastTree);
    else {
        _lastTree =  _retValue ;
        _funcLevel-- ;
    }
    return _retValue ;
}

PPTREE cplus::ptr_operator ( int error_free )
{
    PFILE_POSITION  _filePosition = (PFILE_POSITION)0 ;
    int             _value, _nbPre = 0 ;
    PCOMM_ELEM      _ptPreComm = ((tokenAhead || (LexComment(), tokenAhead =  -1, TRACE_LEX(1))), listComm ? LookComm(&_nbPre) : (_funcLevel++, (PCOMM_ELEM)0));
    int             _Debug = TRACE_RULE("ptr_operator", TRACE_ENTER, (PPTREE)0);
    PPTREE          lastTree = _lastTree, _retValue ;
    PPTREE          retTree = (PPTREE)0, valTree = (PPTREE)0, retour = (PPTREE)0 ;
    
    (tokenAhead == 1 || (Lex(), TRACE_LEX(1)));
    switch ( lexEl.Value ) {
        case ETOI : 
            tokenAhead = 0 ;
            CommTerm();
            {
                PPTREE  _ptRes0 = 0 ;
                _ptRes0 =  MakeTree(TYP_ADDR, 1);
                retTree =  _ptRes0 ;
            }
            if ( NPUSH_CALL_AFF_VERIF(valTree = , _Tak(const_or_volatile), 30, cplus) ) {
                ReplaceTree(retTree, 1, valTree);
            }
            {
                _retValue =  retTree ;
                goto ptr_operator_ret ;
            }
            break ;
        case ETCO : 
            tokenAhead = 0 ;
            CommTerm();
            {
                PPTREE  _ptRes0 = 0 ;
                _ptRes0 =  MakeTree(TYP_REF, 1);
                retTree =  _ptRes0 ;
            }
            if ( NPUSH_CALL_AFF_VERIF(valTree = , _Tak(const_or_volatile), 30, cplus) ) {
                ReplaceTree(retTree, 1, valTree);
            }
            {
                _retValue =  retTree ;
                goto ptr_operator_ret ;
            }
            break ;
        case DPOIDPOI : 
            if ( (retour = NQUICK_CALL(_Tak(member_declarator)(error_free), 95, cplus)) == (PPTREE) -1 ) {
                MulFreeTree(3, retTree, retour, valTree);
                PROG_EXIT(ptr_operator_exit, "ptr_operator");
            }
            break ;
        case META : 
        case IDENT : 
            if ( (retour = NQUICK_CALL(_Tak(member_declarator)(error_free), 95, cplus)) == (PPTREE) -1 ) {
                MulFreeTree(3, retTree, retour, valTree);
                PROG_EXIT(ptr_operator_exit, "ptr_operator");
            }
            break ;
        default : 
            MulFreeTree(3, retTree, retour, valTree);
            CASE_EXIT(ptr_operator_exit, "either * or & or :: or IDENT");
            break ;
    }
    if ( NPUSH_CALL_AFF_VERIF(valTree = , _Tak(const_or_volatile), 30, cplus) ) {
        ReplaceTree(retour, 2, valTree);
    }
    {
        _retValue =  retour ;
        goto ptr_operator_ret ;
    }
    (tokenAhead || (LexComment(), tokenAhead =  -1, TRACE_LEX(1)));
    if ( _nbPre || listComm ) 
        AddComm(_ptPreComm, _nbPre, (PPTREE)0, lastTree);
    else {
        _lastTree =  (PPTREE)0 ;
        _funcLevel-- ;
    }
    return (PPTREE)0 ;
ptr_operator_exit : 
    _Debug = TRACE_RULE("ptr_operator", TRACE_EXIT, (PPTREE)0);
    _funcLevel-- ;
    return (PPTREE) -1 ;
ptr_operator_ret : 
    _Debug = TRACE_RULE("ptr_operator", TRACE_RETURN, _retValue);
    (tokenAhead || (LexComment(), tokenAhead =  -1, TRACE_LEX(1)));
    if ( _nbPre || listComm ) 
        AddComm(_ptPreComm, _nbPre, _retValue, lastTree);
    else {
        _lastTree =  _retValue ;
        _funcLevel-- ;
    }
    return _retValue ;
}

PPTREE cplus::qualified_name ( int error_free )
{
    PFILE_POSITION  _filePosition = (PFILE_POSITION)0 ;
    int             _value, _nbPre = 0 ;
    PCOMM_ELEM      _ptPreComm = ((tokenAhead || (LexComment(), tokenAhead =  -1, TRACE_LEX(1))), listComm ? LookComm(&_nbPre) : (_funcLevel++, (PCOMM_ELEM)0));
    int             _Debug = TRACE_RULE("qualified_name", TRACE_ENTER, (PPTREE)0);
    PPTREE          lastTree = _lastTree, _retValue ;
    PPTREE          retTree = (PPTREE)0, inter = (PPTREE)0, val = (PPTREE)0, templateVal = (PPTREE)0 ;
    
    if ( (tokenAhead == 1 || (Lex(), TRACE_LEX(1))) && SEE_TOKEN(TILD, "~") && ((tokenAhead = 0), CommTerm(), 1) ) {
        {
            PPTREE  _ptTree0 = 0, _ptRes0 = 0 ;
            _ptRes0 =  MakeTree(DESTRUCT, 1);
            {
                PPTREE  _ptTree1 = 0, _ptRes1 = 0 ;
                _ptRes1 =  MakeTree(IDENT, 1);
                (tokenAhead == 1 || (Lex(), TRACE_LEX(1)));
                if ( !TERM_OR_META(IDENT, "IDENT") || !BUILD_TERM_META(_ptTree1) ) {
                    MulFreeTree(8, _ptRes1, _ptTree1, _ptRes0, _ptTree0, inter, retTree, templateVal, val);
                    TOKEN_EXIT(qualified_name_exit, "IDENT");
                } else {
                    tokenAhead =  0 ;
                }
                ReplaceTree(_ptRes1, 1, _ptTree1);
                _ptTree0 =  _ptRes1 ;
            }
            ReplaceTree(_ptRes0, 1, _ptTree0);
            retTree =  _ptRes0 ;
        }
    } else {
        {
            PPTREE  _ptTree0 = 0, _ptRes0 = 0 ;
            _ptRes0 =  MakeTree(IDENT, 1);
            (tokenAhead == 1 || (Lex(), TRACE_LEX(1)));
            if ( !TERM_OR_META(IDENT, "IDENT") || !BUILD_TERM_META(_ptTree0) ) {
                MulFreeTree(6, _ptRes0, _ptTree0, inter, retTree, templateVal, val);
                TOKEN_EXIT(qualified_name_exit, "IDENT");
            } else {
                tokenAhead =  0 ;
            }
            ReplaceTree(_ptRes0, 1, _ptTree0);
            retTree =  _ptRes0 ;
        }
    }
    if ( (tokenAhead == 1 || (Lex(), TRACE_LEX(1))) && SEE_TOKEN(DPOIDPOI, "::") ) {
        {
            PPTREE  _ptRes0 = 0 ;
            _ptRes0 =  MakeTree(QUALIFIED, 2);
            ReplaceTree(_ptRes0, 1, retTree);
            retTree =  _ptRes0 ;
        }
        inter =  retTree ;
        while ( (tokenAhead == 1 || (Lex(), TRACE_LEX(1))) && SEE_TOKEN(DPOIDPOI, "::") && NPUSH_CALL_AFF_VERIF(val = , _Tak(qualified_name_elem), 117, cplus) ) {
            if ( (tokenAhead == 1 || (Lex(), TRACE_LEX(1))) && SEE_TOKEN(DPOIDPOI, "::") ) {
                {
                    PPTREE  _ptRes0 = 0 ;
                    _ptRes0 =  MakeTree(QUALIFIED, 2);
                    ReplaceTree(_ptRes0, 1, val);
                    val =  _ptRes0 ;
                }
            }
            ReplaceTree(inter, 2, val);
            inter =  val ;
        }
    }
    if ( NPUSH_CALL_AFF_VERIF(templateVal = , _Tak(template_type), 141, cplus) ) {
        ReplaceTree(templateVal, 1, retTree);
        retTree =  templateVal ;
        if ( (tokenAhead == 1 || (Lex(), TRACE_LEX(1))) && SEE_TOKEN(DPOIDPOI, "::") && ((tokenAhead = 0), CommTerm(), 1) ) {
            {
                PPTREE  _ptTree0 = 0 ;
                {
                    PPTREE  _ptTree1 = 0, _ptRes1 = 0 ;
                    _ptRes1 =  MakeTree(QUALIFIED, 2);
                    ReplaceTree(_ptRes1, 1, retTree);
                    if ( (_ptTree1 = NQUICK_CALL(_Tak(qualified_name)(error_free), 116, cplus)) == (PPTREE) -1 ) {
                        MulFreeTree(7, _ptRes1, _ptTree1, _ptTree0, inter, retTree, templateVal, val);
                        PROG_EXIT(qualified_name_exit, "qualified_name");
                    }
                    ReplaceTree(_ptRes1, 2, _ptTree1);
                    _ptTree0 =  _ptRes1 ;
                }
                _retValue =  _ptTree0 ;
                goto qualified_name_ret ;
            }
        } else {
            {
                _retValue =  retTree ;
                goto qualified_name_ret ;
            }
        }
    }
    {
        _retValue =  retTree ;
        goto qualified_name_ret ;
    }
    (tokenAhead || (LexComment(), tokenAhead =  -1, TRACE_LEX(1)));
    if ( _nbPre || listComm ) 
        AddComm(_ptPreComm, _nbPre, (PPTREE)0, lastTree);
    else {
        _lastTree =  (PPTREE)0 ;
        _funcLevel-- ;
    }
    return (PPTREE)0 ;
qualified_name_exit : 
    _Debug = TRACE_RULE("qualified_name", TRACE_EXIT, (PPTREE)0);
    _funcLevel-- ;
    return (PPTREE) -1 ;
qualified_name_ret : 
    _Debug = TRACE_RULE("qualified_name", TRACE_RETURN, _retValue);
    (tokenAhead || (LexComment(), tokenAhead =  -1, TRACE_LEX(1)));
    if ( _nbPre || listComm ) 
        AddComm(_ptPreComm, _nbPre, _retValue, lastTree);
    else {
        _lastTree =  _retValue ;
        _funcLevel-- ;
    }
    return _retValue ;
}

PPTREE cplus::qualified_name_elem ( int error_free )
{
    PFILE_POSITION  _filePosition = (PFILE_POSITION)0 ;
    int             _value, _nbPre = 0 ;
    PCOMM_ELEM      _ptPreComm = ((tokenAhead || (LexComment(), tokenAhead =  -1, TRACE_LEX(1))), listComm ? LookComm(&_nbPre) : (_funcLevel++, (PCOMM_ELEM)0));
    int             _Debug = TRACE_RULE("qualified_name_elem", TRACE_ENTER, (PPTREE)0);
    PPTREE          lastTree = _lastTree, _retValue ;
    
    (tokenAhead == 1 || (Lex(), TRACE_LEX(1)));
    if ( !SEE_TOKEN(DPOIDPOI, "::") || !(CommTerm(), 1) ) {
        TOKEN_EXIT(qualified_name_elem_exit, "::");
    } else {
        tokenAhead =  0 ;
    }
    (tokenAhead == 1 || (Lex(), TRACE_LEX(1)));
    switch ( lexEl.Value ) {
        case TILD : 
            tokenAhead = 0 ;
            CommTerm();
            {
                PPTREE  _ptTree0 = 0 ;
                {
                    PPTREE  _ptTree1 = 0, _ptRes1 = 0 ;
                    _ptRes1 =  MakeTree(DESTRUCT, 1);
                    {
                        PPTREE  _ptTree2 = 0, _ptRes2 = 0 ;
                        _ptRes2 =  MakeTree(IDENT, 1);
                        (tokenAhead == 1 || (Lex(), TRACE_LEX(1)));
                        if ( !TERM_OR_META(IDENT, "IDENT") || !BUILD_TERM_META(_ptTree2) ) {
                            MulFreeTree(5, _ptRes2, _ptTree2, _ptRes1, _ptTree1, _ptTree0);
                            TOKEN_EXIT(qualified_name_elem_exit, "IDENT");
                        } else {
                            tokenAhead =  0 ;
                        }
                        ReplaceTree(_ptRes2, 1, _ptTree2);
                        _ptTree1 =  _ptRes2 ;
                    }
                    ReplaceTree(_ptRes1, 1, _ptTree1);
                    _ptTree0 =  _ptRes1 ;
                }
                _retValue =  _ptTree0 ;
                goto qualified_name_elem_ret ;
            }
            break ;
        case META : 
        case IDENT : 
            {
                PPTREE  _ptTree0 = 0 ;
                {
                    PPTREE  _ptTree1 = 0, _ptRes1 = 0 ;
                    _ptRes1 =  MakeTree(IDENT, 1);
                    (tokenAhead == 1 || (Lex(), TRACE_LEX(1)));
                    if ( !TERM_OR_META(IDENT, "IDENT") || !BUILD_TERM_META(_ptTree1) ) {
                        MulFreeTree(3, _ptRes1, _ptTree1, _ptTree0);
                        TOKEN_EXIT(qualified_name_elem_exit, "IDENT");
                    } else {
                        tokenAhead =  0 ;
                    }
                    ReplaceTree(_ptRes1, 1, _ptTree1);
                    _ptTree0 =  _ptRes1 ;
                }
                _retValue =  _ptTree0 ;
                goto qualified_name_elem_ret ;
            }
            break ;
        case OPERATOR : 
            {
                PPTREE  _ptTree0 = 0 ;
                if ( (_ptTree0 = NQUICK_CALL(_Tak(operator_function_name)(error_free), 104, cplus)) == (PPTREE) -1 ) {
                    MulFreeTree(1, _ptTree0);
                    PROG_EXIT(qualified_name_elem_exit, "qualified_name_elem");
                }
                _retValue =  _ptTree0 ;
                goto qualified_name_elem_ret ;
            }
            break ;
        default : 
            CASE_EXIT(qualified_name_elem_exit, "either ~ or IDENT or operator");
            break ;
    }
    (tokenAhead || (LexComment(), tokenAhead =  -1, TRACE_LEX(1)));
    if ( _nbPre || listComm ) 
        AddComm(_ptPreComm, _nbPre, (PPTREE)0, lastTree);
    else {
        _lastTree =  (PPTREE)0 ;
        _funcLevel-- ;
    }
    return (PPTREE)0 ;
qualified_name_elem_exit : 
    _Debug = TRACE_RULE("qualified_name_elem", TRACE_EXIT, (PPTREE)0);
    _funcLevel-- ;
    return (PPTREE) -1 ;
qualified_name_elem_ret : 
    _Debug = TRACE_RULE("qualified_name_elem", TRACE_RETURN, _retValue);
    (tokenAhead || (LexComment(), tokenAhead =  -1, TRACE_LEX(1)));
    if ( _nbPre || listComm ) 
        AddComm(_ptPreComm, _nbPre, _retValue, lastTree);
    else {
        _lastTree =  _retValue ;
        _funcLevel-- ;
    }
    return _retValue ;
}

PPTREE cplus::quick_prog ( int error_free )
{
    PFILE_POSITION  _filePosition = (PFILE_POSITION)0 ;
    int             _value, _nbPre = 0 ;
    PCOMM_ELEM      _ptPreComm = ((tokenAhead || (LexComment(), tokenAhead =  -1, TRACE_LEX(1))), listComm ? LookComm(&_nbPre) : (_funcLevel++, (PCOMM_ELEM)0));
    int             _Debug = TRACE_RULE("quick_prog", TRACE_ENTER, (PPTREE)0);
    PPTREE          lastTree = _lastTree, _retValue ;
    PPTREE          list = (PPTREE)0, valTree = (PPTREE)0 ;
    
    while ( NPUSH_CALL_AFF_VERIF(valTree = , _Tak(quick_prog_elem), 119, cplus) && !(valTree == (PPTREE)0) ) {
        FreeTree(valTree);
        _lastTree =  (PPTREE)0 ;
    }
    ExtUnputBuf();
    while ( c == ' ' || c == '\n' || c == '\t' || c == '\r' || c == '' ) 
        NextChar();
    ptStockBuf =  -1 ;
    lexEl.Erase();
    tokenAhead =  0 ;
    oldLine =  line, oldCol =  col ;
    if ( !lexCallLex ) {
        PUT_COORD_CALL ;
    }
    if ( tokenAhead && tokenAhead != -1 || c != EOF ) {
        if ( NQUICK_CALL(_Tak(quick_prog_elem)(error_free), 119, cplus) == (PPTREE) -1 ) {
            MulFreeTree(2, list, valTree);
            PROG_EXIT(quick_prog_exit, "quick_prog");
        }
    }
    {
        _retValue =  list ;
        goto quick_prog_ret ;
    }
    (tokenAhead || (LexComment(), tokenAhead =  -1, TRACE_LEX(1)));
    if ( _nbPre || listComm ) 
        AddComm(_ptPreComm, _nbPre, (PPTREE)0, lastTree);
    else {
        _lastTree =  (PPTREE)0 ;
        _funcLevel-- ;
    }
    return (PPTREE)0 ;
quick_prog_exit : 
    _Debug = TRACE_RULE("quick_prog", TRACE_EXIT, (PPTREE)0);
    _funcLevel-- ;
    return (PPTREE) -1 ;
quick_prog_ret : 
    _Debug = TRACE_RULE("quick_prog", TRACE_RETURN, _retValue);
    (tokenAhead || (LexComment(), tokenAhead =  -1, TRACE_LEX(1)));
    if ( _nbPre || listComm ) 
        AddComm(_ptPreComm, _nbPre, _retValue, lastTree);
    else {
        _lastTree =  _retValue ;
        _funcLevel-- ;
    }
    return _retValue ;
}

PPTREE cplus::quick_prog_elem ( int error_free )
{
    PFILE_POSITION  _filePosition = (PFILE_POSITION)0 ;
    int             _value, _nbPre = 0 ;
    PCOMM_ELEM      _ptPreComm = ((tokenAhead || (LexComment(), tokenAhead =  -1, TRACE_LEX(1))), listComm ? LookComm(&_nbPre) : (_funcLevel++, (PCOMM_ELEM)0));
    int             _Debug = TRACE_RULE("quick_prog_elem", TRACE_ENTER, (PPTREE)0);
    PPTREE          lastTree = _lastTree, _retValue ;
    PPTREE          retTree = (PPTREE)0 ;
    
debut : 
    tokenAhead == 1 || (Lex(), TRACE_LEX(1));
    switch ( lexEl.Value ) {
        case META : 
        case INCLUDE_DIR : 
            {
                PPTREE  _ptTree0 = 0 ;
                if ( (_ptTree0 = NQUICK_CALL(_Tak(include_dir)(error_free), 79, cplus)) == (PPTREE) -1 ) {
                    MulFreeTree(2, _ptTree0, retTree);
                    PROG_EXIT(quick_prog_elem_exit, "quick_prog_elem");
                }
                _retValue =  _ptTree0 ;
                goto quick_prog_elem_ret ;
            }
            break ;
        case PRAGMA_DIR : 
            tokenAhead = 0 ;
            CommTerm();
            if ( NPUSH_CALL_VERIF(_Tak(range_pragma), 124, cplus) ) {}
            (tokenAhead == 8 || (LexPragma(), TRACE_LEX(1)));
            switch ( lexEl.Value ) {
                case META : 
                case PRAGMA_CONFIG : 
                    tokenAhead = 0 ;
                    CommTerm();
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
                                        MulFreeTree(5, _ptRes1, _ptTree1, _ptRes0, _ptTree0, retTree);
                                        TOKEN_EXIT(quick_prog_elem_exit, "INTEGER");
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
                                goto quick_prog_elem_ret ;
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
                                        MulFreeTree(5, _ptRes1, _ptTree1, _ptRes0, _ptTree0, retTree);
                                        TOKEN_EXIT(quick_prog_elem_exit, "IDENT");
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
                                goto quick_prog_elem_ret ;
                            }
                            break ;
                        case PRAGMA_ENUM_VERT : 
                            tokenAhead = 0 ;
                            CommTerm();
                            {
                                PPTREE  _ptTree0 = 0, _ptRes0 = 0 ;
                                _ptRes0 =  MakeTree(CONFIG, 1);
                                {
                                    PPTREE  _ptTree1 = 0, _ptRes1 = 0 ;
                                    _ptRes1 =  MakeTree(ENUM_VERT_VALUE, 1);
                                    (tokenAhead == 1 || (Lex(), TRACE_LEX(1)));
                                    if ( !TERM_OR_META(IDENT, "IDENT") || !BUILD_TERM_META(_ptTree1) ) {
                                        MulFreeTree(5, _ptRes1, _ptTree1, _ptRes0, _ptTree0, retTree);
                                        TOKEN_EXIT(quick_prog_elem_exit, "IDENT");
                                    } else {
                                        tokenAhead =  0 ;
                                    }
                                    ReplaceTree(_ptRes1, 1, _ptTree1);
                                    _ptTree0 =  _ptRes1 ;
                                }
                                ReplaceTree(_ptRes0, 1, _ptTree0);
                                retTree =  _ptRes0 ;
                            }
                            AnalyzeEnumVert(retTree);
                            {
                                _retValue =  retTree ;
                                goto quick_prog_elem_ret ;
                            }
                            break ;
                        case PRAGMA_PARAMETERS_UNDER : 
                            tokenAhead = 0 ;
                            CommTerm();
                            {
                                PPTREE  _ptTree0 = 0, _ptRes0 = 0 ;
                                _ptRes0 =  MakeTree(CONFIG, 1);
                                {
                                    PPTREE  _ptTree1 = 0, _ptRes1 = 0 ;
                                    _ptRes1 =  MakeTree(ENUM_PARAMETERS_UNDER, 1);
                                    (tokenAhead == 1 || (Lex(), TRACE_LEX(1)));
                                    if ( !TERM_OR_META(IDENT, "IDENT") || !BUILD_TERM_META(_ptTree1) ) {
                                        MulFreeTree(5, _ptRes1, _ptTree1, _ptRes0, _ptTree0, retTree);
                                        TOKEN_EXIT(quick_prog_elem_exit, "IDENT");
                                    } else {
                                        tokenAhead =  0 ;
                                    }
                                    ReplaceTree(_ptRes1, 1, _ptTree1);
                                    _ptTree0 =  _ptRes1 ;
                                }
                                ReplaceTree(_ptRes0, 1, _ptTree0);
                                retTree =  _ptRes0 ;
                            }
                            AnalyzeParameterFunctUnd(retTree);
                            {
                                _retValue =  retTree ;
                                goto quick_prog_elem_ret ;
                            }
                            break ;
                        case PRAGMA_TAB_DIRECTIVE : 
                            tokenAhead = 0 ;
                            CommTerm();
                            {
                                PPTREE  _ptTree0 = 0, _ptRes0 = 0 ;
                                _ptRes0 =  MakeTree(CONFIG, 1);
                                {
                                    PPTREE  _ptTree1 = 0, _ptRes1 = 0 ;
                                    _ptRes1 =  MakeTree(TAB_DIRECTIVE, 1);
                                    (tokenAhead == 1 || (Lex(), TRACE_LEX(1)));
                                    if ( !TERM_OR_META(IDENT, "IDENT") || !BUILD_TERM_META(_ptTree1) ) {
                                        MulFreeTree(5, _ptRes1, _ptTree1, _ptRes0, _ptTree0, retTree);
                                        TOKEN_EXIT(quick_prog_elem_exit, "IDENT");
                                    } else {
                                        tokenAhead =  0 ;
                                    }
                                    ReplaceTree(_ptRes1, 1, _ptTree1);
                                    _ptTree0 =  _ptRes1 ;
                                }
                                ReplaceTree(_ptRes0, 1, _ptTree0);
                                retTree =  _ptRes0 ;
                            }
                            AnalyzeTabDirective(retTree);
                            {
                                _retValue =  retTree ;
                                goto quick_prog_elem_ret ;
                            }
                            break ;
                        case PRAGMA_SPACE_ARROW : 
                            tokenAhead = 0 ;
                            CommTerm();
                            {
                                PPTREE  _ptTree0 = 0, _ptRes0 = 0 ;
                                _ptRes0 =  MakeTree(CONFIG, 1);
                                {
                                    PPTREE  _ptTree1 = 0, _ptRes1 = 0 ;
                                    _ptRes1 =  MakeTree(SPACE_ARROW, 1);
                                    (tokenAhead == 1 || (Lex(), TRACE_LEX(1)));
                                    if ( !TERM_OR_META(IDENT, "IDENT") || !BUILD_TERM_META(_ptTree1) ) {
                                        MulFreeTree(5, _ptRes1, _ptTree1, _ptRes0, _ptTree0, retTree);
                                        TOKEN_EXIT(quick_prog_elem_exit, "IDENT");
                                    } else {
                                        tokenAhead =  0 ;
                                    }
                                    ReplaceTree(_ptRes1, 1, _ptTree1);
                                    _ptTree0 =  _ptRes1 ;
                                }
                                ReplaceTree(_ptRes0, 1, _ptTree0);
                                retTree =  _ptRes0 ;
                            }
                            AnalyzeSpaceArrow(retTree);
                            {
                                _retValue =  retTree ;
                                goto quick_prog_elem_ret ;
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
                                        MulFreeTree(5, _ptRes1, _ptTree1, _ptRes0, _ptTree0, retTree);
                                        TOKEN_EXIT(quick_prog_elem_exit, "IDENT");
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
                                goto quick_prog_elem_ret ;
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
                                        MulFreeTree(5, _ptRes1, _ptTree1, _ptRes0, _ptTree0, retTree);
                                        TOKEN_EXIT(quick_prog_elem_exit, "IDENT");
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
                                goto quick_prog_elem_ret ;
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
                                        MulFreeTree(5, _ptRes1, _ptTree1, _ptRes0, _ptTree0, retTree);
                                        TOKEN_EXIT(quick_prog_elem_exit, "IDENT");
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
                                goto quick_prog_elem_ret ;
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
                                        MulFreeTree(5, _ptRes1, _ptTree1, _ptRes0, _ptTree0, retTree);
                                        TOKEN_EXIT(quick_prog_elem_exit, "IDENT");
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
                                goto quick_prog_elem_ret ;
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
                                        MulFreeTree(5, _ptRes1, _ptTree1, _ptRes0, _ptTree0, retTree);
                                        TOKEN_EXIT(quick_prog_elem_exit, "IDENT");
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
                                goto quick_prog_elem_ret ;
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
                                        MulFreeTree(5, _ptRes1, _ptTree1, _ptRes0, _ptTree0, retTree);
                                        TOKEN_EXIT(quick_prog_elem_exit, "INTEGER");
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
                                goto quick_prog_elem_ret ;
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
                                        MulFreeTree(5, _ptRes1, _ptTree1, _ptRes0, _ptTree0, retTree);
                                        TOKEN_EXIT(quick_prog_elem_exit, "STRING");
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
                                goto quick_prog_elem_ret ;
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
                                        MulFreeTree(5, _ptRes1, _ptTree1, _ptRes0, _ptTree0, retTree);
                                        TOKEN_EXIT(quick_prog_elem_exit, "STRING");
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
                                goto quick_prog_elem_ret ;
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
                                        MulFreeTree(5, _ptRes1, _ptTree1, _ptRes0, _ptTree0, retTree);
                                        TOKEN_EXIT(quick_prog_elem_exit, "STRING");
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
                                goto quick_prog_elem_ret ;
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
                                        MulFreeTree(5, _ptRes1, _ptTree1, _ptRes0, _ptTree0, retTree);
                                        TOKEN_EXIT(quick_prog_elem_exit, "STRING");
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
                                goto quick_prog_elem_ret ;
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
                                        MulFreeTree(5, _ptRes1, _ptTree1, _ptRes0, _ptTree0, retTree);
                                        TOKEN_EXIT(quick_prog_elem_exit, "IDENT");
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
                                goto quick_prog_elem_ret ;
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
                                        MulFreeTree(5, _ptRes1, _ptTree1, _ptRes0, _ptTree0, retTree);
                                        TOKEN_EXIT(quick_prog_elem_exit, "STRING");
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
                                goto quick_prog_elem_ret ;
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
                                        MulFreeTree(5, _ptRes1, _ptTree1, _ptRes0, _ptTree0, retTree);
                                        TOKEN_EXIT(quick_prog_elem_exit, "STRING");
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
                                goto quick_prog_elem_ret ;
                            }
                            break ;
                        default : 
                            {
                                PPTREE  _ptTree0 = 0 ;
                                if ( (_ptTree0 = NQUICK_CALL(_Tak(other_config)(error_free), 105, cplus)) == (PPTREE) -1 ) {
                                    MulFreeTree(2, _ptTree0, retTree);
                                    PROG_EXIT(quick_prog_elem_exit, "quick_prog_elem");
                                }
                                _retValue =  _ptTree0 ;
                                goto quick_prog_elem_ret ;
                            }
                            break ;
                    }
                    break ;
                default : break ;
            }
            {
                PPTREE  _ptTree0 = 0 ;
                {
                    PPTREE  _ptRes1 = 0 ;
                    _ptRes1  =  MakeTree(IDENT, 1);
                    _ptTree0 =  _ptRes1 ;
                }
                _retValue =  _ptTree0 ;
                goto quick_prog_elem_ret ;
            }
            break ;
        default : 
            tokenAhead = 0 ;
            CommTerm();
            if ( tokenAhead && tokenAhead != -1 || c != EOF ) {
                (tokenAhead == 5 || (LexEndLine(), TRACE_LEX(1)));
                if ( !TERM_OR_META(END_LINE, "END_LINE") || !(CommTerm(), 1) ) {
                    MulFreeTree(1, retTree);
                    TOKEN_EXIT(quick_prog_elem_exit, "END_LINE");
                } else {
                    tokenAhead =  0 ;
                }
                goto debut ;
            } else {
                {
                    _retValue =  retTree ;
                    goto quick_prog_elem_ret ;
                }
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
    return (PPTREE)0 ;
quick_prog_elem_exit : 
    _Debug = TRACE_RULE("quick_prog_elem", TRACE_EXIT, (PPTREE)0);
    _funcLevel-- ;
    return (PPTREE) -1 ;
quick_prog_elem_ret : 
    _Debug = TRACE_RULE("quick_prog_elem", TRACE_RETURN, _retValue);
    (tokenAhead || (LexComment(), tokenAhead =  -1, TRACE_LEX(1)));
    if ( _nbPre || listComm ) 
        AddComm(_ptPreComm, _nbPre, _retValue, lastTree);
    else {
        _lastTree =  _retValue ;
        _funcLevel-- ;
    }
    return _retValue ;
}
