/*************************************************************************/
/*                                                                       */
/*        Produced by MetaGen version 2.0  -    1989-2006                 */
/*       Syntaxic Analyzer Meta Generator developped by                  */
/*                  Eric Lavillonniere                                   */
/*                                                                       */
/*************************************************************************/
#include "token.h"
#include "cplus.h"

PPTREE cplus::range_in_liste ( int error_free )
{
    PFILE_POSITION  _filePosition = (PFILE_POSITION)0 ;
    int             _value, _nbPre = 0 ;
    PCOMM_ELEM      _ptPreComm = ((tokenAhead || (LexComment(), tokenAhead =  -1, TRACE_LEX(1))), listComm ? LookComm(&_nbPre) : (_funcLevel++, (PCOMM_ELEM)0));
    int             _Debug = TRACE_RULE("range_in_liste", TRACE_ENTER, (PPTREE)0);
    PPTREE          lastTree = _lastTree, _retValue ;
    PPTREE          retTree = (PPTREE)0 ;
    
    (tokenAhead == 1 || (Lex(), TRACE_LEX(1)));
    if ( !TERM_OR_META(IDENT, "IDENT") || !BUILD_TERM_META(retTree) ) {
        MulFreeTree(1, retTree);
        TOKEN_EXIT(range_in_liste_exit, "IDENT");
    } else {
        tokenAhead =  0 ;
    }
    if ( IsRange(lexEl.string()) ) {
        {
            _retValue =  retTree ;
            goto range_in_liste_ret ;
        }
    } else {
        MulFreeTree(1, retTree);
        LEX_EXIT("", 0);
        goto range_in_liste_exit ;
    }
    (tokenAhead || (LexComment(), tokenAhead =  -1, TRACE_LEX(1)));
    if ( _nbPre || listComm ) 
        AddComm(_ptPreComm, _nbPre, (PPTREE)0, lastTree);
    else {
        _lastTree =  (PPTREE)0 ;
        _funcLevel-- ;
    }
    return (PPTREE)0 ;
range_in_liste_exit : 
    _Debug = TRACE_RULE("range_in_liste", TRACE_EXIT, (PPTREE)0);
    _funcLevel-- ;
    return (PPTREE) -1 ;
range_in_liste_ret : 
    _Debug = TRACE_RULE("range_in_liste", TRACE_RETURN, _retValue);
    (tokenAhead || (LexComment(), tokenAhead =  -1, TRACE_LEX(1)));
    if ( _nbPre || listComm ) 
        AddComm(_ptPreComm, _nbPre, _retValue, lastTree);
    else {
        _lastTree =  _retValue ;
        _funcLevel-- ;
    }
    return _retValue ;
}

PPTREE cplus::range_modifier ( int error_free )
{
    PFILE_POSITION  _filePosition = (PFILE_POSITION)0 ;
    int             _value, _nbPre = 0 ;
    PCOMM_ELEM      _ptPreComm = ((tokenAhead || (LexComment(), tokenAhead =  -1, TRACE_LEX(1))), listComm ? LookComm(&_nbPre) : (_funcLevel++, (PCOMM_ELEM)0));
    int             _Debug = TRACE_RULE("range_modifier", TRACE_ENTER, (PPTREE)0);
    PPTREE          lastTree = _lastTree, _retValue ;
    PPTREE          retTree = (PPTREE)0 ;
    
    (tokenAhead == 1 || (Lex(), TRACE_LEX(1)));
    switch ( lexEl.Value ) {
        case META : 
        case IDENT : 
            {
                PPTREE  _ptTree0 = 0 ;
                {
                    PPTREE  _ptTree1 = 0, _ptRes1 = 0 ;
                    _ptRes1 =  MakeTree(RANGE_MODIFIER, 2);
                    if ( (_ptTree1 = NQUICK_CALL(_Tak(range_in_liste)(error_free), 120, cplus)) == (PPTREE) -1 ) {
                        MulFreeTree(4, _ptRes1, _ptTree1, _ptTree0, retTree);
                        PROG_EXIT(range_modifier_exit, "range_modifier");
                    }
                    ReplaceTree(_ptRes1, 1, _ptTree1);
                    _ptTree0 =  _ptRes1 ;
                }
                _retValue =  _ptTree0 ;
                goto range_modifier_ret ;
            }
            break ;
        case VOLATILE : 
            {
                PPTREE  _ptTree0 = 0 ;
                {
                    PPTREE  _ptTree1 = 0, _ptRes1 = 0 ;
                    _ptRes1 =  MakeTree(RANGE_MODIFIER, 2);
                    (tokenAhead == 1 || (Lex(), TRACE_LEX(1)));
                    if ( !SEE_TOKEN(VOLATILE, "volatile") || !(_ptTree1 = CommString(lexEl.string())) ) {
                        MulFreeTree(4, _ptRes1, _ptTree1, _ptTree0, retTree);
                        TOKEN_EXIT(range_modifier_exit, "volatile");
                    } else {
                        tokenAhead =  0 ;
                    }
                    ReplaceTree(_ptRes1, 1, _ptTree1);
                    _ptTree0 =  _ptRes1 ;
                }
                _retValue =  _ptTree0 ;
                goto range_modifier_ret ;
            }
            break ;
        case REGISTER : 
            {
                PPTREE  _ptTree0 = 0 ;
                {
                    PPTREE  _ptTree1 = 0, _ptRes1 = 0 ;
                    _ptRes1 =  MakeTree(RANGE_MODIFIER, 2);
                    (tokenAhead == 1 || (Lex(), TRACE_LEX(1)));
                    if ( !SEE_TOKEN(REGISTER, "register") || !(_ptTree1 = CommString(lexEl.string())) ) {
                        MulFreeTree(4, _ptRes1, _ptTree1, _ptTree0, retTree);
                        TOKEN_EXIT(range_modifier_exit, "register");
                    } else {
                        tokenAhead =  0 ;
                    }
                    ReplaceTree(_ptRes1, 1, _ptTree1);
                    _ptTree0 =  _ptRes1 ;
                }
                _retValue =  _ptTree0 ;
                goto range_modifier_ret ;
            }
            break ;
        case __ATTRIBUTE__ : 
            {
                PPTREE  _ptTree0 = 0 ;
                {
                    PPTREE  _ptTree1 = 0, _ptRes1 = 0 ;
                    _ptRes1 =  MakeTree(RANGE_MODIFIER, 2);
                    if ( (_ptTree1 = NQUICK_CALL(_Tak(attribute_call)(error_free), 17, cplus)) == (PPTREE) -1 ) {
                        MulFreeTree(4, _ptRes1, _ptTree1, _ptTree0, retTree);
                        PROG_EXIT(range_modifier_exit, "range_modifier");
                    }
                    ReplaceTree(_ptRes1, 1, _ptTree1);
                    _ptTree0 =  _ptRes1 ;
                }
                _retValue =  _ptTree0 ;
                goto range_modifier_ret ;
            }
            break ;
        case __ASM__ : 
            {
                PPTREE  _ptTree0 = 0 ;
                {
                    PPTREE  _ptTree1 = 0, _ptRes1 = 0 ;
                    _ptRes1 =  MakeTree(RANGE_MODIFIER, 2);
                    if ( (_ptTree1 = NQUICK_CALL(_Tak(asm_call)(error_free), 13, cplus)) == (PPTREE) -1 ) {
                        MulFreeTree(4, _ptRes1, _ptTree1, _ptTree0, retTree);
                        PROG_EXIT(range_modifier_exit, "range_modifier");
                    }
                    ReplaceTree(_ptRes1, 1, _ptTree1);
                    _ptTree0 =  _ptRes1 ;
                }
                _retValue =  _ptTree0 ;
                goto range_modifier_ret ;
            }
            break ;
        default : 
            {
                PPTREE  _ptTree0 = 0 ;
                if ( (_ptTree0 = NQUICK_CALL(_Tak(range_modifier_function)(error_free), 122, cplus)) == (PPTREE) -1 ) {
                    MulFreeTree(2, _ptTree0, retTree);
                    PROG_EXIT(range_modifier_exit, "range_modifier");
                }
                _retValue =  _ptTree0 ;
                goto range_modifier_ret ;
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
range_modifier_exit : 
    _Debug = TRACE_RULE("range_modifier", TRACE_EXIT, (PPTREE)0);
    _funcLevel-- ;
    return (PPTREE) -1 ;
range_modifier_ret : 
    _Debug = TRACE_RULE("range_modifier", TRACE_RETURN, _retValue);
    (tokenAhead || (LexComment(), tokenAhead =  -1, TRACE_LEX(1)));
    if ( _nbPre || listComm ) 
        AddComm(_ptPreComm, _nbPre, _retValue, lastTree);
    else {
        _lastTree =  _retValue ;
        _funcLevel-- ;
    }
    return _retValue ;
}

PPTREE cplus::range_modifier_function ( int error_free )
{
    PFILE_POSITION  _filePosition = (PFILE_POSITION)0 ;
    int             _value, _nbPre = 0 ;
    PCOMM_ELEM      _ptPreComm = ((tokenAhead || (LexComment(), tokenAhead =  -1, TRACE_LEX(1))), listComm ? LookComm(&_nbPre) : (_funcLevel++, (PCOMM_ELEM)0));
    int             _Debug = TRACE_RULE("range_modifier_function", TRACE_ENTER, (PPTREE)0);
    PPTREE          lastTree = _lastTree, _retValue ;
    
    (tokenAhead == 1 || (Lex(), TRACE_LEX(1)));
    switch ( lexEl.Value ) {
        case INLINE : 
            {
                PPTREE  _ptTree0 = 0 ;
                {
                    PPTREE  _ptTree1 = 0, _ptRes1 = 0 ;
                    _ptRes1 =  MakeTree(RANGE_MODIFIER, 2);
                    (tokenAhead == 1 || (Lex(), TRACE_LEX(1)));
                    if ( !SEE_TOKEN(INLINE, "inline") || !(_ptTree1 = CommString(lexEl.string())) ) {
                        MulFreeTree(3, _ptRes1, _ptTree1, _ptTree0);
                        TOKEN_EXIT(range_modifier_function_exit, "inline");
                    } else {
                        tokenAhead =  0 ;
                    }
                    ReplaceTree(_ptRes1, 1, _ptTree1);
                    _ptTree0 =  _ptRes1 ;
                }
                _retValue =  _ptTree0 ;
                goto range_modifier_function_ret ;
            }
            break ;
        case VIRTUAL : 
            {
                PPTREE  _ptTree0 = 0 ;
                {
                    PPTREE  _ptTree1 = 0, _ptRes1 = 0 ;
                    _ptRes1 =  MakeTree(RANGE_MODIFIER, 2);
                    (tokenAhead == 1 || (Lex(), TRACE_LEX(1)));
                    if ( !SEE_TOKEN(VIRTUAL, "virtual") || !(_ptTree1 = CommString(lexEl.string())) ) {
                        MulFreeTree(3, _ptRes1, _ptTree1, _ptTree0);
                        TOKEN_EXIT(range_modifier_function_exit, "virtual");
                    } else {
                        tokenAhead =  0 ;
                    }
                    ReplaceTree(_ptRes1, 1, _ptTree1);
                    _ptTree0 =  _ptRes1 ;
                }
                _retValue =  _ptTree0 ;
                goto range_modifier_function_ret ;
            }
            break ;
        case FRIEND : 
            {
                PPTREE  _ptTree0 = 0 ;
                {
                    PPTREE  _ptTree1 = 0, _ptRes1 = 0 ;
                    _ptRes1 =  MakeTree(RANGE_MODIFIER, 2);
                    (tokenAhead == 1 || (Lex(), TRACE_LEX(1)));
                    if ( !SEE_TOKEN(FRIEND, "friend") || !(_ptTree1 = CommString(lexEl.string())) ) {
                        MulFreeTree(3, _ptRes1, _ptTree1, _ptTree0);
                        TOKEN_EXIT(range_modifier_function_exit, "friend");
                    } else {
                        tokenAhead =  0 ;
                    }
                    ReplaceTree(_ptRes1, 1, _ptTree1);
                    _ptTree0 =  _ptRes1 ;
                }
                _retValue =  _ptTree0 ;
                goto range_modifier_function_ret ;
            }
            break ;
        case CONST : 
            {
                PPTREE  _ptTree0 = 0 ;
                {
                    PPTREE  _ptTree1 = 0, _ptRes1 = 0 ;
                    _ptRes1 =  MakeTree(RANGE_MODIFIER, 2);
                    (tokenAhead == 1 || (Lex(), TRACE_LEX(1)));
                    if ( !SEE_TOKEN(CONST, "const") || !(_ptTree1 = CommString(lexEl.string())) ) {
                        MulFreeTree(3, _ptRes1, _ptTree1, _ptTree0);
                        TOKEN_EXIT(range_modifier_function_exit, "const");
                    } else {
                        tokenAhead =  0 ;
                    }
                    ReplaceTree(_ptRes1, 1, _ptTree1);
                    _ptTree0 =  _ptRes1 ;
                }
                _retValue =  _ptTree0 ;
                goto range_modifier_function_ret ;
            }
            break ;
        case CONSTEXPR : 
            {
                PPTREE  _ptTree0 = 0 ;
                {
                    PPTREE  _ptTree1 = 0, _ptRes1 = 0 ;
                    _ptRes1 =  MakeTree(RANGE_MODIFIER, 2);
                    (tokenAhead == 1 || (Lex(), TRACE_LEX(1)));
                    if ( !SEE_TOKEN(CONSTEXPR, "constexpr") || !(_ptTree1 = CommString(lexEl.string())) ) {
                        MulFreeTree(3, _ptRes1, _ptTree1, _ptTree0);
                        TOKEN_EXIT(range_modifier_function_exit, "constexpr");
                    } else {
                        tokenAhead =  0 ;
                    }
                    ReplaceTree(_ptRes1, 1, _ptTree1);
                    _ptTree0 =  _ptRes1 ;
                }
                _retValue =  _ptTree0 ;
                goto range_modifier_function_ret ;
            }
            break ;
        default : 
            CASE_EXIT(range_modifier_function_exit, "either inline or virtual or friend or const or constexpr");
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
range_modifier_function_exit : 
    _Debug = TRACE_RULE("range_modifier_function", TRACE_EXIT, (PPTREE)0);
    _funcLevel-- ;
    return (PPTREE) -1 ;
range_modifier_function_ret : 
    _Debug = TRACE_RULE("range_modifier_function", TRACE_RETURN, _retValue);
    (tokenAhead || (LexComment(), tokenAhead =  -1, TRACE_LEX(1)));
    if ( _nbPre || listComm ) 
        AddComm(_ptPreComm, _nbPre, _retValue, lastTree);
    else {
        _lastTree =  _retValue ;
        _funcLevel-- ;
    }
    return _retValue ;
}

PPTREE cplus::range_modifier_ident ( int error_free )
{
    PFILE_POSITION  _filePosition = (PFILE_POSITION)0 ;
    int             _value, _nbPre = 0 ;
    PCOMM_ELEM      _ptPreComm = ((tokenAhead || (LexComment(), tokenAhead =  -1, TRACE_LEX(1))), listComm ? LookComm(&_nbPre) : (_funcLevel++, (PCOMM_ELEM)0));
    int             _Debug = TRACE_RULE("range_modifier_ident", TRACE_ENTER, (PPTREE)0);
    PPTREE          lastTree = _lastTree, _retValue ;
    PPTREE          retTree = (PPTREE)0 ;
    
    if ( NPUSH_CALL_AFF_VERIF(retTree = , _Tak(range_modifier), 121, cplus) ) {
        {
            PPTREE  _ptTree0 = 0 ;
            {
                PPTREE  _ptTree1 = 0 ;
                if ( (_ptTree1 = NQUICK_CALL(_Tak(range_modifier_ident)(error_free), 123, cplus)) == (PPTREE) -1 ) {
                    MulFreeTree(3, _ptTree1, _ptTree0, retTree);
                    PROG_EXIT(range_modifier_ident_exit, "range_modifier_ident");
                }
                _ptTree0 =  ReplaceTree(retTree, 2, _ptTree1);
            }
            _retValue =  _ptTree0 ;
            goto range_modifier_ident_ret ;
        }
    } else {
        if ( (tokenAhead == 1 || (Lex(), TRACE_LEX(1))) && SEE_TOKEN(IDENT, "IDENT") ) {
            {
                PPTREE  _ptTree0 = 0 ;
                {
                    PPTREE  _ptTree1 = 0, _ptRes1 = 0 ;
                    _ptRes1 =  MakeTree(IDENT, 1);
                    (tokenAhead == 1 || (Lex(), TRACE_LEX(1)));
                    if ( !TERM_OR_META(IDENT, "IDENT") || !BUILD_TERM_META(_ptTree1) ) {
                        MulFreeTree(4, _ptRes1, _ptTree1, _ptTree0, retTree);
                        TOKEN_EXIT(range_modifier_ident_exit, "IDENT");
                    } else {
                        tokenAhead =  0 ;
                    }
                    ReplaceTree(_ptRes1, 1, _ptTree1);
                    _ptTree0 =  _ptRes1 ;
                }
                _retValue =  _ptTree0 ;
                goto range_modifier_ident_ret ;
            }
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
range_modifier_ident_exit : 
    _Debug = TRACE_RULE("range_modifier_ident", TRACE_EXIT, (PPTREE)0);
    _funcLevel-- ;
    return (PPTREE) -1 ;
range_modifier_ident_ret : 
    _Debug = TRACE_RULE("range_modifier_ident", TRACE_RETURN, _retValue);
    (tokenAhead || (LexComment(), tokenAhead =  -1, TRACE_LEX(1)));
    if ( _nbPre || listComm ) 
        AddComm(_ptPreComm, _nbPre, _retValue, lastTree);
    else {
        _lastTree =  _retValue ;
        _funcLevel-- ;
    }
    return _retValue ;
}

PPTREE cplus::range_pragma ( int error_free )
{
    PFILE_POSITION  _filePosition = (PFILE_POSITION)0 ;
    int             _value, _nbPre = 0 ;
    PCOMM_ELEM      _ptPreComm = ((tokenAhead || (LexComment(), tokenAhead =  -1, TRACE_LEX(1))), listComm ? LookComm(&_nbPre) : (_funcLevel++, (PCOMM_ELEM)0));
    int             _Debug = TRACE_RULE("range_pragma", TRACE_ENTER, (PPTREE)0);
    PPTREE          lastTree = _lastTree, _retValue ;
    
    (tokenAhead == 8 || (LexPragma(), TRACE_LEX(1)));
    if ( !TERM_OR_META(PRAGMA_RANGE, "PRAGMA_RANGE") || !(CommTerm(), 1) ) {
        TOKEN_EXIT(range_pragma_exit, "PRAGMA_RANGE");
    } else {
        tokenAhead =  0 ;
    }
    (tokenAhead == 9 || (LexPragmaSmall(), TRACE_LEX(1)));
    if ( !TERM_OR_META(SMALL_PRAGMA_CONTENT, "SMALL_PRAGMA_CONTENT") || !(CommTerm(), 1) ) {
        TOKEN_EXIT(range_pragma_exit, "SMALL_PRAGMA_CONTENT");
    } else {
        tokenAhead =  0 ;
    }
    AnalyseRange(lexEl.string());
    (tokenAhead || (LexComment(), tokenAhead =  -1, TRACE_LEX(1)));
    if ( _nbPre || listComm ) 
        AddComm(_ptPreComm, _nbPre, (PPTREE)0, lastTree);
    else {
        _lastTree =  (PPTREE)0 ;
        _funcLevel-- ;
    }
    return (PPTREE)0 ;
range_pragma_exit : 
    _Debug = TRACE_RULE("range_pragma", TRACE_EXIT, (PPTREE)0);
    _funcLevel-- ;
    return (PPTREE) -1 ;
range_pragma_ret : 
    _Debug = TRACE_RULE("range_pragma", TRACE_RETURN, _retValue);
    (tokenAhead || (LexComment(), tokenAhead =  -1, TRACE_LEX(1)));
    if ( _nbPre || listComm ) 
        AddComm(_ptPreComm, _nbPre, _retValue, lastTree);
    else {
        _lastTree =  _retValue ;
        _funcLevel-- ;
    }
    return _retValue ;
}

PPTREE cplus::relational_expression ( int error_free )
{
    PFILE_POSITION  _filePosition = (PFILE_POSITION)0 ;
    int             _value, _nbPre = 0 ;
    PCOMM_ELEM      _ptPreComm = ((tokenAhead || (LexComment(), tokenAhead =  -1, TRACE_LEX(1))), listComm ? LookComm(&_nbPre) : (_funcLevel++, (PCOMM_ELEM)0));
    int             _Debug = TRACE_RULE("relational_expression", TRACE_ENTER, (PPTREE)0);
    PPTREE          lastTree = _lastTree, _retValue ;
    PPTREE          expTree = (PPTREE)0 ;
    
    if ( (expTree = NQUICK_CALL(_Tak(shift_expression)(error_free), 127, cplus)) == (PPTREE) -1 ) {
        MulFreeTree(1, expTree);
        PROG_EXIT(relational_expression_exit, "relational_expression");
    }
    while ( (tokenAhead == 1 || (Lex(), TRACE_LEX(1))) && SEE_TOKEN(INFEEGAL, "<=")
                || (tokenAhead == 1 || (Lex(), TRACE_LEX(1))) && SEE_TOKEN(SUPEEGAL, ">=")
                || (tokenAhead == 1 || (Lex(), TRACE_LEX(1))) && SEE_TOKEN(SUPE, ">")
                || (tokenAhead == 1 || (Lex(), TRACE_LEX(1))) && SEE_TOKEN(INFE, "<") ) {
        (tokenAhead == 1 || (Lex(), TRACE_LEX(1)));
        switch ( lexEl.Value ) {
            case INFEEGAL : 
                tokenAhead = 0 ;
                CommTerm();
                {
                    PPTREE  _ptTree0 = 0, _ptRes0 = 0 ;
                    _ptRes0 =  MakeTree(LEQU, 2);
                    ReplaceTree(_ptRes0, 1, expTree);
                    if ( (_ptTree0 = NQUICK_CALL(_Tak(shift_expression)(error_free), 127, cplus)) == (PPTREE) -1 ) {
                        MulFreeTree(3, _ptRes0, _ptTree0, expTree);
                        PROG_EXIT(relational_expression_exit, "relational_expression");
                    }
                    ReplaceTree(_ptRes0, 2, _ptTree0);
                    expTree =  _ptRes0 ;
                }
                break ;
            case SUPEEGAL : 
                tokenAhead = 0 ;
                CommTerm();
                {
                    PPTREE  _ptTree0 = 0, _ptRes0 = 0 ;
                    _ptRes0 =  MakeTree(GEQU, 2);
                    ReplaceTree(_ptRes0, 1, expTree);
                    if ( (_ptTree0 = NQUICK_CALL(_Tak(shift_expression)(error_free), 127, cplus)) == (PPTREE) -1 ) {
                        MulFreeTree(3, _ptRes0, _ptTree0, expTree);
                        PROG_EXIT(relational_expression_exit, "relational_expression");
                    }
                    ReplaceTree(_ptRes0, 2, _ptTree0);
                    expTree =  _ptRes0 ;
                }
                break ;
            case SUPE : 
                tokenAhead = 0 ;
                CommTerm();
                {
                    PPTREE  _ptTree0 = 0, _ptRes0 = 0 ;
                    _ptRes0 =  MakeTree(GT, 2);
                    ReplaceTree(_ptRes0, 1, expTree);
                    if ( (_ptTree0 = NQUICK_CALL(_Tak(shift_expression)(error_free), 127, cplus)) == (PPTREE) -1 ) {
                        MulFreeTree(3, _ptRes0, _ptTree0, expTree);
                        PROG_EXIT(relational_expression_exit, "relational_expression");
                    }
                    ReplaceTree(_ptRes0, 2, _ptTree0);
                    expTree =  _ptRes0 ;
                }
                break ;
            case INFE : 
                tokenAhead = 0 ;
                CommTerm();
                {
                    PPTREE  _ptTree0 = 0, _ptRes0 = 0 ;
                    _ptRes0 =  MakeTree(LT, 2);
                    ReplaceTree(_ptRes0, 1, expTree);
                    if ( (_ptTree0 = NQUICK_CALL(_Tak(shift_expression)(error_free), 127, cplus)) == (PPTREE) -1 ) {
                        MulFreeTree(3, _ptRes0, _ptTree0, expTree);
                        PROG_EXIT(relational_expression_exit, "relational_expression");
                    }
                    ReplaceTree(_ptRes0, 2, _ptTree0);
                    expTree =  _ptRes0 ;
                }
                break ;
            default : 
                MulFreeTree(1, expTree);
                CASE_EXIT(relational_expression_exit, "either <= or >= or > or <");
                break ;
        }
    }
    {
        _retValue =  expTree ;
        goto relational_expression_ret ;
    }
    (tokenAhead || (LexComment(), tokenAhead =  -1, TRACE_LEX(1)));
    if ( _nbPre || listComm ) 
        AddComm(_ptPreComm, _nbPre, (PPTREE)0, lastTree);
    else {
        _lastTree =  (PPTREE)0 ;
        _funcLevel-- ;
    }
    return (PPTREE)0 ;
relational_expression_exit : 
    _Debug = TRACE_RULE("relational_expression", TRACE_EXIT, (PPTREE)0);
    _funcLevel-- ;
    return (PPTREE) -1 ;
relational_expression_ret : 
    _Debug = TRACE_RULE("relational_expression", TRACE_RETURN, _retValue);
    (tokenAhead || (LexComment(), tokenAhead =  -1, TRACE_LEX(1)));
    if ( _nbPre || listComm ) 
        AddComm(_ptPreComm, _nbPre, _retValue, lastTree);
    else {
        _lastTree =  _retValue ;
        _funcLevel-- ;
    }
    return _retValue ;
}

PPTREE cplus::sc_specifier ( int error_free )
{
    PFILE_POSITION  _filePosition = (PFILE_POSITION)0 ;
    int             _value, _nbPre = 0 ;
    PCOMM_ELEM      _ptPreComm = ((tokenAhead || (LexComment(), tokenAhead =  -1, TRACE_LEX(1))), listComm ? LookComm(&_nbPre) : (_funcLevel++, (PCOMM_ELEM)0));
    int             _Debug = TRACE_RULE("sc_specifier", TRACE_ENTER, (PPTREE)0);
    PPTREE          lastTree = _lastTree, _retValue ;
    
    (tokenAhead == 1 || (Lex(), TRACE_LEX(1)));
    switch ( lexEl.Value ) {
        case AUTO : 
            {
                PPTREE  _ptTree0 = 0 ;
                (tokenAhead == 1 || (Lex(), TRACE_LEX(1)));
                if ( !SEE_TOKEN(AUTO, "auto") || !(_ptTree0 = CommString(lexEl.string())) ) {
                    MulFreeTree(1, _ptTree0);
                    TOKEN_EXIT(sc_specifier_exit, "auto");
                } else {
                    tokenAhead =  0 ;
                }
                _retValue =  _ptTree0 ;
                goto sc_specifier_ret ;
            }
            break ;
        case STATIC : 
            {
                PPTREE  _ptTree0 = 0 ;
                (tokenAhead == 1 || (Lex(), TRACE_LEX(1)));
                if ( !SEE_TOKEN(STATIC, "static") || !(_ptTree0 = CommString(lexEl.string())) ) {
                    MulFreeTree(1, _ptTree0);
                    TOKEN_EXIT(sc_specifier_exit, "static");
                } else {
                    tokenAhead =  0 ;
                }
                _retValue =  _ptTree0 ;
                goto sc_specifier_ret ;
            }
            break ;
        case EXTERN : 
            {
                PPTREE  _ptTree0 = 0 ;
                (tokenAhead == 1 || (Lex(), TRACE_LEX(1)));
                if ( !SEE_TOKEN(EXTERN, "extern") || !(_ptTree0 = CommString(lexEl.string())) ) {
                    MulFreeTree(1, _ptTree0);
                    TOKEN_EXIT(sc_specifier_exit, "extern");
                } else {
                    tokenAhead =  0 ;
                }
                _retValue =  _ptTree0 ;
                goto sc_specifier_ret ;
            }
            break ;
        case REGISTER : 
            {
                PPTREE  _ptTree0 = 0 ;
                (tokenAhead == 1 || (Lex(), TRACE_LEX(1)));
                if ( !SEE_TOKEN(REGISTER, "register") || !(_ptTree0 = CommString(lexEl.string())) ) {
                    MulFreeTree(1, _ptTree0);
                    TOKEN_EXIT(sc_specifier_exit, "register");
                } else {
                    tokenAhead =  0 ;
                }
                _retValue =  _ptTree0 ;
                goto sc_specifier_ret ;
            }
            break ;
        default : break ;
    }
    (tokenAhead || (LexComment(), tokenAhead =  -1, TRACE_LEX(1)));
    if ( _nbPre || listComm ) 
        AddComm(_ptPreComm, _nbPre, (PPTREE)0, lastTree);
    else {
        _lastTree =  (PPTREE)0 ;
        _funcLevel-- ;
    }
    return (PPTREE)0 ;
sc_specifier_exit : 
    _Debug = TRACE_RULE("sc_specifier", TRACE_EXIT, (PPTREE)0);
    _funcLevel-- ;
    return (PPTREE) -1 ;
sc_specifier_ret : 
    _Debug = TRACE_RULE("sc_specifier", TRACE_RETURN, _retValue);
    (tokenAhead || (LexComment(), tokenAhead =  -1, TRACE_LEX(1)));
    if ( _nbPre || listComm ) 
        AddComm(_ptPreComm, _nbPre, _retValue, lastTree);
    else {
        _lastTree =  _retValue ;
        _funcLevel-- ;
    }
    return _retValue ;
}

PPTREE cplus::shift_expression ( int error_free )
{
    PFILE_POSITION  _filePosition = (PFILE_POSITION)0 ;
    int             _value, _nbPre = 0 ;
    PCOMM_ELEM      _ptPreComm = ((tokenAhead || (LexComment(), tokenAhead =  -1, TRACE_LEX(1))), listComm ? LookComm(&_nbPre) : (_funcLevel++, (PCOMM_ELEM)0));
    int             _Debug = TRACE_RULE("shift_expression", TRACE_ENTER, (PPTREE)0);
    PPTREE          lastTree = _lastTree, _retValue ;
    PPTREE          expTree = (PPTREE)0 ;
    
    if ( (expTree = NQUICK_CALL(_Tak(additive_expression)(error_free), 3, cplus)) == (PPTREE) -1 ) {
        MulFreeTree(1, expTree);
        PROG_EXIT(shift_expression_exit, "shift_expression");
    }
    while ( (tokenAhead == 1 || (Lex(), TRACE_LEX(1))) && SEE_TOKEN(INFEINFE, "<<") || (tokenAhead == 1 || (Lex(), TRACE_LEX(1))) && SEE_TOKEN(SUPESUPE, ">>") ) {
        (tokenAhead == 1 || (Lex(), TRACE_LEX(1)));
        switch ( lexEl.Value ) {
            case INFEINFE : 
                tokenAhead = 0 ;
                CommTerm();
                {
                    PPTREE  _ptTree0 = 0, _ptRes0 = 0 ;
                    _ptRes0 =  MakeTree(LSHI, 2);
                    ReplaceTree(_ptRes0, 1, expTree);
                    if ( (_ptTree0 = NQUICK_CALL(_Tak(additive_expression)(error_free), 3, cplus)) == (PPTREE) -1 ) {
                        MulFreeTree(3, _ptRes0, _ptTree0, expTree);
                        PROG_EXIT(shift_expression_exit, "shift_expression");
                    }
                    ReplaceTree(_ptRes0, 2, _ptTree0);
                    expTree =  _ptRes0 ;
                }
                break ;
            case SUPESUPE : 
                tokenAhead = 0 ;
                CommTerm();
                {
                    PPTREE  _ptTree0 = 0, _ptRes0 = 0 ;
                    _ptRes0 =  MakeTree(RSHI, 2);
                    ReplaceTree(_ptRes0, 1, expTree);
                    if ( (_ptTree0 = NQUICK_CALL(_Tak(additive_expression)(error_free), 3, cplus)) == (PPTREE) -1 ) {
                        MulFreeTree(3, _ptRes0, _ptTree0, expTree);
                        PROG_EXIT(shift_expression_exit, "shift_expression");
                    }
                    ReplaceTree(_ptRes0, 2, _ptTree0);
                    expTree =  _ptRes0 ;
                }
                break ;
            default : 
                MulFreeTree(1, expTree);
                CASE_EXIT(shift_expression_exit, "either << or >>");
                break ;
        }
    }
    {
        _retValue =  expTree ;
        goto shift_expression_ret ;
    }
    (tokenAhead || (LexComment(), tokenAhead =  -1, TRACE_LEX(1)));
    if ( _nbPre || listComm ) 
        AddComm(_ptPreComm, _nbPre, (PPTREE)0, lastTree);
    else {
        _lastTree =  (PPTREE)0 ;
        _funcLevel-- ;
    }
    return (PPTREE)0 ;
shift_expression_exit : 
    _Debug = TRACE_RULE("shift_expression", TRACE_EXIT, (PPTREE)0);
    _funcLevel-- ;
    return (PPTREE) -1 ;
shift_expression_ret : 
    _Debug = TRACE_RULE("shift_expression", TRACE_RETURN, _retValue);
    (tokenAhead || (LexComment(), tokenAhead =  -1, TRACE_LEX(1)));
    if ( _nbPre || listComm ) 
        AddComm(_ptPreComm, _nbPre, _retValue, lastTree);
    else {
        _lastTree =  _retValue ;
        _funcLevel-- ;
    }
    return _retValue ;
}

PPTREE cplus::simple_type ( int error_free )
{
    PFILE_POSITION  _filePosition = (PFILE_POSITION)0 ;
    int             _value, _nbPre = 0 ;
    PCOMM_ELEM      _ptPreComm = ((tokenAhead || (LexComment(), tokenAhead =  -1, TRACE_LEX(1))), listComm ? LookComm(&_nbPre) : (_funcLevel++, (PCOMM_ELEM)0));
    int             _Debug = TRACE_RULE("simple_type", TRACE_ENTER, (PPTREE)0);
    PPTREE          lastTree = _lastTree, _retValue ;
    PPTREE          valTree = (PPTREE)0 ;
    
    (tokenAhead == 1 || (Lex(), TRACE_LEX(1)));
    switch ( lexEl.Value ) {
        case TYPENAME : 
            tokenAhead = 0 ;
            CommTerm();
            {
                PPTREE  _ptTree0 = 0 ;
                {
                    PPTREE  _ptTree1 = 0, _ptRes1 = 0 ;
                    _ptRes1 =  MakeTree(TYPENAME, 1);
                    {
                        PPTREE  _ptTree2 = 0, _ptRes2 = 0 ;
                        _ptRes2 =  MakeTree(TIDENT, 1);
                        if ( (_ptTree2 = NQUICK_CALL(_Tak(complete_class_name)(error_free), 27, cplus)) == (PPTREE) -1 ) {
                            MulFreeTree(6, _ptRes2, _ptTree2, _ptRes1, _ptTree1, _ptTree0, valTree);
                            PROG_EXIT(simple_type_exit, "simple_type");
                        }
                        ReplaceTree(_ptRes2, 1, _ptTree2);
                        _ptTree1 =  _ptRes2 ;
                    }
                    ReplaceTree(_ptRes1, 1, _ptTree1);
                    _ptTree0 =  _ptRes1 ;
                }
                _retValue =  _ptTree0 ;
                goto simple_type_ret ;
            }
            break ;
        case DECLTYPE : 
            tokenAhead = 0 ;
            CommTerm();
            (tokenAhead == 1 || (Lex(), TRACE_LEX(1)));
            if ( !SEE_TOKEN(POUV, "(") || !(CommTerm(), 1) ) {
                MulFreeTree(1, valTree);
                TOKEN_EXIT(simple_type_exit, "(");
            } else {
                tokenAhead =  0 ;
            }
            {
                PPTREE  _ptTree0 = 0, _ptRes0 = 0 ;
                _ptRes0 =  MakeTree(DECL_TYPE, 1);
                if ( (_ptTree0 = NQUICK_CALL(_Tak(postfix_expression)(error_free), 109, cplus)) == (PPTREE) -1 ) {
                    MulFreeTree(3, _ptRes0, _ptTree0, valTree);
                    PROG_EXIT(simple_type_exit, "simple_type");
                }
                ReplaceTree(_ptRes0, 1, _ptTree0);
                valTree =  _ptRes0 ;
            }
            (tokenAhead == 1 || (Lex(), TRACE_LEX(1)));
            if ( !SEE_TOKEN(PFER, ")") || !(CommTerm(), 1) ) {
                MulFreeTree(1, valTree);
                TOKEN_EXIT(simple_type_exit, ")");
            } else {
                tokenAhead =  0 ;
            }
            {
                _retValue =  valTree ;
                goto simple_type_ret ;
            }
            break ;
        case AUTO : 
            tokenAhead = 0 ;
            CommTerm();
            {
                PPTREE  _ptTree0 = 0 ;
                {
                    PPTREE  _ptRes1 = 0 ;
                    _ptRes1  =  MakeTree(AUTO, 0);
                    _ptTree0 =  _ptRes1 ;
                }
                _retValue =  _ptTree0 ;
                goto simple_type_ret ;
            }
            break ;
        case DOUBLE : 
            tokenAhead = 0 ;
            CommTerm();
            {
                PPTREE  _ptTree0 = 0 ;
                {
                    PPTREE  _ptRes1 = 0 ;
                    _ptRes1  =  MakeTree(TDOUBLE, 0);
                    _ptTree0 =  _ptRes1 ;
                }
                _retValue =  _ptTree0 ;
                goto simple_type_ret ;
            }
            break ;
        case INT : 
            tokenAhead = 0 ;
            CommTerm();
            {
                PPTREE  _ptTree0 = 0 ;
                {
                    PPTREE  _ptRes1 = 0 ;
                    _ptRes1  =  MakeTree(TINT, 0);
                    _ptTree0 =  _ptRes1 ;
                }
                _retValue =  _ptTree0 ;
                goto simple_type_ret ;
            }
            break ;
        case CHAR : 
            tokenAhead = 0 ;
            CommTerm();
            {
                PPTREE  _ptTree0 = 0 ;
                {
                    PPTREE  _ptRes1 = 0 ;
                    _ptRes1  =  MakeTree(TCHAR, 0);
                    _ptTree0 =  _ptRes1 ;
                }
                _retValue =  _ptTree0 ;
                goto simple_type_ret ;
            }
            break ;
        case FLOAT : 
            tokenAhead = 0 ;
            CommTerm();
            {
                PPTREE  _ptTree0 = 0 ;
                {
                    PPTREE  _ptRes1 = 0 ;
                    _ptRes1  =  MakeTree(TFLOAT, 0);
                    _ptTree0 =  _ptRes1 ;
                }
                _retValue =  _ptTree0 ;
                goto simple_type_ret ;
            }
            break ;
        case VOID : 
            tokenAhead = 0 ;
            CommTerm();
            {
                PPTREE  _ptTree0 = 0 ;
                {
                    PPTREE  _ptRes1 = 0 ;
                    _ptRes1  =  MakeTree(VOID, 0);
                    _ptTree0 =  _ptRes1 ;
                }
                _retValue =  _ptTree0 ;
                goto simple_type_ret ;
            }
            break ;
        case DPOIDPOI : 
            {
                PPTREE  _ptTree0 = 0 ;
                {
                    PPTREE  _ptTree1 = 0, _ptRes1 = 0 ;
                    _ptRes1 =  MakeTree(TIDENT, 1);
                    if ( (_ptTree1 = NQUICK_CALL(_Tak(complete_class_name)(error_free), 27, cplus)) == (PPTREE) -1 ) {
                        MulFreeTree(4, _ptRes1, _ptTree1, _ptTree0, valTree);
                        PROG_EXIT(simple_type_exit, "simple_type");
                    }
                    ReplaceTree(_ptRes1, 1, _ptTree1);
                    _ptTree0 =  _ptRes1 ;
                }
                _retValue =  _ptTree0 ;
                goto simple_type_ret ;
            }
            break ;
        case META : 
        case IDENT : 
            {
                PPTREE  _ptTree0 = 0 ;
                {
                    PPTREE  _ptTree1 = 0, _ptRes1 = 0 ;
                    _ptRes1 =  MakeTree(TIDENT, 1);
                    if ( (_ptTree1 = NQUICK_CALL(_Tak(complete_class_name)(error_free), 27, cplus)) == (PPTREE) -1 ) {
                        MulFreeTree(4, _ptRes1, _ptTree1, _ptTree0, valTree);
                        PROG_EXIT(simple_type_exit, "simple_type");
                    }
                    ReplaceTree(_ptRes1, 1, _ptTree1);
                    _ptTree0 =  _ptRes1 ;
                }
                _retValue =  _ptTree0 ;
                goto simple_type_ret ;
            }
            break ;
        case LONG : 
            tokenAhead = 0 ;
            CommTerm();
            (tokenAhead == 1 || (Lex(), TRACE_LEX(1)));
            switch ( lexEl.Value ) {
                case FLOAT : 
                    tokenAhead = 0 ;
                    CommTerm();
                    {
                        PPTREE  _ptTree0 = 0 ;
                        {
                            PPTREE  _ptTree1 = 0, _ptRes1 = 0 ;
                            _ptRes1 =  MakeTree(TLONG, 1);
                            {
                                PPTREE  _ptRes2 = 0 ;
                                _ptRes2  =  MakeTree(TFLOAT, 0);
                                _ptTree1 =  _ptRes2 ;
                            }
                            ReplaceTree(_ptRes1, 1, _ptTree1);
                            _ptTree0 =  _ptRes1 ;
                        }
                        _retValue =  _ptTree0 ;
                        goto simple_type_ret ;
                    }
                    break ;
                case DOUBLE : 
                    tokenAhead = 0 ;
                    CommTerm();
                    {
                        PPTREE  _ptTree0 = 0 ;
                        {
                            PPTREE  _ptTree1 = 0, _ptRes1 = 0 ;
                            _ptRes1 =  MakeTree(TLONG, 1);
                            {
                                PPTREE  _ptRes2 = 0 ;
                                _ptRes2  =  MakeTree(TDOUBLE, 0);
                                _ptTree1 =  _ptRes2 ;
                            }
                            ReplaceTree(_ptRes1, 1, _ptTree1);
                            _ptTree0 =  _ptRes1 ;
                        }
                        _retValue =  _ptTree0 ;
                        goto simple_type_ret ;
                    }
                    break ;
                case INT : 
                    tokenAhead = 0 ;
                    CommTerm();
                    {
                        PPTREE  _ptTree0 = 0 ;
                        {
                            PPTREE  _ptTree1 = 0, _ptRes1 = 0 ;
                            _ptRes1 =  MakeTree(TLONG, 1);
                            {
                                PPTREE  _ptRes2 = 0 ;
                                _ptRes2  =  MakeTree(TINT, 0);
                                _ptTree1 =  _ptRes2 ;
                            }
                            ReplaceTree(_ptRes1, 1, _ptTree1);
                            _ptTree0 =  _ptRes1 ;
                        }
                        _retValue =  _ptTree0 ;
                        goto simple_type_ret ;
                    }
                    break ;
                case SIGNED : 
                    tokenAhead = 0 ;
                    CommTerm();
                    if ( NPUSH_CALL_AFF_VERIF(valTree = , _Tak(long_short_int_char), 91, cplus) ) {
                        {
                            PPTREE  _ptTree0 = 0 ;
                            {
                                PPTREE  _ptTree1 = 0, _ptRes1 = 0 ;
                                _ptRes1 =  MakeTree(TSIGNED, 1);
                                {
                                    PPTREE  _ptRes2 = 0 ;
                                    _ptRes2 =  MakeTree(TLONG, 1);
                                    ReplaceTree(_ptRes2, 1, valTree);
                                    _ptTree1 =  _ptRes2 ;
                                }
                                ReplaceTree(_ptRes1, 1, _ptTree1);
                                _ptTree0 =  _ptRes1 ;
                            }
                            _retValue =  _ptTree0 ;
                            goto simple_type_ret ;
                        }
                    }
                    break ;
                case UNSIGNED : 
                    tokenAhead = 0 ;
                    CommTerm();
                    if ( NPUSH_CALL_AFF_VERIF(valTree = , _Tak(long_short_int_char), 91, cplus) ) {
                        {
                            PPTREE  _ptTree0 = 0 ;
                            {
                                PPTREE  _ptTree1 = 0, _ptRes1 = 0 ;
                                _ptRes1 =  MakeTree(TUNSIGNED, 1);
                                {
                                    PPTREE  _ptRes2 = 0 ;
                                    _ptRes2 =  MakeTree(TLONG, 1);
                                    ReplaceTree(_ptRes2, 1, valTree);
                                    _ptTree1 =  _ptRes2 ;
                                }
                                ReplaceTree(_ptRes1, 1, _ptTree1);
                                _ptTree0 =  _ptRes1 ;
                            }
                            _retValue =  _ptTree0 ;
                            goto simple_type_ret ;
                        }
                    }
                    break ;
                case LONG : 
                    tokenAhead = 0 ;
                    CommTerm();
                    (tokenAhead == 1 || (Lex(), TRACE_LEX(1)));
                    switch ( lexEl.Value ) {
                        case FLOAT : 
                            tokenAhead = 0 ;
                            CommTerm();
                            {
                                PPTREE  _ptTree0 = 0 ;
                                {
                                    PPTREE  _ptTree1 = 0, _ptRes1 = 0 ;
                                    _ptRes1 =  MakeTree(TLONG, 1);
                                    {
                                        PPTREE  _ptTree2 = 0, _ptRes2 = 0 ;
                                        _ptRes2 =  MakeTree(TLONG, 1);
                                        {
                                            PPTREE  _ptRes3 = 0 ;
                                            _ptRes3  =  MakeTree(TFLOAT, 0);
                                            _ptTree2 =  _ptRes3 ;
                                        }
                                        ReplaceTree(_ptRes2, 1, _ptTree2);
                                        _ptTree1 =  _ptRes2 ;
                                    }
                                    ReplaceTree(_ptRes1, 1, _ptTree1);
                                    _ptTree0 =  _ptRes1 ;
                                }
                                _retValue =  _ptTree0 ;
                                goto simple_type_ret ;
                            }
                            break ;
                        case DOUBLE : 
                            tokenAhead = 0 ;
                            CommTerm();
                            {
                                PPTREE  _ptTree0 = 0 ;
                                {
                                    PPTREE  _ptTree1 = 0, _ptRes1 = 0 ;
                                    _ptRes1 =  MakeTree(TLONG, 1);
                                    {
                                        PPTREE  _ptTree2 = 0, _ptRes2 = 0 ;
                                        _ptRes2 =  MakeTree(TLONG, 1);
                                        {
                                            PPTREE  _ptRes3 = 0 ;
                                            _ptRes3  =  MakeTree(TDOUBLE, 0);
                                            _ptTree2 =  _ptRes3 ;
                                        }
                                        ReplaceTree(_ptRes2, 1, _ptTree2);
                                        _ptTree1 =  _ptRes2 ;
                                    }
                                    ReplaceTree(_ptRes1, 1, _ptTree1);
                                    _ptTree0 =  _ptRes1 ;
                                }
                                _retValue =  _ptTree0 ;
                                goto simple_type_ret ;
                            }
                            break ;
                        case INT : 
                            tokenAhead = 0 ;
                            CommTerm();
                            {
                                PPTREE  _ptTree0 = 0 ;
                                {
                                    PPTREE  _ptTree1 = 0, _ptRes1 = 0 ;
                                    _ptRes1 =  MakeTree(TLONG, 1);
                                    {
                                        PPTREE  _ptTree2 = 0, _ptRes2 = 0 ;
                                        _ptRes2 =  MakeTree(TLONG, 1);
                                        {
                                            PPTREE  _ptRes3 = 0 ;
                                            _ptRes3  =  MakeTree(TINT, 0);
                                            _ptTree2 =  _ptRes3 ;
                                        }
                                        ReplaceTree(_ptRes2, 1, _ptTree2);
                                        _ptTree1 =  _ptRes2 ;
                                    }
                                    ReplaceTree(_ptRes1, 1, _ptTree1);
                                    _ptTree0 =  _ptRes1 ;
                                }
                                _retValue =  _ptTree0 ;
                                goto simple_type_ret ;
                            }
                            break ;
                        case LONG : 
                            tokenAhead = 0 ;
                            CommTerm();
                            break ;
                        default : 
                            {
                                PPTREE  _ptTree0 = 0 ;
                                {
                                    PPTREE  _ptTree1 = 0, _ptRes1 = 0 ;
                                    _ptRes1 =  MakeTree(TLONG, 1);
                                    {
                                        PPTREE  _ptRes2 = 0 ;
                                        _ptRes2  =  MakeTree(TLONG, 1);
                                        _ptTree1 =  _ptRes2 ;
                                    }
                                    ReplaceTree(_ptRes1, 1, _ptTree1);
                                    _ptTree0 =  _ptRes1 ;
                                }
                                _retValue =  _ptTree0 ;
                                goto simple_type_ret ;
                            }
                            break ;
                    }
                    break ;
                default : 
                    {
                        PPTREE  _ptTree0 = 0 ;
                        {
                            PPTREE  _ptRes1 = 0 ;
                            _ptRes1  =  MakeTree(TLONG, 1);
                            _ptTree0 =  _ptRes1 ;
                        }
                        _retValue =  _ptTree0 ;
                        goto simple_type_ret ;
                    }
                    break ;
            }
            break ;
        case SIGNED : 
            tokenAhead = 0 ;
            CommTerm();
            if ( NPUSH_CALL_AFF_VERIF(valTree = , _Tak(long_short_int_char), 91, cplus) ) {
                {
                    PPTREE  _ptTree0 = 0 ;
                    {
                        PPTREE  _ptRes1 = 0 ;
                        _ptRes1 =  MakeTree(TSIGNED, 1);
                        ReplaceTree(_ptRes1, 1, valTree);
                        _ptTree0 =  _ptRes1 ;
                    }
                    _retValue =  _ptTree0 ;
                    goto simple_type_ret ;
                }
            } else {
                {
                    PPTREE  _ptTree0 = 0 ;
                    {
                        PPTREE  _ptRes1 = 0 ;
                        _ptRes1  =  MakeTree(TSIGNED, 1);
                        _ptTree0 =  _ptRes1 ;
                    }
                    _retValue =  _ptTree0 ;
                    goto simple_type_ret ;
                }
            }
            break ;
        case UNSIGNED : 
            tokenAhead = 0 ;
            CommTerm();
            if ( NPUSH_CALL_AFF_VERIF(valTree = , _Tak(long_short_int_char), 91, cplus) ) {
                {
                    PPTREE  _ptTree0 = 0 ;
                    {
                        PPTREE  _ptRes1 = 0 ;
                        _ptRes1 =  MakeTree(TUNSIGNED, 1);
                        ReplaceTree(_ptRes1, 1, valTree);
                        _ptTree0 =  _ptRes1 ;
                    }
                    _retValue =  _ptTree0 ;
                    goto simple_type_ret ;
                }
            } else {
                {
                    PPTREE  _ptTree0 = 0 ;
                    {
                        PPTREE  _ptRes1 = 0 ;
                        _ptRes1  =  MakeTree(TUNSIGNED, 1);
                        _ptTree0 =  _ptRes1 ;
                    }
                    _retValue =  _ptTree0 ;
                    goto simple_type_ret ;
                }
            }
            break ;
        default : 
            {
                PPTREE  _ptTree0 = 0 ;
                if ( (_ptTree0 = NQUICK_CALL(_Tak(long_short_int_char)(error_free), 91, cplus)) == (PPTREE) -1 ) {
                    MulFreeTree(2, _ptTree0, valTree);
                    PROG_EXIT(simple_type_exit, "simple_type");
                }
                _retValue =  _ptTree0 ;
                goto simple_type_ret ;
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
simple_type_exit : 
    _Debug = TRACE_RULE("simple_type", TRACE_EXIT, (PPTREE)0);
    _funcLevel-- ;
    return (PPTREE) -1 ;
simple_type_ret : 
    _Debug = TRACE_RULE("simple_type", TRACE_RETURN, _retValue);
    (tokenAhead || (LexComment(), tokenAhead =  -1, TRACE_LEX(1)));
    if ( _nbPre || listComm ) 
        AddComm(_ptPreComm, _nbPre, _retValue, lastTree);
    else {
        _lastTree =  _retValue ;
        _funcLevel-- ;
    }
    return _retValue ;
}

PPTREE cplus::simple_type_name ( int error_free )
{
    PFILE_POSITION  _filePosition = (PFILE_POSITION)0 ;
    int             _value, _nbPre = 0 ;
    PCOMM_ELEM      _ptPreComm = ((tokenAhead || (LexComment(), tokenAhead =  -1, TRACE_LEX(1))), listComm ? LookComm(&_nbPre) : (_funcLevel++, (PCOMM_ELEM)0));
    int             _Debug = TRACE_RULE("simple_type_name", TRACE_ENTER, (PPTREE)0);
    PPTREE          lastTree = _lastTree, _retValue ;
    
    if ( !((tokenAhead == 1 || (Lex(), TRACE_LEX(1))) && SEE_TOKEN(IDENT, "IDENT")) ) {
        {
            PPTREE  _ptTree0 = 0 ;
            if ( (_ptTree0 = NQUICK_CALL(_Tak(simple_type)(error_free), 128, cplus)) == (PPTREE) -1 ) {
                MulFreeTree(1, _ptTree0);
                PROG_EXIT(simple_type_name_exit, "simple_type_name");
            }
            _retValue =  _ptTree0 ;
            goto simple_type_name_ret ;
        }
    } else {
        LEX_EXIT("", 0);
        goto simple_type_name_exit ;
    }
    (tokenAhead || (LexComment(), tokenAhead =  -1, TRACE_LEX(1)));
    if ( _nbPre || listComm ) 
        AddComm(_ptPreComm, _nbPre, (PPTREE)0, lastTree);
    else {
        _lastTree =  (PPTREE)0 ;
        _funcLevel-- ;
    }
    return (PPTREE)0 ;
simple_type_name_exit : 
    _Debug = TRACE_RULE("simple_type_name", TRACE_EXIT, (PPTREE)0);
    _funcLevel-- ;
    return (PPTREE) -1 ;
simple_type_name_ret : 
    _Debug = TRACE_RULE("simple_type_name", TRACE_RETURN, _retValue);
    (tokenAhead || (LexComment(), tokenAhead =  -1, TRACE_LEX(1)));
    if ( _nbPre || listComm ) 
        AddComm(_ptPreComm, _nbPre, _retValue, lastTree);
    else {
        _lastTree =  _retValue ;
        _funcLevel-- ;
    }
    return _retValue ;
}

PPTREE cplus::sizeof_type ( int error_free )
{
    PFILE_POSITION  _filePosition = (PFILE_POSITION)0 ;
    int             _value, _nbPre = 0 ;
    PCOMM_ELEM      _ptPreComm = ((tokenAhead || (LexComment(), tokenAhead =  -1, TRACE_LEX(1))), listComm ? LookComm(&_nbPre) : (_funcLevel++, (PCOMM_ELEM)0));
    int             _Debug = TRACE_RULE("sizeof_type", TRACE_ENTER, (PPTREE)0);
    PPTREE          lastTree = _lastTree, _retValue ;
    PPTREE          expTree = (PPTREE)0 ;
    
    (tokenAhead == 1 || (Lex(), TRACE_LEX(1)));
    if ( !SEE_TOKEN(POUV, "(") || !(CommTerm(), 1) ) {
        MulFreeTree(1, expTree);
        TOKEN_EXIT(sizeof_type_exit, "(");
    } else {
        tokenAhead =  0 ;
    }
    if ( (expTree = NQUICK_CALL(_Tak(type_name)(error_free), 144, cplus)) == (PPTREE) -1 ) {
        MulFreeTree(1, expTree);
        PROG_EXIT(sizeof_type_exit, "sizeof_type");
    }
    (tokenAhead == 1 || (Lex(), TRACE_LEX(1)));
    if ( !SEE_TOKEN(PFER, ")") || !(CommTerm(), 1) ) {
        MulFreeTree(1, expTree);
        TOKEN_EXIT(sizeof_type_exit, ")");
    } else {
        tokenAhead =  0 ;
    }
    {
        _retValue =  expTree ;
        goto sizeof_type_ret ;
    }
    (tokenAhead || (LexComment(), tokenAhead =  -1, TRACE_LEX(1)));
    if ( _nbPre || listComm ) 
        AddComm(_ptPreComm, _nbPre, (PPTREE)0, lastTree);
    else {
        _lastTree =  (PPTREE)0 ;
        _funcLevel-- ;
    }
    return (PPTREE)0 ;
sizeof_type_exit : 
    _Debug = TRACE_RULE("sizeof_type", TRACE_EXIT, (PPTREE)0);
    _funcLevel-- ;
    return (PPTREE) -1 ;
sizeof_type_ret : 
    _Debug = TRACE_RULE("sizeof_type", TRACE_RETURN, _retValue);
    (tokenAhead || (LexComment(), tokenAhead =  -1, TRACE_LEX(1)));
    if ( _nbPre || listComm ) 
        AddComm(_ptPreComm, _nbPre, _retValue, lastTree);
    else {
        _lastTree =  _retValue ;
        _funcLevel-- ;
    }
    return _retValue ;
}

PPTREE cplus::stat_all ( int error_free )
{
    PFILE_POSITION  _filePosition = (PFILE_POSITION)0 ;
    int             _value, _nbPre = 0 ;
    PCOMM_ELEM      _ptPreComm = ((tokenAhead || (LexComment(), tokenAhead =  -1, TRACE_LEX(1))), listComm ? LookComm(&_nbPre) : (_funcLevel++, (PCOMM_ELEM)0));
    int             _Debug = TRACE_RULE("stat_all", TRACE_ENTER, (PPTREE)0);
    PPTREE          lastTree = _lastTree, _retValue ;
    PPTREE          stat = (PPTREE)0 ;
    
    if ( NPUSH_CALL_AFF_VERIF(stat = , _Tak(statement), 136, cplus)
            || NPUSH_CALL_AFF_VERIF(stat = , _Tak(data_declaration), 40, cplus)
            || NPUSH_CALL_AFF_VERIF(stat = , _Tak(stat_dir), 132, cplus)
            || NPUSH_CALL_AFF_VERIF(stat = , _Tak(exception), 58, cplus)
            || NPUSH_CALL_AFF_VERIF(stat = , _Tak(ext_data_declaration), 71, cplus) ) {
        {
            _retValue =  stat ;
            goto stat_all_ret ;
        }
    } else {
        {
            PPTREE  _ptTree0 = 0 ;
            if ( (_ptTree0 = NQUICK_CALL(_Tak(statement)(error_free), 136, cplus)) == (PPTREE) -1 ) {
                MulFreeTree(2, _ptTree0, stat);
                PROG_EXIT(stat_all_exit, "stat_all");
            }
            _retValue =  _ptTree0 ;
            goto stat_all_ret ;
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
stat_all_exit : 
    _Debug = TRACE_RULE("stat_all", TRACE_EXIT, (PPTREE)0);
    _funcLevel-- ;
    return (PPTREE) -1 ;
stat_all_ret : 
    _Debug = TRACE_RULE("stat_all", TRACE_RETURN, _retValue);
    (tokenAhead || (LexComment(), tokenAhead =  -1, TRACE_LEX(1)));
    if ( _nbPre || listComm ) 
        AddComm(_ptPreComm, _nbPre, _retValue, lastTree);
    else {
        _lastTree =  _retValue ;
        _funcLevel-- ;
    }
    return _retValue ;
}

PPTREE cplus::stat_dir ( int error_free )
{
    PFILE_POSITION  _filePosition = (PFILE_POSITION)0 ;
    int             _value, _nbPre = 0 ;
    PCOMM_ELEM      _ptPreComm = ((tokenAhead || (LexComment(), tokenAhead =  -1, TRACE_LEX(1))), listComm ? LookComm(&_nbPre) : (_funcLevel++, (PCOMM_ELEM)0));
    int             _Debug = TRACE_RULE("stat_dir", TRACE_ENTER, (PPTREE)0);
    PPTREE          lastTree = _lastTree, _retValue ;
    PPTREE          retTree = (PPTREE)0 ;
    
    if ( NPUSH_CALL_AFF_VERIF(retTree = , _Tak(directive), 52, cplus) ) {
        {
            _retValue =  retTree ;
            goto stat_dir_ret ;
        }
    }
    (tokenAhead == 1 || (Lex(), TRACE_LEX(1)));
    switch ( lexEl.Value ) {
        case META : 
        case IF_DIR : 
            tokenAhead = 0 ;
            CommTerm();
            {
                PPTREE  _ptTree0 = 0 ;
                if ( (_ptTree0 = NQUICK_CALL(_Tak(stat_if_dir)(error_free), 134, cplus)) == (PPTREE) -1 ) {
                    MulFreeTree(2, _ptTree0, retTree);
                    PROG_EXIT(stat_dir_exit, "stat_dir");
                }
                _retValue =  _ptTree0 ;
                goto stat_dir_ret ;
            }
            break ;
        case IFDEF_DIR : 
            {
                PPTREE  _ptTree0 = 0 ;
                if ( (_ptTree0 = NQUICK_CALL(_Tak(stat_ifdef_dir)(error_free), 135, cplus)) == (PPTREE) -1 ) {
                    MulFreeTree(2, _ptTree0, retTree);
                    PROG_EXIT(stat_dir_exit, "stat_dir");
                }
                _retValue =  _ptTree0 ;
                goto stat_dir_ret ;
            }
            break ;
        case IFNDEF_DIR : 
            {
                PPTREE  _ptTree0 = 0 ;
                if ( (_ptTree0 = NQUICK_CALL(_Tak(stat_ifdef_dir)(error_free), 135, cplus)) == (PPTREE) -1 ) {
                    MulFreeTree(2, _ptTree0, retTree);
                    PROG_EXIT(stat_dir_exit, "stat_dir");
                }
                _retValue =  _ptTree0 ;
                goto stat_dir_ret ;
            }
            break ;
        default : 
            MulFreeTree(1, retTree);
            CASE_EXIT(stat_dir_exit, "either IF_DIR or IFDEF_DIR or IFNDEF_DIR");
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
stat_dir_exit : 
    _Debug = TRACE_RULE("stat_dir", TRACE_EXIT, (PPTREE)0);
    _funcLevel-- ;
    return (PPTREE) -1 ;
stat_dir_ret : 
    _Debug = TRACE_RULE("stat_dir", TRACE_RETURN, _retValue);
    (tokenAhead || (LexComment(), tokenAhead =  -1, TRACE_LEX(1)));
    if ( _nbPre || listComm ) 
        AddComm(_ptPreComm, _nbPre, _retValue, lastTree);
    else {
        _lastTree =  _retValue ;
        _funcLevel-- ;
    }
    return _retValue ;
}

PPTREE cplus::stat_dir_switch ( int error_free )
{
    int             _oldswitchContext = switchContext ;
    PFILE_POSITION  _filePosition = (PFILE_POSITION)0 ;
    int             _value, _nbPre = 0 ;
    PCOMM_ELEM      _ptPreComm = ((tokenAhead || (LexComment(), tokenAhead =  -1, TRACE_LEX(1))), listComm ? LookComm(&_nbPre) : (_funcLevel++, (PCOMM_ELEM)0));
    int             _Debug = TRACE_RULE("stat_dir_switch", TRACE_ENTER, (PPTREE)0);
    PPTREE          lastTree = _lastTree, _retValue ;
    
    {
        switchContext =  1 ;
        {
            PPTREE  _ptTree0 = 0 ;
            if ( (_ptTree0 = NQUICK_CALL(_Tak(stat_dir)(error_free), 132, cplus)) == (PPTREE) -1 ) {
                MulFreeTree(1, _ptTree0);
                PROG_EXIT(stat_dir_switch_exit, "stat_dir_switch");
            }
            _retValue =  _ptTree0 ;
            goto stat_dir_switch_ret ;
        }
        switchContext =  _oldswitchContext ;
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
stat_dir_switch_exit : 
    _Debug = TRACE_RULE("stat_dir_switch", TRACE_EXIT, (PPTREE)0);
    _funcLevel-- ;
    switchContext =  _oldswitchContext ;
    return (PPTREE) -1 ;
stat_dir_switch_ret : 
    _Debug = TRACE_RULE("stat_dir_switch", TRACE_RETURN, _retValue);
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
