/*************************************************************************/
/*                                                                       */
/*        Produced by MetaGen version 2.0  -    1989-2006                 */
/*       Syntaxic Analyzer Meta Generator developped by                  */
/*                  Eric Lavillonniere                                   */
/*                                                                       */
/*************************************************************************/

#include "token.h"
#include "chopb.h"


#line 311 "chopb.met"
PPTREE chopb::shift_expression ( int error_free)
#line 311 "chopb.met"
{
#line 311 "chopb.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 311 "chopb.met"
    int _value,_nbPre = 0 ;
#line 311 "chopb.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 311 "chopb.met"
    int _Debug = TRACE_RULE("shift_expression",TRACE_ENTER,(PPTREE)0);
#line 311 "chopb.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 311 "chopb.met"
#line 311 "chopb.met"
    PPTREE expTree = (PPTREE) 0;
#line 311 "chopb.met"
#line 313 "chopb.met"
    if ( (expTree=NQUICK_CALL(_Tak(additive_expression)(error_free), 3, chopb))== (PPTREE) -1 ) {
#line 313 "chopb.met"
        MulFreeTree(1,expTree);
        PROG_EXIT(shift_expression_exit,"shift_expression")
#line 313 "chopb.met"
    }
#line 313 "chopb.met"
#line 314 "chopb.met"
    while (((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN( INFEINFE,"<<")) || 
#line 314 "chopb.met"
          (((! (inMakeTree)) && 
#line 314 "chopb.met"
           ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN( SUPESUPE,">>"))))) { 
#line 314 "chopb.met"
#line 315 "chopb.met"
        (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 315 "chopb.met"
        switch( lexEl.Value) {
#line 315 "chopb.met"
#line 316 "chopb.met"
            case INFEINFE : 
#line 316 "chopb.met"
                tokenAhead = 0 ;
#line 316 "chopb.met"
                CommTerm();
#line 316 "chopb.met"
#line 316 "chopb.met"
                {
#line 316 "chopb.met"
                    PPTREE _ptTree0=0,_ptRes0=0;
#line 316 "chopb.met"
                    _ptRes0= MakeTree(LSHI, 2);
#line 316 "chopb.met"
                    ReplaceTree(_ptRes0, 1, expTree );
#line 316 "chopb.met"
                    if ( (_ptTree0=NQUICK_CALL(_Tak(additive_expression)(error_free), 3, chopb))== (PPTREE) -1 ) {
#line 316 "chopb.met"
                        MulFreeTree(3,_ptRes0,_ptTree0,expTree);
                        PROG_EXIT(shift_expression_exit,"shift_expression")
#line 316 "chopb.met"
                    }
#line 316 "chopb.met"
                    ReplaceTree(_ptRes0, 2, _ptTree0);
#line 316 "chopb.met"
                    expTree=_ptRes0;
#line 316 "chopb.met"
                }
#line 316 "chopb.met"
                break;
#line 316 "chopb.met"
#line 317 "chopb.met"
            case SUPESUPE : 
#line 317 "chopb.met"
                tokenAhead = 0 ;
#line 317 "chopb.met"
                CommTerm();
#line 317 "chopb.met"
#line 317 "chopb.met"
                {
#line 317 "chopb.met"
                    PPTREE _ptTree0=0,_ptRes0=0;
#line 317 "chopb.met"
                    _ptRes0= MakeTree(RSHI, 2);
#line 317 "chopb.met"
                    ReplaceTree(_ptRes0, 1, expTree );
#line 317 "chopb.met"
                    if ( (_ptTree0=NQUICK_CALL(_Tak(additive_expression)(error_free), 3, chopb))== (PPTREE) -1 ) {
#line 317 "chopb.met"
                        MulFreeTree(3,_ptRes0,_ptTree0,expTree);
                        PROG_EXIT(shift_expression_exit,"shift_expression")
#line 317 "chopb.met"
                    }
#line 317 "chopb.met"
                    ReplaceTree(_ptRes0, 2, _ptTree0);
#line 317 "chopb.met"
                    expTree=_ptRes0;
#line 317 "chopb.met"
                }
#line 317 "chopb.met"
                break;
#line 317 "chopb.met"
            default :
#line 317 "chopb.met"
                MulFreeTree(1,expTree);
                CASE_EXIT(shift_expression_exit,"either << or >>")
#line 317 "chopb.met"
                break;
#line 317 "chopb.met"
        }
#line 317 "chopb.met"
    } 
#line 317 "chopb.met"
#line 319 "chopb.met"
    {
#line 319 "chopb.met"
        _retValue = expTree ;
#line 319 "chopb.met"
        goto shift_expression_ret;
#line 319 "chopb.met"
        
#line 319 "chopb.met"
    }
#line 319 "chopb.met"
#line 319 "chopb.met"
#line 319 "chopb.met"

#line 320 "chopb.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 320 "chopb.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 320 "chopb.met"
return((PPTREE) 0);
#line 320 "chopb.met"

#line 320 "chopb.met"
shift_expression_exit :
#line 320 "chopb.met"

#line 320 "chopb.met"
    _Debug = TRACE_RULE("shift_expression",TRACE_EXIT,(PPTREE)0);
#line 320 "chopb.met"
    _funcLevel--;
#line 320 "chopb.met"
    return((PPTREE) -1) ;
#line 320 "chopb.met"

#line 320 "chopb.met"
shift_expression_ret :
#line 320 "chopb.met"
    
#line 320 "chopb.met"
    _Debug = TRACE_RULE("shift_expression",TRACE_RETURN,_retValue);
#line 320 "chopb.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 320 "chopb.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 320 "chopb.met"
    return _retValue ;
#line 320 "chopb.met"
}
#line 320 "chopb.met"

#line 320 "chopb.met"
#line 481 "chopb.met"
PPTREE chopb::statement ( int error_free)
#line 481 "chopb.met"
{
#line 481 "chopb.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 481 "chopb.met"
    int _value,_nbPre = 0 ;
#line 481 "chopb.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 481 "chopb.met"
    int _Debug = TRACE_RULE("statement",TRACE_ENTER,(PPTREE)0);
#line 481 "chopb.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 481 "chopb.met"
#line 481 "chopb.met"
    PPTREE _addlist1 = (PPTREE) 0;
#line 481 "chopb.met"
#line 481 "chopb.met"
    PPTREE statTree = (PPTREE) 0,inter = (PPTREE) 0,list = (PPTREE) 0;
#line 481 "chopb.met"
#line 483 "chopb.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 483 "chopb.met"
    switch( lexEl.Value) {
#line 483 "chopb.met"
#line 486 "chopb.met"
        case ARRO : 
#line 486 "chopb.met"
            tokenAhead = 0 ;
#line 486 "chopb.met"
            CommTerm();
#line 486 "chopb.met"
#line 485 "chopb.met"
#line 486 "chopb.met"
            {
#line 486 "chopb.met"
                PPTREE _ptTree0=0,_ptRes0=0;
#line 486 "chopb.met"
                _ptRes0= MakeTree(ARRO, 1);
#line 486 "chopb.met"
                {
#line 486 "chopb.met"
                    PPTREE _ptTree1=0,_ptRes1=0;
#line 486 "chopb.met"
                    _ptRes1= MakeTree(IDENT, 1);
#line 486 "chopb.met"
                    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 486 "chopb.met"
                    if ( ! TERM_OR_META(IDENT,"IDENT") || !(BUILD_TERM_META(_ptTree1))) {
#line 486 "chopb.met"
                        MulFreeTree(8,_ptRes1,_ptTree1,_ptRes0,_ptTree0,_addlist1,inter,list,statTree);
                        TOKEN_EXIT(statement_exit,"IDENT")
#line 486 "chopb.met"
                    } else {
#line 486 "chopb.met"
                        tokenAhead = 0 ;
#line 486 "chopb.met"
                    }
#line 486 "chopb.met"
                    ReplaceTree(_ptRes1, 1, _ptTree1);
#line 486 "chopb.met"
                    _ptTree0=_ptRes1;
#line 486 "chopb.met"
                }
#line 486 "chopb.met"
                ReplaceTree(_ptRes0, 1, _ptTree0);
#line 486 "chopb.met"
                statTree=_ptRes0;
#line 486 "chopb.met"
            }
#line 486 "chopb.met"
#line 487 "chopb.met"
            if ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN(PVIR,";") && (tokenAhead = 0,CommTerm(),1)){
#line 487 "chopb.met"
#line 487 "chopb.met"
            }
#line 487 "chopb.met"
#line 487 "chopb.met"
            break;
#line 487 "chopb.met"
#line 492 "chopb.met"
        case AOUVAOUV : 
#line 492 "chopb.met"
            tokenAhead = 0 ;
#line 492 "chopb.met"
            CommTerm();
#line 492 "chopb.met"
#line 491 "chopb.met"
#line 492 "chopb.met"
            if ( (inter=NQUICK_CALL(_Tak(statement)(error_free), 146, chopb))== (PPTREE) -1 ) {
#line 492 "chopb.met"
                MulFreeTree(4,_addlist1,inter,list,statTree);
                PROG_EXIT(statement_exit,"statement")
#line 492 "chopb.met"
            }
#line 492 "chopb.met"
#line 492 "chopb.met"
            _addlist1 = list ;
#line 492 "chopb.met"
#line 493 "chopb.met"
            do {
#line 493 "chopb.met"
#line 494 "chopb.met"
                _addlist1 =AddList(_addlist1 ,inter );
#line 494 "chopb.met"
#line 494 "chopb.met"
                if (list){
#line 494 "chopb.met"
#line 494 "chopb.met"
                    _addlist1 = SonTree (_addlist1 ,2 );
#line 494 "chopb.met"
                } else {
#line 494 "chopb.met"
#line 494 "chopb.met"
                    list = _addlist1 ;
#line 494 "chopb.met"
                }
#line 494 "chopb.met"
#line 495 "chopb.met"
                if ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN(PVIR,";") && (tokenAhead = 0,CommTerm(),1)){
#line 495 "chopb.met"
#line 495 "chopb.met"
                }
#line 495 "chopb.met"
#line 495 "chopb.met"
#line 497 "chopb.met"
            } while ( !(! (NPUSH_CALL_AFF_VERIF(inter = ,_Tak(statement), 146, chopb)))) ;
#line 497 "chopb.met"
#line 498 "chopb.met"
            {
#line 498 "chopb.met"
                PPTREE _ptRes0=0;
#line 498 "chopb.met"
                _ptRes0= MakeTree(ALINEA, 1);
#line 498 "chopb.met"
                ReplaceTree(_ptRes0, 1, list );
#line 498 "chopb.met"
                statTree=_ptRes0;
#line 498 "chopb.met"
            }
#line 498 "chopb.met"
#line 499 "chopb.met"
            (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 499 "chopb.met"
            if (  !SEE_TOKEN( AFERAFER,"}}") || !(CommTerm(),1)) {
#line 499 "chopb.met"
                MulFreeTree(4,_addlist1,inter,list,statTree);
                TOKEN_EXIT(statement_exit,"}}")
#line 499 "chopb.met"
            } else {
#line 499 "chopb.met"
                tokenAhead = 0 ;
#line 499 "chopb.met"
            }
#line 499 "chopb.met"
#line 499 "chopb.met"
            break;
#line 499 "chopb.met"
#line 501 "chopb.met"
        case INFESEPASUPE : 
#line 501 "chopb.met"
            tokenAhead = 0 ;
#line 501 "chopb.met"
            CommTerm();
#line 501 "chopb.met"
#line 501 "chopb.met"
            {
#line 501 "chopb.met"
                PPTREE _ptRes0=0;
#line 501 "chopb.met"
                _ptRes0= MakeTree(SEP_AFTER, 0);
#line 501 "chopb.met"
                statTree=_ptRes0;
#line 501 "chopb.met"
            }
#line 501 "chopb.met"
            break;
#line 501 "chopb.met"
#line 502 "chopb.met"
        case INFESEPBSUPE : 
#line 502 "chopb.met"
            tokenAhead = 0 ;
#line 502 "chopb.met"
            CommTerm();
#line 502 "chopb.met"
#line 502 "chopb.met"
            {
#line 502 "chopb.met"
                PPTREE _ptRes0=0;
#line 502 "chopb.met"
                _ptRes0= MakeTree(SEP_BEFORE, 0);
#line 502 "chopb.met"
                statTree=_ptRes0;
#line 502 "chopb.met"
            }
#line 502 "chopb.met"
            break;
#line 502 "chopb.met"
#line 503 "chopb.met"
        case INFESEPOSUPE : 
#line 503 "chopb.met"
            tokenAhead = 0 ;
#line 503 "chopb.met"
            CommTerm();
#line 503 "chopb.met"
#line 503 "chopb.met"
            {
#line 503 "chopb.met"
                PPTREE _ptRes0=0;
#line 503 "chopb.met"
                _ptRes0= MakeTree(SEP_OMIT, 0);
#line 503 "chopb.met"
                statTree=_ptRes0;
#line 503 "chopb.met"
            }
#line 503 "chopb.met"
            break;
#line 503 "chopb.met"
#line 507 "chopb.met"
        case INFE : 
#line 507 "chopb.met"
#line 505 "chopb.met"
#line 506 "chopb.met"
            (tokenAhead == 18|| (formatBeg(),TRACE_LEX(1)));
#line 506 "chopb.met"
            switch( lexEl.Value) {
#line 506 "chopb.met"
#line 507 "chopb.met"
                case META : 
#line 507 "chopb.met"
                case SPACE_BEG : 
#line 507 "chopb.met"
                    tokenAhead = 0 ;
#line 507 "chopb.met"
                    CommTerm();
#line 507 "chopb.met"
#line 508 "chopb.met"
                    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 508 "chopb.met"
                    switch( lexEl.Value) {
#line 508 "chopb.met"
#line 509 "chopb.met"
                        case SUPE : 
#line 509 "chopb.met"
                            tokenAhead = 0 ;
#line 509 "chopb.met"
                            CommTerm();
#line 509 "chopb.met"
#line 509 "chopb.met"
                            {
#line 509 "chopb.met"
                                PPTREE _ptRes0=0;
#line 509 "chopb.met"
                                _ptRes0= MakeTree(SPACE, 1);
#line 509 "chopb.met"
                                statTree=_ptRes0;
#line 509 "chopb.met"
                            }
#line 509 "chopb.met"
                            break;
#line 509 "chopb.met"
#line 512 "chopb.met"
                        case VIRG : 
#line 512 "chopb.met"
                            tokenAhead = 0 ;
#line 512 "chopb.met"
                            CommTerm();
#line 512 "chopb.met"
#line 511 "chopb.met"
#line 512 "chopb.met"
                            {
#line 512 "chopb.met"
                                PPTREE _ptTree0=0,_ptRes0=0;
#line 512 "chopb.met"
                                _ptRes0= MakeTree(SPACE, 1);
#line 512 "chopb.met"
                                {
#line 512 "chopb.met"
                                    PPTREE _ptTree1=0,_ptRes1=0;
#line 512 "chopb.met"
                                    _ptRes1= MakeTree(INTEGER, 1);
#line 512 "chopb.met"
                                    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 512 "chopb.met"
                                    if ( ! TERM_OR_META(INTEGER,"INTEGER") || !(BUILD_TERM_META(_ptTree1))) {
#line 512 "chopb.met"
                                        MulFreeTree(8,_ptRes1,_ptTree1,_ptRes0,_ptTree0,_addlist1,inter,list,statTree);
                                        TOKEN_EXIT(statement_exit,"INTEGER")
#line 512 "chopb.met"
                                    } else {
#line 512 "chopb.met"
                                        tokenAhead = 0 ;
#line 512 "chopb.met"
                                    }
#line 512 "chopb.met"
                                    ReplaceTree(_ptRes1, 1, _ptTree1);
#line 512 "chopb.met"
                                    _ptTree0=_ptRes1;
#line 512 "chopb.met"
                                }
#line 512 "chopb.met"
                                ReplaceTree(_ptRes0, 1, _ptTree0);
#line 512 "chopb.met"
                                statTree=_ptRes0;
#line 512 "chopb.met"
                            }
#line 512 "chopb.met"
#line 513 "chopb.met"
                            (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 513 "chopb.met"
                            if (  !SEE_TOKEN( SUPE,">") || !(CommTerm(),1)) {
#line 513 "chopb.met"
                                MulFreeTree(4,_addlist1,inter,list,statTree);
                                TOKEN_EXIT(statement_exit,">")
#line 513 "chopb.met"
                            } else {
#line 513 "chopb.met"
                                tokenAhead = 0 ;
#line 513 "chopb.met"
                            }
#line 513 "chopb.met"
#line 513 "chopb.met"
                            break;
#line 513 "chopb.met"
                        default :
#line 513 "chopb.met"
                            MulFreeTree(4,_addlist1,inter,list,statTree);
                            CASE_EXIT(statement_exit,"either > or ,")
#line 513 "chopb.met"
                            break;
#line 513 "chopb.met"
                    }
#line 513 "chopb.met"
                    break;
#line 513 "chopb.met"
#line 516 "chopb.met"
                case TAB_BEG : 
#line 516 "chopb.met"
                    tokenAhead = 0 ;
#line 516 "chopb.met"
                    CommTerm();
#line 516 "chopb.met"
#line 517 "chopb.met"
                    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 517 "chopb.met"
                    switch( lexEl.Value) {
#line 517 "chopb.met"
#line 518 "chopb.met"
                        case SUPE : 
#line 518 "chopb.met"
                            tokenAhead = 0 ;
#line 518 "chopb.met"
                            CommTerm();
#line 518 "chopb.met"
#line 518 "chopb.met"
                            {
#line 518 "chopb.met"
                                PPTREE _ptRes0=0;
#line 518 "chopb.met"
                                _ptRes0= MakeTree(TAB, 1);
#line 518 "chopb.met"
                                statTree=_ptRes0;
#line 518 "chopb.met"
                            }
#line 518 "chopb.met"
                            break;
#line 518 "chopb.met"
#line 521 "chopb.met"
                        case VIRG : 
#line 521 "chopb.met"
                            tokenAhead = 0 ;
#line 521 "chopb.met"
                            CommTerm();
#line 521 "chopb.met"
#line 520 "chopb.met"
#line 521 "chopb.met"
                            {
#line 521 "chopb.met"
                                PPTREE _ptTree0=0,_ptRes0=0;
#line 521 "chopb.met"
                                _ptRes0= MakeTree(TAB, 1);
#line 521 "chopb.met"
                                {
#line 521 "chopb.met"
                                    PPTREE _ptTree1=0,_ptRes1=0;
#line 521 "chopb.met"
                                    _ptRes1= MakeTree(INTEGER, 1);
#line 521 "chopb.met"
                                    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 521 "chopb.met"
                                    if ( ! TERM_OR_META(INTEGER,"INTEGER") || !(BUILD_TERM_META(_ptTree1))) {
#line 521 "chopb.met"
                                        MulFreeTree(8,_ptRes1,_ptTree1,_ptRes0,_ptTree0,_addlist1,inter,list,statTree);
                                        TOKEN_EXIT(statement_exit,"INTEGER")
#line 521 "chopb.met"
                                    } else {
#line 521 "chopb.met"
                                        tokenAhead = 0 ;
#line 521 "chopb.met"
                                    }
#line 521 "chopb.met"
                                    ReplaceTree(_ptRes1, 1, _ptTree1);
#line 521 "chopb.met"
                                    _ptTree0=_ptRes1;
#line 521 "chopb.met"
                                }
#line 521 "chopb.met"
                                ReplaceTree(_ptRes0, 1, _ptTree0);
#line 521 "chopb.met"
                                statTree=_ptRes0;
#line 521 "chopb.met"
                            }
#line 521 "chopb.met"
#line 522 "chopb.met"
                            (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 522 "chopb.met"
                            if (  !SEE_TOKEN( SUPE,">") || !(CommTerm(),1)) {
#line 522 "chopb.met"
                                MulFreeTree(4,_addlist1,inter,list,statTree);
                                TOKEN_EXIT(statement_exit,">")
#line 522 "chopb.met"
                            } else {
#line 522 "chopb.met"
                                tokenAhead = 0 ;
#line 522 "chopb.met"
                            }
#line 522 "chopb.met"
#line 522 "chopb.met"
                            break;
#line 522 "chopb.met"
                        default :
#line 522 "chopb.met"
                            MulFreeTree(4,_addlist1,inter,list,statTree);
                            CASE_EXIT(statement_exit,"either > or ,")
#line 522 "chopb.met"
                            break;
#line 522 "chopb.met"
                    }
#line 522 "chopb.met"
                    break;
#line 522 "chopb.met"
#line 525 "chopb.met"
                case NL_BEG : 
#line 525 "chopb.met"
                    tokenAhead = 0 ;
#line 525 "chopb.met"
                    CommTerm();
#line 525 "chopb.met"
#line 526 "chopb.met"
                    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 526 "chopb.met"
                    switch( lexEl.Value) {
#line 526 "chopb.met"
#line 527 "chopb.met"
                        case SUPE : 
#line 527 "chopb.met"
                            tokenAhead = 0 ;
#line 527 "chopb.met"
                            CommTerm();
#line 527 "chopb.met"
#line 527 "chopb.met"
                            {
#line 527 "chopb.met"
                                PPTREE _ptRes0=0;
#line 527 "chopb.met"
                                _ptRes0= MakeTree(NEWLINE, 1);
#line 527 "chopb.met"
                                statTree=_ptRes0;
#line 527 "chopb.met"
                            }
#line 527 "chopb.met"
                            break;
#line 527 "chopb.met"
#line 530 "chopb.met"
                        case VIRG : 
#line 530 "chopb.met"
                            tokenAhead = 0 ;
#line 530 "chopb.met"
                            CommTerm();
#line 530 "chopb.met"
#line 529 "chopb.met"
#line 530 "chopb.met"
                            {
#line 530 "chopb.met"
                                PPTREE _ptTree0=0,_ptRes0=0;
#line 530 "chopb.met"
                                _ptRes0= MakeTree(NEWLINE, 1);
#line 530 "chopb.met"
                                {
#line 530 "chopb.met"
                                    PPTREE _ptTree1=0,_ptRes1=0;
#line 530 "chopb.met"
                                    _ptRes1= MakeTree(INTEGER, 1);
#line 530 "chopb.met"
                                    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 530 "chopb.met"
                                    if ( ! TERM_OR_META(INTEGER,"INTEGER") || !(BUILD_TERM_META(_ptTree1))) {
#line 530 "chopb.met"
                                        MulFreeTree(8,_ptRes1,_ptTree1,_ptRes0,_ptTree0,_addlist1,inter,list,statTree);
                                        TOKEN_EXIT(statement_exit,"INTEGER")
#line 530 "chopb.met"
                                    } else {
#line 530 "chopb.met"
                                        tokenAhead = 0 ;
#line 530 "chopb.met"
                                    }
#line 530 "chopb.met"
                                    ReplaceTree(_ptRes1, 1, _ptTree1);
#line 530 "chopb.met"
                                    _ptTree0=_ptRes1;
#line 530 "chopb.met"
                                }
#line 530 "chopb.met"
                                ReplaceTree(_ptRes0, 1, _ptTree0);
#line 530 "chopb.met"
                                statTree=_ptRes0;
#line 530 "chopb.met"
                            }
#line 530 "chopb.met"
#line 531 "chopb.met"
                            (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 531 "chopb.met"
                            if (  !SEE_TOKEN( SUPE,">") || !(CommTerm(),1)) {
#line 531 "chopb.met"
                                MulFreeTree(4,_addlist1,inter,list,statTree);
                                TOKEN_EXIT(statement_exit,">")
#line 531 "chopb.met"
                            } else {
#line 531 "chopb.met"
                                tokenAhead = 0 ;
#line 531 "chopb.met"
                            }
#line 531 "chopb.met"
#line 531 "chopb.met"
                            break;
#line 531 "chopb.met"
                        default :
#line 531 "chopb.met"
                            MulFreeTree(4,_addlist1,inter,list,statTree);
                            CASE_EXIT(statement_exit,"either > or ,")
#line 531 "chopb.met"
                            break;
#line 531 "chopb.met"
                    }
#line 531 "chopb.met"
                    break;
#line 531 "chopb.met"
                default :
#line 531 "chopb.met"
                    MulFreeTree(4,_addlist1,inter,list,statTree);
                    CASE_EXIT(statement_exit,"either SPACE_BEG or TAB_BEG or NL_BEG")
#line 531 "chopb.met"
                    break;
#line 531 "chopb.met"
            }
#line 531 "chopb.met"
#line 535 "chopb.met"
            if ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN(PVIR,";") && (tokenAhead = 0,CommTerm(),1)){
#line 535 "chopb.met"
#line 535 "chopb.met"
            }
#line 535 "chopb.met"
#line 535 "chopb.met"
            break;
#line 535 "chopb.met"
#line 538 "chopb.met"
        case FOREACH : 
#line 538 "chopb.met"
            tokenAhead = 0 ;
#line 538 "chopb.met"
            CommTerm();
#line 538 "chopb.met"
#line 539 "chopb.met"
#line 540 "chopb.met"
            {
#line 540 "chopb.met"
                PPTREE _ptRes0=0;
#line 540 "chopb.met"
                _ptRes0= MakeTree(FOREACH, 3);
#line 540 "chopb.met"
                statTree=_ptRes0;
#line 540 "chopb.met"
            }
#line 540 "chopb.met"
#line 541 "chopb.met"
            (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 541 "chopb.met"
            if (  !SEE_TOKEN( POUV,"(") || !(CommTerm(),1)) {
#line 541 "chopb.met"
                MulFreeTree(4,_addlist1,inter,list,statTree);
                TOKEN_EXIT(statement_exit,"(")
#line 541 "chopb.met"
            } else {
#line 541 "chopb.met"
                tokenAhead = 0 ;
#line 541 "chopb.met"
            }
#line 541 "chopb.met"
#line 542 "chopb.met"
            {
#line 542 "chopb.met"
                PPTREE _ptTree0=0;
#line 542 "chopb.met"
                if ( (_ptTree0=NQUICK_CALL(_Tak(assignment_expression)(error_free), 21, chopb))== (PPTREE) -1 ) {
#line 542 "chopb.met"
                    MulFreeTree(5,_ptTree0,_addlist1,inter,list,statTree);
                    PROG_EXIT(statement_exit,"statement")
#line 542 "chopb.met"
                }
#line 542 "chopb.met"
                ReplaceTree(statTree , 1 , _ptTree0);
#line 542 "chopb.met"
            }
#line 542 "chopb.met"
#line 543 "chopb.met"
            (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 543 "chopb.met"
            if (  !SEE_TOKEN( VIRG,",") || !(CommTerm(),1)) {
#line 543 "chopb.met"
                MulFreeTree(4,_addlist1,inter,list,statTree);
                TOKEN_EXIT(statement_exit,",")
#line 543 "chopb.met"
            } else {
#line 543 "chopb.met"
                tokenAhead = 0 ;
#line 543 "chopb.met"
            }
#line 543 "chopb.met"
#line 544 "chopb.met"
            {
#line 544 "chopb.met"
                PPTREE _ptTree0=0;
#line 544 "chopb.met"
                if ( (_ptTree0=NQUICK_CALL(_Tak(assignment_expression)(error_free), 21, chopb))== (PPTREE) -1 ) {
#line 544 "chopb.met"
                    MulFreeTree(5,_ptTree0,_addlist1,inter,list,statTree);
                    PROG_EXIT(statement_exit,"statement")
#line 544 "chopb.met"
                }
#line 544 "chopb.met"
                ReplaceTree(statTree , 2 , _ptTree0);
#line 544 "chopb.met"
            }
#line 544 "chopb.met"
#line 545 "chopb.met"
            (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 545 "chopb.met"
            if (  !SEE_TOKEN( VIRG,",") || !(CommTerm(),1)) {
#line 545 "chopb.met"
                MulFreeTree(4,_addlist1,inter,list,statTree);
                TOKEN_EXIT(statement_exit,",")
#line 545 "chopb.met"
            } else {
#line 545 "chopb.met"
                tokenAhead = 0 ;
#line 545 "chopb.met"
            }
#line 545 "chopb.met"
#line 549 "chopb.met"
            if (! (NPUSH_CALL_AFF_VERIF(inter = ,_Tak(statement), 146, chopb))){
#line 549 "chopb.met"
#line 551 "chopb.met"
                if ( (inter=NQUICK_CALL(_Tak(expression)(error_free), 67, chopb))== (PPTREE) -1 ) {
#line 551 "chopb.met"
                    MulFreeTree(4,_addlist1,inter,list,statTree);
                    PROG_EXIT(statement_exit,"statement")
#line 551 "chopb.met"
                }
#line 551 "chopb.met"
            }
#line 551 "chopb.met"
#line 552 "chopb.met"
            ReplaceTree(statTree ,3 ,inter );
#line 552 "chopb.met"
#line 553 "chopb.met"
            (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 553 "chopb.met"
            if (  !SEE_TOKEN( PFER,")") || !(CommTerm(),1)) {
#line 553 "chopb.met"
                MulFreeTree(4,_addlist1,inter,list,statTree);
                TOKEN_EXIT(statement_exit,")")
#line 553 "chopb.met"
            } else {
#line 553 "chopb.met"
                tokenAhead = 0 ;
#line 553 "chopb.met"
            }
#line 553 "chopb.met"
#line 554 "chopb.met"
            if ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN(PVIR,";") && (tokenAhead = 0,CommTerm(),1)){
#line 554 "chopb.met"
#line 554 "chopb.met"
            }
#line 554 "chopb.met"
#line 554 "chopb.met"
            break;
#line 554 "chopb.met"
#line 557 "chopb.met"
        case FORALLSONS : 
#line 557 "chopb.met"
            tokenAhead = 0 ;
#line 557 "chopb.met"
            CommTerm();
#line 557 "chopb.met"
#line 558 "chopb.met"
#line 559 "chopb.met"
            {
#line 559 "chopb.met"
                PPTREE _ptRes0=0;
#line 559 "chopb.met"
                _ptRes0= MakeTree(FORALLSONS, 2);
#line 559 "chopb.met"
                statTree=_ptRes0;
#line 559 "chopb.met"
            }
#line 559 "chopb.met"
#line 560 "chopb.met"
            (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 560 "chopb.met"
            if (  !SEE_TOKEN( POUV,"(") || !(CommTerm(),1)) {
#line 560 "chopb.met"
                MulFreeTree(4,_addlist1,inter,list,statTree);
                TOKEN_EXIT(statement_exit,"(")
#line 560 "chopb.met"
            } else {
#line 560 "chopb.met"
                tokenAhead = 0 ;
#line 560 "chopb.met"
            }
#line 560 "chopb.met"
#line 561 "chopb.met"
            {
#line 561 "chopb.met"
                PPTREE _ptTree0=0;
#line 561 "chopb.met"
                if ( (_ptTree0=NQUICK_CALL(_Tak(assignment_expression)(error_free), 21, chopb))== (PPTREE) -1 ) {
#line 561 "chopb.met"
                    MulFreeTree(5,_ptTree0,_addlist1,inter,list,statTree);
                    PROG_EXIT(statement_exit,"statement")
#line 561 "chopb.met"
                }
#line 561 "chopb.met"
                ReplaceTree(statTree , 1 , _ptTree0);
#line 561 "chopb.met"
            }
#line 561 "chopb.met"
#line 562 "chopb.met"
            (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 562 "chopb.met"
            if (  !SEE_TOKEN( VIRG,",") || !(CommTerm(),1)) {
#line 562 "chopb.met"
                MulFreeTree(4,_addlist1,inter,list,statTree);
                TOKEN_EXIT(statement_exit,",")
#line 562 "chopb.met"
            } else {
#line 562 "chopb.met"
                tokenAhead = 0 ;
#line 562 "chopb.met"
            }
#line 562 "chopb.met"
#line 563 "chopb.met"
            {
#line 563 "chopb.met"
                PPTREE _ptTree0=0;
#line 563 "chopb.met"
                if ( (_ptTree0=NQUICK_CALL(_Tak(statement)(error_free), 146, chopb))== (PPTREE) -1 ) {
#line 563 "chopb.met"
                    MulFreeTree(5,_ptTree0,_addlist1,inter,list,statTree);
                    PROG_EXIT(statement_exit,"statement")
#line 563 "chopb.met"
                }
#line 563 "chopb.met"
                ReplaceTree(statTree , 2 , _ptTree0);
#line 563 "chopb.met"
            }
#line 563 "chopb.met"
#line 564 "chopb.met"
            (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 564 "chopb.met"
            if (  !SEE_TOKEN( PFER,")") || !(CommTerm(),1)) {
#line 564 "chopb.met"
                MulFreeTree(4,_addlist1,inter,list,statTree);
                TOKEN_EXIT(statement_exit,")")
#line 564 "chopb.met"
            } else {
#line 564 "chopb.met"
                tokenAhead = 0 ;
#line 564 "chopb.met"
            }
#line 564 "chopb.met"
#line 565 "chopb.met"
            if ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN(PVIR,";") && (tokenAhead = 0,CommTerm(),1)){
#line 565 "chopb.met"
#line 565 "chopb.met"
            }
#line 565 "chopb.met"
#line 565 "chopb.met"
            break;
#line 565 "chopb.met"
#line 569 "chopb.met"
        default : 
#line 569 "chopb.met"
#line 569 "chopb.met"
            if (NPUSH_CALL_AFF_VERIF(statTree = ,_Tak(cplus::statement), 170, chopb)){
#line 569 "chopb.met"
#line 570 "chopb.met"
                {
#line 570 "chopb.met"
                    _retValue = statTree ;
#line 570 "chopb.met"
                    goto statement_ret;
#line 570 "chopb.met"
                    
#line 570 "chopb.met"
                }
#line 570 "chopb.met"
            } else {
#line 570 "chopb.met"
#line 572 "chopb.met"
#line 573 "chopb.met"
                if (NPUSH_CALL_VERIF(_Tak(ident_mul), 83, chopb)){
#line 573 "chopb.met"
#line 576 "chopb.met"
                    
#line 576 "chopb.met"
                    MulFreeTree(4,_addlist1,inter,list,statTree);
                    LEX_EXIT ("",0);
#line 576 "chopb.met"
                    goto statement_exit;
#line 576 "chopb.met"
#line 577 "chopb.met"
                } else {
#line 577 "chopb.met"
#line 579 "chopb.met"
#line 580 "chopb.met"
                    if ( (statTree=NQUICK_CALL(_Tak(expression)(error_free), 67, chopb))== (PPTREE) -1 ) {
#line 580 "chopb.met"
                        MulFreeTree(4,_addlist1,inter,list,statTree);
                        PROG_EXIT(statement_exit,"statement")
#line 580 "chopb.met"
                    }
#line 580 "chopb.met"
#line 581 "chopb.met"
                    if ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN(PVIR,";") && (tokenAhead = 0,CommTerm(),1)){
#line 581 "chopb.met"
#line 581 "chopb.met"
                    }
#line 581 "chopb.met"
#line 581 "chopb.met"
                }
#line 581 "chopb.met"
#line 581 "chopb.met"
            }
#line 581 "chopb.met"
            break;
#line 581 "chopb.met"
    }
#line 581 "chopb.met"
#line 586 "chopb.met"
    {
#line 586 "chopb.met"
        _retValue = statTree ;
#line 586 "chopb.met"
        goto statement_ret;
#line 586 "chopb.met"
        
#line 586 "chopb.met"
    }
#line 586 "chopb.met"
#line 586 "chopb.met"
#line 586 "chopb.met"

#line 587 "chopb.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 587 "chopb.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 587 "chopb.met"
return((PPTREE) 0);
#line 587 "chopb.met"

#line 587 "chopb.met"
statement_exit :
#line 587 "chopb.met"

#line 587 "chopb.met"
    _Debug = TRACE_RULE("statement",TRACE_EXIT,(PPTREE)0);
#line 587 "chopb.met"
    _funcLevel--;
#line 587 "chopb.met"
    return((PPTREE) -1) ;
#line 587 "chopb.met"

#line 587 "chopb.met"
statement_ret :
#line 587 "chopb.met"
    
#line 587 "chopb.met"
    _Debug = TRACE_RULE("statement",TRACE_RETURN,_retValue);
#line 587 "chopb.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 587 "chopb.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 587 "chopb.met"
    return _retValue ;
#line 587 "chopb.met"
}
#line 587 "chopb.met"

#line 587 "chopb.met"
#line 622 "chopb.met"
PPTREE chopb::take_follow ( int error_free)
#line 622 "chopb.met"
{
#line 622 "chopb.met"
    int  _oldinMakeTree = inMakeTree;
#line 622 "chopb.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 622 "chopb.met"
    int _value,_nbPre = 0 ;
#line 622 "chopb.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 622 "chopb.met"
    int _Debug = TRACE_RULE("take_follow",TRACE_ENTER,(PPTREE)0);
#line 622 "chopb.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 622 "chopb.met"
#line 622 "chopb.met"
    PPTREE _addlist1 = (PPTREE) 0;
#line 622 "chopb.met"
#line 622 "chopb.met"
    PPTREE statTree = (PPTREE) 0,list = (PPTREE) 0,name = (PPTREE) 0;
#line 622 "chopb.met"
#line 624 "chopb.met"
#line 625 "chopb.met"
    {
#line 625 "chopb.met"
        PPTREE _ptRes0=0;
#line 625 "chopb.met"
        _ptRes0= MakeTree(NODE_TREE, 1);
#line 625 "chopb.met"
        statTree=_ptRes0;
#line 625 "chopb.met"
    }
#line 625 "chopb.met"
#line 626 "chopb.met"
    if ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN(INFESUPE,"<>") && (tokenAhead = 0,CommTerm(),1)){
#line 626 "chopb.met"
#line 626 "chopb.met"
    } else {
#line 626 "chopb.met"
#line 628 "chopb.met"
#line 629 "chopb.met"
        (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 629 "chopb.met"
        if (  !SEE_TOKEN( INFE,"<") || !(CommTerm(),1)) {
#line 629 "chopb.met"
            MulFreeTree(4,_addlist1,list,name,statTree);
            TOKEN_EXIT(take_follow_exit,"<")
#line 629 "chopb.met"
        } else {
#line 629 "chopb.met"
            tokenAhead = 0 ;
#line 629 "chopb.met"
        }
#line 629 "chopb.met"
#line 630 "chopb.met"
        if (NPUSH_CALL_AFF_VERIF(name = ,_Tak(qualified_name), 123, chopb)){
#line 630 "chopb.met"
#line 631 "chopb.met"
            list =AddList(list ,name );
#line 631 "chopb.met"
#line 631 "chopb.met"
        } else {
#line 631 "chopb.met"
#line 633 "chopb.met"
            list =AddList(list , (PPTREE) 0);
#line 633 "chopb.met"
        }
#line 633 "chopb.met"
#line 634 "chopb.met"
        {
#line 634 "chopb.met"
            inMakeTree = 1 ;
#line 634 "chopb.met"
#line 636 "chopb.met"
#line 636 "chopb.met"
            _addlist1 = list ;
#line 636 "chopb.met"
#line 635 "chopb.met"
            while ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN(VIRG,",") && (tokenAhead = 0,CommTerm(),1)) { 
#line 635 "chopb.met"
#line 636 "chopb.met"
#line 636 "chopb.met"
                {
#line 636 "chopb.met"
                    PPTREE _ptTree0=0;
#line 636 "chopb.met"
                    if ( (_ptTree0=NQUICK_CALL(_Tak(take_follow_super)(error_free), 175, chopb))== (PPTREE) -1 ) {
#line 636 "chopb.met"
                        MulFreeTree(5,_ptTree0,_addlist1,list,name,statTree);
                        PROG_EXIT(take_follow_exit,"take_follow")
#line 636 "chopb.met"
                    }
#line 636 "chopb.met"
                    _addlist1 =AddList(_addlist1 , _ptTree0);
#line 636 "chopb.met"
                }
#line 636 "chopb.met"
#line 636 "chopb.met"
                if (list){
#line 636 "chopb.met"
#line 636 "chopb.met"
                    _addlist1 = SonTree (_addlist1 ,2 );
#line 636 "chopb.met"
                } else {
#line 636 "chopb.met"
#line 636 "chopb.met"
                    list = _addlist1 ;
#line 636 "chopb.met"
                }
#line 636 "chopb.met"
            } 
#line 636 "chopb.met"
            inMakeTree =  _oldinMakeTree;
#line 636 "chopb.met"
        }
#line 636 "chopb.met"
#line 637 "chopb.met"
        (tokenAhead == 17|| (LexSup(),TRACE_LEX(1)));
#line 637 "chopb.met"
        if ( ! TERM_OR_META(MAKETREE_SUP,"MAKETREE_SUP") || !(CommTerm(),1)) {
#line 637 "chopb.met"
            MulFreeTree(4,_addlist1,list,name,statTree);
            TOKEN_EXIT(take_follow_exit,"MAKETREE_SUP")
#line 637 "chopb.met"
        } else {
#line 637 "chopb.met"
            tokenAhead = 0 ;
#line 637 "chopb.met"
        }
#line 637 "chopb.met"
#line 637 "chopb.met"
    }
#line 637 "chopb.met"
#line 639 "chopb.met"
    ReplaceTree(statTree ,1 ,list );
#line 639 "chopb.met"
#line 639 "chopb.met"
#line 641 "chopb.met"
    {
#line 641 "chopb.met"
        _retValue = statTree ;
#line 641 "chopb.met"
        goto take_follow_ret;
#line 641 "chopb.met"
        
#line 641 "chopb.met"
    }
#line 641 "chopb.met"
#line 641 "chopb.met"
#line 641 "chopb.met"

#line 642 "chopb.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 642 "chopb.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 642 "chopb.met"
inMakeTree =  _oldinMakeTree;
#line 642 "chopb.met"
return((PPTREE) 0);
#line 642 "chopb.met"

#line 642 "chopb.met"
take_follow_exit :
#line 642 "chopb.met"

#line 642 "chopb.met"
    _Debug = TRACE_RULE("take_follow",TRACE_EXIT,(PPTREE)0);
#line 642 "chopb.met"
    _funcLevel--;
#line 642 "chopb.met"
    inMakeTree =  _oldinMakeTree;
#line 642 "chopb.met"
    return((PPTREE) -1) ;
#line 642 "chopb.met"

#line 642 "chopb.met"
take_follow_ret :
#line 642 "chopb.met"
    
#line 642 "chopb.met"
    _Debug = TRACE_RULE("take_follow",TRACE_RETURN,_retValue);
#line 642 "chopb.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 642 "chopb.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 642 "chopb.met"
    inMakeTree =  _oldinMakeTree;
#line 642 "chopb.met"
    return _retValue ;
#line 642 "chopb.met"
}
#line 642 "chopb.met"

#line 642 "chopb.met"
#line 606 "chopb.met"
PPTREE chopb::take_follow_list ( int error_free)
#line 606 "chopb.met"
{
#line 606 "chopb.met"
    int  _oldor_not_ok = or_not_ok;
#line 606 "chopb.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 606 "chopb.met"
    int _value,_nbPre = 0 ;
#line 606 "chopb.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 606 "chopb.met"
    int _Debug = TRACE_RULE("take_follow_list",TRACE_ENTER,(PPTREE)0);
#line 606 "chopb.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 606 "chopb.met"
#line 606 "chopb.met"
    PPTREE _addlist1 = (PPTREE) 0;
#line 606 "chopb.met"
#line 606 "chopb.met"
    PPTREE statTree = (PPTREE) 0,list = (PPTREE) 0,inter = (PPTREE) 0;
#line 606 "chopb.met"
#line 608 "chopb.met"
    {
#line 608 "chopb.met"
        or_not_ok = 1 ;
#line 608 "chopb.met"
#line 609 "chopb.met"
#line 610 "chopb.met"
        {
#line 610 "chopb.met"
            PPTREE _ptRes0=0;
#line 610 "chopb.met"
            _ptRes0= MakeTree(NODE_LIST, 1);
#line 610 "chopb.met"
            statTree=_ptRes0;
#line 610 "chopb.met"
        }
#line 610 "chopb.met"
#line 611 "chopb.met"
        if (NPUSH_CALL_AFF_VERIF(inter = ,_Tak(take_follow_super), 175, chopb)){
#line 611 "chopb.met"
#line 612 "chopb.met"
#line 613 "chopb.met"
            list =AddList(list ,inter );
#line 613 "chopb.met"
#line 613 "chopb.met"
            _addlist1 = list ;
#line 613 "chopb.met"
#line 614 "chopb.met"
            while ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN(VBARVBAR,"||") && (tokenAhead = 0,CommTerm(),1)) { 
#line 614 "chopb.met"
#line 615 "chopb.met"
#line 615 "chopb.met"
                {
#line 615 "chopb.met"
                    PPTREE _ptTree0=0;
#line 615 "chopb.met"
                    if ( (_ptTree0=NQUICK_CALL(_Tak(take_follow_super)(error_free), 175, chopb))== (PPTREE) -1 ) {
#line 615 "chopb.met"
                        MulFreeTree(5,_ptTree0,_addlist1,inter,list,statTree);
                        PROG_EXIT(take_follow_list_exit,"take_follow_list")
#line 615 "chopb.met"
                    }
#line 615 "chopb.met"
                    _addlist1 =AddList(_addlist1 , _ptTree0);
#line 615 "chopb.met"
                }
#line 615 "chopb.met"
#line 615 "chopb.met"
                if (list){
#line 615 "chopb.met"
#line 615 "chopb.met"
                    _addlist1 = SonTree (_addlist1 ,2 );
#line 615 "chopb.met"
                } else {
#line 615 "chopb.met"
#line 615 "chopb.met"
                    list = _addlist1 ;
#line 615 "chopb.met"
                }
#line 615 "chopb.met"
            } 
#line 615 "chopb.met"
#line 615 "chopb.met"
#line 615 "chopb.met"
        }
#line 615 "chopb.met"
#line 617 "chopb.met"
        ReplaceTree(statTree ,1 ,list );
#line 617 "chopb.met"
#line 617 "chopb.met"
        or_not_ok =  _oldor_not_ok;
#line 617 "chopb.met"
    }
#line 617 "chopb.met"
#line 619 "chopb.met"
    {
#line 619 "chopb.met"
        _retValue = statTree ;
#line 619 "chopb.met"
        goto take_follow_list_ret;
#line 619 "chopb.met"
        
#line 619 "chopb.met"
    }
#line 619 "chopb.met"
#line 619 "chopb.met"
#line 619 "chopb.met"

#line 620 "chopb.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 620 "chopb.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 620 "chopb.met"
or_not_ok =  _oldor_not_ok;
#line 620 "chopb.met"
return((PPTREE) 0);
#line 620 "chopb.met"

#line 620 "chopb.met"
take_follow_list_exit :
#line 620 "chopb.met"

#line 620 "chopb.met"
    _Debug = TRACE_RULE("take_follow_list",TRACE_EXIT,(PPTREE)0);
#line 620 "chopb.met"
    _funcLevel--;
#line 620 "chopb.met"
    or_not_ok =  _oldor_not_ok;
#line 620 "chopb.met"
    return((PPTREE) -1) ;
#line 620 "chopb.met"

#line 620 "chopb.met"
take_follow_list_ret :
#line 620 "chopb.met"
    
#line 620 "chopb.met"
    _Debug = TRACE_RULE("take_follow_list",TRACE_RETURN,_retValue);
#line 620 "chopb.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 620 "chopb.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 620 "chopb.met"
    or_not_ok =  _oldor_not_ok;
#line 620 "chopb.met"
    return _retValue ;
#line 620 "chopb.met"
}
#line 620 "chopb.met"

#line 620 "chopb.met"
#line 589 "chopb.met"
PPTREE chopb::take_follow_super ( int error_free)
#line 589 "chopb.met"
{
#line 589 "chopb.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 589 "chopb.met"
    int _value,_nbPre = 0 ;
#line 589 "chopb.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 589 "chopb.met"
    int _Debug = TRACE_RULE("take_follow_super",TRACE_ENTER,(PPTREE)0);
#line 589 "chopb.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 589 "chopb.met"
#line 589 "chopb.met"
    PPTREE identTree = (PPTREE) 0;
#line 589 "chopb.met"
#line 591 "chopb.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 591 "chopb.met"
    switch( lexEl.Value) {
#line 591 "chopb.met"
#line 592 "chopb.met"
        case POINPOINPOIN : 
#line 592 "chopb.met"
            tokenAhead = 0 ;
#line 592 "chopb.met"
            CommTerm();
#line 592 "chopb.met"
#line 592 "chopb.met"
            {
#line 592 "chopb.met"
                PPTREE _ptTree0=0;
#line 592 "chopb.met"
                if ( (_ptTree0=NQUICK_CALL(_Tak(take_follow_list)(error_free), 174, chopb))== (PPTREE) -1 ) {
#line 592 "chopb.met"
                    MulFreeTree(2,_ptTree0,identTree);
                    PROG_EXIT(take_follow_super_exit,"take_follow_super")
#line 592 "chopb.met"
                }
#line 592 "chopb.met"
                _retValue =_ptTree0;
#line 592 "chopb.met"
                goto take_follow_super_ret;
#line 592 "chopb.met"
            }
#line 592 "chopb.met"
            break;
#line 592 "chopb.met"
#line 595 "chopb.met"
        case POUV : 
#line 595 "chopb.met"
            tokenAhead = 0 ;
#line 595 "chopb.met"
            CommTerm();
#line 595 "chopb.met"
#line 594 "chopb.met"
            if ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN(PFER,")") && (tokenAhead = 0,CommTerm(),1)){
#line 594 "chopb.met"
#line 595 "chopb.met"
                {
#line 595 "chopb.met"
                    PPTREE _ptTree0=0;
#line 595 "chopb.met"
                    {
#line 595 "chopb.met"
                        PPTREE _ptRes1=0;
#line 595 "chopb.met"
                        _ptRes1= MakeTree(NIL, 0);
#line 595 "chopb.met"
                        _ptTree0=_ptRes1;
#line 595 "chopb.met"
                    }
#line 595 "chopb.met"
                    _retValue =_ptTree0;
#line 595 "chopb.met"
                    goto take_follow_super_ret;
#line 595 "chopb.met"
                }
#line 595 "chopb.met"
            } else {
#line 595 "chopb.met"
#line 597 "chopb.met"
#line 598 "chopb.met"
                if ( (identTree=NQUICK_CALL(_Tak(assignment_expression)(error_free), 21, chopb))== (PPTREE) -1 ) {
#line 598 "chopb.met"
                    MulFreeTree(1,identTree);
                    PROG_EXIT(take_follow_super_exit,"take_follow_super")
#line 598 "chopb.met"
                }
#line 598 "chopb.met"
#line 599 "chopb.met"
                (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 599 "chopb.met"
                if (  !SEE_TOKEN( PFER,")") || !(CommTerm(),1)) {
#line 599 "chopb.met"
                    MulFreeTree(1,identTree);
                    TOKEN_EXIT(take_follow_super_exit,")")
#line 599 "chopb.met"
                } else {
#line 599 "chopb.met"
                    tokenAhead = 0 ;
#line 599 "chopb.met"
                }
#line 599 "chopb.met"
#line 600 "chopb.met"
                {
#line 600 "chopb.met"
                    _retValue = identTree ;
#line 600 "chopb.met"
                    goto take_follow_super_ret;
#line 600 "chopb.met"
                    
#line 600 "chopb.met"
                }
#line 600 "chopb.met"
#line 600 "chopb.met"
            }
#line 600 "chopb.met"
            break;
#line 600 "chopb.met"
#line 602 "chopb.met"
        default : 
#line 602 "chopb.met"
#line 602 "chopb.met"
            {
#line 602 "chopb.met"
                PPTREE _ptTree0=0;
#line 602 "chopb.met"
                if ( (_ptTree0=NQUICK_CALL(_Tak(assignment_expression)(error_free), 21, chopb))== (PPTREE) -1 ) {
#line 602 "chopb.met"
                    MulFreeTree(2,_ptTree0,identTree);
                    PROG_EXIT(take_follow_super_exit,"take_follow_super")
#line 602 "chopb.met"
                }
#line 602 "chopb.met"
                _retValue =_ptTree0;
#line 602 "chopb.met"
                goto take_follow_super_ret;
#line 602 "chopb.met"
            }
#line 602 "chopb.met"
            break;
#line 602 "chopb.met"
    }
#line 602 "chopb.met"
#line 602 "chopb.met"
#line 603 "chopb.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 603 "chopb.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 603 "chopb.met"
return((PPTREE) 0);
#line 603 "chopb.met"

#line 603 "chopb.met"
take_follow_super_exit :
#line 603 "chopb.met"

#line 603 "chopb.met"
    _Debug = TRACE_RULE("take_follow_super",TRACE_EXIT,(PPTREE)0);
#line 603 "chopb.met"
    _funcLevel--;
#line 603 "chopb.met"
    return((PPTREE) -1) ;
#line 603 "chopb.met"

#line 603 "chopb.met"
take_follow_super_ret :
#line 603 "chopb.met"
    
#line 603 "chopb.met"
    _Debug = TRACE_RULE("take_follow_super",TRACE_RETURN,_retValue);
#line 603 "chopb.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 603 "chopb.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 603 "chopb.met"
    return _retValue ;
#line 603 "chopb.met"
}
#line 603 "chopb.met"

#line 603 "chopb.met"
