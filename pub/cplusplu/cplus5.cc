/*************************************************************************/
/*                                                                       */
/*        Produced by MetaGen version 2.0  -    1989-2006                 */
/*       Syntaxic Analyzer Meta Generator developped by                  */
/*                  Eric Lavillonniere                                   */
/*                                                                       */
/*************************************************************************/

#include "token.h"
#include "cplus.h"


#line 3559 "cplus.met"
PPTREE cplus::name_space ( int error_free)
#line 3559 "cplus.met"
{
#line 3559 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 3559 "cplus.met"
    int _value,_nbPre = 0 ;
#line 3559 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 3559 "cplus.met"
    int _Debug = TRACE_RULE("name_space",TRACE_ENTER,(PPTREE)0);
#line 3559 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 3559 "cplus.met"
#line 3559 "cplus.met"
    PPTREE _addlist1 = (PPTREE) 0;
#line 3559 "cplus.met"
#line 3559 "cplus.met"
    PPTREE list = (PPTREE) 0,retTree = (PPTREE) 0,ident = (PPTREE) 0,attrib = (PPTREE) 0;
#line 3559 "cplus.met"
#line 3561 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3561 "cplus.met"
    switch( lexEl.Value) {
#line 3561 "cplus.met"
#line 3562 "cplus.met"
        case NAMESPACE : 
#line 3562 "cplus.met"
            tokenAhead = 0 ;
#line 3562 "cplus.met"
            CommTerm();
#line 3562 "cplus.met"
#line 3563 "cplus.met"
#line 3565 "cplus.met"
            if ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&TERM_OR_META(IDENT,"IDENT") && !(tokenAhead = 0) && ( BUILD_TERM_META(ident))) {
#line 3565 "cplus.met"
#line 3567 "cplus.met"
                {
#line 3567 "cplus.met"
                    PPTREE _ptRes0=0;
#line 3567 "cplus.met"
                    _ptRes0= MakeTree(IDENT, 1);
#line 3567 "cplus.met"
                    ReplaceTree(_ptRes0, 1, ident );
#line 3567 "cplus.met"
                    ident=_ptRes0;
#line 3567 "cplus.met"
                }
#line 3567 "cplus.met"
            }
#line 3567 "cplus.met"
#line 3568 "cplus.met"
            if (NPUSH_CALL_AFF_VERIF(attrib = ,_Tak(attribute_call), 18, cplus)){
#line 3568 "cplus.met"
#line 3568 "cplus.met"
            }
#line 3568 "cplus.met"
#line 3571 "cplus.met"
            (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3571 "cplus.met"
            switch( lexEl.Value) {
#line 3571 "cplus.met"
#line 3575 "cplus.met"
                case AOUV : 
#line 3575 "cplus.met"
                    tokenAhead = 0 ;
#line 3575 "cplus.met"
                    CommTerm();
#line 3575 "cplus.met"
#line 3574 "cplus.met"
#line 3575 "cplus.met"
                    {
#line 3575 "cplus.met"
                        PPTREE _ptRes0=0;
#line 3575 "cplus.met"
                        _ptRes0= MakeTree(NAMESPACE, 3);
#line 3575 "cplus.met"
                        ReplaceTree(_ptRes0, 1, ident );
#line 3575 "cplus.met"
                        ReplaceTree(_ptRes0, 3, attrib );
#line 3575 "cplus.met"
                        retTree=_ptRes0;
#line 3575 "cplus.met"
                    }
#line 3575 "cplus.met"
#line 3575 "cplus.met"
                    _addlist1 = list ;
#line 3575 "cplus.met"
#line 3576 "cplus.met"
                    while (! ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN(AFER,"}") && (tokenAhead = 0,CommTerm(),1))) { 
#line 3576 "cplus.met"
#line 3577 "cplus.met"
#line 3578 "cplus.met"
                        {
#line 3578 "cplus.met"
                            PPTREE _ptTree0=0;
#line 3578 "cplus.met"
                            if ( (_ptTree0=NQUICK_CALL(_Tak(ext_all)(error_free), 65, cplus))== (PPTREE) -1 ) {
#line 3578 "cplus.met"
                                MulFreeTree(6,_ptTree0,_addlist1,attrib,ident,list,retTree);
                                PROG_EXIT(name_space_exit,"name_space")
#line 3578 "cplus.met"
                            }
#line 3578 "cplus.met"
                            _addlist1 =AddList(_addlist1 , _ptTree0);
#line 3578 "cplus.met"
                        }
#line 3578 "cplus.met"
#line 3578 "cplus.met"
                        if (list){
#line 3578 "cplus.met"
#line 3578 "cplus.met"
                            _addlist1 = SonTree (_addlist1 ,2 );
#line 3578 "cplus.met"
                        } else {
#line 3578 "cplus.met"
#line 3578 "cplus.met"
                            list = _addlist1 ;
#line 3578 "cplus.met"
                        }
#line 3578 "cplus.met"
#line 3578 "cplus.met"
                    } 
#line 3578 "cplus.met"
#line 3580 "cplus.met"
                    {
#line 3580 "cplus.met"
                        PPTREE _ptTree0=0;
#line 3580 "cplus.met"
                        if ( (_ptTree0=NQUICK_CALL(_Tak(none_statement)(error_free), 104, cplus))== (PPTREE) -1 ) {
#line 3580 "cplus.met"
                            MulFreeTree(6,_ptTree0,_addlist1,attrib,ident,list,retTree);
                            PROG_EXIT(name_space_exit,"name_space")
#line 3580 "cplus.met"
                        }
#line 3580 "cplus.met"
                        list =AddList(list , _ptTree0);
#line 3580 "cplus.met"
                    }
#line 3580 "cplus.met"
#line 3581 "cplus.met"
                    {
#line 3581 "cplus.met"
                        PPTREE _ptTree0=0;
#line 3581 "cplus.met"
                        {
#line 3581 "cplus.met"
                            PPTREE _ptRes1=0;
#line 3581 "cplus.met"
                            _ptRes1= MakeTree(COMPOUND_EXT, 1);
#line 3581 "cplus.met"
                            ReplaceTree(_ptRes1, 1, list );
#line 3581 "cplus.met"
                            _ptTree0=_ptRes1;
#line 3581 "cplus.met"
                        }
#line 3581 "cplus.met"
                        ReplaceTree(retTree , 2 , _ptTree0);
#line 3581 "cplus.met"
                    }
#line 3581 "cplus.met"
#line 3581 "cplus.met"
                    break;
#line 3581 "cplus.met"
#line 3585 "cplus.met"
                case EGAL : 
#line 3585 "cplus.met"
                    tokenAhead = 0 ;
#line 3585 "cplus.met"
                    CommTerm();
#line 3585 "cplus.met"
#line 3584 "cplus.met"
#line 3585 "cplus.met"
                    if ((ident == (PPTREE) 0 )){
#line 3585 "cplus.met"
#line 3586 "cplus.met"
                        
#line 3586 "cplus.met"
                        MulFreeTree(5,_addlist1,attrib,ident,list,retTree);
                        LEX_EXIT ("",0);
#line 3586 "cplus.met"
                        goto name_space_exit;
#line 3586 "cplus.met"
#line 3586 "cplus.met"
                    }
#line 3586 "cplus.met"
#line 3587 "cplus.met"
                    {
#line 3587 "cplus.met"
                        PPTREE _ptTree0=0,_ptRes0=0;
#line 3587 "cplus.met"
                        _ptRes0= MakeTree(NAMESPACE_ALIAS, 2);
#line 3587 "cplus.met"
                        ReplaceTree(_ptRes0, 1, ident );
#line 3587 "cplus.met"
                        if ( (_ptTree0=NQUICK_CALL(_Tak(complete_class_name)(error_free), 28, cplus))== (PPTREE) -1 ) {
#line 3587 "cplus.met"
                            MulFreeTree(7,_ptRes0,_ptTree0,_addlist1,attrib,ident,list,retTree);
                            PROG_EXIT(name_space_exit,"name_space")
#line 3587 "cplus.met"
                        }
#line 3587 "cplus.met"
                        ReplaceTree(_ptRes0, 2, _ptTree0);
#line 3587 "cplus.met"
                        retTree=_ptRes0;
#line 3587 "cplus.met"
                    }
#line 3587 "cplus.met"
#line 3587 "cplus.met"
                    break;
#line 3587 "cplus.met"
                default :
#line 3587 "cplus.met"
                    MulFreeTree(5,_addlist1,attrib,ident,list,retTree);
                    CASE_EXIT(name_space_exit,"either { or =")
#line 3587 "cplus.met"
                    break;
#line 3587 "cplus.met"
            }
#line 3587 "cplus.met"
#line 3587 "cplus.met"
            break;
#line 3587 "cplus.met"
#line 3591 "cplus.met"
        case USING : 
#line 3591 "cplus.met"
            tokenAhead = 0 ;
#line 3591 "cplus.met"
            CommTerm();
#line 3591 "cplus.met"
#line 3592 "cplus.met"
#line 3593 "cplus.met"
            if ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN(NAMESPACE,"namespace") && (tokenAhead = 0,CommTerm(),1)){
#line 3593 "cplus.met"
#line 3594 "cplus.met"
#line 3595 "cplus.met"
                if (NPUSH_CALL_AFF_VERIF(attrib = ,_Tak(attribute_call), 18, cplus)){
#line 3595 "cplus.met"
#line 3595 "cplus.met"
                }
#line 3595 "cplus.met"
#line 3597 "cplus.met"
                {
#line 3597 "cplus.met"
                    PPTREE _ptTree0=0,_ptRes0=0;
#line 3597 "cplus.met"
                    _ptRes0= MakeTree(USING_NAMESPACE, 2);
#line 3597 "cplus.met"
                    if ( (_ptTree0=NQUICK_CALL(_Tak(complete_class_name)(error_free), 28, cplus))== (PPTREE) -1 ) {
#line 3597 "cplus.met"
                        MulFreeTree(7,_ptRes0,_ptTree0,_addlist1,attrib,ident,list,retTree);
                        PROG_EXIT(name_space_exit,"name_space")
#line 3597 "cplus.met"
                    }
#line 3597 "cplus.met"
                    ReplaceTree(_ptRes0, 1, _ptTree0);
#line 3597 "cplus.met"
                    ReplaceTree(_ptRes0, 2, attrib );
#line 3597 "cplus.met"
                    retTree=_ptRes0;
#line 3597 "cplus.met"
                }
#line 3597 "cplus.met"
#line 3597 "cplus.met"
#line 3597 "cplus.met"
            } else {
#line 3597 "cplus.met"
#line 3600 "cplus.met"
                {
#line 3600 "cplus.met"
                    PPTREE _ptTree0=0,_ptRes0=0;
#line 3600 "cplus.met"
                    _ptRes0= MakeTree(USING, 1);
#line 3600 "cplus.met"
                    if ( (_ptTree0=NQUICK_CALL(_Tak(complete_class_name)(error_free), 28, cplus))== (PPTREE) -1 ) {
#line 3600 "cplus.met"
                        MulFreeTree(7,_ptRes0,_ptTree0,_addlist1,attrib,ident,list,retTree);
                        PROG_EXIT(name_space_exit,"name_space")
#line 3600 "cplus.met"
                    }
#line 3600 "cplus.met"
                    ReplaceTree(_ptRes0, 1, _ptTree0);
#line 3600 "cplus.met"
                    retTree=_ptRes0;
#line 3600 "cplus.met"
                }
#line 3600 "cplus.met"
            }
#line 3600 "cplus.met"
#line 3601 "cplus.met"
            (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3601 "cplus.met"
            if (  !SEE_TOKEN( PVIR,";") || !(CommTerm(),1)) {
#line 3601 "cplus.met"
                MulFreeTree(5,_addlist1,attrib,ident,list,retTree);
                TOKEN_EXIT(name_space_exit,";")
#line 3601 "cplus.met"
            } else {
#line 3601 "cplus.met"
                tokenAhead = 0 ;
#line 3601 "cplus.met"
            }
#line 3601 "cplus.met"
#line 3601 "cplus.met"
            break;
#line 3601 "cplus.met"
        default :
#line 3601 "cplus.met"
            MulFreeTree(5,_addlist1,attrib,ident,list,retTree);
            CASE_EXIT(name_space_exit,"either namespace or using")
#line 3601 "cplus.met"
            break;
#line 3601 "cplus.met"
    }
#line 3601 "cplus.met"
#line 3604 "cplus.met"
    {
#line 3604 "cplus.met"
        _retValue = retTree ;
#line 3604 "cplus.met"
        goto name_space_ret;
#line 3604 "cplus.met"
        
#line 3604 "cplus.met"
    }
#line 3604 "cplus.met"
#line 3604 "cplus.met"
#line 3604 "cplus.met"

#line 3605 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 3605 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 3605 "cplus.met"
return((PPTREE) 0);
#line 3605 "cplus.met"

#line 3605 "cplus.met"
name_space_exit :
#line 3605 "cplus.met"

#line 3605 "cplus.met"
    _Debug = TRACE_RULE("name_space",TRACE_EXIT,(PPTREE)0);
#line 3605 "cplus.met"
    _funcLevel--;
#line 3605 "cplus.met"
    return((PPTREE) -1) ;
#line 3605 "cplus.met"

#line 3605 "cplus.met"
name_space_ret :
#line 3605 "cplus.met"
    
#line 3605 "cplus.met"
    _Debug = TRACE_RULE("name_space",TRACE_RETURN,_retValue);
#line 3605 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 3605 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 3605 "cplus.met"
    return _retValue ;
#line 3605 "cplus.met"
}
#line 3605 "cplus.met"

#line 3605 "cplus.met"
#line 2822 "cplus.met"
PPTREE cplus::new_1 ( int error_free)
#line 2822 "cplus.met"
{
#line 2822 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 2822 "cplus.met"
    int _value,_nbPre = 0 ;
#line 2822 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 2822 "cplus.met"
    int _Debug = TRACE_RULE("new_1",TRACE_ENTER,(PPTREE)0);
#line 2822 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 2822 "cplus.met"
#line 2822 "cplus.met"
    PPTREE retTree = (PPTREE) 0;
#line 2822 "cplus.met"
#line 2824 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 2824 "cplus.met"
    if (  !SEE_TOKEN( POUV,"(") || !(CommTerm(),1)) {
#line 2824 "cplus.met"
        MulFreeTree(1,retTree);
        TOKEN_EXIT(new_1_exit,"(")
#line 2824 "cplus.met"
    } else {
#line 2824 "cplus.met"
        tokenAhead = 0 ;
#line 2824 "cplus.met"
    }
#line 2824 "cplus.met"
#line 2825 "cplus.met"
    if ( (retTree=NQUICK_CALL(_Tak(expression)(error_free), 63, cplus))== (PPTREE) -1 ) {
#line 2825 "cplus.met"
        MulFreeTree(1,retTree);
        PROG_EXIT(new_1_exit,"new_1")
#line 2825 "cplus.met"
    }
#line 2825 "cplus.met"
#line 2826 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 2826 "cplus.met"
    if (  !SEE_TOKEN( PFER,")") || !(CommTerm(),1)) {
#line 2826 "cplus.met"
        MulFreeTree(1,retTree);
        TOKEN_EXIT(new_1_exit,")")
#line 2826 "cplus.met"
    } else {
#line 2826 "cplus.met"
        tokenAhead = 0 ;
#line 2826 "cplus.met"
    }
#line 2826 "cplus.met"
#line 2827 "cplus.met"
    if ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN(POUV,"(") && (tokenAhead = 0,CommTerm(),1)){
#line 2827 "cplus.met"
#line 2828 "cplus.met"
#line 2829 "cplus.met"
        {
#line 2829 "cplus.met"
            PPTREE _ptTree0=0,_ptRes0=0;
#line 2829 "cplus.met"
            _ptRes0= MakeTree(NEW, 4);
#line 2829 "cplus.met"
            ReplaceTree(_ptRes0, 1, retTree );
#line 2829 "cplus.met"
            if ( (_ptTree0=NQUICK_CALL(_Tak(type_name)(error_free), 148, cplus))== (PPTREE) -1 ) {
#line 2829 "cplus.met"
                MulFreeTree(3,_ptRes0,_ptTree0,retTree);
                PROG_EXIT(new_1_exit,"new_1")
#line 2829 "cplus.met"
            }
#line 2829 "cplus.met"
            ReplaceTree(_ptRes0, 2, _ptTree0);
#line 2829 "cplus.met"
            retTree=_ptRes0;
#line 2829 "cplus.met"
        }
#line 2829 "cplus.met"
#line 2830 "cplus.met"
        (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 2830 "cplus.met"
        if (  !SEE_TOKEN( PFER,")") || !(CommTerm(),1)) {
#line 2830 "cplus.met"
            MulFreeTree(1,retTree);
            TOKEN_EXIT(new_1_exit,")")
#line 2830 "cplus.met"
        } else {
#line 2830 "cplus.met"
            tokenAhead = 0 ;
#line 2830 "cplus.met"
        }
#line 2830 "cplus.met"
#line 2831 "cplus.met"
        {
#line 2831 "cplus.met"
            _retValue = retTree ;
#line 2831 "cplus.met"
            goto new_1_ret;
#line 2831 "cplus.met"
            
#line 2831 "cplus.met"
        }
#line 2831 "cplus.met"
#line 2831 "cplus.met"
#line 2831 "cplus.met"
    } else {
#line 2831 "cplus.met"
#line 2834 "cplus.met"
        {
#line 2834 "cplus.met"
            PPTREE _ptTree0=0,_ptRes0=0;
#line 2834 "cplus.met"
            _ptRes0= MakeTree(NEW, 4);
#line 2834 "cplus.met"
            ReplaceTree(_ptRes0, 1, retTree );
#line 2834 "cplus.met"
            if ( (_ptTree0=NQUICK_CALL(_Tak(new_type_name)(error_free), 103, cplus))== (PPTREE) -1 ) {
#line 2834 "cplus.met"
                MulFreeTree(3,_ptRes0,_ptTree0,retTree);
                PROG_EXIT(new_1_exit,"new_1")
#line 2834 "cplus.met"
            }
#line 2834 "cplus.met"
            ReplaceTree(_ptRes0, 2, _ptTree0);
#line 2834 "cplus.met"
            retTree=_ptRes0;
#line 2834 "cplus.met"
        }
#line 2834 "cplus.met"
    }
#line 2834 "cplus.met"
#line 2835 "cplus.met"
    {
#line 2835 "cplus.met"
        _retValue = retTree ;
#line 2835 "cplus.met"
        goto new_1_ret;
#line 2835 "cplus.met"
        
#line 2835 "cplus.met"
    }
#line 2835 "cplus.met"
#line 2835 "cplus.met"
#line 2835 "cplus.met"

#line 2836 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2836 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 2836 "cplus.met"
return((PPTREE) 0);
#line 2836 "cplus.met"

#line 2836 "cplus.met"
new_1_exit :
#line 2836 "cplus.met"

#line 2836 "cplus.met"
    _Debug = TRACE_RULE("new_1",TRACE_EXIT,(PPTREE)0);
#line 2836 "cplus.met"
    _funcLevel--;
#line 2836 "cplus.met"
    return((PPTREE) -1) ;
#line 2836 "cplus.met"

#line 2836 "cplus.met"
new_1_ret :
#line 2836 "cplus.met"
    
#line 2836 "cplus.met"
    _Debug = TRACE_RULE("new_1",TRACE_RETURN,_retValue);
#line 2836 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2836 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 2836 "cplus.met"
    return _retValue ;
#line 2836 "cplus.met"
}
#line 2836 "cplus.met"

#line 2836 "cplus.met"
#line 2838 "cplus.met"
PPTREE cplus::new_2 ( int error_free)
#line 2838 "cplus.met"
{
#line 2838 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 2838 "cplus.met"
    int _value,_nbPre = 0 ;
#line 2838 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 2838 "cplus.met"
    int _Debug = TRACE_RULE("new_2",TRACE_ENTER,(PPTREE)0);
#line 2838 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 2838 "cplus.met"
#line 2838 "cplus.met"
    PPTREE retTree = (PPTREE) 0;
#line 2838 "cplus.met"
#line 2840 "cplus.met"
    if ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN(POUV,"(") && (tokenAhead = 0,CommTerm(),1)){
#line 2840 "cplus.met"
#line 2841 "cplus.met"
#line 2842 "cplus.met"
        {
#line 2842 "cplus.met"
            PPTREE _ptTree0=0,_ptRes0=0;
#line 2842 "cplus.met"
            _ptRes0= MakeTree(NEW, 4);
#line 2842 "cplus.met"
            if ( (_ptTree0=NQUICK_CALL(_Tak(type_name)(error_free), 148, cplus))== (PPTREE) -1 ) {
#line 2842 "cplus.met"
                MulFreeTree(3,_ptRes0,_ptTree0,retTree);
                PROG_EXIT(new_2_exit,"new_2")
#line 2842 "cplus.met"
            }
#line 2842 "cplus.met"
            ReplaceTree(_ptRes0, 2, _ptTree0);
#line 2842 "cplus.met"
            retTree=_ptRes0;
#line 2842 "cplus.met"
        }
#line 2842 "cplus.met"
#line 2843 "cplus.met"
        (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 2843 "cplus.met"
        if (  !SEE_TOKEN( PFER,")") || !(CommTerm(),1)) {
#line 2843 "cplus.met"
            MulFreeTree(1,retTree);
            TOKEN_EXIT(new_2_exit,")")
#line 2843 "cplus.met"
        } else {
#line 2843 "cplus.met"
            tokenAhead = 0 ;
#line 2843 "cplus.met"
        }
#line 2843 "cplus.met"
#line 2844 "cplus.met"
        {
#line 2844 "cplus.met"
            _retValue = retTree ;
#line 2844 "cplus.met"
            goto new_2_ret;
#line 2844 "cplus.met"
            
#line 2844 "cplus.met"
        }
#line 2844 "cplus.met"
#line 2844 "cplus.met"
#line 2844 "cplus.met"
    } else {
#line 2844 "cplus.met"
#line 2847 "cplus.met"
        {
#line 2847 "cplus.met"
            PPTREE _ptTree0=0,_ptRes0=0;
#line 2847 "cplus.met"
            _ptRes0= MakeTree(NEW, 4);
#line 2847 "cplus.met"
            if ( (_ptTree0=NQUICK_CALL(_Tak(new_type_name)(error_free), 103, cplus))== (PPTREE) -1 ) {
#line 2847 "cplus.met"
                MulFreeTree(3,_ptRes0,_ptTree0,retTree);
                PROG_EXIT(new_2_exit,"new_2")
#line 2847 "cplus.met"
            }
#line 2847 "cplus.met"
            ReplaceTree(_ptRes0, 2, _ptTree0);
#line 2847 "cplus.met"
            retTree=_ptRes0;
#line 2847 "cplus.met"
        }
#line 2847 "cplus.met"
    }
#line 2847 "cplus.met"
#line 2848 "cplus.met"
    {
#line 2848 "cplus.met"
        _retValue = retTree ;
#line 2848 "cplus.met"
        goto new_2_ret;
#line 2848 "cplus.met"
        
#line 2848 "cplus.met"
    }
#line 2848 "cplus.met"
#line 2848 "cplus.met"
#line 2848 "cplus.met"

#line 2849 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2849 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 2849 "cplus.met"
return((PPTREE) 0);
#line 2849 "cplus.met"

#line 2849 "cplus.met"
new_2_exit :
#line 2849 "cplus.met"

#line 2849 "cplus.met"
    _Debug = TRACE_RULE("new_2",TRACE_EXIT,(PPTREE)0);
#line 2849 "cplus.met"
    _funcLevel--;
#line 2849 "cplus.met"
    return((PPTREE) -1) ;
#line 2849 "cplus.met"

#line 2849 "cplus.met"
new_2_ret :
#line 2849 "cplus.met"
    
#line 2849 "cplus.met"
    _Debug = TRACE_RULE("new_2",TRACE_RETURN,_retValue);
#line 2849 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2849 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 2849 "cplus.met"
    return _retValue ;
#line 2849 "cplus.met"
}
#line 2849 "cplus.met"

#line 2849 "cplus.met"
#line 2397 "cplus.met"
PPTREE cplus::new_declarator ( int error_free)
#line 2397 "cplus.met"
{
#line 2397 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 2397 "cplus.met"
    int _value,_nbPre = 0 ;
#line 2397 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 2397 "cplus.met"
    int _Debug = TRACE_RULE("new_declarator",TRACE_ENTER,(PPTREE)0);
#line 2397 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 2397 "cplus.met"
#line 2397 "cplus.met"
    PPTREE valTree = (PPTREE) 0,retTree = (PPTREE) 0,expList = (PPTREE) 0;
#line 2397 "cplus.met"
#line 2399 "cplus.met"
    if (NPUSH_CALL_AFF_VERIF(valTree = ,_Tak(range_modifier), 122, cplus)){
#line 2399 "cplus.met"
#line 2400 "cplus.met"
        {
#line 2400 "cplus.met"
            PPTREE _ptTree0=0;
#line 2400 "cplus.met"
            {
#line 2400 "cplus.met"
                PPTREE _ptTree1=0;
#line 2400 "cplus.met"
                if ( (_ptTree1=NQUICK_CALL(_Tak(new_declarator)(error_free), 102, cplus))== (PPTREE) -1 ) {
#line 2400 "cplus.met"
                    MulFreeTree(5,_ptTree1,_ptTree0,expList,retTree,valTree);
                    PROG_EXIT(new_declarator_exit,"new_declarator")
#line 2400 "cplus.met"
                }
#line 2400 "cplus.met"
                _ptTree0=ReplaceTree(valTree , 2 , _ptTree1);
#line 2400 "cplus.met"
            }
#line 2400 "cplus.met"
            _retValue =_ptTree0;
#line 2400 "cplus.met"
            goto new_declarator_ret;
#line 2400 "cplus.met"
        }
#line 2400 "cplus.met"
    }
#line 2400 "cplus.met"
#line 2401 "cplus.met"
    retTree = (PPTREE) 0;
#line 2401 "cplus.met"
#line 2402 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 2402 "cplus.met"
    switch( lexEl.Value) {
#line 2402 "cplus.met"
#line 2403 "cplus.met"
        case ETOI : 
#line 2403 "cplus.met"
            tokenAhead = 0 ;
#line 2403 "cplus.met"
            CommTerm();
#line 2403 "cplus.met"
#line 2403 "cplus.met"
            {
#line 2403 "cplus.met"
                PPTREE _ptTree0=0;
#line 2403 "cplus.met"
                {
#line 2403 "cplus.met"
                    PPTREE _ptTree1=0,_ptRes1=0;
#line 2403 "cplus.met"
                    _ptRes1= MakeTree(TYP_ADDR, 1);
#line 2403 "cplus.met"
                    if ( (_ptTree1=NQUICK_CALL(_Tak(new_declarator)(error_free), 102, cplus))== (PPTREE) -1 ) {
#line 2403 "cplus.met"
                        MulFreeTree(6,_ptRes1,_ptTree1,_ptTree0,expList,retTree,valTree);
                        PROG_EXIT(new_declarator_exit,"new_declarator")
#line 2403 "cplus.met"
                    }
#line 2403 "cplus.met"
                    ReplaceTree(_ptRes1, 1, _ptTree1);
#line 2403 "cplus.met"
                    _ptTree0=_ptRes1;
#line 2403 "cplus.met"
                }
#line 2403 "cplus.met"
                _retValue =_ptTree0;
#line 2403 "cplus.met"
                goto new_declarator_ret;
#line 2403 "cplus.met"
            }
#line 2403 "cplus.met"
            break;
#line 2403 "cplus.met"
#line 2404 "cplus.met"
        case META : 
#line 2404 "cplus.met"
        case IDENT : 
#line 2404 "cplus.met"
#line 2405 "cplus.met"
#line 2406 "cplus.met"
            if ( (valTree=NQUICK_CALL(_Tak(member_declarator)(error_free), 96, cplus))== (PPTREE) -1 ) {
#line 2406 "cplus.met"
                MulFreeTree(3,expList,retTree,valTree);
                PROG_EXIT(new_declarator_exit,"new_declarator")
#line 2406 "cplus.met"
            }
#line 2406 "cplus.met"
#line 2407 "cplus.met"
            {
#line 2407 "cplus.met"
                PPTREE _ptTree0=0;
#line 2407 "cplus.met"
                {
#line 2407 "cplus.met"
                    PPTREE _ptTree1=0;
#line 2407 "cplus.met"
                    if ( (_ptTree1=NQUICK_CALL(_Tak(new_declarator)(error_free), 102, cplus))== (PPTREE) -1 ) {
#line 2407 "cplus.met"
                        MulFreeTree(5,_ptTree1,_ptTree0,expList,retTree,valTree);
                        PROG_EXIT(new_declarator_exit,"new_declarator")
#line 2407 "cplus.met"
                    }
#line 2407 "cplus.met"
                    _ptTree0=ReplaceTree(valTree , 2 , _ptTree1);
#line 2407 "cplus.met"
                }
#line 2407 "cplus.met"
                _retValue =_ptTree0;
#line 2407 "cplus.met"
                goto new_declarator_ret;
#line 2407 "cplus.met"
            }
#line 2407 "cplus.met"
#line 2407 "cplus.met"
            break;
#line 2407 "cplus.met"
#line 2416 "cplus.met"
        default : 
#line 2416 "cplus.met"
#line 2412 "cplus.met"
#line 2414 "cplus.met"
            while ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN(COUV,"[") && (tokenAhead = 0,CommTerm(),1)) { 
#line 2414 "cplus.met"
#line 2415 "cplus.met"
#line 2416 "cplus.met"
                if (NPUSH_CALL_AFF_VERIF(expList = ,_Tak(expression), 63, cplus)){
#line 2416 "cplus.met"
#line 2417 "cplus.met"
                    {
#line 2417 "cplus.met"
                        PPTREE _ptRes0=0;
#line 2417 "cplus.met"
                        _ptRes0= MakeTree(TYP_ARRAY, 2);
#line 2417 "cplus.met"
                        ReplaceTree(_ptRes0, 1, retTree );
#line 2417 "cplus.met"
                        ReplaceTree(_ptRes0, 2, expList );
#line 2417 "cplus.met"
                        retTree=_ptRes0;
#line 2417 "cplus.met"
                    }
#line 2417 "cplus.met"
                } else {
#line 2417 "cplus.met"
#line 2419 "cplus.met"
                    {
#line 2419 "cplus.met"
                        PPTREE _ptRes0=0;
#line 2419 "cplus.met"
                        _ptRes0= MakeTree(TYP_ARRAY, 2);
#line 2419 "cplus.met"
                        ReplaceTree(_ptRes0, 1, retTree );
#line 2419 "cplus.met"
                        retTree=_ptRes0;
#line 2419 "cplus.met"
                    }
#line 2419 "cplus.met"
                }
#line 2419 "cplus.met"
#line 2420 "cplus.met"
                (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 2420 "cplus.met"
                if (  !SEE_TOKEN( CFER,"]") || !(CommTerm(),1)) {
#line 2420 "cplus.met"
                    MulFreeTree(3,expList,retTree,valTree);
                    TOKEN_EXIT(new_declarator_exit,"]")
#line 2420 "cplus.met"
                } else {
#line 2420 "cplus.met"
                    tokenAhead = 0 ;
#line 2420 "cplus.met"
                }
#line 2420 "cplus.met"
#line 2420 "cplus.met"
            } 
#line 2420 "cplus.met"
#line 2422 "cplus.met"
            {
#line 2422 "cplus.met"
                _retValue = retTree ;
#line 2422 "cplus.met"
                goto new_declarator_ret;
#line 2422 "cplus.met"
                
#line 2422 "cplus.met"
            }
#line 2422 "cplus.met"
#line 2422 "cplus.met"
            break;
#line 2422 "cplus.met"
    }
#line 2422 "cplus.met"
#line 2422 "cplus.met"
#line 2424 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2424 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 2424 "cplus.met"
return((PPTREE) 0);
#line 2424 "cplus.met"

#line 2424 "cplus.met"
new_declarator_exit :
#line 2424 "cplus.met"

#line 2424 "cplus.met"
    _Debug = TRACE_RULE("new_declarator",TRACE_EXIT,(PPTREE)0);
#line 2424 "cplus.met"
    _funcLevel--;
#line 2424 "cplus.met"
    return((PPTREE) -1) ;
#line 2424 "cplus.met"

#line 2424 "cplus.met"
new_declarator_ret :
#line 2424 "cplus.met"
    
#line 2424 "cplus.met"
    _Debug = TRACE_RULE("new_declarator",TRACE_RETURN,_retValue);
#line 2424 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2424 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 2424 "cplus.met"
    return _retValue ;
#line 2424 "cplus.met"
}
#line 2424 "cplus.met"

#line 2424 "cplus.met"
#line 2547 "cplus.met"
PPTREE cplus::new_type_name ( int error_free)
#line 2547 "cplus.met"
{
#line 2547 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 2547 "cplus.met"
    int _value,_nbPre = 0 ;
#line 2547 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 2547 "cplus.met"
    int _Debug = TRACE_RULE("new_type_name",TRACE_ENTER,(PPTREE)0);
#line 2547 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 2547 "cplus.met"
#line 2547 "cplus.met"
    PPTREE retTree = (PPTREE) 0,valTree = (PPTREE) 0;
#line 2547 "cplus.met"
#line 2549 "cplus.met"
    if ( (retTree=NQUICK_CALL(_Tak(type_specifier)(error_free), 149, cplus))== (PPTREE) -1 ) {
#line 2549 "cplus.met"
        MulFreeTree(2,retTree,valTree);
        PROG_EXIT(new_type_name_exit,"new_type_name")
#line 2549 "cplus.met"
    }
#line 2549 "cplus.met"
#line 2550 "cplus.met"
    if (NPUSH_CALL_AFF_VERIF(valTree = ,_Tak(new_declarator), 102, cplus)){
#line 2550 "cplus.met"
#line 2551 "cplus.met"
        {
#line 2551 "cplus.met"
            PPTREE _ptRes0=0;
#line 2551 "cplus.met"
            _ptRes0= MakeTree(NEW_DECLARATOR, 2);
#line 2551 "cplus.met"
            ReplaceTree(_ptRes0, 1, retTree );
#line 2551 "cplus.met"
            ReplaceTree(_ptRes0, 2, valTree );
#line 2551 "cplus.met"
            valTree=_ptRes0;
#line 2551 "cplus.met"
        }
#line 2551 "cplus.met"
    } else {
#line 2551 "cplus.met"
#line 2553 "cplus.met"
        valTree = retTree ;
#line 2553 "cplus.met"
    }
#line 2553 "cplus.met"
#line 2554 "cplus.met"
    {
#line 2554 "cplus.met"
        _retValue = valTree ;
#line 2554 "cplus.met"
        goto new_type_name_ret;
#line 2554 "cplus.met"
        
#line 2554 "cplus.met"
    }
#line 2554 "cplus.met"
#line 2554 "cplus.met"
#line 2554 "cplus.met"

#line 2555 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2555 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 2555 "cplus.met"
return((PPTREE) 0);
#line 2555 "cplus.met"

#line 2555 "cplus.met"
new_type_name_exit :
#line 2555 "cplus.met"

#line 2555 "cplus.met"
    _Debug = TRACE_RULE("new_type_name",TRACE_EXIT,(PPTREE)0);
#line 2555 "cplus.met"
    _funcLevel--;
#line 2555 "cplus.met"
    return((PPTREE) -1) ;
#line 2555 "cplus.met"

#line 2555 "cplus.met"
new_type_name_ret :
#line 2555 "cplus.met"
    
#line 2555 "cplus.met"
    _Debug = TRACE_RULE("new_type_name",TRACE_RETURN,_retValue);
#line 2555 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2555 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 2555 "cplus.met"
    return _retValue ;
#line 2555 "cplus.met"
}
#line 2555 "cplus.met"

#line 2555 "cplus.met"
#line 3275 "cplus.met"
PPTREE cplus::none_statement ( int error_free)
#line 3275 "cplus.met"
{
#line 3275 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 3275 "cplus.met"
    int _value,_nbPre = 0 ;
#line 3275 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 3275 "cplus.met"
    int _Debug = TRACE_RULE("none_statement",TRACE_ENTER,(PPTREE)0);
#line 3275 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 3275 "cplus.met"
#line 3276 "cplus.met"
    {
#line 3276 "cplus.met"
        PPTREE _ptTree0=0;
#line 3276 "cplus.met"
        {
#line 3276 "cplus.met"
            PPTREE _ptRes1=0;
#line 3276 "cplus.met"
            _ptRes1= MakeTree(NONE, 0);
#line 3276 "cplus.met"
            _ptTree0=_ptRes1;
#line 3276 "cplus.met"
        }
#line 3276 "cplus.met"
        _retValue =_ptTree0;
#line 3276 "cplus.met"
        goto none_statement_ret;
#line 3276 "cplus.met"
    }
#line 3276 "cplus.met"
#line 3276 "cplus.met"
#line 3276 "cplus.met"

#line 3277 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 3277 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 3277 "cplus.met"
return((PPTREE) 0);
#line 3277 "cplus.met"

#line 3277 "cplus.met"
none_statement_exit :
#line 3277 "cplus.met"

#line 3277 "cplus.met"
    _Debug = TRACE_RULE("none_statement",TRACE_EXIT,(PPTREE)0);
#line 3277 "cplus.met"
    _funcLevel--;
#line 3277 "cplus.met"
    return((PPTREE) -1) ;
#line 3277 "cplus.met"

#line 3277 "cplus.met"
none_statement_ret :
#line 3277 "cplus.met"
    
#line 3277 "cplus.met"
    _Debug = TRACE_RULE("none_statement",TRACE_RETURN,_retValue);
#line 3277 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 3277 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 3277 "cplus.met"
    return _retValue ;
#line 3277 "cplus.met"
}
#line 3277 "cplus.met"

#line 3277 "cplus.met"
#line 2997 "cplus.met"
PPTREE cplus::operator_function_name ( int error_free)
#line 2997 "cplus.met"
{
#line 2997 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 2997 "cplus.met"
    int _value,_nbPre = 0 ;
#line 2997 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 2997 "cplus.met"
    int _Debug = TRACE_RULE("operator_function_name",TRACE_ENTER,(PPTREE)0);
#line 2997 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 2997 "cplus.met"
#line 2997 "cplus.met"
    PPTREE retTree = (PPTREE) 0,valTree = (PPTREE) 0,list = (PPTREE) 0;
#line 2997 "cplus.met"
#line 2999 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 2999 "cplus.met"
    if (  !SEE_TOKEN( OPERATOR,"operator") || !(CommTerm(),1)) {
#line 2999 "cplus.met"
        MulFreeTree(3,list,retTree,valTree);
        TOKEN_EXIT(operator_function_name_exit,"operator")
#line 2999 "cplus.met"
    } else {
#line 2999 "cplus.met"
        tokenAhead = 0 ;
#line 2999 "cplus.met"
    }
#line 2999 "cplus.met"
#line 3000 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3000 "cplus.met"
    switch( lexEl.Value) {
#line 3000 "cplus.met"
#line 3001 "cplus.met"
        case NEW : 
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
                    ReplaceTree(_ptRes1, 1, MakeString ("new"));
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
#line 3002 "cplus.met"
        case DELETE : 
#line 3002 "cplus.met"
            tokenAhead = 0 ;
#line 3002 "cplus.met"
            CommTerm();
#line 3002 "cplus.met"
#line 3002 "cplus.met"
            {
#line 3002 "cplus.met"
                PPTREE _ptTree0=0;
#line 3002 "cplus.met"
                {
#line 3002 "cplus.met"
                    PPTREE _ptRes1=0;
#line 3002 "cplus.met"
                    _ptRes1= MakeTree(OPERATOR, 1);
#line 3002 "cplus.met"
                    ReplaceTree(_ptRes1, 1, MakeString ("delete"));
#line 3002 "cplus.met"
                    _ptTree0=_ptRes1;
#line 3002 "cplus.met"
                }
#line 3002 "cplus.met"
                _retValue =_ptTree0;
#line 3002 "cplus.met"
                goto operator_function_name_ret;
#line 3002 "cplus.met"
            }
#line 3002 "cplus.met"
            break;
#line 3002 "cplus.met"
#line 3003 "cplus.met"
        case PLUS : 
#line 3003 "cplus.met"
            tokenAhead = 0 ;
#line 3003 "cplus.met"
            CommTerm();
#line 3003 "cplus.met"
#line 3003 "cplus.met"
            {
#line 3003 "cplus.met"
                PPTREE _ptTree0=0;
#line 3003 "cplus.met"
                {
#line 3003 "cplus.met"
                    PPTREE _ptRes1=0;
#line 3003 "cplus.met"
                    _ptRes1= MakeTree(OPERATOR, 1);
#line 3003 "cplus.met"
                    ReplaceTree(_ptRes1, 1, MakeString ("+"));
#line 3003 "cplus.met"
                    _ptTree0=_ptRes1;
#line 3003 "cplus.met"
                }
#line 3003 "cplus.met"
                _retValue =_ptTree0;
#line 3003 "cplus.met"
                goto operator_function_name_ret;
#line 3003 "cplus.met"
            }
#line 3003 "cplus.met"
            break;
#line 3003 "cplus.met"
#line 3004 "cplus.met"
        case TIRE : 
#line 3004 "cplus.met"
            tokenAhead = 0 ;
#line 3004 "cplus.met"
            CommTerm();
#line 3004 "cplus.met"
#line 3004 "cplus.met"
            {
#line 3004 "cplus.met"
                PPTREE _ptTree0=0;
#line 3004 "cplus.met"
                {
#line 3004 "cplus.met"
                    PPTREE _ptRes1=0;
#line 3004 "cplus.met"
                    _ptRes1= MakeTree(OPERATOR, 1);
#line 3004 "cplus.met"
                    ReplaceTree(_ptRes1, 1, MakeString ("-"));
#line 3004 "cplus.met"
                    _ptTree0=_ptRes1;
#line 3004 "cplus.met"
                }
#line 3004 "cplus.met"
                _retValue =_ptTree0;
#line 3004 "cplus.met"
                goto operator_function_name_ret;
#line 3004 "cplus.met"
            }
#line 3004 "cplus.met"
            break;
#line 3004 "cplus.met"
#line 3005 "cplus.met"
        case ETOI : 
#line 3005 "cplus.met"
            tokenAhead = 0 ;
#line 3005 "cplus.met"
            CommTerm();
#line 3005 "cplus.met"
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
                    ReplaceTree(_ptRes1, 1, MakeString ("*"));
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
            break;
#line 3005 "cplus.met"
#line 3006 "cplus.met"
        case META : 
#line 3006 "cplus.met"
        case SLAS : 
#line 3006 "cplus.met"
            tokenAhead = 0 ;
#line 3006 "cplus.met"
            CommTerm();
#line 3006 "cplus.met"
#line 3006 "cplus.met"
            {
#line 3006 "cplus.met"
                PPTREE _ptTree0=0;
#line 3006 "cplus.met"
                {
#line 3006 "cplus.met"
                    PPTREE _ptRes1=0;
#line 3006 "cplus.met"
                    _ptRes1= MakeTree(OPERATOR, 1);
#line 3006 "cplus.met"
                    ReplaceTree(_ptRes1, 1, MakeString ("/"));
#line 3006 "cplus.met"
                    _ptTree0=_ptRes1;
#line 3006 "cplus.met"
                }
#line 3006 "cplus.met"
                _retValue =_ptTree0;
#line 3006 "cplus.met"
                goto operator_function_name_ret;
#line 3006 "cplus.met"
            }
#line 3006 "cplus.met"
            break;
#line 3006 "cplus.met"
#line 3007 "cplus.met"
        case POURC : 
#line 3007 "cplus.met"
            tokenAhead = 0 ;
#line 3007 "cplus.met"
            CommTerm();
#line 3007 "cplus.met"
#line 3007 "cplus.met"
            {
#line 3007 "cplus.met"
                PPTREE _ptTree0=0;
#line 3007 "cplus.met"
                {
#line 3007 "cplus.met"
                    PPTREE _ptRes1=0;
#line 3007 "cplus.met"
                    _ptRes1= MakeTree(OPERATOR, 1);
#line 3007 "cplus.met"
                    ReplaceTree(_ptRes1, 1, MakeString ("%"));
#line 3007 "cplus.met"
                    _ptTree0=_ptRes1;
#line 3007 "cplus.met"
                }
#line 3007 "cplus.met"
                _retValue =_ptTree0;
#line 3007 "cplus.met"
                goto operator_function_name_ret;
#line 3007 "cplus.met"
            }
#line 3007 "cplus.met"
            break;
#line 3007 "cplus.met"
#line 3008 "cplus.met"
        case CHAP : 
#line 3008 "cplus.met"
            tokenAhead = 0 ;
#line 3008 "cplus.met"
            CommTerm();
#line 3008 "cplus.met"
#line 3008 "cplus.met"
            {
#line 3008 "cplus.met"
                PPTREE _ptTree0=0;
#line 3008 "cplus.met"
                {
#line 3008 "cplus.met"
                    PPTREE _ptRes1=0;
#line 3008 "cplus.met"
                    _ptRes1= MakeTree(OPERATOR, 1);
#line 3008 "cplus.met"
                    ReplaceTree(_ptRes1, 1, MakeString ("^"));
#line 3008 "cplus.met"
                    _ptTree0=_ptRes1;
#line 3008 "cplus.met"
                }
#line 3008 "cplus.met"
                _retValue =_ptTree0;
#line 3008 "cplus.met"
                goto operator_function_name_ret;
#line 3008 "cplus.met"
            }
#line 3008 "cplus.met"
            break;
#line 3008 "cplus.met"
#line 3009 "cplus.met"
        case ETCO : 
#line 3009 "cplus.met"
            tokenAhead = 0 ;
#line 3009 "cplus.met"
            CommTerm();
#line 3009 "cplus.met"
#line 3009 "cplus.met"
            {
#line 3009 "cplus.met"
                PPTREE _ptTree0=0;
#line 3009 "cplus.met"
                {
#line 3009 "cplus.met"
                    PPTREE _ptRes1=0;
#line 3009 "cplus.met"
                    _ptRes1= MakeTree(OPERATOR, 1);
#line 3009 "cplus.met"
                    ReplaceTree(_ptRes1, 1, MakeString ("&"));
#line 3009 "cplus.met"
                    _ptTree0=_ptRes1;
#line 3009 "cplus.met"
                }
#line 3009 "cplus.met"
                _retValue =_ptTree0;
#line 3009 "cplus.met"
                goto operator_function_name_ret;
#line 3009 "cplus.met"
            }
#line 3009 "cplus.met"
            break;
#line 3009 "cplus.met"
#line 3010 "cplus.met"
        case VBAR : 
#line 3010 "cplus.met"
            tokenAhead = 0 ;
#line 3010 "cplus.met"
            CommTerm();
#line 3010 "cplus.met"
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
                    ReplaceTree(_ptRes1, 1, MakeString ("|"));
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
            break;
#line 3010 "cplus.met"
#line 3011 "cplus.met"
        case TILD : 
#line 3011 "cplus.met"
            tokenAhead = 0 ;
#line 3011 "cplus.met"
            CommTerm();
#line 3011 "cplus.met"
#line 3011 "cplus.met"
            {
#line 3011 "cplus.met"
                PPTREE _ptTree0=0;
#line 3011 "cplus.met"
                {
#line 3011 "cplus.met"
                    PPTREE _ptRes1=0;
#line 3011 "cplus.met"
                    _ptRes1= MakeTree(OPERATOR, 1);
#line 3011 "cplus.met"
                    ReplaceTree(_ptRes1, 1, MakeString ("~"));
#line 3011 "cplus.met"
                    _ptTree0=_ptRes1;
#line 3011 "cplus.met"
                }
#line 3011 "cplus.met"
                _retValue =_ptTree0;
#line 3011 "cplus.met"
                goto operator_function_name_ret;
#line 3011 "cplus.met"
            }
#line 3011 "cplus.met"
            break;
#line 3011 "cplus.met"
#line 3012 "cplus.met"
        case EXCL : 
#line 3012 "cplus.met"
            tokenAhead = 0 ;
#line 3012 "cplus.met"
            CommTerm();
#line 3012 "cplus.met"
#line 3012 "cplus.met"
            {
#line 3012 "cplus.met"
                PPTREE _ptTree0=0;
#line 3012 "cplus.met"
                {
#line 3012 "cplus.met"
                    PPTREE _ptRes1=0;
#line 3012 "cplus.met"
                    _ptRes1= MakeTree(OPERATOR, 1);
#line 3012 "cplus.met"
                    ReplaceTree(_ptRes1, 1, MakeString ("!"));
#line 3012 "cplus.met"
                    _ptTree0=_ptRes1;
#line 3012 "cplus.met"
                }
#line 3012 "cplus.met"
                _retValue =_ptTree0;
#line 3012 "cplus.met"
                goto operator_function_name_ret;
#line 3012 "cplus.met"
            }
#line 3012 "cplus.met"
            break;
#line 3012 "cplus.met"
#line 3013 "cplus.met"
        case EGAL : 
#line 3013 "cplus.met"
            tokenAhead = 0 ;
#line 3013 "cplus.met"
            CommTerm();
#line 3013 "cplus.met"
#line 3013 "cplus.met"
            {
#line 3013 "cplus.met"
                PPTREE _ptTree0=0;
#line 3013 "cplus.met"
                {
#line 3013 "cplus.met"
                    PPTREE _ptRes1=0;
#line 3013 "cplus.met"
                    _ptRes1= MakeTree(OPERATOR, 1);
#line 3013 "cplus.met"
                    ReplaceTree(_ptRes1, 1, MakeString ("="));
#line 3013 "cplus.met"
                    _ptTree0=_ptRes1;
#line 3013 "cplus.met"
                }
#line 3013 "cplus.met"
                _retValue =_ptTree0;
#line 3013 "cplus.met"
                goto operator_function_name_ret;
#line 3013 "cplus.met"
            }
#line 3013 "cplus.met"
            break;
#line 3013 "cplus.met"
#line 3014 "cplus.met"
        case SUPE : 
#line 3014 "cplus.met"
            tokenAhead = 0 ;
#line 3014 "cplus.met"
            CommTerm();
#line 3014 "cplus.met"
#line 3014 "cplus.met"
            {
#line 3014 "cplus.met"
                PPTREE _ptTree0=0;
#line 3014 "cplus.met"
                {
#line 3014 "cplus.met"
                    PPTREE _ptRes1=0;
#line 3014 "cplus.met"
                    _ptRes1= MakeTree(OPERATOR, 1);
#line 3014 "cplus.met"
                    ReplaceTree(_ptRes1, 1, MakeString (">"));
#line 3014 "cplus.met"
                    _ptTree0=_ptRes1;
#line 3014 "cplus.met"
                }
#line 3014 "cplus.met"
                _retValue =_ptTree0;
#line 3014 "cplus.met"
                goto operator_function_name_ret;
#line 3014 "cplus.met"
            }
#line 3014 "cplus.met"
            break;
#line 3014 "cplus.met"
#line 3015 "cplus.met"
        case INFE : 
#line 3015 "cplus.met"
            tokenAhead = 0 ;
#line 3015 "cplus.met"
            CommTerm();
#line 3015 "cplus.met"
#line 3015 "cplus.met"
            {
#line 3015 "cplus.met"
                PPTREE _ptTree0=0;
#line 3015 "cplus.met"
                {
#line 3015 "cplus.met"
                    PPTREE _ptRes1=0;
#line 3015 "cplus.met"
                    _ptRes1= MakeTree(OPERATOR, 1);
#line 3015 "cplus.met"
                    ReplaceTree(_ptRes1, 1, MakeString ("<"));
#line 3015 "cplus.met"
                    _ptTree0=_ptRes1;
#line 3015 "cplus.met"
                }
#line 3015 "cplus.met"
                _retValue =_ptTree0;
#line 3015 "cplus.met"
                goto operator_function_name_ret;
#line 3015 "cplus.met"
            }
#line 3015 "cplus.met"
            break;
#line 3015 "cplus.met"
#line 3016 "cplus.met"
        case PLUSEGAL : 
#line 3016 "cplus.met"
            tokenAhead = 0 ;
#line 3016 "cplus.met"
            CommTerm();
#line 3016 "cplus.met"
#line 3016 "cplus.met"
            {
#line 3016 "cplus.met"
                PPTREE _ptTree0=0;
#line 3016 "cplus.met"
                {
#line 3016 "cplus.met"
                    PPTREE _ptRes1=0;
#line 3016 "cplus.met"
                    _ptRes1= MakeTree(OPERATOR, 1);
#line 3016 "cplus.met"
                    ReplaceTree(_ptRes1, 1, MakeString ("+="));
#line 3016 "cplus.met"
                    _ptTree0=_ptRes1;
#line 3016 "cplus.met"
                }
#line 3016 "cplus.met"
                _retValue =_ptTree0;
#line 3016 "cplus.met"
                goto operator_function_name_ret;
#line 3016 "cplus.met"
            }
#line 3016 "cplus.met"
            break;
#line 3016 "cplus.met"
#line 3017 "cplus.met"
        case TIREEGAL : 
#line 3017 "cplus.met"
            tokenAhead = 0 ;
#line 3017 "cplus.met"
            CommTerm();
#line 3017 "cplus.met"
#line 3017 "cplus.met"
            {
#line 3017 "cplus.met"
                PPTREE _ptTree0=0;
#line 3017 "cplus.met"
                {
#line 3017 "cplus.met"
                    PPTREE _ptRes1=0;
#line 3017 "cplus.met"
                    _ptRes1= MakeTree(OPERATOR, 1);
#line 3017 "cplus.met"
                    ReplaceTree(_ptRes1, 1, MakeString ("-="));
#line 3017 "cplus.met"
                    _ptTree0=_ptRes1;
#line 3017 "cplus.met"
                }
#line 3017 "cplus.met"
                _retValue =_ptTree0;
#line 3017 "cplus.met"
                goto operator_function_name_ret;
#line 3017 "cplus.met"
            }
#line 3017 "cplus.met"
            break;
#line 3017 "cplus.met"
#line 3018 "cplus.met"
        case ETOIEGAL : 
#line 3018 "cplus.met"
            tokenAhead = 0 ;
#line 3018 "cplus.met"
            CommTerm();
#line 3018 "cplus.met"
#line 3018 "cplus.met"
            {
#line 3018 "cplus.met"
                PPTREE _ptTree0=0;
#line 3018 "cplus.met"
                {
#line 3018 "cplus.met"
                    PPTREE _ptRes1=0;
#line 3018 "cplus.met"
                    _ptRes1= MakeTree(OPERATOR, 1);
#line 3018 "cplus.met"
                    ReplaceTree(_ptRes1, 1, MakeString ("*="));
#line 3018 "cplus.met"
                    _ptTree0=_ptRes1;
#line 3018 "cplus.met"
                }
#line 3018 "cplus.met"
                _retValue =_ptTree0;
#line 3018 "cplus.met"
                goto operator_function_name_ret;
#line 3018 "cplus.met"
            }
#line 3018 "cplus.met"
            break;
#line 3018 "cplus.met"
#line 3019 "cplus.met"
        case SLASEGAL : 
#line 3019 "cplus.met"
            tokenAhead = 0 ;
#line 3019 "cplus.met"
            CommTerm();
#line 3019 "cplus.met"
#line 3019 "cplus.met"
            {
#line 3019 "cplus.met"
                PPTREE _ptTree0=0;
#line 3019 "cplus.met"
                {
#line 3019 "cplus.met"
                    PPTREE _ptRes1=0;
#line 3019 "cplus.met"
                    _ptRes1= MakeTree(OPERATOR, 1);
#line 3019 "cplus.met"
                    ReplaceTree(_ptRes1, 1, MakeString ("/="));
#line 3019 "cplus.met"
                    _ptTree0=_ptRes1;
#line 3019 "cplus.met"
                }
#line 3019 "cplus.met"
                _retValue =_ptTree0;
#line 3019 "cplus.met"
                goto operator_function_name_ret;
#line 3019 "cplus.met"
            }
#line 3019 "cplus.met"
            break;
#line 3019 "cplus.met"
#line 3020 "cplus.met"
        case POURCEGAL : 
#line 3020 "cplus.met"
            tokenAhead = 0 ;
#line 3020 "cplus.met"
            CommTerm();
#line 3020 "cplus.met"
#line 3020 "cplus.met"
            {
#line 3020 "cplus.met"
                PPTREE _ptTree0=0;
#line 3020 "cplus.met"
                {
#line 3020 "cplus.met"
                    PPTREE _ptRes1=0;
#line 3020 "cplus.met"
                    _ptRes1= MakeTree(OPERATOR, 1);
#line 3020 "cplus.met"
                    ReplaceTree(_ptRes1, 1, MakeString ("%="));
#line 3020 "cplus.met"
                    _ptTree0=_ptRes1;
#line 3020 "cplus.met"
                }
#line 3020 "cplus.met"
                _retValue =_ptTree0;
#line 3020 "cplus.met"
                goto operator_function_name_ret;
#line 3020 "cplus.met"
            }
#line 3020 "cplus.met"
            break;
#line 3020 "cplus.met"
#line 3021 "cplus.met"
        case CHAPEGAL : 
#line 3021 "cplus.met"
            tokenAhead = 0 ;
#line 3021 "cplus.met"
            CommTerm();
#line 3021 "cplus.met"
#line 3021 "cplus.met"
            {
#line 3021 "cplus.met"
                PPTREE _ptTree0=0;
#line 3021 "cplus.met"
                {
#line 3021 "cplus.met"
                    PPTREE _ptRes1=0;
#line 3021 "cplus.met"
                    _ptRes1= MakeTree(OPERATOR, 1);
#line 3021 "cplus.met"
                    ReplaceTree(_ptRes1, 1, MakeString ("^="));
#line 3021 "cplus.met"
                    _ptTree0=_ptRes1;
#line 3021 "cplus.met"
                }
#line 3021 "cplus.met"
                _retValue =_ptTree0;
#line 3021 "cplus.met"
                goto operator_function_name_ret;
#line 3021 "cplus.met"
            }
#line 3021 "cplus.met"
            break;
#line 3021 "cplus.met"
#line 3022 "cplus.met"
        case ETCOEGAL : 
#line 3022 "cplus.met"
            tokenAhead = 0 ;
#line 3022 "cplus.met"
            CommTerm();
#line 3022 "cplus.met"
#line 3022 "cplus.met"
            {
#line 3022 "cplus.met"
                PPTREE _ptTree0=0;
#line 3022 "cplus.met"
                {
#line 3022 "cplus.met"
                    PPTREE _ptRes1=0;
#line 3022 "cplus.met"
                    _ptRes1= MakeTree(OPERATOR, 1);
#line 3022 "cplus.met"
                    ReplaceTree(_ptRes1, 1, MakeString ("&="));
#line 3022 "cplus.met"
                    _ptTree0=_ptRes1;
#line 3022 "cplus.met"
                }
#line 3022 "cplus.met"
                _retValue =_ptTree0;
#line 3022 "cplus.met"
                goto operator_function_name_ret;
#line 3022 "cplus.met"
            }
#line 3022 "cplus.met"
            break;
#line 3022 "cplus.met"
#line 3023 "cplus.met"
        case VBAREGAL : 
#line 3023 "cplus.met"
            tokenAhead = 0 ;
#line 3023 "cplus.met"
            CommTerm();
#line 3023 "cplus.met"
#line 3023 "cplus.met"
            {
#line 3023 "cplus.met"
                PPTREE _ptTree0=0;
#line 3023 "cplus.met"
                {
#line 3023 "cplus.met"
                    PPTREE _ptRes1=0;
#line 3023 "cplus.met"
                    _ptRes1= MakeTree(OPERATOR, 1);
#line 3023 "cplus.met"
                    ReplaceTree(_ptRes1, 1, MakeString ("|="));
#line 3023 "cplus.met"
                    _ptTree0=_ptRes1;
#line 3023 "cplus.met"
                }
#line 3023 "cplus.met"
                _retValue =_ptTree0;
#line 3023 "cplus.met"
                goto operator_function_name_ret;
#line 3023 "cplus.met"
            }
#line 3023 "cplus.met"
            break;
#line 3023 "cplus.met"
#line 3024 "cplus.met"
        case EXCLEGAL : 
#line 3024 "cplus.met"
            tokenAhead = 0 ;
#line 3024 "cplus.met"
            CommTerm();
#line 3024 "cplus.met"
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
                    ReplaceTree(_ptRes1, 1, MakeString ("!="));
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
            break;
#line 3024 "cplus.met"
#line 3025 "cplus.met"
        case EGALEGAL : 
#line 3025 "cplus.met"
            tokenAhead = 0 ;
#line 3025 "cplus.met"
            CommTerm();
#line 3025 "cplus.met"
#line 3025 "cplus.met"
            {
#line 3025 "cplus.met"
                PPTREE _ptTree0=0;
#line 3025 "cplus.met"
                {
#line 3025 "cplus.met"
                    PPTREE _ptRes1=0;
#line 3025 "cplus.met"
                    _ptRes1= MakeTree(OPERATOR, 1);
#line 3025 "cplus.met"
                    ReplaceTree(_ptRes1, 1, MakeString ("=="));
#line 3025 "cplus.met"
                    _ptTree0=_ptRes1;
#line 3025 "cplus.met"
                }
#line 3025 "cplus.met"
                _retValue =_ptTree0;
#line 3025 "cplus.met"
                goto operator_function_name_ret;
#line 3025 "cplus.met"
            }
#line 3025 "cplus.met"
            break;
#line 3025 "cplus.met"
#line 3026 "cplus.met"
        case INFEEGAL : 
#line 3026 "cplus.met"
            tokenAhead = 0 ;
#line 3026 "cplus.met"
            CommTerm();
#line 3026 "cplus.met"
#line 3026 "cplus.met"
            {
#line 3026 "cplus.met"
                PPTREE _ptTree0=0;
#line 3026 "cplus.met"
                {
#line 3026 "cplus.met"
                    PPTREE _ptRes1=0;
#line 3026 "cplus.met"
                    _ptRes1= MakeTree(OPERATOR, 1);
#line 3026 "cplus.met"
                    ReplaceTree(_ptRes1, 1, MakeString ("<="));
#line 3026 "cplus.met"
                    _ptTree0=_ptRes1;
#line 3026 "cplus.met"
                }
#line 3026 "cplus.met"
                _retValue =_ptTree0;
#line 3026 "cplus.met"
                goto operator_function_name_ret;
#line 3026 "cplus.met"
            }
#line 3026 "cplus.met"
            break;
#line 3026 "cplus.met"
#line 3027 "cplus.met"
        case SUPEEGAL : 
#line 3027 "cplus.met"
            tokenAhead = 0 ;
#line 3027 "cplus.met"
            CommTerm();
#line 3027 "cplus.met"
#line 3027 "cplus.met"
            {
#line 3027 "cplus.met"
                PPTREE _ptTree0=0;
#line 3027 "cplus.met"
                {
#line 3027 "cplus.met"
                    PPTREE _ptRes1=0;
#line 3027 "cplus.met"
                    _ptRes1= MakeTree(OPERATOR, 1);
#line 3027 "cplus.met"
                    ReplaceTree(_ptRes1, 1, MakeString (">="));
#line 3027 "cplus.met"
                    _ptTree0=_ptRes1;
#line 3027 "cplus.met"
                }
#line 3027 "cplus.met"
                _retValue =_ptTree0;
#line 3027 "cplus.met"
                goto operator_function_name_ret;
#line 3027 "cplus.met"
            }
#line 3027 "cplus.met"
            break;
#line 3027 "cplus.met"
#line 3028 "cplus.met"
        case INFEINFE : 
#line 3028 "cplus.met"
            tokenAhead = 0 ;
#line 3028 "cplus.met"
            CommTerm();
#line 3028 "cplus.met"
#line 3028 "cplus.met"
            {
#line 3028 "cplus.met"
                PPTREE _ptTree0=0;
#line 3028 "cplus.met"
                {
#line 3028 "cplus.met"
                    PPTREE _ptRes1=0;
#line 3028 "cplus.met"
                    _ptRes1= MakeTree(OPERATOR, 1);
#line 3028 "cplus.met"
                    ReplaceTree(_ptRes1, 1, MakeString ("<<"));
#line 3028 "cplus.met"
                    _ptTree0=_ptRes1;
#line 3028 "cplus.met"
                }
#line 3028 "cplus.met"
                _retValue =_ptTree0;
#line 3028 "cplus.met"
                goto operator_function_name_ret;
#line 3028 "cplus.met"
            }
#line 3028 "cplus.met"
            break;
#line 3028 "cplus.met"
#line 3029 "cplus.met"
        case SUPESUPE : 
#line 3029 "cplus.met"
            tokenAhead = 0 ;
#line 3029 "cplus.met"
            CommTerm();
#line 3029 "cplus.met"
#line 3029 "cplus.met"
            {
#line 3029 "cplus.met"
                PPTREE _ptTree0=0;
#line 3029 "cplus.met"
                {
#line 3029 "cplus.met"
                    PPTREE _ptRes1=0;
#line 3029 "cplus.met"
                    _ptRes1= MakeTree(OPERATOR, 1);
#line 3029 "cplus.met"
                    ReplaceTree(_ptRes1, 1, MakeString (">>"));
#line 3029 "cplus.met"
                    _ptTree0=_ptRes1;
#line 3029 "cplus.met"
                }
#line 3029 "cplus.met"
                _retValue =_ptTree0;
#line 3029 "cplus.met"
                goto operator_function_name_ret;
#line 3029 "cplus.met"
            }
#line 3029 "cplus.met"
            break;
#line 3029 "cplus.met"
#line 3030 "cplus.met"
        case INFEINFEEGAL : 
#line 3030 "cplus.met"
            tokenAhead = 0 ;
#line 3030 "cplus.met"
            CommTerm();
#line 3030 "cplus.met"
#line 3030 "cplus.met"
            {
#line 3030 "cplus.met"
                PPTREE _ptTree0=0;
#line 3030 "cplus.met"
                {
#line 3030 "cplus.met"
                    PPTREE _ptRes1=0;
#line 3030 "cplus.met"
                    _ptRes1= MakeTree(OPERATOR, 1);
#line 3030 "cplus.met"
                    ReplaceTree(_ptRes1, 1, MakeString ("<<="));
#line 3030 "cplus.met"
                    _ptTree0=_ptRes1;
#line 3030 "cplus.met"
                }
#line 3030 "cplus.met"
                _retValue =_ptTree0;
#line 3030 "cplus.met"
                goto operator_function_name_ret;
#line 3030 "cplus.met"
            }
#line 3030 "cplus.met"
            break;
#line 3030 "cplus.met"
#line 3031 "cplus.met"
        case SUPESUPEEGAL : 
#line 3031 "cplus.met"
            tokenAhead = 0 ;
#line 3031 "cplus.met"
            CommTerm();
#line 3031 "cplus.met"
#line 3031 "cplus.met"
            {
#line 3031 "cplus.met"
                PPTREE _ptTree0=0;
#line 3031 "cplus.met"
                {
#line 3031 "cplus.met"
                    PPTREE _ptRes1=0;
#line 3031 "cplus.met"
                    _ptRes1= MakeTree(OPERATOR, 1);
#line 3031 "cplus.met"
                    ReplaceTree(_ptRes1, 1, MakeString (">>="));
#line 3031 "cplus.met"
                    _ptTree0=_ptRes1;
#line 3031 "cplus.met"
                }
#line 3031 "cplus.met"
                _retValue =_ptTree0;
#line 3031 "cplus.met"
                goto operator_function_name_ret;
#line 3031 "cplus.met"
            }
#line 3031 "cplus.met"
            break;
#line 3031 "cplus.met"
#line 3032 "cplus.met"
        case ETCOETCO : 
#line 3032 "cplus.met"
            tokenAhead = 0 ;
#line 3032 "cplus.met"
            CommTerm();
#line 3032 "cplus.met"
#line 3032 "cplus.met"
            {
#line 3032 "cplus.met"
                PPTREE _ptTree0=0;
#line 3032 "cplus.met"
                {
#line 3032 "cplus.met"
                    PPTREE _ptRes1=0;
#line 3032 "cplus.met"
                    _ptRes1= MakeTree(OPERATOR, 1);
#line 3032 "cplus.met"
                    ReplaceTree(_ptRes1, 1, MakeString ("&&"));
#line 3032 "cplus.met"
                    _ptTree0=_ptRes1;
#line 3032 "cplus.met"
                }
#line 3032 "cplus.met"
                _retValue =_ptTree0;
#line 3032 "cplus.met"
                goto operator_function_name_ret;
#line 3032 "cplus.met"
            }
#line 3032 "cplus.met"
            break;
#line 3032 "cplus.met"
#line 3033 "cplus.met"
        case VBARVBAR : 
#line 3033 "cplus.met"
            tokenAhead = 0 ;
#line 3033 "cplus.met"
            CommTerm();
#line 3033 "cplus.met"
#line 3033 "cplus.met"
            {
#line 3033 "cplus.met"
                PPTREE _ptTree0=0;
#line 3033 "cplus.met"
                {
#line 3033 "cplus.met"
                    PPTREE _ptRes1=0;
#line 3033 "cplus.met"
                    _ptRes1= MakeTree(OPERATOR, 1);
#line 3033 "cplus.met"
                    ReplaceTree(_ptRes1, 1, MakeString ("||"));
#line 3033 "cplus.met"
                    _ptTree0=_ptRes1;
#line 3033 "cplus.met"
                }
#line 3033 "cplus.met"
                _retValue =_ptTree0;
#line 3033 "cplus.met"
                goto operator_function_name_ret;
#line 3033 "cplus.met"
            }
#line 3033 "cplus.met"
            break;
#line 3033 "cplus.met"
#line 3034 "cplus.met"
        case PLUSPLUS : 
#line 3034 "cplus.met"
            tokenAhead = 0 ;
#line 3034 "cplus.met"
            CommTerm();
#line 3034 "cplus.met"
#line 3034 "cplus.met"
            {
#line 3034 "cplus.met"
                PPTREE _ptTree0=0;
#line 3034 "cplus.met"
                {
#line 3034 "cplus.met"
                    PPTREE _ptRes1=0;
#line 3034 "cplus.met"
                    _ptRes1= MakeTree(OPERATOR, 1);
#line 3034 "cplus.met"
                    ReplaceTree(_ptRes1, 1, MakeString ("++"));
#line 3034 "cplus.met"
                    _ptTree0=_ptRes1;
#line 3034 "cplus.met"
                }
#line 3034 "cplus.met"
                _retValue =_ptTree0;
#line 3034 "cplus.met"
                goto operator_function_name_ret;
#line 3034 "cplus.met"
            }
#line 3034 "cplus.met"
            break;
#line 3034 "cplus.met"
#line 3035 "cplus.met"
        case TIRETIRE : 
#line 3035 "cplus.met"
            tokenAhead = 0 ;
#line 3035 "cplus.met"
            CommTerm();
#line 3035 "cplus.met"
#line 3035 "cplus.met"
            {
#line 3035 "cplus.met"
                PPTREE _ptTree0=0;
#line 3035 "cplus.met"
                {
#line 3035 "cplus.met"
                    PPTREE _ptRes1=0;
#line 3035 "cplus.met"
                    _ptRes1= MakeTree(OPERATOR, 1);
#line 3035 "cplus.met"
                    ReplaceTree(_ptRes1, 1, MakeString ("--"));
#line 3035 "cplus.met"
                    _ptTree0=_ptRes1;
#line 3035 "cplus.met"
                }
#line 3035 "cplus.met"
                _retValue =_ptTree0;
#line 3035 "cplus.met"
                goto operator_function_name_ret;
#line 3035 "cplus.met"
            }
#line 3035 "cplus.met"
            break;
#line 3035 "cplus.met"
#line 3036 "cplus.met"
        case VIRG : 
#line 3036 "cplus.met"
            tokenAhead = 0 ;
#line 3036 "cplus.met"
            CommTerm();
#line 3036 "cplus.met"
#line 3036 "cplus.met"
            {
#line 3036 "cplus.met"
                PPTREE _ptTree0=0;
#line 3036 "cplus.met"
                {
#line 3036 "cplus.met"
                    PPTREE _ptRes1=0;
#line 3036 "cplus.met"
                    _ptRes1= MakeTree(OPERATOR, 1);
#line 3036 "cplus.met"
                    ReplaceTree(_ptRes1, 1, MakeString (","));
#line 3036 "cplus.met"
                    _ptTree0=_ptRes1;
#line 3036 "cplus.met"
                }
#line 3036 "cplus.met"
                _retValue =_ptTree0;
#line 3036 "cplus.met"
                goto operator_function_name_ret;
#line 3036 "cplus.met"
            }
#line 3036 "cplus.met"
            break;
#line 3036 "cplus.met"
#line 3037 "cplus.met"
        case TIRESUPE : 
#line 3037 "cplus.met"
            tokenAhead = 0 ;
#line 3037 "cplus.met"
            CommTerm();
#line 3037 "cplus.met"
#line 3037 "cplus.met"
            {
#line 3037 "cplus.met"
                PPTREE _ptTree0=0;
#line 3037 "cplus.met"
                {
#line 3037 "cplus.met"
                    PPTREE _ptRes1=0;
#line 3037 "cplus.met"
                    _ptRes1= MakeTree(OPERATOR, 1);
#line 3037 "cplus.met"
                    ReplaceTree(_ptRes1, 1, MakeString ("->"));
#line 3037 "cplus.met"
                    _ptTree0=_ptRes1;
#line 3037 "cplus.met"
                }
#line 3037 "cplus.met"
                _retValue =_ptTree0;
#line 3037 "cplus.met"
                goto operator_function_name_ret;
#line 3037 "cplus.met"
            }
#line 3037 "cplus.met"
            break;
#line 3037 "cplus.met"
#line 3038 "cplus.met"
        case TIRESUPEETOI : 
#line 3038 "cplus.met"
            tokenAhead = 0 ;
#line 3038 "cplus.met"
            CommTerm();
#line 3038 "cplus.met"
#line 3038 "cplus.met"
            {
#line 3038 "cplus.met"
                PPTREE _ptTree0=0;
#line 3038 "cplus.met"
                {
#line 3038 "cplus.met"
                    PPTREE _ptRes1=0;
#line 3038 "cplus.met"
                    _ptRes1= MakeTree(OPERATOR, 1);
#line 3038 "cplus.met"
                    ReplaceTree(_ptRes1, 1, MakeString ("->*"));
#line 3038 "cplus.met"
                    _ptTree0=_ptRes1;
#line 3038 "cplus.met"
                }
#line 3038 "cplus.met"
                _retValue =_ptTree0;
#line 3038 "cplus.met"
                goto operator_function_name_ret;
#line 3038 "cplus.met"
            }
#line 3038 "cplus.met"
            break;
#line 3038 "cplus.met"
#line 3041 "cplus.met"
        case POUV : 
#line 3041 "cplus.met"
            tokenAhead = 0 ;
#line 3041 "cplus.met"
            CommTerm();
#line 3041 "cplus.met"
#line 3040 "cplus.met"
#line 3041 "cplus.met"
            (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3041 "cplus.met"
            if (  !SEE_TOKEN( PFER,")") || !(CommTerm(),1)) {
#line 3041 "cplus.met"
                MulFreeTree(3,list,retTree,valTree);
                TOKEN_EXIT(operator_function_name_exit,")")
#line 3041 "cplus.met"
            } else {
#line 3041 "cplus.met"
                tokenAhead = 0 ;
#line 3041 "cplus.met"
            }
#line 3041 "cplus.met"
#line 3042 "cplus.met"
            {
#line 3042 "cplus.met"
                PPTREE _ptTree0=0;
#line 3042 "cplus.met"
                {
#line 3042 "cplus.met"
                    PPTREE _ptRes1=0;
#line 3042 "cplus.met"
                    _ptRes1= MakeTree(OPERATOR, 1);
#line 3042 "cplus.met"
                    ReplaceTree(_ptRes1, 1, MakeString ("()"));
#line 3042 "cplus.met"
                    _ptTree0=_ptRes1;
#line 3042 "cplus.met"
                }
#line 3042 "cplus.met"
                _retValue =_ptTree0;
#line 3042 "cplus.met"
                goto operator_function_name_ret;
#line 3042 "cplus.met"
            }
#line 3042 "cplus.met"
#line 3042 "cplus.met"
            break;
#line 3042 "cplus.met"
#line 3046 "cplus.met"
        case COUV : 
#line 3046 "cplus.met"
            tokenAhead = 0 ;
#line 3046 "cplus.met"
            CommTerm();
#line 3046 "cplus.met"
#line 3045 "cplus.met"
#line 3046 "cplus.met"
            (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3046 "cplus.met"
            if (  !SEE_TOKEN( CFER,"]") || !(CommTerm(),1)) {
#line 3046 "cplus.met"
                MulFreeTree(3,list,retTree,valTree);
                TOKEN_EXIT(operator_function_name_exit,"]")
#line 3046 "cplus.met"
            } else {
#line 3046 "cplus.met"
                tokenAhead = 0 ;
#line 3046 "cplus.met"
            }
#line 3046 "cplus.met"
#line 3047 "cplus.met"
            {
#line 3047 "cplus.met"
                PPTREE _ptTree0=0;
#line 3047 "cplus.met"
                {
#line 3047 "cplus.met"
                    PPTREE _ptRes1=0;
#line 3047 "cplus.met"
                    _ptRes1= MakeTree(OPERATOR, 1);
#line 3047 "cplus.met"
                    ReplaceTree(_ptRes1, 1, MakeString ("[]"));
#line 3047 "cplus.met"
                    _ptTree0=_ptRes1;
#line 3047 "cplus.met"
                }
#line 3047 "cplus.met"
                _retValue =_ptTree0;
#line 3047 "cplus.met"
                goto operator_function_name_ret;
#line 3047 "cplus.met"
            }
#line 3047 "cplus.met"
#line 3047 "cplus.met"
            break;
#line 3047 "cplus.met"
#line 3047 "cplus.met"
        default : 
#line 3047 "cplus.met"
#line 3047 "cplus.met"
            break;
#line 3047 "cplus.met"
    }
#line 3047 "cplus.met"
#line 3051 "cplus.met"
    if (NPUSH_CALL_AFF_VERIF(retTree = ,_Tak(const_or_volatile), 31, cplus)){
#line 3051 "cplus.met"
#line 3052 "cplus.met"
        {
#line 3052 "cplus.met"
            PPTREE _ptRes0=0;
#line 3052 "cplus.met"
            _ptRes0= MakeTree(FOR_DECLARATION, 3);
#line 3052 "cplus.met"
            ReplaceTree(_ptRes0, 1, retTree );
#line 3052 "cplus.met"
            retTree=_ptRes0;
#line 3052 "cplus.met"
        }
#line 3052 "cplus.met"
    } else {
#line 3052 "cplus.met"
#line 3054 "cplus.met"
        {
#line 3054 "cplus.met"
            PPTREE _ptRes0=0;
#line 3054 "cplus.met"
            _ptRes0= MakeTree(FOR_DECLARATION, 3);
#line 3054 "cplus.met"
            retTree=_ptRes0;
#line 3054 "cplus.met"
        }
#line 3054 "cplus.met"
    }
#line 3054 "cplus.met"
#line 3055 "cplus.met"
    {
#line 3055 "cplus.met"
        PPTREE _ptTree0=0;
#line 3055 "cplus.met"
        if ( (_ptTree0=NQUICK_CALL(_Tak(type_specifier)(error_free), 149, cplus))== (PPTREE) -1 ) {
#line 3055 "cplus.met"
            MulFreeTree(4,_ptTree0,list,retTree,valTree);
            PROG_EXIT(operator_function_name_exit,"operator_function_name")
#line 3055 "cplus.met"
        }
#line 3055 "cplus.met"
        ReplaceTree(retTree , 2 , _ptTree0);
#line 3055 "cplus.met"
    }
#line 3055 "cplus.met"
#line 3056 "cplus.met"
    if (NPUSH_CALL_AFF_VERIF(valTree = ,_Tak(ptr_operator), 116, cplus)){
#line 3056 "cplus.met"
#line 3057 "cplus.met"
#line 3058 "cplus.met"
        list =AddList(list ,valTree );
#line 3058 "cplus.met"
#line 3059 "cplus.met"
        ReplaceTree(retTree ,3 ,list );
#line 3059 "cplus.met"
#line 3059 "cplus.met"
#line 3059 "cplus.met"
    }
#line 3059 "cplus.met"
#line 3061 "cplus.met"
    {
#line 3061 "cplus.met"
        PPTREE _ptTree0=0;
#line 3061 "cplus.met"
        {
#line 3061 "cplus.met"
            PPTREE _ptRes1=0;
#line 3061 "cplus.met"
            _ptRes1= MakeTree(OPERATOR, 1);
#line 3061 "cplus.met"
            ReplaceTree(_ptRes1, 1, retTree );
#line 3061 "cplus.met"
            _ptTree0=_ptRes1;
#line 3061 "cplus.met"
        }
#line 3061 "cplus.met"
        _retValue =_ptTree0;
#line 3061 "cplus.met"
        goto operator_function_name_ret;
#line 3061 "cplus.met"
    }
#line 3061 "cplus.met"
#line 3061 "cplus.met"
#line 3061 "cplus.met"

#line 3062 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 3062 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 3062 "cplus.met"
return((PPTREE) 0);
#line 3062 "cplus.met"

#line 3062 "cplus.met"
operator_function_name_exit :
#line 3062 "cplus.met"

#line 3062 "cplus.met"
    _Debug = TRACE_RULE("operator_function_name",TRACE_EXIT,(PPTREE)0);
#line 3062 "cplus.met"
    _funcLevel--;
#line 3062 "cplus.met"
    return((PPTREE) -1) ;
#line 3062 "cplus.met"

#line 3062 "cplus.met"
operator_function_name_ret :
#line 3062 "cplus.met"
    
#line 3062 "cplus.met"
    _Debug = TRACE_RULE("operator_function_name",TRACE_RETURN,_retValue);
#line 3062 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 3062 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 3062 "cplus.met"
    return _retValue ;
#line 3062 "cplus.met"
}
#line 3062 "cplus.met"

#line 3062 "cplus.met"
#line 833 "cplus.met"
PPTREE cplus::other_config ( int error_free)
#line 833 "cplus.met"
{
#line 833 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 833 "cplus.met"
    int _value,_nbPre = 0 ;
#line 833 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 833 "cplus.met"
    int _Debug = TRACE_RULE("other_config",TRACE_ENTER,(PPTREE)0);
#line 833 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 833 "cplus.met"
#line 834 "cplus.met"
    {
#line 834 "cplus.met"
        PPTREE _ptTree0=0;
#line 834 "cplus.met"
        {
#line 834 "cplus.met"
            PPTREE _ptTree1=0,_ptRes1=0;
#line 834 "cplus.met"
            _ptRes1= MakeTree(PRAGMA, 1);
#line 834 "cplus.met"
            (tokenAhead == 8|| (LexPragma(),TRACE_LEX(1)));
#line 834 "cplus.met"
            if ( ! TERM_OR_META(PRAGMA_CONTENT,"PRAGMA_CONTENT") || !(BUILD_TERM_META(_ptTree1))) {
#line 834 "cplus.met"
                MulFreeTree(3,_ptRes1,_ptTree1,_ptTree0);
                TOKEN_EXIT(other_config_exit,"PRAGMA_CONTENT")
#line 834 "cplus.met"
            } else {
#line 834 "cplus.met"
                tokenAhead = 0 ;
#line 834 "cplus.met"
            }
#line 834 "cplus.met"
            ReplaceTree(_ptRes1, 1, _ptTree1);
#line 834 "cplus.met"
            _ptTree0=_ptRes1;
#line 834 "cplus.met"
        }
#line 834 "cplus.met"
        _retValue =_ptTree0;
#line 834 "cplus.met"
        goto other_config_ret;
#line 834 "cplus.met"
    }
#line 834 "cplus.met"
#line 834 "cplus.met"
#line 834 "cplus.met"

#line 835 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 835 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 835 "cplus.met"
return((PPTREE) 0);
#line 835 "cplus.met"

#line 835 "cplus.met"
other_config_exit :
#line 835 "cplus.met"

#line 835 "cplus.met"
    _Debug = TRACE_RULE("other_config",TRACE_EXIT,(PPTREE)0);
#line 835 "cplus.met"
    _funcLevel--;
#line 835 "cplus.met"
    return((PPTREE) -1) ;
#line 835 "cplus.met"

#line 835 "cplus.met"
other_config_ret :
#line 835 "cplus.met"
    
#line 835 "cplus.met"
    _Debug = TRACE_RULE("other_config",TRACE_RETURN,_retValue);
#line 835 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 835 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 835 "cplus.met"
    return _retValue ;
#line 835 "cplus.met"
}
#line 835 "cplus.met"

#line 835 "cplus.met"
#line 3093 "cplus.met"
PPTREE cplus::parameter_list ( int error_free)
#line 3093 "cplus.met"
{
#line 3093 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 3093 "cplus.met"
    int _value,_nbPre = 0 ;
#line 3093 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 3093 "cplus.met"
    int _Debug = TRACE_RULE("parameter_list",TRACE_ENTER,(PPTREE)0);
#line 3093 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 3093 "cplus.met"
#line 3093 "cplus.met"
    PPTREE _addlist1 = (PPTREE) 0;
#line 3093 "cplus.met"
#line 3093 "cplus.met"
    PPTREE paramList = (PPTREE) 0,none = (PPTREE) 0;
#line 3093 "cplus.met"
#line 3095 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3095 "cplus.met"
    if (  !SEE_TOKEN( POUV,"(") || !(CommTerm(),1)) {
#line 3095 "cplus.met"
        MulFreeTree(3,_addlist1,none,paramList);
        TOKEN_EXIT(parameter_list_exit,"(")
#line 3095 "cplus.met"
    } else {
#line 3095 "cplus.met"
        tokenAhead = 0 ;
#line 3095 "cplus.met"
    }
#line 3095 "cplus.met"
#line 3096 "cplus.met"
    if ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN( IDENT,"IDENT")){
#line 3096 "cplus.met"
#line 3097 "cplus.met"
#line 3098 "cplus.met"
         { int exit = 0 ;
#line 3098 "cplus.met"
#line 3099 "cplus.met"
        {
#line 3099 "cplus.met"
            PPTREE _ptTree0=0;
#line 3099 "cplus.met"
            {
#line 3099 "cplus.met"
                PPTREE _ptTree1=0,_ptRes1=0;
#line 3099 "cplus.met"
                _ptRes1= MakeTree(IDENT, 1);
#line 3099 "cplus.met"
                (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3099 "cplus.met"
                if ( ! TERM_OR_META(IDENT,"IDENT") || !(BUILD_TERM_META(_ptTree1))) {
#line 3099 "cplus.met"
                    MulFreeTree(6,_ptRes1,_ptTree1,_ptTree0,_addlist1,none,paramList);
                    TOKEN_EXIT(parameter_list_exit,"IDENT")
#line 3099 "cplus.met"
                } else {
#line 3099 "cplus.met"
                    tokenAhead = 0 ;
#line 3099 "cplus.met"
                }
#line 3099 "cplus.met"
                ReplaceTree(_ptRes1, 1, _ptTree1);
#line 3099 "cplus.met"
                _ptTree0=_ptRes1;
#line 3099 "cplus.met"
            }
#line 3099 "cplus.met"
            paramList =AddList(paramList , _ptTree0);
#line 3099 "cplus.met"
        }
#line 3099 "cplus.met"
#line 3099 "cplus.met"
        _addlist1 = paramList ;
#line 3099 "cplus.met"
#line 3100 "cplus.met"
        while ((! ( exit )) && 
#line 3100 "cplus.met"
              ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN(VIRG,",") && (tokenAhead = 0,CommTerm(),1))) { 
#line 3100 "cplus.met"
#line 3101 "cplus.met"
            if ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN( IDENT,"IDENT")){
#line 3101 "cplus.met"
#line 3102 "cplus.met"
#line 3102 "cplus.met"
                {
#line 3102 "cplus.met"
                    PPTREE _ptTree0=0;
#line 3102 "cplus.met"
                    {
#line 3102 "cplus.met"
                        PPTREE _ptTree1=0,_ptRes1=0;
#line 3102 "cplus.met"
                        _ptRes1= MakeTree(IDENT, 1);
#line 3102 "cplus.met"
                        (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3102 "cplus.met"
                        if ( ! TERM_OR_META(IDENT,"IDENT") || !(BUILD_TERM_META(_ptTree1))) {
#line 3102 "cplus.met"
                            MulFreeTree(6,_ptRes1,_ptTree1,_ptTree0,_addlist1,none,paramList);
                            TOKEN_EXIT(parameter_list_exit,"IDENT")
#line 3102 "cplus.met"
                        } else {
#line 3102 "cplus.met"
                            tokenAhead = 0 ;
#line 3102 "cplus.met"
                        }
#line 3102 "cplus.met"
                        ReplaceTree(_ptRes1, 1, _ptTree1);
#line 3102 "cplus.met"
                        _ptTree0=_ptRes1;
#line 3102 "cplus.met"
                    }
#line 3102 "cplus.met"
                    _addlist1 =AddList(_addlist1 , _ptTree0);
#line 3102 "cplus.met"
                }
#line 3102 "cplus.met"
#line 3102 "cplus.met"
                if (paramList){
#line 3102 "cplus.met"
#line 3102 "cplus.met"
                    _addlist1 = SonTree (_addlist1 ,2 );
#line 3102 "cplus.met"
                } else {
#line 3102 "cplus.met"
#line 3102 "cplus.met"
                    paramList = _addlist1 ;
#line 3102 "cplus.met"
                }
#line 3102 "cplus.met"
            } else {
#line 3102 "cplus.met"
#line 3104 "cplus.met"
#line 3105 "cplus.met"
                {
#line 3105 "cplus.met"
                    PPTREE _ptTree0=0;
#line 3105 "cplus.met"
                    {
#line 3105 "cplus.met"
                        PPTREE _ptRes1=0;
#line 3105 "cplus.met"
                        _ptRes1= MakeTree(VAR_LIST, 0);
#line 3105 "cplus.met"
                        _ptTree0=_ptRes1;
#line 3105 "cplus.met"
                    }
#line 3105 "cplus.met"
                    _addlist1 =AddList(_addlist1 , _ptTree0);
#line 3105 "cplus.met"
                }
#line 3105 "cplus.met"
#line 3105 "cplus.met"
                if (paramList){
#line 3105 "cplus.met"
#line 3105 "cplus.met"
                    _addlist1 = SonTree (_addlist1 ,2 );
#line 3105 "cplus.met"
                } else {
#line 3105 "cplus.met"
#line 3105 "cplus.met"
                    paramList = _addlist1 ;
#line 3105 "cplus.met"
                }
#line 3105 "cplus.met"
#line 3106 "cplus.met"
                 exit = 1 ;
#line 3106 "cplus.met"
#line 3107 "cplus.met"
                if ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN(POINPOINPOIN,"...") && (tokenAhead = 0,CommTerm(),1)){
#line 3107 "cplus.met"
#line 3107 "cplus.met"
                }
#line 3107 "cplus.met"
#line 3107 "cplus.met"
            }
#line 3107 "cplus.met"
        } 
#line 3107 "cplus.met"
#line 3110 "cplus.met"
        if ((! ( exit )) && 
#line 3110 "cplus.met"
           ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN(POINPOINPOIN,"...") && (tokenAhead = 0,CommTerm(),1))){
#line 3110 "cplus.met"
#line 3111 "cplus.met"
            {
#line 3111 "cplus.met"
                PPTREE _ptTree0=0;
#line 3111 "cplus.met"
                {
#line 3111 "cplus.met"
                    PPTREE _ptRes1=0;
#line 3111 "cplus.met"
                    _ptRes1= MakeTree(VAR_LIST, 0);
#line 3111 "cplus.met"
                    _ptTree0=_ptRes1;
#line 3111 "cplus.met"
                }
#line 3111 "cplus.met"
                paramList =AddList(paramList , _ptTree0);
#line 3111 "cplus.met"
            }
#line 3111 "cplus.met"
#line 3111 "cplus.met"
        }
#line 3111 "cplus.met"
#line 3112 "cplus.met"
         } 
#line 3112 "cplus.met"
#line 3112 "cplus.met"
#line 3112 "cplus.met"
    } else {
#line 3112 "cplus.met"
#line 3115 "cplus.met"
        paramList =AddList(paramList ,none );
#line 3115 "cplus.met"
    }
#line 3115 "cplus.met"
#line 3116 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3116 "cplus.met"
    if (  !SEE_TOKEN( PFER,")") || !(CommTerm(),1)) {
#line 3116 "cplus.met"
        MulFreeTree(3,_addlist1,none,paramList);
        TOKEN_EXIT(parameter_list_exit,")")
#line 3116 "cplus.met"
    } else {
#line 3116 "cplus.met"
        tokenAhead = 0 ;
#line 3116 "cplus.met"
    }
#line 3116 "cplus.met"
#line 3117 "cplus.met"
    {
#line 3117 "cplus.met"
        _retValue = paramList ;
#line 3117 "cplus.met"
        goto parameter_list_ret;
#line 3117 "cplus.met"
        
#line 3117 "cplus.met"
    }
#line 3117 "cplus.met"
#line 3117 "cplus.met"
#line 3117 "cplus.met"

#line 3118 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 3118 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 3118 "cplus.met"
return((PPTREE) 0);
#line 3118 "cplus.met"

#line 3118 "cplus.met"
parameter_list_exit :
#line 3118 "cplus.met"

#line 3118 "cplus.met"
    _Debug = TRACE_RULE("parameter_list",TRACE_EXIT,(PPTREE)0);
#line 3118 "cplus.met"
    _funcLevel--;
#line 3118 "cplus.met"
    return((PPTREE) -1) ;
#line 3118 "cplus.met"

#line 3118 "cplus.met"
parameter_list_ret :
#line 3118 "cplus.met"
    
#line 3118 "cplus.met"
    _Debug = TRACE_RULE("parameter_list",TRACE_RETURN,_retValue);
#line 3118 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 3118 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 3118 "cplus.met"
    return _retValue ;
#line 3118 "cplus.met"
}
#line 3118 "cplus.met"

#line 3118 "cplus.met"
