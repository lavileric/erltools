/*************************************************************************/
/*                                                                       */
/*        Produced by MetaGen version 2.0  -    1989-2006                 */
/*       Syntaxic Analyzer Meta Generator developped by                  */
/*                  Eric Lavillonniere                                   */
/*                                                                       */
/*************************************************************************/

#include "token.h"
#include "cplus.h"


#line 3556 "cplus.met"
PPTREE cplus::switch_list ( int error_free)
#line 3556 "cplus.met"
{
#line 3556 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 3556 "cplus.met"
    int _value,_nbPre = 0 ;
#line 3556 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 3556 "cplus.met"
    int _Debug = TRACE_RULE("switch_list",TRACE_ENTER,(PPTREE)0);
#line 3556 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 3556 "cplus.met"
#line 3556 "cplus.met"
    PPTREE _addlist1 = (PPTREE) 0;
#line 3556 "cplus.met"
#line 3556 "cplus.met"
    PPTREE list = (PPTREE) 0,retTree = (PPTREE) 0;
#line 3556 "cplus.met"
#line 3558 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3558 "cplus.met"
    if (  !SEE_TOKEN( AOUV,"{") || !(CommTerm(),1)) {
#line 3558 "cplus.met"
        MulFreeTree(3,_addlist1,list,retTree);
        TOKEN_EXIT(switch_list_exit,"{")
#line 3558 "cplus.met"
    } else {
#line 3558 "cplus.met"
        tokenAhead = 0 ;
#line 3558 "cplus.met"
    }
#line 3558 "cplus.met"
#line 3558 "cplus.met"
    _addlist1 = list ;
#line 3558 "cplus.met"
#line 3559 "cplus.met"
    while (NPUSH_CALL_AFF_VERIF(retTree = ,_Tak(switch_elem), 136, cplus)) { 
#line 3559 "cplus.met"
#line 3560 "cplus.met"
#line 3560 "cplus.met"
        _addlist1 =AddList(_addlist1 ,retTree );
#line 3560 "cplus.met"
#line 3560 "cplus.met"
        if (list){
#line 3560 "cplus.met"
#line 3560 "cplus.met"
            _addlist1 = SonTree (_addlist1 ,2 );
#line 3560 "cplus.met"
        } else {
#line 3560 "cplus.met"
#line 3560 "cplus.met"
            list = _addlist1 ;
#line 3560 "cplus.met"
        }
#line 3560 "cplus.met"
    } 
#line 3560 "cplus.met"
#line 3561 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3561 "cplus.met"
    if (  !SEE_TOKEN( AFER,"}") || !(CommTerm(),1)) {
#line 3561 "cplus.met"
        MulFreeTree(3,_addlist1,list,retTree);
        TOKEN_EXIT(switch_list_exit,"}")
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
        _retValue = list ;
#line 3562 "cplus.met"
        goto switch_list_ret;
#line 3562 "cplus.met"
        
#line 3562 "cplus.met"
    }
#line 3562 "cplus.met"
#line 3562 "cplus.met"
#line 3562 "cplus.met"

#line 3563 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 3563 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 3563 "cplus.met"
return((PPTREE) 0);
#line 3563 "cplus.met"

#line 3563 "cplus.met"
switch_list_exit :
#line 3563 "cplus.met"

#line 3563 "cplus.met"
    _Debug = TRACE_RULE("switch_list",TRACE_EXIT,(PPTREE)0);
#line 3563 "cplus.met"
    _funcLevel--;
#line 3563 "cplus.met"
    return((PPTREE) -1) ;
#line 3563 "cplus.met"

#line 3563 "cplus.met"
switch_list_ret :
#line 3563 "cplus.met"
    
#line 3563 "cplus.met"
    _Debug = TRACE_RULE("switch_list",TRACE_RETURN,_retValue);
#line 3563 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 3563 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 3563 "cplus.met"
    return _retValue ;
#line 3563 "cplus.met"
}
#line 3563 "cplus.met"

#line 3563 "cplus.met"
#line 1829 "cplus.met"
PPTREE cplus::template_type ( int error_free)
#line 1829 "cplus.met"
{
#line 1829 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 1829 "cplus.met"
    int _value,_nbPre = 0 ;
#line 1829 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 1829 "cplus.met"
    int _Debug = TRACE_RULE("template_type",TRACE_ENTER,(PPTREE)0);
#line 1829 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 1829 "cplus.met"
#line 1829 "cplus.met"
    PPTREE _addlist1 = (PPTREE) 0;
#line 1829 "cplus.met"
#line 1829 "cplus.met"
    PPTREE exp = (PPTREE) 0,listParam = (PPTREE) 0;
#line 1829 "cplus.met"
#line 1831 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 1831 "cplus.met"
    if (  !SEE_TOKEN( INFE,"<") || !(CommTerm(),1)) {
#line 1831 "cplus.met"
        MulFreeTree(3,_addlist1,exp,listParam);
        TOKEN_EXIT(template_type_exit,"<")
#line 1831 "cplus.met"
    } else {
#line 1831 "cplus.met"
        tokenAhead = 0 ;
#line 1831 "cplus.met"
    }
#line 1831 "cplus.met"
#line 1831 "cplus.met"
    _addlist1 = listParam ;
#line 1831 "cplus.met"
#line 1832 "cplus.met"
    do {
#line 1832 "cplus.met"
#line 1834 "cplus.met"
        if ((NPUSH_CALL_AFF_VERIF(exp = ,_Tak(additive_expression), 3, cplus)) || 
#line 1834 "cplus.met"
           (NPUSH_CALL_AFF_VERIF(exp = ,_Tak(type_name), 141, cplus))){
#line 1834 "cplus.met"
#line 1836 "cplus.met"
#line 1836 "cplus.met"
            _addlist1 =AddList(_addlist1 ,exp );
#line 1836 "cplus.met"
#line 1836 "cplus.met"
            if (listParam){
#line 1836 "cplus.met"
#line 1836 "cplus.met"
                _addlist1 = SonTree (_addlist1 ,2 );
#line 1836 "cplus.met"
            } else {
#line 1836 "cplus.met"
#line 1836 "cplus.met"
                listParam = _addlist1 ;
#line 1836 "cplus.met"
            }
#line 1836 "cplus.met"
        }
#line 1836 "cplus.met"
#line 1836 "cplus.met"
#line 1837 "cplus.met"
    } while ( !(! ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN(VIRG,",") && (tokenAhead = 0,CommTerm(),1)))) ;
#line 1837 "cplus.met"
#line 1838 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 1838 "cplus.met"
    if (  !SEE_TOKEN( SUPE,">") || !(CommTerm(),1)) {
#line 1838 "cplus.met"
        MulFreeTree(3,_addlist1,exp,listParam);
        TOKEN_EXIT(template_type_exit,">")
#line 1838 "cplus.met"
    } else {
#line 1838 "cplus.met"
        tokenAhead = 0 ;
#line 1838 "cplus.met"
    }
#line 1838 "cplus.met"
#line 1839 "cplus.met"
    {
#line 1839 "cplus.met"
        PPTREE _ptTree0=0;
#line 1839 "cplus.met"
        {
#line 1839 "cplus.met"
            PPTREE _ptRes1=0;
#line 1839 "cplus.met"
            _ptRes1= MakeTree(PARAM_TYPE, 2);
#line 1839 "cplus.met"
            ReplaceTree(_ptRes1, 2, listParam );
#line 1839 "cplus.met"
            _ptTree0=_ptRes1;
#line 1839 "cplus.met"
        }
#line 1839 "cplus.met"
        _retValue =_ptTree0;
#line 1839 "cplus.met"
        goto template_type_ret;
#line 1839 "cplus.met"
    }
#line 1839 "cplus.met"
#line 1839 "cplus.met"
#line 1839 "cplus.met"

#line 1840 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1840 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 1840 "cplus.met"
return((PPTREE) 0);
#line 1840 "cplus.met"

#line 1840 "cplus.met"
template_type_exit :
#line 1840 "cplus.met"

#line 1840 "cplus.met"
    _Debug = TRACE_RULE("template_type",TRACE_EXIT,(PPTREE)0);
#line 1840 "cplus.met"
    _funcLevel--;
#line 1840 "cplus.met"
    return((PPTREE) -1) ;
#line 1840 "cplus.met"

#line 1840 "cplus.met"
template_type_ret :
#line 1840 "cplus.met"
    
#line 1840 "cplus.met"
    _Debug = TRACE_RULE("template_type",TRACE_RETURN,_retValue);
#line 1840 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1840 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 1840 "cplus.met"
    return _retValue ;
#line 1840 "cplus.met"
}
#line 1840 "cplus.met"

#line 1840 "cplus.met"
#line 3213 "cplus.met"
PPTREE cplus::type_and_declarator ( int error_free)
#line 3213 "cplus.met"
{
#line 3213 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 3213 "cplus.met"
    int _value,_nbPre = 0 ;
#line 3213 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 3213 "cplus.met"
    int _Debug = TRACE_RULE("type_and_declarator",TRACE_ENTER,(PPTREE)0);
#line 3213 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 3213 "cplus.met"
#line 3213 "cplus.met"
    PPTREE funcTree = (PPTREE) 0;
#line 3213 "cplus.met"
#line 3215 "cplus.met"
    {
#line 3215 "cplus.met"
        PPTREE _ptTree0=0,_ptRes0=0;
#line 3215 "cplus.met"
        _ptRes0= MakeTree(FUNC, 9);
#line 3215 "cplus.met"
        if ( (_ptTree0=NQUICK_CALL(_Tak(sc_specifier)(error_free), 123, cplus))== (PPTREE) -1 ) {
#line 3215 "cplus.met"
            MulFreeTree(3,_ptRes0,_ptTree0,funcTree);
            PROG_EXIT(type_and_declarator_exit,"type_and_declarator")
#line 3215 "cplus.met"
        }
#line 3215 "cplus.met"
        ReplaceTree(_ptRes0, 1, _ptTree0);
#line 3215 "cplus.met"
        funcTree=_ptRes0;
#line 3215 "cplus.met"
    }
#line 3215 "cplus.met"
#line 3216 "cplus.met"
    {
#line 3216 "cplus.met"
        PPTREE _ptTree0=0;
#line 3216 "cplus.met"
        if ( (_ptTree0=NQUICK_CALL(_Tak(type_specifier)(error_free), 142, cplus))== (PPTREE) -1 ) {
#line 3216 "cplus.met"
            MulFreeTree(2,_ptTree0,funcTree);
            PROG_EXIT(type_and_declarator_exit,"type_and_declarator")
#line 3216 "cplus.met"
        }
#line 3216 "cplus.met"
        ReplaceTree(funcTree , 2 , _ptTree0);
#line 3216 "cplus.met"
    }
#line 3216 "cplus.met"
#line 3217 "cplus.met"
    {
#line 3217 "cplus.met"
        PPTREE _ptTree0=0;
#line 3217 "cplus.met"
        if ( (_ptTree0=NQUICK_CALL(_Tak(func_declarator)(error_free), 75, cplus))== (PPTREE) -1 ) {
#line 3217 "cplus.met"
            MulFreeTree(2,_ptTree0,funcTree);
            PROG_EXIT(type_and_declarator_exit,"type_and_declarator")
#line 3217 "cplus.met"
        }
#line 3217 "cplus.met"
        ReplaceTree(funcTree , 3 , _ptTree0);
#line 3217 "cplus.met"
    }
#line 3217 "cplus.met"
#line 3218 "cplus.met"
    {
#line 3218 "cplus.met"
        _retValue = funcTree ;
#line 3218 "cplus.met"
        goto type_and_declarator_ret;
#line 3218 "cplus.met"
        
#line 3218 "cplus.met"
    }
#line 3218 "cplus.met"
#line 3218 "cplus.met"
#line 3218 "cplus.met"

#line 3219 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 3219 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 3219 "cplus.met"
return((PPTREE) 0);
#line 3219 "cplus.met"

#line 3219 "cplus.met"
type_and_declarator_exit :
#line 3219 "cplus.met"

#line 3219 "cplus.met"
    _Debug = TRACE_RULE("type_and_declarator",TRACE_EXIT,(PPTREE)0);
#line 3219 "cplus.met"
    _funcLevel--;
#line 3219 "cplus.met"
    return((PPTREE) -1) ;
#line 3219 "cplus.met"

#line 3219 "cplus.met"
type_and_declarator_ret :
#line 3219 "cplus.met"
    
#line 3219 "cplus.met"
    _Debug = TRACE_RULE("type_and_declarator",TRACE_RETURN,_retValue);
#line 3219 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 3219 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 3219 "cplus.met"
    return _retValue ;
#line 3219 "cplus.met"
}
#line 3219 "cplus.met"

#line 3219 "cplus.met"
#line 3111 "cplus.met"
PPTREE cplus::type_descr ( int error_free)
#line 3111 "cplus.met"
{
#line 3111 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 3111 "cplus.met"
    int _value,_nbPre = 0 ;
#line 3111 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 3111 "cplus.met"
    int _Debug = TRACE_RULE("type_descr",TRACE_ENTER,(PPTREE)0);
#line 3111 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 3111 "cplus.met"
#line 3112 "cplus.met"
    {
#line 3112 "cplus.met"
        PPTREE _ptTree0=0;
#line 3112 "cplus.met"
        {
#line 3112 "cplus.met"
            PPTREE _ptTree1=0,_ptRes1=0;
#line 3112 "cplus.met"
            _ptRes1= MakeTree(IDENT, 1);
#line 3112 "cplus.met"
            (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3112 "cplus.met"
            if ( ! TERM_OR_META(IDENT,"IDENT") || !(BUILD_TERM_META(_ptTree1))) {
#line 3112 "cplus.met"
                MulFreeTree(3,_ptRes1,_ptTree1,_ptTree0);
                TOKEN_EXIT(type_descr_exit,"IDENT")
#line 3112 "cplus.met"
            } else {
#line 3112 "cplus.met"
                tokenAhead = 0 ;
#line 3112 "cplus.met"
            }
#line 3112 "cplus.met"
            ReplaceTree(_ptRes1, 1, _ptTree1);
#line 3112 "cplus.met"
            _ptTree0=_ptRes1;
#line 3112 "cplus.met"
        }
#line 3112 "cplus.met"
        _retValue =_ptTree0;
#line 3112 "cplus.met"
        goto type_descr_ret;
#line 3112 "cplus.met"
    }
#line 3112 "cplus.met"
#line 3112 "cplus.met"
#line 3112 "cplus.met"

#line 3113 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 3113 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 3113 "cplus.met"
return((PPTREE) 0);
#line 3113 "cplus.met"

#line 3113 "cplus.met"
type_descr_exit :
#line 3113 "cplus.met"

#line 3113 "cplus.met"
    _Debug = TRACE_RULE("type_descr",TRACE_EXIT,(PPTREE)0);
#line 3113 "cplus.met"
    _funcLevel--;
#line 3113 "cplus.met"
    return((PPTREE) -1) ;
#line 3113 "cplus.met"

#line 3113 "cplus.met"
type_descr_ret :
#line 3113 "cplus.met"
    
#line 3113 "cplus.met"
    _Debug = TRACE_RULE("type_descr",TRACE_RETURN,_retValue);
#line 3113 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 3113 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 3113 "cplus.met"
    return _retValue ;
#line 3113 "cplus.met"
}
#line 3113 "cplus.met"

#line 3113 "cplus.met"
#line 2544 "cplus.met"
PPTREE cplus::type_name ( int error_free)
#line 2544 "cplus.met"
{
#line 2544 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 2544 "cplus.met"
    int _value,_nbPre = 0 ;
#line 2544 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 2544 "cplus.met"
    int _Debug = TRACE_RULE("type_name",TRACE_ENTER,(PPTREE)0);
#line 2544 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 2544 "cplus.met"
#line 2544 "cplus.met"
    PPTREE retTree = (PPTREE) 0,valTree = (PPTREE) 0;
#line 2544 "cplus.met"
#line 2546 "cplus.met"
    if ( (retTree=NQUICK_CALL(_Tak(type_specifier)(error_free), 142, cplus))== (PPTREE) -1 ) {
#line 2546 "cplus.met"
        MulFreeTree(2,retTree,valTree);
        PROG_EXIT(type_name_exit,"type_name")
#line 2546 "cplus.met"
    }
#line 2546 "cplus.met"
#line 2547 "cplus.met"
    if (NPUSH_CALL_AFF_VERIF(valTree = ,_Tak(abstract_declarator), 2, cplus)){
#line 2547 "cplus.met"
#line 2548 "cplus.met"
        {
#line 2548 "cplus.met"
            PPTREE _ptRes0=0;
#line 2548 "cplus.met"
            _ptRes0= MakeTree(ABST_DECLARATOR, 2);
#line 2548 "cplus.met"
            ReplaceTree(_ptRes0, 1, retTree );
#line 2548 "cplus.met"
            ReplaceTree(_ptRes0, 2, valTree );
#line 2548 "cplus.met"
            valTree=_ptRes0;
#line 2548 "cplus.met"
        }
#line 2548 "cplus.met"
    } else {
#line 2548 "cplus.met"
#line 2550 "cplus.met"
        valTree = retTree ;
#line 2550 "cplus.met"
    }
#line 2550 "cplus.met"
#line 2551 "cplus.met"
    {
#line 2551 "cplus.met"
        _retValue = valTree ;
#line 2551 "cplus.met"
        goto type_name_ret;
#line 2551 "cplus.met"
        
#line 2551 "cplus.met"
    }
#line 2551 "cplus.met"
#line 2551 "cplus.met"
#line 2551 "cplus.met"

#line 2552 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2552 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 2552 "cplus.met"
return((PPTREE) 0);
#line 2552 "cplus.met"

#line 2552 "cplus.met"
type_name_exit :
#line 2552 "cplus.met"

#line 2552 "cplus.met"
    _Debug = TRACE_RULE("type_name",TRACE_EXIT,(PPTREE)0);
#line 2552 "cplus.met"
    _funcLevel--;
#line 2552 "cplus.met"
    return((PPTREE) -1) ;
#line 2552 "cplus.met"

#line 2552 "cplus.met"
type_name_ret :
#line 2552 "cplus.met"
    
#line 2552 "cplus.met"
    _Debug = TRACE_RULE("type_name",TRACE_RETURN,_retValue);
#line 2552 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2552 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 2552 "cplus.met"
    return _retValue ;
#line 2552 "cplus.met"
}
#line 2552 "cplus.met"

#line 2552 "cplus.met"
#line 1805 "cplus.met"
PPTREE cplus::type_specifier ( int error_free)
#line 1805 "cplus.met"
{
#line 1805 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 1805 "cplus.met"
    int _value,_nbPre = 0 ;
#line 1805 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 1805 "cplus.met"
    int _Debug = TRACE_RULE("type_specifier",TRACE_ENTER,(PPTREE)0);
#line 1805 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 1805 "cplus.met"
#line 1805 "cplus.met"
    PPTREE _addlist1 = (PPTREE) 0;
#line 1805 "cplus.met"
#line 1805 "cplus.met"
    PPTREE ret = (PPTREE) 0,listParam = (PPTREE) 0,exp = (PPTREE) 0;
#line 1805 "cplus.met"
#line 1807 "cplus.met"
    if ( (ret=NQUICK_CALL(_Tak(type_specifier_without_param)(error_free), 143, cplus))== (PPTREE) -1 ) {
#line 1807 "cplus.met"
        MulFreeTree(4,_addlist1,exp,listParam,ret);
        PROG_EXIT(type_specifier_exit,"type_specifier")
#line 1807 "cplus.met"
    }
#line 1807 "cplus.met"
#line 1808 "cplus.met"
    if ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN(INFE,"<") && (tokenAhead = 0,CommTerm(),1)){
#line 1808 "cplus.met"
#line 1809 "cplus.met"
#line 1809 "cplus.met"
        _addlist1 = listParam ;
#line 1809 "cplus.met"
#line 1810 "cplus.met"
        do {
#line 1810 "cplus.met"
#line 1811 "cplus.met"
            if ((NPUSH_CALL_AFF_VERIF(exp = ,_Tak(additive_expression), 3, cplus)) || 
#line 1811 "cplus.met"
               (NPUSH_CALL_AFF_VERIF(exp = ,_Tak(type_name), 141, cplus))){
#line 1811 "cplus.met"
#line 1812 "cplus.met"
#line 1812 "cplus.met"
                _addlist1 =AddList(_addlist1 ,exp );
#line 1812 "cplus.met"
#line 1812 "cplus.met"
                if (listParam){
#line 1812 "cplus.met"
#line 1812 "cplus.met"
                    _addlist1 = SonTree (_addlist1 ,2 );
#line 1812 "cplus.met"
                } else {
#line 1812 "cplus.met"
#line 1812 "cplus.met"
                    listParam = _addlist1 ;
#line 1812 "cplus.met"
                }
#line 1812 "cplus.met"
            }
#line 1812 "cplus.met"
#line 1812 "cplus.met"
#line 1813 "cplus.met"
        } while ( !(! ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN(VIRG,",") && (tokenAhead = 0,CommTerm(),1)))) ;
#line 1813 "cplus.met"
#line 1814 "cplus.met"
        (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 1814 "cplus.met"
        if (  !SEE_TOKEN( SUPE,">") || !(CommTerm(),1)) {
#line 1814 "cplus.met"
            MulFreeTree(4,_addlist1,exp,listParam,ret);
            TOKEN_EXIT(type_specifier_exit,">")
#line 1814 "cplus.met"
        } else {
#line 1814 "cplus.met"
            tokenAhead = 0 ;
#line 1814 "cplus.met"
        }
#line 1814 "cplus.met"
#line 1815 "cplus.met"
        {
#line 1815 "cplus.met"
            PPTREE _ptRes0=0;
#line 1815 "cplus.met"
            _ptRes0= MakeTree(PARAM_TYPE, 2);
#line 1815 "cplus.met"
            ReplaceTree(_ptRes0, 1, ret );
#line 1815 "cplus.met"
            ReplaceTree(_ptRes0, 2, listParam );
#line 1815 "cplus.met"
            ret=_ptRes0;
#line 1815 "cplus.met"
        }
#line 1815 "cplus.met"
#line 1815 "cplus.met"
#line 1815 "cplus.met"
    }
#line 1815 "cplus.met"
#line 1817 "cplus.met"
    {
#line 1817 "cplus.met"
        _retValue = ret ;
#line 1817 "cplus.met"
        goto type_specifier_ret;
#line 1817 "cplus.met"
        
#line 1817 "cplus.met"
    }
#line 1817 "cplus.met"
#line 1817 "cplus.met"
#line 1817 "cplus.met"

#line 1818 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1818 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 1818 "cplus.met"
return((PPTREE) 0);
#line 1818 "cplus.met"

#line 1818 "cplus.met"
type_specifier_exit :
#line 1818 "cplus.met"

#line 1818 "cplus.met"
    _Debug = TRACE_RULE("type_specifier",TRACE_EXIT,(PPTREE)0);
#line 1818 "cplus.met"
    _funcLevel--;
#line 1818 "cplus.met"
    return((PPTREE) -1) ;
#line 1818 "cplus.met"

#line 1818 "cplus.met"
type_specifier_ret :
#line 1818 "cplus.met"
    
#line 1818 "cplus.met"
    _Debug = TRACE_RULE("type_specifier",TRACE_RETURN,_retValue);
#line 1818 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1818 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 1818 "cplus.met"
    return _retValue ;
#line 1818 "cplus.met"
}
#line 1818 "cplus.met"

#line 1818 "cplus.met"
#line 1792 "cplus.met"
PPTREE cplus::type_specifier_without_param ( int error_free)
#line 1792 "cplus.met"
{
#line 1792 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 1792 "cplus.met"
    int _value,_nbPre = 0 ;
#line 1792 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 1792 "cplus.met"
    int _Debug = TRACE_RULE("type_specifier_without_param",TRACE_ENTER,(PPTREE)0);
#line 1792 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 1792 "cplus.met"
#line 1792 "cplus.met"
    PPTREE retTree = (PPTREE) 0,valTree = (PPTREE) 0,list = (PPTREE) 0,valTreeR = (PPTREE) 0;
#line 1792 "cplus.met"
#line 1794 "cplus.met"
    if (NPUSH_CALL_AFF_VERIF(valTreeR = ,_Tak(range_modifier), 118, cplus)){
#line 1794 "cplus.met"
#line 1795 "cplus.met"
        {
#line 1795 "cplus.met"
            PPTREE _ptTree0=0;
#line 1795 "cplus.met"
            {
#line 1795 "cplus.met"
                PPTREE _ptTree1=0;
#line 1795 "cplus.met"
                if ( (_ptTree1=NQUICK_CALL(_Tak(type_specifier)(error_free), 142, cplus))== (PPTREE) -1 ) {
#line 1795 "cplus.met"
                    MulFreeTree(6,_ptTree1,_ptTree0,list,retTree,valTree,valTreeR);
                    PROG_EXIT(type_specifier_without_param_exit,"type_specifier_without_param")
#line 1795 "cplus.met"
                }
#line 1795 "cplus.met"
                _ptTree0=ReplaceTree(valTreeR , 2 , _ptTree1);
#line 1795 "cplus.met"
            }
#line 1795 "cplus.met"
            _retValue =_ptTree0;
#line 1795 "cplus.met"
            goto type_specifier_without_param_ret;
#line 1795 "cplus.met"
        }
#line 1795 "cplus.met"
    }
#line 1795 "cplus.met"
#line 1796 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 1796 "cplus.met"
    switch( lexEl.Value) {
#line 1796 "cplus.met"
#line 1797 "cplus.met"
        case ENUM : 
#line 1797 "cplus.met"
#line 1797 "cplus.met"
            {
#line 1797 "cplus.met"
                PPTREE _ptTree0=0;
#line 1797 "cplus.met"
                if ( (_ptTree0=NQUICK_CALL(_Tak(enum_declarator)(error_free), 53, cplus))== (PPTREE) -1 ) {
#line 1797 "cplus.met"
                    MulFreeTree(5,_ptTree0,list,retTree,valTree,valTreeR);
                    PROG_EXIT(type_specifier_without_param_exit,"type_specifier_without_param")
#line 1797 "cplus.met"
                }
#line 1797 "cplus.met"
                _retValue =_ptTree0;
#line 1797 "cplus.met"
                goto type_specifier_without_param_ret;
#line 1797 "cplus.met"
            }
#line 1797 "cplus.met"
            break;
#line 1797 "cplus.met"
#line 1798 "cplus.met"
        case STRUCT : 
#line 1798 "cplus.met"
#line 1798 "cplus.met"
            {
#line 1798 "cplus.met"
                PPTREE _ptTree0=0;
#line 1798 "cplus.met"
                if ( (_ptTree0=NQUICK_CALL(_Tak(class_declaration)(error_free), 23, cplus))== (PPTREE) -1 ) {
#line 1798 "cplus.met"
                    MulFreeTree(5,_ptTree0,list,retTree,valTree,valTreeR);
                    PROG_EXIT(type_specifier_without_param_exit,"type_specifier_without_param")
#line 1798 "cplus.met"
                }
#line 1798 "cplus.met"
                _retValue =_ptTree0;
#line 1798 "cplus.met"
                goto type_specifier_without_param_ret;
#line 1798 "cplus.met"
            }
#line 1798 "cplus.met"
            break;
#line 1798 "cplus.met"
#line 1799 "cplus.met"
        case UNION : 
#line 1799 "cplus.met"
#line 1799 "cplus.met"
            {
#line 1799 "cplus.met"
                PPTREE _ptTree0=0;
#line 1799 "cplus.met"
                if ( (_ptTree0=NQUICK_CALL(_Tak(class_declaration)(error_free), 23, cplus))== (PPTREE) -1 ) {
#line 1799 "cplus.met"
                    MulFreeTree(5,_ptTree0,list,retTree,valTree,valTreeR);
                    PROG_EXIT(type_specifier_without_param_exit,"type_specifier_without_param")
#line 1799 "cplus.met"
                }
#line 1799 "cplus.met"
                _retValue =_ptTree0;
#line 1799 "cplus.met"
                goto type_specifier_without_param_ret;
#line 1799 "cplus.met"
            }
#line 1799 "cplus.met"
            break;
#line 1799 "cplus.met"
#line 1800 "cplus.met"
        case CLASS : 
#line 1800 "cplus.met"
#line 1800 "cplus.met"
            {
#line 1800 "cplus.met"
                PPTREE _ptTree0=0;
#line 1800 "cplus.met"
                if ( (_ptTree0=NQUICK_CALL(_Tak(class_declaration)(error_free), 23, cplus))== (PPTREE) -1 ) {
#line 1800 "cplus.met"
                    MulFreeTree(5,_ptTree0,list,retTree,valTree,valTreeR);
                    PROG_EXIT(type_specifier_without_param_exit,"type_specifier_without_param")
#line 1800 "cplus.met"
                }
#line 1800 "cplus.met"
                _retValue =_ptTree0;
#line 1800 "cplus.met"
                goto type_specifier_without_param_ret;
#line 1800 "cplus.met"
            }
#line 1800 "cplus.met"
            break;
#line 1800 "cplus.met"
#line 1801 "cplus.met"
        default : 
#line 1801 "cplus.met"
#line 1801 "cplus.met"
            {
#line 1801 "cplus.met"
                PPTREE _ptTree0=0;
#line 1801 "cplus.met"
                if ( (_ptTree0=NQUICK_CALL(_Tak(simple_type)(error_free), 125, cplus))== (PPTREE) -1 ) {
#line 1801 "cplus.met"
                    MulFreeTree(5,_ptTree0,list,retTree,valTree,valTreeR);
                    PROG_EXIT(type_specifier_without_param_exit,"type_specifier_without_param")
#line 1801 "cplus.met"
                }
#line 1801 "cplus.met"
                _retValue =_ptTree0;
#line 1801 "cplus.met"
                goto type_specifier_without_param_ret;
#line 1801 "cplus.met"
            }
#line 1801 "cplus.met"
            break;
#line 1801 "cplus.met"
    }
#line 1801 "cplus.met"
#line 1801 "cplus.met"
#line 1802 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1802 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 1802 "cplus.met"
return((PPTREE) 0);
#line 1802 "cplus.met"

#line 1802 "cplus.met"
type_specifier_without_param_exit :
#line 1802 "cplus.met"

#line 1802 "cplus.met"
    _Debug = TRACE_RULE("type_specifier_without_param",TRACE_EXIT,(PPTREE)0);
#line 1802 "cplus.met"
    _funcLevel--;
#line 1802 "cplus.met"
    return((PPTREE) -1) ;
#line 1802 "cplus.met"

#line 1802 "cplus.met"
type_specifier_without_param_ret :
#line 1802 "cplus.met"
    
#line 1802 "cplus.met"
    _Debug = TRACE_RULE("type_specifier_without_param",TRACE_RETURN,_retValue);
#line 1802 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1802 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 1802 "cplus.met"
    return _retValue ;
#line 1802 "cplus.met"
}
#line 1802 "cplus.met"

#line 1802 "cplus.met"
#line 1598 "cplus.met"
PPTREE cplus::typedef_and_declarator ( int error_free)
#line 1598 "cplus.met"
{
#line 1598 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 1598 "cplus.met"
    int _value,_nbPre = 0 ;
#line 1598 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 1598 "cplus.met"
    int _Debug = TRACE_RULE("typedef_and_declarator",TRACE_ENTER,(PPTREE)0);
#line 1598 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 1598 "cplus.met"
#line 1598 "cplus.met"
    PPTREE retTree = (PPTREE) 0;
#line 1598 "cplus.met"
#line 1600 "cplus.met"
    {
#line 1600 "cplus.met"
        PPTREE _ptTree0=0,_ptRes0=0;
#line 1600 "cplus.met"
        _ptRes0= MakeTree(TYPEDEF, 2);
#line 1600 "cplus.met"
        if ( (_ptTree0=NQUICK_CALL(_Tak(type_specifier)(error_free), 142, cplus))== (PPTREE) -1 ) {
#line 1600 "cplus.met"
            MulFreeTree(3,_ptRes0,_ptTree0,retTree);
            PROG_EXIT(typedef_and_declarator_exit,"typedef_and_declarator")
#line 1600 "cplus.met"
        }
#line 1600 "cplus.met"
        ReplaceTree(_ptRes0, 1, _ptTree0);
#line 1600 "cplus.met"
        retTree=_ptRes0;
#line 1600 "cplus.met"
    }
#line 1600 "cplus.met"
#line 1601 "cplus.met"
    {
#line 1601 "cplus.met"
        PPTREE _ptTree0=0;
#line 1601 "cplus.met"
        {
#line 1601 "cplus.met"
            PPTREE _ptTree1=0;
#line 1601 "cplus.met"
            if ( (_ptTree1=NQUICK_CALL(_Tak(declarator_list)(error_free), 46, cplus))== (PPTREE) -1 ) {
#line 1601 "cplus.met"
                MulFreeTree(3,_ptTree1,_ptTree0,retTree);
                PROG_EXIT(typedef_and_declarator_exit,"typedef_and_declarator")
#line 1601 "cplus.met"
            }
#line 1601 "cplus.met"
            _ptTree0=ReplaceTree(retTree , 2 , _ptTree1);
#line 1601 "cplus.met"
        }
#line 1601 "cplus.met"
        _retValue =_ptTree0;
#line 1601 "cplus.met"
        goto typedef_and_declarator_ret;
#line 1601 "cplus.met"
    }
#line 1601 "cplus.met"
#line 1601 "cplus.met"
#line 1601 "cplus.met"

#line 1602 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1602 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 1602 "cplus.met"
return((PPTREE) 0);
#line 1602 "cplus.met"

#line 1602 "cplus.met"
typedef_and_declarator_exit :
#line 1602 "cplus.met"

#line 1602 "cplus.met"
    _Debug = TRACE_RULE("typedef_and_declarator",TRACE_EXIT,(PPTREE)0);
#line 1602 "cplus.met"
    _funcLevel--;
#line 1602 "cplus.met"
    return((PPTREE) -1) ;
#line 1602 "cplus.met"

#line 1602 "cplus.met"
typedef_and_declarator_ret :
#line 1602 "cplus.met"
    
#line 1602 "cplus.met"
    _Debug = TRACE_RULE("typedef_and_declarator",TRACE_RETURN,_retValue);
#line 1602 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1602 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 1602 "cplus.met"
    return _retValue ;
#line 1602 "cplus.met"
}
#line 1602 "cplus.met"

#line 1602 "cplus.met"
#line 2775 "cplus.met"
PPTREE cplus::unary_expression ( int error_free)
#line 2775 "cplus.met"
{
#line 2775 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 2775 "cplus.met"
    int _value,_nbPre = 0 ;
#line 2775 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 2775 "cplus.met"
    int _Debug = TRACE_RULE("unary_expression",TRACE_ENTER,(PPTREE)0);
#line 2775 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 2775 "cplus.met"
#line 2775 "cplus.met"
    PPTREE expTree = (PPTREE) 0,inter = (PPTREE) 0;
#line 2775 "cplus.met"
#line 2777 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 2777 "cplus.met"
    switch( lexEl.Value) {
#line 2777 "cplus.met"
#line 2778 "cplus.met"
        case TIRE : 
#line 2778 "cplus.met"
            tokenAhead = 0 ;
#line 2778 "cplus.met"
            CommTerm();
#line 2778 "cplus.met"
#line 2778 "cplus.met"
            {
#line 2778 "cplus.met"
                PPTREE _ptTree0=0,_ptRes0=0;
#line 2778 "cplus.met"
                _ptRes0= MakeTree(NEG, 1);
#line 2778 "cplus.met"
                if ( (_ptTree0=NQUICK_CALL(_Tak(cast_expression)(error_free), 19, cplus))== (PPTREE) -1 ) {
#line 2778 "cplus.met"
                    MulFreeTree(4,_ptRes0,_ptTree0,expTree,inter);
                    PROG_EXIT(unary_expression_exit,"unary_expression")
#line 2778 "cplus.met"
                }
#line 2778 "cplus.met"
                ReplaceTree(_ptRes0, 1, _ptTree0);
#line 2778 "cplus.met"
                expTree=_ptRes0;
#line 2778 "cplus.met"
            }
#line 2778 "cplus.met"
            break;
#line 2778 "cplus.met"
#line 2779 "cplus.met"
        case PLUS : 
#line 2779 "cplus.met"
            tokenAhead = 0 ;
#line 2779 "cplus.met"
            CommTerm();
#line 2779 "cplus.met"
#line 2779 "cplus.met"
            {
#line 2779 "cplus.met"
                PPTREE _ptTree0=0,_ptRes0=0;
#line 2779 "cplus.met"
                _ptRes0= MakeTree(POS, 1);
#line 2779 "cplus.met"
                if ( (_ptTree0=NQUICK_CALL(_Tak(cast_expression)(error_free), 19, cplus))== (PPTREE) -1 ) {
#line 2779 "cplus.met"
                    MulFreeTree(4,_ptRes0,_ptTree0,expTree,inter);
                    PROG_EXIT(unary_expression_exit,"unary_expression")
#line 2779 "cplus.met"
                }
#line 2779 "cplus.met"
                ReplaceTree(_ptRes0, 1, _ptTree0);
#line 2779 "cplus.met"
                expTree=_ptRes0;
#line 2779 "cplus.met"
            }
#line 2779 "cplus.met"
            break;
#line 2779 "cplus.met"
#line 2780 "cplus.met"
        case TILD : 
#line 2780 "cplus.met"
            tokenAhead = 0 ;
#line 2780 "cplus.met"
            CommTerm();
#line 2780 "cplus.met"
#line 2780 "cplus.met"
            {
#line 2780 "cplus.met"
                PPTREE _ptTree0=0,_ptRes0=0;
#line 2780 "cplus.met"
                _ptRes0= MakeTree(LNEG, 1);
#line 2780 "cplus.met"
                if ( (_ptTree0=NQUICK_CALL(_Tak(cast_expression)(error_free), 19, cplus))== (PPTREE) -1 ) {
#line 2780 "cplus.met"
                    MulFreeTree(4,_ptRes0,_ptTree0,expTree,inter);
                    PROG_EXIT(unary_expression_exit,"unary_expression")
#line 2780 "cplus.met"
                }
#line 2780 "cplus.met"
                ReplaceTree(_ptRes0, 1, _ptTree0);
#line 2780 "cplus.met"
                expTree=_ptRes0;
#line 2780 "cplus.met"
            }
#line 2780 "cplus.met"
            break;
#line 2780 "cplus.met"
#line 2781 "cplus.met"
        case EXCL : 
#line 2781 "cplus.met"
            tokenAhead = 0 ;
#line 2781 "cplus.met"
            CommTerm();
#line 2781 "cplus.met"
#line 2781 "cplus.met"
            {
#line 2781 "cplus.met"
                PPTREE _ptTree0=0,_ptRes0=0;
#line 2781 "cplus.met"
                _ptRes0= MakeTree(NOT, 1);
#line 2781 "cplus.met"
                if ( (_ptTree0=NQUICK_CALL(_Tak(cast_expression)(error_free), 19, cplus))== (PPTREE) -1 ) {
#line 2781 "cplus.met"
                    MulFreeTree(4,_ptRes0,_ptTree0,expTree,inter);
                    PROG_EXIT(unary_expression_exit,"unary_expression")
#line 2781 "cplus.met"
                }
#line 2781 "cplus.met"
                ReplaceTree(_ptRes0, 1, _ptTree0);
#line 2781 "cplus.met"
                expTree=_ptRes0;
#line 2781 "cplus.met"
            }
#line 2781 "cplus.met"
            break;
#line 2781 "cplus.met"
#line 2782 "cplus.met"
        case ETOI : 
#line 2782 "cplus.met"
            tokenAhead = 0 ;
#line 2782 "cplus.met"
            CommTerm();
#line 2782 "cplus.met"
#line 2782 "cplus.met"
            {
#line 2782 "cplus.met"
                PPTREE _ptTree0=0,_ptRes0=0;
#line 2782 "cplus.met"
                _ptRes0= MakeTree(POINT, 1);
#line 2782 "cplus.met"
                if ( (_ptTree0=NQUICK_CALL(_Tak(cast_expression)(error_free), 19, cplus))== (PPTREE) -1 ) {
#line 2782 "cplus.met"
                    MulFreeTree(4,_ptRes0,_ptTree0,expTree,inter);
                    PROG_EXIT(unary_expression_exit,"unary_expression")
#line 2782 "cplus.met"
                }
#line 2782 "cplus.met"
                ReplaceTree(_ptRes0, 1, _ptTree0);
#line 2782 "cplus.met"
                expTree=_ptRes0;
#line 2782 "cplus.met"
            }
#line 2782 "cplus.met"
            break;
#line 2782 "cplus.met"
#line 2783 "cplus.met"
        case ETCO : 
#line 2783 "cplus.met"
            tokenAhead = 0 ;
#line 2783 "cplus.met"
            CommTerm();
#line 2783 "cplus.met"
#line 2783 "cplus.met"
            {
#line 2783 "cplus.met"
                PPTREE _ptTree0=0,_ptRes0=0;
#line 2783 "cplus.met"
                _ptRes0= MakeTree(ADDR, 1);
#line 2783 "cplus.met"
                if ( (_ptTree0=NQUICK_CALL(_Tak(cast_expression)(error_free), 19, cplus))== (PPTREE) -1 ) {
#line 2783 "cplus.met"
                    MulFreeTree(4,_ptRes0,_ptTree0,expTree,inter);
                    PROG_EXIT(unary_expression_exit,"unary_expression")
#line 2783 "cplus.met"
                }
#line 2783 "cplus.met"
                ReplaceTree(_ptRes0, 1, _ptTree0);
#line 2783 "cplus.met"
                expTree=_ptRes0;
#line 2783 "cplus.met"
            }
#line 2783 "cplus.met"
            break;
#line 2783 "cplus.met"
#line 2784 "cplus.met"
        case PLUSPLUS : 
#line 2784 "cplus.met"
            tokenAhead = 0 ;
#line 2784 "cplus.met"
            CommTerm();
#line 2784 "cplus.met"
#line 2784 "cplus.met"
            {
#line 2784 "cplus.met"
                PPTREE _ptTree0=0,_ptRes0=0;
#line 2784 "cplus.met"
                _ptRes0= MakeTree(BINCR, 1);
#line 2784 "cplus.met"
                if ( (_ptTree0=NQUICK_CALL(_Tak(cast_expression)(error_free), 19, cplus))== (PPTREE) -1 ) {
#line 2784 "cplus.met"
                    MulFreeTree(4,_ptRes0,_ptTree0,expTree,inter);
                    PROG_EXIT(unary_expression_exit,"unary_expression")
#line 2784 "cplus.met"
                }
#line 2784 "cplus.met"
                ReplaceTree(_ptRes0, 1, _ptTree0);
#line 2784 "cplus.met"
                expTree=_ptRes0;
#line 2784 "cplus.met"
            }
#line 2784 "cplus.met"
            break;
#line 2784 "cplus.met"
#line 2785 "cplus.met"
        case TIRETIRE : 
#line 2785 "cplus.met"
            tokenAhead = 0 ;
#line 2785 "cplus.met"
            CommTerm();
#line 2785 "cplus.met"
#line 2785 "cplus.met"
            {
#line 2785 "cplus.met"
                PPTREE _ptTree0=0,_ptRes0=0;
#line 2785 "cplus.met"
                _ptRes0= MakeTree(BDECR, 1);
#line 2785 "cplus.met"
                if ( (_ptTree0=NQUICK_CALL(_Tak(cast_expression)(error_free), 19, cplus))== (PPTREE) -1 ) {
#line 2785 "cplus.met"
                    MulFreeTree(4,_ptRes0,_ptTree0,expTree,inter);
                    PROG_EXIT(unary_expression_exit,"unary_expression")
#line 2785 "cplus.met"
                }
#line 2785 "cplus.met"
                ReplaceTree(_ptRes0, 1, _ptTree0);
#line 2785 "cplus.met"
                expTree=_ptRes0;
#line 2785 "cplus.met"
            }
#line 2785 "cplus.met"
            break;
#line 2785 "cplus.met"
#line 2786 "cplus.met"
        case SIZEOF : 
#line 2786 "cplus.met"
            tokenAhead = 0 ;
#line 2786 "cplus.met"
            CommTerm();
#line 2786 "cplus.met"
#line 2787 "cplus.met"
#line 2788 "cplus.met"
            if (! (NPUSH_CALL_AFF_VERIF(expTree = ,_Tak(sizeof_type), 127, cplus))){
#line 2788 "cplus.met"
#line 2789 "cplus.met"
#line 2790 "cplus.met"
                if ( (inter=NQUICK_CALL(_Tak(unary_expression)(error_free), 145, cplus))== (PPTREE) -1 ) {
#line 2790 "cplus.met"
                    MulFreeTree(2,expTree,inter);
                    PROG_EXIT(unary_expression_exit,"unary_expression")
#line 2790 "cplus.met"
                }
#line 2790 "cplus.met"
#line 2791 "cplus.met"
                                       /* on libere le chapeau : un EXP, sans liberer
#line 2791 "cplus.met"
                                    l'interieur */
#line 2791 "cplus.met"
                                      if (NumberTree(inter) == EXP) {
#line 2791 "cplus.met"
                                     expTree = SonTree(inter,1);
#line 2791 "cplus.met"
                                     AddRef(expTree);
#line 2791 "cplus.met"
                                     FreeTreeRec(inter);
#line 2791 "cplus.met"
                                     RemRef(expTree);
#line 2791 "cplus.met"
                                          } else
#line 2791 "cplus.met"
                                     expTree = inter;
#line 2791 "cplus.met"
                                
#line 2791 "cplus.met"
#line 2791 "cplus.met"
#line 2801 "cplus.met"
            }
#line 2801 "cplus.met"
#line 2803 "cplus.met"
            {
#line 2803 "cplus.met"
                PPTREE _ptTree0=0;
#line 2803 "cplus.met"
                {
#line 2803 "cplus.met"
                    PPTREE _ptTree1=0,_ptRes1=0;
#line 2803 "cplus.met"
                    _ptRes1= MakeTree(EXP_LIST, 2);
#line 2803 "cplus.met"
                    {
#line 2803 "cplus.met"
                        PPTREE _ptRes2=0;
#line 2803 "cplus.met"
                        _ptRes2= MakeTree(IDENT, 1);
#line 2803 "cplus.met"
                        ReplaceTree(_ptRes2, 1, MakeString ("sizeof"));
#line 2803 "cplus.met"
                        _ptTree1=_ptRes2;
#line 2803 "cplus.met"
                    }
#line 2803 "cplus.met"
                    ReplaceTree(_ptRes1, 1, _ptTree1);
#line 2803 "cplus.met"
                    ReplaceTree(_ptRes1, 2, expTree );
#line 2803 "cplus.met"
                    _ptTree0=_ptRes1;
#line 2803 "cplus.met"
                }
#line 2803 "cplus.met"
                _retValue =_ptTree0;
#line 2803 "cplus.met"
                goto unary_expression_ret;
#line 2803 "cplus.met"
            }
#line 2803 "cplus.met"
#line 2803 "cplus.met"
            break;
#line 2803 "cplus.met"
#line 2806 "cplus.met"
        default : 
#line 2806 "cplus.met"
#line 2806 "cplus.met"
            if ((((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN( DPOIDPOI,"::")) || 
#line 2806 "cplus.met"
                ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN( NEW,"new"))) || 
#line 2806 "cplus.met"
               ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN( DELETE,"delete"))){
#line 2806 "cplus.met"
#line 2807 "cplus.met"
#line 2808 "cplus.met"
                if (! (NPUSH_CALL_AFF_VERIF(expTree = ,_Tak(alloc_expression), 4, cplus))){
#line 2808 "cplus.met"
#line 2809 "cplus.met"
                    if ( (expTree=NQUICK_CALL(_Tak(postfix_expression)(error_free), 106, cplus))== (PPTREE) -1 ) {
#line 2809 "cplus.met"
                        MulFreeTree(2,expTree,inter);
                        PROG_EXIT(unary_expression_exit,"unary_expression")
#line 2809 "cplus.met"
                    }
#line 2809 "cplus.met"
                }
#line 2809 "cplus.met"
#line 2809 "cplus.met"
#line 2809 "cplus.met"
            } else {
#line 2809 "cplus.met"
#line 2812 "cplus.met"
                if ( (expTree=NQUICK_CALL(_Tak(postfix_expression)(error_free), 106, cplus))== (PPTREE) -1 ) {
#line 2812 "cplus.met"
                    MulFreeTree(2,expTree,inter);
                    PROG_EXIT(unary_expression_exit,"unary_expression")
#line 2812 "cplus.met"
                }
#line 2812 "cplus.met"
            }
#line 2812 "cplus.met"
            break;
#line 2812 "cplus.met"
    }
#line 2812 "cplus.met"
#line 2814 "cplus.met"
    {
#line 2814 "cplus.met"
        _retValue = expTree ;
#line 2814 "cplus.met"
        goto unary_expression_ret;
#line 2814 "cplus.met"
        
#line 2814 "cplus.met"
    }
#line 2814 "cplus.met"
#line 2814 "cplus.met"
#line 2814 "cplus.met"

#line 2815 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2815 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 2815 "cplus.met"
return((PPTREE) 0);
#line 2815 "cplus.met"

#line 2815 "cplus.met"
unary_expression_exit :
#line 2815 "cplus.met"

#line 2815 "cplus.met"
    _Debug = TRACE_RULE("unary_expression",TRACE_EXIT,(PPTREE)0);
#line 2815 "cplus.met"
    _funcLevel--;
#line 2815 "cplus.met"
    return((PPTREE) -1) ;
#line 2815 "cplus.met"

#line 2815 "cplus.met"
unary_expression_ret :
#line 2815 "cplus.met"
    
#line 2815 "cplus.met"
    _Debug = TRACE_RULE("unary_expression",TRACE_RETURN,_retValue);
#line 2815 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2815 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 2815 "cplus.met"
    return _retValue ;
#line 2815 "cplus.met"
}
#line 2815 "cplus.met"

#line 2815 "cplus.met"
