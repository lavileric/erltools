/*************************************************************************/
/*                                                                       */
/*        Produced by MetaGen version 2.0  -    1989-2006                 */
/*       Syntaxic Analyzer Meta Generator developped by                  */
/*                  Eric Lavillonniere                                   */
/*                                                                       */
/*************************************************************************/

#include "token.h"
#include "cplus.h"


#line 3567 "cplus.met"
PPTREE cplus::name_space ( int error_free)
#line 3567 "cplus.met"
{
#line 3567 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 3567 "cplus.met"
    int _value,_nbPre = 0 ;
#line 3567 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 3567 "cplus.met"
    int _Debug = TRACE_RULE("name_space",TRACE_ENTER,(PPTREE)0);
#line 3567 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 3567 "cplus.met"
#line 3567 "cplus.met"
    PPTREE _addlist1 = (PPTREE) 0;
#line 3567 "cplus.met"
#line 3567 "cplus.met"
    PPTREE list = (PPTREE) 0,retTree = (PPTREE) 0,ident = (PPTREE) 0,attrib = (PPTREE) 0;
#line 3567 "cplus.met"
#line 3569 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3569 "cplus.met"
    switch( lexEl.Value) {
#line 3569 "cplus.met"
#line 3570 "cplus.met"
        case NAMESPACE : 
#line 3570 "cplus.met"
            tokenAhead = 0 ;
#line 3570 "cplus.met"
            CommTerm();
#line 3570 "cplus.met"
#line 3571 "cplus.met"
#line 3573 "cplus.met"
            if ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&TERM_OR_META(IDENT,"IDENT") && !(tokenAhead = 0) && ( BUILD_TERM_META(ident))) {
#line 3573 "cplus.met"
#line 3575 "cplus.met"
                {
#line 3575 "cplus.met"
                    PPTREE _ptRes0=0;
#line 3575 "cplus.met"
                    _ptRes0= MakeTree(IDENT, 1);
#line 3575 "cplus.met"
                    ReplaceTree(_ptRes0, 1, ident );
#line 3575 "cplus.met"
                    ident=_ptRes0;
#line 3575 "cplus.met"
                }
#line 3575 "cplus.met"
            }
#line 3575 "cplus.met"
#line 3576 "cplus.met"
            if (NPUSH_CALL_AFF_VERIF(attrib = ,_Tak(attribute_call), 18, cplus)){
#line 3576 "cplus.met"
#line 3576 "cplus.met"
            }
#line 3576 "cplus.met"
#line 3579 "cplus.met"
            (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3579 "cplus.met"
            switch( lexEl.Value) {
#line 3579 "cplus.met"
#line 3583 "cplus.met"
                case AOUV : 
#line 3583 "cplus.met"
                    tokenAhead = 0 ;
#line 3583 "cplus.met"
                    CommTerm();
#line 3583 "cplus.met"
#line 3582 "cplus.met"
#line 3583 "cplus.met"
                    {
#line 3583 "cplus.met"
                        PPTREE _ptRes0=0;
#line 3583 "cplus.met"
                        _ptRes0= MakeTree(NAMESPACE, 3);
#line 3583 "cplus.met"
                        ReplaceTree(_ptRes0, 1, ident );
#line 3583 "cplus.met"
                        ReplaceTree(_ptRes0, 3, attrib );
#line 3583 "cplus.met"
                        retTree=_ptRes0;
#line 3583 "cplus.met"
                    }
#line 3583 "cplus.met"
#line 3583 "cplus.met"
                    _addlist1 = list ;
#line 3583 "cplus.met"
#line 3584 "cplus.met"
                    while (! ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN(AFER,"}") && (tokenAhead = 0,CommTerm(),1))) { 
#line 3584 "cplus.met"
#line 3585 "cplus.met"
#line 3586 "cplus.met"
                        {
#line 3586 "cplus.met"
                            PPTREE _ptTree0=0;
#line 3586 "cplus.met"
                            if ( (_ptTree0=NQUICK_CALL(_Tak(ext_all)(error_free), 65, cplus))== (PPTREE) -1 ) {
#line 3586 "cplus.met"
                                MulFreeTree(6,_ptTree0,_addlist1,attrib,ident,list,retTree);
                                PROG_EXIT(name_space_exit,"name_space")
#line 3586 "cplus.met"
                            }
#line 3586 "cplus.met"
                            _addlist1 =AddList(_addlist1 , _ptTree0);
#line 3586 "cplus.met"
                        }
#line 3586 "cplus.met"
#line 3586 "cplus.met"
                        if (list){
#line 3586 "cplus.met"
#line 3586 "cplus.met"
                            _addlist1 = SonTree (_addlist1 ,2 );
#line 3586 "cplus.met"
                        } else {
#line 3586 "cplus.met"
#line 3586 "cplus.met"
                            list = _addlist1 ;
#line 3586 "cplus.met"
                        }
#line 3586 "cplus.met"
#line 3586 "cplus.met"
                    } 
#line 3586 "cplus.met"
#line 3588 "cplus.met"
                    {
#line 3588 "cplus.met"
                        PPTREE _ptTree0=0;
#line 3588 "cplus.met"
                        if ( (_ptTree0=NQUICK_CALL(_Tak(none_statement)(error_free), 104, cplus))== (PPTREE) -1 ) {
#line 3588 "cplus.met"
                            MulFreeTree(6,_ptTree0,_addlist1,attrib,ident,list,retTree);
                            PROG_EXIT(name_space_exit,"name_space")
#line 3588 "cplus.met"
                        }
#line 3588 "cplus.met"
                        list =AddList(list , _ptTree0);
#line 3588 "cplus.met"
                    }
#line 3588 "cplus.met"
#line 3589 "cplus.met"
                    {
#line 3589 "cplus.met"
                        PPTREE _ptTree0=0;
#line 3589 "cplus.met"
                        {
#line 3589 "cplus.met"
                            PPTREE _ptRes1=0;
#line 3589 "cplus.met"
                            _ptRes1= MakeTree(COMPOUND_EXT, 1);
#line 3589 "cplus.met"
                            ReplaceTree(_ptRes1, 1, list );
#line 3589 "cplus.met"
                            _ptTree0=_ptRes1;
#line 3589 "cplus.met"
                        }
#line 3589 "cplus.met"
                        ReplaceTree(retTree , 2 , _ptTree0);
#line 3589 "cplus.met"
                    }
#line 3589 "cplus.met"
#line 3589 "cplus.met"
                    break;
#line 3589 "cplus.met"
#line 3593 "cplus.met"
                case EGAL : 
#line 3593 "cplus.met"
                    tokenAhead = 0 ;
#line 3593 "cplus.met"
                    CommTerm();
#line 3593 "cplus.met"
#line 3592 "cplus.met"
#line 3593 "cplus.met"
                    if ((ident == (PPTREE) 0 )){
#line 3593 "cplus.met"
#line 3594 "cplus.met"
                        
#line 3594 "cplus.met"
                        MulFreeTree(5,_addlist1,attrib,ident,list,retTree);
                        LEX_EXIT ("",0);
#line 3594 "cplus.met"
                        goto name_space_exit;
#line 3594 "cplus.met"
#line 3594 "cplus.met"
                    }
#line 3594 "cplus.met"
#line 3595 "cplus.met"
                    {
#line 3595 "cplus.met"
                        PPTREE _ptTree0=0,_ptRes0=0;
#line 3595 "cplus.met"
                        _ptRes0= MakeTree(NAMESPACE_ALIAS, 2);
#line 3595 "cplus.met"
                        ReplaceTree(_ptRes0, 1, ident );
#line 3595 "cplus.met"
                        if ( (_ptTree0=NQUICK_CALL(_Tak(complete_class_name)(error_free), 28, cplus))== (PPTREE) -1 ) {
#line 3595 "cplus.met"
                            MulFreeTree(7,_ptRes0,_ptTree0,_addlist1,attrib,ident,list,retTree);
                            PROG_EXIT(name_space_exit,"name_space")
#line 3595 "cplus.met"
                        }
#line 3595 "cplus.met"
                        ReplaceTree(_ptRes0, 2, _ptTree0);
#line 3595 "cplus.met"
                        retTree=_ptRes0;
#line 3595 "cplus.met"
                    }
#line 3595 "cplus.met"
#line 3595 "cplus.met"
                    break;
#line 3595 "cplus.met"
                default :
#line 3595 "cplus.met"
                    MulFreeTree(5,_addlist1,attrib,ident,list,retTree);
                    CASE_EXIT(name_space_exit,"either { or =")
#line 3595 "cplus.met"
                    break;
#line 3595 "cplus.met"
            }
#line 3595 "cplus.met"
#line 3595 "cplus.met"
            break;
#line 3595 "cplus.met"
#line 3599 "cplus.met"
        case USING : 
#line 3599 "cplus.met"
            tokenAhead = 0 ;
#line 3599 "cplus.met"
            CommTerm();
#line 3599 "cplus.met"
#line 3600 "cplus.met"
#line 3601 "cplus.met"
            if ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN(NAMESPACE,"namespace") && (tokenAhead = 0,CommTerm(),1)){
#line 3601 "cplus.met"
#line 3602 "cplus.met"
#line 3603 "cplus.met"
                if (NPUSH_CALL_AFF_VERIF(attrib = ,_Tak(attribute_call), 18, cplus)){
#line 3603 "cplus.met"
#line 3603 "cplus.met"
                }
#line 3603 "cplus.met"
#line 3605 "cplus.met"
                {
#line 3605 "cplus.met"
                    PPTREE _ptTree0=0,_ptRes0=0;
#line 3605 "cplus.met"
                    _ptRes0= MakeTree(USING_NAMESPACE, 2);
#line 3605 "cplus.met"
                    if ( (_ptTree0=NQUICK_CALL(_Tak(complete_class_name)(error_free), 28, cplus))== (PPTREE) -1 ) {
#line 3605 "cplus.met"
                        MulFreeTree(7,_ptRes0,_ptTree0,_addlist1,attrib,ident,list,retTree);
                        PROG_EXIT(name_space_exit,"name_space")
#line 3605 "cplus.met"
                    }
#line 3605 "cplus.met"
                    ReplaceTree(_ptRes0, 1, _ptTree0);
#line 3605 "cplus.met"
                    ReplaceTree(_ptRes0, 2, attrib );
#line 3605 "cplus.met"
                    retTree=_ptRes0;
#line 3605 "cplus.met"
                }
#line 3605 "cplus.met"
#line 3605 "cplus.met"
#line 3605 "cplus.met"
            } else {
#line 3605 "cplus.met"
#line 3608 "cplus.met"
                {
#line 3608 "cplus.met"
                    PPTREE _ptTree0=0,_ptRes0=0;
#line 3608 "cplus.met"
                    _ptRes0= MakeTree(USING, 1);
#line 3608 "cplus.met"
                    if ( (_ptTree0=NQUICK_CALL(_Tak(complete_class_name)(error_free), 28, cplus))== (PPTREE) -1 ) {
#line 3608 "cplus.met"
                        MulFreeTree(7,_ptRes0,_ptTree0,_addlist1,attrib,ident,list,retTree);
                        PROG_EXIT(name_space_exit,"name_space")
#line 3608 "cplus.met"
                    }
#line 3608 "cplus.met"
                    ReplaceTree(_ptRes0, 1, _ptTree0);
#line 3608 "cplus.met"
                    retTree=_ptRes0;
#line 3608 "cplus.met"
                }
#line 3608 "cplus.met"
            }
#line 3608 "cplus.met"
#line 3609 "cplus.met"
            (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3609 "cplus.met"
            if (  !SEE_TOKEN( PVIR,";") || !(CommTerm(),1)) {
#line 3609 "cplus.met"
                MulFreeTree(5,_addlist1,attrib,ident,list,retTree);
                TOKEN_EXIT(name_space_exit,";")
#line 3609 "cplus.met"
            } else {
#line 3609 "cplus.met"
                tokenAhead = 0 ;
#line 3609 "cplus.met"
            }
#line 3609 "cplus.met"
#line 3609 "cplus.met"
            break;
#line 3609 "cplus.met"
        default :
#line 3609 "cplus.met"
            MulFreeTree(5,_addlist1,attrib,ident,list,retTree);
            CASE_EXIT(name_space_exit,"either namespace or using")
#line 3609 "cplus.met"
            break;
#line 3609 "cplus.met"
    }
#line 3609 "cplus.met"
#line 3612 "cplus.met"
    {
#line 3612 "cplus.met"
        _retValue = retTree ;
#line 3612 "cplus.met"
        goto name_space_ret;
#line 3612 "cplus.met"
        
#line 3612 "cplus.met"
    }
#line 3612 "cplus.met"
#line 3612 "cplus.met"
#line 3612 "cplus.met"

#line 3613 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 3613 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 3613 "cplus.met"
return((PPTREE) 0);
#line 3613 "cplus.met"

#line 3613 "cplus.met"
name_space_exit :
#line 3613 "cplus.met"

#line 3613 "cplus.met"
    _Debug = TRACE_RULE("name_space",TRACE_EXIT,(PPTREE)0);
#line 3613 "cplus.met"
    _funcLevel--;
#line 3613 "cplus.met"
    return((PPTREE) -1) ;
#line 3613 "cplus.met"

#line 3613 "cplus.met"
name_space_ret :
#line 3613 "cplus.met"
    
#line 3613 "cplus.met"
    _Debug = TRACE_RULE("name_space",TRACE_RETURN,_retValue);
#line 3613 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 3613 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 3613 "cplus.met"
    return _retValue ;
#line 3613 "cplus.met"
}
#line 3613 "cplus.met"

#line 3613 "cplus.met"
#line 2830 "cplus.met"
PPTREE cplus::new_1 ( int error_free)
#line 2830 "cplus.met"
{
#line 2830 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 2830 "cplus.met"
    int _value,_nbPre = 0 ;
#line 2830 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 2830 "cplus.met"
    int _Debug = TRACE_RULE("new_1",TRACE_ENTER,(PPTREE)0);
#line 2830 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 2830 "cplus.met"
#line 2830 "cplus.met"
    PPTREE retTree = (PPTREE) 0;
#line 2830 "cplus.met"
#line 2832 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 2832 "cplus.met"
    if (  !SEE_TOKEN( POUV,"(") || !(CommTerm(),1)) {
#line 2832 "cplus.met"
        MulFreeTree(1,retTree);
        TOKEN_EXIT(new_1_exit,"(")
#line 2832 "cplus.met"
    } else {
#line 2832 "cplus.met"
        tokenAhead = 0 ;
#line 2832 "cplus.met"
    }
#line 2832 "cplus.met"
#line 2833 "cplus.met"
    if ( (retTree=NQUICK_CALL(_Tak(expression)(error_free), 63, cplus))== (PPTREE) -1 ) {
#line 2833 "cplus.met"
        MulFreeTree(1,retTree);
        PROG_EXIT(new_1_exit,"new_1")
#line 2833 "cplus.met"
    }
#line 2833 "cplus.met"
#line 2834 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 2834 "cplus.met"
    if (  !SEE_TOKEN( PFER,")") || !(CommTerm(),1)) {
#line 2834 "cplus.met"
        MulFreeTree(1,retTree);
        TOKEN_EXIT(new_1_exit,")")
#line 2834 "cplus.met"
    } else {
#line 2834 "cplus.met"
        tokenAhead = 0 ;
#line 2834 "cplus.met"
    }
#line 2834 "cplus.met"
#line 2835 "cplus.met"
    if ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN(POUV,"(") && (tokenAhead = 0,CommTerm(),1)){
#line 2835 "cplus.met"
#line 2836 "cplus.met"
#line 2837 "cplus.met"
        {
#line 2837 "cplus.met"
            PPTREE _ptTree0=0,_ptRes0=0;
#line 2837 "cplus.met"
            _ptRes0= MakeTree(NEW, 4);
#line 2837 "cplus.met"
            ReplaceTree(_ptRes0, 1, retTree );
#line 2837 "cplus.met"
            if ( (_ptTree0=NQUICK_CALL(_Tak(type_name)(error_free), 148, cplus))== (PPTREE) -1 ) {
#line 2837 "cplus.met"
                MulFreeTree(3,_ptRes0,_ptTree0,retTree);
                PROG_EXIT(new_1_exit,"new_1")
#line 2837 "cplus.met"
            }
#line 2837 "cplus.met"
            ReplaceTree(_ptRes0, 2, _ptTree0);
#line 2837 "cplus.met"
            retTree=_ptRes0;
#line 2837 "cplus.met"
        }
#line 2837 "cplus.met"
#line 2838 "cplus.met"
        (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 2838 "cplus.met"
        if (  !SEE_TOKEN( PFER,")") || !(CommTerm(),1)) {
#line 2838 "cplus.met"
            MulFreeTree(1,retTree);
            TOKEN_EXIT(new_1_exit,")")
#line 2838 "cplus.met"
        } else {
#line 2838 "cplus.met"
            tokenAhead = 0 ;
#line 2838 "cplus.met"
        }
#line 2838 "cplus.met"
#line 2839 "cplus.met"
        {
#line 2839 "cplus.met"
            _retValue = retTree ;
#line 2839 "cplus.met"
            goto new_1_ret;
#line 2839 "cplus.met"
            
#line 2839 "cplus.met"
        }
#line 2839 "cplus.met"
#line 2839 "cplus.met"
#line 2839 "cplus.met"
    } else {
#line 2839 "cplus.met"
#line 2842 "cplus.met"
        {
#line 2842 "cplus.met"
            PPTREE _ptTree0=0,_ptRes0=0;
#line 2842 "cplus.met"
            _ptRes0= MakeTree(NEW, 4);
#line 2842 "cplus.met"
            ReplaceTree(_ptRes0, 1, retTree );
#line 2842 "cplus.met"
            if ( (_ptTree0=NQUICK_CALL(_Tak(new_type_name)(error_free), 103, cplus))== (PPTREE) -1 ) {
#line 2842 "cplus.met"
                MulFreeTree(3,_ptRes0,_ptTree0,retTree);
                PROG_EXIT(new_1_exit,"new_1")
#line 2842 "cplus.met"
            }
#line 2842 "cplus.met"
            ReplaceTree(_ptRes0, 2, _ptTree0);
#line 2842 "cplus.met"
            retTree=_ptRes0;
#line 2842 "cplus.met"
        }
#line 2842 "cplus.met"
    }
#line 2842 "cplus.met"
#line 2843 "cplus.met"
    {
#line 2843 "cplus.met"
        _retValue = retTree ;
#line 2843 "cplus.met"
        goto new_1_ret;
#line 2843 "cplus.met"
        
#line 2843 "cplus.met"
    }
#line 2843 "cplus.met"
#line 2843 "cplus.met"
#line 2843 "cplus.met"

#line 2844 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2844 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 2844 "cplus.met"
return((PPTREE) 0);
#line 2844 "cplus.met"

#line 2844 "cplus.met"
new_1_exit :
#line 2844 "cplus.met"

#line 2844 "cplus.met"
    _Debug = TRACE_RULE("new_1",TRACE_EXIT,(PPTREE)0);
#line 2844 "cplus.met"
    _funcLevel--;
#line 2844 "cplus.met"
    return((PPTREE) -1) ;
#line 2844 "cplus.met"

#line 2844 "cplus.met"
new_1_ret :
#line 2844 "cplus.met"
    
#line 2844 "cplus.met"
    _Debug = TRACE_RULE("new_1",TRACE_RETURN,_retValue);
#line 2844 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2844 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 2844 "cplus.met"
    return _retValue ;
#line 2844 "cplus.met"
}
#line 2844 "cplus.met"

#line 2844 "cplus.met"
#line 2846 "cplus.met"
PPTREE cplus::new_2 ( int error_free)
#line 2846 "cplus.met"
{
#line 2846 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 2846 "cplus.met"
    int _value,_nbPre = 0 ;
#line 2846 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 2846 "cplus.met"
    int _Debug = TRACE_RULE("new_2",TRACE_ENTER,(PPTREE)0);
#line 2846 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 2846 "cplus.met"
#line 2846 "cplus.met"
    PPTREE retTree = (PPTREE) 0;
#line 2846 "cplus.met"
#line 2848 "cplus.met"
    if ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN(POUV,"(") && (tokenAhead = 0,CommTerm(),1)){
#line 2848 "cplus.met"
#line 2849 "cplus.met"
#line 2850 "cplus.met"
        {
#line 2850 "cplus.met"
            PPTREE _ptTree0=0,_ptRes0=0;
#line 2850 "cplus.met"
            _ptRes0= MakeTree(NEW, 4);
#line 2850 "cplus.met"
            if ( (_ptTree0=NQUICK_CALL(_Tak(type_name)(error_free), 148, cplus))== (PPTREE) -1 ) {
#line 2850 "cplus.met"
                MulFreeTree(3,_ptRes0,_ptTree0,retTree);
                PROG_EXIT(new_2_exit,"new_2")
#line 2850 "cplus.met"
            }
#line 2850 "cplus.met"
            ReplaceTree(_ptRes0, 2, _ptTree0);
#line 2850 "cplus.met"
            retTree=_ptRes0;
#line 2850 "cplus.met"
        }
#line 2850 "cplus.met"
#line 2851 "cplus.met"
        (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 2851 "cplus.met"
        if (  !SEE_TOKEN( PFER,")") || !(CommTerm(),1)) {
#line 2851 "cplus.met"
            MulFreeTree(1,retTree);
            TOKEN_EXIT(new_2_exit,")")
#line 2851 "cplus.met"
        } else {
#line 2851 "cplus.met"
            tokenAhead = 0 ;
#line 2851 "cplus.met"
        }
#line 2851 "cplus.met"
#line 2852 "cplus.met"
        {
#line 2852 "cplus.met"
            _retValue = retTree ;
#line 2852 "cplus.met"
            goto new_2_ret;
#line 2852 "cplus.met"
            
#line 2852 "cplus.met"
        }
#line 2852 "cplus.met"
#line 2852 "cplus.met"
#line 2852 "cplus.met"
    } else {
#line 2852 "cplus.met"
#line 2855 "cplus.met"
        {
#line 2855 "cplus.met"
            PPTREE _ptTree0=0,_ptRes0=0;
#line 2855 "cplus.met"
            _ptRes0= MakeTree(NEW, 4);
#line 2855 "cplus.met"
            if ( (_ptTree0=NQUICK_CALL(_Tak(new_type_name)(error_free), 103, cplus))== (PPTREE) -1 ) {
#line 2855 "cplus.met"
                MulFreeTree(3,_ptRes0,_ptTree0,retTree);
                PROG_EXIT(new_2_exit,"new_2")
#line 2855 "cplus.met"
            }
#line 2855 "cplus.met"
            ReplaceTree(_ptRes0, 2, _ptTree0);
#line 2855 "cplus.met"
            retTree=_ptRes0;
#line 2855 "cplus.met"
        }
#line 2855 "cplus.met"
    }
#line 2855 "cplus.met"
#line 2856 "cplus.met"
    {
#line 2856 "cplus.met"
        _retValue = retTree ;
#line 2856 "cplus.met"
        goto new_2_ret;
#line 2856 "cplus.met"
        
#line 2856 "cplus.met"
    }
#line 2856 "cplus.met"
#line 2856 "cplus.met"
#line 2856 "cplus.met"

#line 2857 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2857 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 2857 "cplus.met"
return((PPTREE) 0);
#line 2857 "cplus.met"

#line 2857 "cplus.met"
new_2_exit :
#line 2857 "cplus.met"

#line 2857 "cplus.met"
    _Debug = TRACE_RULE("new_2",TRACE_EXIT,(PPTREE)0);
#line 2857 "cplus.met"
    _funcLevel--;
#line 2857 "cplus.met"
    return((PPTREE) -1) ;
#line 2857 "cplus.met"

#line 2857 "cplus.met"
new_2_ret :
#line 2857 "cplus.met"
    
#line 2857 "cplus.met"
    _Debug = TRACE_RULE("new_2",TRACE_RETURN,_retValue);
#line 2857 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2857 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 2857 "cplus.met"
    return _retValue ;
#line 2857 "cplus.met"
}
#line 2857 "cplus.met"

#line 2857 "cplus.met"
#line 2405 "cplus.met"
PPTREE cplus::new_declarator ( int error_free)
#line 2405 "cplus.met"
{
#line 2405 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 2405 "cplus.met"
    int _value,_nbPre = 0 ;
#line 2405 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 2405 "cplus.met"
    int _Debug = TRACE_RULE("new_declarator",TRACE_ENTER,(PPTREE)0);
#line 2405 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 2405 "cplus.met"
#line 2405 "cplus.met"
    PPTREE valTree = (PPTREE) 0,retTree = (PPTREE) 0,expList = (PPTREE) 0;
#line 2405 "cplus.met"
#line 2407 "cplus.met"
    if (NPUSH_CALL_AFF_VERIF(valTree = ,_Tak(range_modifier), 122, cplus)){
#line 2407 "cplus.met"
#line 2408 "cplus.met"
        {
#line 2408 "cplus.met"
            PPTREE _ptTree0=0;
#line 2408 "cplus.met"
            {
#line 2408 "cplus.met"
                PPTREE _ptTree1=0;
#line 2408 "cplus.met"
                if ( (_ptTree1=NQUICK_CALL(_Tak(new_declarator)(error_free), 102, cplus))== (PPTREE) -1 ) {
#line 2408 "cplus.met"
                    MulFreeTree(5,_ptTree1,_ptTree0,expList,retTree,valTree);
                    PROG_EXIT(new_declarator_exit,"new_declarator")
#line 2408 "cplus.met"
                }
#line 2408 "cplus.met"
                _ptTree0=ReplaceTree(valTree , 2 , _ptTree1);
#line 2408 "cplus.met"
            }
#line 2408 "cplus.met"
            _retValue =_ptTree0;
#line 2408 "cplus.met"
            goto new_declarator_ret;
#line 2408 "cplus.met"
        }
#line 2408 "cplus.met"
    }
#line 2408 "cplus.met"
#line 2409 "cplus.met"
    retTree = (PPTREE) 0;
#line 2409 "cplus.met"
#line 2410 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 2410 "cplus.met"
    switch( lexEl.Value) {
#line 2410 "cplus.met"
#line 2411 "cplus.met"
        case ETOI : 
#line 2411 "cplus.met"
            tokenAhead = 0 ;
#line 2411 "cplus.met"
            CommTerm();
#line 2411 "cplus.met"
#line 2411 "cplus.met"
            {
#line 2411 "cplus.met"
                PPTREE _ptTree0=0;
#line 2411 "cplus.met"
                {
#line 2411 "cplus.met"
                    PPTREE _ptTree1=0,_ptRes1=0;
#line 2411 "cplus.met"
                    _ptRes1= MakeTree(TYP_ADDR, 1);
#line 2411 "cplus.met"
                    if ( (_ptTree1=NQUICK_CALL(_Tak(new_declarator)(error_free), 102, cplus))== (PPTREE) -1 ) {
#line 2411 "cplus.met"
                        MulFreeTree(6,_ptRes1,_ptTree1,_ptTree0,expList,retTree,valTree);
                        PROG_EXIT(new_declarator_exit,"new_declarator")
#line 2411 "cplus.met"
                    }
#line 2411 "cplus.met"
                    ReplaceTree(_ptRes1, 1, _ptTree1);
#line 2411 "cplus.met"
                    _ptTree0=_ptRes1;
#line 2411 "cplus.met"
                }
#line 2411 "cplus.met"
                _retValue =_ptTree0;
#line 2411 "cplus.met"
                goto new_declarator_ret;
#line 2411 "cplus.met"
            }
#line 2411 "cplus.met"
            break;
#line 2411 "cplus.met"
#line 2412 "cplus.met"
        case META : 
#line 2412 "cplus.met"
        case IDENT : 
#line 2412 "cplus.met"
#line 2413 "cplus.met"
#line 2414 "cplus.met"
            if ( (valTree=NQUICK_CALL(_Tak(member_declarator)(error_free), 96, cplus))== (PPTREE) -1 ) {
#line 2414 "cplus.met"
                MulFreeTree(3,expList,retTree,valTree);
                PROG_EXIT(new_declarator_exit,"new_declarator")
#line 2414 "cplus.met"
            }
#line 2414 "cplus.met"
#line 2415 "cplus.met"
            {
#line 2415 "cplus.met"
                PPTREE _ptTree0=0;
#line 2415 "cplus.met"
                {
#line 2415 "cplus.met"
                    PPTREE _ptTree1=0;
#line 2415 "cplus.met"
                    if ( (_ptTree1=NQUICK_CALL(_Tak(new_declarator)(error_free), 102, cplus))== (PPTREE) -1 ) {
#line 2415 "cplus.met"
                        MulFreeTree(5,_ptTree1,_ptTree0,expList,retTree,valTree);
                        PROG_EXIT(new_declarator_exit,"new_declarator")
#line 2415 "cplus.met"
                    }
#line 2415 "cplus.met"
                    _ptTree0=ReplaceTree(valTree , 2 , _ptTree1);
#line 2415 "cplus.met"
                }
#line 2415 "cplus.met"
                _retValue =_ptTree0;
#line 2415 "cplus.met"
                goto new_declarator_ret;
#line 2415 "cplus.met"
            }
#line 2415 "cplus.met"
#line 2415 "cplus.met"
            break;
#line 2415 "cplus.met"
#line 2424 "cplus.met"
        default : 
#line 2424 "cplus.met"
#line 2420 "cplus.met"
#line 2422 "cplus.met"
            while ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN(COUV,"[") && (tokenAhead = 0,CommTerm(),1)) { 
#line 2422 "cplus.met"
#line 2423 "cplus.met"
#line 2424 "cplus.met"
                if (NPUSH_CALL_AFF_VERIF(expList = ,_Tak(expression), 63, cplus)){
#line 2424 "cplus.met"
#line 2425 "cplus.met"
                    {
#line 2425 "cplus.met"
                        PPTREE _ptRes0=0;
#line 2425 "cplus.met"
                        _ptRes0= MakeTree(TYP_ARRAY, 2);
#line 2425 "cplus.met"
                        ReplaceTree(_ptRes0, 1, retTree );
#line 2425 "cplus.met"
                        ReplaceTree(_ptRes0, 2, expList );
#line 2425 "cplus.met"
                        retTree=_ptRes0;
#line 2425 "cplus.met"
                    }
#line 2425 "cplus.met"
                } else {
#line 2425 "cplus.met"
#line 2427 "cplus.met"
                    {
#line 2427 "cplus.met"
                        PPTREE _ptRes0=0;
#line 2427 "cplus.met"
                        _ptRes0= MakeTree(TYP_ARRAY, 2);
#line 2427 "cplus.met"
                        ReplaceTree(_ptRes0, 1, retTree );
#line 2427 "cplus.met"
                        retTree=_ptRes0;
#line 2427 "cplus.met"
                    }
#line 2427 "cplus.met"
                }
#line 2427 "cplus.met"
#line 2428 "cplus.met"
                (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 2428 "cplus.met"
                if (  !SEE_TOKEN( CFER,"]") || !(CommTerm(),1)) {
#line 2428 "cplus.met"
                    MulFreeTree(3,expList,retTree,valTree);
                    TOKEN_EXIT(new_declarator_exit,"]")
#line 2428 "cplus.met"
                } else {
#line 2428 "cplus.met"
                    tokenAhead = 0 ;
#line 2428 "cplus.met"
                }
#line 2428 "cplus.met"
#line 2428 "cplus.met"
            } 
#line 2428 "cplus.met"
#line 2430 "cplus.met"
            {
#line 2430 "cplus.met"
                _retValue = retTree ;
#line 2430 "cplus.met"
                goto new_declarator_ret;
#line 2430 "cplus.met"
                
#line 2430 "cplus.met"
            }
#line 2430 "cplus.met"
#line 2430 "cplus.met"
            break;
#line 2430 "cplus.met"
    }
#line 2430 "cplus.met"
#line 2430 "cplus.met"
#line 2432 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2432 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 2432 "cplus.met"
return((PPTREE) 0);
#line 2432 "cplus.met"

#line 2432 "cplus.met"
new_declarator_exit :
#line 2432 "cplus.met"

#line 2432 "cplus.met"
    _Debug = TRACE_RULE("new_declarator",TRACE_EXIT,(PPTREE)0);
#line 2432 "cplus.met"
    _funcLevel--;
#line 2432 "cplus.met"
    return((PPTREE) -1) ;
#line 2432 "cplus.met"

#line 2432 "cplus.met"
new_declarator_ret :
#line 2432 "cplus.met"
    
#line 2432 "cplus.met"
    _Debug = TRACE_RULE("new_declarator",TRACE_RETURN,_retValue);
#line 2432 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2432 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 2432 "cplus.met"
    return _retValue ;
#line 2432 "cplus.met"
}
#line 2432 "cplus.met"

#line 2432 "cplus.met"
#line 2555 "cplus.met"
PPTREE cplus::new_type_name ( int error_free)
#line 2555 "cplus.met"
{
#line 2555 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 2555 "cplus.met"
    int _value,_nbPre = 0 ;
#line 2555 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 2555 "cplus.met"
    int _Debug = TRACE_RULE("new_type_name",TRACE_ENTER,(PPTREE)0);
#line 2555 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 2555 "cplus.met"
#line 2555 "cplus.met"
    PPTREE retTree = (PPTREE) 0,valTree = (PPTREE) 0;
#line 2555 "cplus.met"
#line 2557 "cplus.met"
    if ( (retTree=NQUICK_CALL(_Tak(type_specifier)(error_free), 149, cplus))== (PPTREE) -1 ) {
#line 2557 "cplus.met"
        MulFreeTree(2,retTree,valTree);
        PROG_EXIT(new_type_name_exit,"new_type_name")
#line 2557 "cplus.met"
    }
#line 2557 "cplus.met"
#line 2558 "cplus.met"
    if (NPUSH_CALL_AFF_VERIF(valTree = ,_Tak(new_declarator), 102, cplus)){
#line 2558 "cplus.met"
#line 2559 "cplus.met"
        {
#line 2559 "cplus.met"
            PPTREE _ptRes0=0;
#line 2559 "cplus.met"
            _ptRes0= MakeTree(NEW_DECLARATOR, 2);
#line 2559 "cplus.met"
            ReplaceTree(_ptRes0, 1, retTree );
#line 2559 "cplus.met"
            ReplaceTree(_ptRes0, 2, valTree );
#line 2559 "cplus.met"
            valTree=_ptRes0;
#line 2559 "cplus.met"
        }
#line 2559 "cplus.met"
    } else {
#line 2559 "cplus.met"
#line 2561 "cplus.met"
        valTree = retTree ;
#line 2561 "cplus.met"
    }
#line 2561 "cplus.met"
#line 2562 "cplus.met"
    {
#line 2562 "cplus.met"
        _retValue = valTree ;
#line 2562 "cplus.met"
        goto new_type_name_ret;
#line 2562 "cplus.met"
        
#line 2562 "cplus.met"
    }
#line 2562 "cplus.met"
#line 2562 "cplus.met"
#line 2562 "cplus.met"

#line 2563 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2563 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 2563 "cplus.met"
return((PPTREE) 0);
#line 2563 "cplus.met"

#line 2563 "cplus.met"
new_type_name_exit :
#line 2563 "cplus.met"

#line 2563 "cplus.met"
    _Debug = TRACE_RULE("new_type_name",TRACE_EXIT,(PPTREE)0);
#line 2563 "cplus.met"
    _funcLevel--;
#line 2563 "cplus.met"
    return((PPTREE) -1) ;
#line 2563 "cplus.met"

#line 2563 "cplus.met"
new_type_name_ret :
#line 2563 "cplus.met"
    
#line 2563 "cplus.met"
    _Debug = TRACE_RULE("new_type_name",TRACE_RETURN,_retValue);
#line 2563 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2563 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 2563 "cplus.met"
    return _retValue ;
#line 2563 "cplus.met"
}
#line 2563 "cplus.met"

#line 2563 "cplus.met"
#line 3283 "cplus.met"
PPTREE cplus::none_statement ( int error_free)
#line 3283 "cplus.met"
{
#line 3283 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 3283 "cplus.met"
    int _value,_nbPre = 0 ;
#line 3283 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 3283 "cplus.met"
    int _Debug = TRACE_RULE("none_statement",TRACE_ENTER,(PPTREE)0);
#line 3283 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 3283 "cplus.met"
#line 3284 "cplus.met"
    {
#line 3284 "cplus.met"
        PPTREE _ptTree0=0;
#line 3284 "cplus.met"
        {
#line 3284 "cplus.met"
            PPTREE _ptRes1=0;
#line 3284 "cplus.met"
            _ptRes1= MakeTree(NONE, 0);
#line 3284 "cplus.met"
            _ptTree0=_ptRes1;
#line 3284 "cplus.met"
        }
#line 3284 "cplus.met"
        _retValue =_ptTree0;
#line 3284 "cplus.met"
        goto none_statement_ret;
#line 3284 "cplus.met"
    }
#line 3284 "cplus.met"
#line 3284 "cplus.met"
#line 3284 "cplus.met"

#line 3285 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 3285 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 3285 "cplus.met"
return((PPTREE) 0);
#line 3285 "cplus.met"

#line 3285 "cplus.met"
none_statement_exit :
#line 3285 "cplus.met"

#line 3285 "cplus.met"
    _Debug = TRACE_RULE("none_statement",TRACE_EXIT,(PPTREE)0);
#line 3285 "cplus.met"
    _funcLevel--;
#line 3285 "cplus.met"
    return((PPTREE) -1) ;
#line 3285 "cplus.met"

#line 3285 "cplus.met"
none_statement_ret :
#line 3285 "cplus.met"
    
#line 3285 "cplus.met"
    _Debug = TRACE_RULE("none_statement",TRACE_RETURN,_retValue);
#line 3285 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 3285 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 3285 "cplus.met"
    return _retValue ;
#line 3285 "cplus.met"
}
#line 3285 "cplus.met"

#line 3285 "cplus.met"
#line 3005 "cplus.met"
PPTREE cplus::operator_function_name ( int error_free)
#line 3005 "cplus.met"
{
#line 3005 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 3005 "cplus.met"
    int _value,_nbPre = 0 ;
#line 3005 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 3005 "cplus.met"
    int _Debug = TRACE_RULE("operator_function_name",TRACE_ENTER,(PPTREE)0);
#line 3005 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 3005 "cplus.met"
#line 3005 "cplus.met"
    PPTREE retTree = (PPTREE) 0,valTree = (PPTREE) 0,list = (PPTREE) 0;
#line 3005 "cplus.met"
#line 3007 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3007 "cplus.met"
    if (  !SEE_TOKEN( OPERATOR,"operator") || !(CommTerm(),1)) {
#line 3007 "cplus.met"
        MulFreeTree(3,list,retTree,valTree);
        TOKEN_EXIT(operator_function_name_exit,"operator")
#line 3007 "cplus.met"
    } else {
#line 3007 "cplus.met"
        tokenAhead = 0 ;
#line 3007 "cplus.met"
    }
#line 3007 "cplus.met"
#line 3008 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3008 "cplus.met"
    switch( lexEl.Value) {
#line 3008 "cplus.met"
#line 3009 "cplus.met"
        case NEW : 
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
                    ReplaceTree(_ptRes1, 1, MakeString ("new"));
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
        case DELETE : 
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
                    ReplaceTree(_ptRes1, 1, MakeString ("delete"));
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
        case PLUS : 
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
                    ReplaceTree(_ptRes1, 1, MakeString ("+"));
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
        case TIRE : 
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
                    ReplaceTree(_ptRes1, 1, MakeString ("-"));
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
        case ETOI : 
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
                    ReplaceTree(_ptRes1, 1, MakeString ("*"));
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
        case META : 
#line 3014 "cplus.met"
        case SLAS : 
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
                    ReplaceTree(_ptRes1, 1, MakeString ("/"));
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
        case POURC : 
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
                    ReplaceTree(_ptRes1, 1, MakeString ("%"));
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
        case CHAP : 
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
                    ReplaceTree(_ptRes1, 1, MakeString ("^"));
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
        case ETCO : 
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
                    ReplaceTree(_ptRes1, 1, MakeString ("&"));
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
        case VBAR : 
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
                    ReplaceTree(_ptRes1, 1, MakeString ("|"));
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
        case TILD : 
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
                    ReplaceTree(_ptRes1, 1, MakeString ("~"));
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
        case EXCL : 
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
                    ReplaceTree(_ptRes1, 1, MakeString ("!"));
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
        case EGAL : 
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
                    ReplaceTree(_ptRes1, 1, MakeString ("="));
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
        case SUPE : 
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
                    ReplaceTree(_ptRes1, 1, MakeString (">"));
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
        case INFE : 
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
                    ReplaceTree(_ptRes1, 1, MakeString ("<"));
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
        case PLUSEGAL : 
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
                    ReplaceTree(_ptRes1, 1, MakeString ("+="));
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
        case TIREEGAL : 
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
                    ReplaceTree(_ptRes1, 1, MakeString ("-="));
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
        case ETOIEGAL : 
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
                    ReplaceTree(_ptRes1, 1, MakeString ("*="));
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
        case SLASEGAL : 
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
                    ReplaceTree(_ptRes1, 1, MakeString ("/="));
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
        case POURCEGAL : 
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
                    ReplaceTree(_ptRes1, 1, MakeString ("%="));
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
        case CHAPEGAL : 
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
                    ReplaceTree(_ptRes1, 1, MakeString ("^="));
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
        case ETCOEGAL : 
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
                    ReplaceTree(_ptRes1, 1, MakeString ("&="));
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
        case VBAREGAL : 
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
                    ReplaceTree(_ptRes1, 1, MakeString ("|="));
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
        case EXCLEGAL : 
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
                    ReplaceTree(_ptRes1, 1, MakeString ("!="));
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
        case EGALEGAL : 
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
                    ReplaceTree(_ptRes1, 1, MakeString ("=="));
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
        case INFEEGAL : 
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
                    ReplaceTree(_ptRes1, 1, MakeString ("<="));
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
        case SUPEEGAL : 
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
                    ReplaceTree(_ptRes1, 1, MakeString (">="));
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
        case INFEINFE : 
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
                    ReplaceTree(_ptRes1, 1, MakeString ("<<"));
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
        case SUPESUPE : 
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
                    ReplaceTree(_ptRes1, 1, MakeString (">>"));
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
        case INFEINFEEGAL : 
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
                    ReplaceTree(_ptRes1, 1, MakeString ("<<="));
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
#line 3039 "cplus.met"
        case SUPESUPEEGAL : 
#line 3039 "cplus.met"
            tokenAhead = 0 ;
#line 3039 "cplus.met"
            CommTerm();
#line 3039 "cplus.met"
#line 3039 "cplus.met"
            {
#line 3039 "cplus.met"
                PPTREE _ptTree0=0;
#line 3039 "cplus.met"
                {
#line 3039 "cplus.met"
                    PPTREE _ptRes1=0;
#line 3039 "cplus.met"
                    _ptRes1= MakeTree(OPERATOR, 1);
#line 3039 "cplus.met"
                    ReplaceTree(_ptRes1, 1, MakeString (">>="));
#line 3039 "cplus.met"
                    _ptTree0=_ptRes1;
#line 3039 "cplus.met"
                }
#line 3039 "cplus.met"
                _retValue =_ptTree0;
#line 3039 "cplus.met"
                goto operator_function_name_ret;
#line 3039 "cplus.met"
            }
#line 3039 "cplus.met"
            break;
#line 3039 "cplus.met"
#line 3040 "cplus.met"
        case ETCOETCO : 
#line 3040 "cplus.met"
            tokenAhead = 0 ;
#line 3040 "cplus.met"
            CommTerm();
#line 3040 "cplus.met"
#line 3040 "cplus.met"
            {
#line 3040 "cplus.met"
                PPTREE _ptTree0=0;
#line 3040 "cplus.met"
                {
#line 3040 "cplus.met"
                    PPTREE _ptRes1=0;
#line 3040 "cplus.met"
                    _ptRes1= MakeTree(OPERATOR, 1);
#line 3040 "cplus.met"
                    ReplaceTree(_ptRes1, 1, MakeString ("&&"));
#line 3040 "cplus.met"
                    _ptTree0=_ptRes1;
#line 3040 "cplus.met"
                }
#line 3040 "cplus.met"
                _retValue =_ptTree0;
#line 3040 "cplus.met"
                goto operator_function_name_ret;
#line 3040 "cplus.met"
            }
#line 3040 "cplus.met"
            break;
#line 3040 "cplus.met"
#line 3041 "cplus.met"
        case VBARVBAR : 
#line 3041 "cplus.met"
            tokenAhead = 0 ;
#line 3041 "cplus.met"
            CommTerm();
#line 3041 "cplus.met"
#line 3041 "cplus.met"
            {
#line 3041 "cplus.met"
                PPTREE _ptTree0=0;
#line 3041 "cplus.met"
                {
#line 3041 "cplus.met"
                    PPTREE _ptRes1=0;
#line 3041 "cplus.met"
                    _ptRes1= MakeTree(OPERATOR, 1);
#line 3041 "cplus.met"
                    ReplaceTree(_ptRes1, 1, MakeString ("||"));
#line 3041 "cplus.met"
                    _ptTree0=_ptRes1;
#line 3041 "cplus.met"
                }
#line 3041 "cplus.met"
                _retValue =_ptTree0;
#line 3041 "cplus.met"
                goto operator_function_name_ret;
#line 3041 "cplus.met"
            }
#line 3041 "cplus.met"
            break;
#line 3041 "cplus.met"
#line 3042 "cplus.met"
        case PLUSPLUS : 
#line 3042 "cplus.met"
            tokenAhead = 0 ;
#line 3042 "cplus.met"
            CommTerm();
#line 3042 "cplus.met"
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
                    ReplaceTree(_ptRes1, 1, MakeString ("++"));
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
            break;
#line 3042 "cplus.met"
#line 3043 "cplus.met"
        case TIRETIRE : 
#line 3043 "cplus.met"
            tokenAhead = 0 ;
#line 3043 "cplus.met"
            CommTerm();
#line 3043 "cplus.met"
#line 3043 "cplus.met"
            {
#line 3043 "cplus.met"
                PPTREE _ptTree0=0;
#line 3043 "cplus.met"
                {
#line 3043 "cplus.met"
                    PPTREE _ptRes1=0;
#line 3043 "cplus.met"
                    _ptRes1= MakeTree(OPERATOR, 1);
#line 3043 "cplus.met"
                    ReplaceTree(_ptRes1, 1, MakeString ("--"));
#line 3043 "cplus.met"
                    _ptTree0=_ptRes1;
#line 3043 "cplus.met"
                }
#line 3043 "cplus.met"
                _retValue =_ptTree0;
#line 3043 "cplus.met"
                goto operator_function_name_ret;
#line 3043 "cplus.met"
            }
#line 3043 "cplus.met"
            break;
#line 3043 "cplus.met"
#line 3044 "cplus.met"
        case VIRG : 
#line 3044 "cplus.met"
            tokenAhead = 0 ;
#line 3044 "cplus.met"
            CommTerm();
#line 3044 "cplus.met"
#line 3044 "cplus.met"
            {
#line 3044 "cplus.met"
                PPTREE _ptTree0=0;
#line 3044 "cplus.met"
                {
#line 3044 "cplus.met"
                    PPTREE _ptRes1=0;
#line 3044 "cplus.met"
                    _ptRes1= MakeTree(OPERATOR, 1);
#line 3044 "cplus.met"
                    ReplaceTree(_ptRes1, 1, MakeString (","));
#line 3044 "cplus.met"
                    _ptTree0=_ptRes1;
#line 3044 "cplus.met"
                }
#line 3044 "cplus.met"
                _retValue =_ptTree0;
#line 3044 "cplus.met"
                goto operator_function_name_ret;
#line 3044 "cplus.met"
            }
#line 3044 "cplus.met"
            break;
#line 3044 "cplus.met"
#line 3045 "cplus.met"
        case TIRESUPE : 
#line 3045 "cplus.met"
            tokenAhead = 0 ;
#line 3045 "cplus.met"
            CommTerm();
#line 3045 "cplus.met"
#line 3045 "cplus.met"
            {
#line 3045 "cplus.met"
                PPTREE _ptTree0=0;
#line 3045 "cplus.met"
                {
#line 3045 "cplus.met"
                    PPTREE _ptRes1=0;
#line 3045 "cplus.met"
                    _ptRes1= MakeTree(OPERATOR, 1);
#line 3045 "cplus.met"
                    ReplaceTree(_ptRes1, 1, MakeString ("->"));
#line 3045 "cplus.met"
                    _ptTree0=_ptRes1;
#line 3045 "cplus.met"
                }
#line 3045 "cplus.met"
                _retValue =_ptTree0;
#line 3045 "cplus.met"
                goto operator_function_name_ret;
#line 3045 "cplus.met"
            }
#line 3045 "cplus.met"
            break;
#line 3045 "cplus.met"
#line 3046 "cplus.met"
        case TIRESUPEETOI : 
#line 3046 "cplus.met"
            tokenAhead = 0 ;
#line 3046 "cplus.met"
            CommTerm();
#line 3046 "cplus.met"
#line 3046 "cplus.met"
            {
#line 3046 "cplus.met"
                PPTREE _ptTree0=0;
#line 3046 "cplus.met"
                {
#line 3046 "cplus.met"
                    PPTREE _ptRes1=0;
#line 3046 "cplus.met"
                    _ptRes1= MakeTree(OPERATOR, 1);
#line 3046 "cplus.met"
                    ReplaceTree(_ptRes1, 1, MakeString ("->*"));
#line 3046 "cplus.met"
                    _ptTree0=_ptRes1;
#line 3046 "cplus.met"
                }
#line 3046 "cplus.met"
                _retValue =_ptTree0;
#line 3046 "cplus.met"
                goto operator_function_name_ret;
#line 3046 "cplus.met"
            }
#line 3046 "cplus.met"
            break;
#line 3046 "cplus.met"
#line 3049 "cplus.met"
        case POUV : 
#line 3049 "cplus.met"
            tokenAhead = 0 ;
#line 3049 "cplus.met"
            CommTerm();
#line 3049 "cplus.met"
#line 3048 "cplus.met"
#line 3049 "cplus.met"
            (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3049 "cplus.met"
            if (  !SEE_TOKEN( PFER,")") || !(CommTerm(),1)) {
#line 3049 "cplus.met"
                MulFreeTree(3,list,retTree,valTree);
                TOKEN_EXIT(operator_function_name_exit,")")
#line 3049 "cplus.met"
            } else {
#line 3049 "cplus.met"
                tokenAhead = 0 ;
#line 3049 "cplus.met"
            }
#line 3049 "cplus.met"
#line 3050 "cplus.met"
            {
#line 3050 "cplus.met"
                PPTREE _ptTree0=0;
#line 3050 "cplus.met"
                {
#line 3050 "cplus.met"
                    PPTREE _ptRes1=0;
#line 3050 "cplus.met"
                    _ptRes1= MakeTree(OPERATOR, 1);
#line 3050 "cplus.met"
                    ReplaceTree(_ptRes1, 1, MakeString ("()"));
#line 3050 "cplus.met"
                    _ptTree0=_ptRes1;
#line 3050 "cplus.met"
                }
#line 3050 "cplus.met"
                _retValue =_ptTree0;
#line 3050 "cplus.met"
                goto operator_function_name_ret;
#line 3050 "cplus.met"
            }
#line 3050 "cplus.met"
#line 3050 "cplus.met"
            break;
#line 3050 "cplus.met"
#line 3054 "cplus.met"
        case COUV : 
#line 3054 "cplus.met"
            tokenAhead = 0 ;
#line 3054 "cplus.met"
            CommTerm();
#line 3054 "cplus.met"
#line 3053 "cplus.met"
#line 3054 "cplus.met"
            (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3054 "cplus.met"
            if (  !SEE_TOKEN( CFER,"]") || !(CommTerm(),1)) {
#line 3054 "cplus.met"
                MulFreeTree(3,list,retTree,valTree);
                TOKEN_EXIT(operator_function_name_exit,"]")
#line 3054 "cplus.met"
            } else {
#line 3054 "cplus.met"
                tokenAhead = 0 ;
#line 3054 "cplus.met"
            }
#line 3054 "cplus.met"
#line 3055 "cplus.met"
            {
#line 3055 "cplus.met"
                PPTREE _ptTree0=0;
#line 3055 "cplus.met"
                {
#line 3055 "cplus.met"
                    PPTREE _ptRes1=0;
#line 3055 "cplus.met"
                    _ptRes1= MakeTree(OPERATOR, 1);
#line 3055 "cplus.met"
                    ReplaceTree(_ptRes1, 1, MakeString ("[]"));
#line 3055 "cplus.met"
                    _ptTree0=_ptRes1;
#line 3055 "cplus.met"
                }
#line 3055 "cplus.met"
                _retValue =_ptTree0;
#line 3055 "cplus.met"
                goto operator_function_name_ret;
#line 3055 "cplus.met"
            }
#line 3055 "cplus.met"
#line 3055 "cplus.met"
            break;
#line 3055 "cplus.met"
#line 3055 "cplus.met"
        default : 
#line 3055 "cplus.met"
#line 3055 "cplus.met"
            break;
#line 3055 "cplus.met"
    }
#line 3055 "cplus.met"
#line 3059 "cplus.met"
    if (NPUSH_CALL_AFF_VERIF(retTree = ,_Tak(const_or_volatile), 31, cplus)){
#line 3059 "cplus.met"
#line 3060 "cplus.met"
        {
#line 3060 "cplus.met"
            PPTREE _ptRes0=0;
#line 3060 "cplus.met"
            _ptRes0= MakeTree(FOR_DECLARATION, 3);
#line 3060 "cplus.met"
            ReplaceTree(_ptRes0, 1, retTree );
#line 3060 "cplus.met"
            retTree=_ptRes0;
#line 3060 "cplus.met"
        }
#line 3060 "cplus.met"
    } else {
#line 3060 "cplus.met"
#line 3062 "cplus.met"
        {
#line 3062 "cplus.met"
            PPTREE _ptRes0=0;
#line 3062 "cplus.met"
            _ptRes0= MakeTree(FOR_DECLARATION, 3);
#line 3062 "cplus.met"
            retTree=_ptRes0;
#line 3062 "cplus.met"
        }
#line 3062 "cplus.met"
    }
#line 3062 "cplus.met"
#line 3063 "cplus.met"
    {
#line 3063 "cplus.met"
        PPTREE _ptTree0=0;
#line 3063 "cplus.met"
        if ( (_ptTree0=NQUICK_CALL(_Tak(type_specifier)(error_free), 149, cplus))== (PPTREE) -1 ) {
#line 3063 "cplus.met"
            MulFreeTree(4,_ptTree0,list,retTree,valTree);
            PROG_EXIT(operator_function_name_exit,"operator_function_name")
#line 3063 "cplus.met"
        }
#line 3063 "cplus.met"
        ReplaceTree(retTree , 2 , _ptTree0);
#line 3063 "cplus.met"
    }
#line 3063 "cplus.met"
#line 3064 "cplus.met"
    if (NPUSH_CALL_AFF_VERIF(valTree = ,_Tak(ptr_operator), 116, cplus)){
#line 3064 "cplus.met"
#line 3065 "cplus.met"
#line 3066 "cplus.met"
        list =AddList(list ,valTree );
#line 3066 "cplus.met"
#line 3067 "cplus.met"
        ReplaceTree(retTree ,3 ,list );
#line 3067 "cplus.met"
#line 3067 "cplus.met"
#line 3067 "cplus.met"
    }
#line 3067 "cplus.met"
#line 3069 "cplus.met"
    {
#line 3069 "cplus.met"
        PPTREE _ptTree0=0;
#line 3069 "cplus.met"
        {
#line 3069 "cplus.met"
            PPTREE _ptRes1=0;
#line 3069 "cplus.met"
            _ptRes1= MakeTree(OPERATOR, 1);
#line 3069 "cplus.met"
            ReplaceTree(_ptRes1, 1, retTree );
#line 3069 "cplus.met"
            _ptTree0=_ptRes1;
#line 3069 "cplus.met"
        }
#line 3069 "cplus.met"
        _retValue =_ptTree0;
#line 3069 "cplus.met"
        goto operator_function_name_ret;
#line 3069 "cplus.met"
    }
#line 3069 "cplus.met"
#line 3069 "cplus.met"
#line 3069 "cplus.met"

#line 3070 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 3070 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 3070 "cplus.met"
return((PPTREE) 0);
#line 3070 "cplus.met"

#line 3070 "cplus.met"
operator_function_name_exit :
#line 3070 "cplus.met"

#line 3070 "cplus.met"
    _Debug = TRACE_RULE("operator_function_name",TRACE_EXIT,(PPTREE)0);
#line 3070 "cplus.met"
    _funcLevel--;
#line 3070 "cplus.met"
    return((PPTREE) -1) ;
#line 3070 "cplus.met"

#line 3070 "cplus.met"
operator_function_name_ret :
#line 3070 "cplus.met"
    
#line 3070 "cplus.met"
    _Debug = TRACE_RULE("operator_function_name",TRACE_RETURN,_retValue);
#line 3070 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 3070 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 3070 "cplus.met"
    return _retValue ;
#line 3070 "cplus.met"
}
#line 3070 "cplus.met"

#line 3070 "cplus.met"
#line 832 "cplus.met"
PPTREE cplus::other_config ( int error_free)
#line 832 "cplus.met"
{
#line 832 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 832 "cplus.met"
    int _value,_nbPre = 0 ;
#line 832 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 832 "cplus.met"
    int _Debug = TRACE_RULE("other_config",TRACE_ENTER,(PPTREE)0);
#line 832 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 832 "cplus.met"
#line 833 "cplus.met"
    {
#line 833 "cplus.met"
        PPTREE _ptTree0=0;
#line 833 "cplus.met"
        {
#line 833 "cplus.met"
            PPTREE _ptTree1=0,_ptRes1=0;
#line 833 "cplus.met"
            _ptRes1= MakeTree(PRAGMA, 1);
#line 833 "cplus.met"
            (tokenAhead == 8|| (LexPragma(),TRACE_LEX(1)));
#line 833 "cplus.met"
            if ( ! TERM_OR_META(PRAGMA_CONTENT,"PRAGMA_CONTENT") || !(BUILD_TERM_META(_ptTree1))) {
#line 833 "cplus.met"
                MulFreeTree(3,_ptRes1,_ptTree1,_ptTree0);
                TOKEN_EXIT(other_config_exit,"PRAGMA_CONTENT")
#line 833 "cplus.met"
            } else {
#line 833 "cplus.met"
                tokenAhead = 0 ;
#line 833 "cplus.met"
            }
#line 833 "cplus.met"
            ReplaceTree(_ptRes1, 1, _ptTree1);
#line 833 "cplus.met"
            _ptTree0=_ptRes1;
#line 833 "cplus.met"
        }
#line 833 "cplus.met"
        _retValue =_ptTree0;
#line 833 "cplus.met"
        goto other_config_ret;
#line 833 "cplus.met"
    }
#line 833 "cplus.met"
#line 833 "cplus.met"
#line 833 "cplus.met"

#line 834 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 834 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 834 "cplus.met"
return((PPTREE) 0);
#line 834 "cplus.met"

#line 834 "cplus.met"
other_config_exit :
#line 834 "cplus.met"

#line 834 "cplus.met"
    _Debug = TRACE_RULE("other_config",TRACE_EXIT,(PPTREE)0);
#line 834 "cplus.met"
    _funcLevel--;
#line 834 "cplus.met"
    return((PPTREE) -1) ;
#line 834 "cplus.met"

#line 834 "cplus.met"
other_config_ret :
#line 834 "cplus.met"
    
#line 834 "cplus.met"
    _Debug = TRACE_RULE("other_config",TRACE_RETURN,_retValue);
#line 834 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 834 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 834 "cplus.met"
    return _retValue ;
#line 834 "cplus.met"
}
#line 834 "cplus.met"

#line 834 "cplus.met"
#line 3101 "cplus.met"
PPTREE cplus::parameter_list ( int error_free)
#line 3101 "cplus.met"
{
#line 3101 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 3101 "cplus.met"
    int _value,_nbPre = 0 ;
#line 3101 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 3101 "cplus.met"
    int _Debug = TRACE_RULE("parameter_list",TRACE_ENTER,(PPTREE)0);
#line 3101 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 3101 "cplus.met"
#line 3101 "cplus.met"
    PPTREE _addlist1 = (PPTREE) 0;
#line 3101 "cplus.met"
#line 3101 "cplus.met"
    PPTREE paramList = (PPTREE) 0,none = (PPTREE) 0;
#line 3101 "cplus.met"
#line 3103 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3103 "cplus.met"
    if (  !SEE_TOKEN( POUV,"(") || !(CommTerm(),1)) {
#line 3103 "cplus.met"
        MulFreeTree(3,_addlist1,none,paramList);
        TOKEN_EXIT(parameter_list_exit,"(")
#line 3103 "cplus.met"
    } else {
#line 3103 "cplus.met"
        tokenAhead = 0 ;
#line 3103 "cplus.met"
    }
#line 3103 "cplus.met"
#line 3104 "cplus.met"
    if ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN( IDENT,"IDENT")){
#line 3104 "cplus.met"
#line 3105 "cplus.met"
#line 3106 "cplus.met"
         { int exit = 0 ;
#line 3106 "cplus.met"
#line 3107 "cplus.met"
        {
#line 3107 "cplus.met"
            PPTREE _ptTree0=0;
#line 3107 "cplus.met"
            {
#line 3107 "cplus.met"
                PPTREE _ptTree1=0,_ptRes1=0;
#line 3107 "cplus.met"
                _ptRes1= MakeTree(IDENT, 1);
#line 3107 "cplus.met"
                (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3107 "cplus.met"
                if ( ! TERM_OR_META(IDENT,"IDENT") || !(BUILD_TERM_META(_ptTree1))) {
#line 3107 "cplus.met"
                    MulFreeTree(6,_ptRes1,_ptTree1,_ptTree0,_addlist1,none,paramList);
                    TOKEN_EXIT(parameter_list_exit,"IDENT")
#line 3107 "cplus.met"
                } else {
#line 3107 "cplus.met"
                    tokenAhead = 0 ;
#line 3107 "cplus.met"
                }
#line 3107 "cplus.met"
                ReplaceTree(_ptRes1, 1, _ptTree1);
#line 3107 "cplus.met"
                _ptTree0=_ptRes1;
#line 3107 "cplus.met"
            }
#line 3107 "cplus.met"
            paramList =AddList(paramList , _ptTree0);
#line 3107 "cplus.met"
        }
#line 3107 "cplus.met"
#line 3107 "cplus.met"
        _addlist1 = paramList ;
#line 3107 "cplus.met"
#line 3108 "cplus.met"
        while ((! ( exit )) && 
#line 3108 "cplus.met"
              ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN(VIRG,",") && (tokenAhead = 0,CommTerm(),1))) { 
#line 3108 "cplus.met"
#line 3109 "cplus.met"
            if ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN( IDENT,"IDENT")){
#line 3109 "cplus.met"
#line 3110 "cplus.met"
#line 3110 "cplus.met"
                {
#line 3110 "cplus.met"
                    PPTREE _ptTree0=0;
#line 3110 "cplus.met"
                    {
#line 3110 "cplus.met"
                        PPTREE _ptTree1=0,_ptRes1=0;
#line 3110 "cplus.met"
                        _ptRes1= MakeTree(IDENT, 1);
#line 3110 "cplus.met"
                        (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3110 "cplus.met"
                        if ( ! TERM_OR_META(IDENT,"IDENT") || !(BUILD_TERM_META(_ptTree1))) {
#line 3110 "cplus.met"
                            MulFreeTree(6,_ptRes1,_ptTree1,_ptTree0,_addlist1,none,paramList);
                            TOKEN_EXIT(parameter_list_exit,"IDENT")
#line 3110 "cplus.met"
                        } else {
#line 3110 "cplus.met"
                            tokenAhead = 0 ;
#line 3110 "cplus.met"
                        }
#line 3110 "cplus.met"
                        ReplaceTree(_ptRes1, 1, _ptTree1);
#line 3110 "cplus.met"
                        _ptTree0=_ptRes1;
#line 3110 "cplus.met"
                    }
#line 3110 "cplus.met"
                    _addlist1 =AddList(_addlist1 , _ptTree0);
#line 3110 "cplus.met"
                }
#line 3110 "cplus.met"
#line 3110 "cplus.met"
                if (paramList){
#line 3110 "cplus.met"
#line 3110 "cplus.met"
                    _addlist1 = SonTree (_addlist1 ,2 );
#line 3110 "cplus.met"
                } else {
#line 3110 "cplus.met"
#line 3110 "cplus.met"
                    paramList = _addlist1 ;
#line 3110 "cplus.met"
                }
#line 3110 "cplus.met"
            } else {
#line 3110 "cplus.met"
#line 3112 "cplus.met"
#line 3113 "cplus.met"
                {
#line 3113 "cplus.met"
                    PPTREE _ptTree0=0;
#line 3113 "cplus.met"
                    {
#line 3113 "cplus.met"
                        PPTREE _ptRes1=0;
#line 3113 "cplus.met"
                        _ptRes1= MakeTree(VAR_LIST, 0);
#line 3113 "cplus.met"
                        _ptTree0=_ptRes1;
#line 3113 "cplus.met"
                    }
#line 3113 "cplus.met"
                    _addlist1 =AddList(_addlist1 , _ptTree0);
#line 3113 "cplus.met"
                }
#line 3113 "cplus.met"
#line 3113 "cplus.met"
                if (paramList){
#line 3113 "cplus.met"
#line 3113 "cplus.met"
                    _addlist1 = SonTree (_addlist1 ,2 );
#line 3113 "cplus.met"
                } else {
#line 3113 "cplus.met"
#line 3113 "cplus.met"
                    paramList = _addlist1 ;
#line 3113 "cplus.met"
                }
#line 3113 "cplus.met"
#line 3114 "cplus.met"
                 exit = 1 ;
#line 3114 "cplus.met"
#line 3115 "cplus.met"
                if ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN(POINPOINPOIN,"...") && (tokenAhead = 0,CommTerm(),1)){
#line 3115 "cplus.met"
#line 3115 "cplus.met"
                }
#line 3115 "cplus.met"
#line 3115 "cplus.met"
            }
#line 3115 "cplus.met"
        } 
#line 3115 "cplus.met"
#line 3118 "cplus.met"
        if ((! ( exit )) && 
#line 3118 "cplus.met"
           ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN(POINPOINPOIN,"...") && (tokenAhead = 0,CommTerm(),1))){
#line 3118 "cplus.met"
#line 3119 "cplus.met"
            {
#line 3119 "cplus.met"
                PPTREE _ptTree0=0;
#line 3119 "cplus.met"
                {
#line 3119 "cplus.met"
                    PPTREE _ptRes1=0;
#line 3119 "cplus.met"
                    _ptRes1= MakeTree(VAR_LIST, 0);
#line 3119 "cplus.met"
                    _ptTree0=_ptRes1;
#line 3119 "cplus.met"
                }
#line 3119 "cplus.met"
                paramList =AddList(paramList , _ptTree0);
#line 3119 "cplus.met"
            }
#line 3119 "cplus.met"
#line 3119 "cplus.met"
        }
#line 3119 "cplus.met"
#line 3120 "cplus.met"
         } 
#line 3120 "cplus.met"
#line 3120 "cplus.met"
#line 3120 "cplus.met"
    } else {
#line 3120 "cplus.met"
#line 3123 "cplus.met"
        paramList =AddList(paramList ,none );
#line 3123 "cplus.met"
    }
#line 3123 "cplus.met"
#line 3124 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3124 "cplus.met"
    if (  !SEE_TOKEN( PFER,")") || !(CommTerm(),1)) {
#line 3124 "cplus.met"
        MulFreeTree(3,_addlist1,none,paramList);
        TOKEN_EXIT(parameter_list_exit,")")
#line 3124 "cplus.met"
    } else {
#line 3124 "cplus.met"
        tokenAhead = 0 ;
#line 3124 "cplus.met"
    }
#line 3124 "cplus.met"
#line 3125 "cplus.met"
    {
#line 3125 "cplus.met"
        _retValue = paramList ;
#line 3125 "cplus.met"
        goto parameter_list_ret;
#line 3125 "cplus.met"
        
#line 3125 "cplus.met"
    }
#line 3125 "cplus.met"
#line 3125 "cplus.met"
#line 3125 "cplus.met"

#line 3126 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 3126 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 3126 "cplus.met"
return((PPTREE) 0);
#line 3126 "cplus.met"

#line 3126 "cplus.met"
parameter_list_exit :
#line 3126 "cplus.met"

#line 3126 "cplus.met"
    _Debug = TRACE_RULE("parameter_list",TRACE_EXIT,(PPTREE)0);
#line 3126 "cplus.met"
    _funcLevel--;
#line 3126 "cplus.met"
    return((PPTREE) -1) ;
#line 3126 "cplus.met"

#line 3126 "cplus.met"
parameter_list_ret :
#line 3126 "cplus.met"
    
#line 3126 "cplus.met"
    _Debug = TRACE_RULE("parameter_list",TRACE_RETURN,_retValue);
#line 3126 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 3126 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 3126 "cplus.met"
    return _retValue ;
#line 3126 "cplus.met"
}
#line 3126 "cplus.met"

#line 3126 "cplus.met"
