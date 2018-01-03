/*************************************************************************/
/*                                                                       */
/*        Produced by MetaGen version 2.0  -    1989-2006                 */
/*       Syntaxic Analyzer Meta Generator developped by                  */
/*                  Eric Lavillonniere                                   */
/*                                                                       */
/*************************************************************************/

#include "token.h"
#include "cplus.h"


#line 3510 "cplus.met"
PPTREE cplus::switch_list ( int error_free)
#line 3510 "cplus.met"
{
#line 3510 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 3510 "cplus.met"
    int _value,_nbPre = 0 ;
#line 3510 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 3510 "cplus.met"
    int _Debug = TRACE_RULE("switch_list",TRACE_ENTER,(PPTREE)0);
#line 3510 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 3510 "cplus.met"
#line 3510 "cplus.met"
    PPTREE _addlist1 = (PPTREE) 0;
#line 3510 "cplus.met"
#line 3510 "cplus.met"
    PPTREE list = (PPTREE) 0,retTree = (PPTREE) 0;
#line 3510 "cplus.met"
#line 3512 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3512 "cplus.met"
    if (  !SEE_TOKEN( AOUV,"{") || !(CommTerm(),1)) {
#line 3512 "cplus.met"
        MulFreeTree(3,_addlist1,list,retTree);
        TOKEN_EXIT(switch_list_exit,"{")
#line 3512 "cplus.met"
    } else {
#line 3512 "cplus.met"
        tokenAhead = 0 ;
#line 3512 "cplus.met"
    }
#line 3512 "cplus.met"
#line 3512 "cplus.met"
    _addlist1 = list ;
#line 3512 "cplus.met"
#line 3513 "cplus.met"
    while (NPUSH_CALL_AFF_VERIF(retTree = ,_Tak(switch_elem), 135, cplus)) { 
#line 3513 "cplus.met"
#line 3514 "cplus.met"
#line 3514 "cplus.met"
        _addlist1 =AddList(_addlist1 ,retTree );
#line 3514 "cplus.met"
#line 3514 "cplus.met"
        if (list){
#line 3514 "cplus.met"
#line 3514 "cplus.met"
            _addlist1 = SonTree (_addlist1 ,2 );
#line 3514 "cplus.met"
        } else {
#line 3514 "cplus.met"
#line 3514 "cplus.met"
            list = _addlist1 ;
#line 3514 "cplus.met"
        }
#line 3514 "cplus.met"
    } 
#line 3514 "cplus.met"
#line 3515 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3515 "cplus.met"
    if (  !SEE_TOKEN( AFER,"}") || !(CommTerm(),1)) {
#line 3515 "cplus.met"
        MulFreeTree(3,_addlist1,list,retTree);
        TOKEN_EXIT(switch_list_exit,"}")
#line 3515 "cplus.met"
    } else {
#line 3515 "cplus.met"
        tokenAhead = 0 ;
#line 3515 "cplus.met"
    }
#line 3515 "cplus.met"
#line 3516 "cplus.met"
    {
#line 3516 "cplus.met"
        _retValue = list ;
#line 3516 "cplus.met"
        goto switch_list_ret;
#line 3516 "cplus.met"
        
#line 3516 "cplus.met"
    }
#line 3516 "cplus.met"
#line 3516 "cplus.met"
#line 3516 "cplus.met"

#line 3517 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 3517 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 3517 "cplus.met"
return((PPTREE) 0);
#line 3517 "cplus.met"

#line 3517 "cplus.met"
switch_list_exit :
#line 3517 "cplus.met"

#line 3517 "cplus.met"
    _Debug = TRACE_RULE("switch_list",TRACE_EXIT,(PPTREE)0);
#line 3517 "cplus.met"
    _funcLevel--;
#line 3517 "cplus.met"
    return((PPTREE) -1) ;
#line 3517 "cplus.met"

#line 3517 "cplus.met"
switch_list_ret :
#line 3517 "cplus.met"
    
#line 3517 "cplus.met"
    _Debug = TRACE_RULE("switch_list",TRACE_RETURN,_retValue);
#line 3517 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 3517 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 3517 "cplus.met"
    return _retValue ;
#line 3517 "cplus.met"
}
#line 3517 "cplus.met"

#line 3517 "cplus.met"
#line 1789 "cplus.met"
PPTREE cplus::template_type ( int error_free)
#line 1789 "cplus.met"
{
#line 1789 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 1789 "cplus.met"
    int _value,_nbPre = 0 ;
#line 1789 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 1789 "cplus.met"
    int _Debug = TRACE_RULE("template_type",TRACE_ENTER,(PPTREE)0);
#line 1789 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 1789 "cplus.met"
#line 1789 "cplus.met"
    PPTREE _addlist1 = (PPTREE) 0;
#line 1789 "cplus.met"
#line 1789 "cplus.met"
    PPTREE exp = (PPTREE) 0,listParam = (PPTREE) 0;
#line 1789 "cplus.met"
#line 1791 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 1791 "cplus.met"
    if (  !SEE_TOKEN( INFE,"<") || !(CommTerm(),1)) {
#line 1791 "cplus.met"
        MulFreeTree(3,_addlist1,exp,listParam);
        TOKEN_EXIT(template_type_exit,"<")
#line 1791 "cplus.met"
    } else {
#line 1791 "cplus.met"
        tokenAhead = 0 ;
#line 1791 "cplus.met"
    }
#line 1791 "cplus.met"
#line 1791 "cplus.met"
    _addlist1 = listParam ;
#line 1791 "cplus.met"
#line 1792 "cplus.met"
    do {
#line 1792 "cplus.met"
#line 1794 "cplus.met"
        if ((NPUSH_CALL_AFF_VERIF(exp = ,_Tak(additive_expression), 3, cplus)) || 
#line 1794 "cplus.met"
           (NPUSH_CALL_AFF_VERIF(exp = ,_Tak(type_name), 140, cplus))){
#line 1794 "cplus.met"
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
        MulFreeTree(3,_addlist1,exp,listParam);
        TOKEN_EXIT(template_type_exit,">")
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
        PPTREE _ptTree0=0;
#line 1799 "cplus.met"
        {
#line 1799 "cplus.met"
            PPTREE _ptRes1=0;
#line 1799 "cplus.met"
            _ptRes1= MakeTree(PARAM_TYPE, 2);
#line 1799 "cplus.met"
            ReplaceTree(_ptRes1, 2, listParam );
#line 1799 "cplus.met"
            _ptTree0=_ptRes1;
#line 1799 "cplus.met"
        }
#line 1799 "cplus.met"
        _retValue =_ptTree0;
#line 1799 "cplus.met"
        goto template_type_ret;
#line 1799 "cplus.met"
    }
#line 1799 "cplus.met"
#line 1799 "cplus.met"
#line 1799 "cplus.met"

#line 1800 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1800 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 1800 "cplus.met"
return((PPTREE) 0);
#line 1800 "cplus.met"

#line 1800 "cplus.met"
template_type_exit :
#line 1800 "cplus.met"

#line 1800 "cplus.met"
    _Debug = TRACE_RULE("template_type",TRACE_EXIT,(PPTREE)0);
#line 1800 "cplus.met"
    _funcLevel--;
#line 1800 "cplus.met"
    return((PPTREE) -1) ;
#line 1800 "cplus.met"

#line 1800 "cplus.met"
template_type_ret :
#line 1800 "cplus.met"
    
#line 1800 "cplus.met"
    _Debug = TRACE_RULE("template_type",TRACE_RETURN,_retValue);
#line 1800 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1800 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 1800 "cplus.met"
    return _retValue ;
#line 1800 "cplus.met"
}
#line 1800 "cplus.met"

#line 1800 "cplus.met"
#line 3167 "cplus.met"
PPTREE cplus::type_and_declarator ( int error_free)
#line 3167 "cplus.met"
{
#line 3167 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 3167 "cplus.met"
    int _value,_nbPre = 0 ;
#line 3167 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 3167 "cplus.met"
    int _Debug = TRACE_RULE("type_and_declarator",TRACE_ENTER,(PPTREE)0);
#line 3167 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 3167 "cplus.met"
#line 3167 "cplus.met"
    PPTREE funcTree = (PPTREE) 0;
#line 3167 "cplus.met"
#line 3169 "cplus.met"
    {
#line 3169 "cplus.met"
        PPTREE _ptTree0=0,_ptRes0=0;
#line 3169 "cplus.met"
        _ptRes0= MakeTree(FUNC, 9);
#line 3169 "cplus.met"
        if ( (_ptTree0=NQUICK_CALL(_Tak(sc_specifier)(error_free), 122, cplus))== (PPTREE) -1 ) {
#line 3169 "cplus.met"
            MulFreeTree(3,_ptRes0,_ptTree0,funcTree);
            PROG_EXIT(type_and_declarator_exit,"type_and_declarator")
#line 3169 "cplus.met"
        }
#line 3169 "cplus.met"
        ReplaceTree(_ptRes0, 1, _ptTree0);
#line 3169 "cplus.met"
        funcTree=_ptRes0;
#line 3169 "cplus.met"
    }
#line 3169 "cplus.met"
#line 3170 "cplus.met"
    {
#line 3170 "cplus.met"
        PPTREE _ptTree0=0;
#line 3170 "cplus.met"
        if ( (_ptTree0=NQUICK_CALL(_Tak(type_specifier)(error_free), 141, cplus))== (PPTREE) -1 ) {
#line 3170 "cplus.met"
            MulFreeTree(2,_ptTree0,funcTree);
            PROG_EXIT(type_and_declarator_exit,"type_and_declarator")
#line 3170 "cplus.met"
        }
#line 3170 "cplus.met"
        ReplaceTree(funcTree , 2 , _ptTree0);
#line 3170 "cplus.met"
    }
#line 3170 "cplus.met"
#line 3171 "cplus.met"
    {
#line 3171 "cplus.met"
        PPTREE _ptTree0=0;
#line 3171 "cplus.met"
        if ( (_ptTree0=NQUICK_CALL(_Tak(func_declarator)(error_free), 74, cplus))== (PPTREE) -1 ) {
#line 3171 "cplus.met"
            MulFreeTree(2,_ptTree0,funcTree);
            PROG_EXIT(type_and_declarator_exit,"type_and_declarator")
#line 3171 "cplus.met"
        }
#line 3171 "cplus.met"
        ReplaceTree(funcTree , 3 , _ptTree0);
#line 3171 "cplus.met"
    }
#line 3171 "cplus.met"
#line 3172 "cplus.met"
    {
#line 3172 "cplus.met"
        _retValue = funcTree ;
#line 3172 "cplus.met"
        goto type_and_declarator_ret;
#line 3172 "cplus.met"
        
#line 3172 "cplus.met"
    }
#line 3172 "cplus.met"
#line 3172 "cplus.met"
#line 3172 "cplus.met"

#line 3173 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 3173 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 3173 "cplus.met"
return((PPTREE) 0);
#line 3173 "cplus.met"

#line 3173 "cplus.met"
type_and_declarator_exit :
#line 3173 "cplus.met"

#line 3173 "cplus.met"
    _Debug = TRACE_RULE("type_and_declarator",TRACE_EXIT,(PPTREE)0);
#line 3173 "cplus.met"
    _funcLevel--;
#line 3173 "cplus.met"
    return((PPTREE) -1) ;
#line 3173 "cplus.met"

#line 3173 "cplus.met"
type_and_declarator_ret :
#line 3173 "cplus.met"
    
#line 3173 "cplus.met"
    _Debug = TRACE_RULE("type_and_declarator",TRACE_RETURN,_retValue);
#line 3173 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 3173 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 3173 "cplus.met"
    return _retValue ;
#line 3173 "cplus.met"
}
#line 3173 "cplus.met"

#line 3173 "cplus.met"
#line 3067 "cplus.met"
PPTREE cplus::type_descr ( int error_free)
#line 3067 "cplus.met"
{
#line 3067 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 3067 "cplus.met"
    int _value,_nbPre = 0 ;
#line 3067 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 3067 "cplus.met"
    int _Debug = TRACE_RULE("type_descr",TRACE_ENTER,(PPTREE)0);
#line 3067 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 3067 "cplus.met"
#line 3068 "cplus.met"
    {
#line 3068 "cplus.met"
        PPTREE _ptTree0=0;
#line 3068 "cplus.met"
        {
#line 3068 "cplus.met"
            PPTREE _ptTree1=0,_ptRes1=0;
#line 3068 "cplus.met"
            _ptRes1= MakeTree(IDENT, 1);
#line 3068 "cplus.met"
            (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3068 "cplus.met"
            if ( ! TERM_OR_META(IDENT,"IDENT") || !(BUILD_TERM_META(_ptTree1))) {
#line 3068 "cplus.met"
                MulFreeTree(3,_ptRes1,_ptTree1,_ptTree0);
                TOKEN_EXIT(type_descr_exit,"IDENT")
#line 3068 "cplus.met"
            } else {
#line 3068 "cplus.met"
                tokenAhead = 0 ;
#line 3068 "cplus.met"
            }
#line 3068 "cplus.met"
            ReplaceTree(_ptRes1, 1, _ptTree1);
#line 3068 "cplus.met"
            _ptTree0=_ptRes1;
#line 3068 "cplus.met"
        }
#line 3068 "cplus.met"
        _retValue =_ptTree0;
#line 3068 "cplus.met"
        goto type_descr_ret;
#line 3068 "cplus.met"
    }
#line 3068 "cplus.met"
#line 3068 "cplus.met"
#line 3068 "cplus.met"

#line 3069 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 3069 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 3069 "cplus.met"
return((PPTREE) 0);
#line 3069 "cplus.met"

#line 3069 "cplus.met"
type_descr_exit :
#line 3069 "cplus.met"

#line 3069 "cplus.met"
    _Debug = TRACE_RULE("type_descr",TRACE_EXIT,(PPTREE)0);
#line 3069 "cplus.met"
    _funcLevel--;
#line 3069 "cplus.met"
    return((PPTREE) -1) ;
#line 3069 "cplus.met"

#line 3069 "cplus.met"
type_descr_ret :
#line 3069 "cplus.met"
    
#line 3069 "cplus.met"
    _Debug = TRACE_RULE("type_descr",TRACE_RETURN,_retValue);
#line 3069 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 3069 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 3069 "cplus.met"
    return _retValue ;
#line 3069 "cplus.met"
}
#line 3069 "cplus.met"

#line 3069 "cplus.met"
#line 2504 "cplus.met"
PPTREE cplus::type_name ( int error_free)
#line 2504 "cplus.met"
{
#line 2504 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 2504 "cplus.met"
    int _value,_nbPre = 0 ;
#line 2504 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 2504 "cplus.met"
    int _Debug = TRACE_RULE("type_name",TRACE_ENTER,(PPTREE)0);
#line 2504 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 2504 "cplus.met"
#line 2504 "cplus.met"
    PPTREE retTree = (PPTREE) 0,valTree = (PPTREE) 0;
#line 2504 "cplus.met"
#line 2506 "cplus.met"
    if ( (retTree=NQUICK_CALL(_Tak(type_specifier)(error_free), 141, cplus))== (PPTREE) -1 ) {
#line 2506 "cplus.met"
        MulFreeTree(2,retTree,valTree);
        PROG_EXIT(type_name_exit,"type_name")
#line 2506 "cplus.met"
    }
#line 2506 "cplus.met"
#line 2507 "cplus.met"
    if (NPUSH_CALL_AFF_VERIF(valTree = ,_Tak(abstract_declarator), 2, cplus)){
#line 2507 "cplus.met"
#line 2508 "cplus.met"
        {
#line 2508 "cplus.met"
            PPTREE _ptRes0=0;
#line 2508 "cplus.met"
            _ptRes0= MakeTree(ABST_DECLARATOR, 2);
#line 2508 "cplus.met"
            ReplaceTree(_ptRes0, 1, retTree );
#line 2508 "cplus.met"
            ReplaceTree(_ptRes0, 2, valTree );
#line 2508 "cplus.met"
            valTree=_ptRes0;
#line 2508 "cplus.met"
        }
#line 2508 "cplus.met"
    } else {
#line 2508 "cplus.met"
#line 2510 "cplus.met"
        valTree = retTree ;
#line 2510 "cplus.met"
    }
#line 2510 "cplus.met"
#line 2511 "cplus.met"
    {
#line 2511 "cplus.met"
        _retValue = valTree ;
#line 2511 "cplus.met"
        goto type_name_ret;
#line 2511 "cplus.met"
        
#line 2511 "cplus.met"
    }
#line 2511 "cplus.met"
#line 2511 "cplus.met"
#line 2511 "cplus.met"

#line 2512 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2512 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 2512 "cplus.met"
return((PPTREE) 0);
#line 2512 "cplus.met"

#line 2512 "cplus.met"
type_name_exit :
#line 2512 "cplus.met"

#line 2512 "cplus.met"
    _Debug = TRACE_RULE("type_name",TRACE_EXIT,(PPTREE)0);
#line 2512 "cplus.met"
    _funcLevel--;
#line 2512 "cplus.met"
    return((PPTREE) -1) ;
#line 2512 "cplus.met"

#line 2512 "cplus.met"
type_name_ret :
#line 2512 "cplus.met"
    
#line 2512 "cplus.met"
    _Debug = TRACE_RULE("type_name",TRACE_RETURN,_retValue);
#line 2512 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2512 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 2512 "cplus.met"
    return _retValue ;
#line 2512 "cplus.met"
}
#line 2512 "cplus.met"

#line 2512 "cplus.met"
#line 1765 "cplus.met"
PPTREE cplus::type_specifier ( int error_free)
#line 1765 "cplus.met"
{
#line 1765 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 1765 "cplus.met"
    int _value,_nbPre = 0 ;
#line 1765 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 1765 "cplus.met"
    int _Debug = TRACE_RULE("type_specifier",TRACE_ENTER,(PPTREE)0);
#line 1765 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 1765 "cplus.met"
#line 1765 "cplus.met"
    PPTREE _addlist1 = (PPTREE) 0;
#line 1765 "cplus.met"
#line 1765 "cplus.met"
    PPTREE ret = (PPTREE) 0,listParam = (PPTREE) 0,exp = (PPTREE) 0;
#line 1765 "cplus.met"
#line 1767 "cplus.met"
    if ( (ret=NQUICK_CALL(_Tak(type_specifier_without_param)(error_free), 142, cplus))== (PPTREE) -1 ) {
#line 1767 "cplus.met"
        MulFreeTree(4,_addlist1,exp,listParam,ret);
        PROG_EXIT(type_specifier_exit,"type_specifier")
#line 1767 "cplus.met"
    }
#line 1767 "cplus.met"
#line 1768 "cplus.met"
    if ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN(INFE,"<") && (tokenAhead = 0,CommTerm(),1)){
#line 1768 "cplus.met"
#line 1769 "cplus.met"
#line 1769 "cplus.met"
        _addlist1 = listParam ;
#line 1769 "cplus.met"
#line 1770 "cplus.met"
        do {
#line 1770 "cplus.met"
#line 1771 "cplus.met"
            if ((NPUSH_CALL_AFF_VERIF(exp = ,_Tak(additive_expression), 3, cplus)) || 
#line 1771 "cplus.met"
               (NPUSH_CALL_AFF_VERIF(exp = ,_Tak(type_name), 140, cplus))){
#line 1771 "cplus.met"
#line 1772 "cplus.met"
#line 1772 "cplus.met"
                _addlist1 =AddList(_addlist1 ,exp );
#line 1772 "cplus.met"
#line 1772 "cplus.met"
                if (listParam){
#line 1772 "cplus.met"
#line 1772 "cplus.met"
                    _addlist1 = SonTree (_addlist1 ,2 );
#line 1772 "cplus.met"
                } else {
#line 1772 "cplus.met"
#line 1772 "cplus.met"
                    listParam = _addlist1 ;
#line 1772 "cplus.met"
                }
#line 1772 "cplus.met"
            }
#line 1772 "cplus.met"
#line 1772 "cplus.met"
#line 1773 "cplus.met"
        } while ( !(! ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN(VIRG,",") && (tokenAhead = 0,CommTerm(),1)))) ;
#line 1773 "cplus.met"
#line 1774 "cplus.met"
        (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 1774 "cplus.met"
        if (  !SEE_TOKEN( SUPE,">") || !(CommTerm(),1)) {
#line 1774 "cplus.met"
            MulFreeTree(4,_addlist1,exp,listParam,ret);
            TOKEN_EXIT(type_specifier_exit,">")
#line 1774 "cplus.met"
        } else {
#line 1774 "cplus.met"
            tokenAhead = 0 ;
#line 1774 "cplus.met"
        }
#line 1774 "cplus.met"
#line 1775 "cplus.met"
        {
#line 1775 "cplus.met"
            PPTREE _ptRes0=0;
#line 1775 "cplus.met"
            _ptRes0= MakeTree(PARAM_TYPE, 2);
#line 1775 "cplus.met"
            ReplaceTree(_ptRes0, 1, ret );
#line 1775 "cplus.met"
            ReplaceTree(_ptRes0, 2, listParam );
#line 1775 "cplus.met"
            ret=_ptRes0;
#line 1775 "cplus.met"
        }
#line 1775 "cplus.met"
#line 1775 "cplus.met"
#line 1775 "cplus.met"
    }
#line 1775 "cplus.met"
#line 1777 "cplus.met"
    {
#line 1777 "cplus.met"
        _retValue = ret ;
#line 1777 "cplus.met"
        goto type_specifier_ret;
#line 1777 "cplus.met"
        
#line 1777 "cplus.met"
    }
#line 1777 "cplus.met"
#line 1777 "cplus.met"
#line 1777 "cplus.met"

#line 1778 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1778 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 1778 "cplus.met"
return((PPTREE) 0);
#line 1778 "cplus.met"

#line 1778 "cplus.met"
type_specifier_exit :
#line 1778 "cplus.met"

#line 1778 "cplus.met"
    _Debug = TRACE_RULE("type_specifier",TRACE_EXIT,(PPTREE)0);
#line 1778 "cplus.met"
    _funcLevel--;
#line 1778 "cplus.met"
    return((PPTREE) -1) ;
#line 1778 "cplus.met"

#line 1778 "cplus.met"
type_specifier_ret :
#line 1778 "cplus.met"
    
#line 1778 "cplus.met"
    _Debug = TRACE_RULE("type_specifier",TRACE_RETURN,_retValue);
#line 1778 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1778 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 1778 "cplus.met"
    return _retValue ;
#line 1778 "cplus.met"
}
#line 1778 "cplus.met"

#line 1778 "cplus.met"
#line 1752 "cplus.met"
PPTREE cplus::type_specifier_without_param ( int error_free)
#line 1752 "cplus.met"
{
#line 1752 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 1752 "cplus.met"
    int _value,_nbPre = 0 ;
#line 1752 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 1752 "cplus.met"
    int _Debug = TRACE_RULE("type_specifier_without_param",TRACE_ENTER,(PPTREE)0);
#line 1752 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 1752 "cplus.met"
#line 1752 "cplus.met"
    PPTREE retTree = (PPTREE) 0,valTree = (PPTREE) 0,list = (PPTREE) 0,valTreeR = (PPTREE) 0;
#line 1752 "cplus.met"
#line 1754 "cplus.met"
    if (NPUSH_CALL_AFF_VERIF(valTreeR = ,_Tak(range_modifier), 117, cplus)){
#line 1754 "cplus.met"
#line 1755 "cplus.met"
        {
#line 1755 "cplus.met"
            PPTREE _ptTree0=0;
#line 1755 "cplus.met"
            {
#line 1755 "cplus.met"
                PPTREE _ptTree1=0;
#line 1755 "cplus.met"
                if ( (_ptTree1=NQUICK_CALL(_Tak(type_specifier)(error_free), 141, cplus))== (PPTREE) -1 ) {
#line 1755 "cplus.met"
                    MulFreeTree(6,_ptTree1,_ptTree0,list,retTree,valTree,valTreeR);
                    PROG_EXIT(type_specifier_without_param_exit,"type_specifier_without_param")
#line 1755 "cplus.met"
                }
#line 1755 "cplus.met"
                _ptTree0=ReplaceTree(valTreeR , 2 , _ptTree1);
#line 1755 "cplus.met"
            }
#line 1755 "cplus.met"
            _retValue =_ptTree0;
#line 1755 "cplus.met"
            goto type_specifier_without_param_ret;
#line 1755 "cplus.met"
        }
#line 1755 "cplus.met"
    }
#line 1755 "cplus.met"
#line 1756 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 1756 "cplus.met"
    switch( lexEl.Value) {
#line 1756 "cplus.met"
#line 1757 "cplus.met"
        case ENUM : 
#line 1757 "cplus.met"
#line 1757 "cplus.met"
            {
#line 1757 "cplus.met"
                PPTREE _ptTree0=0;
#line 1757 "cplus.met"
                if ( (_ptTree0=NQUICK_CALL(_Tak(enum_declarator)(error_free), 52, cplus))== (PPTREE) -1 ) {
#line 1757 "cplus.met"
                    MulFreeTree(5,_ptTree0,list,retTree,valTree,valTreeR);
                    PROG_EXIT(type_specifier_without_param_exit,"type_specifier_without_param")
#line 1757 "cplus.met"
                }
#line 1757 "cplus.met"
                _retValue =_ptTree0;
#line 1757 "cplus.met"
                goto type_specifier_without_param_ret;
#line 1757 "cplus.met"
            }
#line 1757 "cplus.met"
            break;
#line 1757 "cplus.met"
#line 1758 "cplus.met"
        case STRUCT : 
#line 1758 "cplus.met"
#line 1758 "cplus.met"
            {
#line 1758 "cplus.met"
                PPTREE _ptTree0=0;
#line 1758 "cplus.met"
                if ( (_ptTree0=NQUICK_CALL(_Tak(class_declaration)(error_free), 23, cplus))== (PPTREE) -1 ) {
#line 1758 "cplus.met"
                    MulFreeTree(5,_ptTree0,list,retTree,valTree,valTreeR);
                    PROG_EXIT(type_specifier_without_param_exit,"type_specifier_without_param")
#line 1758 "cplus.met"
                }
#line 1758 "cplus.met"
                _retValue =_ptTree0;
#line 1758 "cplus.met"
                goto type_specifier_without_param_ret;
#line 1758 "cplus.met"
            }
#line 1758 "cplus.met"
            break;
#line 1758 "cplus.met"
#line 1759 "cplus.met"
        case UNION : 
#line 1759 "cplus.met"
#line 1759 "cplus.met"
            {
#line 1759 "cplus.met"
                PPTREE _ptTree0=0;
#line 1759 "cplus.met"
                if ( (_ptTree0=NQUICK_CALL(_Tak(class_declaration)(error_free), 23, cplus))== (PPTREE) -1 ) {
#line 1759 "cplus.met"
                    MulFreeTree(5,_ptTree0,list,retTree,valTree,valTreeR);
                    PROG_EXIT(type_specifier_without_param_exit,"type_specifier_without_param")
#line 1759 "cplus.met"
                }
#line 1759 "cplus.met"
                _retValue =_ptTree0;
#line 1759 "cplus.met"
                goto type_specifier_without_param_ret;
#line 1759 "cplus.met"
            }
#line 1759 "cplus.met"
            break;
#line 1759 "cplus.met"
#line 1760 "cplus.met"
        case CLASS : 
#line 1760 "cplus.met"
#line 1760 "cplus.met"
            {
#line 1760 "cplus.met"
                PPTREE _ptTree0=0;
#line 1760 "cplus.met"
                if ( (_ptTree0=NQUICK_CALL(_Tak(class_declaration)(error_free), 23, cplus))== (PPTREE) -1 ) {
#line 1760 "cplus.met"
                    MulFreeTree(5,_ptTree0,list,retTree,valTree,valTreeR);
                    PROG_EXIT(type_specifier_without_param_exit,"type_specifier_without_param")
#line 1760 "cplus.met"
                }
#line 1760 "cplus.met"
                _retValue =_ptTree0;
#line 1760 "cplus.met"
                goto type_specifier_without_param_ret;
#line 1760 "cplus.met"
            }
#line 1760 "cplus.met"
            break;
#line 1760 "cplus.met"
#line 1761 "cplus.met"
        default : 
#line 1761 "cplus.met"
#line 1761 "cplus.met"
            {
#line 1761 "cplus.met"
                PPTREE _ptTree0=0;
#line 1761 "cplus.met"
                if ( (_ptTree0=NQUICK_CALL(_Tak(simple_type)(error_free), 124, cplus))== (PPTREE) -1 ) {
#line 1761 "cplus.met"
                    MulFreeTree(5,_ptTree0,list,retTree,valTree,valTreeR);
                    PROG_EXIT(type_specifier_without_param_exit,"type_specifier_without_param")
#line 1761 "cplus.met"
                }
#line 1761 "cplus.met"
                _retValue =_ptTree0;
#line 1761 "cplus.met"
                goto type_specifier_without_param_ret;
#line 1761 "cplus.met"
            }
#line 1761 "cplus.met"
            break;
#line 1761 "cplus.met"
    }
#line 1761 "cplus.met"
#line 1761 "cplus.met"
#line 1762 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1762 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 1762 "cplus.met"
return((PPTREE) 0);
#line 1762 "cplus.met"

#line 1762 "cplus.met"
type_specifier_without_param_exit :
#line 1762 "cplus.met"

#line 1762 "cplus.met"
    _Debug = TRACE_RULE("type_specifier_without_param",TRACE_EXIT,(PPTREE)0);
#line 1762 "cplus.met"
    _funcLevel--;
#line 1762 "cplus.met"
    return((PPTREE) -1) ;
#line 1762 "cplus.met"

#line 1762 "cplus.met"
type_specifier_without_param_ret :
#line 1762 "cplus.met"
    
#line 1762 "cplus.met"
    _Debug = TRACE_RULE("type_specifier_without_param",TRACE_RETURN,_retValue);
#line 1762 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1762 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 1762 "cplus.met"
    return _retValue ;
#line 1762 "cplus.met"
}
#line 1762 "cplus.met"

#line 1762 "cplus.met"
#line 1558 "cplus.met"
PPTREE cplus::typedef_and_declarator ( int error_free)
#line 1558 "cplus.met"
{
#line 1558 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 1558 "cplus.met"
    int _value,_nbPre = 0 ;
#line 1558 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 1558 "cplus.met"
    int _Debug = TRACE_RULE("typedef_and_declarator",TRACE_ENTER,(PPTREE)0);
#line 1558 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 1558 "cplus.met"
#line 1558 "cplus.met"
    PPTREE retTree = (PPTREE) 0;
#line 1558 "cplus.met"
#line 1560 "cplus.met"
    {
#line 1560 "cplus.met"
        PPTREE _ptTree0=0,_ptRes0=0;
#line 1560 "cplus.met"
        _ptRes0= MakeTree(TYPEDEF, 2);
#line 1560 "cplus.met"
        if ( (_ptTree0=NQUICK_CALL(_Tak(type_specifier)(error_free), 141, cplus))== (PPTREE) -1 ) {
#line 1560 "cplus.met"
            MulFreeTree(3,_ptRes0,_ptTree0,retTree);
            PROG_EXIT(typedef_and_declarator_exit,"typedef_and_declarator")
#line 1560 "cplus.met"
        }
#line 1560 "cplus.met"
        ReplaceTree(_ptRes0, 1, _ptTree0);
#line 1560 "cplus.met"
        retTree=_ptRes0;
#line 1560 "cplus.met"
    }
#line 1560 "cplus.met"
#line 1561 "cplus.met"
    {
#line 1561 "cplus.met"
        PPTREE _ptTree0=0;
#line 1561 "cplus.met"
        {
#line 1561 "cplus.met"
            PPTREE _ptTree1=0;
#line 1561 "cplus.met"
            if ( (_ptTree1=NQUICK_CALL(_Tak(declarator_list)(error_free), 46, cplus))== (PPTREE) -1 ) {
#line 1561 "cplus.met"
                MulFreeTree(3,_ptTree1,_ptTree0,retTree);
                PROG_EXIT(typedef_and_declarator_exit,"typedef_and_declarator")
#line 1561 "cplus.met"
            }
#line 1561 "cplus.met"
            _ptTree0=ReplaceTree(retTree , 2 , _ptTree1);
#line 1561 "cplus.met"
        }
#line 1561 "cplus.met"
        _retValue =_ptTree0;
#line 1561 "cplus.met"
        goto typedef_and_declarator_ret;
#line 1561 "cplus.met"
    }
#line 1561 "cplus.met"
#line 1561 "cplus.met"
#line 1561 "cplus.met"

#line 1562 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1562 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 1562 "cplus.met"
return((PPTREE) 0);
#line 1562 "cplus.met"

#line 1562 "cplus.met"
typedef_and_declarator_exit :
#line 1562 "cplus.met"

#line 1562 "cplus.met"
    _Debug = TRACE_RULE("typedef_and_declarator",TRACE_EXIT,(PPTREE)0);
#line 1562 "cplus.met"
    _funcLevel--;
#line 1562 "cplus.met"
    return((PPTREE) -1) ;
#line 1562 "cplus.met"

#line 1562 "cplus.met"
typedef_and_declarator_ret :
#line 1562 "cplus.met"
    
#line 1562 "cplus.met"
    _Debug = TRACE_RULE("typedef_and_declarator",TRACE_RETURN,_retValue);
#line 1562 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1562 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 1562 "cplus.met"
    return _retValue ;
#line 1562 "cplus.met"
}
#line 1562 "cplus.met"

#line 1562 "cplus.met"
#line 2731 "cplus.met"
PPTREE cplus::unary_expression ( int error_free)
#line 2731 "cplus.met"
{
#line 2731 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 2731 "cplus.met"
    int _value,_nbPre = 0 ;
#line 2731 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 2731 "cplus.met"
    int _Debug = TRACE_RULE("unary_expression",TRACE_ENTER,(PPTREE)0);
#line 2731 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 2731 "cplus.met"
#line 2731 "cplus.met"
    PPTREE expTree = (PPTREE) 0,inter = (PPTREE) 0;
#line 2731 "cplus.met"
#line 2733 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 2733 "cplus.met"
    switch( lexEl.Value) {
#line 2733 "cplus.met"
#line 2734 "cplus.met"
        case TIRE : 
#line 2734 "cplus.met"
            tokenAhead = 0 ;
#line 2734 "cplus.met"
            CommTerm();
#line 2734 "cplus.met"
#line 2734 "cplus.met"
            {
#line 2734 "cplus.met"
                PPTREE _ptTree0=0,_ptRes0=0;
#line 2734 "cplus.met"
                _ptRes0= MakeTree(NEG, 1);
#line 2734 "cplus.met"
                if ( (_ptTree0=NQUICK_CALL(_Tak(cast_expression)(error_free), 19, cplus))== (PPTREE) -1 ) {
#line 2734 "cplus.met"
                    MulFreeTree(4,_ptRes0,_ptTree0,expTree,inter);
                    PROG_EXIT(unary_expression_exit,"unary_expression")
#line 2734 "cplus.met"
                }
#line 2734 "cplus.met"
                ReplaceTree(_ptRes0, 1, _ptTree0);
#line 2734 "cplus.met"
                expTree=_ptRes0;
#line 2734 "cplus.met"
            }
#line 2734 "cplus.met"
            break;
#line 2734 "cplus.met"
#line 2735 "cplus.met"
        case PLUS : 
#line 2735 "cplus.met"
            tokenAhead = 0 ;
#line 2735 "cplus.met"
            CommTerm();
#line 2735 "cplus.met"
#line 2735 "cplus.met"
            {
#line 2735 "cplus.met"
                PPTREE _ptTree0=0,_ptRes0=0;
#line 2735 "cplus.met"
                _ptRes0= MakeTree(POS, 1);
#line 2735 "cplus.met"
                if ( (_ptTree0=NQUICK_CALL(_Tak(cast_expression)(error_free), 19, cplus))== (PPTREE) -1 ) {
#line 2735 "cplus.met"
                    MulFreeTree(4,_ptRes0,_ptTree0,expTree,inter);
                    PROG_EXIT(unary_expression_exit,"unary_expression")
#line 2735 "cplus.met"
                }
#line 2735 "cplus.met"
                ReplaceTree(_ptRes0, 1, _ptTree0);
#line 2735 "cplus.met"
                expTree=_ptRes0;
#line 2735 "cplus.met"
            }
#line 2735 "cplus.met"
            break;
#line 2735 "cplus.met"
#line 2736 "cplus.met"
        case TILD : 
#line 2736 "cplus.met"
            tokenAhead = 0 ;
#line 2736 "cplus.met"
            CommTerm();
#line 2736 "cplus.met"
#line 2736 "cplus.met"
            {
#line 2736 "cplus.met"
                PPTREE _ptTree0=0,_ptRes0=0;
#line 2736 "cplus.met"
                _ptRes0= MakeTree(LNEG, 1);
#line 2736 "cplus.met"
                if ( (_ptTree0=NQUICK_CALL(_Tak(cast_expression)(error_free), 19, cplus))== (PPTREE) -1 ) {
#line 2736 "cplus.met"
                    MulFreeTree(4,_ptRes0,_ptTree0,expTree,inter);
                    PROG_EXIT(unary_expression_exit,"unary_expression")
#line 2736 "cplus.met"
                }
#line 2736 "cplus.met"
                ReplaceTree(_ptRes0, 1, _ptTree0);
#line 2736 "cplus.met"
                expTree=_ptRes0;
#line 2736 "cplus.met"
            }
#line 2736 "cplus.met"
            break;
#line 2736 "cplus.met"
#line 2737 "cplus.met"
        case EXCL : 
#line 2737 "cplus.met"
            tokenAhead = 0 ;
#line 2737 "cplus.met"
            CommTerm();
#line 2737 "cplus.met"
#line 2737 "cplus.met"
            {
#line 2737 "cplus.met"
                PPTREE _ptTree0=0,_ptRes0=0;
#line 2737 "cplus.met"
                _ptRes0= MakeTree(NOT, 1);
#line 2737 "cplus.met"
                if ( (_ptTree0=NQUICK_CALL(_Tak(cast_expression)(error_free), 19, cplus))== (PPTREE) -1 ) {
#line 2737 "cplus.met"
                    MulFreeTree(4,_ptRes0,_ptTree0,expTree,inter);
                    PROG_EXIT(unary_expression_exit,"unary_expression")
#line 2737 "cplus.met"
                }
#line 2737 "cplus.met"
                ReplaceTree(_ptRes0, 1, _ptTree0);
#line 2737 "cplus.met"
                expTree=_ptRes0;
#line 2737 "cplus.met"
            }
#line 2737 "cplus.met"
            break;
#line 2737 "cplus.met"
#line 2738 "cplus.met"
        case ETOI : 
#line 2738 "cplus.met"
            tokenAhead = 0 ;
#line 2738 "cplus.met"
            CommTerm();
#line 2738 "cplus.met"
#line 2738 "cplus.met"
            {
#line 2738 "cplus.met"
                PPTREE _ptTree0=0,_ptRes0=0;
#line 2738 "cplus.met"
                _ptRes0= MakeTree(POINT, 1);
#line 2738 "cplus.met"
                if ( (_ptTree0=NQUICK_CALL(_Tak(cast_expression)(error_free), 19, cplus))== (PPTREE) -1 ) {
#line 2738 "cplus.met"
                    MulFreeTree(4,_ptRes0,_ptTree0,expTree,inter);
                    PROG_EXIT(unary_expression_exit,"unary_expression")
#line 2738 "cplus.met"
                }
#line 2738 "cplus.met"
                ReplaceTree(_ptRes0, 1, _ptTree0);
#line 2738 "cplus.met"
                expTree=_ptRes0;
#line 2738 "cplus.met"
            }
#line 2738 "cplus.met"
            break;
#line 2738 "cplus.met"
#line 2739 "cplus.met"
        case ETCO : 
#line 2739 "cplus.met"
            tokenAhead = 0 ;
#line 2739 "cplus.met"
            CommTerm();
#line 2739 "cplus.met"
#line 2739 "cplus.met"
            {
#line 2739 "cplus.met"
                PPTREE _ptTree0=0,_ptRes0=0;
#line 2739 "cplus.met"
                _ptRes0= MakeTree(ADDR, 1);
#line 2739 "cplus.met"
                if ( (_ptTree0=NQUICK_CALL(_Tak(cast_expression)(error_free), 19, cplus))== (PPTREE) -1 ) {
#line 2739 "cplus.met"
                    MulFreeTree(4,_ptRes0,_ptTree0,expTree,inter);
                    PROG_EXIT(unary_expression_exit,"unary_expression")
#line 2739 "cplus.met"
                }
#line 2739 "cplus.met"
                ReplaceTree(_ptRes0, 1, _ptTree0);
#line 2739 "cplus.met"
                expTree=_ptRes0;
#line 2739 "cplus.met"
            }
#line 2739 "cplus.met"
            break;
#line 2739 "cplus.met"
#line 2740 "cplus.met"
        case PLUSPLUS : 
#line 2740 "cplus.met"
            tokenAhead = 0 ;
#line 2740 "cplus.met"
            CommTerm();
#line 2740 "cplus.met"
#line 2740 "cplus.met"
            {
#line 2740 "cplus.met"
                PPTREE _ptTree0=0,_ptRes0=0;
#line 2740 "cplus.met"
                _ptRes0= MakeTree(BINCR, 1);
#line 2740 "cplus.met"
                if ( (_ptTree0=NQUICK_CALL(_Tak(cast_expression)(error_free), 19, cplus))== (PPTREE) -1 ) {
#line 2740 "cplus.met"
                    MulFreeTree(4,_ptRes0,_ptTree0,expTree,inter);
                    PROG_EXIT(unary_expression_exit,"unary_expression")
#line 2740 "cplus.met"
                }
#line 2740 "cplus.met"
                ReplaceTree(_ptRes0, 1, _ptTree0);
#line 2740 "cplus.met"
                expTree=_ptRes0;
#line 2740 "cplus.met"
            }
#line 2740 "cplus.met"
            break;
#line 2740 "cplus.met"
#line 2741 "cplus.met"
        case TIRETIRE : 
#line 2741 "cplus.met"
            tokenAhead = 0 ;
#line 2741 "cplus.met"
            CommTerm();
#line 2741 "cplus.met"
#line 2741 "cplus.met"
            {
#line 2741 "cplus.met"
                PPTREE _ptTree0=0,_ptRes0=0;
#line 2741 "cplus.met"
                _ptRes0= MakeTree(BDECR, 1);
#line 2741 "cplus.met"
                if ( (_ptTree0=NQUICK_CALL(_Tak(cast_expression)(error_free), 19, cplus))== (PPTREE) -1 ) {
#line 2741 "cplus.met"
                    MulFreeTree(4,_ptRes0,_ptTree0,expTree,inter);
                    PROG_EXIT(unary_expression_exit,"unary_expression")
#line 2741 "cplus.met"
                }
#line 2741 "cplus.met"
                ReplaceTree(_ptRes0, 1, _ptTree0);
#line 2741 "cplus.met"
                expTree=_ptRes0;
#line 2741 "cplus.met"
            }
#line 2741 "cplus.met"
            break;
#line 2741 "cplus.met"
#line 2742 "cplus.met"
        case SIZEOF : 
#line 2742 "cplus.met"
            tokenAhead = 0 ;
#line 2742 "cplus.met"
            CommTerm();
#line 2742 "cplus.met"
#line 2743 "cplus.met"
#line 2744 "cplus.met"
            if (! (NPUSH_CALL_AFF_VERIF(expTree = ,_Tak(sizeof_type), 126, cplus))){
#line 2744 "cplus.met"
#line 2745 "cplus.met"
#line 2746 "cplus.met"
                if ( (inter=NQUICK_CALL(_Tak(unary_expression)(error_free), 144, cplus))== (PPTREE) -1 ) {
#line 2746 "cplus.met"
                    MulFreeTree(2,expTree,inter);
                    PROG_EXIT(unary_expression_exit,"unary_expression")
#line 2746 "cplus.met"
                }
#line 2746 "cplus.met"
#line 2747 "cplus.met"
                                        /* on libere le chapeau : un EXP, sans liberer
#line 2747 "cplus.met"
                                     l'interieur */
#line 2747 "cplus.met"
                                       if (NumberTree(inter) == EXP) {
#line 2747 "cplus.met"
                                      expTree = SonTree(inter,1);
#line 2747 "cplus.met"
                                      AddRef(expTree);
#line 2747 "cplus.met"
                                      FreeTreeRec(inter);
#line 2747 "cplus.met"
                                      RemRef(expTree);
#line 2747 "cplus.met"
                                    } else
#line 2747 "cplus.met"
                                      expTree = inter;
#line 2747 "cplus.met"
                                
#line 2747 "cplus.met"
#line 2747 "cplus.met"
#line 2757 "cplus.met"
            }
#line 2757 "cplus.met"
#line 2759 "cplus.met"
            {
#line 2759 "cplus.met"
                PPTREE _ptTree0=0;
#line 2759 "cplus.met"
                {
#line 2759 "cplus.met"
                    PPTREE _ptTree1=0,_ptRes1=0;
#line 2759 "cplus.met"
                    _ptRes1= MakeTree(EXP_LIST, 2);
#line 2759 "cplus.met"
                    {
#line 2759 "cplus.met"
                        PPTREE _ptRes2=0;
#line 2759 "cplus.met"
                        _ptRes2= MakeTree(IDENT, 1);
#line 2759 "cplus.met"
                        ReplaceTree(_ptRes2, 1, MakeString ("sizeof"));
#line 2759 "cplus.met"
                        _ptTree1=_ptRes2;
#line 2759 "cplus.met"
                    }
#line 2759 "cplus.met"
                    ReplaceTree(_ptRes1, 1, _ptTree1);
#line 2759 "cplus.met"
                    ReplaceTree(_ptRes1, 2, expTree );
#line 2759 "cplus.met"
                    _ptTree0=_ptRes1;
#line 2759 "cplus.met"
                }
#line 2759 "cplus.met"
                _retValue =_ptTree0;
#line 2759 "cplus.met"
                goto unary_expression_ret;
#line 2759 "cplus.met"
            }
#line 2759 "cplus.met"
#line 2759 "cplus.met"
            break;
#line 2759 "cplus.met"
#line 2762 "cplus.met"
        default : 
#line 2762 "cplus.met"
#line 2762 "cplus.met"
            if ((((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN( DPOIDPOI,"::")) || 
#line 2762 "cplus.met"
                ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN( NEW,"new"))) || 
#line 2762 "cplus.met"
               ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN( DELETE,"delete"))){
#line 2762 "cplus.met"
#line 2763 "cplus.met"
#line 2764 "cplus.met"
                if (! (NPUSH_CALL_AFF_VERIF(expTree = ,_Tak(alloc_expression), 4, cplus))){
#line 2764 "cplus.met"
#line 2765 "cplus.met"
                    if ( (expTree=NQUICK_CALL(_Tak(postfix_expression)(error_free), 105, cplus))== (PPTREE) -1 ) {
#line 2765 "cplus.met"
                        MulFreeTree(2,expTree,inter);
                        PROG_EXIT(unary_expression_exit,"unary_expression")
#line 2765 "cplus.met"
                    }
#line 2765 "cplus.met"
                }
#line 2765 "cplus.met"
#line 2765 "cplus.met"
#line 2765 "cplus.met"
            } else {
#line 2765 "cplus.met"
#line 2768 "cplus.met"
                if ( (expTree=NQUICK_CALL(_Tak(postfix_expression)(error_free), 105, cplus))== (PPTREE) -1 ) {
#line 2768 "cplus.met"
                    MulFreeTree(2,expTree,inter);
                    PROG_EXIT(unary_expression_exit,"unary_expression")
#line 2768 "cplus.met"
                }
#line 2768 "cplus.met"
            }
#line 2768 "cplus.met"
            break;
#line 2768 "cplus.met"
    }
#line 2768 "cplus.met"
#line 2770 "cplus.met"
    {
#line 2770 "cplus.met"
        _retValue = expTree ;
#line 2770 "cplus.met"
        goto unary_expression_ret;
#line 2770 "cplus.met"
        
#line 2770 "cplus.met"
    }
#line 2770 "cplus.met"
#line 2770 "cplus.met"
#line 2770 "cplus.met"

#line 2771 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2771 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 2771 "cplus.met"
return((PPTREE) 0);
#line 2771 "cplus.met"

#line 2771 "cplus.met"
unary_expression_exit :
#line 2771 "cplus.met"

#line 2771 "cplus.met"
    _Debug = TRACE_RULE("unary_expression",TRACE_EXIT,(PPTREE)0);
#line 2771 "cplus.met"
    _funcLevel--;
#line 2771 "cplus.met"
    return((PPTREE) -1) ;
#line 2771 "cplus.met"

#line 2771 "cplus.met"
unary_expression_ret :
#line 2771 "cplus.met"
    
#line 2771 "cplus.met"
    _Debug = TRACE_RULE("unary_expression",TRACE_RETURN,_retValue);
#line 2771 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2771 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 2771 "cplus.met"
    return _retValue ;
#line 2771 "cplus.met"
}
#line 2771 "cplus.met"

#line 2771 "cplus.met"
