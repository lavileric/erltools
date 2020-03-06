/*************************************************************************/
/*                                                                       */
/*        Produced by MetaGen version 2.0  -    1989-2006                 */
/*       Syntaxic Analyzer Meta Generator developped by                  */
/*                  Eric Lavillonniere                                   */
/*                                                                       */
/*************************************************************************/

#include "token.h"
#include "cplus.h"


#line 3042 "cplus.met"
PPTREE cplus::type_descr ( int error_free)
#line 3042 "cplus.met"
{
#line 3042 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 3042 "cplus.met"
    int _value,_nbPre = 0 ;
#line 3042 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 3042 "cplus.met"
    int _Debug = TRACE_RULE("type_descr",TRACE_ENTER,(PPTREE)0);
#line 3042 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 3042 "cplus.met"
#line 3043 "cplus.met"
    {
#line 3043 "cplus.met"
        PPTREE _ptTree0=0;
#line 3043 "cplus.met"
        {
#line 3043 "cplus.met"
            PPTREE _ptTree1=0,_ptRes1=0;
#line 3043 "cplus.met"
            _ptRes1= MakeTree(IDENT, 1);
#line 3043 "cplus.met"
            (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3043 "cplus.met"
            if ( ! TERM_OR_META(IDENT,"IDENT") || !(BUILD_TERM_META(_ptTree1))) {
#line 3043 "cplus.met"
                MulFreeTree(3,_ptRes1,_ptTree1,_ptTree0);
                TOKEN_EXIT(type_descr_exit,"IDENT")
#line 3043 "cplus.met"
            } else {
#line 3043 "cplus.met"
                tokenAhead = 0 ;
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
        goto type_descr_ret;
#line 3043 "cplus.met"
    }
#line 3043 "cplus.met"
#line 3043 "cplus.met"
#line 3043 "cplus.met"

#line 3044 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 3044 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 3044 "cplus.met"
return((PPTREE) 0);
#line 3044 "cplus.met"

#line 3044 "cplus.met"
type_descr_exit :
#line 3044 "cplus.met"

#line 3044 "cplus.met"
    _Debug = TRACE_RULE("type_descr",TRACE_EXIT,(PPTREE)0);
#line 3044 "cplus.met"
    _funcLevel--;
#line 3044 "cplus.met"
    return((PPTREE) -1) ;
#line 3044 "cplus.met"

#line 3044 "cplus.met"
type_descr_ret :
#line 3044 "cplus.met"
    
#line 3044 "cplus.met"
    _Debug = TRACE_RULE("type_descr",TRACE_RETURN,_retValue);
#line 3044 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 3044 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 3044 "cplus.met"
    return _retValue ;
#line 3044 "cplus.met"
}
#line 3044 "cplus.met"

#line 3044 "cplus.met"
#line 2498 "cplus.met"
PPTREE cplus::type_name ( int error_free)
#line 2498 "cplus.met"
{
#line 2498 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 2498 "cplus.met"
    int _value,_nbPre = 0 ;
#line 2498 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 2498 "cplus.met"
    int _Debug = TRACE_RULE("type_name",TRACE_ENTER,(PPTREE)0);
#line 2498 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 2498 "cplus.met"
#line 2498 "cplus.met"
    PPTREE retTree = (PPTREE) 0,valTree = (PPTREE) 0;
#line 2498 "cplus.met"
#line 2500 "cplus.met"
    if ( (retTree=NQUICK_CALL(_Tak(type_specifier)(error_free), 145, cplus))== (PPTREE) -1 ) {
#line 2500 "cplus.met"
        MulFreeTree(2,retTree,valTree);
        PROG_EXIT(type_name_exit,"type_name")
#line 2500 "cplus.met"
    }
#line 2500 "cplus.met"
#line 2501 "cplus.met"
    if (NPUSH_CALL_AFF_VERIF(valTree = ,_Tak(abstract_declarator), 2, cplus)){
#line 2501 "cplus.met"
#line 2502 "cplus.met"
        {
#line 2502 "cplus.met"
            PPTREE _ptRes0=0;
#line 2502 "cplus.met"
            _ptRes0= MakeTree(ABST_DECLARATOR, 2);
#line 2502 "cplus.met"
            ReplaceTree(_ptRes0, 1, retTree );
#line 2502 "cplus.met"
            ReplaceTree(_ptRes0, 2, valTree );
#line 2502 "cplus.met"
            valTree=_ptRes0;
#line 2502 "cplus.met"
        }
#line 2502 "cplus.met"
    } else {
#line 2502 "cplus.met"
#line 2504 "cplus.met"
        valTree = retTree ;
#line 2504 "cplus.met"
    }
#line 2504 "cplus.met"
#line 2505 "cplus.met"
    {
#line 2505 "cplus.met"
        _retValue = valTree ;
#line 2505 "cplus.met"
        goto type_name_ret;
#line 2505 "cplus.met"
        
#line 2505 "cplus.met"
    }
#line 2505 "cplus.met"
#line 2505 "cplus.met"
#line 2505 "cplus.met"

#line 2506 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2506 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 2506 "cplus.met"
return((PPTREE) 0);
#line 2506 "cplus.met"

#line 2506 "cplus.met"
type_name_exit :
#line 2506 "cplus.met"

#line 2506 "cplus.met"
    _Debug = TRACE_RULE("type_name",TRACE_EXIT,(PPTREE)0);
#line 2506 "cplus.met"
    _funcLevel--;
#line 2506 "cplus.met"
    return((PPTREE) -1) ;
#line 2506 "cplus.met"

#line 2506 "cplus.met"
type_name_ret :
#line 2506 "cplus.met"
    
#line 2506 "cplus.met"
    _Debug = TRACE_RULE("type_name",TRACE_RETURN,_retValue);
#line 2506 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2506 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 2506 "cplus.met"
    return _retValue ;
#line 2506 "cplus.met"
}
#line 2506 "cplus.met"

#line 2506 "cplus.met"
#line 1736 "cplus.met"
PPTREE cplus::type_specifier ( int error_free)
#line 1736 "cplus.met"
{
#line 1736 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 1736 "cplus.met"
    int _value,_nbPre = 0 ;
#line 1736 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 1736 "cplus.met"
    int _Debug = TRACE_RULE("type_specifier",TRACE_ENTER,(PPTREE)0);
#line 1736 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 1736 "cplus.met"
#line 1736 "cplus.met"
    PPTREE _addlist1 = (PPTREE) 0;
#line 1736 "cplus.met"
#line 1736 "cplus.met"
    PPTREE ret = (PPTREE) 0,listParam = (PPTREE) 0,exp = (PPTREE) 0;
#line 1736 "cplus.met"
#line 1738 "cplus.met"
    if ( (ret=NQUICK_CALL(_Tak(type_specifier_without_param)(error_free), 146, cplus))== (PPTREE) -1 ) {
#line 1738 "cplus.met"
        MulFreeTree(4,_addlist1,exp,listParam,ret);
        PROG_EXIT(type_specifier_exit,"type_specifier")
#line 1738 "cplus.met"
    }
#line 1738 "cplus.met"
#line 1739 "cplus.met"
    if ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN(INFE,"<") && (tokenAhead = 0,CommTerm(),1)){
#line 1739 "cplus.met"
#line 1740 "cplus.met"
#line 1740 "cplus.met"
        _addlist1 = listParam ;
#line 1740 "cplus.met"
#line 1741 "cplus.met"
        do {
#line 1741 "cplus.met"
#line 1742 "cplus.met"
            if ((NPUSH_CALL_AFF_VERIF(exp = ,_Tak(additive_expression), 3, cplus)) || 
#line 1742 "cplus.met"
               (NPUSH_CALL_AFF_VERIF(exp = ,_Tak(type_name), 144, cplus))){
#line 1742 "cplus.met"
#line 1743 "cplus.met"
#line 1743 "cplus.met"
                _addlist1 =AddList(_addlist1 ,exp );
#line 1743 "cplus.met"
#line 1743 "cplus.met"
                if (listParam){
#line 1743 "cplus.met"
#line 1743 "cplus.met"
                    _addlist1 = SonTree (_addlist1 ,2 );
#line 1743 "cplus.met"
                } else {
#line 1743 "cplus.met"
#line 1743 "cplus.met"
                    listParam = _addlist1 ;
#line 1743 "cplus.met"
                }
#line 1743 "cplus.met"
            }
#line 1743 "cplus.met"
#line 1743 "cplus.met"
#line 1744 "cplus.met"
        } while ( !(! ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN(VIRG,",") && (tokenAhead = 0,CommTerm(),1)))) ;
#line 1744 "cplus.met"
#line 1745 "cplus.met"
        (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 1745 "cplus.met"
        if (  !SEE_TOKEN( SUPE,">") || !(CommTerm(),1)) {
#line 1745 "cplus.met"
            MulFreeTree(4,_addlist1,exp,listParam,ret);
            TOKEN_EXIT(type_specifier_exit,">")
#line 1745 "cplus.met"
        } else {
#line 1745 "cplus.met"
            tokenAhead = 0 ;
#line 1745 "cplus.met"
        }
#line 1745 "cplus.met"
#line 1746 "cplus.met"
        {
#line 1746 "cplus.met"
            PPTREE _ptRes0=0;
#line 1746 "cplus.met"
            _ptRes0= MakeTree(PARAM_TYPE, 2);
#line 1746 "cplus.met"
            ReplaceTree(_ptRes0, 1, ret );
#line 1746 "cplus.met"
            ReplaceTree(_ptRes0, 2, listParam );
#line 1746 "cplus.met"
            ret=_ptRes0;
#line 1746 "cplus.met"
        }
#line 1746 "cplus.met"
#line 1746 "cplus.met"
#line 1746 "cplus.met"
    }
#line 1746 "cplus.met"
#line 1748 "cplus.met"
    {
#line 1748 "cplus.met"
        _retValue = ret ;
#line 1748 "cplus.met"
        goto type_specifier_ret;
#line 1748 "cplus.met"
        
#line 1748 "cplus.met"
    }
#line 1748 "cplus.met"
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
type_specifier_exit :
#line 1749 "cplus.met"

#line 1749 "cplus.met"
    _Debug = TRACE_RULE("type_specifier",TRACE_EXIT,(PPTREE)0);
#line 1749 "cplus.met"
    _funcLevel--;
#line 1749 "cplus.met"
    return((PPTREE) -1) ;
#line 1749 "cplus.met"

#line 1749 "cplus.met"
type_specifier_ret :
#line 1749 "cplus.met"
    
#line 1749 "cplus.met"
    _Debug = TRACE_RULE("type_specifier",TRACE_RETURN,_retValue);
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
                if ( (_ptTree1=NQUICK_CALL(_Tak(type_specifier)(error_free), 145, cplus))== (PPTREE) -1 ) {
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
                if ( (_ptTree0=NQUICK_CALL(_Tak(simple_type)(error_free), 128, cplus))== (PPTREE) -1 ) {
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
        if ( (_ptTree0=NQUICK_CALL(_Tak(type_specifier)(error_free), 145, cplus))== (PPTREE) -1 ) {
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
#line 2720 "cplus.met"
PPTREE cplus::unary_expression ( int error_free)
#line 2720 "cplus.met"
{
#line 2720 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 2720 "cplus.met"
    int _value,_nbPre = 0 ;
#line 2720 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 2720 "cplus.met"
    int _Debug = TRACE_RULE("unary_expression",TRACE_ENTER,(PPTREE)0);
#line 2720 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 2720 "cplus.met"
#line 2720 "cplus.met"
    PPTREE expTree = (PPTREE) 0,inter = (PPTREE) 0;
#line 2720 "cplus.met"
#line 2722 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 2722 "cplus.met"
    switch( lexEl.Value) {
#line 2722 "cplus.met"
#line 2723 "cplus.met"
        case TIRE : 
#line 2723 "cplus.met"
            tokenAhead = 0 ;
#line 2723 "cplus.met"
            CommTerm();
#line 2723 "cplus.met"
#line 2723 "cplus.met"
            {
#line 2723 "cplus.met"
                PPTREE _ptTree0=0,_ptRes0=0;
#line 2723 "cplus.met"
                _ptRes0= MakeTree(NEG, 1);
#line 2723 "cplus.met"
                if ( (_ptTree0=NQUICK_CALL(_Tak(cast_expression)(error_free), 21, cplus))== (PPTREE) -1 ) {
#line 2723 "cplus.met"
                    MulFreeTree(4,_ptRes0,_ptTree0,expTree,inter);
                    PROG_EXIT(unary_expression_exit,"unary_expression")
#line 2723 "cplus.met"
                }
#line 2723 "cplus.met"
                ReplaceTree(_ptRes0, 1, _ptTree0);
#line 2723 "cplus.met"
                expTree=_ptRes0;
#line 2723 "cplus.met"
            }
#line 2723 "cplus.met"
            break;
#line 2723 "cplus.met"
#line 2724 "cplus.met"
        case PLUS : 
#line 2724 "cplus.met"
            tokenAhead = 0 ;
#line 2724 "cplus.met"
            CommTerm();
#line 2724 "cplus.met"
#line 2724 "cplus.met"
            {
#line 2724 "cplus.met"
                PPTREE _ptTree0=0,_ptRes0=0;
#line 2724 "cplus.met"
                _ptRes0= MakeTree(POS, 1);
#line 2724 "cplus.met"
                if ( (_ptTree0=NQUICK_CALL(_Tak(cast_expression)(error_free), 21, cplus))== (PPTREE) -1 ) {
#line 2724 "cplus.met"
                    MulFreeTree(4,_ptRes0,_ptTree0,expTree,inter);
                    PROG_EXIT(unary_expression_exit,"unary_expression")
#line 2724 "cplus.met"
                }
#line 2724 "cplus.met"
                ReplaceTree(_ptRes0, 1, _ptTree0);
#line 2724 "cplus.met"
                expTree=_ptRes0;
#line 2724 "cplus.met"
            }
#line 2724 "cplus.met"
            break;
#line 2724 "cplus.met"
#line 2725 "cplus.met"
        case TILD : 
#line 2725 "cplus.met"
            tokenAhead = 0 ;
#line 2725 "cplus.met"
            CommTerm();
#line 2725 "cplus.met"
#line 2725 "cplus.met"
            {
#line 2725 "cplus.met"
                PPTREE _ptTree0=0,_ptRes0=0;
#line 2725 "cplus.met"
                _ptRes0= MakeTree(LNEG, 1);
#line 2725 "cplus.met"
                if ( (_ptTree0=NQUICK_CALL(_Tak(cast_expression)(error_free), 21, cplus))== (PPTREE) -1 ) {
#line 2725 "cplus.met"
                    MulFreeTree(4,_ptRes0,_ptTree0,expTree,inter);
                    PROG_EXIT(unary_expression_exit,"unary_expression")
#line 2725 "cplus.met"
                }
#line 2725 "cplus.met"
                ReplaceTree(_ptRes0, 1, _ptTree0);
#line 2725 "cplus.met"
                expTree=_ptRes0;
#line 2725 "cplus.met"
            }
#line 2725 "cplus.met"
            break;
#line 2725 "cplus.met"
#line 2726 "cplus.met"
        case EXCL : 
#line 2726 "cplus.met"
            tokenAhead = 0 ;
#line 2726 "cplus.met"
            CommTerm();
#line 2726 "cplus.met"
#line 2726 "cplus.met"
            {
#line 2726 "cplus.met"
                PPTREE _ptTree0=0,_ptRes0=0;
#line 2726 "cplus.met"
                _ptRes0= MakeTree(NOT, 1);
#line 2726 "cplus.met"
                if ( (_ptTree0=NQUICK_CALL(_Tak(cast_expression)(error_free), 21, cplus))== (PPTREE) -1 ) {
#line 2726 "cplus.met"
                    MulFreeTree(4,_ptRes0,_ptTree0,expTree,inter);
                    PROG_EXIT(unary_expression_exit,"unary_expression")
#line 2726 "cplus.met"
                }
#line 2726 "cplus.met"
                ReplaceTree(_ptRes0, 1, _ptTree0);
#line 2726 "cplus.met"
                expTree=_ptRes0;
#line 2726 "cplus.met"
            }
#line 2726 "cplus.met"
            break;
#line 2726 "cplus.met"
#line 2727 "cplus.met"
        case ETOI : 
#line 2727 "cplus.met"
            tokenAhead = 0 ;
#line 2727 "cplus.met"
            CommTerm();
#line 2727 "cplus.met"
#line 2727 "cplus.met"
            {
#line 2727 "cplus.met"
                PPTREE _ptTree0=0,_ptRes0=0;
#line 2727 "cplus.met"
                _ptRes0= MakeTree(POINT, 1);
#line 2727 "cplus.met"
                if ( (_ptTree0=NQUICK_CALL(_Tak(cast_expression)(error_free), 21, cplus))== (PPTREE) -1 ) {
#line 2727 "cplus.met"
                    MulFreeTree(4,_ptRes0,_ptTree0,expTree,inter);
                    PROG_EXIT(unary_expression_exit,"unary_expression")
#line 2727 "cplus.met"
                }
#line 2727 "cplus.met"
                ReplaceTree(_ptRes0, 1, _ptTree0);
#line 2727 "cplus.met"
                expTree=_ptRes0;
#line 2727 "cplus.met"
            }
#line 2727 "cplus.met"
            break;
#line 2727 "cplus.met"
#line 2728 "cplus.met"
        case ETCO : 
#line 2728 "cplus.met"
            tokenAhead = 0 ;
#line 2728 "cplus.met"
            CommTerm();
#line 2728 "cplus.met"
#line 2728 "cplus.met"
            {
#line 2728 "cplus.met"
                PPTREE _ptTree0=0,_ptRes0=0;
#line 2728 "cplus.met"
                _ptRes0= MakeTree(ADDR, 1);
#line 2728 "cplus.met"
                if ( (_ptTree0=NQUICK_CALL(_Tak(cast_expression)(error_free), 21, cplus))== (PPTREE) -1 ) {
#line 2728 "cplus.met"
                    MulFreeTree(4,_ptRes0,_ptTree0,expTree,inter);
                    PROG_EXIT(unary_expression_exit,"unary_expression")
#line 2728 "cplus.met"
                }
#line 2728 "cplus.met"
                ReplaceTree(_ptRes0, 1, _ptTree0);
#line 2728 "cplus.met"
                expTree=_ptRes0;
#line 2728 "cplus.met"
            }
#line 2728 "cplus.met"
            break;
#line 2728 "cplus.met"
#line 2729 "cplus.met"
        case PLUSPLUS : 
#line 2729 "cplus.met"
            tokenAhead = 0 ;
#line 2729 "cplus.met"
            CommTerm();
#line 2729 "cplus.met"
#line 2729 "cplus.met"
            {
#line 2729 "cplus.met"
                PPTREE _ptTree0=0,_ptRes0=0;
#line 2729 "cplus.met"
                _ptRes0= MakeTree(BINCR, 1);
#line 2729 "cplus.met"
                if ( (_ptTree0=NQUICK_CALL(_Tak(cast_expression)(error_free), 21, cplus))== (PPTREE) -1 ) {
#line 2729 "cplus.met"
                    MulFreeTree(4,_ptRes0,_ptTree0,expTree,inter);
                    PROG_EXIT(unary_expression_exit,"unary_expression")
#line 2729 "cplus.met"
                }
#line 2729 "cplus.met"
                ReplaceTree(_ptRes0, 1, _ptTree0);
#line 2729 "cplus.met"
                expTree=_ptRes0;
#line 2729 "cplus.met"
            }
#line 2729 "cplus.met"
            break;
#line 2729 "cplus.met"
#line 2730 "cplus.met"
        case TIRETIRE : 
#line 2730 "cplus.met"
            tokenAhead = 0 ;
#line 2730 "cplus.met"
            CommTerm();
#line 2730 "cplus.met"
#line 2730 "cplus.met"
            {
#line 2730 "cplus.met"
                PPTREE _ptTree0=0,_ptRes0=0;
#line 2730 "cplus.met"
                _ptRes0= MakeTree(BDECR, 1);
#line 2730 "cplus.met"
                if ( (_ptTree0=NQUICK_CALL(_Tak(cast_expression)(error_free), 21, cplus))== (PPTREE) -1 ) {
#line 2730 "cplus.met"
                    MulFreeTree(4,_ptRes0,_ptTree0,expTree,inter);
                    PROG_EXIT(unary_expression_exit,"unary_expression")
#line 2730 "cplus.met"
                }
#line 2730 "cplus.met"
                ReplaceTree(_ptRes0, 1, _ptTree0);
#line 2730 "cplus.met"
                expTree=_ptRes0;
#line 2730 "cplus.met"
            }
#line 2730 "cplus.met"
            break;
#line 2730 "cplus.met"
#line 2731 "cplus.met"
        case SIZEOF : 
#line 2731 "cplus.met"
            tokenAhead = 0 ;
#line 2731 "cplus.met"
            CommTerm();
#line 2731 "cplus.met"
#line 2732 "cplus.met"
#line 2733 "cplus.met"
            if (! (NPUSH_CALL_AFF_VERIF(expTree = ,_Tak(sizeof_type), 130, cplus))){
#line 2733 "cplus.met"
#line 2734 "cplus.met"
#line 2735 "cplus.met"
                if ( (inter=NQUICK_CALL(_Tak(unary_expression)(error_free), 148, cplus))== (PPTREE) -1 ) {
#line 2735 "cplus.met"
                    MulFreeTree(2,expTree,inter);
                    PROG_EXIT(unary_expression_exit,"unary_expression")
#line 2735 "cplus.met"
                }
#line 2735 "cplus.met"
#line 2736 "cplus.met"
                                       /* on libere le chapeau : un EXP, sans liberer
#line 2736 "cplus.met"
                                    l'interieur */
#line 2736 "cplus.met"
                                      if (NumberTree(inter) == EXP) {
#line 2736 "cplus.met"
                                     expTree = SonTree(inter,1);
#line 2736 "cplus.met"
                                     AddRef(expTree);
#line 2736 "cplus.met"
                                     FreeTreeRec(inter);
#line 2736 "cplus.met"
                                     RemRef(expTree);
#line 2736 "cplus.met"
                                          } else
#line 2736 "cplus.met"
                                     expTree = inter;
#line 2736 "cplus.met"
                                
#line 2736 "cplus.met"
#line 2736 "cplus.met"
#line 2746 "cplus.met"
            }
#line 2746 "cplus.met"
#line 2748 "cplus.met"
            {
#line 2748 "cplus.met"
                PPTREE _ptTree0=0;
#line 2748 "cplus.met"
                {
#line 2748 "cplus.met"
                    PPTREE _ptTree1=0,_ptRes1=0;
#line 2748 "cplus.met"
                    _ptRes1= MakeTree(EXP_LIST, 2);
#line 2748 "cplus.met"
                    {
#line 2748 "cplus.met"
                        PPTREE _ptRes2=0;
#line 2748 "cplus.met"
                        _ptRes2= MakeTree(IDENT, 1);
#line 2748 "cplus.met"
                        ReplaceTree(_ptRes2, 1, MakeString ("sizeof"));
#line 2748 "cplus.met"
                        _ptTree1=_ptRes2;
#line 2748 "cplus.met"
                    }
#line 2748 "cplus.met"
                    ReplaceTree(_ptRes1, 1, _ptTree1);
#line 2748 "cplus.met"
                    ReplaceTree(_ptRes1, 2, expTree );
#line 2748 "cplus.met"
                    _ptTree0=_ptRes1;
#line 2748 "cplus.met"
                }
#line 2748 "cplus.met"
                _retValue =_ptTree0;
#line 2748 "cplus.met"
                goto unary_expression_ret;
#line 2748 "cplus.met"
            }
#line 2748 "cplus.met"
#line 2748 "cplus.met"
            break;
#line 2748 "cplus.met"
#line 2751 "cplus.met"
        default : 
#line 2751 "cplus.met"
#line 2751 "cplus.met"
            if ((((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN( DPOIDPOI,"::")) || 
#line 2751 "cplus.met"
                ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN( NEW,"new"))) || 
#line 2751 "cplus.met"
               ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN( DELETE,"delete"))){
#line 2751 "cplus.met"
#line 2752 "cplus.met"
#line 2753 "cplus.met"
                if (! (NPUSH_CALL_AFF_VERIF(expTree = ,_Tak(alloc_expression), 4, cplus))){
#line 2753 "cplus.met"
#line 2754 "cplus.met"
                    if ( (expTree=NQUICK_CALL(_Tak(postfix_expression)(error_free), 109, cplus))== (PPTREE) -1 ) {
#line 2754 "cplus.met"
                        MulFreeTree(2,expTree,inter);
                        PROG_EXIT(unary_expression_exit,"unary_expression")
#line 2754 "cplus.met"
                    }
#line 2754 "cplus.met"
                }
#line 2754 "cplus.met"
#line 2754 "cplus.met"
#line 2754 "cplus.met"
            } else {
#line 2754 "cplus.met"
#line 2757 "cplus.met"
                if ( (expTree=NQUICK_CALL(_Tak(postfix_expression)(error_free), 109, cplus))== (PPTREE) -1 ) {
#line 2757 "cplus.met"
                    MulFreeTree(2,expTree,inter);
                    PROG_EXIT(unary_expression_exit,"unary_expression")
#line 2757 "cplus.met"
                }
#line 2757 "cplus.met"
            }
#line 2757 "cplus.met"
            break;
#line 2757 "cplus.met"
    }
#line 2757 "cplus.met"
#line 2759 "cplus.met"
    {
#line 2759 "cplus.met"
        _retValue = expTree ;
#line 2759 "cplus.met"
        goto unary_expression_ret;
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
unary_expression_exit :
#line 2760 "cplus.met"

#line 2760 "cplus.met"
    _Debug = TRACE_RULE("unary_expression",TRACE_EXIT,(PPTREE)0);
#line 2760 "cplus.met"
    _funcLevel--;
#line 2760 "cplus.met"
    return((PPTREE) -1) ;
#line 2760 "cplus.met"

#line 2760 "cplus.met"
unary_expression_ret :
#line 2760 "cplus.met"
    
#line 2760 "cplus.met"
    _Debug = TRACE_RULE("unary_expression",TRACE_RETURN,_retValue);
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
