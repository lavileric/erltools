/*************************************************************************/
/*                                                                       */
/*        Produced by MetaGen version 2.0  -    1989-2006                 */
/*       Syntaxic Analyzer Meta Generator developped by                  */
/*                  Eric Lavillonniere                                   */
/*                                                                       */
/*************************************************************************/
#include "token.h"
#include "cplus.h"

PPTREE cplus::expression ( int error_free )
{
    PFILE_POSITION  _filePosition = (PFILE_POSITION)0 ;
    int             _value, _nbPre = 0 ;
    PCOMM_ELEM      _ptPreComm = ((tokenAhead || (LexComment(), tokenAhead =  -1, TRACE_LEX(1))), listComm ? LookComm(&_nbPre) : (_funcLevel++, (PCOMM_ELEM)0));
    int             _Debug = TRACE_RULE("expression", TRACE_ENTER, (PPTREE)0);
    PPTREE          lastTree = _lastTree, _retValue ;
    PPTREE          _addlist1 = (PPTREE)0 ;
    PPTREE          expTree = (PPTREE)0, list = (PPTREE)0 ;
    
    if ( (expTree = NQUICK_CALL(_Tak(assignment_expression)(error_free), 16, cplus)) == (PPTREE) -1 ) {
        MulFreeTree(3, _addlist1, expTree, list);
        PROG_EXIT(expression_exit, "expression");
    }
    if ( (tokenAhead == 1 || (Lex(), TRACE_LEX(1))) && SEE_TOKEN(VIRG, ",") ) {
        list      =  AddList(list, expTree);
        _addlist1 =  list ;
        while ( (tokenAhead == 1 || (Lex(), TRACE_LEX(1))) && SEE_TOKEN(VIRG, ",") && ((tokenAhead = 0), CommTerm(), 1) ) {
            {
                PPTREE  _ptTree0 = 0 ;
                if ( (_ptTree0 = NQUICK_CALL(_Tak(assignment_expression)(error_free), 16, cplus)) == (PPTREE) -1 ) {
                    MulFreeTree(4, _ptTree0, _addlist1, expTree, list);
                    PROG_EXIT(expression_exit, "expression");
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
            {
                PPTREE  _ptRes1 = 0 ;
                _ptRes1 =  MakeTree(EXP_SEQ, 1);
                ReplaceTree(_ptRes1, 1, list);
                _ptTree0 =  _ptRes1 ;
            }
            _retValue =  _ptTree0 ;
            goto expression_ret ;
        }
    } else {
        {
            _retValue =  expTree ;
            goto expression_ret ;
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
expression_exit : 
    _Debug = TRACE_RULE("expression", TRACE_EXIT, (PPTREE)0);
    _funcLevel-- ;
    return (PPTREE) -1 ;
expression_ret : 
    _Debug = TRACE_RULE("expression", TRACE_RETURN, _retValue);
    (tokenAhead || (LexComment(), tokenAhead =  -1, TRACE_LEX(1)));
    if ( _nbPre || listComm ) 
        AddComm(_ptPreComm, _nbPre, _retValue, lastTree);
    else {
        _lastTree =  _retValue ;
        _funcLevel-- ;
    }
    return _retValue ;
}

PPTREE cplus::expression_for ( int error_free )
{
    PFILE_POSITION  _filePosition = (PFILE_POSITION)0 ;
    int             _value, _nbPre = 0 ;
    PCOMM_ELEM      _ptPreComm = ((tokenAhead || (LexComment(), tokenAhead =  -1, TRACE_LEX(1))), listComm ? LookComm(&_nbPre) : (_funcLevel++, (PCOMM_ELEM)0));
    int             _Debug = TRACE_RULE("expression_for", TRACE_ENTER, (PPTREE)0);
    PPTREE          lastTree = _lastTree, _retValue ;
    PPTREE          retTree = (PPTREE)0 ;
    
    if ( (retTree = NQUICK_CALL(_Tak(expression)(error_free), 62, cplus)) == (PPTREE) -1 ) {
        MulFreeTree(1, retTree);
        PROG_EXIT(expression_for_exit, "expression_for");
    }
    if ( !((tokenAhead == 1 || (Lex(), TRACE_LEX(1))) && SEE_TOKEN(PVIR, ";")) ) {
        MulFreeTree(1, retTree);
        LEX_EXIT("", 0);
        goto expression_for_exit ;
    }
    {
        _retValue =  retTree ;
        goto expression_for_ret ;
    }
    (tokenAhead || (LexComment(), tokenAhead =  -1, TRACE_LEX(1)));
    if ( _nbPre || listComm ) 
        AddComm(_ptPreComm, _nbPre, (PPTREE)0, lastTree);
    else {
        _lastTree =  (PPTREE)0 ;
        _funcLevel-- ;
    }
    return (PPTREE)0 ;
expression_for_exit : 
    _Debug = TRACE_RULE("expression_for", TRACE_EXIT, (PPTREE)0);
    _funcLevel-- ;
    return (PPTREE) -1 ;
expression_for_ret : 
    _Debug = TRACE_RULE("expression_for", TRACE_RETURN, _retValue);
    (tokenAhead || (LexComment(), tokenAhead =  -1, TRACE_LEX(1)));
    if ( _nbPre || listComm ) 
        AddComm(_ptPreComm, _nbPre, _retValue, lastTree);
    else {
        _lastTree =  _retValue ;
        _funcLevel-- ;
    }
    return _retValue ;
}

PPTREE cplus::ext_all ( int error_free )
{
    PFILE_POSITION  _filePosition = (PFILE_POSITION)0 ;
    int             _value, _nbPre = 0 ;
    PCOMM_ELEM      _ptPreComm = ((tokenAhead || (LexComment(), tokenAhead =  -1, TRACE_LEX(1))), listComm ? LookComm(&_nbPre) : (_funcLevel++, (PCOMM_ELEM)0));
    int             _Debug = TRACE_RULE("ext_all", TRACE_ENTER, (PPTREE)0);
    PPTREE          lastTree = _lastTree, _retValue ;
    PPTREE          retTree = (PPTREE)0 ;
    
    if ( NPUSH_CALL_AFF_VERIF(retTree = , _Tak(ext_all_no_linkage), 66, cplus) ) {
        {
            _retValue =  retTree ;
            goto ext_all_ret ;
        }
    } else {
        {
            PPTREE  _ptTree0 = 0 ;
            if ( (_ptTree0 = NQUICK_CALL(_Tak(linkage_specification)(error_free), 88, cplus)) == (PPTREE) -1 ) {
                MulFreeTree(2, _ptTree0, retTree);
                PROG_EXIT(ext_all_exit, "ext_all");
            }
            _retValue =  _ptTree0 ;
            goto ext_all_ret ;
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
ext_all_exit : 
    _Debug = TRACE_RULE("ext_all", TRACE_EXIT, (PPTREE)0);
    _funcLevel-- ;
    return (PPTREE) -1 ;
ext_all_ret : 
    _Debug = TRACE_RULE("ext_all", TRACE_RETURN, _retValue);
    (tokenAhead || (LexComment(), tokenAhead =  -1, TRACE_LEX(1)));
    if ( _nbPre || listComm ) 
        AddComm(_ptPreComm, _nbPre, _retValue, lastTree);
    else {
        _lastTree =  _retValue ;
        _funcLevel-- ;
    }
    return _retValue ;
}

PPTREE cplus::ext_all_ext ( int error_free )
{
    PFILE_POSITION  _filePosition = (PFILE_POSITION)0 ;
    int             _value, _nbPre = 0 ;
    PCOMM_ELEM      _ptPreComm = ((tokenAhead || (LexComment(), tokenAhead =  -1, TRACE_LEX(1))), listComm ? LookComm(&_nbPre) : (_funcLevel++, (PCOMM_ELEM)0));
    int             _Debug = TRACE_RULE("ext_all_ext", TRACE_ENTER, (PPTREE)0);
    PPTREE          lastTree = _lastTree, _retValue ;
    PPTREE          retTree = (PPTREE)0 ;
    
    if ( !NPUSH_CALL_AFF_VERIF(retTree = , _Tak(protect_declare), 114, cplus) ) {
        if ( (retTree = NQUICK_CALL(_Tak(ext_all)(error_free), 64, cplus)) == (PPTREE) -1 ) {
            MulFreeTree(1, retTree);
            PROG_EXIT(ext_all_ext_exit, "ext_all_ext");
        }
    }
    {
        _retValue =  retTree ;
        goto ext_all_ext_ret ;
    }
    (tokenAhead || (LexComment(), tokenAhead =  -1, TRACE_LEX(1)));
    if ( _nbPre || listComm ) 
        AddComm(_ptPreComm, _nbPre, (PPTREE)0, lastTree);
    else {
        _lastTree =  (PPTREE)0 ;
        _funcLevel-- ;
    }
    return (PPTREE)0 ;
ext_all_ext_exit : 
    _Debug = TRACE_RULE("ext_all_ext", TRACE_EXIT, (PPTREE)0);
    _funcLevel-- ;
    return (PPTREE) -1 ;
ext_all_ext_ret : 
    _Debug = TRACE_RULE("ext_all_ext", TRACE_RETURN, _retValue);
    (tokenAhead || (LexComment(), tokenAhead =  -1, TRACE_LEX(1)));
    if ( _nbPre || listComm ) 
        AddComm(_ptPreComm, _nbPre, _retValue, lastTree);
    else {
        _lastTree =  _retValue ;
        _funcLevel-- ;
    }
    return _retValue ;
}

PPTREE cplus::ext_all_no_linkage ( int error_free )
{
    PFILE_POSITION  _filePosition = (PFILE_POSITION)0 ;
    int             _value, _nbPre = 0 ;
    PCOMM_ELEM      _ptPreComm = ((tokenAhead || (LexComment(), tokenAhead =  -1, TRACE_LEX(1))), listComm ? LookComm(&_nbPre) : (_funcLevel++, (PCOMM_ELEM)0));
    int             _Debug = TRACE_RULE("ext_all_no_linkage", TRACE_ENTER, (PPTREE)0);
    PPTREE          lastTree = _lastTree, _retValue ;
    PPTREE          _addlist1 = (PPTREE)0 ;
    PPTREE          decl = (PPTREE)0, listTemp = (PPTREE)0 ;
    
    if ( (tokenAhead == 1 || (Lex(), TRACE_LEX(1))) && SEE_TOKEN(TEMPLATE, "template") && ((tokenAhead = 0), CommTerm(), 1) ) {
        (tokenAhead == 1 || (Lex(), TRACE_LEX(1)));
        if ( !SEE_TOKEN(INFE, "<") || !(CommTerm(), 1) ) {
            MulFreeTree(3, _addlist1, decl, listTemp);
            TOKEN_EXIT(ext_all_no_linkage_exit, "<");
        } else {
            tokenAhead =  0 ;
        }
        _addlist1 =  listTemp ;
        do {
            (tokenAhead == 1 || (Lex(), TRACE_LEX(1)));
            switch ( lexEl.Value ) {
                case CLASS : 
                    tokenAhead = 0 ;
                    CommTerm();
                    {
                        PPTREE  _ptTree0 = 0 ;
                        {
                            PPTREE  _ptTree1 = 0, _ptRes1 = 0 ;
                            _ptRes1 =  MakeTree(CLASS_PARAM, 1);
                            if ( (_ptTree1 = NQUICK_CALL(_Tak(arg_declarator_type)(error_free), 10, cplus)) == (PPTREE) -1 ) {
                                MulFreeTree(6, _ptRes1, _ptTree1, _ptTree0, _addlist1, decl, listTemp);
                                PROG_EXIT(ext_all_no_linkage_exit, "ext_all_no_linkage");
                            }
                            ReplaceTree(_ptRes1, 1, _ptTree1);
                            _ptTree0 =  _ptRes1 ;
                        }
                        _addlist1 =  AddList(_addlist1, _ptTree0);
                    }
                    if ( listTemp ) {
                        _addlist1 =  SonTree(_addlist1, 2);
                    } else {
                        listTemp =  _addlist1 ;
                    }
                    break ;
                default : 
                    {
                        PPTREE  _ptTree0 = 0 ;
                        if ( (_ptTree0 = NQUICK_CALL(_Tak(arg_declarator_type)(error_free), 10, cplus)) == (PPTREE) -1 ) {
                            MulFreeTree(4, _ptTree0, _addlist1, decl, listTemp);
                            PROG_EXIT(ext_all_no_linkage_exit, "ext_all_no_linkage");
                        }
                        _addlist1 =  AddList(_addlist1, _ptTree0);
                    }
                    if ( listTemp ) {
                        _addlist1 =  SonTree(_addlist1, 2);
                    } else {
                        listTemp =  _addlist1 ;
                    }
                    break ;
            }
        } while ( !!((tokenAhead == 1 || (Lex(), TRACE_LEX(1))) && SEE_TOKEN(VIRG, ",") && ((tokenAhead = 0), CommTerm(), 1)) );
        (tokenAhead == 1 || (Lex(), TRACE_LEX(1)));
        if ( !SEE_TOKEN(SUPE, ">") || !(CommTerm(), 1) ) {
            MulFreeTree(3, _addlist1, decl, listTemp);
            TOKEN_EXIT(ext_all_no_linkage_exit, ">");
        } else {
            tokenAhead =  0 ;
        }
        {
            PPTREE  _ptTree0 = 0 ;
            {
                PPTREE  _ptTree1 = 0, _ptRes1 = 0 ;
                _ptRes1 =  MakeTree(TEMPLATE_DECL, 2);
                ReplaceTree(_ptRes1, 1, listTemp);
                if ( (_ptTree1 = NQUICK_CALL(_Tak(ext_all_no_linkage)(error_free), 66, cplus)) == (PPTREE) -1 ) {
                    MulFreeTree(6, _ptRes1, _ptTree1, _ptTree0, _addlist1, decl, listTemp);
                    PROG_EXIT(ext_all_no_linkage_exit, "ext_all_no_linkage");
                }
                ReplaceTree(_ptRes1, 2, _ptTree1);
                _ptTree0 =  _ptRes1 ;
            }
            _retValue =  _ptTree0 ;
            goto ext_all_no_linkage_ret ;
        }
    }
    if ( NPUSH_CALL_AFF_VERIF(decl = , _Tak(ext_data_declaration), 71, cplus)
            || NPUSH_CALL_AFF_VERIF(decl = , _Tak(func_declaration), 76, cplus)
            || NPUSH_CALL_AFF_VERIF(decl = , _Tak(ext_decl_dir), 72, cplus)
            || NPUSH_CALL_AFF_VERIF(decl = , _Tak(asm_declaration), 14, cplus) ) {
        {
            _retValue =  decl ;
            goto ext_all_no_linkage_ret ;
        }
    } else {
        {
            PPTREE  _ptTree0 = 0 ;
            if ( (_ptTree0 = NQUICK_CALL(_Tak(func_declaration)(error_free), 76, cplus)) == (PPTREE) -1 ) {
                MulFreeTree(4, _ptTree0, _addlist1, decl, listTemp);
                PROG_EXIT(ext_all_no_linkage_exit, "ext_all_no_linkage");
            }
            _retValue =  _ptTree0 ;
            goto ext_all_no_linkage_ret ;
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
ext_all_no_linkage_exit : 
    _Debug = TRACE_RULE("ext_all_no_linkage", TRACE_EXIT, (PPTREE)0);
    _funcLevel-- ;
    return (PPTREE) -1 ;
ext_all_no_linkage_ret : 
    _Debug = TRACE_RULE("ext_all_no_linkage", TRACE_RETURN, _retValue);
    (tokenAhead || (LexComment(), tokenAhead =  -1, TRACE_LEX(1)));
    if ( _nbPre || listComm ) 
        AddComm(_ptPreComm, _nbPre, _retValue, lastTree);
    else {
        _lastTree =  _retValue ;
        _funcLevel-- ;
    }
    return _retValue ;
}

PPTREE cplus::ext_data_decl_sc_ty ( int error_free )
{
    PFILE_POSITION  _filePosition = (PFILE_POSITION)0 ;
    int             _value, _nbPre = 0 ;
    PCOMM_ELEM      _ptPreComm = ((tokenAhead || (LexComment(), tokenAhead =  -1, TRACE_LEX(1))), listComm ? LookComm(&_nbPre) : (_funcLevel++, (PCOMM_ELEM)0));
    int             _Debug = TRACE_RULE("ext_data_decl_sc_ty", TRACE_ENTER, (PPTREE)0);
    PPTREE          lastTree = _lastTree, _retValue ;
    PPTREE          retTree = (PPTREE)0 ;
    
    if ( !NPUSH_CALL_AFF_VERIF(retTree = , _Tak(ext_data_decl_sc_ty_full), 68, cplus) ) {
        if ( (retTree = NQUICK_CALL(_Tak(ext_data_decl_sc_ty_short)(error_free), 69, cplus)) == (PPTREE) -1 ) {
            MulFreeTree(1, retTree);
            PROG_EXIT(ext_data_decl_sc_ty_exit, "ext_data_decl_sc_ty");
        }
    }
    {
        _retValue =  retTree ;
        goto ext_data_decl_sc_ty_ret ;
    }
    (tokenAhead || (LexComment(), tokenAhead =  -1, TRACE_LEX(1)));
    if ( _nbPre || listComm ) 
        AddComm(_ptPreComm, _nbPre, (PPTREE)0, lastTree);
    else {
        _lastTree =  (PPTREE)0 ;
        _funcLevel-- ;
    }
    return (PPTREE)0 ;
ext_data_decl_sc_ty_exit : 
    _Debug = TRACE_RULE("ext_data_decl_sc_ty", TRACE_EXIT, (PPTREE)0);
    _funcLevel-- ;
    return (PPTREE) -1 ;
ext_data_decl_sc_ty_ret : 
    _Debug = TRACE_RULE("ext_data_decl_sc_ty", TRACE_RETURN, _retValue);
    (tokenAhead || (LexComment(), tokenAhead =  -1, TRACE_LEX(1)));
    if ( _nbPre || listComm ) 
        AddComm(_ptPreComm, _nbPre, _retValue, lastTree);
    else {
        _lastTree =  _retValue ;
        _funcLevel-- ;
    }
    return _retValue ;
}

PPTREE cplus::ext_data_decl_sc_ty_full ( int error_free )
{
    PFILE_POSITION  _filePosition = (PFILE_POSITION)0 ;
    int             _value, _nbPre = 0 ;
    PCOMM_ELEM      _ptPreComm = ((tokenAhead || (LexComment(), tokenAhead =  -1, TRACE_LEX(1))), listComm ? LookComm(&_nbPre) : (_funcLevel++, (PCOMM_ELEM)0));
    int             _Debug = TRACE_RULE("ext_data_decl_sc_ty_full", TRACE_ENTER, (PPTREE)0);
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
            PROG_EXIT(ext_data_decl_sc_ty_full_exit, "ext_data_decl_sc_ty_full");
        }
        ReplaceTree(retTree, 1, _ptTree0);
    }
    {
        PPTREE  _ptTree0 = 0 ;
        if ( (_ptTree0 = NQUICK_CALL(_Tak(type_specifier)(error_free), 145, cplus)) == (PPTREE) -1 ) {
            MulFreeTree(2, _ptTree0, retTree);
            PROG_EXIT(ext_data_decl_sc_ty_full_exit, "ext_data_decl_sc_ty_full");
        }
        ReplaceTree(retTree, 2, _ptTree0);
    }
    (tokenAhead == 1 || (Lex(), TRACE_LEX(1)));
    if ( !SEE_TOKEN(PVIR, ";") || !(CommTerm(), 1) ) {
        MulFreeTree(1, retTree);
        TOKEN_EXIT(ext_data_decl_sc_ty_full_exit, ";");
    } else {
        tokenAhead =  0 ;
    }
    {
        _retValue =  retTree ;
        goto ext_data_decl_sc_ty_full_ret ;
    }
    (tokenAhead || (LexComment(), tokenAhead =  -1, TRACE_LEX(1)));
    if ( _nbPre || listComm ) 
        AddComm(_ptPreComm, _nbPre, (PPTREE)0, lastTree);
    else {
        _lastTree =  (PPTREE)0 ;
        _funcLevel-- ;
    }
    return (PPTREE)0 ;
ext_data_decl_sc_ty_full_exit : 
    _Debug = TRACE_RULE("ext_data_decl_sc_ty_full", TRACE_EXIT, (PPTREE)0);
    _funcLevel-- ;
    return (PPTREE) -1 ;
ext_data_decl_sc_ty_full_ret : 
    _Debug = TRACE_RULE("ext_data_decl_sc_ty_full", TRACE_RETURN, _retValue);
    (tokenAhead || (LexComment(), tokenAhead =  -1, TRACE_LEX(1)));
    if ( _nbPre || listComm ) 
        AddComm(_ptPreComm, _nbPre, _retValue, lastTree);
    else {
        _lastTree =  _retValue ;
        _funcLevel-- ;
    }
    return _retValue ;
}

PPTREE cplus::ext_data_decl_sc_ty_short ( int error_free )
{
    PFILE_POSITION  _filePosition = (PFILE_POSITION)0 ;
    int             _value, _nbPre = 0 ;
    PCOMM_ELEM      _ptPreComm = ((tokenAhead || (LexComment(), tokenAhead =  -1, TRACE_LEX(1))), listComm ? LookComm(&_nbPre) : (_funcLevel++, (PCOMM_ELEM)0));
    int             _Debug = TRACE_RULE("ext_data_decl_sc_ty_short", TRACE_ENTER, (PPTREE)0);
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
            PROG_EXIT(ext_data_decl_sc_ty_short_exit, "ext_data_decl_sc_ty_short");
        }
        ReplaceTree(retTree, 2, _ptTree0);
    }
    (tokenAhead == 1 || (Lex(), TRACE_LEX(1)));
    if ( !SEE_TOKEN(PVIR, ";") || !(CommTerm(), 1) ) {
        MulFreeTree(1, retTree);
        TOKEN_EXIT(ext_data_decl_sc_ty_short_exit, ";");
    } else {
        tokenAhead =  0 ;
    }
    {
        _retValue =  retTree ;
        goto ext_data_decl_sc_ty_short_ret ;
    }
    (tokenAhead || (LexComment(), tokenAhead =  -1, TRACE_LEX(1)));
    if ( _nbPre || listComm ) 
        AddComm(_ptPreComm, _nbPre, (PPTREE)0, lastTree);
    else {
        _lastTree =  (PPTREE)0 ;
        _funcLevel-- ;
    }
    return (PPTREE)0 ;
ext_data_decl_sc_ty_short_exit : 
    _Debug = TRACE_RULE("ext_data_decl_sc_ty_short", TRACE_EXIT, (PPTREE)0);
    _funcLevel-- ;
    return (PPTREE) -1 ;
ext_data_decl_sc_ty_short_ret : 
    _Debug = TRACE_RULE("ext_data_decl_sc_ty_short", TRACE_RETURN, _retValue);
    (tokenAhead || (LexComment(), tokenAhead =  -1, TRACE_LEX(1)));
    if ( _nbPre || listComm ) 
        AddComm(_ptPreComm, _nbPre, _retValue, lastTree);
    else {
        _lastTree =  _retValue ;
        _funcLevel-- ;
    }
    return _retValue ;
}

PPTREE cplus::ext_data_decl_simp ( int error_free )
{
    PFILE_POSITION  _filePosition = (PFILE_POSITION)0 ;
    int             _value, _nbPre = 0 ;
    PCOMM_ELEM      _ptPreComm = ((tokenAhead || (LexComment(), tokenAhead =  -1, TRACE_LEX(1))), listComm ? LookComm(&_nbPre) : (_funcLevel++, (PCOMM_ELEM)0));
    int             _Debug = TRACE_RULE("ext_data_decl_simp", TRACE_ENTER, (PPTREE)0);
    PPTREE          lastTree = _lastTree, _retValue ;
    PPTREE          retTree = (PPTREE)0 ;
    
    if ( !NPUSH_CALL_AFF_VERIF(retTree = , _Tak(data_declaration), 40, cplus) && !NPUSH_CALL_AFF_VERIF(retTree = , _Tak(inline_namespace), 82, cplus) ) {
        if ( (retTree = NQUICK_CALL(_Tak(ext_data_decl_sc_ty)(error_free), 67, cplus)) == (PPTREE) -1 ) {
            MulFreeTree(1, retTree);
            PROG_EXIT(ext_data_decl_simp_exit, "ext_data_decl_simp");
        }
    }
    {
        _retValue =  retTree ;
        goto ext_data_decl_simp_ret ;
    }
    (tokenAhead || (LexComment(), tokenAhead =  -1, TRACE_LEX(1)));
    if ( _nbPre || listComm ) 
        AddComm(_ptPreComm, _nbPre, (PPTREE)0, lastTree);
    else {
        _lastTree =  (PPTREE)0 ;
        _funcLevel-- ;
    }
    return (PPTREE)0 ;
ext_data_decl_simp_exit : 
    _Debug = TRACE_RULE("ext_data_decl_simp", TRACE_EXIT, (PPTREE)0);
    _funcLevel-- ;
    return (PPTREE) -1 ;
ext_data_decl_simp_ret : 
    _Debug = TRACE_RULE("ext_data_decl_simp", TRACE_RETURN, _retValue);
    (tokenAhead || (LexComment(), tokenAhead =  -1, TRACE_LEX(1)));
    if ( _nbPre || listComm ) 
        AddComm(_ptPreComm, _nbPre, _retValue, lastTree);
    else {
        _lastTree =  _retValue ;
        _funcLevel-- ;
    }
    return _retValue ;
}

PPTREE cplus::ext_data_declaration ( int error_free )
{
    PFILE_POSITION  _filePosition = (PFILE_POSITION)0 ;
    int             _value, _nbPre = 0 ;
    PCOMM_ELEM      _ptPreComm = ((tokenAhead || (LexComment(), tokenAhead =  -1, TRACE_LEX(1))), listComm ? LookComm(&_nbPre) : (_funcLevel++, (PCOMM_ELEM)0));
    int             _Debug = TRACE_RULE("ext_data_declaration", TRACE_ENTER, (PPTREE)0);
    PPTREE          lastTree = _lastTree, _retValue ;
    PPTREE          retTree = (PPTREE)0 ;
    
    (tokenAhead == 1 || (Lex(), TRACE_LEX(1)));
    switch ( lexEl.Value ) {
        case TYPEDEF : 
            tokenAhead = 0 ;
            CommTerm();
            if ( !NPUSH_CALL_AFF_VERIF(retTree = , _Tak(typedef_and_declarator), 147, cplus) ) {
                {
                    PPTREE  _ptTree0 = 0, _ptRes0 = 0 ;
                    _ptRes0 =  MakeTree(TYPEDEF, 2);
                    if ( (_ptTree0 = NQUICK_CALL(_Tak(declarator_list)(error_free), 48, cplus)) == (PPTREE) -1 ) {
                        MulFreeTree(3, _ptRes0, _ptTree0, retTree);
                        PROG_EXIT(ext_data_declaration_exit, "ext_data_declaration");
                    }
                    ReplaceTree(_ptRes0, 2, _ptTree0);
                    retTree =  _ptRes0 ;
                }
            }
            (tokenAhead == 1 || (Lex(), TRACE_LEX(1)));
            if ( !SEE_TOKEN(PVIR, ";") || !(CommTerm(), 1) ) {
                MulFreeTree(1, retTree);
                TOKEN_EXIT(ext_data_declaration_exit, ";");
            } else {
                tokenAhead =  0 ;
            }
            {
                _retValue =  retTree ;
                goto ext_data_declaration_ret ;
            }
            break ;
        case NAMESPACE : 
            {
                PPTREE  _ptTree0 = 0 ;
                if ( (_ptTree0 = NQUICK_CALL(_Tak(name_space)(error_free), 98, cplus)) == (PPTREE) -1 ) {
                    MulFreeTree(2, _ptTree0, retTree);
                    PROG_EXIT(ext_data_declaration_exit, "ext_data_declaration");
                }
                _retValue =  _ptTree0 ;
                goto ext_data_declaration_ret ;
            }
            break ;
        case USING : 
            {
                PPTREE  _ptTree0 = 0 ;
                if ( (_ptTree0 = NQUICK_CALL(_Tak(name_space)(error_free), 98, cplus)) == (PPTREE) -1 ) {
                    MulFreeTree(2, _ptTree0, retTree);
                    PROG_EXIT(ext_data_declaration_exit, "ext_data_declaration");
                }
                _retValue =  _ptTree0 ;
                goto ext_data_declaration_ret ;
            }
            break ;
        case PVIR : 
            tokenAhead = 0 ;
            CommTerm();
            {
                PPTREE  _ptTree0 = 0 ;
                {
                    PPTREE  _ptRes1 = 0 ;
                    _ptRes1  =  MakeTree(STAT_VOID, 0);
                    _ptTree0 =  _ptRes1 ;
                }
                _retValue =  _ptTree0 ;
                goto ext_data_declaration_ret ;
            }
            break ;
        case __EXTENSION__ : 
            tokenAhead = 0 ;
            CommTerm();
            {
                PPTREE  _ptTree0 = 0 ;
                {
                    PPTREE  _ptTree1 = 0, _ptRes1 = 0 ;
                    _ptRes1 =  MakeTree(EXTENSION, 1);
                    if ( (_ptTree1 = NQUICK_CALL(_Tak(ext_data_decl_simp)(error_free), 70, cplus)) == (PPTREE) -1 ) {
                        MulFreeTree(4, _ptRes1, _ptTree1, _ptTree0, retTree);
                        PROG_EXIT(ext_data_declaration_exit, "ext_data_declaration");
                    }
                    ReplaceTree(_ptRes1, 1, _ptTree1);
                    _ptTree0 =  _ptRes1 ;
                }
                _retValue =  _ptTree0 ;
                goto ext_data_declaration_ret ;
            }
            break ;
        default : 
            {
                PPTREE  _ptTree0 = 0 ;
                if ( (_ptTree0 = NQUICK_CALL(_Tak(ext_data_decl_simp)(error_free), 70, cplus)) == (PPTREE) -1 ) {
                    MulFreeTree(2, _ptTree0, retTree);
                    PROG_EXIT(ext_data_declaration_exit, "ext_data_declaration");
                }
                _retValue =  _ptTree0 ;
                goto ext_data_declaration_ret ;
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
ext_data_declaration_exit : 
    _Debug = TRACE_RULE("ext_data_declaration", TRACE_EXIT, (PPTREE)0);
    _funcLevel-- ;
    return (PPTREE) -1 ;
ext_data_declaration_ret : 
    _Debug = TRACE_RULE("ext_data_declaration", TRACE_RETURN, _retValue);
    (tokenAhead || (LexComment(), tokenAhead =  -1, TRACE_LEX(1)));
    if ( _nbPre || listComm ) 
        AddComm(_ptPreComm, _nbPre, _retValue, lastTree);
    else {
        _lastTree =  _retValue ;
        _funcLevel-- ;
    }
    return _retValue ;
}

PPTREE cplus::ext_decl_dir ( int error_free )
{
    PFILE_POSITION  _filePosition = (PFILE_POSITION)0 ;
    int             _value, _nbPre = 0 ;
    PCOMM_ELEM      _ptPreComm = ((tokenAhead || (LexComment(), tokenAhead =  -1, TRACE_LEX(1))), listComm ? LookComm(&_nbPre) : (_funcLevel++, (PCOMM_ELEM)0));
    int             _Debug = TRACE_RULE("ext_decl_dir", TRACE_ENTER, (PPTREE)0);
    PPTREE          lastTree = _lastTree, _retValue ;
    PPTREE          retTree = (PPTREE)0 ;
    
    if ( NPUSH_CALL_AFF_VERIF(retTree = , _Tak(directive), 52, cplus) ) {
        {
            _retValue =  retTree ;
            goto ext_decl_dir_ret ;
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
                if ( (_ptTree0 = NQUICK_CALL(_Tak(ext_decl_if_dir)(error_free), 73, cplus)) == (PPTREE) -1 ) {
                    MulFreeTree(2, _ptTree0, retTree);
                    PROG_EXIT(ext_decl_dir_exit, "ext_decl_dir");
                }
                _retValue =  _ptTree0 ;
                goto ext_decl_dir_ret ;
            }
            break ;
        case IFDEF_DIR : 
            {
                PPTREE  _ptTree0 = 0 ;
                if ( (_ptTree0 = NQUICK_CALL(_Tak(ext_decl_ifdef_dir)(error_free), 74, cplus)) == (PPTREE) -1 ) {
                    MulFreeTree(2, _ptTree0, retTree);
                    PROG_EXIT(ext_decl_dir_exit, "ext_decl_dir");
                }
                _retValue =  _ptTree0 ;
                goto ext_decl_dir_ret ;
            }
            break ;
        case IFNDEF_DIR : 
            {
                PPTREE  _ptTree0 = 0 ;
                if ( (_ptTree0 = NQUICK_CALL(_Tak(ext_decl_ifdef_dir)(error_free), 74, cplus)) == (PPTREE) -1 ) {
                    MulFreeTree(2, _ptTree0, retTree);
                    PROG_EXIT(ext_decl_dir_exit, "ext_decl_dir");
                }
                _retValue =  _ptTree0 ;
                goto ext_decl_dir_ret ;
            }
            break ;
        default : 
            MulFreeTree(1, retTree);
            CASE_EXIT(ext_decl_dir_exit, "either IF_DIR or IFDEF_DIR or IFNDEF_DIR");
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
ext_decl_dir_exit : 
    _Debug = TRACE_RULE("ext_decl_dir", TRACE_EXIT, (PPTREE)0);
    _funcLevel-- ;
    return (PPTREE) -1 ;
ext_decl_dir_ret : 
    _Debug = TRACE_RULE("ext_decl_dir", TRACE_RETURN, _retValue);
    (tokenAhead || (LexComment(), tokenAhead =  -1, TRACE_LEX(1)));
    if ( _nbPre || listComm ) 
        AddComm(_ptPreComm, _nbPre, _retValue, lastTree);
    else {
        _lastTree =  _retValue ;
        _funcLevel-- ;
    }
    return _retValue ;
}

PPTREE cplus::ext_decl_if_dir ( int error_free )
{
    int             _oldkeepCarriage = keepCarriage ;
    PFILE_POSITION  _filePosition = (PFILE_POSITION)0 ;
    int             _value, _nbPre = 0 ;
    PCOMM_ELEM      _ptPreComm = ((tokenAhead || (LexComment(), tokenAhead =  -1, TRACE_LEX(1))), listComm ? LookComm(&_nbPre) : (_funcLevel++, (PCOMM_ELEM)0));
    int             _Debug = TRACE_RULE("ext_decl_if_dir", TRACE_ENTER, (PPTREE)0);
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
                PROG_EXIT(ext_decl_if_dir_exit, "ext_decl_if_dir");
            }
            ReplaceTree(_ptRes0, 1, _ptTree0);
            retTree =  _ptRes0 ;
        }
        (tokenAhead == 1 || (Lex(), TRACE_LEX(1)));
        if ( !TERM_OR_META(CARRIAGE_RETURN, "CARRIAGE_RETURN") || !(CommTerm(), 1) ) {
            MulFreeTree(5, _addlist1, _addlist2, list, list2, retTree);
            TOKEN_EXIT(ext_decl_if_dir_exit, "CARRIAGE_RETURN");
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
            if ( (_ptTree0 = NQUICK_CALL(_Tak(ext_all_ext)(error_free), 65, cplus)) == (PPTREE) -1 ) {
                MulFreeTree(6, _ptTree0, _addlist1, _addlist2, list, list2, retTree);
                PROG_EXIT(ext_decl_if_dir_exit, "ext_decl_if_dir");
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
            PROG_EXIT(ext_decl_if_dir_exit, "ext_decl_if_dir");
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
                    if ( (_ptTree0 = NQUICK_CALL(_Tak(ext_all_ext)(error_free), 65, cplus)) == (PPTREE) -1 ) {
                        MulFreeTree(6, _ptTree0, _addlist1, _addlist2, list, list2, retTree);
                        PROG_EXIT(ext_decl_if_dir_exit, "ext_decl_if_dir");
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
                    PROG_EXIT(ext_decl_if_dir_exit, "ext_decl_if_dir");
                }
                list2 =  AddList(list2, _ptTree0);
            }
            (tokenAhead == 1 || (Lex(), TRACE_LEX(1)));
            if ( !TERM_OR_META(ENDIF_DIR, "ENDIF_DIR") || !(CommTerm(), 1) ) {
                MulFreeTree(5, _addlist1, _addlist2, list, list2, retTree);
                TOKEN_EXIT(ext_decl_if_dir_exit, "ENDIF_DIR");
            } else {
                tokenAhead =  0 ;
            }
            {
                PPTREE  _ptTree0 = 0 ;
                _ptTree0  =  ReplaceTree(retTree, 3, list2);
                _retValue =  _ptTree0 ;
                goto ext_decl_if_dir_ret ;
            }
            break ;
        case ELIF_DIR : 
            tokenAhead = 0 ;
            CommTerm();
            {
                PPTREE  _ptTree0 = 0 ;
                {
                    PPTREE  _ptTree1 = 0 ;
                    if ( (_ptTree1 = NQUICK_CALL(_Tak(ext_decl_if_dir)(error_free), 73, cplus)) == (PPTREE) -1 ) {
                        MulFreeTree(7, _ptTree1, _ptTree0, _addlist1, _addlist2, list, list2, retTree);
                        PROG_EXIT(ext_decl_if_dir_exit, "ext_decl_if_dir");
                    }
                    _ptTree0 =  ReplaceTree(retTree, 3, _ptTree1);
                }
                _retValue =  _ptTree0 ;
                goto ext_decl_if_dir_ret ;
            }
            break ;
        case ENDIF_DIR : 
            tokenAhead = 0 ;
            CommTerm();
            {
                _retValue =  retTree ;
                goto ext_decl_if_dir_ret ;
            }
            break ;
        default : 
            MulFreeTree(5, _addlist1, _addlist2, list, list2, retTree);
            CASE_EXIT(ext_decl_if_dir_exit, "either ELSE_DIR or ELIF_DIR or ENDIF_DIR");
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
ext_decl_if_dir_exit : 
    _Debug = TRACE_RULE("ext_decl_if_dir", TRACE_EXIT, (PPTREE)0);
    _funcLevel-- ;
    keepCarriage =  _oldkeepCarriage ;
    return (PPTREE) -1 ;
ext_decl_if_dir_ret : 
    _Debug = TRACE_RULE("ext_decl_if_dir", TRACE_RETURN, _retValue);
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

PPTREE cplus::ext_decl_ifdef_dir ( int error_free )
{
    int             _oldkeepCarriage = keepCarriage ;
    PFILE_POSITION  _filePosition = (PFILE_POSITION)0 ;
    int             _value, _nbPre = 0 ;
    PCOMM_ELEM      _ptPreComm = ((tokenAhead || (LexComment(), tokenAhead =  -1, TRACE_LEX(1))), listComm ? LookComm(&_nbPre) : (_funcLevel++, (PCOMM_ELEM)0));
    int             _Debug = TRACE_RULE("ext_decl_ifdef_dir", TRACE_ENTER, (PPTREE)0);
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
                    PROG_EXIT(ext_decl_ifdef_dir_exit, "ext_decl_ifdef_dir");
                }
                ReplaceTree(_ptRes0, 1, _ptTree0);
                retTree =  _ptRes0 ;
            }
            (tokenAhead == 1 || (Lex(), TRACE_LEX(1)));
            if ( !TERM_OR_META(CARRIAGE_RETURN, "CARRIAGE_RETURN") || !(CommTerm(), 1) ) {
                MulFreeTree(6, _addlist1, _addlist2, express, list, list2, retTree);
                TOKEN_EXIT(ext_decl_ifdef_dir_exit, "CARRIAGE_RETURN");
            } else {
                tokenAhead =  0 ;
            }
            keepCarriage =  _oldkeepCarriage ;
        }
    } else {
        (tokenAhead == 1 || (Lex(), TRACE_LEX(1)));
        if ( !TERM_OR_META(IFNDEF_DIR, "IFNDEF_DIR") || !(CommTerm(), 1) ) {
            MulFreeTree(6, _addlist1, _addlist2, express, list, list2, retTree);
            TOKEN_EXIT(ext_decl_ifdef_dir_exit, "IFNDEF_DIR");
        } else {
            tokenAhead =  0 ;
        }
        {
            keepCarriage =  1 ;
            if ( (express = NQUICK_CALL(_Tak(expression)(error_free), 62, cplus)) == (PPTREE) -1 ) {
                MulFreeTree(6, _addlist1, _addlist2, express, list, list2, retTree);
                PROG_EXIT(ext_decl_ifdef_dir_exit, "ext_decl_ifdef_dir");
            }
            (tokenAhead == 1 || (Lex(), TRACE_LEX(1)));
            if ( !TERM_OR_META(CARRIAGE_RETURN, "CARRIAGE_RETURN") || !(CommTerm(), 1) ) {
                MulFreeTree(6, _addlist1, _addlist2, express, list, list2, retTree);
                TOKEN_EXIT(ext_decl_ifdef_dir_exit, "CARRIAGE_RETURN");
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
            if ( (_ptTree0 = NQUICK_CALL(_Tak(ext_all_ext)(error_free), 65, cplus)) == (PPTREE) -1 ) {
                MulFreeTree(7, _ptTree0, _addlist1, _addlist2, express, list, list2, retTree);
                PROG_EXIT(ext_decl_ifdef_dir_exit, "ext_decl_ifdef_dir");
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
            PROG_EXIT(ext_decl_ifdef_dir_exit, "ext_decl_ifdef_dir");
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
                    if ( (_ptTree0 = NQUICK_CALL(_Tak(ext_all_ext)(error_free), 65, cplus)) == (PPTREE) -1 ) {
                        MulFreeTree(7, _ptTree0, _addlist1, _addlist2, express, list, list2, retTree);
                        PROG_EXIT(ext_decl_ifdef_dir_exit, "ext_decl_ifdef_dir");
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
                    PROG_EXIT(ext_decl_ifdef_dir_exit, "ext_decl_ifdef_dir");
                }
                list2 =  AddList(list2, _ptTree0);
            }
            (tokenAhead == 1 || (Lex(), TRACE_LEX(1)));
            if ( !TERM_OR_META(ENDIF_DIR, "ENDIF_DIR") || !(CommTerm(), 1) ) {
                MulFreeTree(6, _addlist1, _addlist2, express, list, list2, retTree);
                TOKEN_EXIT(ext_decl_ifdef_dir_exit, "ENDIF_DIR");
            } else {
                tokenAhead =  0 ;
            }
            {
                PPTREE  _ptTree0 = 0 ;
                _ptTree0  =  ReplaceTree(retTree, 3, list2);
                _retValue =  _ptTree0 ;
                goto ext_decl_ifdef_dir_ret ;
            }
            break ;
        case ELIF_DIR : 
            tokenAhead = 0 ;
            CommTerm();
            {
                PPTREE  _ptTree0 = 0 ;
                {
                    PPTREE  _ptTree1 = 0 ;
                    if ( (_ptTree1 = NQUICK_CALL(_Tak(ext_decl_if_dir)(error_free), 73, cplus)) == (PPTREE) -1 ) {
                        MulFreeTree(8, _ptTree1, _ptTree0, _addlist1, _addlist2, express, list, list2, retTree);
                        PROG_EXIT(ext_decl_ifdef_dir_exit, "ext_decl_ifdef_dir");
                    }
                    _ptTree0 =  ReplaceTree(retTree, 3, _ptTree1);
                }
                _retValue =  _ptTree0 ;
                goto ext_decl_ifdef_dir_ret ;
            }
            break ;
        case ENDIF_DIR : 
            tokenAhead = 0 ;
            CommTerm();
            {
                _retValue =  retTree ;
                goto ext_decl_ifdef_dir_ret ;
            }
            break ;
        default : 
            MulFreeTree(6, _addlist1, _addlist2, express, list, list2, retTree);
            CASE_EXIT(ext_decl_ifdef_dir_exit, "either ELSE_DIR or ELIF_DIR or ENDIF_DIR");
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
ext_decl_ifdef_dir_exit : 
    _Debug = TRACE_RULE("ext_decl_ifdef_dir", TRACE_EXIT, (PPTREE)0);
    _funcLevel-- ;
    keepCarriage =  _oldkeepCarriage ;
    return (PPTREE) -1 ;
ext_decl_ifdef_dir_ret : 
    _Debug = TRACE_RULE("ext_decl_ifdef_dir", TRACE_RETURN, _retValue);
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

PPTREE cplus::for_statement ( int error_free )
{
    int             _oldswitchContext = switchContext ;
    PFILE_POSITION  _filePosition = (PFILE_POSITION)0 ;
    int             _value, _nbPre = 0 ;
    PCOMM_ELEM      _ptPreComm = ((tokenAhead || (LexComment(), tokenAhead =  -1, TRACE_LEX(1))), listComm ? LookComm(&_nbPre) : (_funcLevel++, (PCOMM_ELEM)0));
    int             _Debug = TRACE_RULE("for_statement", TRACE_ENTER, (PPTREE)0);
    PPTREE          lastTree = _lastTree, _retValue ;
    PPTREE          statTree = (PPTREE)0, opt = (PPTREE)0, stat = (PPTREE)0 ;
    
    (tokenAhead == 1 || (Lex(), TRACE_LEX(1)));
    if ( !SEE_TOKEN(POUV, "(") || !(CommTerm(), 1) ) {
        MulFreeTree(3, opt, stat, statTree);
        TOKEN_EXIT(for_statement_exit, "(");
    } else {
        tokenAhead =  0 ;
    }
    {
        PPTREE  _ptRes0 = 0 ;
        _ptRes0  =  MakeTree(FOR, 4);
        statTree =  _ptRes0 ;
    }
    if ( NPUSH_CALL_AFF_VERIF(opt = , _Tak(expression_for), 63, cplus) ) {
        ReplaceTree(statTree, 1, opt);
    } else {
        if ( NPUSH_CALL_AFF_VERIF(opt = , _Tak(data_declaration_for), 41, cplus) ) {
            ReplaceTree(statTree, 1, opt);
        }
    }
    if ( (tokenAhead == 1 || (Lex(), TRACE_LEX(1))) && SEE_TOKEN(DPOI, ":") && ((tokenAhead = 0), CommTerm(), 1) ) {
        {
            PPTREE  _ptTree0 = 0 ;
            {
                PPTREE  _ptTree1 = 0, _ptRes1 = 0 ;
                _ptRes1 =  MakeTree(ALL_OF, 2);
                ReplaceTree(_ptRes1, 1, opt);
                if ( (_ptTree1 = NQUICK_CALL(_Tak(expression)(error_free), 62, cplus)) == (PPTREE) -1 ) {
                    MulFreeTree(6, _ptRes1, _ptTree1, _ptTree0, opt, stat, statTree);
                    PROG_EXIT(for_statement_exit, "for_statement");
                }
                ReplaceTree(_ptRes1, 2, _ptTree1);
                _ptTree0 =  _ptRes1 ;
            }
            ReplaceTree(statTree, 1, _ptTree0);
        }
    } else {
        (tokenAhead == 1 || (Lex(), TRACE_LEX(1)));
        if ( !SEE_TOKEN(PVIR, ";") || !(CommTerm(), 1) ) {
            MulFreeTree(3, opt, stat, statTree);
            TOKEN_EXIT(for_statement_exit, ";");
        } else {
            tokenAhead =  0 ;
        }
        if ( NPUSH_CALL_AFF_VERIF(opt = , _Tak(expression), 62, cplus) ) {
            ReplaceTree(statTree, 2, opt);
        }
        (tokenAhead == 1 || (Lex(), TRACE_LEX(1)));
        if ( !SEE_TOKEN(PVIR, ";") || !(CommTerm(), 1) ) {
            MulFreeTree(3, opt, stat, statTree);
            TOKEN_EXIT(for_statement_exit, ";");
        } else {
            tokenAhead =  0 ;
        }
        if ( NPUSH_CALL_AFF_VERIF(opt = , _Tak(expression), 62, cplus) ) {
            ReplaceTree(statTree, 3, opt);
        }
    }
    (tokenAhead == 1 || (Lex(), TRACE_LEX(1)));
    if ( !SEE_TOKEN(PFER, ")") || !(CommTerm(), 1) ) {
        MulFreeTree(3, opt, stat, statTree);
        TOKEN_EXIT(for_statement_exit, ")");
    } else {
        tokenAhead =  0 ;
    }
    {
        switchContext =  0 ;
        {
            PPTREE  _ptTree0 = 0 ;
            if ( (_ptTree0 = NQUICK_CALL(_Tak(statement)(error_free), 136, cplus)) == (PPTREE) -1 ) {
                MulFreeTree(4, _ptTree0, opt, stat, statTree);
                PROG_EXIT(for_statement_exit, "for_statement");
            }
            ReplaceTree(statTree, 4, _ptTree0);
        }
        switchContext =  _oldswitchContext ;
    }
    {
        _retValue =  statTree ;
        goto for_statement_ret ;
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
for_statement_exit : 
    _Debug = TRACE_RULE("for_statement", TRACE_EXIT, (PPTREE)0);
    _funcLevel-- ;
    switchContext =  _oldswitchContext ;
    return (PPTREE) -1 ;
for_statement_ret : 
    _Debug = TRACE_RULE("for_statement", TRACE_RETURN, _retValue);
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

PPTREE cplus::func_declaration ( int error_free )
{
    PFILE_POSITION  _filePosition = (PFILE_POSITION)0 ;
    int             _value, _nbPre = 0 ;
    PCOMM_ELEM      _ptPreComm = ((tokenAhead || (LexComment(), tokenAhead =  -1, TRACE_LEX(1))), listComm ? LookComm(&_nbPre) : (_funcLevel++, (PCOMM_ELEM)0));
    int             _Debug = TRACE_RULE("func_declaration", TRACE_ENTER, (PPTREE)0);
    PPTREE          lastTree = _lastTree, _retValue ;
    PPTREE          _addlist1 = (PPTREE)0 ;
    PPTREE          funcTree = (PPTREE)0, opt = (PPTREE)0, decList = (PPTREE)0, range = (PPTREE)0, exception = (PPTREE)0 ;
    
    if ( !NPUSH_CALL_AFF_VERIF(funcTree = , _Tak(type_and_declarator), 142, cplus) ) {
        {
            PPTREE  _ptTree0 = 0, _ptRes0 = 0 ;
            _ptRes0 =  MakeTree(FUNC, 11);
            if ( (_ptTree0 = NQUICK_CALL(_Tak(sc_specifier)(error_free), 126, cplus)) == (PPTREE) -1 ) {
                MulFreeTree(8, _ptRes0, _ptTree0, _addlist1, decList, exception, funcTree, opt, range);
                PROG_EXIT(func_declaration_exit, "func_declaration");
            }
            ReplaceTree(_ptRes0, 1, _ptTree0);
            funcTree =  _ptRes0 ;
        }
        {
            PPTREE  _ptTree0 = 0 ;
            if ( (_ptTree0 = NQUICK_CALL(_Tak(func_declarator)(error_free), 77, cplus)) == (PPTREE) -1 ) {
                MulFreeTree(7, _ptTree0, _addlist1, decList, exception, funcTree, opt, range);
                PROG_EXIT(func_declaration_exit, "func_declaration");
            }
            ReplaceTree(funcTree, 3, _ptTree0);
        }
    }
    {
        PPTREE  _ptTree0 = 0 ;
        if ( (_ptTree0 = NQUICK_CALL(_Tak(parameter_list_extended)(error_free), 107, cplus)) == (PPTREE) -1 ) {
            MulFreeTree(7, _ptTree0, _addlist1, decList, exception, funcTree, opt, range);
            PROG_EXIT(func_declaration_exit, "func_declaration");
        }
        ReplaceTree(funcTree, 4, _ptTree0);
    }
    if ( NPUSH_CALL_AFF_VERIF(range = , _Tak(range_modifier_function), 122, cplus) ) {
        ReplaceTree(funcTree, 5, range);
    }
    if ( NPUSH_CALL_AFF_VERIF(exception = , _Tak(exception_list), 60, cplus) ) {
        ReplaceTree(funcTree, 9, exception);
    }
    if ( (tokenAhead == 1 || (Lex(), TRACE_LEX(1))) && SEE_TOKEN(EGAL, "=") && ((tokenAhead = 0), CommTerm(), 1) ) {
        (tokenAhead == 1 || (Lex(), TRACE_LEX(1)));
        if ( !SEE_TOKEN(DELETE, "delete") || !(CommTerm(), 1) ) {
            MulFreeTree(6, _addlist1, decList, exception, funcTree, opt, range);
            TOKEN_EXIT(func_declaration_exit, "delete");
        } else {
            tokenAhead =  0 ;
        }
        (tokenAhead == 1 || (Lex(), TRACE_LEX(1)));
        if ( !SEE_TOKEN(PVIR, ";") || !(CommTerm(), 1) ) {
            MulFreeTree(6, _addlist1, decList, exception, funcTree, opt, range);
            TOKEN_EXIT(func_declaration_exit, ";");
        } else {
            tokenAhead =  0 ;
        }
        {
            PPTREE  _ptTree0 = 0 ;
            {
                PPTREE  _ptTree1 = 0 ;
                {
                    PPTREE  _ptRes2 = 0 ;
                    _ptRes2  =  MakeTree(DELETE_FUNCTION, 0);
                    _ptTree1 =  _ptRes2 ;
                }
                _ptTree0 =  ReplaceTree(funcTree, 10, _ptTree1);
            }
            _retValue =  _ptTree0 ;
            goto func_declaration_ret ;
        }
    } else {
        _addlist1 =  decList ;
        while ( NPUSH_CALL_AFF_VERIF(opt = , _Tak(data_declaration), 40, cplus) ) {
            _addlist1 =  AddList(_addlist1, opt);
            if ( decList ) {
                _addlist1 =  SonTree(_addlist1, 2);
            } else {
                decList =  _addlist1 ;
            }
        }
        ReplaceTree(funcTree, 6, decList);
        {
            PPTREE  _ptTree0 = 0 ;
            if ( (_ptTree0 = NQUICK_CALL(_Tak(ctor_initializer)(error_free), 32, cplus)) == (PPTREE) -1 ) {
                MulFreeTree(7, _ptTree0, _addlist1, decList, exception, funcTree, opt, range);
                PROG_EXIT(func_declaration_exit, "func_declaration");
            }
            ReplaceTree(funcTree, 7, _ptTree0);
        }
        {
            PPTREE  _ptTree0 = 0 ;
            {
                PPTREE  _ptTree1 = 0 ;
                if ( (_ptTree1 = NQUICK_CALL(_Tak(compound_statement)(error_free), 28, cplus)) == (PPTREE) -1 ) {
                    MulFreeTree(8, _ptTree1, _ptTree0, _addlist1, decList, exception, funcTree, opt, range);
                    PROG_EXIT(func_declaration_exit, "func_declaration");
                }
                _ptTree0 =  ReplaceTree(funcTree, 8, _ptTree1);
            }
            _retValue =  _ptTree0 ;
            goto func_declaration_ret ;
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
func_declaration_exit : 
    _Debug = TRACE_RULE("func_declaration", TRACE_EXIT, (PPTREE)0);
    _funcLevel-- ;
    return (PPTREE) -1 ;
func_declaration_ret : 
    _Debug = TRACE_RULE("func_declaration", TRACE_RETURN, _retValue);
    (tokenAhead || (LexComment(), tokenAhead =  -1, TRACE_LEX(1)));
    if ( _nbPre || listComm ) 
        AddComm(_ptPreComm, _nbPre, _retValue, lastTree);
    else {
        _lastTree =  _retValue ;
        _funcLevel-- ;
    }
    return _retValue ;
}

PPTREE cplus::func_declarator ( int error_free )
{
    PFILE_POSITION  _filePosition = (PFILE_POSITION)0 ;
    int             _value, _nbPre = 0 ;
    PCOMM_ELEM      _ptPreComm = ((tokenAhead || (LexComment(), tokenAhead =  -1, TRACE_LEX(1))), listComm ? LookComm(&_nbPre) : (_funcLevel++, (PCOMM_ELEM)0));
    int             _Debug = TRACE_RULE("func_declarator", TRACE_ENTER, (PPTREE)0);
    PPTREE          lastTree = _lastTree, _retValue ;
    PPTREE          valTree = (PPTREE)0 ;
    
    if ( NPUSH_CALL_AFF_VERIF(valTree = , _Tak(range_modifier), 121, cplus) ) {
        {
            PPTREE  _ptTree0 = 0 ;
            {
                PPTREE  _ptTree1 = 0 ;
                if ( (_ptTree1 = NQUICK_CALL(_Tak(func_declarator)(error_free), 77, cplus)) == (PPTREE) -1 ) {
                    MulFreeTree(3, _ptTree1, _ptTree0, valTree);
                    PROG_EXIT(func_declarator_exit, "func_declarator");
                }
                _ptTree0 =  ReplaceTree(valTree, 2, _ptTree1);
            }
            _retValue =  _ptTree0 ;
            goto func_declarator_ret ;
        }
    }
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
                    if ( (_ptTree1 = NQUICK_CALL(_Tak(func_declarator)(error_free), 77, cplus)) == (PPTREE) -1 ) {
                        MulFreeTree(4, _ptRes1, _ptTree1, _ptTree0, valTree);
                        PROG_EXIT(func_declarator_exit, "func_declarator");
                    }
                    ReplaceTree(_ptRes1, 1, _ptTree1);
                    _ptTree0 =  _ptRes1 ;
                }
                _retValue =  _ptTree0 ;
                goto func_declarator_ret ;
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
                    if ( (_ptTree1 = NQUICK_CALL(_Tak(func_declarator)(error_free), 77, cplus)) == (PPTREE) -1 ) {
                        MulFreeTree(4, _ptRes1, _ptTree1, _ptTree0, valTree);
                        PROG_EXIT(func_declarator_exit, "func_declarator");
                    }
                    ReplaceTree(_ptRes1, 1, _ptTree1);
                    _ptTree0 =  _ptRes1 ;
                }
                _retValue =  _ptTree0 ;
                goto func_declarator_ret ;
            }
            break ;
        case TILD : 
            {
                PPTREE  _ptTree0 = 0 ;
                if ( (_ptTree0 = NQUICK_CALL(_Tak(qualified_name)(error_free), 116, cplus)) == (PPTREE) -1 ) {
                    MulFreeTree(2, _ptTree0, valTree);
                    PROG_EXIT(func_declarator_exit, "func_declarator");
                }
                _retValue =  _ptTree0 ;
                goto func_declarator_ret ;
            }
            break ;
        case META : 
        case IDENT : 
            {
                PPTREE  _ptTree0 = 0 ;
                if ( (_ptTree0 = NQUICK_CALL(_Tak(qualified_name)(error_free), 116, cplus)) == (PPTREE) -1 ) {
                    MulFreeTree(2, _ptTree0, valTree);
                    PROG_EXIT(func_declarator_exit, "func_declarator");
                }
                _retValue =  _ptTree0 ;
                goto func_declarator_ret ;
            }
            break ;
        case OPERATOR : 
            {
                PPTREE  _ptTree0 = 0 ;
                if ( (_ptTree0 = NQUICK_CALL(_Tak(operator_function_name)(error_free), 104, cplus)) == (PPTREE) -1 ) {
                    MulFreeTree(2, _ptTree0, valTree);
                    PROG_EXIT(func_declarator_exit, "func_declarator");
                }
                _retValue =  _ptTree0 ;
                goto func_declarator_ret ;
            }
            break ;
        default : 
            MulFreeTree(1, valTree);
            CASE_EXIT(func_declarator_exit, "either * or & or ~ or IDENT or operator");
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
func_declarator_exit : 
    _Debug = TRACE_RULE("func_declarator", TRACE_EXIT, (PPTREE)0);
    _funcLevel-- ;
    return (PPTREE) -1 ;
func_declarator_ret : 
    _Debug = TRACE_RULE("func_declarator", TRACE_RETURN, _retValue);
    (tokenAhead || (LexComment(), tokenAhead =  -1, TRACE_LEX(1)));
    if ( _nbPre || listComm ) 
        AddComm(_ptPreComm, _nbPre, _retValue, lastTree);
    else {
        _lastTree =  _retValue ;
        _funcLevel-- ;
    }
    return _retValue ;
}
