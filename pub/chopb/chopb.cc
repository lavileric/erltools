/*************************************************************************/
/*                                                                       */
/*        Produced by MetaGen version 2.0  -    1989-2006                 */
/*       Syntaxic Analyzer Meta Generator developped by                  */
/*                  Eric Lavillonniere                                   */
/*                                                                       */
/*************************************************************************/

#include "token.h"
#include "chopb.h"


#line 283 "chopb.met"
PPTREE chopb::assignment_expression ( int error_free)
#line 283 "chopb.met"
{
#line 283 "chopb.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 283 "chopb.met"
    int _value,_nbPre = 0 ;
#line 283 "chopb.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 283 "chopb.met"
    int _Debug = TRACE_RULE("assignment_expression",TRACE_ENTER,(PPTREE)0);
#line 283 "chopb.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 283 "chopb.met"
#line 283 "chopb.met"
    PPTREE expTree = (PPTREE) 0,expFollow = (PPTREE) 0;
#line 283 "chopb.met"
#line 285 "chopb.met"
    if ( (expTree=NQUICK_CALL(_Tak(conditional_expression)(error_free), 34, chopb))== (PPTREE) -1 ) {
#line 285 "chopb.met"
        MulFreeTree(2,expFollow,expTree);
        PROG_EXIT(assignment_expression_exit,"assignment_expression")
#line 285 "chopb.met"
    }
#line 285 "chopb.met"
#line 286 "chopb.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 286 "chopb.met"
    switch( lexEl.Value) {
#line 286 "chopb.met"
#line 287 "chopb.met"
        case ETOIETOIEGAL : 
#line 287 "chopb.met"
            tokenAhead = 0 ;
#line 287 "chopb.met"
            CommTerm();
#line 287 "chopb.met"
#line 287 "chopb.met"
            {
#line 287 "chopb.met"
                PPTREE _ptTree0=0;
#line 287 "chopb.met"
                {
#line 287 "chopb.met"
                    PPTREE _ptTree1=0,_ptRes1=0;
#line 287 "chopb.met"
                    _ptRes1= MakeTree(EXPO_AFF, 2);
#line 287 "chopb.met"
                    ReplaceTree(_ptRes1, 1, expTree );
#line 287 "chopb.met"
                    if ( (_ptTree1=NQUICK_CALL(_Tak(assignment_expression)(error_free), 21, chopb))== (PPTREE) -1 ) {
#line 287 "chopb.met"
                        MulFreeTree(5,_ptRes1,_ptTree1,_ptTree0,expFollow,expTree);
                        PROG_EXIT(assignment_expression_exit,"assignment_expression")
#line 287 "chopb.met"
                    }
#line 287 "chopb.met"
                    ReplaceTree(_ptRes1, 2, _ptTree1);
#line 287 "chopb.met"
                    _ptTree0=_ptRes1;
#line 287 "chopb.met"
                }
#line 287 "chopb.met"
                _retValue =_ptTree0;
#line 287 "chopb.met"
                goto assignment_expression_ret;
#line 287 "chopb.met"
            }
#line 287 "chopb.met"
            break;
#line 287 "chopb.met"
#line 289 "chopb.met"
        default : 
#line 289 "chopb.met"
#line 289 "chopb.met"
            if (NPUSH_CALL_AFF_VERIF(expFollow = ,_Tak(assignment_end), 20, chopb)){
#line 289 "chopb.met"
#line 290 "chopb.met"
#line 291 "chopb.met"
                ReplaceTree(expFollow ,1 ,expTree );
#line 291 "chopb.met"
#line 292 "chopb.met"
                expTree = expFollow ;
#line 292 "chopb.met"
#line 292 "chopb.met"
#line 292 "chopb.met"
            }
#line 292 "chopb.met"
            break;
#line 292 "chopb.met"
    }
#line 292 "chopb.met"
#line 295 "chopb.met"
    {
#line 295 "chopb.met"
        _retValue = expTree ;
#line 295 "chopb.met"
        goto assignment_expression_ret;
#line 295 "chopb.met"
        
#line 295 "chopb.met"
    }
#line 295 "chopb.met"
#line 295 "chopb.met"
#line 295 "chopb.met"

#line 296 "chopb.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 296 "chopb.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 296 "chopb.met"
return((PPTREE) 0);
#line 296 "chopb.met"

#line 296 "chopb.met"
assignment_expression_exit :
#line 296 "chopb.met"

#line 296 "chopb.met"
    _Debug = TRACE_RULE("assignment_expression",TRACE_EXIT,(PPTREE)0);
#line 296 "chopb.met"
    _funcLevel--;
#line 296 "chopb.met"
    return((PPTREE) -1) ;
#line 296 "chopb.met"

#line 296 "chopb.met"
assignment_expression_ret :
#line 296 "chopb.met"
    
#line 296 "chopb.met"
    _Debug = TRACE_RULE("assignment_expression",TRACE_RETURN,_retValue);
#line 296 "chopb.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 296 "chopb.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 296 "chopb.met"
    return _retValue ;
#line 296 "chopb.met"
}
#line 296 "chopb.met"

#line 296 "chopb.met"
#line 370 "chopb.met"
PPTREE chopb::cast_expression_value ( int error_free)
#line 370 "chopb.met"
{
#line 370 "chopb.met"
    int  _oldinMakeTree = inMakeTree;
#line 370 "chopb.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 370 "chopb.met"
    int _value,_nbPre = 0 ;
#line 370 "chopb.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 370 "chopb.met"
    int _Debug = TRACE_RULE("cast_expression_value",TRACE_ENTER,(PPTREE)0);
#line 370 "chopb.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 370 "chopb.met"
#line 370 "chopb.met"
    PPTREE ret = (PPTREE) 0;
#line 370 "chopb.met"
#line 372 "chopb.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 372 "chopb.met"
    if (  !SEE_TOKEN( POUV,"(") || !(CommTerm(),1)) {
#line 372 "chopb.met"
        MulFreeTree(1,ret);
        TOKEN_EXIT(cast_expression_value_exit,"(")
#line 372 "chopb.met"
    } else {
#line 372 "chopb.met"
        tokenAhead = 0 ;
#line 372 "chopb.met"
    }
#line 372 "chopb.met"
#line 373 "chopb.met"
    {
#line 373 "chopb.met"
        inMakeTree = 0 ;
#line 373 "chopb.met"
#line 374 "chopb.met"
        if ( (ret=NQUICK_CALL(_Tak(type_name)(error_free), 154, chopb))== (PPTREE) -1 ) {
#line 374 "chopb.met"
            MulFreeTree(1,ret);
            PROG_EXIT(cast_expression_value_exit,"cast_expression_value")
#line 374 "chopb.met"
        }
#line 374 "chopb.met"
        inMakeTree =  _oldinMakeTree;
#line 374 "chopb.met"
    }
#line 374 "chopb.met"
#line 375 "chopb.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 375 "chopb.met"
    if (  !SEE_TOKEN( PFER,")") || !(CommTerm(),1)) {
#line 375 "chopb.met"
        MulFreeTree(1,ret);
        TOKEN_EXIT(cast_expression_value_exit,")")
#line 375 "chopb.met"
    } else {
#line 375 "chopb.met"
        tokenAhead = 0 ;
#line 375 "chopb.met"
    }
#line 375 "chopb.met"
#line 376 "chopb.met"
    {
#line 376 "chopb.met"
        PPTREE _ptTree0=0;
#line 376 "chopb.met"
        {
#line 376 "chopb.met"
            PPTREE _ptTree1=0,_ptRes1=0;
#line 376 "chopb.met"
            _ptRes1= MakeTree(CAST, 2);
#line 376 "chopb.met"
            ReplaceTree(_ptRes1, 1, ret );
#line 376 "chopb.met"
            if ( (_ptTree1=NQUICK_CALL(_Tak(cast_expression)(error_free), 26, chopb))== (PPTREE) -1 ) {
#line 376 "chopb.met"
                MulFreeTree(4,_ptRes1,_ptTree1,_ptTree0,ret);
                PROG_EXIT(cast_expression_value_exit,"cast_expression_value")
#line 376 "chopb.met"
            }
#line 376 "chopb.met"
            ReplaceTree(_ptRes1, 2, _ptTree1);
#line 376 "chopb.met"
            _ptTree0=_ptRes1;
#line 376 "chopb.met"
        }
#line 376 "chopb.met"
        _retValue =_ptTree0;
#line 376 "chopb.met"
        goto cast_expression_value_ret;
#line 376 "chopb.met"
    }
#line 376 "chopb.met"
#line 376 "chopb.met"
#line 376 "chopb.met"

#line 377 "chopb.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 377 "chopb.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 377 "chopb.met"
inMakeTree =  _oldinMakeTree;
#line 377 "chopb.met"
return((PPTREE) 0);
#line 377 "chopb.met"

#line 377 "chopb.met"
cast_expression_value_exit :
#line 377 "chopb.met"

#line 377 "chopb.met"
    _Debug = TRACE_RULE("cast_expression_value",TRACE_EXIT,(PPTREE)0);
#line 377 "chopb.met"
    _funcLevel--;
#line 377 "chopb.met"
    inMakeTree =  _oldinMakeTree;
#line 377 "chopb.met"
    return((PPTREE) -1) ;
#line 377 "chopb.met"

#line 377 "chopb.met"
cast_expression_value_ret :
#line 377 "chopb.met"
    
#line 377 "chopb.met"
    _Debug = TRACE_RULE("cast_expression_value",TRACE_RETURN,_retValue);
#line 377 "chopb.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 377 "chopb.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 377 "chopb.met"
    inMakeTree =  _oldinMakeTree;
#line 377 "chopb.met"
    return _retValue ;
#line 377 "chopb.met"
}
#line 377 "chopb.met"

#line 377 "chopb.met"
#line 379 "chopb.met"
PPTREE chopb::exclusive_or_expression ( int error_free)
#line 379 "chopb.met"
{
#line 379 "chopb.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 379 "chopb.met"
    int _value,_nbPre = 0 ;
#line 379 "chopb.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 379 "chopb.met"
    int _Debug = TRACE_RULE("exclusive_or_expression",TRACE_ENTER,(PPTREE)0);
#line 379 "chopb.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 379 "chopb.met"
#line 379 "chopb.met"
    PPTREE expTree = (PPTREE) 0,ret = (PPTREE) 0;
#line 379 "chopb.met"
#line 381 "chopb.met"
    if ( (expTree=NQUICK_CALL(_Tak(and_expression)(error_free), 6, chopb))== (PPTREE) -1 ) {
#line 381 "chopb.met"
        MulFreeTree(2,expTree,ret);
        PROG_EXIT(exclusive_or_expression_exit,"exclusive_or_expression")
#line 381 "chopb.met"
    }
#line 381 "chopb.met"
#line 382 "chopb.met"
    while ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN(CHAP,"^") && (tokenAhead = 0,CommTerm(),1)) { 
#line 382 "chopb.met"
#line 383 "chopb.met"
        if (NPUSH_CALL_AFF_VERIF(ret = ,_Tak(and_expression), 6, chopb)){
#line 383 "chopb.met"
#line 384 "chopb.met"
            {
#line 384 "chopb.met"
                PPTREE _ptRes0=0;
#line 384 "chopb.met"
                _ptRes0= MakeTree(LXOR, 2);
#line 384 "chopb.met"
                ReplaceTree(_ptRes0, 1, expTree );
#line 384 "chopb.met"
                ReplaceTree(_ptRes0, 2, ret );
#line 384 "chopb.met"
                expTree=_ptRes0;
#line 384 "chopb.met"
            }
#line 384 "chopb.met"
        } else {
#line 384 "chopb.met"
#line 386 "chopb.met"
            {
#line 386 "chopb.met"
                PPTREE _ptRes0=0;
#line 386 "chopb.met"
                _ptRes0= MakeTree(LXOR, 2);
#line 386 "chopb.met"
                ReplaceTree(_ptRes0, 1, expTree );
#line 386 "chopb.met"
                expTree=_ptRes0;
#line 386 "chopb.met"
            }
#line 386 "chopb.met"
        }
#line 386 "chopb.met"
    } 
#line 386 "chopb.met"
#line 387 "chopb.met"
    {
#line 387 "chopb.met"
        _retValue = expTree ;
#line 387 "chopb.met"
        goto exclusive_or_expression_ret;
#line 387 "chopb.met"
        
#line 387 "chopb.met"
    }
#line 387 "chopb.met"
#line 387 "chopb.met"
#line 387 "chopb.met"

#line 388 "chopb.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 388 "chopb.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 388 "chopb.met"
return((PPTREE) 0);
#line 388 "chopb.met"

#line 388 "chopb.met"
exclusive_or_expression_exit :
#line 388 "chopb.met"

#line 388 "chopb.met"
    _Debug = TRACE_RULE("exclusive_or_expression",TRACE_EXIT,(PPTREE)0);
#line 388 "chopb.met"
    _funcLevel--;
#line 388 "chopb.met"
    return((PPTREE) -1) ;
#line 388 "chopb.met"

#line 388 "chopb.met"
exclusive_or_expression_ret :
#line 388 "chopb.met"
    
#line 388 "chopb.met"
    _Debug = TRACE_RULE("exclusive_or_expression",TRACE_RETURN,_retValue);
#line 388 "chopb.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 388 "chopb.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 388 "chopb.met"
    return _retValue ;
#line 388 "chopb.met"
}
#line 388 "chopb.met"

#line 388 "chopb.met"
#line 269 "chopb.met"
PPTREE chopb::expression ( int error_free)
#line 269 "chopb.met"
{
#line 269 "chopb.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 269 "chopb.met"
    int _value,_nbPre = 0 ;
#line 269 "chopb.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 269 "chopb.met"
    int _Debug = TRACE_RULE("expression",TRACE_ENTER,(PPTREE)0);
#line 269 "chopb.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 269 "chopb.met"
#line 269 "chopb.met"
    PPTREE _addlist1 = (PPTREE) 0;
#line 269 "chopb.met"
#line 269 "chopb.met"
    PPTREE expTree = (PPTREE) 0,list = (PPTREE) 0;
#line 269 "chopb.met"
#line 271 "chopb.met"
    if ( (expTree=NQUICK_CALL(_Tak(assignment_expression)(error_free), 21, chopb))== (PPTREE) -1 ) {
#line 271 "chopb.met"
        MulFreeTree(3,_addlist1,expTree,list);
        PROG_EXIT(expression_exit,"expression")
#line 271 "chopb.met"
    }
#line 271 "chopb.met"
#line 272 "chopb.met"
    if ((! (inMakeTree)) && 
#line 272 "chopb.met"
       ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN( VIRG,","))){
#line 272 "chopb.met"
#line 273 "chopb.met"
#line 274 "chopb.met"
        list =AddList(list ,expTree );
#line 274 "chopb.met"
#line 274 "chopb.met"
        _addlist1 = list ;
#line 274 "chopb.met"
#line 275 "chopb.met"
        while ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN(VIRG,",") && (tokenAhead = 0,CommTerm(),1)) { 
#line 275 "chopb.met"
#line 276 "chopb.met"
#line 276 "chopb.met"
            {
#line 276 "chopb.met"
                PPTREE _ptTree0=0;
#line 276 "chopb.met"
                if ( (_ptTree0=NQUICK_CALL(_Tak(assignment_expression)(error_free), 21, chopb))== (PPTREE) -1 ) {
#line 276 "chopb.met"
                    MulFreeTree(4,_ptTree0,_addlist1,expTree,list);
                    PROG_EXIT(expression_exit,"expression")
#line 276 "chopb.met"
                }
#line 276 "chopb.met"
                _addlist1 =AddList(_addlist1 , _ptTree0);
#line 276 "chopb.met"
            }
#line 276 "chopb.met"
#line 276 "chopb.met"
            if (list){
#line 276 "chopb.met"
#line 276 "chopb.met"
                _addlist1 = SonTree (_addlist1 ,2 );
#line 276 "chopb.met"
            } else {
#line 276 "chopb.met"
#line 276 "chopb.met"
                list = _addlist1 ;
#line 276 "chopb.met"
            }
#line 276 "chopb.met"
        } 
#line 276 "chopb.met"
#line 277 "chopb.met"
        {
#line 277 "chopb.met"
            PPTREE _ptTree0=0;
#line 277 "chopb.met"
            {
#line 277 "chopb.met"
                PPTREE _ptRes1=0;
#line 277 "chopb.met"
                _ptRes1= MakeTree(EXP_SEQ, 1);
#line 277 "chopb.met"
                ReplaceTree(_ptRes1, 1, list );
#line 277 "chopb.met"
                _ptTree0=_ptRes1;
#line 277 "chopb.met"
            }
#line 277 "chopb.met"
            _retValue =_ptTree0;
#line 277 "chopb.met"
            goto expression_ret;
#line 277 "chopb.met"
        }
#line 277 "chopb.met"
#line 277 "chopb.met"
#line 277 "chopb.met"
    } else {
#line 277 "chopb.met"
#line 280 "chopb.met"
        {
#line 280 "chopb.met"
            _retValue = expTree ;
#line 280 "chopb.met"
            goto expression_ret;
#line 280 "chopb.met"
            
#line 280 "chopb.met"
        }
#line 280 "chopb.met"
    }
#line 280 "chopb.met"
#line 280 "chopb.met"
#line 280 "chopb.met"

#line 281 "chopb.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 281 "chopb.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 281 "chopb.met"
return((PPTREE) 0);
#line 281 "chopb.met"

#line 281 "chopb.met"
expression_exit :
#line 281 "chopb.met"

#line 281 "chopb.met"
    _Debug = TRACE_RULE("expression",TRACE_EXIT,(PPTREE)0);
#line 281 "chopb.met"
    _funcLevel--;
#line 281 "chopb.met"
    return((PPTREE) -1) ;
#line 281 "chopb.met"

#line 281 "chopb.met"
expression_ret :
#line 281 "chopb.met"
    
#line 281 "chopb.met"
    _Debug = TRACE_RULE("expression",TRACE_RETURN,_retValue);
#line 281 "chopb.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 281 "chopb.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 281 "chopb.met"
    return _retValue ;
#line 281 "chopb.met"
}
#line 281 "chopb.met"

#line 281 "chopb.met"
#line 256 "chopb.met"
PPTREE chopb::main_entry ( int error_free)
#line 256 "chopb.met"
{
#line 256 "chopb.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 256 "chopb.met"
    int _value,_nbPre = 0 ;
#line 256 "chopb.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 256 "chopb.met"
    int _Debug = TRACE_RULE("main_entry",TRACE_ENTER,(PPTREE)0);
#line 256 "chopb.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 256 "chopb.met"
#line 257 "chopb.met"
    {
#line 257 "chopb.met"
        PPTREE _ptTree0=0;
#line 257 "chopb.met"
        if ( (_ptTree0=NQUICK_CALL(_Tak(prog)(error_free), 172, chopb))== (PPTREE) -1 ) {
#line 257 "chopb.met"
            MulFreeTree(1,_ptTree0);
            PROG_EXIT(main_entry_exit,"main_entry")
#line 257 "chopb.met"
        }
#line 257 "chopb.met"
        _retValue =_ptTree0;
#line 257 "chopb.met"
        goto main_entry_ret;
#line 257 "chopb.met"
    }
#line 257 "chopb.met"
#line 257 "chopb.met"
#line 257 "chopb.met"

#line 258 "chopb.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 258 "chopb.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 258 "chopb.met"
return((PPTREE) 0);
#line 258 "chopb.met"

#line 258 "chopb.met"
main_entry_exit :
#line 258 "chopb.met"

#line 258 "chopb.met"
    _Debug = TRACE_RULE("main_entry",TRACE_EXIT,(PPTREE)0);
#line 258 "chopb.met"
    _funcLevel--;
#line 258 "chopb.met"
    return((PPTREE) -1) ;
#line 258 "chopb.met"

#line 258 "chopb.met"
main_entry_ret :
#line 258 "chopb.met"
    
#line 258 "chopb.met"
    _Debug = TRACE_RULE("main_entry",TRACE_RETURN,_retValue);
#line 258 "chopb.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 258 "chopb.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 258 "chopb.met"
    return _retValue ;
#line 258 "chopb.met"
}
#line 258 "chopb.met"

#line 258 "chopb.met"
#line 357 "chopb.met"
PPTREE chopb::multiplicative_expression ( int error_free)
#line 357 "chopb.met"
{
#line 357 "chopb.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 357 "chopb.met"
    int _value,_nbPre = 0 ;
#line 357 "chopb.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 357 "chopb.met"
    int _Debug = TRACE_RULE("multiplicative_expression",TRACE_ENTER,(PPTREE)0);
#line 357 "chopb.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 357 "chopb.met"
#line 357 "chopb.met"
    PPTREE expTree = (PPTREE) 0;
#line 357 "chopb.met"
#line 359 "chopb.met"
    if ( (expTree=NQUICK_CALL(_Tak(pm_expression)(error_free), 114, chopb))== (PPTREE) -1 ) {
#line 359 "chopb.met"
        MulFreeTree(1,expTree);
        PROG_EXIT(multiplicative_expression_exit,"multiplicative_expression")
#line 359 "chopb.met"
    }
#line 359 "chopb.met"
#line 360 "chopb.met"
    while (((((tokenAhead == 15|| (LexEtoiEtoi(),TRACE_LEX(1)))&&SEE_TOKEN( SIMP_ETOI,"SIMP_ETOI")) || 
#line 360 "chopb.met"
            ((tokenAhead == 15|| (LexEtoiEtoi(),TRACE_LEX(1)))&&SEE_TOKEN( ETOI_ETOI,"ETOI_ETOI"))) || 
#line 360 "chopb.met"
           ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN( SLAS,"SLAS"))) || 
#line 360 "chopb.met"
          ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN( POURC,"%"))) { 
#line 360 "chopb.met"
#line 361 "chopb.met"
#line 362 "chopb.met"
        if(((tokenAhead == 15|| (LexEtoiEtoi(),TRACE_LEX(1)))&&TERM_OR_META(ETOI_ETOI,"ETOI_ETOI") && (tokenAhead = 0,CommTerm(),1))){
#line 362 "chopb.met"
#line 362 "chopb.met"
            {
#line 362 "chopb.met"
                PPTREE _ptTree0=0,_ptRes0=0;
#line 362 "chopb.met"
                _ptRes0= MakeTree(EXPO, 2);
#line 362 "chopb.met"
                ReplaceTree(_ptRes0, 1, expTree );
#line 362 "chopb.met"
                if ( (_ptTree0=NQUICK_CALL(_Tak(pm_expression)(error_free), 114, chopb))== (PPTREE) -1 ) {
#line 362 "chopb.met"
                    MulFreeTree(3,_ptRes0,_ptTree0,expTree);
                    PROG_EXIT(multiplicative_expression_exit,"multiplicative_expression")
#line 362 "chopb.met"
                }
#line 362 "chopb.met"
                ReplaceTree(_ptRes0, 2, _ptTree0);
#line 362 "chopb.met"
                expTree=_ptRes0;
#line 362 "chopb.met"
            }
#line 362 "chopb.met"
        } else 
#line 362 "chopb.met"
#line 363 "chopb.met"
        if(((tokenAhead == 15|| (LexEtoiEtoi(),TRACE_LEX(1)))&&TERM_OR_META(SIMP_ETOI,"SIMP_ETOI") && (tokenAhead = 0,CommTerm(),1))){
#line 363 "chopb.met"
#line 363 "chopb.met"
            {
#line 363 "chopb.met"
                PPTREE _ptTree0=0,_ptRes0=0;
#line 363 "chopb.met"
                _ptRes0= MakeTree(MUL, 2);
#line 363 "chopb.met"
                ReplaceTree(_ptRes0, 1, expTree );
#line 363 "chopb.met"
                if ( (_ptTree0=NQUICK_CALL(_Tak(pm_expression)(error_free), 114, chopb))== (PPTREE) -1 ) {
#line 363 "chopb.met"
                    MulFreeTree(3,_ptRes0,_ptTree0,expTree);
                    PROG_EXIT(multiplicative_expression_exit,"multiplicative_expression")
#line 363 "chopb.met"
                }
#line 363 "chopb.met"
                ReplaceTree(_ptRes0, 2, _ptTree0);
#line 363 "chopb.met"
                expTree=_ptRes0;
#line 363 "chopb.met"
            }
#line 363 "chopb.met"
        } else 
#line 363 "chopb.met"
#line 364 "chopb.met"
        if(((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&TERM_OR_META(SLAS,"SLAS") && (tokenAhead = 0,CommTerm(),1))){
#line 364 "chopb.met"
#line 364 "chopb.met"
            {
#line 364 "chopb.met"
                PPTREE _ptTree0=0,_ptRes0=0;
#line 364 "chopb.met"
                _ptRes0= MakeTree(DIV, 2);
#line 364 "chopb.met"
                ReplaceTree(_ptRes0, 1, expTree );
#line 364 "chopb.met"
                if ( (_ptTree0=NQUICK_CALL(_Tak(pm_expression)(error_free), 114, chopb))== (PPTREE) -1 ) {
#line 364 "chopb.met"
                    MulFreeTree(3,_ptRes0,_ptTree0,expTree);
                    PROG_EXIT(multiplicative_expression_exit,"multiplicative_expression")
#line 364 "chopb.met"
                }
#line 364 "chopb.met"
                ReplaceTree(_ptRes0, 2, _ptTree0);
#line 364 "chopb.met"
                expTree=_ptRes0;
#line 364 "chopb.met"
            }
#line 364 "chopb.met"
        } else 
#line 364 "chopb.met"
#line 365 "chopb.met"
        if(((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN(POURC,"%") && (tokenAhead = 0,CommTerm(),1))){
#line 365 "chopb.met"
#line 365 "chopb.met"
            {
#line 365 "chopb.met"
                PPTREE _ptTree0=0,_ptRes0=0;
#line 365 "chopb.met"
                _ptRes0= MakeTree(REM, 2);
#line 365 "chopb.met"
                ReplaceTree(_ptRes0, 1, expTree );
#line 365 "chopb.met"
                if ( (_ptTree0=NQUICK_CALL(_Tak(pm_expression)(error_free), 114, chopb))== (PPTREE) -1 ) {
#line 365 "chopb.met"
                    MulFreeTree(3,_ptRes0,_ptTree0,expTree);
                    PROG_EXIT(multiplicative_expression_exit,"multiplicative_expression")
#line 365 "chopb.met"
                }
#line 365 "chopb.met"
                ReplaceTree(_ptRes0, 2, _ptTree0);
#line 365 "chopb.met"
                expTree=_ptRes0;
#line 365 "chopb.met"
            }
#line 365 "chopb.met"
        } else 
#line 365 "chopb.met"
         ;
#line 365 "chopb.met"
    } 
#line 365 "chopb.met"
#line 367 "chopb.met"
    {
#line 367 "chopb.met"
        _retValue = expTree ;
#line 367 "chopb.met"
        goto multiplicative_expression_ret;
#line 367 "chopb.met"
        
#line 367 "chopb.met"
    }
#line 367 "chopb.met"
#line 367 "chopb.met"
#line 367 "chopb.met"

#line 368 "chopb.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 368 "chopb.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 368 "chopb.met"
return((PPTREE) 0);
#line 368 "chopb.met"

#line 368 "chopb.met"
multiplicative_expression_exit :
#line 368 "chopb.met"

#line 368 "chopb.met"
    _Debug = TRACE_RULE("multiplicative_expression",TRACE_EXIT,(PPTREE)0);
#line 368 "chopb.met"
    _funcLevel--;
#line 368 "chopb.met"
    return((PPTREE) -1) ;
#line 368 "chopb.met"

#line 368 "chopb.met"
multiplicative_expression_ret :
#line 368 "chopb.met"
    
#line 368 "chopb.met"
    _Debug = TRACE_RULE("multiplicative_expression",TRACE_RETURN,_retValue);
#line 368 "chopb.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 368 "chopb.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 368 "chopb.met"
    return _retValue ;
#line 368 "chopb.met"
}
#line 368 "chopb.met"

#line 368 "chopb.met"
#line 644 "chopb.met"
PPTREE chopb::old ( int error_free)
#line 644 "chopb.met"
{
#line 644 "chopb.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 644 "chopb.met"
    int _value,_nbPre = 0 ;
#line 644 "chopb.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 644 "chopb.met"
    int _Debug = TRACE_RULE("old",TRACE_ENTER,(PPTREE)0);
#line 644 "chopb.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 644 "chopb.met"
#line 645 "chopb.met"
    {
#line 645 "chopb.met"
        PPTREE _ptTree0=0;
#line 645 "chopb.met"
        {
#line 645 "chopb.met"
            PPTREE _ptRes1=0;
#line 645 "chopb.met"
            _ptRes1= MakeTree(BOX, 1);
#line 645 "chopb.met"
            _ptTree0=_ptRes1;
#line 645 "chopb.met"
        }
#line 645 "chopb.met"
        _retValue =_ptTree0;
#line 645 "chopb.met"
        goto old_ret;
#line 645 "chopb.met"
    }
#line 645 "chopb.met"
#line 645 "chopb.met"
#line 645 "chopb.met"

#line 646 "chopb.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 646 "chopb.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 646 "chopb.met"
return((PPTREE) 0);
#line 646 "chopb.met"

#line 646 "chopb.met"
old_exit :
#line 646 "chopb.met"

#line 646 "chopb.met"
    _Debug = TRACE_RULE("old",TRACE_EXIT,(PPTREE)0);
#line 646 "chopb.met"
    _funcLevel--;
#line 646 "chopb.met"
    return((PPTREE) -1) ;
#line 646 "chopb.met"

#line 646 "chopb.met"
old_ret :
#line 646 "chopb.met"
    
#line 646 "chopb.met"
    _Debug = TRACE_RULE("old",TRACE_RETURN,_retValue);
#line 646 "chopb.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 646 "chopb.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 646 "chopb.met"
    return _retValue ;
#line 646 "chopb.met"
}
#line 646 "chopb.met"

#line 646 "chopb.met"
#line 322 "chopb.met"
PPTREE chopb::postfix_expression ( int error_free)
#line 322 "chopb.met"
{
#line 322 "chopb.met"
    int  _oldinMakeTree = inMakeTree;
#line 322 "chopb.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 322 "chopb.met"
    int _value,_nbPre = 0 ;
#line 322 "chopb.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 322 "chopb.met"
    int _Debug = TRACE_RULE("postfix_expression",TRACE_ENTER,(PPTREE)0);
#line 322 "chopb.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 322 "chopb.met"
#line 322 "chopb.met"
    PPTREE expTree = (PPTREE) 0,expList = (PPTREE) 0;
#line 322 "chopb.met"
#line 324 "chopb.met"
    if (! (NPUSH_CALL_AFF_VERIF(expTree = ,_Tak(primary_expression), 118, chopb))){
#line 324 "chopb.met"
#line 325 "chopb.met"
#line 326 "chopb.met"
        if ( (expTree=NQUICK_CALL(_Tak(simple_type_name)(error_free), 139, chopb))== (PPTREE) -1 ) {
#line 326 "chopb.met"
            MulFreeTree(2,expList,expTree);
            PROG_EXIT(postfix_expression_exit,"postfix_expression")
#line 326 "chopb.met"
        }
#line 326 "chopb.met"
#line 327 "chopb.met"
        if (! ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN( POUV,"("))){
#line 327 "chopb.met"
#line 328 "chopb.met"
            
#line 328 "chopb.met"
            MulFreeTree(2,expList,expTree);
            LEX_EXIT ("",0);
#line 328 "chopb.met"
            goto postfix_expression_exit;
#line 328 "chopb.met"
#line 328 "chopb.met"
        }
#line 328 "chopb.met"
#line 328 "chopb.met"
#line 328 "chopb.met"
    }
#line 328 "chopb.met"
#line 330 "chopb.met"
    while ((((((((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN( POUV,"(")) || 
#line 330 "chopb.met"
               ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN( COUV,"["))) || 
#line 330 "chopb.met"
              ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN( POINT,"POINT"))) || 
#line 330 "chopb.met"
             ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN( TIRESUPE,"->"))) || 
#line 330 "chopb.met"
            ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN( PLUSPLUS,"++"))) || 
#line 330 "chopb.met"
           ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN( TIRETIRE,"--"))) || 
#line 330 "chopb.met"
          ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN( POINPOINPOIN,"..."))) { 
#line 330 "chopb.met"
#line 331 "chopb.met"
        (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 331 "chopb.met"
        switch( lexEl.Value) {
#line 331 "chopb.met"
#line 334 "chopb.met"
            case POUV : 
#line 334 "chopb.met"
                tokenAhead = 0 ;
#line 334 "chopb.met"
                CommTerm();
#line 334 "chopb.met"
#line 332 "chopb.met"
                {
#line 332 "chopb.met"
                    inMakeTree = 0 ;
#line 332 "chopb.met"
#line 333 "chopb.met"
#line 334 "chopb.met"
                    if (NPUSH_CALL_AFF_VERIF(expList = ,_Tak(expression), 67, chopb)){
#line 334 "chopb.met"
#line 335 "chopb.met"
                        {
#line 335 "chopb.met"
                            PPTREE _ptRes0=0;
#line 335 "chopb.met"
                            _ptRes0= MakeTree(EXP_LIST, 2);
#line 335 "chopb.met"
                            ReplaceTree(_ptRes0, 1, expTree );
#line 335 "chopb.met"
                            ReplaceTree(_ptRes0, 2, expList );
#line 335 "chopb.met"
                            expTree=_ptRes0;
#line 335 "chopb.met"
                        }
#line 335 "chopb.met"
                    } else {
#line 335 "chopb.met"
#line 337 "chopb.met"
                        {
#line 337 "chopb.met"
                            PPTREE _ptRes0=0;
#line 337 "chopb.met"
                            _ptRes0= MakeTree(EXP_LIST, 2);
#line 337 "chopb.met"
                            ReplaceTree(_ptRes0, 1, expTree );
#line 337 "chopb.met"
                            expTree=_ptRes0;
#line 337 "chopb.met"
                        }
#line 337 "chopb.met"
                    }
#line 337 "chopb.met"
#line 338 "chopb.met"
                    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 338 "chopb.met"
                    if (  !SEE_TOKEN( PFER,")") || !(CommTerm(),1)) {
#line 338 "chopb.met"
                        MulFreeTree(2,expList,expTree);
                        TOKEN_EXIT(postfix_expression_exit,")")
#line 338 "chopb.met"
                    } else {
#line 338 "chopb.met"
                        tokenAhead = 0 ;
#line 338 "chopb.met"
                    }
#line 338 "chopb.met"
#line 338 "chopb.met"
                    inMakeTree =  _oldinMakeTree;
#line 338 "chopb.met"
                }
#line 338 "chopb.met"
                break;
#line 338 "chopb.met"
#line 342 "chopb.met"
            case COUV : 
#line 342 "chopb.met"
                tokenAhead = 0 ;
#line 342 "chopb.met"
                CommTerm();
#line 342 "chopb.met"
#line 340 "chopb.met"
                {
#line 340 "chopb.met"
                    inMakeTree = 0 ;
#line 340 "chopb.met"
#line 341 "chopb.met"
#line 342 "chopb.met"
                    if (NPUSH_CALL_AFF_VERIF(expList = ,_Tak(expression), 67, chopb)){
#line 342 "chopb.met"
#line 343 "chopb.met"
                        {
#line 343 "chopb.met"
                            PPTREE _ptRes0=0;
#line 343 "chopb.met"
                            _ptRes0= MakeTree(EXP_ARRAY, 2);
#line 343 "chopb.met"
                            ReplaceTree(_ptRes0, 1, expTree );
#line 343 "chopb.met"
                            ReplaceTree(_ptRes0, 2, expList );
#line 343 "chopb.met"
                            expTree=_ptRes0;
#line 343 "chopb.met"
                        }
#line 343 "chopb.met"
                    } else {
#line 343 "chopb.met"
#line 345 "chopb.met"
                        {
#line 345 "chopb.met"
                            PPTREE _ptRes0=0;
#line 345 "chopb.met"
                            _ptRes0= MakeTree(EXP_ARRAY, 2);
#line 345 "chopb.met"
                            ReplaceTree(_ptRes0, 1, expTree );
#line 345 "chopb.met"
                            expTree=_ptRes0;
#line 345 "chopb.met"
                        }
#line 345 "chopb.met"
                    }
#line 345 "chopb.met"
#line 346 "chopb.met"
                    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 346 "chopb.met"
                    if (  !SEE_TOKEN( CFER,"]") || !(CommTerm(),1)) {
#line 346 "chopb.met"
                        MulFreeTree(2,expList,expTree);
                        TOKEN_EXIT(postfix_expression_exit,"]")
#line 346 "chopb.met"
                    } else {
#line 346 "chopb.met"
                        tokenAhead = 0 ;
#line 346 "chopb.met"
                    }
#line 346 "chopb.met"
#line 346 "chopb.met"
                    inMakeTree =  _oldinMakeTree;
#line 346 "chopb.met"
                }
#line 346 "chopb.met"
                break;
#line 346 "chopb.met"
#line 348 "chopb.met"
            case META : 
#line 348 "chopb.met"
            case POINT : 
#line 348 "chopb.met"
                tokenAhead = 0 ;
#line 348 "chopb.met"
                CommTerm();
#line 348 "chopb.met"
#line 348 "chopb.met"
                {
#line 348 "chopb.met"
                    PPTREE _ptTree0=0,_ptRes0=0;
#line 348 "chopb.met"
                    _ptRes0= MakeTree(REF, 2);
#line 348 "chopb.met"
                    ReplaceTree(_ptRes0, 1, expTree );
#line 348 "chopb.met"
                    if ( (_ptTree0=NQUICK_CALL(_Tak(primary_expression)(error_free), 118, chopb))== (PPTREE) -1 ) {
#line 348 "chopb.met"
                        MulFreeTree(4,_ptRes0,_ptTree0,expList,expTree);
                        PROG_EXIT(postfix_expression_exit,"postfix_expression")
#line 348 "chopb.met"
                    }
#line 348 "chopb.met"
                    ReplaceTree(_ptRes0, 2, _ptTree0);
#line 348 "chopb.met"
                    expTree=_ptRes0;
#line 348 "chopb.met"
                }
#line 348 "chopb.met"
                break;
#line 348 "chopb.met"
#line 349 "chopb.met"
            case TIRESUPE : 
#line 349 "chopb.met"
                tokenAhead = 0 ;
#line 349 "chopb.met"
                CommTerm();
#line 349 "chopb.met"
#line 349 "chopb.met"
                {
#line 349 "chopb.met"
                    PPTREE _ptTree0=0,_ptRes0=0;
#line 349 "chopb.met"
                    _ptRes0= MakeTree(ARROW, 2);
#line 349 "chopb.met"
                    ReplaceTree(_ptRes0, 1, expTree );
#line 349 "chopb.met"
                    if ( (_ptTree0=NQUICK_CALL(_Tak(primary_expression)(error_free), 118, chopb))== (PPTREE) -1 ) {
#line 349 "chopb.met"
                        MulFreeTree(4,_ptRes0,_ptTree0,expList,expTree);
                        PROG_EXIT(postfix_expression_exit,"postfix_expression")
#line 349 "chopb.met"
                    }
#line 349 "chopb.met"
                    ReplaceTree(_ptRes0, 2, _ptTree0);
#line 349 "chopb.met"
                    expTree=_ptRes0;
#line 349 "chopb.met"
                }
#line 349 "chopb.met"
                break;
#line 349 "chopb.met"
#line 350 "chopb.met"
            case PLUSPLUS : 
#line 350 "chopb.met"
                tokenAhead = 0 ;
#line 350 "chopb.met"
                CommTerm();
#line 350 "chopb.met"
#line 350 "chopb.met"
                {
#line 350 "chopb.met"
                    PPTREE _ptRes0=0;
#line 350 "chopb.met"
                    _ptRes0= MakeTree(AINCR, 1);
#line 350 "chopb.met"
                    ReplaceTree(_ptRes0, 1, expTree );
#line 350 "chopb.met"
                    expTree=_ptRes0;
#line 350 "chopb.met"
                }
#line 350 "chopb.met"
                break;
#line 350 "chopb.met"
#line 351 "chopb.met"
            case TIRETIRE : 
#line 351 "chopb.met"
                tokenAhead = 0 ;
#line 351 "chopb.met"
                CommTerm();
#line 351 "chopb.met"
#line 351 "chopb.met"
                {
#line 351 "chopb.met"
                    PPTREE _ptRes0=0;
#line 351 "chopb.met"
                    _ptRes0= MakeTree(ADECR, 1);
#line 351 "chopb.met"
                    ReplaceTree(_ptRes0, 1, expTree );
#line 351 "chopb.met"
                    expTree=_ptRes0;
#line 351 "chopb.met"
                }
#line 351 "chopb.met"
                break;
#line 351 "chopb.met"
#line 352 "chopb.met"
            case POINPOINPOIN : 
#line 352 "chopb.met"
                tokenAhead = 0 ;
#line 352 "chopb.met"
                CommTerm();
#line 352 "chopb.met"
#line 352 "chopb.met"
                {
#line 352 "chopb.met"
                    PPTREE _ptRes0=0;
#line 352 "chopb.met"
                    _ptRes0= MakeTree(VARIADIC_EXPRESSION, 1);
#line 352 "chopb.met"
                    ReplaceTree(_ptRes0, 1, expTree );
#line 352 "chopb.met"
                    expTree=_ptRes0;
#line 352 "chopb.met"
                }
#line 352 "chopb.met"
                break;
#line 352 "chopb.met"
            default :
#line 352 "chopb.met"
                MulFreeTree(2,expList,expTree);
                CASE_EXIT(postfix_expression_exit,"either ( or [ or POINT or -> or ++ or -- or ...")
#line 352 "chopb.met"
                break;
#line 352 "chopb.met"
        }
#line 352 "chopb.met"
    } 
#line 352 "chopb.met"
#line 354 "chopb.met"
    {
#line 354 "chopb.met"
        _retValue = expTree ;
#line 354 "chopb.met"
        goto postfix_expression_ret;
#line 354 "chopb.met"
        
#line 354 "chopb.met"
    }
#line 354 "chopb.met"
#line 354 "chopb.met"
#line 354 "chopb.met"

#line 355 "chopb.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 355 "chopb.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 355 "chopb.met"
inMakeTree =  _oldinMakeTree;
#line 355 "chopb.met"
return((PPTREE) 0);
#line 355 "chopb.met"

#line 355 "chopb.met"
postfix_expression_exit :
#line 355 "chopb.met"

#line 355 "chopb.met"
    _Debug = TRACE_RULE("postfix_expression",TRACE_EXIT,(PPTREE)0);
#line 355 "chopb.met"
    _funcLevel--;
#line 355 "chopb.met"
    inMakeTree =  _oldinMakeTree;
#line 355 "chopb.met"
    return((PPTREE) -1) ;
#line 355 "chopb.met"

#line 355 "chopb.met"
postfix_expression_ret :
#line 355 "chopb.met"
    
#line 355 "chopb.met"
    _Debug = TRACE_RULE("postfix_expression",TRACE_RETURN,_retValue);
#line 355 "chopb.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 355 "chopb.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 355 "chopb.met"
    inMakeTree =  _oldinMakeTree;
#line 355 "chopb.met"
    return _retValue ;
#line 355 "chopb.met"
}
#line 355 "chopb.met"

#line 355 "chopb.met"
#line 390 "chopb.met"
PPTREE chopb::primary_expression ( int error_free)
#line 390 "chopb.met"
{
#line 390 "chopb.met"
    int  _oldparse = parse;
#line 390 "chopb.met"
    int  _oldinMakeTree = inMakeTree;
#line 390 "chopb.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 390 "chopb.met"
    int _value,_nbPre = 0 ;
#line 390 "chopb.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 390 "chopb.met"
    int _Debug = TRACE_RULE("primary_expression",TRACE_ENTER,(PPTREE)0);
#line 390 "chopb.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 390 "chopb.met"
#line 390 "chopb.met"
    PPTREE _addlist1 = (PPTREE) 0;
#line 390 "chopb.met"
#line 390 "chopb.met"
    PPTREE result = (PPTREE) 0,expTree = (PPTREE) 0,list = (PPTREE) 0,statTree = (PPTREE) 0;
#line 390 "chopb.met"
#line 392 "chopb.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 392 "chopb.met"
    switch( lexEl.Value) {
#line 392 "chopb.met"
#line 393 "chopb.met"
        case INFESUPE : 
#line 393 "chopb.met"
            tokenAhead = 0 ;
#line 393 "chopb.met"
            CommTerm();
#line 393 "chopb.met"
#line 393 "chopb.met"
            {
#line 393 "chopb.met"
                PPTREE _ptTree0=0;
#line 393 "chopb.met"
                {
#line 393 "chopb.met"
                    PPTREE _ptRes1=0;
#line 393 "chopb.met"
                    _ptRes1= MakeTree(DEF_IDENT, 0);
#line 393 "chopb.met"
                    _ptTree0=_ptRes1;
#line 393 "chopb.met"
                }
#line 393 "chopb.met"
                _retValue =_ptTree0;
#line 393 "chopb.met"
                goto primary_expression_ret;
#line 393 "chopb.met"
            }
#line 393 "chopb.met"
            break;
#line 393 "chopb.met"
#line 394 "chopb.met"
        case INFE : 
#line 394 "chopb.met"
#line 394 "chopb.met"
            {
#line 394 "chopb.met"
                PPTREE _ptTree0=0;
#line 394 "chopb.met"
                if ( (_ptTree0=NQUICK_CALL(_Tak(take_follow)(error_free), 173, chopb))== (PPTREE) -1 ) {
#line 394 "chopb.met"
                    MulFreeTree(6,_ptTree0,_addlist1,expTree,list,result,statTree);
                    PROG_EXIT(primary_expression_exit,"primary_expression")
#line 394 "chopb.met"
                }
#line 394 "chopb.met"
                _retValue =_ptTree0;
#line 394 "chopb.met"
                goto primary_expression_ret;
#line 394 "chopb.met"
            }
#line 394 "chopb.met"
            break;
#line 394 "chopb.met"
#line 395 "chopb.met"
        case POINPOINPOIN : 
#line 395 "chopb.met"
            tokenAhead = 0 ;
#line 395 "chopb.met"
            CommTerm();
#line 395 "chopb.met"
#line 395 "chopb.met"
            {
#line 395 "chopb.met"
                PPTREE _ptTree0=0;
#line 395 "chopb.met"
                if ( (_ptTree0=NQUICK_CALL(_Tak(take_follow_list)(error_free), 174, chopb))== (PPTREE) -1 ) {
#line 395 "chopb.met"
                    MulFreeTree(6,_ptTree0,_addlist1,expTree,list,result,statTree);
                    PROG_EXIT(primary_expression_exit,"primary_expression")
#line 395 "chopb.met"
                }
#line 395 "chopb.met"
                _retValue =_ptTree0;
#line 395 "chopb.met"
                goto primary_expression_ret;
#line 395 "chopb.met"
            }
#line 395 "chopb.met"
            break;
#line 395 "chopb.met"
#line 396 "chopb.met"
        case VALUE : 
#line 396 "chopb.met"
            tokenAhead = 0 ;
#line 396 "chopb.met"
            CommTerm();
#line 396 "chopb.met"
#line 397 "chopb.met"
#line 398 "chopb.met"
            (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 398 "chopb.met"
            if (  !SEE_TOKEN( POUV,"(") || !(CommTerm(),1)) {
#line 398 "chopb.met"
                MulFreeTree(5,_addlist1,expTree,list,result,statTree);
                TOKEN_EXIT(primary_expression_exit,"(")
#line 398 "chopb.met"
            } else {
#line 398 "chopb.met"
                tokenAhead = 0 ;
#line 398 "chopb.met"
            }
#line 398 "chopb.met"
#line 399 "chopb.met"
            (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 399 "chopb.met"
            switch( lexEl.Value) {
#line 399 "chopb.met"
#line 400 "chopb.met"
                case META : 
#line 400 "chopb.met"
                case IDENT : 
#line 400 "chopb.met"
#line 400 "chopb.met"
                    {
#line 400 "chopb.met"
                        PPTREE _ptTree0=0,_ptRes0=0;
#line 400 "chopb.met"
                        _ptRes0= MakeTree(VALUE, 1);
#line 400 "chopb.met"
                        {
#line 400 "chopb.met"
                            PPTREE _ptTree1=0,_ptRes1=0;
#line 400 "chopb.met"
                            _ptRes1= MakeTree(IDENT, 1);
#line 400 "chopb.met"
                            (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 400 "chopb.met"
                            if ( ! TERM_OR_META(IDENT,"IDENT") || !(BUILD_TERM_META(_ptTree1))) {
#line 400 "chopb.met"
                                MulFreeTree(9,_ptRes1,_ptTree1,_ptRes0,_ptTree0,_addlist1,expTree,list,result,statTree);
                                TOKEN_EXIT(primary_expression_exit,"IDENT")
#line 400 "chopb.met"
                            } else {
#line 400 "chopb.met"
                                tokenAhead = 0 ;
#line 400 "chopb.met"
                            }
#line 400 "chopb.met"
                            ReplaceTree(_ptRes1, 1, _ptTree1);
#line 400 "chopb.met"
                            _ptTree0=_ptRes1;
#line 400 "chopb.met"
                        }
#line 400 "chopb.met"
                        ReplaceTree(_ptRes0, 1, _ptTree0);
#line 400 "chopb.met"
                        statTree=_ptRes0;
#line 400 "chopb.met"
                    }
#line 400 "chopb.met"
                    break;
#line 400 "chopb.met"
#line 401 "chopb.met"
                case INFESUPE : 
#line 401 "chopb.met"
                    tokenAhead = 0 ;
#line 401 "chopb.met"
                    CommTerm();
#line 401 "chopb.met"
#line 401 "chopb.met"
                    {
#line 401 "chopb.met"
                        PPTREE _ptTree0=0,_ptRes0=0;
#line 401 "chopb.met"
                        _ptRes0= MakeTree(VALUE, 1);
#line 401 "chopb.met"
                        {
#line 401 "chopb.met"
                            PPTREE _ptRes1=0;
#line 401 "chopb.met"
                            _ptRes1= MakeTree(DEF_IDENT, 0);
#line 401 "chopb.met"
                            _ptTree0=_ptRes1;
#line 401 "chopb.met"
                        }
#line 401 "chopb.met"
                        ReplaceTree(_ptRes0, 1, _ptTree0);
#line 401 "chopb.met"
                        statTree=_ptRes0;
#line 401 "chopb.met"
                    }
#line 401 "chopb.met"
                    break;
#line 401 "chopb.met"
                default :
#line 401 "chopb.met"
                    MulFreeTree(5,_addlist1,expTree,list,result,statTree);
                    CASE_EXIT(primary_expression_exit,"either IDENT or <>")
#line 401 "chopb.met"
                    break;
#line 401 "chopb.met"
            }
#line 401 "chopb.met"
#line 403 "chopb.met"
            (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 403 "chopb.met"
            if (  !SEE_TOKEN( PFER,")") || !(CommTerm(),1)) {
#line 403 "chopb.met"
                MulFreeTree(5,_addlist1,expTree,list,result,statTree);
                TOKEN_EXIT(primary_expression_exit,")")
#line 403 "chopb.met"
            } else {
#line 403 "chopb.met"
                tokenAhead = 0 ;
#line 403 "chopb.met"
            }
#line 403 "chopb.met"
#line 404 "chopb.met"
            {
#line 404 "chopb.met"
                _retValue = statTree ;
#line 404 "chopb.met"
                goto primary_expression_ret;
#line 404 "chopb.met"
                
#line 404 "chopb.met"
            }
#line 404 "chopb.met"
#line 404 "chopb.met"
            break;
#line 404 "chopb.met"
#line 406 "chopb.met"
        case NEXTL : 
#line 406 "chopb.met"
            tokenAhead = 0 ;
#line 406 "chopb.met"
            CommTerm();
#line 406 "chopb.met"
#line 407 "chopb.met"
#line 408 "chopb.met"
            (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 408 "chopb.met"
            if (  !SEE_TOKEN( POUV,"(") || !(CommTerm(),1)) {
#line 408 "chopb.met"
                MulFreeTree(5,_addlist1,expTree,list,result,statTree);
                TOKEN_EXIT(primary_expression_exit,"(")
#line 408 "chopb.met"
            } else {
#line 408 "chopb.met"
                tokenAhead = 0 ;
#line 408 "chopb.met"
            }
#line 408 "chopb.met"
#line 409 "chopb.met"
            if ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN( IDENT,"IDENT")){
#line 409 "chopb.met"
#line 410 "chopb.met"
                {
#line 410 "chopb.met"
                    PPTREE _ptTree0=0,_ptRes0=0;
#line 410 "chopb.met"
                    _ptRes0= MakeTree(NEXT, 1);
#line 410 "chopb.met"
                    {
#line 410 "chopb.met"
                        PPTREE _ptTree1=0,_ptRes1=0;
#line 410 "chopb.met"
                        _ptRes1= MakeTree(IDENT, 1);
#line 410 "chopb.met"
                        (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 410 "chopb.met"
                        if ( ! TERM_OR_META(IDENT,"IDENT") || !(BUILD_TERM_META(_ptTree1))) {
#line 410 "chopb.met"
                            MulFreeTree(9,_ptRes1,_ptTree1,_ptRes0,_ptTree0,_addlist1,expTree,list,result,statTree);
                            TOKEN_EXIT(primary_expression_exit,"IDENT")
#line 410 "chopb.met"
                        } else {
#line 410 "chopb.met"
                            tokenAhead = 0 ;
#line 410 "chopb.met"
                        }
#line 410 "chopb.met"
                        ReplaceTree(_ptRes1, 1, _ptTree1);
#line 410 "chopb.met"
                        _ptTree0=_ptRes1;
#line 410 "chopb.met"
                    }
#line 410 "chopb.met"
                    ReplaceTree(_ptRes0, 1, _ptTree0);
#line 410 "chopb.met"
                    statTree=_ptRes0;
#line 410 "chopb.met"
                }
#line 410 "chopb.met"
            } else {
#line 410 "chopb.met"
#line 412 "chopb.met"
#line 413 "chopb.met"
                (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 413 "chopb.met"
                if (  !SEE_TOKEN( INFESUPE,"<>") || !(CommTerm(),1)) {
#line 413 "chopb.met"
                    MulFreeTree(5,_addlist1,expTree,list,result,statTree);
                    TOKEN_EXIT(primary_expression_exit,"<>")
#line 413 "chopb.met"
                } else {
#line 413 "chopb.met"
                    tokenAhead = 0 ;
#line 413 "chopb.met"
                }
#line 413 "chopb.met"
#line 414 "chopb.met"
                {
#line 414 "chopb.met"
                    PPTREE _ptTree0=0,_ptRes0=0;
#line 414 "chopb.met"
                    _ptRes0= MakeTree(NEXT, 1);
#line 414 "chopb.met"
                    {
#line 414 "chopb.met"
                        PPTREE _ptRes1=0;
#line 414 "chopb.met"
                        _ptRes1= MakeTree(DEF_IDENT, 0);
#line 414 "chopb.met"
                        _ptTree0=_ptRes1;
#line 414 "chopb.met"
                    }
#line 414 "chopb.met"
                    ReplaceTree(_ptRes0, 1, _ptTree0);
#line 414 "chopb.met"
                    statTree=_ptRes0;
#line 414 "chopb.met"
                }
#line 414 "chopb.met"
#line 414 "chopb.met"
            }
#line 414 "chopb.met"
#line 416 "chopb.met"
            (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 416 "chopb.met"
            if (  !SEE_TOKEN( PFER,")") || !(CommTerm(),1)) {
#line 416 "chopb.met"
                MulFreeTree(5,_addlist1,expTree,list,result,statTree);
                TOKEN_EXIT(primary_expression_exit,")")
#line 416 "chopb.met"
            } else {
#line 416 "chopb.met"
                tokenAhead = 0 ;
#line 416 "chopb.met"
            }
#line 416 "chopb.met"
#line 417 "chopb.met"
            {
#line 417 "chopb.met"
                _retValue = statTree ;
#line 417 "chopb.met"
                goto primary_expression_ret;
#line 417 "chopb.met"
                
#line 417 "chopb.met"
            }
#line 417 "chopb.met"
#line 417 "chopb.met"
            break;
#line 417 "chopb.met"
#line 419 "chopb.met"
        case PARSE : 
#line 419 "chopb.met"
            tokenAhead = 0 ;
#line 419 "chopb.met"
            CommTerm();
#line 419 "chopb.met"
#line 420 "chopb.met"
#line 421 "chopb.met"
            (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 421 "chopb.met"
            if (  !SEE_TOKEN( POUV,"(") || !(CommTerm(),1)) {
#line 421 "chopb.met"
                MulFreeTree(5,_addlist1,expTree,list,result,statTree);
                TOKEN_EXIT(primary_expression_exit,"(")
#line 421 "chopb.met"
            } else {
#line 421 "chopb.met"
                tokenAhead = 0 ;
#line 421 "chopb.met"
            }
#line 421 "chopb.met"
#line 422 "chopb.met"
             nb_par_parse = 1 ; 
#line 422 "chopb.met"
#line 423 "chopb.met"
            {
#line 423 "chopb.met"
                parse = 1 ;
#line 423 "chopb.met"
#line 424 "chopb.met"
#line 424 "chopb.met"
                _addlist1 = list ;
#line 424 "chopb.met"
#line 424 "chopb.met"
                while ((tokenAhead == 16|| (LexParse(),TRACE_LEX(1)))&&SEE_TOKEN( PARSE_ELEM,"PARSE_ELEM")) { 
#line 424 "chopb.met"
#line 425 "chopb.met"
#line 425 "chopb.met"
                    {
#line 425 "chopb.met"
                        PPTREE _ptTree0=0;
#line 425 "chopb.met"
                        {
#line 425 "chopb.met"
                            PPTREE _ptTree1=0,_ptRes1=0;
#line 425 "chopb.met"
                            _ptRes1= MakeTree(PARSE_ELEM, 1);
#line 425 "chopb.met"
                            (tokenAhead == 16|| (LexParse(),TRACE_LEX(1)));
#line 425 "chopb.met"
                            if ( ! TERM_OR_META(PARSE_ELEM,"PARSE_ELEM") || !(BUILD_TERM_META(_ptTree1))) {
#line 425 "chopb.met"
                                MulFreeTree(8,_ptRes1,_ptTree1,_ptTree0,_addlist1,expTree,list,result,statTree);
                                TOKEN_EXIT(primary_expression_exit,"PARSE_ELEM")
#line 425 "chopb.met"
                            } else {
#line 425 "chopb.met"
                                tokenAhead = 0 ;
#line 425 "chopb.met"
                            }
#line 425 "chopb.met"
                            ReplaceTree(_ptRes1, 1, _ptTree1);
#line 425 "chopb.met"
                            _ptTree0=_ptRes1;
#line 425 "chopb.met"
                        }
#line 425 "chopb.met"
                        _addlist1 =AddList(_addlist1 , _ptTree0);
#line 425 "chopb.met"
                    }
#line 425 "chopb.met"
#line 425 "chopb.met"
                    if (list){
#line 425 "chopb.met"
#line 425 "chopb.met"
                        _addlist1 = SonTree (_addlist1 ,2 );
#line 425 "chopb.met"
                    } else {
#line 425 "chopb.met"
#line 425 "chopb.met"
                        list = _addlist1 ;
#line 425 "chopb.met"
                    }
#line 425 "chopb.met"
                } 
#line 425 "chopb.met"
                parse =  _oldparse;
#line 425 "chopb.met"
            }
#line 425 "chopb.met"
#line 426 "chopb.met"
            {
#line 426 "chopb.met"
                PPTREE _ptTree0=0;
#line 426 "chopb.met"
                {
#line 426 "chopb.met"
                    PPTREE _ptRes1=0;
#line 426 "chopb.met"
                    _ptRes1= MakeTree(PARSE, 1);
#line 426 "chopb.met"
                    ReplaceTree(_ptRes1, 1, list );
#line 426 "chopb.met"
                    _ptTree0=_ptRes1;
#line 426 "chopb.met"
                }
#line 426 "chopb.met"
                _retValue =_ptTree0;
#line 426 "chopb.met"
                goto primary_expression_ret;
#line 426 "chopb.met"
            }
#line 426 "chopb.met"
#line 426 "chopb.met"
            break;
#line 426 "chopb.met"
#line 428 "chopb.met"
        case IN : 
#line 428 "chopb.met"
            tokenAhead = 0 ;
#line 428 "chopb.met"
            CommTerm();
#line 428 "chopb.met"
#line 429 "chopb.met"
#line 430 "chopb.met"
            {
#line 430 "chopb.met"
                PPTREE _ptTree0=0,_ptRes0=0;
#line 430 "chopb.met"
                _ptRes0= MakeTree(IN_LANG, 2);
#line 430 "chopb.met"
                if ( (_ptTree0=NQUICK_CALL(_Tak(expression)(error_free), 67, chopb))== (PPTREE) -1 ) {
#line 430 "chopb.met"
                    MulFreeTree(7,_ptRes0,_ptTree0,_addlist1,expTree,list,result,statTree);
                    PROG_EXIT(primary_expression_exit,"primary_expression")
#line 430 "chopb.met"
                }
#line 430 "chopb.met"
                ReplaceTree(_ptRes0, 1, _ptTree0);
#line 430 "chopb.met"
                statTree=_ptRes0;
#line 430 "chopb.met"
            }
#line 430 "chopb.met"
#line 431 "chopb.met"
            {
#line 431 "chopb.met"
                PPTREE _ptTree0=0;
#line 431 "chopb.met"
                {
#line 431 "chopb.met"
                    PPTREE _ptTree1=0;
#line 431 "chopb.met"
                    if ( (_ptTree1=NQUICK_CALL(_Tak(statement)(error_free), 146, chopb))== (PPTREE) -1 ) {
#line 431 "chopb.met"
                        MulFreeTree(7,_ptTree1,_ptTree0,_addlist1,expTree,list,result,statTree);
                        PROG_EXIT(primary_expression_exit,"primary_expression")
#line 431 "chopb.met"
                    }
#line 431 "chopb.met"
                    _ptTree0=ReplaceTree(statTree , 2 , _ptTree1);
#line 431 "chopb.met"
                }
#line 431 "chopb.met"
                _retValue =_ptTree0;
#line 431 "chopb.met"
                goto primary_expression_ret;
#line 431 "chopb.met"
            }
#line 431 "chopb.met"
#line 431 "chopb.met"
            break;
#line 431 "chopb.met"
#line 435 "chopb.met"
        case POUV : 
#line 435 "chopb.met"
            tokenAhead = 0 ;
#line 435 "chopb.met"
            CommTerm();
#line 435 "chopb.met"
#line 433 "chopb.met"
            {
#line 433 "chopb.met"
                inMakeTree = 0 ;
#line 433 "chopb.met"
#line 434 "chopb.met"
#line 435 "chopb.met"
                if (NPUSH_CALL_AFF_VERIF(expTree = ,_Tak(expression), 67, chopb)){
#line 435 "chopb.met"
#line 436 "chopb.met"
#line 437 "chopb.met"
                    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 437 "chopb.met"
                    if (  !SEE_TOKEN( PFER,")") || !(CommTerm(),1)) {
#line 437 "chopb.met"
                        MulFreeTree(5,_addlist1,expTree,list,result,statTree);
                        TOKEN_EXIT(primary_expression_exit,")")
#line 437 "chopb.met"
                    } else {
#line 437 "chopb.met"
                        tokenAhead = 0 ;
#line 437 "chopb.met"
                    }
#line 437 "chopb.met"
#line 438 "chopb.met"
                    {
#line 438 "chopb.met"
                        PPTREE _ptRes0=0;
#line 438 "chopb.met"
                        _ptRes0= MakeTree(EXP, 1);
#line 438 "chopb.met"
                        ReplaceTree(_ptRes0, 1, expTree );
#line 438 "chopb.met"
                        expTree=_ptRes0;
#line 438 "chopb.met"
                    }
#line 438 "chopb.met"
#line 438 "chopb.met"
#line 438 "chopb.met"
                } else {
#line 438 "chopb.met"
#line 441 "chopb.met"
#line 442 "chopb.met"
                    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 442 "chopb.met"
                    if (  !SEE_TOKEN( PFER,")") || !(CommTerm(),1)) {
#line 442 "chopb.met"
                        MulFreeTree(5,_addlist1,expTree,list,result,statTree);
                        TOKEN_EXIT(primary_expression_exit,")")
#line 442 "chopb.met"
                    } else {
#line 442 "chopb.met"
                        tokenAhead = 0 ;
#line 442 "chopb.met"
                    }
#line 442 "chopb.met"
#line 443 "chopb.met"
                    {
#line 443 "chopb.met"
                        PPTREE _ptRes0=0;
#line 443 "chopb.met"
                        _ptRes0= MakeTree(NIL, 0);
#line 443 "chopb.met"
                        expTree=_ptRes0;
#line 443 "chopb.met"
                    }
#line 443 "chopb.met"
#line 443 "chopb.met"
                }
#line 443 "chopb.met"
#line 445 "chopb.met"
                {
#line 445 "chopb.met"
                    _retValue = expTree ;
#line 445 "chopb.met"
                    goto primary_expression_ret;
#line 445 "chopb.met"
                    
#line 445 "chopb.met"
                }
#line 445 "chopb.met"
#line 445 "chopb.met"
                inMakeTree =  _oldinMakeTree;
#line 445 "chopb.met"
            }
#line 445 "chopb.met"
            break;
#line 445 "chopb.met"
#line 447 "chopb.met"
        case OPERATOR : 
#line 447 "chopb.met"
#line 447 "chopb.met"
            {
#line 447 "chopb.met"
                PPTREE _ptTree0=0;
#line 447 "chopb.met"
                if ( (_ptTree0=NQUICK_CALL(_Tak(operator_function_name)(error_free), 110, chopb))== (PPTREE) -1 ) {
#line 447 "chopb.met"
                    MulFreeTree(6,_ptTree0,_addlist1,expTree,list,result,statTree);
                    PROG_EXIT(primary_expression_exit,"primary_expression")
#line 447 "chopb.met"
                }
#line 447 "chopb.met"
                _retValue =_ptTree0;
#line 447 "chopb.met"
                goto primary_expression_ret;
#line 447 "chopb.met"
            }
#line 447 "chopb.met"
            break;
#line 447 "chopb.met"
#line 448 "chopb.met"
        case TILD : 
#line 448 "chopb.met"
#line 448 "chopb.met"
            {
#line 448 "chopb.met"
                PPTREE _ptTree0=0;
#line 448 "chopb.met"
                if ( (_ptTree0=NQUICK_CALL(_Tak(qualified_name)(error_free), 123, chopb))== (PPTREE) -1 ) {
#line 448 "chopb.met"
                    MulFreeTree(6,_ptTree0,_addlist1,expTree,list,result,statTree);
                    PROG_EXIT(primary_expression_exit,"primary_expression")
#line 448 "chopb.met"
                }
#line 448 "chopb.met"
                _retValue =_ptTree0;
#line 448 "chopb.met"
                goto primary_expression_ret;
#line 448 "chopb.met"
            }
#line 448 "chopb.met"
            break;
#line 448 "chopb.met"
#line 449 "chopb.met"
        case META : 
#line 449 "chopb.met"
#line 450 "chopb.met"
#line 451 "chopb.met"
            {
#line 451 "chopb.met"
                PPTREE _ptTree0=0;
#line 451 "chopb.met"
                {
#line 451 "chopb.met"
                    PPTREE _ptTree1=0,_ptRes1=0;
#line 451 "chopb.met"
                    _ptRes1= MakeTree(META, 1);
#line 451 "chopb.met"
                    (tokenAhead == 7|| (LexMeta(),TRACE_LEX(1)));
#line 451 "chopb.met"
                    if ( ! TERM_OR_META(META,"META") || !(BUILD_TERM_META(_ptTree1))) {
#line 451 "chopb.met"
                        MulFreeTree(8,_ptRes1,_ptTree1,_ptTree0,_addlist1,expTree,list,result,statTree);
                        TOKEN_EXIT(primary_expression_exit,"META")
#line 451 "chopb.met"
                    } else {
#line 451 "chopb.met"
                        tokenAhead = 0 ;
#line 451 "chopb.met"
                    }
#line 451 "chopb.met"
                    ReplaceTree(_ptRes1, 1, _ptTree1);
#line 451 "chopb.met"
                    _ptTree0=_ptRes1;
#line 451 "chopb.met"
                }
#line 451 "chopb.met"
                _retValue =_ptTree0;
#line 451 "chopb.met"
                goto primary_expression_ret;
#line 451 "chopb.met"
            }
#line 451 "chopb.met"
#line 451 "chopb.met"
            break;
#line 451 "chopb.met"
#line 453 "chopb.met"
        case IDENT : 
#line 453 "chopb.met"
#line 454 "chopb.met"
            if ((tokenAhead == 12|| (PushFunction(),TRACE_LEX(1)))&&TERM_OR_META(PUSH_FUNCTION,"PUSH_FUNCTION") && !(tokenAhead = 0) && ( BUILD_TERM_META(result))) {
#line 454 "chopb.met"
#line 455 "chopb.met"
#line 456 "chopb.met"
                (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 456 "chopb.met"
                if (  !SEE_TOKEN( POUV,"(") || !(CommTerm(),1)) {
#line 456 "chopb.met"
                    MulFreeTree(5,_addlist1,expTree,list,result,statTree);
                    TOKEN_EXIT(primary_expression_exit,"(")
#line 456 "chopb.met"
                } else {
#line 456 "chopb.met"
                    tokenAhead = 0 ;
#line 456 "chopb.met"
                }
#line 456 "chopb.met"
#line 457 "chopb.met"
                {
#line 457 "chopb.met"
                    PPTREE _ptTree0=0;
#line 457 "chopb.met"
                    {
#line 457 "chopb.met"
                        PPTREE _ptTree1=0,_ptRes1=0;
#line 457 "chopb.met"
                        _ptRes1= MakeTree(IDENT, 1);
#line 457 "chopb.met"
                        (tokenAhead == 11|| (PushArgument(),TRACE_LEX(1)));
#line 457 "chopb.met"
                        if ( ! TERM_OR_META(PUSH_ARGUMENT,"PUSH_ARGUMENT") || !(BUILD_TERM_META(_ptTree1))) {
#line 457 "chopb.met"
                            MulFreeTree(8,_ptRes1,_ptTree1,_ptTree0,_addlist1,expTree,list,result,statTree);
                            TOKEN_EXIT(primary_expression_exit,"PUSH_ARGUMENT")
#line 457 "chopb.met"
                        } else {
#line 457 "chopb.met"
                            tokenAhead = 0 ;
#line 457 "chopb.met"
                        }
#line 457 "chopb.met"
                        ReplaceTree(_ptRes1, 1, _ptTree1);
#line 457 "chopb.met"
                        _ptTree0=_ptRes1;
#line 457 "chopb.met"
                    }
#line 457 "chopb.met"
                    list =AddList(list , _ptTree0);
#line 457 "chopb.met"
                }
#line 457 "chopb.met"
#line 458 "chopb.met"
                (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 458 "chopb.met"
                if (  !SEE_TOKEN( VIRG,",") || !(CommTerm(),1)) {
#line 458 "chopb.met"
                    MulFreeTree(5,_addlist1,expTree,list,result,statTree);
                    TOKEN_EXIT(primary_expression_exit,",")
#line 458 "chopb.met"
                } else {
#line 458 "chopb.met"
                    tokenAhead = 0 ;
#line 458 "chopb.met"
                }
#line 458 "chopb.met"
#line 459 "chopb.met"
                {
#line 459 "chopb.met"
                    PPTREE _ptTree0=0;
#line 459 "chopb.met"
                    if ( (_ptTree0=NQUICK_CALL(_Tak(expression)(error_free), 67, chopb))== (PPTREE) -1 ) {
#line 459 "chopb.met"
                        MulFreeTree(6,_ptTree0,_addlist1,expTree,list,result,statTree);
                        PROG_EXIT(primary_expression_exit,"primary_expression")
#line 459 "chopb.met"
                    }
#line 459 "chopb.met"
                    list =AddList(list , _ptTree0);
#line 459 "chopb.met"
                }
#line 459 "chopb.met"
#line 460 "chopb.met"
                {
#line 460 "chopb.met"
                    PPTREE _ptRes0=0;
#line 460 "chopb.met"
                    _ptRes0= MakeTree(EXP_SEQ, 1);
#line 460 "chopb.met"
                    ReplaceTree(_ptRes0, 1, list );
#line 460 "chopb.met"
                    expTree=_ptRes0;
#line 460 "chopb.met"
                }
#line 460 "chopb.met"
#line 461 "chopb.met"
                (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 461 "chopb.met"
                if (  !SEE_TOKEN( PFER,")") || !(CommTerm(),1)) {
#line 461 "chopb.met"
                    MulFreeTree(5,_addlist1,expTree,list,result,statTree);
                    TOKEN_EXIT(primary_expression_exit,")")
#line 461 "chopb.met"
                } else {
#line 461 "chopb.met"
                    tokenAhead = 0 ;
#line 461 "chopb.met"
                }
#line 461 "chopb.met"
#line 462 "chopb.met"
                {
#line 462 "chopb.met"
                    PPTREE _ptTree0=0;
#line 462 "chopb.met"
                    {
#line 462 "chopb.met"
                        PPTREE _ptTree1=0,_ptRes1=0;
#line 462 "chopb.met"
                        _ptRes1= MakeTree(EXP_LIST, 2);
#line 462 "chopb.met"
                        {
#line 462 "chopb.met"
                            PPTREE _ptRes2=0;
#line 462 "chopb.met"
                            _ptRes2= MakeTree(IDENT, 1);
#line 462 "chopb.met"
                            ReplaceTree(_ptRes2, 1, result );
#line 462 "chopb.met"
                            _ptTree1=_ptRes2;
#line 462 "chopb.met"
                        }
#line 462 "chopb.met"
                        ReplaceTree(_ptRes1, 1, _ptTree1);
#line 462 "chopb.met"
                        ReplaceTree(_ptRes1, 2, expTree );
#line 462 "chopb.met"
                        _ptTree0=_ptRes1;
#line 462 "chopb.met"
                    }
#line 462 "chopb.met"
                    _retValue =_ptTree0;
#line 462 "chopb.met"
                    goto primary_expression_ret;
#line 462 "chopb.met"
                }
#line 462 "chopb.met"
#line 462 "chopb.met"
#line 462 "chopb.met"
            } else {
#line 462 "chopb.met"
#line 465 "chopb.met"
                {
#line 465 "chopb.met"
                    PPTREE _ptTree0=0;
#line 465 "chopb.met"
                    if ( (_ptTree0=NQUICK_CALL(_Tak(qualified_name)(error_free), 123, chopb))== (PPTREE) -1 ) {
#line 465 "chopb.met"
                        MulFreeTree(6,_ptTree0,_addlist1,expTree,list,result,statTree);
                        PROG_EXIT(primary_expression_exit,"primary_expression")
#line 465 "chopb.met"
                    }
#line 465 "chopb.met"
                    _retValue =_ptTree0;
#line 465 "chopb.met"
                    goto primary_expression_ret;
#line 465 "chopb.met"
                }
#line 465 "chopb.met"
            }
#line 465 "chopb.met"
            break;
#line 465 "chopb.met"
#line 466 "chopb.met"
        case STRING : 
#line 466 "chopb.met"
#line 466 "chopb.met"
            {
#line 466 "chopb.met"
                PPTREE _ptTree0=0;
#line 466 "chopb.met"
                if ( (_ptTree0=NQUICK_CALL(_Tak(string_list)(error_free), 148, chopb))== (PPTREE) -1 ) {
#line 466 "chopb.met"
                    MulFreeTree(6,_ptTree0,_addlist1,expTree,list,result,statTree);
                    PROG_EXIT(primary_expression_exit,"primary_expression")
#line 466 "chopb.met"
                }
#line 466 "chopb.met"
                _retValue =_ptTree0;
#line 466 "chopb.met"
                goto primary_expression_ret;
#line 466 "chopb.met"
            }
#line 466 "chopb.met"
            break;
#line 466 "chopb.met"
#line 467 "chopb.met"
        case VA_ARG : 
#line 467 "chopb.met"
            tokenAhead = 0 ;
#line 467 "chopb.met"
            CommTerm();
#line 467 "chopb.met"
#line 468 "chopb.met"
#line 469 "chopb.met"
            (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 469 "chopb.met"
            if (  !SEE_TOKEN( POUV,"(") || !(CommTerm(),1)) {
#line 469 "chopb.met"
                MulFreeTree(5,_addlist1,expTree,list,result,statTree);
                TOKEN_EXIT(primary_expression_exit,"(")
#line 469 "chopb.met"
            } else {
#line 469 "chopb.met"
                tokenAhead = 0 ;
#line 469 "chopb.met"
            }
#line 469 "chopb.met"
#line 470 "chopb.met"
            {
#line 470 "chopb.met"
                PPTREE _ptTree0=0,_ptRes0=0;
#line 470 "chopb.met"
                _ptRes0= MakeTree(VA_ARG, 2);
#line 470 "chopb.met"
                if ( (_ptTree0=NQUICK_CALL(_Tak(assignment_expression)(error_free), 21, chopb))== (PPTREE) -1 ) {
#line 470 "chopb.met"
                    MulFreeTree(7,_ptRes0,_ptTree0,_addlist1,expTree,list,result,statTree);
                    PROG_EXIT(primary_expression_exit,"primary_expression")
#line 470 "chopb.met"
                }
#line 470 "chopb.met"
                ReplaceTree(_ptRes0, 1, _ptTree0);
#line 470 "chopb.met"
                expTree=_ptRes0;
#line 470 "chopb.met"
            }
#line 470 "chopb.met"
#line 471 "chopb.met"
            (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 471 "chopb.met"
            if (  !SEE_TOKEN( VIRG,",") || !(CommTerm(),1)) {
#line 471 "chopb.met"
                MulFreeTree(5,_addlist1,expTree,list,result,statTree);
                TOKEN_EXIT(primary_expression_exit,",")
#line 471 "chopb.met"
            } else {
#line 471 "chopb.met"
                tokenAhead = 0 ;
#line 471 "chopb.met"
            }
#line 471 "chopb.met"
#line 472 "chopb.met"
            {
#line 472 "chopb.met"
                PPTREE _ptTree0=0;
#line 472 "chopb.met"
                if ( (_ptTree0=NQUICK_CALL(_Tak(type_name)(error_free), 154, chopb))== (PPTREE) -1 ) {
#line 472 "chopb.met"
                    MulFreeTree(6,_ptTree0,_addlist1,expTree,list,result,statTree);
                    PROG_EXIT(primary_expression_exit,"primary_expression")
#line 472 "chopb.met"
                }
#line 472 "chopb.met"
                ReplaceTree(expTree , 2 , _ptTree0);
#line 472 "chopb.met"
            }
#line 472 "chopb.met"
#line 473 "chopb.met"
            (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 473 "chopb.met"
            if (  !SEE_TOKEN( PFER,")") || !(CommTerm(),1)) {
#line 473 "chopb.met"
                MulFreeTree(5,_addlist1,expTree,list,result,statTree);
                TOKEN_EXIT(primary_expression_exit,")")
#line 473 "chopb.met"
            } else {
#line 473 "chopb.met"
                tokenAhead = 0 ;
#line 473 "chopb.met"
            }
#line 473 "chopb.met"
#line 474 "chopb.met"
            {
#line 474 "chopb.met"
                _retValue = expTree ;
#line 474 "chopb.met"
                goto primary_expression_ret;
#line 474 "chopb.met"
                
#line 474 "chopb.met"
            }
#line 474 "chopb.met"
#line 474 "chopb.met"
            break;
#line 474 "chopb.met"
#line 476 "chopb.met"
        case COUV : 
#line 476 "chopb.met"
#line 476 "chopb.met"
            {
#line 476 "chopb.met"
                PPTREE _ptTree0=0;
#line 476 "chopb.met"
                if ( (_ptTree0=NQUICK_CALL(_Tak(lambda)(error_free), 93, chopb))== (PPTREE) -1 ) {
#line 476 "chopb.met"
                    MulFreeTree(6,_ptTree0,_addlist1,expTree,list,result,statTree);
                    PROG_EXIT(primary_expression_exit,"primary_expression")
#line 476 "chopb.met"
                }
#line 476 "chopb.met"
                _retValue =_ptTree0;
#line 476 "chopb.met"
                goto primary_expression_ret;
#line 476 "chopb.met"
            }
#line 476 "chopb.met"
            break;
#line 476 "chopb.met"
#line 477 "chopb.met"
        default : 
#line 477 "chopb.met"
#line 477 "chopb.met"
            {
#line 477 "chopb.met"
                PPTREE _ptTree0=0;
#line 477 "chopb.met"
                if ( (_ptTree0=NQUICK_CALL(_Tak(constan)(error_free), 36, chopb))== (PPTREE) -1 ) {
#line 477 "chopb.met"
                    MulFreeTree(6,_ptTree0,_addlist1,expTree,list,result,statTree);
                    PROG_EXIT(primary_expression_exit,"primary_expression")
#line 477 "chopb.met"
                }
#line 477 "chopb.met"
                _retValue =_ptTree0;
#line 477 "chopb.met"
                goto primary_expression_ret;
#line 477 "chopb.met"
            }
#line 477 "chopb.met"
            break;
#line 477 "chopb.met"
    }
#line 477 "chopb.met"
#line 477 "chopb.met"
#line 478 "chopb.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 478 "chopb.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 478 "chopb.met"
parse =  _oldparse;
#line 478 "chopb.met"
inMakeTree =  _oldinMakeTree;
#line 478 "chopb.met"
return((PPTREE) 0);
#line 478 "chopb.met"

#line 478 "chopb.met"
primary_expression_exit :
#line 478 "chopb.met"

#line 478 "chopb.met"
    _Debug = TRACE_RULE("primary_expression",TRACE_EXIT,(PPTREE)0);
#line 478 "chopb.met"
    _funcLevel--;
#line 478 "chopb.met"
    parse =  _oldparse;
#line 478 "chopb.met"
    inMakeTree =  _oldinMakeTree;
#line 478 "chopb.met"
    return((PPTREE) -1) ;
#line 478 "chopb.met"

#line 478 "chopb.met"
primary_expression_ret :
#line 478 "chopb.met"
    
#line 478 "chopb.met"
    _Debug = TRACE_RULE("primary_expression",TRACE_RETURN,_retValue);
#line 478 "chopb.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 478 "chopb.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 478 "chopb.met"
    parse =  _oldparse;
#line 478 "chopb.met"
    inMakeTree =  _oldinMakeTree;
#line 478 "chopb.met"
    return _retValue ;
#line 478 "chopb.met"
}
#line 478 "chopb.met"

#line 478 "chopb.met"
#line 260 "chopb.met"
PPTREE chopb::prog ( int error_free)
#line 260 "chopb.met"
{
#line 260 "chopb.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 260 "chopb.met"
    int _value,_nbPre = 0 ;
#line 260 "chopb.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 260 "chopb.met"
    int _Debug = TRACE_RULE("prog",TRACE_ENTER,(PPTREE)0);
#line 260 "chopb.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 260 "chopb.met"
#line 260 "chopb.met"
    PPTREE langTree = (PPTREE) 0;
#line 260 "chopb.met"
#line 262 "chopb.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 262 "chopb.met"
    if (  !SEE_TOKEN( LANGUAGE,"language") || !(CommTerm(),1)) {
#line 262 "chopb.met"
        MulFreeTree(1,langTree);
        TOKEN_EXIT(prog_exit,"language")
#line 262 "chopb.met"
    } else {
#line 262 "chopb.met"
        tokenAhead = 0 ;
#line 262 "chopb.met"
    }
#line 262 "chopb.met"
#line 263 "chopb.met"
    {
#line 263 "chopb.met"
        PPTREE _ptTree0=0,_ptRes0=0;
#line 263 "chopb.met"
        _ptRes0= MakeTree(CHOP_DEF, 2);
#line 263 "chopb.met"
        {
#line 263 "chopb.met"
            PPTREE _ptTree1=0,_ptRes1=0;
#line 263 "chopb.met"
            _ptRes1= MakeTree(IDENT, 1);
#line 263 "chopb.met"
            (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 263 "chopb.met"
            if ( ! TERM_OR_META(IDENT,"IDENT") || !(BUILD_TERM_META(_ptTree1))) {
#line 263 "chopb.met"
                MulFreeTree(5,_ptRes1,_ptTree1,_ptRes0,_ptTree0,langTree);
                TOKEN_EXIT(prog_exit,"IDENT")
#line 263 "chopb.met"
            } else {
#line 263 "chopb.met"
                tokenAhead = 0 ;
#line 263 "chopb.met"
            }
#line 263 "chopb.met"
            ReplaceTree(_ptRes1, 1, _ptTree1);
#line 263 "chopb.met"
            _ptTree0=_ptRes1;
#line 263 "chopb.met"
        }
#line 263 "chopb.met"
        ReplaceTree(_ptRes0, 1, _ptTree0);
#line 263 "chopb.met"
        langTree=_ptRes0;
#line 263 "chopb.met"
    }
#line 263 "chopb.met"
#line 264 "chopb.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 264 "chopb.met"
    if (  !SEE_TOKEN( PVIR,";") || !(CommTerm(),1)) {
#line 264 "chopb.met"
        MulFreeTree(1,langTree);
        TOKEN_EXIT(prog_exit,";")
#line 264 "chopb.met"
    } else {
#line 264 "chopb.met"
        tokenAhead = 0 ;
#line 264 "chopb.met"
    }
#line 264 "chopb.met"
#line 265 "chopb.met"
    {
#line 265 "chopb.met"
        PPTREE _ptTree0=0;
#line 265 "chopb.met"
        if ( (_ptTree0=NQUICK_CALL(_Tak(program)(error_free), 119, chopb))== (PPTREE) -1 ) {
#line 265 "chopb.met"
            MulFreeTree(2,_ptTree0,langTree);
            PROG_EXIT(prog_exit,"prog")
#line 265 "chopb.met"
        }
#line 265 "chopb.met"
        ReplaceTree(langTree , 2 , _ptTree0);
#line 265 "chopb.met"
    }
#line 265 "chopb.met"
#line 266 "chopb.met"
    {
#line 266 "chopb.met"
        _retValue = langTree ;
#line 266 "chopb.met"
        goto prog_ret;
#line 266 "chopb.met"
        
#line 266 "chopb.met"
    }
#line 266 "chopb.met"
#line 266 "chopb.met"
#line 266 "chopb.met"

#line 267 "chopb.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 267 "chopb.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 267 "chopb.met"
return((PPTREE) 0);
#line 267 "chopb.met"

#line 267 "chopb.met"
prog_exit :
#line 267 "chopb.met"

#line 267 "chopb.met"
    _Debug = TRACE_RULE("prog",TRACE_EXIT,(PPTREE)0);
#line 267 "chopb.met"
    _funcLevel--;
#line 267 "chopb.met"
    return((PPTREE) -1) ;
#line 267 "chopb.met"

#line 267 "chopb.met"
prog_ret :
#line 267 "chopb.met"
    
#line 267 "chopb.met"
    _Debug = TRACE_RULE("prog",TRACE_RETURN,_retValue);
#line 267 "chopb.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 267 "chopb.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 267 "chopb.met"
    return _retValue ;
#line 267 "chopb.met"
}
#line 267 "chopb.met"

#line 267 "chopb.met"
#line 298 "chopb.met"
PPTREE chopb::relational_expression ( int error_free)
#line 298 "chopb.met"
{
#line 298 "chopb.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 298 "chopb.met"
    int _value,_nbPre = 0 ;
#line 298 "chopb.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 298 "chopb.met"
    int _Debug = TRACE_RULE("relational_expression",TRACE_ENTER,(PPTREE)0);
#line 298 "chopb.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 298 "chopb.met"
#line 298 "chopb.met"
    PPTREE expTree = (PPTREE) 0;
#line 298 "chopb.met"
#line 300 "chopb.met"
    if ( (expTree=NQUICK_CALL(_Tak(shift_expression)(error_free), 134, chopb))== (PPTREE) -1 ) {
#line 300 "chopb.met"
        MulFreeTree(1,expTree);
        PROG_EXIT(relational_expression_exit,"relational_expression")
#line 300 "chopb.met"
    }
#line 300 "chopb.met"
#line 301 "chopb.met"
    while (((((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN( INFEEGAL,"<=")) || 
#line 301 "chopb.met"
            ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN( SUPEEGAL,">="))) || 
#line 301 "chopb.met"
           ((((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN( SUPE,">")) && 
#line 301 "chopb.met"
            (! (inMakeTree))))) || 
#line 301 "chopb.met"
          ((((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN( INFE,"<")) && 
#line 301 "chopb.met"
           (! (((((tokenAhead == 18|| (formatBeg(),TRACE_LEX(1)))&&SEE_TOKEN( SPACE_BEG,"SPACE_BEG")) || 
#line 301 "chopb.met"
                ((tokenAhead == 18|| (formatBeg(),TRACE_LEX(1)))&&SEE_TOKEN( TAB_BEG,"TAB_BEG"))) || 
#line 301 "chopb.met"
               ((tokenAhead == 18|| (formatBeg(),TRACE_LEX(1)))&&SEE_TOKEN( NL_BEG,"NL_BEG")))))))) { 
#line 301 "chopb.met"
#line 302 "chopb.met"
        (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 302 "chopb.met"
        switch( lexEl.Value) {
#line 302 "chopb.met"
#line 303 "chopb.met"
            case INFEEGAL : 
#line 303 "chopb.met"
                tokenAhead = 0 ;
#line 303 "chopb.met"
                CommTerm();
#line 303 "chopb.met"
#line 303 "chopb.met"
                {
#line 303 "chopb.met"
                    PPTREE _ptTree0=0,_ptRes0=0;
#line 303 "chopb.met"
                    _ptRes0= MakeTree(LEQU, 2);
#line 303 "chopb.met"
                    ReplaceTree(_ptRes0, 1, expTree );
#line 303 "chopb.met"
                    if ( (_ptTree0=NQUICK_CALL(_Tak(shift_expression)(error_free), 134, chopb))== (PPTREE) -1 ) {
#line 303 "chopb.met"
                        MulFreeTree(3,_ptRes0,_ptTree0,expTree);
                        PROG_EXIT(relational_expression_exit,"relational_expression")
#line 303 "chopb.met"
                    }
#line 303 "chopb.met"
                    ReplaceTree(_ptRes0, 2, _ptTree0);
#line 303 "chopb.met"
                    expTree=_ptRes0;
#line 303 "chopb.met"
                }
#line 303 "chopb.met"
                break;
#line 303 "chopb.met"
#line 304 "chopb.met"
            case SUPEEGAL : 
#line 304 "chopb.met"
                tokenAhead = 0 ;
#line 304 "chopb.met"
                CommTerm();
#line 304 "chopb.met"
#line 304 "chopb.met"
                {
#line 304 "chopb.met"
                    PPTREE _ptTree0=0,_ptRes0=0;
#line 304 "chopb.met"
                    _ptRes0= MakeTree(GEQU, 2);
#line 304 "chopb.met"
                    ReplaceTree(_ptRes0, 1, expTree );
#line 304 "chopb.met"
                    if ( (_ptTree0=NQUICK_CALL(_Tak(shift_expression)(error_free), 134, chopb))== (PPTREE) -1 ) {
#line 304 "chopb.met"
                        MulFreeTree(3,_ptRes0,_ptTree0,expTree);
                        PROG_EXIT(relational_expression_exit,"relational_expression")
#line 304 "chopb.met"
                    }
#line 304 "chopb.met"
                    ReplaceTree(_ptRes0, 2, _ptTree0);
#line 304 "chopb.met"
                    expTree=_ptRes0;
#line 304 "chopb.met"
                }
#line 304 "chopb.met"
                break;
#line 304 "chopb.met"
#line 305 "chopb.met"
            case SUPE : 
#line 305 "chopb.met"
                tokenAhead = 0 ;
#line 305 "chopb.met"
                CommTerm();
#line 305 "chopb.met"
#line 305 "chopb.met"
                {
#line 305 "chopb.met"
                    PPTREE _ptTree0=0,_ptRes0=0;
#line 305 "chopb.met"
                    _ptRes0= MakeTree(GT, 2);
#line 305 "chopb.met"
                    ReplaceTree(_ptRes0, 1, expTree );
#line 305 "chopb.met"
                    if ( (_ptTree0=NQUICK_CALL(_Tak(shift_expression)(error_free), 134, chopb))== (PPTREE) -1 ) {
#line 305 "chopb.met"
                        MulFreeTree(3,_ptRes0,_ptTree0,expTree);
                        PROG_EXIT(relational_expression_exit,"relational_expression")
#line 305 "chopb.met"
                    }
#line 305 "chopb.met"
                    ReplaceTree(_ptRes0, 2, _ptTree0);
#line 305 "chopb.met"
                    expTree=_ptRes0;
#line 305 "chopb.met"
                }
#line 305 "chopb.met"
                break;
#line 305 "chopb.met"
#line 306 "chopb.met"
            case INFE : 
#line 306 "chopb.met"
                tokenAhead = 0 ;
#line 306 "chopb.met"
                CommTerm();
#line 306 "chopb.met"
#line 306 "chopb.met"
                {
#line 306 "chopb.met"
                    PPTREE _ptTree0=0,_ptRes0=0;
#line 306 "chopb.met"
                    _ptRes0= MakeTree(LT, 2);
#line 306 "chopb.met"
                    ReplaceTree(_ptRes0, 1, expTree );
#line 306 "chopb.met"
                    if ( (_ptTree0=NQUICK_CALL(_Tak(shift_expression)(error_free), 134, chopb))== (PPTREE) -1 ) {
#line 306 "chopb.met"
                        MulFreeTree(3,_ptRes0,_ptTree0,expTree);
                        PROG_EXIT(relational_expression_exit,"relational_expression")
#line 306 "chopb.met"
                    }
#line 306 "chopb.met"
                    ReplaceTree(_ptRes0, 2, _ptTree0);
#line 306 "chopb.met"
                    expTree=_ptRes0;
#line 306 "chopb.met"
                }
#line 306 "chopb.met"
                break;
#line 306 "chopb.met"
            default :
#line 306 "chopb.met"
                MulFreeTree(1,expTree);
                CASE_EXIT(relational_expression_exit,"either <= or >= or > or <")
#line 306 "chopb.met"
                break;
#line 306 "chopb.met"
        }
#line 306 "chopb.met"
    } 
#line 306 "chopb.met"
#line 308 "chopb.met"
    {
#line 308 "chopb.met"
        _retValue = expTree ;
#line 308 "chopb.met"
        goto relational_expression_ret;
#line 308 "chopb.met"
        
#line 308 "chopb.met"
    }
#line 308 "chopb.met"
#line 308 "chopb.met"
#line 308 "chopb.met"

#line 309 "chopb.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 309 "chopb.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 309 "chopb.met"
return((PPTREE) 0);
#line 309 "chopb.met"

#line 309 "chopb.met"
relational_expression_exit :
#line 309 "chopb.met"

#line 309 "chopb.met"
    _Debug = TRACE_RULE("relational_expression",TRACE_EXIT,(PPTREE)0);
#line 309 "chopb.met"
    _funcLevel--;
#line 309 "chopb.met"
    return((PPTREE) -1) ;
#line 309 "chopb.met"

#line 309 "chopb.met"
relational_expression_ret :
#line 309 "chopb.met"
    
#line 309 "chopb.met"
    _Debug = TRACE_RULE("relational_expression",TRACE_RETURN,_retValue);
#line 309 "chopb.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 309 "chopb.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 309 "chopb.met"
    return _retValue ;
#line 309 "chopb.met"
}
#line 309 "chopb.met"

#line 309 "chopb.met"
