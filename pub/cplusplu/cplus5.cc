/*************************************************************************/
/*                                                                       */
/*        Produced by MetaGen version 2.0  -    1989-2006                 */
/*       Syntaxic Analyzer Meta Generator developped by                  */
/*                  Eric Lavillonniere                                   */
/*                                                                       */
/*************************************************************************/

#include "token.h"
#include "cplus.h"


#line 3512 "cplus.met"
PPTREE cplus::name_space ( int error_free)
#line 3512 "cplus.met"
{
#line 3512 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 3512 "cplus.met"
    int _value,_nbPre = 0 ;
#line 3512 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 3512 "cplus.met"
    int _Debug = TRACE_RULE("name_space",TRACE_ENTER,(PPTREE)0);
#line 3512 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 3512 "cplus.met"
#line 3512 "cplus.met"
    PPTREE _addlist1 = (PPTREE) 0;
#line 3512 "cplus.met"
#line 3512 "cplus.met"
    PPTREE list = (PPTREE) 0,retTree = (PPTREE) 0,ident = (PPTREE) 0,attrib = (PPTREE) 0;
#line 3512 "cplus.met"
#line 3514 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3514 "cplus.met"
    switch( lexEl.Value) {
#line 3514 "cplus.met"
#line 3515 "cplus.met"
        case NAMESPACE : 
#line 3515 "cplus.met"
            tokenAhead = 0 ;
#line 3515 "cplus.met"
            CommTerm();
#line 3515 "cplus.met"
#line 3516 "cplus.met"
#line 3518 "cplus.met"
            if ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&TERM_OR_META(IDENT,"IDENT") && !(tokenAhead = 0) && ( BUILD_TERM_META(ident))) {
#line 3518 "cplus.met"
#line 3520 "cplus.met"
                {
#line 3520 "cplus.met"
                    PPTREE _ptRes0=0;
#line 3520 "cplus.met"
                    _ptRes0= MakeTree(IDENT, 1);
#line 3520 "cplus.met"
                    ReplaceTree(_ptRes0, 1, ident );
#line 3520 "cplus.met"
                    ident=_ptRes0;
#line 3520 "cplus.met"
                }
#line 3520 "cplus.met"
            }
#line 3520 "cplus.met"
#line 3521 "cplus.met"
            if (NPUSH_CALL_AFF_VERIF(attrib = ,_Tak(attribute_call), 17, cplus)){
#line 3521 "cplus.met"
#line 3521 "cplus.met"
            }
#line 3521 "cplus.met"
#line 3524 "cplus.met"
            (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3524 "cplus.met"
            switch( lexEl.Value) {
#line 3524 "cplus.met"
#line 3528 "cplus.met"
                case AOUV : 
#line 3528 "cplus.met"
                    tokenAhead = 0 ;
#line 3528 "cplus.met"
                    CommTerm();
#line 3528 "cplus.met"
#line 3527 "cplus.met"
#line 3528 "cplus.met"
                    {
#line 3528 "cplus.met"
                        PPTREE _ptRes0=0;
#line 3528 "cplus.met"
                        _ptRes0= MakeTree(NAMESPACE, 3);
#line 3528 "cplus.met"
                        ReplaceTree(_ptRes0, 1, ident );
#line 3528 "cplus.met"
                        ReplaceTree(_ptRes0, 3, attrib );
#line 3528 "cplus.met"
                        retTree=_ptRes0;
#line 3528 "cplus.met"
                    }
#line 3528 "cplus.met"
#line 3528 "cplus.met"
                    _addlist1 = list ;
#line 3528 "cplus.met"
#line 3529 "cplus.met"
                    while (! ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN(AFER,"}") && (tokenAhead = 0,CommTerm(),1))) { 
#line 3529 "cplus.met"
#line 3530 "cplus.met"
#line 3531 "cplus.met"
                        {
#line 3531 "cplus.met"
                            PPTREE _ptTree0=0;
#line 3531 "cplus.met"
                            if ( (_ptTree0=NQUICK_CALL(_Tak(ext_all)(error_free), 64, cplus))== (PPTREE) -1 ) {
#line 3531 "cplus.met"
                                MulFreeTree(6,_ptTree0,_addlist1,attrib,ident,list,retTree);
                                PROG_EXIT(name_space_exit,"name_space")
#line 3531 "cplus.met"
                            }
#line 3531 "cplus.met"
                            _addlist1 =AddList(_addlist1 , _ptTree0);
#line 3531 "cplus.met"
                        }
#line 3531 "cplus.met"
#line 3531 "cplus.met"
                        if (list){
#line 3531 "cplus.met"
#line 3531 "cplus.met"
                            _addlist1 = SonTree (_addlist1 ,2 );
#line 3531 "cplus.met"
                        } else {
#line 3531 "cplus.met"
#line 3531 "cplus.met"
                            list = _addlist1 ;
#line 3531 "cplus.met"
                        }
#line 3531 "cplus.met"
#line 3531 "cplus.met"
                    } 
#line 3531 "cplus.met"
#line 3533 "cplus.met"
                    {
#line 3533 "cplus.met"
                        PPTREE _ptTree0=0;
#line 3533 "cplus.met"
                        if ( (_ptTree0=NQUICK_CALL(_Tak(none_statement)(error_free), 103, cplus))== (PPTREE) -1 ) {
#line 3533 "cplus.met"
                            MulFreeTree(6,_ptTree0,_addlist1,attrib,ident,list,retTree);
                            PROG_EXIT(name_space_exit,"name_space")
#line 3533 "cplus.met"
                        }
#line 3533 "cplus.met"
                        list =AddList(list , _ptTree0);
#line 3533 "cplus.met"
                    }
#line 3533 "cplus.met"
#line 3534 "cplus.met"
                    {
#line 3534 "cplus.met"
                        PPTREE _ptTree0=0;
#line 3534 "cplus.met"
                        {
#line 3534 "cplus.met"
                            PPTREE _ptRes1=0;
#line 3534 "cplus.met"
                            _ptRes1= MakeTree(COMPOUND_EXT, 1);
#line 3534 "cplus.met"
                            ReplaceTree(_ptRes1, 1, list );
#line 3534 "cplus.met"
                            _ptTree0=_ptRes1;
#line 3534 "cplus.met"
                        }
#line 3534 "cplus.met"
                        ReplaceTree(retTree , 2 , _ptTree0);
#line 3534 "cplus.met"
                    }
#line 3534 "cplus.met"
#line 3534 "cplus.met"
                    break;
#line 3534 "cplus.met"
#line 3538 "cplus.met"
                case EGAL : 
#line 3538 "cplus.met"
                    tokenAhead = 0 ;
#line 3538 "cplus.met"
                    CommTerm();
#line 3538 "cplus.met"
#line 3537 "cplus.met"
#line 3538 "cplus.met"
                    if ((ident == (PPTREE) 0 )){
#line 3538 "cplus.met"
#line 3539 "cplus.met"
                        
#line 3539 "cplus.met"
                        MulFreeTree(5,_addlist1,attrib,ident,list,retTree);
                        LEX_EXIT ("",0);
#line 3539 "cplus.met"
                        goto name_space_exit;
#line 3539 "cplus.met"
#line 3539 "cplus.met"
                    }
#line 3539 "cplus.met"
#line 3540 "cplus.met"
                    {
#line 3540 "cplus.met"
                        PPTREE _ptTree0=0,_ptRes0=0;
#line 3540 "cplus.met"
                        _ptRes0= MakeTree(NAMESPACE_ALIAS, 2);
#line 3540 "cplus.met"
                        ReplaceTree(_ptRes0, 1, ident );
#line 3540 "cplus.met"
                        if ( (_ptTree0=NQUICK_CALL(_Tak(complete_class_name)(error_free), 27, cplus))== (PPTREE) -1 ) {
#line 3540 "cplus.met"
                            MulFreeTree(7,_ptRes0,_ptTree0,_addlist1,attrib,ident,list,retTree);
                            PROG_EXIT(name_space_exit,"name_space")
#line 3540 "cplus.met"
                        }
#line 3540 "cplus.met"
                        ReplaceTree(_ptRes0, 2, _ptTree0);
#line 3540 "cplus.met"
                        retTree=_ptRes0;
#line 3540 "cplus.met"
                    }
#line 3540 "cplus.met"
#line 3540 "cplus.met"
                    break;
#line 3540 "cplus.met"
                default :
#line 3540 "cplus.met"
                    MulFreeTree(5,_addlist1,attrib,ident,list,retTree);
                    CASE_EXIT(name_space_exit,"either { or =")
#line 3540 "cplus.met"
                    break;
#line 3540 "cplus.met"
            }
#line 3540 "cplus.met"
#line 3540 "cplus.met"
            break;
#line 3540 "cplus.met"
#line 3544 "cplus.met"
        case USING : 
#line 3544 "cplus.met"
            tokenAhead = 0 ;
#line 3544 "cplus.met"
            CommTerm();
#line 3544 "cplus.met"
#line 3545 "cplus.met"
#line 3546 "cplus.met"
            if ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN(NAMESPACE,"namespace") && (tokenAhead = 0,CommTerm(),1)){
#line 3546 "cplus.met"
#line 3547 "cplus.met"
#line 3548 "cplus.met"
                if (NPUSH_CALL_AFF_VERIF(attrib = ,_Tak(attribute_call), 17, cplus)){
#line 3548 "cplus.met"
#line 3548 "cplus.met"
                }
#line 3548 "cplus.met"
#line 3550 "cplus.met"
                {
#line 3550 "cplus.met"
                    PPTREE _ptTree0=0,_ptRes0=0;
#line 3550 "cplus.met"
                    _ptRes0= MakeTree(USING_NAMESPACE, 2);
#line 3550 "cplus.met"
                    if ( (_ptTree0=NQUICK_CALL(_Tak(complete_class_name)(error_free), 27, cplus))== (PPTREE) -1 ) {
#line 3550 "cplus.met"
                        MulFreeTree(7,_ptRes0,_ptTree0,_addlist1,attrib,ident,list,retTree);
                        PROG_EXIT(name_space_exit,"name_space")
#line 3550 "cplus.met"
                    }
#line 3550 "cplus.met"
                    ReplaceTree(_ptRes0, 1, _ptTree0);
#line 3550 "cplus.met"
                    ReplaceTree(_ptRes0, 2, attrib );
#line 3550 "cplus.met"
                    retTree=_ptRes0;
#line 3550 "cplus.met"
                }
#line 3550 "cplus.met"
#line 3550 "cplus.met"
#line 3550 "cplus.met"
            } else {
#line 3550 "cplus.met"
#line 3553 "cplus.met"
                {
#line 3553 "cplus.met"
                    PPTREE _ptTree0=0,_ptRes0=0;
#line 3553 "cplus.met"
                    _ptRes0= MakeTree(USING, 1);
#line 3553 "cplus.met"
                    if ( (_ptTree0=NQUICK_CALL(_Tak(complete_class_name)(error_free), 27, cplus))== (PPTREE) -1 ) {
#line 3553 "cplus.met"
                        MulFreeTree(7,_ptRes0,_ptTree0,_addlist1,attrib,ident,list,retTree);
                        PROG_EXIT(name_space_exit,"name_space")
#line 3553 "cplus.met"
                    }
#line 3553 "cplus.met"
                    ReplaceTree(_ptRes0, 1, _ptTree0);
#line 3553 "cplus.met"
                    retTree=_ptRes0;
#line 3553 "cplus.met"
                }
#line 3553 "cplus.met"
            }
#line 3553 "cplus.met"
#line 3554 "cplus.met"
            (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3554 "cplus.met"
            if (  !SEE_TOKEN( PVIR,";") || !(CommTerm(),1)) {
#line 3554 "cplus.met"
                MulFreeTree(5,_addlist1,attrib,ident,list,retTree);
                TOKEN_EXIT(name_space_exit,";")
#line 3554 "cplus.met"
            } else {
#line 3554 "cplus.met"
                tokenAhead = 0 ;
#line 3554 "cplus.met"
            }
#line 3554 "cplus.met"
#line 3554 "cplus.met"
            break;
#line 3554 "cplus.met"
        default :
#line 3554 "cplus.met"
            MulFreeTree(5,_addlist1,attrib,ident,list,retTree);
            CASE_EXIT(name_space_exit,"either namespace or using")
#line 3554 "cplus.met"
            break;
#line 3554 "cplus.met"
    }
#line 3554 "cplus.met"
#line 3557 "cplus.met"
    {
#line 3557 "cplus.met"
        _retValue = retTree ;
#line 3557 "cplus.met"
        goto name_space_ret;
#line 3557 "cplus.met"
        
#line 3557 "cplus.met"
    }
#line 3557 "cplus.met"
#line 3557 "cplus.met"
#line 3557 "cplus.met"

#line 3558 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 3558 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 3558 "cplus.met"
return((PPTREE) 0);
#line 3558 "cplus.met"

#line 3558 "cplus.met"
name_space_exit :
#line 3558 "cplus.met"

#line 3558 "cplus.met"
    _Debug = TRACE_RULE("name_space",TRACE_EXIT,(PPTREE)0);
#line 3558 "cplus.met"
    _funcLevel--;
#line 3558 "cplus.met"
    return((PPTREE) -1) ;
#line 3558 "cplus.met"

#line 3558 "cplus.met"
name_space_ret :
#line 3558 "cplus.met"
    
#line 3558 "cplus.met"
    _Debug = TRACE_RULE("name_space",TRACE_RETURN,_retValue);
#line 3558 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 3558 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 3558 "cplus.met"
    return _retValue ;
#line 3558 "cplus.met"
}
#line 3558 "cplus.met"

#line 3558 "cplus.met"
#line 2783 "cplus.met"
PPTREE cplus::new_1 ( int error_free)
#line 2783 "cplus.met"
{
#line 2783 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 2783 "cplus.met"
    int _value,_nbPre = 0 ;
#line 2783 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 2783 "cplus.met"
    int _Debug = TRACE_RULE("new_1",TRACE_ENTER,(PPTREE)0);
#line 2783 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 2783 "cplus.met"
#line 2783 "cplus.met"
    PPTREE retTree = (PPTREE) 0;
#line 2783 "cplus.met"
#line 2785 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 2785 "cplus.met"
    if (  !SEE_TOKEN( POUV,"(") || !(CommTerm(),1)) {
#line 2785 "cplus.met"
        MulFreeTree(1,retTree);
        TOKEN_EXIT(new_1_exit,"(")
#line 2785 "cplus.met"
    } else {
#line 2785 "cplus.met"
        tokenAhead = 0 ;
#line 2785 "cplus.met"
    }
#line 2785 "cplus.met"
#line 2786 "cplus.met"
    if ( (retTree=NQUICK_CALL(_Tak(expression)(error_free), 62, cplus))== (PPTREE) -1 ) {
#line 2786 "cplus.met"
        MulFreeTree(1,retTree);
        PROG_EXIT(new_1_exit,"new_1")
#line 2786 "cplus.met"
    }
#line 2786 "cplus.met"
#line 2787 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 2787 "cplus.met"
    if (  !SEE_TOKEN( PFER,")") || !(CommTerm(),1)) {
#line 2787 "cplus.met"
        MulFreeTree(1,retTree);
        TOKEN_EXIT(new_1_exit,")")
#line 2787 "cplus.met"
    } else {
#line 2787 "cplus.met"
        tokenAhead = 0 ;
#line 2787 "cplus.met"
    }
#line 2787 "cplus.met"
#line 2788 "cplus.met"
    if ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN(POUV,"(") && (tokenAhead = 0,CommTerm(),1)){
#line 2788 "cplus.met"
#line 2789 "cplus.met"
#line 2790 "cplus.met"
        {
#line 2790 "cplus.met"
            PPTREE _ptTree0=0,_ptRes0=0;
#line 2790 "cplus.met"
            _ptRes0= MakeTree(NEW, 4);
#line 2790 "cplus.met"
            ReplaceTree(_ptRes0, 1, retTree );
#line 2790 "cplus.met"
            if ( (_ptTree0=NQUICK_CALL(_Tak(type_name)(error_free), 144, cplus))== (PPTREE) -1 ) {
#line 2790 "cplus.met"
                MulFreeTree(3,_ptRes0,_ptTree0,retTree);
                PROG_EXIT(new_1_exit,"new_1")
#line 2790 "cplus.met"
            }
#line 2790 "cplus.met"
            ReplaceTree(_ptRes0, 2, _ptTree0);
#line 2790 "cplus.met"
            retTree=_ptRes0;
#line 2790 "cplus.met"
        }
#line 2790 "cplus.met"
#line 2791 "cplus.met"
        (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 2791 "cplus.met"
        if (  !SEE_TOKEN( PFER,")") || !(CommTerm(),1)) {
#line 2791 "cplus.met"
            MulFreeTree(1,retTree);
            TOKEN_EXIT(new_1_exit,")")
#line 2791 "cplus.met"
        } else {
#line 2791 "cplus.met"
            tokenAhead = 0 ;
#line 2791 "cplus.met"
        }
#line 2791 "cplus.met"
#line 2792 "cplus.met"
        {
#line 2792 "cplus.met"
            _retValue = retTree ;
#line 2792 "cplus.met"
            goto new_1_ret;
#line 2792 "cplus.met"
            
#line 2792 "cplus.met"
        }
#line 2792 "cplus.met"
#line 2792 "cplus.met"
#line 2792 "cplus.met"
    } else {
#line 2792 "cplus.met"
#line 2795 "cplus.met"
        {
#line 2795 "cplus.met"
            PPTREE _ptTree0=0,_ptRes0=0;
#line 2795 "cplus.met"
            _ptRes0= MakeTree(NEW, 4);
#line 2795 "cplus.met"
            ReplaceTree(_ptRes0, 1, retTree );
#line 2795 "cplus.met"
            if ( (_ptTree0=NQUICK_CALL(_Tak(new_type_name)(error_free), 102, cplus))== (PPTREE) -1 ) {
#line 2795 "cplus.met"
                MulFreeTree(3,_ptRes0,_ptTree0,retTree);
                PROG_EXIT(new_1_exit,"new_1")
#line 2795 "cplus.met"
            }
#line 2795 "cplus.met"
            ReplaceTree(_ptRes0, 2, _ptTree0);
#line 2795 "cplus.met"
            retTree=_ptRes0;
#line 2795 "cplus.met"
        }
#line 2795 "cplus.met"
    }
#line 2795 "cplus.met"
#line 2796 "cplus.met"
    {
#line 2796 "cplus.met"
        _retValue = retTree ;
#line 2796 "cplus.met"
        goto new_1_ret;
#line 2796 "cplus.met"
        
#line 2796 "cplus.met"
    }
#line 2796 "cplus.met"
#line 2796 "cplus.met"
#line 2796 "cplus.met"

#line 2797 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2797 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 2797 "cplus.met"
return((PPTREE) 0);
#line 2797 "cplus.met"

#line 2797 "cplus.met"
new_1_exit :
#line 2797 "cplus.met"

#line 2797 "cplus.met"
    _Debug = TRACE_RULE("new_1",TRACE_EXIT,(PPTREE)0);
#line 2797 "cplus.met"
    _funcLevel--;
#line 2797 "cplus.met"
    return((PPTREE) -1) ;
#line 2797 "cplus.met"

#line 2797 "cplus.met"
new_1_ret :
#line 2797 "cplus.met"
    
#line 2797 "cplus.met"
    _Debug = TRACE_RULE("new_1",TRACE_RETURN,_retValue);
#line 2797 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2797 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 2797 "cplus.met"
    return _retValue ;
#line 2797 "cplus.met"
}
#line 2797 "cplus.met"

#line 2797 "cplus.met"
#line 2799 "cplus.met"
PPTREE cplus::new_2 ( int error_free)
#line 2799 "cplus.met"
{
#line 2799 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 2799 "cplus.met"
    int _value,_nbPre = 0 ;
#line 2799 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 2799 "cplus.met"
    int _Debug = TRACE_RULE("new_2",TRACE_ENTER,(PPTREE)0);
#line 2799 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 2799 "cplus.met"
#line 2799 "cplus.met"
    PPTREE retTree = (PPTREE) 0;
#line 2799 "cplus.met"
#line 2801 "cplus.met"
    if ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN(POUV,"(") && (tokenAhead = 0,CommTerm(),1)){
#line 2801 "cplus.met"
#line 2802 "cplus.met"
#line 2803 "cplus.met"
        {
#line 2803 "cplus.met"
            PPTREE _ptTree0=0,_ptRes0=0;
#line 2803 "cplus.met"
            _ptRes0= MakeTree(NEW, 4);
#line 2803 "cplus.met"
            if ( (_ptTree0=NQUICK_CALL(_Tak(type_name)(error_free), 144, cplus))== (PPTREE) -1 ) {
#line 2803 "cplus.met"
                MulFreeTree(3,_ptRes0,_ptTree0,retTree);
                PROG_EXIT(new_2_exit,"new_2")
#line 2803 "cplus.met"
            }
#line 2803 "cplus.met"
            ReplaceTree(_ptRes0, 2, _ptTree0);
#line 2803 "cplus.met"
            retTree=_ptRes0;
#line 2803 "cplus.met"
        }
#line 2803 "cplus.met"
#line 2804 "cplus.met"
        (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 2804 "cplus.met"
        if (  !SEE_TOKEN( PFER,")") || !(CommTerm(),1)) {
#line 2804 "cplus.met"
            MulFreeTree(1,retTree);
            TOKEN_EXIT(new_2_exit,")")
#line 2804 "cplus.met"
        } else {
#line 2804 "cplus.met"
            tokenAhead = 0 ;
#line 2804 "cplus.met"
        }
#line 2804 "cplus.met"
#line 2805 "cplus.met"
        {
#line 2805 "cplus.met"
            _retValue = retTree ;
#line 2805 "cplus.met"
            goto new_2_ret;
#line 2805 "cplus.met"
            
#line 2805 "cplus.met"
        }
#line 2805 "cplus.met"
#line 2805 "cplus.met"
#line 2805 "cplus.met"
    } else {
#line 2805 "cplus.met"
#line 2808 "cplus.met"
        {
#line 2808 "cplus.met"
            PPTREE _ptTree0=0,_ptRes0=0;
#line 2808 "cplus.met"
            _ptRes0= MakeTree(NEW, 4);
#line 2808 "cplus.met"
            if ( (_ptTree0=NQUICK_CALL(_Tak(new_type_name)(error_free), 102, cplus))== (PPTREE) -1 ) {
#line 2808 "cplus.met"
                MulFreeTree(3,_ptRes0,_ptTree0,retTree);
                PROG_EXIT(new_2_exit,"new_2")
#line 2808 "cplus.met"
            }
#line 2808 "cplus.met"
            ReplaceTree(_ptRes0, 2, _ptTree0);
#line 2808 "cplus.met"
            retTree=_ptRes0;
#line 2808 "cplus.met"
        }
#line 2808 "cplus.met"
    }
#line 2808 "cplus.met"
#line 2809 "cplus.met"
    {
#line 2809 "cplus.met"
        _retValue = retTree ;
#line 2809 "cplus.met"
        goto new_2_ret;
#line 2809 "cplus.met"
        
#line 2809 "cplus.met"
    }
#line 2809 "cplus.met"
#line 2809 "cplus.met"
#line 2809 "cplus.met"

#line 2810 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2810 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 2810 "cplus.met"
return((PPTREE) 0);
#line 2810 "cplus.met"

#line 2810 "cplus.met"
new_2_exit :
#line 2810 "cplus.met"

#line 2810 "cplus.met"
    _Debug = TRACE_RULE("new_2",TRACE_EXIT,(PPTREE)0);
#line 2810 "cplus.met"
    _funcLevel--;
#line 2810 "cplus.met"
    return((PPTREE) -1) ;
#line 2810 "cplus.met"

#line 2810 "cplus.met"
new_2_ret :
#line 2810 "cplus.met"
    
#line 2810 "cplus.met"
    _Debug = TRACE_RULE("new_2",TRACE_RETURN,_retValue);
#line 2810 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2810 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 2810 "cplus.met"
    return _retValue ;
#line 2810 "cplus.met"
}
#line 2810 "cplus.met"

#line 2810 "cplus.met"
#line 2358 "cplus.met"
PPTREE cplus::new_declarator ( int error_free)
#line 2358 "cplus.met"
{
#line 2358 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 2358 "cplus.met"
    int _value,_nbPre = 0 ;
#line 2358 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 2358 "cplus.met"
    int _Debug = TRACE_RULE("new_declarator",TRACE_ENTER,(PPTREE)0);
#line 2358 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 2358 "cplus.met"
#line 2358 "cplus.met"
    PPTREE valTree = (PPTREE) 0,retTree = (PPTREE) 0,expList = (PPTREE) 0;
#line 2358 "cplus.met"
#line 2360 "cplus.met"
    if (NPUSH_CALL_AFF_VERIF(valTree = ,_Tak(range_modifier), 121, cplus)){
#line 2360 "cplus.met"
#line 2361 "cplus.met"
        {
#line 2361 "cplus.met"
            PPTREE _ptTree0=0;
#line 2361 "cplus.met"
            {
#line 2361 "cplus.met"
                PPTREE _ptTree1=0;
#line 2361 "cplus.met"
                if ( (_ptTree1=NQUICK_CALL(_Tak(new_declarator)(error_free), 101, cplus))== (PPTREE) -1 ) {
#line 2361 "cplus.met"
                    MulFreeTree(5,_ptTree1,_ptTree0,expList,retTree,valTree);
                    PROG_EXIT(new_declarator_exit,"new_declarator")
#line 2361 "cplus.met"
                }
#line 2361 "cplus.met"
                _ptTree0=ReplaceTree(valTree , 2 , _ptTree1);
#line 2361 "cplus.met"
            }
#line 2361 "cplus.met"
            _retValue =_ptTree0;
#line 2361 "cplus.met"
            goto new_declarator_ret;
#line 2361 "cplus.met"
        }
#line 2361 "cplus.met"
    }
#line 2361 "cplus.met"
#line 2362 "cplus.met"
    retTree = (PPTREE) 0;
#line 2362 "cplus.met"
#line 2363 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 2363 "cplus.met"
    switch( lexEl.Value) {
#line 2363 "cplus.met"
#line 2364 "cplus.met"
        case ETOI : 
#line 2364 "cplus.met"
            tokenAhead = 0 ;
#line 2364 "cplus.met"
            CommTerm();
#line 2364 "cplus.met"
#line 2364 "cplus.met"
            {
#line 2364 "cplus.met"
                PPTREE _ptTree0=0;
#line 2364 "cplus.met"
                {
#line 2364 "cplus.met"
                    PPTREE _ptTree1=0,_ptRes1=0;
#line 2364 "cplus.met"
                    _ptRes1= MakeTree(TYP_ADDR, 1);
#line 2364 "cplus.met"
                    if ( (_ptTree1=NQUICK_CALL(_Tak(new_declarator)(error_free), 101, cplus))== (PPTREE) -1 ) {
#line 2364 "cplus.met"
                        MulFreeTree(6,_ptRes1,_ptTree1,_ptTree0,expList,retTree,valTree);
                        PROG_EXIT(new_declarator_exit,"new_declarator")
#line 2364 "cplus.met"
                    }
#line 2364 "cplus.met"
                    ReplaceTree(_ptRes1, 1, _ptTree1);
#line 2364 "cplus.met"
                    _ptTree0=_ptRes1;
#line 2364 "cplus.met"
                }
#line 2364 "cplus.met"
                _retValue =_ptTree0;
#line 2364 "cplus.met"
                goto new_declarator_ret;
#line 2364 "cplus.met"
            }
#line 2364 "cplus.met"
            break;
#line 2364 "cplus.met"
#line 2365 "cplus.met"
        case META : 
#line 2365 "cplus.met"
        case IDENT : 
#line 2365 "cplus.met"
#line 2366 "cplus.met"
#line 2367 "cplus.met"
            if ( (valTree=NQUICK_CALL(_Tak(member_declarator)(error_free), 95, cplus))== (PPTREE) -1 ) {
#line 2367 "cplus.met"
                MulFreeTree(3,expList,retTree,valTree);
                PROG_EXIT(new_declarator_exit,"new_declarator")
#line 2367 "cplus.met"
            }
#line 2367 "cplus.met"
#line 2368 "cplus.met"
            {
#line 2368 "cplus.met"
                PPTREE _ptTree0=0;
#line 2368 "cplus.met"
                {
#line 2368 "cplus.met"
                    PPTREE _ptTree1=0;
#line 2368 "cplus.met"
                    if ( (_ptTree1=NQUICK_CALL(_Tak(new_declarator)(error_free), 101, cplus))== (PPTREE) -1 ) {
#line 2368 "cplus.met"
                        MulFreeTree(5,_ptTree1,_ptTree0,expList,retTree,valTree);
                        PROG_EXIT(new_declarator_exit,"new_declarator")
#line 2368 "cplus.met"
                    }
#line 2368 "cplus.met"
                    _ptTree0=ReplaceTree(valTree , 2 , _ptTree1);
#line 2368 "cplus.met"
                }
#line 2368 "cplus.met"
                _retValue =_ptTree0;
#line 2368 "cplus.met"
                goto new_declarator_ret;
#line 2368 "cplus.met"
            }
#line 2368 "cplus.met"
#line 2368 "cplus.met"
            break;
#line 2368 "cplus.met"
#line 2377 "cplus.met"
        default : 
#line 2377 "cplus.met"
#line 2373 "cplus.met"
#line 2375 "cplus.met"
            while ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN(COUV,"[") && (tokenAhead = 0,CommTerm(),1)) { 
#line 2375 "cplus.met"
#line 2376 "cplus.met"
#line 2377 "cplus.met"
                if (NPUSH_CALL_AFF_VERIF(expList = ,_Tak(expression), 62, cplus)){
#line 2377 "cplus.met"
#line 2378 "cplus.met"
                    {
#line 2378 "cplus.met"
                        PPTREE _ptRes0=0;
#line 2378 "cplus.met"
                        _ptRes0= MakeTree(TYP_ARRAY, 2);
#line 2378 "cplus.met"
                        ReplaceTree(_ptRes0, 1, retTree );
#line 2378 "cplus.met"
                        ReplaceTree(_ptRes0, 2, expList );
#line 2378 "cplus.met"
                        retTree=_ptRes0;
#line 2378 "cplus.met"
                    }
#line 2378 "cplus.met"
                } else {
#line 2378 "cplus.met"
#line 2380 "cplus.met"
                    {
#line 2380 "cplus.met"
                        PPTREE _ptRes0=0;
#line 2380 "cplus.met"
                        _ptRes0= MakeTree(TYP_ARRAY, 2);
#line 2380 "cplus.met"
                        ReplaceTree(_ptRes0, 1, retTree );
#line 2380 "cplus.met"
                        retTree=_ptRes0;
#line 2380 "cplus.met"
                    }
#line 2380 "cplus.met"
                }
#line 2380 "cplus.met"
#line 2381 "cplus.met"
                (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 2381 "cplus.met"
                if (  !SEE_TOKEN( CFER,"]") || !(CommTerm(),1)) {
#line 2381 "cplus.met"
                    MulFreeTree(3,expList,retTree,valTree);
                    TOKEN_EXIT(new_declarator_exit,"]")
#line 2381 "cplus.met"
                } else {
#line 2381 "cplus.met"
                    tokenAhead = 0 ;
#line 2381 "cplus.met"
                }
#line 2381 "cplus.met"
#line 2381 "cplus.met"
            } 
#line 2381 "cplus.met"
#line 2383 "cplus.met"
            {
#line 2383 "cplus.met"
                _retValue = retTree ;
#line 2383 "cplus.met"
                goto new_declarator_ret;
#line 2383 "cplus.met"
                
#line 2383 "cplus.met"
            }
#line 2383 "cplus.met"
#line 2383 "cplus.met"
            break;
#line 2383 "cplus.met"
    }
#line 2383 "cplus.met"
#line 2383 "cplus.met"
#line 2385 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2385 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 2385 "cplus.met"
return((PPTREE) 0);
#line 2385 "cplus.met"

#line 2385 "cplus.met"
new_declarator_exit :
#line 2385 "cplus.met"

#line 2385 "cplus.met"
    _Debug = TRACE_RULE("new_declarator",TRACE_EXIT,(PPTREE)0);
#line 2385 "cplus.met"
    _funcLevel--;
#line 2385 "cplus.met"
    return((PPTREE) -1) ;
#line 2385 "cplus.met"

#line 2385 "cplus.met"
new_declarator_ret :
#line 2385 "cplus.met"
    
#line 2385 "cplus.met"
    _Debug = TRACE_RULE("new_declarator",TRACE_RETURN,_retValue);
#line 2385 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2385 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 2385 "cplus.met"
    return _retValue ;
#line 2385 "cplus.met"
}
#line 2385 "cplus.met"

#line 2385 "cplus.met"
#line 2508 "cplus.met"
PPTREE cplus::new_type_name ( int error_free)
#line 2508 "cplus.met"
{
#line 2508 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 2508 "cplus.met"
    int _value,_nbPre = 0 ;
#line 2508 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 2508 "cplus.met"
    int _Debug = TRACE_RULE("new_type_name",TRACE_ENTER,(PPTREE)0);
#line 2508 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 2508 "cplus.met"
#line 2508 "cplus.met"
    PPTREE retTree = (PPTREE) 0,valTree = (PPTREE) 0;
#line 2508 "cplus.met"
#line 2510 "cplus.met"
    if ( (retTree=NQUICK_CALL(_Tak(type_specifier)(error_free), 145, cplus))== (PPTREE) -1 ) {
#line 2510 "cplus.met"
        MulFreeTree(2,retTree,valTree);
        PROG_EXIT(new_type_name_exit,"new_type_name")
#line 2510 "cplus.met"
    }
#line 2510 "cplus.met"
#line 2511 "cplus.met"
    if (NPUSH_CALL_AFF_VERIF(valTree = ,_Tak(new_declarator), 101, cplus)){
#line 2511 "cplus.met"
#line 2512 "cplus.met"
        {
#line 2512 "cplus.met"
            PPTREE _ptRes0=0;
#line 2512 "cplus.met"
            _ptRes0= MakeTree(NEW_DECLARATOR, 2);
#line 2512 "cplus.met"
            ReplaceTree(_ptRes0, 1, retTree );
#line 2512 "cplus.met"
            ReplaceTree(_ptRes0, 2, valTree );
#line 2512 "cplus.met"
            valTree=_ptRes0;
#line 2512 "cplus.met"
        }
#line 2512 "cplus.met"
    } else {
#line 2512 "cplus.met"
#line 2514 "cplus.met"
        valTree = retTree ;
#line 2514 "cplus.met"
    }
#line 2514 "cplus.met"
#line 2515 "cplus.met"
    {
#line 2515 "cplus.met"
        _retValue = valTree ;
#line 2515 "cplus.met"
        goto new_type_name_ret;
#line 2515 "cplus.met"
        
#line 2515 "cplus.met"
    }
#line 2515 "cplus.met"
#line 2515 "cplus.met"
#line 2515 "cplus.met"

#line 2516 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2516 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 2516 "cplus.met"
return((PPTREE) 0);
#line 2516 "cplus.met"

#line 2516 "cplus.met"
new_type_name_exit :
#line 2516 "cplus.met"

#line 2516 "cplus.met"
    _Debug = TRACE_RULE("new_type_name",TRACE_EXIT,(PPTREE)0);
#line 2516 "cplus.met"
    _funcLevel--;
#line 2516 "cplus.met"
    return((PPTREE) -1) ;
#line 2516 "cplus.met"

#line 2516 "cplus.met"
new_type_name_ret :
#line 2516 "cplus.met"
    
#line 2516 "cplus.met"
    _Debug = TRACE_RULE("new_type_name",TRACE_RETURN,_retValue);
#line 2516 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2516 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 2516 "cplus.met"
    return _retValue ;
#line 2516 "cplus.met"
}
#line 2516 "cplus.met"

#line 2516 "cplus.met"
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
#line 2950 "cplus.met"
PPTREE cplus::operator_function_name ( int error_free)
#line 2950 "cplus.met"
{
#line 2950 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 2950 "cplus.met"
    int _value,_nbPre = 0 ;
#line 2950 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 2950 "cplus.met"
    int _Debug = TRACE_RULE("operator_function_name",TRACE_ENTER,(PPTREE)0);
#line 2950 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 2950 "cplus.met"
#line 2950 "cplus.met"
    PPTREE retTree = (PPTREE) 0,valTree = (PPTREE) 0,list = (PPTREE) 0;
#line 2950 "cplus.met"
#line 2952 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 2952 "cplus.met"
    if (  !SEE_TOKEN( OPERATOR,"operator") || !(CommTerm(),1)) {
#line 2952 "cplus.met"
        MulFreeTree(3,list,retTree,valTree);
        TOKEN_EXIT(operator_function_name_exit,"operator")
#line 2952 "cplus.met"
    } else {
#line 2952 "cplus.met"
        tokenAhead = 0 ;
#line 2952 "cplus.met"
    }
#line 2952 "cplus.met"
#line 2953 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 2953 "cplus.met"
    switch( lexEl.Value) {
#line 2953 "cplus.met"
#line 2954 "cplus.met"
        case NEW : 
#line 2954 "cplus.met"
            tokenAhead = 0 ;
#line 2954 "cplus.met"
            CommTerm();
#line 2954 "cplus.met"
#line 2954 "cplus.met"
            {
#line 2954 "cplus.met"
                PPTREE _ptTree0=0;
#line 2954 "cplus.met"
                {
#line 2954 "cplus.met"
                    PPTREE _ptRes1=0;
#line 2954 "cplus.met"
                    _ptRes1= MakeTree(OPERATOR, 1);
#line 2954 "cplus.met"
                    ReplaceTree(_ptRes1, 1, MakeString ("new"));
#line 2954 "cplus.met"
                    _ptTree0=_ptRes1;
#line 2954 "cplus.met"
                }
#line 2954 "cplus.met"
                _retValue =_ptTree0;
#line 2954 "cplus.met"
                goto operator_function_name_ret;
#line 2954 "cplus.met"
            }
#line 2954 "cplus.met"
            break;
#line 2954 "cplus.met"
#line 2955 "cplus.met"
        case DELETE : 
#line 2955 "cplus.met"
            tokenAhead = 0 ;
#line 2955 "cplus.met"
            CommTerm();
#line 2955 "cplus.met"
#line 2955 "cplus.met"
            {
#line 2955 "cplus.met"
                PPTREE _ptTree0=0;
#line 2955 "cplus.met"
                {
#line 2955 "cplus.met"
                    PPTREE _ptRes1=0;
#line 2955 "cplus.met"
                    _ptRes1= MakeTree(OPERATOR, 1);
#line 2955 "cplus.met"
                    ReplaceTree(_ptRes1, 1, MakeString ("delete"));
#line 2955 "cplus.met"
                    _ptTree0=_ptRes1;
#line 2955 "cplus.met"
                }
#line 2955 "cplus.met"
                _retValue =_ptTree0;
#line 2955 "cplus.met"
                goto operator_function_name_ret;
#line 2955 "cplus.met"
            }
#line 2955 "cplus.met"
            break;
#line 2955 "cplus.met"
#line 2956 "cplus.met"
        case PLUS : 
#line 2956 "cplus.met"
            tokenAhead = 0 ;
#line 2956 "cplus.met"
            CommTerm();
#line 2956 "cplus.met"
#line 2956 "cplus.met"
            {
#line 2956 "cplus.met"
                PPTREE _ptTree0=0;
#line 2956 "cplus.met"
                {
#line 2956 "cplus.met"
                    PPTREE _ptRes1=0;
#line 2956 "cplus.met"
                    _ptRes1= MakeTree(OPERATOR, 1);
#line 2956 "cplus.met"
                    ReplaceTree(_ptRes1, 1, MakeString ("+"));
#line 2956 "cplus.met"
                    _ptTree0=_ptRes1;
#line 2956 "cplus.met"
                }
#line 2956 "cplus.met"
                _retValue =_ptTree0;
#line 2956 "cplus.met"
                goto operator_function_name_ret;
#line 2956 "cplus.met"
            }
#line 2956 "cplus.met"
            break;
#line 2956 "cplus.met"
#line 2957 "cplus.met"
        case TIRE : 
#line 2957 "cplus.met"
            tokenAhead = 0 ;
#line 2957 "cplus.met"
            CommTerm();
#line 2957 "cplus.met"
#line 2957 "cplus.met"
            {
#line 2957 "cplus.met"
                PPTREE _ptTree0=0;
#line 2957 "cplus.met"
                {
#line 2957 "cplus.met"
                    PPTREE _ptRes1=0;
#line 2957 "cplus.met"
                    _ptRes1= MakeTree(OPERATOR, 1);
#line 2957 "cplus.met"
                    ReplaceTree(_ptRes1, 1, MakeString ("-"));
#line 2957 "cplus.met"
                    _ptTree0=_ptRes1;
#line 2957 "cplus.met"
                }
#line 2957 "cplus.met"
                _retValue =_ptTree0;
#line 2957 "cplus.met"
                goto operator_function_name_ret;
#line 2957 "cplus.met"
            }
#line 2957 "cplus.met"
            break;
#line 2957 "cplus.met"
#line 2958 "cplus.met"
        case ETOI : 
#line 2958 "cplus.met"
            tokenAhead = 0 ;
#line 2958 "cplus.met"
            CommTerm();
#line 2958 "cplus.met"
#line 2958 "cplus.met"
            {
#line 2958 "cplus.met"
                PPTREE _ptTree0=0;
#line 2958 "cplus.met"
                {
#line 2958 "cplus.met"
                    PPTREE _ptRes1=0;
#line 2958 "cplus.met"
                    _ptRes1= MakeTree(OPERATOR, 1);
#line 2958 "cplus.met"
                    ReplaceTree(_ptRes1, 1, MakeString ("*"));
#line 2958 "cplus.met"
                    _ptTree0=_ptRes1;
#line 2958 "cplus.met"
                }
#line 2958 "cplus.met"
                _retValue =_ptTree0;
#line 2958 "cplus.met"
                goto operator_function_name_ret;
#line 2958 "cplus.met"
            }
#line 2958 "cplus.met"
            break;
#line 2958 "cplus.met"
#line 2959 "cplus.met"
        case META : 
#line 2959 "cplus.met"
        case SLAS : 
#line 2959 "cplus.met"
            tokenAhead = 0 ;
#line 2959 "cplus.met"
            CommTerm();
#line 2959 "cplus.met"
#line 2959 "cplus.met"
            {
#line 2959 "cplus.met"
                PPTREE _ptTree0=0;
#line 2959 "cplus.met"
                {
#line 2959 "cplus.met"
                    PPTREE _ptRes1=0;
#line 2959 "cplus.met"
                    _ptRes1= MakeTree(OPERATOR, 1);
#line 2959 "cplus.met"
                    ReplaceTree(_ptRes1, 1, MakeString ("/"));
#line 2959 "cplus.met"
                    _ptTree0=_ptRes1;
#line 2959 "cplus.met"
                }
#line 2959 "cplus.met"
                _retValue =_ptTree0;
#line 2959 "cplus.met"
                goto operator_function_name_ret;
#line 2959 "cplus.met"
            }
#line 2959 "cplus.met"
            break;
#line 2959 "cplus.met"
#line 2960 "cplus.met"
        case POURC : 
#line 2960 "cplus.met"
            tokenAhead = 0 ;
#line 2960 "cplus.met"
            CommTerm();
#line 2960 "cplus.met"
#line 2960 "cplus.met"
            {
#line 2960 "cplus.met"
                PPTREE _ptTree0=0;
#line 2960 "cplus.met"
                {
#line 2960 "cplus.met"
                    PPTREE _ptRes1=0;
#line 2960 "cplus.met"
                    _ptRes1= MakeTree(OPERATOR, 1);
#line 2960 "cplus.met"
                    ReplaceTree(_ptRes1, 1, MakeString ("%"));
#line 2960 "cplus.met"
                    _ptTree0=_ptRes1;
#line 2960 "cplus.met"
                }
#line 2960 "cplus.met"
                _retValue =_ptTree0;
#line 2960 "cplus.met"
                goto operator_function_name_ret;
#line 2960 "cplus.met"
            }
#line 2960 "cplus.met"
            break;
#line 2960 "cplus.met"
#line 2961 "cplus.met"
        case CHAP : 
#line 2961 "cplus.met"
            tokenAhead = 0 ;
#line 2961 "cplus.met"
            CommTerm();
#line 2961 "cplus.met"
#line 2961 "cplus.met"
            {
#line 2961 "cplus.met"
                PPTREE _ptTree0=0;
#line 2961 "cplus.met"
                {
#line 2961 "cplus.met"
                    PPTREE _ptRes1=0;
#line 2961 "cplus.met"
                    _ptRes1= MakeTree(OPERATOR, 1);
#line 2961 "cplus.met"
                    ReplaceTree(_ptRes1, 1, MakeString ("^"));
#line 2961 "cplus.met"
                    _ptTree0=_ptRes1;
#line 2961 "cplus.met"
                }
#line 2961 "cplus.met"
                _retValue =_ptTree0;
#line 2961 "cplus.met"
                goto operator_function_name_ret;
#line 2961 "cplus.met"
            }
#line 2961 "cplus.met"
            break;
#line 2961 "cplus.met"
#line 2962 "cplus.met"
        case ETCO : 
#line 2962 "cplus.met"
            tokenAhead = 0 ;
#line 2962 "cplus.met"
            CommTerm();
#line 2962 "cplus.met"
#line 2962 "cplus.met"
            {
#line 2962 "cplus.met"
                PPTREE _ptTree0=0;
#line 2962 "cplus.met"
                {
#line 2962 "cplus.met"
                    PPTREE _ptRes1=0;
#line 2962 "cplus.met"
                    _ptRes1= MakeTree(OPERATOR, 1);
#line 2962 "cplus.met"
                    ReplaceTree(_ptRes1, 1, MakeString ("&"));
#line 2962 "cplus.met"
                    _ptTree0=_ptRes1;
#line 2962 "cplus.met"
                }
#line 2962 "cplus.met"
                _retValue =_ptTree0;
#line 2962 "cplus.met"
                goto operator_function_name_ret;
#line 2962 "cplus.met"
            }
#line 2962 "cplus.met"
            break;
#line 2962 "cplus.met"
#line 2963 "cplus.met"
        case VBAR : 
#line 2963 "cplus.met"
            tokenAhead = 0 ;
#line 2963 "cplus.met"
            CommTerm();
#line 2963 "cplus.met"
#line 2963 "cplus.met"
            {
#line 2963 "cplus.met"
                PPTREE _ptTree0=0;
#line 2963 "cplus.met"
                {
#line 2963 "cplus.met"
                    PPTREE _ptRes1=0;
#line 2963 "cplus.met"
                    _ptRes1= MakeTree(OPERATOR, 1);
#line 2963 "cplus.met"
                    ReplaceTree(_ptRes1, 1, MakeString ("|"));
#line 2963 "cplus.met"
                    _ptTree0=_ptRes1;
#line 2963 "cplus.met"
                }
#line 2963 "cplus.met"
                _retValue =_ptTree0;
#line 2963 "cplus.met"
                goto operator_function_name_ret;
#line 2963 "cplus.met"
            }
#line 2963 "cplus.met"
            break;
#line 2963 "cplus.met"
#line 2964 "cplus.met"
        case TILD : 
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
                    ReplaceTree(_ptRes1, 1, MakeString ("~"));
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
        case EXCL : 
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
                    ReplaceTree(_ptRes1, 1, MakeString ("!"));
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
        case EGAL : 
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
                    ReplaceTree(_ptRes1, 1, MakeString ("="));
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
        case SUPE : 
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
                    ReplaceTree(_ptRes1, 1, MakeString (">"));
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
        case INFE : 
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
                    ReplaceTree(_ptRes1, 1, MakeString ("<"));
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
        case PLUSEGAL : 
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
                    ReplaceTree(_ptRes1, 1, MakeString ("+="));
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
        case TIREEGAL : 
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
                    ReplaceTree(_ptRes1, 1, MakeString ("-="));
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
        case ETOIEGAL : 
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
                    ReplaceTree(_ptRes1, 1, MakeString ("*="));
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
        case SLASEGAL : 
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
                    ReplaceTree(_ptRes1, 1, MakeString ("/="));
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
        case POURCEGAL : 
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
                    ReplaceTree(_ptRes1, 1, MakeString ("%="));
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
        case CHAPEGAL : 
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
                    ReplaceTree(_ptRes1, 1, MakeString ("^="));
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
        case ETCOEGAL : 
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
                    ReplaceTree(_ptRes1, 1, MakeString ("&="));
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
        case VBAREGAL : 
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
                    ReplaceTree(_ptRes1, 1, MakeString ("|="));
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
        case EXCLEGAL : 
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
                    ReplaceTree(_ptRes1, 1, MakeString ("!="));
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
        case EGALEGAL : 
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
                    ReplaceTree(_ptRes1, 1, MakeString ("=="));
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
        case INFEEGAL : 
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
                    ReplaceTree(_ptRes1, 1, MakeString ("<="));
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
        case SUPEEGAL : 
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
                    ReplaceTree(_ptRes1, 1, MakeString (">="));
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
        case INFEINFE : 
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
                    ReplaceTree(_ptRes1, 1, MakeString ("<<"));
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
        case SUPESUPE : 
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
                    ReplaceTree(_ptRes1, 1, MakeString (">>"));
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
        case INFEINFEEGAL : 
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
                    ReplaceTree(_ptRes1, 1, MakeString ("<<="));
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
        case SUPESUPEEGAL : 
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
                    ReplaceTree(_ptRes1, 1, MakeString (">>="));
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
        case ETCOETCO : 
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
                    ReplaceTree(_ptRes1, 1, MakeString ("&&"));
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
        case VBARVBAR : 
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
                    ReplaceTree(_ptRes1, 1, MakeString ("||"));
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
        case PLUSPLUS : 
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
                    ReplaceTree(_ptRes1, 1, MakeString ("++"));
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
        case TIRETIRE : 
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
                    ReplaceTree(_ptRes1, 1, MakeString ("--"));
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
        case VIRG : 
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
                    ReplaceTree(_ptRes1, 1, MakeString (","));
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
        case TIRESUPE : 
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
                    ReplaceTree(_ptRes1, 1, MakeString ("->"));
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
        case TIRESUPEETOI : 
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
                    ReplaceTree(_ptRes1, 1, MakeString ("->*"));
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
#line 2994 "cplus.met"
        case POUV : 
#line 2994 "cplus.met"
            tokenAhead = 0 ;
#line 2994 "cplus.met"
            CommTerm();
#line 2994 "cplus.met"
#line 2993 "cplus.met"
#line 2994 "cplus.met"
            (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 2994 "cplus.met"
            if (  !SEE_TOKEN( PFER,")") || !(CommTerm(),1)) {
#line 2994 "cplus.met"
                MulFreeTree(3,list,retTree,valTree);
                TOKEN_EXIT(operator_function_name_exit,")")
#line 2994 "cplus.met"
            } else {
#line 2994 "cplus.met"
                tokenAhead = 0 ;
#line 2994 "cplus.met"
            }
#line 2994 "cplus.met"
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
                    ReplaceTree(_ptRes1, 1, MakeString ("()"));
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
#line 2995 "cplus.met"
            break;
#line 2995 "cplus.met"
#line 2999 "cplus.met"
        case COUV : 
#line 2999 "cplus.met"
            tokenAhead = 0 ;
#line 2999 "cplus.met"
            CommTerm();
#line 2999 "cplus.met"
#line 2998 "cplus.met"
#line 2999 "cplus.met"
            (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 2999 "cplus.met"
            if (  !SEE_TOKEN( CFER,"]") || !(CommTerm(),1)) {
#line 2999 "cplus.met"
                MulFreeTree(3,list,retTree,valTree);
                TOKEN_EXIT(operator_function_name_exit,"]")
#line 2999 "cplus.met"
            } else {
#line 2999 "cplus.met"
                tokenAhead = 0 ;
#line 2999 "cplus.met"
            }
#line 2999 "cplus.met"
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
                    ReplaceTree(_ptRes1, 1, MakeString ("[]"));
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
#line 3000 "cplus.met"
            break;
#line 3000 "cplus.met"
#line 3000 "cplus.met"
        default : 
#line 3000 "cplus.met"
#line 3000 "cplus.met"
            break;
#line 3000 "cplus.met"
    }
#line 3000 "cplus.met"
#line 3004 "cplus.met"
    if (NPUSH_CALL_AFF_VERIF(retTree = ,_Tak(const_or_volatile), 30, cplus)){
#line 3004 "cplus.met"
#line 3005 "cplus.met"
        {
#line 3005 "cplus.met"
            PPTREE _ptRes0=0;
#line 3005 "cplus.met"
            _ptRes0= MakeTree(FOR_DECLARATION, 3);
#line 3005 "cplus.met"
            ReplaceTree(_ptRes0, 1, retTree );
#line 3005 "cplus.met"
            retTree=_ptRes0;
#line 3005 "cplus.met"
        }
#line 3005 "cplus.met"
    } else {
#line 3005 "cplus.met"
#line 3007 "cplus.met"
        {
#line 3007 "cplus.met"
            PPTREE _ptRes0=0;
#line 3007 "cplus.met"
            _ptRes0= MakeTree(FOR_DECLARATION, 3);
#line 3007 "cplus.met"
            retTree=_ptRes0;
#line 3007 "cplus.met"
        }
#line 3007 "cplus.met"
    }
#line 3007 "cplus.met"
#line 3008 "cplus.met"
    {
#line 3008 "cplus.met"
        PPTREE _ptTree0=0;
#line 3008 "cplus.met"
        if ( (_ptTree0=NQUICK_CALL(_Tak(type_specifier)(error_free), 145, cplus))== (PPTREE) -1 ) {
#line 3008 "cplus.met"
            MulFreeTree(4,_ptTree0,list,retTree,valTree);
            PROG_EXIT(operator_function_name_exit,"operator_function_name")
#line 3008 "cplus.met"
        }
#line 3008 "cplus.met"
        ReplaceTree(retTree , 2 , _ptTree0);
#line 3008 "cplus.met"
    }
#line 3008 "cplus.met"
#line 3009 "cplus.met"
    if (NPUSH_CALL_AFF_VERIF(valTree = ,_Tak(ptr_operator), 115, cplus)){
#line 3009 "cplus.met"
#line 3010 "cplus.met"
#line 3011 "cplus.met"
        list =AddList(list ,valTree );
#line 3011 "cplus.met"
#line 3012 "cplus.met"
        ReplaceTree(retTree ,3 ,list );
#line 3012 "cplus.met"
#line 3012 "cplus.met"
#line 3012 "cplus.met"
    }
#line 3012 "cplus.met"
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
            ReplaceTree(_ptRes1, 1, retTree );
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
#line 3014 "cplus.met"

#line 3015 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 3015 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 3015 "cplus.met"
return((PPTREE) 0);
#line 3015 "cplus.met"

#line 3015 "cplus.met"
operator_function_name_exit :
#line 3015 "cplus.met"

#line 3015 "cplus.met"
    _Debug = TRACE_RULE("operator_function_name",TRACE_EXIT,(PPTREE)0);
#line 3015 "cplus.met"
    _funcLevel--;
#line 3015 "cplus.met"
    return((PPTREE) -1) ;
#line 3015 "cplus.met"

#line 3015 "cplus.met"
operator_function_name_ret :
#line 3015 "cplus.met"
    
#line 3015 "cplus.met"
    _Debug = TRACE_RULE("operator_function_name",TRACE_RETURN,_retValue);
#line 3015 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 3015 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 3015 "cplus.met"
    return _retValue ;
#line 3015 "cplus.met"
}
#line 3015 "cplus.met"

#line 3015 "cplus.met"
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
#line 3046 "cplus.met"
PPTREE cplus::parameter_list ( int error_free)
#line 3046 "cplus.met"
{
#line 3046 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 3046 "cplus.met"
    int _value,_nbPre = 0 ;
#line 3046 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 3046 "cplus.met"
    int _Debug = TRACE_RULE("parameter_list",TRACE_ENTER,(PPTREE)0);
#line 3046 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 3046 "cplus.met"
#line 3046 "cplus.met"
    PPTREE _addlist1 = (PPTREE) 0;
#line 3046 "cplus.met"
#line 3046 "cplus.met"
    PPTREE paramList = (PPTREE) 0,none = (PPTREE) 0;
#line 3046 "cplus.met"
#line 3048 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3048 "cplus.met"
    if (  !SEE_TOKEN( POUV,"(") || !(CommTerm(),1)) {
#line 3048 "cplus.met"
        MulFreeTree(3,_addlist1,none,paramList);
        TOKEN_EXIT(parameter_list_exit,"(")
#line 3048 "cplus.met"
    } else {
#line 3048 "cplus.met"
        tokenAhead = 0 ;
#line 3048 "cplus.met"
    }
#line 3048 "cplus.met"
#line 3049 "cplus.met"
    if ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN( IDENT,"IDENT")){
#line 3049 "cplus.met"
#line 3050 "cplus.met"
#line 3051 "cplus.met"
         { int exit = 0 ;
#line 3051 "cplus.met"
#line 3052 "cplus.met"
        {
#line 3052 "cplus.met"
            PPTREE _ptTree0=0;
#line 3052 "cplus.met"
            {
#line 3052 "cplus.met"
                PPTREE _ptTree1=0,_ptRes1=0;
#line 3052 "cplus.met"
                _ptRes1= MakeTree(IDENT, 1);
#line 3052 "cplus.met"
                (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3052 "cplus.met"
                if ( ! TERM_OR_META(IDENT,"IDENT") || !(BUILD_TERM_META(_ptTree1))) {
#line 3052 "cplus.met"
                    MulFreeTree(6,_ptRes1,_ptTree1,_ptTree0,_addlist1,none,paramList);
                    TOKEN_EXIT(parameter_list_exit,"IDENT")
#line 3052 "cplus.met"
                } else {
#line 3052 "cplus.met"
                    tokenAhead = 0 ;
#line 3052 "cplus.met"
                }
#line 3052 "cplus.met"
                ReplaceTree(_ptRes1, 1, _ptTree1);
#line 3052 "cplus.met"
                _ptTree0=_ptRes1;
#line 3052 "cplus.met"
            }
#line 3052 "cplus.met"
            paramList =AddList(paramList , _ptTree0);
#line 3052 "cplus.met"
        }
#line 3052 "cplus.met"
#line 3052 "cplus.met"
        _addlist1 = paramList ;
#line 3052 "cplus.met"
#line 3053 "cplus.met"
        while ((! ( exit )) && 
#line 3053 "cplus.met"
              ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN(VIRG,",") && (tokenAhead = 0,CommTerm(),1))) { 
#line 3053 "cplus.met"
#line 3054 "cplus.met"
            if ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN( IDENT,"IDENT")){
#line 3054 "cplus.met"
#line 3055 "cplus.met"
#line 3055 "cplus.met"
                {
#line 3055 "cplus.met"
                    PPTREE _ptTree0=0;
#line 3055 "cplus.met"
                    {
#line 3055 "cplus.met"
                        PPTREE _ptTree1=0,_ptRes1=0;
#line 3055 "cplus.met"
                        _ptRes1= MakeTree(IDENT, 1);
#line 3055 "cplus.met"
                        (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3055 "cplus.met"
                        if ( ! TERM_OR_META(IDENT,"IDENT") || !(BUILD_TERM_META(_ptTree1))) {
#line 3055 "cplus.met"
                            MulFreeTree(6,_ptRes1,_ptTree1,_ptTree0,_addlist1,none,paramList);
                            TOKEN_EXIT(parameter_list_exit,"IDENT")
#line 3055 "cplus.met"
                        } else {
#line 3055 "cplus.met"
                            tokenAhead = 0 ;
#line 3055 "cplus.met"
                        }
#line 3055 "cplus.met"
                        ReplaceTree(_ptRes1, 1, _ptTree1);
#line 3055 "cplus.met"
                        _ptTree0=_ptRes1;
#line 3055 "cplus.met"
                    }
#line 3055 "cplus.met"
                    _addlist1 =AddList(_addlist1 , _ptTree0);
#line 3055 "cplus.met"
                }
#line 3055 "cplus.met"
#line 3055 "cplus.met"
                if (paramList){
#line 3055 "cplus.met"
#line 3055 "cplus.met"
                    _addlist1 = SonTree (_addlist1 ,2 );
#line 3055 "cplus.met"
                } else {
#line 3055 "cplus.met"
#line 3055 "cplus.met"
                    paramList = _addlist1 ;
#line 3055 "cplus.met"
                }
#line 3055 "cplus.met"
            } else {
#line 3055 "cplus.met"
#line 3057 "cplus.met"
#line 3058 "cplus.met"
                {
#line 3058 "cplus.met"
                    PPTREE _ptTree0=0;
#line 3058 "cplus.met"
                    {
#line 3058 "cplus.met"
                        PPTREE _ptRes1=0;
#line 3058 "cplus.met"
                        _ptRes1= MakeTree(VAR_LIST, 0);
#line 3058 "cplus.met"
                        _ptTree0=_ptRes1;
#line 3058 "cplus.met"
                    }
#line 3058 "cplus.met"
                    _addlist1 =AddList(_addlist1 , _ptTree0);
#line 3058 "cplus.met"
                }
#line 3058 "cplus.met"
#line 3058 "cplus.met"
                if (paramList){
#line 3058 "cplus.met"
#line 3058 "cplus.met"
                    _addlist1 = SonTree (_addlist1 ,2 );
#line 3058 "cplus.met"
                } else {
#line 3058 "cplus.met"
#line 3058 "cplus.met"
                    paramList = _addlist1 ;
#line 3058 "cplus.met"
                }
#line 3058 "cplus.met"
#line 3059 "cplus.met"
                 exit = 1 ;
#line 3059 "cplus.met"
#line 3060 "cplus.met"
                if ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN(POINPOINPOIN,"...") && (tokenAhead = 0,CommTerm(),1)){
#line 3060 "cplus.met"
#line 3060 "cplus.met"
                }
#line 3060 "cplus.met"
#line 3060 "cplus.met"
            }
#line 3060 "cplus.met"
        } 
#line 3060 "cplus.met"
#line 3063 "cplus.met"
        if ((! ( exit )) && 
#line 3063 "cplus.met"
           ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN(POINPOINPOIN,"...") && (tokenAhead = 0,CommTerm(),1))){
#line 3063 "cplus.met"
#line 3064 "cplus.met"
            {
#line 3064 "cplus.met"
                PPTREE _ptTree0=0;
#line 3064 "cplus.met"
                {
#line 3064 "cplus.met"
                    PPTREE _ptRes1=0;
#line 3064 "cplus.met"
                    _ptRes1= MakeTree(VAR_LIST, 0);
#line 3064 "cplus.met"
                    _ptTree0=_ptRes1;
#line 3064 "cplus.met"
                }
#line 3064 "cplus.met"
                paramList =AddList(paramList , _ptTree0);
#line 3064 "cplus.met"
            }
#line 3064 "cplus.met"
#line 3064 "cplus.met"
        }
#line 3064 "cplus.met"
#line 3065 "cplus.met"
         } 
#line 3065 "cplus.met"
#line 3065 "cplus.met"
#line 3065 "cplus.met"
    } else {
#line 3065 "cplus.met"
#line 3068 "cplus.met"
        paramList =AddList(paramList ,none );
#line 3068 "cplus.met"
    }
#line 3068 "cplus.met"
#line 3069 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3069 "cplus.met"
    if (  !SEE_TOKEN( PFER,")") || !(CommTerm(),1)) {
#line 3069 "cplus.met"
        MulFreeTree(3,_addlist1,none,paramList);
        TOKEN_EXIT(parameter_list_exit,")")
#line 3069 "cplus.met"
    } else {
#line 3069 "cplus.met"
        tokenAhead = 0 ;
#line 3069 "cplus.met"
    }
#line 3069 "cplus.met"
#line 3070 "cplus.met"
    {
#line 3070 "cplus.met"
        _retValue = paramList ;
#line 3070 "cplus.met"
        goto parameter_list_ret;
#line 3070 "cplus.met"
        
#line 3070 "cplus.met"
    }
#line 3070 "cplus.met"
#line 3070 "cplus.met"
#line 3070 "cplus.met"

#line 3071 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 3071 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 3071 "cplus.met"
return((PPTREE) 0);
#line 3071 "cplus.met"

#line 3071 "cplus.met"
parameter_list_exit :
#line 3071 "cplus.met"

#line 3071 "cplus.met"
    _Debug = TRACE_RULE("parameter_list",TRACE_EXIT,(PPTREE)0);
#line 3071 "cplus.met"
    _funcLevel--;
#line 3071 "cplus.met"
    return((PPTREE) -1) ;
#line 3071 "cplus.met"

#line 3071 "cplus.met"
parameter_list_ret :
#line 3071 "cplus.met"
    
#line 3071 "cplus.met"
    _Debug = TRACE_RULE("parameter_list",TRACE_RETURN,_retValue);
#line 3071 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 3071 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 3071 "cplus.met"
    return _retValue ;
#line 3071 "cplus.met"
}
#line 3071 "cplus.met"

#line 3071 "cplus.met"
