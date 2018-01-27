/*************************************************************************/
/*                                                                       */
/*        Produced by MetaGen version 2.0  -    1989-2006                 */
/*       Syntaxic Analyzer Meta Generator developped by                  */
/*                  Eric Lavillonniere                                   */
/*                                                                       */
/*************************************************************************/

#include "token.h"
#include "cplus.h"


#line 3534 "cplus.met"
PPTREE cplus::switch_list ( int error_free)
#line 3534 "cplus.met"
{
#line 3534 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 3534 "cplus.met"
    int _value,_nbPre = 0 ;
#line 3534 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 3534 "cplus.met"
    int _Debug = TRACE_RULE("switch_list",TRACE_ENTER,(PPTREE)0);
#line 3534 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 3534 "cplus.met"
#line 3534 "cplus.met"
    PPTREE _addlist1 = (PPTREE) 0;
#line 3534 "cplus.met"
#line 3534 "cplus.met"
    PPTREE list = (PPTREE) 0,retTree = (PPTREE) 0;
#line 3534 "cplus.met"
#line 3536 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3536 "cplus.met"
    if (  !SEE_TOKEN( AOUV,"{") || !(CommTerm(),1)) {
#line 3536 "cplus.met"
        MulFreeTree(3,_addlist1,list,retTree);
        TOKEN_EXIT(switch_list_exit,"{")
#line 3536 "cplus.met"
    } else {
#line 3536 "cplus.met"
        tokenAhead = 0 ;
#line 3536 "cplus.met"
    }
#line 3536 "cplus.met"
#line 3536 "cplus.met"
    _addlist1 = list ;
#line 3536 "cplus.met"
#line 3537 "cplus.met"
    while (NPUSH_CALL_AFF_VERIF(retTree = ,_Tak(switch_elem), 136, cplus)) { 
#line 3537 "cplus.met"
#line 3538 "cplus.met"
#line 3538 "cplus.met"
        _addlist1 =AddList(_addlist1 ,retTree );
#line 3538 "cplus.met"
#line 3538 "cplus.met"
        if (list){
#line 3538 "cplus.met"
#line 3538 "cplus.met"
            _addlist1 = SonTree (_addlist1 ,2 );
#line 3538 "cplus.met"
        } else {
#line 3538 "cplus.met"
#line 3538 "cplus.met"
            list = _addlist1 ;
#line 3538 "cplus.met"
        }
#line 3538 "cplus.met"
    } 
#line 3538 "cplus.met"
#line 3539 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3539 "cplus.met"
    if (  !SEE_TOKEN( AFER,"}") || !(CommTerm(),1)) {
#line 3539 "cplus.met"
        MulFreeTree(3,_addlist1,list,retTree);
        TOKEN_EXIT(switch_list_exit,"}")
#line 3539 "cplus.met"
    } else {
#line 3539 "cplus.met"
        tokenAhead = 0 ;
#line 3539 "cplus.met"
    }
#line 3539 "cplus.met"
#line 3540 "cplus.met"
    {
#line 3540 "cplus.met"
        _retValue = list ;
#line 3540 "cplus.met"
        goto switch_list_ret;
#line 3540 "cplus.met"
        
#line 3540 "cplus.met"
    }
#line 3540 "cplus.met"
#line 3540 "cplus.met"
#line 3540 "cplus.met"

#line 3541 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 3541 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 3541 "cplus.met"
return((PPTREE) 0);
#line 3541 "cplus.met"

#line 3541 "cplus.met"
switch_list_exit :
#line 3541 "cplus.met"

#line 3541 "cplus.met"
    _Debug = TRACE_RULE("switch_list",TRACE_EXIT,(PPTREE)0);
#line 3541 "cplus.met"
    _funcLevel--;
#line 3541 "cplus.met"
    return((PPTREE) -1) ;
#line 3541 "cplus.met"

#line 3541 "cplus.met"
switch_list_ret :
#line 3541 "cplus.met"
    
#line 3541 "cplus.met"
    _Debug = TRACE_RULE("switch_list",TRACE_RETURN,_retValue);
#line 3541 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 3541 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 3541 "cplus.met"
    return _retValue ;
#line 3541 "cplus.met"
}
#line 3541 "cplus.met"

#line 3541 "cplus.met"
#line 1813 "cplus.met"
PPTREE cplus::template_type ( int error_free)
#line 1813 "cplus.met"
{
#line 1813 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 1813 "cplus.met"
    int _value,_nbPre = 0 ;
#line 1813 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 1813 "cplus.met"
    int _Debug = TRACE_RULE("template_type",TRACE_ENTER,(PPTREE)0);
#line 1813 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 1813 "cplus.met"
#line 1813 "cplus.met"
    PPTREE _addlist1 = (PPTREE) 0;
#line 1813 "cplus.met"
#line 1813 "cplus.met"
    PPTREE exp = (PPTREE) 0,listParam = (PPTREE) 0;
#line 1813 "cplus.met"
#line 1815 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 1815 "cplus.met"
    if (  !SEE_TOKEN( INFE,"<") || !(CommTerm(),1)) {
#line 1815 "cplus.met"
        MulFreeTree(3,_addlist1,exp,listParam);
        TOKEN_EXIT(template_type_exit,"<")
#line 1815 "cplus.met"
    } else {
#line 1815 "cplus.met"
        tokenAhead = 0 ;
#line 1815 "cplus.met"
    }
#line 1815 "cplus.met"
#line 1815 "cplus.met"
    _addlist1 = listParam ;
#line 1815 "cplus.met"
#line 1816 "cplus.met"
    do {
#line 1816 "cplus.met"
#line 1818 "cplus.met"
        if ((NPUSH_CALL_AFF_VERIF(exp = ,_Tak(additive_expression), 3, cplus)) || 
#line 1818 "cplus.met"
           (NPUSH_CALL_AFF_VERIF(exp = ,_Tak(type_name), 141, cplus))){
#line 1818 "cplus.met"
#line 1820 "cplus.met"
#line 1820 "cplus.met"
            _addlist1 =AddList(_addlist1 ,exp );
#line 1820 "cplus.met"
#line 1820 "cplus.met"
            if (listParam){
#line 1820 "cplus.met"
#line 1820 "cplus.met"
                _addlist1 = SonTree (_addlist1 ,2 );
#line 1820 "cplus.met"
            } else {
#line 1820 "cplus.met"
#line 1820 "cplus.met"
                listParam = _addlist1 ;
#line 1820 "cplus.met"
            }
#line 1820 "cplus.met"
        }
#line 1820 "cplus.met"
#line 1820 "cplus.met"
#line 1821 "cplus.met"
    } while ( !(! ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN(VIRG,",") && (tokenAhead = 0,CommTerm(),1)))) ;
#line 1821 "cplus.met"
#line 1822 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 1822 "cplus.met"
    if (  !SEE_TOKEN( SUPE,">") || !(CommTerm(),1)) {
#line 1822 "cplus.met"
        MulFreeTree(3,_addlist1,exp,listParam);
        TOKEN_EXIT(template_type_exit,">")
#line 1822 "cplus.met"
    } else {
#line 1822 "cplus.met"
        tokenAhead = 0 ;
#line 1822 "cplus.met"
    }
#line 1822 "cplus.met"
#line 1823 "cplus.met"
    {
#line 1823 "cplus.met"
        PPTREE _ptTree0=0;
#line 1823 "cplus.met"
        {
#line 1823 "cplus.met"
            PPTREE _ptRes1=0;
#line 1823 "cplus.met"
            _ptRes1= MakeTree(PARAM_TYPE, 2);
#line 1823 "cplus.met"
            ReplaceTree(_ptRes1, 2, listParam );
#line 1823 "cplus.met"
            _ptTree0=_ptRes1;
#line 1823 "cplus.met"
        }
#line 1823 "cplus.met"
        _retValue =_ptTree0;
#line 1823 "cplus.met"
        goto template_type_ret;
#line 1823 "cplus.met"
    }
#line 1823 "cplus.met"
#line 1823 "cplus.met"
#line 1823 "cplus.met"

#line 1824 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1824 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 1824 "cplus.met"
return((PPTREE) 0);
#line 1824 "cplus.met"

#line 1824 "cplus.met"
template_type_exit :
#line 1824 "cplus.met"

#line 1824 "cplus.met"
    _Debug = TRACE_RULE("template_type",TRACE_EXIT,(PPTREE)0);
#line 1824 "cplus.met"
    _funcLevel--;
#line 1824 "cplus.met"
    return((PPTREE) -1) ;
#line 1824 "cplus.met"

#line 1824 "cplus.met"
template_type_ret :
#line 1824 "cplus.met"
    
#line 1824 "cplus.met"
    _Debug = TRACE_RULE("template_type",TRACE_RETURN,_retValue);
#line 1824 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1824 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 1824 "cplus.met"
    return _retValue ;
#line 1824 "cplus.met"
}
#line 1824 "cplus.met"

#line 1824 "cplus.met"
#line 3191 "cplus.met"
PPTREE cplus::type_and_declarator ( int error_free)
#line 3191 "cplus.met"
{
#line 3191 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 3191 "cplus.met"
    int _value,_nbPre = 0 ;
#line 3191 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 3191 "cplus.met"
    int _Debug = TRACE_RULE("type_and_declarator",TRACE_ENTER,(PPTREE)0);
#line 3191 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 3191 "cplus.met"
#line 3191 "cplus.met"
    PPTREE funcTree = (PPTREE) 0;
#line 3191 "cplus.met"
#line 3193 "cplus.met"
    {
#line 3193 "cplus.met"
        PPTREE _ptTree0=0,_ptRes0=0;
#line 3193 "cplus.met"
        _ptRes0= MakeTree(FUNC, 9);
#line 3193 "cplus.met"
        if ( (_ptTree0=NQUICK_CALL(_Tak(sc_specifier)(error_free), 123, cplus))== (PPTREE) -1 ) {
#line 3193 "cplus.met"
            MulFreeTree(3,_ptRes0,_ptTree0,funcTree);
            PROG_EXIT(type_and_declarator_exit,"type_and_declarator")
#line 3193 "cplus.met"
        }
#line 3193 "cplus.met"
        ReplaceTree(_ptRes0, 1, _ptTree0);
#line 3193 "cplus.met"
        funcTree=_ptRes0;
#line 3193 "cplus.met"
    }
#line 3193 "cplus.met"
#line 3194 "cplus.met"
    {
#line 3194 "cplus.met"
        PPTREE _ptTree0=0;
#line 3194 "cplus.met"
        if ( (_ptTree0=NQUICK_CALL(_Tak(type_specifier)(error_free), 142, cplus))== (PPTREE) -1 ) {
#line 3194 "cplus.met"
            MulFreeTree(2,_ptTree0,funcTree);
            PROG_EXIT(type_and_declarator_exit,"type_and_declarator")
#line 3194 "cplus.met"
        }
#line 3194 "cplus.met"
        ReplaceTree(funcTree , 2 , _ptTree0);
#line 3194 "cplus.met"
    }
#line 3194 "cplus.met"
#line 3195 "cplus.met"
    {
#line 3195 "cplus.met"
        PPTREE _ptTree0=0;
#line 3195 "cplus.met"
        if ( (_ptTree0=NQUICK_CALL(_Tak(func_declarator)(error_free), 75, cplus))== (PPTREE) -1 ) {
#line 3195 "cplus.met"
            MulFreeTree(2,_ptTree0,funcTree);
            PROG_EXIT(type_and_declarator_exit,"type_and_declarator")
#line 3195 "cplus.met"
        }
#line 3195 "cplus.met"
        ReplaceTree(funcTree , 3 , _ptTree0);
#line 3195 "cplus.met"
    }
#line 3195 "cplus.met"
#line 3196 "cplus.met"
    {
#line 3196 "cplus.met"
        _retValue = funcTree ;
#line 3196 "cplus.met"
        goto type_and_declarator_ret;
#line 3196 "cplus.met"
        
#line 3196 "cplus.met"
    }
#line 3196 "cplus.met"
#line 3196 "cplus.met"
#line 3196 "cplus.met"

#line 3197 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 3197 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 3197 "cplus.met"
return((PPTREE) 0);
#line 3197 "cplus.met"

#line 3197 "cplus.met"
type_and_declarator_exit :
#line 3197 "cplus.met"

#line 3197 "cplus.met"
    _Debug = TRACE_RULE("type_and_declarator",TRACE_EXIT,(PPTREE)0);
#line 3197 "cplus.met"
    _funcLevel--;
#line 3197 "cplus.met"
    return((PPTREE) -1) ;
#line 3197 "cplus.met"

#line 3197 "cplus.met"
type_and_declarator_ret :
#line 3197 "cplus.met"
    
#line 3197 "cplus.met"
    _Debug = TRACE_RULE("type_and_declarator",TRACE_RETURN,_retValue);
#line 3197 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 3197 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 3197 "cplus.met"
    return _retValue ;
#line 3197 "cplus.met"
}
#line 3197 "cplus.met"

#line 3197 "cplus.met"
#line 3091 "cplus.met"
PPTREE cplus::type_descr ( int error_free)
#line 3091 "cplus.met"
{
#line 3091 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 3091 "cplus.met"
    int _value,_nbPre = 0 ;
#line 3091 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 3091 "cplus.met"
    int _Debug = TRACE_RULE("type_descr",TRACE_ENTER,(PPTREE)0);
#line 3091 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 3091 "cplus.met"
#line 3092 "cplus.met"
    {
#line 3092 "cplus.met"
        PPTREE _ptTree0=0;
#line 3092 "cplus.met"
        {
#line 3092 "cplus.met"
            PPTREE _ptTree1=0,_ptRes1=0;
#line 3092 "cplus.met"
            _ptRes1= MakeTree(IDENT, 1);
#line 3092 "cplus.met"
            (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3092 "cplus.met"
            if ( ! TERM_OR_META(IDENT,"IDENT") || !(BUILD_TERM_META(_ptTree1))) {
#line 3092 "cplus.met"
                MulFreeTree(3,_ptRes1,_ptTree1,_ptTree0);
                TOKEN_EXIT(type_descr_exit,"IDENT")
#line 3092 "cplus.met"
            } else {
#line 3092 "cplus.met"
                tokenAhead = 0 ;
#line 3092 "cplus.met"
            }
#line 3092 "cplus.met"
            ReplaceTree(_ptRes1, 1, _ptTree1);
#line 3092 "cplus.met"
            _ptTree0=_ptRes1;
#line 3092 "cplus.met"
        }
#line 3092 "cplus.met"
        _retValue =_ptTree0;
#line 3092 "cplus.met"
        goto type_descr_ret;
#line 3092 "cplus.met"
    }
#line 3092 "cplus.met"
#line 3092 "cplus.met"
#line 3092 "cplus.met"

#line 3093 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 3093 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 3093 "cplus.met"
return((PPTREE) 0);
#line 3093 "cplus.met"

#line 3093 "cplus.met"
type_descr_exit :
#line 3093 "cplus.met"

#line 3093 "cplus.met"
    _Debug = TRACE_RULE("type_descr",TRACE_EXIT,(PPTREE)0);
#line 3093 "cplus.met"
    _funcLevel--;
#line 3093 "cplus.met"
    return((PPTREE) -1) ;
#line 3093 "cplus.met"

#line 3093 "cplus.met"
type_descr_ret :
#line 3093 "cplus.met"
    
#line 3093 "cplus.met"
    _Debug = TRACE_RULE("type_descr",TRACE_RETURN,_retValue);
#line 3093 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 3093 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 3093 "cplus.met"
    return _retValue ;
#line 3093 "cplus.met"
}
#line 3093 "cplus.met"

#line 3093 "cplus.met"
#line 2528 "cplus.met"
PPTREE cplus::type_name ( int error_free)
#line 2528 "cplus.met"
{
#line 2528 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 2528 "cplus.met"
    int _value,_nbPre = 0 ;
#line 2528 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 2528 "cplus.met"
    int _Debug = TRACE_RULE("type_name",TRACE_ENTER,(PPTREE)0);
#line 2528 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 2528 "cplus.met"
#line 2528 "cplus.met"
    PPTREE retTree = (PPTREE) 0,valTree = (PPTREE) 0;
#line 2528 "cplus.met"
#line 2530 "cplus.met"
    if ( (retTree=NQUICK_CALL(_Tak(type_specifier)(error_free), 142, cplus))== (PPTREE) -1 ) {
#line 2530 "cplus.met"
        MulFreeTree(2,retTree,valTree);
        PROG_EXIT(type_name_exit,"type_name")
#line 2530 "cplus.met"
    }
#line 2530 "cplus.met"
#line 2531 "cplus.met"
    if (NPUSH_CALL_AFF_VERIF(valTree = ,_Tak(abstract_declarator), 2, cplus)){
#line 2531 "cplus.met"
#line 2532 "cplus.met"
        {
#line 2532 "cplus.met"
            PPTREE _ptRes0=0;
#line 2532 "cplus.met"
            _ptRes0= MakeTree(ABST_DECLARATOR, 2);
#line 2532 "cplus.met"
            ReplaceTree(_ptRes0, 1, retTree );
#line 2532 "cplus.met"
            ReplaceTree(_ptRes0, 2, valTree );
#line 2532 "cplus.met"
            valTree=_ptRes0;
#line 2532 "cplus.met"
        }
#line 2532 "cplus.met"
    } else {
#line 2532 "cplus.met"
#line 2534 "cplus.met"
        valTree = retTree ;
#line 2534 "cplus.met"
    }
#line 2534 "cplus.met"
#line 2535 "cplus.met"
    {
#line 2535 "cplus.met"
        _retValue = valTree ;
#line 2535 "cplus.met"
        goto type_name_ret;
#line 2535 "cplus.met"
        
#line 2535 "cplus.met"
    }
#line 2535 "cplus.met"
#line 2535 "cplus.met"
#line 2535 "cplus.met"

#line 2536 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2536 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 2536 "cplus.met"
return((PPTREE) 0);
#line 2536 "cplus.met"

#line 2536 "cplus.met"
type_name_exit :
#line 2536 "cplus.met"

#line 2536 "cplus.met"
    _Debug = TRACE_RULE("type_name",TRACE_EXIT,(PPTREE)0);
#line 2536 "cplus.met"
    _funcLevel--;
#line 2536 "cplus.met"
    return((PPTREE) -1) ;
#line 2536 "cplus.met"

#line 2536 "cplus.met"
type_name_ret :
#line 2536 "cplus.met"
    
#line 2536 "cplus.met"
    _Debug = TRACE_RULE("type_name",TRACE_RETURN,_retValue);
#line 2536 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2536 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 2536 "cplus.met"
    return _retValue ;
#line 2536 "cplus.met"
}
#line 2536 "cplus.met"

#line 2536 "cplus.met"
#line 1789 "cplus.met"
PPTREE cplus::type_specifier ( int error_free)
#line 1789 "cplus.met"
{
#line 1789 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 1789 "cplus.met"
    int _value,_nbPre = 0 ;
#line 1789 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 1789 "cplus.met"
    int _Debug = TRACE_RULE("type_specifier",TRACE_ENTER,(PPTREE)0);
#line 1789 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 1789 "cplus.met"
#line 1789 "cplus.met"
    PPTREE _addlist1 = (PPTREE) 0;
#line 1789 "cplus.met"
#line 1789 "cplus.met"
    PPTREE ret = (PPTREE) 0,listParam = (PPTREE) 0,exp = (PPTREE) 0;
#line 1789 "cplus.met"
#line 1791 "cplus.met"
    if ( (ret=NQUICK_CALL(_Tak(type_specifier_without_param)(error_free), 143, cplus))== (PPTREE) -1 ) {
#line 1791 "cplus.met"
        MulFreeTree(4,_addlist1,exp,listParam,ret);
        PROG_EXIT(type_specifier_exit,"type_specifier")
#line 1791 "cplus.met"
    }
#line 1791 "cplus.met"
#line 1792 "cplus.met"
    if ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN(INFE,"<") && (tokenAhead = 0,CommTerm(),1)){
#line 1792 "cplus.met"
#line 1793 "cplus.met"
#line 1793 "cplus.met"
        _addlist1 = listParam ;
#line 1793 "cplus.met"
#line 1794 "cplus.met"
        do {
#line 1794 "cplus.met"
#line 1795 "cplus.met"
            if ((NPUSH_CALL_AFF_VERIF(exp = ,_Tak(additive_expression), 3, cplus)) || 
#line 1795 "cplus.met"
               (NPUSH_CALL_AFF_VERIF(exp = ,_Tak(type_name), 141, cplus))){
#line 1795 "cplus.met"
#line 1796 "cplus.met"
#line 1796 "cplus.met"
                _addlist1 =AddList(_addlist1 ,exp );
#line 1796 "cplus.met"
#line 1796 "cplus.met"
                if (listParam){
#line 1796 "cplus.met"
#line 1796 "cplus.met"
                    _addlist1 = SonTree (_addlist1 ,2 );
#line 1796 "cplus.met"
                } else {
#line 1796 "cplus.met"
#line 1796 "cplus.met"
                    listParam = _addlist1 ;
#line 1796 "cplus.met"
                }
#line 1796 "cplus.met"
            }
#line 1796 "cplus.met"
#line 1796 "cplus.met"
#line 1797 "cplus.met"
        } while ( !(! ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN(VIRG,",") && (tokenAhead = 0,CommTerm(),1)))) ;
#line 1797 "cplus.met"
#line 1798 "cplus.met"
        (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 1798 "cplus.met"
        if (  !SEE_TOKEN( SUPE,">") || !(CommTerm(),1)) {
#line 1798 "cplus.met"
            MulFreeTree(4,_addlist1,exp,listParam,ret);
            TOKEN_EXIT(type_specifier_exit,">")
#line 1798 "cplus.met"
        } else {
#line 1798 "cplus.met"
            tokenAhead = 0 ;
#line 1798 "cplus.met"
        }
#line 1798 "cplus.met"
#line 1799 "cplus.met"
        {
#line 1799 "cplus.met"
            PPTREE _ptRes0=0;
#line 1799 "cplus.met"
            _ptRes0= MakeTree(PARAM_TYPE, 2);
#line 1799 "cplus.met"
            ReplaceTree(_ptRes0, 1, ret );
#line 1799 "cplus.met"
            ReplaceTree(_ptRes0, 2, listParam );
#line 1799 "cplus.met"
            ret=_ptRes0;
#line 1799 "cplus.met"
        }
#line 1799 "cplus.met"
#line 1799 "cplus.met"
#line 1799 "cplus.met"
    }
#line 1799 "cplus.met"
#line 1801 "cplus.met"
    {
#line 1801 "cplus.met"
        _retValue = ret ;
#line 1801 "cplus.met"
        goto type_specifier_ret;
#line 1801 "cplus.met"
        
#line 1801 "cplus.met"
    }
#line 1801 "cplus.met"
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
type_specifier_exit :
#line 1802 "cplus.met"

#line 1802 "cplus.met"
    _Debug = TRACE_RULE("type_specifier",TRACE_EXIT,(PPTREE)0);
#line 1802 "cplus.met"
    _funcLevel--;
#line 1802 "cplus.met"
    return((PPTREE) -1) ;
#line 1802 "cplus.met"

#line 1802 "cplus.met"
type_specifier_ret :
#line 1802 "cplus.met"
    
#line 1802 "cplus.met"
    _Debug = TRACE_RULE("type_specifier",TRACE_RETURN,_retValue);
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
#line 1776 "cplus.met"
PPTREE cplus::type_specifier_without_param ( int error_free)
#line 1776 "cplus.met"
{
#line 1776 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 1776 "cplus.met"
    int _value,_nbPre = 0 ;
#line 1776 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 1776 "cplus.met"
    int _Debug = TRACE_RULE("type_specifier_without_param",TRACE_ENTER,(PPTREE)0);
#line 1776 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 1776 "cplus.met"
#line 1776 "cplus.met"
    PPTREE retTree = (PPTREE) 0,valTree = (PPTREE) 0,list = (PPTREE) 0,valTreeR = (PPTREE) 0;
#line 1776 "cplus.met"
#line 1778 "cplus.met"
    if (NPUSH_CALL_AFF_VERIF(valTreeR = ,_Tak(range_modifier), 118, cplus)){
#line 1778 "cplus.met"
#line 1779 "cplus.met"
        {
#line 1779 "cplus.met"
            PPTREE _ptTree0=0;
#line 1779 "cplus.met"
            {
#line 1779 "cplus.met"
                PPTREE _ptTree1=0;
#line 1779 "cplus.met"
                if ( (_ptTree1=NQUICK_CALL(_Tak(type_specifier)(error_free), 142, cplus))== (PPTREE) -1 ) {
#line 1779 "cplus.met"
                    MulFreeTree(6,_ptTree1,_ptTree0,list,retTree,valTree,valTreeR);
                    PROG_EXIT(type_specifier_without_param_exit,"type_specifier_without_param")
#line 1779 "cplus.met"
                }
#line 1779 "cplus.met"
                _ptTree0=ReplaceTree(valTreeR , 2 , _ptTree1);
#line 1779 "cplus.met"
            }
#line 1779 "cplus.met"
            _retValue =_ptTree0;
#line 1779 "cplus.met"
            goto type_specifier_without_param_ret;
#line 1779 "cplus.met"
        }
#line 1779 "cplus.met"
    }
#line 1779 "cplus.met"
#line 1780 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 1780 "cplus.met"
    switch( lexEl.Value) {
#line 1780 "cplus.met"
#line 1781 "cplus.met"
        case ENUM : 
#line 1781 "cplus.met"
#line 1781 "cplus.met"
            {
#line 1781 "cplus.met"
                PPTREE _ptTree0=0;
#line 1781 "cplus.met"
                if ( (_ptTree0=NQUICK_CALL(_Tak(enum_declarator)(error_free), 53, cplus))== (PPTREE) -1 ) {
#line 1781 "cplus.met"
                    MulFreeTree(5,_ptTree0,list,retTree,valTree,valTreeR);
                    PROG_EXIT(type_specifier_without_param_exit,"type_specifier_without_param")
#line 1781 "cplus.met"
                }
#line 1781 "cplus.met"
                _retValue =_ptTree0;
#line 1781 "cplus.met"
                goto type_specifier_without_param_ret;
#line 1781 "cplus.met"
            }
#line 1781 "cplus.met"
            break;
#line 1781 "cplus.met"
#line 1782 "cplus.met"
        case STRUCT : 
#line 1782 "cplus.met"
#line 1782 "cplus.met"
            {
#line 1782 "cplus.met"
                PPTREE _ptTree0=0;
#line 1782 "cplus.met"
                if ( (_ptTree0=NQUICK_CALL(_Tak(class_declaration)(error_free), 23, cplus))== (PPTREE) -1 ) {
#line 1782 "cplus.met"
                    MulFreeTree(5,_ptTree0,list,retTree,valTree,valTreeR);
                    PROG_EXIT(type_specifier_without_param_exit,"type_specifier_without_param")
#line 1782 "cplus.met"
                }
#line 1782 "cplus.met"
                _retValue =_ptTree0;
#line 1782 "cplus.met"
                goto type_specifier_without_param_ret;
#line 1782 "cplus.met"
            }
#line 1782 "cplus.met"
            break;
#line 1782 "cplus.met"
#line 1783 "cplus.met"
        case UNION : 
#line 1783 "cplus.met"
#line 1783 "cplus.met"
            {
#line 1783 "cplus.met"
                PPTREE _ptTree0=0;
#line 1783 "cplus.met"
                if ( (_ptTree0=NQUICK_CALL(_Tak(class_declaration)(error_free), 23, cplus))== (PPTREE) -1 ) {
#line 1783 "cplus.met"
                    MulFreeTree(5,_ptTree0,list,retTree,valTree,valTreeR);
                    PROG_EXIT(type_specifier_without_param_exit,"type_specifier_without_param")
#line 1783 "cplus.met"
                }
#line 1783 "cplus.met"
                _retValue =_ptTree0;
#line 1783 "cplus.met"
                goto type_specifier_without_param_ret;
#line 1783 "cplus.met"
            }
#line 1783 "cplus.met"
            break;
#line 1783 "cplus.met"
#line 1784 "cplus.met"
        case CLASS : 
#line 1784 "cplus.met"
#line 1784 "cplus.met"
            {
#line 1784 "cplus.met"
                PPTREE _ptTree0=0;
#line 1784 "cplus.met"
                if ( (_ptTree0=NQUICK_CALL(_Tak(class_declaration)(error_free), 23, cplus))== (PPTREE) -1 ) {
#line 1784 "cplus.met"
                    MulFreeTree(5,_ptTree0,list,retTree,valTree,valTreeR);
                    PROG_EXIT(type_specifier_without_param_exit,"type_specifier_without_param")
#line 1784 "cplus.met"
                }
#line 1784 "cplus.met"
                _retValue =_ptTree0;
#line 1784 "cplus.met"
                goto type_specifier_without_param_ret;
#line 1784 "cplus.met"
            }
#line 1784 "cplus.met"
            break;
#line 1784 "cplus.met"
#line 1785 "cplus.met"
        default : 
#line 1785 "cplus.met"
#line 1785 "cplus.met"
            {
#line 1785 "cplus.met"
                PPTREE _ptTree0=0;
#line 1785 "cplus.met"
                if ( (_ptTree0=NQUICK_CALL(_Tak(simple_type)(error_free), 125, cplus))== (PPTREE) -1 ) {
#line 1785 "cplus.met"
                    MulFreeTree(5,_ptTree0,list,retTree,valTree,valTreeR);
                    PROG_EXIT(type_specifier_without_param_exit,"type_specifier_without_param")
#line 1785 "cplus.met"
                }
#line 1785 "cplus.met"
                _retValue =_ptTree0;
#line 1785 "cplus.met"
                goto type_specifier_without_param_ret;
#line 1785 "cplus.met"
            }
#line 1785 "cplus.met"
            break;
#line 1785 "cplus.met"
    }
#line 1785 "cplus.met"
#line 1785 "cplus.met"
#line 1786 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1786 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 1786 "cplus.met"
return((PPTREE) 0);
#line 1786 "cplus.met"

#line 1786 "cplus.met"
type_specifier_without_param_exit :
#line 1786 "cplus.met"

#line 1786 "cplus.met"
    _Debug = TRACE_RULE("type_specifier_without_param",TRACE_EXIT,(PPTREE)0);
#line 1786 "cplus.met"
    _funcLevel--;
#line 1786 "cplus.met"
    return((PPTREE) -1) ;
#line 1786 "cplus.met"

#line 1786 "cplus.met"
type_specifier_without_param_ret :
#line 1786 "cplus.met"
    
#line 1786 "cplus.met"
    _Debug = TRACE_RULE("type_specifier_without_param",TRACE_RETURN,_retValue);
#line 1786 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1786 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 1786 "cplus.met"
    return _retValue ;
#line 1786 "cplus.met"
}
#line 1786 "cplus.met"

#line 1786 "cplus.met"
#line 1582 "cplus.met"
PPTREE cplus::typedef_and_declarator ( int error_free)
#line 1582 "cplus.met"
{
#line 1582 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 1582 "cplus.met"
    int _value,_nbPre = 0 ;
#line 1582 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 1582 "cplus.met"
    int _Debug = TRACE_RULE("typedef_and_declarator",TRACE_ENTER,(PPTREE)0);
#line 1582 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 1582 "cplus.met"
#line 1582 "cplus.met"
    PPTREE retTree = (PPTREE) 0;
#line 1582 "cplus.met"
#line 1584 "cplus.met"
    {
#line 1584 "cplus.met"
        PPTREE _ptTree0=0,_ptRes0=0;
#line 1584 "cplus.met"
        _ptRes0= MakeTree(TYPEDEF, 2);
#line 1584 "cplus.met"
        if ( (_ptTree0=NQUICK_CALL(_Tak(type_specifier)(error_free), 142, cplus))== (PPTREE) -1 ) {
#line 1584 "cplus.met"
            MulFreeTree(3,_ptRes0,_ptTree0,retTree);
            PROG_EXIT(typedef_and_declarator_exit,"typedef_and_declarator")
#line 1584 "cplus.met"
        }
#line 1584 "cplus.met"
        ReplaceTree(_ptRes0, 1, _ptTree0);
#line 1584 "cplus.met"
        retTree=_ptRes0;
#line 1584 "cplus.met"
    }
#line 1584 "cplus.met"
#line 1585 "cplus.met"
    {
#line 1585 "cplus.met"
        PPTREE _ptTree0=0;
#line 1585 "cplus.met"
        {
#line 1585 "cplus.met"
            PPTREE _ptTree1=0;
#line 1585 "cplus.met"
            if ( (_ptTree1=NQUICK_CALL(_Tak(declarator_list)(error_free), 46, cplus))== (PPTREE) -1 ) {
#line 1585 "cplus.met"
                MulFreeTree(3,_ptTree1,_ptTree0,retTree);
                PROG_EXIT(typedef_and_declarator_exit,"typedef_and_declarator")
#line 1585 "cplus.met"
            }
#line 1585 "cplus.met"
            _ptTree0=ReplaceTree(retTree , 2 , _ptTree1);
#line 1585 "cplus.met"
        }
#line 1585 "cplus.met"
        _retValue =_ptTree0;
#line 1585 "cplus.met"
        goto typedef_and_declarator_ret;
#line 1585 "cplus.met"
    }
#line 1585 "cplus.met"
#line 1585 "cplus.met"
#line 1585 "cplus.met"

#line 1586 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1586 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 1586 "cplus.met"
return((PPTREE) 0);
#line 1586 "cplus.met"

#line 1586 "cplus.met"
typedef_and_declarator_exit :
#line 1586 "cplus.met"

#line 1586 "cplus.met"
    _Debug = TRACE_RULE("typedef_and_declarator",TRACE_EXIT,(PPTREE)0);
#line 1586 "cplus.met"
    _funcLevel--;
#line 1586 "cplus.met"
    return((PPTREE) -1) ;
#line 1586 "cplus.met"

#line 1586 "cplus.met"
typedef_and_declarator_ret :
#line 1586 "cplus.met"
    
#line 1586 "cplus.met"
    _Debug = TRACE_RULE("typedef_and_declarator",TRACE_RETURN,_retValue);
#line 1586 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1586 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 1586 "cplus.met"
    return _retValue ;
#line 1586 "cplus.met"
}
#line 1586 "cplus.met"

#line 1586 "cplus.met"
#line 2755 "cplus.met"
PPTREE cplus::unary_expression ( int error_free)
#line 2755 "cplus.met"
{
#line 2755 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 2755 "cplus.met"
    int _value,_nbPre = 0 ;
#line 2755 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 2755 "cplus.met"
    int _Debug = TRACE_RULE("unary_expression",TRACE_ENTER,(PPTREE)0);
#line 2755 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 2755 "cplus.met"
#line 2755 "cplus.met"
    PPTREE expTree = (PPTREE) 0,inter = (PPTREE) 0;
#line 2755 "cplus.met"
#line 2757 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 2757 "cplus.met"
    switch( lexEl.Value) {
#line 2757 "cplus.met"
#line 2758 "cplus.met"
        case TIRE : 
#line 2758 "cplus.met"
            tokenAhead = 0 ;
#line 2758 "cplus.met"
            CommTerm();
#line 2758 "cplus.met"
#line 2758 "cplus.met"
            {
#line 2758 "cplus.met"
                PPTREE _ptTree0=0,_ptRes0=0;
#line 2758 "cplus.met"
                _ptRes0= MakeTree(NEG, 1);
#line 2758 "cplus.met"
                if ( (_ptTree0=NQUICK_CALL(_Tak(cast_expression)(error_free), 19, cplus))== (PPTREE) -1 ) {
#line 2758 "cplus.met"
                    MulFreeTree(4,_ptRes0,_ptTree0,expTree,inter);
                    PROG_EXIT(unary_expression_exit,"unary_expression")
#line 2758 "cplus.met"
                }
#line 2758 "cplus.met"
                ReplaceTree(_ptRes0, 1, _ptTree0);
#line 2758 "cplus.met"
                expTree=_ptRes0;
#line 2758 "cplus.met"
            }
#line 2758 "cplus.met"
            break;
#line 2758 "cplus.met"
#line 2759 "cplus.met"
        case PLUS : 
#line 2759 "cplus.met"
            tokenAhead = 0 ;
#line 2759 "cplus.met"
            CommTerm();
#line 2759 "cplus.met"
#line 2759 "cplus.met"
            {
#line 2759 "cplus.met"
                PPTREE _ptTree0=0,_ptRes0=0;
#line 2759 "cplus.met"
                _ptRes0= MakeTree(POS, 1);
#line 2759 "cplus.met"
                if ( (_ptTree0=NQUICK_CALL(_Tak(cast_expression)(error_free), 19, cplus))== (PPTREE) -1 ) {
#line 2759 "cplus.met"
                    MulFreeTree(4,_ptRes0,_ptTree0,expTree,inter);
                    PROG_EXIT(unary_expression_exit,"unary_expression")
#line 2759 "cplus.met"
                }
#line 2759 "cplus.met"
                ReplaceTree(_ptRes0, 1, _ptTree0);
#line 2759 "cplus.met"
                expTree=_ptRes0;
#line 2759 "cplus.met"
            }
#line 2759 "cplus.met"
            break;
#line 2759 "cplus.met"
#line 2760 "cplus.met"
        case TILD : 
#line 2760 "cplus.met"
            tokenAhead = 0 ;
#line 2760 "cplus.met"
            CommTerm();
#line 2760 "cplus.met"
#line 2760 "cplus.met"
            {
#line 2760 "cplus.met"
                PPTREE _ptTree0=0,_ptRes0=0;
#line 2760 "cplus.met"
                _ptRes0= MakeTree(LNEG, 1);
#line 2760 "cplus.met"
                if ( (_ptTree0=NQUICK_CALL(_Tak(cast_expression)(error_free), 19, cplus))== (PPTREE) -1 ) {
#line 2760 "cplus.met"
                    MulFreeTree(4,_ptRes0,_ptTree0,expTree,inter);
                    PROG_EXIT(unary_expression_exit,"unary_expression")
#line 2760 "cplus.met"
                }
#line 2760 "cplus.met"
                ReplaceTree(_ptRes0, 1, _ptTree0);
#line 2760 "cplus.met"
                expTree=_ptRes0;
#line 2760 "cplus.met"
            }
#line 2760 "cplus.met"
            break;
#line 2760 "cplus.met"
#line 2761 "cplus.met"
        case EXCL : 
#line 2761 "cplus.met"
            tokenAhead = 0 ;
#line 2761 "cplus.met"
            CommTerm();
#line 2761 "cplus.met"
#line 2761 "cplus.met"
            {
#line 2761 "cplus.met"
                PPTREE _ptTree0=0,_ptRes0=0;
#line 2761 "cplus.met"
                _ptRes0= MakeTree(NOT, 1);
#line 2761 "cplus.met"
                if ( (_ptTree0=NQUICK_CALL(_Tak(cast_expression)(error_free), 19, cplus))== (PPTREE) -1 ) {
#line 2761 "cplus.met"
                    MulFreeTree(4,_ptRes0,_ptTree0,expTree,inter);
                    PROG_EXIT(unary_expression_exit,"unary_expression")
#line 2761 "cplus.met"
                }
#line 2761 "cplus.met"
                ReplaceTree(_ptRes0, 1, _ptTree0);
#line 2761 "cplus.met"
                expTree=_ptRes0;
#line 2761 "cplus.met"
            }
#line 2761 "cplus.met"
            break;
#line 2761 "cplus.met"
#line 2762 "cplus.met"
        case ETOI : 
#line 2762 "cplus.met"
            tokenAhead = 0 ;
#line 2762 "cplus.met"
            CommTerm();
#line 2762 "cplus.met"
#line 2762 "cplus.met"
            {
#line 2762 "cplus.met"
                PPTREE _ptTree0=0,_ptRes0=0;
#line 2762 "cplus.met"
                _ptRes0= MakeTree(POINT, 1);
#line 2762 "cplus.met"
                if ( (_ptTree0=NQUICK_CALL(_Tak(cast_expression)(error_free), 19, cplus))== (PPTREE) -1 ) {
#line 2762 "cplus.met"
                    MulFreeTree(4,_ptRes0,_ptTree0,expTree,inter);
                    PROG_EXIT(unary_expression_exit,"unary_expression")
#line 2762 "cplus.met"
                }
#line 2762 "cplus.met"
                ReplaceTree(_ptRes0, 1, _ptTree0);
#line 2762 "cplus.met"
                expTree=_ptRes0;
#line 2762 "cplus.met"
            }
#line 2762 "cplus.met"
            break;
#line 2762 "cplus.met"
#line 2763 "cplus.met"
        case ETCO : 
#line 2763 "cplus.met"
            tokenAhead = 0 ;
#line 2763 "cplus.met"
            CommTerm();
#line 2763 "cplus.met"
#line 2763 "cplus.met"
            {
#line 2763 "cplus.met"
                PPTREE _ptTree0=0,_ptRes0=0;
#line 2763 "cplus.met"
                _ptRes0= MakeTree(ADDR, 1);
#line 2763 "cplus.met"
                if ( (_ptTree0=NQUICK_CALL(_Tak(cast_expression)(error_free), 19, cplus))== (PPTREE) -1 ) {
#line 2763 "cplus.met"
                    MulFreeTree(4,_ptRes0,_ptTree0,expTree,inter);
                    PROG_EXIT(unary_expression_exit,"unary_expression")
#line 2763 "cplus.met"
                }
#line 2763 "cplus.met"
                ReplaceTree(_ptRes0, 1, _ptTree0);
#line 2763 "cplus.met"
                expTree=_ptRes0;
#line 2763 "cplus.met"
            }
#line 2763 "cplus.met"
            break;
#line 2763 "cplus.met"
#line 2764 "cplus.met"
        case PLUSPLUS : 
#line 2764 "cplus.met"
            tokenAhead = 0 ;
#line 2764 "cplus.met"
            CommTerm();
#line 2764 "cplus.met"
#line 2764 "cplus.met"
            {
#line 2764 "cplus.met"
                PPTREE _ptTree0=0,_ptRes0=0;
#line 2764 "cplus.met"
                _ptRes0= MakeTree(BINCR, 1);
#line 2764 "cplus.met"
                if ( (_ptTree0=NQUICK_CALL(_Tak(cast_expression)(error_free), 19, cplus))== (PPTREE) -1 ) {
#line 2764 "cplus.met"
                    MulFreeTree(4,_ptRes0,_ptTree0,expTree,inter);
                    PROG_EXIT(unary_expression_exit,"unary_expression")
#line 2764 "cplus.met"
                }
#line 2764 "cplus.met"
                ReplaceTree(_ptRes0, 1, _ptTree0);
#line 2764 "cplus.met"
                expTree=_ptRes0;
#line 2764 "cplus.met"
            }
#line 2764 "cplus.met"
            break;
#line 2764 "cplus.met"
#line 2765 "cplus.met"
        case TIRETIRE : 
#line 2765 "cplus.met"
            tokenAhead = 0 ;
#line 2765 "cplus.met"
            CommTerm();
#line 2765 "cplus.met"
#line 2765 "cplus.met"
            {
#line 2765 "cplus.met"
                PPTREE _ptTree0=0,_ptRes0=0;
#line 2765 "cplus.met"
                _ptRes0= MakeTree(BDECR, 1);
#line 2765 "cplus.met"
                if ( (_ptTree0=NQUICK_CALL(_Tak(cast_expression)(error_free), 19, cplus))== (PPTREE) -1 ) {
#line 2765 "cplus.met"
                    MulFreeTree(4,_ptRes0,_ptTree0,expTree,inter);
                    PROG_EXIT(unary_expression_exit,"unary_expression")
#line 2765 "cplus.met"
                }
#line 2765 "cplus.met"
                ReplaceTree(_ptRes0, 1, _ptTree0);
#line 2765 "cplus.met"
                expTree=_ptRes0;
#line 2765 "cplus.met"
            }
#line 2765 "cplus.met"
            break;
#line 2765 "cplus.met"
#line 2766 "cplus.met"
        case SIZEOF : 
#line 2766 "cplus.met"
            tokenAhead = 0 ;
#line 2766 "cplus.met"
            CommTerm();
#line 2766 "cplus.met"
#line 2767 "cplus.met"
#line 2768 "cplus.met"
            if (! (NPUSH_CALL_AFF_VERIF(expTree = ,_Tak(sizeof_type), 127, cplus))){
#line 2768 "cplus.met"
#line 2769 "cplus.met"
#line 2770 "cplus.met"
                if ( (inter=NQUICK_CALL(_Tak(unary_expression)(error_free), 145, cplus))== (PPTREE) -1 ) {
#line 2770 "cplus.met"
                    MulFreeTree(2,expTree,inter);
                    PROG_EXIT(unary_expression_exit,"unary_expression")
#line 2770 "cplus.met"
                }
#line 2770 "cplus.met"
#line 2771 "cplus.met"
                                        /* on libere le chapeau : un EXP, sans liberer
#line 2771 "cplus.met"
                                     l'interieur */
#line 2771 "cplus.met"
                                       if (NumberTree(inter) == EXP) {
#line 2771 "cplus.met"
                                      expTree = SonTree(inter,1);
#line 2771 "cplus.met"
                                      AddRef(expTree);
#line 2771 "cplus.met"
                                      FreeTreeRec(inter);
#line 2771 "cplus.met"
                                      RemRef(expTree);
#line 2771 "cplus.met"
                                    } else
#line 2771 "cplus.met"
                                      expTree = inter;
#line 2771 "cplus.met"
                                
#line 2771 "cplus.met"
#line 2771 "cplus.met"
#line 2781 "cplus.met"
            }
#line 2781 "cplus.met"
#line 2783 "cplus.met"
            {
#line 2783 "cplus.met"
                PPTREE _ptTree0=0;
#line 2783 "cplus.met"
                {
#line 2783 "cplus.met"
                    PPTREE _ptTree1=0,_ptRes1=0;
#line 2783 "cplus.met"
                    _ptRes1= MakeTree(EXP_LIST, 2);
#line 2783 "cplus.met"
                    {
#line 2783 "cplus.met"
                        PPTREE _ptRes2=0;
#line 2783 "cplus.met"
                        _ptRes2= MakeTree(IDENT, 1);
#line 2783 "cplus.met"
                        ReplaceTree(_ptRes2, 1, MakeString ("sizeof"));
#line 2783 "cplus.met"
                        _ptTree1=_ptRes2;
#line 2783 "cplus.met"
                    }
#line 2783 "cplus.met"
                    ReplaceTree(_ptRes1, 1, _ptTree1);
#line 2783 "cplus.met"
                    ReplaceTree(_ptRes1, 2, expTree );
#line 2783 "cplus.met"
                    _ptTree0=_ptRes1;
#line 2783 "cplus.met"
                }
#line 2783 "cplus.met"
                _retValue =_ptTree0;
#line 2783 "cplus.met"
                goto unary_expression_ret;
#line 2783 "cplus.met"
            }
#line 2783 "cplus.met"
#line 2783 "cplus.met"
            break;
#line 2783 "cplus.met"
#line 2786 "cplus.met"
        default : 
#line 2786 "cplus.met"
#line 2786 "cplus.met"
            if ((((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN( DPOIDPOI,"::")) || 
#line 2786 "cplus.met"
                ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN( NEW,"new"))) || 
#line 2786 "cplus.met"
               ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN( DELETE,"delete"))){
#line 2786 "cplus.met"
#line 2787 "cplus.met"
#line 2788 "cplus.met"
                if (! (NPUSH_CALL_AFF_VERIF(expTree = ,_Tak(alloc_expression), 4, cplus))){
#line 2788 "cplus.met"
#line 2789 "cplus.met"
                    if ( (expTree=NQUICK_CALL(_Tak(postfix_expression)(error_free), 106, cplus))== (PPTREE) -1 ) {
#line 2789 "cplus.met"
                        MulFreeTree(2,expTree,inter);
                        PROG_EXIT(unary_expression_exit,"unary_expression")
#line 2789 "cplus.met"
                    }
#line 2789 "cplus.met"
                }
#line 2789 "cplus.met"
#line 2789 "cplus.met"
#line 2789 "cplus.met"
            } else {
#line 2789 "cplus.met"
#line 2792 "cplus.met"
                if ( (expTree=NQUICK_CALL(_Tak(postfix_expression)(error_free), 106, cplus))== (PPTREE) -1 ) {
#line 2792 "cplus.met"
                    MulFreeTree(2,expTree,inter);
                    PROG_EXIT(unary_expression_exit,"unary_expression")
#line 2792 "cplus.met"
                }
#line 2792 "cplus.met"
            }
#line 2792 "cplus.met"
            break;
#line 2792 "cplus.met"
    }
#line 2792 "cplus.met"
#line 2794 "cplus.met"
    {
#line 2794 "cplus.met"
        _retValue = expTree ;
#line 2794 "cplus.met"
        goto unary_expression_ret;
#line 2794 "cplus.met"
        
#line 2794 "cplus.met"
    }
#line 2794 "cplus.met"
#line 2794 "cplus.met"
#line 2794 "cplus.met"

#line 2795 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2795 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 2795 "cplus.met"
return((PPTREE) 0);
#line 2795 "cplus.met"

#line 2795 "cplus.met"
unary_expression_exit :
#line 2795 "cplus.met"

#line 2795 "cplus.met"
    _Debug = TRACE_RULE("unary_expression",TRACE_EXIT,(PPTREE)0);
#line 2795 "cplus.met"
    _funcLevel--;
#line 2795 "cplus.met"
    return((PPTREE) -1) ;
#line 2795 "cplus.met"

#line 2795 "cplus.met"
unary_expression_ret :
#line 2795 "cplus.met"
    
#line 2795 "cplus.met"
    _Debug = TRACE_RULE("unary_expression",TRACE_RETURN,_retValue);
#line 2795 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2795 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 2795 "cplus.met"
    return _retValue ;
#line 2795 "cplus.met"
}
#line 2795 "cplus.met"

#line 2795 "cplus.met"
