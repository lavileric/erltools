/*************************************************************************/
/*                                                                       */
/*        Produced by MetaGen version 2.0  -    1989-2006                 */
/*       Syntaxic Analyzer Meta Generator developped by                  */
/*                  Eric Lavillonniere                                   */
/*                                                                       */
/*************************************************************************/

#include "token.h"
#include "cplus.h"


#line 1865 "cplus.met"
PPTREE cplus::base_specifier_elem ( int error_free)
#line 1865 "cplus.met"
{
#line 1865 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 1865 "cplus.met"
    int _value,_nbPre = 0 ;
#line 1865 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 1865 "cplus.met"
    int _Debug = TRACE_RULE("base_specifier_elem",TRACE_ENTER,(PPTREE)0);
#line 1865 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 1865 "cplus.met"
#line 1865 "cplus.met"
    PPTREE ret = (PPTREE) 0;
#line 1865 "cplus.met"
#line 1867 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 1867 "cplus.met"
    switch( lexEl.Value) {
#line 1867 "cplus.met"
#line 1868 "cplus.met"
        case PRIVATE : 
#line 1868 "cplus.met"
            tokenAhead = 0 ;
#line 1868 "cplus.met"
            CommTerm();
#line 1868 "cplus.met"
#line 1868 "cplus.met"
            {
#line 1868 "cplus.met"
                PPTREE _ptTree0=0;
#line 1868 "cplus.met"
                {
#line 1868 "cplus.met"
                    PPTREE _ptTree1=0,_ptRes1=0;
#line 1868 "cplus.met"
                    _ptRes1= MakeTree(PROTECT, 2);
#line 1868 "cplus.met"
                    ReplaceTree(_ptRes1, 1, MakeString ("private"));
#line 1868 "cplus.met"
                    if ( (_ptTree1=NQUICK_CALL(_Tak(base_specifier_elem)(error_free), 17, cplus))== (PPTREE) -1 ) {
#line 1868 "cplus.met"
                        MulFreeTree(4,_ptRes1,_ptTree1,_ptTree0,ret);
                        PROG_EXIT(base_specifier_elem_exit,"base_specifier_elem")
#line 1868 "cplus.met"
                    }
#line 1868 "cplus.met"
                    ReplaceTree(_ptRes1, 2, _ptTree1);
#line 1868 "cplus.met"
                    _ptTree0=_ptRes1;
#line 1868 "cplus.met"
                }
#line 1868 "cplus.met"
                _retValue =_ptTree0;
#line 1868 "cplus.met"
                goto base_specifier_elem_ret;
#line 1868 "cplus.met"
            }
#line 1868 "cplus.met"
            break;
#line 1868 "cplus.met"
#line 1870 "cplus.met"
        case PROTECTED : 
#line 1870 "cplus.met"
            tokenAhead = 0 ;
#line 1870 "cplus.met"
            CommTerm();
#line 1870 "cplus.met"
#line 1870 "cplus.met"
            {
#line 1870 "cplus.met"
                PPTREE _ptTree0=0;
#line 1870 "cplus.met"
                {
#line 1870 "cplus.met"
                    PPTREE _ptTree1=0,_ptRes1=0;
#line 1870 "cplus.met"
                    _ptRes1= MakeTree(PROTECT, 2);
#line 1870 "cplus.met"
                    ReplaceTree(_ptRes1, 1, MakeString ("protected"));
#line 1870 "cplus.met"
                    if ( (_ptTree1=NQUICK_CALL(_Tak(base_specifier_elem)(error_free), 17, cplus))== (PPTREE) -1 ) {
#line 1870 "cplus.met"
                        MulFreeTree(4,_ptRes1,_ptTree1,_ptTree0,ret);
                        PROG_EXIT(base_specifier_elem_exit,"base_specifier_elem")
#line 1870 "cplus.met"
                    }
#line 1870 "cplus.met"
                    ReplaceTree(_ptRes1, 2, _ptTree1);
#line 1870 "cplus.met"
                    _ptTree0=_ptRes1;
#line 1870 "cplus.met"
                }
#line 1870 "cplus.met"
                _retValue =_ptTree0;
#line 1870 "cplus.met"
                goto base_specifier_elem_ret;
#line 1870 "cplus.met"
            }
#line 1870 "cplus.met"
            break;
#line 1870 "cplus.met"
#line 1872 "cplus.met"
        case PUBLIC : 
#line 1872 "cplus.met"
            tokenAhead = 0 ;
#line 1872 "cplus.met"
            CommTerm();
#line 1872 "cplus.met"
#line 1872 "cplus.met"
            {
#line 1872 "cplus.met"
                PPTREE _ptTree0=0;
#line 1872 "cplus.met"
                {
#line 1872 "cplus.met"
                    PPTREE _ptTree1=0,_ptRes1=0;
#line 1872 "cplus.met"
                    _ptRes1= MakeTree(PROTECT, 2);
#line 1872 "cplus.met"
                    ReplaceTree(_ptRes1, 1, MakeString ("public"));
#line 1872 "cplus.met"
                    if ( (_ptTree1=NQUICK_CALL(_Tak(base_specifier_elem)(error_free), 17, cplus))== (PPTREE) -1 ) {
#line 1872 "cplus.met"
                        MulFreeTree(4,_ptRes1,_ptTree1,_ptTree0,ret);
                        PROG_EXIT(base_specifier_elem_exit,"base_specifier_elem")
#line 1872 "cplus.met"
                    }
#line 1872 "cplus.met"
                    ReplaceTree(_ptRes1, 2, _ptTree1);
#line 1872 "cplus.met"
                    _ptTree0=_ptRes1;
#line 1872 "cplus.met"
                }
#line 1872 "cplus.met"
                _retValue =_ptTree0;
#line 1872 "cplus.met"
                goto base_specifier_elem_ret;
#line 1872 "cplus.met"
            }
#line 1872 "cplus.met"
            break;
#line 1872 "cplus.met"
#line 1874 "cplus.met"
        case VIRTUAL : 
#line 1874 "cplus.met"
            tokenAhead = 0 ;
#line 1874 "cplus.met"
            CommTerm();
#line 1874 "cplus.met"
#line 1874 "cplus.met"
            {
#line 1874 "cplus.met"
                PPTREE _ptTree0=0;
#line 1874 "cplus.met"
                {
#line 1874 "cplus.met"
                    PPTREE _ptTree1=0,_ptRes1=0;
#line 1874 "cplus.met"
                    _ptRes1= MakeTree(PROTECT, 2);
#line 1874 "cplus.met"
                    ReplaceTree(_ptRes1, 1, MakeString ("virtual"));
#line 1874 "cplus.met"
                    if ( (_ptTree1=NQUICK_CALL(_Tak(base_specifier_elem)(error_free), 17, cplus))== (PPTREE) -1 ) {
#line 1874 "cplus.met"
                        MulFreeTree(4,_ptRes1,_ptTree1,_ptTree0,ret);
                        PROG_EXIT(base_specifier_elem_exit,"base_specifier_elem")
#line 1874 "cplus.met"
                    }
#line 1874 "cplus.met"
                    ReplaceTree(_ptRes1, 2, _ptTree1);
#line 1874 "cplus.met"
                    _ptTree0=_ptRes1;
#line 1874 "cplus.met"
                }
#line 1874 "cplus.met"
                _retValue =_ptTree0;
#line 1874 "cplus.met"
                goto base_specifier_elem_ret;
#line 1874 "cplus.met"
            }
#line 1874 "cplus.met"
            break;
#line 1874 "cplus.met"
#line 1874 "cplus.met"
        default : 
#line 1874 "cplus.met"
#line 1874 "cplus.met"
            break;
#line 1874 "cplus.met"
    }
#line 1874 "cplus.met"
#line 1878 "cplus.met"
    if ( (ret=NQUICK_CALL(_Tak(complete_class_name)(error_free), 25, cplus))== (PPTREE) -1 ) {
#line 1878 "cplus.met"
        MulFreeTree(1,ret);
        PROG_EXIT(base_specifier_elem_exit,"base_specifier_elem")
#line 1878 "cplus.met"
    }
#line 1878 "cplus.met"
#line 1879 "cplus.met"
    {
#line 1879 "cplus.met"
        _retValue = ret ;
#line 1879 "cplus.met"
        goto base_specifier_elem_ret;
#line 1879 "cplus.met"
        
#line 1879 "cplus.met"
    }
#line 1879 "cplus.met"
#line 1879 "cplus.met"
#line 1879 "cplus.met"

#line 1880 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1880 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 1880 "cplus.met"
return((PPTREE) 0);
#line 1880 "cplus.met"

#line 1880 "cplus.met"
base_specifier_elem_exit :
#line 1880 "cplus.met"

#line 1880 "cplus.met"
    _Debug = TRACE_RULE("base_specifier_elem",TRACE_EXIT,(PPTREE)0);
#line 1880 "cplus.met"
    _funcLevel--;
#line 1880 "cplus.met"
    return((PPTREE) -1) ;
#line 1880 "cplus.met"

#line 1880 "cplus.met"
base_specifier_elem_ret :
#line 1880 "cplus.met"
    
#line 1880 "cplus.met"
    _Debug = TRACE_RULE("base_specifier_elem",TRACE_RETURN,_retValue);
#line 1880 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1880 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 1880 "cplus.met"
    return _retValue ;
#line 1880 "cplus.met"
}
#line 1880 "cplus.met"

#line 1880 "cplus.met"
#line 3589 "cplus.met"
PPTREE cplus::bidon ( int error_free)
#line 3589 "cplus.met"
{
#line 3589 "cplus.met"
    int  _oldnoString = noString;
#line 3589 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 3589 "cplus.met"
    int _value,_nbPre = 0 ;
#line 3589 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 3589 "cplus.met"
    int _Debug = TRACE_RULE("bidon",TRACE_ENTER,(PPTREE)0);
#line 3589 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 3589 "cplus.met"
#line 3590 "cplus.met"
    {
#line 3590 "cplus.met"
        noString = 1 ;
#line 3590 "cplus.met"
#line 3591 "cplus.met"
#line 3591 "cplus.met"
        noString =  _oldnoString;
#line 3591 "cplus.met"
    }
#line 3591 "cplus.met"
#line 3591 "cplus.met"
#line 3592 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 3592 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 3592 "cplus.met"
noString =  _oldnoString;
#line 3592 "cplus.met"
return((PPTREE) 0);
#line 3592 "cplus.met"

#line 3592 "cplus.met"
bidon_exit :
#line 3592 "cplus.met"

#line 3592 "cplus.met"
    _Debug = TRACE_RULE("bidon",TRACE_EXIT,(PPTREE)0);
#line 3592 "cplus.met"
    _funcLevel--;
#line 3592 "cplus.met"
    noString =  _oldnoString;
#line 3592 "cplus.met"
    return((PPTREE) -1) ;
#line 3592 "cplus.met"

#line 3592 "cplus.met"
bidon_ret :
#line 3592 "cplus.met"
    
#line 3592 "cplus.met"
    _Debug = TRACE_RULE("bidon",TRACE_RETURN,_retValue);
#line 3592 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 3592 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 3592 "cplus.met"
    noString =  _oldnoString;
#line 3592 "cplus.met"
    return _retValue ;
#line 3592 "cplus.met"
}
#line 3592 "cplus.met"

#line 3592 "cplus.met"
#line 2548 "cplus.met"
PPTREE cplus::bit_field_decl ( int error_free)
#line 2548 "cplus.met"
{
#line 2548 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 2548 "cplus.met"
    int _value,_nbPre = 0 ;
#line 2548 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 2548 "cplus.met"
    int _Debug = TRACE_RULE("bit_field_decl",TRACE_ENTER,(PPTREE)0);
#line 2548 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 2548 "cplus.met"
#line 2548 "cplus.met"
    PPTREE retTree = (PPTREE) 0;
#line 2548 "cplus.met"
#line 2550 "cplus.met"
    {
#line 2550 "cplus.met"
        PPTREE _ptTree0=0,_ptRes0=0;
#line 2550 "cplus.met"
        _ptRes0= MakeTree(TYP_BIT, 2);
#line 2550 "cplus.met"
        {
#line 2550 "cplus.met"
            PPTREE _ptTree1=0,_ptRes1=0;
#line 2550 "cplus.met"
            _ptRes1= MakeTree(IDENT, 1);
#line 2550 "cplus.met"
            (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 2550 "cplus.met"
            if ( ! TERM_OR_META(IDENT,"IDENT") || !(BUILD_TERM_META(_ptTree1))) {
#line 2550 "cplus.met"
                MulFreeTree(5,_ptRes1,_ptTree1,_ptRes0,_ptTree0,retTree);
                TOKEN_EXIT(bit_field_decl_exit,"IDENT")
#line 2550 "cplus.met"
            } else {
#line 2550 "cplus.met"
                tokenAhead = 0 ;
#line 2550 "cplus.met"
            }
#line 2550 "cplus.met"
            ReplaceTree(_ptRes1, 1, _ptTree1);
#line 2550 "cplus.met"
            _ptTree0=_ptRes1;
#line 2550 "cplus.met"
        }
#line 2550 "cplus.met"
        ReplaceTree(_ptRes0, 1, _ptTree0);
#line 2550 "cplus.met"
        retTree=_ptRes0;
#line 2550 "cplus.met"
    }
#line 2550 "cplus.met"
#line 2551 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 2551 "cplus.met"
    if (  !SEE_TOKEN( DPOI,":") || !(CommTerm(),1)) {
#line 2551 "cplus.met"
        MulFreeTree(1,retTree);
        TOKEN_EXIT(bit_field_decl_exit,":")
#line 2551 "cplus.met"
    } else {
#line 2551 "cplus.met"
        tokenAhead = 0 ;
#line 2551 "cplus.met"
    }
#line 2551 "cplus.met"
#line 2552 "cplus.met"
    {
#line 2552 "cplus.met"
        PPTREE _ptTree0=0;
#line 2552 "cplus.met"
        {
#line 2552 "cplus.met"
            PPTREE _ptTree1=0;
#line 2552 "cplus.met"
            if ( (_ptTree1=NQUICK_CALL(_Tak(assignment_expression)(error_free), 15, cplus))== (PPTREE) -1 ) {
#line 2552 "cplus.met"
                MulFreeTree(3,_ptTree1,_ptTree0,retTree);
                PROG_EXIT(bit_field_decl_exit,"bit_field_decl")
#line 2552 "cplus.met"
            }
#line 2552 "cplus.met"
            _ptTree0=ReplaceTree(retTree , 2 , _ptTree1);
#line 2552 "cplus.met"
        }
#line 2552 "cplus.met"
        _retValue =_ptTree0;
#line 2552 "cplus.met"
        goto bit_field_decl_ret;
#line 2552 "cplus.met"
    }
#line 2552 "cplus.met"
#line 2552 "cplus.met"
#line 2552 "cplus.met"

#line 2553 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2553 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 2553 "cplus.met"
return((PPTREE) 0);
#line 2553 "cplus.met"

#line 2553 "cplus.met"
bit_field_decl_exit :
#line 2553 "cplus.met"

#line 2553 "cplus.met"
    _Debug = TRACE_RULE("bit_field_decl",TRACE_EXIT,(PPTREE)0);
#line 2553 "cplus.met"
    _funcLevel--;
#line 2553 "cplus.met"
    return((PPTREE) -1) ;
#line 2553 "cplus.met"

#line 2553 "cplus.met"
bit_field_decl_ret :
#line 2553 "cplus.met"
    
#line 2553 "cplus.met"
    _Debug = TRACE_RULE("bit_field_decl",TRACE_RETURN,_retValue);
#line 2553 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2553 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 2553 "cplus.met"
    return _retValue ;
#line 2553 "cplus.met"
}
#line 2553 "cplus.met"

#line 2553 "cplus.met"
#line 2739 "cplus.met"
PPTREE cplus::cast_expression ( int error_free)
#line 2739 "cplus.met"
{
#line 2739 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 2739 "cplus.met"
    int _value,_nbPre = 0 ;
#line 2739 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 2739 "cplus.met"
    int _Debug = TRACE_RULE("cast_expression",TRACE_ENTER,(PPTREE)0);
#line 2739 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 2739 "cplus.met"
#line 2739 "cplus.met"
    PPTREE retTree = (PPTREE) 0;
#line 2739 "cplus.met"
#line 2741 "cplus.met"
    if (NPUSH_CALL_AFF_VERIF(retTree = ,_Tak(cast_expression_value), 20, cplus)){
#line 2741 "cplus.met"
#line 2742 "cplus.met"
        {
#line 2742 "cplus.met"
            _retValue = retTree ;
#line 2742 "cplus.met"
            goto cast_expression_ret;
#line 2742 "cplus.met"
            
#line 2742 "cplus.met"
        }
#line 2742 "cplus.met"
    } else {
#line 2742 "cplus.met"
#line 2744 "cplus.met"
        {
#line 2744 "cplus.met"
            PPTREE _ptTree0=0;
#line 2744 "cplus.met"
            if ( (_ptTree0=NQUICK_CALL(_Tak(unary_expression)(error_free), 145, cplus))== (PPTREE) -1 ) {
#line 2744 "cplus.met"
                MulFreeTree(2,_ptTree0,retTree);
                PROG_EXIT(cast_expression_exit,"cast_expression")
#line 2744 "cplus.met"
            }
#line 2744 "cplus.met"
            _retValue =_ptTree0;
#line 2744 "cplus.met"
            goto cast_expression_ret;
#line 2744 "cplus.met"
        }
#line 2744 "cplus.met"
    }
#line 2744 "cplus.met"
#line 2744 "cplus.met"
#line 2744 "cplus.met"

#line 2745 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2745 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 2745 "cplus.met"
return((PPTREE) 0);
#line 2745 "cplus.met"

#line 2745 "cplus.met"
cast_expression_exit :
#line 2745 "cplus.met"

#line 2745 "cplus.met"
    _Debug = TRACE_RULE("cast_expression",TRACE_EXIT,(PPTREE)0);
#line 2745 "cplus.met"
    _funcLevel--;
#line 2745 "cplus.met"
    return((PPTREE) -1) ;
#line 2745 "cplus.met"

#line 2745 "cplus.met"
cast_expression_ret :
#line 2745 "cplus.met"
    
#line 2745 "cplus.met"
    _Debug = TRACE_RULE("cast_expression",TRACE_RETURN,_retValue);
#line 2745 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2745 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 2745 "cplus.met"
    return _retValue ;
#line 2745 "cplus.met"
}
#line 2745 "cplus.met"

#line 2745 "cplus.met"
#line 2731 "cplus.met"
PPTREE cplus::cast_expression_value ( int error_free)
#line 2731 "cplus.met"
{
#line 2731 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 2731 "cplus.met"
    int _value,_nbPre = 0 ;
#line 2731 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 2731 "cplus.met"
    int _Debug = TRACE_RULE("cast_expression_value",TRACE_ENTER,(PPTREE)0);
#line 2731 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 2731 "cplus.met"
#line 2731 "cplus.met"
    PPTREE ret = (PPTREE) 0;
#line 2731 "cplus.met"
#line 2733 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 2733 "cplus.met"
    if (  !SEE_TOKEN( POUV,"(") || !(CommTerm(),1)) {
#line 2733 "cplus.met"
        MulFreeTree(1,ret);
        TOKEN_EXIT(cast_expression_value_exit,"(")
#line 2733 "cplus.met"
    } else {
#line 2733 "cplus.met"
        tokenAhead = 0 ;
#line 2733 "cplus.met"
    }
#line 2733 "cplus.met"
#line 2734 "cplus.met"
    if ( (ret=NQUICK_CALL(_Tak(type_name)(error_free), 141, cplus))== (PPTREE) -1 ) {
#line 2734 "cplus.met"
        MulFreeTree(1,ret);
        PROG_EXIT(cast_expression_value_exit,"cast_expression_value")
#line 2734 "cplus.met"
    }
#line 2734 "cplus.met"
#line 2735 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 2735 "cplus.met"
    if (  !SEE_TOKEN( PFER,")") || !(CommTerm(),1)) {
#line 2735 "cplus.met"
        MulFreeTree(1,ret);
        TOKEN_EXIT(cast_expression_value_exit,")")
#line 2735 "cplus.met"
    } else {
#line 2735 "cplus.met"
        tokenAhead = 0 ;
#line 2735 "cplus.met"
    }
#line 2735 "cplus.met"
#line 2736 "cplus.met"
    {
#line 2736 "cplus.met"
        PPTREE _ptTree0=0;
#line 2736 "cplus.met"
        {
#line 2736 "cplus.met"
            PPTREE _ptTree1=0,_ptRes1=0;
#line 2736 "cplus.met"
            _ptRes1= MakeTree(CAST, 2);
#line 2736 "cplus.met"
            ReplaceTree(_ptRes1, 1, ret );
#line 2736 "cplus.met"
            if ( (_ptTree1=NQUICK_CALL(_Tak(cast_expression)(error_free), 19, cplus))== (PPTREE) -1 ) {
#line 2736 "cplus.met"
                MulFreeTree(4,_ptRes1,_ptTree1,_ptTree0,ret);
                PROG_EXIT(cast_expression_value_exit,"cast_expression_value")
#line 2736 "cplus.met"
            }
#line 2736 "cplus.met"
            ReplaceTree(_ptRes1, 2, _ptTree1);
#line 2736 "cplus.met"
            _ptTree0=_ptRes1;
#line 2736 "cplus.met"
        }
#line 2736 "cplus.met"
        _retValue =_ptTree0;
#line 2736 "cplus.met"
        goto cast_expression_value_ret;
#line 2736 "cplus.met"
    }
#line 2736 "cplus.met"
#line 2736 "cplus.met"
#line 2736 "cplus.met"

#line 2737 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2737 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 2737 "cplus.met"
return((PPTREE) 0);
#line 2737 "cplus.met"

#line 2737 "cplus.met"
cast_expression_value_exit :
#line 2737 "cplus.met"

#line 2737 "cplus.met"
    _Debug = TRACE_RULE("cast_expression_value",TRACE_EXIT,(PPTREE)0);
#line 2737 "cplus.met"
    _funcLevel--;
#line 2737 "cplus.met"
    return((PPTREE) -1) ;
#line 2737 "cplus.met"

#line 2737 "cplus.met"
cast_expression_value_ret :
#line 2737 "cplus.met"
    
#line 2737 "cplus.met"
    _Debug = TRACE_RULE("cast_expression_value",TRACE_RETURN,_retValue);
#line 2737 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2737 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 2737 "cplus.met"
    return _retValue ;
#line 2737 "cplus.met"
}
#line 2737 "cplus.met"

#line 2737 "cplus.met"
#line 1975 "cplus.met"
PPTREE cplus::catch_unit ( int error_free)
#line 1975 "cplus.met"
{
#line 1975 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 1975 "cplus.met"
    int _value,_nbPre = 0 ;
#line 1975 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 1975 "cplus.met"
    int _Debug = TRACE_RULE("catch_unit",TRACE_ENTER,(PPTREE)0);
#line 1975 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 1975 "cplus.met"
#line 1976 "cplus.met"
    (tokenAhead == 13|| (specific(),TRACE_LEX(1)));
#line 1976 "cplus.met"
    switch( lexEl.Value) {
#line 1976 "cplus.met"
#line 1977 "cplus.met"
        case META : 
#line 1977 "cplus.met"
        case CATCH_UPPER : 
#line 1977 "cplus.met"
#line 1977 "cplus.met"
            {
#line 1977 "cplus.met"
                PPTREE _ptTree0=0;
#line 1977 "cplus.met"
                {
#line 1977 "cplus.met"
                    PPTREE _ptTree1=0,_ptRes1=0;
#line 1977 "cplus.met"
                    _ptRes1= MakeTree(CATCH, 2);
#line 1977 "cplus.met"
                    if ( (_ptTree1=NQUICK_CALL(_Tak(macro)(error_free), 89, cplus))== (PPTREE) -1 ) {
#line 1977 "cplus.met"
                        MulFreeTree(3,_ptRes1,_ptTree1,_ptTree0);
                        PROG_EXIT(catch_unit_exit,"catch_unit")
#line 1977 "cplus.met"
                    }
#line 1977 "cplus.met"
                    ReplaceTree(_ptRes1, 1, _ptTree1);
#line 1977 "cplus.met"
                    if ( (_ptTree1=NQUICK_CALL(_Tak(compound_statement)(error_free), 26, cplus))== (PPTREE) -1 ) {
#line 1977 "cplus.met"
                        MulFreeTree(3,_ptRes1,_ptTree1,_ptTree0);
                        PROG_EXIT(catch_unit_exit,"catch_unit")
#line 1977 "cplus.met"
                    }
#line 1977 "cplus.met"
                    ReplaceTree(_ptRes1, 2, _ptTree1);
#line 1977 "cplus.met"
                    _ptTree0=_ptRes1;
#line 1977 "cplus.met"
                }
#line 1977 "cplus.met"
                _retValue =_ptTree0;
#line 1977 "cplus.met"
                goto catch_unit_ret;
#line 1977 "cplus.met"
            }
#line 1977 "cplus.met"
            break;
#line 1977 "cplus.met"
#line 1979 "cplus.met"
        case CATCH_ALL : 
#line 1979 "cplus.met"
#line 1979 "cplus.met"
            {
#line 1979 "cplus.met"
                PPTREE _ptTree0=0;
#line 1979 "cplus.met"
                {
#line 1979 "cplus.met"
                    PPTREE _ptTree1=0,_ptRes1=0;
#line 1979 "cplus.met"
                    _ptRes1= MakeTree(CATCH, 2);
#line 1979 "cplus.met"
                    if ( (_ptTree1=NQUICK_CALL(_Tak(macro)(error_free), 89, cplus))== (PPTREE) -1 ) {
#line 1979 "cplus.met"
                        MulFreeTree(3,_ptRes1,_ptTree1,_ptTree0);
                        PROG_EXIT(catch_unit_exit,"catch_unit")
#line 1979 "cplus.met"
                    }
#line 1979 "cplus.met"
                    ReplaceTree(_ptRes1, 1, _ptTree1);
#line 1979 "cplus.met"
                    if ( (_ptTree1=NQUICK_CALL(_Tak(compound_statement)(error_free), 26, cplus))== (PPTREE) -1 ) {
#line 1979 "cplus.met"
                        MulFreeTree(3,_ptRes1,_ptTree1,_ptTree0);
                        PROG_EXIT(catch_unit_exit,"catch_unit")
#line 1979 "cplus.met"
                    }
#line 1979 "cplus.met"
                    ReplaceTree(_ptRes1, 2, _ptTree1);
#line 1979 "cplus.met"
                    _ptTree0=_ptRes1;
#line 1979 "cplus.met"
                }
#line 1979 "cplus.met"
                _retValue =_ptTree0;
#line 1979 "cplus.met"
                goto catch_unit_ret;
#line 1979 "cplus.met"
            }
#line 1979 "cplus.met"
            break;
#line 1979 "cplus.met"
#line 1981 "cplus.met"
        case AND_CATCH : 
#line 1981 "cplus.met"
#line 1981 "cplus.met"
            {
#line 1981 "cplus.met"
                PPTREE _ptTree0=0;
#line 1981 "cplus.met"
                {
#line 1981 "cplus.met"
                    PPTREE _ptTree1=0,_ptRes1=0;
#line 1981 "cplus.met"
                    _ptRes1= MakeTree(CATCH, 2);
#line 1981 "cplus.met"
                    if ( (_ptTree1=NQUICK_CALL(_Tak(macro)(error_free), 89, cplus))== (PPTREE) -1 ) {
#line 1981 "cplus.met"
                        MulFreeTree(3,_ptRes1,_ptTree1,_ptTree0);
                        PROG_EXIT(catch_unit_exit,"catch_unit")
#line 1981 "cplus.met"
                    }
#line 1981 "cplus.met"
                    ReplaceTree(_ptRes1, 1, _ptTree1);
#line 1981 "cplus.met"
                    if ( (_ptTree1=NQUICK_CALL(_Tak(compound_statement)(error_free), 26, cplus))== (PPTREE) -1 ) {
#line 1981 "cplus.met"
                        MulFreeTree(3,_ptRes1,_ptTree1,_ptTree0);
                        PROG_EXIT(catch_unit_exit,"catch_unit")
#line 1981 "cplus.met"
                    }
#line 1981 "cplus.met"
                    ReplaceTree(_ptRes1, 2, _ptTree1);
#line 1981 "cplus.met"
                    _ptTree0=_ptRes1;
#line 1981 "cplus.met"
                }
#line 1981 "cplus.met"
                _retValue =_ptTree0;
#line 1981 "cplus.met"
                goto catch_unit_ret;
#line 1981 "cplus.met"
            }
#line 1981 "cplus.met"
            break;
#line 1981 "cplus.met"
        default :
#line 1981 "cplus.met"
            CASE_EXIT(catch_unit_exit,"either CATCH_UPPER or CATCH_ALL or AND_CATCH")
#line 1981 "cplus.met"
            break;
#line 1981 "cplus.met"
    }
#line 1981 "cplus.met"
#line 1981 "cplus.met"
#line 1983 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1983 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 1983 "cplus.met"
return((PPTREE) 0);
#line 1983 "cplus.met"

#line 1983 "cplus.met"
catch_unit_exit :
#line 1983 "cplus.met"

#line 1983 "cplus.met"
    _Debug = TRACE_RULE("catch_unit",TRACE_EXIT,(PPTREE)0);
#line 1983 "cplus.met"
    _funcLevel--;
#line 1983 "cplus.met"
    return((PPTREE) -1) ;
#line 1983 "cplus.met"

#line 1983 "cplus.met"
catch_unit_ret :
#line 1983 "cplus.met"
    
#line 1983 "cplus.met"
    _Debug = TRACE_RULE("catch_unit",TRACE_RETURN,_retValue);
#line 1983 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1983 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 1983 "cplus.met"
    return _retValue ;
#line 1983 "cplus.met"
}
#line 1983 "cplus.met"

#line 1983 "cplus.met"
#line 1996 "cplus.met"
PPTREE cplus::catch_unit_ansi ( int error_free)
#line 1996 "cplus.met"
{
#line 1996 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 1996 "cplus.met"
    int _value,_nbPre = 0 ;
#line 1996 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 1996 "cplus.met"
    int _Debug = TRACE_RULE("catch_unit_ansi",TRACE_ENTER,(PPTREE)0);
#line 1996 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 1996 "cplus.met"
#line 1996 "cplus.met"
    PPTREE retTree = (PPTREE) 0,valTree = (PPTREE) 0;
#line 1996 "cplus.met"
#line 1998 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 1998 "cplus.met"
    if (  !SEE_TOKEN( CATCH,"catch") || !(CommTerm(),1)) {
#line 1998 "cplus.met"
        MulFreeTree(2,retTree,valTree);
        TOKEN_EXIT(catch_unit_ansi_exit,"catch")
#line 1998 "cplus.met"
    } else {
#line 1998 "cplus.met"
        tokenAhead = 0 ;
#line 1998 "cplus.met"
    }
#line 1998 "cplus.met"
#line 1999 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 1999 "cplus.met"
    if (  !SEE_TOKEN( POUV,"(") || !(CommTerm(),1)) {
#line 1999 "cplus.met"
        MulFreeTree(2,retTree,valTree);
        TOKEN_EXIT(catch_unit_ansi_exit,"(")
#line 1999 "cplus.met"
    } else {
#line 1999 "cplus.met"
        tokenAhead = 0 ;
#line 1999 "cplus.met"
    }
#line 1999 "cplus.met"
#line 2000 "cplus.met"
    if ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN(POINPOINPOIN,"...") && (tokenAhead = 0,CommTerm(),1)){
#line 2000 "cplus.met"
#line 2001 "cplus.met"
        {
#line 2001 "cplus.met"
            PPTREE _ptRes0=0;
#line 2001 "cplus.met"
            _ptRes0= MakeTree(EXCEPT_ANSI_ALL, 0);
#line 2001 "cplus.met"
            valTree=_ptRes0;
#line 2001 "cplus.met"
        }
#line 2001 "cplus.met"
    } else {
#line 2001 "cplus.met"
#line 2003 "cplus.met"
#line 2004 "cplus.met"
        if ( (retTree=NQUICK_CALL(_Tak(type_specifier)(error_free), 142, cplus))== (PPTREE) -1 ) {
#line 2004 "cplus.met"
            MulFreeTree(2,retTree,valTree);
            PROG_EXIT(catch_unit_ansi_exit,"catch_unit_ansi")
#line 2004 "cplus.met"
        }
#line 2004 "cplus.met"
#line 2005 "cplus.met"
        if (NPUSH_CALL_AFF_VERIF(valTree = ,_Tak(declarator), 44, cplus)){
#line 2005 "cplus.met"
#line 2006 "cplus.met"
            {
#line 2006 "cplus.met"
                PPTREE _ptRes0=0;
#line 2006 "cplus.met"
                _ptRes0= MakeTree(DECLARATOR, 2);
#line 2006 "cplus.met"
                ReplaceTree(_ptRes0, 1, retTree );
#line 2006 "cplus.met"
                ReplaceTree(_ptRes0, 2, valTree );
#line 2006 "cplus.met"
                valTree=_ptRes0;
#line 2006 "cplus.met"
            }
#line 2006 "cplus.met"
        } else {
#line 2006 "cplus.met"
#line 2008 "cplus.met"
            if (NPUSH_CALL_AFF_VERIF(valTree = ,_Tak(abstract_declarator), 2, cplus)){
#line 2008 "cplus.met"
#line 2009 "cplus.met"
                {
#line 2009 "cplus.met"
                    PPTREE _ptRes0=0;
#line 2009 "cplus.met"
                    _ptRes0= MakeTree(ABST_DECLARATOR, 2);
#line 2009 "cplus.met"
                    ReplaceTree(_ptRes0, 1, retTree );
#line 2009 "cplus.met"
                    ReplaceTree(_ptRes0, 2, valTree );
#line 2009 "cplus.met"
                    valTree=_ptRes0;
#line 2009 "cplus.met"
                }
#line 2009 "cplus.met"
            } else {
#line 2009 "cplus.met"
#line 2011 "cplus.met"
                valTree = retTree ;
#line 2011 "cplus.met"
            }
#line 2011 "cplus.met"
        }
#line 2011 "cplus.met"
#line 2011 "cplus.met"
    }
#line 2011 "cplus.met"
#line 2013 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 2013 "cplus.met"
    if (  !SEE_TOKEN( PFER,")") || !(CommTerm(),1)) {
#line 2013 "cplus.met"
        MulFreeTree(2,retTree,valTree);
        TOKEN_EXIT(catch_unit_ansi_exit,")")
#line 2013 "cplus.met"
    } else {
#line 2013 "cplus.met"
        tokenAhead = 0 ;
#line 2013 "cplus.met"
    }
#line 2013 "cplus.met"
#line 2014 "cplus.met"
    {
#line 2014 "cplus.met"
        PPTREE _ptTree0=0;
#line 2014 "cplus.met"
        {
#line 2014 "cplus.met"
            PPTREE _ptTree1=0,_ptRes1=0;
#line 2014 "cplus.met"
            _ptRes1= MakeTree(CATCH_ANSI, 2);
#line 2014 "cplus.met"
            ReplaceTree(_ptRes1, 1, valTree );
#line 2014 "cplus.met"
            if ( (_ptTree1=NQUICK_CALL(_Tak(compound_statement)(error_free), 26, cplus))== (PPTREE) -1 ) {
#line 2014 "cplus.met"
                MulFreeTree(5,_ptRes1,_ptTree1,_ptTree0,retTree,valTree);
                PROG_EXIT(catch_unit_ansi_exit,"catch_unit_ansi")
#line 2014 "cplus.met"
            }
#line 2014 "cplus.met"
            ReplaceTree(_ptRes1, 2, _ptTree1);
#line 2014 "cplus.met"
            _ptTree0=_ptRes1;
#line 2014 "cplus.met"
        }
#line 2014 "cplus.met"
        _retValue =_ptTree0;
#line 2014 "cplus.met"
        goto catch_unit_ansi_ret;
#line 2014 "cplus.met"
    }
#line 2014 "cplus.met"
#line 2014 "cplus.met"
#line 2014 "cplus.met"

#line 2015 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2015 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 2015 "cplus.met"
return((PPTREE) 0);
#line 2015 "cplus.met"

#line 2015 "cplus.met"
catch_unit_ansi_exit :
#line 2015 "cplus.met"

#line 2015 "cplus.met"
    _Debug = TRACE_RULE("catch_unit_ansi",TRACE_EXIT,(PPTREE)0);
#line 2015 "cplus.met"
    _funcLevel--;
#line 2015 "cplus.met"
    return((PPTREE) -1) ;
#line 2015 "cplus.met"

#line 2015 "cplus.met"
catch_unit_ansi_ret :
#line 2015 "cplus.met"
    
#line 2015 "cplus.met"
    _Debug = TRACE_RULE("catch_unit_ansi",TRACE_RETURN,_retValue);
#line 2015 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2015 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 2015 "cplus.met"
    return _retValue ;
#line 2015 "cplus.met"
}
#line 2015 "cplus.met"

#line 2015 "cplus.met"
#line 2035 "cplus.met"
PPTREE cplus::class_declaration ( int error_free)
#line 2035 "cplus.met"
{
#line 2035 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 2035 "cplus.met"
    int _value,_nbPre = 0 ;
#line 2035 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 2035 "cplus.met"
    int _Debug = TRACE_RULE("class_declaration",TRACE_ENTER,(PPTREE)0);
#line 2035 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 2035 "cplus.met"
#line 2035 "cplus.met"
    PPTREE _addlist1 = (PPTREE) 0;
#line 2035 "cplus.met"
#line 2035 "cplus.met"
    PPTREE retTree = (PPTREE) 0,inter = (PPTREE) 0,list = (PPTREE) 0;
#line 2035 "cplus.met"
#line 2037 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 2037 "cplus.met"
    switch( lexEl.Value) {
#line 2037 "cplus.met"
#line 2038 "cplus.met"
        case STRUCT : 
#line 2038 "cplus.met"
            tokenAhead = 0 ;
#line 2038 "cplus.met"
            CommTerm();
#line 2038 "cplus.met"
#line 2038 "cplus.met"
            {
#line 2038 "cplus.met"
                PPTREE _ptRes0=0;
#line 2038 "cplus.met"
                _ptRes0= MakeTree(CLASS, 4);
#line 2038 "cplus.met"
                ReplaceTree(_ptRes0, 1, MakeString ("struct"));
#line 2038 "cplus.met"
                retTree=_ptRes0;
#line 2038 "cplus.met"
            }
#line 2038 "cplus.met"
            break;
#line 2038 "cplus.met"
#line 2039 "cplus.met"
        case UNION : 
#line 2039 "cplus.met"
            tokenAhead = 0 ;
#line 2039 "cplus.met"
            CommTerm();
#line 2039 "cplus.met"
#line 2039 "cplus.met"
            {
#line 2039 "cplus.met"
                PPTREE _ptRes0=0;
#line 2039 "cplus.met"
                _ptRes0= MakeTree(CLASS, 4);
#line 2039 "cplus.met"
                ReplaceTree(_ptRes0, 1, MakeString ("union"));
#line 2039 "cplus.met"
                retTree=_ptRes0;
#line 2039 "cplus.met"
            }
#line 2039 "cplus.met"
            break;
#line 2039 "cplus.met"
#line 2040 "cplus.met"
        case CLASS : 
#line 2040 "cplus.met"
            tokenAhead = 0 ;
#line 2040 "cplus.met"
            CommTerm();
#line 2040 "cplus.met"
#line 2040 "cplus.met"
            {
#line 2040 "cplus.met"
                PPTREE _ptRes0=0;
#line 2040 "cplus.met"
                _ptRes0= MakeTree(CLASS, 4);
#line 2040 "cplus.met"
                ReplaceTree(_ptRes0, 1, MakeString ("class"));
#line 2040 "cplus.met"
                retTree=_ptRes0;
#line 2040 "cplus.met"
            }
#line 2040 "cplus.met"
            break;
#line 2040 "cplus.met"
        default :
#line 2040 "cplus.met"
            MulFreeTree(4,_addlist1,inter,list,retTree);
            CASE_EXIT(class_declaration_exit,"either struct or union or class")
#line 2040 "cplus.met"
            break;
#line 2040 "cplus.met"
    }
#line 2040 "cplus.met"
#line 2042 "cplus.met"
    {
#line 2042 "cplus.met"
        PPTREE _ptTree0=0;
#line 2042 "cplus.met"
        if ( (_ptTree0=NQUICK_CALL(_Tak(range_modifier_ident)(error_free), 120, cplus))== (PPTREE) -1 ) {
#line 2042 "cplus.met"
            MulFreeTree(5,_ptTree0,_addlist1,inter,list,retTree);
            PROG_EXIT(class_declaration_exit,"class_declaration")
#line 2042 "cplus.met"
        }
#line 2042 "cplus.met"
        ReplaceTree(retTree , 2 , _ptTree0);
#line 2042 "cplus.met"
    }
#line 2042 "cplus.met"
#line 2043 "cplus.met"
    if ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN(DPOI,":") && (tokenAhead = 0,CommTerm(),1)){
#line 2043 "cplus.met"
#line 2044 "cplus.met"
        {
#line 2044 "cplus.met"
            PPTREE _ptTree0=0;
#line 2044 "cplus.met"
            if ( (_ptTree0=NQUICK_CALL(_Tak(base_specifier)(error_free), 16, cplus))== (PPTREE) -1 ) {
#line 2044 "cplus.met"
                MulFreeTree(5,_ptTree0,_addlist1,inter,list,retTree);
                PROG_EXIT(class_declaration_exit,"class_declaration")
#line 2044 "cplus.met"
            }
#line 2044 "cplus.met"
            ReplaceTree(retTree , 3 , _ptTree0);
#line 2044 "cplus.met"
        }
#line 2044 "cplus.met"
#line 2044 "cplus.met"
    }
#line 2044 "cplus.met"
#line 2045 "cplus.met"
    if ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN(AOUV,"{") && (tokenAhead = 0,CommTerm(),1)){
#line 2045 "cplus.met"
#line 2046 "cplus.met"
#line 2047 "cplus.met"
        do {
#line 2047 "cplus.met"
#line 2047 "cplus.met"
            _addlist1 = list ;
#line 2047 "cplus.met"
#line 2048 "cplus.met"
            while (NPUSH_CALL_AFF_VERIF(inter = ,_Tak(inside_declaration), 80, cplus)) { 
#line 2048 "cplus.met"
#line 2049 "cplus.met"
#line 2049 "cplus.met"
                _addlist1 =AddList(_addlist1 ,inter );
#line 2049 "cplus.met"
#line 2049 "cplus.met"
                if (list){
#line 2049 "cplus.met"
#line 2049 "cplus.met"
                    _addlist1 = SonTree (_addlist1 ,2 );
#line 2049 "cplus.met"
                } else {
#line 2049 "cplus.met"
#line 2049 "cplus.met"
                    list = _addlist1 ;
#line 2049 "cplus.met"
                }
#line 2049 "cplus.met"
            } 
#line 2049 "cplus.met"
#line 2050 "cplus.met"
            (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 2050 "cplus.met"
            switch( lexEl.Value) {
#line 2050 "cplus.met"
#line 2051 "cplus.met"
                case PUBLIC : 
#line 2051 "cplus.met"
#line 2051 "cplus.met"
                    {
#line 2051 "cplus.met"
                        PPTREE _ptTree0=0;
#line 2051 "cplus.met"
                        if ( (_ptTree0=NQUICK_CALL(_Tak(protect_declare)(error_free), 111, cplus))== (PPTREE) -1 ) {
#line 2051 "cplus.met"
                            MulFreeTree(5,_ptTree0,_addlist1,inter,list,retTree);
                            PROG_EXIT(class_declaration_exit,"class_declaration")
#line 2051 "cplus.met"
                        }
#line 2051 "cplus.met"
                        list =AddList(list , _ptTree0);
#line 2051 "cplus.met"
                    }
#line 2051 "cplus.met"
                    break;
#line 2051 "cplus.met"
#line 2052 "cplus.met"
                case PRIVATE : 
#line 2052 "cplus.met"
#line 2052 "cplus.met"
                    {
#line 2052 "cplus.met"
                        PPTREE _ptTree0=0;
#line 2052 "cplus.met"
                        if ( (_ptTree0=NQUICK_CALL(_Tak(protect_declare)(error_free), 111, cplus))== (PPTREE) -1 ) {
#line 2052 "cplus.met"
                            MulFreeTree(5,_ptTree0,_addlist1,inter,list,retTree);
                            PROG_EXIT(class_declaration_exit,"class_declaration")
#line 2052 "cplus.met"
                        }
#line 2052 "cplus.met"
                        list =AddList(list , _ptTree0);
#line 2052 "cplus.met"
                    }
#line 2052 "cplus.met"
                    break;
#line 2052 "cplus.met"
#line 2053 "cplus.met"
                case PROTECTED : 
#line 2053 "cplus.met"
#line 2053 "cplus.met"
                    {
#line 2053 "cplus.met"
                        PPTREE _ptTree0=0;
#line 2053 "cplus.met"
                        if ( (_ptTree0=NQUICK_CALL(_Tak(protect_declare)(error_free), 111, cplus))== (PPTREE) -1 ) {
#line 2053 "cplus.met"
                            MulFreeTree(5,_ptTree0,_addlist1,inter,list,retTree);
                            PROG_EXIT(class_declaration_exit,"class_declaration")
#line 2053 "cplus.met"
                        }
#line 2053 "cplus.met"
                        list =AddList(list , _ptTree0);
#line 2053 "cplus.met"
                    }
#line 2053 "cplus.met"
                    break;
#line 2053 "cplus.met"
#line 2053 "cplus.met"
                case AFER : 
#line 2053 "cplus.met"
#line 2053 "cplus.met"
                    break;
#line 2053 "cplus.met"
#line 2055 "cplus.met"
                default : 
#line 2055 "cplus.met"
#line 2055 "cplus.met"
                    
#line 2055 "cplus.met"
                    MulFreeTree(4,_addlist1,inter,list,retTree);
                    LEX_EXIT ("",0);
#line 2055 "cplus.met"
                    goto class_declaration_exit;
#line 2055 "cplus.met"
                    break;
#line 2055 "cplus.met"
            }
#line 2055 "cplus.met"
#line 2055 "cplus.met"
#line 2057 "cplus.met"
        } while ( !(((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN( AFER,"}")) || 
#line 2057 "cplus.met"
                   (! ((tokenAhead && tokenAhead != -1)|| (c != EOF))))) ;
#line 2057 "cplus.met"
#line 2058 "cplus.met"
        {
#line 2058 "cplus.met"
            PPTREE _ptTree0=0;
#line 2058 "cplus.met"
            {
#line 2058 "cplus.met"
                PPTREE _ptRes1=0;
#line 2058 "cplus.met"
                _ptRes1= MakeTree(CLASS_DECL, 1);
#line 2058 "cplus.met"
                ReplaceTree(_ptRes1, 1, list );
#line 2058 "cplus.met"
                _ptTree0=_ptRes1;
#line 2058 "cplus.met"
            }
#line 2058 "cplus.met"
            ReplaceTree(retTree , 4 , _ptTree0);
#line 2058 "cplus.met"
        }
#line 2058 "cplus.met"
#line 2059 "cplus.met"
        (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 2059 "cplus.met"
        if (  !SEE_TOKEN( AFER,"}") || !(CommTerm(),1)) {
#line 2059 "cplus.met"
            MulFreeTree(4,_addlist1,inter,list,retTree);
            TOKEN_EXIT(class_declaration_exit,"}")
#line 2059 "cplus.met"
        } else {
#line 2059 "cplus.met"
            tokenAhead = 0 ;
#line 2059 "cplus.met"
        }
#line 2059 "cplus.met"
#line 2059 "cplus.met"
#line 2059 "cplus.met"
    }
#line 2059 "cplus.met"
#line 2061 "cplus.met"
    {
#line 2061 "cplus.met"
        _retValue = retTree ;
#line 2061 "cplus.met"
        goto class_declaration_ret;
#line 2061 "cplus.met"
        
#line 2061 "cplus.met"
    }
#line 2061 "cplus.met"
#line 2061 "cplus.met"
#line 2061 "cplus.met"

#line 2062 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2062 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 2062 "cplus.met"
return((PPTREE) 0);
#line 2062 "cplus.met"

#line 2062 "cplus.met"
class_declaration_exit :
#line 2062 "cplus.met"

#line 2062 "cplus.met"
    _Debug = TRACE_RULE("class_declaration",TRACE_EXIT,(PPTREE)0);
#line 2062 "cplus.met"
    _funcLevel--;
#line 2062 "cplus.met"
    return((PPTREE) -1) ;
#line 2062 "cplus.met"

#line 2062 "cplus.met"
class_declaration_ret :
#line 2062 "cplus.met"
    
#line 2062 "cplus.met"
    _Debug = TRACE_RULE("class_declaration",TRACE_RETURN,_retValue);
#line 2062 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2062 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 2062 "cplus.met"
    return _retValue ;
#line 2062 "cplus.met"
}
#line 2062 "cplus.met"

#line 2062 "cplus.met"
#line 777 "cplus.met"
PPTREE cplus::comment_eater ( int error_free)
#line 777 "cplus.met"
{
#line 777 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 777 "cplus.met"
    int _value,_nbPre = 0 ;
#line 777 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 777 "cplus.met"
    int _Debug = TRACE_RULE("comment_eater",TRACE_ENTER,(PPTREE)0);
#line 777 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 777 "cplus.met"
#line 777 "cplus.met"
    PPTREE retTree = (PPTREE) 0;
#line 777 "cplus.met"
#line 779 "cplus.met"
    1;
#line 779 "cplus.met"
    switch( lexEl.Value) {
#line 779 "cplus.met"
#line 780 "cplus.met"
        default : 
#line 780 "cplus.met"
            tokenAhead = 0 ;
#line 780 "cplus.met"
            CommTerm();
#line 780 "cplus.met"
#line 781 "cplus.met"
            if ( lexEl.Value != -1 ){
#line 781 "cplus.met"
#line 782 "cplus.met"
                
#line 782 "cplus.met"
                MulFreeTree(1,retTree);
                LEX_EXIT ("",0);
#line 782 "cplus.met"
                goto comment_eater_exit;
#line 782 "cplus.met"
#line 782 "cplus.met"
            } else {
#line 782 "cplus.met"
#line 784 "cplus.met"
                {
#line 784 "cplus.met"
                    _retValue = retTree ;
#line 784 "cplus.met"
                    goto comment_eater_ret;
#line 784 "cplus.met"
                    
#line 784 "cplus.met"
                }
#line 784 "cplus.met"
            }
#line 784 "cplus.met"
            break;
#line 784 "cplus.met"
    }
#line 784 "cplus.met"
#line 784 "cplus.met"
#line 785 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 785 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 785 "cplus.met"
return((PPTREE) 0);
#line 785 "cplus.met"

#line 785 "cplus.met"
comment_eater_exit :
#line 785 "cplus.met"

#line 785 "cplus.met"
    _Debug = TRACE_RULE("comment_eater",TRACE_EXIT,(PPTREE)0);
#line 785 "cplus.met"
    _funcLevel--;
#line 785 "cplus.met"
    return((PPTREE) -1) ;
#line 785 "cplus.met"

#line 785 "cplus.met"
comment_eater_ret :
#line 785 "cplus.met"
    
#line 785 "cplus.met"
    _Debug = TRACE_RULE("comment_eater",TRACE_RETURN,_retValue);
#line 785 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 785 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 785 "cplus.met"
    return _retValue ;
#line 785 "cplus.met"
}
#line 785 "cplus.met"

#line 785 "cplus.met"
#line 1856 "cplus.met"
PPTREE cplus::complete_class_name ( int error_free)
#line 1856 "cplus.met"
{
#line 1856 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 1856 "cplus.met"
    int _value,_nbPre = 0 ;
#line 1856 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 1856 "cplus.met"
    int _Debug = TRACE_RULE("complete_class_name",TRACE_ENTER,(PPTREE)0);
#line 1856 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 1856 "cplus.met"
#line 1856 "cplus.met"
    PPTREE ret = (PPTREE) 0;
#line 1856 "cplus.met"
#line 1858 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 1858 "cplus.met"
    switch( lexEl.Value) {
#line 1858 "cplus.met"
#line 1859 "cplus.met"
        case META : 
#line 1859 "cplus.met"
        case IDENT : 
#line 1859 "cplus.met"
#line 1859 "cplus.met"
            if ( (ret=NQUICK_CALL(_Tak(qualified_name)(error_free), 113, cplus))== (PPTREE) -1 ) {
#line 1859 "cplus.met"
                MulFreeTree(1,ret);
                PROG_EXIT(complete_class_name_exit,"complete_class_name")
#line 1859 "cplus.met"
            }
#line 1859 "cplus.met"
            break;
#line 1859 "cplus.met"
#line 1860 "cplus.met"
        case DPOIDPOI : 
#line 1860 "cplus.met"
            tokenAhead = 0 ;
#line 1860 "cplus.met"
            CommTerm();
#line 1860 "cplus.met"
#line 1860 "cplus.met"
            {
#line 1860 "cplus.met"
                PPTREE _ptTree0=0,_ptRes0=0;
#line 1860 "cplus.met"
                _ptRes0= MakeTree(QUALIFIED, 2);
#line 1860 "cplus.met"
                if ( (_ptTree0=NQUICK_CALL(_Tak(qualified_name)(error_free), 113, cplus))== (PPTREE) -1 ) {
#line 1860 "cplus.met"
                    MulFreeTree(3,_ptRes0,_ptTree0,ret);
                    PROG_EXIT(complete_class_name_exit,"complete_class_name")
#line 1860 "cplus.met"
                }
#line 1860 "cplus.met"
                ReplaceTree(_ptRes0, 2, _ptTree0);
#line 1860 "cplus.met"
                ret=_ptRes0;
#line 1860 "cplus.met"
            }
#line 1860 "cplus.met"
            break;
#line 1860 "cplus.met"
        default :
#line 1860 "cplus.met"
            MulFreeTree(1,ret);
            CASE_EXIT(complete_class_name_exit,"either IDENT or ::")
#line 1860 "cplus.met"
            break;
#line 1860 "cplus.met"
    }
#line 1860 "cplus.met"
#line 1862 "cplus.met"
    {
#line 1862 "cplus.met"
        _retValue = ret ;
#line 1862 "cplus.met"
        goto complete_class_name_ret;
#line 1862 "cplus.met"
        
#line 1862 "cplus.met"
    }
#line 1862 "cplus.met"
#line 1862 "cplus.met"
#line 1862 "cplus.met"

#line 1863 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1863 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 1863 "cplus.met"
return((PPTREE) 0);
#line 1863 "cplus.met"

#line 1863 "cplus.met"
complete_class_name_exit :
#line 1863 "cplus.met"

#line 1863 "cplus.met"
    _Debug = TRACE_RULE("complete_class_name",TRACE_EXIT,(PPTREE)0);
#line 1863 "cplus.met"
    _funcLevel--;
#line 1863 "cplus.met"
    return((PPTREE) -1) ;
#line 1863 "cplus.met"

#line 1863 "cplus.met"
complete_class_name_ret :
#line 1863 "cplus.met"
    
#line 1863 "cplus.met"
    _Debug = TRACE_RULE("complete_class_name",TRACE_RETURN,_retValue);
#line 1863 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1863 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 1863 "cplus.met"
    return _retValue ;
#line 1863 "cplus.met"
}
#line 1863 "cplus.met"

#line 1863 "cplus.met"
#line 3256 "cplus.met"
PPTREE cplus::compound_statement ( int error_free)
#line 3256 "cplus.met"
{
#line 3256 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 3256 "cplus.met"
    int _value,_nbPre = 0 ;
#line 3256 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 3256 "cplus.met"
    int _Debug = TRACE_RULE("compound_statement",TRACE_ENTER,(PPTREE)0);
#line 3256 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 3256 "cplus.met"
#line 3256 "cplus.met"
    PPTREE _addlist1 = (PPTREE) 0;
#line 3256 "cplus.met"
#line 3256 "cplus.met"
    PPTREE statList = (PPTREE) 0,stat = (PPTREE) 0;
#line 3256 "cplus.met"
#line 3258 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3258 "cplus.met"
    if (  !SEE_TOKEN( AOUV,"{") || !(CommTerm(),1)) {
#line 3258 "cplus.met"
        MulFreeTree(3,_addlist1,stat,statList);
        TOKEN_EXIT(compound_statement_exit,"{")
#line 3258 "cplus.met"
    } else {
#line 3258 "cplus.met"
        tokenAhead = 0 ;
#line 3258 "cplus.met"
    }
#line 3258 "cplus.met"
#line 3259 "cplus.met"
     debut :
#line 3259 "cplus.met"
#line 3259 "cplus.met"
    _addlist1 = statList ;
#line 3259 "cplus.met"
#line 3261 "cplus.met"
    while (((((NPUSH_CALL_AFF_VERIF(stat = ,_Tak(statement), 133, cplus)) || 
#line 3261 "cplus.met"
             (NPUSH_CALL_AFF_VERIF(stat = ,_Tak(data_declaration), 38, cplus))) || 
#line 3261 "cplus.met"
            (NPUSH_CALL_AFF_VERIF(stat = ,_Tak(stat_dir), 129, cplus))) || 
#line 3261 "cplus.met"
           (NPUSH_CALL_AFF_VERIF(stat = ,_Tak(exception), 56, cplus))) || 
#line 3261 "cplus.met"
          (NPUSH_CALL_AFF_VERIF(stat = ,_Tak(ext_data_declaration), 69, cplus))) { 
#line 3261 "cplus.met"
#line 3267 "cplus.met"
#line 3267 "cplus.met"
        _addlist1 =AddList(_addlist1 ,stat );
#line 3267 "cplus.met"
#line 3267 "cplus.met"
        if (statList){
#line 3267 "cplus.met"
#line 3267 "cplus.met"
            _addlist1 = SonTree (_addlist1 ,2 );
#line 3267 "cplus.met"
        } else {
#line 3267 "cplus.met"
#line 3267 "cplus.met"
            statList = _addlist1 ;
#line 3267 "cplus.met"
        }
#line 3267 "cplus.met"
    } 
#line 3267 "cplus.met"
#line 3268 "cplus.met"
    {
#line 3268 "cplus.met"
        PPTREE _ptTree0=0;
#line 3268 "cplus.met"
        if ( (_ptTree0=NQUICK_CALL(_Tak(none_statement)(error_free), 100, cplus))== (PPTREE) -1 ) {
#line 3268 "cplus.met"
            MulFreeTree(4,_ptTree0,_addlist1,stat,statList);
            PROG_EXIT(compound_statement_exit,"compound_statement")
#line 3268 "cplus.met"
        }
#line 3268 "cplus.met"
        statList =AddList(statList , _ptTree0);
#line 3268 "cplus.met"
    }
#line 3268 "cplus.met"
#line 3269 "cplus.met"
    if (! ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN(AFER,"}") && (tokenAhead = 0,CommTerm(),1))){
#line 3269 "cplus.met"
#line 3270 "cplus.met"
#line 3271 "cplus.met"
        dumperror ();
#line 3271 "cplus.met"
#line 3272 "cplus.met"
        (tokenAhead == 5|| (LexEndLine(),TRACE_LEX(1)));
#line 3272 "cplus.met"
        if ( ! TERM_OR_META(END_LINE,"END_LINE") || !(CommTerm(),1)) {
#line 3272 "cplus.met"
            MulFreeTree(3,_addlist1,stat,statList);
            TOKEN_EXIT(compound_statement_exit,"END_LINE")
#line 3272 "cplus.met"
        } else {
#line 3272 "cplus.met"
            tokenAhead = 0 ;
#line 3272 "cplus.met"
        }
#line 3272 "cplus.met"
#line 3273 "cplus.met"
         hasGotError = 1 ;
#line 3273 "cplus.met"
#line 3274 "cplus.met"
         goto debut ;
#line 3274 "cplus.met"
#line 3274 "cplus.met"
#line 3274 "cplus.met"
    }
#line 3274 "cplus.met"
#line 3276 "cplus.met"
    {
#line 3276 "cplus.met"
        PPTREE _ptTree0=0;
#line 3276 "cplus.met"
        {
#line 3276 "cplus.met"
            PPTREE _ptRes1=0;
#line 3276 "cplus.met"
            _ptRes1= MakeTree(COMPOUND, 1);
#line 3276 "cplus.met"
            ReplaceTree(_ptRes1, 1, statList );
#line 3276 "cplus.met"
            _ptTree0=_ptRes1;
#line 3276 "cplus.met"
        }
#line 3276 "cplus.met"
        _retValue =_ptTree0;
#line 3276 "cplus.met"
        goto compound_statement_ret;
#line 3276 "cplus.met"
    }
#line 3276 "cplus.met"
#line 3276 "cplus.met"
#line 3276 "cplus.met"

#line 3277 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 3277 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 3277 "cplus.met"
return((PPTREE) 0);
#line 3277 "cplus.met"

#line 3277 "cplus.met"
compound_statement_exit :
#line 3277 "cplus.met"

#line 3277 "cplus.met"
    _Debug = TRACE_RULE("compound_statement",TRACE_EXIT,(PPTREE)0);
#line 3277 "cplus.met"
    _funcLevel--;
#line 3277 "cplus.met"
    return((PPTREE) -1) ;
#line 3277 "cplus.met"

#line 3277 "cplus.met"
compound_statement_ret :
#line 3277 "cplus.met"
    
#line 3277 "cplus.met"
    _Debug = TRACE_RULE("compound_statement",TRACE_RETURN,_retValue);
#line 3277 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 3277 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 3277 "cplus.met"
    return _retValue ;
#line 3277 "cplus.met"
}
#line 3277 "cplus.met"

#line 3277 "cplus.met"
#line 2597 "cplus.met"
PPTREE cplus::conditional_expression ( int error_free)
#line 2597 "cplus.met"
{
#line 2597 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 2597 "cplus.met"
    int _value,_nbPre = 0 ;
#line 2597 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 2597 "cplus.met"
    int _Debug = TRACE_RULE("conditional_expression",TRACE_ENTER,(PPTREE)0);
#line 2597 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 2597 "cplus.met"
#line 2597 "cplus.met"
    PPTREE expTree = (PPTREE) 0,condTree = (PPTREE) 0;
#line 2597 "cplus.met"
#line 2599 "cplus.met"
    if ( (expTree=NQUICK_CALL(_Tak(logical_or_expression)(error_free), 87, cplus))== (PPTREE) -1 ) {
#line 2599 "cplus.met"
        MulFreeTree(2,condTree,expTree);
        PROG_EXIT(conditional_expression_exit,"conditional_expression")
#line 2599 "cplus.met"
    }
#line 2599 "cplus.met"
#line 2600 "cplus.met"
    if ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN(INTE,"?") && (tokenAhead = 0,CommTerm(),1)){
#line 2600 "cplus.met"
#line 2601 "cplus.met"
#line 2602 "cplus.met"
        {
#line 2602 "cplus.met"
            PPTREE _ptRes0=0;
#line 2602 "cplus.met"
            _ptRes0= MakeTree(COND_AFF, 3);
#line 2602 "cplus.met"
            ReplaceTree(_ptRes0, 1, expTree );
#line 2602 "cplus.met"
            condTree=_ptRes0;
#line 2602 "cplus.met"
        }
#line 2602 "cplus.met"
#line 2603 "cplus.met"
        {
#line 2603 "cplus.met"
            PPTREE _ptTree0=0;
#line 2603 "cplus.met"
            if ( (_ptTree0=NQUICK_CALL(_Tak(expression)(error_free), 60, cplus))== (PPTREE) -1 ) {
#line 2603 "cplus.met"
                MulFreeTree(3,_ptTree0,condTree,expTree);
                PROG_EXIT(conditional_expression_exit,"conditional_expression")
#line 2603 "cplus.met"
            }
#line 2603 "cplus.met"
            ReplaceTree(condTree , 2 , _ptTree0);
#line 2603 "cplus.met"
        }
#line 2603 "cplus.met"
#line 2604 "cplus.met"
        (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 2604 "cplus.met"
        if (  !SEE_TOKEN( DPOI,":") || !(CommTerm(),1)) {
#line 2604 "cplus.met"
            MulFreeTree(2,condTree,expTree);
            TOKEN_EXIT(conditional_expression_exit,":")
#line 2604 "cplus.met"
        } else {
#line 2604 "cplus.met"
            tokenAhead = 0 ;
#line 2604 "cplus.met"
        }
#line 2604 "cplus.met"
#line 2605 "cplus.met"
        {
#line 2605 "cplus.met"
            PPTREE _ptTree0=0;
#line 2605 "cplus.met"
            {
#line 2605 "cplus.met"
                PPTREE _ptTree1=0;
#line 2605 "cplus.met"
                if ( (_ptTree1=NQUICK_CALL(_Tak(conditional_expression)(error_free), 27, cplus))== (PPTREE) -1 ) {
#line 2605 "cplus.met"
                    MulFreeTree(4,_ptTree1,_ptTree0,condTree,expTree);
                    PROG_EXIT(conditional_expression_exit,"conditional_expression")
#line 2605 "cplus.met"
                }
#line 2605 "cplus.met"
                _ptTree0=ReplaceTree(condTree , 3 , _ptTree1);
#line 2605 "cplus.met"
            }
#line 2605 "cplus.met"
            _retValue =_ptTree0;
#line 2605 "cplus.met"
            goto conditional_expression_ret;
#line 2605 "cplus.met"
        }
#line 2605 "cplus.met"
#line 2605 "cplus.met"
#line 2605 "cplus.met"
    } else {
#line 2605 "cplus.met"
#line 2608 "cplus.met"
        {
#line 2608 "cplus.met"
            _retValue = expTree ;
#line 2608 "cplus.met"
            goto conditional_expression_ret;
#line 2608 "cplus.met"
            
#line 2608 "cplus.met"
        }
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
conditional_expression_exit :
#line 2609 "cplus.met"

#line 2609 "cplus.met"
    _Debug = TRACE_RULE("conditional_expression",TRACE_EXIT,(PPTREE)0);
#line 2609 "cplus.met"
    _funcLevel--;
#line 2609 "cplus.met"
    return((PPTREE) -1) ;
#line 2609 "cplus.met"

#line 2609 "cplus.met"
conditional_expression_ret :
#line 2609 "cplus.met"
    
#line 2609 "cplus.met"
    _Debug = TRACE_RULE("conditional_expression",TRACE_RETURN,_retValue);
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
#line 2137 "cplus.met"
PPTREE cplus::const_or_volatile ( int error_free)
#line 2137 "cplus.met"
{
#line 2137 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 2137 "cplus.met"
    int _value,_nbPre = 0 ;
#line 2137 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 2137 "cplus.met"
    int _Debug = TRACE_RULE("const_or_volatile",TRACE_ENTER,(PPTREE)0);
#line 2137 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 2137 "cplus.met"
#line 2138 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 2138 "cplus.met"
    switch( lexEl.Value) {
#line 2138 "cplus.met"
#line 2139 "cplus.met"
        case CONST : 
#line 2139 "cplus.met"
#line 2139 "cplus.met"
            {
#line 2139 "cplus.met"
                PPTREE _ptTree0=0;
#line 2139 "cplus.met"
                {
#line 2139 "cplus.met"
                    PPTREE _ptTree1=0,_ptRes1=0;
#line 2139 "cplus.met"
                    _ptRes1= MakeTree(RANGE_MODIFIER, 2);
#line 2139 "cplus.met"
                    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 2139 "cplus.met"
                    if (  !SEE_TOKEN( CONST,"const") || !(_ptTree1 = CommString(lexEl.string()))) {
#line 2139 "cplus.met"
                        MulFreeTree(3,_ptRes1,_ptTree1,_ptTree0);
                        TOKEN_EXIT(const_or_volatile_exit,"const")
#line 2139 "cplus.met"
                    } else {
#line 2139 "cplus.met"
                        tokenAhead = 0 ;
#line 2139 "cplus.met"
                    }
#line 2139 "cplus.met"
                    ReplaceTree(_ptRes1, 1, _ptTree1);
#line 2139 "cplus.met"
                    _ptTree0=_ptRes1;
#line 2139 "cplus.met"
                }
#line 2139 "cplus.met"
                _retValue =_ptTree0;
#line 2139 "cplus.met"
                goto const_or_volatile_ret;
#line 2139 "cplus.met"
            }
#line 2139 "cplus.met"
            break;
#line 2139 "cplus.met"
#line 2140 "cplus.met"
        case VOLATILE : 
#line 2140 "cplus.met"
#line 2140 "cplus.met"
            {
#line 2140 "cplus.met"
                PPTREE _ptTree0=0;
#line 2140 "cplus.met"
                {
#line 2140 "cplus.met"
                    PPTREE _ptTree1=0,_ptRes1=0;
#line 2140 "cplus.met"
                    _ptRes1= MakeTree(RANGE_MODIFIER, 2);
#line 2140 "cplus.met"
                    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 2140 "cplus.met"
                    if (  !SEE_TOKEN( VOLATILE,"volatile") || !(_ptTree1 = CommString(lexEl.string()))) {
#line 2140 "cplus.met"
                        MulFreeTree(3,_ptRes1,_ptTree1,_ptTree0);
                        TOKEN_EXIT(const_or_volatile_exit,"volatile")
#line 2140 "cplus.met"
                    } else {
#line 2140 "cplus.met"
                        tokenAhead = 0 ;
#line 2140 "cplus.met"
                    }
#line 2140 "cplus.met"
                    ReplaceTree(_ptRes1, 1, _ptTree1);
#line 2140 "cplus.met"
                    _ptTree0=_ptRes1;
#line 2140 "cplus.met"
                }
#line 2140 "cplus.met"
                _retValue =_ptTree0;
#line 2140 "cplus.met"
                goto const_or_volatile_ret;
#line 2140 "cplus.met"
            }
#line 2140 "cplus.met"
            break;
#line 2140 "cplus.met"
        default :
#line 2140 "cplus.met"
            CASE_EXIT(const_or_volatile_exit,"either const or volatile")
#line 2140 "cplus.met"
            break;
#line 2140 "cplus.met"
    }
#line 2140 "cplus.met"
#line 2140 "cplus.met"
#line 2142 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2142 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 2142 "cplus.met"
return((PPTREE) 0);
#line 2142 "cplus.met"

#line 2142 "cplus.met"
const_or_volatile_exit :
#line 2142 "cplus.met"

#line 2142 "cplus.met"
    _Debug = TRACE_RULE("const_or_volatile",TRACE_EXIT,(PPTREE)0);
#line 2142 "cplus.met"
    _funcLevel--;
#line 2142 "cplus.met"
    return((PPTREE) -1) ;
#line 2142 "cplus.met"

#line 2142 "cplus.met"
const_or_volatile_ret :
#line 2142 "cplus.met"
    
#line 2142 "cplus.met"
    _Debug = TRACE_RULE("const_or_volatile",TRACE_RETURN,_retValue);
#line 2142 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2142 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 2142 "cplus.met"
    return _retValue ;
#line 2142 "cplus.met"
}
#line 2142 "cplus.met"

#line 2142 "cplus.met"
#line 3051 "cplus.met"
PPTREE cplus::constan ( int error_free)
#line 3051 "cplus.met"
{
#line 3051 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 3051 "cplus.met"
    int _value,_nbPre = 0 ;
#line 3051 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 3051 "cplus.met"
    int _Debug = TRACE_RULE("constan",TRACE_ENTER,(PPTREE)0);
#line 3051 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 3051 "cplus.met"
#line 3052 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3052 "cplus.met"
    switch( lexEl.Value) {
#line 3052 "cplus.met"
#line 3053 "cplus.met"
        case META : 
#line 3053 "cplus.met"
        case INTEGER : 
#line 3053 "cplus.met"
#line 3053 "cplus.met"
            {
#line 3053 "cplus.met"
                PPTREE _ptTree0=0;
#line 3053 "cplus.met"
                {
#line 3053 "cplus.met"
                    PPTREE _ptTree1=0,_ptRes1=0;
#line 3053 "cplus.met"
                    _ptRes1= MakeTree(INTEGER, 1);
#line 3053 "cplus.met"
                    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3053 "cplus.met"
                    if ( ! TERM_OR_META(INTEGER,"INTEGER") || !(BUILD_TERM_META(_ptTree1))) {
#line 3053 "cplus.met"
                        MulFreeTree(3,_ptRes1,_ptTree1,_ptTree0);
                        TOKEN_EXIT(constan_exit,"INTEGER")
#line 3053 "cplus.met"
                    } else {
#line 3053 "cplus.met"
                        tokenAhead = 0 ;
#line 3053 "cplus.met"
                    }
#line 3053 "cplus.met"
                    ReplaceTree(_ptRes1, 1, _ptTree1);
#line 3053 "cplus.met"
                    _ptTree0=_ptRes1;
#line 3053 "cplus.met"
                }
#line 3053 "cplus.met"
                _retValue =_ptTree0;
#line 3053 "cplus.met"
                goto constan_ret;
#line 3053 "cplus.met"
            }
#line 3053 "cplus.met"
            break;
#line 3053 "cplus.met"
#line 3054 "cplus.met"
        case LINTEGER : 
#line 3054 "cplus.met"
#line 3054 "cplus.met"
            {
#line 3054 "cplus.met"
                PPTREE _ptTree0=0;
#line 3054 "cplus.met"
                {
#line 3054 "cplus.met"
                    PPTREE _ptTree1=0,_ptRes1=0;
#line 3054 "cplus.met"
                    _ptRes1= MakeTree(ILONG, 1);
#line 3054 "cplus.met"
                    {
#line 3054 "cplus.met"
                        PPTREE _ptTree2=0,_ptRes2=0;
#line 3054 "cplus.met"
                        _ptRes2= MakeTree(INTEGER, 1);
#line 3054 "cplus.met"
                        (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3054 "cplus.met"
                        if ( ! TERM_OR_META(LINTEGER,"LINTEGER") || !(BUILD_TERM_META(_ptTree2))) {
#line 3054 "cplus.met"
                            MulFreeTree(5,_ptRes2,_ptTree2,_ptRes1,_ptTree1,_ptTree0);
                            TOKEN_EXIT(constan_exit,"LINTEGER")
#line 3054 "cplus.met"
                        } else {
#line 3054 "cplus.met"
                            tokenAhead = 0 ;
#line 3054 "cplus.met"
                        }
#line 3054 "cplus.met"
                        ReplaceTree(_ptRes2, 1, _ptTree2);
#line 3054 "cplus.met"
                        _ptTree1=_ptRes2;
#line 3054 "cplus.met"
                    }
#line 3054 "cplus.met"
                    ReplaceTree(_ptRes1, 1, _ptTree1);
#line 3054 "cplus.met"
                    _ptTree0=_ptRes1;
#line 3054 "cplus.met"
                }
#line 3054 "cplus.met"
                _retValue =_ptTree0;
#line 3054 "cplus.met"
                goto constan_ret;
#line 3054 "cplus.met"
            }
#line 3054 "cplus.met"
            break;
#line 3054 "cplus.met"
#line 3056 "cplus.met"
        case LLINTEGER : 
#line 3056 "cplus.met"
#line 3056 "cplus.met"
            {
#line 3056 "cplus.met"
                PPTREE _ptTree0=0;
#line 3056 "cplus.met"
                {
#line 3056 "cplus.met"
                    PPTREE _ptTree1=0,_ptRes1=0;
#line 3056 "cplus.met"
                    _ptRes1= MakeTree(ILONGLONG, 1);
#line 3056 "cplus.met"
                    {
#line 3056 "cplus.met"
                        PPTREE _ptTree2=0,_ptRes2=0;
#line 3056 "cplus.met"
                        _ptRes2= MakeTree(INTEGER, 1);
#line 3056 "cplus.met"
                        (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3056 "cplus.met"
                        if ( ! TERM_OR_META(LINTEGER,"LINTEGER") || !(BUILD_TERM_META(_ptTree2))) {
#line 3056 "cplus.met"
                            MulFreeTree(5,_ptRes2,_ptTree2,_ptRes1,_ptTree1,_ptTree0);
                            TOKEN_EXIT(constan_exit,"LINTEGER")
#line 3056 "cplus.met"
                        } else {
#line 3056 "cplus.met"
                            tokenAhead = 0 ;
#line 3056 "cplus.met"
                        }
#line 3056 "cplus.met"
                        ReplaceTree(_ptRes2, 1, _ptTree2);
#line 3056 "cplus.met"
                        _ptTree1=_ptRes2;
#line 3056 "cplus.met"
                    }
#line 3056 "cplus.met"
                    ReplaceTree(_ptRes1, 1, _ptTree1);
#line 3056 "cplus.met"
                    _ptTree0=_ptRes1;
#line 3056 "cplus.met"
                }
#line 3056 "cplus.met"
                _retValue =_ptTree0;
#line 3056 "cplus.met"
                goto constan_ret;
#line 3056 "cplus.met"
            }
#line 3056 "cplus.met"
            break;
#line 3056 "cplus.met"
#line 3058 "cplus.met"
        case UINTEGER : 
#line 3058 "cplus.met"
#line 3058 "cplus.met"
            {
#line 3058 "cplus.met"
                PPTREE _ptTree0=0;
#line 3058 "cplus.met"
                {
#line 3058 "cplus.met"
                    PPTREE _ptTree1=0,_ptRes1=0;
#line 3058 "cplus.met"
                    _ptRes1= MakeTree(IUN, 1);
#line 3058 "cplus.met"
                    {
#line 3058 "cplus.met"
                        PPTREE _ptTree2=0,_ptRes2=0;
#line 3058 "cplus.met"
                        _ptRes2= MakeTree(INTEGER, 1);
#line 3058 "cplus.met"
                        (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3058 "cplus.met"
                        if ( ! TERM_OR_META(UINTEGER,"UINTEGER") || !(BUILD_TERM_META(_ptTree2))) {
#line 3058 "cplus.met"
                            MulFreeTree(5,_ptRes2,_ptTree2,_ptRes1,_ptTree1,_ptTree0);
                            TOKEN_EXIT(constan_exit,"UINTEGER")
#line 3058 "cplus.met"
                        } else {
#line 3058 "cplus.met"
                            tokenAhead = 0 ;
#line 3058 "cplus.met"
                        }
#line 3058 "cplus.met"
                        ReplaceTree(_ptRes2, 1, _ptTree2);
#line 3058 "cplus.met"
                        _ptTree1=_ptRes2;
#line 3058 "cplus.met"
                    }
#line 3058 "cplus.met"
                    ReplaceTree(_ptRes1, 1, _ptTree1);
#line 3058 "cplus.met"
                    _ptTree0=_ptRes1;
#line 3058 "cplus.met"
                }
#line 3058 "cplus.met"
                _retValue =_ptTree0;
#line 3058 "cplus.met"
                goto constan_ret;
#line 3058 "cplus.met"
            }
#line 3058 "cplus.met"
            break;
#line 3058 "cplus.met"
#line 3060 "cplus.met"
        case ULINTEGER : 
#line 3060 "cplus.met"
#line 3060 "cplus.met"
            {
#line 3060 "cplus.met"
                PPTREE _ptTree0=0;
#line 3060 "cplus.met"
                {
#line 3060 "cplus.met"
                    PPTREE _ptTree1=0,_ptRes1=0;
#line 3060 "cplus.met"
                    _ptRes1= MakeTree(IUNLONG, 1);
#line 3060 "cplus.met"
                    {
#line 3060 "cplus.met"
                        PPTREE _ptTree2=0,_ptRes2=0;
#line 3060 "cplus.met"
                        _ptRes2= MakeTree(INTEGER, 1);
#line 3060 "cplus.met"
                        (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3060 "cplus.met"
                        if ( ! TERM_OR_META(ULINTEGER,"ULINTEGER") || !(BUILD_TERM_META(_ptTree2))) {
#line 3060 "cplus.met"
                            MulFreeTree(5,_ptRes2,_ptTree2,_ptRes1,_ptTree1,_ptTree0);
                            TOKEN_EXIT(constan_exit,"ULINTEGER")
#line 3060 "cplus.met"
                        } else {
#line 3060 "cplus.met"
                            tokenAhead = 0 ;
#line 3060 "cplus.met"
                        }
#line 3060 "cplus.met"
                        ReplaceTree(_ptRes2, 1, _ptTree2);
#line 3060 "cplus.met"
                        _ptTree1=_ptRes2;
#line 3060 "cplus.met"
                    }
#line 3060 "cplus.met"
                    ReplaceTree(_ptRes1, 1, _ptTree1);
#line 3060 "cplus.met"
                    _ptTree0=_ptRes1;
#line 3060 "cplus.met"
                }
#line 3060 "cplus.met"
                _retValue =_ptTree0;
#line 3060 "cplus.met"
                goto constan_ret;
#line 3060 "cplus.met"
            }
#line 3060 "cplus.met"
            break;
#line 3060 "cplus.met"
#line 3062 "cplus.met"
        case ULLINTEGER : 
#line 3062 "cplus.met"
#line 3062 "cplus.met"
            {
#line 3062 "cplus.met"
                PPTREE _ptTree0=0;
#line 3062 "cplus.met"
                {
#line 3062 "cplus.met"
                    PPTREE _ptTree1=0,_ptRes1=0;
#line 3062 "cplus.met"
                    _ptRes1= MakeTree(IUNLONGLONG, 1);
#line 3062 "cplus.met"
                    {
#line 3062 "cplus.met"
                        PPTREE _ptTree2=0,_ptRes2=0;
#line 3062 "cplus.met"
                        _ptRes2= MakeTree(INTEGER, 1);
#line 3062 "cplus.met"
                        (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3062 "cplus.met"
                        if ( ! TERM_OR_META(ULINTEGER,"ULINTEGER") || !(BUILD_TERM_META(_ptTree2))) {
#line 3062 "cplus.met"
                            MulFreeTree(5,_ptRes2,_ptTree2,_ptRes1,_ptTree1,_ptTree0);
                            TOKEN_EXIT(constan_exit,"ULINTEGER")
#line 3062 "cplus.met"
                        } else {
#line 3062 "cplus.met"
                            tokenAhead = 0 ;
#line 3062 "cplus.met"
                        }
#line 3062 "cplus.met"
                        ReplaceTree(_ptRes2, 1, _ptTree2);
#line 3062 "cplus.met"
                        _ptTree1=_ptRes2;
#line 3062 "cplus.met"
                    }
#line 3062 "cplus.met"
                    ReplaceTree(_ptRes1, 1, _ptTree1);
#line 3062 "cplus.met"
                    _ptTree0=_ptRes1;
#line 3062 "cplus.met"
                }
#line 3062 "cplus.met"
                _retValue =_ptTree0;
#line 3062 "cplus.met"
                goto constan_ret;
#line 3062 "cplus.met"
            }
#line 3062 "cplus.met"
            break;
#line 3062 "cplus.met"
#line 3064 "cplus.met"
        case HEXA : 
#line 3064 "cplus.met"
#line 3064 "cplus.met"
            {
#line 3064 "cplus.met"
                PPTREE _ptTree0=0;
#line 3064 "cplus.met"
                {
#line 3064 "cplus.met"
                    PPTREE _ptTree1=0,_ptRes1=0;
#line 3064 "cplus.met"
                    _ptRes1= MakeTree(HEXA, 1);
#line 3064 "cplus.met"
                    {
#line 3064 "cplus.met"
                        PPTREE _ptTree2=0,_ptRes2=0;
#line 3064 "cplus.met"
                        _ptRes2= MakeTree(INTEGER, 1);
#line 3064 "cplus.met"
                        (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3064 "cplus.met"
                        if ( ! TERM_OR_META(HEXA,"HEXA") || !(BUILD_TERM_META(_ptTree2))) {
#line 3064 "cplus.met"
                            MulFreeTree(5,_ptRes2,_ptTree2,_ptRes1,_ptTree1,_ptTree0);
                            TOKEN_EXIT(constan_exit,"HEXA")
#line 3064 "cplus.met"
                        } else {
#line 3064 "cplus.met"
                            tokenAhead = 0 ;
#line 3064 "cplus.met"
                        }
#line 3064 "cplus.met"
                        ReplaceTree(_ptRes2, 1, _ptTree2);
#line 3064 "cplus.met"
                        _ptTree1=_ptRes2;
#line 3064 "cplus.met"
                    }
#line 3064 "cplus.met"
                    ReplaceTree(_ptRes1, 1, _ptTree1);
#line 3064 "cplus.met"
                    _ptTree0=_ptRes1;
#line 3064 "cplus.met"
                }
#line 3064 "cplus.met"
                _retValue =_ptTree0;
#line 3064 "cplus.met"
                goto constan_ret;
#line 3064 "cplus.met"
            }
#line 3064 "cplus.met"
            break;
#line 3064 "cplus.met"
#line 3065 "cplus.met"
        case LHEXA : 
#line 3065 "cplus.met"
#line 3065 "cplus.met"
            {
#line 3065 "cplus.met"
                PPTREE _ptTree0=0;
#line 3065 "cplus.met"
                {
#line 3065 "cplus.met"
                    PPTREE _ptTree1=0,_ptRes1=0;
#line 3065 "cplus.met"
                    _ptRes1= MakeTree(LONG, 1);
#line 3065 "cplus.met"
                    {
#line 3065 "cplus.met"
                        PPTREE _ptTree2=0,_ptRes2=0;
#line 3065 "cplus.met"
                        _ptRes2= MakeTree(HEXA, 1);
#line 3065 "cplus.met"
                        {
#line 3065 "cplus.met"
                            PPTREE _ptTree3=0,_ptRes3=0;
#line 3065 "cplus.met"
                            _ptRes3= MakeTree(INTEGER, 1);
#line 3065 "cplus.met"
                            (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3065 "cplus.met"
                            if ( ! TERM_OR_META(LHEXA,"LHEXA") || !(BUILD_TERM_META(_ptTree3))) {
#line 3065 "cplus.met"
                                MulFreeTree(7,_ptRes3,_ptTree3,_ptRes2,_ptTree2,_ptRes1,_ptTree1,_ptTree0);
                                TOKEN_EXIT(constan_exit,"LHEXA")
#line 3065 "cplus.met"
                            } else {
#line 3065 "cplus.met"
                                tokenAhead = 0 ;
#line 3065 "cplus.met"
                            }
#line 3065 "cplus.met"
                            ReplaceTree(_ptRes3, 1, _ptTree3);
#line 3065 "cplus.met"
                            _ptTree2=_ptRes3;
#line 3065 "cplus.met"
                        }
#line 3065 "cplus.met"
                        ReplaceTree(_ptRes2, 1, _ptTree2);
#line 3065 "cplus.met"
                        _ptTree1=_ptRes2;
#line 3065 "cplus.met"
                    }
#line 3065 "cplus.met"
                    ReplaceTree(_ptRes1, 1, _ptTree1);
#line 3065 "cplus.met"
                    _ptTree0=_ptRes1;
#line 3065 "cplus.met"
                }
#line 3065 "cplus.met"
                _retValue =_ptTree0;
#line 3065 "cplus.met"
                goto constan_ret;
#line 3065 "cplus.met"
            }
#line 3065 "cplus.met"
            break;
#line 3065 "cplus.met"
#line 3067 "cplus.met"
        case LLHEXA : 
#line 3067 "cplus.met"
#line 3067 "cplus.met"
            {
#line 3067 "cplus.met"
                PPTREE _ptTree0=0;
#line 3067 "cplus.met"
                {
#line 3067 "cplus.met"
                    PPTREE _ptTree1=0,_ptRes1=0;
#line 3067 "cplus.met"
                    _ptRes1= MakeTree(LONGLONG, 1);
#line 3067 "cplus.met"
                    {
#line 3067 "cplus.met"
                        PPTREE _ptTree2=0,_ptRes2=0;
#line 3067 "cplus.met"
                        _ptRes2= MakeTree(HEXA, 1);
#line 3067 "cplus.met"
                        {
#line 3067 "cplus.met"
                            PPTREE _ptTree3=0,_ptRes3=0;
#line 3067 "cplus.met"
                            _ptRes3= MakeTree(INTEGER, 1);
#line 3067 "cplus.met"
                            (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3067 "cplus.met"
                            if ( ! TERM_OR_META(LHEXA,"LHEXA") || !(BUILD_TERM_META(_ptTree3))) {
#line 3067 "cplus.met"
                                MulFreeTree(7,_ptRes3,_ptTree3,_ptRes2,_ptTree2,_ptRes1,_ptTree1,_ptTree0);
                                TOKEN_EXIT(constan_exit,"LHEXA")
#line 3067 "cplus.met"
                            } else {
#line 3067 "cplus.met"
                                tokenAhead = 0 ;
#line 3067 "cplus.met"
                            }
#line 3067 "cplus.met"
                            ReplaceTree(_ptRes3, 1, _ptTree3);
#line 3067 "cplus.met"
                            _ptTree2=_ptRes3;
#line 3067 "cplus.met"
                        }
#line 3067 "cplus.met"
                        ReplaceTree(_ptRes2, 1, _ptTree2);
#line 3067 "cplus.met"
                        _ptTree1=_ptRes2;
#line 3067 "cplus.met"
                    }
#line 3067 "cplus.met"
                    ReplaceTree(_ptRes1, 1, _ptTree1);
#line 3067 "cplus.met"
                    _ptTree0=_ptRes1;
#line 3067 "cplus.met"
                }
#line 3067 "cplus.met"
                _retValue =_ptTree0;
#line 3067 "cplus.met"
                goto constan_ret;
#line 3067 "cplus.met"
            }
#line 3067 "cplus.met"
            break;
#line 3067 "cplus.met"
#line 3069 "cplus.met"
        case UHEXA : 
#line 3069 "cplus.met"
#line 3069 "cplus.met"
            {
#line 3069 "cplus.met"
                PPTREE _ptTree0=0;
#line 3069 "cplus.met"
                {
#line 3069 "cplus.met"
                    PPTREE _ptTree1=0,_ptRes1=0;
#line 3069 "cplus.met"
                    _ptRes1= MakeTree(IUN, 1);
#line 3069 "cplus.met"
                    {
#line 3069 "cplus.met"
                        PPTREE _ptTree2=0,_ptRes2=0;
#line 3069 "cplus.met"
                        _ptRes2= MakeTree(HEXA, 1);
#line 3069 "cplus.met"
                        {
#line 3069 "cplus.met"
                            PPTREE _ptTree3=0,_ptRes3=0;
#line 3069 "cplus.met"
                            _ptRes3= MakeTree(INTEGER, 1);
#line 3069 "cplus.met"
                            (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3069 "cplus.met"
                            if ( ! TERM_OR_META(UHEXA,"UHEXA") || !(BUILD_TERM_META(_ptTree3))) {
#line 3069 "cplus.met"
                                MulFreeTree(7,_ptRes3,_ptTree3,_ptRes2,_ptTree2,_ptRes1,_ptTree1,_ptTree0);
                                TOKEN_EXIT(constan_exit,"UHEXA")
#line 3069 "cplus.met"
                            } else {
#line 3069 "cplus.met"
                                tokenAhead = 0 ;
#line 3069 "cplus.met"
                            }
#line 3069 "cplus.met"
                            ReplaceTree(_ptRes3, 1, _ptTree3);
#line 3069 "cplus.met"
                            _ptTree2=_ptRes3;
#line 3069 "cplus.met"
                        }
#line 3069 "cplus.met"
                        ReplaceTree(_ptRes2, 1, _ptTree2);
#line 3069 "cplus.met"
                        _ptTree1=_ptRes2;
#line 3069 "cplus.met"
                    }
#line 3069 "cplus.met"
                    ReplaceTree(_ptRes1, 1, _ptTree1);
#line 3069 "cplus.met"
                    _ptTree0=_ptRes1;
#line 3069 "cplus.met"
                }
#line 3069 "cplus.met"
                _retValue =_ptTree0;
#line 3069 "cplus.met"
                goto constan_ret;
#line 3069 "cplus.met"
            }
#line 3069 "cplus.met"
            break;
#line 3069 "cplus.met"
#line 3071 "cplus.met"
        case ULHEXA : 
#line 3071 "cplus.met"
#line 3071 "cplus.met"
            {
#line 3071 "cplus.met"
                PPTREE _ptTree0=0;
#line 3071 "cplus.met"
                {
#line 3071 "cplus.met"
                    PPTREE _ptTree1=0,_ptRes1=0;
#line 3071 "cplus.met"
                    _ptRes1= MakeTree(IUNLONG, 1);
#line 3071 "cplus.met"
                    {
#line 3071 "cplus.met"
                        PPTREE _ptTree2=0,_ptRes2=0;
#line 3071 "cplus.met"
                        _ptRes2= MakeTree(HEXA, 1);
#line 3071 "cplus.met"
                        {
#line 3071 "cplus.met"
                            PPTREE _ptTree3=0,_ptRes3=0;
#line 3071 "cplus.met"
                            _ptRes3= MakeTree(INTEGER, 1);
#line 3071 "cplus.met"
                            (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3071 "cplus.met"
                            if ( ! TERM_OR_META(ULHEXA,"ULHEXA") || !(BUILD_TERM_META(_ptTree3))) {
#line 3071 "cplus.met"
                                MulFreeTree(7,_ptRes3,_ptTree3,_ptRes2,_ptTree2,_ptRes1,_ptTree1,_ptTree0);
                                TOKEN_EXIT(constan_exit,"ULHEXA")
#line 3071 "cplus.met"
                            } else {
#line 3071 "cplus.met"
                                tokenAhead = 0 ;
#line 3071 "cplus.met"
                            }
#line 3071 "cplus.met"
                            ReplaceTree(_ptRes3, 1, _ptTree3);
#line 3071 "cplus.met"
                            _ptTree2=_ptRes3;
#line 3071 "cplus.met"
                        }
#line 3071 "cplus.met"
                        ReplaceTree(_ptRes2, 1, _ptTree2);
#line 3071 "cplus.met"
                        _ptTree1=_ptRes2;
#line 3071 "cplus.met"
                    }
#line 3071 "cplus.met"
                    ReplaceTree(_ptRes1, 1, _ptTree1);
#line 3071 "cplus.met"
                    _ptTree0=_ptRes1;
#line 3071 "cplus.met"
                }
#line 3071 "cplus.met"
                _retValue =_ptTree0;
#line 3071 "cplus.met"
                goto constan_ret;
#line 3071 "cplus.met"
            }
#line 3071 "cplus.met"
            break;
#line 3071 "cplus.met"
#line 3073 "cplus.met"
        case ULLHEXA : 
#line 3073 "cplus.met"
#line 3073 "cplus.met"
            {
#line 3073 "cplus.met"
                PPTREE _ptTree0=0;
#line 3073 "cplus.met"
                {
#line 3073 "cplus.met"
                    PPTREE _ptTree1=0,_ptRes1=0;
#line 3073 "cplus.met"
                    _ptRes1= MakeTree(IUNLONGLONG, 1);
#line 3073 "cplus.met"
                    {
#line 3073 "cplus.met"
                        PPTREE _ptTree2=0,_ptRes2=0;
#line 3073 "cplus.met"
                        _ptRes2= MakeTree(HEXA, 1);
#line 3073 "cplus.met"
                        {
#line 3073 "cplus.met"
                            PPTREE _ptTree3=0,_ptRes3=0;
#line 3073 "cplus.met"
                            _ptRes3= MakeTree(INTEGER, 1);
#line 3073 "cplus.met"
                            (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3073 "cplus.met"
                            if ( ! TERM_OR_META(ULHEXA,"ULHEXA") || !(BUILD_TERM_META(_ptTree3))) {
#line 3073 "cplus.met"
                                MulFreeTree(7,_ptRes3,_ptTree3,_ptRes2,_ptTree2,_ptRes1,_ptTree1,_ptTree0);
                                TOKEN_EXIT(constan_exit,"ULHEXA")
#line 3073 "cplus.met"
                            } else {
#line 3073 "cplus.met"
                                tokenAhead = 0 ;
#line 3073 "cplus.met"
                            }
#line 3073 "cplus.met"
                            ReplaceTree(_ptRes3, 1, _ptTree3);
#line 3073 "cplus.met"
                            _ptTree2=_ptRes3;
#line 3073 "cplus.met"
                        }
#line 3073 "cplus.met"
                        ReplaceTree(_ptRes2, 1, _ptTree2);
#line 3073 "cplus.met"
                        _ptTree1=_ptRes2;
#line 3073 "cplus.met"
                    }
#line 3073 "cplus.met"
                    ReplaceTree(_ptRes1, 1, _ptTree1);
#line 3073 "cplus.met"
                    _ptTree0=_ptRes1;
#line 3073 "cplus.met"
                }
#line 3073 "cplus.met"
                _retValue =_ptTree0;
#line 3073 "cplus.met"
                goto constan_ret;
#line 3073 "cplus.met"
            }
#line 3073 "cplus.met"
            break;
#line 3073 "cplus.met"
#line 3075 "cplus.met"
        case OCTAL : 
#line 3075 "cplus.met"
#line 3075 "cplus.met"
            {
#line 3075 "cplus.met"
                PPTREE _ptTree0=0;
#line 3075 "cplus.met"
                {
#line 3075 "cplus.met"
                    PPTREE _ptTree1=0,_ptRes1=0;
#line 3075 "cplus.met"
                    _ptRes1= MakeTree(OCTAL, 1);
#line 3075 "cplus.met"
                    {
#line 3075 "cplus.met"
                        PPTREE _ptTree2=0,_ptRes2=0;
#line 3075 "cplus.met"
                        _ptRes2= MakeTree(INTEGER, 1);
#line 3075 "cplus.met"
                        (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3075 "cplus.met"
                        if ( ! TERM_OR_META(OCTAL,"OCTAL") || !(BUILD_TERM_META(_ptTree2))) {
#line 3075 "cplus.met"
                            MulFreeTree(5,_ptRes2,_ptTree2,_ptRes1,_ptTree1,_ptTree0);
                            TOKEN_EXIT(constan_exit,"OCTAL")
#line 3075 "cplus.met"
                        } else {
#line 3075 "cplus.met"
                            tokenAhead = 0 ;
#line 3075 "cplus.met"
                        }
#line 3075 "cplus.met"
                        ReplaceTree(_ptRes2, 1, _ptTree2);
#line 3075 "cplus.met"
                        _ptTree1=_ptRes2;
#line 3075 "cplus.met"
                    }
#line 3075 "cplus.met"
                    ReplaceTree(_ptRes1, 1, _ptTree1);
#line 3075 "cplus.met"
                    _ptTree0=_ptRes1;
#line 3075 "cplus.met"
                }
#line 3075 "cplus.met"
                _retValue =_ptTree0;
#line 3075 "cplus.met"
                goto constan_ret;
#line 3075 "cplus.met"
            }
#line 3075 "cplus.met"
            break;
#line 3075 "cplus.met"
#line 3076 "cplus.met"
        case LOCTAL : 
#line 3076 "cplus.met"
#line 3076 "cplus.met"
            {
#line 3076 "cplus.met"
                PPTREE _ptTree0=0;
#line 3076 "cplus.met"
                {
#line 3076 "cplus.met"
                    PPTREE _ptTree1=0,_ptRes1=0;
#line 3076 "cplus.met"
                    _ptRes1= MakeTree(ILONG, 1);
#line 3076 "cplus.met"
                    {
#line 3076 "cplus.met"
                        PPTREE _ptTree2=0,_ptRes2=0;
#line 3076 "cplus.met"
                        _ptRes2= MakeTree(OCTAL, 1);
#line 3076 "cplus.met"
                        {
#line 3076 "cplus.met"
                            PPTREE _ptTree3=0,_ptRes3=0;
#line 3076 "cplus.met"
                            _ptRes3= MakeTree(INTEGER, 1);
#line 3076 "cplus.met"
                            (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3076 "cplus.met"
                            if ( ! TERM_OR_META(LOCTAL,"LOCTAL") || !(BUILD_TERM_META(_ptTree3))) {
#line 3076 "cplus.met"
                                MulFreeTree(7,_ptRes3,_ptTree3,_ptRes2,_ptTree2,_ptRes1,_ptTree1,_ptTree0);
                                TOKEN_EXIT(constan_exit,"LOCTAL")
#line 3076 "cplus.met"
                            } else {
#line 3076 "cplus.met"
                                tokenAhead = 0 ;
#line 3076 "cplus.met"
                            }
#line 3076 "cplus.met"
                            ReplaceTree(_ptRes3, 1, _ptTree3);
#line 3076 "cplus.met"
                            _ptTree2=_ptRes3;
#line 3076 "cplus.met"
                        }
#line 3076 "cplus.met"
                        ReplaceTree(_ptRes2, 1, _ptTree2);
#line 3076 "cplus.met"
                        _ptTree1=_ptRes2;
#line 3076 "cplus.met"
                    }
#line 3076 "cplus.met"
                    ReplaceTree(_ptRes1, 1, _ptTree1);
#line 3076 "cplus.met"
                    _ptTree0=_ptRes1;
#line 3076 "cplus.met"
                }
#line 3076 "cplus.met"
                _retValue =_ptTree0;
#line 3076 "cplus.met"
                goto constan_ret;
#line 3076 "cplus.met"
            }
#line 3076 "cplus.met"
            break;
#line 3076 "cplus.met"
#line 3078 "cplus.met"
        case LLOCTAL : 
#line 3078 "cplus.met"
#line 3078 "cplus.met"
            {
#line 3078 "cplus.met"
                PPTREE _ptTree0=0;
#line 3078 "cplus.met"
                {
#line 3078 "cplus.met"
                    PPTREE _ptTree1=0,_ptRes1=0;
#line 3078 "cplus.met"
                    _ptRes1= MakeTree(ILONGLONG, 1);
#line 3078 "cplus.met"
                    {
#line 3078 "cplus.met"
                        PPTREE _ptTree2=0,_ptRes2=0;
#line 3078 "cplus.met"
                        _ptRes2= MakeTree(OCTAL, 1);
#line 3078 "cplus.met"
                        {
#line 3078 "cplus.met"
                            PPTREE _ptTree3=0,_ptRes3=0;
#line 3078 "cplus.met"
                            _ptRes3= MakeTree(INTEGER, 1);
#line 3078 "cplus.met"
                            (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3078 "cplus.met"
                            if ( ! TERM_OR_META(LOCTAL,"LOCTAL") || !(BUILD_TERM_META(_ptTree3))) {
#line 3078 "cplus.met"
                                MulFreeTree(7,_ptRes3,_ptTree3,_ptRes2,_ptTree2,_ptRes1,_ptTree1,_ptTree0);
                                TOKEN_EXIT(constan_exit,"LOCTAL")
#line 3078 "cplus.met"
                            } else {
#line 3078 "cplus.met"
                                tokenAhead = 0 ;
#line 3078 "cplus.met"
                            }
#line 3078 "cplus.met"
                            ReplaceTree(_ptRes3, 1, _ptTree3);
#line 3078 "cplus.met"
                            _ptTree2=_ptRes3;
#line 3078 "cplus.met"
                        }
#line 3078 "cplus.met"
                        ReplaceTree(_ptRes2, 1, _ptTree2);
#line 3078 "cplus.met"
                        _ptTree1=_ptRes2;
#line 3078 "cplus.met"
                    }
#line 3078 "cplus.met"
                    ReplaceTree(_ptRes1, 1, _ptTree1);
#line 3078 "cplus.met"
                    _ptTree0=_ptRes1;
#line 3078 "cplus.met"
                }
#line 3078 "cplus.met"
                _retValue =_ptTree0;
#line 3078 "cplus.met"
                goto constan_ret;
#line 3078 "cplus.met"
            }
#line 3078 "cplus.met"
            break;
#line 3078 "cplus.met"
#line 3080 "cplus.met"
        case UOCTAL : 
#line 3080 "cplus.met"
#line 3080 "cplus.met"
            {
#line 3080 "cplus.met"
                PPTREE _ptTree0=0;
#line 3080 "cplus.met"
                {
#line 3080 "cplus.met"
                    PPTREE _ptTree1=0,_ptRes1=0;
#line 3080 "cplus.met"
                    _ptRes1= MakeTree(IUN, 1);
#line 3080 "cplus.met"
                    {
#line 3080 "cplus.met"
                        PPTREE _ptTree2=0,_ptRes2=0;
#line 3080 "cplus.met"
                        _ptRes2= MakeTree(OCTAL, 1);
#line 3080 "cplus.met"
                        {
#line 3080 "cplus.met"
                            PPTREE _ptTree3=0,_ptRes3=0;
#line 3080 "cplus.met"
                            _ptRes3= MakeTree(INTEGER, 1);
#line 3080 "cplus.met"
                            (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3080 "cplus.met"
                            if ( ! TERM_OR_META(UOCTAL,"UOCTAL") || !(BUILD_TERM_META(_ptTree3))) {
#line 3080 "cplus.met"
                                MulFreeTree(7,_ptRes3,_ptTree3,_ptRes2,_ptTree2,_ptRes1,_ptTree1,_ptTree0);
                                TOKEN_EXIT(constan_exit,"UOCTAL")
#line 3080 "cplus.met"
                            } else {
#line 3080 "cplus.met"
                                tokenAhead = 0 ;
#line 3080 "cplus.met"
                            }
#line 3080 "cplus.met"
                            ReplaceTree(_ptRes3, 1, _ptTree3);
#line 3080 "cplus.met"
                            _ptTree2=_ptRes3;
#line 3080 "cplus.met"
                        }
#line 3080 "cplus.met"
                        ReplaceTree(_ptRes2, 1, _ptTree2);
#line 3080 "cplus.met"
                        _ptTree1=_ptRes2;
#line 3080 "cplus.met"
                    }
#line 3080 "cplus.met"
                    ReplaceTree(_ptRes1, 1, _ptTree1);
#line 3080 "cplus.met"
                    _ptTree0=_ptRes1;
#line 3080 "cplus.met"
                }
#line 3080 "cplus.met"
                _retValue =_ptTree0;
#line 3080 "cplus.met"
                goto constan_ret;
#line 3080 "cplus.met"
            }
#line 3080 "cplus.met"
            break;
#line 3080 "cplus.met"
#line 3082 "cplus.met"
        case ULOCTAL : 
#line 3082 "cplus.met"
#line 3082 "cplus.met"
            {
#line 3082 "cplus.met"
                PPTREE _ptTree0=0;
#line 3082 "cplus.met"
                {
#line 3082 "cplus.met"
                    PPTREE _ptTree1=0,_ptRes1=0;
#line 3082 "cplus.met"
                    _ptRes1= MakeTree(IUNLONG, 1);
#line 3082 "cplus.met"
                    {
#line 3082 "cplus.met"
                        PPTREE _ptTree2=0,_ptRes2=0;
#line 3082 "cplus.met"
                        _ptRes2= MakeTree(OCTAL, 1);
#line 3082 "cplus.met"
                        {
#line 3082 "cplus.met"
                            PPTREE _ptTree3=0,_ptRes3=0;
#line 3082 "cplus.met"
                            _ptRes3= MakeTree(INTEGER, 1);
#line 3082 "cplus.met"
                            (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3082 "cplus.met"
                            if ( ! TERM_OR_META(ULOCTAL,"ULOCTAL") || !(BUILD_TERM_META(_ptTree3))) {
#line 3082 "cplus.met"
                                MulFreeTree(7,_ptRes3,_ptTree3,_ptRes2,_ptTree2,_ptRes1,_ptTree1,_ptTree0);
                                TOKEN_EXIT(constan_exit,"ULOCTAL")
#line 3082 "cplus.met"
                            } else {
#line 3082 "cplus.met"
                                tokenAhead = 0 ;
#line 3082 "cplus.met"
                            }
#line 3082 "cplus.met"
                            ReplaceTree(_ptRes3, 1, _ptTree3);
#line 3082 "cplus.met"
                            _ptTree2=_ptRes3;
#line 3082 "cplus.met"
                        }
#line 3082 "cplus.met"
                        ReplaceTree(_ptRes2, 1, _ptTree2);
#line 3082 "cplus.met"
                        _ptTree1=_ptRes2;
#line 3082 "cplus.met"
                    }
#line 3082 "cplus.met"
                    ReplaceTree(_ptRes1, 1, _ptTree1);
#line 3082 "cplus.met"
                    _ptTree0=_ptRes1;
#line 3082 "cplus.met"
                }
#line 3082 "cplus.met"
                _retValue =_ptTree0;
#line 3082 "cplus.met"
                goto constan_ret;
#line 3082 "cplus.met"
            }
#line 3082 "cplus.met"
            break;
#line 3082 "cplus.met"
#line 3084 "cplus.met"
        case ULLOCTAL : 
#line 3084 "cplus.met"
#line 3084 "cplus.met"
            {
#line 3084 "cplus.met"
                PPTREE _ptTree0=0;
#line 3084 "cplus.met"
                {
#line 3084 "cplus.met"
                    PPTREE _ptTree1=0,_ptRes1=0;
#line 3084 "cplus.met"
                    _ptRes1= MakeTree(IUNLONGLONG, 1);
#line 3084 "cplus.met"
                    {
#line 3084 "cplus.met"
                        PPTREE _ptTree2=0,_ptRes2=0;
#line 3084 "cplus.met"
                        _ptRes2= MakeTree(OCTAL, 1);
#line 3084 "cplus.met"
                        {
#line 3084 "cplus.met"
                            PPTREE _ptTree3=0,_ptRes3=0;
#line 3084 "cplus.met"
                            _ptRes3= MakeTree(INTEGER, 1);
#line 3084 "cplus.met"
                            (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3084 "cplus.met"
                            if ( ! TERM_OR_META(ULOCTAL,"ULOCTAL") || !(BUILD_TERM_META(_ptTree3))) {
#line 3084 "cplus.met"
                                MulFreeTree(7,_ptRes3,_ptTree3,_ptRes2,_ptTree2,_ptRes1,_ptTree1,_ptTree0);
                                TOKEN_EXIT(constan_exit,"ULOCTAL")
#line 3084 "cplus.met"
                            } else {
#line 3084 "cplus.met"
                                tokenAhead = 0 ;
#line 3084 "cplus.met"
                            }
#line 3084 "cplus.met"
                            ReplaceTree(_ptRes3, 1, _ptTree3);
#line 3084 "cplus.met"
                            _ptTree2=_ptRes3;
#line 3084 "cplus.met"
                        }
#line 3084 "cplus.met"
                        ReplaceTree(_ptRes2, 1, _ptTree2);
#line 3084 "cplus.met"
                        _ptTree1=_ptRes2;
#line 3084 "cplus.met"
                    }
#line 3084 "cplus.met"
                    ReplaceTree(_ptRes1, 1, _ptTree1);
#line 3084 "cplus.met"
                    _ptTree0=_ptRes1;
#line 3084 "cplus.met"
                }
#line 3084 "cplus.met"
                _retValue =_ptTree0;
#line 3084 "cplus.met"
                goto constan_ret;
#line 3084 "cplus.met"
            }
#line 3084 "cplus.met"
            break;
#line 3084 "cplus.met"
#line 3086 "cplus.met"
        case FLOATVAL : 
#line 3086 "cplus.met"
#line 3086 "cplus.met"
            {
#line 3086 "cplus.met"
                PPTREE _ptTree0=0;
#line 3086 "cplus.met"
                {
#line 3086 "cplus.met"
                    PPTREE _ptTree1=0,_ptRes1=0;
#line 3086 "cplus.met"
                    _ptRes1= MakeTree(FLOAT, 1);
#line 3086 "cplus.met"
                    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3086 "cplus.met"
                    if ( ! TERM_OR_META(FLOATVAL,"FLOATVAL") || !(BUILD_TERM_META(_ptTree1))) {
#line 3086 "cplus.met"
                        MulFreeTree(3,_ptRes1,_ptTree1,_ptTree0);
                        TOKEN_EXIT(constan_exit,"FLOATVAL")
#line 3086 "cplus.met"
                    } else {
#line 3086 "cplus.met"
                        tokenAhead = 0 ;
#line 3086 "cplus.met"
                    }
#line 3086 "cplus.met"
                    ReplaceTree(_ptRes1, 1, _ptTree1);
#line 3086 "cplus.met"
                    _ptTree0=_ptRes1;
#line 3086 "cplus.met"
                }
#line 3086 "cplus.met"
                _retValue =_ptTree0;
#line 3086 "cplus.met"
                goto constan_ret;
#line 3086 "cplus.met"
            }
#line 3086 "cplus.met"
            break;
#line 3086 "cplus.met"
#line 3087 "cplus.met"
        case CHARACT : 
#line 3087 "cplus.met"
#line 3087 "cplus.met"
            {
#line 3087 "cplus.met"
                PPTREE _ptTree0=0;
#line 3087 "cplus.met"
                {
#line 3087 "cplus.met"
                    PPTREE _ptTree1=0,_ptRes1=0;
#line 3087 "cplus.met"
                    _ptRes1= MakeTree(CHAR, 1);
#line 3087 "cplus.met"
                    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3087 "cplus.met"
                    if ( ! TERM_OR_META(CHARACT,"CHARACT") || !(BUILD_TERM_META(_ptTree1))) {
#line 3087 "cplus.met"
                        MulFreeTree(3,_ptRes1,_ptTree1,_ptTree0);
                        TOKEN_EXIT(constan_exit,"CHARACT")
#line 3087 "cplus.met"
                    } else {
#line 3087 "cplus.met"
                        tokenAhead = 0 ;
#line 3087 "cplus.met"
                    }
#line 3087 "cplus.met"
                    ReplaceTree(_ptRes1, 1, _ptTree1);
#line 3087 "cplus.met"
                    _ptTree0=_ptRes1;
#line 3087 "cplus.met"
                }
#line 3087 "cplus.met"
                _retValue =_ptTree0;
#line 3087 "cplus.met"
                goto constan_ret;
#line 3087 "cplus.met"
            }
#line 3087 "cplus.met"
            break;
#line 3087 "cplus.met"
        default :
#line 3087 "cplus.met"
            CASE_EXIT(constan_exit,"either INTEGER or LINTEGER or LLINTEGER or UINTEGER or ULINTEGER or ULLINTEGER or HEXA or LHEXA or LLHEXA or UHEXA or ULHEXA or ULLHEXA or OCTAL or LOCTAL or LLOCTAL or UOCTAL or ULOCTAL or ULLOCTAL or FLOATVAL or CHARACT")
#line 3087 "cplus.met"
            break;
#line 3087 "cplus.met"
    }
#line 3087 "cplus.met"
#line 3087 "cplus.met"
#line 3088 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 3088 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 3088 "cplus.met"
return((PPTREE) 0);
#line 3088 "cplus.met"

#line 3088 "cplus.met"
constan_exit :
#line 3088 "cplus.met"

#line 3088 "cplus.met"
    _Debug = TRACE_RULE("constan",TRACE_EXIT,(PPTREE)0);
#line 3088 "cplus.met"
    _funcLevel--;
#line 3088 "cplus.met"
    return((PPTREE) -1) ;
#line 3088 "cplus.met"

#line 3088 "cplus.met"
constan_ret :
#line 3088 "cplus.met"
    
#line 3088 "cplus.met"
    _Debug = TRACE_RULE("constan",TRACE_RETURN,_retValue);
#line 3088 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 3088 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 3088 "cplus.met"
    return _retValue ;
#line 3088 "cplus.met"
}
#line 3088 "cplus.met"

#line 3088 "cplus.met"
