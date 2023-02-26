/*************************************************************************/
/*                                                                       */
/*        Produced by MetaGen version 2.0  -    1989-2006                 */
/*       Syntaxic Analyzer Meta Generator developped by                  */
/*                  Eric Lavillonniere                                   */
/*                                                                       */
/*************************************************************************/

#include "token.h"
#include "cplus.h"


#line 2568 "cplus.met"
PPTREE cplus::expression ( int error_free)
#line 2568 "cplus.met"
{
#line 2568 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 2568 "cplus.met"
    int _value,_nbPre = 0 ;
#line 2568 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 2568 "cplus.met"
    int _Debug = TRACE_RULE("expression",TRACE_ENTER,(PPTREE)0);
#line 2568 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 2568 "cplus.met"
#line 2568 "cplus.met"
    PPTREE _addlist1 = (PPTREE) 0;
#line 2568 "cplus.met"
#line 2568 "cplus.met"
    PPTREE expTree = (PPTREE) 0,list = (PPTREE) 0;
#line 2568 "cplus.met"
#line 2570 "cplus.met"
    if ( (expTree=NQUICK_CALL(_Tak(assignment_expression)(error_free), 17, cplus))== (PPTREE) -1 ) {
#line 2570 "cplus.met"
        MulFreeTree(3,_addlist1,expTree,list);
        PROG_EXIT(expression_exit,"expression")
#line 2570 "cplus.met"
    }
#line 2570 "cplus.met"
#line 2571 "cplus.met"
    if ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN( VIRG,",")){
#line 2571 "cplus.met"
#line 2572 "cplus.met"
#line 2573 "cplus.met"
        list =AddList(list ,expTree );
#line 2573 "cplus.met"
#line 2573 "cplus.met"
        _addlist1 = list ;
#line 2573 "cplus.met"
#line 2574 "cplus.met"
        while ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN(VIRG,",") && (tokenAhead = 0,CommTerm(),1)) { 
#line 2574 "cplus.met"
#line 2575 "cplus.met"
#line 2575 "cplus.met"
            {
#line 2575 "cplus.met"
                PPTREE _ptTree0=0;
#line 2575 "cplus.met"
                if ( (_ptTree0=NQUICK_CALL(_Tak(assignment_expression)(error_free), 17, cplus))== (PPTREE) -1 ) {
#line 2575 "cplus.met"
                    MulFreeTree(4,_ptTree0,_addlist1,expTree,list);
                    PROG_EXIT(expression_exit,"expression")
#line 2575 "cplus.met"
                }
#line 2575 "cplus.met"
                _addlist1 =AddList(_addlist1 , _ptTree0);
#line 2575 "cplus.met"
            }
#line 2575 "cplus.met"
#line 2575 "cplus.met"
            if (list){
#line 2575 "cplus.met"
#line 2575 "cplus.met"
                _addlist1 = SonTree (_addlist1 ,2 );
#line 2575 "cplus.met"
            } else {
#line 2575 "cplus.met"
#line 2575 "cplus.met"
                list = _addlist1 ;
#line 2575 "cplus.met"
            }
#line 2575 "cplus.met"
        } 
#line 2575 "cplus.met"
#line 2576 "cplus.met"
        {
#line 2576 "cplus.met"
            PPTREE _ptTree0=0;
#line 2576 "cplus.met"
            {
#line 2576 "cplus.met"
                PPTREE _ptRes1=0;
#line 2576 "cplus.met"
                _ptRes1= MakeTree(EXP_SEQ, 1);
#line 2576 "cplus.met"
                ReplaceTree(_ptRes1, 1, list );
#line 2576 "cplus.met"
                _ptTree0=_ptRes1;
#line 2576 "cplus.met"
            }
#line 2576 "cplus.met"
            _retValue =_ptTree0;
#line 2576 "cplus.met"
            goto expression_ret;
#line 2576 "cplus.met"
        }
#line 2576 "cplus.met"
#line 2576 "cplus.met"
#line 2576 "cplus.met"
    } else {
#line 2576 "cplus.met"
#line 2579 "cplus.met"
        {
#line 2579 "cplus.met"
            _retValue = expTree ;
#line 2579 "cplus.met"
            goto expression_ret;
#line 2579 "cplus.met"
            
#line 2579 "cplus.met"
        }
#line 2579 "cplus.met"
    }
#line 2579 "cplus.met"
#line 2579 "cplus.met"
#line 2579 "cplus.met"

#line 2580 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2580 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 2580 "cplus.met"
return((PPTREE) 0);
#line 2580 "cplus.met"

#line 2580 "cplus.met"
expression_exit :
#line 2580 "cplus.met"

#line 2580 "cplus.met"
    _Debug = TRACE_RULE("expression",TRACE_EXIT,(PPTREE)0);
#line 2580 "cplus.met"
    _funcLevel--;
#line 2580 "cplus.met"
    return((PPTREE) -1) ;
#line 2580 "cplus.met"

#line 2580 "cplus.met"
expression_ret :
#line 2580 "cplus.met"
    
#line 2580 "cplus.met"
    _Debug = TRACE_RULE("expression",TRACE_RETURN,_retValue);
#line 2580 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2580 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 2580 "cplus.met"
    return _retValue ;
#line 2580 "cplus.met"
}
#line 2580 "cplus.met"

#line 2580 "cplus.met"
#line 3312 "cplus.met"
PPTREE cplus::expression_for ( int error_free)
#line 3312 "cplus.met"
{
#line 3312 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 3312 "cplus.met"
    int _value,_nbPre = 0 ;
#line 3312 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 3312 "cplus.met"
    int _Debug = TRACE_RULE("expression_for",TRACE_ENTER,(PPTREE)0);
#line 3312 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 3312 "cplus.met"
#line 3312 "cplus.met"
    PPTREE retTree = (PPTREE) 0;
#line 3312 "cplus.met"
#line 3314 "cplus.met"
    if ( (retTree=NQUICK_CALL(_Tak(expression)(error_free), 63, cplus))== (PPTREE) -1 ) {
#line 3314 "cplus.met"
        MulFreeTree(1,retTree);
        PROG_EXIT(expression_for_exit,"expression_for")
#line 3314 "cplus.met"
    }
#line 3314 "cplus.met"
#line 3315 "cplus.met"
    if (! ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN( PVIR,";"))){
#line 3315 "cplus.met"
#line 3316 "cplus.met"
        
#line 3316 "cplus.met"
        MulFreeTree(1,retTree);
        LEX_EXIT ("",0);
#line 3316 "cplus.met"
        goto expression_for_exit;
#line 3316 "cplus.met"
#line 3316 "cplus.met"
    }
#line 3316 "cplus.met"
#line 3317 "cplus.met"
    {
#line 3317 "cplus.met"
        _retValue = retTree ;
#line 3317 "cplus.met"
        goto expression_for_ret;
#line 3317 "cplus.met"
        
#line 3317 "cplus.met"
    }
#line 3317 "cplus.met"
#line 3317 "cplus.met"
#line 3317 "cplus.met"

#line 3318 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 3318 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 3318 "cplus.met"
return((PPTREE) 0);
#line 3318 "cplus.met"

#line 3318 "cplus.met"
expression_for_exit :
#line 3318 "cplus.met"

#line 3318 "cplus.met"
    _Debug = TRACE_RULE("expression_for",TRACE_EXIT,(PPTREE)0);
#line 3318 "cplus.met"
    _funcLevel--;
#line 3318 "cplus.met"
    return((PPTREE) -1) ;
#line 3318 "cplus.met"

#line 3318 "cplus.met"
expression_for_ret :
#line 3318 "cplus.met"
    
#line 3318 "cplus.met"
    _Debug = TRACE_RULE("expression_for",TRACE_RETURN,_retValue);
#line 3318 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 3318 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 3318 "cplus.met"
    return _retValue ;
#line 3318 "cplus.met"
}
#line 3318 "cplus.met"

#line 3318 "cplus.met"
#line 1037 "cplus.met"
PPTREE cplus::ext_all ( int error_free)
#line 1037 "cplus.met"
{
#line 1037 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 1037 "cplus.met"
    int _value,_nbPre = 0 ;
#line 1037 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 1037 "cplus.met"
    int _Debug = TRACE_RULE("ext_all",TRACE_ENTER,(PPTREE)0);
#line 1037 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 1037 "cplus.met"
#line 1037 "cplus.met"
    PPTREE retTree = (PPTREE) 0;
#line 1037 "cplus.met"
#line 1039 "cplus.met"
    if (NPUSH_CALL_AFF_VERIF(retTree = ,_Tak(ext_all_no_linkage), 67, cplus)){
#line 1039 "cplus.met"
#line 1040 "cplus.met"
        {
#line 1040 "cplus.met"
            _retValue = retTree ;
#line 1040 "cplus.met"
            goto ext_all_ret;
#line 1040 "cplus.met"
            
#line 1040 "cplus.met"
        }
#line 1040 "cplus.met"
    } else {
#line 1040 "cplus.met"
#line 1042 "cplus.met"
        {
#line 1042 "cplus.met"
            PPTREE _ptTree0=0;
#line 1042 "cplus.met"
            if ( (_ptTree0=NQUICK_CALL(_Tak(linkage_specification)(error_free), 89, cplus))== (PPTREE) -1 ) {
#line 1042 "cplus.met"
                MulFreeTree(2,_ptTree0,retTree);
                PROG_EXIT(ext_all_exit,"ext_all")
#line 1042 "cplus.met"
            }
#line 1042 "cplus.met"
            _retValue =_ptTree0;
#line 1042 "cplus.met"
            goto ext_all_ret;
#line 1042 "cplus.met"
        }
#line 1042 "cplus.met"
    }
#line 1042 "cplus.met"
#line 1042 "cplus.met"
#line 1042 "cplus.met"

#line 1043 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1043 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 1043 "cplus.met"
return((PPTREE) 0);
#line 1043 "cplus.met"

#line 1043 "cplus.met"
ext_all_exit :
#line 1043 "cplus.met"

#line 1043 "cplus.met"
    _Debug = TRACE_RULE("ext_all",TRACE_EXIT,(PPTREE)0);
#line 1043 "cplus.met"
    _funcLevel--;
#line 1043 "cplus.met"
    return((PPTREE) -1) ;
#line 1043 "cplus.met"

#line 1043 "cplus.met"
ext_all_ret :
#line 1043 "cplus.met"
    
#line 1043 "cplus.met"
    _Debug = TRACE_RULE("ext_all",TRACE_RETURN,_retValue);
#line 1043 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1043 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 1043 "cplus.met"
    return _retValue ;
#line 1043 "cplus.met"
}
#line 1043 "cplus.met"

#line 1043 "cplus.met"
#line 1045 "cplus.met"
PPTREE cplus::ext_all_ext ( int error_free)
#line 1045 "cplus.met"
{
#line 1045 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 1045 "cplus.met"
    int _value,_nbPre = 0 ;
#line 1045 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 1045 "cplus.met"
    int _Debug = TRACE_RULE("ext_all_ext",TRACE_ENTER,(PPTREE)0);
#line 1045 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 1045 "cplus.met"
#line 1045 "cplus.met"
    PPTREE retTree = (PPTREE) 0;
#line 1045 "cplus.met"
#line 1047 "cplus.met"
    if (! (NPUSH_CALL_AFF_VERIF(retTree = ,_Tak(protect_declare), 115, cplus))){
#line 1047 "cplus.met"
#line 1048 "cplus.met"
        if ( (retTree=NQUICK_CALL(_Tak(ext_all)(error_free), 65, cplus))== (PPTREE) -1 ) {
#line 1048 "cplus.met"
            MulFreeTree(1,retTree);
            PROG_EXIT(ext_all_ext_exit,"ext_all_ext")
#line 1048 "cplus.met"
        }
#line 1048 "cplus.met"
    }
#line 1048 "cplus.met"
#line 1049 "cplus.met"
    {
#line 1049 "cplus.met"
        _retValue = retTree ;
#line 1049 "cplus.met"
        goto ext_all_ext_ret;
#line 1049 "cplus.met"
        
#line 1049 "cplus.met"
    }
#line 1049 "cplus.met"
#line 1049 "cplus.met"
#line 1049 "cplus.met"

#line 1050 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1050 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 1050 "cplus.met"
return((PPTREE) 0);
#line 1050 "cplus.met"

#line 1050 "cplus.met"
ext_all_ext_exit :
#line 1050 "cplus.met"

#line 1050 "cplus.met"
    _Debug = TRACE_RULE("ext_all_ext",TRACE_EXIT,(PPTREE)0);
#line 1050 "cplus.met"
    _funcLevel--;
#line 1050 "cplus.met"
    return((PPTREE) -1) ;
#line 1050 "cplus.met"

#line 1050 "cplus.met"
ext_all_ext_ret :
#line 1050 "cplus.met"
    
#line 1050 "cplus.met"
    _Debug = TRACE_RULE("ext_all_ext",TRACE_RETURN,_retValue);
#line 1050 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1050 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 1050 "cplus.met"
    return _retValue ;
#line 1050 "cplus.met"
}
#line 1050 "cplus.met"

#line 1050 "cplus.met"
#line 1017 "cplus.met"
PPTREE cplus::ext_all_no_linkage ( int error_free)
#line 1017 "cplus.met"
{
#line 1017 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 1017 "cplus.met"
    int _value,_nbPre = 0 ;
#line 1017 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 1017 "cplus.met"
    int _Debug = TRACE_RULE("ext_all_no_linkage",TRACE_ENTER,(PPTREE)0);
#line 1017 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 1017 "cplus.met"
#line 1017 "cplus.met"
    PPTREE _addlist1 = (PPTREE) 0;
#line 1017 "cplus.met"
#line 1017 "cplus.met"
    PPTREE decl = (PPTREE) 0,listTemp = (PPTREE) 0;
#line 1017 "cplus.met"
#line 1019 "cplus.met"
    if ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN(TEMPLATE,"template") && (tokenAhead = 0,CommTerm(),1)){
#line 1019 "cplus.met"
#line 1020 "cplus.met"
#line 1021 "cplus.met"
        (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 1021 "cplus.met"
        if (  !SEE_TOKEN( INFE,"<") || !(CommTerm(),1)) {
#line 1021 "cplus.met"
            MulFreeTree(3,_addlist1,decl,listTemp);
            TOKEN_EXIT(ext_all_no_linkage_exit,"<")
#line 1021 "cplus.met"
        } else {
#line 1021 "cplus.met"
            tokenAhead = 0 ;
#line 1021 "cplus.met"
        }
#line 1021 "cplus.met"
#line 1021 "cplus.met"
        _addlist1 = listTemp ;
#line 1021 "cplus.met"
#line 1022 "cplus.met"
        do {
#line 1022 "cplus.met"
#line 1023 "cplus.met"
            (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 1023 "cplus.met"
            switch( lexEl.Value) {
#line 1023 "cplus.met"
#line 1024 "cplus.met"
                case CLASS : 
#line 1024 "cplus.met"
                    tokenAhead = 0 ;
#line 1024 "cplus.met"
                    CommTerm();
#line 1024 "cplus.met"
#line 1024 "cplus.met"
#line 1024 "cplus.met"
                    {
#line 1024 "cplus.met"
                        PPTREE _ptTree0=0;
#line 1024 "cplus.met"
                        {
#line 1024 "cplus.met"
                            PPTREE _ptTree1=0,_ptRes1=0;
#line 1024 "cplus.met"
                            _ptRes1= MakeTree(CLASS_PARAM, 1);
#line 1024 "cplus.met"
                            if ( (_ptTree1=NQUICK_CALL(_Tak(arg_declarator_type)(error_free), 10, cplus))== (PPTREE) -1 ) {
#line 1024 "cplus.met"
                                MulFreeTree(6,_ptRes1,_ptTree1,_ptTree0,_addlist1,decl,listTemp);
                                PROG_EXIT(ext_all_no_linkage_exit,"ext_all_no_linkage")
#line 1024 "cplus.met"
                            }
#line 1024 "cplus.met"
                            ReplaceTree(_ptRes1, 1, _ptTree1);
#line 1024 "cplus.met"
                            _ptTree0=_ptRes1;
#line 1024 "cplus.met"
                        }
#line 1024 "cplus.met"
                        _addlist1 =AddList(_addlist1 , _ptTree0);
#line 1024 "cplus.met"
                    }
#line 1024 "cplus.met"
#line 1024 "cplus.met"
                    if (listTemp){
#line 1024 "cplus.met"
#line 1024 "cplus.met"
                        _addlist1 = SonTree (_addlist1 ,2 );
#line 1024 "cplus.met"
                    } else {
#line 1024 "cplus.met"
#line 1024 "cplus.met"
                        listTemp = _addlist1 ;
#line 1024 "cplus.met"
                    }
#line 1024 "cplus.met"
                    break;
#line 1024 "cplus.met"
#line 1025 "cplus.met"
                default : 
#line 1025 "cplus.met"
#line 1025 "cplus.met"
#line 1025 "cplus.met"
                    {
#line 1025 "cplus.met"
                        PPTREE _ptTree0=0;
#line 1025 "cplus.met"
                        if ( (_ptTree0=NQUICK_CALL(_Tak(arg_declarator_type)(error_free), 10, cplus))== (PPTREE) -1 ) {
#line 1025 "cplus.met"
                            MulFreeTree(4,_ptTree0,_addlist1,decl,listTemp);
                            PROG_EXIT(ext_all_no_linkage_exit,"ext_all_no_linkage")
#line 1025 "cplus.met"
                        }
#line 1025 "cplus.met"
                        _addlist1 =AddList(_addlist1 , _ptTree0);
#line 1025 "cplus.met"
                    }
#line 1025 "cplus.met"
#line 1025 "cplus.met"
                    if (listTemp){
#line 1025 "cplus.met"
#line 1025 "cplus.met"
                        _addlist1 = SonTree (_addlist1 ,2 );
#line 1025 "cplus.met"
                    } else {
#line 1025 "cplus.met"
#line 1025 "cplus.met"
                        listTemp = _addlist1 ;
#line 1025 "cplus.met"
                    }
#line 1025 "cplus.met"
                    break;
#line 1025 "cplus.met"
            }
#line 1025 "cplus.met"
#line 1025 "cplus.met"
#line 1027 "cplus.met"
        } while ( !(! ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN(VIRG,",") && (tokenAhead = 0,CommTerm(),1)))) ;
#line 1027 "cplus.met"
#line 1028 "cplus.met"
        (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 1028 "cplus.met"
        if (  !SEE_TOKEN( SUPE,">") || !(CommTerm(),1)) {
#line 1028 "cplus.met"
            MulFreeTree(3,_addlist1,decl,listTemp);
            TOKEN_EXIT(ext_all_no_linkage_exit,">")
#line 1028 "cplus.met"
        } else {
#line 1028 "cplus.met"
            tokenAhead = 0 ;
#line 1028 "cplus.met"
        }
#line 1028 "cplus.met"
#line 1029 "cplus.met"
        {
#line 1029 "cplus.met"
            PPTREE _ptTree0=0;
#line 1029 "cplus.met"
            {
#line 1029 "cplus.met"
                PPTREE _ptTree1=0,_ptRes1=0;
#line 1029 "cplus.met"
                _ptRes1= MakeTree(TEMPLATE_DECL, 2);
#line 1029 "cplus.met"
                ReplaceTree(_ptRes1, 1, listTemp );
#line 1029 "cplus.met"
                if ( (_ptTree1=NQUICK_CALL(_Tak(ext_all_no_linkage)(error_free), 67, cplus))== (PPTREE) -1 ) {
#line 1029 "cplus.met"
                    MulFreeTree(6,_ptRes1,_ptTree1,_ptTree0,_addlist1,decl,listTemp);
                    PROG_EXIT(ext_all_no_linkage_exit,"ext_all_no_linkage")
#line 1029 "cplus.met"
                }
#line 1029 "cplus.met"
                ReplaceTree(_ptRes1, 2, _ptTree1);
#line 1029 "cplus.met"
                _ptTree0=_ptRes1;
#line 1029 "cplus.met"
            }
#line 1029 "cplus.met"
            _retValue =_ptTree0;
#line 1029 "cplus.met"
            goto ext_all_no_linkage_ret;
#line 1029 "cplus.met"
        }
#line 1029 "cplus.met"
#line 1029 "cplus.met"
#line 1029 "cplus.met"
    }
#line 1029 "cplus.met"
#line 1031 "cplus.met"
    if ((((NPUSH_CALL_AFF_VERIF(decl = ,_Tak(ext_data_declaration), 72, cplus)) || 
#line 1031 "cplus.met"
         (NPUSH_CALL_AFF_VERIF(decl = ,_Tak(func_declaration), 77, cplus))) || 
#line 1031 "cplus.met"
        (NPUSH_CALL_AFF_VERIF(decl = ,_Tak(ext_decl_dir), 73, cplus))) || 
#line 1031 "cplus.met"
       (NPUSH_CALL_AFF_VERIF(decl = ,_Tak(asm_declaration), 15, cplus))){
#line 1031 "cplus.met"
#line 1032 "cplus.met"
        {
#line 1032 "cplus.met"
            _retValue = decl ;
#line 1032 "cplus.met"
            goto ext_all_no_linkage_ret;
#line 1032 "cplus.met"
            
#line 1032 "cplus.met"
        }
#line 1032 "cplus.met"
    } else {
#line 1032 "cplus.met"
#line 1034 "cplus.met"
        {
#line 1034 "cplus.met"
            PPTREE _ptTree0=0;
#line 1034 "cplus.met"
            if ( (_ptTree0=NQUICK_CALL(_Tak(func_declaration)(error_free), 77, cplus))== (PPTREE) -1 ) {
#line 1034 "cplus.met"
                MulFreeTree(4,_ptTree0,_addlist1,decl,listTemp);
                PROG_EXIT(ext_all_no_linkage_exit,"ext_all_no_linkage")
#line 1034 "cplus.met"
            }
#line 1034 "cplus.met"
            _retValue =_ptTree0;
#line 1034 "cplus.met"
            goto ext_all_no_linkage_ret;
#line 1034 "cplus.met"
        }
#line 1034 "cplus.met"
    }
#line 1034 "cplus.met"
#line 1034 "cplus.met"
#line 1034 "cplus.met"

#line 1035 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1035 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 1035 "cplus.met"
return((PPTREE) 0);
#line 1035 "cplus.met"

#line 1035 "cplus.met"
ext_all_no_linkage_exit :
#line 1035 "cplus.met"

#line 1035 "cplus.met"
    _Debug = TRACE_RULE("ext_all_no_linkage",TRACE_EXIT,(PPTREE)0);
#line 1035 "cplus.met"
    _funcLevel--;
#line 1035 "cplus.met"
    return((PPTREE) -1) ;
#line 1035 "cplus.met"

#line 1035 "cplus.met"
ext_all_no_linkage_ret :
#line 1035 "cplus.met"
    
#line 1035 "cplus.met"
    _Debug = TRACE_RULE("ext_all_no_linkage",TRACE_RETURN,_retValue);
#line 1035 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1035 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 1035 "cplus.met"
    return _retValue ;
#line 1035 "cplus.met"
}
#line 1035 "cplus.met"

#line 1035 "cplus.met"
#line 1521 "cplus.met"
PPTREE cplus::ext_data_decl_sc_ty ( int error_free)
#line 1521 "cplus.met"
{
#line 1521 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 1521 "cplus.met"
    int _value,_nbPre = 0 ;
#line 1521 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 1521 "cplus.met"
    int _Debug = TRACE_RULE("ext_data_decl_sc_ty",TRACE_ENTER,(PPTREE)0);
#line 1521 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 1521 "cplus.met"
#line 1521 "cplus.met"
    PPTREE retTree = (PPTREE) 0;
#line 1521 "cplus.met"
#line 1523 "cplus.met"
    if (! (NPUSH_CALL_AFF_VERIF(retTree = ,_Tak(ext_data_decl_sc_ty_full), 69, cplus))){
#line 1523 "cplus.met"
#line 1524 "cplus.met"
        if ( (retTree=NQUICK_CALL(_Tak(ext_data_decl_sc_ty_short)(error_free), 70, cplus))== (PPTREE) -1 ) {
#line 1524 "cplus.met"
            MulFreeTree(1,retTree);
            PROG_EXIT(ext_data_decl_sc_ty_exit,"ext_data_decl_sc_ty")
#line 1524 "cplus.met"
        }
#line 1524 "cplus.met"
    }
#line 1524 "cplus.met"
#line 1525 "cplus.met"
    {
#line 1525 "cplus.met"
        _retValue = retTree ;
#line 1525 "cplus.met"
        goto ext_data_decl_sc_ty_ret;
#line 1525 "cplus.met"
        
#line 1525 "cplus.met"
    }
#line 1525 "cplus.met"
#line 1525 "cplus.met"
#line 1525 "cplus.met"

#line 1526 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1526 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 1526 "cplus.met"
return((PPTREE) 0);
#line 1526 "cplus.met"

#line 1526 "cplus.met"
ext_data_decl_sc_ty_exit :
#line 1526 "cplus.met"

#line 1526 "cplus.met"
    _Debug = TRACE_RULE("ext_data_decl_sc_ty",TRACE_EXIT,(PPTREE)0);
#line 1526 "cplus.met"
    _funcLevel--;
#line 1526 "cplus.met"
    return((PPTREE) -1) ;
#line 1526 "cplus.met"

#line 1526 "cplus.met"
ext_data_decl_sc_ty_ret :
#line 1526 "cplus.met"
    
#line 1526 "cplus.met"
    _Debug = TRACE_RULE("ext_data_decl_sc_ty",TRACE_RETURN,_retValue);
#line 1526 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1526 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 1526 "cplus.met"
    return _retValue ;
#line 1526 "cplus.met"
}
#line 1526 "cplus.met"

#line 1526 "cplus.met"
#line 1502 "cplus.met"
PPTREE cplus::ext_data_decl_sc_ty_full ( int error_free)
#line 1502 "cplus.met"
{
#line 1502 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 1502 "cplus.met"
    int _value,_nbPre = 0 ;
#line 1502 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 1502 "cplus.met"
    int _Debug = TRACE_RULE("ext_data_decl_sc_ty_full",TRACE_ENTER,(PPTREE)0);
#line 1502 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 1502 "cplus.met"
#line 1502 "cplus.met"
    PPTREE retTree = (PPTREE) 0;
#line 1502 "cplus.met"
#line 1504 "cplus.met"
    {
#line 1504 "cplus.met"
        PPTREE _ptRes0=0;
#line 1504 "cplus.met"
        _ptRes0= MakeTree(DECLARATION, 3);
#line 1504 "cplus.met"
        retTree=_ptRes0;
#line 1504 "cplus.met"
    }
#line 1504 "cplus.met"
#line 1505 "cplus.met"
    {
#line 1505 "cplus.met"
        PPTREE _ptTree0=0;
#line 1505 "cplus.met"
        if ( (_ptTree0=NQUICK_CALL(_Tak(sc_specifier)(error_free), 127, cplus))== (PPTREE) -1 ) {
#line 1505 "cplus.met"
            MulFreeTree(2,_ptTree0,retTree);
            PROG_EXIT(ext_data_decl_sc_ty_full_exit,"ext_data_decl_sc_ty_full")
#line 1505 "cplus.met"
        }
#line 1505 "cplus.met"
        ReplaceTree(retTree , 1 , _ptTree0);
#line 1505 "cplus.met"
    }
#line 1505 "cplus.met"
#line 1506 "cplus.met"
    {
#line 1506 "cplus.met"
        PPTREE _ptTree0=0;
#line 1506 "cplus.met"
        if ( (_ptTree0=NQUICK_CALL(_Tak(type_specifier)(error_free), 149, cplus))== (PPTREE) -1 ) {
#line 1506 "cplus.met"
            MulFreeTree(2,_ptTree0,retTree);
            PROG_EXIT(ext_data_decl_sc_ty_full_exit,"ext_data_decl_sc_ty_full")
#line 1506 "cplus.met"
        }
#line 1506 "cplus.met"
        ReplaceTree(retTree , 2 , _ptTree0);
#line 1506 "cplus.met"
    }
#line 1506 "cplus.met"
#line 1507 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 1507 "cplus.met"
    if (  !SEE_TOKEN( PVIR,";") || !(CommTerm(),1)) {
#line 1507 "cplus.met"
        MulFreeTree(1,retTree);
        TOKEN_EXIT(ext_data_decl_sc_ty_full_exit,";")
#line 1507 "cplus.met"
    } else {
#line 1507 "cplus.met"
        tokenAhead = 0 ;
#line 1507 "cplus.met"
    }
#line 1507 "cplus.met"
#line 1508 "cplus.met"
    {
#line 1508 "cplus.met"
        _retValue = retTree ;
#line 1508 "cplus.met"
        goto ext_data_decl_sc_ty_full_ret;
#line 1508 "cplus.met"
        
#line 1508 "cplus.met"
    }
#line 1508 "cplus.met"
#line 1508 "cplus.met"
#line 1508 "cplus.met"

#line 1509 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1509 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 1509 "cplus.met"
return((PPTREE) 0);
#line 1509 "cplus.met"

#line 1509 "cplus.met"
ext_data_decl_sc_ty_full_exit :
#line 1509 "cplus.met"

#line 1509 "cplus.met"
    _Debug = TRACE_RULE("ext_data_decl_sc_ty_full",TRACE_EXIT,(PPTREE)0);
#line 1509 "cplus.met"
    _funcLevel--;
#line 1509 "cplus.met"
    return((PPTREE) -1) ;
#line 1509 "cplus.met"

#line 1509 "cplus.met"
ext_data_decl_sc_ty_full_ret :
#line 1509 "cplus.met"
    
#line 1509 "cplus.met"
    _Debug = TRACE_RULE("ext_data_decl_sc_ty_full",TRACE_RETURN,_retValue);
#line 1509 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1509 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 1509 "cplus.met"
    return _retValue ;
#line 1509 "cplus.met"
}
#line 1509 "cplus.met"

#line 1509 "cplus.met"
#line 1512 "cplus.met"
PPTREE cplus::ext_data_decl_sc_ty_short ( int error_free)
#line 1512 "cplus.met"
{
#line 1512 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 1512 "cplus.met"
    int _value,_nbPre = 0 ;
#line 1512 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 1512 "cplus.met"
    int _Debug = TRACE_RULE("ext_data_decl_sc_ty_short",TRACE_ENTER,(PPTREE)0);
#line 1512 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 1512 "cplus.met"
#line 1512 "cplus.met"
    PPTREE retTree = (PPTREE) 0;
#line 1512 "cplus.met"
#line 1514 "cplus.met"
    {
#line 1514 "cplus.met"
        PPTREE _ptRes0=0;
#line 1514 "cplus.met"
        _ptRes0= MakeTree(DECLARATION, 3);
#line 1514 "cplus.met"
        retTree=_ptRes0;
#line 1514 "cplus.met"
    }
#line 1514 "cplus.met"
#line 1515 "cplus.met"
    {
#line 1515 "cplus.met"
        PPTREE _ptTree0=0;
#line 1515 "cplus.met"
        if ( (_ptTree0=NQUICK_CALL(_Tak(type_specifier)(error_free), 149, cplus))== (PPTREE) -1 ) {
#line 1515 "cplus.met"
            MulFreeTree(2,_ptTree0,retTree);
            PROG_EXIT(ext_data_decl_sc_ty_short_exit,"ext_data_decl_sc_ty_short")
#line 1515 "cplus.met"
        }
#line 1515 "cplus.met"
        ReplaceTree(retTree , 2 , _ptTree0);
#line 1515 "cplus.met"
    }
#line 1515 "cplus.met"
#line 1516 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 1516 "cplus.met"
    if (  !SEE_TOKEN( PVIR,";") || !(CommTerm(),1)) {
#line 1516 "cplus.met"
        MulFreeTree(1,retTree);
        TOKEN_EXIT(ext_data_decl_sc_ty_short_exit,";")
#line 1516 "cplus.met"
    } else {
#line 1516 "cplus.met"
        tokenAhead = 0 ;
#line 1516 "cplus.met"
    }
#line 1516 "cplus.met"
#line 1517 "cplus.met"
    {
#line 1517 "cplus.met"
        _retValue = retTree ;
#line 1517 "cplus.met"
        goto ext_data_decl_sc_ty_short_ret;
#line 1517 "cplus.met"
        
#line 1517 "cplus.met"
    }
#line 1517 "cplus.met"
#line 1517 "cplus.met"
#line 1517 "cplus.met"

#line 1518 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1518 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 1518 "cplus.met"
return((PPTREE) 0);
#line 1518 "cplus.met"

#line 1518 "cplus.met"
ext_data_decl_sc_ty_short_exit :
#line 1518 "cplus.met"

#line 1518 "cplus.met"
    _Debug = TRACE_RULE("ext_data_decl_sc_ty_short",TRACE_EXIT,(PPTREE)0);
#line 1518 "cplus.met"
    _funcLevel--;
#line 1518 "cplus.met"
    return((PPTREE) -1) ;
#line 1518 "cplus.met"

#line 1518 "cplus.met"
ext_data_decl_sc_ty_short_ret :
#line 1518 "cplus.met"
    
#line 1518 "cplus.met"
    _Debug = TRACE_RULE("ext_data_decl_sc_ty_short",TRACE_RETURN,_retValue);
#line 1518 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1518 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 1518 "cplus.met"
    return _retValue ;
#line 1518 "cplus.met"
}
#line 1518 "cplus.met"

#line 1518 "cplus.met"
#line 1528 "cplus.met"
PPTREE cplus::ext_data_decl_simp ( int error_free)
#line 1528 "cplus.met"
{
#line 1528 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 1528 "cplus.met"
    int _value,_nbPre = 0 ;
#line 1528 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 1528 "cplus.met"
    int _Debug = TRACE_RULE("ext_data_decl_simp",TRACE_ENTER,(PPTREE)0);
#line 1528 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 1528 "cplus.met"
#line 1528 "cplus.met"
    PPTREE retTree = (PPTREE) 0;
#line 1528 "cplus.met"
#line 1530 "cplus.met"
    if ((! (NPUSH_CALL_AFF_VERIF(retTree = ,_Tak(data_declaration), 41, cplus))) && 
#line 1530 "cplus.met"
       (! (NPUSH_CALL_AFF_VERIF(retTree = ,_Tak(inline_namespace), 83, cplus)))){
#line 1530 "cplus.met"
#line 1531 "cplus.met"
        if ( (retTree=NQUICK_CALL(_Tak(ext_data_decl_sc_ty)(error_free), 68, cplus))== (PPTREE) -1 ) {
#line 1531 "cplus.met"
            MulFreeTree(1,retTree);
            PROG_EXIT(ext_data_decl_simp_exit,"ext_data_decl_simp")
#line 1531 "cplus.met"
        }
#line 1531 "cplus.met"
    }
#line 1531 "cplus.met"
#line 1532 "cplus.met"
    {
#line 1532 "cplus.met"
        _retValue = retTree ;
#line 1532 "cplus.met"
        goto ext_data_decl_simp_ret;
#line 1532 "cplus.met"
        
#line 1532 "cplus.met"
    }
#line 1532 "cplus.met"
#line 1532 "cplus.met"
#line 1532 "cplus.met"

#line 1533 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1533 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 1533 "cplus.met"
return((PPTREE) 0);
#line 1533 "cplus.met"

#line 1533 "cplus.met"
ext_data_decl_simp_exit :
#line 1533 "cplus.met"

#line 1533 "cplus.met"
    _Debug = TRACE_RULE("ext_data_decl_simp",TRACE_EXIT,(PPTREE)0);
#line 1533 "cplus.met"
    _funcLevel--;
#line 1533 "cplus.met"
    return((PPTREE) -1) ;
#line 1533 "cplus.met"

#line 1533 "cplus.met"
ext_data_decl_simp_ret :
#line 1533 "cplus.met"
    
#line 1533 "cplus.met"
    _Debug = TRACE_RULE("ext_data_decl_simp",TRACE_RETURN,_retValue);
#line 1533 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1533 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 1533 "cplus.met"
    return _retValue ;
#line 1533 "cplus.met"
}
#line 1533 "cplus.met"

#line 1533 "cplus.met"
#line 1548 "cplus.met"
PPTREE cplus::ext_data_declaration ( int error_free)
#line 1548 "cplus.met"
{
#line 1548 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 1548 "cplus.met"
    int _value,_nbPre = 0 ;
#line 1548 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 1548 "cplus.met"
    int _Debug = TRACE_RULE("ext_data_declaration",TRACE_ENTER,(PPTREE)0);
#line 1548 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 1548 "cplus.met"
#line 1548 "cplus.met"
    PPTREE retTree = (PPTREE) 0;
#line 1548 "cplus.met"
#line 1550 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 1550 "cplus.met"
    switch( lexEl.Value) {
#line 1550 "cplus.met"
#line 1551 "cplus.met"
        case TYPEDEF : 
#line 1551 "cplus.met"
            tokenAhead = 0 ;
#line 1551 "cplus.met"
            CommTerm();
#line 1551 "cplus.met"
#line 1552 "cplus.met"
#line 1553 "cplus.met"
            if (! (NPUSH_CALL_AFF_VERIF(retTree = ,_Tak(typedef_and_declarator), 151, cplus))){
#line 1553 "cplus.met"
#line 1554 "cplus.met"
                {
#line 1554 "cplus.met"
                    PPTREE _ptTree0=0,_ptRes0=0;
#line 1554 "cplus.met"
                    _ptRes0= MakeTree(TYPEDEF, 2);
#line 1554 "cplus.met"
                    if ( (_ptTree0=NQUICK_CALL(_Tak(declarator_list)(error_free), 49, cplus))== (PPTREE) -1 ) {
#line 1554 "cplus.met"
                        MulFreeTree(3,_ptRes0,_ptTree0,retTree);
                        PROG_EXIT(ext_data_declaration_exit,"ext_data_declaration")
#line 1554 "cplus.met"
                    }
#line 1554 "cplus.met"
                    ReplaceTree(_ptRes0, 2, _ptTree0);
#line 1554 "cplus.met"
                    retTree=_ptRes0;
#line 1554 "cplus.met"
                }
#line 1554 "cplus.met"
            }
#line 1554 "cplus.met"
#line 1555 "cplus.met"
            (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 1555 "cplus.met"
            if (  !SEE_TOKEN( PVIR,";") || !(CommTerm(),1)) {
#line 1555 "cplus.met"
                MulFreeTree(1,retTree);
                TOKEN_EXIT(ext_data_declaration_exit,";")
#line 1555 "cplus.met"
            } else {
#line 1555 "cplus.met"
                tokenAhead = 0 ;
#line 1555 "cplus.met"
            }
#line 1555 "cplus.met"
#line 1556 "cplus.met"
            {
#line 1556 "cplus.met"
                _retValue = retTree ;
#line 1556 "cplus.met"
                goto ext_data_declaration_ret;
#line 1556 "cplus.met"
                
#line 1556 "cplus.met"
            }
#line 1556 "cplus.met"
#line 1556 "cplus.met"
            break;
#line 1556 "cplus.met"
#line 1558 "cplus.met"
        case NAMESPACE : 
#line 1558 "cplus.met"
#line 1558 "cplus.met"
            {
#line 1558 "cplus.met"
                PPTREE _ptTree0=0;
#line 1558 "cplus.met"
                if ( (_ptTree0=NQUICK_CALL(_Tak(name_space)(error_free), 99, cplus))== (PPTREE) -1 ) {
#line 1558 "cplus.met"
                    MulFreeTree(2,_ptTree0,retTree);
                    PROG_EXIT(ext_data_declaration_exit,"ext_data_declaration")
#line 1558 "cplus.met"
                }
#line 1558 "cplus.met"
                _retValue =_ptTree0;
#line 1558 "cplus.met"
                goto ext_data_declaration_ret;
#line 1558 "cplus.met"
            }
#line 1558 "cplus.met"
            break;
#line 1558 "cplus.met"
#line 1559 "cplus.met"
        case USING : 
#line 1559 "cplus.met"
#line 1559 "cplus.met"
            {
#line 1559 "cplus.met"
                PPTREE _ptTree0=0;
#line 1559 "cplus.met"
                if ( (_ptTree0=NQUICK_CALL(_Tak(name_space)(error_free), 99, cplus))== (PPTREE) -1 ) {
#line 1559 "cplus.met"
                    MulFreeTree(2,_ptTree0,retTree);
                    PROG_EXIT(ext_data_declaration_exit,"ext_data_declaration")
#line 1559 "cplus.met"
                }
#line 1559 "cplus.met"
                _retValue =_ptTree0;
#line 1559 "cplus.met"
                goto ext_data_declaration_ret;
#line 1559 "cplus.met"
            }
#line 1559 "cplus.met"
            break;
#line 1559 "cplus.met"
#line 1560 "cplus.met"
        case PVIR : 
#line 1560 "cplus.met"
            tokenAhead = 0 ;
#line 1560 "cplus.met"
            CommTerm();
#line 1560 "cplus.met"
#line 1560 "cplus.met"
            {
#line 1560 "cplus.met"
                PPTREE _ptTree0=0;
#line 1560 "cplus.met"
                {
#line 1560 "cplus.met"
                    PPTREE _ptRes1=0;
#line 1560 "cplus.met"
                    _ptRes1= MakeTree(STAT_VOID, 0);
#line 1560 "cplus.met"
                    _ptTree0=_ptRes1;
#line 1560 "cplus.met"
                }
#line 1560 "cplus.met"
                _retValue =_ptTree0;
#line 1560 "cplus.met"
                goto ext_data_declaration_ret;
#line 1560 "cplus.met"
            }
#line 1560 "cplus.met"
            break;
#line 1560 "cplus.met"
#line 1561 "cplus.met"
        case __EXTENSION__ : 
#line 1561 "cplus.met"
            tokenAhead = 0 ;
#line 1561 "cplus.met"
            CommTerm();
#line 1561 "cplus.met"
#line 1561 "cplus.met"
            {
#line 1561 "cplus.met"
                PPTREE _ptTree0=0;
#line 1561 "cplus.met"
                {
#line 1561 "cplus.met"
                    PPTREE _ptTree1=0,_ptRes1=0;
#line 1561 "cplus.met"
                    _ptRes1= MakeTree(EXTENSION, 1);
#line 1561 "cplus.met"
                    if ( (_ptTree1=NQUICK_CALL(_Tak(ext_data_decl_simp)(error_free), 71, cplus))== (PPTREE) -1 ) {
#line 1561 "cplus.met"
                        MulFreeTree(4,_ptRes1,_ptTree1,_ptTree0,retTree);
                        PROG_EXIT(ext_data_declaration_exit,"ext_data_declaration")
#line 1561 "cplus.met"
                    }
#line 1561 "cplus.met"
                    ReplaceTree(_ptRes1, 1, _ptTree1);
#line 1561 "cplus.met"
                    _ptTree0=_ptRes1;
#line 1561 "cplus.met"
                }
#line 1561 "cplus.met"
                _retValue =_ptTree0;
#line 1561 "cplus.met"
                goto ext_data_declaration_ret;
#line 1561 "cplus.met"
            }
#line 1561 "cplus.met"
            break;
#line 1561 "cplus.met"
#line 1562 "cplus.met"
        default : 
#line 1562 "cplus.met"
#line 1562 "cplus.met"
            {
#line 1562 "cplus.met"
                PPTREE _ptTree0=0;
#line 1562 "cplus.met"
                if ( (_ptTree0=NQUICK_CALL(_Tak(ext_data_decl_simp)(error_free), 71, cplus))== (PPTREE) -1 ) {
#line 1562 "cplus.met"
                    MulFreeTree(2,_ptTree0,retTree);
                    PROG_EXIT(ext_data_declaration_exit,"ext_data_declaration")
#line 1562 "cplus.met"
                }
#line 1562 "cplus.met"
                _retValue =_ptTree0;
#line 1562 "cplus.met"
                goto ext_data_declaration_ret;
#line 1562 "cplus.met"
            }
#line 1562 "cplus.met"
            break;
#line 1562 "cplus.met"
    }
#line 1562 "cplus.met"
#line 1562 "cplus.met"
#line 1563 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1563 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 1563 "cplus.met"
return((PPTREE) 0);
#line 1563 "cplus.met"

#line 1563 "cplus.met"
ext_data_declaration_exit :
#line 1563 "cplus.met"

#line 1563 "cplus.met"
    _Debug = TRACE_RULE("ext_data_declaration",TRACE_EXIT,(PPTREE)0);
#line 1563 "cplus.met"
    _funcLevel--;
#line 1563 "cplus.met"
    return((PPTREE) -1) ;
#line 1563 "cplus.met"

#line 1563 "cplus.met"
ext_data_declaration_ret :
#line 1563 "cplus.met"
    
#line 1563 "cplus.met"
    _Debug = TRACE_RULE("ext_data_declaration",TRACE_RETURN,_retValue);
#line 1563 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1563 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 1563 "cplus.met"
    return _retValue ;
#line 1563 "cplus.met"
}
#line 1563 "cplus.met"

#line 1563 "cplus.met"
#line 1230 "cplus.met"
PPTREE cplus::ext_decl_dir ( int error_free)
#line 1230 "cplus.met"
{
#line 1230 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 1230 "cplus.met"
    int _value,_nbPre = 0 ;
#line 1230 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 1230 "cplus.met"
    int _Debug = TRACE_RULE("ext_decl_dir",TRACE_ENTER,(PPTREE)0);
#line 1230 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 1230 "cplus.met"
#line 1230 "cplus.met"
    PPTREE retTree = (PPTREE) 0;
#line 1230 "cplus.met"
#line 1232 "cplus.met"
    if (NPUSH_CALL_AFF_VERIF(retTree = ,_Tak(directive), 53, cplus)){
#line 1232 "cplus.met"
#line 1233 "cplus.met"
        {
#line 1233 "cplus.met"
            _retValue = retTree ;
#line 1233 "cplus.met"
            goto ext_decl_dir_ret;
#line 1233 "cplus.met"
            
#line 1233 "cplus.met"
        }
#line 1233 "cplus.met"
    }
#line 1233 "cplus.met"
#line 1234 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 1234 "cplus.met"
    switch( lexEl.Value) {
#line 1234 "cplus.met"
#line 1235 "cplus.met"
        case META : 
#line 1235 "cplus.met"
        case IF_DIR : 
#line 1235 "cplus.met"
            tokenAhead = 0 ;
#line 1235 "cplus.met"
            CommTerm();
#line 1235 "cplus.met"
#line 1235 "cplus.met"
            {
#line 1235 "cplus.met"
                PPTREE _ptTree0=0;
#line 1235 "cplus.met"
                if ( (_ptTree0=NQUICK_CALL(_Tak(ext_decl_if_dir)(error_free), 74, cplus))== (PPTREE) -1 ) {
#line 1235 "cplus.met"
                    MulFreeTree(2,_ptTree0,retTree);
                    PROG_EXIT(ext_decl_dir_exit,"ext_decl_dir")
#line 1235 "cplus.met"
                }
#line 1235 "cplus.met"
                _retValue =_ptTree0;
#line 1235 "cplus.met"
                goto ext_decl_dir_ret;
#line 1235 "cplus.met"
            }
#line 1235 "cplus.met"
            break;
#line 1235 "cplus.met"
#line 1236 "cplus.met"
        case IFDEF_DIR : 
#line 1236 "cplus.met"
#line 1236 "cplus.met"
            {
#line 1236 "cplus.met"
                PPTREE _ptTree0=0;
#line 1236 "cplus.met"
                if ( (_ptTree0=NQUICK_CALL(_Tak(ext_decl_ifdef_dir)(error_free), 75, cplus))== (PPTREE) -1 ) {
#line 1236 "cplus.met"
                    MulFreeTree(2,_ptTree0,retTree);
                    PROG_EXIT(ext_decl_dir_exit,"ext_decl_dir")
#line 1236 "cplus.met"
                }
#line 1236 "cplus.met"
                _retValue =_ptTree0;
#line 1236 "cplus.met"
                goto ext_decl_dir_ret;
#line 1236 "cplus.met"
            }
#line 1236 "cplus.met"
            break;
#line 1236 "cplus.met"
#line 1237 "cplus.met"
        case IFNDEF_DIR : 
#line 1237 "cplus.met"
#line 1237 "cplus.met"
            {
#line 1237 "cplus.met"
                PPTREE _ptTree0=0;
#line 1237 "cplus.met"
                if ( (_ptTree0=NQUICK_CALL(_Tak(ext_decl_ifdef_dir)(error_free), 75, cplus))== (PPTREE) -1 ) {
#line 1237 "cplus.met"
                    MulFreeTree(2,_ptTree0,retTree);
                    PROG_EXIT(ext_decl_dir_exit,"ext_decl_dir")
#line 1237 "cplus.met"
                }
#line 1237 "cplus.met"
                _retValue =_ptTree0;
#line 1237 "cplus.met"
                goto ext_decl_dir_ret;
#line 1237 "cplus.met"
            }
#line 1237 "cplus.met"
            break;
#line 1237 "cplus.met"
        default :
#line 1237 "cplus.met"
            MulFreeTree(1,retTree);
            CASE_EXIT(ext_decl_dir_exit,"either IF_DIR or IFDEF_DIR or IFNDEF_DIR")
#line 1237 "cplus.met"
            break;
#line 1237 "cplus.met"
    }
#line 1237 "cplus.met"
#line 1237 "cplus.met"
#line 1238 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1238 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 1238 "cplus.met"
return((PPTREE) 0);
#line 1238 "cplus.met"

#line 1238 "cplus.met"
ext_decl_dir_exit :
#line 1238 "cplus.met"

#line 1238 "cplus.met"
    _Debug = TRACE_RULE("ext_decl_dir",TRACE_EXIT,(PPTREE)0);
#line 1238 "cplus.met"
    _funcLevel--;
#line 1238 "cplus.met"
    return((PPTREE) -1) ;
#line 1238 "cplus.met"

#line 1238 "cplus.met"
ext_decl_dir_ret :
#line 1238 "cplus.met"
    
#line 1238 "cplus.met"
    _Debug = TRACE_RULE("ext_decl_dir",TRACE_RETURN,_retValue);
#line 1238 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1238 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 1238 "cplus.met"
    return _retValue ;
#line 1238 "cplus.met"
}
#line 1238 "cplus.met"

#line 1238 "cplus.met"
#line 1164 "cplus.met"
PPTREE cplus::ext_decl_if_dir ( int error_free)
#line 1164 "cplus.met"
{
#line 1164 "cplus.met"
    int  _oldkeepCarriage = keepCarriage;
#line 1164 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 1164 "cplus.met"
    int _value,_nbPre = 0 ;
#line 1164 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 1164 "cplus.met"
    int _Debug = TRACE_RULE("ext_decl_if_dir",TRACE_ENTER,(PPTREE)0);
#line 1164 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 1164 "cplus.met"
#line 1164 "cplus.met"
    PPTREE _addlist1 = (PPTREE) 0,_addlist2 = (PPTREE) 0;
#line 1164 "cplus.met"
#line 1164 "cplus.met"
    PPTREE retTree = (PPTREE) 0,list = (PPTREE) 0,list2 = (PPTREE) 0;
#line 1164 "cplus.met"
#line 1166 "cplus.met"
    {
#line 1166 "cplus.met"
        keepCarriage = 1 ;
#line 1166 "cplus.met"
#line 1167 "cplus.met"
#line 1168 "cplus.met"
        {
#line 1168 "cplus.met"
            PPTREE _ptTree0=0,_ptRes0=0;
#line 1168 "cplus.met"
            _ptRes0= MakeTree(IF_DIR, 3);
#line 1168 "cplus.met"
            if ( (_ptTree0=NQUICK_CALL(_Tak(expression)(error_free), 63, cplus))== (PPTREE) -1 ) {
#line 1168 "cplus.met"
                MulFreeTree(7,_ptRes0,_ptTree0,_addlist1,_addlist2,list,list2,retTree);
                PROG_EXIT(ext_decl_if_dir_exit,"ext_decl_if_dir")
#line 1168 "cplus.met"
            }
#line 1168 "cplus.met"
            ReplaceTree(_ptRes0, 1, _ptTree0);
#line 1168 "cplus.met"
            retTree=_ptRes0;
#line 1168 "cplus.met"
        }
#line 1168 "cplus.met"
#line 1169 "cplus.met"
        (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 1169 "cplus.met"
        if ( ! TERM_OR_META(CARRIAGE_RETURN,"CARRIAGE_RETURN") || !(CommTerm(),1)) {
#line 1169 "cplus.met"
            MulFreeTree(5,_addlist1,_addlist2,list,list2,retTree);
            TOKEN_EXIT(ext_decl_if_dir_exit,"CARRIAGE_RETURN")
#line 1169 "cplus.met"
        } else {
#line 1169 "cplus.met"
            tokenAhead = 0 ;
#line 1169 "cplus.met"
        }
#line 1169 "cplus.met"
#line 1169 "cplus.met"
        keepCarriage =  _oldkeepCarriage;
#line 1169 "cplus.met"
    }
#line 1169 "cplus.met"
#line 1169 "cplus.met"
    _addlist1 = list ;
#line 1169 "cplus.met"
#line 1171 "cplus.met"
    while (((! ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN( ELSE_DIR,"ELSE_DIR"))) && 
#line 1171 "cplus.met"
           (! ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN( ELIF_DIR,"ELIF_DIR")))) && 
#line 1171 "cplus.met"
          (! ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN( ENDIF_DIR,"ENDIF_DIR")))) { 
#line 1171 "cplus.met"
#line 1172 "cplus.met"
#line 1172 "cplus.met"
        {
#line 1172 "cplus.met"
            PPTREE _ptTree0=0;
#line 1172 "cplus.met"
            if ( (_ptTree0=NQUICK_CALL(_Tak(ext_all_ext)(error_free), 66, cplus))== (PPTREE) -1 ) {
#line 1172 "cplus.met"
                MulFreeTree(6,_ptTree0,_addlist1,_addlist2,list,list2,retTree);
                PROG_EXIT(ext_decl_if_dir_exit,"ext_decl_if_dir")
#line 1172 "cplus.met"
            }
#line 1172 "cplus.met"
            _addlist1 =AddList(_addlist1 , _ptTree0);
#line 1172 "cplus.met"
        }
#line 1172 "cplus.met"
#line 1172 "cplus.met"
        if (list){
#line 1172 "cplus.met"
#line 1172 "cplus.met"
            _addlist1 = SonTree (_addlist1 ,2 );
#line 1172 "cplus.met"
        } else {
#line 1172 "cplus.met"
#line 1172 "cplus.met"
            list = _addlist1 ;
#line 1172 "cplus.met"
        }
#line 1172 "cplus.met"
    } 
#line 1172 "cplus.met"
#line 1173 "cplus.met"
    {
#line 1173 "cplus.met"
        PPTREE _ptTree0=0;
#line 1173 "cplus.met"
        if ( (_ptTree0=NQUICK_CALL(_Tak(none_statement)(error_free), 104, cplus))== (PPTREE) -1 ) {
#line 1173 "cplus.met"
            MulFreeTree(6,_ptTree0,_addlist1,_addlist2,list,list2,retTree);
            PROG_EXIT(ext_decl_if_dir_exit,"ext_decl_if_dir")
#line 1173 "cplus.met"
        }
#line 1173 "cplus.met"
        list =AddList(list , _ptTree0);
#line 1173 "cplus.met"
    }
#line 1173 "cplus.met"
#line 1174 "cplus.met"
    ReplaceTree(retTree ,2 ,list );
#line 1174 "cplus.met"
#line 1175 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 1175 "cplus.met"
    switch( lexEl.Value) {
#line 1175 "cplus.met"
#line 1176 "cplus.met"
        case META : 
#line 1176 "cplus.met"
        case ELSE_DIR : 
#line 1176 "cplus.met"
            tokenAhead = 0 ;
#line 1176 "cplus.met"
            CommTerm();
#line 1176 "cplus.met"
#line 1177 "cplus.met"
#line 1177 "cplus.met"
            _addlist2 = list2 ;
#line 1177 "cplus.met"
#line 1178 "cplus.met"
            while (((tokenAhead && tokenAhead != -1)|| (c != EOF)) && 
#line 1178 "cplus.met"
                  (! ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN( ENDIF_DIR,"ENDIF_DIR")))) { 
#line 1178 "cplus.met"
#line 1179 "cplus.met"
#line 1179 "cplus.met"
                {
#line 1179 "cplus.met"
                    PPTREE _ptTree0=0;
#line 1179 "cplus.met"
                    if ( (_ptTree0=NQUICK_CALL(_Tak(ext_all_ext)(error_free), 66, cplus))== (PPTREE) -1 ) {
#line 1179 "cplus.met"
                        MulFreeTree(6,_ptTree0,_addlist1,_addlist2,list,list2,retTree);
                        PROG_EXIT(ext_decl_if_dir_exit,"ext_decl_if_dir")
#line 1179 "cplus.met"
                    }
#line 1179 "cplus.met"
                    _addlist2 =AddList(_addlist2 , _ptTree0);
#line 1179 "cplus.met"
                }
#line 1179 "cplus.met"
#line 1179 "cplus.met"
                if (list2){
#line 1179 "cplus.met"
#line 1179 "cplus.met"
                    _addlist2 = SonTree (_addlist2 ,2 );
#line 1179 "cplus.met"
                } else {
#line 1179 "cplus.met"
#line 1179 "cplus.met"
                    list2 = _addlist2 ;
#line 1179 "cplus.met"
                }
#line 1179 "cplus.met"
            } 
#line 1179 "cplus.met"
#line 1180 "cplus.met"
            {
#line 1180 "cplus.met"
                PPTREE _ptTree0=0;
#line 1180 "cplus.met"
                if ( (_ptTree0=NQUICK_CALL(_Tak(none_statement)(error_free), 104, cplus))== (PPTREE) -1 ) {
#line 1180 "cplus.met"
                    MulFreeTree(6,_ptTree0,_addlist1,_addlist2,list,list2,retTree);
                    PROG_EXIT(ext_decl_if_dir_exit,"ext_decl_if_dir")
#line 1180 "cplus.met"
                }
#line 1180 "cplus.met"
                list2 =AddList(list2 , _ptTree0);
#line 1180 "cplus.met"
            }
#line 1180 "cplus.met"
#line 1181 "cplus.met"
            (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 1181 "cplus.met"
            if ( ! TERM_OR_META(ENDIF_DIR,"ENDIF_DIR") || !(CommTerm(),1)) {
#line 1181 "cplus.met"
                MulFreeTree(5,_addlist1,_addlist2,list,list2,retTree);
                TOKEN_EXIT(ext_decl_if_dir_exit,"ENDIF_DIR")
#line 1181 "cplus.met"
            } else {
#line 1181 "cplus.met"
                tokenAhead = 0 ;
#line 1181 "cplus.met"
            }
#line 1181 "cplus.met"
#line 1182 "cplus.met"
            {
#line 1182 "cplus.met"
                PPTREE _ptTree0=0;
#line 1182 "cplus.met"
                _ptTree0=ReplaceTree(retTree ,3 ,list2 );
#line 1182 "cplus.met"
                _retValue =_ptTree0;
#line 1182 "cplus.met"
                goto ext_decl_if_dir_ret;
#line 1182 "cplus.met"
            }
#line 1182 "cplus.met"
#line 1182 "cplus.met"
            break;
#line 1182 "cplus.met"
#line 1184 "cplus.met"
        case ELIF_DIR : 
#line 1184 "cplus.met"
            tokenAhead = 0 ;
#line 1184 "cplus.met"
            CommTerm();
#line 1184 "cplus.met"
#line 1184 "cplus.met"
            {
#line 1184 "cplus.met"
                PPTREE _ptTree0=0;
#line 1184 "cplus.met"
                {
#line 1184 "cplus.met"
                    PPTREE _ptTree1=0;
#line 1184 "cplus.met"
                    if ( (_ptTree1=NQUICK_CALL(_Tak(ext_decl_if_dir)(error_free), 74, cplus))== (PPTREE) -1 ) {
#line 1184 "cplus.met"
                        MulFreeTree(7,_ptTree1,_ptTree0,_addlist1,_addlist2,list,list2,retTree);
                        PROG_EXIT(ext_decl_if_dir_exit,"ext_decl_if_dir")
#line 1184 "cplus.met"
                    }
#line 1184 "cplus.met"
                    _ptTree0=ReplaceTree(retTree , 3 , _ptTree1);
#line 1184 "cplus.met"
                }
#line 1184 "cplus.met"
                _retValue =_ptTree0;
#line 1184 "cplus.met"
                goto ext_decl_if_dir_ret;
#line 1184 "cplus.met"
            }
#line 1184 "cplus.met"
            break;
#line 1184 "cplus.met"
#line 1185 "cplus.met"
        case ENDIF_DIR : 
#line 1185 "cplus.met"
            tokenAhead = 0 ;
#line 1185 "cplus.met"
            CommTerm();
#line 1185 "cplus.met"
#line 1185 "cplus.met"
            {
#line 1185 "cplus.met"
                _retValue = retTree ;
#line 1185 "cplus.met"
                goto ext_decl_if_dir_ret;
#line 1185 "cplus.met"
                
#line 1185 "cplus.met"
            }
#line 1185 "cplus.met"
            break;
#line 1185 "cplus.met"
        default :
#line 1185 "cplus.met"
            MulFreeTree(5,_addlist1,_addlist2,list,list2,retTree);
            CASE_EXIT(ext_decl_if_dir_exit,"either ELSE_DIR or ELIF_DIR or ENDIF_DIR")
#line 1185 "cplus.met"
            break;
#line 1185 "cplus.met"
    }
#line 1185 "cplus.met"
#line 1185 "cplus.met"
#line 1186 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1186 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 1186 "cplus.met"
keepCarriage =  _oldkeepCarriage;
#line 1186 "cplus.met"
return((PPTREE) 0);
#line 1186 "cplus.met"

#line 1186 "cplus.met"
ext_decl_if_dir_exit :
#line 1186 "cplus.met"

#line 1186 "cplus.met"
    _Debug = TRACE_RULE("ext_decl_if_dir",TRACE_EXIT,(PPTREE)0);
#line 1186 "cplus.met"
    _funcLevel--;
#line 1186 "cplus.met"
    keepCarriage =  _oldkeepCarriage;
#line 1186 "cplus.met"
    return((PPTREE) -1) ;
#line 1186 "cplus.met"

#line 1186 "cplus.met"
ext_decl_if_dir_ret :
#line 1186 "cplus.met"
    
#line 1186 "cplus.met"
    _Debug = TRACE_RULE("ext_decl_if_dir",TRACE_RETURN,_retValue);
#line 1186 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1186 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 1186 "cplus.met"
    keepCarriage =  _oldkeepCarriage;
#line 1186 "cplus.met"
    return _retValue ;
#line 1186 "cplus.met"
}
#line 1186 "cplus.met"

#line 1186 "cplus.met"
#line 1189 "cplus.met"
PPTREE cplus::ext_decl_ifdef_dir ( int error_free)
#line 1189 "cplus.met"
{
#line 1189 "cplus.met"
    int  _oldkeepCarriage = keepCarriage;
#line 1189 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 1189 "cplus.met"
    int _value,_nbPre = 0 ;
#line 1189 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 1189 "cplus.met"
    int _Debug = TRACE_RULE("ext_decl_ifdef_dir",TRACE_ENTER,(PPTREE)0);
#line 1189 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 1189 "cplus.met"
#line 1189 "cplus.met"
    PPTREE _addlist1 = (PPTREE) 0,_addlist2 = (PPTREE) 0;
#line 1189 "cplus.met"
#line 1189 "cplus.met"
    PPTREE retTree = (PPTREE) 0,list = (PPTREE) 0,list2 = (PPTREE) 0,express = (PPTREE) 0;
#line 1189 "cplus.met"
#line 1191 "cplus.met"
    if ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&TERM_OR_META(IFDEF_DIR,"IFDEF_DIR") && (tokenAhead = 0,CommTerm(),1)){
#line 1191 "cplus.met"
#line 1192 "cplus.met"
#line 1193 "cplus.met"
        {
#line 1193 "cplus.met"
            keepCarriage = 1 ;
#line 1193 "cplus.met"
#line 1194 "cplus.met"
#line 1195 "cplus.met"
            {
#line 1195 "cplus.met"
                PPTREE _ptTree0=0,_ptRes0=0;
#line 1195 "cplus.met"
                _ptRes0= MakeTree(IFDEF_DIR, 3);
#line 1195 "cplus.met"
                if ( (_ptTree0=NQUICK_CALL(_Tak(expression)(error_free), 63, cplus))== (PPTREE) -1 ) {
#line 1195 "cplus.met"
                    MulFreeTree(8,_ptRes0,_ptTree0,_addlist1,_addlist2,express,list,list2,retTree);
                    PROG_EXIT(ext_decl_ifdef_dir_exit,"ext_decl_ifdef_dir")
#line 1195 "cplus.met"
                }
#line 1195 "cplus.met"
                ReplaceTree(_ptRes0, 1, _ptTree0);
#line 1195 "cplus.met"
                retTree=_ptRes0;
#line 1195 "cplus.met"
            }
#line 1195 "cplus.met"
#line 1196 "cplus.met"
            (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 1196 "cplus.met"
            if ( ! TERM_OR_META(CARRIAGE_RETURN,"CARRIAGE_RETURN") || !(CommTerm(),1)) {
#line 1196 "cplus.met"
                MulFreeTree(6,_addlist1,_addlist2,express,list,list2,retTree);
                TOKEN_EXIT(ext_decl_ifdef_dir_exit,"CARRIAGE_RETURN")
#line 1196 "cplus.met"
            } else {
#line 1196 "cplus.met"
                tokenAhead = 0 ;
#line 1196 "cplus.met"
            }
#line 1196 "cplus.met"
#line 1196 "cplus.met"
            keepCarriage =  _oldkeepCarriage;
#line 1196 "cplus.met"
        }
#line 1196 "cplus.met"
#line 1196 "cplus.met"
#line 1197 "cplus.met"
    } else {
#line 1197 "cplus.met"
#line 1200 "cplus.met"
#line 1201 "cplus.met"
        (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 1201 "cplus.met"
        if ( ! TERM_OR_META(IFNDEF_DIR,"IFNDEF_DIR") || !(CommTerm(),1)) {
#line 1201 "cplus.met"
            MulFreeTree(6,_addlist1,_addlist2,express,list,list2,retTree);
            TOKEN_EXIT(ext_decl_ifdef_dir_exit,"IFNDEF_DIR")
#line 1201 "cplus.met"
        } else {
#line 1201 "cplus.met"
            tokenAhead = 0 ;
#line 1201 "cplus.met"
        }
#line 1201 "cplus.met"
#line 1202 "cplus.met"
        {
#line 1202 "cplus.met"
            keepCarriage = 1 ;
#line 1202 "cplus.met"
#line 1203 "cplus.met"
#line 1204 "cplus.met"
            if ( (express=NQUICK_CALL(_Tak(expression)(error_free), 63, cplus))== (PPTREE) -1 ) {
#line 1204 "cplus.met"
                MulFreeTree(6,_addlist1,_addlist2,express,list,list2,retTree);
                PROG_EXIT(ext_decl_ifdef_dir_exit,"ext_decl_ifdef_dir")
#line 1204 "cplus.met"
            }
#line 1204 "cplus.met"
#line 1205 "cplus.met"
            (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 1205 "cplus.met"
            if ( ! TERM_OR_META(CARRIAGE_RETURN,"CARRIAGE_RETURN") || !(CommTerm(),1)) {
#line 1205 "cplus.met"
                MulFreeTree(6,_addlist1,_addlist2,express,list,list2,retTree);
                TOKEN_EXIT(ext_decl_ifdef_dir_exit,"CARRIAGE_RETURN")
#line 1205 "cplus.met"
            } else {
#line 1205 "cplus.met"
                tokenAhead = 0 ;
#line 1205 "cplus.met"
            }
#line 1205 "cplus.met"
#line 1205 "cplus.met"
            keepCarriage =  _oldkeepCarriage;
#line 1205 "cplus.met"
        }
#line 1205 "cplus.met"
#line 1207 "cplus.met"
        {
#line 1207 "cplus.met"
            PPTREE _ptRes0=0;
#line 1207 "cplus.met"
            _ptRes0= MakeTree(IFNDEF_DIR, 3);
#line 1207 "cplus.met"
            ReplaceTree(_ptRes0, 1, express );
#line 1207 "cplus.met"
            retTree=_ptRes0;
#line 1207 "cplus.met"
        }
#line 1207 "cplus.met"
#line 1207 "cplus.met"
    }
#line 1207 "cplus.met"
#line 1207 "cplus.met"
    _addlist1 = list ;
#line 1207 "cplus.met"
#line 1211 "cplus.met"
    while (((! ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN( ELSE_DIR,"ELSE_DIR"))) && 
#line 1211 "cplus.met"
           (! ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN( ELIF_DIR,"ELIF_DIR")))) && 
#line 1211 "cplus.met"
          (! ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN( ENDIF_DIR,"ENDIF_DIR")))) { 
#line 1211 "cplus.met"
#line 1213 "cplus.met"
#line 1213 "cplus.met"
        {
#line 1213 "cplus.met"
            PPTREE _ptTree0=0;
#line 1213 "cplus.met"
            if ( (_ptTree0=NQUICK_CALL(_Tak(ext_all_ext)(error_free), 66, cplus))== (PPTREE) -1 ) {
#line 1213 "cplus.met"
                MulFreeTree(7,_ptTree0,_addlist1,_addlist2,express,list,list2,retTree);
                PROG_EXIT(ext_decl_ifdef_dir_exit,"ext_decl_ifdef_dir")
#line 1213 "cplus.met"
            }
#line 1213 "cplus.met"
            _addlist1 =AddList(_addlist1 , _ptTree0);
#line 1213 "cplus.met"
        }
#line 1213 "cplus.met"
#line 1213 "cplus.met"
        if (list){
#line 1213 "cplus.met"
#line 1213 "cplus.met"
            _addlist1 = SonTree (_addlist1 ,2 );
#line 1213 "cplus.met"
        } else {
#line 1213 "cplus.met"
#line 1213 "cplus.met"
            list = _addlist1 ;
#line 1213 "cplus.met"
        }
#line 1213 "cplus.met"
    } 
#line 1213 "cplus.met"
#line 1214 "cplus.met"
    {
#line 1214 "cplus.met"
        PPTREE _ptTree0=0;
#line 1214 "cplus.met"
        if ( (_ptTree0=NQUICK_CALL(_Tak(none_statement)(error_free), 104, cplus))== (PPTREE) -1 ) {
#line 1214 "cplus.met"
            MulFreeTree(7,_ptTree0,_addlist1,_addlist2,express,list,list2,retTree);
            PROG_EXIT(ext_decl_ifdef_dir_exit,"ext_decl_ifdef_dir")
#line 1214 "cplus.met"
        }
#line 1214 "cplus.met"
        list =AddList(list , _ptTree0);
#line 1214 "cplus.met"
    }
#line 1214 "cplus.met"
#line 1215 "cplus.met"
    ReplaceTree(retTree ,2 ,list );
#line 1215 "cplus.met"
#line 1216 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 1216 "cplus.met"
    switch( lexEl.Value) {
#line 1216 "cplus.met"
#line 1217 "cplus.met"
        case META : 
#line 1217 "cplus.met"
        case ELSE_DIR : 
#line 1217 "cplus.met"
            tokenAhead = 0 ;
#line 1217 "cplus.met"
            CommTerm();
#line 1217 "cplus.met"
#line 1218 "cplus.met"
#line 1218 "cplus.met"
            _addlist2 = list2 ;
#line 1218 "cplus.met"
#line 1219 "cplus.met"
            while (((tokenAhead && tokenAhead != -1)|| (c != EOF)) && 
#line 1219 "cplus.met"
                  (! ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN( ENDIF_DIR,"ENDIF_DIR")))) { 
#line 1219 "cplus.met"
#line 1220 "cplus.met"
#line 1220 "cplus.met"
                {
#line 1220 "cplus.met"
                    PPTREE _ptTree0=0;
#line 1220 "cplus.met"
                    if ( (_ptTree0=NQUICK_CALL(_Tak(ext_all_ext)(error_free), 66, cplus))== (PPTREE) -1 ) {
#line 1220 "cplus.met"
                        MulFreeTree(7,_ptTree0,_addlist1,_addlist2,express,list,list2,retTree);
                        PROG_EXIT(ext_decl_ifdef_dir_exit,"ext_decl_ifdef_dir")
#line 1220 "cplus.met"
                    }
#line 1220 "cplus.met"
                    _addlist2 =AddList(_addlist2 , _ptTree0);
#line 1220 "cplus.met"
                }
#line 1220 "cplus.met"
#line 1220 "cplus.met"
                if (list2){
#line 1220 "cplus.met"
#line 1220 "cplus.met"
                    _addlist2 = SonTree (_addlist2 ,2 );
#line 1220 "cplus.met"
                } else {
#line 1220 "cplus.met"
#line 1220 "cplus.met"
                    list2 = _addlist2 ;
#line 1220 "cplus.met"
                }
#line 1220 "cplus.met"
            } 
#line 1220 "cplus.met"
#line 1221 "cplus.met"
            {
#line 1221 "cplus.met"
                PPTREE _ptTree0=0;
#line 1221 "cplus.met"
                if ( (_ptTree0=NQUICK_CALL(_Tak(none_statement)(error_free), 104, cplus))== (PPTREE) -1 ) {
#line 1221 "cplus.met"
                    MulFreeTree(7,_ptTree0,_addlist1,_addlist2,express,list,list2,retTree);
                    PROG_EXIT(ext_decl_ifdef_dir_exit,"ext_decl_ifdef_dir")
#line 1221 "cplus.met"
                }
#line 1221 "cplus.met"
                list2 =AddList(list2 , _ptTree0);
#line 1221 "cplus.met"
            }
#line 1221 "cplus.met"
#line 1222 "cplus.met"
            (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 1222 "cplus.met"
            if ( ! TERM_OR_META(ENDIF_DIR,"ENDIF_DIR") || !(CommTerm(),1)) {
#line 1222 "cplus.met"
                MulFreeTree(6,_addlist1,_addlist2,express,list,list2,retTree);
                TOKEN_EXIT(ext_decl_ifdef_dir_exit,"ENDIF_DIR")
#line 1222 "cplus.met"
            } else {
#line 1222 "cplus.met"
                tokenAhead = 0 ;
#line 1222 "cplus.met"
            }
#line 1222 "cplus.met"
#line 1223 "cplus.met"
            {
#line 1223 "cplus.met"
                PPTREE _ptTree0=0;
#line 1223 "cplus.met"
                _ptTree0=ReplaceTree(retTree ,3 ,list2 );
#line 1223 "cplus.met"
                _retValue =_ptTree0;
#line 1223 "cplus.met"
                goto ext_decl_ifdef_dir_ret;
#line 1223 "cplus.met"
            }
#line 1223 "cplus.met"
#line 1223 "cplus.met"
            break;
#line 1223 "cplus.met"
#line 1225 "cplus.met"
        case ELIF_DIR : 
#line 1225 "cplus.met"
            tokenAhead = 0 ;
#line 1225 "cplus.met"
            CommTerm();
#line 1225 "cplus.met"
#line 1225 "cplus.met"
            {
#line 1225 "cplus.met"
                PPTREE _ptTree0=0;
#line 1225 "cplus.met"
                {
#line 1225 "cplus.met"
                    PPTREE _ptTree1=0;
#line 1225 "cplus.met"
                    if ( (_ptTree1=NQUICK_CALL(_Tak(ext_decl_if_dir)(error_free), 74, cplus))== (PPTREE) -1 ) {
#line 1225 "cplus.met"
                        MulFreeTree(8,_ptTree1,_ptTree0,_addlist1,_addlist2,express,list,list2,retTree);
                        PROG_EXIT(ext_decl_ifdef_dir_exit,"ext_decl_ifdef_dir")
#line 1225 "cplus.met"
                    }
#line 1225 "cplus.met"
                    _ptTree0=ReplaceTree(retTree , 3 , _ptTree1);
#line 1225 "cplus.met"
                }
#line 1225 "cplus.met"
                _retValue =_ptTree0;
#line 1225 "cplus.met"
                goto ext_decl_ifdef_dir_ret;
#line 1225 "cplus.met"
            }
#line 1225 "cplus.met"
            break;
#line 1225 "cplus.met"
#line 1226 "cplus.met"
        case ENDIF_DIR : 
#line 1226 "cplus.met"
            tokenAhead = 0 ;
#line 1226 "cplus.met"
            CommTerm();
#line 1226 "cplus.met"
#line 1226 "cplus.met"
            {
#line 1226 "cplus.met"
                _retValue = retTree ;
#line 1226 "cplus.met"
                goto ext_decl_ifdef_dir_ret;
#line 1226 "cplus.met"
                
#line 1226 "cplus.met"
            }
#line 1226 "cplus.met"
            break;
#line 1226 "cplus.met"
        default :
#line 1226 "cplus.met"
            MulFreeTree(6,_addlist1,_addlist2,express,list,list2,retTree);
            CASE_EXIT(ext_decl_ifdef_dir_exit,"either ELSE_DIR or ELIF_DIR or ENDIF_DIR")
#line 1226 "cplus.met"
            break;
#line 1226 "cplus.met"
    }
#line 1226 "cplus.met"
#line 1226 "cplus.met"
#line 1227 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1227 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 1227 "cplus.met"
keepCarriage =  _oldkeepCarriage;
#line 1227 "cplus.met"
return((PPTREE) 0);
#line 1227 "cplus.met"

#line 1227 "cplus.met"
ext_decl_ifdef_dir_exit :
#line 1227 "cplus.met"

#line 1227 "cplus.met"
    _Debug = TRACE_RULE("ext_decl_ifdef_dir",TRACE_EXIT,(PPTREE)0);
#line 1227 "cplus.met"
    _funcLevel--;
#line 1227 "cplus.met"
    keepCarriage =  _oldkeepCarriage;
#line 1227 "cplus.met"
    return((PPTREE) -1) ;
#line 1227 "cplus.met"

#line 1227 "cplus.met"
ext_decl_ifdef_dir_ret :
#line 1227 "cplus.met"
    
#line 1227 "cplus.met"
    _Debug = TRACE_RULE("ext_decl_ifdef_dir",TRACE_RETURN,_retValue);
#line 1227 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1227 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 1227 "cplus.met"
    keepCarriage =  _oldkeepCarriage;
#line 1227 "cplus.met"
    return _retValue ;
#line 1227 "cplus.met"
}
#line 1227 "cplus.met"

#line 1227 "cplus.met"
#line 3320 "cplus.met"
PPTREE cplus::for_statement ( int error_free)
#line 3320 "cplus.met"
{
#line 3320 "cplus.met"
    int  _oldswitchContext = switchContext;
#line 3320 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 3320 "cplus.met"
    int _value,_nbPre = 0 ;
#line 3320 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 3320 "cplus.met"
    int _Debug = TRACE_RULE("for_statement",TRACE_ENTER,(PPTREE)0);
#line 3320 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 3320 "cplus.met"
#line 3320 "cplus.met"
    PPTREE statTree = (PPTREE) 0,opt = (PPTREE) 0;
#line 3320 "cplus.met"
#line 3322 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3322 "cplus.met"
    if (  !SEE_TOKEN( POUV,"(") || !(CommTerm(),1)) {
#line 3322 "cplus.met"
        MulFreeTree(2,opt,statTree);
        TOKEN_EXIT(for_statement_exit,"(")
#line 3322 "cplus.met"
    } else {
#line 3322 "cplus.met"
        tokenAhead = 0 ;
#line 3322 "cplus.met"
    }
#line 3322 "cplus.met"
#line 3323 "cplus.met"
    {
#line 3323 "cplus.met"
        PPTREE _ptRes0=0;
#line 3323 "cplus.met"
        _ptRes0= MakeTree(FOR, 4);
#line 3323 "cplus.met"
        statTree=_ptRes0;
#line 3323 "cplus.met"
    }
#line 3323 "cplus.met"
#line 3324 "cplus.met"
    if (NPUSH_CALL_AFF_VERIF(opt = ,_Tak(expression_for), 64, cplus)){
#line 3324 "cplus.met"
#line 3325 "cplus.met"
        ReplaceTree(statTree ,1 ,opt );
#line 3325 "cplus.met"
#line 3325 "cplus.met"
    } else {
#line 3325 "cplus.met"
#line 3327 "cplus.met"
        if (NPUSH_CALL_AFF_VERIF(opt = ,_Tak(data_declaration_for), 42, cplus)){
#line 3327 "cplus.met"
#line 3328 "cplus.met"
            ReplaceTree(statTree ,1 ,opt );
#line 3328 "cplus.met"
#line 3328 "cplus.met"
        }
#line 3328 "cplus.met"
    }
#line 3328 "cplus.met"
#line 3329 "cplus.met"
    if ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN(DPOI,":") && (tokenAhead = 0,CommTerm(),1)){
#line 3329 "cplus.met"
#line 3330 "cplus.met"
#line 3331 "cplus.met"
        {
#line 3331 "cplus.met"
            PPTREE _ptTree0=0;
#line 3331 "cplus.met"
            {
#line 3331 "cplus.met"
                PPTREE _ptTree1=0,_ptRes1=0;
#line 3331 "cplus.met"
                _ptRes1= MakeTree(ALL_OF, 2);
#line 3331 "cplus.met"
                ReplaceTree(_ptRes1, 1, opt );
#line 3331 "cplus.met"
                if ( (_ptTree1=NQUICK_CALL(_Tak(expression)(error_free), 63, cplus))== (PPTREE) -1 ) {
#line 3331 "cplus.met"
                    MulFreeTree(5,_ptRes1,_ptTree1,_ptTree0,opt,statTree);
                    PROG_EXIT(for_statement_exit,"for_statement")
#line 3331 "cplus.met"
                }
#line 3331 "cplus.met"
                ReplaceTree(_ptRes1, 2, _ptTree1);
#line 3331 "cplus.met"
                _ptTree0=_ptRes1;
#line 3331 "cplus.met"
            }
#line 3331 "cplus.met"
            ReplaceTree(statTree , 1 , _ptTree0);
#line 3331 "cplus.met"
        }
#line 3331 "cplus.met"
#line 3331 "cplus.met"
#line 3331 "cplus.met"
    } else {
#line 3331 "cplus.met"
#line 3334 "cplus.met"
#line 3335 "cplus.met"
        (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3335 "cplus.met"
        if (  !SEE_TOKEN( PVIR,";") || !(CommTerm(),1)) {
#line 3335 "cplus.met"
            MulFreeTree(2,opt,statTree);
            TOKEN_EXIT(for_statement_exit,";")
#line 3335 "cplus.met"
        } else {
#line 3335 "cplus.met"
            tokenAhead = 0 ;
#line 3335 "cplus.met"
        }
#line 3335 "cplus.met"
#line 3336 "cplus.met"
        if (NPUSH_CALL_AFF_VERIF(opt = ,_Tak(expression), 63, cplus)){
#line 3336 "cplus.met"
#line 3337 "cplus.met"
            ReplaceTree(statTree ,2 ,opt );
#line 3337 "cplus.met"
#line 3337 "cplus.met"
        }
#line 3337 "cplus.met"
#line 3338 "cplus.met"
        (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3338 "cplus.met"
        if (  !SEE_TOKEN( PVIR,";") || !(CommTerm(),1)) {
#line 3338 "cplus.met"
            MulFreeTree(2,opt,statTree);
            TOKEN_EXIT(for_statement_exit,";")
#line 3338 "cplus.met"
        } else {
#line 3338 "cplus.met"
            tokenAhead = 0 ;
#line 3338 "cplus.met"
        }
#line 3338 "cplus.met"
#line 3339 "cplus.met"
        if (NPUSH_CALL_AFF_VERIF(opt = ,_Tak(expression), 63, cplus)){
#line 3339 "cplus.met"
#line 3340 "cplus.met"
            ReplaceTree(statTree ,3 ,opt );
#line 3340 "cplus.met"
#line 3340 "cplus.met"
        }
#line 3340 "cplus.met"
#line 3340 "cplus.met"
    }
#line 3340 "cplus.met"
#line 3342 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3342 "cplus.met"
    if (  !SEE_TOKEN( PFER,")") || !(CommTerm(),1)) {
#line 3342 "cplus.met"
        MulFreeTree(2,opt,statTree);
        TOKEN_EXIT(for_statement_exit,")")
#line 3342 "cplus.met"
    } else {
#line 3342 "cplus.met"
        tokenAhead = 0 ;
#line 3342 "cplus.met"
    }
#line 3342 "cplus.met"
#line 3343 "cplus.met"
    {
#line 3343 "cplus.met"
        switchContext = 0 ;
#line 3343 "cplus.met"
#line 3344 "cplus.met"
        {
#line 3344 "cplus.met"
            PPTREE _ptTree0=0;
#line 3344 "cplus.met"
            if ( (_ptTree0=NQUICK_CALL(_Tak(statement)(error_free), 140, cplus))== (PPTREE) -1 ) {
#line 3344 "cplus.met"
                MulFreeTree(3,_ptTree0,opt,statTree);
                PROG_EXIT(for_statement_exit,"for_statement")
#line 3344 "cplus.met"
            }
#line 3344 "cplus.met"
            ReplaceTree(statTree , 4 , _ptTree0);
#line 3344 "cplus.met"
        }
#line 3344 "cplus.met"
        switchContext =  _oldswitchContext;
#line 3344 "cplus.met"
    }
#line 3344 "cplus.met"
#line 3345 "cplus.met"
    {
#line 3345 "cplus.met"
        _retValue = statTree ;
#line 3345 "cplus.met"
        goto for_statement_ret;
#line 3345 "cplus.met"
        
#line 3345 "cplus.met"
    }
#line 3345 "cplus.met"
#line 3345 "cplus.met"
#line 3345 "cplus.met"

#line 3346 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 3346 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 3346 "cplus.met"
switchContext =  _oldswitchContext;
#line 3346 "cplus.met"
return((PPTREE) 0);
#line 3346 "cplus.met"

#line 3346 "cplus.met"
for_statement_exit :
#line 3346 "cplus.met"

#line 3346 "cplus.met"
    _Debug = TRACE_RULE("for_statement",TRACE_EXIT,(PPTREE)0);
#line 3346 "cplus.met"
    _funcLevel--;
#line 3346 "cplus.met"
    switchContext =  _oldswitchContext;
#line 3346 "cplus.met"
    return((PPTREE) -1) ;
#line 3346 "cplus.met"

#line 3346 "cplus.met"
for_statement_ret :
#line 3346 "cplus.met"
    
#line 3346 "cplus.met"
    _Debug = TRACE_RULE("for_statement",TRACE_RETURN,_retValue);
#line 3346 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 3346 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 3346 "cplus.met"
    switchContext =  _oldswitchContext;
#line 3346 "cplus.met"
    return _retValue ;
#line 3346 "cplus.met"
}
#line 3346 "cplus.met"

#line 3346 "cplus.met"
#line 3244 "cplus.met"
PPTREE cplus::func_declaration ( int error_free)
#line 3244 "cplus.met"
{
#line 3244 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 3244 "cplus.met"
    int _value,_nbPre = 0 ;
#line 3244 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 3244 "cplus.met"
    int _Debug = TRACE_RULE("func_declaration",TRACE_ENTER,(PPTREE)0);
#line 3244 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 3244 "cplus.met"
#line 3244 "cplus.met"
    PPTREE _addlist1 = (PPTREE) 0;
#line 3244 "cplus.met"
#line 3244 "cplus.met"
    PPTREE funcTree = (PPTREE) 0,opt = (PPTREE) 0,decList = (PPTREE) 0,range = (PPTREE) 0,exception = (PPTREE) 0;
#line 3244 "cplus.met"
#line 3248 "cplus.met"
    if (! (NPUSH_CALL_AFF_VERIF(funcTree = ,_Tak(type_and_declarator), 146, cplus))){
#line 3248 "cplus.met"
#line 3250 "cplus.met"
#line 3251 "cplus.met"
        {
#line 3251 "cplus.met"
            PPTREE _ptTree0=0,_ptRes0=0;
#line 3251 "cplus.met"
            _ptRes0= MakeTree(FUNC, 11);
#line 3251 "cplus.met"
            if ( (_ptTree0=NQUICK_CALL(_Tak(sc_specifier)(error_free), 127, cplus))== (PPTREE) -1 ) {
#line 3251 "cplus.met"
                MulFreeTree(8,_ptRes0,_ptTree0,_addlist1,decList,exception,funcTree,opt,range);
                PROG_EXIT(func_declaration_exit,"func_declaration")
#line 3251 "cplus.met"
            }
#line 3251 "cplus.met"
            ReplaceTree(_ptRes0, 1, _ptTree0);
#line 3251 "cplus.met"
            funcTree=_ptRes0;
#line 3251 "cplus.met"
        }
#line 3251 "cplus.met"
#line 3252 "cplus.met"
        {
#line 3252 "cplus.met"
            PPTREE _ptTree0=0;
#line 3252 "cplus.met"
            if ( (_ptTree0=NQUICK_CALL(_Tak(func_declarator)(error_free), 78, cplus))== (PPTREE) -1 ) {
#line 3252 "cplus.met"
                MulFreeTree(7,_ptTree0,_addlist1,decList,exception,funcTree,opt,range);
                PROG_EXIT(func_declaration_exit,"func_declaration")
#line 3252 "cplus.met"
            }
#line 3252 "cplus.met"
            ReplaceTree(funcTree , 3 , _ptTree0);
#line 3252 "cplus.met"
        }
#line 3252 "cplus.met"
#line 3252 "cplus.met"
#line 3252 "cplus.met"
    }
#line 3252 "cplus.met"
#line 3254 "cplus.met"
    {
#line 3254 "cplus.met"
        PPTREE _ptTree0=0;
#line 3254 "cplus.met"
        if ( (_ptTree0=NQUICK_CALL(_Tak(parameter_list_extended)(error_free), 108, cplus))== (PPTREE) -1 ) {
#line 3254 "cplus.met"
            MulFreeTree(7,_ptTree0,_addlist1,decList,exception,funcTree,opt,range);
            PROG_EXIT(func_declaration_exit,"func_declaration")
#line 3254 "cplus.met"
        }
#line 3254 "cplus.met"
        ReplaceTree(funcTree , 4 , _ptTree0);
#line 3254 "cplus.met"
    }
#line 3254 "cplus.met"
#line 3255 "cplus.met"
    if (NPUSH_CALL_AFF_VERIF(range = ,_Tak(range_modifier_function), 123, cplus)){
#line 3255 "cplus.met"
#line 3256 "cplus.met"
        ReplaceTree(funcTree ,5 ,range );
#line 3256 "cplus.met"
#line 3256 "cplus.met"
    }
#line 3256 "cplus.met"
#line 3257 "cplus.met"
    if (NPUSH_CALL_AFF_VERIF(exception = ,_Tak(exception_list), 61, cplus)){
#line 3257 "cplus.met"
#line 3258 "cplus.met"
        ReplaceTree(funcTree ,9 ,exception );
#line 3258 "cplus.met"
#line 3258 "cplus.met"
    }
#line 3258 "cplus.met"
#line 3259 "cplus.met"
    if ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN(EGAL,"=") && (tokenAhead = 0,CommTerm(),1)){
#line 3259 "cplus.met"
#line 3260 "cplus.met"
#line 3261 "cplus.met"
        (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3261 "cplus.met"
        if (  !SEE_TOKEN( DELETE,"delete") || !(CommTerm(),1)) {
#line 3261 "cplus.met"
            MulFreeTree(6,_addlist1,decList,exception,funcTree,opt,range);
            TOKEN_EXIT(func_declaration_exit,"delete")
#line 3261 "cplus.met"
        } else {
#line 3261 "cplus.met"
            tokenAhead = 0 ;
#line 3261 "cplus.met"
        }
#line 3261 "cplus.met"
#line 3262 "cplus.met"
        (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3262 "cplus.met"
        if (  !SEE_TOKEN( PVIR,";") || !(CommTerm(),1)) {
#line 3262 "cplus.met"
            MulFreeTree(6,_addlist1,decList,exception,funcTree,opt,range);
            TOKEN_EXIT(func_declaration_exit,";")
#line 3262 "cplus.met"
        } else {
#line 3262 "cplus.met"
            tokenAhead = 0 ;
#line 3262 "cplus.met"
        }
#line 3262 "cplus.met"
#line 3263 "cplus.met"
        {
#line 3263 "cplus.met"
            PPTREE _ptTree0=0;
#line 3263 "cplus.met"
            {
#line 3263 "cplus.met"
                PPTREE _ptTree1=0;
#line 3263 "cplus.met"
                {
#line 3263 "cplus.met"
                    PPTREE _ptRes2=0;
#line 3263 "cplus.met"
                    _ptRes2= MakeTree(DELETE_FUNCTION, 0);
#line 3263 "cplus.met"
                    _ptTree1=_ptRes2;
#line 3263 "cplus.met"
                }
#line 3263 "cplus.met"
                _ptTree0=ReplaceTree(funcTree , 10 , _ptTree1);
#line 3263 "cplus.met"
            }
#line 3263 "cplus.met"
            _retValue =_ptTree0;
#line 3263 "cplus.met"
            goto func_declaration_ret;
#line 3263 "cplus.met"
        }
#line 3263 "cplus.met"
#line 3263 "cplus.met"
#line 3263 "cplus.met"
    } else {
#line 3263 "cplus.met"
#line 3266 "cplus.met"
#line 3266 "cplus.met"
        _addlist1 = decList ;
#line 3266 "cplus.met"
#line 3267 "cplus.met"
        while (NPUSH_CALL_AFF_VERIF(opt = ,_Tak(data_declaration), 41, cplus)) { 
#line 3267 "cplus.met"
#line 3268 "cplus.met"
#line 3268 "cplus.met"
            _addlist1 =AddList(_addlist1 ,opt );
#line 3268 "cplus.met"
#line 3268 "cplus.met"
            if (decList){
#line 3268 "cplus.met"
#line 3268 "cplus.met"
                _addlist1 = SonTree (_addlist1 ,2 );
#line 3268 "cplus.met"
            } else {
#line 3268 "cplus.met"
#line 3268 "cplus.met"
                decList = _addlist1 ;
#line 3268 "cplus.met"
            }
#line 3268 "cplus.met"
        } 
#line 3268 "cplus.met"
#line 3269 "cplus.met"
        ReplaceTree(funcTree ,6 ,decList );
#line 3269 "cplus.met"
#line 3270 "cplus.met"
        {
#line 3270 "cplus.met"
            PPTREE _ptTree0=0;
#line 3270 "cplus.met"
            if ( (_ptTree0=NQUICK_CALL(_Tak(ctor_initializer)(error_free), 33, cplus))== (PPTREE) -1 ) {
#line 3270 "cplus.met"
                MulFreeTree(7,_ptTree0,_addlist1,decList,exception,funcTree,opt,range);
                PROG_EXIT(func_declaration_exit,"func_declaration")
#line 3270 "cplus.met"
            }
#line 3270 "cplus.met"
            ReplaceTree(funcTree , 7 , _ptTree0);
#line 3270 "cplus.met"
        }
#line 3270 "cplus.met"
#line 3271 "cplus.met"
        {
#line 3271 "cplus.met"
            PPTREE _ptTree0=0;
#line 3271 "cplus.met"
            {
#line 3271 "cplus.met"
                PPTREE _ptTree1=0;
#line 3271 "cplus.met"
                if ( (_ptTree1=NQUICK_CALL(_Tak(compound_statement)(error_free), 29, cplus))== (PPTREE) -1 ) {
#line 3271 "cplus.met"
                    MulFreeTree(8,_ptTree1,_ptTree0,_addlist1,decList,exception,funcTree,opt,range);
                    PROG_EXIT(func_declaration_exit,"func_declaration")
#line 3271 "cplus.met"
                }
#line 3271 "cplus.met"
                _ptTree0=ReplaceTree(funcTree , 8 , _ptTree1);
#line 3271 "cplus.met"
            }
#line 3271 "cplus.met"
            _retValue =_ptTree0;
#line 3271 "cplus.met"
            goto func_declaration_ret;
#line 3271 "cplus.met"
        }
#line 3271 "cplus.met"
#line 3271 "cplus.met"
    }
#line 3271 "cplus.met"
#line 3271 "cplus.met"
#line 3272 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 3272 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 3272 "cplus.met"
return((PPTREE) 0);
#line 3272 "cplus.met"

#line 3272 "cplus.met"
func_declaration_exit :
#line 3272 "cplus.met"

#line 3272 "cplus.met"
    _Debug = TRACE_RULE("func_declaration",TRACE_EXIT,(PPTREE)0);
#line 3272 "cplus.met"
    _funcLevel--;
#line 3272 "cplus.met"
    return((PPTREE) -1) ;
#line 3272 "cplus.met"

#line 3272 "cplus.met"
func_declaration_ret :
#line 3272 "cplus.met"
    
#line 3272 "cplus.met"
    _Debug = TRACE_RULE("func_declaration",TRACE_RETURN,_retValue);
#line 3272 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 3272 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 3272 "cplus.met"
    return _retValue ;
#line 3272 "cplus.met"
}
#line 3272 "cplus.met"

#line 3272 "cplus.met"
#line 2336 "cplus.met"
PPTREE cplus::func_declarator ( int error_free)
#line 2336 "cplus.met"
{
#line 2336 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 2336 "cplus.met"
    int _value,_nbPre = 0 ;
#line 2336 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 2336 "cplus.met"
    int _Debug = TRACE_RULE("func_declarator",TRACE_ENTER,(PPTREE)0);
#line 2336 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 2336 "cplus.met"
#line 2336 "cplus.met"
    PPTREE valTree = (PPTREE) 0;
#line 2336 "cplus.met"
#line 2338 "cplus.met"
    if (NPUSH_CALL_AFF_VERIF(valTree = ,_Tak(range_modifier), 122, cplus)){
#line 2338 "cplus.met"
#line 2339 "cplus.met"
        {
#line 2339 "cplus.met"
            PPTREE _ptTree0=0;
#line 2339 "cplus.met"
            {
#line 2339 "cplus.met"
                PPTREE _ptTree1=0;
#line 2339 "cplus.met"
                if ( (_ptTree1=NQUICK_CALL(_Tak(func_declarator)(error_free), 78, cplus))== (PPTREE) -1 ) {
#line 2339 "cplus.met"
                    MulFreeTree(3,_ptTree1,_ptTree0,valTree);
                    PROG_EXIT(func_declarator_exit,"func_declarator")
#line 2339 "cplus.met"
                }
#line 2339 "cplus.met"
                _ptTree0=ReplaceTree(valTree , 2 , _ptTree1);
#line 2339 "cplus.met"
            }
#line 2339 "cplus.met"
            _retValue =_ptTree0;
#line 2339 "cplus.met"
            goto func_declarator_ret;
#line 2339 "cplus.met"
        }
#line 2339 "cplus.met"
    }
#line 2339 "cplus.met"
#line 2340 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 2340 "cplus.met"
    switch( lexEl.Value) {
#line 2340 "cplus.met"
#line 2341 "cplus.met"
        case ETOI : 
#line 2341 "cplus.met"
            tokenAhead = 0 ;
#line 2341 "cplus.met"
            CommTerm();
#line 2341 "cplus.met"
#line 2341 "cplus.met"
            {
#line 2341 "cplus.met"
                PPTREE _ptTree0=0;
#line 2341 "cplus.met"
                {
#line 2341 "cplus.met"
                    PPTREE _ptTree1=0,_ptRes1=0;
#line 2341 "cplus.met"
                    _ptRes1= MakeTree(TYP_ADDR, 1);
#line 2341 "cplus.met"
                    if ( (_ptTree1=NQUICK_CALL(_Tak(func_declarator)(error_free), 78, cplus))== (PPTREE) -1 ) {
#line 2341 "cplus.met"
                        MulFreeTree(4,_ptRes1,_ptTree1,_ptTree0,valTree);
                        PROG_EXIT(func_declarator_exit,"func_declarator")
#line 2341 "cplus.met"
                    }
#line 2341 "cplus.met"
                    ReplaceTree(_ptRes1, 1, _ptTree1);
#line 2341 "cplus.met"
                    _ptTree0=_ptRes1;
#line 2341 "cplus.met"
                }
#line 2341 "cplus.met"
                _retValue =_ptTree0;
#line 2341 "cplus.met"
                goto func_declarator_ret;
#line 2341 "cplus.met"
            }
#line 2341 "cplus.met"
            break;
#line 2341 "cplus.met"
#line 2342 "cplus.met"
        case ETCO : 
#line 2342 "cplus.met"
            tokenAhead = 0 ;
#line 2342 "cplus.met"
            CommTerm();
#line 2342 "cplus.met"
#line 2342 "cplus.met"
            {
#line 2342 "cplus.met"
                PPTREE _ptTree0=0;
#line 2342 "cplus.met"
                {
#line 2342 "cplus.met"
                    PPTREE _ptTree1=0,_ptRes1=0;
#line 2342 "cplus.met"
                    _ptRes1= MakeTree(TYP_REF, 1);
#line 2342 "cplus.met"
                    if ( (_ptTree1=NQUICK_CALL(_Tak(func_declarator)(error_free), 78, cplus))== (PPTREE) -1 ) {
#line 2342 "cplus.met"
                        MulFreeTree(4,_ptRes1,_ptTree1,_ptTree0,valTree);
                        PROG_EXIT(func_declarator_exit,"func_declarator")
#line 2342 "cplus.met"
                    }
#line 2342 "cplus.met"
                    ReplaceTree(_ptRes1, 1, _ptTree1);
#line 2342 "cplus.met"
                    _ptTree0=_ptRes1;
#line 2342 "cplus.met"
                }
#line 2342 "cplus.met"
                _retValue =_ptTree0;
#line 2342 "cplus.met"
                goto func_declarator_ret;
#line 2342 "cplus.met"
            }
#line 2342 "cplus.met"
            break;
#line 2342 "cplus.met"
#line 2343 "cplus.met"
        case TILD : 
#line 2343 "cplus.met"
#line 2343 "cplus.met"
            {
#line 2343 "cplus.met"
                PPTREE _ptTree0=0;
#line 2343 "cplus.met"
                if ( (_ptTree0=NQUICK_CALL(_Tak(qualified_name)(error_free), 117, cplus))== (PPTREE) -1 ) {
#line 2343 "cplus.met"
                    MulFreeTree(2,_ptTree0,valTree);
                    PROG_EXIT(func_declarator_exit,"func_declarator")
#line 2343 "cplus.met"
                }
#line 2343 "cplus.met"
                _retValue =_ptTree0;
#line 2343 "cplus.met"
                goto func_declarator_ret;
#line 2343 "cplus.met"
            }
#line 2343 "cplus.met"
            break;
#line 2343 "cplus.met"
#line 2344 "cplus.met"
        case META : 
#line 2344 "cplus.met"
        case IDENT : 
#line 2344 "cplus.met"
#line 2344 "cplus.met"
            {
#line 2344 "cplus.met"
                PPTREE _ptTree0=0;
#line 2344 "cplus.met"
                if ( (_ptTree0=NQUICK_CALL(_Tak(qualified_name)(error_free), 117, cplus))== (PPTREE) -1 ) {
#line 2344 "cplus.met"
                    MulFreeTree(2,_ptTree0,valTree);
                    PROG_EXIT(func_declarator_exit,"func_declarator")
#line 2344 "cplus.met"
                }
#line 2344 "cplus.met"
                _retValue =_ptTree0;
#line 2344 "cplus.met"
                goto func_declarator_ret;
#line 2344 "cplus.met"
            }
#line 2344 "cplus.met"
            break;
#line 2344 "cplus.met"
#line 2345 "cplus.met"
        case OPERATOR : 
#line 2345 "cplus.met"
#line 2345 "cplus.met"
            {
#line 2345 "cplus.met"
                PPTREE _ptTree0=0;
#line 2345 "cplus.met"
                if ( (_ptTree0=NQUICK_CALL(_Tak(operator_function_name)(error_free), 105, cplus))== (PPTREE) -1 ) {
#line 2345 "cplus.met"
                    MulFreeTree(2,_ptTree0,valTree);
                    PROG_EXIT(func_declarator_exit,"func_declarator")
#line 2345 "cplus.met"
                }
#line 2345 "cplus.met"
                _retValue =_ptTree0;
#line 2345 "cplus.met"
                goto func_declarator_ret;
#line 2345 "cplus.met"
            }
#line 2345 "cplus.met"
            break;
#line 2345 "cplus.met"
        default :
#line 2345 "cplus.met"
            MulFreeTree(1,valTree);
            CASE_EXIT(func_declarator_exit,"either * or & or ~ or IDENT or operator")
#line 2345 "cplus.met"
            break;
#line 2345 "cplus.met"
    }
#line 2345 "cplus.met"
#line 2345 "cplus.met"
#line 2346 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2346 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 2346 "cplus.met"
return((PPTREE) 0);
#line 2346 "cplus.met"

#line 2346 "cplus.met"
func_declarator_exit :
#line 2346 "cplus.met"

#line 2346 "cplus.met"
    _Debug = TRACE_RULE("func_declarator",TRACE_EXIT,(PPTREE)0);
#line 2346 "cplus.met"
    _funcLevel--;
#line 2346 "cplus.met"
    return((PPTREE) -1) ;
#line 2346 "cplus.met"

#line 2346 "cplus.met"
func_declarator_ret :
#line 2346 "cplus.met"
    
#line 2346 "cplus.met"
    _Debug = TRACE_RULE("func_declarator",TRACE_RETURN,_retValue);
#line 2346 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2346 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 2346 "cplus.met"
    return _retValue ;
#line 2346 "cplus.met"
}
#line 2346 "cplus.met"

#line 2346 "cplus.met"
