/*************************************************************************/
/*                                                                       */
/*        Produced by MetaGen version 2.0  -    1989-2006                 */
/*       Syntaxic Analyzer Meta Generator developped by                  */
/*                  Eric Lavillonniere                                   */
/*                                                                       */
/*************************************************************************/

#include "token.h"
#include "cplus.h"


#line 3440 "cplus.met"
PPTREE cplus::ident_mul ( int error_free)
#line 3440 "cplus.met"
{
#line 3440 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 3440 "cplus.met"
    int _value,_nbPre = 0 ;
#line 3440 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 3440 "cplus.met"
    int _Debug = TRACE_RULE("ident_mul",TRACE_ENTER,(PPTREE)0);
#line 3440 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 3440 "cplus.met"
#line 3441 "cplus.met"
    if ( (NQUICK_CALL(_Tak(complete_class_name)(error_free), 31, cplus))== (PPTREE) -1 ) {
#line 3441 "cplus.met"
            PROG_EXIT(ident_mul_exit,"ident_mul")
#line 3441 "cplus.met"
    }
#line 3441 "cplus.met"
#line 3442 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3442 "cplus.met"
    switch( lexEl.Value) {
#line 3442 "cplus.met"
#line 3442 "cplus.met"
        case ETOI : 
#line 3442 "cplus.met"
#line 3442 "cplus.met"
            break;
#line 3442 "cplus.met"
#line 3444 "cplus.met"
        case META : 
#line 3444 "cplus.met"
        case IDENT : 
#line 3444 "cplus.met"
#line 3444 "cplus.met"
            break;
#line 3444 "cplus.met"
        default :
#line 3444 "cplus.met"
            CASE_EXIT(ident_mul_exit,"either * or IDENT")
#line 3444 "cplus.met"
            break;
#line 3444 "cplus.met"
    }
#line 3444 "cplus.met"
#line 3444 "cplus.met"
#line 3445 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 3445 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 3445 "cplus.met"
return((PPTREE) 0);
#line 3445 "cplus.met"

#line 3445 "cplus.met"
ident_mul_exit :
#line 3445 "cplus.met"

#line 3445 "cplus.met"
    _Debug = TRACE_RULE("ident_mul",TRACE_EXIT,(PPTREE)0);
#line 3445 "cplus.met"
    _funcLevel--;
#line 3445 "cplus.met"
    return((PPTREE) -1) ;
#line 3445 "cplus.met"

#line 3445 "cplus.met"
ident_mul_ret :
#line 3445 "cplus.met"
    
#line 3445 "cplus.met"
    _Debug = TRACE_RULE("ident_mul",TRACE_RETURN,_retValue);
#line 3445 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 3445 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 3445 "cplus.met"
    return _retValue ;
#line 3445 "cplus.met"
}
#line 3445 "cplus.met"

#line 3445 "cplus.met"
#line 1540 "cplus.met"
PPTREE cplus::include_dir ( int error_free)
#line 1540 "cplus.met"
{
#line 1540 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 1540 "cplus.met"
    int _value,_nbPre = 0 ;
#line 1540 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 1540 "cplus.met"
    int _Debug = TRACE_RULE("include_dir",TRACE_ENTER,(PPTREE)0);
#line 1540 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 1540 "cplus.met"
#line 1541 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 1541 "cplus.met"
    if ( ! TERM_OR_META(INCLUDE_DIR,"INCLUDE_DIR") || !(CommTerm(),1)) {
#line 1541 "cplus.met"
            TOKEN_EXIT(include_dir_exit,"INCLUDE_DIR")
#line 1541 "cplus.met"
    } else {
#line 1541 "cplus.met"
        tokenAhead = 0 ;
#line 1541 "cplus.met"
    }
#line 1541 "cplus.met"
#line 1542 "cplus.met"
    (tokenAhead == 6|| (LexInclude(),TRACE_LEX(1)));
#line 1542 "cplus.met"
    switch( lexEl.Value) {
#line 1542 "cplus.met"
#line 1543 "cplus.met"
        case META : 
#line 1543 "cplus.met"
        case INCLUDE_SYS : 
#line 1543 "cplus.met"
#line 1544 "cplus.met"
#line 1545 "cplus.met"
             /* ReadInclude(stringlex,0)*/;
#line 1545 "cplus.met"
#line 1546 "cplus.met"
            {
#line 1546 "cplus.met"
                PPTREE _ptTree0=0;
#line 1546 "cplus.met"
                {
#line 1546 "cplus.met"
                    PPTREE _ptTree1=0,_ptRes1=0;
#line 1546 "cplus.met"
                    _ptRes1= MakeTree(INCLUDE_DIR, 1);
#line 1546 "cplus.met"
                    (tokenAhead == 6|| (LexInclude(),TRACE_LEX(1)));
#line 1546 "cplus.met"
                    if ( ! TERM_OR_META(INCLUDE_SYS,"INCLUDE_SYS") || !(BUILD_TERM_META(_ptTree1))) {
#line 1546 "cplus.met"
                        MulFreeTree(3,_ptRes1,_ptTree1,_ptTree0);
                        TOKEN_EXIT(include_dir_exit,"INCLUDE_SYS")
#line 1546 "cplus.met"
                    } else {
#line 1546 "cplus.met"
                        tokenAhead = 0 ;
#line 1546 "cplus.met"
                    }
#line 1546 "cplus.met"
                    ReplaceTree(_ptRes1, 1, _ptTree1);
#line 1546 "cplus.met"
                    _ptTree0=_ptRes1;
#line 1546 "cplus.met"
                }
#line 1546 "cplus.met"
                _retValue =_ptTree0;
#line 1546 "cplus.met"
                goto include_dir_ret;
#line 1546 "cplus.met"
            }
#line 1546 "cplus.met"
#line 1546 "cplus.met"
            break;
#line 1546 "cplus.met"
#line 1548 "cplus.met"
        case INCLUDE_LOCAL : 
#line 1548 "cplus.met"
#line 1549 "cplus.met"
#line 1550 "cplus.met"
             /* ReadInclude(stringlex,1)*/;
#line 1550 "cplus.met"
#line 1551 "cplus.met"
            {
#line 1551 "cplus.met"
                PPTREE _ptTree0=0;
#line 1551 "cplus.met"
                {
#line 1551 "cplus.met"
                    PPTREE _ptTree1=0,_ptRes1=0;
#line 1551 "cplus.met"
                    _ptRes1= MakeTree(INCLUDE_DIR, 1);
#line 1551 "cplus.met"
                    {
#line 1551 "cplus.met"
                        PPTREE _ptTree2=0,_ptRes2=0;
#line 1551 "cplus.met"
                        _ptRes2= MakeTree(STRING, 1);
#line 1551 "cplus.met"
                        (tokenAhead == 6|| (LexInclude(),TRACE_LEX(1)));
#line 1551 "cplus.met"
                        if ( ! TERM_OR_META(INCLUDE_LOCAL,"INCLUDE_LOCAL") || !(BUILD_TERM_META(_ptTree2))) {
#line 1551 "cplus.met"
                            MulFreeTree(5,_ptRes2,_ptTree2,_ptRes1,_ptTree1,_ptTree0);
                            TOKEN_EXIT(include_dir_exit,"INCLUDE_LOCAL")
#line 1551 "cplus.met"
                        } else {
#line 1551 "cplus.met"
                            tokenAhead = 0 ;
#line 1551 "cplus.met"
                        }
#line 1551 "cplus.met"
                        ReplaceTree(_ptRes2, 1, _ptTree2);
#line 1551 "cplus.met"
                        _ptTree1=_ptRes2;
#line 1551 "cplus.met"
                    }
#line 1551 "cplus.met"
                    ReplaceTree(_ptRes1, 1, _ptTree1);
#line 1551 "cplus.met"
                    _ptTree0=_ptRes1;
#line 1551 "cplus.met"
                }
#line 1551 "cplus.met"
                _retValue =_ptTree0;
#line 1551 "cplus.met"
                goto include_dir_ret;
#line 1551 "cplus.met"
            }
#line 1551 "cplus.met"
#line 1551 "cplus.met"
            break;
#line 1551 "cplus.met"
        default :
#line 1551 "cplus.met"
            CASE_EXIT(include_dir_exit,"either INCLUDE_SYS or INCLUDE_LOCAL")
#line 1551 "cplus.met"
            break;
#line 1551 "cplus.met"
    }
#line 1551 "cplus.met"
#line 1551 "cplus.met"
#line 1553 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1553 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 1553 "cplus.met"
return((PPTREE) 0);
#line 1553 "cplus.met"

#line 1553 "cplus.met"
include_dir_exit :
#line 1553 "cplus.met"

#line 1553 "cplus.met"
    _Debug = TRACE_RULE("include_dir",TRACE_EXIT,(PPTREE)0);
#line 1553 "cplus.met"
    _funcLevel--;
#line 1553 "cplus.met"
    return((PPTREE) -1) ;
#line 1553 "cplus.met"

#line 1553 "cplus.met"
include_dir_ret :
#line 1553 "cplus.met"
    
#line 1553 "cplus.met"
    _Debug = TRACE_RULE("include_dir",TRACE_RETURN,_retValue);
#line 1553 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1553 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 1553 "cplus.met"
    return _retValue ;
#line 1553 "cplus.met"
}
#line 1553 "cplus.met"

#line 1553 "cplus.met"
#line 2776 "cplus.met"
PPTREE cplus::inclusive_or_expression ( int error_free)
#line 2776 "cplus.met"
{
#line 2776 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 2776 "cplus.met"
    int _value,_nbPre = 0 ;
#line 2776 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 2776 "cplus.met"
    int _Debug = TRACE_RULE("inclusive_or_expression",TRACE_ENTER,(PPTREE)0);
#line 2776 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 2776 "cplus.met"
#line 2776 "cplus.met"
    PPTREE expTree = (PPTREE) 0;
#line 2776 "cplus.met"
#line 2778 "cplus.met"
    if ( (expTree=NQUICK_CALL(_Tak(exclusive_or_expression)(error_free), 65, cplus))== (PPTREE) -1 ) {
#line 2778 "cplus.met"
        MulFreeTree(1,expTree);
        PROG_EXIT(inclusive_or_expression_exit,"inclusive_or_expression")
#line 2778 "cplus.met"
    }
#line 2778 "cplus.met"
#line 2779 "cplus.met"
    while ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN(VBAR,"|") && (tokenAhead = 0,CommTerm(),1)) { 
#line 2779 "cplus.met"
#line 2780 "cplus.met"
        {
#line 2780 "cplus.met"
            PPTREE _ptTree0=0,_ptRes0=0;
#line 2780 "cplus.met"
            _ptRes0= MakeTree(LOR, 2);
#line 2780 "cplus.met"
            ReplaceTree(_ptRes0, 1, expTree );
#line 2780 "cplus.met"
            if ( (_ptTree0=NQUICK_CALL(_Tak(exclusive_or_expression)(error_free), 65, cplus))== (PPTREE) -1 ) {
#line 2780 "cplus.met"
                MulFreeTree(3,_ptRes0,_ptTree0,expTree);
                PROG_EXIT(inclusive_or_expression_exit,"inclusive_or_expression")
#line 2780 "cplus.met"
            }
#line 2780 "cplus.met"
            ReplaceTree(_ptRes0, 2, _ptTree0);
#line 2780 "cplus.met"
            expTree=_ptRes0;
#line 2780 "cplus.met"
        }
#line 2780 "cplus.met"
    } 
#line 2780 "cplus.met"
#line 2781 "cplus.met"
    {
#line 2781 "cplus.met"
        _retValue = expTree ;
#line 2781 "cplus.met"
        goto inclusive_or_expression_ret;
#line 2781 "cplus.met"
        
#line 2781 "cplus.met"
    }
#line 2781 "cplus.met"
#line 2781 "cplus.met"
#line 2781 "cplus.met"

#line 2782 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2782 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 2782 "cplus.met"
return((PPTREE) 0);
#line 2782 "cplus.met"

#line 2782 "cplus.met"
inclusive_or_expression_exit :
#line 2782 "cplus.met"

#line 2782 "cplus.met"
    _Debug = TRACE_RULE("inclusive_or_expression",TRACE_EXIT,(PPTREE)0);
#line 2782 "cplus.met"
    _funcLevel--;
#line 2782 "cplus.met"
    return((PPTREE) -1) ;
#line 2782 "cplus.met"

#line 2782 "cplus.met"
inclusive_or_expression_ret :
#line 2782 "cplus.met"
    
#line 2782 "cplus.met"
    _Debug = TRACE_RULE("inclusive_or_expression",TRACE_RETURN,_retValue);
#line 2782 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2782 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 2782 "cplus.met"
    return _retValue ;
#line 2782 "cplus.met"
}
#line 2782 "cplus.met"

#line 2782 "cplus.met"
#line 2541 "cplus.met"
PPTREE cplus::initializer ( int error_free)
#line 2541 "cplus.met"
{
#line 2541 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 2541 "cplus.met"
    int _value,_nbPre = 0 ;
#line 2541 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 2541 "cplus.met"
    int _Debug = TRACE_RULE("initializer",TRACE_ENTER,(PPTREE)0);
#line 2541 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 2541 "cplus.met"
#line 2541 "cplus.met"
    PPTREE _addlist1 = (PPTREE) 0;
#line 2541 "cplus.met"
#line 2541 "cplus.met"
    PPTREE initList = (PPTREE) 0,retTree = (PPTREE) 0;
#line 2541 "cplus.met"
#line 2543 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 2543 "cplus.met"
    switch( lexEl.Value) {
#line 2543 "cplus.met"
#line 2547 "cplus.met"
        case AOUV : 
#line 2547 "cplus.met"
            tokenAhead = 0 ;
#line 2547 "cplus.met"
            CommTerm();
#line 2547 "cplus.met"
#line 2545 "cplus.met"
#line 2545 "cplus.met"
            _addlist1 = initList ;
#line 2545 "cplus.met"
#line 2546 "cplus.met"
            do {
#line 2546 "cplus.met"
#line 2547 "cplus.met"
                {
#line 2547 "cplus.met"
                    PPTREE _ptTree0=0;
#line 2547 "cplus.met"
                    if ( (_ptTree0=NQUICK_CALL(_Tak(initializer)(error_free), 85, cplus))== (PPTREE) -1 ) {
#line 2547 "cplus.met"
                        MulFreeTree(4,_ptTree0,_addlist1,initList,retTree);
                        PROG_EXIT(initializer_exit,"initializer")
#line 2547 "cplus.met"
                    }
#line 2547 "cplus.met"
                    _addlist1 =AddList(_addlist1 , _ptTree0);
#line 2547 "cplus.met"
                }
#line 2547 "cplus.met"
#line 2547 "cplus.met"
                if (initList){
#line 2547 "cplus.met"
#line 2547 "cplus.met"
                    _addlist1 = SonTree (_addlist1 ,2 );
#line 2547 "cplus.met"
                } else {
#line 2547 "cplus.met"
#line 2547 "cplus.met"
                    initList = _addlist1 ;
#line 2547 "cplus.met"
                }
#line 2547 "cplus.met"
#line 2547 "cplus.met"
#line 2548 "cplus.met"
            } while ( !(! ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN(VIRG,",") && (tokenAhead = 0,CommTerm(),1)))) ;
#line 2548 "cplus.met"
#line 2549 "cplus.met"
            (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 2549 "cplus.met"
            if (  !SEE_TOKEN( AFER,"}") || !(CommTerm(),1)) {
#line 2549 "cplus.met"
                MulFreeTree(3,_addlist1,initList,retTree);
                TOKEN_EXIT(initializer_exit,"}")
#line 2549 "cplus.met"
            } else {
#line 2549 "cplus.met"
                tokenAhead = 0 ;
#line 2549 "cplus.met"
            }
#line 2549 "cplus.met"
#line 2550 "cplus.met"
            {
#line 2550 "cplus.met"
                PPTREE _ptTree0=0;
#line 2550 "cplus.met"
                {
#line 2550 "cplus.met"
                    PPTREE _ptRes1=0;
#line 2550 "cplus.met"
                    _ptRes1= MakeTree(INITIALIZER, 1);
#line 2550 "cplus.met"
                    ReplaceTree(_ptRes1, 1, initList );
#line 2550 "cplus.met"
                    _ptTree0=_ptRes1;
#line 2550 "cplus.met"
                }
#line 2550 "cplus.met"
                _retValue =_ptTree0;
#line 2550 "cplus.met"
                goto initializer_ret;
#line 2550 "cplus.met"
            }
#line 2550 "cplus.met"
#line 2550 "cplus.met"
            break;
#line 2550 "cplus.met"
#line 2553 "cplus.met"
        default : 
#line 2553 "cplus.met"
#line 2553 "cplus.met"
            if (NPUSH_CALL_AFF_VERIF(retTree = ,_Tak(assignment_expression), 20, cplus)){
#line 2553 "cplus.met"
#line 2554 "cplus.met"
                {
#line 2554 "cplus.met"
                    PPTREE _ptTree0=0;
#line 2554 "cplus.met"
                    {
#line 2554 "cplus.met"
                        PPTREE _ptRes1=0;
#line 2554 "cplus.met"
                        _ptRes1= MakeTree(INITIALIZER, 1);
#line 2554 "cplus.met"
                        ReplaceTree(_ptRes1, 1, retTree );
#line 2554 "cplus.met"
                        _ptTree0=_ptRes1;
#line 2554 "cplus.met"
                    }
#line 2554 "cplus.met"
                    _retValue =_ptTree0;
#line 2554 "cplus.met"
                    goto initializer_ret;
#line 2554 "cplus.met"
                }
#line 2554 "cplus.met"
            } else {
#line 2554 "cplus.met"
#line 2556 "cplus.met"
                {
#line 2556 "cplus.met"
                    PPTREE _ptTree0=0;
#line 2556 "cplus.met"
                    {
#line 2556 "cplus.met"
                        PPTREE _ptRes1=0;
#line 2556 "cplus.met"
                        _ptRes1= MakeTree(INITIALIZER, 1);
#line 2556 "cplus.met"
                        _ptTree0=_ptRes1;
#line 2556 "cplus.met"
                    }
#line 2556 "cplus.met"
                    _retValue =_ptTree0;
#line 2556 "cplus.met"
                    goto initializer_ret;
#line 2556 "cplus.met"
                }
#line 2556 "cplus.met"
            }
#line 2556 "cplus.met"
            break;
#line 2556 "cplus.met"
    }
#line 2556 "cplus.met"
#line 2556 "cplus.met"
#line 2557 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2557 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 2557 "cplus.met"
return((PPTREE) 0);
#line 2557 "cplus.met"

#line 2557 "cplus.met"
initializer_exit :
#line 2557 "cplus.met"

#line 2557 "cplus.met"
    _Debug = TRACE_RULE("initializer",TRACE_EXIT,(PPTREE)0);
#line 2557 "cplus.met"
    _funcLevel--;
#line 2557 "cplus.met"
    return((PPTREE) -1) ;
#line 2557 "cplus.met"

#line 2557 "cplus.met"
initializer_ret :
#line 2557 "cplus.met"
    
#line 2557 "cplus.met"
    _Debug = TRACE_RULE("initializer",TRACE_RETURN,_retValue);
#line 2557 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2557 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 2557 "cplus.met"
    return _retValue ;
#line 2557 "cplus.met"
}
#line 2557 "cplus.met"

#line 2557 "cplus.met"
#line 1643 "cplus.met"
PPTREE cplus::inline_namespace ( int error_free)
#line 1643 "cplus.met"
{
#line 1643 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 1643 "cplus.met"
    int _value,_nbPre = 0 ;
#line 1643 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 1643 "cplus.met"
    int _Debug = TRACE_RULE("inline_namespace",TRACE_ENTER,(PPTREE)0);
#line 1643 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 1643 "cplus.met"
#line 1644 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 1644 "cplus.met"
    if (  !SEE_TOKEN( INLINE,"inline") || !(CommTerm(),1)) {
#line 1644 "cplus.met"
            TOKEN_EXIT(inline_namespace_exit,"inline")
#line 1644 "cplus.met"
    } else {
#line 1644 "cplus.met"
        tokenAhead = 0 ;
#line 1644 "cplus.met"
    }
#line 1644 "cplus.met"
#line 1645 "cplus.met"
    {
#line 1645 "cplus.met"
        PPTREE _ptTree0=0;
#line 1645 "cplus.met"
        {
#line 1645 "cplus.met"
            PPTREE _ptTree1=0,_ptRes1=0;
#line 1645 "cplus.met"
            _ptRes1= MakeTree(INLINE_NAMESPACE, 1);
#line 1645 "cplus.met"
            if ( (_ptTree1=NQUICK_CALL(_Tak(name_space)(error_free), 102, cplus))== (PPTREE) -1 ) {
#line 1645 "cplus.met"
                MulFreeTree(3,_ptRes1,_ptTree1,_ptTree0);
                PROG_EXIT(inline_namespace_exit,"inline_namespace")
#line 1645 "cplus.met"
            }
#line 1645 "cplus.met"
            ReplaceTree(_ptRes1, 1, _ptTree1);
#line 1645 "cplus.met"
            _ptTree0=_ptRes1;
#line 1645 "cplus.met"
        }
#line 1645 "cplus.met"
        _retValue =_ptTree0;
#line 1645 "cplus.met"
        goto inline_namespace_ret;
#line 1645 "cplus.met"
    }
#line 1645 "cplus.met"
#line 1645 "cplus.met"
#line 1645 "cplus.met"

#line 1646 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1646 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 1646 "cplus.met"
return((PPTREE) 0);
#line 1646 "cplus.met"

#line 1646 "cplus.met"
inline_namespace_exit :
#line 1646 "cplus.met"

#line 1646 "cplus.met"
    _Debug = TRACE_RULE("inline_namespace",TRACE_EXIT,(PPTREE)0);
#line 1646 "cplus.met"
    _funcLevel--;
#line 1646 "cplus.met"
    return((PPTREE) -1) ;
#line 1646 "cplus.met"

#line 1646 "cplus.met"
inline_namespace_ret :
#line 1646 "cplus.met"
    
#line 1646 "cplus.met"
    _Debug = TRACE_RULE("inline_namespace",TRACE_RETURN,_retValue);
#line 1646 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1646 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 1646 "cplus.met"
    return _retValue ;
#line 1646 "cplus.met"
}
#line 1646 "cplus.met"

#line 1646 "cplus.met"
#line 1796 "cplus.met"
PPTREE cplus::inside_declaration ( int error_free)
#line 1796 "cplus.met"
{
#line 1796 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 1796 "cplus.met"
    int _value,_nbPre = 0 ;
#line 1796 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 1796 "cplus.met"
    int _Debug = TRACE_RULE("inside_declaration",TRACE_ENTER,(PPTREE)0);
#line 1796 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 1796 "cplus.met"
#line 1796 "cplus.met"
    PPTREE retTree = (PPTREE) 0;
#line 1796 "cplus.met"
#line 1798 "cplus.met"
    if ((((! (NPUSH_CALL_AFF_VERIF(retTree = ,_Tak(inside_declaration_extension), 90, cplus))) && 
#line 1798 "cplus.met"
         (! (NPUSH_CALL_AFF_VERIF(retTree = ,_Tak(ext_all), 68, cplus)))) && 
#line 1798 "cplus.met"
        (! (NPUSH_CALL_AFF_VERIF(retTree = ,_Tak(inside_declaration1), 88, cplus)))) && 
#line 1798 "cplus.met"
       (! (NPUSH_CALL_AFF_VERIF(retTree = ,_Tak(inside_declaration2), 89, cplus)))){
#line 1798 "cplus.met"
#line 1799 "cplus.met"
        
#line 1799 "cplus.met"
        MulFreeTree(1,retTree);
        LEX_EXIT ("",0);
#line 1799 "cplus.met"
        goto inside_declaration_exit;
#line 1799 "cplus.met"
#line 1799 "cplus.met"
    }
#line 1799 "cplus.met"
#line 1800 "cplus.met"
    {
#line 1800 "cplus.met"
        _retValue = retTree ;
#line 1800 "cplus.met"
        goto inside_declaration_ret;
#line 1800 "cplus.met"
        
#line 1800 "cplus.met"
    }
#line 1800 "cplus.met"
#line 1800 "cplus.met"
#line 1800 "cplus.met"

#line 1801 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1801 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 1801 "cplus.met"
return((PPTREE) 0);
#line 1801 "cplus.met"

#line 1801 "cplus.met"
inside_declaration_exit :
#line 1801 "cplus.met"

#line 1801 "cplus.met"
    _Debug = TRACE_RULE("inside_declaration",TRACE_EXIT,(PPTREE)0);
#line 1801 "cplus.met"
    _funcLevel--;
#line 1801 "cplus.met"
    return((PPTREE) -1) ;
#line 1801 "cplus.met"

#line 1801 "cplus.met"
inside_declaration_ret :
#line 1801 "cplus.met"
    
#line 1801 "cplus.met"
    _Debug = TRACE_RULE("inside_declaration",TRACE_RETURN,_retValue);
#line 1801 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1801 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 1801 "cplus.met"
    return _retValue ;
#line 1801 "cplus.met"
}
#line 1801 "cplus.met"

#line 1801 "cplus.met"
#line 1776 "cplus.met"
PPTREE cplus::inside_declaration1 ( int error_free)
#line 1776 "cplus.met"
{
#line 1776 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 1776 "cplus.met"
    int _value,_nbPre = 0 ;
#line 1776 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 1776 "cplus.met"
    int _Debug = TRACE_RULE("inside_declaration1",TRACE_ENTER,(PPTREE)0);
#line 1776 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 1776 "cplus.met"
#line 1776 "cplus.met"
    PPTREE otherTree = (PPTREE) 0,list = (PPTREE) 0;
#line 1776 "cplus.met"
#line 1778 "cplus.met"
    {
#line 1778 "cplus.met"
        PPTREE _ptTree0=0,_ptRes0=0;
#line 1778 "cplus.met"
        _ptRes0= MakeTree(DECLARATION, 3);
#line 1778 "cplus.met"
        if ( (_ptTree0=NQUICK_CALL(_Tak(type_specifier)(error_free), 153, cplus))== (PPTREE) -1 ) {
#line 1778 "cplus.met"
            MulFreeTree(4,_ptRes0,_ptTree0,list,otherTree);
            PROG_EXIT(inside_declaration1_exit,"inside_declaration1")
#line 1778 "cplus.met"
        }
#line 1778 "cplus.met"
        ReplaceTree(_ptRes0, 2, _ptTree0);
#line 1778 "cplus.met"
        otherTree=_ptRes0;
#line 1778 "cplus.met"
    }
#line 1778 "cplus.met"
#line 1779 "cplus.met"
    {
#line 1779 "cplus.met"
        PPTREE _ptTree0=0;
#line 1779 "cplus.met"
        if ( (_ptTree0=NQUICK_CALL(_Tak(bit_field_decl)(error_free), 24, cplus))== (PPTREE) -1 ) {
#line 1779 "cplus.met"
            MulFreeTree(3,_ptTree0,list,otherTree);
            PROG_EXIT(inside_declaration1_exit,"inside_declaration1")
#line 1779 "cplus.met"
        }
#line 1779 "cplus.met"
        list =AddList(list , _ptTree0);
#line 1779 "cplus.met"
    }
#line 1779 "cplus.met"
#line 1780 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 1780 "cplus.met"
    if (  !SEE_TOKEN( PVIR,";") || !(CommTerm(),1)) {
#line 1780 "cplus.met"
        MulFreeTree(2,list,otherTree);
        TOKEN_EXIT(inside_declaration1_exit,";")
#line 1780 "cplus.met"
    } else {
#line 1780 "cplus.met"
        tokenAhead = 0 ;
#line 1780 "cplus.met"
    }
#line 1780 "cplus.met"
#line 1781 "cplus.met"
    {
#line 1781 "cplus.met"
        PPTREE _ptTree0=0;
#line 1781 "cplus.met"
        _ptTree0=ReplaceTree(otherTree ,3 ,list );
#line 1781 "cplus.met"
        _retValue =_ptTree0;
#line 1781 "cplus.met"
        goto inside_declaration1_ret;
#line 1781 "cplus.met"
    }
#line 1781 "cplus.met"
#line 1781 "cplus.met"
#line 1781 "cplus.met"

#line 1782 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1782 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 1782 "cplus.met"
return((PPTREE) 0);
#line 1782 "cplus.met"

#line 1782 "cplus.met"
inside_declaration1_exit :
#line 1782 "cplus.met"

#line 1782 "cplus.met"
    _Debug = TRACE_RULE("inside_declaration1",TRACE_EXIT,(PPTREE)0);
#line 1782 "cplus.met"
    _funcLevel--;
#line 1782 "cplus.met"
    return((PPTREE) -1) ;
#line 1782 "cplus.met"

#line 1782 "cplus.met"
inside_declaration1_ret :
#line 1782 "cplus.met"
    
#line 1782 "cplus.met"
    _Debug = TRACE_RULE("inside_declaration1",TRACE_RETURN,_retValue);
#line 1782 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1782 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 1782 "cplus.met"
    return _retValue ;
#line 1782 "cplus.met"
}
#line 1782 "cplus.met"

#line 1782 "cplus.met"
#line 1784 "cplus.met"
PPTREE cplus::inside_declaration2 ( int error_free)
#line 1784 "cplus.met"
{
#line 1784 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 1784 "cplus.met"
    int _value,_nbPre = 0 ;
#line 1784 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 1784 "cplus.met"
    int _Debug = TRACE_RULE("inside_declaration2",TRACE_ENTER,(PPTREE)0);
#line 1784 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 1784 "cplus.met"
#line 1784 "cplus.met"
    PPTREE otherTree = (PPTREE) 0,list = (PPTREE) 0;
#line 1784 "cplus.met"
#line 1786 "cplus.met"
    {
#line 1786 "cplus.met"
        PPTREE _ptRes0=0;
#line 1786 "cplus.met"
        _ptRes0= MakeTree(DECLARATION, 3);
#line 1786 "cplus.met"
        otherTree=_ptRes0;
#line 1786 "cplus.met"
    }
#line 1786 "cplus.met"
#line 1787 "cplus.met"
    {
#line 1787 "cplus.met"
        PPTREE _ptTree0=0;
#line 1787 "cplus.met"
        if ( (_ptTree0=NQUICK_CALL(_Tak(bit_field_decl)(error_free), 24, cplus))== (PPTREE) -1 ) {
#line 1787 "cplus.met"
            MulFreeTree(3,_ptTree0,list,otherTree);
            PROG_EXIT(inside_declaration2_exit,"inside_declaration2")
#line 1787 "cplus.met"
        }
#line 1787 "cplus.met"
        list =AddList(list , _ptTree0);
#line 1787 "cplus.met"
    }
#line 1787 "cplus.met"
#line 1788 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 1788 "cplus.met"
    if (  !SEE_TOKEN( PVIR,";") || !(CommTerm(),1)) {
#line 1788 "cplus.met"
        MulFreeTree(2,list,otherTree);
        TOKEN_EXIT(inside_declaration2_exit,";")
#line 1788 "cplus.met"
    } else {
#line 1788 "cplus.met"
        tokenAhead = 0 ;
#line 1788 "cplus.met"
    }
#line 1788 "cplus.met"
#line 1789 "cplus.met"
    {
#line 1789 "cplus.met"
        PPTREE _ptTree0=0;
#line 1789 "cplus.met"
        _ptTree0=ReplaceTree(otherTree ,3 ,list );
#line 1789 "cplus.met"
        _retValue =_ptTree0;
#line 1789 "cplus.met"
        goto inside_declaration2_ret;
#line 1789 "cplus.met"
    }
#line 1789 "cplus.met"
#line 1789 "cplus.met"
#line 1789 "cplus.met"

#line 1790 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1790 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 1790 "cplus.met"
return((PPTREE) 0);
#line 1790 "cplus.met"

#line 1790 "cplus.met"
inside_declaration2_exit :
#line 1790 "cplus.met"

#line 1790 "cplus.met"
    _Debug = TRACE_RULE("inside_declaration2",TRACE_EXIT,(PPTREE)0);
#line 1790 "cplus.met"
    _funcLevel--;
#line 1790 "cplus.met"
    return((PPTREE) -1) ;
#line 1790 "cplus.met"

#line 1790 "cplus.met"
inside_declaration2_ret :
#line 1790 "cplus.met"
    
#line 1790 "cplus.met"
    _Debug = TRACE_RULE("inside_declaration2",TRACE_RETURN,_retValue);
#line 1790 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1790 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 1790 "cplus.met"
    return _retValue ;
#line 1790 "cplus.met"
}
#line 1790 "cplus.met"

#line 1790 "cplus.met"
#line 1792 "cplus.met"
PPTREE cplus::inside_declaration_extension ( int error_free)
#line 1792 "cplus.met"
{
#line 1792 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 1792 "cplus.met"
    int _value,_nbPre = 0 ;
#line 1792 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 1792 "cplus.met"
    int _Debug = TRACE_RULE("inside_declaration_extension",TRACE_ENTER,(PPTREE)0);
#line 1792 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 1792 "cplus.met"
#line 1793 "cplus.met"
    
#line 1793 "cplus.met"
    LEX_EXIT ("",0);
#line 1793 "cplus.met"
    goto inside_declaration_extension_exit;
#line 1793 "cplus.met"
#line 1793 "cplus.met"
#line 1793 "cplus.met"

#line 1794 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1794 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 1794 "cplus.met"
return((PPTREE) 0);
#line 1794 "cplus.met"

#line 1794 "cplus.met"
inside_declaration_extension_exit :
#line 1794 "cplus.met"

#line 1794 "cplus.met"
    _Debug = TRACE_RULE("inside_declaration_extension",TRACE_EXIT,(PPTREE)0);
#line 1794 "cplus.met"
    _funcLevel--;
#line 1794 "cplus.met"
    return((PPTREE) -1) ;
#line 1794 "cplus.met"

#line 1794 "cplus.met"
inside_declaration_extension_ret :
#line 1794 "cplus.met"
    
#line 1794 "cplus.met"
    _Debug = TRACE_RULE("inside_declaration_extension",TRACE_RETURN,_retValue);
#line 1794 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1794 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 1794 "cplus.met"
    return _retValue ;
#line 1794 "cplus.met"
}
#line 1794 "cplus.met"

#line 1794 "cplus.met"
#line 3435 "cplus.met"
PPTREE cplus::label_beg ( int error_free)
#line 3435 "cplus.met"
{
#line 3435 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 3435 "cplus.met"
    int _value,_nbPre = 0 ;
#line 3435 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 3435 "cplus.met"
    int _Debug = TRACE_RULE("label_beg",TRACE_ENTER,(PPTREE)0);
#line 3435 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 3435 "cplus.met"
#line 3436 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3436 "cplus.met"
    if ( ! TERM_OR_META(IDENT,"IDENT") || !(CommTerm(),1)) {
#line 3436 "cplus.met"
            TOKEN_EXIT(label_beg_exit,"IDENT")
#line 3436 "cplus.met"
    } else {
#line 3436 "cplus.met"
        tokenAhead = 0 ;
#line 3436 "cplus.met"
    }
#line 3436 "cplus.met"
#line 3437 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3437 "cplus.met"
    if (  !SEE_TOKEN( DPOI,":") || !(CommTerm(),1)) {
#line 3437 "cplus.met"
            TOKEN_EXIT(label_beg_exit,":")
#line 3437 "cplus.met"
    } else {
#line 3437 "cplus.met"
        tokenAhead = 0 ;
#line 3437 "cplus.met"
    }
#line 3437 "cplus.met"
#line 3437 "cplus.met"
#line 3437 "cplus.met"

#line 3438 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 3438 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 3438 "cplus.met"
return((PPTREE) 0);
#line 3438 "cplus.met"

#line 3438 "cplus.met"
label_beg_exit :
#line 3438 "cplus.met"

#line 3438 "cplus.met"
    _Debug = TRACE_RULE("label_beg",TRACE_EXIT,(PPTREE)0);
#line 3438 "cplus.met"
    _funcLevel--;
#line 3438 "cplus.met"
    return((PPTREE) -1) ;
#line 3438 "cplus.met"

#line 3438 "cplus.met"
label_beg_ret :
#line 3438 "cplus.met"
    
#line 3438 "cplus.met"
    _Debug = TRACE_RULE("label_beg",TRACE_RETURN,_retValue);
#line 3438 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 3438 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 3438 "cplus.met"
    return _retValue ;
#line 3438 "cplus.met"
}
#line 3438 "cplus.met"

#line 3438 "cplus.met"
#line 991 "cplus.met"
PPTREE cplus::linkage_specification ( int error_free)
#line 991 "cplus.met"
{
#line 991 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 991 "cplus.met"
    int _value,_nbPre = 0 ;
#line 991 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 991 "cplus.met"
    int _Debug = TRACE_RULE("linkage_specification",TRACE_ENTER,(PPTREE)0);
#line 991 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 991 "cplus.met"
#line 991 "cplus.met"
    PPTREE _addlist1 = (PPTREE) 0;
#line 991 "cplus.met"
#line 991 "cplus.met"
    PPTREE retTree = (PPTREE) 0,list = (PPTREE) 0,declaration = (PPTREE) 0;
#line 991 "cplus.met"
#line 993 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 993 "cplus.met"
    if (  !SEE_TOKEN( EXTERN,"extern") || !(CommTerm(),1)) {
#line 993 "cplus.met"
        MulFreeTree(4,_addlist1,declaration,list,retTree);
        TOKEN_EXIT(linkage_specification_exit,"extern")
#line 993 "cplus.met"
    } else {
#line 993 "cplus.met"
        tokenAhead = 0 ;
#line 993 "cplus.met"
    }
#line 993 "cplus.met"
#line 994 "cplus.met"
    {
#line 994 "cplus.met"
        PPTREE _ptTree0=0,_ptRes0=0;
#line 994 "cplus.met"
        _ptRes0= MakeTree(EXTERNAL, 2);
#line 994 "cplus.met"
        {
#line 994 "cplus.met"
            PPTREE _ptTree1=0,_ptRes1=0;
#line 994 "cplus.met"
            _ptRes1= MakeTree(STRING, 1);
#line 994 "cplus.met"
            (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 994 "cplus.met"
            if ( ! TERM_OR_META(STRING,"STRING") || !(BUILD_TERM_META(_ptTree1))) {
#line 994 "cplus.met"
                MulFreeTree(8,_ptRes1,_ptTree1,_ptRes0,_ptTree0,_addlist1,declaration,list,retTree);
                TOKEN_EXIT(linkage_specification_exit,"STRING")
#line 994 "cplus.met"
            } else {
#line 994 "cplus.met"
                tokenAhead = 0 ;
#line 994 "cplus.met"
            }
#line 994 "cplus.met"
            ReplaceTree(_ptRes1, 1, _ptTree1);
#line 994 "cplus.met"
            _ptTree0=_ptRes1;
#line 994 "cplus.met"
        }
#line 994 "cplus.met"
        ReplaceTree(_ptRes0, 1, _ptTree0);
#line 994 "cplus.met"
        retTree=_ptRes0;
#line 994 "cplus.met"
    }
#line 994 "cplus.met"
#line 995 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 995 "cplus.met"
    switch( lexEl.Value) {
#line 995 "cplus.met"
#line 998 "cplus.met"
        case AOUV : 
#line 998 "cplus.met"
            tokenAhead = 0 ;
#line 998 "cplus.met"
            CommTerm();
#line 998 "cplus.met"
#line 997 "cplus.met"
#line 997 "cplus.met"
            _addlist1 = list ;
#line 997 "cplus.met"
#line 998 "cplus.met"
            while (NPUSH_CALL_AFF_VERIF(declaration = ,_Tak(ext_all), 68, cplus)) { 
#line 998 "cplus.met"
#line 999 "cplus.met"
#line 999 "cplus.met"
                _addlist1 =AddList(_addlist1 ,declaration );
#line 999 "cplus.met"
#line 999 "cplus.met"
                if (list){
#line 999 "cplus.met"
#line 999 "cplus.met"
                    _addlist1 = SonTree (_addlist1 ,2 );
#line 999 "cplus.met"
                } else {
#line 999 "cplus.met"
#line 999 "cplus.met"
                    list = _addlist1 ;
#line 999 "cplus.met"
                }
#line 999 "cplus.met"
            } 
#line 999 "cplus.met"
#line 1000 "cplus.met"
            (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 1000 "cplus.met"
            if (  !SEE_TOKEN( AFER,"}") || !(CommTerm(),1)) {
#line 1000 "cplus.met"
                MulFreeTree(4,_addlist1,declaration,list,retTree);
                TOKEN_EXIT(linkage_specification_exit,"}")
#line 1000 "cplus.met"
            } else {
#line 1000 "cplus.met"
                tokenAhead = 0 ;
#line 1000 "cplus.met"
            }
#line 1000 "cplus.met"
#line 1001 "cplus.met"
            {
#line 1001 "cplus.met"
                PPTREE _ptTree0=0;
#line 1001 "cplus.met"
                {
#line 1001 "cplus.met"
                    PPTREE _ptTree1=0;
#line 1001 "cplus.met"
                    {
#line 1001 "cplus.met"
                        PPTREE _ptRes2=0;
#line 1001 "cplus.met"
                        _ptRes2= MakeTree(COMPOUND_EXT, 1);
#line 1001 "cplus.met"
                        ReplaceTree(_ptRes2, 1, list );
#line 1001 "cplus.met"
                        _ptTree1=_ptRes2;
#line 1001 "cplus.met"
                    }
#line 1001 "cplus.met"
                    _ptTree0=ReplaceTree(retTree , 2 , _ptTree1);
#line 1001 "cplus.met"
                }
#line 1001 "cplus.met"
                _retValue =_ptTree0;
#line 1001 "cplus.met"
                goto linkage_specification_ret;
#line 1001 "cplus.met"
            }
#line 1001 "cplus.met"
#line 1001 "cplus.met"
            break;
#line 1001 "cplus.met"
#line 1003 "cplus.met"
        default : 
#line 1003 "cplus.met"
#line 1003 "cplus.met"
            {
#line 1003 "cplus.met"
                PPTREE _ptTree0=0;
#line 1003 "cplus.met"
                {
#line 1003 "cplus.met"
                    PPTREE _ptTree1=0;
#line 1003 "cplus.met"
                    if ( (_ptTree1=NQUICK_CALL(_Tak(ext_all)(error_free), 68, cplus))== (PPTREE) -1 ) {
#line 1003 "cplus.met"
                        MulFreeTree(6,_ptTree1,_ptTree0,_addlist1,declaration,list,retTree);
                        PROG_EXIT(linkage_specification_exit,"linkage_specification")
#line 1003 "cplus.met"
                    }
#line 1003 "cplus.met"
                    _ptTree0=ReplaceTree(retTree , 2 , _ptTree1);
#line 1003 "cplus.met"
                }
#line 1003 "cplus.met"
                _retValue =_ptTree0;
#line 1003 "cplus.met"
                goto linkage_specification_ret;
#line 1003 "cplus.met"
            }
#line 1003 "cplus.met"
            break;
#line 1003 "cplus.met"
    }
#line 1003 "cplus.met"
#line 1003 "cplus.met"
#line 1004 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1004 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 1004 "cplus.met"
return((PPTREE) 0);
#line 1004 "cplus.met"

#line 1004 "cplus.met"
linkage_specification_exit :
#line 1004 "cplus.met"

#line 1004 "cplus.met"
    _Debug = TRACE_RULE("linkage_specification",TRACE_EXIT,(PPTREE)0);
#line 1004 "cplus.met"
    _funcLevel--;
#line 1004 "cplus.met"
    return((PPTREE) -1) ;
#line 1004 "cplus.met"

#line 1004 "cplus.met"
linkage_specification_ret :
#line 1004 "cplus.met"
    
#line 1004 "cplus.met"
    _Debug = TRACE_RULE("linkage_specification",TRACE_RETURN,_retValue);
#line 1004 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1004 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 1004 "cplus.met"
    return _retValue ;
#line 1004 "cplus.met"
}
#line 1004 "cplus.met"

#line 1004 "cplus.met"
#line 2768 "cplus.met"
PPTREE cplus::logical_and_expression ( int error_free)
#line 2768 "cplus.met"
{
#line 2768 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 2768 "cplus.met"
    int _value,_nbPre = 0 ;
#line 2768 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 2768 "cplus.met"
    int _Debug = TRACE_RULE("logical_and_expression",TRACE_ENTER,(PPTREE)0);
#line 2768 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 2768 "cplus.met"
#line 2768 "cplus.met"
    PPTREE expTree = (PPTREE) 0;
#line 2768 "cplus.met"
#line 2770 "cplus.met"
    if ( (expTree=NQUICK_CALL(_Tak(inclusive_or_expression)(error_free), 84, cplus))== (PPTREE) -1 ) {
#line 2770 "cplus.met"
        MulFreeTree(1,expTree);
        PROG_EXIT(logical_and_expression_exit,"logical_and_expression")
#line 2770 "cplus.met"
    }
#line 2770 "cplus.met"
#line 2771 "cplus.met"
    while ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN(ETCOETCO,"&&") && (tokenAhead = 0,CommTerm(),1)) { 
#line 2771 "cplus.met"
#line 2772 "cplus.met"
        {
#line 2772 "cplus.met"
            PPTREE _ptTree0=0,_ptRes0=0;
#line 2772 "cplus.met"
            _ptRes0= MakeTree(AND, 2);
#line 2772 "cplus.met"
            ReplaceTree(_ptRes0, 1, expTree );
#line 2772 "cplus.met"
            if ( (_ptTree0=NQUICK_CALL(_Tak(inclusive_or_expression)(error_free), 84, cplus))== (PPTREE) -1 ) {
#line 2772 "cplus.met"
                MulFreeTree(3,_ptRes0,_ptTree0,expTree);
                PROG_EXIT(logical_and_expression_exit,"logical_and_expression")
#line 2772 "cplus.met"
            }
#line 2772 "cplus.met"
            ReplaceTree(_ptRes0, 2, _ptTree0);
#line 2772 "cplus.met"
            expTree=_ptRes0;
#line 2772 "cplus.met"
        }
#line 2772 "cplus.met"
    } 
#line 2772 "cplus.met"
#line 2773 "cplus.met"
    {
#line 2773 "cplus.met"
        _retValue = expTree ;
#line 2773 "cplus.met"
        goto logical_and_expression_ret;
#line 2773 "cplus.met"
        
#line 2773 "cplus.met"
    }
#line 2773 "cplus.met"
#line 2773 "cplus.met"
#line 2773 "cplus.met"

#line 2774 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2774 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 2774 "cplus.met"
return((PPTREE) 0);
#line 2774 "cplus.met"

#line 2774 "cplus.met"
logical_and_expression_exit :
#line 2774 "cplus.met"

#line 2774 "cplus.met"
    _Debug = TRACE_RULE("logical_and_expression",TRACE_EXIT,(PPTREE)0);
#line 2774 "cplus.met"
    _funcLevel--;
#line 2774 "cplus.met"
    return((PPTREE) -1) ;
#line 2774 "cplus.met"

#line 2774 "cplus.met"
logical_and_expression_ret :
#line 2774 "cplus.met"
    
#line 2774 "cplus.met"
    _Debug = TRACE_RULE("logical_and_expression",TRACE_RETURN,_retValue);
#line 2774 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2774 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 2774 "cplus.met"
    return _retValue ;
#line 2774 "cplus.met"
}
#line 2774 "cplus.met"

#line 2774 "cplus.met"
#line 2760 "cplus.met"
PPTREE cplus::logical_or_expression ( int error_free)
#line 2760 "cplus.met"
{
#line 2760 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 2760 "cplus.met"
    int _value,_nbPre = 0 ;
#line 2760 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 2760 "cplus.met"
    int _Debug = TRACE_RULE("logical_or_expression",TRACE_ENTER,(PPTREE)0);
#line 2760 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 2760 "cplus.met"
#line 2760 "cplus.met"
    PPTREE expTree = (PPTREE) 0;
#line 2760 "cplus.met"
#line 2762 "cplus.met"
    if ( (expTree=NQUICK_CALL(_Tak(logical_and_expression)(error_free), 93, cplus))== (PPTREE) -1 ) {
#line 2762 "cplus.met"
        MulFreeTree(1,expTree);
        PROG_EXIT(logical_or_expression_exit,"logical_or_expression")
#line 2762 "cplus.met"
    }
#line 2762 "cplus.met"
#line 2763 "cplus.met"
    while ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN(VBARVBAR,"||") && (tokenAhead = 0,CommTerm(),1)) { 
#line 2763 "cplus.met"
#line 2764 "cplus.met"
        {
#line 2764 "cplus.met"
            PPTREE _ptTree0=0,_ptRes0=0;
#line 2764 "cplus.met"
            _ptRes0= MakeTree(OR, 2);
#line 2764 "cplus.met"
            ReplaceTree(_ptRes0, 1, expTree );
#line 2764 "cplus.met"
            if ( (_ptTree0=NQUICK_CALL(_Tak(logical_and_expression)(error_free), 93, cplus))== (PPTREE) -1 ) {
#line 2764 "cplus.met"
                MulFreeTree(3,_ptRes0,_ptTree0,expTree);
                PROG_EXIT(logical_or_expression_exit,"logical_or_expression")
#line 2764 "cplus.met"
            }
#line 2764 "cplus.met"
            ReplaceTree(_ptRes0, 2, _ptTree0);
#line 2764 "cplus.met"
            expTree=_ptRes0;
#line 2764 "cplus.met"
        }
#line 2764 "cplus.met"
    } 
#line 2764 "cplus.met"
#line 2765 "cplus.met"
    {
#line 2765 "cplus.met"
        _retValue = expTree ;
#line 2765 "cplus.met"
        goto logical_or_expression_ret;
#line 2765 "cplus.met"
        
#line 2765 "cplus.met"
    }
#line 2765 "cplus.met"
#line 2765 "cplus.met"
#line 2765 "cplus.met"

#line 2766 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2766 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 2766 "cplus.met"
return((PPTREE) 0);
#line 2766 "cplus.met"

#line 2766 "cplus.met"
logical_or_expression_exit :
#line 2766 "cplus.met"

#line 2766 "cplus.met"
    _Debug = TRACE_RULE("logical_or_expression",TRACE_EXIT,(PPTREE)0);
#line 2766 "cplus.met"
    _funcLevel--;
#line 2766 "cplus.met"
    return((PPTREE) -1) ;
#line 2766 "cplus.met"

#line 2766 "cplus.met"
logical_or_expression_ret :
#line 2766 "cplus.met"
    
#line 2766 "cplus.met"
    _Debug = TRACE_RULE("logical_or_expression",TRACE_RETURN,_retValue);
#line 2766 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2766 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 2766 "cplus.met"
    return _retValue ;
#line 2766 "cplus.met"
}
#line 2766 "cplus.met"

#line 2766 "cplus.met"
#line 2186 "cplus.met"
PPTREE cplus::long_type ( int error_free)
#line 2186 "cplus.met"
{
#line 2186 "cplus.met"
    int  _oldinside_long = inside_long;
#line 2186 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 2186 "cplus.met"
    int _value,_nbPre = 0 ;
#line 2186 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 2186 "cplus.met"
    int _Debug = TRACE_RULE("long_type",TRACE_ENTER,(PPTREE)0);
#line 2186 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 2186 "cplus.met"
#line 2186 "cplus.met"
    PPTREE retTree = (PPTREE) 0;
#line 2186 "cplus.met"
#line 2188 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 2188 "cplus.met"
    if (  !SEE_TOKEN( LONG,"long") || !(CommTerm(),1)) {
#line 2188 "cplus.met"
        MulFreeTree(1,retTree);
        TOKEN_EXIT(long_type_exit,"long")
#line 2188 "cplus.met"
    } else {
#line 2188 "cplus.met"
        tokenAhead = 0 ;
#line 2188 "cplus.met"
    }
#line 2188 "cplus.met"
#line 2189 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 2189 "cplus.met"
    switch( lexEl.Value) {
#line 2189 "cplus.met"
#line 2190 "cplus.met"
        case FLOAT : 
#line 2190 "cplus.met"
            tokenAhead = 0 ;
#line 2190 "cplus.met"
            CommTerm();
#line 2190 "cplus.met"
#line 2191 "cplus.met"
#line 2192 "cplus.met"
            if ((inside_long) || 
#line 2192 "cplus.met"
               (inside_signed)){
#line 2192 "cplus.met"
#line 2193 "cplus.met"
                
#line 2193 "cplus.met"
                MulFreeTree(1,retTree);
                LEX_EXIT ("",0);
#line 2193 "cplus.met"
                goto long_type_exit;
#line 2193 "cplus.met"
#line 2193 "cplus.met"
            } else {
#line 2193 "cplus.met"
#line 2195 "cplus.met"
                {
#line 2195 "cplus.met"
                    PPTREE _ptTree0=0;
#line 2195 "cplus.met"
                    {
#line 2195 "cplus.met"
                        PPTREE _ptTree1=0,_ptRes1=0;
#line 2195 "cplus.met"
                        _ptRes1= MakeTree(TLONG, 1);
#line 2195 "cplus.met"
                        {
#line 2195 "cplus.met"
                            PPTREE _ptRes2=0;
#line 2195 "cplus.met"
                            _ptRes2= MakeTree(TFLOAT, 0);
#line 2195 "cplus.met"
                            _ptTree1=_ptRes2;
#line 2195 "cplus.met"
                        }
#line 2195 "cplus.met"
                        ReplaceTree(_ptRes1, 1, _ptTree1);
#line 2195 "cplus.met"
                        _ptTree0=_ptRes1;
#line 2195 "cplus.met"
                    }
#line 2195 "cplus.met"
                    _retValue =_ptTree0;
#line 2195 "cplus.met"
                    goto long_type_ret;
#line 2195 "cplus.met"
                }
#line 2195 "cplus.met"
            }
#line 2195 "cplus.met"
#line 2195 "cplus.met"
            break;
#line 2195 "cplus.met"
#line 2197 "cplus.met"
        case DOUBLE : 
#line 2197 "cplus.met"
            tokenAhead = 0 ;
#line 2197 "cplus.met"
            CommTerm();
#line 2197 "cplus.met"
#line 2198 "cplus.met"
#line 2199 "cplus.met"
            if ((inside_long) || 
#line 2199 "cplus.met"
               (inside_signed)){
#line 2199 "cplus.met"
#line 2200 "cplus.met"
                
#line 2200 "cplus.met"
                MulFreeTree(1,retTree);
                LEX_EXIT ("",0);
#line 2200 "cplus.met"
                goto long_type_exit;
#line 2200 "cplus.met"
#line 2200 "cplus.met"
            } else {
#line 2200 "cplus.met"
#line 2202 "cplus.met"
                {
#line 2202 "cplus.met"
                    PPTREE _ptTree0=0;
#line 2202 "cplus.met"
                    {
#line 2202 "cplus.met"
                        PPTREE _ptTree1=0,_ptRes1=0;
#line 2202 "cplus.met"
                        _ptRes1= MakeTree(TLONG, 1);
#line 2202 "cplus.met"
                        {
#line 2202 "cplus.met"
                            PPTREE _ptRes2=0;
#line 2202 "cplus.met"
                            _ptRes2= MakeTree(TDOUBLE, 0);
#line 2202 "cplus.met"
                            _ptTree1=_ptRes2;
#line 2202 "cplus.met"
                        }
#line 2202 "cplus.met"
                        ReplaceTree(_ptRes1, 1, _ptTree1);
#line 2202 "cplus.met"
                        _ptTree0=_ptRes1;
#line 2202 "cplus.met"
                    }
#line 2202 "cplus.met"
                    _retValue =_ptTree0;
#line 2202 "cplus.met"
                    goto long_type_ret;
#line 2202 "cplus.met"
                }
#line 2202 "cplus.met"
            }
#line 2202 "cplus.met"
#line 2202 "cplus.met"
            break;
#line 2202 "cplus.met"
#line 2208 "cplus.met"
        default : 
#line 2208 "cplus.met"
#line 2205 "cplus.met"
#line 2206 "cplus.met"
            {
#line 2206 "cplus.met"
                inside_long = 1 ;
#line 2206 "cplus.met"
#line 2207 "cplus.met"
#line 2208 "cplus.met"
                if (NPUSH_CALL_AFF_VERIF(retTree = ,_Tak(short_long_int_char), 133, cplus)){
#line 2208 "cplus.met"
#line 2209 "cplus.met"
                    {
#line 2209 "cplus.met"
                        PPTREE _ptTree0=0;
#line 2209 "cplus.met"
                        {
#line 2209 "cplus.met"
                            PPTREE _ptRes1=0;
#line 2209 "cplus.met"
                            _ptRes1= MakeTree(TLONG, 1);
#line 2209 "cplus.met"
                            ReplaceTree(_ptRes1, 1, retTree );
#line 2209 "cplus.met"
                            _ptTree0=_ptRes1;
#line 2209 "cplus.met"
                        }
#line 2209 "cplus.met"
                        _retValue =_ptTree0;
#line 2209 "cplus.met"
                        goto long_type_ret;
#line 2209 "cplus.met"
                    }
#line 2209 "cplus.met"
                } else {
#line 2209 "cplus.met"
#line 2211 "cplus.met"
                    {
#line 2211 "cplus.met"
                        PPTREE _ptTree0=0;
#line 2211 "cplus.met"
                        {
#line 2211 "cplus.met"
                            PPTREE _ptRes1=0;
#line 2211 "cplus.met"
                            _ptRes1= MakeTree(TLONG, 1);
#line 2211 "cplus.met"
                            _ptTree0=_ptRes1;
#line 2211 "cplus.met"
                        }
#line 2211 "cplus.met"
                        _retValue =_ptTree0;
#line 2211 "cplus.met"
                        goto long_type_ret;
#line 2211 "cplus.met"
                    }
#line 2211 "cplus.met"
                }
#line 2211 "cplus.met"
#line 2211 "cplus.met"
                inside_long =  _oldinside_long;
#line 2211 "cplus.met"
            }
#line 2211 "cplus.met"
#line 2211 "cplus.met"
            break;
#line 2211 "cplus.met"
    }
#line 2211 "cplus.met"
#line 2211 "cplus.met"
#line 2214 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2214 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 2214 "cplus.met"
inside_long =  _oldinside_long;
#line 2214 "cplus.met"
return((PPTREE) 0);
#line 2214 "cplus.met"

#line 2214 "cplus.met"
long_type_exit :
#line 2214 "cplus.met"

#line 2214 "cplus.met"
    _Debug = TRACE_RULE("long_type",TRACE_EXIT,(PPTREE)0);
#line 2214 "cplus.met"
    _funcLevel--;
#line 2214 "cplus.met"
    inside_long =  _oldinside_long;
#line 2214 "cplus.met"
    return((PPTREE) -1) ;
#line 2214 "cplus.met"

#line 2214 "cplus.met"
long_type_ret :
#line 2214 "cplus.met"
    
#line 2214 "cplus.met"
    _Debug = TRACE_RULE("long_type",TRACE_RETURN,_retValue);
#line 2214 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2214 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 2214 "cplus.met"
    inside_long =  _oldinside_long;
#line 2214 "cplus.met"
    return _retValue ;
#line 2214 "cplus.met"
}
#line 2214 "cplus.met"

#line 2214 "cplus.met"
#line 1969 "cplus.met"
PPTREE cplus::macro ( int error_free)
#line 1969 "cplus.met"
{
#line 1969 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 1969 "cplus.met"
    int _value,_nbPre = 0 ;
#line 1969 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 1969 "cplus.met"
    int _Debug = TRACE_RULE("macro",TRACE_ENTER,(PPTREE)0);
#line 1969 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 1969 "cplus.met"
#line 1969 "cplus.met"
    PPTREE retTree = (PPTREE) 0,valTree = (PPTREE) 0;
#line 1969 "cplus.met"
#line 1971 "cplus.met"
    (tokenAhead == 13|| (specific(),TRACE_LEX(1)));
#line 1971 "cplus.met"
    switch( lexEl.Value) {
#line 1971 "cplus.met"
#line 1972 "cplus.met"
        case META : 
#line 1972 "cplus.met"
        case DECLARE_SERIAL : 
#line 1972 "cplus.met"
            tokenAhead = 0 ;
#line 1972 "cplus.met"
            CommTerm();
#line 1972 "cplus.met"
#line 1972 "cplus.met"
            {
#line 1972 "cplus.met"
                PPTREE _ptRes0=0;
#line 1972 "cplus.met"
                _ptRes0= MakeTree(IDENT, 1);
#line 1972 "cplus.met"
                ReplaceTree(_ptRes0, 1, MakeString ("DECLARE_SERIAL"));
#line 1972 "cplus.met"
                retTree=_ptRes0;
#line 1972 "cplus.met"
            }
#line 1972 "cplus.met"
            break;
#line 1972 "cplus.met"
#line 1973 "cplus.met"
        case DECLARE_DYNAMIC : 
#line 1973 "cplus.met"
            tokenAhead = 0 ;
#line 1973 "cplus.met"
            CommTerm();
#line 1973 "cplus.met"
#line 1973 "cplus.met"
            {
#line 1973 "cplus.met"
                PPTREE _ptRes0=0;
#line 1973 "cplus.met"
                _ptRes0= MakeTree(IDENT, 1);
#line 1973 "cplus.met"
                ReplaceTree(_ptRes0, 1, MakeString ("DECLARE_DYNAMIC"));
#line 1973 "cplus.met"
                retTree=_ptRes0;
#line 1973 "cplus.met"
            }
#line 1973 "cplus.met"
            break;
#line 1973 "cplus.met"
#line 1974 "cplus.met"
        case DECLARE_MESSAGE_MAP : 
#line 1974 "cplus.met"
            tokenAhead = 0 ;
#line 1974 "cplus.met"
            CommTerm();
#line 1974 "cplus.met"
#line 1974 "cplus.met"
            {
#line 1974 "cplus.met"
                PPTREE _ptRes0=0;
#line 1974 "cplus.met"
                _ptRes0= MakeTree(IDENT, 1);
#line 1974 "cplus.met"
                ReplaceTree(_ptRes0, 1, MakeString ("DECLARE_MESSAGE_MAP"));
#line 1974 "cplus.met"
                retTree=_ptRes0;
#line 1974 "cplus.met"
            }
#line 1974 "cplus.met"
            break;
#line 1974 "cplus.met"
#line 1975 "cplus.met"
        case IMPLEMENT_DYNAMIC : 
#line 1975 "cplus.met"
            tokenAhead = 0 ;
#line 1975 "cplus.met"
            CommTerm();
#line 1975 "cplus.met"
#line 1975 "cplus.met"
            {
#line 1975 "cplus.met"
                PPTREE _ptRes0=0;
#line 1975 "cplus.met"
                _ptRes0= MakeTree(IDENT, 1);
#line 1975 "cplus.met"
                ReplaceTree(_ptRes0, 1, MakeString ("IMPLEMENT_DYNAMIC"));
#line 1975 "cplus.met"
                retTree=_ptRes0;
#line 1975 "cplus.met"
            }
#line 1975 "cplus.met"
            break;
#line 1975 "cplus.met"
#line 1976 "cplus.met"
        case IMPLEMENT_DYNCREATE : 
#line 1976 "cplus.met"
            tokenAhead = 0 ;
#line 1976 "cplus.met"
            CommTerm();
#line 1976 "cplus.met"
#line 1976 "cplus.met"
            {
#line 1976 "cplus.met"
                PPTREE _ptRes0=0;
#line 1976 "cplus.met"
                _ptRes0= MakeTree(IDENT, 1);
#line 1976 "cplus.met"
                ReplaceTree(_ptRes0, 1, MakeString ("IMPLEMENT_DYNCREATE"));
#line 1976 "cplus.met"
                retTree=_ptRes0;
#line 1976 "cplus.met"
            }
#line 1976 "cplus.met"
            break;
#line 1976 "cplus.met"
#line 1977 "cplus.met"
        case IMPLEMENT_SERIAL : 
#line 1977 "cplus.met"
            tokenAhead = 0 ;
#line 1977 "cplus.met"
            CommTerm();
#line 1977 "cplus.met"
#line 1977 "cplus.met"
            {
#line 1977 "cplus.met"
                PPTREE _ptRes0=0;
#line 1977 "cplus.met"
                _ptRes0= MakeTree(IDENT, 1);
#line 1977 "cplus.met"
                ReplaceTree(_ptRes0, 1, MakeString ("IMPLEMENT_SERIAL"));
#line 1977 "cplus.met"
                retTree=_ptRes0;
#line 1977 "cplus.met"
            }
#line 1977 "cplus.met"
            break;
#line 1977 "cplus.met"
#line 1978 "cplus.met"
        case BEGIN_MESSAGE_MAP : 
#line 1978 "cplus.met"
            tokenAhead = 0 ;
#line 1978 "cplus.met"
            CommTerm();
#line 1978 "cplus.met"
#line 1978 "cplus.met"
            {
#line 1978 "cplus.met"
                PPTREE _ptRes0=0;
#line 1978 "cplus.met"
                _ptRes0= MakeTree(IDENT, 1);
#line 1978 "cplus.met"
                ReplaceTree(_ptRes0, 1, MakeString ("BEGIN_MESSAGE_MAP"));
#line 1978 "cplus.met"
                retTree=_ptRes0;
#line 1978 "cplus.met"
            }
#line 1978 "cplus.met"
            break;
#line 1978 "cplus.met"
#line 1979 "cplus.met"
        case END_MESSAGE_MAP : 
#line 1979 "cplus.met"
            tokenAhead = 0 ;
#line 1979 "cplus.met"
            CommTerm();
#line 1979 "cplus.met"
#line 1979 "cplus.met"
            {
#line 1979 "cplus.met"
                PPTREE _ptRes0=0;
#line 1979 "cplus.met"
                _ptRes0= MakeTree(IDENT, 1);
#line 1979 "cplus.met"
                ReplaceTree(_ptRes0, 1, MakeString ("END_MESSAGE_MAP"));
#line 1979 "cplus.met"
                retTree=_ptRes0;
#line 1979 "cplus.met"
            }
#line 1979 "cplus.met"
            break;
#line 1979 "cplus.met"
#line 1980 "cplus.met"
        case CATCH_UPPER : 
#line 1980 "cplus.met"
            tokenAhead = 0 ;
#line 1980 "cplus.met"
            CommTerm();
#line 1980 "cplus.met"
#line 1980 "cplus.met"
            {
#line 1980 "cplus.met"
                PPTREE _ptRes0=0;
#line 1980 "cplus.met"
                _ptRes0= MakeTree(IDENT, 1);
#line 1980 "cplus.met"
                ReplaceTree(_ptRes0, 1, MakeString ("CATCH"));
#line 1980 "cplus.met"
                retTree=_ptRes0;
#line 1980 "cplus.met"
            }
#line 1980 "cplus.met"
            break;
#line 1980 "cplus.met"
#line 1981 "cplus.met"
        case CATCH_ALL : 
#line 1981 "cplus.met"
            tokenAhead = 0 ;
#line 1981 "cplus.met"
            CommTerm();
#line 1981 "cplus.met"
#line 1981 "cplus.met"
            {
#line 1981 "cplus.met"
                PPTREE _ptRes0=0;
#line 1981 "cplus.met"
                _ptRes0= MakeTree(IDENT, 1);
#line 1981 "cplus.met"
                ReplaceTree(_ptRes0, 1, MakeString ("CATCH_ALL"));
#line 1981 "cplus.met"
                retTree=_ptRes0;
#line 1981 "cplus.met"
            }
#line 1981 "cplus.met"
            break;
#line 1981 "cplus.met"
#line 1982 "cplus.met"
        case AND_CATCH : 
#line 1982 "cplus.met"
            tokenAhead = 0 ;
#line 1982 "cplus.met"
            CommTerm();
#line 1982 "cplus.met"
#line 1982 "cplus.met"
            {
#line 1982 "cplus.met"
                PPTREE _ptRes0=0;
#line 1982 "cplus.met"
                _ptRes0= MakeTree(IDENT, 1);
#line 1982 "cplus.met"
                ReplaceTree(_ptRes0, 1, MakeString ("AND_CATCH"));
#line 1982 "cplus.met"
                retTree=_ptRes0;
#line 1982 "cplus.met"
            }
#line 1982 "cplus.met"
            break;
#line 1982 "cplus.met"
#line 1983 "cplus.met"
        default : 
#line 1983 "cplus.met"
#line 1983 "cplus.met"
            
#line 1983 "cplus.met"
            MulFreeTree(2,retTree,valTree);
            LEX_EXIT ("",0);
#line 1983 "cplus.met"
            goto macro_exit;
#line 1983 "cplus.met"
            break;
#line 1983 "cplus.met"
    }
#line 1983 "cplus.met"
#line 1985 "cplus.met"
    {
#line 1985 "cplus.met"
        PPTREE _ptRes0=0;
#line 1985 "cplus.met"
        _ptRes0= MakeTree(MACRO, 2);
#line 1985 "cplus.met"
        ReplaceTree(_ptRes0, 1, retTree );
#line 1985 "cplus.met"
        retTree=_ptRes0;
#line 1985 "cplus.met"
    }
#line 1985 "cplus.met"
#line 1986 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 1986 "cplus.met"
    if (  !SEE_TOKEN( POUV,"(") || !(CommTerm(),1)) {
#line 1986 "cplus.met"
        MulFreeTree(2,retTree,valTree);
        TOKEN_EXIT(macro_exit,"(")
#line 1986 "cplus.met"
    } else {
#line 1986 "cplus.met"
        tokenAhead = 0 ;
#line 1986 "cplus.met"
    }
#line 1986 "cplus.met"
#line 1987 "cplus.met"
    if (NPUSH_CALL_AFF_VERIF(valTree = ,_Tak(expression), 66, cplus)){
#line 1987 "cplus.met"
#line 1988 "cplus.met"
        ReplaceTree(retTree ,2 ,valTree );
#line 1988 "cplus.met"
#line 1988 "cplus.met"
    }
#line 1988 "cplus.met"
#line 1989 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 1989 "cplus.met"
    if (  !SEE_TOKEN( PFER,")") || !(CommTerm(),1)) {
#line 1989 "cplus.met"
        MulFreeTree(2,retTree,valTree);
        TOKEN_EXIT(macro_exit,")")
#line 1989 "cplus.met"
    } else {
#line 1989 "cplus.met"
        tokenAhead = 0 ;
#line 1989 "cplus.met"
    }
#line 1989 "cplus.met"
#line 1990 "cplus.met"
    if ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN(PVIR,";") && (tokenAhead = 0,CommTerm(),1)){
#line 1990 "cplus.met"
#line 1990 "cplus.met"
    }
#line 1990 "cplus.met"
#line 1992 "cplus.met"
    {
#line 1992 "cplus.met"
        _retValue = retTree ;
#line 1992 "cplus.met"
        goto macro_ret;
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
macro_exit :
#line 1993 "cplus.met"

#line 1993 "cplus.met"
    _Debug = TRACE_RULE("macro",TRACE_EXIT,(PPTREE)0);
#line 1993 "cplus.met"
    _funcLevel--;
#line 1993 "cplus.met"
    return((PPTREE) -1) ;
#line 1993 "cplus.met"

#line 1993 "cplus.met"
macro_ret :
#line 1993 "cplus.met"
    
#line 1993 "cplus.met"
    _Debug = TRACE_RULE("macro",TRACE_RETURN,_retValue);
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
#line 1995 "cplus.met"
PPTREE cplus::macro_extended ( int error_free)
#line 1995 "cplus.met"
{
#line 1995 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 1995 "cplus.met"
    int _value,_nbPre = 0 ;
#line 1995 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 1995 "cplus.met"
    int _Debug = TRACE_RULE("macro_extended",TRACE_ENTER,(PPTREE)0);
#line 1995 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 1995 "cplus.met"
#line 1995 "cplus.met"
    PPTREE retTree = (PPTREE) 0,valTree = (PPTREE) 0;
#line 1995 "cplus.met"
#line 1997 "cplus.met"
#line 1998 "cplus.met"
    if(((tokenAhead == 13|| (specific(),TRACE_LEX(1)))&&TERM_OR_META(DECLARE_SERIAL,"DECLARE_SERIAL") && (tokenAhead = 0,CommTerm(),1))){
#line 1998 "cplus.met"
#line 1998 "cplus.met"
        {
#line 1998 "cplus.met"
            PPTREE _ptRes0=0;
#line 1998 "cplus.met"
            _ptRes0= MakeTree(IDENT, 1);
#line 1998 "cplus.met"
            ReplaceTree(_ptRes0, 1, MakeString ("DECLARE_SERIAL"));
#line 1998 "cplus.met"
            retTree=_ptRes0;
#line 1998 "cplus.met"
        }
#line 1998 "cplus.met"
    } else 
#line 1998 "cplus.met"
#line 1999 "cplus.met"
    if(((tokenAhead == 13|| (specific(),TRACE_LEX(1)))&&TERM_OR_META(IMPLEMENT_DYNAMIC,"IMPLEMENT_DYNAMIC") && (tokenAhead = 0,CommTerm(),1))){
#line 1999 "cplus.met"
#line 1999 "cplus.met"
        {
#line 1999 "cplus.met"
            PPTREE _ptRes0=0;
#line 1999 "cplus.met"
            _ptRes0= MakeTree(IDENT, 1);
#line 1999 "cplus.met"
            ReplaceTree(_ptRes0, 1, MakeString ("IMPLEMENT_DYNAMIC"));
#line 1999 "cplus.met"
            retTree=_ptRes0;
#line 1999 "cplus.met"
        }
#line 1999 "cplus.met"
    } else 
#line 1999 "cplus.met"
#line 2000 "cplus.met"
    if(((tokenAhead == 13|| (specific(),TRACE_LEX(1)))&&TERM_OR_META(IMPLEMENT_DYNCREATE,"IMPLEMENT_DYNCREATE") && (tokenAhead = 0,CommTerm(),1))){
#line 2000 "cplus.met"
#line 2000 "cplus.met"
        {
#line 2000 "cplus.met"
            PPTREE _ptRes0=0;
#line 2000 "cplus.met"
            _ptRes0= MakeTree(IDENT, 1);
#line 2000 "cplus.met"
            ReplaceTree(_ptRes0, 1, MakeString ("IMPLEMENT_DYNCREATE"));
#line 2000 "cplus.met"
            retTree=_ptRes0;
#line 2000 "cplus.met"
        }
#line 2000 "cplus.met"
    } else 
#line 2000 "cplus.met"
#line 2001 "cplus.met"
    if(((tokenAhead == 13|| (specific(),TRACE_LEX(1)))&&TERM_OR_META(IMPLEMENT_SERIAL,"IMPLEMENT_SERIAL") && (tokenAhead = 0,CommTerm(),1))){
#line 2001 "cplus.met"
#line 2001 "cplus.met"
        {
#line 2001 "cplus.met"
            PPTREE _ptRes0=0;
#line 2001 "cplus.met"
            _ptRes0= MakeTree(IDENT, 1);
#line 2001 "cplus.met"
            ReplaceTree(_ptRes0, 1, MakeString ("IMPLEMENT_SERIAL"));
#line 2001 "cplus.met"
            retTree=_ptRes0;
#line 2001 "cplus.met"
        }
#line 2001 "cplus.met"
    } else 
#line 2001 "cplus.met"
#line 2002 "cplus.met"
    if(((tokenAhead == 13|| (specific(),TRACE_LEX(1)))&&TERM_OR_META(DECLARE_DYNAMIC,"DECLARE_DYNAMIC") && (tokenAhead = 0,CommTerm(),1))){
#line 2002 "cplus.met"
#line 2002 "cplus.met"
        {
#line 2002 "cplus.met"
            PPTREE _ptRes0=0;
#line 2002 "cplus.met"
            _ptRes0= MakeTree(IDENT, 1);
#line 2002 "cplus.met"
            ReplaceTree(_ptRes0, 1, MakeString ("DECLARE_DYNAMIC"));
#line 2002 "cplus.met"
            retTree=_ptRes0;
#line 2002 "cplus.met"
        }
#line 2002 "cplus.met"
    } else 
#line 2002 "cplus.met"
#line 2003 "cplus.met"
    if(((tokenAhead == 13|| (specific(),TRACE_LEX(1)))&&TERM_OR_META(BEGIN_MESSAGE_MAP,"BEGIN_MESSAGE_MAP") && (tokenAhead = 0,CommTerm(),1))){
#line 2003 "cplus.met"
#line 2003 "cplus.met"
        {
#line 2003 "cplus.met"
            PPTREE _ptRes0=0;
#line 2003 "cplus.met"
            _ptRes0= MakeTree(IDENT, 1);
#line 2003 "cplus.met"
            ReplaceTree(_ptRes0, 1, MakeString ("BEGIN_MESSAGE_MAP"));
#line 2003 "cplus.met"
            retTree=_ptRes0;
#line 2003 "cplus.met"
        }
#line 2003 "cplus.met"
    } else 
#line 2003 "cplus.met"
#line 2004 "cplus.met"
    if(((tokenAhead == 13|| (specific(),TRACE_LEX(1)))&&TERM_OR_META(CATCH_UPPER,"CATCH_UPPER") && (tokenAhead = 0,CommTerm(),1))){
#line 2004 "cplus.met"
#line 2004 "cplus.met"
        {
#line 2004 "cplus.met"
            PPTREE _ptRes0=0;
#line 2004 "cplus.met"
            _ptRes0= MakeTree(IDENT, 1);
#line 2004 "cplus.met"
            ReplaceTree(_ptRes0, 1, MakeString ("CATCH"));
#line 2004 "cplus.met"
            retTree=_ptRes0;
#line 2004 "cplus.met"
        }
#line 2004 "cplus.met"
    } else 
#line 2004 "cplus.met"
#line 2005 "cplus.met"
    if(((tokenAhead == 13|| (specific(),TRACE_LEX(1)))&&TERM_OR_META(CATCH_ALL,"CATCH_ALL") && (tokenAhead = 0,CommTerm(),1))){
#line 2005 "cplus.met"
#line 2005 "cplus.met"
        {
#line 2005 "cplus.met"
            PPTREE _ptRes0=0;
#line 2005 "cplus.met"
            _ptRes0= MakeTree(IDENT, 1);
#line 2005 "cplus.met"
            ReplaceTree(_ptRes0, 1, MakeString ("CATCH_ALL"));
#line 2005 "cplus.met"
            retTree=_ptRes0;
#line 2005 "cplus.met"
        }
#line 2005 "cplus.met"
    } else 
#line 2005 "cplus.met"
#line 2006 "cplus.met"
    if(((tokenAhead == 13|| (specific(),TRACE_LEX(1)))&&TERM_OR_META(AND_CATCH,"AND_CATCH") && (tokenAhead = 0,CommTerm(),1))){
#line 2006 "cplus.met"
#line 2006 "cplus.met"
        {
#line 2006 "cplus.met"
            PPTREE _ptRes0=0;
#line 2006 "cplus.met"
            _ptRes0= MakeTree(IDENT, 1);
#line 2006 "cplus.met"
            ReplaceTree(_ptRes0, 1, MakeString ("AND_CATCH"));
#line 2006 "cplus.met"
            retTree=_ptRes0;
#line 2006 "cplus.met"
        }
#line 2006 "cplus.met"
    } else 
#line 2006 "cplus.met"
#line 2007 "cplus.met"
    if(((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN( IDENT,"IDENT"))){
#line 2007 "cplus.met"
#line 2007 "cplus.met"
        {
#line 2007 "cplus.met"
            PPTREE _ptTree0=0,_ptRes0=0;
#line 2007 "cplus.met"
            _ptRes0= MakeTree(IDENT, 1);
#line 2007 "cplus.met"
            (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 2007 "cplus.met"
            if ( ! TERM_OR_META(IDENT,"IDENT") || !(BUILD_TERM_META(_ptTree0))) {
#line 2007 "cplus.met"
                MulFreeTree(4,_ptRes0,_ptTree0,retTree,valTree);
                TOKEN_EXIT(macro_extended_exit,"IDENT")
#line 2007 "cplus.met"
            } else {
#line 2007 "cplus.met"
                tokenAhead = 0 ;
#line 2007 "cplus.met"
            }
#line 2007 "cplus.met"
            ReplaceTree(_ptRes0, 1, _ptTree0);
#line 2007 "cplus.met"
            retTree=_ptRes0;
#line 2007 "cplus.met"
        }
#line 2007 "cplus.met"
    } else 
#line 2007 "cplus.met"
#line 2008 "cplus.met"
    if (1) {
#line 2008 "cplus.met"
#line 2008 "cplus.met"
        
#line 2008 "cplus.met"
        MulFreeTree(2,retTree,valTree);
        LEX_EXIT ("",0);
#line 2008 "cplus.met"
        goto macro_extended_exit;
#line 2008 "cplus.met"
    } else 
#line 2008 "cplus.met"
     ;
#line 2008 "cplus.met"
#line 2010 "cplus.met"
    {
#line 2010 "cplus.met"
        PPTREE _ptRes0=0;
#line 2010 "cplus.met"
        _ptRes0= MakeTree(MACRO, 2);
#line 2010 "cplus.met"
        ReplaceTree(_ptRes0, 1, retTree );
#line 2010 "cplus.met"
        retTree=_ptRes0;
#line 2010 "cplus.met"
    }
#line 2010 "cplus.met"
#line 2011 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 2011 "cplus.met"
    if (  !SEE_TOKEN( POUV,"(") || !(CommTerm(),1)) {
#line 2011 "cplus.met"
        MulFreeTree(2,retTree,valTree);
        TOKEN_EXIT(macro_extended_exit,"(")
#line 2011 "cplus.met"
    } else {
#line 2011 "cplus.met"
        tokenAhead = 0 ;
#line 2011 "cplus.met"
    }
#line 2011 "cplus.met"
#line 2012 "cplus.met"
    if (NPUSH_CALL_AFF_VERIF(valTree = ,_Tak(expression), 66, cplus)){
#line 2012 "cplus.met"
#line 2013 "cplus.met"
        ReplaceTree(retTree ,2 ,valTree );
#line 2013 "cplus.met"
#line 2013 "cplus.met"
    }
#line 2013 "cplus.met"
#line 2014 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 2014 "cplus.met"
    if (  !SEE_TOKEN( PFER,")") || !(CommTerm(),1)) {
#line 2014 "cplus.met"
        MulFreeTree(2,retTree,valTree);
        TOKEN_EXIT(macro_extended_exit,")")
#line 2014 "cplus.met"
    } else {
#line 2014 "cplus.met"
        tokenAhead = 0 ;
#line 2014 "cplus.met"
    }
#line 2014 "cplus.met"
#line 2015 "cplus.met"
    if ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN(PVIR,";") && (tokenAhead = 0,CommTerm(),1)){
#line 2015 "cplus.met"
#line 2015 "cplus.met"
    }
#line 2015 "cplus.met"
#line 2017 "cplus.met"
    {
#line 2017 "cplus.met"
        _retValue = retTree ;
#line 2017 "cplus.met"
        goto macro_extended_ret;
#line 2017 "cplus.met"
        
#line 2017 "cplus.met"
    }
#line 2017 "cplus.met"
#line 2017 "cplus.met"
#line 2017 "cplus.met"

#line 2018 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2018 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 2018 "cplus.met"
return((PPTREE) 0);
#line 2018 "cplus.met"

#line 2018 "cplus.met"
macro_extended_exit :
#line 2018 "cplus.met"

#line 2018 "cplus.met"
    _Debug = TRACE_RULE("macro_extended",TRACE_EXIT,(PPTREE)0);
#line 2018 "cplus.met"
    _funcLevel--;
#line 2018 "cplus.met"
    return((PPTREE) -1) ;
#line 2018 "cplus.met"

#line 2018 "cplus.met"
macro_extended_ret :
#line 2018 "cplus.met"
    
#line 2018 "cplus.met"
    _Debug = TRACE_RULE("macro_extended",TRACE_RETURN,_retValue);
#line 2018 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2018 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 2018 "cplus.met"
    return _retValue ;
#line 2018 "cplus.met"
}
#line 2018 "cplus.met"

#line 2018 "cplus.met"
#line 766 "cplus.met"
PPTREE cplus::main_entry ( int error_free)
#line 766 "cplus.met"
{
#line 766 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 766 "cplus.met"
    int _value,_nbPre = 0 ;
#line 766 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 766 "cplus.met"
    int _Debug = TRACE_RULE("main_entry",TRACE_ENTER,(PPTREE)0);
#line 766 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 766 "cplus.met"
#line 767 "cplus.met"
    {
#line 767 "cplus.met"
        PPTREE _ptTree0=0;
#line 767 "cplus.met"
        if ( (_ptTree0=NQUICK_CALL(_Tak(program)(error_free), 117, cplus))== (PPTREE) -1 ) {
#line 767 "cplus.met"
            MulFreeTree(1,_ptTree0);
            PROG_EXIT(main_entry_exit,"main_entry")
#line 767 "cplus.met"
        }
#line 767 "cplus.met"
        _retValue =_ptTree0;
#line 767 "cplus.met"
        goto main_entry_ret;
#line 767 "cplus.met"
    }
#line 767 "cplus.met"
#line 767 "cplus.met"
#line 767 "cplus.met"

#line 768 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 768 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 768 "cplus.met"
return((PPTREE) 0);
#line 768 "cplus.met"

#line 768 "cplus.met"
main_entry_exit :
#line 768 "cplus.met"

#line 768 "cplus.met"
    _Debug = TRACE_RULE("main_entry",TRACE_EXIT,(PPTREE)0);
#line 768 "cplus.met"
    _funcLevel--;
#line 768 "cplus.met"
    return((PPTREE) -1) ;
#line 768 "cplus.met"

#line 768 "cplus.met"
main_entry_ret :
#line 768 "cplus.met"
    
#line 768 "cplus.met"
    _Debug = TRACE_RULE("main_entry",TRACE_RETURN,_retValue);
#line 768 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 768 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 768 "cplus.met"
    return _retValue ;
#line 768 "cplus.met"
}
#line 768 "cplus.met"

#line 768 "cplus.met"
#line 2278 "cplus.met"
PPTREE cplus::member_declarator ( int error_free)
#line 2278 "cplus.met"
{
#line 2278 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 2278 "cplus.met"
    int _value,_nbPre = 0 ;
#line 2278 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 2278 "cplus.met"
    int _Debug = TRACE_RULE("member_declarator",TRACE_ENTER,(PPTREE)0);
#line 2278 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 2278 "cplus.met"
#line 2278 "cplus.met"
    PPTREE retTree = (PPTREE) 0;
#line 2278 "cplus.met"
#line 2280 "cplus.met"
    {
#line 2280 "cplus.met"
        PPTREE _ptTree0=0,_ptRes0=0;
#line 2280 "cplus.met"
        _ptRes0= MakeTree(MEMBER_DECLARATOR, 2);
#line 2280 "cplus.met"
        if ( (_ptTree0=NQUICK_CALL(_Tak(complete_class_name)(error_free), 31, cplus))== (PPTREE) -1 ) {
#line 2280 "cplus.met"
            MulFreeTree(3,_ptRes0,_ptTree0,retTree);
            PROG_EXIT(member_declarator_exit,"member_declarator")
#line 2280 "cplus.met"
        }
#line 2280 "cplus.met"
        ReplaceTree(_ptRes0, 1, _ptTree0);
#line 2280 "cplus.met"
        retTree=_ptRes0;
#line 2280 "cplus.met"
    }
#line 2280 "cplus.met"
#line 2281 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 2281 "cplus.met"
    if (  !SEE_TOKEN( DPOIDPOI,"::") || !(CommTerm(),1)) {
#line 2281 "cplus.met"
        MulFreeTree(1,retTree);
        TOKEN_EXIT(member_declarator_exit,"::")
#line 2281 "cplus.met"
    } else {
#line 2281 "cplus.met"
        tokenAhead = 0 ;
#line 2281 "cplus.met"
    }
#line 2281 "cplus.met"
#line 2282 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 2282 "cplus.met"
    if (  !SEE_TOKEN( ETOI,"*") || !(CommTerm(),1)) {
#line 2282 "cplus.met"
        MulFreeTree(1,retTree);
        TOKEN_EXIT(member_declarator_exit,"*")
#line 2282 "cplus.met"
    } else {
#line 2282 "cplus.met"
        tokenAhead = 0 ;
#line 2282 "cplus.met"
    }
#line 2282 "cplus.met"
#line 2283 "cplus.met"
    {
#line 2283 "cplus.met"
        _retValue = retTree ;
#line 2283 "cplus.met"
        goto member_declarator_ret;
#line 2283 "cplus.met"
        
#line 2283 "cplus.met"
    }
#line 2283 "cplus.met"
#line 2283 "cplus.met"
#line 2283 "cplus.met"

#line 2284 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2284 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 2284 "cplus.met"
return((PPTREE) 0);
#line 2284 "cplus.met"

#line 2284 "cplus.met"
member_declarator_exit :
#line 2284 "cplus.met"

#line 2284 "cplus.met"
    _Debug = TRACE_RULE("member_declarator",TRACE_EXIT,(PPTREE)0);
#line 2284 "cplus.met"
    _funcLevel--;
#line 2284 "cplus.met"
    return((PPTREE) -1) ;
#line 2284 "cplus.met"

#line 2284 "cplus.met"
member_declarator_ret :
#line 2284 "cplus.met"
    
#line 2284 "cplus.met"
    _Debug = TRACE_RULE("member_declarator",TRACE_RETURN,_retValue);
#line 2284 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2284 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 2284 "cplus.met"
    return _retValue ;
#line 2284 "cplus.met"
}
#line 2284 "cplus.met"

#line 2284 "cplus.met"
#line 2020 "cplus.met"
PPTREE cplus::message_map ( int error_free)
#line 2020 "cplus.met"
{
#line 2020 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 2020 "cplus.met"
    int _value,_nbPre = 0 ;
#line 2020 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 2020 "cplus.met"
    int _Debug = TRACE_RULE("message_map",TRACE_ENTER,(PPTREE)0);
#line 2020 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 2020 "cplus.met"
#line 2020 "cplus.met"
    PPTREE _addlist1 = (PPTREE) 0;
#line 2020 "cplus.met"
#line 2020 "cplus.met"
    PPTREE retTree = (PPTREE) 0,list = (PPTREE) 0;
#line 2020 "cplus.met"
#line 2022 "cplus.met"
    (tokenAhead == 13|| (specific(),TRACE_LEX(1)));
#line 2022 "cplus.met"
    switch( lexEl.Value) {
#line 2022 "cplus.met"
#line 2023 "cplus.met"
        case META : 
#line 2023 "cplus.met"
        case BEGIN_MESSAGE_MAP : 
#line 2023 "cplus.met"
#line 2023 "cplus.met"
            break;
#line 2023 "cplus.met"
        default :
#line 2023 "cplus.met"
            MulFreeTree(3,_addlist1,list,retTree);
            CASE_EXIT(message_map_exit,"BEGIN_MESSAGE_MAP")
#line 2023 "cplus.met"
            break;
#line 2023 "cplus.met"
    }
#line 2023 "cplus.met"
#line 2025 "cplus.met"
    {
#line 2025 "cplus.met"
        PPTREE _ptRes0=0;
#line 2025 "cplus.met"
        _ptRes0= MakeTree(MESSAGE_MAP, 1);
#line 2025 "cplus.met"
        retTree=_ptRes0;
#line 2025 "cplus.met"
    }
#line 2025 "cplus.met"
#line 2025 "cplus.met"
    _addlist1 = list ;
#line 2025 "cplus.met"
#line 2026 "cplus.met"
    while (! ((tokenAhead == 13|| (specific(),TRACE_LEX(1)))&&SEE_TOKEN( END_MESSAGE_MAP,"END_MESSAGE_MAP"))) { 
#line 2026 "cplus.met"
#line 2027 "cplus.met"
#line 2027 "cplus.met"
        {
#line 2027 "cplus.met"
            PPTREE _ptTree0=0;
#line 2027 "cplus.met"
            if ( (_ptTree0=NQUICK_CALL(_Tak(macro_extended)(error_free), 97, cplus))== (PPTREE) -1 ) {
#line 2027 "cplus.met"
                MulFreeTree(4,_ptTree0,_addlist1,list,retTree);
                PROG_EXIT(message_map_exit,"message_map")
#line 2027 "cplus.met"
            }
#line 2027 "cplus.met"
            _addlist1 =AddList(_addlist1 , _ptTree0);
#line 2027 "cplus.met"
        }
#line 2027 "cplus.met"
#line 2027 "cplus.met"
        if (list){
#line 2027 "cplus.met"
#line 2027 "cplus.met"
            _addlist1 = SonTree (_addlist1 ,2 );
#line 2027 "cplus.met"
        } else {
#line 2027 "cplus.met"
#line 2027 "cplus.met"
            list = _addlist1 ;
#line 2027 "cplus.met"
        }
#line 2027 "cplus.met"
    } 
#line 2027 "cplus.met"
#line 2028 "cplus.met"
    if ( (NQUICK_CALL(_Tak(macro)(error_free), 96, cplus))== (PPTREE) -1 ) {
#line 2028 "cplus.met"
        MulFreeTree(3,_addlist1,list,retTree);
        PROG_EXIT(message_map_exit,"message_map")
#line 2028 "cplus.met"
    }
#line 2028 "cplus.met"
#line 2029 "cplus.met"
    {
#line 2029 "cplus.met"
        PPTREE _ptTree0=0;
#line 2029 "cplus.met"
        _ptTree0=ReplaceTree(retTree ,1 ,list );
#line 2029 "cplus.met"
        _retValue =_ptTree0;
#line 2029 "cplus.met"
        goto message_map_ret;
#line 2029 "cplus.met"
    }
#line 2029 "cplus.met"
#line 2029 "cplus.met"
#line 2029 "cplus.met"

#line 2030 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2030 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 2030 "cplus.met"
return((PPTREE) 0);
#line 2030 "cplus.met"

#line 2030 "cplus.met"
message_map_exit :
#line 2030 "cplus.met"

#line 2030 "cplus.met"
    _Debug = TRACE_RULE("message_map",TRACE_EXIT,(PPTREE)0);
#line 2030 "cplus.met"
    _funcLevel--;
#line 2030 "cplus.met"
    return((PPTREE) -1) ;
#line 2030 "cplus.met"

#line 2030 "cplus.met"
message_map_ret :
#line 2030 "cplus.met"
    
#line 2030 "cplus.met"
    _Debug = TRACE_RULE("message_map",TRACE_RETURN,_retValue);
#line 2030 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2030 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 2030 "cplus.met"
    return _retValue ;
#line 2030 "cplus.met"
}
#line 2030 "cplus.met"

#line 2030 "cplus.met"
#line 2849 "cplus.met"
PPTREE cplus::multiplicative_expression ( int error_free)
#line 2849 "cplus.met"
{
#line 2849 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 2849 "cplus.met"
    int _value,_nbPre = 0 ;
#line 2849 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 2849 "cplus.met"
    int _Debug = TRACE_RULE("multiplicative_expression",TRACE_ENTER,(PPTREE)0);
#line 2849 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 2849 "cplus.met"
#line 2849 "cplus.met"
    PPTREE expTree = (PPTREE) 0;
#line 2849 "cplus.met"
#line 2851 "cplus.met"
    if ( (expTree=NQUICK_CALL(_Tak(pm_expression)(error_free), 112, cplus))== (PPTREE) -1 ) {
#line 2851 "cplus.met"
        MulFreeTree(1,expTree);
        PROG_EXIT(multiplicative_expression_exit,"multiplicative_expression")
#line 2851 "cplus.met"
    }
#line 2851 "cplus.met"
#line 2852 "cplus.met"
    while ((((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN( ETOI,"*")) || 
#line 2852 "cplus.met"
           ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN( SLAS,"SLAS"))) || 
#line 2852 "cplus.met"
          ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN( POURC,"%"))) { 
#line 2852 "cplus.met"
#line 2853 "cplus.met"
        (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 2853 "cplus.met"
        switch( lexEl.Value) {
#line 2853 "cplus.met"
#line 2854 "cplus.met"
            case ETOI : 
#line 2854 "cplus.met"
                tokenAhead = 0 ;
#line 2854 "cplus.met"
                CommTerm();
#line 2854 "cplus.met"
#line 2854 "cplus.met"
                {
#line 2854 "cplus.met"
                    PPTREE _ptTree0=0,_ptRes0=0;
#line 2854 "cplus.met"
                    _ptRes0= MakeTree(MUL, 2);
#line 2854 "cplus.met"
                    ReplaceTree(_ptRes0, 1, expTree );
#line 2854 "cplus.met"
                    if ( (_ptTree0=NQUICK_CALL(_Tak(pm_expression)(error_free), 112, cplus))== (PPTREE) -1 ) {
#line 2854 "cplus.met"
                        MulFreeTree(3,_ptRes0,_ptTree0,expTree);
                        PROG_EXIT(multiplicative_expression_exit,"multiplicative_expression")
#line 2854 "cplus.met"
                    }
#line 2854 "cplus.met"
                    ReplaceTree(_ptRes0, 2, _ptTree0);
#line 2854 "cplus.met"
                    expTree=_ptRes0;
#line 2854 "cplus.met"
                }
#line 2854 "cplus.met"
                break;
#line 2854 "cplus.met"
#line 2855 "cplus.met"
            case META : 
#line 2855 "cplus.met"
            case SLAS : 
#line 2855 "cplus.met"
                tokenAhead = 0 ;
#line 2855 "cplus.met"
                CommTerm();
#line 2855 "cplus.met"
#line 2855 "cplus.met"
                {
#line 2855 "cplus.met"
                    PPTREE _ptTree0=0,_ptRes0=0;
#line 2855 "cplus.met"
                    _ptRes0= MakeTree(DIV, 2);
#line 2855 "cplus.met"
                    ReplaceTree(_ptRes0, 1, expTree );
#line 2855 "cplus.met"
                    if ( (_ptTree0=NQUICK_CALL(_Tak(pm_expression)(error_free), 112, cplus))== (PPTREE) -1 ) {
#line 2855 "cplus.met"
                        MulFreeTree(3,_ptRes0,_ptTree0,expTree);
                        PROG_EXIT(multiplicative_expression_exit,"multiplicative_expression")
#line 2855 "cplus.met"
                    }
#line 2855 "cplus.met"
                    ReplaceTree(_ptRes0, 2, _ptTree0);
#line 2855 "cplus.met"
                    expTree=_ptRes0;
#line 2855 "cplus.met"
                }
#line 2855 "cplus.met"
                break;
#line 2855 "cplus.met"
#line 2856 "cplus.met"
            case POURC : 
#line 2856 "cplus.met"
                tokenAhead = 0 ;
#line 2856 "cplus.met"
                CommTerm();
#line 2856 "cplus.met"
#line 2856 "cplus.met"
                {
#line 2856 "cplus.met"
                    PPTREE _ptTree0=0,_ptRes0=0;
#line 2856 "cplus.met"
                    _ptRes0= MakeTree(REM, 2);
#line 2856 "cplus.met"
                    ReplaceTree(_ptRes0, 1, expTree );
#line 2856 "cplus.met"
                    if ( (_ptTree0=NQUICK_CALL(_Tak(pm_expression)(error_free), 112, cplus))== (PPTREE) -1 ) {
#line 2856 "cplus.met"
                        MulFreeTree(3,_ptRes0,_ptTree0,expTree);
                        PROG_EXIT(multiplicative_expression_exit,"multiplicative_expression")
#line 2856 "cplus.met"
                    }
#line 2856 "cplus.met"
                    ReplaceTree(_ptRes0, 2, _ptTree0);
#line 2856 "cplus.met"
                    expTree=_ptRes0;
#line 2856 "cplus.met"
                }
#line 2856 "cplus.met"
                break;
#line 2856 "cplus.met"
            default :
#line 2856 "cplus.met"
                MulFreeTree(1,expTree);
                CASE_EXIT(multiplicative_expression_exit,"either * or SLAS or %")
#line 2856 "cplus.met"
                break;
#line 2856 "cplus.met"
        }
#line 2856 "cplus.met"
    } 
#line 2856 "cplus.met"
#line 2858 "cplus.met"
    {
#line 2858 "cplus.met"
        _retValue = expTree ;
#line 2858 "cplus.met"
        goto multiplicative_expression_ret;
#line 2858 "cplus.met"
        
#line 2858 "cplus.met"
    }
#line 2858 "cplus.met"
#line 2858 "cplus.met"
#line 2858 "cplus.met"

#line 2859 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2859 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 2859 "cplus.met"
return((PPTREE) 0);
#line 2859 "cplus.met"

#line 2859 "cplus.met"
multiplicative_expression_exit :
#line 2859 "cplus.met"

#line 2859 "cplus.met"
    _Debug = TRACE_RULE("multiplicative_expression",TRACE_EXIT,(PPTREE)0);
#line 2859 "cplus.met"
    _funcLevel--;
#line 2859 "cplus.met"
    return((PPTREE) -1) ;
#line 2859 "cplus.met"

#line 2859 "cplus.met"
multiplicative_expression_ret :
#line 2859 "cplus.met"
    
#line 2859 "cplus.met"
    _Debug = TRACE_RULE("multiplicative_expression",TRACE_RETURN,_retValue);
#line 2859 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2859 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 2859 "cplus.met"
    return _retValue ;
#line 2859 "cplus.met"
}
#line 2859 "cplus.met"

#line 2859 "cplus.met"
