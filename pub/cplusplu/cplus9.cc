/*************************************************************************/
/*                                                                       */
/*        Produced by MetaGen version 2.0  -    1989-2006                 */
/*       Syntaxic Analyzer Meta Generator developped by                  */
/*                  Eric Lavillonniere                                   */
/*                                                                       */
/*************************************************************************/
#include "token.h"
#include "cplus.h"

PPTREE cplus::type_descr ( int error_free )
{
    PFILE_POSITION  _filePosition = (PFILE_POSITION)0 ;
    int             _value, _nbPre = 0 ;
    PCOMM_ELEM      _ptPreComm = ((tokenAhead || (LexComment(), tokenAhead =  -1, TRACE_LEX(1))), listComm ? LookComm(&_nbPre) : (_funcLevel++, (PCOMM_ELEM)0));
    int             _Debug = TRACE_RULE("type_descr", TRACE_ENTER, (PPTREE)0);
    PPTREE          lastTree = _lastTree, _retValue ;
    
    {
        PPTREE  _ptTree0 = 0 ;
        {
            PPTREE  _ptTree1 = 0, _ptRes1 = 0 ;
            _ptRes1 =  MakeTree(IDENT, 1);
            (tokenAhead == 1 || (Lex(), TRACE_LEX(1)));
            if ( !TERM_OR_META(IDENT, "IDENT") || !BUILD_TERM_META(_ptTree1) ) {
                MulFreeTree(3, _ptRes1, _ptTree1, _ptTree0);
                TOKEN_EXIT(type_descr_exit, "IDENT");
            } else {
                tokenAhead =  0 ;
            }
            ReplaceTree(_ptRes1, 1, _ptTree1);
            _ptTree0 =  _ptRes1 ;
        }
        _retValue =  _ptTree0 ;
        goto type_descr_ret ;
    }
    (tokenAhead || (LexComment(), tokenAhead =  -1, TRACE_LEX(1)));
    if ( _nbPre || listComm ) 
        AddComm(_ptPreComm, _nbPre, (PPTREE)0, lastTree);
    else {
        _lastTree =  (PPTREE)0 ;
        _funcLevel-- ;
    }
    return (PPTREE)0 ;
type_descr_exit : 
    _Debug = TRACE_RULE("type_descr", TRACE_EXIT, (PPTREE)0);
    _funcLevel-- ;
    return (PPTREE) -1 ;
type_descr_ret : 
    _Debug = TRACE_RULE("type_descr", TRACE_RETURN, _retValue);
    (tokenAhead || (LexComment(), tokenAhead =  -1, TRACE_LEX(1)));
    if ( _nbPre || listComm ) 
        AddComm(_ptPreComm, _nbPre, _retValue, lastTree);
    else {
        _lastTree =  _retValue ;
        _funcLevel-- ;
    }
    return _retValue ;
}

PPTREE cplus::type_name ( int error_free )
{
    PFILE_POSITION  _filePosition = (PFILE_POSITION)0 ;
    int             _value, _nbPre = 0 ;
    PCOMM_ELEM      _ptPreComm = ((tokenAhead || (LexComment(), tokenAhead =  -1, TRACE_LEX(1))), listComm ? LookComm(&_nbPre) : (_funcLevel++, (PCOMM_ELEM)0));
    int             _Debug = TRACE_RULE("type_name", TRACE_ENTER, (PPTREE)0);
    PPTREE          lastTree = _lastTree, _retValue ;
    PPTREE          retTree = (PPTREE)0, valTree = (PPTREE)0 ;
    
    if ( (retTree = NQUICK_CALL(_Tak(type_specifier)(error_free), 145, cplus)) == (PPTREE) -1 ) {
        MulFreeTree(2, retTree, valTree);
        PROG_EXIT(type_name_exit, "type_name");
    }
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
    {
        _retValue =  valTree ;
        goto type_name_ret ;
    }
    (tokenAhead || (LexComment(), tokenAhead =  -1, TRACE_LEX(1)));
    if ( _nbPre || listComm ) 
        AddComm(_ptPreComm, _nbPre, (PPTREE)0, lastTree);
    else {
        _lastTree =  (PPTREE)0 ;
        _funcLevel-- ;
    }
    return (PPTREE)0 ;
type_name_exit : 
    _Debug = TRACE_RULE("type_name", TRACE_EXIT, (PPTREE)0);
    _funcLevel-- ;
    return (PPTREE) -1 ;
type_name_ret : 
    _Debug = TRACE_RULE("type_name", TRACE_RETURN, _retValue);
    (tokenAhead || (LexComment(), tokenAhead =  -1, TRACE_LEX(1)));
    if ( _nbPre || listComm ) 
        AddComm(_ptPreComm, _nbPre, _retValue, lastTree);
    else {
        _lastTree =  _retValue ;
        _funcLevel-- ;
    }
    return _retValue ;
}

PPTREE cplus::type_specifier ( int error_free )
{
    PFILE_POSITION  _filePosition = (PFILE_POSITION)0 ;
    int             _value, _nbPre = 0 ;
    PCOMM_ELEM      _ptPreComm = ((tokenAhead || (LexComment(), tokenAhead =  -1, TRACE_LEX(1))), listComm ? LookComm(&_nbPre) : (_funcLevel++, (PCOMM_ELEM)0));
    int             _Debug = TRACE_RULE("type_specifier", TRACE_ENTER, (PPTREE)0);
    PPTREE          lastTree = _lastTree, _retValue ;
    PPTREE          _addlist1 = (PPTREE)0 ;
    PPTREE          ret = (PPTREE)0, listParam = (PPTREE)0, exp = (PPTREE)0 ;
    
    if ( (ret = NQUICK_CALL(_Tak(type_specifier_without_param)(error_free), 146, cplus)) == (PPTREE) -1 ) {
        MulFreeTree(4, _addlist1, exp, listParam, ret);
        PROG_EXIT(type_specifier_exit, "type_specifier");
    }
    if ( (tokenAhead == 1 || (Lex(), TRACE_LEX(1))) && SEE_TOKEN(INFE, "<") && ((tokenAhead = 0), CommTerm(), 1) ) {
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
            MulFreeTree(4, _addlist1, exp, listParam, ret);
            TOKEN_EXIT(type_specifier_exit, ">");
        } else {
            tokenAhead =  0 ;
        }
        {
            PPTREE  _ptRes0 = 0 ;
            _ptRes0 =  MakeTree(PARAM_TYPE, 2);
            ReplaceTree(_ptRes0, 1, ret);
            ReplaceTree(_ptRes0, 2, listParam);
            ret =  _ptRes0 ;
        }
    }
    {
        _retValue =  ret ;
        goto type_specifier_ret ;
    }
    (tokenAhead || (LexComment(), tokenAhead =  -1, TRACE_LEX(1)));
    if ( _nbPre || listComm ) 
        AddComm(_ptPreComm, _nbPre, (PPTREE)0, lastTree);
    else {
        _lastTree =  (PPTREE)0 ;
        _funcLevel-- ;
    }
    return (PPTREE)0 ;
type_specifier_exit : 
    _Debug = TRACE_RULE("type_specifier", TRACE_EXIT, (PPTREE)0);
    _funcLevel-- ;
    return (PPTREE) -1 ;
type_specifier_ret : 
    _Debug = TRACE_RULE("type_specifier", TRACE_RETURN, _retValue);
    (tokenAhead || (LexComment(), tokenAhead =  -1, TRACE_LEX(1)));
    if ( _nbPre || listComm ) 
        AddComm(_ptPreComm, _nbPre, _retValue, lastTree);
    else {
        _lastTree =  _retValue ;
        _funcLevel-- ;
    }
    return _retValue ;
}

PPTREE cplus::type_specifier_without_param ( int error_free )
{
    PFILE_POSITION  _filePosition = (PFILE_POSITION)0 ;
    int             _value, _nbPre = 0 ;
    PCOMM_ELEM      _ptPreComm = ((tokenAhead || (LexComment(), tokenAhead =  -1, TRACE_LEX(1))), listComm ? LookComm(&_nbPre) : (_funcLevel++, (PCOMM_ELEM)0));
    int             _Debug = TRACE_RULE("type_specifier_without_param", TRACE_ENTER, (PPTREE)0);
    PPTREE          lastTree = _lastTree, _retValue ;
    PPTREE          retTree = (PPTREE)0, valTree = (PPTREE)0, list = (PPTREE)0, valTreeR = (PPTREE)0 ;
    
    if ( NPUSH_CALL_AFF_VERIF(valTreeR = , _Tak(range_modifier), 121, cplus) ) {
        {
            PPTREE  _ptTree0 = 0 ;
            {
                PPTREE  _ptTree1 = 0 ;
                if ( (_ptTree1 = NQUICK_CALL(_Tak(type_specifier)(error_free), 145, cplus)) == (PPTREE) -1 ) {
                    MulFreeTree(6, _ptTree1, _ptTree0, list, retTree, valTree, valTreeR);
                    PROG_EXIT(type_specifier_without_param_exit, "type_specifier_without_param");
                }
                _ptTree0 =  ReplaceTree(valTreeR, 2, _ptTree1);
            }
            _retValue =  _ptTree0 ;
            goto type_specifier_without_param_ret ;
        }
    }
    (tokenAhead == 1 || (Lex(), TRACE_LEX(1)));
    switch ( lexEl.Value ) {
        case ENUM : 
            {
                PPTREE  _ptTree0 = 0 ;
                if ( (_ptTree0 = NQUICK_CALL(_Tak(enum_declarator)(error_free), 55, cplus)) == (PPTREE) -1 ) {
                    MulFreeTree(5, _ptTree0, list, retTree, valTree, valTreeR);
                    PROG_EXIT(type_specifier_without_param_exit, "type_specifier_without_param");
                }
                _retValue =  _ptTree0 ;
                goto type_specifier_without_param_ret ;
            }
            break ;
        case STRUCT : 
            {
                PPTREE  _ptTree0 = 0 ;
                if ( (_ptTree0 = NQUICK_CALL(_Tak(class_declaration)(error_free), 25, cplus)) == (PPTREE) -1 ) {
                    MulFreeTree(5, _ptTree0, list, retTree, valTree, valTreeR);
                    PROG_EXIT(type_specifier_without_param_exit, "type_specifier_without_param");
                }
                _retValue =  _ptTree0 ;
                goto type_specifier_without_param_ret ;
            }
            break ;
        case UNION : 
            {
                PPTREE  _ptTree0 = 0 ;
                if ( (_ptTree0 = NQUICK_CALL(_Tak(class_declaration)(error_free), 25, cplus)) == (PPTREE) -1 ) {
                    MulFreeTree(5, _ptTree0, list, retTree, valTree, valTreeR);
                    PROG_EXIT(type_specifier_without_param_exit, "type_specifier_without_param");
                }
                _retValue =  _ptTree0 ;
                goto type_specifier_without_param_ret ;
            }
            break ;
        case CLASS : 
            {
                PPTREE  _ptTree0 = 0 ;
                if ( (_ptTree0 = NQUICK_CALL(_Tak(class_declaration)(error_free), 25, cplus)) == (PPTREE) -1 ) {
                    MulFreeTree(5, _ptTree0, list, retTree, valTree, valTreeR);
                    PROG_EXIT(type_specifier_without_param_exit, "type_specifier_without_param");
                }
                _retValue =  _ptTree0 ;
                goto type_specifier_without_param_ret ;
            }
            break ;
        default : 
            {
                PPTREE  _ptTree0 = 0 ;
                if ( (_ptTree0 = NQUICK_CALL(_Tak(simple_type)(error_free), 128, cplus)) == (PPTREE) -1 ) {
                    MulFreeTree(5, _ptTree0, list, retTree, valTree, valTreeR);
                    PROG_EXIT(type_specifier_without_param_exit, "type_specifier_without_param");
                }
                _retValue =  _ptTree0 ;
                goto type_specifier_without_param_ret ;
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
type_specifier_without_param_exit : 
    _Debug = TRACE_RULE("type_specifier_without_param", TRACE_EXIT, (PPTREE)0);
    _funcLevel-- ;
    return (PPTREE) -1 ;
type_specifier_without_param_ret : 
    _Debug = TRACE_RULE("type_specifier_without_param", TRACE_RETURN, _retValue);
    (tokenAhead || (LexComment(), tokenAhead =  -1, TRACE_LEX(1)));
    if ( _nbPre || listComm ) 
        AddComm(_ptPreComm, _nbPre, _retValue, lastTree);
    else {
        _lastTree =  _retValue ;
        _funcLevel-- ;
    }
    return _retValue ;
}

PPTREE cplus::typedef_and_declarator ( int error_free )
{
    PFILE_POSITION  _filePosition = (PFILE_POSITION)0 ;
    int             _value, _nbPre = 0 ;
    PCOMM_ELEM      _ptPreComm = ((tokenAhead || (LexComment(), tokenAhead =  -1, TRACE_LEX(1))), listComm ? LookComm(&_nbPre) : (_funcLevel++, (PCOMM_ELEM)0));
    int             _Debug = TRACE_RULE("typedef_and_declarator", TRACE_ENTER, (PPTREE)0);
    PPTREE          lastTree = _lastTree, _retValue ;
    PPTREE          retTree = (PPTREE)0 ;
    
    {
        PPTREE  _ptTree0 = 0, _ptRes0 = 0 ;
        _ptRes0 =  MakeTree(TYPEDEF, 2);
        if ( (_ptTree0 = NQUICK_CALL(_Tak(type_specifier)(error_free), 145, cplus)) == (PPTREE) -1 ) {
            MulFreeTree(3, _ptRes0, _ptTree0, retTree);
            PROG_EXIT(typedef_and_declarator_exit, "typedef_and_declarator");
        }
        ReplaceTree(_ptRes0, 1, _ptTree0);
        retTree =  _ptRes0 ;
    }
    {
        PPTREE  _ptTree0 = 0 ;
        {
            PPTREE  _ptTree1 = 0 ;
            if ( (_ptTree1 = NQUICK_CALL(_Tak(declarator_list)(error_free), 48, cplus)) == (PPTREE) -1 ) {
                MulFreeTree(3, _ptTree1, _ptTree0, retTree);
                PROG_EXIT(typedef_and_declarator_exit, "typedef_and_declarator");
            }
            _ptTree0 =  ReplaceTree(retTree, 2, _ptTree1);
        }
        _retValue =  _ptTree0 ;
        goto typedef_and_declarator_ret ;
    }
    (tokenAhead || (LexComment(), tokenAhead =  -1, TRACE_LEX(1)));
    if ( _nbPre || listComm ) 
        AddComm(_ptPreComm, _nbPre, (PPTREE)0, lastTree);
    else {
        _lastTree =  (PPTREE)0 ;
        _funcLevel-- ;
    }
    return (PPTREE)0 ;
typedef_and_declarator_exit : 
    _Debug = TRACE_RULE("typedef_and_declarator", TRACE_EXIT, (PPTREE)0);
    _funcLevel-- ;
    return (PPTREE) -1 ;
typedef_and_declarator_ret : 
    _Debug = TRACE_RULE("typedef_and_declarator", TRACE_RETURN, _retValue);
    (tokenAhead || (LexComment(), tokenAhead =  -1, TRACE_LEX(1)));
    if ( _nbPre || listComm ) 
        AddComm(_ptPreComm, _nbPre, _retValue, lastTree);
    else {
        _lastTree =  _retValue ;
        _funcLevel-- ;
    }
    return _retValue ;
}

PPTREE cplus::unary_expression ( int error_free )
{
    PFILE_POSITION  _filePosition = (PFILE_POSITION)0 ;
    int             _value, _nbPre = 0 ;
    PCOMM_ELEM      _ptPreComm = ((tokenAhead || (LexComment(), tokenAhead =  -1, TRACE_LEX(1))), listComm ? LookComm(&_nbPre) : (_funcLevel++, (PCOMM_ELEM)0));
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
                _ptRes0 =  MakeTree(NEG, 1);
                if ( (_ptTree0 = NQUICK_CALL(_Tak(cast_expression)(error_free), 21, cplus)) == (PPTREE) -1 ) {
                    MulFreeTree(4, _ptRes0, _ptTree0, expTree, inter);
                    PROG_EXIT(unary_expression_exit, "unary_expression");
                }
                ReplaceTree(_ptRes0, 1, _ptTree0);
                expTree =  _ptRes0 ;
            }
            break ;
        case PLUS : 
            tokenAhead = 0 ;
            CommTerm();
            {
                PPTREE  _ptTree0 = 0, _ptRes0 = 0 ;
                _ptRes0 =  MakeTree(POS, 1);
                if ( (_ptTree0 = NQUICK_CALL(_Tak(cast_expression)(error_free), 21, cplus)) == (PPTREE) -1 ) {
                    MulFreeTree(4, _ptRes0, _ptTree0, expTree, inter);
                    PROG_EXIT(unary_expression_exit, "unary_expression");
                }
                ReplaceTree(_ptRes0, 1, _ptTree0);
                expTree =  _ptRes0 ;
            }
            break ;
        case TILD : 
            tokenAhead = 0 ;
            CommTerm();
            {
                PPTREE  _ptTree0 = 0, _ptRes0 = 0 ;
                _ptRes0 =  MakeTree(LNEG, 1);
                if ( (_ptTree0 = NQUICK_CALL(_Tak(cast_expression)(error_free), 21, cplus)) == (PPTREE) -1 ) {
                    MulFreeTree(4, _ptRes0, _ptTree0, expTree, inter);
                    PROG_EXIT(unary_expression_exit, "unary_expression");
                }
                ReplaceTree(_ptRes0, 1, _ptTree0);
                expTree =  _ptRes0 ;
            }
            break ;
        case EXCL : 
            tokenAhead = 0 ;
            CommTerm();
            {
                PPTREE  _ptTree0 = 0, _ptRes0 = 0 ;
                _ptRes0 =  MakeTree(NOT, 1);
                if ( (_ptTree0 = NQUICK_CALL(_Tak(cast_expression)(error_free), 21, cplus)) == (PPTREE) -1 ) {
                    MulFreeTree(4, _ptRes0, _ptTree0, expTree, inter);
                    PROG_EXIT(unary_expression_exit, "unary_expression");
                }
                ReplaceTree(_ptRes0, 1, _ptTree0);
                expTree =  _ptRes0 ;
            }
            break ;
        case ETOI : 
            tokenAhead = 0 ;
            CommTerm();
            {
                PPTREE  _ptTree0 = 0, _ptRes0 = 0 ;
                _ptRes0 =  MakeTree(POINT, 1);
                if ( (_ptTree0 = NQUICK_CALL(_Tak(cast_expression)(error_free), 21, cplus)) == (PPTREE) -1 ) {
                    MulFreeTree(4, _ptRes0, _ptTree0, expTree, inter);
                    PROG_EXIT(unary_expression_exit, "unary_expression");
                }
                ReplaceTree(_ptRes0, 1, _ptTree0);
                expTree =  _ptRes0 ;
            }
            break ;
        case ETCO : 
            tokenAhead = 0 ;
            CommTerm();
            {
                PPTREE  _ptTree0 = 0, _ptRes0 = 0 ;
                _ptRes0 =  MakeTree(ADDR, 1);
                if ( (_ptTree0 = NQUICK_CALL(_Tak(cast_expression)(error_free), 21, cplus)) == (PPTREE) -1 ) {
                    MulFreeTree(4, _ptRes0, _ptTree0, expTree, inter);
                    PROG_EXIT(unary_expression_exit, "unary_expression");
                }
                ReplaceTree(_ptRes0, 1, _ptTree0);
                expTree =  _ptRes0 ;
            }
            break ;
        case PLUSPLUS : 
            tokenAhead = 0 ;
            CommTerm();
            {
                PPTREE  _ptTree0 = 0, _ptRes0 = 0 ;
                _ptRes0 =  MakeTree(BINCR, 1);
                if ( (_ptTree0 = NQUICK_CALL(_Tak(cast_expression)(error_free), 21, cplus)) == (PPTREE) -1 ) {
                    MulFreeTree(4, _ptRes0, _ptTree0, expTree, inter);
                    PROG_EXIT(unary_expression_exit, "unary_expression");
                }
                ReplaceTree(_ptRes0, 1, _ptTree0);
                expTree =  _ptRes0 ;
            }
            break ;
        case TIRETIRE : 
            tokenAhead = 0 ;
            CommTerm();
            {
                PPTREE  _ptTree0 = 0, _ptRes0 = 0 ;
                _ptRes0 =  MakeTree(BDECR, 1);
                if ( (_ptTree0 = NQUICK_CALL(_Tak(cast_expression)(error_free), 21, cplus)) == (PPTREE) -1 ) {
                    MulFreeTree(4, _ptRes0, _ptTree0, expTree, inter);
                    PROG_EXIT(unary_expression_exit, "unary_expression");
                }
                ReplaceTree(_ptRes0, 1, _ptTree0);
                expTree =  _ptRes0 ;
            }
            break ;
        case SIZEOF : 
            tokenAhead = 0 ;
            CommTerm();
            if ( !NPUSH_CALL_AFF_VERIF(expTree = , _Tak(sizeof_type), 130, cplus) ) {
                if ( (inter = NQUICK_CALL(_Tak(unary_expression)(error_free), 148, cplus)) == (PPTREE) -1 ) {
                    MulFreeTree(2, expTree, inter);
                    PROG_EXIT(unary_expression_exit, "unary_expression");
                }
                
                /* on libere le chapeau : un EXP, sans liberer
                   l'interieur */
                if ( NumberTree(inter) == EXP ) {
                    expTree =  SonTree(inter, 1);
                    AddRef(expTree);
                    FreeTreeRec(inter);
                    RemRef(expTree);
                } else 
                    expTree =  inter ;
            }
            {
                PPTREE  _ptTree0 = 0 ;
                {
                    PPTREE  _ptTree1 = 0, _ptRes1 = 0 ;
                    _ptRes1 =  MakeTree(EXP_LIST, 2);
                    {
                        PPTREE  _ptRes2 = 0 ;
                        _ptRes2 =  MakeTree(IDENT, 1);
                        ReplaceTree(_ptRes2, 1, MakeString("sizeof"));
                        _ptTree1 =  _ptRes2 ;
                    }
                    ReplaceTree(_ptRes1, 1, _ptTree1);
                    ReplaceTree(_ptRes1, 2, expTree);
                    _ptTree0 =  _ptRes1 ;
                }
                _retValue =  _ptTree0 ;
                goto unary_expression_ret ;
            }
            break ;
        default : 
            if ( (tokenAhead == 1 || (Lex(), TRACE_LEX(1))) && SEE_TOKEN(DPOIDPOI, "::")
                    || (tokenAhead == 1 || (Lex(), TRACE_LEX(1))) && SEE_TOKEN(NEW, "new")
                    || (tokenAhead == 1 || (Lex(), TRACE_LEX(1))) && SEE_TOKEN(DELETE, "delete") ) {
                if ( !NPUSH_CALL_AFF_VERIF(expTree = , _Tak(alloc_expression), 4, cplus) ) {
                    if ( (expTree = NQUICK_CALL(_Tak(postfix_expression)(error_free), 109, cplus)) == (PPTREE) -1 ) {
                        MulFreeTree(2, expTree, inter);
                        PROG_EXIT(unary_expression_exit, "unary_expression");
                    }
                }
            } else {
                if ( (expTree = NQUICK_CALL(_Tak(postfix_expression)(error_free), 109, cplus)) == (PPTREE) -1 ) {
                    MulFreeTree(2, expTree, inter);
                    PROG_EXIT(unary_expression_exit, "unary_expression");
                }
            }
            break ;
    }
    {
        _retValue =  expTree ;
        goto unary_expression_ret ;
    }
    (tokenAhead || (LexComment(), tokenAhead =  -1, TRACE_LEX(1)));
    if ( _nbPre || listComm ) 
        AddComm(_ptPreComm, _nbPre, (PPTREE)0, lastTree);
    else {
        _lastTree =  (PPTREE)0 ;
        _funcLevel-- ;
    }
    return (PPTREE)0 ;
unary_expression_exit : 
    _Debug = TRACE_RULE("unary_expression", TRACE_EXIT, (PPTREE)0);
    _funcLevel-- ;
    return (PPTREE) -1 ;
unary_expression_ret : 
    _Debug = TRACE_RULE("unary_expression", TRACE_RETURN, _retValue);
    (tokenAhead || (LexComment(), tokenAhead =  -1, TRACE_LEX(1)));
    if ( _nbPre || listComm ) 
        AddComm(_ptPreComm, _nbPre, _retValue, lastTree);
    else {
        _lastTree =  _retValue ;
        _funcLevel-- ;
    }
    return _retValue ;
}
