/*************************************************************************/
/*                                                                       */
/*        Produced by MetaGen version 2.0  -    1989-2006                 */
/*       Syntaxic Analyzer Meta Generator developped by                  */
/*                  Eric Lavillonniere                                   */
/*                                                                       */
/*************************************************************************/

#include "token.h"
#include "cplus.h"


#line 2727 "cplus.met"
PPTREE cplus::assignment_expression ( int error_free)
#line 2727 "cplus.met"
{
#line 2727 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 2727 "cplus.met"
    int _value,_nbPre = 0 ;
#line 2727 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 2727 "cplus.met"
    int _Debug = TRACE_RULE("assignment_expression",TRACE_ENTER,(PPTREE)0);
#line 2727 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 2727 "cplus.met"
#line 2727 "cplus.met"
    PPTREE expTree = (PPTREE) 0,expFollow = (PPTREE) 0;
#line 2727 "cplus.met"
#line 2729 "cplus.met"
    if ( (expTree=NQUICK_CALL(_Tak(conditional_expression)(error_free), 32, cplus))== (PPTREE) -1 ) {
#line 2729 "cplus.met"
        MulFreeTree(2,expFollow,expTree);
        PROG_EXIT(assignment_expression_exit,"assignment_expression")
#line 2729 "cplus.met"
    }
#line 2729 "cplus.met"
#line 2730 "cplus.met"
    if (NPUSH_CALL_AFF_VERIF(expFollow = ,_Tak(assignment_end), 18, cplus)){
#line 2730 "cplus.met"
#line 2731 "cplus.met"
#line 2732 "cplus.met"
        ReplaceTree(expFollow ,1 ,expTree );
#line 2732 "cplus.met"
#line 2733 "cplus.met"
        expTree = expFollow ;
#line 2733 "cplus.met"
#line 2733 "cplus.met"
#line 2733 "cplus.met"
    }
#line 2733 "cplus.met"
#line 2735 "cplus.met"
    {
#line 2735 "cplus.met"
        _retValue = expTree ;
#line 2735 "cplus.met"
        goto assignment_expression_ret;
#line 2735 "cplus.met"
        
#line 2735 "cplus.met"
    }
#line 2735 "cplus.met"
#line 2735 "cplus.met"
#line 2735 "cplus.met"

#line 2736 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2736 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 2736 "cplus.met"
return((PPTREE) 0);
#line 2736 "cplus.met"

#line 2736 "cplus.met"
assignment_expression_exit :
#line 2736 "cplus.met"

#line 2736 "cplus.met"
    _Debug = TRACE_RULE("assignment_expression",TRACE_EXIT,(PPTREE)0);
#line 2736 "cplus.met"
    _funcLevel--;
#line 2736 "cplus.met"
    return((PPTREE) -1) ;
#line 2736 "cplus.met"

#line 2736 "cplus.met"
assignment_expression_ret :
#line 2736 "cplus.met"
    
#line 2736 "cplus.met"
    _Debug = TRACE_RULE("assignment_expression",TRACE_RETURN,_retValue);
#line 2736 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2736 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 2736 "cplus.met"
    return _retValue ;
#line 2736 "cplus.met"
}
#line 2736 "cplus.met"

#line 2736 "cplus.met"
#line 2243 "cplus.met"
PPTREE cplus::attribute_call ( int error_free)
#line 2243 "cplus.met"
{
#line 2243 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 2243 "cplus.met"
    int _value,_nbPre = 0 ;
#line 2243 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 2243 "cplus.met"
    int _Debug = TRACE_RULE("attribute_call",TRACE_ENTER,(PPTREE)0);
#line 2243 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 2243 "cplus.met"
#line 2243 "cplus.met"
    PPTREE retTree = (PPTREE) 0;
#line 2243 "cplus.met"
#line 2245 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 2245 "cplus.met"
    if (  !SEE_TOKEN( __ATTRIBUTE__,"__attribute__") || !(CommTerm(),1)) {
#line 2245 "cplus.met"
        MulFreeTree(1,retTree);
        TOKEN_EXIT(attribute_call_exit,"__attribute__")
#line 2245 "cplus.met"
    } else {
#line 2245 "cplus.met"
        tokenAhead = 0 ;
#line 2245 "cplus.met"
    }
#line 2245 "cplus.met"
#line 2246 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 2246 "cplus.met"
    if (  !SEE_TOKEN( POUV,"(") || !(CommTerm(),1)) {
#line 2246 "cplus.met"
        MulFreeTree(1,retTree);
        TOKEN_EXIT(attribute_call_exit,"(")
#line 2246 "cplus.met"
    } else {
#line 2246 "cplus.met"
        tokenAhead = 0 ;
#line 2246 "cplus.met"
    }
#line 2246 "cplus.met"
#line 2247 "cplus.met"
    {
#line 2247 "cplus.met"
        PPTREE _ptTree0=0,_ptRes0=0;
#line 2247 "cplus.met"
        _ptRes0= MakeTree(ATTRIBUTE_CALL, 1);
#line 2247 "cplus.met"
        if ( (_ptTree0=NQUICK_CALL(_Tak(expression)(error_free), 65, cplus))== (PPTREE) -1 ) {
#line 2247 "cplus.met"
            MulFreeTree(3,_ptRes0,_ptTree0,retTree);
            PROG_EXIT(attribute_call_exit,"attribute_call")
#line 2247 "cplus.met"
        }
#line 2247 "cplus.met"
        ReplaceTree(_ptRes0, 1, _ptTree0);
#line 2247 "cplus.met"
        retTree=_ptRes0;
#line 2247 "cplus.met"
    }
#line 2247 "cplus.met"
#line 2248 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 2248 "cplus.met"
    if (  !SEE_TOKEN( PFER,")") || !(CommTerm(),1)) {
#line 2248 "cplus.met"
        MulFreeTree(1,retTree);
        TOKEN_EXIT(attribute_call_exit,")")
#line 2248 "cplus.met"
    } else {
#line 2248 "cplus.met"
        tokenAhead = 0 ;
#line 2248 "cplus.met"
    }
#line 2248 "cplus.met"
#line 2249 "cplus.met"
    {
#line 2249 "cplus.met"
        _retValue = retTree ;
#line 2249 "cplus.met"
        goto attribute_call_ret;
#line 2249 "cplus.met"
        
#line 2249 "cplus.met"
    }
#line 2249 "cplus.met"
#line 2249 "cplus.met"
#line 2249 "cplus.met"

#line 2250 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2250 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 2250 "cplus.met"
return((PPTREE) 0);
#line 2250 "cplus.met"

#line 2250 "cplus.met"
attribute_call_exit :
#line 2250 "cplus.met"

#line 2250 "cplus.met"
    _Debug = TRACE_RULE("attribute_call",TRACE_EXIT,(PPTREE)0);
#line 2250 "cplus.met"
    _funcLevel--;
#line 2250 "cplus.met"
    return((PPTREE) -1) ;
#line 2250 "cplus.met"

#line 2250 "cplus.met"
attribute_call_ret :
#line 2250 "cplus.met"
    
#line 2250 "cplus.met"
    _Debug = TRACE_RULE("attribute_call",TRACE_RETURN,_retValue);
#line 2250 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2250 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 2250 "cplus.met"
    return _retValue ;
#line 2250 "cplus.met"
}
#line 2250 "cplus.met"

#line 2250 "cplus.met"
#line 1948 "cplus.met"
PPTREE cplus::base_specifier ( int error_free)
#line 1948 "cplus.met"
{
#line 1948 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 1948 "cplus.met"
    int _value,_nbPre = 0 ;
#line 1948 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 1948 "cplus.met"
    int _Debug = TRACE_RULE("base_specifier",TRACE_ENTER,(PPTREE)0);
#line 1948 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 1948 "cplus.met"
#line 1948 "cplus.met"
    PPTREE _addlist1 = (PPTREE) 0;
#line 1948 "cplus.met"
#line 1948 "cplus.met"
    PPTREE list = (PPTREE) 0;
#line 1948 "cplus.met"
#line 1948 "cplus.met"
    _addlist1 = list ;
#line 1948 "cplus.met"
#line 1950 "cplus.met"
    do {
#line 1950 "cplus.met"
#line 1951 "cplus.met"
        {
#line 1951 "cplus.met"
            PPTREE _ptTree0=0;
#line 1951 "cplus.met"
            if ( (_ptTree0=NQUICK_CALL(_Tak(base_specifier_elem)(error_free), 22, cplus))== (PPTREE) -1 ) {
#line 1951 "cplus.met"
                MulFreeTree(3,_ptTree0,_addlist1,list);
                PROG_EXIT(base_specifier_exit,"base_specifier")
#line 1951 "cplus.met"
            }
#line 1951 "cplus.met"
            _addlist1 =AddList(_addlist1 , _ptTree0);
#line 1951 "cplus.met"
        }
#line 1951 "cplus.met"
#line 1951 "cplus.met"
        if (list){
#line 1951 "cplus.met"
#line 1951 "cplus.met"
            _addlist1 = SonTree (_addlist1 ,2 );
#line 1951 "cplus.met"
        } else {
#line 1951 "cplus.met"
#line 1951 "cplus.met"
            list = _addlist1 ;
#line 1951 "cplus.met"
        }
#line 1951 "cplus.met"
#line 1951 "cplus.met"
#line 1952 "cplus.met"
    } while ( !(! ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN(VIRG,",") && (tokenAhead = 0,CommTerm(),1)))) ;
#line 1952 "cplus.met"
#line 1953 "cplus.met"
    {
#line 1953 "cplus.met"
        PPTREE _ptTree0=0;
#line 1953 "cplus.met"
        {
#line 1953 "cplus.met"
            PPTREE _ptRes1=0;
#line 1953 "cplus.met"
            _ptRes1= MakeTree(BASE_LIST, 1);
#line 1953 "cplus.met"
            ReplaceTree(_ptRes1, 1, list );
#line 1953 "cplus.met"
            _ptTree0=_ptRes1;
#line 1953 "cplus.met"
        }
#line 1953 "cplus.met"
        _retValue =_ptTree0;
#line 1953 "cplus.met"
        goto base_specifier_ret;
#line 1953 "cplus.met"
    }
#line 1953 "cplus.met"
#line 1953 "cplus.met"
#line 1953 "cplus.met"

#line 1954 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1954 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 1954 "cplus.met"
return((PPTREE) 0);
#line 1954 "cplus.met"

#line 1954 "cplus.met"
base_specifier_exit :
#line 1954 "cplus.met"

#line 1954 "cplus.met"
    _Debug = TRACE_RULE("base_specifier",TRACE_EXIT,(PPTREE)0);
#line 1954 "cplus.met"
    _funcLevel--;
#line 1954 "cplus.met"
    return((PPTREE) -1) ;
#line 1954 "cplus.met"

#line 1954 "cplus.met"
base_specifier_ret :
#line 1954 "cplus.met"
    
#line 1954 "cplus.met"
    _Debug = TRACE_RULE("base_specifier",TRACE_RETURN,_retValue);
#line 1954 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1954 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 1954 "cplus.met"
    return _retValue ;
#line 1954 "cplus.met"
}
#line 1954 "cplus.met"

#line 1954 "cplus.met"
#line 1935 "cplus.met"
PPTREE cplus::base_specifier_elem ( int error_free)
#line 1935 "cplus.met"
{
#line 1935 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 1935 "cplus.met"
    int _value,_nbPre = 0 ;
#line 1935 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 1935 "cplus.met"
    int _Debug = TRACE_RULE("base_specifier_elem",TRACE_ENTER,(PPTREE)0);
#line 1935 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 1935 "cplus.met"
#line 1935 "cplus.met"
    PPTREE ret = (PPTREE) 0;
#line 1935 "cplus.met"
#line 1937 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 1937 "cplus.met"
    switch( lexEl.Value) {
#line 1937 "cplus.met"
#line 1938 "cplus.met"
        case PRIVATE : 
#line 1938 "cplus.met"
            tokenAhead = 0 ;
#line 1938 "cplus.met"
            CommTerm();
#line 1938 "cplus.met"
#line 1938 "cplus.met"
            {
#line 1938 "cplus.met"
                PPTREE _ptTree0=0;
#line 1938 "cplus.met"
                {
#line 1938 "cplus.met"
                    PPTREE _ptTree1=0,_ptRes1=0;
#line 1938 "cplus.met"
                    _ptRes1= MakeTree(PROTECT, 2);
#line 1938 "cplus.met"
                    ReplaceTree(_ptRes1, 1, MakeString ("private"));
#line 1938 "cplus.met"
                    if ( (_ptTree1=NQUICK_CALL(_Tak(base_specifier_elem)(error_free), 22, cplus))== (PPTREE) -1 ) {
#line 1938 "cplus.met"
                        MulFreeTree(4,_ptRes1,_ptTree1,_ptTree0,ret);
                        PROG_EXIT(base_specifier_elem_exit,"base_specifier_elem")
#line 1938 "cplus.met"
                    }
#line 1938 "cplus.met"
                    ReplaceTree(_ptRes1, 2, _ptTree1);
#line 1938 "cplus.met"
                    _ptTree0=_ptRes1;
#line 1938 "cplus.met"
                }
#line 1938 "cplus.met"
                _retValue =_ptTree0;
#line 1938 "cplus.met"
                goto base_specifier_elem_ret;
#line 1938 "cplus.met"
            }
#line 1938 "cplus.met"
            break;
#line 1938 "cplus.met"
#line 1939 "cplus.met"
        case PROTECTED : 
#line 1939 "cplus.met"
            tokenAhead = 0 ;
#line 1939 "cplus.met"
            CommTerm();
#line 1939 "cplus.met"
#line 1939 "cplus.met"
            {
#line 1939 "cplus.met"
                PPTREE _ptTree0=0;
#line 1939 "cplus.met"
                {
#line 1939 "cplus.met"
                    PPTREE _ptTree1=0,_ptRes1=0;
#line 1939 "cplus.met"
                    _ptRes1= MakeTree(PROTECT, 2);
#line 1939 "cplus.met"
                    ReplaceTree(_ptRes1, 1, MakeString ("protected"));
#line 1939 "cplus.met"
                    if ( (_ptTree1=NQUICK_CALL(_Tak(base_specifier_elem)(error_free), 22, cplus))== (PPTREE) -1 ) {
#line 1939 "cplus.met"
                        MulFreeTree(4,_ptRes1,_ptTree1,_ptTree0,ret);
                        PROG_EXIT(base_specifier_elem_exit,"base_specifier_elem")
#line 1939 "cplus.met"
                    }
#line 1939 "cplus.met"
                    ReplaceTree(_ptRes1, 2, _ptTree1);
#line 1939 "cplus.met"
                    _ptTree0=_ptRes1;
#line 1939 "cplus.met"
                }
#line 1939 "cplus.met"
                _retValue =_ptTree0;
#line 1939 "cplus.met"
                goto base_specifier_elem_ret;
#line 1939 "cplus.met"
            }
#line 1939 "cplus.met"
            break;
#line 1939 "cplus.met"
#line 1940 "cplus.met"
        case PUBLIC : 
#line 1940 "cplus.met"
            tokenAhead = 0 ;
#line 1940 "cplus.met"
            CommTerm();
#line 1940 "cplus.met"
#line 1940 "cplus.met"
            {
#line 1940 "cplus.met"
                PPTREE _ptTree0=0;
#line 1940 "cplus.met"
                {
#line 1940 "cplus.met"
                    PPTREE _ptTree1=0,_ptRes1=0;
#line 1940 "cplus.met"
                    _ptRes1= MakeTree(PROTECT, 2);
#line 1940 "cplus.met"
                    ReplaceTree(_ptRes1, 1, MakeString ("public"));
#line 1940 "cplus.met"
                    if ( (_ptTree1=NQUICK_CALL(_Tak(base_specifier_elem)(error_free), 22, cplus))== (PPTREE) -1 ) {
#line 1940 "cplus.met"
                        MulFreeTree(4,_ptRes1,_ptTree1,_ptTree0,ret);
                        PROG_EXIT(base_specifier_elem_exit,"base_specifier_elem")
#line 1940 "cplus.met"
                    }
#line 1940 "cplus.met"
                    ReplaceTree(_ptRes1, 2, _ptTree1);
#line 1940 "cplus.met"
                    _ptTree0=_ptRes1;
#line 1940 "cplus.met"
                }
#line 1940 "cplus.met"
                _retValue =_ptTree0;
#line 1940 "cplus.met"
                goto base_specifier_elem_ret;
#line 1940 "cplus.met"
            }
#line 1940 "cplus.met"
            break;
#line 1940 "cplus.met"
#line 1941 "cplus.met"
        case VIRTUAL : 
#line 1941 "cplus.met"
            tokenAhead = 0 ;
#line 1941 "cplus.met"
            CommTerm();
#line 1941 "cplus.met"
#line 1941 "cplus.met"
            {
#line 1941 "cplus.met"
                PPTREE _ptTree0=0;
#line 1941 "cplus.met"
                {
#line 1941 "cplus.met"
                    PPTREE _ptTree1=0,_ptRes1=0;
#line 1941 "cplus.met"
                    _ptRes1= MakeTree(PROTECT, 2);
#line 1941 "cplus.met"
                    ReplaceTree(_ptRes1, 1, MakeString ("virtual"));
#line 1941 "cplus.met"
                    if ( (_ptTree1=NQUICK_CALL(_Tak(base_specifier_elem)(error_free), 22, cplus))== (PPTREE) -1 ) {
#line 1941 "cplus.met"
                        MulFreeTree(4,_ptRes1,_ptTree1,_ptTree0,ret);
                        PROG_EXIT(base_specifier_elem_exit,"base_specifier_elem")
#line 1941 "cplus.met"
                    }
#line 1941 "cplus.met"
                    ReplaceTree(_ptRes1, 2, _ptTree1);
#line 1941 "cplus.met"
                    _ptTree0=_ptRes1;
#line 1941 "cplus.met"
                }
#line 1941 "cplus.met"
                _retValue =_ptTree0;
#line 1941 "cplus.met"
                goto base_specifier_elem_ret;
#line 1941 "cplus.met"
            }
#line 1941 "cplus.met"
            break;
#line 1941 "cplus.met"
#line 1941 "cplus.met"
        default : 
#line 1941 "cplus.met"
#line 1941 "cplus.met"
            break;
#line 1941 "cplus.met"
    }
#line 1941 "cplus.met"
#line 1944 "cplus.met"
    if ( (ret=NQUICK_CALL(_Tak(complete_class_name)(error_free), 30, cplus))== (PPTREE) -1 ) {
#line 1944 "cplus.met"
        MulFreeTree(1,ret);
        PROG_EXIT(base_specifier_elem_exit,"base_specifier_elem")
#line 1944 "cplus.met"
    }
#line 1944 "cplus.met"
#line 1945 "cplus.met"
    {
#line 1945 "cplus.met"
        _retValue = ret ;
#line 1945 "cplus.met"
        goto base_specifier_elem_ret;
#line 1945 "cplus.met"
        
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
base_specifier_elem_exit :
#line 1946 "cplus.met"

#line 1946 "cplus.met"
    _Debug = TRACE_RULE("base_specifier_elem",TRACE_EXIT,(PPTREE)0);
#line 1946 "cplus.met"
    _funcLevel--;
#line 1946 "cplus.met"
    return((PPTREE) -1) ;
#line 1946 "cplus.met"

#line 1946 "cplus.met"
base_specifier_elem_ret :
#line 1946 "cplus.met"
    
#line 1946 "cplus.met"
    _Debug = TRACE_RULE("base_specifier_elem",TRACE_RETURN,_retValue);
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
#line 3736 "cplus.met"
PPTREE cplus::bidon ( int error_free)
#line 3736 "cplus.met"
{
#line 3736 "cplus.met"
    int  _oldnoString = noString;
#line 3736 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 3736 "cplus.met"
    int _value,_nbPre = 0 ;
#line 3736 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 3736 "cplus.met"
    int _Debug = TRACE_RULE("bidon",TRACE_ENTER,(PPTREE)0);
#line 3736 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 3736 "cplus.met"
#line 3737 "cplus.met"
    {
#line 3737 "cplus.met"
        noString = 1 ;
#line 3737 "cplus.met"
#line 3738 "cplus.met"
#line 3738 "cplus.met"
        noString =  _oldnoString;
#line 3738 "cplus.met"
    }
#line 3738 "cplus.met"
#line 3738 "cplus.met"
#line 3739 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 3739 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 3739 "cplus.met"
noString =  _oldnoString;
#line 3739 "cplus.met"
return((PPTREE) 0);
#line 3739 "cplus.met"

#line 3739 "cplus.met"
bidon_exit :
#line 3739 "cplus.met"

#line 3739 "cplus.met"
    _Debug = TRACE_RULE("bidon",TRACE_EXIT,(PPTREE)0);
#line 3739 "cplus.met"
    _funcLevel--;
#line 3739 "cplus.met"
    noString =  _oldnoString;
#line 3739 "cplus.met"
    return((PPTREE) -1) ;
#line 3739 "cplus.met"

#line 3739 "cplus.met"
bidon_ret :
#line 3739 "cplus.met"
    
#line 3739 "cplus.met"
    _Debug = TRACE_RULE("bidon",TRACE_RETURN,_retValue);
#line 3739 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 3739 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 3739 "cplus.met"
    noString =  _oldnoString;
#line 3739 "cplus.met"
    return _retValue ;
#line 3739 "cplus.met"
}
#line 3739 "cplus.met"

#line 3739 "cplus.met"
#line 2686 "cplus.met"
PPTREE cplus::bit_field_decl ( int error_free)
#line 2686 "cplus.met"
{
#line 2686 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 2686 "cplus.met"
    int _value,_nbPre = 0 ;
#line 2686 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 2686 "cplus.met"
    int _Debug = TRACE_RULE("bit_field_decl",TRACE_ENTER,(PPTREE)0);
#line 2686 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 2686 "cplus.met"
#line 2686 "cplus.met"
    PPTREE retTree = (PPTREE) 0;
#line 2686 "cplus.met"
#line 2689 "cplus.met"
    {
#line 2689 "cplus.met"
        PPTREE _ptRes0=0;
#line 2689 "cplus.met"
        _ptRes0= MakeTree(TYP_BIT, 2);
#line 2689 "cplus.met"
        retTree=_ptRes0;
#line 2689 "cplus.met"
    }
#line 2689 "cplus.met"
#line 2691 "cplus.met"
    if ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN( IDENT,"IDENT")){
#line 2691 "cplus.met"
#line 2692 "cplus.met"
        {
#line 2692 "cplus.met"
            PPTREE _ptTree0=0;
#line 2692 "cplus.met"
            {
#line 2692 "cplus.met"
                PPTREE _ptTree1=0,_ptRes1=0;
#line 2692 "cplus.met"
                _ptRes1= MakeTree(IDENT, 1);
#line 2692 "cplus.met"
                (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 2692 "cplus.met"
                if ( ! TERM_OR_META(IDENT,"IDENT") || !(BUILD_TERM_META(_ptTree1))) {
#line 2692 "cplus.met"
                    MulFreeTree(4,_ptRes1,_ptTree1,_ptTree0,retTree);
                    TOKEN_EXIT(bit_field_decl_exit,"IDENT")
#line 2692 "cplus.met"
                } else {
#line 2692 "cplus.met"
                    tokenAhead = 0 ;
#line 2692 "cplus.met"
                }
#line 2692 "cplus.met"
                ReplaceTree(_ptRes1, 1, _ptTree1);
#line 2692 "cplus.met"
                _ptTree0=_ptRes1;
#line 2692 "cplus.met"
            }
#line 2692 "cplus.met"
            ReplaceTree(retTree , 1 , _ptTree0);
#line 2692 "cplus.met"
        }
#line 2692 "cplus.met"
#line 2692 "cplus.met"
    }
#line 2692 "cplus.met"
#line 2693 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 2693 "cplus.met"
    if (  !SEE_TOKEN( DPOI,":") || !(CommTerm(),1)) {
#line 2693 "cplus.met"
        MulFreeTree(1,retTree);
        TOKEN_EXIT(bit_field_decl_exit,":")
#line 2693 "cplus.met"
    } else {
#line 2693 "cplus.met"
        tokenAhead = 0 ;
#line 2693 "cplus.met"
    }
#line 2693 "cplus.met"
#line 2694 "cplus.met"
    {
#line 2694 "cplus.met"
        PPTREE _ptTree0=0;
#line 2694 "cplus.met"
        {
#line 2694 "cplus.met"
            PPTREE _ptTree1=0;
#line 2694 "cplus.met"
            if ( (_ptTree1=NQUICK_CALL(_Tak(assignment_expression)(error_free), 19, cplus))== (PPTREE) -1 ) {
#line 2694 "cplus.met"
                MulFreeTree(3,_ptTree1,_ptTree0,retTree);
                PROG_EXIT(bit_field_decl_exit,"bit_field_decl")
#line 2694 "cplus.met"
            }
#line 2694 "cplus.met"
            _ptTree0=ReplaceTree(retTree , 2 , _ptTree1);
#line 2694 "cplus.met"
        }
#line 2694 "cplus.met"
        _retValue =_ptTree0;
#line 2694 "cplus.met"
        goto bit_field_decl_ret;
#line 2694 "cplus.met"
    }
#line 2694 "cplus.met"
#line 2694 "cplus.met"
#line 2694 "cplus.met"

#line 2695 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2695 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 2695 "cplus.met"
return((PPTREE) 0);
#line 2695 "cplus.met"

#line 2695 "cplus.met"
bit_field_decl_exit :
#line 2695 "cplus.met"

#line 2695 "cplus.met"
    _Debug = TRACE_RULE("bit_field_decl",TRACE_EXIT,(PPTREE)0);
#line 2695 "cplus.met"
    _funcLevel--;
#line 2695 "cplus.met"
    return((PPTREE) -1) ;
#line 2695 "cplus.met"

#line 2695 "cplus.met"
bit_field_decl_ret :
#line 2695 "cplus.met"
    
#line 2695 "cplus.met"
    _Debug = TRACE_RULE("bit_field_decl",TRACE_RETURN,_retValue);
#line 2695 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2695 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 2695 "cplus.met"
    return _retValue ;
#line 2695 "cplus.met"
}
#line 2695 "cplus.met"

#line 2695 "cplus.met"
#line 2872 "cplus.met"
PPTREE cplus::cast_expression ( int error_free)
#line 2872 "cplus.met"
{
#line 2872 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 2872 "cplus.met"
    int _value,_nbPre = 0 ;
#line 2872 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 2872 "cplus.met"
    int _Debug = TRACE_RULE("cast_expression",TRACE_ENTER,(PPTREE)0);
#line 2872 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 2872 "cplus.met"
#line 2872 "cplus.met"
    PPTREE retTree = (PPTREE) 0;
#line 2872 "cplus.met"
#line 2874 "cplus.met"
    if (NPUSH_CALL_AFF_VERIF(retTree = ,_Tak(cast_expression_value), 25, cplus)){
#line 2874 "cplus.met"
#line 2875 "cplus.met"
        {
#line 2875 "cplus.met"
            _retValue = retTree ;
#line 2875 "cplus.met"
            goto cast_expression_ret;
#line 2875 "cplus.met"
            
#line 2875 "cplus.met"
        }
#line 2875 "cplus.met"
    } else {
#line 2875 "cplus.met"
#line 2877 "cplus.met"
        {
#line 2877 "cplus.met"
            PPTREE _ptTree0=0;
#line 2877 "cplus.met"
            if ( (_ptTree0=NQUICK_CALL(_Tak(unary_expression)(error_free), 155, cplus))== (PPTREE) -1 ) {
#line 2877 "cplus.met"
                MulFreeTree(2,_ptTree0,retTree);
                PROG_EXIT(cast_expression_exit,"cast_expression")
#line 2877 "cplus.met"
            }
#line 2877 "cplus.met"
            _retValue =_ptTree0;
#line 2877 "cplus.met"
            goto cast_expression_ret;
#line 2877 "cplus.met"
        }
#line 2877 "cplus.met"
    }
#line 2877 "cplus.met"
#line 2877 "cplus.met"
#line 2877 "cplus.met"

#line 2878 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2878 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 2878 "cplus.met"
return((PPTREE) 0);
#line 2878 "cplus.met"

#line 2878 "cplus.met"
cast_expression_exit :
#line 2878 "cplus.met"

#line 2878 "cplus.met"
    _Debug = TRACE_RULE("cast_expression",TRACE_EXIT,(PPTREE)0);
#line 2878 "cplus.met"
    _funcLevel--;
#line 2878 "cplus.met"
    return((PPTREE) -1) ;
#line 2878 "cplus.met"

#line 2878 "cplus.met"
cast_expression_ret :
#line 2878 "cplus.met"
    
#line 2878 "cplus.met"
    _Debug = TRACE_RULE("cast_expression",TRACE_RETURN,_retValue);
#line 2878 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2878 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 2878 "cplus.met"
    return _retValue ;
#line 2878 "cplus.met"
}
#line 2878 "cplus.met"

#line 2878 "cplus.met"
#line 2864 "cplus.met"
PPTREE cplus::cast_expression_value ( int error_free)
#line 2864 "cplus.met"
{
#line 2864 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 2864 "cplus.met"
    int _value,_nbPre = 0 ;
#line 2864 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 2864 "cplus.met"
    int _Debug = TRACE_RULE("cast_expression_value",TRACE_ENTER,(PPTREE)0);
#line 2864 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 2864 "cplus.met"
#line 2864 "cplus.met"
    PPTREE ret = (PPTREE) 0;
#line 2864 "cplus.met"
#line 2866 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 2866 "cplus.met"
    if (  !SEE_TOKEN( POUV,"(") || !(CommTerm(),1)) {
#line 2866 "cplus.met"
        MulFreeTree(1,ret);
        TOKEN_EXIT(cast_expression_value_exit,"(")
#line 2866 "cplus.met"
    } else {
#line 2866 "cplus.met"
        tokenAhead = 0 ;
#line 2866 "cplus.met"
    }
#line 2866 "cplus.met"
#line 2867 "cplus.met"
    if ( (ret=NQUICK_CALL(_Tak(type_name)(error_free), 151, cplus))== (PPTREE) -1 ) {
#line 2867 "cplus.met"
        MulFreeTree(1,ret);
        PROG_EXIT(cast_expression_value_exit,"cast_expression_value")
#line 2867 "cplus.met"
    }
#line 2867 "cplus.met"
#line 2868 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 2868 "cplus.met"
    if (  !SEE_TOKEN( PFER,")") || !(CommTerm(),1)) {
#line 2868 "cplus.met"
        MulFreeTree(1,ret);
        TOKEN_EXIT(cast_expression_value_exit,")")
#line 2868 "cplus.met"
    } else {
#line 2868 "cplus.met"
        tokenAhead = 0 ;
#line 2868 "cplus.met"
    }
#line 2868 "cplus.met"
#line 2869 "cplus.met"
    {
#line 2869 "cplus.met"
        PPTREE _ptTree0=0;
#line 2869 "cplus.met"
        {
#line 2869 "cplus.met"
            PPTREE _ptTree1=0,_ptRes1=0;
#line 2869 "cplus.met"
            _ptRes1= MakeTree(CAST, 2);
#line 2869 "cplus.met"
            ReplaceTree(_ptRes1, 1, ret );
#line 2869 "cplus.met"
            if ( (_ptTree1=NQUICK_CALL(_Tak(cast_expression)(error_free), 24, cplus))== (PPTREE) -1 ) {
#line 2869 "cplus.met"
                MulFreeTree(4,_ptRes1,_ptTree1,_ptTree0,ret);
                PROG_EXIT(cast_expression_value_exit,"cast_expression_value")
#line 2869 "cplus.met"
            }
#line 2869 "cplus.met"
            ReplaceTree(_ptRes1, 2, _ptTree1);
#line 2869 "cplus.met"
            _ptTree0=_ptRes1;
#line 2869 "cplus.met"
        }
#line 2869 "cplus.met"
        _retValue =_ptTree0;
#line 2869 "cplus.met"
        goto cast_expression_value_ret;
#line 2869 "cplus.met"
    }
#line 2869 "cplus.met"
#line 2869 "cplus.met"
#line 2869 "cplus.met"

#line 2870 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2870 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 2870 "cplus.met"
return((PPTREE) 0);
#line 2870 "cplus.met"

#line 2870 "cplus.met"
cast_expression_value_exit :
#line 2870 "cplus.met"

#line 2870 "cplus.met"
    _Debug = TRACE_RULE("cast_expression_value",TRACE_EXIT,(PPTREE)0);
#line 2870 "cplus.met"
    _funcLevel--;
#line 2870 "cplus.met"
    return((PPTREE) -1) ;
#line 2870 "cplus.met"

#line 2870 "cplus.met"
cast_expression_value_ret :
#line 2870 "cplus.met"
    
#line 2870 "cplus.met"
    _Debug = TRACE_RULE("cast_expression_value",TRACE_RETURN,_retValue);
#line 2870 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2870 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 2870 "cplus.met"
    return _retValue ;
#line 2870 "cplus.met"
}
#line 2870 "cplus.met"

#line 2870 "cplus.met"
#line 2032 "cplus.met"
PPTREE cplus::catch_unit ( int error_free)
#line 2032 "cplus.met"
{
#line 2032 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 2032 "cplus.met"
    int _value,_nbPre = 0 ;
#line 2032 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 2032 "cplus.met"
    int _Debug = TRACE_RULE("catch_unit",TRACE_ENTER,(PPTREE)0);
#line 2032 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 2032 "cplus.met"
#line 2033 "cplus.met"
    (tokenAhead == 13|| (specific(),TRACE_LEX(1)));
#line 2033 "cplus.met"
    switch( lexEl.Value) {
#line 2033 "cplus.met"
#line 2034 "cplus.met"
        case META : 
#line 2034 "cplus.met"
        case CATCH_UPPER : 
#line 2034 "cplus.met"
#line 2034 "cplus.met"
            {
#line 2034 "cplus.met"
                PPTREE _ptTree0=0;
#line 2034 "cplus.met"
                {
#line 2034 "cplus.met"
                    PPTREE _ptTree1=0,_ptRes1=0;
#line 2034 "cplus.met"
                    _ptRes1= MakeTree(CATCH, 2);
#line 2034 "cplus.met"
                    if ( (_ptTree1=NQUICK_CALL(_Tak(macro)(error_free), 95, cplus))== (PPTREE) -1 ) {
#line 2034 "cplus.met"
                        MulFreeTree(3,_ptRes1,_ptTree1,_ptTree0);
                        PROG_EXIT(catch_unit_exit,"catch_unit")
#line 2034 "cplus.met"
                    }
#line 2034 "cplus.met"
                    ReplaceTree(_ptRes1, 1, _ptTree1);
#line 2034 "cplus.met"
                    if ( (_ptTree1=NQUICK_CALL(_Tak(compound_statement)(error_free), 31, cplus))== (PPTREE) -1 ) {
#line 2034 "cplus.met"
                        MulFreeTree(3,_ptRes1,_ptTree1,_ptTree0);
                        PROG_EXIT(catch_unit_exit,"catch_unit")
#line 2034 "cplus.met"
                    }
#line 2034 "cplus.met"
                    ReplaceTree(_ptRes1, 2, _ptTree1);
#line 2034 "cplus.met"
                    _ptTree0=_ptRes1;
#line 2034 "cplus.met"
                }
#line 2034 "cplus.met"
                _retValue =_ptTree0;
#line 2034 "cplus.met"
                goto catch_unit_ret;
#line 2034 "cplus.met"
            }
#line 2034 "cplus.met"
            break;
#line 2034 "cplus.met"
#line 2035 "cplus.met"
        case CATCH_ALL : 
#line 2035 "cplus.met"
#line 2035 "cplus.met"
            {
#line 2035 "cplus.met"
                PPTREE _ptTree0=0;
#line 2035 "cplus.met"
                {
#line 2035 "cplus.met"
                    PPTREE _ptTree1=0,_ptRes1=0;
#line 2035 "cplus.met"
                    _ptRes1= MakeTree(CATCH, 2);
#line 2035 "cplus.met"
                    if ( (_ptTree1=NQUICK_CALL(_Tak(macro)(error_free), 95, cplus))== (PPTREE) -1 ) {
#line 2035 "cplus.met"
                        MulFreeTree(3,_ptRes1,_ptTree1,_ptTree0);
                        PROG_EXIT(catch_unit_exit,"catch_unit")
#line 2035 "cplus.met"
                    }
#line 2035 "cplus.met"
                    ReplaceTree(_ptRes1, 1, _ptTree1);
#line 2035 "cplus.met"
                    if ( (_ptTree1=NQUICK_CALL(_Tak(compound_statement)(error_free), 31, cplus))== (PPTREE) -1 ) {
#line 2035 "cplus.met"
                        MulFreeTree(3,_ptRes1,_ptTree1,_ptTree0);
                        PROG_EXIT(catch_unit_exit,"catch_unit")
#line 2035 "cplus.met"
                    }
#line 2035 "cplus.met"
                    ReplaceTree(_ptRes1, 2, _ptTree1);
#line 2035 "cplus.met"
                    _ptTree0=_ptRes1;
#line 2035 "cplus.met"
                }
#line 2035 "cplus.met"
                _retValue =_ptTree0;
#line 2035 "cplus.met"
                goto catch_unit_ret;
#line 2035 "cplus.met"
            }
#line 2035 "cplus.met"
            break;
#line 2035 "cplus.met"
#line 2036 "cplus.met"
        case AND_CATCH : 
#line 2036 "cplus.met"
#line 2036 "cplus.met"
            {
#line 2036 "cplus.met"
                PPTREE _ptTree0=0;
#line 2036 "cplus.met"
                {
#line 2036 "cplus.met"
                    PPTREE _ptTree1=0,_ptRes1=0;
#line 2036 "cplus.met"
                    _ptRes1= MakeTree(CATCH, 2);
#line 2036 "cplus.met"
                    if ( (_ptTree1=NQUICK_CALL(_Tak(macro)(error_free), 95, cplus))== (PPTREE) -1 ) {
#line 2036 "cplus.met"
                        MulFreeTree(3,_ptRes1,_ptTree1,_ptTree0);
                        PROG_EXIT(catch_unit_exit,"catch_unit")
#line 2036 "cplus.met"
                    }
#line 2036 "cplus.met"
                    ReplaceTree(_ptRes1, 1, _ptTree1);
#line 2036 "cplus.met"
                    if ( (_ptTree1=NQUICK_CALL(_Tak(compound_statement)(error_free), 31, cplus))== (PPTREE) -1 ) {
#line 2036 "cplus.met"
                        MulFreeTree(3,_ptRes1,_ptTree1,_ptTree0);
                        PROG_EXIT(catch_unit_exit,"catch_unit")
#line 2036 "cplus.met"
                    }
#line 2036 "cplus.met"
                    ReplaceTree(_ptRes1, 2, _ptTree1);
#line 2036 "cplus.met"
                    _ptTree0=_ptRes1;
#line 2036 "cplus.met"
                }
#line 2036 "cplus.met"
                _retValue =_ptTree0;
#line 2036 "cplus.met"
                goto catch_unit_ret;
#line 2036 "cplus.met"
            }
#line 2036 "cplus.met"
            break;
#line 2036 "cplus.met"
        default :
#line 2036 "cplus.met"
            CASE_EXIT(catch_unit_exit,"either CATCH_UPPER or CATCH_ALL or AND_CATCH")
#line 2036 "cplus.met"
            break;
#line 2036 "cplus.met"
    }
#line 2036 "cplus.met"
#line 2036 "cplus.met"
#line 2037 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2037 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 2037 "cplus.met"
return((PPTREE) 0);
#line 2037 "cplus.met"

#line 2037 "cplus.met"
catch_unit_exit :
#line 2037 "cplus.met"

#line 2037 "cplus.met"
    _Debug = TRACE_RULE("catch_unit",TRACE_EXIT,(PPTREE)0);
#line 2037 "cplus.met"
    _funcLevel--;
#line 2037 "cplus.met"
    return((PPTREE) -1) ;
#line 2037 "cplus.met"

#line 2037 "cplus.met"
catch_unit_ret :
#line 2037 "cplus.met"
    
#line 2037 "cplus.met"
    _Debug = TRACE_RULE("catch_unit",TRACE_RETURN,_retValue);
#line 2037 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2037 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 2037 "cplus.met"
    return _retValue ;
#line 2037 "cplus.met"
}
#line 2037 "cplus.met"

#line 2037 "cplus.met"
#line 2050 "cplus.met"
PPTREE cplus::catch_unit_ansi ( int error_free)
#line 2050 "cplus.met"
{
#line 2050 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 2050 "cplus.met"
    int _value,_nbPre = 0 ;
#line 2050 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 2050 "cplus.met"
    int _Debug = TRACE_RULE("catch_unit_ansi",TRACE_ENTER,(PPTREE)0);
#line 2050 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 2050 "cplus.met"
#line 2050 "cplus.met"
    PPTREE retTree = (PPTREE) 0,valTree = (PPTREE) 0;
#line 2050 "cplus.met"
#line 2052 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 2052 "cplus.met"
    if (  !SEE_TOKEN( CATCH,"catch") || !(CommTerm(),1)) {
#line 2052 "cplus.met"
        MulFreeTree(2,retTree,valTree);
        TOKEN_EXIT(catch_unit_ansi_exit,"catch")
#line 2052 "cplus.met"
    } else {
#line 2052 "cplus.met"
        tokenAhead = 0 ;
#line 2052 "cplus.met"
    }
#line 2052 "cplus.met"
#line 2053 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 2053 "cplus.met"
    if (  !SEE_TOKEN( POUV,"(") || !(CommTerm(),1)) {
#line 2053 "cplus.met"
        MulFreeTree(2,retTree,valTree);
        TOKEN_EXIT(catch_unit_ansi_exit,"(")
#line 2053 "cplus.met"
    } else {
#line 2053 "cplus.met"
        tokenAhead = 0 ;
#line 2053 "cplus.met"
    }
#line 2053 "cplus.met"
#line 2054 "cplus.met"
    if ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN(POINPOINPOIN,"...") && (tokenAhead = 0,CommTerm(),1)){
#line 2054 "cplus.met"
#line 2055 "cplus.met"
        {
#line 2055 "cplus.met"
            PPTREE _ptRes0=0;
#line 2055 "cplus.met"
            _ptRes0= MakeTree(EXCEPT_ANSI_ALL, 0);
#line 2055 "cplus.met"
            valTree=_ptRes0;
#line 2055 "cplus.met"
        }
#line 2055 "cplus.met"
    } else {
#line 2055 "cplus.met"
#line 2057 "cplus.met"
#line 2058 "cplus.met"
        if ( (retTree=NQUICK_CALL(_Tak(type_specifier)(error_free), 152, cplus))== (PPTREE) -1 ) {
#line 2058 "cplus.met"
            MulFreeTree(2,retTree,valTree);
            PROG_EXIT(catch_unit_ansi_exit,"catch_unit_ansi")
#line 2058 "cplus.met"
        }
#line 2058 "cplus.met"
#line 2059 "cplus.met"
        if (NPUSH_CALL_AFF_VERIF(valTree = ,_Tak(declarator), 49, cplus)){
#line 2059 "cplus.met"
#line 2060 "cplus.met"
            {
#line 2060 "cplus.met"
                PPTREE _ptRes0=0;
#line 2060 "cplus.met"
                _ptRes0= MakeTree(DECLARATOR, 2);
#line 2060 "cplus.met"
                ReplaceTree(_ptRes0, 1, retTree );
#line 2060 "cplus.met"
                ReplaceTree(_ptRes0, 2, valTree );
#line 2060 "cplus.met"
                valTree=_ptRes0;
#line 2060 "cplus.met"
            }
#line 2060 "cplus.met"
        } else {
#line 2060 "cplus.met"
#line 2062 "cplus.met"
            if (NPUSH_CALL_AFF_VERIF(valTree = ,_Tak(abstract_declarator), 2, cplus)){
#line 2062 "cplus.met"
#line 2063 "cplus.met"
                {
#line 2063 "cplus.met"
                    PPTREE _ptRes0=0;
#line 2063 "cplus.met"
                    _ptRes0= MakeTree(ABST_DECLARATOR, 2);
#line 2063 "cplus.met"
                    ReplaceTree(_ptRes0, 1, retTree );
#line 2063 "cplus.met"
                    ReplaceTree(_ptRes0, 2, valTree );
#line 2063 "cplus.met"
                    valTree=_ptRes0;
#line 2063 "cplus.met"
                }
#line 2063 "cplus.met"
            } else {
#line 2063 "cplus.met"
#line 2065 "cplus.met"
                valTree = retTree ;
#line 2065 "cplus.met"
            }
#line 2065 "cplus.met"
        }
#line 2065 "cplus.met"
#line 2065 "cplus.met"
    }
#line 2065 "cplus.met"
#line 2067 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 2067 "cplus.met"
    if (  !SEE_TOKEN( PFER,")") || !(CommTerm(),1)) {
#line 2067 "cplus.met"
        MulFreeTree(2,retTree,valTree);
        TOKEN_EXIT(catch_unit_ansi_exit,")")
#line 2067 "cplus.met"
    } else {
#line 2067 "cplus.met"
        tokenAhead = 0 ;
#line 2067 "cplus.met"
    }
#line 2067 "cplus.met"
#line 2068 "cplus.met"
    {
#line 2068 "cplus.met"
        PPTREE _ptTree0=0;
#line 2068 "cplus.met"
        {
#line 2068 "cplus.met"
            PPTREE _ptTree1=0,_ptRes1=0;
#line 2068 "cplus.met"
            _ptRes1= MakeTree(CATCH_ANSI, 2);
#line 2068 "cplus.met"
            ReplaceTree(_ptRes1, 1, valTree );
#line 2068 "cplus.met"
            if ( (_ptTree1=NQUICK_CALL(_Tak(compound_statement)(error_free), 31, cplus))== (PPTREE) -1 ) {
#line 2068 "cplus.met"
                MulFreeTree(5,_ptRes1,_ptTree1,_ptTree0,retTree,valTree);
                PROG_EXIT(catch_unit_ansi_exit,"catch_unit_ansi")
#line 2068 "cplus.met"
            }
#line 2068 "cplus.met"
            ReplaceTree(_ptRes1, 2, _ptTree1);
#line 2068 "cplus.met"
            _ptTree0=_ptRes1;
#line 2068 "cplus.met"
        }
#line 2068 "cplus.met"
        _retValue =_ptTree0;
#line 2068 "cplus.met"
        goto catch_unit_ansi_ret;
#line 2068 "cplus.met"
    }
#line 2068 "cplus.met"
#line 2068 "cplus.met"
#line 2068 "cplus.met"

#line 2069 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2069 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 2069 "cplus.met"
return((PPTREE) 0);
#line 2069 "cplus.met"

#line 2069 "cplus.met"
catch_unit_ansi_exit :
#line 2069 "cplus.met"

#line 2069 "cplus.met"
    _Debug = TRACE_RULE("catch_unit_ansi",TRACE_EXIT,(PPTREE)0);
#line 2069 "cplus.met"
    _funcLevel--;
#line 2069 "cplus.met"
    return((PPTREE) -1) ;
#line 2069 "cplus.met"

#line 2069 "cplus.met"
catch_unit_ansi_ret :
#line 2069 "cplus.met"
    
#line 2069 "cplus.met"
    _Debug = TRACE_RULE("catch_unit_ansi",TRACE_RETURN,_retValue);
#line 2069 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2069 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 2069 "cplus.met"
    return _retValue ;
#line 2069 "cplus.met"
}
#line 2069 "cplus.met"

#line 2069 "cplus.met"
#line 2091 "cplus.met"
PPTREE cplus::class_declaration ( int error_free)
#line 2091 "cplus.met"
{
#line 2091 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 2091 "cplus.met"
    int _value,_nbPre = 0 ;
#line 2091 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 2091 "cplus.met"
    int _Debug = TRACE_RULE("class_declaration",TRACE_ENTER,(PPTREE)0);
#line 2091 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 2091 "cplus.met"
#line 2091 "cplus.met"
    PPTREE _addlist1 = (PPTREE) 0;
#line 2091 "cplus.met"
#line 2091 "cplus.met"
    PPTREE retTree = (PPTREE) 0,inter = (PPTREE) 0,list = (PPTREE) 0;
#line 2091 "cplus.met"
#line 2093 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 2093 "cplus.met"
    switch( lexEl.Value) {
#line 2093 "cplus.met"
#line 2094 "cplus.met"
        case STRUCT : 
#line 2094 "cplus.met"
            tokenAhead = 0 ;
#line 2094 "cplus.met"
            CommTerm();
#line 2094 "cplus.met"
#line 2094 "cplus.met"
            {
#line 2094 "cplus.met"
                PPTREE _ptRes0=0;
#line 2094 "cplus.met"
                _ptRes0= MakeTree(CLASS, 4);
#line 2094 "cplus.met"
                ReplaceTree(_ptRes0, 1, MakeString ("struct"));
#line 2094 "cplus.met"
                retTree=_ptRes0;
#line 2094 "cplus.met"
            }
#line 2094 "cplus.met"
            break;
#line 2094 "cplus.met"
#line 2095 "cplus.met"
        case UNION : 
#line 2095 "cplus.met"
            tokenAhead = 0 ;
#line 2095 "cplus.met"
            CommTerm();
#line 2095 "cplus.met"
#line 2095 "cplus.met"
            {
#line 2095 "cplus.met"
                PPTREE _ptRes0=0;
#line 2095 "cplus.met"
                _ptRes0= MakeTree(CLASS, 4);
#line 2095 "cplus.met"
                ReplaceTree(_ptRes0, 1, MakeString ("union"));
#line 2095 "cplus.met"
                retTree=_ptRes0;
#line 2095 "cplus.met"
            }
#line 2095 "cplus.met"
            break;
#line 2095 "cplus.met"
#line 2096 "cplus.met"
        case CLASS : 
#line 2096 "cplus.met"
            tokenAhead = 0 ;
#line 2096 "cplus.met"
            CommTerm();
#line 2096 "cplus.met"
#line 2096 "cplus.met"
            {
#line 2096 "cplus.met"
                PPTREE _ptRes0=0;
#line 2096 "cplus.met"
                _ptRes0= MakeTree(CLASS, 4);
#line 2096 "cplus.met"
                ReplaceTree(_ptRes0, 1, MakeString ("class"));
#line 2096 "cplus.met"
                retTree=_ptRes0;
#line 2096 "cplus.met"
            }
#line 2096 "cplus.met"
            break;
#line 2096 "cplus.met"
        default :
#line 2096 "cplus.met"
            MulFreeTree(4,_addlist1,inter,list,retTree);
            CASE_EXIT(class_declaration_exit,"either struct or union or class")
#line 2096 "cplus.met"
            break;
#line 2096 "cplus.met"
    }
#line 2096 "cplus.met"
#line 2098 "cplus.met"
    {
#line 2098 "cplus.met"
        PPTREE _ptTree0=0;
#line 2098 "cplus.met"
        if ( (_ptTree0=NQUICK_CALL(_Tak(range_modifier_ident)(error_free), 127, cplus))== (PPTREE) -1 ) {
#line 2098 "cplus.met"
            MulFreeTree(5,_ptTree0,_addlist1,inter,list,retTree);
            PROG_EXIT(class_declaration_exit,"class_declaration")
#line 2098 "cplus.met"
        }
#line 2098 "cplus.met"
        ReplaceTree(retTree , 2 , _ptTree0);
#line 2098 "cplus.met"
    }
#line 2098 "cplus.met"
#line 2099 "cplus.met"
    if ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN(DPOI,":") && (tokenAhead = 0,CommTerm(),1)){
#line 2099 "cplus.met"
#line 2100 "cplus.met"
        {
#line 2100 "cplus.met"
            PPTREE _ptTree0=0;
#line 2100 "cplus.met"
            if ( (_ptTree0=NQUICK_CALL(_Tak(base_specifier)(error_free), 21, cplus))== (PPTREE) -1 ) {
#line 2100 "cplus.met"
                MulFreeTree(5,_ptTree0,_addlist1,inter,list,retTree);
                PROG_EXIT(class_declaration_exit,"class_declaration")
#line 2100 "cplus.met"
            }
#line 2100 "cplus.met"
            ReplaceTree(retTree , 3 , _ptTree0);
#line 2100 "cplus.met"
        }
#line 2100 "cplus.met"
#line 2100 "cplus.met"
    }
#line 2100 "cplus.met"
#line 2101 "cplus.met"
    if ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN(AOUV,"{") && (tokenAhead = 0,CommTerm(),1)){
#line 2101 "cplus.met"
#line 2102 "cplus.met"
#line 2103 "cplus.met"
        do {
#line 2103 "cplus.met"
#line 2103 "cplus.met"
            _addlist1 = list ;
#line 2103 "cplus.met"
#line 2104 "cplus.met"
            while (NPUSH_CALL_AFF_VERIF(inter = ,_Tak(inside_declaration), 86, cplus)) { 
#line 2104 "cplus.met"
#line 2105 "cplus.met"
#line 2105 "cplus.met"
                _addlist1 =AddList(_addlist1 ,inter );
#line 2105 "cplus.met"
#line 2105 "cplus.met"
                if (list){
#line 2105 "cplus.met"
#line 2105 "cplus.met"
                    _addlist1 = SonTree (_addlist1 ,2 );
#line 2105 "cplus.met"
                } else {
#line 2105 "cplus.met"
#line 2105 "cplus.met"
                    list = _addlist1 ;
#line 2105 "cplus.met"
                }
#line 2105 "cplus.met"
            } 
#line 2105 "cplus.met"
#line 2106 "cplus.met"
            (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 2106 "cplus.met"
            switch( lexEl.Value) {
#line 2106 "cplus.met"
#line 2107 "cplus.met"
                case PUBLIC : 
#line 2107 "cplus.met"
#line 2107 "cplus.met"
                    {
#line 2107 "cplus.met"
                        PPTREE _ptTree0=0;
#line 2107 "cplus.met"
                        if ( (_ptTree0=NQUICK_CALL(_Tak(protect_declare)(error_free), 117, cplus))== (PPTREE) -1 ) {
#line 2107 "cplus.met"
                            MulFreeTree(5,_ptTree0,_addlist1,inter,list,retTree);
                            PROG_EXIT(class_declaration_exit,"class_declaration")
#line 2107 "cplus.met"
                        }
#line 2107 "cplus.met"
                        list =AddList(list , _ptTree0);
#line 2107 "cplus.met"
                    }
#line 2107 "cplus.met"
                    break;
#line 2107 "cplus.met"
#line 2108 "cplus.met"
                case PRIVATE : 
#line 2108 "cplus.met"
#line 2108 "cplus.met"
                    {
#line 2108 "cplus.met"
                        PPTREE _ptTree0=0;
#line 2108 "cplus.met"
                        if ( (_ptTree0=NQUICK_CALL(_Tak(protect_declare)(error_free), 117, cplus))== (PPTREE) -1 ) {
#line 2108 "cplus.met"
                            MulFreeTree(5,_ptTree0,_addlist1,inter,list,retTree);
                            PROG_EXIT(class_declaration_exit,"class_declaration")
#line 2108 "cplus.met"
                        }
#line 2108 "cplus.met"
                        list =AddList(list , _ptTree0);
#line 2108 "cplus.met"
                    }
#line 2108 "cplus.met"
                    break;
#line 2108 "cplus.met"
#line 2109 "cplus.met"
                case PROTECTED : 
#line 2109 "cplus.met"
#line 2109 "cplus.met"
                    {
#line 2109 "cplus.met"
                        PPTREE _ptTree0=0;
#line 2109 "cplus.met"
                        if ( (_ptTree0=NQUICK_CALL(_Tak(protect_declare)(error_free), 117, cplus))== (PPTREE) -1 ) {
#line 2109 "cplus.met"
                            MulFreeTree(5,_ptTree0,_addlist1,inter,list,retTree);
                            PROG_EXIT(class_declaration_exit,"class_declaration")
#line 2109 "cplus.met"
                        }
#line 2109 "cplus.met"
                        list =AddList(list , _ptTree0);
#line 2109 "cplus.met"
                    }
#line 2109 "cplus.met"
                    break;
#line 2109 "cplus.met"
#line 2109 "cplus.met"
                case AFER : 
#line 2109 "cplus.met"
#line 2109 "cplus.met"
                    break;
#line 2109 "cplus.met"
#line 2111 "cplus.met"
                default : 
#line 2111 "cplus.met"
#line 2111 "cplus.met"
                    
#line 2111 "cplus.met"
                    MulFreeTree(4,_addlist1,inter,list,retTree);
                    LEX_EXIT ("",0);
#line 2111 "cplus.met"
                    goto class_declaration_exit;
#line 2111 "cplus.met"
                    break;
#line 2111 "cplus.met"
            }
#line 2111 "cplus.met"
#line 2111 "cplus.met"
#line 2113 "cplus.met"
        } while ( !(((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN( AFER,"}")) || 
#line 2113 "cplus.met"
                   (! ((tokenAhead && tokenAhead != -1)|| (c != EOF))))) ;
#line 2113 "cplus.met"
#line 2114 "cplus.met"
        {
#line 2114 "cplus.met"
            PPTREE _ptTree0=0;
#line 2114 "cplus.met"
            {
#line 2114 "cplus.met"
                PPTREE _ptRes1=0;
#line 2114 "cplus.met"
                _ptRes1= MakeTree(CLASS_DECL, 1);
#line 2114 "cplus.met"
                ReplaceTree(_ptRes1, 1, list );
#line 2114 "cplus.met"
                _ptTree0=_ptRes1;
#line 2114 "cplus.met"
            }
#line 2114 "cplus.met"
            ReplaceTree(retTree , 4 , _ptTree0);
#line 2114 "cplus.met"
        }
#line 2114 "cplus.met"
#line 2115 "cplus.met"
        (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 2115 "cplus.met"
        if (  !SEE_TOKEN( AFER,"}") || !(CommTerm(),1)) {
#line 2115 "cplus.met"
            MulFreeTree(4,_addlist1,inter,list,retTree);
            TOKEN_EXIT(class_declaration_exit,"}")
#line 2115 "cplus.met"
        } else {
#line 2115 "cplus.met"
            tokenAhead = 0 ;
#line 2115 "cplus.met"
        }
#line 2115 "cplus.met"
#line 2115 "cplus.met"
#line 2115 "cplus.met"
    }
#line 2115 "cplus.met"
#line 2117 "cplus.met"
    {
#line 2117 "cplus.met"
        _retValue = retTree ;
#line 2117 "cplus.met"
        goto class_declaration_ret;
#line 2117 "cplus.met"
        
#line 2117 "cplus.met"
    }
#line 2117 "cplus.met"
#line 2117 "cplus.met"
#line 2117 "cplus.met"

#line 2118 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2118 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 2118 "cplus.met"
return((PPTREE) 0);
#line 2118 "cplus.met"

#line 2118 "cplus.met"
class_declaration_exit :
#line 2118 "cplus.met"

#line 2118 "cplus.met"
    _Debug = TRACE_RULE("class_declaration",TRACE_EXIT,(PPTREE)0);
#line 2118 "cplus.met"
    _funcLevel--;
#line 2118 "cplus.met"
    return((PPTREE) -1) ;
#line 2118 "cplus.met"

#line 2118 "cplus.met"
class_declaration_ret :
#line 2118 "cplus.met"
    
#line 2118 "cplus.met"
    _Debug = TRACE_RULE("class_declaration",TRACE_RETURN,_retValue);
#line 2118 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2118 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 2118 "cplus.met"
    return _retValue ;
#line 2118 "cplus.met"
}
#line 2118 "cplus.met"

#line 2118 "cplus.met"
#line 792 "cplus.met"
PPTREE cplus::comment_eater ( int error_free)
#line 792 "cplus.met"
{
#line 792 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 792 "cplus.met"
    int _value,_nbPre = 0 ;
#line 792 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 792 "cplus.met"
    int _Debug = TRACE_RULE("comment_eater",TRACE_ENTER,(PPTREE)0);
#line 792 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 792 "cplus.met"
#line 792 "cplus.met"
    PPTREE retTree = (PPTREE) 0;
#line 792 "cplus.met"
#line 794 "cplus.met"
    1;
#line 794 "cplus.met"
    switch( lexEl.Value) {
#line 794 "cplus.met"
#line 795 "cplus.met"
        default : 
#line 795 "cplus.met"
            tokenAhead = 0 ;
#line 795 "cplus.met"
            CommTerm();
#line 795 "cplus.met"
#line 796 "cplus.met"
            if ( lexEl.Value != -1 ){
#line 796 "cplus.met"
#line 797 "cplus.met"
                
#line 797 "cplus.met"
                MulFreeTree(1,retTree);
                LEX_EXIT ("",0);
#line 797 "cplus.met"
                goto comment_eater_exit;
#line 797 "cplus.met"
#line 797 "cplus.met"
            } else {
#line 797 "cplus.met"
#line 799 "cplus.met"
                {
#line 799 "cplus.met"
                    _retValue = retTree ;
#line 799 "cplus.met"
                    goto comment_eater_ret;
#line 799 "cplus.met"
                    
#line 799 "cplus.met"
                }
#line 799 "cplus.met"
            }
#line 799 "cplus.met"
            break;
#line 799 "cplus.met"
    }
#line 799 "cplus.met"
#line 799 "cplus.met"
#line 800 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 800 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 800 "cplus.met"
return((PPTREE) 0);
#line 800 "cplus.met"

#line 800 "cplus.met"
comment_eater_exit :
#line 800 "cplus.met"

#line 800 "cplus.met"
    _Debug = TRACE_RULE("comment_eater",TRACE_EXIT,(PPTREE)0);
#line 800 "cplus.met"
    _funcLevel--;
#line 800 "cplus.met"
    return((PPTREE) -1) ;
#line 800 "cplus.met"

#line 800 "cplus.met"
comment_eater_ret :
#line 800 "cplus.met"
    
#line 800 "cplus.met"
    _Debug = TRACE_RULE("comment_eater",TRACE_RETURN,_retValue);
#line 800 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 800 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 800 "cplus.met"
    return _retValue ;
#line 800 "cplus.met"
}
#line 800 "cplus.met"

#line 800 "cplus.met"
#line 1926 "cplus.met"
PPTREE cplus::complete_class_name ( int error_free)
#line 1926 "cplus.met"
{
#line 1926 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 1926 "cplus.met"
    int _value,_nbPre = 0 ;
#line 1926 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 1926 "cplus.met"
    int _Debug = TRACE_RULE("complete_class_name",TRACE_ENTER,(PPTREE)0);
#line 1926 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 1926 "cplus.met"
#line 1926 "cplus.met"
    PPTREE ret = (PPTREE) 0;
#line 1926 "cplus.met"
#line 1928 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 1928 "cplus.met"
    switch( lexEl.Value) {
#line 1928 "cplus.met"
#line 1929 "cplus.met"
        case META : 
#line 1929 "cplus.met"
        case IDENT : 
#line 1929 "cplus.met"
#line 1929 "cplus.met"
            if ( (ret=NQUICK_CALL(_Tak(qualified_name)(error_free), 120, cplus))== (PPTREE) -1 ) {
#line 1929 "cplus.met"
                MulFreeTree(1,ret);
                PROG_EXIT(complete_class_name_exit,"complete_class_name")
#line 1929 "cplus.met"
            }
#line 1929 "cplus.met"
            break;
#line 1929 "cplus.met"
#line 1930 "cplus.met"
        case DPOIDPOI : 
#line 1930 "cplus.met"
            tokenAhead = 0 ;
#line 1930 "cplus.met"
            CommTerm();
#line 1930 "cplus.met"
#line 1930 "cplus.met"
            {
#line 1930 "cplus.met"
                PPTREE _ptTree0=0,_ptRes0=0;
#line 1930 "cplus.met"
                _ptRes0= MakeTree(QUALIFIED, 2);
#line 1930 "cplus.met"
                if ( (_ptTree0=NQUICK_CALL(_Tak(qualified_name)(error_free), 120, cplus))== (PPTREE) -1 ) {
#line 1930 "cplus.met"
                    MulFreeTree(3,_ptRes0,_ptTree0,ret);
                    PROG_EXIT(complete_class_name_exit,"complete_class_name")
#line 1930 "cplus.met"
                }
#line 1930 "cplus.met"
                ReplaceTree(_ptRes0, 2, _ptTree0);
#line 1930 "cplus.met"
                ret=_ptRes0;
#line 1930 "cplus.met"
            }
#line 1930 "cplus.met"
            break;
#line 1930 "cplus.met"
        default :
#line 1930 "cplus.met"
            MulFreeTree(1,ret);
            CASE_EXIT(complete_class_name_exit,"either IDENT or ::")
#line 1930 "cplus.met"
            break;
#line 1930 "cplus.met"
    }
#line 1930 "cplus.met"
#line 1932 "cplus.met"
    {
#line 1932 "cplus.met"
        _retValue = ret ;
#line 1932 "cplus.met"
        goto complete_class_name_ret;
#line 1932 "cplus.met"
        
#line 1932 "cplus.met"
    }
#line 1932 "cplus.met"
#line 1932 "cplus.met"
#line 1932 "cplus.met"

#line 1933 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1933 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 1933 "cplus.met"
return((PPTREE) 0);
#line 1933 "cplus.met"

#line 1933 "cplus.met"
complete_class_name_exit :
#line 1933 "cplus.met"

#line 1933 "cplus.met"
    _Debug = TRACE_RULE("complete_class_name",TRACE_EXIT,(PPTREE)0);
#line 1933 "cplus.met"
    _funcLevel--;
#line 1933 "cplus.met"
    return((PPTREE) -1) ;
#line 1933 "cplus.met"

#line 1933 "cplus.met"
complete_class_name_ret :
#line 1933 "cplus.met"
    
#line 1933 "cplus.met"
    _Debug = TRACE_RULE("complete_class_name",TRACE_RETURN,_retValue);
#line 1933 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1933 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 1933 "cplus.met"
    return _retValue ;
#line 1933 "cplus.met"
}
#line 1933 "cplus.met"

#line 1933 "cplus.met"
#line 3408 "cplus.met"
PPTREE cplus::compound_statement ( int error_free)
#line 3408 "cplus.met"
{
#line 3408 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 3408 "cplus.met"
    int _value,_nbPre = 0 ;
#line 3408 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 3408 "cplus.met"
    int _Debug = TRACE_RULE("compound_statement",TRACE_ENTER,(PPTREE)0);
#line 3408 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 3408 "cplus.met"
#line 3408 "cplus.met"
    PPTREE _addlist1 = (PPTREE) 0;
#line 3408 "cplus.met"
#line 3408 "cplus.met"
    PPTREE statList = (PPTREE) 0,stat = (PPTREE) 0;
#line 3408 "cplus.met"
#line 3410 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3410 "cplus.met"
    if (  !SEE_TOKEN( AOUV,"{") || !(CommTerm(),1)) {
#line 3410 "cplus.met"
        MulFreeTree(3,_addlist1,stat,statList);
        TOKEN_EXIT(compound_statement_exit,"{")
#line 3410 "cplus.met"
    } else {
#line 3410 "cplus.met"
        tokenAhead = 0 ;
#line 3410 "cplus.met"
    }
#line 3410 "cplus.met"
#line 3411 "cplus.met"
     debut :
#line 3411 "cplus.met"
#line 3411 "cplus.met"
    _addlist1 = statList ;
#line 3411 "cplus.met"
#line 3413 "cplus.met"
    while (((((NPUSH_CALL_AFF_VERIF(stat = ,_Tak(statement), 143, cplus)) || 
#line 3413 "cplus.met"
             (NPUSH_CALL_AFF_VERIF(stat = ,_Tak(data_declaration), 43, cplus))) || 
#line 3413 "cplus.met"
            (NPUSH_CALL_AFF_VERIF(stat = ,_Tak(stat_dir), 139, cplus))) || 
#line 3413 "cplus.met"
           (NPUSH_CALL_AFF_VERIF(stat = ,_Tak(exception), 61, cplus))) || 
#line 3413 "cplus.met"
          (NPUSH_CALL_AFF_VERIF(stat = ,_Tak(ext_data_declaration), 74, cplus))) { 
#line 3413 "cplus.met"
#line 3415 "cplus.met"
#line 3415 "cplus.met"
        _addlist1 =AddList(_addlist1 ,stat );
#line 3415 "cplus.met"
#line 3415 "cplus.met"
        if (statList){
#line 3415 "cplus.met"
#line 3415 "cplus.met"
            _addlist1 = SonTree (_addlist1 ,2 );
#line 3415 "cplus.met"
        } else {
#line 3415 "cplus.met"
#line 3415 "cplus.met"
            statList = _addlist1 ;
#line 3415 "cplus.met"
        }
#line 3415 "cplus.met"
    } 
#line 3415 "cplus.met"
#line 3416 "cplus.met"
    {
#line 3416 "cplus.met"
        PPTREE _ptTree0=0;
#line 3416 "cplus.met"
        if ( (_ptTree0=NQUICK_CALL(_Tak(none_statement)(error_free), 106, cplus))== (PPTREE) -1 ) {
#line 3416 "cplus.met"
            MulFreeTree(4,_ptTree0,_addlist1,stat,statList);
            PROG_EXIT(compound_statement_exit,"compound_statement")
#line 3416 "cplus.met"
        }
#line 3416 "cplus.met"
        statList =AddList(statList , _ptTree0);
#line 3416 "cplus.met"
    }
#line 3416 "cplus.met"
#line 3417 "cplus.met"
    if (! ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN(AFER,"}") && (tokenAhead = 0,CommTerm(),1))){
#line 3417 "cplus.met"
#line 3418 "cplus.met"
#line 3419 "cplus.met"
        dumperror ();
#line 3419 "cplus.met"
#line 3420 "cplus.met"
        (tokenAhead == 5|| (LexEndLine(),TRACE_LEX(1)));
#line 3420 "cplus.met"
        if ( ! TERM_OR_META(END_LINE,"END_LINE") || !(CommTerm(),1)) {
#line 3420 "cplus.met"
            MulFreeTree(3,_addlist1,stat,statList);
            TOKEN_EXIT(compound_statement_exit,"END_LINE")
#line 3420 "cplus.met"
        } else {
#line 3420 "cplus.met"
            tokenAhead = 0 ;
#line 3420 "cplus.met"
        }
#line 3420 "cplus.met"
#line 3421 "cplus.met"
         hasGotError = 1 ;
#line 3421 "cplus.met"
#line 3422 "cplus.met"
         goto debut ;
#line 3422 "cplus.met"
#line 3422 "cplus.met"
#line 3422 "cplus.met"
    }
#line 3422 "cplus.met"
#line 3424 "cplus.met"
    {
#line 3424 "cplus.met"
        PPTREE _ptTree0=0;
#line 3424 "cplus.met"
        {
#line 3424 "cplus.met"
            PPTREE _ptRes1=0;
#line 3424 "cplus.met"
            _ptRes1= MakeTree(COMPOUND, 1);
#line 3424 "cplus.met"
            ReplaceTree(_ptRes1, 1, statList );
#line 3424 "cplus.met"
            _ptTree0=_ptRes1;
#line 3424 "cplus.met"
        }
#line 3424 "cplus.met"
        _retValue =_ptTree0;
#line 3424 "cplus.met"
        goto compound_statement_ret;
#line 3424 "cplus.met"
    }
#line 3424 "cplus.met"
#line 3424 "cplus.met"
#line 3424 "cplus.met"

#line 3425 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 3425 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 3425 "cplus.met"
return((PPTREE) 0);
#line 3425 "cplus.met"

#line 3425 "cplus.met"
compound_statement_exit :
#line 3425 "cplus.met"

#line 3425 "cplus.met"
    _Debug = TRACE_RULE("compound_statement",TRACE_EXIT,(PPTREE)0);
#line 3425 "cplus.met"
    _funcLevel--;
#line 3425 "cplus.met"
    return((PPTREE) -1) ;
#line 3425 "cplus.met"

#line 3425 "cplus.met"
compound_statement_ret :
#line 3425 "cplus.met"
    
#line 3425 "cplus.met"
    _Debug = TRACE_RULE("compound_statement",TRACE_RETURN,_retValue);
#line 3425 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 3425 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 3425 "cplus.met"
    return _retValue ;
#line 3425 "cplus.met"
}
#line 3425 "cplus.met"

#line 3425 "cplus.met"
#line 2738 "cplus.met"
PPTREE cplus::conditional_expression ( int error_free)
#line 2738 "cplus.met"
{
#line 2738 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 2738 "cplus.met"
    int _value,_nbPre = 0 ;
#line 2738 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 2738 "cplus.met"
    int _Debug = TRACE_RULE("conditional_expression",TRACE_ENTER,(PPTREE)0);
#line 2738 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 2738 "cplus.met"
#line 2738 "cplus.met"
    PPTREE expTree = (PPTREE) 0,condTree = (PPTREE) 0;
#line 2738 "cplus.met"
#line 2740 "cplus.met"
    if ( (expTree=NQUICK_CALL(_Tak(logical_or_expression)(error_free), 93, cplus))== (PPTREE) -1 ) {
#line 2740 "cplus.met"
        MulFreeTree(2,condTree,expTree);
        PROG_EXIT(conditional_expression_exit,"conditional_expression")
#line 2740 "cplus.met"
    }
#line 2740 "cplus.met"
#line 2741 "cplus.met"
    if ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN(INTE,"?") && (tokenAhead = 0,CommTerm(),1)){
#line 2741 "cplus.met"
#line 2742 "cplus.met"
#line 2743 "cplus.met"
        {
#line 2743 "cplus.met"
            PPTREE _ptRes0=0;
#line 2743 "cplus.met"
            _ptRes0= MakeTree(COND_AFF, 3);
#line 2743 "cplus.met"
            ReplaceTree(_ptRes0, 1, expTree );
#line 2743 "cplus.met"
            condTree=_ptRes0;
#line 2743 "cplus.met"
        }
#line 2743 "cplus.met"
#line 2744 "cplus.met"
        {
#line 2744 "cplus.met"
            PPTREE _ptTree0=0;
#line 2744 "cplus.met"
            if ( (_ptTree0=NQUICK_CALL(_Tak(expression)(error_free), 65, cplus))== (PPTREE) -1 ) {
#line 2744 "cplus.met"
                MulFreeTree(3,_ptTree0,condTree,expTree);
                PROG_EXIT(conditional_expression_exit,"conditional_expression")
#line 2744 "cplus.met"
            }
#line 2744 "cplus.met"
            ReplaceTree(condTree , 2 , _ptTree0);
#line 2744 "cplus.met"
        }
#line 2744 "cplus.met"
#line 2745 "cplus.met"
        (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 2745 "cplus.met"
        if (  !SEE_TOKEN( DPOI,":") || !(CommTerm(),1)) {
#line 2745 "cplus.met"
            MulFreeTree(2,condTree,expTree);
            TOKEN_EXIT(conditional_expression_exit,":")
#line 2745 "cplus.met"
        } else {
#line 2745 "cplus.met"
            tokenAhead = 0 ;
#line 2745 "cplus.met"
        }
#line 2745 "cplus.met"
#line 2746 "cplus.met"
        {
#line 2746 "cplus.met"
            PPTREE _ptTree0=0;
#line 2746 "cplus.met"
            {
#line 2746 "cplus.met"
                PPTREE _ptTree1=0;
#line 2746 "cplus.met"
                if ( (_ptTree1=NQUICK_CALL(_Tak(conditional_expression)(error_free), 32, cplus))== (PPTREE) -1 ) {
#line 2746 "cplus.met"
                    MulFreeTree(4,_ptTree1,_ptTree0,condTree,expTree);
                    PROG_EXIT(conditional_expression_exit,"conditional_expression")
#line 2746 "cplus.met"
                }
#line 2746 "cplus.met"
                _ptTree0=ReplaceTree(condTree , 3 , _ptTree1);
#line 2746 "cplus.met"
            }
#line 2746 "cplus.met"
            _retValue =_ptTree0;
#line 2746 "cplus.met"
            goto conditional_expression_ret;
#line 2746 "cplus.met"
        }
#line 2746 "cplus.met"
#line 2746 "cplus.met"
#line 2746 "cplus.met"
    } else {
#line 2746 "cplus.met"
#line 2749 "cplus.met"
        {
#line 2749 "cplus.met"
            _retValue = expTree ;
#line 2749 "cplus.met"
            goto conditional_expression_ret;
#line 2749 "cplus.met"
            
#line 2749 "cplus.met"
        }
#line 2749 "cplus.met"
    }
#line 2749 "cplus.met"
#line 2749 "cplus.met"
#line 2749 "cplus.met"

#line 2750 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2750 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 2750 "cplus.met"
return((PPTREE) 0);
#line 2750 "cplus.met"

#line 2750 "cplus.met"
conditional_expression_exit :
#line 2750 "cplus.met"

#line 2750 "cplus.met"
    _Debug = TRACE_RULE("conditional_expression",TRACE_EXIT,(PPTREE)0);
#line 2750 "cplus.met"
    _funcLevel--;
#line 2750 "cplus.met"
    return((PPTREE) -1) ;
#line 2750 "cplus.met"

#line 2750 "cplus.met"
conditional_expression_ret :
#line 2750 "cplus.met"
    
#line 2750 "cplus.met"
    _Debug = TRACE_RULE("conditional_expression",TRACE_RETURN,_retValue);
#line 2750 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2750 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 2750 "cplus.met"
    return _retValue ;
#line 2750 "cplus.met"
}
#line 2750 "cplus.met"

#line 2750 "cplus.met"
#line 2226 "cplus.met"
PPTREE cplus::const_or_volatile ( int error_free)
#line 2226 "cplus.met"
{
#line 2226 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 2226 "cplus.met"
    int _value,_nbPre = 0 ;
#line 2226 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 2226 "cplus.met"
    int _Debug = TRACE_RULE("const_or_volatile",TRACE_ENTER,(PPTREE)0);
#line 2226 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 2226 "cplus.met"
#line 2227 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 2227 "cplus.met"
    switch( lexEl.Value) {
#line 2227 "cplus.met"
#line 2228 "cplus.met"
        case CONST : 
#line 2228 "cplus.met"
#line 2228 "cplus.met"
            {
#line 2228 "cplus.met"
                PPTREE _ptTree0=0;
#line 2228 "cplus.met"
                {
#line 2228 "cplus.met"
                    PPTREE _ptTree1=0,_ptRes1=0;
#line 2228 "cplus.met"
                    _ptRes1= MakeTree(RANGE_MODIFIER, 2);
#line 2228 "cplus.met"
                    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 2228 "cplus.met"
                    if (  !SEE_TOKEN( CONST,"const") || !(_ptTree1 = CommString(lexEl.string()))) {
#line 2228 "cplus.met"
                        MulFreeTree(3,_ptRes1,_ptTree1,_ptTree0);
                        TOKEN_EXIT(const_or_volatile_exit,"const")
#line 2228 "cplus.met"
                    } else {
#line 2228 "cplus.met"
                        tokenAhead = 0 ;
#line 2228 "cplus.met"
                    }
#line 2228 "cplus.met"
                    ReplaceTree(_ptRes1, 1, _ptTree1);
#line 2228 "cplus.met"
                    _ptTree0=_ptRes1;
#line 2228 "cplus.met"
                }
#line 2228 "cplus.met"
                _retValue =_ptTree0;
#line 2228 "cplus.met"
                goto const_or_volatile_ret;
#line 2228 "cplus.met"
            }
#line 2228 "cplus.met"
            break;
#line 2228 "cplus.met"
#line 2229 "cplus.met"
        case VOLATILE : 
#line 2229 "cplus.met"
#line 2229 "cplus.met"
            {
#line 2229 "cplus.met"
                PPTREE _ptTree0=0;
#line 2229 "cplus.met"
                {
#line 2229 "cplus.met"
                    PPTREE _ptTree1=0,_ptRes1=0;
#line 2229 "cplus.met"
                    _ptRes1= MakeTree(RANGE_MODIFIER, 2);
#line 2229 "cplus.met"
                    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 2229 "cplus.met"
                    if (  !SEE_TOKEN( VOLATILE,"volatile") || !(_ptTree1 = CommString(lexEl.string()))) {
#line 2229 "cplus.met"
                        MulFreeTree(3,_ptRes1,_ptTree1,_ptTree0);
                        TOKEN_EXIT(const_or_volatile_exit,"volatile")
#line 2229 "cplus.met"
                    } else {
#line 2229 "cplus.met"
                        tokenAhead = 0 ;
#line 2229 "cplus.met"
                    }
#line 2229 "cplus.met"
                    ReplaceTree(_ptRes1, 1, _ptTree1);
#line 2229 "cplus.met"
                    _ptTree0=_ptRes1;
#line 2229 "cplus.met"
                }
#line 2229 "cplus.met"
                _retValue =_ptTree0;
#line 2229 "cplus.met"
                goto const_or_volatile_ret;
#line 2229 "cplus.met"
            }
#line 2229 "cplus.met"
            break;
#line 2229 "cplus.met"
        default :
#line 2229 "cplus.met"
            CASE_EXIT(const_or_volatile_exit,"either const or volatile")
#line 2229 "cplus.met"
            break;
#line 2229 "cplus.met"
    }
#line 2229 "cplus.met"
#line 2229 "cplus.met"
#line 2230 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2230 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 2230 "cplus.met"
return((PPTREE) 0);
#line 2230 "cplus.met"

#line 2230 "cplus.met"
const_or_volatile_exit :
#line 2230 "cplus.met"

#line 2230 "cplus.met"
    _Debug = TRACE_RULE("const_or_volatile",TRACE_EXIT,(PPTREE)0);
#line 2230 "cplus.met"
    _funcLevel--;
#line 2230 "cplus.met"
    return((PPTREE) -1) ;
#line 2230 "cplus.met"

#line 2230 "cplus.met"
const_or_volatile_ret :
#line 2230 "cplus.met"
    
#line 2230 "cplus.met"
    _Debug = TRACE_RULE("const_or_volatile",TRACE_RETURN,_retValue);
#line 2230 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2230 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 2230 "cplus.met"
    return _retValue ;
#line 2230 "cplus.met"
}
#line 2230 "cplus.met"

#line 2230 "cplus.met"
#line 3193 "cplus.met"
PPTREE cplus::constan ( int error_free)
#line 3193 "cplus.met"
{
#line 3193 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 3193 "cplus.met"
    int _value,_nbPre = 0 ;
#line 3193 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 3193 "cplus.met"
    int _Debug = TRACE_RULE("constan",TRACE_ENTER,(PPTREE)0);
#line 3193 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 3193 "cplus.met"
#line 3194 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3194 "cplus.met"
    switch( lexEl.Value) {
#line 3194 "cplus.met"
#line 3195 "cplus.met"
        case META : 
#line 3195 "cplus.met"
        case INTEGER : 
#line 3195 "cplus.met"
#line 3195 "cplus.met"
            {
#line 3195 "cplus.met"
                PPTREE _ptTree0=0;
#line 3195 "cplus.met"
                {
#line 3195 "cplus.met"
                    PPTREE _ptTree1=0,_ptRes1=0;
#line 3195 "cplus.met"
                    _ptRes1= MakeTree(INTEGER, 1);
#line 3195 "cplus.met"
                    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3195 "cplus.met"
                    if ( ! TERM_OR_META(INTEGER,"INTEGER") || !(BUILD_TERM_META(_ptTree1))) {
#line 3195 "cplus.met"
                        MulFreeTree(3,_ptRes1,_ptTree1,_ptTree0);
                        TOKEN_EXIT(constan_exit,"INTEGER")
#line 3195 "cplus.met"
                    } else {
#line 3195 "cplus.met"
                        tokenAhead = 0 ;
#line 3195 "cplus.met"
                    }
#line 3195 "cplus.met"
                    ReplaceTree(_ptRes1, 1, _ptTree1);
#line 3195 "cplus.met"
                    _ptTree0=_ptRes1;
#line 3195 "cplus.met"
                }
#line 3195 "cplus.met"
                _retValue =_ptTree0;
#line 3195 "cplus.met"
                goto constan_ret;
#line 3195 "cplus.met"
            }
#line 3195 "cplus.met"
            break;
#line 3195 "cplus.met"
#line 3196 "cplus.met"
        case LINTEGER : 
#line 3196 "cplus.met"
#line 3196 "cplus.met"
            {
#line 3196 "cplus.met"
                PPTREE _ptTree0=0;
#line 3196 "cplus.met"
                {
#line 3196 "cplus.met"
                    PPTREE _ptTree1=0,_ptRes1=0;
#line 3196 "cplus.met"
                    _ptRes1= MakeTree(ILONG, 1);
#line 3196 "cplus.met"
                    {
#line 3196 "cplus.met"
                        PPTREE _ptTree2=0,_ptRes2=0;
#line 3196 "cplus.met"
                        _ptRes2= MakeTree(INTEGER, 1);
#line 3196 "cplus.met"
                        (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3196 "cplus.met"
                        if ( ! TERM_OR_META(LINTEGER,"LINTEGER") || !(BUILD_TERM_META(_ptTree2))) {
#line 3196 "cplus.met"
                            MulFreeTree(5,_ptRes2,_ptTree2,_ptRes1,_ptTree1,_ptTree0);
                            TOKEN_EXIT(constan_exit,"LINTEGER")
#line 3196 "cplus.met"
                        } else {
#line 3196 "cplus.met"
                            tokenAhead = 0 ;
#line 3196 "cplus.met"
                        }
#line 3196 "cplus.met"
                        ReplaceTree(_ptRes2, 1, _ptTree2);
#line 3196 "cplus.met"
                        _ptTree1=_ptRes2;
#line 3196 "cplus.met"
                    }
#line 3196 "cplus.met"
                    ReplaceTree(_ptRes1, 1, _ptTree1);
#line 3196 "cplus.met"
                    _ptTree0=_ptRes1;
#line 3196 "cplus.met"
                }
#line 3196 "cplus.met"
                _retValue =_ptTree0;
#line 3196 "cplus.met"
                goto constan_ret;
#line 3196 "cplus.met"
            }
#line 3196 "cplus.met"
            break;
#line 3196 "cplus.met"
#line 3197 "cplus.met"
        case LLINTEGER : 
#line 3197 "cplus.met"
#line 3197 "cplus.met"
            {
#line 3197 "cplus.met"
                PPTREE _ptTree0=0;
#line 3197 "cplus.met"
                {
#line 3197 "cplus.met"
                    PPTREE _ptTree1=0,_ptRes1=0;
#line 3197 "cplus.met"
                    _ptRes1= MakeTree(ILONGLONG, 1);
#line 3197 "cplus.met"
                    {
#line 3197 "cplus.met"
                        PPTREE _ptTree2=0,_ptRes2=0;
#line 3197 "cplus.met"
                        _ptRes2= MakeTree(INTEGER, 1);
#line 3197 "cplus.met"
                        (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3197 "cplus.met"
                        if ( ! TERM_OR_META(LINTEGER,"LINTEGER") || !(BUILD_TERM_META(_ptTree2))) {
#line 3197 "cplus.met"
                            MulFreeTree(5,_ptRes2,_ptTree2,_ptRes1,_ptTree1,_ptTree0);
                            TOKEN_EXIT(constan_exit,"LINTEGER")
#line 3197 "cplus.met"
                        } else {
#line 3197 "cplus.met"
                            tokenAhead = 0 ;
#line 3197 "cplus.met"
                        }
#line 3197 "cplus.met"
                        ReplaceTree(_ptRes2, 1, _ptTree2);
#line 3197 "cplus.met"
                        _ptTree1=_ptRes2;
#line 3197 "cplus.met"
                    }
#line 3197 "cplus.met"
                    ReplaceTree(_ptRes1, 1, _ptTree1);
#line 3197 "cplus.met"
                    _ptTree0=_ptRes1;
#line 3197 "cplus.met"
                }
#line 3197 "cplus.met"
                _retValue =_ptTree0;
#line 3197 "cplus.met"
                goto constan_ret;
#line 3197 "cplus.met"
            }
#line 3197 "cplus.met"
            break;
#line 3197 "cplus.met"
#line 3198 "cplus.met"
        case UINTEGER : 
#line 3198 "cplus.met"
#line 3198 "cplus.met"
            {
#line 3198 "cplus.met"
                PPTREE _ptTree0=0;
#line 3198 "cplus.met"
                {
#line 3198 "cplus.met"
                    PPTREE _ptTree1=0,_ptRes1=0;
#line 3198 "cplus.met"
                    _ptRes1= MakeTree(IUN, 1);
#line 3198 "cplus.met"
                    {
#line 3198 "cplus.met"
                        PPTREE _ptTree2=0,_ptRes2=0;
#line 3198 "cplus.met"
                        _ptRes2= MakeTree(INTEGER, 1);
#line 3198 "cplus.met"
                        (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3198 "cplus.met"
                        if ( ! TERM_OR_META(UINTEGER,"UINTEGER") || !(BUILD_TERM_META(_ptTree2))) {
#line 3198 "cplus.met"
                            MulFreeTree(5,_ptRes2,_ptTree2,_ptRes1,_ptTree1,_ptTree0);
                            TOKEN_EXIT(constan_exit,"UINTEGER")
#line 3198 "cplus.met"
                        } else {
#line 3198 "cplus.met"
                            tokenAhead = 0 ;
#line 3198 "cplus.met"
                        }
#line 3198 "cplus.met"
                        ReplaceTree(_ptRes2, 1, _ptTree2);
#line 3198 "cplus.met"
                        _ptTree1=_ptRes2;
#line 3198 "cplus.met"
                    }
#line 3198 "cplus.met"
                    ReplaceTree(_ptRes1, 1, _ptTree1);
#line 3198 "cplus.met"
                    _ptTree0=_ptRes1;
#line 3198 "cplus.met"
                }
#line 3198 "cplus.met"
                _retValue =_ptTree0;
#line 3198 "cplus.met"
                goto constan_ret;
#line 3198 "cplus.met"
            }
#line 3198 "cplus.met"
            break;
#line 3198 "cplus.met"
#line 3199 "cplus.met"
        case ULINTEGER : 
#line 3199 "cplus.met"
#line 3199 "cplus.met"
            {
#line 3199 "cplus.met"
                PPTREE _ptTree0=0;
#line 3199 "cplus.met"
                {
#line 3199 "cplus.met"
                    PPTREE _ptTree1=0,_ptRes1=0;
#line 3199 "cplus.met"
                    _ptRes1= MakeTree(IUNLONG, 1);
#line 3199 "cplus.met"
                    {
#line 3199 "cplus.met"
                        PPTREE _ptTree2=0,_ptRes2=0;
#line 3199 "cplus.met"
                        _ptRes2= MakeTree(INTEGER, 1);
#line 3199 "cplus.met"
                        (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3199 "cplus.met"
                        if ( ! TERM_OR_META(ULINTEGER,"ULINTEGER") || !(BUILD_TERM_META(_ptTree2))) {
#line 3199 "cplus.met"
                            MulFreeTree(5,_ptRes2,_ptTree2,_ptRes1,_ptTree1,_ptTree0);
                            TOKEN_EXIT(constan_exit,"ULINTEGER")
#line 3199 "cplus.met"
                        } else {
#line 3199 "cplus.met"
                            tokenAhead = 0 ;
#line 3199 "cplus.met"
                        }
#line 3199 "cplus.met"
                        ReplaceTree(_ptRes2, 1, _ptTree2);
#line 3199 "cplus.met"
                        _ptTree1=_ptRes2;
#line 3199 "cplus.met"
                    }
#line 3199 "cplus.met"
                    ReplaceTree(_ptRes1, 1, _ptTree1);
#line 3199 "cplus.met"
                    _ptTree0=_ptRes1;
#line 3199 "cplus.met"
                }
#line 3199 "cplus.met"
                _retValue =_ptTree0;
#line 3199 "cplus.met"
                goto constan_ret;
#line 3199 "cplus.met"
            }
#line 3199 "cplus.met"
            break;
#line 3199 "cplus.met"
#line 3200 "cplus.met"
        case ULLINTEGER : 
#line 3200 "cplus.met"
#line 3200 "cplus.met"
            {
#line 3200 "cplus.met"
                PPTREE _ptTree0=0;
#line 3200 "cplus.met"
                {
#line 3200 "cplus.met"
                    PPTREE _ptTree1=0,_ptRes1=0;
#line 3200 "cplus.met"
                    _ptRes1= MakeTree(IUNLONGLONG, 1);
#line 3200 "cplus.met"
                    {
#line 3200 "cplus.met"
                        PPTREE _ptTree2=0,_ptRes2=0;
#line 3200 "cplus.met"
                        _ptRes2= MakeTree(INTEGER, 1);
#line 3200 "cplus.met"
                        (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3200 "cplus.met"
                        if ( ! TERM_OR_META(ULINTEGER,"ULINTEGER") || !(BUILD_TERM_META(_ptTree2))) {
#line 3200 "cplus.met"
                            MulFreeTree(5,_ptRes2,_ptTree2,_ptRes1,_ptTree1,_ptTree0);
                            TOKEN_EXIT(constan_exit,"ULINTEGER")
#line 3200 "cplus.met"
                        } else {
#line 3200 "cplus.met"
                            tokenAhead = 0 ;
#line 3200 "cplus.met"
                        }
#line 3200 "cplus.met"
                        ReplaceTree(_ptRes2, 1, _ptTree2);
#line 3200 "cplus.met"
                        _ptTree1=_ptRes2;
#line 3200 "cplus.met"
                    }
#line 3200 "cplus.met"
                    ReplaceTree(_ptRes1, 1, _ptTree1);
#line 3200 "cplus.met"
                    _ptTree0=_ptRes1;
#line 3200 "cplus.met"
                }
#line 3200 "cplus.met"
                _retValue =_ptTree0;
#line 3200 "cplus.met"
                goto constan_ret;
#line 3200 "cplus.met"
            }
#line 3200 "cplus.met"
            break;
#line 3200 "cplus.met"
#line 3201 "cplus.met"
        case HEXA : 
#line 3201 "cplus.met"
#line 3201 "cplus.met"
            {
#line 3201 "cplus.met"
                PPTREE _ptTree0=0;
#line 3201 "cplus.met"
                {
#line 3201 "cplus.met"
                    PPTREE _ptTree1=0,_ptRes1=0;
#line 3201 "cplus.met"
                    _ptRes1= MakeTree(HEXA, 1);
#line 3201 "cplus.met"
                    {
#line 3201 "cplus.met"
                        PPTREE _ptTree2=0,_ptRes2=0;
#line 3201 "cplus.met"
                        _ptRes2= MakeTree(INTEGER, 1);
#line 3201 "cplus.met"
                        (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3201 "cplus.met"
                        if ( ! TERM_OR_META(HEXA,"HEXA") || !(BUILD_TERM_META(_ptTree2))) {
#line 3201 "cplus.met"
                            MulFreeTree(5,_ptRes2,_ptTree2,_ptRes1,_ptTree1,_ptTree0);
                            TOKEN_EXIT(constan_exit,"HEXA")
#line 3201 "cplus.met"
                        } else {
#line 3201 "cplus.met"
                            tokenAhead = 0 ;
#line 3201 "cplus.met"
                        }
#line 3201 "cplus.met"
                        ReplaceTree(_ptRes2, 1, _ptTree2);
#line 3201 "cplus.met"
                        _ptTree1=_ptRes2;
#line 3201 "cplus.met"
                    }
#line 3201 "cplus.met"
                    ReplaceTree(_ptRes1, 1, _ptTree1);
#line 3201 "cplus.met"
                    _ptTree0=_ptRes1;
#line 3201 "cplus.met"
                }
#line 3201 "cplus.met"
                _retValue =_ptTree0;
#line 3201 "cplus.met"
                goto constan_ret;
#line 3201 "cplus.met"
            }
#line 3201 "cplus.met"
            break;
#line 3201 "cplus.met"
#line 3202 "cplus.met"
        case LHEXA : 
#line 3202 "cplus.met"
#line 3202 "cplus.met"
            {
#line 3202 "cplus.met"
                PPTREE _ptTree0=0;
#line 3202 "cplus.met"
                {
#line 3202 "cplus.met"
                    PPTREE _ptTree1=0,_ptRes1=0;
#line 3202 "cplus.met"
                    _ptRes1= MakeTree(LONG, 1);
#line 3202 "cplus.met"
                    {
#line 3202 "cplus.met"
                        PPTREE _ptTree2=0,_ptRes2=0;
#line 3202 "cplus.met"
                        _ptRes2= MakeTree(HEXA, 1);
#line 3202 "cplus.met"
                        {
#line 3202 "cplus.met"
                            PPTREE _ptTree3=0,_ptRes3=0;
#line 3202 "cplus.met"
                            _ptRes3= MakeTree(INTEGER, 1);
#line 3202 "cplus.met"
                            (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3202 "cplus.met"
                            if ( ! TERM_OR_META(LHEXA,"LHEXA") || !(BUILD_TERM_META(_ptTree3))) {
#line 3202 "cplus.met"
                                MulFreeTree(7,_ptRes3,_ptTree3,_ptRes2,_ptTree2,_ptRes1,_ptTree1,_ptTree0);
                                TOKEN_EXIT(constan_exit,"LHEXA")
#line 3202 "cplus.met"
                            } else {
#line 3202 "cplus.met"
                                tokenAhead = 0 ;
#line 3202 "cplus.met"
                            }
#line 3202 "cplus.met"
                            ReplaceTree(_ptRes3, 1, _ptTree3);
#line 3202 "cplus.met"
                            _ptTree2=_ptRes3;
#line 3202 "cplus.met"
                        }
#line 3202 "cplus.met"
                        ReplaceTree(_ptRes2, 1, _ptTree2);
#line 3202 "cplus.met"
                        _ptTree1=_ptRes2;
#line 3202 "cplus.met"
                    }
#line 3202 "cplus.met"
                    ReplaceTree(_ptRes1, 1, _ptTree1);
#line 3202 "cplus.met"
                    _ptTree0=_ptRes1;
#line 3202 "cplus.met"
                }
#line 3202 "cplus.met"
                _retValue =_ptTree0;
#line 3202 "cplus.met"
                goto constan_ret;
#line 3202 "cplus.met"
            }
#line 3202 "cplus.met"
            break;
#line 3202 "cplus.met"
#line 3203 "cplus.met"
        case LLHEXA : 
#line 3203 "cplus.met"
#line 3203 "cplus.met"
            {
#line 3203 "cplus.met"
                PPTREE _ptTree0=0;
#line 3203 "cplus.met"
                {
#line 3203 "cplus.met"
                    PPTREE _ptTree1=0,_ptRes1=0;
#line 3203 "cplus.met"
                    _ptRes1= MakeTree(LONGLONG, 1);
#line 3203 "cplus.met"
                    {
#line 3203 "cplus.met"
                        PPTREE _ptTree2=0,_ptRes2=0;
#line 3203 "cplus.met"
                        _ptRes2= MakeTree(HEXA, 1);
#line 3203 "cplus.met"
                        {
#line 3203 "cplus.met"
                            PPTREE _ptTree3=0,_ptRes3=0;
#line 3203 "cplus.met"
                            _ptRes3= MakeTree(INTEGER, 1);
#line 3203 "cplus.met"
                            (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3203 "cplus.met"
                            if ( ! TERM_OR_META(LHEXA,"LHEXA") || !(BUILD_TERM_META(_ptTree3))) {
#line 3203 "cplus.met"
                                MulFreeTree(7,_ptRes3,_ptTree3,_ptRes2,_ptTree2,_ptRes1,_ptTree1,_ptTree0);
                                TOKEN_EXIT(constan_exit,"LHEXA")
#line 3203 "cplus.met"
                            } else {
#line 3203 "cplus.met"
                                tokenAhead = 0 ;
#line 3203 "cplus.met"
                            }
#line 3203 "cplus.met"
                            ReplaceTree(_ptRes3, 1, _ptTree3);
#line 3203 "cplus.met"
                            _ptTree2=_ptRes3;
#line 3203 "cplus.met"
                        }
#line 3203 "cplus.met"
                        ReplaceTree(_ptRes2, 1, _ptTree2);
#line 3203 "cplus.met"
                        _ptTree1=_ptRes2;
#line 3203 "cplus.met"
                    }
#line 3203 "cplus.met"
                    ReplaceTree(_ptRes1, 1, _ptTree1);
#line 3203 "cplus.met"
                    _ptTree0=_ptRes1;
#line 3203 "cplus.met"
                }
#line 3203 "cplus.met"
                _retValue =_ptTree0;
#line 3203 "cplus.met"
                goto constan_ret;
#line 3203 "cplus.met"
            }
#line 3203 "cplus.met"
            break;
#line 3203 "cplus.met"
#line 3204 "cplus.met"
        case UHEXA : 
#line 3204 "cplus.met"
#line 3204 "cplus.met"
            {
#line 3204 "cplus.met"
                PPTREE _ptTree0=0;
#line 3204 "cplus.met"
                {
#line 3204 "cplus.met"
                    PPTREE _ptTree1=0,_ptRes1=0;
#line 3204 "cplus.met"
                    _ptRes1= MakeTree(IUN, 1);
#line 3204 "cplus.met"
                    {
#line 3204 "cplus.met"
                        PPTREE _ptTree2=0,_ptRes2=0;
#line 3204 "cplus.met"
                        _ptRes2= MakeTree(HEXA, 1);
#line 3204 "cplus.met"
                        {
#line 3204 "cplus.met"
                            PPTREE _ptTree3=0,_ptRes3=0;
#line 3204 "cplus.met"
                            _ptRes3= MakeTree(INTEGER, 1);
#line 3204 "cplus.met"
                            (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3204 "cplus.met"
                            if ( ! TERM_OR_META(UHEXA,"UHEXA") || !(BUILD_TERM_META(_ptTree3))) {
#line 3204 "cplus.met"
                                MulFreeTree(7,_ptRes3,_ptTree3,_ptRes2,_ptTree2,_ptRes1,_ptTree1,_ptTree0);
                                TOKEN_EXIT(constan_exit,"UHEXA")
#line 3204 "cplus.met"
                            } else {
#line 3204 "cplus.met"
                                tokenAhead = 0 ;
#line 3204 "cplus.met"
                            }
#line 3204 "cplus.met"
                            ReplaceTree(_ptRes3, 1, _ptTree3);
#line 3204 "cplus.met"
                            _ptTree2=_ptRes3;
#line 3204 "cplus.met"
                        }
#line 3204 "cplus.met"
                        ReplaceTree(_ptRes2, 1, _ptTree2);
#line 3204 "cplus.met"
                        _ptTree1=_ptRes2;
#line 3204 "cplus.met"
                    }
#line 3204 "cplus.met"
                    ReplaceTree(_ptRes1, 1, _ptTree1);
#line 3204 "cplus.met"
                    _ptTree0=_ptRes1;
#line 3204 "cplus.met"
                }
#line 3204 "cplus.met"
                _retValue =_ptTree0;
#line 3204 "cplus.met"
                goto constan_ret;
#line 3204 "cplus.met"
            }
#line 3204 "cplus.met"
            break;
#line 3204 "cplus.met"
#line 3205 "cplus.met"
        case ULHEXA : 
#line 3205 "cplus.met"
#line 3205 "cplus.met"
            {
#line 3205 "cplus.met"
                PPTREE _ptTree0=0;
#line 3205 "cplus.met"
                {
#line 3205 "cplus.met"
                    PPTREE _ptTree1=0,_ptRes1=0;
#line 3205 "cplus.met"
                    _ptRes1= MakeTree(IUNLONG, 1);
#line 3205 "cplus.met"
                    {
#line 3205 "cplus.met"
                        PPTREE _ptTree2=0,_ptRes2=0;
#line 3205 "cplus.met"
                        _ptRes2= MakeTree(HEXA, 1);
#line 3205 "cplus.met"
                        {
#line 3205 "cplus.met"
                            PPTREE _ptTree3=0,_ptRes3=0;
#line 3205 "cplus.met"
                            _ptRes3= MakeTree(INTEGER, 1);
#line 3205 "cplus.met"
                            (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3205 "cplus.met"
                            if ( ! TERM_OR_META(ULHEXA,"ULHEXA") || !(BUILD_TERM_META(_ptTree3))) {
#line 3205 "cplus.met"
                                MulFreeTree(7,_ptRes3,_ptTree3,_ptRes2,_ptTree2,_ptRes1,_ptTree1,_ptTree0);
                                TOKEN_EXIT(constan_exit,"ULHEXA")
#line 3205 "cplus.met"
                            } else {
#line 3205 "cplus.met"
                                tokenAhead = 0 ;
#line 3205 "cplus.met"
                            }
#line 3205 "cplus.met"
                            ReplaceTree(_ptRes3, 1, _ptTree3);
#line 3205 "cplus.met"
                            _ptTree2=_ptRes3;
#line 3205 "cplus.met"
                        }
#line 3205 "cplus.met"
                        ReplaceTree(_ptRes2, 1, _ptTree2);
#line 3205 "cplus.met"
                        _ptTree1=_ptRes2;
#line 3205 "cplus.met"
                    }
#line 3205 "cplus.met"
                    ReplaceTree(_ptRes1, 1, _ptTree1);
#line 3205 "cplus.met"
                    _ptTree0=_ptRes1;
#line 3205 "cplus.met"
                }
#line 3205 "cplus.met"
                _retValue =_ptTree0;
#line 3205 "cplus.met"
                goto constan_ret;
#line 3205 "cplus.met"
            }
#line 3205 "cplus.met"
            break;
#line 3205 "cplus.met"
#line 3206 "cplus.met"
        case ULLHEXA : 
#line 3206 "cplus.met"
#line 3206 "cplus.met"
            {
#line 3206 "cplus.met"
                PPTREE _ptTree0=0;
#line 3206 "cplus.met"
                {
#line 3206 "cplus.met"
                    PPTREE _ptTree1=0,_ptRes1=0;
#line 3206 "cplus.met"
                    _ptRes1= MakeTree(IUNLONGLONG, 1);
#line 3206 "cplus.met"
                    {
#line 3206 "cplus.met"
                        PPTREE _ptTree2=0,_ptRes2=0;
#line 3206 "cplus.met"
                        _ptRes2= MakeTree(HEXA, 1);
#line 3206 "cplus.met"
                        {
#line 3206 "cplus.met"
                            PPTREE _ptTree3=0,_ptRes3=0;
#line 3206 "cplus.met"
                            _ptRes3= MakeTree(INTEGER, 1);
#line 3206 "cplus.met"
                            (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3206 "cplus.met"
                            if ( ! TERM_OR_META(ULHEXA,"ULHEXA") || !(BUILD_TERM_META(_ptTree3))) {
#line 3206 "cplus.met"
                                MulFreeTree(7,_ptRes3,_ptTree3,_ptRes2,_ptTree2,_ptRes1,_ptTree1,_ptTree0);
                                TOKEN_EXIT(constan_exit,"ULHEXA")
#line 3206 "cplus.met"
                            } else {
#line 3206 "cplus.met"
                                tokenAhead = 0 ;
#line 3206 "cplus.met"
                            }
#line 3206 "cplus.met"
                            ReplaceTree(_ptRes3, 1, _ptTree3);
#line 3206 "cplus.met"
                            _ptTree2=_ptRes3;
#line 3206 "cplus.met"
                        }
#line 3206 "cplus.met"
                        ReplaceTree(_ptRes2, 1, _ptTree2);
#line 3206 "cplus.met"
                        _ptTree1=_ptRes2;
#line 3206 "cplus.met"
                    }
#line 3206 "cplus.met"
                    ReplaceTree(_ptRes1, 1, _ptTree1);
#line 3206 "cplus.met"
                    _ptTree0=_ptRes1;
#line 3206 "cplus.met"
                }
#line 3206 "cplus.met"
                _retValue =_ptTree0;
#line 3206 "cplus.met"
                goto constan_ret;
#line 3206 "cplus.met"
            }
#line 3206 "cplus.met"
            break;
#line 3206 "cplus.met"
#line 3207 "cplus.met"
        case OCTAL : 
#line 3207 "cplus.met"
#line 3207 "cplus.met"
            {
#line 3207 "cplus.met"
                PPTREE _ptTree0=0;
#line 3207 "cplus.met"
                {
#line 3207 "cplus.met"
                    PPTREE _ptTree1=0,_ptRes1=0;
#line 3207 "cplus.met"
                    _ptRes1= MakeTree(OCTAL, 1);
#line 3207 "cplus.met"
                    {
#line 3207 "cplus.met"
                        PPTREE _ptTree2=0,_ptRes2=0;
#line 3207 "cplus.met"
                        _ptRes2= MakeTree(INTEGER, 1);
#line 3207 "cplus.met"
                        (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3207 "cplus.met"
                        if ( ! TERM_OR_META(OCTAL,"OCTAL") || !(BUILD_TERM_META(_ptTree2))) {
#line 3207 "cplus.met"
                            MulFreeTree(5,_ptRes2,_ptTree2,_ptRes1,_ptTree1,_ptTree0);
                            TOKEN_EXIT(constan_exit,"OCTAL")
#line 3207 "cplus.met"
                        } else {
#line 3207 "cplus.met"
                            tokenAhead = 0 ;
#line 3207 "cplus.met"
                        }
#line 3207 "cplus.met"
                        ReplaceTree(_ptRes2, 1, _ptTree2);
#line 3207 "cplus.met"
                        _ptTree1=_ptRes2;
#line 3207 "cplus.met"
                    }
#line 3207 "cplus.met"
                    ReplaceTree(_ptRes1, 1, _ptTree1);
#line 3207 "cplus.met"
                    _ptTree0=_ptRes1;
#line 3207 "cplus.met"
                }
#line 3207 "cplus.met"
                _retValue =_ptTree0;
#line 3207 "cplus.met"
                goto constan_ret;
#line 3207 "cplus.met"
            }
#line 3207 "cplus.met"
            break;
#line 3207 "cplus.met"
#line 3208 "cplus.met"
        case LOCTAL : 
#line 3208 "cplus.met"
#line 3208 "cplus.met"
            {
#line 3208 "cplus.met"
                PPTREE _ptTree0=0;
#line 3208 "cplus.met"
                {
#line 3208 "cplus.met"
                    PPTREE _ptTree1=0,_ptRes1=0;
#line 3208 "cplus.met"
                    _ptRes1= MakeTree(ILONG, 1);
#line 3208 "cplus.met"
                    {
#line 3208 "cplus.met"
                        PPTREE _ptTree2=0,_ptRes2=0;
#line 3208 "cplus.met"
                        _ptRes2= MakeTree(OCTAL, 1);
#line 3208 "cplus.met"
                        {
#line 3208 "cplus.met"
                            PPTREE _ptTree3=0,_ptRes3=0;
#line 3208 "cplus.met"
                            _ptRes3= MakeTree(INTEGER, 1);
#line 3208 "cplus.met"
                            (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3208 "cplus.met"
                            if ( ! TERM_OR_META(LOCTAL,"LOCTAL") || !(BUILD_TERM_META(_ptTree3))) {
#line 3208 "cplus.met"
                                MulFreeTree(7,_ptRes3,_ptTree3,_ptRes2,_ptTree2,_ptRes1,_ptTree1,_ptTree0);
                                TOKEN_EXIT(constan_exit,"LOCTAL")
#line 3208 "cplus.met"
                            } else {
#line 3208 "cplus.met"
                                tokenAhead = 0 ;
#line 3208 "cplus.met"
                            }
#line 3208 "cplus.met"
                            ReplaceTree(_ptRes3, 1, _ptTree3);
#line 3208 "cplus.met"
                            _ptTree2=_ptRes3;
#line 3208 "cplus.met"
                        }
#line 3208 "cplus.met"
                        ReplaceTree(_ptRes2, 1, _ptTree2);
#line 3208 "cplus.met"
                        _ptTree1=_ptRes2;
#line 3208 "cplus.met"
                    }
#line 3208 "cplus.met"
                    ReplaceTree(_ptRes1, 1, _ptTree1);
#line 3208 "cplus.met"
                    _ptTree0=_ptRes1;
#line 3208 "cplus.met"
                }
#line 3208 "cplus.met"
                _retValue =_ptTree0;
#line 3208 "cplus.met"
                goto constan_ret;
#line 3208 "cplus.met"
            }
#line 3208 "cplus.met"
            break;
#line 3208 "cplus.met"
#line 3209 "cplus.met"
        case LLOCTAL : 
#line 3209 "cplus.met"
#line 3209 "cplus.met"
            {
#line 3209 "cplus.met"
                PPTREE _ptTree0=0;
#line 3209 "cplus.met"
                {
#line 3209 "cplus.met"
                    PPTREE _ptTree1=0,_ptRes1=0;
#line 3209 "cplus.met"
                    _ptRes1= MakeTree(ILONGLONG, 1);
#line 3209 "cplus.met"
                    {
#line 3209 "cplus.met"
                        PPTREE _ptTree2=0,_ptRes2=0;
#line 3209 "cplus.met"
                        _ptRes2= MakeTree(OCTAL, 1);
#line 3209 "cplus.met"
                        {
#line 3209 "cplus.met"
                            PPTREE _ptTree3=0,_ptRes3=0;
#line 3209 "cplus.met"
                            _ptRes3= MakeTree(INTEGER, 1);
#line 3209 "cplus.met"
                            (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3209 "cplus.met"
                            if ( ! TERM_OR_META(LOCTAL,"LOCTAL") || !(BUILD_TERM_META(_ptTree3))) {
#line 3209 "cplus.met"
                                MulFreeTree(7,_ptRes3,_ptTree3,_ptRes2,_ptTree2,_ptRes1,_ptTree1,_ptTree0);
                                TOKEN_EXIT(constan_exit,"LOCTAL")
#line 3209 "cplus.met"
                            } else {
#line 3209 "cplus.met"
                                tokenAhead = 0 ;
#line 3209 "cplus.met"
                            }
#line 3209 "cplus.met"
                            ReplaceTree(_ptRes3, 1, _ptTree3);
#line 3209 "cplus.met"
                            _ptTree2=_ptRes3;
#line 3209 "cplus.met"
                        }
#line 3209 "cplus.met"
                        ReplaceTree(_ptRes2, 1, _ptTree2);
#line 3209 "cplus.met"
                        _ptTree1=_ptRes2;
#line 3209 "cplus.met"
                    }
#line 3209 "cplus.met"
                    ReplaceTree(_ptRes1, 1, _ptTree1);
#line 3209 "cplus.met"
                    _ptTree0=_ptRes1;
#line 3209 "cplus.met"
                }
#line 3209 "cplus.met"
                _retValue =_ptTree0;
#line 3209 "cplus.met"
                goto constan_ret;
#line 3209 "cplus.met"
            }
#line 3209 "cplus.met"
            break;
#line 3209 "cplus.met"
#line 3210 "cplus.met"
        case UOCTAL : 
#line 3210 "cplus.met"
#line 3210 "cplus.met"
            {
#line 3210 "cplus.met"
                PPTREE _ptTree0=0;
#line 3210 "cplus.met"
                {
#line 3210 "cplus.met"
                    PPTREE _ptTree1=0,_ptRes1=0;
#line 3210 "cplus.met"
                    _ptRes1= MakeTree(IUN, 1);
#line 3210 "cplus.met"
                    {
#line 3210 "cplus.met"
                        PPTREE _ptTree2=0,_ptRes2=0;
#line 3210 "cplus.met"
                        _ptRes2= MakeTree(OCTAL, 1);
#line 3210 "cplus.met"
                        {
#line 3210 "cplus.met"
                            PPTREE _ptTree3=0,_ptRes3=0;
#line 3210 "cplus.met"
                            _ptRes3= MakeTree(INTEGER, 1);
#line 3210 "cplus.met"
                            (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3210 "cplus.met"
                            if ( ! TERM_OR_META(UOCTAL,"UOCTAL") || !(BUILD_TERM_META(_ptTree3))) {
#line 3210 "cplus.met"
                                MulFreeTree(7,_ptRes3,_ptTree3,_ptRes2,_ptTree2,_ptRes1,_ptTree1,_ptTree0);
                                TOKEN_EXIT(constan_exit,"UOCTAL")
#line 3210 "cplus.met"
                            } else {
#line 3210 "cplus.met"
                                tokenAhead = 0 ;
#line 3210 "cplus.met"
                            }
#line 3210 "cplus.met"
                            ReplaceTree(_ptRes3, 1, _ptTree3);
#line 3210 "cplus.met"
                            _ptTree2=_ptRes3;
#line 3210 "cplus.met"
                        }
#line 3210 "cplus.met"
                        ReplaceTree(_ptRes2, 1, _ptTree2);
#line 3210 "cplus.met"
                        _ptTree1=_ptRes2;
#line 3210 "cplus.met"
                    }
#line 3210 "cplus.met"
                    ReplaceTree(_ptRes1, 1, _ptTree1);
#line 3210 "cplus.met"
                    _ptTree0=_ptRes1;
#line 3210 "cplus.met"
                }
#line 3210 "cplus.met"
                _retValue =_ptTree0;
#line 3210 "cplus.met"
                goto constan_ret;
#line 3210 "cplus.met"
            }
#line 3210 "cplus.met"
            break;
#line 3210 "cplus.met"
#line 3211 "cplus.met"
        case ULOCTAL : 
#line 3211 "cplus.met"
#line 3211 "cplus.met"
            {
#line 3211 "cplus.met"
                PPTREE _ptTree0=0;
#line 3211 "cplus.met"
                {
#line 3211 "cplus.met"
                    PPTREE _ptTree1=0,_ptRes1=0;
#line 3211 "cplus.met"
                    _ptRes1= MakeTree(IUNLONG, 1);
#line 3211 "cplus.met"
                    {
#line 3211 "cplus.met"
                        PPTREE _ptTree2=0,_ptRes2=0;
#line 3211 "cplus.met"
                        _ptRes2= MakeTree(OCTAL, 1);
#line 3211 "cplus.met"
                        {
#line 3211 "cplus.met"
                            PPTREE _ptTree3=0,_ptRes3=0;
#line 3211 "cplus.met"
                            _ptRes3= MakeTree(INTEGER, 1);
#line 3211 "cplus.met"
                            (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3211 "cplus.met"
                            if ( ! TERM_OR_META(ULOCTAL,"ULOCTAL") || !(BUILD_TERM_META(_ptTree3))) {
#line 3211 "cplus.met"
                                MulFreeTree(7,_ptRes3,_ptTree3,_ptRes2,_ptTree2,_ptRes1,_ptTree1,_ptTree0);
                                TOKEN_EXIT(constan_exit,"ULOCTAL")
#line 3211 "cplus.met"
                            } else {
#line 3211 "cplus.met"
                                tokenAhead = 0 ;
#line 3211 "cplus.met"
                            }
#line 3211 "cplus.met"
                            ReplaceTree(_ptRes3, 1, _ptTree3);
#line 3211 "cplus.met"
                            _ptTree2=_ptRes3;
#line 3211 "cplus.met"
                        }
#line 3211 "cplus.met"
                        ReplaceTree(_ptRes2, 1, _ptTree2);
#line 3211 "cplus.met"
                        _ptTree1=_ptRes2;
#line 3211 "cplus.met"
                    }
#line 3211 "cplus.met"
                    ReplaceTree(_ptRes1, 1, _ptTree1);
#line 3211 "cplus.met"
                    _ptTree0=_ptRes1;
#line 3211 "cplus.met"
                }
#line 3211 "cplus.met"
                _retValue =_ptTree0;
#line 3211 "cplus.met"
                goto constan_ret;
#line 3211 "cplus.met"
            }
#line 3211 "cplus.met"
            break;
#line 3211 "cplus.met"
#line 3212 "cplus.met"
        case ULLOCTAL : 
#line 3212 "cplus.met"
#line 3212 "cplus.met"
            {
#line 3212 "cplus.met"
                PPTREE _ptTree0=0;
#line 3212 "cplus.met"
                {
#line 3212 "cplus.met"
                    PPTREE _ptTree1=0,_ptRes1=0;
#line 3212 "cplus.met"
                    _ptRes1= MakeTree(IUNLONGLONG, 1);
#line 3212 "cplus.met"
                    {
#line 3212 "cplus.met"
                        PPTREE _ptTree2=0,_ptRes2=0;
#line 3212 "cplus.met"
                        _ptRes2= MakeTree(OCTAL, 1);
#line 3212 "cplus.met"
                        {
#line 3212 "cplus.met"
                            PPTREE _ptTree3=0,_ptRes3=0;
#line 3212 "cplus.met"
                            _ptRes3= MakeTree(INTEGER, 1);
#line 3212 "cplus.met"
                            (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3212 "cplus.met"
                            if ( ! TERM_OR_META(ULOCTAL,"ULOCTAL") || !(BUILD_TERM_META(_ptTree3))) {
#line 3212 "cplus.met"
                                MulFreeTree(7,_ptRes3,_ptTree3,_ptRes2,_ptTree2,_ptRes1,_ptTree1,_ptTree0);
                                TOKEN_EXIT(constan_exit,"ULOCTAL")
#line 3212 "cplus.met"
                            } else {
#line 3212 "cplus.met"
                                tokenAhead = 0 ;
#line 3212 "cplus.met"
                            }
#line 3212 "cplus.met"
                            ReplaceTree(_ptRes3, 1, _ptTree3);
#line 3212 "cplus.met"
                            _ptTree2=_ptRes3;
#line 3212 "cplus.met"
                        }
#line 3212 "cplus.met"
                        ReplaceTree(_ptRes2, 1, _ptTree2);
#line 3212 "cplus.met"
                        _ptTree1=_ptRes2;
#line 3212 "cplus.met"
                    }
#line 3212 "cplus.met"
                    ReplaceTree(_ptRes1, 1, _ptTree1);
#line 3212 "cplus.met"
                    _ptTree0=_ptRes1;
#line 3212 "cplus.met"
                }
#line 3212 "cplus.met"
                _retValue =_ptTree0;
#line 3212 "cplus.met"
                goto constan_ret;
#line 3212 "cplus.met"
            }
#line 3212 "cplus.met"
            break;
#line 3212 "cplus.met"
#line 3213 "cplus.met"
        case FLOATVAL : 
#line 3213 "cplus.met"
#line 3213 "cplus.met"
            {
#line 3213 "cplus.met"
                PPTREE _ptTree0=0;
#line 3213 "cplus.met"
                {
#line 3213 "cplus.met"
                    PPTREE _ptTree1=0,_ptRes1=0;
#line 3213 "cplus.met"
                    _ptRes1= MakeTree(FLOAT, 1);
#line 3213 "cplus.met"
                    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3213 "cplus.met"
                    if ( ! TERM_OR_META(FLOATVAL,"FLOATVAL") || !(BUILD_TERM_META(_ptTree1))) {
#line 3213 "cplus.met"
                        MulFreeTree(3,_ptRes1,_ptTree1,_ptTree0);
                        TOKEN_EXIT(constan_exit,"FLOATVAL")
#line 3213 "cplus.met"
                    } else {
#line 3213 "cplus.met"
                        tokenAhead = 0 ;
#line 3213 "cplus.met"
                    }
#line 3213 "cplus.met"
                    ReplaceTree(_ptRes1, 1, _ptTree1);
#line 3213 "cplus.met"
                    _ptTree0=_ptRes1;
#line 3213 "cplus.met"
                }
#line 3213 "cplus.met"
                _retValue =_ptTree0;
#line 3213 "cplus.met"
                goto constan_ret;
#line 3213 "cplus.met"
            }
#line 3213 "cplus.met"
            break;
#line 3213 "cplus.met"
#line 3214 "cplus.met"
        case CHARACT : 
#line 3214 "cplus.met"
#line 3214 "cplus.met"
            {
#line 3214 "cplus.met"
                PPTREE _ptTree0=0;
#line 3214 "cplus.met"
                {
#line 3214 "cplus.met"
                    PPTREE _ptTree1=0,_ptRes1=0;
#line 3214 "cplus.met"
                    _ptRes1= MakeTree(CHAR, 1);
#line 3214 "cplus.met"
                    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3214 "cplus.met"
                    if ( ! TERM_OR_META(CHARACT,"CHARACT") || !(BUILD_TERM_META(_ptTree1))) {
#line 3214 "cplus.met"
                        MulFreeTree(3,_ptRes1,_ptTree1,_ptTree0);
                        TOKEN_EXIT(constan_exit,"CHARACT")
#line 3214 "cplus.met"
                    } else {
#line 3214 "cplus.met"
                        tokenAhead = 0 ;
#line 3214 "cplus.met"
                    }
#line 3214 "cplus.met"
                    ReplaceTree(_ptRes1, 1, _ptTree1);
#line 3214 "cplus.met"
                    _ptTree0=_ptRes1;
#line 3214 "cplus.met"
                }
#line 3214 "cplus.met"
                _retValue =_ptTree0;
#line 3214 "cplus.met"
                goto constan_ret;
#line 3214 "cplus.met"
            }
#line 3214 "cplus.met"
            break;
#line 3214 "cplus.met"
        default :
#line 3214 "cplus.met"
            CASE_EXIT(constan_exit,"either INTEGER or LINTEGER or LLINTEGER or UINTEGER or ULINTEGER or ULLINTEGER or HEXA or LHEXA or LLHEXA or UHEXA or ULHEXA or ULLHEXA or OCTAL or LOCTAL or LLOCTAL or UOCTAL or ULOCTAL or ULLOCTAL or FLOATVAL or CHARACT")
#line 3214 "cplus.met"
            break;
#line 3214 "cplus.met"
    }
#line 3214 "cplus.met"
#line 3214 "cplus.met"
#line 3215 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 3215 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 3215 "cplus.met"
return((PPTREE) 0);
#line 3215 "cplus.met"

#line 3215 "cplus.met"
constan_exit :
#line 3215 "cplus.met"

#line 3215 "cplus.met"
    _Debug = TRACE_RULE("constan",TRACE_EXIT,(PPTREE)0);
#line 3215 "cplus.met"
    _funcLevel--;
#line 3215 "cplus.met"
    return((PPTREE) -1) ;
#line 3215 "cplus.met"

#line 3215 "cplus.met"
constan_ret :
#line 3215 "cplus.met"
    
#line 3215 "cplus.met"
    _Debug = TRACE_RULE("constan",TRACE_RETURN,_retValue);
#line 3215 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 3215 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 3215 "cplus.met"
    return _retValue ;
#line 3215 "cplus.met"
}
#line 3215 "cplus.met"

#line 3215 "cplus.met"
