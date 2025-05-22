/*************************************************************************/
/*                                                                       */
/*        Produced by MetaGen version 2.0  -    1989-2006                 */
/*       Syntaxic Analyzer Meta Generator developped by                  */
/*                  Eric Lavillonniere                                   */
/*                                                                       */
/*************************************************************************/

#include "token.h"
#include "cplus.h"


#line 3688 "cplus.met"
PPTREE cplus::name_space ( int error_free)
#line 3688 "cplus.met"
{
#line 3688 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 3688 "cplus.met"
    int _value,_nbPre = 0 ;
#line 3688 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 3688 "cplus.met"
    int _Debug = TRACE_RULE("name_space",TRACE_ENTER,(PPTREE)0);
#line 3688 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 3688 "cplus.met"
#line 3688 "cplus.met"
    PPTREE _addlist1 = (PPTREE) 0;
#line 3688 "cplus.met"
#line 3688 "cplus.met"
    PPTREE list = (PPTREE) 0,retTree = (PPTREE) 0,ident = (PPTREE) 0,attrib = (PPTREE) 0;
#line 3688 "cplus.met"
#line 3690 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3690 "cplus.met"
    switch( lexEl.Value) {
#line 3690 "cplus.met"
#line 3691 "cplus.met"
        case NAMESPACE : 
#line 3691 "cplus.met"
            tokenAhead = 0 ;
#line 3691 "cplus.met"
            CommTerm();
#line 3691 "cplus.met"
#line 3692 "cplus.met"
#line 3694 "cplus.met"
            if ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&TERM_OR_META(IDENT,"IDENT") && !(tokenAhead = 0) && ( BUILD_TERM_META(ident))) {
#line 3694 "cplus.met"
#line 3696 "cplus.met"
                {
#line 3696 "cplus.met"
                    PPTREE _ptRes0=0;
#line 3696 "cplus.met"
                    _ptRes0= MakeTree(IDENT, 1);
#line 3696 "cplus.met"
                    ReplaceTree(_ptRes0, 1, ident );
#line 3696 "cplus.met"
                    ident=_ptRes0;
#line 3696 "cplus.met"
                }
#line 3696 "cplus.met"
            }
#line 3696 "cplus.met"
#line 3697 "cplus.met"
            if (NPUSH_CALL_AFF_VERIF(attrib = ,_Tak(attribute_call), 20, cplus)){
#line 3697 "cplus.met"
#line 3697 "cplus.met"
            }
#line 3697 "cplus.met"
#line 3700 "cplus.met"
            (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3700 "cplus.met"
            switch( lexEl.Value) {
#line 3700 "cplus.met"
#line 3704 "cplus.met"
                case AOUV : 
#line 3704 "cplus.met"
                    tokenAhead = 0 ;
#line 3704 "cplus.met"
                    CommTerm();
#line 3704 "cplus.met"
#line 3703 "cplus.met"
#line 3704 "cplus.met"
                    {
#line 3704 "cplus.met"
                        PPTREE _ptRes0=0;
#line 3704 "cplus.met"
                        _ptRes0= MakeTree(NAMESPACE, 3);
#line 3704 "cplus.met"
                        ReplaceTree(_ptRes0, 1, ident );
#line 3704 "cplus.met"
                        ReplaceTree(_ptRes0, 3, attrib );
#line 3704 "cplus.met"
                        retTree=_ptRes0;
#line 3704 "cplus.met"
                    }
#line 3704 "cplus.met"
#line 3704 "cplus.met"
                    _addlist1 = list ;
#line 3704 "cplus.met"
#line 3705 "cplus.met"
                    while (! ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN(AFER,"}") && (tokenAhead = 0,CommTerm(),1))) { 
#line 3705 "cplus.met"
#line 3706 "cplus.met"
#line 3707 "cplus.met"
                        {
#line 3707 "cplus.met"
                            PPTREE _ptTree0=0;
#line 3707 "cplus.met"
                            if ( (_ptTree0=NQUICK_CALL(_Tak(ext_all)(error_free), 67, cplus))== (PPTREE) -1 ) {
#line 3707 "cplus.met"
                                MulFreeTree(6,_ptTree0,_addlist1,attrib,ident,list,retTree);
                                PROG_EXIT(name_space_exit,"name_space")
#line 3707 "cplus.met"
                            }
#line 3707 "cplus.met"
                            _addlist1 =AddList(_addlist1 , _ptTree0);
#line 3707 "cplus.met"
                        }
#line 3707 "cplus.met"
#line 3707 "cplus.met"
                        if (list){
#line 3707 "cplus.met"
#line 3707 "cplus.met"
                            _addlist1 = SonTree (_addlist1 ,2 );
#line 3707 "cplus.met"
                        } else {
#line 3707 "cplus.met"
#line 3707 "cplus.met"
                            list = _addlist1 ;
#line 3707 "cplus.met"
                        }
#line 3707 "cplus.met"
#line 3707 "cplus.met"
                    } 
#line 3707 "cplus.met"
#line 3709 "cplus.met"
                    {
#line 3709 "cplus.met"
                        PPTREE _ptTree0=0;
#line 3709 "cplus.met"
                        if ( (_ptTree0=NQUICK_CALL(_Tak(none_statement)(error_free), 106, cplus))== (PPTREE) -1 ) {
#line 3709 "cplus.met"
                            MulFreeTree(6,_ptTree0,_addlist1,attrib,ident,list,retTree);
                            PROG_EXIT(name_space_exit,"name_space")
#line 3709 "cplus.met"
                        }
#line 3709 "cplus.met"
                        list =AddList(list , _ptTree0);
#line 3709 "cplus.met"
                    }
#line 3709 "cplus.met"
#line 3710 "cplus.met"
                    {
#line 3710 "cplus.met"
                        PPTREE _ptTree0=0;
#line 3710 "cplus.met"
                        {
#line 3710 "cplus.met"
                            PPTREE _ptRes1=0;
#line 3710 "cplus.met"
                            _ptRes1= MakeTree(COMPOUND_EXT, 1);
#line 3710 "cplus.met"
                            ReplaceTree(_ptRes1, 1, list );
#line 3710 "cplus.met"
                            _ptTree0=_ptRes1;
#line 3710 "cplus.met"
                        }
#line 3710 "cplus.met"
                        ReplaceTree(retTree , 2 , _ptTree0);
#line 3710 "cplus.met"
                    }
#line 3710 "cplus.met"
#line 3710 "cplus.met"
                    break;
#line 3710 "cplus.met"
#line 3714 "cplus.met"
                case EGAL : 
#line 3714 "cplus.met"
                    tokenAhead = 0 ;
#line 3714 "cplus.met"
                    CommTerm();
#line 3714 "cplus.met"
#line 3713 "cplus.met"
#line 3714 "cplus.met"
                    if ((ident == (PPTREE) 0 )){
#line 3714 "cplus.met"
#line 3715 "cplus.met"
                        
#line 3715 "cplus.met"
                        MulFreeTree(5,_addlist1,attrib,ident,list,retTree);
                        LEX_EXIT ("",0);
#line 3715 "cplus.met"
                        goto name_space_exit;
#line 3715 "cplus.met"
#line 3715 "cplus.met"
                    }
#line 3715 "cplus.met"
#line 3716 "cplus.met"
                    {
#line 3716 "cplus.met"
                        PPTREE _ptTree0=0,_ptRes0=0;
#line 3716 "cplus.met"
                        _ptRes0= MakeTree(NAMESPACE_ALIAS, 2);
#line 3716 "cplus.met"
                        ReplaceTree(_ptRes0, 1, ident );
#line 3716 "cplus.met"
                        if ( (_ptTree0=NQUICK_CALL(_Tak(complete_class_name)(error_free), 30, cplus))== (PPTREE) -1 ) {
#line 3716 "cplus.met"
                            MulFreeTree(7,_ptRes0,_ptTree0,_addlist1,attrib,ident,list,retTree);
                            PROG_EXIT(name_space_exit,"name_space")
#line 3716 "cplus.met"
                        }
#line 3716 "cplus.met"
                        ReplaceTree(_ptRes0, 2, _ptTree0);
#line 3716 "cplus.met"
                        retTree=_ptRes0;
#line 3716 "cplus.met"
                    }
#line 3716 "cplus.met"
#line 3716 "cplus.met"
                    break;
#line 3716 "cplus.met"
                default :
#line 3716 "cplus.met"
                    MulFreeTree(5,_addlist1,attrib,ident,list,retTree);
                    CASE_EXIT(name_space_exit,"either { or =")
#line 3716 "cplus.met"
                    break;
#line 3716 "cplus.met"
            }
#line 3716 "cplus.met"
#line 3716 "cplus.met"
            break;
#line 3716 "cplus.met"
#line 3720 "cplus.met"
        case USING : 
#line 3720 "cplus.met"
            tokenAhead = 0 ;
#line 3720 "cplus.met"
            CommTerm();
#line 3720 "cplus.met"
#line 3721 "cplus.met"
#line 3722 "cplus.met"
            if ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN(NAMESPACE,"namespace") && (tokenAhead = 0,CommTerm(),1)){
#line 3722 "cplus.met"
#line 3723 "cplus.met"
#line 3724 "cplus.met"
                if (NPUSH_CALL_AFF_VERIF(attrib = ,_Tak(attribute_call), 20, cplus)){
#line 3724 "cplus.met"
#line 3724 "cplus.met"
                }
#line 3724 "cplus.met"
#line 3726 "cplus.met"
                {
#line 3726 "cplus.met"
                    PPTREE _ptTree0=0,_ptRes0=0;
#line 3726 "cplus.met"
                    _ptRes0= MakeTree(USING_NAMESPACE, 2);
#line 3726 "cplus.met"
                    if ( (_ptTree0=NQUICK_CALL(_Tak(complete_class_name)(error_free), 30, cplus))== (PPTREE) -1 ) {
#line 3726 "cplus.met"
                        MulFreeTree(7,_ptRes0,_ptTree0,_addlist1,attrib,ident,list,retTree);
                        PROG_EXIT(name_space_exit,"name_space")
#line 3726 "cplus.met"
                    }
#line 3726 "cplus.met"
                    ReplaceTree(_ptRes0, 1, _ptTree0);
#line 3726 "cplus.met"
                    ReplaceTree(_ptRes0, 2, attrib );
#line 3726 "cplus.met"
                    retTree=_ptRes0;
#line 3726 "cplus.met"
                }
#line 3726 "cplus.met"
#line 3726 "cplus.met"
#line 3726 "cplus.met"
            } else {
#line 3726 "cplus.met"
#line 3729 "cplus.met"
                {
#line 3729 "cplus.met"
                    PPTREE _ptTree0=0,_ptRes0=0;
#line 3729 "cplus.met"
                    _ptRes0= MakeTree(USING, 1);
#line 3729 "cplus.met"
                    if ( (_ptTree0=NQUICK_CALL(_Tak(complete_class_name)(error_free), 30, cplus))== (PPTREE) -1 ) {
#line 3729 "cplus.met"
                        MulFreeTree(7,_ptRes0,_ptTree0,_addlist1,attrib,ident,list,retTree);
                        PROG_EXIT(name_space_exit,"name_space")
#line 3729 "cplus.met"
                    }
#line 3729 "cplus.met"
                    ReplaceTree(_ptRes0, 1, _ptTree0);
#line 3729 "cplus.met"
                    retTree=_ptRes0;
#line 3729 "cplus.met"
                }
#line 3729 "cplus.met"
            }
#line 3729 "cplus.met"
#line 3730 "cplus.met"
            (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3730 "cplus.met"
            if (  !SEE_TOKEN( PVIR,";") || !(CommTerm(),1)) {
#line 3730 "cplus.met"
                MulFreeTree(5,_addlist1,attrib,ident,list,retTree);
                TOKEN_EXIT(name_space_exit,";")
#line 3730 "cplus.met"
            } else {
#line 3730 "cplus.met"
                tokenAhead = 0 ;
#line 3730 "cplus.met"
            }
#line 3730 "cplus.met"
#line 3730 "cplus.met"
            break;
#line 3730 "cplus.met"
        default :
#line 3730 "cplus.met"
            MulFreeTree(5,_addlist1,attrib,ident,list,retTree);
            CASE_EXIT(name_space_exit,"either namespace or using")
#line 3730 "cplus.met"
            break;
#line 3730 "cplus.met"
    }
#line 3730 "cplus.met"
#line 3733 "cplus.met"
    {
#line 3733 "cplus.met"
        _retValue = retTree ;
#line 3733 "cplus.met"
        goto name_space_ret;
#line 3733 "cplus.met"
        
#line 3733 "cplus.met"
    }
#line 3733 "cplus.met"
#line 3733 "cplus.met"
#line 3733 "cplus.met"

#line 3734 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 3734 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 3734 "cplus.met"
return((PPTREE) 0);
#line 3734 "cplus.met"

#line 3734 "cplus.met"
name_space_exit :
#line 3734 "cplus.met"

#line 3734 "cplus.met"
    _Debug = TRACE_RULE("name_space",TRACE_EXIT,(PPTREE)0);
#line 3734 "cplus.met"
    _funcLevel--;
#line 3734 "cplus.met"
    return((PPTREE) -1) ;
#line 3734 "cplus.met"

#line 3734 "cplus.met"
name_space_ret :
#line 3734 "cplus.met"
    
#line 3734 "cplus.met"
    _Debug = TRACE_RULE("name_space",TRACE_RETURN,_retValue);
#line 3734 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 3734 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 3734 "cplus.met"
    return _retValue ;
#line 3734 "cplus.met"
}
#line 3734 "cplus.met"

#line 3734 "cplus.met"
#line 2951 "cplus.met"
PPTREE cplus::new_1 ( int error_free)
#line 2951 "cplus.met"
{
#line 2951 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 2951 "cplus.met"
    int _value,_nbPre = 0 ;
#line 2951 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 2951 "cplus.met"
    int _Debug = TRACE_RULE("new_1",TRACE_ENTER,(PPTREE)0);
#line 2951 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 2951 "cplus.met"
#line 2951 "cplus.met"
    PPTREE retTree = (PPTREE) 0;
#line 2951 "cplus.met"
#line 2953 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 2953 "cplus.met"
    if (  !SEE_TOKEN( POUV,"(") || !(CommTerm(),1)) {
#line 2953 "cplus.met"
        MulFreeTree(1,retTree);
        TOKEN_EXIT(new_1_exit,"(")
#line 2953 "cplus.met"
    } else {
#line 2953 "cplus.met"
        tokenAhead = 0 ;
#line 2953 "cplus.met"
    }
#line 2953 "cplus.met"
#line 2954 "cplus.met"
    if ( (retTree=NQUICK_CALL(_Tak(expression)(error_free), 65, cplus))== (PPTREE) -1 ) {
#line 2954 "cplus.met"
        MulFreeTree(1,retTree);
        PROG_EXIT(new_1_exit,"new_1")
#line 2954 "cplus.met"
    }
#line 2954 "cplus.met"
#line 2955 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 2955 "cplus.met"
    if (  !SEE_TOKEN( PFER,")") || !(CommTerm(),1)) {
#line 2955 "cplus.met"
        MulFreeTree(1,retTree);
        TOKEN_EXIT(new_1_exit,")")
#line 2955 "cplus.met"
    } else {
#line 2955 "cplus.met"
        tokenAhead = 0 ;
#line 2955 "cplus.met"
    }
#line 2955 "cplus.met"
#line 2956 "cplus.met"
    if ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN(POUV,"(") && (tokenAhead = 0,CommTerm(),1)){
#line 2956 "cplus.met"
#line 2957 "cplus.met"
#line 2958 "cplus.met"
        {
#line 2958 "cplus.met"
            PPTREE _ptTree0=0,_ptRes0=0;
#line 2958 "cplus.met"
            _ptRes0= MakeTree(NEW, 4);
#line 2958 "cplus.met"
            ReplaceTree(_ptRes0, 1, retTree );
#line 2958 "cplus.met"
            if ( (_ptTree0=NQUICK_CALL(_Tak(type_name)(error_free), 151, cplus))== (PPTREE) -1 ) {
#line 2958 "cplus.met"
                MulFreeTree(3,_ptRes0,_ptTree0,retTree);
                PROG_EXIT(new_1_exit,"new_1")
#line 2958 "cplus.met"
            }
#line 2958 "cplus.met"
            ReplaceTree(_ptRes0, 2, _ptTree0);
#line 2958 "cplus.met"
            retTree=_ptRes0;
#line 2958 "cplus.met"
        }
#line 2958 "cplus.met"
#line 2959 "cplus.met"
        (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 2959 "cplus.met"
        if (  !SEE_TOKEN( PFER,")") || !(CommTerm(),1)) {
#line 2959 "cplus.met"
            MulFreeTree(1,retTree);
            TOKEN_EXIT(new_1_exit,")")
#line 2959 "cplus.met"
        } else {
#line 2959 "cplus.met"
            tokenAhead = 0 ;
#line 2959 "cplus.met"
        }
#line 2959 "cplus.met"
#line 2960 "cplus.met"
        {
#line 2960 "cplus.met"
            _retValue = retTree ;
#line 2960 "cplus.met"
            goto new_1_ret;
#line 2960 "cplus.met"
            
#line 2960 "cplus.met"
        }
#line 2960 "cplus.met"
#line 2960 "cplus.met"
#line 2960 "cplus.met"
    } else {
#line 2960 "cplus.met"
#line 2963 "cplus.met"
        {
#line 2963 "cplus.met"
            PPTREE _ptTree0=0,_ptRes0=0;
#line 2963 "cplus.met"
            _ptRes0= MakeTree(NEW, 4);
#line 2963 "cplus.met"
            ReplaceTree(_ptRes0, 1, retTree );
#line 2963 "cplus.met"
            if ( (_ptTree0=NQUICK_CALL(_Tak(new_type_name)(error_free), 105, cplus))== (PPTREE) -1 ) {
#line 2963 "cplus.met"
                MulFreeTree(3,_ptRes0,_ptTree0,retTree);
                PROG_EXIT(new_1_exit,"new_1")
#line 2963 "cplus.met"
            }
#line 2963 "cplus.met"
            ReplaceTree(_ptRes0, 2, _ptTree0);
#line 2963 "cplus.met"
            retTree=_ptRes0;
#line 2963 "cplus.met"
        }
#line 2963 "cplus.met"
    }
#line 2963 "cplus.met"
#line 2964 "cplus.met"
    {
#line 2964 "cplus.met"
        _retValue = retTree ;
#line 2964 "cplus.met"
        goto new_1_ret;
#line 2964 "cplus.met"
        
#line 2964 "cplus.met"
    }
#line 2964 "cplus.met"
#line 2964 "cplus.met"
#line 2964 "cplus.met"

#line 2965 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2965 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 2965 "cplus.met"
return((PPTREE) 0);
#line 2965 "cplus.met"

#line 2965 "cplus.met"
new_1_exit :
#line 2965 "cplus.met"

#line 2965 "cplus.met"
    _Debug = TRACE_RULE("new_1",TRACE_EXIT,(PPTREE)0);
#line 2965 "cplus.met"
    _funcLevel--;
#line 2965 "cplus.met"
    return((PPTREE) -1) ;
#line 2965 "cplus.met"

#line 2965 "cplus.met"
new_1_ret :
#line 2965 "cplus.met"
    
#line 2965 "cplus.met"
    _Debug = TRACE_RULE("new_1",TRACE_RETURN,_retValue);
#line 2965 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2965 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 2965 "cplus.met"
    return _retValue ;
#line 2965 "cplus.met"
}
#line 2965 "cplus.met"

#line 2965 "cplus.met"
#line 2967 "cplus.met"
PPTREE cplus::new_2 ( int error_free)
#line 2967 "cplus.met"
{
#line 2967 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 2967 "cplus.met"
    int _value,_nbPre = 0 ;
#line 2967 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 2967 "cplus.met"
    int _Debug = TRACE_RULE("new_2",TRACE_ENTER,(PPTREE)0);
#line 2967 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 2967 "cplus.met"
#line 2967 "cplus.met"
    PPTREE retTree = (PPTREE) 0;
#line 2967 "cplus.met"
#line 2969 "cplus.met"
    if ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN(POUV,"(") && (tokenAhead = 0,CommTerm(),1)){
#line 2969 "cplus.met"
#line 2970 "cplus.met"
#line 2971 "cplus.met"
        {
#line 2971 "cplus.met"
            PPTREE _ptTree0=0,_ptRes0=0;
#line 2971 "cplus.met"
            _ptRes0= MakeTree(NEW, 4);
#line 2971 "cplus.met"
            if ( (_ptTree0=NQUICK_CALL(_Tak(type_name)(error_free), 151, cplus))== (PPTREE) -1 ) {
#line 2971 "cplus.met"
                MulFreeTree(3,_ptRes0,_ptTree0,retTree);
                PROG_EXIT(new_2_exit,"new_2")
#line 2971 "cplus.met"
            }
#line 2971 "cplus.met"
            ReplaceTree(_ptRes0, 2, _ptTree0);
#line 2971 "cplus.met"
            retTree=_ptRes0;
#line 2971 "cplus.met"
        }
#line 2971 "cplus.met"
#line 2972 "cplus.met"
        (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 2972 "cplus.met"
        if (  !SEE_TOKEN( PFER,")") || !(CommTerm(),1)) {
#line 2972 "cplus.met"
            MulFreeTree(1,retTree);
            TOKEN_EXIT(new_2_exit,")")
#line 2972 "cplus.met"
        } else {
#line 2972 "cplus.met"
            tokenAhead = 0 ;
#line 2972 "cplus.met"
        }
#line 2972 "cplus.met"
#line 2973 "cplus.met"
        {
#line 2973 "cplus.met"
            _retValue = retTree ;
#line 2973 "cplus.met"
            goto new_2_ret;
#line 2973 "cplus.met"
            
#line 2973 "cplus.met"
        }
#line 2973 "cplus.met"
#line 2973 "cplus.met"
#line 2973 "cplus.met"
    } else {
#line 2973 "cplus.met"
#line 2976 "cplus.met"
        {
#line 2976 "cplus.met"
            PPTREE _ptTree0=0,_ptRes0=0;
#line 2976 "cplus.met"
            _ptRes0= MakeTree(NEW, 4);
#line 2976 "cplus.met"
            if ( (_ptTree0=NQUICK_CALL(_Tak(new_type_name)(error_free), 105, cplus))== (PPTREE) -1 ) {
#line 2976 "cplus.met"
                MulFreeTree(3,_ptRes0,_ptTree0,retTree);
                PROG_EXIT(new_2_exit,"new_2")
#line 2976 "cplus.met"
            }
#line 2976 "cplus.met"
            ReplaceTree(_ptRes0, 2, _ptTree0);
#line 2976 "cplus.met"
            retTree=_ptRes0;
#line 2976 "cplus.met"
        }
#line 2976 "cplus.met"
    }
#line 2976 "cplus.met"
#line 2977 "cplus.met"
    {
#line 2977 "cplus.met"
        _retValue = retTree ;
#line 2977 "cplus.met"
        goto new_2_ret;
#line 2977 "cplus.met"
        
#line 2977 "cplus.met"
    }
#line 2977 "cplus.met"
#line 2977 "cplus.met"
#line 2977 "cplus.met"

#line 2978 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2978 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 2978 "cplus.met"
return((PPTREE) 0);
#line 2978 "cplus.met"

#line 2978 "cplus.met"
new_2_exit :
#line 2978 "cplus.met"

#line 2978 "cplus.met"
    _Debug = TRACE_RULE("new_2",TRACE_EXIT,(PPTREE)0);
#line 2978 "cplus.met"
    _funcLevel--;
#line 2978 "cplus.met"
    return((PPTREE) -1) ;
#line 2978 "cplus.met"

#line 2978 "cplus.met"
new_2_ret :
#line 2978 "cplus.met"
    
#line 2978 "cplus.met"
    _Debug = TRACE_RULE("new_2",TRACE_RETURN,_retValue);
#line 2978 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2978 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 2978 "cplus.met"
    return _retValue ;
#line 2978 "cplus.met"
}
#line 2978 "cplus.met"

#line 2978 "cplus.met"
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
    if (NPUSH_CALL_AFF_VERIF(valTree = ,_Tak(range_modifier), 125, cplus)){
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
                if ( (_ptTree1=NQUICK_CALL(_Tak(new_declarator)(error_free), 104, cplus))== (PPTREE) -1 ) {
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
                    if ( (_ptTree1=NQUICK_CALL(_Tak(new_declarator)(error_free), 104, cplus))== (PPTREE) -1 ) {
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
            if ( (valTree=NQUICK_CALL(_Tak(member_declarator)(error_free), 98, cplus))== (PPTREE) -1 ) {
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
                    if ( (_ptTree1=NQUICK_CALL(_Tak(new_declarator)(error_free), 104, cplus))== (PPTREE) -1 ) {
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
                if (NPUSH_CALL_AFF_VERIF(expList = ,_Tak(expression), 65, cplus)){
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
#line 2676 "cplus.met"
PPTREE cplus::new_type_name ( int error_free)
#line 2676 "cplus.met"
{
#line 2676 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 2676 "cplus.met"
    int _value,_nbPre = 0 ;
#line 2676 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 2676 "cplus.met"
    int _Debug = TRACE_RULE("new_type_name",TRACE_ENTER,(PPTREE)0);
#line 2676 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 2676 "cplus.met"
#line 2676 "cplus.met"
    PPTREE retTree = (PPTREE) 0,valTree = (PPTREE) 0;
#line 2676 "cplus.met"
#line 2678 "cplus.met"
    if ( (retTree=NQUICK_CALL(_Tak(type_specifier)(error_free), 152, cplus))== (PPTREE) -1 ) {
#line 2678 "cplus.met"
        MulFreeTree(2,retTree,valTree);
        PROG_EXIT(new_type_name_exit,"new_type_name")
#line 2678 "cplus.met"
    }
#line 2678 "cplus.met"
#line 2679 "cplus.met"
    if (NPUSH_CALL_AFF_VERIF(valTree = ,_Tak(new_declarator), 104, cplus)){
#line 2679 "cplus.met"
#line 2680 "cplus.met"
        {
#line 2680 "cplus.met"
            PPTREE _ptRes0=0;
#line 2680 "cplus.met"
            _ptRes0= MakeTree(NEW_DECLARATOR, 2);
#line 2680 "cplus.met"
            ReplaceTree(_ptRes0, 1, retTree );
#line 2680 "cplus.met"
            ReplaceTree(_ptRes0, 2, valTree );
#line 2680 "cplus.met"
            valTree=_ptRes0;
#line 2680 "cplus.met"
        }
#line 2680 "cplus.met"
    } else {
#line 2680 "cplus.met"
#line 2682 "cplus.met"
        valTree = retTree ;
#line 2682 "cplus.met"
    }
#line 2682 "cplus.met"
#line 2683 "cplus.met"
    {
#line 2683 "cplus.met"
        _retValue = valTree ;
#line 2683 "cplus.met"
        goto new_type_name_ret;
#line 2683 "cplus.met"
        
#line 2683 "cplus.met"
    }
#line 2683 "cplus.met"
#line 2683 "cplus.met"
#line 2683 "cplus.met"

#line 2684 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2684 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 2684 "cplus.met"
return((PPTREE) 0);
#line 2684 "cplus.met"

#line 2684 "cplus.met"
new_type_name_exit :
#line 2684 "cplus.met"

#line 2684 "cplus.met"
    _Debug = TRACE_RULE("new_type_name",TRACE_EXIT,(PPTREE)0);
#line 2684 "cplus.met"
    _funcLevel--;
#line 2684 "cplus.met"
    return((PPTREE) -1) ;
#line 2684 "cplus.met"

#line 2684 "cplus.met"
new_type_name_ret :
#line 2684 "cplus.met"
    
#line 2684 "cplus.met"
    _Debug = TRACE_RULE("new_type_name",TRACE_RETURN,_retValue);
#line 2684 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2684 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 2684 "cplus.met"
    return _retValue ;
#line 2684 "cplus.met"
}
#line 2684 "cplus.met"

#line 2684 "cplus.met"
#line 3404 "cplus.met"
PPTREE cplus::none_statement ( int error_free)
#line 3404 "cplus.met"
{
#line 3404 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 3404 "cplus.met"
    int _value,_nbPre = 0 ;
#line 3404 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 3404 "cplus.met"
    int _Debug = TRACE_RULE("none_statement",TRACE_ENTER,(PPTREE)0);
#line 3404 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 3404 "cplus.met"
#line 3405 "cplus.met"
    {
#line 3405 "cplus.met"
        PPTREE _ptTree0=0;
#line 3405 "cplus.met"
        {
#line 3405 "cplus.met"
            PPTREE _ptRes1=0;
#line 3405 "cplus.met"
            _ptRes1= MakeTree(NONE, 0);
#line 3405 "cplus.met"
            _ptTree0=_ptRes1;
#line 3405 "cplus.met"
        }
#line 3405 "cplus.met"
        _retValue =_ptTree0;
#line 3405 "cplus.met"
        goto none_statement_ret;
#line 3405 "cplus.met"
    }
#line 3405 "cplus.met"
#line 3405 "cplus.met"
#line 3405 "cplus.met"

#line 3406 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 3406 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 3406 "cplus.met"
return((PPTREE) 0);
#line 3406 "cplus.met"

#line 3406 "cplus.met"
none_statement_exit :
#line 3406 "cplus.met"

#line 3406 "cplus.met"
    _Debug = TRACE_RULE("none_statement",TRACE_EXIT,(PPTREE)0);
#line 3406 "cplus.met"
    _funcLevel--;
#line 3406 "cplus.met"
    return((PPTREE) -1) ;
#line 3406 "cplus.met"

#line 3406 "cplus.met"
none_statement_ret :
#line 3406 "cplus.met"
    
#line 3406 "cplus.met"
    _Debug = TRACE_RULE("none_statement",TRACE_RETURN,_retValue);
#line 3406 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 3406 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 3406 "cplus.met"
    return _retValue ;
#line 3406 "cplus.met"
}
#line 3406 "cplus.met"

#line 3406 "cplus.met"
#line 3126 "cplus.met"
PPTREE cplus::operator_function_name ( int error_free)
#line 3126 "cplus.met"
{
#line 3126 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 3126 "cplus.met"
    int _value,_nbPre = 0 ;
#line 3126 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 3126 "cplus.met"
    int _Debug = TRACE_RULE("operator_function_name",TRACE_ENTER,(PPTREE)0);
#line 3126 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 3126 "cplus.met"
#line 3126 "cplus.met"
    PPTREE retTree = (PPTREE) 0,valTree = (PPTREE) 0,list = (PPTREE) 0;
#line 3126 "cplus.met"
#line 3128 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3128 "cplus.met"
    if (  !SEE_TOKEN( OPERATOR,"operator") || !(CommTerm(),1)) {
#line 3128 "cplus.met"
        MulFreeTree(3,list,retTree,valTree);
        TOKEN_EXIT(operator_function_name_exit,"operator")
#line 3128 "cplus.met"
    } else {
#line 3128 "cplus.met"
        tokenAhead = 0 ;
#line 3128 "cplus.met"
    }
#line 3128 "cplus.met"
#line 3129 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3129 "cplus.met"
    switch( lexEl.Value) {
#line 3129 "cplus.met"
#line 3130 "cplus.met"
        case NEW : 
#line 3130 "cplus.met"
            tokenAhead = 0 ;
#line 3130 "cplus.met"
            CommTerm();
#line 3130 "cplus.met"
#line 3130 "cplus.met"
            {
#line 3130 "cplus.met"
                PPTREE _ptTree0=0;
#line 3130 "cplus.met"
                {
#line 3130 "cplus.met"
                    PPTREE _ptRes1=0;
#line 3130 "cplus.met"
                    _ptRes1= MakeTree(OPERATOR, 1);
#line 3130 "cplus.met"
                    ReplaceTree(_ptRes1, 1, MakeString ("new"));
#line 3130 "cplus.met"
                    _ptTree0=_ptRes1;
#line 3130 "cplus.met"
                }
#line 3130 "cplus.met"
                _retValue =_ptTree0;
#line 3130 "cplus.met"
                goto operator_function_name_ret;
#line 3130 "cplus.met"
            }
#line 3130 "cplus.met"
            break;
#line 3130 "cplus.met"
#line 3131 "cplus.met"
        case DELETE : 
#line 3131 "cplus.met"
            tokenAhead = 0 ;
#line 3131 "cplus.met"
            CommTerm();
#line 3131 "cplus.met"
#line 3131 "cplus.met"
            {
#line 3131 "cplus.met"
                PPTREE _ptTree0=0;
#line 3131 "cplus.met"
                {
#line 3131 "cplus.met"
                    PPTREE _ptRes1=0;
#line 3131 "cplus.met"
                    _ptRes1= MakeTree(OPERATOR, 1);
#line 3131 "cplus.met"
                    ReplaceTree(_ptRes1, 1, MakeString ("delete"));
#line 3131 "cplus.met"
                    _ptTree0=_ptRes1;
#line 3131 "cplus.met"
                }
#line 3131 "cplus.met"
                _retValue =_ptTree0;
#line 3131 "cplus.met"
                goto operator_function_name_ret;
#line 3131 "cplus.met"
            }
#line 3131 "cplus.met"
            break;
#line 3131 "cplus.met"
#line 3132 "cplus.met"
        case PLUS : 
#line 3132 "cplus.met"
            tokenAhead = 0 ;
#line 3132 "cplus.met"
            CommTerm();
#line 3132 "cplus.met"
#line 3132 "cplus.met"
            {
#line 3132 "cplus.met"
                PPTREE _ptTree0=0;
#line 3132 "cplus.met"
                {
#line 3132 "cplus.met"
                    PPTREE _ptRes1=0;
#line 3132 "cplus.met"
                    _ptRes1= MakeTree(OPERATOR, 1);
#line 3132 "cplus.met"
                    ReplaceTree(_ptRes1, 1, MakeString ("+"));
#line 3132 "cplus.met"
                    _ptTree0=_ptRes1;
#line 3132 "cplus.met"
                }
#line 3132 "cplus.met"
                _retValue =_ptTree0;
#line 3132 "cplus.met"
                goto operator_function_name_ret;
#line 3132 "cplus.met"
            }
#line 3132 "cplus.met"
            break;
#line 3132 "cplus.met"
#line 3133 "cplus.met"
        case TIRE : 
#line 3133 "cplus.met"
            tokenAhead = 0 ;
#line 3133 "cplus.met"
            CommTerm();
#line 3133 "cplus.met"
#line 3133 "cplus.met"
            {
#line 3133 "cplus.met"
                PPTREE _ptTree0=0;
#line 3133 "cplus.met"
                {
#line 3133 "cplus.met"
                    PPTREE _ptRes1=0;
#line 3133 "cplus.met"
                    _ptRes1= MakeTree(OPERATOR, 1);
#line 3133 "cplus.met"
                    ReplaceTree(_ptRes1, 1, MakeString ("-"));
#line 3133 "cplus.met"
                    _ptTree0=_ptRes1;
#line 3133 "cplus.met"
                }
#line 3133 "cplus.met"
                _retValue =_ptTree0;
#line 3133 "cplus.met"
                goto operator_function_name_ret;
#line 3133 "cplus.met"
            }
#line 3133 "cplus.met"
            break;
#line 3133 "cplus.met"
#line 3134 "cplus.met"
        case ETOI : 
#line 3134 "cplus.met"
            tokenAhead = 0 ;
#line 3134 "cplus.met"
            CommTerm();
#line 3134 "cplus.met"
#line 3134 "cplus.met"
            {
#line 3134 "cplus.met"
                PPTREE _ptTree0=0;
#line 3134 "cplus.met"
                {
#line 3134 "cplus.met"
                    PPTREE _ptRes1=0;
#line 3134 "cplus.met"
                    _ptRes1= MakeTree(OPERATOR, 1);
#line 3134 "cplus.met"
                    ReplaceTree(_ptRes1, 1, MakeString ("*"));
#line 3134 "cplus.met"
                    _ptTree0=_ptRes1;
#line 3134 "cplus.met"
                }
#line 3134 "cplus.met"
                _retValue =_ptTree0;
#line 3134 "cplus.met"
                goto operator_function_name_ret;
#line 3134 "cplus.met"
            }
#line 3134 "cplus.met"
            break;
#line 3134 "cplus.met"
#line 3135 "cplus.met"
        case META : 
#line 3135 "cplus.met"
        case SLAS : 
#line 3135 "cplus.met"
            tokenAhead = 0 ;
#line 3135 "cplus.met"
            CommTerm();
#line 3135 "cplus.met"
#line 3135 "cplus.met"
            {
#line 3135 "cplus.met"
                PPTREE _ptTree0=0;
#line 3135 "cplus.met"
                {
#line 3135 "cplus.met"
                    PPTREE _ptRes1=0;
#line 3135 "cplus.met"
                    _ptRes1= MakeTree(OPERATOR, 1);
#line 3135 "cplus.met"
                    ReplaceTree(_ptRes1, 1, MakeString ("/"));
#line 3135 "cplus.met"
                    _ptTree0=_ptRes1;
#line 3135 "cplus.met"
                }
#line 3135 "cplus.met"
                _retValue =_ptTree0;
#line 3135 "cplus.met"
                goto operator_function_name_ret;
#line 3135 "cplus.met"
            }
#line 3135 "cplus.met"
            break;
#line 3135 "cplus.met"
#line 3136 "cplus.met"
        case POURC : 
#line 3136 "cplus.met"
            tokenAhead = 0 ;
#line 3136 "cplus.met"
            CommTerm();
#line 3136 "cplus.met"
#line 3136 "cplus.met"
            {
#line 3136 "cplus.met"
                PPTREE _ptTree0=0;
#line 3136 "cplus.met"
                {
#line 3136 "cplus.met"
                    PPTREE _ptRes1=0;
#line 3136 "cplus.met"
                    _ptRes1= MakeTree(OPERATOR, 1);
#line 3136 "cplus.met"
                    ReplaceTree(_ptRes1, 1, MakeString ("%"));
#line 3136 "cplus.met"
                    _ptTree0=_ptRes1;
#line 3136 "cplus.met"
                }
#line 3136 "cplus.met"
                _retValue =_ptTree0;
#line 3136 "cplus.met"
                goto operator_function_name_ret;
#line 3136 "cplus.met"
            }
#line 3136 "cplus.met"
            break;
#line 3136 "cplus.met"
#line 3137 "cplus.met"
        case CHAP : 
#line 3137 "cplus.met"
            tokenAhead = 0 ;
#line 3137 "cplus.met"
            CommTerm();
#line 3137 "cplus.met"
#line 3137 "cplus.met"
            {
#line 3137 "cplus.met"
                PPTREE _ptTree0=0;
#line 3137 "cplus.met"
                {
#line 3137 "cplus.met"
                    PPTREE _ptRes1=0;
#line 3137 "cplus.met"
                    _ptRes1= MakeTree(OPERATOR, 1);
#line 3137 "cplus.met"
                    ReplaceTree(_ptRes1, 1, MakeString ("^"));
#line 3137 "cplus.met"
                    _ptTree0=_ptRes1;
#line 3137 "cplus.met"
                }
#line 3137 "cplus.met"
                _retValue =_ptTree0;
#line 3137 "cplus.met"
                goto operator_function_name_ret;
#line 3137 "cplus.met"
            }
#line 3137 "cplus.met"
            break;
#line 3137 "cplus.met"
#line 3138 "cplus.met"
        case ETCO : 
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
                    ReplaceTree(_ptRes1, 1, MakeString ("&"));
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
        case VBAR : 
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
                    ReplaceTree(_ptRes1, 1, MakeString ("|"));
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
        case TILD : 
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
                    ReplaceTree(_ptRes1, 1, MakeString ("~"));
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
        case EXCL : 
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
                    ReplaceTree(_ptRes1, 1, MakeString ("!"));
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
        case EGAL : 
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
                    ReplaceTree(_ptRes1, 1, MakeString ("="));
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
        case SUPE : 
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
                    ReplaceTree(_ptRes1, 1, MakeString (">"));
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
        case INFE : 
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
                    ReplaceTree(_ptRes1, 1, MakeString ("<"));
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
        case PLUSEGAL : 
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
                    ReplaceTree(_ptRes1, 1, MakeString ("+="));
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
        case TIREEGAL : 
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
                    ReplaceTree(_ptRes1, 1, MakeString ("-="));
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
        case ETOIEGAL : 
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
                    ReplaceTree(_ptRes1, 1, MakeString ("*="));
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
        case SLASEGAL : 
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
                    ReplaceTree(_ptRes1, 1, MakeString ("/="));
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
        case POURCEGAL : 
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
                    ReplaceTree(_ptRes1, 1, MakeString ("%="));
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
        case CHAPEGAL : 
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
                    ReplaceTree(_ptRes1, 1, MakeString ("^="));
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
        case ETCOEGAL : 
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
                    ReplaceTree(_ptRes1, 1, MakeString ("&="));
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
        case VBAREGAL : 
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
                    ReplaceTree(_ptRes1, 1, MakeString ("|="));
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
        case EXCLEGAL : 
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
                    ReplaceTree(_ptRes1, 1, MakeString ("!="));
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
        case EGALEGAL : 
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
                    ReplaceTree(_ptRes1, 1, MakeString ("=="));
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
        case INFEEGAL : 
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
                    ReplaceTree(_ptRes1, 1, MakeString ("<="));
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
        case SUPEEGAL : 
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
                    ReplaceTree(_ptRes1, 1, MakeString (">="));
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
        case INFEINFE : 
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
                    ReplaceTree(_ptRes1, 1, MakeString ("<<"));
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
        case SUPESUPE : 
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
                    ReplaceTree(_ptRes1, 1, MakeString (">>"));
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
        case INFEINFEEGAL : 
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
                    ReplaceTree(_ptRes1, 1, MakeString ("<<="));
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
        case SUPESUPEEGAL : 
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
                    ReplaceTree(_ptRes1, 1, MakeString (">>="));
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
        case ETCOETCO : 
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
                    ReplaceTree(_ptRes1, 1, MakeString ("&&"));
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
        case VBARVBAR : 
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
                    ReplaceTree(_ptRes1, 1, MakeString ("||"));
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
        case PLUSPLUS : 
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
                    ReplaceTree(_ptRes1, 1, MakeString ("++"));
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
        case TIRETIRE : 
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
                    ReplaceTree(_ptRes1, 1, MakeString ("--"));
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
        case VIRG : 
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
                    ReplaceTree(_ptRes1, 1, MakeString (","));
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
        case TIRESUPE : 
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
                    ReplaceTree(_ptRes1, 1, MakeString ("->"));
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
        case TIRESUPEETOI : 
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
                    ReplaceTree(_ptRes1, 1, MakeString ("->*"));
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
#line 3170 "cplus.met"
        case POUV : 
#line 3170 "cplus.met"
            tokenAhead = 0 ;
#line 3170 "cplus.met"
            CommTerm();
#line 3170 "cplus.met"
#line 3169 "cplus.met"
#line 3170 "cplus.met"
            (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3170 "cplus.met"
            if (  !SEE_TOKEN( PFER,")") || !(CommTerm(),1)) {
#line 3170 "cplus.met"
                MulFreeTree(3,list,retTree,valTree);
                TOKEN_EXIT(operator_function_name_exit,")")
#line 3170 "cplus.met"
            } else {
#line 3170 "cplus.met"
                tokenAhead = 0 ;
#line 3170 "cplus.met"
            }
#line 3170 "cplus.met"
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
                    ReplaceTree(_ptRes1, 1, MakeString ("()"));
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
#line 3171 "cplus.met"
            break;
#line 3171 "cplus.met"
#line 3175 "cplus.met"
        case COUV : 
#line 3175 "cplus.met"
            tokenAhead = 0 ;
#line 3175 "cplus.met"
            CommTerm();
#line 3175 "cplus.met"
#line 3174 "cplus.met"
#line 3175 "cplus.met"
            (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3175 "cplus.met"
            if (  !SEE_TOKEN( CFER,"]") || !(CommTerm(),1)) {
#line 3175 "cplus.met"
                MulFreeTree(3,list,retTree,valTree);
                TOKEN_EXIT(operator_function_name_exit,"]")
#line 3175 "cplus.met"
            } else {
#line 3175 "cplus.met"
                tokenAhead = 0 ;
#line 3175 "cplus.met"
            }
#line 3175 "cplus.met"
#line 3176 "cplus.met"
            {
#line 3176 "cplus.met"
                PPTREE _ptTree0=0;
#line 3176 "cplus.met"
                {
#line 3176 "cplus.met"
                    PPTREE _ptRes1=0;
#line 3176 "cplus.met"
                    _ptRes1= MakeTree(OPERATOR, 1);
#line 3176 "cplus.met"
                    ReplaceTree(_ptRes1, 1, MakeString ("[]"));
#line 3176 "cplus.met"
                    _ptTree0=_ptRes1;
#line 3176 "cplus.met"
                }
#line 3176 "cplus.met"
                _retValue =_ptTree0;
#line 3176 "cplus.met"
                goto operator_function_name_ret;
#line 3176 "cplus.met"
            }
#line 3176 "cplus.met"
#line 3176 "cplus.met"
            break;
#line 3176 "cplus.met"
#line 3176 "cplus.met"
        default : 
#line 3176 "cplus.met"
#line 3176 "cplus.met"
            break;
#line 3176 "cplus.met"
    }
#line 3176 "cplus.met"
#line 3180 "cplus.met"
    if (NPUSH_CALL_AFF_VERIF(retTree = ,_Tak(const_or_volatile), 33, cplus)){
#line 3180 "cplus.met"
#line 3181 "cplus.met"
        {
#line 3181 "cplus.met"
            PPTREE _ptRes0=0;
#line 3181 "cplus.met"
            _ptRes0= MakeTree(FOR_DECLARATION, 3);
#line 3181 "cplus.met"
            ReplaceTree(_ptRes0, 1, retTree );
#line 3181 "cplus.met"
            retTree=_ptRes0;
#line 3181 "cplus.met"
        }
#line 3181 "cplus.met"
    } else {
#line 3181 "cplus.met"
#line 3183 "cplus.met"
        {
#line 3183 "cplus.met"
            PPTREE _ptRes0=0;
#line 3183 "cplus.met"
            _ptRes0= MakeTree(FOR_DECLARATION, 3);
#line 3183 "cplus.met"
            retTree=_ptRes0;
#line 3183 "cplus.met"
        }
#line 3183 "cplus.met"
    }
#line 3183 "cplus.met"
#line 3184 "cplus.met"
    {
#line 3184 "cplus.met"
        PPTREE _ptTree0=0;
#line 3184 "cplus.met"
        if ( (_ptTree0=NQUICK_CALL(_Tak(type_specifier)(error_free), 152, cplus))== (PPTREE) -1 ) {
#line 3184 "cplus.met"
            MulFreeTree(4,_ptTree0,list,retTree,valTree);
            PROG_EXIT(operator_function_name_exit,"operator_function_name")
#line 3184 "cplus.met"
        }
#line 3184 "cplus.met"
        ReplaceTree(retTree , 2 , _ptTree0);
#line 3184 "cplus.met"
    }
#line 3184 "cplus.met"
#line 3185 "cplus.met"
    if (NPUSH_CALL_AFF_VERIF(valTree = ,_Tak(ptr_operator), 119, cplus)){
#line 3185 "cplus.met"
#line 3186 "cplus.met"
#line 3187 "cplus.met"
        list =AddList(list ,valTree );
#line 3187 "cplus.met"
#line 3188 "cplus.met"
        ReplaceTree(retTree ,3 ,list );
#line 3188 "cplus.met"
#line 3188 "cplus.met"
#line 3188 "cplus.met"
    }
#line 3188 "cplus.met"
#line 3190 "cplus.met"
    {
#line 3190 "cplus.met"
        PPTREE _ptTree0=0;
#line 3190 "cplus.met"
        {
#line 3190 "cplus.met"
            PPTREE _ptRes1=0;
#line 3190 "cplus.met"
            _ptRes1= MakeTree(OPERATOR, 1);
#line 3190 "cplus.met"
            ReplaceTree(_ptRes1, 1, retTree );
#line 3190 "cplus.met"
            _ptTree0=_ptRes1;
#line 3190 "cplus.met"
        }
#line 3190 "cplus.met"
        _retValue =_ptTree0;
#line 3190 "cplus.met"
        goto operator_function_name_ret;
#line 3190 "cplus.met"
    }
#line 3190 "cplus.met"
#line 3190 "cplus.met"
#line 3190 "cplus.met"

#line 3191 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 3191 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 3191 "cplus.met"
return((PPTREE) 0);
#line 3191 "cplus.met"

#line 3191 "cplus.met"
operator_function_name_exit :
#line 3191 "cplus.met"

#line 3191 "cplus.met"
    _Debug = TRACE_RULE("operator_function_name",TRACE_EXIT,(PPTREE)0);
#line 3191 "cplus.met"
    _funcLevel--;
#line 3191 "cplus.met"
    return((PPTREE) -1) ;
#line 3191 "cplus.met"

#line 3191 "cplus.met"
operator_function_name_ret :
#line 3191 "cplus.met"
    
#line 3191 "cplus.met"
    _Debug = TRACE_RULE("operator_function_name",TRACE_RETURN,_retValue);
#line 3191 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 3191 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 3191 "cplus.met"
    return _retValue ;
#line 3191 "cplus.met"
}
#line 3191 "cplus.met"

#line 3191 "cplus.met"
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
#line 3222 "cplus.met"
PPTREE cplus::parameter_list ( int error_free)
#line 3222 "cplus.met"
{
#line 3222 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 3222 "cplus.met"
    int _value,_nbPre = 0 ;
#line 3222 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 3222 "cplus.met"
    int _Debug = TRACE_RULE("parameter_list",TRACE_ENTER,(PPTREE)0);
#line 3222 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 3222 "cplus.met"
#line 3222 "cplus.met"
    PPTREE _addlist1 = (PPTREE) 0;
#line 3222 "cplus.met"
#line 3222 "cplus.met"
    PPTREE paramList = (PPTREE) 0,none = (PPTREE) 0;
#line 3222 "cplus.met"
#line 3224 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3224 "cplus.met"
    if (  !SEE_TOKEN( POUV,"(") || !(CommTerm(),1)) {
#line 3224 "cplus.met"
        MulFreeTree(3,_addlist1,none,paramList);
        TOKEN_EXIT(parameter_list_exit,"(")
#line 3224 "cplus.met"
    } else {
#line 3224 "cplus.met"
        tokenAhead = 0 ;
#line 3224 "cplus.met"
    }
#line 3224 "cplus.met"
#line 3225 "cplus.met"
    if ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN( IDENT,"IDENT")){
#line 3225 "cplus.met"
#line 3226 "cplus.met"
#line 3227 "cplus.met"
         { int exit = 0 ;
#line 3227 "cplus.met"
#line 3228 "cplus.met"
        {
#line 3228 "cplus.met"
            PPTREE _ptTree0=0;
#line 3228 "cplus.met"
            {
#line 3228 "cplus.met"
                PPTREE _ptTree1=0,_ptRes1=0;
#line 3228 "cplus.met"
                _ptRes1= MakeTree(IDENT, 1);
#line 3228 "cplus.met"
                (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3228 "cplus.met"
                if ( ! TERM_OR_META(IDENT,"IDENT") || !(BUILD_TERM_META(_ptTree1))) {
#line 3228 "cplus.met"
                    MulFreeTree(6,_ptRes1,_ptTree1,_ptTree0,_addlist1,none,paramList);
                    TOKEN_EXIT(parameter_list_exit,"IDENT")
#line 3228 "cplus.met"
                } else {
#line 3228 "cplus.met"
                    tokenAhead = 0 ;
#line 3228 "cplus.met"
                }
#line 3228 "cplus.met"
                ReplaceTree(_ptRes1, 1, _ptTree1);
#line 3228 "cplus.met"
                _ptTree0=_ptRes1;
#line 3228 "cplus.met"
            }
#line 3228 "cplus.met"
            paramList =AddList(paramList , _ptTree0);
#line 3228 "cplus.met"
        }
#line 3228 "cplus.met"
#line 3228 "cplus.met"
        _addlist1 = paramList ;
#line 3228 "cplus.met"
#line 3229 "cplus.met"
        while ((! ( exit )) && 
#line 3229 "cplus.met"
              ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN(VIRG,",") && (tokenAhead = 0,CommTerm(),1))) { 
#line 3229 "cplus.met"
#line 3230 "cplus.met"
            if ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN( IDENT,"IDENT")){
#line 3230 "cplus.met"
#line 3231 "cplus.met"
#line 3231 "cplus.met"
                {
#line 3231 "cplus.met"
                    PPTREE _ptTree0=0;
#line 3231 "cplus.met"
                    {
#line 3231 "cplus.met"
                        PPTREE _ptTree1=0,_ptRes1=0;
#line 3231 "cplus.met"
                        _ptRes1= MakeTree(IDENT, 1);
#line 3231 "cplus.met"
                        (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3231 "cplus.met"
                        if ( ! TERM_OR_META(IDENT,"IDENT") || !(BUILD_TERM_META(_ptTree1))) {
#line 3231 "cplus.met"
                            MulFreeTree(6,_ptRes1,_ptTree1,_ptTree0,_addlist1,none,paramList);
                            TOKEN_EXIT(parameter_list_exit,"IDENT")
#line 3231 "cplus.met"
                        } else {
#line 3231 "cplus.met"
                            tokenAhead = 0 ;
#line 3231 "cplus.met"
                        }
#line 3231 "cplus.met"
                        ReplaceTree(_ptRes1, 1, _ptTree1);
#line 3231 "cplus.met"
                        _ptTree0=_ptRes1;
#line 3231 "cplus.met"
                    }
#line 3231 "cplus.met"
                    _addlist1 =AddList(_addlist1 , _ptTree0);
#line 3231 "cplus.met"
                }
#line 3231 "cplus.met"
#line 3231 "cplus.met"
                if (paramList){
#line 3231 "cplus.met"
#line 3231 "cplus.met"
                    _addlist1 = SonTree (_addlist1 ,2 );
#line 3231 "cplus.met"
                } else {
#line 3231 "cplus.met"
#line 3231 "cplus.met"
                    paramList = _addlist1 ;
#line 3231 "cplus.met"
                }
#line 3231 "cplus.met"
            } else {
#line 3231 "cplus.met"
#line 3233 "cplus.met"
#line 3234 "cplus.met"
                {
#line 3234 "cplus.met"
                    PPTREE _ptTree0=0;
#line 3234 "cplus.met"
                    {
#line 3234 "cplus.met"
                        PPTREE _ptRes1=0;
#line 3234 "cplus.met"
                        _ptRes1= MakeTree(VAR_LIST, 0);
#line 3234 "cplus.met"
                        _ptTree0=_ptRes1;
#line 3234 "cplus.met"
                    }
#line 3234 "cplus.met"
                    _addlist1 =AddList(_addlist1 , _ptTree0);
#line 3234 "cplus.met"
                }
#line 3234 "cplus.met"
#line 3234 "cplus.met"
                if (paramList){
#line 3234 "cplus.met"
#line 3234 "cplus.met"
                    _addlist1 = SonTree (_addlist1 ,2 );
#line 3234 "cplus.met"
                } else {
#line 3234 "cplus.met"
#line 3234 "cplus.met"
                    paramList = _addlist1 ;
#line 3234 "cplus.met"
                }
#line 3234 "cplus.met"
#line 3235 "cplus.met"
                 exit = 1 ;
#line 3235 "cplus.met"
#line 3236 "cplus.met"
                if ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN(POINPOINPOIN,"...") && (tokenAhead = 0,CommTerm(),1)){
#line 3236 "cplus.met"
#line 3236 "cplus.met"
                }
#line 3236 "cplus.met"
#line 3236 "cplus.met"
            }
#line 3236 "cplus.met"
        } 
#line 3236 "cplus.met"
#line 3239 "cplus.met"
        if ((! ( exit )) && 
#line 3239 "cplus.met"
           ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN(POINPOINPOIN,"...") && (tokenAhead = 0,CommTerm(),1))){
#line 3239 "cplus.met"
#line 3240 "cplus.met"
            {
#line 3240 "cplus.met"
                PPTREE _ptTree0=0;
#line 3240 "cplus.met"
                {
#line 3240 "cplus.met"
                    PPTREE _ptRes1=0;
#line 3240 "cplus.met"
                    _ptRes1= MakeTree(VAR_LIST, 0);
#line 3240 "cplus.met"
                    _ptTree0=_ptRes1;
#line 3240 "cplus.met"
                }
#line 3240 "cplus.met"
                paramList =AddList(paramList , _ptTree0);
#line 3240 "cplus.met"
            }
#line 3240 "cplus.met"
#line 3240 "cplus.met"
        }
#line 3240 "cplus.met"
#line 3241 "cplus.met"
         } 
#line 3241 "cplus.met"
#line 3241 "cplus.met"
#line 3241 "cplus.met"
    } else {
#line 3241 "cplus.met"
#line 3244 "cplus.met"
        paramList =AddList(paramList ,none );
#line 3244 "cplus.met"
    }
#line 3244 "cplus.met"
#line 3245 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3245 "cplus.met"
    if (  !SEE_TOKEN( PFER,")") || !(CommTerm(),1)) {
#line 3245 "cplus.met"
        MulFreeTree(3,_addlist1,none,paramList);
        TOKEN_EXIT(parameter_list_exit,")")
#line 3245 "cplus.met"
    } else {
#line 3245 "cplus.met"
        tokenAhead = 0 ;
#line 3245 "cplus.met"
    }
#line 3245 "cplus.met"
#line 3246 "cplus.met"
    {
#line 3246 "cplus.met"
        _retValue = paramList ;
#line 3246 "cplus.met"
        goto parameter_list_ret;
#line 3246 "cplus.met"
        
#line 3246 "cplus.met"
    }
#line 3246 "cplus.met"
#line 3246 "cplus.met"
#line 3246 "cplus.met"

#line 3247 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 3247 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 3247 "cplus.met"
return((PPTREE) 0);
#line 3247 "cplus.met"

#line 3247 "cplus.met"
parameter_list_exit :
#line 3247 "cplus.met"

#line 3247 "cplus.met"
    _Debug = TRACE_RULE("parameter_list",TRACE_EXIT,(PPTREE)0);
#line 3247 "cplus.met"
    _funcLevel--;
#line 3247 "cplus.met"
    return((PPTREE) -1) ;
#line 3247 "cplus.met"

#line 3247 "cplus.met"
parameter_list_ret :
#line 3247 "cplus.met"
    
#line 3247 "cplus.met"
    _Debug = TRACE_RULE("parameter_list",TRACE_RETURN,_retValue);
#line 3247 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 3247 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 3247 "cplus.met"
    return _retValue ;
#line 3247 "cplus.met"
}
#line 3247 "cplus.met"

#line 3247 "cplus.met"
