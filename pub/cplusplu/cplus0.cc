/*************************************************************************/
/*                                                                       */
/*        Produced by MetaGen version 2.0  -    1989-2006                 */
/*       Syntaxic Analyzer Meta Generator developped by                  */
/*                  Eric Lavillonniere                                   */
/*                                                                       */
/*************************************************************************/

#include "token.h"
#include "cplus.h"


#line 2757 "cplus.met"
PPTREE cplus::assignment_end ( int error_free)
#line 2757 "cplus.met"
{
#line 2757 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 2757 "cplus.met"
    int _value,_nbPre = 0 ;
#line 2757 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 2757 "cplus.met"
    int _Debug = TRACE_RULE("assignment_end",TRACE_ENTER,(PPTREE)0);
#line 2757 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 2757 "cplus.met"
#line 2758 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 2758 "cplus.met"
    switch( lexEl.Value) {
#line 2758 "cplus.met"
#line 2759 "cplus.met"
        case EGAL : 
#line 2759 "cplus.met"
            tokenAhead = 0 ;
#line 2759 "cplus.met"
            CommTerm();
#line 2759 "cplus.met"
#line 2759 "cplus.met"
            {
#line 2759 "cplus.met"
                PPTREE _ptTree0=0;
#line 2759 "cplus.met"
                {
#line 2759 "cplus.met"
                    PPTREE _ptTree1=0,_ptRes1=0;
#line 2759 "cplus.met"
                    _ptRes1= MakeTree(AFF, 2);
#line 2759 "cplus.met"
                    if ( (_ptTree1=NQUICK_CALL(_Tak(assignment_expression)(error_free), 21, cplus))== (PPTREE) -1 ) {
#line 2759 "cplus.met"
                        MulFreeTree(3,_ptRes1,_ptTree1,_ptTree0);
                        PROG_EXIT(assignment_end_exit,"assignment_end")
#line 2759 "cplus.met"
                    }
#line 2759 "cplus.met"
                    ReplaceTree(_ptRes1, 2, _ptTree1);
#line 2759 "cplus.met"
                    _ptTree0=_ptRes1;
#line 2759 "cplus.met"
                }
#line 2759 "cplus.met"
                _retValue =_ptTree0;
#line 2759 "cplus.met"
                goto assignment_end_ret;
#line 2759 "cplus.met"
            }
#line 2759 "cplus.met"
            break;
#line 2759 "cplus.met"
#line 2760 "cplus.met"
        case ETOIEGAL : 
#line 2760 "cplus.met"
            tokenAhead = 0 ;
#line 2760 "cplus.met"
            CommTerm();
#line 2760 "cplus.met"
#line 2760 "cplus.met"
            {
#line 2760 "cplus.met"
                PPTREE _ptTree0=0;
#line 2760 "cplus.met"
                {
#line 2760 "cplus.met"
                    PPTREE _ptTree1=0,_ptRes1=0;
#line 2760 "cplus.met"
                    _ptRes1= MakeTree(MUL_AFF, 2);
#line 2760 "cplus.met"
                    if ( (_ptTree1=NQUICK_CALL(_Tak(assignment_expression)(error_free), 21, cplus))== (PPTREE) -1 ) {
#line 2760 "cplus.met"
                        MulFreeTree(3,_ptRes1,_ptTree1,_ptTree0);
                        PROG_EXIT(assignment_end_exit,"assignment_end")
#line 2760 "cplus.met"
                    }
#line 2760 "cplus.met"
                    ReplaceTree(_ptRes1, 2, _ptTree1);
#line 2760 "cplus.met"
                    _ptTree0=_ptRes1;
#line 2760 "cplus.met"
                }
#line 2760 "cplus.met"
                _retValue =_ptTree0;
#line 2760 "cplus.met"
                goto assignment_end_ret;
#line 2760 "cplus.met"
            }
#line 2760 "cplus.met"
            break;
#line 2760 "cplus.met"
#line 2761 "cplus.met"
        case META : 
#line 2761 "cplus.met"
        case SLASEGAL : 
#line 2761 "cplus.met"
            tokenAhead = 0 ;
#line 2761 "cplus.met"
            CommTerm();
#line 2761 "cplus.met"
#line 2761 "cplus.met"
            {
#line 2761 "cplus.met"
                PPTREE _ptTree0=0;
#line 2761 "cplus.met"
                {
#line 2761 "cplus.met"
                    PPTREE _ptTree1=0,_ptRes1=0;
#line 2761 "cplus.met"
                    _ptRes1= MakeTree(DIV_AFF, 2);
#line 2761 "cplus.met"
                    if ( (_ptTree1=NQUICK_CALL(_Tak(assignment_expression)(error_free), 21, cplus))== (PPTREE) -1 ) {
#line 2761 "cplus.met"
                        MulFreeTree(3,_ptRes1,_ptTree1,_ptTree0);
                        PROG_EXIT(assignment_end_exit,"assignment_end")
#line 2761 "cplus.met"
                    }
#line 2761 "cplus.met"
                    ReplaceTree(_ptRes1, 2, _ptTree1);
#line 2761 "cplus.met"
                    _ptTree0=_ptRes1;
#line 2761 "cplus.met"
                }
#line 2761 "cplus.met"
                _retValue =_ptTree0;
#line 2761 "cplus.met"
                goto assignment_end_ret;
#line 2761 "cplus.met"
            }
#line 2761 "cplus.met"
            break;
#line 2761 "cplus.met"
#line 2762 "cplus.met"
        case POURCEGAL : 
#line 2762 "cplus.met"
            tokenAhead = 0 ;
#line 2762 "cplus.met"
            CommTerm();
#line 2762 "cplus.met"
#line 2762 "cplus.met"
            {
#line 2762 "cplus.met"
                PPTREE _ptTree0=0;
#line 2762 "cplus.met"
                {
#line 2762 "cplus.met"
                    PPTREE _ptTree1=0,_ptRes1=0;
#line 2762 "cplus.met"
                    _ptRes1= MakeTree(REM_AFF, 2);
#line 2762 "cplus.met"
                    if ( (_ptTree1=NQUICK_CALL(_Tak(assignment_expression)(error_free), 21, cplus))== (PPTREE) -1 ) {
#line 2762 "cplus.met"
                        MulFreeTree(3,_ptRes1,_ptTree1,_ptTree0);
                        PROG_EXIT(assignment_end_exit,"assignment_end")
#line 2762 "cplus.met"
                    }
#line 2762 "cplus.met"
                    ReplaceTree(_ptRes1, 2, _ptTree1);
#line 2762 "cplus.met"
                    _ptTree0=_ptRes1;
#line 2762 "cplus.met"
                }
#line 2762 "cplus.met"
                _retValue =_ptTree0;
#line 2762 "cplus.met"
                goto assignment_end_ret;
#line 2762 "cplus.met"
            }
#line 2762 "cplus.met"
            break;
#line 2762 "cplus.met"
#line 2763 "cplus.met"
        case PLUSEGAL : 
#line 2763 "cplus.met"
            tokenAhead = 0 ;
#line 2763 "cplus.met"
            CommTerm();
#line 2763 "cplus.met"
#line 2763 "cplus.met"
            {
#line 2763 "cplus.met"
                PPTREE _ptTree0=0;
#line 2763 "cplus.met"
                {
#line 2763 "cplus.met"
                    PPTREE _ptTree1=0,_ptRes1=0;
#line 2763 "cplus.met"
                    _ptRes1= MakeTree(PLU_AFF, 2);
#line 2763 "cplus.met"
                    if ( (_ptTree1=NQUICK_CALL(_Tak(assignment_expression)(error_free), 21, cplus))== (PPTREE) -1 ) {
#line 2763 "cplus.met"
                        MulFreeTree(3,_ptRes1,_ptTree1,_ptTree0);
                        PROG_EXIT(assignment_end_exit,"assignment_end")
#line 2763 "cplus.met"
                    }
#line 2763 "cplus.met"
                    ReplaceTree(_ptRes1, 2, _ptTree1);
#line 2763 "cplus.met"
                    _ptTree0=_ptRes1;
#line 2763 "cplus.met"
                }
#line 2763 "cplus.met"
                _retValue =_ptTree0;
#line 2763 "cplus.met"
                goto assignment_end_ret;
#line 2763 "cplus.met"
            }
#line 2763 "cplus.met"
            break;
#line 2763 "cplus.met"
#line 2764 "cplus.met"
        case TIREEGAL : 
#line 2764 "cplus.met"
            tokenAhead = 0 ;
#line 2764 "cplus.met"
            CommTerm();
#line 2764 "cplus.met"
#line 2764 "cplus.met"
            {
#line 2764 "cplus.met"
                PPTREE _ptTree0=0;
#line 2764 "cplus.met"
                {
#line 2764 "cplus.met"
                    PPTREE _ptTree1=0,_ptRes1=0;
#line 2764 "cplus.met"
                    _ptRes1= MakeTree(MIN_AFF, 2);
#line 2764 "cplus.met"
                    if ( (_ptTree1=NQUICK_CALL(_Tak(assignment_expression)(error_free), 21, cplus))== (PPTREE) -1 ) {
#line 2764 "cplus.met"
                        MulFreeTree(3,_ptRes1,_ptTree1,_ptTree0);
                        PROG_EXIT(assignment_end_exit,"assignment_end")
#line 2764 "cplus.met"
                    }
#line 2764 "cplus.met"
                    ReplaceTree(_ptRes1, 2, _ptTree1);
#line 2764 "cplus.met"
                    _ptTree0=_ptRes1;
#line 2764 "cplus.met"
                }
#line 2764 "cplus.met"
                _retValue =_ptTree0;
#line 2764 "cplus.met"
                goto assignment_end_ret;
#line 2764 "cplus.met"
            }
#line 2764 "cplus.met"
            break;
#line 2764 "cplus.met"
#line 2765 "cplus.met"
        case INFEINFEEGAL : 
#line 2765 "cplus.met"
            tokenAhead = 0 ;
#line 2765 "cplus.met"
            CommTerm();
#line 2765 "cplus.met"
#line 2765 "cplus.met"
            {
#line 2765 "cplus.met"
                PPTREE _ptTree0=0;
#line 2765 "cplus.met"
                {
#line 2765 "cplus.met"
                    PPTREE _ptTree1=0,_ptRes1=0;
#line 2765 "cplus.met"
                    _ptRes1= MakeTree(LSH_AFF, 2);
#line 2765 "cplus.met"
                    if ( (_ptTree1=NQUICK_CALL(_Tak(assignment_expression)(error_free), 21, cplus))== (PPTREE) -1 ) {
#line 2765 "cplus.met"
                        MulFreeTree(3,_ptRes1,_ptTree1,_ptTree0);
                        PROG_EXIT(assignment_end_exit,"assignment_end")
#line 2765 "cplus.met"
                    }
#line 2765 "cplus.met"
                    ReplaceTree(_ptRes1, 2, _ptTree1);
#line 2765 "cplus.met"
                    _ptTree0=_ptRes1;
#line 2765 "cplus.met"
                }
#line 2765 "cplus.met"
                _retValue =_ptTree0;
#line 2765 "cplus.met"
                goto assignment_end_ret;
#line 2765 "cplus.met"
            }
#line 2765 "cplus.met"
            break;
#line 2765 "cplus.met"
#line 2766 "cplus.met"
        case SUPESUPEEGAL : 
#line 2766 "cplus.met"
            tokenAhead = 0 ;
#line 2766 "cplus.met"
            CommTerm();
#line 2766 "cplus.met"
#line 2766 "cplus.met"
            {
#line 2766 "cplus.met"
                PPTREE _ptTree0=0;
#line 2766 "cplus.met"
                {
#line 2766 "cplus.met"
                    PPTREE _ptTree1=0,_ptRes1=0;
#line 2766 "cplus.met"
                    _ptRes1= MakeTree(RSH_AFF, 2);
#line 2766 "cplus.met"
                    if ( (_ptTree1=NQUICK_CALL(_Tak(assignment_expression)(error_free), 21, cplus))== (PPTREE) -1 ) {
#line 2766 "cplus.met"
                        MulFreeTree(3,_ptRes1,_ptTree1,_ptTree0);
                        PROG_EXIT(assignment_end_exit,"assignment_end")
#line 2766 "cplus.met"
                    }
#line 2766 "cplus.met"
                    ReplaceTree(_ptRes1, 2, _ptTree1);
#line 2766 "cplus.met"
                    _ptTree0=_ptRes1;
#line 2766 "cplus.met"
                }
#line 2766 "cplus.met"
                _retValue =_ptTree0;
#line 2766 "cplus.met"
                goto assignment_end_ret;
#line 2766 "cplus.met"
            }
#line 2766 "cplus.met"
            break;
#line 2766 "cplus.met"
#line 2767 "cplus.met"
        case ETCOEGAL : 
#line 2767 "cplus.met"
            tokenAhead = 0 ;
#line 2767 "cplus.met"
            CommTerm();
#line 2767 "cplus.met"
#line 2767 "cplus.met"
            {
#line 2767 "cplus.met"
                PPTREE _ptTree0=0;
#line 2767 "cplus.met"
                {
#line 2767 "cplus.met"
                    PPTREE _ptTree1=0,_ptRes1=0;
#line 2767 "cplus.met"
                    _ptRes1= MakeTree(AND_AFF, 2);
#line 2767 "cplus.met"
                    if ( (_ptTree1=NQUICK_CALL(_Tak(assignment_expression)(error_free), 21, cplus))== (PPTREE) -1 ) {
#line 2767 "cplus.met"
                        MulFreeTree(3,_ptRes1,_ptTree1,_ptTree0);
                        PROG_EXIT(assignment_end_exit,"assignment_end")
#line 2767 "cplus.met"
                    }
#line 2767 "cplus.met"
                    ReplaceTree(_ptRes1, 2, _ptTree1);
#line 2767 "cplus.met"
                    _ptTree0=_ptRes1;
#line 2767 "cplus.met"
                }
#line 2767 "cplus.met"
                _retValue =_ptTree0;
#line 2767 "cplus.met"
                goto assignment_end_ret;
#line 2767 "cplus.met"
            }
#line 2767 "cplus.met"
            break;
#line 2767 "cplus.met"
#line 2768 "cplus.met"
        case VBAREGAL : 
#line 2768 "cplus.met"
            tokenAhead = 0 ;
#line 2768 "cplus.met"
            CommTerm();
#line 2768 "cplus.met"
#line 2768 "cplus.met"
            {
#line 2768 "cplus.met"
                PPTREE _ptTree0=0;
#line 2768 "cplus.met"
                {
#line 2768 "cplus.met"
                    PPTREE _ptTree1=0,_ptRes1=0;
#line 2768 "cplus.met"
                    _ptRes1= MakeTree(OR_AFF, 2);
#line 2768 "cplus.met"
                    if ( (_ptTree1=NQUICK_CALL(_Tak(assignment_expression)(error_free), 21, cplus))== (PPTREE) -1 ) {
#line 2768 "cplus.met"
                        MulFreeTree(3,_ptRes1,_ptTree1,_ptTree0);
                        PROG_EXIT(assignment_end_exit,"assignment_end")
#line 2768 "cplus.met"
                    }
#line 2768 "cplus.met"
                    ReplaceTree(_ptRes1, 2, _ptTree1);
#line 2768 "cplus.met"
                    _ptTree0=_ptRes1;
#line 2768 "cplus.met"
                }
#line 2768 "cplus.met"
                _retValue =_ptTree0;
#line 2768 "cplus.met"
                goto assignment_end_ret;
#line 2768 "cplus.met"
            }
#line 2768 "cplus.met"
            break;
#line 2768 "cplus.met"
#line 2769 "cplus.met"
        case CHAPEGAL : 
#line 2769 "cplus.met"
            tokenAhead = 0 ;
#line 2769 "cplus.met"
            CommTerm();
#line 2769 "cplus.met"
#line 2769 "cplus.met"
            {
#line 2769 "cplus.met"
                PPTREE _ptTree0=0;
#line 2769 "cplus.met"
                {
#line 2769 "cplus.met"
                    PPTREE _ptTree1=0,_ptRes1=0;
#line 2769 "cplus.met"
                    _ptRes1= MakeTree(XOR_AFF, 2);
#line 2769 "cplus.met"
                    if ( (_ptTree1=NQUICK_CALL(_Tak(assignment_expression)(error_free), 21, cplus))== (PPTREE) -1 ) {
#line 2769 "cplus.met"
                        MulFreeTree(3,_ptRes1,_ptTree1,_ptTree0);
                        PROG_EXIT(assignment_end_exit,"assignment_end")
#line 2769 "cplus.met"
                    }
#line 2769 "cplus.met"
                    ReplaceTree(_ptRes1, 2, _ptTree1);
#line 2769 "cplus.met"
                    _ptTree0=_ptRes1;
#line 2769 "cplus.met"
                }
#line 2769 "cplus.met"
                _retValue =_ptTree0;
#line 2769 "cplus.met"
                goto assignment_end_ret;
#line 2769 "cplus.met"
            }
#line 2769 "cplus.met"
            break;
#line 2769 "cplus.met"
        default :
#line 2769 "cplus.met"
            CASE_EXIT(assignment_end_exit,"either = or *= or SLASEGAL or %= or += or -= or <<= or >>= or &= or |= or ^=")
#line 2769 "cplus.met"
            break;
#line 2769 "cplus.met"
    }
#line 2769 "cplus.met"
#line 2769 "cplus.met"
#line 2770 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2770 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 2770 "cplus.met"
return((PPTREE) 0);
#line 2770 "cplus.met"

#line 2770 "cplus.met"
assignment_end_exit :
#line 2770 "cplus.met"

#line 2770 "cplus.met"
    _Debug = TRACE_RULE("assignment_end",TRACE_EXIT,(PPTREE)0);
#line 2770 "cplus.met"
    _funcLevel--;
#line 2770 "cplus.met"
    return((PPTREE) -1) ;
#line 2770 "cplus.met"

#line 2770 "cplus.met"
assignment_end_ret :
#line 2770 "cplus.met"
    
#line 2770 "cplus.met"
    _Debug = TRACE_RULE("assignment_end",TRACE_RETURN,_retValue);
#line 2770 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2770 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 2770 "cplus.met"
    return _retValue ;
#line 2770 "cplus.met"
}
#line 2770 "cplus.met"

#line 2770 "cplus.met"
#line 2773 "cplus.met"
PPTREE cplus::assignment_expression ( int error_free)
#line 2773 "cplus.met"
{
#line 2773 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 2773 "cplus.met"
    int _value,_nbPre = 0 ;
#line 2773 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 2773 "cplus.met"
    int _Debug = TRACE_RULE("assignment_expression",TRACE_ENTER,(PPTREE)0);
#line 2773 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 2773 "cplus.met"
#line 2773 "cplus.met"
    PPTREE expTree = (PPTREE) 0,expFollow = (PPTREE) 0;
#line 2773 "cplus.met"
#line 2775 "cplus.met"
    if ( (expTree=NQUICK_CALL(_Tak(conditional_expression)(error_free), 34, cplus))== (PPTREE) -1 ) {
#line 2775 "cplus.met"
        MulFreeTree(2,expFollow,expTree);
        PROG_EXIT(assignment_expression_exit,"assignment_expression")
#line 2775 "cplus.met"
    }
#line 2775 "cplus.met"
#line 2776 "cplus.met"
    if (NPUSH_CALL_AFF_VERIF(expFollow = ,_Tak(assignment_end), 20, cplus)){
#line 2776 "cplus.met"
#line 2777 "cplus.met"
#line 2778 "cplus.met"
        ReplaceTree(expFollow ,1 ,expTree );
#line 2778 "cplus.met"
#line 2779 "cplus.met"
        expTree = expFollow ;
#line 2779 "cplus.met"
#line 2779 "cplus.met"
#line 2779 "cplus.met"
    }
#line 2779 "cplus.met"
#line 2781 "cplus.met"
    {
#line 2781 "cplus.met"
        _retValue = expTree ;
#line 2781 "cplus.met"
        goto assignment_expression_ret;
#line 2781 "cplus.met"
        
#line 2781 "cplus.met"
    }
#line 2781 "cplus.met"
#line 2781 "cplus.met"
#line 2781 "cplus.met"

#line 2782 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2782 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 2782 "cplus.met"
return((PPTREE) 0);
#line 2782 "cplus.met"

#line 2782 "cplus.met"
assignment_expression_exit :
#line 2782 "cplus.met"

#line 2782 "cplus.met"
    _Debug = TRACE_RULE("assignment_expression",TRACE_EXIT,(PPTREE)0);
#line 2782 "cplus.met"
    _funcLevel--;
#line 2782 "cplus.met"
    return((PPTREE) -1) ;
#line 2782 "cplus.met"

#line 2782 "cplus.met"
assignment_expression_ret :
#line 2782 "cplus.met"
    
#line 2782 "cplus.met"
    _Debug = TRACE_RULE("assignment_expression",TRACE_RETURN,_retValue);
#line 2782 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2782 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 2782 "cplus.met"
    return _retValue ;
#line 2782 "cplus.met"
}
#line 2782 "cplus.met"

#line 2782 "cplus.met"
#line 2271 "cplus.met"
PPTREE cplus::attribute_call ( int error_free)
#line 2271 "cplus.met"
{
#line 2271 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 2271 "cplus.met"
    int _value,_nbPre = 0 ;
#line 2271 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 2271 "cplus.met"
    int _Debug = TRACE_RULE("attribute_call",TRACE_ENTER,(PPTREE)0);
#line 2271 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 2271 "cplus.met"
#line 2271 "cplus.met"
    PPTREE retTree = (PPTREE) 0;
#line 2271 "cplus.met"
#line 2273 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 2273 "cplus.met"
    if (  !SEE_TOKEN( __ATTRIBUTE__,"__attribute__") || !(CommTerm(),1)) {
#line 2273 "cplus.met"
        MulFreeTree(1,retTree);
        TOKEN_EXIT(attribute_call_exit,"__attribute__")
#line 2273 "cplus.met"
    } else {
#line 2273 "cplus.met"
        tokenAhead = 0 ;
#line 2273 "cplus.met"
    }
#line 2273 "cplus.met"
#line 2274 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 2274 "cplus.met"
    if (  !SEE_TOKEN( POUV,"(") || !(CommTerm(),1)) {
#line 2274 "cplus.met"
        MulFreeTree(1,retTree);
        TOKEN_EXIT(attribute_call_exit,"(")
#line 2274 "cplus.met"
    } else {
#line 2274 "cplus.met"
        tokenAhead = 0 ;
#line 2274 "cplus.met"
    }
#line 2274 "cplus.met"
#line 2275 "cplus.met"
    {
#line 2275 "cplus.met"
        PPTREE _ptTree0=0,_ptRes0=0;
#line 2275 "cplus.met"
        _ptRes0= MakeTree(ATTRIBUTE_CALL, 1);
#line 2275 "cplus.met"
        if ( (_ptTree0=NQUICK_CALL(_Tak(expression)(error_free), 67, cplus))== (PPTREE) -1 ) {
#line 2275 "cplus.met"
            MulFreeTree(3,_ptRes0,_ptTree0,retTree);
            PROG_EXIT(attribute_call_exit,"attribute_call")
#line 2275 "cplus.met"
        }
#line 2275 "cplus.met"
        ReplaceTree(_ptRes0, 1, _ptTree0);
#line 2275 "cplus.met"
        retTree=_ptRes0;
#line 2275 "cplus.met"
    }
#line 2275 "cplus.met"
#line 2276 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 2276 "cplus.met"
    if (  !SEE_TOKEN( PFER,")") || !(CommTerm(),1)) {
#line 2276 "cplus.met"
        MulFreeTree(1,retTree);
        TOKEN_EXIT(attribute_call_exit,")")
#line 2276 "cplus.met"
    } else {
#line 2276 "cplus.met"
        tokenAhead = 0 ;
#line 2276 "cplus.met"
    }
#line 2276 "cplus.met"
#line 2277 "cplus.met"
    {
#line 2277 "cplus.met"
        _retValue = retTree ;
#line 2277 "cplus.met"
        goto attribute_call_ret;
#line 2277 "cplus.met"
        
#line 2277 "cplus.met"
    }
#line 2277 "cplus.met"
#line 2277 "cplus.met"
#line 2277 "cplus.met"

#line 2278 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2278 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 2278 "cplus.met"
return((PPTREE) 0);
#line 2278 "cplus.met"

#line 2278 "cplus.met"
attribute_call_exit :
#line 2278 "cplus.met"

#line 2278 "cplus.met"
    _Debug = TRACE_RULE("attribute_call",TRACE_EXIT,(PPTREE)0);
#line 2278 "cplus.met"
    _funcLevel--;
#line 2278 "cplus.met"
    return((PPTREE) -1) ;
#line 2278 "cplus.met"

#line 2278 "cplus.met"
attribute_call_ret :
#line 2278 "cplus.met"
    
#line 2278 "cplus.met"
    _Debug = TRACE_RULE("attribute_call",TRACE_RETURN,_retValue);
#line 2278 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2278 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 2278 "cplus.met"
    return _retValue ;
#line 2278 "cplus.met"
}
#line 2278 "cplus.met"

#line 2278 "cplus.met"
#line 1954 "cplus.met"
PPTREE cplus::base_specifier ( int error_free)
#line 1954 "cplus.met"
{
#line 1954 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 1954 "cplus.met"
    int _value,_nbPre = 0 ;
#line 1954 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 1954 "cplus.met"
    int _Debug = TRACE_RULE("base_specifier",TRACE_ENTER,(PPTREE)0);
#line 1954 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 1954 "cplus.met"
#line 1954 "cplus.met"
    PPTREE _addlist1 = (PPTREE) 0;
#line 1954 "cplus.met"
#line 1954 "cplus.met"
    PPTREE list = (PPTREE) 0;
#line 1954 "cplus.met"
#line 1954 "cplus.met"
    _addlist1 = list ;
#line 1954 "cplus.met"
#line 1956 "cplus.met"
    do {
#line 1956 "cplus.met"
#line 1957 "cplus.met"
        {
#line 1957 "cplus.met"
            PPTREE _ptTree0=0;
#line 1957 "cplus.met"
            if ( (_ptTree0=NQUICK_CALL(_Tak(base_specifier_elem)(error_free), 24, cplus))== (PPTREE) -1 ) {
#line 1957 "cplus.met"
                MulFreeTree(3,_ptTree0,_addlist1,list);
                PROG_EXIT(base_specifier_exit,"base_specifier")
#line 1957 "cplus.met"
            }
#line 1957 "cplus.met"
            _addlist1 =AddList(_addlist1 , _ptTree0);
#line 1957 "cplus.met"
        }
#line 1957 "cplus.met"
#line 1957 "cplus.met"
        if (list){
#line 1957 "cplus.met"
#line 1957 "cplus.met"
            _addlist1 = SonTree (_addlist1 ,2 );
#line 1957 "cplus.met"
        } else {
#line 1957 "cplus.met"
#line 1957 "cplus.met"
            list = _addlist1 ;
#line 1957 "cplus.met"
        }
#line 1957 "cplus.met"
#line 1957 "cplus.met"
#line 1958 "cplus.met"
    } while ( !(! ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN(VIRG,",") && (tokenAhead = 0,CommTerm(),1)))) ;
#line 1958 "cplus.met"
#line 1959 "cplus.met"
    {
#line 1959 "cplus.met"
        PPTREE _ptTree0=0;
#line 1959 "cplus.met"
        {
#line 1959 "cplus.met"
            PPTREE _ptRes1=0;
#line 1959 "cplus.met"
            _ptRes1= MakeTree(BASE_LIST, 1);
#line 1959 "cplus.met"
            ReplaceTree(_ptRes1, 1, list );
#line 1959 "cplus.met"
            _ptTree0=_ptRes1;
#line 1959 "cplus.met"
        }
#line 1959 "cplus.met"
        _retValue =_ptTree0;
#line 1959 "cplus.met"
        goto base_specifier_ret;
#line 1959 "cplus.met"
    }
#line 1959 "cplus.met"
#line 1959 "cplus.met"
#line 1959 "cplus.met"

#line 1960 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1960 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 1960 "cplus.met"
return((PPTREE) 0);
#line 1960 "cplus.met"

#line 1960 "cplus.met"
base_specifier_exit :
#line 1960 "cplus.met"

#line 1960 "cplus.met"
    _Debug = TRACE_RULE("base_specifier",TRACE_EXIT,(PPTREE)0);
#line 1960 "cplus.met"
    _funcLevel--;
#line 1960 "cplus.met"
    return((PPTREE) -1) ;
#line 1960 "cplus.met"

#line 1960 "cplus.met"
base_specifier_ret :
#line 1960 "cplus.met"
    
#line 1960 "cplus.met"
    _Debug = TRACE_RULE("base_specifier",TRACE_RETURN,_retValue);
#line 1960 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1960 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 1960 "cplus.met"
    return _retValue ;
#line 1960 "cplus.met"
}
#line 1960 "cplus.met"

#line 1960 "cplus.met"
#line 1941 "cplus.met"
PPTREE cplus::base_specifier_elem ( int error_free)
#line 1941 "cplus.met"
{
#line 1941 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 1941 "cplus.met"
    int _value,_nbPre = 0 ;
#line 1941 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 1941 "cplus.met"
    int _Debug = TRACE_RULE("base_specifier_elem",TRACE_ENTER,(PPTREE)0);
#line 1941 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 1941 "cplus.met"
#line 1941 "cplus.met"
    PPTREE ret = (PPTREE) 0;
#line 1941 "cplus.met"
#line 1943 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 1943 "cplus.met"
    switch( lexEl.Value) {
#line 1943 "cplus.met"
#line 1944 "cplus.met"
        case PRIVATE : 
#line 1944 "cplus.met"
            tokenAhead = 0 ;
#line 1944 "cplus.met"
            CommTerm();
#line 1944 "cplus.met"
#line 1944 "cplus.met"
            {
#line 1944 "cplus.met"
                PPTREE _ptTree0=0;
#line 1944 "cplus.met"
                {
#line 1944 "cplus.met"
                    PPTREE _ptTree1=0,_ptRes1=0;
#line 1944 "cplus.met"
                    _ptRes1= MakeTree(PROTECT, 2);
#line 1944 "cplus.met"
                    ReplaceTree(_ptRes1, 1, MakeString ("private"));
#line 1944 "cplus.met"
                    if ( (_ptTree1=NQUICK_CALL(_Tak(base_specifier_elem)(error_free), 24, cplus))== (PPTREE) -1 ) {
#line 1944 "cplus.met"
                        MulFreeTree(4,_ptRes1,_ptTree1,_ptTree0,ret);
                        PROG_EXIT(base_specifier_elem_exit,"base_specifier_elem")
#line 1944 "cplus.met"
                    }
#line 1944 "cplus.met"
                    ReplaceTree(_ptRes1, 2, _ptTree1);
#line 1944 "cplus.met"
                    _ptTree0=_ptRes1;
#line 1944 "cplus.met"
                }
#line 1944 "cplus.met"
                _retValue =_ptTree0;
#line 1944 "cplus.met"
                goto base_specifier_elem_ret;
#line 1944 "cplus.met"
            }
#line 1944 "cplus.met"
            break;
#line 1944 "cplus.met"
#line 1945 "cplus.met"
        case PROTECTED : 
#line 1945 "cplus.met"
            tokenAhead = 0 ;
#line 1945 "cplus.met"
            CommTerm();
#line 1945 "cplus.met"
#line 1945 "cplus.met"
            {
#line 1945 "cplus.met"
                PPTREE _ptTree0=0;
#line 1945 "cplus.met"
                {
#line 1945 "cplus.met"
                    PPTREE _ptTree1=0,_ptRes1=0;
#line 1945 "cplus.met"
                    _ptRes1= MakeTree(PROTECT, 2);
#line 1945 "cplus.met"
                    ReplaceTree(_ptRes1, 1, MakeString ("protected"));
#line 1945 "cplus.met"
                    if ( (_ptTree1=NQUICK_CALL(_Tak(base_specifier_elem)(error_free), 24, cplus))== (PPTREE) -1 ) {
#line 1945 "cplus.met"
                        MulFreeTree(4,_ptRes1,_ptTree1,_ptTree0,ret);
                        PROG_EXIT(base_specifier_elem_exit,"base_specifier_elem")
#line 1945 "cplus.met"
                    }
#line 1945 "cplus.met"
                    ReplaceTree(_ptRes1, 2, _ptTree1);
#line 1945 "cplus.met"
                    _ptTree0=_ptRes1;
#line 1945 "cplus.met"
                }
#line 1945 "cplus.met"
                _retValue =_ptTree0;
#line 1945 "cplus.met"
                goto base_specifier_elem_ret;
#line 1945 "cplus.met"
            }
#line 1945 "cplus.met"
            break;
#line 1945 "cplus.met"
#line 1946 "cplus.met"
        case PUBLIC : 
#line 1946 "cplus.met"
            tokenAhead = 0 ;
#line 1946 "cplus.met"
            CommTerm();
#line 1946 "cplus.met"
#line 1946 "cplus.met"
            {
#line 1946 "cplus.met"
                PPTREE _ptTree0=0;
#line 1946 "cplus.met"
                {
#line 1946 "cplus.met"
                    PPTREE _ptTree1=0,_ptRes1=0;
#line 1946 "cplus.met"
                    _ptRes1= MakeTree(PROTECT, 2);
#line 1946 "cplus.met"
                    ReplaceTree(_ptRes1, 1, MakeString ("public"));
#line 1946 "cplus.met"
                    if ( (_ptTree1=NQUICK_CALL(_Tak(base_specifier_elem)(error_free), 24, cplus))== (PPTREE) -1 ) {
#line 1946 "cplus.met"
                        MulFreeTree(4,_ptRes1,_ptTree1,_ptTree0,ret);
                        PROG_EXIT(base_specifier_elem_exit,"base_specifier_elem")
#line 1946 "cplus.met"
                    }
#line 1946 "cplus.met"
                    ReplaceTree(_ptRes1, 2, _ptTree1);
#line 1946 "cplus.met"
                    _ptTree0=_ptRes1;
#line 1946 "cplus.met"
                }
#line 1946 "cplus.met"
                _retValue =_ptTree0;
#line 1946 "cplus.met"
                goto base_specifier_elem_ret;
#line 1946 "cplus.met"
            }
#line 1946 "cplus.met"
            break;
#line 1946 "cplus.met"
#line 1947 "cplus.met"
        case VIRTUAL : 
#line 1947 "cplus.met"
            tokenAhead = 0 ;
#line 1947 "cplus.met"
            CommTerm();
#line 1947 "cplus.met"
#line 1947 "cplus.met"
            {
#line 1947 "cplus.met"
                PPTREE _ptTree0=0;
#line 1947 "cplus.met"
                {
#line 1947 "cplus.met"
                    PPTREE _ptTree1=0,_ptRes1=0;
#line 1947 "cplus.met"
                    _ptRes1= MakeTree(PROTECT, 2);
#line 1947 "cplus.met"
                    ReplaceTree(_ptRes1, 1, MakeString ("virtual"));
#line 1947 "cplus.met"
                    if ( (_ptTree1=NQUICK_CALL(_Tak(base_specifier_elem)(error_free), 24, cplus))== (PPTREE) -1 ) {
#line 1947 "cplus.met"
                        MulFreeTree(4,_ptRes1,_ptTree1,_ptTree0,ret);
                        PROG_EXIT(base_specifier_elem_exit,"base_specifier_elem")
#line 1947 "cplus.met"
                    }
#line 1947 "cplus.met"
                    ReplaceTree(_ptRes1, 2, _ptTree1);
#line 1947 "cplus.met"
                    _ptTree0=_ptRes1;
#line 1947 "cplus.met"
                }
#line 1947 "cplus.met"
                _retValue =_ptTree0;
#line 1947 "cplus.met"
                goto base_specifier_elem_ret;
#line 1947 "cplus.met"
            }
#line 1947 "cplus.met"
            break;
#line 1947 "cplus.met"
#line 1947 "cplus.met"
        default : 
#line 1947 "cplus.met"
#line 1947 "cplus.met"
            break;
#line 1947 "cplus.met"
    }
#line 1947 "cplus.met"
#line 1950 "cplus.met"
    if ( (ret=NQUICK_CALL(_Tak(complete_class_name)(error_free), 32, cplus))== (PPTREE) -1 ) {
#line 1950 "cplus.met"
        MulFreeTree(1,ret);
        PROG_EXIT(base_specifier_elem_exit,"base_specifier_elem")
#line 1950 "cplus.met"
    }
#line 1950 "cplus.met"
#line 1951 "cplus.met"
    {
#line 1951 "cplus.met"
        _retValue = ret ;
#line 1951 "cplus.met"
        goto base_specifier_elem_ret;
#line 1951 "cplus.met"
        
#line 1951 "cplus.met"
    }
#line 1951 "cplus.met"
#line 1951 "cplus.met"
#line 1951 "cplus.met"

#line 1952 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1952 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 1952 "cplus.met"
return((PPTREE) 0);
#line 1952 "cplus.met"

#line 1952 "cplus.met"
base_specifier_elem_exit :
#line 1952 "cplus.met"

#line 1952 "cplus.met"
    _Debug = TRACE_RULE("base_specifier_elem",TRACE_EXIT,(PPTREE)0);
#line 1952 "cplus.met"
    _funcLevel--;
#line 1952 "cplus.met"
    return((PPTREE) -1) ;
#line 1952 "cplus.met"

#line 1952 "cplus.met"
base_specifier_elem_ret :
#line 1952 "cplus.met"
    
#line 1952 "cplus.met"
    _Debug = TRACE_RULE("base_specifier_elem",TRACE_RETURN,_retValue);
#line 1952 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1952 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 1952 "cplus.met"
    return _retValue ;
#line 1952 "cplus.met"
}
#line 1952 "cplus.met"

#line 1952 "cplus.met"
#line 3851 "cplus.met"
PPTREE cplus::bidon ( int error_free)
#line 3851 "cplus.met"
{
#line 3851 "cplus.met"
    int  _oldnoString = noString;
#line 3851 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 3851 "cplus.met"
    int _value,_nbPre = 0 ;
#line 3851 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 3851 "cplus.met"
    int _Debug = TRACE_RULE("bidon",TRACE_ENTER,(PPTREE)0);
#line 3851 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 3851 "cplus.met"
#line 3852 "cplus.met"
    {
#line 3852 "cplus.met"
        noString = 1 ;
#line 3852 "cplus.met"
#line 3853 "cplus.met"
#line 3853 "cplus.met"
        noString =  _oldnoString;
#line 3853 "cplus.met"
    }
#line 3853 "cplus.met"
#line 3853 "cplus.met"
#line 3854 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 3854 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 3854 "cplus.met"
noString =  _oldnoString;
#line 3854 "cplus.met"
return((PPTREE) 0);
#line 3854 "cplus.met"

#line 3854 "cplus.met"
bidon_exit :
#line 3854 "cplus.met"

#line 3854 "cplus.met"
    _Debug = TRACE_RULE("bidon",TRACE_EXIT,(PPTREE)0);
#line 3854 "cplus.met"
    _funcLevel--;
#line 3854 "cplus.met"
    noString =  _oldnoString;
#line 3854 "cplus.met"
    return((PPTREE) -1) ;
#line 3854 "cplus.met"

#line 3854 "cplus.met"
bidon_ret :
#line 3854 "cplus.met"
    
#line 3854 "cplus.met"
    _Debug = TRACE_RULE("bidon",TRACE_RETURN,_retValue);
#line 3854 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 3854 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 3854 "cplus.met"
    noString =  _oldnoString;
#line 3854 "cplus.met"
    return _retValue ;
#line 3854 "cplus.met"
}
#line 3854 "cplus.met"

#line 3854 "cplus.met"
#line 2732 "cplus.met"
PPTREE cplus::bit_field_decl ( int error_free)
#line 2732 "cplus.met"
{
#line 2732 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 2732 "cplus.met"
    int _value,_nbPre = 0 ;
#line 2732 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 2732 "cplus.met"
    int _Debug = TRACE_RULE("bit_field_decl",TRACE_ENTER,(PPTREE)0);
#line 2732 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 2732 "cplus.met"
#line 2732 "cplus.met"
    PPTREE retTree = (PPTREE) 0;
#line 2732 "cplus.met"
#line 2735 "cplus.met"
    {
#line 2735 "cplus.met"
        PPTREE _ptRes0=0;
#line 2735 "cplus.met"
        _ptRes0= MakeTree(TYP_BIT, 2);
#line 2735 "cplus.met"
        retTree=_ptRes0;
#line 2735 "cplus.met"
    }
#line 2735 "cplus.met"
#line 2737 "cplus.met"
    if ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN( IDENT,"IDENT")){
#line 2737 "cplus.met"
#line 2738 "cplus.met"
        {
#line 2738 "cplus.met"
            PPTREE _ptTree0=0;
#line 2738 "cplus.met"
            {
#line 2738 "cplus.met"
                PPTREE _ptTree1=0,_ptRes1=0;
#line 2738 "cplus.met"
                _ptRes1= MakeTree(IDENT, 1);
#line 2738 "cplus.met"
                (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 2738 "cplus.met"
                if ( ! TERM_OR_META(IDENT,"IDENT") || !(BUILD_TERM_META(_ptTree1))) {
#line 2738 "cplus.met"
                    MulFreeTree(4,_ptRes1,_ptTree1,_ptTree0,retTree);
                    TOKEN_EXIT(bit_field_decl_exit,"IDENT")
#line 2738 "cplus.met"
                } else {
#line 2738 "cplus.met"
                    tokenAhead = 0 ;
#line 2738 "cplus.met"
                }
#line 2738 "cplus.met"
                ReplaceTree(_ptRes1, 1, _ptTree1);
#line 2738 "cplus.met"
                _ptTree0=_ptRes1;
#line 2738 "cplus.met"
            }
#line 2738 "cplus.met"
            ReplaceTree(retTree , 1 , _ptTree0);
#line 2738 "cplus.met"
        }
#line 2738 "cplus.met"
#line 2738 "cplus.met"
    }
#line 2738 "cplus.met"
#line 2739 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 2739 "cplus.met"
    if (  !SEE_TOKEN( DPOI,":") || !(CommTerm(),1)) {
#line 2739 "cplus.met"
        MulFreeTree(1,retTree);
        TOKEN_EXIT(bit_field_decl_exit,":")
#line 2739 "cplus.met"
    } else {
#line 2739 "cplus.met"
        tokenAhead = 0 ;
#line 2739 "cplus.met"
    }
#line 2739 "cplus.met"
#line 2740 "cplus.met"
    {
#line 2740 "cplus.met"
        PPTREE _ptTree0=0;
#line 2740 "cplus.met"
        {
#line 2740 "cplus.met"
            PPTREE _ptTree1=0;
#line 2740 "cplus.met"
            if ( (_ptTree1=NQUICK_CALL(_Tak(assignment_expression)(error_free), 21, cplus))== (PPTREE) -1 ) {
#line 2740 "cplus.met"
                MulFreeTree(3,_ptTree1,_ptTree0,retTree);
                PROG_EXIT(bit_field_decl_exit,"bit_field_decl")
#line 2740 "cplus.met"
            }
#line 2740 "cplus.met"
            _ptTree0=ReplaceTree(retTree , 2 , _ptTree1);
#line 2740 "cplus.met"
        }
#line 2740 "cplus.met"
        _retValue =_ptTree0;
#line 2740 "cplus.met"
        goto bit_field_decl_ret;
#line 2740 "cplus.met"
    }
#line 2740 "cplus.met"
#line 2740 "cplus.met"
#line 2740 "cplus.met"

#line 2741 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2741 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 2741 "cplus.met"
return((PPTREE) 0);
#line 2741 "cplus.met"

#line 2741 "cplus.met"
bit_field_decl_exit :
#line 2741 "cplus.met"

#line 2741 "cplus.met"
    _Debug = TRACE_RULE("bit_field_decl",TRACE_EXIT,(PPTREE)0);
#line 2741 "cplus.met"
    _funcLevel--;
#line 2741 "cplus.met"
    return((PPTREE) -1) ;
#line 2741 "cplus.met"

#line 2741 "cplus.met"
bit_field_decl_ret :
#line 2741 "cplus.met"
    
#line 2741 "cplus.met"
    _Debug = TRACE_RULE("bit_field_decl",TRACE_RETURN,_retValue);
#line 2741 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2741 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 2741 "cplus.met"
    return _retValue ;
#line 2741 "cplus.met"
}
#line 2741 "cplus.met"

#line 2741 "cplus.met"
#line 2918 "cplus.met"
PPTREE cplus::cast_expression ( int error_free)
#line 2918 "cplus.met"
{
#line 2918 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 2918 "cplus.met"
    int _value,_nbPre = 0 ;
#line 2918 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 2918 "cplus.met"
    int _Debug = TRACE_RULE("cast_expression",TRACE_ENTER,(PPTREE)0);
#line 2918 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 2918 "cplus.met"
#line 2918 "cplus.met"
    PPTREE retTree = (PPTREE) 0;
#line 2918 "cplus.met"
#line 2920 "cplus.met"
    if (NPUSH_CALL_AFF_VERIF(retTree = ,_Tak(cast_expression_value), 27, cplus)){
#line 2920 "cplus.met"
#line 2921 "cplus.met"
        {
#line 2921 "cplus.met"
            _retValue = retTree ;
#line 2921 "cplus.met"
            goto cast_expression_ret;
#line 2921 "cplus.met"
            
#line 2921 "cplus.met"
        }
#line 2921 "cplus.met"
    } else {
#line 2921 "cplus.met"
#line 2923 "cplus.met"
        {
#line 2923 "cplus.met"
            PPTREE _ptTree0=0;
#line 2923 "cplus.met"
            if ( (_ptTree0=NQUICK_CALL(_Tak(unary_expression)(error_free), 159, cplus))== (PPTREE) -1 ) {
#line 2923 "cplus.met"
                MulFreeTree(2,_ptTree0,retTree);
                PROG_EXIT(cast_expression_exit,"cast_expression")
#line 2923 "cplus.met"
            }
#line 2923 "cplus.met"
            _retValue =_ptTree0;
#line 2923 "cplus.met"
            goto cast_expression_ret;
#line 2923 "cplus.met"
        }
#line 2923 "cplus.met"
    }
#line 2923 "cplus.met"
#line 2923 "cplus.met"
#line 2923 "cplus.met"

#line 2924 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2924 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 2924 "cplus.met"
return((PPTREE) 0);
#line 2924 "cplus.met"

#line 2924 "cplus.met"
cast_expression_exit :
#line 2924 "cplus.met"

#line 2924 "cplus.met"
    _Debug = TRACE_RULE("cast_expression",TRACE_EXIT,(PPTREE)0);
#line 2924 "cplus.met"
    _funcLevel--;
#line 2924 "cplus.met"
    return((PPTREE) -1) ;
#line 2924 "cplus.met"

#line 2924 "cplus.met"
cast_expression_ret :
#line 2924 "cplus.met"
    
#line 2924 "cplus.met"
    _Debug = TRACE_RULE("cast_expression",TRACE_RETURN,_retValue);
#line 2924 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2924 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 2924 "cplus.met"
    return _retValue ;
#line 2924 "cplus.met"
}
#line 2924 "cplus.met"

#line 2924 "cplus.met"
#line 2910 "cplus.met"
PPTREE cplus::cast_expression_value ( int error_free)
#line 2910 "cplus.met"
{
#line 2910 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 2910 "cplus.met"
    int _value,_nbPre = 0 ;
#line 2910 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 2910 "cplus.met"
    int _Debug = TRACE_RULE("cast_expression_value",TRACE_ENTER,(PPTREE)0);
#line 2910 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 2910 "cplus.met"
#line 2910 "cplus.met"
    PPTREE ret = (PPTREE) 0;
#line 2910 "cplus.met"
#line 2912 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 2912 "cplus.met"
    if (  !SEE_TOKEN( POUV,"(") || !(CommTerm(),1)) {
#line 2912 "cplus.met"
        MulFreeTree(1,ret);
        TOKEN_EXIT(cast_expression_value_exit,"(")
#line 2912 "cplus.met"
    } else {
#line 2912 "cplus.met"
        tokenAhead = 0 ;
#line 2912 "cplus.met"
    }
#line 2912 "cplus.met"
#line 2913 "cplus.met"
    if ( (ret=NQUICK_CALL(_Tak(type_name)(error_free), 155, cplus))== (PPTREE) -1 ) {
#line 2913 "cplus.met"
        MulFreeTree(1,ret);
        PROG_EXIT(cast_expression_value_exit,"cast_expression_value")
#line 2913 "cplus.met"
    }
#line 2913 "cplus.met"
#line 2914 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 2914 "cplus.met"
    if (  !SEE_TOKEN( PFER,")") || !(CommTerm(),1)) {
#line 2914 "cplus.met"
        MulFreeTree(1,ret);
        TOKEN_EXIT(cast_expression_value_exit,")")
#line 2914 "cplus.met"
    } else {
#line 2914 "cplus.met"
        tokenAhead = 0 ;
#line 2914 "cplus.met"
    }
#line 2914 "cplus.met"
#line 2915 "cplus.met"
    {
#line 2915 "cplus.met"
        PPTREE _ptTree0=0;
#line 2915 "cplus.met"
        {
#line 2915 "cplus.met"
            PPTREE _ptTree1=0,_ptRes1=0;
#line 2915 "cplus.met"
            _ptRes1= MakeTree(CAST, 2);
#line 2915 "cplus.met"
            ReplaceTree(_ptRes1, 1, ret );
#line 2915 "cplus.met"
            if ( (_ptTree1=NQUICK_CALL(_Tak(cast_expression)(error_free), 26, cplus))== (PPTREE) -1 ) {
#line 2915 "cplus.met"
                MulFreeTree(4,_ptRes1,_ptTree1,_ptTree0,ret);
                PROG_EXIT(cast_expression_value_exit,"cast_expression_value")
#line 2915 "cplus.met"
            }
#line 2915 "cplus.met"
            ReplaceTree(_ptRes1, 2, _ptTree1);
#line 2915 "cplus.met"
            _ptTree0=_ptRes1;
#line 2915 "cplus.met"
        }
#line 2915 "cplus.met"
        _retValue =_ptTree0;
#line 2915 "cplus.met"
        goto cast_expression_value_ret;
#line 2915 "cplus.met"
    }
#line 2915 "cplus.met"
#line 2915 "cplus.met"
#line 2915 "cplus.met"

#line 2916 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2916 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 2916 "cplus.met"
return((PPTREE) 0);
#line 2916 "cplus.met"

#line 2916 "cplus.met"
cast_expression_value_exit :
#line 2916 "cplus.met"

#line 2916 "cplus.met"
    _Debug = TRACE_RULE("cast_expression_value",TRACE_EXIT,(PPTREE)0);
#line 2916 "cplus.met"
    _funcLevel--;
#line 2916 "cplus.met"
    return((PPTREE) -1) ;
#line 2916 "cplus.met"

#line 2916 "cplus.met"
cast_expression_value_ret :
#line 2916 "cplus.met"
    
#line 2916 "cplus.met"
    _Debug = TRACE_RULE("cast_expression_value",TRACE_RETURN,_retValue);
#line 2916 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2916 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 2916 "cplus.met"
    return _retValue ;
#line 2916 "cplus.met"
}
#line 2916 "cplus.met"

#line 2916 "cplus.met"
#line 2038 "cplus.met"
PPTREE cplus::catch_unit ( int error_free)
#line 2038 "cplus.met"
{
#line 2038 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 2038 "cplus.met"
    int _value,_nbPre = 0 ;
#line 2038 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 2038 "cplus.met"
    int _Debug = TRACE_RULE("catch_unit",TRACE_ENTER,(PPTREE)0);
#line 2038 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 2038 "cplus.met"
#line 2039 "cplus.met"
    (tokenAhead == 13|| (specific(),TRACE_LEX(1)));
#line 2039 "cplus.met"
    switch( lexEl.Value) {
#line 2039 "cplus.met"
#line 2040 "cplus.met"
        case META : 
#line 2040 "cplus.met"
        case CATCH_UPPER : 
#line 2040 "cplus.met"
#line 2040 "cplus.met"
            {
#line 2040 "cplus.met"
                PPTREE _ptTree0=0;
#line 2040 "cplus.met"
                {
#line 2040 "cplus.met"
                    PPTREE _ptTree1=0,_ptRes1=0;
#line 2040 "cplus.met"
                    _ptRes1= MakeTree(CATCH, 2);
#line 2040 "cplus.met"
                    if ( (_ptTree1=NQUICK_CALL(_Tak(macro)(error_free), 98, cplus))== (PPTREE) -1 ) {
#line 2040 "cplus.met"
                        MulFreeTree(3,_ptRes1,_ptTree1,_ptTree0);
                        PROG_EXIT(catch_unit_exit,"catch_unit")
#line 2040 "cplus.met"
                    }
#line 2040 "cplus.met"
                    ReplaceTree(_ptRes1, 1, _ptTree1);
#line 2040 "cplus.met"
                    if ( (_ptTree1=NQUICK_CALL(_Tak(compound_statement)(error_free), 33, cplus))== (PPTREE) -1 ) {
#line 2040 "cplus.met"
                        MulFreeTree(3,_ptRes1,_ptTree1,_ptTree0);
                        PROG_EXIT(catch_unit_exit,"catch_unit")
#line 2040 "cplus.met"
                    }
#line 2040 "cplus.met"
                    ReplaceTree(_ptRes1, 2, _ptTree1);
#line 2040 "cplus.met"
                    _ptTree0=_ptRes1;
#line 2040 "cplus.met"
                }
#line 2040 "cplus.met"
                _retValue =_ptTree0;
#line 2040 "cplus.met"
                goto catch_unit_ret;
#line 2040 "cplus.met"
            }
#line 2040 "cplus.met"
            break;
#line 2040 "cplus.met"
#line 2041 "cplus.met"
        case CATCH_ALL : 
#line 2041 "cplus.met"
#line 2041 "cplus.met"
            {
#line 2041 "cplus.met"
                PPTREE _ptTree0=0;
#line 2041 "cplus.met"
                {
#line 2041 "cplus.met"
                    PPTREE _ptTree1=0,_ptRes1=0;
#line 2041 "cplus.met"
                    _ptRes1= MakeTree(CATCH, 2);
#line 2041 "cplus.met"
                    if ( (_ptTree1=NQUICK_CALL(_Tak(macro)(error_free), 98, cplus))== (PPTREE) -1 ) {
#line 2041 "cplus.met"
                        MulFreeTree(3,_ptRes1,_ptTree1,_ptTree0);
                        PROG_EXIT(catch_unit_exit,"catch_unit")
#line 2041 "cplus.met"
                    }
#line 2041 "cplus.met"
                    ReplaceTree(_ptRes1, 1, _ptTree1);
#line 2041 "cplus.met"
                    if ( (_ptTree1=NQUICK_CALL(_Tak(compound_statement)(error_free), 33, cplus))== (PPTREE) -1 ) {
#line 2041 "cplus.met"
                        MulFreeTree(3,_ptRes1,_ptTree1,_ptTree0);
                        PROG_EXIT(catch_unit_exit,"catch_unit")
#line 2041 "cplus.met"
                    }
#line 2041 "cplus.met"
                    ReplaceTree(_ptRes1, 2, _ptTree1);
#line 2041 "cplus.met"
                    _ptTree0=_ptRes1;
#line 2041 "cplus.met"
                }
#line 2041 "cplus.met"
                _retValue =_ptTree0;
#line 2041 "cplus.met"
                goto catch_unit_ret;
#line 2041 "cplus.met"
            }
#line 2041 "cplus.met"
            break;
#line 2041 "cplus.met"
#line 2042 "cplus.met"
        case AND_CATCH : 
#line 2042 "cplus.met"
#line 2042 "cplus.met"
            {
#line 2042 "cplus.met"
                PPTREE _ptTree0=0;
#line 2042 "cplus.met"
                {
#line 2042 "cplus.met"
                    PPTREE _ptTree1=0,_ptRes1=0;
#line 2042 "cplus.met"
                    _ptRes1= MakeTree(CATCH, 2);
#line 2042 "cplus.met"
                    if ( (_ptTree1=NQUICK_CALL(_Tak(macro)(error_free), 98, cplus))== (PPTREE) -1 ) {
#line 2042 "cplus.met"
                        MulFreeTree(3,_ptRes1,_ptTree1,_ptTree0);
                        PROG_EXIT(catch_unit_exit,"catch_unit")
#line 2042 "cplus.met"
                    }
#line 2042 "cplus.met"
                    ReplaceTree(_ptRes1, 1, _ptTree1);
#line 2042 "cplus.met"
                    if ( (_ptTree1=NQUICK_CALL(_Tak(compound_statement)(error_free), 33, cplus))== (PPTREE) -1 ) {
#line 2042 "cplus.met"
                        MulFreeTree(3,_ptRes1,_ptTree1,_ptTree0);
                        PROG_EXIT(catch_unit_exit,"catch_unit")
#line 2042 "cplus.met"
                    }
#line 2042 "cplus.met"
                    ReplaceTree(_ptRes1, 2, _ptTree1);
#line 2042 "cplus.met"
                    _ptTree0=_ptRes1;
#line 2042 "cplus.met"
                }
#line 2042 "cplus.met"
                _retValue =_ptTree0;
#line 2042 "cplus.met"
                goto catch_unit_ret;
#line 2042 "cplus.met"
            }
#line 2042 "cplus.met"
            break;
#line 2042 "cplus.met"
        default :
#line 2042 "cplus.met"
            CASE_EXIT(catch_unit_exit,"either CATCH_UPPER or CATCH_ALL or AND_CATCH")
#line 2042 "cplus.met"
            break;
#line 2042 "cplus.met"
    }
#line 2042 "cplus.met"
#line 2042 "cplus.met"
#line 2043 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2043 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 2043 "cplus.met"
return((PPTREE) 0);
#line 2043 "cplus.met"

#line 2043 "cplus.met"
catch_unit_exit :
#line 2043 "cplus.met"

#line 2043 "cplus.met"
    _Debug = TRACE_RULE("catch_unit",TRACE_EXIT,(PPTREE)0);
#line 2043 "cplus.met"
    _funcLevel--;
#line 2043 "cplus.met"
    return((PPTREE) -1) ;
#line 2043 "cplus.met"

#line 2043 "cplus.met"
catch_unit_ret :
#line 2043 "cplus.met"
    
#line 2043 "cplus.met"
    _Debug = TRACE_RULE("catch_unit",TRACE_RETURN,_retValue);
#line 2043 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2043 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 2043 "cplus.met"
    return _retValue ;
#line 2043 "cplus.met"
}
#line 2043 "cplus.met"

#line 2043 "cplus.met"
#line 2056 "cplus.met"
PPTREE cplus::catch_unit_ansi ( int error_free)
#line 2056 "cplus.met"
{
#line 2056 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 2056 "cplus.met"
    int _value,_nbPre = 0 ;
#line 2056 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 2056 "cplus.met"
    int _Debug = TRACE_RULE("catch_unit_ansi",TRACE_ENTER,(PPTREE)0);
#line 2056 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 2056 "cplus.met"
#line 2056 "cplus.met"
    PPTREE retTree = (PPTREE) 0,valTree = (PPTREE) 0;
#line 2056 "cplus.met"
#line 2058 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 2058 "cplus.met"
    if (  !SEE_TOKEN( CATCH,"catch") || !(CommTerm(),1)) {
#line 2058 "cplus.met"
        MulFreeTree(2,retTree,valTree);
        TOKEN_EXIT(catch_unit_ansi_exit,"catch")
#line 2058 "cplus.met"
    } else {
#line 2058 "cplus.met"
        tokenAhead = 0 ;
#line 2058 "cplus.met"
    }
#line 2058 "cplus.met"
#line 2059 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 2059 "cplus.met"
    if (  !SEE_TOKEN( POUV,"(") || !(CommTerm(),1)) {
#line 2059 "cplus.met"
        MulFreeTree(2,retTree,valTree);
        TOKEN_EXIT(catch_unit_ansi_exit,"(")
#line 2059 "cplus.met"
    } else {
#line 2059 "cplus.met"
        tokenAhead = 0 ;
#line 2059 "cplus.met"
    }
#line 2059 "cplus.met"
#line 2060 "cplus.met"
    if ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN(POINPOINPOIN,"...") && (tokenAhead = 0,CommTerm(),1)){
#line 2060 "cplus.met"
#line 2061 "cplus.met"
        {
#line 2061 "cplus.met"
            PPTREE _ptRes0=0;
#line 2061 "cplus.met"
            _ptRes0= MakeTree(EXCEPT_ANSI_ALL, 0);
#line 2061 "cplus.met"
            valTree=_ptRes0;
#line 2061 "cplus.met"
        }
#line 2061 "cplus.met"
    } else {
#line 2061 "cplus.met"
#line 2063 "cplus.met"
#line 2064 "cplus.met"
        if ( (retTree=NQUICK_CALL(_Tak(type_specifier)(error_free), 156, cplus))== (PPTREE) -1 ) {
#line 2064 "cplus.met"
            MulFreeTree(2,retTree,valTree);
            PROG_EXIT(catch_unit_ansi_exit,"catch_unit_ansi")
#line 2064 "cplus.met"
        }
#line 2064 "cplus.met"
#line 2065 "cplus.met"
        if (NPUSH_CALL_AFF_VERIF(valTree = ,_Tak(declarator), 51, cplus)){
#line 2065 "cplus.met"
#line 2066 "cplus.met"
            {
#line 2066 "cplus.met"
                PPTREE _ptRes0=0;
#line 2066 "cplus.met"
                _ptRes0= MakeTree(DECLARATOR, 2);
#line 2066 "cplus.met"
                ReplaceTree(_ptRes0, 1, retTree );
#line 2066 "cplus.met"
                ReplaceTree(_ptRes0, 2, valTree );
#line 2066 "cplus.met"
                valTree=_ptRes0;
#line 2066 "cplus.met"
            }
#line 2066 "cplus.met"
        } else {
#line 2066 "cplus.met"
#line 2068 "cplus.met"
            if (NPUSH_CALL_AFF_VERIF(valTree = ,_Tak(abstract_declarator), 2, cplus)){
#line 2068 "cplus.met"
#line 2069 "cplus.met"
                {
#line 2069 "cplus.met"
                    PPTREE _ptRes0=0;
#line 2069 "cplus.met"
                    _ptRes0= MakeTree(ABST_DECLARATOR, 2);
#line 2069 "cplus.met"
                    ReplaceTree(_ptRes0, 1, retTree );
#line 2069 "cplus.met"
                    ReplaceTree(_ptRes0, 2, valTree );
#line 2069 "cplus.met"
                    valTree=_ptRes0;
#line 2069 "cplus.met"
                }
#line 2069 "cplus.met"
            } else {
#line 2069 "cplus.met"
#line 2071 "cplus.met"
                valTree = retTree ;
#line 2071 "cplus.met"
            }
#line 2071 "cplus.met"
        }
#line 2071 "cplus.met"
#line 2071 "cplus.met"
    }
#line 2071 "cplus.met"
#line 2073 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 2073 "cplus.met"
    if (  !SEE_TOKEN( PFER,")") || !(CommTerm(),1)) {
#line 2073 "cplus.met"
        MulFreeTree(2,retTree,valTree);
        TOKEN_EXIT(catch_unit_ansi_exit,")")
#line 2073 "cplus.met"
    } else {
#line 2073 "cplus.met"
        tokenAhead = 0 ;
#line 2073 "cplus.met"
    }
#line 2073 "cplus.met"
#line 2074 "cplus.met"
    {
#line 2074 "cplus.met"
        PPTREE _ptTree0=0;
#line 2074 "cplus.met"
        {
#line 2074 "cplus.met"
            PPTREE _ptTree1=0,_ptRes1=0;
#line 2074 "cplus.met"
            _ptRes1= MakeTree(CATCH_ANSI, 2);
#line 2074 "cplus.met"
            ReplaceTree(_ptRes1, 1, valTree );
#line 2074 "cplus.met"
            if ( (_ptTree1=NQUICK_CALL(_Tak(compound_statement)(error_free), 33, cplus))== (PPTREE) -1 ) {
#line 2074 "cplus.met"
                MulFreeTree(5,_ptRes1,_ptTree1,_ptTree0,retTree,valTree);
                PROG_EXIT(catch_unit_ansi_exit,"catch_unit_ansi")
#line 2074 "cplus.met"
            }
#line 2074 "cplus.met"
            ReplaceTree(_ptRes1, 2, _ptTree1);
#line 2074 "cplus.met"
            _ptTree0=_ptRes1;
#line 2074 "cplus.met"
        }
#line 2074 "cplus.met"
        _retValue =_ptTree0;
#line 2074 "cplus.met"
        goto catch_unit_ansi_ret;
#line 2074 "cplus.met"
    }
#line 2074 "cplus.met"
#line 2074 "cplus.met"
#line 2074 "cplus.met"

#line 2075 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2075 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 2075 "cplus.met"
return((PPTREE) 0);
#line 2075 "cplus.met"

#line 2075 "cplus.met"
catch_unit_ansi_exit :
#line 2075 "cplus.met"

#line 2075 "cplus.met"
    _Debug = TRACE_RULE("catch_unit_ansi",TRACE_EXIT,(PPTREE)0);
#line 2075 "cplus.met"
    _funcLevel--;
#line 2075 "cplus.met"
    return((PPTREE) -1) ;
#line 2075 "cplus.met"

#line 2075 "cplus.met"
catch_unit_ansi_ret :
#line 2075 "cplus.met"
    
#line 2075 "cplus.met"
    _Debug = TRACE_RULE("catch_unit_ansi",TRACE_RETURN,_retValue);
#line 2075 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2075 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 2075 "cplus.met"
    return _retValue ;
#line 2075 "cplus.met"
}
#line 2075 "cplus.met"

#line 2075 "cplus.met"
#line 2097 "cplus.met"
PPTREE cplus::class_declaration ( int error_free)
#line 2097 "cplus.met"
{
#line 2097 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 2097 "cplus.met"
    int _value,_nbPre = 0 ;
#line 2097 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 2097 "cplus.met"
    int _Debug = TRACE_RULE("class_declaration",TRACE_ENTER,(PPTREE)0);
#line 2097 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 2097 "cplus.met"
#line 2097 "cplus.met"
    PPTREE _addlist1 = (PPTREE) 0;
#line 2097 "cplus.met"
#line 2097 "cplus.met"
    PPTREE retTree = (PPTREE) 0,inter = (PPTREE) 0,list = (PPTREE) 0;
#line 2097 "cplus.met"
#line 2099 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 2099 "cplus.met"
    switch( lexEl.Value) {
#line 2099 "cplus.met"
#line 2100 "cplus.met"
        case STRUCT : 
#line 2100 "cplus.met"
            tokenAhead = 0 ;
#line 2100 "cplus.met"
            CommTerm();
#line 2100 "cplus.met"
#line 2100 "cplus.met"
            {
#line 2100 "cplus.met"
                PPTREE _ptRes0=0;
#line 2100 "cplus.met"
                _ptRes0= MakeTree(CLASS, 4);
#line 2100 "cplus.met"
                ReplaceTree(_ptRes0, 1, MakeString ("struct"));
#line 2100 "cplus.met"
                retTree=_ptRes0;
#line 2100 "cplus.met"
            }
#line 2100 "cplus.met"
            break;
#line 2100 "cplus.met"
#line 2101 "cplus.met"
        case UNION : 
#line 2101 "cplus.met"
            tokenAhead = 0 ;
#line 2101 "cplus.met"
            CommTerm();
#line 2101 "cplus.met"
#line 2101 "cplus.met"
            {
#line 2101 "cplus.met"
                PPTREE _ptRes0=0;
#line 2101 "cplus.met"
                _ptRes0= MakeTree(CLASS, 4);
#line 2101 "cplus.met"
                ReplaceTree(_ptRes0, 1, MakeString ("union"));
#line 2101 "cplus.met"
                retTree=_ptRes0;
#line 2101 "cplus.met"
            }
#line 2101 "cplus.met"
            break;
#line 2101 "cplus.met"
#line 2102 "cplus.met"
        case CLASS : 
#line 2102 "cplus.met"
            tokenAhead = 0 ;
#line 2102 "cplus.met"
            CommTerm();
#line 2102 "cplus.met"
#line 2102 "cplus.met"
            {
#line 2102 "cplus.met"
                PPTREE _ptRes0=0;
#line 2102 "cplus.met"
                _ptRes0= MakeTree(CLASS, 4);
#line 2102 "cplus.met"
                ReplaceTree(_ptRes0, 1, MakeString ("class"));
#line 2102 "cplus.met"
                retTree=_ptRes0;
#line 2102 "cplus.met"
            }
#line 2102 "cplus.met"
            break;
#line 2102 "cplus.met"
        default :
#line 2102 "cplus.met"
            MulFreeTree(4,_addlist1,inter,list,retTree);
            CASE_EXIT(class_declaration_exit,"either struct or union or class")
#line 2102 "cplus.met"
            break;
#line 2102 "cplus.met"
    }
#line 2102 "cplus.met"
#line 2104 "cplus.met"
    {
#line 2104 "cplus.met"
        PPTREE _ptTree0=0;
#line 2104 "cplus.met"
        if ( (_ptTree0=NQUICK_CALL(_Tak(range_modifier_ident)(error_free), 131, cplus))== (PPTREE) -1 ) {
#line 2104 "cplus.met"
            MulFreeTree(5,_ptTree0,_addlist1,inter,list,retTree);
            PROG_EXIT(class_declaration_exit,"class_declaration")
#line 2104 "cplus.met"
        }
#line 2104 "cplus.met"
        ReplaceTree(retTree , 2 , _ptTree0);
#line 2104 "cplus.met"
    }
#line 2104 "cplus.met"
#line 2105 "cplus.met"
    if ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN(DPOI,":") && (tokenAhead = 0,CommTerm(),1)){
#line 2105 "cplus.met"
#line 2106 "cplus.met"
        {
#line 2106 "cplus.met"
            PPTREE _ptTree0=0;
#line 2106 "cplus.met"
            if ( (_ptTree0=NQUICK_CALL(_Tak(base_specifier)(error_free), 23, cplus))== (PPTREE) -1 ) {
#line 2106 "cplus.met"
                MulFreeTree(5,_ptTree0,_addlist1,inter,list,retTree);
                PROG_EXIT(class_declaration_exit,"class_declaration")
#line 2106 "cplus.met"
            }
#line 2106 "cplus.met"
            ReplaceTree(retTree , 3 , _ptTree0);
#line 2106 "cplus.met"
        }
#line 2106 "cplus.met"
#line 2106 "cplus.met"
    }
#line 2106 "cplus.met"
#line 2107 "cplus.met"
    if ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN(AOUV,"{") && (tokenAhead = 0,CommTerm(),1)){
#line 2107 "cplus.met"
#line 2108 "cplus.met"
#line 2109 "cplus.met"
        do {
#line 2109 "cplus.met"
#line 2109 "cplus.met"
            _addlist1 = list ;
#line 2109 "cplus.met"
#line 2110 "cplus.met"
            while (NPUSH_CALL_AFF_VERIF(inter = ,_Tak(inside_declaration), 88, cplus)) { 
#line 2110 "cplus.met"
#line 2111 "cplus.met"
#line 2111 "cplus.met"
                _addlist1 =AddList(_addlist1 ,inter );
#line 2111 "cplus.met"
#line 2111 "cplus.met"
                if (list){
#line 2111 "cplus.met"
#line 2111 "cplus.met"
                    _addlist1 = SonTree (_addlist1 ,2 );
#line 2111 "cplus.met"
                } else {
#line 2111 "cplus.met"
#line 2111 "cplus.met"
                    list = _addlist1 ;
#line 2111 "cplus.met"
                }
#line 2111 "cplus.met"
            } 
#line 2111 "cplus.met"
#line 2112 "cplus.met"
            (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 2112 "cplus.met"
            switch( lexEl.Value) {
#line 2112 "cplus.met"
#line 2113 "cplus.met"
                case PUBLIC : 
#line 2113 "cplus.met"
#line 2113 "cplus.met"
                    {
#line 2113 "cplus.met"
                        PPTREE _ptTree0=0;
#line 2113 "cplus.met"
                        if ( (_ptTree0=NQUICK_CALL(_Tak(protect_declare)(error_free), 121, cplus))== (PPTREE) -1 ) {
#line 2113 "cplus.met"
                            MulFreeTree(5,_ptTree0,_addlist1,inter,list,retTree);
                            PROG_EXIT(class_declaration_exit,"class_declaration")
#line 2113 "cplus.met"
                        }
#line 2113 "cplus.met"
                        list =AddList(list , _ptTree0);
#line 2113 "cplus.met"
                    }
#line 2113 "cplus.met"
                    break;
#line 2113 "cplus.met"
#line 2114 "cplus.met"
                case PRIVATE : 
#line 2114 "cplus.met"
#line 2114 "cplus.met"
                    {
#line 2114 "cplus.met"
                        PPTREE _ptTree0=0;
#line 2114 "cplus.met"
                        if ( (_ptTree0=NQUICK_CALL(_Tak(protect_declare)(error_free), 121, cplus))== (PPTREE) -1 ) {
#line 2114 "cplus.met"
                            MulFreeTree(5,_ptTree0,_addlist1,inter,list,retTree);
                            PROG_EXIT(class_declaration_exit,"class_declaration")
#line 2114 "cplus.met"
                        }
#line 2114 "cplus.met"
                        list =AddList(list , _ptTree0);
#line 2114 "cplus.met"
                    }
#line 2114 "cplus.met"
                    break;
#line 2114 "cplus.met"
#line 2115 "cplus.met"
                case PROTECTED : 
#line 2115 "cplus.met"
#line 2115 "cplus.met"
                    {
#line 2115 "cplus.met"
                        PPTREE _ptTree0=0;
#line 2115 "cplus.met"
                        if ( (_ptTree0=NQUICK_CALL(_Tak(protect_declare)(error_free), 121, cplus))== (PPTREE) -1 ) {
#line 2115 "cplus.met"
                            MulFreeTree(5,_ptTree0,_addlist1,inter,list,retTree);
                            PROG_EXIT(class_declaration_exit,"class_declaration")
#line 2115 "cplus.met"
                        }
#line 2115 "cplus.met"
                        list =AddList(list , _ptTree0);
#line 2115 "cplus.met"
                    }
#line 2115 "cplus.met"
                    break;
#line 2115 "cplus.met"
#line 2115 "cplus.met"
                case AFER : 
#line 2115 "cplus.met"
#line 2115 "cplus.met"
                    break;
#line 2115 "cplus.met"
#line 2117 "cplus.met"
                default : 
#line 2117 "cplus.met"
#line 2117 "cplus.met"
                    
#line 2117 "cplus.met"
                    MulFreeTree(4,_addlist1,inter,list,retTree);
                    LEX_EXIT ("",0);
#line 2117 "cplus.met"
                    goto class_declaration_exit;
#line 2117 "cplus.met"
                    break;
#line 2117 "cplus.met"
            }
#line 2117 "cplus.met"
#line 2117 "cplus.met"
#line 2119 "cplus.met"
        } while ( !(((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN( AFER,"}")) || 
#line 2119 "cplus.met"
                   (! ((tokenAhead && tokenAhead != -1)|| (c != EOF))))) ;
#line 2119 "cplus.met"
#line 2120 "cplus.met"
        {
#line 2120 "cplus.met"
            PPTREE _ptTree0=0;
#line 2120 "cplus.met"
            {
#line 2120 "cplus.met"
                PPTREE _ptRes1=0;
#line 2120 "cplus.met"
                _ptRes1= MakeTree(CLASS_DECL, 1);
#line 2120 "cplus.met"
                ReplaceTree(_ptRes1, 1, list );
#line 2120 "cplus.met"
                _ptTree0=_ptRes1;
#line 2120 "cplus.met"
            }
#line 2120 "cplus.met"
            ReplaceTree(retTree , 4 , _ptTree0);
#line 2120 "cplus.met"
        }
#line 2120 "cplus.met"
#line 2121 "cplus.met"
        (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 2121 "cplus.met"
        if (  !SEE_TOKEN( AFER,"}") || !(CommTerm(),1)) {
#line 2121 "cplus.met"
            MulFreeTree(4,_addlist1,inter,list,retTree);
            TOKEN_EXIT(class_declaration_exit,"}")
#line 2121 "cplus.met"
        } else {
#line 2121 "cplus.met"
            tokenAhead = 0 ;
#line 2121 "cplus.met"
        }
#line 2121 "cplus.met"
#line 2121 "cplus.met"
#line 2121 "cplus.met"
    }
#line 2121 "cplus.met"
#line 2123 "cplus.met"
    {
#line 2123 "cplus.met"
        _retValue = retTree ;
#line 2123 "cplus.met"
        goto class_declaration_ret;
#line 2123 "cplus.met"
        
#line 2123 "cplus.met"
    }
#line 2123 "cplus.met"
#line 2123 "cplus.met"
#line 2123 "cplus.met"

#line 2124 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2124 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 2124 "cplus.met"
return((PPTREE) 0);
#line 2124 "cplus.met"

#line 2124 "cplus.met"
class_declaration_exit :
#line 2124 "cplus.met"

#line 2124 "cplus.met"
    _Debug = TRACE_RULE("class_declaration",TRACE_EXIT,(PPTREE)0);
#line 2124 "cplus.met"
    _funcLevel--;
#line 2124 "cplus.met"
    return((PPTREE) -1) ;
#line 2124 "cplus.met"

#line 2124 "cplus.met"
class_declaration_ret :
#line 2124 "cplus.met"
    
#line 2124 "cplus.met"
    _Debug = TRACE_RULE("class_declaration",TRACE_RETURN,_retValue);
#line 2124 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2124 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 2124 "cplus.met"
    return _retValue ;
#line 2124 "cplus.met"
}
#line 2124 "cplus.met"

#line 2124 "cplus.met"
#line 798 "cplus.met"
PPTREE cplus::comment_eater ( int error_free)
#line 798 "cplus.met"
{
#line 798 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 798 "cplus.met"
    int _value,_nbPre = 0 ;
#line 798 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 798 "cplus.met"
    int _Debug = TRACE_RULE("comment_eater",TRACE_ENTER,(PPTREE)0);
#line 798 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 798 "cplus.met"
#line 798 "cplus.met"
    PPTREE retTree = (PPTREE) 0;
#line 798 "cplus.met"
#line 800 "cplus.met"
    1;
#line 800 "cplus.met"
    switch( lexEl.Value) {
#line 800 "cplus.met"
#line 801 "cplus.met"
        default : 
#line 801 "cplus.met"
            tokenAhead = 0 ;
#line 801 "cplus.met"
            CommTerm();
#line 801 "cplus.met"
#line 802 "cplus.met"
            if ( lexEl.Value != -1 ){
#line 802 "cplus.met"
#line 803 "cplus.met"
                
#line 803 "cplus.met"
                MulFreeTree(1,retTree);
                LEX_EXIT ("",0);
#line 803 "cplus.met"
                goto comment_eater_exit;
#line 803 "cplus.met"
#line 803 "cplus.met"
            } else {
#line 803 "cplus.met"
#line 805 "cplus.met"
                {
#line 805 "cplus.met"
                    _retValue = retTree ;
#line 805 "cplus.met"
                    goto comment_eater_ret;
#line 805 "cplus.met"
                    
#line 805 "cplus.met"
                }
#line 805 "cplus.met"
            }
#line 805 "cplus.met"
            break;
#line 805 "cplus.met"
    }
#line 805 "cplus.met"
#line 805 "cplus.met"
#line 806 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 806 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 806 "cplus.met"
return((PPTREE) 0);
#line 806 "cplus.met"

#line 806 "cplus.met"
comment_eater_exit :
#line 806 "cplus.met"

#line 806 "cplus.met"
    _Debug = TRACE_RULE("comment_eater",TRACE_EXIT,(PPTREE)0);
#line 806 "cplus.met"
    _funcLevel--;
#line 806 "cplus.met"
    return((PPTREE) -1) ;
#line 806 "cplus.met"

#line 806 "cplus.met"
comment_eater_ret :
#line 806 "cplus.met"
    
#line 806 "cplus.met"
    _Debug = TRACE_RULE("comment_eater",TRACE_RETURN,_retValue);
#line 806 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 806 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 806 "cplus.met"
    return _retValue ;
#line 806 "cplus.met"
}
#line 806 "cplus.met"

#line 806 "cplus.met"
#line 1932 "cplus.met"
PPTREE cplus::complete_class_name ( int error_free)
#line 1932 "cplus.met"
{
#line 1932 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 1932 "cplus.met"
    int _value,_nbPre = 0 ;
#line 1932 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 1932 "cplus.met"
    int _Debug = TRACE_RULE("complete_class_name",TRACE_ENTER,(PPTREE)0);
#line 1932 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 1932 "cplus.met"
#line 1932 "cplus.met"
    PPTREE ret = (PPTREE) 0;
#line 1932 "cplus.met"
#line 1934 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 1934 "cplus.met"
    switch( lexEl.Value) {
#line 1934 "cplus.met"
#line 1935 "cplus.met"
        case META : 
#line 1935 "cplus.met"
        case IDENT : 
#line 1935 "cplus.met"
#line 1935 "cplus.met"
            if ( (ret=NQUICK_CALL(_Tak(qualified_name)(error_free), 124, cplus))== (PPTREE) -1 ) {
#line 1935 "cplus.met"
                MulFreeTree(1,ret);
                PROG_EXIT(complete_class_name_exit,"complete_class_name")
#line 1935 "cplus.met"
            }
#line 1935 "cplus.met"
            break;
#line 1935 "cplus.met"
#line 1936 "cplus.met"
        case DPOIDPOI : 
#line 1936 "cplus.met"
            tokenAhead = 0 ;
#line 1936 "cplus.met"
            CommTerm();
#line 1936 "cplus.met"
#line 1936 "cplus.met"
            {
#line 1936 "cplus.met"
                PPTREE _ptTree0=0,_ptRes0=0;
#line 1936 "cplus.met"
                _ptRes0= MakeTree(QUALIFIED, 2);
#line 1936 "cplus.met"
                if ( (_ptTree0=NQUICK_CALL(_Tak(qualified_name)(error_free), 124, cplus))== (PPTREE) -1 ) {
#line 1936 "cplus.met"
                    MulFreeTree(3,_ptRes0,_ptTree0,ret);
                    PROG_EXIT(complete_class_name_exit,"complete_class_name")
#line 1936 "cplus.met"
                }
#line 1936 "cplus.met"
                ReplaceTree(_ptRes0, 2, _ptTree0);
#line 1936 "cplus.met"
                ret=_ptRes0;
#line 1936 "cplus.met"
            }
#line 1936 "cplus.met"
            break;
#line 1936 "cplus.met"
        default :
#line 1936 "cplus.met"
            MulFreeTree(1,ret);
            CASE_EXIT(complete_class_name_exit,"either IDENT or ::")
#line 1936 "cplus.met"
            break;
#line 1936 "cplus.met"
    }
#line 1936 "cplus.met"
#line 1938 "cplus.met"
    {
#line 1938 "cplus.met"
        _retValue = ret ;
#line 1938 "cplus.met"
        goto complete_class_name_ret;
#line 1938 "cplus.met"
        
#line 1938 "cplus.met"
    }
#line 1938 "cplus.met"
#line 1938 "cplus.met"
#line 1938 "cplus.met"

#line 1939 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1939 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 1939 "cplus.met"
return((PPTREE) 0);
#line 1939 "cplus.met"

#line 1939 "cplus.met"
complete_class_name_exit :
#line 1939 "cplus.met"

#line 1939 "cplus.met"
    _Debug = TRACE_RULE("complete_class_name",TRACE_EXIT,(PPTREE)0);
#line 1939 "cplus.met"
    _funcLevel--;
#line 1939 "cplus.met"
    return((PPTREE) -1) ;
#line 1939 "cplus.met"

#line 1939 "cplus.met"
complete_class_name_ret :
#line 1939 "cplus.met"
    
#line 1939 "cplus.met"
    _Debug = TRACE_RULE("complete_class_name",TRACE_RETURN,_retValue);
#line 1939 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1939 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 1939 "cplus.met"
    return _retValue ;
#line 1939 "cplus.met"
}
#line 1939 "cplus.met"

#line 1939 "cplus.met"
#line 3510 "cplus.met"
PPTREE cplus::compound_statement ( int error_free)
#line 3510 "cplus.met"
{
#line 3510 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 3510 "cplus.met"
    int _value,_nbPre = 0 ;
#line 3510 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 3510 "cplus.met"
    int _Debug = TRACE_RULE("compound_statement",TRACE_ENTER,(PPTREE)0);
#line 3510 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 3510 "cplus.met"
#line 3510 "cplus.met"
    PPTREE _addlist1 = (PPTREE) 0;
#line 3510 "cplus.met"
#line 3510 "cplus.met"
    PPTREE statList = (PPTREE) 0,stat = (PPTREE) 0;
#line 3510 "cplus.met"
#line 3512 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3512 "cplus.met"
    if (  !SEE_TOKEN( AOUV,"{") || !(CommTerm(),1)) {
#line 3512 "cplus.met"
        MulFreeTree(3,_addlist1,stat,statList);
        TOKEN_EXIT(compound_statement_exit,"{")
#line 3512 "cplus.met"
    } else {
#line 3512 "cplus.met"
        tokenAhead = 0 ;
#line 3512 "cplus.met"
    }
#line 3512 "cplus.met"
#line 3513 "cplus.met"
     debut :
#line 3513 "cplus.met"
#line 3513 "cplus.met"
    _addlist1 = statList ;
#line 3513 "cplus.met"
#line 3515 "cplus.met"
    while (((((NPUSH_CALL_AFF_VERIF(stat = ,_Tak(statement), 147, cplus)) || 
#line 3515 "cplus.met"
             (NPUSH_CALL_AFF_VERIF(stat = ,_Tak(data_declaration), 45, cplus))) || 
#line 3515 "cplus.met"
            (NPUSH_CALL_AFF_VERIF(stat = ,_Tak(stat_dir), 143, cplus))) || 
#line 3515 "cplus.met"
           (NPUSH_CALL_AFF_VERIF(stat = ,_Tak(exception), 63, cplus))) || 
#line 3515 "cplus.met"
          (NPUSH_CALL_AFF_VERIF(stat = ,_Tak(ext_data_declaration), 76, cplus))) { 
#line 3515 "cplus.met"
#line 3517 "cplus.met"
#line 3517 "cplus.met"
        _addlist1 =AddList(_addlist1 ,stat );
#line 3517 "cplus.met"
#line 3517 "cplus.met"
        if (statList){
#line 3517 "cplus.met"
#line 3517 "cplus.met"
            _addlist1 = SonTree (_addlist1 ,2 );
#line 3517 "cplus.met"
        } else {
#line 3517 "cplus.met"
#line 3517 "cplus.met"
            statList = _addlist1 ;
#line 3517 "cplus.met"
        }
#line 3517 "cplus.met"
    } 
#line 3517 "cplus.met"
#line 3518 "cplus.met"
    {
#line 3518 "cplus.met"
        PPTREE _ptTree0=0;
#line 3518 "cplus.met"
        if ( (_ptTree0=NQUICK_CALL(_Tak(none_statement)(error_free), 110, cplus))== (PPTREE) -1 ) {
#line 3518 "cplus.met"
            MulFreeTree(4,_ptTree0,_addlist1,stat,statList);
            PROG_EXIT(compound_statement_exit,"compound_statement")
#line 3518 "cplus.met"
        }
#line 3518 "cplus.met"
        statList =AddList(statList , _ptTree0);
#line 3518 "cplus.met"
    }
#line 3518 "cplus.met"
#line 3519 "cplus.met"
    if (! ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN(AFER,"}") && (tokenAhead = 0,CommTerm(),1))){
#line 3519 "cplus.met"
#line 3520 "cplus.met"
#line 3521 "cplus.met"
        dumperror ();
#line 3521 "cplus.met"
#line 3522 "cplus.met"
        (tokenAhead == 5|| (LexEndLine(),TRACE_LEX(1)));
#line 3522 "cplus.met"
        if ( ! TERM_OR_META(END_LINE,"END_LINE") || !(CommTerm(),1)) {
#line 3522 "cplus.met"
            MulFreeTree(3,_addlist1,stat,statList);
            TOKEN_EXIT(compound_statement_exit,"END_LINE")
#line 3522 "cplus.met"
        } else {
#line 3522 "cplus.met"
            tokenAhead = 0 ;
#line 3522 "cplus.met"
        }
#line 3522 "cplus.met"
#line 3523 "cplus.met"
         hasGotError = 1 ;
#line 3523 "cplus.met"
#line 3524 "cplus.met"
         goto debut ;
#line 3524 "cplus.met"
#line 3524 "cplus.met"
#line 3524 "cplus.met"
    }
#line 3524 "cplus.met"
#line 3526 "cplus.met"
    {
#line 3526 "cplus.met"
        PPTREE _ptTree0=0;
#line 3526 "cplus.met"
        {
#line 3526 "cplus.met"
            PPTREE _ptRes1=0;
#line 3526 "cplus.met"
            _ptRes1= MakeTree(COMPOUND, 1);
#line 3526 "cplus.met"
            ReplaceTree(_ptRes1, 1, statList );
#line 3526 "cplus.met"
            _ptTree0=_ptRes1;
#line 3526 "cplus.met"
        }
#line 3526 "cplus.met"
        _retValue =_ptTree0;
#line 3526 "cplus.met"
        goto compound_statement_ret;
#line 3526 "cplus.met"
    }
#line 3526 "cplus.met"
#line 3526 "cplus.met"
#line 3526 "cplus.met"

#line 3527 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 3527 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 3527 "cplus.met"
return((PPTREE) 0);
#line 3527 "cplus.met"

#line 3527 "cplus.met"
compound_statement_exit :
#line 3527 "cplus.met"

#line 3527 "cplus.met"
    _Debug = TRACE_RULE("compound_statement",TRACE_EXIT,(PPTREE)0);
#line 3527 "cplus.met"
    _funcLevel--;
#line 3527 "cplus.met"
    return((PPTREE) -1) ;
#line 3527 "cplus.met"

#line 3527 "cplus.met"
compound_statement_ret :
#line 3527 "cplus.met"
    
#line 3527 "cplus.met"
    _Debug = TRACE_RULE("compound_statement",TRACE_RETURN,_retValue);
#line 3527 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 3527 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 3527 "cplus.met"
    return _retValue ;
#line 3527 "cplus.met"
}
#line 3527 "cplus.met"

#line 3527 "cplus.met"
#line 2784 "cplus.met"
PPTREE cplus::conditional_expression ( int error_free)
#line 2784 "cplus.met"
{
#line 2784 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 2784 "cplus.met"
    int _value,_nbPre = 0 ;
#line 2784 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 2784 "cplus.met"
    int _Debug = TRACE_RULE("conditional_expression",TRACE_ENTER,(PPTREE)0);
#line 2784 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 2784 "cplus.met"
#line 2784 "cplus.met"
    PPTREE expTree = (PPTREE) 0,condTree = (PPTREE) 0;
#line 2784 "cplus.met"
#line 2786 "cplus.met"
    if ( (expTree=NQUICK_CALL(_Tak(logical_or_expression)(error_free), 96, cplus))== (PPTREE) -1 ) {
#line 2786 "cplus.met"
        MulFreeTree(2,condTree,expTree);
        PROG_EXIT(conditional_expression_exit,"conditional_expression")
#line 2786 "cplus.met"
    }
#line 2786 "cplus.met"
#line 2787 "cplus.met"
    if ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN(INTE,"?") && (tokenAhead = 0,CommTerm(),1)){
#line 2787 "cplus.met"
#line 2788 "cplus.met"
#line 2789 "cplus.met"
        {
#line 2789 "cplus.met"
            PPTREE _ptRes0=0;
#line 2789 "cplus.met"
            _ptRes0= MakeTree(COND_AFF, 3);
#line 2789 "cplus.met"
            ReplaceTree(_ptRes0, 1, expTree );
#line 2789 "cplus.met"
            condTree=_ptRes0;
#line 2789 "cplus.met"
        }
#line 2789 "cplus.met"
#line 2790 "cplus.met"
        {
#line 2790 "cplus.met"
            PPTREE _ptTree0=0;
#line 2790 "cplus.met"
            if ( (_ptTree0=NQUICK_CALL(_Tak(expression)(error_free), 67, cplus))== (PPTREE) -1 ) {
#line 2790 "cplus.met"
                MulFreeTree(3,_ptTree0,condTree,expTree);
                PROG_EXIT(conditional_expression_exit,"conditional_expression")
#line 2790 "cplus.met"
            }
#line 2790 "cplus.met"
            ReplaceTree(condTree , 2 , _ptTree0);
#line 2790 "cplus.met"
        }
#line 2790 "cplus.met"
#line 2791 "cplus.met"
        (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 2791 "cplus.met"
        if (  !SEE_TOKEN( DPOI,":") || !(CommTerm(),1)) {
#line 2791 "cplus.met"
            MulFreeTree(2,condTree,expTree);
            TOKEN_EXIT(conditional_expression_exit,":")
#line 2791 "cplus.met"
        } else {
#line 2791 "cplus.met"
            tokenAhead = 0 ;
#line 2791 "cplus.met"
        }
#line 2791 "cplus.met"
#line 2792 "cplus.met"
        {
#line 2792 "cplus.met"
            PPTREE _ptTree0=0;
#line 2792 "cplus.met"
            {
#line 2792 "cplus.met"
                PPTREE _ptTree1=0;
#line 2792 "cplus.met"
                if ( (_ptTree1=NQUICK_CALL(_Tak(conditional_expression)(error_free), 34, cplus))== (PPTREE) -1 ) {
#line 2792 "cplus.met"
                    MulFreeTree(4,_ptTree1,_ptTree0,condTree,expTree);
                    PROG_EXIT(conditional_expression_exit,"conditional_expression")
#line 2792 "cplus.met"
                }
#line 2792 "cplus.met"
                _ptTree0=ReplaceTree(condTree , 3 , _ptTree1);
#line 2792 "cplus.met"
            }
#line 2792 "cplus.met"
            _retValue =_ptTree0;
#line 2792 "cplus.met"
            goto conditional_expression_ret;
#line 2792 "cplus.met"
        }
#line 2792 "cplus.met"
#line 2792 "cplus.met"
#line 2792 "cplus.met"
    } else {
#line 2792 "cplus.met"
#line 2795 "cplus.met"
        {
#line 2795 "cplus.met"
            _retValue = expTree ;
#line 2795 "cplus.met"
            goto conditional_expression_ret;
#line 2795 "cplus.met"
            
#line 2795 "cplus.met"
        }
#line 2795 "cplus.met"
    }
#line 2795 "cplus.met"
#line 2795 "cplus.met"
#line 2795 "cplus.met"

#line 2796 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2796 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 2796 "cplus.met"
return((PPTREE) 0);
#line 2796 "cplus.met"

#line 2796 "cplus.met"
conditional_expression_exit :
#line 2796 "cplus.met"

#line 2796 "cplus.met"
    _Debug = TRACE_RULE("conditional_expression",TRACE_EXIT,(PPTREE)0);
#line 2796 "cplus.met"
    _funcLevel--;
#line 2796 "cplus.met"
    return((PPTREE) -1) ;
#line 2796 "cplus.met"

#line 2796 "cplus.met"
conditional_expression_ret :
#line 2796 "cplus.met"
    
#line 2796 "cplus.met"
    _Debug = TRACE_RULE("conditional_expression",TRACE_RETURN,_retValue);
#line 2796 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2796 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 2796 "cplus.met"
    return _retValue ;
#line 2796 "cplus.met"
}
#line 2796 "cplus.met"

#line 2796 "cplus.met"
#line 2239 "cplus.met"
PPTREE cplus::const_or_volatile ( int error_free)
#line 2239 "cplus.met"
{
#line 2239 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 2239 "cplus.met"
    int _value,_nbPre = 0 ;
#line 2239 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 2239 "cplus.met"
    int _Debug = TRACE_RULE("const_or_volatile",TRACE_ENTER,(PPTREE)0);
#line 2239 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 2239 "cplus.met"
#line 2240 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 2240 "cplus.met"
    switch( lexEl.Value) {
#line 2240 "cplus.met"
#line 2241 "cplus.met"
        case CONST : 
#line 2241 "cplus.met"
#line 2241 "cplus.met"
            {
#line 2241 "cplus.met"
                PPTREE _ptTree0=0;
#line 2241 "cplus.met"
                {
#line 2241 "cplus.met"
                    PPTREE _ptTree1=0,_ptRes1=0;
#line 2241 "cplus.met"
                    _ptRes1= MakeTree(RANGE_MODIFIER, 2);
#line 2241 "cplus.met"
                    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 2241 "cplus.met"
                    if (  !SEE_TOKEN( CONST,"const") || !(_ptTree1 = CommString(lexEl.string()))) {
#line 2241 "cplus.met"
                        MulFreeTree(3,_ptRes1,_ptTree1,_ptTree0);
                        TOKEN_EXIT(const_or_volatile_exit,"const")
#line 2241 "cplus.met"
                    } else {
#line 2241 "cplus.met"
                        tokenAhead = 0 ;
#line 2241 "cplus.met"
                    }
#line 2241 "cplus.met"
                    ReplaceTree(_ptRes1, 1, _ptTree1);
#line 2241 "cplus.met"
                    _ptTree0=_ptRes1;
#line 2241 "cplus.met"
                }
#line 2241 "cplus.met"
                _retValue =_ptTree0;
#line 2241 "cplus.met"
                goto const_or_volatile_ret;
#line 2241 "cplus.met"
            }
#line 2241 "cplus.met"
            break;
#line 2241 "cplus.met"
#line 2242 "cplus.met"
        case VOLATILE : 
#line 2242 "cplus.met"
#line 2242 "cplus.met"
            {
#line 2242 "cplus.met"
                PPTREE _ptTree0=0;
#line 2242 "cplus.met"
                {
#line 2242 "cplus.met"
                    PPTREE _ptTree1=0,_ptRes1=0;
#line 2242 "cplus.met"
                    _ptRes1= MakeTree(RANGE_MODIFIER, 2);
#line 2242 "cplus.met"
                    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 2242 "cplus.met"
                    if (  !SEE_TOKEN( VOLATILE,"volatile") || !(_ptTree1 = CommString(lexEl.string()))) {
#line 2242 "cplus.met"
                        MulFreeTree(3,_ptRes1,_ptTree1,_ptTree0);
                        TOKEN_EXIT(const_or_volatile_exit,"volatile")
#line 2242 "cplus.met"
                    } else {
#line 2242 "cplus.met"
                        tokenAhead = 0 ;
#line 2242 "cplus.met"
                    }
#line 2242 "cplus.met"
                    ReplaceTree(_ptRes1, 1, _ptTree1);
#line 2242 "cplus.met"
                    _ptTree0=_ptRes1;
#line 2242 "cplus.met"
                }
#line 2242 "cplus.met"
                _retValue =_ptTree0;
#line 2242 "cplus.met"
                goto const_or_volatile_ret;
#line 2242 "cplus.met"
            }
#line 2242 "cplus.met"
            break;
#line 2242 "cplus.met"
        default :
#line 2242 "cplus.met"
            CASE_EXIT(const_or_volatile_exit,"either const or volatile")
#line 2242 "cplus.met"
            break;
#line 2242 "cplus.met"
    }
#line 2242 "cplus.met"
#line 2242 "cplus.met"
#line 2243 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2243 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 2243 "cplus.met"
return((PPTREE) 0);
#line 2243 "cplus.met"

#line 2243 "cplus.met"
const_or_volatile_exit :
#line 2243 "cplus.met"

#line 2243 "cplus.met"
    _Debug = TRACE_RULE("const_or_volatile",TRACE_EXIT,(PPTREE)0);
#line 2243 "cplus.met"
    _funcLevel--;
#line 2243 "cplus.met"
    return((PPTREE) -1) ;
#line 2243 "cplus.met"

#line 2243 "cplus.met"
const_or_volatile_ret :
#line 2243 "cplus.met"
    
#line 2243 "cplus.met"
    _Debug = TRACE_RULE("const_or_volatile",TRACE_RETURN,_retValue);
#line 2243 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2243 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 2243 "cplus.met"
    return _retValue ;
#line 2243 "cplus.met"
}
#line 2243 "cplus.met"

#line 2243 "cplus.met"
