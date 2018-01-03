/*************************************************************************/
/*                                                                       */
/*        Produced by MetaGen version 2.0  -    1989-2006                 */
/*       Syntaxic Analyzer Meta Generator developped by                  */
/*                  Eric Lavillonniere                                   */
/*                                                                       */
/*************************************************************************/

#include "token.h"
#include "cplus.h"


#line 1841 "cplus.met"
PPTREE cplus::base_specifier_elem ( int error_free)
#line 1841 "cplus.met"
{
#line 1841 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 1841 "cplus.met"
    int _value,_nbPre = 0 ;
#line 1841 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 1841 "cplus.met"
    int _Debug = TRACE_RULE("base_specifier_elem",TRACE_ENTER,(PPTREE)0);
#line 1841 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 1841 "cplus.met"
#line 1841 "cplus.met"
    PPTREE ret = (PPTREE) 0;
#line 1841 "cplus.met"
#line 1843 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 1843 "cplus.met"
    switch( lexEl.Value) {
#line 1843 "cplus.met"
#line 1844 "cplus.met"
        case PRIVATE : 
#line 1844 "cplus.met"
            tokenAhead = 0 ;
#line 1844 "cplus.met"
            CommTerm();
#line 1844 "cplus.met"
#line 1844 "cplus.met"
            {
#line 1844 "cplus.met"
                PPTREE _ptTree0=0;
#line 1844 "cplus.met"
                {
#line 1844 "cplus.met"
                    PPTREE _ptTree1=0,_ptRes1=0;
#line 1844 "cplus.met"
                    _ptRes1= MakeTree(PROTECT, 2);
#line 1844 "cplus.met"
                    ReplaceTree(_ptRes1, 1, MakeString ("private"));
#line 1844 "cplus.met"
                    if ( (_ptTree1=NQUICK_CALL(_Tak(base_specifier_elem)(error_free), 17, cplus))== (PPTREE) -1 ) {
#line 1844 "cplus.met"
                        MulFreeTree(4,_ptRes1,_ptTree1,_ptTree0,ret);
                        PROG_EXIT(base_specifier_elem_exit,"base_specifier_elem")
#line 1844 "cplus.met"
                    }
#line 1844 "cplus.met"
                    ReplaceTree(_ptRes1, 2, _ptTree1);
#line 1844 "cplus.met"
                    _ptTree0=_ptRes1;
#line 1844 "cplus.met"
                }
#line 1844 "cplus.met"
                _retValue =_ptTree0;
#line 1844 "cplus.met"
                goto base_specifier_elem_ret;
#line 1844 "cplus.met"
            }
#line 1844 "cplus.met"
            break;
#line 1844 "cplus.met"
#line 1846 "cplus.met"
        case PROTECTED : 
#line 1846 "cplus.met"
            tokenAhead = 0 ;
#line 1846 "cplus.met"
            CommTerm();
#line 1846 "cplus.met"
#line 1846 "cplus.met"
            {
#line 1846 "cplus.met"
                PPTREE _ptTree0=0;
#line 1846 "cplus.met"
                {
#line 1846 "cplus.met"
                    PPTREE _ptTree1=0,_ptRes1=0;
#line 1846 "cplus.met"
                    _ptRes1= MakeTree(PROTECT, 2);
#line 1846 "cplus.met"
                    ReplaceTree(_ptRes1, 1, MakeString ("protected"));
#line 1846 "cplus.met"
                    if ( (_ptTree1=NQUICK_CALL(_Tak(base_specifier_elem)(error_free), 17, cplus))== (PPTREE) -1 ) {
#line 1846 "cplus.met"
                        MulFreeTree(4,_ptRes1,_ptTree1,_ptTree0,ret);
                        PROG_EXIT(base_specifier_elem_exit,"base_specifier_elem")
#line 1846 "cplus.met"
                    }
#line 1846 "cplus.met"
                    ReplaceTree(_ptRes1, 2, _ptTree1);
#line 1846 "cplus.met"
                    _ptTree0=_ptRes1;
#line 1846 "cplus.met"
                }
#line 1846 "cplus.met"
                _retValue =_ptTree0;
#line 1846 "cplus.met"
                goto base_specifier_elem_ret;
#line 1846 "cplus.met"
            }
#line 1846 "cplus.met"
            break;
#line 1846 "cplus.met"
#line 1848 "cplus.met"
        case PUBLIC : 
#line 1848 "cplus.met"
            tokenAhead = 0 ;
#line 1848 "cplus.met"
            CommTerm();
#line 1848 "cplus.met"
#line 1848 "cplus.met"
            {
#line 1848 "cplus.met"
                PPTREE _ptTree0=0;
#line 1848 "cplus.met"
                {
#line 1848 "cplus.met"
                    PPTREE _ptTree1=0,_ptRes1=0;
#line 1848 "cplus.met"
                    _ptRes1= MakeTree(PROTECT, 2);
#line 1848 "cplus.met"
                    ReplaceTree(_ptRes1, 1, MakeString ("public"));
#line 1848 "cplus.met"
                    if ( (_ptTree1=NQUICK_CALL(_Tak(base_specifier_elem)(error_free), 17, cplus))== (PPTREE) -1 ) {
#line 1848 "cplus.met"
                        MulFreeTree(4,_ptRes1,_ptTree1,_ptTree0,ret);
                        PROG_EXIT(base_specifier_elem_exit,"base_specifier_elem")
#line 1848 "cplus.met"
                    }
#line 1848 "cplus.met"
                    ReplaceTree(_ptRes1, 2, _ptTree1);
#line 1848 "cplus.met"
                    _ptTree0=_ptRes1;
#line 1848 "cplus.met"
                }
#line 1848 "cplus.met"
                _retValue =_ptTree0;
#line 1848 "cplus.met"
                goto base_specifier_elem_ret;
#line 1848 "cplus.met"
            }
#line 1848 "cplus.met"
            break;
#line 1848 "cplus.met"
#line 1850 "cplus.met"
        case VIRTUAL : 
#line 1850 "cplus.met"
            tokenAhead = 0 ;
#line 1850 "cplus.met"
            CommTerm();
#line 1850 "cplus.met"
#line 1850 "cplus.met"
            {
#line 1850 "cplus.met"
                PPTREE _ptTree0=0;
#line 1850 "cplus.met"
                {
#line 1850 "cplus.met"
                    PPTREE _ptTree1=0,_ptRes1=0;
#line 1850 "cplus.met"
                    _ptRes1= MakeTree(PROTECT, 2);
#line 1850 "cplus.met"
                    ReplaceTree(_ptRes1, 1, MakeString ("virtual"));
#line 1850 "cplus.met"
                    if ( (_ptTree1=NQUICK_CALL(_Tak(base_specifier_elem)(error_free), 17, cplus))== (PPTREE) -1 ) {
#line 1850 "cplus.met"
                        MulFreeTree(4,_ptRes1,_ptTree1,_ptTree0,ret);
                        PROG_EXIT(base_specifier_elem_exit,"base_specifier_elem")
#line 1850 "cplus.met"
                    }
#line 1850 "cplus.met"
                    ReplaceTree(_ptRes1, 2, _ptTree1);
#line 1850 "cplus.met"
                    _ptTree0=_ptRes1;
#line 1850 "cplus.met"
                }
#line 1850 "cplus.met"
                _retValue =_ptTree0;
#line 1850 "cplus.met"
                goto base_specifier_elem_ret;
#line 1850 "cplus.met"
            }
#line 1850 "cplus.met"
            break;
#line 1850 "cplus.met"
#line 1850 "cplus.met"
        default : 
#line 1850 "cplus.met"
#line 1850 "cplus.met"
            break;
#line 1850 "cplus.met"
    }
#line 1850 "cplus.met"
#line 1854 "cplus.met"
    if ( (ret=NQUICK_CALL(_Tak(complete_class_name)(error_free), 25, cplus))== (PPTREE) -1 ) {
#line 1854 "cplus.met"
        MulFreeTree(1,ret);
        PROG_EXIT(base_specifier_elem_exit,"base_specifier_elem")
#line 1854 "cplus.met"
    }
#line 1854 "cplus.met"
#line 1855 "cplus.met"
    {
#line 1855 "cplus.met"
        _retValue = ret ;
#line 1855 "cplus.met"
        goto base_specifier_elem_ret;
#line 1855 "cplus.met"
        
#line 1855 "cplus.met"
    }
#line 1855 "cplus.met"
#line 1855 "cplus.met"
#line 1855 "cplus.met"

#line 1856 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1856 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 1856 "cplus.met"
return((PPTREE) 0);
#line 1856 "cplus.met"

#line 1856 "cplus.met"
base_specifier_elem_exit :
#line 1856 "cplus.met"

#line 1856 "cplus.met"
    _Debug = TRACE_RULE("base_specifier_elem",TRACE_EXIT,(PPTREE)0);
#line 1856 "cplus.met"
    _funcLevel--;
#line 1856 "cplus.met"
    return((PPTREE) -1) ;
#line 1856 "cplus.met"

#line 1856 "cplus.met"
base_specifier_elem_ret :
#line 1856 "cplus.met"
    
#line 1856 "cplus.met"
    _Debug = TRACE_RULE("base_specifier_elem",TRACE_RETURN,_retValue);
#line 1856 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1856 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 1856 "cplus.met"
    return _retValue ;
#line 1856 "cplus.met"
}
#line 1856 "cplus.met"

#line 1856 "cplus.met"
#line 3565 "cplus.met"
PPTREE cplus::bidon ( int error_free)
#line 3565 "cplus.met"
{
#line 3565 "cplus.met"
    int  _oldnoString = noString;
#line 3565 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 3565 "cplus.met"
    int _value,_nbPre = 0 ;
#line 3565 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 3565 "cplus.met"
    int _Debug = TRACE_RULE("bidon",TRACE_ENTER,(PPTREE)0);
#line 3565 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 3565 "cplus.met"
#line 3566 "cplus.met"
    {
#line 3566 "cplus.met"
        noString = 1 ;
#line 3566 "cplus.met"
#line 3567 "cplus.met"
#line 3567 "cplus.met"
        noString =  _oldnoString;
#line 3567 "cplus.met"
    }
#line 3567 "cplus.met"
#line 3567 "cplus.met"
#line 3568 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 3568 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 3568 "cplus.met"
noString =  _oldnoString;
#line 3568 "cplus.met"
return((PPTREE) 0);
#line 3568 "cplus.met"

#line 3568 "cplus.met"
bidon_exit :
#line 3568 "cplus.met"

#line 3568 "cplus.met"
    _Debug = TRACE_RULE("bidon",TRACE_EXIT,(PPTREE)0);
#line 3568 "cplus.met"
    _funcLevel--;
#line 3568 "cplus.met"
    noString =  _oldnoString;
#line 3568 "cplus.met"
    return((PPTREE) -1) ;
#line 3568 "cplus.met"

#line 3568 "cplus.met"
bidon_ret :
#line 3568 "cplus.met"
    
#line 3568 "cplus.met"
    _Debug = TRACE_RULE("bidon",TRACE_RETURN,_retValue);
#line 3568 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 3568 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 3568 "cplus.met"
    noString =  _oldnoString;
#line 3568 "cplus.met"
    return _retValue ;
#line 3568 "cplus.met"
}
#line 3568 "cplus.met"

#line 3568 "cplus.met"
#line 2524 "cplus.met"
PPTREE cplus::bit_field_decl ( int error_free)
#line 2524 "cplus.met"
{
#line 2524 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 2524 "cplus.met"
    int _value,_nbPre = 0 ;
#line 2524 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 2524 "cplus.met"
    int _Debug = TRACE_RULE("bit_field_decl",TRACE_ENTER,(PPTREE)0);
#line 2524 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 2524 "cplus.met"
#line 2524 "cplus.met"
    PPTREE retTree = (PPTREE) 0;
#line 2524 "cplus.met"
#line 2526 "cplus.met"
    {
#line 2526 "cplus.met"
        PPTREE _ptTree0=0,_ptRes0=0;
#line 2526 "cplus.met"
        _ptRes0= MakeTree(TYP_BIT, 2);
#line 2526 "cplus.met"
        {
#line 2526 "cplus.met"
            PPTREE _ptTree1=0,_ptRes1=0;
#line 2526 "cplus.met"
            _ptRes1= MakeTree(IDENT, 1);
#line 2526 "cplus.met"
            (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 2526 "cplus.met"
            if ( ! TERM_OR_META(IDENT,"IDENT") || !(BUILD_TERM_META(_ptTree1))) {
#line 2526 "cplus.met"
                MulFreeTree(5,_ptRes1,_ptTree1,_ptRes0,_ptTree0,retTree);
                TOKEN_EXIT(bit_field_decl_exit,"IDENT")
#line 2526 "cplus.met"
            } else {
#line 2526 "cplus.met"
                tokenAhead = 0 ;
#line 2526 "cplus.met"
            }
#line 2526 "cplus.met"
            ReplaceTree(_ptRes1, 1, _ptTree1);
#line 2526 "cplus.met"
            _ptTree0=_ptRes1;
#line 2526 "cplus.met"
        }
#line 2526 "cplus.met"
        ReplaceTree(_ptRes0, 1, _ptTree0);
#line 2526 "cplus.met"
        retTree=_ptRes0;
#line 2526 "cplus.met"
    }
#line 2526 "cplus.met"
#line 2527 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 2527 "cplus.met"
    if (  !SEE_TOKEN( DPOI,":") || !(CommTerm(),1)) {
#line 2527 "cplus.met"
        MulFreeTree(1,retTree);
        TOKEN_EXIT(bit_field_decl_exit,":")
#line 2527 "cplus.met"
    } else {
#line 2527 "cplus.met"
        tokenAhead = 0 ;
#line 2527 "cplus.met"
    }
#line 2527 "cplus.met"
#line 2528 "cplus.met"
    {
#line 2528 "cplus.met"
        PPTREE _ptTree0=0;
#line 2528 "cplus.met"
        {
#line 2528 "cplus.met"
            PPTREE _ptTree1=0;
#line 2528 "cplus.met"
            if ( (_ptTree1=NQUICK_CALL(_Tak(assignment_expression)(error_free), 15, cplus))== (PPTREE) -1 ) {
#line 2528 "cplus.met"
                MulFreeTree(3,_ptTree1,_ptTree0,retTree);
                PROG_EXIT(bit_field_decl_exit,"bit_field_decl")
#line 2528 "cplus.met"
            }
#line 2528 "cplus.met"
            _ptTree0=ReplaceTree(retTree , 2 , _ptTree1);
#line 2528 "cplus.met"
        }
#line 2528 "cplus.met"
        _retValue =_ptTree0;
#line 2528 "cplus.met"
        goto bit_field_decl_ret;
#line 2528 "cplus.met"
    }
#line 2528 "cplus.met"
#line 2528 "cplus.met"
#line 2528 "cplus.met"

#line 2529 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2529 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 2529 "cplus.met"
return((PPTREE) 0);
#line 2529 "cplus.met"

#line 2529 "cplus.met"
bit_field_decl_exit :
#line 2529 "cplus.met"

#line 2529 "cplus.met"
    _Debug = TRACE_RULE("bit_field_decl",TRACE_EXIT,(PPTREE)0);
#line 2529 "cplus.met"
    _funcLevel--;
#line 2529 "cplus.met"
    return((PPTREE) -1) ;
#line 2529 "cplus.met"

#line 2529 "cplus.met"
bit_field_decl_ret :
#line 2529 "cplus.met"
    
#line 2529 "cplus.met"
    _Debug = TRACE_RULE("bit_field_decl",TRACE_RETURN,_retValue);
#line 2529 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2529 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 2529 "cplus.met"
    return _retValue ;
#line 2529 "cplus.met"
}
#line 2529 "cplus.met"

#line 2529 "cplus.met"
#line 2715 "cplus.met"
PPTREE cplus::cast_expression ( int error_free)
#line 2715 "cplus.met"
{
#line 2715 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 2715 "cplus.met"
    int _value,_nbPre = 0 ;
#line 2715 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 2715 "cplus.met"
    int _Debug = TRACE_RULE("cast_expression",TRACE_ENTER,(PPTREE)0);
#line 2715 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 2715 "cplus.met"
#line 2715 "cplus.met"
    PPTREE retTree = (PPTREE) 0;
#line 2715 "cplus.met"
#line 2717 "cplus.met"
    if (NPUSH_CALL_AFF_VERIF(retTree = ,_Tak(cast_expression_value), 20, cplus)){
#line 2717 "cplus.met"
#line 2718 "cplus.met"
        {
#line 2718 "cplus.met"
            _retValue = retTree ;
#line 2718 "cplus.met"
            goto cast_expression_ret;
#line 2718 "cplus.met"
            
#line 2718 "cplus.met"
        }
#line 2718 "cplus.met"
    } else {
#line 2718 "cplus.met"
#line 2720 "cplus.met"
        {
#line 2720 "cplus.met"
            PPTREE _ptTree0=0;
#line 2720 "cplus.met"
            if ( (_ptTree0=NQUICK_CALL(_Tak(unary_expression)(error_free), 144, cplus))== (PPTREE) -1 ) {
#line 2720 "cplus.met"
                MulFreeTree(2,_ptTree0,retTree);
                PROG_EXIT(cast_expression_exit,"cast_expression")
#line 2720 "cplus.met"
            }
#line 2720 "cplus.met"
            _retValue =_ptTree0;
#line 2720 "cplus.met"
            goto cast_expression_ret;
#line 2720 "cplus.met"
        }
#line 2720 "cplus.met"
    }
#line 2720 "cplus.met"
#line 2720 "cplus.met"
#line 2720 "cplus.met"

#line 2721 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2721 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 2721 "cplus.met"
return((PPTREE) 0);
#line 2721 "cplus.met"

#line 2721 "cplus.met"
cast_expression_exit :
#line 2721 "cplus.met"

#line 2721 "cplus.met"
    _Debug = TRACE_RULE("cast_expression",TRACE_EXIT,(PPTREE)0);
#line 2721 "cplus.met"
    _funcLevel--;
#line 2721 "cplus.met"
    return((PPTREE) -1) ;
#line 2721 "cplus.met"

#line 2721 "cplus.met"
cast_expression_ret :
#line 2721 "cplus.met"
    
#line 2721 "cplus.met"
    _Debug = TRACE_RULE("cast_expression",TRACE_RETURN,_retValue);
#line 2721 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2721 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 2721 "cplus.met"
    return _retValue ;
#line 2721 "cplus.met"
}
#line 2721 "cplus.met"

#line 2721 "cplus.met"
#line 2707 "cplus.met"
PPTREE cplus::cast_expression_value ( int error_free)
#line 2707 "cplus.met"
{
#line 2707 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 2707 "cplus.met"
    int _value,_nbPre = 0 ;
#line 2707 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 2707 "cplus.met"
    int _Debug = TRACE_RULE("cast_expression_value",TRACE_ENTER,(PPTREE)0);
#line 2707 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 2707 "cplus.met"
#line 2707 "cplus.met"
    PPTREE ret = (PPTREE) 0;
#line 2707 "cplus.met"
#line 2709 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 2709 "cplus.met"
    if (  !SEE_TOKEN( POUV,"(") || !(CommTerm(),1)) {
#line 2709 "cplus.met"
        MulFreeTree(1,ret);
        TOKEN_EXIT(cast_expression_value_exit,"(")
#line 2709 "cplus.met"
    } else {
#line 2709 "cplus.met"
        tokenAhead = 0 ;
#line 2709 "cplus.met"
    }
#line 2709 "cplus.met"
#line 2710 "cplus.met"
    if ( (ret=NQUICK_CALL(_Tak(type_name)(error_free), 140, cplus))== (PPTREE) -1 ) {
#line 2710 "cplus.met"
        MulFreeTree(1,ret);
        PROG_EXIT(cast_expression_value_exit,"cast_expression_value")
#line 2710 "cplus.met"
    }
#line 2710 "cplus.met"
#line 2711 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 2711 "cplus.met"
    if (  !SEE_TOKEN( PFER,")") || !(CommTerm(),1)) {
#line 2711 "cplus.met"
        MulFreeTree(1,ret);
        TOKEN_EXIT(cast_expression_value_exit,")")
#line 2711 "cplus.met"
    } else {
#line 2711 "cplus.met"
        tokenAhead = 0 ;
#line 2711 "cplus.met"
    }
#line 2711 "cplus.met"
#line 2712 "cplus.met"
    {
#line 2712 "cplus.met"
        PPTREE _ptTree0=0;
#line 2712 "cplus.met"
        {
#line 2712 "cplus.met"
            PPTREE _ptTree1=0,_ptRes1=0;
#line 2712 "cplus.met"
            _ptRes1= MakeTree(CAST, 2);
#line 2712 "cplus.met"
            ReplaceTree(_ptRes1, 1, ret );
#line 2712 "cplus.met"
            if ( (_ptTree1=NQUICK_CALL(_Tak(cast_expression)(error_free), 19, cplus))== (PPTREE) -1 ) {
#line 2712 "cplus.met"
                MulFreeTree(4,_ptRes1,_ptTree1,_ptTree0,ret);
                PROG_EXIT(cast_expression_value_exit,"cast_expression_value")
#line 2712 "cplus.met"
            }
#line 2712 "cplus.met"
            ReplaceTree(_ptRes1, 2, _ptTree1);
#line 2712 "cplus.met"
            _ptTree0=_ptRes1;
#line 2712 "cplus.met"
        }
#line 2712 "cplus.met"
        _retValue =_ptTree0;
#line 2712 "cplus.met"
        goto cast_expression_value_ret;
#line 2712 "cplus.met"
    }
#line 2712 "cplus.met"
#line 2712 "cplus.met"
#line 2712 "cplus.met"

#line 2713 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2713 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 2713 "cplus.met"
return((PPTREE) 0);
#line 2713 "cplus.met"

#line 2713 "cplus.met"
cast_expression_value_exit :
#line 2713 "cplus.met"

#line 2713 "cplus.met"
    _Debug = TRACE_RULE("cast_expression_value",TRACE_EXIT,(PPTREE)0);
#line 2713 "cplus.met"
    _funcLevel--;
#line 2713 "cplus.met"
    return((PPTREE) -1) ;
#line 2713 "cplus.met"

#line 2713 "cplus.met"
cast_expression_value_ret :
#line 2713 "cplus.met"
    
#line 2713 "cplus.met"
    _Debug = TRACE_RULE("cast_expression_value",TRACE_RETURN,_retValue);
#line 2713 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2713 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 2713 "cplus.met"
    return _retValue ;
#line 2713 "cplus.met"
}
#line 2713 "cplus.met"

#line 2713 "cplus.met"
#line 1951 "cplus.met"
PPTREE cplus::catch_unit ( int error_free)
#line 1951 "cplus.met"
{
#line 1951 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 1951 "cplus.met"
    int _value,_nbPre = 0 ;
#line 1951 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 1951 "cplus.met"
    int _Debug = TRACE_RULE("catch_unit",TRACE_ENTER,(PPTREE)0);
#line 1951 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 1951 "cplus.met"
#line 1952 "cplus.met"
    (tokenAhead == 13|| (specific(),TRACE_LEX(1)));
#line 1952 "cplus.met"
    switch( lexEl.Value) {
#line 1952 "cplus.met"
#line 1953 "cplus.met"
        case META : 
#line 1953 "cplus.met"
        case CATCH_UPPER : 
#line 1953 "cplus.met"
#line 1953 "cplus.met"
            {
#line 1953 "cplus.met"
                PPTREE _ptTree0=0;
#line 1953 "cplus.met"
                {
#line 1953 "cplus.met"
                    PPTREE _ptTree1=0,_ptRes1=0;
#line 1953 "cplus.met"
                    _ptRes1= MakeTree(CATCH, 2);
#line 1953 "cplus.met"
                    if ( (_ptTree1=NQUICK_CALL(_Tak(macro)(error_free), 88, cplus))== (PPTREE) -1 ) {
#line 1953 "cplus.met"
                        MulFreeTree(3,_ptRes1,_ptTree1,_ptTree0);
                        PROG_EXIT(catch_unit_exit,"catch_unit")
#line 1953 "cplus.met"
                    }
#line 1953 "cplus.met"
                    ReplaceTree(_ptRes1, 1, _ptTree1);
#line 1953 "cplus.met"
                    if ( (_ptTree1=NQUICK_CALL(_Tak(compound_statement)(error_free), 26, cplus))== (PPTREE) -1 ) {
#line 1953 "cplus.met"
                        MulFreeTree(3,_ptRes1,_ptTree1,_ptTree0);
                        PROG_EXIT(catch_unit_exit,"catch_unit")
#line 1953 "cplus.met"
                    }
#line 1953 "cplus.met"
                    ReplaceTree(_ptRes1, 2, _ptTree1);
#line 1953 "cplus.met"
                    _ptTree0=_ptRes1;
#line 1953 "cplus.met"
                }
#line 1953 "cplus.met"
                _retValue =_ptTree0;
#line 1953 "cplus.met"
                goto catch_unit_ret;
#line 1953 "cplus.met"
            }
#line 1953 "cplus.met"
            break;
#line 1953 "cplus.met"
#line 1955 "cplus.met"
        case CATCH_ALL : 
#line 1955 "cplus.met"
#line 1955 "cplus.met"
            {
#line 1955 "cplus.met"
                PPTREE _ptTree0=0;
#line 1955 "cplus.met"
                {
#line 1955 "cplus.met"
                    PPTREE _ptTree1=0,_ptRes1=0;
#line 1955 "cplus.met"
                    _ptRes1= MakeTree(CATCH, 2);
#line 1955 "cplus.met"
                    if ( (_ptTree1=NQUICK_CALL(_Tak(macro)(error_free), 88, cplus))== (PPTREE) -1 ) {
#line 1955 "cplus.met"
                        MulFreeTree(3,_ptRes1,_ptTree1,_ptTree0);
                        PROG_EXIT(catch_unit_exit,"catch_unit")
#line 1955 "cplus.met"
                    }
#line 1955 "cplus.met"
                    ReplaceTree(_ptRes1, 1, _ptTree1);
#line 1955 "cplus.met"
                    if ( (_ptTree1=NQUICK_CALL(_Tak(compound_statement)(error_free), 26, cplus))== (PPTREE) -1 ) {
#line 1955 "cplus.met"
                        MulFreeTree(3,_ptRes1,_ptTree1,_ptTree0);
                        PROG_EXIT(catch_unit_exit,"catch_unit")
#line 1955 "cplus.met"
                    }
#line 1955 "cplus.met"
                    ReplaceTree(_ptRes1, 2, _ptTree1);
#line 1955 "cplus.met"
                    _ptTree0=_ptRes1;
#line 1955 "cplus.met"
                }
#line 1955 "cplus.met"
                _retValue =_ptTree0;
#line 1955 "cplus.met"
                goto catch_unit_ret;
#line 1955 "cplus.met"
            }
#line 1955 "cplus.met"
            break;
#line 1955 "cplus.met"
#line 1957 "cplus.met"
        case AND_CATCH : 
#line 1957 "cplus.met"
#line 1957 "cplus.met"
            {
#line 1957 "cplus.met"
                PPTREE _ptTree0=0;
#line 1957 "cplus.met"
                {
#line 1957 "cplus.met"
                    PPTREE _ptTree1=0,_ptRes1=0;
#line 1957 "cplus.met"
                    _ptRes1= MakeTree(CATCH, 2);
#line 1957 "cplus.met"
                    if ( (_ptTree1=NQUICK_CALL(_Tak(macro)(error_free), 88, cplus))== (PPTREE) -1 ) {
#line 1957 "cplus.met"
                        MulFreeTree(3,_ptRes1,_ptTree1,_ptTree0);
                        PROG_EXIT(catch_unit_exit,"catch_unit")
#line 1957 "cplus.met"
                    }
#line 1957 "cplus.met"
                    ReplaceTree(_ptRes1, 1, _ptTree1);
#line 1957 "cplus.met"
                    if ( (_ptTree1=NQUICK_CALL(_Tak(compound_statement)(error_free), 26, cplus))== (PPTREE) -1 ) {
#line 1957 "cplus.met"
                        MulFreeTree(3,_ptRes1,_ptTree1,_ptTree0);
                        PROG_EXIT(catch_unit_exit,"catch_unit")
#line 1957 "cplus.met"
                    }
#line 1957 "cplus.met"
                    ReplaceTree(_ptRes1, 2, _ptTree1);
#line 1957 "cplus.met"
                    _ptTree0=_ptRes1;
#line 1957 "cplus.met"
                }
#line 1957 "cplus.met"
                _retValue =_ptTree0;
#line 1957 "cplus.met"
                goto catch_unit_ret;
#line 1957 "cplus.met"
            }
#line 1957 "cplus.met"
            break;
#line 1957 "cplus.met"
        default :
#line 1957 "cplus.met"
            CASE_EXIT(catch_unit_exit,"either CATCH_UPPER or CATCH_ALL or AND_CATCH")
#line 1957 "cplus.met"
            break;
#line 1957 "cplus.met"
    }
#line 1957 "cplus.met"
#line 1957 "cplus.met"
#line 1959 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1959 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 1959 "cplus.met"
return((PPTREE) 0);
#line 1959 "cplus.met"

#line 1959 "cplus.met"
catch_unit_exit :
#line 1959 "cplus.met"

#line 1959 "cplus.met"
    _Debug = TRACE_RULE("catch_unit",TRACE_EXIT,(PPTREE)0);
#line 1959 "cplus.met"
    _funcLevel--;
#line 1959 "cplus.met"
    return((PPTREE) -1) ;
#line 1959 "cplus.met"

#line 1959 "cplus.met"
catch_unit_ret :
#line 1959 "cplus.met"
    
#line 1959 "cplus.met"
    _Debug = TRACE_RULE("catch_unit",TRACE_RETURN,_retValue);
#line 1959 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1959 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 1959 "cplus.met"
    return _retValue ;
#line 1959 "cplus.met"
}
#line 1959 "cplus.met"

#line 1959 "cplus.met"
#line 1972 "cplus.met"
PPTREE cplus::catch_unit_ansi ( int error_free)
#line 1972 "cplus.met"
{
#line 1972 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 1972 "cplus.met"
    int _value,_nbPre = 0 ;
#line 1972 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 1972 "cplus.met"
    int _Debug = TRACE_RULE("catch_unit_ansi",TRACE_ENTER,(PPTREE)0);
#line 1972 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 1972 "cplus.met"
#line 1972 "cplus.met"
    PPTREE retTree = (PPTREE) 0,valTree = (PPTREE) 0;
#line 1972 "cplus.met"
#line 1974 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 1974 "cplus.met"
    if (  !SEE_TOKEN( CATCH,"catch") || !(CommTerm(),1)) {
#line 1974 "cplus.met"
        MulFreeTree(2,retTree,valTree);
        TOKEN_EXIT(catch_unit_ansi_exit,"catch")
#line 1974 "cplus.met"
    } else {
#line 1974 "cplus.met"
        tokenAhead = 0 ;
#line 1974 "cplus.met"
    }
#line 1974 "cplus.met"
#line 1975 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 1975 "cplus.met"
    if (  !SEE_TOKEN( POUV,"(") || !(CommTerm(),1)) {
#line 1975 "cplus.met"
        MulFreeTree(2,retTree,valTree);
        TOKEN_EXIT(catch_unit_ansi_exit,"(")
#line 1975 "cplus.met"
    } else {
#line 1975 "cplus.met"
        tokenAhead = 0 ;
#line 1975 "cplus.met"
    }
#line 1975 "cplus.met"
#line 1976 "cplus.met"
    if ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN(POINPOINPOIN,"...") && (tokenAhead = 0,CommTerm(),1)){
#line 1976 "cplus.met"
#line 1977 "cplus.met"
        {
#line 1977 "cplus.met"
            PPTREE _ptRes0=0;
#line 1977 "cplus.met"
            _ptRes0= MakeTree(EXCEPT_ANSI_ALL, 0);
#line 1977 "cplus.met"
            valTree=_ptRes0;
#line 1977 "cplus.met"
        }
#line 1977 "cplus.met"
    } else {
#line 1977 "cplus.met"
#line 1979 "cplus.met"
#line 1980 "cplus.met"
        if ( (retTree=NQUICK_CALL(_Tak(type_specifier)(error_free), 141, cplus))== (PPTREE) -1 ) {
#line 1980 "cplus.met"
            MulFreeTree(2,retTree,valTree);
            PROG_EXIT(catch_unit_ansi_exit,"catch_unit_ansi")
#line 1980 "cplus.met"
        }
#line 1980 "cplus.met"
#line 1981 "cplus.met"
        if (NPUSH_CALL_AFF_VERIF(valTree = ,_Tak(declarator), 44, cplus)){
#line 1981 "cplus.met"
#line 1982 "cplus.met"
            {
#line 1982 "cplus.met"
                PPTREE _ptRes0=0;
#line 1982 "cplus.met"
                _ptRes0= MakeTree(DECLARATOR, 2);
#line 1982 "cplus.met"
                ReplaceTree(_ptRes0, 1, retTree );
#line 1982 "cplus.met"
                ReplaceTree(_ptRes0, 2, valTree );
#line 1982 "cplus.met"
                valTree=_ptRes0;
#line 1982 "cplus.met"
            }
#line 1982 "cplus.met"
        } else {
#line 1982 "cplus.met"
#line 1984 "cplus.met"
            if (NPUSH_CALL_AFF_VERIF(valTree = ,_Tak(abstract_declarator), 2, cplus)){
#line 1984 "cplus.met"
#line 1985 "cplus.met"
                {
#line 1985 "cplus.met"
                    PPTREE _ptRes0=0;
#line 1985 "cplus.met"
                    _ptRes0= MakeTree(ABST_DECLARATOR, 2);
#line 1985 "cplus.met"
                    ReplaceTree(_ptRes0, 1, retTree );
#line 1985 "cplus.met"
                    ReplaceTree(_ptRes0, 2, valTree );
#line 1985 "cplus.met"
                    valTree=_ptRes0;
#line 1985 "cplus.met"
                }
#line 1985 "cplus.met"
            } else {
#line 1985 "cplus.met"
#line 1987 "cplus.met"
                valTree = retTree ;
#line 1987 "cplus.met"
            }
#line 1987 "cplus.met"
        }
#line 1987 "cplus.met"
#line 1987 "cplus.met"
    }
#line 1987 "cplus.met"
#line 1989 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 1989 "cplus.met"
    if (  !SEE_TOKEN( PFER,")") || !(CommTerm(),1)) {
#line 1989 "cplus.met"
        MulFreeTree(2,retTree,valTree);
        TOKEN_EXIT(catch_unit_ansi_exit,")")
#line 1989 "cplus.met"
    } else {
#line 1989 "cplus.met"
        tokenAhead = 0 ;
#line 1989 "cplus.met"
    }
#line 1989 "cplus.met"
#line 1990 "cplus.met"
    {
#line 1990 "cplus.met"
        PPTREE _ptTree0=0;
#line 1990 "cplus.met"
        {
#line 1990 "cplus.met"
            PPTREE _ptTree1=0,_ptRes1=0;
#line 1990 "cplus.met"
            _ptRes1= MakeTree(CATCH_ANSI, 2);
#line 1990 "cplus.met"
            ReplaceTree(_ptRes1, 1, valTree );
#line 1990 "cplus.met"
            if ( (_ptTree1=NQUICK_CALL(_Tak(compound_statement)(error_free), 26, cplus))== (PPTREE) -1 ) {
#line 1990 "cplus.met"
                MulFreeTree(5,_ptRes1,_ptTree1,_ptTree0,retTree,valTree);
                PROG_EXIT(catch_unit_ansi_exit,"catch_unit_ansi")
#line 1990 "cplus.met"
            }
#line 1990 "cplus.met"
            ReplaceTree(_ptRes1, 2, _ptTree1);
#line 1990 "cplus.met"
            _ptTree0=_ptRes1;
#line 1990 "cplus.met"
        }
#line 1990 "cplus.met"
        _retValue =_ptTree0;
#line 1990 "cplus.met"
        goto catch_unit_ansi_ret;
#line 1990 "cplus.met"
    }
#line 1990 "cplus.met"
#line 1990 "cplus.met"
#line 1990 "cplus.met"

#line 1991 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1991 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 1991 "cplus.met"
return((PPTREE) 0);
#line 1991 "cplus.met"

#line 1991 "cplus.met"
catch_unit_ansi_exit :
#line 1991 "cplus.met"

#line 1991 "cplus.met"
    _Debug = TRACE_RULE("catch_unit_ansi",TRACE_EXIT,(PPTREE)0);
#line 1991 "cplus.met"
    _funcLevel--;
#line 1991 "cplus.met"
    return((PPTREE) -1) ;
#line 1991 "cplus.met"

#line 1991 "cplus.met"
catch_unit_ansi_ret :
#line 1991 "cplus.met"
    
#line 1991 "cplus.met"
    _Debug = TRACE_RULE("catch_unit_ansi",TRACE_RETURN,_retValue);
#line 1991 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1991 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 1991 "cplus.met"
    return _retValue ;
#line 1991 "cplus.met"
}
#line 1991 "cplus.met"

#line 1991 "cplus.met"
#line 2011 "cplus.met"
PPTREE cplus::class_declaration ( int error_free)
#line 2011 "cplus.met"
{
#line 2011 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 2011 "cplus.met"
    int _value,_nbPre = 0 ;
#line 2011 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 2011 "cplus.met"
    int _Debug = TRACE_RULE("class_declaration",TRACE_ENTER,(PPTREE)0);
#line 2011 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 2011 "cplus.met"
#line 2011 "cplus.met"
    PPTREE _addlist1 = (PPTREE) 0;
#line 2011 "cplus.met"
#line 2011 "cplus.met"
    PPTREE retTree = (PPTREE) 0,inter = (PPTREE) 0,list = (PPTREE) 0;
#line 2011 "cplus.met"
#line 2013 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 2013 "cplus.met"
    switch( lexEl.Value) {
#line 2013 "cplus.met"
#line 2014 "cplus.met"
        case STRUCT : 
#line 2014 "cplus.met"
            tokenAhead = 0 ;
#line 2014 "cplus.met"
            CommTerm();
#line 2014 "cplus.met"
#line 2014 "cplus.met"
            {
#line 2014 "cplus.met"
                PPTREE _ptRes0=0;
#line 2014 "cplus.met"
                _ptRes0= MakeTree(CLASS, 4);
#line 2014 "cplus.met"
                ReplaceTree(_ptRes0, 1, MakeString ("struct"));
#line 2014 "cplus.met"
                retTree=_ptRes0;
#line 2014 "cplus.met"
            }
#line 2014 "cplus.met"
            break;
#line 2014 "cplus.met"
#line 2015 "cplus.met"
        case UNION : 
#line 2015 "cplus.met"
            tokenAhead = 0 ;
#line 2015 "cplus.met"
            CommTerm();
#line 2015 "cplus.met"
#line 2015 "cplus.met"
            {
#line 2015 "cplus.met"
                PPTREE _ptRes0=0;
#line 2015 "cplus.met"
                _ptRes0= MakeTree(CLASS, 4);
#line 2015 "cplus.met"
                ReplaceTree(_ptRes0, 1, MakeString ("union"));
#line 2015 "cplus.met"
                retTree=_ptRes0;
#line 2015 "cplus.met"
            }
#line 2015 "cplus.met"
            break;
#line 2015 "cplus.met"
#line 2016 "cplus.met"
        case CLASS : 
#line 2016 "cplus.met"
            tokenAhead = 0 ;
#line 2016 "cplus.met"
            CommTerm();
#line 2016 "cplus.met"
#line 2016 "cplus.met"
            {
#line 2016 "cplus.met"
                PPTREE _ptRes0=0;
#line 2016 "cplus.met"
                _ptRes0= MakeTree(CLASS, 4);
#line 2016 "cplus.met"
                ReplaceTree(_ptRes0, 1, MakeString ("class"));
#line 2016 "cplus.met"
                retTree=_ptRes0;
#line 2016 "cplus.met"
            }
#line 2016 "cplus.met"
            break;
#line 2016 "cplus.met"
        default :
#line 2016 "cplus.met"
            MulFreeTree(4,_addlist1,inter,list,retTree);
            CASE_EXIT(class_declaration_exit,"either struct or union or class")
#line 2016 "cplus.met"
            break;
#line 2016 "cplus.met"
    }
#line 2016 "cplus.met"
#line 2018 "cplus.met"
    {
#line 2018 "cplus.met"
        PPTREE _ptTree0=0;
#line 2018 "cplus.met"
        if ( (_ptTree0=NQUICK_CALL(_Tak(range_modifier_ident)(error_free), 119, cplus))== (PPTREE) -1 ) {
#line 2018 "cplus.met"
            MulFreeTree(5,_ptTree0,_addlist1,inter,list,retTree);
            PROG_EXIT(class_declaration_exit,"class_declaration")
#line 2018 "cplus.met"
        }
#line 2018 "cplus.met"
        ReplaceTree(retTree , 2 , _ptTree0);
#line 2018 "cplus.met"
    }
#line 2018 "cplus.met"
#line 2019 "cplus.met"
    if ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN(DPOI,":") && (tokenAhead = 0,CommTerm(),1)){
#line 2019 "cplus.met"
#line 2020 "cplus.met"
        {
#line 2020 "cplus.met"
            PPTREE _ptTree0=0;
#line 2020 "cplus.met"
            if ( (_ptTree0=NQUICK_CALL(_Tak(base_specifier)(error_free), 16, cplus))== (PPTREE) -1 ) {
#line 2020 "cplus.met"
                MulFreeTree(5,_ptTree0,_addlist1,inter,list,retTree);
                PROG_EXIT(class_declaration_exit,"class_declaration")
#line 2020 "cplus.met"
            }
#line 2020 "cplus.met"
            ReplaceTree(retTree , 3 , _ptTree0);
#line 2020 "cplus.met"
        }
#line 2020 "cplus.met"
#line 2020 "cplus.met"
    }
#line 2020 "cplus.met"
#line 2021 "cplus.met"
    if ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN(AOUV,"{") && (tokenAhead = 0,CommTerm(),1)){
#line 2021 "cplus.met"
#line 2022 "cplus.met"
#line 2023 "cplus.met"
        do {
#line 2023 "cplus.met"
#line 2023 "cplus.met"
            _addlist1 = list ;
#line 2023 "cplus.met"
#line 2024 "cplus.met"
            while (NPUSH_CALL_AFF_VERIF(inter = ,_Tak(inside_declaration), 79, cplus)) { 
#line 2024 "cplus.met"
#line 2025 "cplus.met"
#line 2025 "cplus.met"
                _addlist1 =AddList(_addlist1 ,inter );
#line 2025 "cplus.met"
#line 2025 "cplus.met"
                if (list){
#line 2025 "cplus.met"
#line 2025 "cplus.met"
                    _addlist1 = SonTree (_addlist1 ,2 );
#line 2025 "cplus.met"
                } else {
#line 2025 "cplus.met"
#line 2025 "cplus.met"
                    list = _addlist1 ;
#line 2025 "cplus.met"
                }
#line 2025 "cplus.met"
            } 
#line 2025 "cplus.met"
#line 2026 "cplus.met"
            (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 2026 "cplus.met"
            switch( lexEl.Value) {
#line 2026 "cplus.met"
#line 2027 "cplus.met"
                case PUBLIC : 
#line 2027 "cplus.met"
#line 2027 "cplus.met"
                    {
#line 2027 "cplus.met"
                        PPTREE _ptTree0=0;
#line 2027 "cplus.met"
                        if ( (_ptTree0=NQUICK_CALL(_Tak(protect_declare)(error_free), 110, cplus))== (PPTREE) -1 ) {
#line 2027 "cplus.met"
                            MulFreeTree(5,_ptTree0,_addlist1,inter,list,retTree);
                            PROG_EXIT(class_declaration_exit,"class_declaration")
#line 2027 "cplus.met"
                        }
#line 2027 "cplus.met"
                        list =AddList(list , _ptTree0);
#line 2027 "cplus.met"
                    }
#line 2027 "cplus.met"
                    break;
#line 2027 "cplus.met"
#line 2028 "cplus.met"
                case PRIVATE : 
#line 2028 "cplus.met"
#line 2028 "cplus.met"
                    {
#line 2028 "cplus.met"
                        PPTREE _ptTree0=0;
#line 2028 "cplus.met"
                        if ( (_ptTree0=NQUICK_CALL(_Tak(protect_declare)(error_free), 110, cplus))== (PPTREE) -1 ) {
#line 2028 "cplus.met"
                            MulFreeTree(5,_ptTree0,_addlist1,inter,list,retTree);
                            PROG_EXIT(class_declaration_exit,"class_declaration")
#line 2028 "cplus.met"
                        }
#line 2028 "cplus.met"
                        list =AddList(list , _ptTree0);
#line 2028 "cplus.met"
                    }
#line 2028 "cplus.met"
                    break;
#line 2028 "cplus.met"
#line 2029 "cplus.met"
                case PROTECTED : 
#line 2029 "cplus.met"
#line 2029 "cplus.met"
                    {
#line 2029 "cplus.met"
                        PPTREE _ptTree0=0;
#line 2029 "cplus.met"
                        if ( (_ptTree0=NQUICK_CALL(_Tak(protect_declare)(error_free), 110, cplus))== (PPTREE) -1 ) {
#line 2029 "cplus.met"
                            MulFreeTree(5,_ptTree0,_addlist1,inter,list,retTree);
                            PROG_EXIT(class_declaration_exit,"class_declaration")
#line 2029 "cplus.met"
                        }
#line 2029 "cplus.met"
                        list =AddList(list , _ptTree0);
#line 2029 "cplus.met"
                    }
#line 2029 "cplus.met"
                    break;
#line 2029 "cplus.met"
#line 2029 "cplus.met"
                case AFER : 
#line 2029 "cplus.met"
#line 2029 "cplus.met"
                    break;
#line 2029 "cplus.met"
#line 2031 "cplus.met"
                default : 
#line 2031 "cplus.met"
#line 2031 "cplus.met"
                    
#line 2031 "cplus.met"
                    MulFreeTree(4,_addlist1,inter,list,retTree);
                    LEX_EXIT ("",0);
#line 2031 "cplus.met"
                    goto class_declaration_exit;
#line 2031 "cplus.met"
                    break;
#line 2031 "cplus.met"
            }
#line 2031 "cplus.met"
#line 2031 "cplus.met"
#line 2033 "cplus.met"
        } while ( !(((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN( AFER,"}")) || 
#line 2033 "cplus.met"
                   (! ((tokenAhead && tokenAhead != -1)|| (c != EOF))))) ;
#line 2033 "cplus.met"
#line 2034 "cplus.met"
        {
#line 2034 "cplus.met"
            PPTREE _ptTree0=0;
#line 2034 "cplus.met"
            {
#line 2034 "cplus.met"
                PPTREE _ptRes1=0;
#line 2034 "cplus.met"
                _ptRes1= MakeTree(CLASS_DECL, 1);
#line 2034 "cplus.met"
                ReplaceTree(_ptRes1, 1, list );
#line 2034 "cplus.met"
                _ptTree0=_ptRes1;
#line 2034 "cplus.met"
            }
#line 2034 "cplus.met"
            ReplaceTree(retTree , 4 , _ptTree0);
#line 2034 "cplus.met"
        }
#line 2034 "cplus.met"
#line 2035 "cplus.met"
        (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 2035 "cplus.met"
        if (  !SEE_TOKEN( AFER,"}") || !(CommTerm(),1)) {
#line 2035 "cplus.met"
            MulFreeTree(4,_addlist1,inter,list,retTree);
            TOKEN_EXIT(class_declaration_exit,"}")
#line 2035 "cplus.met"
        } else {
#line 2035 "cplus.met"
            tokenAhead = 0 ;
#line 2035 "cplus.met"
        }
#line 2035 "cplus.met"
#line 2035 "cplus.met"
#line 2035 "cplus.met"
    }
#line 2035 "cplus.met"
#line 2037 "cplus.met"
    {
#line 2037 "cplus.met"
        _retValue = retTree ;
#line 2037 "cplus.met"
        goto class_declaration_ret;
#line 2037 "cplus.met"
        
#line 2037 "cplus.met"
    }
#line 2037 "cplus.met"
#line 2037 "cplus.met"
#line 2037 "cplus.met"

#line 2038 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2038 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 2038 "cplus.met"
return((PPTREE) 0);
#line 2038 "cplus.met"

#line 2038 "cplus.met"
class_declaration_exit :
#line 2038 "cplus.met"

#line 2038 "cplus.met"
    _Debug = TRACE_RULE("class_declaration",TRACE_EXIT,(PPTREE)0);
#line 2038 "cplus.met"
    _funcLevel--;
#line 2038 "cplus.met"
    return((PPTREE) -1) ;
#line 2038 "cplus.met"

#line 2038 "cplus.met"
class_declaration_ret :
#line 2038 "cplus.met"
    
#line 2038 "cplus.met"
    _Debug = TRACE_RULE("class_declaration",TRACE_RETURN,_retValue);
#line 2038 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2038 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 2038 "cplus.met"
    return _retValue ;
#line 2038 "cplus.met"
}
#line 2038 "cplus.met"

#line 2038 "cplus.met"
#line 775 "cplus.met"
PPTREE cplus::comment_eater ( int error_free)
#line 775 "cplus.met"
{
#line 775 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 775 "cplus.met"
    int _value,_nbPre = 0 ;
#line 775 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 775 "cplus.met"
    int _Debug = TRACE_RULE("comment_eater",TRACE_ENTER,(PPTREE)0);
#line 775 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 775 "cplus.met"
#line 775 "cplus.met"
    PPTREE retTree = (PPTREE) 0;
#line 775 "cplus.met"
#line 777 "cplus.met"
    1;
#line 777 "cplus.met"
    switch( lexEl.Value) {
#line 777 "cplus.met"
#line 778 "cplus.met"
        default : 
#line 778 "cplus.met"
            tokenAhead = 0 ;
#line 778 "cplus.met"
            CommTerm();
#line 778 "cplus.met"
#line 779 "cplus.met"
            if ( lexEl.Value != -1 ){
#line 779 "cplus.met"
#line 780 "cplus.met"
                
#line 780 "cplus.met"
                MulFreeTree(1,retTree);
                LEX_EXIT ("",0);
#line 780 "cplus.met"
                goto comment_eater_exit;
#line 780 "cplus.met"
#line 780 "cplus.met"
            } else {
#line 780 "cplus.met"
#line 782 "cplus.met"
                {
#line 782 "cplus.met"
                    _retValue = retTree ;
#line 782 "cplus.met"
                    goto comment_eater_ret;
#line 782 "cplus.met"
                    
#line 782 "cplus.met"
                }
#line 782 "cplus.met"
            }
#line 782 "cplus.met"
            break;
#line 782 "cplus.met"
    }
#line 782 "cplus.met"
#line 782 "cplus.met"
#line 783 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 783 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 783 "cplus.met"
return((PPTREE) 0);
#line 783 "cplus.met"

#line 783 "cplus.met"
comment_eater_exit :
#line 783 "cplus.met"

#line 783 "cplus.met"
    _Debug = TRACE_RULE("comment_eater",TRACE_EXIT,(PPTREE)0);
#line 783 "cplus.met"
    _funcLevel--;
#line 783 "cplus.met"
    return((PPTREE) -1) ;
#line 783 "cplus.met"

#line 783 "cplus.met"
comment_eater_ret :
#line 783 "cplus.met"
    
#line 783 "cplus.met"
    _Debug = TRACE_RULE("comment_eater",TRACE_RETURN,_retValue);
#line 783 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 783 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 783 "cplus.met"
    return _retValue ;
#line 783 "cplus.met"
}
#line 783 "cplus.met"

#line 783 "cplus.met"
#line 1832 "cplus.met"
PPTREE cplus::complete_class_name ( int error_free)
#line 1832 "cplus.met"
{
#line 1832 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 1832 "cplus.met"
    int _value,_nbPre = 0 ;
#line 1832 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 1832 "cplus.met"
    int _Debug = TRACE_RULE("complete_class_name",TRACE_ENTER,(PPTREE)0);
#line 1832 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 1832 "cplus.met"
#line 1832 "cplus.met"
    PPTREE ret = (PPTREE) 0;
#line 1832 "cplus.met"
#line 1834 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 1834 "cplus.met"
    switch( lexEl.Value) {
#line 1834 "cplus.met"
#line 1835 "cplus.met"
        case META : 
#line 1835 "cplus.met"
        case IDENT : 
#line 1835 "cplus.met"
#line 1835 "cplus.met"
            if ( (ret=NQUICK_CALL(_Tak(qualified_name)(error_free), 112, cplus))== (PPTREE) -1 ) {
#line 1835 "cplus.met"
                MulFreeTree(1,ret);
                PROG_EXIT(complete_class_name_exit,"complete_class_name")
#line 1835 "cplus.met"
            }
#line 1835 "cplus.met"
            break;
#line 1835 "cplus.met"
#line 1836 "cplus.met"
        case DPOIDPOI : 
#line 1836 "cplus.met"
            tokenAhead = 0 ;
#line 1836 "cplus.met"
            CommTerm();
#line 1836 "cplus.met"
#line 1836 "cplus.met"
            {
#line 1836 "cplus.met"
                PPTREE _ptTree0=0,_ptRes0=0;
#line 1836 "cplus.met"
                _ptRes0= MakeTree(QUALIFIED, 2);
#line 1836 "cplus.met"
                if ( (_ptTree0=NQUICK_CALL(_Tak(qualified_name)(error_free), 112, cplus))== (PPTREE) -1 ) {
#line 1836 "cplus.met"
                    MulFreeTree(3,_ptRes0,_ptTree0,ret);
                    PROG_EXIT(complete_class_name_exit,"complete_class_name")
#line 1836 "cplus.met"
                }
#line 1836 "cplus.met"
                ReplaceTree(_ptRes0, 2, _ptTree0);
#line 1836 "cplus.met"
                ret=_ptRes0;
#line 1836 "cplus.met"
            }
#line 1836 "cplus.met"
            break;
#line 1836 "cplus.met"
        default :
#line 1836 "cplus.met"
            MulFreeTree(1,ret);
            CASE_EXIT(complete_class_name_exit,"either IDENT or ::")
#line 1836 "cplus.met"
            break;
#line 1836 "cplus.met"
    }
#line 1836 "cplus.met"
#line 1838 "cplus.met"
    {
#line 1838 "cplus.met"
        _retValue = ret ;
#line 1838 "cplus.met"
        goto complete_class_name_ret;
#line 1838 "cplus.met"
        
#line 1838 "cplus.met"
    }
#line 1838 "cplus.met"
#line 1838 "cplus.met"
#line 1838 "cplus.met"

#line 1839 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1839 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 1839 "cplus.met"
return((PPTREE) 0);
#line 1839 "cplus.met"

#line 1839 "cplus.met"
complete_class_name_exit :
#line 1839 "cplus.met"

#line 1839 "cplus.met"
    _Debug = TRACE_RULE("complete_class_name",TRACE_EXIT,(PPTREE)0);
#line 1839 "cplus.met"
    _funcLevel--;
#line 1839 "cplus.met"
    return((PPTREE) -1) ;
#line 1839 "cplus.met"

#line 1839 "cplus.met"
complete_class_name_ret :
#line 1839 "cplus.met"
    
#line 1839 "cplus.met"
    _Debug = TRACE_RULE("complete_class_name",TRACE_RETURN,_retValue);
#line 1839 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1839 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 1839 "cplus.met"
    return _retValue ;
#line 1839 "cplus.met"
}
#line 1839 "cplus.met"

#line 1839 "cplus.met"
#line 3232 "cplus.met"
PPTREE cplus::compound_statement ( int error_free)
#line 3232 "cplus.met"
{
#line 3232 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 3232 "cplus.met"
    int _value,_nbPre = 0 ;
#line 3232 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 3232 "cplus.met"
    int _Debug = TRACE_RULE("compound_statement",TRACE_ENTER,(PPTREE)0);
#line 3232 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 3232 "cplus.met"
#line 3232 "cplus.met"
    PPTREE _addlist1 = (PPTREE) 0;
#line 3232 "cplus.met"
#line 3232 "cplus.met"
    PPTREE statList = (PPTREE) 0,stat = (PPTREE) 0;
#line 3232 "cplus.met"
#line 3234 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3234 "cplus.met"
    if (  !SEE_TOKEN( AOUV,"{") || !(CommTerm(),1)) {
#line 3234 "cplus.met"
        MulFreeTree(3,_addlist1,stat,statList);
        TOKEN_EXIT(compound_statement_exit,"{")
#line 3234 "cplus.met"
    } else {
#line 3234 "cplus.met"
        tokenAhead = 0 ;
#line 3234 "cplus.met"
    }
#line 3234 "cplus.met"
#line 3235 "cplus.met"
     debut :
#line 3235 "cplus.met"
#line 3235 "cplus.met"
    _addlist1 = statList ;
#line 3235 "cplus.met"
#line 3237 "cplus.met"
    while (((((NPUSH_CALL_AFF_VERIF(stat = ,_Tak(statement), 132, cplus)) || 
#line 3237 "cplus.met"
             (NPUSH_CALL_AFF_VERIF(stat = ,_Tak(data_declaration), 38, cplus))) || 
#line 3237 "cplus.met"
            (NPUSH_CALL_AFF_VERIF(stat = ,_Tak(stat_dir), 128, cplus))) || 
#line 3237 "cplus.met"
           (NPUSH_CALL_AFF_VERIF(stat = ,_Tak(exception), 55, cplus))) || 
#line 3237 "cplus.met"
          (NPUSH_CALL_AFF_VERIF(stat = ,_Tak(ext_data_declaration), 68, cplus))) { 
#line 3237 "cplus.met"
#line 3243 "cplus.met"
#line 3243 "cplus.met"
        _addlist1 =AddList(_addlist1 ,stat );
#line 3243 "cplus.met"
#line 3243 "cplus.met"
        if (statList){
#line 3243 "cplus.met"
#line 3243 "cplus.met"
            _addlist1 = SonTree (_addlist1 ,2 );
#line 3243 "cplus.met"
        } else {
#line 3243 "cplus.met"
#line 3243 "cplus.met"
            statList = _addlist1 ;
#line 3243 "cplus.met"
        }
#line 3243 "cplus.met"
    } 
#line 3243 "cplus.met"
#line 3244 "cplus.met"
    {
#line 3244 "cplus.met"
        PPTREE _ptTree0=0;
#line 3244 "cplus.met"
        if ( (_ptTree0=NQUICK_CALL(_Tak(none_statement)(error_free), 99, cplus))== (PPTREE) -1 ) {
#line 3244 "cplus.met"
            MulFreeTree(4,_ptTree0,_addlist1,stat,statList);
            PROG_EXIT(compound_statement_exit,"compound_statement")
#line 3244 "cplus.met"
        }
#line 3244 "cplus.met"
        statList =AddList(statList , _ptTree0);
#line 3244 "cplus.met"
    }
#line 3244 "cplus.met"
#line 3245 "cplus.met"
    if (! ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN(AFER,"}") && (tokenAhead = 0,CommTerm(),1))){
#line 3245 "cplus.met"
#line 3246 "cplus.met"
#line 3247 "cplus.met"
        dumperror ();
#line 3247 "cplus.met"
#line 3248 "cplus.met"
        (tokenAhead == 5|| (LexEndLine(),TRACE_LEX(1)));
#line 3248 "cplus.met"
        if ( ! TERM_OR_META(END_LINE,"END_LINE") || !(CommTerm(),1)) {
#line 3248 "cplus.met"
            MulFreeTree(3,_addlist1,stat,statList);
            TOKEN_EXIT(compound_statement_exit,"END_LINE")
#line 3248 "cplus.met"
        } else {
#line 3248 "cplus.met"
            tokenAhead = 0 ;
#line 3248 "cplus.met"
        }
#line 3248 "cplus.met"
#line 3249 "cplus.met"
         hasGotError = 1 ;
#line 3249 "cplus.met"
#line 3250 "cplus.met"
         goto debut ;
#line 3250 "cplus.met"
#line 3250 "cplus.met"
#line 3250 "cplus.met"
    }
#line 3250 "cplus.met"
#line 3252 "cplus.met"
    {
#line 3252 "cplus.met"
        PPTREE _ptTree0=0;
#line 3252 "cplus.met"
        {
#line 3252 "cplus.met"
            PPTREE _ptRes1=0;
#line 3252 "cplus.met"
            _ptRes1= MakeTree(COMPOUND, 1);
#line 3252 "cplus.met"
            ReplaceTree(_ptRes1, 1, statList );
#line 3252 "cplus.met"
            _ptTree0=_ptRes1;
#line 3252 "cplus.met"
        }
#line 3252 "cplus.met"
        _retValue =_ptTree0;
#line 3252 "cplus.met"
        goto compound_statement_ret;
#line 3252 "cplus.met"
    }
#line 3252 "cplus.met"
#line 3252 "cplus.met"
#line 3252 "cplus.met"

#line 3253 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 3253 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 3253 "cplus.met"
return((PPTREE) 0);
#line 3253 "cplus.met"

#line 3253 "cplus.met"
compound_statement_exit :
#line 3253 "cplus.met"

#line 3253 "cplus.met"
    _Debug = TRACE_RULE("compound_statement",TRACE_EXIT,(PPTREE)0);
#line 3253 "cplus.met"
    _funcLevel--;
#line 3253 "cplus.met"
    return((PPTREE) -1) ;
#line 3253 "cplus.met"

#line 3253 "cplus.met"
compound_statement_ret :
#line 3253 "cplus.met"
    
#line 3253 "cplus.met"
    _Debug = TRACE_RULE("compound_statement",TRACE_RETURN,_retValue);
#line 3253 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 3253 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 3253 "cplus.met"
    return _retValue ;
#line 3253 "cplus.met"
}
#line 3253 "cplus.met"

#line 3253 "cplus.met"
#line 2573 "cplus.met"
PPTREE cplus::conditional_expression ( int error_free)
#line 2573 "cplus.met"
{
#line 2573 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 2573 "cplus.met"
    int _value,_nbPre = 0 ;
#line 2573 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 2573 "cplus.met"
    int _Debug = TRACE_RULE("conditional_expression",TRACE_ENTER,(PPTREE)0);
#line 2573 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 2573 "cplus.met"
#line 2573 "cplus.met"
    PPTREE expTree = (PPTREE) 0,condTree = (PPTREE) 0;
#line 2573 "cplus.met"
#line 2575 "cplus.met"
    if ( (expTree=NQUICK_CALL(_Tak(logical_or_expression)(error_free), 86, cplus))== (PPTREE) -1 ) {
#line 2575 "cplus.met"
        MulFreeTree(2,condTree,expTree);
        PROG_EXIT(conditional_expression_exit,"conditional_expression")
#line 2575 "cplus.met"
    }
#line 2575 "cplus.met"
#line 2576 "cplus.met"
    if ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN(INTE,"?") && (tokenAhead = 0,CommTerm(),1)){
#line 2576 "cplus.met"
#line 2577 "cplus.met"
#line 2578 "cplus.met"
        {
#line 2578 "cplus.met"
            PPTREE _ptRes0=0;
#line 2578 "cplus.met"
            _ptRes0= MakeTree(COND_AFF, 3);
#line 2578 "cplus.met"
            ReplaceTree(_ptRes0, 1, expTree );
#line 2578 "cplus.met"
            condTree=_ptRes0;
#line 2578 "cplus.met"
        }
#line 2578 "cplus.met"
#line 2579 "cplus.met"
        {
#line 2579 "cplus.met"
            PPTREE _ptTree0=0;
#line 2579 "cplus.met"
            if ( (_ptTree0=NQUICK_CALL(_Tak(expression)(error_free), 59, cplus))== (PPTREE) -1 ) {
#line 2579 "cplus.met"
                MulFreeTree(3,_ptTree0,condTree,expTree);
                PROG_EXIT(conditional_expression_exit,"conditional_expression")
#line 2579 "cplus.met"
            }
#line 2579 "cplus.met"
            ReplaceTree(condTree , 2 , _ptTree0);
#line 2579 "cplus.met"
        }
#line 2579 "cplus.met"
#line 2580 "cplus.met"
        (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 2580 "cplus.met"
        if (  !SEE_TOKEN( DPOI,":") || !(CommTerm(),1)) {
#line 2580 "cplus.met"
            MulFreeTree(2,condTree,expTree);
            TOKEN_EXIT(conditional_expression_exit,":")
#line 2580 "cplus.met"
        } else {
#line 2580 "cplus.met"
            tokenAhead = 0 ;
#line 2580 "cplus.met"
        }
#line 2580 "cplus.met"
#line 2581 "cplus.met"
        {
#line 2581 "cplus.met"
            PPTREE _ptTree0=0;
#line 2581 "cplus.met"
            {
#line 2581 "cplus.met"
                PPTREE _ptTree1=0;
#line 2581 "cplus.met"
                if ( (_ptTree1=NQUICK_CALL(_Tak(conditional_expression)(error_free), 27, cplus))== (PPTREE) -1 ) {
#line 2581 "cplus.met"
                    MulFreeTree(4,_ptTree1,_ptTree0,condTree,expTree);
                    PROG_EXIT(conditional_expression_exit,"conditional_expression")
#line 2581 "cplus.met"
                }
#line 2581 "cplus.met"
                _ptTree0=ReplaceTree(condTree , 3 , _ptTree1);
#line 2581 "cplus.met"
            }
#line 2581 "cplus.met"
            _retValue =_ptTree0;
#line 2581 "cplus.met"
            goto conditional_expression_ret;
#line 2581 "cplus.met"
        }
#line 2581 "cplus.met"
#line 2581 "cplus.met"
#line 2581 "cplus.met"
    } else {
#line 2581 "cplus.met"
#line 2584 "cplus.met"
        {
#line 2584 "cplus.met"
            _retValue = expTree ;
#line 2584 "cplus.met"
            goto conditional_expression_ret;
#line 2584 "cplus.met"
            
#line 2584 "cplus.met"
        }
#line 2584 "cplus.met"
    }
#line 2584 "cplus.met"
#line 2584 "cplus.met"
#line 2584 "cplus.met"

#line 2585 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2585 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 2585 "cplus.met"
return((PPTREE) 0);
#line 2585 "cplus.met"

#line 2585 "cplus.met"
conditional_expression_exit :
#line 2585 "cplus.met"

#line 2585 "cplus.met"
    _Debug = TRACE_RULE("conditional_expression",TRACE_EXIT,(PPTREE)0);
#line 2585 "cplus.met"
    _funcLevel--;
#line 2585 "cplus.met"
    return((PPTREE) -1) ;
#line 2585 "cplus.met"

#line 2585 "cplus.met"
conditional_expression_ret :
#line 2585 "cplus.met"
    
#line 2585 "cplus.met"
    _Debug = TRACE_RULE("conditional_expression",TRACE_RETURN,_retValue);
#line 2585 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2585 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 2585 "cplus.met"
    return _retValue ;
#line 2585 "cplus.met"
}
#line 2585 "cplus.met"

#line 2585 "cplus.met"
#line 2113 "cplus.met"
PPTREE cplus::const_or_volatile ( int error_free)
#line 2113 "cplus.met"
{
#line 2113 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 2113 "cplus.met"
    int _value,_nbPre = 0 ;
#line 2113 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 2113 "cplus.met"
    int _Debug = TRACE_RULE("const_or_volatile",TRACE_ENTER,(PPTREE)0);
#line 2113 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 2113 "cplus.met"
#line 2114 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 2114 "cplus.met"
    switch( lexEl.Value) {
#line 2114 "cplus.met"
#line 2115 "cplus.met"
        case CONST : 
#line 2115 "cplus.met"
#line 2115 "cplus.met"
            {
#line 2115 "cplus.met"
                PPTREE _ptTree0=0;
#line 2115 "cplus.met"
                {
#line 2115 "cplus.met"
                    PPTREE _ptTree1=0,_ptRes1=0;
#line 2115 "cplus.met"
                    _ptRes1= MakeTree(RANGE_MODIFIER, 2);
#line 2115 "cplus.met"
                    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 2115 "cplus.met"
                    if (  !SEE_TOKEN( CONST,"const") || !(_ptTree1 = CommString(lexEl.string()))) {
#line 2115 "cplus.met"
                        MulFreeTree(3,_ptRes1,_ptTree1,_ptTree0);
                        TOKEN_EXIT(const_or_volatile_exit,"const")
#line 2115 "cplus.met"
                    } else {
#line 2115 "cplus.met"
                        tokenAhead = 0 ;
#line 2115 "cplus.met"
                    }
#line 2115 "cplus.met"
                    ReplaceTree(_ptRes1, 1, _ptTree1);
#line 2115 "cplus.met"
                    _ptTree0=_ptRes1;
#line 2115 "cplus.met"
                }
#line 2115 "cplus.met"
                _retValue =_ptTree0;
#line 2115 "cplus.met"
                goto const_or_volatile_ret;
#line 2115 "cplus.met"
            }
#line 2115 "cplus.met"
            break;
#line 2115 "cplus.met"
#line 2116 "cplus.met"
        case VOLATILE : 
#line 2116 "cplus.met"
#line 2116 "cplus.met"
            {
#line 2116 "cplus.met"
                PPTREE _ptTree0=0;
#line 2116 "cplus.met"
                {
#line 2116 "cplus.met"
                    PPTREE _ptTree1=0,_ptRes1=0;
#line 2116 "cplus.met"
                    _ptRes1= MakeTree(RANGE_MODIFIER, 2);
#line 2116 "cplus.met"
                    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 2116 "cplus.met"
                    if (  !SEE_TOKEN( VOLATILE,"volatile") || !(_ptTree1 = CommString(lexEl.string()))) {
#line 2116 "cplus.met"
                        MulFreeTree(3,_ptRes1,_ptTree1,_ptTree0);
                        TOKEN_EXIT(const_or_volatile_exit,"volatile")
#line 2116 "cplus.met"
                    } else {
#line 2116 "cplus.met"
                        tokenAhead = 0 ;
#line 2116 "cplus.met"
                    }
#line 2116 "cplus.met"
                    ReplaceTree(_ptRes1, 1, _ptTree1);
#line 2116 "cplus.met"
                    _ptTree0=_ptRes1;
#line 2116 "cplus.met"
                }
#line 2116 "cplus.met"
                _retValue =_ptTree0;
#line 2116 "cplus.met"
                goto const_or_volatile_ret;
#line 2116 "cplus.met"
            }
#line 2116 "cplus.met"
            break;
#line 2116 "cplus.met"
        default :
#line 2116 "cplus.met"
            CASE_EXIT(const_or_volatile_exit,"either const or volatile")
#line 2116 "cplus.met"
            break;
#line 2116 "cplus.met"
    }
#line 2116 "cplus.met"
#line 2116 "cplus.met"
#line 2118 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2118 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 2118 "cplus.met"
return((PPTREE) 0);
#line 2118 "cplus.met"

#line 2118 "cplus.met"
const_or_volatile_exit :
#line 2118 "cplus.met"

#line 2118 "cplus.met"
    _Debug = TRACE_RULE("const_or_volatile",TRACE_EXIT,(PPTREE)0);
#line 2118 "cplus.met"
    _funcLevel--;
#line 2118 "cplus.met"
    return((PPTREE) -1) ;
#line 2118 "cplus.met"

#line 2118 "cplus.met"
const_or_volatile_ret :
#line 2118 "cplus.met"
    
#line 2118 "cplus.met"
    _Debug = TRACE_RULE("const_or_volatile",TRACE_RETURN,_retValue);
#line 2118 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2118 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 2118 "cplus.met"
    return _retValue ;
#line 2118 "cplus.met"
}
#line 2118 "cplus.met"

#line 2118 "cplus.met"
#line 3027 "cplus.met"
PPTREE cplus::constan ( int error_free)
#line 3027 "cplus.met"
{
#line 3027 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 3027 "cplus.met"
    int _value,_nbPre = 0 ;
#line 3027 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 3027 "cplus.met"
    int _Debug = TRACE_RULE("constan",TRACE_ENTER,(PPTREE)0);
#line 3027 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 3027 "cplus.met"
#line 3028 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3028 "cplus.met"
    switch( lexEl.Value) {
#line 3028 "cplus.met"
#line 3029 "cplus.met"
        case META : 
#line 3029 "cplus.met"
        case INTEGER : 
#line 3029 "cplus.met"
#line 3029 "cplus.met"
            {
#line 3029 "cplus.met"
                PPTREE _ptTree0=0;
#line 3029 "cplus.met"
                {
#line 3029 "cplus.met"
                    PPTREE _ptTree1=0,_ptRes1=0;
#line 3029 "cplus.met"
                    _ptRes1= MakeTree(INTEGER, 1);
#line 3029 "cplus.met"
                    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3029 "cplus.met"
                    if ( ! TERM_OR_META(INTEGER,"INTEGER") || !(BUILD_TERM_META(_ptTree1))) {
#line 3029 "cplus.met"
                        MulFreeTree(3,_ptRes1,_ptTree1,_ptTree0);
                        TOKEN_EXIT(constan_exit,"INTEGER")
#line 3029 "cplus.met"
                    } else {
#line 3029 "cplus.met"
                        tokenAhead = 0 ;
#line 3029 "cplus.met"
                    }
#line 3029 "cplus.met"
                    ReplaceTree(_ptRes1, 1, _ptTree1);
#line 3029 "cplus.met"
                    _ptTree0=_ptRes1;
#line 3029 "cplus.met"
                }
#line 3029 "cplus.met"
                _retValue =_ptTree0;
#line 3029 "cplus.met"
                goto constan_ret;
#line 3029 "cplus.met"
            }
#line 3029 "cplus.met"
            break;
#line 3029 "cplus.met"
#line 3030 "cplus.met"
        case LINTEGER : 
#line 3030 "cplus.met"
#line 3030 "cplus.met"
            {
#line 3030 "cplus.met"
                PPTREE _ptTree0=0;
#line 3030 "cplus.met"
                {
#line 3030 "cplus.met"
                    PPTREE _ptTree1=0,_ptRes1=0;
#line 3030 "cplus.met"
                    _ptRes1= MakeTree(ILONG, 1);
#line 3030 "cplus.met"
                    {
#line 3030 "cplus.met"
                        PPTREE _ptTree2=0,_ptRes2=0;
#line 3030 "cplus.met"
                        _ptRes2= MakeTree(INTEGER, 1);
#line 3030 "cplus.met"
                        (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3030 "cplus.met"
                        if ( ! TERM_OR_META(LINTEGER,"LINTEGER") || !(BUILD_TERM_META(_ptTree2))) {
#line 3030 "cplus.met"
                            MulFreeTree(5,_ptRes2,_ptTree2,_ptRes1,_ptTree1,_ptTree0);
                            TOKEN_EXIT(constan_exit,"LINTEGER")
#line 3030 "cplus.met"
                        } else {
#line 3030 "cplus.met"
                            tokenAhead = 0 ;
#line 3030 "cplus.met"
                        }
#line 3030 "cplus.met"
                        ReplaceTree(_ptRes2, 1, _ptTree2);
#line 3030 "cplus.met"
                        _ptTree1=_ptRes2;
#line 3030 "cplus.met"
                    }
#line 3030 "cplus.met"
                    ReplaceTree(_ptRes1, 1, _ptTree1);
#line 3030 "cplus.met"
                    _ptTree0=_ptRes1;
#line 3030 "cplus.met"
                }
#line 3030 "cplus.met"
                _retValue =_ptTree0;
#line 3030 "cplus.met"
                goto constan_ret;
#line 3030 "cplus.met"
            }
#line 3030 "cplus.met"
            break;
#line 3030 "cplus.met"
#line 3032 "cplus.met"
        case LLINTEGER : 
#line 3032 "cplus.met"
#line 3032 "cplus.met"
            {
#line 3032 "cplus.met"
                PPTREE _ptTree0=0;
#line 3032 "cplus.met"
                {
#line 3032 "cplus.met"
                    PPTREE _ptTree1=0,_ptRes1=0;
#line 3032 "cplus.met"
                    _ptRes1= MakeTree(ILONGLONG, 1);
#line 3032 "cplus.met"
                    {
#line 3032 "cplus.met"
                        PPTREE _ptTree2=0,_ptRes2=0;
#line 3032 "cplus.met"
                        _ptRes2= MakeTree(INTEGER, 1);
#line 3032 "cplus.met"
                        (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3032 "cplus.met"
                        if ( ! TERM_OR_META(LINTEGER,"LINTEGER") || !(BUILD_TERM_META(_ptTree2))) {
#line 3032 "cplus.met"
                            MulFreeTree(5,_ptRes2,_ptTree2,_ptRes1,_ptTree1,_ptTree0);
                            TOKEN_EXIT(constan_exit,"LINTEGER")
#line 3032 "cplus.met"
                        } else {
#line 3032 "cplus.met"
                            tokenAhead = 0 ;
#line 3032 "cplus.met"
                        }
#line 3032 "cplus.met"
                        ReplaceTree(_ptRes2, 1, _ptTree2);
#line 3032 "cplus.met"
                        _ptTree1=_ptRes2;
#line 3032 "cplus.met"
                    }
#line 3032 "cplus.met"
                    ReplaceTree(_ptRes1, 1, _ptTree1);
#line 3032 "cplus.met"
                    _ptTree0=_ptRes1;
#line 3032 "cplus.met"
                }
#line 3032 "cplus.met"
                _retValue =_ptTree0;
#line 3032 "cplus.met"
                goto constan_ret;
#line 3032 "cplus.met"
            }
#line 3032 "cplus.met"
            break;
#line 3032 "cplus.met"
#line 3034 "cplus.met"
        case UINTEGER : 
#line 3034 "cplus.met"
#line 3034 "cplus.met"
            {
#line 3034 "cplus.met"
                PPTREE _ptTree0=0;
#line 3034 "cplus.met"
                {
#line 3034 "cplus.met"
                    PPTREE _ptTree1=0,_ptRes1=0;
#line 3034 "cplus.met"
                    _ptRes1= MakeTree(IUN, 1);
#line 3034 "cplus.met"
                    {
#line 3034 "cplus.met"
                        PPTREE _ptTree2=0,_ptRes2=0;
#line 3034 "cplus.met"
                        _ptRes2= MakeTree(INTEGER, 1);
#line 3034 "cplus.met"
                        (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3034 "cplus.met"
                        if ( ! TERM_OR_META(UINTEGER,"UINTEGER") || !(BUILD_TERM_META(_ptTree2))) {
#line 3034 "cplus.met"
                            MulFreeTree(5,_ptRes2,_ptTree2,_ptRes1,_ptTree1,_ptTree0);
                            TOKEN_EXIT(constan_exit,"UINTEGER")
#line 3034 "cplus.met"
                        } else {
#line 3034 "cplus.met"
                            tokenAhead = 0 ;
#line 3034 "cplus.met"
                        }
#line 3034 "cplus.met"
                        ReplaceTree(_ptRes2, 1, _ptTree2);
#line 3034 "cplus.met"
                        _ptTree1=_ptRes2;
#line 3034 "cplus.met"
                    }
#line 3034 "cplus.met"
                    ReplaceTree(_ptRes1, 1, _ptTree1);
#line 3034 "cplus.met"
                    _ptTree0=_ptRes1;
#line 3034 "cplus.met"
                }
#line 3034 "cplus.met"
                _retValue =_ptTree0;
#line 3034 "cplus.met"
                goto constan_ret;
#line 3034 "cplus.met"
            }
#line 3034 "cplus.met"
            break;
#line 3034 "cplus.met"
#line 3036 "cplus.met"
        case ULINTEGER : 
#line 3036 "cplus.met"
#line 3036 "cplus.met"
            {
#line 3036 "cplus.met"
                PPTREE _ptTree0=0;
#line 3036 "cplus.met"
                {
#line 3036 "cplus.met"
                    PPTREE _ptTree1=0,_ptRes1=0;
#line 3036 "cplus.met"
                    _ptRes1= MakeTree(IUNLONG, 1);
#line 3036 "cplus.met"
                    {
#line 3036 "cplus.met"
                        PPTREE _ptTree2=0,_ptRes2=0;
#line 3036 "cplus.met"
                        _ptRes2= MakeTree(INTEGER, 1);
#line 3036 "cplus.met"
                        (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3036 "cplus.met"
                        if ( ! TERM_OR_META(ULINTEGER,"ULINTEGER") || !(BUILD_TERM_META(_ptTree2))) {
#line 3036 "cplus.met"
                            MulFreeTree(5,_ptRes2,_ptTree2,_ptRes1,_ptTree1,_ptTree0);
                            TOKEN_EXIT(constan_exit,"ULINTEGER")
#line 3036 "cplus.met"
                        } else {
#line 3036 "cplus.met"
                            tokenAhead = 0 ;
#line 3036 "cplus.met"
                        }
#line 3036 "cplus.met"
                        ReplaceTree(_ptRes2, 1, _ptTree2);
#line 3036 "cplus.met"
                        _ptTree1=_ptRes2;
#line 3036 "cplus.met"
                    }
#line 3036 "cplus.met"
                    ReplaceTree(_ptRes1, 1, _ptTree1);
#line 3036 "cplus.met"
                    _ptTree0=_ptRes1;
#line 3036 "cplus.met"
                }
#line 3036 "cplus.met"
                _retValue =_ptTree0;
#line 3036 "cplus.met"
                goto constan_ret;
#line 3036 "cplus.met"
            }
#line 3036 "cplus.met"
            break;
#line 3036 "cplus.met"
#line 3038 "cplus.met"
        case ULLINTEGER : 
#line 3038 "cplus.met"
#line 3038 "cplus.met"
            {
#line 3038 "cplus.met"
                PPTREE _ptTree0=0;
#line 3038 "cplus.met"
                {
#line 3038 "cplus.met"
                    PPTREE _ptTree1=0,_ptRes1=0;
#line 3038 "cplus.met"
                    _ptRes1= MakeTree(IUNLONGLONG, 1);
#line 3038 "cplus.met"
                    {
#line 3038 "cplus.met"
                        PPTREE _ptTree2=0,_ptRes2=0;
#line 3038 "cplus.met"
                        _ptRes2= MakeTree(INTEGER, 1);
#line 3038 "cplus.met"
                        (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3038 "cplus.met"
                        if ( ! TERM_OR_META(ULINTEGER,"ULINTEGER") || !(BUILD_TERM_META(_ptTree2))) {
#line 3038 "cplus.met"
                            MulFreeTree(5,_ptRes2,_ptTree2,_ptRes1,_ptTree1,_ptTree0);
                            TOKEN_EXIT(constan_exit,"ULINTEGER")
#line 3038 "cplus.met"
                        } else {
#line 3038 "cplus.met"
                            tokenAhead = 0 ;
#line 3038 "cplus.met"
                        }
#line 3038 "cplus.met"
                        ReplaceTree(_ptRes2, 1, _ptTree2);
#line 3038 "cplus.met"
                        _ptTree1=_ptRes2;
#line 3038 "cplus.met"
                    }
#line 3038 "cplus.met"
                    ReplaceTree(_ptRes1, 1, _ptTree1);
#line 3038 "cplus.met"
                    _ptTree0=_ptRes1;
#line 3038 "cplus.met"
                }
#line 3038 "cplus.met"
                _retValue =_ptTree0;
#line 3038 "cplus.met"
                goto constan_ret;
#line 3038 "cplus.met"
            }
#line 3038 "cplus.met"
            break;
#line 3038 "cplus.met"
#line 3040 "cplus.met"
        case HEXA : 
#line 3040 "cplus.met"
#line 3040 "cplus.met"
            {
#line 3040 "cplus.met"
                PPTREE _ptTree0=0;
#line 3040 "cplus.met"
                {
#line 3040 "cplus.met"
                    PPTREE _ptTree1=0,_ptRes1=0;
#line 3040 "cplus.met"
                    _ptRes1= MakeTree(HEXA, 1);
#line 3040 "cplus.met"
                    {
#line 3040 "cplus.met"
                        PPTREE _ptTree2=0,_ptRes2=0;
#line 3040 "cplus.met"
                        _ptRes2= MakeTree(INTEGER, 1);
#line 3040 "cplus.met"
                        (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3040 "cplus.met"
                        if ( ! TERM_OR_META(HEXA,"HEXA") || !(BUILD_TERM_META(_ptTree2))) {
#line 3040 "cplus.met"
                            MulFreeTree(5,_ptRes2,_ptTree2,_ptRes1,_ptTree1,_ptTree0);
                            TOKEN_EXIT(constan_exit,"HEXA")
#line 3040 "cplus.met"
                        } else {
#line 3040 "cplus.met"
                            tokenAhead = 0 ;
#line 3040 "cplus.met"
                        }
#line 3040 "cplus.met"
                        ReplaceTree(_ptRes2, 1, _ptTree2);
#line 3040 "cplus.met"
                        _ptTree1=_ptRes2;
#line 3040 "cplus.met"
                    }
#line 3040 "cplus.met"
                    ReplaceTree(_ptRes1, 1, _ptTree1);
#line 3040 "cplus.met"
                    _ptTree0=_ptRes1;
#line 3040 "cplus.met"
                }
#line 3040 "cplus.met"
                _retValue =_ptTree0;
#line 3040 "cplus.met"
                goto constan_ret;
#line 3040 "cplus.met"
            }
#line 3040 "cplus.met"
            break;
#line 3040 "cplus.met"
#line 3041 "cplus.met"
        case LHEXA : 
#line 3041 "cplus.met"
#line 3041 "cplus.met"
            {
#line 3041 "cplus.met"
                PPTREE _ptTree0=0;
#line 3041 "cplus.met"
                {
#line 3041 "cplus.met"
                    PPTREE _ptTree1=0,_ptRes1=0;
#line 3041 "cplus.met"
                    _ptRes1= MakeTree(LONG, 1);
#line 3041 "cplus.met"
                    {
#line 3041 "cplus.met"
                        PPTREE _ptTree2=0,_ptRes2=0;
#line 3041 "cplus.met"
                        _ptRes2= MakeTree(HEXA, 1);
#line 3041 "cplus.met"
                        {
#line 3041 "cplus.met"
                            PPTREE _ptTree3=0,_ptRes3=0;
#line 3041 "cplus.met"
                            _ptRes3= MakeTree(INTEGER, 1);
#line 3041 "cplus.met"
                            (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3041 "cplus.met"
                            if ( ! TERM_OR_META(LHEXA,"LHEXA") || !(BUILD_TERM_META(_ptTree3))) {
#line 3041 "cplus.met"
                                MulFreeTree(7,_ptRes3,_ptTree3,_ptRes2,_ptTree2,_ptRes1,_ptTree1,_ptTree0);
                                TOKEN_EXIT(constan_exit,"LHEXA")
#line 3041 "cplus.met"
                            } else {
#line 3041 "cplus.met"
                                tokenAhead = 0 ;
#line 3041 "cplus.met"
                            }
#line 3041 "cplus.met"
                            ReplaceTree(_ptRes3, 1, _ptTree3);
#line 3041 "cplus.met"
                            _ptTree2=_ptRes3;
#line 3041 "cplus.met"
                        }
#line 3041 "cplus.met"
                        ReplaceTree(_ptRes2, 1, _ptTree2);
#line 3041 "cplus.met"
                        _ptTree1=_ptRes2;
#line 3041 "cplus.met"
                    }
#line 3041 "cplus.met"
                    ReplaceTree(_ptRes1, 1, _ptTree1);
#line 3041 "cplus.met"
                    _ptTree0=_ptRes1;
#line 3041 "cplus.met"
                }
#line 3041 "cplus.met"
                _retValue =_ptTree0;
#line 3041 "cplus.met"
                goto constan_ret;
#line 3041 "cplus.met"
            }
#line 3041 "cplus.met"
            break;
#line 3041 "cplus.met"
#line 3043 "cplus.met"
        case LLHEXA : 
#line 3043 "cplus.met"
#line 3043 "cplus.met"
            {
#line 3043 "cplus.met"
                PPTREE _ptTree0=0;
#line 3043 "cplus.met"
                {
#line 3043 "cplus.met"
                    PPTREE _ptTree1=0,_ptRes1=0;
#line 3043 "cplus.met"
                    _ptRes1= MakeTree(LONGLONG, 1);
#line 3043 "cplus.met"
                    {
#line 3043 "cplus.met"
                        PPTREE _ptTree2=0,_ptRes2=0;
#line 3043 "cplus.met"
                        _ptRes2= MakeTree(HEXA, 1);
#line 3043 "cplus.met"
                        {
#line 3043 "cplus.met"
                            PPTREE _ptTree3=0,_ptRes3=0;
#line 3043 "cplus.met"
                            _ptRes3= MakeTree(INTEGER, 1);
#line 3043 "cplus.met"
                            (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3043 "cplus.met"
                            if ( ! TERM_OR_META(LHEXA,"LHEXA") || !(BUILD_TERM_META(_ptTree3))) {
#line 3043 "cplus.met"
                                MulFreeTree(7,_ptRes3,_ptTree3,_ptRes2,_ptTree2,_ptRes1,_ptTree1,_ptTree0);
                                TOKEN_EXIT(constan_exit,"LHEXA")
#line 3043 "cplus.met"
                            } else {
#line 3043 "cplus.met"
                                tokenAhead = 0 ;
#line 3043 "cplus.met"
                            }
#line 3043 "cplus.met"
                            ReplaceTree(_ptRes3, 1, _ptTree3);
#line 3043 "cplus.met"
                            _ptTree2=_ptRes3;
#line 3043 "cplus.met"
                        }
#line 3043 "cplus.met"
                        ReplaceTree(_ptRes2, 1, _ptTree2);
#line 3043 "cplus.met"
                        _ptTree1=_ptRes2;
#line 3043 "cplus.met"
                    }
#line 3043 "cplus.met"
                    ReplaceTree(_ptRes1, 1, _ptTree1);
#line 3043 "cplus.met"
                    _ptTree0=_ptRes1;
#line 3043 "cplus.met"
                }
#line 3043 "cplus.met"
                _retValue =_ptTree0;
#line 3043 "cplus.met"
                goto constan_ret;
#line 3043 "cplus.met"
            }
#line 3043 "cplus.met"
            break;
#line 3043 "cplus.met"
#line 3045 "cplus.met"
        case UHEXA : 
#line 3045 "cplus.met"
#line 3045 "cplus.met"
            {
#line 3045 "cplus.met"
                PPTREE _ptTree0=0;
#line 3045 "cplus.met"
                {
#line 3045 "cplus.met"
                    PPTREE _ptTree1=0,_ptRes1=0;
#line 3045 "cplus.met"
                    _ptRes1= MakeTree(IUN, 1);
#line 3045 "cplus.met"
                    {
#line 3045 "cplus.met"
                        PPTREE _ptTree2=0,_ptRes2=0;
#line 3045 "cplus.met"
                        _ptRes2= MakeTree(HEXA, 1);
#line 3045 "cplus.met"
                        {
#line 3045 "cplus.met"
                            PPTREE _ptTree3=0,_ptRes3=0;
#line 3045 "cplus.met"
                            _ptRes3= MakeTree(INTEGER, 1);
#line 3045 "cplus.met"
                            (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3045 "cplus.met"
                            if ( ! TERM_OR_META(UHEXA,"UHEXA") || !(BUILD_TERM_META(_ptTree3))) {
#line 3045 "cplus.met"
                                MulFreeTree(7,_ptRes3,_ptTree3,_ptRes2,_ptTree2,_ptRes1,_ptTree1,_ptTree0);
                                TOKEN_EXIT(constan_exit,"UHEXA")
#line 3045 "cplus.met"
                            } else {
#line 3045 "cplus.met"
                                tokenAhead = 0 ;
#line 3045 "cplus.met"
                            }
#line 3045 "cplus.met"
                            ReplaceTree(_ptRes3, 1, _ptTree3);
#line 3045 "cplus.met"
                            _ptTree2=_ptRes3;
#line 3045 "cplus.met"
                        }
#line 3045 "cplus.met"
                        ReplaceTree(_ptRes2, 1, _ptTree2);
#line 3045 "cplus.met"
                        _ptTree1=_ptRes2;
#line 3045 "cplus.met"
                    }
#line 3045 "cplus.met"
                    ReplaceTree(_ptRes1, 1, _ptTree1);
#line 3045 "cplus.met"
                    _ptTree0=_ptRes1;
#line 3045 "cplus.met"
                }
#line 3045 "cplus.met"
                _retValue =_ptTree0;
#line 3045 "cplus.met"
                goto constan_ret;
#line 3045 "cplus.met"
            }
#line 3045 "cplus.met"
            break;
#line 3045 "cplus.met"
#line 3047 "cplus.met"
        case ULHEXA : 
#line 3047 "cplus.met"
#line 3047 "cplus.met"
            {
#line 3047 "cplus.met"
                PPTREE _ptTree0=0;
#line 3047 "cplus.met"
                {
#line 3047 "cplus.met"
                    PPTREE _ptTree1=0,_ptRes1=0;
#line 3047 "cplus.met"
                    _ptRes1= MakeTree(IUNLONG, 1);
#line 3047 "cplus.met"
                    {
#line 3047 "cplus.met"
                        PPTREE _ptTree2=0,_ptRes2=0;
#line 3047 "cplus.met"
                        _ptRes2= MakeTree(HEXA, 1);
#line 3047 "cplus.met"
                        {
#line 3047 "cplus.met"
                            PPTREE _ptTree3=0,_ptRes3=0;
#line 3047 "cplus.met"
                            _ptRes3= MakeTree(INTEGER, 1);
#line 3047 "cplus.met"
                            (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3047 "cplus.met"
                            if ( ! TERM_OR_META(ULHEXA,"ULHEXA") || !(BUILD_TERM_META(_ptTree3))) {
#line 3047 "cplus.met"
                                MulFreeTree(7,_ptRes3,_ptTree3,_ptRes2,_ptTree2,_ptRes1,_ptTree1,_ptTree0);
                                TOKEN_EXIT(constan_exit,"ULHEXA")
#line 3047 "cplus.met"
                            } else {
#line 3047 "cplus.met"
                                tokenAhead = 0 ;
#line 3047 "cplus.met"
                            }
#line 3047 "cplus.met"
                            ReplaceTree(_ptRes3, 1, _ptTree3);
#line 3047 "cplus.met"
                            _ptTree2=_ptRes3;
#line 3047 "cplus.met"
                        }
#line 3047 "cplus.met"
                        ReplaceTree(_ptRes2, 1, _ptTree2);
#line 3047 "cplus.met"
                        _ptTree1=_ptRes2;
#line 3047 "cplus.met"
                    }
#line 3047 "cplus.met"
                    ReplaceTree(_ptRes1, 1, _ptTree1);
#line 3047 "cplus.met"
                    _ptTree0=_ptRes1;
#line 3047 "cplus.met"
                }
#line 3047 "cplus.met"
                _retValue =_ptTree0;
#line 3047 "cplus.met"
                goto constan_ret;
#line 3047 "cplus.met"
            }
#line 3047 "cplus.met"
            break;
#line 3047 "cplus.met"
#line 3049 "cplus.met"
        case ULLHEXA : 
#line 3049 "cplus.met"
#line 3049 "cplus.met"
            {
#line 3049 "cplus.met"
                PPTREE _ptTree0=0;
#line 3049 "cplus.met"
                {
#line 3049 "cplus.met"
                    PPTREE _ptTree1=0,_ptRes1=0;
#line 3049 "cplus.met"
                    _ptRes1= MakeTree(IUNLONGLONG, 1);
#line 3049 "cplus.met"
                    {
#line 3049 "cplus.met"
                        PPTREE _ptTree2=0,_ptRes2=0;
#line 3049 "cplus.met"
                        _ptRes2= MakeTree(HEXA, 1);
#line 3049 "cplus.met"
                        {
#line 3049 "cplus.met"
                            PPTREE _ptTree3=0,_ptRes3=0;
#line 3049 "cplus.met"
                            _ptRes3= MakeTree(INTEGER, 1);
#line 3049 "cplus.met"
                            (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3049 "cplus.met"
                            if ( ! TERM_OR_META(ULHEXA,"ULHEXA") || !(BUILD_TERM_META(_ptTree3))) {
#line 3049 "cplus.met"
                                MulFreeTree(7,_ptRes3,_ptTree3,_ptRes2,_ptTree2,_ptRes1,_ptTree1,_ptTree0);
                                TOKEN_EXIT(constan_exit,"ULHEXA")
#line 3049 "cplus.met"
                            } else {
#line 3049 "cplus.met"
                                tokenAhead = 0 ;
#line 3049 "cplus.met"
                            }
#line 3049 "cplus.met"
                            ReplaceTree(_ptRes3, 1, _ptTree3);
#line 3049 "cplus.met"
                            _ptTree2=_ptRes3;
#line 3049 "cplus.met"
                        }
#line 3049 "cplus.met"
                        ReplaceTree(_ptRes2, 1, _ptTree2);
#line 3049 "cplus.met"
                        _ptTree1=_ptRes2;
#line 3049 "cplus.met"
                    }
#line 3049 "cplus.met"
                    ReplaceTree(_ptRes1, 1, _ptTree1);
#line 3049 "cplus.met"
                    _ptTree0=_ptRes1;
#line 3049 "cplus.met"
                }
#line 3049 "cplus.met"
                _retValue =_ptTree0;
#line 3049 "cplus.met"
                goto constan_ret;
#line 3049 "cplus.met"
            }
#line 3049 "cplus.met"
            break;
#line 3049 "cplus.met"
#line 3051 "cplus.met"
        case OCTAL : 
#line 3051 "cplus.met"
#line 3051 "cplus.met"
            {
#line 3051 "cplus.met"
                PPTREE _ptTree0=0;
#line 3051 "cplus.met"
                {
#line 3051 "cplus.met"
                    PPTREE _ptTree1=0,_ptRes1=0;
#line 3051 "cplus.met"
                    _ptRes1= MakeTree(OCTAL, 1);
#line 3051 "cplus.met"
                    {
#line 3051 "cplus.met"
                        PPTREE _ptTree2=0,_ptRes2=0;
#line 3051 "cplus.met"
                        _ptRes2= MakeTree(INTEGER, 1);
#line 3051 "cplus.met"
                        (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3051 "cplus.met"
                        if ( ! TERM_OR_META(OCTAL,"OCTAL") || !(BUILD_TERM_META(_ptTree2))) {
#line 3051 "cplus.met"
                            MulFreeTree(5,_ptRes2,_ptTree2,_ptRes1,_ptTree1,_ptTree0);
                            TOKEN_EXIT(constan_exit,"OCTAL")
#line 3051 "cplus.met"
                        } else {
#line 3051 "cplus.met"
                            tokenAhead = 0 ;
#line 3051 "cplus.met"
                        }
#line 3051 "cplus.met"
                        ReplaceTree(_ptRes2, 1, _ptTree2);
#line 3051 "cplus.met"
                        _ptTree1=_ptRes2;
#line 3051 "cplus.met"
                    }
#line 3051 "cplus.met"
                    ReplaceTree(_ptRes1, 1, _ptTree1);
#line 3051 "cplus.met"
                    _ptTree0=_ptRes1;
#line 3051 "cplus.met"
                }
#line 3051 "cplus.met"
                _retValue =_ptTree0;
#line 3051 "cplus.met"
                goto constan_ret;
#line 3051 "cplus.met"
            }
#line 3051 "cplus.met"
            break;
#line 3051 "cplus.met"
#line 3052 "cplus.met"
        case LOCTAL : 
#line 3052 "cplus.met"
#line 3052 "cplus.met"
            {
#line 3052 "cplus.met"
                PPTREE _ptTree0=0;
#line 3052 "cplus.met"
                {
#line 3052 "cplus.met"
                    PPTREE _ptTree1=0,_ptRes1=0;
#line 3052 "cplus.met"
                    _ptRes1= MakeTree(ILONG, 1);
#line 3052 "cplus.met"
                    {
#line 3052 "cplus.met"
                        PPTREE _ptTree2=0,_ptRes2=0;
#line 3052 "cplus.met"
                        _ptRes2= MakeTree(OCTAL, 1);
#line 3052 "cplus.met"
                        {
#line 3052 "cplus.met"
                            PPTREE _ptTree3=0,_ptRes3=0;
#line 3052 "cplus.met"
                            _ptRes3= MakeTree(INTEGER, 1);
#line 3052 "cplus.met"
                            (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3052 "cplus.met"
                            if ( ! TERM_OR_META(LOCTAL,"LOCTAL") || !(BUILD_TERM_META(_ptTree3))) {
#line 3052 "cplus.met"
                                MulFreeTree(7,_ptRes3,_ptTree3,_ptRes2,_ptTree2,_ptRes1,_ptTree1,_ptTree0);
                                TOKEN_EXIT(constan_exit,"LOCTAL")
#line 3052 "cplus.met"
                            } else {
#line 3052 "cplus.met"
                                tokenAhead = 0 ;
#line 3052 "cplus.met"
                            }
#line 3052 "cplus.met"
                            ReplaceTree(_ptRes3, 1, _ptTree3);
#line 3052 "cplus.met"
                            _ptTree2=_ptRes3;
#line 3052 "cplus.met"
                        }
#line 3052 "cplus.met"
                        ReplaceTree(_ptRes2, 1, _ptTree2);
#line 3052 "cplus.met"
                        _ptTree1=_ptRes2;
#line 3052 "cplus.met"
                    }
#line 3052 "cplus.met"
                    ReplaceTree(_ptRes1, 1, _ptTree1);
#line 3052 "cplus.met"
                    _ptTree0=_ptRes1;
#line 3052 "cplus.met"
                }
#line 3052 "cplus.met"
                _retValue =_ptTree0;
#line 3052 "cplus.met"
                goto constan_ret;
#line 3052 "cplus.met"
            }
#line 3052 "cplus.met"
            break;
#line 3052 "cplus.met"
#line 3054 "cplus.met"
        case LLOCTAL : 
#line 3054 "cplus.met"
#line 3054 "cplus.met"
            {
#line 3054 "cplus.met"
                PPTREE _ptTree0=0;
#line 3054 "cplus.met"
                {
#line 3054 "cplus.met"
                    PPTREE _ptTree1=0,_ptRes1=0;
#line 3054 "cplus.met"
                    _ptRes1= MakeTree(ILONGLONG, 1);
#line 3054 "cplus.met"
                    {
#line 3054 "cplus.met"
                        PPTREE _ptTree2=0,_ptRes2=0;
#line 3054 "cplus.met"
                        _ptRes2= MakeTree(OCTAL, 1);
#line 3054 "cplus.met"
                        {
#line 3054 "cplus.met"
                            PPTREE _ptTree3=0,_ptRes3=0;
#line 3054 "cplus.met"
                            _ptRes3= MakeTree(INTEGER, 1);
#line 3054 "cplus.met"
                            (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3054 "cplus.met"
                            if ( ! TERM_OR_META(LOCTAL,"LOCTAL") || !(BUILD_TERM_META(_ptTree3))) {
#line 3054 "cplus.met"
                                MulFreeTree(7,_ptRes3,_ptTree3,_ptRes2,_ptTree2,_ptRes1,_ptTree1,_ptTree0);
                                TOKEN_EXIT(constan_exit,"LOCTAL")
#line 3054 "cplus.met"
                            } else {
#line 3054 "cplus.met"
                                tokenAhead = 0 ;
#line 3054 "cplus.met"
                            }
#line 3054 "cplus.met"
                            ReplaceTree(_ptRes3, 1, _ptTree3);
#line 3054 "cplus.met"
                            _ptTree2=_ptRes3;
#line 3054 "cplus.met"
                        }
#line 3054 "cplus.met"
                        ReplaceTree(_ptRes2, 1, _ptTree2);
#line 3054 "cplus.met"
                        _ptTree1=_ptRes2;
#line 3054 "cplus.met"
                    }
#line 3054 "cplus.met"
                    ReplaceTree(_ptRes1, 1, _ptTree1);
#line 3054 "cplus.met"
                    _ptTree0=_ptRes1;
#line 3054 "cplus.met"
                }
#line 3054 "cplus.met"
                _retValue =_ptTree0;
#line 3054 "cplus.met"
                goto constan_ret;
#line 3054 "cplus.met"
            }
#line 3054 "cplus.met"
            break;
#line 3054 "cplus.met"
#line 3056 "cplus.met"
        case UOCTAL : 
#line 3056 "cplus.met"
#line 3056 "cplus.met"
            {
#line 3056 "cplus.met"
                PPTREE _ptTree0=0;
#line 3056 "cplus.met"
                {
#line 3056 "cplus.met"
                    PPTREE _ptTree1=0,_ptRes1=0;
#line 3056 "cplus.met"
                    _ptRes1= MakeTree(IUN, 1);
#line 3056 "cplus.met"
                    {
#line 3056 "cplus.met"
                        PPTREE _ptTree2=0,_ptRes2=0;
#line 3056 "cplus.met"
                        _ptRes2= MakeTree(OCTAL, 1);
#line 3056 "cplus.met"
                        {
#line 3056 "cplus.met"
                            PPTREE _ptTree3=0,_ptRes3=0;
#line 3056 "cplus.met"
                            _ptRes3= MakeTree(INTEGER, 1);
#line 3056 "cplus.met"
                            (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3056 "cplus.met"
                            if ( ! TERM_OR_META(UOCTAL,"UOCTAL") || !(BUILD_TERM_META(_ptTree3))) {
#line 3056 "cplus.met"
                                MulFreeTree(7,_ptRes3,_ptTree3,_ptRes2,_ptTree2,_ptRes1,_ptTree1,_ptTree0);
                                TOKEN_EXIT(constan_exit,"UOCTAL")
#line 3056 "cplus.met"
                            } else {
#line 3056 "cplus.met"
                                tokenAhead = 0 ;
#line 3056 "cplus.met"
                            }
#line 3056 "cplus.met"
                            ReplaceTree(_ptRes3, 1, _ptTree3);
#line 3056 "cplus.met"
                            _ptTree2=_ptRes3;
#line 3056 "cplus.met"
                        }
#line 3056 "cplus.met"
                        ReplaceTree(_ptRes2, 1, _ptTree2);
#line 3056 "cplus.met"
                        _ptTree1=_ptRes2;
#line 3056 "cplus.met"
                    }
#line 3056 "cplus.met"
                    ReplaceTree(_ptRes1, 1, _ptTree1);
#line 3056 "cplus.met"
                    _ptTree0=_ptRes1;
#line 3056 "cplus.met"
                }
#line 3056 "cplus.met"
                _retValue =_ptTree0;
#line 3056 "cplus.met"
                goto constan_ret;
#line 3056 "cplus.met"
            }
#line 3056 "cplus.met"
            break;
#line 3056 "cplus.met"
#line 3058 "cplus.met"
        case ULOCTAL : 
#line 3058 "cplus.met"
#line 3058 "cplus.met"
            {
#line 3058 "cplus.met"
                PPTREE _ptTree0=0;
#line 3058 "cplus.met"
                {
#line 3058 "cplus.met"
                    PPTREE _ptTree1=0,_ptRes1=0;
#line 3058 "cplus.met"
                    _ptRes1= MakeTree(IUNLONG, 1);
#line 3058 "cplus.met"
                    {
#line 3058 "cplus.met"
                        PPTREE _ptTree2=0,_ptRes2=0;
#line 3058 "cplus.met"
                        _ptRes2= MakeTree(OCTAL, 1);
#line 3058 "cplus.met"
                        {
#line 3058 "cplus.met"
                            PPTREE _ptTree3=0,_ptRes3=0;
#line 3058 "cplus.met"
                            _ptRes3= MakeTree(INTEGER, 1);
#line 3058 "cplus.met"
                            (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3058 "cplus.met"
                            if ( ! TERM_OR_META(ULOCTAL,"ULOCTAL") || !(BUILD_TERM_META(_ptTree3))) {
#line 3058 "cplus.met"
                                MulFreeTree(7,_ptRes3,_ptTree3,_ptRes2,_ptTree2,_ptRes1,_ptTree1,_ptTree0);
                                TOKEN_EXIT(constan_exit,"ULOCTAL")
#line 3058 "cplus.met"
                            } else {
#line 3058 "cplus.met"
                                tokenAhead = 0 ;
#line 3058 "cplus.met"
                            }
#line 3058 "cplus.met"
                            ReplaceTree(_ptRes3, 1, _ptTree3);
#line 3058 "cplus.met"
                            _ptTree2=_ptRes3;
#line 3058 "cplus.met"
                        }
#line 3058 "cplus.met"
                        ReplaceTree(_ptRes2, 1, _ptTree2);
#line 3058 "cplus.met"
                        _ptTree1=_ptRes2;
#line 3058 "cplus.met"
                    }
#line 3058 "cplus.met"
                    ReplaceTree(_ptRes1, 1, _ptTree1);
#line 3058 "cplus.met"
                    _ptTree0=_ptRes1;
#line 3058 "cplus.met"
                }
#line 3058 "cplus.met"
                _retValue =_ptTree0;
#line 3058 "cplus.met"
                goto constan_ret;
#line 3058 "cplus.met"
            }
#line 3058 "cplus.met"
            break;
#line 3058 "cplus.met"
#line 3060 "cplus.met"
        case ULLOCTAL : 
#line 3060 "cplus.met"
#line 3060 "cplus.met"
            {
#line 3060 "cplus.met"
                PPTREE _ptTree0=0;
#line 3060 "cplus.met"
                {
#line 3060 "cplus.met"
                    PPTREE _ptTree1=0,_ptRes1=0;
#line 3060 "cplus.met"
                    _ptRes1= MakeTree(IUNLONGLONG, 1);
#line 3060 "cplus.met"
                    {
#line 3060 "cplus.met"
                        PPTREE _ptTree2=0,_ptRes2=0;
#line 3060 "cplus.met"
                        _ptRes2= MakeTree(OCTAL, 1);
#line 3060 "cplus.met"
                        {
#line 3060 "cplus.met"
                            PPTREE _ptTree3=0,_ptRes3=0;
#line 3060 "cplus.met"
                            _ptRes3= MakeTree(INTEGER, 1);
#line 3060 "cplus.met"
                            (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3060 "cplus.met"
                            if ( ! TERM_OR_META(ULOCTAL,"ULOCTAL") || !(BUILD_TERM_META(_ptTree3))) {
#line 3060 "cplus.met"
                                MulFreeTree(7,_ptRes3,_ptTree3,_ptRes2,_ptTree2,_ptRes1,_ptTree1,_ptTree0);
                                TOKEN_EXIT(constan_exit,"ULOCTAL")
#line 3060 "cplus.met"
                            } else {
#line 3060 "cplus.met"
                                tokenAhead = 0 ;
#line 3060 "cplus.met"
                            }
#line 3060 "cplus.met"
                            ReplaceTree(_ptRes3, 1, _ptTree3);
#line 3060 "cplus.met"
                            _ptTree2=_ptRes3;
#line 3060 "cplus.met"
                        }
#line 3060 "cplus.met"
                        ReplaceTree(_ptRes2, 1, _ptTree2);
#line 3060 "cplus.met"
                        _ptTree1=_ptRes2;
#line 3060 "cplus.met"
                    }
#line 3060 "cplus.met"
                    ReplaceTree(_ptRes1, 1, _ptTree1);
#line 3060 "cplus.met"
                    _ptTree0=_ptRes1;
#line 3060 "cplus.met"
                }
#line 3060 "cplus.met"
                _retValue =_ptTree0;
#line 3060 "cplus.met"
                goto constan_ret;
#line 3060 "cplus.met"
            }
#line 3060 "cplus.met"
            break;
#line 3060 "cplus.met"
#line 3062 "cplus.met"
        case FLOATVAL : 
#line 3062 "cplus.met"
#line 3062 "cplus.met"
            {
#line 3062 "cplus.met"
                PPTREE _ptTree0=0;
#line 3062 "cplus.met"
                {
#line 3062 "cplus.met"
                    PPTREE _ptTree1=0,_ptRes1=0;
#line 3062 "cplus.met"
                    _ptRes1= MakeTree(FLOAT, 1);
#line 3062 "cplus.met"
                    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3062 "cplus.met"
                    if ( ! TERM_OR_META(FLOATVAL,"FLOATVAL") || !(BUILD_TERM_META(_ptTree1))) {
#line 3062 "cplus.met"
                        MulFreeTree(3,_ptRes1,_ptTree1,_ptTree0);
                        TOKEN_EXIT(constan_exit,"FLOATVAL")
#line 3062 "cplus.met"
                    } else {
#line 3062 "cplus.met"
                        tokenAhead = 0 ;
#line 3062 "cplus.met"
                    }
#line 3062 "cplus.met"
                    ReplaceTree(_ptRes1, 1, _ptTree1);
#line 3062 "cplus.met"
                    _ptTree0=_ptRes1;
#line 3062 "cplus.met"
                }
#line 3062 "cplus.met"
                _retValue =_ptTree0;
#line 3062 "cplus.met"
                goto constan_ret;
#line 3062 "cplus.met"
            }
#line 3062 "cplus.met"
            break;
#line 3062 "cplus.met"
#line 3063 "cplus.met"
        case CHARACT : 
#line 3063 "cplus.met"
#line 3063 "cplus.met"
            {
#line 3063 "cplus.met"
                PPTREE _ptTree0=0;
#line 3063 "cplus.met"
                {
#line 3063 "cplus.met"
                    PPTREE _ptTree1=0,_ptRes1=0;
#line 3063 "cplus.met"
                    _ptRes1= MakeTree(CHAR, 1);
#line 3063 "cplus.met"
                    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3063 "cplus.met"
                    if ( ! TERM_OR_META(CHARACT,"CHARACT") || !(BUILD_TERM_META(_ptTree1))) {
#line 3063 "cplus.met"
                        MulFreeTree(3,_ptRes1,_ptTree1,_ptTree0);
                        TOKEN_EXIT(constan_exit,"CHARACT")
#line 3063 "cplus.met"
                    } else {
#line 3063 "cplus.met"
                        tokenAhead = 0 ;
#line 3063 "cplus.met"
                    }
#line 3063 "cplus.met"
                    ReplaceTree(_ptRes1, 1, _ptTree1);
#line 3063 "cplus.met"
                    _ptTree0=_ptRes1;
#line 3063 "cplus.met"
                }
#line 3063 "cplus.met"
                _retValue =_ptTree0;
#line 3063 "cplus.met"
                goto constan_ret;
#line 3063 "cplus.met"
            }
#line 3063 "cplus.met"
            break;
#line 3063 "cplus.met"
        default :
#line 3063 "cplus.met"
            CASE_EXIT(constan_exit,"either INTEGER or LINTEGER or LLINTEGER or UINTEGER or ULINTEGER or ULLINTEGER or HEXA or LHEXA or LLHEXA or UHEXA or ULHEXA or ULLHEXA or OCTAL or LOCTAL or LLOCTAL or UOCTAL or ULOCTAL or ULLOCTAL or FLOATVAL or CHARACT")
#line 3063 "cplus.met"
            break;
#line 3063 "cplus.met"
    }
#line 3063 "cplus.met"
#line 3063 "cplus.met"
#line 3064 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 3064 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 3064 "cplus.met"
return((PPTREE) 0);
#line 3064 "cplus.met"

#line 3064 "cplus.met"
constan_exit :
#line 3064 "cplus.met"

#line 3064 "cplus.met"
    _Debug = TRACE_RULE("constan",TRACE_EXIT,(PPTREE)0);
#line 3064 "cplus.met"
    _funcLevel--;
#line 3064 "cplus.met"
    return((PPTREE) -1) ;
#line 3064 "cplus.met"

#line 3064 "cplus.met"
constan_ret :
#line 3064 "cplus.met"
    
#line 3064 "cplus.met"
    _Debug = TRACE_RULE("constan",TRACE_RETURN,_retValue);
#line 3064 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 3064 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 3064 "cplus.met"
    return _retValue ;
#line 3064 "cplus.met"
}
#line 3064 "cplus.met"

#line 3064 "cplus.met"
