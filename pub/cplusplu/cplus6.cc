/*************************************************************************/
/*                                                                       */
/*        Produced by MetaGen version 2.0  -    1989-2006                 */
/*       Syntaxic Analyzer Meta Generator developped by                  */
/*                  Eric Lavillonniere                                   */
/*                                                                       */
/*************************************************************************/

#include "token.h"
#include "cplus.h"


#line 838 "cplus.met"
PPTREE cplus::other_config ( int error_free)
#line 838 "cplus.met"
{
#line 838 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 838 "cplus.met"
    int _value,_nbPre = 0 ;
#line 838 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 838 "cplus.met"
    int _Debug = TRACE_RULE("other_config",TRACE_ENTER,(PPTREE)0);
#line 838 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 838 "cplus.met"
#line 839 "cplus.met"
    {
#line 839 "cplus.met"
        PPTREE _ptTree0=0;
#line 839 "cplus.met"
        {
#line 839 "cplus.met"
            PPTREE _ptTree1=0,_ptRes1=0;
#line 839 "cplus.met"
            _ptRes1= MakeTree(PRAGMA, 1);
#line 839 "cplus.met"
            (tokenAhead == 8|| (LexPragma(),TRACE_LEX(1)));
#line 839 "cplus.met"
            if ( ! TERM_OR_META(PRAGMA_CONTENT,"PRAGMA_CONTENT") || !(BUILD_TERM_META(_ptTree1))) {
#line 839 "cplus.met"
                MulFreeTree(3,_ptRes1,_ptTree1,_ptTree0);
                TOKEN_EXIT(other_config_exit,"PRAGMA_CONTENT")
#line 839 "cplus.met"
            } else {
#line 839 "cplus.met"
                tokenAhead = 0 ;
#line 839 "cplus.met"
            }
#line 839 "cplus.met"
            ReplaceTree(_ptRes1, 1, _ptTree1);
#line 839 "cplus.met"
            _ptTree0=_ptRes1;
#line 839 "cplus.met"
        }
#line 839 "cplus.met"
        _retValue =_ptTree0;
#line 839 "cplus.met"
        goto other_config_ret;
#line 839 "cplus.met"
    }
#line 839 "cplus.met"
#line 839 "cplus.met"
#line 839 "cplus.met"

#line 840 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 840 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 840 "cplus.met"
return((PPTREE) 0);
#line 840 "cplus.met"

#line 840 "cplus.met"
other_config_exit :
#line 840 "cplus.met"

#line 840 "cplus.met"
    _Debug = TRACE_RULE("other_config",TRACE_EXIT,(PPTREE)0);
#line 840 "cplus.met"
    _funcLevel--;
#line 840 "cplus.met"
    return((PPTREE) -1) ;
#line 840 "cplus.met"

#line 840 "cplus.met"
other_config_ret :
#line 840 "cplus.met"
    
#line 840 "cplus.met"
    _Debug = TRACE_RULE("other_config",TRACE_RETURN,_retValue);
#line 840 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 840 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 840 "cplus.met"
    return _retValue ;
#line 840 "cplus.met"
}
#line 840 "cplus.met"

#line 840 "cplus.met"
#line 3247 "cplus.met"
PPTREE cplus::parameter_list ( int error_free)
#line 3247 "cplus.met"
{
#line 3247 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 3247 "cplus.met"
    int _value,_nbPre = 0 ;
#line 3247 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 3247 "cplus.met"
    int _Debug = TRACE_RULE("parameter_list",TRACE_ENTER,(PPTREE)0);
#line 3247 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 3247 "cplus.met"
#line 3247 "cplus.met"
    PPTREE _addlist1 = (PPTREE) 0;
#line 3247 "cplus.met"
#line 3247 "cplus.met"
    PPTREE paramList = (PPTREE) 0,none = (PPTREE) 0;
#line 3247 "cplus.met"
#line 3249 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3249 "cplus.met"
    if (  !SEE_TOKEN( POUV,"(") || !(CommTerm(),1)) {
#line 3249 "cplus.met"
        MulFreeTree(3,_addlist1,none,paramList);
        TOKEN_EXIT(parameter_list_exit,"(")
#line 3249 "cplus.met"
    } else {
#line 3249 "cplus.met"
        tokenAhead = 0 ;
#line 3249 "cplus.met"
    }
#line 3249 "cplus.met"
#line 3250 "cplus.met"
    if ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN( IDENT,"IDENT")){
#line 3250 "cplus.met"
#line 3251 "cplus.met"
#line 3252 "cplus.met"
         { int exit = 0 ;
#line 3252 "cplus.met"
#line 3253 "cplus.met"
        {
#line 3253 "cplus.met"
            PPTREE _ptTree0=0;
#line 3253 "cplus.met"
            {
#line 3253 "cplus.met"
                PPTREE _ptTree1=0,_ptRes1=0;
#line 3253 "cplus.met"
                _ptRes1= MakeTree(IDENT, 1);
#line 3253 "cplus.met"
                (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3253 "cplus.met"
                if ( ! TERM_OR_META(IDENT,"IDENT") || !(BUILD_TERM_META(_ptTree1))) {
#line 3253 "cplus.met"
                    MulFreeTree(6,_ptRes1,_ptTree1,_ptTree0,_addlist1,none,paramList);
                    TOKEN_EXIT(parameter_list_exit,"IDENT")
#line 3253 "cplus.met"
                } else {
#line 3253 "cplus.met"
                    tokenAhead = 0 ;
#line 3253 "cplus.met"
                }
#line 3253 "cplus.met"
                ReplaceTree(_ptRes1, 1, _ptTree1);
#line 3253 "cplus.met"
                _ptTree0=_ptRes1;
#line 3253 "cplus.met"
            }
#line 3253 "cplus.met"
            paramList =AddList(paramList , _ptTree0);
#line 3253 "cplus.met"
        }
#line 3253 "cplus.met"
#line 3253 "cplus.met"
        _addlist1 = paramList ;
#line 3253 "cplus.met"
#line 3254 "cplus.met"
        while ((! ( exit )) && 
#line 3254 "cplus.met"
              ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN(VIRG,",") && (tokenAhead = 0,CommTerm(),1))) { 
#line 3254 "cplus.met"
#line 3255 "cplus.met"
            if ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN( IDENT,"IDENT")){
#line 3255 "cplus.met"
#line 3256 "cplus.met"
#line 3256 "cplus.met"
                {
#line 3256 "cplus.met"
                    PPTREE _ptTree0=0;
#line 3256 "cplus.met"
                    {
#line 3256 "cplus.met"
                        PPTREE _ptTree1=0,_ptRes1=0;
#line 3256 "cplus.met"
                        _ptRes1= MakeTree(IDENT, 1);
#line 3256 "cplus.met"
                        (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3256 "cplus.met"
                        if ( ! TERM_OR_META(IDENT,"IDENT") || !(BUILD_TERM_META(_ptTree1))) {
#line 3256 "cplus.met"
                            MulFreeTree(6,_ptRes1,_ptTree1,_ptTree0,_addlist1,none,paramList);
                            TOKEN_EXIT(parameter_list_exit,"IDENT")
#line 3256 "cplus.met"
                        } else {
#line 3256 "cplus.met"
                            tokenAhead = 0 ;
#line 3256 "cplus.met"
                        }
#line 3256 "cplus.met"
                        ReplaceTree(_ptRes1, 1, _ptTree1);
#line 3256 "cplus.met"
                        _ptTree0=_ptRes1;
#line 3256 "cplus.met"
                    }
#line 3256 "cplus.met"
                    _addlist1 =AddList(_addlist1 , _ptTree0);
#line 3256 "cplus.met"
                }
#line 3256 "cplus.met"
#line 3256 "cplus.met"
                if (paramList){
#line 3256 "cplus.met"
#line 3256 "cplus.met"
                    _addlist1 = SonTree (_addlist1 ,2 );
#line 3256 "cplus.met"
                } else {
#line 3256 "cplus.met"
#line 3256 "cplus.met"
                    paramList = _addlist1 ;
#line 3256 "cplus.met"
                }
#line 3256 "cplus.met"
            } else {
#line 3256 "cplus.met"
#line 3258 "cplus.met"
#line 3259 "cplus.met"
                {
#line 3259 "cplus.met"
                    PPTREE _ptTree0=0;
#line 3259 "cplus.met"
                    {
#line 3259 "cplus.met"
                        PPTREE _ptRes1=0;
#line 3259 "cplus.met"
                        _ptRes1= MakeTree(VAR_LIST, 0);
#line 3259 "cplus.met"
                        _ptTree0=_ptRes1;
#line 3259 "cplus.met"
                    }
#line 3259 "cplus.met"
                    _addlist1 =AddList(_addlist1 , _ptTree0);
#line 3259 "cplus.met"
                }
#line 3259 "cplus.met"
#line 3259 "cplus.met"
                if (paramList){
#line 3259 "cplus.met"
#line 3259 "cplus.met"
                    _addlist1 = SonTree (_addlist1 ,2 );
#line 3259 "cplus.met"
                } else {
#line 3259 "cplus.met"
#line 3259 "cplus.met"
                    paramList = _addlist1 ;
#line 3259 "cplus.met"
                }
#line 3259 "cplus.met"
#line 3260 "cplus.met"
                 exit = 1 ;
#line 3260 "cplus.met"
#line 3261 "cplus.met"
                if ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN(POINPOINPOIN,"...") && (tokenAhead = 0,CommTerm(),1)){
#line 3261 "cplus.met"
#line 3261 "cplus.met"
                }
#line 3261 "cplus.met"
#line 3261 "cplus.met"
            }
#line 3261 "cplus.met"
        } 
#line 3261 "cplus.met"
#line 3264 "cplus.met"
        if ((! ( exit )) && 
#line 3264 "cplus.met"
           ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN(POINPOINPOIN,"...") && (tokenAhead = 0,CommTerm(),1))){
#line 3264 "cplus.met"
#line 3265 "cplus.met"
            {
#line 3265 "cplus.met"
                PPTREE _ptTree0=0;
#line 3265 "cplus.met"
                {
#line 3265 "cplus.met"
                    PPTREE _ptRes1=0;
#line 3265 "cplus.met"
                    _ptRes1= MakeTree(VAR_LIST, 0);
#line 3265 "cplus.met"
                    _ptTree0=_ptRes1;
#line 3265 "cplus.met"
                }
#line 3265 "cplus.met"
                paramList =AddList(paramList , _ptTree0);
#line 3265 "cplus.met"
            }
#line 3265 "cplus.met"
#line 3265 "cplus.met"
        }
#line 3265 "cplus.met"
#line 3266 "cplus.met"
         } 
#line 3266 "cplus.met"
#line 3266 "cplus.met"
#line 3266 "cplus.met"
    } else {
#line 3266 "cplus.met"
#line 3269 "cplus.met"
        paramList =AddList(paramList ,none );
#line 3269 "cplus.met"
    }
#line 3269 "cplus.met"
#line 3270 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3270 "cplus.met"
    if (  !SEE_TOKEN( PFER,")") || !(CommTerm(),1)) {
#line 3270 "cplus.met"
        MulFreeTree(3,_addlist1,none,paramList);
        TOKEN_EXIT(parameter_list_exit,")")
#line 3270 "cplus.met"
    } else {
#line 3270 "cplus.met"
        tokenAhead = 0 ;
#line 3270 "cplus.met"
    }
#line 3270 "cplus.met"
#line 3271 "cplus.met"
    {
#line 3271 "cplus.met"
        _retValue = paramList ;
#line 3271 "cplus.met"
        goto parameter_list_ret;
#line 3271 "cplus.met"
        
#line 3271 "cplus.met"
    }
#line 3271 "cplus.met"
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
parameter_list_exit :
#line 3272 "cplus.met"

#line 3272 "cplus.met"
    _Debug = TRACE_RULE("parameter_list",TRACE_EXIT,(PPTREE)0);
#line 3272 "cplus.met"
    _funcLevel--;
#line 3272 "cplus.met"
    return((PPTREE) -1) ;
#line 3272 "cplus.met"

#line 3272 "cplus.met"
parameter_list_ret :
#line 3272 "cplus.met"
    
#line 3272 "cplus.met"
    _Debug = TRACE_RULE("parameter_list",TRACE_RETURN,_retValue);
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
#line 3274 "cplus.met"
PPTREE cplus::parameter_list_extended ( int error_free)
#line 3274 "cplus.met"
{
#line 3274 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 3274 "cplus.met"
    int _value,_nbPre = 0 ;
#line 3274 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 3274 "cplus.met"
    int _Debug = TRACE_RULE("parameter_list_extended",TRACE_ENTER,(PPTREE)0);
#line 3274 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 3274 "cplus.met"
#line 3274 "cplus.met"
    PPTREE _addlist1 = (PPTREE) 0;
#line 3274 "cplus.met"
#line 3274 "cplus.met"
    PPTREE paramList = (PPTREE) 0,valTree = (PPTREE) 0;
#line 3274 "cplus.met"
#line 3276 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3276 "cplus.met"
    if (  !SEE_TOKEN( POUV,"(") || !(CommTerm(),1)) {
#line 3276 "cplus.met"
        MulFreeTree(3,_addlist1,paramList,valTree);
        TOKEN_EXIT(parameter_list_extended_exit,"(")
#line 3276 "cplus.met"
    } else {
#line 3276 "cplus.met"
        tokenAhead = 0 ;
#line 3276 "cplus.met"
    }
#line 3276 "cplus.met"
#line 3277 "cplus.met"
     { int followed = 0;
#line 3277 "cplus.met"
#line 3278 "cplus.met"
    if (! ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN( PFER,")"))){
#line 3278 "cplus.met"
#line 3279 "cplus.met"
#line 3280 "cplus.met"
         { int exit = 0 ;
#line 3280 "cplus.met"
#line 3281 "cplus.met"
        if ((NPUSH_CALL_AFF_VERIF(valTree = ,_Tak(arg_declarator_followed_strict), 12, cplus))){
#line 3281 "cplus.met"
#line 3282 "cplus.met"
#line 3283 "cplus.met"
             followed = 1 ;
#line 3283 "cplus.met"
#line 3284 "cplus.met"
            paramList =AddList(paramList ,valTree );
#line 3284 "cplus.met"
#line 3284 "cplus.met"
#line 3284 "cplus.met"
        } else {
#line 3284 "cplus.met"
#line 3287 "cplus.met"
            if ((NPUSH_CALL_AFF_VERIF(valTree = ,_Tak(arg_declarator_strict), 13, cplus))){
#line 3287 "cplus.met"
#line 3288 "cplus.met"
                paramList =AddList(paramList ,valTree );
#line 3288 "cplus.met"
#line 3288 "cplus.met"
            } else {
#line 3288 "cplus.met"
#line 3290 "cplus.met"
#line 3291 "cplus.met"
                if (((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&TERM_OR_META(IDENT,"IDENT") && !(tokenAhead = 0) && ( BUILD_TERM_META(valTree))) ){
#line 3291 "cplus.met"
#line 3292 "cplus.met"
                    {
#line 3292 "cplus.met"
                        PPTREE _ptTree0=0;
#line 3292 "cplus.met"
                        {
#line 3292 "cplus.met"
                            PPTREE _ptRes1=0;
#line 3292 "cplus.met"
                            _ptRes1= MakeTree(IDENT, 1);
#line 3292 "cplus.met"
                            ReplaceTree(_ptRes1, 1, valTree );
#line 3292 "cplus.met"
                            _ptTree0=_ptRes1;
#line 3292 "cplus.met"
                        }
#line 3292 "cplus.met"
                        paramList =AddList(paramList , _ptTree0);
#line 3292 "cplus.met"
                    }
#line 3292 "cplus.met"
#line 3292 "cplus.met"
                }
#line 3292 "cplus.met"
#line 3293 "cplus.met"
                if (((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN( POINPOINPOIN,"...")) || 
#line 3293 "cplus.met"
                   ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN( VIRG,","))){
#line 3293 "cplus.met"
#line 3294 "cplus.met"
                     followed = 1;
#line 3294 "cplus.met"
                }
#line 3294 "cplus.met"
#line 3295 "cplus.met"
                if ((! ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN( PFER,")"))) && 
#line 3295 "cplus.met"
                   (! ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN( POINPOINPOIN,"...")))){
#line 3295 "cplus.met"
#line 3296 "cplus.met"
#line 3297 "cplus.met"
                     followed = 1;
#line 3297 "cplus.met"
#line 3298 "cplus.met"
                    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3298 "cplus.met"
                    if (  !SEE_TOKEN( VIRG,",") || !(CommTerm(),1)) {
#line 3298 "cplus.met"
                        MulFreeTree(3,_addlist1,paramList,valTree);
                        TOKEN_EXIT(parameter_list_extended_exit,",")
#line 3298 "cplus.met"
                    } else {
#line 3298 "cplus.met"
                        tokenAhead = 0 ;
#line 3298 "cplus.met"
                    }
#line 3298 "cplus.met"
#line 3298 "cplus.met"
#line 3298 "cplus.met"
                }
#line 3298 "cplus.met"
#line 3298 "cplus.met"
            }
#line 3298 "cplus.met"
        }
#line 3298 "cplus.met"
#line 3298 "cplus.met"
        _addlist1 = paramList ;
#line 3298 "cplus.met"
#line 3301 "cplus.met"
        while ( followed && !exit ) { 
#line 3301 "cplus.met"
#line 3302 "cplus.met"
#line 3303 "cplus.met"
             followed = 0 ;
#line 3303 "cplus.met"
#line 3304 "cplus.met"
            if ((NPUSH_CALL_AFF_VERIF(valTree = ,_Tak(arg_declarator_followed), 11, cplus))){
#line 3304 "cplus.met"
#line 3305 "cplus.met"
#line 3306 "cplus.met"
                 followed = 1 ;
#line 3306 "cplus.met"
#line 3307 "cplus.met"
                _addlist1 =AddList(_addlist1 ,valTree );
#line 3307 "cplus.met"
#line 3307 "cplus.met"
                if (paramList){
#line 3307 "cplus.met"
#line 3307 "cplus.met"
                    _addlist1 = SonTree (_addlist1 ,2 );
#line 3307 "cplus.met"
                } else {
#line 3307 "cplus.met"
#line 3307 "cplus.met"
                    paramList = _addlist1 ;
#line 3307 "cplus.met"
                }
#line 3307 "cplus.met"
#line 3307 "cplus.met"
#line 3307 "cplus.met"
            } else {
#line 3307 "cplus.met"
#line 3310 "cplus.met"
                if ((NPUSH_CALL_AFF_VERIF(valTree = ,_Tak(arg_declarator), 7, cplus))){
#line 3310 "cplus.met"
#line 3311 "cplus.met"
#line 3311 "cplus.met"
                    _addlist1 =AddList(_addlist1 ,valTree );
#line 3311 "cplus.met"
#line 3311 "cplus.met"
                    if (paramList){
#line 3311 "cplus.met"
#line 3311 "cplus.met"
                        _addlist1 = SonTree (_addlist1 ,2 );
#line 3311 "cplus.met"
                    } else {
#line 3311 "cplus.met"
#line 3311 "cplus.met"
                        paramList = _addlist1 ;
#line 3311 "cplus.met"
                    }
#line 3311 "cplus.met"
                } else {
#line 3311 "cplus.met"
#line 3313 "cplus.met"
#line 3314 "cplus.met"
                    if (((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&TERM_OR_META(IDENT,"IDENT") && !(tokenAhead = 0) && ( BUILD_TERM_META(valTree))) ){
#line 3314 "cplus.met"
#line 3315 "cplus.met"
#line 3316 "cplus.met"
                        {
#line 3316 "cplus.met"
                            PPTREE _ptTree0=0;
#line 3316 "cplus.met"
                            {
#line 3316 "cplus.met"
                                PPTREE _ptRes1=0;
#line 3316 "cplus.met"
                                _ptRes1= MakeTree(IDENT, 1);
#line 3316 "cplus.met"
                                ReplaceTree(_ptRes1, 1, valTree );
#line 3316 "cplus.met"
                                _ptTree0=_ptRes1;
#line 3316 "cplus.met"
                            }
#line 3316 "cplus.met"
                            _addlist1 =AddList(_addlist1 , _ptTree0);
#line 3316 "cplus.met"
                        }
#line 3316 "cplus.met"
#line 3316 "cplus.met"
                        if (paramList){
#line 3316 "cplus.met"
#line 3316 "cplus.met"
                            _addlist1 = SonTree (_addlist1 ,2 );
#line 3316 "cplus.met"
                        } else {
#line 3316 "cplus.met"
#line 3316 "cplus.met"
                            paramList = _addlist1 ;
#line 3316 "cplus.met"
                        }
#line 3316 "cplus.met"
#line 3317 "cplus.met"
                        if (((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN( POINPOINPOIN,"...")) || 
#line 3317 "cplus.met"
                           ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN( VIRG,","))){
#line 3317 "cplus.met"
#line 3318 "cplus.met"
                             followed = 1;
#line 3318 "cplus.met"
                        }
#line 3318 "cplus.met"
#line 3319 "cplus.met"
                        if ((! ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN( PFER,")"))) && 
#line 3319 "cplus.met"
                           (! ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN( POINPOINPOIN,"...")))){
#line 3319 "cplus.met"
#line 3320 "cplus.met"
#line 3321 "cplus.met"
                             followed = 1;
#line 3321 "cplus.met"
#line 3322 "cplus.met"
                            (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3322 "cplus.met"
                            if (  !SEE_TOKEN( VIRG,",") || !(CommTerm(),1)) {
#line 3322 "cplus.met"
                                MulFreeTree(3,_addlist1,paramList,valTree);
                                TOKEN_EXIT(parameter_list_extended_exit,",")
#line 3322 "cplus.met"
                            } else {
#line 3322 "cplus.met"
                                tokenAhead = 0 ;
#line 3322 "cplus.met"
                            }
#line 3322 "cplus.met"
#line 3322 "cplus.met"
#line 3322 "cplus.met"
                        }
#line 3322 "cplus.met"
#line 3322 "cplus.met"
#line 3323 "cplus.met"
                    } else {
#line 3323 "cplus.met"
#line 3326 "cplus.met"
#line 3327 "cplus.met"
                        {
#line 3327 "cplus.met"
                            PPTREE _ptTree0=0;
#line 3327 "cplus.met"
                            {
#line 3327 "cplus.met"
                                PPTREE _ptRes1=0;
#line 3327 "cplus.met"
                                _ptRes1= MakeTree(VAR_LIST, 0);
#line 3327 "cplus.met"
                                _ptTree0=_ptRes1;
#line 3327 "cplus.met"
                            }
#line 3327 "cplus.met"
                            _addlist1 =AddList(_addlist1 , _ptTree0);
#line 3327 "cplus.met"
                        }
#line 3327 "cplus.met"
#line 3327 "cplus.met"
                        if (paramList){
#line 3327 "cplus.met"
#line 3327 "cplus.met"
                            _addlist1 = SonTree (_addlist1 ,2 );
#line 3327 "cplus.met"
                        } else {
#line 3327 "cplus.met"
#line 3327 "cplus.met"
                            paramList = _addlist1 ;
#line 3327 "cplus.met"
                        }
#line 3327 "cplus.met"
#line 3328 "cplus.met"
                         exit = 1 ;
#line 3328 "cplus.met"
#line 3329 "cplus.met"
                        if ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN(POINPOINPOIN,"...") && (tokenAhead = 0,CommTerm(),1)){
#line 3329 "cplus.met"
#line 3329 "cplus.met"
                        }
#line 3329 "cplus.met"
#line 3331 "cplus.met"
                        if (! ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN( PFER,")"))){
#line 3331 "cplus.met"
#line 3332 "cplus.met"
                            (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3332 "cplus.met"
                            if (  !SEE_TOKEN( PFER,")") || !(CommTerm(),1)) {
#line 3332 "cplus.met"
                                MulFreeTree(3,_addlist1,paramList,valTree);
                                TOKEN_EXIT(parameter_list_extended_exit,")")
#line 3332 "cplus.met"
                            } else {
#line 3332 "cplus.met"
                                tokenAhead = 0 ;
#line 3332 "cplus.met"
                            }
#line 3332 "cplus.met"
                        }
#line 3332 "cplus.met"
#line 3332 "cplus.met"
                    }
#line 3332 "cplus.met"
#line 3332 "cplus.met"
                }
#line 3332 "cplus.met"
            }
#line 3332 "cplus.met"
#line 3332 "cplus.met"
        } 
#line 3332 "cplus.met"
#line 3336 "cplus.met"
        if ((! ( exit )) && 
#line 3336 "cplus.met"
           ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN(POINPOINPOIN,"...") && (tokenAhead = 0,CommTerm(),1))){
#line 3336 "cplus.met"
#line 3337 "cplus.met"
            {
#line 3337 "cplus.met"
                PPTREE _ptTree0=0;
#line 3337 "cplus.met"
                {
#line 3337 "cplus.met"
                    PPTREE _ptRes1=0;
#line 3337 "cplus.met"
                    _ptRes1= MakeTree(VAR_LIST, 0);
#line 3337 "cplus.met"
                    _ptTree0=_ptRes1;
#line 3337 "cplus.met"
                }
#line 3337 "cplus.met"
                paramList =AddList(paramList , _ptTree0);
#line 3337 "cplus.met"
            }
#line 3337 "cplus.met"
#line 3337 "cplus.met"
        }
#line 3337 "cplus.met"
#line 3338 "cplus.met"
         }  
#line 3338 "cplus.met"
#line 3338 "cplus.met"
#line 3338 "cplus.met"
    }
#line 3338 "cplus.met"
#line 3340 "cplus.met"
     } 
#line 3340 "cplus.met"
#line 3341 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3341 "cplus.met"
    if (  !SEE_TOKEN( PFER,")") || !(CommTerm(),1)) {
#line 3341 "cplus.met"
        MulFreeTree(3,_addlist1,paramList,valTree);
        TOKEN_EXIT(parameter_list_extended_exit,")")
#line 3341 "cplus.met"
    } else {
#line 3341 "cplus.met"
        tokenAhead = 0 ;
#line 3341 "cplus.met"
    }
#line 3341 "cplus.met"
#line 3342 "cplus.met"
    {
#line 3342 "cplus.met"
        _retValue = paramList ;
#line 3342 "cplus.met"
        goto parameter_list_extended_ret;
#line 3342 "cplus.met"
        
#line 3342 "cplus.met"
    }
#line 3342 "cplus.met"
#line 3342 "cplus.met"
#line 3342 "cplus.met"

#line 3343 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 3343 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 3343 "cplus.met"
return((PPTREE) 0);
#line 3343 "cplus.met"

#line 3343 "cplus.met"
parameter_list_extended_exit :
#line 3343 "cplus.met"

#line 3343 "cplus.met"
    _Debug = TRACE_RULE("parameter_list_extended",TRACE_EXIT,(PPTREE)0);
#line 3343 "cplus.met"
    _funcLevel--;
#line 3343 "cplus.met"
    return((PPTREE) -1) ;
#line 3343 "cplus.met"

#line 3343 "cplus.met"
parameter_list_extended_ret :
#line 3343 "cplus.met"
    
#line 3343 "cplus.met"
    _Debug = TRACE_RULE("parameter_list_extended",TRACE_RETURN,_retValue);
#line 3343 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 3343 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 3343 "cplus.met"
    return _retValue ;
#line 3343 "cplus.met"
}
#line 3343 "cplus.met"

#line 3343 "cplus.met"
#line 3767 "cplus.met"
PPTREE cplus::parse_entry ( int error_free)
#line 3767 "cplus.met"
{
#line 3767 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 3767 "cplus.met"
    int _value,_nbPre = 0 ;
#line 3767 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 3767 "cplus.met"
    int _Debug = TRACE_RULE("parse_entry",TRACE_ENTER,(PPTREE)0);
#line 3767 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 3767 "cplus.met"
#line 3767 "cplus.met"
    PPTREE retValue = (PPTREE) 0;
#line 3767 "cplus.met"
#line 3769 "cplus.met"
    if ((((((NPUSH_CALL_AFF_VERIF(retValue = ,_Tak(func_declaration), 81, cplus)) || 
#line 3769 "cplus.met"
           (NPUSH_CALL_AFF_VERIF(retValue = ,_Tak(statement), 145, cplus))) || 
#line 3769 "cplus.met"
          (NPUSH_CALL_AFF_VERIF(retValue = ,_Tak(data_declaration), 45, cplus))) || 
#line 3769 "cplus.met"
         (NPUSH_CALL_AFF_VERIF(retValue = ,_Tak(switch_list), 149, cplus))) || 
#line 3769 "cplus.met"
        (NPUSH_CALL_AFF_VERIF(retValue = ,_Tak(switch_elem), 148, cplus))) || 
#line 3769 "cplus.met"
       (NPUSH_CALL_AFF_VERIF(retValue = ,_Tak(expression), 67, cplus))){
#line 3769 "cplus.met"
#line 3770 "cplus.met"
        {
#line 3770 "cplus.met"
            _retValue = retValue ;
#line 3770 "cplus.met"
            goto parse_entry_ret;
#line 3770 "cplus.met"
            
#line 3770 "cplus.met"
        }
#line 3770 "cplus.met"
    } else {
#line 3770 "cplus.met"
#line 3772 "cplus.met"
        if ( (NQUICK_CALL(_Tak(statement)(error_free), 145, cplus))== (PPTREE) -1 ) {
#line 3772 "cplus.met"
            MulFreeTree(1,retValue);
            PROG_EXIT(parse_entry_exit,"parse_entry")
#line 3772 "cplus.met"
        }
#line 3772 "cplus.met"
    }
#line 3772 "cplus.met"
#line 3772 "cplus.met"
#line 3772 "cplus.met"

#line 3773 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 3773 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 3773 "cplus.met"
return((PPTREE) 0);
#line 3773 "cplus.met"

#line 3773 "cplus.met"
parse_entry_exit :
#line 3773 "cplus.met"

#line 3773 "cplus.met"
    _Debug = TRACE_RULE("parse_entry",TRACE_EXIT,(PPTREE)0);
#line 3773 "cplus.met"
    _funcLevel--;
#line 3773 "cplus.met"
    return((PPTREE) -1) ;
#line 3773 "cplus.met"

#line 3773 "cplus.met"
parse_entry_ret :
#line 3773 "cplus.met"
    
#line 3773 "cplus.met"
    _Debug = TRACE_RULE("parse_entry",TRACE_RETURN,_retValue);
#line 3773 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 3773 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 3773 "cplus.met"
    return _retValue ;
#line 3773 "cplus.met"
}
#line 3773 "cplus.met"

#line 3773 "cplus.met"
#line 2877 "cplus.met"
PPTREE cplus::pm_expression ( int error_free)
#line 2877 "cplus.met"
{
#line 2877 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 2877 "cplus.met"
    int _value,_nbPre = 0 ;
#line 2877 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 2877 "cplus.met"
    int _Debug = TRACE_RULE("pm_expression",TRACE_ENTER,(PPTREE)0);
#line 2877 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 2877 "cplus.met"
#line 2877 "cplus.met"
    PPTREE expTree = (PPTREE) 0;
#line 2877 "cplus.met"
#line 2879 "cplus.met"
    if ( (expTree=NQUICK_CALL(_Tak(cast_expression)(error_free), 26, cplus))== (PPTREE) -1 ) {
#line 2879 "cplus.met"
        MulFreeTree(1,expTree);
        PROG_EXIT(pm_expression_exit,"pm_expression")
#line 2879 "cplus.met"
    }
#line 2879 "cplus.met"
#line 2880 "cplus.met"
    while (((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN( POINETOI,".*")) || 
#line 2880 "cplus.met"
          ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN( TIRESUPEETOI,"->*"))) { 
#line 2880 "cplus.met"
#line 2881 "cplus.met"
        (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 2881 "cplus.met"
        switch( lexEl.Value) {
#line 2881 "cplus.met"
#line 2882 "cplus.met"
            case POINETOI : 
#line 2882 "cplus.met"
                tokenAhead = 0 ;
#line 2882 "cplus.met"
                CommTerm();
#line 2882 "cplus.met"
#line 2882 "cplus.met"
                {
#line 2882 "cplus.met"
                    PPTREE _ptTree0=0,_ptRes0=0;
#line 2882 "cplus.met"
                    _ptRes0= MakeTree(DOT_MEMB, 2);
#line 2882 "cplus.met"
                    ReplaceTree(_ptRes0, 1, expTree );
#line 2882 "cplus.met"
                    if ( (_ptTree0=NQUICK_CALL(_Tak(cast_expression)(error_free), 26, cplus))== (PPTREE) -1 ) {
#line 2882 "cplus.met"
                        MulFreeTree(3,_ptRes0,_ptTree0,expTree);
                        PROG_EXIT(pm_expression_exit,"pm_expression")
#line 2882 "cplus.met"
                    }
#line 2882 "cplus.met"
                    ReplaceTree(_ptRes0, 2, _ptTree0);
#line 2882 "cplus.met"
                    expTree=_ptRes0;
#line 2882 "cplus.met"
                }
#line 2882 "cplus.met"
                break;
#line 2882 "cplus.met"
#line 2883 "cplus.met"
            case TIRESUPEETOI : 
#line 2883 "cplus.met"
                tokenAhead = 0 ;
#line 2883 "cplus.met"
                CommTerm();
#line 2883 "cplus.met"
#line 2883 "cplus.met"
                {
#line 2883 "cplus.met"
                    PPTREE _ptTree0=0,_ptRes0=0;
#line 2883 "cplus.met"
                    _ptRes0= MakeTree(ARROW_MEMB, 2);
#line 2883 "cplus.met"
                    ReplaceTree(_ptRes0, 1, expTree );
#line 2883 "cplus.met"
                    if ( (_ptTree0=NQUICK_CALL(_Tak(cast_expression)(error_free), 26, cplus))== (PPTREE) -1 ) {
#line 2883 "cplus.met"
                        MulFreeTree(3,_ptRes0,_ptTree0,expTree);
                        PROG_EXIT(pm_expression_exit,"pm_expression")
#line 2883 "cplus.met"
                    }
#line 2883 "cplus.met"
                    ReplaceTree(_ptRes0, 2, _ptTree0);
#line 2883 "cplus.met"
                    expTree=_ptRes0;
#line 2883 "cplus.met"
                }
#line 2883 "cplus.met"
                break;
#line 2883 "cplus.met"
            default :
#line 2883 "cplus.met"
                MulFreeTree(1,expTree);
                CASE_EXIT(pm_expression_exit,"either .* or ->*")
#line 2883 "cplus.met"
                break;
#line 2883 "cplus.met"
        }
#line 2883 "cplus.met"
    } 
#line 2883 "cplus.met"
#line 2885 "cplus.met"
    {
#line 2885 "cplus.met"
        _retValue = expTree ;
#line 2885 "cplus.met"
        goto pm_expression_ret;
#line 2885 "cplus.met"
        
#line 2885 "cplus.met"
    }
#line 2885 "cplus.met"
#line 2885 "cplus.met"
#line 2885 "cplus.met"

#line 2886 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2886 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 2886 "cplus.met"
return((PPTREE) 0);
#line 2886 "cplus.met"

#line 2886 "cplus.met"
pm_expression_exit :
#line 2886 "cplus.met"

#line 2886 "cplus.met"
    _Debug = TRACE_RULE("pm_expression",TRACE_EXIT,(PPTREE)0);
#line 2886 "cplus.met"
    _funcLevel--;
#line 2886 "cplus.met"
    return((PPTREE) -1) ;
#line 2886 "cplus.met"

#line 2886 "cplus.met"
pm_expression_ret :
#line 2886 "cplus.met"
    
#line 2886 "cplus.met"
    _Debug = TRACE_RULE("pm_expression",TRACE_RETURN,_retValue);
#line 2886 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2886 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 2886 "cplus.met"
    return _retValue ;
#line 2886 "cplus.met"
}
#line 2886 "cplus.met"

#line 2886 "cplus.met"
#line 3055 "cplus.met"
PPTREE cplus::postfix_expression ( int error_free)
#line 3055 "cplus.met"
{
#line 3055 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 3055 "cplus.met"
    int _value,_nbPre = 0 ;
#line 3055 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 3055 "cplus.met"
    int _Debug = TRACE_RULE("postfix_expression",TRACE_ENTER,(PPTREE)0);
#line 3055 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 3055 "cplus.met"
#line 3055 "cplus.met"
    PPTREE expTree = (PPTREE) 0,expList = (PPTREE) 0,expArray = (PPTREE) 0;
#line 3055 "cplus.met"
#line 3057 "cplus.met"
    if (! (NPUSH_CALL_AFF_VERIF(expTree = ,_Tak(primary_expression), 117, cplus))){
#line 3057 "cplus.met"
#line 3058 "cplus.met"
#line 3059 "cplus.met"
        if ( (expTree=NQUICK_CALL(_Tak(simple_type_name)(error_free), 138, cplus))== (PPTREE) -1 ) {
#line 3059 "cplus.met"
            MulFreeTree(3,expArray,expList,expTree);
            PROG_EXIT(postfix_expression_exit,"postfix_expression")
#line 3059 "cplus.met"
        }
#line 3059 "cplus.met"
#line 3060 "cplus.met"
        if (! ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN( POUV,"("))){
#line 3060 "cplus.met"
#line 3061 "cplus.met"
            
#line 3061 "cplus.met"
            MulFreeTree(3,expArray,expList,expTree);
            LEX_EXIT ("",0);
#line 3061 "cplus.met"
            goto postfix_expression_exit;
#line 3061 "cplus.met"
#line 3061 "cplus.met"
        }
#line 3061 "cplus.met"
#line 3061 "cplus.met"
#line 3061 "cplus.met"
    }
#line 3061 "cplus.met"
#line 3063 "cplus.met"
    while ((((((((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN( POUV,"(")) || 
#line 3063 "cplus.met"
               ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN( COUV,"["))) || 
#line 3063 "cplus.met"
              ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN( POINT,"POINT"))) || 
#line 3063 "cplus.met"
             ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN( TIRESUPE,"->"))) || 
#line 3063 "cplus.met"
            ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN( PLUSPLUS,"++"))) || 
#line 3063 "cplus.met"
           ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN( TIRETIRE,"--"))) || 
#line 3063 "cplus.met"
          ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN( AOUV,"{"))) { 
#line 3063 "cplus.met"
#line 3064 "cplus.met"
        (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3064 "cplus.met"
        switch( lexEl.Value) {
#line 3064 "cplus.met"
#line 3067 "cplus.met"
            case POUV : 
#line 3067 "cplus.met"
                tokenAhead = 0 ;
#line 3067 "cplus.met"
                CommTerm();
#line 3067 "cplus.met"
#line 3066 "cplus.met"
#line 3067 "cplus.met"
                if (NPUSH_CALL_AFF_VERIF(expList = ,_Tak(expression), 67, cplus)){
#line 3067 "cplus.met"
#line 3068 "cplus.met"
                    {
#line 3068 "cplus.met"
                        PPTREE _ptRes0=0;
#line 3068 "cplus.met"
                        _ptRes0= MakeTree(EXP_LIST, 2);
#line 3068 "cplus.met"
                        ReplaceTree(_ptRes0, 1, expTree );
#line 3068 "cplus.met"
                        ReplaceTree(_ptRes0, 2, expList );
#line 3068 "cplus.met"
                        expTree=_ptRes0;
#line 3068 "cplus.met"
                    }
#line 3068 "cplus.met"
                } else {
#line 3068 "cplus.met"
#line 3070 "cplus.met"
                    {
#line 3070 "cplus.met"
                        PPTREE _ptRes0=0;
#line 3070 "cplus.met"
                        _ptRes0= MakeTree(EXP_LIST, 2);
#line 3070 "cplus.met"
                        ReplaceTree(_ptRes0, 1, expTree );
#line 3070 "cplus.met"
                        expTree=_ptRes0;
#line 3070 "cplus.met"
                    }
#line 3070 "cplus.met"
                }
#line 3070 "cplus.met"
#line 3071 "cplus.met"
                (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3071 "cplus.met"
                if (  !SEE_TOKEN( PFER,")") || !(CommTerm(),1)) {
#line 3071 "cplus.met"
                    MulFreeTree(3,expArray,expList,expTree);
                    TOKEN_EXIT(postfix_expression_exit,")")
#line 3071 "cplus.met"
                } else {
#line 3071 "cplus.met"
                    tokenAhead = 0 ;
#line 3071 "cplus.met"
                }
#line 3071 "cplus.met"
#line 3071 "cplus.met"
                break;
#line 3071 "cplus.met"
#line 3075 "cplus.met"
            case AOUV : 
#line 3075 "cplus.met"
                tokenAhead = 0 ;
#line 3075 "cplus.met"
                CommTerm();
#line 3075 "cplus.met"
#line 3074 "cplus.met"
#line 3075 "cplus.met"
                if (NPUSH_CALL_AFF_VERIF(expList = ,_Tak(expression), 67, cplus)){
#line 3075 "cplus.met"
#line 3076 "cplus.met"
                    {
#line 3076 "cplus.met"
                        PPTREE _ptRes0=0;
#line 3076 "cplus.met"
                        _ptRes0= MakeTree(EXP_BRA, 2);
#line 3076 "cplus.met"
                        ReplaceTree(_ptRes0, 1, expTree );
#line 3076 "cplus.met"
                        ReplaceTree(_ptRes0, 2, expList );
#line 3076 "cplus.met"
                        expTree=_ptRes0;
#line 3076 "cplus.met"
                    }
#line 3076 "cplus.met"
                } else {
#line 3076 "cplus.met"
#line 3078 "cplus.met"
                    {
#line 3078 "cplus.met"
                        PPTREE _ptRes0=0;
#line 3078 "cplus.met"
                        _ptRes0= MakeTree(EXP_BRA, 2);
#line 3078 "cplus.met"
                        ReplaceTree(_ptRes0, 1, expTree );
#line 3078 "cplus.met"
                        expTree=_ptRes0;
#line 3078 "cplus.met"
                    }
#line 3078 "cplus.met"
                }
#line 3078 "cplus.met"
#line 3079 "cplus.met"
                (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3079 "cplus.met"
                if (  !SEE_TOKEN( AFER,"}") || !(CommTerm(),1)) {
#line 3079 "cplus.met"
                    MulFreeTree(3,expArray,expList,expTree);
                    TOKEN_EXIT(postfix_expression_exit,"}")
#line 3079 "cplus.met"
                } else {
#line 3079 "cplus.met"
                    tokenAhead = 0 ;
#line 3079 "cplus.met"
                }
#line 3079 "cplus.met"
#line 3079 "cplus.met"
                break;
#line 3079 "cplus.met"
#line 3083 "cplus.met"
            case COUV : 
#line 3083 "cplus.met"
                tokenAhead = 0 ;
#line 3083 "cplus.met"
                CommTerm();
#line 3083 "cplus.met"
#line 3082 "cplus.met"
#line 3083 "cplus.met"
                if ( (expArray=NQUICK_CALL(_Tak(array_expression_follow)(error_free), 17, cplus))== (PPTREE) -1 ) {
#line 3083 "cplus.met"
                    MulFreeTree(3,expArray,expList,expTree);
                    PROG_EXIT(postfix_expression_exit,"postfix_expression")
#line 3083 "cplus.met"
                }
#line 3083 "cplus.met"
#line 3084 "cplus.met"
                ReplaceTree(expArray ,1 ,expTree );
#line 3084 "cplus.met"
#line 3085 "cplus.met"
                expTree = expArray ;
#line 3085 "cplus.met"
#line 3085 "cplus.met"
                break;
#line 3085 "cplus.met"
#line 3087 "cplus.met"
            case META : 
#line 3087 "cplus.met"
            case POINT : 
#line 3087 "cplus.met"
                tokenAhead = 0 ;
#line 3087 "cplus.met"
                CommTerm();
#line 3087 "cplus.met"
#line 3087 "cplus.met"
                {
#line 3087 "cplus.met"
                    PPTREE _ptTree0=0,_ptRes0=0;
#line 3087 "cplus.met"
                    _ptRes0= MakeTree(REF, 2);
#line 3087 "cplus.met"
                    ReplaceTree(_ptRes0, 1, expTree );
#line 3087 "cplus.met"
                    if ( (_ptTree0=NQUICK_CALL(_Tak(primary_expression)(error_free), 117, cplus))== (PPTREE) -1 ) {
#line 3087 "cplus.met"
                        MulFreeTree(5,_ptRes0,_ptTree0,expArray,expList,expTree);
                        PROG_EXIT(postfix_expression_exit,"postfix_expression")
#line 3087 "cplus.met"
                    }
#line 3087 "cplus.met"
                    ReplaceTree(_ptRes0, 2, _ptTree0);
#line 3087 "cplus.met"
                    expTree=_ptRes0;
#line 3087 "cplus.met"
                }
#line 3087 "cplus.met"
                break;
#line 3087 "cplus.met"
#line 3088 "cplus.met"
            case TIRESUPE : 
#line 3088 "cplus.met"
                tokenAhead = 0 ;
#line 3088 "cplus.met"
                CommTerm();
#line 3088 "cplus.met"
#line 3088 "cplus.met"
                {
#line 3088 "cplus.met"
                    PPTREE _ptTree0=0,_ptRes0=0;
#line 3088 "cplus.met"
                    _ptRes0= MakeTree(ARROW, 2);
#line 3088 "cplus.met"
                    ReplaceTree(_ptRes0, 1, expTree );
#line 3088 "cplus.met"
                    if ( (_ptTree0=NQUICK_CALL(_Tak(primary_expression)(error_free), 117, cplus))== (PPTREE) -1 ) {
#line 3088 "cplus.met"
                        MulFreeTree(5,_ptRes0,_ptTree0,expArray,expList,expTree);
                        PROG_EXIT(postfix_expression_exit,"postfix_expression")
#line 3088 "cplus.met"
                    }
#line 3088 "cplus.met"
                    ReplaceTree(_ptRes0, 2, _ptTree0);
#line 3088 "cplus.met"
                    expTree=_ptRes0;
#line 3088 "cplus.met"
                }
#line 3088 "cplus.met"
                break;
#line 3088 "cplus.met"
#line 3089 "cplus.met"
            case PLUSPLUS : 
#line 3089 "cplus.met"
                tokenAhead = 0 ;
#line 3089 "cplus.met"
                CommTerm();
#line 3089 "cplus.met"
#line 3089 "cplus.met"
                {
#line 3089 "cplus.met"
                    PPTREE _ptRes0=0;
#line 3089 "cplus.met"
                    _ptRes0= MakeTree(AINCR, 1);
#line 3089 "cplus.met"
                    ReplaceTree(_ptRes0, 1, expTree );
#line 3089 "cplus.met"
                    expTree=_ptRes0;
#line 3089 "cplus.met"
                }
#line 3089 "cplus.met"
                break;
#line 3089 "cplus.met"
#line 3090 "cplus.met"
            case TIRETIRE : 
#line 3090 "cplus.met"
                tokenAhead = 0 ;
#line 3090 "cplus.met"
                CommTerm();
#line 3090 "cplus.met"
#line 3090 "cplus.met"
                {
#line 3090 "cplus.met"
                    PPTREE _ptRes0=0;
#line 3090 "cplus.met"
                    _ptRes0= MakeTree(ADECR, 1);
#line 3090 "cplus.met"
                    ReplaceTree(_ptRes0, 1, expTree );
#line 3090 "cplus.met"
                    expTree=_ptRes0;
#line 3090 "cplus.met"
                }
#line 3090 "cplus.met"
                break;
#line 3090 "cplus.met"
            default :
#line 3090 "cplus.met"
                MulFreeTree(3,expArray,expList,expTree);
                CASE_EXIT(postfix_expression_exit,"either ( or { or [ or POINT or -> or ++ or --")
#line 3090 "cplus.met"
                break;
#line 3090 "cplus.met"
        }
#line 3090 "cplus.met"
    } 
#line 3090 "cplus.met"
#line 3092 "cplus.met"
    {
#line 3092 "cplus.met"
        _retValue = expTree ;
#line 3092 "cplus.met"
        goto postfix_expression_ret;
#line 3092 "cplus.met"
        
#line 3092 "cplus.met"
    }
#line 3092 "cplus.met"
#line 3092 "cplus.met"
#line 3092 "cplus.met"

#line 3093 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 3093 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 3093 "cplus.met"
return((PPTREE) 0);
#line 3093 "cplus.met"

#line 3093 "cplus.met"
postfix_expression_exit :
#line 3093 "cplus.met"

#line 3093 "cplus.met"
    _Debug = TRACE_RULE("postfix_expression",TRACE_EXIT,(PPTREE)0);
#line 3093 "cplus.met"
    _funcLevel--;
#line 3093 "cplus.met"
    return((PPTREE) -1) ;
#line 3093 "cplus.met"

#line 3093 "cplus.met"
postfix_expression_ret :
#line 3093 "cplus.met"
    
#line 3093 "cplus.met"
    _Debug = TRACE_RULE("postfix_expression",TRACE_RETURN,_retValue);
#line 3093 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 3093 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 3093 "cplus.met"
    return _retValue ;
#line 3093 "cplus.met"
}
#line 3093 "cplus.met"

#line 3093 "cplus.met"
#line 3108 "cplus.met"
PPTREE cplus::primary_expression ( int error_free)
#line 3108 "cplus.met"
{
#line 3108 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 3108 "cplus.met"
    int _value,_nbPre = 0 ;
#line 3108 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 3108 "cplus.met"
    int _Debug = TRACE_RULE("primary_expression",TRACE_ENTER,(PPTREE)0);
#line 3108 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 3108 "cplus.met"
#line 3108 "cplus.met"
    PPTREE result = (PPTREE) 0,expTree = (PPTREE) 0,list = (PPTREE) 0;
#line 3108 "cplus.met"
#line 3110 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3110 "cplus.met"
    switch( lexEl.Value) {
#line 3110 "cplus.met"
#line 3113 "cplus.met"
        case POUV : 
#line 3113 "cplus.met"
            tokenAhead = 0 ;
#line 3113 "cplus.met"
            CommTerm();
#line 3113 "cplus.met"
#line 3112 "cplus.met"
#line 3113 "cplus.met"
            if ( (expTree=NQUICK_CALL(_Tak(expression)(error_free), 67, cplus))== (PPTREE) -1 ) {
#line 3113 "cplus.met"
                MulFreeTree(3,expTree,list,result);
                PROG_EXIT(primary_expression_exit,"primary_expression")
#line 3113 "cplus.met"
            }
#line 3113 "cplus.met"
#line 3114 "cplus.met"
            (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3114 "cplus.met"
            if (  !SEE_TOKEN( PFER,")") || !(CommTerm(),1)) {
#line 3114 "cplus.met"
                MulFreeTree(3,expTree,list,result);
                TOKEN_EXIT(primary_expression_exit,")")
#line 3114 "cplus.met"
            } else {
#line 3114 "cplus.met"
                tokenAhead = 0 ;
#line 3114 "cplus.met"
            }
#line 3114 "cplus.met"
#line 3115 "cplus.met"
            {
#line 3115 "cplus.met"
                PPTREE _ptTree0=0;
#line 3115 "cplus.met"
                {
#line 3115 "cplus.met"
                    PPTREE _ptRes1=0;
#line 3115 "cplus.met"
                    _ptRes1= MakeTree(EXP, 1);
#line 3115 "cplus.met"
                    ReplaceTree(_ptRes1, 1, expTree );
#line 3115 "cplus.met"
                    _ptTree0=_ptRes1;
#line 3115 "cplus.met"
                }
#line 3115 "cplus.met"
                _retValue =_ptTree0;
#line 3115 "cplus.met"
                goto primary_expression_ret;
#line 3115 "cplus.met"
            }
#line 3115 "cplus.met"
#line 3115 "cplus.met"
            break;
#line 3115 "cplus.met"
#line 3117 "cplus.met"
        case OPERATOR : 
#line 3117 "cplus.met"
#line 3117 "cplus.met"
            {
#line 3117 "cplus.met"
                PPTREE _ptTree0=0;
#line 3117 "cplus.met"
                if ( (_ptTree0=NQUICK_CALL(_Tak(operator_function_name)(error_free), 109, cplus))== (PPTREE) -1 ) {
#line 3117 "cplus.met"
                    MulFreeTree(4,_ptTree0,expTree,list,result);
                    PROG_EXIT(primary_expression_exit,"primary_expression")
#line 3117 "cplus.met"
                }
#line 3117 "cplus.met"
                _retValue =_ptTree0;
#line 3117 "cplus.met"
                goto primary_expression_ret;
#line 3117 "cplus.met"
            }
#line 3117 "cplus.met"
            break;
#line 3117 "cplus.met"
#line 3118 "cplus.met"
        case TILD : 
#line 3118 "cplus.met"
#line 3118 "cplus.met"
            {
#line 3118 "cplus.met"
                PPTREE _ptTree0=0;
#line 3118 "cplus.met"
                if ( (_ptTree0=NQUICK_CALL(_Tak(qualified_name)(error_free), 122, cplus))== (PPTREE) -1 ) {
#line 3118 "cplus.met"
                    MulFreeTree(4,_ptTree0,expTree,list,result);
                    PROG_EXIT(primary_expression_exit,"primary_expression")
#line 3118 "cplus.met"
                }
#line 3118 "cplus.met"
                _retValue =_ptTree0;
#line 3118 "cplus.met"
                goto primary_expression_ret;
#line 3118 "cplus.met"
            }
#line 3118 "cplus.met"
            break;
#line 3118 "cplus.met"
#line 3119 "cplus.met"
        case META : 
#line 3119 "cplus.met"
#line 3120 "cplus.met"
#line 3121 "cplus.met"
            {
#line 3121 "cplus.met"
                PPTREE _ptTree0=0;
#line 3121 "cplus.met"
                {
#line 3121 "cplus.met"
                    PPTREE _ptTree1=0,_ptRes1=0;
#line 3121 "cplus.met"
                    _ptRes1= MakeTree(META, 1);
#line 3121 "cplus.met"
                    (tokenAhead == 7|| (LexMeta(),TRACE_LEX(1)));
#line 3121 "cplus.met"
                    if ( ! TERM_OR_META(META,"META") || !(BUILD_TERM_META(_ptTree1))) {
#line 3121 "cplus.met"
                        MulFreeTree(6,_ptRes1,_ptTree1,_ptTree0,expTree,list,result);
                        TOKEN_EXIT(primary_expression_exit,"META")
#line 3121 "cplus.met"
                    } else {
#line 3121 "cplus.met"
                        tokenAhead = 0 ;
#line 3121 "cplus.met"
                    }
#line 3121 "cplus.met"
                    ReplaceTree(_ptRes1, 1, _ptTree1);
#line 3121 "cplus.met"
                    _ptTree0=_ptRes1;
#line 3121 "cplus.met"
                }
#line 3121 "cplus.met"
                _retValue =_ptTree0;
#line 3121 "cplus.met"
                goto primary_expression_ret;
#line 3121 "cplus.met"
            }
#line 3121 "cplus.met"
#line 3121 "cplus.met"
            break;
#line 3121 "cplus.met"
#line 3123 "cplus.met"
        case IDENT : 
#line 3123 "cplus.met"
#line 3124 "cplus.met"
            if ((tokenAhead == 12|| (PushFunction(),TRACE_LEX(1)))&&TERM_OR_META(PUSH_FUNCTION,"PUSH_FUNCTION") && !(tokenAhead = 0) && ( BUILD_TERM_META(result))) {
#line 3124 "cplus.met"
#line 3125 "cplus.met"
#line 3126 "cplus.met"
                (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3126 "cplus.met"
                if (  !SEE_TOKEN( POUV,"(") || !(CommTerm(),1)) {
#line 3126 "cplus.met"
                    MulFreeTree(3,expTree,list,result);
                    TOKEN_EXIT(primary_expression_exit,"(")
#line 3126 "cplus.met"
                } else {
#line 3126 "cplus.met"
                    tokenAhead = 0 ;
#line 3126 "cplus.met"
                }
#line 3126 "cplus.met"
#line 3127 "cplus.met"
                {
#line 3127 "cplus.met"
                    PPTREE _ptTree0=0;
#line 3127 "cplus.met"
                    {
#line 3127 "cplus.met"
                        PPTREE _ptTree1=0,_ptRes1=0;
#line 3127 "cplus.met"
                        _ptRes1= MakeTree(IDENT, 1);
#line 3127 "cplus.met"
                        (tokenAhead == 11|| (PushArgument(),TRACE_LEX(1)));
#line 3127 "cplus.met"
                        if ( ! TERM_OR_META(PUSH_ARGUMENT,"PUSH_ARGUMENT") || !(BUILD_TERM_META(_ptTree1))) {
#line 3127 "cplus.met"
                            MulFreeTree(6,_ptRes1,_ptTree1,_ptTree0,expTree,list,result);
                            TOKEN_EXIT(primary_expression_exit,"PUSH_ARGUMENT")
#line 3127 "cplus.met"
                        } else {
#line 3127 "cplus.met"
                            tokenAhead = 0 ;
#line 3127 "cplus.met"
                        }
#line 3127 "cplus.met"
                        ReplaceTree(_ptRes1, 1, _ptTree1);
#line 3127 "cplus.met"
                        _ptTree0=_ptRes1;
#line 3127 "cplus.met"
                    }
#line 3127 "cplus.met"
                    list =AddList(list , _ptTree0);
#line 3127 "cplus.met"
                }
#line 3127 "cplus.met"
#line 3128 "cplus.met"
                (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3128 "cplus.met"
                if (  !SEE_TOKEN( VIRG,",") || !(CommTerm(),1)) {
#line 3128 "cplus.met"
                    MulFreeTree(3,expTree,list,result);
                    TOKEN_EXIT(primary_expression_exit,",")
#line 3128 "cplus.met"
                } else {
#line 3128 "cplus.met"
                    tokenAhead = 0 ;
#line 3128 "cplus.met"
                }
#line 3128 "cplus.met"
#line 3129 "cplus.met"
                {
#line 3129 "cplus.met"
                    PPTREE _ptTree0=0;
#line 3129 "cplus.met"
                    if ( (_ptTree0=NQUICK_CALL(_Tak(expression)(error_free), 67, cplus))== (PPTREE) -1 ) {
#line 3129 "cplus.met"
                        MulFreeTree(4,_ptTree0,expTree,list,result);
                        PROG_EXIT(primary_expression_exit,"primary_expression")
#line 3129 "cplus.met"
                    }
#line 3129 "cplus.met"
                    list =AddList(list , _ptTree0);
#line 3129 "cplus.met"
                }
#line 3129 "cplus.met"
#line 3130 "cplus.met"
                {
#line 3130 "cplus.met"
                    PPTREE _ptRes0=0;
#line 3130 "cplus.met"
                    _ptRes0= MakeTree(EXP_SEQ, 1);
#line 3130 "cplus.met"
                    ReplaceTree(_ptRes0, 1, list );
#line 3130 "cplus.met"
                    expTree=_ptRes0;
#line 3130 "cplus.met"
                }
#line 3130 "cplus.met"
#line 3131 "cplus.met"
                (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3131 "cplus.met"
                if (  !SEE_TOKEN( PFER,")") || !(CommTerm(),1)) {
#line 3131 "cplus.met"
                    MulFreeTree(3,expTree,list,result);
                    TOKEN_EXIT(primary_expression_exit,")")
#line 3131 "cplus.met"
                } else {
#line 3131 "cplus.met"
                    tokenAhead = 0 ;
#line 3131 "cplus.met"
                }
#line 3131 "cplus.met"
#line 3132 "cplus.met"
                {
#line 3132 "cplus.met"
                    PPTREE _ptTree0=0;
#line 3132 "cplus.met"
                    {
#line 3132 "cplus.met"
                        PPTREE _ptTree1=0,_ptRes1=0;
#line 3132 "cplus.met"
                        _ptRes1= MakeTree(EXP_LIST, 2);
#line 3132 "cplus.met"
                        {
#line 3132 "cplus.met"
                            PPTREE _ptRes2=0;
#line 3132 "cplus.met"
                            _ptRes2= MakeTree(IDENT, 1);
#line 3132 "cplus.met"
                            ReplaceTree(_ptRes2, 1, result );
#line 3132 "cplus.met"
                            _ptTree1=_ptRes2;
#line 3132 "cplus.met"
                        }
#line 3132 "cplus.met"
                        ReplaceTree(_ptRes1, 1, _ptTree1);
#line 3132 "cplus.met"
                        ReplaceTree(_ptRes1, 2, expTree );
#line 3132 "cplus.met"
                        _ptTree0=_ptRes1;
#line 3132 "cplus.met"
                    }
#line 3132 "cplus.met"
                    _retValue =_ptTree0;
#line 3132 "cplus.met"
                    goto primary_expression_ret;
#line 3132 "cplus.met"
                }
#line 3132 "cplus.met"
#line 3132 "cplus.met"
#line 3132 "cplus.met"
            } else {
#line 3132 "cplus.met"
#line 3135 "cplus.met"
                {
#line 3135 "cplus.met"
                    PPTREE _ptTree0=0;
#line 3135 "cplus.met"
                    if ( (_ptTree0=NQUICK_CALL(_Tak(qualified_name)(error_free), 122, cplus))== (PPTREE) -1 ) {
#line 3135 "cplus.met"
                        MulFreeTree(4,_ptTree0,expTree,list,result);
                        PROG_EXIT(primary_expression_exit,"primary_expression")
#line 3135 "cplus.met"
                    }
#line 3135 "cplus.met"
                    _retValue =_ptTree0;
#line 3135 "cplus.met"
                    goto primary_expression_ret;
#line 3135 "cplus.met"
                }
#line 3135 "cplus.met"
            }
#line 3135 "cplus.met"
            break;
#line 3135 "cplus.met"
#line 3136 "cplus.met"
        case STRING : 
#line 3136 "cplus.met"
#line 3136 "cplus.met"
            {
#line 3136 "cplus.met"
                PPTREE _ptTree0=0;
#line 3136 "cplus.met"
                if ( (_ptTree0=NQUICK_CALL(_Tak(string_list)(error_free), 147, cplus))== (PPTREE) -1 ) {
#line 3136 "cplus.met"
                    MulFreeTree(4,_ptTree0,expTree,list,result);
                    PROG_EXIT(primary_expression_exit,"primary_expression")
#line 3136 "cplus.met"
                }
#line 3136 "cplus.met"
                _retValue =_ptTree0;
#line 3136 "cplus.met"
                goto primary_expression_ret;
#line 3136 "cplus.met"
            }
#line 3136 "cplus.met"
            break;
#line 3136 "cplus.met"
#line 3137 "cplus.met"
        case VA_ARG : 
#line 3137 "cplus.met"
            tokenAhead = 0 ;
#line 3137 "cplus.met"
            CommTerm();
#line 3137 "cplus.met"
#line 3138 "cplus.met"
#line 3139 "cplus.met"
            (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3139 "cplus.met"
            if (  !SEE_TOKEN( POUV,"(") || !(CommTerm(),1)) {
#line 3139 "cplus.met"
                MulFreeTree(3,expTree,list,result);
                TOKEN_EXIT(primary_expression_exit,"(")
#line 3139 "cplus.met"
            } else {
#line 3139 "cplus.met"
                tokenAhead = 0 ;
#line 3139 "cplus.met"
            }
#line 3139 "cplus.met"
#line 3140 "cplus.met"
            {
#line 3140 "cplus.met"
                PPTREE _ptTree0=0,_ptRes0=0;
#line 3140 "cplus.met"
                _ptRes0= MakeTree(VA_ARG, 2);
#line 3140 "cplus.met"
                if ( (_ptTree0=NQUICK_CALL(_Tak(assignment_expression)(error_free), 21, cplus))== (PPTREE) -1 ) {
#line 3140 "cplus.met"
                    MulFreeTree(5,_ptRes0,_ptTree0,expTree,list,result);
                    PROG_EXIT(primary_expression_exit,"primary_expression")
#line 3140 "cplus.met"
                }
#line 3140 "cplus.met"
                ReplaceTree(_ptRes0, 1, _ptTree0);
#line 3140 "cplus.met"
                expTree=_ptRes0;
#line 3140 "cplus.met"
            }
#line 3140 "cplus.met"
#line 3141 "cplus.met"
            (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3141 "cplus.met"
            if (  !SEE_TOKEN( VIRG,",") || !(CommTerm(),1)) {
#line 3141 "cplus.met"
                MulFreeTree(3,expTree,list,result);
                TOKEN_EXIT(primary_expression_exit,",")
#line 3141 "cplus.met"
            } else {
#line 3141 "cplus.met"
                tokenAhead = 0 ;
#line 3141 "cplus.met"
            }
#line 3141 "cplus.met"
#line 3142 "cplus.met"
            {
#line 3142 "cplus.met"
                PPTREE _ptTree0=0;
#line 3142 "cplus.met"
                if ( (_ptTree0=NQUICK_CALL(_Tak(type_name)(error_free), 153, cplus))== (PPTREE) -1 ) {
#line 3142 "cplus.met"
                    MulFreeTree(4,_ptTree0,expTree,list,result);
                    PROG_EXIT(primary_expression_exit,"primary_expression")
#line 3142 "cplus.met"
                }
#line 3142 "cplus.met"
                ReplaceTree(expTree , 2 , _ptTree0);
#line 3142 "cplus.met"
            }
#line 3142 "cplus.met"
#line 3143 "cplus.met"
            (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3143 "cplus.met"
            if (  !SEE_TOKEN( PFER,")") || !(CommTerm(),1)) {
#line 3143 "cplus.met"
                MulFreeTree(3,expTree,list,result);
                TOKEN_EXIT(primary_expression_exit,")")
#line 3143 "cplus.met"
            } else {
#line 3143 "cplus.met"
                tokenAhead = 0 ;
#line 3143 "cplus.met"
            }
#line 3143 "cplus.met"
#line 3144 "cplus.met"
            {
#line 3144 "cplus.met"
                _retValue = expTree ;
#line 3144 "cplus.met"
                goto primary_expression_ret;
#line 3144 "cplus.met"
                
#line 3144 "cplus.met"
            }
#line 3144 "cplus.met"
#line 3144 "cplus.met"
            break;
#line 3144 "cplus.met"
#line 3146 "cplus.met"
        default : 
#line 3146 "cplus.met"
#line 3146 "cplus.met"
            {
#line 3146 "cplus.met"
                PPTREE _ptTree0=0;
#line 3146 "cplus.met"
                if ( (_ptTree0=NQUICK_CALL(_Tak(constan)(error_free), 36, cplus))== (PPTREE) -1 ) {
#line 3146 "cplus.met"
                    MulFreeTree(4,_ptTree0,expTree,list,result);
                    PROG_EXIT(primary_expression_exit,"primary_expression")
#line 3146 "cplus.met"
                }
#line 3146 "cplus.met"
                _retValue =_ptTree0;
#line 3146 "cplus.met"
                goto primary_expression_ret;
#line 3146 "cplus.met"
            }
#line 3146 "cplus.met"
            break;
#line 3146 "cplus.met"
    }
#line 3146 "cplus.met"
#line 3146 "cplus.met"
#line 3147 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 3147 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 3147 "cplus.met"
return((PPTREE) 0);
#line 3147 "cplus.met"

#line 3147 "cplus.met"
primary_expression_exit :
#line 3147 "cplus.met"

#line 3147 "cplus.met"
    _Debug = TRACE_RULE("primary_expression",TRACE_EXIT,(PPTREE)0);
#line 3147 "cplus.met"
    _funcLevel--;
#line 3147 "cplus.met"
    return((PPTREE) -1) ;
#line 3147 "cplus.met"

#line 3147 "cplus.met"
primary_expression_ret :
#line 3147 "cplus.met"
    
#line 3147 "cplus.met"
    _Debug = TRACE_RULE("primary_expression",TRACE_RETURN,_retValue);
#line 3147 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 3147 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 3147 "cplus.met"
    return _retValue ;
#line 3147 "cplus.met"
}
#line 3147 "cplus.met"

#line 3147 "cplus.met"
#line 776 "cplus.met"
PPTREE cplus::program ( int error_free)
#line 776 "cplus.met"
{
#line 776 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 776 "cplus.met"
    int _value,_nbPre = 0 ;
#line 776 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 776 "cplus.met"
    int _Debug = TRACE_RULE("program",TRACE_ENTER,(PPTREE)0);
#line 776 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 776 "cplus.met"
#line 776 "cplus.met"
    PPTREE _addlist1 = (PPTREE) 0;
#line 776 "cplus.met"
#line 776 "cplus.met"
    PPTREE list = (PPTREE) 0,valTree = (PPTREE) 0;
#line 776 "cplus.met"
#line 778 "cplus.met"
     debut : 
#line 778 "cplus.met"
#line 778 "cplus.met"
    _addlist1 = list ;
#line 778 "cplus.met"
#line 779 "cplus.met"
    while (NPUSH_CALL_AFF_VERIF(valTree = ,_Tak(ext_all), 69, cplus)) { 
#line 779 "cplus.met"
#line 780 "cplus.met"
#line 780 "cplus.met"
        _addlist1 =AddList(_addlist1 ,valTree );
#line 780 "cplus.met"
#line 780 "cplus.met"
        if (list){
#line 780 "cplus.met"
#line 780 "cplus.met"
            _addlist1 = SonTree (_addlist1 ,2 );
#line 780 "cplus.met"
        } else {
#line 780 "cplus.met"
#line 780 "cplus.met"
            list = _addlist1 ;
#line 780 "cplus.met"
        }
#line 780 "cplus.met"
    } 
#line 780 "cplus.met"
#line 781 "cplus.met"
    {
#line 781 "cplus.met"
        PPTREE _ptTree0=0;
#line 781 "cplus.met"
        if ( (_ptTree0=NQUICK_CALL(_Tak(none_statement)(error_free), 108, cplus))== (PPTREE) -1 ) {
#line 781 "cplus.met"
            MulFreeTree(4,_ptTree0,_addlist1,list,valTree);
            PROG_EXIT(program_exit,"program")
#line 781 "cplus.met"
        }
#line 781 "cplus.met"
        list =AddList(list , _ptTree0);
#line 781 "cplus.met"
    }
#line 781 "cplus.met"
#line 782 "cplus.met"
    if (NPUSH_CALL_AFF_VERIF(NOTHING,_Tak(comment_eater), 31, cplus)){
#line 782 "cplus.met"
#line 782 "cplus.met"
    }
#line 782 "cplus.met"
#line 784 "cplus.met"
    if ((tokenAhead && tokenAhead != -1)|| (c != EOF)){
#line 784 "cplus.met"
#line 785 "cplus.met"
#line 787 "cplus.met"
        dumperror ();
#line 787 "cplus.met"
#line 789 "cplus.met"
        (tokenAhead == 5|| (LexEndLine(),TRACE_LEX(1)));
#line 789 "cplus.met"
        if ( ! TERM_OR_META(END_LINE,"END_LINE") || !(CommTerm(),1)) {
#line 789 "cplus.met"
            MulFreeTree(3,_addlist1,list,valTree);
            TOKEN_EXIT(program_exit,"END_LINE")
#line 789 "cplus.met"
        } else {
#line 789 "cplus.met"
            tokenAhead = 0 ;
#line 789 "cplus.met"
        }
#line 789 "cplus.met"
#line 790 "cplus.met"
         hasGotError = 1 ;
#line 790 "cplus.met"
#line 791 "cplus.met"
         goto debut ;
#line 791 "cplus.met"
#line 791 "cplus.met"
#line 791 "cplus.met"
    }
#line 791 "cplus.met"
#line 793 "cplus.met"
    if ( hasGotError && ! _inhibit_exit_on_error  ){
#line 793 "cplus.met"
#line 794 "cplus.met"
         exit (-1);
#line 794 "cplus.met"
    }
#line 794 "cplus.met"
#line 795 "cplus.met"
    {
#line 795 "cplus.met"
        PPTREE _ptTree0=0;
#line 795 "cplus.met"
        {
#line 795 "cplus.met"
            PPTREE _ptRes1=0;
#line 795 "cplus.met"
            _ptRes1= MakeTree(LANGUAGE, 1);
#line 795 "cplus.met"
            ReplaceTree(_ptRes1, 1, list );
#line 795 "cplus.met"
            _ptTree0=_ptRes1;
#line 795 "cplus.met"
        }
#line 795 "cplus.met"
        _retValue =_ptTree0;
#line 795 "cplus.met"
        goto program_ret;
#line 795 "cplus.met"
    }
#line 795 "cplus.met"
#line 795 "cplus.met"
#line 795 "cplus.met"

#line 796 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 796 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 796 "cplus.met"
return((PPTREE) 0);
#line 796 "cplus.met"

#line 796 "cplus.met"
program_exit :
#line 796 "cplus.met"

#line 796 "cplus.met"
    _Debug = TRACE_RULE("program",TRACE_EXIT,(PPTREE)0);
#line 796 "cplus.met"
    _funcLevel--;
#line 796 "cplus.met"
    return((PPTREE) -1) ;
#line 796 "cplus.met"

#line 796 "cplus.met"
program_ret :
#line 796 "cplus.met"
    
#line 796 "cplus.met"
    _Debug = TRACE_RULE("program",TRACE_RETURN,_retValue);
#line 796 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 796 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 796 "cplus.met"
    return _retValue ;
#line 796 "cplus.met"
}
#line 796 "cplus.met"

#line 796 "cplus.met"
#line 1962 "cplus.met"
PPTREE cplus::protect_declare ( int error_free)
#line 1962 "cplus.met"
{
#line 1962 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 1962 "cplus.met"
    int _value,_nbPre = 0 ;
#line 1962 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 1962 "cplus.met"
    int _Debug = TRACE_RULE("protect_declare",TRACE_ENTER,(PPTREE)0);
#line 1962 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 1962 "cplus.met"
#line 1962 "cplus.met"
    PPTREE _addlist1 = (PPTREE) 0;
#line 1962 "cplus.met"
#line 1962 "cplus.met"
    PPTREE retTree = (PPTREE) 0,inter = (PPTREE) 0,list = (PPTREE) 0;
#line 1962 "cplus.met"
#line 1964 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 1964 "cplus.met"
    switch( lexEl.Value) {
#line 1964 "cplus.met"
#line 1965 "cplus.met"
        case PUBLIC : 
#line 1965 "cplus.met"
            tokenAhead = 0 ;
#line 1965 "cplus.met"
            CommTerm();
#line 1965 "cplus.met"
#line 1965 "cplus.met"
            {
#line 1965 "cplus.met"
                PPTREE _ptRes0=0;
#line 1965 "cplus.met"
                _ptRes0= MakeTree(PROTECT_MEMB, 2);
#line 1965 "cplus.met"
                ReplaceTree(_ptRes0, 1, MakeString ("public"));
#line 1965 "cplus.met"
                retTree=_ptRes0;
#line 1965 "cplus.met"
            }
#line 1965 "cplus.met"
            break;
#line 1965 "cplus.met"
#line 1966 "cplus.met"
        case PROTECTED : 
#line 1966 "cplus.met"
            tokenAhead = 0 ;
#line 1966 "cplus.met"
            CommTerm();
#line 1966 "cplus.met"
#line 1966 "cplus.met"
            {
#line 1966 "cplus.met"
                PPTREE _ptRes0=0;
#line 1966 "cplus.met"
                _ptRes0= MakeTree(PROTECT_MEMB, 2);
#line 1966 "cplus.met"
                ReplaceTree(_ptRes0, 1, MakeString ("protected"));
#line 1966 "cplus.met"
                retTree=_ptRes0;
#line 1966 "cplus.met"
            }
#line 1966 "cplus.met"
            break;
#line 1966 "cplus.met"
#line 1967 "cplus.met"
        case PRIVATE : 
#line 1967 "cplus.met"
            tokenAhead = 0 ;
#line 1967 "cplus.met"
            CommTerm();
#line 1967 "cplus.met"
#line 1967 "cplus.met"
            {
#line 1967 "cplus.met"
                PPTREE _ptRes0=0;
#line 1967 "cplus.met"
                _ptRes0= MakeTree(PROTECT_MEMB, 2);
#line 1967 "cplus.met"
                ReplaceTree(_ptRes0, 1, MakeString ("private"));
#line 1967 "cplus.met"
                retTree=_ptRes0;
#line 1967 "cplus.met"
            }
#line 1967 "cplus.met"
            break;
#line 1967 "cplus.met"
        default :
#line 1967 "cplus.met"
            MulFreeTree(4,_addlist1,inter,list,retTree);
            CASE_EXIT(protect_declare_exit,"either public or protected or private")
#line 1967 "cplus.met"
            break;
#line 1967 "cplus.met"
    }
#line 1967 "cplus.met"
#line 1969 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 1969 "cplus.met"
    if (  !SEE_TOKEN( DPOI,":") || !(CommTerm(),1)) {
#line 1969 "cplus.met"
        MulFreeTree(4,_addlist1,inter,list,retTree);
        TOKEN_EXIT(protect_declare_exit,":")
#line 1969 "cplus.met"
    } else {
#line 1969 "cplus.met"
        tokenAhead = 0 ;
#line 1969 "cplus.met"
    }
#line 1969 "cplus.met"
#line 1969 "cplus.met"
    _addlist1 = list ;
#line 1969 "cplus.met"
#line 1970 "cplus.met"
    while (NPUSH_CALL_AFF_VERIF(inter = ,_Tak(inside_declaration), 88, cplus)) { 
#line 1970 "cplus.met"
#line 1971 "cplus.met"
#line 1971 "cplus.met"
        _addlist1 =AddList(_addlist1 ,inter );
#line 1971 "cplus.met"
#line 1971 "cplus.met"
        if (list){
#line 1971 "cplus.met"
#line 1971 "cplus.met"
            _addlist1 = SonTree (_addlist1 ,2 );
#line 1971 "cplus.met"
        } else {
#line 1971 "cplus.met"
#line 1971 "cplus.met"
            list = _addlist1 ;
#line 1971 "cplus.met"
        }
#line 1971 "cplus.met"
    } 
#line 1971 "cplus.met"
#line 1972 "cplus.met"
    {
#line 1972 "cplus.met"
        PPTREE _ptTree0=0;
#line 1972 "cplus.met"
        _ptTree0=ReplaceTree(retTree ,2 ,list );
#line 1972 "cplus.met"
        _retValue =_ptTree0;
#line 1972 "cplus.met"
        goto protect_declare_ret;
#line 1972 "cplus.met"
    }
#line 1972 "cplus.met"
#line 1972 "cplus.met"
#line 1972 "cplus.met"

#line 1973 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1973 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 1973 "cplus.met"
return((PPTREE) 0);
#line 1973 "cplus.met"

#line 1973 "cplus.met"
protect_declare_exit :
#line 1973 "cplus.met"

#line 1973 "cplus.met"
    _Debug = TRACE_RULE("protect_declare",TRACE_EXIT,(PPTREE)0);
#line 1973 "cplus.met"
    _funcLevel--;
#line 1973 "cplus.met"
    return((PPTREE) -1) ;
#line 1973 "cplus.met"

#line 1973 "cplus.met"
protect_declare_ret :
#line 1973 "cplus.met"
    
#line 1973 "cplus.met"
    _Debug = TRACE_RULE("protect_declare",TRACE_RETURN,_retValue);
#line 1973 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1973 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 1973 "cplus.met"
    return _retValue ;
#line 1973 "cplus.met"
}
#line 1973 "cplus.met"

#line 1973 "cplus.met"
#line 1022 "cplus.met"
PPTREE cplus::protected_array_declaration ( int error_free)
#line 1022 "cplus.met"
{
#line 1022 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 1022 "cplus.met"
    int _value,_nbPre = 0 ;
#line 1022 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 1022 "cplus.met"
    int _Debug = TRACE_RULE("protected_array_declaration",TRACE_ENTER,(PPTREE)0);
#line 1022 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 1022 "cplus.met"
#line 1022 "cplus.met"
    PPTREE valTreeR = (PPTREE) 0,valTreeRS = (PPTREE) 0;
#line 1022 "cplus.met"
#line 1024 "cplus.met"
    if ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN(_PROTECTEDARRAY,"_protectedArray") && (tokenAhead = 0,CommTerm(),1)){
#line 1024 "cplus.met"
#line 1025 "cplus.met"
#line 1026 "cplus.met"
        (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 1026 "cplus.met"
        if (  !SEE_TOKEN( POUV,"(") || !(CommTerm(),1)) {
#line 1026 "cplus.met"
            MulFreeTree(2,valTreeR,valTreeRS);
            TOKEN_EXIT(protected_array_declaration_exit,"(")
#line 1026 "cplus.met"
        } else {
#line 1026 "cplus.met"
            tokenAhead = 0 ;
#line 1026 "cplus.met"
        }
#line 1026 "cplus.met"
#line 1027 "cplus.met"
        {
#line 1027 "cplus.met"
            PPTREE _ptTree0=0,_ptRes0=0;
#line 1027 "cplus.met"
            _ptRes0= MakeTree(PROTECTED_ARRAY, 5);
#line 1027 "cplus.met"
            if ( (_ptTree0=NQUICK_CALL(_Tak(range_modifier)(error_free), 127, cplus))== (PPTREE) -1 ) {
#line 1027 "cplus.met"
                MulFreeTree(4,_ptRes0,_ptTree0,valTreeR,valTreeRS);
                PROG_EXIT(protected_array_declaration_exit,"protected_array_declaration")
#line 1027 "cplus.met"
            }
#line 1027 "cplus.met"
            ReplaceTree(_ptRes0, 1, _ptTree0);
#line 1027 "cplus.met"
            valTreeR=_ptRes0;
#line 1027 "cplus.met"
        }
#line 1027 "cplus.met"
#line 1028 "cplus.met"
        (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 1028 "cplus.met"
        if (  !SEE_TOKEN( VIRG,",") || !(CommTerm(),1)) {
#line 1028 "cplus.met"
            MulFreeTree(2,valTreeR,valTreeRS);
            TOKEN_EXIT(protected_array_declaration_exit,",")
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
            if ( (_ptTree0=NQUICK_CALL(_Tak(arg_declarator_type)(error_free), 14, cplus))== (PPTREE) -1 ) {
#line 1029 "cplus.met"
                MulFreeTree(3,_ptTree0,valTreeR,valTreeRS);
                PROG_EXIT(protected_array_declaration_exit,"protected_array_declaration")
#line 1029 "cplus.met"
            }
#line 1029 "cplus.met"
            ReplaceTree(valTreeR , 2 , _ptTree0);
#line 1029 "cplus.met"
        }
#line 1029 "cplus.met"
#line 1030 "cplus.met"
        (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 1030 "cplus.met"
        if (  !SEE_TOKEN( VIRG,",") || !(CommTerm(),1)) {
#line 1030 "cplus.met"
            MulFreeTree(2,valTreeR,valTreeRS);
            TOKEN_EXIT(protected_array_declaration_exit,",")
#line 1030 "cplus.met"
        } else {
#line 1030 "cplus.met"
            tokenAhead = 0 ;
#line 1030 "cplus.met"
        }
#line 1030 "cplus.met"
#line 1031 "cplus.met"
        {
#line 1031 "cplus.met"
            PPTREE _ptTree0=0;
#line 1031 "cplus.met"
            if ( (_ptTree0=NQUICK_CALL(_Tak(arg_declarator_type)(error_free), 14, cplus))== (PPTREE) -1 ) {
#line 1031 "cplus.met"
                MulFreeTree(3,_ptTree0,valTreeR,valTreeRS);
                PROG_EXIT(protected_array_declaration_exit,"protected_array_declaration")
#line 1031 "cplus.met"
            }
#line 1031 "cplus.met"
            ReplaceTree(valTreeR , 3 , _ptTree0);
#line 1031 "cplus.met"
        }
#line 1031 "cplus.met"
#line 1032 "cplus.met"
        (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 1032 "cplus.met"
        if (  !SEE_TOKEN( VIRG,",") || !(CommTerm(),1)) {
#line 1032 "cplus.met"
            MulFreeTree(2,valTreeR,valTreeRS);
            TOKEN_EXIT(protected_array_declaration_exit,",")
#line 1032 "cplus.met"
        } else {
#line 1032 "cplus.met"
            tokenAhead = 0 ;
#line 1032 "cplus.met"
        }
#line 1032 "cplus.met"
#line 1033 "cplus.met"
        {
#line 1033 "cplus.met"
            PPTREE _ptTree0=0;
#line 1033 "cplus.met"
            if ( (_ptTree0=NQUICK_CALL(_Tak(declarator)(error_free), 51, cplus))== (PPTREE) -1 ) {
#line 1033 "cplus.met"
                MulFreeTree(3,_ptTree0,valTreeR,valTreeRS);
                PROG_EXIT(protected_array_declaration_exit,"protected_array_declaration")
#line 1033 "cplus.met"
            }
#line 1033 "cplus.met"
            ReplaceTree(valTreeR , 4 , _ptTree0);
#line 1033 "cplus.met"
        }
#line 1033 "cplus.met"
#line 1034 "cplus.met"
        (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 1034 "cplus.met"
        if (  !SEE_TOKEN( VIRG,",") || !(CommTerm(),1)) {
#line 1034 "cplus.met"
            MulFreeTree(2,valTreeR,valTreeRS);
            TOKEN_EXIT(protected_array_declaration_exit,",")
#line 1034 "cplus.met"
        } else {
#line 1034 "cplus.met"
            tokenAhead = 0 ;
#line 1034 "cplus.met"
        }
#line 1034 "cplus.met"
#line 1035 "cplus.met"
        {
#line 1035 "cplus.met"
            PPTREE _ptTree0=0;
#line 1035 "cplus.met"
            if ( (_ptTree0=NQUICK_CALL(_Tak(additive_expression)(error_free), 3, cplus))== (PPTREE) -1 ) {
#line 1035 "cplus.met"
                MulFreeTree(3,_ptTree0,valTreeR,valTreeRS);
                PROG_EXIT(protected_array_declaration_exit,"protected_array_declaration")
#line 1035 "cplus.met"
            }
#line 1035 "cplus.met"
            ReplaceTree(valTreeR , 5 , _ptTree0);
#line 1035 "cplus.met"
        }
#line 1035 "cplus.met"
#line 1036 "cplus.met"
        (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 1036 "cplus.met"
        if (  !SEE_TOKEN( PFER,")") || !(CommTerm(),1)) {
#line 1036 "cplus.met"
            MulFreeTree(2,valTreeR,valTreeRS);
            TOKEN_EXIT(protected_array_declaration_exit,")")
#line 1036 "cplus.met"
        } else {
#line 1036 "cplus.met"
            tokenAhead = 0 ;
#line 1036 "cplus.met"
        }
#line 1036 "cplus.met"
#line 1037 "cplus.met"
        if ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN(PVIR,";") && (tokenAhead = 0,CommTerm(),1)){
#line 1037 "cplus.met"
#line 1037 "cplus.met"
        }
#line 1037 "cplus.met"
#line 1039 "cplus.met"
        {
#line 1039 "cplus.met"
            _retValue = valTreeR ;
#line 1039 "cplus.met"
            goto protected_array_declaration_ret;
#line 1039 "cplus.met"
            
#line 1039 "cplus.met"
        }
#line 1039 "cplus.met"
#line 1039 "cplus.met"
#line 1039 "cplus.met"
    } else {
#line 1039 "cplus.met"
#line 1042 "cplus.met"
        if ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN(_PROTECTEDARRAY_S,"_protectedArray_s") && (tokenAhead = 0,CommTerm(),1)){
#line 1042 "cplus.met"
#line 1043 "cplus.met"
#line 1044 "cplus.met"
            (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 1044 "cplus.met"
            if (  !SEE_TOKEN( POUV,"(") || !(CommTerm(),1)) {
#line 1044 "cplus.met"
                MulFreeTree(2,valTreeR,valTreeRS);
                TOKEN_EXIT(protected_array_declaration_exit,"(")
#line 1044 "cplus.met"
            } else {
#line 1044 "cplus.met"
                tokenAhead = 0 ;
#line 1044 "cplus.met"
            }
#line 1044 "cplus.met"
#line 1045 "cplus.met"
            {
#line 1045 "cplus.met"
                PPTREE _ptTree0=0,_ptRes0=0;
#line 1045 "cplus.met"
                _ptRes0= MakeTree(PROTECTED_ARRAY_S, 4);
#line 1045 "cplus.met"
                if ( (_ptTree0=NQUICK_CALL(_Tak(arg_declarator_type)(error_free), 14, cplus))== (PPTREE) -1 ) {
#line 1045 "cplus.met"
                    MulFreeTree(4,_ptRes0,_ptTree0,valTreeR,valTreeRS);
                    PROG_EXIT(protected_array_declaration_exit,"protected_array_declaration")
#line 1045 "cplus.met"
                }
#line 1045 "cplus.met"
                ReplaceTree(_ptRes0, 1, _ptTree0);
#line 1045 "cplus.met"
                valTreeRS=_ptRes0;
#line 1045 "cplus.met"
            }
#line 1045 "cplus.met"
#line 1046 "cplus.met"
            (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 1046 "cplus.met"
            if (  !SEE_TOKEN( VIRG,",") || !(CommTerm(),1)) {
#line 1046 "cplus.met"
                MulFreeTree(2,valTreeR,valTreeRS);
                TOKEN_EXIT(protected_array_declaration_exit,",")
#line 1046 "cplus.met"
            } else {
#line 1046 "cplus.met"
                tokenAhead = 0 ;
#line 1046 "cplus.met"
            }
#line 1046 "cplus.met"
#line 1047 "cplus.met"
            {
#line 1047 "cplus.met"
                PPTREE _ptTree0=0;
#line 1047 "cplus.met"
                if ( (_ptTree0=NQUICK_CALL(_Tak(arg_declarator_type)(error_free), 14, cplus))== (PPTREE) -1 ) {
#line 1047 "cplus.met"
                    MulFreeTree(3,_ptTree0,valTreeR,valTreeRS);
                    PROG_EXIT(protected_array_declaration_exit,"protected_array_declaration")
#line 1047 "cplus.met"
                }
#line 1047 "cplus.met"
                ReplaceTree(valTreeRS , 2 , _ptTree0);
#line 1047 "cplus.met"
            }
#line 1047 "cplus.met"
#line 1048 "cplus.met"
            (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 1048 "cplus.met"
            if (  !SEE_TOKEN( VIRG,",") || !(CommTerm(),1)) {
#line 1048 "cplus.met"
                MulFreeTree(2,valTreeR,valTreeRS);
                TOKEN_EXIT(protected_array_declaration_exit,",")
#line 1048 "cplus.met"
            } else {
#line 1048 "cplus.met"
                tokenAhead = 0 ;
#line 1048 "cplus.met"
            }
#line 1048 "cplus.met"
#line 1049 "cplus.met"
            {
#line 1049 "cplus.met"
                PPTREE _ptTree0=0;
#line 1049 "cplus.met"
                if ( (_ptTree0=NQUICK_CALL(_Tak(declarator)(error_free), 51, cplus))== (PPTREE) -1 ) {
#line 1049 "cplus.met"
                    MulFreeTree(3,_ptTree0,valTreeR,valTreeRS);
                    PROG_EXIT(protected_array_declaration_exit,"protected_array_declaration")
#line 1049 "cplus.met"
                }
#line 1049 "cplus.met"
                ReplaceTree(valTreeRS , 3 , _ptTree0);
#line 1049 "cplus.met"
            }
#line 1049 "cplus.met"
#line 1050 "cplus.met"
            (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 1050 "cplus.met"
            if (  !SEE_TOKEN( VIRG,",") || !(CommTerm(),1)) {
#line 1050 "cplus.met"
                MulFreeTree(2,valTreeR,valTreeRS);
                TOKEN_EXIT(protected_array_declaration_exit,",")
#line 1050 "cplus.met"
            } else {
#line 1050 "cplus.met"
                tokenAhead = 0 ;
#line 1050 "cplus.met"
            }
#line 1050 "cplus.met"
#line 1051 "cplus.met"
            {
#line 1051 "cplus.met"
                PPTREE _ptTree0=0;
#line 1051 "cplus.met"
                if ( (_ptTree0=NQUICK_CALL(_Tak(additive_expression)(error_free), 3, cplus))== (PPTREE) -1 ) {
#line 1051 "cplus.met"
                    MulFreeTree(3,_ptTree0,valTreeR,valTreeRS);
                    PROG_EXIT(protected_array_declaration_exit,"protected_array_declaration")
#line 1051 "cplus.met"
                }
#line 1051 "cplus.met"
                ReplaceTree(valTreeRS , 4 , _ptTree0);
#line 1051 "cplus.met"
            }
#line 1051 "cplus.met"
#line 1052 "cplus.met"
            (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 1052 "cplus.met"
            if (  !SEE_TOKEN( PFER,")") || !(CommTerm(),1)) {
#line 1052 "cplus.met"
                MulFreeTree(2,valTreeR,valTreeRS);
                TOKEN_EXIT(protected_array_declaration_exit,")")
#line 1052 "cplus.met"
            } else {
#line 1052 "cplus.met"
                tokenAhead = 0 ;
#line 1052 "cplus.met"
            }
#line 1052 "cplus.met"
#line 1053 "cplus.met"
            if ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN(PVIR,";") && (tokenAhead = 0,CommTerm(),1)){
#line 1053 "cplus.met"
#line 1053 "cplus.met"
            }
#line 1053 "cplus.met"
#line 1055 "cplus.met"
            {
#line 1055 "cplus.met"
                _retValue = valTreeRS ;
#line 1055 "cplus.met"
                goto protected_array_declaration_ret;
#line 1055 "cplus.met"
                
#line 1055 "cplus.met"
            }
#line 1055 "cplus.met"
#line 1055 "cplus.met"
#line 1055 "cplus.met"
        } else {
#line 1055 "cplus.met"
#line 1058 "cplus.met"
            if ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN(_PROTECTEDPOINTER,"_protectedPointer") && (tokenAhead = 0,CommTerm(),1)){
#line 1058 "cplus.met"
#line 1059 "cplus.met"
#line 1060 "cplus.met"
                (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 1060 "cplus.met"
                if (  !SEE_TOKEN( POUV,"(") || !(CommTerm(),1)) {
#line 1060 "cplus.met"
                    MulFreeTree(2,valTreeR,valTreeRS);
                    TOKEN_EXIT(protected_array_declaration_exit,"(")
#line 1060 "cplus.met"
                } else {
#line 1060 "cplus.met"
                    tokenAhead = 0 ;
#line 1060 "cplus.met"
                }
#line 1060 "cplus.met"
#line 1061 "cplus.met"
                {
#line 1061 "cplus.met"
                    PPTREE _ptTree0=0,_ptRes0=0;
#line 1061 "cplus.met"
                    _ptRes0= MakeTree(PROTECTED_ARRAY, 5);
#line 1061 "cplus.met"
                    if ( (_ptTree0=NQUICK_CALL(_Tak(range_modifier)(error_free), 127, cplus))== (PPTREE) -1 ) {
#line 1061 "cplus.met"
                        MulFreeTree(4,_ptRes0,_ptTree0,valTreeR,valTreeRS);
                        PROG_EXIT(protected_array_declaration_exit,"protected_array_declaration")
#line 1061 "cplus.met"
                    }
#line 1061 "cplus.met"
                    ReplaceTree(_ptRes0, 1, _ptTree0);
#line 1061 "cplus.met"
                    valTreeR=_ptRes0;
#line 1061 "cplus.met"
                }
#line 1061 "cplus.met"
#line 1062 "cplus.met"
                (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 1062 "cplus.met"
                if (  !SEE_TOKEN( VIRG,",") || !(CommTerm(),1)) {
#line 1062 "cplus.met"
                    MulFreeTree(2,valTreeR,valTreeRS);
                    TOKEN_EXIT(protected_array_declaration_exit,",")
#line 1062 "cplus.met"
                } else {
#line 1062 "cplus.met"
                    tokenAhead = 0 ;
#line 1062 "cplus.met"
                }
#line 1062 "cplus.met"
#line 1063 "cplus.met"
                {
#line 1063 "cplus.met"
                    PPTREE _ptTree0=0;
#line 1063 "cplus.met"
                    if ( (_ptTree0=NQUICK_CALL(_Tak(arg_declarator_type)(error_free), 14, cplus))== (PPTREE) -1 ) {
#line 1063 "cplus.met"
                        MulFreeTree(3,_ptTree0,valTreeR,valTreeRS);
                        PROG_EXIT(protected_array_declaration_exit,"protected_array_declaration")
#line 1063 "cplus.met"
                    }
#line 1063 "cplus.met"
                    ReplaceTree(valTreeR , 2 , _ptTree0);
#line 1063 "cplus.met"
                }
#line 1063 "cplus.met"
#line 1064 "cplus.met"
                (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 1064 "cplus.met"
                if (  !SEE_TOKEN( VIRG,",") || !(CommTerm(),1)) {
#line 1064 "cplus.met"
                    MulFreeTree(2,valTreeR,valTreeRS);
                    TOKEN_EXIT(protected_array_declaration_exit,",")
#line 1064 "cplus.met"
                } else {
#line 1064 "cplus.met"
                    tokenAhead = 0 ;
#line 1064 "cplus.met"
                }
#line 1064 "cplus.met"
#line 1065 "cplus.met"
                {
#line 1065 "cplus.met"
                    PPTREE _ptTree0=0;
#line 1065 "cplus.met"
                    if ( (_ptTree0=NQUICK_CALL(_Tak(arg_declarator_type)(error_free), 14, cplus))== (PPTREE) -1 ) {
#line 1065 "cplus.met"
                        MulFreeTree(3,_ptTree0,valTreeR,valTreeRS);
                        PROG_EXIT(protected_array_declaration_exit,"protected_array_declaration")
#line 1065 "cplus.met"
                    }
#line 1065 "cplus.met"
                    ReplaceTree(valTreeR , 3 , _ptTree0);
#line 1065 "cplus.met"
                }
#line 1065 "cplus.met"
#line 1066 "cplus.met"
                (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 1066 "cplus.met"
                if (  !SEE_TOKEN( VIRG,",") || !(CommTerm(),1)) {
#line 1066 "cplus.met"
                    MulFreeTree(2,valTreeR,valTreeRS);
                    TOKEN_EXIT(protected_array_declaration_exit,",")
#line 1066 "cplus.met"
                } else {
#line 1066 "cplus.met"
                    tokenAhead = 0 ;
#line 1066 "cplus.met"
                }
#line 1066 "cplus.met"
#line 1067 "cplus.met"
                {
#line 1067 "cplus.met"
                    PPTREE _ptTree0=0;
#line 1067 "cplus.met"
                    if ( (_ptTree0=NQUICK_CALL(_Tak(declarator)(error_free), 51, cplus))== (PPTREE) -1 ) {
#line 1067 "cplus.met"
                        MulFreeTree(3,_ptTree0,valTreeR,valTreeRS);
                        PROG_EXIT(protected_array_declaration_exit,"protected_array_declaration")
#line 1067 "cplus.met"
                    }
#line 1067 "cplus.met"
                    ReplaceTree(valTreeR , 4 , _ptTree0);
#line 1067 "cplus.met"
                }
#line 1067 "cplus.met"
#line 1068 "cplus.met"
                (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 1068 "cplus.met"
                if (  !SEE_TOKEN( PFER,")") || !(CommTerm(),1)) {
#line 1068 "cplus.met"
                    MulFreeTree(2,valTreeR,valTreeRS);
                    TOKEN_EXIT(protected_array_declaration_exit,")")
#line 1068 "cplus.met"
                } else {
#line 1068 "cplus.met"
                    tokenAhead = 0 ;
#line 1068 "cplus.met"
                }
#line 1068 "cplus.met"
#line 1069 "cplus.met"
                if ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN(PVIR,";") && (tokenAhead = 0,CommTerm(),1)){
#line 1069 "cplus.met"
#line 1069 "cplus.met"
                }
#line 1069 "cplus.met"
#line 1071 "cplus.met"
                {
#line 1071 "cplus.met"
                    _retValue = valTreeR ;
#line 1071 "cplus.met"
                    goto protected_array_declaration_ret;
#line 1071 "cplus.met"
                    
#line 1071 "cplus.met"
                }
#line 1071 "cplus.met"
#line 1071 "cplus.met"
#line 1071 "cplus.met"
            } else {
#line 1071 "cplus.met"
#line 1074 "cplus.met"
                if ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN(_PROTECTEDPOINTER_S,"_protectedPointer_s") && (tokenAhead = 0,CommTerm(),1)){
#line 1074 "cplus.met"
#line 1075 "cplus.met"
#line 1076 "cplus.met"
                    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 1076 "cplus.met"
                    if (  !SEE_TOKEN( POUV,"(") || !(CommTerm(),1)) {
#line 1076 "cplus.met"
                        MulFreeTree(2,valTreeR,valTreeRS);
                        TOKEN_EXIT(protected_array_declaration_exit,"(")
#line 1076 "cplus.met"
                    } else {
#line 1076 "cplus.met"
                        tokenAhead = 0 ;
#line 1076 "cplus.met"
                    }
#line 1076 "cplus.met"
#line 1077 "cplus.met"
                    {
#line 1077 "cplus.met"
                        PPTREE _ptTree0=0,_ptRes0=0;
#line 1077 "cplus.met"
                        _ptRes0= MakeTree(PROTECTED_ARRAY_S, 4);
#line 1077 "cplus.met"
                        if ( (_ptTree0=NQUICK_CALL(_Tak(arg_declarator_type)(error_free), 14, cplus))== (PPTREE) -1 ) {
#line 1077 "cplus.met"
                            MulFreeTree(4,_ptRes0,_ptTree0,valTreeR,valTreeRS);
                            PROG_EXIT(protected_array_declaration_exit,"protected_array_declaration")
#line 1077 "cplus.met"
                        }
#line 1077 "cplus.met"
                        ReplaceTree(_ptRes0, 1, _ptTree0);
#line 1077 "cplus.met"
                        valTreeRS=_ptRes0;
#line 1077 "cplus.met"
                    }
#line 1077 "cplus.met"
#line 1078 "cplus.met"
                    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 1078 "cplus.met"
                    if (  !SEE_TOKEN( VIRG,",") || !(CommTerm(),1)) {
#line 1078 "cplus.met"
                        MulFreeTree(2,valTreeR,valTreeRS);
                        TOKEN_EXIT(protected_array_declaration_exit,",")
#line 1078 "cplus.met"
                    } else {
#line 1078 "cplus.met"
                        tokenAhead = 0 ;
#line 1078 "cplus.met"
                    }
#line 1078 "cplus.met"
#line 1079 "cplus.met"
                    {
#line 1079 "cplus.met"
                        PPTREE _ptTree0=0;
#line 1079 "cplus.met"
                        if ( (_ptTree0=NQUICK_CALL(_Tak(arg_declarator_type)(error_free), 14, cplus))== (PPTREE) -1 ) {
#line 1079 "cplus.met"
                            MulFreeTree(3,_ptTree0,valTreeR,valTreeRS);
                            PROG_EXIT(protected_array_declaration_exit,"protected_array_declaration")
#line 1079 "cplus.met"
                        }
#line 1079 "cplus.met"
                        ReplaceTree(valTreeRS , 2 , _ptTree0);
#line 1079 "cplus.met"
                    }
#line 1079 "cplus.met"
#line 1080 "cplus.met"
                    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 1080 "cplus.met"
                    if (  !SEE_TOKEN( VIRG,",") || !(CommTerm(),1)) {
#line 1080 "cplus.met"
                        MulFreeTree(2,valTreeR,valTreeRS);
                        TOKEN_EXIT(protected_array_declaration_exit,",")
#line 1080 "cplus.met"
                    } else {
#line 1080 "cplus.met"
                        tokenAhead = 0 ;
#line 1080 "cplus.met"
                    }
#line 1080 "cplus.met"
#line 1081 "cplus.met"
                    {
#line 1081 "cplus.met"
                        PPTREE _ptTree0=0;
#line 1081 "cplus.met"
                        if ( (_ptTree0=NQUICK_CALL(_Tak(declarator)(error_free), 51, cplus))== (PPTREE) -1 ) {
#line 1081 "cplus.met"
                            MulFreeTree(3,_ptTree0,valTreeR,valTreeRS);
                            PROG_EXIT(protected_array_declaration_exit,"protected_array_declaration")
#line 1081 "cplus.met"
                        }
#line 1081 "cplus.met"
                        ReplaceTree(valTreeRS , 3 , _ptTree0);
#line 1081 "cplus.met"
                    }
#line 1081 "cplus.met"
#line 1082 "cplus.met"
                    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 1082 "cplus.met"
                    if (  !SEE_TOKEN( PFER,")") || !(CommTerm(),1)) {
#line 1082 "cplus.met"
                        MulFreeTree(2,valTreeR,valTreeRS);
                        TOKEN_EXIT(protected_array_declaration_exit,")")
#line 1082 "cplus.met"
                    } else {
#line 1082 "cplus.met"
                        tokenAhead = 0 ;
#line 1082 "cplus.met"
                    }
#line 1082 "cplus.met"
#line 1083 "cplus.met"
                    if ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN(PVIR,";") && (tokenAhead = 0,CommTerm(),1)){
#line 1083 "cplus.met"
#line 1083 "cplus.met"
                    }
#line 1083 "cplus.met"
#line 1085 "cplus.met"
                    {
#line 1085 "cplus.met"
                        _retValue = valTreeRS ;
#line 1085 "cplus.met"
                        goto protected_array_declaration_ret;
#line 1085 "cplus.met"
                        
#line 1085 "cplus.met"
                    }
#line 1085 "cplus.met"
#line 1085 "cplus.met"
#line 1085 "cplus.met"
                } else {
#line 1085 "cplus.met"
#line 1088 "cplus.met"
                    if ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN(_TYPEDEF_PROTECTEDARRAY,"_typedef_protectedArray") && (tokenAhead = 0,CommTerm(),1)){
#line 1088 "cplus.met"
#line 1089 "cplus.met"
#line 1090 "cplus.met"
                        (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 1090 "cplus.met"
                        if (  !SEE_TOKEN( POUV,"(") || !(CommTerm(),1)) {
#line 1090 "cplus.met"
                            MulFreeTree(2,valTreeR,valTreeRS);
                            TOKEN_EXIT(protected_array_declaration_exit,"(")
#line 1090 "cplus.met"
                        } else {
#line 1090 "cplus.met"
                            tokenAhead = 0 ;
#line 1090 "cplus.met"
                        }
#line 1090 "cplus.met"
#line 1091 "cplus.met"
                        {
#line 1091 "cplus.met"
                            PPTREE _ptTree0=0,_ptRes0=0;
#line 1091 "cplus.met"
                            _ptRes0= MakeTree(PROTECTED_ARRAY_TYPEDEF, 5);
#line 1091 "cplus.met"
                            if ( (_ptTree0=NQUICK_CALL(_Tak(range_modifier)(error_free), 127, cplus))== (PPTREE) -1 ) {
#line 1091 "cplus.met"
                                MulFreeTree(4,_ptRes0,_ptTree0,valTreeR,valTreeRS);
                                PROG_EXIT(protected_array_declaration_exit,"protected_array_declaration")
#line 1091 "cplus.met"
                            }
#line 1091 "cplus.met"
                            ReplaceTree(_ptRes0, 1, _ptTree0);
#line 1091 "cplus.met"
                            valTreeR=_ptRes0;
#line 1091 "cplus.met"
                        }
#line 1091 "cplus.met"
#line 1092 "cplus.met"
                        (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 1092 "cplus.met"
                        if (  !SEE_TOKEN( VIRG,",") || !(CommTerm(),1)) {
#line 1092 "cplus.met"
                            MulFreeTree(2,valTreeR,valTreeRS);
                            TOKEN_EXIT(protected_array_declaration_exit,",")
#line 1092 "cplus.met"
                        } else {
#line 1092 "cplus.met"
                            tokenAhead = 0 ;
#line 1092 "cplus.met"
                        }
#line 1092 "cplus.met"
#line 1093 "cplus.met"
                        {
#line 1093 "cplus.met"
                            PPTREE _ptTree0=0;
#line 1093 "cplus.met"
                            if ( (_ptTree0=NQUICK_CALL(_Tak(arg_declarator_type)(error_free), 14, cplus))== (PPTREE) -1 ) {
#line 1093 "cplus.met"
                                MulFreeTree(3,_ptTree0,valTreeR,valTreeRS);
                                PROG_EXIT(protected_array_declaration_exit,"protected_array_declaration")
#line 1093 "cplus.met"
                            }
#line 1093 "cplus.met"
                            ReplaceTree(valTreeR , 2 , _ptTree0);
#line 1093 "cplus.met"
                        }
#line 1093 "cplus.met"
#line 1094 "cplus.met"
                        (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 1094 "cplus.met"
                        if (  !SEE_TOKEN( VIRG,",") || !(CommTerm(),1)) {
#line 1094 "cplus.met"
                            MulFreeTree(2,valTreeR,valTreeRS);
                            TOKEN_EXIT(protected_array_declaration_exit,",")
#line 1094 "cplus.met"
                        } else {
#line 1094 "cplus.met"
                            tokenAhead = 0 ;
#line 1094 "cplus.met"
                        }
#line 1094 "cplus.met"
#line 1095 "cplus.met"
                        {
#line 1095 "cplus.met"
                            PPTREE _ptTree0=0;
#line 1095 "cplus.met"
                            if ( (_ptTree0=NQUICK_CALL(_Tak(arg_declarator_type)(error_free), 14, cplus))== (PPTREE) -1 ) {
#line 1095 "cplus.met"
                                MulFreeTree(3,_ptTree0,valTreeR,valTreeRS);
                                PROG_EXIT(protected_array_declaration_exit,"protected_array_declaration")
#line 1095 "cplus.met"
                            }
#line 1095 "cplus.met"
                            ReplaceTree(valTreeR , 3 , _ptTree0);
#line 1095 "cplus.met"
                        }
#line 1095 "cplus.met"
#line 1096 "cplus.met"
                        (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 1096 "cplus.met"
                        if (  !SEE_TOKEN( VIRG,",") || !(CommTerm(),1)) {
#line 1096 "cplus.met"
                            MulFreeTree(2,valTreeR,valTreeRS);
                            TOKEN_EXIT(protected_array_declaration_exit,",")
#line 1096 "cplus.met"
                        } else {
#line 1096 "cplus.met"
                            tokenAhead = 0 ;
#line 1096 "cplus.met"
                        }
#line 1096 "cplus.met"
#line 1097 "cplus.met"
                        {
#line 1097 "cplus.met"
                            PPTREE _ptTree0=0;
#line 1097 "cplus.met"
                            if ( (_ptTree0=NQUICK_CALL(_Tak(declarator)(error_free), 51, cplus))== (PPTREE) -1 ) {
#line 1097 "cplus.met"
                                MulFreeTree(3,_ptTree0,valTreeR,valTreeRS);
                                PROG_EXIT(protected_array_declaration_exit,"protected_array_declaration")
#line 1097 "cplus.met"
                            }
#line 1097 "cplus.met"
                            ReplaceTree(valTreeR , 4 , _ptTree0);
#line 1097 "cplus.met"
                        }
#line 1097 "cplus.met"
#line 1098 "cplus.met"
                        (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 1098 "cplus.met"
                        if (  !SEE_TOKEN( VIRG,",") || !(CommTerm(),1)) {
#line 1098 "cplus.met"
                            MulFreeTree(2,valTreeR,valTreeRS);
                            TOKEN_EXIT(protected_array_declaration_exit,",")
#line 1098 "cplus.met"
                        } else {
#line 1098 "cplus.met"
                            tokenAhead = 0 ;
#line 1098 "cplus.met"
                        }
#line 1098 "cplus.met"
#line 1099 "cplus.met"
                        {
#line 1099 "cplus.met"
                            PPTREE _ptTree0=0;
#line 1099 "cplus.met"
                            if ( (_ptTree0=NQUICK_CALL(_Tak(additive_expression)(error_free), 3, cplus))== (PPTREE) -1 ) {
#line 1099 "cplus.met"
                                MulFreeTree(3,_ptTree0,valTreeR,valTreeRS);
                                PROG_EXIT(protected_array_declaration_exit,"protected_array_declaration")
#line 1099 "cplus.met"
                            }
#line 1099 "cplus.met"
                            ReplaceTree(valTreeR , 5 , _ptTree0);
#line 1099 "cplus.met"
                        }
#line 1099 "cplus.met"
#line 1100 "cplus.met"
                        (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 1100 "cplus.met"
                        if (  !SEE_TOKEN( PFER,")") || !(CommTerm(),1)) {
#line 1100 "cplus.met"
                            MulFreeTree(2,valTreeR,valTreeRS);
                            TOKEN_EXIT(protected_array_declaration_exit,")")
#line 1100 "cplus.met"
                        } else {
#line 1100 "cplus.met"
                            tokenAhead = 0 ;
#line 1100 "cplus.met"
                        }
#line 1100 "cplus.met"
#line 1101 "cplus.met"
                        if ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN(PVIR,";") && (tokenAhead = 0,CommTerm(),1)){
#line 1101 "cplus.met"
#line 1101 "cplus.met"
                        }
#line 1101 "cplus.met"
#line 1103 "cplus.met"
                        {
#line 1103 "cplus.met"
                            _retValue = valTreeR ;
#line 1103 "cplus.met"
                            goto protected_array_declaration_ret;
#line 1103 "cplus.met"
                            
#line 1103 "cplus.met"
                        }
#line 1103 "cplus.met"
#line 1103 "cplus.met"
#line 1103 "cplus.met"
                    } else {
#line 1103 "cplus.met"
#line 1106 "cplus.met"
                        if ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN(_TYPEDEF_PROTECTEDARRAY_S,"_typedef_protectedArray_s") && (tokenAhead = 0,CommTerm(),1)){
#line 1106 "cplus.met"
#line 1107 "cplus.met"
#line 1108 "cplus.met"
                            (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 1108 "cplus.met"
                            if (  !SEE_TOKEN( POUV,"(") || !(CommTerm(),1)) {
#line 1108 "cplus.met"
                                MulFreeTree(2,valTreeR,valTreeRS);
                                TOKEN_EXIT(protected_array_declaration_exit,"(")
#line 1108 "cplus.met"
                            } else {
#line 1108 "cplus.met"
                                tokenAhead = 0 ;
#line 1108 "cplus.met"
                            }
#line 1108 "cplus.met"
#line 1109 "cplus.met"
                            {
#line 1109 "cplus.met"
                                PPTREE _ptTree0=0,_ptRes0=0;
#line 1109 "cplus.met"
                                _ptRes0= MakeTree(PROTECTED_ARRAY_S_TYPEDEF, 4);
#line 1109 "cplus.met"
                                if ( (_ptTree0=NQUICK_CALL(_Tak(arg_declarator_type)(error_free), 14, cplus))== (PPTREE) -1 ) {
#line 1109 "cplus.met"
                                    MulFreeTree(4,_ptRes0,_ptTree0,valTreeR,valTreeRS);
                                    PROG_EXIT(protected_array_declaration_exit,"protected_array_declaration")
#line 1109 "cplus.met"
                                }
#line 1109 "cplus.met"
                                ReplaceTree(_ptRes0, 1, _ptTree0);
#line 1109 "cplus.met"
                                valTreeRS=_ptRes0;
#line 1109 "cplus.met"
                            }
#line 1109 "cplus.met"
#line 1110 "cplus.met"
                            (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 1110 "cplus.met"
                            if (  !SEE_TOKEN( VIRG,",") || !(CommTerm(),1)) {
#line 1110 "cplus.met"
                                MulFreeTree(2,valTreeR,valTreeRS);
                                TOKEN_EXIT(protected_array_declaration_exit,",")
#line 1110 "cplus.met"
                            } else {
#line 1110 "cplus.met"
                                tokenAhead = 0 ;
#line 1110 "cplus.met"
                            }
#line 1110 "cplus.met"
#line 1111 "cplus.met"
                            {
#line 1111 "cplus.met"
                                PPTREE _ptTree0=0;
#line 1111 "cplus.met"
                                if ( (_ptTree0=NQUICK_CALL(_Tak(arg_declarator_type)(error_free), 14, cplus))== (PPTREE) -1 ) {
#line 1111 "cplus.met"
                                    MulFreeTree(3,_ptTree0,valTreeR,valTreeRS);
                                    PROG_EXIT(protected_array_declaration_exit,"protected_array_declaration")
#line 1111 "cplus.met"
                                }
#line 1111 "cplus.met"
                                ReplaceTree(valTreeRS , 2 , _ptTree0);
#line 1111 "cplus.met"
                            }
#line 1111 "cplus.met"
#line 1112 "cplus.met"
                            (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 1112 "cplus.met"
                            if (  !SEE_TOKEN( VIRG,",") || !(CommTerm(),1)) {
#line 1112 "cplus.met"
                                MulFreeTree(2,valTreeR,valTreeRS);
                                TOKEN_EXIT(protected_array_declaration_exit,",")
#line 1112 "cplus.met"
                            } else {
#line 1112 "cplus.met"
                                tokenAhead = 0 ;
#line 1112 "cplus.met"
                            }
#line 1112 "cplus.met"
#line 1113 "cplus.met"
                            {
#line 1113 "cplus.met"
                                PPTREE _ptTree0=0;
#line 1113 "cplus.met"
                                if ( (_ptTree0=NQUICK_CALL(_Tak(declarator)(error_free), 51, cplus))== (PPTREE) -1 ) {
#line 1113 "cplus.met"
                                    MulFreeTree(3,_ptTree0,valTreeR,valTreeRS);
                                    PROG_EXIT(protected_array_declaration_exit,"protected_array_declaration")
#line 1113 "cplus.met"
                                }
#line 1113 "cplus.met"
                                ReplaceTree(valTreeRS , 3 , _ptTree0);
#line 1113 "cplus.met"
                            }
#line 1113 "cplus.met"
#line 1114 "cplus.met"
                            (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 1114 "cplus.met"
                            if (  !SEE_TOKEN( VIRG,",") || !(CommTerm(),1)) {
#line 1114 "cplus.met"
                                MulFreeTree(2,valTreeR,valTreeRS);
                                TOKEN_EXIT(protected_array_declaration_exit,",")
#line 1114 "cplus.met"
                            } else {
#line 1114 "cplus.met"
                                tokenAhead = 0 ;
#line 1114 "cplus.met"
                            }
#line 1114 "cplus.met"
#line 1115 "cplus.met"
                            {
#line 1115 "cplus.met"
                                PPTREE _ptTree0=0;
#line 1115 "cplus.met"
                                if ( (_ptTree0=NQUICK_CALL(_Tak(additive_expression)(error_free), 3, cplus))== (PPTREE) -1 ) {
#line 1115 "cplus.met"
                                    MulFreeTree(3,_ptTree0,valTreeR,valTreeRS);
                                    PROG_EXIT(protected_array_declaration_exit,"protected_array_declaration")
#line 1115 "cplus.met"
                                }
#line 1115 "cplus.met"
                                ReplaceTree(valTreeRS , 4 , _ptTree0);
#line 1115 "cplus.met"
                            }
#line 1115 "cplus.met"
#line 1116 "cplus.met"
                            (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 1116 "cplus.met"
                            if (  !SEE_TOKEN( PFER,")") || !(CommTerm(),1)) {
#line 1116 "cplus.met"
                                MulFreeTree(2,valTreeR,valTreeRS);
                                TOKEN_EXIT(protected_array_declaration_exit,")")
#line 1116 "cplus.met"
                            } else {
#line 1116 "cplus.met"
                                tokenAhead = 0 ;
#line 1116 "cplus.met"
                            }
#line 1116 "cplus.met"
#line 1117 "cplus.met"
                            if ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN(PVIR,";") && (tokenAhead = 0,CommTerm(),1)){
#line 1117 "cplus.met"
#line 1117 "cplus.met"
                            }
#line 1117 "cplus.met"
#line 1119 "cplus.met"
                            {
#line 1119 "cplus.met"
                                _retValue = valTreeRS ;
#line 1119 "cplus.met"
                                goto protected_array_declaration_ret;
#line 1119 "cplus.met"
                                
#line 1119 "cplus.met"
                            }
#line 1119 "cplus.met"
#line 1119 "cplus.met"
#line 1119 "cplus.met"
                        } else {
#line 1119 "cplus.met"
#line 1122 "cplus.met"
                            
#line 1122 "cplus.met"
                            MulFreeTree(2,valTreeR,valTreeRS);
                            LEX_EXIT ("",0);
#line 1122 "cplus.met"
                            goto protected_array_declaration_exit;
#line 1122 "cplus.met"
                        }
#line 1122 "cplus.met"
                    }
#line 1122 "cplus.met"
                }
#line 1122 "cplus.met"
            }
#line 1122 "cplus.met"
        }
#line 1122 "cplus.met"
    }
#line 1122 "cplus.met"
#line 1122 "cplus.met"
#line 1122 "cplus.met"

#line 1123 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1123 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 1123 "cplus.met"
return((PPTREE) 0);
#line 1123 "cplus.met"

#line 1123 "cplus.met"
protected_array_declaration_exit :
#line 1123 "cplus.met"

#line 1123 "cplus.met"
    _Debug = TRACE_RULE("protected_array_declaration",TRACE_EXIT,(PPTREE)0);
#line 1123 "cplus.met"
    _funcLevel--;
#line 1123 "cplus.met"
    return((PPTREE) -1) ;
#line 1123 "cplus.met"

#line 1123 "cplus.met"
protected_array_declaration_ret :
#line 1123 "cplus.met"
    
#line 1123 "cplus.met"
    _Debug = TRACE_RULE("protected_array_declaration",TRACE_RETURN,_retValue);
#line 1123 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1123 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 1123 "cplus.met"
    return _retValue ;
#line 1123 "cplus.met"
}
#line 1123 "cplus.met"

#line 1123 "cplus.met"
