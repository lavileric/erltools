/*************************************************************************/
/*                                                                       */
/*        Produced by MetaGen version 2.0  -    1989-2006                 */
/*       Syntaxic Analyzer Meta Generator developped by                  */
/*                  Eric Lavillonniere                                   */
/*                                                                       */
/*************************************************************************/

#include "token.h"
#include "cplus.h"


#line 1723 "cplus.met"
PPTREE cplus::type_specifier_without_param ( int error_free)
#line 1723 "cplus.met"
{
#line 1723 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 1723 "cplus.met"
    int _value,_nbPre = 0 ;
#line 1723 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 1723 "cplus.met"
    int _Debug = TRACE_RULE("type_specifier_without_param",TRACE_ENTER,(PPTREE)0);
#line 1723 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 1723 "cplus.met"
#line 1723 "cplus.met"
    PPTREE retTree = (PPTREE) 0,valTree = (PPTREE) 0,list = (PPTREE) 0,valTreeR = (PPTREE) 0;
#line 1723 "cplus.met"
#line 1725 "cplus.met"
    if (NPUSH_CALL_AFF_VERIF(valTreeR = ,_Tak(range_modifier), 121, cplus)){
#line 1725 "cplus.met"
#line 1726 "cplus.met"
        {
#line 1726 "cplus.met"
            PPTREE _ptTree0=0;
#line 1726 "cplus.met"
            {
#line 1726 "cplus.met"
                PPTREE _ptTree1=0;
#line 1726 "cplus.met"
                if ( (_ptTree1=NQUICK_CALL(_Tak(type_specifier)(error_free), 147, cplus))== (PPTREE) -1 ) {
#line 1726 "cplus.met"
                    MulFreeTree(6,_ptTree1,_ptTree0,list,retTree,valTree,valTreeR);
                    PROG_EXIT(type_specifier_without_param_exit,"type_specifier_without_param")
#line 1726 "cplus.met"
                }
#line 1726 "cplus.met"
                _ptTree0=ReplaceTree(valTreeR , 2 , _ptTree1);
#line 1726 "cplus.met"
            }
#line 1726 "cplus.met"
            _retValue =_ptTree0;
#line 1726 "cplus.met"
            goto type_specifier_without_param_ret;
#line 1726 "cplus.met"
        }
#line 1726 "cplus.met"
    }
#line 1726 "cplus.met"
#line 1727 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 1727 "cplus.met"
    switch( lexEl.Value) {
#line 1727 "cplus.met"
#line 1728 "cplus.met"
        case ENUM : 
#line 1728 "cplus.met"
#line 1728 "cplus.met"
            {
#line 1728 "cplus.met"
                PPTREE _ptTree0=0;
#line 1728 "cplus.met"
                if ( (_ptTree0=NQUICK_CALL(_Tak(enum_declarator)(error_free), 55, cplus))== (PPTREE) -1 ) {
#line 1728 "cplus.met"
                    MulFreeTree(5,_ptTree0,list,retTree,valTree,valTreeR);
                    PROG_EXIT(type_specifier_without_param_exit,"type_specifier_without_param")
#line 1728 "cplus.met"
                }
#line 1728 "cplus.met"
                _retValue =_ptTree0;
#line 1728 "cplus.met"
                goto type_specifier_without_param_ret;
#line 1728 "cplus.met"
            }
#line 1728 "cplus.met"
            break;
#line 1728 "cplus.met"
#line 1729 "cplus.met"
        case STRUCT : 
#line 1729 "cplus.met"
#line 1729 "cplus.met"
            {
#line 1729 "cplus.met"
                PPTREE _ptTree0=0;
#line 1729 "cplus.met"
                if ( (_ptTree0=NQUICK_CALL(_Tak(class_declaration)(error_free), 25, cplus))== (PPTREE) -1 ) {
#line 1729 "cplus.met"
                    MulFreeTree(5,_ptTree0,list,retTree,valTree,valTreeR);
                    PROG_EXIT(type_specifier_without_param_exit,"type_specifier_without_param")
#line 1729 "cplus.met"
                }
#line 1729 "cplus.met"
                _retValue =_ptTree0;
#line 1729 "cplus.met"
                goto type_specifier_without_param_ret;
#line 1729 "cplus.met"
            }
#line 1729 "cplus.met"
            break;
#line 1729 "cplus.met"
#line 1730 "cplus.met"
        case UNION : 
#line 1730 "cplus.met"
#line 1730 "cplus.met"
            {
#line 1730 "cplus.met"
                PPTREE _ptTree0=0;
#line 1730 "cplus.met"
                if ( (_ptTree0=NQUICK_CALL(_Tak(class_declaration)(error_free), 25, cplus))== (PPTREE) -1 ) {
#line 1730 "cplus.met"
                    MulFreeTree(5,_ptTree0,list,retTree,valTree,valTreeR);
                    PROG_EXIT(type_specifier_without_param_exit,"type_specifier_without_param")
#line 1730 "cplus.met"
                }
#line 1730 "cplus.met"
                _retValue =_ptTree0;
#line 1730 "cplus.met"
                goto type_specifier_without_param_ret;
#line 1730 "cplus.met"
            }
#line 1730 "cplus.met"
            break;
#line 1730 "cplus.met"
#line 1731 "cplus.met"
        case CLASS : 
#line 1731 "cplus.met"
#line 1731 "cplus.met"
            {
#line 1731 "cplus.met"
                PPTREE _ptTree0=0;
#line 1731 "cplus.met"
                if ( (_ptTree0=NQUICK_CALL(_Tak(class_declaration)(error_free), 25, cplus))== (PPTREE) -1 ) {
#line 1731 "cplus.met"
                    MulFreeTree(5,_ptTree0,list,retTree,valTree,valTreeR);
                    PROG_EXIT(type_specifier_without_param_exit,"type_specifier_without_param")
#line 1731 "cplus.met"
                }
#line 1731 "cplus.met"
                _retValue =_ptTree0;
#line 1731 "cplus.met"
                goto type_specifier_without_param_ret;
#line 1731 "cplus.met"
            }
#line 1731 "cplus.met"
            break;
#line 1731 "cplus.met"
#line 1732 "cplus.met"
        default : 
#line 1732 "cplus.met"
#line 1732 "cplus.met"
            {
#line 1732 "cplus.met"
                PPTREE _ptTree0=0;
#line 1732 "cplus.met"
                if ( (_ptTree0=NQUICK_CALL(_Tak(simple_type)(error_free), 130, cplus))== (PPTREE) -1 ) {
#line 1732 "cplus.met"
                    MulFreeTree(5,_ptTree0,list,retTree,valTree,valTreeR);
                    PROG_EXIT(type_specifier_without_param_exit,"type_specifier_without_param")
#line 1732 "cplus.met"
                }
#line 1732 "cplus.met"
                _retValue =_ptTree0;
#line 1732 "cplus.met"
                goto type_specifier_without_param_ret;
#line 1732 "cplus.met"
            }
#line 1732 "cplus.met"
            break;
#line 1732 "cplus.met"
    }
#line 1732 "cplus.met"
#line 1732 "cplus.met"
#line 1733 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1733 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 1733 "cplus.met"
return((PPTREE) 0);
#line 1733 "cplus.met"

#line 1733 "cplus.met"
type_specifier_without_param_exit :
#line 1733 "cplus.met"

#line 1733 "cplus.met"
    _Debug = TRACE_RULE("type_specifier_without_param",TRACE_EXIT,(PPTREE)0);
#line 1733 "cplus.met"
    _funcLevel--;
#line 1733 "cplus.met"
    return((PPTREE) -1) ;
#line 1733 "cplus.met"

#line 1733 "cplus.met"
type_specifier_without_param_ret :
#line 1733 "cplus.met"
    
#line 1733 "cplus.met"
    _Debug = TRACE_RULE("type_specifier_without_param",TRACE_RETURN,_retValue);
#line 1733 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1733 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 1733 "cplus.met"
    return _retValue ;
#line 1733 "cplus.met"
}
#line 1733 "cplus.met"

#line 1733 "cplus.met"
#line 1518 "cplus.met"
PPTREE cplus::typedef_and_declarator ( int error_free)
#line 1518 "cplus.met"
{
#line 1518 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 1518 "cplus.met"
    int _value,_nbPre = 0 ;
#line 1518 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 1518 "cplus.met"
    int _Debug = TRACE_RULE("typedef_and_declarator",TRACE_ENTER,(PPTREE)0);
#line 1518 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 1518 "cplus.met"
#line 1518 "cplus.met"
    PPTREE retTree = (PPTREE) 0;
#line 1518 "cplus.met"
#line 1520 "cplus.met"
    {
#line 1520 "cplus.met"
        PPTREE _ptTree0=0,_ptRes0=0;
#line 1520 "cplus.met"
        _ptRes0= MakeTree(TYPEDEF, 2);
#line 1520 "cplus.met"
        if ( (_ptTree0=NQUICK_CALL(_Tak(type_specifier)(error_free), 147, cplus))== (PPTREE) -1 ) {
#line 1520 "cplus.met"
            MulFreeTree(3,_ptRes0,_ptTree0,retTree);
            PROG_EXIT(typedef_and_declarator_exit,"typedef_and_declarator")
#line 1520 "cplus.met"
        }
#line 1520 "cplus.met"
        ReplaceTree(_ptRes0, 1, _ptTree0);
#line 1520 "cplus.met"
        retTree=_ptRes0;
#line 1520 "cplus.met"
    }
#line 1520 "cplus.met"
#line 1521 "cplus.met"
    {
#line 1521 "cplus.met"
        PPTREE _ptTree0=0;
#line 1521 "cplus.met"
        {
#line 1521 "cplus.met"
            PPTREE _ptTree1=0;
#line 1521 "cplus.met"
            if ( (_ptTree1=NQUICK_CALL(_Tak(declarator_list)(error_free), 48, cplus))== (PPTREE) -1 ) {
#line 1521 "cplus.met"
                MulFreeTree(3,_ptTree1,_ptTree0,retTree);
                PROG_EXIT(typedef_and_declarator_exit,"typedef_and_declarator")
#line 1521 "cplus.met"
            }
#line 1521 "cplus.met"
            _ptTree0=ReplaceTree(retTree , 2 , _ptTree1);
#line 1521 "cplus.met"
        }
#line 1521 "cplus.met"
        _retValue =_ptTree0;
#line 1521 "cplus.met"
        goto typedef_and_declarator_ret;
#line 1521 "cplus.met"
    }
#line 1521 "cplus.met"
#line 1521 "cplus.met"
#line 1521 "cplus.met"

#line 1522 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1522 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 1522 "cplus.met"
return((PPTREE) 0);
#line 1522 "cplus.met"

#line 1522 "cplus.met"
typedef_and_declarator_exit :
#line 1522 "cplus.met"

#line 1522 "cplus.met"
    _Debug = TRACE_RULE("typedef_and_declarator",TRACE_EXIT,(PPTREE)0);
#line 1522 "cplus.met"
    _funcLevel--;
#line 1522 "cplus.met"
    return((PPTREE) -1) ;
#line 1522 "cplus.met"

#line 1522 "cplus.met"
typedef_and_declarator_ret :
#line 1522 "cplus.met"
    
#line 1522 "cplus.met"
    _Debug = TRACE_RULE("typedef_and_declarator",TRACE_RETURN,_retValue);
#line 1522 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1522 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 1522 "cplus.met"
    return _retValue ;
#line 1522 "cplus.met"
}
#line 1522 "cplus.met"

#line 1522 "cplus.met"
#line 2739 "cplus.met"
PPTREE cplus::unary_expression ( int error_free)
#line 2739 "cplus.met"
{
#line 2739 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 2739 "cplus.met"
    int _value,_nbPre = 0 ;
#line 2739 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 2739 "cplus.met"
    int _Debug = TRACE_RULE("unary_expression",TRACE_ENTER,(PPTREE)0);
#line 2739 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 2739 "cplus.met"
#line 2739 "cplus.met"
    PPTREE expTree = (PPTREE) 0,inter = (PPTREE) 0;
#line 2739 "cplus.met"
#line 2741 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 2741 "cplus.met"
    switch( lexEl.Value) {
#line 2741 "cplus.met"
#line 2742 "cplus.met"
        case TIRE : 
#line 2742 "cplus.met"
            tokenAhead = 0 ;
#line 2742 "cplus.met"
            CommTerm();
#line 2742 "cplus.met"
#line 2742 "cplus.met"
            {
#line 2742 "cplus.met"
                PPTREE _ptTree0=0,_ptRes0=0;
#line 2742 "cplus.met"
                _ptRes0= MakeTree(NEG, 1);
#line 2742 "cplus.met"
                if ( (_ptTree0=NQUICK_CALL(_Tak(cast_expression)(error_free), 21, cplus))== (PPTREE) -1 ) {
#line 2742 "cplus.met"
                    MulFreeTree(4,_ptRes0,_ptTree0,expTree,inter);
                    PROG_EXIT(unary_expression_exit,"unary_expression")
#line 2742 "cplus.met"
                }
#line 2742 "cplus.met"
                ReplaceTree(_ptRes0, 1, _ptTree0);
#line 2742 "cplus.met"
                expTree=_ptRes0;
#line 2742 "cplus.met"
            }
#line 2742 "cplus.met"
            break;
#line 2742 "cplus.met"
#line 2743 "cplus.met"
        case PLUS : 
#line 2743 "cplus.met"
            tokenAhead = 0 ;
#line 2743 "cplus.met"
            CommTerm();
#line 2743 "cplus.met"
#line 2743 "cplus.met"
            {
#line 2743 "cplus.met"
                PPTREE _ptTree0=0,_ptRes0=0;
#line 2743 "cplus.met"
                _ptRes0= MakeTree(POS, 1);
#line 2743 "cplus.met"
                if ( (_ptTree0=NQUICK_CALL(_Tak(cast_expression)(error_free), 21, cplus))== (PPTREE) -1 ) {
#line 2743 "cplus.met"
                    MulFreeTree(4,_ptRes0,_ptTree0,expTree,inter);
                    PROG_EXIT(unary_expression_exit,"unary_expression")
#line 2743 "cplus.met"
                }
#line 2743 "cplus.met"
                ReplaceTree(_ptRes0, 1, _ptTree0);
#line 2743 "cplus.met"
                expTree=_ptRes0;
#line 2743 "cplus.met"
            }
#line 2743 "cplus.met"
            break;
#line 2743 "cplus.met"
#line 2744 "cplus.met"
        case TILD : 
#line 2744 "cplus.met"
            tokenAhead = 0 ;
#line 2744 "cplus.met"
            CommTerm();
#line 2744 "cplus.met"
#line 2744 "cplus.met"
            {
#line 2744 "cplus.met"
                PPTREE _ptTree0=0,_ptRes0=0;
#line 2744 "cplus.met"
                _ptRes0= MakeTree(LNEG, 1);
#line 2744 "cplus.met"
                if ( (_ptTree0=NQUICK_CALL(_Tak(cast_expression)(error_free), 21, cplus))== (PPTREE) -1 ) {
#line 2744 "cplus.met"
                    MulFreeTree(4,_ptRes0,_ptTree0,expTree,inter);
                    PROG_EXIT(unary_expression_exit,"unary_expression")
#line 2744 "cplus.met"
                }
#line 2744 "cplus.met"
                ReplaceTree(_ptRes0, 1, _ptTree0);
#line 2744 "cplus.met"
                expTree=_ptRes0;
#line 2744 "cplus.met"
            }
#line 2744 "cplus.met"
            break;
#line 2744 "cplus.met"
#line 2745 "cplus.met"
        case EXCL : 
#line 2745 "cplus.met"
            tokenAhead = 0 ;
#line 2745 "cplus.met"
            CommTerm();
#line 2745 "cplus.met"
#line 2745 "cplus.met"
            {
#line 2745 "cplus.met"
                PPTREE _ptTree0=0,_ptRes0=0;
#line 2745 "cplus.met"
                _ptRes0= MakeTree(NOT, 1);
#line 2745 "cplus.met"
                if ( (_ptTree0=NQUICK_CALL(_Tak(cast_expression)(error_free), 21, cplus))== (PPTREE) -1 ) {
#line 2745 "cplus.met"
                    MulFreeTree(4,_ptRes0,_ptTree0,expTree,inter);
                    PROG_EXIT(unary_expression_exit,"unary_expression")
#line 2745 "cplus.met"
                }
#line 2745 "cplus.met"
                ReplaceTree(_ptRes0, 1, _ptTree0);
#line 2745 "cplus.met"
                expTree=_ptRes0;
#line 2745 "cplus.met"
            }
#line 2745 "cplus.met"
            break;
#line 2745 "cplus.met"
#line 2746 "cplus.met"
        case ETOI : 
#line 2746 "cplus.met"
            tokenAhead = 0 ;
#line 2746 "cplus.met"
            CommTerm();
#line 2746 "cplus.met"
#line 2746 "cplus.met"
            {
#line 2746 "cplus.met"
                PPTREE _ptTree0=0,_ptRes0=0;
#line 2746 "cplus.met"
                _ptRes0= MakeTree(POINT, 1);
#line 2746 "cplus.met"
                if ( (_ptTree0=NQUICK_CALL(_Tak(cast_expression)(error_free), 21, cplus))== (PPTREE) -1 ) {
#line 2746 "cplus.met"
                    MulFreeTree(4,_ptRes0,_ptTree0,expTree,inter);
                    PROG_EXIT(unary_expression_exit,"unary_expression")
#line 2746 "cplus.met"
                }
#line 2746 "cplus.met"
                ReplaceTree(_ptRes0, 1, _ptTree0);
#line 2746 "cplus.met"
                expTree=_ptRes0;
#line 2746 "cplus.met"
            }
#line 2746 "cplus.met"
            break;
#line 2746 "cplus.met"
#line 2747 "cplus.met"
        case ETCO : 
#line 2747 "cplus.met"
            tokenAhead = 0 ;
#line 2747 "cplus.met"
            CommTerm();
#line 2747 "cplus.met"
#line 2747 "cplus.met"
            {
#line 2747 "cplus.met"
                PPTREE _ptTree0=0,_ptRes0=0;
#line 2747 "cplus.met"
                _ptRes0= MakeTree(ADDR, 1);
#line 2747 "cplus.met"
                if ( (_ptTree0=NQUICK_CALL(_Tak(cast_expression)(error_free), 21, cplus))== (PPTREE) -1 ) {
#line 2747 "cplus.met"
                    MulFreeTree(4,_ptRes0,_ptTree0,expTree,inter);
                    PROG_EXIT(unary_expression_exit,"unary_expression")
#line 2747 "cplus.met"
                }
#line 2747 "cplus.met"
                ReplaceTree(_ptRes0, 1, _ptTree0);
#line 2747 "cplus.met"
                expTree=_ptRes0;
#line 2747 "cplus.met"
            }
#line 2747 "cplus.met"
            break;
#line 2747 "cplus.met"
#line 2748 "cplus.met"
        case PLUSPLUS : 
#line 2748 "cplus.met"
            tokenAhead = 0 ;
#line 2748 "cplus.met"
            CommTerm();
#line 2748 "cplus.met"
#line 2748 "cplus.met"
            {
#line 2748 "cplus.met"
                PPTREE _ptTree0=0,_ptRes0=0;
#line 2748 "cplus.met"
                _ptRes0= MakeTree(BINCR, 1);
#line 2748 "cplus.met"
                if ( (_ptTree0=NQUICK_CALL(_Tak(cast_expression)(error_free), 21, cplus))== (PPTREE) -1 ) {
#line 2748 "cplus.met"
                    MulFreeTree(4,_ptRes0,_ptTree0,expTree,inter);
                    PROG_EXIT(unary_expression_exit,"unary_expression")
#line 2748 "cplus.met"
                }
#line 2748 "cplus.met"
                ReplaceTree(_ptRes0, 1, _ptTree0);
#line 2748 "cplus.met"
                expTree=_ptRes0;
#line 2748 "cplus.met"
            }
#line 2748 "cplus.met"
            break;
#line 2748 "cplus.met"
#line 2749 "cplus.met"
        case TIRETIRE : 
#line 2749 "cplus.met"
            tokenAhead = 0 ;
#line 2749 "cplus.met"
            CommTerm();
#line 2749 "cplus.met"
#line 2749 "cplus.met"
            {
#line 2749 "cplus.met"
                PPTREE _ptTree0=0,_ptRes0=0;
#line 2749 "cplus.met"
                _ptRes0= MakeTree(BDECR, 1);
#line 2749 "cplus.met"
                if ( (_ptTree0=NQUICK_CALL(_Tak(cast_expression)(error_free), 21, cplus))== (PPTREE) -1 ) {
#line 2749 "cplus.met"
                    MulFreeTree(4,_ptRes0,_ptTree0,expTree,inter);
                    PROG_EXIT(unary_expression_exit,"unary_expression")
#line 2749 "cplus.met"
                }
#line 2749 "cplus.met"
                ReplaceTree(_ptRes0, 1, _ptTree0);
#line 2749 "cplus.met"
                expTree=_ptRes0;
#line 2749 "cplus.met"
            }
#line 2749 "cplus.met"
            break;
#line 2749 "cplus.met"
#line 2750 "cplus.met"
        case SIZEOF : 
#line 2750 "cplus.met"
            tokenAhead = 0 ;
#line 2750 "cplus.met"
            CommTerm();
#line 2750 "cplus.met"
#line 2751 "cplus.met"
#line 2752 "cplus.met"
            if (! (NPUSH_CALL_AFF_VERIF(expTree = ,_Tak(sizeof_type), 132, cplus))){
#line 2752 "cplus.met"
#line 2753 "cplus.met"
#line 2754 "cplus.met"
                if ( (inter=NQUICK_CALL(_Tak(unary_expression)(error_free), 150, cplus))== (PPTREE) -1 ) {
#line 2754 "cplus.met"
                    MulFreeTree(2,expTree,inter);
                    PROG_EXIT(unary_expression_exit,"unary_expression")
#line 2754 "cplus.met"
                }
#line 2754 "cplus.met"
#line 2755 "cplus.met"
                                       /* on libere le chapeau : un EXP, sans liberer
#line 2755 "cplus.met"
                                    l'interieur */
#line 2755 "cplus.met"
                                      if (NumberTree(inter) == EXP) {
#line 2755 "cplus.met"
                                     expTree = SonTree(inter,1);
#line 2755 "cplus.met"
                                     AddRef(expTree);
#line 2755 "cplus.met"
                                     FreeTreeRec(inter);
#line 2755 "cplus.met"
                                     RemRef(expTree);
#line 2755 "cplus.met"
                                          } else
#line 2755 "cplus.met"
                                     expTree = inter;
#line 2755 "cplus.met"
                                
#line 2755 "cplus.met"
#line 2755 "cplus.met"
#line 2765 "cplus.met"
            }
#line 2765 "cplus.met"
#line 2767 "cplus.met"
            {
#line 2767 "cplus.met"
                PPTREE _ptTree0=0;
#line 2767 "cplus.met"
                {
#line 2767 "cplus.met"
                    PPTREE _ptTree1=0,_ptRes1=0;
#line 2767 "cplus.met"
                    _ptRes1= MakeTree(EXP_LIST, 2);
#line 2767 "cplus.met"
                    {
#line 2767 "cplus.met"
                        PPTREE _ptRes2=0;
#line 2767 "cplus.met"
                        _ptRes2= MakeTree(IDENT, 1);
#line 2767 "cplus.met"
                        ReplaceTree(_ptRes2, 1, MakeString ("sizeof"));
#line 2767 "cplus.met"
                        _ptTree1=_ptRes2;
#line 2767 "cplus.met"
                    }
#line 2767 "cplus.met"
                    ReplaceTree(_ptRes1, 1, _ptTree1);
#line 2767 "cplus.met"
                    ReplaceTree(_ptRes1, 2, expTree );
#line 2767 "cplus.met"
                    _ptTree0=_ptRes1;
#line 2767 "cplus.met"
                }
#line 2767 "cplus.met"
                _retValue =_ptTree0;
#line 2767 "cplus.met"
                goto unary_expression_ret;
#line 2767 "cplus.met"
            }
#line 2767 "cplus.met"
#line 2767 "cplus.met"
            break;
#line 2767 "cplus.met"
#line 2770 "cplus.met"
        default : 
#line 2770 "cplus.met"
#line 2770 "cplus.met"
            if ((((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN( DPOIDPOI,"::")) || 
#line 2770 "cplus.met"
                ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN( NEW,"new"))) || 
#line 2770 "cplus.met"
               ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN( DELETE,"delete"))){
#line 2770 "cplus.met"
#line 2771 "cplus.met"
#line 2772 "cplus.met"
                if (! (NPUSH_CALL_AFF_VERIF(expTree = ,_Tak(alloc_expression), 4, cplus))){
#line 2772 "cplus.met"
#line 2773 "cplus.met"
                    if ( (expTree=NQUICK_CALL(_Tak(postfix_expression)(error_free), 109, cplus))== (PPTREE) -1 ) {
#line 2773 "cplus.met"
                        MulFreeTree(2,expTree,inter);
                        PROG_EXIT(unary_expression_exit,"unary_expression")
#line 2773 "cplus.met"
                    }
#line 2773 "cplus.met"
                }
#line 2773 "cplus.met"
#line 2773 "cplus.met"
#line 2773 "cplus.met"
            } else {
#line 2773 "cplus.met"
#line 2776 "cplus.met"
                if ( (expTree=NQUICK_CALL(_Tak(postfix_expression)(error_free), 109, cplus))== (PPTREE) -1 ) {
#line 2776 "cplus.met"
                    MulFreeTree(2,expTree,inter);
                    PROG_EXIT(unary_expression_exit,"unary_expression")
#line 2776 "cplus.met"
                }
#line 2776 "cplus.met"
            }
#line 2776 "cplus.met"
            break;
#line 2776 "cplus.met"
    }
#line 2776 "cplus.met"
#line 2778 "cplus.met"
    {
#line 2778 "cplus.met"
        _retValue = expTree ;
#line 2778 "cplus.met"
        goto unary_expression_ret;
#line 2778 "cplus.met"
        
#line 2778 "cplus.met"
    }
#line 2778 "cplus.met"
#line 2778 "cplus.met"
#line 2778 "cplus.met"

#line 2779 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2779 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 2779 "cplus.met"
return((PPTREE) 0);
#line 2779 "cplus.met"

#line 2779 "cplus.met"
unary_expression_exit :
#line 2779 "cplus.met"

#line 2779 "cplus.met"
    _Debug = TRACE_RULE("unary_expression",TRACE_EXIT,(PPTREE)0);
#line 2779 "cplus.met"
    _funcLevel--;
#line 2779 "cplus.met"
    return((PPTREE) -1) ;
#line 2779 "cplus.met"

#line 2779 "cplus.met"
unary_expression_ret :
#line 2779 "cplus.met"
    
#line 2779 "cplus.met"
    _Debug = TRACE_RULE("unary_expression",TRACE_RETURN,_retValue);
#line 2779 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2779 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 2779 "cplus.met"
    return _retValue ;
#line 2779 "cplus.met"
}
#line 2779 "cplus.met"

#line 2779 "cplus.met"
#line 2048 "cplus.met"
PPTREE cplus::unsigned_type ( int error_free)
#line 2048 "cplus.met"
{
#line 2048 "cplus.met"
    int  _oldinside_signed = inside_signed;
#line 2048 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 2048 "cplus.met"
    int _value,_nbPre = 0 ;
#line 2048 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 2048 "cplus.met"
    int _Debug = TRACE_RULE("unsigned_type",TRACE_ENTER,(PPTREE)0);
#line 2048 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 2048 "cplus.met"
#line 2048 "cplus.met"
    PPTREE retTree = (PPTREE) 0;
#line 2048 "cplus.met"
#line 2050 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 2050 "cplus.met"
    if (  !SEE_TOKEN( UNSIGNED,"unsigned") || !(CommTerm(),1)) {
#line 2050 "cplus.met"
        MulFreeTree(1,retTree);
        TOKEN_EXIT(unsigned_type_exit,"unsigned")
#line 2050 "cplus.met"
    } else {
#line 2050 "cplus.met"
        tokenAhead = 0 ;
#line 2050 "cplus.met"
    }
#line 2050 "cplus.met"
#line 2051 "cplus.met"
    {
#line 2051 "cplus.met"
        inside_signed = 1 ;
#line 2051 "cplus.met"
#line 2052 "cplus.met"
#line 2053 "cplus.met"
        if (NPUSH_CALL_AFF_VERIF(retTree = ,_Tak(short_long_int_char), 128, cplus)){
#line 2053 "cplus.met"
#line 2054 "cplus.met"
            {
#line 2054 "cplus.met"
                PPTREE _ptTree0=0;
#line 2054 "cplus.met"
                {
#line 2054 "cplus.met"
                    PPTREE _ptRes1=0;
#line 2054 "cplus.met"
                    _ptRes1= MakeTree(TUNSIGNED, 1);
#line 2054 "cplus.met"
                    ReplaceTree(_ptRes1, 1, retTree );
#line 2054 "cplus.met"
                    _ptTree0=_ptRes1;
#line 2054 "cplus.met"
                }
#line 2054 "cplus.met"
                _retValue =_ptTree0;
#line 2054 "cplus.met"
                goto unsigned_type_ret;
#line 2054 "cplus.met"
            }
#line 2054 "cplus.met"
        } else {
#line 2054 "cplus.met"
#line 2056 "cplus.met"
            {
#line 2056 "cplus.met"
                PPTREE _ptTree0=0;
#line 2056 "cplus.met"
                {
#line 2056 "cplus.met"
                    PPTREE _ptRes1=0;
#line 2056 "cplus.met"
                    _ptRes1= MakeTree(TUNSIGNED, 1);
#line 2056 "cplus.met"
                    _ptTree0=_ptRes1;
#line 2056 "cplus.met"
                }
#line 2056 "cplus.met"
                _retValue =_ptTree0;
#line 2056 "cplus.met"
                goto unsigned_type_ret;
#line 2056 "cplus.met"
            }
#line 2056 "cplus.met"
        }
#line 2056 "cplus.met"
#line 2056 "cplus.met"
        inside_signed =  _oldinside_signed;
#line 2056 "cplus.met"
    }
#line 2056 "cplus.met"
#line 2056 "cplus.met"
#line 2057 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2057 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 2057 "cplus.met"
inside_signed =  _oldinside_signed;
#line 2057 "cplus.met"
return((PPTREE) 0);
#line 2057 "cplus.met"

#line 2057 "cplus.met"
unsigned_type_exit :
#line 2057 "cplus.met"

#line 2057 "cplus.met"
    _Debug = TRACE_RULE("unsigned_type",TRACE_EXIT,(PPTREE)0);
#line 2057 "cplus.met"
    _funcLevel--;
#line 2057 "cplus.met"
    inside_signed =  _oldinside_signed;
#line 2057 "cplus.met"
    return((PPTREE) -1) ;
#line 2057 "cplus.met"

#line 2057 "cplus.met"
unsigned_type_ret :
#line 2057 "cplus.met"
    
#line 2057 "cplus.met"
    _Debug = TRACE_RULE("unsigned_type",TRACE_RETURN,_retValue);
#line 2057 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2057 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 2057 "cplus.met"
    inside_signed =  _oldinside_signed;
#line 2057 "cplus.met"
    return _retValue ;
#line 2057 "cplus.met"
}
#line 2057 "cplus.met"

#line 2057 "cplus.met"
