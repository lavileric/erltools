/*************************************************************************/
/*                                                                       */
/*        Produced by MetaGen version 2.0  -    1989-2006                 */
/*       Syntaxic Analyzer Meta Generator developped by                  */
/*                  Eric Lavillonniere                                   */
/*                                                                       */
/*************************************************************************/
#include "token.h"
#include "cplus.h"

PPTREE cplus::ctor_initializer ( int error_free )
{
    PFILE_POSITION  _filePosition = (PFILE_POSITION)0 ;
    int             _value, _nbPre = 0 ;
    PCOMM_ELEM      _ptPreComm = ((tokenAhead || (LexComment(), tokenAhead =  -1, TRACE_LEX(1))), listComm ? LookComm(&_nbPre) : (_funcLevel++, (PCOMM_ELEM)0));
    int             _Debug = TRACE_RULE("ctor_initializer", TRACE_ENTER, (PPTREE)0);
    PPTREE          lastTree = _lastTree, _retValue ;
    PPTREE          _addlist1 = (PPTREE)0 ;
    PPTREE          retTree = (PPTREE)0, list = (PPTREE)0, val = (PPTREE)0 ;
    
    if ( (tokenAhead == 1 || (Lex(), TRACE_LEX(1))) && SEE_TOKEN(DPOI, ":") && ((tokenAhead = 0), CommTerm(), 1) ) {
        _addlist1 =  list ;
        do {
            {
                PPTREE  _ptTree0 = 0, _ptRes0 = 0 ;
                _ptRes0 =  MakeTree(CTOR_INIT, 3);
                if ( (_ptTree0 = NQUICK_CALL(_Tak(complete_class_name)(error_free), 27, cplus)) == (PPTREE) -1 ) {
                    MulFreeTree(6, _ptRes0, _ptTree0, _addlist1, list, retTree, val);
                    PROG_EXIT(ctor_initializer_exit, "ctor_initializer");
                }
                ReplaceTree(_ptRes0, 1, _ptTree0);
                retTree =  _ptRes0 ;
            }
            (tokenAhead == 1 || (Lex(), TRACE_LEX(1)));
            switch ( lexEl.Value ) {
                case POUV : 
                    (tokenAhead == 1 || (Lex(), TRACE_LEX(1)));
                    if ( !SEE_TOKEN(POUV, "(") || !(CommTerm(), 1) ) {
                        MulFreeTree(4, _addlist1, list, retTree, val);
                        TOKEN_EXIT(ctor_initializer_exit, "(");
                    } else {
                        tokenAhead =  0 ;
                    }
                    if ( NPUSH_CALL_AFF_VERIF(val = , _Tak(expression), 62, cplus) ) {
                        ReplaceTree(retTree, 2, val);
                    }
                    (tokenAhead == 1 || (Lex(), TRACE_LEX(1)));
                    if ( !SEE_TOKEN(PFER, ")") || !(CommTerm(), 1) ) {
                        MulFreeTree(4, _addlist1, list, retTree, val);
                        TOKEN_EXIT(ctor_initializer_exit, ")");
                    } else {
                        tokenAhead =  0 ;
                    }
                    break ;
                default : 
                    (tokenAhead == 1 || (Lex(), TRACE_LEX(1)));
                    if ( !SEE_TOKEN(AOUV, "{") || !(CommTerm(), 1) ) {
                        MulFreeTree(4, _addlist1, list, retTree, val);
                        TOKEN_EXIT(ctor_initializer_exit, "{");
                    } else {
                        tokenAhead =  0 ;
                    }
                    if ( NPUSH_CALL_AFF_VERIF(val = , _Tak(expression), 62, cplus) ) {
                        ReplaceTree(retTree, 2, val);
                    }
                    (tokenAhead == 1 || (Lex(), TRACE_LEX(1)));
                    if ( !SEE_TOKEN(AFER, "}") || !(CommTerm(), 1) ) {
                        MulFreeTree(4, _addlist1, list, retTree, val);
                        TOKEN_EXIT(ctor_initializer_exit, "}");
                    } else {
                        tokenAhead =  0 ;
                    }
                    {
                        PPTREE  _ptTree0 = 0 ;
                        {
                            PPTREE  _ptRes1 = 0 ;
                            _ptRes1  =  MakeTree(BRACE_MARKER, 0);
                            _ptTree0 =  _ptRes1 ;
                        }
                        ReplaceTree(retTree, 3, _ptTree0);
                    }
                    break ;
            }
            _addlist1 =  AddList(_addlist1, retTree);
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
                _ptRes1 =  MakeTree(CTOR_INITIALIZER, 1);
                ReplaceTree(_ptRes1, 1, list);
                _ptTree0 =  _ptRes1 ;
            }
            _retValue =  _ptTree0 ;
            goto ctor_initializer_ret ;
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
ctor_initializer_exit : 
    _Debug = TRACE_RULE("ctor_initializer", TRACE_EXIT, (PPTREE)0);
    _funcLevel-- ;
    return (PPTREE) -1 ;
ctor_initializer_ret : 
    _Debug = TRACE_RULE("ctor_initializer", TRACE_RETURN, _retValue);
    (tokenAhead || (LexComment(), tokenAhead =  -1, TRACE_LEX(1)));
    if ( _nbPre || listComm ) 
        AddComm(_ptPreComm, _nbPre, _retValue, lastTree);
    else {
        _lastTree =  _retValue ;
        _funcLevel-- ;
    }
    return _retValue ;
}

PPTREE cplus::data_decl_exotic ( int error_free )
{
    PFILE_POSITION  _filePosition = (PFILE_POSITION)0 ;
    int             _value, _nbPre = 0 ;
    PCOMM_ELEM      _ptPreComm = ((tokenAhead || (LexComment(), tokenAhead =  -1, TRACE_LEX(1))), listComm ? LookComm(&_nbPre) : (_funcLevel++, (PCOMM_ELEM)0));
    int             _Debug = TRACE_RULE("data_decl_exotic", TRACE_ENTER, (PPTREE)0);
    PPTREE          lastTree = _lastTree, _retValue ;
    PPTREE          retTree = (PPTREE)0 ;
    
    if ( !NPUSH_CALL_AFF_VERIF(retTree = , _Tak(message_map), 96, cplus) ) {
        if ( (retTree = NQUICK_CALL(_Tak(macro)(error_free), 92, cplus)) == (PPTREE) -1 ) {
            MulFreeTree(1, retTree);
            PROG_EXIT(data_decl_exotic_exit, "data_decl_exotic");
        }
    }
    {
        _retValue =  retTree ;
        goto data_decl_exotic_ret ;
    }
    (tokenAhead || (LexComment(), tokenAhead =  -1, TRACE_LEX(1)));
    if ( _nbPre || listComm ) 
        AddComm(_ptPreComm, _nbPre, (PPTREE)0, lastTree);
    else {
        _lastTree =  (PPTREE)0 ;
        _funcLevel-- ;
    }
    return (PPTREE)0 ;
data_decl_exotic_exit : 
    _Debug = TRACE_RULE("data_decl_exotic", TRACE_EXIT, (PPTREE)0);
    _funcLevel-- ;
    return (PPTREE) -1 ;
data_decl_exotic_ret : 
    _Debug = TRACE_RULE("data_decl_exotic", TRACE_RETURN, _retValue);
    (tokenAhead || (LexComment(), tokenAhead =  -1, TRACE_LEX(1)));
    if ( _nbPre || listComm ) 
        AddComm(_ptPreComm, _nbPre, _retValue, lastTree);
    else {
        _lastTree =  _retValue ;
        _funcLevel-- ;
    }
    return _retValue ;
}

PPTREE cplus::data_decl_sc_decl ( int error_free )
{
    PFILE_POSITION  _filePosition = (PFILE_POSITION)0 ;
    int             _value, _nbPre = 0 ;
    PCOMM_ELEM      _ptPreComm = ((tokenAhead || (LexComment(), tokenAhead =  -1, TRACE_LEX(1))), listComm ? LookComm(&_nbPre) : (_funcLevel++, (PCOMM_ELEM)0));
    int             _Debug = TRACE_RULE("data_decl_sc_decl", TRACE_ENTER, (PPTREE)0);
    PPTREE          lastTree = _lastTree, _retValue ;
    PPTREE          retTree = (PPTREE)0 ;
    
    if ( !NPUSH_CALL_AFF_VERIF(retTree = , _Tak(data_decl_sc_decl_full), 35, cplus) ) {
        if ( (retTree = NQUICK_CALL(_Tak(data_decl_sc_decl_short)(error_free), 36, cplus)) == (PPTREE) -1 ) {
            MulFreeTree(1, retTree);
            PROG_EXIT(data_decl_sc_decl_exit, "data_decl_sc_decl");
        }
    }
    {
        _retValue =  retTree ;
        goto data_decl_sc_decl_ret ;
    }
    (tokenAhead || (LexComment(), tokenAhead =  -1, TRACE_LEX(1)));
    if ( _nbPre || listComm ) 
        AddComm(_ptPreComm, _nbPre, (PPTREE)0, lastTree);
    else {
        _lastTree =  (PPTREE)0 ;
        _funcLevel-- ;
    }
    return (PPTREE)0 ;
data_decl_sc_decl_exit : 
    _Debug = TRACE_RULE("data_decl_sc_decl", TRACE_EXIT, (PPTREE)0);
    _funcLevel-- ;
    return (PPTREE) -1 ;
data_decl_sc_decl_ret : 
    _Debug = TRACE_RULE("data_decl_sc_decl", TRACE_RETURN, _retValue);
    (tokenAhead || (LexComment(), tokenAhead =  -1, TRACE_LEX(1)));
    if ( _nbPre || listComm ) 
        AddComm(_ptPreComm, _nbPre, _retValue, lastTree);
    else {
        _lastTree =  _retValue ;
        _funcLevel-- ;
    }
    return _retValue ;
}

PPTREE cplus::data_decl_sc_decl_full ( int error_free )
{
    PFILE_POSITION  _filePosition = (PFILE_POSITION)0 ;
    int             _value, _nbPre = 0 ;
    PCOMM_ELEM      _ptPreComm = ((tokenAhead || (LexComment(), tokenAhead =  -1, TRACE_LEX(1))), listComm ? LookComm(&_nbPre) : (_funcLevel++, (PCOMM_ELEM)0));
    int             _Debug = TRACE_RULE("data_decl_sc_decl_full", TRACE_ENTER, (PPTREE)0);
    PPTREE          lastTree = _lastTree, _retValue ;
    PPTREE          retTree = (PPTREE)0 ;
    
    {
        PPTREE  _ptRes0 = 0 ;
        _ptRes0 =  MakeTree(DECLARATION, 3);
        retTree =  _ptRes0 ;
    }
    {
        PPTREE  _ptTree0 = 0 ;
        if ( (_ptTree0 = NQUICK_CALL(_Tak(sc_specifier)(error_free), 126, cplus)) == (PPTREE) -1 ) {
            MulFreeTree(2, _ptTree0, retTree);
            PROG_EXIT(data_decl_sc_decl_full_exit, "data_decl_sc_decl_full");
        }
        ReplaceTree(retTree, 1, _ptTree0);
    }
    {
        PPTREE  _ptTree0 = 0 ;
        if ( (_ptTree0 = NQUICK_CALL(_Tak(declarator_list_init)(error_free), 49, cplus)) == (PPTREE) -1 ) {
            MulFreeTree(2, _ptTree0, retTree);
            PROG_EXIT(data_decl_sc_decl_full_exit, "data_decl_sc_decl_full");
        }
        ReplaceTree(retTree, 3, _ptTree0);
    }
    (tokenAhead == 1 || (Lex(), TRACE_LEX(1)));
    if ( !SEE_TOKEN(PVIR, ";") || !(CommTerm(), 1) ) {
        MulFreeTree(1, retTree);
        TOKEN_EXIT(data_decl_sc_decl_full_exit, ";");
    } else {
        tokenAhead =  0 ;
    }
    {
        _retValue =  retTree ;
        goto data_decl_sc_decl_full_ret ;
    }
    (tokenAhead || (LexComment(), tokenAhead =  -1, TRACE_LEX(1)));
    if ( _nbPre || listComm ) 
        AddComm(_ptPreComm, _nbPre, (PPTREE)0, lastTree);
    else {
        _lastTree =  (PPTREE)0 ;
        _funcLevel-- ;
    }
    return (PPTREE)0 ;
data_decl_sc_decl_full_exit : 
    _Debug = TRACE_RULE("data_decl_sc_decl_full", TRACE_EXIT, (PPTREE)0);
    _funcLevel-- ;
    return (PPTREE) -1 ;
data_decl_sc_decl_full_ret : 
    _Debug = TRACE_RULE("data_decl_sc_decl_full", TRACE_RETURN, _retValue);
    (tokenAhead || (LexComment(), tokenAhead =  -1, TRACE_LEX(1)));
    if ( _nbPre || listComm ) 
        AddComm(_ptPreComm, _nbPre, _retValue, lastTree);
    else {
        _lastTree =  _retValue ;
        _funcLevel-- ;
    }
    return _retValue ;
}

PPTREE cplus::data_decl_sc_decl_short ( int error_free )
{
    PFILE_POSITION  _filePosition = (PFILE_POSITION)0 ;
    int             _value, _nbPre = 0 ;
    PCOMM_ELEM      _ptPreComm = ((tokenAhead || (LexComment(), tokenAhead =  -1, TRACE_LEX(1))), listComm ? LookComm(&_nbPre) : (_funcLevel++, (PCOMM_ELEM)0));
    int             _Debug = TRACE_RULE("data_decl_sc_decl_short", TRACE_ENTER, (PPTREE)0);
    PPTREE          lastTree = _lastTree, _retValue ;
    PPTREE          retTree = (PPTREE)0 ;
    
    {
        PPTREE  _ptRes0 = 0 ;
        _ptRes0 =  MakeTree(DECLARATION, 3);
        retTree =  _ptRes0 ;
    }
    {
        PPTREE  _ptTree0 = 0 ;
        if ( (_ptTree0 = NQUICK_CALL(_Tak(declarator_list_init)(error_free), 49, cplus)) == (PPTREE) -1 ) {
            MulFreeTree(2, _ptTree0, retTree);
            PROG_EXIT(data_decl_sc_decl_short_exit, "data_decl_sc_decl_short");
        }
        ReplaceTree(retTree, 3, _ptTree0);
    }
    (tokenAhead == 1 || (Lex(), TRACE_LEX(1)));
    if ( !SEE_TOKEN(PVIR, ";") || !(CommTerm(), 1) ) {
        MulFreeTree(1, retTree);
        TOKEN_EXIT(data_decl_sc_decl_short_exit, ";");
    } else {
        tokenAhead =  0 ;
    }
    {
        _retValue =  retTree ;
        goto data_decl_sc_decl_short_ret ;
    }
    (tokenAhead || (LexComment(), tokenAhead =  -1, TRACE_LEX(1)));
    if ( _nbPre || listComm ) 
        AddComm(_ptPreComm, _nbPre, (PPTREE)0, lastTree);
    else {
        _lastTree =  (PPTREE)0 ;
        _funcLevel-- ;
    }
    return (PPTREE)0 ;
data_decl_sc_decl_short_exit : 
    _Debug = TRACE_RULE("data_decl_sc_decl_short", TRACE_EXIT, (PPTREE)0);
    _funcLevel-- ;
    return (PPTREE) -1 ;
data_decl_sc_decl_short_ret : 
    _Debug = TRACE_RULE("data_decl_sc_decl_short", TRACE_RETURN, _retValue);
    (tokenAhead || (LexComment(), tokenAhead =  -1, TRACE_LEX(1)));
    if ( _nbPre || listComm ) 
        AddComm(_ptPreComm, _nbPre, _retValue, lastTree);
    else {
        _lastTree =  _retValue ;
        _funcLevel-- ;
    }
    return _retValue ;
}

PPTREE cplus::data_decl_sc_ty_decl ( int error_free )
{
    PFILE_POSITION  _filePosition = (PFILE_POSITION)0 ;
    int             _value, _nbPre = 0 ;
    PCOMM_ELEM      _ptPreComm = ((tokenAhead || (LexComment(), tokenAhead =  -1, TRACE_LEX(1))), listComm ? LookComm(&_nbPre) : (_funcLevel++, (PCOMM_ELEM)0));
    int             _Debug = TRACE_RULE("data_decl_sc_ty_decl", TRACE_ENTER, (PPTREE)0);
    PPTREE          lastTree = _lastTree, _retValue ;
    PPTREE          retTree = (PPTREE)0 ;
    
    if ( !NPUSH_CALL_AFF_VERIF(retTree = , _Tak(data_decl_sc_ty_decl_full), 38, cplus) ) {
        if ( (retTree = NQUICK_CALL(_Tak(data_decl_sc_ty_decl_short)(error_free), 39, cplus)) == (PPTREE) -1 ) {
            MulFreeTree(1, retTree);
            PROG_EXIT(data_decl_sc_ty_decl_exit, "data_decl_sc_ty_decl");
        }
    }
    {
        _retValue =  retTree ;
        goto data_decl_sc_ty_decl_ret ;
    }
    (tokenAhead || (LexComment(), tokenAhead =  -1, TRACE_LEX(1)));
    if ( _nbPre || listComm ) 
        AddComm(_ptPreComm, _nbPre, (PPTREE)0, lastTree);
    else {
        _lastTree =  (PPTREE)0 ;
        _funcLevel-- ;
    }
    return (PPTREE)0 ;
data_decl_sc_ty_decl_exit : 
    _Debug = TRACE_RULE("data_decl_sc_ty_decl", TRACE_EXIT, (PPTREE)0);
    _funcLevel-- ;
    return (PPTREE) -1 ;
data_decl_sc_ty_decl_ret : 
    _Debug = TRACE_RULE("data_decl_sc_ty_decl", TRACE_RETURN, _retValue);
    (tokenAhead || (LexComment(), tokenAhead =  -1, TRACE_LEX(1)));
    if ( _nbPre || listComm ) 
        AddComm(_ptPreComm, _nbPre, _retValue, lastTree);
    else {
        _lastTree =  _retValue ;
        _funcLevel-- ;
    }
    return _retValue ;
}

PPTREE cplus::data_decl_sc_ty_decl_full ( int error_free )
{
    PFILE_POSITION  _filePosition = (PFILE_POSITION)0 ;
    int             _value, _nbPre = 0 ;
    PCOMM_ELEM      _ptPreComm = ((tokenAhead || (LexComment(), tokenAhead =  -1, TRACE_LEX(1))), listComm ? LookComm(&_nbPre) : (_funcLevel++, (PCOMM_ELEM)0));
    int             _Debug = TRACE_RULE("data_decl_sc_ty_decl_full", TRACE_ENTER, (PPTREE)0);
    PPTREE          lastTree = _lastTree, _retValue ;
    PPTREE          retTree = (PPTREE)0 ;
    
    {
        PPTREE  _ptRes0 = 0 ;
        _ptRes0 =  MakeTree(DECLARATION, 3);
        retTree =  _ptRes0 ;
    }
    {
        PPTREE  _ptTree0 = 0 ;
        if ( (_ptTree0 = NQUICK_CALL(_Tak(sc_specifier)(error_free), 126, cplus)) == (PPTREE) -1 ) {
            MulFreeTree(2, _ptTree0, retTree);
            PROG_EXIT(data_decl_sc_ty_decl_full_exit, "data_decl_sc_ty_decl_full");
        }
        ReplaceTree(retTree, 1, _ptTree0);
    }
    {
        PPTREE  _ptTree0 = 0 ;
        if ( (_ptTree0 = NQUICK_CALL(_Tak(type_specifier)(error_free), 145, cplus)) == (PPTREE) -1 ) {
            MulFreeTree(2, _ptTree0, retTree);
            PROG_EXIT(data_decl_sc_ty_decl_full_exit, "data_decl_sc_ty_decl_full");
        }
        ReplaceTree(retTree, 2, _ptTree0);
    }
    {
        PPTREE  _ptTree0 = 0 ;
        if ( (_ptTree0 = NQUICK_CALL(_Tak(declarator_list_init)(error_free), 49, cplus)) == (PPTREE) -1 ) {
            MulFreeTree(2, _ptTree0, retTree);
            PROG_EXIT(data_decl_sc_ty_decl_full_exit, "data_decl_sc_ty_decl_full");
        }
        ReplaceTree(retTree, 3, _ptTree0);
    }
    (tokenAhead == 1 || (Lex(), TRACE_LEX(1)));
    if ( !SEE_TOKEN(PVIR, ";") || !(CommTerm(), 1) ) {
        MulFreeTree(1, retTree);
        TOKEN_EXIT(data_decl_sc_ty_decl_full_exit, ";");
    } else {
        tokenAhead =  0 ;
    }
    {
        _retValue =  retTree ;
        goto data_decl_sc_ty_decl_full_ret ;
    }
    (tokenAhead || (LexComment(), tokenAhead =  -1, TRACE_LEX(1)));
    if ( _nbPre || listComm ) 
        AddComm(_ptPreComm, _nbPre, (PPTREE)0, lastTree);
    else {
        _lastTree =  (PPTREE)0 ;
        _funcLevel-- ;
    }
    return (PPTREE)0 ;
data_decl_sc_ty_decl_full_exit : 
    _Debug = TRACE_RULE("data_decl_sc_ty_decl_full", TRACE_EXIT, (PPTREE)0);
    _funcLevel-- ;
    return (PPTREE) -1 ;
data_decl_sc_ty_decl_full_ret : 
    _Debug = TRACE_RULE("data_decl_sc_ty_decl_full", TRACE_RETURN, _retValue);
    (tokenAhead || (LexComment(), tokenAhead =  -1, TRACE_LEX(1)));
    if ( _nbPre || listComm ) 
        AddComm(_ptPreComm, _nbPre, _retValue, lastTree);
    else {
        _lastTree =  _retValue ;
        _funcLevel-- ;
    }
    return _retValue ;
}

PPTREE cplus::data_decl_sc_ty_decl_short ( int error_free )
{
    PFILE_POSITION  _filePosition = (PFILE_POSITION)0 ;
    int             _value, _nbPre = 0 ;
    PCOMM_ELEM      _ptPreComm = ((tokenAhead || (LexComment(), tokenAhead =  -1, TRACE_LEX(1))), listComm ? LookComm(&_nbPre) : (_funcLevel++, (PCOMM_ELEM)0));
    int             _Debug = TRACE_RULE("data_decl_sc_ty_decl_short", TRACE_ENTER, (PPTREE)0);
    PPTREE          lastTree = _lastTree, _retValue ;
    PPTREE          retTree = (PPTREE)0 ;
    
    {
        PPTREE  _ptRes0 = 0 ;
        _ptRes0 =  MakeTree(DECLARATION, 3);
        retTree =  _ptRes0 ;
    }
    {
        PPTREE  _ptTree0 = 0 ;
        if ( (_ptTree0 = NQUICK_CALL(_Tak(type_specifier)(error_free), 145, cplus)) == (PPTREE) -1 ) {
            MulFreeTree(2, _ptTree0, retTree);
            PROG_EXIT(data_decl_sc_ty_decl_short_exit, "data_decl_sc_ty_decl_short");
        }
        ReplaceTree(retTree, 2, _ptTree0);
    }
    {
        PPTREE  _ptTree0 = 0 ;
        if ( (_ptTree0 = NQUICK_CALL(_Tak(declarator_list_init)(error_free), 49, cplus)) == (PPTREE) -1 ) {
            MulFreeTree(2, _ptTree0, retTree);
            PROG_EXIT(data_decl_sc_ty_decl_short_exit, "data_decl_sc_ty_decl_short");
        }
        ReplaceTree(retTree, 3, _ptTree0);
    }
    (tokenAhead == 1 || (Lex(), TRACE_LEX(1)));
    if ( !SEE_TOKEN(PVIR, ";") || !(CommTerm(), 1) ) {
        MulFreeTree(1, retTree);
        TOKEN_EXIT(data_decl_sc_ty_decl_short_exit, ";");
    } else {
        tokenAhead =  0 ;
    }
    {
        _retValue =  retTree ;
        goto data_decl_sc_ty_decl_short_ret ;
    }
    (tokenAhead || (LexComment(), tokenAhead =  -1, TRACE_LEX(1)));
    if ( _nbPre || listComm ) 
        AddComm(_ptPreComm, _nbPre, (PPTREE)0, lastTree);
    else {
        _lastTree =  (PPTREE)0 ;
        _funcLevel-- ;
    }
    return (PPTREE)0 ;
data_decl_sc_ty_decl_short_exit : 
    _Debug = TRACE_RULE("data_decl_sc_ty_decl_short", TRACE_EXIT, (PPTREE)0);
    _funcLevel-- ;
    return (PPTREE) -1 ;
data_decl_sc_ty_decl_short_ret : 
    _Debug = TRACE_RULE("data_decl_sc_ty_decl_short", TRACE_RETURN, _retValue);
    (tokenAhead || (LexComment(), tokenAhead =  -1, TRACE_LEX(1)));
    if ( _nbPre || listComm ) 
        AddComm(_ptPreComm, _nbPre, _retValue, lastTree);
    else {
        _lastTree =  _retValue ;
        _funcLevel-- ;
    }
    return _retValue ;
}

PPTREE cplus::data_declaration ( int error_free )
{
    PFILE_POSITION  _filePosition = (PFILE_POSITION)0 ;
    int             _value, _nbPre = 0 ;
    PCOMM_ELEM      _ptPreComm = ((tokenAhead || (LexComment(), tokenAhead =  -1, TRACE_LEX(1))), listComm ? LookComm(&_nbPre) : (_funcLevel++, (PCOMM_ELEM)0));
    int             _Debug = TRACE_RULE("data_declaration", TRACE_ENTER, (PPTREE)0);
    PPTREE          lastTree = _lastTree, _retValue ;
    PPTREE          retTree = (PPTREE)0 ;
    
    if ( !NPUSH_CALL_AFF_VERIF(retTree = , _Tak(data_decl_sc_decl), 34, cplus) ) {
        if ( (retTree = NQUICK_CALL(_Tak(data_declaration_strict)(error_free), 44, cplus)) == (PPTREE) -1 ) {
            MulFreeTree(1, retTree);
            PROG_EXIT(data_declaration_exit, "data_declaration");
        }
    }
    {
        _retValue =  retTree ;
        goto data_declaration_ret ;
    }
    (tokenAhead || (LexComment(), tokenAhead =  -1, TRACE_LEX(1)));
    if ( _nbPre || listComm ) 
        AddComm(_ptPreComm, _nbPre, (PPTREE)0, lastTree);
    else {
        _lastTree =  (PPTREE)0 ;
        _funcLevel-- ;
    }
    return (PPTREE)0 ;
data_declaration_exit : 
    _Debug = TRACE_RULE("data_declaration", TRACE_EXIT, (PPTREE)0);
    _funcLevel-- ;
    return (PPTREE) -1 ;
data_declaration_ret : 
    _Debug = TRACE_RULE("data_declaration", TRACE_RETURN, _retValue);
    (tokenAhead || (LexComment(), tokenAhead =  -1, TRACE_LEX(1)));
    if ( _nbPre || listComm ) 
        AddComm(_ptPreComm, _nbPre, _retValue, lastTree);
    else {
        _lastTree =  _retValue ;
        _funcLevel-- ;
    }
    return _retValue ;
}

PPTREE cplus::data_declaration_for ( int error_free )
{
    PFILE_POSITION  _filePosition = (PFILE_POSITION)0 ;
    int             _value, _nbPre = 0 ;
    PCOMM_ELEM      _ptPreComm = ((tokenAhead || (LexComment(), tokenAhead =  -1, TRACE_LEX(1))), listComm ? LookComm(&_nbPre) : (_funcLevel++, (PCOMM_ELEM)0));
    int             _Debug = TRACE_RULE("data_declaration_for", TRACE_ENTER, (PPTREE)0);
    PPTREE          lastTree = _lastTree, _retValue ;
    PPTREE          retTree = (PPTREE)0 ;
    
    if ( !NPUSH_CALL_AFF_VERIF(retTree = , _Tak(data_declaration_for_full), 42, cplus) ) {
        if ( (retTree = NQUICK_CALL(_Tak(data_declaration_for_short)(error_free), 43, cplus)) == (PPTREE) -1 ) {
            MulFreeTree(1, retTree);
            PROG_EXIT(data_declaration_for_exit, "data_declaration_for");
        }
    }
    {
        _retValue =  retTree ;
        goto data_declaration_for_ret ;
    }
    (tokenAhead || (LexComment(), tokenAhead =  -1, TRACE_LEX(1)));
    if ( _nbPre || listComm ) 
        AddComm(_ptPreComm, _nbPre, (PPTREE)0, lastTree);
    else {
        _lastTree =  (PPTREE)0 ;
        _funcLevel-- ;
    }
    return (PPTREE)0 ;
data_declaration_for_exit : 
    _Debug = TRACE_RULE("data_declaration_for", TRACE_EXIT, (PPTREE)0);
    _funcLevel-- ;
    return (PPTREE) -1 ;
data_declaration_for_ret : 
    _Debug = TRACE_RULE("data_declaration_for", TRACE_RETURN, _retValue);
    (tokenAhead || (LexComment(), tokenAhead =  -1, TRACE_LEX(1)));
    if ( _nbPre || listComm ) 
        AddComm(_ptPreComm, _nbPre, _retValue, lastTree);
    else {
        _lastTree =  _retValue ;
        _funcLevel-- ;
    }
    return _retValue ;
}

PPTREE cplus::data_declaration_for_full ( int error_free )
{
    PFILE_POSITION  _filePosition = (PFILE_POSITION)0 ;
    int             _value, _nbPre = 0 ;
    PCOMM_ELEM      _ptPreComm = ((tokenAhead || (LexComment(), tokenAhead =  -1, TRACE_LEX(1))), listComm ? LookComm(&_nbPre) : (_funcLevel++, (PCOMM_ELEM)0));
    int             _Debug = TRACE_RULE("data_declaration_for_full", TRACE_ENTER, (PPTREE)0);
    PPTREE          lastTree = _lastTree, _retValue ;
    PPTREE          retTree = (PPTREE)0 ;
    
    {
        PPTREE  _ptRes0 = 0 ;
        _ptRes0 =  MakeTree(FOR_DECLARATION, 3);
        retTree =  _ptRes0 ;
    }
    {
        PPTREE  _ptTree0 = 0 ;
        if ( (_ptTree0 = NQUICK_CALL(_Tak(sc_specifier)(error_free), 126, cplus)) == (PPTREE) -1 ) {
            MulFreeTree(2, _ptTree0, retTree);
            PROG_EXIT(data_declaration_for_full_exit, "data_declaration_for_full");
        }
        ReplaceTree(retTree, 1, _ptTree0);
    }
    {
        PPTREE  _ptTree0 = 0 ;
        if ( (_ptTree0 = NQUICK_CALL(_Tak(type_specifier)(error_free), 145, cplus)) == (PPTREE) -1 ) {
            MulFreeTree(2, _ptTree0, retTree);
            PROG_EXIT(data_declaration_for_full_exit, "data_declaration_for_full");
        }
        ReplaceTree(retTree, 2, _ptTree0);
    }
    {
        PPTREE  _ptTree0 = 0 ;
        if ( (_ptTree0 = NQUICK_CALL(_Tak(declarator_list_init)(error_free), 49, cplus)) == (PPTREE) -1 ) {
            MulFreeTree(2, _ptTree0, retTree);
            PROG_EXIT(data_declaration_for_full_exit, "data_declaration_for_full");
        }
        ReplaceTree(retTree, 3, _ptTree0);
    }
    {
        _retValue =  retTree ;
        goto data_declaration_for_full_ret ;
    }
    (tokenAhead || (LexComment(), tokenAhead =  -1, TRACE_LEX(1)));
    if ( _nbPre || listComm ) 
        AddComm(_ptPreComm, _nbPre, (PPTREE)0, lastTree);
    else {
        _lastTree =  (PPTREE)0 ;
        _funcLevel-- ;
    }
    return (PPTREE)0 ;
data_declaration_for_full_exit : 
    _Debug = TRACE_RULE("data_declaration_for_full", TRACE_EXIT, (PPTREE)0);
    _funcLevel-- ;
    return (PPTREE) -1 ;
data_declaration_for_full_ret : 
    _Debug = TRACE_RULE("data_declaration_for_full", TRACE_RETURN, _retValue);
    (tokenAhead || (LexComment(), tokenAhead =  -1, TRACE_LEX(1)));
    if ( _nbPre || listComm ) 
        AddComm(_ptPreComm, _nbPre, _retValue, lastTree);
    else {
        _lastTree =  _retValue ;
        _funcLevel-- ;
    }
    return _retValue ;
}

PPTREE cplus::data_declaration_for_short ( int error_free )
{
    PFILE_POSITION  _filePosition = (PFILE_POSITION)0 ;
    int             _value, _nbPre = 0 ;
    PCOMM_ELEM      _ptPreComm = ((tokenAhead || (LexComment(), tokenAhead =  -1, TRACE_LEX(1))), listComm ? LookComm(&_nbPre) : (_funcLevel++, (PCOMM_ELEM)0));
    int             _Debug = TRACE_RULE("data_declaration_for_short", TRACE_ENTER, (PPTREE)0);
    PPTREE          lastTree = _lastTree, _retValue ;
    PPTREE          retTree = (PPTREE)0 ;
    
    {
        PPTREE  _ptRes0 = 0 ;
        _ptRes0 =  MakeTree(FOR_DECLARATION, 3);
        retTree =  _ptRes0 ;
    }
    {
        PPTREE  _ptTree0 = 0 ;
        if ( (_ptTree0 = NQUICK_CALL(_Tak(type_specifier)(error_free), 145, cplus)) == (PPTREE) -1 ) {
            MulFreeTree(2, _ptTree0, retTree);
            PROG_EXIT(data_declaration_for_short_exit, "data_declaration_for_short");
        }
        ReplaceTree(retTree, 2, _ptTree0);
    }
    {
        PPTREE  _ptTree0 = 0 ;
        if ( (_ptTree0 = NQUICK_CALL(_Tak(declarator_list_init)(error_free), 49, cplus)) == (PPTREE) -1 ) {
            MulFreeTree(2, _ptTree0, retTree);
            PROG_EXIT(data_declaration_for_short_exit, "data_declaration_for_short");
        }
        ReplaceTree(retTree, 3, _ptTree0);
    }
    {
        _retValue =  retTree ;
        goto data_declaration_for_short_ret ;
    }
    (tokenAhead || (LexComment(), tokenAhead =  -1, TRACE_LEX(1)));
    if ( _nbPre || listComm ) 
        AddComm(_ptPreComm, _nbPre, (PPTREE)0, lastTree);
    else {
        _lastTree =  (PPTREE)0 ;
        _funcLevel-- ;
    }
    return (PPTREE)0 ;
data_declaration_for_short_exit : 
    _Debug = TRACE_RULE("data_declaration_for_short", TRACE_EXIT, (PPTREE)0);
    _funcLevel-- ;
    return (PPTREE) -1 ;
data_declaration_for_short_ret : 
    _Debug = TRACE_RULE("data_declaration_for_short", TRACE_RETURN, _retValue);
    (tokenAhead || (LexComment(), tokenAhead =  -1, TRACE_LEX(1)));
    if ( _nbPre || listComm ) 
        AddComm(_ptPreComm, _nbPre, _retValue, lastTree);
    else {
        _lastTree =  _retValue ;
        _funcLevel-- ;
    }
    return _retValue ;
}

PPTREE cplus::data_declaration_strict ( int error_free )
{
    PFILE_POSITION  _filePosition = (PFILE_POSITION)0 ;
    int             _value, _nbPre = 0 ;
    PCOMM_ELEM      _ptPreComm = ((tokenAhead || (LexComment(), tokenAhead =  -1, TRACE_LEX(1))), listComm ? LookComm(&_nbPre) : (_funcLevel++, (PCOMM_ELEM)0));
    int             _Debug = TRACE_RULE("data_declaration_strict", TRACE_ENTER, (PPTREE)0);
    PPTREE          lastTree = _lastTree, _retValue ;
    PPTREE          retTree = (PPTREE)0 ;
    
    if ( !NPUSH_CALL_AFF_VERIF(retTree = , _Tak(data_decl_sc_ty_decl), 37, cplus) ) {
        if ( (retTree = NQUICK_CALL(_Tak(data_decl_exotic)(error_free), 33, cplus)) == (PPTREE) -1 ) {
            MulFreeTree(1, retTree);
            PROG_EXIT(data_declaration_strict_exit, "data_declaration_strict");
        }
    }
    {
        _retValue =  retTree ;
        goto data_declaration_strict_ret ;
    }
    (tokenAhead || (LexComment(), tokenAhead =  -1, TRACE_LEX(1)));
    if ( _nbPre || listComm ) 
        AddComm(_ptPreComm, _nbPre, (PPTREE)0, lastTree);
    else {
        _lastTree =  (PPTREE)0 ;
        _funcLevel-- ;
    }
    return (PPTREE)0 ;
data_declaration_strict_exit : 
    _Debug = TRACE_RULE("data_declaration_strict", TRACE_EXIT, (PPTREE)0);
    _funcLevel-- ;
    return (PPTREE) -1 ;
data_declaration_strict_ret : 
    _Debug = TRACE_RULE("data_declaration_strict", TRACE_RETURN, _retValue);
    (tokenAhead || (LexComment(), tokenAhead =  -1, TRACE_LEX(1)));
    if ( _nbPre || listComm ) 
        AddComm(_ptPreComm, _nbPre, _retValue, lastTree);
    else {
        _lastTree =  _retValue ;
        _funcLevel-- ;
    }
    return _retValue ;
}

PPTREE cplus::deallocation_expression ( int error_free )
{
    PFILE_POSITION  _filePosition = (PFILE_POSITION)0 ;
    int             _value, _nbPre = 0 ;
    PCOMM_ELEM      _ptPreComm = ((tokenAhead || (LexComment(), tokenAhead =  -1, TRACE_LEX(1))), listComm ? LookComm(&_nbPre) : (_funcLevel++, (PCOMM_ELEM)0));
    int             _Debug = TRACE_RULE("deallocation_expression", TRACE_ENTER, (PPTREE)0);
    PPTREE          lastTree = _lastTree, _retValue ;
    PPTREE          retTree = (PPTREE)0, expr = (PPTREE)0 ;
    
    (tokenAhead == 1 || (Lex(), TRACE_LEX(1)));
    if ( !SEE_TOKEN(DELETE, "delete") || !(CommTerm(), 1) ) {
        MulFreeTree(2, expr, retTree);
        TOKEN_EXIT(deallocation_expression_exit, "delete");
    } else {
        tokenAhead =  0 ;
    }
    {
        PPTREE  _ptRes0 = 0 ;
        _ptRes0 =  MakeTree(DELETE, 2);
        retTree =  _ptRes0 ;
    }
    if ( (tokenAhead == 1 || (Lex(), TRACE_LEX(1))) && SEE_TOKEN(COUV, "[") && ((tokenAhead = 0), CommTerm(), 1) ) {
        if ( NPUSH_CALL_AFF_VERIF(expr = , _Tak(expression), 62, cplus) ) {}
        (tokenAhead == 1 || (Lex(), TRACE_LEX(1)));
        if ( !SEE_TOKEN(CFER, "]") || !(CommTerm(), 1) ) {
            MulFreeTree(2, expr, retTree);
            TOKEN_EXIT(deallocation_expression_exit, "]");
        } else {
            tokenAhead =  0 ;
        }
        {
            PPTREE  _ptTree0 = 0 ;
            {
                PPTREE  _ptRes1 = 0 ;
                _ptRes1 =  MakeTree(TYP_ARRAY, 2);
                ReplaceTree(_ptRes1, 2, expr);
                _ptTree0 =  _ptRes1 ;
            }
            ReplaceTree(retTree, 1, _ptTree0);
        }
    }
    {
        PPTREE  _ptTree0 = 0 ;
        {
            PPTREE  _ptTree1 = 0 ;
            if ( (_ptTree1 = NQUICK_CALL(_Tak(cast_expression)(error_free), 21, cplus)) == (PPTREE) -1 ) {
                MulFreeTree(4, _ptTree1, _ptTree0, expr, retTree);
                PROG_EXIT(deallocation_expression_exit, "deallocation_expression");
            }
            _ptTree0 =  ReplaceTree(retTree, 2, _ptTree1);
        }
        _retValue =  _ptTree0 ;
        goto deallocation_expression_ret ;
    }
    (tokenAhead || (LexComment(), tokenAhead =  -1, TRACE_LEX(1)));
    if ( _nbPre || listComm ) 
        AddComm(_ptPreComm, _nbPre, (PPTREE)0, lastTree);
    else {
        _lastTree =  (PPTREE)0 ;
        _funcLevel-- ;
    }
    return (PPTREE)0 ;
deallocation_expression_exit : 
    _Debug = TRACE_RULE("deallocation_expression", TRACE_EXIT, (PPTREE)0);
    _funcLevel-- ;
    return (PPTREE) -1 ;
deallocation_expression_ret : 
    _Debug = TRACE_RULE("deallocation_expression", TRACE_RETURN, _retValue);
    (tokenAhead || (LexComment(), tokenAhead =  -1, TRACE_LEX(1)));
    if ( _nbPre || listComm ) 
        AddComm(_ptPreComm, _nbPre, _retValue, lastTree);
    else {
        _lastTree =  _retValue ;
        _funcLevel-- ;
    }
    return _retValue ;
}

PPTREE cplus::declarator ( int error_free )
{
    PFILE_POSITION  _filePosition = (PFILE_POSITION)0 ;
    int             _value, _nbPre = 0 ;
    PCOMM_ELEM      _ptPreComm = ((tokenAhead || (LexComment(), tokenAhead =  -1, TRACE_LEX(1))), listComm ? LookComm(&_nbPre) : (_funcLevel++, (PCOMM_ELEM)0));
    int             _Debug = TRACE_RULE("declarator", TRACE_ENTER, (PPTREE)0);
    PPTREE          lastTree = _lastTree, _retValue ;
    PPTREE          retTree = (PPTREE)0, valTree = (PPTREE)0 ;
    
    if ( NPUSH_CALL_AFF_VERIF(valTree = , _Tak(range_modifier), 121, cplus) ) {
        {
            PPTREE  _ptTree0 = 0 ;
            {
                PPTREE  _ptTree1 = 0 ;
                if ( (_ptTree1 = NQUICK_CALL(_Tak(declarator)(error_free), 46, cplus)) == (PPTREE) -1 ) {
                    MulFreeTree(4, _ptTree1, _ptTree0, retTree, valTree);
                    PROG_EXIT(declarator_exit, "declarator");
                }
                _ptTree0 =  ReplaceTree(valTree, 2, _ptTree1);
            }
            _retValue =  _ptTree0 ;
            goto declarator_ret ;
        }
    } else {
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
                        if ( (_ptTree1 = NQUICK_CALL(_Tak(declarator)(error_free), 46, cplus)) == (PPTREE) -1 ) {
                            MulFreeTree(5, _ptRes1, _ptTree1, _ptTree0, retTree, valTree);
                            PROG_EXIT(declarator_exit, "declarator");
                        }
                        ReplaceTree(_ptRes1, 1, _ptTree1);
                        _ptTree0 =  _ptRes1 ;
                    }
                    _retValue =  _ptTree0 ;
                    goto declarator_ret ;
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
                        if ( (_ptTree1 = NQUICK_CALL(_Tak(declarator)(error_free), 46, cplus)) == (PPTREE) -1 ) {
                            MulFreeTree(5, _ptRes1, _ptTree1, _ptTree0, retTree, valTree);
                            PROG_EXIT(declarator_exit, "declarator");
                        }
                        ReplaceTree(_ptRes1, 1, _ptTree1);
                        _ptTree0 =  _ptRes1 ;
                    }
                    _retValue =  _ptTree0 ;
                    goto declarator_ret ;
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
                        if ( (_ptTree1 = NQUICK_CALL(_Tak(declarator)(error_free), 46, cplus)) == (PPTREE) -1 ) {
                            MulFreeTree(5, _ptRes1, _ptTree1, _ptTree0, retTree, valTree);
                            PROG_EXIT(declarator_exit, "declarator");
                        }
                        ReplaceTree(_ptRes1, 1, _ptTree1);
                        _ptTree0 =  _ptRes1 ;
                    }
                    _retValue =  _ptTree0 ;
                    goto declarator_ret ;
                }
                break ;
            case POUV : 
                tokenAhead = 0 ;
                CommTerm();
                {
                    PPTREE  _ptTree0 = 0, _ptRes0 = 0 ;
                    _ptRes0 =  MakeTree(TYP, 1);
                    if ( (_ptTree0 = NQUICK_CALL(_Tak(declarator)(error_free), 46, cplus)) == (PPTREE) -1 ) {
                        MulFreeTree(4, _ptRes0, _ptTree0, retTree, valTree);
                        PROG_EXIT(declarator_exit, "declarator");
                    }
                    ReplaceTree(_ptRes0, 1, _ptTree0);
                    retTree =  _ptRes0 ;
                }
                (tokenAhead == 1 || (Lex(), TRACE_LEX(1)));
                if ( !SEE_TOKEN(PFER, ")") || !(CommTerm(), 1) ) {
                    MulFreeTree(2, retTree, valTree);
                    TOKEN_EXIT(declarator_exit, ")");
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
                if ( (retTree = NQUICK_CALL(_Tak(qualified_name)(error_free), 116, cplus)) == (PPTREE) -1 ) {
                    MulFreeTree(2, retTree, valTree);
                    PROG_EXIT(declarator_exit, "declarator");
                }
                if ( (tokenAhead == 1 || (Lex(), TRACE_LEX(1)))
                        && SEE_TOKEN(DPOIDPOI, "::")
                        && ((tokenAhead = 0), CommTerm(), 1)
                        && ((tokenAhead == 1 || (Lex(), TRACE_LEX(1))) && SEE_TOKEN(ETOI, "*") && ((tokenAhead = 0), CommTerm(), 1)) ) {
                    {
                        PPTREE  _ptTree0 = 0 ;
                        {
                            PPTREE  _ptTree1 = 0, _ptRes1 = 0 ;
                            _ptRes1 =  MakeTree(MEMBER_DECLARATOR, 2);
                            ReplaceTree(_ptRes1, 1, retTree);
                            if ( (_ptTree1 = NQUICK_CALL(_Tak(declarator)(error_free), 46, cplus)) == (PPTREE) -1 ) {
                                MulFreeTree(5, _ptRes1, _ptTree1, _ptTree0, retTree, valTree);
                                PROG_EXIT(declarator_exit, "declarator");
                            }
                            ReplaceTree(_ptRes1, 2, _ptTree1);
                            _ptTree0 =  _ptRes1 ;
                        }
                        _retValue =  _ptTree0 ;
                        goto declarator_ret ;
                    }
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
            case OPERATOR : 
                if ( (retTree = NQUICK_CALL(_Tak(operator_function_name)(error_free), 104, cplus)) == (PPTREE) -1 ) {
                    MulFreeTree(2, retTree, valTree);
                    PROG_EXIT(declarator_exit, "declarator");
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
            default : 
                MulFreeTree(2, retTree, valTree);
                CASE_EXIT(declarator_exit, "either * or & or ~ or ( or IDENT or operator");
                break ;
        }
    }
    {
        _retValue =  retTree ;
        goto declarator_ret ;
    }
    (tokenAhead || (LexComment(), tokenAhead =  -1, TRACE_LEX(1)));
    if ( _nbPre || listComm ) 
        AddComm(_ptPreComm, _nbPre, (PPTREE)0, lastTree);
    else {
        _lastTree =  (PPTREE)0 ;
        _funcLevel-- ;
    }
    return (PPTREE)0 ;
declarator_exit : 
    _Debug = TRACE_RULE("declarator", TRACE_EXIT, (PPTREE)0);
    _funcLevel-- ;
    return (PPTREE) -1 ;
declarator_ret : 
    _Debug = TRACE_RULE("declarator", TRACE_RETURN, _retValue);
    (tokenAhead || (LexComment(), tokenAhead =  -1, TRACE_LEX(1)));
    if ( _nbPre || listComm ) 
        AddComm(_ptPreComm, _nbPre, _retValue, lastTree);
    else {
        _lastTree =  _retValue ;
        _funcLevel-- ;
    }
    return _retValue ;
}

PPTREE cplus::declarator_follow ( int error_free )
{
    PFILE_POSITION  _filePosition = (PFILE_POSITION)0 ;
    int             _value, _nbPre = 0 ;
    PCOMM_ELEM      _ptPreComm = ((tokenAhead || (LexComment(), tokenAhead =  -1, TRACE_LEX(1))), listComm ? LookComm(&_nbPre) : (_funcLevel++, (PCOMM_ELEM)0));
    int             _Debug = TRACE_RULE("declarator_follow", TRACE_ENTER, (PPTREE)0);
    PPTREE          lastTree = _lastTree, _retValue ;
    PPTREE          retTree = (PPTREE)0, expList = (PPTREE)0, valTree = (PPTREE)0 ;
    
    if ( !((tokenAhead == 1 || (Lex(), TRACE_LEX(1))) && SEE_TOKEN(POUV, "(")) && !((tokenAhead == 1 || (Lex(), TRACE_LEX(1))) && SEE_TOKEN(COUV, "[")) ) {
        MulFreeTree(3, expList, retTree, valTree);
        LEX_EXIT("", 0);
        goto declarator_follow_exit ;
    }
    while ( (tokenAhead == 1 || (Lex(), TRACE_LEX(1))) && SEE_TOKEN(POUV, "(") || (tokenAhead == 1 || (Lex(), TRACE_LEX(1))) && SEE_TOKEN(COUV, "[") ) {
        (tokenAhead == 1 || (Lex(), TRACE_LEX(1)));
        switch ( lexEl.Value ) {
            case COUV : 
                tokenAhead = 0 ;
                CommTerm();
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
                    TOKEN_EXIT(declarator_follow_exit, "]");
                } else {
                    tokenAhead =  0 ;
                }
                break ;
            case POUV : 
                if ( NPUSH_CALL_AFF_VERIF(valTree = , _Tak(arg_typ_declarator), 11, cplus) ) {
                    ReplaceTree(valTree, 1, retTree);
                    {
                        PPTREE  _ptTree0 = 0 ;
                        if ( (_ptTree0 = NQUICK_CALL(_Tak(range_modifier_ident)(error_free), 123, cplus)) == (PPTREE) -1 ) {
                            MulFreeTree(4, _ptTree0, expList, retTree, valTree);
                            PROG_EXIT(declarator_follow_exit, "declarator_follow");
                        }
                        ReplaceTree(valTree, 3, _ptTree0);
                    }
                    retTree =  valTree ;
                } else {
                    {
                        _retValue =  retTree ;
                        goto declarator_follow_ret ;
                    }
                }
                break ;
            default : 
                MulFreeTree(3, expList, retTree, valTree);
                CASE_EXIT(declarator_follow_exit, "either [ or (");
                break ;
        }
    }
    {
        _retValue =  retTree ;
        goto declarator_follow_ret ;
    }
    (tokenAhead || (LexComment(), tokenAhead =  -1, TRACE_LEX(1)));
    if ( _nbPre || listComm ) 
        AddComm(_ptPreComm, _nbPre, (PPTREE)0, lastTree);
    else {
        _lastTree =  (PPTREE)0 ;
        _funcLevel-- ;
    }
    return (PPTREE)0 ;
declarator_follow_exit : 
    _Debug = TRACE_RULE("declarator_follow", TRACE_EXIT, (PPTREE)0);
    _funcLevel-- ;
    return (PPTREE) -1 ;
declarator_follow_ret : 
    _Debug = TRACE_RULE("declarator_follow", TRACE_RETURN, _retValue);
    (tokenAhead || (LexComment(), tokenAhead =  -1, TRACE_LEX(1)));
    if ( _nbPre || listComm ) 
        AddComm(_ptPreComm, _nbPre, _retValue, lastTree);
    else {
        _lastTree =  _retValue ;
        _funcLevel-- ;
    }
    return _retValue ;
}

PPTREE cplus::declarator_list ( int error_free )
{
    PFILE_POSITION  _filePosition = (PFILE_POSITION)0 ;
    int             _value, _nbPre = 0 ;
    PCOMM_ELEM      _ptPreComm = ((tokenAhead || (LexComment(), tokenAhead =  -1, TRACE_LEX(1))), listComm ? LookComm(&_nbPre) : (_funcLevel++, (PCOMM_ELEM)0));
    int             _Debug = TRACE_RULE("declarator_list", TRACE_ENTER, (PPTREE)0);
    PPTREE          lastTree = _lastTree, _retValue ;
    PPTREE          _addlist1 = (PPTREE)0 ;
    PPTREE          list = (PPTREE)0 ;
    
    _addlist1 =  list ;
    do {
        {
            PPTREE  _ptTree0 = 0 ;
            if ( (_ptTree0 = NQUICK_CALL(_Tak(declarator)(error_free), 46, cplus)) == (PPTREE) -1 ) {
                MulFreeTree(3, _ptTree0, _addlist1, list);
                PROG_EXIT(declarator_list_exit, "declarator_list");
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
        _retValue =  list ;
        goto declarator_list_ret ;
    }
    (tokenAhead || (LexComment(), tokenAhead =  -1, TRACE_LEX(1)));
    if ( _nbPre || listComm ) 
        AddComm(_ptPreComm, _nbPre, (PPTREE)0, lastTree);
    else {
        _lastTree =  (PPTREE)0 ;
        _funcLevel-- ;
    }
    return (PPTREE)0 ;
declarator_list_exit : 
    _Debug = TRACE_RULE("declarator_list", TRACE_EXIT, (PPTREE)0);
    _funcLevel-- ;
    return (PPTREE) -1 ;
declarator_list_ret : 
    _Debug = TRACE_RULE("declarator_list", TRACE_RETURN, _retValue);
    (tokenAhead || (LexComment(), tokenAhead =  -1, TRACE_LEX(1)));
    if ( _nbPre || listComm ) 
        AddComm(_ptPreComm, _nbPre, _retValue, lastTree);
    else {
        _lastTree =  _retValue ;
        _funcLevel-- ;
    }
    return _retValue ;
}

PPTREE cplus::declarator_list_init ( int error_free )
{
    PFILE_POSITION  _filePosition = (PFILE_POSITION)0 ;
    int             _value, _nbPre = 0 ;
    PCOMM_ELEM      _ptPreComm = ((tokenAhead || (LexComment(), tokenAhead =  -1, TRACE_LEX(1))), listComm ? LookComm(&_nbPre) : (_funcLevel++, (PCOMM_ELEM)0));
    int             _Debug = TRACE_RULE("declarator_list_init", TRACE_ENTER, (PPTREE)0);
    PPTREE          lastTree = _lastTree, _retValue ;
    PPTREE          _addlist1 = (PPTREE)0 ;
    PPTREE          list = (PPTREE)0 ;
    
    _addlist1 =  list ;
    do {
        {
            PPTREE  _ptTree0 = 0 ;
            if ( (_ptTree0 = NQUICK_CALL(_Tak(declarator_value)(error_free), 50, cplus)) == (PPTREE) -1 ) {
                MulFreeTree(3, _ptTree0, _addlist1, list);
                PROG_EXIT(declarator_list_init_exit, "declarator_list_init");
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
        _retValue =  list ;
        goto declarator_list_init_ret ;
    }
    (tokenAhead || (LexComment(), tokenAhead =  -1, TRACE_LEX(1)));
    if ( _nbPre || listComm ) 
        AddComm(_ptPreComm, _nbPre, (PPTREE)0, lastTree);
    else {
        _lastTree =  (PPTREE)0 ;
        _funcLevel-- ;
    }
    return (PPTREE)0 ;
declarator_list_init_exit : 
    _Debug = TRACE_RULE("declarator_list_init", TRACE_EXIT, (PPTREE)0);
    _funcLevel-- ;
    return (PPTREE) -1 ;
declarator_list_init_ret : 
    _Debug = TRACE_RULE("declarator_list_init", TRACE_RETURN, _retValue);
    (tokenAhead || (LexComment(), tokenAhead =  -1, TRACE_LEX(1)));
    if ( _nbPre || listComm ) 
        AddComm(_ptPreComm, _nbPre, _retValue, lastTree);
    else {
        _lastTree =  _retValue ;
        _funcLevel-- ;
    }
    return _retValue ;
}

PPTREE cplus::declarator_value ( int error_free )
{
    PFILE_POSITION  _filePosition = (PFILE_POSITION)0 ;
    int             _value, _nbPre = 0 ;
    PCOMM_ELEM      _ptPreComm = ((tokenAhead || (LexComment(), tokenAhead =  -1, TRACE_LEX(1))), listComm ? LookComm(&_nbPre) : (_funcLevel++, (PCOMM_ELEM)0));
    int             _Debug = TRACE_RULE("declarator_value", TRACE_ENTER, (PPTREE)0);
    PPTREE          lastTree = _lastTree, _retValue ;
    PPTREE          valTree = (PPTREE)0 ;
    
    if ( (valTree = NQUICK_CALL(_Tak(declarator)(error_free), 46, cplus)) == (PPTREE) -1 ) {
        MulFreeTree(1, valTree);
        PROG_EXIT(declarator_value_exit, "declarator_value");
    }
    (tokenAhead == 1 || (Lex(), TRACE_LEX(1)));
    switch ( lexEl.Value ) {
        case EGAL : 
            tokenAhead = 0 ;
            CommTerm();
            {
                PPTREE  _ptTree0 = 0, _ptRes0 = 0 ;
                _ptRes0 =  MakeTree(TYP_AFF, 2);
                ReplaceTree(_ptRes0, 1, valTree);
                if ( (_ptTree0 = NQUICK_CALL(_Tak(initializer)(error_free), 81, cplus)) == (PPTREE) -1 ) {
                    MulFreeTree(3, _ptRes0, _ptTree0, valTree);
                    PROG_EXIT(declarator_value_exit, "declarator_value");
                }
                ReplaceTree(_ptRes0, 2, _ptTree0);
                valTree =  _ptRes0 ;
            }
            break ;
        case POUV : 
            tokenAhead = 0 ;
            CommTerm();
            {
                PPTREE  _ptTree0 = 0, _ptRes0 = 0 ;
                _ptRes0 =  MakeTree(TYP_AFF_CALL, 2);
                ReplaceTree(_ptRes0, 1, valTree);
                if ( (_ptTree0 = NQUICK_CALL(_Tak(expression)(error_free), 62, cplus)) == (PPTREE) -1 ) {
                    MulFreeTree(3, _ptRes0, _ptTree0, valTree);
                    PROG_EXIT(declarator_value_exit, "declarator_value");
                }
                ReplaceTree(_ptRes0, 2, _ptTree0);
                valTree =  _ptRes0 ;
            }
            (tokenAhead == 1 || (Lex(), TRACE_LEX(1)));
            if ( !SEE_TOKEN(PFER, ")") || !(CommTerm(), 1) ) {
                MulFreeTree(1, valTree);
                TOKEN_EXIT(declarator_value_exit, ")");
            } else {
                tokenAhead =  0 ;
            }
            break ;
        case AOUV : 
            tokenAhead = 0 ;
            CommTerm();
            {
                PPTREE  _ptTree0 = 0, _ptRes0 = 0 ;
                _ptRes0 =  MakeTree(TYP_AFF_BRA, 2);
                ReplaceTree(_ptRes0, 1, valTree);
                if ( (_ptTree0 = NQUICK_CALL(_Tak(expression)(error_free), 62, cplus)) == (PPTREE) -1 ) {
                    MulFreeTree(3, _ptRes0, _ptTree0, valTree);
                    PROG_EXIT(declarator_value_exit, "declarator_value");
                }
                ReplaceTree(_ptRes0, 2, _ptTree0);
                valTree =  _ptRes0 ;
            }
            (tokenAhead == 1 || (Lex(), TRACE_LEX(1)));
            if ( !SEE_TOKEN(AFER, "}") || !(CommTerm(), 1) ) {
                MulFreeTree(1, valTree);
                TOKEN_EXIT(declarator_value_exit, "}");
            } else {
                tokenAhead =  0 ;
            }
            break ;
        default : break ;
    }
    {
        _retValue =  valTree ;
        goto declarator_value_ret ;
    }
    (tokenAhead || (LexComment(), tokenAhead =  -1, TRACE_LEX(1)));
    if ( _nbPre || listComm ) 
        AddComm(_ptPreComm, _nbPre, (PPTREE)0, lastTree);
    else {
        _lastTree =  (PPTREE)0 ;
        _funcLevel-- ;
    }
    return (PPTREE)0 ;
declarator_value_exit : 
    _Debug = TRACE_RULE("declarator_value", TRACE_EXIT, (PPTREE)0);
    _funcLevel-- ;
    return (PPTREE) -1 ;
declarator_value_ret : 
    _Debug = TRACE_RULE("declarator_value", TRACE_RETURN, _retValue);
    (tokenAhead || (LexComment(), tokenAhead =  -1, TRACE_LEX(1)));
    if ( _nbPre || listComm ) 
        AddComm(_ptPreComm, _nbPre, _retValue, lastTree);
    else {
        _lastTree =  _retValue ;
        _funcLevel-- ;
    }
    return _retValue ;
}

PPTREE cplus::define_dir ( int error_free )
{
    int             _oldkeepCarriage = keepCarriage ;
    int             _oldkeepAll = keepAll ;
    PFILE_POSITION  _filePosition = (PFILE_POSITION)0 ;
    int             _value, _nbPre = 0 ;
    PCOMM_ELEM      _ptPreComm = ((tokenAhead || (LexComment(), tokenAhead =  -1, TRACE_LEX(1))), listComm ? LookComm(&_nbPre) : (_funcLevel++, (PCOMM_ELEM)0));
    int             _Debug = TRACE_RULE("define_dir", TRACE_ENTER, (PPTREE)0);
    PPTREE          lastTree = _lastTree, _retValue ;
    PPTREE          _addlist1 = (PPTREE)0 ;
    PPTREE          retTree = (PPTREE)0, listDefine = (PPTREE)0, defineContent = (PPTREE)0 ;
    
    (tokenAhead == 1 || (Lex(), TRACE_LEX(1)));
    if ( !TERM_OR_META(DEFINE_DIR, "DEFINE_DIR") || !(CommTerm(), 1) ) {
        MulFreeTree(4, _addlist1, defineContent, listDefine, retTree);
        TOKEN_EXIT(define_dir_exit, "DEFINE_DIR");
    } else {
        tokenAhead =  0 ;
    }
    {
        PPTREE  _ptTree0 = 0, _ptRes0 = 0 ;
        _ptRes0 =  MakeTree(DEFINE_DIR, 3);
        {
            PPTREE  _ptTree1 = 0, _ptRes1 = 0 ;
            _ptRes1 =  MakeTree(IDENT, 1);
            (tokenAhead == 4 || (LexDefineName(), TRACE_LEX(1)));
            if ( !TERM_OR_META(DEFINE_NAME, "DEFINE_NAME") || !BUILD_TERM_META(_ptTree1) ) {
                MulFreeTree(8, _ptRes1, _ptTree1, _ptRes0, _ptTree0, _addlist1, defineContent, listDefine, retTree);
                TOKEN_EXIT(define_dir_exit, "DEFINE_NAME");
            } else {
                tokenAhead =  0 ;
            }
            ReplaceTree(_ptRes1, 1, _ptTree1);
            _ptTree0 =  _ptRes1 ;
        }
        ReplaceTree(_ptRes0, 1, _ptTree0);
        retTree =  _ptRes0 ;
    }
    {
        keepCarriage =  1 ;
        if ( (!tokenAhead || ExtUnputBuf()) && GetString("(", 0) ) {
            {
                PPTREE  _ptTree0 = 0 ;
                if ( (_ptTree0 = NQUICK_CALL(_Tak(parameter_list)(error_free), 106, cplus)) == (PPTREE) -1 ) {
                    MulFreeTree(5, _ptTree0, _addlist1, defineContent, listDefine, retTree);
                    PROG_EXIT(define_dir_exit, "define_dir");
                }
                ReplaceTree(retTree, 2, _ptTree0);
            }
        }
        ExtUnputBuf();
        while ( c == ' ' || c == '\t' ) 
            NextChar();
        ptStockBuf =  -1 ;
        lexEl.Erase();
        tokenAhead =  0 ;
        oldLine =  line, oldCol =  col ;
        if ( !lexCallLex ) {
            PUT_COORD_CALL ;
        }
        {
            keepAll   =  1 ;
            _addlist1 =  listDefine ;
            while ( (tokenAhead == 3 || (LexDefine(), TRACE_LEX(1)))
                        && TERM_OR_META(DEFINED_CONTINUED, "DEFINED_CONTINUED")
                        && !(tokenAhead = 0)
                        && BUILD_TERM_META(defineContent) ) {
                _addlist1 =  AddList(_addlist1, defineContent);
                if ( listDefine ) {
                    _addlist1 =  SonTree(_addlist1, 2);
                } else {
                    listDefine =  _addlist1 ;
                }
            }
            {
                PPTREE  _ptTree0 = 0 ;
                (tokenAhead == 3 || (LexDefine(), TRACE_LEX(1)));
                if ( !TERM_OR_META(DEFINED_NOT_CONTINUED, "DEFINED_NOT_CONTINUED") || !BUILD_TERM_META(_ptTree0) ) {
                    MulFreeTree(5, _ptTree0, _addlist1, defineContent, listDefine, retTree);
                    TOKEN_EXIT(define_dir_exit, "DEFINED_NOT_CONTINUED");
                } else {
                    tokenAhead =  0 ;
                }
                listDefine =  AddList(listDefine, _ptTree0);
            }
            keepAll =  _oldkeepAll ;
        }
        keepCarriage =  _oldkeepCarriage ;
    }
    {
        PPTREE  _ptTree0 = 0 ;
        _ptTree0  =  ReplaceTree(retTree, 3, listDefine);
        _retValue =  _ptTree0 ;
        goto define_dir_ret ;
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
define_dir_exit : 
    _Debug = TRACE_RULE("define_dir", TRACE_EXIT, (PPTREE)0);
    _funcLevel-- ;
    keepCarriage =  _oldkeepCarriage ;
    keepAll      =  _oldkeepAll ;
    return (PPTREE) -1 ;
define_dir_ret : 
    _Debug = TRACE_RULE("define_dir", TRACE_RETURN, _retValue);
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
