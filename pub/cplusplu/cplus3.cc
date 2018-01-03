/*************************************************************************/
/*                                                                       */
/*        Produced by MetaGen version 2.0  -    1989-2006                 */
/*       Syntaxic Analyzer Meta Generator developped by                  */
/*                  Eric Lavillonniere                                   */
/*                                                                       */
/*************************************************************************/

#include "token.h"
#include "cplus.h"


#line 3277 "cplus.met"
PPTREE cplus::for_statement ( int error_free)
#line 3277 "cplus.met"
{
#line 3277 "cplus.met"
    int  _oldswitchContext = switchContext;
#line 3277 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 3277 "cplus.met"
    int _value,_nbPre = 0 ;
#line 3277 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 3277 "cplus.met"
    int _Debug = TRACE_RULE("for_statement",TRACE_ENTER,(PPTREE)0);
#line 3277 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 3277 "cplus.met"
#line 3277 "cplus.met"
    PPTREE statTree = (PPTREE) 0,opt = (PPTREE) 0,stat = (PPTREE) 0;
#line 3277 "cplus.met"
#line 3279 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3279 "cplus.met"
    if (  !SEE_TOKEN( POUV,"(") || !(CommTerm(),1)) {
#line 3279 "cplus.met"
        MulFreeTree(3,opt,stat,statTree);
        TOKEN_EXIT(for_statement_exit,"(")
#line 3279 "cplus.met"
    } else {
#line 3279 "cplus.met"
        tokenAhead = 0 ;
#line 3279 "cplus.met"
    }
#line 3279 "cplus.met"
#line 3280 "cplus.met"
    {
#line 3280 "cplus.met"
        PPTREE _ptRes0=0;
#line 3280 "cplus.met"
        _ptRes0= MakeTree(FOR, 4);
#line 3280 "cplus.met"
        statTree=_ptRes0;
#line 3280 "cplus.met"
    }
#line 3280 "cplus.met"
#line 3281 "cplus.met"
    if (NPUSH_CALL_AFF_VERIF(opt = ,_Tak(expression_for), 60, cplus)){
#line 3281 "cplus.met"
#line 3282 "cplus.met"
        ReplaceTree(statTree ,1 ,opt );
#line 3282 "cplus.met"
#line 3282 "cplus.met"
    } else {
#line 3282 "cplus.met"
#line 3284 "cplus.met"
        if (NPUSH_CALL_AFF_VERIF(opt = ,_Tak(data_declaration_for), 39, cplus)){
#line 3284 "cplus.met"
#line 3285 "cplus.met"
            ReplaceTree(statTree ,1 ,opt );
#line 3285 "cplus.met"
#line 3285 "cplus.met"
        }
#line 3285 "cplus.met"
    }
#line 3285 "cplus.met"
#line 3286 "cplus.met"
    if ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN(DPOI,":") && (tokenAhead = 0,CommTerm(),1)){
#line 3286 "cplus.met"
#line 3287 "cplus.met"
#line 3288 "cplus.met"
        {
#line 3288 "cplus.met"
            PPTREE _ptTree0=0;
#line 3288 "cplus.met"
            {
#line 3288 "cplus.met"
                PPTREE _ptTree1=0,_ptRes1=0;
#line 3288 "cplus.met"
                _ptRes1= MakeTree(ALL_OF, 2);
#line 3288 "cplus.met"
                ReplaceTree(_ptRes1, 1, opt );
#line 3288 "cplus.met"
                if ( (_ptTree1=NQUICK_CALL(_Tak(expression)(error_free), 59, cplus))== (PPTREE) -1 ) {
#line 3288 "cplus.met"
                    MulFreeTree(6,_ptRes1,_ptTree1,_ptTree0,opt,stat,statTree);
                    PROG_EXIT(for_statement_exit,"for_statement")
#line 3288 "cplus.met"
                }
#line 3288 "cplus.met"
                ReplaceTree(_ptRes1, 2, _ptTree1);
#line 3288 "cplus.met"
                _ptTree0=_ptRes1;
#line 3288 "cplus.met"
            }
#line 3288 "cplus.met"
            ReplaceTree(statTree , 1 , _ptTree0);
#line 3288 "cplus.met"
        }
#line 3288 "cplus.met"
#line 3288 "cplus.met"
#line 3288 "cplus.met"
    } else {
#line 3288 "cplus.met"
#line 3291 "cplus.met"
#line 3292 "cplus.met"
        (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3292 "cplus.met"
        if (  !SEE_TOKEN( PVIR,";") || !(CommTerm(),1)) {
#line 3292 "cplus.met"
            MulFreeTree(3,opt,stat,statTree);
            TOKEN_EXIT(for_statement_exit,";")
#line 3292 "cplus.met"
        } else {
#line 3292 "cplus.met"
            tokenAhead = 0 ;
#line 3292 "cplus.met"
        }
#line 3292 "cplus.met"
#line 3293 "cplus.met"
        if (NPUSH_CALL_AFF_VERIF(opt = ,_Tak(expression), 59, cplus)){
#line 3293 "cplus.met"
#line 3294 "cplus.met"
            ReplaceTree(statTree ,2 ,opt );
#line 3294 "cplus.met"
#line 3294 "cplus.met"
        }
#line 3294 "cplus.met"
#line 3295 "cplus.met"
        (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3295 "cplus.met"
        if (  !SEE_TOKEN( PVIR,";") || !(CommTerm(),1)) {
#line 3295 "cplus.met"
            MulFreeTree(3,opt,stat,statTree);
            TOKEN_EXIT(for_statement_exit,";")
#line 3295 "cplus.met"
        } else {
#line 3295 "cplus.met"
            tokenAhead = 0 ;
#line 3295 "cplus.met"
        }
#line 3295 "cplus.met"
#line 3296 "cplus.met"
        if (NPUSH_CALL_AFF_VERIF(opt = ,_Tak(expression), 59, cplus)){
#line 3296 "cplus.met"
#line 3297 "cplus.met"
            ReplaceTree(statTree ,3 ,opt );
#line 3297 "cplus.met"
#line 3297 "cplus.met"
        }
#line 3297 "cplus.met"
#line 3297 "cplus.met"
    }
#line 3297 "cplus.met"
#line 3299 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3299 "cplus.met"
    if (  !SEE_TOKEN( PFER,")") || !(CommTerm(),1)) {
#line 3299 "cplus.met"
        MulFreeTree(3,opt,stat,statTree);
        TOKEN_EXIT(for_statement_exit,")")
#line 3299 "cplus.met"
    } else {
#line 3299 "cplus.met"
        tokenAhead = 0 ;
#line 3299 "cplus.met"
    }
#line 3299 "cplus.met"
#line 3300 "cplus.met"
    {
#line 3300 "cplus.met"
        switchContext = 0 ;
#line 3300 "cplus.met"
#line 3301 "cplus.met"
        {
#line 3301 "cplus.met"
            PPTREE _ptTree0=0;
#line 3301 "cplus.met"
            if ( (_ptTree0=NQUICK_CALL(_Tak(statement)(error_free), 132, cplus))== (PPTREE) -1 ) {
#line 3301 "cplus.met"
                MulFreeTree(4,_ptTree0,opt,stat,statTree);
                PROG_EXIT(for_statement_exit,"for_statement")
#line 3301 "cplus.met"
            }
#line 3301 "cplus.met"
            ReplaceTree(statTree , 4 , _ptTree0);
#line 3301 "cplus.met"
        }
#line 3301 "cplus.met"
        switchContext =  _oldswitchContext;
#line 3301 "cplus.met"
    }
#line 3301 "cplus.met"
#line 3302 "cplus.met"
    {
#line 3302 "cplus.met"
        _retValue = statTree ;
#line 3302 "cplus.met"
        goto for_statement_ret;
#line 3302 "cplus.met"
        
#line 3302 "cplus.met"
    }
#line 3302 "cplus.met"
#line 3302 "cplus.met"
#line 3302 "cplus.met"

#line 3303 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 3303 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 3303 "cplus.met"
switchContext =  _oldswitchContext;
#line 3303 "cplus.met"
return((PPTREE) 0);
#line 3303 "cplus.met"

#line 3303 "cplus.met"
for_statement_exit :
#line 3303 "cplus.met"

#line 3303 "cplus.met"
    _Debug = TRACE_RULE("for_statement",TRACE_EXIT,(PPTREE)0);
#line 3303 "cplus.met"
    _funcLevel--;
#line 3303 "cplus.met"
    switchContext =  _oldswitchContext;
#line 3303 "cplus.met"
    return((PPTREE) -1) ;
#line 3303 "cplus.met"

#line 3303 "cplus.met"
for_statement_ret :
#line 3303 "cplus.met"
    
#line 3303 "cplus.met"
    _Debug = TRACE_RULE("for_statement",TRACE_RETURN,_retValue);
#line 3303 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 3303 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 3303 "cplus.met"
    switchContext =  _oldswitchContext;
#line 3303 "cplus.met"
    return _retValue ;
#line 3303 "cplus.met"
}
#line 3303 "cplus.met"

#line 3303 "cplus.met"
#line 3206 "cplus.met"
PPTREE cplus::func_declaration ( int error_free)
#line 3206 "cplus.met"
{
#line 3206 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 3206 "cplus.met"
    int _value,_nbPre = 0 ;
#line 3206 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 3206 "cplus.met"
    int _Debug = TRACE_RULE("func_declaration",TRACE_ENTER,(PPTREE)0);
#line 3206 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 3206 "cplus.met"
#line 3206 "cplus.met"
    PPTREE _addlist1 = (PPTREE) 0;
#line 3206 "cplus.met"
#line 3206 "cplus.met"
    PPTREE funcTree = (PPTREE) 0,opt = (PPTREE) 0,decList = (PPTREE) 0,range = (PPTREE) 0,exception = (PPTREE) 0;
#line 3206 "cplus.met"
#line 3210 "cplus.met"
    if (! (NPUSH_CALL_AFF_VERIF(funcTree = ,_Tak(type_and_declarator), 138, cplus))){
#line 3210 "cplus.met"
#line 3212 "cplus.met"
#line 3213 "cplus.met"
        {
#line 3213 "cplus.met"
            PPTREE _ptTree0=0,_ptRes0=0;
#line 3213 "cplus.met"
            _ptRes0= MakeTree(FUNC, 9);
#line 3213 "cplus.met"
            if ( (_ptTree0=NQUICK_CALL(_Tak(sc_specifier)(error_free), 122, cplus))== (PPTREE) -1 ) {
#line 3213 "cplus.met"
                MulFreeTree(8,_ptRes0,_ptTree0,_addlist1,decList,exception,funcTree,opt,range);
                PROG_EXIT(func_declaration_exit,"func_declaration")
#line 3213 "cplus.met"
            }
#line 3213 "cplus.met"
            ReplaceTree(_ptRes0, 1, _ptTree0);
#line 3213 "cplus.met"
            funcTree=_ptRes0;
#line 3213 "cplus.met"
        }
#line 3213 "cplus.met"
#line 3214 "cplus.met"
        {
#line 3214 "cplus.met"
            PPTREE _ptTree0=0;
#line 3214 "cplus.met"
            if ( (_ptTree0=NQUICK_CALL(_Tak(func_declarator)(error_free), 74, cplus))== (PPTREE) -1 ) {
#line 3214 "cplus.met"
                MulFreeTree(7,_ptTree0,_addlist1,decList,exception,funcTree,opt,range);
                PROG_EXIT(func_declaration_exit,"func_declaration")
#line 3214 "cplus.met"
            }
#line 3214 "cplus.met"
            ReplaceTree(funcTree , 3 , _ptTree0);
#line 3214 "cplus.met"
        }
#line 3214 "cplus.met"
#line 3214 "cplus.met"
#line 3214 "cplus.met"
    }
#line 3214 "cplus.met"
#line 3216 "cplus.met"
    {
#line 3216 "cplus.met"
        PPTREE _ptTree0=0;
#line 3216 "cplus.met"
        if ( (_ptTree0=NQUICK_CALL(_Tak(parameter_list_extended)(error_free), 103, cplus))== (PPTREE) -1 ) {
#line 3216 "cplus.met"
            MulFreeTree(7,_ptTree0,_addlist1,decList,exception,funcTree,opt,range);
            PROG_EXIT(func_declaration_exit,"func_declaration")
#line 3216 "cplus.met"
        }
#line 3216 "cplus.met"
        ReplaceTree(funcTree , 4 , _ptTree0);
#line 3216 "cplus.met"
    }
#line 3216 "cplus.met"
#line 3217 "cplus.met"
    if (NPUSH_CALL_AFF_VERIF(range = ,_Tak(range_modifier_function), 118, cplus)){
#line 3217 "cplus.met"
#line 3218 "cplus.met"
        ReplaceTree(funcTree ,5 ,range );
#line 3218 "cplus.met"
#line 3218 "cplus.met"
    }
#line 3218 "cplus.met"
#line 3219 "cplus.met"
    if (NPUSH_CALL_AFF_VERIF(exception = ,_Tak(exception_list), 57, cplus)){
#line 3219 "cplus.met"
#line 3220 "cplus.met"
        ReplaceTree(funcTree ,9 ,exception );
#line 3220 "cplus.met"
#line 3220 "cplus.met"
    }
#line 3220 "cplus.met"
#line 3220 "cplus.met"
    _addlist1 = decList ;
#line 3220 "cplus.met"
#line 3221 "cplus.met"
    while (NPUSH_CALL_AFF_VERIF(opt = ,_Tak(data_declaration), 38, cplus)) { 
#line 3221 "cplus.met"
#line 3222 "cplus.met"
#line 3222 "cplus.met"
        _addlist1 =AddList(_addlist1 ,opt );
#line 3222 "cplus.met"
#line 3222 "cplus.met"
        if (decList){
#line 3222 "cplus.met"
#line 3222 "cplus.met"
            _addlist1 = SonTree (_addlist1 ,2 );
#line 3222 "cplus.met"
        } else {
#line 3222 "cplus.met"
#line 3222 "cplus.met"
            decList = _addlist1 ;
#line 3222 "cplus.met"
        }
#line 3222 "cplus.met"
    } 
#line 3222 "cplus.met"
#line 3223 "cplus.met"
    ReplaceTree(funcTree ,6 ,decList );
#line 3223 "cplus.met"
#line 3224 "cplus.met"
    {
#line 3224 "cplus.met"
        PPTREE _ptTree0=0;
#line 3224 "cplus.met"
        if ( (_ptTree0=NQUICK_CALL(_Tak(ctor_initializer)(error_free), 30, cplus))== (PPTREE) -1 ) {
#line 3224 "cplus.met"
            MulFreeTree(7,_ptTree0,_addlist1,decList,exception,funcTree,opt,range);
            PROG_EXIT(func_declaration_exit,"func_declaration")
#line 3224 "cplus.met"
        }
#line 3224 "cplus.met"
        ReplaceTree(funcTree , 7 , _ptTree0);
#line 3224 "cplus.met"
    }
#line 3224 "cplus.met"
#line 3225 "cplus.met"
    {
#line 3225 "cplus.met"
        PPTREE _ptTree0=0;
#line 3225 "cplus.met"
        {
#line 3225 "cplus.met"
            PPTREE _ptTree1=0;
#line 3225 "cplus.met"
            if ( (_ptTree1=NQUICK_CALL(_Tak(compound_statement)(error_free), 26, cplus))== (PPTREE) -1 ) {
#line 3225 "cplus.met"
                MulFreeTree(8,_ptTree1,_ptTree0,_addlist1,decList,exception,funcTree,opt,range);
                PROG_EXIT(func_declaration_exit,"func_declaration")
#line 3225 "cplus.met"
            }
#line 3225 "cplus.met"
            _ptTree0=ReplaceTree(funcTree , 8 , _ptTree1);
#line 3225 "cplus.met"
        }
#line 3225 "cplus.met"
        _retValue =_ptTree0;
#line 3225 "cplus.met"
        goto func_declaration_ret;
#line 3225 "cplus.met"
    }
#line 3225 "cplus.met"
#line 3225 "cplus.met"
#line 3225 "cplus.met"

#line 3226 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 3226 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 3226 "cplus.met"
return((PPTREE) 0);
#line 3226 "cplus.met"

#line 3226 "cplus.met"
func_declaration_exit :
#line 3226 "cplus.met"

#line 3226 "cplus.met"
    _Debug = TRACE_RULE("func_declaration",TRACE_EXIT,(PPTREE)0);
#line 3226 "cplus.met"
    _funcLevel--;
#line 3226 "cplus.met"
    return((PPTREE) -1) ;
#line 3226 "cplus.met"

#line 3226 "cplus.met"
func_declaration_ret :
#line 3226 "cplus.met"
    
#line 3226 "cplus.met"
    _Debug = TRACE_RULE("func_declaration",TRACE_RETURN,_retValue);
#line 3226 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 3226 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 3226 "cplus.met"
    return _retValue ;
#line 3226 "cplus.met"
}
#line 3226 "cplus.met"

#line 3226 "cplus.met"
#line 2303 "cplus.met"
PPTREE cplus::func_declarator ( int error_free)
#line 2303 "cplus.met"
{
#line 2303 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 2303 "cplus.met"
    int _value,_nbPre = 0 ;
#line 2303 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 2303 "cplus.met"
    int _Debug = TRACE_RULE("func_declarator",TRACE_ENTER,(PPTREE)0);
#line 2303 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 2303 "cplus.met"
#line 2303 "cplus.met"
    PPTREE valTree = (PPTREE) 0;
#line 2303 "cplus.met"
#line 2305 "cplus.met"
    if (NPUSH_CALL_AFF_VERIF(valTree = ,_Tak(range_modifier), 117, cplus)){
#line 2305 "cplus.met"
#line 2306 "cplus.met"
        {
#line 2306 "cplus.met"
            PPTREE _ptTree0=0;
#line 2306 "cplus.met"
            {
#line 2306 "cplus.met"
                PPTREE _ptTree1=0;
#line 2306 "cplus.met"
                if ( (_ptTree1=NQUICK_CALL(_Tak(func_declarator)(error_free), 74, cplus))== (PPTREE) -1 ) {
#line 2306 "cplus.met"
                    MulFreeTree(3,_ptTree1,_ptTree0,valTree);
                    PROG_EXIT(func_declarator_exit,"func_declarator")
#line 2306 "cplus.met"
                }
#line 2306 "cplus.met"
                _ptTree0=ReplaceTree(valTree , 2 , _ptTree1);
#line 2306 "cplus.met"
            }
#line 2306 "cplus.met"
            _retValue =_ptTree0;
#line 2306 "cplus.met"
            goto func_declarator_ret;
#line 2306 "cplus.met"
        }
#line 2306 "cplus.met"
    }
#line 2306 "cplus.met"
#line 2307 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 2307 "cplus.met"
    switch( lexEl.Value) {
#line 2307 "cplus.met"
#line 2308 "cplus.met"
        case ETOI : 
#line 2308 "cplus.met"
            tokenAhead = 0 ;
#line 2308 "cplus.met"
            CommTerm();
#line 2308 "cplus.met"
#line 2308 "cplus.met"
            {
#line 2308 "cplus.met"
                PPTREE _ptTree0=0;
#line 2308 "cplus.met"
                {
#line 2308 "cplus.met"
                    PPTREE _ptTree1=0,_ptRes1=0;
#line 2308 "cplus.met"
                    _ptRes1= MakeTree(TYP_ADDR, 1);
#line 2308 "cplus.met"
                    if ( (_ptTree1=NQUICK_CALL(_Tak(func_declarator)(error_free), 74, cplus))== (PPTREE) -1 ) {
#line 2308 "cplus.met"
                        MulFreeTree(4,_ptRes1,_ptTree1,_ptTree0,valTree);
                        PROG_EXIT(func_declarator_exit,"func_declarator")
#line 2308 "cplus.met"
                    }
#line 2308 "cplus.met"
                    ReplaceTree(_ptRes1, 1, _ptTree1);
#line 2308 "cplus.met"
                    _ptTree0=_ptRes1;
#line 2308 "cplus.met"
                }
#line 2308 "cplus.met"
                _retValue =_ptTree0;
#line 2308 "cplus.met"
                goto func_declarator_ret;
#line 2308 "cplus.met"
            }
#line 2308 "cplus.met"
            break;
#line 2308 "cplus.met"
#line 2309 "cplus.met"
        case ETCO : 
#line 2309 "cplus.met"
            tokenAhead = 0 ;
#line 2309 "cplus.met"
            CommTerm();
#line 2309 "cplus.met"
#line 2309 "cplus.met"
            {
#line 2309 "cplus.met"
                PPTREE _ptTree0=0;
#line 2309 "cplus.met"
                {
#line 2309 "cplus.met"
                    PPTREE _ptTree1=0,_ptRes1=0;
#line 2309 "cplus.met"
                    _ptRes1= MakeTree(TYP_REF, 1);
#line 2309 "cplus.met"
                    if ( (_ptTree1=NQUICK_CALL(_Tak(func_declarator)(error_free), 74, cplus))== (PPTREE) -1 ) {
#line 2309 "cplus.met"
                        MulFreeTree(4,_ptRes1,_ptTree1,_ptTree0,valTree);
                        PROG_EXIT(func_declarator_exit,"func_declarator")
#line 2309 "cplus.met"
                    }
#line 2309 "cplus.met"
                    ReplaceTree(_ptRes1, 1, _ptTree1);
#line 2309 "cplus.met"
                    _ptTree0=_ptRes1;
#line 2309 "cplus.met"
                }
#line 2309 "cplus.met"
                _retValue =_ptTree0;
#line 2309 "cplus.met"
                goto func_declarator_ret;
#line 2309 "cplus.met"
            }
#line 2309 "cplus.met"
            break;
#line 2309 "cplus.met"
#line 2310 "cplus.met"
        case TILD : 
#line 2310 "cplus.met"
#line 2310 "cplus.met"
            {
#line 2310 "cplus.met"
                PPTREE _ptTree0=0;
#line 2310 "cplus.met"
                if ( (_ptTree0=NQUICK_CALL(_Tak(qualified_name)(error_free), 112, cplus))== (PPTREE) -1 ) {
#line 2310 "cplus.met"
                    MulFreeTree(2,_ptTree0,valTree);
                    PROG_EXIT(func_declarator_exit,"func_declarator")
#line 2310 "cplus.met"
                }
#line 2310 "cplus.met"
                _retValue =_ptTree0;
#line 2310 "cplus.met"
                goto func_declarator_ret;
#line 2310 "cplus.met"
            }
#line 2310 "cplus.met"
            break;
#line 2310 "cplus.met"
#line 2311 "cplus.met"
        case META : 
#line 2311 "cplus.met"
        case IDENT : 
#line 2311 "cplus.met"
#line 2311 "cplus.met"
            {
#line 2311 "cplus.met"
                PPTREE _ptTree0=0;
#line 2311 "cplus.met"
                if ( (_ptTree0=NQUICK_CALL(_Tak(qualified_name)(error_free), 112, cplus))== (PPTREE) -1 ) {
#line 2311 "cplus.met"
                    MulFreeTree(2,_ptTree0,valTree);
                    PROG_EXIT(func_declarator_exit,"func_declarator")
#line 2311 "cplus.met"
                }
#line 2311 "cplus.met"
                _retValue =_ptTree0;
#line 2311 "cplus.met"
                goto func_declarator_ret;
#line 2311 "cplus.met"
            }
#line 2311 "cplus.met"
            break;
#line 2311 "cplus.met"
#line 2312 "cplus.met"
        case OPERATOR : 
#line 2312 "cplus.met"
#line 2312 "cplus.met"
            {
#line 2312 "cplus.met"
                PPTREE _ptTree0=0;
#line 2312 "cplus.met"
                if ( (_ptTree0=NQUICK_CALL(_Tak(operator_function_name)(error_free), 100, cplus))== (PPTREE) -1 ) {
#line 2312 "cplus.met"
                    MulFreeTree(2,_ptTree0,valTree);
                    PROG_EXIT(func_declarator_exit,"func_declarator")
#line 2312 "cplus.met"
                }
#line 2312 "cplus.met"
                _retValue =_ptTree0;
#line 2312 "cplus.met"
                goto func_declarator_ret;
#line 2312 "cplus.met"
            }
#line 2312 "cplus.met"
            break;
#line 2312 "cplus.met"
        default :
#line 2312 "cplus.met"
            MulFreeTree(1,valTree);
            CASE_EXIT(func_declarator_exit,"either * or & or ~ or IDENT or operator")
#line 2312 "cplus.met"
            break;
#line 2312 "cplus.met"
    }
#line 2312 "cplus.met"
#line 2312 "cplus.met"
#line 2313 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2313 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 2313 "cplus.met"
return((PPTREE) 0);
#line 2313 "cplus.met"

#line 2313 "cplus.met"
func_declarator_exit :
#line 2313 "cplus.met"

#line 2313 "cplus.met"
    _Debug = TRACE_RULE("func_declarator",TRACE_EXIT,(PPTREE)0);
#line 2313 "cplus.met"
    _funcLevel--;
#line 2313 "cplus.met"
    return((PPTREE) -1) ;
#line 2313 "cplus.met"

#line 2313 "cplus.met"
func_declarator_ret :
#line 2313 "cplus.met"
    
#line 2313 "cplus.met"
    _Debug = TRACE_RULE("func_declarator",TRACE_RETURN,_retValue);
#line 2313 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2313 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 2313 "cplus.met"
    return _retValue ;
#line 2313 "cplus.met"
}
#line 2313 "cplus.met"

#line 2313 "cplus.met"
#line 3260 "cplus.met"
PPTREE cplus::ident_mul ( int error_free)
#line 3260 "cplus.met"
{
#line 3260 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 3260 "cplus.met"
    int _value,_nbPre = 0 ;
#line 3260 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 3260 "cplus.met"
    int _Debug = TRACE_RULE("ident_mul",TRACE_ENTER,(PPTREE)0);
#line 3260 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 3260 "cplus.met"
#line 3261 "cplus.met"
    if ( (NQUICK_CALL(_Tak(complete_class_name)(error_free), 25, cplus))== (PPTREE) -1 ) {
#line 3261 "cplus.met"
            PROG_EXIT(ident_mul_exit,"ident_mul")
#line 3261 "cplus.met"
    }
#line 3261 "cplus.met"
#line 3262 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3262 "cplus.met"
    switch( lexEl.Value) {
#line 3262 "cplus.met"
#line 3262 "cplus.met"
        case ETOI : 
#line 3262 "cplus.met"
#line 3262 "cplus.met"
            break;
#line 3262 "cplus.met"
#line 3264 "cplus.met"
        case META : 
#line 3264 "cplus.met"
        case IDENT : 
#line 3264 "cplus.met"
#line 3264 "cplus.met"
            break;
#line 3264 "cplus.met"
        default :
#line 3264 "cplus.met"
            CASE_EXIT(ident_mul_exit,"either * or IDENT")
#line 3264 "cplus.met"
            break;
#line 3264 "cplus.met"
    }
#line 3264 "cplus.met"
#line 3264 "cplus.met"
#line 3265 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 3265 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 3265 "cplus.met"
return((PPTREE) 0);
#line 3265 "cplus.met"

#line 3265 "cplus.met"
ident_mul_exit :
#line 3265 "cplus.met"

#line 3265 "cplus.met"
    _Debug = TRACE_RULE("ident_mul",TRACE_EXIT,(PPTREE)0);
#line 3265 "cplus.met"
    _funcLevel--;
#line 3265 "cplus.met"
    return((PPTREE) -1) ;
#line 3265 "cplus.met"

#line 3265 "cplus.met"
ident_mul_ret :
#line 3265 "cplus.met"
    
#line 3265 "cplus.met"
    _Debug = TRACE_RULE("ident_mul",TRACE_RETURN,_retValue);
#line 3265 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 3265 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 3265 "cplus.met"
    return _retValue ;
#line 3265 "cplus.met"
}
#line 3265 "cplus.met"

#line 3265 "cplus.met"
#line 1465 "cplus.met"
PPTREE cplus::include_dir ( int error_free)
#line 1465 "cplus.met"
{
#line 1465 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 1465 "cplus.met"
    int _value,_nbPre = 0 ;
#line 1465 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 1465 "cplus.met"
    int _Debug = TRACE_RULE("include_dir",TRACE_ENTER,(PPTREE)0);
#line 1465 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 1465 "cplus.met"
#line 1466 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 1466 "cplus.met"
    if ( ! TERM_OR_META(INCLUDE_DIR,"INCLUDE_DIR") || !(CommTerm(),1)) {
#line 1466 "cplus.met"
            TOKEN_EXIT(include_dir_exit,"INCLUDE_DIR")
#line 1466 "cplus.met"
    } else {
#line 1466 "cplus.met"
        tokenAhead = 0 ;
#line 1466 "cplus.met"
    }
#line 1466 "cplus.met"
#line 1467 "cplus.met"
    (tokenAhead == 6|| (LexInclude(),TRACE_LEX(1)));
#line 1467 "cplus.met"
    switch( lexEl.Value) {
#line 1467 "cplus.met"
#line 1468 "cplus.met"
        case META : 
#line 1468 "cplus.met"
        case INCLUDE_SYS : 
#line 1468 "cplus.met"
#line 1469 "cplus.met"
#line 1470 "cplus.met"
             /* ReadInclude(stringlex,0)*/;
#line 1470 "cplus.met"
#line 1471 "cplus.met"
            {
#line 1471 "cplus.met"
                PPTREE _ptTree0=0;
#line 1471 "cplus.met"
                {
#line 1471 "cplus.met"
                    PPTREE _ptTree1=0,_ptRes1=0;
#line 1471 "cplus.met"
                    _ptRes1= MakeTree(INCLUDE_DIR, 1);
#line 1471 "cplus.met"
                    (tokenAhead == 6|| (LexInclude(),TRACE_LEX(1)));
#line 1471 "cplus.met"
                    if ( ! TERM_OR_META(INCLUDE_SYS,"INCLUDE_SYS") || !(BUILD_TERM_META(_ptTree1))) {
#line 1471 "cplus.met"
                        MulFreeTree(3,_ptRes1,_ptTree1,_ptTree0);
                        TOKEN_EXIT(include_dir_exit,"INCLUDE_SYS")
#line 1471 "cplus.met"
                    } else {
#line 1471 "cplus.met"
                        tokenAhead = 0 ;
#line 1471 "cplus.met"
                    }
#line 1471 "cplus.met"
                    ReplaceTree(_ptRes1, 1, _ptTree1);
#line 1471 "cplus.met"
                    _ptTree0=_ptRes1;
#line 1471 "cplus.met"
                }
#line 1471 "cplus.met"
                _retValue =_ptTree0;
#line 1471 "cplus.met"
                goto include_dir_ret;
#line 1471 "cplus.met"
            }
#line 1471 "cplus.met"
#line 1471 "cplus.met"
            break;
#line 1471 "cplus.met"
#line 1473 "cplus.met"
        case INCLUDE_LOCAL : 
#line 1473 "cplus.met"
#line 1474 "cplus.met"
#line 1475 "cplus.met"
             /* ReadInclude(stringlex,1)*/;
#line 1475 "cplus.met"
#line 1476 "cplus.met"
            {
#line 1476 "cplus.met"
                PPTREE _ptTree0=0;
#line 1476 "cplus.met"
                {
#line 1476 "cplus.met"
                    PPTREE _ptTree1=0,_ptRes1=0;
#line 1476 "cplus.met"
                    _ptRes1= MakeTree(INCLUDE_DIR, 1);
#line 1476 "cplus.met"
                    {
#line 1476 "cplus.met"
                        PPTREE _ptTree2=0,_ptRes2=0;
#line 1476 "cplus.met"
                        _ptRes2= MakeTree(STRING, 1);
#line 1476 "cplus.met"
                        (tokenAhead == 6|| (LexInclude(),TRACE_LEX(1)));
#line 1476 "cplus.met"
                        if ( ! TERM_OR_META(INCLUDE_LOCAL,"INCLUDE_LOCAL") || !(BUILD_TERM_META(_ptTree2))) {
#line 1476 "cplus.met"
                            MulFreeTree(5,_ptRes2,_ptTree2,_ptRes1,_ptTree1,_ptTree0);
                            TOKEN_EXIT(include_dir_exit,"INCLUDE_LOCAL")
#line 1476 "cplus.met"
                        } else {
#line 1476 "cplus.met"
                            tokenAhead = 0 ;
#line 1476 "cplus.met"
                        }
#line 1476 "cplus.met"
                        ReplaceTree(_ptRes2, 1, _ptTree2);
#line 1476 "cplus.met"
                        _ptTree1=_ptRes2;
#line 1476 "cplus.met"
                    }
#line 1476 "cplus.met"
                    ReplaceTree(_ptRes1, 1, _ptTree1);
#line 1476 "cplus.met"
                    _ptTree0=_ptRes1;
#line 1476 "cplus.met"
                }
#line 1476 "cplus.met"
                _retValue =_ptTree0;
#line 1476 "cplus.met"
                goto include_dir_ret;
#line 1476 "cplus.met"
            }
#line 1476 "cplus.met"
#line 1476 "cplus.met"
            break;
#line 1476 "cplus.met"
        default :
#line 1476 "cplus.met"
            CASE_EXIT(include_dir_exit,"either INCLUDE_SYS or INCLUDE_LOCAL")
#line 1476 "cplus.met"
            break;
#line 1476 "cplus.met"
    }
#line 1476 "cplus.met"
#line 1476 "cplus.met"
#line 1479 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1479 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 1479 "cplus.met"
return((PPTREE) 0);
#line 1479 "cplus.met"

#line 1479 "cplus.met"
include_dir_exit :
#line 1479 "cplus.met"

#line 1479 "cplus.met"
    _Debug = TRACE_RULE("include_dir",TRACE_EXIT,(PPTREE)0);
#line 1479 "cplus.met"
    _funcLevel--;
#line 1479 "cplus.met"
    return((PPTREE) -1) ;
#line 1479 "cplus.met"

#line 1479 "cplus.met"
include_dir_ret :
#line 1479 "cplus.met"
    
#line 1479 "cplus.met"
    _Debug = TRACE_RULE("include_dir",TRACE_RETURN,_retValue);
#line 1479 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1479 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 1479 "cplus.met"
    return _retValue ;
#line 1479 "cplus.met"
}
#line 1479 "cplus.met"

#line 1479 "cplus.met"
#line 2603 "cplus.met"
PPTREE cplus::inclusive_or_expression ( int error_free)
#line 2603 "cplus.met"
{
#line 2603 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 2603 "cplus.met"
    int _value,_nbPre = 0 ;
#line 2603 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 2603 "cplus.met"
    int _Debug = TRACE_RULE("inclusive_or_expression",TRACE_ENTER,(PPTREE)0);
#line 2603 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 2603 "cplus.met"
#line 2603 "cplus.met"
    PPTREE expTree = (PPTREE) 0;
#line 2603 "cplus.met"
#line 2605 "cplus.met"
    if ( (expTree=NQUICK_CALL(_Tak(exclusive_or_expression)(error_free), 58, cplus))== (PPTREE) -1 ) {
#line 2605 "cplus.met"
        MulFreeTree(1,expTree);
        PROG_EXIT(inclusive_or_expression_exit,"inclusive_or_expression")
#line 2605 "cplus.met"
    }
#line 2605 "cplus.met"
#line 2606 "cplus.met"
    while ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN(VBAR,"|") && (tokenAhead = 0,CommTerm(),1)) { 
#line 2606 "cplus.met"
#line 2607 "cplus.met"
        {
#line 2607 "cplus.met"
            PPTREE _ptTree0=0,_ptRes0=0;
#line 2607 "cplus.met"
            _ptRes0= MakeTree(LOR, 2);
#line 2607 "cplus.met"
            ReplaceTree(_ptRes0, 1, expTree );
#line 2607 "cplus.met"
            if ( (_ptTree0=NQUICK_CALL(_Tak(exclusive_or_expression)(error_free), 58, cplus))== (PPTREE) -1 ) {
#line 2607 "cplus.met"
                MulFreeTree(3,_ptRes0,_ptTree0,expTree);
                PROG_EXIT(inclusive_or_expression_exit,"inclusive_or_expression")
#line 2607 "cplus.met"
            }
#line 2607 "cplus.met"
            ReplaceTree(_ptRes0, 2, _ptTree0);
#line 2607 "cplus.met"
            expTree=_ptRes0;
#line 2607 "cplus.met"
        }
#line 2607 "cplus.met"
    } 
#line 2607 "cplus.met"
#line 2608 "cplus.met"
    {
#line 2608 "cplus.met"
        _retValue = expTree ;
#line 2608 "cplus.met"
        goto inclusive_or_expression_ret;
#line 2608 "cplus.met"
        
#line 2608 "cplus.met"
    }
#line 2608 "cplus.met"
#line 2608 "cplus.met"
#line 2608 "cplus.met"

#line 2609 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2609 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 2609 "cplus.met"
return((PPTREE) 0);
#line 2609 "cplus.met"

#line 2609 "cplus.met"
inclusive_or_expression_exit :
#line 2609 "cplus.met"

#line 2609 "cplus.met"
    _Debug = TRACE_RULE("inclusive_or_expression",TRACE_EXIT,(PPTREE)0);
#line 2609 "cplus.met"
    _funcLevel--;
#line 2609 "cplus.met"
    return((PPTREE) -1) ;
#line 2609 "cplus.met"

#line 2609 "cplus.met"
inclusive_or_expression_ret :
#line 2609 "cplus.met"
    
#line 2609 "cplus.met"
    _Debug = TRACE_RULE("inclusive_or_expression",TRACE_RETURN,_retValue);
#line 2609 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2609 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 2609 "cplus.met"
    return _retValue ;
#line 2609 "cplus.met"
}
#line 2609 "cplus.met"

#line 2609 "cplus.met"
#line 2394 "cplus.met"
PPTREE cplus::initializer ( int error_free)
#line 2394 "cplus.met"
{
#line 2394 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 2394 "cplus.met"
    int _value,_nbPre = 0 ;
#line 2394 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 2394 "cplus.met"
    int _Debug = TRACE_RULE("initializer",TRACE_ENTER,(PPTREE)0);
#line 2394 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 2394 "cplus.met"
#line 2394 "cplus.met"
    PPTREE _addlist1 = (PPTREE) 0;
#line 2394 "cplus.met"
#line 2394 "cplus.met"
    PPTREE initList = (PPTREE) 0,retTree = (PPTREE) 0;
#line 2394 "cplus.met"
#line 2396 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 2396 "cplus.met"
    switch( lexEl.Value) {
#line 2396 "cplus.met"
#line 2400 "cplus.met"
        case AOUV : 
#line 2400 "cplus.met"
            tokenAhead = 0 ;
#line 2400 "cplus.met"
            CommTerm();
#line 2400 "cplus.met"
#line 2398 "cplus.met"
#line 2398 "cplus.met"
            _addlist1 = initList ;
#line 2398 "cplus.met"
#line 2399 "cplus.met"
            do {
#line 2399 "cplus.met"
#line 2400 "cplus.met"
                {
#line 2400 "cplus.met"
                    PPTREE _ptTree0=0;
#line 2400 "cplus.met"
                    if ( (_ptTree0=NQUICK_CALL(_Tak(initializer)(error_free), 78, cplus))== (PPTREE) -1 ) {
#line 2400 "cplus.met"
                        MulFreeTree(4,_ptTree0,_addlist1,initList,retTree);
                        PROG_EXIT(initializer_exit,"initializer")
#line 2400 "cplus.met"
                    }
#line 2400 "cplus.met"
                    _addlist1 =AddList(_addlist1 , _ptTree0);
#line 2400 "cplus.met"
                }
#line 2400 "cplus.met"
#line 2400 "cplus.met"
                if (initList){
#line 2400 "cplus.met"
#line 2400 "cplus.met"
                    _addlist1 = SonTree (_addlist1 ,2 );
#line 2400 "cplus.met"
                } else {
#line 2400 "cplus.met"
#line 2400 "cplus.met"
                    initList = _addlist1 ;
#line 2400 "cplus.met"
                }
#line 2400 "cplus.met"
#line 2400 "cplus.met"
#line 2401 "cplus.met"
            } while ( !(! ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN(VIRG,",") && (tokenAhead = 0,CommTerm(),1)))) ;
#line 2401 "cplus.met"
#line 2402 "cplus.met"
            (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 2402 "cplus.met"
            if (  !SEE_TOKEN( AFER,"}") || !(CommTerm(),1)) {
#line 2402 "cplus.met"
                MulFreeTree(3,_addlist1,initList,retTree);
                TOKEN_EXIT(initializer_exit,"}")
#line 2402 "cplus.met"
            } else {
#line 2402 "cplus.met"
                tokenAhead = 0 ;
#line 2402 "cplus.met"
            }
#line 2402 "cplus.met"
#line 2403 "cplus.met"
            {
#line 2403 "cplus.met"
                PPTREE _ptTree0=0;
#line 2403 "cplus.met"
                {
#line 2403 "cplus.met"
                    PPTREE _ptRes1=0;
#line 2403 "cplus.met"
                    _ptRes1= MakeTree(INITIALIZER, 1);
#line 2403 "cplus.met"
                    ReplaceTree(_ptRes1, 1, initList );
#line 2403 "cplus.met"
                    _ptTree0=_ptRes1;
#line 2403 "cplus.met"
                }
#line 2403 "cplus.met"
                _retValue =_ptTree0;
#line 2403 "cplus.met"
                goto initializer_ret;
#line 2403 "cplus.met"
            }
#line 2403 "cplus.met"
#line 2403 "cplus.met"
            break;
#line 2403 "cplus.met"
#line 2406 "cplus.met"
        default : 
#line 2406 "cplus.met"
#line 2406 "cplus.met"
            if (NPUSH_CALL_AFF_VERIF(retTree = ,_Tak(assignment_expression), 15, cplus)){
#line 2406 "cplus.met"
#line 2407 "cplus.met"
                {
#line 2407 "cplus.met"
                    PPTREE _ptTree0=0;
#line 2407 "cplus.met"
                    {
#line 2407 "cplus.met"
                        PPTREE _ptRes1=0;
#line 2407 "cplus.met"
                        _ptRes1= MakeTree(INITIALIZER, 1);
#line 2407 "cplus.met"
                        ReplaceTree(_ptRes1, 1, retTree );
#line 2407 "cplus.met"
                        _ptTree0=_ptRes1;
#line 2407 "cplus.met"
                    }
#line 2407 "cplus.met"
                    _retValue =_ptTree0;
#line 2407 "cplus.met"
                    goto initializer_ret;
#line 2407 "cplus.met"
                }
#line 2407 "cplus.met"
            } else {
#line 2407 "cplus.met"
#line 2409 "cplus.met"
                {
#line 2409 "cplus.met"
                    PPTREE _ptTree0=0;
#line 2409 "cplus.met"
                    {
#line 2409 "cplus.met"
                        PPTREE _ptRes1=0;
#line 2409 "cplus.met"
                        _ptRes1= MakeTree(INITIALIZER, 1);
#line 2409 "cplus.met"
                        _ptTree0=_ptRes1;
#line 2409 "cplus.met"
                    }
#line 2409 "cplus.met"
                    _retValue =_ptTree0;
#line 2409 "cplus.met"
                    goto initializer_ret;
#line 2409 "cplus.met"
                }
#line 2409 "cplus.met"
            }
#line 2409 "cplus.met"
            break;
#line 2409 "cplus.met"
    }
#line 2409 "cplus.met"
#line 2409 "cplus.met"
#line 2410 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2410 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 2410 "cplus.met"
return((PPTREE) 0);
#line 2410 "cplus.met"

#line 2410 "cplus.met"
initializer_exit :
#line 2410 "cplus.met"

#line 2410 "cplus.met"
    _Debug = TRACE_RULE("initializer",TRACE_EXIT,(PPTREE)0);
#line 2410 "cplus.met"
    _funcLevel--;
#line 2410 "cplus.met"
    return((PPTREE) -1) ;
#line 2410 "cplus.met"

#line 2410 "cplus.met"
initializer_ret :
#line 2410 "cplus.met"
    
#line 2410 "cplus.met"
    _Debug = TRACE_RULE("initializer",TRACE_RETURN,_retValue);
#line 2410 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2410 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 2410 "cplus.met"
    return _retValue ;
#line 2410 "cplus.met"
}
#line 2410 "cplus.met"

#line 2410 "cplus.met"
#line 1711 "cplus.met"
PPTREE cplus::inside_declaration ( int error_free)
#line 1711 "cplus.met"
{
#line 1711 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 1711 "cplus.met"
    int _value,_nbPre = 0 ;
#line 1711 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 1711 "cplus.met"
    int _Debug = TRACE_RULE("inside_declaration",TRACE_ENTER,(PPTREE)0);
#line 1711 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 1711 "cplus.met"
#line 1711 "cplus.met"
    PPTREE retTree = (PPTREE) 0;
#line 1711 "cplus.met"
#line 1713 "cplus.met"
    if ((((! (NPUSH_CALL_AFF_VERIF(retTree = ,_Tak(inside_declaration_extension), 82, cplus))) && 
#line 1713 "cplus.met"
         (! (NPUSH_CALL_AFF_VERIF(retTree = ,_Tak(ext_all), 61, cplus)))) && 
#line 1713 "cplus.met"
        (! (NPUSH_CALL_AFF_VERIF(retTree = ,_Tak(inside_declaration1), 80, cplus)))) && 
#line 1713 "cplus.met"
       (! (NPUSH_CALL_AFF_VERIF(retTree = ,_Tak(inside_declaration2), 81, cplus)))){
#line 1713 "cplus.met"
#line 1717 "cplus.met"
        
#line 1717 "cplus.met"
        MulFreeTree(1,retTree);
        LEX_EXIT ("",0);
#line 1717 "cplus.met"
        goto inside_declaration_exit;
#line 1717 "cplus.met"
#line 1717 "cplus.met"
    }
#line 1717 "cplus.met"
#line 1718 "cplus.met"
    {
#line 1718 "cplus.met"
        _retValue = retTree ;
#line 1718 "cplus.met"
        goto inside_declaration_ret;
#line 1718 "cplus.met"
        
#line 1718 "cplus.met"
    }
#line 1718 "cplus.met"
#line 1718 "cplus.met"
#line 1718 "cplus.met"

#line 1719 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1719 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 1719 "cplus.met"
return((PPTREE) 0);
#line 1719 "cplus.met"

#line 1719 "cplus.met"
inside_declaration_exit :
#line 1719 "cplus.met"

#line 1719 "cplus.met"
    _Debug = TRACE_RULE("inside_declaration",TRACE_EXIT,(PPTREE)0);
#line 1719 "cplus.met"
    _funcLevel--;
#line 1719 "cplus.met"
    return((PPTREE) -1) ;
#line 1719 "cplus.met"

#line 1719 "cplus.met"
inside_declaration_ret :
#line 1719 "cplus.met"
    
#line 1719 "cplus.met"
    _Debug = TRACE_RULE("inside_declaration",TRACE_RETURN,_retValue);
#line 1719 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1719 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 1719 "cplus.met"
    return _retValue ;
#line 1719 "cplus.met"
}
#line 1719 "cplus.met"

#line 1719 "cplus.met"
#line 1691 "cplus.met"
PPTREE cplus::inside_declaration1 ( int error_free)
#line 1691 "cplus.met"
{
#line 1691 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 1691 "cplus.met"
    int _value,_nbPre = 0 ;
#line 1691 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 1691 "cplus.met"
    int _Debug = TRACE_RULE("inside_declaration1",TRACE_ENTER,(PPTREE)0);
#line 1691 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 1691 "cplus.met"
#line 1691 "cplus.met"
    PPTREE otherTree = (PPTREE) 0,list = (PPTREE) 0;
#line 1691 "cplus.met"
#line 1693 "cplus.met"
    {
#line 1693 "cplus.met"
        PPTREE _ptTree0=0,_ptRes0=0;
#line 1693 "cplus.met"
        _ptRes0= MakeTree(DECLARATION, 3);
#line 1693 "cplus.met"
        if ( (_ptTree0=NQUICK_CALL(_Tak(type_specifier)(error_free), 141, cplus))== (PPTREE) -1 ) {
#line 1693 "cplus.met"
            MulFreeTree(4,_ptRes0,_ptTree0,list,otherTree);
            PROG_EXIT(inside_declaration1_exit,"inside_declaration1")
#line 1693 "cplus.met"
        }
#line 1693 "cplus.met"
        ReplaceTree(_ptRes0, 2, _ptTree0);
#line 1693 "cplus.met"
        otherTree=_ptRes0;
#line 1693 "cplus.met"
    }
#line 1693 "cplus.met"
#line 1694 "cplus.met"
    {
#line 1694 "cplus.met"
        PPTREE _ptTree0=0;
#line 1694 "cplus.met"
        if ( (_ptTree0=NQUICK_CALL(_Tak(bit_field_decl)(error_free), 18, cplus))== (PPTREE) -1 ) {
#line 1694 "cplus.met"
            MulFreeTree(3,_ptTree0,list,otherTree);
            PROG_EXIT(inside_declaration1_exit,"inside_declaration1")
#line 1694 "cplus.met"
        }
#line 1694 "cplus.met"
        list =AddList(list , _ptTree0);
#line 1694 "cplus.met"
    }
#line 1694 "cplus.met"
#line 1695 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 1695 "cplus.met"
    if (  !SEE_TOKEN( PVIR,";") || !(CommTerm(),1)) {
#line 1695 "cplus.met"
        MulFreeTree(2,list,otherTree);
        TOKEN_EXIT(inside_declaration1_exit,";")
#line 1695 "cplus.met"
    } else {
#line 1695 "cplus.met"
        tokenAhead = 0 ;
#line 1695 "cplus.met"
    }
#line 1695 "cplus.met"
#line 1696 "cplus.met"
    {
#line 1696 "cplus.met"
        PPTREE _ptTree0=0;
#line 1696 "cplus.met"
        _ptTree0=ReplaceTree(otherTree ,3 ,list );
#line 1696 "cplus.met"
        _retValue =_ptTree0;
#line 1696 "cplus.met"
        goto inside_declaration1_ret;
#line 1696 "cplus.met"
    }
#line 1696 "cplus.met"
#line 1696 "cplus.met"
#line 1696 "cplus.met"

#line 1697 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1697 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 1697 "cplus.met"
return((PPTREE) 0);
#line 1697 "cplus.met"

#line 1697 "cplus.met"
inside_declaration1_exit :
#line 1697 "cplus.met"

#line 1697 "cplus.met"
    _Debug = TRACE_RULE("inside_declaration1",TRACE_EXIT,(PPTREE)0);
#line 1697 "cplus.met"
    _funcLevel--;
#line 1697 "cplus.met"
    return((PPTREE) -1) ;
#line 1697 "cplus.met"

#line 1697 "cplus.met"
inside_declaration1_ret :
#line 1697 "cplus.met"
    
#line 1697 "cplus.met"
    _Debug = TRACE_RULE("inside_declaration1",TRACE_RETURN,_retValue);
#line 1697 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1697 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 1697 "cplus.met"
    return _retValue ;
#line 1697 "cplus.met"
}
#line 1697 "cplus.met"

#line 1697 "cplus.met"
#line 1699 "cplus.met"
PPTREE cplus::inside_declaration2 ( int error_free)
#line 1699 "cplus.met"
{
#line 1699 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 1699 "cplus.met"
    int _value,_nbPre = 0 ;
#line 1699 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 1699 "cplus.met"
    int _Debug = TRACE_RULE("inside_declaration2",TRACE_ENTER,(PPTREE)0);
#line 1699 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 1699 "cplus.met"
#line 1699 "cplus.met"
    PPTREE otherTree = (PPTREE) 0,list = (PPTREE) 0;
#line 1699 "cplus.met"
#line 1701 "cplus.met"
    {
#line 1701 "cplus.met"
        PPTREE _ptRes0=0;
#line 1701 "cplus.met"
        _ptRes0= MakeTree(DECLARATION, 3);
#line 1701 "cplus.met"
        otherTree=_ptRes0;
#line 1701 "cplus.met"
    }
#line 1701 "cplus.met"
#line 1702 "cplus.met"
    {
#line 1702 "cplus.met"
        PPTREE _ptTree0=0;
#line 1702 "cplus.met"
        if ( (_ptTree0=NQUICK_CALL(_Tak(bit_field_decl)(error_free), 18, cplus))== (PPTREE) -1 ) {
#line 1702 "cplus.met"
            MulFreeTree(3,_ptTree0,list,otherTree);
            PROG_EXIT(inside_declaration2_exit,"inside_declaration2")
#line 1702 "cplus.met"
        }
#line 1702 "cplus.met"
        list =AddList(list , _ptTree0);
#line 1702 "cplus.met"
    }
#line 1702 "cplus.met"
#line 1703 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 1703 "cplus.met"
    if (  !SEE_TOKEN( PVIR,";") || !(CommTerm(),1)) {
#line 1703 "cplus.met"
        MulFreeTree(2,list,otherTree);
        TOKEN_EXIT(inside_declaration2_exit,";")
#line 1703 "cplus.met"
    } else {
#line 1703 "cplus.met"
        tokenAhead = 0 ;
#line 1703 "cplus.met"
    }
#line 1703 "cplus.met"
#line 1704 "cplus.met"
    {
#line 1704 "cplus.met"
        PPTREE _ptTree0=0;
#line 1704 "cplus.met"
        _ptTree0=ReplaceTree(otherTree ,3 ,list );
#line 1704 "cplus.met"
        _retValue =_ptTree0;
#line 1704 "cplus.met"
        goto inside_declaration2_ret;
#line 1704 "cplus.met"
    }
#line 1704 "cplus.met"
#line 1704 "cplus.met"
#line 1704 "cplus.met"

#line 1705 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1705 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 1705 "cplus.met"
return((PPTREE) 0);
#line 1705 "cplus.met"

#line 1705 "cplus.met"
inside_declaration2_exit :
#line 1705 "cplus.met"

#line 1705 "cplus.met"
    _Debug = TRACE_RULE("inside_declaration2",TRACE_EXIT,(PPTREE)0);
#line 1705 "cplus.met"
    _funcLevel--;
#line 1705 "cplus.met"
    return((PPTREE) -1) ;
#line 1705 "cplus.met"

#line 1705 "cplus.met"
inside_declaration2_ret :
#line 1705 "cplus.met"
    
#line 1705 "cplus.met"
    _Debug = TRACE_RULE("inside_declaration2",TRACE_RETURN,_retValue);
#line 1705 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1705 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 1705 "cplus.met"
    return _retValue ;
#line 1705 "cplus.met"
}
#line 1705 "cplus.met"

#line 1705 "cplus.met"
#line 1707 "cplus.met"
PPTREE cplus::inside_declaration_extension ( int error_free)
#line 1707 "cplus.met"
{
#line 1707 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 1707 "cplus.met"
    int _value,_nbPre = 0 ;
#line 1707 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 1707 "cplus.met"
    int _Debug = TRACE_RULE("inside_declaration_extension",TRACE_ENTER,(PPTREE)0);
#line 1707 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 1707 "cplus.met"
#line 1708 "cplus.met"
    
#line 1708 "cplus.met"
    LEX_EXIT ("",0);
#line 1708 "cplus.met"
    goto inside_declaration_extension_exit;
#line 1708 "cplus.met"
#line 1708 "cplus.met"
#line 1708 "cplus.met"

#line 1709 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1709 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 1709 "cplus.met"
return((PPTREE) 0);
#line 1709 "cplus.met"

#line 1709 "cplus.met"
inside_declaration_extension_exit :
#line 1709 "cplus.met"

#line 1709 "cplus.met"
    _Debug = TRACE_RULE("inside_declaration_extension",TRACE_EXIT,(PPTREE)0);
#line 1709 "cplus.met"
    _funcLevel--;
#line 1709 "cplus.met"
    return((PPTREE) -1) ;
#line 1709 "cplus.met"

#line 1709 "cplus.met"
inside_declaration_extension_ret :
#line 1709 "cplus.met"
    
#line 1709 "cplus.met"
    _Debug = TRACE_RULE("inside_declaration_extension",TRACE_RETURN,_retValue);
#line 1709 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1709 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 1709 "cplus.met"
    return _retValue ;
#line 1709 "cplus.met"
}
#line 1709 "cplus.met"

#line 1709 "cplus.met"
#line 3255 "cplus.met"
PPTREE cplus::label_beg ( int error_free)
#line 3255 "cplus.met"
{
#line 3255 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 3255 "cplus.met"
    int _value,_nbPre = 0 ;
#line 3255 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 3255 "cplus.met"
    int _Debug = TRACE_RULE("label_beg",TRACE_ENTER,(PPTREE)0);
#line 3255 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 3255 "cplus.met"
#line 3256 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3256 "cplus.met"
    if ( ! TERM_OR_META(IDENT,"IDENT") || !(CommTerm(),1)) {
#line 3256 "cplus.met"
            TOKEN_EXIT(label_beg_exit,"IDENT")
#line 3256 "cplus.met"
    } else {
#line 3256 "cplus.met"
        tokenAhead = 0 ;
#line 3256 "cplus.met"
    }
#line 3256 "cplus.met"
#line 3257 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3257 "cplus.met"
    if (  !SEE_TOKEN( DPOI,":") || !(CommTerm(),1)) {
#line 3257 "cplus.met"
            TOKEN_EXIT(label_beg_exit,":")
#line 3257 "cplus.met"
    } else {
#line 3257 "cplus.met"
        tokenAhead = 0 ;
#line 3257 "cplus.met"
    }
#line 3257 "cplus.met"
#line 3257 "cplus.met"
#line 3257 "cplus.met"

#line 3258 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 3258 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 3258 "cplus.met"
return((PPTREE) 0);
#line 3258 "cplus.met"

#line 3258 "cplus.met"
label_beg_exit :
#line 3258 "cplus.met"

#line 3258 "cplus.met"
    _Debug = TRACE_RULE("label_beg",TRACE_EXIT,(PPTREE)0);
#line 3258 "cplus.met"
    _funcLevel--;
#line 3258 "cplus.met"
    return((PPTREE) -1) ;
#line 3258 "cplus.met"

#line 3258 "cplus.met"
label_beg_ret :
#line 3258 "cplus.met"
    
#line 3258 "cplus.met"
    _Debug = TRACE_RULE("label_beg",TRACE_RETURN,_retValue);
#line 3258 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 3258 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 3258 "cplus.met"
    return _retValue ;
#line 3258 "cplus.met"
}
#line 3258 "cplus.met"

#line 3258 "cplus.met"
#line 1014 "cplus.met"
PPTREE cplus::linkage_specification ( int error_free)
#line 1014 "cplus.met"
{
#line 1014 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 1014 "cplus.met"
    int _value,_nbPre = 0 ;
#line 1014 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 1014 "cplus.met"
    int _Debug = TRACE_RULE("linkage_specification",TRACE_ENTER,(PPTREE)0);
#line 1014 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 1014 "cplus.met"
#line 1014 "cplus.met"
    PPTREE _addlist1 = (PPTREE) 0;
#line 1014 "cplus.met"
#line 1014 "cplus.met"
    PPTREE retTree = (PPTREE) 0,list = (PPTREE) 0,declaration = (PPTREE) 0;
#line 1014 "cplus.met"
#line 1016 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 1016 "cplus.met"
    if (  !SEE_TOKEN( EXTERN,"extern") || !(CommTerm(),1)) {
#line 1016 "cplus.met"
        MulFreeTree(4,_addlist1,declaration,list,retTree);
        TOKEN_EXIT(linkage_specification_exit,"extern")
#line 1016 "cplus.met"
    } else {
#line 1016 "cplus.met"
        tokenAhead = 0 ;
#line 1016 "cplus.met"
    }
#line 1016 "cplus.met"
#line 1017 "cplus.met"
    {
#line 1017 "cplus.met"
        PPTREE _ptTree0=0,_ptRes0=0;
#line 1017 "cplus.met"
        _ptRes0= MakeTree(EXTERNAL, 2);
#line 1017 "cplus.met"
        {
#line 1017 "cplus.met"
            PPTREE _ptTree1=0,_ptRes1=0;
#line 1017 "cplus.met"
            _ptRes1= MakeTree(STRING, 1);
#line 1017 "cplus.met"
            (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 1017 "cplus.met"
            if ( ! TERM_OR_META(STRING,"STRING") || !(BUILD_TERM_META(_ptTree1))) {
#line 1017 "cplus.met"
                MulFreeTree(8,_ptRes1,_ptTree1,_ptRes0,_ptTree0,_addlist1,declaration,list,retTree);
                TOKEN_EXIT(linkage_specification_exit,"STRING")
#line 1017 "cplus.met"
            } else {
#line 1017 "cplus.met"
                tokenAhead = 0 ;
#line 1017 "cplus.met"
            }
#line 1017 "cplus.met"
            ReplaceTree(_ptRes1, 1, _ptTree1);
#line 1017 "cplus.met"
            _ptTree0=_ptRes1;
#line 1017 "cplus.met"
        }
#line 1017 "cplus.met"
        ReplaceTree(_ptRes0, 1, _ptTree0);
#line 1017 "cplus.met"
        retTree=_ptRes0;
#line 1017 "cplus.met"
    }
#line 1017 "cplus.met"
#line 1018 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 1018 "cplus.met"
    switch( lexEl.Value) {
#line 1018 "cplus.met"
#line 1021 "cplus.met"
        case AOUV : 
#line 1021 "cplus.met"
            tokenAhead = 0 ;
#line 1021 "cplus.met"
            CommTerm();
#line 1021 "cplus.met"
#line 1020 "cplus.met"
#line 1020 "cplus.met"
            _addlist1 = list ;
#line 1020 "cplus.met"
#line 1021 "cplus.met"
            while (NPUSH_CALL_AFF_VERIF(declaration = ,_Tak(ext_all), 61, cplus)) { 
#line 1021 "cplus.met"
#line 1022 "cplus.met"
#line 1022 "cplus.met"
                _addlist1 =AddList(_addlist1 ,declaration );
#line 1022 "cplus.met"
#line 1022 "cplus.met"
                if (list){
#line 1022 "cplus.met"
#line 1022 "cplus.met"
                    _addlist1 = SonTree (_addlist1 ,2 );
#line 1022 "cplus.met"
                } else {
#line 1022 "cplus.met"
#line 1022 "cplus.met"
                    list = _addlist1 ;
#line 1022 "cplus.met"
                }
#line 1022 "cplus.met"
            } 
#line 1022 "cplus.met"
#line 1023 "cplus.met"
            (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 1023 "cplus.met"
            if (  !SEE_TOKEN( AFER,"}") || !(CommTerm(),1)) {
#line 1023 "cplus.met"
                MulFreeTree(4,_addlist1,declaration,list,retTree);
                TOKEN_EXIT(linkage_specification_exit,"}")
#line 1023 "cplus.met"
            } else {
#line 1023 "cplus.met"
                tokenAhead = 0 ;
#line 1023 "cplus.met"
            }
#line 1023 "cplus.met"
#line 1024 "cplus.met"
            {
#line 1024 "cplus.met"
                PPTREE _ptTree0=0;
#line 1024 "cplus.met"
                {
#line 1024 "cplus.met"
                    PPTREE _ptTree1=0;
#line 1024 "cplus.met"
                    {
#line 1024 "cplus.met"
                        PPTREE _ptRes2=0;
#line 1024 "cplus.met"
                        _ptRes2= MakeTree(COMPOUND_EXT, 1);
#line 1024 "cplus.met"
                        ReplaceTree(_ptRes2, 1, list );
#line 1024 "cplus.met"
                        _ptTree1=_ptRes2;
#line 1024 "cplus.met"
                    }
#line 1024 "cplus.met"
                    _ptTree0=ReplaceTree(retTree , 2 , _ptTree1);
#line 1024 "cplus.met"
                }
#line 1024 "cplus.met"
                _retValue =_ptTree0;
#line 1024 "cplus.met"
                goto linkage_specification_ret;
#line 1024 "cplus.met"
            }
#line 1024 "cplus.met"
#line 1024 "cplus.met"
            break;
#line 1024 "cplus.met"
#line 1026 "cplus.met"
        default : 
#line 1026 "cplus.met"
#line 1026 "cplus.met"
            {
#line 1026 "cplus.met"
                PPTREE _ptTree0=0;
#line 1026 "cplus.met"
                {
#line 1026 "cplus.met"
                    PPTREE _ptTree1=0;
#line 1026 "cplus.met"
                    if ( (_ptTree1=NQUICK_CALL(_Tak(ext_all)(error_free), 61, cplus))== (PPTREE) -1 ) {
#line 1026 "cplus.met"
                        MulFreeTree(6,_ptTree1,_ptTree0,_addlist1,declaration,list,retTree);
                        PROG_EXIT(linkage_specification_exit,"linkage_specification")
#line 1026 "cplus.met"
                    }
#line 1026 "cplus.met"
                    _ptTree0=ReplaceTree(retTree , 2 , _ptTree1);
#line 1026 "cplus.met"
                }
#line 1026 "cplus.met"
                _retValue =_ptTree0;
#line 1026 "cplus.met"
                goto linkage_specification_ret;
#line 1026 "cplus.met"
            }
#line 1026 "cplus.met"
            break;
#line 1026 "cplus.met"
    }
#line 1026 "cplus.met"
#line 1026 "cplus.met"
#line 1027 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1027 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 1027 "cplus.met"
return((PPTREE) 0);
#line 1027 "cplus.met"

#line 1027 "cplus.met"
linkage_specification_exit :
#line 1027 "cplus.met"

#line 1027 "cplus.met"
    _Debug = TRACE_RULE("linkage_specification",TRACE_EXIT,(PPTREE)0);
#line 1027 "cplus.met"
    _funcLevel--;
#line 1027 "cplus.met"
    return((PPTREE) -1) ;
#line 1027 "cplus.met"

#line 1027 "cplus.met"
linkage_specification_ret :
#line 1027 "cplus.met"
    
#line 1027 "cplus.met"
    _Debug = TRACE_RULE("linkage_specification",TRACE_RETURN,_retValue);
#line 1027 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1027 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 1027 "cplus.met"
    return _retValue ;
#line 1027 "cplus.met"
}
#line 1027 "cplus.met"

#line 1027 "cplus.met"
#line 2595 "cplus.met"
PPTREE cplus::logical_and_expression ( int error_free)
#line 2595 "cplus.met"
{
#line 2595 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 2595 "cplus.met"
    int _value,_nbPre = 0 ;
#line 2595 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 2595 "cplus.met"
    int _Debug = TRACE_RULE("logical_and_expression",TRACE_ENTER,(PPTREE)0);
#line 2595 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 2595 "cplus.met"
#line 2595 "cplus.met"
    PPTREE expTree = (PPTREE) 0;
#line 2595 "cplus.met"
#line 2597 "cplus.met"
    if ( (expTree=NQUICK_CALL(_Tak(inclusive_or_expression)(error_free), 77, cplus))== (PPTREE) -1 ) {
#line 2597 "cplus.met"
        MulFreeTree(1,expTree);
        PROG_EXIT(logical_and_expression_exit,"logical_and_expression")
#line 2597 "cplus.met"
    }
#line 2597 "cplus.met"
#line 2598 "cplus.met"
    while ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN(ETCOETCO,"&&") && (tokenAhead = 0,CommTerm(),1)) { 
#line 2598 "cplus.met"
#line 2599 "cplus.met"
        {
#line 2599 "cplus.met"
            PPTREE _ptTree0=0,_ptRes0=0;
#line 2599 "cplus.met"
            _ptRes0= MakeTree(AND, 2);
#line 2599 "cplus.met"
            ReplaceTree(_ptRes0, 1, expTree );
#line 2599 "cplus.met"
            if ( (_ptTree0=NQUICK_CALL(_Tak(inclusive_or_expression)(error_free), 77, cplus))== (PPTREE) -1 ) {
#line 2599 "cplus.met"
                MulFreeTree(3,_ptRes0,_ptTree0,expTree);
                PROG_EXIT(logical_and_expression_exit,"logical_and_expression")
#line 2599 "cplus.met"
            }
#line 2599 "cplus.met"
            ReplaceTree(_ptRes0, 2, _ptTree0);
#line 2599 "cplus.met"
            expTree=_ptRes0;
#line 2599 "cplus.met"
        }
#line 2599 "cplus.met"
    } 
#line 2599 "cplus.met"
#line 2600 "cplus.met"
    {
#line 2600 "cplus.met"
        _retValue = expTree ;
#line 2600 "cplus.met"
        goto logical_and_expression_ret;
#line 2600 "cplus.met"
        
#line 2600 "cplus.met"
    }
#line 2600 "cplus.met"
#line 2600 "cplus.met"
#line 2600 "cplus.met"

#line 2601 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2601 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 2601 "cplus.met"
return((PPTREE) 0);
#line 2601 "cplus.met"

#line 2601 "cplus.met"
logical_and_expression_exit :
#line 2601 "cplus.met"

#line 2601 "cplus.met"
    _Debug = TRACE_RULE("logical_and_expression",TRACE_EXIT,(PPTREE)0);
#line 2601 "cplus.met"
    _funcLevel--;
#line 2601 "cplus.met"
    return((PPTREE) -1) ;
#line 2601 "cplus.met"

#line 2601 "cplus.met"
logical_and_expression_ret :
#line 2601 "cplus.met"
    
#line 2601 "cplus.met"
    _Debug = TRACE_RULE("logical_and_expression",TRACE_RETURN,_retValue);
#line 2601 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2601 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 2601 "cplus.met"
    return _retValue ;
#line 2601 "cplus.met"
}
#line 2601 "cplus.met"

#line 2601 "cplus.met"
#line 2587 "cplus.met"
PPTREE cplus::logical_or_expression ( int error_free)
#line 2587 "cplus.met"
{
#line 2587 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 2587 "cplus.met"
    int _value,_nbPre = 0 ;
#line 2587 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 2587 "cplus.met"
    int _Debug = TRACE_RULE("logical_or_expression",TRACE_ENTER,(PPTREE)0);
#line 2587 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 2587 "cplus.met"
#line 2587 "cplus.met"
    PPTREE expTree = (PPTREE) 0;
#line 2587 "cplus.met"
#line 2589 "cplus.met"
    if ( (expTree=NQUICK_CALL(_Tak(logical_and_expression)(error_free), 85, cplus))== (PPTREE) -1 ) {
#line 2589 "cplus.met"
        MulFreeTree(1,expTree);
        PROG_EXIT(logical_or_expression_exit,"logical_or_expression")
#line 2589 "cplus.met"
    }
#line 2589 "cplus.met"
#line 2590 "cplus.met"
    while ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN(VBARVBAR,"||") && (tokenAhead = 0,CommTerm(),1)) { 
#line 2590 "cplus.met"
#line 2591 "cplus.met"
        {
#line 2591 "cplus.met"
            PPTREE _ptTree0=0,_ptRes0=0;
#line 2591 "cplus.met"
            _ptRes0= MakeTree(OR, 2);
#line 2591 "cplus.met"
            ReplaceTree(_ptRes0, 1, expTree );
#line 2591 "cplus.met"
            if ( (_ptTree0=NQUICK_CALL(_Tak(logical_and_expression)(error_free), 85, cplus))== (PPTREE) -1 ) {
#line 2591 "cplus.met"
                MulFreeTree(3,_ptRes0,_ptTree0,expTree);
                PROG_EXIT(logical_or_expression_exit,"logical_or_expression")
#line 2591 "cplus.met"
            }
#line 2591 "cplus.met"
            ReplaceTree(_ptRes0, 2, _ptTree0);
#line 2591 "cplus.met"
            expTree=_ptRes0;
#line 2591 "cplus.met"
        }
#line 2591 "cplus.met"
    } 
#line 2591 "cplus.met"
#line 2592 "cplus.met"
    {
#line 2592 "cplus.met"
        _retValue = expTree ;
#line 2592 "cplus.met"
        goto logical_or_expression_ret;
#line 2592 "cplus.met"
        
#line 2592 "cplus.met"
    }
#line 2592 "cplus.met"
#line 2592 "cplus.met"
#line 2592 "cplus.met"

#line 2593 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2593 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 2593 "cplus.met"
return((PPTREE) 0);
#line 2593 "cplus.met"

#line 2593 "cplus.met"
logical_or_expression_exit :
#line 2593 "cplus.met"

#line 2593 "cplus.met"
    _Debug = TRACE_RULE("logical_or_expression",TRACE_EXIT,(PPTREE)0);
#line 2593 "cplus.met"
    _funcLevel--;
#line 2593 "cplus.met"
    return((PPTREE) -1) ;
#line 2593 "cplus.met"

#line 2593 "cplus.met"
logical_or_expression_ret :
#line 2593 "cplus.met"
    
#line 2593 "cplus.met"
    _Debug = TRACE_RULE("logical_or_expression",TRACE_RETURN,_retValue);
#line 2593 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2593 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 2593 "cplus.met"
    return _retValue ;
#line 2593 "cplus.met"
}
#line 2593 "cplus.met"

#line 2593 "cplus.met"
#line 2087 "cplus.met"
PPTREE cplus::long_short_int_char ( int error_free)
#line 2087 "cplus.met"
{
#line 2087 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 2087 "cplus.met"
    int _value,_nbPre = 0 ;
#line 2087 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 2087 "cplus.met"
    int _Debug = TRACE_RULE("long_short_int_char",TRACE_ENTER,(PPTREE)0);
#line 2087 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 2087 "cplus.met"
#line 2088 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 2088 "cplus.met"
    switch( lexEl.Value) {
#line 2088 "cplus.met"
#line 2089 "cplus.met"
        case INT : 
#line 2089 "cplus.met"
            tokenAhead = 0 ;
#line 2089 "cplus.met"
            CommTerm();
#line 2089 "cplus.met"
#line 2089 "cplus.met"
            {
#line 2089 "cplus.met"
                PPTREE _ptTree0=0;
#line 2089 "cplus.met"
                {
#line 2089 "cplus.met"
                    PPTREE _ptRes1=0;
#line 2089 "cplus.met"
                    _ptRes1= MakeTree(TINT, 0);
#line 2089 "cplus.met"
                    _ptTree0=_ptRes1;
#line 2089 "cplus.met"
                }
#line 2089 "cplus.met"
                _retValue =_ptTree0;
#line 2089 "cplus.met"
                goto long_short_int_char_ret;
#line 2089 "cplus.met"
            }
#line 2089 "cplus.met"
            break;
#line 2089 "cplus.met"
#line 2090 "cplus.met"
        case LONG : 
#line 2090 "cplus.met"
            tokenAhead = 0 ;
#line 2090 "cplus.met"
            CommTerm();
#line 2090 "cplus.met"
#line 2091 "cplus.met"
            (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 2091 "cplus.met"
            switch( lexEl.Value) {
#line 2091 "cplus.met"
#line 2092 "cplus.met"
                case INT : 
#line 2092 "cplus.met"
                    tokenAhead = 0 ;
#line 2092 "cplus.met"
                    CommTerm();
#line 2092 "cplus.met"
#line 2092 "cplus.met"
                    {
#line 2092 "cplus.met"
                        PPTREE _ptTree0=0;
#line 2092 "cplus.met"
                        {
#line 2092 "cplus.met"
                            PPTREE _ptTree1=0,_ptRes1=0;
#line 2092 "cplus.met"
                            _ptRes1= MakeTree(TLONG, 1);
#line 2092 "cplus.met"
                            {
#line 2092 "cplus.met"
                                PPTREE _ptRes2=0;
#line 2092 "cplus.met"
                                _ptRes2= MakeTree(TINT, 0);
#line 2092 "cplus.met"
                                _ptTree1=_ptRes2;
#line 2092 "cplus.met"
                            }
#line 2092 "cplus.met"
                            ReplaceTree(_ptRes1, 1, _ptTree1);
#line 2092 "cplus.met"
                            _ptTree0=_ptRes1;
#line 2092 "cplus.met"
                        }
#line 2092 "cplus.met"
                        _retValue =_ptTree0;
#line 2092 "cplus.met"
                        goto long_short_int_char_ret;
#line 2092 "cplus.met"
                    }
#line 2092 "cplus.met"
                    break;
#line 2092 "cplus.met"
#line 2093 "cplus.met"
                default : 
#line 2093 "cplus.met"
#line 2093 "cplus.met"
                    {
#line 2093 "cplus.met"
                        PPTREE _ptTree0=0;
#line 2093 "cplus.met"
                        {
#line 2093 "cplus.met"
                            PPTREE _ptRes1=0;
#line 2093 "cplus.met"
                            _ptRes1= MakeTree(TLONG, 1);
#line 2093 "cplus.met"
                            _ptTree0=_ptRes1;
#line 2093 "cplus.met"
                        }
#line 2093 "cplus.met"
                        _retValue =_ptTree0;
#line 2093 "cplus.met"
                        goto long_short_int_char_ret;
#line 2093 "cplus.met"
                    }
#line 2093 "cplus.met"
                    break;
#line 2093 "cplus.met"
            }
#line 2093 "cplus.met"
            break;
#line 2093 "cplus.met"
#line 2095 "cplus.met"
        case SHORT : 
#line 2095 "cplus.met"
            tokenAhead = 0 ;
#line 2095 "cplus.met"
            CommTerm();
#line 2095 "cplus.met"
#line 2096 "cplus.met"
            (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 2096 "cplus.met"
            switch( lexEl.Value) {
#line 2096 "cplus.met"
#line 2097 "cplus.met"
                case INT : 
#line 2097 "cplus.met"
                    tokenAhead = 0 ;
#line 2097 "cplus.met"
                    CommTerm();
#line 2097 "cplus.met"
#line 2097 "cplus.met"
                    {
#line 2097 "cplus.met"
                        PPTREE _ptTree0=0;
#line 2097 "cplus.met"
                        {
#line 2097 "cplus.met"
                            PPTREE _ptTree1=0,_ptRes1=0;
#line 2097 "cplus.met"
                            _ptRes1= MakeTree(TSHORT, 1);
#line 2097 "cplus.met"
                            {
#line 2097 "cplus.met"
                                PPTREE _ptRes2=0;
#line 2097 "cplus.met"
                                _ptRes2= MakeTree(TINT, 0);
#line 2097 "cplus.met"
                                _ptTree1=_ptRes2;
#line 2097 "cplus.met"
                            }
#line 2097 "cplus.met"
                            ReplaceTree(_ptRes1, 1, _ptTree1);
#line 2097 "cplus.met"
                            _ptTree0=_ptRes1;
#line 2097 "cplus.met"
                        }
#line 2097 "cplus.met"
                        _retValue =_ptTree0;
#line 2097 "cplus.met"
                        goto long_short_int_char_ret;
#line 2097 "cplus.met"
                    }
#line 2097 "cplus.met"
                    break;
#line 2097 "cplus.met"
#line 2098 "cplus.met"
                default : 
#line 2098 "cplus.met"
#line 2098 "cplus.met"
                    {
#line 2098 "cplus.met"
                        PPTREE _ptTree0=0;
#line 2098 "cplus.met"
                        {
#line 2098 "cplus.met"
                            PPTREE _ptRes1=0;
#line 2098 "cplus.met"
                            _ptRes1= MakeTree(TSHORT, 1);
#line 2098 "cplus.met"
                            _ptTree0=_ptRes1;
#line 2098 "cplus.met"
                        }
#line 2098 "cplus.met"
                        _retValue =_ptTree0;
#line 2098 "cplus.met"
                        goto long_short_int_char_ret;
#line 2098 "cplus.met"
                    }
#line 2098 "cplus.met"
                    break;
#line 2098 "cplus.met"
            }
#line 2098 "cplus.met"
            break;
#line 2098 "cplus.met"
#line 2100 "cplus.met"
        case CHAR : 
#line 2100 "cplus.met"
            tokenAhead = 0 ;
#line 2100 "cplus.met"
            CommTerm();
#line 2100 "cplus.met"
#line 2100 "cplus.met"
            {
#line 2100 "cplus.met"
                PPTREE _ptTree0=0;
#line 2100 "cplus.met"
                {
#line 2100 "cplus.met"
                    PPTREE _ptRes1=0;
#line 2100 "cplus.met"
                    _ptRes1= MakeTree(TCHAR, 0);
#line 2100 "cplus.met"
                    _ptTree0=_ptRes1;
#line 2100 "cplus.met"
                }
#line 2100 "cplus.met"
                _retValue =_ptTree0;
#line 2100 "cplus.met"
                goto long_short_int_char_ret;
#line 2100 "cplus.met"
            }
#line 2100 "cplus.met"
            break;
#line 2100 "cplus.met"
        default :
#line 2100 "cplus.met"
            CASE_EXIT(long_short_int_char_exit,"either int or long or short or char")
#line 2100 "cplus.met"
            break;
#line 2100 "cplus.met"
    }
#line 2100 "cplus.met"
#line 2100 "cplus.met"
#line 2101 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2101 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 2101 "cplus.met"
return((PPTREE) 0);
#line 2101 "cplus.met"

#line 2101 "cplus.met"
long_short_int_char_exit :
#line 2101 "cplus.met"

#line 2101 "cplus.met"
    _Debug = TRACE_RULE("long_short_int_char",TRACE_EXIT,(PPTREE)0);
#line 2101 "cplus.met"
    _funcLevel--;
#line 2101 "cplus.met"
    return((PPTREE) -1) ;
#line 2101 "cplus.met"

#line 2101 "cplus.met"
long_short_int_char_ret :
#line 2101 "cplus.met"
    
#line 2101 "cplus.met"
    _Debug = TRACE_RULE("long_short_int_char",TRACE_RETURN,_retValue);
#line 2101 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2101 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 2101 "cplus.met"
    return _retValue ;
#line 2101 "cplus.met"
}
#line 2101 "cplus.met"

#line 2101 "cplus.met"
#line 1879 "cplus.met"
PPTREE cplus::macro ( int error_free)
#line 1879 "cplus.met"
{
#line 1879 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 1879 "cplus.met"
    int _value,_nbPre = 0 ;
#line 1879 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 1879 "cplus.met"
    int _Debug = TRACE_RULE("macro",TRACE_ENTER,(PPTREE)0);
#line 1879 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 1879 "cplus.met"
#line 1879 "cplus.met"
    PPTREE retTree = (PPTREE) 0,valTree = (PPTREE) 0;
#line 1879 "cplus.met"
#line 1881 "cplus.met"
    (tokenAhead == 13|| (specific(),TRACE_LEX(1)));
#line 1881 "cplus.met"
    switch( lexEl.Value) {
#line 1881 "cplus.met"
#line 1882 "cplus.met"
        case META : 
#line 1882 "cplus.met"
        case DECLARE_SERIAL : 
#line 1882 "cplus.met"
            tokenAhead = 0 ;
#line 1882 "cplus.met"
            CommTerm();
#line 1882 "cplus.met"
#line 1882 "cplus.met"
            {
#line 1882 "cplus.met"
                PPTREE _ptRes0=0;
#line 1882 "cplus.met"
                _ptRes0= MakeTree(IDENT, 1);
#line 1882 "cplus.met"
                ReplaceTree(_ptRes0, 1, MakeString ("DECLARE_SERIAL"));
#line 1882 "cplus.met"
                retTree=_ptRes0;
#line 1882 "cplus.met"
            }
#line 1882 "cplus.met"
            break;
#line 1882 "cplus.met"
#line 1883 "cplus.met"
        case DECLARE_DYNAMIC : 
#line 1883 "cplus.met"
            tokenAhead = 0 ;
#line 1883 "cplus.met"
            CommTerm();
#line 1883 "cplus.met"
#line 1883 "cplus.met"
            {
#line 1883 "cplus.met"
                PPTREE _ptRes0=0;
#line 1883 "cplus.met"
                _ptRes0= MakeTree(IDENT, 1);
#line 1883 "cplus.met"
                ReplaceTree(_ptRes0, 1, MakeString ("DECLARE_DYNAMIC"));
#line 1883 "cplus.met"
                retTree=_ptRes0;
#line 1883 "cplus.met"
            }
#line 1883 "cplus.met"
            break;
#line 1883 "cplus.met"
#line 1884 "cplus.met"
        case DECLARE_MESSAGE_MAP : 
#line 1884 "cplus.met"
            tokenAhead = 0 ;
#line 1884 "cplus.met"
            CommTerm();
#line 1884 "cplus.met"
#line 1884 "cplus.met"
            {
#line 1884 "cplus.met"
                PPTREE _ptRes0=0;
#line 1884 "cplus.met"
                _ptRes0= MakeTree(IDENT, 1);
#line 1884 "cplus.met"
                ReplaceTree(_ptRes0, 1, MakeString ("DECLARE_MESSAGE_MAP"));
#line 1884 "cplus.met"
                retTree=_ptRes0;
#line 1884 "cplus.met"
            }
#line 1884 "cplus.met"
            break;
#line 1884 "cplus.met"
#line 1886 "cplus.met"
        case IMPLEMENT_DYNAMIC : 
#line 1886 "cplus.met"
            tokenAhead = 0 ;
#line 1886 "cplus.met"
            CommTerm();
#line 1886 "cplus.met"
#line 1886 "cplus.met"
            {
#line 1886 "cplus.met"
                PPTREE _ptRes0=0;
#line 1886 "cplus.met"
                _ptRes0= MakeTree(IDENT, 1);
#line 1886 "cplus.met"
                ReplaceTree(_ptRes0, 1, MakeString ("IMPLEMENT_DYNAMIC"));
#line 1886 "cplus.met"
                retTree=_ptRes0;
#line 1886 "cplus.met"
            }
#line 1886 "cplus.met"
            break;
#line 1886 "cplus.met"
#line 1888 "cplus.met"
        case IMPLEMENT_DYNCREATE : 
#line 1888 "cplus.met"
            tokenAhead = 0 ;
#line 1888 "cplus.met"
            CommTerm();
#line 1888 "cplus.met"
#line 1888 "cplus.met"
            {
#line 1888 "cplus.met"
                PPTREE _ptRes0=0;
#line 1888 "cplus.met"
                _ptRes0= MakeTree(IDENT, 1);
#line 1888 "cplus.met"
                ReplaceTree(_ptRes0, 1, MakeString ("IMPLEMENT_DYNCREATE"));
#line 1888 "cplus.met"
                retTree=_ptRes0;
#line 1888 "cplus.met"
            }
#line 1888 "cplus.met"
            break;
#line 1888 "cplus.met"
#line 1890 "cplus.met"
        case IMPLEMENT_SERIAL : 
#line 1890 "cplus.met"
            tokenAhead = 0 ;
#line 1890 "cplus.met"
            CommTerm();
#line 1890 "cplus.met"
#line 1890 "cplus.met"
            {
#line 1890 "cplus.met"
                PPTREE _ptRes0=0;
#line 1890 "cplus.met"
                _ptRes0= MakeTree(IDENT, 1);
#line 1890 "cplus.met"
                ReplaceTree(_ptRes0, 1, MakeString ("IMPLEMENT_SERIAL"));
#line 1890 "cplus.met"
                retTree=_ptRes0;
#line 1890 "cplus.met"
            }
#line 1890 "cplus.met"
            break;
#line 1890 "cplus.met"
#line 1892 "cplus.met"
        case BEGIN_MESSAGE_MAP : 
#line 1892 "cplus.met"
            tokenAhead = 0 ;
#line 1892 "cplus.met"
            CommTerm();
#line 1892 "cplus.met"
#line 1892 "cplus.met"
            {
#line 1892 "cplus.met"
                PPTREE _ptRes0=0;
#line 1892 "cplus.met"
                _ptRes0= MakeTree(IDENT, 1);
#line 1892 "cplus.met"
                ReplaceTree(_ptRes0, 1, MakeString ("BEGIN_MESSAGE_MAP"));
#line 1892 "cplus.met"
                retTree=_ptRes0;
#line 1892 "cplus.met"
            }
#line 1892 "cplus.met"
            break;
#line 1892 "cplus.met"
#line 1894 "cplus.met"
        case END_MESSAGE_MAP : 
#line 1894 "cplus.met"
            tokenAhead = 0 ;
#line 1894 "cplus.met"
            CommTerm();
#line 1894 "cplus.met"
#line 1894 "cplus.met"
            {
#line 1894 "cplus.met"
                PPTREE _ptRes0=0;
#line 1894 "cplus.met"
                _ptRes0= MakeTree(IDENT, 1);
#line 1894 "cplus.met"
                ReplaceTree(_ptRes0, 1, MakeString ("END_MESSAGE_MAP"));
#line 1894 "cplus.met"
                retTree=_ptRes0;
#line 1894 "cplus.met"
            }
#line 1894 "cplus.met"
            break;
#line 1894 "cplus.met"
#line 1895 "cplus.met"
        case CATCH_UPPER : 
#line 1895 "cplus.met"
            tokenAhead = 0 ;
#line 1895 "cplus.met"
            CommTerm();
#line 1895 "cplus.met"
#line 1895 "cplus.met"
            {
#line 1895 "cplus.met"
                PPTREE _ptRes0=0;
#line 1895 "cplus.met"
                _ptRes0= MakeTree(IDENT, 1);
#line 1895 "cplus.met"
                ReplaceTree(_ptRes0, 1, MakeString ("CATCH"));
#line 1895 "cplus.met"
                retTree=_ptRes0;
#line 1895 "cplus.met"
            }
#line 1895 "cplus.met"
            break;
#line 1895 "cplus.met"
#line 1896 "cplus.met"
        case CATCH_ALL : 
#line 1896 "cplus.met"
            tokenAhead = 0 ;
#line 1896 "cplus.met"
            CommTerm();
#line 1896 "cplus.met"
#line 1896 "cplus.met"
            {
#line 1896 "cplus.met"
                PPTREE _ptRes0=0;
#line 1896 "cplus.met"
                _ptRes0= MakeTree(IDENT, 1);
#line 1896 "cplus.met"
                ReplaceTree(_ptRes0, 1, MakeString ("CATCH_ALL"));
#line 1896 "cplus.met"
                retTree=_ptRes0;
#line 1896 "cplus.met"
            }
#line 1896 "cplus.met"
            break;
#line 1896 "cplus.met"
#line 1897 "cplus.met"
        case AND_CATCH : 
#line 1897 "cplus.met"
            tokenAhead = 0 ;
#line 1897 "cplus.met"
            CommTerm();
#line 1897 "cplus.met"
#line 1897 "cplus.met"
            {
#line 1897 "cplus.met"
                PPTREE _ptRes0=0;
#line 1897 "cplus.met"
                _ptRes0= MakeTree(IDENT, 1);
#line 1897 "cplus.met"
                ReplaceTree(_ptRes0, 1, MakeString ("AND_CATCH"));
#line 1897 "cplus.met"
                retTree=_ptRes0;
#line 1897 "cplus.met"
            }
#line 1897 "cplus.met"
            break;
#line 1897 "cplus.met"
#line 1898 "cplus.met"
        default : 
#line 1898 "cplus.met"
#line 1898 "cplus.met"
            
#line 1898 "cplus.met"
            MulFreeTree(2,retTree,valTree);
            LEX_EXIT ("",0);
#line 1898 "cplus.met"
            goto macro_exit;
#line 1898 "cplus.met"
            break;
#line 1898 "cplus.met"
    }
#line 1898 "cplus.met"
#line 1900 "cplus.met"
    {
#line 1900 "cplus.met"
        PPTREE _ptRes0=0;
#line 1900 "cplus.met"
        _ptRes0= MakeTree(MACRO, 2);
#line 1900 "cplus.met"
        ReplaceTree(_ptRes0, 1, retTree );
#line 1900 "cplus.met"
        retTree=_ptRes0;
#line 1900 "cplus.met"
    }
#line 1900 "cplus.met"
#line 1901 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 1901 "cplus.met"
    if (  !SEE_TOKEN( POUV,"(") || !(CommTerm(),1)) {
#line 1901 "cplus.met"
        MulFreeTree(2,retTree,valTree);
        TOKEN_EXIT(macro_exit,"(")
#line 1901 "cplus.met"
    } else {
#line 1901 "cplus.met"
        tokenAhead = 0 ;
#line 1901 "cplus.met"
    }
#line 1901 "cplus.met"
#line 1902 "cplus.met"
    if (NPUSH_CALL_AFF_VERIF(valTree = ,_Tak(expression), 59, cplus)){
#line 1902 "cplus.met"
#line 1903 "cplus.met"
        ReplaceTree(retTree ,2 ,valTree );
#line 1903 "cplus.met"
#line 1903 "cplus.met"
    }
#line 1903 "cplus.met"
#line 1904 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 1904 "cplus.met"
    if (  !SEE_TOKEN( PFER,")") || !(CommTerm(),1)) {
#line 1904 "cplus.met"
        MulFreeTree(2,retTree,valTree);
        TOKEN_EXIT(macro_exit,")")
#line 1904 "cplus.met"
    } else {
#line 1904 "cplus.met"
        tokenAhead = 0 ;
#line 1904 "cplus.met"
    }
#line 1904 "cplus.met"
#line 1905 "cplus.met"
    if ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN(PVIR,";") && (tokenAhead = 0,CommTerm(),1)){
#line 1905 "cplus.met"
#line 1905 "cplus.met"
    }
#line 1905 "cplus.met"
#line 1907 "cplus.met"
    {
#line 1907 "cplus.met"
        _retValue = retTree ;
#line 1907 "cplus.met"
        goto macro_ret;
#line 1907 "cplus.met"
        
#line 1907 "cplus.met"
    }
#line 1907 "cplus.met"
#line 1907 "cplus.met"
#line 1907 "cplus.met"

#line 1908 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1908 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 1908 "cplus.met"
return((PPTREE) 0);
#line 1908 "cplus.met"

#line 1908 "cplus.met"
macro_exit :
#line 1908 "cplus.met"

#line 1908 "cplus.met"
    _Debug = TRACE_RULE("macro",TRACE_EXIT,(PPTREE)0);
#line 1908 "cplus.met"
    _funcLevel--;
#line 1908 "cplus.met"
    return((PPTREE) -1) ;
#line 1908 "cplus.met"

#line 1908 "cplus.met"
macro_ret :
#line 1908 "cplus.met"
    
#line 1908 "cplus.met"
    _Debug = TRACE_RULE("macro",TRACE_RETURN,_retValue);
#line 1908 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1908 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 1908 "cplus.met"
    return _retValue ;
#line 1908 "cplus.met"
}
#line 1908 "cplus.met"

#line 1908 "cplus.met"
#line 1910 "cplus.met"
PPTREE cplus::macro_extended ( int error_free)
#line 1910 "cplus.met"
{
#line 1910 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 1910 "cplus.met"
    int _value,_nbPre = 0 ;
#line 1910 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 1910 "cplus.met"
    int _Debug = TRACE_RULE("macro_extended",TRACE_ENTER,(PPTREE)0);
#line 1910 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 1910 "cplus.met"
#line 1910 "cplus.met"
    PPTREE retTree = (PPTREE) 0,valTree = (PPTREE) 0;
#line 1910 "cplus.met"
#line 1912 "cplus.met"
#line 1913 "cplus.met"
    if(((tokenAhead == 13|| (specific(),TRACE_LEX(1)))&&TERM_OR_META(DECLARE_SERIAL,"DECLARE_SERIAL") && (tokenAhead = 0,CommTerm(),1))){
#line 1913 "cplus.met"
#line 1913 "cplus.met"
        {
#line 1913 "cplus.met"
            PPTREE _ptRes0=0;
#line 1913 "cplus.met"
            _ptRes0= MakeTree(IDENT, 1);
#line 1913 "cplus.met"
            ReplaceTree(_ptRes0, 1, MakeString ("DECLARE_SERIAL"));
#line 1913 "cplus.met"
            retTree=_ptRes0;
#line 1913 "cplus.met"
        }
#line 1913 "cplus.met"
    } else 
#line 1913 "cplus.met"
#line 1914 "cplus.met"
    if(((tokenAhead == 13|| (specific(),TRACE_LEX(1)))&&TERM_OR_META(IMPLEMENT_DYNAMIC,"IMPLEMENT_DYNAMIC") && (tokenAhead = 0,CommTerm(),1))){
#line 1914 "cplus.met"
#line 1914 "cplus.met"
        {
#line 1914 "cplus.met"
            PPTREE _ptRes0=0;
#line 1914 "cplus.met"
            _ptRes0= MakeTree(IDENT, 1);
#line 1914 "cplus.met"
            ReplaceTree(_ptRes0, 1, MakeString ("IMPLEMENT_DYNAMIC"));
#line 1914 "cplus.met"
            retTree=_ptRes0;
#line 1914 "cplus.met"
        }
#line 1914 "cplus.met"
    } else 
#line 1914 "cplus.met"
#line 1916 "cplus.met"
    if(((tokenAhead == 13|| (specific(),TRACE_LEX(1)))&&TERM_OR_META(IMPLEMENT_DYNCREATE,"IMPLEMENT_DYNCREATE") && (tokenAhead = 0,CommTerm(),1))){
#line 1916 "cplus.met"
#line 1916 "cplus.met"
        {
#line 1916 "cplus.met"
            PPTREE _ptRes0=0;
#line 1916 "cplus.met"
            _ptRes0= MakeTree(IDENT, 1);
#line 1916 "cplus.met"
            ReplaceTree(_ptRes0, 1, MakeString ("IMPLEMENT_DYNCREATE"));
#line 1916 "cplus.met"
            retTree=_ptRes0;
#line 1916 "cplus.met"
        }
#line 1916 "cplus.met"
    } else 
#line 1916 "cplus.met"
#line 1918 "cplus.met"
    if(((tokenAhead == 13|| (specific(),TRACE_LEX(1)))&&TERM_OR_META(IMPLEMENT_SERIAL,"IMPLEMENT_SERIAL") && (tokenAhead = 0,CommTerm(),1))){
#line 1918 "cplus.met"
#line 1918 "cplus.met"
        {
#line 1918 "cplus.met"
            PPTREE _ptRes0=0;
#line 1918 "cplus.met"
            _ptRes0= MakeTree(IDENT, 1);
#line 1918 "cplus.met"
            ReplaceTree(_ptRes0, 1, MakeString ("IMPLEMENT_SERIAL"));
#line 1918 "cplus.met"
            retTree=_ptRes0;
#line 1918 "cplus.met"
        }
#line 1918 "cplus.met"
    } else 
#line 1918 "cplus.met"
#line 1920 "cplus.met"
    if(((tokenAhead == 13|| (specific(),TRACE_LEX(1)))&&TERM_OR_META(DECLARE_DYNAMIC,"DECLARE_DYNAMIC") && (tokenAhead = 0,CommTerm(),1))){
#line 1920 "cplus.met"
#line 1920 "cplus.met"
        {
#line 1920 "cplus.met"
            PPTREE _ptRes0=0;
#line 1920 "cplus.met"
            _ptRes0= MakeTree(IDENT, 1);
#line 1920 "cplus.met"
            ReplaceTree(_ptRes0, 1, MakeString ("DECLARE_DYNAMIC"));
#line 1920 "cplus.met"
            retTree=_ptRes0;
#line 1920 "cplus.met"
        }
#line 1920 "cplus.met"
    } else 
#line 1920 "cplus.met"
#line 1921 "cplus.met"
    if(((tokenAhead == 13|| (specific(),TRACE_LEX(1)))&&TERM_OR_META(BEGIN_MESSAGE_MAP,"BEGIN_MESSAGE_MAP") && (tokenAhead = 0,CommTerm(),1))){
#line 1921 "cplus.met"
#line 1921 "cplus.met"
        {
#line 1921 "cplus.met"
            PPTREE _ptRes0=0;
#line 1921 "cplus.met"
            _ptRes0= MakeTree(IDENT, 1);
#line 1921 "cplus.met"
            ReplaceTree(_ptRes0, 1, MakeString ("BEGIN_MESSAGE_MAP"));
#line 1921 "cplus.met"
            retTree=_ptRes0;
#line 1921 "cplus.met"
        }
#line 1921 "cplus.met"
    } else 
#line 1921 "cplus.met"
#line 1923 "cplus.met"
    if(((tokenAhead == 13|| (specific(),TRACE_LEX(1)))&&TERM_OR_META(CATCH_UPPER,"CATCH_UPPER") && (tokenAhead = 0,CommTerm(),1))){
#line 1923 "cplus.met"
#line 1923 "cplus.met"
        {
#line 1923 "cplus.met"
            PPTREE _ptRes0=0;
#line 1923 "cplus.met"
            _ptRes0= MakeTree(IDENT, 1);
#line 1923 "cplus.met"
            ReplaceTree(_ptRes0, 1, MakeString ("CATCH"));
#line 1923 "cplus.met"
            retTree=_ptRes0;
#line 1923 "cplus.met"
        }
#line 1923 "cplus.met"
    } else 
#line 1923 "cplus.met"
#line 1924 "cplus.met"
    if(((tokenAhead == 13|| (specific(),TRACE_LEX(1)))&&TERM_OR_META(CATCH_ALL,"CATCH_ALL") && (tokenAhead = 0,CommTerm(),1))){
#line 1924 "cplus.met"
#line 1924 "cplus.met"
        {
#line 1924 "cplus.met"
            PPTREE _ptRes0=0;
#line 1924 "cplus.met"
            _ptRes0= MakeTree(IDENT, 1);
#line 1924 "cplus.met"
            ReplaceTree(_ptRes0, 1, MakeString ("CATCH_ALL"));
#line 1924 "cplus.met"
            retTree=_ptRes0;
#line 1924 "cplus.met"
        }
#line 1924 "cplus.met"
    } else 
#line 1924 "cplus.met"
#line 1925 "cplus.met"
    if(((tokenAhead == 13|| (specific(),TRACE_LEX(1)))&&TERM_OR_META(AND_CATCH,"AND_CATCH") && (tokenAhead = 0,CommTerm(),1))){
#line 1925 "cplus.met"
#line 1925 "cplus.met"
        {
#line 1925 "cplus.met"
            PPTREE _ptRes0=0;
#line 1925 "cplus.met"
            _ptRes0= MakeTree(IDENT, 1);
#line 1925 "cplus.met"
            ReplaceTree(_ptRes0, 1, MakeString ("AND_CATCH"));
#line 1925 "cplus.met"
            retTree=_ptRes0;
#line 1925 "cplus.met"
        }
#line 1925 "cplus.met"
    } else 
#line 1925 "cplus.met"
#line 1926 "cplus.met"
    if(((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN( IDENT,"IDENT"))){
#line 1926 "cplus.met"
#line 1926 "cplus.met"
        {
#line 1926 "cplus.met"
            PPTREE _ptTree0=0,_ptRes0=0;
#line 1926 "cplus.met"
            _ptRes0= MakeTree(IDENT, 1);
#line 1926 "cplus.met"
            (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 1926 "cplus.met"
            if ( ! TERM_OR_META(IDENT,"IDENT") || !(BUILD_TERM_META(_ptTree0))) {
#line 1926 "cplus.met"
                MulFreeTree(4,_ptRes0,_ptTree0,retTree,valTree);
                TOKEN_EXIT(macro_extended_exit,"IDENT")
#line 1926 "cplus.met"
            } else {
#line 1926 "cplus.met"
                tokenAhead = 0 ;
#line 1926 "cplus.met"
            }
#line 1926 "cplus.met"
            ReplaceTree(_ptRes0, 1, _ptTree0);
#line 1926 "cplus.met"
            retTree=_ptRes0;
#line 1926 "cplus.met"
        }
#line 1926 "cplus.met"
    } else 
#line 1926 "cplus.met"
#line 1927 "cplus.met"
    if (1) {
#line 1927 "cplus.met"
#line 1927 "cplus.met"
        
#line 1927 "cplus.met"
        MulFreeTree(2,retTree,valTree);
        LEX_EXIT ("",0);
#line 1927 "cplus.met"
        goto macro_extended_exit;
#line 1927 "cplus.met"
    } else 
#line 1927 "cplus.met"
     ;
#line 1927 "cplus.met"
#line 1929 "cplus.met"
    {
#line 1929 "cplus.met"
        PPTREE _ptRes0=0;
#line 1929 "cplus.met"
        _ptRes0= MakeTree(MACRO, 2);
#line 1929 "cplus.met"
        ReplaceTree(_ptRes0, 1, retTree );
#line 1929 "cplus.met"
        retTree=_ptRes0;
#line 1929 "cplus.met"
    }
#line 1929 "cplus.met"
#line 1930 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 1930 "cplus.met"
    if (  !SEE_TOKEN( POUV,"(") || !(CommTerm(),1)) {
#line 1930 "cplus.met"
        MulFreeTree(2,retTree,valTree);
        TOKEN_EXIT(macro_extended_exit,"(")
#line 1930 "cplus.met"
    } else {
#line 1930 "cplus.met"
        tokenAhead = 0 ;
#line 1930 "cplus.met"
    }
#line 1930 "cplus.met"
#line 1931 "cplus.met"
    if (NPUSH_CALL_AFF_VERIF(valTree = ,_Tak(expression), 59, cplus)){
#line 1931 "cplus.met"
#line 1932 "cplus.met"
        ReplaceTree(retTree ,2 ,valTree );
#line 1932 "cplus.met"
#line 1932 "cplus.met"
    }
#line 1932 "cplus.met"
#line 1933 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 1933 "cplus.met"
    if (  !SEE_TOKEN( PFER,")") || !(CommTerm(),1)) {
#line 1933 "cplus.met"
        MulFreeTree(2,retTree,valTree);
        TOKEN_EXIT(macro_extended_exit,")")
#line 1933 "cplus.met"
    } else {
#line 1933 "cplus.met"
        tokenAhead = 0 ;
#line 1933 "cplus.met"
    }
#line 1933 "cplus.met"
#line 1934 "cplus.met"
    if ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN(PVIR,";") && (tokenAhead = 0,CommTerm(),1)){
#line 1934 "cplus.met"
#line 1934 "cplus.met"
    }
#line 1934 "cplus.met"
#line 1936 "cplus.met"
    {
#line 1936 "cplus.met"
        _retValue = retTree ;
#line 1936 "cplus.met"
        goto macro_extended_ret;
#line 1936 "cplus.met"
        
#line 1936 "cplus.met"
    }
#line 1936 "cplus.met"
#line 1936 "cplus.met"
#line 1936 "cplus.met"

#line 1937 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1937 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 1937 "cplus.met"
return((PPTREE) 0);
#line 1937 "cplus.met"

#line 1937 "cplus.met"
macro_extended_exit :
#line 1937 "cplus.met"

#line 1937 "cplus.met"
    _Debug = TRACE_RULE("macro_extended",TRACE_EXIT,(PPTREE)0);
#line 1937 "cplus.met"
    _funcLevel--;
#line 1937 "cplus.met"
    return((PPTREE) -1) ;
#line 1937 "cplus.met"

#line 1937 "cplus.met"
macro_extended_ret :
#line 1937 "cplus.met"
    
#line 1937 "cplus.met"
    _Debug = TRACE_RULE("macro_extended",TRACE_RETURN,_retValue);
#line 1937 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1937 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 1937 "cplus.met"
    return _retValue ;
#line 1937 "cplus.met"
}
#line 1937 "cplus.met"

#line 1937 "cplus.met"
