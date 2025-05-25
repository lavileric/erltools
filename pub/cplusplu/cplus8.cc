/*************************************************************************/
/*                                                                       */
/*        Produced by MetaGen version 2.0  -    1989-2006                 */
/*       Syntaxic Analyzer Meta Generator developped by                  */
/*                  Eric Lavillonniere                                   */
/*                                                                       */
/*************************************************************************/

#include "token.h"
#include "cplus.h"


#line 2814 "cplus.met"
PPTREE cplus::relational_expression ( int error_free)
#line 2814 "cplus.met"
{
#line 2814 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 2814 "cplus.met"
    int _value,_nbPre = 0 ;
#line 2814 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 2814 "cplus.met"
    int _Debug = TRACE_RULE("relational_expression",TRACE_ENTER,(PPTREE)0);
#line 2814 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 2814 "cplus.met"
#line 2814 "cplus.met"
    PPTREE expTree = (PPTREE) 0;
#line 2814 "cplus.met"
#line 2816 "cplus.met"
    if ( (expTree=NQUICK_CALL(_Tak(shift_expression)(error_free), 132, cplus))== (PPTREE) -1 ) {
#line 2816 "cplus.met"
        MulFreeTree(1,expTree);
        PROG_EXIT(relational_expression_exit,"relational_expression")
#line 2816 "cplus.met"
    }
#line 2816 "cplus.met"
#line 2817 "cplus.met"
    while (((((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN( INFEEGAL,"<=")) || 
#line 2817 "cplus.met"
            ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN( SUPEEGAL,">="))) || 
#line 2817 "cplus.met"
           (((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN( SUPE,">")))) || 
#line 2817 "cplus.met"
          ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN( INFE,"<"))) { 
#line 2817 "cplus.met"
#line 2818 "cplus.met"
        (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 2818 "cplus.met"
        switch( lexEl.Value) {
#line 2818 "cplus.met"
#line 2819 "cplus.met"
            case INFEEGAL : 
#line 2819 "cplus.met"
                tokenAhead = 0 ;
#line 2819 "cplus.met"
                CommTerm();
#line 2819 "cplus.met"
#line 2819 "cplus.met"
                {
#line 2819 "cplus.met"
                    PPTREE _ptTree0=0,_ptRes0=0;
#line 2819 "cplus.met"
                    _ptRes0= MakeTree(LEQU, 2);
#line 2819 "cplus.met"
                    ReplaceTree(_ptRes0, 1, expTree );
#line 2819 "cplus.met"
                    if ( (_ptTree0=NQUICK_CALL(_Tak(shift_expression)(error_free), 132, cplus))== (PPTREE) -1 ) {
#line 2819 "cplus.met"
                        MulFreeTree(3,_ptRes0,_ptTree0,expTree);
                        PROG_EXIT(relational_expression_exit,"relational_expression")
#line 2819 "cplus.met"
                    }
#line 2819 "cplus.met"
                    ReplaceTree(_ptRes0, 2, _ptTree0);
#line 2819 "cplus.met"
                    expTree=_ptRes0;
#line 2819 "cplus.met"
                }
#line 2819 "cplus.met"
                break;
#line 2819 "cplus.met"
#line 2820 "cplus.met"
            case SUPEEGAL : 
#line 2820 "cplus.met"
                tokenAhead = 0 ;
#line 2820 "cplus.met"
                CommTerm();
#line 2820 "cplus.met"
#line 2820 "cplus.met"
                {
#line 2820 "cplus.met"
                    PPTREE _ptTree0=0,_ptRes0=0;
#line 2820 "cplus.met"
                    _ptRes0= MakeTree(GEQU, 2);
#line 2820 "cplus.met"
                    ReplaceTree(_ptRes0, 1, expTree );
#line 2820 "cplus.met"
                    if ( (_ptTree0=NQUICK_CALL(_Tak(shift_expression)(error_free), 132, cplus))== (PPTREE) -1 ) {
#line 2820 "cplus.met"
                        MulFreeTree(3,_ptRes0,_ptTree0,expTree);
                        PROG_EXIT(relational_expression_exit,"relational_expression")
#line 2820 "cplus.met"
                    }
#line 2820 "cplus.met"
                    ReplaceTree(_ptRes0, 2, _ptTree0);
#line 2820 "cplus.met"
                    expTree=_ptRes0;
#line 2820 "cplus.met"
                }
#line 2820 "cplus.met"
                break;
#line 2820 "cplus.met"
#line 2821 "cplus.met"
            case SUPE : 
#line 2821 "cplus.met"
                tokenAhead = 0 ;
#line 2821 "cplus.met"
                CommTerm();
#line 2821 "cplus.met"
#line 2821 "cplus.met"
                {
#line 2821 "cplus.met"
                    PPTREE _ptTree0=0,_ptRes0=0;
#line 2821 "cplus.met"
                    _ptRes0= MakeTree(GT, 2);
#line 2821 "cplus.met"
                    ReplaceTree(_ptRes0, 1, expTree );
#line 2821 "cplus.met"
                    if ( (_ptTree0=NQUICK_CALL(_Tak(shift_expression)(error_free), 132, cplus))== (PPTREE) -1 ) {
#line 2821 "cplus.met"
                        MulFreeTree(3,_ptRes0,_ptTree0,expTree);
                        PROG_EXIT(relational_expression_exit,"relational_expression")
#line 2821 "cplus.met"
                    }
#line 2821 "cplus.met"
                    ReplaceTree(_ptRes0, 2, _ptTree0);
#line 2821 "cplus.met"
                    expTree=_ptRes0;
#line 2821 "cplus.met"
                }
#line 2821 "cplus.met"
                break;
#line 2821 "cplus.met"
#line 2822 "cplus.met"
            case INFE : 
#line 2822 "cplus.met"
                tokenAhead = 0 ;
#line 2822 "cplus.met"
                CommTerm();
#line 2822 "cplus.met"
#line 2822 "cplus.met"
                {
#line 2822 "cplus.met"
                    PPTREE _ptTree0=0,_ptRes0=0;
#line 2822 "cplus.met"
                    _ptRes0= MakeTree(LT, 2);
#line 2822 "cplus.met"
                    ReplaceTree(_ptRes0, 1, expTree );
#line 2822 "cplus.met"
                    if ( (_ptTree0=NQUICK_CALL(_Tak(shift_expression)(error_free), 132, cplus))== (PPTREE) -1 ) {
#line 2822 "cplus.met"
                        MulFreeTree(3,_ptRes0,_ptTree0,expTree);
                        PROG_EXIT(relational_expression_exit,"relational_expression")
#line 2822 "cplus.met"
                    }
#line 2822 "cplus.met"
                    ReplaceTree(_ptRes0, 2, _ptTree0);
#line 2822 "cplus.met"
                    expTree=_ptRes0;
#line 2822 "cplus.met"
                }
#line 2822 "cplus.met"
                break;
#line 2822 "cplus.met"
            default :
#line 2822 "cplus.met"
                MulFreeTree(1,expTree);
                CASE_EXIT(relational_expression_exit,"either <= or >= or > or <")
#line 2822 "cplus.met"
                break;
#line 2822 "cplus.met"
        }
#line 2822 "cplus.met"
    } 
#line 2822 "cplus.met"
#line 2824 "cplus.met"
    {
#line 2824 "cplus.met"
        _retValue = expTree ;
#line 2824 "cplus.met"
        goto relational_expression_ret;
#line 2824 "cplus.met"
        
#line 2824 "cplus.met"
    }
#line 2824 "cplus.met"
#line 2824 "cplus.met"
#line 2824 "cplus.met"

#line 2825 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2825 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 2825 "cplus.met"
return((PPTREE) 0);
#line 2825 "cplus.met"

#line 2825 "cplus.met"
relational_expression_exit :
#line 2825 "cplus.met"

#line 2825 "cplus.met"
    _Debug = TRACE_RULE("relational_expression",TRACE_EXIT,(PPTREE)0);
#line 2825 "cplus.met"
    _funcLevel--;
#line 2825 "cplus.met"
    return((PPTREE) -1) ;
#line 2825 "cplus.met"

#line 2825 "cplus.met"
relational_expression_ret :
#line 2825 "cplus.met"
    
#line 2825 "cplus.met"
    _Debug = TRACE_RULE("relational_expression",TRACE_RETURN,_retValue);
#line 2825 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2825 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 2825 "cplus.met"
    return _retValue ;
#line 2825 "cplus.met"
}
#line 2825 "cplus.met"

#line 2825 "cplus.met"
#line 1556 "cplus.met"
PPTREE cplus::sc_specifier ( int error_free)
#line 1556 "cplus.met"
{
#line 1556 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 1556 "cplus.met"
    int _value,_nbPre = 0 ;
#line 1556 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 1556 "cplus.met"
    int _Debug = TRACE_RULE("sc_specifier",TRACE_ENTER,(PPTREE)0);
#line 1556 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 1556 "cplus.met"
#line 1557 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 1557 "cplus.met"
    switch( lexEl.Value) {
#line 1557 "cplus.met"
#line 1558 "cplus.met"
        case AUTO : 
#line 1558 "cplus.met"
#line 1558 "cplus.met"
            {
#line 1558 "cplus.met"
                PPTREE _ptTree0=0;
#line 1558 "cplus.met"
                (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 1558 "cplus.met"
                if (  !SEE_TOKEN( AUTO,"auto") || !(_ptTree0 = CommString(lexEl.string()))) {
#line 1558 "cplus.met"
                    MulFreeTree(1,_ptTree0);
                    TOKEN_EXIT(sc_specifier_exit,"auto")
#line 1558 "cplus.met"
                } else {
#line 1558 "cplus.met"
                    tokenAhead = 0 ;
#line 1558 "cplus.met"
                }
#line 1558 "cplus.met"
                _retValue =_ptTree0;
#line 1558 "cplus.met"
                goto sc_specifier_ret;
#line 1558 "cplus.met"
            }
#line 1558 "cplus.met"
            break;
#line 1558 "cplus.met"
#line 1559 "cplus.met"
        case STATIC : 
#line 1559 "cplus.met"
#line 1559 "cplus.met"
            {
#line 1559 "cplus.met"
                PPTREE _ptTree0=0;
#line 1559 "cplus.met"
                (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 1559 "cplus.met"
                if (  !SEE_TOKEN( STATIC,"static") || !(_ptTree0 = CommString(lexEl.string()))) {
#line 1559 "cplus.met"
                    MulFreeTree(1,_ptTree0);
                    TOKEN_EXIT(sc_specifier_exit,"static")
#line 1559 "cplus.met"
                } else {
#line 1559 "cplus.met"
                    tokenAhead = 0 ;
#line 1559 "cplus.met"
                }
#line 1559 "cplus.met"
                _retValue =_ptTree0;
#line 1559 "cplus.met"
                goto sc_specifier_ret;
#line 1559 "cplus.met"
            }
#line 1559 "cplus.met"
            break;
#line 1559 "cplus.met"
#line 1560 "cplus.met"
        case EXTERN : 
#line 1560 "cplus.met"
#line 1560 "cplus.met"
            {
#line 1560 "cplus.met"
                PPTREE _ptTree0=0;
#line 1560 "cplus.met"
                (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 1560 "cplus.met"
                if (  !SEE_TOKEN( EXTERN,"extern") || !(_ptTree0 = CommString(lexEl.string()))) {
#line 1560 "cplus.met"
                    MulFreeTree(1,_ptTree0);
                    TOKEN_EXIT(sc_specifier_exit,"extern")
#line 1560 "cplus.met"
                } else {
#line 1560 "cplus.met"
                    tokenAhead = 0 ;
#line 1560 "cplus.met"
                }
#line 1560 "cplus.met"
                _retValue =_ptTree0;
#line 1560 "cplus.met"
                goto sc_specifier_ret;
#line 1560 "cplus.met"
            }
#line 1560 "cplus.met"
            break;
#line 1560 "cplus.met"
#line 1561 "cplus.met"
        case REGISTER : 
#line 1561 "cplus.met"
#line 1561 "cplus.met"
            {
#line 1561 "cplus.met"
                PPTREE _ptTree0=0;
#line 1561 "cplus.met"
                (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 1561 "cplus.met"
                if (  !SEE_TOKEN( REGISTER,"register") || !(_ptTree0 = CommString(lexEl.string()))) {
#line 1561 "cplus.met"
                    MulFreeTree(1,_ptTree0);
                    TOKEN_EXIT(sc_specifier_exit,"register")
#line 1561 "cplus.met"
                } else {
#line 1561 "cplus.met"
                    tokenAhead = 0 ;
#line 1561 "cplus.met"
                }
#line 1561 "cplus.met"
                _retValue =_ptTree0;
#line 1561 "cplus.met"
                goto sc_specifier_ret;
#line 1561 "cplus.met"
            }
#line 1561 "cplus.met"
            break;
#line 1561 "cplus.met"
#line 1561 "cplus.met"
        default : 
#line 1561 "cplus.met"
#line 1561 "cplus.met"
            break;
#line 1561 "cplus.met"
    }
#line 1561 "cplus.met"
#line 1561 "cplus.met"
#line 1563 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1563 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 1563 "cplus.met"
return((PPTREE) 0);
#line 1563 "cplus.met"

#line 1563 "cplus.met"
sc_specifier_exit :
#line 1563 "cplus.met"

#line 1563 "cplus.met"
    _Debug = TRACE_RULE("sc_specifier",TRACE_EXIT,(PPTREE)0);
#line 1563 "cplus.met"
    _funcLevel--;
#line 1563 "cplus.met"
    return((PPTREE) -1) ;
#line 1563 "cplus.met"

#line 1563 "cplus.met"
sc_specifier_ret :
#line 1563 "cplus.met"
    
#line 1563 "cplus.met"
    _Debug = TRACE_RULE("sc_specifier",TRACE_RETURN,_retValue);
#line 1563 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1563 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 1563 "cplus.met"
    return _retValue ;
#line 1563 "cplus.met"
}
#line 1563 "cplus.met"

#line 1563 "cplus.met"
#line 2827 "cplus.met"
PPTREE cplus::shift_expression ( int error_free)
#line 2827 "cplus.met"
{
#line 2827 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 2827 "cplus.met"
    int _value,_nbPre = 0 ;
#line 2827 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 2827 "cplus.met"
    int _Debug = TRACE_RULE("shift_expression",TRACE_ENTER,(PPTREE)0);
#line 2827 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 2827 "cplus.met"
#line 2827 "cplus.met"
    PPTREE expTree = (PPTREE) 0;
#line 2827 "cplus.met"
#line 2829 "cplus.met"
    if ( (expTree=NQUICK_CALL(_Tak(additive_expression)(error_free), 3, cplus))== (PPTREE) -1 ) {
#line 2829 "cplus.met"
        MulFreeTree(1,expTree);
        PROG_EXIT(shift_expression_exit,"shift_expression")
#line 2829 "cplus.met"
    }
#line 2829 "cplus.met"
#line 2830 "cplus.met"
    while (((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN( INFEINFE,"<<")) || 
#line 2830 "cplus.met"
          ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN( SUPESUPE,">>"))) { 
#line 2830 "cplus.met"
#line 2831 "cplus.met"
        (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 2831 "cplus.met"
        switch( lexEl.Value) {
#line 2831 "cplus.met"
#line 2832 "cplus.met"
            case INFEINFE : 
#line 2832 "cplus.met"
                tokenAhead = 0 ;
#line 2832 "cplus.met"
                CommTerm();
#line 2832 "cplus.met"
#line 2832 "cplus.met"
                {
#line 2832 "cplus.met"
                    PPTREE _ptTree0=0,_ptRes0=0;
#line 2832 "cplus.met"
                    _ptRes0= MakeTree(LSHI, 2);
#line 2832 "cplus.met"
                    ReplaceTree(_ptRes0, 1, expTree );
#line 2832 "cplus.met"
                    if ( (_ptTree0=NQUICK_CALL(_Tak(additive_expression)(error_free), 3, cplus))== (PPTREE) -1 ) {
#line 2832 "cplus.met"
                        MulFreeTree(3,_ptRes0,_ptTree0,expTree);
                        PROG_EXIT(shift_expression_exit,"shift_expression")
#line 2832 "cplus.met"
                    }
#line 2832 "cplus.met"
                    ReplaceTree(_ptRes0, 2, _ptTree0);
#line 2832 "cplus.met"
                    expTree=_ptRes0;
#line 2832 "cplus.met"
                }
#line 2832 "cplus.met"
                break;
#line 2832 "cplus.met"
#line 2833 "cplus.met"
            case SUPESUPE : 
#line 2833 "cplus.met"
                tokenAhead = 0 ;
#line 2833 "cplus.met"
                CommTerm();
#line 2833 "cplus.met"
#line 2833 "cplus.met"
                {
#line 2833 "cplus.met"
                    PPTREE _ptTree0=0,_ptRes0=0;
#line 2833 "cplus.met"
                    _ptRes0= MakeTree(RSHI, 2);
#line 2833 "cplus.met"
                    ReplaceTree(_ptRes0, 1, expTree );
#line 2833 "cplus.met"
                    if ( (_ptTree0=NQUICK_CALL(_Tak(additive_expression)(error_free), 3, cplus))== (PPTREE) -1 ) {
#line 2833 "cplus.met"
                        MulFreeTree(3,_ptRes0,_ptTree0,expTree);
                        PROG_EXIT(shift_expression_exit,"shift_expression")
#line 2833 "cplus.met"
                    }
#line 2833 "cplus.met"
                    ReplaceTree(_ptRes0, 2, _ptTree0);
#line 2833 "cplus.met"
                    expTree=_ptRes0;
#line 2833 "cplus.met"
                }
#line 2833 "cplus.met"
                break;
#line 2833 "cplus.met"
            default :
#line 2833 "cplus.met"
                MulFreeTree(1,expTree);
                CASE_EXIT(shift_expression_exit,"either << or >>")
#line 2833 "cplus.met"
                break;
#line 2833 "cplus.met"
        }
#line 2833 "cplus.met"
    } 
#line 2833 "cplus.met"
#line 2835 "cplus.met"
    {
#line 2835 "cplus.met"
        _retValue = expTree ;
#line 2835 "cplus.met"
        goto shift_expression_ret;
#line 2835 "cplus.met"
        
#line 2835 "cplus.met"
    }
#line 2835 "cplus.met"
#line 2835 "cplus.met"
#line 2835 "cplus.met"

#line 2836 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2836 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 2836 "cplus.met"
return((PPTREE) 0);
#line 2836 "cplus.met"

#line 2836 "cplus.met"
shift_expression_exit :
#line 2836 "cplus.met"

#line 2836 "cplus.met"
    _Debug = TRACE_RULE("shift_expression",TRACE_EXIT,(PPTREE)0);
#line 2836 "cplus.met"
    _funcLevel--;
#line 2836 "cplus.met"
    return((PPTREE) -1) ;
#line 2836 "cplus.met"

#line 2836 "cplus.met"
shift_expression_ret :
#line 2836 "cplus.met"
    
#line 2836 "cplus.met"
    _Debug = TRACE_RULE("shift_expression",TRACE_RETURN,_retValue);
#line 2836 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2836 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 2836 "cplus.met"
    return _retValue ;
#line 2836 "cplus.met"
}
#line 2836 "cplus.met"

#line 2836 "cplus.met"
#line 2142 "cplus.met"
PPTREE cplus::short_long_int_char ( int error_free)
#line 2142 "cplus.met"
{
#line 2142 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 2142 "cplus.met"
    int _value,_nbPre = 0 ;
#line 2142 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 2142 "cplus.met"
    int _Debug = TRACE_RULE("short_long_int_char",TRACE_ENTER,(PPTREE)0);
#line 2142 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 2142 "cplus.met"
#line 2143 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 2143 "cplus.met"
    switch( lexEl.Value) {
#line 2143 "cplus.met"
#line 2144 "cplus.met"
        case INT : 
#line 2144 "cplus.met"
            tokenAhead = 0 ;
#line 2144 "cplus.met"
            CommTerm();
#line 2144 "cplus.met"
#line 2144 "cplus.met"
            {
#line 2144 "cplus.met"
                PPTREE _ptTree0=0;
#line 2144 "cplus.met"
                {
#line 2144 "cplus.met"
                    PPTREE _ptRes1=0;
#line 2144 "cplus.met"
                    _ptRes1= MakeTree(TINT, 0);
#line 2144 "cplus.met"
                    _ptTree0=_ptRes1;
#line 2144 "cplus.met"
                }
#line 2144 "cplus.met"
                _retValue =_ptTree0;
#line 2144 "cplus.met"
                goto short_long_int_char_ret;
#line 2144 "cplus.met"
            }
#line 2144 "cplus.met"
            break;
#line 2144 "cplus.met"
#line 2145 "cplus.met"
        case CHAR : 
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
                    _ptRes1= MakeTree(TCHAR, 0);
#line 2145 "cplus.met"
                    _ptTree0=_ptRes1;
#line 2145 "cplus.met"
                }
#line 2145 "cplus.met"
                _retValue =_ptTree0;
#line 2145 "cplus.met"
                goto short_long_int_char_ret;
#line 2145 "cplus.met"
            }
#line 2145 "cplus.met"
            break;
#line 2145 "cplus.met"
#line 2146 "cplus.met"
        case LONG : 
#line 2146 "cplus.met"
#line 2146 "cplus.met"
            {
#line 2146 "cplus.met"
                PPTREE _ptTree0=0;
#line 2146 "cplus.met"
                if ( (_ptTree0=NQUICK_CALL(_Tak(long_type)(error_free), 95, cplus))== (PPTREE) -1 ) {
#line 2146 "cplus.met"
                    MulFreeTree(1,_ptTree0);
                    PROG_EXIT(short_long_int_char_exit,"short_long_int_char")
#line 2146 "cplus.met"
                }
#line 2146 "cplus.met"
                _retValue =_ptTree0;
#line 2146 "cplus.met"
                goto short_long_int_char_ret;
#line 2146 "cplus.met"
            }
#line 2146 "cplus.met"
            break;
#line 2146 "cplus.met"
#line 2147 "cplus.met"
        case SHORT : 
#line 2147 "cplus.met"
            tokenAhead = 0 ;
#line 2147 "cplus.met"
            CommTerm();
#line 2147 "cplus.met"
#line 2148 "cplus.met"
            if (inside_long){
#line 2148 "cplus.met"
#line 2149 "cplus.met"
                
#line 2149 "cplus.met"
                LEX_EXIT ("",0);
#line 2149 "cplus.met"
                goto short_long_int_char_exit;
#line 2149 "cplus.met"
#line 2149 "cplus.met"
            } else {
#line 2149 "cplus.met"
#line 2151 "cplus.met"
#line 2152 "cplus.met"
                (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 2152 "cplus.met"
                switch( lexEl.Value) {
#line 2152 "cplus.met"
#line 2153 "cplus.met"
                    case INT : 
#line 2153 "cplus.met"
                        tokenAhead = 0 ;
#line 2153 "cplus.met"
                        CommTerm();
#line 2153 "cplus.met"
#line 2153 "cplus.met"
                        {
#line 2153 "cplus.met"
                            PPTREE _ptTree0=0;
#line 2153 "cplus.met"
                            {
#line 2153 "cplus.met"
                                PPTREE _ptTree1=0,_ptRes1=0;
#line 2153 "cplus.met"
                                _ptRes1= MakeTree(TSHORT, 1);
#line 2153 "cplus.met"
                                {
#line 2153 "cplus.met"
                                    PPTREE _ptRes2=0;
#line 2153 "cplus.met"
                                    _ptRes2= MakeTree(TINT, 0);
#line 2153 "cplus.met"
                                    _ptTree1=_ptRes2;
#line 2153 "cplus.met"
                                }
#line 2153 "cplus.met"
                                ReplaceTree(_ptRes1, 1, _ptTree1);
#line 2153 "cplus.met"
                                _ptTree0=_ptRes1;
#line 2153 "cplus.met"
                            }
#line 2153 "cplus.met"
                            _retValue =_ptTree0;
#line 2153 "cplus.met"
                            goto short_long_int_char_ret;
#line 2153 "cplus.met"
                        }
#line 2153 "cplus.met"
                        break;
#line 2153 "cplus.met"
#line 2154 "cplus.met"
                    default : 
#line 2154 "cplus.met"
#line 2154 "cplus.met"
                        {
#line 2154 "cplus.met"
                            PPTREE _ptTree0=0;
#line 2154 "cplus.met"
                            {
#line 2154 "cplus.met"
                                PPTREE _ptRes1=0;
#line 2154 "cplus.met"
                                _ptRes1= MakeTree(TSHORT, 1);
#line 2154 "cplus.met"
                                _ptTree0=_ptRes1;
#line 2154 "cplus.met"
                            }
#line 2154 "cplus.met"
                            _retValue =_ptTree0;
#line 2154 "cplus.met"
                            goto short_long_int_char_ret;
#line 2154 "cplus.met"
                        }
#line 2154 "cplus.met"
                        break;
#line 2154 "cplus.met"
                }
#line 2154 "cplus.met"
#line 2154 "cplus.met"
            }
#line 2154 "cplus.met"
            break;
#line 2154 "cplus.met"
#line 2157 "cplus.met"
        case SIGNED : 
#line 2157 "cplus.met"
#line 2157 "cplus.met"
            {
#line 2157 "cplus.met"
                PPTREE _ptTree0=0;
#line 2157 "cplus.met"
                if ( (_ptTree0=NQUICK_CALL(_Tak(signed_type)(error_free), 134, cplus))== (PPTREE) -1 ) {
#line 2157 "cplus.met"
                    MulFreeTree(1,_ptTree0);
                    PROG_EXIT(short_long_int_char_exit,"short_long_int_char")
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
        case UNSIGNED : 
#line 2158 "cplus.met"
#line 2158 "cplus.met"
            {
#line 2158 "cplus.met"
                PPTREE _ptTree0=0;
#line 2158 "cplus.met"
                if ( (_ptTree0=NQUICK_CALL(_Tak(unsigned_type)(error_free), 157, cplus))== (PPTREE) -1 ) {
#line 2158 "cplus.met"
                    MulFreeTree(1,_ptTree0);
                    PROG_EXIT(short_long_int_char_exit,"short_long_int_char")
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
        default :
#line 2158 "cplus.met"
            CASE_EXIT(short_long_int_char_exit,"either int or char or long or short or signed or unsigned")
#line 2158 "cplus.met"
            break;
#line 2158 "cplus.met"
    }
#line 2158 "cplus.met"
#line 2158 "cplus.met"
#line 2159 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2159 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 2159 "cplus.met"
return((PPTREE) 0);
#line 2159 "cplus.met"

#line 2159 "cplus.met"
short_long_int_char_exit :
#line 2159 "cplus.met"

#line 2159 "cplus.met"
    _Debug = TRACE_RULE("short_long_int_char",TRACE_EXIT,(PPTREE)0);
#line 2159 "cplus.met"
    _funcLevel--;
#line 2159 "cplus.met"
    return((PPTREE) -1) ;
#line 2159 "cplus.met"

#line 2159 "cplus.met"
short_long_int_char_ret :
#line 2159 "cplus.met"
    
#line 2159 "cplus.met"
    _Debug = TRACE_RULE("short_long_int_char",TRACE_RETURN,_retValue);
#line 2159 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2159 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 2159 "cplus.met"
    return _retValue ;
#line 2159 "cplus.met"
}
#line 2159 "cplus.met"

#line 2159 "cplus.met"
#line 2162 "cplus.met"
PPTREE cplus::signed_type ( int error_free)
#line 2162 "cplus.met"
{
#line 2162 "cplus.met"
    int  _oldinside_signed = inside_signed;
#line 2162 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 2162 "cplus.met"
    int _value,_nbPre = 0 ;
#line 2162 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 2162 "cplus.met"
    int _Debug = TRACE_RULE("signed_type",TRACE_ENTER,(PPTREE)0);
#line 2162 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 2162 "cplus.met"
#line 2162 "cplus.met"
    PPTREE retTree = (PPTREE) 0;
#line 2162 "cplus.met"
#line 2164 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 2164 "cplus.met"
    if (  !SEE_TOKEN( SIGNED,"signed") || !(CommTerm(),1)) {
#line 2164 "cplus.met"
        MulFreeTree(1,retTree);
        TOKEN_EXIT(signed_type_exit,"signed")
#line 2164 "cplus.met"
    } else {
#line 2164 "cplus.met"
        tokenAhead = 0 ;
#line 2164 "cplus.met"
    }
#line 2164 "cplus.met"
#line 2165 "cplus.met"
    {
#line 2165 "cplus.met"
        inside_signed = 1 ;
#line 2165 "cplus.met"
#line 2166 "cplus.met"
#line 2167 "cplus.met"
        if (NPUSH_CALL_AFF_VERIF(retTree = ,_Tak(short_long_int_char), 133, cplus)){
#line 2167 "cplus.met"
#line 2168 "cplus.met"
            {
#line 2168 "cplus.met"
                PPTREE _ptTree0=0;
#line 2168 "cplus.met"
                {
#line 2168 "cplus.met"
                    PPTREE _ptRes1=0;
#line 2168 "cplus.met"
                    _ptRes1= MakeTree(TSIGNED, 1);
#line 2168 "cplus.met"
                    ReplaceTree(_ptRes1, 1, retTree );
#line 2168 "cplus.met"
                    _ptTree0=_ptRes1;
#line 2168 "cplus.met"
                }
#line 2168 "cplus.met"
                _retValue =_ptTree0;
#line 2168 "cplus.met"
                goto signed_type_ret;
#line 2168 "cplus.met"
            }
#line 2168 "cplus.met"
        } else {
#line 2168 "cplus.met"
#line 2170 "cplus.met"
            {
#line 2170 "cplus.met"
                PPTREE _ptTree0=0;
#line 2170 "cplus.met"
                {
#line 2170 "cplus.met"
                    PPTREE _ptRes1=0;
#line 2170 "cplus.met"
                    _ptRes1= MakeTree(TSIGNED, 1);
#line 2170 "cplus.met"
                    _ptTree0=_ptRes1;
#line 2170 "cplus.met"
                }
#line 2170 "cplus.met"
                _retValue =_ptTree0;
#line 2170 "cplus.met"
                goto signed_type_ret;
#line 2170 "cplus.met"
            }
#line 2170 "cplus.met"
        }
#line 2170 "cplus.met"
#line 2170 "cplus.met"
        inside_signed =  _oldinside_signed;
#line 2170 "cplus.met"
    }
#line 2170 "cplus.met"
#line 2170 "cplus.met"
#line 2171 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2171 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 2171 "cplus.met"
inside_signed =  _oldinside_signed;
#line 2171 "cplus.met"
return((PPTREE) 0);
#line 2171 "cplus.met"

#line 2171 "cplus.met"
signed_type_exit :
#line 2171 "cplus.met"

#line 2171 "cplus.met"
    _Debug = TRACE_RULE("signed_type",TRACE_EXIT,(PPTREE)0);
#line 2171 "cplus.met"
    _funcLevel--;
#line 2171 "cplus.met"
    inside_signed =  _oldinside_signed;
#line 2171 "cplus.met"
    return((PPTREE) -1) ;
#line 2171 "cplus.met"

#line 2171 "cplus.met"
signed_type_ret :
#line 2171 "cplus.met"
    
#line 2171 "cplus.met"
    _Debug = TRACE_RULE("signed_type",TRACE_RETURN,_retValue);
#line 2171 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2171 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 2171 "cplus.met"
    inside_signed =  _oldinside_signed;
#line 2171 "cplus.met"
    return _retValue ;
#line 2171 "cplus.met"
}
#line 2171 "cplus.met"

#line 2171 "cplus.met"
#line 1892 "cplus.met"
PPTREE cplus::simple_ident ( int error_free)
#line 1892 "cplus.met"
{
#line 1892 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 1892 "cplus.met"
    int _value,_nbPre = 0 ;
#line 1892 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 1892 "cplus.met"
    int _Debug = TRACE_RULE("simple_ident",TRACE_ENTER,(PPTREE)0);
#line 1892 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 1892 "cplus.met"
#line 1893 "cplus.met"
    {
#line 1893 "cplus.met"
        PPTREE _ptTree0=0;
#line 1893 "cplus.met"
        {
#line 1893 "cplus.met"
            PPTREE _ptTree1=0,_ptRes1=0;
#line 1893 "cplus.met"
            _ptRes1= MakeTree(IDENT, 1);
#line 1893 "cplus.met"
            (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 1893 "cplus.met"
            if ( ! TERM_OR_META(IDENT,"IDENT") || !(BUILD_TERM_META(_ptTree1))) {
#line 1893 "cplus.met"
                MulFreeTree(3,_ptRes1,_ptTree1,_ptTree0);
                TOKEN_EXIT(simple_ident_exit,"IDENT")
#line 1893 "cplus.met"
            } else {
#line 1893 "cplus.met"
                tokenAhead = 0 ;
#line 1893 "cplus.met"
            }
#line 1893 "cplus.met"
            ReplaceTree(_ptRes1, 1, _ptTree1);
#line 1893 "cplus.met"
            _ptTree0=_ptRes1;
#line 1893 "cplus.met"
        }
#line 1893 "cplus.met"
        _retValue =_ptTree0;
#line 1893 "cplus.met"
        goto simple_ident_ret;
#line 1893 "cplus.met"
    }
#line 1893 "cplus.met"
#line 1893 "cplus.met"
#line 1893 "cplus.met"

#line 1894 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1894 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 1894 "cplus.met"
return((PPTREE) 0);
#line 1894 "cplus.met"

#line 1894 "cplus.met"
simple_ident_exit :
#line 1894 "cplus.met"

#line 1894 "cplus.met"
    _Debug = TRACE_RULE("simple_ident",TRACE_EXIT,(PPTREE)0);
#line 1894 "cplus.met"
    _funcLevel--;
#line 1894 "cplus.met"
    return((PPTREE) -1) ;
#line 1894 "cplus.met"

#line 1894 "cplus.met"
simple_ident_ret :
#line 1894 "cplus.met"
    
#line 1894 "cplus.met"
    _Debug = TRACE_RULE("simple_ident",TRACE_RETURN,_retValue);
#line 1894 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1894 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 1894 "cplus.met"
    return _retValue ;
#line 1894 "cplus.met"
}
#line 1894 "cplus.met"

#line 1894 "cplus.met"
#line 2120 "cplus.met"
PPTREE cplus::simple_type ( int error_free)
#line 2120 "cplus.met"
{
#line 2120 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 2120 "cplus.met"
    int _value,_nbPre = 0 ;
#line 2120 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 2120 "cplus.met"
    int _Debug = TRACE_RULE("simple_type",TRACE_ENTER,(PPTREE)0);
#line 2120 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 2120 "cplus.met"
#line 2120 "cplus.met"
    PPTREE valTree = (PPTREE) 0;
#line 2120 "cplus.met"
#line 2122 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 2122 "cplus.met"
    switch( lexEl.Value) {
#line 2122 "cplus.met"
#line 2123 "cplus.met"
        case TYPENAME : 
#line 2123 "cplus.met"
            tokenAhead = 0 ;
#line 2123 "cplus.met"
            CommTerm();
#line 2123 "cplus.met"
#line 2123 "cplus.met"
            {
#line 2123 "cplus.met"
                PPTREE _ptTree0=0;
#line 2123 "cplus.met"
                {
#line 2123 "cplus.met"
                    PPTREE _ptTree1=0,_ptRes1=0;
#line 2123 "cplus.met"
                    _ptRes1= MakeTree(TYPENAME, 1);
#line 2123 "cplus.met"
                    {
#line 2123 "cplus.met"
                        PPTREE _ptTree2=0,_ptRes2=0;
#line 2123 "cplus.met"
                        _ptRes2= MakeTree(TIDENT, 1);
#line 2123 "cplus.met"
                        if ( (_ptTree2=NQUICK_CALL(_Tak(complete_class_name)(error_free), 31, cplus))== (PPTREE) -1 ) {
#line 2123 "cplus.met"
                            MulFreeTree(6,_ptRes2,_ptTree2,_ptRes1,_ptTree1,_ptTree0,valTree);
                            PROG_EXIT(simple_type_exit,"simple_type")
#line 2123 "cplus.met"
                        }
#line 2123 "cplus.met"
                        ReplaceTree(_ptRes2, 1, _ptTree2);
#line 2123 "cplus.met"
                        _ptTree1=_ptRes2;
#line 2123 "cplus.met"
                    }
#line 2123 "cplus.met"
                    ReplaceTree(_ptRes1, 1, _ptTree1);
#line 2123 "cplus.met"
                    _ptTree0=_ptRes1;
#line 2123 "cplus.met"
                }
#line 2123 "cplus.met"
                _retValue =_ptTree0;
#line 2123 "cplus.met"
                goto simple_type_ret;
#line 2123 "cplus.met"
            }
#line 2123 "cplus.met"
            break;
#line 2123 "cplus.met"
#line 2124 "cplus.met"
        case CLASS : 
#line 2124 "cplus.met"
            tokenAhead = 0 ;
#line 2124 "cplus.met"
            CommTerm();
#line 2124 "cplus.met"
#line 2124 "cplus.met"
            {
#line 2124 "cplus.met"
                PPTREE _ptTree0=0;
#line 2124 "cplus.met"
                {
#line 2124 "cplus.met"
                    PPTREE _ptTree1=0,_ptRes1=0;
#line 2124 "cplus.met"
                    _ptRes1= MakeTree(CLASSNAME, 1);
#line 2124 "cplus.met"
                    {
#line 2124 "cplus.met"
                        PPTREE _ptTree2=0,_ptRes2=0;
#line 2124 "cplus.met"
                        _ptRes2= MakeTree(TIDENT, 1);
#line 2124 "cplus.met"
                        if ( (_ptTree2=NQUICK_CALL(_Tak(complete_class_name)(error_free), 31, cplus))== (PPTREE) -1 ) {
#line 2124 "cplus.met"
                            MulFreeTree(6,_ptRes2,_ptTree2,_ptRes1,_ptTree1,_ptTree0,valTree);
                            PROG_EXIT(simple_type_exit,"simple_type")
#line 2124 "cplus.met"
                        }
#line 2124 "cplus.met"
                        ReplaceTree(_ptRes2, 1, _ptTree2);
#line 2124 "cplus.met"
                        _ptTree1=_ptRes2;
#line 2124 "cplus.met"
                    }
#line 2124 "cplus.met"
                    ReplaceTree(_ptRes1, 1, _ptTree1);
#line 2124 "cplus.met"
                    _ptTree0=_ptRes1;
#line 2124 "cplus.met"
                }
#line 2124 "cplus.met"
                _retValue =_ptTree0;
#line 2124 "cplus.met"
                goto simple_type_ret;
#line 2124 "cplus.met"
            }
#line 2124 "cplus.met"
            break;
#line 2124 "cplus.met"
#line 2125 "cplus.met"
        case DECLTYPE : 
#line 2125 "cplus.met"
            tokenAhead = 0 ;
#line 2125 "cplus.met"
            CommTerm();
#line 2125 "cplus.met"
#line 2126 "cplus.met"
#line 2127 "cplus.met"
            (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 2127 "cplus.met"
            if (  !SEE_TOKEN( POUV,"(") || !(CommTerm(),1)) {
#line 2127 "cplus.met"
                MulFreeTree(1,valTree);
                TOKEN_EXIT(simple_type_exit,"(")
#line 2127 "cplus.met"
            } else {
#line 2127 "cplus.met"
                tokenAhead = 0 ;
#line 2127 "cplus.met"
            }
#line 2127 "cplus.met"
#line 2128 "cplus.met"
            {
#line 2128 "cplus.met"
                PPTREE _ptTree0=0,_ptRes0=0;
#line 2128 "cplus.met"
                _ptRes0= MakeTree(DECL_TYPE, 1);
#line 2128 "cplus.met"
                if ( (_ptTree0=NQUICK_CALL(_Tak(postfix_expression)(error_free), 113, cplus))== (PPTREE) -1 ) {
#line 2128 "cplus.met"
                    MulFreeTree(3,_ptRes0,_ptTree0,valTree);
                    PROG_EXIT(simple_type_exit,"simple_type")
#line 2128 "cplus.met"
                }
#line 2128 "cplus.met"
                ReplaceTree(_ptRes0, 1, _ptTree0);
#line 2128 "cplus.met"
                valTree=_ptRes0;
#line 2128 "cplus.met"
            }
#line 2128 "cplus.met"
#line 2129 "cplus.met"
            (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 2129 "cplus.met"
            if (  !SEE_TOKEN( PFER,")") || !(CommTerm(),1)) {
#line 2129 "cplus.met"
                MulFreeTree(1,valTree);
                TOKEN_EXIT(simple_type_exit,")")
#line 2129 "cplus.met"
            } else {
#line 2129 "cplus.met"
                tokenAhead = 0 ;
#line 2129 "cplus.met"
            }
#line 2129 "cplus.met"
#line 2130 "cplus.met"
            {
#line 2130 "cplus.met"
                _retValue = valTree ;
#line 2130 "cplus.met"
                goto simple_type_ret;
#line 2130 "cplus.met"
                
#line 2130 "cplus.met"
            }
#line 2130 "cplus.met"
#line 2130 "cplus.met"
            break;
#line 2130 "cplus.met"
#line 2132 "cplus.met"
        case AUTO : 
#line 2132 "cplus.met"
            tokenAhead = 0 ;
#line 2132 "cplus.met"
            CommTerm();
#line 2132 "cplus.met"
#line 2132 "cplus.met"
            {
#line 2132 "cplus.met"
                PPTREE _ptTree0=0;
#line 2132 "cplus.met"
                {
#line 2132 "cplus.met"
                    PPTREE _ptRes1=0;
#line 2132 "cplus.met"
                    _ptRes1= MakeTree(AUTO, 0);
#line 2132 "cplus.met"
                    _ptTree0=_ptRes1;
#line 2132 "cplus.met"
                }
#line 2132 "cplus.met"
                _retValue =_ptTree0;
#line 2132 "cplus.met"
                goto simple_type_ret;
#line 2132 "cplus.met"
            }
#line 2132 "cplus.met"
            break;
#line 2132 "cplus.met"
#line 2133 "cplus.met"
        case DOUBLE : 
#line 2133 "cplus.met"
            tokenAhead = 0 ;
#line 2133 "cplus.met"
            CommTerm();
#line 2133 "cplus.met"
#line 2133 "cplus.met"
            {
#line 2133 "cplus.met"
                PPTREE _ptTree0=0;
#line 2133 "cplus.met"
                {
#line 2133 "cplus.met"
                    PPTREE _ptRes1=0;
#line 2133 "cplus.met"
                    _ptRes1= MakeTree(TDOUBLE, 0);
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
            break;
#line 2133 "cplus.met"
#line 2134 "cplus.met"
        case FLOAT : 
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
                    PPTREE _ptRes1=0;
#line 2134 "cplus.met"
                    _ptRes1= MakeTree(TFLOAT, 0);
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
        case VOID : 
#line 2135 "cplus.met"
            tokenAhead = 0 ;
#line 2135 "cplus.met"
            CommTerm();
#line 2135 "cplus.met"
#line 2135 "cplus.met"
            {
#line 2135 "cplus.met"
                PPTREE _ptTree0=0;
#line 2135 "cplus.met"
                {
#line 2135 "cplus.met"
                    PPTREE _ptRes1=0;
#line 2135 "cplus.met"
                    _ptRes1= MakeTree(VOID, 0);
#line 2135 "cplus.met"
                    _ptTree0=_ptRes1;
#line 2135 "cplus.met"
                }
#line 2135 "cplus.met"
                _retValue =_ptTree0;
#line 2135 "cplus.met"
                goto simple_type_ret;
#line 2135 "cplus.met"
            }
#line 2135 "cplus.met"
            break;
#line 2135 "cplus.met"
#line 2136 "cplus.met"
        case DPOIDPOI : 
#line 2136 "cplus.met"
#line 2136 "cplus.met"
            {
#line 2136 "cplus.met"
                PPTREE _ptTree0=0;
#line 2136 "cplus.met"
                {
#line 2136 "cplus.met"
                    PPTREE _ptTree1=0,_ptRes1=0;
#line 2136 "cplus.met"
                    _ptRes1= MakeTree(TIDENT, 1);
#line 2136 "cplus.met"
                    if ( (_ptTree1=NQUICK_CALL(_Tak(complete_class_name)(error_free), 31, cplus))== (PPTREE) -1 ) {
#line 2136 "cplus.met"
                        MulFreeTree(4,_ptRes1,_ptTree1,_ptTree0,valTree);
                        PROG_EXIT(simple_type_exit,"simple_type")
#line 2136 "cplus.met"
                    }
#line 2136 "cplus.met"
                    ReplaceTree(_ptRes1, 1, _ptTree1);
#line 2136 "cplus.met"
                    _ptTree0=_ptRes1;
#line 2136 "cplus.met"
                }
#line 2136 "cplus.met"
                _retValue =_ptTree0;
#line 2136 "cplus.met"
                goto simple_type_ret;
#line 2136 "cplus.met"
            }
#line 2136 "cplus.met"
            break;
#line 2136 "cplus.met"
#line 2137 "cplus.met"
        case META : 
#line 2137 "cplus.met"
        case IDENT : 
#line 2137 "cplus.met"
#line 2137 "cplus.met"
            {
#line 2137 "cplus.met"
                PPTREE _ptTree0=0;
#line 2137 "cplus.met"
                {
#line 2137 "cplus.met"
                    PPTREE _ptTree1=0,_ptRes1=0;
#line 2137 "cplus.met"
                    _ptRes1= MakeTree(TIDENT, 1);
#line 2137 "cplus.met"
                    if ( (_ptTree1=NQUICK_CALL(_Tak(complete_class_name)(error_free), 31, cplus))== (PPTREE) -1 ) {
#line 2137 "cplus.met"
                        MulFreeTree(4,_ptRes1,_ptTree1,_ptTree0,valTree);
                        PROG_EXIT(simple_type_exit,"simple_type")
#line 2137 "cplus.met"
                    }
#line 2137 "cplus.met"
                    ReplaceTree(_ptRes1, 1, _ptTree1);
#line 2137 "cplus.met"
                    _ptTree0=_ptRes1;
#line 2137 "cplus.met"
                }
#line 2137 "cplus.met"
                _retValue =_ptTree0;
#line 2137 "cplus.met"
                goto simple_type_ret;
#line 2137 "cplus.met"
            }
#line 2137 "cplus.met"
            break;
#line 2137 "cplus.met"
#line 2138 "cplus.met"
        default : 
#line 2138 "cplus.met"
#line 2138 "cplus.met"
            {
#line 2138 "cplus.met"
                PPTREE _ptTree0=0;
#line 2138 "cplus.met"
                if ( (_ptTree0=NQUICK_CALL(_Tak(short_long_int_char)(error_free), 133, cplus))== (PPTREE) -1 ) {
#line 2138 "cplus.met"
                    MulFreeTree(2,_ptTree0,valTree);
                    PROG_EXIT(simple_type_exit,"simple_type")
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
    }
#line 2138 "cplus.met"
#line 2138 "cplus.met"
#line 2139 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2139 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 2139 "cplus.met"
return((PPTREE) 0);
#line 2139 "cplus.met"

#line 2139 "cplus.met"
simple_type_exit :
#line 2139 "cplus.met"

#line 2139 "cplus.met"
    _Debug = TRACE_RULE("simple_type",TRACE_EXIT,(PPTREE)0);
#line 2139 "cplus.met"
    _funcLevel--;
#line 2139 "cplus.met"
    return((PPTREE) -1) ;
#line 2139 "cplus.met"

#line 2139 "cplus.met"
simple_type_ret :
#line 2139 "cplus.met"
    
#line 2139 "cplus.met"
    _Debug = TRACE_RULE("simple_type",TRACE_RETURN,_retValue);
#line 2139 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2139 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 2139 "cplus.met"
    return _retValue ;
#line 2139 "cplus.met"
}
#line 2139 "cplus.met"

#line 2139 "cplus.met"
#line 3022 "cplus.met"
PPTREE cplus::simple_type_name ( int error_free)
#line 3022 "cplus.met"
{
#line 3022 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 3022 "cplus.met"
    int _value,_nbPre = 0 ;
#line 3022 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 3022 "cplus.met"
    int _Debug = TRACE_RULE("simple_type_name",TRACE_ENTER,(PPTREE)0);
#line 3022 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 3022 "cplus.met"
#line 3023 "cplus.met"
    if (! ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN( IDENT,"IDENT"))){
#line 3023 "cplus.met"
#line 3024 "cplus.met"
        {
#line 3024 "cplus.met"
            PPTREE _ptTree0=0;
#line 3024 "cplus.met"
            if ( (_ptTree0=NQUICK_CALL(_Tak(simple_type)(error_free), 136, cplus))== (PPTREE) -1 ) {
#line 3024 "cplus.met"
                MulFreeTree(1,_ptTree0);
                PROG_EXIT(simple_type_name_exit,"simple_type_name")
#line 3024 "cplus.met"
            }
#line 3024 "cplus.met"
            _retValue =_ptTree0;
#line 3024 "cplus.met"
            goto simple_type_name_ret;
#line 3024 "cplus.met"
        }
#line 3024 "cplus.met"
    } else {
#line 3024 "cplus.met"
#line 3026 "cplus.met"
        
#line 3026 "cplus.met"
        LEX_EXIT ("",0);
#line 3026 "cplus.met"
        goto simple_type_name_exit;
#line 3026 "cplus.met"
    }
#line 3026 "cplus.met"
#line 3026 "cplus.met"
#line 3026 "cplus.met"

#line 3027 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 3027 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 3027 "cplus.met"
return((PPTREE) 0);
#line 3027 "cplus.met"

#line 3027 "cplus.met"
simple_type_name_exit :
#line 3027 "cplus.met"

#line 3027 "cplus.met"
    _Debug = TRACE_RULE("simple_type_name",TRACE_EXIT,(PPTREE)0);
#line 3027 "cplus.met"
    _funcLevel--;
#line 3027 "cplus.met"
    return((PPTREE) -1) ;
#line 3027 "cplus.met"

#line 3027 "cplus.met"
simple_type_name_ret :
#line 3027 "cplus.met"
    
#line 3027 "cplus.met"
    _Debug = TRACE_RULE("simple_type_name",TRACE_RETURN,_retValue);
#line 3027 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 3027 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 3027 "cplus.met"
    return _retValue ;
#line 3027 "cplus.met"
}
#line 3027 "cplus.met"

#line 3027 "cplus.met"
#line 2888 "cplus.met"
PPTREE cplus::sizeof_type ( int error_free)
#line 2888 "cplus.met"
{
#line 2888 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 2888 "cplus.met"
    int _value,_nbPre = 0 ;
#line 2888 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 2888 "cplus.met"
    int _Debug = TRACE_RULE("sizeof_type",TRACE_ENTER,(PPTREE)0);
#line 2888 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 2888 "cplus.met"
#line 2888 "cplus.met"
    PPTREE expTree = (PPTREE) 0;
#line 2888 "cplus.met"
#line 2890 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 2890 "cplus.met"
    if (  !SEE_TOKEN( POUV,"(") || !(CommTerm(),1)) {
#line 2890 "cplus.met"
        MulFreeTree(1,expTree);
        TOKEN_EXIT(sizeof_type_exit,"(")
#line 2890 "cplus.met"
    } else {
#line 2890 "cplus.met"
        tokenAhead = 0 ;
#line 2890 "cplus.met"
    }
#line 2890 "cplus.met"
#line 2891 "cplus.met"
    if ( (expTree=NQUICK_CALL(_Tak(type_name)(error_free), 152, cplus))== (PPTREE) -1 ) {
#line 2891 "cplus.met"
        MulFreeTree(1,expTree);
        PROG_EXIT(sizeof_type_exit,"sizeof_type")
#line 2891 "cplus.met"
    }
#line 2891 "cplus.met"
#line 2892 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 2892 "cplus.met"
    if (  !SEE_TOKEN( PFER,")") || !(CommTerm(),1)) {
#line 2892 "cplus.met"
        MulFreeTree(1,expTree);
        TOKEN_EXIT(sizeof_type_exit,")")
#line 2892 "cplus.met"
    } else {
#line 2892 "cplus.met"
        tokenAhead = 0 ;
#line 2892 "cplus.met"
    }
#line 2892 "cplus.met"
#line 2893 "cplus.met"
    {
#line 2893 "cplus.met"
        _retValue = expTree ;
#line 2893 "cplus.met"
        goto sizeof_type_ret;
#line 2893 "cplus.met"
        
#line 2893 "cplus.met"
    }
#line 2893 "cplus.met"
#line 2893 "cplus.met"
#line 2893 "cplus.met"

#line 2894 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2894 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 2894 "cplus.met"
return((PPTREE) 0);
#line 2894 "cplus.met"

#line 2894 "cplus.met"
sizeof_type_exit :
#line 2894 "cplus.met"

#line 2894 "cplus.met"
    _Debug = TRACE_RULE("sizeof_type",TRACE_EXIT,(PPTREE)0);
#line 2894 "cplus.met"
    _funcLevel--;
#line 2894 "cplus.met"
    return((PPTREE) -1) ;
#line 2894 "cplus.met"

#line 2894 "cplus.met"
sizeof_type_ret :
#line 2894 "cplus.met"
    
#line 2894 "cplus.met"
    _Debug = TRACE_RULE("sizeof_type",TRACE_RETURN,_retValue);
#line 2894 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2894 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 2894 "cplus.met"
    return _retValue ;
#line 2894 "cplus.met"
}
#line 2894 "cplus.met"

#line 2894 "cplus.met"
#line 983 "cplus.met"
PPTREE cplus::stat_all ( int error_free)
#line 983 "cplus.met"
{
#line 983 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 983 "cplus.met"
    int _value,_nbPre = 0 ;
#line 983 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 983 "cplus.met"
    int _Debug = TRACE_RULE("stat_all",TRACE_ENTER,(PPTREE)0);
#line 983 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 983 "cplus.met"
#line 983 "cplus.met"
    PPTREE stat = (PPTREE) 0;
#line 983 "cplus.met"
#line 985 "cplus.met"
    if (((((NPUSH_CALL_AFF_VERIF(stat = ,_Tak(statement), 144, cplus)) || 
#line 985 "cplus.met"
          (NPUSH_CALL_AFF_VERIF(stat = ,_Tak(data_declaration), 44, cplus))) || 
#line 985 "cplus.met"
         (NPUSH_CALL_AFF_VERIF(stat = ,_Tak(stat_dir), 140, cplus))) || 
#line 985 "cplus.met"
        (NPUSH_CALL_AFF_VERIF(stat = ,_Tak(exception), 62, cplus))) || 
#line 985 "cplus.met"
       (NPUSH_CALL_AFF_VERIF(stat = ,_Tak(ext_data_declaration), 75, cplus))){
#line 985 "cplus.met"
#line 986 "cplus.met"
        {
#line 986 "cplus.met"
            _retValue = stat ;
#line 986 "cplus.met"
            goto stat_all_ret;
#line 986 "cplus.met"
            
#line 986 "cplus.met"
        }
#line 986 "cplus.met"
    } else {
#line 986 "cplus.met"
#line 988 "cplus.met"
        {
#line 988 "cplus.met"
            PPTREE _ptTree0=0;
#line 988 "cplus.met"
            if ( (_ptTree0=NQUICK_CALL(_Tak(statement)(error_free), 144, cplus))== (PPTREE) -1 ) {
#line 988 "cplus.met"
                MulFreeTree(2,_ptTree0,stat);
                PROG_EXIT(stat_all_exit,"stat_all")
#line 988 "cplus.met"
            }
#line 988 "cplus.met"
            _retValue =_ptTree0;
#line 988 "cplus.met"
            goto stat_all_ret;
#line 988 "cplus.met"
        }
#line 988 "cplus.met"
    }
#line 988 "cplus.met"
#line 988 "cplus.met"
#line 988 "cplus.met"

#line 989 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 989 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 989 "cplus.met"
return((PPTREE) 0);
#line 989 "cplus.met"

#line 989 "cplus.met"
stat_all_exit :
#line 989 "cplus.met"

#line 989 "cplus.met"
    _Debug = TRACE_RULE("stat_all",TRACE_EXIT,(PPTREE)0);
#line 989 "cplus.met"
    _funcLevel--;
#line 989 "cplus.met"
    return((PPTREE) -1) ;
#line 989 "cplus.met"

#line 989 "cplus.met"
stat_all_ret :
#line 989 "cplus.met"
    
#line 989 "cplus.met"
    _Debug = TRACE_RULE("stat_all",TRACE_RETURN,_retValue);
#line 989 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 989 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 989 "cplus.met"
    return _retValue ;
#line 989 "cplus.met"
}
#line 989 "cplus.met"

#line 989 "cplus.met"
#line 1255 "cplus.met"
PPTREE cplus::stat_dir ( int error_free)
#line 1255 "cplus.met"
{
#line 1255 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 1255 "cplus.met"
    int _value,_nbPre = 0 ;
#line 1255 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 1255 "cplus.met"
    int _Debug = TRACE_RULE("stat_dir",TRACE_ENTER,(PPTREE)0);
#line 1255 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 1255 "cplus.met"
#line 1255 "cplus.met"
    PPTREE retTree = (PPTREE) 0;
#line 1255 "cplus.met"
#line 1257 "cplus.met"
    if (NPUSH_CALL_AFF_VERIF(retTree = ,_Tak(directive), 56, cplus)){
#line 1257 "cplus.met"
#line 1258 "cplus.met"
        {
#line 1258 "cplus.met"
            _retValue = retTree ;
#line 1258 "cplus.met"
            goto stat_dir_ret;
#line 1258 "cplus.met"
            
#line 1258 "cplus.met"
        }
#line 1258 "cplus.met"
    }
#line 1258 "cplus.met"
#line 1259 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 1259 "cplus.met"
    switch( lexEl.Value) {
#line 1259 "cplus.met"
#line 1260 "cplus.met"
        case META : 
#line 1260 "cplus.met"
        case IF_DIR : 
#line 1260 "cplus.met"
            tokenAhead = 0 ;
#line 1260 "cplus.met"
            CommTerm();
#line 1260 "cplus.met"
#line 1260 "cplus.met"
            {
#line 1260 "cplus.met"
                PPTREE _ptTree0=0;
#line 1260 "cplus.met"
                if ( (_ptTree0=NQUICK_CALL(_Tak(stat_if_dir)(error_free), 142, cplus))== (PPTREE) -1 ) {
#line 1260 "cplus.met"
                    MulFreeTree(2,_ptTree0,retTree);
                    PROG_EXIT(stat_dir_exit,"stat_dir")
#line 1260 "cplus.met"
                }
#line 1260 "cplus.met"
                _retValue =_ptTree0;
#line 1260 "cplus.met"
                goto stat_dir_ret;
#line 1260 "cplus.met"
            }
#line 1260 "cplus.met"
            break;
#line 1260 "cplus.met"
#line 1261 "cplus.met"
        case IFDEF_DIR : 
#line 1261 "cplus.met"
#line 1261 "cplus.met"
            {
#line 1261 "cplus.met"
                PPTREE _ptTree0=0;
#line 1261 "cplus.met"
                if ( (_ptTree0=NQUICK_CALL(_Tak(stat_ifdef_dir)(error_free), 143, cplus))== (PPTREE) -1 ) {
#line 1261 "cplus.met"
                    MulFreeTree(2,_ptTree0,retTree);
                    PROG_EXIT(stat_dir_exit,"stat_dir")
#line 1261 "cplus.met"
                }
#line 1261 "cplus.met"
                _retValue =_ptTree0;
#line 1261 "cplus.met"
                goto stat_dir_ret;
#line 1261 "cplus.met"
            }
#line 1261 "cplus.met"
            break;
#line 1261 "cplus.met"
#line 1262 "cplus.met"
        case IFNDEF_DIR : 
#line 1262 "cplus.met"
#line 1262 "cplus.met"
            {
#line 1262 "cplus.met"
                PPTREE _ptTree0=0;
#line 1262 "cplus.met"
                if ( (_ptTree0=NQUICK_CALL(_Tak(stat_ifdef_dir)(error_free), 143, cplus))== (PPTREE) -1 ) {
#line 1262 "cplus.met"
                    MulFreeTree(2,_ptTree0,retTree);
                    PROG_EXIT(stat_dir_exit,"stat_dir")
#line 1262 "cplus.met"
                }
#line 1262 "cplus.met"
                _retValue =_ptTree0;
#line 1262 "cplus.met"
                goto stat_dir_ret;
#line 1262 "cplus.met"
            }
#line 1262 "cplus.met"
            break;
#line 1262 "cplus.met"
        default :
#line 1262 "cplus.met"
            MulFreeTree(1,retTree);
            CASE_EXIT(stat_dir_exit,"either IF_DIR or IFDEF_DIR or IFNDEF_DIR")
#line 1262 "cplus.met"
            break;
#line 1262 "cplus.met"
    }
#line 1262 "cplus.met"
#line 1262 "cplus.met"
#line 1263 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1263 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 1263 "cplus.met"
return((PPTREE) 0);
#line 1263 "cplus.met"

#line 1263 "cplus.met"
stat_dir_exit :
#line 1263 "cplus.met"

#line 1263 "cplus.met"
    _Debug = TRACE_RULE("stat_dir",TRACE_EXIT,(PPTREE)0);
#line 1263 "cplus.met"
    _funcLevel--;
#line 1263 "cplus.met"
    return((PPTREE) -1) ;
#line 1263 "cplus.met"

#line 1263 "cplus.met"
stat_dir_ret :
#line 1263 "cplus.met"
    
#line 1263 "cplus.met"
    _Debug = TRACE_RULE("stat_dir",TRACE_RETURN,_retValue);
#line 1263 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1263 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 1263 "cplus.met"
    return _retValue ;
#line 1263 "cplus.met"
}
#line 1263 "cplus.met"

#line 1263 "cplus.met"
#line 3648 "cplus.met"
PPTREE cplus::stat_dir_switch ( int error_free)
#line 3648 "cplus.met"
{
#line 3648 "cplus.met"
    int  _oldswitchContext = switchContext;
#line 3648 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 3648 "cplus.met"
    int _value,_nbPre = 0 ;
#line 3648 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 3648 "cplus.met"
    int _Debug = TRACE_RULE("stat_dir_switch",TRACE_ENTER,(PPTREE)0);
#line 3648 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 3648 "cplus.met"
#line 3649 "cplus.met"
    {
#line 3649 "cplus.met"
        switchContext = 1 ;
#line 3649 "cplus.met"
#line 3650 "cplus.met"
        {
#line 3650 "cplus.met"
            PPTREE _ptTree0=0;
#line 3650 "cplus.met"
            if ( (_ptTree0=NQUICK_CALL(_Tak(stat_dir)(error_free), 140, cplus))== (PPTREE) -1 ) {
#line 3650 "cplus.met"
                MulFreeTree(1,_ptTree0);
                PROG_EXIT(stat_dir_switch_exit,"stat_dir_switch")
#line 3650 "cplus.met"
            }
#line 3650 "cplus.met"
            _retValue =_ptTree0;
#line 3650 "cplus.met"
            goto stat_dir_switch_ret;
#line 3650 "cplus.met"
        }
#line 3650 "cplus.met"
        switchContext =  _oldswitchContext;
#line 3650 "cplus.met"
    }
#line 3650 "cplus.met"
#line 3650 "cplus.met"
#line 3650 "cplus.met"

#line 3651 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 3651 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 3651 "cplus.met"
switchContext =  _oldswitchContext;
#line 3651 "cplus.met"
return((PPTREE) 0);
#line 3651 "cplus.met"

#line 3651 "cplus.met"
stat_dir_switch_exit :
#line 3651 "cplus.met"

#line 3651 "cplus.met"
    _Debug = TRACE_RULE("stat_dir_switch",TRACE_EXIT,(PPTREE)0);
#line 3651 "cplus.met"
    _funcLevel--;
#line 3651 "cplus.met"
    switchContext =  _oldswitchContext;
#line 3651 "cplus.met"
    return((PPTREE) -1) ;
#line 3651 "cplus.met"

#line 3651 "cplus.met"
stat_dir_switch_ret :
#line 3651 "cplus.met"
    
#line 3651 "cplus.met"
    _Debug = TRACE_RULE("stat_dir_switch",TRACE_RETURN,_retValue);
#line 3651 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 3651 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 3651 "cplus.met"
    switchContext =  _oldswitchContext;
#line 3651 "cplus.met"
    return _retValue ;
#line 3651 "cplus.met"
}
#line 3651 "cplus.met"

#line 3651 "cplus.met"
#line 1154 "cplus.met"
PPTREE cplus::stat_if_dir ( int error_free)
#line 1154 "cplus.met"
{
#line 1154 "cplus.met"
    int  _oldkeepCarriage = keepCarriage;
#line 1154 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 1154 "cplus.met"
    int _value,_nbPre = 0 ;
#line 1154 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 1154 "cplus.met"
    int _Debug = TRACE_RULE("stat_if_dir",TRACE_ENTER,(PPTREE)0);
#line 1154 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 1154 "cplus.met"
#line 1154 "cplus.met"
    PPTREE _addlist1 = (PPTREE) 0,_addlist2 = (PPTREE) 0;
#line 1154 "cplus.met"
#line 1154 "cplus.met"
    PPTREE retTree = (PPTREE) 0,list = (PPTREE) 0,list2 = (PPTREE) 0;
#line 1154 "cplus.met"
#line 1156 "cplus.met"
    {
#line 1156 "cplus.met"
        keepCarriage = 1 ;
#line 1156 "cplus.met"
#line 1157 "cplus.met"
#line 1158 "cplus.met"
        {
#line 1158 "cplus.met"
            PPTREE _ptTree0=0,_ptRes0=0;
#line 1158 "cplus.met"
            _ptRes0= MakeTree(IF_DIR, 3);
#line 1158 "cplus.met"
            if ( (_ptTree0=NQUICK_CALL(_Tak(expression)(error_free), 66, cplus))== (PPTREE) -1 ) {
#line 1158 "cplus.met"
                MulFreeTree(7,_ptRes0,_ptTree0,_addlist1,_addlist2,list,list2,retTree);
                PROG_EXIT(stat_if_dir_exit,"stat_if_dir")
#line 1158 "cplus.met"
            }
#line 1158 "cplus.met"
            ReplaceTree(_ptRes0, 1, _ptTree0);
#line 1158 "cplus.met"
            retTree=_ptRes0;
#line 1158 "cplus.met"
        }
#line 1158 "cplus.met"
#line 1159 "cplus.met"
        (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 1159 "cplus.met"
        if ( ! TERM_OR_META(CARRIAGE_RETURN,"CARRIAGE_RETURN") || !(CommTerm(),1)) {
#line 1159 "cplus.met"
            MulFreeTree(5,_addlist1,_addlist2,list,list2,retTree);
            TOKEN_EXIT(stat_if_dir_exit,"CARRIAGE_RETURN")
#line 1159 "cplus.met"
        } else {
#line 1159 "cplus.met"
            tokenAhead = 0 ;
#line 1159 "cplus.met"
        }
#line 1159 "cplus.met"
#line 1159 "cplus.met"
        keepCarriage =  _oldkeepCarriage;
#line 1159 "cplus.met"
    }
#line 1159 "cplus.met"
#line 1159 "cplus.met"
    _addlist1 = list ;
#line 1159 "cplus.met"
#line 1161 "cplus.met"
    while (((! ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN( ELSE_DIR,"ELSE_DIR"))) && 
#line 1161 "cplus.met"
           (! ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN( ELIF_DIR,"ELIF_DIR")))) && 
#line 1161 "cplus.met"
          (! ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN( ENDIF_DIR,"ENDIF_DIR")))) { 
#line 1161 "cplus.met"
#line 1162 "cplus.met"
#line 1162 "cplus.met"
        {
#line 1162 "cplus.met"
            PPTREE _ptTree0=0;
#line 1162 "cplus.met"
            if ( (_ptTree0=NQUICK_CALL(_Tak(stat_all)(error_free), 139, cplus))== (PPTREE) -1 ) {
#line 1162 "cplus.met"
                MulFreeTree(6,_ptTree0,_addlist1,_addlist2,list,list2,retTree);
                PROG_EXIT(stat_if_dir_exit,"stat_if_dir")
#line 1162 "cplus.met"
            }
#line 1162 "cplus.met"
            _addlist1 =AddList(_addlist1 , _ptTree0);
#line 1162 "cplus.met"
        }
#line 1162 "cplus.met"
#line 1162 "cplus.met"
        if (list){
#line 1162 "cplus.met"
#line 1162 "cplus.met"
            _addlist1 = SonTree (_addlist1 ,2 );
#line 1162 "cplus.met"
        } else {
#line 1162 "cplus.met"
#line 1162 "cplus.met"
            list = _addlist1 ;
#line 1162 "cplus.met"
        }
#line 1162 "cplus.met"
    } 
#line 1162 "cplus.met"
#line 1163 "cplus.met"
    {
#line 1163 "cplus.met"
        PPTREE _ptTree0=0;
#line 1163 "cplus.met"
        if ( (_ptTree0=NQUICK_CALL(_Tak(none_statement)(error_free), 107, cplus))== (PPTREE) -1 ) {
#line 1163 "cplus.met"
            MulFreeTree(6,_ptTree0,_addlist1,_addlist2,list,list2,retTree);
            PROG_EXIT(stat_if_dir_exit,"stat_if_dir")
#line 1163 "cplus.met"
        }
#line 1163 "cplus.met"
        list =AddList(list , _ptTree0);
#line 1163 "cplus.met"
    }
#line 1163 "cplus.met"
#line 1164 "cplus.met"
    ReplaceTree(retTree ,2 ,list );
#line 1164 "cplus.met"
#line 1165 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 1165 "cplus.met"
    switch( lexEl.Value) {
#line 1165 "cplus.met"
#line 1166 "cplus.met"
        case META : 
#line 1166 "cplus.met"
        case ELSE_DIR : 
#line 1166 "cplus.met"
            tokenAhead = 0 ;
#line 1166 "cplus.met"
            CommTerm();
#line 1166 "cplus.met"
#line 1167 "cplus.met"
#line 1167 "cplus.met"
            _addlist2 = list2 ;
#line 1167 "cplus.met"
#line 1168 "cplus.met"
            while (((tokenAhead && tokenAhead != -1)|| (c != EOF)) && 
#line 1168 "cplus.met"
                  (! ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN( ENDIF_DIR,"ENDIF_DIR")))) { 
#line 1168 "cplus.met"
#line 1169 "cplus.met"
#line 1169 "cplus.met"
                {
#line 1169 "cplus.met"
                    PPTREE _ptTree0=0;
#line 1169 "cplus.met"
                    if ( (_ptTree0=NQUICK_CALL(_Tak(stat_all)(error_free), 139, cplus))== (PPTREE) -1 ) {
#line 1169 "cplus.met"
                        MulFreeTree(6,_ptTree0,_addlist1,_addlist2,list,list2,retTree);
                        PROG_EXIT(stat_if_dir_exit,"stat_if_dir")
#line 1169 "cplus.met"
                    }
#line 1169 "cplus.met"
                    _addlist2 =AddList(_addlist2 , _ptTree0);
#line 1169 "cplus.met"
                }
#line 1169 "cplus.met"
#line 1169 "cplus.met"
                if (list2){
#line 1169 "cplus.met"
#line 1169 "cplus.met"
                    _addlist2 = SonTree (_addlist2 ,2 );
#line 1169 "cplus.met"
                } else {
#line 1169 "cplus.met"
#line 1169 "cplus.met"
                    list2 = _addlist2 ;
#line 1169 "cplus.met"
                }
#line 1169 "cplus.met"
            } 
#line 1169 "cplus.met"
#line 1170 "cplus.met"
            {
#line 1170 "cplus.met"
                PPTREE _ptTree0=0;
#line 1170 "cplus.met"
                if ( (_ptTree0=NQUICK_CALL(_Tak(none_statement)(error_free), 107, cplus))== (PPTREE) -1 ) {
#line 1170 "cplus.met"
                    MulFreeTree(6,_ptTree0,_addlist1,_addlist2,list,list2,retTree);
                    PROG_EXIT(stat_if_dir_exit,"stat_if_dir")
#line 1170 "cplus.met"
                }
#line 1170 "cplus.met"
                list2 =AddList(list2 , _ptTree0);
#line 1170 "cplus.met"
            }
#line 1170 "cplus.met"
#line 1171 "cplus.met"
            (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 1171 "cplus.met"
            if ( ! TERM_OR_META(ENDIF_DIR,"ENDIF_DIR") || !(CommTerm(),1)) {
#line 1171 "cplus.met"
                MulFreeTree(5,_addlist1,_addlist2,list,list2,retTree);
                TOKEN_EXIT(stat_if_dir_exit,"ENDIF_DIR")
#line 1171 "cplus.met"
            } else {
#line 1171 "cplus.met"
                tokenAhead = 0 ;
#line 1171 "cplus.met"
            }
#line 1171 "cplus.met"
#line 1172 "cplus.met"
            {
#line 1172 "cplus.met"
                PPTREE _ptTree0=0;
#line 1172 "cplus.met"
                _ptTree0=ReplaceTree(retTree ,3 ,list2 );
#line 1172 "cplus.met"
                _retValue =_ptTree0;
#line 1172 "cplus.met"
                goto stat_if_dir_ret;
#line 1172 "cplus.met"
            }
#line 1172 "cplus.met"
#line 1172 "cplus.met"
            break;
#line 1172 "cplus.met"
#line 1174 "cplus.met"
        case ELIF_DIR : 
#line 1174 "cplus.met"
            tokenAhead = 0 ;
#line 1174 "cplus.met"
            CommTerm();
#line 1174 "cplus.met"
#line 1174 "cplus.met"
            {
#line 1174 "cplus.met"
                PPTREE _ptTree0=0;
#line 1174 "cplus.met"
                {
#line 1174 "cplus.met"
                    PPTREE _ptTree1=0;
#line 1174 "cplus.met"
                    if ( (_ptTree1=NQUICK_CALL(_Tak(stat_if_dir)(error_free), 142, cplus))== (PPTREE) -1 ) {
#line 1174 "cplus.met"
                        MulFreeTree(7,_ptTree1,_ptTree0,_addlist1,_addlist2,list,list2,retTree);
                        PROG_EXIT(stat_if_dir_exit,"stat_if_dir")
#line 1174 "cplus.met"
                    }
#line 1174 "cplus.met"
                    _ptTree0=ReplaceTree(retTree , 3 , _ptTree1);
#line 1174 "cplus.met"
                }
#line 1174 "cplus.met"
                _retValue =_ptTree0;
#line 1174 "cplus.met"
                goto stat_if_dir_ret;
#line 1174 "cplus.met"
            }
#line 1174 "cplus.met"
            break;
#line 1174 "cplus.met"
#line 1175 "cplus.met"
        case ENDIF_DIR : 
#line 1175 "cplus.met"
            tokenAhead = 0 ;
#line 1175 "cplus.met"
            CommTerm();
#line 1175 "cplus.met"
#line 1175 "cplus.met"
            {
#line 1175 "cplus.met"
                _retValue = retTree ;
#line 1175 "cplus.met"
                goto stat_if_dir_ret;
#line 1175 "cplus.met"
                
#line 1175 "cplus.met"
            }
#line 1175 "cplus.met"
            break;
#line 1175 "cplus.met"
        default :
#line 1175 "cplus.met"
            MulFreeTree(5,_addlist1,_addlist2,list,list2,retTree);
            CASE_EXIT(stat_if_dir_exit,"either ELSE_DIR or ELIF_DIR or ENDIF_DIR")
#line 1175 "cplus.met"
            break;
#line 1175 "cplus.met"
    }
#line 1175 "cplus.met"
#line 1175 "cplus.met"
#line 1176 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1176 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 1176 "cplus.met"
keepCarriage =  _oldkeepCarriage;
#line 1176 "cplus.met"
return((PPTREE) 0);
#line 1176 "cplus.met"

#line 1176 "cplus.met"
stat_if_dir_exit :
#line 1176 "cplus.met"

#line 1176 "cplus.met"
    _Debug = TRACE_RULE("stat_if_dir",TRACE_EXIT,(PPTREE)0);
#line 1176 "cplus.met"
    _funcLevel--;
#line 1176 "cplus.met"
    keepCarriage =  _oldkeepCarriage;
#line 1176 "cplus.met"
    return((PPTREE) -1) ;
#line 1176 "cplus.met"

#line 1176 "cplus.met"
stat_if_dir_ret :
#line 1176 "cplus.met"
    
#line 1176 "cplus.met"
    _Debug = TRACE_RULE("stat_if_dir",TRACE_RETURN,_retValue);
#line 1176 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1176 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 1176 "cplus.met"
    keepCarriage =  _oldkeepCarriage;
#line 1176 "cplus.met"
    return _retValue ;
#line 1176 "cplus.met"
}
#line 1176 "cplus.met"

#line 1176 "cplus.met"
#line 1217 "cplus.met"
PPTREE cplus::stat_ifdef_dir ( int error_free)
#line 1217 "cplus.met"
{
#line 1217 "cplus.met"
    int  _oldkeepCarriage = keepCarriage;
#line 1217 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 1217 "cplus.met"
    int _value,_nbPre = 0 ;
#line 1217 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 1217 "cplus.met"
    int _Debug = TRACE_RULE("stat_ifdef_dir",TRACE_ENTER,(PPTREE)0);
#line 1217 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 1217 "cplus.met"
#line 1217 "cplus.met"
    PPTREE _addlist1 = (PPTREE) 0,_addlist2 = (PPTREE) 0;
#line 1217 "cplus.met"
#line 1217 "cplus.met"
    PPTREE retTree = (PPTREE) 0,list = (PPTREE) 0,list2 = (PPTREE) 0,express = (PPTREE) 0;
#line 1217 "cplus.met"
#line 1219 "cplus.met"
    if ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&TERM_OR_META(IFDEF_DIR,"IFDEF_DIR") && (tokenAhead = 0,CommTerm(),1)){
#line 1219 "cplus.met"
#line 1220 "cplus.met"
#line 1221 "cplus.met"
        {
#line 1221 "cplus.met"
            keepCarriage = 1 ;
#line 1221 "cplus.met"
#line 1222 "cplus.met"
#line 1223 "cplus.met"
            {
#line 1223 "cplus.met"
                PPTREE _ptTree0=0,_ptRes0=0;
#line 1223 "cplus.met"
                _ptRes0= MakeTree(IFDEF_DIR, 3);
#line 1223 "cplus.met"
                if ( (_ptTree0=NQUICK_CALL(_Tak(expression)(error_free), 66, cplus))== (PPTREE) -1 ) {
#line 1223 "cplus.met"
                    MulFreeTree(8,_ptRes0,_ptTree0,_addlist1,_addlist2,express,list,list2,retTree);
                    PROG_EXIT(stat_ifdef_dir_exit,"stat_ifdef_dir")
#line 1223 "cplus.met"
                }
#line 1223 "cplus.met"
                ReplaceTree(_ptRes0, 1, _ptTree0);
#line 1223 "cplus.met"
                retTree=_ptRes0;
#line 1223 "cplus.met"
            }
#line 1223 "cplus.met"
#line 1224 "cplus.met"
            (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 1224 "cplus.met"
            if ( ! TERM_OR_META(CARRIAGE_RETURN,"CARRIAGE_RETURN") || !(CommTerm(),1)) {
#line 1224 "cplus.met"
                MulFreeTree(6,_addlist1,_addlist2,express,list,list2,retTree);
                TOKEN_EXIT(stat_ifdef_dir_exit,"CARRIAGE_RETURN")
#line 1224 "cplus.met"
            } else {
#line 1224 "cplus.met"
                tokenAhead = 0 ;
#line 1224 "cplus.met"
            }
#line 1224 "cplus.met"
#line 1224 "cplus.met"
            keepCarriage =  _oldkeepCarriage;
#line 1224 "cplus.met"
        }
#line 1224 "cplus.met"
#line 1224 "cplus.met"
#line 1225 "cplus.met"
    } else {
#line 1225 "cplus.met"
#line 1228 "cplus.met"
#line 1229 "cplus.met"
        (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 1229 "cplus.met"
        if ( ! TERM_OR_META(IFNDEF_DIR,"IFNDEF_DIR") || !(CommTerm(),1)) {
#line 1229 "cplus.met"
            MulFreeTree(6,_addlist1,_addlist2,express,list,list2,retTree);
            TOKEN_EXIT(stat_ifdef_dir_exit,"IFNDEF_DIR")
#line 1229 "cplus.met"
        } else {
#line 1229 "cplus.met"
            tokenAhead = 0 ;
#line 1229 "cplus.met"
        }
#line 1229 "cplus.met"
#line 1230 "cplus.met"
        {
#line 1230 "cplus.met"
            keepCarriage = 1 ;
#line 1230 "cplus.met"
#line 1231 "cplus.met"
#line 1232 "cplus.met"
            if ( (express=NQUICK_CALL(_Tak(expression)(error_free), 66, cplus))== (PPTREE) -1 ) {
#line 1232 "cplus.met"
                MulFreeTree(6,_addlist1,_addlist2,express,list,list2,retTree);
                PROG_EXIT(stat_ifdef_dir_exit,"stat_ifdef_dir")
#line 1232 "cplus.met"
            }
#line 1232 "cplus.met"
#line 1233 "cplus.met"
            (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 1233 "cplus.met"
            if ( ! TERM_OR_META(CARRIAGE_RETURN,"CARRIAGE_RETURN") || !(CommTerm(),1)) {
#line 1233 "cplus.met"
                MulFreeTree(6,_addlist1,_addlist2,express,list,list2,retTree);
                TOKEN_EXIT(stat_ifdef_dir_exit,"CARRIAGE_RETURN")
#line 1233 "cplus.met"
            } else {
#line 1233 "cplus.met"
                tokenAhead = 0 ;
#line 1233 "cplus.met"
            }
#line 1233 "cplus.met"
#line 1233 "cplus.met"
            keepCarriage =  _oldkeepCarriage;
#line 1233 "cplus.met"
        }
#line 1233 "cplus.met"
#line 1235 "cplus.met"
        {
#line 1235 "cplus.met"
            PPTREE _ptRes0=0;
#line 1235 "cplus.met"
            _ptRes0= MakeTree(IFNDEF_DIR, 3);
#line 1235 "cplus.met"
            ReplaceTree(_ptRes0, 1, express );
#line 1235 "cplus.met"
            retTree=_ptRes0;
#line 1235 "cplus.met"
        }
#line 1235 "cplus.met"
#line 1235 "cplus.met"
    }
#line 1235 "cplus.met"
#line 1235 "cplus.met"
    _addlist1 = list ;
#line 1235 "cplus.met"
#line 1237 "cplus.met"
    while (((! ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN( ELSE_DIR,"ELSE_DIR"))) && 
#line 1237 "cplus.met"
           (! ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN( ELIF_DIR,"ELIF_DIR")))) && 
#line 1237 "cplus.met"
          (! ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN( ENDIF_DIR,"ENDIF_DIR")))) { 
#line 1237 "cplus.met"
#line 1238 "cplus.met"
#line 1238 "cplus.met"
        {
#line 1238 "cplus.met"
            PPTREE _ptTree0=0;
#line 1238 "cplus.met"
            if ( (_ptTree0=NQUICK_CALL(_Tak(stat_all)(error_free), 139, cplus))== (PPTREE) -1 ) {
#line 1238 "cplus.met"
                MulFreeTree(7,_ptTree0,_addlist1,_addlist2,express,list,list2,retTree);
                PROG_EXIT(stat_ifdef_dir_exit,"stat_ifdef_dir")
#line 1238 "cplus.met"
            }
#line 1238 "cplus.met"
            _addlist1 =AddList(_addlist1 , _ptTree0);
#line 1238 "cplus.met"
        }
#line 1238 "cplus.met"
#line 1238 "cplus.met"
        if (list){
#line 1238 "cplus.met"
#line 1238 "cplus.met"
            _addlist1 = SonTree (_addlist1 ,2 );
#line 1238 "cplus.met"
        } else {
#line 1238 "cplus.met"
#line 1238 "cplus.met"
            list = _addlist1 ;
#line 1238 "cplus.met"
        }
#line 1238 "cplus.met"
    } 
#line 1238 "cplus.met"
#line 1239 "cplus.met"
    {
#line 1239 "cplus.met"
        PPTREE _ptTree0=0;
#line 1239 "cplus.met"
        if ( (_ptTree0=NQUICK_CALL(_Tak(none_statement)(error_free), 107, cplus))== (PPTREE) -1 ) {
#line 1239 "cplus.met"
            MulFreeTree(7,_ptTree0,_addlist1,_addlist2,express,list,list2,retTree);
            PROG_EXIT(stat_ifdef_dir_exit,"stat_ifdef_dir")
#line 1239 "cplus.met"
        }
#line 1239 "cplus.met"
        list =AddList(list , _ptTree0);
#line 1239 "cplus.met"
    }
#line 1239 "cplus.met"
#line 1240 "cplus.met"
    ReplaceTree(retTree ,2 ,list );
#line 1240 "cplus.met"
#line 1241 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 1241 "cplus.met"
    switch( lexEl.Value) {
#line 1241 "cplus.met"
#line 1242 "cplus.met"
        case META : 
#line 1242 "cplus.met"
        case ELSE_DIR : 
#line 1242 "cplus.met"
            tokenAhead = 0 ;
#line 1242 "cplus.met"
            CommTerm();
#line 1242 "cplus.met"
#line 1243 "cplus.met"
#line 1243 "cplus.met"
            _addlist2 = list2 ;
#line 1243 "cplus.met"
#line 1244 "cplus.met"
            while (((tokenAhead && tokenAhead != -1)|| (c != EOF)) && 
#line 1244 "cplus.met"
                  (! ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN( ENDIF_DIR,"ENDIF_DIR")))) { 
#line 1244 "cplus.met"
#line 1245 "cplus.met"
#line 1245 "cplus.met"
                {
#line 1245 "cplus.met"
                    PPTREE _ptTree0=0;
#line 1245 "cplus.met"
                    if ( (_ptTree0=NQUICK_CALL(_Tak(stat_all)(error_free), 139, cplus))== (PPTREE) -1 ) {
#line 1245 "cplus.met"
                        MulFreeTree(7,_ptTree0,_addlist1,_addlist2,express,list,list2,retTree);
                        PROG_EXIT(stat_ifdef_dir_exit,"stat_ifdef_dir")
#line 1245 "cplus.met"
                    }
#line 1245 "cplus.met"
                    _addlist2 =AddList(_addlist2 , _ptTree0);
#line 1245 "cplus.met"
                }
#line 1245 "cplus.met"
#line 1245 "cplus.met"
                if (list2){
#line 1245 "cplus.met"
#line 1245 "cplus.met"
                    _addlist2 = SonTree (_addlist2 ,2 );
#line 1245 "cplus.met"
                } else {
#line 1245 "cplus.met"
#line 1245 "cplus.met"
                    list2 = _addlist2 ;
#line 1245 "cplus.met"
                }
#line 1245 "cplus.met"
            } 
#line 1245 "cplus.met"
#line 1246 "cplus.met"
            {
#line 1246 "cplus.met"
                PPTREE _ptTree0=0;
#line 1246 "cplus.met"
                if ( (_ptTree0=NQUICK_CALL(_Tak(none_statement)(error_free), 107, cplus))== (PPTREE) -1 ) {
#line 1246 "cplus.met"
                    MulFreeTree(7,_ptTree0,_addlist1,_addlist2,express,list,list2,retTree);
                    PROG_EXIT(stat_ifdef_dir_exit,"stat_ifdef_dir")
#line 1246 "cplus.met"
                }
#line 1246 "cplus.met"
                list2 =AddList(list2 , _ptTree0);
#line 1246 "cplus.met"
            }
#line 1246 "cplus.met"
#line 1247 "cplus.met"
            (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 1247 "cplus.met"
            if ( ! TERM_OR_META(ENDIF_DIR,"ENDIF_DIR") || !(CommTerm(),1)) {
#line 1247 "cplus.met"
                MulFreeTree(6,_addlist1,_addlist2,express,list,list2,retTree);
                TOKEN_EXIT(stat_ifdef_dir_exit,"ENDIF_DIR")
#line 1247 "cplus.met"
            } else {
#line 1247 "cplus.met"
                tokenAhead = 0 ;
#line 1247 "cplus.met"
            }
#line 1247 "cplus.met"
#line 1248 "cplus.met"
            {
#line 1248 "cplus.met"
                PPTREE _ptTree0=0;
#line 1248 "cplus.met"
                _ptTree0=ReplaceTree(retTree ,3 ,list2 );
#line 1248 "cplus.met"
                _retValue =_ptTree0;
#line 1248 "cplus.met"
                goto stat_ifdef_dir_ret;
#line 1248 "cplus.met"
            }
#line 1248 "cplus.met"
#line 1248 "cplus.met"
            break;
#line 1248 "cplus.met"
#line 1250 "cplus.met"
        case ELIF_DIR : 
#line 1250 "cplus.met"
            tokenAhead = 0 ;
#line 1250 "cplus.met"
            CommTerm();
#line 1250 "cplus.met"
#line 1250 "cplus.met"
            {
#line 1250 "cplus.met"
                PPTREE _ptTree0=0;
#line 1250 "cplus.met"
                {
#line 1250 "cplus.met"
                    PPTREE _ptTree1=0;
#line 1250 "cplus.met"
                    if ( (_ptTree1=NQUICK_CALL(_Tak(stat_if_dir)(error_free), 142, cplus))== (PPTREE) -1 ) {
#line 1250 "cplus.met"
                        MulFreeTree(8,_ptTree1,_ptTree0,_addlist1,_addlist2,express,list,list2,retTree);
                        PROG_EXIT(stat_ifdef_dir_exit,"stat_ifdef_dir")
#line 1250 "cplus.met"
                    }
#line 1250 "cplus.met"
                    _ptTree0=ReplaceTree(retTree , 3 , _ptTree1);
#line 1250 "cplus.met"
                }
#line 1250 "cplus.met"
                _retValue =_ptTree0;
#line 1250 "cplus.met"
                goto stat_ifdef_dir_ret;
#line 1250 "cplus.met"
            }
#line 1250 "cplus.met"
            break;
#line 1250 "cplus.met"
#line 1251 "cplus.met"
        case ENDIF_DIR : 
#line 1251 "cplus.met"
            tokenAhead = 0 ;
#line 1251 "cplus.met"
            CommTerm();
#line 1251 "cplus.met"
#line 1251 "cplus.met"
            {
#line 1251 "cplus.met"
                _retValue = retTree ;
#line 1251 "cplus.met"
                goto stat_ifdef_dir_ret;
#line 1251 "cplus.met"
                
#line 1251 "cplus.met"
            }
#line 1251 "cplus.met"
            break;
#line 1251 "cplus.met"
        default :
#line 1251 "cplus.met"
            MulFreeTree(6,_addlist1,_addlist2,express,list,list2,retTree);
            CASE_EXIT(stat_ifdef_dir_exit,"either ELSE_DIR or ELIF_DIR or ENDIF_DIR")
#line 1251 "cplus.met"
            break;
#line 1251 "cplus.met"
    }
#line 1251 "cplus.met"
#line 1251 "cplus.met"
#line 1252 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1252 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 1252 "cplus.met"
keepCarriage =  _oldkeepCarriage;
#line 1252 "cplus.met"
return((PPTREE) 0);
#line 1252 "cplus.met"

#line 1252 "cplus.met"
stat_ifdef_dir_exit :
#line 1252 "cplus.met"

#line 1252 "cplus.met"
    _Debug = TRACE_RULE("stat_ifdef_dir",TRACE_EXIT,(PPTREE)0);
#line 1252 "cplus.met"
    _funcLevel--;
#line 1252 "cplus.met"
    keepCarriage =  _oldkeepCarriage;
#line 1252 "cplus.met"
    return((PPTREE) -1) ;
#line 1252 "cplus.met"

#line 1252 "cplus.met"
stat_ifdef_dir_ret :
#line 1252 "cplus.met"
    
#line 1252 "cplus.met"
    _Debug = TRACE_RULE("stat_ifdef_dir",TRACE_RETURN,_retValue);
#line 1252 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1252 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 1252 "cplus.met"
    keepCarriage =  _oldkeepCarriage;
#line 1252 "cplus.met"
    return _retValue ;
#line 1252 "cplus.met"
}
#line 1252 "cplus.met"

#line 1252 "cplus.met"
#line 3492 "cplus.met"
PPTREE cplus::statement ( int error_free)
#line 3492 "cplus.met"
{
#line 3492 "cplus.met"
    int  _oldswitchContext = switchContext;
#line 3492 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 3492 "cplus.met"
    int _value,_nbPre = 0 ;
#line 3492 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 3492 "cplus.met"
    int _Debug = TRACE_RULE("statement",TRACE_ENTER,(PPTREE)0);
#line 3492 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 3492 "cplus.met"
#line 3492 "cplus.met"
    PPTREE statTree = (PPTREE) 0,opt = (PPTREE) 0,stat = (PPTREE) 0;
#line 3492 "cplus.met"
#line 3494 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3494 "cplus.met"
    switch( lexEl.Value) {
#line 3494 "cplus.met"
#line 3495 "cplus.met"
        case BREAK : 
#line 3495 "cplus.met"
            tokenAhead = 0 ;
#line 3495 "cplus.met"
            CommTerm();
#line 3495 "cplus.met"
#line 3496 "cplus.met"
#line 3497 "cplus.met"
            {
#line 3497 "cplus.met"
                PPTREE _ptRes0=0;
#line 3497 "cplus.met"
                _ptRes0= MakeTree(BREAK, 1);
#line 3497 "cplus.met"
                statTree=_ptRes0;
#line 3497 "cplus.met"
            }
#line 3497 "cplus.met"
#line 3498 "cplus.met"
            (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3498 "cplus.met"
            if (  !SEE_TOKEN( PVIR,";") || !(CommTerm(),1)) {
#line 3498 "cplus.met"
                MulFreeTree(3,opt,stat,statTree);
                TOKEN_EXIT(statement_exit,";")
#line 3498 "cplus.met"
            } else {
#line 3498 "cplus.met"
                tokenAhead = 0 ;
#line 3498 "cplus.met"
            }
#line 3498 "cplus.met"
#line 3498 "cplus.met"
            break;
#line 3498 "cplus.met"
#line 3500 "cplus.met"
        case CONTINUE : 
#line 3500 "cplus.met"
            tokenAhead = 0 ;
#line 3500 "cplus.met"
            CommTerm();
#line 3500 "cplus.met"
#line 3501 "cplus.met"
#line 3502 "cplus.met"
            {
#line 3502 "cplus.met"
                PPTREE _ptRes0=0;
#line 3502 "cplus.met"
                _ptRes0= MakeTree(CONTINUE, 1);
#line 3502 "cplus.met"
                statTree=_ptRes0;
#line 3502 "cplus.met"
            }
#line 3502 "cplus.met"
#line 3503 "cplus.met"
            (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3503 "cplus.met"
            if (  !SEE_TOKEN( PVIR,";") || !(CommTerm(),1)) {
#line 3503 "cplus.met"
                MulFreeTree(3,opt,stat,statTree);
                TOKEN_EXIT(statement_exit,";")
#line 3503 "cplus.met"
            } else {
#line 3503 "cplus.met"
                tokenAhead = 0 ;
#line 3503 "cplus.met"
            }
#line 3503 "cplus.met"
#line 3503 "cplus.met"
            break;
#line 3503 "cplus.met"
#line 3505 "cplus.met"
        case DO : 
#line 3505 "cplus.met"
            tokenAhead = 0 ;
#line 3505 "cplus.met"
            CommTerm();
#line 3505 "cplus.met"
#line 3506 "cplus.met"
#line 3507 "cplus.met"
            {
#line 3507 "cplus.met"
                switchContext = 0 ;
#line 3507 "cplus.met"
#line 3508 "cplus.met"
                {
#line 3508 "cplus.met"
                    PPTREE _ptTree0=0,_ptRes0=0;
#line 3508 "cplus.met"
                    _ptRes0= MakeTree(DO, 2);
#line 3508 "cplus.met"
                    if ( (_ptTree0=NQUICK_CALL(_Tak(statement)(error_free), 144, cplus))== (PPTREE) -1 ) {
#line 3508 "cplus.met"
                        MulFreeTree(5,_ptRes0,_ptTree0,opt,stat,statTree);
                        PROG_EXIT(statement_exit,"statement")
#line 3508 "cplus.met"
                    }
#line 3508 "cplus.met"
                    ReplaceTree(_ptRes0, 1, _ptTree0);
#line 3508 "cplus.met"
                    statTree=_ptRes0;
#line 3508 "cplus.met"
                }
#line 3508 "cplus.met"
                switchContext =  _oldswitchContext;
#line 3508 "cplus.met"
            }
#line 3508 "cplus.met"
#line 3509 "cplus.met"
            (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3509 "cplus.met"
            if (  !SEE_TOKEN( WHILE,"while") || !(CommTerm(),1)) {
#line 3509 "cplus.met"
                MulFreeTree(3,opt,stat,statTree);
                TOKEN_EXIT(statement_exit,"while")
#line 3509 "cplus.met"
            } else {
#line 3509 "cplus.met"
                tokenAhead = 0 ;
#line 3509 "cplus.met"
            }
#line 3509 "cplus.met"
#line 3510 "cplus.met"
            (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3510 "cplus.met"
            if (  !SEE_TOKEN( POUV,"(") || !(CommTerm(),1)) {
#line 3510 "cplus.met"
                MulFreeTree(3,opt,stat,statTree);
                TOKEN_EXIT(statement_exit,"(")
#line 3510 "cplus.met"
            } else {
#line 3510 "cplus.met"
                tokenAhead = 0 ;
#line 3510 "cplus.met"
            }
#line 3510 "cplus.met"
#line 3511 "cplus.met"
            {
#line 3511 "cplus.met"
                PPTREE _ptTree0=0;
#line 3511 "cplus.met"
                if ( (_ptTree0=NQUICK_CALL(_Tak(expression)(error_free), 66, cplus))== (PPTREE) -1 ) {
#line 3511 "cplus.met"
                    MulFreeTree(4,_ptTree0,opt,stat,statTree);
                    PROG_EXIT(statement_exit,"statement")
#line 3511 "cplus.met"
                }
#line 3511 "cplus.met"
                ReplaceTree(statTree , 2 , _ptTree0);
#line 3511 "cplus.met"
            }
#line 3511 "cplus.met"
#line 3512 "cplus.met"
            (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3512 "cplus.met"
            if (  !SEE_TOKEN( PFER,")") || !(CommTerm(),1)) {
#line 3512 "cplus.met"
                MulFreeTree(3,opt,stat,statTree);
                TOKEN_EXIT(statement_exit,")")
#line 3512 "cplus.met"
            } else {
#line 3512 "cplus.met"
                tokenAhead = 0 ;
#line 3512 "cplus.met"
            }
#line 3512 "cplus.met"
#line 3513 "cplus.met"
            (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3513 "cplus.met"
            if (  !SEE_TOKEN( PVIR,";") || !(CommTerm(),1)) {
#line 3513 "cplus.met"
                MulFreeTree(3,opt,stat,statTree);
                TOKEN_EXIT(statement_exit,";")
#line 3513 "cplus.met"
            } else {
#line 3513 "cplus.met"
                tokenAhead = 0 ;
#line 3513 "cplus.met"
            }
#line 3513 "cplus.met"
#line 3513 "cplus.met"
            break;
#line 3513 "cplus.met"
#line 3515 "cplus.met"
        case AOUV : 
#line 3515 "cplus.met"
#line 3515 "cplus.met"
            if ( (statTree=NQUICK_CALL(_Tak(compound_statement)(error_free), 32, cplus))== (PPTREE) -1 ) {
#line 3515 "cplus.met"
                MulFreeTree(3,opt,stat,statTree);
                PROG_EXIT(statement_exit,"statement")
#line 3515 "cplus.met"
            }
#line 3515 "cplus.met"
            break;
#line 3515 "cplus.met"
#line 3516 "cplus.met"
        case FOR : 
#line 3516 "cplus.met"
            tokenAhead = 0 ;
#line 3516 "cplus.met"
            CommTerm();
#line 3516 "cplus.met"
#line 3516 "cplus.met"
            {
#line 3516 "cplus.met"
                PPTREE _ptTree0=0;
#line 3516 "cplus.met"
                if ( (_ptTree0=NQUICK_CALL(_Tak(for_statement)(error_free), 79, cplus))== (PPTREE) -1 ) {
#line 3516 "cplus.met"
                    MulFreeTree(4,_ptTree0,opt,stat,statTree);
                    PROG_EXIT(statement_exit,"statement")
#line 3516 "cplus.met"
                }
#line 3516 "cplus.met"
                _retValue =_ptTree0;
#line 3516 "cplus.met"
                goto statement_ret;
#line 3516 "cplus.met"
            }
#line 3516 "cplus.met"
            break;
#line 3516 "cplus.met"
#line 3517 "cplus.met"
        case GOTO : 
#line 3517 "cplus.met"
            tokenAhead = 0 ;
#line 3517 "cplus.met"
            CommTerm();
#line 3517 "cplus.met"
#line 3518 "cplus.met"
#line 3519 "cplus.met"
            {
#line 3519 "cplus.met"
                PPTREE _ptTree0=0,_ptRes0=0;
#line 3519 "cplus.met"
                _ptRes0= MakeTree(GOTO, 1);
#line 3519 "cplus.met"
                {
#line 3519 "cplus.met"
                    PPTREE _ptTree1=0,_ptRes1=0;
#line 3519 "cplus.met"
                    _ptRes1= MakeTree(IDENT, 1);
#line 3519 "cplus.met"
                    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3519 "cplus.met"
                    if ( ! TERM_OR_META(IDENT,"IDENT") || !(BUILD_TERM_META(_ptTree1))) {
#line 3519 "cplus.met"
                        MulFreeTree(7,_ptRes1,_ptTree1,_ptRes0,_ptTree0,opt,stat,statTree);
                        TOKEN_EXIT(statement_exit,"IDENT")
#line 3519 "cplus.met"
                    } else {
#line 3519 "cplus.met"
                        tokenAhead = 0 ;
#line 3519 "cplus.met"
                    }
#line 3519 "cplus.met"
                    ReplaceTree(_ptRes1, 1, _ptTree1);
#line 3519 "cplus.met"
                    _ptTree0=_ptRes1;
#line 3519 "cplus.met"
                }
#line 3519 "cplus.met"
                ReplaceTree(_ptRes0, 1, _ptTree0);
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
        case IF : 
#line 3522 "cplus.met"
            tokenAhead = 0 ;
#line 3522 "cplus.met"
            CommTerm();
#line 3522 "cplus.met"
#line 3523 "cplus.met"
#line 3524 "cplus.met"
            (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3524 "cplus.met"
            if (  !SEE_TOKEN( POUV,"(") || !(CommTerm(),1)) {
#line 3524 "cplus.met"
                MulFreeTree(3,opt,stat,statTree);
                TOKEN_EXIT(statement_exit,"(")
#line 3524 "cplus.met"
            } else {
#line 3524 "cplus.met"
                tokenAhead = 0 ;
#line 3524 "cplus.met"
            }
#line 3524 "cplus.met"
#line 3525 "cplus.met"
            {
#line 3525 "cplus.met"
                PPTREE _ptTree0=0,_ptRes0=0;
#line 3525 "cplus.met"
                _ptRes0= MakeTree(IF, 3);
#line 3525 "cplus.met"
                if ( (_ptTree0=NQUICK_CALL(_Tak(expression)(error_free), 66, cplus))== (PPTREE) -1 ) {
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
#line 3526 "cplus.met"
            (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3526 "cplus.met"
            if (  !SEE_TOKEN( PFER,")") || !(CommTerm(),1)) {
#line 3526 "cplus.met"
                MulFreeTree(3,opt,stat,statTree);
                TOKEN_EXIT(statement_exit,")")
#line 3526 "cplus.met"
            } else {
#line 3526 "cplus.met"
                tokenAhead = 0 ;
#line 3526 "cplus.met"
            }
#line 3526 "cplus.met"
#line 3527 "cplus.met"
            {
#line 3527 "cplus.met"
                switchContext = 0 ;
#line 3527 "cplus.met"
#line 3528 "cplus.met"
                {
#line 3528 "cplus.met"
                    PPTREE _ptTree0=0;
#line 3528 "cplus.met"
                    if ( (_ptTree0=NQUICK_CALL(_Tak(statement)(error_free), 144, cplus))== (PPTREE) -1 ) {
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
                switchContext =  _oldswitchContext;
#line 3528 "cplus.met"
            }
#line 3528 "cplus.met"
#line 3529 "cplus.met"
            if ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN(ELSE,"else") && (tokenAhead = 0,CommTerm(),1)){
#line 3529 "cplus.met"
#line 3530 "cplus.met"
                {
#line 3530 "cplus.met"
                    switchContext = 0 ;
#line 3530 "cplus.met"
#line 3531 "cplus.met"
                    {
#line 3531 "cplus.met"
                        PPTREE _ptTree0=0;
#line 3531 "cplus.met"
                        if ( (_ptTree0=NQUICK_CALL(_Tak(statement)(error_free), 144, cplus))== (PPTREE) -1 ) {
#line 3531 "cplus.met"
                            MulFreeTree(4,_ptTree0,opt,stat,statTree);
                            PROG_EXIT(statement_exit,"statement")
#line 3531 "cplus.met"
                        }
#line 3531 "cplus.met"
                        ReplaceTree(statTree , 3 , _ptTree0);
#line 3531 "cplus.met"
                    }
#line 3531 "cplus.met"
                    switchContext =  _oldswitchContext;
#line 3531 "cplus.met"
                }
#line 3531 "cplus.met"
            }
#line 3531 "cplus.met"
#line 3531 "cplus.met"
            break;
#line 3531 "cplus.met"
#line 3533 "cplus.met"
        case PVIR : 
#line 3533 "cplus.met"
            tokenAhead = 0 ;
#line 3533 "cplus.met"
            CommTerm();
#line 3533 "cplus.met"
#line 3533 "cplus.met"
            {
#line 3533 "cplus.met"
                PPTREE _ptRes0=0;
#line 3533 "cplus.met"
                _ptRes0= MakeTree(STAT_VOID, 0);
#line 3533 "cplus.met"
                statTree=_ptRes0;
#line 3533 "cplus.met"
            }
#line 3533 "cplus.met"
            break;
#line 3533 "cplus.met"
#line 3534 "cplus.met"
        case RETURN : 
#line 3534 "cplus.met"
            tokenAhead = 0 ;
#line 3534 "cplus.met"
            CommTerm();
#line 3534 "cplus.met"
#line 3535 "cplus.met"
#line 3536 "cplus.met"
            {
#line 3536 "cplus.met"
                PPTREE _ptRes0=0;
#line 3536 "cplus.met"
                _ptRes0= MakeTree(RETURN, 1);
#line 3536 "cplus.met"
                statTree=_ptRes0;
#line 3536 "cplus.met"
            }
#line 3536 "cplus.met"
#line 3537 "cplus.met"
            if (NPUSH_CALL_AFF_VERIF(opt = ,_Tak(expression), 66, cplus)){
#line 3537 "cplus.met"
#line 3538 "cplus.met"
                ReplaceTree(statTree ,1 ,opt );
#line 3538 "cplus.met"
#line 3538 "cplus.met"
            }
#line 3538 "cplus.met"
#line 3539 "cplus.met"
            (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3539 "cplus.met"
            if (  !SEE_TOKEN( PVIR,";") || !(CommTerm(),1)) {
#line 3539 "cplus.met"
                MulFreeTree(3,opt,stat,statTree);
                TOKEN_EXIT(statement_exit,";")
#line 3539 "cplus.met"
            } else {
#line 3539 "cplus.met"
                tokenAhead = 0 ;
#line 3539 "cplus.met"
            }
#line 3539 "cplus.met"
#line 3539 "cplus.met"
            break;
#line 3539 "cplus.met"
#line 3541 "cplus.met"
        case SWITCH : 
#line 3541 "cplus.met"
            tokenAhead = 0 ;
#line 3541 "cplus.met"
            CommTerm();
#line 3541 "cplus.met"
#line 3542 "cplus.met"
#line 3543 "cplus.met"
            (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3543 "cplus.met"
            if (  !SEE_TOKEN( POUV,"(") || !(CommTerm(),1)) {
#line 3543 "cplus.met"
                MulFreeTree(3,opt,stat,statTree);
                TOKEN_EXIT(statement_exit,"(")
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
                PPTREE _ptTree0=0,_ptRes0=0;
#line 3544 "cplus.met"
                _ptRes0= MakeTree(SWITCH, 2);
#line 3544 "cplus.met"
                if ( (_ptTree0=NQUICK_CALL(_Tak(expression)(error_free), 66, cplus))== (PPTREE) -1 ) {
#line 3544 "cplus.met"
                    MulFreeTree(5,_ptRes0,_ptTree0,opt,stat,statTree);
                    PROG_EXIT(statement_exit,"statement")
#line 3544 "cplus.met"
                }
#line 3544 "cplus.met"
                ReplaceTree(_ptRes0, 1, _ptTree0);
#line 3544 "cplus.met"
                statTree=_ptRes0;
#line 3544 "cplus.met"
            }
#line 3544 "cplus.met"
#line 3545 "cplus.met"
            (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3545 "cplus.met"
            if (  !SEE_TOKEN( PFER,")") || !(CommTerm(),1)) {
#line 3545 "cplus.met"
                MulFreeTree(3,opt,stat,statTree);
                TOKEN_EXIT(statement_exit,")")
#line 3545 "cplus.met"
            } else {
#line 3545 "cplus.met"
                tokenAhead = 0 ;
#line 3545 "cplus.met"
            }
#line 3545 "cplus.met"
#line 3546 "cplus.met"
            {
#line 3546 "cplus.met"
                switchContext = 0 ;
#line 3546 "cplus.met"
#line 3547 "cplus.met"
                {
#line 3547 "cplus.met"
                    PPTREE _ptTree0=0;
#line 3547 "cplus.met"
                    if ( (_ptTree0=NQUICK_CALL(_Tak(switch_list)(error_free), 148, cplus))== (PPTREE) -1 ) {
#line 3547 "cplus.met"
                        MulFreeTree(4,_ptTree0,opt,stat,statTree);
                        PROG_EXIT(statement_exit,"statement")
#line 3547 "cplus.met"
                    }
#line 3547 "cplus.met"
                    ReplaceTree(statTree , 2 , _ptTree0);
#line 3547 "cplus.met"
                }
#line 3547 "cplus.met"
                switchContext =  _oldswitchContext;
#line 3547 "cplus.met"
            }
#line 3547 "cplus.met"
#line 3547 "cplus.met"
            break;
#line 3547 "cplus.met"
#line 3549 "cplus.met"
        case WHILE : 
#line 3549 "cplus.met"
            tokenAhead = 0 ;
#line 3549 "cplus.met"
            CommTerm();
#line 3549 "cplus.met"
#line 3550 "cplus.met"
#line 3551 "cplus.met"
            (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3551 "cplus.met"
            if (  !SEE_TOKEN( POUV,"(") || !(CommTerm(),1)) {
#line 3551 "cplus.met"
                MulFreeTree(3,opt,stat,statTree);
                TOKEN_EXIT(statement_exit,"(")
#line 3551 "cplus.met"
            } else {
#line 3551 "cplus.met"
                tokenAhead = 0 ;
#line 3551 "cplus.met"
            }
#line 3551 "cplus.met"
#line 3552 "cplus.met"
            {
#line 3552 "cplus.met"
                PPTREE _ptTree0=0,_ptRes0=0;
#line 3552 "cplus.met"
                _ptRes0= MakeTree(WHILE, 2);
#line 3552 "cplus.met"
                if ( (_ptTree0=NQUICK_CALL(_Tak(expression)(error_free), 66, cplus))== (PPTREE) -1 ) {
#line 3552 "cplus.met"
                    MulFreeTree(5,_ptRes0,_ptTree0,opt,stat,statTree);
                    PROG_EXIT(statement_exit,"statement")
#line 3552 "cplus.met"
                }
#line 3552 "cplus.met"
                ReplaceTree(_ptRes0, 1, _ptTree0);
#line 3552 "cplus.met"
                statTree=_ptRes0;
#line 3552 "cplus.met"
            }
#line 3552 "cplus.met"
#line 3553 "cplus.met"
            (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3553 "cplus.met"
            if (  !SEE_TOKEN( PFER,")") || !(CommTerm(),1)) {
#line 3553 "cplus.met"
                MulFreeTree(3,opt,stat,statTree);
                TOKEN_EXIT(statement_exit,")")
#line 3553 "cplus.met"
            } else {
#line 3553 "cplus.met"
                tokenAhead = 0 ;
#line 3553 "cplus.met"
            }
#line 3553 "cplus.met"
#line 3554 "cplus.met"
            {
#line 3554 "cplus.met"
                switchContext = 0 ;
#line 3554 "cplus.met"
#line 3555 "cplus.met"
                {
#line 3555 "cplus.met"
                    PPTREE _ptTree0=0;
#line 3555 "cplus.met"
                    if ( (_ptTree0=NQUICK_CALL(_Tak(statement)(error_free), 144, cplus))== (PPTREE) -1 ) {
#line 3555 "cplus.met"
                        MulFreeTree(4,_ptTree0,opt,stat,statTree);
                        PROG_EXIT(statement_exit,"statement")
#line 3555 "cplus.met"
                    }
#line 3555 "cplus.met"
                    ReplaceTree(statTree , 2 , _ptTree0);
#line 3555 "cplus.met"
                }
#line 3555 "cplus.met"
                switchContext =  _oldswitchContext;
#line 3555 "cplus.met"
            }
#line 3555 "cplus.met"
#line 3555 "cplus.met"
            break;
#line 3555 "cplus.met"
#line 3557 "cplus.met"
        case FORALLSONS : 
#line 3557 "cplus.met"
            tokenAhead = 0 ;
#line 3557 "cplus.met"
            CommTerm();
#line 3557 "cplus.met"
#line 3558 "cplus.met"
#line 3559 "cplus.met"
            (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3559 "cplus.met"
            if (  !SEE_TOKEN( POUV,"(") || !(CommTerm(),1)) {
#line 3559 "cplus.met"
                MulFreeTree(3,opt,stat,statTree);
                TOKEN_EXIT(statement_exit,"(")
#line 3559 "cplus.met"
            } else {
#line 3559 "cplus.met"
                tokenAhead = 0 ;
#line 3559 "cplus.met"
            }
#line 3559 "cplus.met"
#line 3560 "cplus.met"
            {
#line 3560 "cplus.met"
                PPTREE _ptTree0=0,_ptRes0=0;
#line 3560 "cplus.met"
                _ptRes0= MakeTree(FORALLSONS, 2);
#line 3560 "cplus.met"
                {
#line 3560 "cplus.met"
                    PPTREE _ptTree1=0,_ptRes1=0;
#line 3560 "cplus.met"
                    _ptRes1= MakeTree(IDENT, 1);
#line 3560 "cplus.met"
                    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3560 "cplus.met"
                    if ( ! TERM_OR_META(IDENT,"IDENT") || !(BUILD_TERM_META(_ptTree1))) {
#line 3560 "cplus.met"
                        MulFreeTree(7,_ptRes1,_ptTree1,_ptRes0,_ptTree0,opt,stat,statTree);
                        TOKEN_EXIT(statement_exit,"IDENT")
#line 3560 "cplus.met"
                    } else {
#line 3560 "cplus.met"
                        tokenAhead = 0 ;
#line 3560 "cplus.met"
                    }
#line 3560 "cplus.met"
                    ReplaceTree(_ptRes1, 1, _ptTree1);
#line 3560 "cplus.met"
                    _ptTree0=_ptRes1;
#line 3560 "cplus.met"
                }
#line 3560 "cplus.met"
                ReplaceTree(_ptRes0, 1, _ptTree0);
#line 3560 "cplus.met"
                statTree=_ptRes0;
#line 3560 "cplus.met"
            }
#line 3560 "cplus.met"
#line 3561 "cplus.met"
            (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3561 "cplus.met"
            if (  !SEE_TOKEN( VIRG,",") || !(CommTerm(),1)) {
#line 3561 "cplus.met"
                MulFreeTree(3,opt,stat,statTree);
                TOKEN_EXIT(statement_exit,",")
#line 3561 "cplus.met"
            } else {
#line 3561 "cplus.met"
                tokenAhead = 0 ;
#line 3561 "cplus.met"
            }
#line 3561 "cplus.met"
#line 3562 "cplus.met"
            {
#line 3562 "cplus.met"
                switchContext = 0 ;
#line 3562 "cplus.met"
#line 3563 "cplus.met"
                if (! (NPUSH_CALL_AFF_VERIF(stat = ,_Tak(statement), 144, cplus))){
#line 3563 "cplus.met"
#line 3564 "cplus.met"
                    if ( (stat=NQUICK_CALL(_Tak(expression)(error_free), 66, cplus))== (PPTREE) -1 ) {
#line 3564 "cplus.met"
                        MulFreeTree(3,opt,stat,statTree);
                        PROG_EXIT(statement_exit,"statement")
#line 3564 "cplus.met"
                    }
#line 3564 "cplus.met"
                }
#line 3564 "cplus.met"
                switchContext =  _oldswitchContext;
#line 3564 "cplus.met"
            }
#line 3564 "cplus.met"
#line 3565 "cplus.met"
            ReplaceTree(statTree ,2 ,stat );
#line 3565 "cplus.met"
#line 3566 "cplus.met"
            (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3566 "cplus.met"
            if (  !SEE_TOKEN( PFER,")") || !(CommTerm(),1)) {
#line 3566 "cplus.met"
                MulFreeTree(3,opt,stat,statTree);
                TOKEN_EXIT(statement_exit,")")
#line 3566 "cplus.met"
            } else {
#line 3566 "cplus.met"
                tokenAhead = 0 ;
#line 3566 "cplus.met"
            }
#line 3566 "cplus.met"
#line 3566 "cplus.met"
            break;
#line 3566 "cplus.met"
#line 3568 "cplus.met"
        case THROW : 
#line 3568 "cplus.met"
            tokenAhead = 0 ;
#line 3568 "cplus.met"
            CommTerm();
#line 3568 "cplus.met"
#line 3569 "cplus.met"
#line 3570 "cplus.met"
            {
#line 3570 "cplus.met"
                PPTREE _ptRes0=0;
#line 3570 "cplus.met"
                _ptRes0= MakeTree(THROW_ANSI, 1);
#line 3570 "cplus.met"
                statTree=_ptRes0;
#line 3570 "cplus.met"
            }
#line 3570 "cplus.met"
#line 3571 "cplus.met"
            if (NPUSH_CALL_AFF_VERIF(opt = ,_Tak(expression), 66, cplus)){
#line 3571 "cplus.met"
#line 3572 "cplus.met"
                ReplaceTree(statTree ,1 ,opt );
#line 3572 "cplus.met"
#line 3572 "cplus.met"
            }
#line 3572 "cplus.met"
#line 3573 "cplus.met"
            (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3573 "cplus.met"
            if (  !SEE_TOKEN( PVIR,";") || !(CommTerm(),1)) {
#line 3573 "cplus.met"
                MulFreeTree(3,opt,stat,statTree);
                TOKEN_EXIT(statement_exit,";")
#line 3573 "cplus.met"
            } else {
#line 3573 "cplus.met"
                tokenAhead = 0 ;
#line 3573 "cplus.met"
            }
#line 3573 "cplus.met"
#line 3573 "cplus.met"
            break;
#line 3573 "cplus.met"
#line 3575 "cplus.met"
        case TRY : 
#line 3575 "cplus.met"
#line 3575 "cplus.met"
            if ( (statTree=NQUICK_CALL(_Tak(exception_ansi)(error_free), 63, cplus))== (PPTREE) -1 ) {
#line 3575 "cplus.met"
                MulFreeTree(3,opt,stat,statTree);
                PROG_EXIT(statement_exit,"statement")
#line 3575 "cplus.met"
            }
#line 3575 "cplus.met"
            break;
#line 3575 "cplus.met"
#line 3576 "cplus.met"
        case META : 
#line 3576 "cplus.met"
#line 3577 "cplus.met"
            if (NPUSH_CALL_VERIF(_Tak(label_beg), 91, cplus)){
#line 3577 "cplus.met"
#line 3578 "cplus.met"
#line 3579 "cplus.met"
                {
#line 3579 "cplus.met"
                    PPTREE _ptTree0=0,_ptRes0=0;
#line 3579 "cplus.met"
                    _ptRes0= MakeTree(LABEL, 2);
#line 3579 "cplus.met"
                    {
#line 3579 "cplus.met"
                        PPTREE _ptTree1=0,_ptRes1=0;
#line 3579 "cplus.met"
                        _ptRes1= MakeTree(IDENT, 1);
#line 3579 "cplus.met"
                        (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3579 "cplus.met"
                        if ( ! TERM_OR_META(IDENT,"IDENT") || !(BUILD_TERM_META(_ptTree1))) {
#line 3579 "cplus.met"
                            MulFreeTree(7,_ptRes1,_ptTree1,_ptRes0,_ptTree0,opt,stat,statTree);
                            TOKEN_EXIT(statement_exit,"IDENT")
#line 3579 "cplus.met"
                        } else {
#line 3579 "cplus.met"
                            tokenAhead = 0 ;
#line 3579 "cplus.met"
                        }
#line 3579 "cplus.met"
                        ReplaceTree(_ptRes1, 1, _ptTree1);
#line 3579 "cplus.met"
                        _ptTree0=_ptRes1;
#line 3579 "cplus.met"
                    }
#line 3579 "cplus.met"
                    ReplaceTree(_ptRes0, 1, _ptTree0);
#line 3579 "cplus.met"
                    statTree=_ptRes0;
#line 3579 "cplus.met"
                }
#line 3579 "cplus.met"
#line 3580 "cplus.met"
                (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3580 "cplus.met"
                if (  !SEE_TOKEN( DPOI,":") || !(CommTerm(),1)) {
#line 3580 "cplus.met"
                    MulFreeTree(3,opt,stat,statTree);
                    TOKEN_EXIT(statement_exit,":")
#line 3580 "cplus.met"
                } else {
#line 3580 "cplus.met"
                    tokenAhead = 0 ;
#line 3580 "cplus.met"
                }
#line 3580 "cplus.met"
#line 3581 "cplus.met"
                {
#line 3581 "cplus.met"
                    switchContext = 0 ;
#line 3581 "cplus.met"
#line 3582 "cplus.met"
                    {
#line 3582 "cplus.met"
                        PPTREE _ptTree0=0;
#line 3582 "cplus.met"
                        if ( (_ptTree0=NQUICK_CALL(_Tak(statement)(error_free), 144, cplus))== (PPTREE) -1 ) {
#line 3582 "cplus.met"
                            MulFreeTree(4,_ptTree0,opt,stat,statTree);
                            PROG_EXIT(statement_exit,"statement")
#line 3582 "cplus.met"
                        }
#line 3582 "cplus.met"
                        ReplaceTree(statTree , 2 , _ptTree0);
#line 3582 "cplus.met"
                    }
#line 3582 "cplus.met"
                    switchContext =  _oldswitchContext;
#line 3582 "cplus.met"
                }
#line 3582 "cplus.met"
#line 3582 "cplus.met"
#line 3582 "cplus.met"
            } else {
#line 3582 "cplus.met"
#line 3585 "cplus.met"
                if (NPUSH_CALL_VERIF(_Tak(ident_mul), 82, cplus)){
#line 3585 "cplus.met"
#line 3587 "cplus.met"
                    
#line 3587 "cplus.met"
                    MulFreeTree(3,opt,stat,statTree);
                    LEX_EXIT ("",0);
#line 3587 "cplus.met"
                    goto statement_exit;
#line 3587 "cplus.met"
#line 3588 "cplus.met"
                } else {
#line 3588 "cplus.met"
#line 3590 "cplus.met"
#line 3591 "cplus.met"
                    if ( (statTree=NQUICK_CALL(_Tak(expression)(error_free), 66, cplus))== (PPTREE) -1 ) {
#line 3591 "cplus.met"
                        MulFreeTree(3,opt,stat,statTree);
                        PROG_EXIT(statement_exit,"statement")
#line 3591 "cplus.met"
                    }
#line 3591 "cplus.met"
#line 3592 "cplus.met"
                    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3592 "cplus.met"
                    if (  !SEE_TOKEN( PVIR,";") || !(CommTerm(),1)) {
#line 3592 "cplus.met"
                        MulFreeTree(3,opt,stat,statTree);
                        TOKEN_EXIT(statement_exit,";")
#line 3592 "cplus.met"
                    } else {
#line 3592 "cplus.met"
                        tokenAhead = 0 ;
#line 3592 "cplus.met"
                    }
#line 3592 "cplus.met"
#line 3592 "cplus.met"
                }
#line 3592 "cplus.met"
            }
#line 3592 "cplus.met"
            break;
#line 3592 "cplus.met"
#line 3596 "cplus.met"
        case CASE : 
#line 3596 "cplus.met"
#line 3597 "cplus.met"
            if (! (switchContext)){
#line 3597 "cplus.met"
#line 3598 "cplus.met"
                
#line 3598 "cplus.met"
                MulFreeTree(3,opt,stat,statTree);
                LEX_EXIT ("",0);
#line 3598 "cplus.met"
                goto statement_exit;
#line 3598 "cplus.met"
#line 3598 "cplus.met"
            } else {
#line 3598 "cplus.met"
#line 3600 "cplus.met"
                {
#line 3600 "cplus.met"
                    PPTREE _ptTree0=0;
#line 3600 "cplus.met"
                    if ( (_ptTree0=NQUICK_CALL(_Tak(switch_elem)(error_free), 147, cplus))== (PPTREE) -1 ) {
#line 3600 "cplus.met"
                        MulFreeTree(4,_ptTree0,opt,stat,statTree);
                        PROG_EXIT(statement_exit,"statement")
#line 3600 "cplus.met"
                    }
#line 3600 "cplus.met"
                    _retValue =_ptTree0;
#line 3600 "cplus.met"
                    goto statement_ret;
#line 3600 "cplus.met"
                }
#line 3600 "cplus.met"
            }
#line 3600 "cplus.met"
            break;
#line 3600 "cplus.met"
#line 3601 "cplus.met"
        case DEFAULT : 
#line 3601 "cplus.met"
#line 3602 "cplus.met"
            if (! (switchContext)){
#line 3602 "cplus.met"
#line 3603 "cplus.met"
                
#line 3603 "cplus.met"
                MulFreeTree(3,opt,stat,statTree);
                LEX_EXIT ("",0);
#line 3603 "cplus.met"
                goto statement_exit;
#line 3603 "cplus.met"
#line 3603 "cplus.met"
            } else {
#line 3603 "cplus.met"
#line 3605 "cplus.met"
                {
#line 3605 "cplus.met"
                    PPTREE _ptTree0=0;
#line 3605 "cplus.met"
                    if ( (_ptTree0=NQUICK_CALL(_Tak(switch_elem)(error_free), 147, cplus))== (PPTREE) -1 ) {
#line 3605 "cplus.met"
                        MulFreeTree(4,_ptTree0,opt,stat,statTree);
                        PROG_EXIT(statement_exit,"statement")
#line 3605 "cplus.met"
                    }
#line 3605 "cplus.met"
                    _retValue =_ptTree0;
#line 3605 "cplus.met"
                    goto statement_ret;
#line 3605 "cplus.met"
                }
#line 3605 "cplus.met"
            }
#line 3605 "cplus.met"
            break;
#line 3605 "cplus.met"
#line 3606 "cplus.met"
        case IDENT : 
#line 3606 "cplus.met"
#line 3607 "cplus.met"
            (tokenAhead == 14|| (the_exit(),TRACE_LEX(1)));
#line 3607 "cplus.met"
            switch( lexEl.Value) {
#line 3607 "cplus.met"
#line 3608 "cplus.met"
                case META : 
#line 3608 "cplus.met"
                case FUNC_SPEC : 
#line 3608 "cplus.met"
#line 3609 "cplus.met"
#line 3610 "cplus.met"
                    {
#line 3610 "cplus.met"
                        PPTREE _ptTree0=0,_ptRes0=0;
#line 3610 "cplus.met"
                        _ptRes0= MakeTree(FUNC_SPEC, 2);
#line 3610 "cplus.met"
                        {
#line 3610 "cplus.met"
                            PPTREE _ptTree1=0,_ptRes1=0;
#line 3610 "cplus.met"
                            _ptRes1= MakeTree(IDENT, 1);
#line 3610 "cplus.met"
                            (tokenAhead == 14|| (the_exit(),TRACE_LEX(1)));
#line 3610 "cplus.met"
                            if ( ! TERM_OR_META(FUNC_SPEC,"FUNC_SPEC") || !(BUILD_TERM_META(_ptTree1))) {
#line 3610 "cplus.met"
                                MulFreeTree(7,_ptRes1,_ptTree1,_ptRes0,_ptTree0,opt,stat,statTree);
                                TOKEN_EXIT(statement_exit,"FUNC_SPEC")
#line 3610 "cplus.met"
                            } else {
#line 3610 "cplus.met"
                                tokenAhead = 0 ;
#line 3610 "cplus.met"
                            }
#line 3610 "cplus.met"
                            ReplaceTree(_ptRes1, 1, _ptTree1);
#line 3610 "cplus.met"
                            _ptTree0=_ptRes1;
#line 3610 "cplus.met"
                        }
#line 3610 "cplus.met"
                        ReplaceTree(_ptRes0, 1, _ptTree0);
#line 3610 "cplus.met"
                        statTree=_ptRes0;
#line 3610 "cplus.met"
                    }
#line 3610 "cplus.met"
#line 3611 "cplus.met"
                    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3611 "cplus.met"
                    if (  !SEE_TOKEN( POUV,"(") || !(CommTerm(),1)) {
#line 3611 "cplus.met"
                        MulFreeTree(3,opt,stat,statTree);
                        TOKEN_EXIT(statement_exit,"(")
#line 3611 "cplus.met"
                    } else {
#line 3611 "cplus.met"
                        tokenAhead = 0 ;
#line 3611 "cplus.met"
                    }
#line 3611 "cplus.met"
#line 3612 "cplus.met"
                    {
#line 3612 "cplus.met"
                        PPTREE _ptTree0=0;
#line 3612 "cplus.met"
                        if ( (_ptTree0=NQUICK_CALL(_Tak(expression)(error_free), 66, cplus))== (PPTREE) -1 ) {
#line 3612 "cplus.met"
                            MulFreeTree(4,_ptTree0,opt,stat,statTree);
                            PROG_EXIT(statement_exit,"statement")
#line 3612 "cplus.met"
                        }
#line 3612 "cplus.met"
                        ReplaceTree(statTree , 2 , _ptTree0);
#line 3612 "cplus.met"
                    }
#line 3612 "cplus.met"
#line 3613 "cplus.met"
                    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3613 "cplus.met"
                    if (  !SEE_TOKEN( PFER,")") || !(CommTerm(),1)) {
#line 3613 "cplus.met"
                        MulFreeTree(3,opt,stat,statTree);
                        TOKEN_EXIT(statement_exit,")")
#line 3613 "cplus.met"
                    } else {
#line 3613 "cplus.met"
                        tokenAhead = 0 ;
#line 3613 "cplus.met"
                    }
#line 3613 "cplus.met"
#line 3613 "cplus.met"
                    break;
#line 3613 "cplus.met"
#line 3618 "cplus.met"
                default : 
#line 3618 "cplus.met"
#line 3616 "cplus.met"
                    if (NPUSH_CALL_VERIF(_Tak(label_beg), 91, cplus)){
#line 3616 "cplus.met"
#line 3617 "cplus.met"
#line 3618 "cplus.met"
                        {
#line 3618 "cplus.met"
                            PPTREE _ptTree0=0,_ptRes0=0;
#line 3618 "cplus.met"
                            _ptRes0= MakeTree(LABEL, 2);
#line 3618 "cplus.met"
                            {
#line 3618 "cplus.met"
                                PPTREE _ptTree1=0,_ptRes1=0;
#line 3618 "cplus.met"
                                _ptRes1= MakeTree(IDENT, 1);
#line 3618 "cplus.met"
                                (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3618 "cplus.met"
                                if ( ! TERM_OR_META(IDENT,"IDENT") || !(BUILD_TERM_META(_ptTree1))) {
#line 3618 "cplus.met"
                                    MulFreeTree(7,_ptRes1,_ptTree1,_ptRes0,_ptTree0,opt,stat,statTree);
                                    TOKEN_EXIT(statement_exit,"IDENT")
#line 3618 "cplus.met"
                                } else {
#line 3618 "cplus.met"
                                    tokenAhead = 0 ;
#line 3618 "cplus.met"
                                }
#line 3618 "cplus.met"
                                ReplaceTree(_ptRes1, 1, _ptTree1);
#line 3618 "cplus.met"
                                _ptTree0=_ptRes1;
#line 3618 "cplus.met"
                            }
#line 3618 "cplus.met"
                            ReplaceTree(_ptRes0, 1, _ptTree0);
#line 3618 "cplus.met"
                            statTree=_ptRes0;
#line 3618 "cplus.met"
                        }
#line 3618 "cplus.met"
#line 3619 "cplus.met"
                        (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3619 "cplus.met"
                        if (  !SEE_TOKEN( DPOI,":") || !(CommTerm(),1)) {
#line 3619 "cplus.met"
                            MulFreeTree(3,opt,stat,statTree);
                            TOKEN_EXIT(statement_exit,":")
#line 3619 "cplus.met"
                        } else {
#line 3619 "cplus.met"
                            tokenAhead = 0 ;
#line 3619 "cplus.met"
                        }
#line 3619 "cplus.met"
#line 3620 "cplus.met"
                        {
#line 3620 "cplus.met"
                            switchContext = 0 ;
#line 3620 "cplus.met"
#line 3621 "cplus.met"
                            {
#line 3621 "cplus.met"
                                PPTREE _ptTree0=0;
#line 3621 "cplus.met"
                                if ( (_ptTree0=NQUICK_CALL(_Tak(statement)(error_free), 144, cplus))== (PPTREE) -1 ) {
#line 3621 "cplus.met"
                                    MulFreeTree(4,_ptTree0,opt,stat,statTree);
                                    PROG_EXIT(statement_exit,"statement")
#line 3621 "cplus.met"
                                }
#line 3621 "cplus.met"
                                ReplaceTree(statTree , 2 , _ptTree0);
#line 3621 "cplus.met"
                            }
#line 3621 "cplus.met"
                            switchContext =  _oldswitchContext;
#line 3621 "cplus.met"
                        }
#line 3621 "cplus.met"
#line 3621 "cplus.met"
#line 3621 "cplus.met"
                    } else {
#line 3621 "cplus.met"
#line 3624 "cplus.met"
                        if (NPUSH_CALL_VERIF(_Tak(ident_mul), 82, cplus)){
#line 3624 "cplus.met"
#line 3627 "cplus.met"
                            
#line 3627 "cplus.met"
                            MulFreeTree(3,opt,stat,statTree);
                            LEX_EXIT ("",0);
#line 3627 "cplus.met"
                            goto statement_exit;
#line 3627 "cplus.met"
#line 3628 "cplus.met"
                        } else {
#line 3628 "cplus.met"
#line 3630 "cplus.met"
#line 3631 "cplus.met"
                            if ( (statTree=NQUICK_CALL(_Tak(statement_expression)(error_free), 145, cplus))== (PPTREE) -1 ) {
#line 3631 "cplus.met"
                                MulFreeTree(3,opt,stat,statTree);
                                PROG_EXIT(statement_exit,"statement")
#line 3631 "cplus.met"
                            }
#line 3631 "cplus.met"
#line 3631 "cplus.met"
                        }
#line 3631 "cplus.met"
                    }
#line 3631 "cplus.met"
                    break;
#line 3631 "cplus.met"
            }
#line 3631 "cplus.met"
            break;
#line 3631 "cplus.met"
#line 3637 "cplus.met"
        default : 
#line 3637 "cplus.met"
#line 3635 "cplus.met"
#line 3636 "cplus.met"
            if (NPUSH_CALL_VERIF(_Tak(ident_mul), 82, cplus)){
#line 3636 "cplus.met"
#line 3637 "cplus.met"
                
#line 3637 "cplus.met"
                MulFreeTree(3,opt,stat,statTree);
                LEX_EXIT ("",0);
#line 3637 "cplus.met"
                goto statement_exit;
#line 3637 "cplus.met"
#line 3637 "cplus.met"
            } else {
#line 3637 "cplus.met"
#line 3639 "cplus.met"
#line 3640 "cplus.met"
                if ( (statTree=NQUICK_CALL(_Tak(expression)(error_free), 66, cplus))== (PPTREE) -1 ) {
#line 3640 "cplus.met"
                    MulFreeTree(3,opt,stat,statTree);
                    PROG_EXIT(statement_exit,"statement")
#line 3640 "cplus.met"
                }
#line 3640 "cplus.met"
#line 3641 "cplus.met"
                (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3641 "cplus.met"
                if (  !SEE_TOKEN( PVIR,";") || !(CommTerm(),1)) {
#line 3641 "cplus.met"
                    MulFreeTree(3,opt,stat,statTree);
                    TOKEN_EXIT(statement_exit,";")
#line 3641 "cplus.met"
                } else {
#line 3641 "cplus.met"
                    tokenAhead = 0 ;
#line 3641 "cplus.met"
                }
#line 3641 "cplus.met"
#line 3641 "cplus.met"
            }
#line 3641 "cplus.met"
#line 3641 "cplus.met"
            break;
#line 3641 "cplus.met"
    }
#line 3641 "cplus.met"
#line 3645 "cplus.met"
    {
#line 3645 "cplus.met"
        _retValue = statTree ;
#line 3645 "cplus.met"
        goto statement_ret;
#line 3645 "cplus.met"
        
#line 3645 "cplus.met"
    }
#line 3645 "cplus.met"
#line 3645 "cplus.met"
#line 3645 "cplus.met"

#line 3646 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 3646 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 3646 "cplus.met"
switchContext =  _oldswitchContext;
#line 3646 "cplus.met"
return((PPTREE) 0);
#line 3646 "cplus.met"

#line 3646 "cplus.met"
statement_exit :
#line 3646 "cplus.met"

#line 3646 "cplus.met"
    _Debug = TRACE_RULE("statement",TRACE_EXIT,(PPTREE)0);
#line 3646 "cplus.met"
    _funcLevel--;
#line 3646 "cplus.met"
    switchContext =  _oldswitchContext;
#line 3646 "cplus.met"
    return((PPTREE) -1) ;
#line 3646 "cplus.met"

#line 3646 "cplus.met"
statement_ret :
#line 3646 "cplus.met"
    
#line 3646 "cplus.met"
    _Debug = TRACE_RULE("statement",TRACE_RETURN,_retValue);
#line 3646 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 3646 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 3646 "cplus.met"
    switchContext =  _oldswitchContext;
#line 3646 "cplus.met"
    return _retValue ;
#line 3646 "cplus.met"
}
#line 3646 "cplus.met"

#line 3646 "cplus.met"
