/*************************************************************************/
/*                                                                       */
/*        Produced by MetaGen version 2.0  -    1989-2006                 */
/*       Syntaxic Analyzer Meta Generator developped by                  */
/*                  Eric Lavillonniere                                   */
/*                                                                       */
/*************************************************************************/

#include "token.h"
#include "cplus.h"


#line 2598 "cplus.met"
PPTREE cplus::assignment_expression ( int error_free)
#line 2598 "cplus.met"
{
#line 2598 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 2598 "cplus.met"
    int _value,_nbPre = 0 ;
#line 2598 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 2598 "cplus.met"
    int _Debug = TRACE_RULE("assignment_expression",TRACE_ENTER,(PPTREE)0);
#line 2598 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 2598 "cplus.met"
#line 2598 "cplus.met"
    PPTREE expTree = (PPTREE) 0,expFollow = (PPTREE) 0;
#line 2598 "cplus.met"
#line 2600 "cplus.met"
    if ( (expTree=NQUICK_CALL(_Tak(conditional_expression)(error_free), 30, cplus))== (PPTREE) -1 ) {
#line 2600 "cplus.met"
        MulFreeTree(2,expFollow,expTree);
        PROG_EXIT(assignment_expression_exit,"assignment_expression")
#line 2600 "cplus.met"
    }
#line 2600 "cplus.met"
#line 2601 "cplus.met"
    if (NPUSH_CALL_AFF_VERIF(expFollow = ,_Tak(assignment_end), 16, cplus)){
#line 2601 "cplus.met"
#line 2602 "cplus.met"
#line 2603 "cplus.met"
        ReplaceTree(expFollow ,1 ,expTree );
#line 2603 "cplus.met"
#line 2604 "cplus.met"
        expTree = expFollow ;
#line 2604 "cplus.met"
#line 2604 "cplus.met"
#line 2604 "cplus.met"
    }
#line 2604 "cplus.met"
#line 2606 "cplus.met"
    {
#line 2606 "cplus.met"
        _retValue = expTree ;
#line 2606 "cplus.met"
        goto assignment_expression_ret;
#line 2606 "cplus.met"
        
#line 2606 "cplus.met"
    }
#line 2606 "cplus.met"
#line 2606 "cplus.met"
#line 2606 "cplus.met"

#line 2607 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2607 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 2607 "cplus.met"
return((PPTREE) 0);
#line 2607 "cplus.met"

#line 2607 "cplus.met"
assignment_expression_exit :
#line 2607 "cplus.met"

#line 2607 "cplus.met"
    _Debug = TRACE_RULE("assignment_expression",TRACE_EXIT,(PPTREE)0);
#line 2607 "cplus.met"
    _funcLevel--;
#line 2607 "cplus.met"
    return((PPTREE) -1) ;
#line 2607 "cplus.met"

#line 2607 "cplus.met"
assignment_expression_ret :
#line 2607 "cplus.met"
    
#line 2607 "cplus.met"
    _Debug = TRACE_RULE("assignment_expression",TRACE_RETURN,_retValue);
#line 2607 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2607 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 2607 "cplus.met"
    return _retValue ;
#line 2607 "cplus.met"
}
#line 2607 "cplus.met"

#line 2607 "cplus.met"
#line 2138 "cplus.met"
PPTREE cplus::attribute_call ( int error_free)
#line 2138 "cplus.met"
{
#line 2138 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 2138 "cplus.met"
    int _value,_nbPre = 0 ;
#line 2138 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 2138 "cplus.met"
    int _Debug = TRACE_RULE("attribute_call",TRACE_ENTER,(PPTREE)0);
#line 2138 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 2138 "cplus.met"
#line 2138 "cplus.met"
    PPTREE retTree = (PPTREE) 0;
#line 2138 "cplus.met"
#line 2140 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 2140 "cplus.met"
    if (  !SEE_TOKEN( __ATTRIBUTE__,"__attribute__") || !(CommTerm(),1)) {
#line 2140 "cplus.met"
        MulFreeTree(1,retTree);
        TOKEN_EXIT(attribute_call_exit,"__attribute__")
#line 2140 "cplus.met"
    } else {
#line 2140 "cplus.met"
        tokenAhead = 0 ;
#line 2140 "cplus.met"
    }
#line 2140 "cplus.met"
#line 2141 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 2141 "cplus.met"
    if (  !SEE_TOKEN( POUV,"(") || !(CommTerm(),1)) {
#line 2141 "cplus.met"
        MulFreeTree(1,retTree);
        TOKEN_EXIT(attribute_call_exit,"(")
#line 2141 "cplus.met"
    } else {
#line 2141 "cplus.met"
        tokenAhead = 0 ;
#line 2141 "cplus.met"
    }
#line 2141 "cplus.met"
#line 2142 "cplus.met"
    {
#line 2142 "cplus.met"
        PPTREE _ptTree0=0,_ptRes0=0;
#line 2142 "cplus.met"
        _ptRes0= MakeTree(ATTRIBUTE_CALL, 1);
#line 2142 "cplus.met"
        if ( (_ptTree0=NQUICK_CALL(_Tak(expression)(error_free), 63, cplus))== (PPTREE) -1 ) {
#line 2142 "cplus.met"
            MulFreeTree(3,_ptRes0,_ptTree0,retTree);
            PROG_EXIT(attribute_call_exit,"attribute_call")
#line 2142 "cplus.met"
        }
#line 2142 "cplus.met"
        ReplaceTree(_ptRes0, 1, _ptTree0);
#line 2142 "cplus.met"
        retTree=_ptRes0;
#line 2142 "cplus.met"
    }
#line 2142 "cplus.met"
#line 2143 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 2143 "cplus.met"
    if (  !SEE_TOKEN( PFER,")") || !(CommTerm(),1)) {
#line 2143 "cplus.met"
        MulFreeTree(1,retTree);
        TOKEN_EXIT(attribute_call_exit,")")
#line 2143 "cplus.met"
    } else {
#line 2143 "cplus.met"
        tokenAhead = 0 ;
#line 2143 "cplus.met"
    }
#line 2143 "cplus.met"
#line 2144 "cplus.met"
    {
#line 2144 "cplus.met"
        _retValue = retTree ;
#line 2144 "cplus.met"
        goto attribute_call_ret;
#line 2144 "cplus.met"
        
#line 2144 "cplus.met"
    }
#line 2144 "cplus.met"
#line 2144 "cplus.met"
#line 2144 "cplus.met"

#line 2145 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2145 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 2145 "cplus.met"
return((PPTREE) 0);
#line 2145 "cplus.met"

#line 2145 "cplus.met"
attribute_call_exit :
#line 2145 "cplus.met"

#line 2145 "cplus.met"
    _Debug = TRACE_RULE("attribute_call",TRACE_EXIT,(PPTREE)0);
#line 2145 "cplus.met"
    _funcLevel--;
#line 2145 "cplus.met"
    return((PPTREE) -1) ;
#line 2145 "cplus.met"

#line 2145 "cplus.met"
attribute_call_ret :
#line 2145 "cplus.met"
    
#line 2145 "cplus.met"
    _Debug = TRACE_RULE("attribute_call",TRACE_RETURN,_retValue);
#line 2145 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2145 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 2145 "cplus.met"
    return _retValue ;
#line 2145 "cplus.met"
}
#line 2145 "cplus.met"

#line 2145 "cplus.met"
#line 1846 "cplus.met"
PPTREE cplus::base_specifier ( int error_free)
#line 1846 "cplus.met"
{
#line 1846 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 1846 "cplus.met"
    int _value,_nbPre = 0 ;
#line 1846 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 1846 "cplus.met"
    int _Debug = TRACE_RULE("base_specifier",TRACE_ENTER,(PPTREE)0);
#line 1846 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 1846 "cplus.met"
#line 1846 "cplus.met"
    PPTREE _addlist1 = (PPTREE) 0;
#line 1846 "cplus.met"
#line 1846 "cplus.met"
    PPTREE list = (PPTREE) 0;
#line 1846 "cplus.met"
#line 1846 "cplus.met"
    _addlist1 = list ;
#line 1846 "cplus.met"
#line 1848 "cplus.met"
    do {
#line 1848 "cplus.met"
#line 1849 "cplus.met"
        {
#line 1849 "cplus.met"
            PPTREE _ptTree0=0;
#line 1849 "cplus.met"
            if ( (_ptTree0=NQUICK_CALL(_Tak(base_specifier_elem)(error_free), 20, cplus))== (PPTREE) -1 ) {
#line 1849 "cplus.met"
                MulFreeTree(3,_ptTree0,_addlist1,list);
                PROG_EXIT(base_specifier_exit,"base_specifier")
#line 1849 "cplus.met"
            }
#line 1849 "cplus.met"
            _addlist1 =AddList(_addlist1 , _ptTree0);
#line 1849 "cplus.met"
        }
#line 1849 "cplus.met"
#line 1849 "cplus.met"
        if (list){
#line 1849 "cplus.met"
#line 1849 "cplus.met"
            _addlist1 = SonTree (_addlist1 ,2 );
#line 1849 "cplus.met"
        } else {
#line 1849 "cplus.met"
#line 1849 "cplus.met"
            list = _addlist1 ;
#line 1849 "cplus.met"
        }
#line 1849 "cplus.met"
#line 1849 "cplus.met"
#line 1850 "cplus.met"
    } while ( !(! ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN(VIRG,",") && (tokenAhead = 0,CommTerm(),1)))) ;
#line 1850 "cplus.met"
#line 1851 "cplus.met"
    {
#line 1851 "cplus.met"
        PPTREE _ptTree0=0;
#line 1851 "cplus.met"
        {
#line 1851 "cplus.met"
            PPTREE _ptRes1=0;
#line 1851 "cplus.met"
            _ptRes1= MakeTree(BASE_LIST, 1);
#line 1851 "cplus.met"
            ReplaceTree(_ptRes1, 1, list );
#line 1851 "cplus.met"
            _ptTree0=_ptRes1;
#line 1851 "cplus.met"
        }
#line 1851 "cplus.met"
        _retValue =_ptTree0;
#line 1851 "cplus.met"
        goto base_specifier_ret;
#line 1851 "cplus.met"
    }
#line 1851 "cplus.met"
#line 1851 "cplus.met"
#line 1851 "cplus.met"

#line 1852 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1852 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 1852 "cplus.met"
return((PPTREE) 0);
#line 1852 "cplus.met"

#line 1852 "cplus.met"
base_specifier_exit :
#line 1852 "cplus.met"

#line 1852 "cplus.met"
    _Debug = TRACE_RULE("base_specifier",TRACE_EXIT,(PPTREE)0);
#line 1852 "cplus.met"
    _funcLevel--;
#line 1852 "cplus.met"
    return((PPTREE) -1) ;
#line 1852 "cplus.met"

#line 1852 "cplus.met"
base_specifier_ret :
#line 1852 "cplus.met"
    
#line 1852 "cplus.met"
    _Debug = TRACE_RULE("base_specifier",TRACE_RETURN,_retValue);
#line 1852 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1852 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 1852 "cplus.met"
    return _retValue ;
#line 1852 "cplus.met"
}
#line 1852 "cplus.met"

#line 1852 "cplus.met"
#line 1833 "cplus.met"
PPTREE cplus::base_specifier_elem ( int error_free)
#line 1833 "cplus.met"
{
#line 1833 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 1833 "cplus.met"
    int _value,_nbPre = 0 ;
#line 1833 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 1833 "cplus.met"
    int _Debug = TRACE_RULE("base_specifier_elem",TRACE_ENTER,(PPTREE)0);
#line 1833 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 1833 "cplus.met"
#line 1833 "cplus.met"
    PPTREE ret = (PPTREE) 0;
#line 1833 "cplus.met"
#line 1835 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 1835 "cplus.met"
    switch( lexEl.Value) {
#line 1835 "cplus.met"
#line 1836 "cplus.met"
        case PRIVATE : 
#line 1836 "cplus.met"
            tokenAhead = 0 ;
#line 1836 "cplus.met"
            CommTerm();
#line 1836 "cplus.met"
#line 1836 "cplus.met"
            {
#line 1836 "cplus.met"
                PPTREE _ptTree0=0;
#line 1836 "cplus.met"
                {
#line 1836 "cplus.met"
                    PPTREE _ptTree1=0,_ptRes1=0;
#line 1836 "cplus.met"
                    _ptRes1= MakeTree(PROTECT, 2);
#line 1836 "cplus.met"
                    ReplaceTree(_ptRes1, 1, MakeString ("private"));
#line 1836 "cplus.met"
                    if ( (_ptTree1=NQUICK_CALL(_Tak(base_specifier_elem)(error_free), 20, cplus))== (PPTREE) -1 ) {
#line 1836 "cplus.met"
                        MulFreeTree(4,_ptRes1,_ptTree1,_ptTree0,ret);
                        PROG_EXIT(base_specifier_elem_exit,"base_specifier_elem")
#line 1836 "cplus.met"
                    }
#line 1836 "cplus.met"
                    ReplaceTree(_ptRes1, 2, _ptTree1);
#line 1836 "cplus.met"
                    _ptTree0=_ptRes1;
#line 1836 "cplus.met"
                }
#line 1836 "cplus.met"
                _retValue =_ptTree0;
#line 1836 "cplus.met"
                goto base_specifier_elem_ret;
#line 1836 "cplus.met"
            }
#line 1836 "cplus.met"
            break;
#line 1836 "cplus.met"
#line 1837 "cplus.met"
        case PROTECTED : 
#line 1837 "cplus.met"
            tokenAhead = 0 ;
#line 1837 "cplus.met"
            CommTerm();
#line 1837 "cplus.met"
#line 1837 "cplus.met"
            {
#line 1837 "cplus.met"
                PPTREE _ptTree0=0;
#line 1837 "cplus.met"
                {
#line 1837 "cplus.met"
                    PPTREE _ptTree1=0,_ptRes1=0;
#line 1837 "cplus.met"
                    _ptRes1= MakeTree(PROTECT, 2);
#line 1837 "cplus.met"
                    ReplaceTree(_ptRes1, 1, MakeString ("protected"));
#line 1837 "cplus.met"
                    if ( (_ptTree1=NQUICK_CALL(_Tak(base_specifier_elem)(error_free), 20, cplus))== (PPTREE) -1 ) {
#line 1837 "cplus.met"
                        MulFreeTree(4,_ptRes1,_ptTree1,_ptTree0,ret);
                        PROG_EXIT(base_specifier_elem_exit,"base_specifier_elem")
#line 1837 "cplus.met"
                    }
#line 1837 "cplus.met"
                    ReplaceTree(_ptRes1, 2, _ptTree1);
#line 1837 "cplus.met"
                    _ptTree0=_ptRes1;
#line 1837 "cplus.met"
                }
#line 1837 "cplus.met"
                _retValue =_ptTree0;
#line 1837 "cplus.met"
                goto base_specifier_elem_ret;
#line 1837 "cplus.met"
            }
#line 1837 "cplus.met"
            break;
#line 1837 "cplus.met"
#line 1838 "cplus.met"
        case PUBLIC : 
#line 1838 "cplus.met"
            tokenAhead = 0 ;
#line 1838 "cplus.met"
            CommTerm();
#line 1838 "cplus.met"
#line 1838 "cplus.met"
            {
#line 1838 "cplus.met"
                PPTREE _ptTree0=0;
#line 1838 "cplus.met"
                {
#line 1838 "cplus.met"
                    PPTREE _ptTree1=0,_ptRes1=0;
#line 1838 "cplus.met"
                    _ptRes1= MakeTree(PROTECT, 2);
#line 1838 "cplus.met"
                    ReplaceTree(_ptRes1, 1, MakeString ("public"));
#line 1838 "cplus.met"
                    if ( (_ptTree1=NQUICK_CALL(_Tak(base_specifier_elem)(error_free), 20, cplus))== (PPTREE) -1 ) {
#line 1838 "cplus.met"
                        MulFreeTree(4,_ptRes1,_ptTree1,_ptTree0,ret);
                        PROG_EXIT(base_specifier_elem_exit,"base_specifier_elem")
#line 1838 "cplus.met"
                    }
#line 1838 "cplus.met"
                    ReplaceTree(_ptRes1, 2, _ptTree1);
#line 1838 "cplus.met"
                    _ptTree0=_ptRes1;
#line 1838 "cplus.met"
                }
#line 1838 "cplus.met"
                _retValue =_ptTree0;
#line 1838 "cplus.met"
                goto base_specifier_elem_ret;
#line 1838 "cplus.met"
            }
#line 1838 "cplus.met"
            break;
#line 1838 "cplus.met"
#line 1839 "cplus.met"
        case VIRTUAL : 
#line 1839 "cplus.met"
            tokenAhead = 0 ;
#line 1839 "cplus.met"
            CommTerm();
#line 1839 "cplus.met"
#line 1839 "cplus.met"
            {
#line 1839 "cplus.met"
                PPTREE _ptTree0=0;
#line 1839 "cplus.met"
                {
#line 1839 "cplus.met"
                    PPTREE _ptTree1=0,_ptRes1=0;
#line 1839 "cplus.met"
                    _ptRes1= MakeTree(PROTECT, 2);
#line 1839 "cplus.met"
                    ReplaceTree(_ptRes1, 1, MakeString ("virtual"));
#line 1839 "cplus.met"
                    if ( (_ptTree1=NQUICK_CALL(_Tak(base_specifier_elem)(error_free), 20, cplus))== (PPTREE) -1 ) {
#line 1839 "cplus.met"
                        MulFreeTree(4,_ptRes1,_ptTree1,_ptTree0,ret);
                        PROG_EXIT(base_specifier_elem_exit,"base_specifier_elem")
#line 1839 "cplus.met"
                    }
#line 1839 "cplus.met"
                    ReplaceTree(_ptRes1, 2, _ptTree1);
#line 1839 "cplus.met"
                    _ptTree0=_ptRes1;
#line 1839 "cplus.met"
                }
#line 1839 "cplus.met"
                _retValue =_ptTree0;
#line 1839 "cplus.met"
                goto base_specifier_elem_ret;
#line 1839 "cplus.met"
            }
#line 1839 "cplus.met"
            break;
#line 1839 "cplus.met"
#line 1839 "cplus.met"
        default : 
#line 1839 "cplus.met"
#line 1839 "cplus.met"
            break;
#line 1839 "cplus.met"
    }
#line 1839 "cplus.met"
#line 1842 "cplus.met"
    if ( (ret=NQUICK_CALL(_Tak(complete_class_name)(error_free), 28, cplus))== (PPTREE) -1 ) {
#line 1842 "cplus.met"
        MulFreeTree(1,ret);
        PROG_EXIT(base_specifier_elem_exit,"base_specifier_elem")
#line 1842 "cplus.met"
    }
#line 1842 "cplus.met"
#line 1843 "cplus.met"
    {
#line 1843 "cplus.met"
        _retValue = ret ;
#line 1843 "cplus.met"
        goto base_specifier_elem_ret;
#line 1843 "cplus.met"
        
#line 1843 "cplus.met"
    }
#line 1843 "cplus.met"
#line 1843 "cplus.met"
#line 1843 "cplus.met"

#line 1844 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1844 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 1844 "cplus.met"
return((PPTREE) 0);
#line 1844 "cplus.met"

#line 1844 "cplus.met"
base_specifier_elem_exit :
#line 1844 "cplus.met"

#line 1844 "cplus.met"
    _Debug = TRACE_RULE("base_specifier_elem",TRACE_EXIT,(PPTREE)0);
#line 1844 "cplus.met"
    _funcLevel--;
#line 1844 "cplus.met"
    return((PPTREE) -1) ;
#line 1844 "cplus.met"

#line 1844 "cplus.met"
base_specifier_elem_ret :
#line 1844 "cplus.met"
    
#line 1844 "cplus.met"
    _Debug = TRACE_RULE("base_specifier_elem",TRACE_RETURN,_retValue);
#line 1844 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1844 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 1844 "cplus.met"
    return _retValue ;
#line 1844 "cplus.met"
}
#line 1844 "cplus.met"

#line 1844 "cplus.met"
#line 3607 "cplus.met"
PPTREE cplus::bidon ( int error_free)
#line 3607 "cplus.met"
{
#line 3607 "cplus.met"
    int  _oldnoString = noString;
#line 3607 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 3607 "cplus.met"
    int _value,_nbPre = 0 ;
#line 3607 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 3607 "cplus.met"
    int _Debug = TRACE_RULE("bidon",TRACE_ENTER,(PPTREE)0);
#line 3607 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 3607 "cplus.met"
#line 3608 "cplus.met"
    {
#line 3608 "cplus.met"
        noString = 1 ;
#line 3608 "cplus.met"
#line 3609 "cplus.met"
#line 3609 "cplus.met"
        noString =  _oldnoString;
#line 3609 "cplus.met"
    }
#line 3609 "cplus.met"
#line 3609 "cplus.met"
#line 3610 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 3610 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 3610 "cplus.met"
noString =  _oldnoString;
#line 3610 "cplus.met"
return((PPTREE) 0);
#line 3610 "cplus.met"

#line 3610 "cplus.met"
bidon_exit :
#line 3610 "cplus.met"

#line 3610 "cplus.met"
    _Debug = TRACE_RULE("bidon",TRACE_EXIT,(PPTREE)0);
#line 3610 "cplus.met"
    _funcLevel--;
#line 3610 "cplus.met"
    noString =  _oldnoString;
#line 3610 "cplus.met"
    return((PPTREE) -1) ;
#line 3610 "cplus.met"

#line 3610 "cplus.met"
bidon_ret :
#line 3610 "cplus.met"
    
#line 3610 "cplus.met"
    _Debug = TRACE_RULE("bidon",TRACE_RETURN,_retValue);
#line 3610 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 3610 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 3610 "cplus.met"
    noString =  _oldnoString;
#line 3610 "cplus.met"
    return _retValue ;
#line 3610 "cplus.met"
}
#line 3610 "cplus.met"

#line 3610 "cplus.met"
#line 2557 "cplus.met"
PPTREE cplus::bit_field_decl ( int error_free)
#line 2557 "cplus.met"
{
#line 2557 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 2557 "cplus.met"
    int _value,_nbPre = 0 ;
#line 2557 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 2557 "cplus.met"
    int _Debug = TRACE_RULE("bit_field_decl",TRACE_ENTER,(PPTREE)0);
#line 2557 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 2557 "cplus.met"
#line 2557 "cplus.met"
    PPTREE retTree = (PPTREE) 0;
#line 2557 "cplus.met"
#line 2560 "cplus.met"
    {
#line 2560 "cplus.met"
        PPTREE _ptRes0=0;
#line 2560 "cplus.met"
        _ptRes0= MakeTree(TYP_BIT, 2);
#line 2560 "cplus.met"
        retTree=_ptRes0;
#line 2560 "cplus.met"
    }
#line 2560 "cplus.met"
#line 2562 "cplus.met"
    if ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN( IDENT,"IDENT")){
#line 2562 "cplus.met"
#line 2563 "cplus.met"
        {
#line 2563 "cplus.met"
            PPTREE _ptTree0=0;
#line 2563 "cplus.met"
            {
#line 2563 "cplus.met"
                PPTREE _ptTree1=0,_ptRes1=0;
#line 2563 "cplus.met"
                _ptRes1= MakeTree(IDENT, 1);
#line 2563 "cplus.met"
                (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 2563 "cplus.met"
                if ( ! TERM_OR_META(IDENT,"IDENT") || !(BUILD_TERM_META(_ptTree1))) {
#line 2563 "cplus.met"
                    MulFreeTree(4,_ptRes1,_ptTree1,_ptTree0,retTree);
                    TOKEN_EXIT(bit_field_decl_exit,"IDENT")
#line 2563 "cplus.met"
                } else {
#line 2563 "cplus.met"
                    tokenAhead = 0 ;
#line 2563 "cplus.met"
                }
#line 2563 "cplus.met"
                ReplaceTree(_ptRes1, 1, _ptTree1);
#line 2563 "cplus.met"
                _ptTree0=_ptRes1;
#line 2563 "cplus.met"
            }
#line 2563 "cplus.met"
            ReplaceTree(retTree , 1 , _ptTree0);
#line 2563 "cplus.met"
        }
#line 2563 "cplus.met"
#line 2563 "cplus.met"
    }
#line 2563 "cplus.met"
#line 2564 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 2564 "cplus.met"
    if (  !SEE_TOKEN( DPOI,":") || !(CommTerm(),1)) {
#line 2564 "cplus.met"
        MulFreeTree(1,retTree);
        TOKEN_EXIT(bit_field_decl_exit,":")
#line 2564 "cplus.met"
    } else {
#line 2564 "cplus.met"
        tokenAhead = 0 ;
#line 2564 "cplus.met"
    }
#line 2564 "cplus.met"
#line 2565 "cplus.met"
    {
#line 2565 "cplus.met"
        PPTREE _ptTree0=0;
#line 2565 "cplus.met"
        {
#line 2565 "cplus.met"
            PPTREE _ptTree1=0;
#line 2565 "cplus.met"
            if ( (_ptTree1=NQUICK_CALL(_Tak(assignment_expression)(error_free), 17, cplus))== (PPTREE) -1 ) {
#line 2565 "cplus.met"
                MulFreeTree(3,_ptTree1,_ptTree0,retTree);
                PROG_EXIT(bit_field_decl_exit,"bit_field_decl")
#line 2565 "cplus.met"
            }
#line 2565 "cplus.met"
            _ptTree0=ReplaceTree(retTree , 2 , _ptTree1);
#line 2565 "cplus.met"
        }
#line 2565 "cplus.met"
        _retValue =_ptTree0;
#line 2565 "cplus.met"
        goto bit_field_decl_ret;
#line 2565 "cplus.met"
    }
#line 2565 "cplus.met"
#line 2565 "cplus.met"
#line 2565 "cplus.met"

#line 2566 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2566 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 2566 "cplus.met"
return((PPTREE) 0);
#line 2566 "cplus.met"

#line 2566 "cplus.met"
bit_field_decl_exit :
#line 2566 "cplus.met"

#line 2566 "cplus.met"
    _Debug = TRACE_RULE("bit_field_decl",TRACE_EXIT,(PPTREE)0);
#line 2566 "cplus.met"
    _funcLevel--;
#line 2566 "cplus.met"
    return((PPTREE) -1) ;
#line 2566 "cplus.met"

#line 2566 "cplus.met"
bit_field_decl_ret :
#line 2566 "cplus.met"
    
#line 2566 "cplus.met"
    _Debug = TRACE_RULE("bit_field_decl",TRACE_RETURN,_retValue);
#line 2566 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2566 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 2566 "cplus.met"
    return _retValue ;
#line 2566 "cplus.met"
}
#line 2566 "cplus.met"

#line 2566 "cplus.met"
#line 2743 "cplus.met"
PPTREE cplus::cast_expression ( int error_free)
#line 2743 "cplus.met"
{
#line 2743 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 2743 "cplus.met"
    int _value,_nbPre = 0 ;
#line 2743 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 2743 "cplus.met"
    int _Debug = TRACE_RULE("cast_expression",TRACE_ENTER,(PPTREE)0);
#line 2743 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 2743 "cplus.met"
#line 2743 "cplus.met"
    PPTREE retTree = (PPTREE) 0;
#line 2743 "cplus.met"
#line 2745 "cplus.met"
    if (NPUSH_CALL_AFF_VERIF(retTree = ,_Tak(cast_expression_value), 23, cplus)){
#line 2745 "cplus.met"
#line 2746 "cplus.met"
        {
#line 2746 "cplus.met"
            _retValue = retTree ;
#line 2746 "cplus.met"
            goto cast_expression_ret;
#line 2746 "cplus.met"
            
#line 2746 "cplus.met"
        }
#line 2746 "cplus.met"
    } else {
#line 2746 "cplus.met"
#line 2748 "cplus.met"
        {
#line 2748 "cplus.met"
            PPTREE _ptTree0=0;
#line 2748 "cplus.met"
            if ( (_ptTree0=NQUICK_CALL(_Tak(unary_expression)(error_free), 152, cplus))== (PPTREE) -1 ) {
#line 2748 "cplus.met"
                MulFreeTree(2,_ptTree0,retTree);
                PROG_EXIT(cast_expression_exit,"cast_expression")
#line 2748 "cplus.met"
            }
#line 2748 "cplus.met"
            _retValue =_ptTree0;
#line 2748 "cplus.met"
            goto cast_expression_ret;
#line 2748 "cplus.met"
        }
#line 2748 "cplus.met"
    }
#line 2748 "cplus.met"
#line 2748 "cplus.met"
#line 2748 "cplus.met"

#line 2749 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2749 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 2749 "cplus.met"
return((PPTREE) 0);
#line 2749 "cplus.met"

#line 2749 "cplus.met"
cast_expression_exit :
#line 2749 "cplus.met"

#line 2749 "cplus.met"
    _Debug = TRACE_RULE("cast_expression",TRACE_EXIT,(PPTREE)0);
#line 2749 "cplus.met"
    _funcLevel--;
#line 2749 "cplus.met"
    return((PPTREE) -1) ;
#line 2749 "cplus.met"

#line 2749 "cplus.met"
cast_expression_ret :
#line 2749 "cplus.met"
    
#line 2749 "cplus.met"
    _Debug = TRACE_RULE("cast_expression",TRACE_RETURN,_retValue);
#line 2749 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2749 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 2749 "cplus.met"
    return _retValue ;
#line 2749 "cplus.met"
}
#line 2749 "cplus.met"

#line 2749 "cplus.met"
#line 2735 "cplus.met"
PPTREE cplus::cast_expression_value ( int error_free)
#line 2735 "cplus.met"
{
#line 2735 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 2735 "cplus.met"
    int _value,_nbPre = 0 ;
#line 2735 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 2735 "cplus.met"
    int _Debug = TRACE_RULE("cast_expression_value",TRACE_ENTER,(PPTREE)0);
#line 2735 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 2735 "cplus.met"
#line 2735 "cplus.met"
    PPTREE ret = (PPTREE) 0;
#line 2735 "cplus.met"
#line 2737 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 2737 "cplus.met"
    if (  !SEE_TOKEN( POUV,"(") || !(CommTerm(),1)) {
#line 2737 "cplus.met"
        MulFreeTree(1,ret);
        TOKEN_EXIT(cast_expression_value_exit,"(")
#line 2737 "cplus.met"
    } else {
#line 2737 "cplus.met"
        tokenAhead = 0 ;
#line 2737 "cplus.met"
    }
#line 2737 "cplus.met"
#line 2738 "cplus.met"
    if ( (ret=NQUICK_CALL(_Tak(type_name)(error_free), 148, cplus))== (PPTREE) -1 ) {
#line 2738 "cplus.met"
        MulFreeTree(1,ret);
        PROG_EXIT(cast_expression_value_exit,"cast_expression_value")
#line 2738 "cplus.met"
    }
#line 2738 "cplus.met"
#line 2739 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 2739 "cplus.met"
    if (  !SEE_TOKEN( PFER,")") || !(CommTerm(),1)) {
#line 2739 "cplus.met"
        MulFreeTree(1,ret);
        TOKEN_EXIT(cast_expression_value_exit,")")
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
            PPTREE _ptTree1=0,_ptRes1=0;
#line 2740 "cplus.met"
            _ptRes1= MakeTree(CAST, 2);
#line 2740 "cplus.met"
            ReplaceTree(_ptRes1, 1, ret );
#line 2740 "cplus.met"
            if ( (_ptTree1=NQUICK_CALL(_Tak(cast_expression)(error_free), 22, cplus))== (PPTREE) -1 ) {
#line 2740 "cplus.met"
                MulFreeTree(4,_ptRes1,_ptTree1,_ptTree0,ret);
                PROG_EXIT(cast_expression_value_exit,"cast_expression_value")
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
        goto cast_expression_value_ret;
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
cast_expression_value_exit :
#line 2741 "cplus.met"

#line 2741 "cplus.met"
    _Debug = TRACE_RULE("cast_expression_value",TRACE_EXIT,(PPTREE)0);
#line 2741 "cplus.met"
    _funcLevel--;
#line 2741 "cplus.met"
    return((PPTREE) -1) ;
#line 2741 "cplus.met"

#line 2741 "cplus.met"
cast_expression_value_ret :
#line 2741 "cplus.met"
    
#line 2741 "cplus.met"
    _Debug = TRACE_RULE("cast_expression_value",TRACE_RETURN,_retValue);
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
#line 1930 "cplus.met"
PPTREE cplus::catch_unit ( int error_free)
#line 1930 "cplus.met"
{
#line 1930 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 1930 "cplus.met"
    int _value,_nbPre = 0 ;
#line 1930 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 1930 "cplus.met"
    int _Debug = TRACE_RULE("catch_unit",TRACE_ENTER,(PPTREE)0);
#line 1930 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 1930 "cplus.met"
#line 1931 "cplus.met"
    (tokenAhead == 13|| (specific(),TRACE_LEX(1)));
#line 1931 "cplus.met"
    switch( lexEl.Value) {
#line 1931 "cplus.met"
#line 1932 "cplus.met"
        case META : 
#line 1932 "cplus.met"
        case CATCH_UPPER : 
#line 1932 "cplus.met"
#line 1932 "cplus.met"
            {
#line 1932 "cplus.met"
                PPTREE _ptTree0=0;
#line 1932 "cplus.met"
                {
#line 1932 "cplus.met"
                    PPTREE _ptTree1=0,_ptRes1=0;
#line 1932 "cplus.met"
                    _ptRes1= MakeTree(CATCH, 2);
#line 1932 "cplus.met"
                    if ( (_ptTree1=NQUICK_CALL(_Tak(macro)(error_free), 93, cplus))== (PPTREE) -1 ) {
#line 1932 "cplus.met"
                        MulFreeTree(3,_ptRes1,_ptTree1,_ptTree0);
                        PROG_EXIT(catch_unit_exit,"catch_unit")
#line 1932 "cplus.met"
                    }
#line 1932 "cplus.met"
                    ReplaceTree(_ptRes1, 1, _ptTree1);
#line 1932 "cplus.met"
                    if ( (_ptTree1=NQUICK_CALL(_Tak(compound_statement)(error_free), 29, cplus))== (PPTREE) -1 ) {
#line 1932 "cplus.met"
                        MulFreeTree(3,_ptRes1,_ptTree1,_ptTree0);
                        PROG_EXIT(catch_unit_exit,"catch_unit")
#line 1932 "cplus.met"
                    }
#line 1932 "cplus.met"
                    ReplaceTree(_ptRes1, 2, _ptTree1);
#line 1932 "cplus.met"
                    _ptTree0=_ptRes1;
#line 1932 "cplus.met"
                }
#line 1932 "cplus.met"
                _retValue =_ptTree0;
#line 1932 "cplus.met"
                goto catch_unit_ret;
#line 1932 "cplus.met"
            }
#line 1932 "cplus.met"
            break;
#line 1932 "cplus.met"
#line 1933 "cplus.met"
        case CATCH_ALL : 
#line 1933 "cplus.met"
#line 1933 "cplus.met"
            {
#line 1933 "cplus.met"
                PPTREE _ptTree0=0;
#line 1933 "cplus.met"
                {
#line 1933 "cplus.met"
                    PPTREE _ptTree1=0,_ptRes1=0;
#line 1933 "cplus.met"
                    _ptRes1= MakeTree(CATCH, 2);
#line 1933 "cplus.met"
                    if ( (_ptTree1=NQUICK_CALL(_Tak(macro)(error_free), 93, cplus))== (PPTREE) -1 ) {
#line 1933 "cplus.met"
                        MulFreeTree(3,_ptRes1,_ptTree1,_ptTree0);
                        PROG_EXIT(catch_unit_exit,"catch_unit")
#line 1933 "cplus.met"
                    }
#line 1933 "cplus.met"
                    ReplaceTree(_ptRes1, 1, _ptTree1);
#line 1933 "cplus.met"
                    if ( (_ptTree1=NQUICK_CALL(_Tak(compound_statement)(error_free), 29, cplus))== (PPTREE) -1 ) {
#line 1933 "cplus.met"
                        MulFreeTree(3,_ptRes1,_ptTree1,_ptTree0);
                        PROG_EXIT(catch_unit_exit,"catch_unit")
#line 1933 "cplus.met"
                    }
#line 1933 "cplus.met"
                    ReplaceTree(_ptRes1, 2, _ptTree1);
#line 1933 "cplus.met"
                    _ptTree0=_ptRes1;
#line 1933 "cplus.met"
                }
#line 1933 "cplus.met"
                _retValue =_ptTree0;
#line 1933 "cplus.met"
                goto catch_unit_ret;
#line 1933 "cplus.met"
            }
#line 1933 "cplus.met"
            break;
#line 1933 "cplus.met"
#line 1934 "cplus.met"
        case AND_CATCH : 
#line 1934 "cplus.met"
#line 1934 "cplus.met"
            {
#line 1934 "cplus.met"
                PPTREE _ptTree0=0;
#line 1934 "cplus.met"
                {
#line 1934 "cplus.met"
                    PPTREE _ptTree1=0,_ptRes1=0;
#line 1934 "cplus.met"
                    _ptRes1= MakeTree(CATCH, 2);
#line 1934 "cplus.met"
                    if ( (_ptTree1=NQUICK_CALL(_Tak(macro)(error_free), 93, cplus))== (PPTREE) -1 ) {
#line 1934 "cplus.met"
                        MulFreeTree(3,_ptRes1,_ptTree1,_ptTree0);
                        PROG_EXIT(catch_unit_exit,"catch_unit")
#line 1934 "cplus.met"
                    }
#line 1934 "cplus.met"
                    ReplaceTree(_ptRes1, 1, _ptTree1);
#line 1934 "cplus.met"
                    if ( (_ptTree1=NQUICK_CALL(_Tak(compound_statement)(error_free), 29, cplus))== (PPTREE) -1 ) {
#line 1934 "cplus.met"
                        MulFreeTree(3,_ptRes1,_ptTree1,_ptTree0);
                        PROG_EXIT(catch_unit_exit,"catch_unit")
#line 1934 "cplus.met"
                    }
#line 1934 "cplus.met"
                    ReplaceTree(_ptRes1, 2, _ptTree1);
#line 1934 "cplus.met"
                    _ptTree0=_ptRes1;
#line 1934 "cplus.met"
                }
#line 1934 "cplus.met"
                _retValue =_ptTree0;
#line 1934 "cplus.met"
                goto catch_unit_ret;
#line 1934 "cplus.met"
            }
#line 1934 "cplus.met"
            break;
#line 1934 "cplus.met"
        default :
#line 1934 "cplus.met"
            CASE_EXIT(catch_unit_exit,"either CATCH_UPPER or CATCH_ALL or AND_CATCH")
#line 1934 "cplus.met"
            break;
#line 1934 "cplus.met"
    }
#line 1934 "cplus.met"
#line 1934 "cplus.met"
#line 1935 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1935 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 1935 "cplus.met"
return((PPTREE) 0);
#line 1935 "cplus.met"

#line 1935 "cplus.met"
catch_unit_exit :
#line 1935 "cplus.met"

#line 1935 "cplus.met"
    _Debug = TRACE_RULE("catch_unit",TRACE_EXIT,(PPTREE)0);
#line 1935 "cplus.met"
    _funcLevel--;
#line 1935 "cplus.met"
    return((PPTREE) -1) ;
#line 1935 "cplus.met"

#line 1935 "cplus.met"
catch_unit_ret :
#line 1935 "cplus.met"
    
#line 1935 "cplus.met"
    _Debug = TRACE_RULE("catch_unit",TRACE_RETURN,_retValue);
#line 1935 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1935 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 1935 "cplus.met"
    return _retValue ;
#line 1935 "cplus.met"
}
#line 1935 "cplus.met"

#line 1935 "cplus.met"
#line 1948 "cplus.met"
PPTREE cplus::catch_unit_ansi ( int error_free)
#line 1948 "cplus.met"
{
#line 1948 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 1948 "cplus.met"
    int _value,_nbPre = 0 ;
#line 1948 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 1948 "cplus.met"
    int _Debug = TRACE_RULE("catch_unit_ansi",TRACE_ENTER,(PPTREE)0);
#line 1948 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 1948 "cplus.met"
#line 1948 "cplus.met"
    PPTREE retTree = (PPTREE) 0,valTree = (PPTREE) 0;
#line 1948 "cplus.met"
#line 1950 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 1950 "cplus.met"
    if (  !SEE_TOKEN( CATCH,"catch") || !(CommTerm(),1)) {
#line 1950 "cplus.met"
        MulFreeTree(2,retTree,valTree);
        TOKEN_EXIT(catch_unit_ansi_exit,"catch")
#line 1950 "cplus.met"
    } else {
#line 1950 "cplus.met"
        tokenAhead = 0 ;
#line 1950 "cplus.met"
    }
#line 1950 "cplus.met"
#line 1951 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 1951 "cplus.met"
    if (  !SEE_TOKEN( POUV,"(") || !(CommTerm(),1)) {
#line 1951 "cplus.met"
        MulFreeTree(2,retTree,valTree);
        TOKEN_EXIT(catch_unit_ansi_exit,"(")
#line 1951 "cplus.met"
    } else {
#line 1951 "cplus.met"
        tokenAhead = 0 ;
#line 1951 "cplus.met"
    }
#line 1951 "cplus.met"
#line 1952 "cplus.met"
    if ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN(POINPOINPOIN,"...") && (tokenAhead = 0,CommTerm(),1)){
#line 1952 "cplus.met"
#line 1953 "cplus.met"
        {
#line 1953 "cplus.met"
            PPTREE _ptRes0=0;
#line 1953 "cplus.met"
            _ptRes0= MakeTree(EXCEPT_ANSI_ALL, 0);
#line 1953 "cplus.met"
            valTree=_ptRes0;
#line 1953 "cplus.met"
        }
#line 1953 "cplus.met"
    } else {
#line 1953 "cplus.met"
#line 1955 "cplus.met"
#line 1956 "cplus.met"
        if ( (retTree=NQUICK_CALL(_Tak(type_specifier)(error_free), 149, cplus))== (PPTREE) -1 ) {
#line 1956 "cplus.met"
            MulFreeTree(2,retTree,valTree);
            PROG_EXIT(catch_unit_ansi_exit,"catch_unit_ansi")
#line 1956 "cplus.met"
        }
#line 1956 "cplus.met"
#line 1957 "cplus.met"
        if (NPUSH_CALL_AFF_VERIF(valTree = ,_Tak(declarator), 47, cplus)){
#line 1957 "cplus.met"
#line 1958 "cplus.met"
            {
#line 1958 "cplus.met"
                PPTREE _ptRes0=0;
#line 1958 "cplus.met"
                _ptRes0= MakeTree(DECLARATOR, 2);
#line 1958 "cplus.met"
                ReplaceTree(_ptRes0, 1, retTree );
#line 1958 "cplus.met"
                ReplaceTree(_ptRes0, 2, valTree );
#line 1958 "cplus.met"
                valTree=_ptRes0;
#line 1958 "cplus.met"
            }
#line 1958 "cplus.met"
        } else {
#line 1958 "cplus.met"
#line 1960 "cplus.met"
            if (NPUSH_CALL_AFF_VERIF(valTree = ,_Tak(abstract_declarator), 2, cplus)){
#line 1960 "cplus.met"
#line 1961 "cplus.met"
                {
#line 1961 "cplus.met"
                    PPTREE _ptRes0=0;
#line 1961 "cplus.met"
                    _ptRes0= MakeTree(ABST_DECLARATOR, 2);
#line 1961 "cplus.met"
                    ReplaceTree(_ptRes0, 1, retTree );
#line 1961 "cplus.met"
                    ReplaceTree(_ptRes0, 2, valTree );
#line 1961 "cplus.met"
                    valTree=_ptRes0;
#line 1961 "cplus.met"
                }
#line 1961 "cplus.met"
            } else {
#line 1961 "cplus.met"
#line 1963 "cplus.met"
                valTree = retTree ;
#line 1963 "cplus.met"
            }
#line 1963 "cplus.met"
        }
#line 1963 "cplus.met"
#line 1963 "cplus.met"
    }
#line 1963 "cplus.met"
#line 1965 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 1965 "cplus.met"
    if (  !SEE_TOKEN( PFER,")") || !(CommTerm(),1)) {
#line 1965 "cplus.met"
        MulFreeTree(2,retTree,valTree);
        TOKEN_EXIT(catch_unit_ansi_exit,")")
#line 1965 "cplus.met"
    } else {
#line 1965 "cplus.met"
        tokenAhead = 0 ;
#line 1965 "cplus.met"
    }
#line 1965 "cplus.met"
#line 1966 "cplus.met"
    {
#line 1966 "cplus.met"
        PPTREE _ptTree0=0;
#line 1966 "cplus.met"
        {
#line 1966 "cplus.met"
            PPTREE _ptTree1=0,_ptRes1=0;
#line 1966 "cplus.met"
            _ptRes1= MakeTree(CATCH_ANSI, 2);
#line 1966 "cplus.met"
            ReplaceTree(_ptRes1, 1, valTree );
#line 1966 "cplus.met"
            if ( (_ptTree1=NQUICK_CALL(_Tak(compound_statement)(error_free), 29, cplus))== (PPTREE) -1 ) {
#line 1966 "cplus.met"
                MulFreeTree(5,_ptRes1,_ptTree1,_ptTree0,retTree,valTree);
                PROG_EXIT(catch_unit_ansi_exit,"catch_unit_ansi")
#line 1966 "cplus.met"
            }
#line 1966 "cplus.met"
            ReplaceTree(_ptRes1, 2, _ptTree1);
#line 1966 "cplus.met"
            _ptTree0=_ptRes1;
#line 1966 "cplus.met"
        }
#line 1966 "cplus.met"
        _retValue =_ptTree0;
#line 1966 "cplus.met"
        goto catch_unit_ansi_ret;
#line 1966 "cplus.met"
    }
#line 1966 "cplus.met"
#line 1966 "cplus.met"
#line 1966 "cplus.met"

#line 1967 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1967 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 1967 "cplus.met"
return((PPTREE) 0);
#line 1967 "cplus.met"

#line 1967 "cplus.met"
catch_unit_ansi_exit :
#line 1967 "cplus.met"

#line 1967 "cplus.met"
    _Debug = TRACE_RULE("catch_unit_ansi",TRACE_EXIT,(PPTREE)0);
#line 1967 "cplus.met"
    _funcLevel--;
#line 1967 "cplus.met"
    return((PPTREE) -1) ;
#line 1967 "cplus.met"

#line 1967 "cplus.met"
catch_unit_ansi_ret :
#line 1967 "cplus.met"
    
#line 1967 "cplus.met"
    _Debug = TRACE_RULE("catch_unit_ansi",TRACE_RETURN,_retValue);
#line 1967 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1967 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 1967 "cplus.met"
    return _retValue ;
#line 1967 "cplus.met"
}
#line 1967 "cplus.met"

#line 1967 "cplus.met"
#line 1987 "cplus.met"
PPTREE cplus::class_declaration ( int error_free)
#line 1987 "cplus.met"
{
#line 1987 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 1987 "cplus.met"
    int _value,_nbPre = 0 ;
#line 1987 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 1987 "cplus.met"
    int _Debug = TRACE_RULE("class_declaration",TRACE_ENTER,(PPTREE)0);
#line 1987 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 1987 "cplus.met"
#line 1987 "cplus.met"
    PPTREE _addlist1 = (PPTREE) 0;
#line 1987 "cplus.met"
#line 1987 "cplus.met"
    PPTREE retTree = (PPTREE) 0,inter = (PPTREE) 0,list = (PPTREE) 0;
#line 1987 "cplus.met"
#line 1989 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 1989 "cplus.met"
    switch( lexEl.Value) {
#line 1989 "cplus.met"
#line 1990 "cplus.met"
        case STRUCT : 
#line 1990 "cplus.met"
            tokenAhead = 0 ;
#line 1990 "cplus.met"
            CommTerm();
#line 1990 "cplus.met"
#line 1990 "cplus.met"
            {
#line 1990 "cplus.met"
                PPTREE _ptRes0=0;
#line 1990 "cplus.met"
                _ptRes0= MakeTree(CLASS, 4);
#line 1990 "cplus.met"
                ReplaceTree(_ptRes0, 1, MakeString ("struct"));
#line 1990 "cplus.met"
                retTree=_ptRes0;
#line 1990 "cplus.met"
            }
#line 1990 "cplus.met"
            break;
#line 1990 "cplus.met"
#line 1991 "cplus.met"
        case UNION : 
#line 1991 "cplus.met"
            tokenAhead = 0 ;
#line 1991 "cplus.met"
            CommTerm();
#line 1991 "cplus.met"
#line 1991 "cplus.met"
            {
#line 1991 "cplus.met"
                PPTREE _ptRes0=0;
#line 1991 "cplus.met"
                _ptRes0= MakeTree(CLASS, 4);
#line 1991 "cplus.met"
                ReplaceTree(_ptRes0, 1, MakeString ("union"));
#line 1991 "cplus.met"
                retTree=_ptRes0;
#line 1991 "cplus.met"
            }
#line 1991 "cplus.met"
            break;
#line 1991 "cplus.met"
#line 1992 "cplus.met"
        case CLASS : 
#line 1992 "cplus.met"
            tokenAhead = 0 ;
#line 1992 "cplus.met"
            CommTerm();
#line 1992 "cplus.met"
#line 1992 "cplus.met"
            {
#line 1992 "cplus.met"
                PPTREE _ptRes0=0;
#line 1992 "cplus.met"
                _ptRes0= MakeTree(CLASS, 4);
#line 1992 "cplus.met"
                ReplaceTree(_ptRes0, 1, MakeString ("class"));
#line 1992 "cplus.met"
                retTree=_ptRes0;
#line 1992 "cplus.met"
            }
#line 1992 "cplus.met"
            break;
#line 1992 "cplus.met"
        default :
#line 1992 "cplus.met"
            MulFreeTree(4,_addlist1,inter,list,retTree);
            CASE_EXIT(class_declaration_exit,"either struct or union or class")
#line 1992 "cplus.met"
            break;
#line 1992 "cplus.met"
    }
#line 1992 "cplus.met"
#line 1994 "cplus.met"
    {
#line 1994 "cplus.met"
        PPTREE _ptTree0=0;
#line 1994 "cplus.met"
        if ( (_ptTree0=NQUICK_CALL(_Tak(range_modifier_ident)(error_free), 124, cplus))== (PPTREE) -1 ) {
#line 1994 "cplus.met"
            MulFreeTree(5,_ptTree0,_addlist1,inter,list,retTree);
            PROG_EXIT(class_declaration_exit,"class_declaration")
#line 1994 "cplus.met"
        }
#line 1994 "cplus.met"
        ReplaceTree(retTree , 2 , _ptTree0);
#line 1994 "cplus.met"
    }
#line 1994 "cplus.met"
#line 1995 "cplus.met"
    if ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN(DPOI,":") && (tokenAhead = 0,CommTerm(),1)){
#line 1995 "cplus.met"
#line 1996 "cplus.met"
        {
#line 1996 "cplus.met"
            PPTREE _ptTree0=0;
#line 1996 "cplus.met"
            if ( (_ptTree0=NQUICK_CALL(_Tak(base_specifier)(error_free), 19, cplus))== (PPTREE) -1 ) {
#line 1996 "cplus.met"
                MulFreeTree(5,_ptTree0,_addlist1,inter,list,retTree);
                PROG_EXIT(class_declaration_exit,"class_declaration")
#line 1996 "cplus.met"
            }
#line 1996 "cplus.met"
            ReplaceTree(retTree , 3 , _ptTree0);
#line 1996 "cplus.met"
        }
#line 1996 "cplus.met"
#line 1996 "cplus.met"
    }
#line 1996 "cplus.met"
#line 1997 "cplus.met"
    if ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN(AOUV,"{") && (tokenAhead = 0,CommTerm(),1)){
#line 1997 "cplus.met"
#line 1998 "cplus.met"
#line 1999 "cplus.met"
        do {
#line 1999 "cplus.met"
#line 1999 "cplus.met"
            _addlist1 = list ;
#line 1999 "cplus.met"
#line 2000 "cplus.met"
            while (NPUSH_CALL_AFF_VERIF(inter = ,_Tak(inside_declaration), 84, cplus)) { 
#line 2000 "cplus.met"
#line 2001 "cplus.met"
#line 2001 "cplus.met"
                _addlist1 =AddList(_addlist1 ,inter );
#line 2001 "cplus.met"
#line 2001 "cplus.met"
                if (list){
#line 2001 "cplus.met"
#line 2001 "cplus.met"
                    _addlist1 = SonTree (_addlist1 ,2 );
#line 2001 "cplus.met"
                } else {
#line 2001 "cplus.met"
#line 2001 "cplus.met"
                    list = _addlist1 ;
#line 2001 "cplus.met"
                }
#line 2001 "cplus.met"
            } 
#line 2001 "cplus.met"
#line 2002 "cplus.met"
            (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 2002 "cplus.met"
            switch( lexEl.Value) {
#line 2002 "cplus.met"
#line 2003 "cplus.met"
                case PUBLIC : 
#line 2003 "cplus.met"
#line 2003 "cplus.met"
                    {
#line 2003 "cplus.met"
                        PPTREE _ptTree0=0;
#line 2003 "cplus.met"
                        if ( (_ptTree0=NQUICK_CALL(_Tak(protect_declare)(error_free), 115, cplus))== (PPTREE) -1 ) {
#line 2003 "cplus.met"
                            MulFreeTree(5,_ptTree0,_addlist1,inter,list,retTree);
                            PROG_EXIT(class_declaration_exit,"class_declaration")
#line 2003 "cplus.met"
                        }
#line 2003 "cplus.met"
                        list =AddList(list , _ptTree0);
#line 2003 "cplus.met"
                    }
#line 2003 "cplus.met"
                    break;
#line 2003 "cplus.met"
#line 2004 "cplus.met"
                case PRIVATE : 
#line 2004 "cplus.met"
#line 2004 "cplus.met"
                    {
#line 2004 "cplus.met"
                        PPTREE _ptTree0=0;
#line 2004 "cplus.met"
                        if ( (_ptTree0=NQUICK_CALL(_Tak(protect_declare)(error_free), 115, cplus))== (PPTREE) -1 ) {
#line 2004 "cplus.met"
                            MulFreeTree(5,_ptTree0,_addlist1,inter,list,retTree);
                            PROG_EXIT(class_declaration_exit,"class_declaration")
#line 2004 "cplus.met"
                        }
#line 2004 "cplus.met"
                        list =AddList(list , _ptTree0);
#line 2004 "cplus.met"
                    }
#line 2004 "cplus.met"
                    break;
#line 2004 "cplus.met"
#line 2005 "cplus.met"
                case PROTECTED : 
#line 2005 "cplus.met"
#line 2005 "cplus.met"
                    {
#line 2005 "cplus.met"
                        PPTREE _ptTree0=0;
#line 2005 "cplus.met"
                        if ( (_ptTree0=NQUICK_CALL(_Tak(protect_declare)(error_free), 115, cplus))== (PPTREE) -1 ) {
#line 2005 "cplus.met"
                            MulFreeTree(5,_ptTree0,_addlist1,inter,list,retTree);
                            PROG_EXIT(class_declaration_exit,"class_declaration")
#line 2005 "cplus.met"
                        }
#line 2005 "cplus.met"
                        list =AddList(list , _ptTree0);
#line 2005 "cplus.met"
                    }
#line 2005 "cplus.met"
                    break;
#line 2005 "cplus.met"
#line 2005 "cplus.met"
                case AFER : 
#line 2005 "cplus.met"
#line 2005 "cplus.met"
                    break;
#line 2005 "cplus.met"
#line 2007 "cplus.met"
                default : 
#line 2007 "cplus.met"
#line 2007 "cplus.met"
                    
#line 2007 "cplus.met"
                    MulFreeTree(4,_addlist1,inter,list,retTree);
                    LEX_EXIT ("",0);
#line 2007 "cplus.met"
                    goto class_declaration_exit;
#line 2007 "cplus.met"
                    break;
#line 2007 "cplus.met"
            }
#line 2007 "cplus.met"
#line 2007 "cplus.met"
#line 2009 "cplus.met"
        } while ( !(((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN( AFER,"}")) || 
#line 2009 "cplus.met"
                   (! ((tokenAhead && tokenAhead != -1)|| (c != EOF))))) ;
#line 2009 "cplus.met"
#line 2010 "cplus.met"
        {
#line 2010 "cplus.met"
            PPTREE _ptTree0=0;
#line 2010 "cplus.met"
            {
#line 2010 "cplus.met"
                PPTREE _ptRes1=0;
#line 2010 "cplus.met"
                _ptRes1= MakeTree(CLASS_DECL, 1);
#line 2010 "cplus.met"
                ReplaceTree(_ptRes1, 1, list );
#line 2010 "cplus.met"
                _ptTree0=_ptRes1;
#line 2010 "cplus.met"
            }
#line 2010 "cplus.met"
            ReplaceTree(retTree , 4 , _ptTree0);
#line 2010 "cplus.met"
        }
#line 2010 "cplus.met"
#line 2011 "cplus.met"
        (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 2011 "cplus.met"
        if (  !SEE_TOKEN( AFER,"}") || !(CommTerm(),1)) {
#line 2011 "cplus.met"
            MulFreeTree(4,_addlist1,inter,list,retTree);
            TOKEN_EXIT(class_declaration_exit,"}")
#line 2011 "cplus.met"
        } else {
#line 2011 "cplus.met"
            tokenAhead = 0 ;
#line 2011 "cplus.met"
        }
#line 2011 "cplus.met"
#line 2011 "cplus.met"
#line 2011 "cplus.met"
    }
#line 2011 "cplus.met"
#line 2013 "cplus.met"
    {
#line 2013 "cplus.met"
        _retValue = retTree ;
#line 2013 "cplus.met"
        goto class_declaration_ret;
#line 2013 "cplus.met"
        
#line 2013 "cplus.met"
    }
#line 2013 "cplus.met"
#line 2013 "cplus.met"
#line 2013 "cplus.met"

#line 2014 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2014 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 2014 "cplus.met"
return((PPTREE) 0);
#line 2014 "cplus.met"

#line 2014 "cplus.met"
class_declaration_exit :
#line 2014 "cplus.met"

#line 2014 "cplus.met"
    _Debug = TRACE_RULE("class_declaration",TRACE_EXIT,(PPTREE)0);
#line 2014 "cplus.met"
    _funcLevel--;
#line 2014 "cplus.met"
    return((PPTREE) -1) ;
#line 2014 "cplus.met"

#line 2014 "cplus.met"
class_declaration_ret :
#line 2014 "cplus.met"
    
#line 2014 "cplus.met"
    _Debug = TRACE_RULE("class_declaration",TRACE_RETURN,_retValue);
#line 2014 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2014 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 2014 "cplus.met"
    return _retValue ;
#line 2014 "cplus.met"
}
#line 2014 "cplus.met"

#line 2014 "cplus.met"
#line 793 "cplus.met"
PPTREE cplus::comment_eater ( int error_free)
#line 793 "cplus.met"
{
#line 793 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 793 "cplus.met"
    int _value,_nbPre = 0 ;
#line 793 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 793 "cplus.met"
    int _Debug = TRACE_RULE("comment_eater",TRACE_ENTER,(PPTREE)0);
#line 793 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 793 "cplus.met"
#line 793 "cplus.met"
    PPTREE retTree = (PPTREE) 0;
#line 793 "cplus.met"
#line 795 "cplus.met"
    1;
#line 795 "cplus.met"
    switch( lexEl.Value) {
#line 795 "cplus.met"
#line 796 "cplus.met"
        default : 
#line 796 "cplus.met"
            tokenAhead = 0 ;
#line 796 "cplus.met"
            CommTerm();
#line 796 "cplus.met"
#line 797 "cplus.met"
            if ( lexEl.Value != -1 ){
#line 797 "cplus.met"
#line 798 "cplus.met"
                
#line 798 "cplus.met"
                MulFreeTree(1,retTree);
                LEX_EXIT ("",0);
#line 798 "cplus.met"
                goto comment_eater_exit;
#line 798 "cplus.met"
#line 798 "cplus.met"
            } else {
#line 798 "cplus.met"
#line 800 "cplus.met"
                {
#line 800 "cplus.met"
                    _retValue = retTree ;
#line 800 "cplus.met"
                    goto comment_eater_ret;
#line 800 "cplus.met"
                    
#line 800 "cplus.met"
                }
#line 800 "cplus.met"
            }
#line 800 "cplus.met"
            break;
#line 800 "cplus.met"
    }
#line 800 "cplus.met"
#line 800 "cplus.met"
#line 801 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 801 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 801 "cplus.met"
return((PPTREE) 0);
#line 801 "cplus.met"

#line 801 "cplus.met"
comment_eater_exit :
#line 801 "cplus.met"

#line 801 "cplus.met"
    _Debug = TRACE_RULE("comment_eater",TRACE_EXIT,(PPTREE)0);
#line 801 "cplus.met"
    _funcLevel--;
#line 801 "cplus.met"
    return((PPTREE) -1) ;
#line 801 "cplus.met"

#line 801 "cplus.met"
comment_eater_ret :
#line 801 "cplus.met"
    
#line 801 "cplus.met"
    _Debug = TRACE_RULE("comment_eater",TRACE_RETURN,_retValue);
#line 801 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 801 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 801 "cplus.met"
    return _retValue ;
#line 801 "cplus.met"
}
#line 801 "cplus.met"

#line 801 "cplus.met"
#line 1824 "cplus.met"
PPTREE cplus::complete_class_name ( int error_free)
#line 1824 "cplus.met"
{
#line 1824 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 1824 "cplus.met"
    int _value,_nbPre = 0 ;
#line 1824 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 1824 "cplus.met"
    int _Debug = TRACE_RULE("complete_class_name",TRACE_ENTER,(PPTREE)0);
#line 1824 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 1824 "cplus.met"
#line 1824 "cplus.met"
    PPTREE ret = (PPTREE) 0;
#line 1824 "cplus.met"
#line 1826 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 1826 "cplus.met"
    switch( lexEl.Value) {
#line 1826 "cplus.met"
#line 1827 "cplus.met"
        case META : 
#line 1827 "cplus.met"
        case IDENT : 
#line 1827 "cplus.met"
#line 1827 "cplus.met"
            if ( (ret=NQUICK_CALL(_Tak(qualified_name)(error_free), 117, cplus))== (PPTREE) -1 ) {
#line 1827 "cplus.met"
                MulFreeTree(1,ret);
                PROG_EXIT(complete_class_name_exit,"complete_class_name")
#line 1827 "cplus.met"
            }
#line 1827 "cplus.met"
            break;
#line 1827 "cplus.met"
#line 1828 "cplus.met"
        case DPOIDPOI : 
#line 1828 "cplus.met"
            tokenAhead = 0 ;
#line 1828 "cplus.met"
            CommTerm();
#line 1828 "cplus.met"
#line 1828 "cplus.met"
            {
#line 1828 "cplus.met"
                PPTREE _ptTree0=0,_ptRes0=0;
#line 1828 "cplus.met"
                _ptRes0= MakeTree(QUALIFIED, 2);
#line 1828 "cplus.met"
                if ( (_ptTree0=NQUICK_CALL(_Tak(qualified_name)(error_free), 117, cplus))== (PPTREE) -1 ) {
#line 1828 "cplus.met"
                    MulFreeTree(3,_ptRes0,_ptTree0,ret);
                    PROG_EXIT(complete_class_name_exit,"complete_class_name")
#line 1828 "cplus.met"
                }
#line 1828 "cplus.met"
                ReplaceTree(_ptRes0, 2, _ptTree0);
#line 1828 "cplus.met"
                ret=_ptRes0;
#line 1828 "cplus.met"
            }
#line 1828 "cplus.met"
            break;
#line 1828 "cplus.met"
        default :
#line 1828 "cplus.met"
            MulFreeTree(1,ret);
            CASE_EXIT(complete_class_name_exit,"either IDENT or ::")
#line 1828 "cplus.met"
            break;
#line 1828 "cplus.met"
    }
#line 1828 "cplus.met"
#line 1830 "cplus.met"
    {
#line 1830 "cplus.met"
        _retValue = ret ;
#line 1830 "cplus.met"
        goto complete_class_name_ret;
#line 1830 "cplus.met"
        
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
complete_class_name_exit :
#line 1831 "cplus.met"

#line 1831 "cplus.met"
    _Debug = TRACE_RULE("complete_class_name",TRACE_EXIT,(PPTREE)0);
#line 1831 "cplus.met"
    _funcLevel--;
#line 1831 "cplus.met"
    return((PPTREE) -1) ;
#line 1831 "cplus.met"

#line 1831 "cplus.met"
complete_class_name_ret :
#line 1831 "cplus.met"
    
#line 1831 "cplus.met"
    _Debug = TRACE_RULE("complete_class_name",TRACE_RETURN,_retValue);
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
#line 3279 "cplus.met"
PPTREE cplus::compound_statement ( int error_free)
#line 3279 "cplus.met"
{
#line 3279 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 3279 "cplus.met"
    int _value,_nbPre = 0 ;
#line 3279 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 3279 "cplus.met"
    int _Debug = TRACE_RULE("compound_statement",TRACE_ENTER,(PPTREE)0);
#line 3279 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 3279 "cplus.met"
#line 3279 "cplus.met"
    PPTREE _addlist1 = (PPTREE) 0;
#line 3279 "cplus.met"
#line 3279 "cplus.met"
    PPTREE statList = (PPTREE) 0,stat = (PPTREE) 0;
#line 3279 "cplus.met"
#line 3281 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3281 "cplus.met"
    if (  !SEE_TOKEN( AOUV,"{") || !(CommTerm(),1)) {
#line 3281 "cplus.met"
        MulFreeTree(3,_addlist1,stat,statList);
        TOKEN_EXIT(compound_statement_exit,"{")
#line 3281 "cplus.met"
    } else {
#line 3281 "cplus.met"
        tokenAhead = 0 ;
#line 3281 "cplus.met"
    }
#line 3281 "cplus.met"
#line 3282 "cplus.met"
     debut :
#line 3282 "cplus.met"
#line 3282 "cplus.met"
    _addlist1 = statList ;
#line 3282 "cplus.met"
#line 3284 "cplus.met"
    while (((((NPUSH_CALL_AFF_VERIF(stat = ,_Tak(statement), 140, cplus)) || 
#line 3284 "cplus.met"
             (NPUSH_CALL_AFF_VERIF(stat = ,_Tak(data_declaration), 41, cplus))) || 
#line 3284 "cplus.met"
            (NPUSH_CALL_AFF_VERIF(stat = ,_Tak(stat_dir), 136, cplus))) || 
#line 3284 "cplus.met"
           (NPUSH_CALL_AFF_VERIF(stat = ,_Tak(exception), 59, cplus))) || 
#line 3284 "cplus.met"
          (NPUSH_CALL_AFF_VERIF(stat = ,_Tak(ext_data_declaration), 72, cplus))) { 
#line 3284 "cplus.met"
#line 3286 "cplus.met"
#line 3286 "cplus.met"
        _addlist1 =AddList(_addlist1 ,stat );
#line 3286 "cplus.met"
#line 3286 "cplus.met"
        if (statList){
#line 3286 "cplus.met"
#line 3286 "cplus.met"
            _addlist1 = SonTree (_addlist1 ,2 );
#line 3286 "cplus.met"
        } else {
#line 3286 "cplus.met"
#line 3286 "cplus.met"
            statList = _addlist1 ;
#line 3286 "cplus.met"
        }
#line 3286 "cplus.met"
    } 
#line 3286 "cplus.met"
#line 3287 "cplus.met"
    {
#line 3287 "cplus.met"
        PPTREE _ptTree0=0;
#line 3287 "cplus.met"
        if ( (_ptTree0=NQUICK_CALL(_Tak(none_statement)(error_free), 104, cplus))== (PPTREE) -1 ) {
#line 3287 "cplus.met"
            MulFreeTree(4,_ptTree0,_addlist1,stat,statList);
            PROG_EXIT(compound_statement_exit,"compound_statement")
#line 3287 "cplus.met"
        }
#line 3287 "cplus.met"
        statList =AddList(statList , _ptTree0);
#line 3287 "cplus.met"
    }
#line 3287 "cplus.met"
#line 3288 "cplus.met"
    if (! ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN(AFER,"}") && (tokenAhead = 0,CommTerm(),1))){
#line 3288 "cplus.met"
#line 3289 "cplus.met"
#line 3290 "cplus.met"
        dumperror ();
#line 3290 "cplus.met"
#line 3291 "cplus.met"
        (tokenAhead == 5|| (LexEndLine(),TRACE_LEX(1)));
#line 3291 "cplus.met"
        if ( ! TERM_OR_META(END_LINE,"END_LINE") || !(CommTerm(),1)) {
#line 3291 "cplus.met"
            MulFreeTree(3,_addlist1,stat,statList);
            TOKEN_EXIT(compound_statement_exit,"END_LINE")
#line 3291 "cplus.met"
        } else {
#line 3291 "cplus.met"
            tokenAhead = 0 ;
#line 3291 "cplus.met"
        }
#line 3291 "cplus.met"
#line 3292 "cplus.met"
         hasGotError = 1 ;
#line 3292 "cplus.met"
#line 3293 "cplus.met"
         goto debut ;
#line 3293 "cplus.met"
#line 3293 "cplus.met"
#line 3293 "cplus.met"
    }
#line 3293 "cplus.met"
#line 3295 "cplus.met"
    {
#line 3295 "cplus.met"
        PPTREE _ptTree0=0;
#line 3295 "cplus.met"
        {
#line 3295 "cplus.met"
            PPTREE _ptRes1=0;
#line 3295 "cplus.met"
            _ptRes1= MakeTree(COMPOUND, 1);
#line 3295 "cplus.met"
            ReplaceTree(_ptRes1, 1, statList );
#line 3295 "cplus.met"
            _ptTree0=_ptRes1;
#line 3295 "cplus.met"
        }
#line 3295 "cplus.met"
        _retValue =_ptTree0;
#line 3295 "cplus.met"
        goto compound_statement_ret;
#line 3295 "cplus.met"
    }
#line 3295 "cplus.met"
#line 3295 "cplus.met"
#line 3295 "cplus.met"

#line 3296 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 3296 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 3296 "cplus.met"
return((PPTREE) 0);
#line 3296 "cplus.met"

#line 3296 "cplus.met"
compound_statement_exit :
#line 3296 "cplus.met"

#line 3296 "cplus.met"
    _Debug = TRACE_RULE("compound_statement",TRACE_EXIT,(PPTREE)0);
#line 3296 "cplus.met"
    _funcLevel--;
#line 3296 "cplus.met"
    return((PPTREE) -1) ;
#line 3296 "cplus.met"

#line 3296 "cplus.met"
compound_statement_ret :
#line 3296 "cplus.met"
    
#line 3296 "cplus.met"
    _Debug = TRACE_RULE("compound_statement",TRACE_RETURN,_retValue);
#line 3296 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 3296 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 3296 "cplus.met"
    return _retValue ;
#line 3296 "cplus.met"
}
#line 3296 "cplus.met"

#line 3296 "cplus.met"
#line 2609 "cplus.met"
PPTREE cplus::conditional_expression ( int error_free)
#line 2609 "cplus.met"
{
#line 2609 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 2609 "cplus.met"
    int _value,_nbPre = 0 ;
#line 2609 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 2609 "cplus.met"
    int _Debug = TRACE_RULE("conditional_expression",TRACE_ENTER,(PPTREE)0);
#line 2609 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 2609 "cplus.met"
#line 2609 "cplus.met"
    PPTREE expTree = (PPTREE) 0,condTree = (PPTREE) 0;
#line 2609 "cplus.met"
#line 2611 "cplus.met"
    if ( (expTree=NQUICK_CALL(_Tak(logical_or_expression)(error_free), 91, cplus))== (PPTREE) -1 ) {
#line 2611 "cplus.met"
        MulFreeTree(2,condTree,expTree);
        PROG_EXIT(conditional_expression_exit,"conditional_expression")
#line 2611 "cplus.met"
    }
#line 2611 "cplus.met"
#line 2612 "cplus.met"
    if ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN(INTE,"?") && (tokenAhead = 0,CommTerm(),1)){
#line 2612 "cplus.met"
#line 2613 "cplus.met"
#line 2614 "cplus.met"
        {
#line 2614 "cplus.met"
            PPTREE _ptRes0=0;
#line 2614 "cplus.met"
            _ptRes0= MakeTree(COND_AFF, 3);
#line 2614 "cplus.met"
            ReplaceTree(_ptRes0, 1, expTree );
#line 2614 "cplus.met"
            condTree=_ptRes0;
#line 2614 "cplus.met"
        }
#line 2614 "cplus.met"
#line 2615 "cplus.met"
        {
#line 2615 "cplus.met"
            PPTREE _ptTree0=0;
#line 2615 "cplus.met"
            if ( (_ptTree0=NQUICK_CALL(_Tak(expression)(error_free), 63, cplus))== (PPTREE) -1 ) {
#line 2615 "cplus.met"
                MulFreeTree(3,_ptTree0,condTree,expTree);
                PROG_EXIT(conditional_expression_exit,"conditional_expression")
#line 2615 "cplus.met"
            }
#line 2615 "cplus.met"
            ReplaceTree(condTree , 2 , _ptTree0);
#line 2615 "cplus.met"
        }
#line 2615 "cplus.met"
#line 2616 "cplus.met"
        (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 2616 "cplus.met"
        if (  !SEE_TOKEN( DPOI,":") || !(CommTerm(),1)) {
#line 2616 "cplus.met"
            MulFreeTree(2,condTree,expTree);
            TOKEN_EXIT(conditional_expression_exit,":")
#line 2616 "cplus.met"
        } else {
#line 2616 "cplus.met"
            tokenAhead = 0 ;
#line 2616 "cplus.met"
        }
#line 2616 "cplus.met"
#line 2617 "cplus.met"
        {
#line 2617 "cplus.met"
            PPTREE _ptTree0=0;
#line 2617 "cplus.met"
            {
#line 2617 "cplus.met"
                PPTREE _ptTree1=0;
#line 2617 "cplus.met"
                if ( (_ptTree1=NQUICK_CALL(_Tak(conditional_expression)(error_free), 30, cplus))== (PPTREE) -1 ) {
#line 2617 "cplus.met"
                    MulFreeTree(4,_ptTree1,_ptTree0,condTree,expTree);
                    PROG_EXIT(conditional_expression_exit,"conditional_expression")
#line 2617 "cplus.met"
                }
#line 2617 "cplus.met"
                _ptTree0=ReplaceTree(condTree , 3 , _ptTree1);
#line 2617 "cplus.met"
            }
#line 2617 "cplus.met"
            _retValue =_ptTree0;
#line 2617 "cplus.met"
            goto conditional_expression_ret;
#line 2617 "cplus.met"
        }
#line 2617 "cplus.met"
#line 2617 "cplus.met"
#line 2617 "cplus.met"
    } else {
#line 2617 "cplus.met"
#line 2620 "cplus.met"
        {
#line 2620 "cplus.met"
            _retValue = expTree ;
#line 2620 "cplus.met"
            goto conditional_expression_ret;
#line 2620 "cplus.met"
            
#line 2620 "cplus.met"
        }
#line 2620 "cplus.met"
    }
#line 2620 "cplus.met"
#line 2620 "cplus.met"
#line 2620 "cplus.met"

#line 2621 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2621 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 2621 "cplus.met"
return((PPTREE) 0);
#line 2621 "cplus.met"

#line 2621 "cplus.met"
conditional_expression_exit :
#line 2621 "cplus.met"

#line 2621 "cplus.met"
    _Debug = TRACE_RULE("conditional_expression",TRACE_EXIT,(PPTREE)0);
#line 2621 "cplus.met"
    _funcLevel--;
#line 2621 "cplus.met"
    return((PPTREE) -1) ;
#line 2621 "cplus.met"

#line 2621 "cplus.met"
conditional_expression_ret :
#line 2621 "cplus.met"
    
#line 2621 "cplus.met"
    _Debug = TRACE_RULE("conditional_expression",TRACE_RETURN,_retValue);
#line 2621 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2621 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 2621 "cplus.met"
    return _retValue ;
#line 2621 "cplus.met"
}
#line 2621 "cplus.met"

#line 2621 "cplus.met"
#line 2121 "cplus.met"
PPTREE cplus::const_or_volatile ( int error_free)
#line 2121 "cplus.met"
{
#line 2121 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 2121 "cplus.met"
    int _value,_nbPre = 0 ;
#line 2121 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 2121 "cplus.met"
    int _Debug = TRACE_RULE("const_or_volatile",TRACE_ENTER,(PPTREE)0);
#line 2121 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 2121 "cplus.met"
#line 2122 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 2122 "cplus.met"
    switch( lexEl.Value) {
#line 2122 "cplus.met"
#line 2123 "cplus.met"
        case CONST : 
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
                    _ptRes1= MakeTree(RANGE_MODIFIER, 2);
#line 2123 "cplus.met"
                    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 2123 "cplus.met"
                    if (  !SEE_TOKEN( CONST,"const") || !(_ptTree1 = CommString(lexEl.string()))) {
#line 2123 "cplus.met"
                        MulFreeTree(3,_ptRes1,_ptTree1,_ptTree0);
                        TOKEN_EXIT(const_or_volatile_exit,"const")
#line 2123 "cplus.met"
                    } else {
#line 2123 "cplus.met"
                        tokenAhead = 0 ;
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
                goto const_or_volatile_ret;
#line 2123 "cplus.met"
            }
#line 2123 "cplus.met"
            break;
#line 2123 "cplus.met"
#line 2124 "cplus.met"
        case VOLATILE : 
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
                    _ptRes1= MakeTree(RANGE_MODIFIER, 2);
#line 2124 "cplus.met"
                    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 2124 "cplus.met"
                    if (  !SEE_TOKEN( VOLATILE,"volatile") || !(_ptTree1 = CommString(lexEl.string()))) {
#line 2124 "cplus.met"
                        MulFreeTree(3,_ptRes1,_ptTree1,_ptTree0);
                        TOKEN_EXIT(const_or_volatile_exit,"volatile")
#line 2124 "cplus.met"
                    } else {
#line 2124 "cplus.met"
                        tokenAhead = 0 ;
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
                goto const_or_volatile_ret;
#line 2124 "cplus.met"
            }
#line 2124 "cplus.met"
            break;
#line 2124 "cplus.met"
        default :
#line 2124 "cplus.met"
            CASE_EXIT(const_or_volatile_exit,"either const or volatile")
#line 2124 "cplus.met"
            break;
#line 2124 "cplus.met"
    }
#line 2124 "cplus.met"
#line 2124 "cplus.met"
#line 2125 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2125 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 2125 "cplus.met"
return((PPTREE) 0);
#line 2125 "cplus.met"

#line 2125 "cplus.met"
const_or_volatile_exit :
#line 2125 "cplus.met"

#line 2125 "cplus.met"
    _Debug = TRACE_RULE("const_or_volatile",TRACE_EXIT,(PPTREE)0);
#line 2125 "cplus.met"
    _funcLevel--;
#line 2125 "cplus.met"
    return((PPTREE) -1) ;
#line 2125 "cplus.met"

#line 2125 "cplus.met"
const_or_volatile_ret :
#line 2125 "cplus.met"
    
#line 2125 "cplus.met"
    _Debug = TRACE_RULE("const_or_volatile",TRACE_RETURN,_retValue);
#line 2125 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2125 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 2125 "cplus.met"
    return _retValue ;
#line 2125 "cplus.met"
}
#line 2125 "cplus.met"

#line 2125 "cplus.met"
#line 3064 "cplus.met"
PPTREE cplus::constan ( int error_free)
#line 3064 "cplus.met"
{
#line 3064 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 3064 "cplus.met"
    int _value,_nbPre = 0 ;
#line 3064 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 3064 "cplus.met"
    int _Debug = TRACE_RULE("constan",TRACE_ENTER,(PPTREE)0);
#line 3064 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 3064 "cplus.met"
#line 3065 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3065 "cplus.met"
    switch( lexEl.Value) {
#line 3065 "cplus.met"
#line 3066 "cplus.met"
        case META : 
#line 3066 "cplus.met"
        case INTEGER : 
#line 3066 "cplus.met"
#line 3066 "cplus.met"
            {
#line 3066 "cplus.met"
                PPTREE _ptTree0=0;
#line 3066 "cplus.met"
                {
#line 3066 "cplus.met"
                    PPTREE _ptTree1=0,_ptRes1=0;
#line 3066 "cplus.met"
                    _ptRes1= MakeTree(INTEGER, 1);
#line 3066 "cplus.met"
                    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3066 "cplus.met"
                    if ( ! TERM_OR_META(INTEGER,"INTEGER") || !(BUILD_TERM_META(_ptTree1))) {
#line 3066 "cplus.met"
                        MulFreeTree(3,_ptRes1,_ptTree1,_ptTree0);
                        TOKEN_EXIT(constan_exit,"INTEGER")
#line 3066 "cplus.met"
                    } else {
#line 3066 "cplus.met"
                        tokenAhead = 0 ;
#line 3066 "cplus.met"
                    }
#line 3066 "cplus.met"
                    ReplaceTree(_ptRes1, 1, _ptTree1);
#line 3066 "cplus.met"
                    _ptTree0=_ptRes1;
#line 3066 "cplus.met"
                }
#line 3066 "cplus.met"
                _retValue =_ptTree0;
#line 3066 "cplus.met"
                goto constan_ret;
#line 3066 "cplus.met"
            }
#line 3066 "cplus.met"
            break;
#line 3066 "cplus.met"
#line 3067 "cplus.met"
        case LINTEGER : 
#line 3067 "cplus.met"
#line 3067 "cplus.met"
            {
#line 3067 "cplus.met"
                PPTREE _ptTree0=0;
#line 3067 "cplus.met"
                {
#line 3067 "cplus.met"
                    PPTREE _ptTree1=0,_ptRes1=0;
#line 3067 "cplus.met"
                    _ptRes1= MakeTree(ILONG, 1);
#line 3067 "cplus.met"
                    {
#line 3067 "cplus.met"
                        PPTREE _ptTree2=0,_ptRes2=0;
#line 3067 "cplus.met"
                        _ptRes2= MakeTree(INTEGER, 1);
#line 3067 "cplus.met"
                        (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3067 "cplus.met"
                        if ( ! TERM_OR_META(LINTEGER,"LINTEGER") || !(BUILD_TERM_META(_ptTree2))) {
#line 3067 "cplus.met"
                            MulFreeTree(5,_ptRes2,_ptTree2,_ptRes1,_ptTree1,_ptTree0);
                            TOKEN_EXIT(constan_exit,"LINTEGER")
#line 3067 "cplus.met"
                        } else {
#line 3067 "cplus.met"
                            tokenAhead = 0 ;
#line 3067 "cplus.met"
                        }
#line 3067 "cplus.met"
                        ReplaceTree(_ptRes2, 1, _ptTree2);
#line 3067 "cplus.met"
                        _ptTree1=_ptRes2;
#line 3067 "cplus.met"
                    }
#line 3067 "cplus.met"
                    ReplaceTree(_ptRes1, 1, _ptTree1);
#line 3067 "cplus.met"
                    _ptTree0=_ptRes1;
#line 3067 "cplus.met"
                }
#line 3067 "cplus.met"
                _retValue =_ptTree0;
#line 3067 "cplus.met"
                goto constan_ret;
#line 3067 "cplus.met"
            }
#line 3067 "cplus.met"
            break;
#line 3067 "cplus.met"
#line 3068 "cplus.met"
        case LLINTEGER : 
#line 3068 "cplus.met"
#line 3068 "cplus.met"
            {
#line 3068 "cplus.met"
                PPTREE _ptTree0=0;
#line 3068 "cplus.met"
                {
#line 3068 "cplus.met"
                    PPTREE _ptTree1=0,_ptRes1=0;
#line 3068 "cplus.met"
                    _ptRes1= MakeTree(ILONGLONG, 1);
#line 3068 "cplus.met"
                    {
#line 3068 "cplus.met"
                        PPTREE _ptTree2=0,_ptRes2=0;
#line 3068 "cplus.met"
                        _ptRes2= MakeTree(INTEGER, 1);
#line 3068 "cplus.met"
                        (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3068 "cplus.met"
                        if ( ! TERM_OR_META(LINTEGER,"LINTEGER") || !(BUILD_TERM_META(_ptTree2))) {
#line 3068 "cplus.met"
                            MulFreeTree(5,_ptRes2,_ptTree2,_ptRes1,_ptTree1,_ptTree0);
                            TOKEN_EXIT(constan_exit,"LINTEGER")
#line 3068 "cplus.met"
                        } else {
#line 3068 "cplus.met"
                            tokenAhead = 0 ;
#line 3068 "cplus.met"
                        }
#line 3068 "cplus.met"
                        ReplaceTree(_ptRes2, 1, _ptTree2);
#line 3068 "cplus.met"
                        _ptTree1=_ptRes2;
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
                goto constan_ret;
#line 3068 "cplus.met"
            }
#line 3068 "cplus.met"
            break;
#line 3068 "cplus.met"
#line 3069 "cplus.met"
        case UINTEGER : 
#line 3069 "cplus.met"
#line 3069 "cplus.met"
            {
#line 3069 "cplus.met"
                PPTREE _ptTree0=0;
#line 3069 "cplus.met"
                {
#line 3069 "cplus.met"
                    PPTREE _ptTree1=0,_ptRes1=0;
#line 3069 "cplus.met"
                    _ptRes1= MakeTree(IUN, 1);
#line 3069 "cplus.met"
                    {
#line 3069 "cplus.met"
                        PPTREE _ptTree2=0,_ptRes2=0;
#line 3069 "cplus.met"
                        _ptRes2= MakeTree(INTEGER, 1);
#line 3069 "cplus.met"
                        (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3069 "cplus.met"
                        if ( ! TERM_OR_META(UINTEGER,"UINTEGER") || !(BUILD_TERM_META(_ptTree2))) {
#line 3069 "cplus.met"
                            MulFreeTree(5,_ptRes2,_ptTree2,_ptRes1,_ptTree1,_ptTree0);
                            TOKEN_EXIT(constan_exit,"UINTEGER")
#line 3069 "cplus.met"
                        } else {
#line 3069 "cplus.met"
                            tokenAhead = 0 ;
#line 3069 "cplus.met"
                        }
#line 3069 "cplus.met"
                        ReplaceTree(_ptRes2, 1, _ptTree2);
#line 3069 "cplus.met"
                        _ptTree1=_ptRes2;
#line 3069 "cplus.met"
                    }
#line 3069 "cplus.met"
                    ReplaceTree(_ptRes1, 1, _ptTree1);
#line 3069 "cplus.met"
                    _ptTree0=_ptRes1;
#line 3069 "cplus.met"
                }
#line 3069 "cplus.met"
                _retValue =_ptTree0;
#line 3069 "cplus.met"
                goto constan_ret;
#line 3069 "cplus.met"
            }
#line 3069 "cplus.met"
            break;
#line 3069 "cplus.met"
#line 3070 "cplus.met"
        case ULINTEGER : 
#line 3070 "cplus.met"
#line 3070 "cplus.met"
            {
#line 3070 "cplus.met"
                PPTREE _ptTree0=0;
#line 3070 "cplus.met"
                {
#line 3070 "cplus.met"
                    PPTREE _ptTree1=0,_ptRes1=0;
#line 3070 "cplus.met"
                    _ptRes1= MakeTree(IUNLONG, 1);
#line 3070 "cplus.met"
                    {
#line 3070 "cplus.met"
                        PPTREE _ptTree2=0,_ptRes2=0;
#line 3070 "cplus.met"
                        _ptRes2= MakeTree(INTEGER, 1);
#line 3070 "cplus.met"
                        (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3070 "cplus.met"
                        if ( ! TERM_OR_META(ULINTEGER,"ULINTEGER") || !(BUILD_TERM_META(_ptTree2))) {
#line 3070 "cplus.met"
                            MulFreeTree(5,_ptRes2,_ptTree2,_ptRes1,_ptTree1,_ptTree0);
                            TOKEN_EXIT(constan_exit,"ULINTEGER")
#line 3070 "cplus.met"
                        } else {
#line 3070 "cplus.met"
                            tokenAhead = 0 ;
#line 3070 "cplus.met"
                        }
#line 3070 "cplus.met"
                        ReplaceTree(_ptRes2, 1, _ptTree2);
#line 3070 "cplus.met"
                        _ptTree1=_ptRes2;
#line 3070 "cplus.met"
                    }
#line 3070 "cplus.met"
                    ReplaceTree(_ptRes1, 1, _ptTree1);
#line 3070 "cplus.met"
                    _ptTree0=_ptRes1;
#line 3070 "cplus.met"
                }
#line 3070 "cplus.met"
                _retValue =_ptTree0;
#line 3070 "cplus.met"
                goto constan_ret;
#line 3070 "cplus.met"
            }
#line 3070 "cplus.met"
            break;
#line 3070 "cplus.met"
#line 3071 "cplus.met"
        case ULLINTEGER : 
#line 3071 "cplus.met"
#line 3071 "cplus.met"
            {
#line 3071 "cplus.met"
                PPTREE _ptTree0=0;
#line 3071 "cplus.met"
                {
#line 3071 "cplus.met"
                    PPTREE _ptTree1=0,_ptRes1=0;
#line 3071 "cplus.met"
                    _ptRes1= MakeTree(IUNLONGLONG, 1);
#line 3071 "cplus.met"
                    {
#line 3071 "cplus.met"
                        PPTREE _ptTree2=0,_ptRes2=0;
#line 3071 "cplus.met"
                        _ptRes2= MakeTree(INTEGER, 1);
#line 3071 "cplus.met"
                        (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3071 "cplus.met"
                        if ( ! TERM_OR_META(ULINTEGER,"ULINTEGER") || !(BUILD_TERM_META(_ptTree2))) {
#line 3071 "cplus.met"
                            MulFreeTree(5,_ptRes2,_ptTree2,_ptRes1,_ptTree1,_ptTree0);
                            TOKEN_EXIT(constan_exit,"ULINTEGER")
#line 3071 "cplus.met"
                        } else {
#line 3071 "cplus.met"
                            tokenAhead = 0 ;
#line 3071 "cplus.met"
                        }
#line 3071 "cplus.met"
                        ReplaceTree(_ptRes2, 1, _ptTree2);
#line 3071 "cplus.met"
                        _ptTree1=_ptRes2;
#line 3071 "cplus.met"
                    }
#line 3071 "cplus.met"
                    ReplaceTree(_ptRes1, 1, _ptTree1);
#line 3071 "cplus.met"
                    _ptTree0=_ptRes1;
#line 3071 "cplus.met"
                }
#line 3071 "cplus.met"
                _retValue =_ptTree0;
#line 3071 "cplus.met"
                goto constan_ret;
#line 3071 "cplus.met"
            }
#line 3071 "cplus.met"
            break;
#line 3071 "cplus.met"
#line 3072 "cplus.met"
        case HEXA : 
#line 3072 "cplus.met"
#line 3072 "cplus.met"
            {
#line 3072 "cplus.met"
                PPTREE _ptTree0=0;
#line 3072 "cplus.met"
                {
#line 3072 "cplus.met"
                    PPTREE _ptTree1=0,_ptRes1=0;
#line 3072 "cplus.met"
                    _ptRes1= MakeTree(HEXA, 1);
#line 3072 "cplus.met"
                    {
#line 3072 "cplus.met"
                        PPTREE _ptTree2=0,_ptRes2=0;
#line 3072 "cplus.met"
                        _ptRes2= MakeTree(INTEGER, 1);
#line 3072 "cplus.met"
                        (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3072 "cplus.met"
                        if ( ! TERM_OR_META(HEXA,"HEXA") || !(BUILD_TERM_META(_ptTree2))) {
#line 3072 "cplus.met"
                            MulFreeTree(5,_ptRes2,_ptTree2,_ptRes1,_ptTree1,_ptTree0);
                            TOKEN_EXIT(constan_exit,"HEXA")
#line 3072 "cplus.met"
                        } else {
#line 3072 "cplus.met"
                            tokenAhead = 0 ;
#line 3072 "cplus.met"
                        }
#line 3072 "cplus.met"
                        ReplaceTree(_ptRes2, 1, _ptTree2);
#line 3072 "cplus.met"
                        _ptTree1=_ptRes2;
#line 3072 "cplus.met"
                    }
#line 3072 "cplus.met"
                    ReplaceTree(_ptRes1, 1, _ptTree1);
#line 3072 "cplus.met"
                    _ptTree0=_ptRes1;
#line 3072 "cplus.met"
                }
#line 3072 "cplus.met"
                _retValue =_ptTree0;
#line 3072 "cplus.met"
                goto constan_ret;
#line 3072 "cplus.met"
            }
#line 3072 "cplus.met"
            break;
#line 3072 "cplus.met"
#line 3073 "cplus.met"
        case LHEXA : 
#line 3073 "cplus.met"
#line 3073 "cplus.met"
            {
#line 3073 "cplus.met"
                PPTREE _ptTree0=0;
#line 3073 "cplus.met"
                {
#line 3073 "cplus.met"
                    PPTREE _ptTree1=0,_ptRes1=0;
#line 3073 "cplus.met"
                    _ptRes1= MakeTree(LONG, 1);
#line 3073 "cplus.met"
                    {
#line 3073 "cplus.met"
                        PPTREE _ptTree2=0,_ptRes2=0;
#line 3073 "cplus.met"
                        _ptRes2= MakeTree(HEXA, 1);
#line 3073 "cplus.met"
                        {
#line 3073 "cplus.met"
                            PPTREE _ptTree3=0,_ptRes3=0;
#line 3073 "cplus.met"
                            _ptRes3= MakeTree(INTEGER, 1);
#line 3073 "cplus.met"
                            (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3073 "cplus.met"
                            if ( ! TERM_OR_META(LHEXA,"LHEXA") || !(BUILD_TERM_META(_ptTree3))) {
#line 3073 "cplus.met"
                                MulFreeTree(7,_ptRes3,_ptTree3,_ptRes2,_ptTree2,_ptRes1,_ptTree1,_ptTree0);
                                TOKEN_EXIT(constan_exit,"LHEXA")
#line 3073 "cplus.met"
                            } else {
#line 3073 "cplus.met"
                                tokenAhead = 0 ;
#line 3073 "cplus.met"
                            }
#line 3073 "cplus.met"
                            ReplaceTree(_ptRes3, 1, _ptTree3);
#line 3073 "cplus.met"
                            _ptTree2=_ptRes3;
#line 3073 "cplus.met"
                        }
#line 3073 "cplus.met"
                        ReplaceTree(_ptRes2, 1, _ptTree2);
#line 3073 "cplus.met"
                        _ptTree1=_ptRes2;
#line 3073 "cplus.met"
                    }
#line 3073 "cplus.met"
                    ReplaceTree(_ptRes1, 1, _ptTree1);
#line 3073 "cplus.met"
                    _ptTree0=_ptRes1;
#line 3073 "cplus.met"
                }
#line 3073 "cplus.met"
                _retValue =_ptTree0;
#line 3073 "cplus.met"
                goto constan_ret;
#line 3073 "cplus.met"
            }
#line 3073 "cplus.met"
            break;
#line 3073 "cplus.met"
#line 3074 "cplus.met"
        case LLHEXA : 
#line 3074 "cplus.met"
#line 3074 "cplus.met"
            {
#line 3074 "cplus.met"
                PPTREE _ptTree0=0;
#line 3074 "cplus.met"
                {
#line 3074 "cplus.met"
                    PPTREE _ptTree1=0,_ptRes1=0;
#line 3074 "cplus.met"
                    _ptRes1= MakeTree(LONGLONG, 1);
#line 3074 "cplus.met"
                    {
#line 3074 "cplus.met"
                        PPTREE _ptTree2=0,_ptRes2=0;
#line 3074 "cplus.met"
                        _ptRes2= MakeTree(HEXA, 1);
#line 3074 "cplus.met"
                        {
#line 3074 "cplus.met"
                            PPTREE _ptTree3=0,_ptRes3=0;
#line 3074 "cplus.met"
                            _ptRes3= MakeTree(INTEGER, 1);
#line 3074 "cplus.met"
                            (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3074 "cplus.met"
                            if ( ! TERM_OR_META(LHEXA,"LHEXA") || !(BUILD_TERM_META(_ptTree3))) {
#line 3074 "cplus.met"
                                MulFreeTree(7,_ptRes3,_ptTree3,_ptRes2,_ptTree2,_ptRes1,_ptTree1,_ptTree0);
                                TOKEN_EXIT(constan_exit,"LHEXA")
#line 3074 "cplus.met"
                            } else {
#line 3074 "cplus.met"
                                tokenAhead = 0 ;
#line 3074 "cplus.met"
                            }
#line 3074 "cplus.met"
                            ReplaceTree(_ptRes3, 1, _ptTree3);
#line 3074 "cplus.met"
                            _ptTree2=_ptRes3;
#line 3074 "cplus.met"
                        }
#line 3074 "cplus.met"
                        ReplaceTree(_ptRes2, 1, _ptTree2);
#line 3074 "cplus.met"
                        _ptTree1=_ptRes2;
#line 3074 "cplus.met"
                    }
#line 3074 "cplus.met"
                    ReplaceTree(_ptRes1, 1, _ptTree1);
#line 3074 "cplus.met"
                    _ptTree0=_ptRes1;
#line 3074 "cplus.met"
                }
#line 3074 "cplus.met"
                _retValue =_ptTree0;
#line 3074 "cplus.met"
                goto constan_ret;
#line 3074 "cplus.met"
            }
#line 3074 "cplus.met"
            break;
#line 3074 "cplus.met"
#line 3075 "cplus.met"
        case UHEXA : 
#line 3075 "cplus.met"
#line 3075 "cplus.met"
            {
#line 3075 "cplus.met"
                PPTREE _ptTree0=0;
#line 3075 "cplus.met"
                {
#line 3075 "cplus.met"
                    PPTREE _ptTree1=0,_ptRes1=0;
#line 3075 "cplus.met"
                    _ptRes1= MakeTree(IUN, 1);
#line 3075 "cplus.met"
                    {
#line 3075 "cplus.met"
                        PPTREE _ptTree2=0,_ptRes2=0;
#line 3075 "cplus.met"
                        _ptRes2= MakeTree(HEXA, 1);
#line 3075 "cplus.met"
                        {
#line 3075 "cplus.met"
                            PPTREE _ptTree3=0,_ptRes3=0;
#line 3075 "cplus.met"
                            _ptRes3= MakeTree(INTEGER, 1);
#line 3075 "cplus.met"
                            (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3075 "cplus.met"
                            if ( ! TERM_OR_META(UHEXA,"UHEXA") || !(BUILD_TERM_META(_ptTree3))) {
#line 3075 "cplus.met"
                                MulFreeTree(7,_ptRes3,_ptTree3,_ptRes2,_ptTree2,_ptRes1,_ptTree1,_ptTree0);
                                TOKEN_EXIT(constan_exit,"UHEXA")
#line 3075 "cplus.met"
                            } else {
#line 3075 "cplus.met"
                                tokenAhead = 0 ;
#line 3075 "cplus.met"
                            }
#line 3075 "cplus.met"
                            ReplaceTree(_ptRes3, 1, _ptTree3);
#line 3075 "cplus.met"
                            _ptTree2=_ptRes3;
#line 3075 "cplus.met"
                        }
#line 3075 "cplus.met"
                        ReplaceTree(_ptRes2, 1, _ptTree2);
#line 3075 "cplus.met"
                        _ptTree1=_ptRes2;
#line 3075 "cplus.met"
                    }
#line 3075 "cplus.met"
                    ReplaceTree(_ptRes1, 1, _ptTree1);
#line 3075 "cplus.met"
                    _ptTree0=_ptRes1;
#line 3075 "cplus.met"
                }
#line 3075 "cplus.met"
                _retValue =_ptTree0;
#line 3075 "cplus.met"
                goto constan_ret;
#line 3075 "cplus.met"
            }
#line 3075 "cplus.met"
            break;
#line 3075 "cplus.met"
#line 3076 "cplus.met"
        case ULHEXA : 
#line 3076 "cplus.met"
#line 3076 "cplus.met"
            {
#line 3076 "cplus.met"
                PPTREE _ptTree0=0;
#line 3076 "cplus.met"
                {
#line 3076 "cplus.met"
                    PPTREE _ptTree1=0,_ptRes1=0;
#line 3076 "cplus.met"
                    _ptRes1= MakeTree(IUNLONG, 1);
#line 3076 "cplus.met"
                    {
#line 3076 "cplus.met"
                        PPTREE _ptTree2=0,_ptRes2=0;
#line 3076 "cplus.met"
                        _ptRes2= MakeTree(HEXA, 1);
#line 3076 "cplus.met"
                        {
#line 3076 "cplus.met"
                            PPTREE _ptTree3=0,_ptRes3=0;
#line 3076 "cplus.met"
                            _ptRes3= MakeTree(INTEGER, 1);
#line 3076 "cplus.met"
                            (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3076 "cplus.met"
                            if ( ! TERM_OR_META(ULHEXA,"ULHEXA") || !(BUILD_TERM_META(_ptTree3))) {
#line 3076 "cplus.met"
                                MulFreeTree(7,_ptRes3,_ptTree3,_ptRes2,_ptTree2,_ptRes1,_ptTree1,_ptTree0);
                                TOKEN_EXIT(constan_exit,"ULHEXA")
#line 3076 "cplus.met"
                            } else {
#line 3076 "cplus.met"
                                tokenAhead = 0 ;
#line 3076 "cplus.met"
                            }
#line 3076 "cplus.met"
                            ReplaceTree(_ptRes3, 1, _ptTree3);
#line 3076 "cplus.met"
                            _ptTree2=_ptRes3;
#line 3076 "cplus.met"
                        }
#line 3076 "cplus.met"
                        ReplaceTree(_ptRes2, 1, _ptTree2);
#line 3076 "cplus.met"
                        _ptTree1=_ptRes2;
#line 3076 "cplus.met"
                    }
#line 3076 "cplus.met"
                    ReplaceTree(_ptRes1, 1, _ptTree1);
#line 3076 "cplus.met"
                    _ptTree0=_ptRes1;
#line 3076 "cplus.met"
                }
#line 3076 "cplus.met"
                _retValue =_ptTree0;
#line 3076 "cplus.met"
                goto constan_ret;
#line 3076 "cplus.met"
            }
#line 3076 "cplus.met"
            break;
#line 3076 "cplus.met"
#line 3077 "cplus.met"
        case ULLHEXA : 
#line 3077 "cplus.met"
#line 3077 "cplus.met"
            {
#line 3077 "cplus.met"
                PPTREE _ptTree0=0;
#line 3077 "cplus.met"
                {
#line 3077 "cplus.met"
                    PPTREE _ptTree1=0,_ptRes1=0;
#line 3077 "cplus.met"
                    _ptRes1= MakeTree(IUNLONGLONG, 1);
#line 3077 "cplus.met"
                    {
#line 3077 "cplus.met"
                        PPTREE _ptTree2=0,_ptRes2=0;
#line 3077 "cplus.met"
                        _ptRes2= MakeTree(HEXA, 1);
#line 3077 "cplus.met"
                        {
#line 3077 "cplus.met"
                            PPTREE _ptTree3=0,_ptRes3=0;
#line 3077 "cplus.met"
                            _ptRes3= MakeTree(INTEGER, 1);
#line 3077 "cplus.met"
                            (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3077 "cplus.met"
                            if ( ! TERM_OR_META(ULHEXA,"ULHEXA") || !(BUILD_TERM_META(_ptTree3))) {
#line 3077 "cplus.met"
                                MulFreeTree(7,_ptRes3,_ptTree3,_ptRes2,_ptTree2,_ptRes1,_ptTree1,_ptTree0);
                                TOKEN_EXIT(constan_exit,"ULHEXA")
#line 3077 "cplus.met"
                            } else {
#line 3077 "cplus.met"
                                tokenAhead = 0 ;
#line 3077 "cplus.met"
                            }
#line 3077 "cplus.met"
                            ReplaceTree(_ptRes3, 1, _ptTree3);
#line 3077 "cplus.met"
                            _ptTree2=_ptRes3;
#line 3077 "cplus.met"
                        }
#line 3077 "cplus.met"
                        ReplaceTree(_ptRes2, 1, _ptTree2);
#line 3077 "cplus.met"
                        _ptTree1=_ptRes2;
#line 3077 "cplus.met"
                    }
#line 3077 "cplus.met"
                    ReplaceTree(_ptRes1, 1, _ptTree1);
#line 3077 "cplus.met"
                    _ptTree0=_ptRes1;
#line 3077 "cplus.met"
                }
#line 3077 "cplus.met"
                _retValue =_ptTree0;
#line 3077 "cplus.met"
                goto constan_ret;
#line 3077 "cplus.met"
            }
#line 3077 "cplus.met"
            break;
#line 3077 "cplus.met"
#line 3078 "cplus.met"
        case OCTAL : 
#line 3078 "cplus.met"
#line 3078 "cplus.met"
            {
#line 3078 "cplus.met"
                PPTREE _ptTree0=0;
#line 3078 "cplus.met"
                {
#line 3078 "cplus.met"
                    PPTREE _ptTree1=0,_ptRes1=0;
#line 3078 "cplus.met"
                    _ptRes1= MakeTree(OCTAL, 1);
#line 3078 "cplus.met"
                    {
#line 3078 "cplus.met"
                        PPTREE _ptTree2=0,_ptRes2=0;
#line 3078 "cplus.met"
                        _ptRes2= MakeTree(INTEGER, 1);
#line 3078 "cplus.met"
                        (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3078 "cplus.met"
                        if ( ! TERM_OR_META(OCTAL,"OCTAL") || !(BUILD_TERM_META(_ptTree2))) {
#line 3078 "cplus.met"
                            MulFreeTree(5,_ptRes2,_ptTree2,_ptRes1,_ptTree1,_ptTree0);
                            TOKEN_EXIT(constan_exit,"OCTAL")
#line 3078 "cplus.met"
                        } else {
#line 3078 "cplus.met"
                            tokenAhead = 0 ;
#line 3078 "cplus.met"
                        }
#line 3078 "cplus.met"
                        ReplaceTree(_ptRes2, 1, _ptTree2);
#line 3078 "cplus.met"
                        _ptTree1=_ptRes2;
#line 3078 "cplus.met"
                    }
#line 3078 "cplus.met"
                    ReplaceTree(_ptRes1, 1, _ptTree1);
#line 3078 "cplus.met"
                    _ptTree0=_ptRes1;
#line 3078 "cplus.met"
                }
#line 3078 "cplus.met"
                _retValue =_ptTree0;
#line 3078 "cplus.met"
                goto constan_ret;
#line 3078 "cplus.met"
            }
#line 3078 "cplus.met"
            break;
#line 3078 "cplus.met"
#line 3079 "cplus.met"
        case LOCTAL : 
#line 3079 "cplus.met"
#line 3079 "cplus.met"
            {
#line 3079 "cplus.met"
                PPTREE _ptTree0=0;
#line 3079 "cplus.met"
                {
#line 3079 "cplus.met"
                    PPTREE _ptTree1=0,_ptRes1=0;
#line 3079 "cplus.met"
                    _ptRes1= MakeTree(ILONG, 1);
#line 3079 "cplus.met"
                    {
#line 3079 "cplus.met"
                        PPTREE _ptTree2=0,_ptRes2=0;
#line 3079 "cplus.met"
                        _ptRes2= MakeTree(OCTAL, 1);
#line 3079 "cplus.met"
                        {
#line 3079 "cplus.met"
                            PPTREE _ptTree3=0,_ptRes3=0;
#line 3079 "cplus.met"
                            _ptRes3= MakeTree(INTEGER, 1);
#line 3079 "cplus.met"
                            (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3079 "cplus.met"
                            if ( ! TERM_OR_META(LOCTAL,"LOCTAL") || !(BUILD_TERM_META(_ptTree3))) {
#line 3079 "cplus.met"
                                MulFreeTree(7,_ptRes3,_ptTree3,_ptRes2,_ptTree2,_ptRes1,_ptTree1,_ptTree0);
                                TOKEN_EXIT(constan_exit,"LOCTAL")
#line 3079 "cplus.met"
                            } else {
#line 3079 "cplus.met"
                                tokenAhead = 0 ;
#line 3079 "cplus.met"
                            }
#line 3079 "cplus.met"
                            ReplaceTree(_ptRes3, 1, _ptTree3);
#line 3079 "cplus.met"
                            _ptTree2=_ptRes3;
#line 3079 "cplus.met"
                        }
#line 3079 "cplus.met"
                        ReplaceTree(_ptRes2, 1, _ptTree2);
#line 3079 "cplus.met"
                        _ptTree1=_ptRes2;
#line 3079 "cplus.met"
                    }
#line 3079 "cplus.met"
                    ReplaceTree(_ptRes1, 1, _ptTree1);
#line 3079 "cplus.met"
                    _ptTree0=_ptRes1;
#line 3079 "cplus.met"
                }
#line 3079 "cplus.met"
                _retValue =_ptTree0;
#line 3079 "cplus.met"
                goto constan_ret;
#line 3079 "cplus.met"
            }
#line 3079 "cplus.met"
            break;
#line 3079 "cplus.met"
#line 3080 "cplus.met"
        case LLOCTAL : 
#line 3080 "cplus.met"
#line 3080 "cplus.met"
            {
#line 3080 "cplus.met"
                PPTREE _ptTree0=0;
#line 3080 "cplus.met"
                {
#line 3080 "cplus.met"
                    PPTREE _ptTree1=0,_ptRes1=0;
#line 3080 "cplus.met"
                    _ptRes1= MakeTree(ILONGLONG, 1);
#line 3080 "cplus.met"
                    {
#line 3080 "cplus.met"
                        PPTREE _ptTree2=0,_ptRes2=0;
#line 3080 "cplus.met"
                        _ptRes2= MakeTree(OCTAL, 1);
#line 3080 "cplus.met"
                        {
#line 3080 "cplus.met"
                            PPTREE _ptTree3=0,_ptRes3=0;
#line 3080 "cplus.met"
                            _ptRes3= MakeTree(INTEGER, 1);
#line 3080 "cplus.met"
                            (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3080 "cplus.met"
                            if ( ! TERM_OR_META(LOCTAL,"LOCTAL") || !(BUILD_TERM_META(_ptTree3))) {
#line 3080 "cplus.met"
                                MulFreeTree(7,_ptRes3,_ptTree3,_ptRes2,_ptTree2,_ptRes1,_ptTree1,_ptTree0);
                                TOKEN_EXIT(constan_exit,"LOCTAL")
#line 3080 "cplus.met"
                            } else {
#line 3080 "cplus.met"
                                tokenAhead = 0 ;
#line 3080 "cplus.met"
                            }
#line 3080 "cplus.met"
                            ReplaceTree(_ptRes3, 1, _ptTree3);
#line 3080 "cplus.met"
                            _ptTree2=_ptRes3;
#line 3080 "cplus.met"
                        }
#line 3080 "cplus.met"
                        ReplaceTree(_ptRes2, 1, _ptTree2);
#line 3080 "cplus.met"
                        _ptTree1=_ptRes2;
#line 3080 "cplus.met"
                    }
#line 3080 "cplus.met"
                    ReplaceTree(_ptRes1, 1, _ptTree1);
#line 3080 "cplus.met"
                    _ptTree0=_ptRes1;
#line 3080 "cplus.met"
                }
#line 3080 "cplus.met"
                _retValue =_ptTree0;
#line 3080 "cplus.met"
                goto constan_ret;
#line 3080 "cplus.met"
            }
#line 3080 "cplus.met"
            break;
#line 3080 "cplus.met"
#line 3081 "cplus.met"
        case UOCTAL : 
#line 3081 "cplus.met"
#line 3081 "cplus.met"
            {
#line 3081 "cplus.met"
                PPTREE _ptTree0=0;
#line 3081 "cplus.met"
                {
#line 3081 "cplus.met"
                    PPTREE _ptTree1=0,_ptRes1=0;
#line 3081 "cplus.met"
                    _ptRes1= MakeTree(IUN, 1);
#line 3081 "cplus.met"
                    {
#line 3081 "cplus.met"
                        PPTREE _ptTree2=0,_ptRes2=0;
#line 3081 "cplus.met"
                        _ptRes2= MakeTree(OCTAL, 1);
#line 3081 "cplus.met"
                        {
#line 3081 "cplus.met"
                            PPTREE _ptTree3=0,_ptRes3=0;
#line 3081 "cplus.met"
                            _ptRes3= MakeTree(INTEGER, 1);
#line 3081 "cplus.met"
                            (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3081 "cplus.met"
                            if ( ! TERM_OR_META(UOCTAL,"UOCTAL") || !(BUILD_TERM_META(_ptTree3))) {
#line 3081 "cplus.met"
                                MulFreeTree(7,_ptRes3,_ptTree3,_ptRes2,_ptTree2,_ptRes1,_ptTree1,_ptTree0);
                                TOKEN_EXIT(constan_exit,"UOCTAL")
#line 3081 "cplus.met"
                            } else {
#line 3081 "cplus.met"
                                tokenAhead = 0 ;
#line 3081 "cplus.met"
                            }
#line 3081 "cplus.met"
                            ReplaceTree(_ptRes3, 1, _ptTree3);
#line 3081 "cplus.met"
                            _ptTree2=_ptRes3;
#line 3081 "cplus.met"
                        }
#line 3081 "cplus.met"
                        ReplaceTree(_ptRes2, 1, _ptTree2);
#line 3081 "cplus.met"
                        _ptTree1=_ptRes2;
#line 3081 "cplus.met"
                    }
#line 3081 "cplus.met"
                    ReplaceTree(_ptRes1, 1, _ptTree1);
#line 3081 "cplus.met"
                    _ptTree0=_ptRes1;
#line 3081 "cplus.met"
                }
#line 3081 "cplus.met"
                _retValue =_ptTree0;
#line 3081 "cplus.met"
                goto constan_ret;
#line 3081 "cplus.met"
            }
#line 3081 "cplus.met"
            break;
#line 3081 "cplus.met"
#line 3082 "cplus.met"
        case ULOCTAL : 
#line 3082 "cplus.met"
#line 3082 "cplus.met"
            {
#line 3082 "cplus.met"
                PPTREE _ptTree0=0;
#line 3082 "cplus.met"
                {
#line 3082 "cplus.met"
                    PPTREE _ptTree1=0,_ptRes1=0;
#line 3082 "cplus.met"
                    _ptRes1= MakeTree(IUNLONG, 1);
#line 3082 "cplus.met"
                    {
#line 3082 "cplus.met"
                        PPTREE _ptTree2=0,_ptRes2=0;
#line 3082 "cplus.met"
                        _ptRes2= MakeTree(OCTAL, 1);
#line 3082 "cplus.met"
                        {
#line 3082 "cplus.met"
                            PPTREE _ptTree3=0,_ptRes3=0;
#line 3082 "cplus.met"
                            _ptRes3= MakeTree(INTEGER, 1);
#line 3082 "cplus.met"
                            (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3082 "cplus.met"
                            if ( ! TERM_OR_META(ULOCTAL,"ULOCTAL") || !(BUILD_TERM_META(_ptTree3))) {
#line 3082 "cplus.met"
                                MulFreeTree(7,_ptRes3,_ptTree3,_ptRes2,_ptTree2,_ptRes1,_ptTree1,_ptTree0);
                                TOKEN_EXIT(constan_exit,"ULOCTAL")
#line 3082 "cplus.met"
                            } else {
#line 3082 "cplus.met"
                                tokenAhead = 0 ;
#line 3082 "cplus.met"
                            }
#line 3082 "cplus.met"
                            ReplaceTree(_ptRes3, 1, _ptTree3);
#line 3082 "cplus.met"
                            _ptTree2=_ptRes3;
#line 3082 "cplus.met"
                        }
#line 3082 "cplus.met"
                        ReplaceTree(_ptRes2, 1, _ptTree2);
#line 3082 "cplus.met"
                        _ptTree1=_ptRes2;
#line 3082 "cplus.met"
                    }
#line 3082 "cplus.met"
                    ReplaceTree(_ptRes1, 1, _ptTree1);
#line 3082 "cplus.met"
                    _ptTree0=_ptRes1;
#line 3082 "cplus.met"
                }
#line 3082 "cplus.met"
                _retValue =_ptTree0;
#line 3082 "cplus.met"
                goto constan_ret;
#line 3082 "cplus.met"
            }
#line 3082 "cplus.met"
            break;
#line 3082 "cplus.met"
#line 3083 "cplus.met"
        case ULLOCTAL : 
#line 3083 "cplus.met"
#line 3083 "cplus.met"
            {
#line 3083 "cplus.met"
                PPTREE _ptTree0=0;
#line 3083 "cplus.met"
                {
#line 3083 "cplus.met"
                    PPTREE _ptTree1=0,_ptRes1=0;
#line 3083 "cplus.met"
                    _ptRes1= MakeTree(IUNLONGLONG, 1);
#line 3083 "cplus.met"
                    {
#line 3083 "cplus.met"
                        PPTREE _ptTree2=0,_ptRes2=0;
#line 3083 "cplus.met"
                        _ptRes2= MakeTree(OCTAL, 1);
#line 3083 "cplus.met"
                        {
#line 3083 "cplus.met"
                            PPTREE _ptTree3=0,_ptRes3=0;
#line 3083 "cplus.met"
                            _ptRes3= MakeTree(INTEGER, 1);
#line 3083 "cplus.met"
                            (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3083 "cplus.met"
                            if ( ! TERM_OR_META(ULOCTAL,"ULOCTAL") || !(BUILD_TERM_META(_ptTree3))) {
#line 3083 "cplus.met"
                                MulFreeTree(7,_ptRes3,_ptTree3,_ptRes2,_ptTree2,_ptRes1,_ptTree1,_ptTree0);
                                TOKEN_EXIT(constan_exit,"ULOCTAL")
#line 3083 "cplus.met"
                            } else {
#line 3083 "cplus.met"
                                tokenAhead = 0 ;
#line 3083 "cplus.met"
                            }
#line 3083 "cplus.met"
                            ReplaceTree(_ptRes3, 1, _ptTree3);
#line 3083 "cplus.met"
                            _ptTree2=_ptRes3;
#line 3083 "cplus.met"
                        }
#line 3083 "cplus.met"
                        ReplaceTree(_ptRes2, 1, _ptTree2);
#line 3083 "cplus.met"
                        _ptTree1=_ptRes2;
#line 3083 "cplus.met"
                    }
#line 3083 "cplus.met"
                    ReplaceTree(_ptRes1, 1, _ptTree1);
#line 3083 "cplus.met"
                    _ptTree0=_ptRes1;
#line 3083 "cplus.met"
                }
#line 3083 "cplus.met"
                _retValue =_ptTree0;
#line 3083 "cplus.met"
                goto constan_ret;
#line 3083 "cplus.met"
            }
#line 3083 "cplus.met"
            break;
#line 3083 "cplus.met"
#line 3084 "cplus.met"
        case FLOATVAL : 
#line 3084 "cplus.met"
#line 3084 "cplus.met"
            {
#line 3084 "cplus.met"
                PPTREE _ptTree0=0;
#line 3084 "cplus.met"
                {
#line 3084 "cplus.met"
                    PPTREE _ptTree1=0,_ptRes1=0;
#line 3084 "cplus.met"
                    _ptRes1= MakeTree(FLOAT, 1);
#line 3084 "cplus.met"
                    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3084 "cplus.met"
                    if ( ! TERM_OR_META(FLOATVAL,"FLOATVAL") || !(BUILD_TERM_META(_ptTree1))) {
#line 3084 "cplus.met"
                        MulFreeTree(3,_ptRes1,_ptTree1,_ptTree0);
                        TOKEN_EXIT(constan_exit,"FLOATVAL")
#line 3084 "cplus.met"
                    } else {
#line 3084 "cplus.met"
                        tokenAhead = 0 ;
#line 3084 "cplus.met"
                    }
#line 3084 "cplus.met"
                    ReplaceTree(_ptRes1, 1, _ptTree1);
#line 3084 "cplus.met"
                    _ptTree0=_ptRes1;
#line 3084 "cplus.met"
                }
#line 3084 "cplus.met"
                _retValue =_ptTree0;
#line 3084 "cplus.met"
                goto constan_ret;
#line 3084 "cplus.met"
            }
#line 3084 "cplus.met"
            break;
#line 3084 "cplus.met"
#line 3085 "cplus.met"
        case CHARACT : 
#line 3085 "cplus.met"
#line 3085 "cplus.met"
            {
#line 3085 "cplus.met"
                PPTREE _ptTree0=0;
#line 3085 "cplus.met"
                {
#line 3085 "cplus.met"
                    PPTREE _ptTree1=0,_ptRes1=0;
#line 3085 "cplus.met"
                    _ptRes1= MakeTree(CHAR, 1);
#line 3085 "cplus.met"
                    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3085 "cplus.met"
                    if ( ! TERM_OR_META(CHARACT,"CHARACT") || !(BUILD_TERM_META(_ptTree1))) {
#line 3085 "cplus.met"
                        MulFreeTree(3,_ptRes1,_ptTree1,_ptTree0);
                        TOKEN_EXIT(constan_exit,"CHARACT")
#line 3085 "cplus.met"
                    } else {
#line 3085 "cplus.met"
                        tokenAhead = 0 ;
#line 3085 "cplus.met"
                    }
#line 3085 "cplus.met"
                    ReplaceTree(_ptRes1, 1, _ptTree1);
#line 3085 "cplus.met"
                    _ptTree0=_ptRes1;
#line 3085 "cplus.met"
                }
#line 3085 "cplus.met"
                _retValue =_ptTree0;
#line 3085 "cplus.met"
                goto constan_ret;
#line 3085 "cplus.met"
            }
#line 3085 "cplus.met"
            break;
#line 3085 "cplus.met"
        default :
#line 3085 "cplus.met"
            CASE_EXIT(constan_exit,"either INTEGER or LINTEGER or LLINTEGER or UINTEGER or ULINTEGER or ULLINTEGER or HEXA or LHEXA or LLHEXA or UHEXA or ULHEXA or ULLHEXA or OCTAL or LOCTAL or LLOCTAL or UOCTAL or ULOCTAL or ULLOCTAL or FLOATVAL or CHARACT")
#line 3085 "cplus.met"
            break;
#line 3085 "cplus.met"
    }
#line 3085 "cplus.met"
#line 3085 "cplus.met"
#line 3086 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 3086 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 3086 "cplus.met"
return((PPTREE) 0);
#line 3086 "cplus.met"

#line 3086 "cplus.met"
constan_exit :
#line 3086 "cplus.met"

#line 3086 "cplus.met"
    _Debug = TRACE_RULE("constan",TRACE_EXIT,(PPTREE)0);
#line 3086 "cplus.met"
    _funcLevel--;
#line 3086 "cplus.met"
    return((PPTREE) -1) ;
#line 3086 "cplus.met"

#line 3086 "cplus.met"
constan_ret :
#line 3086 "cplus.met"
    
#line 3086 "cplus.met"
    _Debug = TRACE_RULE("constan",TRACE_RETURN,_retValue);
#line 3086 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 3086 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 3086 "cplus.met"
    return _retValue ;
#line 3086 "cplus.met"
}
#line 3086 "cplus.met"

#line 3086 "cplus.met"
