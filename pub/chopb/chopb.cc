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
    if ( (expTree=NQUICK_CALL(_Tak(conditional_expression)(error_free), 32, chopb))== (PPTREE) -1 ) {
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
                    if ( (_ptTree1=NQUICK_CALL(_Tak(assignment_expression)(error_free), 19, chopb))== (PPTREE) -1 ) {
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
#line 290 "chopb.met"
        default : 
#line 290 "chopb.met"
#line 290 "chopb.met"
            if (NPUSH_CALL_AFF_VERIF(expFollow = ,_Tak(assignment_end), 18, chopb)){
#line 290 "chopb.met"
#line 291 "chopb.met"
#line 292 "chopb.met"
                ReplaceTree(expFollow ,1 ,expTree );
#line 292 "chopb.met"
#line 293 "chopb.met"
                expTree = expFollow ;
#line 293 "chopb.met"
#line 293 "chopb.met"
#line 293 "chopb.met"
            }
#line 293 "chopb.met"
            break;
#line 293 "chopb.met"
    }
#line 293 "chopb.met"
#line 296 "chopb.met"
    {
#line 296 "chopb.met"
        _retValue = expTree ;
#line 296 "chopb.met"
        goto assignment_expression_ret;
#line 296 "chopb.met"
        
#line 296 "chopb.met"
    }
#line 296 "chopb.met"
#line 296 "chopb.met"
#line 296 "chopb.met"

#line 297 "chopb.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 297 "chopb.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 297 "chopb.met"
return((PPTREE) 0);
#line 297 "chopb.met"

#line 297 "chopb.met"
assignment_expression_exit :
#line 297 "chopb.met"

#line 297 "chopb.met"
    _Debug = TRACE_RULE("assignment_expression",TRACE_EXIT,(PPTREE)0);
#line 297 "chopb.met"
    _funcLevel--;
#line 297 "chopb.met"
    return((PPTREE) -1) ;
#line 297 "chopb.met"

#line 297 "chopb.met"
assignment_expression_ret :
#line 297 "chopb.met"
    
#line 297 "chopb.met"
    _Debug = TRACE_RULE("assignment_expression",TRACE_RETURN,_retValue);
#line 297 "chopb.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 297 "chopb.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 297 "chopb.met"
    return _retValue ;
#line 297 "chopb.met"
}
#line 297 "chopb.met"

#line 297 "chopb.met"
#line 387 "chopb.met"
PPTREE chopb::cast_expression_value ( int error_free)
#line 387 "chopb.met"
{
#line 387 "chopb.met"
    int  _oldinMakeTree = inMakeTree;
#line 387 "chopb.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 387 "chopb.met"
    int _value,_nbPre = 0 ;
#line 387 "chopb.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 387 "chopb.met"
    int _Debug = TRACE_RULE("cast_expression_value",TRACE_ENTER,(PPTREE)0);
#line 387 "chopb.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 387 "chopb.met"
#line 387 "chopb.met"
    PPTREE ret = (PPTREE) 0;
#line 387 "chopb.met"
#line 389 "chopb.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 389 "chopb.met"
    if (  !SEE_TOKEN( POUV,"(") || !(CommTerm(),1)) {
#line 389 "chopb.met"
        MulFreeTree(1,ret);
        TOKEN_EXIT(cast_expression_value_exit,"(")
#line 389 "chopb.met"
    } else {
#line 389 "chopb.met"
        tokenAhead = 0 ;
#line 389 "chopb.met"
    }
#line 389 "chopb.met"
#line 390 "chopb.met"
    {
#line 390 "chopb.met"
        inMakeTree = 0 ;
#line 390 "chopb.met"
#line 391 "chopb.met"
        if ( (ret=NQUICK_CALL(_Tak(type_name)(error_free), 151, chopb))== (PPTREE) -1 ) {
#line 391 "chopb.met"
            MulFreeTree(1,ret);
            PROG_EXIT(cast_expression_value_exit,"cast_expression_value")
#line 391 "chopb.met"
        }
#line 391 "chopb.met"
        inMakeTree =  _oldinMakeTree;
#line 391 "chopb.met"
    }
#line 391 "chopb.met"
#line 392 "chopb.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 392 "chopb.met"
    if (  !SEE_TOKEN( PFER,")") || !(CommTerm(),1)) {
#line 392 "chopb.met"
        MulFreeTree(1,ret);
        TOKEN_EXIT(cast_expression_value_exit,")")
#line 392 "chopb.met"
    } else {
#line 392 "chopb.met"
        tokenAhead = 0 ;
#line 392 "chopb.met"
    }
#line 392 "chopb.met"
#line 393 "chopb.met"
    {
#line 393 "chopb.met"
        PPTREE _ptTree0=0;
#line 393 "chopb.met"
        {
#line 393 "chopb.met"
            PPTREE _ptTree1=0,_ptRes1=0;
#line 393 "chopb.met"
            _ptRes1= MakeTree(CAST, 2);
#line 393 "chopb.met"
            ReplaceTree(_ptRes1, 1, ret );
#line 393 "chopb.met"
            if ( (_ptTree1=NQUICK_CALL(_Tak(cast_expression)(error_free), 24, chopb))== (PPTREE) -1 ) {
#line 393 "chopb.met"
                MulFreeTree(4,_ptRes1,_ptTree1,_ptTree0,ret);
                PROG_EXIT(cast_expression_value_exit,"cast_expression_value")
#line 393 "chopb.met"
            }
#line 393 "chopb.met"
            ReplaceTree(_ptRes1, 2, _ptTree1);
#line 393 "chopb.met"
            _ptTree0=_ptRes1;
#line 393 "chopb.met"
        }
#line 393 "chopb.met"
        _retValue =_ptTree0;
#line 393 "chopb.met"
        goto cast_expression_value_ret;
#line 393 "chopb.met"
    }
#line 393 "chopb.met"
#line 393 "chopb.met"
#line 393 "chopb.met"

#line 394 "chopb.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 394 "chopb.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 394 "chopb.met"
inMakeTree =  _oldinMakeTree;
#line 394 "chopb.met"
return((PPTREE) 0);
#line 394 "chopb.met"

#line 394 "chopb.met"
cast_expression_value_exit :
#line 394 "chopb.met"

#line 394 "chopb.met"
    _Debug = TRACE_RULE("cast_expression_value",TRACE_EXIT,(PPTREE)0);
#line 394 "chopb.met"
    _funcLevel--;
#line 394 "chopb.met"
    inMakeTree =  _oldinMakeTree;
#line 394 "chopb.met"
    return((PPTREE) -1) ;
#line 394 "chopb.met"

#line 394 "chopb.met"
cast_expression_value_ret :
#line 394 "chopb.met"
    
#line 394 "chopb.met"
    _Debug = TRACE_RULE("cast_expression_value",TRACE_RETURN,_retValue);
#line 394 "chopb.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 394 "chopb.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 394 "chopb.met"
    inMakeTree =  _oldinMakeTree;
#line 394 "chopb.met"
    return _retValue ;
#line 394 "chopb.met"
}
#line 394 "chopb.met"

#line 394 "chopb.met"
#line 396 "chopb.met"
PPTREE chopb::exclusive_or_expression ( int error_free)
#line 396 "chopb.met"
{
#line 396 "chopb.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 396 "chopb.met"
    int _value,_nbPre = 0 ;
#line 396 "chopb.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 396 "chopb.met"
    int _Debug = TRACE_RULE("exclusive_or_expression",TRACE_ENTER,(PPTREE)0);
#line 396 "chopb.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 396 "chopb.met"
#line 396 "chopb.met"
    PPTREE expTree = (PPTREE) 0,ret = (PPTREE) 0;
#line 396 "chopb.met"
#line 398 "chopb.met"
    if ( (expTree=NQUICK_CALL(_Tak(and_expression)(error_free), 6, chopb))== (PPTREE) -1 ) {
#line 398 "chopb.met"
        MulFreeTree(2,expTree,ret);
        PROG_EXIT(exclusive_or_expression_exit,"exclusive_or_expression")
#line 398 "chopb.met"
    }
#line 398 "chopb.met"
#line 399 "chopb.met"
    while ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN(CHAP,"^") && (tokenAhead = 0,CommTerm(),1)) { 
#line 399 "chopb.met"
#line 400 "chopb.met"
        if (NPUSH_CALL_AFF_VERIF(ret = ,_Tak(and_expression), 6, chopb)){
#line 400 "chopb.met"
#line 401 "chopb.met"
            {
#line 401 "chopb.met"
                PPTREE _ptRes0=0;
#line 401 "chopb.met"
                _ptRes0= MakeTree(LXOR, 2);
#line 401 "chopb.met"
                ReplaceTree(_ptRes0, 1, expTree );
#line 401 "chopb.met"
                ReplaceTree(_ptRes0, 2, ret );
#line 401 "chopb.met"
                expTree=_ptRes0;
#line 401 "chopb.met"
            }
#line 401 "chopb.met"
        } else {
#line 401 "chopb.met"
#line 403 "chopb.met"
            {
#line 403 "chopb.met"
                PPTREE _ptRes0=0;
#line 403 "chopb.met"
                _ptRes0= MakeTree(LXOR, 2);
#line 403 "chopb.met"
                ReplaceTree(_ptRes0, 1, expTree );
#line 403 "chopb.met"
                expTree=_ptRes0;
#line 403 "chopb.met"
            }
#line 403 "chopb.met"
        }
#line 403 "chopb.met"
    } 
#line 403 "chopb.met"
#line 404 "chopb.met"
    {
#line 404 "chopb.met"
        _retValue = expTree ;
#line 404 "chopb.met"
        goto exclusive_or_expression_ret;
#line 404 "chopb.met"
        
#line 404 "chopb.met"
    }
#line 404 "chopb.met"
#line 404 "chopb.met"
#line 404 "chopb.met"

#line 405 "chopb.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 405 "chopb.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 405 "chopb.met"
return((PPTREE) 0);
#line 405 "chopb.met"

#line 405 "chopb.met"
exclusive_or_expression_exit :
#line 405 "chopb.met"

#line 405 "chopb.met"
    _Debug = TRACE_RULE("exclusive_or_expression",TRACE_EXIT,(PPTREE)0);
#line 405 "chopb.met"
    _funcLevel--;
#line 405 "chopb.met"
    return((PPTREE) -1) ;
#line 405 "chopb.met"

#line 405 "chopb.met"
exclusive_or_expression_ret :
#line 405 "chopb.met"
    
#line 405 "chopb.met"
    _Debug = TRACE_RULE("exclusive_or_expression",TRACE_RETURN,_retValue);
#line 405 "chopb.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 405 "chopb.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 405 "chopb.met"
    return _retValue ;
#line 405 "chopb.met"
}
#line 405 "chopb.met"

#line 405 "chopb.met"
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
    if ( (expTree=NQUICK_CALL(_Tak(assignment_expression)(error_free), 19, chopb))== (PPTREE) -1 ) {
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
                if ( (_ptTree0=NQUICK_CALL(_Tak(assignment_expression)(error_free), 19, chopb))== (PPTREE) -1 ) {
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
        if ( (_ptTree0=NQUICK_CALL(_Tak(prog)(error_free), 169, chopb))== (PPTREE) -1 ) {
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
#line 372 "chopb.met"
PPTREE chopb::multiplicative_expression ( int error_free)
#line 372 "chopb.met"
{
#line 372 "chopb.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 372 "chopb.met"
    int _value,_nbPre = 0 ;
#line 372 "chopb.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 372 "chopb.met"
    int _Debug = TRACE_RULE("multiplicative_expression",TRACE_ENTER,(PPTREE)0);
#line 372 "chopb.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 372 "chopb.met"
#line 372 "chopb.met"
    PPTREE expTree = (PPTREE) 0;
#line 372 "chopb.met"
#line 374 "chopb.met"
    if ( (expTree=NQUICK_CALL(_Tak(pm_expression)(error_free), 111, chopb))== (PPTREE) -1 ) {
#line 374 "chopb.met"
        MulFreeTree(1,expTree);
        PROG_EXIT(multiplicative_expression_exit,"multiplicative_expression")
#line 374 "chopb.met"
    }
#line 374 "chopb.met"
#line 375 "chopb.met"
    while (((((tokenAhead == 15|| (LexEtoiEtoi(),TRACE_LEX(1)))&&SEE_TOKEN( SIMP_ETOI,"SIMP_ETOI")) || 
#line 375 "chopb.met"
            ((tokenAhead == 15|| (LexEtoiEtoi(),TRACE_LEX(1)))&&SEE_TOKEN( ETOI_ETOI,"ETOI_ETOI"))) || 
#line 375 "chopb.met"
           ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN( SLAS,"SLAS"))) || 
#line 375 "chopb.met"
          ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN( POURC,"%"))) { 
#line 375 "chopb.met"
#line 376 "chopb.met"
#line 377 "chopb.met"
        if(((tokenAhead == 15|| (LexEtoiEtoi(),TRACE_LEX(1)))&&TERM_OR_META(ETOI_ETOI,"ETOI_ETOI") && (tokenAhead = 0,CommTerm(),1))){
#line 377 "chopb.met"
#line 377 "chopb.met"
            {
#line 377 "chopb.met"
                PPTREE _ptTree0=0,_ptRes0=0;
#line 377 "chopb.met"
                _ptRes0= MakeTree(EXPO, 2);
#line 377 "chopb.met"
                ReplaceTree(_ptRes0, 1, expTree );
#line 377 "chopb.met"
                if ( (_ptTree0=NQUICK_CALL(_Tak(pm_expression)(error_free), 111, chopb))== (PPTREE) -1 ) {
#line 377 "chopb.met"
                    MulFreeTree(3,_ptRes0,_ptTree0,expTree);
                    PROG_EXIT(multiplicative_expression_exit,"multiplicative_expression")
#line 377 "chopb.met"
                }
#line 377 "chopb.met"
                ReplaceTree(_ptRes0, 2, _ptTree0);
#line 377 "chopb.met"
                expTree=_ptRes0;
#line 377 "chopb.met"
            }
#line 377 "chopb.met"
        } else 
#line 377 "chopb.met"
#line 379 "chopb.met"
        if(((tokenAhead == 15|| (LexEtoiEtoi(),TRACE_LEX(1)))&&TERM_OR_META(SIMP_ETOI,"SIMP_ETOI") && (tokenAhead = 0,CommTerm(),1))){
#line 379 "chopb.met"
#line 379 "chopb.met"
            {
#line 379 "chopb.met"
                PPTREE _ptTree0=0,_ptRes0=0;
#line 379 "chopb.met"
                _ptRes0= MakeTree(MUL, 2);
#line 379 "chopb.met"
                ReplaceTree(_ptRes0, 1, expTree );
#line 379 "chopb.met"
                if ( (_ptTree0=NQUICK_CALL(_Tak(pm_expression)(error_free), 111, chopb))== (PPTREE) -1 ) {
#line 379 "chopb.met"
                    MulFreeTree(3,_ptRes0,_ptTree0,expTree);
                    PROG_EXIT(multiplicative_expression_exit,"multiplicative_expression")
#line 379 "chopb.met"
                }
#line 379 "chopb.met"
                ReplaceTree(_ptRes0, 2, _ptTree0);
#line 379 "chopb.met"
                expTree=_ptRes0;
#line 379 "chopb.met"
            }
#line 379 "chopb.met"
        } else 
#line 379 "chopb.met"
#line 381 "chopb.met"
        if(((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&TERM_OR_META(SLAS,"SLAS") && (tokenAhead = 0,CommTerm(),1))){
#line 381 "chopb.met"
#line 381 "chopb.met"
            {
#line 381 "chopb.met"
                PPTREE _ptTree0=0,_ptRes0=0;
#line 381 "chopb.met"
                _ptRes0= MakeTree(DIV, 2);
#line 381 "chopb.met"
                ReplaceTree(_ptRes0, 1, expTree );
#line 381 "chopb.met"
                if ( (_ptTree0=NQUICK_CALL(_Tak(pm_expression)(error_free), 111, chopb))== (PPTREE) -1 ) {
#line 381 "chopb.met"
                    MulFreeTree(3,_ptRes0,_ptTree0,expTree);
                    PROG_EXIT(multiplicative_expression_exit,"multiplicative_expression")
#line 381 "chopb.met"
                }
#line 381 "chopb.met"
                ReplaceTree(_ptRes0, 2, _ptTree0);
#line 381 "chopb.met"
                expTree=_ptRes0;
#line 381 "chopb.met"
            }
#line 381 "chopb.met"
        } else 
#line 381 "chopb.met"
#line 382 "chopb.met"
        if(((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN(POURC,"%") && (tokenAhead = 0,CommTerm(),1))){
#line 382 "chopb.met"
#line 382 "chopb.met"
            {
#line 382 "chopb.met"
                PPTREE _ptTree0=0,_ptRes0=0;
#line 382 "chopb.met"
                _ptRes0= MakeTree(REM, 2);
#line 382 "chopb.met"
                ReplaceTree(_ptRes0, 1, expTree );
#line 382 "chopb.met"
                if ( (_ptTree0=NQUICK_CALL(_Tak(pm_expression)(error_free), 111, chopb))== (PPTREE) -1 ) {
#line 382 "chopb.met"
                    MulFreeTree(3,_ptRes0,_ptTree0,expTree);
                    PROG_EXIT(multiplicative_expression_exit,"multiplicative_expression")
#line 382 "chopb.met"
                }
#line 382 "chopb.met"
                ReplaceTree(_ptRes0, 2, _ptTree0);
#line 382 "chopb.met"
                expTree=_ptRes0;
#line 382 "chopb.met"
            }
#line 382 "chopb.met"
        } else 
#line 382 "chopb.met"
         ;
#line 382 "chopb.met"
    } 
#line 382 "chopb.met"
#line 384 "chopb.met"
    {
#line 384 "chopb.met"
        _retValue = expTree ;
#line 384 "chopb.met"
        goto multiplicative_expression_ret;
#line 384 "chopb.met"
        
#line 384 "chopb.met"
    }
#line 384 "chopb.met"
#line 384 "chopb.met"
#line 384 "chopb.met"

#line 385 "chopb.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 385 "chopb.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 385 "chopb.met"
return((PPTREE) 0);
#line 385 "chopb.met"

#line 385 "chopb.met"
multiplicative_expression_exit :
#line 385 "chopb.met"

#line 385 "chopb.met"
    _Debug = TRACE_RULE("multiplicative_expression",TRACE_EXIT,(PPTREE)0);
#line 385 "chopb.met"
    _funcLevel--;
#line 385 "chopb.met"
    return((PPTREE) -1) ;
#line 385 "chopb.met"

#line 385 "chopb.met"
multiplicative_expression_ret :
#line 385 "chopb.met"
    
#line 385 "chopb.met"
    _Debug = TRACE_RULE("multiplicative_expression",TRACE_RETURN,_retValue);
#line 385 "chopb.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 385 "chopb.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 385 "chopb.met"
    return _retValue ;
#line 385 "chopb.met"
}
#line 385 "chopb.met"

#line 385 "chopb.met"
#line 667 "chopb.met"
PPTREE chopb::old ( int error_free)
#line 667 "chopb.met"
{
#line 667 "chopb.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 667 "chopb.met"
    int _value,_nbPre = 0 ;
#line 667 "chopb.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 667 "chopb.met"
    int _Debug = TRACE_RULE("old",TRACE_ENTER,(PPTREE)0);
#line 667 "chopb.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 667 "chopb.met"
#line 668 "chopb.met"
    {
#line 668 "chopb.met"
        PPTREE _ptTree0=0;
#line 668 "chopb.met"
        {
#line 668 "chopb.met"
            PPTREE _ptRes1=0;
#line 668 "chopb.met"
            _ptRes1= MakeTree(BOX, 1);
#line 668 "chopb.met"
            _ptTree0=_ptRes1;
#line 668 "chopb.met"
        }
#line 668 "chopb.met"
        _retValue =_ptTree0;
#line 668 "chopb.met"
        goto old_ret;
#line 668 "chopb.met"
    }
#line 668 "chopb.met"
#line 668 "chopb.met"
#line 668 "chopb.met"

#line 669 "chopb.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 669 "chopb.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 669 "chopb.met"
return((PPTREE) 0);
#line 669 "chopb.met"

#line 669 "chopb.met"
old_exit :
#line 669 "chopb.met"

#line 669 "chopb.met"
    _Debug = TRACE_RULE("old",TRACE_EXIT,(PPTREE)0);
#line 669 "chopb.met"
    _funcLevel--;
#line 669 "chopb.met"
    return((PPTREE) -1) ;
#line 669 "chopb.met"

#line 669 "chopb.met"
old_ret :
#line 669 "chopb.met"
    
#line 669 "chopb.met"
    _Debug = TRACE_RULE("old",TRACE_RETURN,_retValue);
#line 669 "chopb.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 669 "chopb.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 669 "chopb.met"
    return _retValue ;
#line 669 "chopb.met"
}
#line 669 "chopb.met"

#line 669 "chopb.met"
#line 331 "chopb.met"
PPTREE chopb::postfix_expression ( int error_free)
#line 331 "chopb.met"
{
#line 331 "chopb.met"
    int  _oldinMakeTree = inMakeTree;
#line 331 "chopb.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 331 "chopb.met"
    int _value,_nbPre = 0 ;
#line 331 "chopb.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 331 "chopb.met"
    int _Debug = TRACE_RULE("postfix_expression",TRACE_ENTER,(PPTREE)0);
#line 331 "chopb.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 331 "chopb.met"
#line 331 "chopb.met"
    PPTREE expTree = (PPTREE) 0,expList = (PPTREE) 0;
#line 331 "chopb.met"
#line 333 "chopb.met"
    if (! (NPUSH_CALL_AFF_VERIF(expTree = ,_Tak(primary_expression), 115, chopb))){
#line 333 "chopb.met"
#line 334 "chopb.met"
#line 335 "chopb.met"
        if ( (expTree=NQUICK_CALL(_Tak(simple_type_name)(error_free), 136, chopb))== (PPTREE) -1 ) {
#line 335 "chopb.met"
            MulFreeTree(2,expList,expTree);
            PROG_EXIT(postfix_expression_exit,"postfix_expression")
#line 335 "chopb.met"
        }
#line 335 "chopb.met"
#line 336 "chopb.met"
        if (! ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN( POUV,"("))){
#line 336 "chopb.met"
#line 337 "chopb.met"
            
#line 337 "chopb.met"
            MulFreeTree(2,expList,expTree);
            LEX_EXIT ("",0);
#line 337 "chopb.met"
            goto postfix_expression_exit;
#line 337 "chopb.met"
#line 337 "chopb.met"
        }
#line 337 "chopb.met"
#line 337 "chopb.met"
#line 337 "chopb.met"
    }
#line 337 "chopb.met"
#line 339 "chopb.met"
    while (((((((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN( POUV,"(")) || 
#line 339 "chopb.met"
              ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN( COUV,"["))) || 
#line 339 "chopb.met"
             ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN( POINT,"POINT"))) || 
#line 339 "chopb.met"
            ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN( TIRESUPE,"->"))) || 
#line 339 "chopb.met"
           ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN( PLUSPLUS,"++"))) || 
#line 339 "chopb.met"
          ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN( TIRETIRE,"--"))) { 
#line 339 "chopb.met"
#line 345 "chopb.met"
        (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 345 "chopb.met"
        switch( lexEl.Value) {
#line 345 "chopb.met"
#line 348 "chopb.met"
            case POUV : 
#line 348 "chopb.met"
                tokenAhead = 0 ;
#line 348 "chopb.met"
                CommTerm();
#line 348 "chopb.met"
#line 346 "chopb.met"
                {
#line 346 "chopb.met"
                    inMakeTree = 0 ;
#line 346 "chopb.met"
#line 347 "chopb.met"
#line 348 "chopb.met"
                    if (NPUSH_CALL_AFF_VERIF(expList = ,_Tak(expression), 65, chopb)){
#line 348 "chopb.met"
#line 349 "chopb.met"
                        {
#line 349 "chopb.met"
                            PPTREE _ptRes0=0;
#line 349 "chopb.met"
                            _ptRes0= MakeTree(EXP_LIST, 2);
#line 349 "chopb.met"
                            ReplaceTree(_ptRes0, 1, expTree );
#line 349 "chopb.met"
                            ReplaceTree(_ptRes0, 2, expList );
#line 349 "chopb.met"
                            expTree=_ptRes0;
#line 349 "chopb.met"
                        }
#line 349 "chopb.met"
                    } else {
#line 349 "chopb.met"
#line 351 "chopb.met"
                        {
#line 351 "chopb.met"
                            PPTREE _ptRes0=0;
#line 351 "chopb.met"
                            _ptRes0= MakeTree(EXP_LIST, 2);
#line 351 "chopb.met"
                            ReplaceTree(_ptRes0, 1, expTree );
#line 351 "chopb.met"
                            expTree=_ptRes0;
#line 351 "chopb.met"
                        }
#line 351 "chopb.met"
                    }
#line 351 "chopb.met"
#line 352 "chopb.met"
                    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 352 "chopb.met"
                    if (  !SEE_TOKEN( PFER,")") || !(CommTerm(),1)) {
#line 352 "chopb.met"
                        MulFreeTree(2,expList,expTree);
                        TOKEN_EXIT(postfix_expression_exit,")")
#line 352 "chopb.met"
                    } else {
#line 352 "chopb.met"
                        tokenAhead = 0 ;
#line 352 "chopb.met"
                    }
#line 352 "chopb.met"
#line 352 "chopb.met"
                    inMakeTree =  _oldinMakeTree;
#line 352 "chopb.met"
                }
#line 352 "chopb.met"
                break;
#line 352 "chopb.met"
#line 356 "chopb.met"
            case COUV : 
#line 356 "chopb.met"
                tokenAhead = 0 ;
#line 356 "chopb.met"
                CommTerm();
#line 356 "chopb.met"
#line 354 "chopb.met"
                {
#line 354 "chopb.met"
                    inMakeTree = 0 ;
#line 354 "chopb.met"
#line 355 "chopb.met"
#line 356 "chopb.met"
                    if (NPUSH_CALL_AFF_VERIF(expList = ,_Tak(expression), 65, chopb)){
#line 356 "chopb.met"
#line 357 "chopb.met"
                        {
#line 357 "chopb.met"
                            PPTREE _ptRes0=0;
#line 357 "chopb.met"
                            _ptRes0= MakeTree(EXP_ARRAY, 2);
#line 357 "chopb.met"
                            ReplaceTree(_ptRes0, 1, expTree );
#line 357 "chopb.met"
                            ReplaceTree(_ptRes0, 2, expList );
#line 357 "chopb.met"
                            expTree=_ptRes0;
#line 357 "chopb.met"
                        }
#line 357 "chopb.met"
                    } else {
#line 357 "chopb.met"
#line 359 "chopb.met"
                        {
#line 359 "chopb.met"
                            PPTREE _ptRes0=0;
#line 359 "chopb.met"
                            _ptRes0= MakeTree(EXP_ARRAY, 2);
#line 359 "chopb.met"
                            ReplaceTree(_ptRes0, 1, expTree );
#line 359 "chopb.met"
                            expTree=_ptRes0;
#line 359 "chopb.met"
                        }
#line 359 "chopb.met"
                    }
#line 359 "chopb.met"
#line 360 "chopb.met"
                    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 360 "chopb.met"
                    if (  !SEE_TOKEN( CFER,"]") || !(CommTerm(),1)) {
#line 360 "chopb.met"
                        MulFreeTree(2,expList,expTree);
                        TOKEN_EXIT(postfix_expression_exit,"]")
#line 360 "chopb.met"
                    } else {
#line 360 "chopb.met"
                        tokenAhead = 0 ;
#line 360 "chopb.met"
                    }
#line 360 "chopb.met"
#line 360 "chopb.met"
                    inMakeTree =  _oldinMakeTree;
#line 360 "chopb.met"
                }
#line 360 "chopb.met"
                break;
#line 360 "chopb.met"
#line 362 "chopb.met"
            case META : 
#line 362 "chopb.met"
            case POINT : 
#line 362 "chopb.met"
                tokenAhead = 0 ;
#line 362 "chopb.met"
                CommTerm();
#line 362 "chopb.met"
#line 362 "chopb.met"
                {
#line 362 "chopb.met"
                    PPTREE _ptTree0=0,_ptRes0=0;
#line 362 "chopb.met"
                    _ptRes0= MakeTree(REF, 2);
#line 362 "chopb.met"
                    ReplaceTree(_ptRes0, 1, expTree );
#line 362 "chopb.met"
                    if ( (_ptTree0=NQUICK_CALL(_Tak(primary_expression)(error_free), 115, chopb))== (PPTREE) -1 ) {
#line 362 "chopb.met"
                        MulFreeTree(4,_ptRes0,_ptTree0,expList,expTree);
                        PROG_EXIT(postfix_expression_exit,"postfix_expression")
#line 362 "chopb.met"
                    }
#line 362 "chopb.met"
                    ReplaceTree(_ptRes0, 2, _ptTree0);
#line 362 "chopb.met"
                    expTree=_ptRes0;
#line 362 "chopb.met"
                }
#line 362 "chopb.met"
                break;
#line 362 "chopb.met"
#line 364 "chopb.met"
            case TIRESUPE : 
#line 364 "chopb.met"
                tokenAhead = 0 ;
#line 364 "chopb.met"
                CommTerm();
#line 364 "chopb.met"
#line 364 "chopb.met"
                {
#line 364 "chopb.met"
                    PPTREE _ptTree0=0,_ptRes0=0;
#line 364 "chopb.met"
                    _ptRes0= MakeTree(ARROW, 2);
#line 364 "chopb.met"
                    ReplaceTree(_ptRes0, 1, expTree );
#line 364 "chopb.met"
                    if ( (_ptTree0=NQUICK_CALL(_Tak(primary_expression)(error_free), 115, chopb))== (PPTREE) -1 ) {
#line 364 "chopb.met"
                        MulFreeTree(4,_ptRes0,_ptTree0,expList,expTree);
                        PROG_EXIT(postfix_expression_exit,"postfix_expression")
#line 364 "chopb.met"
                    }
#line 364 "chopb.met"
                    ReplaceTree(_ptRes0, 2, _ptTree0);
#line 364 "chopb.met"
                    expTree=_ptRes0;
#line 364 "chopb.met"
                }
#line 364 "chopb.met"
                break;
#line 364 "chopb.met"
#line 366 "chopb.met"
            case PLUSPLUS : 
#line 366 "chopb.met"
                tokenAhead = 0 ;
#line 366 "chopb.met"
                CommTerm();
#line 366 "chopb.met"
#line 366 "chopb.met"
                {
#line 366 "chopb.met"
                    PPTREE _ptRes0=0;
#line 366 "chopb.met"
                    _ptRes0= MakeTree(AINCR, 1);
#line 366 "chopb.met"
                    ReplaceTree(_ptRes0, 1, expTree );
#line 366 "chopb.met"
                    expTree=_ptRes0;
#line 366 "chopb.met"
                }
#line 366 "chopb.met"
                break;
#line 366 "chopb.met"
#line 367 "chopb.met"
            case TIRETIRE : 
#line 367 "chopb.met"
                tokenAhead = 0 ;
#line 367 "chopb.met"
                CommTerm();
#line 367 "chopb.met"
#line 367 "chopb.met"
                {
#line 367 "chopb.met"
                    PPTREE _ptRes0=0;
#line 367 "chopb.met"
                    _ptRes0= MakeTree(ADECR, 1);
#line 367 "chopb.met"
                    ReplaceTree(_ptRes0, 1, expTree );
#line 367 "chopb.met"
                    expTree=_ptRes0;
#line 367 "chopb.met"
                }
#line 367 "chopb.met"
                break;
#line 367 "chopb.met"
            default :
#line 367 "chopb.met"
                MulFreeTree(2,expList,expTree);
                CASE_EXIT(postfix_expression_exit,"either ( or [ or POINT or -> or ++ or --")
#line 367 "chopb.met"
                break;
#line 367 "chopb.met"
        }
#line 367 "chopb.met"
    } 
#line 367 "chopb.met"
#line 369 "chopb.met"
    {
#line 369 "chopb.met"
        _retValue = expTree ;
#line 369 "chopb.met"
        goto postfix_expression_ret;
#line 369 "chopb.met"
        
#line 369 "chopb.met"
    }
#line 369 "chopb.met"
#line 369 "chopb.met"
#line 369 "chopb.met"

#line 370 "chopb.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 370 "chopb.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 370 "chopb.met"
inMakeTree =  _oldinMakeTree;
#line 370 "chopb.met"
return((PPTREE) 0);
#line 370 "chopb.met"

#line 370 "chopb.met"
postfix_expression_exit :
#line 370 "chopb.met"

#line 370 "chopb.met"
    _Debug = TRACE_RULE("postfix_expression",TRACE_EXIT,(PPTREE)0);
#line 370 "chopb.met"
    _funcLevel--;
#line 370 "chopb.met"
    inMakeTree =  _oldinMakeTree;
#line 370 "chopb.met"
    return((PPTREE) -1) ;
#line 370 "chopb.met"

#line 370 "chopb.met"
postfix_expression_ret :
#line 370 "chopb.met"
    
#line 370 "chopb.met"
    _Debug = TRACE_RULE("postfix_expression",TRACE_RETURN,_retValue);
#line 370 "chopb.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 370 "chopb.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 370 "chopb.met"
    inMakeTree =  _oldinMakeTree;
#line 370 "chopb.met"
    return _retValue ;
#line 370 "chopb.met"
}
#line 370 "chopb.met"

#line 370 "chopb.met"
#line 407 "chopb.met"
PPTREE chopb::primary_expression ( int error_free)
#line 407 "chopb.met"
{
#line 407 "chopb.met"
    int  _oldparse = parse;
#line 407 "chopb.met"
    int  _oldinMakeTree = inMakeTree;
#line 407 "chopb.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 407 "chopb.met"
    int _value,_nbPre = 0 ;
#line 407 "chopb.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 407 "chopb.met"
    int _Debug = TRACE_RULE("primary_expression",TRACE_ENTER,(PPTREE)0);
#line 407 "chopb.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 407 "chopb.met"
#line 407 "chopb.met"
    PPTREE _addlist1 = (PPTREE) 0;
#line 407 "chopb.met"
#line 407 "chopb.met"
    PPTREE result = (PPTREE) 0,expTree = (PPTREE) 0,list = (PPTREE) 0,statTree = (PPTREE) 0;
#line 407 "chopb.met"
#line 409 "chopb.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 409 "chopb.met"
    switch( lexEl.Value) {
#line 409 "chopb.met"
#line 410 "chopb.met"
        case INFESUPE : 
#line 410 "chopb.met"
            tokenAhead = 0 ;
#line 410 "chopb.met"
            CommTerm();
#line 410 "chopb.met"
#line 410 "chopb.met"
            {
#line 410 "chopb.met"
                PPTREE _ptTree0=0;
#line 410 "chopb.met"
                {
#line 410 "chopb.met"
                    PPTREE _ptRes1=0;
#line 410 "chopb.met"
                    _ptRes1= MakeTree(DEF_IDENT, 0);
#line 410 "chopb.met"
                    _ptTree0=_ptRes1;
#line 410 "chopb.met"
                }
#line 410 "chopb.met"
                _retValue =_ptTree0;
#line 410 "chopb.met"
                goto primary_expression_ret;
#line 410 "chopb.met"
            }
#line 410 "chopb.met"
            break;
#line 410 "chopb.met"
#line 411 "chopb.met"
        case INFE : 
#line 411 "chopb.met"
#line 411 "chopb.met"
            {
#line 411 "chopb.met"
                PPTREE _ptTree0=0;
#line 411 "chopb.met"
                if ( (_ptTree0=NQUICK_CALL(_Tak(take_follow)(error_free), 170, chopb))== (PPTREE) -1 ) {
#line 411 "chopb.met"
                    MulFreeTree(6,_ptTree0,_addlist1,expTree,list,result,statTree);
                    PROG_EXIT(primary_expression_exit,"primary_expression")
#line 411 "chopb.met"
                }
#line 411 "chopb.met"
                _retValue =_ptTree0;
#line 411 "chopb.met"
                goto primary_expression_ret;
#line 411 "chopb.met"
            }
#line 411 "chopb.met"
            break;
#line 411 "chopb.met"
#line 412 "chopb.met"
        case POINPOINPOIN : 
#line 412 "chopb.met"
            tokenAhead = 0 ;
#line 412 "chopb.met"
            CommTerm();
#line 412 "chopb.met"
#line 412 "chopb.met"
            {
#line 412 "chopb.met"
                PPTREE _ptTree0=0;
#line 412 "chopb.met"
                if ( (_ptTree0=NQUICK_CALL(_Tak(take_follow_list)(error_free), 171, chopb))== (PPTREE) -1 ) {
#line 412 "chopb.met"
                    MulFreeTree(6,_ptTree0,_addlist1,expTree,list,result,statTree);
                    PROG_EXIT(primary_expression_exit,"primary_expression")
#line 412 "chopb.met"
                }
#line 412 "chopb.met"
                _retValue =_ptTree0;
#line 412 "chopb.met"
                goto primary_expression_ret;
#line 412 "chopb.met"
            }
#line 412 "chopb.met"
            break;
#line 412 "chopb.met"
#line 413 "chopb.met"
        case VALUE : 
#line 413 "chopb.met"
            tokenAhead = 0 ;
#line 413 "chopb.met"
            CommTerm();
#line 413 "chopb.met"
#line 414 "chopb.met"
#line 415 "chopb.met"
            (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 415 "chopb.met"
            if (  !SEE_TOKEN( POUV,"(") || !(CommTerm(),1)) {
#line 415 "chopb.met"
                MulFreeTree(5,_addlist1,expTree,list,result,statTree);
                TOKEN_EXIT(primary_expression_exit,"(")
#line 415 "chopb.met"
            } else {
#line 415 "chopb.met"
                tokenAhead = 0 ;
#line 415 "chopb.met"
            }
#line 415 "chopb.met"
#line 416 "chopb.met"
            (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 416 "chopb.met"
            switch( lexEl.Value) {
#line 416 "chopb.met"
#line 417 "chopb.met"
                case META : 
#line 417 "chopb.met"
                case IDENT : 
#line 417 "chopb.met"
#line 417 "chopb.met"
                    {
#line 417 "chopb.met"
                        PPTREE _ptTree0=0,_ptRes0=0;
#line 417 "chopb.met"
                        _ptRes0= MakeTree(VALUE, 1);
#line 417 "chopb.met"
                        {
#line 417 "chopb.met"
                            PPTREE _ptTree1=0,_ptRes1=0;
#line 417 "chopb.met"
                            _ptRes1= MakeTree(IDENT, 1);
#line 417 "chopb.met"
                            (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 417 "chopb.met"
                            if ( ! TERM_OR_META(IDENT,"IDENT") || !(BUILD_TERM_META(_ptTree1))) {
#line 417 "chopb.met"
                                MulFreeTree(9,_ptRes1,_ptTree1,_ptRes0,_ptTree0,_addlist1,expTree,list,result,statTree);
                                TOKEN_EXIT(primary_expression_exit,"IDENT")
#line 417 "chopb.met"
                            } else {
#line 417 "chopb.met"
                                tokenAhead = 0 ;
#line 417 "chopb.met"
                            }
#line 417 "chopb.met"
                            ReplaceTree(_ptRes1, 1, _ptTree1);
#line 417 "chopb.met"
                            _ptTree0=_ptRes1;
#line 417 "chopb.met"
                        }
#line 417 "chopb.met"
                        ReplaceTree(_ptRes0, 1, _ptTree0);
#line 417 "chopb.met"
                        statTree=_ptRes0;
#line 417 "chopb.met"
                    }
#line 417 "chopb.met"
                    break;
#line 417 "chopb.met"
#line 419 "chopb.met"
                case INFESUPE : 
#line 419 "chopb.met"
                    tokenAhead = 0 ;
#line 419 "chopb.met"
                    CommTerm();
#line 419 "chopb.met"
#line 419 "chopb.met"
                    {
#line 419 "chopb.met"
                        PPTREE _ptTree0=0,_ptRes0=0;
#line 419 "chopb.met"
                        _ptRes0= MakeTree(VALUE, 1);
#line 419 "chopb.met"
                        {
#line 419 "chopb.met"
                            PPTREE _ptRes1=0;
#line 419 "chopb.met"
                            _ptRes1= MakeTree(DEF_IDENT, 0);
#line 419 "chopb.met"
                            _ptTree0=_ptRes1;
#line 419 "chopb.met"
                        }
#line 419 "chopb.met"
                        ReplaceTree(_ptRes0, 1, _ptTree0);
#line 419 "chopb.met"
                        statTree=_ptRes0;
#line 419 "chopb.met"
                    }
#line 419 "chopb.met"
                    break;
#line 419 "chopb.met"
                default :
#line 419 "chopb.met"
                    MulFreeTree(5,_addlist1,expTree,list,result,statTree);
                    CASE_EXIT(primary_expression_exit,"either IDENT or <>")
#line 419 "chopb.met"
                    break;
#line 419 "chopb.met"
            }
#line 419 "chopb.met"
#line 421 "chopb.met"
            (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 421 "chopb.met"
            if (  !SEE_TOKEN( PFER,")") || !(CommTerm(),1)) {
#line 421 "chopb.met"
                MulFreeTree(5,_addlist1,expTree,list,result,statTree);
                TOKEN_EXIT(primary_expression_exit,")")
#line 421 "chopb.met"
            } else {
#line 421 "chopb.met"
                tokenAhead = 0 ;
#line 421 "chopb.met"
            }
#line 421 "chopb.met"
#line 422 "chopb.met"
            {
#line 422 "chopb.met"
                _retValue = statTree ;
#line 422 "chopb.met"
                goto primary_expression_ret;
#line 422 "chopb.met"
                
#line 422 "chopb.met"
            }
#line 422 "chopb.met"
#line 422 "chopb.met"
            break;
#line 422 "chopb.met"
#line 424 "chopb.met"
        case NEXTL : 
#line 424 "chopb.met"
            tokenAhead = 0 ;
#line 424 "chopb.met"
            CommTerm();
#line 424 "chopb.met"
#line 425 "chopb.met"
#line 426 "chopb.met"
            (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 426 "chopb.met"
            if (  !SEE_TOKEN( POUV,"(") || !(CommTerm(),1)) {
#line 426 "chopb.met"
                MulFreeTree(5,_addlist1,expTree,list,result,statTree);
                TOKEN_EXIT(primary_expression_exit,"(")
#line 426 "chopb.met"
            } else {
#line 426 "chopb.met"
                tokenAhead = 0 ;
#line 426 "chopb.met"
            }
#line 426 "chopb.met"
#line 427 "chopb.met"
            if ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN( IDENT,"IDENT")){
#line 427 "chopb.met"
#line 428 "chopb.met"
                {
#line 428 "chopb.met"
                    PPTREE _ptTree0=0,_ptRes0=0;
#line 428 "chopb.met"
                    _ptRes0= MakeTree(NEXT, 1);
#line 428 "chopb.met"
                    {
#line 428 "chopb.met"
                        PPTREE _ptTree1=0,_ptRes1=0;
#line 428 "chopb.met"
                        _ptRes1= MakeTree(IDENT, 1);
#line 428 "chopb.met"
                        (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 428 "chopb.met"
                        if ( ! TERM_OR_META(IDENT,"IDENT") || !(BUILD_TERM_META(_ptTree1))) {
#line 428 "chopb.met"
                            MulFreeTree(9,_ptRes1,_ptTree1,_ptRes0,_ptTree0,_addlist1,expTree,list,result,statTree);
                            TOKEN_EXIT(primary_expression_exit,"IDENT")
#line 428 "chopb.met"
                        } else {
#line 428 "chopb.met"
                            tokenAhead = 0 ;
#line 428 "chopb.met"
                        }
#line 428 "chopb.met"
                        ReplaceTree(_ptRes1, 1, _ptTree1);
#line 428 "chopb.met"
                        _ptTree0=_ptRes1;
#line 428 "chopb.met"
                    }
#line 428 "chopb.met"
                    ReplaceTree(_ptRes0, 1, _ptTree0);
#line 428 "chopb.met"
                    statTree=_ptRes0;
#line 428 "chopb.met"
                }
#line 428 "chopb.met"
            } else {
#line 428 "chopb.met"
#line 430 "chopb.met"
#line 431 "chopb.met"
                (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 431 "chopb.met"
                if (  !SEE_TOKEN( INFESUPE,"<>") || !(CommTerm(),1)) {
#line 431 "chopb.met"
                    MulFreeTree(5,_addlist1,expTree,list,result,statTree);
                    TOKEN_EXIT(primary_expression_exit,"<>")
#line 431 "chopb.met"
                } else {
#line 431 "chopb.met"
                    tokenAhead = 0 ;
#line 431 "chopb.met"
                }
#line 431 "chopb.met"
#line 432 "chopb.met"
                {
#line 432 "chopb.met"
                    PPTREE _ptTree0=0,_ptRes0=0;
#line 432 "chopb.met"
                    _ptRes0= MakeTree(NEXT, 1);
#line 432 "chopb.met"
                    {
#line 432 "chopb.met"
                        PPTREE _ptRes1=0;
#line 432 "chopb.met"
                        _ptRes1= MakeTree(DEF_IDENT, 0);
#line 432 "chopb.met"
                        _ptTree0=_ptRes1;
#line 432 "chopb.met"
                    }
#line 432 "chopb.met"
                    ReplaceTree(_ptRes0, 1, _ptTree0);
#line 432 "chopb.met"
                    statTree=_ptRes0;
#line 432 "chopb.met"
                }
#line 432 "chopb.met"
#line 432 "chopb.met"
            }
#line 432 "chopb.met"
#line 434 "chopb.met"
            (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 434 "chopb.met"
            if (  !SEE_TOKEN( PFER,")") || !(CommTerm(),1)) {
#line 434 "chopb.met"
                MulFreeTree(5,_addlist1,expTree,list,result,statTree);
                TOKEN_EXIT(primary_expression_exit,")")
#line 434 "chopb.met"
            } else {
#line 434 "chopb.met"
                tokenAhead = 0 ;
#line 434 "chopb.met"
            }
#line 434 "chopb.met"
#line 435 "chopb.met"
            {
#line 435 "chopb.met"
                _retValue = statTree ;
#line 435 "chopb.met"
                goto primary_expression_ret;
#line 435 "chopb.met"
                
#line 435 "chopb.met"
            }
#line 435 "chopb.met"
#line 435 "chopb.met"
            break;
#line 435 "chopb.met"
#line 437 "chopb.met"
        case PARSE : 
#line 437 "chopb.met"
            tokenAhead = 0 ;
#line 437 "chopb.met"
            CommTerm();
#line 437 "chopb.met"
#line 438 "chopb.met"
#line 439 "chopb.met"
            (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 439 "chopb.met"
            if (  !SEE_TOKEN( POUV,"(") || !(CommTerm(),1)) {
#line 439 "chopb.met"
                MulFreeTree(5,_addlist1,expTree,list,result,statTree);
                TOKEN_EXIT(primary_expression_exit,"(")
#line 439 "chopb.met"
            } else {
#line 439 "chopb.met"
                tokenAhead = 0 ;
#line 439 "chopb.met"
            }
#line 439 "chopb.met"
#line 440 "chopb.met"
             nb_par_parse = 1 ; 
#line 440 "chopb.met"
#line 441 "chopb.met"
            {
#line 441 "chopb.met"
                parse = 1 ;
#line 441 "chopb.met"
#line 442 "chopb.met"
#line 442 "chopb.met"
                _addlist1 = list ;
#line 442 "chopb.met"
#line 442 "chopb.met"
                while ((tokenAhead == 16|| (LexParse(),TRACE_LEX(1)))&&SEE_TOKEN( PARSE_ELEM,"PARSE_ELEM")) { 
#line 442 "chopb.met"
#line 443 "chopb.met"
#line 443 "chopb.met"
                    {
#line 443 "chopb.met"
                        PPTREE _ptTree0=0;
#line 443 "chopb.met"
                        {
#line 443 "chopb.met"
                            PPTREE _ptTree1=0,_ptRes1=0;
#line 443 "chopb.met"
                            _ptRes1= MakeTree(PARSE_ELEM, 1);
#line 443 "chopb.met"
                            (tokenAhead == 16|| (LexParse(),TRACE_LEX(1)));
#line 443 "chopb.met"
                            if ( ! TERM_OR_META(PARSE_ELEM,"PARSE_ELEM") || !(BUILD_TERM_META(_ptTree1))) {
#line 443 "chopb.met"
                                MulFreeTree(8,_ptRes1,_ptTree1,_ptTree0,_addlist1,expTree,list,result,statTree);
                                TOKEN_EXIT(primary_expression_exit,"PARSE_ELEM")
#line 443 "chopb.met"
                            } else {
#line 443 "chopb.met"
                                tokenAhead = 0 ;
#line 443 "chopb.met"
                            }
#line 443 "chopb.met"
                            ReplaceTree(_ptRes1, 1, _ptTree1);
#line 443 "chopb.met"
                            _ptTree0=_ptRes1;
#line 443 "chopb.met"
                        }
#line 443 "chopb.met"
                        _addlist1 =AddList(_addlist1 , _ptTree0);
#line 443 "chopb.met"
                    }
#line 443 "chopb.met"
#line 443 "chopb.met"
                    if (list){
#line 443 "chopb.met"
#line 443 "chopb.met"
                        _addlist1 = SonTree (_addlist1 ,2 );
#line 443 "chopb.met"
                    } else {
#line 443 "chopb.met"
#line 443 "chopb.met"
                        list = _addlist1 ;
#line 443 "chopb.met"
                    }
#line 443 "chopb.met"
                } 
#line 443 "chopb.met"
                parse =  _oldparse;
#line 443 "chopb.met"
            }
#line 443 "chopb.met"
#line 444 "chopb.met"
            {
#line 444 "chopb.met"
                PPTREE _ptTree0=0;
#line 444 "chopb.met"
                {
#line 444 "chopb.met"
                    PPTREE _ptRes1=0;
#line 444 "chopb.met"
                    _ptRes1= MakeTree(PARSE, 1);
#line 444 "chopb.met"
                    ReplaceTree(_ptRes1, 1, list );
#line 444 "chopb.met"
                    _ptTree0=_ptRes1;
#line 444 "chopb.met"
                }
#line 444 "chopb.met"
                _retValue =_ptTree0;
#line 444 "chopb.met"
                goto primary_expression_ret;
#line 444 "chopb.met"
            }
#line 444 "chopb.met"
#line 444 "chopb.met"
            break;
#line 444 "chopb.met"
#line 446 "chopb.met"
        case IN : 
#line 446 "chopb.met"
            tokenAhead = 0 ;
#line 446 "chopb.met"
            CommTerm();
#line 446 "chopb.met"
#line 447 "chopb.met"
#line 448 "chopb.met"
            {
#line 448 "chopb.met"
                PPTREE _ptTree0=0,_ptRes0=0;
#line 448 "chopb.met"
                _ptRes0= MakeTree(IN_LANG, 2);
#line 448 "chopb.met"
                if ( (_ptTree0=NQUICK_CALL(_Tak(expression)(error_free), 65, chopb))== (PPTREE) -1 ) {
#line 448 "chopb.met"
                    MulFreeTree(7,_ptRes0,_ptTree0,_addlist1,expTree,list,result,statTree);
                    PROG_EXIT(primary_expression_exit,"primary_expression")
#line 448 "chopb.met"
                }
#line 448 "chopb.met"
                ReplaceTree(_ptRes0, 1, _ptTree0);
#line 448 "chopb.met"
                statTree=_ptRes0;
#line 448 "chopb.met"
            }
#line 448 "chopb.met"
#line 449 "chopb.met"
            {
#line 449 "chopb.met"
                PPTREE _ptTree0=0;
#line 449 "chopb.met"
                {
#line 449 "chopb.met"
                    PPTREE _ptTree1=0;
#line 449 "chopb.met"
                    if ( (_ptTree1=NQUICK_CALL(_Tak(statement)(error_free), 143, chopb))== (PPTREE) -1 ) {
#line 449 "chopb.met"
                        MulFreeTree(7,_ptTree1,_ptTree0,_addlist1,expTree,list,result,statTree);
                        PROG_EXIT(primary_expression_exit,"primary_expression")
#line 449 "chopb.met"
                    }
#line 449 "chopb.met"
                    _ptTree0=ReplaceTree(statTree , 2 , _ptTree1);
#line 449 "chopb.met"
                }
#line 449 "chopb.met"
                _retValue =_ptTree0;
#line 449 "chopb.met"
                goto primary_expression_ret;
#line 449 "chopb.met"
            }
#line 449 "chopb.met"
#line 449 "chopb.met"
            break;
#line 449 "chopb.met"
#line 453 "chopb.met"
        case POUV : 
#line 453 "chopb.met"
            tokenAhead = 0 ;
#line 453 "chopb.met"
            CommTerm();
#line 453 "chopb.met"
#line 451 "chopb.met"
            {
#line 451 "chopb.met"
                inMakeTree = 0 ;
#line 451 "chopb.met"
#line 452 "chopb.met"
#line 453 "chopb.met"
                if (NPUSH_CALL_AFF_VERIF(expTree = ,_Tak(expression), 65, chopb)){
#line 453 "chopb.met"
#line 454 "chopb.met"
#line 455 "chopb.met"
                    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 455 "chopb.met"
                    if (  !SEE_TOKEN( PFER,")") || !(CommTerm(),1)) {
#line 455 "chopb.met"
                        MulFreeTree(5,_addlist1,expTree,list,result,statTree);
                        TOKEN_EXIT(primary_expression_exit,")")
#line 455 "chopb.met"
                    } else {
#line 455 "chopb.met"
                        tokenAhead = 0 ;
#line 455 "chopb.met"
                    }
#line 455 "chopb.met"
#line 456 "chopb.met"
                    {
#line 456 "chopb.met"
                        PPTREE _ptRes0=0;
#line 456 "chopb.met"
                        _ptRes0= MakeTree(EXP, 1);
#line 456 "chopb.met"
                        ReplaceTree(_ptRes0, 1, expTree );
#line 456 "chopb.met"
                        expTree=_ptRes0;
#line 456 "chopb.met"
                    }
#line 456 "chopb.met"
#line 456 "chopb.met"
#line 456 "chopb.met"
                } else {
#line 456 "chopb.met"
#line 459 "chopb.met"
#line 460 "chopb.met"
                    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 460 "chopb.met"
                    if (  !SEE_TOKEN( PFER,")") || !(CommTerm(),1)) {
#line 460 "chopb.met"
                        MulFreeTree(5,_addlist1,expTree,list,result,statTree);
                        TOKEN_EXIT(primary_expression_exit,")")
#line 460 "chopb.met"
                    } else {
#line 460 "chopb.met"
                        tokenAhead = 0 ;
#line 460 "chopb.met"
                    }
#line 460 "chopb.met"
#line 461 "chopb.met"
                    {
#line 461 "chopb.met"
                        PPTREE _ptRes0=0;
#line 461 "chopb.met"
                        _ptRes0= MakeTree(NIL, 0);
#line 461 "chopb.met"
                        expTree=_ptRes0;
#line 461 "chopb.met"
                    }
#line 461 "chopb.met"
#line 461 "chopb.met"
                }
#line 461 "chopb.met"
#line 463 "chopb.met"
                {
#line 463 "chopb.met"
                    _retValue = expTree ;
#line 463 "chopb.met"
                    goto primary_expression_ret;
#line 463 "chopb.met"
                    
#line 463 "chopb.met"
                }
#line 463 "chopb.met"
#line 463 "chopb.met"
                inMakeTree =  _oldinMakeTree;
#line 463 "chopb.met"
            }
#line 463 "chopb.met"
            break;
#line 463 "chopb.met"
#line 465 "chopb.met"
        case OPERATOR : 
#line 465 "chopb.met"
#line 465 "chopb.met"
            {
#line 465 "chopb.met"
                PPTREE _ptTree0=0;
#line 465 "chopb.met"
                if ( (_ptTree0=NQUICK_CALL(_Tak(operator_function_name)(error_free), 107, chopb))== (PPTREE) -1 ) {
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
            break;
#line 465 "chopb.met"
#line 466 "chopb.met"
        case TILD : 
#line 466 "chopb.met"
#line 466 "chopb.met"
            {
#line 466 "chopb.met"
                PPTREE _ptTree0=0;
#line 466 "chopb.met"
                if ( (_ptTree0=NQUICK_CALL(_Tak(qualified_name)(error_free), 120, chopb))== (PPTREE) -1 ) {
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
        case META : 
#line 467 "chopb.met"
#line 468 "chopb.met"
#line 469 "chopb.met"
            {
#line 469 "chopb.met"
                PPTREE _ptTree0=0;
#line 469 "chopb.met"
                {
#line 469 "chopb.met"
                    PPTREE _ptTree1=0,_ptRes1=0;
#line 469 "chopb.met"
                    _ptRes1= MakeTree(META, 1);
#line 469 "chopb.met"
                    (tokenAhead == 7|| (LexMeta(),TRACE_LEX(1)));
#line 469 "chopb.met"
                    if ( ! TERM_OR_META(META,"META") || !(BUILD_TERM_META(_ptTree1))) {
#line 469 "chopb.met"
                        MulFreeTree(8,_ptRes1,_ptTree1,_ptTree0,_addlist1,expTree,list,result,statTree);
                        TOKEN_EXIT(primary_expression_exit,"META")
#line 469 "chopb.met"
                    } else {
#line 469 "chopb.met"
                        tokenAhead = 0 ;
#line 469 "chopb.met"
                    }
#line 469 "chopb.met"
                    ReplaceTree(_ptRes1, 1, _ptTree1);
#line 469 "chopb.met"
                    _ptTree0=_ptRes1;
#line 469 "chopb.met"
                }
#line 469 "chopb.met"
                _retValue =_ptTree0;
#line 469 "chopb.met"
                goto primary_expression_ret;
#line 469 "chopb.met"
            }
#line 469 "chopb.met"
#line 469 "chopb.met"
            break;
#line 469 "chopb.met"
#line 471 "chopb.met"
        case IDENT : 
#line 471 "chopb.met"
#line 472 "chopb.met"
            if ((tokenAhead == 12|| (PushFunction(),TRACE_LEX(1)))&&TERM_OR_META(PUSH_FUNCTION,"PUSH_FUNCTION") && !(tokenAhead = 0) && ( BUILD_TERM_META(result))) {
#line 472 "chopb.met"
#line 473 "chopb.met"
#line 474 "chopb.met"
                (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 474 "chopb.met"
                if (  !SEE_TOKEN( POUV,"(") || !(CommTerm(),1)) {
#line 474 "chopb.met"
                    MulFreeTree(5,_addlist1,expTree,list,result,statTree);
                    TOKEN_EXIT(primary_expression_exit,"(")
#line 474 "chopb.met"
                } else {
#line 474 "chopb.met"
                    tokenAhead = 0 ;
#line 474 "chopb.met"
                }
#line 474 "chopb.met"
#line 475 "chopb.met"
                {
#line 475 "chopb.met"
                    PPTREE _ptTree0=0;
#line 475 "chopb.met"
                    {
#line 475 "chopb.met"
                        PPTREE _ptTree1=0,_ptRes1=0;
#line 475 "chopb.met"
                        _ptRes1= MakeTree(IDENT, 1);
#line 475 "chopb.met"
                        (tokenAhead == 11|| (PushArgument(),TRACE_LEX(1)));
#line 475 "chopb.met"
                        if ( ! TERM_OR_META(PUSH_ARGUMENT,"PUSH_ARGUMENT") || !(BUILD_TERM_META(_ptTree1))) {
#line 475 "chopb.met"
                            MulFreeTree(8,_ptRes1,_ptTree1,_ptTree0,_addlist1,expTree,list,result,statTree);
                            TOKEN_EXIT(primary_expression_exit,"PUSH_ARGUMENT")
#line 475 "chopb.met"
                        } else {
#line 475 "chopb.met"
                            tokenAhead = 0 ;
#line 475 "chopb.met"
                        }
#line 475 "chopb.met"
                        ReplaceTree(_ptRes1, 1, _ptTree1);
#line 475 "chopb.met"
                        _ptTree0=_ptRes1;
#line 475 "chopb.met"
                    }
#line 475 "chopb.met"
                    list =AddList(list , _ptTree0);
#line 475 "chopb.met"
                }
#line 475 "chopb.met"
#line 476 "chopb.met"
                (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 476 "chopb.met"
                if (  !SEE_TOKEN( VIRG,",") || !(CommTerm(),1)) {
#line 476 "chopb.met"
                    MulFreeTree(5,_addlist1,expTree,list,result,statTree);
                    TOKEN_EXIT(primary_expression_exit,",")
#line 476 "chopb.met"
                } else {
#line 476 "chopb.met"
                    tokenAhead = 0 ;
#line 476 "chopb.met"
                }
#line 476 "chopb.met"
#line 477 "chopb.met"
                {
#line 477 "chopb.met"
                    PPTREE _ptTree0=0;
#line 477 "chopb.met"
                    if ( (_ptTree0=NQUICK_CALL(_Tak(expression)(error_free), 65, chopb))== (PPTREE) -1 ) {
#line 477 "chopb.met"
                        MulFreeTree(6,_ptTree0,_addlist1,expTree,list,result,statTree);
                        PROG_EXIT(primary_expression_exit,"primary_expression")
#line 477 "chopb.met"
                    }
#line 477 "chopb.met"
                    list =AddList(list , _ptTree0);
#line 477 "chopb.met"
                }
#line 477 "chopb.met"
#line 478 "chopb.met"
                {
#line 478 "chopb.met"
                    PPTREE _ptRes0=0;
#line 478 "chopb.met"
                    _ptRes0= MakeTree(EXP_SEQ, 1);
#line 478 "chopb.met"
                    ReplaceTree(_ptRes0, 1, list );
#line 478 "chopb.met"
                    expTree=_ptRes0;
#line 478 "chopb.met"
                }
#line 478 "chopb.met"
#line 479 "chopb.met"
                (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 479 "chopb.met"
                if (  !SEE_TOKEN( PFER,")") || !(CommTerm(),1)) {
#line 479 "chopb.met"
                    MulFreeTree(5,_addlist1,expTree,list,result,statTree);
                    TOKEN_EXIT(primary_expression_exit,")")
#line 479 "chopb.met"
                } else {
#line 479 "chopb.met"
                    tokenAhead = 0 ;
#line 479 "chopb.met"
                }
#line 479 "chopb.met"
#line 480 "chopb.met"
                {
#line 480 "chopb.met"
                    PPTREE _ptTree0=0;
#line 480 "chopb.met"
                    {
#line 480 "chopb.met"
                        PPTREE _ptTree1=0,_ptRes1=0;
#line 480 "chopb.met"
                        _ptRes1= MakeTree(EXP_LIST, 2);
#line 480 "chopb.met"
                        {
#line 480 "chopb.met"
                            PPTREE _ptRes2=0;
#line 480 "chopb.met"
                            _ptRes2= MakeTree(IDENT, 1);
#line 480 "chopb.met"
                            ReplaceTree(_ptRes2, 1, result );
#line 480 "chopb.met"
                            _ptTree1=_ptRes2;
#line 480 "chopb.met"
                        }
#line 480 "chopb.met"
                        ReplaceTree(_ptRes1, 1, _ptTree1);
#line 480 "chopb.met"
                        ReplaceTree(_ptRes1, 2, expTree );
#line 480 "chopb.met"
                        _ptTree0=_ptRes1;
#line 480 "chopb.met"
                    }
#line 480 "chopb.met"
                    _retValue =_ptTree0;
#line 480 "chopb.met"
                    goto primary_expression_ret;
#line 480 "chopb.met"
                }
#line 480 "chopb.met"
#line 480 "chopb.met"
#line 480 "chopb.met"
            } else {
#line 480 "chopb.met"
#line 483 "chopb.met"
                {
#line 483 "chopb.met"
                    PPTREE _ptTree0=0;
#line 483 "chopb.met"
                    if ( (_ptTree0=NQUICK_CALL(_Tak(qualified_name)(error_free), 120, chopb))== (PPTREE) -1 ) {
#line 483 "chopb.met"
                        MulFreeTree(6,_ptTree0,_addlist1,expTree,list,result,statTree);
                        PROG_EXIT(primary_expression_exit,"primary_expression")
#line 483 "chopb.met"
                    }
#line 483 "chopb.met"
                    _retValue =_ptTree0;
#line 483 "chopb.met"
                    goto primary_expression_ret;
#line 483 "chopb.met"
                }
#line 483 "chopb.met"
            }
#line 483 "chopb.met"
            break;
#line 483 "chopb.met"
#line 484 "chopb.met"
        case STRING : 
#line 484 "chopb.met"
#line 484 "chopb.met"
            {
#line 484 "chopb.met"
                PPTREE _ptTree0=0;
#line 484 "chopb.met"
                if ( (_ptTree0=NQUICK_CALL(_Tak(string_list)(error_free), 145, chopb))== (PPTREE) -1 ) {
#line 484 "chopb.met"
                    MulFreeTree(6,_ptTree0,_addlist1,expTree,list,result,statTree);
                    PROG_EXIT(primary_expression_exit,"primary_expression")
#line 484 "chopb.met"
                }
#line 484 "chopb.met"
                _retValue =_ptTree0;
#line 484 "chopb.met"
                goto primary_expression_ret;
#line 484 "chopb.met"
            }
#line 484 "chopb.met"
            break;
#line 484 "chopb.met"
#line 485 "chopb.met"
        case VA_ARG : 
#line 485 "chopb.met"
            tokenAhead = 0 ;
#line 485 "chopb.met"
            CommTerm();
#line 485 "chopb.met"
#line 486 "chopb.met"
#line 487 "chopb.met"
            (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 487 "chopb.met"
            if (  !SEE_TOKEN( POUV,"(") || !(CommTerm(),1)) {
#line 487 "chopb.met"
                MulFreeTree(5,_addlist1,expTree,list,result,statTree);
                TOKEN_EXIT(primary_expression_exit,"(")
#line 487 "chopb.met"
            } else {
#line 487 "chopb.met"
                tokenAhead = 0 ;
#line 487 "chopb.met"
            }
#line 487 "chopb.met"
#line 488 "chopb.met"
            {
#line 488 "chopb.met"
                PPTREE _ptTree0=0,_ptRes0=0;
#line 488 "chopb.met"
                _ptRes0= MakeTree(VA_ARG, 2);
#line 488 "chopb.met"
                if ( (_ptTree0=NQUICK_CALL(_Tak(assignment_expression)(error_free), 19, chopb))== (PPTREE) -1 ) {
#line 488 "chopb.met"
                    MulFreeTree(7,_ptRes0,_ptTree0,_addlist1,expTree,list,result,statTree);
                    PROG_EXIT(primary_expression_exit,"primary_expression")
#line 488 "chopb.met"
                }
#line 488 "chopb.met"
                ReplaceTree(_ptRes0, 1, _ptTree0);
#line 488 "chopb.met"
                expTree=_ptRes0;
#line 488 "chopb.met"
            }
#line 488 "chopb.met"
#line 489 "chopb.met"
            (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 489 "chopb.met"
            if (  !SEE_TOKEN( VIRG,",") || !(CommTerm(),1)) {
#line 489 "chopb.met"
                MulFreeTree(5,_addlist1,expTree,list,result,statTree);
                TOKEN_EXIT(primary_expression_exit,",")
#line 489 "chopb.met"
            } else {
#line 489 "chopb.met"
                tokenAhead = 0 ;
#line 489 "chopb.met"
            }
#line 489 "chopb.met"
#line 490 "chopb.met"
            {
#line 490 "chopb.met"
                PPTREE _ptTree0=0;
#line 490 "chopb.met"
                if ( (_ptTree0=NQUICK_CALL(_Tak(type_name)(error_free), 151, chopb))== (PPTREE) -1 ) {
#line 490 "chopb.met"
                    MulFreeTree(6,_ptTree0,_addlist1,expTree,list,result,statTree);
                    PROG_EXIT(primary_expression_exit,"primary_expression")
#line 490 "chopb.met"
                }
#line 490 "chopb.met"
                ReplaceTree(expTree , 2 , _ptTree0);
#line 490 "chopb.met"
            }
#line 490 "chopb.met"
#line 491 "chopb.met"
            (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 491 "chopb.met"
            if (  !SEE_TOKEN( PFER,")") || !(CommTerm(),1)) {
#line 491 "chopb.met"
                MulFreeTree(5,_addlist1,expTree,list,result,statTree);
                TOKEN_EXIT(primary_expression_exit,")")
#line 491 "chopb.met"
            } else {
#line 491 "chopb.met"
                tokenAhead = 0 ;
#line 491 "chopb.met"
            }
#line 491 "chopb.met"
#line 492 "chopb.met"
            {
#line 492 "chopb.met"
                _retValue = expTree ;
#line 492 "chopb.met"
                goto primary_expression_ret;
#line 492 "chopb.met"
                
#line 492 "chopb.met"
            }
#line 492 "chopb.met"
#line 492 "chopb.met"
            break;
#line 492 "chopb.met"
#line 494 "chopb.met"
        default : 
#line 494 "chopb.met"
#line 494 "chopb.met"
            {
#line 494 "chopb.met"
                PPTREE _ptTree0=0;
#line 494 "chopb.met"
                if ( (_ptTree0=NQUICK_CALL(_Tak(constan)(error_free), 34, chopb))== (PPTREE) -1 ) {
#line 494 "chopb.met"
                    MulFreeTree(6,_ptTree0,_addlist1,expTree,list,result,statTree);
                    PROG_EXIT(primary_expression_exit,"primary_expression")
#line 494 "chopb.met"
                }
#line 494 "chopb.met"
                _retValue =_ptTree0;
#line 494 "chopb.met"
                goto primary_expression_ret;
#line 494 "chopb.met"
            }
#line 494 "chopb.met"
            break;
#line 494 "chopb.met"
    }
#line 494 "chopb.met"
#line 494 "chopb.met"
#line 495 "chopb.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 495 "chopb.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 495 "chopb.met"
parse =  _oldparse;
#line 495 "chopb.met"
inMakeTree =  _oldinMakeTree;
#line 495 "chopb.met"
return((PPTREE) 0);
#line 495 "chopb.met"

#line 495 "chopb.met"
primary_expression_exit :
#line 495 "chopb.met"

#line 495 "chopb.met"
    _Debug = TRACE_RULE("primary_expression",TRACE_EXIT,(PPTREE)0);
#line 495 "chopb.met"
    _funcLevel--;
#line 495 "chopb.met"
    parse =  _oldparse;
#line 495 "chopb.met"
    inMakeTree =  _oldinMakeTree;
#line 495 "chopb.met"
    return((PPTREE) -1) ;
#line 495 "chopb.met"

#line 495 "chopb.met"
primary_expression_ret :
#line 495 "chopb.met"
    
#line 495 "chopb.met"
    _Debug = TRACE_RULE("primary_expression",TRACE_RETURN,_retValue);
#line 495 "chopb.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 495 "chopb.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 495 "chopb.met"
    parse =  _oldparse;
#line 495 "chopb.met"
    inMakeTree =  _oldinMakeTree;
#line 495 "chopb.met"
    return _retValue ;
#line 495 "chopb.met"
}
#line 495 "chopb.met"

#line 495 "chopb.met"
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
        if ( (_ptTree0=NQUICK_CALL(_Tak(program)(error_free), 116, chopb))== (PPTREE) -1 ) {
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
#line 299 "chopb.met"
PPTREE chopb::relational_expression ( int error_free)
#line 299 "chopb.met"
{
#line 299 "chopb.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 299 "chopb.met"
    int _value,_nbPre = 0 ;
#line 299 "chopb.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 299 "chopb.met"
    int _Debug = TRACE_RULE("relational_expression",TRACE_ENTER,(PPTREE)0);
#line 299 "chopb.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 299 "chopb.met"
#line 299 "chopb.met"
    PPTREE expTree = (PPTREE) 0;
#line 299 "chopb.met"
#line 301 "chopb.met"
    if ( (expTree=NQUICK_CALL(_Tak(shift_expression)(error_free), 131, chopb))== (PPTREE) -1 ) {
#line 301 "chopb.met"
        MulFreeTree(1,expTree);
        PROG_EXIT(relational_expression_exit,"relational_expression")
#line 301 "chopb.met"
    }
#line 301 "chopb.met"
#line 302 "chopb.met"
    while (((((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN( INFEEGAL,"<=")) || 
#line 302 "chopb.met"
            ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN( SUPEEGAL,">="))) || 
#line 302 "chopb.met"
           ((((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN( SUPE,">")) && 
#line 302 "chopb.met"
            (! (inMakeTree))))) || 
#line 302 "chopb.met"
          ((((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN( INFE,"<")) && 
#line 302 "chopb.met"
           (! (((((tokenAhead == 18|| (formatBeg(),TRACE_LEX(1)))&&SEE_TOKEN( SPACE_BEG,"SPACE_BEG")) || 
#line 302 "chopb.met"
                ((tokenAhead == 18|| (formatBeg(),TRACE_LEX(1)))&&SEE_TOKEN( TAB_BEG,"TAB_BEG"))) || 
#line 302 "chopb.met"
               ((tokenAhead == 18|| (formatBeg(),TRACE_LEX(1)))&&SEE_TOKEN( NL_BEG,"NL_BEG")))))))) { 
#line 302 "chopb.met"
#line 307 "chopb.met"
        (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 307 "chopb.met"
        switch( lexEl.Value) {
#line 307 "chopb.met"
#line 308 "chopb.met"
            case INFEEGAL : 
#line 308 "chopb.met"
                tokenAhead = 0 ;
#line 308 "chopb.met"
                CommTerm();
#line 308 "chopb.met"
#line 308 "chopb.met"
                {
#line 308 "chopb.met"
                    PPTREE _ptTree0=0,_ptRes0=0;
#line 308 "chopb.met"
                    _ptRes0= MakeTree(LEQU, 2);
#line 308 "chopb.met"
                    ReplaceTree(_ptRes0, 1, expTree );
#line 308 "chopb.met"
                    if ( (_ptTree0=NQUICK_CALL(_Tak(shift_expression)(error_free), 131, chopb))== (PPTREE) -1 ) {
#line 308 "chopb.met"
                        MulFreeTree(3,_ptRes0,_ptTree0,expTree);
                        PROG_EXIT(relational_expression_exit,"relational_expression")
#line 308 "chopb.met"
                    }
#line 308 "chopb.met"
                    ReplaceTree(_ptRes0, 2, _ptTree0);
#line 308 "chopb.met"
                    expTree=_ptRes0;
#line 308 "chopb.met"
                }
#line 308 "chopb.met"
                break;
#line 308 "chopb.met"
#line 310 "chopb.met"
            case SUPEEGAL : 
#line 310 "chopb.met"
                tokenAhead = 0 ;
#line 310 "chopb.met"
                CommTerm();
#line 310 "chopb.met"
#line 310 "chopb.met"
                {
#line 310 "chopb.met"
                    PPTREE _ptTree0=0,_ptRes0=0;
#line 310 "chopb.met"
                    _ptRes0= MakeTree(GEQU, 2);
#line 310 "chopb.met"
                    ReplaceTree(_ptRes0, 1, expTree );
#line 310 "chopb.met"
                    if ( (_ptTree0=NQUICK_CALL(_Tak(shift_expression)(error_free), 131, chopb))== (PPTREE) -1 ) {
#line 310 "chopb.met"
                        MulFreeTree(3,_ptRes0,_ptTree0,expTree);
                        PROG_EXIT(relational_expression_exit,"relational_expression")
#line 310 "chopb.met"
                    }
#line 310 "chopb.met"
                    ReplaceTree(_ptRes0, 2, _ptTree0);
#line 310 "chopb.met"
                    expTree=_ptRes0;
#line 310 "chopb.met"
                }
#line 310 "chopb.met"
                break;
#line 310 "chopb.met"
#line 312 "chopb.met"
            case SUPE : 
#line 312 "chopb.met"
                tokenAhead = 0 ;
#line 312 "chopb.met"
                CommTerm();
#line 312 "chopb.met"
#line 312 "chopb.met"
                {
#line 312 "chopb.met"
                    PPTREE _ptTree0=0,_ptRes0=0;
#line 312 "chopb.met"
                    _ptRes0= MakeTree(GT, 2);
#line 312 "chopb.met"
                    ReplaceTree(_ptRes0, 1, expTree );
#line 312 "chopb.met"
                    if ( (_ptTree0=NQUICK_CALL(_Tak(shift_expression)(error_free), 131, chopb))== (PPTREE) -1 ) {
#line 312 "chopb.met"
                        MulFreeTree(3,_ptRes0,_ptTree0,expTree);
                        PROG_EXIT(relational_expression_exit,"relational_expression")
#line 312 "chopb.met"
                    }
#line 312 "chopb.met"
                    ReplaceTree(_ptRes0, 2, _ptTree0);
#line 312 "chopb.met"
                    expTree=_ptRes0;
#line 312 "chopb.met"
                }
#line 312 "chopb.met"
                break;
#line 312 "chopb.met"
#line 313 "chopb.met"
            case INFE : 
#line 313 "chopb.met"
                tokenAhead = 0 ;
#line 313 "chopb.met"
                CommTerm();
#line 313 "chopb.met"
#line 313 "chopb.met"
                {
#line 313 "chopb.met"
                    PPTREE _ptTree0=0,_ptRes0=0;
#line 313 "chopb.met"
                    _ptRes0= MakeTree(LT, 2);
#line 313 "chopb.met"
                    ReplaceTree(_ptRes0, 1, expTree );
#line 313 "chopb.met"
                    if ( (_ptTree0=NQUICK_CALL(_Tak(shift_expression)(error_free), 131, chopb))== (PPTREE) -1 ) {
#line 313 "chopb.met"
                        MulFreeTree(3,_ptRes0,_ptTree0,expTree);
                        PROG_EXIT(relational_expression_exit,"relational_expression")
#line 313 "chopb.met"
                    }
#line 313 "chopb.met"
                    ReplaceTree(_ptRes0, 2, _ptTree0);
#line 313 "chopb.met"
                    expTree=_ptRes0;
#line 313 "chopb.met"
                }
#line 313 "chopb.met"
                break;
#line 313 "chopb.met"
            default :
#line 313 "chopb.met"
                MulFreeTree(1,expTree);
                CASE_EXIT(relational_expression_exit,"either <= or >= or > or <")
#line 313 "chopb.met"
                break;
#line 313 "chopb.met"
        }
#line 313 "chopb.met"
    } 
#line 313 "chopb.met"
#line 315 "chopb.met"
    {
#line 315 "chopb.met"
        _retValue = expTree ;
#line 315 "chopb.met"
        goto relational_expression_ret;
#line 315 "chopb.met"
        
#line 315 "chopb.met"
    }
#line 315 "chopb.met"
#line 315 "chopb.met"
#line 315 "chopb.met"

#line 316 "chopb.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 316 "chopb.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 316 "chopb.met"
return((PPTREE) 0);
#line 316 "chopb.met"

#line 316 "chopb.met"
relational_expression_exit :
#line 316 "chopb.met"

#line 316 "chopb.met"
    _Debug = TRACE_RULE("relational_expression",TRACE_EXIT,(PPTREE)0);
#line 316 "chopb.met"
    _funcLevel--;
#line 316 "chopb.met"
    return((PPTREE) -1) ;
#line 316 "chopb.met"

#line 316 "chopb.met"
relational_expression_ret :
#line 316 "chopb.met"
    
#line 316 "chopb.met"
    _Debug = TRACE_RULE("relational_expression",TRACE_RETURN,_retValue);
#line 316 "chopb.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 316 "chopb.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 316 "chopb.met"
    return _retValue ;
#line 316 "chopb.met"
}
#line 316 "chopb.met"

#line 316 "chopb.met"
#line 318 "chopb.met"
PPTREE chopb::shift_expression ( int error_free)
#line 318 "chopb.met"
{
#line 318 "chopb.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 318 "chopb.met"
    int _value,_nbPre = 0 ;
#line 318 "chopb.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 318 "chopb.met"
    int _Debug = TRACE_RULE("shift_expression",TRACE_ENTER,(PPTREE)0);
#line 318 "chopb.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 318 "chopb.met"
#line 318 "chopb.met"
    PPTREE expTree = (PPTREE) 0;
#line 318 "chopb.met"
#line 320 "chopb.met"
    if ( (expTree=NQUICK_CALL(_Tak(additive_expression)(error_free), 3, chopb))== (PPTREE) -1 ) {
#line 320 "chopb.met"
        MulFreeTree(1,expTree);
        PROG_EXIT(shift_expression_exit,"shift_expression")
#line 320 "chopb.met"
    }
#line 320 "chopb.met"
#line 321 "chopb.met"
    while (((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN( INFEINFE,"<<")) || 
#line 321 "chopb.met"
          (((! (inMakeTree)) && 
#line 321 "chopb.met"
           ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN( SUPESUPE,">>"))))) { 
#line 321 "chopb.met"
#line 322 "chopb.met"
        (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 322 "chopb.met"
        switch( lexEl.Value) {
#line 322 "chopb.met"
#line 323 "chopb.met"
            case INFEINFE : 
#line 323 "chopb.met"
                tokenAhead = 0 ;
#line 323 "chopb.met"
                CommTerm();
#line 323 "chopb.met"
#line 323 "chopb.met"
                {
#line 323 "chopb.met"
                    PPTREE _ptTree0=0,_ptRes0=0;
#line 323 "chopb.met"
                    _ptRes0= MakeTree(LSHI, 2);
#line 323 "chopb.met"
                    ReplaceTree(_ptRes0, 1, expTree );
#line 323 "chopb.met"
                    if ( (_ptTree0=NQUICK_CALL(_Tak(additive_expression)(error_free), 3, chopb))== (PPTREE) -1 ) {
#line 323 "chopb.met"
                        MulFreeTree(3,_ptRes0,_ptTree0,expTree);
                        PROG_EXIT(shift_expression_exit,"shift_expression")
#line 323 "chopb.met"
                    }
#line 323 "chopb.met"
                    ReplaceTree(_ptRes0, 2, _ptTree0);
#line 323 "chopb.met"
                    expTree=_ptRes0;
#line 323 "chopb.met"
                }
#line 323 "chopb.met"
                break;
#line 323 "chopb.met"
#line 325 "chopb.met"
            case SUPESUPE : 
#line 325 "chopb.met"
                tokenAhead = 0 ;
#line 325 "chopb.met"
                CommTerm();
#line 325 "chopb.met"
#line 325 "chopb.met"
                {
#line 325 "chopb.met"
                    PPTREE _ptTree0=0,_ptRes0=0;
#line 325 "chopb.met"
                    _ptRes0= MakeTree(RSHI, 2);
#line 325 "chopb.met"
                    ReplaceTree(_ptRes0, 1, expTree );
#line 325 "chopb.met"
                    if ( (_ptTree0=NQUICK_CALL(_Tak(additive_expression)(error_free), 3, chopb))== (PPTREE) -1 ) {
#line 325 "chopb.met"
                        MulFreeTree(3,_ptRes0,_ptTree0,expTree);
                        PROG_EXIT(shift_expression_exit,"shift_expression")
#line 325 "chopb.met"
                    }
#line 325 "chopb.met"
                    ReplaceTree(_ptRes0, 2, _ptTree0);
#line 325 "chopb.met"
                    expTree=_ptRes0;
#line 325 "chopb.met"
                }
#line 325 "chopb.met"
                break;
#line 325 "chopb.met"
            default :
#line 325 "chopb.met"
                MulFreeTree(1,expTree);
                CASE_EXIT(shift_expression_exit,"either << or >>")
#line 325 "chopb.met"
                break;
#line 325 "chopb.met"
        }
#line 325 "chopb.met"
    } 
#line 325 "chopb.met"
#line 328 "chopb.met"
    {
#line 328 "chopb.met"
        _retValue = expTree ;
#line 328 "chopb.met"
        goto shift_expression_ret;
#line 328 "chopb.met"
        
#line 328 "chopb.met"
    }
#line 328 "chopb.met"
#line 328 "chopb.met"
#line 328 "chopb.met"

#line 329 "chopb.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 329 "chopb.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 329 "chopb.met"
return((PPTREE) 0);
#line 329 "chopb.met"

#line 329 "chopb.met"
shift_expression_exit :
#line 329 "chopb.met"

#line 329 "chopb.met"
    _Debug = TRACE_RULE("shift_expression",TRACE_EXIT,(PPTREE)0);
#line 329 "chopb.met"
    _funcLevel--;
#line 329 "chopb.met"
    return((PPTREE) -1) ;
#line 329 "chopb.met"

#line 329 "chopb.met"
shift_expression_ret :
#line 329 "chopb.met"
    
#line 329 "chopb.met"
    _Debug = TRACE_RULE("shift_expression",TRACE_RETURN,_retValue);
#line 329 "chopb.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 329 "chopb.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 329 "chopb.met"
    return _retValue ;
#line 329 "chopb.met"
}
#line 329 "chopb.met"

#line 329 "chopb.met"
