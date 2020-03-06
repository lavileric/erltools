/*************************************************************************/
/*                                                                       */
/*        Produced by MetaGen version 2.0  -    1989-2006                 */
/*       Syntaxic Analyzer Meta Generator developped by                  */
/*                  Eric Lavillonniere                                   */
/*                                                                       */
/*************************************************************************/

#include "token.h"
#include "cplus.h"


#line 2529 "cplus.met"
PPTREE cplus::expression ( int error_free)
#line 2529 "cplus.met"
{
#line 2529 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 2529 "cplus.met"
    int _value,_nbPre = 0 ;
#line 2529 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 2529 "cplus.met"
    int _Debug = TRACE_RULE("expression",TRACE_ENTER,(PPTREE)0);
#line 2529 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 2529 "cplus.met"
#line 2529 "cplus.met"
    PPTREE _addlist1 = (PPTREE) 0;
#line 2529 "cplus.met"
#line 2529 "cplus.met"
    PPTREE expTree = (PPTREE) 0,list = (PPTREE) 0;
#line 2529 "cplus.met"
#line 2531 "cplus.met"
    if ( (expTree=NQUICK_CALL(_Tak(assignment_expression)(error_free), 16, cplus))== (PPTREE) -1 ) {
#line 2531 "cplus.met"
        MulFreeTree(3,_addlist1,expTree,list);
        PROG_EXIT(expression_exit,"expression")
#line 2531 "cplus.met"
    }
#line 2531 "cplus.met"
#line 2532 "cplus.met"
    if ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN( VIRG,",")){
#line 2532 "cplus.met"
#line 2533 "cplus.met"
#line 2534 "cplus.met"
        list =AddList(list ,expTree );
#line 2534 "cplus.met"
#line 2534 "cplus.met"
        _addlist1 = list ;
#line 2534 "cplus.met"
#line 2535 "cplus.met"
        while ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN(VIRG,",") && (tokenAhead = 0,CommTerm(),1)) { 
#line 2535 "cplus.met"
#line 2536 "cplus.met"
#line 2536 "cplus.met"
            {
#line 2536 "cplus.met"
                PPTREE _ptTree0=0;
#line 2536 "cplus.met"
                if ( (_ptTree0=NQUICK_CALL(_Tak(assignment_expression)(error_free), 16, cplus))== (PPTREE) -1 ) {
#line 2536 "cplus.met"
                    MulFreeTree(4,_ptTree0,_addlist1,expTree,list);
                    PROG_EXIT(expression_exit,"expression")
#line 2536 "cplus.met"
                }
#line 2536 "cplus.met"
                _addlist1 =AddList(_addlist1 , _ptTree0);
#line 2536 "cplus.met"
            }
#line 2536 "cplus.met"
#line 2536 "cplus.met"
            if (list){
#line 2536 "cplus.met"
#line 2536 "cplus.met"
                _addlist1 = SonTree (_addlist1 ,2 );
#line 2536 "cplus.met"
            } else {
#line 2536 "cplus.met"
#line 2536 "cplus.met"
                list = _addlist1 ;
#line 2536 "cplus.met"
            }
#line 2536 "cplus.met"
        } 
#line 2536 "cplus.met"
#line 2537 "cplus.met"
        {
#line 2537 "cplus.met"
            PPTREE _ptTree0=0;
#line 2537 "cplus.met"
            {
#line 2537 "cplus.met"
                PPTREE _ptRes1=0;
#line 2537 "cplus.met"
                _ptRes1= MakeTree(EXP_SEQ, 1);
#line 2537 "cplus.met"
                ReplaceTree(_ptRes1, 1, list );
#line 2537 "cplus.met"
                _ptTree0=_ptRes1;
#line 2537 "cplus.met"
            }
#line 2537 "cplus.met"
            _retValue =_ptTree0;
#line 2537 "cplus.met"
            goto expression_ret;
#line 2537 "cplus.met"
        }
#line 2537 "cplus.met"
#line 2537 "cplus.met"
#line 2537 "cplus.met"
    } else {
#line 2537 "cplus.met"
#line 2540 "cplus.met"
        {
#line 2540 "cplus.met"
            _retValue = expTree ;
#line 2540 "cplus.met"
            goto expression_ret;
#line 2540 "cplus.met"
            
#line 2540 "cplus.met"
        }
#line 2540 "cplus.met"
    }
#line 2540 "cplus.met"
#line 2540 "cplus.met"
#line 2540 "cplus.met"

#line 2541 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2541 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 2541 "cplus.met"
return((PPTREE) 0);
#line 2541 "cplus.met"

#line 2541 "cplus.met"
expression_exit :
#line 2541 "cplus.met"

#line 2541 "cplus.met"
    _Debug = TRACE_RULE("expression",TRACE_EXIT,(PPTREE)0);
#line 2541 "cplus.met"
    _funcLevel--;
#line 2541 "cplus.met"
    return((PPTREE) -1) ;
#line 2541 "cplus.met"

#line 2541 "cplus.met"
expression_ret :
#line 2541 "cplus.met"
    
#line 2541 "cplus.met"
    _Debug = TRACE_RULE("expression",TRACE_RETURN,_retValue);
#line 2541 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2541 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 2541 "cplus.met"
    return _retValue ;
#line 2541 "cplus.met"
}
#line 2541 "cplus.met"

#line 2541 "cplus.met"
#line 3265 "cplus.met"
PPTREE cplus::expression_for ( int error_free)
#line 3265 "cplus.met"
{
#line 3265 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 3265 "cplus.met"
    int _value,_nbPre = 0 ;
#line 3265 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 3265 "cplus.met"
    int _Debug = TRACE_RULE("expression_for",TRACE_ENTER,(PPTREE)0);
#line 3265 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 3265 "cplus.met"
#line 3265 "cplus.met"
    PPTREE retTree = (PPTREE) 0;
#line 3265 "cplus.met"
#line 3267 "cplus.met"
    if ( (retTree=NQUICK_CALL(_Tak(expression)(error_free), 62, cplus))== (PPTREE) -1 ) {
#line 3267 "cplus.met"
        MulFreeTree(1,retTree);
        PROG_EXIT(expression_for_exit,"expression_for")
#line 3267 "cplus.met"
    }
#line 3267 "cplus.met"
#line 3268 "cplus.met"
    if (! ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN( PVIR,";"))){
#line 3268 "cplus.met"
#line 3269 "cplus.met"
        
#line 3269 "cplus.met"
        MulFreeTree(1,retTree);
        LEX_EXIT ("",0);
#line 3269 "cplus.met"
        goto expression_for_exit;
#line 3269 "cplus.met"
#line 3269 "cplus.met"
    }
#line 3269 "cplus.met"
#line 3270 "cplus.met"
    {
#line 3270 "cplus.met"
        _retValue = retTree ;
#line 3270 "cplus.met"
        goto expression_for_ret;
#line 3270 "cplus.met"
        
#line 3270 "cplus.met"
    }
#line 3270 "cplus.met"
#line 3270 "cplus.met"
#line 3270 "cplus.met"

#line 3271 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 3271 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 3271 "cplus.met"
return((PPTREE) 0);
#line 3271 "cplus.met"

#line 3271 "cplus.met"
expression_for_exit :
#line 3271 "cplus.met"

#line 3271 "cplus.met"
    _Debug = TRACE_RULE("expression_for",TRACE_EXIT,(PPTREE)0);
#line 3271 "cplus.met"
    _funcLevel--;
#line 3271 "cplus.met"
    return((PPTREE) -1) ;
#line 3271 "cplus.met"

#line 3271 "cplus.met"
expression_for_ret :
#line 3271 "cplus.met"
    
#line 3271 "cplus.met"
    _Debug = TRACE_RULE("expression_for",TRACE_RETURN,_retValue);
#line 3271 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 3271 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 3271 "cplus.met"
    return _retValue ;
#line 3271 "cplus.met"
}
#line 3271 "cplus.met"

#line 3271 "cplus.met"
#line 1020 "cplus.met"
PPTREE cplus::ext_all ( int error_free)
#line 1020 "cplus.met"
{
#line 1020 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 1020 "cplus.met"
    int _value,_nbPre = 0 ;
#line 1020 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 1020 "cplus.met"
    int _Debug = TRACE_RULE("ext_all",TRACE_ENTER,(PPTREE)0);
#line 1020 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 1020 "cplus.met"
#line 1020 "cplus.met"
    PPTREE retTree = (PPTREE) 0;
#line 1020 "cplus.met"
#line 1022 "cplus.met"
    if (NPUSH_CALL_AFF_VERIF(retTree = ,_Tak(ext_all_no_linkage), 66, cplus)){
#line 1022 "cplus.met"
#line 1023 "cplus.met"
        {
#line 1023 "cplus.met"
            _retValue = retTree ;
#line 1023 "cplus.met"
            goto ext_all_ret;
#line 1023 "cplus.met"
            
#line 1023 "cplus.met"
        }
#line 1023 "cplus.met"
    } else {
#line 1023 "cplus.met"
#line 1025 "cplus.met"
        {
#line 1025 "cplus.met"
            PPTREE _ptTree0=0;
#line 1025 "cplus.met"
            if ( (_ptTree0=NQUICK_CALL(_Tak(linkage_specification)(error_free), 88, cplus))== (PPTREE) -1 ) {
#line 1025 "cplus.met"
                MulFreeTree(2,_ptTree0,retTree);
                PROG_EXIT(ext_all_exit,"ext_all")
#line 1025 "cplus.met"
            }
#line 1025 "cplus.met"
            _retValue =_ptTree0;
#line 1025 "cplus.met"
            goto ext_all_ret;
#line 1025 "cplus.met"
        }
#line 1025 "cplus.met"
    }
#line 1025 "cplus.met"
#line 1025 "cplus.met"
#line 1025 "cplus.met"

#line 1026 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1026 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 1026 "cplus.met"
return((PPTREE) 0);
#line 1026 "cplus.met"

#line 1026 "cplus.met"
ext_all_exit :
#line 1026 "cplus.met"

#line 1026 "cplus.met"
    _Debug = TRACE_RULE("ext_all",TRACE_EXIT,(PPTREE)0);
#line 1026 "cplus.met"
    _funcLevel--;
#line 1026 "cplus.met"
    return((PPTREE) -1) ;
#line 1026 "cplus.met"

#line 1026 "cplus.met"
ext_all_ret :
#line 1026 "cplus.met"
    
#line 1026 "cplus.met"
    _Debug = TRACE_RULE("ext_all",TRACE_RETURN,_retValue);
#line 1026 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1026 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 1026 "cplus.met"
    return _retValue ;
#line 1026 "cplus.met"
}
#line 1026 "cplus.met"

#line 1026 "cplus.met"
#line 1028 "cplus.met"
PPTREE cplus::ext_all_ext ( int error_free)
#line 1028 "cplus.met"
{
#line 1028 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 1028 "cplus.met"
    int _value,_nbPre = 0 ;
#line 1028 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 1028 "cplus.met"
    int _Debug = TRACE_RULE("ext_all_ext",TRACE_ENTER,(PPTREE)0);
#line 1028 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 1028 "cplus.met"
#line 1028 "cplus.met"
    PPTREE retTree = (PPTREE) 0;
#line 1028 "cplus.met"
#line 1030 "cplus.met"
    if (! (NPUSH_CALL_AFF_VERIF(retTree = ,_Tak(protect_declare), 114, cplus))){
#line 1030 "cplus.met"
#line 1031 "cplus.met"
        if ( (retTree=NQUICK_CALL(_Tak(ext_all)(error_free), 64, cplus))== (PPTREE) -1 ) {
#line 1031 "cplus.met"
            MulFreeTree(1,retTree);
            PROG_EXIT(ext_all_ext_exit,"ext_all_ext")
#line 1031 "cplus.met"
        }
#line 1031 "cplus.met"
    }
#line 1031 "cplus.met"
#line 1032 "cplus.met"
    {
#line 1032 "cplus.met"
        _retValue = retTree ;
#line 1032 "cplus.met"
        goto ext_all_ext_ret;
#line 1032 "cplus.met"
        
#line 1032 "cplus.met"
    }
#line 1032 "cplus.met"
#line 1032 "cplus.met"
#line 1032 "cplus.met"

#line 1033 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1033 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 1033 "cplus.met"
return((PPTREE) 0);
#line 1033 "cplus.met"

#line 1033 "cplus.met"
ext_all_ext_exit :
#line 1033 "cplus.met"

#line 1033 "cplus.met"
    _Debug = TRACE_RULE("ext_all_ext",TRACE_EXIT,(PPTREE)0);
#line 1033 "cplus.met"
    _funcLevel--;
#line 1033 "cplus.met"
    return((PPTREE) -1) ;
#line 1033 "cplus.met"

#line 1033 "cplus.met"
ext_all_ext_ret :
#line 1033 "cplus.met"
    
#line 1033 "cplus.met"
    _Debug = TRACE_RULE("ext_all_ext",TRACE_RETURN,_retValue);
#line 1033 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1033 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 1033 "cplus.met"
    return _retValue ;
#line 1033 "cplus.met"
}
#line 1033 "cplus.met"

#line 1033 "cplus.met"
#line 1000 "cplus.met"
PPTREE cplus::ext_all_no_linkage ( int error_free)
#line 1000 "cplus.met"
{
#line 1000 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 1000 "cplus.met"
    int _value,_nbPre = 0 ;
#line 1000 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 1000 "cplus.met"
    int _Debug = TRACE_RULE("ext_all_no_linkage",TRACE_ENTER,(PPTREE)0);
#line 1000 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 1000 "cplus.met"
#line 1000 "cplus.met"
    PPTREE _addlist1 = (PPTREE) 0;
#line 1000 "cplus.met"
#line 1000 "cplus.met"
    PPTREE decl = (PPTREE) 0,listTemp = (PPTREE) 0;
#line 1000 "cplus.met"
#line 1002 "cplus.met"
    if ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN(TEMPLATE,"template") && (tokenAhead = 0,CommTerm(),1)){
#line 1002 "cplus.met"
#line 1003 "cplus.met"
#line 1004 "cplus.met"
        (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 1004 "cplus.met"
        if (  !SEE_TOKEN( INFE,"<") || !(CommTerm(),1)) {
#line 1004 "cplus.met"
            MulFreeTree(3,_addlist1,decl,listTemp);
            TOKEN_EXIT(ext_all_no_linkage_exit,"<")
#line 1004 "cplus.met"
        } else {
#line 1004 "cplus.met"
            tokenAhead = 0 ;
#line 1004 "cplus.met"
        }
#line 1004 "cplus.met"
#line 1004 "cplus.met"
        _addlist1 = listTemp ;
#line 1004 "cplus.met"
#line 1005 "cplus.met"
        do {
#line 1005 "cplus.met"
#line 1006 "cplus.met"
            (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 1006 "cplus.met"
            switch( lexEl.Value) {
#line 1006 "cplus.met"
#line 1007 "cplus.met"
                case CLASS : 
#line 1007 "cplus.met"
                    tokenAhead = 0 ;
#line 1007 "cplus.met"
                    CommTerm();
#line 1007 "cplus.met"
#line 1007 "cplus.met"
#line 1007 "cplus.met"
                    {
#line 1007 "cplus.met"
                        PPTREE _ptTree0=0;
#line 1007 "cplus.met"
                        {
#line 1007 "cplus.met"
                            PPTREE _ptTree1=0,_ptRes1=0;
#line 1007 "cplus.met"
                            _ptRes1= MakeTree(CLASS_PARAM, 1);
#line 1007 "cplus.met"
                            if ( (_ptTree1=NQUICK_CALL(_Tak(arg_declarator_type)(error_free), 10, cplus))== (PPTREE) -1 ) {
#line 1007 "cplus.met"
                                MulFreeTree(6,_ptRes1,_ptTree1,_ptTree0,_addlist1,decl,listTemp);
                                PROG_EXIT(ext_all_no_linkage_exit,"ext_all_no_linkage")
#line 1007 "cplus.met"
                            }
#line 1007 "cplus.met"
                            ReplaceTree(_ptRes1, 1, _ptTree1);
#line 1007 "cplus.met"
                            _ptTree0=_ptRes1;
#line 1007 "cplus.met"
                        }
#line 1007 "cplus.met"
                        _addlist1 =AddList(_addlist1 , _ptTree0);
#line 1007 "cplus.met"
                    }
#line 1007 "cplus.met"
#line 1007 "cplus.met"
                    if (listTemp){
#line 1007 "cplus.met"
#line 1007 "cplus.met"
                        _addlist1 = SonTree (_addlist1 ,2 );
#line 1007 "cplus.met"
                    } else {
#line 1007 "cplus.met"
#line 1007 "cplus.met"
                        listTemp = _addlist1 ;
#line 1007 "cplus.met"
                    }
#line 1007 "cplus.met"
                    break;
#line 1007 "cplus.met"
#line 1008 "cplus.met"
                default : 
#line 1008 "cplus.met"
#line 1008 "cplus.met"
#line 1008 "cplus.met"
                    {
#line 1008 "cplus.met"
                        PPTREE _ptTree0=0;
#line 1008 "cplus.met"
                        if ( (_ptTree0=NQUICK_CALL(_Tak(arg_declarator_type)(error_free), 10, cplus))== (PPTREE) -1 ) {
#line 1008 "cplus.met"
                            MulFreeTree(4,_ptTree0,_addlist1,decl,listTemp);
                            PROG_EXIT(ext_all_no_linkage_exit,"ext_all_no_linkage")
#line 1008 "cplus.met"
                        }
#line 1008 "cplus.met"
                        _addlist1 =AddList(_addlist1 , _ptTree0);
#line 1008 "cplus.met"
                    }
#line 1008 "cplus.met"
#line 1008 "cplus.met"
                    if (listTemp){
#line 1008 "cplus.met"
#line 1008 "cplus.met"
                        _addlist1 = SonTree (_addlist1 ,2 );
#line 1008 "cplus.met"
                    } else {
#line 1008 "cplus.met"
#line 1008 "cplus.met"
                        listTemp = _addlist1 ;
#line 1008 "cplus.met"
                    }
#line 1008 "cplus.met"
                    break;
#line 1008 "cplus.met"
            }
#line 1008 "cplus.met"
#line 1008 "cplus.met"
#line 1010 "cplus.met"
        } while ( !(! ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN(VIRG,",") && (tokenAhead = 0,CommTerm(),1)))) ;
#line 1010 "cplus.met"
#line 1011 "cplus.met"
        (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 1011 "cplus.met"
        if (  !SEE_TOKEN( SUPE,">") || !(CommTerm(),1)) {
#line 1011 "cplus.met"
            MulFreeTree(3,_addlist1,decl,listTemp);
            TOKEN_EXIT(ext_all_no_linkage_exit,">")
#line 1011 "cplus.met"
        } else {
#line 1011 "cplus.met"
            tokenAhead = 0 ;
#line 1011 "cplus.met"
        }
#line 1011 "cplus.met"
#line 1012 "cplus.met"
        {
#line 1012 "cplus.met"
            PPTREE _ptTree0=0;
#line 1012 "cplus.met"
            {
#line 1012 "cplus.met"
                PPTREE _ptTree1=0,_ptRes1=0;
#line 1012 "cplus.met"
                _ptRes1= MakeTree(TEMPLATE_DECL, 2);
#line 1012 "cplus.met"
                ReplaceTree(_ptRes1, 1, listTemp );
#line 1012 "cplus.met"
                if ( (_ptTree1=NQUICK_CALL(_Tak(ext_all_no_linkage)(error_free), 66, cplus))== (PPTREE) -1 ) {
#line 1012 "cplus.met"
                    MulFreeTree(6,_ptRes1,_ptTree1,_ptTree0,_addlist1,decl,listTemp);
                    PROG_EXIT(ext_all_no_linkage_exit,"ext_all_no_linkage")
#line 1012 "cplus.met"
                }
#line 1012 "cplus.met"
                ReplaceTree(_ptRes1, 2, _ptTree1);
#line 1012 "cplus.met"
                _ptTree0=_ptRes1;
#line 1012 "cplus.met"
            }
#line 1012 "cplus.met"
            _retValue =_ptTree0;
#line 1012 "cplus.met"
            goto ext_all_no_linkage_ret;
#line 1012 "cplus.met"
        }
#line 1012 "cplus.met"
#line 1012 "cplus.met"
#line 1012 "cplus.met"
    }
#line 1012 "cplus.met"
#line 1014 "cplus.met"
    if ((((NPUSH_CALL_AFF_VERIF(decl = ,_Tak(ext_data_declaration), 71, cplus)) || 
#line 1014 "cplus.met"
         (NPUSH_CALL_AFF_VERIF(decl = ,_Tak(func_declaration), 76, cplus))) || 
#line 1014 "cplus.met"
        (NPUSH_CALL_AFF_VERIF(decl = ,_Tak(ext_decl_dir), 72, cplus))) || 
#line 1014 "cplus.met"
       (NPUSH_CALL_AFF_VERIF(decl = ,_Tak(asm_declaration), 14, cplus))){
#line 1014 "cplus.met"
#line 1015 "cplus.met"
        {
#line 1015 "cplus.met"
            _retValue = decl ;
#line 1015 "cplus.met"
            goto ext_all_no_linkage_ret;
#line 1015 "cplus.met"
            
#line 1015 "cplus.met"
        }
#line 1015 "cplus.met"
    } else {
#line 1015 "cplus.met"
#line 1017 "cplus.met"
        {
#line 1017 "cplus.met"
            PPTREE _ptTree0=0;
#line 1017 "cplus.met"
            if ( (_ptTree0=NQUICK_CALL(_Tak(func_declaration)(error_free), 76, cplus))== (PPTREE) -1 ) {
#line 1017 "cplus.met"
                MulFreeTree(4,_ptTree0,_addlist1,decl,listTemp);
                PROG_EXIT(ext_all_no_linkage_exit,"ext_all_no_linkage")
#line 1017 "cplus.met"
            }
#line 1017 "cplus.met"
            _retValue =_ptTree0;
#line 1017 "cplus.met"
            goto ext_all_no_linkage_ret;
#line 1017 "cplus.met"
        }
#line 1017 "cplus.met"
    }
#line 1017 "cplus.met"
#line 1017 "cplus.met"
#line 1017 "cplus.met"

#line 1018 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1018 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 1018 "cplus.met"
return((PPTREE) 0);
#line 1018 "cplus.met"

#line 1018 "cplus.met"
ext_all_no_linkage_exit :
#line 1018 "cplus.met"

#line 1018 "cplus.met"
    _Debug = TRACE_RULE("ext_all_no_linkage",TRACE_EXIT,(PPTREE)0);
#line 1018 "cplus.met"
    _funcLevel--;
#line 1018 "cplus.met"
    return((PPTREE) -1) ;
#line 1018 "cplus.met"

#line 1018 "cplus.met"
ext_all_no_linkage_ret :
#line 1018 "cplus.met"
    
#line 1018 "cplus.met"
    _Debug = TRACE_RULE("ext_all_no_linkage",TRACE_RETURN,_retValue);
#line 1018 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1018 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 1018 "cplus.met"
    return _retValue ;
#line 1018 "cplus.met"
}
#line 1018 "cplus.met"

#line 1018 "cplus.met"
#line 1504 "cplus.met"
PPTREE cplus::ext_data_decl_sc_ty ( int error_free)
#line 1504 "cplus.met"
{
#line 1504 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 1504 "cplus.met"
    int _value,_nbPre = 0 ;
#line 1504 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 1504 "cplus.met"
    int _Debug = TRACE_RULE("ext_data_decl_sc_ty",TRACE_ENTER,(PPTREE)0);
#line 1504 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 1504 "cplus.met"
#line 1504 "cplus.met"
    PPTREE retTree = (PPTREE) 0;
#line 1504 "cplus.met"
#line 1506 "cplus.met"
    if (! (NPUSH_CALL_AFF_VERIF(retTree = ,_Tak(ext_data_decl_sc_ty_full), 68, cplus))){
#line 1506 "cplus.met"
#line 1507 "cplus.met"
        if ( (retTree=NQUICK_CALL(_Tak(ext_data_decl_sc_ty_short)(error_free), 69, cplus))== (PPTREE) -1 ) {
#line 1507 "cplus.met"
            MulFreeTree(1,retTree);
            PROG_EXIT(ext_data_decl_sc_ty_exit,"ext_data_decl_sc_ty")
#line 1507 "cplus.met"
        }
#line 1507 "cplus.met"
    }
#line 1507 "cplus.met"
#line 1508 "cplus.met"
    {
#line 1508 "cplus.met"
        _retValue = retTree ;
#line 1508 "cplus.met"
        goto ext_data_decl_sc_ty_ret;
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
ext_data_decl_sc_ty_exit :
#line 1509 "cplus.met"

#line 1509 "cplus.met"
    _Debug = TRACE_RULE("ext_data_decl_sc_ty",TRACE_EXIT,(PPTREE)0);
#line 1509 "cplus.met"
    _funcLevel--;
#line 1509 "cplus.met"
    return((PPTREE) -1) ;
#line 1509 "cplus.met"

#line 1509 "cplus.met"
ext_data_decl_sc_ty_ret :
#line 1509 "cplus.met"
    
#line 1509 "cplus.met"
    _Debug = TRACE_RULE("ext_data_decl_sc_ty",TRACE_RETURN,_retValue);
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
#line 1485 "cplus.met"
PPTREE cplus::ext_data_decl_sc_ty_full ( int error_free)
#line 1485 "cplus.met"
{
#line 1485 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 1485 "cplus.met"
    int _value,_nbPre = 0 ;
#line 1485 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 1485 "cplus.met"
    int _Debug = TRACE_RULE("ext_data_decl_sc_ty_full",TRACE_ENTER,(PPTREE)0);
#line 1485 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 1485 "cplus.met"
#line 1485 "cplus.met"
    PPTREE retTree = (PPTREE) 0;
#line 1485 "cplus.met"
#line 1487 "cplus.met"
    {
#line 1487 "cplus.met"
        PPTREE _ptRes0=0;
#line 1487 "cplus.met"
        _ptRes0= MakeTree(DECLARATION, 3);
#line 1487 "cplus.met"
        retTree=_ptRes0;
#line 1487 "cplus.met"
    }
#line 1487 "cplus.met"
#line 1488 "cplus.met"
    {
#line 1488 "cplus.met"
        PPTREE _ptTree0=0;
#line 1488 "cplus.met"
        if ( (_ptTree0=NQUICK_CALL(_Tak(sc_specifier)(error_free), 126, cplus))== (PPTREE) -1 ) {
#line 1488 "cplus.met"
            MulFreeTree(2,_ptTree0,retTree);
            PROG_EXIT(ext_data_decl_sc_ty_full_exit,"ext_data_decl_sc_ty_full")
#line 1488 "cplus.met"
        }
#line 1488 "cplus.met"
        ReplaceTree(retTree , 1 , _ptTree0);
#line 1488 "cplus.met"
    }
#line 1488 "cplus.met"
#line 1489 "cplus.met"
    {
#line 1489 "cplus.met"
        PPTREE _ptTree0=0;
#line 1489 "cplus.met"
        if ( (_ptTree0=NQUICK_CALL(_Tak(type_specifier)(error_free), 145, cplus))== (PPTREE) -1 ) {
#line 1489 "cplus.met"
            MulFreeTree(2,_ptTree0,retTree);
            PROG_EXIT(ext_data_decl_sc_ty_full_exit,"ext_data_decl_sc_ty_full")
#line 1489 "cplus.met"
        }
#line 1489 "cplus.met"
        ReplaceTree(retTree , 2 , _ptTree0);
#line 1489 "cplus.met"
    }
#line 1489 "cplus.met"
#line 1490 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 1490 "cplus.met"
    if (  !SEE_TOKEN( PVIR,";") || !(CommTerm(),1)) {
#line 1490 "cplus.met"
        MulFreeTree(1,retTree);
        TOKEN_EXIT(ext_data_decl_sc_ty_full_exit,";")
#line 1490 "cplus.met"
    } else {
#line 1490 "cplus.met"
        tokenAhead = 0 ;
#line 1490 "cplus.met"
    }
#line 1490 "cplus.met"
#line 1491 "cplus.met"
    {
#line 1491 "cplus.met"
        _retValue = retTree ;
#line 1491 "cplus.met"
        goto ext_data_decl_sc_ty_full_ret;
#line 1491 "cplus.met"
        
#line 1491 "cplus.met"
    }
#line 1491 "cplus.met"
#line 1491 "cplus.met"
#line 1491 "cplus.met"

#line 1492 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1492 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 1492 "cplus.met"
return((PPTREE) 0);
#line 1492 "cplus.met"

#line 1492 "cplus.met"
ext_data_decl_sc_ty_full_exit :
#line 1492 "cplus.met"

#line 1492 "cplus.met"
    _Debug = TRACE_RULE("ext_data_decl_sc_ty_full",TRACE_EXIT,(PPTREE)0);
#line 1492 "cplus.met"
    _funcLevel--;
#line 1492 "cplus.met"
    return((PPTREE) -1) ;
#line 1492 "cplus.met"

#line 1492 "cplus.met"
ext_data_decl_sc_ty_full_ret :
#line 1492 "cplus.met"
    
#line 1492 "cplus.met"
    _Debug = TRACE_RULE("ext_data_decl_sc_ty_full",TRACE_RETURN,_retValue);
#line 1492 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1492 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 1492 "cplus.met"
    return _retValue ;
#line 1492 "cplus.met"
}
#line 1492 "cplus.met"

#line 1492 "cplus.met"
#line 1495 "cplus.met"
PPTREE cplus::ext_data_decl_sc_ty_short ( int error_free)
#line 1495 "cplus.met"
{
#line 1495 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 1495 "cplus.met"
    int _value,_nbPre = 0 ;
#line 1495 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 1495 "cplus.met"
    int _Debug = TRACE_RULE("ext_data_decl_sc_ty_short",TRACE_ENTER,(PPTREE)0);
#line 1495 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 1495 "cplus.met"
#line 1495 "cplus.met"
    PPTREE retTree = (PPTREE) 0;
#line 1495 "cplus.met"
#line 1497 "cplus.met"
    {
#line 1497 "cplus.met"
        PPTREE _ptRes0=0;
#line 1497 "cplus.met"
        _ptRes0= MakeTree(DECLARATION, 3);
#line 1497 "cplus.met"
        retTree=_ptRes0;
#line 1497 "cplus.met"
    }
#line 1497 "cplus.met"
#line 1498 "cplus.met"
    {
#line 1498 "cplus.met"
        PPTREE _ptTree0=0;
#line 1498 "cplus.met"
        if ( (_ptTree0=NQUICK_CALL(_Tak(type_specifier)(error_free), 145, cplus))== (PPTREE) -1 ) {
#line 1498 "cplus.met"
            MulFreeTree(2,_ptTree0,retTree);
            PROG_EXIT(ext_data_decl_sc_ty_short_exit,"ext_data_decl_sc_ty_short")
#line 1498 "cplus.met"
        }
#line 1498 "cplus.met"
        ReplaceTree(retTree , 2 , _ptTree0);
#line 1498 "cplus.met"
    }
#line 1498 "cplus.met"
#line 1499 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 1499 "cplus.met"
    if (  !SEE_TOKEN( PVIR,";") || !(CommTerm(),1)) {
#line 1499 "cplus.met"
        MulFreeTree(1,retTree);
        TOKEN_EXIT(ext_data_decl_sc_ty_short_exit,";")
#line 1499 "cplus.met"
    } else {
#line 1499 "cplus.met"
        tokenAhead = 0 ;
#line 1499 "cplus.met"
    }
#line 1499 "cplus.met"
#line 1500 "cplus.met"
    {
#line 1500 "cplus.met"
        _retValue = retTree ;
#line 1500 "cplus.met"
        goto ext_data_decl_sc_ty_short_ret;
#line 1500 "cplus.met"
        
#line 1500 "cplus.met"
    }
#line 1500 "cplus.met"
#line 1500 "cplus.met"
#line 1500 "cplus.met"

#line 1501 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1501 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 1501 "cplus.met"
return((PPTREE) 0);
#line 1501 "cplus.met"

#line 1501 "cplus.met"
ext_data_decl_sc_ty_short_exit :
#line 1501 "cplus.met"

#line 1501 "cplus.met"
    _Debug = TRACE_RULE("ext_data_decl_sc_ty_short",TRACE_EXIT,(PPTREE)0);
#line 1501 "cplus.met"
    _funcLevel--;
#line 1501 "cplus.met"
    return((PPTREE) -1) ;
#line 1501 "cplus.met"

#line 1501 "cplus.met"
ext_data_decl_sc_ty_short_ret :
#line 1501 "cplus.met"
    
#line 1501 "cplus.met"
    _Debug = TRACE_RULE("ext_data_decl_sc_ty_short",TRACE_RETURN,_retValue);
#line 1501 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1501 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 1501 "cplus.met"
    return _retValue ;
#line 1501 "cplus.met"
}
#line 1501 "cplus.met"

#line 1501 "cplus.met"
#line 1511 "cplus.met"
PPTREE cplus::ext_data_decl_simp ( int error_free)
#line 1511 "cplus.met"
{
#line 1511 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 1511 "cplus.met"
    int _value,_nbPre = 0 ;
#line 1511 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 1511 "cplus.met"
    int _Debug = TRACE_RULE("ext_data_decl_simp",TRACE_ENTER,(PPTREE)0);
#line 1511 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 1511 "cplus.met"
#line 1511 "cplus.met"
    PPTREE retTree = (PPTREE) 0;
#line 1511 "cplus.met"
#line 1513 "cplus.met"
    if ((! (NPUSH_CALL_AFF_VERIF(retTree = ,_Tak(data_declaration), 40, cplus))) && 
#line 1513 "cplus.met"
       (! (NPUSH_CALL_AFF_VERIF(retTree = ,_Tak(inline_namespace), 82, cplus)))){
#line 1513 "cplus.met"
#line 1514 "cplus.met"
        if ( (retTree=NQUICK_CALL(_Tak(ext_data_decl_sc_ty)(error_free), 67, cplus))== (PPTREE) -1 ) {
#line 1514 "cplus.met"
            MulFreeTree(1,retTree);
            PROG_EXIT(ext_data_decl_simp_exit,"ext_data_decl_simp")
#line 1514 "cplus.met"
        }
#line 1514 "cplus.met"
    }
#line 1514 "cplus.met"
#line 1515 "cplus.met"
    {
#line 1515 "cplus.met"
        _retValue = retTree ;
#line 1515 "cplus.met"
        goto ext_data_decl_simp_ret;
#line 1515 "cplus.met"
        
#line 1515 "cplus.met"
    }
#line 1515 "cplus.met"
#line 1515 "cplus.met"
#line 1515 "cplus.met"

#line 1516 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1516 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 1516 "cplus.met"
return((PPTREE) 0);
#line 1516 "cplus.met"

#line 1516 "cplus.met"
ext_data_decl_simp_exit :
#line 1516 "cplus.met"

#line 1516 "cplus.met"
    _Debug = TRACE_RULE("ext_data_decl_simp",TRACE_EXIT,(PPTREE)0);
#line 1516 "cplus.met"
    _funcLevel--;
#line 1516 "cplus.met"
    return((PPTREE) -1) ;
#line 1516 "cplus.met"

#line 1516 "cplus.met"
ext_data_decl_simp_ret :
#line 1516 "cplus.met"
    
#line 1516 "cplus.met"
    _Debug = TRACE_RULE("ext_data_decl_simp",TRACE_RETURN,_retValue);
#line 1516 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1516 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 1516 "cplus.met"
    return _retValue ;
#line 1516 "cplus.met"
}
#line 1516 "cplus.met"

#line 1516 "cplus.met"
#line 1531 "cplus.met"
PPTREE cplus::ext_data_declaration ( int error_free)
#line 1531 "cplus.met"
{
#line 1531 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 1531 "cplus.met"
    int _value,_nbPre = 0 ;
#line 1531 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 1531 "cplus.met"
    int _Debug = TRACE_RULE("ext_data_declaration",TRACE_ENTER,(PPTREE)0);
#line 1531 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 1531 "cplus.met"
#line 1531 "cplus.met"
    PPTREE retTree = (PPTREE) 0;
#line 1531 "cplus.met"
#line 1533 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 1533 "cplus.met"
    switch( lexEl.Value) {
#line 1533 "cplus.met"
#line 1534 "cplus.met"
        case TYPEDEF : 
#line 1534 "cplus.met"
            tokenAhead = 0 ;
#line 1534 "cplus.met"
            CommTerm();
#line 1534 "cplus.met"
#line 1535 "cplus.met"
#line 1536 "cplus.met"
            if (! (NPUSH_CALL_AFF_VERIF(retTree = ,_Tak(typedef_and_declarator), 147, cplus))){
#line 1536 "cplus.met"
#line 1537 "cplus.met"
                {
#line 1537 "cplus.met"
                    PPTREE _ptTree0=0,_ptRes0=0;
#line 1537 "cplus.met"
                    _ptRes0= MakeTree(TYPEDEF, 2);
#line 1537 "cplus.met"
                    if ( (_ptTree0=NQUICK_CALL(_Tak(declarator_list)(error_free), 48, cplus))== (PPTREE) -1 ) {
#line 1537 "cplus.met"
                        MulFreeTree(3,_ptRes0,_ptTree0,retTree);
                        PROG_EXIT(ext_data_declaration_exit,"ext_data_declaration")
#line 1537 "cplus.met"
                    }
#line 1537 "cplus.met"
                    ReplaceTree(_ptRes0, 2, _ptTree0);
#line 1537 "cplus.met"
                    retTree=_ptRes0;
#line 1537 "cplus.met"
                }
#line 1537 "cplus.met"
            }
#line 1537 "cplus.met"
#line 1538 "cplus.met"
            (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 1538 "cplus.met"
            if (  !SEE_TOKEN( PVIR,";") || !(CommTerm(),1)) {
#line 1538 "cplus.met"
                MulFreeTree(1,retTree);
                TOKEN_EXIT(ext_data_declaration_exit,";")
#line 1538 "cplus.met"
            } else {
#line 1538 "cplus.met"
                tokenAhead = 0 ;
#line 1538 "cplus.met"
            }
#line 1538 "cplus.met"
#line 1539 "cplus.met"
            {
#line 1539 "cplus.met"
                _retValue = retTree ;
#line 1539 "cplus.met"
                goto ext_data_declaration_ret;
#line 1539 "cplus.met"
                
#line 1539 "cplus.met"
            }
#line 1539 "cplus.met"
#line 1539 "cplus.met"
            break;
#line 1539 "cplus.met"
#line 1541 "cplus.met"
        case NAMESPACE : 
#line 1541 "cplus.met"
#line 1541 "cplus.met"
            {
#line 1541 "cplus.met"
                PPTREE _ptTree0=0;
#line 1541 "cplus.met"
                if ( (_ptTree0=NQUICK_CALL(_Tak(name_space)(error_free), 98, cplus))== (PPTREE) -1 ) {
#line 1541 "cplus.met"
                    MulFreeTree(2,_ptTree0,retTree);
                    PROG_EXIT(ext_data_declaration_exit,"ext_data_declaration")
#line 1541 "cplus.met"
                }
#line 1541 "cplus.met"
                _retValue =_ptTree0;
#line 1541 "cplus.met"
                goto ext_data_declaration_ret;
#line 1541 "cplus.met"
            }
#line 1541 "cplus.met"
            break;
#line 1541 "cplus.met"
#line 1542 "cplus.met"
        case USING : 
#line 1542 "cplus.met"
#line 1542 "cplus.met"
            {
#line 1542 "cplus.met"
                PPTREE _ptTree0=0;
#line 1542 "cplus.met"
                if ( (_ptTree0=NQUICK_CALL(_Tak(name_space)(error_free), 98, cplus))== (PPTREE) -1 ) {
#line 1542 "cplus.met"
                    MulFreeTree(2,_ptTree0,retTree);
                    PROG_EXIT(ext_data_declaration_exit,"ext_data_declaration")
#line 1542 "cplus.met"
                }
#line 1542 "cplus.met"
                _retValue =_ptTree0;
#line 1542 "cplus.met"
                goto ext_data_declaration_ret;
#line 1542 "cplus.met"
            }
#line 1542 "cplus.met"
            break;
#line 1542 "cplus.met"
#line 1543 "cplus.met"
        case PVIR : 
#line 1543 "cplus.met"
            tokenAhead = 0 ;
#line 1543 "cplus.met"
            CommTerm();
#line 1543 "cplus.met"
#line 1543 "cplus.met"
            {
#line 1543 "cplus.met"
                PPTREE _ptTree0=0;
#line 1543 "cplus.met"
                {
#line 1543 "cplus.met"
                    PPTREE _ptRes1=0;
#line 1543 "cplus.met"
                    _ptRes1= MakeTree(STAT_VOID, 0);
#line 1543 "cplus.met"
                    _ptTree0=_ptRes1;
#line 1543 "cplus.met"
                }
#line 1543 "cplus.met"
                _retValue =_ptTree0;
#line 1543 "cplus.met"
                goto ext_data_declaration_ret;
#line 1543 "cplus.met"
            }
#line 1543 "cplus.met"
            break;
#line 1543 "cplus.met"
#line 1544 "cplus.met"
        case __EXTENSION__ : 
#line 1544 "cplus.met"
            tokenAhead = 0 ;
#line 1544 "cplus.met"
            CommTerm();
#line 1544 "cplus.met"
#line 1544 "cplus.met"
            {
#line 1544 "cplus.met"
                PPTREE _ptTree0=0;
#line 1544 "cplus.met"
                {
#line 1544 "cplus.met"
                    PPTREE _ptTree1=0,_ptRes1=0;
#line 1544 "cplus.met"
                    _ptRes1= MakeTree(EXTENSION, 1);
#line 1544 "cplus.met"
                    if ( (_ptTree1=NQUICK_CALL(_Tak(ext_data_decl_simp)(error_free), 70, cplus))== (PPTREE) -1 ) {
#line 1544 "cplus.met"
                        MulFreeTree(4,_ptRes1,_ptTree1,_ptTree0,retTree);
                        PROG_EXIT(ext_data_declaration_exit,"ext_data_declaration")
#line 1544 "cplus.met"
                    }
#line 1544 "cplus.met"
                    ReplaceTree(_ptRes1, 1, _ptTree1);
#line 1544 "cplus.met"
                    _ptTree0=_ptRes1;
#line 1544 "cplus.met"
                }
#line 1544 "cplus.met"
                _retValue =_ptTree0;
#line 1544 "cplus.met"
                goto ext_data_declaration_ret;
#line 1544 "cplus.met"
            }
#line 1544 "cplus.met"
            break;
#line 1544 "cplus.met"
#line 1545 "cplus.met"
        default : 
#line 1545 "cplus.met"
#line 1545 "cplus.met"
            {
#line 1545 "cplus.met"
                PPTREE _ptTree0=0;
#line 1545 "cplus.met"
                if ( (_ptTree0=NQUICK_CALL(_Tak(ext_data_decl_simp)(error_free), 70, cplus))== (PPTREE) -1 ) {
#line 1545 "cplus.met"
                    MulFreeTree(2,_ptTree0,retTree);
                    PROG_EXIT(ext_data_declaration_exit,"ext_data_declaration")
#line 1545 "cplus.met"
                }
#line 1545 "cplus.met"
                _retValue =_ptTree0;
#line 1545 "cplus.met"
                goto ext_data_declaration_ret;
#line 1545 "cplus.met"
            }
#line 1545 "cplus.met"
            break;
#line 1545 "cplus.met"
    }
#line 1545 "cplus.met"
#line 1545 "cplus.met"
#line 1546 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1546 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 1546 "cplus.met"
return((PPTREE) 0);
#line 1546 "cplus.met"

#line 1546 "cplus.met"
ext_data_declaration_exit :
#line 1546 "cplus.met"

#line 1546 "cplus.met"
    _Debug = TRACE_RULE("ext_data_declaration",TRACE_EXIT,(PPTREE)0);
#line 1546 "cplus.met"
    _funcLevel--;
#line 1546 "cplus.met"
    return((PPTREE) -1) ;
#line 1546 "cplus.met"

#line 1546 "cplus.met"
ext_data_declaration_ret :
#line 1546 "cplus.met"
    
#line 1546 "cplus.met"
    _Debug = TRACE_RULE("ext_data_declaration",TRACE_RETURN,_retValue);
#line 1546 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1546 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 1546 "cplus.met"
    return _retValue ;
#line 1546 "cplus.met"
}
#line 1546 "cplus.met"

#line 1546 "cplus.met"
#line 1213 "cplus.met"
PPTREE cplus::ext_decl_dir ( int error_free)
#line 1213 "cplus.met"
{
#line 1213 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 1213 "cplus.met"
    int _value,_nbPre = 0 ;
#line 1213 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 1213 "cplus.met"
    int _Debug = TRACE_RULE("ext_decl_dir",TRACE_ENTER,(PPTREE)0);
#line 1213 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 1213 "cplus.met"
#line 1213 "cplus.met"
    PPTREE retTree = (PPTREE) 0;
#line 1213 "cplus.met"
#line 1215 "cplus.met"
    if (NPUSH_CALL_AFF_VERIF(retTree = ,_Tak(directive), 52, cplus)){
#line 1215 "cplus.met"
#line 1216 "cplus.met"
        {
#line 1216 "cplus.met"
            _retValue = retTree ;
#line 1216 "cplus.met"
            goto ext_decl_dir_ret;
#line 1216 "cplus.met"
            
#line 1216 "cplus.met"
        }
#line 1216 "cplus.met"
    }
#line 1216 "cplus.met"
#line 1217 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 1217 "cplus.met"
    switch( lexEl.Value) {
#line 1217 "cplus.met"
#line 1218 "cplus.met"
        case META : 
#line 1218 "cplus.met"
        case IF_DIR : 
#line 1218 "cplus.met"
            tokenAhead = 0 ;
#line 1218 "cplus.met"
            CommTerm();
#line 1218 "cplus.met"
#line 1218 "cplus.met"
            {
#line 1218 "cplus.met"
                PPTREE _ptTree0=0;
#line 1218 "cplus.met"
                if ( (_ptTree0=NQUICK_CALL(_Tak(ext_decl_if_dir)(error_free), 73, cplus))== (PPTREE) -1 ) {
#line 1218 "cplus.met"
                    MulFreeTree(2,_ptTree0,retTree);
                    PROG_EXIT(ext_decl_dir_exit,"ext_decl_dir")
#line 1218 "cplus.met"
                }
#line 1218 "cplus.met"
                _retValue =_ptTree0;
#line 1218 "cplus.met"
                goto ext_decl_dir_ret;
#line 1218 "cplus.met"
            }
#line 1218 "cplus.met"
            break;
#line 1218 "cplus.met"
#line 1219 "cplus.met"
        case IFDEF_DIR : 
#line 1219 "cplus.met"
#line 1219 "cplus.met"
            {
#line 1219 "cplus.met"
                PPTREE _ptTree0=0;
#line 1219 "cplus.met"
                if ( (_ptTree0=NQUICK_CALL(_Tak(ext_decl_ifdef_dir)(error_free), 74, cplus))== (PPTREE) -1 ) {
#line 1219 "cplus.met"
                    MulFreeTree(2,_ptTree0,retTree);
                    PROG_EXIT(ext_decl_dir_exit,"ext_decl_dir")
#line 1219 "cplus.met"
                }
#line 1219 "cplus.met"
                _retValue =_ptTree0;
#line 1219 "cplus.met"
                goto ext_decl_dir_ret;
#line 1219 "cplus.met"
            }
#line 1219 "cplus.met"
            break;
#line 1219 "cplus.met"
#line 1220 "cplus.met"
        case IFNDEF_DIR : 
#line 1220 "cplus.met"
#line 1220 "cplus.met"
            {
#line 1220 "cplus.met"
                PPTREE _ptTree0=0;
#line 1220 "cplus.met"
                if ( (_ptTree0=NQUICK_CALL(_Tak(ext_decl_ifdef_dir)(error_free), 74, cplus))== (PPTREE) -1 ) {
#line 1220 "cplus.met"
                    MulFreeTree(2,_ptTree0,retTree);
                    PROG_EXIT(ext_decl_dir_exit,"ext_decl_dir")
#line 1220 "cplus.met"
                }
#line 1220 "cplus.met"
                _retValue =_ptTree0;
#line 1220 "cplus.met"
                goto ext_decl_dir_ret;
#line 1220 "cplus.met"
            }
#line 1220 "cplus.met"
            break;
#line 1220 "cplus.met"
        default :
#line 1220 "cplus.met"
            MulFreeTree(1,retTree);
            CASE_EXIT(ext_decl_dir_exit,"either IF_DIR or IFDEF_DIR or IFNDEF_DIR")
#line 1220 "cplus.met"
            break;
#line 1220 "cplus.met"
    }
#line 1220 "cplus.met"
#line 1220 "cplus.met"
#line 1221 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1221 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 1221 "cplus.met"
return((PPTREE) 0);
#line 1221 "cplus.met"

#line 1221 "cplus.met"
ext_decl_dir_exit :
#line 1221 "cplus.met"

#line 1221 "cplus.met"
    _Debug = TRACE_RULE("ext_decl_dir",TRACE_EXIT,(PPTREE)0);
#line 1221 "cplus.met"
    _funcLevel--;
#line 1221 "cplus.met"
    return((PPTREE) -1) ;
#line 1221 "cplus.met"

#line 1221 "cplus.met"
ext_decl_dir_ret :
#line 1221 "cplus.met"
    
#line 1221 "cplus.met"
    _Debug = TRACE_RULE("ext_decl_dir",TRACE_RETURN,_retValue);
#line 1221 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1221 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 1221 "cplus.met"
    return _retValue ;
#line 1221 "cplus.met"
}
#line 1221 "cplus.met"

#line 1221 "cplus.met"
#line 1147 "cplus.met"
PPTREE cplus::ext_decl_if_dir ( int error_free)
#line 1147 "cplus.met"
{
#line 1147 "cplus.met"
    int  _oldkeepCarriage = keepCarriage;
#line 1147 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 1147 "cplus.met"
    int _value,_nbPre = 0 ;
#line 1147 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 1147 "cplus.met"
    int _Debug = TRACE_RULE("ext_decl_if_dir",TRACE_ENTER,(PPTREE)0);
#line 1147 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 1147 "cplus.met"
#line 1147 "cplus.met"
    PPTREE _addlist1 = (PPTREE) 0,_addlist2 = (PPTREE) 0;
#line 1147 "cplus.met"
#line 1147 "cplus.met"
    PPTREE retTree = (PPTREE) 0,list = (PPTREE) 0,list2 = (PPTREE) 0;
#line 1147 "cplus.met"
#line 1149 "cplus.met"
    {
#line 1149 "cplus.met"
        keepCarriage = 1 ;
#line 1149 "cplus.met"
#line 1150 "cplus.met"
#line 1151 "cplus.met"
        {
#line 1151 "cplus.met"
            PPTREE _ptTree0=0,_ptRes0=0;
#line 1151 "cplus.met"
            _ptRes0= MakeTree(IF_DIR, 3);
#line 1151 "cplus.met"
            if ( (_ptTree0=NQUICK_CALL(_Tak(expression)(error_free), 62, cplus))== (PPTREE) -1 ) {
#line 1151 "cplus.met"
                MulFreeTree(7,_ptRes0,_ptTree0,_addlist1,_addlist2,list,list2,retTree);
                PROG_EXIT(ext_decl_if_dir_exit,"ext_decl_if_dir")
#line 1151 "cplus.met"
            }
#line 1151 "cplus.met"
            ReplaceTree(_ptRes0, 1, _ptTree0);
#line 1151 "cplus.met"
            retTree=_ptRes0;
#line 1151 "cplus.met"
        }
#line 1151 "cplus.met"
#line 1152 "cplus.met"
        (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 1152 "cplus.met"
        if ( ! TERM_OR_META(CARRIAGE_RETURN,"CARRIAGE_RETURN") || !(CommTerm(),1)) {
#line 1152 "cplus.met"
            MulFreeTree(5,_addlist1,_addlist2,list,list2,retTree);
            TOKEN_EXIT(ext_decl_if_dir_exit,"CARRIAGE_RETURN")
#line 1152 "cplus.met"
        } else {
#line 1152 "cplus.met"
            tokenAhead = 0 ;
#line 1152 "cplus.met"
        }
#line 1152 "cplus.met"
#line 1152 "cplus.met"
        keepCarriage =  _oldkeepCarriage;
#line 1152 "cplus.met"
    }
#line 1152 "cplus.met"
#line 1152 "cplus.met"
    _addlist1 = list ;
#line 1152 "cplus.met"
#line 1154 "cplus.met"
    while (((! ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN( ELSE_DIR,"ELSE_DIR"))) && 
#line 1154 "cplus.met"
           (! ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN( ELIF_DIR,"ELIF_DIR")))) && 
#line 1154 "cplus.met"
          (! ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN( ENDIF_DIR,"ENDIF_DIR")))) { 
#line 1154 "cplus.met"
#line 1155 "cplus.met"
#line 1155 "cplus.met"
        {
#line 1155 "cplus.met"
            PPTREE _ptTree0=0;
#line 1155 "cplus.met"
            if ( (_ptTree0=NQUICK_CALL(_Tak(ext_all_ext)(error_free), 65, cplus))== (PPTREE) -1 ) {
#line 1155 "cplus.met"
                MulFreeTree(6,_ptTree0,_addlist1,_addlist2,list,list2,retTree);
                PROG_EXIT(ext_decl_if_dir_exit,"ext_decl_if_dir")
#line 1155 "cplus.met"
            }
#line 1155 "cplus.met"
            _addlist1 =AddList(_addlist1 , _ptTree0);
#line 1155 "cplus.met"
        }
#line 1155 "cplus.met"
#line 1155 "cplus.met"
        if (list){
#line 1155 "cplus.met"
#line 1155 "cplus.met"
            _addlist1 = SonTree (_addlist1 ,2 );
#line 1155 "cplus.met"
        } else {
#line 1155 "cplus.met"
#line 1155 "cplus.met"
            list = _addlist1 ;
#line 1155 "cplus.met"
        }
#line 1155 "cplus.met"
    } 
#line 1155 "cplus.met"
#line 1156 "cplus.met"
    {
#line 1156 "cplus.met"
        PPTREE _ptTree0=0;
#line 1156 "cplus.met"
        if ( (_ptTree0=NQUICK_CALL(_Tak(none_statement)(error_free), 103, cplus))== (PPTREE) -1 ) {
#line 1156 "cplus.met"
            MulFreeTree(6,_ptTree0,_addlist1,_addlist2,list,list2,retTree);
            PROG_EXIT(ext_decl_if_dir_exit,"ext_decl_if_dir")
#line 1156 "cplus.met"
        }
#line 1156 "cplus.met"
        list =AddList(list , _ptTree0);
#line 1156 "cplus.met"
    }
#line 1156 "cplus.met"
#line 1157 "cplus.met"
    ReplaceTree(retTree ,2 ,list );
#line 1157 "cplus.met"
#line 1158 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 1158 "cplus.met"
    switch( lexEl.Value) {
#line 1158 "cplus.met"
#line 1159 "cplus.met"
        case META : 
#line 1159 "cplus.met"
        case ELSE_DIR : 
#line 1159 "cplus.met"
            tokenAhead = 0 ;
#line 1159 "cplus.met"
            CommTerm();
#line 1159 "cplus.met"
#line 1160 "cplus.met"
#line 1160 "cplus.met"
            _addlist2 = list2 ;
#line 1160 "cplus.met"
#line 1161 "cplus.met"
            while (((tokenAhead && tokenAhead != -1)|| (c != EOF)) && 
#line 1161 "cplus.met"
                  (! ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN( ENDIF_DIR,"ENDIF_DIR")))) { 
#line 1161 "cplus.met"
#line 1162 "cplus.met"
#line 1162 "cplus.met"
                {
#line 1162 "cplus.met"
                    PPTREE _ptTree0=0;
#line 1162 "cplus.met"
                    if ( (_ptTree0=NQUICK_CALL(_Tak(ext_all_ext)(error_free), 65, cplus))== (PPTREE) -1 ) {
#line 1162 "cplus.met"
                        MulFreeTree(6,_ptTree0,_addlist1,_addlist2,list,list2,retTree);
                        PROG_EXIT(ext_decl_if_dir_exit,"ext_decl_if_dir")
#line 1162 "cplus.met"
                    }
#line 1162 "cplus.met"
                    _addlist2 =AddList(_addlist2 , _ptTree0);
#line 1162 "cplus.met"
                }
#line 1162 "cplus.met"
#line 1162 "cplus.met"
                if (list2){
#line 1162 "cplus.met"
#line 1162 "cplus.met"
                    _addlist2 = SonTree (_addlist2 ,2 );
#line 1162 "cplus.met"
                } else {
#line 1162 "cplus.met"
#line 1162 "cplus.met"
                    list2 = _addlist2 ;
#line 1162 "cplus.met"
                }
#line 1162 "cplus.met"
            } 
#line 1162 "cplus.met"
#line 1163 "cplus.met"
            {
#line 1163 "cplus.met"
                PPTREE _ptTree0=0;
#line 1163 "cplus.met"
                if ( (_ptTree0=NQUICK_CALL(_Tak(none_statement)(error_free), 103, cplus))== (PPTREE) -1 ) {
#line 1163 "cplus.met"
                    MulFreeTree(6,_ptTree0,_addlist1,_addlist2,list,list2,retTree);
                    PROG_EXIT(ext_decl_if_dir_exit,"ext_decl_if_dir")
#line 1163 "cplus.met"
                }
#line 1163 "cplus.met"
                list2 =AddList(list2 , _ptTree0);
#line 1163 "cplus.met"
            }
#line 1163 "cplus.met"
#line 1164 "cplus.met"
            (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 1164 "cplus.met"
            if ( ! TERM_OR_META(ENDIF_DIR,"ENDIF_DIR") || !(CommTerm(),1)) {
#line 1164 "cplus.met"
                MulFreeTree(5,_addlist1,_addlist2,list,list2,retTree);
                TOKEN_EXIT(ext_decl_if_dir_exit,"ENDIF_DIR")
#line 1164 "cplus.met"
            } else {
#line 1164 "cplus.met"
                tokenAhead = 0 ;
#line 1164 "cplus.met"
            }
#line 1164 "cplus.met"
#line 1165 "cplus.met"
            {
#line 1165 "cplus.met"
                PPTREE _ptTree0=0;
#line 1165 "cplus.met"
                _ptTree0=ReplaceTree(retTree ,3 ,list2 );
#line 1165 "cplus.met"
                _retValue =_ptTree0;
#line 1165 "cplus.met"
                goto ext_decl_if_dir_ret;
#line 1165 "cplus.met"
            }
#line 1165 "cplus.met"
#line 1165 "cplus.met"
            break;
#line 1165 "cplus.met"
#line 1167 "cplus.met"
        case ELIF_DIR : 
#line 1167 "cplus.met"
            tokenAhead = 0 ;
#line 1167 "cplus.met"
            CommTerm();
#line 1167 "cplus.met"
#line 1167 "cplus.met"
            {
#line 1167 "cplus.met"
                PPTREE _ptTree0=0;
#line 1167 "cplus.met"
                {
#line 1167 "cplus.met"
                    PPTREE _ptTree1=0;
#line 1167 "cplus.met"
                    if ( (_ptTree1=NQUICK_CALL(_Tak(ext_decl_if_dir)(error_free), 73, cplus))== (PPTREE) -1 ) {
#line 1167 "cplus.met"
                        MulFreeTree(7,_ptTree1,_ptTree0,_addlist1,_addlist2,list,list2,retTree);
                        PROG_EXIT(ext_decl_if_dir_exit,"ext_decl_if_dir")
#line 1167 "cplus.met"
                    }
#line 1167 "cplus.met"
                    _ptTree0=ReplaceTree(retTree , 3 , _ptTree1);
#line 1167 "cplus.met"
                }
#line 1167 "cplus.met"
                _retValue =_ptTree0;
#line 1167 "cplus.met"
                goto ext_decl_if_dir_ret;
#line 1167 "cplus.met"
            }
#line 1167 "cplus.met"
            break;
#line 1167 "cplus.met"
#line 1168 "cplus.met"
        case ENDIF_DIR : 
#line 1168 "cplus.met"
            tokenAhead = 0 ;
#line 1168 "cplus.met"
            CommTerm();
#line 1168 "cplus.met"
#line 1168 "cplus.met"
            {
#line 1168 "cplus.met"
                _retValue = retTree ;
#line 1168 "cplus.met"
                goto ext_decl_if_dir_ret;
#line 1168 "cplus.met"
                
#line 1168 "cplus.met"
            }
#line 1168 "cplus.met"
            break;
#line 1168 "cplus.met"
        default :
#line 1168 "cplus.met"
            MulFreeTree(5,_addlist1,_addlist2,list,list2,retTree);
            CASE_EXIT(ext_decl_if_dir_exit,"either ELSE_DIR or ELIF_DIR or ENDIF_DIR")
#line 1168 "cplus.met"
            break;
#line 1168 "cplus.met"
    }
#line 1168 "cplus.met"
#line 1168 "cplus.met"
#line 1169 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1169 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 1169 "cplus.met"
keepCarriage =  _oldkeepCarriage;
#line 1169 "cplus.met"
return((PPTREE) 0);
#line 1169 "cplus.met"

#line 1169 "cplus.met"
ext_decl_if_dir_exit :
#line 1169 "cplus.met"

#line 1169 "cplus.met"
    _Debug = TRACE_RULE("ext_decl_if_dir",TRACE_EXIT,(PPTREE)0);
#line 1169 "cplus.met"
    _funcLevel--;
#line 1169 "cplus.met"
    keepCarriage =  _oldkeepCarriage;
#line 1169 "cplus.met"
    return((PPTREE) -1) ;
#line 1169 "cplus.met"

#line 1169 "cplus.met"
ext_decl_if_dir_ret :
#line 1169 "cplus.met"
    
#line 1169 "cplus.met"
    _Debug = TRACE_RULE("ext_decl_if_dir",TRACE_RETURN,_retValue);
#line 1169 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1169 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 1169 "cplus.met"
    keepCarriage =  _oldkeepCarriage;
#line 1169 "cplus.met"
    return _retValue ;
#line 1169 "cplus.met"
}
#line 1169 "cplus.met"

#line 1169 "cplus.met"
#line 1172 "cplus.met"
PPTREE cplus::ext_decl_ifdef_dir ( int error_free)
#line 1172 "cplus.met"
{
#line 1172 "cplus.met"
    int  _oldkeepCarriage = keepCarriage;
#line 1172 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 1172 "cplus.met"
    int _value,_nbPre = 0 ;
#line 1172 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 1172 "cplus.met"
    int _Debug = TRACE_RULE("ext_decl_ifdef_dir",TRACE_ENTER,(PPTREE)0);
#line 1172 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 1172 "cplus.met"
#line 1172 "cplus.met"
    PPTREE _addlist1 = (PPTREE) 0,_addlist2 = (PPTREE) 0;
#line 1172 "cplus.met"
#line 1172 "cplus.met"
    PPTREE retTree = (PPTREE) 0,list = (PPTREE) 0,list2 = (PPTREE) 0,express = (PPTREE) 0;
#line 1172 "cplus.met"
#line 1174 "cplus.met"
    if ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&TERM_OR_META(IFDEF_DIR,"IFDEF_DIR") && (tokenAhead = 0,CommTerm(),1)){
#line 1174 "cplus.met"
#line 1175 "cplus.met"
#line 1176 "cplus.met"
        {
#line 1176 "cplus.met"
            keepCarriage = 1 ;
#line 1176 "cplus.met"
#line 1177 "cplus.met"
#line 1178 "cplus.met"
            {
#line 1178 "cplus.met"
                PPTREE _ptTree0=0,_ptRes0=0;
#line 1178 "cplus.met"
                _ptRes0= MakeTree(IFDEF_DIR, 3);
#line 1178 "cplus.met"
                if ( (_ptTree0=NQUICK_CALL(_Tak(expression)(error_free), 62, cplus))== (PPTREE) -1 ) {
#line 1178 "cplus.met"
                    MulFreeTree(8,_ptRes0,_ptTree0,_addlist1,_addlist2,express,list,list2,retTree);
                    PROG_EXIT(ext_decl_ifdef_dir_exit,"ext_decl_ifdef_dir")
#line 1178 "cplus.met"
                }
#line 1178 "cplus.met"
                ReplaceTree(_ptRes0, 1, _ptTree0);
#line 1178 "cplus.met"
                retTree=_ptRes0;
#line 1178 "cplus.met"
            }
#line 1178 "cplus.met"
#line 1179 "cplus.met"
            (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 1179 "cplus.met"
            if ( ! TERM_OR_META(CARRIAGE_RETURN,"CARRIAGE_RETURN") || !(CommTerm(),1)) {
#line 1179 "cplus.met"
                MulFreeTree(6,_addlist1,_addlist2,express,list,list2,retTree);
                TOKEN_EXIT(ext_decl_ifdef_dir_exit,"CARRIAGE_RETURN")
#line 1179 "cplus.met"
            } else {
#line 1179 "cplus.met"
                tokenAhead = 0 ;
#line 1179 "cplus.met"
            }
#line 1179 "cplus.met"
#line 1179 "cplus.met"
            keepCarriage =  _oldkeepCarriage;
#line 1179 "cplus.met"
        }
#line 1179 "cplus.met"
#line 1179 "cplus.met"
#line 1180 "cplus.met"
    } else {
#line 1180 "cplus.met"
#line 1183 "cplus.met"
#line 1184 "cplus.met"
        (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 1184 "cplus.met"
        if ( ! TERM_OR_META(IFNDEF_DIR,"IFNDEF_DIR") || !(CommTerm(),1)) {
#line 1184 "cplus.met"
            MulFreeTree(6,_addlist1,_addlist2,express,list,list2,retTree);
            TOKEN_EXIT(ext_decl_ifdef_dir_exit,"IFNDEF_DIR")
#line 1184 "cplus.met"
        } else {
#line 1184 "cplus.met"
            tokenAhead = 0 ;
#line 1184 "cplus.met"
        }
#line 1184 "cplus.met"
#line 1185 "cplus.met"
        {
#line 1185 "cplus.met"
            keepCarriage = 1 ;
#line 1185 "cplus.met"
#line 1186 "cplus.met"
#line 1187 "cplus.met"
            if ( (express=NQUICK_CALL(_Tak(expression)(error_free), 62, cplus))== (PPTREE) -1 ) {
#line 1187 "cplus.met"
                MulFreeTree(6,_addlist1,_addlist2,express,list,list2,retTree);
                PROG_EXIT(ext_decl_ifdef_dir_exit,"ext_decl_ifdef_dir")
#line 1187 "cplus.met"
            }
#line 1187 "cplus.met"
#line 1188 "cplus.met"
            (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 1188 "cplus.met"
            if ( ! TERM_OR_META(CARRIAGE_RETURN,"CARRIAGE_RETURN") || !(CommTerm(),1)) {
#line 1188 "cplus.met"
                MulFreeTree(6,_addlist1,_addlist2,express,list,list2,retTree);
                TOKEN_EXIT(ext_decl_ifdef_dir_exit,"CARRIAGE_RETURN")
#line 1188 "cplus.met"
            } else {
#line 1188 "cplus.met"
                tokenAhead = 0 ;
#line 1188 "cplus.met"
            }
#line 1188 "cplus.met"
#line 1188 "cplus.met"
            keepCarriage =  _oldkeepCarriage;
#line 1188 "cplus.met"
        }
#line 1188 "cplus.met"
#line 1190 "cplus.met"
        {
#line 1190 "cplus.met"
            PPTREE _ptRes0=0;
#line 1190 "cplus.met"
            _ptRes0= MakeTree(IFNDEF_DIR, 3);
#line 1190 "cplus.met"
            ReplaceTree(_ptRes0, 1, express );
#line 1190 "cplus.met"
            retTree=_ptRes0;
#line 1190 "cplus.met"
        }
#line 1190 "cplus.met"
#line 1190 "cplus.met"
    }
#line 1190 "cplus.met"
#line 1190 "cplus.met"
    _addlist1 = list ;
#line 1190 "cplus.met"
#line 1194 "cplus.met"
    while (((! ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN( ELSE_DIR,"ELSE_DIR"))) && 
#line 1194 "cplus.met"
           (! ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN( ELIF_DIR,"ELIF_DIR")))) && 
#line 1194 "cplus.met"
          (! ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN( ENDIF_DIR,"ENDIF_DIR")))) { 
#line 1194 "cplus.met"
#line 1196 "cplus.met"
#line 1196 "cplus.met"
        {
#line 1196 "cplus.met"
            PPTREE _ptTree0=0;
#line 1196 "cplus.met"
            if ( (_ptTree0=NQUICK_CALL(_Tak(ext_all_ext)(error_free), 65, cplus))== (PPTREE) -1 ) {
#line 1196 "cplus.met"
                MulFreeTree(7,_ptTree0,_addlist1,_addlist2,express,list,list2,retTree);
                PROG_EXIT(ext_decl_ifdef_dir_exit,"ext_decl_ifdef_dir")
#line 1196 "cplus.met"
            }
#line 1196 "cplus.met"
            _addlist1 =AddList(_addlist1 , _ptTree0);
#line 1196 "cplus.met"
        }
#line 1196 "cplus.met"
#line 1196 "cplus.met"
        if (list){
#line 1196 "cplus.met"
#line 1196 "cplus.met"
            _addlist1 = SonTree (_addlist1 ,2 );
#line 1196 "cplus.met"
        } else {
#line 1196 "cplus.met"
#line 1196 "cplus.met"
            list = _addlist1 ;
#line 1196 "cplus.met"
        }
#line 1196 "cplus.met"
    } 
#line 1196 "cplus.met"
#line 1197 "cplus.met"
    {
#line 1197 "cplus.met"
        PPTREE _ptTree0=0;
#line 1197 "cplus.met"
        if ( (_ptTree0=NQUICK_CALL(_Tak(none_statement)(error_free), 103, cplus))== (PPTREE) -1 ) {
#line 1197 "cplus.met"
            MulFreeTree(7,_ptTree0,_addlist1,_addlist2,express,list,list2,retTree);
            PROG_EXIT(ext_decl_ifdef_dir_exit,"ext_decl_ifdef_dir")
#line 1197 "cplus.met"
        }
#line 1197 "cplus.met"
        list =AddList(list , _ptTree0);
#line 1197 "cplus.met"
    }
#line 1197 "cplus.met"
#line 1198 "cplus.met"
    ReplaceTree(retTree ,2 ,list );
#line 1198 "cplus.met"
#line 1199 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 1199 "cplus.met"
    switch( lexEl.Value) {
#line 1199 "cplus.met"
#line 1200 "cplus.met"
        case META : 
#line 1200 "cplus.met"
        case ELSE_DIR : 
#line 1200 "cplus.met"
            tokenAhead = 0 ;
#line 1200 "cplus.met"
            CommTerm();
#line 1200 "cplus.met"
#line 1201 "cplus.met"
#line 1201 "cplus.met"
            _addlist2 = list2 ;
#line 1201 "cplus.met"
#line 1202 "cplus.met"
            while (((tokenAhead && tokenAhead != -1)|| (c != EOF)) && 
#line 1202 "cplus.met"
                  (! ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN( ENDIF_DIR,"ENDIF_DIR")))) { 
#line 1202 "cplus.met"
#line 1203 "cplus.met"
#line 1203 "cplus.met"
                {
#line 1203 "cplus.met"
                    PPTREE _ptTree0=0;
#line 1203 "cplus.met"
                    if ( (_ptTree0=NQUICK_CALL(_Tak(ext_all_ext)(error_free), 65, cplus))== (PPTREE) -1 ) {
#line 1203 "cplus.met"
                        MulFreeTree(7,_ptTree0,_addlist1,_addlist2,express,list,list2,retTree);
                        PROG_EXIT(ext_decl_ifdef_dir_exit,"ext_decl_ifdef_dir")
#line 1203 "cplus.met"
                    }
#line 1203 "cplus.met"
                    _addlist2 =AddList(_addlist2 , _ptTree0);
#line 1203 "cplus.met"
                }
#line 1203 "cplus.met"
#line 1203 "cplus.met"
                if (list2){
#line 1203 "cplus.met"
#line 1203 "cplus.met"
                    _addlist2 = SonTree (_addlist2 ,2 );
#line 1203 "cplus.met"
                } else {
#line 1203 "cplus.met"
#line 1203 "cplus.met"
                    list2 = _addlist2 ;
#line 1203 "cplus.met"
                }
#line 1203 "cplus.met"
            } 
#line 1203 "cplus.met"
#line 1204 "cplus.met"
            {
#line 1204 "cplus.met"
                PPTREE _ptTree0=0;
#line 1204 "cplus.met"
                if ( (_ptTree0=NQUICK_CALL(_Tak(none_statement)(error_free), 103, cplus))== (PPTREE) -1 ) {
#line 1204 "cplus.met"
                    MulFreeTree(7,_ptTree0,_addlist1,_addlist2,express,list,list2,retTree);
                    PROG_EXIT(ext_decl_ifdef_dir_exit,"ext_decl_ifdef_dir")
#line 1204 "cplus.met"
                }
#line 1204 "cplus.met"
                list2 =AddList(list2 , _ptTree0);
#line 1204 "cplus.met"
            }
#line 1204 "cplus.met"
#line 1205 "cplus.met"
            (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 1205 "cplus.met"
            if ( ! TERM_OR_META(ENDIF_DIR,"ENDIF_DIR") || !(CommTerm(),1)) {
#line 1205 "cplus.met"
                MulFreeTree(6,_addlist1,_addlist2,express,list,list2,retTree);
                TOKEN_EXIT(ext_decl_ifdef_dir_exit,"ENDIF_DIR")
#line 1205 "cplus.met"
            } else {
#line 1205 "cplus.met"
                tokenAhead = 0 ;
#line 1205 "cplus.met"
            }
#line 1205 "cplus.met"
#line 1206 "cplus.met"
            {
#line 1206 "cplus.met"
                PPTREE _ptTree0=0;
#line 1206 "cplus.met"
                _ptTree0=ReplaceTree(retTree ,3 ,list2 );
#line 1206 "cplus.met"
                _retValue =_ptTree0;
#line 1206 "cplus.met"
                goto ext_decl_ifdef_dir_ret;
#line 1206 "cplus.met"
            }
#line 1206 "cplus.met"
#line 1206 "cplus.met"
            break;
#line 1206 "cplus.met"
#line 1208 "cplus.met"
        case ELIF_DIR : 
#line 1208 "cplus.met"
            tokenAhead = 0 ;
#line 1208 "cplus.met"
            CommTerm();
#line 1208 "cplus.met"
#line 1208 "cplus.met"
            {
#line 1208 "cplus.met"
                PPTREE _ptTree0=0;
#line 1208 "cplus.met"
                {
#line 1208 "cplus.met"
                    PPTREE _ptTree1=0;
#line 1208 "cplus.met"
                    if ( (_ptTree1=NQUICK_CALL(_Tak(ext_decl_if_dir)(error_free), 73, cplus))== (PPTREE) -1 ) {
#line 1208 "cplus.met"
                        MulFreeTree(8,_ptTree1,_ptTree0,_addlist1,_addlist2,express,list,list2,retTree);
                        PROG_EXIT(ext_decl_ifdef_dir_exit,"ext_decl_ifdef_dir")
#line 1208 "cplus.met"
                    }
#line 1208 "cplus.met"
                    _ptTree0=ReplaceTree(retTree , 3 , _ptTree1);
#line 1208 "cplus.met"
                }
#line 1208 "cplus.met"
                _retValue =_ptTree0;
#line 1208 "cplus.met"
                goto ext_decl_ifdef_dir_ret;
#line 1208 "cplus.met"
            }
#line 1208 "cplus.met"
            break;
#line 1208 "cplus.met"
#line 1209 "cplus.met"
        case ENDIF_DIR : 
#line 1209 "cplus.met"
            tokenAhead = 0 ;
#line 1209 "cplus.met"
            CommTerm();
#line 1209 "cplus.met"
#line 1209 "cplus.met"
            {
#line 1209 "cplus.met"
                _retValue = retTree ;
#line 1209 "cplus.met"
                goto ext_decl_ifdef_dir_ret;
#line 1209 "cplus.met"
                
#line 1209 "cplus.met"
            }
#line 1209 "cplus.met"
            break;
#line 1209 "cplus.met"
        default :
#line 1209 "cplus.met"
            MulFreeTree(6,_addlist1,_addlist2,express,list,list2,retTree);
            CASE_EXIT(ext_decl_ifdef_dir_exit,"either ELSE_DIR or ELIF_DIR or ENDIF_DIR")
#line 1209 "cplus.met"
            break;
#line 1209 "cplus.met"
    }
#line 1209 "cplus.met"
#line 1209 "cplus.met"
#line 1210 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1210 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 1210 "cplus.met"
keepCarriage =  _oldkeepCarriage;
#line 1210 "cplus.met"
return((PPTREE) 0);
#line 1210 "cplus.met"

#line 1210 "cplus.met"
ext_decl_ifdef_dir_exit :
#line 1210 "cplus.met"

#line 1210 "cplus.met"
    _Debug = TRACE_RULE("ext_decl_ifdef_dir",TRACE_EXIT,(PPTREE)0);
#line 1210 "cplus.met"
    _funcLevel--;
#line 1210 "cplus.met"
    keepCarriage =  _oldkeepCarriage;
#line 1210 "cplus.met"
    return((PPTREE) -1) ;
#line 1210 "cplus.met"

#line 1210 "cplus.met"
ext_decl_ifdef_dir_ret :
#line 1210 "cplus.met"
    
#line 1210 "cplus.met"
    _Debug = TRACE_RULE("ext_decl_ifdef_dir",TRACE_RETURN,_retValue);
#line 1210 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1210 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 1210 "cplus.met"
    keepCarriage =  _oldkeepCarriage;
#line 1210 "cplus.met"
    return _retValue ;
#line 1210 "cplus.met"
}
#line 1210 "cplus.met"

#line 1210 "cplus.met"
#line 3273 "cplus.met"
PPTREE cplus::for_statement ( int error_free)
#line 3273 "cplus.met"
{
#line 3273 "cplus.met"
    int  _oldswitchContext = switchContext;
#line 3273 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 3273 "cplus.met"
    int _value,_nbPre = 0 ;
#line 3273 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 3273 "cplus.met"
    int _Debug = TRACE_RULE("for_statement",TRACE_ENTER,(PPTREE)0);
#line 3273 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 3273 "cplus.met"
#line 3273 "cplus.met"
    PPTREE statTree = (PPTREE) 0,opt = (PPTREE) 0,stat = (PPTREE) 0;
#line 3273 "cplus.met"
#line 3275 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3275 "cplus.met"
    if (  !SEE_TOKEN( POUV,"(") || !(CommTerm(),1)) {
#line 3275 "cplus.met"
        MulFreeTree(3,opt,stat,statTree);
        TOKEN_EXIT(for_statement_exit,"(")
#line 3275 "cplus.met"
    } else {
#line 3275 "cplus.met"
        tokenAhead = 0 ;
#line 3275 "cplus.met"
    }
#line 3275 "cplus.met"
#line 3276 "cplus.met"
    {
#line 3276 "cplus.met"
        PPTREE _ptRes0=0;
#line 3276 "cplus.met"
        _ptRes0= MakeTree(FOR, 4);
#line 3276 "cplus.met"
        statTree=_ptRes0;
#line 3276 "cplus.met"
    }
#line 3276 "cplus.met"
#line 3277 "cplus.met"
    if (NPUSH_CALL_AFF_VERIF(opt = ,_Tak(expression_for), 63, cplus)){
#line 3277 "cplus.met"
#line 3278 "cplus.met"
        ReplaceTree(statTree ,1 ,opt );
#line 3278 "cplus.met"
#line 3278 "cplus.met"
    } else {
#line 3278 "cplus.met"
#line 3280 "cplus.met"
        if (NPUSH_CALL_AFF_VERIF(opt = ,_Tak(data_declaration_for), 41, cplus)){
#line 3280 "cplus.met"
#line 3281 "cplus.met"
            ReplaceTree(statTree ,1 ,opt );
#line 3281 "cplus.met"
#line 3281 "cplus.met"
        }
#line 3281 "cplus.met"
    }
#line 3281 "cplus.met"
#line 3282 "cplus.met"
    if ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN(DPOI,":") && (tokenAhead = 0,CommTerm(),1)){
#line 3282 "cplus.met"
#line 3283 "cplus.met"
#line 3284 "cplus.met"
        {
#line 3284 "cplus.met"
            PPTREE _ptTree0=0;
#line 3284 "cplus.met"
            {
#line 3284 "cplus.met"
                PPTREE _ptTree1=0,_ptRes1=0;
#line 3284 "cplus.met"
                _ptRes1= MakeTree(ALL_OF, 2);
#line 3284 "cplus.met"
                ReplaceTree(_ptRes1, 1, opt );
#line 3284 "cplus.met"
                if ( (_ptTree1=NQUICK_CALL(_Tak(expression)(error_free), 62, cplus))== (PPTREE) -1 ) {
#line 3284 "cplus.met"
                    MulFreeTree(6,_ptRes1,_ptTree1,_ptTree0,opt,stat,statTree);
                    PROG_EXIT(for_statement_exit,"for_statement")
#line 3284 "cplus.met"
                }
#line 3284 "cplus.met"
                ReplaceTree(_ptRes1, 2, _ptTree1);
#line 3284 "cplus.met"
                _ptTree0=_ptRes1;
#line 3284 "cplus.met"
            }
#line 3284 "cplus.met"
            ReplaceTree(statTree , 1 , _ptTree0);
#line 3284 "cplus.met"
        }
#line 3284 "cplus.met"
#line 3284 "cplus.met"
#line 3284 "cplus.met"
    } else {
#line 3284 "cplus.met"
#line 3287 "cplus.met"
#line 3288 "cplus.met"
        (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3288 "cplus.met"
        if (  !SEE_TOKEN( PVIR,";") || !(CommTerm(),1)) {
#line 3288 "cplus.met"
            MulFreeTree(3,opt,stat,statTree);
            TOKEN_EXIT(for_statement_exit,";")
#line 3288 "cplus.met"
        } else {
#line 3288 "cplus.met"
            tokenAhead = 0 ;
#line 3288 "cplus.met"
        }
#line 3288 "cplus.met"
#line 3289 "cplus.met"
        if (NPUSH_CALL_AFF_VERIF(opt = ,_Tak(expression), 62, cplus)){
#line 3289 "cplus.met"
#line 3290 "cplus.met"
            ReplaceTree(statTree ,2 ,opt );
#line 3290 "cplus.met"
#line 3290 "cplus.met"
        }
#line 3290 "cplus.met"
#line 3291 "cplus.met"
        (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3291 "cplus.met"
        if (  !SEE_TOKEN( PVIR,";") || !(CommTerm(),1)) {
#line 3291 "cplus.met"
            MulFreeTree(3,opt,stat,statTree);
            TOKEN_EXIT(for_statement_exit,";")
#line 3291 "cplus.met"
        } else {
#line 3291 "cplus.met"
            tokenAhead = 0 ;
#line 3291 "cplus.met"
        }
#line 3291 "cplus.met"
#line 3292 "cplus.met"
        if (NPUSH_CALL_AFF_VERIF(opt = ,_Tak(expression), 62, cplus)){
#line 3292 "cplus.met"
#line 3293 "cplus.met"
            ReplaceTree(statTree ,3 ,opt );
#line 3293 "cplus.met"
#line 3293 "cplus.met"
        }
#line 3293 "cplus.met"
#line 3293 "cplus.met"
    }
#line 3293 "cplus.met"
#line 3295 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3295 "cplus.met"
    if (  !SEE_TOKEN( PFER,")") || !(CommTerm(),1)) {
#line 3295 "cplus.met"
        MulFreeTree(3,opt,stat,statTree);
        TOKEN_EXIT(for_statement_exit,")")
#line 3295 "cplus.met"
    } else {
#line 3295 "cplus.met"
        tokenAhead = 0 ;
#line 3295 "cplus.met"
    }
#line 3295 "cplus.met"
#line 3296 "cplus.met"
    {
#line 3296 "cplus.met"
        switchContext = 0 ;
#line 3296 "cplus.met"
#line 3297 "cplus.met"
        {
#line 3297 "cplus.met"
            PPTREE _ptTree0=0;
#line 3297 "cplus.met"
            if ( (_ptTree0=NQUICK_CALL(_Tak(statement)(error_free), 136, cplus))== (PPTREE) -1 ) {
#line 3297 "cplus.met"
                MulFreeTree(4,_ptTree0,opt,stat,statTree);
                PROG_EXIT(for_statement_exit,"for_statement")
#line 3297 "cplus.met"
            }
#line 3297 "cplus.met"
            ReplaceTree(statTree , 4 , _ptTree0);
#line 3297 "cplus.met"
        }
#line 3297 "cplus.met"
        switchContext =  _oldswitchContext;
#line 3297 "cplus.met"
    }
#line 3297 "cplus.met"
#line 3298 "cplus.met"
    {
#line 3298 "cplus.met"
        _retValue = statTree ;
#line 3298 "cplus.met"
        goto for_statement_ret;
#line 3298 "cplus.met"
        
#line 3298 "cplus.met"
    }
#line 3298 "cplus.met"
#line 3298 "cplus.met"
#line 3298 "cplus.met"

#line 3299 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 3299 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 3299 "cplus.met"
switchContext =  _oldswitchContext;
#line 3299 "cplus.met"
return((PPTREE) 0);
#line 3299 "cplus.met"

#line 3299 "cplus.met"
for_statement_exit :
#line 3299 "cplus.met"

#line 3299 "cplus.met"
    _Debug = TRACE_RULE("for_statement",TRACE_EXIT,(PPTREE)0);
#line 3299 "cplus.met"
    _funcLevel--;
#line 3299 "cplus.met"
    switchContext =  _oldswitchContext;
#line 3299 "cplus.met"
    return((PPTREE) -1) ;
#line 3299 "cplus.met"

#line 3299 "cplus.met"
for_statement_ret :
#line 3299 "cplus.met"
    
#line 3299 "cplus.met"
    _Debug = TRACE_RULE("for_statement",TRACE_RETURN,_retValue);
#line 3299 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 3299 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 3299 "cplus.met"
    switchContext =  _oldswitchContext;
#line 3299 "cplus.met"
    return _retValue ;
#line 3299 "cplus.met"
}
#line 3299 "cplus.met"

#line 3299 "cplus.met"
#line 3197 "cplus.met"
PPTREE cplus::func_declaration ( int error_free)
#line 3197 "cplus.met"
{
#line 3197 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 3197 "cplus.met"
    int _value,_nbPre = 0 ;
#line 3197 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 3197 "cplus.met"
    int _Debug = TRACE_RULE("func_declaration",TRACE_ENTER,(PPTREE)0);
#line 3197 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 3197 "cplus.met"
#line 3197 "cplus.met"
    PPTREE _addlist1 = (PPTREE) 0;
#line 3197 "cplus.met"
#line 3197 "cplus.met"
    PPTREE funcTree = (PPTREE) 0,opt = (PPTREE) 0,decList = (PPTREE) 0,range = (PPTREE) 0,exception = (PPTREE) 0;
#line 3197 "cplus.met"
#line 3201 "cplus.met"
    if (! (NPUSH_CALL_AFF_VERIF(funcTree = ,_Tak(type_and_declarator), 142, cplus))){
#line 3201 "cplus.met"
#line 3203 "cplus.met"
#line 3204 "cplus.met"
        {
#line 3204 "cplus.met"
            PPTREE _ptTree0=0,_ptRes0=0;
#line 3204 "cplus.met"
            _ptRes0= MakeTree(FUNC, 11);
#line 3204 "cplus.met"
            if ( (_ptTree0=NQUICK_CALL(_Tak(sc_specifier)(error_free), 126, cplus))== (PPTREE) -1 ) {
#line 3204 "cplus.met"
                MulFreeTree(8,_ptRes0,_ptTree0,_addlist1,decList,exception,funcTree,opt,range);
                PROG_EXIT(func_declaration_exit,"func_declaration")
#line 3204 "cplus.met"
            }
#line 3204 "cplus.met"
            ReplaceTree(_ptRes0, 1, _ptTree0);
#line 3204 "cplus.met"
            funcTree=_ptRes0;
#line 3204 "cplus.met"
        }
#line 3204 "cplus.met"
#line 3205 "cplus.met"
        {
#line 3205 "cplus.met"
            PPTREE _ptTree0=0;
#line 3205 "cplus.met"
            if ( (_ptTree0=NQUICK_CALL(_Tak(func_declarator)(error_free), 77, cplus))== (PPTREE) -1 ) {
#line 3205 "cplus.met"
                MulFreeTree(7,_ptTree0,_addlist1,decList,exception,funcTree,opt,range);
                PROG_EXIT(func_declaration_exit,"func_declaration")
#line 3205 "cplus.met"
            }
#line 3205 "cplus.met"
            ReplaceTree(funcTree , 3 , _ptTree0);
#line 3205 "cplus.met"
        }
#line 3205 "cplus.met"
#line 3205 "cplus.met"
#line 3205 "cplus.met"
    }
#line 3205 "cplus.met"
#line 3207 "cplus.met"
    {
#line 3207 "cplus.met"
        PPTREE _ptTree0=0;
#line 3207 "cplus.met"
        if ( (_ptTree0=NQUICK_CALL(_Tak(parameter_list_extended)(error_free), 107, cplus))== (PPTREE) -1 ) {
#line 3207 "cplus.met"
            MulFreeTree(7,_ptTree0,_addlist1,decList,exception,funcTree,opt,range);
            PROG_EXIT(func_declaration_exit,"func_declaration")
#line 3207 "cplus.met"
        }
#line 3207 "cplus.met"
        ReplaceTree(funcTree , 4 , _ptTree0);
#line 3207 "cplus.met"
    }
#line 3207 "cplus.met"
#line 3208 "cplus.met"
    if (NPUSH_CALL_AFF_VERIF(range = ,_Tak(range_modifier_function), 122, cplus)){
#line 3208 "cplus.met"
#line 3209 "cplus.met"
        ReplaceTree(funcTree ,5 ,range );
#line 3209 "cplus.met"
#line 3209 "cplus.met"
    }
#line 3209 "cplus.met"
#line 3210 "cplus.met"
    if (NPUSH_CALL_AFF_VERIF(exception = ,_Tak(exception_list), 60, cplus)){
#line 3210 "cplus.met"
#line 3211 "cplus.met"
        ReplaceTree(funcTree ,9 ,exception );
#line 3211 "cplus.met"
#line 3211 "cplus.met"
    }
#line 3211 "cplus.met"
#line 3212 "cplus.met"
    if ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN(EGAL,"=") && (tokenAhead = 0,CommTerm(),1)){
#line 3212 "cplus.met"
#line 3213 "cplus.met"
#line 3214 "cplus.met"
        (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3214 "cplus.met"
        if (  !SEE_TOKEN( DELETE,"delete") || !(CommTerm(),1)) {
#line 3214 "cplus.met"
            MulFreeTree(6,_addlist1,decList,exception,funcTree,opt,range);
            TOKEN_EXIT(func_declaration_exit,"delete")
#line 3214 "cplus.met"
        } else {
#line 3214 "cplus.met"
            tokenAhead = 0 ;
#line 3214 "cplus.met"
        }
#line 3214 "cplus.met"
#line 3215 "cplus.met"
        (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3215 "cplus.met"
        if (  !SEE_TOKEN( PVIR,";") || !(CommTerm(),1)) {
#line 3215 "cplus.met"
            MulFreeTree(6,_addlist1,decList,exception,funcTree,opt,range);
            TOKEN_EXIT(func_declaration_exit,";")
#line 3215 "cplus.met"
        } else {
#line 3215 "cplus.met"
            tokenAhead = 0 ;
#line 3215 "cplus.met"
        }
#line 3215 "cplus.met"
#line 3216 "cplus.met"
        {
#line 3216 "cplus.met"
            PPTREE _ptTree0=0;
#line 3216 "cplus.met"
            {
#line 3216 "cplus.met"
                PPTREE _ptTree1=0;
#line 3216 "cplus.met"
                {
#line 3216 "cplus.met"
                    PPTREE _ptRes2=0;
#line 3216 "cplus.met"
                    _ptRes2= MakeTree(DELETE_FUNCTION, 0);
#line 3216 "cplus.met"
                    _ptTree1=_ptRes2;
#line 3216 "cplus.met"
                }
#line 3216 "cplus.met"
                _ptTree0=ReplaceTree(funcTree , 10 , _ptTree1);
#line 3216 "cplus.met"
            }
#line 3216 "cplus.met"
            _retValue =_ptTree0;
#line 3216 "cplus.met"
            goto func_declaration_ret;
#line 3216 "cplus.met"
        }
#line 3216 "cplus.met"
#line 3216 "cplus.met"
#line 3216 "cplus.met"
    } else {
#line 3216 "cplus.met"
#line 3219 "cplus.met"
#line 3219 "cplus.met"
        _addlist1 = decList ;
#line 3219 "cplus.met"
#line 3220 "cplus.met"
        while (NPUSH_CALL_AFF_VERIF(opt = ,_Tak(data_declaration), 40, cplus)) { 
#line 3220 "cplus.met"
#line 3221 "cplus.met"
#line 3221 "cplus.met"
            _addlist1 =AddList(_addlist1 ,opt );
#line 3221 "cplus.met"
#line 3221 "cplus.met"
            if (decList){
#line 3221 "cplus.met"
#line 3221 "cplus.met"
                _addlist1 = SonTree (_addlist1 ,2 );
#line 3221 "cplus.met"
            } else {
#line 3221 "cplus.met"
#line 3221 "cplus.met"
                decList = _addlist1 ;
#line 3221 "cplus.met"
            }
#line 3221 "cplus.met"
        } 
#line 3221 "cplus.met"
#line 3222 "cplus.met"
        ReplaceTree(funcTree ,6 ,decList );
#line 3222 "cplus.met"
#line 3223 "cplus.met"
        {
#line 3223 "cplus.met"
            PPTREE _ptTree0=0;
#line 3223 "cplus.met"
            if ( (_ptTree0=NQUICK_CALL(_Tak(ctor_initializer)(error_free), 32, cplus))== (PPTREE) -1 ) {
#line 3223 "cplus.met"
                MulFreeTree(7,_ptTree0,_addlist1,decList,exception,funcTree,opt,range);
                PROG_EXIT(func_declaration_exit,"func_declaration")
#line 3223 "cplus.met"
            }
#line 3223 "cplus.met"
            ReplaceTree(funcTree , 7 , _ptTree0);
#line 3223 "cplus.met"
        }
#line 3223 "cplus.met"
#line 3224 "cplus.met"
        {
#line 3224 "cplus.met"
            PPTREE _ptTree0=0;
#line 3224 "cplus.met"
            {
#line 3224 "cplus.met"
                PPTREE _ptTree1=0;
#line 3224 "cplus.met"
                if ( (_ptTree1=NQUICK_CALL(_Tak(compound_statement)(error_free), 28, cplus))== (PPTREE) -1 ) {
#line 3224 "cplus.met"
                    MulFreeTree(8,_ptTree1,_ptTree0,_addlist1,decList,exception,funcTree,opt,range);
                    PROG_EXIT(func_declaration_exit,"func_declaration")
#line 3224 "cplus.met"
                }
#line 3224 "cplus.met"
                _ptTree0=ReplaceTree(funcTree , 8 , _ptTree1);
#line 3224 "cplus.met"
            }
#line 3224 "cplus.met"
            _retValue =_ptTree0;
#line 3224 "cplus.met"
            goto func_declaration_ret;
#line 3224 "cplus.met"
        }
#line 3224 "cplus.met"
#line 3224 "cplus.met"
    }
#line 3224 "cplus.met"
#line 3224 "cplus.met"
#line 3225 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 3225 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 3225 "cplus.met"
return((PPTREE) 0);
#line 3225 "cplus.met"

#line 3225 "cplus.met"
func_declaration_exit :
#line 3225 "cplus.met"

#line 3225 "cplus.met"
    _Debug = TRACE_RULE("func_declaration",TRACE_EXIT,(PPTREE)0);
#line 3225 "cplus.met"
    _funcLevel--;
#line 3225 "cplus.met"
    return((PPTREE) -1) ;
#line 3225 "cplus.met"

#line 3225 "cplus.met"
func_declaration_ret :
#line 3225 "cplus.met"
    
#line 3225 "cplus.met"
    _Debug = TRACE_RULE("func_declaration",TRACE_RETURN,_retValue);
#line 3225 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 3225 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 3225 "cplus.met"
    return _retValue ;
#line 3225 "cplus.met"
}
#line 3225 "cplus.met"

#line 3225 "cplus.met"
#line 2297 "cplus.met"
PPTREE cplus::func_declarator ( int error_free)
#line 2297 "cplus.met"
{
#line 2297 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 2297 "cplus.met"
    int _value,_nbPre = 0 ;
#line 2297 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 2297 "cplus.met"
    int _Debug = TRACE_RULE("func_declarator",TRACE_ENTER,(PPTREE)0);
#line 2297 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 2297 "cplus.met"
#line 2297 "cplus.met"
    PPTREE valTree = (PPTREE) 0;
#line 2297 "cplus.met"
#line 2299 "cplus.met"
    if (NPUSH_CALL_AFF_VERIF(valTree = ,_Tak(range_modifier), 121, cplus)){
#line 2299 "cplus.met"
#line 2300 "cplus.met"
        {
#line 2300 "cplus.met"
            PPTREE _ptTree0=0;
#line 2300 "cplus.met"
            {
#line 2300 "cplus.met"
                PPTREE _ptTree1=0;
#line 2300 "cplus.met"
                if ( (_ptTree1=NQUICK_CALL(_Tak(func_declarator)(error_free), 77, cplus))== (PPTREE) -1 ) {
#line 2300 "cplus.met"
                    MulFreeTree(3,_ptTree1,_ptTree0,valTree);
                    PROG_EXIT(func_declarator_exit,"func_declarator")
#line 2300 "cplus.met"
                }
#line 2300 "cplus.met"
                _ptTree0=ReplaceTree(valTree , 2 , _ptTree1);
#line 2300 "cplus.met"
            }
#line 2300 "cplus.met"
            _retValue =_ptTree0;
#line 2300 "cplus.met"
            goto func_declarator_ret;
#line 2300 "cplus.met"
        }
#line 2300 "cplus.met"
    }
#line 2300 "cplus.met"
#line 2301 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 2301 "cplus.met"
    switch( lexEl.Value) {
#line 2301 "cplus.met"
#line 2302 "cplus.met"
        case ETOI : 
#line 2302 "cplus.met"
            tokenAhead = 0 ;
#line 2302 "cplus.met"
            CommTerm();
#line 2302 "cplus.met"
#line 2302 "cplus.met"
            {
#line 2302 "cplus.met"
                PPTREE _ptTree0=0;
#line 2302 "cplus.met"
                {
#line 2302 "cplus.met"
                    PPTREE _ptTree1=0,_ptRes1=0;
#line 2302 "cplus.met"
                    _ptRes1= MakeTree(TYP_ADDR, 1);
#line 2302 "cplus.met"
                    if ( (_ptTree1=NQUICK_CALL(_Tak(func_declarator)(error_free), 77, cplus))== (PPTREE) -1 ) {
#line 2302 "cplus.met"
                        MulFreeTree(4,_ptRes1,_ptTree1,_ptTree0,valTree);
                        PROG_EXIT(func_declarator_exit,"func_declarator")
#line 2302 "cplus.met"
                    }
#line 2302 "cplus.met"
                    ReplaceTree(_ptRes1, 1, _ptTree1);
#line 2302 "cplus.met"
                    _ptTree0=_ptRes1;
#line 2302 "cplus.met"
                }
#line 2302 "cplus.met"
                _retValue =_ptTree0;
#line 2302 "cplus.met"
                goto func_declarator_ret;
#line 2302 "cplus.met"
            }
#line 2302 "cplus.met"
            break;
#line 2302 "cplus.met"
#line 2303 "cplus.met"
        case ETCO : 
#line 2303 "cplus.met"
            tokenAhead = 0 ;
#line 2303 "cplus.met"
            CommTerm();
#line 2303 "cplus.met"
#line 2303 "cplus.met"
            {
#line 2303 "cplus.met"
                PPTREE _ptTree0=0;
#line 2303 "cplus.met"
                {
#line 2303 "cplus.met"
                    PPTREE _ptTree1=0,_ptRes1=0;
#line 2303 "cplus.met"
                    _ptRes1= MakeTree(TYP_REF, 1);
#line 2303 "cplus.met"
                    if ( (_ptTree1=NQUICK_CALL(_Tak(func_declarator)(error_free), 77, cplus))== (PPTREE) -1 ) {
#line 2303 "cplus.met"
                        MulFreeTree(4,_ptRes1,_ptTree1,_ptTree0,valTree);
                        PROG_EXIT(func_declarator_exit,"func_declarator")
#line 2303 "cplus.met"
                    }
#line 2303 "cplus.met"
                    ReplaceTree(_ptRes1, 1, _ptTree1);
#line 2303 "cplus.met"
                    _ptTree0=_ptRes1;
#line 2303 "cplus.met"
                }
#line 2303 "cplus.met"
                _retValue =_ptTree0;
#line 2303 "cplus.met"
                goto func_declarator_ret;
#line 2303 "cplus.met"
            }
#line 2303 "cplus.met"
            break;
#line 2303 "cplus.met"
#line 2304 "cplus.met"
        case TILD : 
#line 2304 "cplus.met"
#line 2304 "cplus.met"
            {
#line 2304 "cplus.met"
                PPTREE _ptTree0=0;
#line 2304 "cplus.met"
                if ( (_ptTree0=NQUICK_CALL(_Tak(qualified_name)(error_free), 116, cplus))== (PPTREE) -1 ) {
#line 2304 "cplus.met"
                    MulFreeTree(2,_ptTree0,valTree);
                    PROG_EXIT(func_declarator_exit,"func_declarator")
#line 2304 "cplus.met"
                }
#line 2304 "cplus.met"
                _retValue =_ptTree0;
#line 2304 "cplus.met"
                goto func_declarator_ret;
#line 2304 "cplus.met"
            }
#line 2304 "cplus.met"
            break;
#line 2304 "cplus.met"
#line 2305 "cplus.met"
        case META : 
#line 2305 "cplus.met"
        case IDENT : 
#line 2305 "cplus.met"
#line 2305 "cplus.met"
            {
#line 2305 "cplus.met"
                PPTREE _ptTree0=0;
#line 2305 "cplus.met"
                if ( (_ptTree0=NQUICK_CALL(_Tak(qualified_name)(error_free), 116, cplus))== (PPTREE) -1 ) {
#line 2305 "cplus.met"
                    MulFreeTree(2,_ptTree0,valTree);
                    PROG_EXIT(func_declarator_exit,"func_declarator")
#line 2305 "cplus.met"
                }
#line 2305 "cplus.met"
                _retValue =_ptTree0;
#line 2305 "cplus.met"
                goto func_declarator_ret;
#line 2305 "cplus.met"
            }
#line 2305 "cplus.met"
            break;
#line 2305 "cplus.met"
#line 2306 "cplus.met"
        case OPERATOR : 
#line 2306 "cplus.met"
#line 2306 "cplus.met"
            {
#line 2306 "cplus.met"
                PPTREE _ptTree0=0;
#line 2306 "cplus.met"
                if ( (_ptTree0=NQUICK_CALL(_Tak(operator_function_name)(error_free), 104, cplus))== (PPTREE) -1 ) {
#line 2306 "cplus.met"
                    MulFreeTree(2,_ptTree0,valTree);
                    PROG_EXIT(func_declarator_exit,"func_declarator")
#line 2306 "cplus.met"
                }
#line 2306 "cplus.met"
                _retValue =_ptTree0;
#line 2306 "cplus.met"
                goto func_declarator_ret;
#line 2306 "cplus.met"
            }
#line 2306 "cplus.met"
            break;
#line 2306 "cplus.met"
        default :
#line 2306 "cplus.met"
            MulFreeTree(1,valTree);
            CASE_EXIT(func_declarator_exit,"either * or & or ~ or IDENT or operator")
#line 2306 "cplus.met"
            break;
#line 2306 "cplus.met"
    }
#line 2306 "cplus.met"
#line 2306 "cplus.met"
#line 2307 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2307 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 2307 "cplus.met"
return((PPTREE) 0);
#line 2307 "cplus.met"

#line 2307 "cplus.met"
func_declarator_exit :
#line 2307 "cplus.met"

#line 2307 "cplus.met"
    _Debug = TRACE_RULE("func_declarator",TRACE_EXIT,(PPTREE)0);
#line 2307 "cplus.met"
    _funcLevel--;
#line 2307 "cplus.met"
    return((PPTREE) -1) ;
#line 2307 "cplus.met"

#line 2307 "cplus.met"
func_declarator_ret :
#line 2307 "cplus.met"
    
#line 2307 "cplus.met"
    _Debug = TRACE_RULE("func_declarator",TRACE_RETURN,_retValue);
#line 2307 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2307 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 2307 "cplus.met"
    return _retValue ;
#line 2307 "cplus.met"
}
#line 2307 "cplus.met"

#line 2307 "cplus.met"
