/*************************************************************************/
/*                                                                       */
/*        Produced by MetaGen version 2.0  -    1989-2006                 */
/*       Syntaxic Analyzer Meta Generator developped by                  */
/*                  Eric Lavillonniere                                   */
/*                                                                       */
/*************************************************************************/

#include "token.h"
#include "cplus.h"


#line 749 "cplus.met"
PPTREE cplus::main_entry ( int error_free)
#line 749 "cplus.met"
{
#line 749 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 749 "cplus.met"
    int _value,_nbPre = 0 ;
#line 749 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 749 "cplus.met"
    int _Debug = TRACE_RULE("main_entry",TRACE_ENTER,(PPTREE)0);
#line 749 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 749 "cplus.met"
#line 750 "cplus.met"
    {
#line 750 "cplus.met"
        PPTREE _ptTree0=0;
#line 750 "cplus.met"
        if ( (_ptTree0=NQUICK_CALL(_Tak(program)(error_free), 109, cplus))== (PPTREE) -1 ) {
#line 750 "cplus.met"
            MulFreeTree(1,_ptTree0);
            PROG_EXIT(main_entry_exit,"main_entry")
#line 750 "cplus.met"
        }
#line 750 "cplus.met"
        _retValue =_ptTree0;
#line 750 "cplus.met"
        goto main_entry_ret;
#line 750 "cplus.met"
    }
#line 750 "cplus.met"
#line 750 "cplus.met"
#line 750 "cplus.met"

#line 751 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 751 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 751 "cplus.met"
return((PPTREE) 0);
#line 751 "cplus.met"

#line 751 "cplus.met"
main_entry_exit :
#line 751 "cplus.met"

#line 751 "cplus.met"
    _Debug = TRACE_RULE("main_entry",TRACE_EXIT,(PPTREE)0);
#line 751 "cplus.met"
    _funcLevel--;
#line 751 "cplus.met"
    return((PPTREE) -1) ;
#line 751 "cplus.met"

#line 751 "cplus.met"
main_entry_ret :
#line 751 "cplus.met"
    
#line 751 "cplus.met"
    _Debug = TRACE_RULE("main_entry",TRACE_RETURN,_retValue);
#line 751 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 751 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 751 "cplus.met"
    return _retValue ;
#line 751 "cplus.met"
}
#line 751 "cplus.met"

#line 751 "cplus.met"
#line 2141 "cplus.met"
PPTREE cplus::member_declarator ( int error_free)
#line 2141 "cplus.met"
{
#line 2141 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 2141 "cplus.met"
    int _value,_nbPre = 0 ;
#line 2141 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 2141 "cplus.met"
    int _Debug = TRACE_RULE("member_declarator",TRACE_ENTER,(PPTREE)0);
#line 2141 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 2141 "cplus.met"
#line 2141 "cplus.met"
    PPTREE retTree = (PPTREE) 0;
#line 2141 "cplus.met"
#line 2143 "cplus.met"
    {
#line 2143 "cplus.met"
        PPTREE _ptTree0=0,_ptRes0=0;
#line 2143 "cplus.met"
        _ptRes0= MakeTree(MEMBER_DECLARATOR, 2);
#line 2143 "cplus.met"
        if ( (_ptTree0=NQUICK_CALL(_Tak(complete_class_name)(error_free), 25, cplus))== (PPTREE) -1 ) {
#line 2143 "cplus.met"
            MulFreeTree(3,_ptRes0,_ptTree0,retTree);
            PROG_EXIT(member_declarator_exit,"member_declarator")
#line 2143 "cplus.met"
        }
#line 2143 "cplus.met"
        ReplaceTree(_ptRes0, 1, _ptTree0);
#line 2143 "cplus.met"
        retTree=_ptRes0;
#line 2143 "cplus.met"
    }
#line 2143 "cplus.met"
#line 2144 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 2144 "cplus.met"
    if (  !SEE_TOKEN( DPOIDPOI,"::") || !(CommTerm(),1)) {
#line 2144 "cplus.met"
        MulFreeTree(1,retTree);
        TOKEN_EXIT(member_declarator_exit,"::")
#line 2144 "cplus.met"
    } else {
#line 2144 "cplus.met"
        tokenAhead = 0 ;
#line 2144 "cplus.met"
    }
#line 2144 "cplus.met"
#line 2145 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 2145 "cplus.met"
    if (  !SEE_TOKEN( ETOI,"*") || !(CommTerm(),1)) {
#line 2145 "cplus.met"
        MulFreeTree(1,retTree);
        TOKEN_EXIT(member_declarator_exit,"*")
#line 2145 "cplus.met"
    } else {
#line 2145 "cplus.met"
        tokenAhead = 0 ;
#line 2145 "cplus.met"
    }
#line 2145 "cplus.met"
#line 2146 "cplus.met"
    {
#line 2146 "cplus.met"
        _retValue = retTree ;
#line 2146 "cplus.met"
        goto member_declarator_ret;
#line 2146 "cplus.met"
        
#line 2146 "cplus.met"
    }
#line 2146 "cplus.met"
#line 2146 "cplus.met"
#line 2146 "cplus.met"

#line 2147 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2147 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 2147 "cplus.met"
return((PPTREE) 0);
#line 2147 "cplus.met"

#line 2147 "cplus.met"
member_declarator_exit :
#line 2147 "cplus.met"

#line 2147 "cplus.met"
    _Debug = TRACE_RULE("member_declarator",TRACE_EXIT,(PPTREE)0);
#line 2147 "cplus.met"
    _funcLevel--;
#line 2147 "cplus.met"
    return((PPTREE) -1) ;
#line 2147 "cplus.met"

#line 2147 "cplus.met"
member_declarator_ret :
#line 2147 "cplus.met"
    
#line 2147 "cplus.met"
    _Debug = TRACE_RULE("member_declarator",TRACE_RETURN,_retValue);
#line 2147 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2147 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 2147 "cplus.met"
    return _retValue ;
#line 2147 "cplus.met"
}
#line 2147 "cplus.met"

#line 2147 "cplus.met"
#line 1939 "cplus.met"
PPTREE cplus::message_map ( int error_free)
#line 1939 "cplus.met"
{
#line 1939 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 1939 "cplus.met"
    int _value,_nbPre = 0 ;
#line 1939 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 1939 "cplus.met"
    int _Debug = TRACE_RULE("message_map",TRACE_ENTER,(PPTREE)0);
#line 1939 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 1939 "cplus.met"
#line 1939 "cplus.met"
    PPTREE _addlist1 = (PPTREE) 0;
#line 1939 "cplus.met"
#line 1939 "cplus.met"
    PPTREE retTree = (PPTREE) 0,list = (PPTREE) 0;
#line 1939 "cplus.met"
#line 1941 "cplus.met"
    (tokenAhead == 13|| (specific(),TRACE_LEX(1)));
#line 1941 "cplus.met"
    switch( lexEl.Value) {
#line 1941 "cplus.met"
#line 1942 "cplus.met"
        case META : 
#line 1942 "cplus.met"
        case BEGIN_MESSAGE_MAP : 
#line 1942 "cplus.met"
#line 1942 "cplus.met"
            break;
#line 1942 "cplus.met"
        default :
#line 1942 "cplus.met"
            MulFreeTree(3,_addlist1,list,retTree);
            CASE_EXIT(message_map_exit,"BEGIN_MESSAGE_MAP")
#line 1942 "cplus.met"
            break;
#line 1942 "cplus.met"
    }
#line 1942 "cplus.met"
#line 1944 "cplus.met"
    {
#line 1944 "cplus.met"
        PPTREE _ptRes0=0;
#line 1944 "cplus.met"
        _ptRes0= MakeTree(MESSAGE_MAP, 1);
#line 1944 "cplus.met"
        retTree=_ptRes0;
#line 1944 "cplus.met"
    }
#line 1944 "cplus.met"
#line 1944 "cplus.met"
    _addlist1 = list ;
#line 1944 "cplus.met"
#line 1945 "cplus.met"
    while (! ((tokenAhead == 13|| (specific(),TRACE_LEX(1)))&&SEE_TOKEN( END_MESSAGE_MAP,"END_MESSAGE_MAP"))) { 
#line 1945 "cplus.met"
#line 1946 "cplus.met"
#line 1946 "cplus.met"
        {
#line 1946 "cplus.met"
            PPTREE _ptTree0=0;
#line 1946 "cplus.met"
            if ( (_ptTree0=NQUICK_CALL(_Tak(macro_extended)(error_free), 89, cplus))== (PPTREE) -1 ) {
#line 1946 "cplus.met"
                MulFreeTree(4,_ptTree0,_addlist1,list,retTree);
                PROG_EXIT(message_map_exit,"message_map")
#line 1946 "cplus.met"
            }
#line 1946 "cplus.met"
            _addlist1 =AddList(_addlist1 , _ptTree0);
#line 1946 "cplus.met"
        }
#line 1946 "cplus.met"
#line 1946 "cplus.met"
        if (list){
#line 1946 "cplus.met"
#line 1946 "cplus.met"
            _addlist1 = SonTree (_addlist1 ,2 );
#line 1946 "cplus.met"
        } else {
#line 1946 "cplus.met"
#line 1946 "cplus.met"
            list = _addlist1 ;
#line 1946 "cplus.met"
        }
#line 1946 "cplus.met"
    } 
#line 1946 "cplus.met"
#line 1947 "cplus.met"
    if ( (NQUICK_CALL(_Tak(macro)(error_free), 88, cplus))== (PPTREE) -1 ) {
#line 1947 "cplus.met"
        MulFreeTree(3,_addlist1,list,retTree);
        PROG_EXIT(message_map_exit,"message_map")
#line 1947 "cplus.met"
    }
#line 1947 "cplus.met"
#line 1948 "cplus.met"
    {
#line 1948 "cplus.met"
        PPTREE _ptTree0=0;
#line 1948 "cplus.met"
        _ptTree0=ReplaceTree(retTree ,1 ,list );
#line 1948 "cplus.met"
        _retValue =_ptTree0;
#line 1948 "cplus.met"
        goto message_map_ret;
#line 1948 "cplus.met"
    }
#line 1948 "cplus.met"
#line 1948 "cplus.met"
#line 1948 "cplus.met"

#line 1949 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1949 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 1949 "cplus.met"
return((PPTREE) 0);
#line 1949 "cplus.met"

#line 1949 "cplus.met"
message_map_exit :
#line 1949 "cplus.met"

#line 1949 "cplus.met"
    _Debug = TRACE_RULE("message_map",TRACE_EXIT,(PPTREE)0);
#line 1949 "cplus.met"
    _funcLevel--;
#line 1949 "cplus.met"
    return((PPTREE) -1) ;
#line 1949 "cplus.met"

#line 1949 "cplus.met"
message_map_ret :
#line 1949 "cplus.met"
    
#line 1949 "cplus.met"
    _Debug = TRACE_RULE("message_map",TRACE_RETURN,_retValue);
#line 1949 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1949 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 1949 "cplus.met"
    return _retValue ;
#line 1949 "cplus.met"
}
#line 1949 "cplus.met"

#line 1949 "cplus.met"
#line 2682 "cplus.met"
PPTREE cplus::multiplicative_expression ( int error_free)
#line 2682 "cplus.met"
{
#line 2682 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 2682 "cplus.met"
    int _value,_nbPre = 0 ;
#line 2682 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 2682 "cplus.met"
    int _Debug = TRACE_RULE("multiplicative_expression",TRACE_ENTER,(PPTREE)0);
#line 2682 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 2682 "cplus.met"
#line 2682 "cplus.met"
    PPTREE expTree = (PPTREE) 0;
#line 2682 "cplus.met"
#line 2684 "cplus.met"
    if ( (expTree=NQUICK_CALL(_Tak(pm_expression)(error_free), 104, cplus))== (PPTREE) -1 ) {
#line 2684 "cplus.met"
        MulFreeTree(1,expTree);
        PROG_EXIT(multiplicative_expression_exit,"multiplicative_expression")
#line 2684 "cplus.met"
    }
#line 2684 "cplus.met"
#line 2685 "cplus.met"
    while ((((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN( ETOI,"*")) || 
#line 2685 "cplus.met"
           ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN( SLAS,"SLAS"))) || 
#line 2685 "cplus.met"
          ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN( POURC,"%"))) { 
#line 2685 "cplus.met"
#line 2686 "cplus.met"
        (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 2686 "cplus.met"
        switch( lexEl.Value) {
#line 2686 "cplus.met"
#line 2687 "cplus.met"
            case ETOI : 
#line 2687 "cplus.met"
                tokenAhead = 0 ;
#line 2687 "cplus.met"
                CommTerm();
#line 2687 "cplus.met"
#line 2687 "cplus.met"
                {
#line 2687 "cplus.met"
                    PPTREE _ptTree0=0,_ptRes0=0;
#line 2687 "cplus.met"
                    _ptRes0= MakeTree(MUL, 2);
#line 2687 "cplus.met"
                    ReplaceTree(_ptRes0, 1, expTree );
#line 2687 "cplus.met"
                    if ( (_ptTree0=NQUICK_CALL(_Tak(pm_expression)(error_free), 104, cplus))== (PPTREE) -1 ) {
#line 2687 "cplus.met"
                        MulFreeTree(3,_ptRes0,_ptTree0,expTree);
                        PROG_EXIT(multiplicative_expression_exit,"multiplicative_expression")
#line 2687 "cplus.met"
                    }
#line 2687 "cplus.met"
                    ReplaceTree(_ptRes0, 2, _ptTree0);
#line 2687 "cplus.met"
                    expTree=_ptRes0;
#line 2687 "cplus.met"
                }
#line 2687 "cplus.met"
                break;
#line 2687 "cplus.met"
#line 2688 "cplus.met"
            case META : 
#line 2688 "cplus.met"
            case SLAS : 
#line 2688 "cplus.met"
                tokenAhead = 0 ;
#line 2688 "cplus.met"
                CommTerm();
#line 2688 "cplus.met"
#line 2688 "cplus.met"
                {
#line 2688 "cplus.met"
                    PPTREE _ptTree0=0,_ptRes0=0;
#line 2688 "cplus.met"
                    _ptRes0= MakeTree(DIV, 2);
#line 2688 "cplus.met"
                    ReplaceTree(_ptRes0, 1, expTree );
#line 2688 "cplus.met"
                    if ( (_ptTree0=NQUICK_CALL(_Tak(pm_expression)(error_free), 104, cplus))== (PPTREE) -1 ) {
#line 2688 "cplus.met"
                        MulFreeTree(3,_ptRes0,_ptTree0,expTree);
                        PROG_EXIT(multiplicative_expression_exit,"multiplicative_expression")
#line 2688 "cplus.met"
                    }
#line 2688 "cplus.met"
                    ReplaceTree(_ptRes0, 2, _ptTree0);
#line 2688 "cplus.met"
                    expTree=_ptRes0;
#line 2688 "cplus.met"
                }
#line 2688 "cplus.met"
                break;
#line 2688 "cplus.met"
#line 2689 "cplus.met"
            case POURC : 
#line 2689 "cplus.met"
                tokenAhead = 0 ;
#line 2689 "cplus.met"
                CommTerm();
#line 2689 "cplus.met"
#line 2689 "cplus.met"
                {
#line 2689 "cplus.met"
                    PPTREE _ptTree0=0,_ptRes0=0;
#line 2689 "cplus.met"
                    _ptRes0= MakeTree(REM, 2);
#line 2689 "cplus.met"
                    ReplaceTree(_ptRes0, 1, expTree );
#line 2689 "cplus.met"
                    if ( (_ptTree0=NQUICK_CALL(_Tak(pm_expression)(error_free), 104, cplus))== (PPTREE) -1 ) {
#line 2689 "cplus.met"
                        MulFreeTree(3,_ptRes0,_ptTree0,expTree);
                        PROG_EXIT(multiplicative_expression_exit,"multiplicative_expression")
#line 2689 "cplus.met"
                    }
#line 2689 "cplus.met"
                    ReplaceTree(_ptRes0, 2, _ptTree0);
#line 2689 "cplus.met"
                    expTree=_ptRes0;
#line 2689 "cplus.met"
                }
#line 2689 "cplus.met"
                break;
#line 2689 "cplus.met"
            default :
#line 2689 "cplus.met"
                MulFreeTree(1,expTree);
                CASE_EXIT(multiplicative_expression_exit,"either * or SLAS or %")
#line 2689 "cplus.met"
                break;
#line 2689 "cplus.met"
        }
#line 2689 "cplus.met"
    } 
#line 2689 "cplus.met"
#line 2691 "cplus.met"
    {
#line 2691 "cplus.met"
        _retValue = expTree ;
#line 2691 "cplus.met"
        goto multiplicative_expression_ret;
#line 2691 "cplus.met"
        
#line 2691 "cplus.met"
    }
#line 2691 "cplus.met"
#line 2691 "cplus.met"
#line 2691 "cplus.met"

#line 2692 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2692 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 2692 "cplus.met"
return((PPTREE) 0);
#line 2692 "cplus.met"

#line 2692 "cplus.met"
multiplicative_expression_exit :
#line 2692 "cplus.met"

#line 2692 "cplus.met"
    _Debug = TRACE_RULE("multiplicative_expression",TRACE_EXIT,(PPTREE)0);
#line 2692 "cplus.met"
    _funcLevel--;
#line 2692 "cplus.met"
    return((PPTREE) -1) ;
#line 2692 "cplus.met"

#line 2692 "cplus.met"
multiplicative_expression_ret :
#line 2692 "cplus.met"
    
#line 2692 "cplus.met"
    _Debug = TRACE_RULE("multiplicative_expression",TRACE_RETURN,_retValue);
#line 2692 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2692 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 2692 "cplus.met"
    return _retValue ;
#line 2692 "cplus.met"
}
#line 2692 "cplus.met"

#line 2692 "cplus.met"
#line 3520 "cplus.met"
PPTREE cplus::name_space ( int error_free)
#line 3520 "cplus.met"
{
#line 3520 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 3520 "cplus.met"
    int _value,_nbPre = 0 ;
#line 3520 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 3520 "cplus.met"
    int _Debug = TRACE_RULE("name_space",TRACE_ENTER,(PPTREE)0);
#line 3520 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 3520 "cplus.met"
#line 3520 "cplus.met"
    PPTREE _addlist1 = (PPTREE) 0;
#line 3520 "cplus.met"
#line 3520 "cplus.met"
    PPTREE list = (PPTREE) 0,retTree = (PPTREE) 0,ident = (PPTREE) 0;
#line 3520 "cplus.met"
#line 3522 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3522 "cplus.met"
    switch( lexEl.Value) {
#line 3522 "cplus.met"
#line 3523 "cplus.met"
        case NAMESPACE : 
#line 3523 "cplus.met"
            tokenAhead = 0 ;
#line 3523 "cplus.met"
            CommTerm();
#line 3523 "cplus.met"
#line 3524 "cplus.met"
#line 3526 "cplus.met"
            if ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&TERM_OR_META(IDENT,"IDENT") && !(tokenAhead = 0) && ( BUILD_TERM_META(ident))) {
#line 3526 "cplus.met"
#line 3528 "cplus.met"
                {
#line 3528 "cplus.met"
                    PPTREE _ptRes0=0;
#line 3528 "cplus.met"
                    _ptRes0= MakeTree(IDENT, 1);
#line 3528 "cplus.met"
                    ReplaceTree(_ptRes0, 1, ident );
#line 3528 "cplus.met"
                    ident=_ptRes0;
#line 3528 "cplus.met"
                }
#line 3528 "cplus.met"
            }
#line 3528 "cplus.met"
#line 3530 "cplus.met"
            (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3530 "cplus.met"
            switch( lexEl.Value) {
#line 3530 "cplus.met"
#line 3534 "cplus.met"
                case AOUV : 
#line 3534 "cplus.met"
                    tokenAhead = 0 ;
#line 3534 "cplus.met"
                    CommTerm();
#line 3534 "cplus.met"
#line 3533 "cplus.met"
#line 3534 "cplus.met"
                    {
#line 3534 "cplus.met"
                        PPTREE _ptRes0=0;
#line 3534 "cplus.met"
                        _ptRes0= MakeTree(NAMESPACE, 2);
#line 3534 "cplus.met"
                        ReplaceTree(_ptRes0, 1, ident );
#line 3534 "cplus.met"
                        retTree=_ptRes0;
#line 3534 "cplus.met"
                    }
#line 3534 "cplus.met"
#line 3534 "cplus.met"
                    _addlist1 = list ;
#line 3534 "cplus.met"
#line 3535 "cplus.met"
                    while (! ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN(AFER,"}") && (tokenAhead = 0,CommTerm(),1))) { 
#line 3535 "cplus.met"
#line 3536 "cplus.met"
#line 3537 "cplus.met"
                        {
#line 3537 "cplus.met"
                            PPTREE _ptTree0=0;
#line 3537 "cplus.met"
                            if ( (_ptTree0=NQUICK_CALL(_Tak(ext_all)(error_free), 61, cplus))== (PPTREE) -1 ) {
#line 3537 "cplus.met"
                                MulFreeTree(5,_ptTree0,_addlist1,ident,list,retTree);
                                PROG_EXIT(name_space_exit,"name_space")
#line 3537 "cplus.met"
                            }
#line 3537 "cplus.met"
                            _addlist1 =AddList(_addlist1 , _ptTree0);
#line 3537 "cplus.met"
                        }
#line 3537 "cplus.met"
#line 3537 "cplus.met"
                        if (list){
#line 3537 "cplus.met"
#line 3537 "cplus.met"
                            _addlist1 = SonTree (_addlist1 ,2 );
#line 3537 "cplus.met"
                        } else {
#line 3537 "cplus.met"
#line 3537 "cplus.met"
                            list = _addlist1 ;
#line 3537 "cplus.met"
                        }
#line 3537 "cplus.met"
#line 3537 "cplus.met"
                    } 
#line 3537 "cplus.met"
#line 3539 "cplus.met"
                    {
#line 3539 "cplus.met"
                        PPTREE _ptTree0=0;
#line 3539 "cplus.met"
                        if ( (_ptTree0=NQUICK_CALL(_Tak(none_statement)(error_free), 99, cplus))== (PPTREE) -1 ) {
#line 3539 "cplus.met"
                            MulFreeTree(5,_ptTree0,_addlist1,ident,list,retTree);
                            PROG_EXIT(name_space_exit,"name_space")
#line 3539 "cplus.met"
                        }
#line 3539 "cplus.met"
                        list =AddList(list , _ptTree0);
#line 3539 "cplus.met"
                    }
#line 3539 "cplus.met"
#line 3540 "cplus.met"
                    {
#line 3540 "cplus.met"
                        PPTREE _ptTree0=0;
#line 3540 "cplus.met"
                        {
#line 3540 "cplus.met"
                            PPTREE _ptRes1=0;
#line 3540 "cplus.met"
                            _ptRes1= MakeTree(COMPOUND_EXT, 1);
#line 3540 "cplus.met"
                            ReplaceTree(_ptRes1, 1, list );
#line 3540 "cplus.met"
                            _ptTree0=_ptRes1;
#line 3540 "cplus.met"
                        }
#line 3540 "cplus.met"
                        ReplaceTree(retTree , 2 , _ptTree0);
#line 3540 "cplus.met"
                    }
#line 3540 "cplus.met"
#line 3540 "cplus.met"
                    break;
#line 3540 "cplus.met"
#line 3544 "cplus.met"
                case EGAL : 
#line 3544 "cplus.met"
                    tokenAhead = 0 ;
#line 3544 "cplus.met"
                    CommTerm();
#line 3544 "cplus.met"
#line 3543 "cplus.met"
#line 3544 "cplus.met"
                    if ((ident == (PPTREE) 0 )){
#line 3544 "cplus.met"
#line 3545 "cplus.met"
                        
#line 3545 "cplus.met"
                        MulFreeTree(4,_addlist1,ident,list,retTree);
                        LEX_EXIT ("",0);
#line 3545 "cplus.met"
                        goto name_space_exit;
#line 3545 "cplus.met"
#line 3545 "cplus.met"
                    }
#line 3545 "cplus.met"
#line 3546 "cplus.met"
                    {
#line 3546 "cplus.met"
                        PPTREE _ptTree0=0,_ptRes0=0;
#line 3546 "cplus.met"
                        _ptRes0= MakeTree(NAMESPACE_ALIAS, 2);
#line 3546 "cplus.met"
                        ReplaceTree(_ptRes0, 1, ident );
#line 3546 "cplus.met"
                        if ( (_ptTree0=NQUICK_CALL(_Tak(complete_class_name)(error_free), 25, cplus))== (PPTREE) -1 ) {
#line 3546 "cplus.met"
                            MulFreeTree(6,_ptRes0,_ptTree0,_addlist1,ident,list,retTree);
                            PROG_EXIT(name_space_exit,"name_space")
#line 3546 "cplus.met"
                        }
#line 3546 "cplus.met"
                        ReplaceTree(_ptRes0, 2, _ptTree0);
#line 3546 "cplus.met"
                        retTree=_ptRes0;
#line 3546 "cplus.met"
                    }
#line 3546 "cplus.met"
#line 3546 "cplus.met"
                    break;
#line 3546 "cplus.met"
                default :
#line 3546 "cplus.met"
                    MulFreeTree(4,_addlist1,ident,list,retTree);
                    CASE_EXIT(name_space_exit,"either { or =")
#line 3546 "cplus.met"
                    break;
#line 3546 "cplus.met"
            }
#line 3546 "cplus.met"
#line 3546 "cplus.met"
            break;
#line 3546 "cplus.met"
#line 3552 "cplus.met"
        case USING : 
#line 3552 "cplus.met"
            tokenAhead = 0 ;
#line 3552 "cplus.met"
            CommTerm();
#line 3552 "cplus.met"
#line 3553 "cplus.met"
#line 3554 "cplus.met"
            if ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN(NAMESPACE,"namespace") && (tokenAhead = 0,CommTerm(),1)){
#line 3554 "cplus.met"
#line 3555 "cplus.met"
                {
#line 3555 "cplus.met"
                    PPTREE _ptTree0=0,_ptRes0=0;
#line 3555 "cplus.met"
                    _ptRes0= MakeTree(USING_NAMESPACE, 1);
#line 3555 "cplus.met"
                    if ( (_ptTree0=NQUICK_CALL(_Tak(complete_class_name)(error_free), 25, cplus))== (PPTREE) -1 ) {
#line 3555 "cplus.met"
                        MulFreeTree(6,_ptRes0,_ptTree0,_addlist1,ident,list,retTree);
                        PROG_EXIT(name_space_exit,"name_space")
#line 3555 "cplus.met"
                    }
#line 3555 "cplus.met"
                    ReplaceTree(_ptRes0, 1, _ptTree0);
#line 3555 "cplus.met"
                    retTree=_ptRes0;
#line 3555 "cplus.met"
                }
#line 3555 "cplus.met"
            } else {
#line 3555 "cplus.met"
#line 3558 "cplus.met"
                {
#line 3558 "cplus.met"
                    PPTREE _ptTree0=0,_ptRes0=0;
#line 3558 "cplus.met"
                    _ptRes0= MakeTree(USING, 1);
#line 3558 "cplus.met"
                    if ( (_ptTree0=NQUICK_CALL(_Tak(complete_class_name)(error_free), 25, cplus))== (PPTREE) -1 ) {
#line 3558 "cplus.met"
                        MulFreeTree(6,_ptRes0,_ptTree0,_addlist1,ident,list,retTree);
                        PROG_EXIT(name_space_exit,"name_space")
#line 3558 "cplus.met"
                    }
#line 3558 "cplus.met"
                    ReplaceTree(_ptRes0, 1, _ptTree0);
#line 3558 "cplus.met"
                    retTree=_ptRes0;
#line 3558 "cplus.met"
                }
#line 3558 "cplus.met"
            }
#line 3558 "cplus.met"
#line 3559 "cplus.met"
            (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3559 "cplus.met"
            if (  !SEE_TOKEN( PVIR,";") || !(CommTerm(),1)) {
#line 3559 "cplus.met"
                MulFreeTree(4,_addlist1,ident,list,retTree);
                TOKEN_EXIT(name_space_exit,";")
#line 3559 "cplus.met"
            } else {
#line 3559 "cplus.met"
                tokenAhead = 0 ;
#line 3559 "cplus.met"
            }
#line 3559 "cplus.met"
#line 3559 "cplus.met"
            break;
#line 3559 "cplus.met"
        default :
#line 3559 "cplus.met"
            MulFreeTree(4,_addlist1,ident,list,retTree);
            CASE_EXIT(name_space_exit,"either namespace or using")
#line 3559 "cplus.met"
            break;
#line 3559 "cplus.met"
    }
#line 3559 "cplus.met"
#line 3562 "cplus.met"
    {
#line 3562 "cplus.met"
        _retValue = retTree ;
#line 3562 "cplus.met"
        goto name_space_ret;
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
name_space_exit :
#line 3563 "cplus.met"

#line 3563 "cplus.met"
    _Debug = TRACE_RULE("name_space",TRACE_EXIT,(PPTREE)0);
#line 3563 "cplus.met"
    _funcLevel--;
#line 3563 "cplus.met"
    return((PPTREE) -1) ;
#line 3563 "cplus.met"

#line 3563 "cplus.met"
name_space_ret :
#line 3563 "cplus.met"
    
#line 3563 "cplus.met"
    _Debug = TRACE_RULE("name_space",TRACE_RETURN,_retValue);
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
#line 2794 "cplus.met"
PPTREE cplus::new_1 ( int error_free)
#line 2794 "cplus.met"
{
#line 2794 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 2794 "cplus.met"
    int _value,_nbPre = 0 ;
#line 2794 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 2794 "cplus.met"
    int _Debug = TRACE_RULE("new_1",TRACE_ENTER,(PPTREE)0);
#line 2794 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 2794 "cplus.met"
#line 2794 "cplus.met"
    PPTREE retTree = (PPTREE) 0;
#line 2794 "cplus.met"
#line 2796 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 2796 "cplus.met"
    if (  !SEE_TOKEN( POUV,"(") || !(CommTerm(),1)) {
#line 2796 "cplus.met"
        MulFreeTree(1,retTree);
        TOKEN_EXIT(new_1_exit,"(")
#line 2796 "cplus.met"
    } else {
#line 2796 "cplus.met"
        tokenAhead = 0 ;
#line 2796 "cplus.met"
    }
#line 2796 "cplus.met"
#line 2797 "cplus.met"
    if ( (retTree=NQUICK_CALL(_Tak(expression)(error_free), 59, cplus))== (PPTREE) -1 ) {
#line 2797 "cplus.met"
        MulFreeTree(1,retTree);
        PROG_EXIT(new_1_exit,"new_1")
#line 2797 "cplus.met"
    }
#line 2797 "cplus.met"
#line 2798 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 2798 "cplus.met"
    if (  !SEE_TOKEN( PFER,")") || !(CommTerm(),1)) {
#line 2798 "cplus.met"
        MulFreeTree(1,retTree);
        TOKEN_EXIT(new_1_exit,")")
#line 2798 "cplus.met"
    } else {
#line 2798 "cplus.met"
        tokenAhead = 0 ;
#line 2798 "cplus.met"
    }
#line 2798 "cplus.met"
#line 2799 "cplus.met"
    if ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN(POUV,"(") && (tokenAhead = 0,CommTerm(),1)){
#line 2799 "cplus.met"
#line 2800 "cplus.met"
#line 2801 "cplus.met"
        {
#line 2801 "cplus.met"
            PPTREE _ptTree0=0,_ptRes0=0;
#line 2801 "cplus.met"
            _ptRes0= MakeTree(NEW, 4);
#line 2801 "cplus.met"
            ReplaceTree(_ptRes0, 1, retTree );
#line 2801 "cplus.met"
            if ( (_ptTree0=NQUICK_CALL(_Tak(type_name)(error_free), 140, cplus))== (PPTREE) -1 ) {
#line 2801 "cplus.met"
                MulFreeTree(3,_ptRes0,_ptTree0,retTree);
                PROG_EXIT(new_1_exit,"new_1")
#line 2801 "cplus.met"
            }
#line 2801 "cplus.met"
            ReplaceTree(_ptRes0, 2, _ptTree0);
#line 2801 "cplus.met"
            retTree=_ptRes0;
#line 2801 "cplus.met"
        }
#line 2801 "cplus.met"
#line 2802 "cplus.met"
        (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 2802 "cplus.met"
        if (  !SEE_TOKEN( PFER,")") || !(CommTerm(),1)) {
#line 2802 "cplus.met"
            MulFreeTree(1,retTree);
            TOKEN_EXIT(new_1_exit,")")
#line 2802 "cplus.met"
        } else {
#line 2802 "cplus.met"
            tokenAhead = 0 ;
#line 2802 "cplus.met"
        }
#line 2802 "cplus.met"
#line 2803 "cplus.met"
        {
#line 2803 "cplus.met"
            _retValue = retTree ;
#line 2803 "cplus.met"
            goto new_1_ret;
#line 2803 "cplus.met"
            
#line 2803 "cplus.met"
        }
#line 2803 "cplus.met"
#line 2803 "cplus.met"
#line 2803 "cplus.met"
    } else {
#line 2803 "cplus.met"
#line 2806 "cplus.met"
        {
#line 2806 "cplus.met"
            PPTREE _ptTree0=0,_ptRes0=0;
#line 2806 "cplus.met"
            _ptRes0= MakeTree(NEW, 4);
#line 2806 "cplus.met"
            ReplaceTree(_ptRes0, 1, retTree );
#line 2806 "cplus.met"
            if ( (_ptTree0=NQUICK_CALL(_Tak(new_type_name)(error_free), 98, cplus))== (PPTREE) -1 ) {
#line 2806 "cplus.met"
                MulFreeTree(3,_ptRes0,_ptTree0,retTree);
                PROG_EXIT(new_1_exit,"new_1")
#line 2806 "cplus.met"
            }
#line 2806 "cplus.met"
            ReplaceTree(_ptRes0, 2, _ptTree0);
#line 2806 "cplus.met"
            retTree=_ptRes0;
#line 2806 "cplus.met"
        }
#line 2806 "cplus.met"
    }
#line 2806 "cplus.met"
#line 2807 "cplus.met"
    {
#line 2807 "cplus.met"
        _retValue = retTree ;
#line 2807 "cplus.met"
        goto new_1_ret;
#line 2807 "cplus.met"
        
#line 2807 "cplus.met"
    }
#line 2807 "cplus.met"
#line 2807 "cplus.met"
#line 2807 "cplus.met"

#line 2808 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2808 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 2808 "cplus.met"
return((PPTREE) 0);
#line 2808 "cplus.met"

#line 2808 "cplus.met"
new_1_exit :
#line 2808 "cplus.met"

#line 2808 "cplus.met"
    _Debug = TRACE_RULE("new_1",TRACE_EXIT,(PPTREE)0);
#line 2808 "cplus.met"
    _funcLevel--;
#line 2808 "cplus.met"
    return((PPTREE) -1) ;
#line 2808 "cplus.met"

#line 2808 "cplus.met"
new_1_ret :
#line 2808 "cplus.met"
    
#line 2808 "cplus.met"
    _Debug = TRACE_RULE("new_1",TRACE_RETURN,_retValue);
#line 2808 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2808 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 2808 "cplus.met"
    return _retValue ;
#line 2808 "cplus.met"
}
#line 2808 "cplus.met"

#line 2808 "cplus.met"
#line 2810 "cplus.met"
PPTREE cplus::new_2 ( int error_free)
#line 2810 "cplus.met"
{
#line 2810 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 2810 "cplus.met"
    int _value,_nbPre = 0 ;
#line 2810 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 2810 "cplus.met"
    int _Debug = TRACE_RULE("new_2",TRACE_ENTER,(PPTREE)0);
#line 2810 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 2810 "cplus.met"
#line 2810 "cplus.met"
    PPTREE retTree = (PPTREE) 0;
#line 2810 "cplus.met"
#line 2812 "cplus.met"
    if ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN(POUV,"(") && (tokenAhead = 0,CommTerm(),1)){
#line 2812 "cplus.met"
#line 2813 "cplus.met"
#line 2814 "cplus.met"
        {
#line 2814 "cplus.met"
            PPTREE _ptTree0=0,_ptRes0=0;
#line 2814 "cplus.met"
            _ptRes0= MakeTree(NEW, 4);
#line 2814 "cplus.met"
            if ( (_ptTree0=NQUICK_CALL(_Tak(type_name)(error_free), 140, cplus))== (PPTREE) -1 ) {
#line 2814 "cplus.met"
                MulFreeTree(3,_ptRes0,_ptTree0,retTree);
                PROG_EXIT(new_2_exit,"new_2")
#line 2814 "cplus.met"
            }
#line 2814 "cplus.met"
            ReplaceTree(_ptRes0, 2, _ptTree0);
#line 2814 "cplus.met"
            retTree=_ptRes0;
#line 2814 "cplus.met"
        }
#line 2814 "cplus.met"
#line 2815 "cplus.met"
        (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 2815 "cplus.met"
        if (  !SEE_TOKEN( PFER,")") || !(CommTerm(),1)) {
#line 2815 "cplus.met"
            MulFreeTree(1,retTree);
            TOKEN_EXIT(new_2_exit,")")
#line 2815 "cplus.met"
        } else {
#line 2815 "cplus.met"
            tokenAhead = 0 ;
#line 2815 "cplus.met"
        }
#line 2815 "cplus.met"
#line 2816 "cplus.met"
        {
#line 2816 "cplus.met"
            _retValue = retTree ;
#line 2816 "cplus.met"
            goto new_2_ret;
#line 2816 "cplus.met"
            
#line 2816 "cplus.met"
        }
#line 2816 "cplus.met"
#line 2816 "cplus.met"
#line 2816 "cplus.met"
    } else {
#line 2816 "cplus.met"
#line 2819 "cplus.met"
        {
#line 2819 "cplus.met"
            PPTREE _ptTree0=0,_ptRes0=0;
#line 2819 "cplus.met"
            _ptRes0= MakeTree(NEW, 4);
#line 2819 "cplus.met"
            if ( (_ptTree0=NQUICK_CALL(_Tak(new_type_name)(error_free), 98, cplus))== (PPTREE) -1 ) {
#line 2819 "cplus.met"
                MulFreeTree(3,_ptRes0,_ptTree0,retTree);
                PROG_EXIT(new_2_exit,"new_2")
#line 2819 "cplus.met"
            }
#line 2819 "cplus.met"
            ReplaceTree(_ptRes0, 2, _ptTree0);
#line 2819 "cplus.met"
            retTree=_ptRes0;
#line 2819 "cplus.met"
        }
#line 2819 "cplus.met"
    }
#line 2819 "cplus.met"
#line 2820 "cplus.met"
    {
#line 2820 "cplus.met"
        _retValue = retTree ;
#line 2820 "cplus.met"
        goto new_2_ret;
#line 2820 "cplus.met"
        
#line 2820 "cplus.met"
    }
#line 2820 "cplus.met"
#line 2820 "cplus.met"
#line 2820 "cplus.met"

#line 2821 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2821 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 2821 "cplus.met"
return((PPTREE) 0);
#line 2821 "cplus.met"

#line 2821 "cplus.met"
new_2_exit :
#line 2821 "cplus.met"

#line 2821 "cplus.met"
    _Debug = TRACE_RULE("new_2",TRACE_EXIT,(PPTREE)0);
#line 2821 "cplus.met"
    _funcLevel--;
#line 2821 "cplus.met"
    return((PPTREE) -1) ;
#line 2821 "cplus.met"

#line 2821 "cplus.met"
new_2_ret :
#line 2821 "cplus.met"
    
#line 2821 "cplus.met"
    _Debug = TRACE_RULE("new_2",TRACE_RETURN,_retValue);
#line 2821 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2821 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 2821 "cplus.met"
    return _retValue ;
#line 2821 "cplus.met"
}
#line 2821 "cplus.met"

#line 2821 "cplus.met"
#line 2364 "cplus.met"
PPTREE cplus::new_declarator ( int error_free)
#line 2364 "cplus.met"
{
#line 2364 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 2364 "cplus.met"
    int _value,_nbPre = 0 ;
#line 2364 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 2364 "cplus.met"
    int _Debug = TRACE_RULE("new_declarator",TRACE_ENTER,(PPTREE)0);
#line 2364 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 2364 "cplus.met"
#line 2364 "cplus.met"
    PPTREE valTree = (PPTREE) 0,retTree = (PPTREE) 0,expList = (PPTREE) 0;
#line 2364 "cplus.met"
#line 2366 "cplus.met"
    if (NPUSH_CALL_AFF_VERIF(valTree = ,_Tak(range_modifier), 117, cplus)){
#line 2366 "cplus.met"
#line 2367 "cplus.met"
        {
#line 2367 "cplus.met"
            PPTREE _ptTree0=0;
#line 2367 "cplus.met"
            {
#line 2367 "cplus.met"
                PPTREE _ptTree1=0;
#line 2367 "cplus.met"
                if ( (_ptTree1=NQUICK_CALL(_Tak(new_declarator)(error_free), 97, cplus))== (PPTREE) -1 ) {
#line 2367 "cplus.met"
                    MulFreeTree(5,_ptTree1,_ptTree0,expList,retTree,valTree);
                    PROG_EXIT(new_declarator_exit,"new_declarator")
#line 2367 "cplus.met"
                }
#line 2367 "cplus.met"
                _ptTree0=ReplaceTree(valTree , 2 , _ptTree1);
#line 2367 "cplus.met"
            }
#line 2367 "cplus.met"
            _retValue =_ptTree0;
#line 2367 "cplus.met"
            goto new_declarator_ret;
#line 2367 "cplus.met"
        }
#line 2367 "cplus.met"
    }
#line 2367 "cplus.met"
#line 2368 "cplus.met"
    retTree = (PPTREE) 0;
#line 2368 "cplus.met"
#line 2369 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 2369 "cplus.met"
    switch( lexEl.Value) {
#line 2369 "cplus.met"
#line 2370 "cplus.met"
        case ETOI : 
#line 2370 "cplus.met"
            tokenAhead = 0 ;
#line 2370 "cplus.met"
            CommTerm();
#line 2370 "cplus.met"
#line 2370 "cplus.met"
            {
#line 2370 "cplus.met"
                PPTREE _ptTree0=0;
#line 2370 "cplus.met"
                {
#line 2370 "cplus.met"
                    PPTREE _ptTree1=0,_ptRes1=0;
#line 2370 "cplus.met"
                    _ptRes1= MakeTree(TYP_ADDR, 1);
#line 2370 "cplus.met"
                    if ( (_ptTree1=NQUICK_CALL(_Tak(new_declarator)(error_free), 97, cplus))== (PPTREE) -1 ) {
#line 2370 "cplus.met"
                        MulFreeTree(6,_ptRes1,_ptTree1,_ptTree0,expList,retTree,valTree);
                        PROG_EXIT(new_declarator_exit,"new_declarator")
#line 2370 "cplus.met"
                    }
#line 2370 "cplus.met"
                    ReplaceTree(_ptRes1, 1, _ptTree1);
#line 2370 "cplus.met"
                    _ptTree0=_ptRes1;
#line 2370 "cplus.met"
                }
#line 2370 "cplus.met"
                _retValue =_ptTree0;
#line 2370 "cplus.met"
                goto new_declarator_ret;
#line 2370 "cplus.met"
            }
#line 2370 "cplus.met"
            break;
#line 2370 "cplus.met"
#line 2371 "cplus.met"
        case META : 
#line 2371 "cplus.met"
        case IDENT : 
#line 2371 "cplus.met"
#line 2372 "cplus.met"
#line 2373 "cplus.met"
            if ( (valTree=NQUICK_CALL(_Tak(member_declarator)(error_free), 91, cplus))== (PPTREE) -1 ) {
#line 2373 "cplus.met"
                MulFreeTree(3,expList,retTree,valTree);
                PROG_EXIT(new_declarator_exit,"new_declarator")
#line 2373 "cplus.met"
            }
#line 2373 "cplus.met"
#line 2374 "cplus.met"
            {
#line 2374 "cplus.met"
                PPTREE _ptTree0=0;
#line 2374 "cplus.met"
                {
#line 2374 "cplus.met"
                    PPTREE _ptTree1=0;
#line 2374 "cplus.met"
                    if ( (_ptTree1=NQUICK_CALL(_Tak(new_declarator)(error_free), 97, cplus))== (PPTREE) -1 ) {
#line 2374 "cplus.met"
                        MulFreeTree(5,_ptTree1,_ptTree0,expList,retTree,valTree);
                        PROG_EXIT(new_declarator_exit,"new_declarator")
#line 2374 "cplus.met"
                    }
#line 2374 "cplus.met"
                    _ptTree0=ReplaceTree(valTree , 2 , _ptTree1);
#line 2374 "cplus.met"
                }
#line 2374 "cplus.met"
                _retValue =_ptTree0;
#line 2374 "cplus.met"
                goto new_declarator_ret;
#line 2374 "cplus.met"
            }
#line 2374 "cplus.met"
#line 2374 "cplus.met"
            break;
#line 2374 "cplus.met"
#line 2383 "cplus.met"
        default : 
#line 2383 "cplus.met"
#line 2379 "cplus.met"
#line 2381 "cplus.met"
            while ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN(COUV,"[") && (tokenAhead = 0,CommTerm(),1)) { 
#line 2381 "cplus.met"
#line 2382 "cplus.met"
#line 2383 "cplus.met"
                if (NPUSH_CALL_AFF_VERIF(expList = ,_Tak(expression), 59, cplus)){
#line 2383 "cplus.met"
#line 2384 "cplus.met"
                    {
#line 2384 "cplus.met"
                        PPTREE _ptRes0=0;
#line 2384 "cplus.met"
                        _ptRes0= MakeTree(TYP_ARRAY, 2);
#line 2384 "cplus.met"
                        ReplaceTree(_ptRes0, 1, retTree );
#line 2384 "cplus.met"
                        ReplaceTree(_ptRes0, 2, expList );
#line 2384 "cplus.met"
                        retTree=_ptRes0;
#line 2384 "cplus.met"
                    }
#line 2384 "cplus.met"
                } else {
#line 2384 "cplus.met"
#line 2386 "cplus.met"
                    {
#line 2386 "cplus.met"
                        PPTREE _ptRes0=0;
#line 2386 "cplus.met"
                        _ptRes0= MakeTree(TYP_ARRAY, 2);
#line 2386 "cplus.met"
                        ReplaceTree(_ptRes0, 1, retTree );
#line 2386 "cplus.met"
                        retTree=_ptRes0;
#line 2386 "cplus.met"
                    }
#line 2386 "cplus.met"
                }
#line 2386 "cplus.met"
#line 2387 "cplus.met"
                (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 2387 "cplus.met"
                if (  !SEE_TOKEN( CFER,"]") || !(CommTerm(),1)) {
#line 2387 "cplus.met"
                    MulFreeTree(3,expList,retTree,valTree);
                    TOKEN_EXIT(new_declarator_exit,"]")
#line 2387 "cplus.met"
                } else {
#line 2387 "cplus.met"
                    tokenAhead = 0 ;
#line 2387 "cplus.met"
                }
#line 2387 "cplus.met"
#line 2387 "cplus.met"
            } 
#line 2387 "cplus.met"
#line 2389 "cplus.met"
            {
#line 2389 "cplus.met"
                _retValue = retTree ;
#line 2389 "cplus.met"
                goto new_declarator_ret;
#line 2389 "cplus.met"
                
#line 2389 "cplus.met"
            }
#line 2389 "cplus.met"
#line 2389 "cplus.met"
            break;
#line 2389 "cplus.met"
    }
#line 2389 "cplus.met"
#line 2389 "cplus.met"
#line 2391 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2391 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 2391 "cplus.met"
return((PPTREE) 0);
#line 2391 "cplus.met"

#line 2391 "cplus.met"
new_declarator_exit :
#line 2391 "cplus.met"

#line 2391 "cplus.met"
    _Debug = TRACE_RULE("new_declarator",TRACE_EXIT,(PPTREE)0);
#line 2391 "cplus.met"
    _funcLevel--;
#line 2391 "cplus.met"
    return((PPTREE) -1) ;
#line 2391 "cplus.met"

#line 2391 "cplus.met"
new_declarator_ret :
#line 2391 "cplus.met"
    
#line 2391 "cplus.met"
    _Debug = TRACE_RULE("new_declarator",TRACE_RETURN,_retValue);
#line 2391 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2391 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 2391 "cplus.met"
    return _retValue ;
#line 2391 "cplus.met"
}
#line 2391 "cplus.met"

#line 2391 "cplus.met"
#line 2514 "cplus.met"
PPTREE cplus::new_type_name ( int error_free)
#line 2514 "cplus.met"
{
#line 2514 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 2514 "cplus.met"
    int _value,_nbPre = 0 ;
#line 2514 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 2514 "cplus.met"
    int _Debug = TRACE_RULE("new_type_name",TRACE_ENTER,(PPTREE)0);
#line 2514 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 2514 "cplus.met"
#line 2514 "cplus.met"
    PPTREE retTree = (PPTREE) 0,valTree = (PPTREE) 0;
#line 2514 "cplus.met"
#line 2516 "cplus.met"
    if ( (retTree=NQUICK_CALL(_Tak(type_specifier)(error_free), 141, cplus))== (PPTREE) -1 ) {
#line 2516 "cplus.met"
        MulFreeTree(2,retTree,valTree);
        PROG_EXIT(new_type_name_exit,"new_type_name")
#line 2516 "cplus.met"
    }
#line 2516 "cplus.met"
#line 2517 "cplus.met"
    if (NPUSH_CALL_AFF_VERIF(valTree = ,_Tak(new_declarator), 97, cplus)){
#line 2517 "cplus.met"
#line 2518 "cplus.met"
        {
#line 2518 "cplus.met"
            PPTREE _ptRes0=0;
#line 2518 "cplus.met"
            _ptRes0= MakeTree(NEW_DECLARATOR, 2);
#line 2518 "cplus.met"
            ReplaceTree(_ptRes0, 1, retTree );
#line 2518 "cplus.met"
            ReplaceTree(_ptRes0, 2, valTree );
#line 2518 "cplus.met"
            valTree=_ptRes0;
#line 2518 "cplus.met"
        }
#line 2518 "cplus.met"
    } else {
#line 2518 "cplus.met"
#line 2520 "cplus.met"
        valTree = retTree ;
#line 2520 "cplus.met"
    }
#line 2520 "cplus.met"
#line 2521 "cplus.met"
    {
#line 2521 "cplus.met"
        _retValue = valTree ;
#line 2521 "cplus.met"
        goto new_type_name_ret;
#line 2521 "cplus.met"
        
#line 2521 "cplus.met"
    }
#line 2521 "cplus.met"
#line 2521 "cplus.met"
#line 2521 "cplus.met"

#line 2522 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2522 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 2522 "cplus.met"
return((PPTREE) 0);
#line 2522 "cplus.met"

#line 2522 "cplus.met"
new_type_name_exit :
#line 2522 "cplus.met"

#line 2522 "cplus.met"
    _Debug = TRACE_RULE("new_type_name",TRACE_EXIT,(PPTREE)0);
#line 2522 "cplus.met"
    _funcLevel--;
#line 2522 "cplus.met"
    return((PPTREE) -1) ;
#line 2522 "cplus.met"

#line 2522 "cplus.met"
new_type_name_ret :
#line 2522 "cplus.met"
    
#line 2522 "cplus.met"
    _Debug = TRACE_RULE("new_type_name",TRACE_RETURN,_retValue);
#line 2522 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2522 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 2522 "cplus.met"
    return _retValue ;
#line 2522 "cplus.met"
}
#line 2522 "cplus.met"

#line 2522 "cplus.met"
#line 3228 "cplus.met"
PPTREE cplus::none_statement ( int error_free)
#line 3228 "cplus.met"
{
#line 3228 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 3228 "cplus.met"
    int _value,_nbPre = 0 ;
#line 3228 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 3228 "cplus.met"
    int _Debug = TRACE_RULE("none_statement",TRACE_ENTER,(PPTREE)0);
#line 3228 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 3228 "cplus.met"
#line 3229 "cplus.met"
    {
#line 3229 "cplus.met"
        PPTREE _ptTree0=0;
#line 3229 "cplus.met"
        {
#line 3229 "cplus.met"
            PPTREE _ptRes1=0;
#line 3229 "cplus.met"
            _ptRes1= MakeTree(NONE, 0);
#line 3229 "cplus.met"
            _ptTree0=_ptRes1;
#line 3229 "cplus.met"
        }
#line 3229 "cplus.met"
        _retValue =_ptTree0;
#line 3229 "cplus.met"
        goto none_statement_ret;
#line 3229 "cplus.met"
    }
#line 3229 "cplus.met"
#line 3229 "cplus.met"
#line 3229 "cplus.met"

#line 3230 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 3230 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 3230 "cplus.met"
return((PPTREE) 0);
#line 3230 "cplus.met"

#line 3230 "cplus.met"
none_statement_exit :
#line 3230 "cplus.met"

#line 3230 "cplus.met"
    _Debug = TRACE_RULE("none_statement",TRACE_EXIT,(PPTREE)0);
#line 3230 "cplus.met"
    _funcLevel--;
#line 3230 "cplus.met"
    return((PPTREE) -1) ;
#line 3230 "cplus.met"

#line 3230 "cplus.met"
none_statement_ret :
#line 3230 "cplus.met"
    
#line 3230 "cplus.met"
    _Debug = TRACE_RULE("none_statement",TRACE_RETURN,_retValue);
#line 3230 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 3230 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 3230 "cplus.met"
    return _retValue ;
#line 3230 "cplus.met"
}
#line 3230 "cplus.met"

#line 3230 "cplus.met"
#line 2960 "cplus.met"
PPTREE cplus::operator_function_name ( int error_free)
#line 2960 "cplus.met"
{
#line 2960 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 2960 "cplus.met"
    int _value,_nbPre = 0 ;
#line 2960 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 2960 "cplus.met"
    int _Debug = TRACE_RULE("operator_function_name",TRACE_ENTER,(PPTREE)0);
#line 2960 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 2960 "cplus.met"
#line 2960 "cplus.met"
    PPTREE retTree = (PPTREE) 0,valTree = (PPTREE) 0,list = (PPTREE) 0;
#line 2960 "cplus.met"
#line 2962 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 2962 "cplus.met"
    if (  !SEE_TOKEN( OPERATOR,"operator") || !(CommTerm(),1)) {
#line 2962 "cplus.met"
        MulFreeTree(3,list,retTree,valTree);
        TOKEN_EXIT(operator_function_name_exit,"operator")
#line 2962 "cplus.met"
    } else {
#line 2962 "cplus.met"
        tokenAhead = 0 ;
#line 2962 "cplus.met"
    }
#line 2962 "cplus.met"
#line 2963 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 2963 "cplus.met"
    switch( lexEl.Value) {
#line 2963 "cplus.met"
#line 2964 "cplus.met"
        case NEW : 
#line 2964 "cplus.met"
            tokenAhead = 0 ;
#line 2964 "cplus.met"
            CommTerm();
#line 2964 "cplus.met"
#line 2964 "cplus.met"
            {
#line 2964 "cplus.met"
                PPTREE _ptTree0=0;
#line 2964 "cplus.met"
                {
#line 2964 "cplus.met"
                    PPTREE _ptRes1=0;
#line 2964 "cplus.met"
                    _ptRes1= MakeTree(OPERATOR, 1);
#line 2964 "cplus.met"
                    ReplaceTree(_ptRes1, 1, MakeString ("new"));
#line 2964 "cplus.met"
                    _ptTree0=_ptRes1;
#line 2964 "cplus.met"
                }
#line 2964 "cplus.met"
                _retValue =_ptTree0;
#line 2964 "cplus.met"
                goto operator_function_name_ret;
#line 2964 "cplus.met"
            }
#line 2964 "cplus.met"
            break;
#line 2964 "cplus.met"
#line 2965 "cplus.met"
        case DELETE : 
#line 2965 "cplus.met"
            tokenAhead = 0 ;
#line 2965 "cplus.met"
            CommTerm();
#line 2965 "cplus.met"
#line 2965 "cplus.met"
            {
#line 2965 "cplus.met"
                PPTREE _ptTree0=0;
#line 2965 "cplus.met"
                {
#line 2965 "cplus.met"
                    PPTREE _ptRes1=0;
#line 2965 "cplus.met"
                    _ptRes1= MakeTree(OPERATOR, 1);
#line 2965 "cplus.met"
                    ReplaceTree(_ptRes1, 1, MakeString ("delete"));
#line 2965 "cplus.met"
                    _ptTree0=_ptRes1;
#line 2965 "cplus.met"
                }
#line 2965 "cplus.met"
                _retValue =_ptTree0;
#line 2965 "cplus.met"
                goto operator_function_name_ret;
#line 2965 "cplus.met"
            }
#line 2965 "cplus.met"
            break;
#line 2965 "cplus.met"
#line 2966 "cplus.met"
        case PLUS : 
#line 2966 "cplus.met"
            tokenAhead = 0 ;
#line 2966 "cplus.met"
            CommTerm();
#line 2966 "cplus.met"
#line 2966 "cplus.met"
            {
#line 2966 "cplus.met"
                PPTREE _ptTree0=0;
#line 2966 "cplus.met"
                {
#line 2966 "cplus.met"
                    PPTREE _ptRes1=0;
#line 2966 "cplus.met"
                    _ptRes1= MakeTree(OPERATOR, 1);
#line 2966 "cplus.met"
                    ReplaceTree(_ptRes1, 1, MakeString ("+"));
#line 2966 "cplus.met"
                    _ptTree0=_ptRes1;
#line 2966 "cplus.met"
                }
#line 2966 "cplus.met"
                _retValue =_ptTree0;
#line 2966 "cplus.met"
                goto operator_function_name_ret;
#line 2966 "cplus.met"
            }
#line 2966 "cplus.met"
            break;
#line 2966 "cplus.met"
#line 2967 "cplus.met"
        case TIRE : 
#line 2967 "cplus.met"
            tokenAhead = 0 ;
#line 2967 "cplus.met"
            CommTerm();
#line 2967 "cplus.met"
#line 2967 "cplus.met"
            {
#line 2967 "cplus.met"
                PPTREE _ptTree0=0;
#line 2967 "cplus.met"
                {
#line 2967 "cplus.met"
                    PPTREE _ptRes1=0;
#line 2967 "cplus.met"
                    _ptRes1= MakeTree(OPERATOR, 1);
#line 2967 "cplus.met"
                    ReplaceTree(_ptRes1, 1, MakeString ("-"));
#line 2967 "cplus.met"
                    _ptTree0=_ptRes1;
#line 2967 "cplus.met"
                }
#line 2967 "cplus.met"
                _retValue =_ptTree0;
#line 2967 "cplus.met"
                goto operator_function_name_ret;
#line 2967 "cplus.met"
            }
#line 2967 "cplus.met"
            break;
#line 2967 "cplus.met"
#line 2968 "cplus.met"
        case ETOI : 
#line 2968 "cplus.met"
            tokenAhead = 0 ;
#line 2968 "cplus.met"
            CommTerm();
#line 2968 "cplus.met"
#line 2968 "cplus.met"
            {
#line 2968 "cplus.met"
                PPTREE _ptTree0=0;
#line 2968 "cplus.met"
                {
#line 2968 "cplus.met"
                    PPTREE _ptRes1=0;
#line 2968 "cplus.met"
                    _ptRes1= MakeTree(OPERATOR, 1);
#line 2968 "cplus.met"
                    ReplaceTree(_ptRes1, 1, MakeString ("*"));
#line 2968 "cplus.met"
                    _ptTree0=_ptRes1;
#line 2968 "cplus.met"
                }
#line 2968 "cplus.met"
                _retValue =_ptTree0;
#line 2968 "cplus.met"
                goto operator_function_name_ret;
#line 2968 "cplus.met"
            }
#line 2968 "cplus.met"
            break;
#line 2968 "cplus.met"
#line 2969 "cplus.met"
        case META : 
#line 2969 "cplus.met"
        case SLAS : 
#line 2969 "cplus.met"
            tokenAhead = 0 ;
#line 2969 "cplus.met"
            CommTerm();
#line 2969 "cplus.met"
#line 2969 "cplus.met"
            {
#line 2969 "cplus.met"
                PPTREE _ptTree0=0;
#line 2969 "cplus.met"
                {
#line 2969 "cplus.met"
                    PPTREE _ptRes1=0;
#line 2969 "cplus.met"
                    _ptRes1= MakeTree(OPERATOR, 1);
#line 2969 "cplus.met"
                    ReplaceTree(_ptRes1, 1, MakeString ("/"));
#line 2969 "cplus.met"
                    _ptTree0=_ptRes1;
#line 2969 "cplus.met"
                }
#line 2969 "cplus.met"
                _retValue =_ptTree0;
#line 2969 "cplus.met"
                goto operator_function_name_ret;
#line 2969 "cplus.met"
            }
#line 2969 "cplus.met"
            break;
#line 2969 "cplus.met"
#line 2970 "cplus.met"
        case POURC : 
#line 2970 "cplus.met"
            tokenAhead = 0 ;
#line 2970 "cplus.met"
            CommTerm();
#line 2970 "cplus.met"
#line 2970 "cplus.met"
            {
#line 2970 "cplus.met"
                PPTREE _ptTree0=0;
#line 2970 "cplus.met"
                {
#line 2970 "cplus.met"
                    PPTREE _ptRes1=0;
#line 2970 "cplus.met"
                    _ptRes1= MakeTree(OPERATOR, 1);
#line 2970 "cplus.met"
                    ReplaceTree(_ptRes1, 1, MakeString ("%"));
#line 2970 "cplus.met"
                    _ptTree0=_ptRes1;
#line 2970 "cplus.met"
                }
#line 2970 "cplus.met"
                _retValue =_ptTree0;
#line 2970 "cplus.met"
                goto operator_function_name_ret;
#line 2970 "cplus.met"
            }
#line 2970 "cplus.met"
            break;
#line 2970 "cplus.met"
#line 2971 "cplus.met"
        case CHAP : 
#line 2971 "cplus.met"
            tokenAhead = 0 ;
#line 2971 "cplus.met"
            CommTerm();
#line 2971 "cplus.met"
#line 2971 "cplus.met"
            {
#line 2971 "cplus.met"
                PPTREE _ptTree0=0;
#line 2971 "cplus.met"
                {
#line 2971 "cplus.met"
                    PPTREE _ptRes1=0;
#line 2971 "cplus.met"
                    _ptRes1= MakeTree(OPERATOR, 1);
#line 2971 "cplus.met"
                    ReplaceTree(_ptRes1, 1, MakeString ("^"));
#line 2971 "cplus.met"
                    _ptTree0=_ptRes1;
#line 2971 "cplus.met"
                }
#line 2971 "cplus.met"
                _retValue =_ptTree0;
#line 2971 "cplus.met"
                goto operator_function_name_ret;
#line 2971 "cplus.met"
            }
#line 2971 "cplus.met"
            break;
#line 2971 "cplus.met"
#line 2972 "cplus.met"
        case ETCO : 
#line 2972 "cplus.met"
            tokenAhead = 0 ;
#line 2972 "cplus.met"
            CommTerm();
#line 2972 "cplus.met"
#line 2972 "cplus.met"
            {
#line 2972 "cplus.met"
                PPTREE _ptTree0=0;
#line 2972 "cplus.met"
                {
#line 2972 "cplus.met"
                    PPTREE _ptRes1=0;
#line 2972 "cplus.met"
                    _ptRes1= MakeTree(OPERATOR, 1);
#line 2972 "cplus.met"
                    ReplaceTree(_ptRes1, 1, MakeString ("&"));
#line 2972 "cplus.met"
                    _ptTree0=_ptRes1;
#line 2972 "cplus.met"
                }
#line 2972 "cplus.met"
                _retValue =_ptTree0;
#line 2972 "cplus.met"
                goto operator_function_name_ret;
#line 2972 "cplus.met"
            }
#line 2972 "cplus.met"
            break;
#line 2972 "cplus.met"
#line 2973 "cplus.met"
        case VBAR : 
#line 2973 "cplus.met"
            tokenAhead = 0 ;
#line 2973 "cplus.met"
            CommTerm();
#line 2973 "cplus.met"
#line 2973 "cplus.met"
            {
#line 2973 "cplus.met"
                PPTREE _ptTree0=0;
#line 2973 "cplus.met"
                {
#line 2973 "cplus.met"
                    PPTREE _ptRes1=0;
#line 2973 "cplus.met"
                    _ptRes1= MakeTree(OPERATOR, 1);
#line 2973 "cplus.met"
                    ReplaceTree(_ptRes1, 1, MakeString ("|"));
#line 2973 "cplus.met"
                    _ptTree0=_ptRes1;
#line 2973 "cplus.met"
                }
#line 2973 "cplus.met"
                _retValue =_ptTree0;
#line 2973 "cplus.met"
                goto operator_function_name_ret;
#line 2973 "cplus.met"
            }
#line 2973 "cplus.met"
            break;
#line 2973 "cplus.met"
#line 2974 "cplus.met"
        case TILD : 
#line 2974 "cplus.met"
            tokenAhead = 0 ;
#line 2974 "cplus.met"
            CommTerm();
#line 2974 "cplus.met"
#line 2974 "cplus.met"
            {
#line 2974 "cplus.met"
                PPTREE _ptTree0=0;
#line 2974 "cplus.met"
                {
#line 2974 "cplus.met"
                    PPTREE _ptRes1=0;
#line 2974 "cplus.met"
                    _ptRes1= MakeTree(OPERATOR, 1);
#line 2974 "cplus.met"
                    ReplaceTree(_ptRes1, 1, MakeString ("~"));
#line 2974 "cplus.met"
                    _ptTree0=_ptRes1;
#line 2974 "cplus.met"
                }
#line 2974 "cplus.met"
                _retValue =_ptTree0;
#line 2974 "cplus.met"
                goto operator_function_name_ret;
#line 2974 "cplus.met"
            }
#line 2974 "cplus.met"
            break;
#line 2974 "cplus.met"
#line 2975 "cplus.met"
        case EXCL : 
#line 2975 "cplus.met"
            tokenAhead = 0 ;
#line 2975 "cplus.met"
            CommTerm();
#line 2975 "cplus.met"
#line 2975 "cplus.met"
            {
#line 2975 "cplus.met"
                PPTREE _ptTree0=0;
#line 2975 "cplus.met"
                {
#line 2975 "cplus.met"
                    PPTREE _ptRes1=0;
#line 2975 "cplus.met"
                    _ptRes1= MakeTree(OPERATOR, 1);
#line 2975 "cplus.met"
                    ReplaceTree(_ptRes1, 1, MakeString ("!"));
#line 2975 "cplus.met"
                    _ptTree0=_ptRes1;
#line 2975 "cplus.met"
                }
#line 2975 "cplus.met"
                _retValue =_ptTree0;
#line 2975 "cplus.met"
                goto operator_function_name_ret;
#line 2975 "cplus.met"
            }
#line 2975 "cplus.met"
            break;
#line 2975 "cplus.met"
#line 2976 "cplus.met"
        case EGAL : 
#line 2976 "cplus.met"
            tokenAhead = 0 ;
#line 2976 "cplus.met"
            CommTerm();
#line 2976 "cplus.met"
#line 2976 "cplus.met"
            {
#line 2976 "cplus.met"
                PPTREE _ptTree0=0;
#line 2976 "cplus.met"
                {
#line 2976 "cplus.met"
                    PPTREE _ptRes1=0;
#line 2976 "cplus.met"
                    _ptRes1= MakeTree(OPERATOR, 1);
#line 2976 "cplus.met"
                    ReplaceTree(_ptRes1, 1, MakeString ("="));
#line 2976 "cplus.met"
                    _ptTree0=_ptRes1;
#line 2976 "cplus.met"
                }
#line 2976 "cplus.met"
                _retValue =_ptTree0;
#line 2976 "cplus.met"
                goto operator_function_name_ret;
#line 2976 "cplus.met"
            }
#line 2976 "cplus.met"
            break;
#line 2976 "cplus.met"
#line 2977 "cplus.met"
        case SUPE : 
#line 2977 "cplus.met"
            tokenAhead = 0 ;
#line 2977 "cplus.met"
            CommTerm();
#line 2977 "cplus.met"
#line 2977 "cplus.met"
            {
#line 2977 "cplus.met"
                PPTREE _ptTree0=0;
#line 2977 "cplus.met"
                {
#line 2977 "cplus.met"
                    PPTREE _ptRes1=0;
#line 2977 "cplus.met"
                    _ptRes1= MakeTree(OPERATOR, 1);
#line 2977 "cplus.met"
                    ReplaceTree(_ptRes1, 1, MakeString (">"));
#line 2977 "cplus.met"
                    _ptTree0=_ptRes1;
#line 2977 "cplus.met"
                }
#line 2977 "cplus.met"
                _retValue =_ptTree0;
#line 2977 "cplus.met"
                goto operator_function_name_ret;
#line 2977 "cplus.met"
            }
#line 2977 "cplus.met"
            break;
#line 2977 "cplus.met"
#line 2978 "cplus.met"
        case INFE : 
#line 2978 "cplus.met"
            tokenAhead = 0 ;
#line 2978 "cplus.met"
            CommTerm();
#line 2978 "cplus.met"
#line 2978 "cplus.met"
            {
#line 2978 "cplus.met"
                PPTREE _ptTree0=0;
#line 2978 "cplus.met"
                {
#line 2978 "cplus.met"
                    PPTREE _ptRes1=0;
#line 2978 "cplus.met"
                    _ptRes1= MakeTree(OPERATOR, 1);
#line 2978 "cplus.met"
                    ReplaceTree(_ptRes1, 1, MakeString ("<"));
#line 2978 "cplus.met"
                    _ptTree0=_ptRes1;
#line 2978 "cplus.met"
                }
#line 2978 "cplus.met"
                _retValue =_ptTree0;
#line 2978 "cplus.met"
                goto operator_function_name_ret;
#line 2978 "cplus.met"
            }
#line 2978 "cplus.met"
            break;
#line 2978 "cplus.met"
#line 2979 "cplus.met"
        case PLUSEGAL : 
#line 2979 "cplus.met"
            tokenAhead = 0 ;
#line 2979 "cplus.met"
            CommTerm();
#line 2979 "cplus.met"
#line 2979 "cplus.met"
            {
#line 2979 "cplus.met"
                PPTREE _ptTree0=0;
#line 2979 "cplus.met"
                {
#line 2979 "cplus.met"
                    PPTREE _ptRes1=0;
#line 2979 "cplus.met"
                    _ptRes1= MakeTree(OPERATOR, 1);
#line 2979 "cplus.met"
                    ReplaceTree(_ptRes1, 1, MakeString ("+="));
#line 2979 "cplus.met"
                    _ptTree0=_ptRes1;
#line 2979 "cplus.met"
                }
#line 2979 "cplus.met"
                _retValue =_ptTree0;
#line 2979 "cplus.met"
                goto operator_function_name_ret;
#line 2979 "cplus.met"
            }
#line 2979 "cplus.met"
            break;
#line 2979 "cplus.met"
#line 2980 "cplus.met"
        case TIREEGAL : 
#line 2980 "cplus.met"
            tokenAhead = 0 ;
#line 2980 "cplus.met"
            CommTerm();
#line 2980 "cplus.met"
#line 2980 "cplus.met"
            {
#line 2980 "cplus.met"
                PPTREE _ptTree0=0;
#line 2980 "cplus.met"
                {
#line 2980 "cplus.met"
                    PPTREE _ptRes1=0;
#line 2980 "cplus.met"
                    _ptRes1= MakeTree(OPERATOR, 1);
#line 2980 "cplus.met"
                    ReplaceTree(_ptRes1, 1, MakeString ("-="));
#line 2980 "cplus.met"
                    _ptTree0=_ptRes1;
#line 2980 "cplus.met"
                }
#line 2980 "cplus.met"
                _retValue =_ptTree0;
#line 2980 "cplus.met"
                goto operator_function_name_ret;
#line 2980 "cplus.met"
            }
#line 2980 "cplus.met"
            break;
#line 2980 "cplus.met"
#line 2981 "cplus.met"
        case ETOIEGAL : 
#line 2981 "cplus.met"
            tokenAhead = 0 ;
#line 2981 "cplus.met"
            CommTerm();
#line 2981 "cplus.met"
#line 2981 "cplus.met"
            {
#line 2981 "cplus.met"
                PPTREE _ptTree0=0;
#line 2981 "cplus.met"
                {
#line 2981 "cplus.met"
                    PPTREE _ptRes1=0;
#line 2981 "cplus.met"
                    _ptRes1= MakeTree(OPERATOR, 1);
#line 2981 "cplus.met"
                    ReplaceTree(_ptRes1, 1, MakeString ("*="));
#line 2981 "cplus.met"
                    _ptTree0=_ptRes1;
#line 2981 "cplus.met"
                }
#line 2981 "cplus.met"
                _retValue =_ptTree0;
#line 2981 "cplus.met"
                goto operator_function_name_ret;
#line 2981 "cplus.met"
            }
#line 2981 "cplus.met"
            break;
#line 2981 "cplus.met"
#line 2982 "cplus.met"
        case SLASEGAL : 
#line 2982 "cplus.met"
            tokenAhead = 0 ;
#line 2982 "cplus.met"
            CommTerm();
#line 2982 "cplus.met"
#line 2982 "cplus.met"
            {
#line 2982 "cplus.met"
                PPTREE _ptTree0=0;
#line 2982 "cplus.met"
                {
#line 2982 "cplus.met"
                    PPTREE _ptRes1=0;
#line 2982 "cplus.met"
                    _ptRes1= MakeTree(OPERATOR, 1);
#line 2982 "cplus.met"
                    ReplaceTree(_ptRes1, 1, MakeString ("/="));
#line 2982 "cplus.met"
                    _ptTree0=_ptRes1;
#line 2982 "cplus.met"
                }
#line 2982 "cplus.met"
                _retValue =_ptTree0;
#line 2982 "cplus.met"
                goto operator_function_name_ret;
#line 2982 "cplus.met"
            }
#line 2982 "cplus.met"
            break;
#line 2982 "cplus.met"
#line 2983 "cplus.met"
        case POURCEGAL : 
#line 2983 "cplus.met"
            tokenAhead = 0 ;
#line 2983 "cplus.met"
            CommTerm();
#line 2983 "cplus.met"
#line 2983 "cplus.met"
            {
#line 2983 "cplus.met"
                PPTREE _ptTree0=0;
#line 2983 "cplus.met"
                {
#line 2983 "cplus.met"
                    PPTREE _ptRes1=0;
#line 2983 "cplus.met"
                    _ptRes1= MakeTree(OPERATOR, 1);
#line 2983 "cplus.met"
                    ReplaceTree(_ptRes1, 1, MakeString ("%="));
#line 2983 "cplus.met"
                    _ptTree0=_ptRes1;
#line 2983 "cplus.met"
                }
#line 2983 "cplus.met"
                _retValue =_ptTree0;
#line 2983 "cplus.met"
                goto operator_function_name_ret;
#line 2983 "cplus.met"
            }
#line 2983 "cplus.met"
            break;
#line 2983 "cplus.met"
#line 2984 "cplus.met"
        case CHAPEGAL : 
#line 2984 "cplus.met"
            tokenAhead = 0 ;
#line 2984 "cplus.met"
            CommTerm();
#line 2984 "cplus.met"
#line 2984 "cplus.met"
            {
#line 2984 "cplus.met"
                PPTREE _ptTree0=0;
#line 2984 "cplus.met"
                {
#line 2984 "cplus.met"
                    PPTREE _ptRes1=0;
#line 2984 "cplus.met"
                    _ptRes1= MakeTree(OPERATOR, 1);
#line 2984 "cplus.met"
                    ReplaceTree(_ptRes1, 1, MakeString ("^="));
#line 2984 "cplus.met"
                    _ptTree0=_ptRes1;
#line 2984 "cplus.met"
                }
#line 2984 "cplus.met"
                _retValue =_ptTree0;
#line 2984 "cplus.met"
                goto operator_function_name_ret;
#line 2984 "cplus.met"
            }
#line 2984 "cplus.met"
            break;
#line 2984 "cplus.met"
#line 2985 "cplus.met"
        case ETCOEGAL : 
#line 2985 "cplus.met"
            tokenAhead = 0 ;
#line 2985 "cplus.met"
            CommTerm();
#line 2985 "cplus.met"
#line 2985 "cplus.met"
            {
#line 2985 "cplus.met"
                PPTREE _ptTree0=0;
#line 2985 "cplus.met"
                {
#line 2985 "cplus.met"
                    PPTREE _ptRes1=0;
#line 2985 "cplus.met"
                    _ptRes1= MakeTree(OPERATOR, 1);
#line 2985 "cplus.met"
                    ReplaceTree(_ptRes1, 1, MakeString ("&="));
#line 2985 "cplus.met"
                    _ptTree0=_ptRes1;
#line 2985 "cplus.met"
                }
#line 2985 "cplus.met"
                _retValue =_ptTree0;
#line 2985 "cplus.met"
                goto operator_function_name_ret;
#line 2985 "cplus.met"
            }
#line 2985 "cplus.met"
            break;
#line 2985 "cplus.met"
#line 2986 "cplus.met"
        case VBAREGAL : 
#line 2986 "cplus.met"
            tokenAhead = 0 ;
#line 2986 "cplus.met"
            CommTerm();
#line 2986 "cplus.met"
#line 2986 "cplus.met"
            {
#line 2986 "cplus.met"
                PPTREE _ptTree0=0;
#line 2986 "cplus.met"
                {
#line 2986 "cplus.met"
                    PPTREE _ptRes1=0;
#line 2986 "cplus.met"
                    _ptRes1= MakeTree(OPERATOR, 1);
#line 2986 "cplus.met"
                    ReplaceTree(_ptRes1, 1, MakeString ("|="));
#line 2986 "cplus.met"
                    _ptTree0=_ptRes1;
#line 2986 "cplus.met"
                }
#line 2986 "cplus.met"
                _retValue =_ptTree0;
#line 2986 "cplus.met"
                goto operator_function_name_ret;
#line 2986 "cplus.met"
            }
#line 2986 "cplus.met"
            break;
#line 2986 "cplus.met"
#line 2987 "cplus.met"
        case EXCLEGAL : 
#line 2987 "cplus.met"
            tokenAhead = 0 ;
#line 2987 "cplus.met"
            CommTerm();
#line 2987 "cplus.met"
#line 2987 "cplus.met"
            {
#line 2987 "cplus.met"
                PPTREE _ptTree0=0;
#line 2987 "cplus.met"
                {
#line 2987 "cplus.met"
                    PPTREE _ptRes1=0;
#line 2987 "cplus.met"
                    _ptRes1= MakeTree(OPERATOR, 1);
#line 2987 "cplus.met"
                    ReplaceTree(_ptRes1, 1, MakeString ("!="));
#line 2987 "cplus.met"
                    _ptTree0=_ptRes1;
#line 2987 "cplus.met"
                }
#line 2987 "cplus.met"
                _retValue =_ptTree0;
#line 2987 "cplus.met"
                goto operator_function_name_ret;
#line 2987 "cplus.met"
            }
#line 2987 "cplus.met"
            break;
#line 2987 "cplus.met"
#line 2988 "cplus.met"
        case EGALEGAL : 
#line 2988 "cplus.met"
            tokenAhead = 0 ;
#line 2988 "cplus.met"
            CommTerm();
#line 2988 "cplus.met"
#line 2988 "cplus.met"
            {
#line 2988 "cplus.met"
                PPTREE _ptTree0=0;
#line 2988 "cplus.met"
                {
#line 2988 "cplus.met"
                    PPTREE _ptRes1=0;
#line 2988 "cplus.met"
                    _ptRes1= MakeTree(OPERATOR, 1);
#line 2988 "cplus.met"
                    ReplaceTree(_ptRes1, 1, MakeString ("=="));
#line 2988 "cplus.met"
                    _ptTree0=_ptRes1;
#line 2988 "cplus.met"
                }
#line 2988 "cplus.met"
                _retValue =_ptTree0;
#line 2988 "cplus.met"
                goto operator_function_name_ret;
#line 2988 "cplus.met"
            }
#line 2988 "cplus.met"
            break;
#line 2988 "cplus.met"
#line 2989 "cplus.met"
        case INFEEGAL : 
#line 2989 "cplus.met"
            tokenAhead = 0 ;
#line 2989 "cplus.met"
            CommTerm();
#line 2989 "cplus.met"
#line 2989 "cplus.met"
            {
#line 2989 "cplus.met"
                PPTREE _ptTree0=0;
#line 2989 "cplus.met"
                {
#line 2989 "cplus.met"
                    PPTREE _ptRes1=0;
#line 2989 "cplus.met"
                    _ptRes1= MakeTree(OPERATOR, 1);
#line 2989 "cplus.met"
                    ReplaceTree(_ptRes1, 1, MakeString ("<="));
#line 2989 "cplus.met"
                    _ptTree0=_ptRes1;
#line 2989 "cplus.met"
                }
#line 2989 "cplus.met"
                _retValue =_ptTree0;
#line 2989 "cplus.met"
                goto operator_function_name_ret;
#line 2989 "cplus.met"
            }
#line 2989 "cplus.met"
            break;
#line 2989 "cplus.met"
#line 2990 "cplus.met"
        case SUPEEGAL : 
#line 2990 "cplus.met"
            tokenAhead = 0 ;
#line 2990 "cplus.met"
            CommTerm();
#line 2990 "cplus.met"
#line 2990 "cplus.met"
            {
#line 2990 "cplus.met"
                PPTREE _ptTree0=0;
#line 2990 "cplus.met"
                {
#line 2990 "cplus.met"
                    PPTREE _ptRes1=0;
#line 2990 "cplus.met"
                    _ptRes1= MakeTree(OPERATOR, 1);
#line 2990 "cplus.met"
                    ReplaceTree(_ptRes1, 1, MakeString (">="));
#line 2990 "cplus.met"
                    _ptTree0=_ptRes1;
#line 2990 "cplus.met"
                }
#line 2990 "cplus.met"
                _retValue =_ptTree0;
#line 2990 "cplus.met"
                goto operator_function_name_ret;
#line 2990 "cplus.met"
            }
#line 2990 "cplus.met"
            break;
#line 2990 "cplus.met"
#line 2991 "cplus.met"
        case INFEINFE : 
#line 2991 "cplus.met"
            tokenAhead = 0 ;
#line 2991 "cplus.met"
            CommTerm();
#line 2991 "cplus.met"
#line 2991 "cplus.met"
            {
#line 2991 "cplus.met"
                PPTREE _ptTree0=0;
#line 2991 "cplus.met"
                {
#line 2991 "cplus.met"
                    PPTREE _ptRes1=0;
#line 2991 "cplus.met"
                    _ptRes1= MakeTree(OPERATOR, 1);
#line 2991 "cplus.met"
                    ReplaceTree(_ptRes1, 1, MakeString ("<<"));
#line 2991 "cplus.met"
                    _ptTree0=_ptRes1;
#line 2991 "cplus.met"
                }
#line 2991 "cplus.met"
                _retValue =_ptTree0;
#line 2991 "cplus.met"
                goto operator_function_name_ret;
#line 2991 "cplus.met"
            }
#line 2991 "cplus.met"
            break;
#line 2991 "cplus.met"
#line 2992 "cplus.met"
        case SUPESUPE : 
#line 2992 "cplus.met"
            tokenAhead = 0 ;
#line 2992 "cplus.met"
            CommTerm();
#line 2992 "cplus.met"
#line 2992 "cplus.met"
            {
#line 2992 "cplus.met"
                PPTREE _ptTree0=0;
#line 2992 "cplus.met"
                {
#line 2992 "cplus.met"
                    PPTREE _ptRes1=0;
#line 2992 "cplus.met"
                    _ptRes1= MakeTree(OPERATOR, 1);
#line 2992 "cplus.met"
                    ReplaceTree(_ptRes1, 1, MakeString (">>"));
#line 2992 "cplus.met"
                    _ptTree0=_ptRes1;
#line 2992 "cplus.met"
                }
#line 2992 "cplus.met"
                _retValue =_ptTree0;
#line 2992 "cplus.met"
                goto operator_function_name_ret;
#line 2992 "cplus.met"
            }
#line 2992 "cplus.met"
            break;
#line 2992 "cplus.met"
#line 2993 "cplus.met"
        case INFEINFEEGAL : 
#line 2993 "cplus.met"
            tokenAhead = 0 ;
#line 2993 "cplus.met"
            CommTerm();
#line 2993 "cplus.met"
#line 2993 "cplus.met"
            {
#line 2993 "cplus.met"
                PPTREE _ptTree0=0;
#line 2993 "cplus.met"
                {
#line 2993 "cplus.met"
                    PPTREE _ptRes1=0;
#line 2993 "cplus.met"
                    _ptRes1= MakeTree(OPERATOR, 1);
#line 2993 "cplus.met"
                    ReplaceTree(_ptRes1, 1, MakeString ("<<="));
#line 2993 "cplus.met"
                    _ptTree0=_ptRes1;
#line 2993 "cplus.met"
                }
#line 2993 "cplus.met"
                _retValue =_ptTree0;
#line 2993 "cplus.met"
                goto operator_function_name_ret;
#line 2993 "cplus.met"
            }
#line 2993 "cplus.met"
            break;
#line 2993 "cplus.met"
#line 2994 "cplus.met"
        case SUPESUPEEGAL : 
#line 2994 "cplus.met"
            tokenAhead = 0 ;
#line 2994 "cplus.met"
            CommTerm();
#line 2994 "cplus.met"
#line 2994 "cplus.met"
            {
#line 2994 "cplus.met"
                PPTREE _ptTree0=0;
#line 2994 "cplus.met"
                {
#line 2994 "cplus.met"
                    PPTREE _ptRes1=0;
#line 2994 "cplus.met"
                    _ptRes1= MakeTree(OPERATOR, 1);
#line 2994 "cplus.met"
                    ReplaceTree(_ptRes1, 1, MakeString (">>="));
#line 2994 "cplus.met"
                    _ptTree0=_ptRes1;
#line 2994 "cplus.met"
                }
#line 2994 "cplus.met"
                _retValue =_ptTree0;
#line 2994 "cplus.met"
                goto operator_function_name_ret;
#line 2994 "cplus.met"
            }
#line 2994 "cplus.met"
            break;
#line 2994 "cplus.met"
#line 2995 "cplus.met"
        case ETCOETCO : 
#line 2995 "cplus.met"
            tokenAhead = 0 ;
#line 2995 "cplus.met"
            CommTerm();
#line 2995 "cplus.met"
#line 2995 "cplus.met"
            {
#line 2995 "cplus.met"
                PPTREE _ptTree0=0;
#line 2995 "cplus.met"
                {
#line 2995 "cplus.met"
                    PPTREE _ptRes1=0;
#line 2995 "cplus.met"
                    _ptRes1= MakeTree(OPERATOR, 1);
#line 2995 "cplus.met"
                    ReplaceTree(_ptRes1, 1, MakeString ("&&"));
#line 2995 "cplus.met"
                    _ptTree0=_ptRes1;
#line 2995 "cplus.met"
                }
#line 2995 "cplus.met"
                _retValue =_ptTree0;
#line 2995 "cplus.met"
                goto operator_function_name_ret;
#line 2995 "cplus.met"
            }
#line 2995 "cplus.met"
            break;
#line 2995 "cplus.met"
#line 2996 "cplus.met"
        case VBARVBAR : 
#line 2996 "cplus.met"
            tokenAhead = 0 ;
#line 2996 "cplus.met"
            CommTerm();
#line 2996 "cplus.met"
#line 2996 "cplus.met"
            {
#line 2996 "cplus.met"
                PPTREE _ptTree0=0;
#line 2996 "cplus.met"
                {
#line 2996 "cplus.met"
                    PPTREE _ptRes1=0;
#line 2996 "cplus.met"
                    _ptRes1= MakeTree(OPERATOR, 1);
#line 2996 "cplus.met"
                    ReplaceTree(_ptRes1, 1, MakeString ("||"));
#line 2996 "cplus.met"
                    _ptTree0=_ptRes1;
#line 2996 "cplus.met"
                }
#line 2996 "cplus.met"
                _retValue =_ptTree0;
#line 2996 "cplus.met"
                goto operator_function_name_ret;
#line 2996 "cplus.met"
            }
#line 2996 "cplus.met"
            break;
#line 2996 "cplus.met"
#line 2997 "cplus.met"
        case PLUSPLUS : 
#line 2997 "cplus.met"
            tokenAhead = 0 ;
#line 2997 "cplus.met"
            CommTerm();
#line 2997 "cplus.met"
#line 2997 "cplus.met"
            {
#line 2997 "cplus.met"
                PPTREE _ptTree0=0;
#line 2997 "cplus.met"
                {
#line 2997 "cplus.met"
                    PPTREE _ptRes1=0;
#line 2997 "cplus.met"
                    _ptRes1= MakeTree(OPERATOR, 1);
#line 2997 "cplus.met"
                    ReplaceTree(_ptRes1, 1, MakeString ("++"));
#line 2997 "cplus.met"
                    _ptTree0=_ptRes1;
#line 2997 "cplus.met"
                }
#line 2997 "cplus.met"
                _retValue =_ptTree0;
#line 2997 "cplus.met"
                goto operator_function_name_ret;
#line 2997 "cplus.met"
            }
#line 2997 "cplus.met"
            break;
#line 2997 "cplus.met"
#line 2998 "cplus.met"
        case TIRETIRE : 
#line 2998 "cplus.met"
            tokenAhead = 0 ;
#line 2998 "cplus.met"
            CommTerm();
#line 2998 "cplus.met"
#line 2998 "cplus.met"
            {
#line 2998 "cplus.met"
                PPTREE _ptTree0=0;
#line 2998 "cplus.met"
                {
#line 2998 "cplus.met"
                    PPTREE _ptRes1=0;
#line 2998 "cplus.met"
                    _ptRes1= MakeTree(OPERATOR, 1);
#line 2998 "cplus.met"
                    ReplaceTree(_ptRes1, 1, MakeString ("--"));
#line 2998 "cplus.met"
                    _ptTree0=_ptRes1;
#line 2998 "cplus.met"
                }
#line 2998 "cplus.met"
                _retValue =_ptTree0;
#line 2998 "cplus.met"
                goto operator_function_name_ret;
#line 2998 "cplus.met"
            }
#line 2998 "cplus.met"
            break;
#line 2998 "cplus.met"
#line 2999 "cplus.met"
        case VIRG : 
#line 2999 "cplus.met"
            tokenAhead = 0 ;
#line 2999 "cplus.met"
            CommTerm();
#line 2999 "cplus.met"
#line 2999 "cplus.met"
            {
#line 2999 "cplus.met"
                PPTREE _ptTree0=0;
#line 2999 "cplus.met"
                {
#line 2999 "cplus.met"
                    PPTREE _ptRes1=0;
#line 2999 "cplus.met"
                    _ptRes1= MakeTree(OPERATOR, 1);
#line 2999 "cplus.met"
                    ReplaceTree(_ptRes1, 1, MakeString (","));
#line 2999 "cplus.met"
                    _ptTree0=_ptRes1;
#line 2999 "cplus.met"
                }
#line 2999 "cplus.met"
                _retValue =_ptTree0;
#line 2999 "cplus.met"
                goto operator_function_name_ret;
#line 2999 "cplus.met"
            }
#line 2999 "cplus.met"
            break;
#line 2999 "cplus.met"
#line 3000 "cplus.met"
        case TIRESUPE : 
#line 3000 "cplus.met"
            tokenAhead = 0 ;
#line 3000 "cplus.met"
            CommTerm();
#line 3000 "cplus.met"
#line 3000 "cplus.met"
            {
#line 3000 "cplus.met"
                PPTREE _ptTree0=0;
#line 3000 "cplus.met"
                {
#line 3000 "cplus.met"
                    PPTREE _ptRes1=0;
#line 3000 "cplus.met"
                    _ptRes1= MakeTree(OPERATOR, 1);
#line 3000 "cplus.met"
                    ReplaceTree(_ptRes1, 1, MakeString ("->"));
#line 3000 "cplus.met"
                    _ptTree0=_ptRes1;
#line 3000 "cplus.met"
                }
#line 3000 "cplus.met"
                _retValue =_ptTree0;
#line 3000 "cplus.met"
                goto operator_function_name_ret;
#line 3000 "cplus.met"
            }
#line 3000 "cplus.met"
            break;
#line 3000 "cplus.met"
#line 3001 "cplus.met"
        case TIRESUPEETOI : 
#line 3001 "cplus.met"
            tokenAhead = 0 ;
#line 3001 "cplus.met"
            CommTerm();
#line 3001 "cplus.met"
#line 3001 "cplus.met"
            {
#line 3001 "cplus.met"
                PPTREE _ptTree0=0;
#line 3001 "cplus.met"
                {
#line 3001 "cplus.met"
                    PPTREE _ptRes1=0;
#line 3001 "cplus.met"
                    _ptRes1= MakeTree(OPERATOR, 1);
#line 3001 "cplus.met"
                    ReplaceTree(_ptRes1, 1, MakeString ("->*"));
#line 3001 "cplus.met"
                    _ptTree0=_ptRes1;
#line 3001 "cplus.met"
                }
#line 3001 "cplus.met"
                _retValue =_ptTree0;
#line 3001 "cplus.met"
                goto operator_function_name_ret;
#line 3001 "cplus.met"
            }
#line 3001 "cplus.met"
            break;
#line 3001 "cplus.met"
#line 3004 "cplus.met"
        case POUV : 
#line 3004 "cplus.met"
            tokenAhead = 0 ;
#line 3004 "cplus.met"
            CommTerm();
#line 3004 "cplus.met"
#line 3003 "cplus.met"
#line 3004 "cplus.met"
            (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3004 "cplus.met"
            if (  !SEE_TOKEN( PFER,")") || !(CommTerm(),1)) {
#line 3004 "cplus.met"
                MulFreeTree(3,list,retTree,valTree);
                TOKEN_EXIT(operator_function_name_exit,")")
#line 3004 "cplus.met"
            } else {
#line 3004 "cplus.met"
                tokenAhead = 0 ;
#line 3004 "cplus.met"
            }
#line 3004 "cplus.met"
#line 3005 "cplus.met"
            {
#line 3005 "cplus.met"
                PPTREE _ptTree0=0;
#line 3005 "cplus.met"
                {
#line 3005 "cplus.met"
                    PPTREE _ptRes1=0;
#line 3005 "cplus.met"
                    _ptRes1= MakeTree(OPERATOR, 1);
#line 3005 "cplus.met"
                    ReplaceTree(_ptRes1, 1, MakeString ("()"));
#line 3005 "cplus.met"
                    _ptTree0=_ptRes1;
#line 3005 "cplus.met"
                }
#line 3005 "cplus.met"
                _retValue =_ptTree0;
#line 3005 "cplus.met"
                goto operator_function_name_ret;
#line 3005 "cplus.met"
            }
#line 3005 "cplus.met"
#line 3005 "cplus.met"
            break;
#line 3005 "cplus.met"
#line 3009 "cplus.met"
        case COUV : 
#line 3009 "cplus.met"
            tokenAhead = 0 ;
#line 3009 "cplus.met"
            CommTerm();
#line 3009 "cplus.met"
#line 3008 "cplus.met"
#line 3009 "cplus.met"
            (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3009 "cplus.met"
            if (  !SEE_TOKEN( CFER,"]") || !(CommTerm(),1)) {
#line 3009 "cplus.met"
                MulFreeTree(3,list,retTree,valTree);
                TOKEN_EXIT(operator_function_name_exit,"]")
#line 3009 "cplus.met"
            } else {
#line 3009 "cplus.met"
                tokenAhead = 0 ;
#line 3009 "cplus.met"
            }
#line 3009 "cplus.met"
#line 3010 "cplus.met"
            {
#line 3010 "cplus.met"
                PPTREE _ptTree0=0;
#line 3010 "cplus.met"
                {
#line 3010 "cplus.met"
                    PPTREE _ptRes1=0;
#line 3010 "cplus.met"
                    _ptRes1= MakeTree(OPERATOR, 1);
#line 3010 "cplus.met"
                    ReplaceTree(_ptRes1, 1, MakeString ("[]"));
#line 3010 "cplus.met"
                    _ptTree0=_ptRes1;
#line 3010 "cplus.met"
                }
#line 3010 "cplus.met"
                _retValue =_ptTree0;
#line 3010 "cplus.met"
                goto operator_function_name_ret;
#line 3010 "cplus.met"
            }
#line 3010 "cplus.met"
#line 3010 "cplus.met"
            break;
#line 3010 "cplus.met"
#line 3010 "cplus.met"
        default : 
#line 3010 "cplus.met"
#line 3010 "cplus.met"
            break;
#line 3010 "cplus.met"
    }
#line 3010 "cplus.met"
#line 3014 "cplus.met"
    if (NPUSH_CALL_AFF_VERIF(retTree = ,_Tak(const_or_volatile), 28, cplus)){
#line 3014 "cplus.met"
#line 3015 "cplus.met"
        {
#line 3015 "cplus.met"
            PPTREE _ptRes0=0;
#line 3015 "cplus.met"
            _ptRes0= MakeTree(FOR_DECLARATION, 3);
#line 3015 "cplus.met"
            ReplaceTree(_ptRes0, 1, retTree );
#line 3015 "cplus.met"
            retTree=_ptRes0;
#line 3015 "cplus.met"
        }
#line 3015 "cplus.met"
    } else {
#line 3015 "cplus.met"
#line 3017 "cplus.met"
        {
#line 3017 "cplus.met"
            PPTREE _ptRes0=0;
#line 3017 "cplus.met"
            _ptRes0= MakeTree(FOR_DECLARATION, 3);
#line 3017 "cplus.met"
            retTree=_ptRes0;
#line 3017 "cplus.met"
        }
#line 3017 "cplus.met"
    }
#line 3017 "cplus.met"
#line 3018 "cplus.met"
    {
#line 3018 "cplus.met"
        PPTREE _ptTree0=0;
#line 3018 "cplus.met"
        if ( (_ptTree0=NQUICK_CALL(_Tak(type_specifier)(error_free), 141, cplus))== (PPTREE) -1 ) {
#line 3018 "cplus.met"
            MulFreeTree(4,_ptTree0,list,retTree,valTree);
            PROG_EXIT(operator_function_name_exit,"operator_function_name")
#line 3018 "cplus.met"
        }
#line 3018 "cplus.met"
        ReplaceTree(retTree , 2 , _ptTree0);
#line 3018 "cplus.met"
    }
#line 3018 "cplus.met"
#line 3019 "cplus.met"
    if (NPUSH_CALL_AFF_VERIF(valTree = ,_Tak(ptr_operator), 111, cplus)){
#line 3019 "cplus.met"
#line 3020 "cplus.met"
#line 3021 "cplus.met"
        list =AddList(list ,valTree );
#line 3021 "cplus.met"
#line 3022 "cplus.met"
        ReplaceTree(retTree ,3 ,list );
#line 3022 "cplus.met"
#line 3022 "cplus.met"
#line 3022 "cplus.met"
    }
#line 3022 "cplus.met"
#line 3024 "cplus.met"
    {
#line 3024 "cplus.met"
        PPTREE _ptTree0=0;
#line 3024 "cplus.met"
        {
#line 3024 "cplus.met"
            PPTREE _ptRes1=0;
#line 3024 "cplus.met"
            _ptRes1= MakeTree(OPERATOR, 1);
#line 3024 "cplus.met"
            ReplaceTree(_ptRes1, 1, retTree );
#line 3024 "cplus.met"
            _ptTree0=_ptRes1;
#line 3024 "cplus.met"
        }
#line 3024 "cplus.met"
        _retValue =_ptTree0;
#line 3024 "cplus.met"
        goto operator_function_name_ret;
#line 3024 "cplus.met"
    }
#line 3024 "cplus.met"
#line 3024 "cplus.met"
#line 3024 "cplus.met"

#line 3025 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 3025 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 3025 "cplus.met"
return((PPTREE) 0);
#line 3025 "cplus.met"

#line 3025 "cplus.met"
operator_function_name_exit :
#line 3025 "cplus.met"

#line 3025 "cplus.met"
    _Debug = TRACE_RULE("operator_function_name",TRACE_EXIT,(PPTREE)0);
#line 3025 "cplus.met"
    _funcLevel--;
#line 3025 "cplus.met"
    return((PPTREE) -1) ;
#line 3025 "cplus.met"

#line 3025 "cplus.met"
operator_function_name_ret :
#line 3025 "cplus.met"
    
#line 3025 "cplus.met"
    _Debug = TRACE_RULE("operator_function_name",TRACE_RETURN,_retValue);
#line 3025 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 3025 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 3025 "cplus.met"
    return _retValue ;
#line 3025 "cplus.met"
}
#line 3025 "cplus.met"

#line 3025 "cplus.met"
