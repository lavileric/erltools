/*************************************************************************/
/*                                                                       */
/*        Produced by MetaGen version 2.0  -    1989-2006                 */
/*       Syntaxic Analyzer Meta Generator developped by                  */
/*                  Eric Lavillonniere                                   */
/*                                                                       */
/*************************************************************************/

#include "token.h"
#include "cplus.h"


#line 2843 "cplus.met"
PPTREE cplus::relational_expression ( int error_free)
#line 2843 "cplus.met"
{
#line 2843 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 2843 "cplus.met"
    int _value,_nbPre = 0 ;
#line 2843 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 2843 "cplus.met"
    int _Debug = TRACE_RULE("relational_expression",TRACE_ENTER,(PPTREE)0);
#line 2843 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 2843 "cplus.met"
#line 2843 "cplus.met"
    PPTREE expTree = (PPTREE) 0;
#line 2843 "cplus.met"
#line 2845 "cplus.met"
    if ( (expTree=NQUICK_CALL(_Tak(shift_expression)(error_free), 134, cplus))== (PPTREE) -1 ) {
#line 2845 "cplus.met"
        MulFreeTree(1,expTree);
        PROG_EXIT(relational_expression_exit,"relational_expression")
#line 2845 "cplus.met"
    }
#line 2845 "cplus.met"
#line 2846 "cplus.met"
    while (((((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN( INFEEGAL,"<=")) || 
#line 2846 "cplus.met"
            ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN( SUPEEGAL,">="))) || 
#line 2846 "cplus.met"
           (((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN( SUPE,">")))) || 
#line 2846 "cplus.met"
          ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN( INFE,"<"))) { 
#line 2846 "cplus.met"
#line 2847 "cplus.met"
        (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 2847 "cplus.met"
        switch( lexEl.Value) {
#line 2847 "cplus.met"
#line 2848 "cplus.met"
            case INFEEGAL : 
#line 2848 "cplus.met"
                tokenAhead = 0 ;
#line 2848 "cplus.met"
                CommTerm();
#line 2848 "cplus.met"
#line 2848 "cplus.met"
                {
#line 2848 "cplus.met"
                    PPTREE _ptTree0=0,_ptRes0=0;
#line 2848 "cplus.met"
                    _ptRes0= MakeTree(LEQU, 2);
#line 2848 "cplus.met"
                    ReplaceTree(_ptRes0, 1, expTree );
#line 2848 "cplus.met"
                    if ( (_ptTree0=NQUICK_CALL(_Tak(shift_expression)(error_free), 134, cplus))== (PPTREE) -1 ) {
#line 2848 "cplus.met"
                        MulFreeTree(3,_ptRes0,_ptTree0,expTree);
                        PROG_EXIT(relational_expression_exit,"relational_expression")
#line 2848 "cplus.met"
                    }
#line 2848 "cplus.met"
                    ReplaceTree(_ptRes0, 2, _ptTree0);
#line 2848 "cplus.met"
                    expTree=_ptRes0;
#line 2848 "cplus.met"
                }
#line 2848 "cplus.met"
                break;
#line 2848 "cplus.met"
#line 2849 "cplus.met"
            case SUPEEGAL : 
#line 2849 "cplus.met"
                tokenAhead = 0 ;
#line 2849 "cplus.met"
                CommTerm();
#line 2849 "cplus.met"
#line 2849 "cplus.met"
                {
#line 2849 "cplus.met"
                    PPTREE _ptTree0=0,_ptRes0=0;
#line 2849 "cplus.met"
                    _ptRes0= MakeTree(GEQU, 2);
#line 2849 "cplus.met"
                    ReplaceTree(_ptRes0, 1, expTree );
#line 2849 "cplus.met"
                    if ( (_ptTree0=NQUICK_CALL(_Tak(shift_expression)(error_free), 134, cplus))== (PPTREE) -1 ) {
#line 2849 "cplus.met"
                        MulFreeTree(3,_ptRes0,_ptTree0,expTree);
                        PROG_EXIT(relational_expression_exit,"relational_expression")
#line 2849 "cplus.met"
                    }
#line 2849 "cplus.met"
                    ReplaceTree(_ptRes0, 2, _ptTree0);
#line 2849 "cplus.met"
                    expTree=_ptRes0;
#line 2849 "cplus.met"
                }
#line 2849 "cplus.met"
                break;
#line 2849 "cplus.met"
#line 2850 "cplus.met"
            case SUPE : 
#line 2850 "cplus.met"
                tokenAhead = 0 ;
#line 2850 "cplus.met"
                CommTerm();
#line 2850 "cplus.met"
#line 2850 "cplus.met"
                {
#line 2850 "cplus.met"
                    PPTREE _ptTree0=0,_ptRes0=0;
#line 2850 "cplus.met"
                    _ptRes0= MakeTree(GT, 2);
#line 2850 "cplus.met"
                    ReplaceTree(_ptRes0, 1, expTree );
#line 2850 "cplus.met"
                    if ( (_ptTree0=NQUICK_CALL(_Tak(shift_expression)(error_free), 134, cplus))== (PPTREE) -1 ) {
#line 2850 "cplus.met"
                        MulFreeTree(3,_ptRes0,_ptTree0,expTree);
                        PROG_EXIT(relational_expression_exit,"relational_expression")
#line 2850 "cplus.met"
                    }
#line 2850 "cplus.met"
                    ReplaceTree(_ptRes0, 2, _ptTree0);
#line 2850 "cplus.met"
                    expTree=_ptRes0;
#line 2850 "cplus.met"
                }
#line 2850 "cplus.met"
                break;
#line 2850 "cplus.met"
#line 2851 "cplus.met"
            case INFE : 
#line 2851 "cplus.met"
                tokenAhead = 0 ;
#line 2851 "cplus.met"
                CommTerm();
#line 2851 "cplus.met"
#line 2851 "cplus.met"
                {
#line 2851 "cplus.met"
                    PPTREE _ptTree0=0,_ptRes0=0;
#line 2851 "cplus.met"
                    _ptRes0= MakeTree(LT, 2);
#line 2851 "cplus.met"
                    ReplaceTree(_ptRes0, 1, expTree );
#line 2851 "cplus.met"
                    if ( (_ptTree0=NQUICK_CALL(_Tak(shift_expression)(error_free), 134, cplus))== (PPTREE) -1 ) {
#line 2851 "cplus.met"
                        MulFreeTree(3,_ptRes0,_ptTree0,expTree);
                        PROG_EXIT(relational_expression_exit,"relational_expression")
#line 2851 "cplus.met"
                    }
#line 2851 "cplus.met"
                    ReplaceTree(_ptRes0, 2, _ptTree0);
#line 2851 "cplus.met"
                    expTree=_ptRes0;
#line 2851 "cplus.met"
                }
#line 2851 "cplus.met"
                break;
#line 2851 "cplus.met"
            default :
#line 2851 "cplus.met"
                MulFreeTree(1,expTree);
                CASE_EXIT(relational_expression_exit,"either <= or >= or > or <")
#line 2851 "cplus.met"
                break;
#line 2851 "cplus.met"
        }
#line 2851 "cplus.met"
    } 
#line 2851 "cplus.met"
#line 2853 "cplus.met"
    {
#line 2853 "cplus.met"
        _retValue = expTree ;
#line 2853 "cplus.met"
        goto relational_expression_ret;
#line 2853 "cplus.met"
        
#line 2853 "cplus.met"
    }
#line 2853 "cplus.met"
#line 2853 "cplus.met"
#line 2853 "cplus.met"

#line 2854 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2854 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 2854 "cplus.met"
return((PPTREE) 0);
#line 2854 "cplus.met"

#line 2854 "cplus.met"
relational_expression_exit :
#line 2854 "cplus.met"

#line 2854 "cplus.met"
    _Debug = TRACE_RULE("relational_expression",TRACE_EXIT,(PPTREE)0);
#line 2854 "cplus.met"
    _funcLevel--;
#line 2854 "cplus.met"
    return((PPTREE) -1) ;
#line 2854 "cplus.met"

#line 2854 "cplus.met"
relational_expression_ret :
#line 2854 "cplus.met"
    
#line 2854 "cplus.met"
    _Debug = TRACE_RULE("relational_expression",TRACE_RETURN,_retValue);
#line 2854 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2854 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 2854 "cplus.met"
    return _retValue ;
#line 2854 "cplus.met"
}
#line 2854 "cplus.met"

#line 2854 "cplus.met"
#line 1562 "cplus.met"
PPTREE cplus::sc_specifier ( int error_free)
#line 1562 "cplus.met"
{
#line 1562 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 1562 "cplus.met"
    int _value,_nbPre = 0 ;
#line 1562 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 1562 "cplus.met"
    int _Debug = TRACE_RULE("sc_specifier",TRACE_ENTER,(PPTREE)0);
#line 1562 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 1562 "cplus.met"
#line 1563 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 1563 "cplus.met"
    switch( lexEl.Value) {
#line 1563 "cplus.met"
#line 1564 "cplus.met"
        case AUTO : 
#line 1564 "cplus.met"
#line 1564 "cplus.met"
            {
#line 1564 "cplus.met"
                PPTREE _ptTree0=0;
#line 1564 "cplus.met"
                (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 1564 "cplus.met"
                if (  !SEE_TOKEN( AUTO,"auto") || !(_ptTree0 = CommString(lexEl.string()))) {
#line 1564 "cplus.met"
                    MulFreeTree(1,_ptTree0);
                    TOKEN_EXIT(sc_specifier_exit,"auto")
#line 1564 "cplus.met"
                } else {
#line 1564 "cplus.met"
                    tokenAhead = 0 ;
#line 1564 "cplus.met"
                }
#line 1564 "cplus.met"
                _retValue =_ptTree0;
#line 1564 "cplus.met"
                goto sc_specifier_ret;
#line 1564 "cplus.met"
            }
#line 1564 "cplus.met"
            break;
#line 1564 "cplus.met"
#line 1565 "cplus.met"
        case STATIC : 
#line 1565 "cplus.met"
#line 1565 "cplus.met"
            {
#line 1565 "cplus.met"
                PPTREE _ptTree0=0;
#line 1565 "cplus.met"
                (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 1565 "cplus.met"
                if (  !SEE_TOKEN( STATIC,"static") || !(_ptTree0 = CommString(lexEl.string()))) {
#line 1565 "cplus.met"
                    MulFreeTree(1,_ptTree0);
                    TOKEN_EXIT(sc_specifier_exit,"static")
#line 1565 "cplus.met"
                } else {
#line 1565 "cplus.met"
                    tokenAhead = 0 ;
#line 1565 "cplus.met"
                }
#line 1565 "cplus.met"
                _retValue =_ptTree0;
#line 1565 "cplus.met"
                goto sc_specifier_ret;
#line 1565 "cplus.met"
            }
#line 1565 "cplus.met"
            break;
#line 1565 "cplus.met"
#line 1566 "cplus.met"
        case EXTERN : 
#line 1566 "cplus.met"
#line 1566 "cplus.met"
            {
#line 1566 "cplus.met"
                PPTREE _ptTree0=0;
#line 1566 "cplus.met"
                (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 1566 "cplus.met"
                if (  !SEE_TOKEN( EXTERN,"extern") || !(_ptTree0 = CommString(lexEl.string()))) {
#line 1566 "cplus.met"
                    MulFreeTree(1,_ptTree0);
                    TOKEN_EXIT(sc_specifier_exit,"extern")
#line 1566 "cplus.met"
                } else {
#line 1566 "cplus.met"
                    tokenAhead = 0 ;
#line 1566 "cplus.met"
                }
#line 1566 "cplus.met"
                _retValue =_ptTree0;
#line 1566 "cplus.met"
                goto sc_specifier_ret;
#line 1566 "cplus.met"
            }
#line 1566 "cplus.met"
            break;
#line 1566 "cplus.met"
#line 1567 "cplus.met"
        case REGISTER : 
#line 1567 "cplus.met"
#line 1567 "cplus.met"
            {
#line 1567 "cplus.met"
                PPTREE _ptTree0=0;
#line 1567 "cplus.met"
                (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 1567 "cplus.met"
                if (  !SEE_TOKEN( REGISTER,"register") || !(_ptTree0 = CommString(lexEl.string()))) {
#line 1567 "cplus.met"
                    MulFreeTree(1,_ptTree0);
                    TOKEN_EXIT(sc_specifier_exit,"register")
#line 1567 "cplus.met"
                } else {
#line 1567 "cplus.met"
                    tokenAhead = 0 ;
#line 1567 "cplus.met"
                }
#line 1567 "cplus.met"
                _retValue =_ptTree0;
#line 1567 "cplus.met"
                goto sc_specifier_ret;
#line 1567 "cplus.met"
            }
#line 1567 "cplus.met"
            break;
#line 1567 "cplus.met"
#line 1567 "cplus.met"
        default : 
#line 1567 "cplus.met"
#line 1567 "cplus.met"
            break;
#line 1567 "cplus.met"
    }
#line 1567 "cplus.met"
#line 1567 "cplus.met"
#line 1569 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1569 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 1569 "cplus.met"
return((PPTREE) 0);
#line 1569 "cplus.met"

#line 1569 "cplus.met"
sc_specifier_exit :
#line 1569 "cplus.met"

#line 1569 "cplus.met"
    _Debug = TRACE_RULE("sc_specifier",TRACE_EXIT,(PPTREE)0);
#line 1569 "cplus.met"
    _funcLevel--;
#line 1569 "cplus.met"
    return((PPTREE) -1) ;
#line 1569 "cplus.met"

#line 1569 "cplus.met"
sc_specifier_ret :
#line 1569 "cplus.met"
    
#line 1569 "cplus.met"
    _Debug = TRACE_RULE("sc_specifier",TRACE_RETURN,_retValue);
#line 1569 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1569 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 1569 "cplus.met"
    return _retValue ;
#line 1569 "cplus.met"
}
#line 1569 "cplus.met"

#line 1569 "cplus.met"
#line 2856 "cplus.met"
PPTREE cplus::shift_expression ( int error_free)
#line 2856 "cplus.met"
{
#line 2856 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 2856 "cplus.met"
    int _value,_nbPre = 0 ;
#line 2856 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 2856 "cplus.met"
    int _Debug = TRACE_RULE("shift_expression",TRACE_ENTER,(PPTREE)0);
#line 2856 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 2856 "cplus.met"
#line 2856 "cplus.met"
    PPTREE expTree = (PPTREE) 0;
#line 2856 "cplus.met"
#line 2858 "cplus.met"
    if ( (expTree=NQUICK_CALL(_Tak(additive_expression)(error_free), 3, cplus))== (PPTREE) -1 ) {
#line 2858 "cplus.met"
        MulFreeTree(1,expTree);
        PROG_EXIT(shift_expression_exit,"shift_expression")
#line 2858 "cplus.met"
    }
#line 2858 "cplus.met"
#line 2859 "cplus.met"
    while (((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN( INFEINFE,"<<")) || 
#line 2859 "cplus.met"
          ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN( SUPESUPE,">>"))) { 
#line 2859 "cplus.met"
#line 2860 "cplus.met"
        (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 2860 "cplus.met"
        switch( lexEl.Value) {
#line 2860 "cplus.met"
#line 2861 "cplus.met"
            case INFEINFE : 
#line 2861 "cplus.met"
                tokenAhead = 0 ;
#line 2861 "cplus.met"
                CommTerm();
#line 2861 "cplus.met"
#line 2861 "cplus.met"
                {
#line 2861 "cplus.met"
                    PPTREE _ptTree0=0,_ptRes0=0;
#line 2861 "cplus.met"
                    _ptRes0= MakeTree(LSHI, 2);
#line 2861 "cplus.met"
                    ReplaceTree(_ptRes0, 1, expTree );
#line 2861 "cplus.met"
                    if ( (_ptTree0=NQUICK_CALL(_Tak(additive_expression)(error_free), 3, cplus))== (PPTREE) -1 ) {
#line 2861 "cplus.met"
                        MulFreeTree(3,_ptRes0,_ptTree0,expTree);
                        PROG_EXIT(shift_expression_exit,"shift_expression")
#line 2861 "cplus.met"
                    }
#line 2861 "cplus.met"
                    ReplaceTree(_ptRes0, 2, _ptTree0);
#line 2861 "cplus.met"
                    expTree=_ptRes0;
#line 2861 "cplus.met"
                }
#line 2861 "cplus.met"
                break;
#line 2861 "cplus.met"
#line 2862 "cplus.met"
            case SUPESUPE : 
#line 2862 "cplus.met"
                tokenAhead = 0 ;
#line 2862 "cplus.met"
                CommTerm();
#line 2862 "cplus.met"
#line 2862 "cplus.met"
                {
#line 2862 "cplus.met"
                    PPTREE _ptTree0=0,_ptRes0=0;
#line 2862 "cplus.met"
                    _ptRes0= MakeTree(RSHI, 2);
#line 2862 "cplus.met"
                    ReplaceTree(_ptRes0, 1, expTree );
#line 2862 "cplus.met"
                    if ( (_ptTree0=NQUICK_CALL(_Tak(additive_expression)(error_free), 3, cplus))== (PPTREE) -1 ) {
#line 2862 "cplus.met"
                        MulFreeTree(3,_ptRes0,_ptTree0,expTree);
                        PROG_EXIT(shift_expression_exit,"shift_expression")
#line 2862 "cplus.met"
                    }
#line 2862 "cplus.met"
                    ReplaceTree(_ptRes0, 2, _ptTree0);
#line 2862 "cplus.met"
                    expTree=_ptRes0;
#line 2862 "cplus.met"
                }
#line 2862 "cplus.met"
                break;
#line 2862 "cplus.met"
            default :
#line 2862 "cplus.met"
                MulFreeTree(1,expTree);
                CASE_EXIT(shift_expression_exit,"either << or >>")
#line 2862 "cplus.met"
                break;
#line 2862 "cplus.met"
        }
#line 2862 "cplus.met"
    } 
#line 2862 "cplus.met"
#line 2864 "cplus.met"
    {
#line 2864 "cplus.met"
        _retValue = expTree ;
#line 2864 "cplus.met"
        goto shift_expression_ret;
#line 2864 "cplus.met"
        
#line 2864 "cplus.met"
    }
#line 2864 "cplus.met"
#line 2864 "cplus.met"
#line 2864 "cplus.met"

#line 2865 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2865 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 2865 "cplus.met"
return((PPTREE) 0);
#line 2865 "cplus.met"

#line 2865 "cplus.met"
shift_expression_exit :
#line 2865 "cplus.met"

#line 2865 "cplus.met"
    _Debug = TRACE_RULE("shift_expression",TRACE_EXIT,(PPTREE)0);
#line 2865 "cplus.met"
    _funcLevel--;
#line 2865 "cplus.met"
    return((PPTREE) -1) ;
#line 2865 "cplus.met"

#line 2865 "cplus.met"
shift_expression_ret :
#line 2865 "cplus.met"
    
#line 2865 "cplus.met"
    _Debug = TRACE_RULE("shift_expression",TRACE_RETURN,_retValue);
#line 2865 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2865 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 2865 "cplus.met"
    return _retValue ;
#line 2865 "cplus.met"
}
#line 2865 "cplus.met"

#line 2865 "cplus.met"
#line 2155 "cplus.met"
PPTREE cplus::short_long_int_char ( int error_free)
#line 2155 "cplus.met"
{
#line 2155 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 2155 "cplus.met"
    int _value,_nbPre = 0 ;
#line 2155 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 2155 "cplus.met"
    int _Debug = TRACE_RULE("short_long_int_char",TRACE_ENTER,(PPTREE)0);
#line 2155 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 2155 "cplus.met"
#line 2156 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 2156 "cplus.met"
    switch( lexEl.Value) {
#line 2156 "cplus.met"
#line 2157 "cplus.met"
        case INT : 
#line 2157 "cplus.met"
            tokenAhead = 0 ;
#line 2157 "cplus.met"
            CommTerm();
#line 2157 "cplus.met"
#line 2157 "cplus.met"
            {
#line 2157 "cplus.met"
                PPTREE _ptTree0=0;
#line 2157 "cplus.met"
                {
#line 2157 "cplus.met"
                    PPTREE _ptRes1=0;
#line 2157 "cplus.met"
                    _ptRes1= MakeTree(TINT, 0);
#line 2157 "cplus.met"
                    _ptTree0=_ptRes1;
#line 2157 "cplus.met"
                }
#line 2157 "cplus.met"
                _retValue =_ptTree0;
#line 2157 "cplus.met"
                goto short_long_int_char_ret;
#line 2157 "cplus.met"
            }
#line 2157 "cplus.met"
            break;
#line 2157 "cplus.met"
#line 2158 "cplus.met"
        case CHAR : 
#line 2158 "cplus.met"
            tokenAhead = 0 ;
#line 2158 "cplus.met"
            CommTerm();
#line 2158 "cplus.met"
#line 2158 "cplus.met"
            {
#line 2158 "cplus.met"
                PPTREE _ptTree0=0;
#line 2158 "cplus.met"
                {
#line 2158 "cplus.met"
                    PPTREE _ptRes1=0;
#line 2158 "cplus.met"
                    _ptRes1= MakeTree(TCHAR, 0);
#line 2158 "cplus.met"
                    _ptTree0=_ptRes1;
#line 2158 "cplus.met"
                }
#line 2158 "cplus.met"
                _retValue =_ptTree0;
#line 2158 "cplus.met"
                goto short_long_int_char_ret;
#line 2158 "cplus.met"
            }
#line 2158 "cplus.met"
            break;
#line 2158 "cplus.met"
#line 2159 "cplus.met"
        case LONG : 
#line 2159 "cplus.met"
#line 2159 "cplus.met"
            {
#line 2159 "cplus.met"
                PPTREE _ptTree0=0;
#line 2159 "cplus.met"
                if ( (_ptTree0=NQUICK_CALL(_Tak(long_type)(error_free), 97, cplus))== (PPTREE) -1 ) {
#line 2159 "cplus.met"
                    MulFreeTree(1,_ptTree0);
                    PROG_EXIT(short_long_int_char_exit,"short_long_int_char")
#line 2159 "cplus.met"
                }
#line 2159 "cplus.met"
                _retValue =_ptTree0;
#line 2159 "cplus.met"
                goto short_long_int_char_ret;
#line 2159 "cplus.met"
            }
#line 2159 "cplus.met"
            break;
#line 2159 "cplus.met"
#line 2160 "cplus.met"
        case SHORT : 
#line 2160 "cplus.met"
            tokenAhead = 0 ;
#line 2160 "cplus.met"
            CommTerm();
#line 2160 "cplus.met"
#line 2161 "cplus.met"
            if (inside_long){
#line 2161 "cplus.met"
#line 2162 "cplus.met"
                
#line 2162 "cplus.met"
                LEX_EXIT ("",0);
#line 2162 "cplus.met"
                goto short_long_int_char_exit;
#line 2162 "cplus.met"
#line 2162 "cplus.met"
            } else {
#line 2162 "cplus.met"
#line 2164 "cplus.met"
#line 2165 "cplus.met"
                (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 2165 "cplus.met"
                switch( lexEl.Value) {
#line 2165 "cplus.met"
#line 2166 "cplus.met"
                    case INT : 
#line 2166 "cplus.met"
                        tokenAhead = 0 ;
#line 2166 "cplus.met"
                        CommTerm();
#line 2166 "cplus.met"
#line 2166 "cplus.met"
                        {
#line 2166 "cplus.met"
                            PPTREE _ptTree0=0;
#line 2166 "cplus.met"
                            {
#line 2166 "cplus.met"
                                PPTREE _ptTree1=0,_ptRes1=0;
#line 2166 "cplus.met"
                                _ptRes1= MakeTree(TSHORT, 1);
#line 2166 "cplus.met"
                                {
#line 2166 "cplus.met"
                                    PPTREE _ptRes2=0;
#line 2166 "cplus.met"
                                    _ptRes2= MakeTree(TINT, 0);
#line 2166 "cplus.met"
                                    _ptTree1=_ptRes2;
#line 2166 "cplus.met"
                                }
#line 2166 "cplus.met"
                                ReplaceTree(_ptRes1, 1, _ptTree1);
#line 2166 "cplus.met"
                                _ptTree0=_ptRes1;
#line 2166 "cplus.met"
                            }
#line 2166 "cplus.met"
                            _retValue =_ptTree0;
#line 2166 "cplus.met"
                            goto short_long_int_char_ret;
#line 2166 "cplus.met"
                        }
#line 2166 "cplus.met"
                        break;
#line 2166 "cplus.met"
#line 2167 "cplus.met"
                    default : 
#line 2167 "cplus.met"
#line 2167 "cplus.met"
                        {
#line 2167 "cplus.met"
                            PPTREE _ptTree0=0;
#line 2167 "cplus.met"
                            {
#line 2167 "cplus.met"
                                PPTREE _ptRes1=0;
#line 2167 "cplus.met"
                                _ptRes1= MakeTree(TSHORT, 1);
#line 2167 "cplus.met"
                                _ptTree0=_ptRes1;
#line 2167 "cplus.met"
                            }
#line 2167 "cplus.met"
                            _retValue =_ptTree0;
#line 2167 "cplus.met"
                            goto short_long_int_char_ret;
#line 2167 "cplus.met"
                        }
#line 2167 "cplus.met"
                        break;
#line 2167 "cplus.met"
                }
#line 2167 "cplus.met"
#line 2167 "cplus.met"
            }
#line 2167 "cplus.met"
            break;
#line 2167 "cplus.met"
#line 2170 "cplus.met"
        case SIGNED : 
#line 2170 "cplus.met"
#line 2170 "cplus.met"
            {
#line 2170 "cplus.met"
                PPTREE _ptTree0=0;
#line 2170 "cplus.met"
                if ( (_ptTree0=NQUICK_CALL(_Tak(signed_type)(error_free), 136, cplus))== (PPTREE) -1 ) {
#line 2170 "cplus.met"
                    MulFreeTree(1,_ptTree0);
                    PROG_EXIT(short_long_int_char_exit,"short_long_int_char")
#line 2170 "cplus.met"
                }
#line 2170 "cplus.met"
                _retValue =_ptTree0;
#line 2170 "cplus.met"
                goto short_long_int_char_ret;
#line 2170 "cplus.met"
            }
#line 2170 "cplus.met"
            break;
#line 2170 "cplus.met"
#line 2171 "cplus.met"
        case UNSIGNED : 
#line 2171 "cplus.met"
#line 2171 "cplus.met"
            {
#line 2171 "cplus.met"
                PPTREE _ptTree0=0;
#line 2171 "cplus.met"
                if ( (_ptTree0=NQUICK_CALL(_Tak(unsigned_type)(error_free), 159, cplus))== (PPTREE) -1 ) {
#line 2171 "cplus.met"
                    MulFreeTree(1,_ptTree0);
                    PROG_EXIT(short_long_int_char_exit,"short_long_int_char")
#line 2171 "cplus.met"
                }
#line 2171 "cplus.met"
                _retValue =_ptTree0;
#line 2171 "cplus.met"
                goto short_long_int_char_ret;
#line 2171 "cplus.met"
            }
#line 2171 "cplus.met"
            break;
#line 2171 "cplus.met"
        default :
#line 2171 "cplus.met"
            CASE_EXIT(short_long_int_char_exit,"either int or char or long or short or signed or unsigned")
#line 2171 "cplus.met"
            break;
#line 2171 "cplus.met"
    }
#line 2171 "cplus.met"
#line 2171 "cplus.met"
#line 2172 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2172 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 2172 "cplus.met"
return((PPTREE) 0);
#line 2172 "cplus.met"

#line 2172 "cplus.met"
short_long_int_char_exit :
#line 2172 "cplus.met"

#line 2172 "cplus.met"
    _Debug = TRACE_RULE("short_long_int_char",TRACE_EXIT,(PPTREE)0);
#line 2172 "cplus.met"
    _funcLevel--;
#line 2172 "cplus.met"
    return((PPTREE) -1) ;
#line 2172 "cplus.met"

#line 2172 "cplus.met"
short_long_int_char_ret :
#line 2172 "cplus.met"
    
#line 2172 "cplus.met"
    _Debug = TRACE_RULE("short_long_int_char",TRACE_RETURN,_retValue);
#line 2172 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2172 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 2172 "cplus.met"
    return _retValue ;
#line 2172 "cplus.met"
}
#line 2172 "cplus.met"

#line 2172 "cplus.met"
#line 2175 "cplus.met"
PPTREE cplus::signed_type ( int error_free)
#line 2175 "cplus.met"
{
#line 2175 "cplus.met"
    int  _oldinside_signed = inside_signed;
#line 2175 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 2175 "cplus.met"
    int _value,_nbPre = 0 ;
#line 2175 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 2175 "cplus.met"
    int _Debug = TRACE_RULE("signed_type",TRACE_ENTER,(PPTREE)0);
#line 2175 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 2175 "cplus.met"
#line 2175 "cplus.met"
    PPTREE retTree = (PPTREE) 0;
#line 2175 "cplus.met"
#line 2177 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 2177 "cplus.met"
    if (  !SEE_TOKEN( SIGNED,"signed") || !(CommTerm(),1)) {
#line 2177 "cplus.met"
        MulFreeTree(1,retTree);
        TOKEN_EXIT(signed_type_exit,"signed")
#line 2177 "cplus.met"
    } else {
#line 2177 "cplus.met"
        tokenAhead = 0 ;
#line 2177 "cplus.met"
    }
#line 2177 "cplus.met"
#line 2178 "cplus.met"
    {
#line 2178 "cplus.met"
        inside_signed = 1 ;
#line 2178 "cplus.met"
#line 2179 "cplus.met"
#line 2180 "cplus.met"
        if (NPUSH_CALL_AFF_VERIF(retTree = ,_Tak(short_long_int_char), 135, cplus)){
#line 2180 "cplus.met"
#line 2181 "cplus.met"
            {
#line 2181 "cplus.met"
                PPTREE _ptTree0=0;
#line 2181 "cplus.met"
                {
#line 2181 "cplus.met"
                    PPTREE _ptRes1=0;
#line 2181 "cplus.met"
                    _ptRes1= MakeTree(TSIGNED, 1);
#line 2181 "cplus.met"
                    ReplaceTree(_ptRes1, 1, retTree );
#line 2181 "cplus.met"
                    _ptTree0=_ptRes1;
#line 2181 "cplus.met"
                }
#line 2181 "cplus.met"
                _retValue =_ptTree0;
#line 2181 "cplus.met"
                goto signed_type_ret;
#line 2181 "cplus.met"
            }
#line 2181 "cplus.met"
        } else {
#line 2181 "cplus.met"
#line 2183 "cplus.met"
            {
#line 2183 "cplus.met"
                PPTREE _ptTree0=0;
#line 2183 "cplus.met"
                {
#line 2183 "cplus.met"
                    PPTREE _ptRes1=0;
#line 2183 "cplus.met"
                    _ptRes1= MakeTree(TSIGNED, 1);
#line 2183 "cplus.met"
                    _ptTree0=_ptRes1;
#line 2183 "cplus.met"
                }
#line 2183 "cplus.met"
                _retValue =_ptTree0;
#line 2183 "cplus.met"
                goto signed_type_ret;
#line 2183 "cplus.met"
            }
#line 2183 "cplus.met"
        }
#line 2183 "cplus.met"
#line 2183 "cplus.met"
        inside_signed =  _oldinside_signed;
#line 2183 "cplus.met"
    }
#line 2183 "cplus.met"
#line 2183 "cplus.met"
#line 2184 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2184 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 2184 "cplus.met"
inside_signed =  _oldinside_signed;
#line 2184 "cplus.met"
return((PPTREE) 0);
#line 2184 "cplus.met"

#line 2184 "cplus.met"
signed_type_exit :
#line 2184 "cplus.met"

#line 2184 "cplus.met"
    _Debug = TRACE_RULE("signed_type",TRACE_EXIT,(PPTREE)0);
#line 2184 "cplus.met"
    _funcLevel--;
#line 2184 "cplus.met"
    inside_signed =  _oldinside_signed;
#line 2184 "cplus.met"
    return((PPTREE) -1) ;
#line 2184 "cplus.met"

#line 2184 "cplus.met"
signed_type_ret :
#line 2184 "cplus.met"
    
#line 2184 "cplus.met"
    _Debug = TRACE_RULE("signed_type",TRACE_RETURN,_retValue);
#line 2184 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2184 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 2184 "cplus.met"
    inside_signed =  _oldinside_signed;
#line 2184 "cplus.met"
    return _retValue ;
#line 2184 "cplus.met"
}
#line 2184 "cplus.met"

#line 2184 "cplus.met"
#line 1898 "cplus.met"
PPTREE cplus::simple_ident ( int error_free)
#line 1898 "cplus.met"
{
#line 1898 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 1898 "cplus.met"
    int _value,_nbPre = 0 ;
#line 1898 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 1898 "cplus.met"
    int _Debug = TRACE_RULE("simple_ident",TRACE_ENTER,(PPTREE)0);
#line 1898 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 1898 "cplus.met"
#line 1899 "cplus.met"
    {
#line 1899 "cplus.met"
        PPTREE _ptTree0=0;
#line 1899 "cplus.met"
        {
#line 1899 "cplus.met"
            PPTREE _ptTree1=0,_ptRes1=0;
#line 1899 "cplus.met"
            _ptRes1= MakeTree(IDENT, 1);
#line 1899 "cplus.met"
            (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 1899 "cplus.met"
            if ( ! TERM_OR_META(IDENT,"IDENT") || !(BUILD_TERM_META(_ptTree1))) {
#line 1899 "cplus.met"
                MulFreeTree(3,_ptRes1,_ptTree1,_ptTree0);
                TOKEN_EXIT(simple_ident_exit,"IDENT")
#line 1899 "cplus.met"
            } else {
#line 1899 "cplus.met"
                tokenAhead = 0 ;
#line 1899 "cplus.met"
            }
#line 1899 "cplus.met"
            ReplaceTree(_ptRes1, 1, _ptTree1);
#line 1899 "cplus.met"
            _ptTree0=_ptRes1;
#line 1899 "cplus.met"
        }
#line 1899 "cplus.met"
        _retValue =_ptTree0;
#line 1899 "cplus.met"
        goto simple_ident_ret;
#line 1899 "cplus.met"
    }
#line 1899 "cplus.met"
#line 1899 "cplus.met"
#line 1899 "cplus.met"

#line 1900 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1900 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 1900 "cplus.met"
return((PPTREE) 0);
#line 1900 "cplus.met"

#line 1900 "cplus.met"
simple_ident_exit :
#line 1900 "cplus.met"

#line 1900 "cplus.met"
    _Debug = TRACE_RULE("simple_ident",TRACE_EXIT,(PPTREE)0);
#line 1900 "cplus.met"
    _funcLevel--;
#line 1900 "cplus.met"
    return((PPTREE) -1) ;
#line 1900 "cplus.met"

#line 1900 "cplus.met"
simple_ident_ret :
#line 1900 "cplus.met"
    
#line 1900 "cplus.met"
    _Debug = TRACE_RULE("simple_ident",TRACE_RETURN,_retValue);
#line 1900 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1900 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 1900 "cplus.met"
    return _retValue ;
#line 1900 "cplus.met"
}
#line 1900 "cplus.met"

#line 1900 "cplus.met"
#line 2126 "cplus.met"
PPTREE cplus::simple_type ( int error_free)
#line 2126 "cplus.met"
{
#line 2126 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 2126 "cplus.met"
    int _value,_nbPre = 0 ;
#line 2126 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 2126 "cplus.met"
    int _Debug = TRACE_RULE("simple_type",TRACE_ENTER,(PPTREE)0);
#line 2126 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 2126 "cplus.met"
#line 2126 "cplus.met"
    PPTREE valTree = (PPTREE) 0;
#line 2126 "cplus.met"
#line 2128 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 2128 "cplus.met"
    switch( lexEl.Value) {
#line 2128 "cplus.met"
#line 2129 "cplus.met"
        case TYPENAME : 
#line 2129 "cplus.met"
            tokenAhead = 0 ;
#line 2129 "cplus.met"
            CommTerm();
#line 2129 "cplus.met"
#line 2130 "cplus.met"
            if ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN(POINPOINPOIN,"...") && (tokenAhead = 0,CommTerm(),1)){
#line 2130 "cplus.met"
#line 2131 "cplus.met"
                {
#line 2131 "cplus.met"
                    PPTREE _ptTree0=0;
#line 2131 "cplus.met"
                    {
#line 2131 "cplus.met"
                        PPTREE _ptTree1=0,_ptRes1=0;
#line 2131 "cplus.met"
                        _ptRes1= MakeTree(TYPENAME, 1);
#line 2131 "cplus.met"
                        {
#line 2131 "cplus.met"
                            PPTREE _ptTree2=0,_ptRes2=0;
#line 2131 "cplus.met"
                            _ptRes2= MakeTree(TYP_VARIADIC, 1);
#line 2131 "cplus.met"
                            {
#line 2131 "cplus.met"
                                PPTREE _ptTree3=0,_ptRes3=0;
#line 2131 "cplus.met"
                                _ptRes3= MakeTree(TIDENT, 1);
#line 2131 "cplus.met"
                                if ( (_ptTree3=NQUICK_CALL(_Tak(complete_class_name)(error_free), 32, cplus))== (PPTREE) -1 ) {
#line 2131 "cplus.met"
                                    MulFreeTree(8,_ptRes3,_ptTree3,_ptRes2,_ptTree2,_ptRes1,_ptTree1,_ptTree0,valTree);
                                    PROG_EXIT(simple_type_exit,"simple_type")
#line 2131 "cplus.met"
                                }
#line 2131 "cplus.met"
                                ReplaceTree(_ptRes3, 1, _ptTree3);
#line 2131 "cplus.met"
                                _ptTree2=_ptRes3;
#line 2131 "cplus.met"
                            }
#line 2131 "cplus.met"
                            ReplaceTree(_ptRes2, 1, _ptTree2);
#line 2131 "cplus.met"
                            _ptTree1=_ptRes2;
#line 2131 "cplus.met"
                        }
#line 2131 "cplus.met"
                        ReplaceTree(_ptRes1, 1, _ptTree1);
#line 2131 "cplus.met"
                        _ptTree0=_ptRes1;
#line 2131 "cplus.met"
                    }
#line 2131 "cplus.met"
                    _retValue =_ptTree0;
#line 2131 "cplus.met"
                    goto simple_type_ret;
#line 2131 "cplus.met"
                }
#line 2131 "cplus.met"
            } else {
#line 2131 "cplus.met"
#line 2133 "cplus.met"
                {
#line 2133 "cplus.met"
                    PPTREE _ptTree0=0;
#line 2133 "cplus.met"
                    {
#line 2133 "cplus.met"
                        PPTREE _ptTree1=0,_ptRes1=0;
#line 2133 "cplus.met"
                        _ptRes1= MakeTree(TYPENAME, 1);
#line 2133 "cplus.met"
                        {
#line 2133 "cplus.met"
                            PPTREE _ptTree2=0,_ptRes2=0;
#line 2133 "cplus.met"
                            _ptRes2= MakeTree(TIDENT, 1);
#line 2133 "cplus.met"
                            if ( (_ptTree2=NQUICK_CALL(_Tak(complete_class_name)(error_free), 32, cplus))== (PPTREE) -1 ) {
#line 2133 "cplus.met"
                                MulFreeTree(6,_ptRes2,_ptTree2,_ptRes1,_ptTree1,_ptTree0,valTree);
                                PROG_EXIT(simple_type_exit,"simple_type")
#line 2133 "cplus.met"
                            }
#line 2133 "cplus.met"
                            ReplaceTree(_ptRes2, 1, _ptTree2);
#line 2133 "cplus.met"
                            _ptTree1=_ptRes2;
#line 2133 "cplus.met"
                        }
#line 2133 "cplus.met"
                        ReplaceTree(_ptRes1, 1, _ptTree1);
#line 2133 "cplus.met"
                        _ptTree0=_ptRes1;
#line 2133 "cplus.met"
                    }
#line 2133 "cplus.met"
                    _retValue =_ptTree0;
#line 2133 "cplus.met"
                    goto simple_type_ret;
#line 2133 "cplus.met"
                }
#line 2133 "cplus.met"
            }
#line 2133 "cplus.met"
            break;
#line 2133 "cplus.met"
#line 2134 "cplus.met"
        case CLASS : 
#line 2134 "cplus.met"
            tokenAhead = 0 ;
#line 2134 "cplus.met"
            CommTerm();
#line 2134 "cplus.met"
#line 2134 "cplus.met"
            {
#line 2134 "cplus.met"
                PPTREE _ptTree0=0;
#line 2134 "cplus.met"
                {
#line 2134 "cplus.met"
                    PPTREE _ptTree1=0,_ptRes1=0;
#line 2134 "cplus.met"
                    _ptRes1= MakeTree(CLASSNAME, 1);
#line 2134 "cplus.met"
                    {
#line 2134 "cplus.met"
                        PPTREE _ptTree2=0,_ptRes2=0;
#line 2134 "cplus.met"
                        _ptRes2= MakeTree(TIDENT, 1);
#line 2134 "cplus.met"
                        if ( (_ptTree2=NQUICK_CALL(_Tak(complete_class_name)(error_free), 32, cplus))== (PPTREE) -1 ) {
#line 2134 "cplus.met"
                            MulFreeTree(6,_ptRes2,_ptTree2,_ptRes1,_ptTree1,_ptTree0,valTree);
                            PROG_EXIT(simple_type_exit,"simple_type")
#line 2134 "cplus.met"
                        }
#line 2134 "cplus.met"
                        ReplaceTree(_ptRes2, 1, _ptTree2);
#line 2134 "cplus.met"
                        _ptTree1=_ptRes2;
#line 2134 "cplus.met"
                    }
#line 2134 "cplus.met"
                    ReplaceTree(_ptRes1, 1, _ptTree1);
#line 2134 "cplus.met"
                    _ptTree0=_ptRes1;
#line 2134 "cplus.met"
                }
#line 2134 "cplus.met"
                _retValue =_ptTree0;
#line 2134 "cplus.met"
                goto simple_type_ret;
#line 2134 "cplus.met"
            }
#line 2134 "cplus.met"
            break;
#line 2134 "cplus.met"
#line 2135 "cplus.met"
        case DECLTYPE : 
#line 2135 "cplus.met"
            tokenAhead = 0 ;
#line 2135 "cplus.met"
            CommTerm();
#line 2135 "cplus.met"
#line 2136 "cplus.met"
#line 2137 "cplus.met"
            (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 2137 "cplus.met"
            if (  !SEE_TOKEN( POUV,"(") || !(CommTerm(),1)) {
#line 2137 "cplus.met"
                MulFreeTree(1,valTree);
                TOKEN_EXIT(simple_type_exit,"(")
#line 2137 "cplus.met"
            } else {
#line 2137 "cplus.met"
                tokenAhead = 0 ;
#line 2137 "cplus.met"
            }
#line 2137 "cplus.met"
#line 2138 "cplus.met"
            if ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN(AUTO,"auto") && (tokenAhead = 0,CommTerm(),1)){
#line 2138 "cplus.met"
#line 2139 "cplus.met"
                {
#line 2139 "cplus.met"
                    PPTREE _ptTree0=0,_ptRes0=0;
#line 2139 "cplus.met"
                    _ptRes0= MakeTree(DECL_TYPE, 1);
#line 2139 "cplus.met"
                    {
#line 2139 "cplus.met"
                        PPTREE _ptRes1=0;
#line 2139 "cplus.met"
                        _ptRes1= MakeTree(AUTO, 0);
#line 2139 "cplus.met"
                        _ptTree0=_ptRes1;
#line 2139 "cplus.met"
                    }
#line 2139 "cplus.met"
                    ReplaceTree(_ptRes0, 1, _ptTree0);
#line 2139 "cplus.met"
                    valTree=_ptRes0;
#line 2139 "cplus.met"
                }
#line 2139 "cplus.met"
            } else {
#line 2139 "cplus.met"
#line 2141 "cplus.met"
                {
#line 2141 "cplus.met"
                    PPTREE _ptTree0=0,_ptRes0=0;
#line 2141 "cplus.met"
                    _ptRes0= MakeTree(DECL_TYPE, 1);
#line 2141 "cplus.met"
                    if ( (_ptTree0=NQUICK_CALL(_Tak(postfix_expression)(error_free), 115, cplus))== (PPTREE) -1 ) {
#line 2141 "cplus.met"
                        MulFreeTree(3,_ptRes0,_ptTree0,valTree);
                        PROG_EXIT(simple_type_exit,"simple_type")
#line 2141 "cplus.met"
                    }
#line 2141 "cplus.met"
                    ReplaceTree(_ptRes0, 1, _ptTree0);
#line 2141 "cplus.met"
                    valTree=_ptRes0;
#line 2141 "cplus.met"
                }
#line 2141 "cplus.met"
            }
#line 2141 "cplus.met"
#line 2142 "cplus.met"
            (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 2142 "cplus.met"
            if (  !SEE_TOKEN( PFER,")") || !(CommTerm(),1)) {
#line 2142 "cplus.met"
                MulFreeTree(1,valTree);
                TOKEN_EXIT(simple_type_exit,")")
#line 2142 "cplus.met"
            } else {
#line 2142 "cplus.met"
                tokenAhead = 0 ;
#line 2142 "cplus.met"
            }
#line 2142 "cplus.met"
#line 2143 "cplus.met"
            {
#line 2143 "cplus.met"
                _retValue = valTree ;
#line 2143 "cplus.met"
                goto simple_type_ret;
#line 2143 "cplus.met"
                
#line 2143 "cplus.met"
            }
#line 2143 "cplus.met"
#line 2143 "cplus.met"
            break;
#line 2143 "cplus.met"
#line 2145 "cplus.met"
        case AUTO : 
#line 2145 "cplus.met"
            tokenAhead = 0 ;
#line 2145 "cplus.met"
            CommTerm();
#line 2145 "cplus.met"
#line 2145 "cplus.met"
            {
#line 2145 "cplus.met"
                PPTREE _ptTree0=0;
#line 2145 "cplus.met"
                {
#line 2145 "cplus.met"
                    PPTREE _ptRes1=0;
#line 2145 "cplus.met"
                    _ptRes1= MakeTree(AUTO, 0);
#line 2145 "cplus.met"
                    _ptTree0=_ptRes1;
#line 2145 "cplus.met"
                }
#line 2145 "cplus.met"
                _retValue =_ptTree0;
#line 2145 "cplus.met"
                goto simple_type_ret;
#line 2145 "cplus.met"
            }
#line 2145 "cplus.met"
            break;
#line 2145 "cplus.met"
#line 2146 "cplus.met"
        case DOUBLE : 
#line 2146 "cplus.met"
            tokenAhead = 0 ;
#line 2146 "cplus.met"
            CommTerm();
#line 2146 "cplus.met"
#line 2146 "cplus.met"
            {
#line 2146 "cplus.met"
                PPTREE _ptTree0=0;
#line 2146 "cplus.met"
                {
#line 2146 "cplus.met"
                    PPTREE _ptRes1=0;
#line 2146 "cplus.met"
                    _ptRes1= MakeTree(TDOUBLE, 0);
#line 2146 "cplus.met"
                    _ptTree0=_ptRes1;
#line 2146 "cplus.met"
                }
#line 2146 "cplus.met"
                _retValue =_ptTree0;
#line 2146 "cplus.met"
                goto simple_type_ret;
#line 2146 "cplus.met"
            }
#line 2146 "cplus.met"
            break;
#line 2146 "cplus.met"
#line 2147 "cplus.met"
        case FLOAT : 
#line 2147 "cplus.met"
            tokenAhead = 0 ;
#line 2147 "cplus.met"
            CommTerm();
#line 2147 "cplus.met"
#line 2147 "cplus.met"
            {
#line 2147 "cplus.met"
                PPTREE _ptTree0=0;
#line 2147 "cplus.met"
                {
#line 2147 "cplus.met"
                    PPTREE _ptRes1=0;
#line 2147 "cplus.met"
                    _ptRes1= MakeTree(TFLOAT, 0);
#line 2147 "cplus.met"
                    _ptTree0=_ptRes1;
#line 2147 "cplus.met"
                }
#line 2147 "cplus.met"
                _retValue =_ptTree0;
#line 2147 "cplus.met"
                goto simple_type_ret;
#line 2147 "cplus.met"
            }
#line 2147 "cplus.met"
            break;
#line 2147 "cplus.met"
#line 2148 "cplus.met"
        case VOID : 
#line 2148 "cplus.met"
            tokenAhead = 0 ;
#line 2148 "cplus.met"
            CommTerm();
#line 2148 "cplus.met"
#line 2148 "cplus.met"
            {
#line 2148 "cplus.met"
                PPTREE _ptTree0=0;
#line 2148 "cplus.met"
                {
#line 2148 "cplus.met"
                    PPTREE _ptRes1=0;
#line 2148 "cplus.met"
                    _ptRes1= MakeTree(VOID, 0);
#line 2148 "cplus.met"
                    _ptTree0=_ptRes1;
#line 2148 "cplus.met"
                }
#line 2148 "cplus.met"
                _retValue =_ptTree0;
#line 2148 "cplus.met"
                goto simple_type_ret;
#line 2148 "cplus.met"
            }
#line 2148 "cplus.met"
            break;
#line 2148 "cplus.met"
#line 2149 "cplus.met"
        case DPOIDPOI : 
#line 2149 "cplus.met"
#line 2149 "cplus.met"
            {
#line 2149 "cplus.met"
                PPTREE _ptTree0=0;
#line 2149 "cplus.met"
                {
#line 2149 "cplus.met"
                    PPTREE _ptTree1=0,_ptRes1=0;
#line 2149 "cplus.met"
                    _ptRes1= MakeTree(TIDENT, 1);
#line 2149 "cplus.met"
                    if ( (_ptTree1=NQUICK_CALL(_Tak(complete_class_name)(error_free), 32, cplus))== (PPTREE) -1 ) {
#line 2149 "cplus.met"
                        MulFreeTree(4,_ptRes1,_ptTree1,_ptTree0,valTree);
                        PROG_EXIT(simple_type_exit,"simple_type")
#line 2149 "cplus.met"
                    }
#line 2149 "cplus.met"
                    ReplaceTree(_ptRes1, 1, _ptTree1);
#line 2149 "cplus.met"
                    _ptTree0=_ptRes1;
#line 2149 "cplus.met"
                }
#line 2149 "cplus.met"
                _retValue =_ptTree0;
#line 2149 "cplus.met"
                goto simple_type_ret;
#line 2149 "cplus.met"
            }
#line 2149 "cplus.met"
            break;
#line 2149 "cplus.met"
#line 2150 "cplus.met"
        case META : 
#line 2150 "cplus.met"
        case IDENT : 
#line 2150 "cplus.met"
#line 2150 "cplus.met"
            {
#line 2150 "cplus.met"
                PPTREE _ptTree0=0;
#line 2150 "cplus.met"
                {
#line 2150 "cplus.met"
                    PPTREE _ptTree1=0,_ptRes1=0;
#line 2150 "cplus.met"
                    _ptRes1= MakeTree(TIDENT, 1);
#line 2150 "cplus.met"
                    if ( (_ptTree1=NQUICK_CALL(_Tak(complete_class_name)(error_free), 32, cplus))== (PPTREE) -1 ) {
#line 2150 "cplus.met"
                        MulFreeTree(4,_ptRes1,_ptTree1,_ptTree0,valTree);
                        PROG_EXIT(simple_type_exit,"simple_type")
#line 2150 "cplus.met"
                    }
#line 2150 "cplus.met"
                    ReplaceTree(_ptRes1, 1, _ptTree1);
#line 2150 "cplus.met"
                    _ptTree0=_ptRes1;
#line 2150 "cplus.met"
                }
#line 2150 "cplus.met"
                _retValue =_ptTree0;
#line 2150 "cplus.met"
                goto simple_type_ret;
#line 2150 "cplus.met"
            }
#line 2150 "cplus.met"
            break;
#line 2150 "cplus.met"
#line 2151 "cplus.met"
        default : 
#line 2151 "cplus.met"
#line 2151 "cplus.met"
            {
#line 2151 "cplus.met"
                PPTREE _ptTree0=0;
#line 2151 "cplus.met"
                if ( (_ptTree0=NQUICK_CALL(_Tak(short_long_int_char)(error_free), 135, cplus))== (PPTREE) -1 ) {
#line 2151 "cplus.met"
                    MulFreeTree(2,_ptTree0,valTree);
                    PROG_EXIT(simple_type_exit,"simple_type")
#line 2151 "cplus.met"
                }
#line 2151 "cplus.met"
                _retValue =_ptTree0;
#line 2151 "cplus.met"
                goto simple_type_ret;
#line 2151 "cplus.met"
            }
#line 2151 "cplus.met"
            break;
#line 2151 "cplus.met"
    }
#line 2151 "cplus.met"
#line 2151 "cplus.met"
#line 2152 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2152 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 2152 "cplus.met"
return((PPTREE) 0);
#line 2152 "cplus.met"

#line 2152 "cplus.met"
simple_type_exit :
#line 2152 "cplus.met"

#line 2152 "cplus.met"
    _Debug = TRACE_RULE("simple_type",TRACE_EXIT,(PPTREE)0);
#line 2152 "cplus.met"
    _funcLevel--;
#line 2152 "cplus.met"
    return((PPTREE) -1) ;
#line 2152 "cplus.met"

#line 2152 "cplus.met"
simple_type_ret :
#line 2152 "cplus.met"
    
#line 2152 "cplus.met"
    _Debug = TRACE_RULE("simple_type",TRACE_RETURN,_retValue);
#line 2152 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2152 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 2152 "cplus.met"
    return _retValue ;
#line 2152 "cplus.met"
}
#line 2152 "cplus.met"

#line 2152 "cplus.met"
#line 3051 "cplus.met"
PPTREE cplus::simple_type_name ( int error_free)
#line 3051 "cplus.met"
{
#line 3051 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 3051 "cplus.met"
    int _value,_nbPre = 0 ;
#line 3051 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 3051 "cplus.met"
    int _Debug = TRACE_RULE("simple_type_name",TRACE_ENTER,(PPTREE)0);
#line 3051 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 3051 "cplus.met"
#line 3052 "cplus.met"
    if (! ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN( IDENT,"IDENT"))){
#line 3052 "cplus.met"
#line 3053 "cplus.met"
        {
#line 3053 "cplus.met"
            PPTREE _ptTree0=0;
#line 3053 "cplus.met"
            if ( (_ptTree0=NQUICK_CALL(_Tak(simple_type)(error_free), 138, cplus))== (PPTREE) -1 ) {
#line 3053 "cplus.met"
                MulFreeTree(1,_ptTree0);
                PROG_EXIT(simple_type_name_exit,"simple_type_name")
#line 3053 "cplus.met"
            }
#line 3053 "cplus.met"
            _retValue =_ptTree0;
#line 3053 "cplus.met"
            goto simple_type_name_ret;
#line 3053 "cplus.met"
        }
#line 3053 "cplus.met"
    } else {
#line 3053 "cplus.met"
#line 3055 "cplus.met"
        
#line 3055 "cplus.met"
        LEX_EXIT ("",0);
#line 3055 "cplus.met"
        goto simple_type_name_exit;
#line 3055 "cplus.met"
    }
#line 3055 "cplus.met"
#line 3055 "cplus.met"
#line 3055 "cplus.met"

#line 3056 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 3056 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 3056 "cplus.met"
return((PPTREE) 0);
#line 3056 "cplus.met"

#line 3056 "cplus.met"
simple_type_name_exit :
#line 3056 "cplus.met"

#line 3056 "cplus.met"
    _Debug = TRACE_RULE("simple_type_name",TRACE_EXIT,(PPTREE)0);
#line 3056 "cplus.met"
    _funcLevel--;
#line 3056 "cplus.met"
    return((PPTREE) -1) ;
#line 3056 "cplus.met"

#line 3056 "cplus.met"
simple_type_name_ret :
#line 3056 "cplus.met"
    
#line 3056 "cplus.met"
    _Debug = TRACE_RULE("simple_type_name",TRACE_RETURN,_retValue);
#line 3056 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 3056 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 3056 "cplus.met"
    return _retValue ;
#line 3056 "cplus.met"
}
#line 3056 "cplus.met"

#line 3056 "cplus.met"
#line 2917 "cplus.met"
PPTREE cplus::sizeof_type ( int error_free)
#line 2917 "cplus.met"
{
#line 2917 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 2917 "cplus.met"
    int _value,_nbPre = 0 ;
#line 2917 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 2917 "cplus.met"
    int _Debug = TRACE_RULE("sizeof_type",TRACE_ENTER,(PPTREE)0);
#line 2917 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 2917 "cplus.met"
#line 2917 "cplus.met"
    PPTREE expTree = (PPTREE) 0;
#line 2917 "cplus.met"
#line 2919 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 2919 "cplus.met"
    if (  !SEE_TOKEN( POUV,"(") || !(CommTerm(),1)) {
#line 2919 "cplus.met"
        MulFreeTree(1,expTree);
        TOKEN_EXIT(sizeof_type_exit,"(")
#line 2919 "cplus.met"
    } else {
#line 2919 "cplus.met"
        tokenAhead = 0 ;
#line 2919 "cplus.met"
    }
#line 2919 "cplus.met"
#line 2920 "cplus.met"
    if ( (expTree=NQUICK_CALL(_Tak(type_name)(error_free), 154, cplus))== (PPTREE) -1 ) {
#line 2920 "cplus.met"
        MulFreeTree(1,expTree);
        PROG_EXIT(sizeof_type_exit,"sizeof_type")
#line 2920 "cplus.met"
    }
#line 2920 "cplus.met"
#line 2921 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 2921 "cplus.met"
    if (  !SEE_TOKEN( PFER,")") || !(CommTerm(),1)) {
#line 2921 "cplus.met"
        MulFreeTree(1,expTree);
        TOKEN_EXIT(sizeof_type_exit,")")
#line 2921 "cplus.met"
    } else {
#line 2921 "cplus.met"
        tokenAhead = 0 ;
#line 2921 "cplus.met"
    }
#line 2921 "cplus.met"
#line 2922 "cplus.met"
    {
#line 2922 "cplus.met"
        _retValue = expTree ;
#line 2922 "cplus.met"
        goto sizeof_type_ret;
#line 2922 "cplus.met"
        
#line 2922 "cplus.met"
    }
#line 2922 "cplus.met"
#line 2922 "cplus.met"
#line 2922 "cplus.met"

#line 2923 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2923 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 2923 "cplus.met"
return((PPTREE) 0);
#line 2923 "cplus.met"

#line 2923 "cplus.met"
sizeof_type_exit :
#line 2923 "cplus.met"

#line 2923 "cplus.met"
    _Debug = TRACE_RULE("sizeof_type",TRACE_EXIT,(PPTREE)0);
#line 2923 "cplus.met"
    _funcLevel--;
#line 2923 "cplus.met"
    return((PPTREE) -1) ;
#line 2923 "cplus.met"

#line 2923 "cplus.met"
sizeof_type_ret :
#line 2923 "cplus.met"
    
#line 2923 "cplus.met"
    _Debug = TRACE_RULE("sizeof_type",TRACE_RETURN,_retValue);
#line 2923 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2923 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 2923 "cplus.met"
    return _retValue ;
#line 2923 "cplus.met"
}
#line 2923 "cplus.met"

#line 2923 "cplus.met"
#line 989 "cplus.met"
PPTREE cplus::stat_all ( int error_free)
#line 989 "cplus.met"
{
#line 989 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 989 "cplus.met"
    int _value,_nbPre = 0 ;
#line 989 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 989 "cplus.met"
    int _Debug = TRACE_RULE("stat_all",TRACE_ENTER,(PPTREE)0);
#line 989 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 989 "cplus.met"
#line 989 "cplus.met"
    PPTREE stat = (PPTREE) 0;
#line 989 "cplus.met"
#line 991 "cplus.met"
    if (((((NPUSH_CALL_AFF_VERIF(stat = ,_Tak(statement), 146, cplus)) || 
#line 991 "cplus.met"
          (NPUSH_CALL_AFF_VERIF(stat = ,_Tak(data_declaration), 45, cplus))) || 
#line 991 "cplus.met"
         (NPUSH_CALL_AFF_VERIF(stat = ,_Tak(stat_dir), 142, cplus))) || 
#line 991 "cplus.met"
        (NPUSH_CALL_AFF_VERIF(stat = ,_Tak(exception), 63, cplus))) || 
#line 991 "cplus.met"
       (NPUSH_CALL_AFF_VERIF(stat = ,_Tak(ext_data_declaration), 76, cplus))){
#line 991 "cplus.met"
#line 992 "cplus.met"
        {
#line 992 "cplus.met"
            _retValue = stat ;
#line 992 "cplus.met"
            goto stat_all_ret;
#line 992 "cplus.met"
            
#line 992 "cplus.met"
        }
#line 992 "cplus.met"
    } else {
#line 992 "cplus.met"
#line 994 "cplus.met"
        {
#line 994 "cplus.met"
            PPTREE _ptTree0=0;
#line 994 "cplus.met"
            if ( (_ptTree0=NQUICK_CALL(_Tak(statement)(error_free), 146, cplus))== (PPTREE) -1 ) {
#line 994 "cplus.met"
                MulFreeTree(2,_ptTree0,stat);
                PROG_EXIT(stat_all_exit,"stat_all")
#line 994 "cplus.met"
            }
#line 994 "cplus.met"
            _retValue =_ptTree0;
#line 994 "cplus.met"
            goto stat_all_ret;
#line 994 "cplus.met"
        }
#line 994 "cplus.met"
    }
#line 994 "cplus.met"
#line 994 "cplus.met"
#line 994 "cplus.met"

#line 995 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 995 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 995 "cplus.met"
return((PPTREE) 0);
#line 995 "cplus.met"

#line 995 "cplus.met"
stat_all_exit :
#line 995 "cplus.met"

#line 995 "cplus.met"
    _Debug = TRACE_RULE("stat_all",TRACE_EXIT,(PPTREE)0);
#line 995 "cplus.met"
    _funcLevel--;
#line 995 "cplus.met"
    return((PPTREE) -1) ;
#line 995 "cplus.met"

#line 995 "cplus.met"
stat_all_ret :
#line 995 "cplus.met"
    
#line 995 "cplus.met"
    _Debug = TRACE_RULE("stat_all",TRACE_RETURN,_retValue);
#line 995 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 995 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 995 "cplus.met"
    return _retValue ;
#line 995 "cplus.met"
}
#line 995 "cplus.met"

#line 995 "cplus.met"
#line 1261 "cplus.met"
PPTREE cplus::stat_dir ( int error_free)
#line 1261 "cplus.met"
{
#line 1261 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 1261 "cplus.met"
    int _value,_nbPre = 0 ;
#line 1261 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 1261 "cplus.met"
    int _Debug = TRACE_RULE("stat_dir",TRACE_ENTER,(PPTREE)0);
#line 1261 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 1261 "cplus.met"
#line 1261 "cplus.met"
    PPTREE retTree = (PPTREE) 0;
#line 1261 "cplus.met"
#line 1263 "cplus.met"
    if (NPUSH_CALL_AFF_VERIF(retTree = ,_Tak(directive), 57, cplus)){
#line 1263 "cplus.met"
#line 1264 "cplus.met"
        {
#line 1264 "cplus.met"
            _retValue = retTree ;
#line 1264 "cplus.met"
            goto stat_dir_ret;
#line 1264 "cplus.met"
            
#line 1264 "cplus.met"
        }
#line 1264 "cplus.met"
    }
#line 1264 "cplus.met"
#line 1265 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 1265 "cplus.met"
    switch( lexEl.Value) {
#line 1265 "cplus.met"
#line 1266 "cplus.met"
        case META : 
#line 1266 "cplus.met"
        case IF_DIR : 
#line 1266 "cplus.met"
            tokenAhead = 0 ;
#line 1266 "cplus.met"
            CommTerm();
#line 1266 "cplus.met"
#line 1266 "cplus.met"
            {
#line 1266 "cplus.met"
                PPTREE _ptTree0=0;
#line 1266 "cplus.met"
                if ( (_ptTree0=NQUICK_CALL(_Tak(stat_if_dir)(error_free), 144, cplus))== (PPTREE) -1 ) {
#line 1266 "cplus.met"
                    MulFreeTree(2,_ptTree0,retTree);
                    PROG_EXIT(stat_dir_exit,"stat_dir")
#line 1266 "cplus.met"
                }
#line 1266 "cplus.met"
                _retValue =_ptTree0;
#line 1266 "cplus.met"
                goto stat_dir_ret;
#line 1266 "cplus.met"
            }
#line 1266 "cplus.met"
            break;
#line 1266 "cplus.met"
#line 1267 "cplus.met"
        case IFDEF_DIR : 
#line 1267 "cplus.met"
#line 1267 "cplus.met"
            {
#line 1267 "cplus.met"
                PPTREE _ptTree0=0;
#line 1267 "cplus.met"
                if ( (_ptTree0=NQUICK_CALL(_Tak(stat_ifdef_dir)(error_free), 145, cplus))== (PPTREE) -1 ) {
#line 1267 "cplus.met"
                    MulFreeTree(2,_ptTree0,retTree);
                    PROG_EXIT(stat_dir_exit,"stat_dir")
#line 1267 "cplus.met"
                }
#line 1267 "cplus.met"
                _retValue =_ptTree0;
#line 1267 "cplus.met"
                goto stat_dir_ret;
#line 1267 "cplus.met"
            }
#line 1267 "cplus.met"
            break;
#line 1267 "cplus.met"
#line 1268 "cplus.met"
        case IFNDEF_DIR : 
#line 1268 "cplus.met"
#line 1268 "cplus.met"
            {
#line 1268 "cplus.met"
                PPTREE _ptTree0=0;
#line 1268 "cplus.met"
                if ( (_ptTree0=NQUICK_CALL(_Tak(stat_ifdef_dir)(error_free), 145, cplus))== (PPTREE) -1 ) {
#line 1268 "cplus.met"
                    MulFreeTree(2,_ptTree0,retTree);
                    PROG_EXIT(stat_dir_exit,"stat_dir")
#line 1268 "cplus.met"
                }
#line 1268 "cplus.met"
                _retValue =_ptTree0;
#line 1268 "cplus.met"
                goto stat_dir_ret;
#line 1268 "cplus.met"
            }
#line 1268 "cplus.met"
            break;
#line 1268 "cplus.met"
        default :
#line 1268 "cplus.met"
            MulFreeTree(1,retTree);
            CASE_EXIT(stat_dir_exit,"either IF_DIR or IFDEF_DIR or IFNDEF_DIR")
#line 1268 "cplus.met"
            break;
#line 1268 "cplus.met"
    }
#line 1268 "cplus.met"
#line 1268 "cplus.met"
#line 1269 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1269 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 1269 "cplus.met"
return((PPTREE) 0);
#line 1269 "cplus.met"

#line 1269 "cplus.met"
stat_dir_exit :
#line 1269 "cplus.met"

#line 1269 "cplus.met"
    _Debug = TRACE_RULE("stat_dir",TRACE_EXIT,(PPTREE)0);
#line 1269 "cplus.met"
    _funcLevel--;
#line 1269 "cplus.met"
    return((PPTREE) -1) ;
#line 1269 "cplus.met"

#line 1269 "cplus.met"
stat_dir_ret :
#line 1269 "cplus.met"
    
#line 1269 "cplus.met"
    _Debug = TRACE_RULE("stat_dir",TRACE_RETURN,_retValue);
#line 1269 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1269 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 1269 "cplus.met"
    return _retValue ;
#line 1269 "cplus.met"
}
#line 1269 "cplus.met"

#line 1269 "cplus.met"
#line 3731 "cplus.met"
PPTREE cplus::stat_dir_switch ( int error_free)
#line 3731 "cplus.met"
{
#line 3731 "cplus.met"
    int  _oldswitchContext = switchContext;
#line 3731 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 3731 "cplus.met"
    int _value,_nbPre = 0 ;
#line 3731 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 3731 "cplus.met"
    int _Debug = TRACE_RULE("stat_dir_switch",TRACE_ENTER,(PPTREE)0);
#line 3731 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 3731 "cplus.met"
#line 3732 "cplus.met"
    {
#line 3732 "cplus.met"
        switchContext = 1 ;
#line 3732 "cplus.met"
#line 3733 "cplus.met"
        {
#line 3733 "cplus.met"
            PPTREE _ptTree0=0;
#line 3733 "cplus.met"
            if ( (_ptTree0=NQUICK_CALL(_Tak(stat_dir)(error_free), 142, cplus))== (PPTREE) -1 ) {
#line 3733 "cplus.met"
                MulFreeTree(1,_ptTree0);
                PROG_EXIT(stat_dir_switch_exit,"stat_dir_switch")
#line 3733 "cplus.met"
            }
#line 3733 "cplus.met"
            _retValue =_ptTree0;
#line 3733 "cplus.met"
            goto stat_dir_switch_ret;
#line 3733 "cplus.met"
        }
#line 3733 "cplus.met"
        switchContext =  _oldswitchContext;
#line 3733 "cplus.met"
    }
#line 3733 "cplus.met"
#line 3733 "cplus.met"
#line 3733 "cplus.met"

#line 3734 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 3734 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 3734 "cplus.met"
switchContext =  _oldswitchContext;
#line 3734 "cplus.met"
return((PPTREE) 0);
#line 3734 "cplus.met"

#line 3734 "cplus.met"
stat_dir_switch_exit :
#line 3734 "cplus.met"

#line 3734 "cplus.met"
    _Debug = TRACE_RULE("stat_dir_switch",TRACE_EXIT,(PPTREE)0);
#line 3734 "cplus.met"
    _funcLevel--;
#line 3734 "cplus.met"
    switchContext =  _oldswitchContext;
#line 3734 "cplus.met"
    return((PPTREE) -1) ;
#line 3734 "cplus.met"

#line 3734 "cplus.met"
stat_dir_switch_ret :
#line 3734 "cplus.met"
    
#line 3734 "cplus.met"
    _Debug = TRACE_RULE("stat_dir_switch",TRACE_RETURN,_retValue);
#line 3734 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 3734 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 3734 "cplus.met"
    switchContext =  _oldswitchContext;
#line 3734 "cplus.met"
    return _retValue ;
#line 3734 "cplus.met"
}
#line 3734 "cplus.met"

#line 3734 "cplus.met"
#line 1160 "cplus.met"
PPTREE cplus::stat_if_dir ( int error_free)
#line 1160 "cplus.met"
{
#line 1160 "cplus.met"
    int  _oldkeepCarriage = keepCarriage;
#line 1160 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 1160 "cplus.met"
    int _value,_nbPre = 0 ;
#line 1160 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 1160 "cplus.met"
    int _Debug = TRACE_RULE("stat_if_dir",TRACE_ENTER,(PPTREE)0);
#line 1160 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 1160 "cplus.met"
#line 1160 "cplus.met"
    PPTREE _addlist1 = (PPTREE) 0,_addlist2 = (PPTREE) 0;
#line 1160 "cplus.met"
#line 1160 "cplus.met"
    PPTREE retTree = (PPTREE) 0,list = (PPTREE) 0,list2 = (PPTREE) 0;
#line 1160 "cplus.met"
#line 1162 "cplus.met"
    {
#line 1162 "cplus.met"
        keepCarriage = 1 ;
#line 1162 "cplus.met"
#line 1163 "cplus.met"
#line 1164 "cplus.met"
        {
#line 1164 "cplus.met"
            PPTREE _ptTree0=0,_ptRes0=0;
#line 1164 "cplus.met"
            _ptRes0= MakeTree(IF_DIR, 3);
#line 1164 "cplus.met"
            if ( (_ptTree0=NQUICK_CALL(_Tak(expression)(error_free), 67, cplus))== (PPTREE) -1 ) {
#line 1164 "cplus.met"
                MulFreeTree(7,_ptRes0,_ptTree0,_addlist1,_addlist2,list,list2,retTree);
                PROG_EXIT(stat_if_dir_exit,"stat_if_dir")
#line 1164 "cplus.met"
            }
#line 1164 "cplus.met"
            ReplaceTree(_ptRes0, 1, _ptTree0);
#line 1164 "cplus.met"
            retTree=_ptRes0;
#line 1164 "cplus.met"
        }
#line 1164 "cplus.met"
#line 1165 "cplus.met"
        (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 1165 "cplus.met"
        if ( ! TERM_OR_META(CARRIAGE_RETURN,"CARRIAGE_RETURN") || !(CommTerm(),1)) {
#line 1165 "cplus.met"
            MulFreeTree(5,_addlist1,_addlist2,list,list2,retTree);
            TOKEN_EXIT(stat_if_dir_exit,"CARRIAGE_RETURN")
#line 1165 "cplus.met"
        } else {
#line 1165 "cplus.met"
            tokenAhead = 0 ;
#line 1165 "cplus.met"
        }
#line 1165 "cplus.met"
#line 1165 "cplus.met"
        keepCarriage =  _oldkeepCarriage;
#line 1165 "cplus.met"
    }
#line 1165 "cplus.met"
#line 1165 "cplus.met"
    _addlist1 = list ;
#line 1165 "cplus.met"
#line 1167 "cplus.met"
    while (((! ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN( ELSE_DIR,"ELSE_DIR"))) && 
#line 1167 "cplus.met"
           (! ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN( ELIF_DIR,"ELIF_DIR")))) && 
#line 1167 "cplus.met"
          (! ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN( ENDIF_DIR,"ENDIF_DIR")))) { 
#line 1167 "cplus.met"
#line 1168 "cplus.met"
#line 1168 "cplus.met"
        {
#line 1168 "cplus.met"
            PPTREE _ptTree0=0;
#line 1168 "cplus.met"
            if ( (_ptTree0=NQUICK_CALL(_Tak(stat_all)(error_free), 141, cplus))== (PPTREE) -1 ) {
#line 1168 "cplus.met"
                MulFreeTree(6,_ptTree0,_addlist1,_addlist2,list,list2,retTree);
                PROG_EXIT(stat_if_dir_exit,"stat_if_dir")
#line 1168 "cplus.met"
            }
#line 1168 "cplus.met"
            _addlist1 =AddList(_addlist1 , _ptTree0);
#line 1168 "cplus.met"
        }
#line 1168 "cplus.met"
#line 1168 "cplus.met"
        if (list){
#line 1168 "cplus.met"
#line 1168 "cplus.met"
            _addlist1 = SonTree (_addlist1 ,2 );
#line 1168 "cplus.met"
        } else {
#line 1168 "cplus.met"
#line 1168 "cplus.met"
            list = _addlist1 ;
#line 1168 "cplus.met"
        }
#line 1168 "cplus.met"
    } 
#line 1168 "cplus.met"
#line 1169 "cplus.met"
    {
#line 1169 "cplus.met"
        PPTREE _ptTree0=0;
#line 1169 "cplus.met"
        if ( (_ptTree0=NQUICK_CALL(_Tak(none_statement)(error_free), 109, cplus))== (PPTREE) -1 ) {
#line 1169 "cplus.met"
            MulFreeTree(6,_ptTree0,_addlist1,_addlist2,list,list2,retTree);
            PROG_EXIT(stat_if_dir_exit,"stat_if_dir")
#line 1169 "cplus.met"
        }
#line 1169 "cplus.met"
        list =AddList(list , _ptTree0);
#line 1169 "cplus.met"
    }
#line 1169 "cplus.met"
#line 1170 "cplus.met"
    ReplaceTree(retTree ,2 ,list );
#line 1170 "cplus.met"
#line 1171 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 1171 "cplus.met"
    switch( lexEl.Value) {
#line 1171 "cplus.met"
#line 1172 "cplus.met"
        case META : 
#line 1172 "cplus.met"
        case ELSE_DIR : 
#line 1172 "cplus.met"
            tokenAhead = 0 ;
#line 1172 "cplus.met"
            CommTerm();
#line 1172 "cplus.met"
#line 1173 "cplus.met"
#line 1173 "cplus.met"
            _addlist2 = list2 ;
#line 1173 "cplus.met"
#line 1174 "cplus.met"
            while (((tokenAhead && tokenAhead != -1)|| (c != EOF)) && 
#line 1174 "cplus.met"
                  (! ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN( ENDIF_DIR,"ENDIF_DIR")))) { 
#line 1174 "cplus.met"
#line 1175 "cplus.met"
#line 1175 "cplus.met"
                {
#line 1175 "cplus.met"
                    PPTREE _ptTree0=0;
#line 1175 "cplus.met"
                    if ( (_ptTree0=NQUICK_CALL(_Tak(stat_all)(error_free), 141, cplus))== (PPTREE) -1 ) {
#line 1175 "cplus.met"
                        MulFreeTree(6,_ptTree0,_addlist1,_addlist2,list,list2,retTree);
                        PROG_EXIT(stat_if_dir_exit,"stat_if_dir")
#line 1175 "cplus.met"
                    }
#line 1175 "cplus.met"
                    _addlist2 =AddList(_addlist2 , _ptTree0);
#line 1175 "cplus.met"
                }
#line 1175 "cplus.met"
#line 1175 "cplus.met"
                if (list2){
#line 1175 "cplus.met"
#line 1175 "cplus.met"
                    _addlist2 = SonTree (_addlist2 ,2 );
#line 1175 "cplus.met"
                } else {
#line 1175 "cplus.met"
#line 1175 "cplus.met"
                    list2 = _addlist2 ;
#line 1175 "cplus.met"
                }
#line 1175 "cplus.met"
            } 
#line 1175 "cplus.met"
#line 1176 "cplus.met"
            {
#line 1176 "cplus.met"
                PPTREE _ptTree0=0;
#line 1176 "cplus.met"
                if ( (_ptTree0=NQUICK_CALL(_Tak(none_statement)(error_free), 109, cplus))== (PPTREE) -1 ) {
#line 1176 "cplus.met"
                    MulFreeTree(6,_ptTree0,_addlist1,_addlist2,list,list2,retTree);
                    PROG_EXIT(stat_if_dir_exit,"stat_if_dir")
#line 1176 "cplus.met"
                }
#line 1176 "cplus.met"
                list2 =AddList(list2 , _ptTree0);
#line 1176 "cplus.met"
            }
#line 1176 "cplus.met"
#line 1177 "cplus.met"
            (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 1177 "cplus.met"
            if ( ! TERM_OR_META(ENDIF_DIR,"ENDIF_DIR") || !(CommTerm(),1)) {
#line 1177 "cplus.met"
                MulFreeTree(5,_addlist1,_addlist2,list,list2,retTree);
                TOKEN_EXIT(stat_if_dir_exit,"ENDIF_DIR")
#line 1177 "cplus.met"
            } else {
#line 1177 "cplus.met"
                tokenAhead = 0 ;
#line 1177 "cplus.met"
            }
#line 1177 "cplus.met"
#line 1178 "cplus.met"
            {
#line 1178 "cplus.met"
                PPTREE _ptTree0=0;
#line 1178 "cplus.met"
                _ptTree0=ReplaceTree(retTree ,3 ,list2 );
#line 1178 "cplus.met"
                _retValue =_ptTree0;
#line 1178 "cplus.met"
                goto stat_if_dir_ret;
#line 1178 "cplus.met"
            }
#line 1178 "cplus.met"
#line 1178 "cplus.met"
            break;
#line 1178 "cplus.met"
#line 1180 "cplus.met"
        case ELIF_DIR : 
#line 1180 "cplus.met"
            tokenAhead = 0 ;
#line 1180 "cplus.met"
            CommTerm();
#line 1180 "cplus.met"
#line 1180 "cplus.met"
            {
#line 1180 "cplus.met"
                PPTREE _ptTree0=0;
#line 1180 "cplus.met"
                {
#line 1180 "cplus.met"
                    PPTREE _ptTree1=0;
#line 1180 "cplus.met"
                    if ( (_ptTree1=NQUICK_CALL(_Tak(stat_if_dir)(error_free), 144, cplus))== (PPTREE) -1 ) {
#line 1180 "cplus.met"
                        MulFreeTree(7,_ptTree1,_ptTree0,_addlist1,_addlist2,list,list2,retTree);
                        PROG_EXIT(stat_if_dir_exit,"stat_if_dir")
#line 1180 "cplus.met"
                    }
#line 1180 "cplus.met"
                    _ptTree0=ReplaceTree(retTree , 3 , _ptTree1);
#line 1180 "cplus.met"
                }
#line 1180 "cplus.met"
                _retValue =_ptTree0;
#line 1180 "cplus.met"
                goto stat_if_dir_ret;
#line 1180 "cplus.met"
            }
#line 1180 "cplus.met"
            break;
#line 1180 "cplus.met"
#line 1181 "cplus.met"
        case ENDIF_DIR : 
#line 1181 "cplus.met"
            tokenAhead = 0 ;
#line 1181 "cplus.met"
            CommTerm();
#line 1181 "cplus.met"
#line 1181 "cplus.met"
            {
#line 1181 "cplus.met"
                _retValue = retTree ;
#line 1181 "cplus.met"
                goto stat_if_dir_ret;
#line 1181 "cplus.met"
                
#line 1181 "cplus.met"
            }
#line 1181 "cplus.met"
            break;
#line 1181 "cplus.met"
        default :
#line 1181 "cplus.met"
            MulFreeTree(5,_addlist1,_addlist2,list,list2,retTree);
            CASE_EXIT(stat_if_dir_exit,"either ELSE_DIR or ELIF_DIR or ENDIF_DIR")
#line 1181 "cplus.met"
            break;
#line 1181 "cplus.met"
    }
#line 1181 "cplus.met"
#line 1181 "cplus.met"
#line 1182 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1182 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 1182 "cplus.met"
keepCarriage =  _oldkeepCarriage;
#line 1182 "cplus.met"
return((PPTREE) 0);
#line 1182 "cplus.met"

#line 1182 "cplus.met"
stat_if_dir_exit :
#line 1182 "cplus.met"

#line 1182 "cplus.met"
    _Debug = TRACE_RULE("stat_if_dir",TRACE_EXIT,(PPTREE)0);
#line 1182 "cplus.met"
    _funcLevel--;
#line 1182 "cplus.met"
    keepCarriage =  _oldkeepCarriage;
#line 1182 "cplus.met"
    return((PPTREE) -1) ;
#line 1182 "cplus.met"

#line 1182 "cplus.met"
stat_if_dir_ret :
#line 1182 "cplus.met"
    
#line 1182 "cplus.met"
    _Debug = TRACE_RULE("stat_if_dir",TRACE_RETURN,_retValue);
#line 1182 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1182 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 1182 "cplus.met"
    keepCarriage =  _oldkeepCarriage;
#line 1182 "cplus.met"
    return _retValue ;
#line 1182 "cplus.met"
}
#line 1182 "cplus.met"

#line 1182 "cplus.met"
#line 1223 "cplus.met"
PPTREE cplus::stat_ifdef_dir ( int error_free)
#line 1223 "cplus.met"
{
#line 1223 "cplus.met"
    int  _oldkeepCarriage = keepCarriage;
#line 1223 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 1223 "cplus.met"
    int _value,_nbPre = 0 ;
#line 1223 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 1223 "cplus.met"
    int _Debug = TRACE_RULE("stat_ifdef_dir",TRACE_ENTER,(PPTREE)0);
#line 1223 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 1223 "cplus.met"
#line 1223 "cplus.met"
    PPTREE _addlist1 = (PPTREE) 0,_addlist2 = (PPTREE) 0;
#line 1223 "cplus.met"
#line 1223 "cplus.met"
    PPTREE retTree = (PPTREE) 0,list = (PPTREE) 0,list2 = (PPTREE) 0,express = (PPTREE) 0;
#line 1223 "cplus.met"
#line 1225 "cplus.met"
    if ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&TERM_OR_META(IFDEF_DIR,"IFDEF_DIR") && (tokenAhead = 0,CommTerm(),1)){
#line 1225 "cplus.met"
#line 1226 "cplus.met"
#line 1227 "cplus.met"
        {
#line 1227 "cplus.met"
            keepCarriage = 1 ;
#line 1227 "cplus.met"
#line 1228 "cplus.met"
#line 1229 "cplus.met"
            {
#line 1229 "cplus.met"
                PPTREE _ptTree0=0,_ptRes0=0;
#line 1229 "cplus.met"
                _ptRes0= MakeTree(IFDEF_DIR, 3);
#line 1229 "cplus.met"
                if ( (_ptTree0=NQUICK_CALL(_Tak(expression)(error_free), 67, cplus))== (PPTREE) -1 ) {
#line 1229 "cplus.met"
                    MulFreeTree(8,_ptRes0,_ptTree0,_addlist1,_addlist2,express,list,list2,retTree);
                    PROG_EXIT(stat_ifdef_dir_exit,"stat_ifdef_dir")
#line 1229 "cplus.met"
                }
#line 1229 "cplus.met"
                ReplaceTree(_ptRes0, 1, _ptTree0);
#line 1229 "cplus.met"
                retTree=_ptRes0;
#line 1229 "cplus.met"
            }
#line 1229 "cplus.met"
#line 1230 "cplus.met"
            (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 1230 "cplus.met"
            if ( ! TERM_OR_META(CARRIAGE_RETURN,"CARRIAGE_RETURN") || !(CommTerm(),1)) {
#line 1230 "cplus.met"
                MulFreeTree(6,_addlist1,_addlist2,express,list,list2,retTree);
                TOKEN_EXIT(stat_ifdef_dir_exit,"CARRIAGE_RETURN")
#line 1230 "cplus.met"
            } else {
#line 1230 "cplus.met"
                tokenAhead = 0 ;
#line 1230 "cplus.met"
            }
#line 1230 "cplus.met"
#line 1230 "cplus.met"
            keepCarriage =  _oldkeepCarriage;
#line 1230 "cplus.met"
        }
#line 1230 "cplus.met"
#line 1230 "cplus.met"
#line 1231 "cplus.met"
    } else {
#line 1231 "cplus.met"
#line 1234 "cplus.met"
#line 1235 "cplus.met"
        (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 1235 "cplus.met"
        if ( ! TERM_OR_META(IFNDEF_DIR,"IFNDEF_DIR") || !(CommTerm(),1)) {
#line 1235 "cplus.met"
            MulFreeTree(6,_addlist1,_addlist2,express,list,list2,retTree);
            TOKEN_EXIT(stat_ifdef_dir_exit,"IFNDEF_DIR")
#line 1235 "cplus.met"
        } else {
#line 1235 "cplus.met"
            tokenAhead = 0 ;
#line 1235 "cplus.met"
        }
#line 1235 "cplus.met"
#line 1236 "cplus.met"
        {
#line 1236 "cplus.met"
            keepCarriage = 1 ;
#line 1236 "cplus.met"
#line 1237 "cplus.met"
#line 1238 "cplus.met"
            if ( (express=NQUICK_CALL(_Tak(expression)(error_free), 67, cplus))== (PPTREE) -1 ) {
#line 1238 "cplus.met"
                MulFreeTree(6,_addlist1,_addlist2,express,list,list2,retTree);
                PROG_EXIT(stat_ifdef_dir_exit,"stat_ifdef_dir")
#line 1238 "cplus.met"
            }
#line 1238 "cplus.met"
#line 1239 "cplus.met"
            (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 1239 "cplus.met"
            if ( ! TERM_OR_META(CARRIAGE_RETURN,"CARRIAGE_RETURN") || !(CommTerm(),1)) {
#line 1239 "cplus.met"
                MulFreeTree(6,_addlist1,_addlist2,express,list,list2,retTree);
                TOKEN_EXIT(stat_ifdef_dir_exit,"CARRIAGE_RETURN")
#line 1239 "cplus.met"
            } else {
#line 1239 "cplus.met"
                tokenAhead = 0 ;
#line 1239 "cplus.met"
            }
#line 1239 "cplus.met"
#line 1239 "cplus.met"
            keepCarriage =  _oldkeepCarriage;
#line 1239 "cplus.met"
        }
#line 1239 "cplus.met"
#line 1241 "cplus.met"
        {
#line 1241 "cplus.met"
            PPTREE _ptRes0=0;
#line 1241 "cplus.met"
            _ptRes0= MakeTree(IFNDEF_DIR, 3);
#line 1241 "cplus.met"
            ReplaceTree(_ptRes0, 1, express );
#line 1241 "cplus.met"
            retTree=_ptRes0;
#line 1241 "cplus.met"
        }
#line 1241 "cplus.met"
#line 1241 "cplus.met"
    }
#line 1241 "cplus.met"
#line 1241 "cplus.met"
    _addlist1 = list ;
#line 1241 "cplus.met"
#line 1243 "cplus.met"
    while (((! ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN( ELSE_DIR,"ELSE_DIR"))) && 
#line 1243 "cplus.met"
           (! ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN( ELIF_DIR,"ELIF_DIR")))) && 
#line 1243 "cplus.met"
          (! ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN( ENDIF_DIR,"ENDIF_DIR")))) { 
#line 1243 "cplus.met"
#line 1244 "cplus.met"
#line 1244 "cplus.met"
        {
#line 1244 "cplus.met"
            PPTREE _ptTree0=0;
#line 1244 "cplus.met"
            if ( (_ptTree0=NQUICK_CALL(_Tak(stat_all)(error_free), 141, cplus))== (PPTREE) -1 ) {
#line 1244 "cplus.met"
                MulFreeTree(7,_ptTree0,_addlist1,_addlist2,express,list,list2,retTree);
                PROG_EXIT(stat_ifdef_dir_exit,"stat_ifdef_dir")
#line 1244 "cplus.met"
            }
#line 1244 "cplus.met"
            _addlist1 =AddList(_addlist1 , _ptTree0);
#line 1244 "cplus.met"
        }
#line 1244 "cplus.met"
#line 1244 "cplus.met"
        if (list){
#line 1244 "cplus.met"
#line 1244 "cplus.met"
            _addlist1 = SonTree (_addlist1 ,2 );
#line 1244 "cplus.met"
        } else {
#line 1244 "cplus.met"
#line 1244 "cplus.met"
            list = _addlist1 ;
#line 1244 "cplus.met"
        }
#line 1244 "cplus.met"
    } 
#line 1244 "cplus.met"
#line 1245 "cplus.met"
    {
#line 1245 "cplus.met"
        PPTREE _ptTree0=0;
#line 1245 "cplus.met"
        if ( (_ptTree0=NQUICK_CALL(_Tak(none_statement)(error_free), 109, cplus))== (PPTREE) -1 ) {
#line 1245 "cplus.met"
            MulFreeTree(7,_ptTree0,_addlist1,_addlist2,express,list,list2,retTree);
            PROG_EXIT(stat_ifdef_dir_exit,"stat_ifdef_dir")
#line 1245 "cplus.met"
        }
#line 1245 "cplus.met"
        list =AddList(list , _ptTree0);
#line 1245 "cplus.met"
    }
#line 1245 "cplus.met"
#line 1246 "cplus.met"
    ReplaceTree(retTree ,2 ,list );
#line 1246 "cplus.met"
#line 1247 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 1247 "cplus.met"
    switch( lexEl.Value) {
#line 1247 "cplus.met"
#line 1248 "cplus.met"
        case META : 
#line 1248 "cplus.met"
        case ELSE_DIR : 
#line 1248 "cplus.met"
            tokenAhead = 0 ;
#line 1248 "cplus.met"
            CommTerm();
#line 1248 "cplus.met"
#line 1249 "cplus.met"
#line 1249 "cplus.met"
            _addlist2 = list2 ;
#line 1249 "cplus.met"
#line 1250 "cplus.met"
            while (((tokenAhead && tokenAhead != -1)|| (c != EOF)) && 
#line 1250 "cplus.met"
                  (! ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN( ENDIF_DIR,"ENDIF_DIR")))) { 
#line 1250 "cplus.met"
#line 1251 "cplus.met"
#line 1251 "cplus.met"
                {
#line 1251 "cplus.met"
                    PPTREE _ptTree0=0;
#line 1251 "cplus.met"
                    if ( (_ptTree0=NQUICK_CALL(_Tak(stat_all)(error_free), 141, cplus))== (PPTREE) -1 ) {
#line 1251 "cplus.met"
                        MulFreeTree(7,_ptTree0,_addlist1,_addlist2,express,list,list2,retTree);
                        PROG_EXIT(stat_ifdef_dir_exit,"stat_ifdef_dir")
#line 1251 "cplus.met"
                    }
#line 1251 "cplus.met"
                    _addlist2 =AddList(_addlist2 , _ptTree0);
#line 1251 "cplus.met"
                }
#line 1251 "cplus.met"
#line 1251 "cplus.met"
                if (list2){
#line 1251 "cplus.met"
#line 1251 "cplus.met"
                    _addlist2 = SonTree (_addlist2 ,2 );
#line 1251 "cplus.met"
                } else {
#line 1251 "cplus.met"
#line 1251 "cplus.met"
                    list2 = _addlist2 ;
#line 1251 "cplus.met"
                }
#line 1251 "cplus.met"
            } 
#line 1251 "cplus.met"
#line 1252 "cplus.met"
            {
#line 1252 "cplus.met"
                PPTREE _ptTree0=0;
#line 1252 "cplus.met"
                if ( (_ptTree0=NQUICK_CALL(_Tak(none_statement)(error_free), 109, cplus))== (PPTREE) -1 ) {
#line 1252 "cplus.met"
                    MulFreeTree(7,_ptTree0,_addlist1,_addlist2,express,list,list2,retTree);
                    PROG_EXIT(stat_ifdef_dir_exit,"stat_ifdef_dir")
#line 1252 "cplus.met"
                }
#line 1252 "cplus.met"
                list2 =AddList(list2 , _ptTree0);
#line 1252 "cplus.met"
            }
#line 1252 "cplus.met"
#line 1253 "cplus.met"
            (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 1253 "cplus.met"
            if ( ! TERM_OR_META(ENDIF_DIR,"ENDIF_DIR") || !(CommTerm(),1)) {
#line 1253 "cplus.met"
                MulFreeTree(6,_addlist1,_addlist2,express,list,list2,retTree);
                TOKEN_EXIT(stat_ifdef_dir_exit,"ENDIF_DIR")
#line 1253 "cplus.met"
            } else {
#line 1253 "cplus.met"
                tokenAhead = 0 ;
#line 1253 "cplus.met"
            }
#line 1253 "cplus.met"
#line 1254 "cplus.met"
            {
#line 1254 "cplus.met"
                PPTREE _ptTree0=0;
#line 1254 "cplus.met"
                _ptTree0=ReplaceTree(retTree ,3 ,list2 );
#line 1254 "cplus.met"
                _retValue =_ptTree0;
#line 1254 "cplus.met"
                goto stat_ifdef_dir_ret;
#line 1254 "cplus.met"
            }
#line 1254 "cplus.met"
#line 1254 "cplus.met"
            break;
#line 1254 "cplus.met"
#line 1256 "cplus.met"
        case ELIF_DIR : 
#line 1256 "cplus.met"
            tokenAhead = 0 ;
#line 1256 "cplus.met"
            CommTerm();
#line 1256 "cplus.met"
#line 1256 "cplus.met"
            {
#line 1256 "cplus.met"
                PPTREE _ptTree0=0;
#line 1256 "cplus.met"
                {
#line 1256 "cplus.met"
                    PPTREE _ptTree1=0;
#line 1256 "cplus.met"
                    if ( (_ptTree1=NQUICK_CALL(_Tak(stat_if_dir)(error_free), 144, cplus))== (PPTREE) -1 ) {
#line 1256 "cplus.met"
                        MulFreeTree(8,_ptTree1,_ptTree0,_addlist1,_addlist2,express,list,list2,retTree);
                        PROG_EXIT(stat_ifdef_dir_exit,"stat_ifdef_dir")
#line 1256 "cplus.met"
                    }
#line 1256 "cplus.met"
                    _ptTree0=ReplaceTree(retTree , 3 , _ptTree1);
#line 1256 "cplus.met"
                }
#line 1256 "cplus.met"
                _retValue =_ptTree0;
#line 1256 "cplus.met"
                goto stat_ifdef_dir_ret;
#line 1256 "cplus.met"
            }
#line 1256 "cplus.met"
            break;
#line 1256 "cplus.met"
#line 1257 "cplus.met"
        case ENDIF_DIR : 
#line 1257 "cplus.met"
            tokenAhead = 0 ;
#line 1257 "cplus.met"
            CommTerm();
#line 1257 "cplus.met"
#line 1257 "cplus.met"
            {
#line 1257 "cplus.met"
                _retValue = retTree ;
#line 1257 "cplus.met"
                goto stat_ifdef_dir_ret;
#line 1257 "cplus.met"
                
#line 1257 "cplus.met"
            }
#line 1257 "cplus.met"
            break;
#line 1257 "cplus.met"
        default :
#line 1257 "cplus.met"
            MulFreeTree(6,_addlist1,_addlist2,express,list,list2,retTree);
            CASE_EXIT(stat_ifdef_dir_exit,"either ELSE_DIR or ELIF_DIR or ENDIF_DIR")
#line 1257 "cplus.met"
            break;
#line 1257 "cplus.met"
    }
#line 1257 "cplus.met"
#line 1257 "cplus.met"
#line 1258 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1258 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 1258 "cplus.met"
keepCarriage =  _oldkeepCarriage;
#line 1258 "cplus.met"
return((PPTREE) 0);
#line 1258 "cplus.met"

#line 1258 "cplus.met"
stat_ifdef_dir_exit :
#line 1258 "cplus.met"

#line 1258 "cplus.met"
    _Debug = TRACE_RULE("stat_ifdef_dir",TRACE_EXIT,(PPTREE)0);
#line 1258 "cplus.met"
    _funcLevel--;
#line 1258 "cplus.met"
    keepCarriage =  _oldkeepCarriage;
#line 1258 "cplus.met"
    return((PPTREE) -1) ;
#line 1258 "cplus.met"

#line 1258 "cplus.met"
stat_ifdef_dir_ret :
#line 1258 "cplus.met"
    
#line 1258 "cplus.met"
    _Debug = TRACE_RULE("stat_ifdef_dir",TRACE_RETURN,_retValue);
#line 1258 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1258 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 1258 "cplus.met"
    keepCarriage =  _oldkeepCarriage;
#line 1258 "cplus.met"
    return _retValue ;
#line 1258 "cplus.met"
}
#line 1258 "cplus.met"

#line 1258 "cplus.met"
#line 3575 "cplus.met"
PPTREE cplus::statement ( int error_free)
#line 3575 "cplus.met"
{
#line 3575 "cplus.met"
    int  _oldswitchContext = switchContext;
#line 3575 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 3575 "cplus.met"
    int _value,_nbPre = 0 ;
#line 3575 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 3575 "cplus.met"
    int _Debug = TRACE_RULE("statement",TRACE_ENTER,(PPTREE)0);
#line 3575 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 3575 "cplus.met"
#line 3575 "cplus.met"
    PPTREE statTree = (PPTREE) 0,opt = (PPTREE) 0,stat = (PPTREE) 0;
#line 3575 "cplus.met"
#line 3577 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3577 "cplus.met"
    switch( lexEl.Value) {
#line 3577 "cplus.met"
#line 3578 "cplus.met"
        case BREAK : 
#line 3578 "cplus.met"
            tokenAhead = 0 ;
#line 3578 "cplus.met"
            CommTerm();
#line 3578 "cplus.met"
#line 3579 "cplus.met"
#line 3580 "cplus.met"
            {
#line 3580 "cplus.met"
                PPTREE _ptRes0=0;
#line 3580 "cplus.met"
                _ptRes0= MakeTree(BREAK, 1);
#line 3580 "cplus.met"
                statTree=_ptRes0;
#line 3580 "cplus.met"
            }
#line 3580 "cplus.met"
#line 3581 "cplus.met"
            (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3581 "cplus.met"
            if (  !SEE_TOKEN( PVIR,";") || !(CommTerm(),1)) {
#line 3581 "cplus.met"
                MulFreeTree(3,opt,stat,statTree);
                TOKEN_EXIT(statement_exit,";")
#line 3581 "cplus.met"
            } else {
#line 3581 "cplus.met"
                tokenAhead = 0 ;
#line 3581 "cplus.met"
            }
#line 3581 "cplus.met"
#line 3581 "cplus.met"
            break;
#line 3581 "cplus.met"
#line 3583 "cplus.met"
        case CONTINUE : 
#line 3583 "cplus.met"
            tokenAhead = 0 ;
#line 3583 "cplus.met"
            CommTerm();
#line 3583 "cplus.met"
#line 3584 "cplus.met"
#line 3585 "cplus.met"
            {
#line 3585 "cplus.met"
                PPTREE _ptRes0=0;
#line 3585 "cplus.met"
                _ptRes0= MakeTree(CONTINUE, 1);
#line 3585 "cplus.met"
                statTree=_ptRes0;
#line 3585 "cplus.met"
            }
#line 3585 "cplus.met"
#line 3586 "cplus.met"
            (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3586 "cplus.met"
            if (  !SEE_TOKEN( PVIR,";") || !(CommTerm(),1)) {
#line 3586 "cplus.met"
                MulFreeTree(3,opt,stat,statTree);
                TOKEN_EXIT(statement_exit,";")
#line 3586 "cplus.met"
            } else {
#line 3586 "cplus.met"
                tokenAhead = 0 ;
#line 3586 "cplus.met"
            }
#line 3586 "cplus.met"
#line 3586 "cplus.met"
            break;
#line 3586 "cplus.met"
#line 3588 "cplus.met"
        case DO : 
#line 3588 "cplus.met"
            tokenAhead = 0 ;
#line 3588 "cplus.met"
            CommTerm();
#line 3588 "cplus.met"
#line 3589 "cplus.met"
#line 3590 "cplus.met"
            {
#line 3590 "cplus.met"
                switchContext = 0 ;
#line 3590 "cplus.met"
#line 3591 "cplus.met"
                {
#line 3591 "cplus.met"
                    PPTREE _ptTree0=0,_ptRes0=0;
#line 3591 "cplus.met"
                    _ptRes0= MakeTree(DO, 2);
#line 3591 "cplus.met"
                    if ( (_ptTree0=NQUICK_CALL(_Tak(statement)(error_free), 146, cplus))== (PPTREE) -1 ) {
#line 3591 "cplus.met"
                        MulFreeTree(5,_ptRes0,_ptTree0,opt,stat,statTree);
                        PROG_EXIT(statement_exit,"statement")
#line 3591 "cplus.met"
                    }
#line 3591 "cplus.met"
                    ReplaceTree(_ptRes0, 1, _ptTree0);
#line 3591 "cplus.met"
                    statTree=_ptRes0;
#line 3591 "cplus.met"
                }
#line 3591 "cplus.met"
                switchContext =  _oldswitchContext;
#line 3591 "cplus.met"
            }
#line 3591 "cplus.met"
#line 3592 "cplus.met"
            (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3592 "cplus.met"
            if (  !SEE_TOKEN( WHILE,"while") || !(CommTerm(),1)) {
#line 3592 "cplus.met"
                MulFreeTree(3,opt,stat,statTree);
                TOKEN_EXIT(statement_exit,"while")
#line 3592 "cplus.met"
            } else {
#line 3592 "cplus.met"
                tokenAhead = 0 ;
#line 3592 "cplus.met"
            }
#line 3592 "cplus.met"
#line 3593 "cplus.met"
            (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3593 "cplus.met"
            if (  !SEE_TOKEN( POUV,"(") || !(CommTerm(),1)) {
#line 3593 "cplus.met"
                MulFreeTree(3,opt,stat,statTree);
                TOKEN_EXIT(statement_exit,"(")
#line 3593 "cplus.met"
            } else {
#line 3593 "cplus.met"
                tokenAhead = 0 ;
#line 3593 "cplus.met"
            }
#line 3593 "cplus.met"
#line 3594 "cplus.met"
            {
#line 3594 "cplus.met"
                PPTREE _ptTree0=0;
#line 3594 "cplus.met"
                if ( (_ptTree0=NQUICK_CALL(_Tak(expression)(error_free), 67, cplus))== (PPTREE) -1 ) {
#line 3594 "cplus.met"
                    MulFreeTree(4,_ptTree0,opt,stat,statTree);
                    PROG_EXIT(statement_exit,"statement")
#line 3594 "cplus.met"
                }
#line 3594 "cplus.met"
                ReplaceTree(statTree , 2 , _ptTree0);
#line 3594 "cplus.met"
            }
#line 3594 "cplus.met"
#line 3595 "cplus.met"
            (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3595 "cplus.met"
            if (  !SEE_TOKEN( PFER,")") || !(CommTerm(),1)) {
#line 3595 "cplus.met"
                MulFreeTree(3,opt,stat,statTree);
                TOKEN_EXIT(statement_exit,")")
#line 3595 "cplus.met"
            } else {
#line 3595 "cplus.met"
                tokenAhead = 0 ;
#line 3595 "cplus.met"
            }
#line 3595 "cplus.met"
#line 3596 "cplus.met"
            (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3596 "cplus.met"
            if (  !SEE_TOKEN( PVIR,";") || !(CommTerm(),1)) {
#line 3596 "cplus.met"
                MulFreeTree(3,opt,stat,statTree);
                TOKEN_EXIT(statement_exit,";")
#line 3596 "cplus.met"
            } else {
#line 3596 "cplus.met"
                tokenAhead = 0 ;
#line 3596 "cplus.met"
            }
#line 3596 "cplus.met"
#line 3596 "cplus.met"
            break;
#line 3596 "cplus.met"
#line 3598 "cplus.met"
        case AOUV : 
#line 3598 "cplus.met"
#line 3598 "cplus.met"
            if ( (statTree=NQUICK_CALL(_Tak(compound_statement)(error_free), 33, cplus))== (PPTREE) -1 ) {
#line 3598 "cplus.met"
                MulFreeTree(3,opt,stat,statTree);
                PROG_EXIT(statement_exit,"statement")
#line 3598 "cplus.met"
            }
#line 3598 "cplus.met"
            break;
#line 3598 "cplus.met"
#line 3599 "cplus.met"
        case FOR : 
#line 3599 "cplus.met"
            tokenAhead = 0 ;
#line 3599 "cplus.met"
            CommTerm();
#line 3599 "cplus.met"
#line 3599 "cplus.met"
            {
#line 3599 "cplus.met"
                PPTREE _ptTree0=0;
#line 3599 "cplus.met"
                if ( (_ptTree0=NQUICK_CALL(_Tak(for_statement)(error_free), 80, cplus))== (PPTREE) -1 ) {
#line 3599 "cplus.met"
                    MulFreeTree(4,_ptTree0,opt,stat,statTree);
                    PROG_EXIT(statement_exit,"statement")
#line 3599 "cplus.met"
                }
#line 3599 "cplus.met"
                _retValue =_ptTree0;
#line 3599 "cplus.met"
                goto statement_ret;
#line 3599 "cplus.met"
            }
#line 3599 "cplus.met"
            break;
#line 3599 "cplus.met"
#line 3600 "cplus.met"
        case GOTO : 
#line 3600 "cplus.met"
            tokenAhead = 0 ;
#line 3600 "cplus.met"
            CommTerm();
#line 3600 "cplus.met"
#line 3601 "cplus.met"
#line 3602 "cplus.met"
            {
#line 3602 "cplus.met"
                PPTREE _ptTree0=0,_ptRes0=0;
#line 3602 "cplus.met"
                _ptRes0= MakeTree(GOTO, 1);
#line 3602 "cplus.met"
                {
#line 3602 "cplus.met"
                    PPTREE _ptTree1=0,_ptRes1=0;
#line 3602 "cplus.met"
                    _ptRes1= MakeTree(IDENT, 1);
#line 3602 "cplus.met"
                    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3602 "cplus.met"
                    if ( ! TERM_OR_META(IDENT,"IDENT") || !(BUILD_TERM_META(_ptTree1))) {
#line 3602 "cplus.met"
                        MulFreeTree(7,_ptRes1,_ptTree1,_ptRes0,_ptTree0,opt,stat,statTree);
                        TOKEN_EXIT(statement_exit,"IDENT")
#line 3602 "cplus.met"
                    } else {
#line 3602 "cplus.met"
                        tokenAhead = 0 ;
#line 3602 "cplus.met"
                    }
#line 3602 "cplus.met"
                    ReplaceTree(_ptRes1, 1, _ptTree1);
#line 3602 "cplus.met"
                    _ptTree0=_ptRes1;
#line 3602 "cplus.met"
                }
#line 3602 "cplus.met"
                ReplaceTree(_ptRes0, 1, _ptTree0);
#line 3602 "cplus.met"
                statTree=_ptRes0;
#line 3602 "cplus.met"
            }
#line 3602 "cplus.met"
#line 3603 "cplus.met"
            (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3603 "cplus.met"
            if (  !SEE_TOKEN( PVIR,";") || !(CommTerm(),1)) {
#line 3603 "cplus.met"
                MulFreeTree(3,opt,stat,statTree);
                TOKEN_EXIT(statement_exit,";")
#line 3603 "cplus.met"
            } else {
#line 3603 "cplus.met"
                tokenAhead = 0 ;
#line 3603 "cplus.met"
            }
#line 3603 "cplus.met"
#line 3603 "cplus.met"
            break;
#line 3603 "cplus.met"
#line 3605 "cplus.met"
        case IF : 
#line 3605 "cplus.met"
            tokenAhead = 0 ;
#line 3605 "cplus.met"
            CommTerm();
#line 3605 "cplus.met"
#line 3606 "cplus.met"
#line 3607 "cplus.met"
            (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3607 "cplus.met"
            if (  !SEE_TOKEN( POUV,"(") || !(CommTerm(),1)) {
#line 3607 "cplus.met"
                MulFreeTree(3,opt,stat,statTree);
                TOKEN_EXIT(statement_exit,"(")
#line 3607 "cplus.met"
            } else {
#line 3607 "cplus.met"
                tokenAhead = 0 ;
#line 3607 "cplus.met"
            }
#line 3607 "cplus.met"
#line 3608 "cplus.met"
            {
#line 3608 "cplus.met"
                PPTREE _ptTree0=0,_ptRes0=0;
#line 3608 "cplus.met"
                _ptRes0= MakeTree(IF, 3);
#line 3608 "cplus.met"
                if ( (_ptTree0=NQUICK_CALL(_Tak(expression)(error_free), 67, cplus))== (PPTREE) -1 ) {
#line 3608 "cplus.met"
                    MulFreeTree(5,_ptRes0,_ptTree0,opt,stat,statTree);
                    PROG_EXIT(statement_exit,"statement")
#line 3608 "cplus.met"
                }
#line 3608 "cplus.met"
                ReplaceTree(_ptRes0, 1, _ptTree0);
#line 3608 "cplus.met"
                statTree=_ptRes0;
#line 3608 "cplus.met"
            }
#line 3608 "cplus.met"
#line 3609 "cplus.met"
            (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3609 "cplus.met"
            if (  !SEE_TOKEN( PFER,")") || !(CommTerm(),1)) {
#line 3609 "cplus.met"
                MulFreeTree(3,opt,stat,statTree);
                TOKEN_EXIT(statement_exit,")")
#line 3609 "cplus.met"
            } else {
#line 3609 "cplus.met"
                tokenAhead = 0 ;
#line 3609 "cplus.met"
            }
#line 3609 "cplus.met"
#line 3610 "cplus.met"
            {
#line 3610 "cplus.met"
                switchContext = 0 ;
#line 3610 "cplus.met"
#line 3611 "cplus.met"
                {
#line 3611 "cplus.met"
                    PPTREE _ptTree0=0;
#line 3611 "cplus.met"
                    if ( (_ptTree0=NQUICK_CALL(_Tak(statement)(error_free), 146, cplus))== (PPTREE) -1 ) {
#line 3611 "cplus.met"
                        MulFreeTree(4,_ptTree0,opt,stat,statTree);
                        PROG_EXIT(statement_exit,"statement")
#line 3611 "cplus.met"
                    }
#line 3611 "cplus.met"
                    ReplaceTree(statTree , 2 , _ptTree0);
#line 3611 "cplus.met"
                }
#line 3611 "cplus.met"
                switchContext =  _oldswitchContext;
#line 3611 "cplus.met"
            }
#line 3611 "cplus.met"
#line 3612 "cplus.met"
            if ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN(ELSE,"else") && (tokenAhead = 0,CommTerm(),1)){
#line 3612 "cplus.met"
#line 3613 "cplus.met"
                {
#line 3613 "cplus.met"
                    switchContext = 0 ;
#line 3613 "cplus.met"
#line 3614 "cplus.met"
                    {
#line 3614 "cplus.met"
                        PPTREE _ptTree0=0;
#line 3614 "cplus.met"
                        if ( (_ptTree0=NQUICK_CALL(_Tak(statement)(error_free), 146, cplus))== (PPTREE) -1 ) {
#line 3614 "cplus.met"
                            MulFreeTree(4,_ptTree0,opt,stat,statTree);
                            PROG_EXIT(statement_exit,"statement")
#line 3614 "cplus.met"
                        }
#line 3614 "cplus.met"
                        ReplaceTree(statTree , 3 , _ptTree0);
#line 3614 "cplus.met"
                    }
#line 3614 "cplus.met"
                    switchContext =  _oldswitchContext;
#line 3614 "cplus.met"
                }
#line 3614 "cplus.met"
            }
#line 3614 "cplus.met"
#line 3614 "cplus.met"
            break;
#line 3614 "cplus.met"
#line 3616 "cplus.met"
        case PVIR : 
#line 3616 "cplus.met"
            tokenAhead = 0 ;
#line 3616 "cplus.met"
            CommTerm();
#line 3616 "cplus.met"
#line 3616 "cplus.met"
            {
#line 3616 "cplus.met"
                PPTREE _ptRes0=0;
#line 3616 "cplus.met"
                _ptRes0= MakeTree(STAT_VOID, 0);
#line 3616 "cplus.met"
                statTree=_ptRes0;
#line 3616 "cplus.met"
            }
#line 3616 "cplus.met"
            break;
#line 3616 "cplus.met"
#line 3617 "cplus.met"
        case RETURN : 
#line 3617 "cplus.met"
            tokenAhead = 0 ;
#line 3617 "cplus.met"
            CommTerm();
#line 3617 "cplus.met"
#line 3618 "cplus.met"
#line 3619 "cplus.met"
            {
#line 3619 "cplus.met"
                PPTREE _ptRes0=0;
#line 3619 "cplus.met"
                _ptRes0= MakeTree(RETURN, 1);
#line 3619 "cplus.met"
                statTree=_ptRes0;
#line 3619 "cplus.met"
            }
#line 3619 "cplus.met"
#line 3620 "cplus.met"
            if (NPUSH_CALL_AFF_VERIF(opt = ,_Tak(expression), 67, cplus)){
#line 3620 "cplus.met"
#line 3621 "cplus.met"
                ReplaceTree(statTree ,1 ,opt );
#line 3621 "cplus.met"
#line 3621 "cplus.met"
            }
#line 3621 "cplus.met"
#line 3622 "cplus.met"
            (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3622 "cplus.met"
            if (  !SEE_TOKEN( PVIR,";") || !(CommTerm(),1)) {
#line 3622 "cplus.met"
                MulFreeTree(3,opt,stat,statTree);
                TOKEN_EXIT(statement_exit,";")
#line 3622 "cplus.met"
            } else {
#line 3622 "cplus.met"
                tokenAhead = 0 ;
#line 3622 "cplus.met"
            }
#line 3622 "cplus.met"
#line 3622 "cplus.met"
            break;
#line 3622 "cplus.met"
#line 3624 "cplus.met"
        case SWITCH : 
#line 3624 "cplus.met"
            tokenAhead = 0 ;
#line 3624 "cplus.met"
            CommTerm();
#line 3624 "cplus.met"
#line 3625 "cplus.met"
#line 3626 "cplus.met"
            (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3626 "cplus.met"
            if (  !SEE_TOKEN( POUV,"(") || !(CommTerm(),1)) {
#line 3626 "cplus.met"
                MulFreeTree(3,opt,stat,statTree);
                TOKEN_EXIT(statement_exit,"(")
#line 3626 "cplus.met"
            } else {
#line 3626 "cplus.met"
                tokenAhead = 0 ;
#line 3626 "cplus.met"
            }
#line 3626 "cplus.met"
#line 3627 "cplus.met"
            {
#line 3627 "cplus.met"
                PPTREE _ptTree0=0,_ptRes0=0;
#line 3627 "cplus.met"
                _ptRes0= MakeTree(SWITCH, 2);
#line 3627 "cplus.met"
                if ( (_ptTree0=NQUICK_CALL(_Tak(expression)(error_free), 67, cplus))== (PPTREE) -1 ) {
#line 3627 "cplus.met"
                    MulFreeTree(5,_ptRes0,_ptTree0,opt,stat,statTree);
                    PROG_EXIT(statement_exit,"statement")
#line 3627 "cplus.met"
                }
#line 3627 "cplus.met"
                ReplaceTree(_ptRes0, 1, _ptTree0);
#line 3627 "cplus.met"
                statTree=_ptRes0;
#line 3627 "cplus.met"
            }
#line 3627 "cplus.met"
#line 3628 "cplus.met"
            (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3628 "cplus.met"
            if (  !SEE_TOKEN( PFER,")") || !(CommTerm(),1)) {
#line 3628 "cplus.met"
                MulFreeTree(3,opt,stat,statTree);
                TOKEN_EXIT(statement_exit,")")
#line 3628 "cplus.met"
            } else {
#line 3628 "cplus.met"
                tokenAhead = 0 ;
#line 3628 "cplus.met"
            }
#line 3628 "cplus.met"
#line 3629 "cplus.met"
            {
#line 3629 "cplus.met"
                switchContext = 0 ;
#line 3629 "cplus.met"
#line 3630 "cplus.met"
                {
#line 3630 "cplus.met"
                    PPTREE _ptTree0=0;
#line 3630 "cplus.met"
                    if ( (_ptTree0=NQUICK_CALL(_Tak(switch_list)(error_free), 150, cplus))== (PPTREE) -1 ) {
#line 3630 "cplus.met"
                        MulFreeTree(4,_ptTree0,opt,stat,statTree);
                        PROG_EXIT(statement_exit,"statement")
#line 3630 "cplus.met"
                    }
#line 3630 "cplus.met"
                    ReplaceTree(statTree , 2 , _ptTree0);
#line 3630 "cplus.met"
                }
#line 3630 "cplus.met"
                switchContext =  _oldswitchContext;
#line 3630 "cplus.met"
            }
#line 3630 "cplus.met"
#line 3630 "cplus.met"
            break;
#line 3630 "cplus.met"
#line 3632 "cplus.met"
        case WHILE : 
#line 3632 "cplus.met"
            tokenAhead = 0 ;
#line 3632 "cplus.met"
            CommTerm();
#line 3632 "cplus.met"
#line 3633 "cplus.met"
#line 3634 "cplus.met"
            (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3634 "cplus.met"
            if (  !SEE_TOKEN( POUV,"(") || !(CommTerm(),1)) {
#line 3634 "cplus.met"
                MulFreeTree(3,opt,stat,statTree);
                TOKEN_EXIT(statement_exit,"(")
#line 3634 "cplus.met"
            } else {
#line 3634 "cplus.met"
                tokenAhead = 0 ;
#line 3634 "cplus.met"
            }
#line 3634 "cplus.met"
#line 3635 "cplus.met"
            {
#line 3635 "cplus.met"
                PPTREE _ptTree0=0,_ptRes0=0;
#line 3635 "cplus.met"
                _ptRes0= MakeTree(WHILE, 2);
#line 3635 "cplus.met"
                if ( (_ptTree0=NQUICK_CALL(_Tak(expression)(error_free), 67, cplus))== (PPTREE) -1 ) {
#line 3635 "cplus.met"
                    MulFreeTree(5,_ptRes0,_ptTree0,opt,stat,statTree);
                    PROG_EXIT(statement_exit,"statement")
#line 3635 "cplus.met"
                }
#line 3635 "cplus.met"
                ReplaceTree(_ptRes0, 1, _ptTree0);
#line 3635 "cplus.met"
                statTree=_ptRes0;
#line 3635 "cplus.met"
            }
#line 3635 "cplus.met"
#line 3636 "cplus.met"
            (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3636 "cplus.met"
            if (  !SEE_TOKEN( PFER,")") || !(CommTerm(),1)) {
#line 3636 "cplus.met"
                MulFreeTree(3,opt,stat,statTree);
                TOKEN_EXIT(statement_exit,")")
#line 3636 "cplus.met"
            } else {
#line 3636 "cplus.met"
                tokenAhead = 0 ;
#line 3636 "cplus.met"
            }
#line 3636 "cplus.met"
#line 3637 "cplus.met"
            {
#line 3637 "cplus.met"
                switchContext = 0 ;
#line 3637 "cplus.met"
#line 3638 "cplus.met"
                {
#line 3638 "cplus.met"
                    PPTREE _ptTree0=0;
#line 3638 "cplus.met"
                    if ( (_ptTree0=NQUICK_CALL(_Tak(statement)(error_free), 146, cplus))== (PPTREE) -1 ) {
#line 3638 "cplus.met"
                        MulFreeTree(4,_ptTree0,opt,stat,statTree);
                        PROG_EXIT(statement_exit,"statement")
#line 3638 "cplus.met"
                    }
#line 3638 "cplus.met"
                    ReplaceTree(statTree , 2 , _ptTree0);
#line 3638 "cplus.met"
                }
#line 3638 "cplus.met"
                switchContext =  _oldswitchContext;
#line 3638 "cplus.met"
            }
#line 3638 "cplus.met"
#line 3638 "cplus.met"
            break;
#line 3638 "cplus.met"
#line 3640 "cplus.met"
        case FORALLSONS : 
#line 3640 "cplus.met"
            tokenAhead = 0 ;
#line 3640 "cplus.met"
            CommTerm();
#line 3640 "cplus.met"
#line 3641 "cplus.met"
#line 3642 "cplus.met"
            (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3642 "cplus.met"
            if (  !SEE_TOKEN( POUV,"(") || !(CommTerm(),1)) {
#line 3642 "cplus.met"
                MulFreeTree(3,opt,stat,statTree);
                TOKEN_EXIT(statement_exit,"(")
#line 3642 "cplus.met"
            } else {
#line 3642 "cplus.met"
                tokenAhead = 0 ;
#line 3642 "cplus.met"
            }
#line 3642 "cplus.met"
#line 3643 "cplus.met"
            {
#line 3643 "cplus.met"
                PPTREE _ptTree0=0,_ptRes0=0;
#line 3643 "cplus.met"
                _ptRes0= MakeTree(FORALLSONS, 2);
#line 3643 "cplus.met"
                {
#line 3643 "cplus.met"
                    PPTREE _ptTree1=0,_ptRes1=0;
#line 3643 "cplus.met"
                    _ptRes1= MakeTree(IDENT, 1);
#line 3643 "cplus.met"
                    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3643 "cplus.met"
                    if ( ! TERM_OR_META(IDENT,"IDENT") || !(BUILD_TERM_META(_ptTree1))) {
#line 3643 "cplus.met"
                        MulFreeTree(7,_ptRes1,_ptTree1,_ptRes0,_ptTree0,opt,stat,statTree);
                        TOKEN_EXIT(statement_exit,"IDENT")
#line 3643 "cplus.met"
                    } else {
#line 3643 "cplus.met"
                        tokenAhead = 0 ;
#line 3643 "cplus.met"
                    }
#line 3643 "cplus.met"
                    ReplaceTree(_ptRes1, 1, _ptTree1);
#line 3643 "cplus.met"
                    _ptTree0=_ptRes1;
#line 3643 "cplus.met"
                }
#line 3643 "cplus.met"
                ReplaceTree(_ptRes0, 1, _ptTree0);
#line 3643 "cplus.met"
                statTree=_ptRes0;
#line 3643 "cplus.met"
            }
#line 3643 "cplus.met"
#line 3644 "cplus.met"
            (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3644 "cplus.met"
            if (  !SEE_TOKEN( VIRG,",") || !(CommTerm(),1)) {
#line 3644 "cplus.met"
                MulFreeTree(3,opt,stat,statTree);
                TOKEN_EXIT(statement_exit,",")
#line 3644 "cplus.met"
            } else {
#line 3644 "cplus.met"
                tokenAhead = 0 ;
#line 3644 "cplus.met"
            }
#line 3644 "cplus.met"
#line 3645 "cplus.met"
            {
#line 3645 "cplus.met"
                switchContext = 0 ;
#line 3645 "cplus.met"
#line 3646 "cplus.met"
                if (! (NPUSH_CALL_AFF_VERIF(stat = ,_Tak(statement), 146, cplus))){
#line 3646 "cplus.met"
#line 3647 "cplus.met"
                    if ( (stat=NQUICK_CALL(_Tak(expression)(error_free), 67, cplus))== (PPTREE) -1 ) {
#line 3647 "cplus.met"
                        MulFreeTree(3,opt,stat,statTree);
                        PROG_EXIT(statement_exit,"statement")
#line 3647 "cplus.met"
                    }
#line 3647 "cplus.met"
                }
#line 3647 "cplus.met"
                switchContext =  _oldswitchContext;
#line 3647 "cplus.met"
            }
#line 3647 "cplus.met"
#line 3648 "cplus.met"
            ReplaceTree(statTree ,2 ,stat );
#line 3648 "cplus.met"
#line 3649 "cplus.met"
            (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3649 "cplus.met"
            if (  !SEE_TOKEN( PFER,")") || !(CommTerm(),1)) {
#line 3649 "cplus.met"
                MulFreeTree(3,opt,stat,statTree);
                TOKEN_EXIT(statement_exit,")")
#line 3649 "cplus.met"
            } else {
#line 3649 "cplus.met"
                tokenAhead = 0 ;
#line 3649 "cplus.met"
            }
#line 3649 "cplus.met"
#line 3649 "cplus.met"
            break;
#line 3649 "cplus.met"
#line 3651 "cplus.met"
        case THROW : 
#line 3651 "cplus.met"
            tokenAhead = 0 ;
#line 3651 "cplus.met"
            CommTerm();
#line 3651 "cplus.met"
#line 3652 "cplus.met"
#line 3653 "cplus.met"
            {
#line 3653 "cplus.met"
                PPTREE _ptRes0=0;
#line 3653 "cplus.met"
                _ptRes0= MakeTree(THROW_ANSI, 1);
#line 3653 "cplus.met"
                statTree=_ptRes0;
#line 3653 "cplus.met"
            }
#line 3653 "cplus.met"
#line 3654 "cplus.met"
            if (NPUSH_CALL_AFF_VERIF(opt = ,_Tak(expression), 67, cplus)){
#line 3654 "cplus.met"
#line 3655 "cplus.met"
                ReplaceTree(statTree ,1 ,opt );
#line 3655 "cplus.met"
#line 3655 "cplus.met"
            }
#line 3655 "cplus.met"
#line 3656 "cplus.met"
            (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3656 "cplus.met"
            if (  !SEE_TOKEN( PVIR,";") || !(CommTerm(),1)) {
#line 3656 "cplus.met"
                MulFreeTree(3,opt,stat,statTree);
                TOKEN_EXIT(statement_exit,";")
#line 3656 "cplus.met"
            } else {
#line 3656 "cplus.met"
                tokenAhead = 0 ;
#line 3656 "cplus.met"
            }
#line 3656 "cplus.met"
#line 3656 "cplus.met"
            break;
#line 3656 "cplus.met"
#line 3658 "cplus.met"
        case TRY : 
#line 3658 "cplus.met"
#line 3658 "cplus.met"
            if ( (statTree=NQUICK_CALL(_Tak(exception_ansi)(error_free), 64, cplus))== (PPTREE) -1 ) {
#line 3658 "cplus.met"
                MulFreeTree(3,opt,stat,statTree);
                PROG_EXIT(statement_exit,"statement")
#line 3658 "cplus.met"
            }
#line 3658 "cplus.met"
            break;
#line 3658 "cplus.met"
#line 3659 "cplus.met"
        case META : 
#line 3659 "cplus.met"
#line 3660 "cplus.met"
            if (NPUSH_CALL_VERIF(_Tak(label_beg), 92, cplus)){
#line 3660 "cplus.met"
#line 3661 "cplus.met"
#line 3662 "cplus.met"
                {
#line 3662 "cplus.met"
                    PPTREE _ptTree0=0,_ptRes0=0;
#line 3662 "cplus.met"
                    _ptRes0= MakeTree(LABEL, 2);
#line 3662 "cplus.met"
                    {
#line 3662 "cplus.met"
                        PPTREE _ptTree1=0,_ptRes1=0;
#line 3662 "cplus.met"
                        _ptRes1= MakeTree(IDENT, 1);
#line 3662 "cplus.met"
                        (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3662 "cplus.met"
                        if ( ! TERM_OR_META(IDENT,"IDENT") || !(BUILD_TERM_META(_ptTree1))) {
#line 3662 "cplus.met"
                            MulFreeTree(7,_ptRes1,_ptTree1,_ptRes0,_ptTree0,opt,stat,statTree);
                            TOKEN_EXIT(statement_exit,"IDENT")
#line 3662 "cplus.met"
                        } else {
#line 3662 "cplus.met"
                            tokenAhead = 0 ;
#line 3662 "cplus.met"
                        }
#line 3662 "cplus.met"
                        ReplaceTree(_ptRes1, 1, _ptTree1);
#line 3662 "cplus.met"
                        _ptTree0=_ptRes1;
#line 3662 "cplus.met"
                    }
#line 3662 "cplus.met"
                    ReplaceTree(_ptRes0, 1, _ptTree0);
#line 3662 "cplus.met"
                    statTree=_ptRes0;
#line 3662 "cplus.met"
                }
#line 3662 "cplus.met"
#line 3663 "cplus.met"
                (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3663 "cplus.met"
                if (  !SEE_TOKEN( DPOI,":") || !(CommTerm(),1)) {
#line 3663 "cplus.met"
                    MulFreeTree(3,opt,stat,statTree);
                    TOKEN_EXIT(statement_exit,":")
#line 3663 "cplus.met"
                } else {
#line 3663 "cplus.met"
                    tokenAhead = 0 ;
#line 3663 "cplus.met"
                }
#line 3663 "cplus.met"
#line 3664 "cplus.met"
                {
#line 3664 "cplus.met"
                    switchContext = 0 ;
#line 3664 "cplus.met"
#line 3665 "cplus.met"
                    {
#line 3665 "cplus.met"
                        PPTREE _ptTree0=0;
#line 3665 "cplus.met"
                        if ( (_ptTree0=NQUICK_CALL(_Tak(statement)(error_free), 146, cplus))== (PPTREE) -1 ) {
#line 3665 "cplus.met"
                            MulFreeTree(4,_ptTree0,opt,stat,statTree);
                            PROG_EXIT(statement_exit,"statement")
#line 3665 "cplus.met"
                        }
#line 3665 "cplus.met"
                        ReplaceTree(statTree , 2 , _ptTree0);
#line 3665 "cplus.met"
                    }
#line 3665 "cplus.met"
                    switchContext =  _oldswitchContext;
#line 3665 "cplus.met"
                }
#line 3665 "cplus.met"
#line 3665 "cplus.met"
#line 3665 "cplus.met"
            } else {
#line 3665 "cplus.met"
#line 3668 "cplus.met"
                if (NPUSH_CALL_VERIF(_Tak(ident_mul), 83, cplus)){
#line 3668 "cplus.met"
#line 3670 "cplus.met"
                    
#line 3670 "cplus.met"
                    MulFreeTree(3,opt,stat,statTree);
                    LEX_EXIT ("",0);
#line 3670 "cplus.met"
                    goto statement_exit;
#line 3670 "cplus.met"
#line 3671 "cplus.met"
                } else {
#line 3671 "cplus.met"
#line 3673 "cplus.met"
#line 3674 "cplus.met"
                    if ( (statTree=NQUICK_CALL(_Tak(expression)(error_free), 67, cplus))== (PPTREE) -1 ) {
#line 3674 "cplus.met"
                        MulFreeTree(3,opt,stat,statTree);
                        PROG_EXIT(statement_exit,"statement")
#line 3674 "cplus.met"
                    }
#line 3674 "cplus.met"
#line 3675 "cplus.met"
                    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3675 "cplus.met"
                    if (  !SEE_TOKEN( PVIR,";") || !(CommTerm(),1)) {
#line 3675 "cplus.met"
                        MulFreeTree(3,opt,stat,statTree);
                        TOKEN_EXIT(statement_exit,";")
#line 3675 "cplus.met"
                    } else {
#line 3675 "cplus.met"
                        tokenAhead = 0 ;
#line 3675 "cplus.met"
                    }
#line 3675 "cplus.met"
#line 3675 "cplus.met"
                }
#line 3675 "cplus.met"
            }
#line 3675 "cplus.met"
            break;
#line 3675 "cplus.met"
#line 3679 "cplus.met"
        case CASE : 
#line 3679 "cplus.met"
#line 3680 "cplus.met"
            if (! (switchContext)){
#line 3680 "cplus.met"
#line 3681 "cplus.met"
                
#line 3681 "cplus.met"
                MulFreeTree(3,opt,stat,statTree);
                LEX_EXIT ("",0);
#line 3681 "cplus.met"
                goto statement_exit;
#line 3681 "cplus.met"
#line 3681 "cplus.met"
            } else {
#line 3681 "cplus.met"
#line 3683 "cplus.met"
                {
#line 3683 "cplus.met"
                    PPTREE _ptTree0=0;
#line 3683 "cplus.met"
                    if ( (_ptTree0=NQUICK_CALL(_Tak(switch_elem)(error_free), 149, cplus))== (PPTREE) -1 ) {
#line 3683 "cplus.met"
                        MulFreeTree(4,_ptTree0,opt,stat,statTree);
                        PROG_EXIT(statement_exit,"statement")
#line 3683 "cplus.met"
                    }
#line 3683 "cplus.met"
                    _retValue =_ptTree0;
#line 3683 "cplus.met"
                    goto statement_ret;
#line 3683 "cplus.met"
                }
#line 3683 "cplus.met"
            }
#line 3683 "cplus.met"
            break;
#line 3683 "cplus.met"
#line 3684 "cplus.met"
        case DEFAULT : 
#line 3684 "cplus.met"
#line 3685 "cplus.met"
            if (! (switchContext)){
#line 3685 "cplus.met"
#line 3686 "cplus.met"
                
#line 3686 "cplus.met"
                MulFreeTree(3,opt,stat,statTree);
                LEX_EXIT ("",0);
#line 3686 "cplus.met"
                goto statement_exit;
#line 3686 "cplus.met"
#line 3686 "cplus.met"
            } else {
#line 3686 "cplus.met"
#line 3688 "cplus.met"
                {
#line 3688 "cplus.met"
                    PPTREE _ptTree0=0;
#line 3688 "cplus.met"
                    if ( (_ptTree0=NQUICK_CALL(_Tak(switch_elem)(error_free), 149, cplus))== (PPTREE) -1 ) {
#line 3688 "cplus.met"
                        MulFreeTree(4,_ptTree0,opt,stat,statTree);
                        PROG_EXIT(statement_exit,"statement")
#line 3688 "cplus.met"
                    }
#line 3688 "cplus.met"
                    _retValue =_ptTree0;
#line 3688 "cplus.met"
                    goto statement_ret;
#line 3688 "cplus.met"
                }
#line 3688 "cplus.met"
            }
#line 3688 "cplus.met"
            break;
#line 3688 "cplus.met"
#line 3689 "cplus.met"
        case IDENT : 
#line 3689 "cplus.met"
#line 3690 "cplus.met"
            (tokenAhead == 14|| (the_exit(),TRACE_LEX(1)));
#line 3690 "cplus.met"
            switch( lexEl.Value) {
#line 3690 "cplus.met"
#line 3691 "cplus.met"
                case META : 
#line 3691 "cplus.met"
                case FUNC_SPEC : 
#line 3691 "cplus.met"
#line 3692 "cplus.met"
#line 3693 "cplus.met"
                    {
#line 3693 "cplus.met"
                        PPTREE _ptTree0=0,_ptRes0=0;
#line 3693 "cplus.met"
                        _ptRes0= MakeTree(FUNC_SPEC, 2);
#line 3693 "cplus.met"
                        {
#line 3693 "cplus.met"
                            PPTREE _ptTree1=0,_ptRes1=0;
#line 3693 "cplus.met"
                            _ptRes1= MakeTree(IDENT, 1);
#line 3693 "cplus.met"
                            (tokenAhead == 14|| (the_exit(),TRACE_LEX(1)));
#line 3693 "cplus.met"
                            if ( ! TERM_OR_META(FUNC_SPEC,"FUNC_SPEC") || !(BUILD_TERM_META(_ptTree1))) {
#line 3693 "cplus.met"
                                MulFreeTree(7,_ptRes1,_ptTree1,_ptRes0,_ptTree0,opt,stat,statTree);
                                TOKEN_EXIT(statement_exit,"FUNC_SPEC")
#line 3693 "cplus.met"
                            } else {
#line 3693 "cplus.met"
                                tokenAhead = 0 ;
#line 3693 "cplus.met"
                            }
#line 3693 "cplus.met"
                            ReplaceTree(_ptRes1, 1, _ptTree1);
#line 3693 "cplus.met"
                            _ptTree0=_ptRes1;
#line 3693 "cplus.met"
                        }
#line 3693 "cplus.met"
                        ReplaceTree(_ptRes0, 1, _ptTree0);
#line 3693 "cplus.met"
                        statTree=_ptRes0;
#line 3693 "cplus.met"
                    }
#line 3693 "cplus.met"
#line 3694 "cplus.met"
                    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3694 "cplus.met"
                    if (  !SEE_TOKEN( POUV,"(") || !(CommTerm(),1)) {
#line 3694 "cplus.met"
                        MulFreeTree(3,opt,stat,statTree);
                        TOKEN_EXIT(statement_exit,"(")
#line 3694 "cplus.met"
                    } else {
#line 3694 "cplus.met"
                        tokenAhead = 0 ;
#line 3694 "cplus.met"
                    }
#line 3694 "cplus.met"
#line 3695 "cplus.met"
                    {
#line 3695 "cplus.met"
                        PPTREE _ptTree0=0;
#line 3695 "cplus.met"
                        if ( (_ptTree0=NQUICK_CALL(_Tak(expression)(error_free), 67, cplus))== (PPTREE) -1 ) {
#line 3695 "cplus.met"
                            MulFreeTree(4,_ptTree0,opt,stat,statTree);
                            PROG_EXIT(statement_exit,"statement")
#line 3695 "cplus.met"
                        }
#line 3695 "cplus.met"
                        ReplaceTree(statTree , 2 , _ptTree0);
#line 3695 "cplus.met"
                    }
#line 3695 "cplus.met"
#line 3696 "cplus.met"
                    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3696 "cplus.met"
                    if (  !SEE_TOKEN( PFER,")") || !(CommTerm(),1)) {
#line 3696 "cplus.met"
                        MulFreeTree(3,opt,stat,statTree);
                        TOKEN_EXIT(statement_exit,")")
#line 3696 "cplus.met"
                    } else {
#line 3696 "cplus.met"
                        tokenAhead = 0 ;
#line 3696 "cplus.met"
                    }
#line 3696 "cplus.met"
#line 3696 "cplus.met"
                    break;
#line 3696 "cplus.met"
#line 3701 "cplus.met"
                default : 
#line 3701 "cplus.met"
#line 3699 "cplus.met"
                    if (NPUSH_CALL_VERIF(_Tak(label_beg), 92, cplus)){
#line 3699 "cplus.met"
#line 3700 "cplus.met"
#line 3701 "cplus.met"
                        {
#line 3701 "cplus.met"
                            PPTREE _ptTree0=0,_ptRes0=0;
#line 3701 "cplus.met"
                            _ptRes0= MakeTree(LABEL, 2);
#line 3701 "cplus.met"
                            {
#line 3701 "cplus.met"
                                PPTREE _ptTree1=0,_ptRes1=0;
#line 3701 "cplus.met"
                                _ptRes1= MakeTree(IDENT, 1);
#line 3701 "cplus.met"
                                (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3701 "cplus.met"
                                if ( ! TERM_OR_META(IDENT,"IDENT") || !(BUILD_TERM_META(_ptTree1))) {
#line 3701 "cplus.met"
                                    MulFreeTree(7,_ptRes1,_ptTree1,_ptRes0,_ptTree0,opt,stat,statTree);
                                    TOKEN_EXIT(statement_exit,"IDENT")
#line 3701 "cplus.met"
                                } else {
#line 3701 "cplus.met"
                                    tokenAhead = 0 ;
#line 3701 "cplus.met"
                                }
#line 3701 "cplus.met"
                                ReplaceTree(_ptRes1, 1, _ptTree1);
#line 3701 "cplus.met"
                                _ptTree0=_ptRes1;
#line 3701 "cplus.met"
                            }
#line 3701 "cplus.met"
                            ReplaceTree(_ptRes0, 1, _ptTree0);
#line 3701 "cplus.met"
                            statTree=_ptRes0;
#line 3701 "cplus.met"
                        }
#line 3701 "cplus.met"
#line 3702 "cplus.met"
                        (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3702 "cplus.met"
                        if (  !SEE_TOKEN( DPOI,":") || !(CommTerm(),1)) {
#line 3702 "cplus.met"
                            MulFreeTree(3,opt,stat,statTree);
                            TOKEN_EXIT(statement_exit,":")
#line 3702 "cplus.met"
                        } else {
#line 3702 "cplus.met"
                            tokenAhead = 0 ;
#line 3702 "cplus.met"
                        }
#line 3702 "cplus.met"
#line 3703 "cplus.met"
                        {
#line 3703 "cplus.met"
                            switchContext = 0 ;
#line 3703 "cplus.met"
#line 3704 "cplus.met"
                            {
#line 3704 "cplus.met"
                                PPTREE _ptTree0=0;
#line 3704 "cplus.met"
                                if ( (_ptTree0=NQUICK_CALL(_Tak(statement)(error_free), 146, cplus))== (PPTREE) -1 ) {
#line 3704 "cplus.met"
                                    MulFreeTree(4,_ptTree0,opt,stat,statTree);
                                    PROG_EXIT(statement_exit,"statement")
#line 3704 "cplus.met"
                                }
#line 3704 "cplus.met"
                                ReplaceTree(statTree , 2 , _ptTree0);
#line 3704 "cplus.met"
                            }
#line 3704 "cplus.met"
                            switchContext =  _oldswitchContext;
#line 3704 "cplus.met"
                        }
#line 3704 "cplus.met"
#line 3704 "cplus.met"
#line 3704 "cplus.met"
                    } else {
#line 3704 "cplus.met"
#line 3707 "cplus.met"
                        if (NPUSH_CALL_VERIF(_Tak(ident_mul), 83, cplus)){
#line 3707 "cplus.met"
#line 3710 "cplus.met"
                            
#line 3710 "cplus.met"
                            MulFreeTree(3,opt,stat,statTree);
                            LEX_EXIT ("",0);
#line 3710 "cplus.met"
                            goto statement_exit;
#line 3710 "cplus.met"
#line 3711 "cplus.met"
                        } else {
#line 3711 "cplus.met"
#line 3713 "cplus.met"
#line 3714 "cplus.met"
                            if ( (statTree=NQUICK_CALL(_Tak(statement_expression)(error_free), 147, cplus))== (PPTREE) -1 ) {
#line 3714 "cplus.met"
                                MulFreeTree(3,opt,stat,statTree);
                                PROG_EXIT(statement_exit,"statement")
#line 3714 "cplus.met"
                            }
#line 3714 "cplus.met"
#line 3714 "cplus.met"
                        }
#line 3714 "cplus.met"
                    }
#line 3714 "cplus.met"
                    break;
#line 3714 "cplus.met"
            }
#line 3714 "cplus.met"
            break;
#line 3714 "cplus.met"
#line 3720 "cplus.met"
        default : 
#line 3720 "cplus.met"
#line 3718 "cplus.met"
#line 3719 "cplus.met"
            if (NPUSH_CALL_VERIF(_Tak(ident_mul), 83, cplus)){
#line 3719 "cplus.met"
#line 3720 "cplus.met"
                
#line 3720 "cplus.met"
                MulFreeTree(3,opt,stat,statTree);
                LEX_EXIT ("",0);
#line 3720 "cplus.met"
                goto statement_exit;
#line 3720 "cplus.met"
#line 3720 "cplus.met"
            } else {
#line 3720 "cplus.met"
#line 3722 "cplus.met"
#line 3723 "cplus.met"
                if ( (statTree=NQUICK_CALL(_Tak(expression)(error_free), 67, cplus))== (PPTREE) -1 ) {
#line 3723 "cplus.met"
                    MulFreeTree(3,opt,stat,statTree);
                    PROG_EXIT(statement_exit,"statement")
#line 3723 "cplus.met"
                }
#line 3723 "cplus.met"
#line 3724 "cplus.met"
                (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3724 "cplus.met"
                if (  !SEE_TOKEN( PVIR,";") || !(CommTerm(),1)) {
#line 3724 "cplus.met"
                    MulFreeTree(3,opt,stat,statTree);
                    TOKEN_EXIT(statement_exit,";")
#line 3724 "cplus.met"
                } else {
#line 3724 "cplus.met"
                    tokenAhead = 0 ;
#line 3724 "cplus.met"
                }
#line 3724 "cplus.met"
#line 3724 "cplus.met"
            }
#line 3724 "cplus.met"
#line 3724 "cplus.met"
            break;
#line 3724 "cplus.met"
    }
#line 3724 "cplus.met"
#line 3728 "cplus.met"
    {
#line 3728 "cplus.met"
        _retValue = statTree ;
#line 3728 "cplus.met"
        goto statement_ret;
#line 3728 "cplus.met"
        
#line 3728 "cplus.met"
    }
#line 3728 "cplus.met"
#line 3728 "cplus.met"
#line 3728 "cplus.met"

#line 3729 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 3729 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 3729 "cplus.met"
switchContext =  _oldswitchContext;
#line 3729 "cplus.met"
return((PPTREE) 0);
#line 3729 "cplus.met"

#line 3729 "cplus.met"
statement_exit :
#line 3729 "cplus.met"

#line 3729 "cplus.met"
    _Debug = TRACE_RULE("statement",TRACE_EXIT,(PPTREE)0);
#line 3729 "cplus.met"
    _funcLevel--;
#line 3729 "cplus.met"
    switchContext =  _oldswitchContext;
#line 3729 "cplus.met"
    return((PPTREE) -1) ;
#line 3729 "cplus.met"

#line 3729 "cplus.met"
statement_ret :
#line 3729 "cplus.met"
    
#line 3729 "cplus.met"
    _Debug = TRACE_RULE("statement",TRACE_RETURN,_retValue);
#line 3729 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 3729 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 3729 "cplus.met"
    switchContext =  _oldswitchContext;
#line 3729 "cplus.met"
    return _retValue ;
#line 3729 "cplus.met"
}
#line 3729 "cplus.met"

#line 3729 "cplus.met"
