/*************************************************************************/
/*                                                                       */
/*        Produced by MetaGen version 2.0  -    1989-2006                 */
/*       Syntaxic Analyzer Meta Generator developped by                  */
/*                  Eric Lavillonniere                                   */
/*                                                                       */
/*************************************************************************/
#include "token.h"
#include "cplus.h"

PPTREE cplus::type_specifier_without_param ( int error_free )
{
    PFILE_POSITION  _filePosition = (PFILE_POSITION)0 ;
    int             _value, _nbPre = 0 ;
    PCOMM_ELEM      _ptPreComm
        = ((tokenAhead || (LexComment(), tokenAhead = -1, TRACE_LEX(1)))
            , listComm ? LookComm(&_nbPre) : (_funcLevel++, (PCOMM_ELEM)0));
    int             _Debug = TRACE_RULE("type_specifier_without_param", TRACE_ENTER, (PPTREE)0);
    PPTREE          lastTree = _lastTree, _retValue ;
    PPTREE          valTreeR = (PPTREE)0 ;
    
    if ( NPUSH_CALL_AFF_VERIF(valTreeR = , _Tak(range_modifier), 122, cplus) ) {
        {
            PPTREE  _ptTree0 = 0 ;
            {
                PPTREE  _ptTree1 = 0 ;
                if ( (_ptTree1 = NQUICK_CALL(_Tak(type_specifier)(error_free), 149, cplus)) == (PPTREE) -1 ) {
                    MulFreeTree(3, _ptTree1, _ptTree0, valTreeR);
                    PROG_EXIT(type_specifier_without_param_exit, "type_specifier_without_param");
                }
                _ptTree0 = ReplaceTree(valTreeR, 2, _ptTree1);
            }
            _retValue = _ptTree0 ;
            goto type_specifier_without_param_ret ;
        }
    }
    (tokenAhead == 1 || (Lex(), TRACE_LEX(1)));
    switch ( lexEl.Value ) {
        case ENUM : 
            {
                PPTREE  _ptTree0 = 0 ;
                if ( (_ptTree0 = NQUICK_CALL(_Tak(enum_declarator)(error_free), 56, cplus)) == (PPTREE) -1 ) {
                    MulFreeTree(2, _ptTree0, valTreeR);
                    PROG_EXIT(type_specifier_without_param_exit, "type_specifier_without_param");
                }
                _retValue = _ptTree0 ;
                goto type_specifier_without_param_ret ;
            }
            break ;
        case STRUCT : 
            {
                PPTREE  _ptTree0 = 0 ;
                if ( (_ptTree0 = NQUICK_CALL(_Tak(class_declaration)(error_free), 26, cplus)) == (PPTREE) -1 ) {
                    MulFreeTree(2, _ptTree0, valTreeR);
                    PROG_EXIT(type_specifier_without_param_exit, "type_specifier_without_param");
                }
                _retValue = _ptTree0 ;
                goto type_specifier_without_param_ret ;
            }
            break ;
        case UNION : 
            {
                PPTREE  _ptTree0 = 0 ;
                if ( (_ptTree0 = NQUICK_CALL(_Tak(class_declaration)(error_free), 26, cplus)) == (PPTREE) -1 ) {
                    MulFreeTree(2, _ptTree0, valTreeR);
                    PROG_EXIT(type_specifier_without_param_exit, "type_specifier_without_param");
                }
                _retValue = _ptTree0 ;
                goto type_specifier_without_param_ret ;
            }
            break ;
        case CLASS : 
            {
                PPTREE  _ptTree0 = 0 ;
                if ( (_ptTree0 = NQUICK_CALL(_Tak(class_declaration)(error_free), 26, cplus)) == (PPTREE) -1 ) {
                    MulFreeTree(2, _ptTree0, valTreeR);
                    PROG_EXIT(type_specifier_without_param_exit, "type_specifier_without_param");
                }
                _retValue = _ptTree0 ;
                goto type_specifier_without_param_ret ;
            }
            break ;
        default : 
            {
                PPTREE  _ptTree0 = 0 ;
                if ( (_ptTree0 = NQUICK_CALL(_Tak(simple_type)(error_free), 132, cplus)) == (PPTREE) -1 ) {
                    MulFreeTree(2, _ptTree0, valTreeR);
                    PROG_EXIT(type_specifier_without_param_exit, "type_specifier_without_param");
                }
                _retValue = _ptTree0 ;
                goto type_specifier_without_param_ret ;
            }
            break ;
    }
    (tokenAhead || (LexComment(), tokenAhead = -1, TRACE_LEX(1)));
    if ( _nbPre || listComm ) 
        AddComm(_ptPreComm, _nbPre, (PPTREE)0, lastTree);
    else {
        _lastTree = (PPTREE)0 ;
        _funcLevel-- ;
    }
    return ((PPTREE)0);
type_specifier_without_param_exit : 
    _Debug = TRACE_RULE("type_specifier_without_param", TRACE_EXIT, (PPTREE)0);
    _funcLevel-- ;
    return ((PPTREE) -1);
type_specifier_without_param_ret : 
    _Debug = TRACE_RULE("type_specifier_without_param", TRACE_RETURN, _retValue);
    (tokenAhead || (LexComment(), tokenAhead = -1, TRACE_LEX(1)));
    if ( _nbPre || listComm ) 
        AddComm(_ptPreComm, _nbPre, _retValue, lastTree);
    else {
        _lastTree = _retValue ;
        _funcLevel-- ;
    }
    return _retValue ;
}

PPTREE cplus::typedef_and_declarator ( int error_free )
{
    PFILE_POSITION  _filePosition = (PFILE_POSITION)0 ;
    int             _value, _nbPre = 0 ;
    PCOMM_ELEM      _ptPreComm
        = ((tokenAhead || (LexComment(), tokenAhead = -1, TRACE_LEX(1)))
            , listComm ? LookComm(&_nbPre) : (_funcLevel++, (PCOMM_ELEM)0));
    int             _Debug = TRACE_RULE("typedef_and_declarator", TRACE_ENTER, (PPTREE)0);
    PPTREE          lastTree = _lastTree, _retValue ;
    PPTREE          retTree = (PPTREE)0 ;
    
    {
        PPTREE  _ptTree0 = 0, _ptRes0 = 0 ;
        _ptRes0 = MakeTree(TYPEDEF, 2);
        if ( (_ptTree0 = NQUICK_CALL(_Tak(type_specifier)(error_free), 149, cplus)) == (PPTREE) -1 ) {
            MulFreeTree(3, _ptRes0, _ptTree0, retTree);
            PROG_EXIT(typedef_and_declarator_exit, "typedef_and_declarator");
        }
        ReplaceTree(_ptRes0, 1, _ptTree0);
        retTree = _ptRes0 ;
    }
    {
        PPTREE  _ptTree0 = 0 ;
        {
            PPTREE  _ptTree1 = 0 ;
            if ( (_ptTree1 = NQUICK_CALL(_Tak(declarator_list)(error_free), 49, cplus)) == (PPTREE) -1 ) {
                MulFreeTree(3, _ptTree1, _ptTree0, retTree);
                PROG_EXIT(typedef_and_declarator_exit, "typedef_and_declarator");
            }
            _ptTree0 = ReplaceTree(retTree, 2, _ptTree1);
        }
        _retValue = _ptTree0 ;
        goto typedef_and_declarator_ret ;
    }
    (tokenAhead || (LexComment(), tokenAhead = -1, TRACE_LEX(1)));
    if ( _nbPre || listComm ) 
        AddComm(_ptPreComm, _nbPre, (PPTREE)0, lastTree);
    else {
        _lastTree = (PPTREE)0 ;
        _funcLevel-- ;
    }
    return ((PPTREE)0);
typedef_and_declarator_exit : 
    _Debug = TRACE_RULE("typedef_and_declarator", TRACE_EXIT, (PPTREE)0);
    _funcLevel-- ;
    return ((PPTREE) -1);
typedef_and_declarator_ret : 
    _Debug = TRACE_RULE("typedef_and_declarator", TRACE_RETURN, _retValue);
    (tokenAhead || (LexComment(), tokenAhead = -1, TRACE_LEX(1)));
    if ( _nbPre || listComm ) 
        AddComm(_ptPreComm, _nbPre, _retValue, lastTree);
    else {
        _lastTree = _retValue ;
        _funcLevel-- ;
    }
    return _retValue ;
}

PPTREE cplus::unary_expression ( int error_free )
{
    PFILE_POSITION  _filePosition = (PFILE_POSITION)0 ;
    int             _value, _nbPre = 0 ;
    PCOMM_ELEM      _ptPreComm
        = ((tokenAhead || (LexComment(), tokenAhead = -1, TRACE_LEX(1)))
            , listComm ? LookComm(&_nbPre) : (_funcLevel++, (PCOMM_ELEM)0));
    int             _Debug = TRACE_RULE("unary_expression", TRACE_ENTER, (PPTREE)0);
    PPTREE          lastTree = _lastTree, _retValue ;
    PPTREE          expTree = (PPTREE)0, inter = (PPTREE)0 ;
    
    (tokenAhead == 1 || (Lex(), TRACE_LEX(1)));
    switch ( lexEl.Value ) {
        case TIRE : 
            tokenAhead = 0 ;
            CommTerm();
            {
                PPTREE  _ptTree0 = 0, _ptRes0 = 0 ;
                _ptRes0 = MakeTree(NEG, 1);
                if ( (_ptTree0 = NQUICK_CALL(_Tak(cast_expression)(error_free), 22, cplus)) == (PPTREE) -1 ) {
                    MulFreeTree(4, _ptRes0, _ptTree0, expTree, inter);
                    PROG_EXIT(unary_expression_exit, "unary_expression");
                }
                ReplaceTree(_ptRes0, 1, _ptTree0);
                expTree = _ptRes0 ;
            }
            break ;
        case PLUS : 
            tokenAhead = 0 ;
            CommTerm();
            {
                PPTREE  _ptTree0 = 0, _ptRes0 = 0 ;
                _ptRes0 = MakeTree(POS, 1);
                if ( (_ptTree0 = NQUICK_CALL(_Tak(cast_expression)(error_free), 22, cplus)) == (PPTREE) -1 ) {
                    MulFreeTree(4, _ptRes0, _ptTree0, expTree, inter);
                    PROG_EXIT(unary_expression_exit, "unary_expression");
                }
                ReplaceTree(_ptRes0, 1, _ptTree0);
                expTree = _ptRes0 ;
            }
            break ;
        case TILD : 
            tokenAhead = 0 ;
            CommTerm();
            {
                PPTREE  _ptTree0 = 0, _ptRes0 = 0 ;
                _ptRes0 = MakeTree(LNEG, 1);
                if ( (_ptTree0 = NQUICK_CALL(_Tak(cast_expression)(error_free), 22, cplus)) == (PPTREE) -1 ) {
                    MulFreeTree(4, _ptRes0, _ptTree0, expTree, inter);
                    PROG_EXIT(unary_expression_exit, "unary_expression");
                }
                ReplaceTree(_ptRes0, 1, _ptTree0);
                expTree = _ptRes0 ;
            }
            break ;
        case EXCL : 
            tokenAhead = 0 ;
            CommTerm();
            {
                PPTREE  _ptTree0 = 0, _ptRes0 = 0 ;
                _ptRes0 = MakeTree(NOT, 1);
                if ( (_ptTree0 = NQUICK_CALL(_Tak(cast_expression)(error_free), 22, cplus)) == (PPTREE) -1 ) {
                    MulFreeTree(4, _ptRes0, _ptTree0, expTree, inter);
                    PROG_EXIT(unary_expression_exit, "unary_expression");
                }
                ReplaceTree(_ptRes0, 1, _ptTree0);
                expTree = _ptRes0 ;
            }
            break ;
        case ETOI : 
            tokenAhead = 0 ;
            CommTerm();
            {
                PPTREE  _ptTree0 = 0, _ptRes0 = 0 ;
                _ptRes0 = MakeTree(POINT, 1);
                if ( (_ptTree0 = NQUICK_CALL(_Tak(cast_expression)(error_free), 22, cplus)) == (PPTREE) -1 ) {
                    MulFreeTree(4, _ptRes0, _ptTree0, expTree, inter);
                    PROG_EXIT(unary_expression_exit, "unary_expression");
                }
                ReplaceTree(_ptRes0, 1, _ptTree0);
                expTree = _ptRes0 ;
            }
            break ;
        case ETCO : 
            tokenAhead = 0 ;
            CommTerm();
            {
                PPTREE  _ptTree0 = 0, _ptRes0 = 0 ;
                _ptRes0 = MakeTree(ADDR, 1);
                if ( (_ptTree0 = NQUICK_CALL(_Tak(cast_expression)(error_free), 22, cplus)) == (PPTREE) -1 ) {
                    MulFreeTree(4, _ptRes0, _ptTree0, expTree, inter);
                    PROG_EXIT(unary_expression_exit, "unary_expression");
                }
                ReplaceTree(_ptRes0, 1, _ptTree0);
                expTree = _ptRes0 ;
            }
            break ;
        case PLUSPLUS : 
            tokenAhead = 0 ;
            CommTerm();
            {
                PPTREE  _ptTree0 = 0, _ptRes0 = 0 ;
                _ptRes0 = MakeTree(BINCR, 1);
                if ( (_ptTree0 = NQUICK_CALL(_Tak(cast_expression)(error_free), 22, cplus)) == (PPTREE) -1 ) {
                    MulFreeTree(4, _ptRes0, _ptTree0, expTree, inter);
                    PROG_EXIT(unary_expression_exit, "unary_expression");
                }
                ReplaceTree(_ptRes0, 1, _ptTree0);
                expTree = _ptRes0 ;
            }
            break ;
        case TIRETIRE : 
            tokenAhead = 0 ;
            CommTerm();
            {
                PPTREE  _ptTree0 = 0, _ptRes0 = 0 ;
                _ptRes0 = MakeTree(BDECR, 1);
                if ( (_ptTree0 = NQUICK_CALL(_Tak(cast_expression)(error_free), 22, cplus)) == (PPTREE) -1 ) {
                    MulFreeTree(4, _ptRes0, _ptTree0, expTree, inter);
                    PROG_EXIT(unary_expression_exit, "unary_expression");
                }
                ReplaceTree(_ptRes0, 1, _ptTree0);
                expTree = _ptRes0 ;
            }
            break ;
        case SIZEOF : 
            tokenAhead = 0 ;
            CommTerm();
            if ( !NPUSH_CALL_AFF_VERIF(expTree = , _Tak(sizeof_type), 134, cplus) ) {
                if ( (inter = NQUICK_CALL(_Tak(unary_expression)(error_free), 152, cplus)) == (PPTREE) -1 ) {
                    MulFreeTree(2, expTree, inter);
                    PROG_EXIT(unary_expression_exit, "unary_expression");
                }
                
                /* on libere le chapeau : un EXP, sans liberer
                   l'interieur */
                if ( NumberTree(inter) == EXP ) {
                    expTree = SonTree(inter, 1);
                    AddRef(expTree);
                    FreeTreeRec(inter);
                    RemRef(expTree);
                } else 
                    expTree = inter ;
            }
            {
                PPTREE  _ptTree0 = 0 ;
                {
                    PPTREE  _ptTree1 = 0, _ptRes1 = 0 ;
                    _ptRes1 = MakeTree(EXP_LIST, 2);
                    {
                        PPTREE  _ptRes2 = 0 ;
                        _ptRes2 = MakeTree(IDENT, 1);
                        ReplaceTree(_ptRes2, 1, MakeString("sizeof"));
                        _ptTree1 = _ptRes2 ;
                    }
                    ReplaceTree(_ptRes1, 1, _ptTree1);
                    ReplaceTree(_ptRes1, 2, expTree);
                    _ptTree0 = _ptRes1 ;
                }
                _retValue = _ptTree0 ;
                goto unary_expression_ret ;
            }
            break ;
        default : 
            if ( (tokenAhead == 1 || (Lex(), TRACE_LEX(1))) && SEE_TOKEN(DPOIDPOI, "::")
                    || (tokenAhead == 1 || (Lex(), TRACE_LEX(1))) && SEE_TOKEN(NEW, "new")
                    || (tokenAhead == 1 || (Lex(), TRACE_LEX(1))) && SEE_TOKEN(DELETE, "delete") ) {
                if ( !NPUSH_CALL_AFF_VERIF(expTree = , _Tak(alloc_expression), 4, cplus) ) {
                    if ( (expTree = NQUICK_CALL(_Tak(postfix_expression)(error_free), 110, cplus)) == (PPTREE) -1 ) {
                        MulFreeTree(2, expTree, inter);
                        PROG_EXIT(unary_expression_exit, "unary_expression");
                    }
                }
            } else {
                if ( (expTree = NQUICK_CALL(_Tak(postfix_expression)(error_free), 110, cplus)) == (PPTREE) -1 ) {
                    MulFreeTree(2, expTree, inter);
                    PROG_EXIT(unary_expression_exit, "unary_expression");
                }
            }
            break ;
    }
    {
        _retValue = expTree ;
        goto unary_expression_ret ;
    }
    (tokenAhead || (LexComment(), tokenAhead = -1, TRACE_LEX(1)));
    if ( _nbPre || listComm ) 
        AddComm(_ptPreComm, _nbPre, (PPTREE)0, lastTree);
    else {
        _lastTree = (PPTREE)0 ;
        _funcLevel-- ;
    }
    return ((PPTREE)0);
unary_expression_exit : 
    _Debug = TRACE_RULE("unary_expression", TRACE_EXIT, (PPTREE)0);
    _funcLevel-- ;
    return ((PPTREE) -1);
unary_expression_ret : 
    _Debug = TRACE_RULE("unary_expression", TRACE_RETURN, _retValue);
    (tokenAhead || (LexComment(), tokenAhead = -1, TRACE_LEX(1)));
    if ( _nbPre || listComm ) 
        AddComm(_ptPreComm, _nbPre, _retValue, lastTree);
    else {
        _lastTree = _retValue ;
        _funcLevel-- ;
    }
    return _retValue ;
}

PPTREE cplus::unsigned_type ( int error_free )
{
    int             _oldinside_signed = inside_signed ;
    PFILE_POSITION  _filePosition = (PFILE_POSITION)0 ;
    int             _value, _nbPre = 0 ;
    PCOMM_ELEM      _ptPreComm
        = ((tokenAhead || (LexComment(), tokenAhead = -1, TRACE_LEX(1)))
            , listComm ? LookComm(&_nbPre) : (_funcLevel++, (PCOMM_ELEM)0));
    int             _Debug = TRACE_RULE("unsigned_type", TRACE_ENTER, (PPTREE)0);
    PPTREE          lastTree = _lastTree, _retValue ;
    PPTREE          retTree = (PPTREE)0 ;
    
    (tokenAhead == 1 || (Lex(), TRACE_LEX(1)));
    if ( !SEE_TOKEN(UNSIGNED, "unsigned") || !(CommTerm(), 1) ) {
        MulFreeTree(1, retTree);
        TOKEN_EXIT(unsigned_type_exit, "unsigned");
    } else {
        tokenAhead = 0 ;
    }
    {
        inside_signed = 1 ;
        if ( NPUSH_CALL_AFF_VERIF(retTree = , _Tak(short_long_int_char), 129, cplus) ) {
            {
                PPTREE  _ptTree0 = 0 ;
                {
                    PPTREE  _ptRes1 = 0 ;
                    _ptRes1 = MakeTree(TUNSIGNED, 1);
                    ReplaceTree(_ptRes1, 1, retTree);
                    _ptTree0 = _ptRes1 ;
                }
                _retValue = _ptTree0 ;
                goto unsigned_type_ret ;
            }
        } else {
            {
                PPTREE  _ptTree0 = 0 ;
                {
                    PPTREE  _ptRes1 = 0 ;
                    _ptRes1 = MakeTree(TUNSIGNED, 1);
                    _ptTree0 = _ptRes1 ;
                }
                _retValue = _ptTree0 ;
                goto unsigned_type_ret ;
            }
        }
        inside_signed = _oldinside_signed ;
    }
    (tokenAhead || (LexComment(), tokenAhead = -1, TRACE_LEX(1)));
    if ( _nbPre || listComm ) 
        AddComm(_ptPreComm, _nbPre, (PPTREE)0, lastTree);
    else {
        _lastTree = (PPTREE)0 ;
        _funcLevel-- ;
    }
    inside_signed = _oldinside_signed ;
    return ((PPTREE)0);
unsigned_type_exit : 
    _Debug = TRACE_RULE("unsigned_type", TRACE_EXIT, (PPTREE)0);
    _funcLevel-- ;
    inside_signed = _oldinside_signed ;
    return ((PPTREE) -1);
unsigned_type_ret : 
    _Debug = TRACE_RULE("unsigned_type", TRACE_RETURN, _retValue);
    (tokenAhead || (LexComment(), tokenAhead = -1, TRACE_LEX(1)));
    if ( _nbPre || listComm ) 
        AddComm(_ptPreComm, _nbPre, _retValue, lastTree);
    else {
        _lastTree = _retValue ;
        _funcLevel-- ;
    }
    inside_signed = _oldinside_signed ;
    return _retValue ;
}
