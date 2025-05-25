/*************************************************************************/
/*                                                                       */
/*        Produced by MetaGen version 2.0  -    1989-2006                 */
/*       Syntaxic Analyzer Meta Generator developped by                  */
/*                  Eric Lavillonniere                                   */
/*                                                                       */
/*************************************************************************/

#include "token.h"
#include "cplus.h"


#line 3696 "cplus.met"
PPTREE cplus::name_space ( int error_free)
#line 3696 "cplus.met"
{
#line 3696 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 3696 "cplus.met"
    int _value,_nbPre = 0 ;
#line 3696 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 3696 "cplus.met"
    int _Debug = TRACE_RULE("name_space",TRACE_ENTER,(PPTREE)0);
#line 3696 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 3696 "cplus.met"
#line 3696 "cplus.met"
    PPTREE _addlist1 = (PPTREE) 0;
#line 3696 "cplus.met"
#line 3696 "cplus.met"
    PPTREE list = (PPTREE) 0,retTree = (PPTREE) 0,ident = (PPTREE) 0,attrib = (PPTREE) 0;
#line 3696 "cplus.met"
#line 3698 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3698 "cplus.met"
    switch( lexEl.Value) {
#line 3698 "cplus.met"
#line 3699 "cplus.met"
        case NAMESPACE : 
#line 3699 "cplus.met"
            tokenAhead = 0 ;
#line 3699 "cplus.met"
            CommTerm();
#line 3699 "cplus.met"
#line 3700 "cplus.met"
#line 3702 "cplus.met"
            if ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&TERM_OR_META(IDENT,"IDENT") && !(tokenAhead = 0) && ( BUILD_TERM_META(ident))) {
#line 3702 "cplus.met"
#line 3704 "cplus.met"
                {
#line 3704 "cplus.met"
                    PPTREE _ptRes0=0;
#line 3704 "cplus.met"
                    _ptRes0= MakeTree(IDENT, 1);
#line 3704 "cplus.met"
                    ReplaceTree(_ptRes0, 1, ident );
#line 3704 "cplus.met"
                    ident=_ptRes0;
#line 3704 "cplus.met"
                }
#line 3704 "cplus.met"
            }
#line 3704 "cplus.met"
#line 3705 "cplus.met"
            if (NPUSH_CALL_AFF_VERIF(attrib = ,_Tak(attribute_call), 21, cplus)){
#line 3705 "cplus.met"
#line 3705 "cplus.met"
            }
#line 3705 "cplus.met"
#line 3708 "cplus.met"
            (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3708 "cplus.met"
            switch( lexEl.Value) {
#line 3708 "cplus.met"
#line 3712 "cplus.met"
                case AOUV : 
#line 3712 "cplus.met"
                    tokenAhead = 0 ;
#line 3712 "cplus.met"
                    CommTerm();
#line 3712 "cplus.met"
#line 3711 "cplus.met"
#line 3712 "cplus.met"
                    {
#line 3712 "cplus.met"
                        PPTREE _ptRes0=0;
#line 3712 "cplus.met"
                        _ptRes0= MakeTree(NAMESPACE, 3);
#line 3712 "cplus.met"
                        ReplaceTree(_ptRes0, 1, ident );
#line 3712 "cplus.met"
                        ReplaceTree(_ptRes0, 3, attrib );
#line 3712 "cplus.met"
                        retTree=_ptRes0;
#line 3712 "cplus.met"
                    }
#line 3712 "cplus.met"
#line 3712 "cplus.met"
                    _addlist1 = list ;
#line 3712 "cplus.met"
#line 3713 "cplus.met"
                    while (! ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN(AFER,"}") && (tokenAhead = 0,CommTerm(),1))) { 
#line 3713 "cplus.met"
#line 3714 "cplus.met"
#line 3715 "cplus.met"
                        {
#line 3715 "cplus.met"
                            PPTREE _ptTree0=0;
#line 3715 "cplus.met"
                            if ( (_ptTree0=NQUICK_CALL(_Tak(ext_all)(error_free), 68, cplus))== (PPTREE) -1 ) {
#line 3715 "cplus.met"
                                MulFreeTree(6,_ptTree0,_addlist1,attrib,ident,list,retTree);
                                PROG_EXIT(name_space_exit,"name_space")
#line 3715 "cplus.met"
                            }
#line 3715 "cplus.met"
                            _addlist1 =AddList(_addlist1 , _ptTree0);
#line 3715 "cplus.met"
                        }
#line 3715 "cplus.met"
#line 3715 "cplus.met"
                        if (list){
#line 3715 "cplus.met"
#line 3715 "cplus.met"
                            _addlist1 = SonTree (_addlist1 ,2 );
#line 3715 "cplus.met"
                        } else {
#line 3715 "cplus.met"
#line 3715 "cplus.met"
                            list = _addlist1 ;
#line 3715 "cplus.met"
                        }
#line 3715 "cplus.met"
#line 3715 "cplus.met"
                    } 
#line 3715 "cplus.met"
#line 3717 "cplus.met"
                    {
#line 3717 "cplus.met"
                        PPTREE _ptTree0=0;
#line 3717 "cplus.met"
                        if ( (_ptTree0=NQUICK_CALL(_Tak(none_statement)(error_free), 107, cplus))== (PPTREE) -1 ) {
#line 3717 "cplus.met"
                            MulFreeTree(6,_ptTree0,_addlist1,attrib,ident,list,retTree);
                            PROG_EXIT(name_space_exit,"name_space")
#line 3717 "cplus.met"
                        }
#line 3717 "cplus.met"
                        list =AddList(list , _ptTree0);
#line 3717 "cplus.met"
                    }
#line 3717 "cplus.met"
#line 3718 "cplus.met"
                    {
#line 3718 "cplus.met"
                        PPTREE _ptTree0=0;
#line 3718 "cplus.met"
                        {
#line 3718 "cplus.met"
                            PPTREE _ptRes1=0;
#line 3718 "cplus.met"
                            _ptRes1= MakeTree(COMPOUND_EXT, 1);
#line 3718 "cplus.met"
                            ReplaceTree(_ptRes1, 1, list );
#line 3718 "cplus.met"
                            _ptTree0=_ptRes1;
#line 3718 "cplus.met"
                        }
#line 3718 "cplus.met"
                        ReplaceTree(retTree , 2 , _ptTree0);
#line 3718 "cplus.met"
                    }
#line 3718 "cplus.met"
#line 3718 "cplus.met"
                    break;
#line 3718 "cplus.met"
#line 3722 "cplus.met"
                case EGAL : 
#line 3722 "cplus.met"
                    tokenAhead = 0 ;
#line 3722 "cplus.met"
                    CommTerm();
#line 3722 "cplus.met"
#line 3721 "cplus.met"
#line 3722 "cplus.met"
                    if ((ident == (PPTREE) 0 )){
#line 3722 "cplus.met"
#line 3723 "cplus.met"
                        
#line 3723 "cplus.met"
                        MulFreeTree(5,_addlist1,attrib,ident,list,retTree);
                        LEX_EXIT ("",0);
#line 3723 "cplus.met"
                        goto name_space_exit;
#line 3723 "cplus.met"
#line 3723 "cplus.met"
                    }
#line 3723 "cplus.met"
#line 3724 "cplus.met"
                    {
#line 3724 "cplus.met"
                        PPTREE _ptTree0=0,_ptRes0=0;
#line 3724 "cplus.met"
                        _ptRes0= MakeTree(NAMESPACE_ALIAS, 2);
#line 3724 "cplus.met"
                        ReplaceTree(_ptRes0, 1, ident );
#line 3724 "cplus.met"
                        if ( (_ptTree0=NQUICK_CALL(_Tak(complete_class_name)(error_free), 31, cplus))== (PPTREE) -1 ) {
#line 3724 "cplus.met"
                            MulFreeTree(7,_ptRes0,_ptTree0,_addlist1,attrib,ident,list,retTree);
                            PROG_EXIT(name_space_exit,"name_space")
#line 3724 "cplus.met"
                        }
#line 3724 "cplus.met"
                        ReplaceTree(_ptRes0, 2, _ptTree0);
#line 3724 "cplus.met"
                        retTree=_ptRes0;
#line 3724 "cplus.met"
                    }
#line 3724 "cplus.met"
#line 3724 "cplus.met"
                    break;
#line 3724 "cplus.met"
                default :
#line 3724 "cplus.met"
                    MulFreeTree(5,_addlist1,attrib,ident,list,retTree);
                    CASE_EXIT(name_space_exit,"either { or =")
#line 3724 "cplus.met"
                    break;
#line 3724 "cplus.met"
            }
#line 3724 "cplus.met"
#line 3724 "cplus.met"
            break;
#line 3724 "cplus.met"
#line 3728 "cplus.met"
        case USING : 
#line 3728 "cplus.met"
            tokenAhead = 0 ;
#line 3728 "cplus.met"
            CommTerm();
#line 3728 "cplus.met"
#line 3729 "cplus.met"
#line 3730 "cplus.met"
            if ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN(NAMESPACE,"namespace") && (tokenAhead = 0,CommTerm(),1)){
#line 3730 "cplus.met"
#line 3731 "cplus.met"
#line 3732 "cplus.met"
                if (NPUSH_CALL_AFF_VERIF(attrib = ,_Tak(attribute_call), 21, cplus)){
#line 3732 "cplus.met"
#line 3732 "cplus.met"
                }
#line 3732 "cplus.met"
#line 3734 "cplus.met"
                {
#line 3734 "cplus.met"
                    PPTREE _ptTree0=0,_ptRes0=0;
#line 3734 "cplus.met"
                    _ptRes0= MakeTree(USING_NAMESPACE, 2);
#line 3734 "cplus.met"
                    if ( (_ptTree0=NQUICK_CALL(_Tak(complete_class_name)(error_free), 31, cplus))== (PPTREE) -1 ) {
#line 3734 "cplus.met"
                        MulFreeTree(7,_ptRes0,_ptTree0,_addlist1,attrib,ident,list,retTree);
                        PROG_EXIT(name_space_exit,"name_space")
#line 3734 "cplus.met"
                    }
#line 3734 "cplus.met"
                    ReplaceTree(_ptRes0, 1, _ptTree0);
#line 3734 "cplus.met"
                    ReplaceTree(_ptRes0, 2, attrib );
#line 3734 "cplus.met"
                    retTree=_ptRes0;
#line 3734 "cplus.met"
                }
#line 3734 "cplus.met"
#line 3734 "cplus.met"
#line 3734 "cplus.met"
            } else {
#line 3734 "cplus.met"
#line 3737 "cplus.met"
                {
#line 3737 "cplus.met"
                    PPTREE _ptTree0=0,_ptRes0=0;
#line 3737 "cplus.met"
                    _ptRes0= MakeTree(USING, 1);
#line 3737 "cplus.met"
                    if ( (_ptTree0=NQUICK_CALL(_Tak(complete_class_name)(error_free), 31, cplus))== (PPTREE) -1 ) {
#line 3737 "cplus.met"
                        MulFreeTree(7,_ptRes0,_ptTree0,_addlist1,attrib,ident,list,retTree);
                        PROG_EXIT(name_space_exit,"name_space")
#line 3737 "cplus.met"
                    }
#line 3737 "cplus.met"
                    ReplaceTree(_ptRes0, 1, _ptTree0);
#line 3737 "cplus.met"
                    retTree=_ptRes0;
#line 3737 "cplus.met"
                }
#line 3737 "cplus.met"
            }
#line 3737 "cplus.met"
#line 3738 "cplus.met"
            (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3738 "cplus.met"
            if (  !SEE_TOKEN( PVIR,";") || !(CommTerm(),1)) {
#line 3738 "cplus.met"
                MulFreeTree(5,_addlist1,attrib,ident,list,retTree);
                TOKEN_EXIT(name_space_exit,";")
#line 3738 "cplus.met"
            } else {
#line 3738 "cplus.met"
                tokenAhead = 0 ;
#line 3738 "cplus.met"
            }
#line 3738 "cplus.met"
#line 3738 "cplus.met"
            break;
#line 3738 "cplus.met"
        default :
#line 3738 "cplus.met"
            MulFreeTree(5,_addlist1,attrib,ident,list,retTree);
            CASE_EXIT(name_space_exit,"either namespace or using")
#line 3738 "cplus.met"
            break;
#line 3738 "cplus.met"
    }
#line 3738 "cplus.met"
#line 3741 "cplus.met"
    {
#line 3741 "cplus.met"
        _retValue = retTree ;
#line 3741 "cplus.met"
        goto name_space_ret;
#line 3741 "cplus.met"
        
#line 3741 "cplus.met"
    }
#line 3741 "cplus.met"
#line 3741 "cplus.met"
#line 3741 "cplus.met"

#line 3742 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 3742 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 3742 "cplus.met"
return((PPTREE) 0);
#line 3742 "cplus.met"

#line 3742 "cplus.met"
name_space_exit :
#line 3742 "cplus.met"

#line 3742 "cplus.met"
    _Debug = TRACE_RULE("name_space",TRACE_EXIT,(PPTREE)0);
#line 3742 "cplus.met"
    _funcLevel--;
#line 3742 "cplus.met"
    return((PPTREE) -1) ;
#line 3742 "cplus.met"

#line 3742 "cplus.met"
name_space_ret :
#line 3742 "cplus.met"
    
#line 3742 "cplus.met"
    _Debug = TRACE_RULE("name_space",TRACE_RETURN,_retValue);
#line 3742 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 3742 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 3742 "cplus.met"
    return _retValue ;
#line 3742 "cplus.met"
}
#line 3742 "cplus.met"

#line 3742 "cplus.met"
#line 2959 "cplus.met"
PPTREE cplus::new_1 ( int error_free)
#line 2959 "cplus.met"
{
#line 2959 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 2959 "cplus.met"
    int _value,_nbPre = 0 ;
#line 2959 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 2959 "cplus.met"
    int _Debug = TRACE_RULE("new_1",TRACE_ENTER,(PPTREE)0);
#line 2959 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 2959 "cplus.met"
#line 2959 "cplus.met"
    PPTREE retTree = (PPTREE) 0;
#line 2959 "cplus.met"
#line 2961 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 2961 "cplus.met"
    if (  !SEE_TOKEN( POUV,"(") || !(CommTerm(),1)) {
#line 2961 "cplus.met"
        MulFreeTree(1,retTree);
        TOKEN_EXIT(new_1_exit,"(")
#line 2961 "cplus.met"
    } else {
#line 2961 "cplus.met"
        tokenAhead = 0 ;
#line 2961 "cplus.met"
    }
#line 2961 "cplus.met"
#line 2962 "cplus.met"
    if ( (retTree=NQUICK_CALL(_Tak(expression)(error_free), 66, cplus))== (PPTREE) -1 ) {
#line 2962 "cplus.met"
        MulFreeTree(1,retTree);
        PROG_EXIT(new_1_exit,"new_1")
#line 2962 "cplus.met"
    }
#line 2962 "cplus.met"
#line 2963 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 2963 "cplus.met"
    if (  !SEE_TOKEN( PFER,")") || !(CommTerm(),1)) {
#line 2963 "cplus.met"
        MulFreeTree(1,retTree);
        TOKEN_EXIT(new_1_exit,")")
#line 2963 "cplus.met"
    } else {
#line 2963 "cplus.met"
        tokenAhead = 0 ;
#line 2963 "cplus.met"
    }
#line 2963 "cplus.met"
#line 2964 "cplus.met"
    if ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN(POUV,"(") && (tokenAhead = 0,CommTerm(),1)){
#line 2964 "cplus.met"
#line 2965 "cplus.met"
#line 2966 "cplus.met"
        {
#line 2966 "cplus.met"
            PPTREE _ptTree0=0,_ptRes0=0;
#line 2966 "cplus.met"
            _ptRes0= MakeTree(NEW, 4);
#line 2966 "cplus.met"
            ReplaceTree(_ptRes0, 1, retTree );
#line 2966 "cplus.met"
            if ( (_ptTree0=NQUICK_CALL(_Tak(type_name)(error_free), 152, cplus))== (PPTREE) -1 ) {
#line 2966 "cplus.met"
                MulFreeTree(3,_ptRes0,_ptTree0,retTree);
                PROG_EXIT(new_1_exit,"new_1")
#line 2966 "cplus.met"
            }
#line 2966 "cplus.met"
            ReplaceTree(_ptRes0, 2, _ptTree0);
#line 2966 "cplus.met"
            retTree=_ptRes0;
#line 2966 "cplus.met"
        }
#line 2966 "cplus.met"
#line 2967 "cplus.met"
        (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 2967 "cplus.met"
        if (  !SEE_TOKEN( PFER,")") || !(CommTerm(),1)) {
#line 2967 "cplus.met"
            MulFreeTree(1,retTree);
            TOKEN_EXIT(new_1_exit,")")
#line 2967 "cplus.met"
        } else {
#line 2967 "cplus.met"
            tokenAhead = 0 ;
#line 2967 "cplus.met"
        }
#line 2967 "cplus.met"
#line 2968 "cplus.met"
        {
#line 2968 "cplus.met"
            _retValue = retTree ;
#line 2968 "cplus.met"
            goto new_1_ret;
#line 2968 "cplus.met"
            
#line 2968 "cplus.met"
        }
#line 2968 "cplus.met"
#line 2968 "cplus.met"
#line 2968 "cplus.met"
    } else {
#line 2968 "cplus.met"
#line 2971 "cplus.met"
        {
#line 2971 "cplus.met"
            PPTREE _ptTree0=0,_ptRes0=0;
#line 2971 "cplus.met"
            _ptRes0= MakeTree(NEW, 4);
#line 2971 "cplus.met"
            ReplaceTree(_ptRes0, 1, retTree );
#line 2971 "cplus.met"
            if ( (_ptTree0=NQUICK_CALL(_Tak(new_type_name)(error_free), 106, cplus))== (PPTREE) -1 ) {
#line 2971 "cplus.met"
                MulFreeTree(3,_ptRes0,_ptTree0,retTree);
                PROG_EXIT(new_1_exit,"new_1")
#line 2971 "cplus.met"
            }
#line 2971 "cplus.met"
            ReplaceTree(_ptRes0, 2, _ptTree0);
#line 2971 "cplus.met"
            retTree=_ptRes0;
#line 2971 "cplus.met"
        }
#line 2971 "cplus.met"
    }
#line 2971 "cplus.met"
#line 2972 "cplus.met"
    {
#line 2972 "cplus.met"
        _retValue = retTree ;
#line 2972 "cplus.met"
        goto new_1_ret;
#line 2972 "cplus.met"
        
#line 2972 "cplus.met"
    }
#line 2972 "cplus.met"
#line 2972 "cplus.met"
#line 2972 "cplus.met"

#line 2973 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2973 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 2973 "cplus.met"
return((PPTREE) 0);
#line 2973 "cplus.met"

#line 2973 "cplus.met"
new_1_exit :
#line 2973 "cplus.met"

#line 2973 "cplus.met"
    _Debug = TRACE_RULE("new_1",TRACE_EXIT,(PPTREE)0);
#line 2973 "cplus.met"
    _funcLevel--;
#line 2973 "cplus.met"
    return((PPTREE) -1) ;
#line 2973 "cplus.met"

#line 2973 "cplus.met"
new_1_ret :
#line 2973 "cplus.met"
    
#line 2973 "cplus.met"
    _Debug = TRACE_RULE("new_1",TRACE_RETURN,_retValue);
#line 2973 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2973 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 2973 "cplus.met"
    return _retValue ;
#line 2973 "cplus.met"
}
#line 2973 "cplus.met"

#line 2973 "cplus.met"
#line 2975 "cplus.met"
PPTREE cplus::new_2 ( int error_free)
#line 2975 "cplus.met"
{
#line 2975 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 2975 "cplus.met"
    int _value,_nbPre = 0 ;
#line 2975 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 2975 "cplus.met"
    int _Debug = TRACE_RULE("new_2",TRACE_ENTER,(PPTREE)0);
#line 2975 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 2975 "cplus.met"
#line 2975 "cplus.met"
    PPTREE retTree = (PPTREE) 0;
#line 2975 "cplus.met"
#line 2977 "cplus.met"
    if ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN(POUV,"(") && (tokenAhead = 0,CommTerm(),1)){
#line 2977 "cplus.met"
#line 2978 "cplus.met"
#line 2979 "cplus.met"
        {
#line 2979 "cplus.met"
            PPTREE _ptTree0=0,_ptRes0=0;
#line 2979 "cplus.met"
            _ptRes0= MakeTree(NEW, 4);
#line 2979 "cplus.met"
            if ( (_ptTree0=NQUICK_CALL(_Tak(type_name)(error_free), 152, cplus))== (PPTREE) -1 ) {
#line 2979 "cplus.met"
                MulFreeTree(3,_ptRes0,_ptTree0,retTree);
                PROG_EXIT(new_2_exit,"new_2")
#line 2979 "cplus.met"
            }
#line 2979 "cplus.met"
            ReplaceTree(_ptRes0, 2, _ptTree0);
#line 2979 "cplus.met"
            retTree=_ptRes0;
#line 2979 "cplus.met"
        }
#line 2979 "cplus.met"
#line 2980 "cplus.met"
        (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 2980 "cplus.met"
        if (  !SEE_TOKEN( PFER,")") || !(CommTerm(),1)) {
#line 2980 "cplus.met"
            MulFreeTree(1,retTree);
            TOKEN_EXIT(new_2_exit,")")
#line 2980 "cplus.met"
        } else {
#line 2980 "cplus.met"
            tokenAhead = 0 ;
#line 2980 "cplus.met"
        }
#line 2980 "cplus.met"
#line 2981 "cplus.met"
        {
#line 2981 "cplus.met"
            _retValue = retTree ;
#line 2981 "cplus.met"
            goto new_2_ret;
#line 2981 "cplus.met"
            
#line 2981 "cplus.met"
        }
#line 2981 "cplus.met"
#line 2981 "cplus.met"
#line 2981 "cplus.met"
    } else {
#line 2981 "cplus.met"
#line 2984 "cplus.met"
        {
#line 2984 "cplus.met"
            PPTREE _ptTree0=0,_ptRes0=0;
#line 2984 "cplus.met"
            _ptRes0= MakeTree(NEW, 4);
#line 2984 "cplus.met"
            if ( (_ptTree0=NQUICK_CALL(_Tak(new_type_name)(error_free), 106, cplus))== (PPTREE) -1 ) {
#line 2984 "cplus.met"
                MulFreeTree(3,_ptRes0,_ptTree0,retTree);
                PROG_EXIT(new_2_exit,"new_2")
#line 2984 "cplus.met"
            }
#line 2984 "cplus.met"
            ReplaceTree(_ptRes0, 2, _ptTree0);
#line 2984 "cplus.met"
            retTree=_ptRes0;
#line 2984 "cplus.met"
        }
#line 2984 "cplus.met"
    }
#line 2984 "cplus.met"
#line 2985 "cplus.met"
    {
#line 2985 "cplus.met"
        _retValue = retTree ;
#line 2985 "cplus.met"
        goto new_2_ret;
#line 2985 "cplus.met"
        
#line 2985 "cplus.met"
    }
#line 2985 "cplus.met"
#line 2985 "cplus.met"
#line 2985 "cplus.met"

#line 2986 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2986 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 2986 "cplus.met"
return((PPTREE) 0);
#line 2986 "cplus.met"

#line 2986 "cplus.met"
new_2_exit :
#line 2986 "cplus.met"

#line 2986 "cplus.met"
    _Debug = TRACE_RULE("new_2",TRACE_EXIT,(PPTREE)0);
#line 2986 "cplus.met"
    _funcLevel--;
#line 2986 "cplus.met"
    return((PPTREE) -1) ;
#line 2986 "cplus.met"

#line 2986 "cplus.met"
new_2_ret :
#line 2986 "cplus.met"
    
#line 2986 "cplus.met"
    _Debug = TRACE_RULE("new_2",TRACE_RETURN,_retValue);
#line 2986 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2986 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 2986 "cplus.met"
    return _retValue ;
#line 2986 "cplus.met"
}
#line 2986 "cplus.met"

#line 2986 "cplus.met"
#line 2511 "cplus.met"
PPTREE cplus::new_declarator ( int error_free)
#line 2511 "cplus.met"
{
#line 2511 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 2511 "cplus.met"
    int _value,_nbPre = 0 ;
#line 2511 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 2511 "cplus.met"
    int _Debug = TRACE_RULE("new_declarator",TRACE_ENTER,(PPTREE)0);
#line 2511 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 2511 "cplus.met"
#line 2511 "cplus.met"
    PPTREE valTree = (PPTREE) 0,retTree = (PPTREE) 0,expList = (PPTREE) 0;
#line 2511 "cplus.met"
#line 2513 "cplus.met"
    if (NPUSH_CALL_AFF_VERIF(valTree = ,_Tak(range_modifier), 126, cplus)){
#line 2513 "cplus.met"
#line 2514 "cplus.met"
        {
#line 2514 "cplus.met"
            PPTREE _ptTree0=0;
#line 2514 "cplus.met"
            {
#line 2514 "cplus.met"
                PPTREE _ptTree1=0;
#line 2514 "cplus.met"
                if ( (_ptTree1=NQUICK_CALL(_Tak(new_declarator)(error_free), 105, cplus))== (PPTREE) -1 ) {
#line 2514 "cplus.met"
                    MulFreeTree(5,_ptTree1,_ptTree0,expList,retTree,valTree);
                    PROG_EXIT(new_declarator_exit,"new_declarator")
#line 2514 "cplus.met"
                }
#line 2514 "cplus.met"
                _ptTree0=ReplaceTree(valTree , 2 , _ptTree1);
#line 2514 "cplus.met"
            }
#line 2514 "cplus.met"
            _retValue =_ptTree0;
#line 2514 "cplus.met"
            goto new_declarator_ret;
#line 2514 "cplus.met"
        }
#line 2514 "cplus.met"
    }
#line 2514 "cplus.met"
#line 2515 "cplus.met"
    retTree = (PPTREE) 0;
#line 2515 "cplus.met"
#line 2516 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 2516 "cplus.met"
    switch( lexEl.Value) {
#line 2516 "cplus.met"
#line 2517 "cplus.met"
        case ETOI : 
#line 2517 "cplus.met"
            tokenAhead = 0 ;
#line 2517 "cplus.met"
            CommTerm();
#line 2517 "cplus.met"
#line 2517 "cplus.met"
            {
#line 2517 "cplus.met"
                PPTREE _ptTree0=0;
#line 2517 "cplus.met"
                {
#line 2517 "cplus.met"
                    PPTREE _ptTree1=0,_ptRes1=0;
#line 2517 "cplus.met"
                    _ptRes1= MakeTree(TYP_ADDR, 1);
#line 2517 "cplus.met"
                    if ( (_ptTree1=NQUICK_CALL(_Tak(new_declarator)(error_free), 105, cplus))== (PPTREE) -1 ) {
#line 2517 "cplus.met"
                        MulFreeTree(6,_ptRes1,_ptTree1,_ptTree0,expList,retTree,valTree);
                        PROG_EXIT(new_declarator_exit,"new_declarator")
#line 2517 "cplus.met"
                    }
#line 2517 "cplus.met"
                    ReplaceTree(_ptRes1, 1, _ptTree1);
#line 2517 "cplus.met"
                    _ptTree0=_ptRes1;
#line 2517 "cplus.met"
                }
#line 2517 "cplus.met"
                _retValue =_ptTree0;
#line 2517 "cplus.met"
                goto new_declarator_ret;
#line 2517 "cplus.met"
            }
#line 2517 "cplus.met"
            break;
#line 2517 "cplus.met"
#line 2518 "cplus.met"
        case META : 
#line 2518 "cplus.met"
        case IDENT : 
#line 2518 "cplus.met"
#line 2519 "cplus.met"
#line 2520 "cplus.met"
            if ( (valTree=NQUICK_CALL(_Tak(member_declarator)(error_free), 99, cplus))== (PPTREE) -1 ) {
#line 2520 "cplus.met"
                MulFreeTree(3,expList,retTree,valTree);
                PROG_EXIT(new_declarator_exit,"new_declarator")
#line 2520 "cplus.met"
            }
#line 2520 "cplus.met"
#line 2521 "cplus.met"
            {
#line 2521 "cplus.met"
                PPTREE _ptTree0=0;
#line 2521 "cplus.met"
                {
#line 2521 "cplus.met"
                    PPTREE _ptTree1=0;
#line 2521 "cplus.met"
                    if ( (_ptTree1=NQUICK_CALL(_Tak(new_declarator)(error_free), 105, cplus))== (PPTREE) -1 ) {
#line 2521 "cplus.met"
                        MulFreeTree(5,_ptTree1,_ptTree0,expList,retTree,valTree);
                        PROG_EXIT(new_declarator_exit,"new_declarator")
#line 2521 "cplus.met"
                    }
#line 2521 "cplus.met"
                    _ptTree0=ReplaceTree(valTree , 2 , _ptTree1);
#line 2521 "cplus.met"
                }
#line 2521 "cplus.met"
                _retValue =_ptTree0;
#line 2521 "cplus.met"
                goto new_declarator_ret;
#line 2521 "cplus.met"
            }
#line 2521 "cplus.met"
#line 2521 "cplus.met"
            break;
#line 2521 "cplus.met"
#line 2530 "cplus.met"
        default : 
#line 2530 "cplus.met"
#line 2526 "cplus.met"
#line 2528 "cplus.met"
            while ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN(COUV,"[") && (tokenAhead = 0,CommTerm(),1)) { 
#line 2528 "cplus.met"
#line 2529 "cplus.met"
#line 2530 "cplus.met"
                if (NPUSH_CALL_AFF_VERIF(expList = ,_Tak(expression), 66, cplus)){
#line 2530 "cplus.met"
#line 2531 "cplus.met"
                    {
#line 2531 "cplus.met"
                        PPTREE _ptRes0=0;
#line 2531 "cplus.met"
                        _ptRes0= MakeTree(TYP_ARRAY, 2);
#line 2531 "cplus.met"
                        ReplaceTree(_ptRes0, 1, retTree );
#line 2531 "cplus.met"
                        ReplaceTree(_ptRes0, 2, expList );
#line 2531 "cplus.met"
                        retTree=_ptRes0;
#line 2531 "cplus.met"
                    }
#line 2531 "cplus.met"
                } else {
#line 2531 "cplus.met"
#line 2533 "cplus.met"
                    {
#line 2533 "cplus.met"
                        PPTREE _ptRes0=0;
#line 2533 "cplus.met"
                        _ptRes0= MakeTree(TYP_ARRAY, 2);
#line 2533 "cplus.met"
                        ReplaceTree(_ptRes0, 1, retTree );
#line 2533 "cplus.met"
                        retTree=_ptRes0;
#line 2533 "cplus.met"
                    }
#line 2533 "cplus.met"
                }
#line 2533 "cplus.met"
#line 2534 "cplus.met"
                (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 2534 "cplus.met"
                if (  !SEE_TOKEN( CFER,"]") || !(CommTerm(),1)) {
#line 2534 "cplus.met"
                    MulFreeTree(3,expList,retTree,valTree);
                    TOKEN_EXIT(new_declarator_exit,"]")
#line 2534 "cplus.met"
                } else {
#line 2534 "cplus.met"
                    tokenAhead = 0 ;
#line 2534 "cplus.met"
                }
#line 2534 "cplus.met"
#line 2534 "cplus.met"
            } 
#line 2534 "cplus.met"
#line 2536 "cplus.met"
            {
#line 2536 "cplus.met"
                _retValue = retTree ;
#line 2536 "cplus.met"
                goto new_declarator_ret;
#line 2536 "cplus.met"
                
#line 2536 "cplus.met"
            }
#line 2536 "cplus.met"
#line 2536 "cplus.met"
            break;
#line 2536 "cplus.met"
    }
#line 2536 "cplus.met"
#line 2536 "cplus.met"
#line 2538 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2538 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 2538 "cplus.met"
return((PPTREE) 0);
#line 2538 "cplus.met"

#line 2538 "cplus.met"
new_declarator_exit :
#line 2538 "cplus.met"

#line 2538 "cplus.met"
    _Debug = TRACE_RULE("new_declarator",TRACE_EXIT,(PPTREE)0);
#line 2538 "cplus.met"
    _funcLevel--;
#line 2538 "cplus.met"
    return((PPTREE) -1) ;
#line 2538 "cplus.met"

#line 2538 "cplus.met"
new_declarator_ret :
#line 2538 "cplus.met"
    
#line 2538 "cplus.met"
    _Debug = TRACE_RULE("new_declarator",TRACE_RETURN,_retValue);
#line 2538 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2538 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 2538 "cplus.met"
    return _retValue ;
#line 2538 "cplus.met"
}
#line 2538 "cplus.met"

#line 2538 "cplus.met"
#line 2684 "cplus.met"
PPTREE cplus::new_type_name ( int error_free)
#line 2684 "cplus.met"
{
#line 2684 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 2684 "cplus.met"
    int _value,_nbPre = 0 ;
#line 2684 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 2684 "cplus.met"
    int _Debug = TRACE_RULE("new_type_name",TRACE_ENTER,(PPTREE)0);
#line 2684 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 2684 "cplus.met"
#line 2684 "cplus.met"
    PPTREE retTree = (PPTREE) 0,valTree = (PPTREE) 0;
#line 2684 "cplus.met"
#line 2686 "cplus.met"
    if ( (retTree=NQUICK_CALL(_Tak(type_specifier)(error_free), 153, cplus))== (PPTREE) -1 ) {
#line 2686 "cplus.met"
        MulFreeTree(2,retTree,valTree);
        PROG_EXIT(new_type_name_exit,"new_type_name")
#line 2686 "cplus.met"
    }
#line 2686 "cplus.met"
#line 2687 "cplus.met"
    if (NPUSH_CALL_AFF_VERIF(valTree = ,_Tak(new_declarator), 105, cplus)){
#line 2687 "cplus.met"
#line 2688 "cplus.met"
        {
#line 2688 "cplus.met"
            PPTREE _ptRes0=0;
#line 2688 "cplus.met"
            _ptRes0= MakeTree(NEW_DECLARATOR, 2);
#line 2688 "cplus.met"
            ReplaceTree(_ptRes0, 1, retTree );
#line 2688 "cplus.met"
            ReplaceTree(_ptRes0, 2, valTree );
#line 2688 "cplus.met"
            valTree=_ptRes0;
#line 2688 "cplus.met"
        }
#line 2688 "cplus.met"
    } else {
#line 2688 "cplus.met"
#line 2690 "cplus.met"
        valTree = retTree ;
#line 2690 "cplus.met"
    }
#line 2690 "cplus.met"
#line 2691 "cplus.met"
    {
#line 2691 "cplus.met"
        _retValue = valTree ;
#line 2691 "cplus.met"
        goto new_type_name_ret;
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
new_type_name_exit :
#line 2692 "cplus.met"

#line 2692 "cplus.met"
    _Debug = TRACE_RULE("new_type_name",TRACE_EXIT,(PPTREE)0);
#line 2692 "cplus.met"
    _funcLevel--;
#line 2692 "cplus.met"
    return((PPTREE) -1) ;
#line 2692 "cplus.met"

#line 2692 "cplus.met"
new_type_name_ret :
#line 2692 "cplus.met"
    
#line 2692 "cplus.met"
    _Debug = TRACE_RULE("new_type_name",TRACE_RETURN,_retValue);
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
#line 3412 "cplus.met"
PPTREE cplus::none_statement ( int error_free)
#line 3412 "cplus.met"
{
#line 3412 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 3412 "cplus.met"
    int _value,_nbPre = 0 ;
#line 3412 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 3412 "cplus.met"
    int _Debug = TRACE_RULE("none_statement",TRACE_ENTER,(PPTREE)0);
#line 3412 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 3412 "cplus.met"
#line 3413 "cplus.met"
    {
#line 3413 "cplus.met"
        PPTREE _ptTree0=0;
#line 3413 "cplus.met"
        {
#line 3413 "cplus.met"
            PPTREE _ptRes1=0;
#line 3413 "cplus.met"
            _ptRes1= MakeTree(NONE, 0);
#line 3413 "cplus.met"
            _ptTree0=_ptRes1;
#line 3413 "cplus.met"
        }
#line 3413 "cplus.met"
        _retValue =_ptTree0;
#line 3413 "cplus.met"
        goto none_statement_ret;
#line 3413 "cplus.met"
    }
#line 3413 "cplus.met"
#line 3413 "cplus.met"
#line 3413 "cplus.met"

#line 3414 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 3414 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 3414 "cplus.met"
return((PPTREE) 0);
#line 3414 "cplus.met"

#line 3414 "cplus.met"
none_statement_exit :
#line 3414 "cplus.met"

#line 3414 "cplus.met"
    _Debug = TRACE_RULE("none_statement",TRACE_EXIT,(PPTREE)0);
#line 3414 "cplus.met"
    _funcLevel--;
#line 3414 "cplus.met"
    return((PPTREE) -1) ;
#line 3414 "cplus.met"

#line 3414 "cplus.met"
none_statement_ret :
#line 3414 "cplus.met"
    
#line 3414 "cplus.met"
    _Debug = TRACE_RULE("none_statement",TRACE_RETURN,_retValue);
#line 3414 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 3414 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 3414 "cplus.met"
    return _retValue ;
#line 3414 "cplus.met"
}
#line 3414 "cplus.met"

#line 3414 "cplus.met"
#line 3134 "cplus.met"
PPTREE cplus::operator_function_name ( int error_free)
#line 3134 "cplus.met"
{
#line 3134 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 3134 "cplus.met"
    int _value,_nbPre = 0 ;
#line 3134 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 3134 "cplus.met"
    int _Debug = TRACE_RULE("operator_function_name",TRACE_ENTER,(PPTREE)0);
#line 3134 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 3134 "cplus.met"
#line 3134 "cplus.met"
    PPTREE retTree = (PPTREE) 0,valTree = (PPTREE) 0,list = (PPTREE) 0;
#line 3134 "cplus.met"
#line 3136 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3136 "cplus.met"
    if (  !SEE_TOKEN( OPERATOR,"operator") || !(CommTerm(),1)) {
#line 3136 "cplus.met"
        MulFreeTree(3,list,retTree,valTree);
        TOKEN_EXIT(operator_function_name_exit,"operator")
#line 3136 "cplus.met"
    } else {
#line 3136 "cplus.met"
        tokenAhead = 0 ;
#line 3136 "cplus.met"
    }
#line 3136 "cplus.met"
#line 3137 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3137 "cplus.met"
    switch( lexEl.Value) {
#line 3137 "cplus.met"
#line 3138 "cplus.met"
        case NEW : 
#line 3138 "cplus.met"
            tokenAhead = 0 ;
#line 3138 "cplus.met"
            CommTerm();
#line 3138 "cplus.met"
#line 3138 "cplus.met"
            {
#line 3138 "cplus.met"
                PPTREE _ptTree0=0;
#line 3138 "cplus.met"
                {
#line 3138 "cplus.met"
                    PPTREE _ptRes1=0;
#line 3138 "cplus.met"
                    _ptRes1= MakeTree(OPERATOR, 1);
#line 3138 "cplus.met"
                    ReplaceTree(_ptRes1, 1, MakeString ("new"));
#line 3138 "cplus.met"
                    _ptTree0=_ptRes1;
#line 3138 "cplus.met"
                }
#line 3138 "cplus.met"
                _retValue =_ptTree0;
#line 3138 "cplus.met"
                goto operator_function_name_ret;
#line 3138 "cplus.met"
            }
#line 3138 "cplus.met"
            break;
#line 3138 "cplus.met"
#line 3139 "cplus.met"
        case DELETE : 
#line 3139 "cplus.met"
            tokenAhead = 0 ;
#line 3139 "cplus.met"
            CommTerm();
#line 3139 "cplus.met"
#line 3139 "cplus.met"
            {
#line 3139 "cplus.met"
                PPTREE _ptTree0=0;
#line 3139 "cplus.met"
                {
#line 3139 "cplus.met"
                    PPTREE _ptRes1=0;
#line 3139 "cplus.met"
                    _ptRes1= MakeTree(OPERATOR, 1);
#line 3139 "cplus.met"
                    ReplaceTree(_ptRes1, 1, MakeString ("delete"));
#line 3139 "cplus.met"
                    _ptTree0=_ptRes1;
#line 3139 "cplus.met"
                }
#line 3139 "cplus.met"
                _retValue =_ptTree0;
#line 3139 "cplus.met"
                goto operator_function_name_ret;
#line 3139 "cplus.met"
            }
#line 3139 "cplus.met"
            break;
#line 3139 "cplus.met"
#line 3140 "cplus.met"
        case PLUS : 
#line 3140 "cplus.met"
            tokenAhead = 0 ;
#line 3140 "cplus.met"
            CommTerm();
#line 3140 "cplus.met"
#line 3140 "cplus.met"
            {
#line 3140 "cplus.met"
                PPTREE _ptTree0=0;
#line 3140 "cplus.met"
                {
#line 3140 "cplus.met"
                    PPTREE _ptRes1=0;
#line 3140 "cplus.met"
                    _ptRes1= MakeTree(OPERATOR, 1);
#line 3140 "cplus.met"
                    ReplaceTree(_ptRes1, 1, MakeString ("+"));
#line 3140 "cplus.met"
                    _ptTree0=_ptRes1;
#line 3140 "cplus.met"
                }
#line 3140 "cplus.met"
                _retValue =_ptTree0;
#line 3140 "cplus.met"
                goto operator_function_name_ret;
#line 3140 "cplus.met"
            }
#line 3140 "cplus.met"
            break;
#line 3140 "cplus.met"
#line 3141 "cplus.met"
        case TIRE : 
#line 3141 "cplus.met"
            tokenAhead = 0 ;
#line 3141 "cplus.met"
            CommTerm();
#line 3141 "cplus.met"
#line 3141 "cplus.met"
            {
#line 3141 "cplus.met"
                PPTREE _ptTree0=0;
#line 3141 "cplus.met"
                {
#line 3141 "cplus.met"
                    PPTREE _ptRes1=0;
#line 3141 "cplus.met"
                    _ptRes1= MakeTree(OPERATOR, 1);
#line 3141 "cplus.met"
                    ReplaceTree(_ptRes1, 1, MakeString ("-"));
#line 3141 "cplus.met"
                    _ptTree0=_ptRes1;
#line 3141 "cplus.met"
                }
#line 3141 "cplus.met"
                _retValue =_ptTree0;
#line 3141 "cplus.met"
                goto operator_function_name_ret;
#line 3141 "cplus.met"
            }
#line 3141 "cplus.met"
            break;
#line 3141 "cplus.met"
#line 3142 "cplus.met"
        case ETOI : 
#line 3142 "cplus.met"
            tokenAhead = 0 ;
#line 3142 "cplus.met"
            CommTerm();
#line 3142 "cplus.met"
#line 3142 "cplus.met"
            {
#line 3142 "cplus.met"
                PPTREE _ptTree0=0;
#line 3142 "cplus.met"
                {
#line 3142 "cplus.met"
                    PPTREE _ptRes1=0;
#line 3142 "cplus.met"
                    _ptRes1= MakeTree(OPERATOR, 1);
#line 3142 "cplus.met"
                    ReplaceTree(_ptRes1, 1, MakeString ("*"));
#line 3142 "cplus.met"
                    _ptTree0=_ptRes1;
#line 3142 "cplus.met"
                }
#line 3142 "cplus.met"
                _retValue =_ptTree0;
#line 3142 "cplus.met"
                goto operator_function_name_ret;
#line 3142 "cplus.met"
            }
#line 3142 "cplus.met"
            break;
#line 3142 "cplus.met"
#line 3143 "cplus.met"
        case META : 
#line 3143 "cplus.met"
        case SLAS : 
#line 3143 "cplus.met"
            tokenAhead = 0 ;
#line 3143 "cplus.met"
            CommTerm();
#line 3143 "cplus.met"
#line 3143 "cplus.met"
            {
#line 3143 "cplus.met"
                PPTREE _ptTree0=0;
#line 3143 "cplus.met"
                {
#line 3143 "cplus.met"
                    PPTREE _ptRes1=0;
#line 3143 "cplus.met"
                    _ptRes1= MakeTree(OPERATOR, 1);
#line 3143 "cplus.met"
                    ReplaceTree(_ptRes1, 1, MakeString ("/"));
#line 3143 "cplus.met"
                    _ptTree0=_ptRes1;
#line 3143 "cplus.met"
                }
#line 3143 "cplus.met"
                _retValue =_ptTree0;
#line 3143 "cplus.met"
                goto operator_function_name_ret;
#line 3143 "cplus.met"
            }
#line 3143 "cplus.met"
            break;
#line 3143 "cplus.met"
#line 3144 "cplus.met"
        case POURC : 
#line 3144 "cplus.met"
            tokenAhead = 0 ;
#line 3144 "cplus.met"
            CommTerm();
#line 3144 "cplus.met"
#line 3144 "cplus.met"
            {
#line 3144 "cplus.met"
                PPTREE _ptTree0=0;
#line 3144 "cplus.met"
                {
#line 3144 "cplus.met"
                    PPTREE _ptRes1=0;
#line 3144 "cplus.met"
                    _ptRes1= MakeTree(OPERATOR, 1);
#line 3144 "cplus.met"
                    ReplaceTree(_ptRes1, 1, MakeString ("%"));
#line 3144 "cplus.met"
                    _ptTree0=_ptRes1;
#line 3144 "cplus.met"
                }
#line 3144 "cplus.met"
                _retValue =_ptTree0;
#line 3144 "cplus.met"
                goto operator_function_name_ret;
#line 3144 "cplus.met"
            }
#line 3144 "cplus.met"
            break;
#line 3144 "cplus.met"
#line 3145 "cplus.met"
        case CHAP : 
#line 3145 "cplus.met"
            tokenAhead = 0 ;
#line 3145 "cplus.met"
            CommTerm();
#line 3145 "cplus.met"
#line 3145 "cplus.met"
            {
#line 3145 "cplus.met"
                PPTREE _ptTree0=0;
#line 3145 "cplus.met"
                {
#line 3145 "cplus.met"
                    PPTREE _ptRes1=0;
#line 3145 "cplus.met"
                    _ptRes1= MakeTree(OPERATOR, 1);
#line 3145 "cplus.met"
                    ReplaceTree(_ptRes1, 1, MakeString ("^"));
#line 3145 "cplus.met"
                    _ptTree0=_ptRes1;
#line 3145 "cplus.met"
                }
#line 3145 "cplus.met"
                _retValue =_ptTree0;
#line 3145 "cplus.met"
                goto operator_function_name_ret;
#line 3145 "cplus.met"
            }
#line 3145 "cplus.met"
            break;
#line 3145 "cplus.met"
#line 3146 "cplus.met"
        case ETCO : 
#line 3146 "cplus.met"
            tokenAhead = 0 ;
#line 3146 "cplus.met"
            CommTerm();
#line 3146 "cplus.met"
#line 3146 "cplus.met"
            {
#line 3146 "cplus.met"
                PPTREE _ptTree0=0;
#line 3146 "cplus.met"
                {
#line 3146 "cplus.met"
                    PPTREE _ptRes1=0;
#line 3146 "cplus.met"
                    _ptRes1= MakeTree(OPERATOR, 1);
#line 3146 "cplus.met"
                    ReplaceTree(_ptRes1, 1, MakeString ("&"));
#line 3146 "cplus.met"
                    _ptTree0=_ptRes1;
#line 3146 "cplus.met"
                }
#line 3146 "cplus.met"
                _retValue =_ptTree0;
#line 3146 "cplus.met"
                goto operator_function_name_ret;
#line 3146 "cplus.met"
            }
#line 3146 "cplus.met"
            break;
#line 3146 "cplus.met"
#line 3147 "cplus.met"
        case VBAR : 
#line 3147 "cplus.met"
            tokenAhead = 0 ;
#line 3147 "cplus.met"
            CommTerm();
#line 3147 "cplus.met"
#line 3147 "cplus.met"
            {
#line 3147 "cplus.met"
                PPTREE _ptTree0=0;
#line 3147 "cplus.met"
                {
#line 3147 "cplus.met"
                    PPTREE _ptRes1=0;
#line 3147 "cplus.met"
                    _ptRes1= MakeTree(OPERATOR, 1);
#line 3147 "cplus.met"
                    ReplaceTree(_ptRes1, 1, MakeString ("|"));
#line 3147 "cplus.met"
                    _ptTree0=_ptRes1;
#line 3147 "cplus.met"
                }
#line 3147 "cplus.met"
                _retValue =_ptTree0;
#line 3147 "cplus.met"
                goto operator_function_name_ret;
#line 3147 "cplus.met"
            }
#line 3147 "cplus.met"
            break;
#line 3147 "cplus.met"
#line 3148 "cplus.met"
        case TILD : 
#line 3148 "cplus.met"
            tokenAhead = 0 ;
#line 3148 "cplus.met"
            CommTerm();
#line 3148 "cplus.met"
#line 3148 "cplus.met"
            {
#line 3148 "cplus.met"
                PPTREE _ptTree0=0;
#line 3148 "cplus.met"
                {
#line 3148 "cplus.met"
                    PPTREE _ptRes1=0;
#line 3148 "cplus.met"
                    _ptRes1= MakeTree(OPERATOR, 1);
#line 3148 "cplus.met"
                    ReplaceTree(_ptRes1, 1, MakeString ("~"));
#line 3148 "cplus.met"
                    _ptTree0=_ptRes1;
#line 3148 "cplus.met"
                }
#line 3148 "cplus.met"
                _retValue =_ptTree0;
#line 3148 "cplus.met"
                goto operator_function_name_ret;
#line 3148 "cplus.met"
            }
#line 3148 "cplus.met"
            break;
#line 3148 "cplus.met"
#line 3149 "cplus.met"
        case EXCL : 
#line 3149 "cplus.met"
            tokenAhead = 0 ;
#line 3149 "cplus.met"
            CommTerm();
#line 3149 "cplus.met"
#line 3149 "cplus.met"
            {
#line 3149 "cplus.met"
                PPTREE _ptTree0=0;
#line 3149 "cplus.met"
                {
#line 3149 "cplus.met"
                    PPTREE _ptRes1=0;
#line 3149 "cplus.met"
                    _ptRes1= MakeTree(OPERATOR, 1);
#line 3149 "cplus.met"
                    ReplaceTree(_ptRes1, 1, MakeString ("!"));
#line 3149 "cplus.met"
                    _ptTree0=_ptRes1;
#line 3149 "cplus.met"
                }
#line 3149 "cplus.met"
                _retValue =_ptTree0;
#line 3149 "cplus.met"
                goto operator_function_name_ret;
#line 3149 "cplus.met"
            }
#line 3149 "cplus.met"
            break;
#line 3149 "cplus.met"
#line 3150 "cplus.met"
        case EGAL : 
#line 3150 "cplus.met"
            tokenAhead = 0 ;
#line 3150 "cplus.met"
            CommTerm();
#line 3150 "cplus.met"
#line 3150 "cplus.met"
            {
#line 3150 "cplus.met"
                PPTREE _ptTree0=0;
#line 3150 "cplus.met"
                {
#line 3150 "cplus.met"
                    PPTREE _ptRes1=0;
#line 3150 "cplus.met"
                    _ptRes1= MakeTree(OPERATOR, 1);
#line 3150 "cplus.met"
                    ReplaceTree(_ptRes1, 1, MakeString ("="));
#line 3150 "cplus.met"
                    _ptTree0=_ptRes1;
#line 3150 "cplus.met"
                }
#line 3150 "cplus.met"
                _retValue =_ptTree0;
#line 3150 "cplus.met"
                goto operator_function_name_ret;
#line 3150 "cplus.met"
            }
#line 3150 "cplus.met"
            break;
#line 3150 "cplus.met"
#line 3151 "cplus.met"
        case SUPE : 
#line 3151 "cplus.met"
            tokenAhead = 0 ;
#line 3151 "cplus.met"
            CommTerm();
#line 3151 "cplus.met"
#line 3151 "cplus.met"
            {
#line 3151 "cplus.met"
                PPTREE _ptTree0=0;
#line 3151 "cplus.met"
                {
#line 3151 "cplus.met"
                    PPTREE _ptRes1=0;
#line 3151 "cplus.met"
                    _ptRes1= MakeTree(OPERATOR, 1);
#line 3151 "cplus.met"
                    ReplaceTree(_ptRes1, 1, MakeString (">"));
#line 3151 "cplus.met"
                    _ptTree0=_ptRes1;
#line 3151 "cplus.met"
                }
#line 3151 "cplus.met"
                _retValue =_ptTree0;
#line 3151 "cplus.met"
                goto operator_function_name_ret;
#line 3151 "cplus.met"
            }
#line 3151 "cplus.met"
            break;
#line 3151 "cplus.met"
#line 3152 "cplus.met"
        case INFE : 
#line 3152 "cplus.met"
            tokenAhead = 0 ;
#line 3152 "cplus.met"
            CommTerm();
#line 3152 "cplus.met"
#line 3152 "cplus.met"
            {
#line 3152 "cplus.met"
                PPTREE _ptTree0=0;
#line 3152 "cplus.met"
                {
#line 3152 "cplus.met"
                    PPTREE _ptRes1=0;
#line 3152 "cplus.met"
                    _ptRes1= MakeTree(OPERATOR, 1);
#line 3152 "cplus.met"
                    ReplaceTree(_ptRes1, 1, MakeString ("<"));
#line 3152 "cplus.met"
                    _ptTree0=_ptRes1;
#line 3152 "cplus.met"
                }
#line 3152 "cplus.met"
                _retValue =_ptTree0;
#line 3152 "cplus.met"
                goto operator_function_name_ret;
#line 3152 "cplus.met"
            }
#line 3152 "cplus.met"
            break;
#line 3152 "cplus.met"
#line 3153 "cplus.met"
        case PLUSEGAL : 
#line 3153 "cplus.met"
            tokenAhead = 0 ;
#line 3153 "cplus.met"
            CommTerm();
#line 3153 "cplus.met"
#line 3153 "cplus.met"
            {
#line 3153 "cplus.met"
                PPTREE _ptTree0=0;
#line 3153 "cplus.met"
                {
#line 3153 "cplus.met"
                    PPTREE _ptRes1=0;
#line 3153 "cplus.met"
                    _ptRes1= MakeTree(OPERATOR, 1);
#line 3153 "cplus.met"
                    ReplaceTree(_ptRes1, 1, MakeString ("+="));
#line 3153 "cplus.met"
                    _ptTree0=_ptRes1;
#line 3153 "cplus.met"
                }
#line 3153 "cplus.met"
                _retValue =_ptTree0;
#line 3153 "cplus.met"
                goto operator_function_name_ret;
#line 3153 "cplus.met"
            }
#line 3153 "cplus.met"
            break;
#line 3153 "cplus.met"
#line 3154 "cplus.met"
        case TIREEGAL : 
#line 3154 "cplus.met"
            tokenAhead = 0 ;
#line 3154 "cplus.met"
            CommTerm();
#line 3154 "cplus.met"
#line 3154 "cplus.met"
            {
#line 3154 "cplus.met"
                PPTREE _ptTree0=0;
#line 3154 "cplus.met"
                {
#line 3154 "cplus.met"
                    PPTREE _ptRes1=0;
#line 3154 "cplus.met"
                    _ptRes1= MakeTree(OPERATOR, 1);
#line 3154 "cplus.met"
                    ReplaceTree(_ptRes1, 1, MakeString ("-="));
#line 3154 "cplus.met"
                    _ptTree0=_ptRes1;
#line 3154 "cplus.met"
                }
#line 3154 "cplus.met"
                _retValue =_ptTree0;
#line 3154 "cplus.met"
                goto operator_function_name_ret;
#line 3154 "cplus.met"
            }
#line 3154 "cplus.met"
            break;
#line 3154 "cplus.met"
#line 3155 "cplus.met"
        case ETOIEGAL : 
#line 3155 "cplus.met"
            tokenAhead = 0 ;
#line 3155 "cplus.met"
            CommTerm();
#line 3155 "cplus.met"
#line 3155 "cplus.met"
            {
#line 3155 "cplus.met"
                PPTREE _ptTree0=0;
#line 3155 "cplus.met"
                {
#line 3155 "cplus.met"
                    PPTREE _ptRes1=0;
#line 3155 "cplus.met"
                    _ptRes1= MakeTree(OPERATOR, 1);
#line 3155 "cplus.met"
                    ReplaceTree(_ptRes1, 1, MakeString ("*="));
#line 3155 "cplus.met"
                    _ptTree0=_ptRes1;
#line 3155 "cplus.met"
                }
#line 3155 "cplus.met"
                _retValue =_ptTree0;
#line 3155 "cplus.met"
                goto operator_function_name_ret;
#line 3155 "cplus.met"
            }
#line 3155 "cplus.met"
            break;
#line 3155 "cplus.met"
#line 3156 "cplus.met"
        case SLASEGAL : 
#line 3156 "cplus.met"
            tokenAhead = 0 ;
#line 3156 "cplus.met"
            CommTerm();
#line 3156 "cplus.met"
#line 3156 "cplus.met"
            {
#line 3156 "cplus.met"
                PPTREE _ptTree0=0;
#line 3156 "cplus.met"
                {
#line 3156 "cplus.met"
                    PPTREE _ptRes1=0;
#line 3156 "cplus.met"
                    _ptRes1= MakeTree(OPERATOR, 1);
#line 3156 "cplus.met"
                    ReplaceTree(_ptRes1, 1, MakeString ("/="));
#line 3156 "cplus.met"
                    _ptTree0=_ptRes1;
#line 3156 "cplus.met"
                }
#line 3156 "cplus.met"
                _retValue =_ptTree0;
#line 3156 "cplus.met"
                goto operator_function_name_ret;
#line 3156 "cplus.met"
            }
#line 3156 "cplus.met"
            break;
#line 3156 "cplus.met"
#line 3157 "cplus.met"
        case POURCEGAL : 
#line 3157 "cplus.met"
            tokenAhead = 0 ;
#line 3157 "cplus.met"
            CommTerm();
#line 3157 "cplus.met"
#line 3157 "cplus.met"
            {
#line 3157 "cplus.met"
                PPTREE _ptTree0=0;
#line 3157 "cplus.met"
                {
#line 3157 "cplus.met"
                    PPTREE _ptRes1=0;
#line 3157 "cplus.met"
                    _ptRes1= MakeTree(OPERATOR, 1);
#line 3157 "cplus.met"
                    ReplaceTree(_ptRes1, 1, MakeString ("%="));
#line 3157 "cplus.met"
                    _ptTree0=_ptRes1;
#line 3157 "cplus.met"
                }
#line 3157 "cplus.met"
                _retValue =_ptTree0;
#line 3157 "cplus.met"
                goto operator_function_name_ret;
#line 3157 "cplus.met"
            }
#line 3157 "cplus.met"
            break;
#line 3157 "cplus.met"
#line 3158 "cplus.met"
        case CHAPEGAL : 
#line 3158 "cplus.met"
            tokenAhead = 0 ;
#line 3158 "cplus.met"
            CommTerm();
#line 3158 "cplus.met"
#line 3158 "cplus.met"
            {
#line 3158 "cplus.met"
                PPTREE _ptTree0=0;
#line 3158 "cplus.met"
                {
#line 3158 "cplus.met"
                    PPTREE _ptRes1=0;
#line 3158 "cplus.met"
                    _ptRes1= MakeTree(OPERATOR, 1);
#line 3158 "cplus.met"
                    ReplaceTree(_ptRes1, 1, MakeString ("^="));
#line 3158 "cplus.met"
                    _ptTree0=_ptRes1;
#line 3158 "cplus.met"
                }
#line 3158 "cplus.met"
                _retValue =_ptTree0;
#line 3158 "cplus.met"
                goto operator_function_name_ret;
#line 3158 "cplus.met"
            }
#line 3158 "cplus.met"
            break;
#line 3158 "cplus.met"
#line 3159 "cplus.met"
        case ETCOEGAL : 
#line 3159 "cplus.met"
            tokenAhead = 0 ;
#line 3159 "cplus.met"
            CommTerm();
#line 3159 "cplus.met"
#line 3159 "cplus.met"
            {
#line 3159 "cplus.met"
                PPTREE _ptTree0=0;
#line 3159 "cplus.met"
                {
#line 3159 "cplus.met"
                    PPTREE _ptRes1=0;
#line 3159 "cplus.met"
                    _ptRes1= MakeTree(OPERATOR, 1);
#line 3159 "cplus.met"
                    ReplaceTree(_ptRes1, 1, MakeString ("&="));
#line 3159 "cplus.met"
                    _ptTree0=_ptRes1;
#line 3159 "cplus.met"
                }
#line 3159 "cplus.met"
                _retValue =_ptTree0;
#line 3159 "cplus.met"
                goto operator_function_name_ret;
#line 3159 "cplus.met"
            }
#line 3159 "cplus.met"
            break;
#line 3159 "cplus.met"
#line 3160 "cplus.met"
        case VBAREGAL : 
#line 3160 "cplus.met"
            tokenAhead = 0 ;
#line 3160 "cplus.met"
            CommTerm();
#line 3160 "cplus.met"
#line 3160 "cplus.met"
            {
#line 3160 "cplus.met"
                PPTREE _ptTree0=0;
#line 3160 "cplus.met"
                {
#line 3160 "cplus.met"
                    PPTREE _ptRes1=0;
#line 3160 "cplus.met"
                    _ptRes1= MakeTree(OPERATOR, 1);
#line 3160 "cplus.met"
                    ReplaceTree(_ptRes1, 1, MakeString ("|="));
#line 3160 "cplus.met"
                    _ptTree0=_ptRes1;
#line 3160 "cplus.met"
                }
#line 3160 "cplus.met"
                _retValue =_ptTree0;
#line 3160 "cplus.met"
                goto operator_function_name_ret;
#line 3160 "cplus.met"
            }
#line 3160 "cplus.met"
            break;
#line 3160 "cplus.met"
#line 3161 "cplus.met"
        case EXCLEGAL : 
#line 3161 "cplus.met"
            tokenAhead = 0 ;
#line 3161 "cplus.met"
            CommTerm();
#line 3161 "cplus.met"
#line 3161 "cplus.met"
            {
#line 3161 "cplus.met"
                PPTREE _ptTree0=0;
#line 3161 "cplus.met"
                {
#line 3161 "cplus.met"
                    PPTREE _ptRes1=0;
#line 3161 "cplus.met"
                    _ptRes1= MakeTree(OPERATOR, 1);
#line 3161 "cplus.met"
                    ReplaceTree(_ptRes1, 1, MakeString ("!="));
#line 3161 "cplus.met"
                    _ptTree0=_ptRes1;
#line 3161 "cplus.met"
                }
#line 3161 "cplus.met"
                _retValue =_ptTree0;
#line 3161 "cplus.met"
                goto operator_function_name_ret;
#line 3161 "cplus.met"
            }
#line 3161 "cplus.met"
            break;
#line 3161 "cplus.met"
#line 3162 "cplus.met"
        case EGALEGAL : 
#line 3162 "cplus.met"
            tokenAhead = 0 ;
#line 3162 "cplus.met"
            CommTerm();
#line 3162 "cplus.met"
#line 3162 "cplus.met"
            {
#line 3162 "cplus.met"
                PPTREE _ptTree0=0;
#line 3162 "cplus.met"
                {
#line 3162 "cplus.met"
                    PPTREE _ptRes1=0;
#line 3162 "cplus.met"
                    _ptRes1= MakeTree(OPERATOR, 1);
#line 3162 "cplus.met"
                    ReplaceTree(_ptRes1, 1, MakeString ("=="));
#line 3162 "cplus.met"
                    _ptTree0=_ptRes1;
#line 3162 "cplus.met"
                }
#line 3162 "cplus.met"
                _retValue =_ptTree0;
#line 3162 "cplus.met"
                goto operator_function_name_ret;
#line 3162 "cplus.met"
            }
#line 3162 "cplus.met"
            break;
#line 3162 "cplus.met"
#line 3163 "cplus.met"
        case INFEEGAL : 
#line 3163 "cplus.met"
            tokenAhead = 0 ;
#line 3163 "cplus.met"
            CommTerm();
#line 3163 "cplus.met"
#line 3163 "cplus.met"
            {
#line 3163 "cplus.met"
                PPTREE _ptTree0=0;
#line 3163 "cplus.met"
                {
#line 3163 "cplus.met"
                    PPTREE _ptRes1=0;
#line 3163 "cplus.met"
                    _ptRes1= MakeTree(OPERATOR, 1);
#line 3163 "cplus.met"
                    ReplaceTree(_ptRes1, 1, MakeString ("<="));
#line 3163 "cplus.met"
                    _ptTree0=_ptRes1;
#line 3163 "cplus.met"
                }
#line 3163 "cplus.met"
                _retValue =_ptTree0;
#line 3163 "cplus.met"
                goto operator_function_name_ret;
#line 3163 "cplus.met"
            }
#line 3163 "cplus.met"
            break;
#line 3163 "cplus.met"
#line 3164 "cplus.met"
        case SUPEEGAL : 
#line 3164 "cplus.met"
            tokenAhead = 0 ;
#line 3164 "cplus.met"
            CommTerm();
#line 3164 "cplus.met"
#line 3164 "cplus.met"
            {
#line 3164 "cplus.met"
                PPTREE _ptTree0=0;
#line 3164 "cplus.met"
                {
#line 3164 "cplus.met"
                    PPTREE _ptRes1=0;
#line 3164 "cplus.met"
                    _ptRes1= MakeTree(OPERATOR, 1);
#line 3164 "cplus.met"
                    ReplaceTree(_ptRes1, 1, MakeString (">="));
#line 3164 "cplus.met"
                    _ptTree0=_ptRes1;
#line 3164 "cplus.met"
                }
#line 3164 "cplus.met"
                _retValue =_ptTree0;
#line 3164 "cplus.met"
                goto operator_function_name_ret;
#line 3164 "cplus.met"
            }
#line 3164 "cplus.met"
            break;
#line 3164 "cplus.met"
#line 3165 "cplus.met"
        case INFEINFE : 
#line 3165 "cplus.met"
            tokenAhead = 0 ;
#line 3165 "cplus.met"
            CommTerm();
#line 3165 "cplus.met"
#line 3165 "cplus.met"
            {
#line 3165 "cplus.met"
                PPTREE _ptTree0=0;
#line 3165 "cplus.met"
                {
#line 3165 "cplus.met"
                    PPTREE _ptRes1=0;
#line 3165 "cplus.met"
                    _ptRes1= MakeTree(OPERATOR, 1);
#line 3165 "cplus.met"
                    ReplaceTree(_ptRes1, 1, MakeString ("<<"));
#line 3165 "cplus.met"
                    _ptTree0=_ptRes1;
#line 3165 "cplus.met"
                }
#line 3165 "cplus.met"
                _retValue =_ptTree0;
#line 3165 "cplus.met"
                goto operator_function_name_ret;
#line 3165 "cplus.met"
            }
#line 3165 "cplus.met"
            break;
#line 3165 "cplus.met"
#line 3166 "cplus.met"
        case SUPESUPE : 
#line 3166 "cplus.met"
            tokenAhead = 0 ;
#line 3166 "cplus.met"
            CommTerm();
#line 3166 "cplus.met"
#line 3166 "cplus.met"
            {
#line 3166 "cplus.met"
                PPTREE _ptTree0=0;
#line 3166 "cplus.met"
                {
#line 3166 "cplus.met"
                    PPTREE _ptRes1=0;
#line 3166 "cplus.met"
                    _ptRes1= MakeTree(OPERATOR, 1);
#line 3166 "cplus.met"
                    ReplaceTree(_ptRes1, 1, MakeString (">>"));
#line 3166 "cplus.met"
                    _ptTree0=_ptRes1;
#line 3166 "cplus.met"
                }
#line 3166 "cplus.met"
                _retValue =_ptTree0;
#line 3166 "cplus.met"
                goto operator_function_name_ret;
#line 3166 "cplus.met"
            }
#line 3166 "cplus.met"
            break;
#line 3166 "cplus.met"
#line 3167 "cplus.met"
        case INFEINFEEGAL : 
#line 3167 "cplus.met"
            tokenAhead = 0 ;
#line 3167 "cplus.met"
            CommTerm();
#line 3167 "cplus.met"
#line 3167 "cplus.met"
            {
#line 3167 "cplus.met"
                PPTREE _ptTree0=0;
#line 3167 "cplus.met"
                {
#line 3167 "cplus.met"
                    PPTREE _ptRes1=0;
#line 3167 "cplus.met"
                    _ptRes1= MakeTree(OPERATOR, 1);
#line 3167 "cplus.met"
                    ReplaceTree(_ptRes1, 1, MakeString ("<<="));
#line 3167 "cplus.met"
                    _ptTree0=_ptRes1;
#line 3167 "cplus.met"
                }
#line 3167 "cplus.met"
                _retValue =_ptTree0;
#line 3167 "cplus.met"
                goto operator_function_name_ret;
#line 3167 "cplus.met"
            }
#line 3167 "cplus.met"
            break;
#line 3167 "cplus.met"
#line 3168 "cplus.met"
        case SUPESUPEEGAL : 
#line 3168 "cplus.met"
            tokenAhead = 0 ;
#line 3168 "cplus.met"
            CommTerm();
#line 3168 "cplus.met"
#line 3168 "cplus.met"
            {
#line 3168 "cplus.met"
                PPTREE _ptTree0=0;
#line 3168 "cplus.met"
                {
#line 3168 "cplus.met"
                    PPTREE _ptRes1=0;
#line 3168 "cplus.met"
                    _ptRes1= MakeTree(OPERATOR, 1);
#line 3168 "cplus.met"
                    ReplaceTree(_ptRes1, 1, MakeString (">>="));
#line 3168 "cplus.met"
                    _ptTree0=_ptRes1;
#line 3168 "cplus.met"
                }
#line 3168 "cplus.met"
                _retValue =_ptTree0;
#line 3168 "cplus.met"
                goto operator_function_name_ret;
#line 3168 "cplus.met"
            }
#line 3168 "cplus.met"
            break;
#line 3168 "cplus.met"
#line 3169 "cplus.met"
        case ETCOETCO : 
#line 3169 "cplus.met"
            tokenAhead = 0 ;
#line 3169 "cplus.met"
            CommTerm();
#line 3169 "cplus.met"
#line 3169 "cplus.met"
            {
#line 3169 "cplus.met"
                PPTREE _ptTree0=0;
#line 3169 "cplus.met"
                {
#line 3169 "cplus.met"
                    PPTREE _ptRes1=0;
#line 3169 "cplus.met"
                    _ptRes1= MakeTree(OPERATOR, 1);
#line 3169 "cplus.met"
                    ReplaceTree(_ptRes1, 1, MakeString ("&&"));
#line 3169 "cplus.met"
                    _ptTree0=_ptRes1;
#line 3169 "cplus.met"
                }
#line 3169 "cplus.met"
                _retValue =_ptTree0;
#line 3169 "cplus.met"
                goto operator_function_name_ret;
#line 3169 "cplus.met"
            }
#line 3169 "cplus.met"
            break;
#line 3169 "cplus.met"
#line 3170 "cplus.met"
        case VBARVBAR : 
#line 3170 "cplus.met"
            tokenAhead = 0 ;
#line 3170 "cplus.met"
            CommTerm();
#line 3170 "cplus.met"
#line 3170 "cplus.met"
            {
#line 3170 "cplus.met"
                PPTREE _ptTree0=0;
#line 3170 "cplus.met"
                {
#line 3170 "cplus.met"
                    PPTREE _ptRes1=0;
#line 3170 "cplus.met"
                    _ptRes1= MakeTree(OPERATOR, 1);
#line 3170 "cplus.met"
                    ReplaceTree(_ptRes1, 1, MakeString ("||"));
#line 3170 "cplus.met"
                    _ptTree0=_ptRes1;
#line 3170 "cplus.met"
                }
#line 3170 "cplus.met"
                _retValue =_ptTree0;
#line 3170 "cplus.met"
                goto operator_function_name_ret;
#line 3170 "cplus.met"
            }
#line 3170 "cplus.met"
            break;
#line 3170 "cplus.met"
#line 3171 "cplus.met"
        case PLUSPLUS : 
#line 3171 "cplus.met"
            tokenAhead = 0 ;
#line 3171 "cplus.met"
            CommTerm();
#line 3171 "cplus.met"
#line 3171 "cplus.met"
            {
#line 3171 "cplus.met"
                PPTREE _ptTree0=0;
#line 3171 "cplus.met"
                {
#line 3171 "cplus.met"
                    PPTREE _ptRes1=0;
#line 3171 "cplus.met"
                    _ptRes1= MakeTree(OPERATOR, 1);
#line 3171 "cplus.met"
                    ReplaceTree(_ptRes1, 1, MakeString ("++"));
#line 3171 "cplus.met"
                    _ptTree0=_ptRes1;
#line 3171 "cplus.met"
                }
#line 3171 "cplus.met"
                _retValue =_ptTree0;
#line 3171 "cplus.met"
                goto operator_function_name_ret;
#line 3171 "cplus.met"
            }
#line 3171 "cplus.met"
            break;
#line 3171 "cplus.met"
#line 3172 "cplus.met"
        case TIRETIRE : 
#line 3172 "cplus.met"
            tokenAhead = 0 ;
#line 3172 "cplus.met"
            CommTerm();
#line 3172 "cplus.met"
#line 3172 "cplus.met"
            {
#line 3172 "cplus.met"
                PPTREE _ptTree0=0;
#line 3172 "cplus.met"
                {
#line 3172 "cplus.met"
                    PPTREE _ptRes1=0;
#line 3172 "cplus.met"
                    _ptRes1= MakeTree(OPERATOR, 1);
#line 3172 "cplus.met"
                    ReplaceTree(_ptRes1, 1, MakeString ("--"));
#line 3172 "cplus.met"
                    _ptTree0=_ptRes1;
#line 3172 "cplus.met"
                }
#line 3172 "cplus.met"
                _retValue =_ptTree0;
#line 3172 "cplus.met"
                goto operator_function_name_ret;
#line 3172 "cplus.met"
            }
#line 3172 "cplus.met"
            break;
#line 3172 "cplus.met"
#line 3173 "cplus.met"
        case VIRG : 
#line 3173 "cplus.met"
            tokenAhead = 0 ;
#line 3173 "cplus.met"
            CommTerm();
#line 3173 "cplus.met"
#line 3173 "cplus.met"
            {
#line 3173 "cplus.met"
                PPTREE _ptTree0=0;
#line 3173 "cplus.met"
                {
#line 3173 "cplus.met"
                    PPTREE _ptRes1=0;
#line 3173 "cplus.met"
                    _ptRes1= MakeTree(OPERATOR, 1);
#line 3173 "cplus.met"
                    ReplaceTree(_ptRes1, 1, MakeString (","));
#line 3173 "cplus.met"
                    _ptTree0=_ptRes1;
#line 3173 "cplus.met"
                }
#line 3173 "cplus.met"
                _retValue =_ptTree0;
#line 3173 "cplus.met"
                goto operator_function_name_ret;
#line 3173 "cplus.met"
            }
#line 3173 "cplus.met"
            break;
#line 3173 "cplus.met"
#line 3174 "cplus.met"
        case TIRESUPE : 
#line 3174 "cplus.met"
            tokenAhead = 0 ;
#line 3174 "cplus.met"
            CommTerm();
#line 3174 "cplus.met"
#line 3174 "cplus.met"
            {
#line 3174 "cplus.met"
                PPTREE _ptTree0=0;
#line 3174 "cplus.met"
                {
#line 3174 "cplus.met"
                    PPTREE _ptRes1=0;
#line 3174 "cplus.met"
                    _ptRes1= MakeTree(OPERATOR, 1);
#line 3174 "cplus.met"
                    ReplaceTree(_ptRes1, 1, MakeString ("->"));
#line 3174 "cplus.met"
                    _ptTree0=_ptRes1;
#line 3174 "cplus.met"
                }
#line 3174 "cplus.met"
                _retValue =_ptTree0;
#line 3174 "cplus.met"
                goto operator_function_name_ret;
#line 3174 "cplus.met"
            }
#line 3174 "cplus.met"
            break;
#line 3174 "cplus.met"
#line 3175 "cplus.met"
        case TIRESUPEETOI : 
#line 3175 "cplus.met"
            tokenAhead = 0 ;
#line 3175 "cplus.met"
            CommTerm();
#line 3175 "cplus.met"
#line 3175 "cplus.met"
            {
#line 3175 "cplus.met"
                PPTREE _ptTree0=0;
#line 3175 "cplus.met"
                {
#line 3175 "cplus.met"
                    PPTREE _ptRes1=0;
#line 3175 "cplus.met"
                    _ptRes1= MakeTree(OPERATOR, 1);
#line 3175 "cplus.met"
                    ReplaceTree(_ptRes1, 1, MakeString ("->*"));
#line 3175 "cplus.met"
                    _ptTree0=_ptRes1;
#line 3175 "cplus.met"
                }
#line 3175 "cplus.met"
                _retValue =_ptTree0;
#line 3175 "cplus.met"
                goto operator_function_name_ret;
#line 3175 "cplus.met"
            }
#line 3175 "cplus.met"
            break;
#line 3175 "cplus.met"
#line 3178 "cplus.met"
        case POUV : 
#line 3178 "cplus.met"
            tokenAhead = 0 ;
#line 3178 "cplus.met"
            CommTerm();
#line 3178 "cplus.met"
#line 3177 "cplus.met"
#line 3178 "cplus.met"
            (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3178 "cplus.met"
            if (  !SEE_TOKEN( PFER,")") || !(CommTerm(),1)) {
#line 3178 "cplus.met"
                MulFreeTree(3,list,retTree,valTree);
                TOKEN_EXIT(operator_function_name_exit,")")
#line 3178 "cplus.met"
            } else {
#line 3178 "cplus.met"
                tokenAhead = 0 ;
#line 3178 "cplus.met"
            }
#line 3178 "cplus.met"
#line 3179 "cplus.met"
            {
#line 3179 "cplus.met"
                PPTREE _ptTree0=0;
#line 3179 "cplus.met"
                {
#line 3179 "cplus.met"
                    PPTREE _ptRes1=0;
#line 3179 "cplus.met"
                    _ptRes1= MakeTree(OPERATOR, 1);
#line 3179 "cplus.met"
                    ReplaceTree(_ptRes1, 1, MakeString ("()"));
#line 3179 "cplus.met"
                    _ptTree0=_ptRes1;
#line 3179 "cplus.met"
                }
#line 3179 "cplus.met"
                _retValue =_ptTree0;
#line 3179 "cplus.met"
                goto operator_function_name_ret;
#line 3179 "cplus.met"
            }
#line 3179 "cplus.met"
#line 3179 "cplus.met"
            break;
#line 3179 "cplus.met"
#line 3183 "cplus.met"
        case COUV : 
#line 3183 "cplus.met"
            tokenAhead = 0 ;
#line 3183 "cplus.met"
            CommTerm();
#line 3183 "cplus.met"
#line 3182 "cplus.met"
#line 3183 "cplus.met"
            (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3183 "cplus.met"
            if (  !SEE_TOKEN( CFER,"]") || !(CommTerm(),1)) {
#line 3183 "cplus.met"
                MulFreeTree(3,list,retTree,valTree);
                TOKEN_EXIT(operator_function_name_exit,"]")
#line 3183 "cplus.met"
            } else {
#line 3183 "cplus.met"
                tokenAhead = 0 ;
#line 3183 "cplus.met"
            }
#line 3183 "cplus.met"
#line 3184 "cplus.met"
            {
#line 3184 "cplus.met"
                PPTREE _ptTree0=0;
#line 3184 "cplus.met"
                {
#line 3184 "cplus.met"
                    PPTREE _ptRes1=0;
#line 3184 "cplus.met"
                    _ptRes1= MakeTree(OPERATOR, 1);
#line 3184 "cplus.met"
                    ReplaceTree(_ptRes1, 1, MakeString ("[]"));
#line 3184 "cplus.met"
                    _ptTree0=_ptRes1;
#line 3184 "cplus.met"
                }
#line 3184 "cplus.met"
                _retValue =_ptTree0;
#line 3184 "cplus.met"
                goto operator_function_name_ret;
#line 3184 "cplus.met"
            }
#line 3184 "cplus.met"
#line 3184 "cplus.met"
            break;
#line 3184 "cplus.met"
#line 3184 "cplus.met"
        default : 
#line 3184 "cplus.met"
#line 3184 "cplus.met"
            break;
#line 3184 "cplus.met"
    }
#line 3184 "cplus.met"
#line 3188 "cplus.met"
    if (NPUSH_CALL_AFF_VERIF(retTree = ,_Tak(const_or_volatile), 34, cplus)){
#line 3188 "cplus.met"
#line 3189 "cplus.met"
        {
#line 3189 "cplus.met"
            PPTREE _ptRes0=0;
#line 3189 "cplus.met"
            _ptRes0= MakeTree(FOR_DECLARATION, 3);
#line 3189 "cplus.met"
            ReplaceTree(_ptRes0, 1, retTree );
#line 3189 "cplus.met"
            retTree=_ptRes0;
#line 3189 "cplus.met"
        }
#line 3189 "cplus.met"
    } else {
#line 3189 "cplus.met"
#line 3191 "cplus.met"
        {
#line 3191 "cplus.met"
            PPTREE _ptRes0=0;
#line 3191 "cplus.met"
            _ptRes0= MakeTree(FOR_DECLARATION, 3);
#line 3191 "cplus.met"
            retTree=_ptRes0;
#line 3191 "cplus.met"
        }
#line 3191 "cplus.met"
    }
#line 3191 "cplus.met"
#line 3192 "cplus.met"
    {
#line 3192 "cplus.met"
        PPTREE _ptTree0=0;
#line 3192 "cplus.met"
        if ( (_ptTree0=NQUICK_CALL(_Tak(type_specifier)(error_free), 153, cplus))== (PPTREE) -1 ) {
#line 3192 "cplus.met"
            MulFreeTree(4,_ptTree0,list,retTree,valTree);
            PROG_EXIT(operator_function_name_exit,"operator_function_name")
#line 3192 "cplus.met"
        }
#line 3192 "cplus.met"
        ReplaceTree(retTree , 2 , _ptTree0);
#line 3192 "cplus.met"
    }
#line 3192 "cplus.met"
#line 3193 "cplus.met"
    if (NPUSH_CALL_AFF_VERIF(valTree = ,_Tak(ptr_operator), 120, cplus)){
#line 3193 "cplus.met"
#line 3194 "cplus.met"
#line 3195 "cplus.met"
        list =AddList(list ,valTree );
#line 3195 "cplus.met"
#line 3196 "cplus.met"
        ReplaceTree(retTree ,3 ,list );
#line 3196 "cplus.met"
#line 3196 "cplus.met"
#line 3196 "cplus.met"
    }
#line 3196 "cplus.met"
#line 3198 "cplus.met"
    {
#line 3198 "cplus.met"
        PPTREE _ptTree0=0;
#line 3198 "cplus.met"
        {
#line 3198 "cplus.met"
            PPTREE _ptRes1=0;
#line 3198 "cplus.met"
            _ptRes1= MakeTree(OPERATOR, 1);
#line 3198 "cplus.met"
            ReplaceTree(_ptRes1, 1, retTree );
#line 3198 "cplus.met"
            _ptTree0=_ptRes1;
#line 3198 "cplus.met"
        }
#line 3198 "cplus.met"
        _retValue =_ptTree0;
#line 3198 "cplus.met"
        goto operator_function_name_ret;
#line 3198 "cplus.met"
    }
#line 3198 "cplus.met"
#line 3198 "cplus.met"
#line 3198 "cplus.met"

#line 3199 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 3199 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 3199 "cplus.met"
return((PPTREE) 0);
#line 3199 "cplus.met"

#line 3199 "cplus.met"
operator_function_name_exit :
#line 3199 "cplus.met"

#line 3199 "cplus.met"
    _Debug = TRACE_RULE("operator_function_name",TRACE_EXIT,(PPTREE)0);
#line 3199 "cplus.met"
    _funcLevel--;
#line 3199 "cplus.met"
    return((PPTREE) -1) ;
#line 3199 "cplus.met"

#line 3199 "cplus.met"
operator_function_name_ret :
#line 3199 "cplus.met"
    
#line 3199 "cplus.met"
    _Debug = TRACE_RULE("operator_function_name",TRACE_RETURN,_retValue);
#line 3199 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 3199 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 3199 "cplus.met"
    return _retValue ;
#line 3199 "cplus.met"
}
#line 3199 "cplus.met"

#line 3199 "cplus.met"
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
#line 3230 "cplus.met"
PPTREE cplus::parameter_list ( int error_free)
#line 3230 "cplus.met"
{
#line 3230 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 3230 "cplus.met"
    int _value,_nbPre = 0 ;
#line 3230 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 3230 "cplus.met"
    int _Debug = TRACE_RULE("parameter_list",TRACE_ENTER,(PPTREE)0);
#line 3230 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 3230 "cplus.met"
#line 3230 "cplus.met"
    PPTREE _addlist1 = (PPTREE) 0;
#line 3230 "cplus.met"
#line 3230 "cplus.met"
    PPTREE paramList = (PPTREE) 0,none = (PPTREE) 0;
#line 3230 "cplus.met"
#line 3232 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3232 "cplus.met"
    if (  !SEE_TOKEN( POUV,"(") || !(CommTerm(),1)) {
#line 3232 "cplus.met"
        MulFreeTree(3,_addlist1,none,paramList);
        TOKEN_EXIT(parameter_list_exit,"(")
#line 3232 "cplus.met"
    } else {
#line 3232 "cplus.met"
        tokenAhead = 0 ;
#line 3232 "cplus.met"
    }
#line 3232 "cplus.met"
#line 3233 "cplus.met"
    if ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN( IDENT,"IDENT")){
#line 3233 "cplus.met"
#line 3234 "cplus.met"
#line 3235 "cplus.met"
         { int exit = 0 ;
#line 3235 "cplus.met"
#line 3236 "cplus.met"
        {
#line 3236 "cplus.met"
            PPTREE _ptTree0=0;
#line 3236 "cplus.met"
            {
#line 3236 "cplus.met"
                PPTREE _ptTree1=0,_ptRes1=0;
#line 3236 "cplus.met"
                _ptRes1= MakeTree(IDENT, 1);
#line 3236 "cplus.met"
                (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3236 "cplus.met"
                if ( ! TERM_OR_META(IDENT,"IDENT") || !(BUILD_TERM_META(_ptTree1))) {
#line 3236 "cplus.met"
                    MulFreeTree(6,_ptRes1,_ptTree1,_ptTree0,_addlist1,none,paramList);
                    TOKEN_EXIT(parameter_list_exit,"IDENT")
#line 3236 "cplus.met"
                } else {
#line 3236 "cplus.met"
                    tokenAhead = 0 ;
#line 3236 "cplus.met"
                }
#line 3236 "cplus.met"
                ReplaceTree(_ptRes1, 1, _ptTree1);
#line 3236 "cplus.met"
                _ptTree0=_ptRes1;
#line 3236 "cplus.met"
            }
#line 3236 "cplus.met"
            paramList =AddList(paramList , _ptTree0);
#line 3236 "cplus.met"
        }
#line 3236 "cplus.met"
#line 3236 "cplus.met"
        _addlist1 = paramList ;
#line 3236 "cplus.met"
#line 3237 "cplus.met"
        while ((! ( exit )) && 
#line 3237 "cplus.met"
              ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN(VIRG,",") && (tokenAhead = 0,CommTerm(),1))) { 
#line 3237 "cplus.met"
#line 3238 "cplus.met"
            if ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN( IDENT,"IDENT")){
#line 3238 "cplus.met"
#line 3239 "cplus.met"
#line 3239 "cplus.met"
                {
#line 3239 "cplus.met"
                    PPTREE _ptTree0=0;
#line 3239 "cplus.met"
                    {
#line 3239 "cplus.met"
                        PPTREE _ptTree1=0,_ptRes1=0;
#line 3239 "cplus.met"
                        _ptRes1= MakeTree(IDENT, 1);
#line 3239 "cplus.met"
                        (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3239 "cplus.met"
                        if ( ! TERM_OR_META(IDENT,"IDENT") || !(BUILD_TERM_META(_ptTree1))) {
#line 3239 "cplus.met"
                            MulFreeTree(6,_ptRes1,_ptTree1,_ptTree0,_addlist1,none,paramList);
                            TOKEN_EXIT(parameter_list_exit,"IDENT")
#line 3239 "cplus.met"
                        } else {
#line 3239 "cplus.met"
                            tokenAhead = 0 ;
#line 3239 "cplus.met"
                        }
#line 3239 "cplus.met"
                        ReplaceTree(_ptRes1, 1, _ptTree1);
#line 3239 "cplus.met"
                        _ptTree0=_ptRes1;
#line 3239 "cplus.met"
                    }
#line 3239 "cplus.met"
                    _addlist1 =AddList(_addlist1 , _ptTree0);
#line 3239 "cplus.met"
                }
#line 3239 "cplus.met"
#line 3239 "cplus.met"
                if (paramList){
#line 3239 "cplus.met"
#line 3239 "cplus.met"
                    _addlist1 = SonTree (_addlist1 ,2 );
#line 3239 "cplus.met"
                } else {
#line 3239 "cplus.met"
#line 3239 "cplus.met"
                    paramList = _addlist1 ;
#line 3239 "cplus.met"
                }
#line 3239 "cplus.met"
            } else {
#line 3239 "cplus.met"
#line 3241 "cplus.met"
#line 3242 "cplus.met"
                {
#line 3242 "cplus.met"
                    PPTREE _ptTree0=0;
#line 3242 "cplus.met"
                    {
#line 3242 "cplus.met"
                        PPTREE _ptRes1=0;
#line 3242 "cplus.met"
                        _ptRes1= MakeTree(VAR_LIST, 0);
#line 3242 "cplus.met"
                        _ptTree0=_ptRes1;
#line 3242 "cplus.met"
                    }
#line 3242 "cplus.met"
                    _addlist1 =AddList(_addlist1 , _ptTree0);
#line 3242 "cplus.met"
                }
#line 3242 "cplus.met"
#line 3242 "cplus.met"
                if (paramList){
#line 3242 "cplus.met"
#line 3242 "cplus.met"
                    _addlist1 = SonTree (_addlist1 ,2 );
#line 3242 "cplus.met"
                } else {
#line 3242 "cplus.met"
#line 3242 "cplus.met"
                    paramList = _addlist1 ;
#line 3242 "cplus.met"
                }
#line 3242 "cplus.met"
#line 3243 "cplus.met"
                 exit = 1 ;
#line 3243 "cplus.met"
#line 3244 "cplus.met"
                if ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN(POINPOINPOIN,"...") && (tokenAhead = 0,CommTerm(),1)){
#line 3244 "cplus.met"
#line 3244 "cplus.met"
                }
#line 3244 "cplus.met"
#line 3244 "cplus.met"
            }
#line 3244 "cplus.met"
        } 
#line 3244 "cplus.met"
#line 3247 "cplus.met"
        if ((! ( exit )) && 
#line 3247 "cplus.met"
           ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN(POINPOINPOIN,"...") && (tokenAhead = 0,CommTerm(),1))){
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
                    _ptRes1= MakeTree(VAR_LIST, 0);
#line 3248 "cplus.met"
                    _ptTree0=_ptRes1;
#line 3248 "cplus.met"
                }
#line 3248 "cplus.met"
                paramList =AddList(paramList , _ptTree0);
#line 3248 "cplus.met"
            }
#line 3248 "cplus.met"
#line 3248 "cplus.met"
        }
#line 3248 "cplus.met"
#line 3249 "cplus.met"
         } 
#line 3249 "cplus.met"
#line 3249 "cplus.met"
#line 3249 "cplus.met"
    } else {
#line 3249 "cplus.met"
#line 3252 "cplus.met"
        paramList =AddList(paramList ,none );
#line 3252 "cplus.met"
    }
#line 3252 "cplus.met"
#line 3253 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3253 "cplus.met"
    if (  !SEE_TOKEN( PFER,")") || !(CommTerm(),1)) {
#line 3253 "cplus.met"
        MulFreeTree(3,_addlist1,none,paramList);
        TOKEN_EXIT(parameter_list_exit,")")
#line 3253 "cplus.met"
    } else {
#line 3253 "cplus.met"
        tokenAhead = 0 ;
#line 3253 "cplus.met"
    }
#line 3253 "cplus.met"
#line 3254 "cplus.met"
    {
#line 3254 "cplus.met"
        _retValue = paramList ;
#line 3254 "cplus.met"
        goto parameter_list_ret;
#line 3254 "cplus.met"
        
#line 3254 "cplus.met"
    }
#line 3254 "cplus.met"
#line 3254 "cplus.met"
#line 3254 "cplus.met"

#line 3255 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 3255 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 3255 "cplus.met"
return((PPTREE) 0);
#line 3255 "cplus.met"

#line 3255 "cplus.met"
parameter_list_exit :
#line 3255 "cplus.met"

#line 3255 "cplus.met"
    _Debug = TRACE_RULE("parameter_list",TRACE_EXIT,(PPTREE)0);
#line 3255 "cplus.met"
    _funcLevel--;
#line 3255 "cplus.met"
    return((PPTREE) -1) ;
#line 3255 "cplus.met"

#line 3255 "cplus.met"
parameter_list_ret :
#line 3255 "cplus.met"
    
#line 3255 "cplus.met"
    _Debug = TRACE_RULE("parameter_list",TRACE_RETURN,_retValue);
#line 3255 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 3255 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 3255 "cplus.met"
    return _retValue ;
#line 3255 "cplus.met"
}
#line 3255 "cplus.met"

#line 3255 "cplus.met"
