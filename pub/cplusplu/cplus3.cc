/*************************************************************************/
/*                                                                       */
/*        Produced by MetaGen version 2.0  -    1989-2006                 */
/*       Syntaxic Analyzer Meta Generator developped by                  */
/*                  Eric Lavillonniere                                   */
/*                                                                       */
/*************************************************************************/

#include "token.h"
#include "cplus.h"


#line 2705 "cplus.met"
PPTREE cplus::expression ( int error_free)
#line 2705 "cplus.met"
{
#line 2705 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 2705 "cplus.met"
    int _value,_nbPre = 0 ;
#line 2705 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 2705 "cplus.met"
    int _Debug = TRACE_RULE("expression",TRACE_ENTER,(PPTREE)0);
#line 2705 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 2705 "cplus.met"
#line 2705 "cplus.met"
    PPTREE _addlist1 = (PPTREE) 0;
#line 2705 "cplus.met"
#line 2705 "cplus.met"
    PPTREE expTree = (PPTREE) 0,list = (PPTREE) 0;
#line 2705 "cplus.met"
#line 2707 "cplus.met"
    if ( (expTree=NQUICK_CALL(_Tak(assignment_expression)(error_free), 20, cplus))== (PPTREE) -1 ) {
#line 2707 "cplus.met"
        MulFreeTree(3,_addlist1,expTree,list);
        PROG_EXIT(expression_exit,"expression")
#line 2707 "cplus.met"
    }
#line 2707 "cplus.met"
#line 2708 "cplus.met"
    if ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN( VIRG,",")){
#line 2708 "cplus.met"
#line 2709 "cplus.met"
#line 2710 "cplus.met"
        list =AddList(list ,expTree );
#line 2710 "cplus.met"
#line 2710 "cplus.met"
        _addlist1 = list ;
#line 2710 "cplus.met"
#line 2711 "cplus.met"
        while ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN(VIRG,",") && (tokenAhead = 0,CommTerm(),1)) { 
#line 2711 "cplus.met"
#line 2712 "cplus.met"
#line 2712 "cplus.met"
            {
#line 2712 "cplus.met"
                PPTREE _ptTree0=0;
#line 2712 "cplus.met"
                if ( (_ptTree0=NQUICK_CALL(_Tak(assignment_expression)(error_free), 20, cplus))== (PPTREE) -1 ) {
#line 2712 "cplus.met"
                    MulFreeTree(4,_ptTree0,_addlist1,expTree,list);
                    PROG_EXIT(expression_exit,"expression")
#line 2712 "cplus.met"
                }
#line 2712 "cplus.met"
                _addlist1 =AddList(_addlist1 , _ptTree0);
#line 2712 "cplus.met"
            }
#line 2712 "cplus.met"
#line 2712 "cplus.met"
            if (list){
#line 2712 "cplus.met"
#line 2712 "cplus.met"
                _addlist1 = SonTree (_addlist1 ,2 );
#line 2712 "cplus.met"
            } else {
#line 2712 "cplus.met"
#line 2712 "cplus.met"
                list = _addlist1 ;
#line 2712 "cplus.met"
            }
#line 2712 "cplus.met"
        } 
#line 2712 "cplus.met"
#line 2713 "cplus.met"
        {
#line 2713 "cplus.met"
            PPTREE _ptTree0=0;
#line 2713 "cplus.met"
            {
#line 2713 "cplus.met"
                PPTREE _ptRes1=0;
#line 2713 "cplus.met"
                _ptRes1= MakeTree(EXP_SEQ, 1);
#line 2713 "cplus.met"
                ReplaceTree(_ptRes1, 1, list );
#line 2713 "cplus.met"
                _ptTree0=_ptRes1;
#line 2713 "cplus.met"
            }
#line 2713 "cplus.met"
            _retValue =_ptTree0;
#line 2713 "cplus.met"
            goto expression_ret;
#line 2713 "cplus.met"
        }
#line 2713 "cplus.met"
#line 2713 "cplus.met"
#line 2713 "cplus.met"
    } else {
#line 2713 "cplus.met"
#line 2716 "cplus.met"
        {
#line 2716 "cplus.met"
            _retValue = expTree ;
#line 2716 "cplus.met"
            goto expression_ret;
#line 2716 "cplus.met"
            
#line 2716 "cplus.met"
        }
#line 2716 "cplus.met"
    }
#line 2716 "cplus.met"
#line 2716 "cplus.met"
#line 2716 "cplus.met"

#line 2717 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2717 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 2717 "cplus.met"
return((PPTREE) 0);
#line 2717 "cplus.met"

#line 2717 "cplus.met"
expression_exit :
#line 2717 "cplus.met"

#line 2717 "cplus.met"
    _Debug = TRACE_RULE("expression",TRACE_EXIT,(PPTREE)0);
#line 2717 "cplus.met"
    _funcLevel--;
#line 2717 "cplus.met"
    return((PPTREE) -1) ;
#line 2717 "cplus.met"

#line 2717 "cplus.met"
expression_ret :
#line 2717 "cplus.met"
    
#line 2717 "cplus.met"
    _Debug = TRACE_RULE("expression",TRACE_RETURN,_retValue);
#line 2717 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2717 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 2717 "cplus.met"
    return _retValue ;
#line 2717 "cplus.met"
}
#line 2717 "cplus.met"

#line 2717 "cplus.met"
#line 3449 "cplus.met"
PPTREE cplus::expression_for ( int error_free)
#line 3449 "cplus.met"
{
#line 3449 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 3449 "cplus.met"
    int _value,_nbPre = 0 ;
#line 3449 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 3449 "cplus.met"
    int _Debug = TRACE_RULE("expression_for",TRACE_ENTER,(PPTREE)0);
#line 3449 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 3449 "cplus.met"
#line 3449 "cplus.met"
    PPTREE retTree = (PPTREE) 0;
#line 3449 "cplus.met"
#line 3451 "cplus.met"
    if ( (retTree=NQUICK_CALL(_Tak(expression)(error_free), 66, cplus))== (PPTREE) -1 ) {
#line 3451 "cplus.met"
        MulFreeTree(1,retTree);
        PROG_EXIT(expression_for_exit,"expression_for")
#line 3451 "cplus.met"
    }
#line 3451 "cplus.met"
#line 3452 "cplus.met"
    if (! ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN( PVIR,";"))){
#line 3452 "cplus.met"
#line 3453 "cplus.met"
        
#line 3453 "cplus.met"
        MulFreeTree(1,retTree);
        LEX_EXIT ("",0);
#line 3453 "cplus.met"
        goto expression_for_exit;
#line 3453 "cplus.met"
#line 3453 "cplus.met"
    }
#line 3453 "cplus.met"
#line 3454 "cplus.met"
    {
#line 3454 "cplus.met"
        _retValue = retTree ;
#line 3454 "cplus.met"
        goto expression_for_ret;
#line 3454 "cplus.met"
        
#line 3454 "cplus.met"
    }
#line 3454 "cplus.met"
#line 3454 "cplus.met"
#line 3454 "cplus.met"

#line 3455 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 3455 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 3455 "cplus.met"
return((PPTREE) 0);
#line 3455 "cplus.met"

#line 3455 "cplus.met"
expression_for_exit :
#line 3455 "cplus.met"

#line 3455 "cplus.met"
    _Debug = TRACE_RULE("expression_for",TRACE_EXIT,(PPTREE)0);
#line 3455 "cplus.met"
    _funcLevel--;
#line 3455 "cplus.met"
    return((PPTREE) -1) ;
#line 3455 "cplus.met"

#line 3455 "cplus.met"
expression_for_ret :
#line 3455 "cplus.met"
    
#line 3455 "cplus.met"
    _Debug = TRACE_RULE("expression_for",TRACE_RETURN,_retValue);
#line 3455 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 3455 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 3455 "cplus.met"
    return _retValue ;
#line 3455 "cplus.met"
}
#line 3455 "cplus.met"

#line 3455 "cplus.met"
#line 1139 "cplus.met"
PPTREE cplus::ext_all ( int error_free)
#line 1139 "cplus.met"
{
#line 1139 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 1139 "cplus.met"
    int _value,_nbPre = 0 ;
#line 1139 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 1139 "cplus.met"
    int _Debug = TRACE_RULE("ext_all",TRACE_ENTER,(PPTREE)0);
#line 1139 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 1139 "cplus.met"
#line 1139 "cplus.met"
    PPTREE retTree = (PPTREE) 0;
#line 1139 "cplus.met"
#line 1141 "cplus.met"
    if (NPUSH_CALL_AFF_VERIF(retTree = ,_Tak(ext_all_no_linkage), 70, cplus)){
#line 1141 "cplus.met"
#line 1142 "cplus.met"
        {
#line 1142 "cplus.met"
            _retValue = retTree ;
#line 1142 "cplus.met"
            goto ext_all_ret;
#line 1142 "cplus.met"
            
#line 1142 "cplus.met"
        }
#line 1142 "cplus.met"
    } else {
#line 1142 "cplus.met"
#line 1144 "cplus.met"
        {
#line 1144 "cplus.met"
            PPTREE _ptTree0=0;
#line 1144 "cplus.met"
            if ( (_ptTree0=NQUICK_CALL(_Tak(linkage_specification)(error_free), 92, cplus))== (PPTREE) -1 ) {
#line 1144 "cplus.met"
                MulFreeTree(2,_ptTree0,retTree);
                PROG_EXIT(ext_all_exit,"ext_all")
#line 1144 "cplus.met"
            }
#line 1144 "cplus.met"
            _retValue =_ptTree0;
#line 1144 "cplus.met"
            goto ext_all_ret;
#line 1144 "cplus.met"
        }
#line 1144 "cplus.met"
    }
#line 1144 "cplus.met"
#line 1144 "cplus.met"
#line 1144 "cplus.met"

#line 1145 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1145 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 1145 "cplus.met"
return((PPTREE) 0);
#line 1145 "cplus.met"

#line 1145 "cplus.met"
ext_all_exit :
#line 1145 "cplus.met"

#line 1145 "cplus.met"
    _Debug = TRACE_RULE("ext_all",TRACE_EXIT,(PPTREE)0);
#line 1145 "cplus.met"
    _funcLevel--;
#line 1145 "cplus.met"
    return((PPTREE) -1) ;
#line 1145 "cplus.met"

#line 1145 "cplus.met"
ext_all_ret :
#line 1145 "cplus.met"
    
#line 1145 "cplus.met"
    _Debug = TRACE_RULE("ext_all",TRACE_RETURN,_retValue);
#line 1145 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1145 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 1145 "cplus.met"
    return _retValue ;
#line 1145 "cplus.met"
}
#line 1145 "cplus.met"

#line 1145 "cplus.met"
#line 1147 "cplus.met"
PPTREE cplus::ext_all_ext ( int error_free)
#line 1147 "cplus.met"
{
#line 1147 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 1147 "cplus.met"
    int _value,_nbPre = 0 ;
#line 1147 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 1147 "cplus.met"
    int _Debug = TRACE_RULE("ext_all_ext",TRACE_ENTER,(PPTREE)0);
#line 1147 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 1147 "cplus.met"
#line 1147 "cplus.met"
    PPTREE retTree = (PPTREE) 0;
#line 1147 "cplus.met"
#line 1149 "cplus.met"
    if (! (NPUSH_CALL_AFF_VERIF(retTree = ,_Tak(protect_declare), 118, cplus))){
#line 1149 "cplus.met"
#line 1150 "cplus.met"
        if ( (retTree=NQUICK_CALL(_Tak(ext_all)(error_free), 68, cplus))== (PPTREE) -1 ) {
#line 1150 "cplus.met"
            MulFreeTree(1,retTree);
            PROG_EXIT(ext_all_ext_exit,"ext_all_ext")
#line 1150 "cplus.met"
        }
#line 1150 "cplus.met"
    }
#line 1150 "cplus.met"
#line 1151 "cplus.met"
    {
#line 1151 "cplus.met"
        _retValue = retTree ;
#line 1151 "cplus.met"
        goto ext_all_ext_ret;
#line 1151 "cplus.met"
        
#line 1151 "cplus.met"
    }
#line 1151 "cplus.met"
#line 1151 "cplus.met"
#line 1151 "cplus.met"

#line 1152 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1152 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 1152 "cplus.met"
return((PPTREE) 0);
#line 1152 "cplus.met"

#line 1152 "cplus.met"
ext_all_ext_exit :
#line 1152 "cplus.met"

#line 1152 "cplus.met"
    _Debug = TRACE_RULE("ext_all_ext",TRACE_EXIT,(PPTREE)0);
#line 1152 "cplus.met"
    _funcLevel--;
#line 1152 "cplus.met"
    return((PPTREE) -1) ;
#line 1152 "cplus.met"

#line 1152 "cplus.met"
ext_all_ext_ret :
#line 1152 "cplus.met"
    
#line 1152 "cplus.met"
    _Debug = TRACE_RULE("ext_all_ext",TRACE_RETURN,_retValue);
#line 1152 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1152 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 1152 "cplus.met"
    return _retValue ;
#line 1152 "cplus.met"
}
#line 1152 "cplus.met"

#line 1152 "cplus.met"
#line 1119 "cplus.met"
PPTREE cplus::ext_all_no_linkage ( int error_free)
#line 1119 "cplus.met"
{
#line 1119 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 1119 "cplus.met"
    int _value,_nbPre = 0 ;
#line 1119 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 1119 "cplus.met"
    int _Debug = TRACE_RULE("ext_all_no_linkage",TRACE_ENTER,(PPTREE)0);
#line 1119 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 1119 "cplus.met"
#line 1119 "cplus.met"
    PPTREE _addlist1 = (PPTREE) 0;
#line 1119 "cplus.met"
#line 1119 "cplus.met"
    PPTREE decl = (PPTREE) 0,listTemp = (PPTREE) 0;
#line 1119 "cplus.met"
#line 1121 "cplus.met"
    if ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN(TEMPLATE,"template") && (tokenAhead = 0,CommTerm(),1)){
#line 1121 "cplus.met"
#line 1122 "cplus.met"
#line 1123 "cplus.met"
        (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 1123 "cplus.met"
        if (  !SEE_TOKEN( INFE,"<") || !(CommTerm(),1)) {
#line 1123 "cplus.met"
            MulFreeTree(3,_addlist1,decl,listTemp);
            TOKEN_EXIT(ext_all_no_linkage_exit,"<")
#line 1123 "cplus.met"
        } else {
#line 1123 "cplus.met"
            tokenAhead = 0 ;
#line 1123 "cplus.met"
        }
#line 1123 "cplus.met"
#line 1123 "cplus.met"
        _addlist1 = listTemp ;
#line 1123 "cplus.met"
#line 1124 "cplus.met"
        do {
#line 1124 "cplus.met"
#line 1125 "cplus.met"
            (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 1125 "cplus.met"
            switch( lexEl.Value) {
#line 1125 "cplus.met"
#line 1126 "cplus.met"
                case CLASS : 
#line 1126 "cplus.met"
                    tokenAhead = 0 ;
#line 1126 "cplus.met"
                    CommTerm();
#line 1126 "cplus.met"
#line 1126 "cplus.met"
#line 1126 "cplus.met"
                    {
#line 1126 "cplus.met"
                        PPTREE _ptTree0=0;
#line 1126 "cplus.met"
                        {
#line 1126 "cplus.met"
                            PPTREE _ptTree1=0,_ptRes1=0;
#line 1126 "cplus.met"
                            _ptRes1= MakeTree(CLASS_PARAM, 1);
#line 1126 "cplus.met"
                            if ( (_ptTree1=NQUICK_CALL(_Tak(arg_declarator_type)(error_free), 13, cplus))== (PPTREE) -1 ) {
#line 1126 "cplus.met"
                                MulFreeTree(6,_ptRes1,_ptTree1,_ptTree0,_addlist1,decl,listTemp);
                                PROG_EXIT(ext_all_no_linkage_exit,"ext_all_no_linkage")
#line 1126 "cplus.met"
                            }
#line 1126 "cplus.met"
                            ReplaceTree(_ptRes1, 1, _ptTree1);
#line 1126 "cplus.met"
                            _ptTree0=_ptRes1;
#line 1126 "cplus.met"
                        }
#line 1126 "cplus.met"
                        _addlist1 =AddList(_addlist1 , _ptTree0);
#line 1126 "cplus.met"
                    }
#line 1126 "cplus.met"
#line 1126 "cplus.met"
                    if (listTemp){
#line 1126 "cplus.met"
#line 1126 "cplus.met"
                        _addlist1 = SonTree (_addlist1 ,2 );
#line 1126 "cplus.met"
                    } else {
#line 1126 "cplus.met"
#line 1126 "cplus.met"
                        listTemp = _addlist1 ;
#line 1126 "cplus.met"
                    }
#line 1126 "cplus.met"
                    break;
#line 1126 "cplus.met"
#line 1127 "cplus.met"
                default : 
#line 1127 "cplus.met"
#line 1127 "cplus.met"
#line 1127 "cplus.met"
                    {
#line 1127 "cplus.met"
                        PPTREE _ptTree0=0;
#line 1127 "cplus.met"
                        if ( (_ptTree0=NQUICK_CALL(_Tak(arg_declarator_type)(error_free), 13, cplus))== (PPTREE) -1 ) {
#line 1127 "cplus.met"
                            MulFreeTree(4,_ptTree0,_addlist1,decl,listTemp);
                            PROG_EXIT(ext_all_no_linkage_exit,"ext_all_no_linkage")
#line 1127 "cplus.met"
                        }
#line 1127 "cplus.met"
                        _addlist1 =AddList(_addlist1 , _ptTree0);
#line 1127 "cplus.met"
                    }
#line 1127 "cplus.met"
#line 1127 "cplus.met"
                    if (listTemp){
#line 1127 "cplus.met"
#line 1127 "cplus.met"
                        _addlist1 = SonTree (_addlist1 ,2 );
#line 1127 "cplus.met"
                    } else {
#line 1127 "cplus.met"
#line 1127 "cplus.met"
                        listTemp = _addlist1 ;
#line 1127 "cplus.met"
                    }
#line 1127 "cplus.met"
                    break;
#line 1127 "cplus.met"
            }
#line 1127 "cplus.met"
#line 1127 "cplus.met"
#line 1129 "cplus.met"
        } while ( !(! ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN(VIRG,",") && (tokenAhead = 0,CommTerm(),1)))) ;
#line 1129 "cplus.met"
#line 1130 "cplus.met"
        (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 1130 "cplus.met"
        if (  !SEE_TOKEN( SUPE,">") || !(CommTerm(),1)) {
#line 1130 "cplus.met"
            MulFreeTree(3,_addlist1,decl,listTemp);
            TOKEN_EXIT(ext_all_no_linkage_exit,">")
#line 1130 "cplus.met"
        } else {
#line 1130 "cplus.met"
            tokenAhead = 0 ;
#line 1130 "cplus.met"
        }
#line 1130 "cplus.met"
#line 1131 "cplus.met"
        {
#line 1131 "cplus.met"
            PPTREE _ptTree0=0;
#line 1131 "cplus.met"
            {
#line 1131 "cplus.met"
                PPTREE _ptTree1=0,_ptRes1=0;
#line 1131 "cplus.met"
                _ptRes1= MakeTree(TEMPLATE_DECL, 2);
#line 1131 "cplus.met"
                ReplaceTree(_ptRes1, 1, listTemp );
#line 1131 "cplus.met"
                if ( (_ptTree1=NQUICK_CALL(_Tak(ext_all_no_linkage)(error_free), 70, cplus))== (PPTREE) -1 ) {
#line 1131 "cplus.met"
                    MulFreeTree(6,_ptRes1,_ptTree1,_ptTree0,_addlist1,decl,listTemp);
                    PROG_EXIT(ext_all_no_linkage_exit,"ext_all_no_linkage")
#line 1131 "cplus.met"
                }
#line 1131 "cplus.met"
                ReplaceTree(_ptRes1, 2, _ptTree1);
#line 1131 "cplus.met"
                _ptTree0=_ptRes1;
#line 1131 "cplus.met"
            }
#line 1131 "cplus.met"
            _retValue =_ptTree0;
#line 1131 "cplus.met"
            goto ext_all_no_linkage_ret;
#line 1131 "cplus.met"
        }
#line 1131 "cplus.met"
#line 1131 "cplus.met"
#line 1131 "cplus.met"
    }
#line 1131 "cplus.met"
#line 1133 "cplus.met"
    if (((((NPUSH_CALL_AFF_VERIF(decl = ,_Tak(ext_data_declaration), 75, cplus)) || 
#line 1133 "cplus.met"
          (NPUSH_CALL_AFF_VERIF(decl = ,_Tak(func_declaration), 80, cplus))) || 
#line 1133 "cplus.met"
         (NPUSH_CALL_AFF_VERIF(decl = ,_Tak(ext_decl_dir), 76, cplus))) || 
#line 1133 "cplus.met"
        (NPUSH_CALL_AFF_VERIF(decl = ,_Tak(asm_declaration), 18, cplus))) || 
#line 1133 "cplus.met"
       (NPUSH_CALL_AFF_VERIF(decl = ,_Tak(protected_array_declaration), 119, cplus))){
#line 1133 "cplus.met"
#line 1134 "cplus.met"
        {
#line 1134 "cplus.met"
            _retValue = decl ;
#line 1134 "cplus.met"
            goto ext_all_no_linkage_ret;
#line 1134 "cplus.met"
            
#line 1134 "cplus.met"
        }
#line 1134 "cplus.met"
    } else {
#line 1134 "cplus.met"
#line 1136 "cplus.met"
        {
#line 1136 "cplus.met"
            PPTREE _ptTree0=0;
#line 1136 "cplus.met"
            if ( (_ptTree0=NQUICK_CALL(_Tak(func_declaration)(error_free), 80, cplus))== (PPTREE) -1 ) {
#line 1136 "cplus.met"
                MulFreeTree(4,_ptTree0,_addlist1,decl,listTemp);
                PROG_EXIT(ext_all_no_linkage_exit,"ext_all_no_linkage")
#line 1136 "cplus.met"
            }
#line 1136 "cplus.met"
            _retValue =_ptTree0;
#line 1136 "cplus.met"
            goto ext_all_no_linkage_ret;
#line 1136 "cplus.met"
        }
#line 1136 "cplus.met"
    }
#line 1136 "cplus.met"
#line 1136 "cplus.met"
#line 1136 "cplus.met"

#line 1137 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1137 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 1137 "cplus.met"
return((PPTREE) 0);
#line 1137 "cplus.met"

#line 1137 "cplus.met"
ext_all_no_linkage_exit :
#line 1137 "cplus.met"

#line 1137 "cplus.met"
    _Debug = TRACE_RULE("ext_all_no_linkage",TRACE_EXIT,(PPTREE)0);
#line 1137 "cplus.met"
    _funcLevel--;
#line 1137 "cplus.met"
    return((PPTREE) -1) ;
#line 1137 "cplus.met"

#line 1137 "cplus.met"
ext_all_no_linkage_ret :
#line 1137 "cplus.met"
    
#line 1137 "cplus.met"
    _Debug = TRACE_RULE("ext_all_no_linkage",TRACE_RETURN,_retValue);
#line 1137 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1137 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 1137 "cplus.met"
    return _retValue ;
#line 1137 "cplus.met"
}
#line 1137 "cplus.met"

#line 1137 "cplus.met"
#line 1623 "cplus.met"
PPTREE cplus::ext_data_decl_sc_ty ( int error_free)
#line 1623 "cplus.met"
{
#line 1623 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 1623 "cplus.met"
    int _value,_nbPre = 0 ;
#line 1623 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 1623 "cplus.met"
    int _Debug = TRACE_RULE("ext_data_decl_sc_ty",TRACE_ENTER,(PPTREE)0);
#line 1623 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 1623 "cplus.met"
#line 1623 "cplus.met"
    PPTREE retTree = (PPTREE) 0;
#line 1623 "cplus.met"
#line 1625 "cplus.met"
    if (! (NPUSH_CALL_AFF_VERIF(retTree = ,_Tak(ext_data_decl_sc_ty_full), 72, cplus))){
#line 1625 "cplus.met"
#line 1626 "cplus.met"
        if ( (retTree=NQUICK_CALL(_Tak(ext_data_decl_sc_ty_short)(error_free), 73, cplus))== (PPTREE) -1 ) {
#line 1626 "cplus.met"
            MulFreeTree(1,retTree);
            PROG_EXIT(ext_data_decl_sc_ty_exit,"ext_data_decl_sc_ty")
#line 1626 "cplus.met"
        }
#line 1626 "cplus.met"
    }
#line 1626 "cplus.met"
#line 1627 "cplus.met"
    {
#line 1627 "cplus.met"
        _retValue = retTree ;
#line 1627 "cplus.met"
        goto ext_data_decl_sc_ty_ret;
#line 1627 "cplus.met"
        
#line 1627 "cplus.met"
    }
#line 1627 "cplus.met"
#line 1627 "cplus.met"
#line 1627 "cplus.met"

#line 1628 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1628 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 1628 "cplus.met"
return((PPTREE) 0);
#line 1628 "cplus.met"

#line 1628 "cplus.met"
ext_data_decl_sc_ty_exit :
#line 1628 "cplus.met"

#line 1628 "cplus.met"
    _Debug = TRACE_RULE("ext_data_decl_sc_ty",TRACE_EXIT,(PPTREE)0);
#line 1628 "cplus.met"
    _funcLevel--;
#line 1628 "cplus.met"
    return((PPTREE) -1) ;
#line 1628 "cplus.met"

#line 1628 "cplus.met"
ext_data_decl_sc_ty_ret :
#line 1628 "cplus.met"
    
#line 1628 "cplus.met"
    _Debug = TRACE_RULE("ext_data_decl_sc_ty",TRACE_RETURN,_retValue);
#line 1628 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1628 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 1628 "cplus.met"
    return _retValue ;
#line 1628 "cplus.met"
}
#line 1628 "cplus.met"

#line 1628 "cplus.met"
#line 1604 "cplus.met"
PPTREE cplus::ext_data_decl_sc_ty_full ( int error_free)
#line 1604 "cplus.met"
{
#line 1604 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 1604 "cplus.met"
    int _value,_nbPre = 0 ;
#line 1604 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 1604 "cplus.met"
    int _Debug = TRACE_RULE("ext_data_decl_sc_ty_full",TRACE_ENTER,(PPTREE)0);
#line 1604 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 1604 "cplus.met"
#line 1604 "cplus.met"
    PPTREE retTree = (PPTREE) 0;
#line 1604 "cplus.met"
#line 1606 "cplus.met"
    {
#line 1606 "cplus.met"
        PPTREE _ptRes0=0;
#line 1606 "cplus.met"
        _ptRes0= MakeTree(DECLARATION, 3);
#line 1606 "cplus.met"
        retTree=_ptRes0;
#line 1606 "cplus.met"
    }
#line 1606 "cplus.met"
#line 1607 "cplus.met"
    {
#line 1607 "cplus.met"
        PPTREE _ptTree0=0;
#line 1607 "cplus.met"
        if ( (_ptTree0=NQUICK_CALL(_Tak(sc_specifier)(error_free), 131, cplus))== (PPTREE) -1 ) {
#line 1607 "cplus.met"
            MulFreeTree(2,_ptTree0,retTree);
            PROG_EXIT(ext_data_decl_sc_ty_full_exit,"ext_data_decl_sc_ty_full")
#line 1607 "cplus.met"
        }
#line 1607 "cplus.met"
        ReplaceTree(retTree , 1 , _ptTree0);
#line 1607 "cplus.met"
    }
#line 1607 "cplus.met"
#line 1608 "cplus.met"
    {
#line 1608 "cplus.met"
        PPTREE _ptTree0=0;
#line 1608 "cplus.met"
        if ( (_ptTree0=NQUICK_CALL(_Tak(type_specifier)(error_free), 153, cplus))== (PPTREE) -1 ) {
#line 1608 "cplus.met"
            MulFreeTree(2,_ptTree0,retTree);
            PROG_EXIT(ext_data_decl_sc_ty_full_exit,"ext_data_decl_sc_ty_full")
#line 1608 "cplus.met"
        }
#line 1608 "cplus.met"
        ReplaceTree(retTree , 2 , _ptTree0);
#line 1608 "cplus.met"
    }
#line 1608 "cplus.met"
#line 1609 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 1609 "cplus.met"
    if (  !SEE_TOKEN( PVIR,";") || !(CommTerm(),1)) {
#line 1609 "cplus.met"
        MulFreeTree(1,retTree);
        TOKEN_EXIT(ext_data_decl_sc_ty_full_exit,";")
#line 1609 "cplus.met"
    } else {
#line 1609 "cplus.met"
        tokenAhead = 0 ;
#line 1609 "cplus.met"
    }
#line 1609 "cplus.met"
#line 1610 "cplus.met"
    {
#line 1610 "cplus.met"
        _retValue = retTree ;
#line 1610 "cplus.met"
        goto ext_data_decl_sc_ty_full_ret;
#line 1610 "cplus.met"
        
#line 1610 "cplus.met"
    }
#line 1610 "cplus.met"
#line 1610 "cplus.met"
#line 1610 "cplus.met"

#line 1611 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1611 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 1611 "cplus.met"
return((PPTREE) 0);
#line 1611 "cplus.met"

#line 1611 "cplus.met"
ext_data_decl_sc_ty_full_exit :
#line 1611 "cplus.met"

#line 1611 "cplus.met"
    _Debug = TRACE_RULE("ext_data_decl_sc_ty_full",TRACE_EXIT,(PPTREE)0);
#line 1611 "cplus.met"
    _funcLevel--;
#line 1611 "cplus.met"
    return((PPTREE) -1) ;
#line 1611 "cplus.met"

#line 1611 "cplus.met"
ext_data_decl_sc_ty_full_ret :
#line 1611 "cplus.met"
    
#line 1611 "cplus.met"
    _Debug = TRACE_RULE("ext_data_decl_sc_ty_full",TRACE_RETURN,_retValue);
#line 1611 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1611 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 1611 "cplus.met"
    return _retValue ;
#line 1611 "cplus.met"
}
#line 1611 "cplus.met"

#line 1611 "cplus.met"
#line 1614 "cplus.met"
PPTREE cplus::ext_data_decl_sc_ty_short ( int error_free)
#line 1614 "cplus.met"
{
#line 1614 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 1614 "cplus.met"
    int _value,_nbPre = 0 ;
#line 1614 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 1614 "cplus.met"
    int _Debug = TRACE_RULE("ext_data_decl_sc_ty_short",TRACE_ENTER,(PPTREE)0);
#line 1614 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 1614 "cplus.met"
#line 1614 "cplus.met"
    PPTREE retTree = (PPTREE) 0;
#line 1614 "cplus.met"
#line 1616 "cplus.met"
    {
#line 1616 "cplus.met"
        PPTREE _ptRes0=0;
#line 1616 "cplus.met"
        _ptRes0= MakeTree(DECLARATION, 3);
#line 1616 "cplus.met"
        retTree=_ptRes0;
#line 1616 "cplus.met"
    }
#line 1616 "cplus.met"
#line 1617 "cplus.met"
    {
#line 1617 "cplus.met"
        PPTREE _ptTree0=0;
#line 1617 "cplus.met"
        if ( (_ptTree0=NQUICK_CALL(_Tak(type_specifier)(error_free), 153, cplus))== (PPTREE) -1 ) {
#line 1617 "cplus.met"
            MulFreeTree(2,_ptTree0,retTree);
            PROG_EXIT(ext_data_decl_sc_ty_short_exit,"ext_data_decl_sc_ty_short")
#line 1617 "cplus.met"
        }
#line 1617 "cplus.met"
        ReplaceTree(retTree , 2 , _ptTree0);
#line 1617 "cplus.met"
    }
#line 1617 "cplus.met"
#line 1618 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 1618 "cplus.met"
    if (  !SEE_TOKEN( PVIR,";") || !(CommTerm(),1)) {
#line 1618 "cplus.met"
        MulFreeTree(1,retTree);
        TOKEN_EXIT(ext_data_decl_sc_ty_short_exit,";")
#line 1618 "cplus.met"
    } else {
#line 1618 "cplus.met"
        tokenAhead = 0 ;
#line 1618 "cplus.met"
    }
#line 1618 "cplus.met"
#line 1619 "cplus.met"
    {
#line 1619 "cplus.met"
        _retValue = retTree ;
#line 1619 "cplus.met"
        goto ext_data_decl_sc_ty_short_ret;
#line 1619 "cplus.met"
        
#line 1619 "cplus.met"
    }
#line 1619 "cplus.met"
#line 1619 "cplus.met"
#line 1619 "cplus.met"

#line 1620 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1620 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 1620 "cplus.met"
return((PPTREE) 0);
#line 1620 "cplus.met"

#line 1620 "cplus.met"
ext_data_decl_sc_ty_short_exit :
#line 1620 "cplus.met"

#line 1620 "cplus.met"
    _Debug = TRACE_RULE("ext_data_decl_sc_ty_short",TRACE_EXIT,(PPTREE)0);
#line 1620 "cplus.met"
    _funcLevel--;
#line 1620 "cplus.met"
    return((PPTREE) -1) ;
#line 1620 "cplus.met"

#line 1620 "cplus.met"
ext_data_decl_sc_ty_short_ret :
#line 1620 "cplus.met"
    
#line 1620 "cplus.met"
    _Debug = TRACE_RULE("ext_data_decl_sc_ty_short",TRACE_RETURN,_retValue);
#line 1620 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1620 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 1620 "cplus.met"
    return _retValue ;
#line 1620 "cplus.met"
}
#line 1620 "cplus.met"

#line 1620 "cplus.met"
#line 1630 "cplus.met"
PPTREE cplus::ext_data_decl_simp ( int error_free)
#line 1630 "cplus.met"
{
#line 1630 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 1630 "cplus.met"
    int _value,_nbPre = 0 ;
#line 1630 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 1630 "cplus.met"
    int _Debug = TRACE_RULE("ext_data_decl_simp",TRACE_ENTER,(PPTREE)0);
#line 1630 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 1630 "cplus.met"
#line 1630 "cplus.met"
    PPTREE retTree = (PPTREE) 0;
#line 1630 "cplus.met"
#line 1632 "cplus.met"
    if ((! (NPUSH_CALL_AFF_VERIF(retTree = ,_Tak(data_declaration), 44, cplus))) && 
#line 1632 "cplus.met"
       (! (NPUSH_CALL_AFF_VERIF(retTree = ,_Tak(inline_namespace), 86, cplus)))){
#line 1632 "cplus.met"
#line 1633 "cplus.met"
        if ( (retTree=NQUICK_CALL(_Tak(ext_data_decl_sc_ty)(error_free), 71, cplus))== (PPTREE) -1 ) {
#line 1633 "cplus.met"
            MulFreeTree(1,retTree);
            PROG_EXIT(ext_data_decl_simp_exit,"ext_data_decl_simp")
#line 1633 "cplus.met"
        }
#line 1633 "cplus.met"
    }
#line 1633 "cplus.met"
#line 1634 "cplus.met"
    {
#line 1634 "cplus.met"
        _retValue = retTree ;
#line 1634 "cplus.met"
        goto ext_data_decl_simp_ret;
#line 1634 "cplus.met"
        
#line 1634 "cplus.met"
    }
#line 1634 "cplus.met"
#line 1634 "cplus.met"
#line 1634 "cplus.met"

#line 1635 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1635 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 1635 "cplus.met"
return((PPTREE) 0);
#line 1635 "cplus.met"

#line 1635 "cplus.met"
ext_data_decl_simp_exit :
#line 1635 "cplus.met"

#line 1635 "cplus.met"
    _Debug = TRACE_RULE("ext_data_decl_simp",TRACE_EXIT,(PPTREE)0);
#line 1635 "cplus.met"
    _funcLevel--;
#line 1635 "cplus.met"
    return((PPTREE) -1) ;
#line 1635 "cplus.met"

#line 1635 "cplus.met"
ext_data_decl_simp_ret :
#line 1635 "cplus.met"
    
#line 1635 "cplus.met"
    _Debug = TRACE_RULE("ext_data_decl_simp",TRACE_RETURN,_retValue);
#line 1635 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1635 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 1635 "cplus.met"
    return _retValue ;
#line 1635 "cplus.met"
}
#line 1635 "cplus.met"

#line 1635 "cplus.met"
#line 1650 "cplus.met"
PPTREE cplus::ext_data_declaration ( int error_free)
#line 1650 "cplus.met"
{
#line 1650 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 1650 "cplus.met"
    int _value,_nbPre = 0 ;
#line 1650 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 1650 "cplus.met"
    int _Debug = TRACE_RULE("ext_data_declaration",TRACE_ENTER,(PPTREE)0);
#line 1650 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 1650 "cplus.met"
#line 1650 "cplus.met"
    PPTREE retTree = (PPTREE) 0;
#line 1650 "cplus.met"
#line 1652 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 1652 "cplus.met"
    switch( lexEl.Value) {
#line 1652 "cplus.met"
#line 1653 "cplus.met"
        case TYPEDEF : 
#line 1653 "cplus.met"
            tokenAhead = 0 ;
#line 1653 "cplus.met"
            CommTerm();
#line 1653 "cplus.met"
#line 1654 "cplus.met"
#line 1655 "cplus.met"
            if (! (NPUSH_CALL_AFF_VERIF(retTree = ,_Tak(typedef_and_declarator), 155, cplus))){
#line 1655 "cplus.met"
#line 1656 "cplus.met"
                {
#line 1656 "cplus.met"
                    PPTREE _ptTree0=0,_ptRes0=0;
#line 1656 "cplus.met"
                    _ptRes0= MakeTree(TYPEDEF, 2);
#line 1656 "cplus.met"
                    if ( (_ptTree0=NQUICK_CALL(_Tak(declarator_list)(error_free), 52, cplus))== (PPTREE) -1 ) {
#line 1656 "cplus.met"
                        MulFreeTree(3,_ptRes0,_ptTree0,retTree);
                        PROG_EXIT(ext_data_declaration_exit,"ext_data_declaration")
#line 1656 "cplus.met"
                    }
#line 1656 "cplus.met"
                    ReplaceTree(_ptRes0, 2, _ptTree0);
#line 1656 "cplus.met"
                    retTree=_ptRes0;
#line 1656 "cplus.met"
                }
#line 1656 "cplus.met"
            }
#line 1656 "cplus.met"
#line 1657 "cplus.met"
            (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 1657 "cplus.met"
            if (  !SEE_TOKEN( PVIR,";") || !(CommTerm(),1)) {
#line 1657 "cplus.met"
                MulFreeTree(1,retTree);
                TOKEN_EXIT(ext_data_declaration_exit,";")
#line 1657 "cplus.met"
            } else {
#line 1657 "cplus.met"
                tokenAhead = 0 ;
#line 1657 "cplus.met"
            }
#line 1657 "cplus.met"
#line 1658 "cplus.met"
            {
#line 1658 "cplus.met"
                _retValue = retTree ;
#line 1658 "cplus.met"
                goto ext_data_declaration_ret;
#line 1658 "cplus.met"
                
#line 1658 "cplus.met"
            }
#line 1658 "cplus.met"
#line 1658 "cplus.met"
            break;
#line 1658 "cplus.met"
#line 1660 "cplus.met"
        case NAMESPACE : 
#line 1660 "cplus.met"
#line 1660 "cplus.met"
            {
#line 1660 "cplus.met"
                PPTREE _ptTree0=0;
#line 1660 "cplus.met"
                if ( (_ptTree0=NQUICK_CALL(_Tak(name_space)(error_free), 102, cplus))== (PPTREE) -1 ) {
#line 1660 "cplus.met"
                    MulFreeTree(2,_ptTree0,retTree);
                    PROG_EXIT(ext_data_declaration_exit,"ext_data_declaration")
#line 1660 "cplus.met"
                }
#line 1660 "cplus.met"
                _retValue =_ptTree0;
#line 1660 "cplus.met"
                goto ext_data_declaration_ret;
#line 1660 "cplus.met"
            }
#line 1660 "cplus.met"
            break;
#line 1660 "cplus.met"
#line 1661 "cplus.met"
        case USING : 
#line 1661 "cplus.met"
#line 1661 "cplus.met"
            {
#line 1661 "cplus.met"
                PPTREE _ptTree0=0;
#line 1661 "cplus.met"
                if ( (_ptTree0=NQUICK_CALL(_Tak(name_space)(error_free), 102, cplus))== (PPTREE) -1 ) {
#line 1661 "cplus.met"
                    MulFreeTree(2,_ptTree0,retTree);
                    PROG_EXIT(ext_data_declaration_exit,"ext_data_declaration")
#line 1661 "cplus.met"
                }
#line 1661 "cplus.met"
                _retValue =_ptTree0;
#line 1661 "cplus.met"
                goto ext_data_declaration_ret;
#line 1661 "cplus.met"
            }
#line 1661 "cplus.met"
            break;
#line 1661 "cplus.met"
#line 1662 "cplus.met"
        case PVIR : 
#line 1662 "cplus.met"
            tokenAhead = 0 ;
#line 1662 "cplus.met"
            CommTerm();
#line 1662 "cplus.met"
#line 1662 "cplus.met"
            {
#line 1662 "cplus.met"
                PPTREE _ptTree0=0;
#line 1662 "cplus.met"
                {
#line 1662 "cplus.met"
                    PPTREE _ptRes1=0;
#line 1662 "cplus.met"
                    _ptRes1= MakeTree(STAT_VOID, 0);
#line 1662 "cplus.met"
                    _ptTree0=_ptRes1;
#line 1662 "cplus.met"
                }
#line 1662 "cplus.met"
                _retValue =_ptTree0;
#line 1662 "cplus.met"
                goto ext_data_declaration_ret;
#line 1662 "cplus.met"
            }
#line 1662 "cplus.met"
            break;
#line 1662 "cplus.met"
#line 1663 "cplus.met"
        case __EXTENSION__ : 
#line 1663 "cplus.met"
            tokenAhead = 0 ;
#line 1663 "cplus.met"
            CommTerm();
#line 1663 "cplus.met"
#line 1663 "cplus.met"
            {
#line 1663 "cplus.met"
                PPTREE _ptTree0=0;
#line 1663 "cplus.met"
                {
#line 1663 "cplus.met"
                    PPTREE _ptTree1=0,_ptRes1=0;
#line 1663 "cplus.met"
                    _ptRes1= MakeTree(EXTENSION, 1);
#line 1663 "cplus.met"
                    if ( (_ptTree1=NQUICK_CALL(_Tak(ext_data_decl_simp)(error_free), 74, cplus))== (PPTREE) -1 ) {
#line 1663 "cplus.met"
                        MulFreeTree(4,_ptRes1,_ptTree1,_ptTree0,retTree);
                        PROG_EXIT(ext_data_declaration_exit,"ext_data_declaration")
#line 1663 "cplus.met"
                    }
#line 1663 "cplus.met"
                    ReplaceTree(_ptRes1, 1, _ptTree1);
#line 1663 "cplus.met"
                    _ptTree0=_ptRes1;
#line 1663 "cplus.met"
                }
#line 1663 "cplus.met"
                _retValue =_ptTree0;
#line 1663 "cplus.met"
                goto ext_data_declaration_ret;
#line 1663 "cplus.met"
            }
#line 1663 "cplus.met"
            break;
#line 1663 "cplus.met"
#line 1664 "cplus.met"
        default : 
#line 1664 "cplus.met"
#line 1664 "cplus.met"
            {
#line 1664 "cplus.met"
                PPTREE _ptTree0=0;
#line 1664 "cplus.met"
                if ( (_ptTree0=NQUICK_CALL(_Tak(ext_data_decl_simp)(error_free), 74, cplus))== (PPTREE) -1 ) {
#line 1664 "cplus.met"
                    MulFreeTree(2,_ptTree0,retTree);
                    PROG_EXIT(ext_data_declaration_exit,"ext_data_declaration")
#line 1664 "cplus.met"
                }
#line 1664 "cplus.met"
                _retValue =_ptTree0;
#line 1664 "cplus.met"
                goto ext_data_declaration_ret;
#line 1664 "cplus.met"
            }
#line 1664 "cplus.met"
            break;
#line 1664 "cplus.met"
    }
#line 1664 "cplus.met"
#line 1664 "cplus.met"
#line 1665 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1665 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 1665 "cplus.met"
return((PPTREE) 0);
#line 1665 "cplus.met"

#line 1665 "cplus.met"
ext_data_declaration_exit :
#line 1665 "cplus.met"

#line 1665 "cplus.met"
    _Debug = TRACE_RULE("ext_data_declaration",TRACE_EXIT,(PPTREE)0);
#line 1665 "cplus.met"
    _funcLevel--;
#line 1665 "cplus.met"
    return((PPTREE) -1) ;
#line 1665 "cplus.met"

#line 1665 "cplus.met"
ext_data_declaration_ret :
#line 1665 "cplus.met"
    
#line 1665 "cplus.met"
    _Debug = TRACE_RULE("ext_data_declaration",TRACE_RETURN,_retValue);
#line 1665 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1665 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 1665 "cplus.met"
    return _retValue ;
#line 1665 "cplus.met"
}
#line 1665 "cplus.met"

#line 1665 "cplus.met"
#line 1332 "cplus.met"
PPTREE cplus::ext_decl_dir ( int error_free)
#line 1332 "cplus.met"
{
#line 1332 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 1332 "cplus.met"
    int _value,_nbPre = 0 ;
#line 1332 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 1332 "cplus.met"
    int _Debug = TRACE_RULE("ext_decl_dir",TRACE_ENTER,(PPTREE)0);
#line 1332 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 1332 "cplus.met"
#line 1332 "cplus.met"
    PPTREE retTree = (PPTREE) 0;
#line 1332 "cplus.met"
#line 1334 "cplus.met"
    if (NPUSH_CALL_AFF_VERIF(retTree = ,_Tak(directive), 56, cplus)){
#line 1334 "cplus.met"
#line 1335 "cplus.met"
        {
#line 1335 "cplus.met"
            _retValue = retTree ;
#line 1335 "cplus.met"
            goto ext_decl_dir_ret;
#line 1335 "cplus.met"
            
#line 1335 "cplus.met"
        }
#line 1335 "cplus.met"
    }
#line 1335 "cplus.met"
#line 1336 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 1336 "cplus.met"
    switch( lexEl.Value) {
#line 1336 "cplus.met"
#line 1337 "cplus.met"
        case META : 
#line 1337 "cplus.met"
        case IF_DIR : 
#line 1337 "cplus.met"
            tokenAhead = 0 ;
#line 1337 "cplus.met"
            CommTerm();
#line 1337 "cplus.met"
#line 1337 "cplus.met"
            {
#line 1337 "cplus.met"
                PPTREE _ptTree0=0;
#line 1337 "cplus.met"
                if ( (_ptTree0=NQUICK_CALL(_Tak(ext_decl_if_dir)(error_free), 77, cplus))== (PPTREE) -1 ) {
#line 1337 "cplus.met"
                    MulFreeTree(2,_ptTree0,retTree);
                    PROG_EXIT(ext_decl_dir_exit,"ext_decl_dir")
#line 1337 "cplus.met"
                }
#line 1337 "cplus.met"
                _retValue =_ptTree0;
#line 1337 "cplus.met"
                goto ext_decl_dir_ret;
#line 1337 "cplus.met"
            }
#line 1337 "cplus.met"
            break;
#line 1337 "cplus.met"
#line 1338 "cplus.met"
        case IFDEF_DIR : 
#line 1338 "cplus.met"
#line 1338 "cplus.met"
            {
#line 1338 "cplus.met"
                PPTREE _ptTree0=0;
#line 1338 "cplus.met"
                if ( (_ptTree0=NQUICK_CALL(_Tak(ext_decl_ifdef_dir)(error_free), 78, cplus))== (PPTREE) -1 ) {
#line 1338 "cplus.met"
                    MulFreeTree(2,_ptTree0,retTree);
                    PROG_EXIT(ext_decl_dir_exit,"ext_decl_dir")
#line 1338 "cplus.met"
                }
#line 1338 "cplus.met"
                _retValue =_ptTree0;
#line 1338 "cplus.met"
                goto ext_decl_dir_ret;
#line 1338 "cplus.met"
            }
#line 1338 "cplus.met"
            break;
#line 1338 "cplus.met"
#line 1339 "cplus.met"
        case IFNDEF_DIR : 
#line 1339 "cplus.met"
#line 1339 "cplus.met"
            {
#line 1339 "cplus.met"
                PPTREE _ptTree0=0;
#line 1339 "cplus.met"
                if ( (_ptTree0=NQUICK_CALL(_Tak(ext_decl_ifdef_dir)(error_free), 78, cplus))== (PPTREE) -1 ) {
#line 1339 "cplus.met"
                    MulFreeTree(2,_ptTree0,retTree);
                    PROG_EXIT(ext_decl_dir_exit,"ext_decl_dir")
#line 1339 "cplus.met"
                }
#line 1339 "cplus.met"
                _retValue =_ptTree0;
#line 1339 "cplus.met"
                goto ext_decl_dir_ret;
#line 1339 "cplus.met"
            }
#line 1339 "cplus.met"
            break;
#line 1339 "cplus.met"
        default :
#line 1339 "cplus.met"
            MulFreeTree(1,retTree);
            CASE_EXIT(ext_decl_dir_exit,"either IF_DIR or IFDEF_DIR or IFNDEF_DIR")
#line 1339 "cplus.met"
            break;
#line 1339 "cplus.met"
    }
#line 1339 "cplus.met"
#line 1339 "cplus.met"
#line 1340 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1340 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 1340 "cplus.met"
return((PPTREE) 0);
#line 1340 "cplus.met"

#line 1340 "cplus.met"
ext_decl_dir_exit :
#line 1340 "cplus.met"

#line 1340 "cplus.met"
    _Debug = TRACE_RULE("ext_decl_dir",TRACE_EXIT,(PPTREE)0);
#line 1340 "cplus.met"
    _funcLevel--;
#line 1340 "cplus.met"
    return((PPTREE) -1) ;
#line 1340 "cplus.met"

#line 1340 "cplus.met"
ext_decl_dir_ret :
#line 1340 "cplus.met"
    
#line 1340 "cplus.met"
    _Debug = TRACE_RULE("ext_decl_dir",TRACE_RETURN,_retValue);
#line 1340 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1340 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 1340 "cplus.met"
    return _retValue ;
#line 1340 "cplus.met"
}
#line 1340 "cplus.met"

#line 1340 "cplus.met"
#line 1266 "cplus.met"
PPTREE cplus::ext_decl_if_dir ( int error_free)
#line 1266 "cplus.met"
{
#line 1266 "cplus.met"
    int  _oldkeepCarriage = keepCarriage;
#line 1266 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 1266 "cplus.met"
    int _value,_nbPre = 0 ;
#line 1266 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 1266 "cplus.met"
    int _Debug = TRACE_RULE("ext_decl_if_dir",TRACE_ENTER,(PPTREE)0);
#line 1266 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 1266 "cplus.met"
#line 1266 "cplus.met"
    PPTREE _addlist1 = (PPTREE) 0,_addlist2 = (PPTREE) 0;
#line 1266 "cplus.met"
#line 1266 "cplus.met"
    PPTREE retTree = (PPTREE) 0,list = (PPTREE) 0,list2 = (PPTREE) 0;
#line 1266 "cplus.met"
#line 1268 "cplus.met"
    {
#line 1268 "cplus.met"
        keepCarriage = 1 ;
#line 1268 "cplus.met"
#line 1269 "cplus.met"
#line 1270 "cplus.met"
        {
#line 1270 "cplus.met"
            PPTREE _ptTree0=0,_ptRes0=0;
#line 1270 "cplus.met"
            _ptRes0= MakeTree(IF_DIR, 3);
#line 1270 "cplus.met"
            if ( (_ptTree0=NQUICK_CALL(_Tak(expression)(error_free), 66, cplus))== (PPTREE) -1 ) {
#line 1270 "cplus.met"
                MulFreeTree(7,_ptRes0,_ptTree0,_addlist1,_addlist2,list,list2,retTree);
                PROG_EXIT(ext_decl_if_dir_exit,"ext_decl_if_dir")
#line 1270 "cplus.met"
            }
#line 1270 "cplus.met"
            ReplaceTree(_ptRes0, 1, _ptTree0);
#line 1270 "cplus.met"
            retTree=_ptRes0;
#line 1270 "cplus.met"
        }
#line 1270 "cplus.met"
#line 1271 "cplus.met"
        (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 1271 "cplus.met"
        if ( ! TERM_OR_META(CARRIAGE_RETURN,"CARRIAGE_RETURN") || !(CommTerm(),1)) {
#line 1271 "cplus.met"
            MulFreeTree(5,_addlist1,_addlist2,list,list2,retTree);
            TOKEN_EXIT(ext_decl_if_dir_exit,"CARRIAGE_RETURN")
#line 1271 "cplus.met"
        } else {
#line 1271 "cplus.met"
            tokenAhead = 0 ;
#line 1271 "cplus.met"
        }
#line 1271 "cplus.met"
#line 1271 "cplus.met"
        keepCarriage =  _oldkeepCarriage;
#line 1271 "cplus.met"
    }
#line 1271 "cplus.met"
#line 1271 "cplus.met"
    _addlist1 = list ;
#line 1271 "cplus.met"
#line 1273 "cplus.met"
    while (((! ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN( ELSE_DIR,"ELSE_DIR"))) && 
#line 1273 "cplus.met"
           (! ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN( ELIF_DIR,"ELIF_DIR")))) && 
#line 1273 "cplus.met"
          (! ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN( ENDIF_DIR,"ENDIF_DIR")))) { 
#line 1273 "cplus.met"
#line 1274 "cplus.met"
#line 1274 "cplus.met"
        {
#line 1274 "cplus.met"
            PPTREE _ptTree0=0;
#line 1274 "cplus.met"
            if ( (_ptTree0=NQUICK_CALL(_Tak(ext_all_ext)(error_free), 69, cplus))== (PPTREE) -1 ) {
#line 1274 "cplus.met"
                MulFreeTree(6,_ptTree0,_addlist1,_addlist2,list,list2,retTree);
                PROG_EXIT(ext_decl_if_dir_exit,"ext_decl_if_dir")
#line 1274 "cplus.met"
            }
#line 1274 "cplus.met"
            _addlist1 =AddList(_addlist1 , _ptTree0);
#line 1274 "cplus.met"
        }
#line 1274 "cplus.met"
#line 1274 "cplus.met"
        if (list){
#line 1274 "cplus.met"
#line 1274 "cplus.met"
            _addlist1 = SonTree (_addlist1 ,2 );
#line 1274 "cplus.met"
        } else {
#line 1274 "cplus.met"
#line 1274 "cplus.met"
            list = _addlist1 ;
#line 1274 "cplus.met"
        }
#line 1274 "cplus.met"
    } 
#line 1274 "cplus.met"
#line 1275 "cplus.met"
    {
#line 1275 "cplus.met"
        PPTREE _ptTree0=0;
#line 1275 "cplus.met"
        if ( (_ptTree0=NQUICK_CALL(_Tak(none_statement)(error_free), 107, cplus))== (PPTREE) -1 ) {
#line 1275 "cplus.met"
            MulFreeTree(6,_ptTree0,_addlist1,_addlist2,list,list2,retTree);
            PROG_EXIT(ext_decl_if_dir_exit,"ext_decl_if_dir")
#line 1275 "cplus.met"
        }
#line 1275 "cplus.met"
        list =AddList(list , _ptTree0);
#line 1275 "cplus.met"
    }
#line 1275 "cplus.met"
#line 1276 "cplus.met"
    ReplaceTree(retTree ,2 ,list );
#line 1276 "cplus.met"
#line 1277 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 1277 "cplus.met"
    switch( lexEl.Value) {
#line 1277 "cplus.met"
#line 1278 "cplus.met"
        case META : 
#line 1278 "cplus.met"
        case ELSE_DIR : 
#line 1278 "cplus.met"
            tokenAhead = 0 ;
#line 1278 "cplus.met"
            CommTerm();
#line 1278 "cplus.met"
#line 1279 "cplus.met"
#line 1279 "cplus.met"
            _addlist2 = list2 ;
#line 1279 "cplus.met"
#line 1280 "cplus.met"
            while (((tokenAhead && tokenAhead != -1)|| (c != EOF)) && 
#line 1280 "cplus.met"
                  (! ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN( ENDIF_DIR,"ENDIF_DIR")))) { 
#line 1280 "cplus.met"
#line 1281 "cplus.met"
#line 1281 "cplus.met"
                {
#line 1281 "cplus.met"
                    PPTREE _ptTree0=0;
#line 1281 "cplus.met"
                    if ( (_ptTree0=NQUICK_CALL(_Tak(ext_all_ext)(error_free), 69, cplus))== (PPTREE) -1 ) {
#line 1281 "cplus.met"
                        MulFreeTree(6,_ptTree0,_addlist1,_addlist2,list,list2,retTree);
                        PROG_EXIT(ext_decl_if_dir_exit,"ext_decl_if_dir")
#line 1281 "cplus.met"
                    }
#line 1281 "cplus.met"
                    _addlist2 =AddList(_addlist2 , _ptTree0);
#line 1281 "cplus.met"
                }
#line 1281 "cplus.met"
#line 1281 "cplus.met"
                if (list2){
#line 1281 "cplus.met"
#line 1281 "cplus.met"
                    _addlist2 = SonTree (_addlist2 ,2 );
#line 1281 "cplus.met"
                } else {
#line 1281 "cplus.met"
#line 1281 "cplus.met"
                    list2 = _addlist2 ;
#line 1281 "cplus.met"
                }
#line 1281 "cplus.met"
            } 
#line 1281 "cplus.met"
#line 1282 "cplus.met"
            {
#line 1282 "cplus.met"
                PPTREE _ptTree0=0;
#line 1282 "cplus.met"
                if ( (_ptTree0=NQUICK_CALL(_Tak(none_statement)(error_free), 107, cplus))== (PPTREE) -1 ) {
#line 1282 "cplus.met"
                    MulFreeTree(6,_ptTree0,_addlist1,_addlist2,list,list2,retTree);
                    PROG_EXIT(ext_decl_if_dir_exit,"ext_decl_if_dir")
#line 1282 "cplus.met"
                }
#line 1282 "cplus.met"
                list2 =AddList(list2 , _ptTree0);
#line 1282 "cplus.met"
            }
#line 1282 "cplus.met"
#line 1283 "cplus.met"
            (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 1283 "cplus.met"
            if ( ! TERM_OR_META(ENDIF_DIR,"ENDIF_DIR") || !(CommTerm(),1)) {
#line 1283 "cplus.met"
                MulFreeTree(5,_addlist1,_addlist2,list,list2,retTree);
                TOKEN_EXIT(ext_decl_if_dir_exit,"ENDIF_DIR")
#line 1283 "cplus.met"
            } else {
#line 1283 "cplus.met"
                tokenAhead = 0 ;
#line 1283 "cplus.met"
            }
#line 1283 "cplus.met"
#line 1284 "cplus.met"
            {
#line 1284 "cplus.met"
                PPTREE _ptTree0=0;
#line 1284 "cplus.met"
                _ptTree0=ReplaceTree(retTree ,3 ,list2 );
#line 1284 "cplus.met"
                _retValue =_ptTree0;
#line 1284 "cplus.met"
                goto ext_decl_if_dir_ret;
#line 1284 "cplus.met"
            }
#line 1284 "cplus.met"
#line 1284 "cplus.met"
            break;
#line 1284 "cplus.met"
#line 1286 "cplus.met"
        case ELIF_DIR : 
#line 1286 "cplus.met"
            tokenAhead = 0 ;
#line 1286 "cplus.met"
            CommTerm();
#line 1286 "cplus.met"
#line 1286 "cplus.met"
            {
#line 1286 "cplus.met"
                PPTREE _ptTree0=0;
#line 1286 "cplus.met"
                {
#line 1286 "cplus.met"
                    PPTREE _ptTree1=0;
#line 1286 "cplus.met"
                    if ( (_ptTree1=NQUICK_CALL(_Tak(ext_decl_if_dir)(error_free), 77, cplus))== (PPTREE) -1 ) {
#line 1286 "cplus.met"
                        MulFreeTree(7,_ptTree1,_ptTree0,_addlist1,_addlist2,list,list2,retTree);
                        PROG_EXIT(ext_decl_if_dir_exit,"ext_decl_if_dir")
#line 1286 "cplus.met"
                    }
#line 1286 "cplus.met"
                    _ptTree0=ReplaceTree(retTree , 3 , _ptTree1);
#line 1286 "cplus.met"
                }
#line 1286 "cplus.met"
                _retValue =_ptTree0;
#line 1286 "cplus.met"
                goto ext_decl_if_dir_ret;
#line 1286 "cplus.met"
            }
#line 1286 "cplus.met"
            break;
#line 1286 "cplus.met"
#line 1287 "cplus.met"
        case ENDIF_DIR : 
#line 1287 "cplus.met"
            tokenAhead = 0 ;
#line 1287 "cplus.met"
            CommTerm();
#line 1287 "cplus.met"
#line 1287 "cplus.met"
            {
#line 1287 "cplus.met"
                _retValue = retTree ;
#line 1287 "cplus.met"
                goto ext_decl_if_dir_ret;
#line 1287 "cplus.met"
                
#line 1287 "cplus.met"
            }
#line 1287 "cplus.met"
            break;
#line 1287 "cplus.met"
        default :
#line 1287 "cplus.met"
            MulFreeTree(5,_addlist1,_addlist2,list,list2,retTree);
            CASE_EXIT(ext_decl_if_dir_exit,"either ELSE_DIR or ELIF_DIR or ENDIF_DIR")
#line 1287 "cplus.met"
            break;
#line 1287 "cplus.met"
    }
#line 1287 "cplus.met"
#line 1287 "cplus.met"
#line 1288 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1288 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 1288 "cplus.met"
keepCarriage =  _oldkeepCarriage;
#line 1288 "cplus.met"
return((PPTREE) 0);
#line 1288 "cplus.met"

#line 1288 "cplus.met"
ext_decl_if_dir_exit :
#line 1288 "cplus.met"

#line 1288 "cplus.met"
    _Debug = TRACE_RULE("ext_decl_if_dir",TRACE_EXIT,(PPTREE)0);
#line 1288 "cplus.met"
    _funcLevel--;
#line 1288 "cplus.met"
    keepCarriage =  _oldkeepCarriage;
#line 1288 "cplus.met"
    return((PPTREE) -1) ;
#line 1288 "cplus.met"

#line 1288 "cplus.met"
ext_decl_if_dir_ret :
#line 1288 "cplus.met"
    
#line 1288 "cplus.met"
    _Debug = TRACE_RULE("ext_decl_if_dir",TRACE_RETURN,_retValue);
#line 1288 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1288 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 1288 "cplus.met"
    keepCarriage =  _oldkeepCarriage;
#line 1288 "cplus.met"
    return _retValue ;
#line 1288 "cplus.met"
}
#line 1288 "cplus.met"

#line 1288 "cplus.met"
#line 1291 "cplus.met"
PPTREE cplus::ext_decl_ifdef_dir ( int error_free)
#line 1291 "cplus.met"
{
#line 1291 "cplus.met"
    int  _oldkeepCarriage = keepCarriage;
#line 1291 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 1291 "cplus.met"
    int _value,_nbPre = 0 ;
#line 1291 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 1291 "cplus.met"
    int _Debug = TRACE_RULE("ext_decl_ifdef_dir",TRACE_ENTER,(PPTREE)0);
#line 1291 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 1291 "cplus.met"
#line 1291 "cplus.met"
    PPTREE _addlist1 = (PPTREE) 0,_addlist2 = (PPTREE) 0;
#line 1291 "cplus.met"
#line 1291 "cplus.met"
    PPTREE retTree = (PPTREE) 0,list = (PPTREE) 0,list2 = (PPTREE) 0,express = (PPTREE) 0;
#line 1291 "cplus.met"
#line 1293 "cplus.met"
    if ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&TERM_OR_META(IFDEF_DIR,"IFDEF_DIR") && (tokenAhead = 0,CommTerm(),1)){
#line 1293 "cplus.met"
#line 1294 "cplus.met"
#line 1295 "cplus.met"
        {
#line 1295 "cplus.met"
            keepCarriage = 1 ;
#line 1295 "cplus.met"
#line 1296 "cplus.met"
#line 1297 "cplus.met"
            {
#line 1297 "cplus.met"
                PPTREE _ptTree0=0,_ptRes0=0;
#line 1297 "cplus.met"
                _ptRes0= MakeTree(IFDEF_DIR, 3);
#line 1297 "cplus.met"
                if ( (_ptTree0=NQUICK_CALL(_Tak(expression)(error_free), 66, cplus))== (PPTREE) -1 ) {
#line 1297 "cplus.met"
                    MulFreeTree(8,_ptRes0,_ptTree0,_addlist1,_addlist2,express,list,list2,retTree);
                    PROG_EXIT(ext_decl_ifdef_dir_exit,"ext_decl_ifdef_dir")
#line 1297 "cplus.met"
                }
#line 1297 "cplus.met"
                ReplaceTree(_ptRes0, 1, _ptTree0);
#line 1297 "cplus.met"
                retTree=_ptRes0;
#line 1297 "cplus.met"
            }
#line 1297 "cplus.met"
#line 1298 "cplus.met"
            (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 1298 "cplus.met"
            if ( ! TERM_OR_META(CARRIAGE_RETURN,"CARRIAGE_RETURN") || !(CommTerm(),1)) {
#line 1298 "cplus.met"
                MulFreeTree(6,_addlist1,_addlist2,express,list,list2,retTree);
                TOKEN_EXIT(ext_decl_ifdef_dir_exit,"CARRIAGE_RETURN")
#line 1298 "cplus.met"
            } else {
#line 1298 "cplus.met"
                tokenAhead = 0 ;
#line 1298 "cplus.met"
            }
#line 1298 "cplus.met"
#line 1298 "cplus.met"
            keepCarriage =  _oldkeepCarriage;
#line 1298 "cplus.met"
        }
#line 1298 "cplus.met"
#line 1298 "cplus.met"
#line 1299 "cplus.met"
    } else {
#line 1299 "cplus.met"
#line 1302 "cplus.met"
#line 1303 "cplus.met"
        (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 1303 "cplus.met"
        if ( ! TERM_OR_META(IFNDEF_DIR,"IFNDEF_DIR") || !(CommTerm(),1)) {
#line 1303 "cplus.met"
            MulFreeTree(6,_addlist1,_addlist2,express,list,list2,retTree);
            TOKEN_EXIT(ext_decl_ifdef_dir_exit,"IFNDEF_DIR")
#line 1303 "cplus.met"
        } else {
#line 1303 "cplus.met"
            tokenAhead = 0 ;
#line 1303 "cplus.met"
        }
#line 1303 "cplus.met"
#line 1304 "cplus.met"
        {
#line 1304 "cplus.met"
            keepCarriage = 1 ;
#line 1304 "cplus.met"
#line 1305 "cplus.met"
#line 1306 "cplus.met"
            if ( (express=NQUICK_CALL(_Tak(expression)(error_free), 66, cplus))== (PPTREE) -1 ) {
#line 1306 "cplus.met"
                MulFreeTree(6,_addlist1,_addlist2,express,list,list2,retTree);
                PROG_EXIT(ext_decl_ifdef_dir_exit,"ext_decl_ifdef_dir")
#line 1306 "cplus.met"
            }
#line 1306 "cplus.met"
#line 1307 "cplus.met"
            (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 1307 "cplus.met"
            if ( ! TERM_OR_META(CARRIAGE_RETURN,"CARRIAGE_RETURN") || !(CommTerm(),1)) {
#line 1307 "cplus.met"
                MulFreeTree(6,_addlist1,_addlist2,express,list,list2,retTree);
                TOKEN_EXIT(ext_decl_ifdef_dir_exit,"CARRIAGE_RETURN")
#line 1307 "cplus.met"
            } else {
#line 1307 "cplus.met"
                tokenAhead = 0 ;
#line 1307 "cplus.met"
            }
#line 1307 "cplus.met"
#line 1307 "cplus.met"
            keepCarriage =  _oldkeepCarriage;
#line 1307 "cplus.met"
        }
#line 1307 "cplus.met"
#line 1309 "cplus.met"
        {
#line 1309 "cplus.met"
            PPTREE _ptRes0=0;
#line 1309 "cplus.met"
            _ptRes0= MakeTree(IFNDEF_DIR, 3);
#line 1309 "cplus.met"
            ReplaceTree(_ptRes0, 1, express );
#line 1309 "cplus.met"
            retTree=_ptRes0;
#line 1309 "cplus.met"
        }
#line 1309 "cplus.met"
#line 1309 "cplus.met"
    }
#line 1309 "cplus.met"
#line 1309 "cplus.met"
    _addlist1 = list ;
#line 1309 "cplus.met"
#line 1313 "cplus.met"
    while (((! ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN( ELSE_DIR,"ELSE_DIR"))) && 
#line 1313 "cplus.met"
           (! ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN( ELIF_DIR,"ELIF_DIR")))) && 
#line 1313 "cplus.met"
          (! ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN( ENDIF_DIR,"ENDIF_DIR")))) { 
#line 1313 "cplus.met"
#line 1315 "cplus.met"
#line 1315 "cplus.met"
        {
#line 1315 "cplus.met"
            PPTREE _ptTree0=0;
#line 1315 "cplus.met"
            if ( (_ptTree0=NQUICK_CALL(_Tak(ext_all_ext)(error_free), 69, cplus))== (PPTREE) -1 ) {
#line 1315 "cplus.met"
                MulFreeTree(7,_ptTree0,_addlist1,_addlist2,express,list,list2,retTree);
                PROG_EXIT(ext_decl_ifdef_dir_exit,"ext_decl_ifdef_dir")
#line 1315 "cplus.met"
            }
#line 1315 "cplus.met"
            _addlist1 =AddList(_addlist1 , _ptTree0);
#line 1315 "cplus.met"
        }
#line 1315 "cplus.met"
#line 1315 "cplus.met"
        if (list){
#line 1315 "cplus.met"
#line 1315 "cplus.met"
            _addlist1 = SonTree (_addlist1 ,2 );
#line 1315 "cplus.met"
        } else {
#line 1315 "cplus.met"
#line 1315 "cplus.met"
            list = _addlist1 ;
#line 1315 "cplus.met"
        }
#line 1315 "cplus.met"
    } 
#line 1315 "cplus.met"
#line 1316 "cplus.met"
    {
#line 1316 "cplus.met"
        PPTREE _ptTree0=0;
#line 1316 "cplus.met"
        if ( (_ptTree0=NQUICK_CALL(_Tak(none_statement)(error_free), 107, cplus))== (PPTREE) -1 ) {
#line 1316 "cplus.met"
            MulFreeTree(7,_ptTree0,_addlist1,_addlist2,express,list,list2,retTree);
            PROG_EXIT(ext_decl_ifdef_dir_exit,"ext_decl_ifdef_dir")
#line 1316 "cplus.met"
        }
#line 1316 "cplus.met"
        list =AddList(list , _ptTree0);
#line 1316 "cplus.met"
    }
#line 1316 "cplus.met"
#line 1317 "cplus.met"
    ReplaceTree(retTree ,2 ,list );
#line 1317 "cplus.met"
#line 1318 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 1318 "cplus.met"
    switch( lexEl.Value) {
#line 1318 "cplus.met"
#line 1319 "cplus.met"
        case META : 
#line 1319 "cplus.met"
        case ELSE_DIR : 
#line 1319 "cplus.met"
            tokenAhead = 0 ;
#line 1319 "cplus.met"
            CommTerm();
#line 1319 "cplus.met"
#line 1320 "cplus.met"
#line 1320 "cplus.met"
            _addlist2 = list2 ;
#line 1320 "cplus.met"
#line 1321 "cplus.met"
            while (((tokenAhead && tokenAhead != -1)|| (c != EOF)) && 
#line 1321 "cplus.met"
                  (! ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN( ENDIF_DIR,"ENDIF_DIR")))) { 
#line 1321 "cplus.met"
#line 1322 "cplus.met"
#line 1322 "cplus.met"
                {
#line 1322 "cplus.met"
                    PPTREE _ptTree0=0;
#line 1322 "cplus.met"
                    if ( (_ptTree0=NQUICK_CALL(_Tak(ext_all_ext)(error_free), 69, cplus))== (PPTREE) -1 ) {
#line 1322 "cplus.met"
                        MulFreeTree(7,_ptTree0,_addlist1,_addlist2,express,list,list2,retTree);
                        PROG_EXIT(ext_decl_ifdef_dir_exit,"ext_decl_ifdef_dir")
#line 1322 "cplus.met"
                    }
#line 1322 "cplus.met"
                    _addlist2 =AddList(_addlist2 , _ptTree0);
#line 1322 "cplus.met"
                }
#line 1322 "cplus.met"
#line 1322 "cplus.met"
                if (list2){
#line 1322 "cplus.met"
#line 1322 "cplus.met"
                    _addlist2 = SonTree (_addlist2 ,2 );
#line 1322 "cplus.met"
                } else {
#line 1322 "cplus.met"
#line 1322 "cplus.met"
                    list2 = _addlist2 ;
#line 1322 "cplus.met"
                }
#line 1322 "cplus.met"
            } 
#line 1322 "cplus.met"
#line 1323 "cplus.met"
            {
#line 1323 "cplus.met"
                PPTREE _ptTree0=0;
#line 1323 "cplus.met"
                if ( (_ptTree0=NQUICK_CALL(_Tak(none_statement)(error_free), 107, cplus))== (PPTREE) -1 ) {
#line 1323 "cplus.met"
                    MulFreeTree(7,_ptTree0,_addlist1,_addlist2,express,list,list2,retTree);
                    PROG_EXIT(ext_decl_ifdef_dir_exit,"ext_decl_ifdef_dir")
#line 1323 "cplus.met"
                }
#line 1323 "cplus.met"
                list2 =AddList(list2 , _ptTree0);
#line 1323 "cplus.met"
            }
#line 1323 "cplus.met"
#line 1324 "cplus.met"
            (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 1324 "cplus.met"
            if ( ! TERM_OR_META(ENDIF_DIR,"ENDIF_DIR") || !(CommTerm(),1)) {
#line 1324 "cplus.met"
                MulFreeTree(6,_addlist1,_addlist2,express,list,list2,retTree);
                TOKEN_EXIT(ext_decl_ifdef_dir_exit,"ENDIF_DIR")
#line 1324 "cplus.met"
            } else {
#line 1324 "cplus.met"
                tokenAhead = 0 ;
#line 1324 "cplus.met"
            }
#line 1324 "cplus.met"
#line 1325 "cplus.met"
            {
#line 1325 "cplus.met"
                PPTREE _ptTree0=0;
#line 1325 "cplus.met"
                _ptTree0=ReplaceTree(retTree ,3 ,list2 );
#line 1325 "cplus.met"
                _retValue =_ptTree0;
#line 1325 "cplus.met"
                goto ext_decl_ifdef_dir_ret;
#line 1325 "cplus.met"
            }
#line 1325 "cplus.met"
#line 1325 "cplus.met"
            break;
#line 1325 "cplus.met"
#line 1327 "cplus.met"
        case ELIF_DIR : 
#line 1327 "cplus.met"
            tokenAhead = 0 ;
#line 1327 "cplus.met"
            CommTerm();
#line 1327 "cplus.met"
#line 1327 "cplus.met"
            {
#line 1327 "cplus.met"
                PPTREE _ptTree0=0;
#line 1327 "cplus.met"
                {
#line 1327 "cplus.met"
                    PPTREE _ptTree1=0;
#line 1327 "cplus.met"
                    if ( (_ptTree1=NQUICK_CALL(_Tak(ext_decl_if_dir)(error_free), 77, cplus))== (PPTREE) -1 ) {
#line 1327 "cplus.met"
                        MulFreeTree(8,_ptTree1,_ptTree0,_addlist1,_addlist2,express,list,list2,retTree);
                        PROG_EXIT(ext_decl_ifdef_dir_exit,"ext_decl_ifdef_dir")
#line 1327 "cplus.met"
                    }
#line 1327 "cplus.met"
                    _ptTree0=ReplaceTree(retTree , 3 , _ptTree1);
#line 1327 "cplus.met"
                }
#line 1327 "cplus.met"
                _retValue =_ptTree0;
#line 1327 "cplus.met"
                goto ext_decl_ifdef_dir_ret;
#line 1327 "cplus.met"
            }
#line 1327 "cplus.met"
            break;
#line 1327 "cplus.met"
#line 1328 "cplus.met"
        case ENDIF_DIR : 
#line 1328 "cplus.met"
            tokenAhead = 0 ;
#line 1328 "cplus.met"
            CommTerm();
#line 1328 "cplus.met"
#line 1328 "cplus.met"
            {
#line 1328 "cplus.met"
                _retValue = retTree ;
#line 1328 "cplus.met"
                goto ext_decl_ifdef_dir_ret;
#line 1328 "cplus.met"
                
#line 1328 "cplus.met"
            }
#line 1328 "cplus.met"
            break;
#line 1328 "cplus.met"
        default :
#line 1328 "cplus.met"
            MulFreeTree(6,_addlist1,_addlist2,express,list,list2,retTree);
            CASE_EXIT(ext_decl_ifdef_dir_exit,"either ELSE_DIR or ELIF_DIR or ENDIF_DIR")
#line 1328 "cplus.met"
            break;
#line 1328 "cplus.met"
    }
#line 1328 "cplus.met"
#line 1328 "cplus.met"
#line 1329 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1329 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 1329 "cplus.met"
keepCarriage =  _oldkeepCarriage;
#line 1329 "cplus.met"
return((PPTREE) 0);
#line 1329 "cplus.met"

#line 1329 "cplus.met"
ext_decl_ifdef_dir_exit :
#line 1329 "cplus.met"

#line 1329 "cplus.met"
    _Debug = TRACE_RULE("ext_decl_ifdef_dir",TRACE_EXIT,(PPTREE)0);
#line 1329 "cplus.met"
    _funcLevel--;
#line 1329 "cplus.met"
    keepCarriage =  _oldkeepCarriage;
#line 1329 "cplus.met"
    return((PPTREE) -1) ;
#line 1329 "cplus.met"

#line 1329 "cplus.met"
ext_decl_ifdef_dir_ret :
#line 1329 "cplus.met"
    
#line 1329 "cplus.met"
    _Debug = TRACE_RULE("ext_decl_ifdef_dir",TRACE_RETURN,_retValue);
#line 1329 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1329 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 1329 "cplus.met"
    keepCarriage =  _oldkeepCarriage;
#line 1329 "cplus.met"
    return _retValue ;
#line 1329 "cplus.met"
}
#line 1329 "cplus.met"

#line 1329 "cplus.met"
#line 3457 "cplus.met"
PPTREE cplus::for_statement ( int error_free)
#line 3457 "cplus.met"
{
#line 3457 "cplus.met"
    int  _oldswitchContext = switchContext;
#line 3457 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 3457 "cplus.met"
    int _value,_nbPre = 0 ;
#line 3457 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 3457 "cplus.met"
    int _Debug = TRACE_RULE("for_statement",TRACE_ENTER,(PPTREE)0);
#line 3457 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 3457 "cplus.met"
#line 3457 "cplus.met"
    PPTREE statTree = (PPTREE) 0,opt = (PPTREE) 0;
#line 3457 "cplus.met"
#line 3459 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3459 "cplus.met"
    if (  !SEE_TOKEN( POUV,"(") || !(CommTerm(),1)) {
#line 3459 "cplus.met"
        MulFreeTree(2,opt,statTree);
        TOKEN_EXIT(for_statement_exit,"(")
#line 3459 "cplus.met"
    } else {
#line 3459 "cplus.met"
        tokenAhead = 0 ;
#line 3459 "cplus.met"
    }
#line 3459 "cplus.met"
#line 3460 "cplus.met"
    {
#line 3460 "cplus.met"
        PPTREE _ptRes0=0;
#line 3460 "cplus.met"
        _ptRes0= MakeTree(FOR, 4);
#line 3460 "cplus.met"
        statTree=_ptRes0;
#line 3460 "cplus.met"
    }
#line 3460 "cplus.met"
#line 3461 "cplus.met"
    if (NPUSH_CALL_AFF_VERIF(opt = ,_Tak(expression_for), 67, cplus)){
#line 3461 "cplus.met"
#line 3462 "cplus.met"
        ReplaceTree(statTree ,1 ,opt );
#line 3462 "cplus.met"
#line 3462 "cplus.met"
    } else {
#line 3462 "cplus.met"
#line 3464 "cplus.met"
        if (NPUSH_CALL_AFF_VERIF(opt = ,_Tak(data_declaration_for), 45, cplus)){
#line 3464 "cplus.met"
#line 3465 "cplus.met"
            ReplaceTree(statTree ,1 ,opt );
#line 3465 "cplus.met"
#line 3465 "cplus.met"
        }
#line 3465 "cplus.met"
    }
#line 3465 "cplus.met"
#line 3466 "cplus.met"
    if ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN(DPOI,":") && (tokenAhead = 0,CommTerm(),1)){
#line 3466 "cplus.met"
#line 3467 "cplus.met"
#line 3468 "cplus.met"
        {
#line 3468 "cplus.met"
            PPTREE _ptTree0=0;
#line 3468 "cplus.met"
            {
#line 3468 "cplus.met"
                PPTREE _ptTree1=0,_ptRes1=0;
#line 3468 "cplus.met"
                _ptRes1= MakeTree(ALL_OF, 2);
#line 3468 "cplus.met"
                ReplaceTree(_ptRes1, 1, opt );
#line 3468 "cplus.met"
                if ( (_ptTree1=NQUICK_CALL(_Tak(expression)(error_free), 66, cplus))== (PPTREE) -1 ) {
#line 3468 "cplus.met"
                    MulFreeTree(5,_ptRes1,_ptTree1,_ptTree0,opt,statTree);
                    PROG_EXIT(for_statement_exit,"for_statement")
#line 3468 "cplus.met"
                }
#line 3468 "cplus.met"
                ReplaceTree(_ptRes1, 2, _ptTree1);
#line 3468 "cplus.met"
                _ptTree0=_ptRes1;
#line 3468 "cplus.met"
            }
#line 3468 "cplus.met"
            ReplaceTree(statTree , 1 , _ptTree0);
#line 3468 "cplus.met"
        }
#line 3468 "cplus.met"
#line 3468 "cplus.met"
#line 3468 "cplus.met"
    } else {
#line 3468 "cplus.met"
#line 3471 "cplus.met"
#line 3472 "cplus.met"
        (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3472 "cplus.met"
        if (  !SEE_TOKEN( PVIR,";") || !(CommTerm(),1)) {
#line 3472 "cplus.met"
            MulFreeTree(2,opt,statTree);
            TOKEN_EXIT(for_statement_exit,";")
#line 3472 "cplus.met"
        } else {
#line 3472 "cplus.met"
            tokenAhead = 0 ;
#line 3472 "cplus.met"
        }
#line 3472 "cplus.met"
#line 3473 "cplus.met"
        if (NPUSH_CALL_AFF_VERIF(opt = ,_Tak(expression), 66, cplus)){
#line 3473 "cplus.met"
#line 3474 "cplus.met"
            ReplaceTree(statTree ,2 ,opt );
#line 3474 "cplus.met"
#line 3474 "cplus.met"
        }
#line 3474 "cplus.met"
#line 3475 "cplus.met"
        (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3475 "cplus.met"
        if (  !SEE_TOKEN( PVIR,";") || !(CommTerm(),1)) {
#line 3475 "cplus.met"
            MulFreeTree(2,opt,statTree);
            TOKEN_EXIT(for_statement_exit,";")
#line 3475 "cplus.met"
        } else {
#line 3475 "cplus.met"
            tokenAhead = 0 ;
#line 3475 "cplus.met"
        }
#line 3475 "cplus.met"
#line 3476 "cplus.met"
        if (NPUSH_CALL_AFF_VERIF(opt = ,_Tak(expression), 66, cplus)){
#line 3476 "cplus.met"
#line 3477 "cplus.met"
            ReplaceTree(statTree ,3 ,opt );
#line 3477 "cplus.met"
#line 3477 "cplus.met"
        }
#line 3477 "cplus.met"
#line 3477 "cplus.met"
    }
#line 3477 "cplus.met"
#line 3479 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3479 "cplus.met"
    if (  !SEE_TOKEN( PFER,")") || !(CommTerm(),1)) {
#line 3479 "cplus.met"
        MulFreeTree(2,opt,statTree);
        TOKEN_EXIT(for_statement_exit,")")
#line 3479 "cplus.met"
    } else {
#line 3479 "cplus.met"
        tokenAhead = 0 ;
#line 3479 "cplus.met"
    }
#line 3479 "cplus.met"
#line 3480 "cplus.met"
    {
#line 3480 "cplus.met"
        switchContext = 0 ;
#line 3480 "cplus.met"
#line 3481 "cplus.met"
        {
#line 3481 "cplus.met"
            PPTREE _ptTree0=0;
#line 3481 "cplus.met"
            if ( (_ptTree0=NQUICK_CALL(_Tak(statement)(error_free), 144, cplus))== (PPTREE) -1 ) {
#line 3481 "cplus.met"
                MulFreeTree(3,_ptTree0,opt,statTree);
                PROG_EXIT(for_statement_exit,"for_statement")
#line 3481 "cplus.met"
            }
#line 3481 "cplus.met"
            ReplaceTree(statTree , 4 , _ptTree0);
#line 3481 "cplus.met"
        }
#line 3481 "cplus.met"
        switchContext =  _oldswitchContext;
#line 3481 "cplus.met"
    }
#line 3481 "cplus.met"
#line 3482 "cplus.met"
    {
#line 3482 "cplus.met"
        _retValue = statTree ;
#line 3482 "cplus.met"
        goto for_statement_ret;
#line 3482 "cplus.met"
        
#line 3482 "cplus.met"
    }
#line 3482 "cplus.met"
#line 3482 "cplus.met"
#line 3482 "cplus.met"

#line 3483 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 3483 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 3483 "cplus.met"
switchContext =  _oldswitchContext;
#line 3483 "cplus.met"
return((PPTREE) 0);
#line 3483 "cplus.met"

#line 3483 "cplus.met"
for_statement_exit :
#line 3483 "cplus.met"

#line 3483 "cplus.met"
    _Debug = TRACE_RULE("for_statement",TRACE_EXIT,(PPTREE)0);
#line 3483 "cplus.met"
    _funcLevel--;
#line 3483 "cplus.met"
    switchContext =  _oldswitchContext;
#line 3483 "cplus.met"
    return((PPTREE) -1) ;
#line 3483 "cplus.met"

#line 3483 "cplus.met"
for_statement_ret :
#line 3483 "cplus.met"
    
#line 3483 "cplus.met"
    _Debug = TRACE_RULE("for_statement",TRACE_RETURN,_retValue);
#line 3483 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 3483 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 3483 "cplus.met"
    switchContext =  _oldswitchContext;
#line 3483 "cplus.met"
    return _retValue ;
#line 3483 "cplus.met"
}
#line 3483 "cplus.met"

#line 3483 "cplus.met"
#line 3381 "cplus.met"
PPTREE cplus::func_declaration ( int error_free)
#line 3381 "cplus.met"
{
#line 3381 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 3381 "cplus.met"
    int _value,_nbPre = 0 ;
#line 3381 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 3381 "cplus.met"
    int _Debug = TRACE_RULE("func_declaration",TRACE_ENTER,(PPTREE)0);
#line 3381 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 3381 "cplus.met"
#line 3381 "cplus.met"
    PPTREE _addlist1 = (PPTREE) 0;
#line 3381 "cplus.met"
#line 3381 "cplus.met"
    PPTREE funcTree = (PPTREE) 0,opt = (PPTREE) 0,decList = (PPTREE) 0,range = (PPTREE) 0,exception = (PPTREE) 0;
#line 3381 "cplus.met"
#line 3385 "cplus.met"
    if (! (NPUSH_CALL_AFF_VERIF(funcTree = ,_Tak(type_and_declarator), 150, cplus))){
#line 3385 "cplus.met"
#line 3387 "cplus.met"
#line 3388 "cplus.met"
        {
#line 3388 "cplus.met"
            PPTREE _ptTree0=0,_ptRes0=0;
#line 3388 "cplus.met"
            _ptRes0= MakeTree(FUNC, 11);
#line 3388 "cplus.met"
            if ( (_ptTree0=NQUICK_CALL(_Tak(sc_specifier)(error_free), 131, cplus))== (PPTREE) -1 ) {
#line 3388 "cplus.met"
                MulFreeTree(8,_ptRes0,_ptTree0,_addlist1,decList,exception,funcTree,opt,range);
                PROG_EXIT(func_declaration_exit,"func_declaration")
#line 3388 "cplus.met"
            }
#line 3388 "cplus.met"
            ReplaceTree(_ptRes0, 1, _ptTree0);
#line 3388 "cplus.met"
            funcTree=_ptRes0;
#line 3388 "cplus.met"
        }
#line 3388 "cplus.met"
#line 3389 "cplus.met"
        {
#line 3389 "cplus.met"
            PPTREE _ptTree0=0;
#line 3389 "cplus.met"
            if ( (_ptTree0=NQUICK_CALL(_Tak(func_declarator)(error_free), 81, cplus))== (PPTREE) -1 ) {
#line 3389 "cplus.met"
                MulFreeTree(7,_ptTree0,_addlist1,decList,exception,funcTree,opt,range);
                PROG_EXIT(func_declaration_exit,"func_declaration")
#line 3389 "cplus.met"
            }
#line 3389 "cplus.met"
            ReplaceTree(funcTree , 3 , _ptTree0);
#line 3389 "cplus.met"
        }
#line 3389 "cplus.met"
#line 3389 "cplus.met"
#line 3389 "cplus.met"
    }
#line 3389 "cplus.met"
#line 3391 "cplus.met"
    {
#line 3391 "cplus.met"
        PPTREE _ptTree0=0;
#line 3391 "cplus.met"
        if ( (_ptTree0=NQUICK_CALL(_Tak(parameter_list_extended)(error_free), 111, cplus))== (PPTREE) -1 ) {
#line 3391 "cplus.met"
            MulFreeTree(7,_ptTree0,_addlist1,decList,exception,funcTree,opt,range);
            PROG_EXIT(func_declaration_exit,"func_declaration")
#line 3391 "cplus.met"
        }
#line 3391 "cplus.met"
        ReplaceTree(funcTree , 4 , _ptTree0);
#line 3391 "cplus.met"
    }
#line 3391 "cplus.met"
#line 3392 "cplus.met"
    if (NPUSH_CALL_AFF_VERIF(range = ,_Tak(range_modifier_function), 127, cplus)){
#line 3392 "cplus.met"
#line 3393 "cplus.met"
        ReplaceTree(funcTree ,5 ,range );
#line 3393 "cplus.met"
#line 3393 "cplus.met"
    }
#line 3393 "cplus.met"
#line 3394 "cplus.met"
    if (NPUSH_CALL_AFF_VERIF(exception = ,_Tak(exception_list), 64, cplus)){
#line 3394 "cplus.met"
#line 3395 "cplus.met"
        ReplaceTree(funcTree ,9 ,exception );
#line 3395 "cplus.met"
#line 3395 "cplus.met"
    }
#line 3395 "cplus.met"
#line 3396 "cplus.met"
    if ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN(EGAL,"=") && (tokenAhead = 0,CommTerm(),1)){
#line 3396 "cplus.met"
#line 3397 "cplus.met"
#line 3398 "cplus.met"
        (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3398 "cplus.met"
        if (  !SEE_TOKEN( DELETE,"delete") || !(CommTerm(),1)) {
#line 3398 "cplus.met"
            MulFreeTree(6,_addlist1,decList,exception,funcTree,opt,range);
            TOKEN_EXIT(func_declaration_exit,"delete")
#line 3398 "cplus.met"
        } else {
#line 3398 "cplus.met"
            tokenAhead = 0 ;
#line 3398 "cplus.met"
        }
#line 3398 "cplus.met"
#line 3399 "cplus.met"
        (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3399 "cplus.met"
        if (  !SEE_TOKEN( PVIR,";") || !(CommTerm(),1)) {
#line 3399 "cplus.met"
            MulFreeTree(6,_addlist1,decList,exception,funcTree,opt,range);
            TOKEN_EXIT(func_declaration_exit,";")
#line 3399 "cplus.met"
        } else {
#line 3399 "cplus.met"
            tokenAhead = 0 ;
#line 3399 "cplus.met"
        }
#line 3399 "cplus.met"
#line 3400 "cplus.met"
        {
#line 3400 "cplus.met"
            PPTREE _ptTree0=0;
#line 3400 "cplus.met"
            {
#line 3400 "cplus.met"
                PPTREE _ptTree1=0;
#line 3400 "cplus.met"
                {
#line 3400 "cplus.met"
                    PPTREE _ptRes2=0;
#line 3400 "cplus.met"
                    _ptRes2= MakeTree(DELETE_FUNCTION, 0);
#line 3400 "cplus.met"
                    _ptTree1=_ptRes2;
#line 3400 "cplus.met"
                }
#line 3400 "cplus.met"
                _ptTree0=ReplaceTree(funcTree , 10 , _ptTree1);
#line 3400 "cplus.met"
            }
#line 3400 "cplus.met"
            _retValue =_ptTree0;
#line 3400 "cplus.met"
            goto func_declaration_ret;
#line 3400 "cplus.met"
        }
#line 3400 "cplus.met"
#line 3400 "cplus.met"
#line 3400 "cplus.met"
    } else {
#line 3400 "cplus.met"
#line 3403 "cplus.met"
#line 3403 "cplus.met"
        _addlist1 = decList ;
#line 3403 "cplus.met"
#line 3404 "cplus.met"
        while (NPUSH_CALL_AFF_VERIF(opt = ,_Tak(data_declaration), 44, cplus)) { 
#line 3404 "cplus.met"
#line 3405 "cplus.met"
#line 3405 "cplus.met"
            _addlist1 =AddList(_addlist1 ,opt );
#line 3405 "cplus.met"
#line 3405 "cplus.met"
            if (decList){
#line 3405 "cplus.met"
#line 3405 "cplus.met"
                _addlist1 = SonTree (_addlist1 ,2 );
#line 3405 "cplus.met"
            } else {
#line 3405 "cplus.met"
#line 3405 "cplus.met"
                decList = _addlist1 ;
#line 3405 "cplus.met"
            }
#line 3405 "cplus.met"
        } 
#line 3405 "cplus.met"
#line 3406 "cplus.met"
        ReplaceTree(funcTree ,6 ,decList );
#line 3406 "cplus.met"
#line 3407 "cplus.met"
        {
#line 3407 "cplus.met"
            PPTREE _ptTree0=0;
#line 3407 "cplus.met"
            if ( (_ptTree0=NQUICK_CALL(_Tak(ctor_initializer)(error_free), 36, cplus))== (PPTREE) -1 ) {
#line 3407 "cplus.met"
                MulFreeTree(7,_ptTree0,_addlist1,decList,exception,funcTree,opt,range);
                PROG_EXIT(func_declaration_exit,"func_declaration")
#line 3407 "cplus.met"
            }
#line 3407 "cplus.met"
            ReplaceTree(funcTree , 7 , _ptTree0);
#line 3407 "cplus.met"
        }
#line 3407 "cplus.met"
#line 3408 "cplus.met"
        {
#line 3408 "cplus.met"
            PPTREE _ptTree0=0;
#line 3408 "cplus.met"
            {
#line 3408 "cplus.met"
                PPTREE _ptTree1=0;
#line 3408 "cplus.met"
                if ( (_ptTree1=NQUICK_CALL(_Tak(compound_statement)(error_free), 32, cplus))== (PPTREE) -1 ) {
#line 3408 "cplus.met"
                    MulFreeTree(8,_ptTree1,_ptTree0,_addlist1,decList,exception,funcTree,opt,range);
                    PROG_EXIT(func_declaration_exit,"func_declaration")
#line 3408 "cplus.met"
                }
#line 3408 "cplus.met"
                _ptTree0=ReplaceTree(funcTree , 8 , _ptTree1);
#line 3408 "cplus.met"
            }
#line 3408 "cplus.met"
            _retValue =_ptTree0;
#line 3408 "cplus.met"
            goto func_declaration_ret;
#line 3408 "cplus.met"
        }
#line 3408 "cplus.met"
#line 3408 "cplus.met"
    }
#line 3408 "cplus.met"
#line 3408 "cplus.met"
#line 3409 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 3409 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 3409 "cplus.met"
return((PPTREE) 0);
#line 3409 "cplus.met"

#line 3409 "cplus.met"
func_declaration_exit :
#line 3409 "cplus.met"

#line 3409 "cplus.met"
    _Debug = TRACE_RULE("func_declaration",TRACE_EXIT,(PPTREE)0);
#line 3409 "cplus.met"
    _funcLevel--;
#line 3409 "cplus.met"
    return((PPTREE) -1) ;
#line 3409 "cplus.met"

#line 3409 "cplus.met"
func_declaration_ret :
#line 3409 "cplus.met"
    
#line 3409 "cplus.met"
    _Debug = TRACE_RULE("func_declaration",TRACE_RETURN,_retValue);
#line 3409 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 3409 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 3409 "cplus.met"
    return _retValue ;
#line 3409 "cplus.met"
}
#line 3409 "cplus.met"

#line 3409 "cplus.met"
#line 2441 "cplus.met"
PPTREE cplus::func_declarator ( int error_free)
#line 2441 "cplus.met"
{
#line 2441 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 2441 "cplus.met"
    int _value,_nbPre = 0 ;
#line 2441 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 2441 "cplus.met"
    int _Debug = TRACE_RULE("func_declarator",TRACE_ENTER,(PPTREE)0);
#line 2441 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 2441 "cplus.met"
#line 2441 "cplus.met"
    PPTREE valTree = (PPTREE) 0,funcDecl = (PPTREE) 0;
#line 2441 "cplus.met"
#line 2443 "cplus.met"
    if (NPUSH_CALL_AFF_VERIF(valTree = ,_Tak(range_modifier), 126, cplus)){
#line 2443 "cplus.met"
#line 2444 "cplus.met"
        {
#line 2444 "cplus.met"
            PPTREE _ptTree0=0;
#line 2444 "cplus.met"
            {
#line 2444 "cplus.met"
                PPTREE _ptTree1=0;
#line 2444 "cplus.met"
                if ( (_ptTree1=NQUICK_CALL(_Tak(func_declarator)(error_free), 81, cplus))== (PPTREE) -1 ) {
#line 2444 "cplus.met"
                    MulFreeTree(4,_ptTree1,_ptTree0,funcDecl,valTree);
                    PROG_EXIT(func_declarator_exit,"func_declarator")
#line 2444 "cplus.met"
                }
#line 2444 "cplus.met"
                _ptTree0=ReplaceTree(valTree , 2 , _ptTree1);
#line 2444 "cplus.met"
            }
#line 2444 "cplus.met"
            _retValue =_ptTree0;
#line 2444 "cplus.met"
            goto func_declarator_ret;
#line 2444 "cplus.met"
        }
#line 2444 "cplus.met"
    }
#line 2444 "cplus.met"
#line 2445 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 2445 "cplus.met"
    switch( lexEl.Value) {
#line 2445 "cplus.met"
#line 2449 "cplus.met"
        case POUV : 
#line 2449 "cplus.met"
            tokenAhead = 0 ;
#line 2449 "cplus.met"
            CommTerm();
#line 2449 "cplus.met"
#line 2447 "cplus.met"
#line 2448 "cplus.met"
            if ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN( ETOI,"*")){
#line 2448 "cplus.met"
#line 2449 "cplus.met"
                {
#line 2449 "cplus.met"
                    PPTREE _ptTree0=0,_ptRes0=0;
#line 2449 "cplus.met"
                    _ptRes0= MakeTree(TYP, 1);
#line 2449 "cplus.met"
                    if ( (_ptTree0=NQUICK_CALL(_Tak(declarator)(error_free), 50, cplus))== (PPTREE) -1 ) {
#line 2449 "cplus.met"
                        MulFreeTree(4,_ptRes0,_ptTree0,funcDecl,valTree);
                        PROG_EXIT(func_declarator_exit,"func_declarator")
#line 2449 "cplus.met"
                    }
#line 2449 "cplus.met"
                    ReplaceTree(_ptRes0, 1, _ptTree0);
#line 2449 "cplus.met"
                    funcDecl=_ptRes0;
#line 2449 "cplus.met"
                }
#line 2449 "cplus.met"
            } else {
#line 2449 "cplus.met"
#line 2451 "cplus.met"
                
#line 2451 "cplus.met"
                MulFreeTree(2,funcDecl,valTree);
                LEX_EXIT ("",0);
#line 2451 "cplus.met"
                goto func_declarator_exit;
#line 2451 "cplus.met"
            }
#line 2451 "cplus.met"
#line 2452 "cplus.met"
            (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 2452 "cplus.met"
            if (  !SEE_TOKEN( PFER,")") || !(CommTerm(),1)) {
#line 2452 "cplus.met"
                MulFreeTree(2,funcDecl,valTree);
                TOKEN_EXIT(func_declarator_exit,")")
#line 2452 "cplus.met"
            } else {
#line 2452 "cplus.met"
                tokenAhead = 0 ;
#line 2452 "cplus.met"
            }
#line 2452 "cplus.met"
#line 2453 "cplus.met"
            {
#line 2453 "cplus.met"
                _retValue = funcDecl ;
#line 2453 "cplus.met"
                goto func_declarator_ret;
#line 2453 "cplus.met"
                
#line 2453 "cplus.met"
            }
#line 2453 "cplus.met"
#line 2453 "cplus.met"
            break;
#line 2453 "cplus.met"
#line 2455 "cplus.met"
        case ETOI : 
#line 2455 "cplus.met"
            tokenAhead = 0 ;
#line 2455 "cplus.met"
            CommTerm();
#line 2455 "cplus.met"
#line 2455 "cplus.met"
            {
#line 2455 "cplus.met"
                PPTREE _ptTree0=0;
#line 2455 "cplus.met"
                {
#line 2455 "cplus.met"
                    PPTREE _ptTree1=0,_ptRes1=0;
#line 2455 "cplus.met"
                    _ptRes1= MakeTree(TYP_ADDR, 1);
#line 2455 "cplus.met"
                    if ( (_ptTree1=NQUICK_CALL(_Tak(func_declarator)(error_free), 81, cplus))== (PPTREE) -1 ) {
#line 2455 "cplus.met"
                        MulFreeTree(5,_ptRes1,_ptTree1,_ptTree0,funcDecl,valTree);
                        PROG_EXIT(func_declarator_exit,"func_declarator")
#line 2455 "cplus.met"
                    }
#line 2455 "cplus.met"
                    ReplaceTree(_ptRes1, 1, _ptTree1);
#line 2455 "cplus.met"
                    _ptTree0=_ptRes1;
#line 2455 "cplus.met"
                }
#line 2455 "cplus.met"
                _retValue =_ptTree0;
#line 2455 "cplus.met"
                goto func_declarator_ret;
#line 2455 "cplus.met"
            }
#line 2455 "cplus.met"
            break;
#line 2455 "cplus.met"
#line 2456 "cplus.met"
        case ETCO : 
#line 2456 "cplus.met"
            tokenAhead = 0 ;
#line 2456 "cplus.met"
            CommTerm();
#line 2456 "cplus.met"
#line 2456 "cplus.met"
            {
#line 2456 "cplus.met"
                PPTREE _ptTree0=0;
#line 2456 "cplus.met"
                {
#line 2456 "cplus.met"
                    PPTREE _ptTree1=0,_ptRes1=0;
#line 2456 "cplus.met"
                    _ptRes1= MakeTree(TYP_REF, 1);
#line 2456 "cplus.met"
                    if ( (_ptTree1=NQUICK_CALL(_Tak(func_declarator)(error_free), 81, cplus))== (PPTREE) -1 ) {
#line 2456 "cplus.met"
                        MulFreeTree(5,_ptRes1,_ptTree1,_ptTree0,funcDecl,valTree);
                        PROG_EXIT(func_declarator_exit,"func_declarator")
#line 2456 "cplus.met"
                    }
#line 2456 "cplus.met"
                    ReplaceTree(_ptRes1, 1, _ptTree1);
#line 2456 "cplus.met"
                    _ptTree0=_ptRes1;
#line 2456 "cplus.met"
                }
#line 2456 "cplus.met"
                _retValue =_ptTree0;
#line 2456 "cplus.met"
                goto func_declarator_ret;
#line 2456 "cplus.met"
            }
#line 2456 "cplus.met"
            break;
#line 2456 "cplus.met"
#line 2457 "cplus.met"
        case TILD : 
#line 2457 "cplus.met"
#line 2457 "cplus.met"
            {
#line 2457 "cplus.met"
                PPTREE _ptTree0=0;
#line 2457 "cplus.met"
                if ( (_ptTree0=NQUICK_CALL(_Tak(qualified_name)(error_free), 121, cplus))== (PPTREE) -1 ) {
#line 2457 "cplus.met"
                    MulFreeTree(3,_ptTree0,funcDecl,valTree);
                    PROG_EXIT(func_declarator_exit,"func_declarator")
#line 2457 "cplus.met"
                }
#line 2457 "cplus.met"
                _retValue =_ptTree0;
#line 2457 "cplus.met"
                goto func_declarator_ret;
#line 2457 "cplus.met"
            }
#line 2457 "cplus.met"
            break;
#line 2457 "cplus.met"
#line 2458 "cplus.met"
        case META : 
#line 2458 "cplus.met"
        case IDENT : 
#line 2458 "cplus.met"
#line 2458 "cplus.met"
            {
#line 2458 "cplus.met"
                PPTREE _ptTree0=0;
#line 2458 "cplus.met"
                if ( (_ptTree0=NQUICK_CALL(_Tak(qualified_name)(error_free), 121, cplus))== (PPTREE) -1 ) {
#line 2458 "cplus.met"
                    MulFreeTree(3,_ptTree0,funcDecl,valTree);
                    PROG_EXIT(func_declarator_exit,"func_declarator")
#line 2458 "cplus.met"
                }
#line 2458 "cplus.met"
                _retValue =_ptTree0;
#line 2458 "cplus.met"
                goto func_declarator_ret;
#line 2458 "cplus.met"
            }
#line 2458 "cplus.met"
            break;
#line 2458 "cplus.met"
#line 2459 "cplus.met"
        case OPERATOR : 
#line 2459 "cplus.met"
#line 2459 "cplus.met"
            {
#line 2459 "cplus.met"
                PPTREE _ptTree0=0;
#line 2459 "cplus.met"
                if ( (_ptTree0=NQUICK_CALL(_Tak(operator_function_name)(error_free), 108, cplus))== (PPTREE) -1 ) {
#line 2459 "cplus.met"
                    MulFreeTree(3,_ptTree0,funcDecl,valTree);
                    PROG_EXIT(func_declarator_exit,"func_declarator")
#line 2459 "cplus.met"
                }
#line 2459 "cplus.met"
                _retValue =_ptTree0;
#line 2459 "cplus.met"
                goto func_declarator_ret;
#line 2459 "cplus.met"
            }
#line 2459 "cplus.met"
            break;
#line 2459 "cplus.met"
        default :
#line 2459 "cplus.met"
            MulFreeTree(2,funcDecl,valTree);
            CASE_EXIT(func_declarator_exit,"either ( or * or & or ~ or IDENT or operator")
#line 2459 "cplus.met"
            break;
#line 2459 "cplus.met"
    }
#line 2459 "cplus.met"
#line 2459 "cplus.met"
#line 2460 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2460 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 2460 "cplus.met"
return((PPTREE) 0);
#line 2460 "cplus.met"

#line 2460 "cplus.met"
func_declarator_exit :
#line 2460 "cplus.met"

#line 2460 "cplus.met"
    _Debug = TRACE_RULE("func_declarator",TRACE_EXIT,(PPTREE)0);
#line 2460 "cplus.met"
    _funcLevel--;
#line 2460 "cplus.met"
    return((PPTREE) -1) ;
#line 2460 "cplus.met"

#line 2460 "cplus.met"
func_declarator_ret :
#line 2460 "cplus.met"
    
#line 2460 "cplus.met"
    _Debug = TRACE_RULE("func_declarator",TRACE_RETURN,_retValue);
#line 2460 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2460 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 2460 "cplus.met"
    return _retValue ;
#line 2460 "cplus.met"
}
#line 2460 "cplus.met"

#line 2460 "cplus.met"
