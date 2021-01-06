/*************************************************************************/
/*                                                                       */
/*        Produced by MetaGen version 2.0  -    1989-2006                 */
/*       Syntaxic Analyzer Meta Generator developped by                  */
/*                  Eric Lavillonniere                                   */
/*                                                                       */
/*************************************************************************/

#include "token.h"
#include "cplus.h"


#line 3531 "cplus.met"
PPTREE cplus::name_space ( int error_free)
#line 3531 "cplus.met"
{
#line 3531 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 3531 "cplus.met"
    int _value,_nbPre = 0 ;
#line 3531 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 3531 "cplus.met"
    int _Debug = TRACE_RULE("name_space",TRACE_ENTER,(PPTREE)0);
#line 3531 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 3531 "cplus.met"
#line 3531 "cplus.met"
    PPTREE _addlist1 = (PPTREE) 0;
#line 3531 "cplus.met"
#line 3531 "cplus.met"
    PPTREE list = (PPTREE) 0,retTree = (PPTREE) 0,ident = (PPTREE) 0,attrib = (PPTREE) 0;
#line 3531 "cplus.met"
#line 3533 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3533 "cplus.met"
    switch( lexEl.Value) {
#line 3533 "cplus.met"
#line 3534 "cplus.met"
        case NAMESPACE : 
#line 3534 "cplus.met"
            tokenAhead = 0 ;
#line 3534 "cplus.met"
            CommTerm();
#line 3534 "cplus.met"
#line 3535 "cplus.met"
#line 3537 "cplus.met"
            if ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&TERM_OR_META(IDENT,"IDENT") && !(tokenAhead = 0) && ( BUILD_TERM_META(ident))) {
#line 3537 "cplus.met"
#line 3539 "cplus.met"
                {
#line 3539 "cplus.met"
                    PPTREE _ptRes0=0;
#line 3539 "cplus.met"
                    _ptRes0= MakeTree(IDENT, 1);
#line 3539 "cplus.met"
                    ReplaceTree(_ptRes0, 1, ident );
#line 3539 "cplus.met"
                    ident=_ptRes0;
#line 3539 "cplus.met"
                }
#line 3539 "cplus.met"
            }
#line 3539 "cplus.met"
#line 3540 "cplus.met"
            if (NPUSH_CALL_AFF_VERIF(attrib = ,_Tak(attribute_call), 17, cplus)){
#line 3540 "cplus.met"
#line 3540 "cplus.met"
            }
#line 3540 "cplus.met"
#line 3543 "cplus.met"
            (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3543 "cplus.met"
            switch( lexEl.Value) {
#line 3543 "cplus.met"
#line 3547 "cplus.met"
                case AOUV : 
#line 3547 "cplus.met"
                    tokenAhead = 0 ;
#line 3547 "cplus.met"
                    CommTerm();
#line 3547 "cplus.met"
#line 3546 "cplus.met"
#line 3547 "cplus.met"
                    {
#line 3547 "cplus.met"
                        PPTREE _ptRes0=0;
#line 3547 "cplus.met"
                        _ptRes0= MakeTree(NAMESPACE, 3);
#line 3547 "cplus.met"
                        ReplaceTree(_ptRes0, 1, ident );
#line 3547 "cplus.met"
                        ReplaceTree(_ptRes0, 3, attrib );
#line 3547 "cplus.met"
                        retTree=_ptRes0;
#line 3547 "cplus.met"
                    }
#line 3547 "cplus.met"
#line 3547 "cplus.met"
                    _addlist1 = list ;
#line 3547 "cplus.met"
#line 3548 "cplus.met"
                    while (! ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN(AFER,"}") && (tokenAhead = 0,CommTerm(),1))) { 
#line 3548 "cplus.met"
#line 3549 "cplus.met"
#line 3550 "cplus.met"
                        {
#line 3550 "cplus.met"
                            PPTREE _ptTree0=0;
#line 3550 "cplus.met"
                            if ( (_ptTree0=NQUICK_CALL(_Tak(ext_all)(error_free), 64, cplus))== (PPTREE) -1 ) {
#line 3550 "cplus.met"
                                MulFreeTree(6,_ptTree0,_addlist1,attrib,ident,list,retTree);
                                PROG_EXIT(name_space_exit,"name_space")
#line 3550 "cplus.met"
                            }
#line 3550 "cplus.met"
                            _addlist1 =AddList(_addlist1 , _ptTree0);
#line 3550 "cplus.met"
                        }
#line 3550 "cplus.met"
#line 3550 "cplus.met"
                        if (list){
#line 3550 "cplus.met"
#line 3550 "cplus.met"
                            _addlist1 = SonTree (_addlist1 ,2 );
#line 3550 "cplus.met"
                        } else {
#line 3550 "cplus.met"
#line 3550 "cplus.met"
                            list = _addlist1 ;
#line 3550 "cplus.met"
                        }
#line 3550 "cplus.met"
#line 3550 "cplus.met"
                    } 
#line 3550 "cplus.met"
#line 3552 "cplus.met"
                    {
#line 3552 "cplus.met"
                        PPTREE _ptTree0=0;
#line 3552 "cplus.met"
                        if ( (_ptTree0=NQUICK_CALL(_Tak(none_statement)(error_free), 103, cplus))== (PPTREE) -1 ) {
#line 3552 "cplus.met"
                            MulFreeTree(6,_ptTree0,_addlist1,attrib,ident,list,retTree);
                            PROG_EXIT(name_space_exit,"name_space")
#line 3552 "cplus.met"
                        }
#line 3552 "cplus.met"
                        list =AddList(list , _ptTree0);
#line 3552 "cplus.met"
                    }
#line 3552 "cplus.met"
#line 3553 "cplus.met"
                    {
#line 3553 "cplus.met"
                        PPTREE _ptTree0=0;
#line 3553 "cplus.met"
                        {
#line 3553 "cplus.met"
                            PPTREE _ptRes1=0;
#line 3553 "cplus.met"
                            _ptRes1= MakeTree(COMPOUND_EXT, 1);
#line 3553 "cplus.met"
                            ReplaceTree(_ptRes1, 1, list );
#line 3553 "cplus.met"
                            _ptTree0=_ptRes1;
#line 3553 "cplus.met"
                        }
#line 3553 "cplus.met"
                        ReplaceTree(retTree , 2 , _ptTree0);
#line 3553 "cplus.met"
                    }
#line 3553 "cplus.met"
#line 3553 "cplus.met"
                    break;
#line 3553 "cplus.met"
#line 3557 "cplus.met"
                case EGAL : 
#line 3557 "cplus.met"
                    tokenAhead = 0 ;
#line 3557 "cplus.met"
                    CommTerm();
#line 3557 "cplus.met"
#line 3556 "cplus.met"
#line 3557 "cplus.met"
                    if ((ident == (PPTREE) 0 )){
#line 3557 "cplus.met"
#line 3558 "cplus.met"
                        
#line 3558 "cplus.met"
                        MulFreeTree(5,_addlist1,attrib,ident,list,retTree);
                        LEX_EXIT ("",0);
#line 3558 "cplus.met"
                        goto name_space_exit;
#line 3558 "cplus.met"
#line 3558 "cplus.met"
                    }
#line 3558 "cplus.met"
#line 3559 "cplus.met"
                    {
#line 3559 "cplus.met"
                        PPTREE _ptTree0=0,_ptRes0=0;
#line 3559 "cplus.met"
                        _ptRes0= MakeTree(NAMESPACE_ALIAS, 2);
#line 3559 "cplus.met"
                        ReplaceTree(_ptRes0, 1, ident );
#line 3559 "cplus.met"
                        if ( (_ptTree0=NQUICK_CALL(_Tak(complete_class_name)(error_free), 27, cplus))== (PPTREE) -1 ) {
#line 3559 "cplus.met"
                            MulFreeTree(7,_ptRes0,_ptTree0,_addlist1,attrib,ident,list,retTree);
                            PROG_EXIT(name_space_exit,"name_space")
#line 3559 "cplus.met"
                        }
#line 3559 "cplus.met"
                        ReplaceTree(_ptRes0, 2, _ptTree0);
#line 3559 "cplus.met"
                        retTree=_ptRes0;
#line 3559 "cplus.met"
                    }
#line 3559 "cplus.met"
#line 3559 "cplus.met"
                    break;
#line 3559 "cplus.met"
                default :
#line 3559 "cplus.met"
                    MulFreeTree(5,_addlist1,attrib,ident,list,retTree);
                    CASE_EXIT(name_space_exit,"either { or =")
#line 3559 "cplus.met"
                    break;
#line 3559 "cplus.met"
            }
#line 3559 "cplus.met"
#line 3559 "cplus.met"
            break;
#line 3559 "cplus.met"
#line 3563 "cplus.met"
        case USING : 
#line 3563 "cplus.met"
            tokenAhead = 0 ;
#line 3563 "cplus.met"
            CommTerm();
#line 3563 "cplus.met"
#line 3564 "cplus.met"
#line 3565 "cplus.met"
            if ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN(NAMESPACE,"namespace") && (tokenAhead = 0,CommTerm(),1)){
#line 3565 "cplus.met"
#line 3566 "cplus.met"
#line 3567 "cplus.met"
                if (NPUSH_CALL_AFF_VERIF(attrib = ,_Tak(attribute_call), 17, cplus)){
#line 3567 "cplus.met"
#line 3567 "cplus.met"
                }
#line 3567 "cplus.met"
#line 3569 "cplus.met"
                {
#line 3569 "cplus.met"
                    PPTREE _ptTree0=0,_ptRes0=0;
#line 3569 "cplus.met"
                    _ptRes0= MakeTree(USING_NAMESPACE, 2);
#line 3569 "cplus.met"
                    if ( (_ptTree0=NQUICK_CALL(_Tak(complete_class_name)(error_free), 27, cplus))== (PPTREE) -1 ) {
#line 3569 "cplus.met"
                        MulFreeTree(7,_ptRes0,_ptTree0,_addlist1,attrib,ident,list,retTree);
                        PROG_EXIT(name_space_exit,"name_space")
#line 3569 "cplus.met"
                    }
#line 3569 "cplus.met"
                    ReplaceTree(_ptRes0, 1, _ptTree0);
#line 3569 "cplus.met"
                    ReplaceTree(_ptRes0, 2, attrib );
#line 3569 "cplus.met"
                    retTree=_ptRes0;
#line 3569 "cplus.met"
                }
#line 3569 "cplus.met"
#line 3569 "cplus.met"
#line 3569 "cplus.met"
            } else {
#line 3569 "cplus.met"
#line 3572 "cplus.met"
                {
#line 3572 "cplus.met"
                    PPTREE _ptTree0=0,_ptRes0=0;
#line 3572 "cplus.met"
                    _ptRes0= MakeTree(USING, 1);
#line 3572 "cplus.met"
                    if ( (_ptTree0=NQUICK_CALL(_Tak(complete_class_name)(error_free), 27, cplus))== (PPTREE) -1 ) {
#line 3572 "cplus.met"
                        MulFreeTree(7,_ptRes0,_ptTree0,_addlist1,attrib,ident,list,retTree);
                        PROG_EXIT(name_space_exit,"name_space")
#line 3572 "cplus.met"
                    }
#line 3572 "cplus.met"
                    ReplaceTree(_ptRes0, 1, _ptTree0);
#line 3572 "cplus.met"
                    retTree=_ptRes0;
#line 3572 "cplus.met"
                }
#line 3572 "cplus.met"
            }
#line 3572 "cplus.met"
#line 3573 "cplus.met"
            (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3573 "cplus.met"
            if (  !SEE_TOKEN( PVIR,";") || !(CommTerm(),1)) {
#line 3573 "cplus.met"
                MulFreeTree(5,_addlist1,attrib,ident,list,retTree);
                TOKEN_EXIT(name_space_exit,";")
#line 3573 "cplus.met"
            } else {
#line 3573 "cplus.met"
                tokenAhead = 0 ;
#line 3573 "cplus.met"
            }
#line 3573 "cplus.met"
#line 3573 "cplus.met"
            break;
#line 3573 "cplus.met"
        default :
#line 3573 "cplus.met"
            MulFreeTree(5,_addlist1,attrib,ident,list,retTree);
            CASE_EXIT(name_space_exit,"either namespace or using")
#line 3573 "cplus.met"
            break;
#line 3573 "cplus.met"
    }
#line 3573 "cplus.met"
#line 3576 "cplus.met"
    {
#line 3576 "cplus.met"
        _retValue = retTree ;
#line 3576 "cplus.met"
        goto name_space_ret;
#line 3576 "cplus.met"
        
#line 3576 "cplus.met"
    }
#line 3576 "cplus.met"
#line 3576 "cplus.met"
#line 3576 "cplus.met"

#line 3577 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 3577 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 3577 "cplus.met"
return((PPTREE) 0);
#line 3577 "cplus.met"

#line 3577 "cplus.met"
name_space_exit :
#line 3577 "cplus.met"

#line 3577 "cplus.met"
    _Debug = TRACE_RULE("name_space",TRACE_EXIT,(PPTREE)0);
#line 3577 "cplus.met"
    _funcLevel--;
#line 3577 "cplus.met"
    return((PPTREE) -1) ;
#line 3577 "cplus.met"

#line 3577 "cplus.met"
name_space_ret :
#line 3577 "cplus.met"
    
#line 3577 "cplus.met"
    _Debug = TRACE_RULE("name_space",TRACE_RETURN,_retValue);
#line 3577 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 3577 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 3577 "cplus.met"
    return _retValue ;
#line 3577 "cplus.met"
}
#line 3577 "cplus.met"

#line 3577 "cplus.met"
#line 2802 "cplus.met"
PPTREE cplus::new_1 ( int error_free)
#line 2802 "cplus.met"
{
#line 2802 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 2802 "cplus.met"
    int _value,_nbPre = 0 ;
#line 2802 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 2802 "cplus.met"
    int _Debug = TRACE_RULE("new_1",TRACE_ENTER,(PPTREE)0);
#line 2802 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 2802 "cplus.met"
#line 2802 "cplus.met"
    PPTREE retTree = (PPTREE) 0;
#line 2802 "cplus.met"
#line 2804 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 2804 "cplus.met"
    if (  !SEE_TOKEN( POUV,"(") || !(CommTerm(),1)) {
#line 2804 "cplus.met"
        MulFreeTree(1,retTree);
        TOKEN_EXIT(new_1_exit,"(")
#line 2804 "cplus.met"
    } else {
#line 2804 "cplus.met"
        tokenAhead = 0 ;
#line 2804 "cplus.met"
    }
#line 2804 "cplus.met"
#line 2805 "cplus.met"
    if ( (retTree=NQUICK_CALL(_Tak(expression)(error_free), 62, cplus))== (PPTREE) -1 ) {
#line 2805 "cplus.met"
        MulFreeTree(1,retTree);
        PROG_EXIT(new_1_exit,"new_1")
#line 2805 "cplus.met"
    }
#line 2805 "cplus.met"
#line 2806 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 2806 "cplus.met"
    if (  !SEE_TOKEN( PFER,")") || !(CommTerm(),1)) {
#line 2806 "cplus.met"
        MulFreeTree(1,retTree);
        TOKEN_EXIT(new_1_exit,")")
#line 2806 "cplus.met"
    } else {
#line 2806 "cplus.met"
        tokenAhead = 0 ;
#line 2806 "cplus.met"
    }
#line 2806 "cplus.met"
#line 2807 "cplus.met"
    if ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN(POUV,"(") && (tokenAhead = 0,CommTerm(),1)){
#line 2807 "cplus.met"
#line 2808 "cplus.met"
#line 2809 "cplus.met"
        {
#line 2809 "cplus.met"
            PPTREE _ptTree0=0,_ptRes0=0;
#line 2809 "cplus.met"
            _ptRes0= MakeTree(NEW, 4);
#line 2809 "cplus.met"
            ReplaceTree(_ptRes0, 1, retTree );
#line 2809 "cplus.met"
            if ( (_ptTree0=NQUICK_CALL(_Tak(type_name)(error_free), 146, cplus))== (PPTREE) -1 ) {
#line 2809 "cplus.met"
                MulFreeTree(3,_ptRes0,_ptTree0,retTree);
                PROG_EXIT(new_1_exit,"new_1")
#line 2809 "cplus.met"
            }
#line 2809 "cplus.met"
            ReplaceTree(_ptRes0, 2, _ptTree0);
#line 2809 "cplus.met"
            retTree=_ptRes0;
#line 2809 "cplus.met"
        }
#line 2809 "cplus.met"
#line 2810 "cplus.met"
        (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 2810 "cplus.met"
        if (  !SEE_TOKEN( PFER,")") || !(CommTerm(),1)) {
#line 2810 "cplus.met"
            MulFreeTree(1,retTree);
            TOKEN_EXIT(new_1_exit,")")
#line 2810 "cplus.met"
        } else {
#line 2810 "cplus.met"
            tokenAhead = 0 ;
#line 2810 "cplus.met"
        }
#line 2810 "cplus.met"
#line 2811 "cplus.met"
        {
#line 2811 "cplus.met"
            _retValue = retTree ;
#line 2811 "cplus.met"
            goto new_1_ret;
#line 2811 "cplus.met"
            
#line 2811 "cplus.met"
        }
#line 2811 "cplus.met"
#line 2811 "cplus.met"
#line 2811 "cplus.met"
    } else {
#line 2811 "cplus.met"
#line 2814 "cplus.met"
        {
#line 2814 "cplus.met"
            PPTREE _ptTree0=0,_ptRes0=0;
#line 2814 "cplus.met"
            _ptRes0= MakeTree(NEW, 4);
#line 2814 "cplus.met"
            ReplaceTree(_ptRes0, 1, retTree );
#line 2814 "cplus.met"
            if ( (_ptTree0=NQUICK_CALL(_Tak(new_type_name)(error_free), 102, cplus))== (PPTREE) -1 ) {
#line 2814 "cplus.met"
                MulFreeTree(3,_ptRes0,_ptTree0,retTree);
                PROG_EXIT(new_1_exit,"new_1")
#line 2814 "cplus.met"
            }
#line 2814 "cplus.met"
            ReplaceTree(_ptRes0, 2, _ptTree0);
#line 2814 "cplus.met"
            retTree=_ptRes0;
#line 2814 "cplus.met"
        }
#line 2814 "cplus.met"
    }
#line 2814 "cplus.met"
#line 2815 "cplus.met"
    {
#line 2815 "cplus.met"
        _retValue = retTree ;
#line 2815 "cplus.met"
        goto new_1_ret;
#line 2815 "cplus.met"
        
#line 2815 "cplus.met"
    }
#line 2815 "cplus.met"
#line 2815 "cplus.met"
#line 2815 "cplus.met"

#line 2816 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2816 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 2816 "cplus.met"
return((PPTREE) 0);
#line 2816 "cplus.met"

#line 2816 "cplus.met"
new_1_exit :
#line 2816 "cplus.met"

#line 2816 "cplus.met"
    _Debug = TRACE_RULE("new_1",TRACE_EXIT,(PPTREE)0);
#line 2816 "cplus.met"
    _funcLevel--;
#line 2816 "cplus.met"
    return((PPTREE) -1) ;
#line 2816 "cplus.met"

#line 2816 "cplus.met"
new_1_ret :
#line 2816 "cplus.met"
    
#line 2816 "cplus.met"
    _Debug = TRACE_RULE("new_1",TRACE_RETURN,_retValue);
#line 2816 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2816 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 2816 "cplus.met"
    return _retValue ;
#line 2816 "cplus.met"
}
#line 2816 "cplus.met"

#line 2816 "cplus.met"
#line 2818 "cplus.met"
PPTREE cplus::new_2 ( int error_free)
#line 2818 "cplus.met"
{
#line 2818 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 2818 "cplus.met"
    int _value,_nbPre = 0 ;
#line 2818 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 2818 "cplus.met"
    int _Debug = TRACE_RULE("new_2",TRACE_ENTER,(PPTREE)0);
#line 2818 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 2818 "cplus.met"
#line 2818 "cplus.met"
    PPTREE retTree = (PPTREE) 0;
#line 2818 "cplus.met"
#line 2820 "cplus.met"
    if ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN(POUV,"(") && (tokenAhead = 0,CommTerm(),1)){
#line 2820 "cplus.met"
#line 2821 "cplus.met"
#line 2822 "cplus.met"
        {
#line 2822 "cplus.met"
            PPTREE _ptTree0=0,_ptRes0=0;
#line 2822 "cplus.met"
            _ptRes0= MakeTree(NEW, 4);
#line 2822 "cplus.met"
            if ( (_ptTree0=NQUICK_CALL(_Tak(type_name)(error_free), 146, cplus))== (PPTREE) -1 ) {
#line 2822 "cplus.met"
                MulFreeTree(3,_ptRes0,_ptTree0,retTree);
                PROG_EXIT(new_2_exit,"new_2")
#line 2822 "cplus.met"
            }
#line 2822 "cplus.met"
            ReplaceTree(_ptRes0, 2, _ptTree0);
#line 2822 "cplus.met"
            retTree=_ptRes0;
#line 2822 "cplus.met"
        }
#line 2822 "cplus.met"
#line 2823 "cplus.met"
        (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 2823 "cplus.met"
        if (  !SEE_TOKEN( PFER,")") || !(CommTerm(),1)) {
#line 2823 "cplus.met"
            MulFreeTree(1,retTree);
            TOKEN_EXIT(new_2_exit,")")
#line 2823 "cplus.met"
        } else {
#line 2823 "cplus.met"
            tokenAhead = 0 ;
#line 2823 "cplus.met"
        }
#line 2823 "cplus.met"
#line 2824 "cplus.met"
        {
#line 2824 "cplus.met"
            _retValue = retTree ;
#line 2824 "cplus.met"
            goto new_2_ret;
#line 2824 "cplus.met"
            
#line 2824 "cplus.met"
        }
#line 2824 "cplus.met"
#line 2824 "cplus.met"
#line 2824 "cplus.met"
    } else {
#line 2824 "cplus.met"
#line 2827 "cplus.met"
        {
#line 2827 "cplus.met"
            PPTREE _ptTree0=0,_ptRes0=0;
#line 2827 "cplus.met"
            _ptRes0= MakeTree(NEW, 4);
#line 2827 "cplus.met"
            if ( (_ptTree0=NQUICK_CALL(_Tak(new_type_name)(error_free), 102, cplus))== (PPTREE) -1 ) {
#line 2827 "cplus.met"
                MulFreeTree(3,_ptRes0,_ptTree0,retTree);
                PROG_EXIT(new_2_exit,"new_2")
#line 2827 "cplus.met"
            }
#line 2827 "cplus.met"
            ReplaceTree(_ptRes0, 2, _ptTree0);
#line 2827 "cplus.met"
            retTree=_ptRes0;
#line 2827 "cplus.met"
        }
#line 2827 "cplus.met"
    }
#line 2827 "cplus.met"
#line 2828 "cplus.met"
    {
#line 2828 "cplus.met"
        _retValue = retTree ;
#line 2828 "cplus.met"
        goto new_2_ret;
#line 2828 "cplus.met"
        
#line 2828 "cplus.met"
    }
#line 2828 "cplus.met"
#line 2828 "cplus.met"
#line 2828 "cplus.met"

#line 2829 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2829 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 2829 "cplus.met"
return((PPTREE) 0);
#line 2829 "cplus.met"

#line 2829 "cplus.met"
new_2_exit :
#line 2829 "cplus.met"

#line 2829 "cplus.met"
    _Debug = TRACE_RULE("new_2",TRACE_EXIT,(PPTREE)0);
#line 2829 "cplus.met"
    _funcLevel--;
#line 2829 "cplus.met"
    return((PPTREE) -1) ;
#line 2829 "cplus.met"

#line 2829 "cplus.met"
new_2_ret :
#line 2829 "cplus.met"
    
#line 2829 "cplus.met"
    _Debug = TRACE_RULE("new_2",TRACE_RETURN,_retValue);
#line 2829 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2829 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 2829 "cplus.met"
    return _retValue ;
#line 2829 "cplus.met"
}
#line 2829 "cplus.met"

#line 2829 "cplus.met"
#line 2377 "cplus.met"
PPTREE cplus::new_declarator ( int error_free)
#line 2377 "cplus.met"
{
#line 2377 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 2377 "cplus.met"
    int _value,_nbPre = 0 ;
#line 2377 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 2377 "cplus.met"
    int _Debug = TRACE_RULE("new_declarator",TRACE_ENTER,(PPTREE)0);
#line 2377 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 2377 "cplus.met"
#line 2377 "cplus.met"
    PPTREE valTree = (PPTREE) 0,retTree = (PPTREE) 0,expList = (PPTREE) 0;
#line 2377 "cplus.met"
#line 2379 "cplus.met"
    if (NPUSH_CALL_AFF_VERIF(valTree = ,_Tak(range_modifier), 121, cplus)){
#line 2379 "cplus.met"
#line 2380 "cplus.met"
        {
#line 2380 "cplus.met"
            PPTREE _ptTree0=0;
#line 2380 "cplus.met"
            {
#line 2380 "cplus.met"
                PPTREE _ptTree1=0;
#line 2380 "cplus.met"
                if ( (_ptTree1=NQUICK_CALL(_Tak(new_declarator)(error_free), 101, cplus))== (PPTREE) -1 ) {
#line 2380 "cplus.met"
                    MulFreeTree(5,_ptTree1,_ptTree0,expList,retTree,valTree);
                    PROG_EXIT(new_declarator_exit,"new_declarator")
#line 2380 "cplus.met"
                }
#line 2380 "cplus.met"
                _ptTree0=ReplaceTree(valTree , 2 , _ptTree1);
#line 2380 "cplus.met"
            }
#line 2380 "cplus.met"
            _retValue =_ptTree0;
#line 2380 "cplus.met"
            goto new_declarator_ret;
#line 2380 "cplus.met"
        }
#line 2380 "cplus.met"
    }
#line 2380 "cplus.met"
#line 2381 "cplus.met"
    retTree = (PPTREE) 0;
#line 2381 "cplus.met"
#line 2382 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 2382 "cplus.met"
    switch( lexEl.Value) {
#line 2382 "cplus.met"
#line 2383 "cplus.met"
        case ETOI : 
#line 2383 "cplus.met"
            tokenAhead = 0 ;
#line 2383 "cplus.met"
            CommTerm();
#line 2383 "cplus.met"
#line 2383 "cplus.met"
            {
#line 2383 "cplus.met"
                PPTREE _ptTree0=0;
#line 2383 "cplus.met"
                {
#line 2383 "cplus.met"
                    PPTREE _ptTree1=0,_ptRes1=0;
#line 2383 "cplus.met"
                    _ptRes1= MakeTree(TYP_ADDR, 1);
#line 2383 "cplus.met"
                    if ( (_ptTree1=NQUICK_CALL(_Tak(new_declarator)(error_free), 101, cplus))== (PPTREE) -1 ) {
#line 2383 "cplus.met"
                        MulFreeTree(6,_ptRes1,_ptTree1,_ptTree0,expList,retTree,valTree);
                        PROG_EXIT(new_declarator_exit,"new_declarator")
#line 2383 "cplus.met"
                    }
#line 2383 "cplus.met"
                    ReplaceTree(_ptRes1, 1, _ptTree1);
#line 2383 "cplus.met"
                    _ptTree0=_ptRes1;
#line 2383 "cplus.met"
                }
#line 2383 "cplus.met"
                _retValue =_ptTree0;
#line 2383 "cplus.met"
                goto new_declarator_ret;
#line 2383 "cplus.met"
            }
#line 2383 "cplus.met"
            break;
#line 2383 "cplus.met"
#line 2384 "cplus.met"
        case META : 
#line 2384 "cplus.met"
        case IDENT : 
#line 2384 "cplus.met"
#line 2385 "cplus.met"
#line 2386 "cplus.met"
            if ( (valTree=NQUICK_CALL(_Tak(member_declarator)(error_free), 95, cplus))== (PPTREE) -1 ) {
#line 2386 "cplus.met"
                MulFreeTree(3,expList,retTree,valTree);
                PROG_EXIT(new_declarator_exit,"new_declarator")
#line 2386 "cplus.met"
            }
#line 2386 "cplus.met"
#line 2387 "cplus.met"
            {
#line 2387 "cplus.met"
                PPTREE _ptTree0=0;
#line 2387 "cplus.met"
                {
#line 2387 "cplus.met"
                    PPTREE _ptTree1=0;
#line 2387 "cplus.met"
                    if ( (_ptTree1=NQUICK_CALL(_Tak(new_declarator)(error_free), 101, cplus))== (PPTREE) -1 ) {
#line 2387 "cplus.met"
                        MulFreeTree(5,_ptTree1,_ptTree0,expList,retTree,valTree);
                        PROG_EXIT(new_declarator_exit,"new_declarator")
#line 2387 "cplus.met"
                    }
#line 2387 "cplus.met"
                    _ptTree0=ReplaceTree(valTree , 2 , _ptTree1);
#line 2387 "cplus.met"
                }
#line 2387 "cplus.met"
                _retValue =_ptTree0;
#line 2387 "cplus.met"
                goto new_declarator_ret;
#line 2387 "cplus.met"
            }
#line 2387 "cplus.met"
#line 2387 "cplus.met"
            break;
#line 2387 "cplus.met"
#line 2396 "cplus.met"
        default : 
#line 2396 "cplus.met"
#line 2392 "cplus.met"
#line 2394 "cplus.met"
            while ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN(COUV,"[") && (tokenAhead = 0,CommTerm(),1)) { 
#line 2394 "cplus.met"
#line 2395 "cplus.met"
#line 2396 "cplus.met"
                if (NPUSH_CALL_AFF_VERIF(expList = ,_Tak(expression), 62, cplus)){
#line 2396 "cplus.met"
#line 2397 "cplus.met"
                    {
#line 2397 "cplus.met"
                        PPTREE _ptRes0=0;
#line 2397 "cplus.met"
                        _ptRes0= MakeTree(TYP_ARRAY, 2);
#line 2397 "cplus.met"
                        ReplaceTree(_ptRes0, 1, retTree );
#line 2397 "cplus.met"
                        ReplaceTree(_ptRes0, 2, expList );
#line 2397 "cplus.met"
                        retTree=_ptRes0;
#line 2397 "cplus.met"
                    }
#line 2397 "cplus.met"
                } else {
#line 2397 "cplus.met"
#line 2399 "cplus.met"
                    {
#line 2399 "cplus.met"
                        PPTREE _ptRes0=0;
#line 2399 "cplus.met"
                        _ptRes0= MakeTree(TYP_ARRAY, 2);
#line 2399 "cplus.met"
                        ReplaceTree(_ptRes0, 1, retTree );
#line 2399 "cplus.met"
                        retTree=_ptRes0;
#line 2399 "cplus.met"
                    }
#line 2399 "cplus.met"
                }
#line 2399 "cplus.met"
#line 2400 "cplus.met"
                (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 2400 "cplus.met"
                if (  !SEE_TOKEN( CFER,"]") || !(CommTerm(),1)) {
#line 2400 "cplus.met"
                    MulFreeTree(3,expList,retTree,valTree);
                    TOKEN_EXIT(new_declarator_exit,"]")
#line 2400 "cplus.met"
                } else {
#line 2400 "cplus.met"
                    tokenAhead = 0 ;
#line 2400 "cplus.met"
                }
#line 2400 "cplus.met"
#line 2400 "cplus.met"
            } 
#line 2400 "cplus.met"
#line 2402 "cplus.met"
            {
#line 2402 "cplus.met"
                _retValue = retTree ;
#line 2402 "cplus.met"
                goto new_declarator_ret;
#line 2402 "cplus.met"
                
#line 2402 "cplus.met"
            }
#line 2402 "cplus.met"
#line 2402 "cplus.met"
            break;
#line 2402 "cplus.met"
    }
#line 2402 "cplus.met"
#line 2402 "cplus.met"
#line 2404 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2404 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 2404 "cplus.met"
return((PPTREE) 0);
#line 2404 "cplus.met"

#line 2404 "cplus.met"
new_declarator_exit :
#line 2404 "cplus.met"

#line 2404 "cplus.met"
    _Debug = TRACE_RULE("new_declarator",TRACE_EXIT,(PPTREE)0);
#line 2404 "cplus.met"
    _funcLevel--;
#line 2404 "cplus.met"
    return((PPTREE) -1) ;
#line 2404 "cplus.met"

#line 2404 "cplus.met"
new_declarator_ret :
#line 2404 "cplus.met"
    
#line 2404 "cplus.met"
    _Debug = TRACE_RULE("new_declarator",TRACE_RETURN,_retValue);
#line 2404 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2404 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 2404 "cplus.met"
    return _retValue ;
#line 2404 "cplus.met"
}
#line 2404 "cplus.met"

#line 2404 "cplus.met"
#line 2527 "cplus.met"
PPTREE cplus::new_type_name ( int error_free)
#line 2527 "cplus.met"
{
#line 2527 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 2527 "cplus.met"
    int _value,_nbPre = 0 ;
#line 2527 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 2527 "cplus.met"
    int _Debug = TRACE_RULE("new_type_name",TRACE_ENTER,(PPTREE)0);
#line 2527 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 2527 "cplus.met"
#line 2527 "cplus.met"
    PPTREE retTree = (PPTREE) 0,valTree = (PPTREE) 0;
#line 2527 "cplus.met"
#line 2529 "cplus.met"
    if ( (retTree=NQUICK_CALL(_Tak(type_specifier)(error_free), 147, cplus))== (PPTREE) -1 ) {
#line 2529 "cplus.met"
        MulFreeTree(2,retTree,valTree);
        PROG_EXIT(new_type_name_exit,"new_type_name")
#line 2529 "cplus.met"
    }
#line 2529 "cplus.met"
#line 2530 "cplus.met"
    if (NPUSH_CALL_AFF_VERIF(valTree = ,_Tak(new_declarator), 101, cplus)){
#line 2530 "cplus.met"
#line 2531 "cplus.met"
        {
#line 2531 "cplus.met"
            PPTREE _ptRes0=0;
#line 2531 "cplus.met"
            _ptRes0= MakeTree(NEW_DECLARATOR, 2);
#line 2531 "cplus.met"
            ReplaceTree(_ptRes0, 1, retTree );
#line 2531 "cplus.met"
            ReplaceTree(_ptRes0, 2, valTree );
#line 2531 "cplus.met"
            valTree=_ptRes0;
#line 2531 "cplus.met"
        }
#line 2531 "cplus.met"
    } else {
#line 2531 "cplus.met"
#line 2533 "cplus.met"
        valTree = retTree ;
#line 2533 "cplus.met"
    }
#line 2533 "cplus.met"
#line 2534 "cplus.met"
    {
#line 2534 "cplus.met"
        _retValue = valTree ;
#line 2534 "cplus.met"
        goto new_type_name_ret;
#line 2534 "cplus.met"
        
#line 2534 "cplus.met"
    }
#line 2534 "cplus.met"
#line 2534 "cplus.met"
#line 2534 "cplus.met"

#line 2535 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2535 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 2535 "cplus.met"
return((PPTREE) 0);
#line 2535 "cplus.met"

#line 2535 "cplus.met"
new_type_name_exit :
#line 2535 "cplus.met"

#line 2535 "cplus.met"
    _Debug = TRACE_RULE("new_type_name",TRACE_EXIT,(PPTREE)0);
#line 2535 "cplus.met"
    _funcLevel--;
#line 2535 "cplus.met"
    return((PPTREE) -1) ;
#line 2535 "cplus.met"

#line 2535 "cplus.met"
new_type_name_ret :
#line 2535 "cplus.met"
    
#line 2535 "cplus.met"
    _Debug = TRACE_RULE("new_type_name",TRACE_RETURN,_retValue);
#line 2535 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2535 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 2535 "cplus.met"
    return _retValue ;
#line 2535 "cplus.met"
}
#line 2535 "cplus.met"

#line 2535 "cplus.met"
#line 3247 "cplus.met"
PPTREE cplus::none_statement ( int error_free)
#line 3247 "cplus.met"
{
#line 3247 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 3247 "cplus.met"
    int _value,_nbPre = 0 ;
#line 3247 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 3247 "cplus.met"
    int _Debug = TRACE_RULE("none_statement",TRACE_ENTER,(PPTREE)0);
#line 3247 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 3247 "cplus.met"
#line 3248 "cplus.met"
    {
#line 3248 "cplus.met"
        PPTREE _ptTree0=0;
#line 3248 "cplus.met"
        {
#line 3248 "cplus.met"
            PPTREE _ptRes1=0;
#line 3248 "cplus.met"
            _ptRes1= MakeTree(NONE, 0);
#line 3248 "cplus.met"
            _ptTree0=_ptRes1;
#line 3248 "cplus.met"
        }
#line 3248 "cplus.met"
        _retValue =_ptTree0;
#line 3248 "cplus.met"
        goto none_statement_ret;
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
none_statement_exit :
#line 3249 "cplus.met"

#line 3249 "cplus.met"
    _Debug = TRACE_RULE("none_statement",TRACE_EXIT,(PPTREE)0);
#line 3249 "cplus.met"
    _funcLevel--;
#line 3249 "cplus.met"
    return((PPTREE) -1) ;
#line 3249 "cplus.met"

#line 3249 "cplus.met"
none_statement_ret :
#line 3249 "cplus.met"
    
#line 3249 "cplus.met"
    _Debug = TRACE_RULE("none_statement",TRACE_RETURN,_retValue);
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
#line 2969 "cplus.met"
PPTREE cplus::operator_function_name ( int error_free)
#line 2969 "cplus.met"
{
#line 2969 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 2969 "cplus.met"
    int _value,_nbPre = 0 ;
#line 2969 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 2969 "cplus.met"
    int _Debug = TRACE_RULE("operator_function_name",TRACE_ENTER,(PPTREE)0);
#line 2969 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 2969 "cplus.met"
#line 2969 "cplus.met"
    PPTREE retTree = (PPTREE) 0,valTree = (PPTREE) 0,list = (PPTREE) 0;
#line 2969 "cplus.met"
#line 2971 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 2971 "cplus.met"
    if (  !SEE_TOKEN( OPERATOR,"operator") || !(CommTerm(),1)) {
#line 2971 "cplus.met"
        MulFreeTree(3,list,retTree,valTree);
        TOKEN_EXIT(operator_function_name_exit,"operator")
#line 2971 "cplus.met"
    } else {
#line 2971 "cplus.met"
        tokenAhead = 0 ;
#line 2971 "cplus.met"
    }
#line 2971 "cplus.met"
#line 2972 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 2972 "cplus.met"
    switch( lexEl.Value) {
#line 2972 "cplus.met"
#line 2973 "cplus.met"
        case NEW : 
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
                    ReplaceTree(_ptRes1, 1, MakeString ("new"));
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
        case DELETE : 
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
                    ReplaceTree(_ptRes1, 1, MakeString ("delete"));
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
        case PLUS : 
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
                    ReplaceTree(_ptRes1, 1, MakeString ("+"));
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
        case TIRE : 
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
                    ReplaceTree(_ptRes1, 1, MakeString ("-"));
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
        case ETOI : 
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
                    ReplaceTree(_ptRes1, 1, MakeString ("*"));
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
        case META : 
#line 2978 "cplus.met"
        case SLAS : 
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
                    ReplaceTree(_ptRes1, 1, MakeString ("/"));
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
        case POURC : 
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
                    ReplaceTree(_ptRes1, 1, MakeString ("%"));
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
        case CHAP : 
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
                    ReplaceTree(_ptRes1, 1, MakeString ("^"));
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
        case ETCO : 
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
                    ReplaceTree(_ptRes1, 1, MakeString ("&"));
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
        case VBAR : 
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
                    ReplaceTree(_ptRes1, 1, MakeString ("|"));
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
        case TILD : 
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
                    ReplaceTree(_ptRes1, 1, MakeString ("~"));
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
        case EXCL : 
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
                    ReplaceTree(_ptRes1, 1, MakeString ("!"));
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
        case EGAL : 
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
                    ReplaceTree(_ptRes1, 1, MakeString ("="));
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
        case SUPE : 
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
                    ReplaceTree(_ptRes1, 1, MakeString (">"));
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
        case INFE : 
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
                    ReplaceTree(_ptRes1, 1, MakeString ("<"));
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
        case PLUSEGAL : 
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
                    ReplaceTree(_ptRes1, 1, MakeString ("+="));
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
        case TIREEGAL : 
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
                    ReplaceTree(_ptRes1, 1, MakeString ("-="));
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
        case ETOIEGAL : 
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
                    ReplaceTree(_ptRes1, 1, MakeString ("*="));
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
        case SLASEGAL : 
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
                    ReplaceTree(_ptRes1, 1, MakeString ("/="));
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
        case POURCEGAL : 
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
                    ReplaceTree(_ptRes1, 1, MakeString ("%="));
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
        case CHAPEGAL : 
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
                    ReplaceTree(_ptRes1, 1, MakeString ("^="));
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
        case ETCOEGAL : 
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
                    ReplaceTree(_ptRes1, 1, MakeString ("&="));
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
        case VBAREGAL : 
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
                    ReplaceTree(_ptRes1, 1, MakeString ("|="));
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
        case EXCLEGAL : 
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
                    ReplaceTree(_ptRes1, 1, MakeString ("!="));
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
        case EGALEGAL : 
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
                    ReplaceTree(_ptRes1, 1, MakeString ("=="));
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
        case INFEEGAL : 
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
                    ReplaceTree(_ptRes1, 1, MakeString ("<="));
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
        case SUPEEGAL : 
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
                    ReplaceTree(_ptRes1, 1, MakeString (">="));
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
        case INFEINFE : 
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
                    ReplaceTree(_ptRes1, 1, MakeString ("<<"));
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
        case SUPESUPE : 
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
                    ReplaceTree(_ptRes1, 1, MakeString (">>"));
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
        case INFEINFEEGAL : 
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
                    ReplaceTree(_ptRes1, 1, MakeString ("<<="));
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
        case SUPESUPEEGAL : 
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
                    ReplaceTree(_ptRes1, 1, MakeString (">>="));
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
        case ETCOETCO : 
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
                    ReplaceTree(_ptRes1, 1, MakeString ("&&"));
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
        case VBARVBAR : 
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
                    ReplaceTree(_ptRes1, 1, MakeString ("||"));
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
        case PLUSPLUS : 
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
                    ReplaceTree(_ptRes1, 1, MakeString ("++"));
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
        case TIRETIRE : 
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
                    ReplaceTree(_ptRes1, 1, MakeString ("--"));
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
        case VIRG : 
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
                    ReplaceTree(_ptRes1, 1, MakeString (","));
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
        case TIRESUPE : 
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
                    ReplaceTree(_ptRes1, 1, MakeString ("->"));
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
        case TIRESUPEETOI : 
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
                    ReplaceTree(_ptRes1, 1, MakeString ("->*"));
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
#line 3013 "cplus.met"
        case POUV : 
#line 3013 "cplus.met"
            tokenAhead = 0 ;
#line 3013 "cplus.met"
            CommTerm();
#line 3013 "cplus.met"
#line 3012 "cplus.met"
#line 3013 "cplus.met"
            (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3013 "cplus.met"
            if (  !SEE_TOKEN( PFER,")") || !(CommTerm(),1)) {
#line 3013 "cplus.met"
                MulFreeTree(3,list,retTree,valTree);
                TOKEN_EXIT(operator_function_name_exit,")")
#line 3013 "cplus.met"
            } else {
#line 3013 "cplus.met"
                tokenAhead = 0 ;
#line 3013 "cplus.met"
            }
#line 3013 "cplus.met"
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
                    ReplaceTree(_ptRes1, 1, MakeString ("()"));
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
#line 3014 "cplus.met"
            break;
#line 3014 "cplus.met"
#line 3018 "cplus.met"
        case COUV : 
#line 3018 "cplus.met"
            tokenAhead = 0 ;
#line 3018 "cplus.met"
            CommTerm();
#line 3018 "cplus.met"
#line 3017 "cplus.met"
#line 3018 "cplus.met"
            (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3018 "cplus.met"
            if (  !SEE_TOKEN( CFER,"]") || !(CommTerm(),1)) {
#line 3018 "cplus.met"
                MulFreeTree(3,list,retTree,valTree);
                TOKEN_EXIT(operator_function_name_exit,"]")
#line 3018 "cplus.met"
            } else {
#line 3018 "cplus.met"
                tokenAhead = 0 ;
#line 3018 "cplus.met"
            }
#line 3018 "cplus.met"
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
                    ReplaceTree(_ptRes1, 1, MakeString ("[]"));
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
#line 3019 "cplus.met"
            break;
#line 3019 "cplus.met"
#line 3019 "cplus.met"
        default : 
#line 3019 "cplus.met"
#line 3019 "cplus.met"
            break;
#line 3019 "cplus.met"
    }
#line 3019 "cplus.met"
#line 3023 "cplus.met"
    if (NPUSH_CALL_AFF_VERIF(retTree = ,_Tak(const_or_volatile), 30, cplus)){
#line 3023 "cplus.met"
#line 3024 "cplus.met"
        {
#line 3024 "cplus.met"
            PPTREE _ptRes0=0;
#line 3024 "cplus.met"
            _ptRes0= MakeTree(FOR_DECLARATION, 3);
#line 3024 "cplus.met"
            ReplaceTree(_ptRes0, 1, retTree );
#line 3024 "cplus.met"
            retTree=_ptRes0;
#line 3024 "cplus.met"
        }
#line 3024 "cplus.met"
    } else {
#line 3024 "cplus.met"
#line 3026 "cplus.met"
        {
#line 3026 "cplus.met"
            PPTREE _ptRes0=0;
#line 3026 "cplus.met"
            _ptRes0= MakeTree(FOR_DECLARATION, 3);
#line 3026 "cplus.met"
            retTree=_ptRes0;
#line 3026 "cplus.met"
        }
#line 3026 "cplus.met"
    }
#line 3026 "cplus.met"
#line 3027 "cplus.met"
    {
#line 3027 "cplus.met"
        PPTREE _ptTree0=0;
#line 3027 "cplus.met"
        if ( (_ptTree0=NQUICK_CALL(_Tak(type_specifier)(error_free), 147, cplus))== (PPTREE) -1 ) {
#line 3027 "cplus.met"
            MulFreeTree(4,_ptTree0,list,retTree,valTree);
            PROG_EXIT(operator_function_name_exit,"operator_function_name")
#line 3027 "cplus.met"
        }
#line 3027 "cplus.met"
        ReplaceTree(retTree , 2 , _ptTree0);
#line 3027 "cplus.met"
    }
#line 3027 "cplus.met"
#line 3028 "cplus.met"
    if (NPUSH_CALL_AFF_VERIF(valTree = ,_Tak(ptr_operator), 115, cplus)){
#line 3028 "cplus.met"
#line 3029 "cplus.met"
#line 3030 "cplus.met"
        list =AddList(list ,valTree );
#line 3030 "cplus.met"
#line 3031 "cplus.met"
        ReplaceTree(retTree ,3 ,list );
#line 3031 "cplus.met"
#line 3031 "cplus.met"
#line 3031 "cplus.met"
    }
#line 3031 "cplus.met"
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
            ReplaceTree(_ptRes1, 1, retTree );
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
#line 3033 "cplus.met"
#line 3033 "cplus.met"

#line 3034 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 3034 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 3034 "cplus.met"
return((PPTREE) 0);
#line 3034 "cplus.met"

#line 3034 "cplus.met"
operator_function_name_exit :
#line 3034 "cplus.met"

#line 3034 "cplus.met"
    _Debug = TRACE_RULE("operator_function_name",TRACE_EXIT,(PPTREE)0);
#line 3034 "cplus.met"
    _funcLevel--;
#line 3034 "cplus.met"
    return((PPTREE) -1) ;
#line 3034 "cplus.met"

#line 3034 "cplus.met"
operator_function_name_ret :
#line 3034 "cplus.met"
    
#line 3034 "cplus.met"
    _Debug = TRACE_RULE("operator_function_name",TRACE_RETURN,_retValue);
#line 3034 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 3034 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 3034 "cplus.met"
    return _retValue ;
#line 3034 "cplus.met"
}
#line 3034 "cplus.met"

#line 3034 "cplus.met"
#line 816 "cplus.met"
PPTREE cplus::other_config ( int error_free)
#line 816 "cplus.met"
{
#line 816 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 816 "cplus.met"
    int _value,_nbPre = 0 ;
#line 816 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 816 "cplus.met"
    int _Debug = TRACE_RULE("other_config",TRACE_ENTER,(PPTREE)0);
#line 816 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 816 "cplus.met"
#line 817 "cplus.met"
    {
#line 817 "cplus.met"
        PPTREE _ptTree0=0;
#line 817 "cplus.met"
        {
#line 817 "cplus.met"
            PPTREE _ptTree1=0,_ptRes1=0;
#line 817 "cplus.met"
            _ptRes1= MakeTree(PRAGMA, 1);
#line 817 "cplus.met"
            (tokenAhead == 8|| (LexPragma(),TRACE_LEX(1)));
#line 817 "cplus.met"
            if ( ! TERM_OR_META(PRAGMA_CONTENT,"PRAGMA_CONTENT") || !(BUILD_TERM_META(_ptTree1))) {
#line 817 "cplus.met"
                MulFreeTree(3,_ptRes1,_ptTree1,_ptTree0);
                TOKEN_EXIT(other_config_exit,"PRAGMA_CONTENT")
#line 817 "cplus.met"
            } else {
#line 817 "cplus.met"
                tokenAhead = 0 ;
#line 817 "cplus.met"
            }
#line 817 "cplus.met"
            ReplaceTree(_ptRes1, 1, _ptTree1);
#line 817 "cplus.met"
            _ptTree0=_ptRes1;
#line 817 "cplus.met"
        }
#line 817 "cplus.met"
        _retValue =_ptTree0;
#line 817 "cplus.met"
        goto other_config_ret;
#line 817 "cplus.met"
    }
#line 817 "cplus.met"
#line 817 "cplus.met"
#line 817 "cplus.met"

#line 818 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 818 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 818 "cplus.met"
return((PPTREE) 0);
#line 818 "cplus.met"

#line 818 "cplus.met"
other_config_exit :
#line 818 "cplus.met"

#line 818 "cplus.met"
    _Debug = TRACE_RULE("other_config",TRACE_EXIT,(PPTREE)0);
#line 818 "cplus.met"
    _funcLevel--;
#line 818 "cplus.met"
    return((PPTREE) -1) ;
#line 818 "cplus.met"

#line 818 "cplus.met"
other_config_ret :
#line 818 "cplus.met"
    
#line 818 "cplus.met"
    _Debug = TRACE_RULE("other_config",TRACE_RETURN,_retValue);
#line 818 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 818 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 818 "cplus.met"
    return _retValue ;
#line 818 "cplus.met"
}
#line 818 "cplus.met"

#line 818 "cplus.met"
#line 3065 "cplus.met"
PPTREE cplus::parameter_list ( int error_free)
#line 3065 "cplus.met"
{
#line 3065 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 3065 "cplus.met"
    int _value,_nbPre = 0 ;
#line 3065 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 3065 "cplus.met"
    int _Debug = TRACE_RULE("parameter_list",TRACE_ENTER,(PPTREE)0);
#line 3065 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 3065 "cplus.met"
#line 3065 "cplus.met"
    PPTREE _addlist1 = (PPTREE) 0;
#line 3065 "cplus.met"
#line 3065 "cplus.met"
    PPTREE paramList = (PPTREE) 0,none = (PPTREE) 0;
#line 3065 "cplus.met"
#line 3067 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3067 "cplus.met"
    if (  !SEE_TOKEN( POUV,"(") || !(CommTerm(),1)) {
#line 3067 "cplus.met"
        MulFreeTree(3,_addlist1,none,paramList);
        TOKEN_EXIT(parameter_list_exit,"(")
#line 3067 "cplus.met"
    } else {
#line 3067 "cplus.met"
        tokenAhead = 0 ;
#line 3067 "cplus.met"
    }
#line 3067 "cplus.met"
#line 3068 "cplus.met"
    if ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN( IDENT,"IDENT")){
#line 3068 "cplus.met"
#line 3069 "cplus.met"
#line 3070 "cplus.met"
         { int exit = 0 ;
#line 3070 "cplus.met"
#line 3071 "cplus.met"
        {
#line 3071 "cplus.met"
            PPTREE _ptTree0=0;
#line 3071 "cplus.met"
            {
#line 3071 "cplus.met"
                PPTREE _ptTree1=0,_ptRes1=0;
#line 3071 "cplus.met"
                _ptRes1= MakeTree(IDENT, 1);
#line 3071 "cplus.met"
                (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3071 "cplus.met"
                if ( ! TERM_OR_META(IDENT,"IDENT") || !(BUILD_TERM_META(_ptTree1))) {
#line 3071 "cplus.met"
                    MulFreeTree(6,_ptRes1,_ptTree1,_ptTree0,_addlist1,none,paramList);
                    TOKEN_EXIT(parameter_list_exit,"IDENT")
#line 3071 "cplus.met"
                } else {
#line 3071 "cplus.met"
                    tokenAhead = 0 ;
#line 3071 "cplus.met"
                }
#line 3071 "cplus.met"
                ReplaceTree(_ptRes1, 1, _ptTree1);
#line 3071 "cplus.met"
                _ptTree0=_ptRes1;
#line 3071 "cplus.met"
            }
#line 3071 "cplus.met"
            paramList =AddList(paramList , _ptTree0);
#line 3071 "cplus.met"
        }
#line 3071 "cplus.met"
#line 3071 "cplus.met"
        _addlist1 = paramList ;
#line 3071 "cplus.met"
#line 3072 "cplus.met"
        while ((! ( exit )) && 
#line 3072 "cplus.met"
              ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN(VIRG,",") && (tokenAhead = 0,CommTerm(),1))) { 
#line 3072 "cplus.met"
#line 3073 "cplus.met"
            if ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN( IDENT,"IDENT")){
#line 3073 "cplus.met"
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
                        _ptRes1= MakeTree(IDENT, 1);
#line 3074 "cplus.met"
                        (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3074 "cplus.met"
                        if ( ! TERM_OR_META(IDENT,"IDENT") || !(BUILD_TERM_META(_ptTree1))) {
#line 3074 "cplus.met"
                            MulFreeTree(6,_ptRes1,_ptTree1,_ptTree0,_addlist1,none,paramList);
                            TOKEN_EXIT(parameter_list_exit,"IDENT")
#line 3074 "cplus.met"
                        } else {
#line 3074 "cplus.met"
                            tokenAhead = 0 ;
#line 3074 "cplus.met"
                        }
#line 3074 "cplus.met"
                        ReplaceTree(_ptRes1, 1, _ptTree1);
#line 3074 "cplus.met"
                        _ptTree0=_ptRes1;
#line 3074 "cplus.met"
                    }
#line 3074 "cplus.met"
                    _addlist1 =AddList(_addlist1 , _ptTree0);
#line 3074 "cplus.met"
                }
#line 3074 "cplus.met"
#line 3074 "cplus.met"
                if (paramList){
#line 3074 "cplus.met"
#line 3074 "cplus.met"
                    _addlist1 = SonTree (_addlist1 ,2 );
#line 3074 "cplus.met"
                } else {
#line 3074 "cplus.met"
#line 3074 "cplus.met"
                    paramList = _addlist1 ;
#line 3074 "cplus.met"
                }
#line 3074 "cplus.met"
            } else {
#line 3074 "cplus.met"
#line 3076 "cplus.met"
#line 3077 "cplus.met"
                {
#line 3077 "cplus.met"
                    PPTREE _ptTree0=0;
#line 3077 "cplus.met"
                    {
#line 3077 "cplus.met"
                        PPTREE _ptRes1=0;
#line 3077 "cplus.met"
                        _ptRes1= MakeTree(VAR_LIST, 0);
#line 3077 "cplus.met"
                        _ptTree0=_ptRes1;
#line 3077 "cplus.met"
                    }
#line 3077 "cplus.met"
                    _addlist1 =AddList(_addlist1 , _ptTree0);
#line 3077 "cplus.met"
                }
#line 3077 "cplus.met"
#line 3077 "cplus.met"
                if (paramList){
#line 3077 "cplus.met"
#line 3077 "cplus.met"
                    _addlist1 = SonTree (_addlist1 ,2 );
#line 3077 "cplus.met"
                } else {
#line 3077 "cplus.met"
#line 3077 "cplus.met"
                    paramList = _addlist1 ;
#line 3077 "cplus.met"
                }
#line 3077 "cplus.met"
#line 3078 "cplus.met"
                 exit = 1 ;
#line 3078 "cplus.met"
#line 3079 "cplus.met"
                if ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN(POINPOINPOIN,"...") && (tokenAhead = 0,CommTerm(),1)){
#line 3079 "cplus.met"
#line 3079 "cplus.met"
                }
#line 3079 "cplus.met"
#line 3079 "cplus.met"
            }
#line 3079 "cplus.met"
        } 
#line 3079 "cplus.met"
#line 3082 "cplus.met"
        if ((! ( exit )) && 
#line 3082 "cplus.met"
           ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN(POINPOINPOIN,"...") && (tokenAhead = 0,CommTerm(),1))){
#line 3082 "cplus.met"
#line 3083 "cplus.met"
            {
#line 3083 "cplus.met"
                PPTREE _ptTree0=0;
#line 3083 "cplus.met"
                {
#line 3083 "cplus.met"
                    PPTREE _ptRes1=0;
#line 3083 "cplus.met"
                    _ptRes1= MakeTree(VAR_LIST, 0);
#line 3083 "cplus.met"
                    _ptTree0=_ptRes1;
#line 3083 "cplus.met"
                }
#line 3083 "cplus.met"
                paramList =AddList(paramList , _ptTree0);
#line 3083 "cplus.met"
            }
#line 3083 "cplus.met"
#line 3083 "cplus.met"
        }
#line 3083 "cplus.met"
#line 3084 "cplus.met"
         } 
#line 3084 "cplus.met"
#line 3084 "cplus.met"
#line 3084 "cplus.met"
    } else {
#line 3084 "cplus.met"
#line 3087 "cplus.met"
        paramList =AddList(paramList ,none );
#line 3087 "cplus.met"
    }
#line 3087 "cplus.met"
#line 3088 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3088 "cplus.met"
    if (  !SEE_TOKEN( PFER,")") || !(CommTerm(),1)) {
#line 3088 "cplus.met"
        MulFreeTree(3,_addlist1,none,paramList);
        TOKEN_EXIT(parameter_list_exit,")")
#line 3088 "cplus.met"
    } else {
#line 3088 "cplus.met"
        tokenAhead = 0 ;
#line 3088 "cplus.met"
    }
#line 3088 "cplus.met"
#line 3089 "cplus.met"
    {
#line 3089 "cplus.met"
        _retValue = paramList ;
#line 3089 "cplus.met"
        goto parameter_list_ret;
#line 3089 "cplus.met"
        
#line 3089 "cplus.met"
    }
#line 3089 "cplus.met"
#line 3089 "cplus.met"
#line 3089 "cplus.met"

#line 3090 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 3090 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 3090 "cplus.met"
return((PPTREE) 0);
#line 3090 "cplus.met"

#line 3090 "cplus.met"
parameter_list_exit :
#line 3090 "cplus.met"

#line 3090 "cplus.met"
    _Debug = TRACE_RULE("parameter_list",TRACE_EXIT,(PPTREE)0);
#line 3090 "cplus.met"
    _funcLevel--;
#line 3090 "cplus.met"
    return((PPTREE) -1) ;
#line 3090 "cplus.met"

#line 3090 "cplus.met"
parameter_list_ret :
#line 3090 "cplus.met"
    
#line 3090 "cplus.met"
    _Debug = TRACE_RULE("parameter_list",TRACE_RETURN,_retValue);
#line 3090 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 3090 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 3090 "cplus.met"
    return _retValue ;
#line 3090 "cplus.met"
}
#line 3090 "cplus.met"

#line 3090 "cplus.met"
