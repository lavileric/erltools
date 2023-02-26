/*************************************************************************/
/*                                                                       */
/*        Produced by MetaGen version 2.0  -    1989-2006                 */
/*       Syntaxic Analyzer Meta Generator developped by                  */
/*                  Eric Lavillonniere                                   */
/*                                                                       */
/*************************************************************************/

#include "token.h"
#include "cplus.h"


#line 3120 "cplus.met"
PPTREE cplus::parameter_list_extended ( int error_free)
#line 3120 "cplus.met"
{
#line 3120 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 3120 "cplus.met"
    int _value,_nbPre = 0 ;
#line 3120 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 3120 "cplus.met"
    int _Debug = TRACE_RULE("parameter_list_extended",TRACE_ENTER,(PPTREE)0);
#line 3120 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 3120 "cplus.met"
#line 3120 "cplus.met"
    PPTREE _addlist1 = (PPTREE) 0;
#line 3120 "cplus.met"
#line 3120 "cplus.met"
    PPTREE paramList = (PPTREE) 0,valTree = (PPTREE) 0;
#line 3120 "cplus.met"
#line 3122 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3122 "cplus.met"
    if (  !SEE_TOKEN( POUV,"(") || !(CommTerm(),1)) {
#line 3122 "cplus.met"
        MulFreeTree(3,_addlist1,paramList,valTree);
        TOKEN_EXIT(parameter_list_extended_exit,"(")
#line 3122 "cplus.met"
    } else {
#line 3122 "cplus.met"
        tokenAhead = 0 ;
#line 3122 "cplus.met"
    }
#line 3122 "cplus.met"
#line 3123 "cplus.met"
     { int followed = 0;
#line 3123 "cplus.met"
#line 3124 "cplus.met"
    if (! ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN( PFER,")"))){
#line 3124 "cplus.met"
#line 3125 "cplus.met"
#line 3126 "cplus.met"
         { int exit = 0 ;
#line 3126 "cplus.met"
#line 3127 "cplus.met"
        if ((NPUSH_CALL_AFF_VERIF(valTree = ,_Tak(arg_declarator_followed), 9, cplus))){
#line 3127 "cplus.met"
#line 3128 "cplus.met"
#line 3129 "cplus.met"
             followed = 1 ;
#line 3129 "cplus.met"
#line 3130 "cplus.met"
            paramList =AddList(paramList ,valTree );
#line 3130 "cplus.met"
#line 3130 "cplus.met"
#line 3130 "cplus.met"
        } else {
#line 3130 "cplus.met"
#line 3133 "cplus.met"
            if ((NPUSH_CALL_AFF_VERIF(valTree = ,_Tak(arg_declarator), 7, cplus))){
#line 3133 "cplus.met"
#line 3134 "cplus.met"
                paramList =AddList(paramList ,valTree );
#line 3134 "cplus.met"
#line 3134 "cplus.met"
            } else {
#line 3134 "cplus.met"
#line 3136 "cplus.met"
#line 3137 "cplus.met"
                if (((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&TERM_OR_META(IDENT,"IDENT") && !(tokenAhead = 0) && ( BUILD_TERM_META(valTree))) ){
#line 3137 "cplus.met"
#line 3138 "cplus.met"
                    {
#line 3138 "cplus.met"
                        PPTREE _ptTree0=0;
#line 3138 "cplus.met"
                        {
#line 3138 "cplus.met"
                            PPTREE _ptRes1=0;
#line 3138 "cplus.met"
                            _ptRes1= MakeTree(IDENT, 1);
#line 3138 "cplus.met"
                            ReplaceTree(_ptRes1, 1, valTree );
#line 3138 "cplus.met"
                            _ptTree0=_ptRes1;
#line 3138 "cplus.met"
                        }
#line 3138 "cplus.met"
                        paramList =AddList(paramList , _ptTree0);
#line 3138 "cplus.met"
                    }
#line 3138 "cplus.met"
#line 3138 "cplus.met"
                }
#line 3138 "cplus.met"
#line 3139 "cplus.met"
                if (((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN( POINPOINPOIN,"...")) || 
#line 3139 "cplus.met"
                   ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN( VIRG,","))){
#line 3139 "cplus.met"
#line 3140 "cplus.met"
                     followed = 1;
#line 3140 "cplus.met"
                }
#line 3140 "cplus.met"
#line 3141 "cplus.met"
                if ((! ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN( PFER,")"))) && 
#line 3141 "cplus.met"
                   (! ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN( POINPOINPOIN,"...")))){
#line 3141 "cplus.met"
#line 3142 "cplus.met"
#line 3143 "cplus.met"
                     followed = 1;
#line 3143 "cplus.met"
#line 3144 "cplus.met"
                    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3144 "cplus.met"
                    if (  !SEE_TOKEN( VIRG,",") || !(CommTerm(),1)) {
#line 3144 "cplus.met"
                        MulFreeTree(3,_addlist1,paramList,valTree);
                        TOKEN_EXIT(parameter_list_extended_exit,",")
#line 3144 "cplus.met"
                    } else {
#line 3144 "cplus.met"
                        tokenAhead = 0 ;
#line 3144 "cplus.met"
                    }
#line 3144 "cplus.met"
#line 3144 "cplus.met"
#line 3144 "cplus.met"
                }
#line 3144 "cplus.met"
#line 3144 "cplus.met"
            }
#line 3144 "cplus.met"
        }
#line 3144 "cplus.met"
#line 3144 "cplus.met"
        _addlist1 = paramList ;
#line 3144 "cplus.met"
#line 3147 "cplus.met"
        while ( followed && !exit ) { 
#line 3147 "cplus.met"
#line 3148 "cplus.met"
#line 3149 "cplus.met"
             followed = 0 ;
#line 3149 "cplus.met"
#line 3150 "cplus.met"
            if ((NPUSH_CALL_AFF_VERIF(valTree = ,_Tak(arg_declarator_followed), 9, cplus))){
#line 3150 "cplus.met"
#line 3151 "cplus.met"
#line 3152 "cplus.met"
                 followed = 1 ;
#line 3152 "cplus.met"
#line 3153 "cplus.met"
                _addlist1 =AddList(_addlist1 ,valTree );
#line 3153 "cplus.met"
#line 3153 "cplus.met"
                if (paramList){
#line 3153 "cplus.met"
#line 3153 "cplus.met"
                    _addlist1 = SonTree (_addlist1 ,2 );
#line 3153 "cplus.met"
                } else {
#line 3153 "cplus.met"
#line 3153 "cplus.met"
                    paramList = _addlist1 ;
#line 3153 "cplus.met"
                }
#line 3153 "cplus.met"
#line 3153 "cplus.met"
#line 3153 "cplus.met"
            } else {
#line 3153 "cplus.met"
#line 3156 "cplus.met"
                if ((NPUSH_CALL_AFF_VERIF(valTree = ,_Tak(arg_declarator), 7, cplus))){
#line 3156 "cplus.met"
#line 3157 "cplus.met"
#line 3157 "cplus.met"
                    _addlist1 =AddList(_addlist1 ,valTree );
#line 3157 "cplus.met"
#line 3157 "cplus.met"
                    if (paramList){
#line 3157 "cplus.met"
#line 3157 "cplus.met"
                        _addlist1 = SonTree (_addlist1 ,2 );
#line 3157 "cplus.met"
                    } else {
#line 3157 "cplus.met"
#line 3157 "cplus.met"
                        paramList = _addlist1 ;
#line 3157 "cplus.met"
                    }
#line 3157 "cplus.met"
                } else {
#line 3157 "cplus.met"
#line 3159 "cplus.met"
#line 3160 "cplus.met"
                    if (((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&TERM_OR_META(IDENT,"IDENT") && !(tokenAhead = 0) && ( BUILD_TERM_META(valTree))) ){
#line 3160 "cplus.met"
#line 3161 "cplus.met"
#line 3162 "cplus.met"
                        {
#line 3162 "cplus.met"
                            PPTREE _ptTree0=0;
#line 3162 "cplus.met"
                            {
#line 3162 "cplus.met"
                                PPTREE _ptRes1=0;
#line 3162 "cplus.met"
                                _ptRes1= MakeTree(IDENT, 1);
#line 3162 "cplus.met"
                                ReplaceTree(_ptRes1, 1, valTree );
#line 3162 "cplus.met"
                                _ptTree0=_ptRes1;
#line 3162 "cplus.met"
                            }
#line 3162 "cplus.met"
                            _addlist1 =AddList(_addlist1 , _ptTree0);
#line 3162 "cplus.met"
                        }
#line 3162 "cplus.met"
#line 3162 "cplus.met"
                        if (paramList){
#line 3162 "cplus.met"
#line 3162 "cplus.met"
                            _addlist1 = SonTree (_addlist1 ,2 );
#line 3162 "cplus.met"
                        } else {
#line 3162 "cplus.met"
#line 3162 "cplus.met"
                            paramList = _addlist1 ;
#line 3162 "cplus.met"
                        }
#line 3162 "cplus.met"
#line 3163 "cplus.met"
                        if (((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN( POINPOINPOIN,"...")) || 
#line 3163 "cplus.met"
                           ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN( VIRG,","))){
#line 3163 "cplus.met"
#line 3164 "cplus.met"
                             followed = 1;
#line 3164 "cplus.met"
                        }
#line 3164 "cplus.met"
#line 3165 "cplus.met"
                        if ((! ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN( PFER,")"))) && 
#line 3165 "cplus.met"
                           (! ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN( POINPOINPOIN,"...")))){
#line 3165 "cplus.met"
#line 3166 "cplus.met"
#line 3167 "cplus.met"
                             followed = 1;
#line 3167 "cplus.met"
#line 3168 "cplus.met"
                            (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3168 "cplus.met"
                            if (  !SEE_TOKEN( VIRG,",") || !(CommTerm(),1)) {
#line 3168 "cplus.met"
                                MulFreeTree(3,_addlist1,paramList,valTree);
                                TOKEN_EXIT(parameter_list_extended_exit,",")
#line 3168 "cplus.met"
                            } else {
#line 3168 "cplus.met"
                                tokenAhead = 0 ;
#line 3168 "cplus.met"
                            }
#line 3168 "cplus.met"
#line 3168 "cplus.met"
#line 3168 "cplus.met"
                        }
#line 3168 "cplus.met"
#line 3168 "cplus.met"
#line 3169 "cplus.met"
                    } else {
#line 3169 "cplus.met"
#line 3172 "cplus.met"
#line 3173 "cplus.met"
                        {
#line 3173 "cplus.met"
                            PPTREE _ptTree0=0;
#line 3173 "cplus.met"
                            {
#line 3173 "cplus.met"
                                PPTREE _ptRes1=0;
#line 3173 "cplus.met"
                                _ptRes1= MakeTree(VAR_LIST, 0);
#line 3173 "cplus.met"
                                _ptTree0=_ptRes1;
#line 3173 "cplus.met"
                            }
#line 3173 "cplus.met"
                            _addlist1 =AddList(_addlist1 , _ptTree0);
#line 3173 "cplus.met"
                        }
#line 3173 "cplus.met"
#line 3173 "cplus.met"
                        if (paramList){
#line 3173 "cplus.met"
#line 3173 "cplus.met"
                            _addlist1 = SonTree (_addlist1 ,2 );
#line 3173 "cplus.met"
                        } else {
#line 3173 "cplus.met"
#line 3173 "cplus.met"
                            paramList = _addlist1 ;
#line 3173 "cplus.met"
                        }
#line 3173 "cplus.met"
#line 3174 "cplus.met"
                         exit = 1 ;
#line 3174 "cplus.met"
#line 3175 "cplus.met"
                        if ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN(POINPOINPOIN,"...") && (tokenAhead = 0,CommTerm(),1)){
#line 3175 "cplus.met"
#line 3175 "cplus.met"
                        }
#line 3175 "cplus.met"
#line 3177 "cplus.met"
                        if (! ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN( PFER,")"))){
#line 3177 "cplus.met"
#line 3178 "cplus.met"
                            (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3178 "cplus.met"
                            if (  !SEE_TOKEN( PFER,")") || !(CommTerm(),1)) {
#line 3178 "cplus.met"
                                MulFreeTree(3,_addlist1,paramList,valTree);
                                TOKEN_EXIT(parameter_list_extended_exit,")")
#line 3178 "cplus.met"
                            } else {
#line 3178 "cplus.met"
                                tokenAhead = 0 ;
#line 3178 "cplus.met"
                            }
#line 3178 "cplus.met"
                        }
#line 3178 "cplus.met"
#line 3178 "cplus.met"
                    }
#line 3178 "cplus.met"
#line 3178 "cplus.met"
                }
#line 3178 "cplus.met"
            }
#line 3178 "cplus.met"
#line 3178 "cplus.met"
        } 
#line 3178 "cplus.met"
#line 3182 "cplus.met"
        if ((! ( exit )) && 
#line 3182 "cplus.met"
           ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN(POINPOINPOIN,"...") && (tokenAhead = 0,CommTerm(),1))){
#line 3182 "cplus.met"
#line 3183 "cplus.met"
            {
#line 3183 "cplus.met"
                PPTREE _ptTree0=0;
#line 3183 "cplus.met"
                {
#line 3183 "cplus.met"
                    PPTREE _ptRes1=0;
#line 3183 "cplus.met"
                    _ptRes1= MakeTree(VAR_LIST, 0);
#line 3183 "cplus.met"
                    _ptTree0=_ptRes1;
#line 3183 "cplus.met"
                }
#line 3183 "cplus.met"
                paramList =AddList(paramList , _ptTree0);
#line 3183 "cplus.met"
            }
#line 3183 "cplus.met"
#line 3183 "cplus.met"
        }
#line 3183 "cplus.met"
#line 3184 "cplus.met"
         }  
#line 3184 "cplus.met"
#line 3184 "cplus.met"
#line 3184 "cplus.met"
    }
#line 3184 "cplus.met"
#line 3186 "cplus.met"
     } 
#line 3186 "cplus.met"
#line 3187 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3187 "cplus.met"
    if (  !SEE_TOKEN( PFER,")") || !(CommTerm(),1)) {
#line 3187 "cplus.met"
        MulFreeTree(3,_addlist1,paramList,valTree);
        TOKEN_EXIT(parameter_list_extended_exit,")")
#line 3187 "cplus.met"
    } else {
#line 3187 "cplus.met"
        tokenAhead = 0 ;
#line 3187 "cplus.met"
    }
#line 3187 "cplus.met"
#line 3188 "cplus.met"
    {
#line 3188 "cplus.met"
        _retValue = paramList ;
#line 3188 "cplus.met"
        goto parameter_list_extended_ret;
#line 3188 "cplus.met"
        
#line 3188 "cplus.met"
    }
#line 3188 "cplus.met"
#line 3188 "cplus.met"
#line 3188 "cplus.met"

#line 3189 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 3189 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 3189 "cplus.met"
return((PPTREE) 0);
#line 3189 "cplus.met"

#line 3189 "cplus.met"
parameter_list_extended_exit :
#line 3189 "cplus.met"

#line 3189 "cplus.met"
    _Debug = TRACE_RULE("parameter_list_extended",TRACE_EXIT,(PPTREE)0);
#line 3189 "cplus.met"
    _funcLevel--;
#line 3189 "cplus.met"
    return((PPTREE) -1) ;
#line 3189 "cplus.met"

#line 3189 "cplus.met"
parameter_list_extended_ret :
#line 3189 "cplus.met"
    
#line 3189 "cplus.met"
    _Debug = TRACE_RULE("parameter_list_extended",TRACE_RETURN,_retValue);
#line 3189 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 3189 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 3189 "cplus.met"
    return _retValue ;
#line 3189 "cplus.met"
}
#line 3189 "cplus.met"

#line 3189 "cplus.met"
#line 3613 "cplus.met"
PPTREE cplus::parse_entry ( int error_free)
#line 3613 "cplus.met"
{
#line 3613 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 3613 "cplus.met"
    int _value,_nbPre = 0 ;
#line 3613 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 3613 "cplus.met"
    int _Debug = TRACE_RULE("parse_entry",TRACE_ENTER,(PPTREE)0);
#line 3613 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 3613 "cplus.met"
#line 3613 "cplus.met"
    PPTREE retValue = (PPTREE) 0;
#line 3613 "cplus.met"
#line 3615 "cplus.met"
    if ((((((NPUSH_CALL_AFF_VERIF(retValue = ,_Tak(func_declaration), 77, cplus)) || 
#line 3615 "cplus.met"
           (NPUSH_CALL_AFF_VERIF(retValue = ,_Tak(statement), 140, cplus))) || 
#line 3615 "cplus.met"
          (NPUSH_CALL_AFF_VERIF(retValue = ,_Tak(data_declaration), 41, cplus))) || 
#line 3615 "cplus.met"
         (NPUSH_CALL_AFF_VERIF(retValue = ,_Tak(switch_list), 144, cplus))) || 
#line 3615 "cplus.met"
        (NPUSH_CALL_AFF_VERIF(retValue = ,_Tak(switch_elem), 143, cplus))) || 
#line 3615 "cplus.met"
       (NPUSH_CALL_AFF_VERIF(retValue = ,_Tak(expression), 63, cplus))){
#line 3615 "cplus.met"
#line 3616 "cplus.met"
        {
#line 3616 "cplus.met"
            _retValue = retValue ;
#line 3616 "cplus.met"
            goto parse_entry_ret;
#line 3616 "cplus.met"
            
#line 3616 "cplus.met"
        }
#line 3616 "cplus.met"
    } else {
#line 3616 "cplus.met"
#line 3618 "cplus.met"
        if ( (NQUICK_CALL(_Tak(statement)(error_free), 140, cplus))== (PPTREE) -1 ) {
#line 3618 "cplus.met"
            MulFreeTree(1,retValue);
            PROG_EXIT(parse_entry_exit,"parse_entry")
#line 3618 "cplus.met"
        }
#line 3618 "cplus.met"
    }
#line 3618 "cplus.met"
#line 3618 "cplus.met"
#line 3618 "cplus.met"

#line 3619 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 3619 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 3619 "cplus.met"
return((PPTREE) 0);
#line 3619 "cplus.met"

#line 3619 "cplus.met"
parse_entry_exit :
#line 3619 "cplus.met"

#line 3619 "cplus.met"
    _Debug = TRACE_RULE("parse_entry",TRACE_EXIT,(PPTREE)0);
#line 3619 "cplus.met"
    _funcLevel--;
#line 3619 "cplus.met"
    return((PPTREE) -1) ;
#line 3619 "cplus.met"

#line 3619 "cplus.met"
parse_entry_ret :
#line 3619 "cplus.met"
    
#line 3619 "cplus.met"
    _Debug = TRACE_RULE("parse_entry",TRACE_RETURN,_retValue);
#line 3619 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 3619 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 3619 "cplus.met"
    return _retValue ;
#line 3619 "cplus.met"
}
#line 3619 "cplus.met"

#line 3619 "cplus.met"
#line 2724 "cplus.met"
PPTREE cplus::pm_expression ( int error_free)
#line 2724 "cplus.met"
{
#line 2724 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 2724 "cplus.met"
    int _value,_nbPre = 0 ;
#line 2724 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 2724 "cplus.met"
    int _Debug = TRACE_RULE("pm_expression",TRACE_ENTER,(PPTREE)0);
#line 2724 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 2724 "cplus.met"
#line 2724 "cplus.met"
    PPTREE expTree = (PPTREE) 0;
#line 2724 "cplus.met"
#line 2726 "cplus.met"
    if ( (expTree=NQUICK_CALL(_Tak(cast_expression)(error_free), 22, cplus))== (PPTREE) -1 ) {
#line 2726 "cplus.met"
        MulFreeTree(1,expTree);
        PROG_EXIT(pm_expression_exit,"pm_expression")
#line 2726 "cplus.met"
    }
#line 2726 "cplus.met"
#line 2727 "cplus.met"
    while (((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN( POINETOI,".*")) || 
#line 2727 "cplus.met"
          ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN( TIRESUPEETOI,"->*"))) { 
#line 2727 "cplus.met"
#line 2728 "cplus.met"
        (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 2728 "cplus.met"
        switch( lexEl.Value) {
#line 2728 "cplus.met"
#line 2729 "cplus.met"
            case POINETOI : 
#line 2729 "cplus.met"
                tokenAhead = 0 ;
#line 2729 "cplus.met"
                CommTerm();
#line 2729 "cplus.met"
#line 2729 "cplus.met"
                {
#line 2729 "cplus.met"
                    PPTREE _ptTree0=0,_ptRes0=0;
#line 2729 "cplus.met"
                    _ptRes0= MakeTree(DOT_MEMB, 2);
#line 2729 "cplus.met"
                    ReplaceTree(_ptRes0, 1, expTree );
#line 2729 "cplus.met"
                    if ( (_ptTree0=NQUICK_CALL(_Tak(cast_expression)(error_free), 22, cplus))== (PPTREE) -1 ) {
#line 2729 "cplus.met"
                        MulFreeTree(3,_ptRes0,_ptTree0,expTree);
                        PROG_EXIT(pm_expression_exit,"pm_expression")
#line 2729 "cplus.met"
                    }
#line 2729 "cplus.met"
                    ReplaceTree(_ptRes0, 2, _ptTree0);
#line 2729 "cplus.met"
                    expTree=_ptRes0;
#line 2729 "cplus.met"
                }
#line 2729 "cplus.met"
                break;
#line 2729 "cplus.met"
#line 2730 "cplus.met"
            case TIRESUPEETOI : 
#line 2730 "cplus.met"
                tokenAhead = 0 ;
#line 2730 "cplus.met"
                CommTerm();
#line 2730 "cplus.met"
#line 2730 "cplus.met"
                {
#line 2730 "cplus.met"
                    PPTREE _ptTree0=0,_ptRes0=0;
#line 2730 "cplus.met"
                    _ptRes0= MakeTree(ARROW_MEMB, 2);
#line 2730 "cplus.met"
                    ReplaceTree(_ptRes0, 1, expTree );
#line 2730 "cplus.met"
                    if ( (_ptTree0=NQUICK_CALL(_Tak(cast_expression)(error_free), 22, cplus))== (PPTREE) -1 ) {
#line 2730 "cplus.met"
                        MulFreeTree(3,_ptRes0,_ptTree0,expTree);
                        PROG_EXIT(pm_expression_exit,"pm_expression")
#line 2730 "cplus.met"
                    }
#line 2730 "cplus.met"
                    ReplaceTree(_ptRes0, 2, _ptTree0);
#line 2730 "cplus.met"
                    expTree=_ptRes0;
#line 2730 "cplus.met"
                }
#line 2730 "cplus.met"
                break;
#line 2730 "cplus.met"
            default :
#line 2730 "cplus.met"
                MulFreeTree(1,expTree);
                CASE_EXIT(pm_expression_exit,"either .* or ->*")
#line 2730 "cplus.met"
                break;
#line 2730 "cplus.met"
        }
#line 2730 "cplus.met"
    } 
#line 2730 "cplus.met"
#line 2732 "cplus.met"
    {
#line 2732 "cplus.met"
        _retValue = expTree ;
#line 2732 "cplus.met"
        goto pm_expression_ret;
#line 2732 "cplus.met"
        
#line 2732 "cplus.met"
    }
#line 2732 "cplus.met"
#line 2732 "cplus.met"
#line 2732 "cplus.met"

#line 2733 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2733 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 2733 "cplus.met"
return((PPTREE) 0);
#line 2733 "cplus.met"

#line 2733 "cplus.met"
pm_expression_exit :
#line 2733 "cplus.met"

#line 2733 "cplus.met"
    _Debug = TRACE_RULE("pm_expression",TRACE_EXIT,(PPTREE)0);
#line 2733 "cplus.met"
    _funcLevel--;
#line 2733 "cplus.met"
    return((PPTREE) -1) ;
#line 2733 "cplus.met"

#line 2733 "cplus.met"
pm_expression_ret :
#line 2733 "cplus.met"
    
#line 2733 "cplus.met"
    _Debug = TRACE_RULE("pm_expression",TRACE_RETURN,_retValue);
#line 2733 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2733 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 2733 "cplus.met"
    return _retValue ;
#line 2733 "cplus.met"
}
#line 2733 "cplus.met"

#line 2733 "cplus.met"
#line 2902 "cplus.met"
PPTREE cplus::postfix_expression ( int error_free)
#line 2902 "cplus.met"
{
#line 2902 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 2902 "cplus.met"
    int _value,_nbPre = 0 ;
#line 2902 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 2902 "cplus.met"
    int _Debug = TRACE_RULE("postfix_expression",TRACE_ENTER,(PPTREE)0);
#line 2902 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 2902 "cplus.met"
#line 2902 "cplus.met"
    PPTREE expTree = (PPTREE) 0,expList = (PPTREE) 0,expArray = (PPTREE) 0;
#line 2902 "cplus.met"
#line 2904 "cplus.met"
    if (! (NPUSH_CALL_AFF_VERIF(expTree = ,_Tak(primary_expression), 113, cplus))){
#line 2904 "cplus.met"
#line 2905 "cplus.met"
#line 2906 "cplus.met"
        if ( (expTree=NQUICK_CALL(_Tak(simple_type_name)(error_free), 133, cplus))== (PPTREE) -1 ) {
#line 2906 "cplus.met"
            MulFreeTree(3,expArray,expList,expTree);
            PROG_EXIT(postfix_expression_exit,"postfix_expression")
#line 2906 "cplus.met"
        }
#line 2906 "cplus.met"
#line 2907 "cplus.met"
        if (! ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN( POUV,"("))){
#line 2907 "cplus.met"
#line 2908 "cplus.met"
            
#line 2908 "cplus.met"
            MulFreeTree(3,expArray,expList,expTree);
            LEX_EXIT ("",0);
#line 2908 "cplus.met"
            goto postfix_expression_exit;
#line 2908 "cplus.met"
#line 2908 "cplus.met"
        }
#line 2908 "cplus.met"
#line 2908 "cplus.met"
#line 2908 "cplus.met"
    }
#line 2908 "cplus.met"
#line 2910 "cplus.met"
    while ((((((((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN( POUV,"(")) || 
#line 2910 "cplus.met"
               ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN( COUV,"["))) || 
#line 2910 "cplus.met"
              ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN( POINT,"POINT"))) || 
#line 2910 "cplus.met"
             ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN( TIRESUPE,"->"))) || 
#line 2910 "cplus.met"
            ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN( PLUSPLUS,"++"))) || 
#line 2910 "cplus.met"
           ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN( TIRETIRE,"--"))) || 
#line 2910 "cplus.met"
          ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN( AOUV,"{"))) { 
#line 2910 "cplus.met"
#line 2911 "cplus.met"
        (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 2911 "cplus.met"
        switch( lexEl.Value) {
#line 2911 "cplus.met"
#line 2914 "cplus.met"
            case POUV : 
#line 2914 "cplus.met"
                tokenAhead = 0 ;
#line 2914 "cplus.met"
                CommTerm();
#line 2914 "cplus.met"
#line 2913 "cplus.met"
#line 2914 "cplus.met"
                if (NPUSH_CALL_AFF_VERIF(expList = ,_Tak(expression), 63, cplus)){
#line 2914 "cplus.met"
#line 2915 "cplus.met"
                    {
#line 2915 "cplus.met"
                        PPTREE _ptRes0=0;
#line 2915 "cplus.met"
                        _ptRes0= MakeTree(EXP_LIST, 2);
#line 2915 "cplus.met"
                        ReplaceTree(_ptRes0, 1, expTree );
#line 2915 "cplus.met"
                        ReplaceTree(_ptRes0, 2, expList );
#line 2915 "cplus.met"
                        expTree=_ptRes0;
#line 2915 "cplus.met"
                    }
#line 2915 "cplus.met"
                } else {
#line 2915 "cplus.met"
#line 2917 "cplus.met"
                    {
#line 2917 "cplus.met"
                        PPTREE _ptRes0=0;
#line 2917 "cplus.met"
                        _ptRes0= MakeTree(EXP_LIST, 2);
#line 2917 "cplus.met"
                        ReplaceTree(_ptRes0, 1, expTree );
#line 2917 "cplus.met"
                        expTree=_ptRes0;
#line 2917 "cplus.met"
                    }
#line 2917 "cplus.met"
                }
#line 2917 "cplus.met"
#line 2918 "cplus.met"
                (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 2918 "cplus.met"
                if (  !SEE_TOKEN( PFER,")") || !(CommTerm(),1)) {
#line 2918 "cplus.met"
                    MulFreeTree(3,expArray,expList,expTree);
                    TOKEN_EXIT(postfix_expression_exit,")")
#line 2918 "cplus.met"
                } else {
#line 2918 "cplus.met"
                    tokenAhead = 0 ;
#line 2918 "cplus.met"
                }
#line 2918 "cplus.met"
#line 2918 "cplus.met"
                break;
#line 2918 "cplus.met"
#line 2922 "cplus.met"
            case AOUV : 
#line 2922 "cplus.met"
                tokenAhead = 0 ;
#line 2922 "cplus.met"
                CommTerm();
#line 2922 "cplus.met"
#line 2921 "cplus.met"
#line 2922 "cplus.met"
                if (NPUSH_CALL_AFF_VERIF(expList = ,_Tak(expression), 63, cplus)){
#line 2922 "cplus.met"
#line 2923 "cplus.met"
                    {
#line 2923 "cplus.met"
                        PPTREE _ptRes0=0;
#line 2923 "cplus.met"
                        _ptRes0= MakeTree(EXP_BRA, 2);
#line 2923 "cplus.met"
                        ReplaceTree(_ptRes0, 1, expTree );
#line 2923 "cplus.met"
                        ReplaceTree(_ptRes0, 2, expList );
#line 2923 "cplus.met"
                        expTree=_ptRes0;
#line 2923 "cplus.met"
                    }
#line 2923 "cplus.met"
                } else {
#line 2923 "cplus.met"
#line 2925 "cplus.met"
                    {
#line 2925 "cplus.met"
                        PPTREE _ptRes0=0;
#line 2925 "cplus.met"
                        _ptRes0= MakeTree(EXP_BRA, 2);
#line 2925 "cplus.met"
                        ReplaceTree(_ptRes0, 1, expTree );
#line 2925 "cplus.met"
                        expTree=_ptRes0;
#line 2925 "cplus.met"
                    }
#line 2925 "cplus.met"
                }
#line 2925 "cplus.met"
#line 2926 "cplus.met"
                (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 2926 "cplus.met"
                if (  !SEE_TOKEN( AFER,"}") || !(CommTerm(),1)) {
#line 2926 "cplus.met"
                    MulFreeTree(3,expArray,expList,expTree);
                    TOKEN_EXIT(postfix_expression_exit,"}")
#line 2926 "cplus.met"
                } else {
#line 2926 "cplus.met"
                    tokenAhead = 0 ;
#line 2926 "cplus.met"
                }
#line 2926 "cplus.met"
#line 2926 "cplus.met"
                break;
#line 2926 "cplus.met"
#line 2930 "cplus.met"
            case COUV : 
#line 2930 "cplus.met"
                tokenAhead = 0 ;
#line 2930 "cplus.met"
                CommTerm();
#line 2930 "cplus.met"
#line 2929 "cplus.met"
#line 2930 "cplus.met"
                if ( (expArray=NQUICK_CALL(_Tak(array_expression_follow)(error_free), 13, cplus))== (PPTREE) -1 ) {
#line 2930 "cplus.met"
                    MulFreeTree(3,expArray,expList,expTree);
                    PROG_EXIT(postfix_expression_exit,"postfix_expression")
#line 2930 "cplus.met"
                }
#line 2930 "cplus.met"
#line 2931 "cplus.met"
                ReplaceTree(expArray ,1 ,expTree );
#line 2931 "cplus.met"
#line 2932 "cplus.met"
                expTree = expArray ;
#line 2932 "cplus.met"
#line 2932 "cplus.met"
                break;
#line 2932 "cplus.met"
#line 2934 "cplus.met"
            case META : 
#line 2934 "cplus.met"
            case POINT : 
#line 2934 "cplus.met"
                tokenAhead = 0 ;
#line 2934 "cplus.met"
                CommTerm();
#line 2934 "cplus.met"
#line 2934 "cplus.met"
                {
#line 2934 "cplus.met"
                    PPTREE _ptTree0=0,_ptRes0=0;
#line 2934 "cplus.met"
                    _ptRes0= MakeTree(REF, 2);
#line 2934 "cplus.met"
                    ReplaceTree(_ptRes0, 1, expTree );
#line 2934 "cplus.met"
                    if ( (_ptTree0=NQUICK_CALL(_Tak(primary_expression)(error_free), 113, cplus))== (PPTREE) -1 ) {
#line 2934 "cplus.met"
                        MulFreeTree(5,_ptRes0,_ptTree0,expArray,expList,expTree);
                        PROG_EXIT(postfix_expression_exit,"postfix_expression")
#line 2934 "cplus.met"
                    }
#line 2934 "cplus.met"
                    ReplaceTree(_ptRes0, 2, _ptTree0);
#line 2934 "cplus.met"
                    expTree=_ptRes0;
#line 2934 "cplus.met"
                }
#line 2934 "cplus.met"
                break;
#line 2934 "cplus.met"
#line 2935 "cplus.met"
            case TIRESUPE : 
#line 2935 "cplus.met"
                tokenAhead = 0 ;
#line 2935 "cplus.met"
                CommTerm();
#line 2935 "cplus.met"
#line 2935 "cplus.met"
                {
#line 2935 "cplus.met"
                    PPTREE _ptTree0=0,_ptRes0=0;
#line 2935 "cplus.met"
                    _ptRes0= MakeTree(ARROW, 2);
#line 2935 "cplus.met"
                    ReplaceTree(_ptRes0, 1, expTree );
#line 2935 "cplus.met"
                    if ( (_ptTree0=NQUICK_CALL(_Tak(primary_expression)(error_free), 113, cplus))== (PPTREE) -1 ) {
#line 2935 "cplus.met"
                        MulFreeTree(5,_ptRes0,_ptTree0,expArray,expList,expTree);
                        PROG_EXIT(postfix_expression_exit,"postfix_expression")
#line 2935 "cplus.met"
                    }
#line 2935 "cplus.met"
                    ReplaceTree(_ptRes0, 2, _ptTree0);
#line 2935 "cplus.met"
                    expTree=_ptRes0;
#line 2935 "cplus.met"
                }
#line 2935 "cplus.met"
                break;
#line 2935 "cplus.met"
#line 2936 "cplus.met"
            case PLUSPLUS : 
#line 2936 "cplus.met"
                tokenAhead = 0 ;
#line 2936 "cplus.met"
                CommTerm();
#line 2936 "cplus.met"
#line 2936 "cplus.met"
                {
#line 2936 "cplus.met"
                    PPTREE _ptRes0=0;
#line 2936 "cplus.met"
                    _ptRes0= MakeTree(AINCR, 1);
#line 2936 "cplus.met"
                    ReplaceTree(_ptRes0, 1, expTree );
#line 2936 "cplus.met"
                    expTree=_ptRes0;
#line 2936 "cplus.met"
                }
#line 2936 "cplus.met"
                break;
#line 2936 "cplus.met"
#line 2937 "cplus.met"
            case TIRETIRE : 
#line 2937 "cplus.met"
                tokenAhead = 0 ;
#line 2937 "cplus.met"
                CommTerm();
#line 2937 "cplus.met"
#line 2937 "cplus.met"
                {
#line 2937 "cplus.met"
                    PPTREE _ptRes0=0;
#line 2937 "cplus.met"
                    _ptRes0= MakeTree(ADECR, 1);
#line 2937 "cplus.met"
                    ReplaceTree(_ptRes0, 1, expTree );
#line 2937 "cplus.met"
                    expTree=_ptRes0;
#line 2937 "cplus.met"
                }
#line 2937 "cplus.met"
                break;
#line 2937 "cplus.met"
            default :
#line 2937 "cplus.met"
                MulFreeTree(3,expArray,expList,expTree);
                CASE_EXIT(postfix_expression_exit,"either ( or { or [ or POINT or -> or ++ or --")
#line 2937 "cplus.met"
                break;
#line 2937 "cplus.met"
        }
#line 2937 "cplus.met"
    } 
#line 2937 "cplus.met"
#line 2939 "cplus.met"
    {
#line 2939 "cplus.met"
        _retValue = expTree ;
#line 2939 "cplus.met"
        goto postfix_expression_ret;
#line 2939 "cplus.met"
        
#line 2939 "cplus.met"
    }
#line 2939 "cplus.met"
#line 2939 "cplus.met"
#line 2939 "cplus.met"

#line 2940 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2940 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 2940 "cplus.met"
return((PPTREE) 0);
#line 2940 "cplus.met"

#line 2940 "cplus.met"
postfix_expression_exit :
#line 2940 "cplus.met"

#line 2940 "cplus.met"
    _Debug = TRACE_RULE("postfix_expression",TRACE_EXIT,(PPTREE)0);
#line 2940 "cplus.met"
    _funcLevel--;
#line 2940 "cplus.met"
    return((PPTREE) -1) ;
#line 2940 "cplus.met"

#line 2940 "cplus.met"
postfix_expression_ret :
#line 2940 "cplus.met"
    
#line 2940 "cplus.met"
    _Debug = TRACE_RULE("postfix_expression",TRACE_RETURN,_retValue);
#line 2940 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2940 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 2940 "cplus.met"
    return _retValue ;
#line 2940 "cplus.met"
}
#line 2940 "cplus.met"

#line 2940 "cplus.met"
#line 2955 "cplus.met"
PPTREE cplus::primary_expression ( int error_free)
#line 2955 "cplus.met"
{
#line 2955 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 2955 "cplus.met"
    int _value,_nbPre = 0 ;
#line 2955 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 2955 "cplus.met"
    int _Debug = TRACE_RULE("primary_expression",TRACE_ENTER,(PPTREE)0);
#line 2955 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 2955 "cplus.met"
#line 2955 "cplus.met"
    PPTREE result = (PPTREE) 0,expTree = (PPTREE) 0,list = (PPTREE) 0;
#line 2955 "cplus.met"
#line 2957 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 2957 "cplus.met"
    switch( lexEl.Value) {
#line 2957 "cplus.met"
#line 2960 "cplus.met"
        case POUV : 
#line 2960 "cplus.met"
            tokenAhead = 0 ;
#line 2960 "cplus.met"
            CommTerm();
#line 2960 "cplus.met"
#line 2959 "cplus.met"
#line 2960 "cplus.met"
            if ( (expTree=NQUICK_CALL(_Tak(expression)(error_free), 63, cplus))== (PPTREE) -1 ) {
#line 2960 "cplus.met"
                MulFreeTree(3,expTree,list,result);
                PROG_EXIT(primary_expression_exit,"primary_expression")
#line 2960 "cplus.met"
            }
#line 2960 "cplus.met"
#line 2961 "cplus.met"
            (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 2961 "cplus.met"
            if (  !SEE_TOKEN( PFER,")") || !(CommTerm(),1)) {
#line 2961 "cplus.met"
                MulFreeTree(3,expTree,list,result);
                TOKEN_EXIT(primary_expression_exit,")")
#line 2961 "cplus.met"
            } else {
#line 2961 "cplus.met"
                tokenAhead = 0 ;
#line 2961 "cplus.met"
            }
#line 2961 "cplus.met"
#line 2962 "cplus.met"
            {
#line 2962 "cplus.met"
                PPTREE _ptTree0=0;
#line 2962 "cplus.met"
                {
#line 2962 "cplus.met"
                    PPTREE _ptRes1=0;
#line 2962 "cplus.met"
                    _ptRes1= MakeTree(EXP, 1);
#line 2962 "cplus.met"
                    ReplaceTree(_ptRes1, 1, expTree );
#line 2962 "cplus.met"
                    _ptTree0=_ptRes1;
#line 2962 "cplus.met"
                }
#line 2962 "cplus.met"
                _retValue =_ptTree0;
#line 2962 "cplus.met"
                goto primary_expression_ret;
#line 2962 "cplus.met"
            }
#line 2962 "cplus.met"
#line 2962 "cplus.met"
            break;
#line 2962 "cplus.met"
#line 2964 "cplus.met"
        case OPERATOR : 
#line 2964 "cplus.met"
#line 2964 "cplus.met"
            {
#line 2964 "cplus.met"
                PPTREE _ptTree0=0;
#line 2964 "cplus.met"
                if ( (_ptTree0=NQUICK_CALL(_Tak(operator_function_name)(error_free), 105, cplus))== (PPTREE) -1 ) {
#line 2964 "cplus.met"
                    MulFreeTree(4,_ptTree0,expTree,list,result);
                    PROG_EXIT(primary_expression_exit,"primary_expression")
#line 2964 "cplus.met"
                }
#line 2964 "cplus.met"
                _retValue =_ptTree0;
#line 2964 "cplus.met"
                goto primary_expression_ret;
#line 2964 "cplus.met"
            }
#line 2964 "cplus.met"
            break;
#line 2964 "cplus.met"
#line 2965 "cplus.met"
        case TILD : 
#line 2965 "cplus.met"
#line 2965 "cplus.met"
            {
#line 2965 "cplus.met"
                PPTREE _ptTree0=0;
#line 2965 "cplus.met"
                if ( (_ptTree0=NQUICK_CALL(_Tak(qualified_name)(error_free), 117, cplus))== (PPTREE) -1 ) {
#line 2965 "cplus.met"
                    MulFreeTree(4,_ptTree0,expTree,list,result);
                    PROG_EXIT(primary_expression_exit,"primary_expression")
#line 2965 "cplus.met"
                }
#line 2965 "cplus.met"
                _retValue =_ptTree0;
#line 2965 "cplus.met"
                goto primary_expression_ret;
#line 2965 "cplus.met"
            }
#line 2965 "cplus.met"
            break;
#line 2965 "cplus.met"
#line 2966 "cplus.met"
        case META : 
#line 2966 "cplus.met"
#line 2967 "cplus.met"
#line 2968 "cplus.met"
            {
#line 2968 "cplus.met"
                PPTREE _ptTree0=0;
#line 2968 "cplus.met"
                {
#line 2968 "cplus.met"
                    PPTREE _ptTree1=0,_ptRes1=0;
#line 2968 "cplus.met"
                    _ptRes1= MakeTree(META, 1);
#line 2968 "cplus.met"
                    (tokenAhead == 7|| (LexMeta(),TRACE_LEX(1)));
#line 2968 "cplus.met"
                    if ( ! TERM_OR_META(META,"META") || !(BUILD_TERM_META(_ptTree1))) {
#line 2968 "cplus.met"
                        MulFreeTree(6,_ptRes1,_ptTree1,_ptTree0,expTree,list,result);
                        TOKEN_EXIT(primary_expression_exit,"META")
#line 2968 "cplus.met"
                    } else {
#line 2968 "cplus.met"
                        tokenAhead = 0 ;
#line 2968 "cplus.met"
                    }
#line 2968 "cplus.met"
                    ReplaceTree(_ptRes1, 1, _ptTree1);
#line 2968 "cplus.met"
                    _ptTree0=_ptRes1;
#line 2968 "cplus.met"
                }
#line 2968 "cplus.met"
                _retValue =_ptTree0;
#line 2968 "cplus.met"
                goto primary_expression_ret;
#line 2968 "cplus.met"
            }
#line 2968 "cplus.met"
#line 2968 "cplus.met"
            break;
#line 2968 "cplus.met"
#line 2970 "cplus.met"
        case IDENT : 
#line 2970 "cplus.met"
#line 2971 "cplus.met"
            if ((tokenAhead == 12|| (PushFunction(),TRACE_LEX(1)))&&TERM_OR_META(PUSH_FUNCTION,"PUSH_FUNCTION") && !(tokenAhead = 0) && ( BUILD_TERM_META(result))) {
#line 2971 "cplus.met"
#line 2972 "cplus.met"
#line 2973 "cplus.met"
                (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 2973 "cplus.met"
                if (  !SEE_TOKEN( POUV,"(") || !(CommTerm(),1)) {
#line 2973 "cplus.met"
                    MulFreeTree(3,expTree,list,result);
                    TOKEN_EXIT(primary_expression_exit,"(")
#line 2973 "cplus.met"
                } else {
#line 2973 "cplus.met"
                    tokenAhead = 0 ;
#line 2973 "cplus.met"
                }
#line 2973 "cplus.met"
#line 2974 "cplus.met"
                {
#line 2974 "cplus.met"
                    PPTREE _ptTree0=0;
#line 2974 "cplus.met"
                    {
#line 2974 "cplus.met"
                        PPTREE _ptTree1=0,_ptRes1=0;
#line 2974 "cplus.met"
                        _ptRes1= MakeTree(IDENT, 1);
#line 2974 "cplus.met"
                        (tokenAhead == 11|| (PushArgument(),TRACE_LEX(1)));
#line 2974 "cplus.met"
                        if ( ! TERM_OR_META(PUSH_ARGUMENT,"PUSH_ARGUMENT") || !(BUILD_TERM_META(_ptTree1))) {
#line 2974 "cplus.met"
                            MulFreeTree(6,_ptRes1,_ptTree1,_ptTree0,expTree,list,result);
                            TOKEN_EXIT(primary_expression_exit,"PUSH_ARGUMENT")
#line 2974 "cplus.met"
                        } else {
#line 2974 "cplus.met"
                            tokenAhead = 0 ;
#line 2974 "cplus.met"
                        }
#line 2974 "cplus.met"
                        ReplaceTree(_ptRes1, 1, _ptTree1);
#line 2974 "cplus.met"
                        _ptTree0=_ptRes1;
#line 2974 "cplus.met"
                    }
#line 2974 "cplus.met"
                    list =AddList(list , _ptTree0);
#line 2974 "cplus.met"
                }
#line 2974 "cplus.met"
#line 2975 "cplus.met"
                (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 2975 "cplus.met"
                if (  !SEE_TOKEN( VIRG,",") || !(CommTerm(),1)) {
#line 2975 "cplus.met"
                    MulFreeTree(3,expTree,list,result);
                    TOKEN_EXIT(primary_expression_exit,",")
#line 2975 "cplus.met"
                } else {
#line 2975 "cplus.met"
                    tokenAhead = 0 ;
#line 2975 "cplus.met"
                }
#line 2975 "cplus.met"
#line 2976 "cplus.met"
                {
#line 2976 "cplus.met"
                    PPTREE _ptTree0=0;
#line 2976 "cplus.met"
                    if ( (_ptTree0=NQUICK_CALL(_Tak(expression)(error_free), 63, cplus))== (PPTREE) -1 ) {
#line 2976 "cplus.met"
                        MulFreeTree(4,_ptTree0,expTree,list,result);
                        PROG_EXIT(primary_expression_exit,"primary_expression")
#line 2976 "cplus.met"
                    }
#line 2976 "cplus.met"
                    list =AddList(list , _ptTree0);
#line 2976 "cplus.met"
                }
#line 2976 "cplus.met"
#line 2977 "cplus.met"
                {
#line 2977 "cplus.met"
                    PPTREE _ptRes0=0;
#line 2977 "cplus.met"
                    _ptRes0= MakeTree(EXP_SEQ, 1);
#line 2977 "cplus.met"
                    ReplaceTree(_ptRes0, 1, list );
#line 2977 "cplus.met"
                    expTree=_ptRes0;
#line 2977 "cplus.met"
                }
#line 2977 "cplus.met"
#line 2978 "cplus.met"
                (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 2978 "cplus.met"
                if (  !SEE_TOKEN( PFER,")") || !(CommTerm(),1)) {
#line 2978 "cplus.met"
                    MulFreeTree(3,expTree,list,result);
                    TOKEN_EXIT(primary_expression_exit,")")
#line 2978 "cplus.met"
                } else {
#line 2978 "cplus.met"
                    tokenAhead = 0 ;
#line 2978 "cplus.met"
                }
#line 2978 "cplus.met"
#line 2979 "cplus.met"
                {
#line 2979 "cplus.met"
                    PPTREE _ptTree0=0;
#line 2979 "cplus.met"
                    {
#line 2979 "cplus.met"
                        PPTREE _ptTree1=0,_ptRes1=0;
#line 2979 "cplus.met"
                        _ptRes1= MakeTree(EXP_LIST, 2);
#line 2979 "cplus.met"
                        {
#line 2979 "cplus.met"
                            PPTREE _ptRes2=0;
#line 2979 "cplus.met"
                            _ptRes2= MakeTree(IDENT, 1);
#line 2979 "cplus.met"
                            ReplaceTree(_ptRes2, 1, result );
#line 2979 "cplus.met"
                            _ptTree1=_ptRes2;
#line 2979 "cplus.met"
                        }
#line 2979 "cplus.met"
                        ReplaceTree(_ptRes1, 1, _ptTree1);
#line 2979 "cplus.met"
                        ReplaceTree(_ptRes1, 2, expTree );
#line 2979 "cplus.met"
                        _ptTree0=_ptRes1;
#line 2979 "cplus.met"
                    }
#line 2979 "cplus.met"
                    _retValue =_ptTree0;
#line 2979 "cplus.met"
                    goto primary_expression_ret;
#line 2979 "cplus.met"
                }
#line 2979 "cplus.met"
#line 2979 "cplus.met"
#line 2979 "cplus.met"
            } else {
#line 2979 "cplus.met"
#line 2982 "cplus.met"
                {
#line 2982 "cplus.met"
                    PPTREE _ptTree0=0;
#line 2982 "cplus.met"
                    if ( (_ptTree0=NQUICK_CALL(_Tak(qualified_name)(error_free), 117, cplus))== (PPTREE) -1 ) {
#line 2982 "cplus.met"
                        MulFreeTree(4,_ptTree0,expTree,list,result);
                        PROG_EXIT(primary_expression_exit,"primary_expression")
#line 2982 "cplus.met"
                    }
#line 2982 "cplus.met"
                    _retValue =_ptTree0;
#line 2982 "cplus.met"
                    goto primary_expression_ret;
#line 2982 "cplus.met"
                }
#line 2982 "cplus.met"
            }
#line 2982 "cplus.met"
            break;
#line 2982 "cplus.met"
#line 2983 "cplus.met"
        case STRING : 
#line 2983 "cplus.met"
#line 2983 "cplus.met"
            {
#line 2983 "cplus.met"
                PPTREE _ptTree0=0;
#line 2983 "cplus.met"
                if ( (_ptTree0=NQUICK_CALL(_Tak(string_list)(error_free), 142, cplus))== (PPTREE) -1 ) {
#line 2983 "cplus.met"
                    MulFreeTree(4,_ptTree0,expTree,list,result);
                    PROG_EXIT(primary_expression_exit,"primary_expression")
#line 2983 "cplus.met"
                }
#line 2983 "cplus.met"
                _retValue =_ptTree0;
#line 2983 "cplus.met"
                goto primary_expression_ret;
#line 2983 "cplus.met"
            }
#line 2983 "cplus.met"
            break;
#line 2983 "cplus.met"
#line 2984 "cplus.met"
        case VA_ARG : 
#line 2984 "cplus.met"
            tokenAhead = 0 ;
#line 2984 "cplus.met"
            CommTerm();
#line 2984 "cplus.met"
#line 2985 "cplus.met"
#line 2986 "cplus.met"
            (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 2986 "cplus.met"
            if (  !SEE_TOKEN( POUV,"(") || !(CommTerm(),1)) {
#line 2986 "cplus.met"
                MulFreeTree(3,expTree,list,result);
                TOKEN_EXIT(primary_expression_exit,"(")
#line 2986 "cplus.met"
            } else {
#line 2986 "cplus.met"
                tokenAhead = 0 ;
#line 2986 "cplus.met"
            }
#line 2986 "cplus.met"
#line 2987 "cplus.met"
            {
#line 2987 "cplus.met"
                PPTREE _ptTree0=0,_ptRes0=0;
#line 2987 "cplus.met"
                _ptRes0= MakeTree(VA_ARG, 2);
#line 2987 "cplus.met"
                if ( (_ptTree0=NQUICK_CALL(_Tak(assignment_expression)(error_free), 17, cplus))== (PPTREE) -1 ) {
#line 2987 "cplus.met"
                    MulFreeTree(5,_ptRes0,_ptTree0,expTree,list,result);
                    PROG_EXIT(primary_expression_exit,"primary_expression")
#line 2987 "cplus.met"
                }
#line 2987 "cplus.met"
                ReplaceTree(_ptRes0, 1, _ptTree0);
#line 2987 "cplus.met"
                expTree=_ptRes0;
#line 2987 "cplus.met"
            }
#line 2987 "cplus.met"
#line 2988 "cplus.met"
            (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 2988 "cplus.met"
            if (  !SEE_TOKEN( VIRG,",") || !(CommTerm(),1)) {
#line 2988 "cplus.met"
                MulFreeTree(3,expTree,list,result);
                TOKEN_EXIT(primary_expression_exit,",")
#line 2988 "cplus.met"
            } else {
#line 2988 "cplus.met"
                tokenAhead = 0 ;
#line 2988 "cplus.met"
            }
#line 2988 "cplus.met"
#line 2989 "cplus.met"
            {
#line 2989 "cplus.met"
                PPTREE _ptTree0=0;
#line 2989 "cplus.met"
                if ( (_ptTree0=NQUICK_CALL(_Tak(type_name)(error_free), 148, cplus))== (PPTREE) -1 ) {
#line 2989 "cplus.met"
                    MulFreeTree(4,_ptTree0,expTree,list,result);
                    PROG_EXIT(primary_expression_exit,"primary_expression")
#line 2989 "cplus.met"
                }
#line 2989 "cplus.met"
                ReplaceTree(expTree , 2 , _ptTree0);
#line 2989 "cplus.met"
            }
#line 2989 "cplus.met"
#line 2990 "cplus.met"
            (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 2990 "cplus.met"
            if (  !SEE_TOKEN( PFER,")") || !(CommTerm(),1)) {
#line 2990 "cplus.met"
                MulFreeTree(3,expTree,list,result);
                TOKEN_EXIT(primary_expression_exit,")")
#line 2990 "cplus.met"
            } else {
#line 2990 "cplus.met"
                tokenAhead = 0 ;
#line 2990 "cplus.met"
            }
#line 2990 "cplus.met"
#line 2991 "cplus.met"
            {
#line 2991 "cplus.met"
                _retValue = expTree ;
#line 2991 "cplus.met"
                goto primary_expression_ret;
#line 2991 "cplus.met"
                
#line 2991 "cplus.met"
            }
#line 2991 "cplus.met"
#line 2991 "cplus.met"
            break;
#line 2991 "cplus.met"
#line 2993 "cplus.met"
        default : 
#line 2993 "cplus.met"
#line 2993 "cplus.met"
            {
#line 2993 "cplus.met"
                PPTREE _ptTree0=0;
#line 2993 "cplus.met"
                if ( (_ptTree0=NQUICK_CALL(_Tak(constan)(error_free), 32, cplus))== (PPTREE) -1 ) {
#line 2993 "cplus.met"
                    MulFreeTree(4,_ptTree0,expTree,list,result);
                    PROG_EXIT(primary_expression_exit,"primary_expression")
#line 2993 "cplus.met"
                }
#line 2993 "cplus.met"
                _retValue =_ptTree0;
#line 2993 "cplus.met"
                goto primary_expression_ret;
#line 2993 "cplus.met"
            }
#line 2993 "cplus.met"
            break;
#line 2993 "cplus.met"
    }
#line 2993 "cplus.met"
#line 2993 "cplus.met"
#line 2994 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2994 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 2994 "cplus.met"
return((PPTREE) 0);
#line 2994 "cplus.met"

#line 2994 "cplus.met"
primary_expression_exit :
#line 2994 "cplus.met"

#line 2994 "cplus.met"
    _Debug = TRACE_RULE("primary_expression",TRACE_EXIT,(PPTREE)0);
#line 2994 "cplus.met"
    _funcLevel--;
#line 2994 "cplus.met"
    return((PPTREE) -1) ;
#line 2994 "cplus.met"

#line 2994 "cplus.met"
primary_expression_ret :
#line 2994 "cplus.met"
    
#line 2994 "cplus.met"
    _Debug = TRACE_RULE("primary_expression",TRACE_RETURN,_retValue);
#line 2994 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2994 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 2994 "cplus.met"
    return _retValue ;
#line 2994 "cplus.met"
}
#line 2994 "cplus.met"

#line 2994 "cplus.met"
#line 771 "cplus.met"
PPTREE cplus::program ( int error_free)
#line 771 "cplus.met"
{
#line 771 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 771 "cplus.met"
    int _value,_nbPre = 0 ;
#line 771 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 771 "cplus.met"
    int _Debug = TRACE_RULE("program",TRACE_ENTER,(PPTREE)0);
#line 771 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 771 "cplus.met"
#line 771 "cplus.met"
    PPTREE _addlist1 = (PPTREE) 0;
#line 771 "cplus.met"
#line 771 "cplus.met"
    PPTREE list = (PPTREE) 0,valTree = (PPTREE) 0;
#line 771 "cplus.met"
#line 773 "cplus.met"
     debut : 
#line 773 "cplus.met"
#line 773 "cplus.met"
    _addlist1 = list ;
#line 773 "cplus.met"
#line 774 "cplus.met"
    while (NPUSH_CALL_AFF_VERIF(valTree = ,_Tak(ext_all), 65, cplus)) { 
#line 774 "cplus.met"
#line 775 "cplus.met"
#line 775 "cplus.met"
        _addlist1 =AddList(_addlist1 ,valTree );
#line 775 "cplus.met"
#line 775 "cplus.met"
        if (list){
#line 775 "cplus.met"
#line 775 "cplus.met"
            _addlist1 = SonTree (_addlist1 ,2 );
#line 775 "cplus.met"
        } else {
#line 775 "cplus.met"
#line 775 "cplus.met"
            list = _addlist1 ;
#line 775 "cplus.met"
        }
#line 775 "cplus.met"
    } 
#line 775 "cplus.met"
#line 776 "cplus.met"
    {
#line 776 "cplus.met"
        PPTREE _ptTree0=0;
#line 776 "cplus.met"
        if ( (_ptTree0=NQUICK_CALL(_Tak(none_statement)(error_free), 104, cplus))== (PPTREE) -1 ) {
#line 776 "cplus.met"
            MulFreeTree(4,_ptTree0,_addlist1,list,valTree);
            PROG_EXIT(program_exit,"program")
#line 776 "cplus.met"
        }
#line 776 "cplus.met"
        list =AddList(list , _ptTree0);
#line 776 "cplus.met"
    }
#line 776 "cplus.met"
#line 777 "cplus.met"
    if (NPUSH_CALL_AFF_VERIF(NOTHING,_Tak(comment_eater), 27, cplus)){
#line 777 "cplus.met"
#line 777 "cplus.met"
    }
#line 777 "cplus.met"
#line 779 "cplus.met"
    if ((tokenAhead && tokenAhead != -1)|| (c != EOF)){
#line 779 "cplus.met"
#line 780 "cplus.met"
#line 782 "cplus.met"
        dumperror ();
#line 782 "cplus.met"
#line 784 "cplus.met"
        (tokenAhead == 5|| (LexEndLine(),TRACE_LEX(1)));
#line 784 "cplus.met"
        if ( ! TERM_OR_META(END_LINE,"END_LINE") || !(CommTerm(),1)) {
#line 784 "cplus.met"
            MulFreeTree(3,_addlist1,list,valTree);
            TOKEN_EXIT(program_exit,"END_LINE")
#line 784 "cplus.met"
        } else {
#line 784 "cplus.met"
            tokenAhead = 0 ;
#line 784 "cplus.met"
        }
#line 784 "cplus.met"
#line 785 "cplus.met"
         hasGotError = 1 ;
#line 785 "cplus.met"
#line 786 "cplus.met"
         goto debut ;
#line 786 "cplus.met"
#line 786 "cplus.met"
#line 786 "cplus.met"
    }
#line 786 "cplus.met"
#line 788 "cplus.met"
    if ( hasGotError && ! _inhibit_exit_on_error  ){
#line 788 "cplus.met"
#line 789 "cplus.met"
         exit (-1);
#line 789 "cplus.met"
    }
#line 789 "cplus.met"
#line 790 "cplus.met"
    {
#line 790 "cplus.met"
        PPTREE _ptTree0=0;
#line 790 "cplus.met"
        {
#line 790 "cplus.met"
            PPTREE _ptRes1=0;
#line 790 "cplus.met"
            _ptRes1= MakeTree(LANGUAGE, 1);
#line 790 "cplus.met"
            ReplaceTree(_ptRes1, 1, list );
#line 790 "cplus.met"
            _ptTree0=_ptRes1;
#line 790 "cplus.met"
        }
#line 790 "cplus.met"
        _retValue =_ptTree0;
#line 790 "cplus.met"
        goto program_ret;
#line 790 "cplus.met"
    }
#line 790 "cplus.met"
#line 790 "cplus.met"
#line 790 "cplus.met"

#line 791 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 791 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 791 "cplus.met"
return((PPTREE) 0);
#line 791 "cplus.met"

#line 791 "cplus.met"
program_exit :
#line 791 "cplus.met"

#line 791 "cplus.met"
    _Debug = TRACE_RULE("program",TRACE_EXIT,(PPTREE)0);
#line 791 "cplus.met"
    _funcLevel--;
#line 791 "cplus.met"
    return((PPTREE) -1) ;
#line 791 "cplus.met"

#line 791 "cplus.met"
program_ret :
#line 791 "cplus.met"
    
#line 791 "cplus.met"
    _Debug = TRACE_RULE("program",TRACE_RETURN,_retValue);
#line 791 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 791 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 791 "cplus.met"
    return _retValue ;
#line 791 "cplus.met"
}
#line 791 "cplus.met"

#line 791 "cplus.met"
#line 1854 "cplus.met"
PPTREE cplus::protect_declare ( int error_free)
#line 1854 "cplus.met"
{
#line 1854 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 1854 "cplus.met"
    int _value,_nbPre = 0 ;
#line 1854 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 1854 "cplus.met"
    int _Debug = TRACE_RULE("protect_declare",TRACE_ENTER,(PPTREE)0);
#line 1854 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 1854 "cplus.met"
#line 1854 "cplus.met"
    PPTREE _addlist1 = (PPTREE) 0;
#line 1854 "cplus.met"
#line 1854 "cplus.met"
    PPTREE retTree = (PPTREE) 0,inter = (PPTREE) 0,list = (PPTREE) 0;
#line 1854 "cplus.met"
#line 1856 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 1856 "cplus.met"
    switch( lexEl.Value) {
#line 1856 "cplus.met"
#line 1857 "cplus.met"
        case PUBLIC : 
#line 1857 "cplus.met"
            tokenAhead = 0 ;
#line 1857 "cplus.met"
            CommTerm();
#line 1857 "cplus.met"
#line 1857 "cplus.met"
            {
#line 1857 "cplus.met"
                PPTREE _ptRes0=0;
#line 1857 "cplus.met"
                _ptRes0= MakeTree(PROTECT_MEMB, 2);
#line 1857 "cplus.met"
                ReplaceTree(_ptRes0, 1, MakeString ("public"));
#line 1857 "cplus.met"
                retTree=_ptRes0;
#line 1857 "cplus.met"
            }
#line 1857 "cplus.met"
            break;
#line 1857 "cplus.met"
#line 1858 "cplus.met"
        case PROTECTED : 
#line 1858 "cplus.met"
            tokenAhead = 0 ;
#line 1858 "cplus.met"
            CommTerm();
#line 1858 "cplus.met"
#line 1858 "cplus.met"
            {
#line 1858 "cplus.met"
                PPTREE _ptRes0=0;
#line 1858 "cplus.met"
                _ptRes0= MakeTree(PROTECT_MEMB, 2);
#line 1858 "cplus.met"
                ReplaceTree(_ptRes0, 1, MakeString ("protected"));
#line 1858 "cplus.met"
                retTree=_ptRes0;
#line 1858 "cplus.met"
            }
#line 1858 "cplus.met"
            break;
#line 1858 "cplus.met"
#line 1859 "cplus.met"
        case PRIVATE : 
#line 1859 "cplus.met"
            tokenAhead = 0 ;
#line 1859 "cplus.met"
            CommTerm();
#line 1859 "cplus.met"
#line 1859 "cplus.met"
            {
#line 1859 "cplus.met"
                PPTREE _ptRes0=0;
#line 1859 "cplus.met"
                _ptRes0= MakeTree(PROTECT_MEMB, 2);
#line 1859 "cplus.met"
                ReplaceTree(_ptRes0, 1, MakeString ("private"));
#line 1859 "cplus.met"
                retTree=_ptRes0;
#line 1859 "cplus.met"
            }
#line 1859 "cplus.met"
            break;
#line 1859 "cplus.met"
        default :
#line 1859 "cplus.met"
            MulFreeTree(4,_addlist1,inter,list,retTree);
            CASE_EXIT(protect_declare_exit,"either public or protected or private")
#line 1859 "cplus.met"
            break;
#line 1859 "cplus.met"
    }
#line 1859 "cplus.met"
#line 1861 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 1861 "cplus.met"
    if (  !SEE_TOKEN( DPOI,":") || !(CommTerm(),1)) {
#line 1861 "cplus.met"
        MulFreeTree(4,_addlist1,inter,list,retTree);
        TOKEN_EXIT(protect_declare_exit,":")
#line 1861 "cplus.met"
    } else {
#line 1861 "cplus.met"
        tokenAhead = 0 ;
#line 1861 "cplus.met"
    }
#line 1861 "cplus.met"
#line 1861 "cplus.met"
    _addlist1 = list ;
#line 1861 "cplus.met"
#line 1862 "cplus.met"
    while (NPUSH_CALL_AFF_VERIF(inter = ,_Tak(inside_declaration), 84, cplus)) { 
#line 1862 "cplus.met"
#line 1863 "cplus.met"
#line 1863 "cplus.met"
        _addlist1 =AddList(_addlist1 ,inter );
#line 1863 "cplus.met"
#line 1863 "cplus.met"
        if (list){
#line 1863 "cplus.met"
#line 1863 "cplus.met"
            _addlist1 = SonTree (_addlist1 ,2 );
#line 1863 "cplus.met"
        } else {
#line 1863 "cplus.met"
#line 1863 "cplus.met"
            list = _addlist1 ;
#line 1863 "cplus.met"
        }
#line 1863 "cplus.met"
    } 
#line 1863 "cplus.met"
#line 1864 "cplus.met"
    {
#line 1864 "cplus.met"
        PPTREE _ptTree0=0;
#line 1864 "cplus.met"
        _ptTree0=ReplaceTree(retTree ,2 ,list );
#line 1864 "cplus.met"
        _retValue =_ptTree0;
#line 1864 "cplus.met"
        goto protect_declare_ret;
#line 1864 "cplus.met"
    }
#line 1864 "cplus.met"
#line 1864 "cplus.met"
#line 1864 "cplus.met"

#line 1865 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1865 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 1865 "cplus.met"
return((PPTREE) 0);
#line 1865 "cplus.met"

#line 1865 "cplus.met"
protect_declare_exit :
#line 1865 "cplus.met"

#line 1865 "cplus.met"
    _Debug = TRACE_RULE("protect_declare",TRACE_EXIT,(PPTREE)0);
#line 1865 "cplus.met"
    _funcLevel--;
#line 1865 "cplus.met"
    return((PPTREE) -1) ;
#line 1865 "cplus.met"

#line 1865 "cplus.met"
protect_declare_ret :
#line 1865 "cplus.met"
    
#line 1865 "cplus.met"
    _Debug = TRACE_RULE("protect_declare",TRACE_RETURN,_retValue);
#line 1865 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1865 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 1865 "cplus.met"
    return _retValue ;
#line 1865 "cplus.met"
}
#line 1865 "cplus.met"

#line 1865 "cplus.met"
#line 2181 "cplus.met"
PPTREE cplus::ptr_operator ( int error_free)
#line 2181 "cplus.met"
{
#line 2181 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 2181 "cplus.met"
    int _value,_nbPre = 0 ;
#line 2181 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 2181 "cplus.met"
    int _Debug = TRACE_RULE("ptr_operator",TRACE_ENTER,(PPTREE)0);
#line 2181 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 2181 "cplus.met"
#line 2181 "cplus.met"
    PPTREE retTree = (PPTREE) 0,valTree = (PPTREE) 0,retour = (PPTREE) 0;
#line 2181 "cplus.met"
#line 2183 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 2183 "cplus.met"
    switch( lexEl.Value) {
#line 2183 "cplus.met"
#line 2186 "cplus.met"
        case ETOI : 
#line 2186 "cplus.met"
            tokenAhead = 0 ;
#line 2186 "cplus.met"
            CommTerm();
#line 2186 "cplus.met"
#line 2185 "cplus.met"
#line 2186 "cplus.met"
            {
#line 2186 "cplus.met"
                PPTREE _ptRes0=0;
#line 2186 "cplus.met"
                _ptRes0= MakeTree(TYP_ADDR, 1);
#line 2186 "cplus.met"
                retTree=_ptRes0;
#line 2186 "cplus.met"
            }
#line 2186 "cplus.met"
#line 2187 "cplus.met"
            if (NPUSH_CALL_AFF_VERIF(valTree = ,_Tak(const_or_volatile), 31, cplus)){
#line 2187 "cplus.met"
#line 2188 "cplus.met"
                ReplaceTree(retTree ,1 ,valTree );
#line 2188 "cplus.met"
#line 2188 "cplus.met"
            }
#line 2188 "cplus.met"
#line 2189 "cplus.met"
            {
#line 2189 "cplus.met"
                _retValue = retTree ;
#line 2189 "cplus.met"
                goto ptr_operator_ret;
#line 2189 "cplus.met"
                
#line 2189 "cplus.met"
            }
#line 2189 "cplus.met"
#line 2189 "cplus.met"
            break;
#line 2189 "cplus.met"
#line 2193 "cplus.met"
        case ETCO : 
#line 2193 "cplus.met"
            tokenAhead = 0 ;
#line 2193 "cplus.met"
            CommTerm();
#line 2193 "cplus.met"
#line 2192 "cplus.met"
#line 2193 "cplus.met"
            {
#line 2193 "cplus.met"
                PPTREE _ptRes0=0;
#line 2193 "cplus.met"
                _ptRes0= MakeTree(TYP_REF, 1);
#line 2193 "cplus.met"
                retTree=_ptRes0;
#line 2193 "cplus.met"
            }
#line 2193 "cplus.met"
#line 2194 "cplus.met"
            if (NPUSH_CALL_AFF_VERIF(valTree = ,_Tak(const_or_volatile), 31, cplus)){
#line 2194 "cplus.met"
#line 2195 "cplus.met"
                ReplaceTree(retTree ,1 ,valTree );
#line 2195 "cplus.met"
#line 2195 "cplus.met"
            }
#line 2195 "cplus.met"
#line 2196 "cplus.met"
            {
#line 2196 "cplus.met"
                _retValue = retTree ;
#line 2196 "cplus.met"
                goto ptr_operator_ret;
#line 2196 "cplus.met"
                
#line 2196 "cplus.met"
            }
#line 2196 "cplus.met"
#line 2196 "cplus.met"
            break;
#line 2196 "cplus.met"
#line 2200 "cplus.met"
        case DPOIDPOI : 
#line 2200 "cplus.met"
#line 2199 "cplus.met"
#line 2200 "cplus.met"
            if ( (retour=NQUICK_CALL(_Tak(member_declarator)(error_free), 96, cplus))== (PPTREE) -1 ) {
#line 2200 "cplus.met"
                MulFreeTree(3,retTree,retour,valTree);
                PROG_EXIT(ptr_operator_exit,"ptr_operator")
#line 2200 "cplus.met"
            }
#line 2200 "cplus.met"
#line 2200 "cplus.met"
            break;
#line 2200 "cplus.met"
#line 2202 "cplus.met"
        case META : 
#line 2202 "cplus.met"
        case IDENT : 
#line 2202 "cplus.met"
#line 2203 "cplus.met"
#line 2204 "cplus.met"
            if ( (retour=NQUICK_CALL(_Tak(member_declarator)(error_free), 96, cplus))== (PPTREE) -1 ) {
#line 2204 "cplus.met"
                MulFreeTree(3,retTree,retour,valTree);
                PROG_EXIT(ptr_operator_exit,"ptr_operator")
#line 2204 "cplus.met"
            }
#line 2204 "cplus.met"
#line 2204 "cplus.met"
            break;
#line 2204 "cplus.met"
        default :
#line 2204 "cplus.met"
            MulFreeTree(3,retTree,retour,valTree);
            CASE_EXIT(ptr_operator_exit,"either * or & or :: or IDENT")
#line 2204 "cplus.met"
            break;
#line 2204 "cplus.met"
    }
#line 2204 "cplus.met"
#line 2207 "cplus.met"
    if (NPUSH_CALL_AFF_VERIF(valTree = ,_Tak(const_or_volatile), 31, cplus)){
#line 2207 "cplus.met"
#line 2208 "cplus.met"
        ReplaceTree(retour ,2 ,valTree );
#line 2208 "cplus.met"
#line 2208 "cplus.met"
    }
#line 2208 "cplus.met"
#line 2209 "cplus.met"
    {
#line 2209 "cplus.met"
        _retValue = retour ;
#line 2209 "cplus.met"
        goto ptr_operator_ret;
#line 2209 "cplus.met"
        
#line 2209 "cplus.met"
    }
#line 2209 "cplus.met"
#line 2209 "cplus.met"
#line 2209 "cplus.met"

#line 2210 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2210 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 2210 "cplus.met"
return((PPTREE) 0);
#line 2210 "cplus.met"

#line 2210 "cplus.met"
ptr_operator_exit :
#line 2210 "cplus.met"

#line 2210 "cplus.met"
    _Debug = TRACE_RULE("ptr_operator",TRACE_EXIT,(PPTREE)0);
#line 2210 "cplus.met"
    _funcLevel--;
#line 2210 "cplus.met"
    return((PPTREE) -1) ;
#line 2210 "cplus.met"

#line 2210 "cplus.met"
ptr_operator_ret :
#line 2210 "cplus.met"
    
#line 2210 "cplus.met"
    _Debug = TRACE_RULE("ptr_operator",TRACE_RETURN,_retValue);
#line 2210 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2210 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 2210 "cplus.met"
    return _retValue ;
#line 2210 "cplus.met"
}
#line 2210 "cplus.met"

#line 2210 "cplus.met"
#line 1794 "cplus.met"
PPTREE cplus::qualified_name ( int error_free)
#line 1794 "cplus.met"
{
#line 1794 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 1794 "cplus.met"
    int _value,_nbPre = 0 ;
#line 1794 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 1794 "cplus.met"
    int _Debug = TRACE_RULE("qualified_name",TRACE_ENTER,(PPTREE)0);
#line 1794 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 1794 "cplus.met"
#line 1794 "cplus.met"
    PPTREE retTree = (PPTREE) 0,inter = (PPTREE) 0,val = (PPTREE) 0,templateVal = (PPTREE) 0;
#line 1794 "cplus.met"
#line 1796 "cplus.met"
    if ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN(TILD,"~") && (tokenAhead = 0,CommTerm(),1)){
#line 1796 "cplus.met"
#line 1797 "cplus.met"
        {
#line 1797 "cplus.met"
            PPTREE _ptTree0=0,_ptRes0=0;
#line 1797 "cplus.met"
            _ptRes0= MakeTree(DESTRUCT, 1);
#line 1797 "cplus.met"
            {
#line 1797 "cplus.met"
                PPTREE _ptTree1=0,_ptRes1=0;
#line 1797 "cplus.met"
                _ptRes1= MakeTree(IDENT, 1);
#line 1797 "cplus.met"
                (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 1797 "cplus.met"
                if ( ! TERM_OR_META(IDENT,"IDENT") || !(BUILD_TERM_META(_ptTree1))) {
#line 1797 "cplus.met"
                    MulFreeTree(8,_ptRes1,_ptTree1,_ptRes0,_ptTree0,inter,retTree,templateVal,val);
                    TOKEN_EXIT(qualified_name_exit,"IDENT")
#line 1797 "cplus.met"
                } else {
#line 1797 "cplus.met"
                    tokenAhead = 0 ;
#line 1797 "cplus.met"
                }
#line 1797 "cplus.met"
                ReplaceTree(_ptRes1, 1, _ptTree1);
#line 1797 "cplus.met"
                _ptTree0=_ptRes1;
#line 1797 "cplus.met"
            }
#line 1797 "cplus.met"
            ReplaceTree(_ptRes0, 1, _ptTree0);
#line 1797 "cplus.met"
            retTree=_ptRes0;
#line 1797 "cplus.met"
        }
#line 1797 "cplus.met"
    } else {
#line 1797 "cplus.met"
#line 1799 "cplus.met"
        if ( (retTree=NQUICK_CALL(_Tak(simple_ident)(error_free), 131, cplus))== (PPTREE) -1 ) {
#line 1799 "cplus.met"
            MulFreeTree(4,inter,retTree,templateVal,val);
            PROG_EXIT(qualified_name_exit,"qualified_name")
#line 1799 "cplus.met"
        }
#line 1799 "cplus.met"
    }
#line 1799 "cplus.met"
#line 1800 "cplus.met"
    if ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN( DPOIDPOI,"::")){
#line 1800 "cplus.met"
#line 1801 "cplus.met"
#line 1802 "cplus.met"
        {
#line 1802 "cplus.met"
            PPTREE _ptRes0=0;
#line 1802 "cplus.met"
            _ptRes0= MakeTree(QUALIFIED, 2);
#line 1802 "cplus.met"
            ReplaceTree(_ptRes0, 1, retTree );
#line 1802 "cplus.met"
            retTree=_ptRes0;
#line 1802 "cplus.met"
        }
#line 1802 "cplus.met"
#line 1803 "cplus.met"
        inter = retTree ;
#line 1803 "cplus.met"
#line 1804 "cplus.met"
        while (((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN( DPOIDPOI,"::")) && 
#line 1804 "cplus.met"
              (NPUSH_CALL_AFF_VERIF(val = ,_Tak(qualified_name_elem), 118, cplus))) { 
#line 1804 "cplus.met"
#line 1805 "cplus.met"
#line 1806 "cplus.met"
            if ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN( DPOIDPOI,"::")){
#line 1806 "cplus.met"
#line 1807 "cplus.met"
                {
#line 1807 "cplus.met"
                    PPTREE _ptRes0=0;
#line 1807 "cplus.met"
                    _ptRes0= MakeTree(QUALIFIED, 2);
#line 1807 "cplus.met"
                    ReplaceTree(_ptRes0, 1, val );
#line 1807 "cplus.met"
                    val=_ptRes0;
#line 1807 "cplus.met"
                }
#line 1807 "cplus.met"
            }
#line 1807 "cplus.met"
#line 1808 "cplus.met"
            ReplaceTree(inter ,2 ,val );
#line 1808 "cplus.met"
#line 1809 "cplus.met"
            inter = val ;
#line 1809 "cplus.met"
#line 1809 "cplus.met"
        } 
#line 1809 "cplus.met"
#line 1809 "cplus.met"
#line 1810 "cplus.met"
    }
#line 1810 "cplus.met"
#line 1812 "cplus.met"
    if (NPUSH_CALL_AFF_VERIF(templateVal = ,_Tak(template_type), 145, cplus)){
#line 1812 "cplus.met"
#line 1813 "cplus.met"
#line 1814 "cplus.met"
        ReplaceTree(templateVal ,1 ,retTree );
#line 1814 "cplus.met"
#line 1815 "cplus.met"
        retTree = templateVal ;
#line 1815 "cplus.met"
#line 1816 "cplus.met"
        if ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN(DPOIDPOI,"::") && (tokenAhead = 0,CommTerm(),1)){
#line 1816 "cplus.met"
#line 1817 "cplus.met"
            {
#line 1817 "cplus.met"
                PPTREE _ptTree0=0;
#line 1817 "cplus.met"
                {
#line 1817 "cplus.met"
                    PPTREE _ptTree1=0,_ptRes1=0;
#line 1817 "cplus.met"
                    _ptRes1= MakeTree(QUALIFIED, 2);
#line 1817 "cplus.met"
                    ReplaceTree(_ptRes1, 1, retTree );
#line 1817 "cplus.met"
                    if ( (_ptTree1=NQUICK_CALL(_Tak(qualified_name)(error_free), 117, cplus))== (PPTREE) -1 ) {
#line 1817 "cplus.met"
                        MulFreeTree(7,_ptRes1,_ptTree1,_ptTree0,inter,retTree,templateVal,val);
                        PROG_EXIT(qualified_name_exit,"qualified_name")
#line 1817 "cplus.met"
                    }
#line 1817 "cplus.met"
                    ReplaceTree(_ptRes1, 2, _ptTree1);
#line 1817 "cplus.met"
                    _ptTree0=_ptRes1;
#line 1817 "cplus.met"
                }
#line 1817 "cplus.met"
                _retValue =_ptTree0;
#line 1817 "cplus.met"
                goto qualified_name_ret;
#line 1817 "cplus.met"
            }
#line 1817 "cplus.met"
        } else {
#line 1817 "cplus.met"
#line 1819 "cplus.met"
            {
#line 1819 "cplus.met"
                _retValue = retTree ;
#line 1819 "cplus.met"
                goto qualified_name_ret;
#line 1819 "cplus.met"
                
#line 1819 "cplus.met"
            }
#line 1819 "cplus.met"
        }
#line 1819 "cplus.met"
#line 1819 "cplus.met"
#line 1819 "cplus.met"
    }
#line 1819 "cplus.met"
#line 1821 "cplus.met"
    {
#line 1821 "cplus.met"
        _retValue = retTree ;
#line 1821 "cplus.met"
        goto qualified_name_ret;
#line 1821 "cplus.met"
        
#line 1821 "cplus.met"
    }
#line 1821 "cplus.met"
#line 1821 "cplus.met"
#line 1821 "cplus.met"

#line 1822 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1822 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 1822 "cplus.met"
return((PPTREE) 0);
#line 1822 "cplus.met"

#line 1822 "cplus.met"
qualified_name_exit :
#line 1822 "cplus.met"

#line 1822 "cplus.met"
    _Debug = TRACE_RULE("qualified_name",TRACE_EXIT,(PPTREE)0);
#line 1822 "cplus.met"
    _funcLevel--;
#line 1822 "cplus.met"
    return((PPTREE) -1) ;
#line 1822 "cplus.met"

#line 1822 "cplus.met"
qualified_name_ret :
#line 1822 "cplus.met"
    
#line 1822 "cplus.met"
    _Debug = TRACE_RULE("qualified_name",TRACE_RETURN,_retValue);
#line 1822 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1822 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 1822 "cplus.met"
    return _retValue ;
#line 1822 "cplus.met"
}
#line 1822 "cplus.met"

#line 1822 "cplus.met"
#line 1768 "cplus.met"
PPTREE cplus::qualified_name_elem ( int error_free)
#line 1768 "cplus.met"
{
#line 1768 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 1768 "cplus.met"
    int _value,_nbPre = 0 ;
#line 1768 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 1768 "cplus.met"
    int _Debug = TRACE_RULE("qualified_name_elem",TRACE_ENTER,(PPTREE)0);
#line 1768 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 1768 "cplus.met"
#line 1769 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 1769 "cplus.met"
    if (  !SEE_TOKEN( DPOIDPOI,"::") || !(CommTerm(),1)) {
#line 1769 "cplus.met"
            TOKEN_EXIT(qualified_name_elem_exit,"::")
#line 1769 "cplus.met"
    } else {
#line 1769 "cplus.met"
        tokenAhead = 0 ;
#line 1769 "cplus.met"
    }
#line 1769 "cplus.met"
#line 1770 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 1770 "cplus.met"
    switch( lexEl.Value) {
#line 1770 "cplus.met"
#line 1771 "cplus.met"
        case TILD : 
#line 1771 "cplus.met"
            tokenAhead = 0 ;
#line 1771 "cplus.met"
            CommTerm();
#line 1771 "cplus.met"
#line 1771 "cplus.met"
            {
#line 1771 "cplus.met"
                PPTREE _ptTree0=0;
#line 1771 "cplus.met"
                {
#line 1771 "cplus.met"
                    PPTREE _ptTree1=0,_ptRes1=0;
#line 1771 "cplus.met"
                    _ptRes1= MakeTree(DESTRUCT, 1);
#line 1771 "cplus.met"
                    {
#line 1771 "cplus.met"
                        PPTREE _ptTree2=0,_ptRes2=0;
#line 1771 "cplus.met"
                        _ptRes2= MakeTree(IDENT, 1);
#line 1771 "cplus.met"
                        (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 1771 "cplus.met"
                        if ( ! TERM_OR_META(IDENT,"IDENT") || !(BUILD_TERM_META(_ptTree2))) {
#line 1771 "cplus.met"
                            MulFreeTree(5,_ptRes2,_ptTree2,_ptRes1,_ptTree1,_ptTree0);
                            TOKEN_EXIT(qualified_name_elem_exit,"IDENT")
#line 1771 "cplus.met"
                        } else {
#line 1771 "cplus.met"
                            tokenAhead = 0 ;
#line 1771 "cplus.met"
                        }
#line 1771 "cplus.met"
                        ReplaceTree(_ptRes2, 1, _ptTree2);
#line 1771 "cplus.met"
                        _ptTree1=_ptRes2;
#line 1771 "cplus.met"
                    }
#line 1771 "cplus.met"
                    ReplaceTree(_ptRes1, 1, _ptTree1);
#line 1771 "cplus.met"
                    _ptTree0=_ptRes1;
#line 1771 "cplus.met"
                }
#line 1771 "cplus.met"
                _retValue =_ptTree0;
#line 1771 "cplus.met"
                goto qualified_name_elem_ret;
#line 1771 "cplus.met"
            }
#line 1771 "cplus.met"
            break;
#line 1771 "cplus.met"
#line 1772 "cplus.met"
        case META : 
#line 1772 "cplus.met"
        case IDENT : 
#line 1772 "cplus.met"
#line 1772 "cplus.met"
            {
#line 1772 "cplus.met"
                PPTREE _ptTree0=0;
#line 1772 "cplus.met"
                if ( (_ptTree0=NQUICK_CALL(_Tak(simple_ident)(error_free), 131, cplus))== (PPTREE) -1 ) {
#line 1772 "cplus.met"
                    MulFreeTree(1,_ptTree0);
                    PROG_EXIT(qualified_name_elem_exit,"qualified_name_elem")
#line 1772 "cplus.met"
                }
#line 1772 "cplus.met"
                _retValue =_ptTree0;
#line 1772 "cplus.met"
                goto qualified_name_elem_ret;
#line 1772 "cplus.met"
            }
#line 1772 "cplus.met"
            break;
#line 1772 "cplus.met"
#line 1773 "cplus.met"
        case OPERATOR : 
#line 1773 "cplus.met"
#line 1773 "cplus.met"
            {
#line 1773 "cplus.met"
                PPTREE _ptTree0=0;
#line 1773 "cplus.met"
                if ( (_ptTree0=NQUICK_CALL(_Tak(operator_function_name)(error_free), 105, cplus))== (PPTREE) -1 ) {
#line 1773 "cplus.met"
                    MulFreeTree(1,_ptTree0);
                    PROG_EXIT(qualified_name_elem_exit,"qualified_name_elem")
#line 1773 "cplus.met"
                }
#line 1773 "cplus.met"
                _retValue =_ptTree0;
#line 1773 "cplus.met"
                goto qualified_name_elem_ret;
#line 1773 "cplus.met"
            }
#line 1773 "cplus.met"
            break;
#line 1773 "cplus.met"
        default :
#line 1773 "cplus.met"
            CASE_EXIT(qualified_name_elem_exit,"either ~ or IDENT or operator")
#line 1773 "cplus.met"
            break;
#line 1773 "cplus.met"
    }
#line 1773 "cplus.met"
#line 1773 "cplus.met"
#line 1774 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1774 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 1774 "cplus.met"
return((PPTREE) 0);
#line 1774 "cplus.met"

#line 1774 "cplus.met"
qualified_name_elem_exit :
#line 1774 "cplus.met"

#line 1774 "cplus.met"
    _Debug = TRACE_RULE("qualified_name_elem",TRACE_EXIT,(PPTREE)0);
#line 1774 "cplus.met"
    _funcLevel--;
#line 1774 "cplus.met"
    return((PPTREE) -1) ;
#line 1774 "cplus.met"

#line 1774 "cplus.met"
qualified_name_elem_ret :
#line 1774 "cplus.met"
    
#line 1774 "cplus.met"
    _Debug = TRACE_RULE("qualified_name_elem",TRACE_RETURN,_retValue);
#line 1774 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1774 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 1774 "cplus.met"
    return _retValue ;
#line 1774 "cplus.met"
}
#line 1774 "cplus.met"

#line 1774 "cplus.met"
#line 804 "cplus.met"
PPTREE cplus::quick_prog ( int error_free)
#line 804 "cplus.met"
{
#line 804 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 804 "cplus.met"
    int _value,_nbPre = 0 ;
#line 804 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 804 "cplus.met"
    int _Debug = TRACE_RULE("quick_prog",TRACE_ENTER,(PPTREE)0);
#line 804 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 804 "cplus.met"
#line 804 "cplus.met"
    PPTREE list = (PPTREE) 0,valTree = (PPTREE) 0;
#line 804 "cplus.met"
#line 806 "cplus.met"
    while ((NPUSH_CALL_AFF_VERIF(valTree = ,_Tak(quick_prog_elem), 120, cplus)) && 
#line 806 "cplus.met"
          (! (valTree == (PPTREE) 0))) { 
#line 806 "cplus.met"
#line 807 "cplus.met"
#line 808 "cplus.met"
        FreeTree (valTree );
#line 808 "cplus.met"
#line 809 "cplus.met"
         _lastTree = (PPTREE) 0;
#line 809 "cplus.met"
#line 809 "cplus.met"
    } 
#line 809 "cplus.met"
#line 811 "cplus.met"
    ExtUnputBuf();
#line 811 "cplus.met"
    while ((c == ' ')||(c == '\n')||(c == '\t')||(c == '\r')||(c == ''))
#line 811 "cplus.met"
        NextChar() ;
#line 811 "cplus.met"
    ptStockBuf = -1;
#line 811 "cplus.met"
    lexEl.Erase();
#line 811 "cplus.met"
    tokenAhead = 0;
#line 811 "cplus.met"
    oldLine=line,oldCol=col;
#line 811 "cplus.met"
    if ( !lexCallLex) {
#line 811 "cplus.met"
        PUT_COORD_CALL;
#line 811 "cplus.met"
    }
#line 811 "cplus.met"
#line 812 "cplus.met"
    if ((tokenAhead && tokenAhead != -1)|| (c != EOF)){
#line 812 "cplus.met"
#line 813 "cplus.met"
        if ( (NQUICK_CALL(_Tak(quick_prog_elem)(error_free), 120, cplus))== (PPTREE) -1 ) {
#line 813 "cplus.met"
            MulFreeTree(2,list,valTree);
            PROG_EXIT(quick_prog_exit,"quick_prog")
#line 813 "cplus.met"
        }
#line 813 "cplus.met"
    }
#line 813 "cplus.met"
#line 814 "cplus.met"
    {
#line 814 "cplus.met"
        _retValue = list ;
#line 814 "cplus.met"
        goto quick_prog_ret;
#line 814 "cplus.met"
        
#line 814 "cplus.met"
    }
#line 814 "cplus.met"
#line 814 "cplus.met"
#line 814 "cplus.met"

#line 815 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 815 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 815 "cplus.met"
return((PPTREE) 0);
#line 815 "cplus.met"

#line 815 "cplus.met"
quick_prog_exit :
#line 815 "cplus.met"

#line 815 "cplus.met"
    _Debug = TRACE_RULE("quick_prog",TRACE_EXIT,(PPTREE)0);
#line 815 "cplus.met"
    _funcLevel--;
#line 815 "cplus.met"
    return((PPTREE) -1) ;
#line 815 "cplus.met"

#line 815 "cplus.met"
quick_prog_ret :
#line 815 "cplus.met"
    
#line 815 "cplus.met"
    _Debug = TRACE_RULE("quick_prog",TRACE_RETURN,_retValue);
#line 815 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 815 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 815 "cplus.met"
    return _retValue ;
#line 815 "cplus.met"
}
#line 815 "cplus.met"

#line 815 "cplus.met"
#line 837 "cplus.met"
PPTREE cplus::quick_prog_elem ( int error_free)
#line 837 "cplus.met"
{
#line 837 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 837 "cplus.met"
    int _value,_nbPre = 0 ;
#line 837 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 837 "cplus.met"
    int _Debug = TRACE_RULE("quick_prog_elem",TRACE_ENTER,(PPTREE)0);
#line 837 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 837 "cplus.met"
#line 837 "cplus.met"
    PPTREE retTree = (PPTREE) 0;
#line 837 "cplus.met"
#line 839 "cplus.met"
     debut :
#line 839 "cplus.met"
#line 840 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 840 "cplus.met"
    switch( lexEl.Value) {
#line 840 "cplus.met"
#line 841 "cplus.met"
        case META : 
#line 841 "cplus.met"
        case INCLUDE_DIR : 
#line 841 "cplus.met"
#line 841 "cplus.met"
            {
#line 841 "cplus.met"
                PPTREE _ptTree0=0;
#line 841 "cplus.met"
                if ( (_ptTree0=NQUICK_CALL(_Tak(include_dir)(error_free), 80, cplus))== (PPTREE) -1 ) {
#line 841 "cplus.met"
                    MulFreeTree(2,_ptTree0,retTree);
                    PROG_EXIT(quick_prog_elem_exit,"quick_prog_elem")
#line 841 "cplus.met"
                }
#line 841 "cplus.met"
                _retValue =_ptTree0;
#line 841 "cplus.met"
                goto quick_prog_elem_ret;
#line 841 "cplus.met"
            }
#line 841 "cplus.met"
            break;
#line 841 "cplus.met"
#line 842 "cplus.met"
        case PRAGMA_DIR : 
#line 842 "cplus.met"
            tokenAhead = 0 ;
#line 842 "cplus.met"
            CommTerm();
#line 842 "cplus.met"
#line 843 "cplus.met"
#line 844 "cplus.met"
            if (NPUSH_CALL_VERIF(_Tak(range_pragma), 125, cplus)){
#line 844 "cplus.met"
#line 844 "cplus.met"
            }
#line 844 "cplus.met"
#line 846 "cplus.met"
            (tokenAhead == 8|| (LexPragma(),TRACE_LEX(1)));
#line 846 "cplus.met"
            switch( lexEl.Value) {
#line 846 "cplus.met"
#line 847 "cplus.met"
                case META : 
#line 847 "cplus.met"
                case PRAGMA_CONFIG : 
#line 847 "cplus.met"
                    tokenAhead = 0 ;
#line 847 "cplus.met"
                    CommTerm();
#line 847 "cplus.met"
#line 848 "cplus.met"
#line 849 "cplus.met"
                    (tokenAhead == 8|| (LexPragma(),TRACE_LEX(1)));
#line 849 "cplus.met"
                    switch( lexEl.Value) {
#line 849 "cplus.met"
#line 850 "cplus.met"
                        case META : 
#line 850 "cplus.met"
                        case PRAGMA_TAB : 
#line 850 "cplus.met"
                            tokenAhead = 0 ;
#line 850 "cplus.met"
                            CommTerm();
#line 850 "cplus.met"
#line 851 "cplus.met"
#line 852 "cplus.met"
                            {
#line 852 "cplus.met"
                                PPTREE _ptTree0=0,_ptRes0=0;
#line 852 "cplus.met"
                                _ptRes0= MakeTree(CONFIG, 1);
#line 852 "cplus.met"
                                {
#line 852 "cplus.met"
                                    PPTREE _ptTree1=0,_ptRes1=0;
#line 852 "cplus.met"
                                    _ptRes1= MakeTree(TAB_VALUE, 1);
#line 852 "cplus.met"
                                    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 852 "cplus.met"
                                    if ( ! TERM_OR_META(INTEGER,"INTEGER") || !(BUILD_TERM_META(_ptTree1))) {
#line 852 "cplus.met"
                                        MulFreeTree(5,_ptRes1,_ptTree1,_ptRes0,_ptTree0,retTree);
                                        TOKEN_EXIT(quick_prog_elem_exit,"INTEGER")
#line 852 "cplus.met"
                                    } else {
#line 852 "cplus.met"
                                        tokenAhead = 0 ;
#line 852 "cplus.met"
                                    }
#line 852 "cplus.met"
                                    ReplaceTree(_ptRes1, 1, _ptTree1);
#line 852 "cplus.met"
                                    _ptTree0=_ptRes1;
#line 852 "cplus.met"
                                }
#line 852 "cplus.met"
                                ReplaceTree(_ptRes0, 1, _ptTree0);
#line 852 "cplus.met"
                                retTree=_ptRes0;
#line 852 "cplus.met"
                            }
#line 852 "cplus.met"
#line 853 "cplus.met"
                            AnalyzeTab (retTree );
#line 853 "cplus.met"
#line 854 "cplus.met"
                            {
#line 854 "cplus.met"
                                _retValue = retTree ;
#line 854 "cplus.met"
                                goto quick_prog_elem_ret;
#line 854 "cplus.met"
                                
#line 854 "cplus.met"
                            }
#line 854 "cplus.met"
#line 854 "cplus.met"
                            break;
#line 854 "cplus.met"
#line 856 "cplus.met"
                        case PRAGMA_MODE : 
#line 856 "cplus.met"
                            tokenAhead = 0 ;
#line 856 "cplus.met"
                            CommTerm();
#line 856 "cplus.met"
#line 857 "cplus.met"
#line 858 "cplus.met"
                            {
#line 858 "cplus.met"
                                PPTREE _ptTree0=0,_ptRes0=0;
#line 858 "cplus.met"
                                _ptRes0= MakeTree(CONFIG, 1);
#line 858 "cplus.met"
                                {
#line 858 "cplus.met"
                                    PPTREE _ptTree1=0,_ptRes1=0;
#line 858 "cplus.met"
                                    _ptRes1= MakeTree(MODE_VALUE, 1);
#line 858 "cplus.met"
                                    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 858 "cplus.met"
                                    if ( ! TERM_OR_META(IDENT,"IDENT") || !(BUILD_TERM_META(_ptTree1))) {
#line 858 "cplus.met"
                                        MulFreeTree(5,_ptRes1,_ptTree1,_ptRes0,_ptTree0,retTree);
                                        TOKEN_EXIT(quick_prog_elem_exit,"IDENT")
#line 858 "cplus.met"
                                    } else {
#line 858 "cplus.met"
                                        tokenAhead = 0 ;
#line 858 "cplus.met"
                                    }
#line 858 "cplus.met"
                                    ReplaceTree(_ptRes1, 1, _ptTree1);
#line 858 "cplus.met"
                                    _ptTree0=_ptRes1;
#line 858 "cplus.met"
                                }
#line 858 "cplus.met"
                                ReplaceTree(_ptRes0, 1, _ptTree0);
#line 858 "cplus.met"
                                retTree=_ptRes0;
#line 858 "cplus.met"
                            }
#line 858 "cplus.met"
#line 859 "cplus.met"
                            AnalyzeMode (retTree );
#line 859 "cplus.met"
#line 860 "cplus.met"
                            {
#line 860 "cplus.met"
                                _retValue = retTree ;
#line 860 "cplus.met"
                                goto quick_prog_elem_ret;
#line 860 "cplus.met"
                                
#line 860 "cplus.met"
                            }
#line 860 "cplus.met"
#line 860 "cplus.met"
                            break;
#line 860 "cplus.met"
#line 862 "cplus.met"
                        case PRAGMA_ENUM_VERT : 
#line 862 "cplus.met"
                            tokenAhead = 0 ;
#line 862 "cplus.met"
                            CommTerm();
#line 862 "cplus.met"
#line 863 "cplus.met"
#line 864 "cplus.met"
                            {
#line 864 "cplus.met"
                                PPTREE _ptTree0=0,_ptRes0=0;
#line 864 "cplus.met"
                                _ptRes0= MakeTree(CONFIG, 1);
#line 864 "cplus.met"
                                {
#line 864 "cplus.met"
                                    PPTREE _ptTree1=0,_ptRes1=0;
#line 864 "cplus.met"
                                    _ptRes1= MakeTree(ENUM_VERT_VALUE, 1);
#line 864 "cplus.met"
                                    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 864 "cplus.met"
                                    if ( ! TERM_OR_META(IDENT,"IDENT") || !(BUILD_TERM_META(_ptTree1))) {
#line 864 "cplus.met"
                                        MulFreeTree(5,_ptRes1,_ptTree1,_ptRes0,_ptTree0,retTree);
                                        TOKEN_EXIT(quick_prog_elem_exit,"IDENT")
#line 864 "cplus.met"
                                    } else {
#line 864 "cplus.met"
                                        tokenAhead = 0 ;
#line 864 "cplus.met"
                                    }
#line 864 "cplus.met"
                                    ReplaceTree(_ptRes1, 1, _ptTree1);
#line 864 "cplus.met"
                                    _ptTree0=_ptRes1;
#line 864 "cplus.met"
                                }
#line 864 "cplus.met"
                                ReplaceTree(_ptRes0, 1, _ptTree0);
#line 864 "cplus.met"
                                retTree=_ptRes0;
#line 864 "cplus.met"
                            }
#line 864 "cplus.met"
#line 865 "cplus.met"
                            AnalyzeEnumVert (retTree );
#line 865 "cplus.met"
#line 866 "cplus.met"
                            {
#line 866 "cplus.met"
                                _retValue = retTree ;
#line 866 "cplus.met"
                                goto quick_prog_elem_ret;
#line 866 "cplus.met"
                                
#line 866 "cplus.met"
                            }
#line 866 "cplus.met"
#line 866 "cplus.met"
                            break;
#line 866 "cplus.met"
#line 868 "cplus.met"
                        case PRAGMA_PARAMETERS_UNDER : 
#line 868 "cplus.met"
                            tokenAhead = 0 ;
#line 868 "cplus.met"
                            CommTerm();
#line 868 "cplus.met"
#line 869 "cplus.met"
#line 870 "cplus.met"
                            {
#line 870 "cplus.met"
                                PPTREE _ptTree0=0,_ptRes0=0;
#line 870 "cplus.met"
                                _ptRes0= MakeTree(CONFIG, 1);
#line 870 "cplus.met"
                                {
#line 870 "cplus.met"
                                    PPTREE _ptTree1=0,_ptRes1=0;
#line 870 "cplus.met"
                                    _ptRes1= MakeTree(ENUM_PARAMETERS_UNDER, 1);
#line 870 "cplus.met"
                                    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 870 "cplus.met"
                                    if ( ! TERM_OR_META(IDENT,"IDENT") || !(BUILD_TERM_META(_ptTree1))) {
#line 870 "cplus.met"
                                        MulFreeTree(5,_ptRes1,_ptTree1,_ptRes0,_ptTree0,retTree);
                                        TOKEN_EXIT(quick_prog_elem_exit,"IDENT")
#line 870 "cplus.met"
                                    } else {
#line 870 "cplus.met"
                                        tokenAhead = 0 ;
#line 870 "cplus.met"
                                    }
#line 870 "cplus.met"
                                    ReplaceTree(_ptRes1, 1, _ptTree1);
#line 870 "cplus.met"
                                    _ptTree0=_ptRes1;
#line 870 "cplus.met"
                                }
#line 870 "cplus.met"
                                ReplaceTree(_ptRes0, 1, _ptTree0);
#line 870 "cplus.met"
                                retTree=_ptRes0;
#line 870 "cplus.met"
                            }
#line 870 "cplus.met"
#line 871 "cplus.met"
                            AnalyzeParameterFunctUnd (retTree );
#line 871 "cplus.met"
#line 872 "cplus.met"
                            {
#line 872 "cplus.met"
                                _retValue = retTree ;
#line 872 "cplus.met"
                                goto quick_prog_elem_ret;
#line 872 "cplus.met"
                                
#line 872 "cplus.met"
                            }
#line 872 "cplus.met"
#line 872 "cplus.met"
                            break;
#line 872 "cplus.met"
#line 874 "cplus.met"
                        case PRAGMA_TAB_DIRECTIVE : 
#line 874 "cplus.met"
                            tokenAhead = 0 ;
#line 874 "cplus.met"
                            CommTerm();
#line 874 "cplus.met"
#line 875 "cplus.met"
#line 876 "cplus.met"
                            {
#line 876 "cplus.met"
                                PPTREE _ptTree0=0,_ptRes0=0;
#line 876 "cplus.met"
                                _ptRes0= MakeTree(CONFIG, 1);
#line 876 "cplus.met"
                                {
#line 876 "cplus.met"
                                    PPTREE _ptTree1=0,_ptRes1=0;
#line 876 "cplus.met"
                                    _ptRes1= MakeTree(TAB_DIRECTIVE, 1);
#line 876 "cplus.met"
                                    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 876 "cplus.met"
                                    if ( ! TERM_OR_META(IDENT,"IDENT") || !(BUILD_TERM_META(_ptTree1))) {
#line 876 "cplus.met"
                                        MulFreeTree(5,_ptRes1,_ptTree1,_ptRes0,_ptTree0,retTree);
                                        TOKEN_EXIT(quick_prog_elem_exit,"IDENT")
#line 876 "cplus.met"
                                    } else {
#line 876 "cplus.met"
                                        tokenAhead = 0 ;
#line 876 "cplus.met"
                                    }
#line 876 "cplus.met"
                                    ReplaceTree(_ptRes1, 1, _ptTree1);
#line 876 "cplus.met"
                                    _ptTree0=_ptRes1;
#line 876 "cplus.met"
                                }
#line 876 "cplus.met"
                                ReplaceTree(_ptRes0, 1, _ptTree0);
#line 876 "cplus.met"
                                retTree=_ptRes0;
#line 876 "cplus.met"
                            }
#line 876 "cplus.met"
#line 877 "cplus.met"
                            AnalyzeTabDirective (retTree );
#line 877 "cplus.met"
#line 878 "cplus.met"
                            {
#line 878 "cplus.met"
                                _retValue = retTree ;
#line 878 "cplus.met"
                                goto quick_prog_elem_ret;
#line 878 "cplus.met"
                                
#line 878 "cplus.met"
                            }
#line 878 "cplus.met"
#line 878 "cplus.met"
                            break;
#line 878 "cplus.met"
#line 880 "cplus.met"
                        case PRAGMA_SPACE_ARROW : 
#line 880 "cplus.met"
                            tokenAhead = 0 ;
#line 880 "cplus.met"
                            CommTerm();
#line 880 "cplus.met"
#line 881 "cplus.met"
#line 882 "cplus.met"
                            {
#line 882 "cplus.met"
                                PPTREE _ptTree0=0,_ptRes0=0;
#line 882 "cplus.met"
                                _ptRes0= MakeTree(CONFIG, 1);
#line 882 "cplus.met"
                                {
#line 882 "cplus.met"
                                    PPTREE _ptTree1=0,_ptRes1=0;
#line 882 "cplus.met"
                                    _ptRes1= MakeTree(SPACE_ARROW, 1);
#line 882 "cplus.met"
                                    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 882 "cplus.met"
                                    if ( ! TERM_OR_META(IDENT,"IDENT") || !(BUILD_TERM_META(_ptTree1))) {
#line 882 "cplus.met"
                                        MulFreeTree(5,_ptRes1,_ptTree1,_ptRes0,_ptTree0,retTree);
                                        TOKEN_EXIT(quick_prog_elem_exit,"IDENT")
#line 882 "cplus.met"
                                    } else {
#line 882 "cplus.met"
                                        tokenAhead = 0 ;
#line 882 "cplus.met"
                                    }
#line 882 "cplus.met"
                                    ReplaceTree(_ptRes1, 1, _ptTree1);
#line 882 "cplus.met"
                                    _ptTree0=_ptRes1;
#line 882 "cplus.met"
                                }
#line 882 "cplus.met"
                                ReplaceTree(_ptRes0, 1, _ptTree0);
#line 882 "cplus.met"
                                retTree=_ptRes0;
#line 882 "cplus.met"
                            }
#line 882 "cplus.met"
#line 883 "cplus.met"
                            AnalyzeSpaceArrow (retTree );
#line 883 "cplus.met"
#line 884 "cplus.met"
                            {
#line 884 "cplus.met"
                                _retValue = retTree ;
#line 884 "cplus.met"
                                goto quick_prog_elem_ret;
#line 884 "cplus.met"
                                
#line 884 "cplus.met"
                            }
#line 884 "cplus.met"
#line 884 "cplus.met"
                            break;
#line 884 "cplus.met"
#line 886 "cplus.met"
                        case PRAGMA_BRACE_ALIGN : 
#line 886 "cplus.met"
                            tokenAhead = 0 ;
#line 886 "cplus.met"
                            CommTerm();
#line 886 "cplus.met"
#line 887 "cplus.met"
#line 888 "cplus.met"
                            {
#line 888 "cplus.met"
                                PPTREE _ptTree0=0,_ptRes0=0;
#line 888 "cplus.met"
                                _ptRes0= MakeTree(CONFIG, 1);
#line 888 "cplus.met"
                                {
#line 888 "cplus.met"
                                    PPTREE _ptTree1=0,_ptRes1=0;
#line 888 "cplus.met"
                                    _ptRes1= MakeTree(BRACE_ALIGN_VALUE, 1);
#line 888 "cplus.met"
                                    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 888 "cplus.met"
                                    if ( ! TERM_OR_META(IDENT,"IDENT") || !(BUILD_TERM_META(_ptTree1))) {
#line 888 "cplus.met"
                                        MulFreeTree(5,_ptRes1,_ptTree1,_ptRes0,_ptTree0,retTree);
                                        TOKEN_EXIT(quick_prog_elem_exit,"IDENT")
#line 888 "cplus.met"
                                    } else {
#line 888 "cplus.met"
                                        tokenAhead = 0 ;
#line 888 "cplus.met"
                                    }
#line 888 "cplus.met"
                                    ReplaceTree(_ptRes1, 1, _ptTree1);
#line 888 "cplus.met"
                                    _ptTree0=_ptRes1;
#line 888 "cplus.met"
                                }
#line 888 "cplus.met"
                                ReplaceTree(_ptRes0, 1, _ptTree0);
#line 888 "cplus.met"
                                retTree=_ptRes0;
#line 888 "cplus.met"
                            }
#line 888 "cplus.met"
#line 889 "cplus.met"
                            AnalyzeBraceAlign (retTree );
#line 889 "cplus.met"
#line 890 "cplus.met"
                            {
#line 890 "cplus.met"
                                _retValue = retTree ;
#line 890 "cplus.met"
                                goto quick_prog_elem_ret;
#line 890 "cplus.met"
                                
#line 890 "cplus.met"
                            }
#line 890 "cplus.met"
#line 890 "cplus.met"
                            break;
#line 890 "cplus.met"
#line 892 "cplus.met"
                        case PRAGMA_SIMPLIFY : 
#line 892 "cplus.met"
                            tokenAhead = 0 ;
#line 892 "cplus.met"
                            CommTerm();
#line 892 "cplus.met"
#line 893 "cplus.met"
#line 894 "cplus.met"
                            {
#line 894 "cplus.met"
                                PPTREE _ptTree0=0,_ptRes0=0;
#line 894 "cplus.met"
                                _ptRes0= MakeTree(SIMPLIFY, 1);
#line 894 "cplus.met"
                                {
#line 894 "cplus.met"
                                    PPTREE _ptTree1=0,_ptRes1=0;
#line 894 "cplus.met"
                                    _ptRes1= MakeTree(SIMPLIFY_VALUE, 1);
#line 894 "cplus.met"
                                    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 894 "cplus.met"
                                    if ( ! TERM_OR_META(IDENT,"IDENT") || !(BUILD_TERM_META(_ptTree1))) {
#line 894 "cplus.met"
                                        MulFreeTree(5,_ptRes1,_ptTree1,_ptRes0,_ptTree0,retTree);
                                        TOKEN_EXIT(quick_prog_elem_exit,"IDENT")
#line 894 "cplus.met"
                                    } else {
#line 894 "cplus.met"
                                        tokenAhead = 0 ;
#line 894 "cplus.met"
                                    }
#line 894 "cplus.met"
                                    ReplaceTree(_ptRes1, 1, _ptTree1);
#line 894 "cplus.met"
                                    _ptTree0=_ptRes1;
#line 894 "cplus.met"
                                }
#line 894 "cplus.met"
                                ReplaceTree(_ptRes0, 1, _ptTree0);
#line 894 "cplus.met"
                                retTree=_ptRes0;
#line 894 "cplus.met"
                            }
#line 894 "cplus.met"
#line 895 "cplus.met"
                            AnalyzeSimplify (retTree );
#line 895 "cplus.met"
#line 896 "cplus.met"
                            {
#line 896 "cplus.met"
                                _retValue = retTree ;
#line 896 "cplus.met"
                                goto quick_prog_elem_ret;
#line 896 "cplus.met"
                                
#line 896 "cplus.met"
                            }
#line 896 "cplus.met"
#line 896 "cplus.met"
                            break;
#line 896 "cplus.met"
#line 898 "cplus.met"
                        case PRAGMA_SINGLE_SWITCH_INDENT : 
#line 898 "cplus.met"
                            tokenAhead = 0 ;
#line 898 "cplus.met"
                            CommTerm();
#line 898 "cplus.met"
#line 899 "cplus.met"
#line 900 "cplus.met"
                            {
#line 900 "cplus.met"
                                PPTREE _ptTree0=0,_ptRes0=0;
#line 900 "cplus.met"
                                _ptRes0= MakeTree(CONFIG, 1);
#line 900 "cplus.met"
                                {
#line 900 "cplus.met"
                                    PPTREE _ptTree1=0,_ptRes1=0;
#line 900 "cplus.met"
                                    _ptRes1= MakeTree(SINGLE_SWITCH_INDENT_VALUE, 1);
#line 900 "cplus.met"
                                    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 900 "cplus.met"
                                    if ( ! TERM_OR_META(IDENT,"IDENT") || !(BUILD_TERM_META(_ptTree1))) {
#line 900 "cplus.met"
                                        MulFreeTree(5,_ptRes1,_ptTree1,_ptRes0,_ptTree0,retTree);
                                        TOKEN_EXIT(quick_prog_elem_exit,"IDENT")
#line 900 "cplus.met"
                                    } else {
#line 900 "cplus.met"
                                        tokenAhead = 0 ;
#line 900 "cplus.met"
                                    }
#line 900 "cplus.met"
                                    ReplaceTree(_ptRes1, 1, _ptTree1);
#line 900 "cplus.met"
                                    _ptTree0=_ptRes1;
#line 900 "cplus.met"
                                }
#line 900 "cplus.met"
                                ReplaceTree(_ptRes0, 1, _ptTree0);
#line 900 "cplus.met"
                                retTree=_ptRes0;
#line 900 "cplus.met"
                            }
#line 900 "cplus.met"
#line 901 "cplus.met"
                            AnalyzeSingleSwitchIndent (retTree );
#line 901 "cplus.met"
#line 902 "cplus.met"
                            {
#line 902 "cplus.met"
                                _retValue = retTree ;
#line 902 "cplus.met"
                                goto quick_prog_elem_ret;
#line 902 "cplus.met"
                                
#line 902 "cplus.met"
                            }
#line 902 "cplus.met"
#line 902 "cplus.met"
                            break;
#line 902 "cplus.met"
#line 904 "cplus.met"
                        case PRAGMA_ASSIGN_ALIGN : 
#line 904 "cplus.met"
                            tokenAhead = 0 ;
#line 904 "cplus.met"
                            CommTerm();
#line 904 "cplus.met"
#line 905 "cplus.met"
#line 906 "cplus.met"
                            {
#line 906 "cplus.met"
                                PPTREE _ptTree0=0,_ptRes0=0;
#line 906 "cplus.met"
                                _ptRes0= MakeTree(CONFIG, 1);
#line 906 "cplus.met"
                                {
#line 906 "cplus.met"
                                    PPTREE _ptTree1=0,_ptRes1=0;
#line 906 "cplus.met"
                                    _ptRes1= MakeTree(ASSIGN_ALIGN, 1);
#line 906 "cplus.met"
                                    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 906 "cplus.met"
                                    if ( ! TERM_OR_META(IDENT,"IDENT") || !(BUILD_TERM_META(_ptTree1))) {
#line 906 "cplus.met"
                                        MulFreeTree(5,_ptRes1,_ptTree1,_ptRes0,_ptTree0,retTree);
                                        TOKEN_EXIT(quick_prog_elem_exit,"IDENT")
#line 906 "cplus.met"
                                    } else {
#line 906 "cplus.met"
                                        tokenAhead = 0 ;
#line 906 "cplus.met"
                                    }
#line 906 "cplus.met"
                                    ReplaceTree(_ptRes1, 1, _ptTree1);
#line 906 "cplus.met"
                                    _ptTree0=_ptRes1;
#line 906 "cplus.met"
                                }
#line 906 "cplus.met"
                                ReplaceTree(_ptRes0, 1, _ptTree0);
#line 906 "cplus.met"
                                retTree=_ptRes0;
#line 906 "cplus.met"
                            }
#line 906 "cplus.met"
#line 907 "cplus.met"
                            AnalyzeAssignAlign (retTree );
#line 907 "cplus.met"
#line 908 "cplus.met"
                            {
#line 908 "cplus.met"
                                _retValue = retTree ;
#line 908 "cplus.met"
                                goto quick_prog_elem_ret;
#line 908 "cplus.met"
                                
#line 908 "cplus.met"
                            }
#line 908 "cplus.met"
#line 908 "cplus.met"
                            break;
#line 908 "cplus.met"
#line 910 "cplus.met"
                        case PRAGMA_DECL_ALIGN : 
#line 910 "cplus.met"
                            tokenAhead = 0 ;
#line 910 "cplus.met"
                            CommTerm();
#line 910 "cplus.met"
#line 911 "cplus.met"
#line 912 "cplus.met"
                            {
#line 912 "cplus.met"
                                PPTREE _ptTree0=0,_ptRes0=0;
#line 912 "cplus.met"
                                _ptRes0= MakeTree(CONFIG, 1);
#line 912 "cplus.met"
                                {
#line 912 "cplus.met"
                                    PPTREE _ptTree1=0,_ptRes1=0;
#line 912 "cplus.met"
                                    _ptRes1= MakeTree(DECL_ALIGN, 1);
#line 912 "cplus.met"
                                    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 912 "cplus.met"
                                    if ( ! TERM_OR_META(IDENT,"IDENT") || !(BUILD_TERM_META(_ptTree1))) {
#line 912 "cplus.met"
                                        MulFreeTree(5,_ptRes1,_ptTree1,_ptRes0,_ptTree0,retTree);
                                        TOKEN_EXIT(quick_prog_elem_exit,"IDENT")
#line 912 "cplus.met"
                                    } else {
#line 912 "cplus.met"
                                        tokenAhead = 0 ;
#line 912 "cplus.met"
                                    }
#line 912 "cplus.met"
                                    ReplaceTree(_ptRes1, 1, _ptTree1);
#line 912 "cplus.met"
                                    _ptTree0=_ptRes1;
#line 912 "cplus.met"
                                }
#line 912 "cplus.met"
                                ReplaceTree(_ptRes0, 1, _ptTree0);
#line 912 "cplus.met"
                                retTree=_ptRes0;
#line 912 "cplus.met"
                            }
#line 912 "cplus.met"
#line 913 "cplus.met"
                            AnalyzeDeclAlign (retTree );
#line 913 "cplus.met"
#line 914 "cplus.met"
                            {
#line 914 "cplus.met"
                                _retValue = retTree ;
#line 914 "cplus.met"
                                goto quick_prog_elem_ret;
#line 914 "cplus.met"
                                
#line 914 "cplus.met"
                            }
#line 914 "cplus.met"
#line 914 "cplus.met"
                            break;
#line 914 "cplus.met"
#line 916 "cplus.met"
                        case PRAGMA_MARGIN : 
#line 916 "cplus.met"
                            tokenAhead = 0 ;
#line 916 "cplus.met"
                            CommTerm();
#line 916 "cplus.met"
#line 917 "cplus.met"
#line 918 "cplus.met"
                            {
#line 918 "cplus.met"
                                PPTREE _ptTree0=0,_ptRes0=0;
#line 918 "cplus.met"
                                _ptRes0= MakeTree(CONFIG, 1);
#line 918 "cplus.met"
                                {
#line 918 "cplus.met"
                                    PPTREE _ptTree1=0,_ptRes1=0;
#line 918 "cplus.met"
                                    _ptRes1= MakeTree(MARGIN_VALUE, 1);
#line 918 "cplus.met"
                                    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 918 "cplus.met"
                                    if ( ! TERM_OR_META(INTEGER,"INTEGER") || !(BUILD_TERM_META(_ptTree1))) {
#line 918 "cplus.met"
                                        MulFreeTree(5,_ptRes1,_ptTree1,_ptRes0,_ptTree0,retTree);
                                        TOKEN_EXIT(quick_prog_elem_exit,"INTEGER")
#line 918 "cplus.met"
                                    } else {
#line 918 "cplus.met"
                                        tokenAhead = 0 ;
#line 918 "cplus.met"
                                    }
#line 918 "cplus.met"
                                    ReplaceTree(_ptRes1, 1, _ptTree1);
#line 918 "cplus.met"
                                    _ptTree0=_ptRes1;
#line 918 "cplus.met"
                                }
#line 918 "cplus.met"
                                ReplaceTree(_ptRes0, 1, _ptTree0);
#line 918 "cplus.met"
                                retTree=_ptRes0;
#line 918 "cplus.met"
                            }
#line 918 "cplus.met"
#line 919 "cplus.met"
                            AnalyzeMargin (retTree );
#line 919 "cplus.met"
#line 920 "cplus.met"
                            {
#line 920 "cplus.met"
                                _retValue = retTree ;
#line 920 "cplus.met"
                                goto quick_prog_elem_ret;
#line 920 "cplus.met"
                                
#line 920 "cplus.met"
                            }
#line 920 "cplus.met"
#line 920 "cplus.met"
                            break;
#line 920 "cplus.met"
#line 922 "cplus.met"
                        case PRAGMA_COMMENT_START : 
#line 922 "cplus.met"
                            tokenAhead = 0 ;
#line 922 "cplus.met"
                            CommTerm();
#line 922 "cplus.met"
#line 923 "cplus.met"
#line 924 "cplus.met"
                            {
#line 924 "cplus.met"
                                PPTREE _ptTree0=0,_ptRes0=0;
#line 924 "cplus.met"
                                _ptRes0= MakeTree(CONFIG, 1);
#line 924 "cplus.met"
                                {
#line 924 "cplus.met"
                                    PPTREE _ptTree1=0,_ptRes1=0;
#line 924 "cplus.met"
                                    _ptRes1= MakeTree(COMMENT_START, 1);
#line 924 "cplus.met"
                                    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 924 "cplus.met"
                                    if ( ! TERM_OR_META(STRING,"STRING") || !(BUILD_TERM_META(_ptTree1))) {
#line 924 "cplus.met"
                                        MulFreeTree(5,_ptRes1,_ptTree1,_ptRes0,_ptTree0,retTree);
                                        TOKEN_EXIT(quick_prog_elem_exit,"STRING")
#line 924 "cplus.met"
                                    } else {
#line 924 "cplus.met"
                                        tokenAhead = 0 ;
#line 924 "cplus.met"
                                    }
#line 924 "cplus.met"
                                    ReplaceTree(_ptRes1, 1, _ptTree1);
#line 924 "cplus.met"
                                    _ptTree0=_ptRes1;
#line 924 "cplus.met"
                                }
#line 924 "cplus.met"
                                ReplaceTree(_ptRes0, 1, _ptTree0);
#line 924 "cplus.met"
                                retTree=_ptRes0;
#line 924 "cplus.met"
                            }
#line 924 "cplus.met"
#line 925 "cplus.met"
                            AnalyzeComment (retTree );
#line 925 "cplus.met"
#line 926 "cplus.met"
                            {
#line 926 "cplus.met"
                                _retValue = retTree ;
#line 926 "cplus.met"
                                goto quick_prog_elem_ret;
#line 926 "cplus.met"
                                
#line 926 "cplus.met"
                            }
#line 926 "cplus.met"
#line 926 "cplus.met"
                            break;
#line 926 "cplus.met"
#line 928 "cplus.met"
                        case PRAGMA_COMMENT_MIDDLE : 
#line 928 "cplus.met"
                            tokenAhead = 0 ;
#line 928 "cplus.met"
                            CommTerm();
#line 928 "cplus.met"
#line 929 "cplus.met"
#line 930 "cplus.met"
                            {
#line 930 "cplus.met"
                                PPTREE _ptTree0=0,_ptRes0=0;
#line 930 "cplus.met"
                                _ptRes0= MakeTree(CONFIG, 1);
#line 930 "cplus.met"
                                {
#line 930 "cplus.met"
                                    PPTREE _ptTree1=0,_ptRes1=0;
#line 930 "cplus.met"
                                    _ptRes1= MakeTree(COMMENT_MIDDLE, 1);
#line 930 "cplus.met"
                                    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 930 "cplus.met"
                                    if ( ! TERM_OR_META(STRING,"STRING") || !(BUILD_TERM_META(_ptTree1))) {
#line 930 "cplus.met"
                                        MulFreeTree(5,_ptRes1,_ptTree1,_ptRes0,_ptTree0,retTree);
                                        TOKEN_EXIT(quick_prog_elem_exit,"STRING")
#line 930 "cplus.met"
                                    } else {
#line 930 "cplus.met"
                                        tokenAhead = 0 ;
#line 930 "cplus.met"
                                    }
#line 930 "cplus.met"
                                    ReplaceTree(_ptRes1, 1, _ptTree1);
#line 930 "cplus.met"
                                    _ptTree0=_ptRes1;
#line 930 "cplus.met"
                                }
#line 930 "cplus.met"
                                ReplaceTree(_ptRes0, 1, _ptTree0);
#line 930 "cplus.met"
                                retTree=_ptRes0;
#line 930 "cplus.met"
                            }
#line 930 "cplus.met"
#line 931 "cplus.met"
                            AnalyzeComment (retTree );
#line 931 "cplus.met"
#line 932 "cplus.met"
                            {
#line 932 "cplus.met"
                                _retValue = retTree ;
#line 932 "cplus.met"
                                goto quick_prog_elem_ret;
#line 932 "cplus.met"
                                
#line 932 "cplus.met"
                            }
#line 932 "cplus.met"
#line 932 "cplus.met"
                            break;
#line 932 "cplus.met"
#line 934 "cplus.met"
                        case PRAGMA_COMMENT_END : 
#line 934 "cplus.met"
                            tokenAhead = 0 ;
#line 934 "cplus.met"
                            CommTerm();
#line 934 "cplus.met"
#line 935 "cplus.met"
#line 936 "cplus.met"
                            {
#line 936 "cplus.met"
                                PPTREE _ptTree0=0,_ptRes0=0;
#line 936 "cplus.met"
                                _ptRes0= MakeTree(CONFIG, 1);
#line 936 "cplus.met"
                                {
#line 936 "cplus.met"
                                    PPTREE _ptTree1=0,_ptRes1=0;
#line 936 "cplus.met"
                                    _ptRes1= MakeTree(COMMENT_END, 1);
#line 936 "cplus.met"
                                    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 936 "cplus.met"
                                    if ( ! TERM_OR_META(STRING,"STRING") || !(BUILD_TERM_META(_ptTree1))) {
#line 936 "cplus.met"
                                        MulFreeTree(5,_ptRes1,_ptTree1,_ptRes0,_ptTree0,retTree);
                                        TOKEN_EXIT(quick_prog_elem_exit,"STRING")
#line 936 "cplus.met"
                                    } else {
#line 936 "cplus.met"
                                        tokenAhead = 0 ;
#line 936 "cplus.met"
                                    }
#line 936 "cplus.met"
                                    ReplaceTree(_ptRes1, 1, _ptTree1);
#line 936 "cplus.met"
                                    _ptTree0=_ptRes1;
#line 936 "cplus.met"
                                }
#line 936 "cplus.met"
                                ReplaceTree(_ptRes0, 1, _ptTree0);
#line 936 "cplus.met"
                                retTree=_ptRes0;
#line 936 "cplus.met"
                            }
#line 936 "cplus.met"
#line 937 "cplus.met"
                            AnalyzeComment (retTree );
#line 937 "cplus.met"
#line 938 "cplus.met"
                            {
#line 938 "cplus.met"
                                _retValue = retTree ;
#line 938 "cplus.met"
                                goto quick_prog_elem_ret;
#line 938 "cplus.met"
                                
#line 938 "cplus.met"
                            }
#line 938 "cplus.met"
#line 938 "cplus.met"
                            break;
#line 938 "cplus.met"
#line 940 "cplus.met"
                        case PRAGMA_COMMENT_PLUS : 
#line 940 "cplus.met"
                            tokenAhead = 0 ;
#line 940 "cplus.met"
                            CommTerm();
#line 940 "cplus.met"
#line 941 "cplus.met"
#line 942 "cplus.met"
                            {
#line 942 "cplus.met"
                                PPTREE _ptTree0=0,_ptRes0=0;
#line 942 "cplus.met"
                                _ptRes0= MakeTree(CONFIG, 1);
#line 942 "cplus.met"
                                {
#line 942 "cplus.met"
                                    PPTREE _ptTree1=0,_ptRes1=0;
#line 942 "cplus.met"
                                    _ptRes1= MakeTree(COMMENT_PLUS, 1);
#line 942 "cplus.met"
                                    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 942 "cplus.met"
                                    if ( ! TERM_OR_META(STRING,"STRING") || !(BUILD_TERM_META(_ptTree1))) {
#line 942 "cplus.met"
                                        MulFreeTree(5,_ptRes1,_ptTree1,_ptRes0,_ptTree0,retTree);
                                        TOKEN_EXIT(quick_prog_elem_exit,"STRING")
#line 942 "cplus.met"
                                    } else {
#line 942 "cplus.met"
                                        tokenAhead = 0 ;
#line 942 "cplus.met"
                                    }
#line 942 "cplus.met"
                                    ReplaceTree(_ptRes1, 1, _ptTree1);
#line 942 "cplus.met"
                                    _ptTree0=_ptRes1;
#line 942 "cplus.met"
                                }
#line 942 "cplus.met"
                                ReplaceTree(_ptRes0, 1, _ptTree0);
#line 942 "cplus.met"
                                retTree=_ptRes0;
#line 942 "cplus.met"
                            }
#line 942 "cplus.met"
#line 943 "cplus.met"
                            AnalyzeComment (retTree );
#line 943 "cplus.met"
#line 944 "cplus.met"
                            {
#line 944 "cplus.met"
                                _retValue = retTree ;
#line 944 "cplus.met"
                                goto quick_prog_elem_ret;
#line 944 "cplus.met"
                                
#line 944 "cplus.met"
                            }
#line 944 "cplus.met"
#line 944 "cplus.met"
                            break;
#line 944 "cplus.met"
#line 946 "cplus.met"
                        case PRAGMA_INDENT_FUNCTION_TYPE : 
#line 946 "cplus.met"
                            tokenAhead = 0 ;
#line 946 "cplus.met"
                            CommTerm();
#line 946 "cplus.met"
#line 947 "cplus.met"
#line 948 "cplus.met"
                            {
#line 948 "cplus.met"
                                PPTREE _ptTree0=0,_ptRes0=0;
#line 948 "cplus.met"
                                _ptRes0= MakeTree(CONFIG, 1);
#line 948 "cplus.met"
                                {
#line 948 "cplus.met"
                                    PPTREE _ptTree1=0,_ptRes1=0;
#line 948 "cplus.met"
                                    _ptRes1= MakeTree(INDENT_FUNCTION_TYPE, 1);
#line 948 "cplus.met"
                                    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 948 "cplus.met"
                                    if ( ! TERM_OR_META(IDENT,"IDENT") || !(BUILD_TERM_META(_ptTree1))) {
#line 948 "cplus.met"
                                        MulFreeTree(5,_ptRes1,_ptTree1,_ptRes0,_ptTree0,retTree);
                                        TOKEN_EXIT(quick_prog_elem_exit,"IDENT")
#line 948 "cplus.met"
                                    } else {
#line 948 "cplus.met"
                                        tokenAhead = 0 ;
#line 948 "cplus.met"
                                    }
#line 948 "cplus.met"
                                    ReplaceTree(_ptRes1, 1, _ptTree1);
#line 948 "cplus.met"
                                    _ptTree0=_ptRes1;
#line 948 "cplus.met"
                                }
#line 948 "cplus.met"
                                ReplaceTree(_ptRes0, 1, _ptTree0);
#line 948 "cplus.met"
                                retTree=_ptRes0;
#line 948 "cplus.met"
                            }
#line 948 "cplus.met"
#line 949 "cplus.met"
                            AnalyzeIndentFunctionType (retTree );
#line 949 "cplus.met"
#line 950 "cplus.met"
                            {
#line 950 "cplus.met"
                                _retValue = retTree ;
#line 950 "cplus.met"
                                goto quick_prog_elem_ret;
#line 950 "cplus.met"
                                
#line 950 "cplus.met"
                            }
#line 950 "cplus.met"
#line 950 "cplus.met"
                            break;
#line 950 "cplus.met"
#line 952 "cplus.met"
                        case PRAGMA_FUNC_HEADER : 
#line 952 "cplus.met"
                            tokenAhead = 0 ;
#line 952 "cplus.met"
                            CommTerm();
#line 952 "cplus.met"
#line 953 "cplus.met"
#line 954 "cplus.met"
                            {
#line 954 "cplus.met"
                                PPTREE _ptTree0=0,_ptRes0=0;
#line 954 "cplus.met"
                                _ptRes0= MakeTree(CONFIG, 1);
#line 954 "cplus.met"
                                {
#line 954 "cplus.met"
                                    PPTREE _ptTree1=0,_ptRes1=0;
#line 954 "cplus.met"
                                    _ptRes1= MakeTree(FUNC_HEADER, 1);
#line 954 "cplus.met"
                                    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 954 "cplus.met"
                                    if ( ! TERM_OR_META(STRING,"STRING") || !(BUILD_TERM_META(_ptTree1))) {
#line 954 "cplus.met"
                                        MulFreeTree(5,_ptRes1,_ptTree1,_ptRes0,_ptTree0,retTree);
                                        TOKEN_EXIT(quick_prog_elem_exit,"STRING")
#line 954 "cplus.met"
                                    } else {
#line 954 "cplus.met"
                                        tokenAhead = 0 ;
#line 954 "cplus.met"
                                    }
#line 954 "cplus.met"
                                    ReplaceTree(_ptRes1, 1, _ptTree1);
#line 954 "cplus.met"
                                    _ptTree0=_ptRes1;
#line 954 "cplus.met"
                                }
#line 954 "cplus.met"
                                ReplaceTree(_ptRes0, 1, _ptTree0);
#line 954 "cplus.met"
                                retTree=_ptRes0;
#line 954 "cplus.met"
                            }
#line 954 "cplus.met"
#line 955 "cplus.met"
                            AnalyzeFuncHeader (retTree );
#line 955 "cplus.met"
#line 956 "cplus.met"
                            {
#line 956 "cplus.met"
                                _retValue = retTree ;
#line 956 "cplus.met"
                                goto quick_prog_elem_ret;
#line 956 "cplus.met"
                                
#line 956 "cplus.met"
                            }
#line 956 "cplus.met"
#line 956 "cplus.met"
                            break;
#line 956 "cplus.met"
#line 958 "cplus.met"
                        case PRAGMA_PARAMETERS : 
#line 958 "cplus.met"
                            tokenAhead = 0 ;
#line 958 "cplus.met"
                            CommTerm();
#line 958 "cplus.met"
#line 959 "cplus.met"
#line 960 "cplus.met"
                            {
#line 960 "cplus.met"
                                PPTREE _ptTree0=0,_ptRes0=0;
#line 960 "cplus.met"
                                _ptRes0= MakeTree(CONFIG, 1);
#line 960 "cplus.met"
                                {
#line 960 "cplus.met"
                                    PPTREE _ptTree1=0,_ptRes1=0;
#line 960 "cplus.met"
                                    _ptRes1= MakeTree(PARAMETERS, 1);
#line 960 "cplus.met"
                                    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 960 "cplus.met"
                                    if ( ! TERM_OR_META(STRING,"STRING") || !(BUILD_TERM_META(_ptTree1))) {
#line 960 "cplus.met"
                                        MulFreeTree(5,_ptRes1,_ptTree1,_ptRes0,_ptTree0,retTree);
                                        TOKEN_EXIT(quick_prog_elem_exit,"STRING")
#line 960 "cplus.met"
                                    } else {
#line 960 "cplus.met"
                                        tokenAhead = 0 ;
#line 960 "cplus.met"
                                    }
#line 960 "cplus.met"
                                    ReplaceTree(_ptRes1, 1, _ptTree1);
#line 960 "cplus.met"
                                    _ptTree0=_ptRes1;
#line 960 "cplus.met"
                                }
#line 960 "cplus.met"
                                ReplaceTree(_ptRes0, 1, _ptTree0);
#line 960 "cplus.met"
                                retTree=_ptRes0;
#line 960 "cplus.met"
                            }
#line 960 "cplus.met"
#line 961 "cplus.met"
                            AnalyzeParameters (retTree );
#line 961 "cplus.met"
#line 962 "cplus.met"
                            {
#line 962 "cplus.met"
                                _retValue = retTree ;
#line 962 "cplus.met"
                                goto quick_prog_elem_ret;
#line 962 "cplus.met"
                                
#line 962 "cplus.met"
                            }
#line 962 "cplus.met"
#line 962 "cplus.met"
                            break;
#line 962 "cplus.met"
#line 964 "cplus.met"
                        default : 
#line 964 "cplus.met"
#line 964 "cplus.met"
                            {
#line 964 "cplus.met"
                                PPTREE _ptTree0=0;
#line 964 "cplus.met"
                                if ( (_ptTree0=NQUICK_CALL(_Tak(other_config)(error_free), 106, cplus))== (PPTREE) -1 ) {
#line 964 "cplus.met"
                                    MulFreeTree(2,_ptTree0,retTree);
                                    PROG_EXIT(quick_prog_elem_exit,"quick_prog_elem")
#line 964 "cplus.met"
                                }
#line 964 "cplus.met"
                                _retValue =_ptTree0;
#line 964 "cplus.met"
                                goto quick_prog_elem_ret;
#line 964 "cplus.met"
                            }
#line 964 "cplus.met"
                            break;
#line 964 "cplus.met"
                    }
#line 964 "cplus.met"
#line 964 "cplus.met"
                    break;
#line 964 "cplus.met"
#line 964 "cplus.met"
                default : 
#line 964 "cplus.met"
#line 964 "cplus.met"
                    break;
#line 964 "cplus.met"
            }
#line 964 "cplus.met"
#line 969 "cplus.met"
            {
#line 969 "cplus.met"
                PPTREE _ptTree0=0;
#line 969 "cplus.met"
                {
#line 969 "cplus.met"
                    PPTREE _ptRes1=0;
#line 969 "cplus.met"
                    _ptRes1= MakeTree(IDENT, 1);
#line 969 "cplus.met"
                    _ptTree0=_ptRes1;
#line 969 "cplus.met"
                }
#line 969 "cplus.met"
                _retValue =_ptTree0;
#line 969 "cplus.met"
                goto quick_prog_elem_ret;
#line 969 "cplus.met"
            }
#line 969 "cplus.met"
#line 969 "cplus.met"
            break;
#line 969 "cplus.met"
#line 971 "cplus.met"
        default : 
#line 971 "cplus.met"
            tokenAhead = 0 ;
#line 971 "cplus.met"
            CommTerm();
#line 971 "cplus.met"
#line 972 "cplus.met"
#line 973 "cplus.met"
            if ((tokenAhead && tokenAhead != -1)|| (c != EOF)){
#line 973 "cplus.met"
#line 974 "cplus.met"
#line 975 "cplus.met"
                (tokenAhead == 5|| (LexEndLine(),TRACE_LEX(1)));
#line 975 "cplus.met"
                if ( ! TERM_OR_META(END_LINE,"END_LINE") || !(CommTerm(),1)) {
#line 975 "cplus.met"
                    MulFreeTree(1,retTree);
                    TOKEN_EXIT(quick_prog_elem_exit,"END_LINE")
#line 975 "cplus.met"
                } else {
#line 975 "cplus.met"
                    tokenAhead = 0 ;
#line 975 "cplus.met"
                }
#line 975 "cplus.met"
#line 976 "cplus.met"
                 goto debut;
#line 976 "cplus.met"
#line 976 "cplus.met"
#line 976 "cplus.met"
            } else {
#line 976 "cplus.met"
#line 979 "cplus.met"
                {
#line 979 "cplus.met"
                    _retValue = retTree ;
#line 979 "cplus.met"
                    goto quick_prog_elem_ret;
#line 979 "cplus.met"
                    
#line 979 "cplus.met"
                }
#line 979 "cplus.met"
            }
#line 979 "cplus.met"
#line 979 "cplus.met"
            break;
#line 979 "cplus.met"
    }
#line 979 "cplus.met"
#line 979 "cplus.met"
#line 981 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 981 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 981 "cplus.met"
return((PPTREE) 0);
#line 981 "cplus.met"

#line 981 "cplus.met"
quick_prog_elem_exit :
#line 981 "cplus.met"

#line 981 "cplus.met"
    _Debug = TRACE_RULE("quick_prog_elem",TRACE_EXIT,(PPTREE)0);
#line 981 "cplus.met"
    _funcLevel--;
#line 981 "cplus.met"
    return((PPTREE) -1) ;
#line 981 "cplus.met"

#line 981 "cplus.met"
quick_prog_elem_ret :
#line 981 "cplus.met"
    
#line 981 "cplus.met"
    _Debug = TRACE_RULE("quick_prog_elem",TRACE_RETURN,_retValue);
#line 981 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 981 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 981 "cplus.met"
    return _retValue ;
#line 981 "cplus.met"
}
#line 981 "cplus.met"

#line 981 "cplus.met"
