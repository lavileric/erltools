/*************************************************************************/
/*                                                                       */
/*        Produced by MetaGen version 2.0  -    1989-2006                 */
/*       Syntaxic Analyzer Meta Generator developped by                  */
/*                  Eric Lavillonniere                                   */
/*                                                                       */
/*************************************************************************/

#include "token.h"
#include "cplus.h"


#line 2559 "cplus.met"
PPTREE cplus::assignment_expression ( int error_free)
#line 2559 "cplus.met"
{
#line 2559 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 2559 "cplus.met"
    int _value,_nbPre = 0 ;
#line 2559 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 2559 "cplus.met"
    int _Debug = TRACE_RULE("assignment_expression",TRACE_ENTER,(PPTREE)0);
#line 2559 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 2559 "cplus.met"
#line 2559 "cplus.met"
    PPTREE expTree = (PPTREE) 0,expFollow = (PPTREE) 0;
#line 2559 "cplus.met"
#line 2561 "cplus.met"
    if ( (expTree=NQUICK_CALL(_Tak(conditional_expression)(error_free), 29, cplus))== (PPTREE) -1 ) {
#line 2561 "cplus.met"
        MulFreeTree(2,expFollow,expTree);
        PROG_EXIT(assignment_expression_exit,"assignment_expression")
#line 2561 "cplus.met"
    }
#line 2561 "cplus.met"
#line 2562 "cplus.met"
    if (NPUSH_CALL_AFF_VERIF(expFollow = ,_Tak(assignment_end), 15, cplus)){
#line 2562 "cplus.met"
#line 2563 "cplus.met"
#line 2564 "cplus.met"
        ReplaceTree(expFollow ,1 ,expTree );
#line 2564 "cplus.met"
#line 2565 "cplus.met"
        expTree = expFollow ;
#line 2565 "cplus.met"
#line 2565 "cplus.met"
#line 2565 "cplus.met"
    }
#line 2565 "cplus.met"
#line 2567 "cplus.met"
    {
#line 2567 "cplus.met"
        _retValue = expTree ;
#line 2567 "cplus.met"
        goto assignment_expression_ret;
#line 2567 "cplus.met"
        
#line 2567 "cplus.met"
    }
#line 2567 "cplus.met"
#line 2567 "cplus.met"
#line 2567 "cplus.met"

#line 2568 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2568 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 2568 "cplus.met"
return((PPTREE) 0);
#line 2568 "cplus.met"

#line 2568 "cplus.met"
assignment_expression_exit :
#line 2568 "cplus.met"

#line 2568 "cplus.met"
    _Debug = TRACE_RULE("assignment_expression",TRACE_EXIT,(PPTREE)0);
#line 2568 "cplus.met"
    _funcLevel--;
#line 2568 "cplus.met"
    return((PPTREE) -1) ;
#line 2568 "cplus.met"

#line 2568 "cplus.met"
assignment_expression_ret :
#line 2568 "cplus.met"
    
#line 2568 "cplus.met"
    _Debug = TRACE_RULE("assignment_expression",TRACE_RETURN,_retValue);
#line 2568 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2568 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 2568 "cplus.met"
    return _retValue ;
#line 2568 "cplus.met"
}
#line 2568 "cplus.met"

#line 2568 "cplus.met"
#line 2098 "cplus.met"
PPTREE cplus::attribute_call ( int error_free)
#line 2098 "cplus.met"
{
#line 2098 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 2098 "cplus.met"
    int _value,_nbPre = 0 ;
#line 2098 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 2098 "cplus.met"
    int _Debug = TRACE_RULE("attribute_call",TRACE_ENTER,(PPTREE)0);
#line 2098 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 2098 "cplus.met"
#line 2098 "cplus.met"
    PPTREE retTree = (PPTREE) 0;
#line 2098 "cplus.met"
#line 2100 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 2100 "cplus.met"
    if (  !SEE_TOKEN( __ATTRIBUTE__,"__attribute__") || !(CommTerm(),1)) {
#line 2100 "cplus.met"
        MulFreeTree(1,retTree);
        TOKEN_EXIT(attribute_call_exit,"__attribute__")
#line 2100 "cplus.met"
    } else {
#line 2100 "cplus.met"
        tokenAhead = 0 ;
#line 2100 "cplus.met"
    }
#line 2100 "cplus.met"
#line 2101 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 2101 "cplus.met"
    if (  !SEE_TOKEN( POUV,"(") || !(CommTerm(),1)) {
#line 2101 "cplus.met"
        MulFreeTree(1,retTree);
        TOKEN_EXIT(attribute_call_exit,"(")
#line 2101 "cplus.met"
    } else {
#line 2101 "cplus.met"
        tokenAhead = 0 ;
#line 2101 "cplus.met"
    }
#line 2101 "cplus.met"
#line 2102 "cplus.met"
    {
#line 2102 "cplus.met"
        PPTREE _ptTree0=0,_ptRes0=0;
#line 2102 "cplus.met"
        _ptRes0= MakeTree(ATTRIBUTE_CALL, 1);
#line 2102 "cplus.met"
        if ( (_ptTree0=NQUICK_CALL(_Tak(expression)(error_free), 62, cplus))== (PPTREE) -1 ) {
#line 2102 "cplus.met"
            MulFreeTree(3,_ptRes0,_ptTree0,retTree);
            PROG_EXIT(attribute_call_exit,"attribute_call")
#line 2102 "cplus.met"
        }
#line 2102 "cplus.met"
        ReplaceTree(_ptRes0, 1, _ptTree0);
#line 2102 "cplus.met"
        retTree=_ptRes0;
#line 2102 "cplus.met"
    }
#line 2102 "cplus.met"
#line 2103 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 2103 "cplus.met"
    if (  !SEE_TOKEN( PFER,")") || !(CommTerm(),1)) {
#line 2103 "cplus.met"
        MulFreeTree(1,retTree);
        TOKEN_EXIT(attribute_call_exit,")")
#line 2103 "cplus.met"
    } else {
#line 2103 "cplus.met"
        tokenAhead = 0 ;
#line 2103 "cplus.met"
    }
#line 2103 "cplus.met"
#line 2104 "cplus.met"
    {
#line 2104 "cplus.met"
        _retValue = retTree ;
#line 2104 "cplus.met"
        goto attribute_call_ret;
#line 2104 "cplus.met"
        
#line 2104 "cplus.met"
    }
#line 2104 "cplus.met"
#line 2104 "cplus.met"
#line 2104 "cplus.met"

#line 2105 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2105 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 2105 "cplus.met"
return((PPTREE) 0);
#line 2105 "cplus.met"

#line 2105 "cplus.met"
attribute_call_exit :
#line 2105 "cplus.met"

#line 2105 "cplus.met"
    _Debug = TRACE_RULE("attribute_call",TRACE_EXIT,(PPTREE)0);
#line 2105 "cplus.met"
    _funcLevel--;
#line 2105 "cplus.met"
    return((PPTREE) -1) ;
#line 2105 "cplus.met"

#line 2105 "cplus.met"
attribute_call_ret :
#line 2105 "cplus.met"
    
#line 2105 "cplus.met"
    _Debug = TRACE_RULE("attribute_call",TRACE_RETURN,_retValue);
#line 2105 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2105 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 2105 "cplus.met"
    return _retValue ;
#line 2105 "cplus.met"
}
#line 2105 "cplus.met"

#line 2105 "cplus.met"
#line 1825 "cplus.met"
PPTREE cplus::base_specifier ( int error_free)
#line 1825 "cplus.met"
{
#line 1825 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 1825 "cplus.met"
    int _value,_nbPre = 0 ;
#line 1825 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 1825 "cplus.met"
    int _Debug = TRACE_RULE("base_specifier",TRACE_ENTER,(PPTREE)0);
#line 1825 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 1825 "cplus.met"
#line 1825 "cplus.met"
    PPTREE _addlist1 = (PPTREE) 0;
#line 1825 "cplus.met"
#line 1825 "cplus.met"
    PPTREE list = (PPTREE) 0;
#line 1825 "cplus.met"
#line 1825 "cplus.met"
    _addlist1 = list ;
#line 1825 "cplus.met"
#line 1827 "cplus.met"
    do {
#line 1827 "cplus.met"
#line 1828 "cplus.met"
        {
#line 1828 "cplus.met"
            PPTREE _ptTree0=0;
#line 1828 "cplus.met"
            if ( (_ptTree0=NQUICK_CALL(_Tak(base_specifier_elem)(error_free), 19, cplus))== (PPTREE) -1 ) {
#line 1828 "cplus.met"
                MulFreeTree(3,_ptTree0,_addlist1,list);
                PROG_EXIT(base_specifier_exit,"base_specifier")
#line 1828 "cplus.met"
            }
#line 1828 "cplus.met"
            _addlist1 =AddList(_addlist1 , _ptTree0);
#line 1828 "cplus.met"
        }
#line 1828 "cplus.met"
#line 1828 "cplus.met"
        if (list){
#line 1828 "cplus.met"
#line 1828 "cplus.met"
            _addlist1 = SonTree (_addlist1 ,2 );
#line 1828 "cplus.met"
        } else {
#line 1828 "cplus.met"
#line 1828 "cplus.met"
            list = _addlist1 ;
#line 1828 "cplus.met"
        }
#line 1828 "cplus.met"
#line 1828 "cplus.met"
#line 1829 "cplus.met"
    } while ( !(! ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN(VIRG,",") && (tokenAhead = 0,CommTerm(),1)))) ;
#line 1829 "cplus.met"
#line 1830 "cplus.met"
    {
#line 1830 "cplus.met"
        PPTREE _ptTree0=0;
#line 1830 "cplus.met"
        {
#line 1830 "cplus.met"
            PPTREE _ptRes1=0;
#line 1830 "cplus.met"
            _ptRes1= MakeTree(BASE_LIST, 1);
#line 1830 "cplus.met"
            ReplaceTree(_ptRes1, 1, list );
#line 1830 "cplus.met"
            _ptTree0=_ptRes1;
#line 1830 "cplus.met"
        }
#line 1830 "cplus.met"
        _retValue =_ptTree0;
#line 1830 "cplus.met"
        goto base_specifier_ret;
#line 1830 "cplus.met"
    }
#line 1830 "cplus.met"
#line 1830 "cplus.met"
#line 1830 "cplus.met"

#line 1831 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1831 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 1831 "cplus.met"
return((PPTREE) 0);
#line 1831 "cplus.met"

#line 1831 "cplus.met"
base_specifier_exit :
#line 1831 "cplus.met"

#line 1831 "cplus.met"
    _Debug = TRACE_RULE("base_specifier",TRACE_EXIT,(PPTREE)0);
#line 1831 "cplus.met"
    _funcLevel--;
#line 1831 "cplus.met"
    return((PPTREE) -1) ;
#line 1831 "cplus.met"

#line 1831 "cplus.met"
base_specifier_ret :
#line 1831 "cplus.met"
    
#line 1831 "cplus.met"
    _Debug = TRACE_RULE("base_specifier",TRACE_RETURN,_retValue);
#line 1831 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1831 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 1831 "cplus.met"
    return _retValue ;
#line 1831 "cplus.met"
}
#line 1831 "cplus.met"

#line 1831 "cplus.met"
#line 1812 "cplus.met"
PPTREE cplus::base_specifier_elem ( int error_free)
#line 1812 "cplus.met"
{
#line 1812 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 1812 "cplus.met"
    int _value,_nbPre = 0 ;
#line 1812 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 1812 "cplus.met"
    int _Debug = TRACE_RULE("base_specifier_elem",TRACE_ENTER,(PPTREE)0);
#line 1812 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 1812 "cplus.met"
#line 1812 "cplus.met"
    PPTREE ret = (PPTREE) 0;
#line 1812 "cplus.met"
#line 1814 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 1814 "cplus.met"
    switch( lexEl.Value) {
#line 1814 "cplus.met"
#line 1815 "cplus.met"
        case PRIVATE : 
#line 1815 "cplus.met"
            tokenAhead = 0 ;
#line 1815 "cplus.met"
            CommTerm();
#line 1815 "cplus.met"
#line 1815 "cplus.met"
            {
#line 1815 "cplus.met"
                PPTREE _ptTree0=0;
#line 1815 "cplus.met"
                {
#line 1815 "cplus.met"
                    PPTREE _ptTree1=0,_ptRes1=0;
#line 1815 "cplus.met"
                    _ptRes1= MakeTree(PROTECT, 2);
#line 1815 "cplus.met"
                    ReplaceTree(_ptRes1, 1, MakeString ("private"));
#line 1815 "cplus.met"
                    if ( (_ptTree1=NQUICK_CALL(_Tak(base_specifier_elem)(error_free), 19, cplus))== (PPTREE) -1 ) {
#line 1815 "cplus.met"
                        MulFreeTree(4,_ptRes1,_ptTree1,_ptTree0,ret);
                        PROG_EXIT(base_specifier_elem_exit,"base_specifier_elem")
#line 1815 "cplus.met"
                    }
#line 1815 "cplus.met"
                    ReplaceTree(_ptRes1, 2, _ptTree1);
#line 1815 "cplus.met"
                    _ptTree0=_ptRes1;
#line 1815 "cplus.met"
                }
#line 1815 "cplus.met"
                _retValue =_ptTree0;
#line 1815 "cplus.met"
                goto base_specifier_elem_ret;
#line 1815 "cplus.met"
            }
#line 1815 "cplus.met"
            break;
#line 1815 "cplus.met"
#line 1816 "cplus.met"
        case PROTECTED : 
#line 1816 "cplus.met"
            tokenAhead = 0 ;
#line 1816 "cplus.met"
            CommTerm();
#line 1816 "cplus.met"
#line 1816 "cplus.met"
            {
#line 1816 "cplus.met"
                PPTREE _ptTree0=0;
#line 1816 "cplus.met"
                {
#line 1816 "cplus.met"
                    PPTREE _ptTree1=0,_ptRes1=0;
#line 1816 "cplus.met"
                    _ptRes1= MakeTree(PROTECT, 2);
#line 1816 "cplus.met"
                    ReplaceTree(_ptRes1, 1, MakeString ("protected"));
#line 1816 "cplus.met"
                    if ( (_ptTree1=NQUICK_CALL(_Tak(base_specifier_elem)(error_free), 19, cplus))== (PPTREE) -1 ) {
#line 1816 "cplus.met"
                        MulFreeTree(4,_ptRes1,_ptTree1,_ptTree0,ret);
                        PROG_EXIT(base_specifier_elem_exit,"base_specifier_elem")
#line 1816 "cplus.met"
                    }
#line 1816 "cplus.met"
                    ReplaceTree(_ptRes1, 2, _ptTree1);
#line 1816 "cplus.met"
                    _ptTree0=_ptRes1;
#line 1816 "cplus.met"
                }
#line 1816 "cplus.met"
                _retValue =_ptTree0;
#line 1816 "cplus.met"
                goto base_specifier_elem_ret;
#line 1816 "cplus.met"
            }
#line 1816 "cplus.met"
            break;
#line 1816 "cplus.met"
#line 1817 "cplus.met"
        case PUBLIC : 
#line 1817 "cplus.met"
            tokenAhead = 0 ;
#line 1817 "cplus.met"
            CommTerm();
#line 1817 "cplus.met"
#line 1817 "cplus.met"
            {
#line 1817 "cplus.met"
                PPTREE _ptTree0=0;
#line 1817 "cplus.met"
                {
#line 1817 "cplus.met"
                    PPTREE _ptTree1=0,_ptRes1=0;
#line 1817 "cplus.met"
                    _ptRes1= MakeTree(PROTECT, 2);
#line 1817 "cplus.met"
                    ReplaceTree(_ptRes1, 1, MakeString ("public"));
#line 1817 "cplus.met"
                    if ( (_ptTree1=NQUICK_CALL(_Tak(base_specifier_elem)(error_free), 19, cplus))== (PPTREE) -1 ) {
#line 1817 "cplus.met"
                        MulFreeTree(4,_ptRes1,_ptTree1,_ptTree0,ret);
                        PROG_EXIT(base_specifier_elem_exit,"base_specifier_elem")
#line 1817 "cplus.met"
                    }
#line 1817 "cplus.met"
                    ReplaceTree(_ptRes1, 2, _ptTree1);
#line 1817 "cplus.met"
                    _ptTree0=_ptRes1;
#line 1817 "cplus.met"
                }
#line 1817 "cplus.met"
                _retValue =_ptTree0;
#line 1817 "cplus.met"
                goto base_specifier_elem_ret;
#line 1817 "cplus.met"
            }
#line 1817 "cplus.met"
            break;
#line 1817 "cplus.met"
#line 1818 "cplus.met"
        case VIRTUAL : 
#line 1818 "cplus.met"
            tokenAhead = 0 ;
#line 1818 "cplus.met"
            CommTerm();
#line 1818 "cplus.met"
#line 1818 "cplus.met"
            {
#line 1818 "cplus.met"
                PPTREE _ptTree0=0;
#line 1818 "cplus.met"
                {
#line 1818 "cplus.met"
                    PPTREE _ptTree1=0,_ptRes1=0;
#line 1818 "cplus.met"
                    _ptRes1= MakeTree(PROTECT, 2);
#line 1818 "cplus.met"
                    ReplaceTree(_ptRes1, 1, MakeString ("virtual"));
#line 1818 "cplus.met"
                    if ( (_ptTree1=NQUICK_CALL(_Tak(base_specifier_elem)(error_free), 19, cplus))== (PPTREE) -1 ) {
#line 1818 "cplus.met"
                        MulFreeTree(4,_ptRes1,_ptTree1,_ptTree0,ret);
                        PROG_EXIT(base_specifier_elem_exit,"base_specifier_elem")
#line 1818 "cplus.met"
                    }
#line 1818 "cplus.met"
                    ReplaceTree(_ptRes1, 2, _ptTree1);
#line 1818 "cplus.met"
                    _ptTree0=_ptRes1;
#line 1818 "cplus.met"
                }
#line 1818 "cplus.met"
                _retValue =_ptTree0;
#line 1818 "cplus.met"
                goto base_specifier_elem_ret;
#line 1818 "cplus.met"
            }
#line 1818 "cplus.met"
            break;
#line 1818 "cplus.met"
#line 1818 "cplus.met"
        default : 
#line 1818 "cplus.met"
#line 1818 "cplus.met"
            break;
#line 1818 "cplus.met"
    }
#line 1818 "cplus.met"
#line 1821 "cplus.met"
    if ( (ret=NQUICK_CALL(_Tak(complete_class_name)(error_free), 27, cplus))== (PPTREE) -1 ) {
#line 1821 "cplus.met"
        MulFreeTree(1,ret);
        PROG_EXIT(base_specifier_elem_exit,"base_specifier_elem")
#line 1821 "cplus.met"
    }
#line 1821 "cplus.met"
#line 1822 "cplus.met"
    {
#line 1822 "cplus.met"
        _retValue = ret ;
#line 1822 "cplus.met"
        goto base_specifier_elem_ret;
#line 1822 "cplus.met"
        
#line 1822 "cplus.met"
    }
#line 1822 "cplus.met"
#line 1822 "cplus.met"
#line 1822 "cplus.met"

#line 1823 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1823 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 1823 "cplus.met"
return((PPTREE) 0);
#line 1823 "cplus.met"

#line 1823 "cplus.met"
base_specifier_elem_exit :
#line 1823 "cplus.met"

#line 1823 "cplus.met"
    _Debug = TRACE_RULE("base_specifier_elem",TRACE_EXIT,(PPTREE)0);
#line 1823 "cplus.met"
    _funcLevel--;
#line 1823 "cplus.met"
    return((PPTREE) -1) ;
#line 1823 "cplus.met"

#line 1823 "cplus.met"
base_specifier_elem_ret :
#line 1823 "cplus.met"
    
#line 1823 "cplus.met"
    _Debug = TRACE_RULE("base_specifier_elem",TRACE_RETURN,_retValue);
#line 1823 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1823 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 1823 "cplus.met"
    return _retValue ;
#line 1823 "cplus.met"
}
#line 1823 "cplus.met"

#line 1823 "cplus.met"
#line 3560 "cplus.met"
PPTREE cplus::bidon ( int error_free)
#line 3560 "cplus.met"
{
#line 3560 "cplus.met"
    int  _oldnoString = noString;
#line 3560 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 3560 "cplus.met"
    int _value,_nbPre = 0 ;
#line 3560 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 3560 "cplus.met"
    int _Debug = TRACE_RULE("bidon",TRACE_ENTER,(PPTREE)0);
#line 3560 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 3560 "cplus.met"
#line 3561 "cplus.met"
    {
#line 3561 "cplus.met"
        noString = 1 ;
#line 3561 "cplus.met"
#line 3562 "cplus.met"
#line 3562 "cplus.met"
        noString =  _oldnoString;
#line 3562 "cplus.met"
    }
#line 3562 "cplus.met"
#line 3562 "cplus.met"
#line 3563 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 3563 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 3563 "cplus.met"
noString =  _oldnoString;
#line 3563 "cplus.met"
return((PPTREE) 0);
#line 3563 "cplus.met"

#line 3563 "cplus.met"
bidon_exit :
#line 3563 "cplus.met"

#line 3563 "cplus.met"
    _Debug = TRACE_RULE("bidon",TRACE_EXIT,(PPTREE)0);
#line 3563 "cplus.met"
    _funcLevel--;
#line 3563 "cplus.met"
    noString =  _oldnoString;
#line 3563 "cplus.met"
    return((PPTREE) -1) ;
#line 3563 "cplus.met"

#line 3563 "cplus.met"
bidon_ret :
#line 3563 "cplus.met"
    
#line 3563 "cplus.met"
    _Debug = TRACE_RULE("bidon",TRACE_RETURN,_retValue);
#line 3563 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 3563 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 3563 "cplus.met"
    noString =  _oldnoString;
#line 3563 "cplus.met"
    return _retValue ;
#line 3563 "cplus.met"
}
#line 3563 "cplus.met"

#line 3563 "cplus.met"
#line 2518 "cplus.met"
PPTREE cplus::bit_field_decl ( int error_free)
#line 2518 "cplus.met"
{
#line 2518 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 2518 "cplus.met"
    int _value,_nbPre = 0 ;
#line 2518 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 2518 "cplus.met"
    int _Debug = TRACE_RULE("bit_field_decl",TRACE_ENTER,(PPTREE)0);
#line 2518 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 2518 "cplus.met"
#line 2518 "cplus.met"
    PPTREE retTree = (PPTREE) 0,ident = (PPTREE) 0;
#line 2518 "cplus.met"
#line 2521 "cplus.met"
    {
#line 2521 "cplus.met"
        PPTREE _ptRes0=0;
#line 2521 "cplus.met"
        _ptRes0= MakeTree(TYP_BIT, 2);
#line 2521 "cplus.met"
        retTree=_ptRes0;
#line 2521 "cplus.met"
    }
#line 2521 "cplus.met"
#line 2523 "cplus.met"
    if ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN( IDENT,"IDENT")){
#line 2523 "cplus.met"
#line 2524 "cplus.met"
        {
#line 2524 "cplus.met"
            PPTREE _ptTree0=0;
#line 2524 "cplus.met"
            {
#line 2524 "cplus.met"
                PPTREE _ptTree1=0,_ptRes1=0;
#line 2524 "cplus.met"
                _ptRes1= MakeTree(IDENT, 1);
#line 2524 "cplus.met"
                (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 2524 "cplus.met"
                if ( ! TERM_OR_META(IDENT,"IDENT") || !(BUILD_TERM_META(_ptTree1))) {
#line 2524 "cplus.met"
                    MulFreeTree(5,_ptRes1,_ptTree1,_ptTree0,ident,retTree);
                    TOKEN_EXIT(bit_field_decl_exit,"IDENT")
#line 2524 "cplus.met"
                } else {
#line 2524 "cplus.met"
                    tokenAhead = 0 ;
#line 2524 "cplus.met"
                }
#line 2524 "cplus.met"
                ReplaceTree(_ptRes1, 1, _ptTree1);
#line 2524 "cplus.met"
                _ptTree0=_ptRes1;
#line 2524 "cplus.met"
            }
#line 2524 "cplus.met"
            ReplaceTree(retTree , 1 , _ptTree0);
#line 2524 "cplus.met"
        }
#line 2524 "cplus.met"
#line 2524 "cplus.met"
    }
#line 2524 "cplus.met"
#line 2525 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 2525 "cplus.met"
    if (  !SEE_TOKEN( DPOI,":") || !(CommTerm(),1)) {
#line 2525 "cplus.met"
        MulFreeTree(2,ident,retTree);
        TOKEN_EXIT(bit_field_decl_exit,":")
#line 2525 "cplus.met"
    } else {
#line 2525 "cplus.met"
        tokenAhead = 0 ;
#line 2525 "cplus.met"
    }
#line 2525 "cplus.met"
#line 2526 "cplus.met"
    {
#line 2526 "cplus.met"
        PPTREE _ptTree0=0;
#line 2526 "cplus.met"
        {
#line 2526 "cplus.met"
            PPTREE _ptTree1=0;
#line 2526 "cplus.met"
            if ( (_ptTree1=NQUICK_CALL(_Tak(assignment_expression)(error_free), 16, cplus))== (PPTREE) -1 ) {
#line 2526 "cplus.met"
                MulFreeTree(4,_ptTree1,_ptTree0,ident,retTree);
                PROG_EXIT(bit_field_decl_exit,"bit_field_decl")
#line 2526 "cplus.met"
            }
#line 2526 "cplus.met"
            _ptTree0=ReplaceTree(retTree , 2 , _ptTree1);
#line 2526 "cplus.met"
        }
#line 2526 "cplus.met"
        _retValue =_ptTree0;
#line 2526 "cplus.met"
        goto bit_field_decl_ret;
#line 2526 "cplus.met"
    }
#line 2526 "cplus.met"
#line 2526 "cplus.met"
#line 2526 "cplus.met"

#line 2527 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2527 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 2527 "cplus.met"
return((PPTREE) 0);
#line 2527 "cplus.met"

#line 2527 "cplus.met"
bit_field_decl_exit :
#line 2527 "cplus.met"

#line 2527 "cplus.met"
    _Debug = TRACE_RULE("bit_field_decl",TRACE_EXIT,(PPTREE)0);
#line 2527 "cplus.met"
    _funcLevel--;
#line 2527 "cplus.met"
    return((PPTREE) -1) ;
#line 2527 "cplus.met"

#line 2527 "cplus.met"
bit_field_decl_ret :
#line 2527 "cplus.met"
    
#line 2527 "cplus.met"
    _Debug = TRACE_RULE("bit_field_decl",TRACE_RETURN,_retValue);
#line 2527 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2527 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 2527 "cplus.met"
    return _retValue ;
#line 2527 "cplus.met"
}
#line 2527 "cplus.met"

#line 2527 "cplus.met"
#line 2704 "cplus.met"
PPTREE cplus::cast_expression ( int error_free)
#line 2704 "cplus.met"
{
#line 2704 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 2704 "cplus.met"
    int _value,_nbPre = 0 ;
#line 2704 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 2704 "cplus.met"
    int _Debug = TRACE_RULE("cast_expression",TRACE_ENTER,(PPTREE)0);
#line 2704 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 2704 "cplus.met"
#line 2704 "cplus.met"
    PPTREE retTree = (PPTREE) 0;
#line 2704 "cplus.met"
#line 2706 "cplus.met"
    if (NPUSH_CALL_AFF_VERIF(retTree = ,_Tak(cast_expression_value), 22, cplus)){
#line 2706 "cplus.met"
#line 2707 "cplus.met"
        {
#line 2707 "cplus.met"
            _retValue = retTree ;
#line 2707 "cplus.met"
            goto cast_expression_ret;
#line 2707 "cplus.met"
            
#line 2707 "cplus.met"
        }
#line 2707 "cplus.met"
    } else {
#line 2707 "cplus.met"
#line 2709 "cplus.met"
        {
#line 2709 "cplus.met"
            PPTREE _ptTree0=0;
#line 2709 "cplus.met"
            if ( (_ptTree0=NQUICK_CALL(_Tak(unary_expression)(error_free), 148, cplus))== (PPTREE) -1 ) {
#line 2709 "cplus.met"
                MulFreeTree(2,_ptTree0,retTree);
                PROG_EXIT(cast_expression_exit,"cast_expression")
#line 2709 "cplus.met"
            }
#line 2709 "cplus.met"
            _retValue =_ptTree0;
#line 2709 "cplus.met"
            goto cast_expression_ret;
#line 2709 "cplus.met"
        }
#line 2709 "cplus.met"
    }
#line 2709 "cplus.met"
#line 2709 "cplus.met"
#line 2709 "cplus.met"

#line 2710 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2710 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 2710 "cplus.met"
return((PPTREE) 0);
#line 2710 "cplus.met"

#line 2710 "cplus.met"
cast_expression_exit :
#line 2710 "cplus.met"

#line 2710 "cplus.met"
    _Debug = TRACE_RULE("cast_expression",TRACE_EXIT,(PPTREE)0);
#line 2710 "cplus.met"
    _funcLevel--;
#line 2710 "cplus.met"
    return((PPTREE) -1) ;
#line 2710 "cplus.met"

#line 2710 "cplus.met"
cast_expression_ret :
#line 2710 "cplus.met"
    
#line 2710 "cplus.met"
    _Debug = TRACE_RULE("cast_expression",TRACE_RETURN,_retValue);
#line 2710 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2710 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 2710 "cplus.met"
    return _retValue ;
#line 2710 "cplus.met"
}
#line 2710 "cplus.met"

#line 2710 "cplus.met"
#line 2696 "cplus.met"
PPTREE cplus::cast_expression_value ( int error_free)
#line 2696 "cplus.met"
{
#line 2696 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 2696 "cplus.met"
    int _value,_nbPre = 0 ;
#line 2696 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 2696 "cplus.met"
    int _Debug = TRACE_RULE("cast_expression_value",TRACE_ENTER,(PPTREE)0);
#line 2696 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 2696 "cplus.met"
#line 2696 "cplus.met"
    PPTREE ret = (PPTREE) 0;
#line 2696 "cplus.met"
#line 2698 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 2698 "cplus.met"
    if (  !SEE_TOKEN( POUV,"(") || !(CommTerm(),1)) {
#line 2698 "cplus.met"
        MulFreeTree(1,ret);
        TOKEN_EXIT(cast_expression_value_exit,"(")
#line 2698 "cplus.met"
    } else {
#line 2698 "cplus.met"
        tokenAhead = 0 ;
#line 2698 "cplus.met"
    }
#line 2698 "cplus.met"
#line 2699 "cplus.met"
    if ( (ret=NQUICK_CALL(_Tak(type_name)(error_free), 144, cplus))== (PPTREE) -1 ) {
#line 2699 "cplus.met"
        MulFreeTree(1,ret);
        PROG_EXIT(cast_expression_value_exit,"cast_expression_value")
#line 2699 "cplus.met"
    }
#line 2699 "cplus.met"
#line 2700 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 2700 "cplus.met"
    if (  !SEE_TOKEN( PFER,")") || !(CommTerm(),1)) {
#line 2700 "cplus.met"
        MulFreeTree(1,ret);
        TOKEN_EXIT(cast_expression_value_exit,")")
#line 2700 "cplus.met"
    } else {
#line 2700 "cplus.met"
        tokenAhead = 0 ;
#line 2700 "cplus.met"
    }
#line 2700 "cplus.met"
#line 2701 "cplus.met"
    {
#line 2701 "cplus.met"
        PPTREE _ptTree0=0;
#line 2701 "cplus.met"
        {
#line 2701 "cplus.met"
            PPTREE _ptTree1=0,_ptRes1=0;
#line 2701 "cplus.met"
            _ptRes1= MakeTree(CAST, 2);
#line 2701 "cplus.met"
            ReplaceTree(_ptRes1, 1, ret );
#line 2701 "cplus.met"
            if ( (_ptTree1=NQUICK_CALL(_Tak(cast_expression)(error_free), 21, cplus))== (PPTREE) -1 ) {
#line 2701 "cplus.met"
                MulFreeTree(4,_ptRes1,_ptTree1,_ptTree0,ret);
                PROG_EXIT(cast_expression_value_exit,"cast_expression_value")
#line 2701 "cplus.met"
            }
#line 2701 "cplus.met"
            ReplaceTree(_ptRes1, 2, _ptTree1);
#line 2701 "cplus.met"
            _ptTree0=_ptRes1;
#line 2701 "cplus.met"
        }
#line 2701 "cplus.met"
        _retValue =_ptTree0;
#line 2701 "cplus.met"
        goto cast_expression_value_ret;
#line 2701 "cplus.met"
    }
#line 2701 "cplus.met"
#line 2701 "cplus.met"
#line 2701 "cplus.met"

#line 2702 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2702 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 2702 "cplus.met"
return((PPTREE) 0);
#line 2702 "cplus.met"

#line 2702 "cplus.met"
cast_expression_value_exit :
#line 2702 "cplus.met"

#line 2702 "cplus.met"
    _Debug = TRACE_RULE("cast_expression_value",TRACE_EXIT,(PPTREE)0);
#line 2702 "cplus.met"
    _funcLevel--;
#line 2702 "cplus.met"
    return((PPTREE) -1) ;
#line 2702 "cplus.met"

#line 2702 "cplus.met"
cast_expression_value_ret :
#line 2702 "cplus.met"
    
#line 2702 "cplus.met"
    _Debug = TRACE_RULE("cast_expression_value",TRACE_RETURN,_retValue);
#line 2702 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2702 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 2702 "cplus.met"
    return _retValue ;
#line 2702 "cplus.met"
}
#line 2702 "cplus.met"

#line 2702 "cplus.met"
#line 1909 "cplus.met"
PPTREE cplus::catch_unit ( int error_free)
#line 1909 "cplus.met"
{
#line 1909 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 1909 "cplus.met"
    int _value,_nbPre = 0 ;
#line 1909 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 1909 "cplus.met"
    int _Debug = TRACE_RULE("catch_unit",TRACE_ENTER,(PPTREE)0);
#line 1909 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 1909 "cplus.met"
#line 1910 "cplus.met"
    (tokenAhead == 13|| (specific(),TRACE_LEX(1)));
#line 1910 "cplus.met"
    switch( lexEl.Value) {
#line 1910 "cplus.met"
#line 1911 "cplus.met"
        case META : 
#line 1911 "cplus.met"
        case CATCH_UPPER : 
#line 1911 "cplus.met"
#line 1911 "cplus.met"
            {
#line 1911 "cplus.met"
                PPTREE _ptTree0=0;
#line 1911 "cplus.met"
                {
#line 1911 "cplus.met"
                    PPTREE _ptTree1=0,_ptRes1=0;
#line 1911 "cplus.met"
                    _ptRes1= MakeTree(CATCH, 2);
#line 1911 "cplus.met"
                    if ( (_ptTree1=NQUICK_CALL(_Tak(macro)(error_free), 92, cplus))== (PPTREE) -1 ) {
#line 1911 "cplus.met"
                        MulFreeTree(3,_ptRes1,_ptTree1,_ptTree0);
                        PROG_EXIT(catch_unit_exit,"catch_unit")
#line 1911 "cplus.met"
                    }
#line 1911 "cplus.met"
                    ReplaceTree(_ptRes1, 1, _ptTree1);
#line 1911 "cplus.met"
                    if ( (_ptTree1=NQUICK_CALL(_Tak(compound_statement)(error_free), 28, cplus))== (PPTREE) -1 ) {
#line 1911 "cplus.met"
                        MulFreeTree(3,_ptRes1,_ptTree1,_ptTree0);
                        PROG_EXIT(catch_unit_exit,"catch_unit")
#line 1911 "cplus.met"
                    }
#line 1911 "cplus.met"
                    ReplaceTree(_ptRes1, 2, _ptTree1);
#line 1911 "cplus.met"
                    _ptTree0=_ptRes1;
#line 1911 "cplus.met"
                }
#line 1911 "cplus.met"
                _retValue =_ptTree0;
#line 1911 "cplus.met"
                goto catch_unit_ret;
#line 1911 "cplus.met"
            }
#line 1911 "cplus.met"
            break;
#line 1911 "cplus.met"
#line 1912 "cplus.met"
        case CATCH_ALL : 
#line 1912 "cplus.met"
#line 1912 "cplus.met"
            {
#line 1912 "cplus.met"
                PPTREE _ptTree0=0;
#line 1912 "cplus.met"
                {
#line 1912 "cplus.met"
                    PPTREE _ptTree1=0,_ptRes1=0;
#line 1912 "cplus.met"
                    _ptRes1= MakeTree(CATCH, 2);
#line 1912 "cplus.met"
                    if ( (_ptTree1=NQUICK_CALL(_Tak(macro)(error_free), 92, cplus))== (PPTREE) -1 ) {
#line 1912 "cplus.met"
                        MulFreeTree(3,_ptRes1,_ptTree1,_ptTree0);
                        PROG_EXIT(catch_unit_exit,"catch_unit")
#line 1912 "cplus.met"
                    }
#line 1912 "cplus.met"
                    ReplaceTree(_ptRes1, 1, _ptTree1);
#line 1912 "cplus.met"
                    if ( (_ptTree1=NQUICK_CALL(_Tak(compound_statement)(error_free), 28, cplus))== (PPTREE) -1 ) {
#line 1912 "cplus.met"
                        MulFreeTree(3,_ptRes1,_ptTree1,_ptTree0);
                        PROG_EXIT(catch_unit_exit,"catch_unit")
#line 1912 "cplus.met"
                    }
#line 1912 "cplus.met"
                    ReplaceTree(_ptRes1, 2, _ptTree1);
#line 1912 "cplus.met"
                    _ptTree0=_ptRes1;
#line 1912 "cplus.met"
                }
#line 1912 "cplus.met"
                _retValue =_ptTree0;
#line 1912 "cplus.met"
                goto catch_unit_ret;
#line 1912 "cplus.met"
            }
#line 1912 "cplus.met"
            break;
#line 1912 "cplus.met"
#line 1913 "cplus.met"
        case AND_CATCH : 
#line 1913 "cplus.met"
#line 1913 "cplus.met"
            {
#line 1913 "cplus.met"
                PPTREE _ptTree0=0;
#line 1913 "cplus.met"
                {
#line 1913 "cplus.met"
                    PPTREE _ptTree1=0,_ptRes1=0;
#line 1913 "cplus.met"
                    _ptRes1= MakeTree(CATCH, 2);
#line 1913 "cplus.met"
                    if ( (_ptTree1=NQUICK_CALL(_Tak(macro)(error_free), 92, cplus))== (PPTREE) -1 ) {
#line 1913 "cplus.met"
                        MulFreeTree(3,_ptRes1,_ptTree1,_ptTree0);
                        PROG_EXIT(catch_unit_exit,"catch_unit")
#line 1913 "cplus.met"
                    }
#line 1913 "cplus.met"
                    ReplaceTree(_ptRes1, 1, _ptTree1);
#line 1913 "cplus.met"
                    if ( (_ptTree1=NQUICK_CALL(_Tak(compound_statement)(error_free), 28, cplus))== (PPTREE) -1 ) {
#line 1913 "cplus.met"
                        MulFreeTree(3,_ptRes1,_ptTree1,_ptTree0);
                        PROG_EXIT(catch_unit_exit,"catch_unit")
#line 1913 "cplus.met"
                    }
#line 1913 "cplus.met"
                    ReplaceTree(_ptRes1, 2, _ptTree1);
#line 1913 "cplus.met"
                    _ptTree0=_ptRes1;
#line 1913 "cplus.met"
                }
#line 1913 "cplus.met"
                _retValue =_ptTree0;
#line 1913 "cplus.met"
                goto catch_unit_ret;
#line 1913 "cplus.met"
            }
#line 1913 "cplus.met"
            break;
#line 1913 "cplus.met"
        default :
#line 1913 "cplus.met"
            CASE_EXIT(catch_unit_exit,"either CATCH_UPPER or CATCH_ALL or AND_CATCH")
#line 1913 "cplus.met"
            break;
#line 1913 "cplus.met"
    }
#line 1913 "cplus.met"
#line 1913 "cplus.met"
#line 1914 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1914 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 1914 "cplus.met"
return((PPTREE) 0);
#line 1914 "cplus.met"

#line 1914 "cplus.met"
catch_unit_exit :
#line 1914 "cplus.met"

#line 1914 "cplus.met"
    _Debug = TRACE_RULE("catch_unit",TRACE_EXIT,(PPTREE)0);
#line 1914 "cplus.met"
    _funcLevel--;
#line 1914 "cplus.met"
    return((PPTREE) -1) ;
#line 1914 "cplus.met"

#line 1914 "cplus.met"
catch_unit_ret :
#line 1914 "cplus.met"
    
#line 1914 "cplus.met"
    _Debug = TRACE_RULE("catch_unit",TRACE_RETURN,_retValue);
#line 1914 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1914 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 1914 "cplus.met"
    return _retValue ;
#line 1914 "cplus.met"
}
#line 1914 "cplus.met"

#line 1914 "cplus.met"
#line 1927 "cplus.met"
PPTREE cplus::catch_unit_ansi ( int error_free)
#line 1927 "cplus.met"
{
#line 1927 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 1927 "cplus.met"
    int _value,_nbPre = 0 ;
#line 1927 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 1927 "cplus.met"
    int _Debug = TRACE_RULE("catch_unit_ansi",TRACE_ENTER,(PPTREE)0);
#line 1927 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 1927 "cplus.met"
#line 1927 "cplus.met"
    PPTREE retTree = (PPTREE) 0,valTree = (PPTREE) 0;
#line 1927 "cplus.met"
#line 1929 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 1929 "cplus.met"
    if (  !SEE_TOKEN( CATCH,"catch") || !(CommTerm(),1)) {
#line 1929 "cplus.met"
        MulFreeTree(2,retTree,valTree);
        TOKEN_EXIT(catch_unit_ansi_exit,"catch")
#line 1929 "cplus.met"
    } else {
#line 1929 "cplus.met"
        tokenAhead = 0 ;
#line 1929 "cplus.met"
    }
#line 1929 "cplus.met"
#line 1930 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 1930 "cplus.met"
    if (  !SEE_TOKEN( POUV,"(") || !(CommTerm(),1)) {
#line 1930 "cplus.met"
        MulFreeTree(2,retTree,valTree);
        TOKEN_EXIT(catch_unit_ansi_exit,"(")
#line 1930 "cplus.met"
    } else {
#line 1930 "cplus.met"
        tokenAhead = 0 ;
#line 1930 "cplus.met"
    }
#line 1930 "cplus.met"
#line 1931 "cplus.met"
    if ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN(POINPOINPOIN,"...") && (tokenAhead = 0,CommTerm(),1)){
#line 1931 "cplus.met"
#line 1932 "cplus.met"
        {
#line 1932 "cplus.met"
            PPTREE _ptRes0=0;
#line 1932 "cplus.met"
            _ptRes0= MakeTree(EXCEPT_ANSI_ALL, 0);
#line 1932 "cplus.met"
            valTree=_ptRes0;
#line 1932 "cplus.met"
        }
#line 1932 "cplus.met"
    } else {
#line 1932 "cplus.met"
#line 1934 "cplus.met"
#line 1935 "cplus.met"
        if ( (retTree=NQUICK_CALL(_Tak(type_specifier)(error_free), 145, cplus))== (PPTREE) -1 ) {
#line 1935 "cplus.met"
            MulFreeTree(2,retTree,valTree);
            PROG_EXIT(catch_unit_ansi_exit,"catch_unit_ansi")
#line 1935 "cplus.met"
        }
#line 1935 "cplus.met"
#line 1936 "cplus.met"
        if (NPUSH_CALL_AFF_VERIF(valTree = ,_Tak(declarator), 46, cplus)){
#line 1936 "cplus.met"
#line 1937 "cplus.met"
            {
#line 1937 "cplus.met"
                PPTREE _ptRes0=0;
#line 1937 "cplus.met"
                _ptRes0= MakeTree(DECLARATOR, 2);
#line 1937 "cplus.met"
                ReplaceTree(_ptRes0, 1, retTree );
#line 1937 "cplus.met"
                ReplaceTree(_ptRes0, 2, valTree );
#line 1937 "cplus.met"
                valTree=_ptRes0;
#line 1937 "cplus.met"
            }
#line 1937 "cplus.met"
        } else {
#line 1937 "cplus.met"
#line 1939 "cplus.met"
            if (NPUSH_CALL_AFF_VERIF(valTree = ,_Tak(abstract_declarator), 2, cplus)){
#line 1939 "cplus.met"
#line 1940 "cplus.met"
                {
#line 1940 "cplus.met"
                    PPTREE _ptRes0=0;
#line 1940 "cplus.met"
                    _ptRes0= MakeTree(ABST_DECLARATOR, 2);
#line 1940 "cplus.met"
                    ReplaceTree(_ptRes0, 1, retTree );
#line 1940 "cplus.met"
                    ReplaceTree(_ptRes0, 2, valTree );
#line 1940 "cplus.met"
                    valTree=_ptRes0;
#line 1940 "cplus.met"
                }
#line 1940 "cplus.met"
            } else {
#line 1940 "cplus.met"
#line 1942 "cplus.met"
                valTree = retTree ;
#line 1942 "cplus.met"
            }
#line 1942 "cplus.met"
        }
#line 1942 "cplus.met"
#line 1942 "cplus.met"
    }
#line 1942 "cplus.met"
#line 1944 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 1944 "cplus.met"
    if (  !SEE_TOKEN( PFER,")") || !(CommTerm(),1)) {
#line 1944 "cplus.met"
        MulFreeTree(2,retTree,valTree);
        TOKEN_EXIT(catch_unit_ansi_exit,")")
#line 1944 "cplus.met"
    } else {
#line 1944 "cplus.met"
        tokenAhead = 0 ;
#line 1944 "cplus.met"
    }
#line 1944 "cplus.met"
#line 1945 "cplus.met"
    {
#line 1945 "cplus.met"
        PPTREE _ptTree0=0;
#line 1945 "cplus.met"
        {
#line 1945 "cplus.met"
            PPTREE _ptTree1=0,_ptRes1=0;
#line 1945 "cplus.met"
            _ptRes1= MakeTree(CATCH_ANSI, 2);
#line 1945 "cplus.met"
            ReplaceTree(_ptRes1, 1, valTree );
#line 1945 "cplus.met"
            if ( (_ptTree1=NQUICK_CALL(_Tak(compound_statement)(error_free), 28, cplus))== (PPTREE) -1 ) {
#line 1945 "cplus.met"
                MulFreeTree(5,_ptRes1,_ptTree1,_ptTree0,retTree,valTree);
                PROG_EXIT(catch_unit_ansi_exit,"catch_unit_ansi")
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
        goto catch_unit_ansi_ret;
#line 1945 "cplus.met"
    }
#line 1945 "cplus.met"
#line 1945 "cplus.met"
#line 1945 "cplus.met"

#line 1946 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1946 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 1946 "cplus.met"
return((PPTREE) 0);
#line 1946 "cplus.met"

#line 1946 "cplus.met"
catch_unit_ansi_exit :
#line 1946 "cplus.met"

#line 1946 "cplus.met"
    _Debug = TRACE_RULE("catch_unit_ansi",TRACE_EXIT,(PPTREE)0);
#line 1946 "cplus.met"
    _funcLevel--;
#line 1946 "cplus.met"
    return((PPTREE) -1) ;
#line 1946 "cplus.met"

#line 1946 "cplus.met"
catch_unit_ansi_ret :
#line 1946 "cplus.met"
    
#line 1946 "cplus.met"
    _Debug = TRACE_RULE("catch_unit_ansi",TRACE_RETURN,_retValue);
#line 1946 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1946 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 1946 "cplus.met"
    return _retValue ;
#line 1946 "cplus.met"
}
#line 1946 "cplus.met"

#line 1946 "cplus.met"
#line 1966 "cplus.met"
PPTREE cplus::class_declaration ( int error_free)
#line 1966 "cplus.met"
{
#line 1966 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 1966 "cplus.met"
    int _value,_nbPre = 0 ;
#line 1966 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 1966 "cplus.met"
    int _Debug = TRACE_RULE("class_declaration",TRACE_ENTER,(PPTREE)0);
#line 1966 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 1966 "cplus.met"
#line 1966 "cplus.met"
    PPTREE _addlist1 = (PPTREE) 0;
#line 1966 "cplus.met"
#line 1966 "cplus.met"
    PPTREE retTree = (PPTREE) 0,inter = (PPTREE) 0,list = (PPTREE) 0;
#line 1966 "cplus.met"
#line 1968 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 1968 "cplus.met"
    switch( lexEl.Value) {
#line 1968 "cplus.met"
#line 1969 "cplus.met"
        case STRUCT : 
#line 1969 "cplus.met"
            tokenAhead = 0 ;
#line 1969 "cplus.met"
            CommTerm();
#line 1969 "cplus.met"
#line 1969 "cplus.met"
            {
#line 1969 "cplus.met"
                PPTREE _ptRes0=0;
#line 1969 "cplus.met"
                _ptRes0= MakeTree(CLASS, 4);
#line 1969 "cplus.met"
                ReplaceTree(_ptRes0, 1, MakeString ("struct"));
#line 1969 "cplus.met"
                retTree=_ptRes0;
#line 1969 "cplus.met"
            }
#line 1969 "cplus.met"
            break;
#line 1969 "cplus.met"
#line 1970 "cplus.met"
        case UNION : 
#line 1970 "cplus.met"
            tokenAhead = 0 ;
#line 1970 "cplus.met"
            CommTerm();
#line 1970 "cplus.met"
#line 1970 "cplus.met"
            {
#line 1970 "cplus.met"
                PPTREE _ptRes0=0;
#line 1970 "cplus.met"
                _ptRes0= MakeTree(CLASS, 4);
#line 1970 "cplus.met"
                ReplaceTree(_ptRes0, 1, MakeString ("union"));
#line 1970 "cplus.met"
                retTree=_ptRes0;
#line 1970 "cplus.met"
            }
#line 1970 "cplus.met"
            break;
#line 1970 "cplus.met"
#line 1971 "cplus.met"
        case CLASS : 
#line 1971 "cplus.met"
            tokenAhead = 0 ;
#line 1971 "cplus.met"
            CommTerm();
#line 1971 "cplus.met"
#line 1971 "cplus.met"
            {
#line 1971 "cplus.met"
                PPTREE _ptRes0=0;
#line 1971 "cplus.met"
                _ptRes0= MakeTree(CLASS, 4);
#line 1971 "cplus.met"
                ReplaceTree(_ptRes0, 1, MakeString ("class"));
#line 1971 "cplus.met"
                retTree=_ptRes0;
#line 1971 "cplus.met"
            }
#line 1971 "cplus.met"
            break;
#line 1971 "cplus.met"
        default :
#line 1971 "cplus.met"
            MulFreeTree(4,_addlist1,inter,list,retTree);
            CASE_EXIT(class_declaration_exit,"either struct or union or class")
#line 1971 "cplus.met"
            break;
#line 1971 "cplus.met"
    }
#line 1971 "cplus.met"
#line 1973 "cplus.met"
    {
#line 1973 "cplus.met"
        PPTREE _ptTree0=0;
#line 1973 "cplus.met"
        if ( (_ptTree0=NQUICK_CALL(_Tak(range_modifier_ident)(error_free), 123, cplus))== (PPTREE) -1 ) {
#line 1973 "cplus.met"
            MulFreeTree(5,_ptTree0,_addlist1,inter,list,retTree);
            PROG_EXIT(class_declaration_exit,"class_declaration")
#line 1973 "cplus.met"
        }
#line 1973 "cplus.met"
        ReplaceTree(retTree , 2 , _ptTree0);
#line 1973 "cplus.met"
    }
#line 1973 "cplus.met"
#line 1974 "cplus.met"
    if ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN(DPOI,":") && (tokenAhead = 0,CommTerm(),1)){
#line 1974 "cplus.met"
#line 1975 "cplus.met"
        {
#line 1975 "cplus.met"
            PPTREE _ptTree0=0;
#line 1975 "cplus.met"
            if ( (_ptTree0=NQUICK_CALL(_Tak(base_specifier)(error_free), 18, cplus))== (PPTREE) -1 ) {
#line 1975 "cplus.met"
                MulFreeTree(5,_ptTree0,_addlist1,inter,list,retTree);
                PROG_EXIT(class_declaration_exit,"class_declaration")
#line 1975 "cplus.met"
            }
#line 1975 "cplus.met"
            ReplaceTree(retTree , 3 , _ptTree0);
#line 1975 "cplus.met"
        }
#line 1975 "cplus.met"
#line 1975 "cplus.met"
    }
#line 1975 "cplus.met"
#line 1976 "cplus.met"
    if ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN(AOUV,"{") && (tokenAhead = 0,CommTerm(),1)){
#line 1976 "cplus.met"
#line 1977 "cplus.met"
#line 1978 "cplus.met"
        do {
#line 1978 "cplus.met"
#line 1978 "cplus.met"
            _addlist1 = list ;
#line 1978 "cplus.met"
#line 1979 "cplus.met"
            while (NPUSH_CALL_AFF_VERIF(inter = ,_Tak(inside_declaration), 83, cplus)) { 
#line 1979 "cplus.met"
#line 1980 "cplus.met"
#line 1980 "cplus.met"
                _addlist1 =AddList(_addlist1 ,inter );
#line 1980 "cplus.met"
#line 1980 "cplus.met"
                if (list){
#line 1980 "cplus.met"
#line 1980 "cplus.met"
                    _addlist1 = SonTree (_addlist1 ,2 );
#line 1980 "cplus.met"
                } else {
#line 1980 "cplus.met"
#line 1980 "cplus.met"
                    list = _addlist1 ;
#line 1980 "cplus.met"
                }
#line 1980 "cplus.met"
            } 
#line 1980 "cplus.met"
#line 1981 "cplus.met"
            (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 1981 "cplus.met"
            switch( lexEl.Value) {
#line 1981 "cplus.met"
#line 1982 "cplus.met"
                case PUBLIC : 
#line 1982 "cplus.met"
#line 1982 "cplus.met"
                    {
#line 1982 "cplus.met"
                        PPTREE _ptTree0=0;
#line 1982 "cplus.met"
                        if ( (_ptTree0=NQUICK_CALL(_Tak(protect_declare)(error_free), 114, cplus))== (PPTREE) -1 ) {
#line 1982 "cplus.met"
                            MulFreeTree(5,_ptTree0,_addlist1,inter,list,retTree);
                            PROG_EXIT(class_declaration_exit,"class_declaration")
#line 1982 "cplus.met"
                        }
#line 1982 "cplus.met"
                        list =AddList(list , _ptTree0);
#line 1982 "cplus.met"
                    }
#line 1982 "cplus.met"
                    break;
#line 1982 "cplus.met"
#line 1983 "cplus.met"
                case PRIVATE : 
#line 1983 "cplus.met"
#line 1983 "cplus.met"
                    {
#line 1983 "cplus.met"
                        PPTREE _ptTree0=0;
#line 1983 "cplus.met"
                        if ( (_ptTree0=NQUICK_CALL(_Tak(protect_declare)(error_free), 114, cplus))== (PPTREE) -1 ) {
#line 1983 "cplus.met"
                            MulFreeTree(5,_ptTree0,_addlist1,inter,list,retTree);
                            PROG_EXIT(class_declaration_exit,"class_declaration")
#line 1983 "cplus.met"
                        }
#line 1983 "cplus.met"
                        list =AddList(list , _ptTree0);
#line 1983 "cplus.met"
                    }
#line 1983 "cplus.met"
                    break;
#line 1983 "cplus.met"
#line 1984 "cplus.met"
                case PROTECTED : 
#line 1984 "cplus.met"
#line 1984 "cplus.met"
                    {
#line 1984 "cplus.met"
                        PPTREE _ptTree0=0;
#line 1984 "cplus.met"
                        if ( (_ptTree0=NQUICK_CALL(_Tak(protect_declare)(error_free), 114, cplus))== (PPTREE) -1 ) {
#line 1984 "cplus.met"
                            MulFreeTree(5,_ptTree0,_addlist1,inter,list,retTree);
                            PROG_EXIT(class_declaration_exit,"class_declaration")
#line 1984 "cplus.met"
                        }
#line 1984 "cplus.met"
                        list =AddList(list , _ptTree0);
#line 1984 "cplus.met"
                    }
#line 1984 "cplus.met"
                    break;
#line 1984 "cplus.met"
#line 1984 "cplus.met"
                case AFER : 
#line 1984 "cplus.met"
#line 1984 "cplus.met"
                    break;
#line 1984 "cplus.met"
#line 1986 "cplus.met"
                default : 
#line 1986 "cplus.met"
#line 1986 "cplus.met"
                    
#line 1986 "cplus.met"
                    MulFreeTree(4,_addlist1,inter,list,retTree);
                    LEX_EXIT ("",0);
#line 1986 "cplus.met"
                    goto class_declaration_exit;
#line 1986 "cplus.met"
                    break;
#line 1986 "cplus.met"
            }
#line 1986 "cplus.met"
#line 1986 "cplus.met"
#line 1988 "cplus.met"
        } while ( !(((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN( AFER,"}")) || 
#line 1988 "cplus.met"
                   (! ((tokenAhead && tokenAhead != -1)|| (c != EOF))))) ;
#line 1988 "cplus.met"
#line 1989 "cplus.met"
        {
#line 1989 "cplus.met"
            PPTREE _ptTree0=0;
#line 1989 "cplus.met"
            {
#line 1989 "cplus.met"
                PPTREE _ptRes1=0;
#line 1989 "cplus.met"
                _ptRes1= MakeTree(CLASS_DECL, 1);
#line 1989 "cplus.met"
                ReplaceTree(_ptRes1, 1, list );
#line 1989 "cplus.met"
                _ptTree0=_ptRes1;
#line 1989 "cplus.met"
            }
#line 1989 "cplus.met"
            ReplaceTree(retTree , 4 , _ptTree0);
#line 1989 "cplus.met"
        }
#line 1989 "cplus.met"
#line 1990 "cplus.met"
        (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 1990 "cplus.met"
        if (  !SEE_TOKEN( AFER,"}") || !(CommTerm(),1)) {
#line 1990 "cplus.met"
            MulFreeTree(4,_addlist1,inter,list,retTree);
            TOKEN_EXIT(class_declaration_exit,"}")
#line 1990 "cplus.met"
        } else {
#line 1990 "cplus.met"
            tokenAhead = 0 ;
#line 1990 "cplus.met"
        }
#line 1990 "cplus.met"
#line 1990 "cplus.met"
#line 1990 "cplus.met"
    }
#line 1990 "cplus.met"
#line 1992 "cplus.met"
    {
#line 1992 "cplus.met"
        _retValue = retTree ;
#line 1992 "cplus.met"
        goto class_declaration_ret;
#line 1992 "cplus.met"
        
#line 1992 "cplus.met"
    }
#line 1992 "cplus.met"
#line 1992 "cplus.met"
#line 1992 "cplus.met"

#line 1993 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1993 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 1993 "cplus.met"
return((PPTREE) 0);
#line 1993 "cplus.met"

#line 1993 "cplus.met"
class_declaration_exit :
#line 1993 "cplus.met"

#line 1993 "cplus.met"
    _Debug = TRACE_RULE("class_declaration",TRACE_EXIT,(PPTREE)0);
#line 1993 "cplus.met"
    _funcLevel--;
#line 1993 "cplus.met"
    return((PPTREE) -1) ;
#line 1993 "cplus.met"

#line 1993 "cplus.met"
class_declaration_ret :
#line 1993 "cplus.met"
    
#line 1993 "cplus.met"
    _Debug = TRACE_RULE("class_declaration",TRACE_RETURN,_retValue);
#line 1993 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1993 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 1993 "cplus.met"
    return _retValue ;
#line 1993 "cplus.met"
}
#line 1993 "cplus.met"

#line 1993 "cplus.met"
#line 776 "cplus.met"
PPTREE cplus::comment_eater ( int error_free)
#line 776 "cplus.met"
{
#line 776 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 776 "cplus.met"
    int _value,_nbPre = 0 ;
#line 776 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 776 "cplus.met"
    int _Debug = TRACE_RULE("comment_eater",TRACE_ENTER,(PPTREE)0);
#line 776 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 776 "cplus.met"
#line 776 "cplus.met"
    PPTREE retTree = (PPTREE) 0;
#line 776 "cplus.met"
#line 778 "cplus.met"
    1;
#line 778 "cplus.met"
    switch( lexEl.Value) {
#line 778 "cplus.met"
#line 779 "cplus.met"
        default : 
#line 779 "cplus.met"
            tokenAhead = 0 ;
#line 779 "cplus.met"
            CommTerm();
#line 779 "cplus.met"
#line 780 "cplus.met"
            if ( lexEl.Value != -1 ){
#line 780 "cplus.met"
#line 781 "cplus.met"
                
#line 781 "cplus.met"
                MulFreeTree(1,retTree);
                LEX_EXIT ("",0);
#line 781 "cplus.met"
                goto comment_eater_exit;
#line 781 "cplus.met"
#line 781 "cplus.met"
            } else {
#line 781 "cplus.met"
#line 783 "cplus.met"
                {
#line 783 "cplus.met"
                    _retValue = retTree ;
#line 783 "cplus.met"
                    goto comment_eater_ret;
#line 783 "cplus.met"
                    
#line 783 "cplus.met"
                }
#line 783 "cplus.met"
            }
#line 783 "cplus.met"
            break;
#line 783 "cplus.met"
    }
#line 783 "cplus.met"
#line 783 "cplus.met"
#line 784 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 784 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 784 "cplus.met"
return((PPTREE) 0);
#line 784 "cplus.met"

#line 784 "cplus.met"
comment_eater_exit :
#line 784 "cplus.met"

#line 784 "cplus.met"
    _Debug = TRACE_RULE("comment_eater",TRACE_EXIT,(PPTREE)0);
#line 784 "cplus.met"
    _funcLevel--;
#line 784 "cplus.met"
    return((PPTREE) -1) ;
#line 784 "cplus.met"

#line 784 "cplus.met"
comment_eater_ret :
#line 784 "cplus.met"
    
#line 784 "cplus.met"
    _Debug = TRACE_RULE("comment_eater",TRACE_RETURN,_retValue);
#line 784 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 784 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 784 "cplus.met"
    return _retValue ;
#line 784 "cplus.met"
}
#line 784 "cplus.met"

#line 784 "cplus.met"
#line 1803 "cplus.met"
PPTREE cplus::complete_class_name ( int error_free)
#line 1803 "cplus.met"
{
#line 1803 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 1803 "cplus.met"
    int _value,_nbPre = 0 ;
#line 1803 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 1803 "cplus.met"
    int _Debug = TRACE_RULE("complete_class_name",TRACE_ENTER,(PPTREE)0);
#line 1803 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 1803 "cplus.met"
#line 1803 "cplus.met"
    PPTREE ret = (PPTREE) 0;
#line 1803 "cplus.met"
#line 1805 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 1805 "cplus.met"
    switch( lexEl.Value) {
#line 1805 "cplus.met"
#line 1806 "cplus.met"
        case META : 
#line 1806 "cplus.met"
        case IDENT : 
#line 1806 "cplus.met"
#line 1806 "cplus.met"
            if ( (ret=NQUICK_CALL(_Tak(qualified_name)(error_free), 116, cplus))== (PPTREE) -1 ) {
#line 1806 "cplus.met"
                MulFreeTree(1,ret);
                PROG_EXIT(complete_class_name_exit,"complete_class_name")
#line 1806 "cplus.met"
            }
#line 1806 "cplus.met"
            break;
#line 1806 "cplus.met"
#line 1807 "cplus.met"
        case DPOIDPOI : 
#line 1807 "cplus.met"
            tokenAhead = 0 ;
#line 1807 "cplus.met"
            CommTerm();
#line 1807 "cplus.met"
#line 1807 "cplus.met"
            {
#line 1807 "cplus.met"
                PPTREE _ptTree0=0,_ptRes0=0;
#line 1807 "cplus.met"
                _ptRes0= MakeTree(QUALIFIED, 2);
#line 1807 "cplus.met"
                if ( (_ptTree0=NQUICK_CALL(_Tak(qualified_name)(error_free), 116, cplus))== (PPTREE) -1 ) {
#line 1807 "cplus.met"
                    MulFreeTree(3,_ptRes0,_ptTree0,ret);
                    PROG_EXIT(complete_class_name_exit,"complete_class_name")
#line 1807 "cplus.met"
                }
#line 1807 "cplus.met"
                ReplaceTree(_ptRes0, 2, _ptTree0);
#line 1807 "cplus.met"
                ret=_ptRes0;
#line 1807 "cplus.met"
            }
#line 1807 "cplus.met"
            break;
#line 1807 "cplus.met"
        default :
#line 1807 "cplus.met"
            MulFreeTree(1,ret);
            CASE_EXIT(complete_class_name_exit,"either IDENT or ::")
#line 1807 "cplus.met"
            break;
#line 1807 "cplus.met"
    }
#line 1807 "cplus.met"
#line 1809 "cplus.met"
    {
#line 1809 "cplus.met"
        _retValue = ret ;
#line 1809 "cplus.met"
        goto complete_class_name_ret;
#line 1809 "cplus.met"
        
#line 1809 "cplus.met"
    }
#line 1809 "cplus.met"
#line 1809 "cplus.met"
#line 1809 "cplus.met"

#line 1810 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1810 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 1810 "cplus.met"
return((PPTREE) 0);
#line 1810 "cplus.met"

#line 1810 "cplus.met"
complete_class_name_exit :
#line 1810 "cplus.met"

#line 1810 "cplus.met"
    _Debug = TRACE_RULE("complete_class_name",TRACE_EXIT,(PPTREE)0);
#line 1810 "cplus.met"
    _funcLevel--;
#line 1810 "cplus.met"
    return((PPTREE) -1) ;
#line 1810 "cplus.met"

#line 1810 "cplus.met"
complete_class_name_ret :
#line 1810 "cplus.met"
    
#line 1810 "cplus.met"
    _Debug = TRACE_RULE("complete_class_name",TRACE_RETURN,_retValue);
#line 1810 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1810 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 1810 "cplus.met"
    return _retValue ;
#line 1810 "cplus.met"
}
#line 1810 "cplus.met"

#line 1810 "cplus.met"
#line 3232 "cplus.met"
PPTREE cplus::compound_statement ( int error_free)
#line 3232 "cplus.met"
{
#line 3232 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 3232 "cplus.met"
    int _value,_nbPre = 0 ;
#line 3232 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 3232 "cplus.met"
    int _Debug = TRACE_RULE("compound_statement",TRACE_ENTER,(PPTREE)0);
#line 3232 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 3232 "cplus.met"
#line 3232 "cplus.met"
    PPTREE _addlist1 = (PPTREE) 0;
#line 3232 "cplus.met"
#line 3232 "cplus.met"
    PPTREE statList = (PPTREE) 0,stat = (PPTREE) 0;
#line 3232 "cplus.met"
#line 3234 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3234 "cplus.met"
    if (  !SEE_TOKEN( AOUV,"{") || !(CommTerm(),1)) {
#line 3234 "cplus.met"
        MulFreeTree(3,_addlist1,stat,statList);
        TOKEN_EXIT(compound_statement_exit,"{")
#line 3234 "cplus.met"
    } else {
#line 3234 "cplus.met"
        tokenAhead = 0 ;
#line 3234 "cplus.met"
    }
#line 3234 "cplus.met"
#line 3235 "cplus.met"
     debut :
#line 3235 "cplus.met"
#line 3235 "cplus.met"
    _addlist1 = statList ;
#line 3235 "cplus.met"
#line 3237 "cplus.met"
    while (((((NPUSH_CALL_AFF_VERIF(stat = ,_Tak(statement), 136, cplus)) || 
#line 3237 "cplus.met"
             (NPUSH_CALL_AFF_VERIF(stat = ,_Tak(data_declaration), 40, cplus))) || 
#line 3237 "cplus.met"
            (NPUSH_CALL_AFF_VERIF(stat = ,_Tak(stat_dir), 132, cplus))) || 
#line 3237 "cplus.met"
           (NPUSH_CALL_AFF_VERIF(stat = ,_Tak(exception), 58, cplus))) || 
#line 3237 "cplus.met"
          (NPUSH_CALL_AFF_VERIF(stat = ,_Tak(ext_data_declaration), 71, cplus))) { 
#line 3237 "cplus.met"
#line 3239 "cplus.met"
#line 3239 "cplus.met"
        _addlist1 =AddList(_addlist1 ,stat );
#line 3239 "cplus.met"
#line 3239 "cplus.met"
        if (statList){
#line 3239 "cplus.met"
#line 3239 "cplus.met"
            _addlist1 = SonTree (_addlist1 ,2 );
#line 3239 "cplus.met"
        } else {
#line 3239 "cplus.met"
#line 3239 "cplus.met"
            statList = _addlist1 ;
#line 3239 "cplus.met"
        }
#line 3239 "cplus.met"
    } 
#line 3239 "cplus.met"
#line 3240 "cplus.met"
    {
#line 3240 "cplus.met"
        PPTREE _ptTree0=0;
#line 3240 "cplus.met"
        if ( (_ptTree0=NQUICK_CALL(_Tak(none_statement)(error_free), 103, cplus))== (PPTREE) -1 ) {
#line 3240 "cplus.met"
            MulFreeTree(4,_ptTree0,_addlist1,stat,statList);
            PROG_EXIT(compound_statement_exit,"compound_statement")
#line 3240 "cplus.met"
        }
#line 3240 "cplus.met"
        statList =AddList(statList , _ptTree0);
#line 3240 "cplus.met"
    }
#line 3240 "cplus.met"
#line 3241 "cplus.met"
    if (! ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN(AFER,"}") && (tokenAhead = 0,CommTerm(),1))){
#line 3241 "cplus.met"
#line 3242 "cplus.met"
#line 3243 "cplus.met"
        dumperror ();
#line 3243 "cplus.met"
#line 3244 "cplus.met"
        (tokenAhead == 5|| (LexEndLine(),TRACE_LEX(1)));
#line 3244 "cplus.met"
        if ( ! TERM_OR_META(END_LINE,"END_LINE") || !(CommTerm(),1)) {
#line 3244 "cplus.met"
            MulFreeTree(3,_addlist1,stat,statList);
            TOKEN_EXIT(compound_statement_exit,"END_LINE")
#line 3244 "cplus.met"
        } else {
#line 3244 "cplus.met"
            tokenAhead = 0 ;
#line 3244 "cplus.met"
        }
#line 3244 "cplus.met"
#line 3245 "cplus.met"
         hasGotError = 1 ;
#line 3245 "cplus.met"
#line 3246 "cplus.met"
         goto debut ;
#line 3246 "cplus.met"
#line 3246 "cplus.met"
#line 3246 "cplus.met"
    }
#line 3246 "cplus.met"
#line 3248 "cplus.met"
    {
#line 3248 "cplus.met"
        PPTREE _ptTree0=0;
#line 3248 "cplus.met"
        {
#line 3248 "cplus.met"
            PPTREE _ptRes1=0;
#line 3248 "cplus.met"
            _ptRes1= MakeTree(COMPOUND, 1);
#line 3248 "cplus.met"
            ReplaceTree(_ptRes1, 1, statList );
#line 3248 "cplus.met"
            _ptTree0=_ptRes1;
#line 3248 "cplus.met"
        }
#line 3248 "cplus.met"
        _retValue =_ptTree0;
#line 3248 "cplus.met"
        goto compound_statement_ret;
#line 3248 "cplus.met"
    }
#line 3248 "cplus.met"
#line 3248 "cplus.met"
#line 3248 "cplus.met"

#line 3249 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 3249 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 3249 "cplus.met"
return((PPTREE) 0);
#line 3249 "cplus.met"

#line 3249 "cplus.met"
compound_statement_exit :
#line 3249 "cplus.met"

#line 3249 "cplus.met"
    _Debug = TRACE_RULE("compound_statement",TRACE_EXIT,(PPTREE)0);
#line 3249 "cplus.met"
    _funcLevel--;
#line 3249 "cplus.met"
    return((PPTREE) -1) ;
#line 3249 "cplus.met"

#line 3249 "cplus.met"
compound_statement_ret :
#line 3249 "cplus.met"
    
#line 3249 "cplus.met"
    _Debug = TRACE_RULE("compound_statement",TRACE_RETURN,_retValue);
#line 3249 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 3249 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 3249 "cplus.met"
    return _retValue ;
#line 3249 "cplus.met"
}
#line 3249 "cplus.met"

#line 3249 "cplus.met"
#line 2570 "cplus.met"
PPTREE cplus::conditional_expression ( int error_free)
#line 2570 "cplus.met"
{
#line 2570 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 2570 "cplus.met"
    int _value,_nbPre = 0 ;
#line 2570 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 2570 "cplus.met"
    int _Debug = TRACE_RULE("conditional_expression",TRACE_ENTER,(PPTREE)0);
#line 2570 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 2570 "cplus.met"
#line 2570 "cplus.met"
    PPTREE expTree = (PPTREE) 0,condTree = (PPTREE) 0;
#line 2570 "cplus.met"
#line 2572 "cplus.met"
    if ( (expTree=NQUICK_CALL(_Tak(logical_or_expression)(error_free), 90, cplus))== (PPTREE) -1 ) {
#line 2572 "cplus.met"
        MulFreeTree(2,condTree,expTree);
        PROG_EXIT(conditional_expression_exit,"conditional_expression")
#line 2572 "cplus.met"
    }
#line 2572 "cplus.met"
#line 2573 "cplus.met"
    if ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN(INTE,"?") && (tokenAhead = 0,CommTerm(),1)){
#line 2573 "cplus.met"
#line 2574 "cplus.met"
#line 2575 "cplus.met"
        {
#line 2575 "cplus.met"
            PPTREE _ptRes0=0;
#line 2575 "cplus.met"
            _ptRes0= MakeTree(COND_AFF, 3);
#line 2575 "cplus.met"
            ReplaceTree(_ptRes0, 1, expTree );
#line 2575 "cplus.met"
            condTree=_ptRes0;
#line 2575 "cplus.met"
        }
#line 2575 "cplus.met"
#line 2576 "cplus.met"
        {
#line 2576 "cplus.met"
            PPTREE _ptTree0=0;
#line 2576 "cplus.met"
            if ( (_ptTree0=NQUICK_CALL(_Tak(expression)(error_free), 62, cplus))== (PPTREE) -1 ) {
#line 2576 "cplus.met"
                MulFreeTree(3,_ptTree0,condTree,expTree);
                PROG_EXIT(conditional_expression_exit,"conditional_expression")
#line 2576 "cplus.met"
            }
#line 2576 "cplus.met"
            ReplaceTree(condTree , 2 , _ptTree0);
#line 2576 "cplus.met"
        }
#line 2576 "cplus.met"
#line 2577 "cplus.met"
        (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 2577 "cplus.met"
        if (  !SEE_TOKEN( DPOI,":") || !(CommTerm(),1)) {
#line 2577 "cplus.met"
            MulFreeTree(2,condTree,expTree);
            TOKEN_EXIT(conditional_expression_exit,":")
#line 2577 "cplus.met"
        } else {
#line 2577 "cplus.met"
            tokenAhead = 0 ;
#line 2577 "cplus.met"
        }
#line 2577 "cplus.met"
#line 2578 "cplus.met"
        {
#line 2578 "cplus.met"
            PPTREE _ptTree0=0;
#line 2578 "cplus.met"
            {
#line 2578 "cplus.met"
                PPTREE _ptTree1=0;
#line 2578 "cplus.met"
                if ( (_ptTree1=NQUICK_CALL(_Tak(conditional_expression)(error_free), 29, cplus))== (PPTREE) -1 ) {
#line 2578 "cplus.met"
                    MulFreeTree(4,_ptTree1,_ptTree0,condTree,expTree);
                    PROG_EXIT(conditional_expression_exit,"conditional_expression")
#line 2578 "cplus.met"
                }
#line 2578 "cplus.met"
                _ptTree0=ReplaceTree(condTree , 3 , _ptTree1);
#line 2578 "cplus.met"
            }
#line 2578 "cplus.met"
            _retValue =_ptTree0;
#line 2578 "cplus.met"
            goto conditional_expression_ret;
#line 2578 "cplus.met"
        }
#line 2578 "cplus.met"
#line 2578 "cplus.met"
#line 2578 "cplus.met"
    } else {
#line 2578 "cplus.met"
#line 2581 "cplus.met"
        {
#line 2581 "cplus.met"
            _retValue = expTree ;
#line 2581 "cplus.met"
            goto conditional_expression_ret;
#line 2581 "cplus.met"
            
#line 2581 "cplus.met"
        }
#line 2581 "cplus.met"
    }
#line 2581 "cplus.met"
#line 2581 "cplus.met"
#line 2581 "cplus.met"

#line 2582 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2582 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 2582 "cplus.met"
return((PPTREE) 0);
#line 2582 "cplus.met"

#line 2582 "cplus.met"
conditional_expression_exit :
#line 2582 "cplus.met"

#line 2582 "cplus.met"
    _Debug = TRACE_RULE("conditional_expression",TRACE_EXIT,(PPTREE)0);
#line 2582 "cplus.met"
    _funcLevel--;
#line 2582 "cplus.met"
    return((PPTREE) -1) ;
#line 2582 "cplus.met"

#line 2582 "cplus.met"
conditional_expression_ret :
#line 2582 "cplus.met"
    
#line 2582 "cplus.met"
    _Debug = TRACE_RULE("conditional_expression",TRACE_RETURN,_retValue);
#line 2582 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2582 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 2582 "cplus.met"
    return _retValue ;
#line 2582 "cplus.met"
}
#line 2582 "cplus.met"

#line 2582 "cplus.met"
#line 2081 "cplus.met"
PPTREE cplus::const_or_volatile ( int error_free)
#line 2081 "cplus.met"
{
#line 2081 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 2081 "cplus.met"
    int _value,_nbPre = 0 ;
#line 2081 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 2081 "cplus.met"
    int _Debug = TRACE_RULE("const_or_volatile",TRACE_ENTER,(PPTREE)0);
#line 2081 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 2081 "cplus.met"
#line 2082 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 2082 "cplus.met"
    switch( lexEl.Value) {
#line 2082 "cplus.met"
#line 2083 "cplus.met"
        case CONST : 
#line 2083 "cplus.met"
#line 2083 "cplus.met"
            {
#line 2083 "cplus.met"
                PPTREE _ptTree0=0;
#line 2083 "cplus.met"
                {
#line 2083 "cplus.met"
                    PPTREE _ptTree1=0,_ptRes1=0;
#line 2083 "cplus.met"
                    _ptRes1= MakeTree(RANGE_MODIFIER, 2);
#line 2083 "cplus.met"
                    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 2083 "cplus.met"
                    if (  !SEE_TOKEN( CONST,"const") || !(_ptTree1 = CommString(lexEl.string()))) {
#line 2083 "cplus.met"
                        MulFreeTree(3,_ptRes1,_ptTree1,_ptTree0);
                        TOKEN_EXIT(const_or_volatile_exit,"const")
#line 2083 "cplus.met"
                    } else {
#line 2083 "cplus.met"
                        tokenAhead = 0 ;
#line 2083 "cplus.met"
                    }
#line 2083 "cplus.met"
                    ReplaceTree(_ptRes1, 1, _ptTree1);
#line 2083 "cplus.met"
                    _ptTree0=_ptRes1;
#line 2083 "cplus.met"
                }
#line 2083 "cplus.met"
                _retValue =_ptTree0;
#line 2083 "cplus.met"
                goto const_or_volatile_ret;
#line 2083 "cplus.met"
            }
#line 2083 "cplus.met"
            break;
#line 2083 "cplus.met"
#line 2084 "cplus.met"
        case VOLATILE : 
#line 2084 "cplus.met"
#line 2084 "cplus.met"
            {
#line 2084 "cplus.met"
                PPTREE _ptTree0=0;
#line 2084 "cplus.met"
                {
#line 2084 "cplus.met"
                    PPTREE _ptTree1=0,_ptRes1=0;
#line 2084 "cplus.met"
                    _ptRes1= MakeTree(RANGE_MODIFIER, 2);
#line 2084 "cplus.met"
                    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 2084 "cplus.met"
                    if (  !SEE_TOKEN( VOLATILE,"volatile") || !(_ptTree1 = CommString(lexEl.string()))) {
#line 2084 "cplus.met"
                        MulFreeTree(3,_ptRes1,_ptTree1,_ptTree0);
                        TOKEN_EXIT(const_or_volatile_exit,"volatile")
#line 2084 "cplus.met"
                    } else {
#line 2084 "cplus.met"
                        tokenAhead = 0 ;
#line 2084 "cplus.met"
                    }
#line 2084 "cplus.met"
                    ReplaceTree(_ptRes1, 1, _ptTree1);
#line 2084 "cplus.met"
                    _ptTree0=_ptRes1;
#line 2084 "cplus.met"
                }
#line 2084 "cplus.met"
                _retValue =_ptTree0;
#line 2084 "cplus.met"
                goto const_or_volatile_ret;
#line 2084 "cplus.met"
            }
#line 2084 "cplus.met"
            break;
#line 2084 "cplus.met"
        default :
#line 2084 "cplus.met"
            CASE_EXIT(const_or_volatile_exit,"either const or volatile")
#line 2084 "cplus.met"
            break;
#line 2084 "cplus.met"
    }
#line 2084 "cplus.met"
#line 2084 "cplus.met"
#line 2085 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2085 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 2085 "cplus.met"
return((PPTREE) 0);
#line 2085 "cplus.met"

#line 2085 "cplus.met"
const_or_volatile_exit :
#line 2085 "cplus.met"

#line 2085 "cplus.met"
    _Debug = TRACE_RULE("const_or_volatile",TRACE_EXIT,(PPTREE)0);
#line 2085 "cplus.met"
    _funcLevel--;
#line 2085 "cplus.met"
    return((PPTREE) -1) ;
#line 2085 "cplus.met"

#line 2085 "cplus.met"
const_or_volatile_ret :
#line 2085 "cplus.met"
    
#line 2085 "cplus.met"
    _Debug = TRACE_RULE("const_or_volatile",TRACE_RETURN,_retValue);
#line 2085 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2085 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 2085 "cplus.met"
    return _retValue ;
#line 2085 "cplus.met"
}
#line 2085 "cplus.met"

#line 2085 "cplus.met"
#line 3017 "cplus.met"
PPTREE cplus::constan ( int error_free)
#line 3017 "cplus.met"
{
#line 3017 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 3017 "cplus.met"
    int _value,_nbPre = 0 ;
#line 3017 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 3017 "cplus.met"
    int _Debug = TRACE_RULE("constan",TRACE_ENTER,(PPTREE)0);
#line 3017 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 3017 "cplus.met"
#line 3018 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3018 "cplus.met"
    switch( lexEl.Value) {
#line 3018 "cplus.met"
#line 3019 "cplus.met"
        case META : 
#line 3019 "cplus.met"
        case INTEGER : 
#line 3019 "cplus.met"
#line 3019 "cplus.met"
            {
#line 3019 "cplus.met"
                PPTREE _ptTree0=0;
#line 3019 "cplus.met"
                {
#line 3019 "cplus.met"
                    PPTREE _ptTree1=0,_ptRes1=0;
#line 3019 "cplus.met"
                    _ptRes1= MakeTree(INTEGER, 1);
#line 3019 "cplus.met"
                    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3019 "cplus.met"
                    if ( ! TERM_OR_META(INTEGER,"INTEGER") || !(BUILD_TERM_META(_ptTree1))) {
#line 3019 "cplus.met"
                        MulFreeTree(3,_ptRes1,_ptTree1,_ptTree0);
                        TOKEN_EXIT(constan_exit,"INTEGER")
#line 3019 "cplus.met"
                    } else {
#line 3019 "cplus.met"
                        tokenAhead = 0 ;
#line 3019 "cplus.met"
                    }
#line 3019 "cplus.met"
                    ReplaceTree(_ptRes1, 1, _ptTree1);
#line 3019 "cplus.met"
                    _ptTree0=_ptRes1;
#line 3019 "cplus.met"
                }
#line 3019 "cplus.met"
                _retValue =_ptTree0;
#line 3019 "cplus.met"
                goto constan_ret;
#line 3019 "cplus.met"
            }
#line 3019 "cplus.met"
            break;
#line 3019 "cplus.met"
#line 3020 "cplus.met"
        case LINTEGER : 
#line 3020 "cplus.met"
#line 3020 "cplus.met"
            {
#line 3020 "cplus.met"
                PPTREE _ptTree0=0;
#line 3020 "cplus.met"
                {
#line 3020 "cplus.met"
                    PPTREE _ptTree1=0,_ptRes1=0;
#line 3020 "cplus.met"
                    _ptRes1= MakeTree(ILONG, 1);
#line 3020 "cplus.met"
                    {
#line 3020 "cplus.met"
                        PPTREE _ptTree2=0,_ptRes2=0;
#line 3020 "cplus.met"
                        _ptRes2= MakeTree(INTEGER, 1);
#line 3020 "cplus.met"
                        (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3020 "cplus.met"
                        if ( ! TERM_OR_META(LINTEGER,"LINTEGER") || !(BUILD_TERM_META(_ptTree2))) {
#line 3020 "cplus.met"
                            MulFreeTree(5,_ptRes2,_ptTree2,_ptRes1,_ptTree1,_ptTree0);
                            TOKEN_EXIT(constan_exit,"LINTEGER")
#line 3020 "cplus.met"
                        } else {
#line 3020 "cplus.met"
                            tokenAhead = 0 ;
#line 3020 "cplus.met"
                        }
#line 3020 "cplus.met"
                        ReplaceTree(_ptRes2, 1, _ptTree2);
#line 3020 "cplus.met"
                        _ptTree1=_ptRes2;
#line 3020 "cplus.met"
                    }
#line 3020 "cplus.met"
                    ReplaceTree(_ptRes1, 1, _ptTree1);
#line 3020 "cplus.met"
                    _ptTree0=_ptRes1;
#line 3020 "cplus.met"
                }
#line 3020 "cplus.met"
                _retValue =_ptTree0;
#line 3020 "cplus.met"
                goto constan_ret;
#line 3020 "cplus.met"
            }
#line 3020 "cplus.met"
            break;
#line 3020 "cplus.met"
#line 3021 "cplus.met"
        case LLINTEGER : 
#line 3021 "cplus.met"
#line 3021 "cplus.met"
            {
#line 3021 "cplus.met"
                PPTREE _ptTree0=0;
#line 3021 "cplus.met"
                {
#line 3021 "cplus.met"
                    PPTREE _ptTree1=0,_ptRes1=0;
#line 3021 "cplus.met"
                    _ptRes1= MakeTree(ILONGLONG, 1);
#line 3021 "cplus.met"
                    {
#line 3021 "cplus.met"
                        PPTREE _ptTree2=0,_ptRes2=0;
#line 3021 "cplus.met"
                        _ptRes2= MakeTree(INTEGER, 1);
#line 3021 "cplus.met"
                        (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3021 "cplus.met"
                        if ( ! TERM_OR_META(LINTEGER,"LINTEGER") || !(BUILD_TERM_META(_ptTree2))) {
#line 3021 "cplus.met"
                            MulFreeTree(5,_ptRes2,_ptTree2,_ptRes1,_ptTree1,_ptTree0);
                            TOKEN_EXIT(constan_exit,"LINTEGER")
#line 3021 "cplus.met"
                        } else {
#line 3021 "cplus.met"
                            tokenAhead = 0 ;
#line 3021 "cplus.met"
                        }
#line 3021 "cplus.met"
                        ReplaceTree(_ptRes2, 1, _ptTree2);
#line 3021 "cplus.met"
                        _ptTree1=_ptRes2;
#line 3021 "cplus.met"
                    }
#line 3021 "cplus.met"
                    ReplaceTree(_ptRes1, 1, _ptTree1);
#line 3021 "cplus.met"
                    _ptTree0=_ptRes1;
#line 3021 "cplus.met"
                }
#line 3021 "cplus.met"
                _retValue =_ptTree0;
#line 3021 "cplus.met"
                goto constan_ret;
#line 3021 "cplus.met"
            }
#line 3021 "cplus.met"
            break;
#line 3021 "cplus.met"
#line 3022 "cplus.met"
        case UINTEGER : 
#line 3022 "cplus.met"
#line 3022 "cplus.met"
            {
#line 3022 "cplus.met"
                PPTREE _ptTree0=0;
#line 3022 "cplus.met"
                {
#line 3022 "cplus.met"
                    PPTREE _ptTree1=0,_ptRes1=0;
#line 3022 "cplus.met"
                    _ptRes1= MakeTree(IUN, 1);
#line 3022 "cplus.met"
                    {
#line 3022 "cplus.met"
                        PPTREE _ptTree2=0,_ptRes2=0;
#line 3022 "cplus.met"
                        _ptRes2= MakeTree(INTEGER, 1);
#line 3022 "cplus.met"
                        (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3022 "cplus.met"
                        if ( ! TERM_OR_META(UINTEGER,"UINTEGER") || !(BUILD_TERM_META(_ptTree2))) {
#line 3022 "cplus.met"
                            MulFreeTree(5,_ptRes2,_ptTree2,_ptRes1,_ptTree1,_ptTree0);
                            TOKEN_EXIT(constan_exit,"UINTEGER")
#line 3022 "cplus.met"
                        } else {
#line 3022 "cplus.met"
                            tokenAhead = 0 ;
#line 3022 "cplus.met"
                        }
#line 3022 "cplus.met"
                        ReplaceTree(_ptRes2, 1, _ptTree2);
#line 3022 "cplus.met"
                        _ptTree1=_ptRes2;
#line 3022 "cplus.met"
                    }
#line 3022 "cplus.met"
                    ReplaceTree(_ptRes1, 1, _ptTree1);
#line 3022 "cplus.met"
                    _ptTree0=_ptRes1;
#line 3022 "cplus.met"
                }
#line 3022 "cplus.met"
                _retValue =_ptTree0;
#line 3022 "cplus.met"
                goto constan_ret;
#line 3022 "cplus.met"
            }
#line 3022 "cplus.met"
            break;
#line 3022 "cplus.met"
#line 3023 "cplus.met"
        case ULINTEGER : 
#line 3023 "cplus.met"
#line 3023 "cplus.met"
            {
#line 3023 "cplus.met"
                PPTREE _ptTree0=0;
#line 3023 "cplus.met"
                {
#line 3023 "cplus.met"
                    PPTREE _ptTree1=0,_ptRes1=0;
#line 3023 "cplus.met"
                    _ptRes1= MakeTree(IUNLONG, 1);
#line 3023 "cplus.met"
                    {
#line 3023 "cplus.met"
                        PPTREE _ptTree2=0,_ptRes2=0;
#line 3023 "cplus.met"
                        _ptRes2= MakeTree(INTEGER, 1);
#line 3023 "cplus.met"
                        (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3023 "cplus.met"
                        if ( ! TERM_OR_META(ULINTEGER,"ULINTEGER") || !(BUILD_TERM_META(_ptTree2))) {
#line 3023 "cplus.met"
                            MulFreeTree(5,_ptRes2,_ptTree2,_ptRes1,_ptTree1,_ptTree0);
                            TOKEN_EXIT(constan_exit,"ULINTEGER")
#line 3023 "cplus.met"
                        } else {
#line 3023 "cplus.met"
                            tokenAhead = 0 ;
#line 3023 "cplus.met"
                        }
#line 3023 "cplus.met"
                        ReplaceTree(_ptRes2, 1, _ptTree2);
#line 3023 "cplus.met"
                        _ptTree1=_ptRes2;
#line 3023 "cplus.met"
                    }
#line 3023 "cplus.met"
                    ReplaceTree(_ptRes1, 1, _ptTree1);
#line 3023 "cplus.met"
                    _ptTree0=_ptRes1;
#line 3023 "cplus.met"
                }
#line 3023 "cplus.met"
                _retValue =_ptTree0;
#line 3023 "cplus.met"
                goto constan_ret;
#line 3023 "cplus.met"
            }
#line 3023 "cplus.met"
            break;
#line 3023 "cplus.met"
#line 3024 "cplus.met"
        case ULLINTEGER : 
#line 3024 "cplus.met"
#line 3024 "cplus.met"
            {
#line 3024 "cplus.met"
                PPTREE _ptTree0=0;
#line 3024 "cplus.met"
                {
#line 3024 "cplus.met"
                    PPTREE _ptTree1=0,_ptRes1=0;
#line 3024 "cplus.met"
                    _ptRes1= MakeTree(IUNLONGLONG, 1);
#line 3024 "cplus.met"
                    {
#line 3024 "cplus.met"
                        PPTREE _ptTree2=0,_ptRes2=0;
#line 3024 "cplus.met"
                        _ptRes2= MakeTree(INTEGER, 1);
#line 3024 "cplus.met"
                        (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3024 "cplus.met"
                        if ( ! TERM_OR_META(ULINTEGER,"ULINTEGER") || !(BUILD_TERM_META(_ptTree2))) {
#line 3024 "cplus.met"
                            MulFreeTree(5,_ptRes2,_ptTree2,_ptRes1,_ptTree1,_ptTree0);
                            TOKEN_EXIT(constan_exit,"ULINTEGER")
#line 3024 "cplus.met"
                        } else {
#line 3024 "cplus.met"
                            tokenAhead = 0 ;
#line 3024 "cplus.met"
                        }
#line 3024 "cplus.met"
                        ReplaceTree(_ptRes2, 1, _ptTree2);
#line 3024 "cplus.met"
                        _ptTree1=_ptRes2;
#line 3024 "cplus.met"
                    }
#line 3024 "cplus.met"
                    ReplaceTree(_ptRes1, 1, _ptTree1);
#line 3024 "cplus.met"
                    _ptTree0=_ptRes1;
#line 3024 "cplus.met"
                }
#line 3024 "cplus.met"
                _retValue =_ptTree0;
#line 3024 "cplus.met"
                goto constan_ret;
#line 3024 "cplus.met"
            }
#line 3024 "cplus.met"
            break;
#line 3024 "cplus.met"
#line 3025 "cplus.met"
        case HEXA : 
#line 3025 "cplus.met"
#line 3025 "cplus.met"
            {
#line 3025 "cplus.met"
                PPTREE _ptTree0=0;
#line 3025 "cplus.met"
                {
#line 3025 "cplus.met"
                    PPTREE _ptTree1=0,_ptRes1=0;
#line 3025 "cplus.met"
                    _ptRes1= MakeTree(HEXA, 1);
#line 3025 "cplus.met"
                    {
#line 3025 "cplus.met"
                        PPTREE _ptTree2=0,_ptRes2=0;
#line 3025 "cplus.met"
                        _ptRes2= MakeTree(INTEGER, 1);
#line 3025 "cplus.met"
                        (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3025 "cplus.met"
                        if ( ! TERM_OR_META(HEXA,"HEXA") || !(BUILD_TERM_META(_ptTree2))) {
#line 3025 "cplus.met"
                            MulFreeTree(5,_ptRes2,_ptTree2,_ptRes1,_ptTree1,_ptTree0);
                            TOKEN_EXIT(constan_exit,"HEXA")
#line 3025 "cplus.met"
                        } else {
#line 3025 "cplus.met"
                            tokenAhead = 0 ;
#line 3025 "cplus.met"
                        }
#line 3025 "cplus.met"
                        ReplaceTree(_ptRes2, 1, _ptTree2);
#line 3025 "cplus.met"
                        _ptTree1=_ptRes2;
#line 3025 "cplus.met"
                    }
#line 3025 "cplus.met"
                    ReplaceTree(_ptRes1, 1, _ptTree1);
#line 3025 "cplus.met"
                    _ptTree0=_ptRes1;
#line 3025 "cplus.met"
                }
#line 3025 "cplus.met"
                _retValue =_ptTree0;
#line 3025 "cplus.met"
                goto constan_ret;
#line 3025 "cplus.met"
            }
#line 3025 "cplus.met"
            break;
#line 3025 "cplus.met"
#line 3026 "cplus.met"
        case LHEXA : 
#line 3026 "cplus.met"
#line 3026 "cplus.met"
            {
#line 3026 "cplus.met"
                PPTREE _ptTree0=0;
#line 3026 "cplus.met"
                {
#line 3026 "cplus.met"
                    PPTREE _ptTree1=0,_ptRes1=0;
#line 3026 "cplus.met"
                    _ptRes1= MakeTree(LONG, 1);
#line 3026 "cplus.met"
                    {
#line 3026 "cplus.met"
                        PPTREE _ptTree2=0,_ptRes2=0;
#line 3026 "cplus.met"
                        _ptRes2= MakeTree(HEXA, 1);
#line 3026 "cplus.met"
                        {
#line 3026 "cplus.met"
                            PPTREE _ptTree3=0,_ptRes3=0;
#line 3026 "cplus.met"
                            _ptRes3= MakeTree(INTEGER, 1);
#line 3026 "cplus.met"
                            (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3026 "cplus.met"
                            if ( ! TERM_OR_META(LHEXA,"LHEXA") || !(BUILD_TERM_META(_ptTree3))) {
#line 3026 "cplus.met"
                                MulFreeTree(7,_ptRes3,_ptTree3,_ptRes2,_ptTree2,_ptRes1,_ptTree1,_ptTree0);
                                TOKEN_EXIT(constan_exit,"LHEXA")
#line 3026 "cplus.met"
                            } else {
#line 3026 "cplus.met"
                                tokenAhead = 0 ;
#line 3026 "cplus.met"
                            }
#line 3026 "cplus.met"
                            ReplaceTree(_ptRes3, 1, _ptTree3);
#line 3026 "cplus.met"
                            _ptTree2=_ptRes3;
#line 3026 "cplus.met"
                        }
#line 3026 "cplus.met"
                        ReplaceTree(_ptRes2, 1, _ptTree2);
#line 3026 "cplus.met"
                        _ptTree1=_ptRes2;
#line 3026 "cplus.met"
                    }
#line 3026 "cplus.met"
                    ReplaceTree(_ptRes1, 1, _ptTree1);
#line 3026 "cplus.met"
                    _ptTree0=_ptRes1;
#line 3026 "cplus.met"
                }
#line 3026 "cplus.met"
                _retValue =_ptTree0;
#line 3026 "cplus.met"
                goto constan_ret;
#line 3026 "cplus.met"
            }
#line 3026 "cplus.met"
            break;
#line 3026 "cplus.met"
#line 3027 "cplus.met"
        case LLHEXA : 
#line 3027 "cplus.met"
#line 3027 "cplus.met"
            {
#line 3027 "cplus.met"
                PPTREE _ptTree0=0;
#line 3027 "cplus.met"
                {
#line 3027 "cplus.met"
                    PPTREE _ptTree1=0,_ptRes1=0;
#line 3027 "cplus.met"
                    _ptRes1= MakeTree(LONGLONG, 1);
#line 3027 "cplus.met"
                    {
#line 3027 "cplus.met"
                        PPTREE _ptTree2=0,_ptRes2=0;
#line 3027 "cplus.met"
                        _ptRes2= MakeTree(HEXA, 1);
#line 3027 "cplus.met"
                        {
#line 3027 "cplus.met"
                            PPTREE _ptTree3=0,_ptRes3=0;
#line 3027 "cplus.met"
                            _ptRes3= MakeTree(INTEGER, 1);
#line 3027 "cplus.met"
                            (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3027 "cplus.met"
                            if ( ! TERM_OR_META(LHEXA,"LHEXA") || !(BUILD_TERM_META(_ptTree3))) {
#line 3027 "cplus.met"
                                MulFreeTree(7,_ptRes3,_ptTree3,_ptRes2,_ptTree2,_ptRes1,_ptTree1,_ptTree0);
                                TOKEN_EXIT(constan_exit,"LHEXA")
#line 3027 "cplus.met"
                            } else {
#line 3027 "cplus.met"
                                tokenAhead = 0 ;
#line 3027 "cplus.met"
                            }
#line 3027 "cplus.met"
                            ReplaceTree(_ptRes3, 1, _ptTree3);
#line 3027 "cplus.met"
                            _ptTree2=_ptRes3;
#line 3027 "cplus.met"
                        }
#line 3027 "cplus.met"
                        ReplaceTree(_ptRes2, 1, _ptTree2);
#line 3027 "cplus.met"
                        _ptTree1=_ptRes2;
#line 3027 "cplus.met"
                    }
#line 3027 "cplus.met"
                    ReplaceTree(_ptRes1, 1, _ptTree1);
#line 3027 "cplus.met"
                    _ptTree0=_ptRes1;
#line 3027 "cplus.met"
                }
#line 3027 "cplus.met"
                _retValue =_ptTree0;
#line 3027 "cplus.met"
                goto constan_ret;
#line 3027 "cplus.met"
            }
#line 3027 "cplus.met"
            break;
#line 3027 "cplus.met"
#line 3028 "cplus.met"
        case UHEXA : 
#line 3028 "cplus.met"
#line 3028 "cplus.met"
            {
#line 3028 "cplus.met"
                PPTREE _ptTree0=0;
#line 3028 "cplus.met"
                {
#line 3028 "cplus.met"
                    PPTREE _ptTree1=0,_ptRes1=0;
#line 3028 "cplus.met"
                    _ptRes1= MakeTree(IUN, 1);
#line 3028 "cplus.met"
                    {
#line 3028 "cplus.met"
                        PPTREE _ptTree2=0,_ptRes2=0;
#line 3028 "cplus.met"
                        _ptRes2= MakeTree(HEXA, 1);
#line 3028 "cplus.met"
                        {
#line 3028 "cplus.met"
                            PPTREE _ptTree3=0,_ptRes3=0;
#line 3028 "cplus.met"
                            _ptRes3= MakeTree(INTEGER, 1);
#line 3028 "cplus.met"
                            (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3028 "cplus.met"
                            if ( ! TERM_OR_META(UHEXA,"UHEXA") || !(BUILD_TERM_META(_ptTree3))) {
#line 3028 "cplus.met"
                                MulFreeTree(7,_ptRes3,_ptTree3,_ptRes2,_ptTree2,_ptRes1,_ptTree1,_ptTree0);
                                TOKEN_EXIT(constan_exit,"UHEXA")
#line 3028 "cplus.met"
                            } else {
#line 3028 "cplus.met"
                                tokenAhead = 0 ;
#line 3028 "cplus.met"
                            }
#line 3028 "cplus.met"
                            ReplaceTree(_ptRes3, 1, _ptTree3);
#line 3028 "cplus.met"
                            _ptTree2=_ptRes3;
#line 3028 "cplus.met"
                        }
#line 3028 "cplus.met"
                        ReplaceTree(_ptRes2, 1, _ptTree2);
#line 3028 "cplus.met"
                        _ptTree1=_ptRes2;
#line 3028 "cplus.met"
                    }
#line 3028 "cplus.met"
                    ReplaceTree(_ptRes1, 1, _ptTree1);
#line 3028 "cplus.met"
                    _ptTree0=_ptRes1;
#line 3028 "cplus.met"
                }
#line 3028 "cplus.met"
                _retValue =_ptTree0;
#line 3028 "cplus.met"
                goto constan_ret;
#line 3028 "cplus.met"
            }
#line 3028 "cplus.met"
            break;
#line 3028 "cplus.met"
#line 3029 "cplus.met"
        case ULHEXA : 
#line 3029 "cplus.met"
#line 3029 "cplus.met"
            {
#line 3029 "cplus.met"
                PPTREE _ptTree0=0;
#line 3029 "cplus.met"
                {
#line 3029 "cplus.met"
                    PPTREE _ptTree1=0,_ptRes1=0;
#line 3029 "cplus.met"
                    _ptRes1= MakeTree(IUNLONG, 1);
#line 3029 "cplus.met"
                    {
#line 3029 "cplus.met"
                        PPTREE _ptTree2=0,_ptRes2=0;
#line 3029 "cplus.met"
                        _ptRes2= MakeTree(HEXA, 1);
#line 3029 "cplus.met"
                        {
#line 3029 "cplus.met"
                            PPTREE _ptTree3=0,_ptRes3=0;
#line 3029 "cplus.met"
                            _ptRes3= MakeTree(INTEGER, 1);
#line 3029 "cplus.met"
                            (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3029 "cplus.met"
                            if ( ! TERM_OR_META(ULHEXA,"ULHEXA") || !(BUILD_TERM_META(_ptTree3))) {
#line 3029 "cplus.met"
                                MulFreeTree(7,_ptRes3,_ptTree3,_ptRes2,_ptTree2,_ptRes1,_ptTree1,_ptTree0);
                                TOKEN_EXIT(constan_exit,"ULHEXA")
#line 3029 "cplus.met"
                            } else {
#line 3029 "cplus.met"
                                tokenAhead = 0 ;
#line 3029 "cplus.met"
                            }
#line 3029 "cplus.met"
                            ReplaceTree(_ptRes3, 1, _ptTree3);
#line 3029 "cplus.met"
                            _ptTree2=_ptRes3;
#line 3029 "cplus.met"
                        }
#line 3029 "cplus.met"
                        ReplaceTree(_ptRes2, 1, _ptTree2);
#line 3029 "cplus.met"
                        _ptTree1=_ptRes2;
#line 3029 "cplus.met"
                    }
#line 3029 "cplus.met"
                    ReplaceTree(_ptRes1, 1, _ptTree1);
#line 3029 "cplus.met"
                    _ptTree0=_ptRes1;
#line 3029 "cplus.met"
                }
#line 3029 "cplus.met"
                _retValue =_ptTree0;
#line 3029 "cplus.met"
                goto constan_ret;
#line 3029 "cplus.met"
            }
#line 3029 "cplus.met"
            break;
#line 3029 "cplus.met"
#line 3030 "cplus.met"
        case ULLHEXA : 
#line 3030 "cplus.met"
#line 3030 "cplus.met"
            {
#line 3030 "cplus.met"
                PPTREE _ptTree0=0;
#line 3030 "cplus.met"
                {
#line 3030 "cplus.met"
                    PPTREE _ptTree1=0,_ptRes1=0;
#line 3030 "cplus.met"
                    _ptRes1= MakeTree(IUNLONGLONG, 1);
#line 3030 "cplus.met"
                    {
#line 3030 "cplus.met"
                        PPTREE _ptTree2=0,_ptRes2=0;
#line 3030 "cplus.met"
                        _ptRes2= MakeTree(HEXA, 1);
#line 3030 "cplus.met"
                        {
#line 3030 "cplus.met"
                            PPTREE _ptTree3=0,_ptRes3=0;
#line 3030 "cplus.met"
                            _ptRes3= MakeTree(INTEGER, 1);
#line 3030 "cplus.met"
                            (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3030 "cplus.met"
                            if ( ! TERM_OR_META(ULHEXA,"ULHEXA") || !(BUILD_TERM_META(_ptTree3))) {
#line 3030 "cplus.met"
                                MulFreeTree(7,_ptRes3,_ptTree3,_ptRes2,_ptTree2,_ptRes1,_ptTree1,_ptTree0);
                                TOKEN_EXIT(constan_exit,"ULHEXA")
#line 3030 "cplus.met"
                            } else {
#line 3030 "cplus.met"
                                tokenAhead = 0 ;
#line 3030 "cplus.met"
                            }
#line 3030 "cplus.met"
                            ReplaceTree(_ptRes3, 1, _ptTree3);
#line 3030 "cplus.met"
                            _ptTree2=_ptRes3;
#line 3030 "cplus.met"
                        }
#line 3030 "cplus.met"
                        ReplaceTree(_ptRes2, 1, _ptTree2);
#line 3030 "cplus.met"
                        _ptTree1=_ptRes2;
#line 3030 "cplus.met"
                    }
#line 3030 "cplus.met"
                    ReplaceTree(_ptRes1, 1, _ptTree1);
#line 3030 "cplus.met"
                    _ptTree0=_ptRes1;
#line 3030 "cplus.met"
                }
#line 3030 "cplus.met"
                _retValue =_ptTree0;
#line 3030 "cplus.met"
                goto constan_ret;
#line 3030 "cplus.met"
            }
#line 3030 "cplus.met"
            break;
#line 3030 "cplus.met"
#line 3031 "cplus.met"
        case OCTAL : 
#line 3031 "cplus.met"
#line 3031 "cplus.met"
            {
#line 3031 "cplus.met"
                PPTREE _ptTree0=0;
#line 3031 "cplus.met"
                {
#line 3031 "cplus.met"
                    PPTREE _ptTree1=0,_ptRes1=0;
#line 3031 "cplus.met"
                    _ptRes1= MakeTree(OCTAL, 1);
#line 3031 "cplus.met"
                    {
#line 3031 "cplus.met"
                        PPTREE _ptTree2=0,_ptRes2=0;
#line 3031 "cplus.met"
                        _ptRes2= MakeTree(INTEGER, 1);
#line 3031 "cplus.met"
                        (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3031 "cplus.met"
                        if ( ! TERM_OR_META(OCTAL,"OCTAL") || !(BUILD_TERM_META(_ptTree2))) {
#line 3031 "cplus.met"
                            MulFreeTree(5,_ptRes2,_ptTree2,_ptRes1,_ptTree1,_ptTree0);
                            TOKEN_EXIT(constan_exit,"OCTAL")
#line 3031 "cplus.met"
                        } else {
#line 3031 "cplus.met"
                            tokenAhead = 0 ;
#line 3031 "cplus.met"
                        }
#line 3031 "cplus.met"
                        ReplaceTree(_ptRes2, 1, _ptTree2);
#line 3031 "cplus.met"
                        _ptTree1=_ptRes2;
#line 3031 "cplus.met"
                    }
#line 3031 "cplus.met"
                    ReplaceTree(_ptRes1, 1, _ptTree1);
#line 3031 "cplus.met"
                    _ptTree0=_ptRes1;
#line 3031 "cplus.met"
                }
#line 3031 "cplus.met"
                _retValue =_ptTree0;
#line 3031 "cplus.met"
                goto constan_ret;
#line 3031 "cplus.met"
            }
#line 3031 "cplus.met"
            break;
#line 3031 "cplus.met"
#line 3032 "cplus.met"
        case LOCTAL : 
#line 3032 "cplus.met"
#line 3032 "cplus.met"
            {
#line 3032 "cplus.met"
                PPTREE _ptTree0=0;
#line 3032 "cplus.met"
                {
#line 3032 "cplus.met"
                    PPTREE _ptTree1=0,_ptRes1=0;
#line 3032 "cplus.met"
                    _ptRes1= MakeTree(ILONG, 1);
#line 3032 "cplus.met"
                    {
#line 3032 "cplus.met"
                        PPTREE _ptTree2=0,_ptRes2=0;
#line 3032 "cplus.met"
                        _ptRes2= MakeTree(OCTAL, 1);
#line 3032 "cplus.met"
                        {
#line 3032 "cplus.met"
                            PPTREE _ptTree3=0,_ptRes3=0;
#line 3032 "cplus.met"
                            _ptRes3= MakeTree(INTEGER, 1);
#line 3032 "cplus.met"
                            (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3032 "cplus.met"
                            if ( ! TERM_OR_META(LOCTAL,"LOCTAL") || !(BUILD_TERM_META(_ptTree3))) {
#line 3032 "cplus.met"
                                MulFreeTree(7,_ptRes3,_ptTree3,_ptRes2,_ptTree2,_ptRes1,_ptTree1,_ptTree0);
                                TOKEN_EXIT(constan_exit,"LOCTAL")
#line 3032 "cplus.met"
                            } else {
#line 3032 "cplus.met"
                                tokenAhead = 0 ;
#line 3032 "cplus.met"
                            }
#line 3032 "cplus.met"
                            ReplaceTree(_ptRes3, 1, _ptTree3);
#line 3032 "cplus.met"
                            _ptTree2=_ptRes3;
#line 3032 "cplus.met"
                        }
#line 3032 "cplus.met"
                        ReplaceTree(_ptRes2, 1, _ptTree2);
#line 3032 "cplus.met"
                        _ptTree1=_ptRes2;
#line 3032 "cplus.met"
                    }
#line 3032 "cplus.met"
                    ReplaceTree(_ptRes1, 1, _ptTree1);
#line 3032 "cplus.met"
                    _ptTree0=_ptRes1;
#line 3032 "cplus.met"
                }
#line 3032 "cplus.met"
                _retValue =_ptTree0;
#line 3032 "cplus.met"
                goto constan_ret;
#line 3032 "cplus.met"
            }
#line 3032 "cplus.met"
            break;
#line 3032 "cplus.met"
#line 3033 "cplus.met"
        case LLOCTAL : 
#line 3033 "cplus.met"
#line 3033 "cplus.met"
            {
#line 3033 "cplus.met"
                PPTREE _ptTree0=0;
#line 3033 "cplus.met"
                {
#line 3033 "cplus.met"
                    PPTREE _ptTree1=0,_ptRes1=0;
#line 3033 "cplus.met"
                    _ptRes1= MakeTree(ILONGLONG, 1);
#line 3033 "cplus.met"
                    {
#line 3033 "cplus.met"
                        PPTREE _ptTree2=0,_ptRes2=0;
#line 3033 "cplus.met"
                        _ptRes2= MakeTree(OCTAL, 1);
#line 3033 "cplus.met"
                        {
#line 3033 "cplus.met"
                            PPTREE _ptTree3=0,_ptRes3=0;
#line 3033 "cplus.met"
                            _ptRes3= MakeTree(INTEGER, 1);
#line 3033 "cplus.met"
                            (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3033 "cplus.met"
                            if ( ! TERM_OR_META(LOCTAL,"LOCTAL") || !(BUILD_TERM_META(_ptTree3))) {
#line 3033 "cplus.met"
                                MulFreeTree(7,_ptRes3,_ptTree3,_ptRes2,_ptTree2,_ptRes1,_ptTree1,_ptTree0);
                                TOKEN_EXIT(constan_exit,"LOCTAL")
#line 3033 "cplus.met"
                            } else {
#line 3033 "cplus.met"
                                tokenAhead = 0 ;
#line 3033 "cplus.met"
                            }
#line 3033 "cplus.met"
                            ReplaceTree(_ptRes3, 1, _ptTree3);
#line 3033 "cplus.met"
                            _ptTree2=_ptRes3;
#line 3033 "cplus.met"
                        }
#line 3033 "cplus.met"
                        ReplaceTree(_ptRes2, 1, _ptTree2);
#line 3033 "cplus.met"
                        _ptTree1=_ptRes2;
#line 3033 "cplus.met"
                    }
#line 3033 "cplus.met"
                    ReplaceTree(_ptRes1, 1, _ptTree1);
#line 3033 "cplus.met"
                    _ptTree0=_ptRes1;
#line 3033 "cplus.met"
                }
#line 3033 "cplus.met"
                _retValue =_ptTree0;
#line 3033 "cplus.met"
                goto constan_ret;
#line 3033 "cplus.met"
            }
#line 3033 "cplus.met"
            break;
#line 3033 "cplus.met"
#line 3034 "cplus.met"
        case UOCTAL : 
#line 3034 "cplus.met"
#line 3034 "cplus.met"
            {
#line 3034 "cplus.met"
                PPTREE _ptTree0=0;
#line 3034 "cplus.met"
                {
#line 3034 "cplus.met"
                    PPTREE _ptTree1=0,_ptRes1=0;
#line 3034 "cplus.met"
                    _ptRes1= MakeTree(IUN, 1);
#line 3034 "cplus.met"
                    {
#line 3034 "cplus.met"
                        PPTREE _ptTree2=0,_ptRes2=0;
#line 3034 "cplus.met"
                        _ptRes2= MakeTree(OCTAL, 1);
#line 3034 "cplus.met"
                        {
#line 3034 "cplus.met"
                            PPTREE _ptTree3=0,_ptRes3=0;
#line 3034 "cplus.met"
                            _ptRes3= MakeTree(INTEGER, 1);
#line 3034 "cplus.met"
                            (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3034 "cplus.met"
                            if ( ! TERM_OR_META(UOCTAL,"UOCTAL") || !(BUILD_TERM_META(_ptTree3))) {
#line 3034 "cplus.met"
                                MulFreeTree(7,_ptRes3,_ptTree3,_ptRes2,_ptTree2,_ptRes1,_ptTree1,_ptTree0);
                                TOKEN_EXIT(constan_exit,"UOCTAL")
#line 3034 "cplus.met"
                            } else {
#line 3034 "cplus.met"
                                tokenAhead = 0 ;
#line 3034 "cplus.met"
                            }
#line 3034 "cplus.met"
                            ReplaceTree(_ptRes3, 1, _ptTree3);
#line 3034 "cplus.met"
                            _ptTree2=_ptRes3;
#line 3034 "cplus.met"
                        }
#line 3034 "cplus.met"
                        ReplaceTree(_ptRes2, 1, _ptTree2);
#line 3034 "cplus.met"
                        _ptTree1=_ptRes2;
#line 3034 "cplus.met"
                    }
#line 3034 "cplus.met"
                    ReplaceTree(_ptRes1, 1, _ptTree1);
#line 3034 "cplus.met"
                    _ptTree0=_ptRes1;
#line 3034 "cplus.met"
                }
#line 3034 "cplus.met"
                _retValue =_ptTree0;
#line 3034 "cplus.met"
                goto constan_ret;
#line 3034 "cplus.met"
            }
#line 3034 "cplus.met"
            break;
#line 3034 "cplus.met"
#line 3035 "cplus.met"
        case ULOCTAL : 
#line 3035 "cplus.met"
#line 3035 "cplus.met"
            {
#line 3035 "cplus.met"
                PPTREE _ptTree0=0;
#line 3035 "cplus.met"
                {
#line 3035 "cplus.met"
                    PPTREE _ptTree1=0,_ptRes1=0;
#line 3035 "cplus.met"
                    _ptRes1= MakeTree(IUNLONG, 1);
#line 3035 "cplus.met"
                    {
#line 3035 "cplus.met"
                        PPTREE _ptTree2=0,_ptRes2=0;
#line 3035 "cplus.met"
                        _ptRes2= MakeTree(OCTAL, 1);
#line 3035 "cplus.met"
                        {
#line 3035 "cplus.met"
                            PPTREE _ptTree3=0,_ptRes3=0;
#line 3035 "cplus.met"
                            _ptRes3= MakeTree(INTEGER, 1);
#line 3035 "cplus.met"
                            (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3035 "cplus.met"
                            if ( ! TERM_OR_META(ULOCTAL,"ULOCTAL") || !(BUILD_TERM_META(_ptTree3))) {
#line 3035 "cplus.met"
                                MulFreeTree(7,_ptRes3,_ptTree3,_ptRes2,_ptTree2,_ptRes1,_ptTree1,_ptTree0);
                                TOKEN_EXIT(constan_exit,"ULOCTAL")
#line 3035 "cplus.met"
                            } else {
#line 3035 "cplus.met"
                                tokenAhead = 0 ;
#line 3035 "cplus.met"
                            }
#line 3035 "cplus.met"
                            ReplaceTree(_ptRes3, 1, _ptTree3);
#line 3035 "cplus.met"
                            _ptTree2=_ptRes3;
#line 3035 "cplus.met"
                        }
#line 3035 "cplus.met"
                        ReplaceTree(_ptRes2, 1, _ptTree2);
#line 3035 "cplus.met"
                        _ptTree1=_ptRes2;
#line 3035 "cplus.met"
                    }
#line 3035 "cplus.met"
                    ReplaceTree(_ptRes1, 1, _ptTree1);
#line 3035 "cplus.met"
                    _ptTree0=_ptRes1;
#line 3035 "cplus.met"
                }
#line 3035 "cplus.met"
                _retValue =_ptTree0;
#line 3035 "cplus.met"
                goto constan_ret;
#line 3035 "cplus.met"
            }
#line 3035 "cplus.met"
            break;
#line 3035 "cplus.met"
#line 3036 "cplus.met"
        case ULLOCTAL : 
#line 3036 "cplus.met"
#line 3036 "cplus.met"
            {
#line 3036 "cplus.met"
                PPTREE _ptTree0=0;
#line 3036 "cplus.met"
                {
#line 3036 "cplus.met"
                    PPTREE _ptTree1=0,_ptRes1=0;
#line 3036 "cplus.met"
                    _ptRes1= MakeTree(IUNLONGLONG, 1);
#line 3036 "cplus.met"
                    {
#line 3036 "cplus.met"
                        PPTREE _ptTree2=0,_ptRes2=0;
#line 3036 "cplus.met"
                        _ptRes2= MakeTree(OCTAL, 1);
#line 3036 "cplus.met"
                        {
#line 3036 "cplus.met"
                            PPTREE _ptTree3=0,_ptRes3=0;
#line 3036 "cplus.met"
                            _ptRes3= MakeTree(INTEGER, 1);
#line 3036 "cplus.met"
                            (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3036 "cplus.met"
                            if ( ! TERM_OR_META(ULOCTAL,"ULOCTAL") || !(BUILD_TERM_META(_ptTree3))) {
#line 3036 "cplus.met"
                                MulFreeTree(7,_ptRes3,_ptTree3,_ptRes2,_ptTree2,_ptRes1,_ptTree1,_ptTree0);
                                TOKEN_EXIT(constan_exit,"ULOCTAL")
#line 3036 "cplus.met"
                            } else {
#line 3036 "cplus.met"
                                tokenAhead = 0 ;
#line 3036 "cplus.met"
                            }
#line 3036 "cplus.met"
                            ReplaceTree(_ptRes3, 1, _ptTree3);
#line 3036 "cplus.met"
                            _ptTree2=_ptRes3;
#line 3036 "cplus.met"
                        }
#line 3036 "cplus.met"
                        ReplaceTree(_ptRes2, 1, _ptTree2);
#line 3036 "cplus.met"
                        _ptTree1=_ptRes2;
#line 3036 "cplus.met"
                    }
#line 3036 "cplus.met"
                    ReplaceTree(_ptRes1, 1, _ptTree1);
#line 3036 "cplus.met"
                    _ptTree0=_ptRes1;
#line 3036 "cplus.met"
                }
#line 3036 "cplus.met"
                _retValue =_ptTree0;
#line 3036 "cplus.met"
                goto constan_ret;
#line 3036 "cplus.met"
            }
#line 3036 "cplus.met"
            break;
#line 3036 "cplus.met"
#line 3037 "cplus.met"
        case FLOATVAL : 
#line 3037 "cplus.met"
#line 3037 "cplus.met"
            {
#line 3037 "cplus.met"
                PPTREE _ptTree0=0;
#line 3037 "cplus.met"
                {
#line 3037 "cplus.met"
                    PPTREE _ptTree1=0,_ptRes1=0;
#line 3037 "cplus.met"
                    _ptRes1= MakeTree(FLOAT, 1);
#line 3037 "cplus.met"
                    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3037 "cplus.met"
                    if ( ! TERM_OR_META(FLOATVAL,"FLOATVAL") || !(BUILD_TERM_META(_ptTree1))) {
#line 3037 "cplus.met"
                        MulFreeTree(3,_ptRes1,_ptTree1,_ptTree0);
                        TOKEN_EXIT(constan_exit,"FLOATVAL")
#line 3037 "cplus.met"
                    } else {
#line 3037 "cplus.met"
                        tokenAhead = 0 ;
#line 3037 "cplus.met"
                    }
#line 3037 "cplus.met"
                    ReplaceTree(_ptRes1, 1, _ptTree1);
#line 3037 "cplus.met"
                    _ptTree0=_ptRes1;
#line 3037 "cplus.met"
                }
#line 3037 "cplus.met"
                _retValue =_ptTree0;
#line 3037 "cplus.met"
                goto constan_ret;
#line 3037 "cplus.met"
            }
#line 3037 "cplus.met"
            break;
#line 3037 "cplus.met"
#line 3038 "cplus.met"
        case CHARACT : 
#line 3038 "cplus.met"
#line 3038 "cplus.met"
            {
#line 3038 "cplus.met"
                PPTREE _ptTree0=0;
#line 3038 "cplus.met"
                {
#line 3038 "cplus.met"
                    PPTREE _ptTree1=0,_ptRes1=0;
#line 3038 "cplus.met"
                    _ptRes1= MakeTree(CHAR, 1);
#line 3038 "cplus.met"
                    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3038 "cplus.met"
                    if ( ! TERM_OR_META(CHARACT,"CHARACT") || !(BUILD_TERM_META(_ptTree1))) {
#line 3038 "cplus.met"
                        MulFreeTree(3,_ptRes1,_ptTree1,_ptTree0);
                        TOKEN_EXIT(constan_exit,"CHARACT")
#line 3038 "cplus.met"
                    } else {
#line 3038 "cplus.met"
                        tokenAhead = 0 ;
#line 3038 "cplus.met"
                    }
#line 3038 "cplus.met"
                    ReplaceTree(_ptRes1, 1, _ptTree1);
#line 3038 "cplus.met"
                    _ptTree0=_ptRes1;
#line 3038 "cplus.met"
                }
#line 3038 "cplus.met"
                _retValue =_ptTree0;
#line 3038 "cplus.met"
                goto constan_ret;
#line 3038 "cplus.met"
            }
#line 3038 "cplus.met"
            break;
#line 3038 "cplus.met"
        default :
#line 3038 "cplus.met"
            CASE_EXIT(constan_exit,"either INTEGER or LINTEGER or LLINTEGER or UINTEGER or ULINTEGER or ULLINTEGER or HEXA or LHEXA or LLHEXA or UHEXA or ULHEXA or ULLHEXA or OCTAL or LOCTAL or LLOCTAL or UOCTAL or ULOCTAL or ULLOCTAL or FLOATVAL or CHARACT")
#line 3038 "cplus.met"
            break;
#line 3038 "cplus.met"
    }
#line 3038 "cplus.met"
#line 3038 "cplus.met"
#line 3039 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 3039 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 3039 "cplus.met"
return((PPTREE) 0);
#line 3039 "cplus.met"

#line 3039 "cplus.met"
constan_exit :
#line 3039 "cplus.met"

#line 3039 "cplus.met"
    _Debug = TRACE_RULE("constan",TRACE_EXIT,(PPTREE)0);
#line 3039 "cplus.met"
    _funcLevel--;
#line 3039 "cplus.met"
    return((PPTREE) -1) ;
#line 3039 "cplus.met"

#line 3039 "cplus.met"
constan_ret :
#line 3039 "cplus.met"
    
#line 3039 "cplus.met"
    _Debug = TRACE_RULE("constan",TRACE_RETURN,_retValue);
#line 3039 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 3039 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 3039 "cplus.met"
    return _retValue ;
#line 3039 "cplus.met"
}
#line 3039 "cplus.met"

#line 3039 "cplus.met"
