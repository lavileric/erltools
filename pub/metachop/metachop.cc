/*************************************************************************/
/*                                                                       */
/*        Produced by MetaGen version 2.0  -    1989-2006                 */
/*       Syntaxic Analyzer Meta Generator developped by                  */
/*                  Eric Lavillonniere                                   */
/*                                                                       */
/*************************************************************************/

#include "token.h"
#include "metachop.h"


#line 12 "metachop.met"
PPTREE metachop::main_entry ( int error_free)
#line 12 "metachop.met"
{
#line 12 "metachop.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 12 "metachop.met"
    int _value,_nbPre = 0 ;
#line 12 "metachop.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 12 "metachop.met"
    int _Debug = TRACE_RULE("main_entry",TRACE_ENTER,(PPTREE)0);
#line 12 "metachop.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 12 "metachop.met"
#line 13 "metachop.met"
    {
#line 13 "metachop.met"
        PPTREE _ptTree0=0;
#line 13 "metachop.met"
        if ( (_ptTree0=NQUICK_CALL(_Tak(prog)(error_free), 172, metachop))== (PPTREE) -1 ) {
#line 13 "metachop.met"
            MulFreeTree(1,_ptTree0);
            PROG_EXIT(main_entry_exit,"main_entry")
#line 13 "metachop.met"
        }
#line 13 "metachop.met"
        _retValue =_ptTree0;
#line 13 "metachop.met"
        goto main_entry_ret;
#line 13 "metachop.met"
    }
#line 13 "metachop.met"
#line 13 "metachop.met"
#line 13 "metachop.met"

#line 14 "metachop.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 14 "metachop.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 14 "metachop.met"
return((PPTREE) 0);
#line 14 "metachop.met"

#line 14 "metachop.met"
main_entry_exit :
#line 14 "metachop.met"

#line 14 "metachop.met"
    _Debug = TRACE_RULE("main_entry",TRACE_EXIT,(PPTREE)0);
#line 14 "metachop.met"
    _funcLevel--;
#line 14 "metachop.met"
    return((PPTREE) -1) ;
#line 14 "metachop.met"

#line 14 "metachop.met"
main_entry_ret :
#line 14 "metachop.met"
    
#line 14 "metachop.met"
    _Debug = TRACE_RULE("main_entry",TRACE_RETURN,_retValue);
#line 14 "metachop.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 14 "metachop.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 14 "metachop.met"
    return _retValue ;
#line 14 "metachop.met"
}
#line 14 "metachop.met"

#line 14 "metachop.met"
#line 26 "metachop.met"
PPTREE metachop::primary_expression ( int error_free)
#line 26 "metachop.met"
{
#line 26 "metachop.met"
    int  _oldinMakeTree = inMakeTree;
#line 26 "metachop.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 26 "metachop.met"
    int _value,_nbPre = 0 ;
#line 26 "metachop.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 26 "metachop.met"
    int _Debug = TRACE_RULE("primary_expression",TRACE_ENTER,(PPTREE)0);
#line 26 "metachop.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 26 "metachop.met"
#line 26 "metachop.met"
    PPTREE result = (PPTREE) 0,expTree = (PPTREE) 0,list = (PPTREE) 0,statTree = (PPTREE) 0,ret = (PPTREE) 0;
#line 26 "metachop.met"
#line 28 "metachop.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 28 "metachop.met"
    switch( lexEl.Value) {
#line 28 "metachop.met"
#line 29 "metachop.met"
        case INFESUPE : 
#line 29 "metachop.met"
            tokenAhead = 0 ;
#line 29 "metachop.met"
            CommTerm();
#line 29 "metachop.met"
#line 29 "metachop.met"
            {
#line 29 "metachop.met"
                PPTREE _ptTree0=0;
#line 29 "metachop.met"
                {
#line 29 "metachop.met"
                    PPTREE _ptRes1=0;
#line 29 "metachop.met"
                    _ptRes1= MakeTree(DEF_IDENT, 0);
#line 29 "metachop.met"
                    _ptTree0=_ptRes1;
#line 29 "metachop.met"
                }
#line 29 "metachop.met"
                _retValue =_ptTree0;
#line 29 "metachop.met"
                goto primary_expression_ret;
#line 29 "metachop.met"
            }
#line 29 "metachop.met"
            break;
#line 29 "metachop.met"
#line 30 "metachop.met"
        case INFE : 
#line 30 "metachop.met"
#line 30 "metachop.met"
            {
#line 30 "metachop.met"
                PPTREE _ptTree0=0;
#line 30 "metachop.met"
                if ( (_ptTree0=NQUICK_CALL(_Tak(take_follow)(error_free), 173, metachop))== (PPTREE) -1 ) {
#line 30 "metachop.met"
                    MulFreeTree(6,_ptTree0,expTree,list,result,ret,statTree);
                    PROG_EXIT(primary_expression_exit,"primary_expression")
#line 30 "metachop.met"
                }
#line 30 "metachop.met"
                _retValue =_ptTree0;
#line 30 "metachop.met"
                goto primary_expression_ret;
#line 30 "metachop.met"
            }
#line 30 "metachop.met"
            break;
#line 30 "metachop.met"
#line 31 "metachop.met"
        case POINPOINPOIN : 
#line 31 "metachop.met"
            tokenAhead = 0 ;
#line 31 "metachop.met"
            CommTerm();
#line 31 "metachop.met"
#line 31 "metachop.met"
            {
#line 31 "metachop.met"
                PPTREE _ptTree0=0;
#line 31 "metachop.met"
                if ( (_ptTree0=NQUICK_CALL(_Tak(take_follow_list)(error_free), 174, metachop))== (PPTREE) -1 ) {
#line 31 "metachop.met"
                    MulFreeTree(6,_ptTree0,expTree,list,result,ret,statTree);
                    PROG_EXIT(primary_expression_exit,"primary_expression")
#line 31 "metachop.met"
                }
#line 31 "metachop.met"
                _retValue =_ptTree0;
#line 31 "metachop.met"
                goto primary_expression_ret;
#line 31 "metachop.met"
            }
#line 31 "metachop.met"
            break;
#line 31 "metachop.met"
#line 32 "metachop.met"
        case VALUE : 
#line 32 "metachop.met"
            tokenAhead = 0 ;
#line 32 "metachop.met"
            CommTerm();
#line 32 "metachop.met"
#line 33 "metachop.met"
#line 34 "metachop.met"
            (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 34 "metachop.met"
            if (  !SEE_TOKEN( POUV,"(") || !(CommTerm(),1)) {
#line 34 "metachop.met"
                MulFreeTree(5,expTree,list,result,ret,statTree);
                TOKEN_EXIT(primary_expression_exit,"(")
#line 34 "metachop.met"
            } else {
#line 34 "metachop.met"
                tokenAhead = 0 ;
#line 34 "metachop.met"
            }
#line 34 "metachop.met"
#line 35 "metachop.met"
            (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 35 "metachop.met"
            switch( lexEl.Value) {
#line 35 "metachop.met"
#line 36 "metachop.met"
                case META : 
#line 36 "metachop.met"
                case IDENT : 
#line 36 "metachop.met"
#line 36 "metachop.met"
                    {
#line 36 "metachop.met"
                        PPTREE _ptTree0=0,_ptRes0=0;
#line 36 "metachop.met"
                        _ptRes0= MakeTree(VALUE, 1);
#line 36 "metachop.met"
                        {
#line 36 "metachop.met"
                            PPTREE _ptTree1=0,_ptRes1=0;
#line 36 "metachop.met"
                            _ptRes1= MakeTree(IDENT, 1);
#line 36 "metachop.met"
                            (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 36 "metachop.met"
                            if ( ! TERM_OR_META(IDENT,"IDENT") || !(BUILD_TERM_META(_ptTree1))) {
#line 36 "metachop.met"
                                MulFreeTree(9,_ptRes1,_ptTree1,_ptRes0,_ptTree0,expTree,list,result,ret,statTree);
                                TOKEN_EXIT(primary_expression_exit,"IDENT")
#line 36 "metachop.met"
                            } else {
#line 36 "metachop.met"
                                tokenAhead = 0 ;
#line 36 "metachop.met"
                            }
#line 36 "metachop.met"
                            ReplaceTree(_ptRes1, 1, _ptTree1);
#line 36 "metachop.met"
                            _ptTree0=_ptRes1;
#line 36 "metachop.met"
                        }
#line 36 "metachop.met"
                        ReplaceTree(_ptRes0, 1, _ptTree0);
#line 36 "metachop.met"
                        statTree=_ptRes0;
#line 36 "metachop.met"
                    }
#line 36 "metachop.met"
                    break;
#line 36 "metachop.met"
#line 37 "metachop.met"
                case INFESUPE : 
#line 37 "metachop.met"
                    tokenAhead = 0 ;
#line 37 "metachop.met"
                    CommTerm();
#line 37 "metachop.met"
#line 37 "metachop.met"
                    {
#line 37 "metachop.met"
                        PPTREE _ptTree0=0,_ptRes0=0;
#line 37 "metachop.met"
                        _ptRes0= MakeTree(VALUE, 1);
#line 37 "metachop.met"
                        {
#line 37 "metachop.met"
                            PPTREE _ptRes1=0;
#line 37 "metachop.met"
                            _ptRes1= MakeTree(DEF_IDENT, 0);
#line 37 "metachop.met"
                            _ptTree0=_ptRes1;
#line 37 "metachop.met"
                        }
#line 37 "metachop.met"
                        ReplaceTree(_ptRes0, 1, _ptTree0);
#line 37 "metachop.met"
                        statTree=_ptRes0;
#line 37 "metachop.met"
                    }
#line 37 "metachop.met"
                    break;
#line 37 "metachop.met"
                default :
#line 37 "metachop.met"
                    MulFreeTree(5,expTree,list,result,ret,statTree);
                    CASE_EXIT(primary_expression_exit,"either IDENT or <>")
#line 37 "metachop.met"
                    break;
#line 37 "metachop.met"
            }
#line 37 "metachop.met"
#line 39 "metachop.met"
            (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 39 "metachop.met"
            if (  !SEE_TOKEN( PFER,")") || !(CommTerm(),1)) {
#line 39 "metachop.met"
                MulFreeTree(5,expTree,list,result,ret,statTree);
                TOKEN_EXIT(primary_expression_exit,")")
#line 39 "metachop.met"
            } else {
#line 39 "metachop.met"
                tokenAhead = 0 ;
#line 39 "metachop.met"
            }
#line 39 "metachop.met"
#line 40 "metachop.met"
            {
#line 40 "metachop.met"
                _retValue = statTree ;
#line 40 "metachop.met"
                goto primary_expression_ret;
#line 40 "metachop.met"
                
#line 40 "metachop.met"
            }
#line 40 "metachop.met"
#line 40 "metachop.met"
            break;
#line 40 "metachop.met"
#line 42 "metachop.met"
        case NEXTL : 
#line 42 "metachop.met"
            tokenAhead = 0 ;
#line 42 "metachop.met"
            CommTerm();
#line 42 "metachop.met"
#line 43 "metachop.met"
#line 44 "metachop.met"
            (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 44 "metachop.met"
            if (  !SEE_TOKEN( POUV,"(") || !(CommTerm(),1)) {
#line 44 "metachop.met"
                MulFreeTree(5,expTree,list,result,ret,statTree);
                TOKEN_EXIT(primary_expression_exit,"(")
#line 44 "metachop.met"
            } else {
#line 44 "metachop.met"
                tokenAhead = 0 ;
#line 44 "metachop.met"
            }
#line 44 "metachop.met"
#line 45 "metachop.met"
            if ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN( IDENT,"IDENT")){
#line 45 "metachop.met"
#line 46 "metachop.met"
                {
#line 46 "metachop.met"
                    PPTREE _ptTree0=0,_ptRes0=0;
#line 46 "metachop.met"
                    _ptRes0= MakeTree(NEXT, 1);
#line 46 "metachop.met"
                    {
#line 46 "metachop.met"
                        PPTREE _ptTree1=0,_ptRes1=0;
#line 46 "metachop.met"
                        _ptRes1= MakeTree(IDENT, 1);
#line 46 "metachop.met"
                        (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 46 "metachop.met"
                        if ( ! TERM_OR_META(IDENT,"IDENT") || !(BUILD_TERM_META(_ptTree1))) {
#line 46 "metachop.met"
                            MulFreeTree(9,_ptRes1,_ptTree1,_ptRes0,_ptTree0,expTree,list,result,ret,statTree);
                            TOKEN_EXIT(primary_expression_exit,"IDENT")
#line 46 "metachop.met"
                        } else {
#line 46 "metachop.met"
                            tokenAhead = 0 ;
#line 46 "metachop.met"
                        }
#line 46 "metachop.met"
                        ReplaceTree(_ptRes1, 1, _ptTree1);
#line 46 "metachop.met"
                        _ptTree0=_ptRes1;
#line 46 "metachop.met"
                    }
#line 46 "metachop.met"
                    ReplaceTree(_ptRes0, 1, _ptTree0);
#line 46 "metachop.met"
                    statTree=_ptRes0;
#line 46 "metachop.met"
                }
#line 46 "metachop.met"
            } else {
#line 46 "metachop.met"
#line 48 "metachop.met"
#line 49 "metachop.met"
                (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 49 "metachop.met"
                if (  !SEE_TOKEN( INFESUPE,"<>") || !(CommTerm(),1)) {
#line 49 "metachop.met"
                    MulFreeTree(5,expTree,list,result,ret,statTree);
                    TOKEN_EXIT(primary_expression_exit,"<>")
#line 49 "metachop.met"
                } else {
#line 49 "metachop.met"
                    tokenAhead = 0 ;
#line 49 "metachop.met"
                }
#line 49 "metachop.met"
#line 50 "metachop.met"
                {
#line 50 "metachop.met"
                    PPTREE _ptTree0=0,_ptRes0=0;
#line 50 "metachop.met"
                    _ptRes0= MakeTree(NEXT, 1);
#line 50 "metachop.met"
                    {
#line 50 "metachop.met"
                        PPTREE _ptRes1=0;
#line 50 "metachop.met"
                        _ptRes1= MakeTree(DEF_IDENT, 0);
#line 50 "metachop.met"
                        _ptTree0=_ptRes1;
#line 50 "metachop.met"
                    }
#line 50 "metachop.met"
                    ReplaceTree(_ptRes0, 1, _ptTree0);
#line 50 "metachop.met"
                    statTree=_ptRes0;
#line 50 "metachop.met"
                }
#line 50 "metachop.met"
#line 50 "metachop.met"
            }
#line 50 "metachop.met"
#line 52 "metachop.met"
            (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 52 "metachop.met"
            if (  !SEE_TOKEN( PFER,")") || !(CommTerm(),1)) {
#line 52 "metachop.met"
                MulFreeTree(5,expTree,list,result,ret,statTree);
                TOKEN_EXIT(primary_expression_exit,")")
#line 52 "metachop.met"
            } else {
#line 52 "metachop.met"
                tokenAhead = 0 ;
#line 52 "metachop.met"
            }
#line 52 "metachop.met"
#line 53 "metachop.met"
            {
#line 53 "metachop.met"
                _retValue = statTree ;
#line 53 "metachop.met"
                goto primary_expression_ret;
#line 53 "metachop.met"
                
#line 53 "metachop.met"
            }
#line 53 "metachop.met"
#line 53 "metachop.met"
            break;
#line 53 "metachop.met"
#line 55 "metachop.met"
        case PARSE : 
#line 55 "metachop.met"
            tokenAhead = 0 ;
#line 55 "metachop.met"
            CommTerm();
#line 55 "metachop.met"
#line 56 "metachop.met"
#line 57 "metachop.met"
             { char * theLanguage = currentLanguage;
#line 57 "metachop.met"
#line 58 "metachop.met"
            {
#line 58 "metachop.met"
                PPTREE _ptRes0=0;
#line 58 "metachop.met"
                _ptRes0= MakeTree(IN_LANGUAGE, 2);
#line 58 "metachop.met"
                statTree=_ptRes0;
#line 58 "metachop.met"
            }
#line 58 "metachop.met"
#line 59 "metachop.met"
             ReplaceTree(statTree,1,MakeString(parseLanguage));
#line 59 "metachop.met"
#line 60 "metachop.met"
            (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 60 "metachop.met"
            if (  !SEE_TOKEN( POUV,"(") || !(CommTerm(),1)) {
#line 60 "metachop.met"
                MulFreeTree(5,expTree,list,result,ret,statTree);
                TOKEN_EXIT(primary_expression_exit,"(")
#line 60 "metachop.met"
            } else {
#line 60 "metachop.met"
                tokenAhead = 0 ;
#line 60 "metachop.met"
            }
#line 60 "metachop.met"
#line 61 "metachop.met"
             SwitchLang(parseLanguage);
#line 61 "metachop.met"
#line 62 "metachop.met"
            if ( (ret = the_parse_entry (error_free)) != (PPTREE) -1 ){
#line 62 "metachop.met"
#line 63 "metachop.met"
                ReplaceTree(statTree ,2 ,ret );
#line 63 "metachop.met"
#line 63 "metachop.met"
            } else {
#line 63 "metachop.met"
#line 65 "metachop.met"
#line 66 "metachop.met"
                 _lastTree = (PPTREE) 0;
#line 66 "metachop.met"
#line 67 "metachop.met"
                 SwitchLang(theLanguage);
#line 67 "metachop.met"
#line 68 "metachop.met"
                
#line 68 "metachop.met"
                MulFreeTree(5,expTree,list,result,ret,statTree);
                LEX_EXIT ("",0);
#line 68 "metachop.met"
                goto primary_expression_exit;
#line 68 "metachop.met"
#line 68 "metachop.met"
            }
#line 68 "metachop.met"
#line 70 "metachop.met"
             _lastTree = (PPTREE) 0;
#line 70 "metachop.met"
#line 71 "metachop.met"
             SwitchLang(theLanguage);
#line 71 "metachop.met"
#line 72 "metachop.met"
             ExtUnputBuf();
#line 72 "metachop.met"
#line 74 "metachop.met"
            (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 74 "metachop.met"
            if (  !SEE_TOKEN( PFER,")") || !(CommTerm(),1)) {
#line 74 "metachop.met"
                MulFreeTree(5,expTree,list,result,ret,statTree);
                TOKEN_EXIT(primary_expression_exit,")")
#line 74 "metachop.met"
            } else {
#line 74 "metachop.met"
                tokenAhead = 0 ;
#line 74 "metachop.met"
            }
#line 74 "metachop.met"
#line 76 "metachop.met"
             } 
#line 76 "metachop.met"
#line 77 "metachop.met"
            {
#line 77 "metachop.met"
                PPTREE _ptTree0=0;
#line 77 "metachop.met"
                {
#line 77 "metachop.met"
                    PPTREE _ptRes1=0;
#line 77 "metachop.met"
                    _ptRes1= MakeTree(PARSE, 1);
#line 77 "metachop.met"
                    ReplaceTree(_ptRes1, 1, statTree );
#line 77 "metachop.met"
                    _ptTree0=_ptRes1;
#line 77 "metachop.met"
                }
#line 77 "metachop.met"
                _retValue =_ptTree0;
#line 77 "metachop.met"
                goto primary_expression_ret;
#line 77 "metachop.met"
            }
#line 77 "metachop.met"
#line 77 "metachop.met"
            break;
#line 77 "metachop.met"
#line 79 "metachop.met"
        case IN : 
#line 79 "metachop.met"
            tokenAhead = 0 ;
#line 79 "metachop.met"
            CommTerm();
#line 79 "metachop.met"
#line 80 "metachop.met"
#line 81 "metachop.met"
             { char * oldParseLanguage = parseLanguage;
#line 81 "metachop.met"
#line 82 "metachop.met"
            {
#line 82 "metachop.met"
                PPTREE _ptTree0=0,_ptRes0=0;
#line 82 "metachop.met"
                _ptRes0= MakeTree(IN_LANG, 2);
#line 82 "metachop.met"
                if ( (_ptTree0=NQUICK_CALL(_Tak(expression)(error_free), 67, metachop))== (PPTREE) -1 ) {
#line 82 "metachop.met"
                    MulFreeTree(7,_ptRes0,_ptTree0,expTree,list,result,ret,statTree);
                    PROG_EXIT(primary_expression_exit,"primary_expression")
#line 82 "metachop.met"
                }
#line 82 "metachop.met"
                ReplaceTree(_ptRes0, 1, _ptTree0);
#line 82 "metachop.met"
                statTree=_ptRes0;
#line 82 "metachop.met"
            }
#line 82 "metachop.met"
#line 83 "metachop.met"
             parseLanguage = AllocString(Value(statTree));
#line 83 "metachop.met"
#line 84 "metachop.met"
            {
#line 84 "metachop.met"
                PPTREE _ptTree0=0;
#line 84 "metachop.met"
                if ( (_ptTree0=NQUICK_CALL(_Tak(statement)(error_free), 146, metachop))== (PPTREE) -1 ) {
#line 84 "metachop.met"
                    MulFreeTree(6,_ptTree0,expTree,list,result,ret,statTree);
                    PROG_EXIT(primary_expression_exit,"primary_expression")
#line 84 "metachop.met"
                }
#line 84 "metachop.met"
                ReplaceTree(statTree , 2 , _ptTree0);
#line 84 "metachop.met"
            }
#line 84 "metachop.met"
#line 85 "metachop.met"
             free (parseLanguage);
#line 85 "metachop.met"
#line 86 "metachop.met"
             parseLanguage = oldParseLanguage;
#line 86 "metachop.met"
#line 87 "metachop.met"
             } 
#line 87 "metachop.met"
#line 88 "metachop.met"
            {
#line 88 "metachop.met"
                _retValue = statTree ;
#line 88 "metachop.met"
                goto primary_expression_ret;
#line 88 "metachop.met"
                
#line 88 "metachop.met"
            }
#line 88 "metachop.met"
#line 88 "metachop.met"
            break;
#line 88 "metachop.met"
#line 92 "metachop.met"
        case POUV : 
#line 92 "metachop.met"
            tokenAhead = 0 ;
#line 92 "metachop.met"
            CommTerm();
#line 92 "metachop.met"
#line 90 "metachop.met"
            {
#line 90 "metachop.met"
                inMakeTree = 0 ;
#line 90 "metachop.met"
#line 91 "metachop.met"
#line 92 "metachop.met"
                if (NPUSH_CALL_AFF_VERIF(expTree = ,_Tak(expression), 67, metachop)){
#line 92 "metachop.met"
#line 93 "metachop.met"
#line 94 "metachop.met"
                    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 94 "metachop.met"
                    if (  !SEE_TOKEN( PFER,")") || !(CommTerm(),1)) {
#line 94 "metachop.met"
                        MulFreeTree(5,expTree,list,result,ret,statTree);
                        TOKEN_EXIT(primary_expression_exit,")")
#line 94 "metachop.met"
                    } else {
#line 94 "metachop.met"
                        tokenAhead = 0 ;
#line 94 "metachop.met"
                    }
#line 94 "metachop.met"
#line 95 "metachop.met"
                    {
#line 95 "metachop.met"
                        PPTREE _ptRes0=0;
#line 95 "metachop.met"
                        _ptRes0= MakeTree(EXP, 1);
#line 95 "metachop.met"
                        ReplaceTree(_ptRes0, 1, expTree );
#line 95 "metachop.met"
                        expTree=_ptRes0;
#line 95 "metachop.met"
                    }
#line 95 "metachop.met"
#line 95 "metachop.met"
#line 95 "metachop.met"
                } else {
#line 95 "metachop.met"
#line 98 "metachop.met"
#line 99 "metachop.met"
                    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 99 "metachop.met"
                    if (  !SEE_TOKEN( PFER,")") || !(CommTerm(),1)) {
#line 99 "metachop.met"
                        MulFreeTree(5,expTree,list,result,ret,statTree);
                        TOKEN_EXIT(primary_expression_exit,")")
#line 99 "metachop.met"
                    } else {
#line 99 "metachop.met"
                        tokenAhead = 0 ;
#line 99 "metachop.met"
                    }
#line 99 "metachop.met"
#line 100 "metachop.met"
                    {
#line 100 "metachop.met"
                        PPTREE _ptRes0=0;
#line 100 "metachop.met"
                        _ptRes0= MakeTree(NIL, 0);
#line 100 "metachop.met"
                        expTree=_ptRes0;
#line 100 "metachop.met"
                    }
#line 100 "metachop.met"
#line 100 "metachop.met"
                }
#line 100 "metachop.met"
#line 102 "metachop.met"
                {
#line 102 "metachop.met"
                    _retValue = expTree ;
#line 102 "metachop.met"
                    goto primary_expression_ret;
#line 102 "metachop.met"
                    
#line 102 "metachop.met"
                }
#line 102 "metachop.met"
#line 102 "metachop.met"
                inMakeTree =  _oldinMakeTree;
#line 102 "metachop.met"
            }
#line 102 "metachop.met"
            break;
#line 102 "metachop.met"
#line 104 "metachop.met"
        case OPERATOR : 
#line 104 "metachop.met"
#line 104 "metachop.met"
            {
#line 104 "metachop.met"
                PPTREE _ptTree0=0;
#line 104 "metachop.met"
                if ( (_ptTree0=NQUICK_CALL(_Tak(operator_function_name)(error_free), 110, metachop))== (PPTREE) -1 ) {
#line 104 "metachop.met"
                    MulFreeTree(6,_ptTree0,expTree,list,result,ret,statTree);
                    PROG_EXIT(primary_expression_exit,"primary_expression")
#line 104 "metachop.met"
                }
#line 104 "metachop.met"
                _retValue =_ptTree0;
#line 104 "metachop.met"
                goto primary_expression_ret;
#line 104 "metachop.met"
            }
#line 104 "metachop.met"
            break;
#line 104 "metachop.met"
#line 105 "metachop.met"
        case TILD : 
#line 105 "metachop.met"
#line 105 "metachop.met"
            {
#line 105 "metachop.met"
                PPTREE _ptTree0=0;
#line 105 "metachop.met"
                if ( (_ptTree0=NQUICK_CALL(_Tak(qualified_name)(error_free), 123, metachop))== (PPTREE) -1 ) {
#line 105 "metachop.met"
                    MulFreeTree(6,_ptTree0,expTree,list,result,ret,statTree);
                    PROG_EXIT(primary_expression_exit,"primary_expression")
#line 105 "metachop.met"
                }
#line 105 "metachop.met"
                _retValue =_ptTree0;
#line 105 "metachop.met"
                goto primary_expression_ret;
#line 105 "metachop.met"
            }
#line 105 "metachop.met"
            break;
#line 105 "metachop.met"
#line 106 "metachop.met"
        case META : 
#line 106 "metachop.met"
#line 107 "metachop.met"
#line 108 "metachop.met"
            {
#line 108 "metachop.met"
                PPTREE _ptTree0=0;
#line 108 "metachop.met"
                {
#line 108 "metachop.met"
                    PPTREE _ptTree1=0,_ptRes1=0;
#line 108 "metachop.met"
                    _ptRes1= MakeTree(META, 1);
#line 108 "metachop.met"
                    (tokenAhead == 7|| (LexMeta(),TRACE_LEX(1)));
#line 108 "metachop.met"
                    if ( ! TERM_OR_META(META,"META") || !(BUILD_TERM_META(_ptTree1))) {
#line 108 "metachop.met"
                        MulFreeTree(8,_ptRes1,_ptTree1,_ptTree0,expTree,list,result,ret,statTree);
                        TOKEN_EXIT(primary_expression_exit,"META")
#line 108 "metachop.met"
                    } else {
#line 108 "metachop.met"
                        tokenAhead = 0 ;
#line 108 "metachop.met"
                    }
#line 108 "metachop.met"
                    ReplaceTree(_ptRes1, 1, _ptTree1);
#line 108 "metachop.met"
                    _ptTree0=_ptRes1;
#line 108 "metachop.met"
                }
#line 108 "metachop.met"
                _retValue =_ptTree0;
#line 108 "metachop.met"
                goto primary_expression_ret;
#line 108 "metachop.met"
            }
#line 108 "metachop.met"
#line 108 "metachop.met"
            break;
#line 108 "metachop.met"
#line 110 "metachop.met"
        case IDENT : 
#line 110 "metachop.met"
#line 111 "metachop.met"
            if ((tokenAhead == 12|| (PushFunction(),TRACE_LEX(1)))&&TERM_OR_META(PUSH_FUNCTION,"PUSH_FUNCTION") && !(tokenAhead = 0) && ( BUILD_TERM_META(result))) {
#line 111 "metachop.met"
#line 112 "metachop.met"
#line 113 "metachop.met"
                (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 113 "metachop.met"
                if (  !SEE_TOKEN( POUV,"(") || !(CommTerm(),1)) {
#line 113 "metachop.met"
                    MulFreeTree(5,expTree,list,result,ret,statTree);
                    TOKEN_EXIT(primary_expression_exit,"(")
#line 113 "metachop.met"
                } else {
#line 113 "metachop.met"
                    tokenAhead = 0 ;
#line 113 "metachop.met"
                }
#line 113 "metachop.met"
#line 114 "metachop.met"
                {
#line 114 "metachop.met"
                    PPTREE _ptTree0=0;
#line 114 "metachop.met"
                    {
#line 114 "metachop.met"
                        PPTREE _ptTree1=0,_ptRes1=0;
#line 114 "metachop.met"
                        _ptRes1= MakeTree(IDENT, 1);
#line 114 "metachop.met"
                        (tokenAhead == 11|| (PushArgument(),TRACE_LEX(1)));
#line 114 "metachop.met"
                        if ( ! TERM_OR_META(PUSH_ARGUMENT,"PUSH_ARGUMENT") || !(BUILD_TERM_META(_ptTree1))) {
#line 114 "metachop.met"
                            MulFreeTree(8,_ptRes1,_ptTree1,_ptTree0,expTree,list,result,ret,statTree);
                            TOKEN_EXIT(primary_expression_exit,"PUSH_ARGUMENT")
#line 114 "metachop.met"
                        } else {
#line 114 "metachop.met"
                            tokenAhead = 0 ;
#line 114 "metachop.met"
                        }
#line 114 "metachop.met"
                        ReplaceTree(_ptRes1, 1, _ptTree1);
#line 114 "metachop.met"
                        _ptTree0=_ptRes1;
#line 114 "metachop.met"
                    }
#line 114 "metachop.met"
                    list =AddList(list , _ptTree0);
#line 114 "metachop.met"
                }
#line 114 "metachop.met"
#line 115 "metachop.met"
                (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 115 "metachop.met"
                if (  !SEE_TOKEN( VIRG,",") || !(CommTerm(),1)) {
#line 115 "metachop.met"
                    MulFreeTree(5,expTree,list,result,ret,statTree);
                    TOKEN_EXIT(primary_expression_exit,",")
#line 115 "metachop.met"
                } else {
#line 115 "metachop.met"
                    tokenAhead = 0 ;
#line 115 "metachop.met"
                }
#line 115 "metachop.met"
#line 116 "metachop.met"
                {
#line 116 "metachop.met"
                    PPTREE _ptTree0=0;
#line 116 "metachop.met"
                    if ( (_ptTree0=NQUICK_CALL(_Tak(expression)(error_free), 67, metachop))== (PPTREE) -1 ) {
#line 116 "metachop.met"
                        MulFreeTree(6,_ptTree0,expTree,list,result,ret,statTree);
                        PROG_EXIT(primary_expression_exit,"primary_expression")
#line 116 "metachop.met"
                    }
#line 116 "metachop.met"
                    list =AddList(list , _ptTree0);
#line 116 "metachop.met"
                }
#line 116 "metachop.met"
#line 117 "metachop.met"
                {
#line 117 "metachop.met"
                    PPTREE _ptRes0=0;
#line 117 "metachop.met"
                    _ptRes0= MakeTree(EXP_SEQ, 1);
#line 117 "metachop.met"
                    ReplaceTree(_ptRes0, 1, list );
#line 117 "metachop.met"
                    expTree=_ptRes0;
#line 117 "metachop.met"
                }
#line 117 "metachop.met"
#line 118 "metachop.met"
                (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 118 "metachop.met"
                if (  !SEE_TOKEN( PFER,")") || !(CommTerm(),1)) {
#line 118 "metachop.met"
                    MulFreeTree(5,expTree,list,result,ret,statTree);
                    TOKEN_EXIT(primary_expression_exit,")")
#line 118 "metachop.met"
                } else {
#line 118 "metachop.met"
                    tokenAhead = 0 ;
#line 118 "metachop.met"
                }
#line 118 "metachop.met"
#line 119 "metachop.met"
                {
#line 119 "metachop.met"
                    PPTREE _ptTree0=0;
#line 119 "metachop.met"
                    {
#line 119 "metachop.met"
                        PPTREE _ptTree1=0,_ptRes1=0;
#line 119 "metachop.met"
                        _ptRes1= MakeTree(EXP_LIST, 2);
#line 119 "metachop.met"
                        {
#line 119 "metachop.met"
                            PPTREE _ptRes2=0;
#line 119 "metachop.met"
                            _ptRes2= MakeTree(IDENT, 1);
#line 119 "metachop.met"
                            ReplaceTree(_ptRes2, 1, result );
#line 119 "metachop.met"
                            _ptTree1=_ptRes2;
#line 119 "metachop.met"
                        }
#line 119 "metachop.met"
                        ReplaceTree(_ptRes1, 1, _ptTree1);
#line 119 "metachop.met"
                        ReplaceTree(_ptRes1, 2, expTree );
#line 119 "metachop.met"
                        _ptTree0=_ptRes1;
#line 119 "metachop.met"
                    }
#line 119 "metachop.met"
                    _retValue =_ptTree0;
#line 119 "metachop.met"
                    goto primary_expression_ret;
#line 119 "metachop.met"
                }
#line 119 "metachop.met"
#line 119 "metachop.met"
#line 119 "metachop.met"
            } else {
#line 119 "metachop.met"
#line 122 "metachop.met"
                {
#line 122 "metachop.met"
                    PPTREE _ptTree0=0;
#line 122 "metachop.met"
                    if ( (_ptTree0=NQUICK_CALL(_Tak(qualified_name)(error_free), 123, metachop))== (PPTREE) -1 ) {
#line 122 "metachop.met"
                        MulFreeTree(6,_ptTree0,expTree,list,result,ret,statTree);
                        PROG_EXIT(primary_expression_exit,"primary_expression")
#line 122 "metachop.met"
                    }
#line 122 "metachop.met"
                    _retValue =_ptTree0;
#line 122 "metachop.met"
                    goto primary_expression_ret;
#line 122 "metachop.met"
                }
#line 122 "metachop.met"
            }
#line 122 "metachop.met"
            break;
#line 122 "metachop.met"
#line 123 "metachop.met"
        case STRING : 
#line 123 "metachop.met"
#line 123 "metachop.met"
            {
#line 123 "metachop.met"
                PPTREE _ptTree0=0;
#line 123 "metachop.met"
                if ( (_ptTree0=NQUICK_CALL(_Tak(string_list)(error_free), 148, metachop))== (PPTREE) -1 ) {
#line 123 "metachop.met"
                    MulFreeTree(6,_ptTree0,expTree,list,result,ret,statTree);
                    PROG_EXIT(primary_expression_exit,"primary_expression")
#line 123 "metachop.met"
                }
#line 123 "metachop.met"
                _retValue =_ptTree0;
#line 123 "metachop.met"
                goto primary_expression_ret;
#line 123 "metachop.met"
            }
#line 123 "metachop.met"
            break;
#line 123 "metachop.met"
#line 124 "metachop.met"
        case VA_ARG : 
#line 124 "metachop.met"
            tokenAhead = 0 ;
#line 124 "metachop.met"
            CommTerm();
#line 124 "metachop.met"
#line 125 "metachop.met"
#line 126 "metachop.met"
            (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 126 "metachop.met"
            if (  !SEE_TOKEN( POUV,"(") || !(CommTerm(),1)) {
#line 126 "metachop.met"
                MulFreeTree(5,expTree,list,result,ret,statTree);
                TOKEN_EXIT(primary_expression_exit,"(")
#line 126 "metachop.met"
            } else {
#line 126 "metachop.met"
                tokenAhead = 0 ;
#line 126 "metachop.met"
            }
#line 126 "metachop.met"
#line 127 "metachop.met"
            {
#line 127 "metachop.met"
                PPTREE _ptTree0=0,_ptRes0=0;
#line 127 "metachop.met"
                _ptRes0= MakeTree(VA_ARG, 2);
#line 127 "metachop.met"
                if ( (_ptTree0=NQUICK_CALL(_Tak(assignment_expression)(error_free), 21, metachop))== (PPTREE) -1 ) {
#line 127 "metachop.met"
                    MulFreeTree(7,_ptRes0,_ptTree0,expTree,list,result,ret,statTree);
                    PROG_EXIT(primary_expression_exit,"primary_expression")
#line 127 "metachop.met"
                }
#line 127 "metachop.met"
                ReplaceTree(_ptRes0, 1, _ptTree0);
#line 127 "metachop.met"
                expTree=_ptRes0;
#line 127 "metachop.met"
            }
#line 127 "metachop.met"
#line 128 "metachop.met"
            (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 128 "metachop.met"
            if (  !SEE_TOKEN( VIRG,",") || !(CommTerm(),1)) {
#line 128 "metachop.met"
                MulFreeTree(5,expTree,list,result,ret,statTree);
                TOKEN_EXIT(primary_expression_exit,",")
#line 128 "metachop.met"
            } else {
#line 128 "metachop.met"
                tokenAhead = 0 ;
#line 128 "metachop.met"
            }
#line 128 "metachop.met"
#line 129 "metachop.met"
            {
#line 129 "metachop.met"
                PPTREE _ptTree0=0;
#line 129 "metachop.met"
                if ( (_ptTree0=NQUICK_CALL(_Tak(type_name)(error_free), 154, metachop))== (PPTREE) -1 ) {
#line 129 "metachop.met"
                    MulFreeTree(6,_ptTree0,expTree,list,result,ret,statTree);
                    PROG_EXIT(primary_expression_exit,"primary_expression")
#line 129 "metachop.met"
                }
#line 129 "metachop.met"
                ReplaceTree(expTree , 2 , _ptTree0);
#line 129 "metachop.met"
            }
#line 129 "metachop.met"
#line 130 "metachop.met"
            (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 130 "metachop.met"
            if (  !SEE_TOKEN( PFER,")") || !(CommTerm(),1)) {
#line 130 "metachop.met"
                MulFreeTree(5,expTree,list,result,ret,statTree);
                TOKEN_EXIT(primary_expression_exit,")")
#line 130 "metachop.met"
            } else {
#line 130 "metachop.met"
                tokenAhead = 0 ;
#line 130 "metachop.met"
            }
#line 130 "metachop.met"
#line 131 "metachop.met"
            {
#line 131 "metachop.met"
                _retValue = expTree ;
#line 131 "metachop.met"
                goto primary_expression_ret;
#line 131 "metachop.met"
                
#line 131 "metachop.met"
            }
#line 131 "metachop.met"
#line 131 "metachop.met"
            break;
#line 131 "metachop.met"
#line 133 "metachop.met"
        case COUV : 
#line 133 "metachop.met"
#line 133 "metachop.met"
            {
#line 133 "metachop.met"
                PPTREE _ptTree0=0;
#line 133 "metachop.met"
                if ( (_ptTree0=NQUICK_CALL(_Tak(lambda)(error_free), 93, metachop))== (PPTREE) -1 ) {
#line 133 "metachop.met"
                    MulFreeTree(6,_ptTree0,expTree,list,result,ret,statTree);
                    PROG_EXIT(primary_expression_exit,"primary_expression")
#line 133 "metachop.met"
                }
#line 133 "metachop.met"
                _retValue =_ptTree0;
#line 133 "metachop.met"
                goto primary_expression_ret;
#line 133 "metachop.met"
            }
#line 133 "metachop.met"
            break;
#line 133 "metachop.met"
#line 134 "metachop.met"
        default : 
#line 134 "metachop.met"
#line 134 "metachop.met"
            {
#line 134 "metachop.met"
                PPTREE _ptTree0=0;
#line 134 "metachop.met"
                if ( (_ptTree0=NQUICK_CALL(_Tak(constan)(error_free), 36, metachop))== (PPTREE) -1 ) {
#line 134 "metachop.met"
                    MulFreeTree(6,_ptTree0,expTree,list,result,ret,statTree);
                    PROG_EXIT(primary_expression_exit,"primary_expression")
#line 134 "metachop.met"
                }
#line 134 "metachop.met"
                _retValue =_ptTree0;
#line 134 "metachop.met"
                goto primary_expression_ret;
#line 134 "metachop.met"
            }
#line 134 "metachop.met"
            break;
#line 134 "metachop.met"
    }
#line 134 "metachop.met"
#line 134 "metachop.met"
#line 135 "metachop.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 135 "metachop.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 135 "metachop.met"
inMakeTree =  _oldinMakeTree;
#line 135 "metachop.met"
return((PPTREE) 0);
#line 135 "metachop.met"

#line 135 "metachop.met"
primary_expression_exit :
#line 135 "metachop.met"

#line 135 "metachop.met"
    _Debug = TRACE_RULE("primary_expression",TRACE_EXIT,(PPTREE)0);
#line 135 "metachop.met"
    _funcLevel--;
#line 135 "metachop.met"
    inMakeTree =  _oldinMakeTree;
#line 135 "metachop.met"
    return((PPTREE) -1) ;
#line 135 "metachop.met"

#line 135 "metachop.met"
primary_expression_ret :
#line 135 "metachop.met"
    
#line 135 "metachop.met"
    _Debug = TRACE_RULE("primary_expression",TRACE_RETURN,_retValue);
#line 135 "metachop.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 135 "metachop.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 135 "metachop.met"
    inMakeTree =  _oldinMakeTree;
#line 135 "metachop.met"
    return _retValue ;
#line 135 "metachop.met"
}
#line 135 "metachop.met"

#line 135 "metachop.met"
#line 16 "metachop.met"
PPTREE metachop::prog ( int error_free)
#line 16 "metachop.met"
{
#line 16 "metachop.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 16 "metachop.met"
    int _value,_nbPre = 0 ;
#line 16 "metachop.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 16 "metachop.met"
    int _Debug = TRACE_RULE("prog",TRACE_ENTER,(PPTREE)0);
#line 16 "metachop.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 16 "metachop.met"
#line 16 "metachop.met"
    PPTREE langTree = (PPTREE) 0;
#line 16 "metachop.met"
#line 18 "metachop.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 18 "metachop.met"
    if (  !SEE_TOKEN( LANGUAGE,"language") || !(CommTerm(),1)) {
#line 18 "metachop.met"
        MulFreeTree(1,langTree);
        TOKEN_EXIT(prog_exit,"language")
#line 18 "metachop.met"
    } else {
#line 18 "metachop.met"
        tokenAhead = 0 ;
#line 18 "metachop.met"
    }
#line 18 "metachop.met"
#line 19 "metachop.met"
    {
#line 19 "metachop.met"
        PPTREE _ptTree0=0,_ptRes0=0;
#line 19 "metachop.met"
        _ptRes0= MakeTree(CHOP_DEF, 2);
#line 19 "metachop.met"
        {
#line 19 "metachop.met"
            PPTREE _ptTree1=0,_ptRes1=0;
#line 19 "metachop.met"
            _ptRes1= MakeTree(IDENT, 1);
#line 19 "metachop.met"
            (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 19 "metachop.met"
            if ( ! TERM_OR_META(IDENT,"IDENT") || !(BUILD_TERM_META(_ptTree1))) {
#line 19 "metachop.met"
                MulFreeTree(5,_ptRes1,_ptTree1,_ptRes0,_ptTree0,langTree);
                TOKEN_EXIT(prog_exit,"IDENT")
#line 19 "metachop.met"
            } else {
#line 19 "metachop.met"
                tokenAhead = 0 ;
#line 19 "metachop.met"
            }
#line 19 "metachop.met"
            ReplaceTree(_ptRes1, 1, _ptTree1);
#line 19 "metachop.met"
            _ptTree0=_ptRes1;
#line 19 "metachop.met"
        }
#line 19 "metachop.met"
        ReplaceTree(_ptRes0, 1, _ptTree0);
#line 19 "metachop.met"
        langTree=_ptRes0;
#line 19 "metachop.met"
    }
#line 19 "metachop.met"
#line 20 "metachop.met"
     parseLanguage = AllocString(Value(langTree));
#line 20 "metachop.met"
#line 21 "metachop.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 21 "metachop.met"
    if (  !SEE_TOKEN( PVIR,";") || !(CommTerm(),1)) {
#line 21 "metachop.met"
        MulFreeTree(1,langTree);
        TOKEN_EXIT(prog_exit,";")
#line 21 "metachop.met"
    } else {
#line 21 "metachop.met"
        tokenAhead = 0 ;
#line 21 "metachop.met"
    }
#line 21 "metachop.met"
#line 22 "metachop.met"
    {
#line 22 "metachop.met"
        PPTREE _ptTree0=0;
#line 22 "metachop.met"
        if ( (_ptTree0=NQUICK_CALL(_Tak(program)(error_free), 119, metachop))== (PPTREE) -1 ) {
#line 22 "metachop.met"
            MulFreeTree(2,_ptTree0,langTree);
            PROG_EXIT(prog_exit,"prog")
#line 22 "metachop.met"
        }
#line 22 "metachop.met"
        ReplaceTree(langTree , 2 , _ptTree0);
#line 22 "metachop.met"
    }
#line 22 "metachop.met"
#line 23 "metachop.met"
    {
#line 23 "metachop.met"
        _retValue = langTree ;
#line 23 "metachop.met"
        goto prog_ret;
#line 23 "metachop.met"
        
#line 23 "metachop.met"
    }
#line 23 "metachop.met"
#line 23 "metachop.met"
#line 23 "metachop.met"

#line 24 "metachop.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 24 "metachop.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 24 "metachop.met"
return((PPTREE) 0);
#line 24 "metachop.met"

#line 24 "metachop.met"
prog_exit :
#line 24 "metachop.met"

#line 24 "metachop.met"
    _Debug = TRACE_RULE("prog",TRACE_EXIT,(PPTREE)0);
#line 24 "metachop.met"
    _funcLevel--;
#line 24 "metachop.met"
    return((PPTREE) -1) ;
#line 24 "metachop.met"

#line 24 "metachop.met"
prog_ret :
#line 24 "metachop.met"
    
#line 24 "metachop.met"
    _Debug = TRACE_RULE("prog",TRACE_RETURN,_retValue);
#line 24 "metachop.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 24 "metachop.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 24 "metachop.met"
    return _retValue ;
#line 24 "metachop.met"
}
#line 24 "metachop.met"

#line 24 "metachop.met"
