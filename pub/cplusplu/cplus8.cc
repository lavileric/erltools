/*************************************************************************/
/*                                                                       */
/*        Produced by MetaGen version 2.0  -    1989-2006                 */
/*       Syntaxic Analyzer Meta Generator developped by                  */
/*                  Eric Lavillonniere                                   */
/*                                                                       */
/*************************************************************************/

#include "token.h"
#include "cplus.h"


#line 2830 "cplus.met"
PPTREE cplus::relational_expression ( int error_free)
#line 2830 "cplus.met"
{
#line 2830 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 2830 "cplus.met"
    int _value,_nbPre = 0 ;
#line 2830 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 2830 "cplus.met"
    int _Debug = TRACE_RULE("relational_expression",TRACE_ENTER,(PPTREE)0);
#line 2830 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 2830 "cplus.met"
#line 2830 "cplus.met"
    PPTREE expTree = (PPTREE) 0;
#line 2830 "cplus.met"
#line 2832 "cplus.met"
    if ( (expTree=NQUICK_CALL(_Tak(shift_expression)(error_free), 133, cplus))== (PPTREE) -1 ) {
#line 2832 "cplus.met"
        MulFreeTree(1,expTree);
        PROG_EXIT(relational_expression_exit,"relational_expression")
#line 2832 "cplus.met"
    }
#line 2832 "cplus.met"
#line 2833 "cplus.met"
    while (((((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN( INFEEGAL,"<=")) || 
#line 2833 "cplus.met"
            ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN( SUPEEGAL,">="))) || 
#line 2833 "cplus.met"
           (((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN( SUPE,">")))) || 
#line 2833 "cplus.met"
          ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN( INFE,"<"))) { 
#line 2833 "cplus.met"
#line 2834 "cplus.met"
        (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 2834 "cplus.met"
        switch( lexEl.Value) {
#line 2834 "cplus.met"
#line 2835 "cplus.met"
            case INFEEGAL : 
#line 2835 "cplus.met"
                tokenAhead = 0 ;
#line 2835 "cplus.met"
                CommTerm();
#line 2835 "cplus.met"
#line 2835 "cplus.met"
                {
#line 2835 "cplus.met"
                    PPTREE _ptTree0=0,_ptRes0=0;
#line 2835 "cplus.met"
                    _ptRes0= MakeTree(LEQU, 2);
#line 2835 "cplus.met"
                    ReplaceTree(_ptRes0, 1, expTree );
#line 2835 "cplus.met"
                    if ( (_ptTree0=NQUICK_CALL(_Tak(shift_expression)(error_free), 133, cplus))== (PPTREE) -1 ) {
#line 2835 "cplus.met"
                        MulFreeTree(3,_ptRes0,_ptTree0,expTree);
                        PROG_EXIT(relational_expression_exit,"relational_expression")
#line 2835 "cplus.met"
                    }
#line 2835 "cplus.met"
                    ReplaceTree(_ptRes0, 2, _ptTree0);
#line 2835 "cplus.met"
                    expTree=_ptRes0;
#line 2835 "cplus.met"
                }
#line 2835 "cplus.met"
                break;
#line 2835 "cplus.met"
#line 2836 "cplus.met"
            case SUPEEGAL : 
#line 2836 "cplus.met"
                tokenAhead = 0 ;
#line 2836 "cplus.met"
                CommTerm();
#line 2836 "cplus.met"
#line 2836 "cplus.met"
                {
#line 2836 "cplus.met"
                    PPTREE _ptTree0=0,_ptRes0=0;
#line 2836 "cplus.met"
                    _ptRes0= MakeTree(GEQU, 2);
#line 2836 "cplus.met"
                    ReplaceTree(_ptRes0, 1, expTree );
#line 2836 "cplus.met"
                    if ( (_ptTree0=NQUICK_CALL(_Tak(shift_expression)(error_free), 133, cplus))== (PPTREE) -1 ) {
#line 2836 "cplus.met"
                        MulFreeTree(3,_ptRes0,_ptTree0,expTree);
                        PROG_EXIT(relational_expression_exit,"relational_expression")
#line 2836 "cplus.met"
                    }
#line 2836 "cplus.met"
                    ReplaceTree(_ptRes0, 2, _ptTree0);
#line 2836 "cplus.met"
                    expTree=_ptRes0;
#line 2836 "cplus.met"
                }
#line 2836 "cplus.met"
                break;
#line 2836 "cplus.met"
#line 2837 "cplus.met"
            case SUPE : 
#line 2837 "cplus.met"
                tokenAhead = 0 ;
#line 2837 "cplus.met"
                CommTerm();
#line 2837 "cplus.met"
#line 2837 "cplus.met"
                {
#line 2837 "cplus.met"
                    PPTREE _ptTree0=0,_ptRes0=0;
#line 2837 "cplus.met"
                    _ptRes0= MakeTree(GT, 2);
#line 2837 "cplus.met"
                    ReplaceTree(_ptRes0, 1, expTree );
#line 2837 "cplus.met"
                    if ( (_ptTree0=NQUICK_CALL(_Tak(shift_expression)(error_free), 133, cplus))== (PPTREE) -1 ) {
#line 2837 "cplus.met"
                        MulFreeTree(3,_ptRes0,_ptTree0,expTree);
                        PROG_EXIT(relational_expression_exit,"relational_expression")
#line 2837 "cplus.met"
                    }
#line 2837 "cplus.met"
                    ReplaceTree(_ptRes0, 2, _ptTree0);
#line 2837 "cplus.met"
                    expTree=_ptRes0;
#line 2837 "cplus.met"
                }
#line 2837 "cplus.met"
                break;
#line 2837 "cplus.met"
#line 2838 "cplus.met"
            case INFE : 
#line 2838 "cplus.met"
                tokenAhead = 0 ;
#line 2838 "cplus.met"
                CommTerm();
#line 2838 "cplus.met"
#line 2838 "cplus.met"
                {
#line 2838 "cplus.met"
                    PPTREE _ptTree0=0,_ptRes0=0;
#line 2838 "cplus.met"
                    _ptRes0= MakeTree(LT, 2);
#line 2838 "cplus.met"
                    ReplaceTree(_ptRes0, 1, expTree );
#line 2838 "cplus.met"
                    if ( (_ptTree0=NQUICK_CALL(_Tak(shift_expression)(error_free), 133, cplus))== (PPTREE) -1 ) {
#line 2838 "cplus.met"
                        MulFreeTree(3,_ptRes0,_ptTree0,expTree);
                        PROG_EXIT(relational_expression_exit,"relational_expression")
#line 2838 "cplus.met"
                    }
#line 2838 "cplus.met"
                    ReplaceTree(_ptRes0, 2, _ptTree0);
#line 2838 "cplus.met"
                    expTree=_ptRes0;
#line 2838 "cplus.met"
                }
#line 2838 "cplus.met"
                break;
#line 2838 "cplus.met"
            default :
#line 2838 "cplus.met"
                MulFreeTree(1,expTree);
                CASE_EXIT(relational_expression_exit,"either <= or >= or > or <")
#line 2838 "cplus.met"
                break;
#line 2838 "cplus.met"
        }
#line 2838 "cplus.met"
    } 
#line 2838 "cplus.met"
#line 2840 "cplus.met"
    {
#line 2840 "cplus.met"
        _retValue = expTree ;
#line 2840 "cplus.met"
        goto relational_expression_ret;
#line 2840 "cplus.met"
        
#line 2840 "cplus.met"
    }
#line 2840 "cplus.met"
#line 2840 "cplus.met"
#line 2840 "cplus.met"

#line 2841 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2841 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 2841 "cplus.met"
return((PPTREE) 0);
#line 2841 "cplus.met"

#line 2841 "cplus.met"
relational_expression_exit :
#line 2841 "cplus.met"

#line 2841 "cplus.met"
    _Debug = TRACE_RULE("relational_expression",TRACE_EXIT,(PPTREE)0);
#line 2841 "cplus.met"
    _funcLevel--;
#line 2841 "cplus.met"
    return((PPTREE) -1) ;
#line 2841 "cplus.met"

#line 2841 "cplus.met"
relational_expression_ret :
#line 2841 "cplus.met"
    
#line 2841 "cplus.met"
    _Debug = TRACE_RULE("relational_expression",TRACE_RETURN,_retValue);
#line 2841 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2841 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 2841 "cplus.met"
    return _retValue ;
#line 2841 "cplus.met"
}
#line 2841 "cplus.met"

#line 2841 "cplus.met"
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
#line 2843 "cplus.met"
PPTREE cplus::shift_expression ( int error_free)
#line 2843 "cplus.met"
{
#line 2843 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 2843 "cplus.met"
    int _value,_nbPre = 0 ;
#line 2843 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 2843 "cplus.met"
    int _Debug = TRACE_RULE("shift_expression",TRACE_ENTER,(PPTREE)0);
#line 2843 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 2843 "cplus.met"
#line 2843 "cplus.met"
    PPTREE expTree = (PPTREE) 0;
#line 2843 "cplus.met"
#line 2845 "cplus.met"
    if ( (expTree=NQUICK_CALL(_Tak(additive_expression)(error_free), 3, cplus))== (PPTREE) -1 ) {
#line 2845 "cplus.met"
        MulFreeTree(1,expTree);
        PROG_EXIT(shift_expression_exit,"shift_expression")
#line 2845 "cplus.met"
    }
#line 2845 "cplus.met"
#line 2846 "cplus.met"
    while (((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN( INFEINFE,"<<")) || 
#line 2846 "cplus.met"
          ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN( SUPESUPE,">>"))) { 
#line 2846 "cplus.met"
#line 2847 "cplus.met"
        (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 2847 "cplus.met"
        switch( lexEl.Value) {
#line 2847 "cplus.met"
#line 2848 "cplus.met"
            case INFEINFE : 
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
                    _ptRes0= MakeTree(LSHI, 2);
#line 2848 "cplus.met"
                    ReplaceTree(_ptRes0, 1, expTree );
#line 2848 "cplus.met"
                    if ( (_ptTree0=NQUICK_CALL(_Tak(additive_expression)(error_free), 3, cplus))== (PPTREE) -1 ) {
#line 2848 "cplus.met"
                        MulFreeTree(3,_ptRes0,_ptTree0,expTree);
                        PROG_EXIT(shift_expression_exit,"shift_expression")
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
            case SUPESUPE : 
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
                    _ptRes0= MakeTree(RSHI, 2);
#line 2849 "cplus.met"
                    ReplaceTree(_ptRes0, 1, expTree );
#line 2849 "cplus.met"
                    if ( (_ptTree0=NQUICK_CALL(_Tak(additive_expression)(error_free), 3, cplus))== (PPTREE) -1 ) {
#line 2849 "cplus.met"
                        MulFreeTree(3,_ptRes0,_ptTree0,expTree);
                        PROG_EXIT(shift_expression_exit,"shift_expression")
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
            default :
#line 2849 "cplus.met"
                MulFreeTree(1,expTree);
                CASE_EXIT(shift_expression_exit,"either << or >>")
#line 2849 "cplus.met"
                break;
#line 2849 "cplus.met"
        }
#line 2849 "cplus.met"
    } 
#line 2849 "cplus.met"
#line 2851 "cplus.met"
    {
#line 2851 "cplus.met"
        _retValue = expTree ;
#line 2851 "cplus.met"
        goto shift_expression_ret;
#line 2851 "cplus.met"
        
#line 2851 "cplus.met"
    }
#line 2851 "cplus.met"
#line 2851 "cplus.met"
#line 2851 "cplus.met"

#line 2852 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2852 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 2852 "cplus.met"
return((PPTREE) 0);
#line 2852 "cplus.met"

#line 2852 "cplus.met"
shift_expression_exit :
#line 2852 "cplus.met"

#line 2852 "cplus.met"
    _Debug = TRACE_RULE("shift_expression",TRACE_EXIT,(PPTREE)0);
#line 2852 "cplus.met"
    _funcLevel--;
#line 2852 "cplus.met"
    return((PPTREE) -1) ;
#line 2852 "cplus.met"

#line 2852 "cplus.met"
shift_expression_ret :
#line 2852 "cplus.met"
    
#line 2852 "cplus.met"
    _Debug = TRACE_RULE("shift_expression",TRACE_RETURN,_retValue);
#line 2852 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2852 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 2852 "cplus.met"
    return _retValue ;
#line 2852 "cplus.met"
}
#line 2852 "cplus.met"

#line 2852 "cplus.met"
#line 2148 "cplus.met"
PPTREE cplus::short_long_int_char ( int error_free)
#line 2148 "cplus.met"
{
#line 2148 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 2148 "cplus.met"
    int _value,_nbPre = 0 ;
#line 2148 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 2148 "cplus.met"
    int _Debug = TRACE_RULE("short_long_int_char",TRACE_ENTER,(PPTREE)0);
#line 2148 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 2148 "cplus.met"
#line 2149 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 2149 "cplus.met"
    switch( lexEl.Value) {
#line 2149 "cplus.met"
#line 2150 "cplus.met"
        case INT : 
#line 2150 "cplus.met"
            tokenAhead = 0 ;
#line 2150 "cplus.met"
            CommTerm();
#line 2150 "cplus.met"
#line 2150 "cplus.met"
            {
#line 2150 "cplus.met"
                PPTREE _ptTree0=0;
#line 2150 "cplus.met"
                {
#line 2150 "cplus.met"
                    PPTREE _ptRes1=0;
#line 2150 "cplus.met"
                    _ptRes1= MakeTree(TINT, 0);
#line 2150 "cplus.met"
                    _ptTree0=_ptRes1;
#line 2150 "cplus.met"
                }
#line 2150 "cplus.met"
                _retValue =_ptTree0;
#line 2150 "cplus.met"
                goto short_long_int_char_ret;
#line 2150 "cplus.met"
            }
#line 2150 "cplus.met"
            break;
#line 2150 "cplus.met"
#line 2151 "cplus.met"
        case CHAR : 
#line 2151 "cplus.met"
            tokenAhead = 0 ;
#line 2151 "cplus.met"
            CommTerm();
#line 2151 "cplus.met"
#line 2151 "cplus.met"
            {
#line 2151 "cplus.met"
                PPTREE _ptTree0=0;
#line 2151 "cplus.met"
                {
#line 2151 "cplus.met"
                    PPTREE _ptRes1=0;
#line 2151 "cplus.met"
                    _ptRes1= MakeTree(TCHAR, 0);
#line 2151 "cplus.met"
                    _ptTree0=_ptRes1;
#line 2151 "cplus.met"
                }
#line 2151 "cplus.met"
                _retValue =_ptTree0;
#line 2151 "cplus.met"
                goto short_long_int_char_ret;
#line 2151 "cplus.met"
            }
#line 2151 "cplus.met"
            break;
#line 2151 "cplus.met"
#line 2152 "cplus.met"
        case LONG : 
#line 2152 "cplus.met"
#line 2152 "cplus.met"
            {
#line 2152 "cplus.met"
                PPTREE _ptTree0=0;
#line 2152 "cplus.met"
                if ( (_ptTree0=NQUICK_CALL(_Tak(long_type)(error_free), 96, cplus))== (PPTREE) -1 ) {
#line 2152 "cplus.met"
                    MulFreeTree(1,_ptTree0);
                    PROG_EXIT(short_long_int_char_exit,"short_long_int_char")
#line 2152 "cplus.met"
                }
#line 2152 "cplus.met"
                _retValue =_ptTree0;
#line 2152 "cplus.met"
                goto short_long_int_char_ret;
#line 2152 "cplus.met"
            }
#line 2152 "cplus.met"
            break;
#line 2152 "cplus.met"
#line 2153 "cplus.met"
        case SHORT : 
#line 2153 "cplus.met"
            tokenAhead = 0 ;
#line 2153 "cplus.met"
            CommTerm();
#line 2153 "cplus.met"
#line 2154 "cplus.met"
            if (inside_long){
#line 2154 "cplus.met"
#line 2155 "cplus.met"
                
#line 2155 "cplus.met"
                LEX_EXIT ("",0);
#line 2155 "cplus.met"
                goto short_long_int_char_exit;
#line 2155 "cplus.met"
#line 2155 "cplus.met"
            } else {
#line 2155 "cplus.met"
#line 2157 "cplus.met"
#line 2158 "cplus.met"
                (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 2158 "cplus.met"
                switch( lexEl.Value) {
#line 2158 "cplus.met"
#line 2159 "cplus.met"
                    case INT : 
#line 2159 "cplus.met"
                        tokenAhead = 0 ;
#line 2159 "cplus.met"
                        CommTerm();
#line 2159 "cplus.met"
#line 2159 "cplus.met"
                        {
#line 2159 "cplus.met"
                            PPTREE _ptTree0=0;
#line 2159 "cplus.met"
                            {
#line 2159 "cplus.met"
                                PPTREE _ptTree1=0,_ptRes1=0;
#line 2159 "cplus.met"
                                _ptRes1= MakeTree(TSHORT, 1);
#line 2159 "cplus.met"
                                {
#line 2159 "cplus.met"
                                    PPTREE _ptRes2=0;
#line 2159 "cplus.met"
                                    _ptRes2= MakeTree(TINT, 0);
#line 2159 "cplus.met"
                                    _ptTree1=_ptRes2;
#line 2159 "cplus.met"
                                }
#line 2159 "cplus.met"
                                ReplaceTree(_ptRes1, 1, _ptTree1);
#line 2159 "cplus.met"
                                _ptTree0=_ptRes1;
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
                    default : 
#line 2160 "cplus.met"
#line 2160 "cplus.met"
                        {
#line 2160 "cplus.met"
                            PPTREE _ptTree0=0;
#line 2160 "cplus.met"
                            {
#line 2160 "cplus.met"
                                PPTREE _ptRes1=0;
#line 2160 "cplus.met"
                                _ptRes1= MakeTree(TSHORT, 1);
#line 2160 "cplus.met"
                                _ptTree0=_ptRes1;
#line 2160 "cplus.met"
                            }
#line 2160 "cplus.met"
                            _retValue =_ptTree0;
#line 2160 "cplus.met"
                            goto short_long_int_char_ret;
#line 2160 "cplus.met"
                        }
#line 2160 "cplus.met"
                        break;
#line 2160 "cplus.met"
                }
#line 2160 "cplus.met"
#line 2160 "cplus.met"
            }
#line 2160 "cplus.met"
            break;
#line 2160 "cplus.met"
#line 2163 "cplus.met"
        case SIGNED : 
#line 2163 "cplus.met"
#line 2163 "cplus.met"
            {
#line 2163 "cplus.met"
                PPTREE _ptTree0=0;
#line 2163 "cplus.met"
                if ( (_ptTree0=NQUICK_CALL(_Tak(signed_type)(error_free), 135, cplus))== (PPTREE) -1 ) {
#line 2163 "cplus.met"
                    MulFreeTree(1,_ptTree0);
                    PROG_EXIT(short_long_int_char_exit,"short_long_int_char")
#line 2163 "cplus.met"
                }
#line 2163 "cplus.met"
                _retValue =_ptTree0;
#line 2163 "cplus.met"
                goto short_long_int_char_ret;
#line 2163 "cplus.met"
            }
#line 2163 "cplus.met"
            break;
#line 2163 "cplus.met"
#line 2164 "cplus.met"
        case UNSIGNED : 
#line 2164 "cplus.met"
#line 2164 "cplus.met"
            {
#line 2164 "cplus.met"
                PPTREE _ptTree0=0;
#line 2164 "cplus.met"
                if ( (_ptTree0=NQUICK_CALL(_Tak(unsigned_type)(error_free), 158, cplus))== (PPTREE) -1 ) {
#line 2164 "cplus.met"
                    MulFreeTree(1,_ptTree0);
                    PROG_EXIT(short_long_int_char_exit,"short_long_int_char")
#line 2164 "cplus.met"
                }
#line 2164 "cplus.met"
                _retValue =_ptTree0;
#line 2164 "cplus.met"
                goto short_long_int_char_ret;
#line 2164 "cplus.met"
            }
#line 2164 "cplus.met"
            break;
#line 2164 "cplus.met"
        default :
#line 2164 "cplus.met"
            CASE_EXIT(short_long_int_char_exit,"either int or char or long or short or signed or unsigned")
#line 2164 "cplus.met"
            break;
#line 2164 "cplus.met"
    }
#line 2164 "cplus.met"
#line 2164 "cplus.met"
#line 2165 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2165 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 2165 "cplus.met"
return((PPTREE) 0);
#line 2165 "cplus.met"

#line 2165 "cplus.met"
short_long_int_char_exit :
#line 2165 "cplus.met"

#line 2165 "cplus.met"
    _Debug = TRACE_RULE("short_long_int_char",TRACE_EXIT,(PPTREE)0);
#line 2165 "cplus.met"
    _funcLevel--;
#line 2165 "cplus.met"
    return((PPTREE) -1) ;
#line 2165 "cplus.met"

#line 2165 "cplus.met"
short_long_int_char_ret :
#line 2165 "cplus.met"
    
#line 2165 "cplus.met"
    _Debug = TRACE_RULE("short_long_int_char",TRACE_RETURN,_retValue);
#line 2165 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2165 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 2165 "cplus.met"
    return _retValue ;
#line 2165 "cplus.met"
}
#line 2165 "cplus.met"

#line 2165 "cplus.met"
#line 2168 "cplus.met"
PPTREE cplus::signed_type ( int error_free)
#line 2168 "cplus.met"
{
#line 2168 "cplus.met"
    int  _oldinside_signed = inside_signed;
#line 2168 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 2168 "cplus.met"
    int _value,_nbPre = 0 ;
#line 2168 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 2168 "cplus.met"
    int _Debug = TRACE_RULE("signed_type",TRACE_ENTER,(PPTREE)0);
#line 2168 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 2168 "cplus.met"
#line 2168 "cplus.met"
    PPTREE retTree = (PPTREE) 0;
#line 2168 "cplus.met"
#line 2170 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 2170 "cplus.met"
    if (  !SEE_TOKEN( SIGNED,"signed") || !(CommTerm(),1)) {
#line 2170 "cplus.met"
        MulFreeTree(1,retTree);
        TOKEN_EXIT(signed_type_exit,"signed")
#line 2170 "cplus.met"
    } else {
#line 2170 "cplus.met"
        tokenAhead = 0 ;
#line 2170 "cplus.met"
    }
#line 2170 "cplus.met"
#line 2171 "cplus.met"
    {
#line 2171 "cplus.met"
        inside_signed = 1 ;
#line 2171 "cplus.met"
#line 2172 "cplus.met"
#line 2173 "cplus.met"
        if (NPUSH_CALL_AFF_VERIF(retTree = ,_Tak(short_long_int_char), 134, cplus)){
#line 2173 "cplus.met"
#line 2174 "cplus.met"
            {
#line 2174 "cplus.met"
                PPTREE _ptTree0=0;
#line 2174 "cplus.met"
                {
#line 2174 "cplus.met"
                    PPTREE _ptRes1=0;
#line 2174 "cplus.met"
                    _ptRes1= MakeTree(TSIGNED, 1);
#line 2174 "cplus.met"
                    ReplaceTree(_ptRes1, 1, retTree );
#line 2174 "cplus.met"
                    _ptTree0=_ptRes1;
#line 2174 "cplus.met"
                }
#line 2174 "cplus.met"
                _retValue =_ptTree0;
#line 2174 "cplus.met"
                goto signed_type_ret;
#line 2174 "cplus.met"
            }
#line 2174 "cplus.met"
        } else {
#line 2174 "cplus.met"
#line 2176 "cplus.met"
            {
#line 2176 "cplus.met"
                PPTREE _ptTree0=0;
#line 2176 "cplus.met"
                {
#line 2176 "cplus.met"
                    PPTREE _ptRes1=0;
#line 2176 "cplus.met"
                    _ptRes1= MakeTree(TSIGNED, 1);
#line 2176 "cplus.met"
                    _ptTree0=_ptRes1;
#line 2176 "cplus.met"
                }
#line 2176 "cplus.met"
                _retValue =_ptTree0;
#line 2176 "cplus.met"
                goto signed_type_ret;
#line 2176 "cplus.met"
            }
#line 2176 "cplus.met"
        }
#line 2176 "cplus.met"
#line 2176 "cplus.met"
        inside_signed =  _oldinside_signed;
#line 2176 "cplus.met"
    }
#line 2176 "cplus.met"
#line 2176 "cplus.met"
#line 2177 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2177 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 2177 "cplus.met"
inside_signed =  _oldinside_signed;
#line 2177 "cplus.met"
return((PPTREE) 0);
#line 2177 "cplus.met"

#line 2177 "cplus.met"
signed_type_exit :
#line 2177 "cplus.met"

#line 2177 "cplus.met"
    _Debug = TRACE_RULE("signed_type",TRACE_EXIT,(PPTREE)0);
#line 2177 "cplus.met"
    _funcLevel--;
#line 2177 "cplus.met"
    inside_signed =  _oldinside_signed;
#line 2177 "cplus.met"
    return((PPTREE) -1) ;
#line 2177 "cplus.met"

#line 2177 "cplus.met"
signed_type_ret :
#line 2177 "cplus.met"
    
#line 2177 "cplus.met"
    _Debug = TRACE_RULE("signed_type",TRACE_RETURN,_retValue);
#line 2177 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2177 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 2177 "cplus.met"
    inside_signed =  _oldinside_signed;
#line 2177 "cplus.met"
    return _retValue ;
#line 2177 "cplus.met"
}
#line 2177 "cplus.met"

#line 2177 "cplus.met"
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
#line 2129 "cplus.met"
            {
#line 2129 "cplus.met"
                PPTREE _ptTree0=0;
#line 2129 "cplus.met"
                {
#line 2129 "cplus.met"
                    PPTREE _ptTree1=0,_ptRes1=0;
#line 2129 "cplus.met"
                    _ptRes1= MakeTree(TYPENAME, 1);
#line 2129 "cplus.met"
                    {
#line 2129 "cplus.met"
                        PPTREE _ptTree2=0,_ptRes2=0;
#line 2129 "cplus.met"
                        _ptRes2= MakeTree(TIDENT, 1);
#line 2129 "cplus.met"
                        if ( (_ptTree2=NQUICK_CALL(_Tak(complete_class_name)(error_free), 32, cplus))== (PPTREE) -1 ) {
#line 2129 "cplus.met"
                            MulFreeTree(6,_ptRes2,_ptTree2,_ptRes1,_ptTree1,_ptTree0,valTree);
                            PROG_EXIT(simple_type_exit,"simple_type")
#line 2129 "cplus.met"
                        }
#line 2129 "cplus.met"
                        ReplaceTree(_ptRes2, 1, _ptTree2);
#line 2129 "cplus.met"
                        _ptTree1=_ptRes2;
#line 2129 "cplus.met"
                    }
#line 2129 "cplus.met"
                    ReplaceTree(_ptRes1, 1, _ptTree1);
#line 2129 "cplus.met"
                    _ptTree0=_ptRes1;
#line 2129 "cplus.met"
                }
#line 2129 "cplus.met"
                _retValue =_ptTree0;
#line 2129 "cplus.met"
                goto simple_type_ret;
#line 2129 "cplus.met"
            }
#line 2129 "cplus.met"
            break;
#line 2129 "cplus.met"
#line 2130 "cplus.met"
        case CLASS : 
#line 2130 "cplus.met"
            tokenAhead = 0 ;
#line 2130 "cplus.met"
            CommTerm();
#line 2130 "cplus.met"
#line 2130 "cplus.met"
            {
#line 2130 "cplus.met"
                PPTREE _ptTree0=0;
#line 2130 "cplus.met"
                {
#line 2130 "cplus.met"
                    PPTREE _ptTree1=0,_ptRes1=0;
#line 2130 "cplus.met"
                    _ptRes1= MakeTree(CLASSNAME, 1);
#line 2130 "cplus.met"
                    {
#line 2130 "cplus.met"
                        PPTREE _ptTree2=0,_ptRes2=0;
#line 2130 "cplus.met"
                        _ptRes2= MakeTree(TIDENT, 1);
#line 2130 "cplus.met"
                        if ( (_ptTree2=NQUICK_CALL(_Tak(complete_class_name)(error_free), 32, cplus))== (PPTREE) -1 ) {
#line 2130 "cplus.met"
                            MulFreeTree(6,_ptRes2,_ptTree2,_ptRes1,_ptTree1,_ptTree0,valTree);
                            PROG_EXIT(simple_type_exit,"simple_type")
#line 2130 "cplus.met"
                        }
#line 2130 "cplus.met"
                        ReplaceTree(_ptRes2, 1, _ptTree2);
#line 2130 "cplus.met"
                        _ptTree1=_ptRes2;
#line 2130 "cplus.met"
                    }
#line 2130 "cplus.met"
                    ReplaceTree(_ptRes1, 1, _ptTree1);
#line 2130 "cplus.met"
                    _ptTree0=_ptRes1;
#line 2130 "cplus.met"
                }
#line 2130 "cplus.met"
                _retValue =_ptTree0;
#line 2130 "cplus.met"
                goto simple_type_ret;
#line 2130 "cplus.met"
            }
#line 2130 "cplus.met"
            break;
#line 2130 "cplus.met"
#line 2131 "cplus.met"
        case DECLTYPE : 
#line 2131 "cplus.met"
            tokenAhead = 0 ;
#line 2131 "cplus.met"
            CommTerm();
#line 2131 "cplus.met"
#line 2132 "cplus.met"
#line 2133 "cplus.met"
            (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 2133 "cplus.met"
            if (  !SEE_TOKEN( POUV,"(") || !(CommTerm(),1)) {
#line 2133 "cplus.met"
                MulFreeTree(1,valTree);
                TOKEN_EXIT(simple_type_exit,"(")
#line 2133 "cplus.met"
            } else {
#line 2133 "cplus.met"
                tokenAhead = 0 ;
#line 2133 "cplus.met"
            }
#line 2133 "cplus.met"
#line 2134 "cplus.met"
            {
#line 2134 "cplus.met"
                PPTREE _ptTree0=0,_ptRes0=0;
#line 2134 "cplus.met"
                _ptRes0= MakeTree(DECL_TYPE, 1);
#line 2134 "cplus.met"
                if ( (_ptTree0=NQUICK_CALL(_Tak(postfix_expression)(error_free), 114, cplus))== (PPTREE) -1 ) {
#line 2134 "cplus.met"
                    MulFreeTree(3,_ptRes0,_ptTree0,valTree);
                    PROG_EXIT(simple_type_exit,"simple_type")
#line 2134 "cplus.met"
                }
#line 2134 "cplus.met"
                ReplaceTree(_ptRes0, 1, _ptTree0);
#line 2134 "cplus.met"
                valTree=_ptRes0;
#line 2134 "cplus.met"
            }
#line 2134 "cplus.met"
#line 2135 "cplus.met"
            (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 2135 "cplus.met"
            if (  !SEE_TOKEN( PFER,")") || !(CommTerm(),1)) {
#line 2135 "cplus.met"
                MulFreeTree(1,valTree);
                TOKEN_EXIT(simple_type_exit,")")
#line 2135 "cplus.met"
            } else {
#line 2135 "cplus.met"
                tokenAhead = 0 ;
#line 2135 "cplus.met"
            }
#line 2135 "cplus.met"
#line 2136 "cplus.met"
            {
#line 2136 "cplus.met"
                _retValue = valTree ;
#line 2136 "cplus.met"
                goto simple_type_ret;
#line 2136 "cplus.met"
                
#line 2136 "cplus.met"
            }
#line 2136 "cplus.met"
#line 2136 "cplus.met"
            break;
#line 2136 "cplus.met"
#line 2138 "cplus.met"
        case AUTO : 
#line 2138 "cplus.met"
            tokenAhead = 0 ;
#line 2138 "cplus.met"
            CommTerm();
#line 2138 "cplus.met"
#line 2138 "cplus.met"
            {
#line 2138 "cplus.met"
                PPTREE _ptTree0=0;
#line 2138 "cplus.met"
                {
#line 2138 "cplus.met"
                    PPTREE _ptRes1=0;
#line 2138 "cplus.met"
                    _ptRes1= MakeTree(AUTO, 0);
#line 2138 "cplus.met"
                    _ptTree0=_ptRes1;
#line 2138 "cplus.met"
                }
#line 2138 "cplus.met"
                _retValue =_ptTree0;
#line 2138 "cplus.met"
                goto simple_type_ret;
#line 2138 "cplus.met"
            }
#line 2138 "cplus.met"
            break;
#line 2138 "cplus.met"
#line 2139 "cplus.met"
        case DOUBLE : 
#line 2139 "cplus.met"
            tokenAhead = 0 ;
#line 2139 "cplus.met"
            CommTerm();
#line 2139 "cplus.met"
#line 2139 "cplus.met"
            {
#line 2139 "cplus.met"
                PPTREE _ptTree0=0;
#line 2139 "cplus.met"
                {
#line 2139 "cplus.met"
                    PPTREE _ptRes1=0;
#line 2139 "cplus.met"
                    _ptRes1= MakeTree(TDOUBLE, 0);
#line 2139 "cplus.met"
                    _ptTree0=_ptRes1;
#line 2139 "cplus.met"
                }
#line 2139 "cplus.met"
                _retValue =_ptTree0;
#line 2139 "cplus.met"
                goto simple_type_ret;
#line 2139 "cplus.met"
            }
#line 2139 "cplus.met"
            break;
#line 2139 "cplus.met"
#line 2140 "cplus.met"
        case FLOAT : 
#line 2140 "cplus.met"
            tokenAhead = 0 ;
#line 2140 "cplus.met"
            CommTerm();
#line 2140 "cplus.met"
#line 2140 "cplus.met"
            {
#line 2140 "cplus.met"
                PPTREE _ptTree0=0;
#line 2140 "cplus.met"
                {
#line 2140 "cplus.met"
                    PPTREE _ptRes1=0;
#line 2140 "cplus.met"
                    _ptRes1= MakeTree(TFLOAT, 0);
#line 2140 "cplus.met"
                    _ptTree0=_ptRes1;
#line 2140 "cplus.met"
                }
#line 2140 "cplus.met"
                _retValue =_ptTree0;
#line 2140 "cplus.met"
                goto simple_type_ret;
#line 2140 "cplus.met"
            }
#line 2140 "cplus.met"
            break;
#line 2140 "cplus.met"
#line 2141 "cplus.met"
        case VOID : 
#line 2141 "cplus.met"
            tokenAhead = 0 ;
#line 2141 "cplus.met"
            CommTerm();
#line 2141 "cplus.met"
#line 2141 "cplus.met"
            {
#line 2141 "cplus.met"
                PPTREE _ptTree0=0;
#line 2141 "cplus.met"
                {
#line 2141 "cplus.met"
                    PPTREE _ptRes1=0;
#line 2141 "cplus.met"
                    _ptRes1= MakeTree(VOID, 0);
#line 2141 "cplus.met"
                    _ptTree0=_ptRes1;
#line 2141 "cplus.met"
                }
#line 2141 "cplus.met"
                _retValue =_ptTree0;
#line 2141 "cplus.met"
                goto simple_type_ret;
#line 2141 "cplus.met"
            }
#line 2141 "cplus.met"
            break;
#line 2141 "cplus.met"
#line 2142 "cplus.met"
        case DPOIDPOI : 
#line 2142 "cplus.met"
#line 2142 "cplus.met"
            {
#line 2142 "cplus.met"
                PPTREE _ptTree0=0;
#line 2142 "cplus.met"
                {
#line 2142 "cplus.met"
                    PPTREE _ptTree1=0,_ptRes1=0;
#line 2142 "cplus.met"
                    _ptRes1= MakeTree(TIDENT, 1);
#line 2142 "cplus.met"
                    if ( (_ptTree1=NQUICK_CALL(_Tak(complete_class_name)(error_free), 32, cplus))== (PPTREE) -1 ) {
#line 2142 "cplus.met"
                        MulFreeTree(4,_ptRes1,_ptTree1,_ptTree0,valTree);
                        PROG_EXIT(simple_type_exit,"simple_type")
#line 2142 "cplus.met"
                    }
#line 2142 "cplus.met"
                    ReplaceTree(_ptRes1, 1, _ptTree1);
#line 2142 "cplus.met"
                    _ptTree0=_ptRes1;
#line 2142 "cplus.met"
                }
#line 2142 "cplus.met"
                _retValue =_ptTree0;
#line 2142 "cplus.met"
                goto simple_type_ret;
#line 2142 "cplus.met"
            }
#line 2142 "cplus.met"
            break;
#line 2142 "cplus.met"
#line 2143 "cplus.met"
        case META : 
#line 2143 "cplus.met"
        case IDENT : 
#line 2143 "cplus.met"
#line 2143 "cplus.met"
            {
#line 2143 "cplus.met"
                PPTREE _ptTree0=0;
#line 2143 "cplus.met"
                {
#line 2143 "cplus.met"
                    PPTREE _ptTree1=0,_ptRes1=0;
#line 2143 "cplus.met"
                    _ptRes1= MakeTree(TIDENT, 1);
#line 2143 "cplus.met"
                    if ( (_ptTree1=NQUICK_CALL(_Tak(complete_class_name)(error_free), 32, cplus))== (PPTREE) -1 ) {
#line 2143 "cplus.met"
                        MulFreeTree(4,_ptRes1,_ptTree1,_ptTree0,valTree);
                        PROG_EXIT(simple_type_exit,"simple_type")
#line 2143 "cplus.met"
                    }
#line 2143 "cplus.met"
                    ReplaceTree(_ptRes1, 1, _ptTree1);
#line 2143 "cplus.met"
                    _ptTree0=_ptRes1;
#line 2143 "cplus.met"
                }
#line 2143 "cplus.met"
                _retValue =_ptTree0;
#line 2143 "cplus.met"
                goto simple_type_ret;
#line 2143 "cplus.met"
            }
#line 2143 "cplus.met"
            break;
#line 2143 "cplus.met"
#line 2144 "cplus.met"
        default : 
#line 2144 "cplus.met"
#line 2144 "cplus.met"
            {
#line 2144 "cplus.met"
                PPTREE _ptTree0=0;
#line 2144 "cplus.met"
                if ( (_ptTree0=NQUICK_CALL(_Tak(short_long_int_char)(error_free), 134, cplus))== (PPTREE) -1 ) {
#line 2144 "cplus.met"
                    MulFreeTree(2,_ptTree0,valTree);
                    PROG_EXIT(simple_type_exit,"simple_type")
#line 2144 "cplus.met"
                }
#line 2144 "cplus.met"
                _retValue =_ptTree0;
#line 2144 "cplus.met"
                goto simple_type_ret;
#line 2144 "cplus.met"
            }
#line 2144 "cplus.met"
            break;
#line 2144 "cplus.met"
    }
#line 2144 "cplus.met"
#line 2144 "cplus.met"
#line 2145 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2145 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 2145 "cplus.met"
return((PPTREE) 0);
#line 2145 "cplus.met"

#line 2145 "cplus.met"
simple_type_exit :
#line 2145 "cplus.met"

#line 2145 "cplus.met"
    _Debug = TRACE_RULE("simple_type",TRACE_EXIT,(PPTREE)0);
#line 2145 "cplus.met"
    _funcLevel--;
#line 2145 "cplus.met"
    return((PPTREE) -1) ;
#line 2145 "cplus.met"

#line 2145 "cplus.met"
simple_type_ret :
#line 2145 "cplus.met"
    
#line 2145 "cplus.met"
    _Debug = TRACE_RULE("simple_type",TRACE_RETURN,_retValue);
#line 2145 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2145 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 2145 "cplus.met"
    return _retValue ;
#line 2145 "cplus.met"
}
#line 2145 "cplus.met"

#line 2145 "cplus.met"
#line 3038 "cplus.met"
PPTREE cplus::simple_type_name ( int error_free)
#line 3038 "cplus.met"
{
#line 3038 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 3038 "cplus.met"
    int _value,_nbPre = 0 ;
#line 3038 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 3038 "cplus.met"
    int _Debug = TRACE_RULE("simple_type_name",TRACE_ENTER,(PPTREE)0);
#line 3038 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 3038 "cplus.met"
#line 3039 "cplus.met"
    if (! ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN( IDENT,"IDENT"))){
#line 3039 "cplus.met"
#line 3040 "cplus.met"
        {
#line 3040 "cplus.met"
            PPTREE _ptTree0=0;
#line 3040 "cplus.met"
            if ( (_ptTree0=NQUICK_CALL(_Tak(simple_type)(error_free), 137, cplus))== (PPTREE) -1 ) {
#line 3040 "cplus.met"
                MulFreeTree(1,_ptTree0);
                PROG_EXIT(simple_type_name_exit,"simple_type_name")
#line 3040 "cplus.met"
            }
#line 3040 "cplus.met"
            _retValue =_ptTree0;
#line 3040 "cplus.met"
            goto simple_type_name_ret;
#line 3040 "cplus.met"
        }
#line 3040 "cplus.met"
    } else {
#line 3040 "cplus.met"
#line 3042 "cplus.met"
        
#line 3042 "cplus.met"
        LEX_EXIT ("",0);
#line 3042 "cplus.met"
        goto simple_type_name_exit;
#line 3042 "cplus.met"
    }
#line 3042 "cplus.met"
#line 3042 "cplus.met"
#line 3042 "cplus.met"

#line 3043 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 3043 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 3043 "cplus.met"
return((PPTREE) 0);
#line 3043 "cplus.met"

#line 3043 "cplus.met"
simple_type_name_exit :
#line 3043 "cplus.met"

#line 3043 "cplus.met"
    _Debug = TRACE_RULE("simple_type_name",TRACE_EXIT,(PPTREE)0);
#line 3043 "cplus.met"
    _funcLevel--;
#line 3043 "cplus.met"
    return((PPTREE) -1) ;
#line 3043 "cplus.met"

#line 3043 "cplus.met"
simple_type_name_ret :
#line 3043 "cplus.met"
    
#line 3043 "cplus.met"
    _Debug = TRACE_RULE("simple_type_name",TRACE_RETURN,_retValue);
#line 3043 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 3043 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 3043 "cplus.met"
    return _retValue ;
#line 3043 "cplus.met"
}
#line 3043 "cplus.met"

#line 3043 "cplus.met"
#line 2904 "cplus.met"
PPTREE cplus::sizeof_type ( int error_free)
#line 2904 "cplus.met"
{
#line 2904 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 2904 "cplus.met"
    int _value,_nbPre = 0 ;
#line 2904 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 2904 "cplus.met"
    int _Debug = TRACE_RULE("sizeof_type",TRACE_ENTER,(PPTREE)0);
#line 2904 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 2904 "cplus.met"
#line 2904 "cplus.met"
    PPTREE expTree = (PPTREE) 0;
#line 2904 "cplus.met"
#line 2906 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 2906 "cplus.met"
    if (  !SEE_TOKEN( POUV,"(") || !(CommTerm(),1)) {
#line 2906 "cplus.met"
        MulFreeTree(1,expTree);
        TOKEN_EXIT(sizeof_type_exit,"(")
#line 2906 "cplus.met"
    } else {
#line 2906 "cplus.met"
        tokenAhead = 0 ;
#line 2906 "cplus.met"
    }
#line 2906 "cplus.met"
#line 2907 "cplus.met"
    if ( (expTree=NQUICK_CALL(_Tak(type_name)(error_free), 153, cplus))== (PPTREE) -1 ) {
#line 2907 "cplus.met"
        MulFreeTree(1,expTree);
        PROG_EXIT(sizeof_type_exit,"sizeof_type")
#line 2907 "cplus.met"
    }
#line 2907 "cplus.met"
#line 2908 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 2908 "cplus.met"
    if (  !SEE_TOKEN( PFER,")") || !(CommTerm(),1)) {
#line 2908 "cplus.met"
        MulFreeTree(1,expTree);
        TOKEN_EXIT(sizeof_type_exit,")")
#line 2908 "cplus.met"
    } else {
#line 2908 "cplus.met"
        tokenAhead = 0 ;
#line 2908 "cplus.met"
    }
#line 2908 "cplus.met"
#line 2909 "cplus.met"
    {
#line 2909 "cplus.met"
        _retValue = expTree ;
#line 2909 "cplus.met"
        goto sizeof_type_ret;
#line 2909 "cplus.met"
        
#line 2909 "cplus.met"
    }
#line 2909 "cplus.met"
#line 2909 "cplus.met"
#line 2909 "cplus.met"

#line 2910 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2910 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 2910 "cplus.met"
return((PPTREE) 0);
#line 2910 "cplus.met"

#line 2910 "cplus.met"
sizeof_type_exit :
#line 2910 "cplus.met"

#line 2910 "cplus.met"
    _Debug = TRACE_RULE("sizeof_type",TRACE_EXIT,(PPTREE)0);
#line 2910 "cplus.met"
    _funcLevel--;
#line 2910 "cplus.met"
    return((PPTREE) -1) ;
#line 2910 "cplus.met"

#line 2910 "cplus.met"
sizeof_type_ret :
#line 2910 "cplus.met"
    
#line 2910 "cplus.met"
    _Debug = TRACE_RULE("sizeof_type",TRACE_RETURN,_retValue);
#line 2910 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2910 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 2910 "cplus.met"
    return _retValue ;
#line 2910 "cplus.met"
}
#line 2910 "cplus.met"

#line 2910 "cplus.met"
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
    if (((((NPUSH_CALL_AFF_VERIF(stat = ,_Tak(statement), 145, cplus)) || 
#line 991 "cplus.met"
          (NPUSH_CALL_AFF_VERIF(stat = ,_Tak(data_declaration), 45, cplus))) || 
#line 991 "cplus.met"
         (NPUSH_CALL_AFF_VERIF(stat = ,_Tak(stat_dir), 141, cplus))) || 
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
            if ( (_ptTree0=NQUICK_CALL(_Tak(statement)(error_free), 145, cplus))== (PPTREE) -1 ) {
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
                if ( (_ptTree0=NQUICK_CALL(_Tak(stat_if_dir)(error_free), 143, cplus))== (PPTREE) -1 ) {
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
                if ( (_ptTree0=NQUICK_CALL(_Tak(stat_ifdef_dir)(error_free), 144, cplus))== (PPTREE) -1 ) {
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
                if ( (_ptTree0=NQUICK_CALL(_Tak(stat_ifdef_dir)(error_free), 144, cplus))== (PPTREE) -1 ) {
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
#line 3665 "cplus.met"
PPTREE cplus::stat_dir_switch ( int error_free)
#line 3665 "cplus.met"
{
#line 3665 "cplus.met"
    int  _oldswitchContext = switchContext;
#line 3665 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 3665 "cplus.met"
    int _value,_nbPre = 0 ;
#line 3665 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 3665 "cplus.met"
    int _Debug = TRACE_RULE("stat_dir_switch",TRACE_ENTER,(PPTREE)0);
#line 3665 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 3665 "cplus.met"
#line 3666 "cplus.met"
    {
#line 3666 "cplus.met"
        switchContext = 1 ;
#line 3666 "cplus.met"
#line 3667 "cplus.met"
        {
#line 3667 "cplus.met"
            PPTREE _ptTree0=0;
#line 3667 "cplus.met"
            if ( (_ptTree0=NQUICK_CALL(_Tak(stat_dir)(error_free), 141, cplus))== (PPTREE) -1 ) {
#line 3667 "cplus.met"
                MulFreeTree(1,_ptTree0);
                PROG_EXIT(stat_dir_switch_exit,"stat_dir_switch")
#line 3667 "cplus.met"
            }
#line 3667 "cplus.met"
            _retValue =_ptTree0;
#line 3667 "cplus.met"
            goto stat_dir_switch_ret;
#line 3667 "cplus.met"
        }
#line 3667 "cplus.met"
        switchContext =  _oldswitchContext;
#line 3667 "cplus.met"
    }
#line 3667 "cplus.met"
#line 3667 "cplus.met"
#line 3667 "cplus.met"

#line 3668 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 3668 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 3668 "cplus.met"
switchContext =  _oldswitchContext;
#line 3668 "cplus.met"
return((PPTREE) 0);
#line 3668 "cplus.met"

#line 3668 "cplus.met"
stat_dir_switch_exit :
#line 3668 "cplus.met"

#line 3668 "cplus.met"
    _Debug = TRACE_RULE("stat_dir_switch",TRACE_EXIT,(PPTREE)0);
#line 3668 "cplus.met"
    _funcLevel--;
#line 3668 "cplus.met"
    switchContext =  _oldswitchContext;
#line 3668 "cplus.met"
    return((PPTREE) -1) ;
#line 3668 "cplus.met"

#line 3668 "cplus.met"
stat_dir_switch_ret :
#line 3668 "cplus.met"
    
#line 3668 "cplus.met"
    _Debug = TRACE_RULE("stat_dir_switch",TRACE_RETURN,_retValue);
#line 3668 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 3668 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 3668 "cplus.met"
    switchContext =  _oldswitchContext;
#line 3668 "cplus.met"
    return _retValue ;
#line 3668 "cplus.met"
}
#line 3668 "cplus.met"

#line 3668 "cplus.met"
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
            if ( (_ptTree0=NQUICK_CALL(_Tak(stat_all)(error_free), 140, cplus))== (PPTREE) -1 ) {
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
        if ( (_ptTree0=NQUICK_CALL(_Tak(none_statement)(error_free), 108, cplus))== (PPTREE) -1 ) {
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
                    if ( (_ptTree0=NQUICK_CALL(_Tak(stat_all)(error_free), 140, cplus))== (PPTREE) -1 ) {
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
                if ( (_ptTree0=NQUICK_CALL(_Tak(none_statement)(error_free), 108, cplus))== (PPTREE) -1 ) {
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
                    if ( (_ptTree1=NQUICK_CALL(_Tak(stat_if_dir)(error_free), 143, cplus))== (PPTREE) -1 ) {
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
            if ( (_ptTree0=NQUICK_CALL(_Tak(stat_all)(error_free), 140, cplus))== (PPTREE) -1 ) {
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
        if ( (_ptTree0=NQUICK_CALL(_Tak(none_statement)(error_free), 108, cplus))== (PPTREE) -1 ) {
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
                    if ( (_ptTree0=NQUICK_CALL(_Tak(stat_all)(error_free), 140, cplus))== (PPTREE) -1 ) {
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
                if ( (_ptTree0=NQUICK_CALL(_Tak(none_statement)(error_free), 108, cplus))== (PPTREE) -1 ) {
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
                    if ( (_ptTree1=NQUICK_CALL(_Tak(stat_if_dir)(error_free), 143, cplus))== (PPTREE) -1 ) {
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
#line 3509 "cplus.met"
PPTREE cplus::statement ( int error_free)
#line 3509 "cplus.met"
{
#line 3509 "cplus.met"
    int  _oldswitchContext = switchContext;
#line 3509 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 3509 "cplus.met"
    int _value,_nbPre = 0 ;
#line 3509 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 3509 "cplus.met"
    int _Debug = TRACE_RULE("statement",TRACE_ENTER,(PPTREE)0);
#line 3509 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 3509 "cplus.met"
#line 3509 "cplus.met"
    PPTREE statTree = (PPTREE) 0,opt = (PPTREE) 0,stat = (PPTREE) 0;
#line 3509 "cplus.met"
#line 3511 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3511 "cplus.met"
    switch( lexEl.Value) {
#line 3511 "cplus.met"
#line 3512 "cplus.met"
        case BREAK : 
#line 3512 "cplus.met"
            tokenAhead = 0 ;
#line 3512 "cplus.met"
            CommTerm();
#line 3512 "cplus.met"
#line 3513 "cplus.met"
#line 3514 "cplus.met"
            {
#line 3514 "cplus.met"
                PPTREE _ptRes0=0;
#line 3514 "cplus.met"
                _ptRes0= MakeTree(BREAK, 1);
#line 3514 "cplus.met"
                statTree=_ptRes0;
#line 3514 "cplus.met"
            }
#line 3514 "cplus.met"
#line 3515 "cplus.met"
            (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3515 "cplus.met"
            if (  !SEE_TOKEN( PVIR,";") || !(CommTerm(),1)) {
#line 3515 "cplus.met"
                MulFreeTree(3,opt,stat,statTree);
                TOKEN_EXIT(statement_exit,";")
#line 3515 "cplus.met"
            } else {
#line 3515 "cplus.met"
                tokenAhead = 0 ;
#line 3515 "cplus.met"
            }
#line 3515 "cplus.met"
#line 3515 "cplus.met"
            break;
#line 3515 "cplus.met"
#line 3517 "cplus.met"
        case CONTINUE : 
#line 3517 "cplus.met"
            tokenAhead = 0 ;
#line 3517 "cplus.met"
            CommTerm();
#line 3517 "cplus.met"
#line 3518 "cplus.met"
#line 3519 "cplus.met"
            {
#line 3519 "cplus.met"
                PPTREE _ptRes0=0;
#line 3519 "cplus.met"
                _ptRes0= MakeTree(CONTINUE, 1);
#line 3519 "cplus.met"
                statTree=_ptRes0;
#line 3519 "cplus.met"
            }
#line 3519 "cplus.met"
#line 3520 "cplus.met"
            (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3520 "cplus.met"
            if (  !SEE_TOKEN( PVIR,";") || !(CommTerm(),1)) {
#line 3520 "cplus.met"
                MulFreeTree(3,opt,stat,statTree);
                TOKEN_EXIT(statement_exit,";")
#line 3520 "cplus.met"
            } else {
#line 3520 "cplus.met"
                tokenAhead = 0 ;
#line 3520 "cplus.met"
            }
#line 3520 "cplus.met"
#line 3520 "cplus.met"
            break;
#line 3520 "cplus.met"
#line 3522 "cplus.met"
        case DO : 
#line 3522 "cplus.met"
            tokenAhead = 0 ;
#line 3522 "cplus.met"
            CommTerm();
#line 3522 "cplus.met"
#line 3523 "cplus.met"
#line 3524 "cplus.met"
            {
#line 3524 "cplus.met"
                switchContext = 0 ;
#line 3524 "cplus.met"
#line 3525 "cplus.met"
                {
#line 3525 "cplus.met"
                    PPTREE _ptTree0=0,_ptRes0=0;
#line 3525 "cplus.met"
                    _ptRes0= MakeTree(DO, 2);
#line 3525 "cplus.met"
                    if ( (_ptTree0=NQUICK_CALL(_Tak(statement)(error_free), 145, cplus))== (PPTREE) -1 ) {
#line 3525 "cplus.met"
                        MulFreeTree(5,_ptRes0,_ptTree0,opt,stat,statTree);
                        PROG_EXIT(statement_exit,"statement")
#line 3525 "cplus.met"
                    }
#line 3525 "cplus.met"
                    ReplaceTree(_ptRes0, 1, _ptTree0);
#line 3525 "cplus.met"
                    statTree=_ptRes0;
#line 3525 "cplus.met"
                }
#line 3525 "cplus.met"
                switchContext =  _oldswitchContext;
#line 3525 "cplus.met"
            }
#line 3525 "cplus.met"
#line 3526 "cplus.met"
            (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3526 "cplus.met"
            if (  !SEE_TOKEN( WHILE,"while") || !(CommTerm(),1)) {
#line 3526 "cplus.met"
                MulFreeTree(3,opt,stat,statTree);
                TOKEN_EXIT(statement_exit,"while")
#line 3526 "cplus.met"
            } else {
#line 3526 "cplus.met"
                tokenAhead = 0 ;
#line 3526 "cplus.met"
            }
#line 3526 "cplus.met"
#line 3527 "cplus.met"
            (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3527 "cplus.met"
            if (  !SEE_TOKEN( POUV,"(") || !(CommTerm(),1)) {
#line 3527 "cplus.met"
                MulFreeTree(3,opt,stat,statTree);
                TOKEN_EXIT(statement_exit,"(")
#line 3527 "cplus.met"
            } else {
#line 3527 "cplus.met"
                tokenAhead = 0 ;
#line 3527 "cplus.met"
            }
#line 3527 "cplus.met"
#line 3528 "cplus.met"
            {
#line 3528 "cplus.met"
                PPTREE _ptTree0=0;
#line 3528 "cplus.met"
                if ( (_ptTree0=NQUICK_CALL(_Tak(expression)(error_free), 67, cplus))== (PPTREE) -1 ) {
#line 3528 "cplus.met"
                    MulFreeTree(4,_ptTree0,opt,stat,statTree);
                    PROG_EXIT(statement_exit,"statement")
#line 3528 "cplus.met"
                }
#line 3528 "cplus.met"
                ReplaceTree(statTree , 2 , _ptTree0);
#line 3528 "cplus.met"
            }
#line 3528 "cplus.met"
#line 3529 "cplus.met"
            (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3529 "cplus.met"
            if (  !SEE_TOKEN( PFER,")") || !(CommTerm(),1)) {
#line 3529 "cplus.met"
                MulFreeTree(3,opt,stat,statTree);
                TOKEN_EXIT(statement_exit,")")
#line 3529 "cplus.met"
            } else {
#line 3529 "cplus.met"
                tokenAhead = 0 ;
#line 3529 "cplus.met"
            }
#line 3529 "cplus.met"
#line 3530 "cplus.met"
            (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3530 "cplus.met"
            if (  !SEE_TOKEN( PVIR,";") || !(CommTerm(),1)) {
#line 3530 "cplus.met"
                MulFreeTree(3,opt,stat,statTree);
                TOKEN_EXIT(statement_exit,";")
#line 3530 "cplus.met"
            } else {
#line 3530 "cplus.met"
                tokenAhead = 0 ;
#line 3530 "cplus.met"
            }
#line 3530 "cplus.met"
#line 3530 "cplus.met"
            break;
#line 3530 "cplus.met"
#line 3532 "cplus.met"
        case AOUV : 
#line 3532 "cplus.met"
#line 3532 "cplus.met"
            if ( (statTree=NQUICK_CALL(_Tak(compound_statement)(error_free), 33, cplus))== (PPTREE) -1 ) {
#line 3532 "cplus.met"
                MulFreeTree(3,opt,stat,statTree);
                PROG_EXIT(statement_exit,"statement")
#line 3532 "cplus.met"
            }
#line 3532 "cplus.met"
            break;
#line 3532 "cplus.met"
#line 3533 "cplus.met"
        case FOR : 
#line 3533 "cplus.met"
            tokenAhead = 0 ;
#line 3533 "cplus.met"
            CommTerm();
#line 3533 "cplus.met"
#line 3533 "cplus.met"
            {
#line 3533 "cplus.met"
                PPTREE _ptTree0=0;
#line 3533 "cplus.met"
                if ( (_ptTree0=NQUICK_CALL(_Tak(for_statement)(error_free), 80, cplus))== (PPTREE) -1 ) {
#line 3533 "cplus.met"
                    MulFreeTree(4,_ptTree0,opt,stat,statTree);
                    PROG_EXIT(statement_exit,"statement")
#line 3533 "cplus.met"
                }
#line 3533 "cplus.met"
                _retValue =_ptTree0;
#line 3533 "cplus.met"
                goto statement_ret;
#line 3533 "cplus.met"
            }
#line 3533 "cplus.met"
            break;
#line 3533 "cplus.met"
#line 3534 "cplus.met"
        case GOTO : 
#line 3534 "cplus.met"
            tokenAhead = 0 ;
#line 3534 "cplus.met"
            CommTerm();
#line 3534 "cplus.met"
#line 3535 "cplus.met"
#line 3536 "cplus.met"
            {
#line 3536 "cplus.met"
                PPTREE _ptTree0=0,_ptRes0=0;
#line 3536 "cplus.met"
                _ptRes0= MakeTree(GOTO, 1);
#line 3536 "cplus.met"
                {
#line 3536 "cplus.met"
                    PPTREE _ptTree1=0,_ptRes1=0;
#line 3536 "cplus.met"
                    _ptRes1= MakeTree(IDENT, 1);
#line 3536 "cplus.met"
                    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3536 "cplus.met"
                    if ( ! TERM_OR_META(IDENT,"IDENT") || !(BUILD_TERM_META(_ptTree1))) {
#line 3536 "cplus.met"
                        MulFreeTree(7,_ptRes1,_ptTree1,_ptRes0,_ptTree0,opt,stat,statTree);
                        TOKEN_EXIT(statement_exit,"IDENT")
#line 3536 "cplus.met"
                    } else {
#line 3536 "cplus.met"
                        tokenAhead = 0 ;
#line 3536 "cplus.met"
                    }
#line 3536 "cplus.met"
                    ReplaceTree(_ptRes1, 1, _ptTree1);
#line 3536 "cplus.met"
                    _ptTree0=_ptRes1;
#line 3536 "cplus.met"
                }
#line 3536 "cplus.met"
                ReplaceTree(_ptRes0, 1, _ptTree0);
#line 3536 "cplus.met"
                statTree=_ptRes0;
#line 3536 "cplus.met"
            }
#line 3536 "cplus.met"
#line 3537 "cplus.met"
            (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3537 "cplus.met"
            if (  !SEE_TOKEN( PVIR,";") || !(CommTerm(),1)) {
#line 3537 "cplus.met"
                MulFreeTree(3,opt,stat,statTree);
                TOKEN_EXIT(statement_exit,";")
#line 3537 "cplus.met"
            } else {
#line 3537 "cplus.met"
                tokenAhead = 0 ;
#line 3537 "cplus.met"
            }
#line 3537 "cplus.met"
#line 3537 "cplus.met"
            break;
#line 3537 "cplus.met"
#line 3539 "cplus.met"
        case IF : 
#line 3539 "cplus.met"
            tokenAhead = 0 ;
#line 3539 "cplus.met"
            CommTerm();
#line 3539 "cplus.met"
#line 3540 "cplus.met"
#line 3541 "cplus.met"
            (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3541 "cplus.met"
            if (  !SEE_TOKEN( POUV,"(") || !(CommTerm(),1)) {
#line 3541 "cplus.met"
                MulFreeTree(3,opt,stat,statTree);
                TOKEN_EXIT(statement_exit,"(")
#line 3541 "cplus.met"
            } else {
#line 3541 "cplus.met"
                tokenAhead = 0 ;
#line 3541 "cplus.met"
            }
#line 3541 "cplus.met"
#line 3542 "cplus.met"
            {
#line 3542 "cplus.met"
                PPTREE _ptTree0=0,_ptRes0=0;
#line 3542 "cplus.met"
                _ptRes0= MakeTree(IF, 3);
#line 3542 "cplus.met"
                if ( (_ptTree0=NQUICK_CALL(_Tak(expression)(error_free), 67, cplus))== (PPTREE) -1 ) {
#line 3542 "cplus.met"
                    MulFreeTree(5,_ptRes0,_ptTree0,opt,stat,statTree);
                    PROG_EXIT(statement_exit,"statement")
#line 3542 "cplus.met"
                }
#line 3542 "cplus.met"
                ReplaceTree(_ptRes0, 1, _ptTree0);
#line 3542 "cplus.met"
                statTree=_ptRes0;
#line 3542 "cplus.met"
            }
#line 3542 "cplus.met"
#line 3543 "cplus.met"
            (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3543 "cplus.met"
            if (  !SEE_TOKEN( PFER,")") || !(CommTerm(),1)) {
#line 3543 "cplus.met"
                MulFreeTree(3,opt,stat,statTree);
                TOKEN_EXIT(statement_exit,")")
#line 3543 "cplus.met"
            } else {
#line 3543 "cplus.met"
                tokenAhead = 0 ;
#line 3543 "cplus.met"
            }
#line 3543 "cplus.met"
#line 3544 "cplus.met"
            {
#line 3544 "cplus.met"
                switchContext = 0 ;
#line 3544 "cplus.met"
#line 3545 "cplus.met"
                {
#line 3545 "cplus.met"
                    PPTREE _ptTree0=0;
#line 3545 "cplus.met"
                    if ( (_ptTree0=NQUICK_CALL(_Tak(statement)(error_free), 145, cplus))== (PPTREE) -1 ) {
#line 3545 "cplus.met"
                        MulFreeTree(4,_ptTree0,opt,stat,statTree);
                        PROG_EXIT(statement_exit,"statement")
#line 3545 "cplus.met"
                    }
#line 3545 "cplus.met"
                    ReplaceTree(statTree , 2 , _ptTree0);
#line 3545 "cplus.met"
                }
#line 3545 "cplus.met"
                switchContext =  _oldswitchContext;
#line 3545 "cplus.met"
            }
#line 3545 "cplus.met"
#line 3546 "cplus.met"
            if ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN(ELSE,"else") && (tokenAhead = 0,CommTerm(),1)){
#line 3546 "cplus.met"
#line 3547 "cplus.met"
                {
#line 3547 "cplus.met"
                    switchContext = 0 ;
#line 3547 "cplus.met"
#line 3548 "cplus.met"
                    {
#line 3548 "cplus.met"
                        PPTREE _ptTree0=0;
#line 3548 "cplus.met"
                        if ( (_ptTree0=NQUICK_CALL(_Tak(statement)(error_free), 145, cplus))== (PPTREE) -1 ) {
#line 3548 "cplus.met"
                            MulFreeTree(4,_ptTree0,opt,stat,statTree);
                            PROG_EXIT(statement_exit,"statement")
#line 3548 "cplus.met"
                        }
#line 3548 "cplus.met"
                        ReplaceTree(statTree , 3 , _ptTree0);
#line 3548 "cplus.met"
                    }
#line 3548 "cplus.met"
                    switchContext =  _oldswitchContext;
#line 3548 "cplus.met"
                }
#line 3548 "cplus.met"
            }
#line 3548 "cplus.met"
#line 3548 "cplus.met"
            break;
#line 3548 "cplus.met"
#line 3550 "cplus.met"
        case PVIR : 
#line 3550 "cplus.met"
            tokenAhead = 0 ;
#line 3550 "cplus.met"
            CommTerm();
#line 3550 "cplus.met"
#line 3550 "cplus.met"
            {
#line 3550 "cplus.met"
                PPTREE _ptRes0=0;
#line 3550 "cplus.met"
                _ptRes0= MakeTree(STAT_VOID, 0);
#line 3550 "cplus.met"
                statTree=_ptRes0;
#line 3550 "cplus.met"
            }
#line 3550 "cplus.met"
            break;
#line 3550 "cplus.met"
#line 3551 "cplus.met"
        case RETURN : 
#line 3551 "cplus.met"
            tokenAhead = 0 ;
#line 3551 "cplus.met"
            CommTerm();
#line 3551 "cplus.met"
#line 3552 "cplus.met"
#line 3553 "cplus.met"
            {
#line 3553 "cplus.met"
                PPTREE _ptRes0=0;
#line 3553 "cplus.met"
                _ptRes0= MakeTree(RETURN, 1);
#line 3553 "cplus.met"
                statTree=_ptRes0;
#line 3553 "cplus.met"
            }
#line 3553 "cplus.met"
#line 3554 "cplus.met"
            if (NPUSH_CALL_AFF_VERIF(opt = ,_Tak(expression), 67, cplus)){
#line 3554 "cplus.met"
#line 3555 "cplus.met"
                ReplaceTree(statTree ,1 ,opt );
#line 3555 "cplus.met"
#line 3555 "cplus.met"
            }
#line 3555 "cplus.met"
#line 3556 "cplus.met"
            (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3556 "cplus.met"
            if (  !SEE_TOKEN( PVIR,";") || !(CommTerm(),1)) {
#line 3556 "cplus.met"
                MulFreeTree(3,opt,stat,statTree);
                TOKEN_EXIT(statement_exit,";")
#line 3556 "cplus.met"
            } else {
#line 3556 "cplus.met"
                tokenAhead = 0 ;
#line 3556 "cplus.met"
            }
#line 3556 "cplus.met"
#line 3556 "cplus.met"
            break;
#line 3556 "cplus.met"
#line 3558 "cplus.met"
        case SWITCH : 
#line 3558 "cplus.met"
            tokenAhead = 0 ;
#line 3558 "cplus.met"
            CommTerm();
#line 3558 "cplus.met"
#line 3559 "cplus.met"
#line 3560 "cplus.met"
            (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3560 "cplus.met"
            if (  !SEE_TOKEN( POUV,"(") || !(CommTerm(),1)) {
#line 3560 "cplus.met"
                MulFreeTree(3,opt,stat,statTree);
                TOKEN_EXIT(statement_exit,"(")
#line 3560 "cplus.met"
            } else {
#line 3560 "cplus.met"
                tokenAhead = 0 ;
#line 3560 "cplus.met"
            }
#line 3560 "cplus.met"
#line 3561 "cplus.met"
            {
#line 3561 "cplus.met"
                PPTREE _ptTree0=0,_ptRes0=0;
#line 3561 "cplus.met"
                _ptRes0= MakeTree(SWITCH, 2);
#line 3561 "cplus.met"
                if ( (_ptTree0=NQUICK_CALL(_Tak(expression)(error_free), 67, cplus))== (PPTREE) -1 ) {
#line 3561 "cplus.met"
                    MulFreeTree(5,_ptRes0,_ptTree0,opt,stat,statTree);
                    PROG_EXIT(statement_exit,"statement")
#line 3561 "cplus.met"
                }
#line 3561 "cplus.met"
                ReplaceTree(_ptRes0, 1, _ptTree0);
#line 3561 "cplus.met"
                statTree=_ptRes0;
#line 3561 "cplus.met"
            }
#line 3561 "cplus.met"
#line 3562 "cplus.met"
            (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3562 "cplus.met"
            if (  !SEE_TOKEN( PFER,")") || !(CommTerm(),1)) {
#line 3562 "cplus.met"
                MulFreeTree(3,opt,stat,statTree);
                TOKEN_EXIT(statement_exit,")")
#line 3562 "cplus.met"
            } else {
#line 3562 "cplus.met"
                tokenAhead = 0 ;
#line 3562 "cplus.met"
            }
#line 3562 "cplus.met"
#line 3563 "cplus.met"
            {
#line 3563 "cplus.met"
                switchContext = 0 ;
#line 3563 "cplus.met"
#line 3564 "cplus.met"
                {
#line 3564 "cplus.met"
                    PPTREE _ptTree0=0;
#line 3564 "cplus.met"
                    if ( (_ptTree0=NQUICK_CALL(_Tak(switch_list)(error_free), 149, cplus))== (PPTREE) -1 ) {
#line 3564 "cplus.met"
                        MulFreeTree(4,_ptTree0,opt,stat,statTree);
                        PROG_EXIT(statement_exit,"statement")
#line 3564 "cplus.met"
                    }
#line 3564 "cplus.met"
                    ReplaceTree(statTree , 2 , _ptTree0);
#line 3564 "cplus.met"
                }
#line 3564 "cplus.met"
                switchContext =  _oldswitchContext;
#line 3564 "cplus.met"
            }
#line 3564 "cplus.met"
#line 3564 "cplus.met"
            break;
#line 3564 "cplus.met"
#line 3566 "cplus.met"
        case WHILE : 
#line 3566 "cplus.met"
            tokenAhead = 0 ;
#line 3566 "cplus.met"
            CommTerm();
#line 3566 "cplus.met"
#line 3567 "cplus.met"
#line 3568 "cplus.met"
            (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3568 "cplus.met"
            if (  !SEE_TOKEN( POUV,"(") || !(CommTerm(),1)) {
#line 3568 "cplus.met"
                MulFreeTree(3,opt,stat,statTree);
                TOKEN_EXIT(statement_exit,"(")
#line 3568 "cplus.met"
            } else {
#line 3568 "cplus.met"
                tokenAhead = 0 ;
#line 3568 "cplus.met"
            }
#line 3568 "cplus.met"
#line 3569 "cplus.met"
            {
#line 3569 "cplus.met"
                PPTREE _ptTree0=0,_ptRes0=0;
#line 3569 "cplus.met"
                _ptRes0= MakeTree(WHILE, 2);
#line 3569 "cplus.met"
                if ( (_ptTree0=NQUICK_CALL(_Tak(expression)(error_free), 67, cplus))== (PPTREE) -1 ) {
#line 3569 "cplus.met"
                    MulFreeTree(5,_ptRes0,_ptTree0,opt,stat,statTree);
                    PROG_EXIT(statement_exit,"statement")
#line 3569 "cplus.met"
                }
#line 3569 "cplus.met"
                ReplaceTree(_ptRes0, 1, _ptTree0);
#line 3569 "cplus.met"
                statTree=_ptRes0;
#line 3569 "cplus.met"
            }
#line 3569 "cplus.met"
#line 3570 "cplus.met"
            (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3570 "cplus.met"
            if (  !SEE_TOKEN( PFER,")") || !(CommTerm(),1)) {
#line 3570 "cplus.met"
                MulFreeTree(3,opt,stat,statTree);
                TOKEN_EXIT(statement_exit,")")
#line 3570 "cplus.met"
            } else {
#line 3570 "cplus.met"
                tokenAhead = 0 ;
#line 3570 "cplus.met"
            }
#line 3570 "cplus.met"
#line 3571 "cplus.met"
            {
#line 3571 "cplus.met"
                switchContext = 0 ;
#line 3571 "cplus.met"
#line 3572 "cplus.met"
                {
#line 3572 "cplus.met"
                    PPTREE _ptTree0=0;
#line 3572 "cplus.met"
                    if ( (_ptTree0=NQUICK_CALL(_Tak(statement)(error_free), 145, cplus))== (PPTREE) -1 ) {
#line 3572 "cplus.met"
                        MulFreeTree(4,_ptTree0,opt,stat,statTree);
                        PROG_EXIT(statement_exit,"statement")
#line 3572 "cplus.met"
                    }
#line 3572 "cplus.met"
                    ReplaceTree(statTree , 2 , _ptTree0);
#line 3572 "cplus.met"
                }
#line 3572 "cplus.met"
                switchContext =  _oldswitchContext;
#line 3572 "cplus.met"
            }
#line 3572 "cplus.met"
#line 3572 "cplus.met"
            break;
#line 3572 "cplus.met"
#line 3574 "cplus.met"
        case FORALLSONS : 
#line 3574 "cplus.met"
            tokenAhead = 0 ;
#line 3574 "cplus.met"
            CommTerm();
#line 3574 "cplus.met"
#line 3575 "cplus.met"
#line 3576 "cplus.met"
            (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3576 "cplus.met"
            if (  !SEE_TOKEN( POUV,"(") || !(CommTerm(),1)) {
#line 3576 "cplus.met"
                MulFreeTree(3,opt,stat,statTree);
                TOKEN_EXIT(statement_exit,"(")
#line 3576 "cplus.met"
            } else {
#line 3576 "cplus.met"
                tokenAhead = 0 ;
#line 3576 "cplus.met"
            }
#line 3576 "cplus.met"
#line 3577 "cplus.met"
            {
#line 3577 "cplus.met"
                PPTREE _ptTree0=0,_ptRes0=0;
#line 3577 "cplus.met"
                _ptRes0= MakeTree(FORALLSONS, 2);
#line 3577 "cplus.met"
                {
#line 3577 "cplus.met"
                    PPTREE _ptTree1=0,_ptRes1=0;
#line 3577 "cplus.met"
                    _ptRes1= MakeTree(IDENT, 1);
#line 3577 "cplus.met"
                    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3577 "cplus.met"
                    if ( ! TERM_OR_META(IDENT,"IDENT") || !(BUILD_TERM_META(_ptTree1))) {
#line 3577 "cplus.met"
                        MulFreeTree(7,_ptRes1,_ptTree1,_ptRes0,_ptTree0,opt,stat,statTree);
                        TOKEN_EXIT(statement_exit,"IDENT")
#line 3577 "cplus.met"
                    } else {
#line 3577 "cplus.met"
                        tokenAhead = 0 ;
#line 3577 "cplus.met"
                    }
#line 3577 "cplus.met"
                    ReplaceTree(_ptRes1, 1, _ptTree1);
#line 3577 "cplus.met"
                    _ptTree0=_ptRes1;
#line 3577 "cplus.met"
                }
#line 3577 "cplus.met"
                ReplaceTree(_ptRes0, 1, _ptTree0);
#line 3577 "cplus.met"
                statTree=_ptRes0;
#line 3577 "cplus.met"
            }
#line 3577 "cplus.met"
#line 3578 "cplus.met"
            (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3578 "cplus.met"
            if (  !SEE_TOKEN( VIRG,",") || !(CommTerm(),1)) {
#line 3578 "cplus.met"
                MulFreeTree(3,opt,stat,statTree);
                TOKEN_EXIT(statement_exit,",")
#line 3578 "cplus.met"
            } else {
#line 3578 "cplus.met"
                tokenAhead = 0 ;
#line 3578 "cplus.met"
            }
#line 3578 "cplus.met"
#line 3579 "cplus.met"
            {
#line 3579 "cplus.met"
                switchContext = 0 ;
#line 3579 "cplus.met"
#line 3580 "cplus.met"
                if (! (NPUSH_CALL_AFF_VERIF(stat = ,_Tak(statement), 145, cplus))){
#line 3580 "cplus.met"
#line 3581 "cplus.met"
                    if ( (stat=NQUICK_CALL(_Tak(expression)(error_free), 67, cplus))== (PPTREE) -1 ) {
#line 3581 "cplus.met"
                        MulFreeTree(3,opt,stat,statTree);
                        PROG_EXIT(statement_exit,"statement")
#line 3581 "cplus.met"
                    }
#line 3581 "cplus.met"
                }
#line 3581 "cplus.met"
                switchContext =  _oldswitchContext;
#line 3581 "cplus.met"
            }
#line 3581 "cplus.met"
#line 3582 "cplus.met"
            ReplaceTree(statTree ,2 ,stat );
#line 3582 "cplus.met"
#line 3583 "cplus.met"
            (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3583 "cplus.met"
            if (  !SEE_TOKEN( PFER,")") || !(CommTerm(),1)) {
#line 3583 "cplus.met"
                MulFreeTree(3,opt,stat,statTree);
                TOKEN_EXIT(statement_exit,")")
#line 3583 "cplus.met"
            } else {
#line 3583 "cplus.met"
                tokenAhead = 0 ;
#line 3583 "cplus.met"
            }
#line 3583 "cplus.met"
#line 3583 "cplus.met"
            break;
#line 3583 "cplus.met"
#line 3585 "cplus.met"
        case THROW : 
#line 3585 "cplus.met"
            tokenAhead = 0 ;
#line 3585 "cplus.met"
            CommTerm();
#line 3585 "cplus.met"
#line 3586 "cplus.met"
#line 3587 "cplus.met"
            {
#line 3587 "cplus.met"
                PPTREE _ptRes0=0;
#line 3587 "cplus.met"
                _ptRes0= MakeTree(THROW_ANSI, 1);
#line 3587 "cplus.met"
                statTree=_ptRes0;
#line 3587 "cplus.met"
            }
#line 3587 "cplus.met"
#line 3588 "cplus.met"
            if (NPUSH_CALL_AFF_VERIF(opt = ,_Tak(expression), 67, cplus)){
#line 3588 "cplus.met"
#line 3589 "cplus.met"
                ReplaceTree(statTree ,1 ,opt );
#line 3589 "cplus.met"
#line 3589 "cplus.met"
            }
#line 3589 "cplus.met"
#line 3590 "cplus.met"
            (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3590 "cplus.met"
            if (  !SEE_TOKEN( PVIR,";") || !(CommTerm(),1)) {
#line 3590 "cplus.met"
                MulFreeTree(3,opt,stat,statTree);
                TOKEN_EXIT(statement_exit,";")
#line 3590 "cplus.met"
            } else {
#line 3590 "cplus.met"
                tokenAhead = 0 ;
#line 3590 "cplus.met"
            }
#line 3590 "cplus.met"
#line 3590 "cplus.met"
            break;
#line 3590 "cplus.met"
#line 3592 "cplus.met"
        case TRY : 
#line 3592 "cplus.met"
#line 3592 "cplus.met"
            if ( (statTree=NQUICK_CALL(_Tak(exception_ansi)(error_free), 64, cplus))== (PPTREE) -1 ) {
#line 3592 "cplus.met"
                MulFreeTree(3,opt,stat,statTree);
                PROG_EXIT(statement_exit,"statement")
#line 3592 "cplus.met"
            }
#line 3592 "cplus.met"
            break;
#line 3592 "cplus.met"
#line 3593 "cplus.met"
        case META : 
#line 3593 "cplus.met"
#line 3594 "cplus.met"
            if (NPUSH_CALL_VERIF(_Tak(label_beg), 92, cplus)){
#line 3594 "cplus.met"
#line 3595 "cplus.met"
#line 3596 "cplus.met"
                {
#line 3596 "cplus.met"
                    PPTREE _ptTree0=0,_ptRes0=0;
#line 3596 "cplus.met"
                    _ptRes0= MakeTree(LABEL, 2);
#line 3596 "cplus.met"
                    {
#line 3596 "cplus.met"
                        PPTREE _ptTree1=0,_ptRes1=0;
#line 3596 "cplus.met"
                        _ptRes1= MakeTree(IDENT, 1);
#line 3596 "cplus.met"
                        (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3596 "cplus.met"
                        if ( ! TERM_OR_META(IDENT,"IDENT") || !(BUILD_TERM_META(_ptTree1))) {
#line 3596 "cplus.met"
                            MulFreeTree(7,_ptRes1,_ptTree1,_ptRes0,_ptTree0,opt,stat,statTree);
                            TOKEN_EXIT(statement_exit,"IDENT")
#line 3596 "cplus.met"
                        } else {
#line 3596 "cplus.met"
                            tokenAhead = 0 ;
#line 3596 "cplus.met"
                        }
#line 3596 "cplus.met"
                        ReplaceTree(_ptRes1, 1, _ptTree1);
#line 3596 "cplus.met"
                        _ptTree0=_ptRes1;
#line 3596 "cplus.met"
                    }
#line 3596 "cplus.met"
                    ReplaceTree(_ptRes0, 1, _ptTree0);
#line 3596 "cplus.met"
                    statTree=_ptRes0;
#line 3596 "cplus.met"
                }
#line 3596 "cplus.met"
#line 3597 "cplus.met"
                (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3597 "cplus.met"
                if (  !SEE_TOKEN( DPOI,":") || !(CommTerm(),1)) {
#line 3597 "cplus.met"
                    MulFreeTree(3,opt,stat,statTree);
                    TOKEN_EXIT(statement_exit,":")
#line 3597 "cplus.met"
                } else {
#line 3597 "cplus.met"
                    tokenAhead = 0 ;
#line 3597 "cplus.met"
                }
#line 3597 "cplus.met"
#line 3598 "cplus.met"
                {
#line 3598 "cplus.met"
                    switchContext = 0 ;
#line 3598 "cplus.met"
#line 3599 "cplus.met"
                    {
#line 3599 "cplus.met"
                        PPTREE _ptTree0=0;
#line 3599 "cplus.met"
                        if ( (_ptTree0=NQUICK_CALL(_Tak(statement)(error_free), 145, cplus))== (PPTREE) -1 ) {
#line 3599 "cplus.met"
                            MulFreeTree(4,_ptTree0,opt,stat,statTree);
                            PROG_EXIT(statement_exit,"statement")
#line 3599 "cplus.met"
                        }
#line 3599 "cplus.met"
                        ReplaceTree(statTree , 2 , _ptTree0);
#line 3599 "cplus.met"
                    }
#line 3599 "cplus.met"
                    switchContext =  _oldswitchContext;
#line 3599 "cplus.met"
                }
#line 3599 "cplus.met"
#line 3599 "cplus.met"
#line 3599 "cplus.met"
            } else {
#line 3599 "cplus.met"
#line 3602 "cplus.met"
                if (NPUSH_CALL_VERIF(_Tak(ident_mul), 83, cplus)){
#line 3602 "cplus.met"
#line 3604 "cplus.met"
                    
#line 3604 "cplus.met"
                    MulFreeTree(3,opt,stat,statTree);
                    LEX_EXIT ("",0);
#line 3604 "cplus.met"
                    goto statement_exit;
#line 3604 "cplus.met"
#line 3605 "cplus.met"
                } else {
#line 3605 "cplus.met"
#line 3607 "cplus.met"
#line 3608 "cplus.met"
                    if ( (statTree=NQUICK_CALL(_Tak(expression)(error_free), 67, cplus))== (PPTREE) -1 ) {
#line 3608 "cplus.met"
                        MulFreeTree(3,opt,stat,statTree);
                        PROG_EXIT(statement_exit,"statement")
#line 3608 "cplus.met"
                    }
#line 3608 "cplus.met"
#line 3609 "cplus.met"
                    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3609 "cplus.met"
                    if (  !SEE_TOKEN( PVIR,";") || !(CommTerm(),1)) {
#line 3609 "cplus.met"
                        MulFreeTree(3,opt,stat,statTree);
                        TOKEN_EXIT(statement_exit,";")
#line 3609 "cplus.met"
                    } else {
#line 3609 "cplus.met"
                        tokenAhead = 0 ;
#line 3609 "cplus.met"
                    }
#line 3609 "cplus.met"
#line 3609 "cplus.met"
                }
#line 3609 "cplus.met"
            }
#line 3609 "cplus.met"
            break;
#line 3609 "cplus.met"
#line 3613 "cplus.met"
        case CASE : 
#line 3613 "cplus.met"
#line 3614 "cplus.met"
            if (! (switchContext)){
#line 3614 "cplus.met"
#line 3615 "cplus.met"
                
#line 3615 "cplus.met"
                MulFreeTree(3,opt,stat,statTree);
                LEX_EXIT ("",0);
#line 3615 "cplus.met"
                goto statement_exit;
#line 3615 "cplus.met"
#line 3615 "cplus.met"
            } else {
#line 3615 "cplus.met"
#line 3617 "cplus.met"
                {
#line 3617 "cplus.met"
                    PPTREE _ptTree0=0;
#line 3617 "cplus.met"
                    if ( (_ptTree0=NQUICK_CALL(_Tak(switch_elem)(error_free), 148, cplus))== (PPTREE) -1 ) {
#line 3617 "cplus.met"
                        MulFreeTree(4,_ptTree0,opt,stat,statTree);
                        PROG_EXIT(statement_exit,"statement")
#line 3617 "cplus.met"
                    }
#line 3617 "cplus.met"
                    _retValue =_ptTree0;
#line 3617 "cplus.met"
                    goto statement_ret;
#line 3617 "cplus.met"
                }
#line 3617 "cplus.met"
            }
#line 3617 "cplus.met"
            break;
#line 3617 "cplus.met"
#line 3618 "cplus.met"
        case DEFAULT : 
#line 3618 "cplus.met"
#line 3619 "cplus.met"
            if (! (switchContext)){
#line 3619 "cplus.met"
#line 3620 "cplus.met"
                
#line 3620 "cplus.met"
                MulFreeTree(3,opt,stat,statTree);
                LEX_EXIT ("",0);
#line 3620 "cplus.met"
                goto statement_exit;
#line 3620 "cplus.met"
#line 3620 "cplus.met"
            } else {
#line 3620 "cplus.met"
#line 3622 "cplus.met"
                {
#line 3622 "cplus.met"
                    PPTREE _ptTree0=0;
#line 3622 "cplus.met"
                    if ( (_ptTree0=NQUICK_CALL(_Tak(switch_elem)(error_free), 148, cplus))== (PPTREE) -1 ) {
#line 3622 "cplus.met"
                        MulFreeTree(4,_ptTree0,opt,stat,statTree);
                        PROG_EXIT(statement_exit,"statement")
#line 3622 "cplus.met"
                    }
#line 3622 "cplus.met"
                    _retValue =_ptTree0;
#line 3622 "cplus.met"
                    goto statement_ret;
#line 3622 "cplus.met"
                }
#line 3622 "cplus.met"
            }
#line 3622 "cplus.met"
            break;
#line 3622 "cplus.met"
#line 3623 "cplus.met"
        case IDENT : 
#line 3623 "cplus.met"
#line 3624 "cplus.met"
            (tokenAhead == 14|| (the_exit(),TRACE_LEX(1)));
#line 3624 "cplus.met"
            switch( lexEl.Value) {
#line 3624 "cplus.met"
#line 3625 "cplus.met"
                case META : 
#line 3625 "cplus.met"
                case FUNC_SPEC : 
#line 3625 "cplus.met"
#line 3626 "cplus.met"
#line 3627 "cplus.met"
                    {
#line 3627 "cplus.met"
                        PPTREE _ptTree0=0,_ptRes0=0;
#line 3627 "cplus.met"
                        _ptRes0= MakeTree(FUNC_SPEC, 2);
#line 3627 "cplus.met"
                        {
#line 3627 "cplus.met"
                            PPTREE _ptTree1=0,_ptRes1=0;
#line 3627 "cplus.met"
                            _ptRes1= MakeTree(IDENT, 1);
#line 3627 "cplus.met"
                            (tokenAhead == 14|| (the_exit(),TRACE_LEX(1)));
#line 3627 "cplus.met"
                            if ( ! TERM_OR_META(FUNC_SPEC,"FUNC_SPEC") || !(BUILD_TERM_META(_ptTree1))) {
#line 3627 "cplus.met"
                                MulFreeTree(7,_ptRes1,_ptTree1,_ptRes0,_ptTree0,opt,stat,statTree);
                                TOKEN_EXIT(statement_exit,"FUNC_SPEC")
#line 3627 "cplus.met"
                            } else {
#line 3627 "cplus.met"
                                tokenAhead = 0 ;
#line 3627 "cplus.met"
                            }
#line 3627 "cplus.met"
                            ReplaceTree(_ptRes1, 1, _ptTree1);
#line 3627 "cplus.met"
                            _ptTree0=_ptRes1;
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
                    if (  !SEE_TOKEN( POUV,"(") || !(CommTerm(),1)) {
#line 3628 "cplus.met"
                        MulFreeTree(3,opt,stat,statTree);
                        TOKEN_EXIT(statement_exit,"(")
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
                        PPTREE _ptTree0=0;
#line 3629 "cplus.met"
                        if ( (_ptTree0=NQUICK_CALL(_Tak(expression)(error_free), 67, cplus))== (PPTREE) -1 ) {
#line 3629 "cplus.met"
                            MulFreeTree(4,_ptTree0,opt,stat,statTree);
                            PROG_EXIT(statement_exit,"statement")
#line 3629 "cplus.met"
                        }
#line 3629 "cplus.met"
                        ReplaceTree(statTree , 2 , _ptTree0);
#line 3629 "cplus.met"
                    }
#line 3629 "cplus.met"
#line 3630 "cplus.met"
                    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3630 "cplus.met"
                    if (  !SEE_TOKEN( PFER,")") || !(CommTerm(),1)) {
#line 3630 "cplus.met"
                        MulFreeTree(3,opt,stat,statTree);
                        TOKEN_EXIT(statement_exit,")")
#line 3630 "cplus.met"
                    } else {
#line 3630 "cplus.met"
                        tokenAhead = 0 ;
#line 3630 "cplus.met"
                    }
#line 3630 "cplus.met"
#line 3630 "cplus.met"
                    break;
#line 3630 "cplus.met"
#line 3635 "cplus.met"
                default : 
#line 3635 "cplus.met"
#line 3633 "cplus.met"
                    if (NPUSH_CALL_VERIF(_Tak(label_beg), 92, cplus)){
#line 3633 "cplus.met"
#line 3634 "cplus.met"
#line 3635 "cplus.met"
                        {
#line 3635 "cplus.met"
                            PPTREE _ptTree0=0,_ptRes0=0;
#line 3635 "cplus.met"
                            _ptRes0= MakeTree(LABEL, 2);
#line 3635 "cplus.met"
                            {
#line 3635 "cplus.met"
                                PPTREE _ptTree1=0,_ptRes1=0;
#line 3635 "cplus.met"
                                _ptRes1= MakeTree(IDENT, 1);
#line 3635 "cplus.met"
                                (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3635 "cplus.met"
                                if ( ! TERM_OR_META(IDENT,"IDENT") || !(BUILD_TERM_META(_ptTree1))) {
#line 3635 "cplus.met"
                                    MulFreeTree(7,_ptRes1,_ptTree1,_ptRes0,_ptTree0,opt,stat,statTree);
                                    TOKEN_EXIT(statement_exit,"IDENT")
#line 3635 "cplus.met"
                                } else {
#line 3635 "cplus.met"
                                    tokenAhead = 0 ;
#line 3635 "cplus.met"
                                }
#line 3635 "cplus.met"
                                ReplaceTree(_ptRes1, 1, _ptTree1);
#line 3635 "cplus.met"
                                _ptTree0=_ptRes1;
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
                        if (  !SEE_TOKEN( DPOI,":") || !(CommTerm(),1)) {
#line 3636 "cplus.met"
                            MulFreeTree(3,opt,stat,statTree);
                            TOKEN_EXIT(statement_exit,":")
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
                                if ( (_ptTree0=NQUICK_CALL(_Tak(statement)(error_free), 145, cplus))== (PPTREE) -1 ) {
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
#line 3638 "cplus.met"
                    } else {
#line 3638 "cplus.met"
#line 3641 "cplus.met"
                        if (NPUSH_CALL_VERIF(_Tak(ident_mul), 83, cplus)){
#line 3641 "cplus.met"
#line 3644 "cplus.met"
                            
#line 3644 "cplus.met"
                            MulFreeTree(3,opt,stat,statTree);
                            LEX_EXIT ("",0);
#line 3644 "cplus.met"
                            goto statement_exit;
#line 3644 "cplus.met"
#line 3645 "cplus.met"
                        } else {
#line 3645 "cplus.met"
#line 3647 "cplus.met"
#line 3648 "cplus.met"
                            if ( (statTree=NQUICK_CALL(_Tak(statement_expression)(error_free), 146, cplus))== (PPTREE) -1 ) {
#line 3648 "cplus.met"
                                MulFreeTree(3,opt,stat,statTree);
                                PROG_EXIT(statement_exit,"statement")
#line 3648 "cplus.met"
                            }
#line 3648 "cplus.met"
#line 3648 "cplus.met"
                        }
#line 3648 "cplus.met"
                    }
#line 3648 "cplus.met"
                    break;
#line 3648 "cplus.met"
            }
#line 3648 "cplus.met"
            break;
#line 3648 "cplus.met"
#line 3654 "cplus.met"
        default : 
#line 3654 "cplus.met"
#line 3652 "cplus.met"
#line 3653 "cplus.met"
            if (NPUSH_CALL_VERIF(_Tak(ident_mul), 83, cplus)){
#line 3653 "cplus.met"
#line 3654 "cplus.met"
                
#line 3654 "cplus.met"
                MulFreeTree(3,opt,stat,statTree);
                LEX_EXIT ("",0);
#line 3654 "cplus.met"
                goto statement_exit;
#line 3654 "cplus.met"
#line 3654 "cplus.met"
            } else {
#line 3654 "cplus.met"
#line 3656 "cplus.met"
#line 3657 "cplus.met"
                if ( (statTree=NQUICK_CALL(_Tak(expression)(error_free), 67, cplus))== (PPTREE) -1 ) {
#line 3657 "cplus.met"
                    MulFreeTree(3,opt,stat,statTree);
                    PROG_EXIT(statement_exit,"statement")
#line 3657 "cplus.met"
                }
#line 3657 "cplus.met"
#line 3658 "cplus.met"
                (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3658 "cplus.met"
                if (  !SEE_TOKEN( PVIR,";") || !(CommTerm(),1)) {
#line 3658 "cplus.met"
                    MulFreeTree(3,opt,stat,statTree);
                    TOKEN_EXIT(statement_exit,";")
#line 3658 "cplus.met"
                } else {
#line 3658 "cplus.met"
                    tokenAhead = 0 ;
#line 3658 "cplus.met"
                }
#line 3658 "cplus.met"
#line 3658 "cplus.met"
            }
#line 3658 "cplus.met"
#line 3658 "cplus.met"
            break;
#line 3658 "cplus.met"
    }
#line 3658 "cplus.met"
#line 3662 "cplus.met"
    {
#line 3662 "cplus.met"
        _retValue = statTree ;
#line 3662 "cplus.met"
        goto statement_ret;
#line 3662 "cplus.met"
        
#line 3662 "cplus.met"
    }
#line 3662 "cplus.met"
#line 3662 "cplus.met"
#line 3662 "cplus.met"

#line 3663 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 3663 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 3663 "cplus.met"
switchContext =  _oldswitchContext;
#line 3663 "cplus.met"
return((PPTREE) 0);
#line 3663 "cplus.met"

#line 3663 "cplus.met"
statement_exit :
#line 3663 "cplus.met"

#line 3663 "cplus.met"
    _Debug = TRACE_RULE("statement",TRACE_EXIT,(PPTREE)0);
#line 3663 "cplus.met"
    _funcLevel--;
#line 3663 "cplus.met"
    switchContext =  _oldswitchContext;
#line 3663 "cplus.met"
    return((PPTREE) -1) ;
#line 3663 "cplus.met"

#line 3663 "cplus.met"
statement_ret :
#line 3663 "cplus.met"
    
#line 3663 "cplus.met"
    _Debug = TRACE_RULE("statement",TRACE_RETURN,_retValue);
#line 3663 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 3663 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 3663 "cplus.met"
    switchContext =  _oldswitchContext;
#line 3663 "cplus.met"
    return _retValue ;
#line 3663 "cplus.met"
}
#line 3663 "cplus.met"

#line 3663 "cplus.met"
