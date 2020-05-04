/*************************************************************************/
/*                                                                       */
/*        Produced by MetaGen version 2.0  -    1989-2006                 */
/*       Syntaxic Analyzer Meta Generator developped by                  */
/*                  Eric Lavillonniere                                   */
/*                                                                       */
/*************************************************************************/
#include "token.h"
#include "cplus.h"

PPTREE cplus::name_space ( int error_free )
{
    PFILE_POSITION  _filePosition = (PFILE_POSITION)0 ;
    int             _value, _nbPre = 0 ;
    PCOMM_ELEM      _ptPreComm = ((tokenAhead || (LexComment(), tokenAhead =  -1, TRACE_LEX(1))), listComm ? LookComm(&_nbPre) : (_funcLevel++, (PCOMM_ELEM)0));
    int             _Debug = TRACE_RULE("name_space", TRACE_ENTER, (PPTREE)0);
    PPTREE          lastTree = _lastTree, _retValue ;
    PPTREE          _addlist1 = (PPTREE)0 ;
    PPTREE          list = (PPTREE)0, retTree = (PPTREE)0, ident = (PPTREE)0, attrib = (PPTREE)0 ;
    
    (tokenAhead == 1 || (Lex(), TRACE_LEX(1)));
    switch ( lexEl.Value ) {
        case NAMESPACE : 
            tokenAhead = 0 ;
            CommTerm();
            if ( (tokenAhead == 1 || (Lex(), TRACE_LEX(1))) && TERM_OR_META(IDENT, "IDENT") && !(tokenAhead = 0) && BUILD_TERM_META(ident) ) {
                {
                    PPTREE  _ptRes0 = 0 ;
                    _ptRes0 =  MakeTree(IDENT, 1);
                    ReplaceTree(_ptRes0, 1, ident);
                    ident =  _ptRes0 ;
                }
            }
            if ( NPUSH_CALL_AFF_VERIF(attrib = , _Tak(attribute_call), 17, cplus) ) {}
            (tokenAhead == 1 || (Lex(), TRACE_LEX(1)));
            switch ( lexEl.Value ) {
                case AOUV : 
                    tokenAhead = 0 ;
                    CommTerm();
                    {
                        PPTREE  _ptRes0 = 0 ;
                        _ptRes0 =  MakeTree(NAMESPACE, 3);
                        ReplaceTree(_ptRes0, 1, ident);
                        ReplaceTree(_ptRes0, 3, attrib);
                        retTree =  _ptRes0 ;
                    }
                    _addlist1 = list ;
                    while ( !((tokenAhead == 1 || (Lex(), TRACE_LEX(1))) && SEE_TOKEN(AFER, "}") && ((tokenAhead = 0), CommTerm(), 1)) ) {
                        {
                            PPTREE  _ptTree0 = 0 ;
                            if ( (_ptTree0 = NQUICK_CALL(_Tak(ext_all)(error_free), 64, cplus)) == (PPTREE) -1 ) {
                                MulFreeTree(6, _ptTree0, _addlist1, attrib, ident, list, retTree);
                                PROG_EXIT(name_space_exit, "name_space");
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
                            MulFreeTree(6, _ptTree0, _addlist1, attrib, ident, list, retTree);
                            PROG_EXIT(name_space_exit, "name_space");
                        }
                        list =  AddList(list, _ptTree0);
                    }
                    {
                        PPTREE  _ptTree0 = 0 ;
                        {
                            PPTREE  _ptRes1 = 0 ;
                            _ptRes1 =  MakeTree(COMPOUND_EXT, 1);
                            ReplaceTree(_ptRes1, 1, list);
                            _ptTree0 =  _ptRes1 ;
                        }
                        ReplaceTree(retTree, 2, _ptTree0);
                    }
                    break ;
                case EGAL : 
                    tokenAhead = 0 ;
                    CommTerm();
                    if ( ident == (PPTREE)0 ) {
                        MulFreeTree(5, _addlist1, attrib, ident, list, retTree);
                        LEX_EXIT("", 0);
                        goto name_space_exit ;
                    }
                    {
                        PPTREE  _ptTree0 = 0, _ptRes0 = 0 ;
                        _ptRes0 =  MakeTree(NAMESPACE_ALIAS, 2);
                        ReplaceTree(_ptRes0, 1, ident);
                        if ( (_ptTree0 = NQUICK_CALL(_Tak(complete_class_name)(error_free), 27, cplus)) == (PPTREE) -1 ) {
                            MulFreeTree(7, _ptRes0, _ptTree0, _addlist1, attrib, ident, list, retTree);
                            PROG_EXIT(name_space_exit, "name_space");
                        }
                        ReplaceTree(_ptRes0, 2, _ptTree0);
                        retTree =  _ptRes0 ;
                    }
                    break ;
                default : 
                    MulFreeTree(5, _addlist1, attrib, ident, list, retTree);
                    CASE_EXIT(name_space_exit, "either { or =");
                    break ;
            }
            break ;
        case USING : 
            tokenAhead = 0 ;
            CommTerm();
            if ( (tokenAhead == 1 || (Lex(), TRACE_LEX(1))) && SEE_TOKEN(NAMESPACE, "namespace") && ((tokenAhead = 0), CommTerm(), 1) ) {
                if ( NPUSH_CALL_AFF_VERIF(attrib = , _Tak(attribute_call), 17, cplus) ) {}
                {
                    PPTREE  _ptTree0 = 0, _ptRes0 = 0 ;
                    _ptRes0 =  MakeTree(USING_NAMESPACE, 2);
                    if ( (_ptTree0 = NQUICK_CALL(_Tak(complete_class_name)(error_free), 27, cplus)) == (PPTREE) -1 ) {
                        MulFreeTree(7, _ptRes0, _ptTree0, _addlist1, attrib, ident, list, retTree);
                        PROG_EXIT(name_space_exit, "name_space");
                    }
                    ReplaceTree(_ptRes0, 1, _ptTree0);
                    ReplaceTree(_ptRes0, 2, attrib);
                    retTree =  _ptRes0 ;
                }
            } else {
                {
                    PPTREE  _ptTree0 = 0, _ptRes0 = 0 ;
                    _ptRes0 =  MakeTree(USING, 1);
                    if ( (_ptTree0 = NQUICK_CALL(_Tak(complete_class_name)(error_free), 27, cplus)) == (PPTREE) -1 ) {
                        MulFreeTree(7, _ptRes0, _ptTree0, _addlist1, attrib, ident, list, retTree);
                        PROG_EXIT(name_space_exit, "name_space");
                    }
                    ReplaceTree(_ptRes0, 1, _ptTree0);
                    retTree =  _ptRes0 ;
                }
            }
            (tokenAhead == 1 || (Lex(), TRACE_LEX(1)));
            if ( !SEE_TOKEN(PVIR, ";") || !(CommTerm(), 1) ) {
                MulFreeTree(5, _addlist1, attrib, ident, list, retTree);
                TOKEN_EXIT(name_space_exit, ";");
            } else {
                tokenAhead =  0 ;
            }
            break ;
        default : 
            MulFreeTree(5, _addlist1, attrib, ident, list, retTree);
            CASE_EXIT(name_space_exit, "either namespace or using");
            break ;
    }
    {
        _retValue =  retTree ;
        goto name_space_ret ;
    }
    (tokenAhead || (LexComment(), tokenAhead =  -1, TRACE_LEX(1)));
    if ( _nbPre || listComm ) 
        AddComm(_ptPreComm, _nbPre, (PPTREE)0, lastTree);
    else {
        _lastTree =  (PPTREE)0 ;
        _funcLevel-- ;
    }
    return (PPTREE)0 ;
name_space_exit : 
    _Debug = TRACE_RULE("name_space", TRACE_EXIT, (PPTREE)0);
    _funcLevel-- ;
    return (PPTREE) -1 ;
name_space_ret : 
    _Debug = TRACE_RULE("name_space", TRACE_RETURN, _retValue);
    (tokenAhead || (LexComment(), tokenAhead =  -1, TRACE_LEX(1)));
    if ( _nbPre || listComm ) 
        AddComm(_ptPreComm, _nbPre, _retValue, lastTree);
    else {
        _lastTree =  _retValue ;
        _funcLevel-- ;
    }
    return _retValue ;
}

PPTREE cplus::new_1 ( int error_free )
{
    PFILE_POSITION  _filePosition = (PFILE_POSITION)0 ;
    int             _value, _nbPre = 0 ;
    PCOMM_ELEM      _ptPreComm = ((tokenAhead || (LexComment(), tokenAhead =  -1, TRACE_LEX(1))), listComm ? LookComm(&_nbPre) : (_funcLevel++, (PCOMM_ELEM)0));
    int             _Debug = TRACE_RULE("new_1", TRACE_ENTER, (PPTREE)0);
    PPTREE          lastTree = _lastTree, _retValue ;
    PPTREE          retTree = (PPTREE)0 ;
    
    (tokenAhead == 1 || (Lex(), TRACE_LEX(1)));
    if ( !SEE_TOKEN(POUV, "(") || !(CommTerm(), 1) ) {
        MulFreeTree(1, retTree);
        TOKEN_EXIT(new_1_exit, "(");
    } else {
        tokenAhead =  0 ;
    }
    if ( (retTree = NQUICK_CALL(_Tak(expression)(error_free), 62, cplus)) == (PPTREE) -1 ) {
        MulFreeTree(1, retTree);
        PROG_EXIT(new_1_exit, "new_1");
    }
    (tokenAhead == 1 || (Lex(), TRACE_LEX(1)));
    if ( !SEE_TOKEN(PFER, ")") || !(CommTerm(), 1) ) {
        MulFreeTree(1, retTree);
        TOKEN_EXIT(new_1_exit, ")");
    } else {
        tokenAhead =  0 ;
    }
    if ( (tokenAhead == 1 || (Lex(), TRACE_LEX(1))) && SEE_TOKEN(POUV, "(") && ((tokenAhead = 0), CommTerm(), 1) ) {
        {
            PPTREE  _ptTree0 = 0, _ptRes0 = 0 ;
            _ptRes0 =  MakeTree(NEW, 4);
            ReplaceTree(_ptRes0, 1, retTree);
            if ( (_ptTree0 = NQUICK_CALL(_Tak(type_name)(error_free), 144, cplus)) == (PPTREE) -1 ) {
                MulFreeTree(3, _ptRes0, _ptTree0, retTree);
                PROG_EXIT(new_1_exit, "new_1");
            }
            ReplaceTree(_ptRes0, 2, _ptTree0);
            retTree =  _ptRes0 ;
        }
        (tokenAhead == 1 || (Lex(), TRACE_LEX(1)));
        if ( !SEE_TOKEN(PFER, ")") || !(CommTerm(), 1) ) {
            MulFreeTree(1, retTree);
            TOKEN_EXIT(new_1_exit, ")");
        } else {
            tokenAhead =  0 ;
        }
        {
            _retValue =  retTree ;
            goto new_1_ret ;
        }
    } else {
        {
            PPTREE  _ptTree0 = 0, _ptRes0 = 0 ;
            _ptRes0 =  MakeTree(NEW, 4);
            ReplaceTree(_ptRes0, 1, retTree);
            if ( (_ptTree0 = NQUICK_CALL(_Tak(new_type_name)(error_free), 102, cplus)) == (PPTREE) -1 ) {
                MulFreeTree(3, _ptRes0, _ptTree0, retTree);
                PROG_EXIT(new_1_exit, "new_1");
            }
            ReplaceTree(_ptRes0, 2, _ptTree0);
            retTree =  _ptRes0 ;
        }
    }
    {
        _retValue =  retTree ;
        goto new_1_ret ;
    }
    (tokenAhead || (LexComment(), tokenAhead =  -1, TRACE_LEX(1)));
    if ( _nbPre || listComm ) 
        AddComm(_ptPreComm, _nbPre, (PPTREE)0, lastTree);
    else {
        _lastTree =  (PPTREE)0 ;
        _funcLevel-- ;
    }
    return (PPTREE)0 ;
new_1_exit : 
    _Debug = TRACE_RULE("new_1", TRACE_EXIT, (PPTREE)0);
    _funcLevel-- ;
    return (PPTREE) -1 ;
new_1_ret : 
    _Debug = TRACE_RULE("new_1", TRACE_RETURN, _retValue);
    (tokenAhead || (LexComment(), tokenAhead =  -1, TRACE_LEX(1)));
    if ( _nbPre || listComm ) 
        AddComm(_ptPreComm, _nbPre, _retValue, lastTree);
    else {
        _lastTree =  _retValue ;
        _funcLevel-- ;
    }
    return _retValue ;
}

PPTREE cplus::new_2 ( int error_free )
{
    PFILE_POSITION  _filePosition = (PFILE_POSITION)0 ;
    int             _value, _nbPre = 0 ;
    PCOMM_ELEM      _ptPreComm = ((tokenAhead || (LexComment(), tokenAhead =  -1, TRACE_LEX(1))), listComm ? LookComm(&_nbPre) : (_funcLevel++, (PCOMM_ELEM)0));
    int             _Debug = TRACE_RULE("new_2", TRACE_ENTER, (PPTREE)0);
    PPTREE          lastTree = _lastTree, _retValue ;
    PPTREE          retTree = (PPTREE)0 ;
    
    if ( (tokenAhead == 1 || (Lex(), TRACE_LEX(1))) && SEE_TOKEN(POUV, "(") && ((tokenAhead = 0), CommTerm(), 1) ) {
        {
            PPTREE  _ptTree0 = 0, _ptRes0 = 0 ;
            _ptRes0 =  MakeTree(NEW, 4);
            if ( (_ptTree0 = NQUICK_CALL(_Tak(type_name)(error_free), 144, cplus)) == (PPTREE) -1 ) {
                MulFreeTree(3, _ptRes0, _ptTree0, retTree);
                PROG_EXIT(new_2_exit, "new_2");
            }
            ReplaceTree(_ptRes0, 2, _ptTree0);
            retTree =  _ptRes0 ;
        }
        (tokenAhead == 1 || (Lex(), TRACE_LEX(1)));
        if ( !SEE_TOKEN(PFER, ")") || !(CommTerm(), 1) ) {
            MulFreeTree(1, retTree);
            TOKEN_EXIT(new_2_exit, ")");
        } else {
            tokenAhead =  0 ;
        }
        {
            _retValue =  retTree ;
            goto new_2_ret ;
        }
    } else {
        {
            PPTREE  _ptTree0 = 0, _ptRes0 = 0 ;
            _ptRes0 =  MakeTree(NEW, 4);
            if ( (_ptTree0 = NQUICK_CALL(_Tak(new_type_name)(error_free), 102, cplus)) == (PPTREE) -1 ) {
                MulFreeTree(3, _ptRes0, _ptTree0, retTree);
                PROG_EXIT(new_2_exit, "new_2");
            }
            ReplaceTree(_ptRes0, 2, _ptTree0);
            retTree =  _ptRes0 ;
        }
    }
    {
        _retValue =  retTree ;
        goto new_2_ret ;
    }
    (tokenAhead || (LexComment(), tokenAhead =  -1, TRACE_LEX(1)));
    if ( _nbPre || listComm ) 
        AddComm(_ptPreComm, _nbPre, (PPTREE)0, lastTree);
    else {
        _lastTree =  (PPTREE)0 ;
        _funcLevel-- ;
    }
    return (PPTREE)0 ;
new_2_exit : 
    _Debug = TRACE_RULE("new_2", TRACE_EXIT, (PPTREE)0);
    _funcLevel-- ;
    return (PPTREE) -1 ;
new_2_ret : 
    _Debug = TRACE_RULE("new_2", TRACE_RETURN, _retValue);
    (tokenAhead || (LexComment(), tokenAhead =  -1, TRACE_LEX(1)));
    if ( _nbPre || listComm ) 
        AddComm(_ptPreComm, _nbPre, _retValue, lastTree);
    else {
        _lastTree =  _retValue ;
        _funcLevel-- ;
    }
    return _retValue ;
}

PPTREE cplus::new_declarator ( int error_free )
{
    PFILE_POSITION  _filePosition = (PFILE_POSITION)0 ;
    int             _value, _nbPre = 0 ;
    PCOMM_ELEM      _ptPreComm = ((tokenAhead || (LexComment(), tokenAhead =  -1, TRACE_LEX(1))), listComm ? LookComm(&_nbPre) : (_funcLevel++, (PCOMM_ELEM)0));
    int             _Debug = TRACE_RULE("new_declarator", TRACE_ENTER, (PPTREE)0);
    PPTREE          lastTree = _lastTree, _retValue ;
    PPTREE          valTree = (PPTREE)0, retTree = (PPTREE)0, expList = (PPTREE)0 ;
    
    if ( NPUSH_CALL_AFF_VERIF(valTree = , _Tak(range_modifier), 121, cplus) ) {
        {
            PPTREE  _ptTree0 = 0 ;
            {
                PPTREE  _ptTree1 = 0 ;
                if ( (_ptTree1 = NQUICK_CALL(_Tak(new_declarator)(error_free), 101, cplus)) == (PPTREE) -1 ) {
                    MulFreeTree(5, _ptTree1, _ptTree0, expList, retTree, valTree);
                    PROG_EXIT(new_declarator_exit, "new_declarator");
                }
                _ptTree0 =  ReplaceTree(valTree, 2, _ptTree1);
            }
            _retValue =  _ptTree0 ;
            goto new_declarator_ret ;
        }
    }
    retTree =  (PPTREE)0 ;
    (tokenAhead == 1 || (Lex(), TRACE_LEX(1)));
    switch ( lexEl.Value ) {
        case ETOI : 
            tokenAhead = 0 ;
            CommTerm();
            {
                PPTREE  _ptTree0 = 0 ;
                {
                    PPTREE  _ptTree1 = 0, _ptRes1 = 0 ;
                    _ptRes1 =  MakeTree(TYP_ADDR, 1);
                    if ( (_ptTree1 = NQUICK_CALL(_Tak(new_declarator)(error_free), 101, cplus)) == (PPTREE) -1 ) {
                        MulFreeTree(6, _ptRes1, _ptTree1, _ptTree0, expList, retTree, valTree);
                        PROG_EXIT(new_declarator_exit, "new_declarator");
                    }
                    ReplaceTree(_ptRes1, 1, _ptTree1);
                    _ptTree0 =  _ptRes1 ;
                }
                _retValue =  _ptTree0 ;
                goto new_declarator_ret ;
            }
            break ;
        case META : 
        case IDENT : 
            if ( (valTree = NQUICK_CALL(_Tak(member_declarator)(error_free), 95, cplus)) == (PPTREE) -1 ) {
                MulFreeTree(3, expList, retTree, valTree);
                PROG_EXIT(new_declarator_exit, "new_declarator");
            }
            {
                PPTREE  _ptTree0 = 0 ;
                {
                    PPTREE  _ptTree1 = 0 ;
                    if ( (_ptTree1 = NQUICK_CALL(_Tak(new_declarator)(error_free), 101, cplus)) == (PPTREE) -1 ) {
                        MulFreeTree(5, _ptTree1, _ptTree0, expList, retTree, valTree);
                        PROG_EXIT(new_declarator_exit, "new_declarator");
                    }
                    _ptTree0 =  ReplaceTree(valTree, 2, _ptTree1);
                }
                _retValue =  _ptTree0 ;
                goto new_declarator_ret ;
            }
            break ;
        default : 
            while ( (tokenAhead == 1 || (Lex(), TRACE_LEX(1))) && SEE_TOKEN(COUV, "[") && ((tokenAhead = 0), CommTerm(), 1) ) {
                if ( NPUSH_CALL_AFF_VERIF(expList = , _Tak(expression), 62, cplus) ) {
                    {
                        PPTREE  _ptRes0 = 0 ;
                        _ptRes0 =  MakeTree(TYP_ARRAY, 2);
                        ReplaceTree(_ptRes0, 1, retTree);
                        ReplaceTree(_ptRes0, 2, expList);
                        retTree =  _ptRes0 ;
                    }
                } else {
                    {
                        PPTREE  _ptRes0 = 0 ;
                        _ptRes0 =  MakeTree(TYP_ARRAY, 2);
                        ReplaceTree(_ptRes0, 1, retTree);
                        retTree =  _ptRes0 ;
                    }
                }
                (tokenAhead == 1 || (Lex(), TRACE_LEX(1)));
                if ( !SEE_TOKEN(CFER, "]") || !(CommTerm(), 1) ) {
                    MulFreeTree(3, expList, retTree, valTree);
                    TOKEN_EXIT(new_declarator_exit, "]");
                } else {
                    tokenAhead =  0 ;
                }
            }
            {
                _retValue =  retTree ;
                goto new_declarator_ret ;
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
new_declarator_exit : 
    _Debug = TRACE_RULE("new_declarator", TRACE_EXIT, (PPTREE)0);
    _funcLevel-- ;
    return (PPTREE) -1 ;
new_declarator_ret : 
    _Debug = TRACE_RULE("new_declarator", TRACE_RETURN, _retValue);
    (tokenAhead || (LexComment(), tokenAhead =  -1, TRACE_LEX(1)));
    if ( _nbPre || listComm ) 
        AddComm(_ptPreComm, _nbPre, _retValue, lastTree);
    else {
        _lastTree =  _retValue ;
        _funcLevel-- ;
    }
    return _retValue ;
}

PPTREE cplus::new_type_name ( int error_free )
{
    PFILE_POSITION  _filePosition = (PFILE_POSITION)0 ;
    int             _value, _nbPre = 0 ;
    PCOMM_ELEM      _ptPreComm = ((tokenAhead || (LexComment(), tokenAhead =  -1, TRACE_LEX(1))), listComm ? LookComm(&_nbPre) : (_funcLevel++, (PCOMM_ELEM)0));
    int             _Debug = TRACE_RULE("new_type_name", TRACE_ENTER, (PPTREE)0);
    PPTREE          lastTree = _lastTree, _retValue ;
    PPTREE          retTree = (PPTREE)0, valTree = (PPTREE)0 ;
    
    if ( (retTree = NQUICK_CALL(_Tak(type_specifier)(error_free), 145, cplus)) == (PPTREE) -1 ) {
        MulFreeTree(2, retTree, valTree);
        PROG_EXIT(new_type_name_exit, "new_type_name");
    }
    if ( NPUSH_CALL_AFF_VERIF(valTree = , _Tak(new_declarator), 101, cplus) ) {
        {
            PPTREE  _ptRes0 = 0 ;
            _ptRes0 =  MakeTree(NEW_DECLARATOR, 2);
            ReplaceTree(_ptRes0, 1, retTree);
            ReplaceTree(_ptRes0, 2, valTree);
            valTree =  _ptRes0 ;
        }
    } else {
        valTree =  retTree ;
    }
    {
        _retValue =  valTree ;
        goto new_type_name_ret ;
    }
    (tokenAhead || (LexComment(), tokenAhead =  -1, TRACE_LEX(1)));
    if ( _nbPre || listComm ) 
        AddComm(_ptPreComm, _nbPre, (PPTREE)0, lastTree);
    else {
        _lastTree =  (PPTREE)0 ;
        _funcLevel-- ;
    }
    return (PPTREE)0 ;
new_type_name_exit : 
    _Debug = TRACE_RULE("new_type_name", TRACE_EXIT, (PPTREE)0);
    _funcLevel-- ;
    return (PPTREE) -1 ;
new_type_name_ret : 
    _Debug = TRACE_RULE("new_type_name", TRACE_RETURN, _retValue);
    (tokenAhead || (LexComment(), tokenAhead =  -1, TRACE_LEX(1)));
    if ( _nbPre || listComm ) 
        AddComm(_ptPreComm, _nbPre, _retValue, lastTree);
    else {
        _lastTree =  _retValue ;
        _funcLevel-- ;
    }
    return _retValue ;
}

PPTREE cplus::none_statement ( int error_free )
{
    PFILE_POSITION  _filePosition = (PFILE_POSITION)0 ;
    int             _value, _nbPre = 0 ;
    PCOMM_ELEM      _ptPreComm = ((tokenAhead || (LexComment(), tokenAhead =  -1, TRACE_LEX(1))), listComm ? LookComm(&_nbPre) : (_funcLevel++, (PCOMM_ELEM)0));
    int             _Debug = TRACE_RULE("none_statement", TRACE_ENTER, (PPTREE)0);
    PPTREE          lastTree = _lastTree, _retValue ;
    
    {
        PPTREE  _ptTree0 = 0 ;
        {
            PPTREE  _ptRes1 = 0 ;
            _ptRes1  =  MakeTree(NONE, 0);
            _ptTree0 =  _ptRes1 ;
        }
        _retValue =  _ptTree0 ;
        goto none_statement_ret ;
    }
    (tokenAhead || (LexComment(), tokenAhead =  -1, TRACE_LEX(1)));
    if ( _nbPre || listComm ) 
        AddComm(_ptPreComm, _nbPre, (PPTREE)0, lastTree);
    else {
        _lastTree =  (PPTREE)0 ;
        _funcLevel-- ;
    }
    return (PPTREE)0 ;
none_statement_exit : 
    _Debug = TRACE_RULE("none_statement", TRACE_EXIT, (PPTREE)0);
    _funcLevel-- ;
    return (PPTREE) -1 ;
none_statement_ret : 
    _Debug = TRACE_RULE("none_statement", TRACE_RETURN, _retValue);
    (tokenAhead || (LexComment(), tokenAhead =  -1, TRACE_LEX(1)));
    if ( _nbPre || listComm ) 
        AddComm(_ptPreComm, _nbPre, _retValue, lastTree);
    else {
        _lastTree =  _retValue ;
        _funcLevel-- ;
    }
    return _retValue ;
}

PPTREE cplus::operator_function_name ( int error_free )
{
    PFILE_POSITION  _filePosition = (PFILE_POSITION)0 ;
    int             _value, _nbPre = 0 ;
    PCOMM_ELEM      _ptPreComm = ((tokenAhead || (LexComment(), tokenAhead =  -1, TRACE_LEX(1))), listComm ? LookComm(&_nbPre) : (_funcLevel++, (PCOMM_ELEM)0));
    int             _Debug = TRACE_RULE("operator_function_name", TRACE_ENTER, (PPTREE)0);
    PPTREE          lastTree = _lastTree, _retValue ;
    PPTREE          retTree = (PPTREE)0, valTree = (PPTREE)0, list = (PPTREE)0 ;
    
    (tokenAhead == 1 || (Lex(), TRACE_LEX(1)));
    if ( !SEE_TOKEN(OPERATOR, "operator") || !(CommTerm(), 1) ) {
        MulFreeTree(3, list, retTree, valTree);
        TOKEN_EXIT(operator_function_name_exit, "operator");
    } else {
        tokenAhead =  0 ;
    }
    (tokenAhead == 1 || (Lex(), TRACE_LEX(1)));
    switch ( lexEl.Value ) {
        case NEW : 
            tokenAhead = 0 ;
            CommTerm();
            {
                PPTREE  _ptTree0 = 0 ;
                {
                    PPTREE  _ptRes1 = 0 ;
                    _ptRes1 =  MakeTree(OPERATOR, 1);
                    ReplaceTree(_ptRes1, 1, MakeString("new"));
                    _ptTree0 =  _ptRes1 ;
                }
                _retValue =  _ptTree0 ;
                goto operator_function_name_ret ;
            }
            break ;
        case DELETE : 
            tokenAhead = 0 ;
            CommTerm();
            {
                PPTREE  _ptTree0 = 0 ;
                {
                    PPTREE  _ptRes1 = 0 ;
                    _ptRes1 =  MakeTree(OPERATOR, 1);
                    ReplaceTree(_ptRes1, 1, MakeString("delete"));
                    _ptTree0 =  _ptRes1 ;
                }
                _retValue =  _ptTree0 ;
                goto operator_function_name_ret ;
            }
            break ;
        case PLUS : 
            tokenAhead = 0 ;
            CommTerm();
            {
                PPTREE  _ptTree0 = 0 ;
                {
                    PPTREE  _ptRes1 = 0 ;
                    _ptRes1 =  MakeTree(OPERATOR, 1);
                    ReplaceTree(_ptRes1, 1, MakeString("+"));
                    _ptTree0 =  _ptRes1 ;
                }
                _retValue =  _ptTree0 ;
                goto operator_function_name_ret ;
            }
            break ;
        case TIRE : 
            tokenAhead = 0 ;
            CommTerm();
            {
                PPTREE  _ptTree0 = 0 ;
                {
                    PPTREE  _ptRes1 = 0 ;
                    _ptRes1 =  MakeTree(OPERATOR, 1);
                    ReplaceTree(_ptRes1, 1, MakeString("-"));
                    _ptTree0 =  _ptRes1 ;
                }
                _retValue =  _ptTree0 ;
                goto operator_function_name_ret ;
            }
            break ;
        case ETOI : 
            tokenAhead = 0 ;
            CommTerm();
            {
                PPTREE  _ptTree0 = 0 ;
                {
                    PPTREE  _ptRes1 = 0 ;
                    _ptRes1 =  MakeTree(OPERATOR, 1);
                    ReplaceTree(_ptRes1, 1, MakeString("*"));
                    _ptTree0 =  _ptRes1 ;
                }
                _retValue =  _ptTree0 ;
                goto operator_function_name_ret ;
            }
            break ;
        case META : 
        case SLAS : 
            tokenAhead = 0 ;
            CommTerm();
            {
                PPTREE  _ptTree0 = 0 ;
                {
                    PPTREE  _ptRes1 = 0 ;
                    _ptRes1 =  MakeTree(OPERATOR, 1);
                    ReplaceTree(_ptRes1, 1, MakeString("/"));
                    _ptTree0 =  _ptRes1 ;
                }
                _retValue =  _ptTree0 ;
                goto operator_function_name_ret ;
            }
            break ;
        case POURC : 
            tokenAhead = 0 ;
            CommTerm();
            {
                PPTREE  _ptTree0 = 0 ;
                {
                    PPTREE  _ptRes1 = 0 ;
                    _ptRes1 =  MakeTree(OPERATOR, 1);
                    ReplaceTree(_ptRes1, 1, MakeString("%"));
                    _ptTree0 =  _ptRes1 ;
                }
                _retValue =  _ptTree0 ;
                goto operator_function_name_ret ;
            }
            break ;
        case CHAP : 
            tokenAhead = 0 ;
            CommTerm();
            {
                PPTREE  _ptTree0 = 0 ;
                {
                    PPTREE  _ptRes1 = 0 ;
                    _ptRes1 =  MakeTree(OPERATOR, 1);
                    ReplaceTree(_ptRes1, 1, MakeString("^"));
                    _ptTree0 =  _ptRes1 ;
                }
                _retValue =  _ptTree0 ;
                goto operator_function_name_ret ;
            }
            break ;
        case ETCO : 
            tokenAhead = 0 ;
            CommTerm();
            {
                PPTREE  _ptTree0 = 0 ;
                {
                    PPTREE  _ptRes1 = 0 ;
                    _ptRes1 =  MakeTree(OPERATOR, 1);
                    ReplaceTree(_ptRes1, 1, MakeString("&"));
                    _ptTree0 =  _ptRes1 ;
                }
                _retValue =  _ptTree0 ;
                goto operator_function_name_ret ;
            }
            break ;
        case VBAR : 
            tokenAhead = 0 ;
            CommTerm();
            {
                PPTREE  _ptTree0 = 0 ;
                {
                    PPTREE  _ptRes1 = 0 ;
                    _ptRes1 =  MakeTree(OPERATOR, 1);
                    ReplaceTree(_ptRes1, 1, MakeString("|"));
                    _ptTree0 =  _ptRes1 ;
                }
                _retValue =  _ptTree0 ;
                goto operator_function_name_ret ;
            }
            break ;
        case TILD : 
            tokenAhead = 0 ;
            CommTerm();
            {
                PPTREE  _ptTree0 = 0 ;
                {
                    PPTREE  _ptRes1 = 0 ;
                    _ptRes1 =  MakeTree(OPERATOR, 1);
                    ReplaceTree(_ptRes1, 1, MakeString("~"));
                    _ptTree0 =  _ptRes1 ;
                }
                _retValue =  _ptTree0 ;
                goto operator_function_name_ret ;
            }
            break ;
        case EXCL : 
            tokenAhead = 0 ;
            CommTerm();
            {
                PPTREE  _ptTree0 = 0 ;
                {
                    PPTREE  _ptRes1 = 0 ;
                    _ptRes1 =  MakeTree(OPERATOR, 1);
                    ReplaceTree(_ptRes1, 1, MakeString("!"));
                    _ptTree0 =  _ptRes1 ;
                }
                _retValue =  _ptTree0 ;
                goto operator_function_name_ret ;
            }
            break ;
        case EGAL : 
            tokenAhead = 0 ;
            CommTerm();
            {
                PPTREE  _ptTree0 = 0 ;
                {
                    PPTREE  _ptRes1 = 0 ;
                    _ptRes1 =  MakeTree(OPERATOR, 1);
                    ReplaceTree(_ptRes1, 1, MakeString("="));
                    _ptTree0 =  _ptRes1 ;
                }
                _retValue =  _ptTree0 ;
                goto operator_function_name_ret ;
            }
            break ;
        case SUPE : 
            tokenAhead = 0 ;
            CommTerm();
            {
                PPTREE  _ptTree0 = 0 ;
                {
                    PPTREE  _ptRes1 = 0 ;
                    _ptRes1 =  MakeTree(OPERATOR, 1);
                    ReplaceTree(_ptRes1, 1, MakeString(">"));
                    _ptTree0 =  _ptRes1 ;
                }
                _retValue =  _ptTree0 ;
                goto operator_function_name_ret ;
            }
            break ;
        case INFE : 
            tokenAhead = 0 ;
            CommTerm();
            {
                PPTREE  _ptTree0 = 0 ;
                {
                    PPTREE  _ptRes1 = 0 ;
                    _ptRes1 =  MakeTree(OPERATOR, 1);
                    ReplaceTree(_ptRes1, 1, MakeString("<"));
                    _ptTree0 =  _ptRes1 ;
                }
                _retValue =  _ptTree0 ;
                goto operator_function_name_ret ;
            }
            break ;
        case PLUSEGAL : 
            tokenAhead = 0 ;
            CommTerm();
            {
                PPTREE  _ptTree0 = 0 ;
                {
                    PPTREE  _ptRes1 = 0 ;
                    _ptRes1 =  MakeTree(OPERATOR, 1);
                    ReplaceTree(_ptRes1, 1, MakeString("+="));
                    _ptTree0 =  _ptRes1 ;
                }
                _retValue =  _ptTree0 ;
                goto operator_function_name_ret ;
            }
            break ;
        case TIREEGAL : 
            tokenAhead = 0 ;
            CommTerm();
            {
                PPTREE  _ptTree0 = 0 ;
                {
                    PPTREE  _ptRes1 = 0 ;
                    _ptRes1 =  MakeTree(OPERATOR, 1);
                    ReplaceTree(_ptRes1, 1, MakeString("-="));
                    _ptTree0 =  _ptRes1 ;
                }
                _retValue =  _ptTree0 ;
                goto operator_function_name_ret ;
            }
            break ;
        case ETOIEGAL : 
            tokenAhead = 0 ;
            CommTerm();
            {
                PPTREE  _ptTree0 = 0 ;
                {
                    PPTREE  _ptRes1 = 0 ;
                    _ptRes1 =  MakeTree(OPERATOR, 1);
                    ReplaceTree(_ptRes1, 1, MakeString("*="));
                    _ptTree0 =  _ptRes1 ;
                }
                _retValue =  _ptTree0 ;
                goto operator_function_name_ret ;
            }
            break ;
        case SLASEGAL : 
            tokenAhead = 0 ;
            CommTerm();
            {
                PPTREE  _ptTree0 = 0 ;
                {
                    PPTREE  _ptRes1 = 0 ;
                    _ptRes1 =  MakeTree(OPERATOR, 1);
                    ReplaceTree(_ptRes1, 1, MakeString("/="));
                    _ptTree0 =  _ptRes1 ;
                }
                _retValue =  _ptTree0 ;
                goto operator_function_name_ret ;
            }
            break ;
        case POURCEGAL : 
            tokenAhead = 0 ;
            CommTerm();
            {
                PPTREE  _ptTree0 = 0 ;
                {
                    PPTREE  _ptRes1 = 0 ;
                    _ptRes1 =  MakeTree(OPERATOR, 1);
                    ReplaceTree(_ptRes1, 1, MakeString("%="));
                    _ptTree0 =  _ptRes1 ;
                }
                _retValue =  _ptTree0 ;
                goto operator_function_name_ret ;
            }
            break ;
        case CHAPEGAL : 
            tokenAhead = 0 ;
            CommTerm();
            {
                PPTREE  _ptTree0 = 0 ;
                {
                    PPTREE  _ptRes1 = 0 ;
                    _ptRes1 =  MakeTree(OPERATOR, 1);
                    ReplaceTree(_ptRes1, 1, MakeString("^="));
                    _ptTree0 =  _ptRes1 ;
                }
                _retValue =  _ptTree0 ;
                goto operator_function_name_ret ;
            }
            break ;
        case ETCOEGAL : 
            tokenAhead = 0 ;
            CommTerm();
            {
                PPTREE  _ptTree0 = 0 ;
                {
                    PPTREE  _ptRes1 = 0 ;
                    _ptRes1 =  MakeTree(OPERATOR, 1);
                    ReplaceTree(_ptRes1, 1, MakeString("&="));
                    _ptTree0 =  _ptRes1 ;
                }
                _retValue =  _ptTree0 ;
                goto operator_function_name_ret ;
            }
            break ;
        case VBAREGAL : 
            tokenAhead = 0 ;
            CommTerm();
            {
                PPTREE  _ptTree0 = 0 ;
                {
                    PPTREE  _ptRes1 = 0 ;
                    _ptRes1 =  MakeTree(OPERATOR, 1);
                    ReplaceTree(_ptRes1, 1, MakeString("|="));
                    _ptTree0 =  _ptRes1 ;
                }
                _retValue =  _ptTree0 ;
                goto operator_function_name_ret ;
            }
            break ;
        case EXCLEGAL : 
            tokenAhead = 0 ;
            CommTerm();
            {
                PPTREE  _ptTree0 = 0 ;
                {
                    PPTREE  _ptRes1 = 0 ;
                    _ptRes1 =  MakeTree(OPERATOR, 1);
                    ReplaceTree(_ptRes1, 1, MakeString("!="));
                    _ptTree0 =  _ptRes1 ;
                }
                _retValue =  _ptTree0 ;
                goto operator_function_name_ret ;
            }
            break ;
        case EGALEGAL : 
            tokenAhead = 0 ;
            CommTerm();
            {
                PPTREE  _ptTree0 = 0 ;
                {
                    PPTREE  _ptRes1 = 0 ;
                    _ptRes1 =  MakeTree(OPERATOR, 1);
                    ReplaceTree(_ptRes1, 1, MakeString("=="));
                    _ptTree0 =  _ptRes1 ;
                }
                _retValue =  _ptTree0 ;
                goto operator_function_name_ret ;
            }
            break ;
        case INFEEGAL : 
            tokenAhead = 0 ;
            CommTerm();
            {
                PPTREE  _ptTree0 = 0 ;
                {
                    PPTREE  _ptRes1 = 0 ;
                    _ptRes1 =  MakeTree(OPERATOR, 1);
                    ReplaceTree(_ptRes1, 1, MakeString("<="));
                    _ptTree0 =  _ptRes1 ;
                }
                _retValue =  _ptTree0 ;
                goto operator_function_name_ret ;
            }
            break ;
        case SUPEEGAL : 
            tokenAhead = 0 ;
            CommTerm();
            {
                PPTREE  _ptTree0 = 0 ;
                {
                    PPTREE  _ptRes1 = 0 ;
                    _ptRes1 =  MakeTree(OPERATOR, 1);
                    ReplaceTree(_ptRes1, 1, MakeString(">="));
                    _ptTree0 =  _ptRes1 ;
                }
                _retValue =  _ptTree0 ;
                goto operator_function_name_ret ;
            }
            break ;
        case INFEINFE : 
            tokenAhead = 0 ;
            CommTerm();
            {
                PPTREE  _ptTree0 = 0 ;
                {
                    PPTREE  _ptRes1 = 0 ;
                    _ptRes1 =  MakeTree(OPERATOR, 1);
                    ReplaceTree(_ptRes1, 1, MakeString("<<"));
                    _ptTree0 =  _ptRes1 ;
                }
                _retValue =  _ptTree0 ;
                goto operator_function_name_ret ;
            }
            break ;
        case SUPESUPE : 
            tokenAhead = 0 ;
            CommTerm();
            {
                PPTREE  _ptTree0 = 0 ;
                {
                    PPTREE  _ptRes1 = 0 ;
                    _ptRes1 =  MakeTree(OPERATOR, 1);
                    ReplaceTree(_ptRes1, 1, MakeString(">>"));
                    _ptTree0 =  _ptRes1 ;
                }
                _retValue =  _ptTree0 ;
                goto operator_function_name_ret ;
            }
            break ;
        case INFEINFEEGAL : 
            tokenAhead = 0 ;
            CommTerm();
            {
                PPTREE  _ptTree0 = 0 ;
                {
                    PPTREE  _ptRes1 = 0 ;
                    _ptRes1 =  MakeTree(OPERATOR, 1);
                    ReplaceTree(_ptRes1, 1, MakeString("<<="));
                    _ptTree0 =  _ptRes1 ;
                }
                _retValue =  _ptTree0 ;
                goto operator_function_name_ret ;
            }
            break ;
        case SUPESUPEEGAL : 
            tokenAhead = 0 ;
            CommTerm();
            {
                PPTREE  _ptTree0 = 0 ;
                {
                    PPTREE  _ptRes1 = 0 ;
                    _ptRes1 =  MakeTree(OPERATOR, 1);
                    ReplaceTree(_ptRes1, 1, MakeString(">>="));
                    _ptTree0 =  _ptRes1 ;
                }
                _retValue =  _ptTree0 ;
                goto operator_function_name_ret ;
            }
            break ;
        case ETCOETCO : 
            tokenAhead = 0 ;
            CommTerm();
            {
                PPTREE  _ptTree0 = 0 ;
                {
                    PPTREE  _ptRes1 = 0 ;
                    _ptRes1 =  MakeTree(OPERATOR, 1);
                    ReplaceTree(_ptRes1, 1, MakeString("&&"));
                    _ptTree0 =  _ptRes1 ;
                }
                _retValue =  _ptTree0 ;
                goto operator_function_name_ret ;
            }
            break ;
        case VBARVBAR : 
            tokenAhead = 0 ;
            CommTerm();
            {
                PPTREE  _ptTree0 = 0 ;
                {
                    PPTREE  _ptRes1 = 0 ;
                    _ptRes1 =  MakeTree(OPERATOR, 1);
                    ReplaceTree(_ptRes1, 1, MakeString("||"));
                    _ptTree0 =  _ptRes1 ;
                }
                _retValue =  _ptTree0 ;
                goto operator_function_name_ret ;
            }
            break ;
        case PLUSPLUS : 
            tokenAhead = 0 ;
            CommTerm();
            {
                PPTREE  _ptTree0 = 0 ;
                {
                    PPTREE  _ptRes1 = 0 ;
                    _ptRes1 =  MakeTree(OPERATOR, 1);
                    ReplaceTree(_ptRes1, 1, MakeString("++"));
                    _ptTree0 =  _ptRes1 ;
                }
                _retValue =  _ptTree0 ;
                goto operator_function_name_ret ;
            }
            break ;
        case TIRETIRE : 
            tokenAhead = 0 ;
            CommTerm();
            {
                PPTREE  _ptTree0 = 0 ;
                {
                    PPTREE  _ptRes1 = 0 ;
                    _ptRes1 =  MakeTree(OPERATOR, 1);
                    ReplaceTree(_ptRes1, 1, MakeString("--"));
                    _ptTree0 =  _ptRes1 ;
                }
                _retValue =  _ptTree0 ;
                goto operator_function_name_ret ;
            }
            break ;
        case VIRG : 
            tokenAhead = 0 ;
            CommTerm();
            {
                PPTREE  _ptTree0 = 0 ;
                {
                    PPTREE  _ptRes1 = 0 ;
                    _ptRes1 =  MakeTree(OPERATOR, 1);
                    ReplaceTree(_ptRes1, 1, MakeString(","));
                    _ptTree0 =  _ptRes1 ;
                }
                _retValue =  _ptTree0 ;
                goto operator_function_name_ret ;
            }
            break ;
        case TIRESUPE : 
            tokenAhead = 0 ;
            CommTerm();
            {
                PPTREE  _ptTree0 = 0 ;
                {
                    PPTREE  _ptRes1 = 0 ;
                    _ptRes1 =  MakeTree(OPERATOR, 1);
                    ReplaceTree(_ptRes1, 1, MakeString("->"));
                    _ptTree0 =  _ptRes1 ;
                }
                _retValue =  _ptTree0 ;
                goto operator_function_name_ret ;
            }
            break ;
        case TIRESUPEETOI : 
            tokenAhead = 0 ;
            CommTerm();
            {
                PPTREE  _ptTree0 = 0 ;
                {
                    PPTREE  _ptRes1 = 0 ;
                    _ptRes1 =  MakeTree(OPERATOR, 1);
                    ReplaceTree(_ptRes1, 1, MakeString("->*"));
                    _ptTree0 =  _ptRes1 ;
                }
                _retValue =  _ptTree0 ;
                goto operator_function_name_ret ;
            }
            break ;
        case POUV : 
            tokenAhead = 0 ;
            CommTerm();
            (tokenAhead == 1 || (Lex(), TRACE_LEX(1)));
            if ( !SEE_TOKEN(PFER, ")") || !(CommTerm(), 1) ) {
                MulFreeTree(3, list, retTree, valTree);
                TOKEN_EXIT(operator_function_name_exit, ")");
            } else {
                tokenAhead =  0 ;
            }
            {
                PPTREE  _ptTree0 = 0 ;
                {
                    PPTREE  _ptRes1 = 0 ;
                    _ptRes1 =  MakeTree(OPERATOR, 1);
                    ReplaceTree(_ptRes1, 1, MakeString("()"));
                    _ptTree0 =  _ptRes1 ;
                }
                _retValue =  _ptTree0 ;
                goto operator_function_name_ret ;
            }
            break ;
        case COUV : 
            tokenAhead = 0 ;
            CommTerm();
            (tokenAhead == 1 || (Lex(), TRACE_LEX(1)));
            if ( !SEE_TOKEN(CFER, "]") || !(CommTerm(), 1) ) {
                MulFreeTree(3, list, retTree, valTree);
                TOKEN_EXIT(operator_function_name_exit, "]");
            } else {
                tokenAhead =  0 ;
            }
            {
                PPTREE  _ptTree0 = 0 ;
                {
                    PPTREE  _ptRes1 = 0 ;
                    _ptRes1 =  MakeTree(OPERATOR, 1);
                    ReplaceTree(_ptRes1, 1, MakeString("[]"));
                    _ptTree0 =  _ptRes1 ;
                }
                _retValue =  _ptTree0 ;
                goto operator_function_name_ret ;
            }
            break ;
        default : break ;
    }
    if ( NPUSH_CALL_AFF_VERIF(retTree = , _Tak(const_or_volatile), 30, cplus) ) {
        {
            PPTREE  _ptRes0 = 0 ;
            _ptRes0 =  MakeTree(FOR_DECLARATION, 3);
            ReplaceTree(_ptRes0, 1, retTree);
            retTree =  _ptRes0 ;
        }
    } else {
        {
            PPTREE  _ptRes0 = 0 ;
            _ptRes0 =  MakeTree(FOR_DECLARATION, 3);
            retTree =  _ptRes0 ;
        }
    }
    {
        PPTREE  _ptTree0 = 0 ;
        if ( (_ptTree0 = NQUICK_CALL(_Tak(type_specifier)(error_free), 145, cplus)) == (PPTREE) -1 ) {
            MulFreeTree(4, _ptTree0, list, retTree, valTree);
            PROG_EXIT(operator_function_name_exit, "operator_function_name");
        }
        ReplaceTree(retTree, 2, _ptTree0);
    }
    if ( NPUSH_CALL_AFF_VERIF(valTree = , _Tak(ptr_operator), 115, cplus) ) {
        list =  AddList(list, valTree);
        ReplaceTree(retTree, 3, list);
    }
    {
        PPTREE  _ptTree0 = 0 ;
        {
            PPTREE  _ptRes1 = 0 ;
            _ptRes1 =  MakeTree(OPERATOR, 1);
            ReplaceTree(_ptRes1, 1, retTree);
            _ptTree0 =  _ptRes1 ;
        }
        _retValue =  _ptTree0 ;
        goto operator_function_name_ret ;
    }
    (tokenAhead || (LexComment(), tokenAhead =  -1, TRACE_LEX(1)));
    if ( _nbPre || listComm ) 
        AddComm(_ptPreComm, _nbPre, (PPTREE)0, lastTree);
    else {
        _lastTree =  (PPTREE)0 ;
        _funcLevel-- ;
    }
    return (PPTREE)0 ;
operator_function_name_exit : 
    _Debug = TRACE_RULE("operator_function_name", TRACE_EXIT, (PPTREE)0);
    _funcLevel-- ;
    return (PPTREE) -1 ;
operator_function_name_ret : 
    _Debug = TRACE_RULE("operator_function_name", TRACE_RETURN, _retValue);
    (tokenAhead || (LexComment(), tokenAhead =  -1, TRACE_LEX(1)));
    if ( _nbPre || listComm ) 
        AddComm(_ptPreComm, _nbPre, _retValue, lastTree);
    else {
        _lastTree =  _retValue ;
        _funcLevel-- ;
    }
    return _retValue ;
}

PPTREE cplus::other_config ( int error_free )
{
    PFILE_POSITION  _filePosition = (PFILE_POSITION)0 ;
    int             _value, _nbPre = 0 ;
    PCOMM_ELEM      _ptPreComm = ((tokenAhead || (LexComment(), tokenAhead =  -1, TRACE_LEX(1))), listComm ? LookComm(&_nbPre) : (_funcLevel++, (PCOMM_ELEM)0));
    int             _Debug = TRACE_RULE("other_config", TRACE_ENTER, (PPTREE)0);
    PPTREE          lastTree = _lastTree, _retValue ;
    
    {
        PPTREE  _ptTree0 = 0 ;
        {
            PPTREE  _ptTree1 = 0, _ptRes1 = 0 ;
            _ptRes1 =  MakeTree(PRAGMA, 1);
            (tokenAhead == 8 || (LexPragma(), TRACE_LEX(1)));
            if ( !TERM_OR_META(PRAGMA_CONTENT, "PRAGMA_CONTENT") || !BUILD_TERM_META(_ptTree1) ) {
                MulFreeTree(3, _ptRes1, _ptTree1, _ptTree0);
                TOKEN_EXIT(other_config_exit, "PRAGMA_CONTENT");
            } else {
                tokenAhead =  0 ;
            }
            ReplaceTree(_ptRes1, 1, _ptTree1);
            _ptTree0 =  _ptRes1 ;
        }
        _retValue =  _ptTree0 ;
        goto other_config_ret ;
    }
    (tokenAhead || (LexComment(), tokenAhead =  -1, TRACE_LEX(1)));
    if ( _nbPre || listComm ) 
        AddComm(_ptPreComm, _nbPre, (PPTREE)0, lastTree);
    else {
        _lastTree =  (PPTREE)0 ;
        _funcLevel-- ;
    }
    return (PPTREE)0 ;
other_config_exit : 
    _Debug = TRACE_RULE("other_config", TRACE_EXIT, (PPTREE)0);
    _funcLevel-- ;
    return (PPTREE) -1 ;
other_config_ret : 
    _Debug = TRACE_RULE("other_config", TRACE_RETURN, _retValue);
    (tokenAhead || (LexComment(), tokenAhead =  -1, TRACE_LEX(1)));
    if ( _nbPre || listComm ) 
        AddComm(_ptPreComm, _nbPre, _retValue, lastTree);
    else {
        _lastTree =  _retValue ;
        _funcLevel-- ;
    }
    return _retValue ;
}

PPTREE cplus::parameter_list ( int error_free )
{
    PFILE_POSITION  _filePosition = (PFILE_POSITION)0 ;
    int             _value, _nbPre = 0 ;
    PCOMM_ELEM      _ptPreComm = ((tokenAhead || (LexComment(), tokenAhead =  -1, TRACE_LEX(1))), listComm ? LookComm(&_nbPre) : (_funcLevel++, (PCOMM_ELEM)0));
    int             _Debug = TRACE_RULE("parameter_list", TRACE_ENTER, (PPTREE)0);
    PPTREE          lastTree = _lastTree, _retValue ;
    PPTREE          _addlist1 = (PPTREE)0 ;
    PPTREE          paramList = (PPTREE)0, none = (PPTREE)0 ;
    
    (tokenAhead == 1 || (Lex(), TRACE_LEX(1)));
    if ( !SEE_TOKEN(POUV, "(") || !(CommTerm(), 1) ) {
        MulFreeTree(3, _addlist1, none, paramList);
        TOKEN_EXIT(parameter_list_exit, "(");
    } else {
        tokenAhead =  0 ;
    }
    if ( (tokenAhead == 1 || (Lex(), TRACE_LEX(1))) && SEE_TOKEN(IDENT, "IDENT") ) {
        {
            int exit = 0 ;
            {
                PPTREE  _ptTree0 = 0 ;
                {
                    PPTREE  _ptTree1 = 0, _ptRes1 = 0 ;
                    _ptRes1 =  MakeTree(IDENT, 1);
                    (tokenAhead == 1 || (Lex(), TRACE_LEX(1)));
                    if ( !TERM_OR_META(IDENT, "IDENT") || !BUILD_TERM_META(_ptTree1) ) {
                        MulFreeTree(6, _ptRes1, _ptTree1, _ptTree0, _addlist1, none, paramList);
                        TOKEN_EXIT(parameter_list_exit, "IDENT");
                    } else {
                        tokenAhead =  0 ;
                    }
                    ReplaceTree(_ptRes1, 1, _ptTree1);
                    _ptTree0 =  _ptRes1 ;
                }
                paramList =  AddList(paramList, _ptTree0);
            }
            _addlist1 =  paramList ;
            while ( !(exit) && ((tokenAhead == 1 || (Lex(), TRACE_LEX(1))) && SEE_TOKEN(VIRG, ",") && ((tokenAhead = 0), CommTerm(), 1)) ) {
                if ( (tokenAhead == 1 || (Lex(), TRACE_LEX(1))) && SEE_TOKEN(IDENT, "IDENT") ) {
                    {
                        PPTREE  _ptTree0 = 0 ;
                        {
                            PPTREE  _ptTree1 = 0, _ptRes1 = 0 ;
                            _ptRes1 =  MakeTree(IDENT, 1);
                            (tokenAhead == 1 || (Lex(), TRACE_LEX(1)));
                            if ( !TERM_OR_META(IDENT, "IDENT") || !BUILD_TERM_META(_ptTree1) ) {
                                MulFreeTree(6, _ptRes1, _ptTree1, _ptTree0, _addlist1, none, paramList);
                                TOKEN_EXIT(parameter_list_exit, "IDENT");
                            } else {
                                tokenAhead =  0 ;
                            }
                            ReplaceTree(_ptRes1, 1, _ptTree1);
                            _ptTree0 =  _ptRes1 ;
                        }
                        _addlist1 =  AddList(_addlist1, _ptTree0);
                    }
                    if ( paramList ) {
                        _addlist1 =  SonTree(_addlist1, 2);
                    } else {
                        paramList =  _addlist1 ;
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
    } else {
        paramList =  AddList(paramList, none);
    }
    (tokenAhead == 1 || (Lex(), TRACE_LEX(1)));
    if ( !SEE_TOKEN(PFER, ")") || !(CommTerm(), 1) ) {
        MulFreeTree(3, _addlist1, none, paramList);
        TOKEN_EXIT(parameter_list_exit, ")");
    } else {
        tokenAhead =  0 ;
    }
    {
        _retValue =  paramList ;
        goto parameter_list_ret ;
    }
    (tokenAhead || (LexComment(), tokenAhead =  -1, TRACE_LEX(1)));
    if ( _nbPre || listComm ) 
        AddComm(_ptPreComm, _nbPre, (PPTREE)0, lastTree);
    else {
        _lastTree =  (PPTREE)0 ;
        _funcLevel-- ;
    }
    return (PPTREE)0 ;
parameter_list_exit : 
    _Debug = TRACE_RULE("parameter_list", TRACE_EXIT, (PPTREE)0);
    _funcLevel-- ;
    return (PPTREE) -1 ;
parameter_list_ret : 
    _Debug = TRACE_RULE("parameter_list", TRACE_RETURN, _retValue);
    (tokenAhead || (LexComment(), tokenAhead =  -1, TRACE_LEX(1)));
    if ( _nbPre || listComm ) 
        AddComm(_ptPreComm, _nbPre, _retValue, lastTree);
    else {
        _lastTree =  _retValue ;
        _funcLevel-- ;
    }
    return _retValue ;
}
