/*************************************************************************/
/*                                                                       */
/*        Produced by MetaGen version 2.0  -    1989-2006                 */
/*       Syntaxic Analyzer Meta Generator developped by                  */
/*                  Eric Lavillonniere                                   */
/*                                                                       */
/*************************************************************************/

#include "token.h"
#include "cplus.h"


#line 1739 "cplus.met"
PPTREE cplus::type_specifier_without_param ( int error_free)
#line 1739 "cplus.met"
{
#line 1739 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 1739 "cplus.met"
    int _value,_nbPre = 0 ;
#line 1739 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 1739 "cplus.met"
    int _Debug = TRACE_RULE("type_specifier_without_param",TRACE_ENTER,(PPTREE)0);
#line 1739 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 1739 "cplus.met"
#line 1739 "cplus.met"
    PPTREE valTreeR = (PPTREE) 0;
#line 1739 "cplus.met"
#line 1741 "cplus.met"
    if (NPUSH_CALL_AFF_VERIF(valTreeR = ,_Tak(range_modifier), 122, cplus)){
#line 1741 "cplus.met"
#line 1742 "cplus.met"
        {
#line 1742 "cplus.met"
            PPTREE _ptTree0=0;
#line 1742 "cplus.met"
            {
#line 1742 "cplus.met"
                PPTREE _ptTree1=0;
#line 1742 "cplus.met"
                if ( (_ptTree1=NQUICK_CALL(_Tak(type_specifier)(error_free), 149, cplus))== (PPTREE) -1 ) {
#line 1742 "cplus.met"
                    MulFreeTree(3,_ptTree1,_ptTree0,valTreeR);
                    PROG_EXIT(type_specifier_without_param_exit,"type_specifier_without_param")
#line 1742 "cplus.met"
                }
#line 1742 "cplus.met"
                _ptTree0=ReplaceTree(valTreeR , 2 , _ptTree1);
#line 1742 "cplus.met"
            }
#line 1742 "cplus.met"
            _retValue =_ptTree0;
#line 1742 "cplus.met"
            goto type_specifier_without_param_ret;
#line 1742 "cplus.met"
        }
#line 1742 "cplus.met"
    }
#line 1742 "cplus.met"
#line 1743 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 1743 "cplus.met"
    switch( lexEl.Value) {
#line 1743 "cplus.met"
#line 1744 "cplus.met"
        case ENUM : 
#line 1744 "cplus.met"
#line 1744 "cplus.met"
            {
#line 1744 "cplus.met"
                PPTREE _ptTree0=0;
#line 1744 "cplus.met"
                if ( (_ptTree0=NQUICK_CALL(_Tak(enum_declarator)(error_free), 56, cplus))== (PPTREE) -1 ) {
#line 1744 "cplus.met"
                    MulFreeTree(2,_ptTree0,valTreeR);
                    PROG_EXIT(type_specifier_without_param_exit,"type_specifier_without_param")
#line 1744 "cplus.met"
                }
#line 1744 "cplus.met"
                _retValue =_ptTree0;
#line 1744 "cplus.met"
                goto type_specifier_without_param_ret;
#line 1744 "cplus.met"
            }
#line 1744 "cplus.met"
            break;
#line 1744 "cplus.met"
#line 1745 "cplus.met"
        case STRUCT : 
#line 1745 "cplus.met"
#line 1745 "cplus.met"
            {
#line 1745 "cplus.met"
                PPTREE _ptTree0=0;
#line 1745 "cplus.met"
                if ( (_ptTree0=NQUICK_CALL(_Tak(class_declaration)(error_free), 26, cplus))== (PPTREE) -1 ) {
#line 1745 "cplus.met"
                    MulFreeTree(2,_ptTree0,valTreeR);
                    PROG_EXIT(type_specifier_without_param_exit,"type_specifier_without_param")
#line 1745 "cplus.met"
                }
#line 1745 "cplus.met"
                _retValue =_ptTree0;
#line 1745 "cplus.met"
                goto type_specifier_without_param_ret;
#line 1745 "cplus.met"
            }
#line 1745 "cplus.met"
            break;
#line 1745 "cplus.met"
#line 1746 "cplus.met"
        case UNION : 
#line 1746 "cplus.met"
#line 1746 "cplus.met"
            {
#line 1746 "cplus.met"
                PPTREE _ptTree0=0;
#line 1746 "cplus.met"
                if ( (_ptTree0=NQUICK_CALL(_Tak(class_declaration)(error_free), 26, cplus))== (PPTREE) -1 ) {
#line 1746 "cplus.met"
                    MulFreeTree(2,_ptTree0,valTreeR);
                    PROG_EXIT(type_specifier_without_param_exit,"type_specifier_without_param")
#line 1746 "cplus.met"
                }
#line 1746 "cplus.met"
                _retValue =_ptTree0;
#line 1746 "cplus.met"
                goto type_specifier_without_param_ret;
#line 1746 "cplus.met"
            }
#line 1746 "cplus.met"
            break;
#line 1746 "cplus.met"
#line 1747 "cplus.met"
        case CLASS : 
#line 1747 "cplus.met"
#line 1747 "cplus.met"
            {
#line 1747 "cplus.met"
                PPTREE _ptTree0=0;
#line 1747 "cplus.met"
                if ( (_ptTree0=NQUICK_CALL(_Tak(class_declaration)(error_free), 26, cplus))== (PPTREE) -1 ) {
#line 1747 "cplus.met"
                    MulFreeTree(2,_ptTree0,valTreeR);
                    PROG_EXIT(type_specifier_without_param_exit,"type_specifier_without_param")
#line 1747 "cplus.met"
                }
#line 1747 "cplus.met"
                _retValue =_ptTree0;
#line 1747 "cplus.met"
                goto type_specifier_without_param_ret;
#line 1747 "cplus.met"
            }
#line 1747 "cplus.met"
            break;
#line 1747 "cplus.met"
#line 1748 "cplus.met"
        default : 
#line 1748 "cplus.met"
#line 1748 "cplus.met"
            {
#line 1748 "cplus.met"
                PPTREE _ptTree0=0;
#line 1748 "cplus.met"
                if ( (_ptTree0=NQUICK_CALL(_Tak(simple_type)(error_free), 132, cplus))== (PPTREE) -1 ) {
#line 1748 "cplus.met"
                    MulFreeTree(2,_ptTree0,valTreeR);
                    PROG_EXIT(type_specifier_without_param_exit,"type_specifier_without_param")
#line 1748 "cplus.met"
                }
#line 1748 "cplus.met"
                _retValue =_ptTree0;
#line 1748 "cplus.met"
                goto type_specifier_without_param_ret;
#line 1748 "cplus.met"
            }
#line 1748 "cplus.met"
            break;
#line 1748 "cplus.met"
    }
#line 1748 "cplus.met"
#line 1748 "cplus.met"
#line 1749 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1749 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 1749 "cplus.met"
return((PPTREE) 0);
#line 1749 "cplus.met"

#line 1749 "cplus.met"
type_specifier_without_param_exit :
#line 1749 "cplus.met"

#line 1749 "cplus.met"
    _Debug = TRACE_RULE("type_specifier_without_param",TRACE_EXIT,(PPTREE)0);
#line 1749 "cplus.met"
    _funcLevel--;
#line 1749 "cplus.met"
    return((PPTREE) -1) ;
#line 1749 "cplus.met"

#line 1749 "cplus.met"
type_specifier_without_param_ret :
#line 1749 "cplus.met"
    
#line 1749 "cplus.met"
    _Debug = TRACE_RULE("type_specifier_without_param",TRACE_RETURN,_retValue);
#line 1749 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1749 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 1749 "cplus.met"
    return _retValue ;
#line 1749 "cplus.met"
}
#line 1749 "cplus.met"

#line 1749 "cplus.met"
#line 1534 "cplus.met"
PPTREE cplus::typedef_and_declarator ( int error_free)
#line 1534 "cplus.met"
{
#line 1534 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 1534 "cplus.met"
    int _value,_nbPre = 0 ;
#line 1534 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 1534 "cplus.met"
    int _Debug = TRACE_RULE("typedef_and_declarator",TRACE_ENTER,(PPTREE)0);
#line 1534 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 1534 "cplus.met"
#line 1534 "cplus.met"
    PPTREE retTree = (PPTREE) 0;
#line 1534 "cplus.met"
#line 1536 "cplus.met"
    {
#line 1536 "cplus.met"
        PPTREE _ptTree0=0,_ptRes0=0;
#line 1536 "cplus.met"
        _ptRes0= MakeTree(TYPEDEF, 2);
#line 1536 "cplus.met"
        if ( (_ptTree0=NQUICK_CALL(_Tak(type_specifier)(error_free), 149, cplus))== (PPTREE) -1 ) {
#line 1536 "cplus.met"
            MulFreeTree(3,_ptRes0,_ptTree0,retTree);
            PROG_EXIT(typedef_and_declarator_exit,"typedef_and_declarator")
#line 1536 "cplus.met"
        }
#line 1536 "cplus.met"
        ReplaceTree(_ptRes0, 1, _ptTree0);
#line 1536 "cplus.met"
        retTree=_ptRes0;
#line 1536 "cplus.met"
    }
#line 1536 "cplus.met"
#line 1537 "cplus.met"
    {
#line 1537 "cplus.met"
        PPTREE _ptTree0=0;
#line 1537 "cplus.met"
        {
#line 1537 "cplus.met"
            PPTREE _ptTree1=0;
#line 1537 "cplus.met"
            if ( (_ptTree1=NQUICK_CALL(_Tak(declarator_list)(error_free), 49, cplus))== (PPTREE) -1 ) {
#line 1537 "cplus.met"
                MulFreeTree(3,_ptTree1,_ptTree0,retTree);
                PROG_EXIT(typedef_and_declarator_exit,"typedef_and_declarator")
#line 1537 "cplus.met"
            }
#line 1537 "cplus.met"
            _ptTree0=ReplaceTree(retTree , 2 , _ptTree1);
#line 1537 "cplus.met"
        }
#line 1537 "cplus.met"
        _retValue =_ptTree0;
#line 1537 "cplus.met"
        goto typedef_and_declarator_ret;
#line 1537 "cplus.met"
    }
#line 1537 "cplus.met"
#line 1537 "cplus.met"
#line 1537 "cplus.met"

#line 1538 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1538 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 1538 "cplus.met"
return((PPTREE) 0);
#line 1538 "cplus.met"

#line 1538 "cplus.met"
typedef_and_declarator_exit :
#line 1538 "cplus.met"

#line 1538 "cplus.met"
    _Debug = TRACE_RULE("typedef_and_declarator",TRACE_EXIT,(PPTREE)0);
#line 1538 "cplus.met"
    _funcLevel--;
#line 1538 "cplus.met"
    return((PPTREE) -1) ;
#line 1538 "cplus.met"

#line 1538 "cplus.met"
typedef_and_declarator_ret :
#line 1538 "cplus.met"
    
#line 1538 "cplus.met"
    _Debug = TRACE_RULE("typedef_and_declarator",TRACE_RETURN,_retValue);
#line 1538 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1538 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 1538 "cplus.met"
    return _retValue ;
#line 1538 "cplus.met"
}
#line 1538 "cplus.met"

#line 1538 "cplus.met"
#line 2767 "cplus.met"
PPTREE cplus::unary_expression ( int error_free)
#line 2767 "cplus.met"
{
#line 2767 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 2767 "cplus.met"
    int _value,_nbPre = 0 ;
#line 2767 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 2767 "cplus.met"
    int _Debug = TRACE_RULE("unary_expression",TRACE_ENTER,(PPTREE)0);
#line 2767 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 2767 "cplus.met"
#line 2767 "cplus.met"
    PPTREE expTree = (PPTREE) 0,inter = (PPTREE) 0;
#line 2767 "cplus.met"
#line 2769 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 2769 "cplus.met"
    switch( lexEl.Value) {
#line 2769 "cplus.met"
#line 2770 "cplus.met"
        case TIRE : 
#line 2770 "cplus.met"
            tokenAhead = 0 ;
#line 2770 "cplus.met"
            CommTerm();
#line 2770 "cplus.met"
#line 2770 "cplus.met"
            {
#line 2770 "cplus.met"
                PPTREE _ptTree0=0,_ptRes0=0;
#line 2770 "cplus.met"
                _ptRes0= MakeTree(NEG, 1);
#line 2770 "cplus.met"
                if ( (_ptTree0=NQUICK_CALL(_Tak(cast_expression)(error_free), 22, cplus))== (PPTREE) -1 ) {
#line 2770 "cplus.met"
                    MulFreeTree(4,_ptRes0,_ptTree0,expTree,inter);
                    PROG_EXIT(unary_expression_exit,"unary_expression")
#line 2770 "cplus.met"
                }
#line 2770 "cplus.met"
                ReplaceTree(_ptRes0, 1, _ptTree0);
#line 2770 "cplus.met"
                expTree=_ptRes0;
#line 2770 "cplus.met"
            }
#line 2770 "cplus.met"
            break;
#line 2770 "cplus.met"
#line 2771 "cplus.met"
        case PLUS : 
#line 2771 "cplus.met"
            tokenAhead = 0 ;
#line 2771 "cplus.met"
            CommTerm();
#line 2771 "cplus.met"
#line 2771 "cplus.met"
            {
#line 2771 "cplus.met"
                PPTREE _ptTree0=0,_ptRes0=0;
#line 2771 "cplus.met"
                _ptRes0= MakeTree(POS, 1);
#line 2771 "cplus.met"
                if ( (_ptTree0=NQUICK_CALL(_Tak(cast_expression)(error_free), 22, cplus))== (PPTREE) -1 ) {
#line 2771 "cplus.met"
                    MulFreeTree(4,_ptRes0,_ptTree0,expTree,inter);
                    PROG_EXIT(unary_expression_exit,"unary_expression")
#line 2771 "cplus.met"
                }
#line 2771 "cplus.met"
                ReplaceTree(_ptRes0, 1, _ptTree0);
#line 2771 "cplus.met"
                expTree=_ptRes0;
#line 2771 "cplus.met"
            }
#line 2771 "cplus.met"
            break;
#line 2771 "cplus.met"
#line 2772 "cplus.met"
        case TILD : 
#line 2772 "cplus.met"
            tokenAhead = 0 ;
#line 2772 "cplus.met"
            CommTerm();
#line 2772 "cplus.met"
#line 2772 "cplus.met"
            {
#line 2772 "cplus.met"
                PPTREE _ptTree0=0,_ptRes0=0;
#line 2772 "cplus.met"
                _ptRes0= MakeTree(LNEG, 1);
#line 2772 "cplus.met"
                if ( (_ptTree0=NQUICK_CALL(_Tak(cast_expression)(error_free), 22, cplus))== (PPTREE) -1 ) {
#line 2772 "cplus.met"
                    MulFreeTree(4,_ptRes0,_ptTree0,expTree,inter);
                    PROG_EXIT(unary_expression_exit,"unary_expression")
#line 2772 "cplus.met"
                }
#line 2772 "cplus.met"
                ReplaceTree(_ptRes0, 1, _ptTree0);
#line 2772 "cplus.met"
                expTree=_ptRes0;
#line 2772 "cplus.met"
            }
#line 2772 "cplus.met"
            break;
#line 2772 "cplus.met"
#line 2773 "cplus.met"
        case EXCL : 
#line 2773 "cplus.met"
            tokenAhead = 0 ;
#line 2773 "cplus.met"
            CommTerm();
#line 2773 "cplus.met"
#line 2773 "cplus.met"
            {
#line 2773 "cplus.met"
                PPTREE _ptTree0=0,_ptRes0=0;
#line 2773 "cplus.met"
                _ptRes0= MakeTree(NOT, 1);
#line 2773 "cplus.met"
                if ( (_ptTree0=NQUICK_CALL(_Tak(cast_expression)(error_free), 22, cplus))== (PPTREE) -1 ) {
#line 2773 "cplus.met"
                    MulFreeTree(4,_ptRes0,_ptTree0,expTree,inter);
                    PROG_EXIT(unary_expression_exit,"unary_expression")
#line 2773 "cplus.met"
                }
#line 2773 "cplus.met"
                ReplaceTree(_ptRes0, 1, _ptTree0);
#line 2773 "cplus.met"
                expTree=_ptRes0;
#line 2773 "cplus.met"
            }
#line 2773 "cplus.met"
            break;
#line 2773 "cplus.met"
#line 2774 "cplus.met"
        case ETOI : 
#line 2774 "cplus.met"
            tokenAhead = 0 ;
#line 2774 "cplus.met"
            CommTerm();
#line 2774 "cplus.met"
#line 2774 "cplus.met"
            {
#line 2774 "cplus.met"
                PPTREE _ptTree0=0,_ptRes0=0;
#line 2774 "cplus.met"
                _ptRes0= MakeTree(POINT, 1);
#line 2774 "cplus.met"
                if ( (_ptTree0=NQUICK_CALL(_Tak(cast_expression)(error_free), 22, cplus))== (PPTREE) -1 ) {
#line 2774 "cplus.met"
                    MulFreeTree(4,_ptRes0,_ptTree0,expTree,inter);
                    PROG_EXIT(unary_expression_exit,"unary_expression")
#line 2774 "cplus.met"
                }
#line 2774 "cplus.met"
                ReplaceTree(_ptRes0, 1, _ptTree0);
#line 2774 "cplus.met"
                expTree=_ptRes0;
#line 2774 "cplus.met"
            }
#line 2774 "cplus.met"
            break;
#line 2774 "cplus.met"
#line 2775 "cplus.met"
        case ETCO : 
#line 2775 "cplus.met"
            tokenAhead = 0 ;
#line 2775 "cplus.met"
            CommTerm();
#line 2775 "cplus.met"
#line 2775 "cplus.met"
            {
#line 2775 "cplus.met"
                PPTREE _ptTree0=0,_ptRes0=0;
#line 2775 "cplus.met"
                _ptRes0= MakeTree(ADDR, 1);
#line 2775 "cplus.met"
                if ( (_ptTree0=NQUICK_CALL(_Tak(cast_expression)(error_free), 22, cplus))== (PPTREE) -1 ) {
#line 2775 "cplus.met"
                    MulFreeTree(4,_ptRes0,_ptTree0,expTree,inter);
                    PROG_EXIT(unary_expression_exit,"unary_expression")
#line 2775 "cplus.met"
                }
#line 2775 "cplus.met"
                ReplaceTree(_ptRes0, 1, _ptTree0);
#line 2775 "cplus.met"
                expTree=_ptRes0;
#line 2775 "cplus.met"
            }
#line 2775 "cplus.met"
            break;
#line 2775 "cplus.met"
#line 2776 "cplus.met"
        case PLUSPLUS : 
#line 2776 "cplus.met"
            tokenAhead = 0 ;
#line 2776 "cplus.met"
            CommTerm();
#line 2776 "cplus.met"
#line 2776 "cplus.met"
            {
#line 2776 "cplus.met"
                PPTREE _ptTree0=0,_ptRes0=0;
#line 2776 "cplus.met"
                _ptRes0= MakeTree(BINCR, 1);
#line 2776 "cplus.met"
                if ( (_ptTree0=NQUICK_CALL(_Tak(cast_expression)(error_free), 22, cplus))== (PPTREE) -1 ) {
#line 2776 "cplus.met"
                    MulFreeTree(4,_ptRes0,_ptTree0,expTree,inter);
                    PROG_EXIT(unary_expression_exit,"unary_expression")
#line 2776 "cplus.met"
                }
#line 2776 "cplus.met"
                ReplaceTree(_ptRes0, 1, _ptTree0);
#line 2776 "cplus.met"
                expTree=_ptRes0;
#line 2776 "cplus.met"
            }
#line 2776 "cplus.met"
            break;
#line 2776 "cplus.met"
#line 2777 "cplus.met"
        case TIRETIRE : 
#line 2777 "cplus.met"
            tokenAhead = 0 ;
#line 2777 "cplus.met"
            CommTerm();
#line 2777 "cplus.met"
#line 2777 "cplus.met"
            {
#line 2777 "cplus.met"
                PPTREE _ptTree0=0,_ptRes0=0;
#line 2777 "cplus.met"
                _ptRes0= MakeTree(BDECR, 1);
#line 2777 "cplus.met"
                if ( (_ptTree0=NQUICK_CALL(_Tak(cast_expression)(error_free), 22, cplus))== (PPTREE) -1 ) {
#line 2777 "cplus.met"
                    MulFreeTree(4,_ptRes0,_ptTree0,expTree,inter);
                    PROG_EXIT(unary_expression_exit,"unary_expression")
#line 2777 "cplus.met"
                }
#line 2777 "cplus.met"
                ReplaceTree(_ptRes0, 1, _ptTree0);
#line 2777 "cplus.met"
                expTree=_ptRes0;
#line 2777 "cplus.met"
            }
#line 2777 "cplus.met"
            break;
#line 2777 "cplus.met"
#line 2778 "cplus.met"
        case SIZEOF : 
#line 2778 "cplus.met"
            tokenAhead = 0 ;
#line 2778 "cplus.met"
            CommTerm();
#line 2778 "cplus.met"
#line 2779 "cplus.met"
#line 2780 "cplus.met"
            if (! (NPUSH_CALL_AFF_VERIF(expTree = ,_Tak(sizeof_type), 134, cplus))){
#line 2780 "cplus.met"
#line 2781 "cplus.met"
#line 2782 "cplus.met"
                if ( (inter=NQUICK_CALL(_Tak(unary_expression)(error_free), 152, cplus))== (PPTREE) -1 ) {
#line 2782 "cplus.met"
                    MulFreeTree(2,expTree,inter);
                    PROG_EXIT(unary_expression_exit,"unary_expression")
#line 2782 "cplus.met"
                }
#line 2782 "cplus.met"
#line 2783 "cplus.met"
                                       /* on libere le chapeau : un EXP, sans liberer
#line 2783 "cplus.met"
                                    l'interieur */
#line 2783 "cplus.met"
                                      if (NumberTree(inter) == EXP) {
#line 2783 "cplus.met"
                                     expTree = SonTree(inter,1);
#line 2783 "cplus.met"
                                     AddRef(expTree);
#line 2783 "cplus.met"
                                     FreeTreeRec(inter);
#line 2783 "cplus.met"
                                     RemRef(expTree);
#line 2783 "cplus.met"
                                          } else
#line 2783 "cplus.met"
                                     expTree = inter;
#line 2783 "cplus.met"
                                
#line 2783 "cplus.met"
#line 2783 "cplus.met"
#line 2793 "cplus.met"
            }
#line 2793 "cplus.met"
#line 2795 "cplus.met"
            {
#line 2795 "cplus.met"
                PPTREE _ptTree0=0;
#line 2795 "cplus.met"
                {
#line 2795 "cplus.met"
                    PPTREE _ptTree1=0,_ptRes1=0;
#line 2795 "cplus.met"
                    _ptRes1= MakeTree(EXP_LIST, 2);
#line 2795 "cplus.met"
                    {
#line 2795 "cplus.met"
                        PPTREE _ptRes2=0;
#line 2795 "cplus.met"
                        _ptRes2= MakeTree(IDENT, 1);
#line 2795 "cplus.met"
                        ReplaceTree(_ptRes2, 1, MakeString ("sizeof"));
#line 2795 "cplus.met"
                        _ptTree1=_ptRes2;
#line 2795 "cplus.met"
                    }
#line 2795 "cplus.met"
                    ReplaceTree(_ptRes1, 1, _ptTree1);
#line 2795 "cplus.met"
                    ReplaceTree(_ptRes1, 2, expTree );
#line 2795 "cplus.met"
                    _ptTree0=_ptRes1;
#line 2795 "cplus.met"
                }
#line 2795 "cplus.met"
                _retValue =_ptTree0;
#line 2795 "cplus.met"
                goto unary_expression_ret;
#line 2795 "cplus.met"
            }
#line 2795 "cplus.met"
#line 2795 "cplus.met"
            break;
#line 2795 "cplus.met"
#line 2798 "cplus.met"
        default : 
#line 2798 "cplus.met"
#line 2798 "cplus.met"
            if ((((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN( DPOIDPOI,"::")) || 
#line 2798 "cplus.met"
                ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN( NEW,"new"))) || 
#line 2798 "cplus.met"
               ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN( DELETE,"delete"))){
#line 2798 "cplus.met"
#line 2799 "cplus.met"
#line 2800 "cplus.met"
                if (! (NPUSH_CALL_AFF_VERIF(expTree = ,_Tak(alloc_expression), 4, cplus))){
#line 2800 "cplus.met"
#line 2801 "cplus.met"
                    if ( (expTree=NQUICK_CALL(_Tak(postfix_expression)(error_free), 110, cplus))== (PPTREE) -1 ) {
#line 2801 "cplus.met"
                        MulFreeTree(2,expTree,inter);
                        PROG_EXIT(unary_expression_exit,"unary_expression")
#line 2801 "cplus.met"
                    }
#line 2801 "cplus.met"
                }
#line 2801 "cplus.met"
#line 2801 "cplus.met"
#line 2801 "cplus.met"
            } else {
#line 2801 "cplus.met"
#line 2804 "cplus.met"
                if ( (expTree=NQUICK_CALL(_Tak(postfix_expression)(error_free), 110, cplus))== (PPTREE) -1 ) {
#line 2804 "cplus.met"
                    MulFreeTree(2,expTree,inter);
                    PROG_EXIT(unary_expression_exit,"unary_expression")
#line 2804 "cplus.met"
                }
#line 2804 "cplus.met"
            }
#line 2804 "cplus.met"
            break;
#line 2804 "cplus.met"
    }
#line 2804 "cplus.met"
#line 2806 "cplus.met"
    {
#line 2806 "cplus.met"
        _retValue = expTree ;
#line 2806 "cplus.met"
        goto unary_expression_ret;
#line 2806 "cplus.met"
        
#line 2806 "cplus.met"
    }
#line 2806 "cplus.met"
#line 2806 "cplus.met"
#line 2806 "cplus.met"

#line 2807 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2807 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 2807 "cplus.met"
return((PPTREE) 0);
#line 2807 "cplus.met"

#line 2807 "cplus.met"
unary_expression_exit :
#line 2807 "cplus.met"

#line 2807 "cplus.met"
    _Debug = TRACE_RULE("unary_expression",TRACE_EXIT,(PPTREE)0);
#line 2807 "cplus.met"
    _funcLevel--;
#line 2807 "cplus.met"
    return((PPTREE) -1) ;
#line 2807 "cplus.met"

#line 2807 "cplus.met"
unary_expression_ret :
#line 2807 "cplus.met"
    
#line 2807 "cplus.met"
    _Debug = TRACE_RULE("unary_expression",TRACE_RETURN,_retValue);
#line 2807 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2807 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 2807 "cplus.met"
    return _retValue ;
#line 2807 "cplus.met"
}
#line 2807 "cplus.met"

#line 2807 "cplus.met"
#line 2068 "cplus.met"
PPTREE cplus::unsigned_type ( int error_free)
#line 2068 "cplus.met"
{
#line 2068 "cplus.met"
    int  _oldinside_signed = inside_signed;
#line 2068 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 2068 "cplus.met"
    int _value,_nbPre = 0 ;
#line 2068 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 2068 "cplus.met"
    int _Debug = TRACE_RULE("unsigned_type",TRACE_ENTER,(PPTREE)0);
#line 2068 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 2068 "cplus.met"
#line 2068 "cplus.met"
    PPTREE retTree = (PPTREE) 0;
#line 2068 "cplus.met"
#line 2070 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 2070 "cplus.met"
    if (  !SEE_TOKEN( UNSIGNED,"unsigned") || !(CommTerm(),1)) {
#line 2070 "cplus.met"
        MulFreeTree(1,retTree);
        TOKEN_EXIT(unsigned_type_exit,"unsigned")
#line 2070 "cplus.met"
    } else {
#line 2070 "cplus.met"
        tokenAhead = 0 ;
#line 2070 "cplus.met"
    }
#line 2070 "cplus.met"
#line 2071 "cplus.met"
    {
#line 2071 "cplus.met"
        inside_signed = 1 ;
#line 2071 "cplus.met"
#line 2072 "cplus.met"
#line 2073 "cplus.met"
        if (NPUSH_CALL_AFF_VERIF(retTree = ,_Tak(short_long_int_char), 129, cplus)){
#line 2073 "cplus.met"
#line 2074 "cplus.met"
            {
#line 2074 "cplus.met"
                PPTREE _ptTree0=0;
#line 2074 "cplus.met"
                {
#line 2074 "cplus.met"
                    PPTREE _ptRes1=0;
#line 2074 "cplus.met"
                    _ptRes1= MakeTree(TUNSIGNED, 1);
#line 2074 "cplus.met"
                    ReplaceTree(_ptRes1, 1, retTree );
#line 2074 "cplus.met"
                    _ptTree0=_ptRes1;
#line 2074 "cplus.met"
                }
#line 2074 "cplus.met"
                _retValue =_ptTree0;
#line 2074 "cplus.met"
                goto unsigned_type_ret;
#line 2074 "cplus.met"
            }
#line 2074 "cplus.met"
        } else {
#line 2074 "cplus.met"
#line 2076 "cplus.met"
            {
#line 2076 "cplus.met"
                PPTREE _ptTree0=0;
#line 2076 "cplus.met"
                {
#line 2076 "cplus.met"
                    PPTREE _ptRes1=0;
#line 2076 "cplus.met"
                    _ptRes1= MakeTree(TUNSIGNED, 1);
#line 2076 "cplus.met"
                    _ptTree0=_ptRes1;
#line 2076 "cplus.met"
                }
#line 2076 "cplus.met"
                _retValue =_ptTree0;
#line 2076 "cplus.met"
                goto unsigned_type_ret;
#line 2076 "cplus.met"
            }
#line 2076 "cplus.met"
        }
#line 2076 "cplus.met"
#line 2076 "cplus.met"
        inside_signed =  _oldinside_signed;
#line 2076 "cplus.met"
    }
#line 2076 "cplus.met"
#line 2076 "cplus.met"
#line 2077 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2077 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 2077 "cplus.met"
inside_signed =  _oldinside_signed;
#line 2077 "cplus.met"
return((PPTREE) 0);
#line 2077 "cplus.met"

#line 2077 "cplus.met"
unsigned_type_exit :
#line 2077 "cplus.met"

#line 2077 "cplus.met"
    _Debug = TRACE_RULE("unsigned_type",TRACE_EXIT,(PPTREE)0);
#line 2077 "cplus.met"
    _funcLevel--;
#line 2077 "cplus.met"
    inside_signed =  _oldinside_signed;
#line 2077 "cplus.met"
    return((PPTREE) -1) ;
#line 2077 "cplus.met"

#line 2077 "cplus.met"
unsigned_type_ret :
#line 2077 "cplus.met"
    
#line 2077 "cplus.met"
    _Debug = TRACE_RULE("unsigned_type",TRACE_RETURN,_retValue);
#line 2077 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2077 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 2077 "cplus.met"
    inside_signed =  _oldinside_signed;
#line 2077 "cplus.met"
    return _retValue ;
#line 2077 "cplus.met"
}
#line 2077 "cplus.met"

#line 2077 "cplus.met"
