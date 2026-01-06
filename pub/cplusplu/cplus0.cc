/*************************************************************************/
/*                                                                       */
/*        Produced by MetaGen version 2.0  -    1989-2006                 */
/*       Syntaxic Analyzer Meta Generator developped by                  */
/*                  Eric Lavillonniere                                   */
/*                                                                       */
/*************************************************************************/

#include "token.h"
#include "cplus.h"


#line 2735 "cplus.met"
PPTREE cplus::assignment_end ( int error_free)
#line 2735 "cplus.met"
{
#line 2735 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 2735 "cplus.met"
    int _value,_nbPre = 0 ;
#line 2735 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 2735 "cplus.met"
    int _Debug = TRACE_RULE("assignment_end",TRACE_ENTER,(PPTREE)0);
#line 2735 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 2735 "cplus.met"
#line 2736 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 2736 "cplus.met"
    switch( lexEl.Value) {
#line 2736 "cplus.met"
#line 2737 "cplus.met"
        case EGAL : 
#line 2737 "cplus.met"
            tokenAhead = 0 ;
#line 2737 "cplus.met"
            CommTerm();
#line 2737 "cplus.met"
#line 2737 "cplus.met"
            {
#line 2737 "cplus.met"
                PPTREE _ptTree0=0;
#line 2737 "cplus.met"
                {
#line 2737 "cplus.met"
                    PPTREE _ptTree1=0,_ptRes1=0;
#line 2737 "cplus.met"
                    _ptRes1= MakeTree(AFF, 2);
#line 2737 "cplus.met"
                    if ( (_ptTree1=NQUICK_CALL(_Tak(assignment_expression)(error_free), 21, cplus))== (PPTREE) -1 ) {
#line 2737 "cplus.met"
                        MulFreeTree(3,_ptRes1,_ptTree1,_ptTree0);
                        PROG_EXIT(assignment_end_exit,"assignment_end")
#line 2737 "cplus.met"
                    }
#line 2737 "cplus.met"
                    ReplaceTree(_ptRes1, 2, _ptTree1);
#line 2737 "cplus.met"
                    _ptTree0=_ptRes1;
#line 2737 "cplus.met"
                }
#line 2737 "cplus.met"
                _retValue =_ptTree0;
#line 2737 "cplus.met"
                goto assignment_end_ret;
#line 2737 "cplus.met"
            }
#line 2737 "cplus.met"
            break;
#line 2737 "cplus.met"
#line 2738 "cplus.met"
        case ETOIEGAL : 
#line 2738 "cplus.met"
            tokenAhead = 0 ;
#line 2738 "cplus.met"
            CommTerm();
#line 2738 "cplus.met"
#line 2738 "cplus.met"
            {
#line 2738 "cplus.met"
                PPTREE _ptTree0=0;
#line 2738 "cplus.met"
                {
#line 2738 "cplus.met"
                    PPTREE _ptTree1=0,_ptRes1=0;
#line 2738 "cplus.met"
                    _ptRes1= MakeTree(MUL_AFF, 2);
#line 2738 "cplus.met"
                    if ( (_ptTree1=NQUICK_CALL(_Tak(assignment_expression)(error_free), 21, cplus))== (PPTREE) -1 ) {
#line 2738 "cplus.met"
                        MulFreeTree(3,_ptRes1,_ptTree1,_ptTree0);
                        PROG_EXIT(assignment_end_exit,"assignment_end")
#line 2738 "cplus.met"
                    }
#line 2738 "cplus.met"
                    ReplaceTree(_ptRes1, 2, _ptTree1);
#line 2738 "cplus.met"
                    _ptTree0=_ptRes1;
#line 2738 "cplus.met"
                }
#line 2738 "cplus.met"
                _retValue =_ptTree0;
#line 2738 "cplus.met"
                goto assignment_end_ret;
#line 2738 "cplus.met"
            }
#line 2738 "cplus.met"
            break;
#line 2738 "cplus.met"
#line 2739 "cplus.met"
        case META : 
#line 2739 "cplus.met"
        case SLASEGAL : 
#line 2739 "cplus.met"
            tokenAhead = 0 ;
#line 2739 "cplus.met"
            CommTerm();
#line 2739 "cplus.met"
#line 2739 "cplus.met"
            {
#line 2739 "cplus.met"
                PPTREE _ptTree0=0;
#line 2739 "cplus.met"
                {
#line 2739 "cplus.met"
                    PPTREE _ptTree1=0,_ptRes1=0;
#line 2739 "cplus.met"
                    _ptRes1= MakeTree(DIV_AFF, 2);
#line 2739 "cplus.met"
                    if ( (_ptTree1=NQUICK_CALL(_Tak(assignment_expression)(error_free), 21, cplus))== (PPTREE) -1 ) {
#line 2739 "cplus.met"
                        MulFreeTree(3,_ptRes1,_ptTree1,_ptTree0);
                        PROG_EXIT(assignment_end_exit,"assignment_end")
#line 2739 "cplus.met"
                    }
#line 2739 "cplus.met"
                    ReplaceTree(_ptRes1, 2, _ptTree1);
#line 2739 "cplus.met"
                    _ptTree0=_ptRes1;
#line 2739 "cplus.met"
                }
#line 2739 "cplus.met"
                _retValue =_ptTree0;
#line 2739 "cplus.met"
                goto assignment_end_ret;
#line 2739 "cplus.met"
            }
#line 2739 "cplus.met"
            break;
#line 2739 "cplus.met"
#line 2740 "cplus.met"
        case POURCEGAL : 
#line 2740 "cplus.met"
            tokenAhead = 0 ;
#line 2740 "cplus.met"
            CommTerm();
#line 2740 "cplus.met"
#line 2740 "cplus.met"
            {
#line 2740 "cplus.met"
                PPTREE _ptTree0=0;
#line 2740 "cplus.met"
                {
#line 2740 "cplus.met"
                    PPTREE _ptTree1=0,_ptRes1=0;
#line 2740 "cplus.met"
                    _ptRes1= MakeTree(REM_AFF, 2);
#line 2740 "cplus.met"
                    if ( (_ptTree1=NQUICK_CALL(_Tak(assignment_expression)(error_free), 21, cplus))== (PPTREE) -1 ) {
#line 2740 "cplus.met"
                        MulFreeTree(3,_ptRes1,_ptTree1,_ptTree0);
                        PROG_EXIT(assignment_end_exit,"assignment_end")
#line 2740 "cplus.met"
                    }
#line 2740 "cplus.met"
                    ReplaceTree(_ptRes1, 2, _ptTree1);
#line 2740 "cplus.met"
                    _ptTree0=_ptRes1;
#line 2740 "cplus.met"
                }
#line 2740 "cplus.met"
                _retValue =_ptTree0;
#line 2740 "cplus.met"
                goto assignment_end_ret;
#line 2740 "cplus.met"
            }
#line 2740 "cplus.met"
            break;
#line 2740 "cplus.met"
#line 2741 "cplus.met"
        case PLUSEGAL : 
#line 2741 "cplus.met"
            tokenAhead = 0 ;
#line 2741 "cplus.met"
            CommTerm();
#line 2741 "cplus.met"
#line 2741 "cplus.met"
            {
#line 2741 "cplus.met"
                PPTREE _ptTree0=0;
#line 2741 "cplus.met"
                {
#line 2741 "cplus.met"
                    PPTREE _ptTree1=0,_ptRes1=0;
#line 2741 "cplus.met"
                    _ptRes1= MakeTree(PLU_AFF, 2);
#line 2741 "cplus.met"
                    if ( (_ptTree1=NQUICK_CALL(_Tak(assignment_expression)(error_free), 21, cplus))== (PPTREE) -1 ) {
#line 2741 "cplus.met"
                        MulFreeTree(3,_ptRes1,_ptTree1,_ptTree0);
                        PROG_EXIT(assignment_end_exit,"assignment_end")
#line 2741 "cplus.met"
                    }
#line 2741 "cplus.met"
                    ReplaceTree(_ptRes1, 2, _ptTree1);
#line 2741 "cplus.met"
                    _ptTree0=_ptRes1;
#line 2741 "cplus.met"
                }
#line 2741 "cplus.met"
                _retValue =_ptTree0;
#line 2741 "cplus.met"
                goto assignment_end_ret;
#line 2741 "cplus.met"
            }
#line 2741 "cplus.met"
            break;
#line 2741 "cplus.met"
#line 2742 "cplus.met"
        case TIREEGAL : 
#line 2742 "cplus.met"
            tokenAhead = 0 ;
#line 2742 "cplus.met"
            CommTerm();
#line 2742 "cplus.met"
#line 2742 "cplus.met"
            {
#line 2742 "cplus.met"
                PPTREE _ptTree0=0;
#line 2742 "cplus.met"
                {
#line 2742 "cplus.met"
                    PPTREE _ptTree1=0,_ptRes1=0;
#line 2742 "cplus.met"
                    _ptRes1= MakeTree(MIN_AFF, 2);
#line 2742 "cplus.met"
                    if ( (_ptTree1=NQUICK_CALL(_Tak(assignment_expression)(error_free), 21, cplus))== (PPTREE) -1 ) {
#line 2742 "cplus.met"
                        MulFreeTree(3,_ptRes1,_ptTree1,_ptTree0);
                        PROG_EXIT(assignment_end_exit,"assignment_end")
#line 2742 "cplus.met"
                    }
#line 2742 "cplus.met"
                    ReplaceTree(_ptRes1, 2, _ptTree1);
#line 2742 "cplus.met"
                    _ptTree0=_ptRes1;
#line 2742 "cplus.met"
                }
#line 2742 "cplus.met"
                _retValue =_ptTree0;
#line 2742 "cplus.met"
                goto assignment_end_ret;
#line 2742 "cplus.met"
            }
#line 2742 "cplus.met"
            break;
#line 2742 "cplus.met"
#line 2743 "cplus.met"
        case INFEINFEEGAL : 
#line 2743 "cplus.met"
            tokenAhead = 0 ;
#line 2743 "cplus.met"
            CommTerm();
#line 2743 "cplus.met"
#line 2743 "cplus.met"
            {
#line 2743 "cplus.met"
                PPTREE _ptTree0=0;
#line 2743 "cplus.met"
                {
#line 2743 "cplus.met"
                    PPTREE _ptTree1=0,_ptRes1=0;
#line 2743 "cplus.met"
                    _ptRes1= MakeTree(LSH_AFF, 2);
#line 2743 "cplus.met"
                    if ( (_ptTree1=NQUICK_CALL(_Tak(assignment_expression)(error_free), 21, cplus))== (PPTREE) -1 ) {
#line 2743 "cplus.met"
                        MulFreeTree(3,_ptRes1,_ptTree1,_ptTree0);
                        PROG_EXIT(assignment_end_exit,"assignment_end")
#line 2743 "cplus.met"
                    }
#line 2743 "cplus.met"
                    ReplaceTree(_ptRes1, 2, _ptTree1);
#line 2743 "cplus.met"
                    _ptTree0=_ptRes1;
#line 2743 "cplus.met"
                }
#line 2743 "cplus.met"
                _retValue =_ptTree0;
#line 2743 "cplus.met"
                goto assignment_end_ret;
#line 2743 "cplus.met"
            }
#line 2743 "cplus.met"
            break;
#line 2743 "cplus.met"
#line 2744 "cplus.met"
        case SUPESUPEEGAL : 
#line 2744 "cplus.met"
            tokenAhead = 0 ;
#line 2744 "cplus.met"
            CommTerm();
#line 2744 "cplus.met"
#line 2744 "cplus.met"
            {
#line 2744 "cplus.met"
                PPTREE _ptTree0=0;
#line 2744 "cplus.met"
                {
#line 2744 "cplus.met"
                    PPTREE _ptTree1=0,_ptRes1=0;
#line 2744 "cplus.met"
                    _ptRes1= MakeTree(RSH_AFF, 2);
#line 2744 "cplus.met"
                    if ( (_ptTree1=NQUICK_CALL(_Tak(assignment_expression)(error_free), 21, cplus))== (PPTREE) -1 ) {
#line 2744 "cplus.met"
                        MulFreeTree(3,_ptRes1,_ptTree1,_ptTree0);
                        PROG_EXIT(assignment_end_exit,"assignment_end")
#line 2744 "cplus.met"
                    }
#line 2744 "cplus.met"
                    ReplaceTree(_ptRes1, 2, _ptTree1);
#line 2744 "cplus.met"
                    _ptTree0=_ptRes1;
#line 2744 "cplus.met"
                }
#line 2744 "cplus.met"
                _retValue =_ptTree0;
#line 2744 "cplus.met"
                goto assignment_end_ret;
#line 2744 "cplus.met"
            }
#line 2744 "cplus.met"
            break;
#line 2744 "cplus.met"
#line 2745 "cplus.met"
        case ETCOEGAL : 
#line 2745 "cplus.met"
            tokenAhead = 0 ;
#line 2745 "cplus.met"
            CommTerm();
#line 2745 "cplus.met"
#line 2745 "cplus.met"
            {
#line 2745 "cplus.met"
                PPTREE _ptTree0=0;
#line 2745 "cplus.met"
                {
#line 2745 "cplus.met"
                    PPTREE _ptTree1=0,_ptRes1=0;
#line 2745 "cplus.met"
                    _ptRes1= MakeTree(AND_AFF, 2);
#line 2745 "cplus.met"
                    if ( (_ptTree1=NQUICK_CALL(_Tak(assignment_expression)(error_free), 21, cplus))== (PPTREE) -1 ) {
#line 2745 "cplus.met"
                        MulFreeTree(3,_ptRes1,_ptTree1,_ptTree0);
                        PROG_EXIT(assignment_end_exit,"assignment_end")
#line 2745 "cplus.met"
                    }
#line 2745 "cplus.met"
                    ReplaceTree(_ptRes1, 2, _ptTree1);
#line 2745 "cplus.met"
                    _ptTree0=_ptRes1;
#line 2745 "cplus.met"
                }
#line 2745 "cplus.met"
                _retValue =_ptTree0;
#line 2745 "cplus.met"
                goto assignment_end_ret;
#line 2745 "cplus.met"
            }
#line 2745 "cplus.met"
            break;
#line 2745 "cplus.met"
#line 2746 "cplus.met"
        case VBAREGAL : 
#line 2746 "cplus.met"
            tokenAhead = 0 ;
#line 2746 "cplus.met"
            CommTerm();
#line 2746 "cplus.met"
#line 2746 "cplus.met"
            {
#line 2746 "cplus.met"
                PPTREE _ptTree0=0;
#line 2746 "cplus.met"
                {
#line 2746 "cplus.met"
                    PPTREE _ptTree1=0,_ptRes1=0;
#line 2746 "cplus.met"
                    _ptRes1= MakeTree(OR_AFF, 2);
#line 2746 "cplus.met"
                    if ( (_ptTree1=NQUICK_CALL(_Tak(assignment_expression)(error_free), 21, cplus))== (PPTREE) -1 ) {
#line 2746 "cplus.met"
                        MulFreeTree(3,_ptRes1,_ptTree1,_ptTree0);
                        PROG_EXIT(assignment_end_exit,"assignment_end")
#line 2746 "cplus.met"
                    }
#line 2746 "cplus.met"
                    ReplaceTree(_ptRes1, 2, _ptTree1);
#line 2746 "cplus.met"
                    _ptTree0=_ptRes1;
#line 2746 "cplus.met"
                }
#line 2746 "cplus.met"
                _retValue =_ptTree0;
#line 2746 "cplus.met"
                goto assignment_end_ret;
#line 2746 "cplus.met"
            }
#line 2746 "cplus.met"
            break;
#line 2746 "cplus.met"
#line 2747 "cplus.met"
        case CHAPEGAL : 
#line 2747 "cplus.met"
            tokenAhead = 0 ;
#line 2747 "cplus.met"
            CommTerm();
#line 2747 "cplus.met"
#line 2747 "cplus.met"
            {
#line 2747 "cplus.met"
                PPTREE _ptTree0=0;
#line 2747 "cplus.met"
                {
#line 2747 "cplus.met"
                    PPTREE _ptTree1=0,_ptRes1=0;
#line 2747 "cplus.met"
                    _ptRes1= MakeTree(XOR_AFF, 2);
#line 2747 "cplus.met"
                    if ( (_ptTree1=NQUICK_CALL(_Tak(assignment_expression)(error_free), 21, cplus))== (PPTREE) -1 ) {
#line 2747 "cplus.met"
                        MulFreeTree(3,_ptRes1,_ptTree1,_ptTree0);
                        PROG_EXIT(assignment_end_exit,"assignment_end")
#line 2747 "cplus.met"
                    }
#line 2747 "cplus.met"
                    ReplaceTree(_ptRes1, 2, _ptTree1);
#line 2747 "cplus.met"
                    _ptTree0=_ptRes1;
#line 2747 "cplus.met"
                }
#line 2747 "cplus.met"
                _retValue =_ptTree0;
#line 2747 "cplus.met"
                goto assignment_end_ret;
#line 2747 "cplus.met"
            }
#line 2747 "cplus.met"
            break;
#line 2747 "cplus.met"
        default :
#line 2747 "cplus.met"
            CASE_EXIT(assignment_end_exit,"either = or *= or SLASEGAL or %= or += or -= or <<= or >>= or &= or |= or ^=")
#line 2747 "cplus.met"
            break;
#line 2747 "cplus.met"
    }
#line 2747 "cplus.met"
#line 2747 "cplus.met"
#line 2748 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2748 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 2748 "cplus.met"
return((PPTREE) 0);
#line 2748 "cplus.met"

#line 2748 "cplus.met"
assignment_end_exit :
#line 2748 "cplus.met"

#line 2748 "cplus.met"
    _Debug = TRACE_RULE("assignment_end",TRACE_EXIT,(PPTREE)0);
#line 2748 "cplus.met"
    _funcLevel--;
#line 2748 "cplus.met"
    return((PPTREE) -1) ;
#line 2748 "cplus.met"

#line 2748 "cplus.met"
assignment_end_ret :
#line 2748 "cplus.met"
    
#line 2748 "cplus.met"
    _Debug = TRACE_RULE("assignment_end",TRACE_RETURN,_retValue);
#line 2748 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2748 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 2748 "cplus.met"
    return _retValue ;
#line 2748 "cplus.met"
}
#line 2748 "cplus.met"

#line 2748 "cplus.met"
#line 2751 "cplus.met"
PPTREE cplus::assignment_expression ( int error_free)
#line 2751 "cplus.met"
{
#line 2751 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 2751 "cplus.met"
    int _value,_nbPre = 0 ;
#line 2751 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 2751 "cplus.met"
    int _Debug = TRACE_RULE("assignment_expression",TRACE_ENTER,(PPTREE)0);
#line 2751 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 2751 "cplus.met"
#line 2751 "cplus.met"
    PPTREE expTree = (PPTREE) 0,expFollow = (PPTREE) 0;
#line 2751 "cplus.met"
#line 2753 "cplus.met"
    if ( (expTree=NQUICK_CALL(_Tak(conditional_expression)(error_free), 34, cplus))== (PPTREE) -1 ) {
#line 2753 "cplus.met"
        MulFreeTree(2,expFollow,expTree);
        PROG_EXIT(assignment_expression_exit,"assignment_expression")
#line 2753 "cplus.met"
    }
#line 2753 "cplus.met"
#line 2754 "cplus.met"
    if (NPUSH_CALL_AFF_VERIF(expFollow = ,_Tak(assignment_end), 20, cplus)){
#line 2754 "cplus.met"
#line 2755 "cplus.met"
#line 2756 "cplus.met"
        ReplaceTree(expFollow ,1 ,expTree );
#line 2756 "cplus.met"
#line 2757 "cplus.met"
        expTree = expFollow ;
#line 2757 "cplus.met"
#line 2757 "cplus.met"
#line 2757 "cplus.met"
    }
#line 2757 "cplus.met"
#line 2759 "cplus.met"
    {
#line 2759 "cplus.met"
        _retValue = expTree ;
#line 2759 "cplus.met"
        goto assignment_expression_ret;
#line 2759 "cplus.met"
        
#line 2759 "cplus.met"
    }
#line 2759 "cplus.met"
#line 2759 "cplus.met"
#line 2759 "cplus.met"

#line 2760 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2760 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 2760 "cplus.met"
return((PPTREE) 0);
#line 2760 "cplus.met"

#line 2760 "cplus.met"
assignment_expression_exit :
#line 2760 "cplus.met"

#line 2760 "cplus.met"
    _Debug = TRACE_RULE("assignment_expression",TRACE_EXIT,(PPTREE)0);
#line 2760 "cplus.met"
    _funcLevel--;
#line 2760 "cplus.met"
    return((PPTREE) -1) ;
#line 2760 "cplus.met"

#line 2760 "cplus.met"
assignment_expression_ret :
#line 2760 "cplus.met"
    
#line 2760 "cplus.met"
    _Debug = TRACE_RULE("assignment_expression",TRACE_RETURN,_retValue);
#line 2760 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2760 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 2760 "cplus.met"
    return _retValue ;
#line 2760 "cplus.met"
}
#line 2760 "cplus.met"

#line 2760 "cplus.met"
#line 2249 "cplus.met"
PPTREE cplus::attribute_call ( int error_free)
#line 2249 "cplus.met"
{
#line 2249 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 2249 "cplus.met"
    int _value,_nbPre = 0 ;
#line 2249 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 2249 "cplus.met"
    int _Debug = TRACE_RULE("attribute_call",TRACE_ENTER,(PPTREE)0);
#line 2249 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 2249 "cplus.met"
#line 2249 "cplus.met"
    PPTREE retTree = (PPTREE) 0;
#line 2249 "cplus.met"
#line 2251 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 2251 "cplus.met"
    if (  !SEE_TOKEN( __ATTRIBUTE__,"__attribute__") || !(CommTerm(),1)) {
#line 2251 "cplus.met"
        MulFreeTree(1,retTree);
        TOKEN_EXIT(attribute_call_exit,"__attribute__")
#line 2251 "cplus.met"
    } else {
#line 2251 "cplus.met"
        tokenAhead = 0 ;
#line 2251 "cplus.met"
    }
#line 2251 "cplus.met"
#line 2252 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 2252 "cplus.met"
    if (  !SEE_TOKEN( POUV,"(") || !(CommTerm(),1)) {
#line 2252 "cplus.met"
        MulFreeTree(1,retTree);
        TOKEN_EXIT(attribute_call_exit,"(")
#line 2252 "cplus.met"
    } else {
#line 2252 "cplus.met"
        tokenAhead = 0 ;
#line 2252 "cplus.met"
    }
#line 2252 "cplus.met"
#line 2253 "cplus.met"
    {
#line 2253 "cplus.met"
        PPTREE _ptTree0=0,_ptRes0=0;
#line 2253 "cplus.met"
        _ptRes0= MakeTree(ATTRIBUTE_CALL, 1);
#line 2253 "cplus.met"
        if ( (_ptTree0=NQUICK_CALL(_Tak(expression)(error_free), 67, cplus))== (PPTREE) -1 ) {
#line 2253 "cplus.met"
            MulFreeTree(3,_ptRes0,_ptTree0,retTree);
            PROG_EXIT(attribute_call_exit,"attribute_call")
#line 2253 "cplus.met"
        }
#line 2253 "cplus.met"
        ReplaceTree(_ptRes0, 1, _ptTree0);
#line 2253 "cplus.met"
        retTree=_ptRes0;
#line 2253 "cplus.met"
    }
#line 2253 "cplus.met"
#line 2254 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 2254 "cplus.met"
    if (  !SEE_TOKEN( PFER,")") || !(CommTerm(),1)) {
#line 2254 "cplus.met"
        MulFreeTree(1,retTree);
        TOKEN_EXIT(attribute_call_exit,")")
#line 2254 "cplus.met"
    } else {
#line 2254 "cplus.met"
        tokenAhead = 0 ;
#line 2254 "cplus.met"
    }
#line 2254 "cplus.met"
#line 2255 "cplus.met"
    {
#line 2255 "cplus.met"
        _retValue = retTree ;
#line 2255 "cplus.met"
        goto attribute_call_ret;
#line 2255 "cplus.met"
        
#line 2255 "cplus.met"
    }
#line 2255 "cplus.met"
#line 2255 "cplus.met"
#line 2255 "cplus.met"

#line 2256 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2256 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 2256 "cplus.met"
return((PPTREE) 0);
#line 2256 "cplus.met"

#line 2256 "cplus.met"
attribute_call_exit :
#line 2256 "cplus.met"

#line 2256 "cplus.met"
    _Debug = TRACE_RULE("attribute_call",TRACE_EXIT,(PPTREE)0);
#line 2256 "cplus.met"
    _funcLevel--;
#line 2256 "cplus.met"
    return((PPTREE) -1) ;
#line 2256 "cplus.met"

#line 2256 "cplus.met"
attribute_call_ret :
#line 2256 "cplus.met"
    
#line 2256 "cplus.met"
    _Debug = TRACE_RULE("attribute_call",TRACE_RETURN,_retValue);
#line 2256 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2256 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 2256 "cplus.met"
    return _retValue ;
#line 2256 "cplus.met"
}
#line 2256 "cplus.met"

#line 2256 "cplus.met"
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
#line 3761 "cplus.met"
PPTREE cplus::bidon ( int error_free)
#line 3761 "cplus.met"
{
#line 3761 "cplus.met"
    int  _oldnoString = noString;
#line 3761 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 3761 "cplus.met"
    int _value,_nbPre = 0 ;
#line 3761 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 3761 "cplus.met"
    int _Debug = TRACE_RULE("bidon",TRACE_ENTER,(PPTREE)0);
#line 3761 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 3761 "cplus.met"
#line 3762 "cplus.met"
    {
#line 3762 "cplus.met"
        noString = 1 ;
#line 3762 "cplus.met"
#line 3763 "cplus.met"
#line 3763 "cplus.met"
        noString =  _oldnoString;
#line 3763 "cplus.met"
    }
#line 3763 "cplus.met"
#line 3763 "cplus.met"
#line 3764 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 3764 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 3764 "cplus.met"
noString =  _oldnoString;
#line 3764 "cplus.met"
return((PPTREE) 0);
#line 3764 "cplus.met"

#line 3764 "cplus.met"
bidon_exit :
#line 3764 "cplus.met"

#line 3764 "cplus.met"
    _Debug = TRACE_RULE("bidon",TRACE_EXIT,(PPTREE)0);
#line 3764 "cplus.met"
    _funcLevel--;
#line 3764 "cplus.met"
    noString =  _oldnoString;
#line 3764 "cplus.met"
    return((PPTREE) -1) ;
#line 3764 "cplus.met"

#line 3764 "cplus.met"
bidon_ret :
#line 3764 "cplus.met"
    
#line 3764 "cplus.met"
    _Debug = TRACE_RULE("bidon",TRACE_RETURN,_retValue);
#line 3764 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 3764 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 3764 "cplus.met"
    noString =  _oldnoString;
#line 3764 "cplus.met"
    return _retValue ;
#line 3764 "cplus.met"
}
#line 3764 "cplus.met"

#line 3764 "cplus.met"
#line 2710 "cplus.met"
PPTREE cplus::bit_field_decl ( int error_free)
#line 2710 "cplus.met"
{
#line 2710 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 2710 "cplus.met"
    int _value,_nbPre = 0 ;
#line 2710 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 2710 "cplus.met"
    int _Debug = TRACE_RULE("bit_field_decl",TRACE_ENTER,(PPTREE)0);
#line 2710 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 2710 "cplus.met"
#line 2710 "cplus.met"
    PPTREE retTree = (PPTREE) 0;
#line 2710 "cplus.met"
#line 2713 "cplus.met"
    {
#line 2713 "cplus.met"
        PPTREE _ptRes0=0;
#line 2713 "cplus.met"
        _ptRes0= MakeTree(TYP_BIT, 2);
#line 2713 "cplus.met"
        retTree=_ptRes0;
#line 2713 "cplus.met"
    }
#line 2713 "cplus.met"
#line 2715 "cplus.met"
    if ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN( IDENT,"IDENT")){
#line 2715 "cplus.met"
#line 2716 "cplus.met"
        {
#line 2716 "cplus.met"
            PPTREE _ptTree0=0;
#line 2716 "cplus.met"
            {
#line 2716 "cplus.met"
                PPTREE _ptTree1=0,_ptRes1=0;
#line 2716 "cplus.met"
                _ptRes1= MakeTree(IDENT, 1);
#line 2716 "cplus.met"
                (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 2716 "cplus.met"
                if ( ! TERM_OR_META(IDENT,"IDENT") || !(BUILD_TERM_META(_ptTree1))) {
#line 2716 "cplus.met"
                    MulFreeTree(4,_ptRes1,_ptTree1,_ptTree0,retTree);
                    TOKEN_EXIT(bit_field_decl_exit,"IDENT")
#line 2716 "cplus.met"
                } else {
#line 2716 "cplus.met"
                    tokenAhead = 0 ;
#line 2716 "cplus.met"
                }
#line 2716 "cplus.met"
                ReplaceTree(_ptRes1, 1, _ptTree1);
#line 2716 "cplus.met"
                _ptTree0=_ptRes1;
#line 2716 "cplus.met"
            }
#line 2716 "cplus.met"
            ReplaceTree(retTree , 1 , _ptTree0);
#line 2716 "cplus.met"
        }
#line 2716 "cplus.met"
#line 2716 "cplus.met"
    }
#line 2716 "cplus.met"
#line 2717 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 2717 "cplus.met"
    if (  !SEE_TOKEN( DPOI,":") || !(CommTerm(),1)) {
#line 2717 "cplus.met"
        MulFreeTree(1,retTree);
        TOKEN_EXIT(bit_field_decl_exit,":")
#line 2717 "cplus.met"
    } else {
#line 2717 "cplus.met"
        tokenAhead = 0 ;
#line 2717 "cplus.met"
    }
#line 2717 "cplus.met"
#line 2718 "cplus.met"
    {
#line 2718 "cplus.met"
        PPTREE _ptTree0=0;
#line 2718 "cplus.met"
        {
#line 2718 "cplus.met"
            PPTREE _ptTree1=0;
#line 2718 "cplus.met"
            if ( (_ptTree1=NQUICK_CALL(_Tak(assignment_expression)(error_free), 21, cplus))== (PPTREE) -1 ) {
#line 2718 "cplus.met"
                MulFreeTree(3,_ptTree1,_ptTree0,retTree);
                PROG_EXIT(bit_field_decl_exit,"bit_field_decl")
#line 2718 "cplus.met"
            }
#line 2718 "cplus.met"
            _ptTree0=ReplaceTree(retTree , 2 , _ptTree1);
#line 2718 "cplus.met"
        }
#line 2718 "cplus.met"
        _retValue =_ptTree0;
#line 2718 "cplus.met"
        goto bit_field_decl_ret;
#line 2718 "cplus.met"
    }
#line 2718 "cplus.met"
#line 2718 "cplus.met"
#line 2718 "cplus.met"

#line 2719 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2719 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 2719 "cplus.met"
return((PPTREE) 0);
#line 2719 "cplus.met"

#line 2719 "cplus.met"
bit_field_decl_exit :
#line 2719 "cplus.met"

#line 2719 "cplus.met"
    _Debug = TRACE_RULE("bit_field_decl",TRACE_EXIT,(PPTREE)0);
#line 2719 "cplus.met"
    _funcLevel--;
#line 2719 "cplus.met"
    return((PPTREE) -1) ;
#line 2719 "cplus.met"

#line 2719 "cplus.met"
bit_field_decl_ret :
#line 2719 "cplus.met"
    
#line 2719 "cplus.met"
    _Debug = TRACE_RULE("bit_field_decl",TRACE_RETURN,_retValue);
#line 2719 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2719 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 2719 "cplus.met"
    return _retValue ;
#line 2719 "cplus.met"
}
#line 2719 "cplus.met"

#line 2719 "cplus.met"
#line 2896 "cplus.met"
PPTREE cplus::cast_expression ( int error_free)
#line 2896 "cplus.met"
{
#line 2896 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 2896 "cplus.met"
    int _value,_nbPre = 0 ;
#line 2896 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 2896 "cplus.met"
    int _Debug = TRACE_RULE("cast_expression",TRACE_ENTER,(PPTREE)0);
#line 2896 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 2896 "cplus.met"
#line 2896 "cplus.met"
    PPTREE retTree = (PPTREE) 0;
#line 2896 "cplus.met"
#line 2898 "cplus.met"
    if (NPUSH_CALL_AFF_VERIF(retTree = ,_Tak(cast_expression_value), 27, cplus)){
#line 2898 "cplus.met"
#line 2899 "cplus.met"
        {
#line 2899 "cplus.met"
            _retValue = retTree ;
#line 2899 "cplus.met"
            goto cast_expression_ret;
#line 2899 "cplus.met"
            
#line 2899 "cplus.met"
        }
#line 2899 "cplus.met"
    } else {
#line 2899 "cplus.met"
#line 2901 "cplus.met"
        {
#line 2901 "cplus.met"
            PPTREE _ptTree0=0;
#line 2901 "cplus.met"
            if ( (_ptTree0=NQUICK_CALL(_Tak(unary_expression)(error_free), 157, cplus))== (PPTREE) -1 ) {
#line 2901 "cplus.met"
                MulFreeTree(2,_ptTree0,retTree);
                PROG_EXIT(cast_expression_exit,"cast_expression")
#line 2901 "cplus.met"
            }
#line 2901 "cplus.met"
            _retValue =_ptTree0;
#line 2901 "cplus.met"
            goto cast_expression_ret;
#line 2901 "cplus.met"
        }
#line 2901 "cplus.met"
    }
#line 2901 "cplus.met"
#line 2901 "cplus.met"
#line 2901 "cplus.met"

#line 2902 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2902 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 2902 "cplus.met"
return((PPTREE) 0);
#line 2902 "cplus.met"

#line 2902 "cplus.met"
cast_expression_exit :
#line 2902 "cplus.met"

#line 2902 "cplus.met"
    _Debug = TRACE_RULE("cast_expression",TRACE_EXIT,(PPTREE)0);
#line 2902 "cplus.met"
    _funcLevel--;
#line 2902 "cplus.met"
    return((PPTREE) -1) ;
#line 2902 "cplus.met"

#line 2902 "cplus.met"
cast_expression_ret :
#line 2902 "cplus.met"
    
#line 2902 "cplus.met"
    _Debug = TRACE_RULE("cast_expression",TRACE_RETURN,_retValue);
#line 2902 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2902 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 2902 "cplus.met"
    return _retValue ;
#line 2902 "cplus.met"
}
#line 2902 "cplus.met"

#line 2902 "cplus.met"
#line 2888 "cplus.met"
PPTREE cplus::cast_expression_value ( int error_free)
#line 2888 "cplus.met"
{
#line 2888 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 2888 "cplus.met"
    int _value,_nbPre = 0 ;
#line 2888 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 2888 "cplus.met"
    int _Debug = TRACE_RULE("cast_expression_value",TRACE_ENTER,(PPTREE)0);
#line 2888 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 2888 "cplus.met"
#line 2888 "cplus.met"
    PPTREE ret = (PPTREE) 0;
#line 2888 "cplus.met"
#line 2890 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 2890 "cplus.met"
    if (  !SEE_TOKEN( POUV,"(") || !(CommTerm(),1)) {
#line 2890 "cplus.met"
        MulFreeTree(1,ret);
        TOKEN_EXIT(cast_expression_value_exit,"(")
#line 2890 "cplus.met"
    } else {
#line 2890 "cplus.met"
        tokenAhead = 0 ;
#line 2890 "cplus.met"
    }
#line 2890 "cplus.met"
#line 2891 "cplus.met"
    if ( (ret=NQUICK_CALL(_Tak(type_name)(error_free), 153, cplus))== (PPTREE) -1 ) {
#line 2891 "cplus.met"
        MulFreeTree(1,ret);
        PROG_EXIT(cast_expression_value_exit,"cast_expression_value")
#line 2891 "cplus.met"
    }
#line 2891 "cplus.met"
#line 2892 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 2892 "cplus.met"
    if (  !SEE_TOKEN( PFER,")") || !(CommTerm(),1)) {
#line 2892 "cplus.met"
        MulFreeTree(1,ret);
        TOKEN_EXIT(cast_expression_value_exit,")")
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
        PPTREE _ptTree0=0;
#line 2893 "cplus.met"
        {
#line 2893 "cplus.met"
            PPTREE _ptTree1=0,_ptRes1=0;
#line 2893 "cplus.met"
            _ptRes1= MakeTree(CAST, 2);
#line 2893 "cplus.met"
            ReplaceTree(_ptRes1, 1, ret );
#line 2893 "cplus.met"
            if ( (_ptTree1=NQUICK_CALL(_Tak(cast_expression)(error_free), 26, cplus))== (PPTREE) -1 ) {
#line 2893 "cplus.met"
                MulFreeTree(4,_ptRes1,_ptTree1,_ptTree0,ret);
                PROG_EXIT(cast_expression_value_exit,"cast_expression_value")
#line 2893 "cplus.met"
            }
#line 2893 "cplus.met"
            ReplaceTree(_ptRes1, 2, _ptTree1);
#line 2893 "cplus.met"
            _ptTree0=_ptRes1;
#line 2893 "cplus.met"
        }
#line 2893 "cplus.met"
        _retValue =_ptTree0;
#line 2893 "cplus.met"
        goto cast_expression_value_ret;
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
cast_expression_value_exit :
#line 2894 "cplus.met"

#line 2894 "cplus.met"
    _Debug = TRACE_RULE("cast_expression_value",TRACE_EXIT,(PPTREE)0);
#line 2894 "cplus.met"
    _funcLevel--;
#line 2894 "cplus.met"
    return((PPTREE) -1) ;
#line 2894 "cplus.met"

#line 2894 "cplus.met"
cast_expression_value_ret :
#line 2894 "cplus.met"
    
#line 2894 "cplus.met"
    _Debug = TRACE_RULE("cast_expression_value",TRACE_RETURN,_retValue);
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
                    if ( (_ptTree1=NQUICK_CALL(_Tak(macro)(error_free), 97, cplus))== (PPTREE) -1 ) {
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
                    if ( (_ptTree1=NQUICK_CALL(_Tak(macro)(error_free), 97, cplus))== (PPTREE) -1 ) {
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
                    if ( (_ptTree1=NQUICK_CALL(_Tak(macro)(error_free), 97, cplus))== (PPTREE) -1 ) {
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
        if ( (retTree=NQUICK_CALL(_Tak(type_specifier)(error_free), 154, cplus))== (PPTREE) -1 ) {
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
        if ( (_ptTree0=NQUICK_CALL(_Tak(range_modifier_ident)(error_free), 129, cplus))== (PPTREE) -1 ) {
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
                        if ( (_ptTree0=NQUICK_CALL(_Tak(protect_declare)(error_free), 119, cplus))== (PPTREE) -1 ) {
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
                        if ( (_ptTree0=NQUICK_CALL(_Tak(protect_declare)(error_free), 119, cplus))== (PPTREE) -1 ) {
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
                        if ( (_ptTree0=NQUICK_CALL(_Tak(protect_declare)(error_free), 119, cplus))== (PPTREE) -1 ) {
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
            if ( (ret=NQUICK_CALL(_Tak(qualified_name)(error_free), 122, cplus))== (PPTREE) -1 ) {
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
                if ( (_ptTree0=NQUICK_CALL(_Tak(qualified_name)(error_free), 122, cplus))== (PPTREE) -1 ) {
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
#line 3433 "cplus.met"
PPTREE cplus::compound_statement ( int error_free)
#line 3433 "cplus.met"
{
#line 3433 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 3433 "cplus.met"
    int _value,_nbPre = 0 ;
#line 3433 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 3433 "cplus.met"
    int _Debug = TRACE_RULE("compound_statement",TRACE_ENTER,(PPTREE)0);
#line 3433 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 3433 "cplus.met"
#line 3433 "cplus.met"
    PPTREE _addlist1 = (PPTREE) 0;
#line 3433 "cplus.met"
#line 3433 "cplus.met"
    PPTREE statList = (PPTREE) 0,stat = (PPTREE) 0;
#line 3433 "cplus.met"
#line 3435 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3435 "cplus.met"
    if (  !SEE_TOKEN( AOUV,"{") || !(CommTerm(),1)) {
#line 3435 "cplus.met"
        MulFreeTree(3,_addlist1,stat,statList);
        TOKEN_EXIT(compound_statement_exit,"{")
#line 3435 "cplus.met"
    } else {
#line 3435 "cplus.met"
        tokenAhead = 0 ;
#line 3435 "cplus.met"
    }
#line 3435 "cplus.met"
#line 3436 "cplus.met"
     debut :
#line 3436 "cplus.met"
#line 3436 "cplus.met"
    _addlist1 = statList ;
#line 3436 "cplus.met"
#line 3438 "cplus.met"
    while (((((NPUSH_CALL_AFF_VERIF(stat = ,_Tak(statement), 145, cplus)) || 
#line 3438 "cplus.met"
             (NPUSH_CALL_AFF_VERIF(stat = ,_Tak(data_declaration), 45, cplus))) || 
#line 3438 "cplus.met"
            (NPUSH_CALL_AFF_VERIF(stat = ,_Tak(stat_dir), 141, cplus))) || 
#line 3438 "cplus.met"
           (NPUSH_CALL_AFF_VERIF(stat = ,_Tak(exception), 63, cplus))) || 
#line 3438 "cplus.met"
          (NPUSH_CALL_AFF_VERIF(stat = ,_Tak(ext_data_declaration), 76, cplus))) { 
#line 3438 "cplus.met"
#line 3440 "cplus.met"
#line 3440 "cplus.met"
        _addlist1 =AddList(_addlist1 ,stat );
#line 3440 "cplus.met"
#line 3440 "cplus.met"
        if (statList){
#line 3440 "cplus.met"
#line 3440 "cplus.met"
            _addlist1 = SonTree (_addlist1 ,2 );
#line 3440 "cplus.met"
        } else {
#line 3440 "cplus.met"
#line 3440 "cplus.met"
            statList = _addlist1 ;
#line 3440 "cplus.met"
        }
#line 3440 "cplus.met"
    } 
#line 3440 "cplus.met"
#line 3441 "cplus.met"
    {
#line 3441 "cplus.met"
        PPTREE _ptTree0=0;
#line 3441 "cplus.met"
        if ( (_ptTree0=NQUICK_CALL(_Tak(none_statement)(error_free), 108, cplus))== (PPTREE) -1 ) {
#line 3441 "cplus.met"
            MulFreeTree(4,_ptTree0,_addlist1,stat,statList);
            PROG_EXIT(compound_statement_exit,"compound_statement")
#line 3441 "cplus.met"
        }
#line 3441 "cplus.met"
        statList =AddList(statList , _ptTree0);
#line 3441 "cplus.met"
    }
#line 3441 "cplus.met"
#line 3442 "cplus.met"
    if (! ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN(AFER,"}") && (tokenAhead = 0,CommTerm(),1))){
#line 3442 "cplus.met"
#line 3443 "cplus.met"
#line 3444 "cplus.met"
        dumperror ();
#line 3444 "cplus.met"
#line 3445 "cplus.met"
        (tokenAhead == 5|| (LexEndLine(),TRACE_LEX(1)));
#line 3445 "cplus.met"
        if ( ! TERM_OR_META(END_LINE,"END_LINE") || !(CommTerm(),1)) {
#line 3445 "cplus.met"
            MulFreeTree(3,_addlist1,stat,statList);
            TOKEN_EXIT(compound_statement_exit,"END_LINE")
#line 3445 "cplus.met"
        } else {
#line 3445 "cplus.met"
            tokenAhead = 0 ;
#line 3445 "cplus.met"
        }
#line 3445 "cplus.met"
#line 3446 "cplus.met"
         hasGotError = 1 ;
#line 3446 "cplus.met"
#line 3447 "cplus.met"
         goto debut ;
#line 3447 "cplus.met"
#line 3447 "cplus.met"
#line 3447 "cplus.met"
    }
#line 3447 "cplus.met"
#line 3449 "cplus.met"
    {
#line 3449 "cplus.met"
        PPTREE _ptTree0=0;
#line 3449 "cplus.met"
        {
#line 3449 "cplus.met"
            PPTREE _ptRes1=0;
#line 3449 "cplus.met"
            _ptRes1= MakeTree(COMPOUND, 1);
#line 3449 "cplus.met"
            ReplaceTree(_ptRes1, 1, statList );
#line 3449 "cplus.met"
            _ptTree0=_ptRes1;
#line 3449 "cplus.met"
        }
#line 3449 "cplus.met"
        _retValue =_ptTree0;
#line 3449 "cplus.met"
        goto compound_statement_ret;
#line 3449 "cplus.met"
    }
#line 3449 "cplus.met"
#line 3449 "cplus.met"
#line 3449 "cplus.met"

#line 3450 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 3450 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 3450 "cplus.met"
return((PPTREE) 0);
#line 3450 "cplus.met"

#line 3450 "cplus.met"
compound_statement_exit :
#line 3450 "cplus.met"

#line 3450 "cplus.met"
    _Debug = TRACE_RULE("compound_statement",TRACE_EXIT,(PPTREE)0);
#line 3450 "cplus.met"
    _funcLevel--;
#line 3450 "cplus.met"
    return((PPTREE) -1) ;
#line 3450 "cplus.met"

#line 3450 "cplus.met"
compound_statement_ret :
#line 3450 "cplus.met"
    
#line 3450 "cplus.met"
    _Debug = TRACE_RULE("compound_statement",TRACE_RETURN,_retValue);
#line 3450 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 3450 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 3450 "cplus.met"
    return _retValue ;
#line 3450 "cplus.met"
}
#line 3450 "cplus.met"

#line 3450 "cplus.met"
#line 2762 "cplus.met"
PPTREE cplus::conditional_expression ( int error_free)
#line 2762 "cplus.met"
{
#line 2762 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 2762 "cplus.met"
    int _value,_nbPre = 0 ;
#line 2762 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 2762 "cplus.met"
    int _Debug = TRACE_RULE("conditional_expression",TRACE_ENTER,(PPTREE)0);
#line 2762 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 2762 "cplus.met"
#line 2762 "cplus.met"
    PPTREE expTree = (PPTREE) 0,condTree = (PPTREE) 0;
#line 2762 "cplus.met"
#line 2764 "cplus.met"
    if ( (expTree=NQUICK_CALL(_Tak(logical_or_expression)(error_free), 95, cplus))== (PPTREE) -1 ) {
#line 2764 "cplus.met"
        MulFreeTree(2,condTree,expTree);
        PROG_EXIT(conditional_expression_exit,"conditional_expression")
#line 2764 "cplus.met"
    }
#line 2764 "cplus.met"
#line 2765 "cplus.met"
    if ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN(INTE,"?") && (tokenAhead = 0,CommTerm(),1)){
#line 2765 "cplus.met"
#line 2766 "cplus.met"
#line 2767 "cplus.met"
        {
#line 2767 "cplus.met"
            PPTREE _ptRes0=0;
#line 2767 "cplus.met"
            _ptRes0= MakeTree(COND_AFF, 3);
#line 2767 "cplus.met"
            ReplaceTree(_ptRes0, 1, expTree );
#line 2767 "cplus.met"
            condTree=_ptRes0;
#line 2767 "cplus.met"
        }
#line 2767 "cplus.met"
#line 2768 "cplus.met"
        {
#line 2768 "cplus.met"
            PPTREE _ptTree0=0;
#line 2768 "cplus.met"
            if ( (_ptTree0=NQUICK_CALL(_Tak(expression)(error_free), 67, cplus))== (PPTREE) -1 ) {
#line 2768 "cplus.met"
                MulFreeTree(3,_ptTree0,condTree,expTree);
                PROG_EXIT(conditional_expression_exit,"conditional_expression")
#line 2768 "cplus.met"
            }
#line 2768 "cplus.met"
            ReplaceTree(condTree , 2 , _ptTree0);
#line 2768 "cplus.met"
        }
#line 2768 "cplus.met"
#line 2769 "cplus.met"
        (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 2769 "cplus.met"
        if (  !SEE_TOKEN( DPOI,":") || !(CommTerm(),1)) {
#line 2769 "cplus.met"
            MulFreeTree(2,condTree,expTree);
            TOKEN_EXIT(conditional_expression_exit,":")
#line 2769 "cplus.met"
        } else {
#line 2769 "cplus.met"
            tokenAhead = 0 ;
#line 2769 "cplus.met"
        }
#line 2769 "cplus.met"
#line 2770 "cplus.met"
        {
#line 2770 "cplus.met"
            PPTREE _ptTree0=0;
#line 2770 "cplus.met"
            {
#line 2770 "cplus.met"
                PPTREE _ptTree1=0;
#line 2770 "cplus.met"
                if ( (_ptTree1=NQUICK_CALL(_Tak(conditional_expression)(error_free), 34, cplus))== (PPTREE) -1 ) {
#line 2770 "cplus.met"
                    MulFreeTree(4,_ptTree1,_ptTree0,condTree,expTree);
                    PROG_EXIT(conditional_expression_exit,"conditional_expression")
#line 2770 "cplus.met"
                }
#line 2770 "cplus.met"
                _ptTree0=ReplaceTree(condTree , 3 , _ptTree1);
#line 2770 "cplus.met"
            }
#line 2770 "cplus.met"
            _retValue =_ptTree0;
#line 2770 "cplus.met"
            goto conditional_expression_ret;
#line 2770 "cplus.met"
        }
#line 2770 "cplus.met"
#line 2770 "cplus.met"
#line 2770 "cplus.met"
    } else {
#line 2770 "cplus.met"
#line 2773 "cplus.met"
        {
#line 2773 "cplus.met"
            _retValue = expTree ;
#line 2773 "cplus.met"
            goto conditional_expression_ret;
#line 2773 "cplus.met"
            
#line 2773 "cplus.met"
        }
#line 2773 "cplus.met"
    }
#line 2773 "cplus.met"
#line 2773 "cplus.met"
#line 2773 "cplus.met"

#line 2774 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2774 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 2774 "cplus.met"
return((PPTREE) 0);
#line 2774 "cplus.met"

#line 2774 "cplus.met"
conditional_expression_exit :
#line 2774 "cplus.met"

#line 2774 "cplus.met"
    _Debug = TRACE_RULE("conditional_expression",TRACE_EXIT,(PPTREE)0);
#line 2774 "cplus.met"
    _funcLevel--;
#line 2774 "cplus.met"
    return((PPTREE) -1) ;
#line 2774 "cplus.met"

#line 2774 "cplus.met"
conditional_expression_ret :
#line 2774 "cplus.met"
    
#line 2774 "cplus.met"
    _Debug = TRACE_RULE("conditional_expression",TRACE_RETURN,_retValue);
#line 2774 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2774 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 2774 "cplus.met"
    return _retValue ;
#line 2774 "cplus.met"
}
#line 2774 "cplus.met"

#line 2774 "cplus.met"
#line 2232 "cplus.met"
PPTREE cplus::const_or_volatile ( int error_free)
#line 2232 "cplus.met"
{
#line 2232 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 2232 "cplus.met"
    int _value,_nbPre = 0 ;
#line 2232 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 2232 "cplus.met"
    int _Debug = TRACE_RULE("const_or_volatile",TRACE_ENTER,(PPTREE)0);
#line 2232 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 2232 "cplus.met"
#line 2233 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 2233 "cplus.met"
    switch( lexEl.Value) {
#line 2233 "cplus.met"
#line 2234 "cplus.met"
        case CONST : 
#line 2234 "cplus.met"
#line 2234 "cplus.met"
            {
#line 2234 "cplus.met"
                PPTREE _ptTree0=0;
#line 2234 "cplus.met"
                {
#line 2234 "cplus.met"
                    PPTREE _ptTree1=0,_ptRes1=0;
#line 2234 "cplus.met"
                    _ptRes1= MakeTree(RANGE_MODIFIER, 2);
#line 2234 "cplus.met"
                    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 2234 "cplus.met"
                    if (  !SEE_TOKEN( CONST,"const") || !(_ptTree1 = CommString(lexEl.string()))) {
#line 2234 "cplus.met"
                        MulFreeTree(3,_ptRes1,_ptTree1,_ptTree0);
                        TOKEN_EXIT(const_or_volatile_exit,"const")
#line 2234 "cplus.met"
                    } else {
#line 2234 "cplus.met"
                        tokenAhead = 0 ;
#line 2234 "cplus.met"
                    }
#line 2234 "cplus.met"
                    ReplaceTree(_ptRes1, 1, _ptTree1);
#line 2234 "cplus.met"
                    _ptTree0=_ptRes1;
#line 2234 "cplus.met"
                }
#line 2234 "cplus.met"
                _retValue =_ptTree0;
#line 2234 "cplus.met"
                goto const_or_volatile_ret;
#line 2234 "cplus.met"
            }
#line 2234 "cplus.met"
            break;
#line 2234 "cplus.met"
#line 2235 "cplus.met"
        case VOLATILE : 
#line 2235 "cplus.met"
#line 2235 "cplus.met"
            {
#line 2235 "cplus.met"
                PPTREE _ptTree0=0;
#line 2235 "cplus.met"
                {
#line 2235 "cplus.met"
                    PPTREE _ptTree1=0,_ptRes1=0;
#line 2235 "cplus.met"
                    _ptRes1= MakeTree(RANGE_MODIFIER, 2);
#line 2235 "cplus.met"
                    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 2235 "cplus.met"
                    if (  !SEE_TOKEN( VOLATILE,"volatile") || !(_ptTree1 = CommString(lexEl.string()))) {
#line 2235 "cplus.met"
                        MulFreeTree(3,_ptRes1,_ptTree1,_ptTree0);
                        TOKEN_EXIT(const_or_volatile_exit,"volatile")
#line 2235 "cplus.met"
                    } else {
#line 2235 "cplus.met"
                        tokenAhead = 0 ;
#line 2235 "cplus.met"
                    }
#line 2235 "cplus.met"
                    ReplaceTree(_ptRes1, 1, _ptTree1);
#line 2235 "cplus.met"
                    _ptTree0=_ptRes1;
#line 2235 "cplus.met"
                }
#line 2235 "cplus.met"
                _retValue =_ptTree0;
#line 2235 "cplus.met"
                goto const_or_volatile_ret;
#line 2235 "cplus.met"
            }
#line 2235 "cplus.met"
            break;
#line 2235 "cplus.met"
        default :
#line 2235 "cplus.met"
            CASE_EXIT(const_or_volatile_exit,"either const or volatile")
#line 2235 "cplus.met"
            break;
#line 2235 "cplus.met"
    }
#line 2235 "cplus.met"
#line 2235 "cplus.met"
#line 2236 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2236 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 2236 "cplus.met"
return((PPTREE) 0);
#line 2236 "cplus.met"

#line 2236 "cplus.met"
const_or_volatile_exit :
#line 2236 "cplus.met"

#line 2236 "cplus.met"
    _Debug = TRACE_RULE("const_or_volatile",TRACE_EXIT,(PPTREE)0);
#line 2236 "cplus.met"
    _funcLevel--;
#line 2236 "cplus.met"
    return((PPTREE) -1) ;
#line 2236 "cplus.met"

#line 2236 "cplus.met"
const_or_volatile_ret :
#line 2236 "cplus.met"
    
#line 2236 "cplus.met"
    _Debug = TRACE_RULE("const_or_volatile",TRACE_RETURN,_retValue);
#line 2236 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2236 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 2236 "cplus.met"
    return _retValue ;
#line 2236 "cplus.met"
}
#line 2236 "cplus.met"

#line 2236 "cplus.met"
