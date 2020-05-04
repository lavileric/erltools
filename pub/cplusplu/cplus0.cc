/*************************************************************************/
/*                                                                       */
/*        Produced by MetaGen version 2.0  -    1989-2006                 */
/*       Syntaxic Analyzer Meta Generator developped by                  */
/*                  Eric Lavillonniere                                   */
/*                                                                       */
/*************************************************************************/
#include "token.h"
#include "cplus.h"

PPTREE cplus::assignment_expression ( int error_free )
{
    PFILE_POSITION  _filePosition = (PFILE_POSITION)0 ;
    int             _value, _nbPre = 0 ;
    PCOMM_ELEM      _ptPreComm = ((tokenAhead || (LexComment(), tokenAhead =  -1, TRACE_LEX(1))), listComm ? LookComm(&_nbPre) : (_funcLevel++, (PCOMM_ELEM)0));
    int             _Debug = TRACE_RULE("assignment_expression", TRACE_ENTER, (PPTREE)0);
    PPTREE          lastTree = _lastTree, _retValue ;
    PPTREE          expTree = (PPTREE)0, expFollow = (PPTREE)0 ;
    
    if ( (expTree = NQUICK_CALL(_Tak(conditional_expression)(error_free), 29, cplus)) == (PPTREE) -1 ) {
        MulFreeTree(2, expFollow, expTree);
        PROG_EXIT(assignment_expression_exit, "assignment_expression");
    }
    if ( NPUSH_CALL_AFF_VERIF(expFollow = , _Tak(assignment_end), 15, cplus) ) {
        ReplaceTree(expFollow, 1, expTree);
        expTree =  expFollow ;
    }
    {
        _retValue =  expTree ;
        goto assignment_expression_ret ;
    }
    (tokenAhead || (LexComment(), tokenAhead =  -1, TRACE_LEX(1)));
    if ( _nbPre || listComm ) 
        AddComm(_ptPreComm, _nbPre, (PPTREE)0, lastTree);
    else {
        _lastTree =  (PPTREE)0 ;
        _funcLevel-- ;
    }
    return (PPTREE)0 ;
assignment_expression_exit : 
    _Debug = TRACE_RULE("assignment_expression", TRACE_EXIT, (PPTREE)0);
    _funcLevel-- ;
    return (PPTREE) -1 ;
assignment_expression_ret : 
    _Debug = TRACE_RULE("assignment_expression", TRACE_RETURN, _retValue);
    (tokenAhead || (LexComment(), tokenAhead =  -1, TRACE_LEX(1)));
    if ( _nbPre || listComm ) 
        AddComm(_ptPreComm, _nbPre, _retValue, lastTree);
    else {
        _lastTree =  _retValue ;
        _funcLevel-- ;
    }
    return _retValue ;
}

PPTREE cplus::attribute_call ( int error_free )
{
    PFILE_POSITION  _filePosition = (PFILE_POSITION)0 ;
    int             _value, _nbPre = 0 ;
    PCOMM_ELEM      _ptPreComm = ((tokenAhead || (LexComment(), tokenAhead =  -1, TRACE_LEX(1))), listComm ? LookComm(&_nbPre) : (_funcLevel++, (PCOMM_ELEM)0));
    int             _Debug = TRACE_RULE("attribute_call", TRACE_ENTER, (PPTREE)0);
    PPTREE          lastTree = _lastTree, _retValue ;
    PPTREE          retTree = (PPTREE)0 ;
    
    (tokenAhead == 1 || (Lex(), TRACE_LEX(1)));
    if ( !SEE_TOKEN(__ATTRIBUTE__, "__attribute__") || !(CommTerm(), 1) ) {
        MulFreeTree(1, retTree);
        TOKEN_EXIT(attribute_call_exit, "__attribute__");
    } else {
        tokenAhead =  0 ;
    }
    (tokenAhead == 1 || (Lex(), TRACE_LEX(1)));
    if ( !SEE_TOKEN(POUV, "(") || !(CommTerm(), 1) ) {
        MulFreeTree(1, retTree);
        TOKEN_EXIT(attribute_call_exit, "(");
    } else {
        tokenAhead =  0 ;
    }
    {
        PPTREE  _ptTree0 = 0, _ptRes0 = 0 ;
        _ptRes0 =  MakeTree(ATTRIBUTE_CALL, 1);
        if ( (_ptTree0 = NQUICK_CALL(_Tak(expression)(error_free), 62, cplus)) == (PPTREE) -1 ) {
            MulFreeTree(3, _ptRes0, _ptTree0, retTree);
            PROG_EXIT(attribute_call_exit, "attribute_call");
        }
        ReplaceTree(_ptRes0, 1, _ptTree0);
        retTree =  _ptRes0 ;
    }
    (tokenAhead == 1 || (Lex(), TRACE_LEX(1)));
    if ( !SEE_TOKEN(PFER, ")") || !(CommTerm(), 1) ) {
        MulFreeTree(1, retTree);
        TOKEN_EXIT(attribute_call_exit, ")");
    } else {
        tokenAhead =  0 ;
    }
    {
        _retValue =  retTree ;
        goto attribute_call_ret ;
    }
    (tokenAhead || (LexComment(), tokenAhead =  -1, TRACE_LEX(1)));
    if ( _nbPre || listComm ) 
        AddComm(_ptPreComm, _nbPre, (PPTREE)0, lastTree);
    else {
        _lastTree =  (PPTREE)0 ;
        _funcLevel-- ;
    }
    return (PPTREE)0 ;
attribute_call_exit : 
    _Debug = TRACE_RULE("attribute_call", TRACE_EXIT, (PPTREE)0);
    _funcLevel-- ;
    return (PPTREE) -1 ;
attribute_call_ret : 
    _Debug = TRACE_RULE("attribute_call", TRACE_RETURN, _retValue);
    (tokenAhead || (LexComment(), tokenAhead =  -1, TRACE_LEX(1)));
    if ( _nbPre || listComm ) 
        AddComm(_ptPreComm, _nbPre, _retValue, lastTree);
    else {
        _lastTree =  _retValue ;
        _funcLevel-- ;
    }
    return _retValue ;
}

PPTREE cplus::base_specifier ( int error_free )
{
    PFILE_POSITION  _filePosition = (PFILE_POSITION)0 ;
    int             _value, _nbPre = 0 ;
    PCOMM_ELEM      _ptPreComm = ((tokenAhead || (LexComment(), tokenAhead =  -1, TRACE_LEX(1))), listComm ? LookComm(&_nbPre) : (_funcLevel++, (PCOMM_ELEM)0));
    int             _Debug = TRACE_RULE("base_specifier", TRACE_ENTER, (PPTREE)0);
    PPTREE          lastTree = _lastTree, _retValue ;
    PPTREE          _addlist1 = (PPTREE)0 ;
    PPTREE          list = (PPTREE)0 ;
    
    _addlist1 =  list ;
    do {
        {
            PPTREE  _ptTree0 = 0 ;
            if ( (_ptTree0 = NQUICK_CALL(_Tak(base_specifier_elem)(error_free), 19, cplus)) == (PPTREE) -1 ) {
                MulFreeTree(3, _ptTree0, _addlist1, list);
                PROG_EXIT(base_specifier_exit, "base_specifier");
            }
            _addlist1 =  AddList(_addlist1, _ptTree0);
        }
        if ( list ) {
            _addlist1 =  SonTree(_addlist1, 2);
        } else {
            list =  _addlist1 ;
        }
    } while ( !!((tokenAhead == 1 || (Lex(), TRACE_LEX(1))) && SEE_TOKEN(VIRG, ",") && ((tokenAhead = 0), CommTerm(), 1)) );
    {
        PPTREE  _ptTree0 = 0 ;
        {
            PPTREE  _ptRes1 = 0 ;
            _ptRes1 =  MakeTree(BASE_LIST, 1);
            ReplaceTree(_ptRes1, 1, list);
            _ptTree0 =  _ptRes1 ;
        }
        _retValue =  _ptTree0 ;
        goto base_specifier_ret ;
    }
    (tokenAhead || (LexComment(), tokenAhead =  -1, TRACE_LEX(1)));
    if ( _nbPre || listComm ) 
        AddComm(_ptPreComm, _nbPre, (PPTREE)0, lastTree);
    else {
        _lastTree =  (PPTREE)0 ;
        _funcLevel-- ;
    }
    return (PPTREE)0 ;
base_specifier_exit : 
    _Debug = TRACE_RULE("base_specifier", TRACE_EXIT, (PPTREE)0);
    _funcLevel-- ;
    return (PPTREE) -1 ;
base_specifier_ret : 
    _Debug = TRACE_RULE("base_specifier", TRACE_RETURN, _retValue);
    (tokenAhead || (LexComment(), tokenAhead =  -1, TRACE_LEX(1)));
    if ( _nbPre || listComm ) 
        AddComm(_ptPreComm, _nbPre, _retValue, lastTree);
    else {
        _lastTree =  _retValue ;
        _funcLevel-- ;
    }
    return _retValue ;
}

PPTREE cplus::base_specifier_elem ( int error_free )
{
    PFILE_POSITION  _filePosition = (PFILE_POSITION)0 ;
    int             _value, _nbPre = 0 ;
    PCOMM_ELEM      _ptPreComm = ((tokenAhead || (LexComment(), tokenAhead =  -1, TRACE_LEX(1))), listComm ? LookComm(&_nbPre) : (_funcLevel++, (PCOMM_ELEM)0));
    int             _Debug = TRACE_RULE("base_specifier_elem", TRACE_ENTER, (PPTREE)0);
    PPTREE          lastTree = _lastTree, _retValue ;
    PPTREE          ret = (PPTREE)0 ;
    
    (tokenAhead == 1 || (Lex(), TRACE_LEX(1)));
    switch ( lexEl.Value ) {
        case PRIVATE : 
            tokenAhead = 0 ;
            CommTerm();
            {
                PPTREE  _ptTree0 = 0 ;
                {
                    PPTREE  _ptTree1 = 0, _ptRes1 = 0 ;
                    _ptRes1 =  MakeTree(PROTECT, 2);
                    ReplaceTree(_ptRes1, 1, MakeString("private"));
                    if ( (_ptTree1 = NQUICK_CALL(_Tak(base_specifier_elem)(error_free), 19, cplus)) == (PPTREE) -1 ) {
                        MulFreeTree(4, _ptRes1, _ptTree1, _ptTree0, ret);
                        PROG_EXIT(base_specifier_elem_exit, "base_specifier_elem");
                    }
                    ReplaceTree(_ptRes1, 2, _ptTree1);
                    _ptTree0 =  _ptRes1 ;
                }
                _retValue =  _ptTree0 ;
                goto base_specifier_elem_ret ;
            }
            break ;
        case PROTECTED : 
            tokenAhead = 0 ;
            CommTerm();
            {
                PPTREE  _ptTree0 = 0 ;
                {
                    PPTREE  _ptTree1 = 0, _ptRes1 = 0 ;
                    _ptRes1 =  MakeTree(PROTECT, 2);
                    ReplaceTree(_ptRes1, 1, MakeString("protected"));
                    if ( (_ptTree1 = NQUICK_CALL(_Tak(base_specifier_elem)(error_free), 19, cplus)) == (PPTREE) -1 ) {
                        MulFreeTree(4, _ptRes1, _ptTree1, _ptTree0, ret);
                        PROG_EXIT(base_specifier_elem_exit, "base_specifier_elem");
                    }
                    ReplaceTree(_ptRes1, 2, _ptTree1);
                    _ptTree0 =  _ptRes1 ;
                }
                _retValue =  _ptTree0 ;
                goto base_specifier_elem_ret ;
            }
            break ;
        case PUBLIC : 
            tokenAhead = 0 ;
            CommTerm();
            {
                PPTREE  _ptTree0 = 0 ;
                {
                    PPTREE  _ptTree1 = 0, _ptRes1 = 0 ;
                    _ptRes1 =  MakeTree(PROTECT, 2);
                    ReplaceTree(_ptRes1, 1, MakeString("public"));
                    if ( (_ptTree1 = NQUICK_CALL(_Tak(base_specifier_elem)(error_free), 19, cplus)) == (PPTREE) -1 ) {
                        MulFreeTree(4, _ptRes1, _ptTree1, _ptTree0, ret);
                        PROG_EXIT(base_specifier_elem_exit, "base_specifier_elem");
                    }
                    ReplaceTree(_ptRes1, 2, _ptTree1);
                    _ptTree0 =  _ptRes1 ;
                }
                _retValue =  _ptTree0 ;
                goto base_specifier_elem_ret ;
            }
            break ;
        case VIRTUAL : 
            tokenAhead = 0 ;
            CommTerm();
            {
                PPTREE  _ptTree0 = 0 ;
                {
                    PPTREE  _ptTree1 = 0, _ptRes1 = 0 ;
                    _ptRes1 =  MakeTree(PROTECT, 2);
                    ReplaceTree(_ptRes1, 1, MakeString("virtual"));
                    if ( (_ptTree1 = NQUICK_CALL(_Tak(base_specifier_elem)(error_free), 19, cplus)) == (PPTREE) -1 ) {
                        MulFreeTree(4, _ptRes1, _ptTree1, _ptTree0, ret);
                        PROG_EXIT(base_specifier_elem_exit, "base_specifier_elem");
                    }
                    ReplaceTree(_ptRes1, 2, _ptTree1);
                    _ptTree0 =  _ptRes1 ;
                }
                _retValue =  _ptTree0 ;
                goto base_specifier_elem_ret ;
            }
            break ;
        default : break ;
    }
    if ( (ret = NQUICK_CALL(_Tak(complete_class_name)(error_free), 27, cplus)) == (PPTREE) -1 ) {
        MulFreeTree(1, ret);
        PROG_EXIT(base_specifier_elem_exit, "base_specifier_elem");
    }
    {
        _retValue =  ret ;
        goto base_specifier_elem_ret ;
    }
    (tokenAhead || (LexComment(), tokenAhead =  -1, TRACE_LEX(1)));
    if ( _nbPre || listComm ) 
        AddComm(_ptPreComm, _nbPre, (PPTREE)0, lastTree);
    else {
        _lastTree =  (PPTREE)0 ;
        _funcLevel-- ;
    }
    return (PPTREE)0 ;
base_specifier_elem_exit : 
    _Debug = TRACE_RULE("base_specifier_elem", TRACE_EXIT, (PPTREE)0);
    _funcLevel-- ;
    return (PPTREE) -1 ;
base_specifier_elem_ret : 
    _Debug = TRACE_RULE("base_specifier_elem", TRACE_RETURN, _retValue);
    (tokenAhead || (LexComment(), tokenAhead =  -1, TRACE_LEX(1)));
    if ( _nbPre || listComm ) 
        AddComm(_ptPreComm, _nbPre, _retValue, lastTree);
    else {
        _lastTree =  _retValue ;
        _funcLevel-- ;
    }
    return _retValue ;
}

PPTREE cplus::bidon ( int error_free )
{
    int             _oldnoString = noString ;
    PFILE_POSITION  _filePosition = (PFILE_POSITION)0 ;
    int             _value, _nbPre = 0 ;
    PCOMM_ELEM      _ptPreComm = ((tokenAhead || (LexComment(), tokenAhead =  -1, TRACE_LEX(1))), listComm ? LookComm(&_nbPre) : (_funcLevel++, (PCOMM_ELEM)0));
    int             _Debug = TRACE_RULE("bidon", TRACE_ENTER, (PPTREE)0);
    PPTREE          lastTree = _lastTree, _retValue ;
    
    {
        noString =  1 ;
        noString =  _oldnoString ;
    }
    (tokenAhead || (LexComment(), tokenAhead =  -1, TRACE_LEX(1)));
    if ( _nbPre || listComm ) 
        AddComm(_ptPreComm, _nbPre, (PPTREE)0, lastTree);
    else {
        _lastTree =  (PPTREE)0 ;
        _funcLevel-- ;
    }
    noString =  _oldnoString ;
    return (PPTREE)0 ;
bidon_exit : 
    _Debug = TRACE_RULE("bidon", TRACE_EXIT, (PPTREE)0);
    _funcLevel-- ;
    noString =  _oldnoString ;
    return (PPTREE) -1 ;
bidon_ret : 
    _Debug = TRACE_RULE("bidon", TRACE_RETURN, _retValue);
    (tokenAhead || (LexComment(), tokenAhead =  -1, TRACE_LEX(1)));
    if ( _nbPre || listComm ) 
        AddComm(_ptPreComm, _nbPre, _retValue, lastTree);
    else {
        _lastTree =  _retValue ;
        _funcLevel-- ;
    }
    noString =  _oldnoString ;
    return _retValue ;
}

PPTREE cplus::bit_field_decl ( int error_free )
{
    PFILE_POSITION  _filePosition = (PFILE_POSITION)0 ;
    int             _value, _nbPre = 0 ;
    PCOMM_ELEM      _ptPreComm = ((tokenAhead || (LexComment(), tokenAhead =  -1, TRACE_LEX(1))), listComm ? LookComm(&_nbPre) : (_funcLevel++, (PCOMM_ELEM)0));
    int             _Debug = TRACE_RULE("bit_field_decl", TRACE_ENTER, (PPTREE)0);
    PPTREE          lastTree = _lastTree, _retValue ;
    PPTREE          retTree = (PPTREE)0, ident = (PPTREE)0 ;
    
    {
        PPTREE  _ptRes0 = 0 ;
        _ptRes0 =  MakeTree(TYP_BIT, 2);
        retTree =  _ptRes0 ;
    }
    if ( (tokenAhead == 1 || (Lex(), TRACE_LEX(1))) && SEE_TOKEN(IDENT, "IDENT") ) {
        {
            PPTREE  _ptTree0 = 0 ;
            {
                PPTREE  _ptTree1 = 0, _ptRes1 = 0 ;
                _ptRes1 =  MakeTree(IDENT, 1);
                (tokenAhead == 1 || (Lex(), TRACE_LEX(1)));
                if ( !TERM_OR_META(IDENT, "IDENT") || !BUILD_TERM_META(_ptTree1) ) {
                    MulFreeTree(5, _ptRes1, _ptTree1, _ptTree0, ident, retTree);
                    TOKEN_EXIT(bit_field_decl_exit, "IDENT");
                } else {
                    tokenAhead =  0 ;
                }
                ReplaceTree(_ptRes1, 1, _ptTree1);
                _ptTree0 =  _ptRes1 ;
            }
            ReplaceTree(retTree, 1, _ptTree0);
        }
    }
    (tokenAhead == 1 || (Lex(), TRACE_LEX(1)));
    if ( !SEE_TOKEN(DPOI, ":") || !(CommTerm(), 1) ) {
        MulFreeTree(2, ident, retTree);
        TOKEN_EXIT(bit_field_decl_exit, ":");
    } else {
        tokenAhead =  0 ;
    }
    {
        PPTREE  _ptTree0 = 0 ;
        {
            PPTREE  _ptTree1 = 0 ;
            if ( (_ptTree1 = NQUICK_CALL(_Tak(assignment_expression)(error_free), 16, cplus)) == (PPTREE) -1 ) {
                MulFreeTree(4, _ptTree1, _ptTree0, ident, retTree);
                PROG_EXIT(bit_field_decl_exit, "bit_field_decl");
            }
            _ptTree0 =  ReplaceTree(retTree, 2, _ptTree1);
        }
        _retValue =  _ptTree0 ;
        goto bit_field_decl_ret ;
    }
    (tokenAhead || (LexComment(), tokenAhead =  -1, TRACE_LEX(1)));
    if ( _nbPre || listComm ) 
        AddComm(_ptPreComm, _nbPre, (PPTREE)0, lastTree);
    else {
        _lastTree =  (PPTREE)0 ;
        _funcLevel-- ;
    }
    return (PPTREE)0 ;
bit_field_decl_exit : 
    _Debug = TRACE_RULE("bit_field_decl", TRACE_EXIT, (PPTREE)0);
    _funcLevel-- ;
    return (PPTREE) -1 ;
bit_field_decl_ret : 
    _Debug = TRACE_RULE("bit_field_decl", TRACE_RETURN, _retValue);
    (tokenAhead || (LexComment(), tokenAhead =  -1, TRACE_LEX(1)));
    if ( _nbPre || listComm ) 
        AddComm(_ptPreComm, _nbPre, _retValue, lastTree);
    else {
        _lastTree =  _retValue ;
        _funcLevel-- ;
    }
    return _retValue ;
}

PPTREE cplus::cast_expression ( int error_free )
{
    PFILE_POSITION  _filePosition = (PFILE_POSITION)0 ;
    int             _value, _nbPre = 0 ;
    PCOMM_ELEM      _ptPreComm = ((tokenAhead || (LexComment(), tokenAhead =  -1, TRACE_LEX(1))), listComm ? LookComm(&_nbPre) : (_funcLevel++, (PCOMM_ELEM)0));
    int             _Debug = TRACE_RULE("cast_expression", TRACE_ENTER, (PPTREE)0);
    PPTREE          lastTree = _lastTree, _retValue ;
    PPTREE          retTree = (PPTREE)0 ;
    
    if ( NPUSH_CALL_AFF_VERIF(retTree = , _Tak(cast_expression_value), 22, cplus) ) {
        {
            _retValue =  retTree ;
            goto cast_expression_ret ;
        }
    } else {
        {
            PPTREE  _ptTree0 = 0 ;
            if ( (_ptTree0 = NQUICK_CALL(_Tak(unary_expression)(error_free), 148, cplus)) == (PPTREE) -1 ) {
                MulFreeTree(2, _ptTree0, retTree);
                PROG_EXIT(cast_expression_exit, "cast_expression");
            }
            _retValue =  _ptTree0 ;
            goto cast_expression_ret ;
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
cast_expression_exit : 
    _Debug = TRACE_RULE("cast_expression", TRACE_EXIT, (PPTREE)0);
    _funcLevel-- ;
    return (PPTREE) -1 ;
cast_expression_ret : 
    _Debug = TRACE_RULE("cast_expression", TRACE_RETURN, _retValue);
    (tokenAhead || (LexComment(), tokenAhead =  -1, TRACE_LEX(1)));
    if ( _nbPre || listComm ) 
        AddComm(_ptPreComm, _nbPre, _retValue, lastTree);
    else {
        _lastTree =  _retValue ;
        _funcLevel-- ;
    }
    return _retValue ;
}

PPTREE cplus::cast_expression_value ( int error_free )
{
    PFILE_POSITION  _filePosition = (PFILE_POSITION)0 ;
    int             _value, _nbPre = 0 ;
    PCOMM_ELEM      _ptPreComm = ((tokenAhead || (LexComment(), tokenAhead =  -1, TRACE_LEX(1))), listComm ? LookComm(&_nbPre) : (_funcLevel++, (PCOMM_ELEM)0));
    int             _Debug = TRACE_RULE("cast_expression_value", TRACE_ENTER, (PPTREE)0);
    PPTREE          lastTree = _lastTree, _retValue ;
    PPTREE          ret = (PPTREE)0 ;
    
    (tokenAhead == 1 || (Lex(), TRACE_LEX(1)));
    if ( !SEE_TOKEN(POUV, "(") || !(CommTerm(), 1) ) {
        MulFreeTree(1, ret);
        TOKEN_EXIT(cast_expression_value_exit, "(");
    } else {
        tokenAhead =  0 ;
    }
    if ( (ret = NQUICK_CALL(_Tak(type_name)(error_free), 144, cplus)) == (PPTREE) -1 ) {
        MulFreeTree(1, ret);
        PROG_EXIT(cast_expression_value_exit, "cast_expression_value");
    }
    (tokenAhead == 1 || (Lex(), TRACE_LEX(1)));
    if ( !SEE_TOKEN(PFER, ")") || !(CommTerm(), 1) ) {
        MulFreeTree(1, ret);
        TOKEN_EXIT(cast_expression_value_exit, ")");
    } else {
        tokenAhead =  0 ;
    }
    {
        PPTREE  _ptTree0 = 0 ;
        {
            PPTREE  _ptTree1 = 0, _ptRes1 = 0 ;
            _ptRes1 =  MakeTree(CAST, 2);
            ReplaceTree(_ptRes1, 1, ret);
            if ( (_ptTree1 = NQUICK_CALL(_Tak(cast_expression)(error_free), 21, cplus)) == (PPTREE) -1 ) {
                MulFreeTree(4, _ptRes1, _ptTree1, _ptTree0, ret);
                PROG_EXIT(cast_expression_value_exit, "cast_expression_value");
            }
            ReplaceTree(_ptRes1, 2, _ptTree1);
            _ptTree0 =  _ptRes1 ;
        }
        _retValue =  _ptTree0 ;
        goto cast_expression_value_ret ;
    }
    (tokenAhead || (LexComment(), tokenAhead =  -1, TRACE_LEX(1)));
    if ( _nbPre || listComm ) 
        AddComm(_ptPreComm, _nbPre, (PPTREE)0, lastTree);
    else {
        _lastTree =  (PPTREE)0 ;
        _funcLevel-- ;
    }
    return (PPTREE)0 ;
cast_expression_value_exit : 
    _Debug = TRACE_RULE("cast_expression_value", TRACE_EXIT, (PPTREE)0);
    _funcLevel-- ;
    return (PPTREE) -1 ;
cast_expression_value_ret : 
    _Debug = TRACE_RULE("cast_expression_value", TRACE_RETURN, _retValue);
    (tokenAhead || (LexComment(), tokenAhead =  -1, TRACE_LEX(1)));
    if ( _nbPre || listComm ) 
        AddComm(_ptPreComm, _nbPre, _retValue, lastTree);
    else {
        _lastTree =  _retValue ;
        _funcLevel-- ;
    }
    return _retValue ;
}

PPTREE cplus::catch_unit ( int error_free )
{
    PFILE_POSITION  _filePosition = (PFILE_POSITION)0 ;
    int             _value, _nbPre = 0 ;
    PCOMM_ELEM      _ptPreComm = ((tokenAhead || (LexComment(), tokenAhead =  -1, TRACE_LEX(1))), listComm ? LookComm(&_nbPre) : (_funcLevel++, (PCOMM_ELEM)0));
    int             _Debug = TRACE_RULE("catch_unit", TRACE_ENTER, (PPTREE)0);
    PPTREE          lastTree = _lastTree, _retValue ;
    
    (tokenAhead == 13 || (specific(), TRACE_LEX(1)));
    switch ( lexEl.Value ) {
        case META : 
        case CATCH_UPPER : 
            {
                PPTREE  _ptTree0 = 0 ;
                {
                    PPTREE  _ptTree1 = 0, _ptRes1 = 0 ;
                    _ptRes1 =  MakeTree(CATCH, 2);
                    if ( (_ptTree1 = NQUICK_CALL(_Tak(macro)(error_free), 92, cplus)) == (PPTREE) -1 ) {
                        MulFreeTree(3, _ptRes1, _ptTree1, _ptTree0);
                        PROG_EXIT(catch_unit_exit, "catch_unit");
                    }
                    ReplaceTree(_ptRes1, 1, _ptTree1);
                    if ( (_ptTree1 = NQUICK_CALL(_Tak(compound_statement)(error_free), 28, cplus)) == (PPTREE) -1 ) {
                        MulFreeTree(3, _ptRes1, _ptTree1, _ptTree0);
                        PROG_EXIT(catch_unit_exit, "catch_unit");
                    }
                    ReplaceTree(_ptRes1, 2, _ptTree1);
                    _ptTree0 =  _ptRes1 ;
                }
                _retValue =  _ptTree0 ;
                goto catch_unit_ret ;
            }
            break ;
        case CATCH_ALL : 
            {
                PPTREE  _ptTree0 = 0 ;
                {
                    PPTREE  _ptTree1 = 0, _ptRes1 = 0 ;
                    _ptRes1 =  MakeTree(CATCH, 2);
                    if ( (_ptTree1 = NQUICK_CALL(_Tak(macro)(error_free), 92, cplus)) == (PPTREE) -1 ) {
                        MulFreeTree(3, _ptRes1, _ptTree1, _ptTree0);
                        PROG_EXIT(catch_unit_exit, "catch_unit");
                    }
                    ReplaceTree(_ptRes1, 1, _ptTree1);
                    if ( (_ptTree1 = NQUICK_CALL(_Tak(compound_statement)(error_free), 28, cplus)) == (PPTREE) -1 ) {
                        MulFreeTree(3, _ptRes1, _ptTree1, _ptTree0);
                        PROG_EXIT(catch_unit_exit, "catch_unit");
                    }
                    ReplaceTree(_ptRes1, 2, _ptTree1);
                    _ptTree0 =  _ptRes1 ;
                }
                _retValue =  _ptTree0 ;
                goto catch_unit_ret ;
            }
            break ;
        case AND_CATCH : 
            {
                PPTREE  _ptTree0 = 0 ;
                {
                    PPTREE  _ptTree1 = 0, _ptRes1 = 0 ;
                    _ptRes1 =  MakeTree(CATCH, 2);
                    if ( (_ptTree1 = NQUICK_CALL(_Tak(macro)(error_free), 92, cplus)) == (PPTREE) -1 ) {
                        MulFreeTree(3, _ptRes1, _ptTree1, _ptTree0);
                        PROG_EXIT(catch_unit_exit, "catch_unit");
                    }
                    ReplaceTree(_ptRes1, 1, _ptTree1);
                    if ( (_ptTree1 = NQUICK_CALL(_Tak(compound_statement)(error_free), 28, cplus)) == (PPTREE) -1 ) {
                        MulFreeTree(3, _ptRes1, _ptTree1, _ptTree0);
                        PROG_EXIT(catch_unit_exit, "catch_unit");
                    }
                    ReplaceTree(_ptRes1, 2, _ptTree1);
                    _ptTree0 =  _ptRes1 ;
                }
                _retValue =  _ptTree0 ;
                goto catch_unit_ret ;
            }
            break ;
        default : 
            CASE_EXIT(catch_unit_exit, "either CATCH_UPPER or CATCH_ALL or AND_CATCH");
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
catch_unit_exit : 
    _Debug = TRACE_RULE("catch_unit", TRACE_EXIT, (PPTREE)0);
    _funcLevel-- ;
    return (PPTREE) -1 ;
catch_unit_ret : 
    _Debug = TRACE_RULE("catch_unit", TRACE_RETURN, _retValue);
    (tokenAhead || (LexComment(), tokenAhead =  -1, TRACE_LEX(1)));
    if ( _nbPre || listComm ) 
        AddComm(_ptPreComm, _nbPre, _retValue, lastTree);
    else {
        _lastTree =  _retValue ;
        _funcLevel-- ;
    }
    return _retValue ;
}

PPTREE cplus::catch_unit_ansi ( int error_free )
{
    PFILE_POSITION  _filePosition = (PFILE_POSITION)0 ;
    int             _value, _nbPre = 0 ;
    PCOMM_ELEM      _ptPreComm = ((tokenAhead || (LexComment(), tokenAhead =  -1, TRACE_LEX(1))), listComm ? LookComm(&_nbPre) : (_funcLevel++, (PCOMM_ELEM)0));
    int             _Debug = TRACE_RULE("catch_unit_ansi", TRACE_ENTER, (PPTREE)0);
    PPTREE          lastTree = _lastTree, _retValue ;
    PPTREE          retTree = (PPTREE)0, valTree = (PPTREE)0 ;
    
    (tokenAhead == 1 || (Lex(), TRACE_LEX(1)));
    if ( !SEE_TOKEN(CATCH, "catch") || !(CommTerm(), 1) ) {
        MulFreeTree(2, retTree, valTree);
        TOKEN_EXIT(catch_unit_ansi_exit, "catch");
    } else {
        tokenAhead =  0 ;
    }
    (tokenAhead == 1 || (Lex(), TRACE_LEX(1)));
    if ( !SEE_TOKEN(POUV, "(") || !(CommTerm(), 1) ) {
        MulFreeTree(2, retTree, valTree);
        TOKEN_EXIT(catch_unit_ansi_exit, "(");
    } else {
        tokenAhead =  0 ;
    }
    if ( (tokenAhead == 1 || (Lex(), TRACE_LEX(1))) && SEE_TOKEN(POINPOINPOIN, "...") && ((tokenAhead = 0), CommTerm(), 1) ) {
        {
            PPTREE  _ptRes0 = 0 ;
            _ptRes0 =  MakeTree(EXCEPT_ANSI_ALL, 0);
            valTree =  _ptRes0 ;
        }
    } else {
        if ( (retTree = NQUICK_CALL(_Tak(type_specifier)(error_free), 145, cplus)) == (PPTREE) -1 ) {
            MulFreeTree(2, retTree, valTree);
            PROG_EXIT(catch_unit_ansi_exit, "catch_unit_ansi");
        }
        if ( NPUSH_CALL_AFF_VERIF(valTree = , _Tak(declarator), 46, cplus) ) {
            {
                PPTREE  _ptRes0 = 0 ;
                _ptRes0 =  MakeTree(DECLARATOR, 2);
                ReplaceTree(_ptRes0, 1, retTree);
                ReplaceTree(_ptRes0, 2, valTree);
                valTree =  _ptRes0 ;
            }
        } else {
            if ( NPUSH_CALL_AFF_VERIF(valTree = , _Tak(abstract_declarator), 2, cplus) ) {
                {
                    PPTREE  _ptRes0 = 0 ;
                    _ptRes0 =  MakeTree(ABST_DECLARATOR, 2);
                    ReplaceTree(_ptRes0, 1, retTree);
                    ReplaceTree(_ptRes0, 2, valTree);
                    valTree =  _ptRes0 ;
                }
            } else {
                valTree =  retTree ;
            }
        }
    }
    (tokenAhead == 1 || (Lex(), TRACE_LEX(1)));
    if ( !SEE_TOKEN(PFER, ")") || !(CommTerm(), 1) ) {
        MulFreeTree(2, retTree, valTree);
        TOKEN_EXIT(catch_unit_ansi_exit, ")");
    } else {
        tokenAhead =  0 ;
    }
    {
        PPTREE  _ptTree0 = 0 ;
        {
            PPTREE  _ptTree1 = 0, _ptRes1 = 0 ;
            _ptRes1 =  MakeTree(CATCH_ANSI, 2);
            ReplaceTree(_ptRes1, 1, valTree);
            if ( (_ptTree1 = NQUICK_CALL(_Tak(compound_statement)(error_free), 28, cplus)) == (PPTREE) -1 ) {
                MulFreeTree(5, _ptRes1, _ptTree1, _ptTree0, retTree, valTree);
                PROG_EXIT(catch_unit_ansi_exit, "catch_unit_ansi");
            }
            ReplaceTree(_ptRes1, 2, _ptTree1);
            _ptTree0 =  _ptRes1 ;
        }
        _retValue =  _ptTree0 ;
        goto catch_unit_ansi_ret ;
    }
    (tokenAhead || (LexComment(), tokenAhead =  -1, TRACE_LEX(1)));
    if ( _nbPre || listComm ) 
        AddComm(_ptPreComm, _nbPre, (PPTREE)0, lastTree);
    else {
        _lastTree =  (PPTREE)0 ;
        _funcLevel-- ;
    }
    return (PPTREE)0 ;
catch_unit_ansi_exit : 
    _Debug = TRACE_RULE("catch_unit_ansi", TRACE_EXIT, (PPTREE)0);
    _funcLevel-- ;
    return (PPTREE) -1 ;
catch_unit_ansi_ret : 
    _Debug = TRACE_RULE("catch_unit_ansi", TRACE_RETURN, _retValue);
    (tokenAhead || (LexComment(), tokenAhead =  -1, TRACE_LEX(1)));
    if ( _nbPre || listComm ) 
        AddComm(_ptPreComm, _nbPre, _retValue, lastTree);
    else {
        _lastTree =  _retValue ;
        _funcLevel-- ;
    }
    return _retValue ;
}

PPTREE cplus::class_declaration ( int error_free )
{
    PFILE_POSITION  _filePosition = (PFILE_POSITION)0 ;
    int             _value, _nbPre = 0 ;
    PCOMM_ELEM      _ptPreComm = ((tokenAhead || (LexComment(), tokenAhead =  -1, TRACE_LEX(1))), listComm ? LookComm(&_nbPre) : (_funcLevel++, (PCOMM_ELEM)0));
    int             _Debug = TRACE_RULE("class_declaration", TRACE_ENTER, (PPTREE)0);
    PPTREE          lastTree = _lastTree, _retValue ;
    PPTREE          _addlist1 = (PPTREE)0 ;
    PPTREE          retTree = (PPTREE)0, inter = (PPTREE)0, list = (PPTREE)0 ;
    
    (tokenAhead == 1 || (Lex(), TRACE_LEX(1)));
    switch ( lexEl.Value ) {
        case STRUCT : 
            tokenAhead = 0 ;
            CommTerm();
            {
                PPTREE  _ptRes0 = 0 ;
                _ptRes0 =  MakeTree(CLASS, 4);
                ReplaceTree(_ptRes0, 1, MakeString("struct"));
                retTree =  _ptRes0 ;
            }
            break ;
        case UNION : 
            tokenAhead = 0 ;
            CommTerm();
            {
                PPTREE  _ptRes0 = 0 ;
                _ptRes0 =  MakeTree(CLASS, 4);
                ReplaceTree(_ptRes0, 1, MakeString("union"));
                retTree =  _ptRes0 ;
            }
            break ;
        case CLASS : 
            tokenAhead = 0 ;
            CommTerm();
            {
                PPTREE  _ptRes0 = 0 ;
                _ptRes0 =  MakeTree(CLASS, 4);
                ReplaceTree(_ptRes0, 1, MakeString("class"));
                retTree =  _ptRes0 ;
            }
            break ;
        default : 
            MulFreeTree(4, _addlist1, inter, list, retTree);
            CASE_EXIT(class_declaration_exit, "either struct or union or class");
            break ;
    }
    {
        PPTREE  _ptTree0 = 0 ;
        if ( (_ptTree0 = NQUICK_CALL(_Tak(range_modifier_ident)(error_free), 123, cplus)) == (PPTREE) -1 ) {
            MulFreeTree(5, _ptTree0, _addlist1, inter, list, retTree);
            PROG_EXIT(class_declaration_exit, "class_declaration");
        }
        ReplaceTree(retTree, 2, _ptTree0);
    }
    if ( (tokenAhead == 1 || (Lex(), TRACE_LEX(1))) && SEE_TOKEN(DPOI, ":") && ((tokenAhead = 0), CommTerm(), 1) ) {
        {
            PPTREE  _ptTree0 = 0 ;
            if ( (_ptTree0 = NQUICK_CALL(_Tak(base_specifier)(error_free), 18, cplus)) == (PPTREE) -1 ) {
                MulFreeTree(5, _ptTree0, _addlist1, inter, list, retTree);
                PROG_EXIT(class_declaration_exit, "class_declaration");
            }
            ReplaceTree(retTree, 3, _ptTree0);
        }
    }
    if ( (tokenAhead == 1 || (Lex(), TRACE_LEX(1))) && SEE_TOKEN(AOUV, "{") && ((tokenAhead = 0), CommTerm(), 1) ) {
        do {
            _addlist1 =  list ;
            while ( NPUSH_CALL_AFF_VERIF(inter = , _Tak(inside_declaration), 83, cplus) ) {
                _addlist1 =  AddList(_addlist1, inter);
                if ( list ) {
                    _addlist1 =  SonTree(_addlist1, 2);
                } else {
                    list =  _addlist1 ;
                }
            }
            (tokenAhead == 1 || (Lex(), TRACE_LEX(1)));
            switch ( lexEl.Value ) {
                case PUBLIC : 
                    {
                        PPTREE  _ptTree0 = 0 ;
                        if ( (_ptTree0 = NQUICK_CALL(_Tak(protect_declare)(error_free), 114, cplus)) == (PPTREE) -1 ) {
                            MulFreeTree(5, _ptTree0, _addlist1, inter, list, retTree);
                            PROG_EXIT(class_declaration_exit, "class_declaration");
                        }
                        list =  AddList(list, _ptTree0);
                    }
                    break ;
                case PRIVATE : 
                    {
                        PPTREE  _ptTree0 = 0 ;
                        if ( (_ptTree0 = NQUICK_CALL(_Tak(protect_declare)(error_free), 114, cplus)) == (PPTREE) -1 ) {
                            MulFreeTree(5, _ptTree0, _addlist1, inter, list, retTree);
                            PROG_EXIT(class_declaration_exit, "class_declaration");
                        }
                        list =  AddList(list, _ptTree0);
                    }
                    break ;
                case PROTECTED : 
                    {
                        PPTREE  _ptTree0 = 0 ;
                        if ( (_ptTree0 = NQUICK_CALL(_Tak(protect_declare)(error_free), 114, cplus)) == (PPTREE) -1 ) {
                            MulFreeTree(5, _ptTree0, _addlist1, inter, list, retTree);
                            PROG_EXIT(class_declaration_exit, "class_declaration");
                        }
                        list =  AddList(list, _ptTree0);
                    }
                    break ;
                case AFER : break ;
                default : 
                    MulFreeTree(4, _addlist1, inter, list, retTree);
                    LEX_EXIT("", 0);
                    goto class_declaration_exit ;
                    break ;
            }
        } while ( !((tokenAhead == 1 || (Lex(), TRACE_LEX(1))) && SEE_TOKEN(AFER, "}") || !(tokenAhead && tokenAhead != -1 || c != EOF)) );
        {
            PPTREE  _ptTree0 = 0 ;
            {
                PPTREE  _ptRes1 = 0 ;
                _ptRes1 =  MakeTree(CLASS_DECL, 1);
                ReplaceTree(_ptRes1, 1, list);
                _ptTree0 =  _ptRes1 ;
            }
            ReplaceTree(retTree, 4, _ptTree0);
        }
        (tokenAhead == 1 || (Lex(), TRACE_LEX(1)));
        if ( !SEE_TOKEN(AFER, "}") || !(CommTerm(), 1) ) {
            MulFreeTree(4, _addlist1, inter, list, retTree);
            TOKEN_EXIT(class_declaration_exit, "}");
        } else {
            tokenAhead =  0 ;
        }
    }
    {
        _retValue =  retTree ;
        goto class_declaration_ret ;
    }
    (tokenAhead || (LexComment(), tokenAhead =  -1, TRACE_LEX(1)));
    if ( _nbPre || listComm ) 
        AddComm(_ptPreComm, _nbPre, (PPTREE)0, lastTree);
    else {
        _lastTree =  (PPTREE)0 ;
        _funcLevel-- ;
    }
    return (PPTREE)0 ;
class_declaration_exit : 
    _Debug = TRACE_RULE("class_declaration", TRACE_EXIT, (PPTREE)0);
    _funcLevel-- ;
    return (PPTREE) -1 ;
class_declaration_ret : 
    _Debug = TRACE_RULE("class_declaration", TRACE_RETURN, _retValue);
    (tokenAhead || (LexComment(), tokenAhead =  -1, TRACE_LEX(1)));
    if ( _nbPre || listComm ) 
        AddComm(_ptPreComm, _nbPre, _retValue, lastTree);
    else {
        _lastTree =  _retValue ;
        _funcLevel-- ;
    }
    return _retValue ;
}

PPTREE cplus::comment_eater ( int error_free )
{
    PFILE_POSITION  _filePosition = (PFILE_POSITION)0 ;
    int             _value, _nbPre = 0 ;
    PCOMM_ELEM      _ptPreComm = ((tokenAhead || (LexComment(), tokenAhead =  -1, TRACE_LEX(1))), listComm ? LookComm(&_nbPre) : (_funcLevel++, (PCOMM_ELEM)0));
    int             _Debug = TRACE_RULE("comment_eater", TRACE_ENTER, (PPTREE)0);
    PPTREE          lastTree = _lastTree, _retValue ;
    PPTREE          retTree = (PPTREE)0 ;
    
    1 ;
    switch ( lexEl.Value ) {
        default : 
            tokenAhead = 0 ;
            CommTerm();
            if ( lexEl.Value != -1 ) {
                MulFreeTree(1, retTree);
                LEX_EXIT("", 0);
                goto comment_eater_exit ;
            } else {
                {
                    _retValue =  retTree ;
                    goto comment_eater_ret ;
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
comment_eater_exit : 
    _Debug = TRACE_RULE("comment_eater", TRACE_EXIT, (PPTREE)0);
    _funcLevel-- ;
    return (PPTREE) -1 ;
comment_eater_ret : 
    _Debug = TRACE_RULE("comment_eater", TRACE_RETURN, _retValue);
    (tokenAhead || (LexComment(), tokenAhead =  -1, TRACE_LEX(1)));
    if ( _nbPre || listComm ) 
        AddComm(_ptPreComm, _nbPre, _retValue, lastTree);
    else {
        _lastTree =  _retValue ;
        _funcLevel-- ;
    }
    return _retValue ;
}

PPTREE cplus::complete_class_name ( int error_free )
{
    PFILE_POSITION  _filePosition = (PFILE_POSITION)0 ;
    int             _value, _nbPre = 0 ;
    PCOMM_ELEM      _ptPreComm = ((tokenAhead || (LexComment(), tokenAhead =  -1, TRACE_LEX(1))), listComm ? LookComm(&_nbPre) : (_funcLevel++, (PCOMM_ELEM)0));
    int             _Debug = TRACE_RULE("complete_class_name", TRACE_ENTER, (PPTREE)0);
    PPTREE          lastTree = _lastTree, _retValue ;
    PPTREE          ret = (PPTREE)0 ;
    
    (tokenAhead == 1 || (Lex(), TRACE_LEX(1)));
    switch ( lexEl.Value ) {
        case META : 
        case IDENT : 
            if ( (ret = NQUICK_CALL(_Tak(qualified_name)(error_free), 116, cplus)) == (PPTREE) -1 ) {
                MulFreeTree(1, ret);
                PROG_EXIT(complete_class_name_exit, "complete_class_name");
            }
            break ;
        case DPOIDPOI : 
            tokenAhead = 0 ;
            CommTerm();
            {
                PPTREE  _ptTree0 = 0, _ptRes0 = 0 ;
                _ptRes0 =  MakeTree(QUALIFIED, 2);
                if ( (_ptTree0 = NQUICK_CALL(_Tak(qualified_name)(error_free), 116, cplus)) == (PPTREE) -1 ) {
                    MulFreeTree(3, _ptRes0, _ptTree0, ret);
                    PROG_EXIT(complete_class_name_exit, "complete_class_name");
                }
                ReplaceTree(_ptRes0, 2, _ptTree0);
                ret =  _ptRes0 ;
            }
            break ;
        default : 
            MulFreeTree(1, ret);
            CASE_EXIT(complete_class_name_exit, "either IDENT or ::");
            break ;
    }
    {
        _retValue =  ret ;
        goto complete_class_name_ret ;
    }
    (tokenAhead || (LexComment(), tokenAhead =  -1, TRACE_LEX(1)));
    if ( _nbPre || listComm ) 
        AddComm(_ptPreComm, _nbPre, (PPTREE)0, lastTree);
    else {
        _lastTree =  (PPTREE)0 ;
        _funcLevel-- ;
    }
    return (PPTREE)0 ;
complete_class_name_exit : 
    _Debug = TRACE_RULE("complete_class_name", TRACE_EXIT, (PPTREE)0);
    _funcLevel-- ;
    return (PPTREE) -1 ;
complete_class_name_ret : 
    _Debug = TRACE_RULE("complete_class_name", TRACE_RETURN, _retValue);
    (tokenAhead || (LexComment(), tokenAhead =  -1, TRACE_LEX(1)));
    if ( _nbPre || listComm ) 
        AddComm(_ptPreComm, _nbPre, _retValue, lastTree);
    else {
        _lastTree =  _retValue ;
        _funcLevel-- ;
    }
    return _retValue ;
}

PPTREE cplus::compound_statement ( int error_free )
{
    PFILE_POSITION  _filePosition = (PFILE_POSITION)0 ;
    int             _value, _nbPre = 0 ;
    PCOMM_ELEM      _ptPreComm = ((tokenAhead || (LexComment(), tokenAhead =  -1, TRACE_LEX(1))), listComm ? LookComm(&_nbPre) : (_funcLevel++, (PCOMM_ELEM)0));
    int             _Debug = TRACE_RULE("compound_statement", TRACE_ENTER, (PPTREE)0);
    PPTREE          lastTree = _lastTree, _retValue ;
    PPTREE          _addlist1 = (PPTREE)0 ;
    PPTREE          statList = (PPTREE)0, stat = (PPTREE)0 ;
    
    (tokenAhead == 1 || (Lex(), TRACE_LEX(1)));
    if ( !SEE_TOKEN(AOUV, "{") || !(CommTerm(), 1) ) {
        MulFreeTree(3, _addlist1, stat, statList);
        TOKEN_EXIT(compound_statement_exit, "{");
    } else {
        tokenAhead =  0 ;
    }
debut : 
    _addlist1 = statList ;
    while ( NPUSH_CALL_AFF_VERIF(stat = , _Tak(statement), 136, cplus)
                || NPUSH_CALL_AFF_VERIF(stat = , _Tak(data_declaration), 40, cplus)
                || NPUSH_CALL_AFF_VERIF(stat = , _Tak(stat_dir), 132, cplus)
                || NPUSH_CALL_AFF_VERIF(stat = , _Tak(exception), 58, cplus)
                || NPUSH_CALL_AFF_VERIF(stat = , _Tak(ext_data_declaration), 71, cplus) ) {
        _addlist1 =  AddList(_addlist1, stat);
        if ( statList ) {
            _addlist1 =  SonTree(_addlist1, 2);
        } else {
            statList =  _addlist1 ;
        }
    }
    {
        PPTREE  _ptTree0 = 0 ;
        if ( (_ptTree0 = NQUICK_CALL(_Tak(none_statement)(error_free), 103, cplus)) == (PPTREE) -1 ) {
            MulFreeTree(4, _ptTree0, _addlist1, stat, statList);
            PROG_EXIT(compound_statement_exit, "compound_statement");
        }
        statList =  AddList(statList, _ptTree0);
    }
    if ( !((tokenAhead == 1 || (Lex(), TRACE_LEX(1))) && SEE_TOKEN(AFER, "}") && ((tokenAhead = 0), CommTerm(), 1)) ) {
        dumperror();
        (tokenAhead == 5 || (LexEndLine(), TRACE_LEX(1)));
        if ( !TERM_OR_META(END_LINE, "END_LINE") || !(CommTerm(), 1) ) {
            MulFreeTree(3, _addlist1, stat, statList);
            TOKEN_EXIT(compound_statement_exit, "END_LINE");
        } else {
            tokenAhead =  0 ;
        }
        hasGotError =  1 ;
        goto debut ;
    }
    {
        PPTREE  _ptTree0 = 0 ;
        {
            PPTREE  _ptRes1 = 0 ;
            _ptRes1 =  MakeTree(COMPOUND, 1);
            ReplaceTree(_ptRes1, 1, statList);
            _ptTree0 =  _ptRes1 ;
        }
        _retValue =  _ptTree0 ;
        goto compound_statement_ret ;
    }
    (tokenAhead || (LexComment(), tokenAhead =  -1, TRACE_LEX(1)));
    if ( _nbPre || listComm ) 
        AddComm(_ptPreComm, _nbPre, (PPTREE)0, lastTree);
    else {
        _lastTree =  (PPTREE)0 ;
        _funcLevel-- ;
    }
    return (PPTREE)0 ;
compound_statement_exit : 
    _Debug = TRACE_RULE("compound_statement", TRACE_EXIT, (PPTREE)0);
    _funcLevel-- ;
    return (PPTREE) -1 ;
compound_statement_ret : 
    _Debug = TRACE_RULE("compound_statement", TRACE_RETURN, _retValue);
    (tokenAhead || (LexComment(), tokenAhead =  -1, TRACE_LEX(1)));
    if ( _nbPre || listComm ) 
        AddComm(_ptPreComm, _nbPre, _retValue, lastTree);
    else {
        _lastTree =  _retValue ;
        _funcLevel-- ;
    }
    return _retValue ;
}

PPTREE cplus::conditional_expression ( int error_free )
{
    PFILE_POSITION  _filePosition = (PFILE_POSITION)0 ;
    int             _value, _nbPre = 0 ;
    PCOMM_ELEM      _ptPreComm = ((tokenAhead || (LexComment(), tokenAhead =  -1, TRACE_LEX(1))), listComm ? LookComm(&_nbPre) : (_funcLevel++, (PCOMM_ELEM)0));
    int             _Debug = TRACE_RULE("conditional_expression", TRACE_ENTER, (PPTREE)0);
    PPTREE          lastTree = _lastTree, _retValue ;
    PPTREE          expTree = (PPTREE)0, condTree = (PPTREE)0 ;
    
    if ( (expTree = NQUICK_CALL(_Tak(logical_or_expression)(error_free), 90, cplus)) == (PPTREE) -1 ) {
        MulFreeTree(2, condTree, expTree);
        PROG_EXIT(conditional_expression_exit, "conditional_expression");
    }
    if ( (tokenAhead == 1 || (Lex(), TRACE_LEX(1))) && SEE_TOKEN(INTE, "?") && ((tokenAhead = 0), CommTerm(), 1) ) {
        {
            PPTREE  _ptRes0 = 0 ;
            _ptRes0 =  MakeTree(COND_AFF, 3);
            ReplaceTree(_ptRes0, 1, expTree);
            condTree =  _ptRes0 ;
        }
        {
            PPTREE  _ptTree0 = 0 ;
            if ( (_ptTree0 = NQUICK_CALL(_Tak(expression)(error_free), 62, cplus)) == (PPTREE) -1 ) {
                MulFreeTree(3, _ptTree0, condTree, expTree);
                PROG_EXIT(conditional_expression_exit, "conditional_expression");
            }
            ReplaceTree(condTree, 2, _ptTree0);
        }
        (tokenAhead == 1 || (Lex(), TRACE_LEX(1)));
        if ( !SEE_TOKEN(DPOI, ":") || !(CommTerm(), 1) ) {
            MulFreeTree(2, condTree, expTree);
            TOKEN_EXIT(conditional_expression_exit, ":");
        } else {
            tokenAhead =  0 ;
        }
        {
            PPTREE  _ptTree0 = 0 ;
            {
                PPTREE  _ptTree1 = 0 ;
                if ( (_ptTree1 = NQUICK_CALL(_Tak(conditional_expression)(error_free), 29, cplus)) == (PPTREE) -1 ) {
                    MulFreeTree(4, _ptTree1, _ptTree0, condTree, expTree);
                    PROG_EXIT(conditional_expression_exit, "conditional_expression");
                }
                _ptTree0 =  ReplaceTree(condTree, 3, _ptTree1);
            }
            _retValue =  _ptTree0 ;
            goto conditional_expression_ret ;
        }
    } else {
        {
            _retValue =  expTree ;
            goto conditional_expression_ret ;
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
conditional_expression_exit : 
    _Debug = TRACE_RULE("conditional_expression", TRACE_EXIT, (PPTREE)0);
    _funcLevel-- ;
    return (PPTREE) -1 ;
conditional_expression_ret : 
    _Debug = TRACE_RULE("conditional_expression", TRACE_RETURN, _retValue);
    (tokenAhead || (LexComment(), tokenAhead =  -1, TRACE_LEX(1)));
    if ( _nbPre || listComm ) 
        AddComm(_ptPreComm, _nbPre, _retValue, lastTree);
    else {
        _lastTree =  _retValue ;
        _funcLevel-- ;
    }
    return _retValue ;
}

PPTREE cplus::const_or_volatile ( int error_free )
{
    PFILE_POSITION  _filePosition = (PFILE_POSITION)0 ;
    int             _value, _nbPre = 0 ;
    PCOMM_ELEM      _ptPreComm = ((tokenAhead || (LexComment(), tokenAhead =  -1, TRACE_LEX(1))), listComm ? LookComm(&_nbPre) : (_funcLevel++, (PCOMM_ELEM)0));
    int             _Debug = TRACE_RULE("const_or_volatile", TRACE_ENTER, (PPTREE)0);
    PPTREE          lastTree = _lastTree, _retValue ;
    
    (tokenAhead == 1 || (Lex(), TRACE_LEX(1)));
    switch ( lexEl.Value ) {
        case CONST : 
            {
                PPTREE  _ptTree0 = 0 ;
                {
                    PPTREE  _ptTree1 = 0, _ptRes1 = 0 ;
                    _ptRes1 =  MakeTree(RANGE_MODIFIER, 2);
                    (tokenAhead == 1 || (Lex(), TRACE_LEX(1)));
                    if ( !SEE_TOKEN(CONST, "const") || !(_ptTree1 = CommString(lexEl.string())) ) {
                        MulFreeTree(3, _ptRes1, _ptTree1, _ptTree0);
                        TOKEN_EXIT(const_or_volatile_exit, "const");
                    } else {
                        tokenAhead =  0 ;
                    }
                    ReplaceTree(_ptRes1, 1, _ptTree1);
                    _ptTree0 =  _ptRes1 ;
                }
                _retValue =  _ptTree0 ;
                goto const_or_volatile_ret ;
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
                        MulFreeTree(3, _ptRes1, _ptTree1, _ptTree0);
                        TOKEN_EXIT(const_or_volatile_exit, "volatile");
                    } else {
                        tokenAhead =  0 ;
                    }
                    ReplaceTree(_ptRes1, 1, _ptTree1);
                    _ptTree0 =  _ptRes1 ;
                }
                _retValue =  _ptTree0 ;
                goto const_or_volatile_ret ;
            }
            break ;
        default : 
            CASE_EXIT(const_or_volatile_exit, "either const or volatile");
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
const_or_volatile_exit : 
    _Debug = TRACE_RULE("const_or_volatile", TRACE_EXIT, (PPTREE)0);
    _funcLevel-- ;
    return (PPTREE) -1 ;
const_or_volatile_ret : 
    _Debug = TRACE_RULE("const_or_volatile", TRACE_RETURN, _retValue);
    (tokenAhead || (LexComment(), tokenAhead =  -1, TRACE_LEX(1)));
    if ( _nbPre || listComm ) 
        AddComm(_ptPreComm, _nbPre, _retValue, lastTree);
    else {
        _lastTree =  _retValue ;
        _funcLevel-- ;
    }
    return _retValue ;
}

PPTREE cplus::constan ( int error_free )
{
    PFILE_POSITION  _filePosition = (PFILE_POSITION)0 ;
    int             _value, _nbPre = 0 ;
    PCOMM_ELEM      _ptPreComm = ((tokenAhead || (LexComment(), tokenAhead =  -1, TRACE_LEX(1))), listComm ? LookComm(&_nbPre) : (_funcLevel++, (PCOMM_ELEM)0));
    int             _Debug = TRACE_RULE("constan", TRACE_ENTER, (PPTREE)0);
    PPTREE          lastTree = _lastTree, _retValue ;
    
    (tokenAhead == 1 || (Lex(), TRACE_LEX(1)));
  switch ( lexEl.Value ) {
    case META : 
    case INTEGER : 
        {
            PPTREE  _ptTree0 = 0 ;
            {
                PPTREE  _ptTree1 = 0, _ptRes1 = 0 ;
                _ptRes1 =  MakeTree(INTEGER, 1);
                (tokenAhead == 1 || (Lex(), TRACE_LEX(1)));
                if ( !TERM_OR_META(INTEGER, "INTEGER") || !BUILD_TERM_META(_ptTree1) ) {
                    MulFreeTree(3, _ptRes1, _ptTree1, _ptTree0);
                    TOKEN_EXIT(constan_exit, "INTEGER");
                } else {
                    tokenAhead =  0 ;
                }
                ReplaceTree(_ptRes1, 1, _ptTree1);
                _ptTree0 =  _ptRes1 ;
            }
            _retValue =  _ptTree0 ;
            goto constan_ret ;
        }
        break ;
    case LINTEGER : 
        {
            PPTREE  _ptTree0 = 0 ;
            {
                PPTREE  _ptTree1 = 0, _ptRes1 = 0 ;
                _ptRes1 =  MakeTree(ILONG, 1);
                {
                    PPTREE  _ptTree2 = 0, _ptRes2 = 0 ;
                    _ptRes2 =  MakeTree(INTEGER, 1);
                    (tokenAhead == 1 || (Lex(), TRACE_LEX(1)));
                    if ( !TERM_OR_META(LINTEGER, "LINTEGER") || !BUILD_TERM_META(_ptTree2) ) {
                        MulFreeTree(5, _ptRes2, _ptTree2, _ptRes1, _ptTree1, _ptTree0);
                        TOKEN_EXIT(constan_exit, "LINTEGER");
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
            goto constan_ret ;
        }
        break ;
    case LLINTEGER : 
        {
            PPTREE  _ptTree0 = 0 ;
            {
                PPTREE  _ptTree1 = 0, _ptRes1 = 0 ;
                _ptRes1 =  MakeTree(ILONGLONG, 1);
                {
                    PPTREE  _ptTree2 = 0, _ptRes2 = 0 ;
                    _ptRes2 =  MakeTree(INTEGER, 1);
                    (tokenAhead == 1 || (Lex(), TRACE_LEX(1)));
                    if ( !TERM_OR_META(LINTEGER, "LINTEGER") || !BUILD_TERM_META(_ptTree2) ) {
                        MulFreeTree(5, _ptRes2, _ptTree2, _ptRes1, _ptTree1, _ptTree0);
                        TOKEN_EXIT(constan_exit, "LINTEGER");
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
            goto constan_ret ;
        }
        break ;
    case UINTEGER : 
        {
            PPTREE  _ptTree0 = 0 ;
            {
                PPTREE  _ptTree1 = 0, _ptRes1 = 0 ;
                _ptRes1 =  MakeTree(IUN, 1);
                {
                    PPTREE  _ptTree2 = 0, _ptRes2 = 0 ;
                    _ptRes2 =  MakeTree(INTEGER, 1);
                    (tokenAhead == 1 || (Lex(), TRACE_LEX(1)));
                    if ( !TERM_OR_META(UINTEGER, "UINTEGER") || !BUILD_TERM_META(_ptTree2) ) {
                        MulFreeTree(5, _ptRes2, _ptTree2, _ptRes1, _ptTree1, _ptTree0);
                        TOKEN_EXIT(constan_exit, "UINTEGER");
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
            goto constan_ret ;
        }
        break ;
    case ULINTEGER : 
        {
            PPTREE  _ptTree0 = 0 ;
            {
                PPTREE  _ptTree1 = 0, _ptRes1 = 0 ;
                _ptRes1 =  MakeTree(IUNLONG, 1);
                {
                    PPTREE  _ptTree2 = 0, _ptRes2 = 0 ;
                    _ptRes2 =  MakeTree(INTEGER, 1);
                    (tokenAhead == 1 || (Lex(), TRACE_LEX(1)));
                    if ( !TERM_OR_META(ULINTEGER, "ULINTEGER") || !BUILD_TERM_META(_ptTree2) ) {
                        MulFreeTree(5, _ptRes2, _ptTree2, _ptRes1, _ptTree1, _ptTree0);
                        TOKEN_EXIT(constan_exit, "ULINTEGER");
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
            goto constan_ret ;
        }
        break ;
    case ULLINTEGER : 
        {
            PPTREE  _ptTree0 = 0 ;
            {
                PPTREE  _ptTree1 = 0, _ptRes1 = 0 ;
                _ptRes1 =  MakeTree(IUNLONGLONG, 1);
                {
                    PPTREE  _ptTree2 = 0, _ptRes2 = 0 ;
                    _ptRes2 =  MakeTree(INTEGER, 1);
                    (tokenAhead == 1 || (Lex(), TRACE_LEX(1)));
                    if ( !TERM_OR_META(ULINTEGER, "ULINTEGER") || !BUILD_TERM_META(_ptTree2) ) {
                        MulFreeTree(5, _ptRes2, _ptTree2, _ptRes1, _ptTree1, _ptTree0);
                        TOKEN_EXIT(constan_exit, "ULINTEGER");
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
            goto constan_ret ;
        }
        break ;
    case HEXA : 
        {
            PPTREE  _ptTree0 = 0 ;
            {
                PPTREE  _ptTree1 = 0, _ptRes1 = 0 ;
                _ptRes1 =  MakeTree(HEXA, 1);
                {
                    PPTREE  _ptTree2 = 0, _ptRes2 = 0 ;
                    _ptRes2 =  MakeTree(INTEGER, 1);
                    (tokenAhead == 1 || (Lex(), TRACE_LEX(1)));
                    if ( !TERM_OR_META(HEXA, "HEXA") || !BUILD_TERM_META(_ptTree2) ) {
                        MulFreeTree(5, _ptRes2, _ptTree2, _ptRes1, _ptTree1, _ptTree0);
                        TOKEN_EXIT(constan_exit, "HEXA");
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
            goto constan_ret ;
        }
        break ;
    case LHEXA : 
        {
            PPTREE  _ptTree0 = 0 ;
            {
                PPTREE  _ptTree1 = 0, _ptRes1 = 0 ;
                _ptRes1 =  MakeTree(LONG, 1);
                {
                    PPTREE  _ptTree2 = 0, _ptRes2 = 0 ;
                    _ptRes2 =  MakeTree(HEXA, 1);
                    {
                        PPTREE  _ptTree3 = 0, _ptRes3 = 0 ;
                        _ptRes3 =  MakeTree(INTEGER, 1);
                        (tokenAhead == 1 || (Lex(), TRACE_LEX(1)));
                        if ( !TERM_OR_META(LHEXA, "LHEXA") || !BUILD_TERM_META(_ptTree3) ) {
                            MulFreeTree(7, _ptRes3, _ptTree3, _ptRes2, _ptTree2, _ptRes1, _ptTree1, _ptTree0);
                            TOKEN_EXIT(constan_exit, "LHEXA");
                        } else {
                            tokenAhead =  0 ;
                        }
                        ReplaceTree(_ptRes3, 1, _ptTree3);
                        _ptTree2 =  _ptRes3 ;
                    }
                    ReplaceTree(_ptRes2, 1, _ptTree2);
                    _ptTree1 =  _ptRes2 ;
                }
                ReplaceTree(_ptRes1, 1, _ptTree1);
                _ptTree0 =  _ptRes1 ;
            }
            _retValue =  _ptTree0 ;
            goto constan_ret ;
        }
        break ;
    case LLHEXA : 
        {
            PPTREE  _ptTree0 = 0 ;
            {
                PPTREE  _ptTree1 = 0, _ptRes1 = 0 ;
                _ptRes1 =  MakeTree(LONGLONG, 1);
                {
                    PPTREE  _ptTree2 = 0, _ptRes2 = 0 ;
                    _ptRes2 =  MakeTree(HEXA, 1);
                    {
                        PPTREE  _ptTree3 = 0, _ptRes3 = 0 ;
                        _ptRes3 =  MakeTree(INTEGER, 1);
                        (tokenAhead == 1 || (Lex(), TRACE_LEX(1)));
                        if ( !TERM_OR_META(LHEXA, "LHEXA") || !BUILD_TERM_META(_ptTree3) ) {
                            MulFreeTree(7, _ptRes3, _ptTree3, _ptRes2, _ptTree2, _ptRes1, _ptTree1, _ptTree0);
                            TOKEN_EXIT(constan_exit, "LHEXA");
                        } else {
                            tokenAhead =  0 ;
                        }
                        ReplaceTree(_ptRes3, 1, _ptTree3);
                        _ptTree2 =  _ptRes3 ;
                    }
                    ReplaceTree(_ptRes2, 1, _ptTree2);
                    _ptTree1 =  _ptRes2 ;
                }
                ReplaceTree(_ptRes1, 1, _ptTree1);
                _ptTree0 =  _ptRes1 ;
            }
            _retValue =  _ptTree0 ;
            goto constan_ret ;
        }
        break ;
    case UHEXA : 
        {
            PPTREE  _ptTree0 = 0 ;
            {
                PPTREE  _ptTree1 = 0, _ptRes1 = 0 ;
                _ptRes1 =  MakeTree(IUN, 1);
                {
                    PPTREE  _ptTree2 = 0, _ptRes2 = 0 ;
                    _ptRes2 =  MakeTree(HEXA, 1);
                    {
                        PPTREE  _ptTree3 = 0, _ptRes3 = 0 ;
                        _ptRes3 =  MakeTree(INTEGER, 1);
                        (tokenAhead == 1 || (Lex(), TRACE_LEX(1)));
                        if ( !TERM_OR_META(UHEXA, "UHEXA") || !BUILD_TERM_META(_ptTree3) ) {
                            MulFreeTree(7, _ptRes3, _ptTree3, _ptRes2, _ptTree2, _ptRes1, _ptTree1, _ptTree0);
                            TOKEN_EXIT(constan_exit, "UHEXA");
                        } else {
                            tokenAhead =  0 ;
                        }
                        ReplaceTree(_ptRes3, 1, _ptTree3);
                        _ptTree2 =  _ptRes3 ;
                    }
                    ReplaceTree(_ptRes2, 1, _ptTree2);
                    _ptTree1 =  _ptRes2 ;
                }
                ReplaceTree(_ptRes1, 1, _ptTree1);
                _ptTree0 =  _ptRes1 ;
            }
            _retValue =  _ptTree0 ;
            goto constan_ret ;
        }
        break ;
    case ULHEXA : 
        {
            PPTREE  _ptTree0 = 0 ;
            {
                PPTREE  _ptTree1 = 0, _ptRes1 = 0 ;
                _ptRes1 =  MakeTree(IUNLONG, 1);
                {
                    PPTREE  _ptTree2 = 0, _ptRes2 = 0 ;
                    _ptRes2 =  MakeTree(HEXA, 1);
                    {
                        PPTREE  _ptTree3 = 0, _ptRes3 = 0 ;
                        _ptRes3 =  MakeTree(INTEGER, 1);
                        (tokenAhead == 1 || (Lex(), TRACE_LEX(1)));
                        if ( !TERM_OR_META(ULHEXA, "ULHEXA") || !BUILD_TERM_META(_ptTree3) ) {
                            MulFreeTree(7, _ptRes3, _ptTree3, _ptRes2, _ptTree2, _ptRes1, _ptTree1, _ptTree0);
                            TOKEN_EXIT(constan_exit, "ULHEXA");
                        } else {
                            tokenAhead =  0 ;
                        }
                        ReplaceTree(_ptRes3, 1, _ptTree3);
                        _ptTree2 =  _ptRes3 ;
                    }
                    ReplaceTree(_ptRes2, 1, _ptTree2);
                    _ptTree1 =  _ptRes2 ;
                }
                ReplaceTree(_ptRes1, 1, _ptTree1);
                _ptTree0 =  _ptRes1 ;
            }
            _retValue =  _ptTree0 ;
            goto constan_ret ;
        }
        break ;
    case ULLHEXA : 
        {
            PPTREE  _ptTree0 = 0 ;
            {
                PPTREE  _ptTree1 = 0, _ptRes1 = 0 ;
                _ptRes1 =  MakeTree(IUNLONGLONG, 1);
                {
                    PPTREE  _ptTree2 = 0, _ptRes2 = 0 ;
                    _ptRes2 =  MakeTree(HEXA, 1);
                    {
                        PPTREE  _ptTree3 = 0, _ptRes3 = 0 ;
                        _ptRes3 =  MakeTree(INTEGER, 1);
                        (tokenAhead == 1 || (Lex(), TRACE_LEX(1)));
                        if ( !TERM_OR_META(ULHEXA, "ULHEXA") || !BUILD_TERM_META(_ptTree3) ) {
                            MulFreeTree(7, _ptRes3, _ptTree3, _ptRes2, _ptTree2, _ptRes1, _ptTree1, _ptTree0);
                            TOKEN_EXIT(constan_exit, "ULHEXA");
                        } else {
                            tokenAhead =  0 ;
                        }
                        ReplaceTree(_ptRes3, 1, _ptTree3);
                        _ptTree2 =  _ptRes3 ;
                    }
                    ReplaceTree(_ptRes2, 1, _ptTree2);
                    _ptTree1 =  _ptRes2 ;
                }
                ReplaceTree(_ptRes1, 1, _ptTree1);
                _ptTree0 =  _ptRes1 ;
            }
            _retValue =  _ptTree0 ;
            goto constan_ret ;
        }
        break ;
    case OCTAL : 
        {
            PPTREE  _ptTree0 = 0 ;
            {
                PPTREE  _ptTree1 = 0, _ptRes1 = 0 ;
                _ptRes1 =  MakeTree(OCTAL, 1);
                {
                    PPTREE  _ptTree2 = 0, _ptRes2 = 0 ;
                    _ptRes2 =  MakeTree(INTEGER, 1);
                    (tokenAhead == 1 || (Lex(), TRACE_LEX(1)));
                    if ( !TERM_OR_META(OCTAL, "OCTAL") || !BUILD_TERM_META(_ptTree2) ) {
                        MulFreeTree(5, _ptRes2, _ptTree2, _ptRes1, _ptTree1, _ptTree0);
                        TOKEN_EXIT(constan_exit, "OCTAL");
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
            goto constan_ret ;
        }
        break ;
    case LOCTAL : 
        {
            PPTREE  _ptTree0 = 0 ;
            {
                PPTREE  _ptTree1 = 0, _ptRes1 = 0 ;
                _ptRes1 =  MakeTree(ILONG, 1);
                {
                    PPTREE  _ptTree2 = 0, _ptRes2 = 0 ;
                    _ptRes2 =  MakeTree(OCTAL, 1);
                    {
                        PPTREE  _ptTree3 = 0, _ptRes3 = 0 ;
                        _ptRes3 =  MakeTree(INTEGER, 1);
                        (tokenAhead == 1 || (Lex(), TRACE_LEX(1)));
                        if ( !TERM_OR_META(LOCTAL, "LOCTAL") || !BUILD_TERM_META(_ptTree3) ) {
                            MulFreeTree(7, _ptRes3, _ptTree3, _ptRes2, _ptTree2, _ptRes1, _ptTree1, _ptTree0);
                            TOKEN_EXIT(constan_exit, "LOCTAL");
                        } else {
                            tokenAhead =  0 ;
                        }
                        ReplaceTree(_ptRes3, 1, _ptTree3);
                        _ptTree2 =  _ptRes3 ;
                    }
                    ReplaceTree(_ptRes2, 1, _ptTree2);
                    _ptTree1 =  _ptRes2 ;
                }
                ReplaceTree(_ptRes1, 1, _ptTree1);
                _ptTree0 =  _ptRes1 ;
            }
            _retValue =  _ptTree0 ;
            goto constan_ret ;
        }
        break ;
    case LLOCTAL : 
        {
            PPTREE  _ptTree0 = 0 ;
            {
                PPTREE  _ptTree1 = 0, _ptRes1 = 0 ;
                _ptRes1 =  MakeTree(ILONGLONG, 1);
                {
                    PPTREE  _ptTree2 = 0, _ptRes2 = 0 ;
                    _ptRes2 =  MakeTree(OCTAL, 1);
                    {
                        PPTREE  _ptTree3 = 0, _ptRes3 = 0 ;
                        _ptRes3 =  MakeTree(INTEGER, 1);
                        (tokenAhead == 1 || (Lex(), TRACE_LEX(1)));
                        if ( !TERM_OR_META(LOCTAL, "LOCTAL") || !BUILD_TERM_META(_ptTree3) ) {
                            MulFreeTree(7, _ptRes3, _ptTree3, _ptRes2, _ptTree2, _ptRes1, _ptTree1, _ptTree0);
                            TOKEN_EXIT(constan_exit, "LOCTAL");
                        } else {
                            tokenAhead =  0 ;
                        }
                        ReplaceTree(_ptRes3, 1, _ptTree3);
                        _ptTree2 =  _ptRes3 ;
                    }
                    ReplaceTree(_ptRes2, 1, _ptTree2);
                    _ptTree1 =  _ptRes2 ;
                }
                ReplaceTree(_ptRes1, 1, _ptTree1);
                _ptTree0 =  _ptRes1 ;
            }
            _retValue =  _ptTree0 ;
            goto constan_ret ;
        }
        break ;
    case UOCTAL : 
        {
            PPTREE  _ptTree0 = 0 ;
            {
                PPTREE  _ptTree1 = 0, _ptRes1 = 0 ;
                _ptRes1 =  MakeTree(IUN, 1);
                {
                    PPTREE  _ptTree2 = 0, _ptRes2 = 0 ;
                    _ptRes2 =  MakeTree(OCTAL, 1);
                    {
                        PPTREE  _ptTree3 = 0, _ptRes3 = 0 ;
                        _ptRes3 =  MakeTree(INTEGER, 1);
                        (tokenAhead == 1 || (Lex(), TRACE_LEX(1)));
                        if ( !TERM_OR_META(UOCTAL, "UOCTAL") || !BUILD_TERM_META(_ptTree3) ) {
                            MulFreeTree(7, _ptRes3, _ptTree3, _ptRes2, _ptTree2, _ptRes1, _ptTree1, _ptTree0);
                            TOKEN_EXIT(constan_exit, "UOCTAL");
                        } else {
                            tokenAhead =  0 ;
                        }
                        ReplaceTree(_ptRes3, 1, _ptTree3);
                        _ptTree2 =  _ptRes3 ;
                    }
                    ReplaceTree(_ptRes2, 1, _ptTree2);
                    _ptTree1 =  _ptRes2 ;
                }
                ReplaceTree(_ptRes1, 1, _ptTree1);
                _ptTree0 =  _ptRes1 ;
            }
            _retValue =  _ptTree0 ;
            goto constan_ret ;
        }
        break ;
    case ULOCTAL : 
        {
            PPTREE  _ptTree0 = 0 ;
            {
                PPTREE  _ptTree1 = 0, _ptRes1 = 0 ;
                _ptRes1 =  MakeTree(IUNLONG, 1);
                {
                    PPTREE  _ptTree2 = 0, _ptRes2 = 0 ;
                    _ptRes2 =  MakeTree(OCTAL, 1);
                    {
                        PPTREE  _ptTree3 = 0, _ptRes3 = 0 ;
                        _ptRes3 =  MakeTree(INTEGER, 1);
                        (tokenAhead == 1 || (Lex(), TRACE_LEX(1)));
                        if ( !TERM_OR_META(ULOCTAL, "ULOCTAL") || !BUILD_TERM_META(_ptTree3) ) {
                            MulFreeTree(7, _ptRes3, _ptTree3, _ptRes2, _ptTree2, _ptRes1, _ptTree1, _ptTree0);
                            TOKEN_EXIT(constan_exit, "ULOCTAL");
                        } else {
                            tokenAhead =  0 ;
                        }
                        ReplaceTree(_ptRes3, 1, _ptTree3);
                        _ptTree2 =  _ptRes3 ;
                    }
                    ReplaceTree(_ptRes2, 1, _ptTree2);
                    _ptTree1 =  _ptRes2 ;
                }
                ReplaceTree(_ptRes1, 1, _ptTree1);
                _ptTree0 =  _ptRes1 ;
            }
            _retValue =  _ptTree0 ;
            goto constan_ret ;
        }
        break ;
    case ULLOCTAL : 
        {
            PPTREE  _ptTree0 = 0 ;
            {
                PPTREE  _ptTree1 = 0, _ptRes1 = 0 ;
                _ptRes1 =  MakeTree(IUNLONGLONG, 1);
                {
                    PPTREE  _ptTree2 = 0, _ptRes2 = 0 ;
                    _ptRes2 =  MakeTree(OCTAL, 1);
                    {
                        PPTREE  _ptTree3 = 0, _ptRes3 = 0 ;
                        _ptRes3 =  MakeTree(INTEGER, 1);
                        (tokenAhead == 1 || (Lex(), TRACE_LEX(1)));
                        if ( !TERM_OR_META(ULOCTAL, "ULOCTAL") || !BUILD_TERM_META(_ptTree3) ) {
                            MulFreeTree(7, _ptRes3, _ptTree3, _ptRes2, _ptTree2, _ptRes1, _ptTree1, _ptTree0);
                            TOKEN_EXIT(constan_exit, "ULOCTAL");
                        } else {
                            tokenAhead =  0 ;
                        }
                        ReplaceTree(_ptRes3, 1, _ptTree3);
                        _ptTree2 =  _ptRes3 ;
                    }
                    ReplaceTree(_ptRes2, 1, _ptTree2);
                    _ptTree1 =  _ptRes2 ;
                }
                ReplaceTree(_ptRes1, 1, _ptTree1);
                _ptTree0 =  _ptRes1 ;
            }
            _retValue =  _ptTree0 ;
            goto constan_ret ;
        }
        break ;
    case FLOATVAL : 
        {
            PPTREE  _ptTree0 = 0 ;
            {
                PPTREE  _ptTree1 = 0, _ptRes1 = 0 ;
                _ptRes1 =  MakeTree(FLOAT, 1);
                (tokenAhead == 1 || (Lex(), TRACE_LEX(1)));
                if ( !TERM_OR_META(FLOATVAL, "FLOATVAL") || !BUILD_TERM_META(_ptTree1) ) {
                    MulFreeTree(3, _ptRes1, _ptTree1, _ptTree0);
                    TOKEN_EXIT(constan_exit, "FLOATVAL");
                } else {
                    tokenAhead =  0 ;
                }
                ReplaceTree(_ptRes1, 1, _ptTree1);
                _ptTree0 =  _ptRes1 ;
            }
            _retValue =  _ptTree0 ;
            goto constan_ret ;
        }
        break ;
    case CHARACT : 
        {
            PPTREE  _ptTree0 = 0 ;
            {
                PPTREE  _ptTree1 = 0, _ptRes1 = 0 ;
                _ptRes1 =  MakeTree(CHAR, 1);
                (tokenAhead == 1 || (Lex(), TRACE_LEX(1)));
                if ( !TERM_OR_META(CHARACT, "CHARACT") || !BUILD_TERM_META(_ptTree1) ) {
                    MulFreeTree(3, _ptRes1, _ptTree1, _ptTree0);
                    TOKEN_EXIT(constan_exit, "CHARACT");
                } else {
                    tokenAhead =  0 ;
                }
                ReplaceTree(_ptRes1, 1, _ptTree1);
                _ptTree0 =  _ptRes1 ;
            }
            _retValue =  _ptTree0 ;
            goto constan_ret ;
        }
        break ;
    default : 
        CASE_EXIT(constan_exit
            , "either INTEGER or LINTEGER or LLINTEGER or UINTEGER or ULINTEGER or ULLINTEGER or HEXA or LHEXA or LLHEXA or UHEXA or ULHEXA or ULLHEXA or OCTAL or LOCTAL or LLOCTAL or UOCTAL or ULOCTAL or ULLOCTAL or FLOATVAL or CHARACT");
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
constan_exit : 
    _Debug = TRACE_RULE("constan", TRACE_EXIT, (PPTREE)0);
    _funcLevel-- ;
    return (PPTREE) -1 ;
constan_ret : 
    _Debug = TRACE_RULE("constan", TRACE_RETURN, _retValue);
    (tokenAhead || (LexComment(), tokenAhead =  -1, TRACE_LEX(1)));
    if ( _nbPre || listComm ) 
        AddComm(_ptPreComm, _nbPre, _retValue, lastTree);
    else {
        _lastTree =  _retValue ;
        _funcLevel-- ;
    }
    return _retValue ;
}
