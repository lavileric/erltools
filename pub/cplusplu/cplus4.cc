/*************************************************************************/
/*                                                                       */
/*        Produced by MetaGen version 2.0  -    1989-2006                 */
/*       Syntaxic Analyzer Meta Generator developped by                  */
/*                  Eric Lavillonniere                                   */
/*                                                                       */
/*************************************************************************/
#include "token.h"
#include "cplus.h"

PPTREE cplus::ident_mul ( int error_free )
{
    PFILE_POSITION  _filePosition = (PFILE_POSITION)0 ;
    int             _value, _nbPre = 0 ;
    PCOMM_ELEM      _ptPreComm = ((tokenAhead || (LexComment(), tokenAhead =  -1, TRACE_LEX(1))), listComm ? LookComm(&_nbPre) : (_funcLevel++, (PCOMM_ELEM)0));
    int             _Debug = TRACE_RULE("ident_mul", TRACE_ENTER, (PPTREE)0);
    PPTREE          lastTree = _lastTree, _retValue ;
    
    if ( NQUICK_CALL(_Tak(complete_class_name)(error_free), 27, cplus) == (PPTREE) -1 ) {
        PROG_EXIT(ident_mul_exit, "ident_mul");
    }
    (tokenAhead == 1 || (Lex(), TRACE_LEX(1)));
    switch ( lexEl.Value ) {
        case ETOI : break ;
        case META : 
        case IDENT : break ;
        default : 
            CASE_EXIT(ident_mul_exit, "either * or IDENT");
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
ident_mul_exit : 
    _Debug = TRACE_RULE("ident_mul", TRACE_EXIT, (PPTREE)0);
    _funcLevel-- ;
    return (PPTREE) -1 ;
ident_mul_ret : 
    _Debug = TRACE_RULE("ident_mul", TRACE_RETURN, _retValue);
    (tokenAhead || (LexComment(), tokenAhead =  -1, TRACE_LEX(1)));
    if ( _nbPre || listComm ) 
        AddComm(_ptPreComm, _nbPre, _retValue, lastTree);
    else {
        _lastTree =  _retValue ;
        _funcLevel-- ;
    }
    return _retValue ;
}

PPTREE cplus::include_dir ( int error_free )
{
    PFILE_POSITION  _filePosition = (PFILE_POSITION)0 ;
    int             _value, _nbPre = 0 ;
    PCOMM_ELEM      _ptPreComm = ((tokenAhead || (LexComment(), tokenAhead =  -1, TRACE_LEX(1))), listComm ? LookComm(&_nbPre) : (_funcLevel++, (PCOMM_ELEM)0));
    int             _Debug = TRACE_RULE("include_dir", TRACE_ENTER, (PPTREE)0);
    PPTREE          lastTree = _lastTree, _retValue ;
    
    (tokenAhead == 1 || (Lex(), TRACE_LEX(1)));
    if ( !TERM_OR_META(INCLUDE_DIR, "INCLUDE_DIR") || !(CommTerm(), 1) ) {
        TOKEN_EXIT(include_dir_exit, "INCLUDE_DIR");
    } else {
        tokenAhead =  0 ;
    }
    (tokenAhead == 6 || (LexInclude(), TRACE_LEX(1)));
    switch ( lexEl.Value ) {
        case META : 
        case INCLUDE_SYS : 
            {
                PPTREE  _ptTree0 = 0 ;
                {
                    PPTREE  _ptTree1 = 0, _ptRes1 = 0 ;
                    _ptRes1 =  MakeTree(INCLUDE_DIR, 1);
                    (tokenAhead == 6 || (LexInclude(), TRACE_LEX(1)));
                    if ( !TERM_OR_META(INCLUDE_SYS, "INCLUDE_SYS") || !BUILD_TERM_META(_ptTree1) ) {
                        MulFreeTree(3, _ptRes1, _ptTree1, _ptTree0);
                        TOKEN_EXIT(include_dir_exit, "INCLUDE_SYS");
                    } else {
                        tokenAhead =  0 ;
                    }
                    ReplaceTree(_ptRes1, 1, _ptTree1);
                    _ptTree0 =  _ptRes1 ;
                }
                _retValue =  _ptTree0 ;
                goto include_dir_ret ;
            }
            break ;
        case INCLUDE_LOCAL : 
            {
                PPTREE  _ptTree0 = 0 ;
                {
                    PPTREE  _ptTree1 = 0, _ptRes1 = 0 ;
                    _ptRes1 =  MakeTree(INCLUDE_DIR, 1);
                    {
                        PPTREE  _ptTree2 = 0, _ptRes2 = 0 ;
                        _ptRes2 =  MakeTree(STRING, 1);
                        (tokenAhead == 6 || (LexInclude(), TRACE_LEX(1)));
                        if ( !TERM_OR_META(INCLUDE_LOCAL, "INCLUDE_LOCAL") || !BUILD_TERM_META(_ptTree2) ) {
                            MulFreeTree(5, _ptRes2, _ptTree2, _ptRes1, _ptTree1, _ptTree0);
                            TOKEN_EXIT(include_dir_exit, "INCLUDE_LOCAL");
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
                goto include_dir_ret ;
            }
            break ;
        default : 
            CASE_EXIT(include_dir_exit, "either INCLUDE_SYS or INCLUDE_LOCAL");
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
include_dir_exit : 
    _Debug = TRACE_RULE("include_dir", TRACE_EXIT, (PPTREE)0);
    _funcLevel-- ;
    return (PPTREE) -1 ;
include_dir_ret : 
    _Debug = TRACE_RULE("include_dir", TRACE_RETURN, _retValue);
    (tokenAhead || (LexComment(), tokenAhead =  -1, TRACE_LEX(1)));
    if ( _nbPre || listComm ) 
        AddComm(_ptPreComm, _nbPre, _retValue, lastTree);
    else {
        _lastTree =  _retValue ;
        _funcLevel-- ;
    }
    return _retValue ;
}

PPTREE cplus::inclusive_or_expression ( int error_free )
{
    PFILE_POSITION  _filePosition = (PFILE_POSITION)0 ;
    int             _value, _nbPre = 0 ;
    PCOMM_ELEM      _ptPreComm = ((tokenAhead || (LexComment(), tokenAhead =  -1, TRACE_LEX(1))), listComm ? LookComm(&_nbPre) : (_funcLevel++, (PCOMM_ELEM)0));
    int             _Debug = TRACE_RULE("inclusive_or_expression", TRACE_ENTER, (PPTREE)0);
    PPTREE          lastTree = _lastTree, _retValue ;
    PPTREE          expTree = (PPTREE)0 ;
    
    if ( (expTree = NQUICK_CALL(_Tak(exclusive_or_expression)(error_free), 61, cplus)) == (PPTREE) -1 ) {
        MulFreeTree(1, expTree);
        PROG_EXIT(inclusive_or_expression_exit, "inclusive_or_expression");
    }
    while ( (tokenAhead == 1 || (Lex(), TRACE_LEX(1))) && SEE_TOKEN(VBAR, "|") && ((tokenAhead = 0), CommTerm(), 1) ) {
        {
            PPTREE  _ptTree0 = 0, _ptRes0 = 0 ;
            _ptRes0 =  MakeTree(LOR, 2);
            ReplaceTree(_ptRes0, 1, expTree);
            if ( (_ptTree0 = NQUICK_CALL(_Tak(exclusive_or_expression)(error_free), 61, cplus)) == (PPTREE) -1 ) {
                MulFreeTree(3, _ptRes0, _ptTree0, expTree);
                PROG_EXIT(inclusive_or_expression_exit, "inclusive_or_expression");
            }
            ReplaceTree(_ptRes0, 2, _ptTree0);
            expTree =  _ptRes0 ;
        }
    }
    {
        _retValue =  expTree ;
        goto inclusive_or_expression_ret ;
    }
    (tokenAhead || (LexComment(), tokenAhead =  -1, TRACE_LEX(1)));
    if ( _nbPre || listComm ) 
        AddComm(_ptPreComm, _nbPre, (PPTREE)0, lastTree);
    else {
        _lastTree =  (PPTREE)0 ;
        _funcLevel-- ;
    }
    return (PPTREE)0 ;
inclusive_or_expression_exit : 
    _Debug = TRACE_RULE("inclusive_or_expression", TRACE_EXIT, (PPTREE)0);
    _funcLevel-- ;
    return (PPTREE) -1 ;
inclusive_or_expression_ret : 
    _Debug = TRACE_RULE("inclusive_or_expression", TRACE_RETURN, _retValue);
    (tokenAhead || (LexComment(), tokenAhead =  -1, TRACE_LEX(1)));
    if ( _nbPre || listComm ) 
        AddComm(_ptPreComm, _nbPre, _retValue, lastTree);
    else {
        _lastTree =  _retValue ;
        _funcLevel-- ;
    }
    return _retValue ;
}

PPTREE cplus::initializer ( int error_free )
{
    PFILE_POSITION  _filePosition = (PFILE_POSITION)0 ;
    int             _value, _nbPre = 0 ;
    PCOMM_ELEM      _ptPreComm = ((tokenAhead || (LexComment(), tokenAhead =  -1, TRACE_LEX(1))), listComm ? LookComm(&_nbPre) : (_funcLevel++, (PCOMM_ELEM)0));
    int             _Debug = TRACE_RULE("initializer", TRACE_ENTER, (PPTREE)0);
    PPTREE          lastTree = _lastTree, _retValue ;
    PPTREE          _addlist1 = (PPTREE)0 ;
    PPTREE          initList = (PPTREE)0, retTree = (PPTREE)0 ;
    
    (tokenAhead == 1 || (Lex(), TRACE_LEX(1)));
    switch ( lexEl.Value ) {
        case AOUV : 
            tokenAhead = 0 ;
            CommTerm();
            _addlist1 = initList ;
            do {
                {
                    PPTREE  _ptTree0 = 0 ;
                    if ( (_ptTree0 = NQUICK_CALL(_Tak(initializer)(error_free), 81, cplus)) == (PPTREE) -1 ) {
                        MulFreeTree(4, _ptTree0, _addlist1, initList, retTree);
                        PROG_EXIT(initializer_exit, "initializer");
                    }
                    _addlist1 =  AddList(_addlist1, _ptTree0);
                }
                if ( initList ) {
                    _addlist1 =  SonTree(_addlist1, 2);
                } else {
                    initList =  _addlist1 ;
                }
            } while ( !!((tokenAhead == 1 || (Lex(), TRACE_LEX(1))) && SEE_TOKEN(VIRG, ",") && ((tokenAhead = 0), CommTerm(), 1)) );
            (tokenAhead == 1 || (Lex(), TRACE_LEX(1)));
            if ( !SEE_TOKEN(AFER, "}") || !(CommTerm(), 1) ) {
                MulFreeTree(3, _addlist1, initList, retTree);
                TOKEN_EXIT(initializer_exit, "}");
            } else {
                tokenAhead =  0 ;
            }
            {
                PPTREE  _ptTree0 = 0 ;
                {
                    PPTREE  _ptRes1 = 0 ;
                    _ptRes1 =  MakeTree(INITIALIZER, 1);
                    ReplaceTree(_ptRes1, 1, initList);
                    _ptTree0 =  _ptRes1 ;
                }
                _retValue =  _ptTree0 ;
                goto initializer_ret ;
            }
            break ;
        default : 
            if ( NPUSH_CALL_AFF_VERIF(retTree = , _Tak(assignment_expression), 16, cplus) ) {
                {
                    PPTREE  _ptTree0 = 0 ;
                    {
                        PPTREE  _ptRes1 = 0 ;
                        _ptRes1 =  MakeTree(INITIALIZER, 1);
                        ReplaceTree(_ptRes1, 1, retTree);
                        _ptTree0 =  _ptRes1 ;
                    }
                    _retValue =  _ptTree0 ;
                    goto initializer_ret ;
                }
            } else {
                {
                    PPTREE  _ptTree0 = 0 ;
                    {
                        PPTREE  _ptRes1 = 0 ;
                        _ptRes1  =  MakeTree(INITIALIZER, 1);
                        _ptTree0 =  _ptRes1 ;
                    }
                    _retValue =  _ptTree0 ;
                    goto initializer_ret ;
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
initializer_exit : 
    _Debug = TRACE_RULE("initializer", TRACE_EXIT, (PPTREE)0);
    _funcLevel-- ;
    return (PPTREE) -1 ;
initializer_ret : 
    _Debug = TRACE_RULE("initializer", TRACE_RETURN, _retValue);
    (tokenAhead || (LexComment(), tokenAhead =  -1, TRACE_LEX(1)));
    if ( _nbPre || listComm ) 
        AddComm(_ptPreComm, _nbPre, _retValue, lastTree);
    else {
        _lastTree =  _retValue ;
        _funcLevel-- ;
    }
    return _retValue ;
}

PPTREE cplus::inline_namespace ( int error_free )
{
    PFILE_POSITION  _filePosition = (PFILE_POSITION)0 ;
    int             _value, _nbPre = 0 ;
    PCOMM_ELEM      _ptPreComm = ((tokenAhead || (LexComment(), tokenAhead =  -1, TRACE_LEX(1))), listComm ? LookComm(&_nbPre) : (_funcLevel++, (PCOMM_ELEM)0));
    int             _Debug = TRACE_RULE("inline_namespace", TRACE_ENTER, (PPTREE)0);
    PPTREE          lastTree = _lastTree, _retValue ;
    
    (tokenAhead == 1 || (Lex(), TRACE_LEX(1)));
    if ( !SEE_TOKEN(INLINE, "inline") || !(CommTerm(), 1) ) {
        TOKEN_EXIT(inline_namespace_exit, "inline");
    } else {
        tokenAhead =  0 ;
    }
    {
        PPTREE  _ptTree0 = 0 ;
        {
            PPTREE  _ptTree1 = 0, _ptRes1 = 0 ;
            _ptRes1 =  MakeTree(INLINE_NAMESPACE, 1);
            if ( (_ptTree1 = NQUICK_CALL(_Tak(name_space)(error_free), 98, cplus)) == (PPTREE) -1 ) {
                MulFreeTree(3, _ptRes1, _ptTree1, _ptTree0);
                PROG_EXIT(inline_namespace_exit, "inline_namespace");
            }
            ReplaceTree(_ptRes1, 1, _ptTree1);
            _ptTree0 =  _ptRes1 ;
        }
        _retValue =  _ptTree0 ;
        goto inline_namespace_ret ;
    }
    (tokenAhead || (LexComment(), tokenAhead =  -1, TRACE_LEX(1)));
    if ( _nbPre || listComm ) 
        AddComm(_ptPreComm, _nbPre, (PPTREE)0, lastTree);
    else {
        _lastTree =  (PPTREE)0 ;
        _funcLevel-- ;
    }
    return (PPTREE)0 ;
inline_namespace_exit : 
    _Debug = TRACE_RULE("inline_namespace", TRACE_EXIT, (PPTREE)0);
    _funcLevel-- ;
    return (PPTREE) -1 ;
inline_namespace_ret : 
    _Debug = TRACE_RULE("inline_namespace", TRACE_RETURN, _retValue);
    (tokenAhead || (LexComment(), tokenAhead =  -1, TRACE_LEX(1)));
    if ( _nbPre || listComm ) 
        AddComm(_ptPreComm, _nbPre, _retValue, lastTree);
    else {
        _lastTree =  _retValue ;
        _funcLevel-- ;
    }
    return _retValue ;
}

PPTREE cplus::inside_declaration ( int error_free )
{
    PFILE_POSITION  _filePosition = (PFILE_POSITION)0 ;
    int             _value, _nbPre = 0 ;
    PCOMM_ELEM      _ptPreComm = ((tokenAhead || (LexComment(), tokenAhead =  -1, TRACE_LEX(1))), listComm ? LookComm(&_nbPre) : (_funcLevel++, (PCOMM_ELEM)0));
    int             _Debug = TRACE_RULE("inside_declaration", TRACE_ENTER, (PPTREE)0);
    PPTREE          lastTree = _lastTree, _retValue ;
    PPTREE          retTree = (PPTREE)0 ;
    
    if ( !NPUSH_CALL_AFF_VERIF(retTree = , _Tak(inside_declaration_extension), 86, cplus)
            && !NPUSH_CALL_AFF_VERIF(retTree = , _Tak(ext_all), 64, cplus)
            && !NPUSH_CALL_AFF_VERIF(retTree = , _Tak(inside_declaration1), 84, cplus)
            && !NPUSH_CALL_AFF_VERIF(retTree = , _Tak(inside_declaration2), 85, cplus) ) {
        MulFreeTree(1, retTree);
        LEX_EXIT("", 0);
        goto inside_declaration_exit ;
    }
    {
        _retValue =  retTree ;
        goto inside_declaration_ret ;
    }
    (tokenAhead || (LexComment(), tokenAhead =  -1, TRACE_LEX(1)));
    if ( _nbPre || listComm ) 
        AddComm(_ptPreComm, _nbPre, (PPTREE)0, lastTree);
    else {
        _lastTree =  (PPTREE)0 ;
        _funcLevel-- ;
    }
    return (PPTREE)0 ;
inside_declaration_exit : 
    _Debug = TRACE_RULE("inside_declaration", TRACE_EXIT, (PPTREE)0);
    _funcLevel-- ;
    return (PPTREE) -1 ;
inside_declaration_ret : 
    _Debug = TRACE_RULE("inside_declaration", TRACE_RETURN, _retValue);
    (tokenAhead || (LexComment(), tokenAhead =  -1, TRACE_LEX(1)));
    if ( _nbPre || listComm ) 
        AddComm(_ptPreComm, _nbPre, _retValue, lastTree);
    else {
        _lastTree =  _retValue ;
        _funcLevel-- ;
    }
    return _retValue ;
}

PPTREE cplus::inside_declaration1 ( int error_free )
{
    PFILE_POSITION  _filePosition = (PFILE_POSITION)0 ;
    int             _value, _nbPre = 0 ;
    PCOMM_ELEM      _ptPreComm = ((tokenAhead || (LexComment(), tokenAhead =  -1, TRACE_LEX(1))), listComm ? LookComm(&_nbPre) : (_funcLevel++, (PCOMM_ELEM)0));
    int             _Debug = TRACE_RULE("inside_declaration1", TRACE_ENTER, (PPTREE)0);
    PPTREE          lastTree = _lastTree, _retValue ;
    PPTREE          otherTree = (PPTREE)0, list = (PPTREE)0 ;
    
    {
        PPTREE  _ptTree0 = 0, _ptRes0 = 0 ;
        _ptRes0 =  MakeTree(DECLARATION, 3);
        if ( (_ptTree0 = NQUICK_CALL(_Tak(type_specifier)(error_free), 145, cplus)) == (PPTREE) -1 ) {
            MulFreeTree(4, _ptRes0, _ptTree0, list, otherTree);
            PROG_EXIT(inside_declaration1_exit, "inside_declaration1");
        }
        ReplaceTree(_ptRes0, 2, _ptTree0);
        otherTree =  _ptRes0 ;
    }
    {
        PPTREE  _ptTree0 = 0 ;
        if ( (_ptTree0 = NQUICK_CALL(_Tak(bit_field_decl)(error_free), 20, cplus)) == (PPTREE) -1 ) {
            MulFreeTree(3, _ptTree0, list, otherTree);
            PROG_EXIT(inside_declaration1_exit, "inside_declaration1");
        }
        list =  AddList(list, _ptTree0);
    }
    (tokenAhead == 1 || (Lex(), TRACE_LEX(1)));
    if ( !SEE_TOKEN(PVIR, ";") || !(CommTerm(), 1) ) {
        MulFreeTree(2, list, otherTree);
        TOKEN_EXIT(inside_declaration1_exit, ";");
    } else {
        tokenAhead =  0 ;
    }
    {
        PPTREE  _ptTree0 = 0 ;
        _ptTree0  =  ReplaceTree(otherTree, 3, list);
        _retValue =  _ptTree0 ;
        goto inside_declaration1_ret ;
    }
    (tokenAhead || (LexComment(), tokenAhead =  -1, TRACE_LEX(1)));
    if ( _nbPre || listComm ) 
        AddComm(_ptPreComm, _nbPre, (PPTREE)0, lastTree);
    else {
        _lastTree =  (PPTREE)0 ;
        _funcLevel-- ;
    }
    return (PPTREE)0 ;
inside_declaration1_exit : 
    _Debug = TRACE_RULE("inside_declaration1", TRACE_EXIT, (PPTREE)0);
    _funcLevel-- ;
    return (PPTREE) -1 ;
inside_declaration1_ret : 
    _Debug = TRACE_RULE("inside_declaration1", TRACE_RETURN, _retValue);
    (tokenAhead || (LexComment(), tokenAhead =  -1, TRACE_LEX(1)));
    if ( _nbPre || listComm ) 
        AddComm(_ptPreComm, _nbPre, _retValue, lastTree);
    else {
        _lastTree =  _retValue ;
        _funcLevel-- ;
    }
    return _retValue ;
}

PPTREE cplus::inside_declaration2 ( int error_free )
{
    PFILE_POSITION  _filePosition = (PFILE_POSITION)0 ;
    int             _value, _nbPre = 0 ;
    PCOMM_ELEM      _ptPreComm = ((tokenAhead || (LexComment(), tokenAhead =  -1, TRACE_LEX(1))), listComm ? LookComm(&_nbPre) : (_funcLevel++, (PCOMM_ELEM)0));
    int             _Debug = TRACE_RULE("inside_declaration2", TRACE_ENTER, (PPTREE)0);
    PPTREE          lastTree = _lastTree, _retValue ;
    PPTREE          otherTree = (PPTREE)0, list = (PPTREE)0 ;
    
    {
        PPTREE  _ptRes0 = 0 ;
        _ptRes0   =  MakeTree(DECLARATION, 3);
        otherTree =  _ptRes0 ;
    }
    {
        PPTREE  _ptTree0 = 0 ;
        if ( (_ptTree0 = NQUICK_CALL(_Tak(bit_field_decl)(error_free), 20, cplus)) == (PPTREE) -1 ) {
            MulFreeTree(3, _ptTree0, list, otherTree);
            PROG_EXIT(inside_declaration2_exit, "inside_declaration2");
        }
        list =  AddList(list, _ptTree0);
    }
    (tokenAhead == 1 || (Lex(), TRACE_LEX(1)));
    if ( !SEE_TOKEN(PVIR, ";") || !(CommTerm(), 1) ) {
        MulFreeTree(2, list, otherTree);
        TOKEN_EXIT(inside_declaration2_exit, ";");
    } else {
        tokenAhead =  0 ;
    }
    {
        PPTREE  _ptTree0 = 0 ;
        _ptTree0  =  ReplaceTree(otherTree, 3, list);
        _retValue =  _ptTree0 ;
        goto inside_declaration2_ret ;
    }
    (tokenAhead || (LexComment(), tokenAhead =  -1, TRACE_LEX(1)));
    if ( _nbPre || listComm ) 
        AddComm(_ptPreComm, _nbPre, (PPTREE)0, lastTree);
    else {
        _lastTree =  (PPTREE)0 ;
        _funcLevel-- ;
    }
    return (PPTREE)0 ;
inside_declaration2_exit : 
    _Debug = TRACE_RULE("inside_declaration2", TRACE_EXIT, (PPTREE)0);
    _funcLevel-- ;
    return (PPTREE) -1 ;
inside_declaration2_ret : 
    _Debug = TRACE_RULE("inside_declaration2", TRACE_RETURN, _retValue);
    (tokenAhead || (LexComment(), tokenAhead =  -1, TRACE_LEX(1)));
    if ( _nbPre || listComm ) 
        AddComm(_ptPreComm, _nbPre, _retValue, lastTree);
    else {
        _lastTree =  _retValue ;
        _funcLevel-- ;
    }
    return _retValue ;
}

PPTREE cplus::inside_declaration_extension ( int error_free )
{
    PFILE_POSITION  _filePosition = (PFILE_POSITION)0 ;
    int             _value, _nbPre = 0 ;
    PCOMM_ELEM      _ptPreComm = ((tokenAhead || (LexComment(), tokenAhead =  -1, TRACE_LEX(1))), listComm ? LookComm(&_nbPre) : (_funcLevel++, (PCOMM_ELEM)0));
    int             _Debug = TRACE_RULE("inside_declaration_extension", TRACE_ENTER, (PPTREE)0);
    PPTREE          lastTree = _lastTree, _retValue ;
    
    LEX_EXIT("", 0);
    goto inside_declaration_extension_exit ;
    (tokenAhead || (LexComment(), tokenAhead =  -1, TRACE_LEX(1)));
    if ( _nbPre || listComm ) 
        AddComm(_ptPreComm, _nbPre, (PPTREE)0, lastTree);
    else {
        _lastTree =  (PPTREE)0 ;
        _funcLevel-- ;
    }
    return (PPTREE)0 ;
inside_declaration_extension_exit : 
    _Debug = TRACE_RULE("inside_declaration_extension", TRACE_EXIT, (PPTREE)0);
    _funcLevel-- ;
    return (PPTREE) -1 ;
inside_declaration_extension_ret : 
    _Debug = TRACE_RULE("inside_declaration_extension", TRACE_RETURN, _retValue);
    (tokenAhead || (LexComment(), tokenAhead =  -1, TRACE_LEX(1)));
    if ( _nbPre || listComm ) 
        AddComm(_ptPreComm, _nbPre, _retValue, lastTree);
    else {
        _lastTree =  _retValue ;
        _funcLevel-- ;
    }
    return _retValue ;
}

PPTREE cplus::label_beg ( int error_free )
{
    PFILE_POSITION  _filePosition = (PFILE_POSITION)0 ;
    int             _value, _nbPre = 0 ;
    PCOMM_ELEM      _ptPreComm = ((tokenAhead || (LexComment(), tokenAhead =  -1, TRACE_LEX(1))), listComm ? LookComm(&_nbPre) : (_funcLevel++, (PCOMM_ELEM)0));
    int             _Debug = TRACE_RULE("label_beg", TRACE_ENTER, (PPTREE)0);
    PPTREE          lastTree = _lastTree, _retValue ;
    
    (tokenAhead == 1 || (Lex(), TRACE_LEX(1)));
    if ( !TERM_OR_META(IDENT, "IDENT") || !(CommTerm(), 1) ) {
        TOKEN_EXIT(label_beg_exit, "IDENT");
    } else {
        tokenAhead =  0 ;
    }
    (tokenAhead == 1 || (Lex(), TRACE_LEX(1)));
    if ( !SEE_TOKEN(DPOI, ":") || !(CommTerm(), 1) ) {
        TOKEN_EXIT(label_beg_exit, ":");
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
label_beg_exit : 
    _Debug = TRACE_RULE("label_beg", TRACE_EXIT, (PPTREE)0);
    _funcLevel-- ;
    return (PPTREE) -1 ;
label_beg_ret : 
    _Debug = TRACE_RULE("label_beg", TRACE_RETURN, _retValue);
    (tokenAhead || (LexComment(), tokenAhead =  -1, TRACE_LEX(1)));
    if ( _nbPre || listComm ) 
        AddComm(_ptPreComm, _nbPre, _retValue, lastTree);
    else {
        _lastTree =  _retValue ;
        _funcLevel-- ;
    }
    return _retValue ;
}

PPTREE cplus::linkage_specification ( int error_free )
{
    PFILE_POSITION  _filePosition = (PFILE_POSITION)0 ;
    int             _value, _nbPre = 0 ;
    PCOMM_ELEM      _ptPreComm = ((tokenAhead || (LexComment(), tokenAhead =  -1, TRACE_LEX(1))), listComm ? LookComm(&_nbPre) : (_funcLevel++, (PCOMM_ELEM)0));
    int             _Debug = TRACE_RULE("linkage_specification", TRACE_ENTER, (PPTREE)0);
    PPTREE          lastTree = _lastTree, _retValue ;
    PPTREE          _addlist1 = (PPTREE)0 ;
    PPTREE          retTree = (PPTREE)0, list = (PPTREE)0, declaration = (PPTREE)0 ;
    
    (tokenAhead == 1 || (Lex(), TRACE_LEX(1)));
    if ( !SEE_TOKEN(EXTERN, "extern") || !(CommTerm(), 1) ) {
        MulFreeTree(4, _addlist1, declaration, list, retTree);
        TOKEN_EXIT(linkage_specification_exit, "extern");
    } else {
        tokenAhead =  0 ;
    }
    {
        PPTREE  _ptTree0 = 0, _ptRes0 = 0 ;
        _ptRes0 =  MakeTree(EXTERNAL, 2);
        {
            PPTREE  _ptTree1 = 0, _ptRes1 = 0 ;
            _ptRes1 =  MakeTree(STRING, 1);
            (tokenAhead == 1 || (Lex(), TRACE_LEX(1)));
            if ( !TERM_OR_META(STRING, "STRING") || !BUILD_TERM_META(_ptTree1) ) {
                MulFreeTree(8, _ptRes1, _ptTree1, _ptRes0, _ptTree0, _addlist1, declaration, list, retTree);
                TOKEN_EXIT(linkage_specification_exit, "STRING");
            } else {
                tokenAhead =  0 ;
            }
            ReplaceTree(_ptRes1, 1, _ptTree1);
            _ptTree0 =  _ptRes1 ;
        }
        ReplaceTree(_ptRes0, 1, _ptTree0);
        retTree =  _ptRes0 ;
    }
    (tokenAhead == 1 || (Lex(), TRACE_LEX(1)));
    switch ( lexEl.Value ) {
        case AOUV : 
            tokenAhead = 0 ;
            CommTerm();
            _addlist1 = list ;
            while ( NPUSH_CALL_AFF_VERIF(declaration = , _Tak(ext_all), 64, cplus) ) {
                _addlist1 =  AddList(_addlist1, declaration);
                if ( list ) {
                    _addlist1 =  SonTree(_addlist1, 2);
                } else {
                    list =  _addlist1 ;
                }
            }
            (tokenAhead == 1 || (Lex(), TRACE_LEX(1)));
            if ( !SEE_TOKEN(AFER, "}") || !(CommTerm(), 1) ) {
                MulFreeTree(4, _addlist1, declaration, list, retTree);
                TOKEN_EXIT(linkage_specification_exit, "}");
            } else {
                tokenAhead =  0 ;
            }
            {
                PPTREE  _ptTree0 = 0 ;
                {
                    PPTREE  _ptTree1 = 0 ;
                    {
                        PPTREE  _ptRes2 = 0 ;
                        _ptRes2 =  MakeTree(COMPOUND_EXT, 1);
                        ReplaceTree(_ptRes2, 1, list);
                        _ptTree1 =  _ptRes2 ;
                    }
                    _ptTree0 =  ReplaceTree(retTree, 2, _ptTree1);
                }
                _retValue =  _ptTree0 ;
                goto linkage_specification_ret ;
            }
            break ;
        default : 
            {
                PPTREE  _ptTree0 = 0 ;
                {
                    PPTREE  _ptTree1 = 0 ;
                    if ( (_ptTree1 = NQUICK_CALL(_Tak(ext_all)(error_free), 64, cplus)) == (PPTREE) -1 ) {
                        MulFreeTree(6, _ptTree1, _ptTree0, _addlist1, declaration, list, retTree);
                        PROG_EXIT(linkage_specification_exit, "linkage_specification");
                    }
                    _ptTree0 =  ReplaceTree(retTree, 2, _ptTree1);
                }
                _retValue =  _ptTree0 ;
                goto linkage_specification_ret ;
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
linkage_specification_exit : 
    _Debug = TRACE_RULE("linkage_specification", TRACE_EXIT, (PPTREE)0);
    _funcLevel-- ;
    return (PPTREE) -1 ;
linkage_specification_ret : 
    _Debug = TRACE_RULE("linkage_specification", TRACE_RETURN, _retValue);
    (tokenAhead || (LexComment(), tokenAhead =  -1, TRACE_LEX(1)));
    if ( _nbPre || listComm ) 
        AddComm(_ptPreComm, _nbPre, _retValue, lastTree);
    else {
        _lastTree =  _retValue ;
        _funcLevel-- ;
    }
    return _retValue ;
}

PPTREE cplus::logical_and_expression ( int error_free )
{
    PFILE_POSITION  _filePosition = (PFILE_POSITION)0 ;
    int             _value, _nbPre = 0 ;
    PCOMM_ELEM      _ptPreComm = ((tokenAhead || (LexComment(), tokenAhead =  -1, TRACE_LEX(1))), listComm ? LookComm(&_nbPre) : (_funcLevel++, (PCOMM_ELEM)0));
    int             _Debug = TRACE_RULE("logical_and_expression", TRACE_ENTER, (PPTREE)0);
    PPTREE          lastTree = _lastTree, _retValue ;
    PPTREE          expTree = (PPTREE)0 ;
    
    if ( (expTree = NQUICK_CALL(_Tak(inclusive_or_expression)(error_free), 80, cplus)) == (PPTREE) -1 ) {
        MulFreeTree(1, expTree);
        PROG_EXIT(logical_and_expression_exit, "logical_and_expression");
    }
    while ( (tokenAhead == 1 || (Lex(), TRACE_LEX(1))) && SEE_TOKEN(ETCOETCO, "&&") && ((tokenAhead = 0), CommTerm(), 1) ) {
        {
            PPTREE  _ptTree0 = 0, _ptRes0 = 0 ;
            _ptRes0 =  MakeTree(AND, 2);
            ReplaceTree(_ptRes0, 1, expTree);
            if ( (_ptTree0 = NQUICK_CALL(_Tak(inclusive_or_expression)(error_free), 80, cplus)) == (PPTREE) -1 ) {
                MulFreeTree(3, _ptRes0, _ptTree0, expTree);
                PROG_EXIT(logical_and_expression_exit, "logical_and_expression");
            }
            ReplaceTree(_ptRes0, 2, _ptTree0);
            expTree =  _ptRes0 ;
        }
    }
    {
        _retValue =  expTree ;
        goto logical_and_expression_ret ;
    }
    (tokenAhead || (LexComment(), tokenAhead =  -1, TRACE_LEX(1)));
    if ( _nbPre || listComm ) 
        AddComm(_ptPreComm, _nbPre, (PPTREE)0, lastTree);
    else {
        _lastTree =  (PPTREE)0 ;
        _funcLevel-- ;
    }
    return (PPTREE)0 ;
logical_and_expression_exit : 
    _Debug = TRACE_RULE("logical_and_expression", TRACE_EXIT, (PPTREE)0);
    _funcLevel-- ;
    return (PPTREE) -1 ;
logical_and_expression_ret : 
    _Debug = TRACE_RULE("logical_and_expression", TRACE_RETURN, _retValue);
    (tokenAhead || (LexComment(), tokenAhead =  -1, TRACE_LEX(1)));
    if ( _nbPre || listComm ) 
        AddComm(_ptPreComm, _nbPre, _retValue, lastTree);
    else {
        _lastTree =  _retValue ;
        _funcLevel-- ;
    }
    return _retValue ;
}

PPTREE cplus::logical_or_expression ( int error_free )
{
    PFILE_POSITION  _filePosition = (PFILE_POSITION)0 ;
    int             _value, _nbPre = 0 ;
    PCOMM_ELEM      _ptPreComm = ((tokenAhead || (LexComment(), tokenAhead =  -1, TRACE_LEX(1))), listComm ? LookComm(&_nbPre) : (_funcLevel++, (PCOMM_ELEM)0));
    int             _Debug = TRACE_RULE("logical_or_expression", TRACE_ENTER, (PPTREE)0);
    PPTREE          lastTree = _lastTree, _retValue ;
    PPTREE          expTree = (PPTREE)0 ;
    
    if ( (expTree = NQUICK_CALL(_Tak(logical_and_expression)(error_free), 89, cplus)) == (PPTREE) -1 ) {
        MulFreeTree(1, expTree);
        PROG_EXIT(logical_or_expression_exit, "logical_or_expression");
    }
    while ( (tokenAhead == 1 || (Lex(), TRACE_LEX(1))) && SEE_TOKEN(VBARVBAR, "||") && ((tokenAhead = 0), CommTerm(), 1) ) {
        {
            PPTREE  _ptTree0 = 0, _ptRes0 = 0 ;
            _ptRes0 =  MakeTree(OR, 2);
            ReplaceTree(_ptRes0, 1, expTree);
            if ( (_ptTree0 = NQUICK_CALL(_Tak(logical_and_expression)(error_free), 89, cplus)) == (PPTREE) -1 ) {
                MulFreeTree(3, _ptRes0, _ptTree0, expTree);
                PROG_EXIT(logical_or_expression_exit, "logical_or_expression");
            }
            ReplaceTree(_ptRes0, 2, _ptTree0);
            expTree =  _ptRes0 ;
        }
    }
    {
        _retValue =  expTree ;
        goto logical_or_expression_ret ;
    }
    (tokenAhead || (LexComment(), tokenAhead =  -1, TRACE_LEX(1)));
    if ( _nbPre || listComm ) 
        AddComm(_ptPreComm, _nbPre, (PPTREE)0, lastTree);
    else {
        _lastTree =  (PPTREE)0 ;
        _funcLevel-- ;
    }
    return (PPTREE)0 ;
logical_or_expression_exit : 
    _Debug = TRACE_RULE("logical_or_expression", TRACE_EXIT, (PPTREE)0);
    _funcLevel-- ;
    return (PPTREE) -1 ;
logical_or_expression_ret : 
    _Debug = TRACE_RULE("logical_or_expression", TRACE_RETURN, _retValue);
    (tokenAhead || (LexComment(), tokenAhead =  -1, TRACE_LEX(1)));
    if ( _nbPre || listComm ) 
        AddComm(_ptPreComm, _nbPre, _retValue, lastTree);
    else {
        _lastTree =  _retValue ;
        _funcLevel-- ;
    }
    return _retValue ;
}

PPTREE cplus::long_short_int_char ( int error_free )
{
    PFILE_POSITION  _filePosition = (PFILE_POSITION)0 ;
    int             _value, _nbPre = 0 ;
    PCOMM_ELEM      _ptPreComm = ((tokenAhead || (LexComment(), tokenAhead =  -1, TRACE_LEX(1))), listComm ? LookComm(&_nbPre) : (_funcLevel++, (PCOMM_ELEM)0));
    int             _Debug = TRACE_RULE("long_short_int_char", TRACE_ENTER, (PPTREE)0);
    PPTREE          lastTree = _lastTree, _retValue ;
    
    (tokenAhead == 1 || (Lex(), TRACE_LEX(1)));
    switch ( lexEl.Value ) {
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
                goto long_short_int_char_ret ;
            }
            break ;
        case LONG : 
            tokenAhead = 0 ;
            CommTerm();
            (tokenAhead == 1 || (Lex(), TRACE_LEX(1)));
            switch ( lexEl.Value ) {
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
                        goto long_short_int_char_ret ;
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
                        goto long_short_int_char_ret ;
                    }
                    break ;
            }
            break ;
        case SHORT : 
            tokenAhead = 0 ;
            CommTerm();
            (tokenAhead == 1 || (Lex(), TRACE_LEX(1)));
            switch ( lexEl.Value ) {
                case INT : 
                    tokenAhead = 0 ;
                    CommTerm();
                    {
                        PPTREE  _ptTree0 = 0 ;
                        {
                            PPTREE  _ptTree1 = 0, _ptRes1 = 0 ;
                            _ptRes1 =  MakeTree(TSHORT, 1);
                            {
                                PPTREE  _ptRes2 = 0 ;
                                _ptRes2  =  MakeTree(TINT, 0);
                                _ptTree1 =  _ptRes2 ;
                            }
                            ReplaceTree(_ptRes1, 1, _ptTree1);
                            _ptTree0 =  _ptRes1 ;
                        }
                        _retValue =  _ptTree0 ;
                        goto long_short_int_char_ret ;
                    }
                    break ;
                default : 
                    {
                        PPTREE  _ptTree0 = 0 ;
                        {
                            PPTREE  _ptRes1 = 0 ;
                            _ptRes1  =  MakeTree(TSHORT, 1);
                            _ptTree0 =  _ptRes1 ;
                        }
                        _retValue =  _ptTree0 ;
                        goto long_short_int_char_ret ;
                    }
                    break ;
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
                goto long_short_int_char_ret ;
            }
            break ;
        default : 
            CASE_EXIT(long_short_int_char_exit, "either int or long or short or char");
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
long_short_int_char_exit : 
    _Debug = TRACE_RULE("long_short_int_char", TRACE_EXIT, (PPTREE)0);
    _funcLevel-- ;
    return (PPTREE) -1 ;
long_short_int_char_ret : 
    _Debug = TRACE_RULE("long_short_int_char", TRACE_RETURN, _retValue);
    (tokenAhead || (LexComment(), tokenAhead =  -1, TRACE_LEX(1)));
    if ( _nbPre || listComm ) 
        AddComm(_ptPreComm, _nbPre, _retValue, lastTree);
    else {
        _lastTree =  _retValue ;
        _funcLevel-- ;
    }
    return _retValue ;
}

PPTREE cplus::macro ( int error_free )
{
    PFILE_POSITION  _filePosition = (PFILE_POSITION)0 ;
    int             _value, _nbPre = 0 ;
    PCOMM_ELEM      _ptPreComm = ((tokenAhead || (LexComment(), tokenAhead =  -1, TRACE_LEX(1))), listComm ? LookComm(&_nbPre) : (_funcLevel++, (PCOMM_ELEM)0));
    int             _Debug = TRACE_RULE("macro", TRACE_ENTER, (PPTREE)0);
    PPTREE          lastTree = _lastTree, _retValue ;
    PPTREE          retTree = (PPTREE)0, valTree = (PPTREE)0 ;
    
    (tokenAhead == 13 || (specific(), TRACE_LEX(1)));
    switch ( lexEl.Value ) {
        case META : 
        case DECLARE_SERIAL : 
            tokenAhead = 0 ;
            CommTerm();
            {
                PPTREE  _ptRes0 = 0 ;
                _ptRes0 =  MakeTree(IDENT, 1);
                ReplaceTree(_ptRes0, 1, MakeString("DECLARE_SERIAL"));
                retTree =  _ptRes0 ;
            }
            break ;
        case DECLARE_DYNAMIC : 
            tokenAhead = 0 ;
            CommTerm();
            {
                PPTREE  _ptRes0 = 0 ;
                _ptRes0 =  MakeTree(IDENT, 1);
                ReplaceTree(_ptRes0, 1, MakeString("DECLARE_DYNAMIC"));
                retTree =  _ptRes0 ;
            }
            break ;
        case DECLARE_MESSAGE_MAP : 
            tokenAhead = 0 ;
            CommTerm();
            {
                PPTREE  _ptRes0 = 0 ;
                _ptRes0 =  MakeTree(IDENT, 1);
                ReplaceTree(_ptRes0, 1, MakeString("DECLARE_MESSAGE_MAP"));
                retTree =  _ptRes0 ;
            }
            break ;
        case IMPLEMENT_DYNAMIC : 
            tokenAhead = 0 ;
            CommTerm();
            {
                PPTREE  _ptRes0 = 0 ;
                _ptRes0 =  MakeTree(IDENT, 1);
                ReplaceTree(_ptRes0, 1, MakeString("IMPLEMENT_DYNAMIC"));
                retTree =  _ptRes0 ;
            }
            break ;
        case IMPLEMENT_DYNCREATE : 
            tokenAhead = 0 ;
            CommTerm();
            {
                PPTREE  _ptRes0 = 0 ;
                _ptRes0 =  MakeTree(IDENT, 1);
                ReplaceTree(_ptRes0, 1, MakeString("IMPLEMENT_DYNCREATE"));
                retTree =  _ptRes0 ;
            }
            break ;
        case IMPLEMENT_SERIAL : 
            tokenAhead = 0 ;
            CommTerm();
            {
                PPTREE  _ptRes0 = 0 ;
                _ptRes0 =  MakeTree(IDENT, 1);
                ReplaceTree(_ptRes0, 1, MakeString("IMPLEMENT_SERIAL"));
                retTree =  _ptRes0 ;
            }
            break ;
        case BEGIN_MESSAGE_MAP : 
            tokenAhead = 0 ;
            CommTerm();
            {
                PPTREE  _ptRes0 = 0 ;
                _ptRes0 =  MakeTree(IDENT, 1);
                ReplaceTree(_ptRes0, 1, MakeString("BEGIN_MESSAGE_MAP"));
                retTree =  _ptRes0 ;
            }
            break ;
        case END_MESSAGE_MAP : 
            tokenAhead = 0 ;
            CommTerm();
            {
                PPTREE  _ptRes0 = 0 ;
                _ptRes0 =  MakeTree(IDENT, 1);
                ReplaceTree(_ptRes0, 1, MakeString("END_MESSAGE_MAP"));
                retTree =  _ptRes0 ;
            }
            break ;
        case CATCH_UPPER : 
            tokenAhead = 0 ;
            CommTerm();
            {
                PPTREE  _ptRes0 = 0 ;
                _ptRes0 =  MakeTree(IDENT, 1);
                ReplaceTree(_ptRes0, 1, MakeString("CATCH"));
                retTree =  _ptRes0 ;
            }
            break ;
        case CATCH_ALL : 
            tokenAhead = 0 ;
            CommTerm();
            {
                PPTREE  _ptRes0 = 0 ;
                _ptRes0 =  MakeTree(IDENT, 1);
                ReplaceTree(_ptRes0, 1, MakeString("CATCH_ALL"));
                retTree =  _ptRes0 ;
            }
            break ;
        case AND_CATCH : 
            tokenAhead = 0 ;
            CommTerm();
            {
                PPTREE  _ptRes0 = 0 ;
                _ptRes0 =  MakeTree(IDENT, 1);
                ReplaceTree(_ptRes0, 1, MakeString("AND_CATCH"));
                retTree =  _ptRes0 ;
            }
            break ;
        default : 
            MulFreeTree(2, retTree, valTree);
            LEX_EXIT("", 0);
            goto macro_exit ;
            break ;
    }
    {
        PPTREE  _ptRes0 = 0 ;
        _ptRes0 =  MakeTree(MACRO, 2);
        ReplaceTree(_ptRes0, 1, retTree);
        retTree =  _ptRes0 ;
    }
    (tokenAhead == 1 || (Lex(), TRACE_LEX(1)));
    if ( !SEE_TOKEN(POUV, "(") || !(CommTerm(), 1) ) {
        MulFreeTree(2, retTree, valTree);
        TOKEN_EXIT(macro_exit, "(");
    } else {
        tokenAhead =  0 ;
    }
    if ( NPUSH_CALL_AFF_VERIF(valTree = , _Tak(expression), 62, cplus) ) {
        ReplaceTree(retTree, 2, valTree);
    }
    (tokenAhead == 1 || (Lex(), TRACE_LEX(1)));
    if ( !SEE_TOKEN(PFER, ")") || !(CommTerm(), 1) ) {
        MulFreeTree(2, retTree, valTree);
        TOKEN_EXIT(macro_exit, ")");
    } else {
        tokenAhead =  0 ;
    }
    if ( (tokenAhead == 1 || (Lex(), TRACE_LEX(1))) && SEE_TOKEN(PVIR, ";") && ((tokenAhead = 0), CommTerm(), 1) ) {}
    {
        _retValue =  retTree ;
        goto macro_ret ;
    }
    (tokenAhead || (LexComment(), tokenAhead =  -1, TRACE_LEX(1)));
    if ( _nbPre || listComm ) 
        AddComm(_ptPreComm, _nbPre, (PPTREE)0, lastTree);
    else {
        _lastTree =  (PPTREE)0 ;
        _funcLevel-- ;
    }
    return (PPTREE)0 ;
macro_exit : 
    _Debug = TRACE_RULE("macro", TRACE_EXIT, (PPTREE)0);
    _funcLevel-- ;
    return (PPTREE) -1 ;
macro_ret : 
    _Debug = TRACE_RULE("macro", TRACE_RETURN, _retValue);
    (tokenAhead || (LexComment(), tokenAhead =  -1, TRACE_LEX(1)));
    if ( _nbPre || listComm ) 
        AddComm(_ptPreComm, _nbPre, _retValue, lastTree);
    else {
        _lastTree =  _retValue ;
        _funcLevel-- ;
    }
    return _retValue ;
}

PPTREE cplus::macro_extended ( int error_free )
{
    PFILE_POSITION  _filePosition = (PFILE_POSITION)0 ;
    int             _value, _nbPre = 0 ;
    PCOMM_ELEM      _ptPreComm = ((tokenAhead || (LexComment(), tokenAhead =  -1, TRACE_LEX(1))), listComm ? LookComm(&_nbPre) : (_funcLevel++, (PCOMM_ELEM)0));
    int             _Debug = TRACE_RULE("macro_extended", TRACE_ENTER, (PPTREE)0);
    PPTREE          lastTree = _lastTree, _retValue ;
    PPTREE          retTree = (PPTREE)0, valTree = (PPTREE)0 ;
    
    if ( (tokenAhead == 13 || (specific(), TRACE_LEX(1))) && TERM_OR_META(DECLARE_SERIAL, "DECLARE_SERIAL") && ((tokenAhead = 0), CommTerm(), 1) ) {
        {
            PPTREE  _ptRes0 = 0 ;
            _ptRes0 =  MakeTree(IDENT, 1);
            ReplaceTree(_ptRes0, 1, MakeString("DECLARE_SERIAL"));
            retTree =  _ptRes0 ;
        }
    } else if ( (tokenAhead == 13 || (specific(), TRACE_LEX(1))) && TERM_OR_META(IMPLEMENT_DYNAMIC, "IMPLEMENT_DYNAMIC") && ((tokenAhead = 0), CommTerm(), 1) ) {
        {
            PPTREE  _ptRes0 = 0 ;
            _ptRes0 =  MakeTree(IDENT, 1);
            ReplaceTree(_ptRes0, 1, MakeString("IMPLEMENT_DYNAMIC"));
            retTree =  _ptRes0 ;
        }
    } else if ( (tokenAhead == 13 || (specific(), TRACE_LEX(1))) && TERM_OR_META(IMPLEMENT_DYNCREATE, "IMPLEMENT_DYNCREATE") && ((tokenAhead = 0), CommTerm(), 1) ) {
        {
            PPTREE  _ptRes0 = 0 ;
            _ptRes0 =  MakeTree(IDENT, 1);
            ReplaceTree(_ptRes0, 1, MakeString("IMPLEMENT_DYNCREATE"));
            retTree =  _ptRes0 ;
        }
    } else if ( (tokenAhead == 13 || (specific(), TRACE_LEX(1))) && TERM_OR_META(IMPLEMENT_SERIAL, "IMPLEMENT_SERIAL") && ((tokenAhead = 0), CommTerm(), 1) ) {
        {
            PPTREE  _ptRes0 = 0 ;
            _ptRes0 =  MakeTree(IDENT, 1);
            ReplaceTree(_ptRes0, 1, MakeString("IMPLEMENT_SERIAL"));
            retTree =  _ptRes0 ;
        }
    } else if ( (tokenAhead == 13 || (specific(), TRACE_LEX(1))) && TERM_OR_META(DECLARE_DYNAMIC, "DECLARE_DYNAMIC") && ((tokenAhead = 0), CommTerm(), 1) ) {
        {
            PPTREE  _ptRes0 = 0 ;
            _ptRes0 =  MakeTree(IDENT, 1);
            ReplaceTree(_ptRes0, 1, MakeString("DECLARE_DYNAMIC"));
            retTree =  _ptRes0 ;
        }
    } else if ( (tokenAhead == 13 || (specific(), TRACE_LEX(1))) && TERM_OR_META(BEGIN_MESSAGE_MAP, "BEGIN_MESSAGE_MAP") && ((tokenAhead = 0), CommTerm(), 1) ) {
        {
            PPTREE  _ptRes0 = 0 ;
            _ptRes0 =  MakeTree(IDENT, 1);
            ReplaceTree(_ptRes0, 1, MakeString("BEGIN_MESSAGE_MAP"));
            retTree =  _ptRes0 ;
        }
    } else if ( (tokenAhead == 13 || (specific(), TRACE_LEX(1))) && TERM_OR_META(CATCH_UPPER, "CATCH_UPPER") && ((tokenAhead = 0), CommTerm(), 1) ) {
        {
            PPTREE  _ptRes0 = 0 ;
            _ptRes0 =  MakeTree(IDENT, 1);
            ReplaceTree(_ptRes0, 1, MakeString("CATCH"));
            retTree =  _ptRes0 ;
        }
    } else if ( (tokenAhead == 13 || (specific(), TRACE_LEX(1))) && TERM_OR_META(CATCH_ALL, "CATCH_ALL") && ((tokenAhead = 0), CommTerm(), 1) ) {
        {
            PPTREE  _ptRes0 = 0 ;
            _ptRes0 =  MakeTree(IDENT, 1);
            ReplaceTree(_ptRes0, 1, MakeString("CATCH_ALL"));
            retTree =  _ptRes0 ;
        }
    } else if ( (tokenAhead == 13 || (specific(), TRACE_LEX(1))) && TERM_OR_META(AND_CATCH, "AND_CATCH") && ((tokenAhead = 0), CommTerm(), 1) ) {
        {
            PPTREE  _ptRes0 = 0 ;
            _ptRes0 =  MakeTree(IDENT, 1);
            ReplaceTree(_ptRes0, 1, MakeString("AND_CATCH"));
            retTree =  _ptRes0 ;
        }
    } else if ( (tokenAhead == 1 || (Lex(), TRACE_LEX(1))) && SEE_TOKEN(IDENT, "IDENT") ) {
        {
            PPTREE  _ptTree0 = 0, _ptRes0 = 0 ;
            _ptRes0 =  MakeTree(IDENT, 1);
            (tokenAhead == 1 || (Lex(), TRACE_LEX(1)));
            if ( !TERM_OR_META(IDENT, "IDENT") || !BUILD_TERM_META(_ptTree0) ) {
                MulFreeTree(4, _ptRes0, _ptTree0, retTree, valTree);
                TOKEN_EXIT(macro_extended_exit, "IDENT");
            } else {
                tokenAhead =  0 ;
            }
            ReplaceTree(_ptRes0, 1, _ptTree0);
            retTree =  _ptRes0 ;
        }
    } else if ( 1 ) {
        MulFreeTree(2, retTree, valTree);
        LEX_EXIT("", 0);
        goto macro_extended_exit ;
    } else {
    }
    {
        PPTREE  _ptRes0 = 0 ;
        _ptRes0 =  MakeTree(MACRO, 2);
        ReplaceTree(_ptRes0, 1, retTree);
        retTree =  _ptRes0 ;
    }
    (tokenAhead == 1 || (Lex(), TRACE_LEX(1)));
    if ( !SEE_TOKEN(POUV, "(") || !(CommTerm(), 1) ) {
        MulFreeTree(2, retTree, valTree);
        TOKEN_EXIT(macro_extended_exit, "(");
    } else {
        tokenAhead =  0 ;
    }
    if ( NPUSH_CALL_AFF_VERIF(valTree = , _Tak(expression), 62, cplus) ) {
        ReplaceTree(retTree, 2, valTree);
    }
    (tokenAhead == 1 || (Lex(), TRACE_LEX(1)));
    if ( !SEE_TOKEN(PFER, ")") || !(CommTerm(), 1) ) {
        MulFreeTree(2, retTree, valTree);
        TOKEN_EXIT(macro_extended_exit, ")");
    } else {
        tokenAhead =  0 ;
    }
    if ( (tokenAhead == 1 || (Lex(), TRACE_LEX(1))) && SEE_TOKEN(PVIR, ";") && ((tokenAhead = 0), CommTerm(), 1) ) {}
    {
        _retValue =  retTree ;
        goto macro_extended_ret ;
    }
    (tokenAhead || (LexComment(), tokenAhead =  -1, TRACE_LEX(1)));
    if ( _nbPre || listComm ) 
        AddComm(_ptPreComm, _nbPre, (PPTREE)0, lastTree);
    else {
        _lastTree =  (PPTREE)0 ;
        _funcLevel-- ;
    }
    return (PPTREE)0 ;
macro_extended_exit : 
    _Debug = TRACE_RULE("macro_extended", TRACE_EXIT, (PPTREE)0);
    _funcLevel-- ;
    return (PPTREE) -1 ;
macro_extended_ret : 
    _Debug = TRACE_RULE("macro_extended", TRACE_RETURN, _retValue);
    (tokenAhead || (LexComment(), tokenAhead =  -1, TRACE_LEX(1)));
    if ( _nbPre || listComm ) 
        AddComm(_ptPreComm, _nbPre, _retValue, lastTree);
    else {
        _lastTree =  _retValue ;
        _funcLevel-- ;
    }
    return _retValue ;
}

PPTREE cplus::main_entry ( int error_free )
{
    PFILE_POSITION  _filePosition = (PFILE_POSITION)0 ;
    int             _value, _nbPre = 0 ;
    PCOMM_ELEM      _ptPreComm = ((tokenAhead || (LexComment(), tokenAhead =  -1, TRACE_LEX(1))), listComm ? LookComm(&_nbPre) : (_funcLevel++, (PCOMM_ELEM)0));
    int             _Debug = TRACE_RULE("main_entry", TRACE_ENTER, (PPTREE)0);
    PPTREE          lastTree = _lastTree, _retValue ;
    
    {
        PPTREE  _ptTree0 = 0 ;
        if ( (_ptTree0 = NQUICK_CALL(_Tak(program)(error_free), 113, cplus)) == (PPTREE) -1 ) {
            MulFreeTree(1, _ptTree0);
            PROG_EXIT(main_entry_exit, "main_entry");
        }
        _retValue =  _ptTree0 ;
        goto main_entry_ret ;
    }
    (tokenAhead || (LexComment(), tokenAhead =  -1, TRACE_LEX(1)));
    if ( _nbPre || listComm ) 
        AddComm(_ptPreComm, _nbPre, (PPTREE)0, lastTree);
    else {
        _lastTree =  (PPTREE)0 ;
        _funcLevel-- ;
    }
    return (PPTREE)0 ;
main_entry_exit : 
    _Debug = TRACE_RULE("main_entry", TRACE_EXIT, (PPTREE)0);
    _funcLevel-- ;
    return (PPTREE) -1 ;
main_entry_ret : 
    _Debug = TRACE_RULE("main_entry", TRACE_RETURN, _retValue);
    (tokenAhead || (LexComment(), tokenAhead =  -1, TRACE_LEX(1)));
    if ( _nbPre || listComm ) 
        AddComm(_ptPreComm, _nbPre, _retValue, lastTree);
    else {
        _lastTree =  _retValue ;
        _funcLevel-- ;
    }
    return _retValue ;
}

PPTREE cplus::member_declarator ( int error_free )
{
    PFILE_POSITION  _filePosition = (PFILE_POSITION)0 ;
    int             _value, _nbPre = 0 ;
    PCOMM_ELEM      _ptPreComm = ((tokenAhead || (LexComment(), tokenAhead =  -1, TRACE_LEX(1))), listComm ? LookComm(&_nbPre) : (_funcLevel++, (PCOMM_ELEM)0));
    int             _Debug = TRACE_RULE("member_declarator", TRACE_ENTER, (PPTREE)0);
    PPTREE          lastTree = _lastTree, _retValue ;
    PPTREE          retTree = (PPTREE)0 ;
    
    {
        PPTREE  _ptTree0 = 0, _ptRes0 = 0 ;
        _ptRes0 =  MakeTree(MEMBER_DECLARATOR, 2);
        if ( (_ptTree0 = NQUICK_CALL(_Tak(complete_class_name)(error_free), 27, cplus)) == (PPTREE) -1 ) {
            MulFreeTree(3, _ptRes0, _ptTree0, retTree);
            PROG_EXIT(member_declarator_exit, "member_declarator");
        }
        ReplaceTree(_ptRes0, 1, _ptTree0);
        retTree =  _ptRes0 ;
    }
    (tokenAhead == 1 || (Lex(), TRACE_LEX(1)));
    if ( !SEE_TOKEN(DPOIDPOI, "::") || !(CommTerm(), 1) ) {
        MulFreeTree(1, retTree);
        TOKEN_EXIT(member_declarator_exit, "::");
    } else {
        tokenAhead =  0 ;
    }
    (tokenAhead == 1 || (Lex(), TRACE_LEX(1)));
    if ( !SEE_TOKEN(ETOI, "*") || !(CommTerm(), 1) ) {
        MulFreeTree(1, retTree);
        TOKEN_EXIT(member_declarator_exit, "*");
    } else {
        tokenAhead =  0 ;
    }
    {
        _retValue =  retTree ;
        goto member_declarator_ret ;
    }
    (tokenAhead || (LexComment(), tokenAhead =  -1, TRACE_LEX(1)));
    if ( _nbPre || listComm ) 
        AddComm(_ptPreComm, _nbPre, (PPTREE)0, lastTree);
    else {
        _lastTree =  (PPTREE)0 ;
        _funcLevel-- ;
    }
    return (PPTREE)0 ;
member_declarator_exit : 
    _Debug = TRACE_RULE("member_declarator", TRACE_EXIT, (PPTREE)0);
    _funcLevel-- ;
    return (PPTREE) -1 ;
member_declarator_ret : 
    _Debug = TRACE_RULE("member_declarator", TRACE_RETURN, _retValue);
    (tokenAhead || (LexComment(), tokenAhead =  -1, TRACE_LEX(1)));
    if ( _nbPre || listComm ) 
        AddComm(_ptPreComm, _nbPre, _retValue, lastTree);
    else {
        _lastTree =  _retValue ;
        _funcLevel-- ;
    }
    return _retValue ;
}

PPTREE cplus::message_map ( int error_free )
{
    PFILE_POSITION  _filePosition = (PFILE_POSITION)0 ;
    int             _value, _nbPre = 0 ;
    PCOMM_ELEM      _ptPreComm = ((tokenAhead || (LexComment(), tokenAhead =  -1, TRACE_LEX(1))), listComm ? LookComm(&_nbPre) : (_funcLevel++, (PCOMM_ELEM)0));
    int             _Debug = TRACE_RULE("message_map", TRACE_ENTER, (PPTREE)0);
    PPTREE          lastTree = _lastTree, _retValue ;
    PPTREE          _addlist1 = (PPTREE)0 ;
    PPTREE          retTree = (PPTREE)0, list = (PPTREE)0 ;
    
    (tokenAhead == 13 || (specific(), TRACE_LEX(1)));
    switch ( lexEl.Value ) {
        case META : 
        case BEGIN_MESSAGE_MAP : break ;
        default : 
            MulFreeTree(3, _addlist1, list, retTree);
            CASE_EXIT(message_map_exit, "BEGIN_MESSAGE_MAP");
            break ;
    }
    {
        PPTREE  _ptRes0 = 0 ;
        _ptRes0 =  MakeTree(MESSAGE_MAP, 1);
        retTree =  _ptRes0 ;
    }
    _addlist1 =  list ;
    while ( !((tokenAhead == 13 || (specific(), TRACE_LEX(1))) && SEE_TOKEN(END_MESSAGE_MAP, "END_MESSAGE_MAP")) ) {
        {
            PPTREE  _ptTree0 = 0 ;
            if ( (_ptTree0 = NQUICK_CALL(_Tak(macro_extended)(error_free), 93, cplus)) == (PPTREE) -1 ) {
                MulFreeTree(4, _ptTree0, _addlist1, list, retTree);
                PROG_EXIT(message_map_exit, "message_map");
            }
            _addlist1 =  AddList(_addlist1, _ptTree0);
        }
        if ( list ) {
            _addlist1 =  SonTree(_addlist1, 2);
        } else {
            list =  _addlist1 ;
        }
    }
    if ( NQUICK_CALL(_Tak(macro)(error_free), 92, cplus) == (PPTREE) -1 ) {
        MulFreeTree(3, _addlist1, list, retTree);
        PROG_EXIT(message_map_exit, "message_map");
    }
    {
        PPTREE  _ptTree0 = 0 ;
        _ptTree0  =  ReplaceTree(retTree, 1, list);
        _retValue =  _ptTree0 ;
        goto message_map_ret ;
    }
    (tokenAhead || (LexComment(), tokenAhead =  -1, TRACE_LEX(1)));
    if ( _nbPre || listComm ) 
        AddComm(_ptPreComm, _nbPre, (PPTREE)0, lastTree);
    else {
        _lastTree =  (PPTREE)0 ;
        _funcLevel-- ;
    }
    return (PPTREE)0 ;
message_map_exit : 
    _Debug = TRACE_RULE("message_map", TRACE_EXIT, (PPTREE)0);
    _funcLevel-- ;
    return (PPTREE) -1 ;
message_map_ret : 
    _Debug = TRACE_RULE("message_map", TRACE_RETURN, _retValue);
    (tokenAhead || (LexComment(), tokenAhead =  -1, TRACE_LEX(1)));
    if ( _nbPre || listComm ) 
        AddComm(_ptPreComm, _nbPre, _retValue, lastTree);
    else {
        _lastTree =  _retValue ;
        _funcLevel-- ;
    }
    return _retValue ;
}

PPTREE cplus::multiplicative_expression ( int error_free )
{
    PFILE_POSITION  _filePosition = (PFILE_POSITION)0 ;
    int             _value, _nbPre = 0 ;
    PCOMM_ELEM      _ptPreComm = ((tokenAhead || (LexComment(), tokenAhead =  -1, TRACE_LEX(1))), listComm ? LookComm(&_nbPre) : (_funcLevel++, (PCOMM_ELEM)0));
    int             _Debug = TRACE_RULE("multiplicative_expression", TRACE_ENTER, (PPTREE)0);
    PPTREE          lastTree = _lastTree, _retValue ;
    PPTREE          expTree = (PPTREE)0 ;
    
    if ( (expTree = NQUICK_CALL(_Tak(pm_expression)(error_free), 108, cplus)) == (PPTREE) -1 ) {
        MulFreeTree(1, expTree);
        PROG_EXIT(multiplicative_expression_exit, "multiplicative_expression");
    }
    while ( (tokenAhead == 1 || (Lex(), TRACE_LEX(1))) && SEE_TOKEN(ETOI, "*")
                || (tokenAhead == 1 || (Lex(), TRACE_LEX(1))) && SEE_TOKEN(SLAS, "SLAS")
                || (tokenAhead == 1 || (Lex(), TRACE_LEX(1))) && SEE_TOKEN(POURC, "%") ) {
        (tokenAhead == 1 || (Lex(), TRACE_LEX(1)));
        switch ( lexEl.Value ) {
            case ETOI : 
                tokenAhead = 0 ;
                CommTerm();
                {
                    PPTREE  _ptTree0 = 0, _ptRes0 = 0 ;
                    _ptRes0 =  MakeTree(MUL, 2);
                    ReplaceTree(_ptRes0, 1, expTree);
                    if ( (_ptTree0 = NQUICK_CALL(_Tak(pm_expression)(error_free), 108, cplus)) == (PPTREE) -1 ) {
                        MulFreeTree(3, _ptRes0, _ptTree0, expTree);
                        PROG_EXIT(multiplicative_expression_exit, "multiplicative_expression");
                    }
                    ReplaceTree(_ptRes0, 2, _ptTree0);
                    expTree =  _ptRes0 ;
                }
                break ;
            case META : 
            case SLAS : 
                tokenAhead = 0 ;
                CommTerm();
                {
                    PPTREE  _ptTree0 = 0, _ptRes0 = 0 ;
                    _ptRes0 =  MakeTree(DIV, 2);
                    ReplaceTree(_ptRes0, 1, expTree);
                    if ( (_ptTree0 = NQUICK_CALL(_Tak(pm_expression)(error_free), 108, cplus)) == (PPTREE) -1 ) {
                        MulFreeTree(3, _ptRes0, _ptTree0, expTree);
                        PROG_EXIT(multiplicative_expression_exit, "multiplicative_expression");
                    }
                    ReplaceTree(_ptRes0, 2, _ptTree0);
                    expTree =  _ptRes0 ;
                }
                break ;
            case POURC : 
                tokenAhead = 0 ;
                CommTerm();
                {
                    PPTREE  _ptTree0 = 0, _ptRes0 = 0 ;
                    _ptRes0 =  MakeTree(REM, 2);
                    ReplaceTree(_ptRes0, 1, expTree);
                    if ( (_ptTree0 = NQUICK_CALL(_Tak(pm_expression)(error_free), 108, cplus)) == (PPTREE) -1 ) {
                        MulFreeTree(3, _ptRes0, _ptTree0, expTree);
                        PROG_EXIT(multiplicative_expression_exit, "multiplicative_expression");
                    }
                    ReplaceTree(_ptRes0, 2, _ptTree0);
                    expTree =  _ptRes0 ;
                }
                break ;
            default : 
                MulFreeTree(1, expTree);
                CASE_EXIT(multiplicative_expression_exit, "either * or SLAS or %");
                break ;
        }
    }
    {
        _retValue =  expTree ;
        goto multiplicative_expression_ret ;
    }
    (tokenAhead || (LexComment(), tokenAhead =  -1, TRACE_LEX(1)));
    if ( _nbPre || listComm ) 
        AddComm(_ptPreComm, _nbPre, (PPTREE)0, lastTree);
    else {
        _lastTree =  (PPTREE)0 ;
        _funcLevel-- ;
    }
    return (PPTREE)0 ;
multiplicative_expression_exit : 
    _Debug = TRACE_RULE("multiplicative_expression", TRACE_EXIT, (PPTREE)0);
    _funcLevel-- ;
    return (PPTREE) -1 ;
multiplicative_expression_ret : 
    _Debug = TRACE_RULE("multiplicative_expression", TRACE_RETURN, _retValue);
    (tokenAhead || (LexComment(), tokenAhead =  -1, TRACE_LEX(1)));
    if ( _nbPre || listComm ) 
        AddComm(_ptPreComm, _nbPre, _retValue, lastTree);
    else {
        _lastTree =  _retValue ;
        _funcLevel-- ;
    }
    return _retValue ;
}
