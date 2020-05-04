/*************************************************************************/
/*                                                                       */
/*        Produced by MetaGen version 2.0  -    1989-2006                 */
/*       Syntaxic Analyzer Meta Generator developped by                  */
/*                  Eric Lavillonniere                                   */
/*                                                                       */
/*************************************************************************/
#include "token.h"
#include "cplus.h"

PPTREE cplus::abstract_declarator ( int error_free )
{
    PFILE_POSITION  _filePosition = (PFILE_POSITION)0 ;
    int             _value, _nbPre = 0 ;
    PCOMM_ELEM      _ptPreComm = ((tokenAhead || (LexComment(), tokenAhead =  -1, TRACE_LEX(1))), listComm ? LookComm(&_nbPre) : (_funcLevel++, (PCOMM_ELEM)0));
    int             _Debug = TRACE_RULE("abstract_declarator", TRACE_ENTER, (PPTREE)0);
    PPTREE          lastTree = _lastTree, _retValue ;
    PPTREE          valTree = (PPTREE)0, retTree = (PPTREE)0 ;
    
    if ( NPUSH_CALL_AFF_VERIF(valTree = , _Tak(range_modifier), 121, cplus) ) {
        {
            PPTREE  _ptTree0 = 0 ;
            {
                PPTREE  _ptTree1 = 0 ;
                if ( (_ptTree1 = NQUICK_CALL(_Tak(abstract_declarator)(error_free), 2, cplus)) == (PPTREE) -1 ) {
                    MulFreeTree(4, _ptTree1, _ptTree0, retTree, valTree);
                    PROG_EXIT(abstract_declarator_exit, "abstract_declarator");
                }
                _ptTree0 =  ReplaceTree(valTree, 2, _ptTree1);
            }
            _retValue =  _ptTree0 ;
            goto abstract_declarator_ret ;
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
                    if ( (_ptTree1 = NQUICK_CALL(_Tak(abstract_declarator)(error_free), 2, cplus)) == (PPTREE) -1 ) {
                        MulFreeTree(5, _ptRes1, _ptTree1, _ptTree0, retTree, valTree);
                        PROG_EXIT(abstract_declarator_exit, "abstract_declarator");
                    }
                    ReplaceTree(_ptRes1, 1, _ptTree1);
                    _ptTree0 =  _ptRes1 ;
                }
                _retValue =  _ptTree0 ;
                goto abstract_declarator_ret ;
            }
            break ;
        case ETCO : 
            tokenAhead = 0 ;
            CommTerm();
            {
                PPTREE  _ptTree0 = 0 ;
                {
                    PPTREE  _ptTree1 = 0, _ptRes1 = 0 ;
                    _ptRes1 =  MakeTree(TYP_REF, 1);
                    if ( (_ptTree1 = NQUICK_CALL(_Tak(abstract_declarator)(error_free), 2, cplus)) == (PPTREE) -1 ) {
                        MulFreeTree(5, _ptRes1, _ptTree1, _ptTree0, retTree, valTree);
                        PROG_EXIT(abstract_declarator_exit, "abstract_declarator");
                    }
                    ReplaceTree(_ptRes1, 1, _ptTree1);
                    _ptTree0 =  _ptRes1 ;
                }
                _retValue =  _ptTree0 ;
                goto abstract_declarator_ret ;
            }
            break ;
        case TILD : 
            tokenAhead = 0 ;
            CommTerm();
            {
                PPTREE  _ptTree0 = 0 ;
                {
                    PPTREE  _ptTree1 = 0, _ptRes1 = 0 ;
                    _ptRes1 =  MakeTree(DESTRUCT, 1);
                    if ( (_ptTree1 = NQUICK_CALL(_Tak(abstract_declarator)(error_free), 2, cplus)) == (PPTREE) -1 ) {
                        MulFreeTree(5, _ptRes1, _ptTree1, _ptTree0, retTree, valTree);
                        PROG_EXIT(abstract_declarator_exit, "abstract_declarator");
                    }
                    ReplaceTree(_ptRes1, 1, _ptTree1);
                    _ptTree0 =  _ptRes1 ;
                }
                _retValue =  _ptTree0 ;
                goto abstract_declarator_ret ;
            }
            break ;
        case POUV : 
            tokenAhead = 0 ;
            CommTerm();
            if ( (tokenAhead == 1 || (Lex(), TRACE_LEX(1))) && SEE_TOKEN(PFER, ")") ) {
                MulFreeTree(2, retTree, valTree);
                LEX_EXIT("", 0);
                goto abstract_declarator_exit ;
            }
            {
                PPTREE  _ptTree0 = 0, _ptRes0 = 0 ;
                _ptRes0 =  MakeTree(TYP, 1);
                if ( (_ptTree0 = NQUICK_CALL(_Tak(abstract_declarator)(error_free), 2, cplus)) == (PPTREE) -1 ) {
                    MulFreeTree(4, _ptRes0, _ptTree0, retTree, valTree);
                    PROG_EXIT(abstract_declarator_exit, "abstract_declarator");
                }
                ReplaceTree(_ptRes0, 1, _ptTree0);
                retTree =  _ptRes0 ;
            }
            (tokenAhead == 1 || (Lex(), TRACE_LEX(1)));
            if ( !SEE_TOKEN(PFER, ")") || !(CommTerm(), 1) ) {
                MulFreeTree(2, retTree, valTree);
                TOKEN_EXIT(abstract_declarator_exit, ")");
            } else {
                tokenAhead =  0 ;
            }
            if ( NPUSH_CALL_AFF_VERIF(valTree = , _Tak(declarator_follow), 47, cplus) ) {
                {
                    PPTREE  theTree ;
                    theTree =  valTree ;
                    if ( theTree ) {
                        while ( SonTree(theTree, 1) ) 
                            if ( NumberTree(theTree) != RANGE_MODIFIER ) 
                                theTree =  SonTree(theTree, 1);
                            else 
                                theTree =  SonTree(theTree, 2);
                        ReplaceTree(theTree, 1, retTree);
                        
                        /* modif portage sun */
                        retTree =  valTree ;
                    }
                }
            }
            break ;
        case META : 
        case IDENT : 
            if ( (valTree = NQUICK_CALL(_Tak(member_declarator)(error_free), 95, cplus)) == (PPTREE) -1 ) {
                MulFreeTree(2, retTree, valTree);
                PROG_EXIT(abstract_declarator_exit, "abstract_declarator");
            }
            {
                PPTREE  _ptTree0 = 0 ;
                {
                    PPTREE  _ptTree1 = 0 ;
                    if ( (_ptTree1 = NQUICK_CALL(_Tak(abstract_declarator)(error_free), 2, cplus)) == (PPTREE) -1 ) {
                        MulFreeTree(4, _ptTree1, _ptTree0, retTree, valTree);
                        PROG_EXIT(abstract_declarator_exit, "abstract_declarator");
                    }
                    _ptTree0 =  ReplaceTree(valTree, 2, _ptTree1);
                }
                _retValue =  _ptTree0 ;
                goto abstract_declarator_ret ;
            }
            break ;
        default : 
            if ( NPUSH_CALL_AFF_VERIF(valTree = , _Tak(declarator_follow), 47, cplus) ) {
                retTree =  valTree ;
            }
            break ;
    }
    {
        _retValue =  retTree ;
        goto abstract_declarator_ret ;
    }
    (tokenAhead || (LexComment(), tokenAhead =  -1, TRACE_LEX(1)));
    if ( _nbPre || listComm ) 
        AddComm(_ptPreComm, _nbPre, (PPTREE)0, lastTree);
    else {
        _lastTree =  (PPTREE)0 ;
        _funcLevel-- ;
    }
    return (PPTREE)0 ;
abstract_declarator_exit : 
    _Debug = TRACE_RULE("abstract_declarator", TRACE_EXIT, (PPTREE)0);
    _funcLevel-- ;
    return (PPTREE) -1 ;
abstract_declarator_ret : 
    _Debug = TRACE_RULE("abstract_declarator", TRACE_RETURN, _retValue);
    (tokenAhead || (LexComment(), tokenAhead =  -1, TRACE_LEX(1)));
    if ( _nbPre || listComm ) 
        AddComm(_ptPreComm, _nbPre, _retValue, lastTree);
    else {
        _lastTree =  _retValue ;
        _funcLevel-- ;
    }
    return _retValue ;
}

PPTREE cplus::additive_expression ( int error_free )
{
    PFILE_POSITION  _filePosition = (PFILE_POSITION)0 ;
    int             _value, _nbPre = 0 ;
    PCOMM_ELEM      _ptPreComm = ((tokenAhead || (LexComment(), tokenAhead =  -1, TRACE_LEX(1))), listComm ? LookComm(&_nbPre) : (_funcLevel++, (PCOMM_ELEM)0));
    int             _Debug = TRACE_RULE("additive_expression", TRACE_ENTER, (PPTREE)0);
    PPTREE          lastTree = _lastTree, _retValue ;
    PPTREE          expTree = (PPTREE)0 ;
    
    if ( (expTree = NQUICK_CALL(_Tak(multiplicative_expression)(error_free), 97, cplus)) == (PPTREE) -1 ) {
        MulFreeTree(1, expTree);
        PROG_EXIT(additive_expression_exit, "additive_expression");
    }
    while ( (tokenAhead == 1 || (Lex(), TRACE_LEX(1))) && SEE_TOKEN(PLUS, "+") || (tokenAhead == 1 || (Lex(), TRACE_LEX(1))) && SEE_TOKEN(TIRE, "-") ) {
        (tokenAhead == 1 || (Lex(), TRACE_LEX(1)));
        switch ( lexEl.Value ) {
            case PLUS : 
                tokenAhead = 0 ;
                CommTerm();
                {
                    PPTREE  _ptTree0 = 0, _ptRes0 = 0 ;
                    _ptRes0 =  MakeTree(PLUS, 2);
                    ReplaceTree(_ptRes0, 1, expTree);
                    if ( (_ptTree0 = NQUICK_CALL(_Tak(multiplicative_expression)(error_free), 97, cplus)) == (PPTREE) -1 ) {
                        MulFreeTree(3, _ptRes0, _ptTree0, expTree);
                        PROG_EXIT(additive_expression_exit, "additive_expression");
                    }
                    ReplaceTree(_ptRes0, 2, _ptTree0);
                    expTree =  _ptRes0 ;
                }
                break ;
            case TIRE : 
                tokenAhead = 0 ;
                CommTerm();
                {
                    PPTREE  _ptTree0 = 0, _ptRes0 = 0 ;
                    _ptRes0 =  MakeTree(MINUS, 2);
                    ReplaceTree(_ptRes0, 1, expTree);
                    if ( (_ptTree0 = NQUICK_CALL(_Tak(multiplicative_expression)(error_free), 97, cplus)) == (PPTREE) -1 ) {
                        MulFreeTree(3, _ptRes0, _ptTree0, expTree);
                        PROG_EXIT(additive_expression_exit, "additive_expression");
                    }
                    ReplaceTree(_ptRes0, 2, _ptTree0);
                    expTree =  _ptRes0 ;
                }
                break ;
            default : 
                MulFreeTree(1, expTree);
                CASE_EXIT(additive_expression_exit, "either + or -");
                break ;
        }
    }
    {
        _retValue =  expTree ;
        goto additive_expression_ret ;
    }
    (tokenAhead || (LexComment(), tokenAhead =  -1, TRACE_LEX(1)));
    if ( _nbPre || listComm ) 
        AddComm(_ptPreComm, _nbPre, (PPTREE)0, lastTree);
    else {
        _lastTree =  (PPTREE)0 ;
        _funcLevel-- ;
    }
    return (PPTREE)0 ;
additive_expression_exit : 
    _Debug = TRACE_RULE("additive_expression", TRACE_EXIT, (PPTREE)0);
    _funcLevel-- ;
    return (PPTREE) -1 ;
additive_expression_ret : 
    _Debug = TRACE_RULE("additive_expression", TRACE_RETURN, _retValue);
    (tokenAhead || (LexComment(), tokenAhead =  -1, TRACE_LEX(1)));
    if ( _nbPre || listComm ) 
        AddComm(_ptPreComm, _nbPre, _retValue, lastTree);
    else {
        _lastTree =  _retValue ;
        _funcLevel-- ;
    }
    return _retValue ;
}

PPTREE cplus::alloc_expression ( int error_free )
{
    PFILE_POSITION  _filePosition = (PFILE_POSITION)0 ;
    int             _value, _nbPre = 0 ;
    PCOMM_ELEM      _ptPreComm = ((tokenAhead || (LexComment(), tokenAhead =  -1, TRACE_LEX(1))), listComm ? LookComm(&_nbPre) : (_funcLevel++, (PCOMM_ELEM)0));
    int             _Debug = TRACE_RULE("alloc_expression", TRACE_ENTER, (PPTREE)0);
    PPTREE          lastTree = _lastTree, _retValue ;
    PPTREE          retTree = (PPTREE)0, valTree = (PPTREE)0 ;
    
    if ( (tokenAhead == 1 || (Lex(), TRACE_LEX(1))) && SEE_TOKEN(DPOIDPOI, "::") && ((tokenAhead = 0), CommTerm(), 1) ) {
        (tokenAhead == 1 || (Lex(), TRACE_LEX(1)));
        switch ( lexEl.Value ) {
            case NEW : 
                if ( (valTree = NQUICK_CALL(_Tak(allocation_expression)(error_free), 5, cplus)) == (PPTREE) -1 ) {
                    MulFreeTree(2, retTree, valTree);
                    PROG_EXIT(alloc_expression_exit, "alloc_expression");
                }
                break ;
            case DELETE : 
                if ( (valTree = NQUICK_CALL(_Tak(deallocation_expression)(error_free), 45, cplus)) == (PPTREE) -1 ) {
                    MulFreeTree(2, retTree, valTree);
                    PROG_EXIT(alloc_expression_exit, "alloc_expression");
                }
                break ;
            default : 
                MulFreeTree(2, retTree, valTree);
                CASE_EXIT(alloc_expression_exit, "either new or delete");
                break ;
        }
        {
            PPTREE  _ptRes0 = 0 ;
            _ptRes0 =  MakeTree(QUALIFIED, 2);
            ReplaceTree(_ptRes0, 2, valTree);
            retTree =  _ptRes0 ;
        }
    } else {
        (tokenAhead == 1 || (Lex(), TRACE_LEX(1)));
        switch ( lexEl.Value ) {
            case NEW : 
                if ( (valTree = NQUICK_CALL(_Tak(allocation_expression)(error_free), 5, cplus)) == (PPTREE) -1 ) {
                    MulFreeTree(2, retTree, valTree);
                    PROG_EXIT(alloc_expression_exit, "alloc_expression");
                }
                break ;
            case DELETE : 
                if ( (valTree = NQUICK_CALL(_Tak(deallocation_expression)(error_free), 45, cplus)) == (PPTREE) -1 ) {
                    MulFreeTree(2, retTree, valTree);
                    PROG_EXIT(alloc_expression_exit, "alloc_expression");
                }
                break ;
            default : 
                MulFreeTree(2, retTree, valTree);
                CASE_EXIT(alloc_expression_exit, "either new or delete");
                break ;
        }
        retTree =  valTree ;
    }
    {
        _retValue =  retTree ;
        goto alloc_expression_ret ;
    }
    (tokenAhead || (LexComment(), tokenAhead =  -1, TRACE_LEX(1)));
    if ( _nbPre || listComm ) 
        AddComm(_ptPreComm, _nbPre, (PPTREE)0, lastTree);
    else {
        _lastTree =  (PPTREE)0 ;
        _funcLevel-- ;
    }
    return (PPTREE)0 ;
alloc_expression_exit : 
    _Debug = TRACE_RULE("alloc_expression", TRACE_EXIT, (PPTREE)0);
    _funcLevel-- ;
    return (PPTREE) -1 ;
alloc_expression_ret : 
    _Debug = TRACE_RULE("alloc_expression", TRACE_RETURN, _retValue);
    (tokenAhead || (LexComment(), tokenAhead =  -1, TRACE_LEX(1)));
    if ( _nbPre || listComm ) 
        AddComm(_ptPreComm, _nbPre, _retValue, lastTree);
    else {
        _lastTree =  _retValue ;
        _funcLevel-- ;
    }
    return _retValue ;
}

PPTREE cplus::allocation_expression ( int error_free )
{
    PFILE_POSITION  _filePosition = (PFILE_POSITION)0 ;
    int             _value, _nbPre = 0 ;
    PCOMM_ELEM      _ptPreComm = ((tokenAhead || (LexComment(), tokenAhead =  -1, TRACE_LEX(1))), listComm ? LookComm(&_nbPre) : (_funcLevel++, (PCOMM_ELEM)0));
    int             _Debug = TRACE_RULE("allocation_expression", TRACE_ENTER, (PPTREE)0);
    PPTREE          lastTree = _lastTree, _retValue ;
    PPTREE          _addlist1 = (PPTREE)0 ;
    PPTREE          retTree = (PPTREE)0, list = (PPTREE)0 ;
    
    (tokenAhead == 1 || (Lex(), TRACE_LEX(1)));
    if ( !SEE_TOKEN(NEW, "new") || !(CommTerm(), 1) ) {
        MulFreeTree(3, _addlist1, list, retTree);
        TOKEN_EXIT(allocation_expression_exit, "new");
    } else {
        tokenAhead =  0 ;
    }
    if ( !NPUSH_CALL_AFF_VERIF(retTree = , _Tak(new_1), 99, cplus) ) {
        if ( (retTree = NQUICK_CALL(_Tak(new_2)(error_free), 100, cplus)) == (PPTREE) -1 ) {
            MulFreeTree(3, _addlist1, list, retTree);
            PROG_EXIT(allocation_expression_exit, "allocation_expression");
        }
    }
    if ( (tokenAhead == 1 || (Lex(), TRACE_LEX(1))) && SEE_TOKEN(POUV, "(") && ((tokenAhead = 0), CommTerm(), 1) ) {
        if ( !((tokenAhead == 1 || (Lex(), TRACE_LEX(1))) && SEE_TOKEN(PFER, ")")) ) {
            _addlist1 =  list ;
            do {
                {
                    PPTREE  _ptTree0 = 0 ;
                    if ( (_ptTree0 = NQUICK_CALL(_Tak(initializer)(error_free), 81, cplus)) == (PPTREE) -1 ) {
                        MulFreeTree(4, _ptTree0, _addlist1, list, retTree);
                        PROG_EXIT(allocation_expression_exit, "allocation_expression");
                    }
                    _addlist1 =  AddList(_addlist1, _ptTree0);
                }
                if ( list ) {
                    _addlist1 =  SonTree(_addlist1, 2);
                } else {
                    list =  _addlist1 ;
                }
            } while ( !!((tokenAhead == 1 || (Lex(), TRACE_LEX(1))) && SEE_TOKEN(VIRG, ",") && ((tokenAhead = 0), CommTerm(), 1)) );
        }
        (tokenAhead == 1 || (Lex(), TRACE_LEX(1)));
        if ( !SEE_TOKEN(PFER, ")") || !(CommTerm(), 1) ) {
            MulFreeTree(3, _addlist1, list, retTree);
            TOKEN_EXIT(allocation_expression_exit, ")");
        } else {
            tokenAhead =  0 ;
        }
        {
            PPTREE  _ptTree0 = 0 ;
            {
                PPTREE  _ptRes1 = 0 ;
                _ptRes1 =  MakeTree(INIT_NEW, 1);
                ReplaceTree(_ptRes1, 1, list);
                _ptTree0 =  _ptRes1 ;
            }
            ReplaceTree(retTree, 3, _ptTree0);
        }
    }
    {
        _retValue =  retTree ;
        goto allocation_expression_ret ;
    }
    (tokenAhead || (LexComment(), tokenAhead =  -1, TRACE_LEX(1)));
    if ( _nbPre || listComm ) 
        AddComm(_ptPreComm, _nbPre, (PPTREE)0, lastTree);
    else {
        _lastTree =  (PPTREE)0 ;
        _funcLevel-- ;
    }
    return (PPTREE)0 ;
allocation_expression_exit : 
    _Debug = TRACE_RULE("allocation_expression", TRACE_EXIT, (PPTREE)0);
    _funcLevel-- ;
    return (PPTREE) -1 ;
allocation_expression_ret : 
    _Debug = TRACE_RULE("allocation_expression", TRACE_RETURN, _retValue);
    (tokenAhead || (LexComment(), tokenAhead =  -1, TRACE_LEX(1)));
    if ( _nbPre || listComm ) 
        AddComm(_ptPreComm, _nbPre, _retValue, lastTree);
    else {
        _lastTree =  _retValue ;
        _funcLevel-- ;
    }
    return _retValue ;
}

PPTREE cplus::and_expression ( int error_free )
{
    PFILE_POSITION  _filePosition = (PFILE_POSITION)0 ;
    int             _value, _nbPre = 0 ;
    PCOMM_ELEM      _ptPreComm = ((tokenAhead || (LexComment(), tokenAhead =  -1, TRACE_LEX(1))), listComm ? LookComm(&_nbPre) : (_funcLevel++, (PCOMM_ELEM)0));
    int             _Debug = TRACE_RULE("and_expression", TRACE_ENTER, (PPTREE)0);
    PPTREE          lastTree = _lastTree, _retValue ;
    PPTREE          expTree = (PPTREE)0 ;
    
    if ( (expTree = NQUICK_CALL(_Tak(equality_expression)(error_free), 57, cplus)) == (PPTREE) -1 ) {
        MulFreeTree(1, expTree);
        PROG_EXIT(and_expression_exit, "and_expression");
    }
    while ( (tokenAhead == 1 || (Lex(), TRACE_LEX(1))) && SEE_TOKEN(ETCO, "&") && ((tokenAhead = 0), CommTerm(), 1) ) {
        {
            PPTREE  _ptTree0 = 0, _ptRes0 = 0 ;
            _ptRes0 =  MakeTree(LAND, 2);
            ReplaceTree(_ptRes0, 1, expTree);
            if ( (_ptTree0 = NQUICK_CALL(_Tak(equality_expression)(error_free), 57, cplus)) == (PPTREE) -1 ) {
                MulFreeTree(3, _ptRes0, _ptTree0, expTree);
                PROG_EXIT(and_expression_exit, "and_expression");
            }
            ReplaceTree(_ptRes0, 2, _ptTree0);
            expTree =  _ptRes0 ;
        }
    }
    {
        _retValue =  expTree ;
        goto and_expression_ret ;
    }
    (tokenAhead || (LexComment(), tokenAhead =  -1, TRACE_LEX(1)));
    if ( _nbPre || listComm ) 
        AddComm(_ptPreComm, _nbPre, (PPTREE)0, lastTree);
    else {
        _lastTree =  (PPTREE)0 ;
        _funcLevel-- ;
    }
    return (PPTREE)0 ;
and_expression_exit : 
    _Debug = TRACE_RULE("and_expression", TRACE_EXIT, (PPTREE)0);
    _funcLevel-- ;
    return (PPTREE) -1 ;
and_expression_ret : 
    _Debug = TRACE_RULE("and_expression", TRACE_RETURN, _retValue);
    (tokenAhead || (LexComment(), tokenAhead =  -1, TRACE_LEX(1)));
    if ( _nbPre || listComm ) 
        AddComm(_ptPreComm, _nbPre, _retValue, lastTree);
    else {
        _lastTree =  _retValue ;
        _funcLevel-- ;
    }
    return _retValue ;
}

PPTREE cplus::arg_declarator ( int error_free )
{
    PFILE_POSITION  _filePosition = (PFILE_POSITION)0 ;
    int             _value, _nbPre = 0 ;
    PCOMM_ELEM      _ptPreComm = ((tokenAhead || (LexComment(), tokenAhead =  -1, TRACE_LEX(1))), listComm ? LookComm(&_nbPre) : (_funcLevel++, (PCOMM_ELEM)0));
    int             _Debug = TRACE_RULE("arg_declarator", TRACE_ENTER, (PPTREE)0);
    PPTREE          lastTree = _lastTree, _retValue ;
    PPTREE          retTree = (PPTREE)0 ;
    
    if ( (retTree = NQUICK_CALL(_Tak(arg_declarator_base)(error_free), 8, cplus)) == (PPTREE) -1 ) {
        MulFreeTree(1, retTree);
        PROG_EXIT(arg_declarator_exit, "arg_declarator");
    }
    if ( !((tokenAhead == 1 || (Lex(), TRACE_LEX(1))) && SEE_TOKEN(PFER, ")")) && !((tokenAhead == 1 || (Lex(), TRACE_LEX(1))) && SEE_TOKEN(POINPOINPOIN, "...")) ) {
        (tokenAhead == 1 || (Lex(), TRACE_LEX(1)));
        if ( !SEE_TOKEN(VIRG, ",") || !(CommTerm(), 1) ) {
            MulFreeTree(1, retTree);
            TOKEN_EXIT(arg_declarator_exit, ",");
        } else {
            tokenAhead =  0 ;
        }
    }
    {
        _retValue =  retTree ;
        goto arg_declarator_ret ;
    }
    (tokenAhead || (LexComment(), tokenAhead =  -1, TRACE_LEX(1)));
    if ( _nbPre || listComm ) 
        AddComm(_ptPreComm, _nbPre, (PPTREE)0, lastTree);
    else {
        _lastTree =  (PPTREE)0 ;
        _funcLevel-- ;
    }
    return (PPTREE)0 ;
arg_declarator_exit : 
    _Debug = TRACE_RULE("arg_declarator", TRACE_EXIT, (PPTREE)0);
    _funcLevel-- ;
    return (PPTREE) -1 ;
arg_declarator_ret : 
    _Debug = TRACE_RULE("arg_declarator", TRACE_RETURN, _retValue);
    (tokenAhead || (LexComment(), tokenAhead =  -1, TRACE_LEX(1)));
    if ( _nbPre || listComm ) 
        AddComm(_ptPreComm, _nbPre, _retValue, lastTree);
    else {
        _lastTree =  _retValue ;
        _funcLevel-- ;
    }
    return _retValue ;
}

PPTREE cplus::arg_declarator_base ( int error_free )
{
    PFILE_POSITION  _filePosition = (PFILE_POSITION)0 ;
    int             _value, _nbPre = 0 ;
    PCOMM_ELEM      _ptPreComm = ((tokenAhead || (LexComment(), tokenAhead =  -1, TRACE_LEX(1))), listComm ? LookComm(&_nbPre) : (_funcLevel++, (PCOMM_ELEM)0));
    int             _Debug = TRACE_RULE("arg_declarator_base", TRACE_ENTER, (PPTREE)0);
    PPTREE          lastTree = _lastTree, _retValue ;
    PPTREE          retTree = (PPTREE)0, valTree = (PPTREE)0 ;
    
    if ( (retTree = NQUICK_CALL(_Tak(type_specifier)(error_free), 145, cplus)) == (PPTREE) -1 ) {
        MulFreeTree(2, retTree, valTree);
        PROG_EXIT(arg_declarator_base_exit, "arg_declarator_base");
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
    if ( (tokenAhead == 1 || (Lex(), TRACE_LEX(1))) && SEE_TOKEN(EGAL, "=") && ((tokenAhead = 0), CommTerm(), 1) ) {
        {
            PPTREE  _ptTree0 = 0, _ptRes0 = 0 ;
            _ptRes0 =  MakeTree(TYP_AFF, 2);
            ReplaceTree(_ptRes0, 1, valTree);
            if ( (_ptTree0 = NQUICK_CALL(_Tak(assignment_expression)(error_free), 16, cplus)) == (PPTREE) -1 ) {
                MulFreeTree(4, _ptRes0, _ptTree0, retTree, valTree);
                PROG_EXIT(arg_declarator_base_exit, "arg_declarator_base");
            }
            ReplaceTree(_ptRes0, 2, _ptTree0);
            valTree =  _ptRes0 ;
        }
    }
    {
        _retValue =  valTree ;
        goto arg_declarator_base_ret ;
    }
    (tokenAhead || (LexComment(), tokenAhead =  -1, TRACE_LEX(1)));
    if ( _nbPre || listComm ) 
        AddComm(_ptPreComm, _nbPre, (PPTREE)0, lastTree);
    else {
        _lastTree =  (PPTREE)0 ;
        _funcLevel-- ;
    }
    return (PPTREE)0 ;
arg_declarator_base_exit : 
    _Debug = TRACE_RULE("arg_declarator_base", TRACE_EXIT, (PPTREE)0);
    _funcLevel-- ;
    return (PPTREE) -1 ;
arg_declarator_base_ret : 
    _Debug = TRACE_RULE("arg_declarator_base", TRACE_RETURN, _retValue);
    (tokenAhead || (LexComment(), tokenAhead =  -1, TRACE_LEX(1)));
    if ( _nbPre || listComm ) 
        AddComm(_ptPreComm, _nbPre, _retValue, lastTree);
    else {
        _lastTree =  _retValue ;
        _funcLevel-- ;
    }
    return _retValue ;
}

PPTREE cplus::arg_declarator_followed ( int error_free )
{
    PFILE_POSITION  _filePosition = (PFILE_POSITION)0 ;
    int             _value, _nbPre = 0 ;
    PCOMM_ELEM      _ptPreComm = ((tokenAhead || (LexComment(), tokenAhead =  -1, TRACE_LEX(1))), listComm ? LookComm(&_nbPre) : (_funcLevel++, (PCOMM_ELEM)0));
    int             _Debug = TRACE_RULE("arg_declarator_followed", TRACE_ENTER, (PPTREE)0);
    PPTREE          lastTree = _lastTree, _retValue ;
    PPTREE          retTree = (PPTREE)0 ;
    
    if ( (retTree = NQUICK_CALL(_Tak(arg_declarator_base)(error_free), 8, cplus)) == (PPTREE) -1 ) {
        MulFreeTree(1, retTree);
        PROG_EXIT(arg_declarator_followed_exit, "arg_declarator_followed");
    }
    if ( !((tokenAhead == 1 || (Lex(), TRACE_LEX(1))) && SEE_TOKEN(POINPOINPOIN, "...")) ) {
        (tokenAhead == 1 || (Lex(), TRACE_LEX(1)));
        if ( !SEE_TOKEN(VIRG, ",") || !(CommTerm(), 1) ) {
            MulFreeTree(1, retTree);
            TOKEN_EXIT(arg_declarator_followed_exit, ",");
        } else {
            tokenAhead =  0 ;
        }
    }
    {
        _retValue =  retTree ;
        goto arg_declarator_followed_ret ;
    }
    (tokenAhead || (LexComment(), tokenAhead =  -1, TRACE_LEX(1)));
    if ( _nbPre || listComm ) 
        AddComm(_ptPreComm, _nbPre, (PPTREE)0, lastTree);
    else {
        _lastTree =  (PPTREE)0 ;
        _funcLevel-- ;
    }
    return (PPTREE)0 ;
arg_declarator_followed_exit : 
    _Debug = TRACE_RULE("arg_declarator_followed", TRACE_EXIT, (PPTREE)0);
    _funcLevel-- ;
    return (PPTREE) -1 ;
arg_declarator_followed_ret : 
    _Debug = TRACE_RULE("arg_declarator_followed", TRACE_RETURN, _retValue);
    (tokenAhead || (LexComment(), tokenAhead =  -1, TRACE_LEX(1)));
    if ( _nbPre || listComm ) 
        AddComm(_ptPreComm, _nbPre, _retValue, lastTree);
    else {
        _lastTree =  _retValue ;
        _funcLevel-- ;
    }
    return _retValue ;
}

PPTREE cplus::arg_declarator_type ( int error_free )
{
    PFILE_POSITION  _filePosition = (PFILE_POSITION)0 ;
    int             _value, _nbPre = 0 ;
    PCOMM_ELEM      _ptPreComm = ((tokenAhead || (LexComment(), tokenAhead =  -1, TRACE_LEX(1))), listComm ? LookComm(&_nbPre) : (_funcLevel++, (PCOMM_ELEM)0));
    int             _Debug = TRACE_RULE("arg_declarator_type", TRACE_ENTER, (PPTREE)0);
    PPTREE          lastTree = _lastTree, _retValue ;
    PPTREE          retTree = (PPTREE)0, valTree = (PPTREE)0 ;
    
    if ( (retTree = NQUICK_CALL(_Tak(type_specifier)(error_free), 145, cplus)) == (PPTREE) -1 ) {
        MulFreeTree(2, retTree, valTree);
        PROG_EXIT(arg_declarator_type_exit, "arg_declarator_type");
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
    if ( (tokenAhead == 1 || (Lex(), TRACE_LEX(1))) && SEE_TOKEN(EGAL, "=") && ((tokenAhead = 0), CommTerm(), 1) ) {
        if ( NPUSH_CALL_AFF_VERIF(retTree = , _Tak(type_name), 144, cplus) ) {
            {
                PPTREE  _ptRes0 = 0 ;
                _ptRes0 =  MakeTree(TYP_AFF, 2);
                ReplaceTree(_ptRes0, 1, valTree);
                ReplaceTree(_ptRes0, 2, retTree);
                valTree =  _ptRes0 ;
            }
        } else {
            {
                PPTREE  _ptTree0 = 0, _ptRes0 = 0 ;
                _ptRes0 =  MakeTree(TYP_AFF, 2);
                ReplaceTree(_ptRes0, 1, valTree);
                if ( (_ptTree0 = NQUICK_CALL(_Tak(assignment_expression)(error_free), 16, cplus)) == (PPTREE) -1 ) {
                    MulFreeTree(4, _ptRes0, _ptTree0, retTree, valTree);
                    PROG_EXIT(arg_declarator_type_exit, "arg_declarator_type");
                }
                ReplaceTree(_ptRes0, 2, _ptTree0);
                valTree =  _ptRes0 ;
            }
        }
    }
    {
        _retValue =  valTree ;
        goto arg_declarator_type_ret ;
    }
    (tokenAhead || (LexComment(), tokenAhead =  -1, TRACE_LEX(1)));
    if ( _nbPre || listComm ) 
        AddComm(_ptPreComm, _nbPre, (PPTREE)0, lastTree);
    else {
        _lastTree =  (PPTREE)0 ;
        _funcLevel-- ;
    }
    return (PPTREE)0 ;
arg_declarator_type_exit : 
    _Debug = TRACE_RULE("arg_declarator_type", TRACE_EXIT, (PPTREE)0);
    _funcLevel-- ;
    return (PPTREE) -1 ;
arg_declarator_type_ret : 
    _Debug = TRACE_RULE("arg_declarator_type", TRACE_RETURN, _retValue);
    (tokenAhead || (LexComment(), tokenAhead =  -1, TRACE_LEX(1)));
    if ( _nbPre || listComm ) 
        AddComm(_ptPreComm, _nbPre, _retValue, lastTree);
    else {
        _lastTree =  _retValue ;
        _funcLevel-- ;
    }
    return _retValue ;
}

PPTREE cplus::arg_typ_declarator ( int error_free )
{
    PFILE_POSITION  _filePosition = (PFILE_POSITION)0 ;
    int             _value, _nbPre = 0 ;
    PCOMM_ELEM      _ptPreComm = ((tokenAhead || (LexComment(), tokenAhead =  -1, TRACE_LEX(1))), listComm ? LookComm(&_nbPre) : (_funcLevel++, (PCOMM_ELEM)0));
    int             _Debug = TRACE_RULE("arg_typ_declarator", TRACE_ENTER, (PPTREE)0);
    PPTREE          lastTree = _lastTree, _retValue ;
    PPTREE          retTree = (PPTREE)0, expList = (PPTREE)0, except = (PPTREE)0 ;
    
    (tokenAhead == 1 || (Lex(), TRACE_LEX(1)));
    if ( !SEE_TOKEN(POUV, "(") || !(CommTerm(), 1) ) {
        MulFreeTree(3, except, expList, retTree);
        TOKEN_EXIT(arg_typ_declarator_exit, "(");
    } else {
        tokenAhead =  0 ;
    }
    if ( NPUSH_CALL_AFF_VERIF(expList = , _Tak(arg_typ_list), 12, cplus) ) {
        {
            PPTREE  _ptRes0 = 0 ;
            _ptRes0 =  MakeTree(TYP_LIST, 4);
            ReplaceTree(_ptRes0, 2, expList);
            retTree =  _ptRes0 ;
        }
    } else {
        {
            PPTREE  _ptRes0 = 0 ;
            _ptRes0 =  MakeTree(TYP_LIST, 4);
            retTree =  _ptRes0 ;
        }
    }
    (tokenAhead == 1 || (Lex(), TRACE_LEX(1)));
    if ( !SEE_TOKEN(PFER, ")") || !(CommTerm(), 1) ) {
        MulFreeTree(3, except, expList, retTree);
        TOKEN_EXIT(arg_typ_declarator_exit, ")");
    } else {
        tokenAhead =  0 ;
    }
    if ( NPUSH_CALL_AFF_VERIF(except = , _Tak(exception_list), 60, cplus) ) {
        ReplaceTree(retTree, 4, except);
    }
    {
        _retValue =  retTree ;
        goto arg_typ_declarator_ret ;
    }
    (tokenAhead || (LexComment(), tokenAhead =  -1, TRACE_LEX(1)));
    if ( _nbPre || listComm ) 
        AddComm(_ptPreComm, _nbPre, (PPTREE)0, lastTree);
    else {
        _lastTree =  (PPTREE)0 ;
        _funcLevel-- ;
    }
    return (PPTREE)0 ;
arg_typ_declarator_exit : 
    _Debug = TRACE_RULE("arg_typ_declarator", TRACE_EXIT, (PPTREE)0);
    _funcLevel-- ;
    return (PPTREE) -1 ;
arg_typ_declarator_ret : 
    _Debug = TRACE_RULE("arg_typ_declarator", TRACE_RETURN, _retValue);
    (tokenAhead || (LexComment(), tokenAhead =  -1, TRACE_LEX(1)));
    if ( _nbPre || listComm ) 
        AddComm(_ptPreComm, _nbPre, _retValue, lastTree);
    else {
        _lastTree =  _retValue ;
        _funcLevel-- ;
    }
    return _retValue ;
}

PPTREE cplus::arg_typ_list ( int error_free )
{
    PFILE_POSITION  _filePosition = (PFILE_POSITION)0 ;
    int             _value, _nbPre = 0 ;
    PCOMM_ELEM      _ptPreComm = ((tokenAhead || (LexComment(), tokenAhead =  -1, TRACE_LEX(1))), listComm ? LookComm(&_nbPre) : (_funcLevel++, (PCOMM_ELEM)0));
    int             _Debug = TRACE_RULE("arg_typ_list", TRACE_ENTER, (PPTREE)0);
    PPTREE          lastTree = _lastTree, _retValue ;
    PPTREE          _addlist1 = (PPTREE)0 ;
    PPTREE          retTree = (PPTREE)0, valTree = (PPTREE)0 ;
    
    {
        int followed = 0 ;
        if ( NPUSH_CALL_AFF_VERIF(valTree = , _Tak(arg_declarator_followed), 9, cplus) ) {
            followed =  1 ;
        } else {
            if ( (valTree = NQUICK_CALL(_Tak(arg_declarator)(error_free), 7, cplus)) == (PPTREE) -1 ) {
                MulFreeTree(3, _addlist1, retTree, valTree);
                PROG_EXIT(arg_typ_list_exit, "arg_typ_list");
            }
        }
        retTree =  AddList(retTree, valTree);
        {
            int exit = 0 ;
            _addlist1 =  retTree ;
            while ( followed && !exit ) {
                followed =  0 ;
                if ( NPUSH_CALL_AFF_VERIF(valTree = , _Tak(arg_declarator_followed), 9, cplus) ) {
                    followed  =  1 ;
                    _addlist1 =  AddList(_addlist1, valTree);
                    if ( retTree ) {
                        _addlist1 =  SonTree(_addlist1, 2);
                    } else {
                        retTree =  _addlist1 ;
                    }
                } else {
                    if ( NPUSH_CALL_AFF_VERIF(valTree = , _Tak(arg_declarator), 7, cplus) ) {
                        _addlist1 =  AddList(_addlist1, valTree);
                        if ( retTree ) {
                            _addlist1 =  SonTree(_addlist1, 2);
                        } else {
                            retTree =  _addlist1 ;
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
                        if ( retTree ) {
                            _addlist1 =  SonTree(_addlist1, 2);
                        } else {
                            retTree =  _addlist1 ;
                        }
                        exit =  1 ;
                        if ( (tokenAhead == 1 || (Lex(), TRACE_LEX(1))) && SEE_TOKEN(POINPOINPOIN, "...") && ((tokenAhead = 0), CommTerm(), 1) ) {}
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
                    valTree =  AddList(valTree, _ptTree0);
                }
            }
        }
    }
    {
        _retValue =  retTree ;
        goto arg_typ_list_ret ;
    }
    (tokenAhead || (LexComment(), tokenAhead =  -1, TRACE_LEX(1)));
    if ( _nbPre || listComm ) 
        AddComm(_ptPreComm, _nbPre, (PPTREE)0, lastTree);
    else {
        _lastTree =  (PPTREE)0 ;
        _funcLevel-- ;
    }
    return (PPTREE)0 ;
arg_typ_list_exit : 
    _Debug = TRACE_RULE("arg_typ_list", TRACE_EXIT, (PPTREE)0);
    _funcLevel-- ;
    return (PPTREE) -1 ;
arg_typ_list_ret : 
    _Debug = TRACE_RULE("arg_typ_list", TRACE_RETURN, _retValue);
    (tokenAhead || (LexComment(), tokenAhead =  -1, TRACE_LEX(1)));
    if ( _nbPre || listComm ) 
        AddComm(_ptPreComm, _nbPre, _retValue, lastTree);
    else {
        _lastTree =  _retValue ;
        _funcLevel-- ;
    }
    return _retValue ;
}

PPTREE cplus::asm_call ( int error_free )
{
    PFILE_POSITION  _filePosition = (PFILE_POSITION)0 ;
    int             _value, _nbPre = 0 ;
    PCOMM_ELEM      _ptPreComm = ((tokenAhead || (LexComment(), tokenAhead =  -1, TRACE_LEX(1))), listComm ? LookComm(&_nbPre) : (_funcLevel++, (PCOMM_ELEM)0));
    int             _Debug = TRACE_RULE("asm_call", TRACE_ENTER, (PPTREE)0);
    PPTREE          lastTree = _lastTree, _retValue ;
    PPTREE          retTree = (PPTREE)0 ;
    
    (tokenAhead == 1 || (Lex(), TRACE_LEX(1)));
    if ( !SEE_TOKEN(__ASM__, "__asm__") || !(CommTerm(), 1) ) {
        MulFreeTree(1, retTree);
        TOKEN_EXIT(asm_call_exit, "__asm__");
    } else {
        tokenAhead =  0 ;
    }
    (tokenAhead == 1 || (Lex(), TRACE_LEX(1)));
    if ( !SEE_TOKEN(POUV, "(") || !(CommTerm(), 1) ) {
        MulFreeTree(1, retTree);
        TOKEN_EXIT(asm_call_exit, "(");
    } else {
        tokenAhead =  0 ;
    }
    {
        PPTREE  _ptTree0 = 0, _ptRes0 = 0 ;
        _ptRes0 =  MakeTree(ASM_CALL, 1);
        if ( (_ptTree0 = NQUICK_CALL(_Tak(expression)(error_free), 62, cplus)) == (PPTREE) -1 ) {
            MulFreeTree(3, _ptRes0, _ptTree0, retTree);
            PROG_EXIT(asm_call_exit, "asm_call");
        }
        ReplaceTree(_ptRes0, 1, _ptTree0);
        retTree =  _ptRes0 ;
    }
    (tokenAhead == 1 || (Lex(), TRACE_LEX(1)));
    if ( !SEE_TOKEN(PFER, ")") || !(CommTerm(), 1) ) {
        MulFreeTree(1, retTree);
        TOKEN_EXIT(asm_call_exit, ")");
    } else {
        tokenAhead =  0 ;
    }
    {
        _retValue =  retTree ;
        goto asm_call_ret ;
    }
    (tokenAhead || (LexComment(), tokenAhead =  -1, TRACE_LEX(1)));
    if ( _nbPre || listComm ) 
        AddComm(_ptPreComm, _nbPre, (PPTREE)0, lastTree);
    else {
        _lastTree =  (PPTREE)0 ;
        _funcLevel-- ;
    }
    return (PPTREE)0 ;
asm_call_exit : 
    _Debug = TRACE_RULE("asm_call", TRACE_EXIT, (PPTREE)0);
    _funcLevel-- ;
    return (PPTREE) -1 ;
asm_call_ret : 
    _Debug = TRACE_RULE("asm_call", TRACE_RETURN, _retValue);
    (tokenAhead || (LexComment(), tokenAhead =  -1, TRACE_LEX(1)));
    if ( _nbPre || listComm ) 
        AddComm(_ptPreComm, _nbPre, _retValue, lastTree);
    else {
        _lastTree =  _retValue ;
        _funcLevel-- ;
    }
    return _retValue ;
}

PPTREE cplus::asm_declaration ( int error_free )
{
    PFILE_POSITION  _filePosition = (PFILE_POSITION)0 ;
    int             _value, _nbPre = 0 ;
    PCOMM_ELEM      _ptPreComm = ((tokenAhead || (LexComment(), tokenAhead =  -1, TRACE_LEX(1))), listComm ? LookComm(&_nbPre) : (_funcLevel++, (PCOMM_ELEM)0));
    int             _Debug = TRACE_RULE("asm_declaration", TRACE_ENTER, (PPTREE)0);
    PPTREE          lastTree = _lastTree, _retValue ;
    PPTREE          retTree = (PPTREE)0 ;
    
    (tokenAhead == 1 || (Lex(), TRACE_LEX(1)));
    if ( !SEE_TOKEN(ASM, "asm") || !(CommTerm(), 1) ) {
        MulFreeTree(1, retTree);
        TOKEN_EXIT(asm_declaration_exit, "asm");
    } else {
        tokenAhead =  0 ;
    }
    (tokenAhead == 1 || (Lex(), TRACE_LEX(1)));
    if ( !SEE_TOKEN(POUV, "(") || !(CommTerm(), 1) ) {
        MulFreeTree(1, retTree);
        TOKEN_EXIT(asm_declaration_exit, "(");
    } else {
        tokenAhead =  0 ;
    }
    {
        PPTREE  _ptTree0 = 0, _ptRes0 = 0 ;
        _ptRes0 =  MakeTree(ASM, 1);
        {
            PPTREE  _ptTree1 = 0, _ptRes1 = 0 ;
            _ptRes1 =  MakeTree(STRING, 1);
            (tokenAhead == 1 || (Lex(), TRACE_LEX(1)));
            if ( !TERM_OR_META(STRING, "STRING") || !BUILD_TERM_META(_ptTree1) ) {
                MulFreeTree(5, _ptRes1, _ptTree1, _ptRes0, _ptTree0, retTree);
                TOKEN_EXIT(asm_declaration_exit, "STRING");
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
    if ( !SEE_TOKEN(PFER, ")") || !(CommTerm(), 1) ) {
        MulFreeTree(1, retTree);
        TOKEN_EXIT(asm_declaration_exit, ")");
    } else {
        tokenAhead =  0 ;
    }
    {
        _retValue =  retTree ;
        goto asm_declaration_ret ;
    }
    (tokenAhead || (LexComment(), tokenAhead =  -1, TRACE_LEX(1)));
    if ( _nbPre || listComm ) 
        AddComm(_ptPreComm, _nbPre, (PPTREE)0, lastTree);
    else {
        _lastTree =  (PPTREE)0 ;
        _funcLevel-- ;
    }
    return (PPTREE)0 ;
asm_declaration_exit : 
    _Debug = TRACE_RULE("asm_declaration", TRACE_EXIT, (PPTREE)0);
    _funcLevel-- ;
    return (PPTREE) -1 ;
asm_declaration_ret : 
    _Debug = TRACE_RULE("asm_declaration", TRACE_RETURN, _retValue);
    (tokenAhead || (LexComment(), tokenAhead =  -1, TRACE_LEX(1)));
    if ( _nbPre || listComm ) 
        AddComm(_ptPreComm, _nbPre, _retValue, lastTree);
    else {
        _lastTree =  _retValue ;
        _funcLevel-- ;
    }
    return _retValue ;
}

PPTREE cplus::assignment_end ( int error_free )
{
    PFILE_POSITION  _filePosition = (PFILE_POSITION)0 ;
    int             _value, _nbPre = 0 ;
    PCOMM_ELEM      _ptPreComm = ((tokenAhead || (LexComment(), tokenAhead =  -1, TRACE_LEX(1))), listComm ? LookComm(&_nbPre) : (_funcLevel++, (PCOMM_ELEM)0));
    int             _Debug = TRACE_RULE("assignment_end", TRACE_ENTER, (PPTREE)0);
    PPTREE          lastTree = _lastTree, _retValue ;
    
    (tokenAhead == 1 || (Lex(), TRACE_LEX(1)));
    switch ( lexEl.Value ) {
        case EGAL : 
            tokenAhead = 0 ;
            CommTerm();
            {
                PPTREE  _ptTree0 = 0 ;
                {
                    PPTREE  _ptTree1 = 0, _ptRes1 = 0 ;
                    _ptRes1 =  MakeTree(AFF, 2);
                    if ( (_ptTree1 = NQUICK_CALL(_Tak(assignment_expression)(error_free), 16, cplus)) == (PPTREE) -1 ) {
                        MulFreeTree(3, _ptRes1, _ptTree1, _ptTree0);
                        PROG_EXIT(assignment_end_exit, "assignment_end");
                    }
                    ReplaceTree(_ptRes1, 2, _ptTree1);
                    _ptTree0 =  _ptRes1 ;
                }
                _retValue =  _ptTree0 ;
                goto assignment_end_ret ;
            }
            break ;
        case ETOIEGAL : 
            tokenAhead = 0 ;
            CommTerm();
            {
                PPTREE  _ptTree0 = 0 ;
                {
                    PPTREE  _ptTree1 = 0, _ptRes1 = 0 ;
                    _ptRes1 =  MakeTree(MUL_AFF, 2);
                    if ( (_ptTree1 = NQUICK_CALL(_Tak(assignment_expression)(error_free), 16, cplus)) == (PPTREE) -1 ) {
                        MulFreeTree(3, _ptRes1, _ptTree1, _ptTree0);
                        PROG_EXIT(assignment_end_exit, "assignment_end");
                    }
                    ReplaceTree(_ptRes1, 2, _ptTree1);
                    _ptTree0 =  _ptRes1 ;
                }
                _retValue =  _ptTree0 ;
                goto assignment_end_ret ;
            }
            break ;
        case META : 
        case SLASEGAL : 
            tokenAhead = 0 ;
            CommTerm();
            {
                PPTREE  _ptTree0 = 0 ;
                {
                    PPTREE  _ptTree1 = 0, _ptRes1 = 0 ;
                    _ptRes1 =  MakeTree(DIV_AFF, 2);
                    if ( (_ptTree1 = NQUICK_CALL(_Tak(assignment_expression)(error_free), 16, cplus)) == (PPTREE) -1 ) {
                        MulFreeTree(3, _ptRes1, _ptTree1, _ptTree0);
                        PROG_EXIT(assignment_end_exit, "assignment_end");
                    }
                    ReplaceTree(_ptRes1, 2, _ptTree1);
                    _ptTree0 =  _ptRes1 ;
                }
                _retValue =  _ptTree0 ;
                goto assignment_end_ret ;
            }
            break ;
        case POURCEGAL : 
            tokenAhead = 0 ;
            CommTerm();
            {
                PPTREE  _ptTree0 = 0 ;
                {
                    PPTREE  _ptTree1 = 0, _ptRes1 = 0 ;
                    _ptRes1 =  MakeTree(REM_AFF, 2);
                    if ( (_ptTree1 = NQUICK_CALL(_Tak(assignment_expression)(error_free), 16, cplus)) == (PPTREE) -1 ) {
                        MulFreeTree(3, _ptRes1, _ptTree1, _ptTree0);
                        PROG_EXIT(assignment_end_exit, "assignment_end");
                    }
                    ReplaceTree(_ptRes1, 2, _ptTree1);
                    _ptTree0 =  _ptRes1 ;
                }
                _retValue =  _ptTree0 ;
                goto assignment_end_ret ;
            }
            break ;
        case PLUSEGAL : 
            tokenAhead = 0 ;
            CommTerm();
            {
                PPTREE  _ptTree0 = 0 ;
                {
                    PPTREE  _ptTree1 = 0, _ptRes1 = 0 ;
                    _ptRes1 =  MakeTree(PLU_AFF, 2);
                    if ( (_ptTree1 = NQUICK_CALL(_Tak(assignment_expression)(error_free), 16, cplus)) == (PPTREE) -1 ) {
                        MulFreeTree(3, _ptRes1, _ptTree1, _ptTree0);
                        PROG_EXIT(assignment_end_exit, "assignment_end");
                    }
                    ReplaceTree(_ptRes1, 2, _ptTree1);
                    _ptTree0 =  _ptRes1 ;
                }
                _retValue =  _ptTree0 ;
                goto assignment_end_ret ;
            }
            break ;
        case TIREEGAL : 
            tokenAhead = 0 ;
            CommTerm();
            {
                PPTREE  _ptTree0 = 0 ;
                {
                    PPTREE  _ptTree1 = 0, _ptRes1 = 0 ;
                    _ptRes1 =  MakeTree(MIN_AFF, 2);
                    if ( (_ptTree1 = NQUICK_CALL(_Tak(assignment_expression)(error_free), 16, cplus)) == (PPTREE) -1 ) {
                        MulFreeTree(3, _ptRes1, _ptTree1, _ptTree0);
                        PROG_EXIT(assignment_end_exit, "assignment_end");
                    }
                    ReplaceTree(_ptRes1, 2, _ptTree1);
                    _ptTree0 =  _ptRes1 ;
                }
                _retValue =  _ptTree0 ;
                goto assignment_end_ret ;
            }
            break ;
        case INFEINFEEGAL : 
            tokenAhead = 0 ;
            CommTerm();
            {
                PPTREE  _ptTree0 = 0 ;
                {
                    PPTREE  _ptTree1 = 0, _ptRes1 = 0 ;
                    _ptRes1 =  MakeTree(LSH_AFF, 2);
                    if ( (_ptTree1 = NQUICK_CALL(_Tak(assignment_expression)(error_free), 16, cplus)) == (PPTREE) -1 ) {
                        MulFreeTree(3, _ptRes1, _ptTree1, _ptTree0);
                        PROG_EXIT(assignment_end_exit, "assignment_end");
                    }
                    ReplaceTree(_ptRes1, 2, _ptTree1);
                    _ptTree0 =  _ptRes1 ;
                }
                _retValue =  _ptTree0 ;
                goto assignment_end_ret ;
            }
            break ;
        case SUPESUPEEGAL : 
            tokenAhead = 0 ;
            CommTerm();
            {
                PPTREE  _ptTree0 = 0 ;
                {
                    PPTREE  _ptTree1 = 0, _ptRes1 = 0 ;
                    _ptRes1 =  MakeTree(RSH_AFF, 2);
                    if ( (_ptTree1 = NQUICK_CALL(_Tak(assignment_expression)(error_free), 16, cplus)) == (PPTREE) -1 ) {
                        MulFreeTree(3, _ptRes1, _ptTree1, _ptTree0);
                        PROG_EXIT(assignment_end_exit, "assignment_end");
                    }
                    ReplaceTree(_ptRes1, 2, _ptTree1);
                    _ptTree0 =  _ptRes1 ;
                }
                _retValue =  _ptTree0 ;
                goto assignment_end_ret ;
            }
            break ;
        case ETCOEGAL : 
            tokenAhead = 0 ;
            CommTerm();
            {
                PPTREE  _ptTree0 = 0 ;
                {
                    PPTREE  _ptTree1 = 0, _ptRes1 = 0 ;
                    _ptRes1 =  MakeTree(AND_AFF, 2);
                    if ( (_ptTree1 = NQUICK_CALL(_Tak(assignment_expression)(error_free), 16, cplus)) == (PPTREE) -1 ) {
                        MulFreeTree(3, _ptRes1, _ptTree1, _ptTree0);
                        PROG_EXIT(assignment_end_exit, "assignment_end");
                    }
                    ReplaceTree(_ptRes1, 2, _ptTree1);
                    _ptTree0 =  _ptRes1 ;
                }
                _retValue =  _ptTree0 ;
                goto assignment_end_ret ;
            }
            break ;
        case VBAREGAL : 
            tokenAhead = 0 ;
            CommTerm();
            {
                PPTREE  _ptTree0 = 0 ;
                {
                    PPTREE  _ptTree1 = 0, _ptRes1 = 0 ;
                    _ptRes1 =  MakeTree(OR_AFF, 2);
                    if ( (_ptTree1 = NQUICK_CALL(_Tak(assignment_expression)(error_free), 16, cplus)) == (PPTREE) -1 ) {
                        MulFreeTree(3, _ptRes1, _ptTree1, _ptTree0);
                        PROG_EXIT(assignment_end_exit, "assignment_end");
                    }
                    ReplaceTree(_ptRes1, 2, _ptTree1);
                    _ptTree0 =  _ptRes1 ;
                }
                _retValue =  _ptTree0 ;
                goto assignment_end_ret ;
            }
            break ;
        case CHAPEGAL : 
            tokenAhead = 0 ;
            CommTerm();
            {
                PPTREE  _ptTree0 = 0 ;
                {
                    PPTREE  _ptTree1 = 0, _ptRes1 = 0 ;
                    _ptRes1 =  MakeTree(XOR_AFF, 2);
                    if ( (_ptTree1 = NQUICK_CALL(_Tak(assignment_expression)(error_free), 16, cplus)) == (PPTREE) -1 ) {
                        MulFreeTree(3, _ptRes1, _ptTree1, _ptTree0);
                        PROG_EXIT(assignment_end_exit, "assignment_end");
                    }
                    ReplaceTree(_ptRes1, 2, _ptTree1);
                    _ptTree0 =  _ptRes1 ;
                }
                _retValue =  _ptTree0 ;
                goto assignment_end_ret ;
            }
            break ;
        default : 
            CASE_EXIT(assignment_end_exit, "either = or *= or SLASEGAL or %= or += or -= or <<= or >>= or &= or |= or ^=");
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
assignment_end_exit : 
    _Debug = TRACE_RULE("assignment_end", TRACE_EXIT, (PPTREE)0);
    _funcLevel-- ;
    return (PPTREE) -1 ;
assignment_end_ret : 
    _Debug = TRACE_RULE("assignment_end", TRACE_RETURN, _retValue);
    (tokenAhead || (LexComment(), tokenAhead =  -1, TRACE_LEX(1)));
    if ( _nbPre || listComm ) 
        AddComm(_ptPreComm, _nbPre, _retValue, lastTree);
    else {
        _lastTree =  _retValue ;
        _funcLevel-- ;
    }
    return _retValue ;
}
