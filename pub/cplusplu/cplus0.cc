/*************************************************************************/
/*                                                                       */
/*        Produced by MetaGen version 2.0  -    1989-2006                 */
/*       Syntaxic Analyzer Meta Generator developped by                  */
/*                  Eric Lavillonniere                                   */
/*                                                                       */
/*************************************************************************/

#include "token.h"
#include "cplus.h"


#line 1881 "cplus.met"
PPTREE cplus::base_specifier_elem ( int error_free)
#line 1881 "cplus.met"
{
#line 1881 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 1881 "cplus.met"
    int _value,_nbPre = 0 ;
#line 1881 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 1881 "cplus.met"
    int _Debug = TRACE_RULE("base_specifier_elem",TRACE_ENTER,(PPTREE)0);
#line 1881 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 1881 "cplus.met"
#line 1881 "cplus.met"
    PPTREE ret = (PPTREE) 0;
#line 1881 "cplus.met"
#line 1883 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 1883 "cplus.met"
    switch( lexEl.Value) {
#line 1883 "cplus.met"
#line 1884 "cplus.met"
        case PRIVATE : 
#line 1884 "cplus.met"
            tokenAhead = 0 ;
#line 1884 "cplus.met"
            CommTerm();
#line 1884 "cplus.met"
#line 1884 "cplus.met"
            {
#line 1884 "cplus.met"
                PPTREE _ptTree0=0;
#line 1884 "cplus.met"
                {
#line 1884 "cplus.met"
                    PPTREE _ptTree1=0,_ptRes1=0;
#line 1884 "cplus.met"
                    _ptRes1= MakeTree(PROTECT, 2);
#line 1884 "cplus.met"
                    ReplaceTree(_ptRes1, 1, MakeString ("private"));
#line 1884 "cplus.met"
                    if ( (_ptTree1=NQUICK_CALL(_Tak(base_specifier_elem)(error_free), 17, cplus))== (PPTREE) -1 ) {
#line 1884 "cplus.met"
                        MulFreeTree(4,_ptRes1,_ptTree1,_ptTree0,ret);
                        PROG_EXIT(base_specifier_elem_exit,"base_specifier_elem")
#line 1884 "cplus.met"
                    }
#line 1884 "cplus.met"
                    ReplaceTree(_ptRes1, 2, _ptTree1);
#line 1884 "cplus.met"
                    _ptTree0=_ptRes1;
#line 1884 "cplus.met"
                }
#line 1884 "cplus.met"
                _retValue =_ptTree0;
#line 1884 "cplus.met"
                goto base_specifier_elem_ret;
#line 1884 "cplus.met"
            }
#line 1884 "cplus.met"
            break;
#line 1884 "cplus.met"
#line 1886 "cplus.met"
        case PROTECTED : 
#line 1886 "cplus.met"
            tokenAhead = 0 ;
#line 1886 "cplus.met"
            CommTerm();
#line 1886 "cplus.met"
#line 1886 "cplus.met"
            {
#line 1886 "cplus.met"
                PPTREE _ptTree0=0;
#line 1886 "cplus.met"
                {
#line 1886 "cplus.met"
                    PPTREE _ptTree1=0,_ptRes1=0;
#line 1886 "cplus.met"
                    _ptRes1= MakeTree(PROTECT, 2);
#line 1886 "cplus.met"
                    ReplaceTree(_ptRes1, 1, MakeString ("protected"));
#line 1886 "cplus.met"
                    if ( (_ptTree1=NQUICK_CALL(_Tak(base_specifier_elem)(error_free), 17, cplus))== (PPTREE) -1 ) {
#line 1886 "cplus.met"
                        MulFreeTree(4,_ptRes1,_ptTree1,_ptTree0,ret);
                        PROG_EXIT(base_specifier_elem_exit,"base_specifier_elem")
#line 1886 "cplus.met"
                    }
#line 1886 "cplus.met"
                    ReplaceTree(_ptRes1, 2, _ptTree1);
#line 1886 "cplus.met"
                    _ptTree0=_ptRes1;
#line 1886 "cplus.met"
                }
#line 1886 "cplus.met"
                _retValue =_ptTree0;
#line 1886 "cplus.met"
                goto base_specifier_elem_ret;
#line 1886 "cplus.met"
            }
#line 1886 "cplus.met"
            break;
#line 1886 "cplus.met"
#line 1888 "cplus.met"
        case PUBLIC : 
#line 1888 "cplus.met"
            tokenAhead = 0 ;
#line 1888 "cplus.met"
            CommTerm();
#line 1888 "cplus.met"
#line 1888 "cplus.met"
            {
#line 1888 "cplus.met"
                PPTREE _ptTree0=0;
#line 1888 "cplus.met"
                {
#line 1888 "cplus.met"
                    PPTREE _ptTree1=0,_ptRes1=0;
#line 1888 "cplus.met"
                    _ptRes1= MakeTree(PROTECT, 2);
#line 1888 "cplus.met"
                    ReplaceTree(_ptRes1, 1, MakeString ("public"));
#line 1888 "cplus.met"
                    if ( (_ptTree1=NQUICK_CALL(_Tak(base_specifier_elem)(error_free), 17, cplus))== (PPTREE) -1 ) {
#line 1888 "cplus.met"
                        MulFreeTree(4,_ptRes1,_ptTree1,_ptTree0,ret);
                        PROG_EXIT(base_specifier_elem_exit,"base_specifier_elem")
#line 1888 "cplus.met"
                    }
#line 1888 "cplus.met"
                    ReplaceTree(_ptRes1, 2, _ptTree1);
#line 1888 "cplus.met"
                    _ptTree0=_ptRes1;
#line 1888 "cplus.met"
                }
#line 1888 "cplus.met"
                _retValue =_ptTree0;
#line 1888 "cplus.met"
                goto base_specifier_elem_ret;
#line 1888 "cplus.met"
            }
#line 1888 "cplus.met"
            break;
#line 1888 "cplus.met"
#line 1890 "cplus.met"
        case VIRTUAL : 
#line 1890 "cplus.met"
            tokenAhead = 0 ;
#line 1890 "cplus.met"
            CommTerm();
#line 1890 "cplus.met"
#line 1890 "cplus.met"
            {
#line 1890 "cplus.met"
                PPTREE _ptTree0=0;
#line 1890 "cplus.met"
                {
#line 1890 "cplus.met"
                    PPTREE _ptTree1=0,_ptRes1=0;
#line 1890 "cplus.met"
                    _ptRes1= MakeTree(PROTECT, 2);
#line 1890 "cplus.met"
                    ReplaceTree(_ptRes1, 1, MakeString ("virtual"));
#line 1890 "cplus.met"
                    if ( (_ptTree1=NQUICK_CALL(_Tak(base_specifier_elem)(error_free), 17, cplus))== (PPTREE) -1 ) {
#line 1890 "cplus.met"
                        MulFreeTree(4,_ptRes1,_ptTree1,_ptTree0,ret);
                        PROG_EXIT(base_specifier_elem_exit,"base_specifier_elem")
#line 1890 "cplus.met"
                    }
#line 1890 "cplus.met"
                    ReplaceTree(_ptRes1, 2, _ptTree1);
#line 1890 "cplus.met"
                    _ptTree0=_ptRes1;
#line 1890 "cplus.met"
                }
#line 1890 "cplus.met"
                _retValue =_ptTree0;
#line 1890 "cplus.met"
                goto base_specifier_elem_ret;
#line 1890 "cplus.met"
            }
#line 1890 "cplus.met"
            break;
#line 1890 "cplus.met"
#line 1890 "cplus.met"
        default : 
#line 1890 "cplus.met"
#line 1890 "cplus.met"
            break;
#line 1890 "cplus.met"
    }
#line 1890 "cplus.met"
#line 1894 "cplus.met"
    if ( (ret=NQUICK_CALL(_Tak(complete_class_name)(error_free), 25, cplus))== (PPTREE) -1 ) {
#line 1894 "cplus.met"
        MulFreeTree(1,ret);
        PROG_EXIT(base_specifier_elem_exit,"base_specifier_elem")
#line 1894 "cplus.met"
    }
#line 1894 "cplus.met"
#line 1895 "cplus.met"
    {
#line 1895 "cplus.met"
        _retValue = ret ;
#line 1895 "cplus.met"
        goto base_specifier_elem_ret;
#line 1895 "cplus.met"
        
#line 1895 "cplus.met"
    }
#line 1895 "cplus.met"
#line 1895 "cplus.met"
#line 1895 "cplus.met"

#line 1896 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1896 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 1896 "cplus.met"
return((PPTREE) 0);
#line 1896 "cplus.met"

#line 1896 "cplus.met"
base_specifier_elem_exit :
#line 1896 "cplus.met"

#line 1896 "cplus.met"
    _Debug = TRACE_RULE("base_specifier_elem",TRACE_EXIT,(PPTREE)0);
#line 1896 "cplus.met"
    _funcLevel--;
#line 1896 "cplus.met"
    return((PPTREE) -1) ;
#line 1896 "cplus.met"

#line 1896 "cplus.met"
base_specifier_elem_ret :
#line 1896 "cplus.met"
    
#line 1896 "cplus.met"
    _Debug = TRACE_RULE("base_specifier_elem",TRACE_RETURN,_retValue);
#line 1896 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1896 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 1896 "cplus.met"
    return _retValue ;
#line 1896 "cplus.met"
}
#line 1896 "cplus.met"

#line 1896 "cplus.met"
#line 3611 "cplus.met"
PPTREE cplus::bidon ( int error_free)
#line 3611 "cplus.met"
{
#line 3611 "cplus.met"
    int  _oldnoString = noString;
#line 3611 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 3611 "cplus.met"
    int _value,_nbPre = 0 ;
#line 3611 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 3611 "cplus.met"
    int _Debug = TRACE_RULE("bidon",TRACE_ENTER,(PPTREE)0);
#line 3611 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 3611 "cplus.met"
#line 3612 "cplus.met"
    {
#line 3612 "cplus.met"
        noString = 1 ;
#line 3612 "cplus.met"
#line 3613 "cplus.met"
#line 3613 "cplus.met"
        noString =  _oldnoString;
#line 3613 "cplus.met"
    }
#line 3613 "cplus.met"
#line 3613 "cplus.met"
#line 3614 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 3614 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 3614 "cplus.met"
noString =  _oldnoString;
#line 3614 "cplus.met"
return((PPTREE) 0);
#line 3614 "cplus.met"

#line 3614 "cplus.met"
bidon_exit :
#line 3614 "cplus.met"

#line 3614 "cplus.met"
    _Debug = TRACE_RULE("bidon",TRACE_EXIT,(PPTREE)0);
#line 3614 "cplus.met"
    _funcLevel--;
#line 3614 "cplus.met"
    noString =  _oldnoString;
#line 3614 "cplus.met"
    return((PPTREE) -1) ;
#line 3614 "cplus.met"

#line 3614 "cplus.met"
bidon_ret :
#line 3614 "cplus.met"
    
#line 3614 "cplus.met"
    _Debug = TRACE_RULE("bidon",TRACE_RETURN,_retValue);
#line 3614 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 3614 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 3614 "cplus.met"
    noString =  _oldnoString;
#line 3614 "cplus.met"
    return _retValue ;
#line 3614 "cplus.met"
}
#line 3614 "cplus.met"

#line 3614 "cplus.met"
#line 2564 "cplus.met"
PPTREE cplus::bit_field_decl ( int error_free)
#line 2564 "cplus.met"
{
#line 2564 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 2564 "cplus.met"
    int _value,_nbPre = 0 ;
#line 2564 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 2564 "cplus.met"
    int _Debug = TRACE_RULE("bit_field_decl",TRACE_ENTER,(PPTREE)0);
#line 2564 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 2564 "cplus.met"
#line 2564 "cplus.met"
    PPTREE retTree = (PPTREE) 0,ident = (PPTREE) 0;
#line 2564 "cplus.met"
#line 2567 "cplus.met"
    {
#line 2567 "cplus.met"
        PPTREE _ptRes0=0;
#line 2567 "cplus.met"
        _ptRes0= MakeTree(TYP_BIT, 2);
#line 2567 "cplus.met"
        retTree=_ptRes0;
#line 2567 "cplus.met"
    }
#line 2567 "cplus.met"
#line 2569 "cplus.met"
    if ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN( IDENT,"IDENT")){
#line 2569 "cplus.met"
#line 2570 "cplus.met"
        {
#line 2570 "cplus.met"
            PPTREE _ptTree0=0;
#line 2570 "cplus.met"
            {
#line 2570 "cplus.met"
                PPTREE _ptTree1=0,_ptRes1=0;
#line 2570 "cplus.met"
                _ptRes1= MakeTree(IDENT, 1);
#line 2570 "cplus.met"
                (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 2570 "cplus.met"
                if ( ! TERM_OR_META(IDENT,"IDENT") || !(BUILD_TERM_META(_ptTree1))) {
#line 2570 "cplus.met"
                    MulFreeTree(5,_ptRes1,_ptTree1,_ptTree0,ident,retTree);
                    TOKEN_EXIT(bit_field_decl_exit,"IDENT")
#line 2570 "cplus.met"
                } else {
#line 2570 "cplus.met"
                    tokenAhead = 0 ;
#line 2570 "cplus.met"
                }
#line 2570 "cplus.met"
                ReplaceTree(_ptRes1, 1, _ptTree1);
#line 2570 "cplus.met"
                _ptTree0=_ptRes1;
#line 2570 "cplus.met"
            }
#line 2570 "cplus.met"
            ReplaceTree(retTree , 1 , _ptTree0);
#line 2570 "cplus.met"
        }
#line 2570 "cplus.met"
#line 2570 "cplus.met"
    }
#line 2570 "cplus.met"
#line 2571 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 2571 "cplus.met"
    if (  !SEE_TOKEN( DPOI,":") || !(CommTerm(),1)) {
#line 2571 "cplus.met"
        MulFreeTree(2,ident,retTree);
        TOKEN_EXIT(bit_field_decl_exit,":")
#line 2571 "cplus.met"
    } else {
#line 2571 "cplus.met"
        tokenAhead = 0 ;
#line 2571 "cplus.met"
    }
#line 2571 "cplus.met"
#line 2572 "cplus.met"
    {
#line 2572 "cplus.met"
        PPTREE _ptTree0=0;
#line 2572 "cplus.met"
        {
#line 2572 "cplus.met"
            PPTREE _ptTree1=0;
#line 2572 "cplus.met"
            if ( (_ptTree1=NQUICK_CALL(_Tak(assignment_expression)(error_free), 15, cplus))== (PPTREE) -1 ) {
#line 2572 "cplus.met"
                MulFreeTree(4,_ptTree1,_ptTree0,ident,retTree);
                PROG_EXIT(bit_field_decl_exit,"bit_field_decl")
#line 2572 "cplus.met"
            }
#line 2572 "cplus.met"
            _ptTree0=ReplaceTree(retTree , 2 , _ptTree1);
#line 2572 "cplus.met"
        }
#line 2572 "cplus.met"
        _retValue =_ptTree0;
#line 2572 "cplus.met"
        goto bit_field_decl_ret;
#line 2572 "cplus.met"
    }
#line 2572 "cplus.met"
#line 2572 "cplus.met"
#line 2572 "cplus.met"

#line 2573 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2573 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 2573 "cplus.met"
return((PPTREE) 0);
#line 2573 "cplus.met"

#line 2573 "cplus.met"
bit_field_decl_exit :
#line 2573 "cplus.met"

#line 2573 "cplus.met"
    _Debug = TRACE_RULE("bit_field_decl",TRACE_EXIT,(PPTREE)0);
#line 2573 "cplus.met"
    _funcLevel--;
#line 2573 "cplus.met"
    return((PPTREE) -1) ;
#line 2573 "cplus.met"

#line 2573 "cplus.met"
bit_field_decl_ret :
#line 2573 "cplus.met"
    
#line 2573 "cplus.met"
    _Debug = TRACE_RULE("bit_field_decl",TRACE_RETURN,_retValue);
#line 2573 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2573 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 2573 "cplus.met"
    return _retValue ;
#line 2573 "cplus.met"
}
#line 2573 "cplus.met"

#line 2573 "cplus.met"
#line 2759 "cplus.met"
PPTREE cplus::cast_expression ( int error_free)
#line 2759 "cplus.met"
{
#line 2759 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 2759 "cplus.met"
    int _value,_nbPre = 0 ;
#line 2759 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 2759 "cplus.met"
    int _Debug = TRACE_RULE("cast_expression",TRACE_ENTER,(PPTREE)0);
#line 2759 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 2759 "cplus.met"
#line 2759 "cplus.met"
    PPTREE retTree = (PPTREE) 0;
#line 2759 "cplus.met"
#line 2761 "cplus.met"
    if (NPUSH_CALL_AFF_VERIF(retTree = ,_Tak(cast_expression_value), 20, cplus)){
#line 2761 "cplus.met"
#line 2762 "cplus.met"
        {
#line 2762 "cplus.met"
            _retValue = retTree ;
#line 2762 "cplus.met"
            goto cast_expression_ret;
#line 2762 "cplus.met"
            
#line 2762 "cplus.met"
        }
#line 2762 "cplus.met"
    } else {
#line 2762 "cplus.met"
#line 2764 "cplus.met"
        {
#line 2764 "cplus.met"
            PPTREE _ptTree0=0;
#line 2764 "cplus.met"
            if ( (_ptTree0=NQUICK_CALL(_Tak(unary_expression)(error_free), 145, cplus))== (PPTREE) -1 ) {
#line 2764 "cplus.met"
                MulFreeTree(2,_ptTree0,retTree);
                PROG_EXIT(cast_expression_exit,"cast_expression")
#line 2764 "cplus.met"
            }
#line 2764 "cplus.met"
            _retValue =_ptTree0;
#line 2764 "cplus.met"
            goto cast_expression_ret;
#line 2764 "cplus.met"
        }
#line 2764 "cplus.met"
    }
#line 2764 "cplus.met"
#line 2764 "cplus.met"
#line 2764 "cplus.met"

#line 2765 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2765 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 2765 "cplus.met"
return((PPTREE) 0);
#line 2765 "cplus.met"

#line 2765 "cplus.met"
cast_expression_exit :
#line 2765 "cplus.met"

#line 2765 "cplus.met"
    _Debug = TRACE_RULE("cast_expression",TRACE_EXIT,(PPTREE)0);
#line 2765 "cplus.met"
    _funcLevel--;
#line 2765 "cplus.met"
    return((PPTREE) -1) ;
#line 2765 "cplus.met"

#line 2765 "cplus.met"
cast_expression_ret :
#line 2765 "cplus.met"
    
#line 2765 "cplus.met"
    _Debug = TRACE_RULE("cast_expression",TRACE_RETURN,_retValue);
#line 2765 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2765 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 2765 "cplus.met"
    return _retValue ;
#line 2765 "cplus.met"
}
#line 2765 "cplus.met"

#line 2765 "cplus.met"
#line 2751 "cplus.met"
PPTREE cplus::cast_expression_value ( int error_free)
#line 2751 "cplus.met"
{
#line 2751 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 2751 "cplus.met"
    int _value,_nbPre = 0 ;
#line 2751 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 2751 "cplus.met"
    int _Debug = TRACE_RULE("cast_expression_value",TRACE_ENTER,(PPTREE)0);
#line 2751 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 2751 "cplus.met"
#line 2751 "cplus.met"
    PPTREE ret = (PPTREE) 0;
#line 2751 "cplus.met"
#line 2753 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 2753 "cplus.met"
    if (  !SEE_TOKEN( POUV,"(") || !(CommTerm(),1)) {
#line 2753 "cplus.met"
        MulFreeTree(1,ret);
        TOKEN_EXIT(cast_expression_value_exit,"(")
#line 2753 "cplus.met"
    } else {
#line 2753 "cplus.met"
        tokenAhead = 0 ;
#line 2753 "cplus.met"
    }
#line 2753 "cplus.met"
#line 2754 "cplus.met"
    if ( (ret=NQUICK_CALL(_Tak(type_name)(error_free), 141, cplus))== (PPTREE) -1 ) {
#line 2754 "cplus.met"
        MulFreeTree(1,ret);
        PROG_EXIT(cast_expression_value_exit,"cast_expression_value")
#line 2754 "cplus.met"
    }
#line 2754 "cplus.met"
#line 2755 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 2755 "cplus.met"
    if (  !SEE_TOKEN( PFER,")") || !(CommTerm(),1)) {
#line 2755 "cplus.met"
        MulFreeTree(1,ret);
        TOKEN_EXIT(cast_expression_value_exit,")")
#line 2755 "cplus.met"
    } else {
#line 2755 "cplus.met"
        tokenAhead = 0 ;
#line 2755 "cplus.met"
    }
#line 2755 "cplus.met"
#line 2756 "cplus.met"
    {
#line 2756 "cplus.met"
        PPTREE _ptTree0=0;
#line 2756 "cplus.met"
        {
#line 2756 "cplus.met"
            PPTREE _ptTree1=0,_ptRes1=0;
#line 2756 "cplus.met"
            _ptRes1= MakeTree(CAST, 2);
#line 2756 "cplus.met"
            ReplaceTree(_ptRes1, 1, ret );
#line 2756 "cplus.met"
            if ( (_ptTree1=NQUICK_CALL(_Tak(cast_expression)(error_free), 19, cplus))== (PPTREE) -1 ) {
#line 2756 "cplus.met"
                MulFreeTree(4,_ptRes1,_ptTree1,_ptTree0,ret);
                PROG_EXIT(cast_expression_value_exit,"cast_expression_value")
#line 2756 "cplus.met"
            }
#line 2756 "cplus.met"
            ReplaceTree(_ptRes1, 2, _ptTree1);
#line 2756 "cplus.met"
            _ptTree0=_ptRes1;
#line 2756 "cplus.met"
        }
#line 2756 "cplus.met"
        _retValue =_ptTree0;
#line 2756 "cplus.met"
        goto cast_expression_value_ret;
#line 2756 "cplus.met"
    }
#line 2756 "cplus.met"
#line 2756 "cplus.met"
#line 2756 "cplus.met"

#line 2757 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2757 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 2757 "cplus.met"
return((PPTREE) 0);
#line 2757 "cplus.met"

#line 2757 "cplus.met"
cast_expression_value_exit :
#line 2757 "cplus.met"

#line 2757 "cplus.met"
    _Debug = TRACE_RULE("cast_expression_value",TRACE_EXIT,(PPTREE)0);
#line 2757 "cplus.met"
    _funcLevel--;
#line 2757 "cplus.met"
    return((PPTREE) -1) ;
#line 2757 "cplus.met"

#line 2757 "cplus.met"
cast_expression_value_ret :
#line 2757 "cplus.met"
    
#line 2757 "cplus.met"
    _Debug = TRACE_RULE("cast_expression_value",TRACE_RETURN,_retValue);
#line 2757 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2757 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 2757 "cplus.met"
    return _retValue ;
#line 2757 "cplus.met"
}
#line 2757 "cplus.met"

#line 2757 "cplus.met"
#line 1991 "cplus.met"
PPTREE cplus::catch_unit ( int error_free)
#line 1991 "cplus.met"
{
#line 1991 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 1991 "cplus.met"
    int _value,_nbPre = 0 ;
#line 1991 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 1991 "cplus.met"
    int _Debug = TRACE_RULE("catch_unit",TRACE_ENTER,(PPTREE)0);
#line 1991 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 1991 "cplus.met"
#line 1992 "cplus.met"
    (tokenAhead == 13|| (specific(),TRACE_LEX(1)));
#line 1992 "cplus.met"
    switch( lexEl.Value) {
#line 1992 "cplus.met"
#line 1993 "cplus.met"
        case META : 
#line 1993 "cplus.met"
        case CATCH_UPPER : 
#line 1993 "cplus.met"
#line 1993 "cplus.met"
            {
#line 1993 "cplus.met"
                PPTREE _ptTree0=0;
#line 1993 "cplus.met"
                {
#line 1993 "cplus.met"
                    PPTREE _ptTree1=0,_ptRes1=0;
#line 1993 "cplus.met"
                    _ptRes1= MakeTree(CATCH, 2);
#line 1993 "cplus.met"
                    if ( (_ptTree1=NQUICK_CALL(_Tak(macro)(error_free), 89, cplus))== (PPTREE) -1 ) {
#line 1993 "cplus.met"
                        MulFreeTree(3,_ptRes1,_ptTree1,_ptTree0);
                        PROG_EXIT(catch_unit_exit,"catch_unit")
#line 1993 "cplus.met"
                    }
#line 1993 "cplus.met"
                    ReplaceTree(_ptRes1, 1, _ptTree1);
#line 1993 "cplus.met"
                    if ( (_ptTree1=NQUICK_CALL(_Tak(compound_statement)(error_free), 26, cplus))== (PPTREE) -1 ) {
#line 1993 "cplus.met"
                        MulFreeTree(3,_ptRes1,_ptTree1,_ptTree0);
                        PROG_EXIT(catch_unit_exit,"catch_unit")
#line 1993 "cplus.met"
                    }
#line 1993 "cplus.met"
                    ReplaceTree(_ptRes1, 2, _ptTree1);
#line 1993 "cplus.met"
                    _ptTree0=_ptRes1;
#line 1993 "cplus.met"
                }
#line 1993 "cplus.met"
                _retValue =_ptTree0;
#line 1993 "cplus.met"
                goto catch_unit_ret;
#line 1993 "cplus.met"
            }
#line 1993 "cplus.met"
            break;
#line 1993 "cplus.met"
#line 1995 "cplus.met"
        case CATCH_ALL : 
#line 1995 "cplus.met"
#line 1995 "cplus.met"
            {
#line 1995 "cplus.met"
                PPTREE _ptTree0=0;
#line 1995 "cplus.met"
                {
#line 1995 "cplus.met"
                    PPTREE _ptTree1=0,_ptRes1=0;
#line 1995 "cplus.met"
                    _ptRes1= MakeTree(CATCH, 2);
#line 1995 "cplus.met"
                    if ( (_ptTree1=NQUICK_CALL(_Tak(macro)(error_free), 89, cplus))== (PPTREE) -1 ) {
#line 1995 "cplus.met"
                        MulFreeTree(3,_ptRes1,_ptTree1,_ptTree0);
                        PROG_EXIT(catch_unit_exit,"catch_unit")
#line 1995 "cplus.met"
                    }
#line 1995 "cplus.met"
                    ReplaceTree(_ptRes1, 1, _ptTree1);
#line 1995 "cplus.met"
                    if ( (_ptTree1=NQUICK_CALL(_Tak(compound_statement)(error_free), 26, cplus))== (PPTREE) -1 ) {
#line 1995 "cplus.met"
                        MulFreeTree(3,_ptRes1,_ptTree1,_ptTree0);
                        PROG_EXIT(catch_unit_exit,"catch_unit")
#line 1995 "cplus.met"
                    }
#line 1995 "cplus.met"
                    ReplaceTree(_ptRes1, 2, _ptTree1);
#line 1995 "cplus.met"
                    _ptTree0=_ptRes1;
#line 1995 "cplus.met"
                }
#line 1995 "cplus.met"
                _retValue =_ptTree0;
#line 1995 "cplus.met"
                goto catch_unit_ret;
#line 1995 "cplus.met"
            }
#line 1995 "cplus.met"
            break;
#line 1995 "cplus.met"
#line 1997 "cplus.met"
        case AND_CATCH : 
#line 1997 "cplus.met"
#line 1997 "cplus.met"
            {
#line 1997 "cplus.met"
                PPTREE _ptTree0=0;
#line 1997 "cplus.met"
                {
#line 1997 "cplus.met"
                    PPTREE _ptTree1=0,_ptRes1=0;
#line 1997 "cplus.met"
                    _ptRes1= MakeTree(CATCH, 2);
#line 1997 "cplus.met"
                    if ( (_ptTree1=NQUICK_CALL(_Tak(macro)(error_free), 89, cplus))== (PPTREE) -1 ) {
#line 1997 "cplus.met"
                        MulFreeTree(3,_ptRes1,_ptTree1,_ptTree0);
                        PROG_EXIT(catch_unit_exit,"catch_unit")
#line 1997 "cplus.met"
                    }
#line 1997 "cplus.met"
                    ReplaceTree(_ptRes1, 1, _ptTree1);
#line 1997 "cplus.met"
                    if ( (_ptTree1=NQUICK_CALL(_Tak(compound_statement)(error_free), 26, cplus))== (PPTREE) -1 ) {
#line 1997 "cplus.met"
                        MulFreeTree(3,_ptRes1,_ptTree1,_ptTree0);
                        PROG_EXIT(catch_unit_exit,"catch_unit")
#line 1997 "cplus.met"
                    }
#line 1997 "cplus.met"
                    ReplaceTree(_ptRes1, 2, _ptTree1);
#line 1997 "cplus.met"
                    _ptTree0=_ptRes1;
#line 1997 "cplus.met"
                }
#line 1997 "cplus.met"
                _retValue =_ptTree0;
#line 1997 "cplus.met"
                goto catch_unit_ret;
#line 1997 "cplus.met"
            }
#line 1997 "cplus.met"
            break;
#line 1997 "cplus.met"
        default :
#line 1997 "cplus.met"
            CASE_EXIT(catch_unit_exit,"either CATCH_UPPER or CATCH_ALL or AND_CATCH")
#line 1997 "cplus.met"
            break;
#line 1997 "cplus.met"
    }
#line 1997 "cplus.met"
#line 1997 "cplus.met"
#line 1999 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1999 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 1999 "cplus.met"
return((PPTREE) 0);
#line 1999 "cplus.met"

#line 1999 "cplus.met"
catch_unit_exit :
#line 1999 "cplus.met"

#line 1999 "cplus.met"
    _Debug = TRACE_RULE("catch_unit",TRACE_EXIT,(PPTREE)0);
#line 1999 "cplus.met"
    _funcLevel--;
#line 1999 "cplus.met"
    return((PPTREE) -1) ;
#line 1999 "cplus.met"

#line 1999 "cplus.met"
catch_unit_ret :
#line 1999 "cplus.met"
    
#line 1999 "cplus.met"
    _Debug = TRACE_RULE("catch_unit",TRACE_RETURN,_retValue);
#line 1999 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1999 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 1999 "cplus.met"
    return _retValue ;
#line 1999 "cplus.met"
}
#line 1999 "cplus.met"

#line 1999 "cplus.met"
#line 2012 "cplus.met"
PPTREE cplus::catch_unit_ansi ( int error_free)
#line 2012 "cplus.met"
{
#line 2012 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 2012 "cplus.met"
    int _value,_nbPre = 0 ;
#line 2012 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 2012 "cplus.met"
    int _Debug = TRACE_RULE("catch_unit_ansi",TRACE_ENTER,(PPTREE)0);
#line 2012 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 2012 "cplus.met"
#line 2012 "cplus.met"
    PPTREE retTree = (PPTREE) 0,valTree = (PPTREE) 0;
#line 2012 "cplus.met"
#line 2014 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 2014 "cplus.met"
    if (  !SEE_TOKEN( CATCH,"catch") || !(CommTerm(),1)) {
#line 2014 "cplus.met"
        MulFreeTree(2,retTree,valTree);
        TOKEN_EXIT(catch_unit_ansi_exit,"catch")
#line 2014 "cplus.met"
    } else {
#line 2014 "cplus.met"
        tokenAhead = 0 ;
#line 2014 "cplus.met"
    }
#line 2014 "cplus.met"
#line 2015 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 2015 "cplus.met"
    if (  !SEE_TOKEN( POUV,"(") || !(CommTerm(),1)) {
#line 2015 "cplus.met"
        MulFreeTree(2,retTree,valTree);
        TOKEN_EXIT(catch_unit_ansi_exit,"(")
#line 2015 "cplus.met"
    } else {
#line 2015 "cplus.met"
        tokenAhead = 0 ;
#line 2015 "cplus.met"
    }
#line 2015 "cplus.met"
#line 2016 "cplus.met"
    if ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN(POINPOINPOIN,"...") && (tokenAhead = 0,CommTerm(),1)){
#line 2016 "cplus.met"
#line 2017 "cplus.met"
        {
#line 2017 "cplus.met"
            PPTREE _ptRes0=0;
#line 2017 "cplus.met"
            _ptRes0= MakeTree(EXCEPT_ANSI_ALL, 0);
#line 2017 "cplus.met"
            valTree=_ptRes0;
#line 2017 "cplus.met"
        }
#line 2017 "cplus.met"
    } else {
#line 2017 "cplus.met"
#line 2019 "cplus.met"
#line 2020 "cplus.met"
        if ( (retTree=NQUICK_CALL(_Tak(type_specifier)(error_free), 142, cplus))== (PPTREE) -1 ) {
#line 2020 "cplus.met"
            MulFreeTree(2,retTree,valTree);
            PROG_EXIT(catch_unit_ansi_exit,"catch_unit_ansi")
#line 2020 "cplus.met"
        }
#line 2020 "cplus.met"
#line 2021 "cplus.met"
        if (NPUSH_CALL_AFF_VERIF(valTree = ,_Tak(declarator), 44, cplus)){
#line 2021 "cplus.met"
#line 2022 "cplus.met"
            {
#line 2022 "cplus.met"
                PPTREE _ptRes0=0;
#line 2022 "cplus.met"
                _ptRes0= MakeTree(DECLARATOR, 2);
#line 2022 "cplus.met"
                ReplaceTree(_ptRes0, 1, retTree );
#line 2022 "cplus.met"
                ReplaceTree(_ptRes0, 2, valTree );
#line 2022 "cplus.met"
                valTree=_ptRes0;
#line 2022 "cplus.met"
            }
#line 2022 "cplus.met"
        } else {
#line 2022 "cplus.met"
#line 2024 "cplus.met"
            if (NPUSH_CALL_AFF_VERIF(valTree = ,_Tak(abstract_declarator), 2, cplus)){
#line 2024 "cplus.met"
#line 2025 "cplus.met"
                {
#line 2025 "cplus.met"
                    PPTREE _ptRes0=0;
#line 2025 "cplus.met"
                    _ptRes0= MakeTree(ABST_DECLARATOR, 2);
#line 2025 "cplus.met"
                    ReplaceTree(_ptRes0, 1, retTree );
#line 2025 "cplus.met"
                    ReplaceTree(_ptRes0, 2, valTree );
#line 2025 "cplus.met"
                    valTree=_ptRes0;
#line 2025 "cplus.met"
                }
#line 2025 "cplus.met"
            } else {
#line 2025 "cplus.met"
#line 2027 "cplus.met"
                valTree = retTree ;
#line 2027 "cplus.met"
            }
#line 2027 "cplus.met"
        }
#line 2027 "cplus.met"
#line 2027 "cplus.met"
    }
#line 2027 "cplus.met"
#line 2029 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 2029 "cplus.met"
    if (  !SEE_TOKEN( PFER,")") || !(CommTerm(),1)) {
#line 2029 "cplus.met"
        MulFreeTree(2,retTree,valTree);
        TOKEN_EXIT(catch_unit_ansi_exit,")")
#line 2029 "cplus.met"
    } else {
#line 2029 "cplus.met"
        tokenAhead = 0 ;
#line 2029 "cplus.met"
    }
#line 2029 "cplus.met"
#line 2030 "cplus.met"
    {
#line 2030 "cplus.met"
        PPTREE _ptTree0=0;
#line 2030 "cplus.met"
        {
#line 2030 "cplus.met"
            PPTREE _ptTree1=0,_ptRes1=0;
#line 2030 "cplus.met"
            _ptRes1= MakeTree(CATCH_ANSI, 2);
#line 2030 "cplus.met"
            ReplaceTree(_ptRes1, 1, valTree );
#line 2030 "cplus.met"
            if ( (_ptTree1=NQUICK_CALL(_Tak(compound_statement)(error_free), 26, cplus))== (PPTREE) -1 ) {
#line 2030 "cplus.met"
                MulFreeTree(5,_ptRes1,_ptTree1,_ptTree0,retTree,valTree);
                PROG_EXIT(catch_unit_ansi_exit,"catch_unit_ansi")
#line 2030 "cplus.met"
            }
#line 2030 "cplus.met"
            ReplaceTree(_ptRes1, 2, _ptTree1);
#line 2030 "cplus.met"
            _ptTree0=_ptRes1;
#line 2030 "cplus.met"
        }
#line 2030 "cplus.met"
        _retValue =_ptTree0;
#line 2030 "cplus.met"
        goto catch_unit_ansi_ret;
#line 2030 "cplus.met"
    }
#line 2030 "cplus.met"
#line 2030 "cplus.met"
#line 2030 "cplus.met"

#line 2031 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2031 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 2031 "cplus.met"
return((PPTREE) 0);
#line 2031 "cplus.met"

#line 2031 "cplus.met"
catch_unit_ansi_exit :
#line 2031 "cplus.met"

#line 2031 "cplus.met"
    _Debug = TRACE_RULE("catch_unit_ansi",TRACE_EXIT,(PPTREE)0);
#line 2031 "cplus.met"
    _funcLevel--;
#line 2031 "cplus.met"
    return((PPTREE) -1) ;
#line 2031 "cplus.met"

#line 2031 "cplus.met"
catch_unit_ansi_ret :
#line 2031 "cplus.met"
    
#line 2031 "cplus.met"
    _Debug = TRACE_RULE("catch_unit_ansi",TRACE_RETURN,_retValue);
#line 2031 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2031 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 2031 "cplus.met"
    return _retValue ;
#line 2031 "cplus.met"
}
#line 2031 "cplus.met"

#line 2031 "cplus.met"
#line 2051 "cplus.met"
PPTREE cplus::class_declaration ( int error_free)
#line 2051 "cplus.met"
{
#line 2051 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 2051 "cplus.met"
    int _value,_nbPre = 0 ;
#line 2051 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 2051 "cplus.met"
    int _Debug = TRACE_RULE("class_declaration",TRACE_ENTER,(PPTREE)0);
#line 2051 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 2051 "cplus.met"
#line 2051 "cplus.met"
    PPTREE _addlist1 = (PPTREE) 0;
#line 2051 "cplus.met"
#line 2051 "cplus.met"
    PPTREE retTree = (PPTREE) 0,inter = (PPTREE) 0,list = (PPTREE) 0;
#line 2051 "cplus.met"
#line 2053 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 2053 "cplus.met"
    switch( lexEl.Value) {
#line 2053 "cplus.met"
#line 2054 "cplus.met"
        case STRUCT : 
#line 2054 "cplus.met"
            tokenAhead = 0 ;
#line 2054 "cplus.met"
            CommTerm();
#line 2054 "cplus.met"
#line 2054 "cplus.met"
            {
#line 2054 "cplus.met"
                PPTREE _ptRes0=0;
#line 2054 "cplus.met"
                _ptRes0= MakeTree(CLASS, 4);
#line 2054 "cplus.met"
                ReplaceTree(_ptRes0, 1, MakeString ("struct"));
#line 2054 "cplus.met"
                retTree=_ptRes0;
#line 2054 "cplus.met"
            }
#line 2054 "cplus.met"
            break;
#line 2054 "cplus.met"
#line 2055 "cplus.met"
        case UNION : 
#line 2055 "cplus.met"
            tokenAhead = 0 ;
#line 2055 "cplus.met"
            CommTerm();
#line 2055 "cplus.met"
#line 2055 "cplus.met"
            {
#line 2055 "cplus.met"
                PPTREE _ptRes0=0;
#line 2055 "cplus.met"
                _ptRes0= MakeTree(CLASS, 4);
#line 2055 "cplus.met"
                ReplaceTree(_ptRes0, 1, MakeString ("union"));
#line 2055 "cplus.met"
                retTree=_ptRes0;
#line 2055 "cplus.met"
            }
#line 2055 "cplus.met"
            break;
#line 2055 "cplus.met"
#line 2056 "cplus.met"
        case CLASS : 
#line 2056 "cplus.met"
            tokenAhead = 0 ;
#line 2056 "cplus.met"
            CommTerm();
#line 2056 "cplus.met"
#line 2056 "cplus.met"
            {
#line 2056 "cplus.met"
                PPTREE _ptRes0=0;
#line 2056 "cplus.met"
                _ptRes0= MakeTree(CLASS, 4);
#line 2056 "cplus.met"
                ReplaceTree(_ptRes0, 1, MakeString ("class"));
#line 2056 "cplus.met"
                retTree=_ptRes0;
#line 2056 "cplus.met"
            }
#line 2056 "cplus.met"
            break;
#line 2056 "cplus.met"
        default :
#line 2056 "cplus.met"
            MulFreeTree(4,_addlist1,inter,list,retTree);
            CASE_EXIT(class_declaration_exit,"either struct or union or class")
#line 2056 "cplus.met"
            break;
#line 2056 "cplus.met"
    }
#line 2056 "cplus.met"
#line 2058 "cplus.met"
    {
#line 2058 "cplus.met"
        PPTREE _ptTree0=0;
#line 2058 "cplus.met"
        if ( (_ptTree0=NQUICK_CALL(_Tak(range_modifier_ident)(error_free), 120, cplus))== (PPTREE) -1 ) {
#line 2058 "cplus.met"
            MulFreeTree(5,_ptTree0,_addlist1,inter,list,retTree);
            PROG_EXIT(class_declaration_exit,"class_declaration")
#line 2058 "cplus.met"
        }
#line 2058 "cplus.met"
        ReplaceTree(retTree , 2 , _ptTree0);
#line 2058 "cplus.met"
    }
#line 2058 "cplus.met"
#line 2059 "cplus.met"
    if ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN(DPOI,":") && (tokenAhead = 0,CommTerm(),1)){
#line 2059 "cplus.met"
#line 2060 "cplus.met"
        {
#line 2060 "cplus.met"
            PPTREE _ptTree0=0;
#line 2060 "cplus.met"
            if ( (_ptTree0=NQUICK_CALL(_Tak(base_specifier)(error_free), 16, cplus))== (PPTREE) -1 ) {
#line 2060 "cplus.met"
                MulFreeTree(5,_ptTree0,_addlist1,inter,list,retTree);
                PROG_EXIT(class_declaration_exit,"class_declaration")
#line 2060 "cplus.met"
            }
#line 2060 "cplus.met"
            ReplaceTree(retTree , 3 , _ptTree0);
#line 2060 "cplus.met"
        }
#line 2060 "cplus.met"
#line 2060 "cplus.met"
    }
#line 2060 "cplus.met"
#line 2061 "cplus.met"
    if ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN(AOUV,"{") && (tokenAhead = 0,CommTerm(),1)){
#line 2061 "cplus.met"
#line 2062 "cplus.met"
#line 2063 "cplus.met"
        do {
#line 2063 "cplus.met"
#line 2063 "cplus.met"
            _addlist1 = list ;
#line 2063 "cplus.met"
#line 2064 "cplus.met"
            while (NPUSH_CALL_AFF_VERIF(inter = ,_Tak(inside_declaration), 80, cplus)) { 
#line 2064 "cplus.met"
#line 2065 "cplus.met"
#line 2065 "cplus.met"
                _addlist1 =AddList(_addlist1 ,inter );
#line 2065 "cplus.met"
#line 2065 "cplus.met"
                if (list){
#line 2065 "cplus.met"
#line 2065 "cplus.met"
                    _addlist1 = SonTree (_addlist1 ,2 );
#line 2065 "cplus.met"
                } else {
#line 2065 "cplus.met"
#line 2065 "cplus.met"
                    list = _addlist1 ;
#line 2065 "cplus.met"
                }
#line 2065 "cplus.met"
            } 
#line 2065 "cplus.met"
#line 2066 "cplus.met"
            (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 2066 "cplus.met"
            switch( lexEl.Value) {
#line 2066 "cplus.met"
#line 2067 "cplus.met"
                case PUBLIC : 
#line 2067 "cplus.met"
#line 2067 "cplus.met"
                    {
#line 2067 "cplus.met"
                        PPTREE _ptTree0=0;
#line 2067 "cplus.met"
                        if ( (_ptTree0=NQUICK_CALL(_Tak(protect_declare)(error_free), 111, cplus))== (PPTREE) -1 ) {
#line 2067 "cplus.met"
                            MulFreeTree(5,_ptTree0,_addlist1,inter,list,retTree);
                            PROG_EXIT(class_declaration_exit,"class_declaration")
#line 2067 "cplus.met"
                        }
#line 2067 "cplus.met"
                        list =AddList(list , _ptTree0);
#line 2067 "cplus.met"
                    }
#line 2067 "cplus.met"
                    break;
#line 2067 "cplus.met"
#line 2068 "cplus.met"
                case PRIVATE : 
#line 2068 "cplus.met"
#line 2068 "cplus.met"
                    {
#line 2068 "cplus.met"
                        PPTREE _ptTree0=0;
#line 2068 "cplus.met"
                        if ( (_ptTree0=NQUICK_CALL(_Tak(protect_declare)(error_free), 111, cplus))== (PPTREE) -1 ) {
#line 2068 "cplus.met"
                            MulFreeTree(5,_ptTree0,_addlist1,inter,list,retTree);
                            PROG_EXIT(class_declaration_exit,"class_declaration")
#line 2068 "cplus.met"
                        }
#line 2068 "cplus.met"
                        list =AddList(list , _ptTree0);
#line 2068 "cplus.met"
                    }
#line 2068 "cplus.met"
                    break;
#line 2068 "cplus.met"
#line 2069 "cplus.met"
                case PROTECTED : 
#line 2069 "cplus.met"
#line 2069 "cplus.met"
                    {
#line 2069 "cplus.met"
                        PPTREE _ptTree0=0;
#line 2069 "cplus.met"
                        if ( (_ptTree0=NQUICK_CALL(_Tak(protect_declare)(error_free), 111, cplus))== (PPTREE) -1 ) {
#line 2069 "cplus.met"
                            MulFreeTree(5,_ptTree0,_addlist1,inter,list,retTree);
                            PROG_EXIT(class_declaration_exit,"class_declaration")
#line 2069 "cplus.met"
                        }
#line 2069 "cplus.met"
                        list =AddList(list , _ptTree0);
#line 2069 "cplus.met"
                    }
#line 2069 "cplus.met"
                    break;
#line 2069 "cplus.met"
#line 2069 "cplus.met"
                case AFER : 
#line 2069 "cplus.met"
#line 2069 "cplus.met"
                    break;
#line 2069 "cplus.met"
#line 2071 "cplus.met"
                default : 
#line 2071 "cplus.met"
#line 2071 "cplus.met"
                    
#line 2071 "cplus.met"
                    MulFreeTree(4,_addlist1,inter,list,retTree);
                    LEX_EXIT ("",0);
#line 2071 "cplus.met"
                    goto class_declaration_exit;
#line 2071 "cplus.met"
                    break;
#line 2071 "cplus.met"
            }
#line 2071 "cplus.met"
#line 2071 "cplus.met"
#line 2073 "cplus.met"
        } while ( !(((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN( AFER,"}")) || 
#line 2073 "cplus.met"
                   (! ((tokenAhead && tokenAhead != -1)|| (c != EOF))))) ;
#line 2073 "cplus.met"
#line 2074 "cplus.met"
        {
#line 2074 "cplus.met"
            PPTREE _ptTree0=0;
#line 2074 "cplus.met"
            {
#line 2074 "cplus.met"
                PPTREE _ptRes1=0;
#line 2074 "cplus.met"
                _ptRes1= MakeTree(CLASS_DECL, 1);
#line 2074 "cplus.met"
                ReplaceTree(_ptRes1, 1, list );
#line 2074 "cplus.met"
                _ptTree0=_ptRes1;
#line 2074 "cplus.met"
            }
#line 2074 "cplus.met"
            ReplaceTree(retTree , 4 , _ptTree0);
#line 2074 "cplus.met"
        }
#line 2074 "cplus.met"
#line 2075 "cplus.met"
        (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 2075 "cplus.met"
        if (  !SEE_TOKEN( AFER,"}") || !(CommTerm(),1)) {
#line 2075 "cplus.met"
            MulFreeTree(4,_addlist1,inter,list,retTree);
            TOKEN_EXIT(class_declaration_exit,"}")
#line 2075 "cplus.met"
        } else {
#line 2075 "cplus.met"
            tokenAhead = 0 ;
#line 2075 "cplus.met"
        }
#line 2075 "cplus.met"
#line 2075 "cplus.met"
#line 2075 "cplus.met"
    }
#line 2075 "cplus.met"
#line 2077 "cplus.met"
    {
#line 2077 "cplus.met"
        _retValue = retTree ;
#line 2077 "cplus.met"
        goto class_declaration_ret;
#line 2077 "cplus.met"
        
#line 2077 "cplus.met"
    }
#line 2077 "cplus.met"
#line 2077 "cplus.met"
#line 2077 "cplus.met"

#line 2078 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2078 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 2078 "cplus.met"
return((PPTREE) 0);
#line 2078 "cplus.met"

#line 2078 "cplus.met"
class_declaration_exit :
#line 2078 "cplus.met"

#line 2078 "cplus.met"
    _Debug = TRACE_RULE("class_declaration",TRACE_EXIT,(PPTREE)0);
#line 2078 "cplus.met"
    _funcLevel--;
#line 2078 "cplus.met"
    return((PPTREE) -1) ;
#line 2078 "cplus.met"

#line 2078 "cplus.met"
class_declaration_ret :
#line 2078 "cplus.met"
    
#line 2078 "cplus.met"
    _Debug = TRACE_RULE("class_declaration",TRACE_RETURN,_retValue);
#line 2078 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2078 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 2078 "cplus.met"
    return _retValue ;
#line 2078 "cplus.met"
}
#line 2078 "cplus.met"

#line 2078 "cplus.met"
#line 778 "cplus.met"
PPTREE cplus::comment_eater ( int error_free)
#line 778 "cplus.met"
{
#line 778 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 778 "cplus.met"
    int _value,_nbPre = 0 ;
#line 778 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 778 "cplus.met"
    int _Debug = TRACE_RULE("comment_eater",TRACE_ENTER,(PPTREE)0);
#line 778 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 778 "cplus.met"
#line 778 "cplus.met"
    PPTREE retTree = (PPTREE) 0;
#line 778 "cplus.met"
#line 780 "cplus.met"
    1;
#line 780 "cplus.met"
    switch( lexEl.Value) {
#line 780 "cplus.met"
#line 781 "cplus.met"
        default : 
#line 781 "cplus.met"
            tokenAhead = 0 ;
#line 781 "cplus.met"
            CommTerm();
#line 781 "cplus.met"
#line 782 "cplus.met"
            if ( lexEl.Value != -1 ){
#line 782 "cplus.met"
#line 783 "cplus.met"
                
#line 783 "cplus.met"
                MulFreeTree(1,retTree);
                LEX_EXIT ("",0);
#line 783 "cplus.met"
                goto comment_eater_exit;
#line 783 "cplus.met"
#line 783 "cplus.met"
            } else {
#line 783 "cplus.met"
#line 785 "cplus.met"
                {
#line 785 "cplus.met"
                    _retValue = retTree ;
#line 785 "cplus.met"
                    goto comment_eater_ret;
#line 785 "cplus.met"
                    
#line 785 "cplus.met"
                }
#line 785 "cplus.met"
            }
#line 785 "cplus.met"
            break;
#line 785 "cplus.met"
    }
#line 785 "cplus.met"
#line 785 "cplus.met"
#line 786 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 786 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 786 "cplus.met"
return((PPTREE) 0);
#line 786 "cplus.met"

#line 786 "cplus.met"
comment_eater_exit :
#line 786 "cplus.met"

#line 786 "cplus.met"
    _Debug = TRACE_RULE("comment_eater",TRACE_EXIT,(PPTREE)0);
#line 786 "cplus.met"
    _funcLevel--;
#line 786 "cplus.met"
    return((PPTREE) -1) ;
#line 786 "cplus.met"

#line 786 "cplus.met"
comment_eater_ret :
#line 786 "cplus.met"
    
#line 786 "cplus.met"
    _Debug = TRACE_RULE("comment_eater",TRACE_RETURN,_retValue);
#line 786 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 786 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 786 "cplus.met"
    return _retValue ;
#line 786 "cplus.met"
}
#line 786 "cplus.met"

#line 786 "cplus.met"
#line 1872 "cplus.met"
PPTREE cplus::complete_class_name ( int error_free)
#line 1872 "cplus.met"
{
#line 1872 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 1872 "cplus.met"
    int _value,_nbPre = 0 ;
#line 1872 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 1872 "cplus.met"
    int _Debug = TRACE_RULE("complete_class_name",TRACE_ENTER,(PPTREE)0);
#line 1872 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 1872 "cplus.met"
#line 1872 "cplus.met"
    PPTREE ret = (PPTREE) 0;
#line 1872 "cplus.met"
#line 1874 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 1874 "cplus.met"
    switch( lexEl.Value) {
#line 1874 "cplus.met"
#line 1875 "cplus.met"
        case META : 
#line 1875 "cplus.met"
        case IDENT : 
#line 1875 "cplus.met"
#line 1875 "cplus.met"
            if ( (ret=NQUICK_CALL(_Tak(qualified_name)(error_free), 113, cplus))== (PPTREE) -1 ) {
#line 1875 "cplus.met"
                MulFreeTree(1,ret);
                PROG_EXIT(complete_class_name_exit,"complete_class_name")
#line 1875 "cplus.met"
            }
#line 1875 "cplus.met"
            break;
#line 1875 "cplus.met"
#line 1876 "cplus.met"
        case DPOIDPOI : 
#line 1876 "cplus.met"
            tokenAhead = 0 ;
#line 1876 "cplus.met"
            CommTerm();
#line 1876 "cplus.met"
#line 1876 "cplus.met"
            {
#line 1876 "cplus.met"
                PPTREE _ptTree0=0,_ptRes0=0;
#line 1876 "cplus.met"
                _ptRes0= MakeTree(QUALIFIED, 2);
#line 1876 "cplus.met"
                if ( (_ptTree0=NQUICK_CALL(_Tak(qualified_name)(error_free), 113, cplus))== (PPTREE) -1 ) {
#line 1876 "cplus.met"
                    MulFreeTree(3,_ptRes0,_ptTree0,ret);
                    PROG_EXIT(complete_class_name_exit,"complete_class_name")
#line 1876 "cplus.met"
                }
#line 1876 "cplus.met"
                ReplaceTree(_ptRes0, 2, _ptTree0);
#line 1876 "cplus.met"
                ret=_ptRes0;
#line 1876 "cplus.met"
            }
#line 1876 "cplus.met"
            break;
#line 1876 "cplus.met"
        default :
#line 1876 "cplus.met"
            MulFreeTree(1,ret);
            CASE_EXIT(complete_class_name_exit,"either IDENT or ::")
#line 1876 "cplus.met"
            break;
#line 1876 "cplus.met"
    }
#line 1876 "cplus.met"
#line 1878 "cplus.met"
    {
#line 1878 "cplus.met"
        _retValue = ret ;
#line 1878 "cplus.met"
        goto complete_class_name_ret;
#line 1878 "cplus.met"
        
#line 1878 "cplus.met"
    }
#line 1878 "cplus.met"
#line 1878 "cplus.met"
#line 1878 "cplus.met"

#line 1879 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1879 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 1879 "cplus.met"
return((PPTREE) 0);
#line 1879 "cplus.met"

#line 1879 "cplus.met"
complete_class_name_exit :
#line 1879 "cplus.met"

#line 1879 "cplus.met"
    _Debug = TRACE_RULE("complete_class_name",TRACE_EXIT,(PPTREE)0);
#line 1879 "cplus.met"
    _funcLevel--;
#line 1879 "cplus.met"
    return((PPTREE) -1) ;
#line 1879 "cplus.met"

#line 1879 "cplus.met"
complete_class_name_ret :
#line 1879 "cplus.met"
    
#line 1879 "cplus.met"
    _Debug = TRACE_RULE("complete_class_name",TRACE_RETURN,_retValue);
#line 1879 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1879 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 1879 "cplus.met"
    return _retValue ;
#line 1879 "cplus.met"
}
#line 1879 "cplus.met"

#line 1879 "cplus.met"
#line 3278 "cplus.met"
PPTREE cplus::compound_statement ( int error_free)
#line 3278 "cplus.met"
{
#line 3278 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 3278 "cplus.met"
    int _value,_nbPre = 0 ;
#line 3278 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 3278 "cplus.met"
    int _Debug = TRACE_RULE("compound_statement",TRACE_ENTER,(PPTREE)0);
#line 3278 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 3278 "cplus.met"
#line 3278 "cplus.met"
    PPTREE _addlist1 = (PPTREE) 0;
#line 3278 "cplus.met"
#line 3278 "cplus.met"
    PPTREE statList = (PPTREE) 0,stat = (PPTREE) 0;
#line 3278 "cplus.met"
#line 3280 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3280 "cplus.met"
    if (  !SEE_TOKEN( AOUV,"{") || !(CommTerm(),1)) {
#line 3280 "cplus.met"
        MulFreeTree(3,_addlist1,stat,statList);
        TOKEN_EXIT(compound_statement_exit,"{")
#line 3280 "cplus.met"
    } else {
#line 3280 "cplus.met"
        tokenAhead = 0 ;
#line 3280 "cplus.met"
    }
#line 3280 "cplus.met"
#line 3281 "cplus.met"
     debut :
#line 3281 "cplus.met"
#line 3281 "cplus.met"
    _addlist1 = statList ;
#line 3281 "cplus.met"
#line 3283 "cplus.met"
    while (((((NPUSH_CALL_AFF_VERIF(stat = ,_Tak(statement), 133, cplus)) || 
#line 3283 "cplus.met"
             (NPUSH_CALL_AFF_VERIF(stat = ,_Tak(data_declaration), 38, cplus))) || 
#line 3283 "cplus.met"
            (NPUSH_CALL_AFF_VERIF(stat = ,_Tak(stat_dir), 129, cplus))) || 
#line 3283 "cplus.met"
           (NPUSH_CALL_AFF_VERIF(stat = ,_Tak(exception), 56, cplus))) || 
#line 3283 "cplus.met"
          (NPUSH_CALL_AFF_VERIF(stat = ,_Tak(ext_data_declaration), 69, cplus))) { 
#line 3283 "cplus.met"
#line 3289 "cplus.met"
#line 3289 "cplus.met"
        _addlist1 =AddList(_addlist1 ,stat );
#line 3289 "cplus.met"
#line 3289 "cplus.met"
        if (statList){
#line 3289 "cplus.met"
#line 3289 "cplus.met"
            _addlist1 = SonTree (_addlist1 ,2 );
#line 3289 "cplus.met"
        } else {
#line 3289 "cplus.met"
#line 3289 "cplus.met"
            statList = _addlist1 ;
#line 3289 "cplus.met"
        }
#line 3289 "cplus.met"
    } 
#line 3289 "cplus.met"
#line 3290 "cplus.met"
    {
#line 3290 "cplus.met"
        PPTREE _ptTree0=0;
#line 3290 "cplus.met"
        if ( (_ptTree0=NQUICK_CALL(_Tak(none_statement)(error_free), 100, cplus))== (PPTREE) -1 ) {
#line 3290 "cplus.met"
            MulFreeTree(4,_ptTree0,_addlist1,stat,statList);
            PROG_EXIT(compound_statement_exit,"compound_statement")
#line 3290 "cplus.met"
        }
#line 3290 "cplus.met"
        statList =AddList(statList , _ptTree0);
#line 3290 "cplus.met"
    }
#line 3290 "cplus.met"
#line 3291 "cplus.met"
    if (! ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN(AFER,"}") && (tokenAhead = 0,CommTerm(),1))){
#line 3291 "cplus.met"
#line 3292 "cplus.met"
#line 3293 "cplus.met"
        dumperror ();
#line 3293 "cplus.met"
#line 3294 "cplus.met"
        (tokenAhead == 5|| (LexEndLine(),TRACE_LEX(1)));
#line 3294 "cplus.met"
        if ( ! TERM_OR_META(END_LINE,"END_LINE") || !(CommTerm(),1)) {
#line 3294 "cplus.met"
            MulFreeTree(3,_addlist1,stat,statList);
            TOKEN_EXIT(compound_statement_exit,"END_LINE")
#line 3294 "cplus.met"
        } else {
#line 3294 "cplus.met"
            tokenAhead = 0 ;
#line 3294 "cplus.met"
        }
#line 3294 "cplus.met"
#line 3295 "cplus.met"
         hasGotError = 1 ;
#line 3295 "cplus.met"
#line 3296 "cplus.met"
         goto debut ;
#line 3296 "cplus.met"
#line 3296 "cplus.met"
#line 3296 "cplus.met"
    }
#line 3296 "cplus.met"
#line 3298 "cplus.met"
    {
#line 3298 "cplus.met"
        PPTREE _ptTree0=0;
#line 3298 "cplus.met"
        {
#line 3298 "cplus.met"
            PPTREE _ptRes1=0;
#line 3298 "cplus.met"
            _ptRes1= MakeTree(COMPOUND, 1);
#line 3298 "cplus.met"
            ReplaceTree(_ptRes1, 1, statList );
#line 3298 "cplus.met"
            _ptTree0=_ptRes1;
#line 3298 "cplus.met"
        }
#line 3298 "cplus.met"
        _retValue =_ptTree0;
#line 3298 "cplus.met"
        goto compound_statement_ret;
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
return((PPTREE) 0);
#line 3299 "cplus.met"

#line 3299 "cplus.met"
compound_statement_exit :
#line 3299 "cplus.met"

#line 3299 "cplus.met"
    _Debug = TRACE_RULE("compound_statement",TRACE_EXIT,(PPTREE)0);
#line 3299 "cplus.met"
    _funcLevel--;
#line 3299 "cplus.met"
    return((PPTREE) -1) ;
#line 3299 "cplus.met"

#line 3299 "cplus.met"
compound_statement_ret :
#line 3299 "cplus.met"
    
#line 3299 "cplus.met"
    _Debug = TRACE_RULE("compound_statement",TRACE_RETURN,_retValue);
#line 3299 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 3299 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 3299 "cplus.met"
    return _retValue ;
#line 3299 "cplus.met"
}
#line 3299 "cplus.met"

#line 3299 "cplus.met"
#line 2617 "cplus.met"
PPTREE cplus::conditional_expression ( int error_free)
#line 2617 "cplus.met"
{
#line 2617 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 2617 "cplus.met"
    int _value,_nbPre = 0 ;
#line 2617 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 2617 "cplus.met"
    int _Debug = TRACE_RULE("conditional_expression",TRACE_ENTER,(PPTREE)0);
#line 2617 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 2617 "cplus.met"
#line 2617 "cplus.met"
    PPTREE expTree = (PPTREE) 0,condTree = (PPTREE) 0;
#line 2617 "cplus.met"
#line 2619 "cplus.met"
    if ( (expTree=NQUICK_CALL(_Tak(logical_or_expression)(error_free), 87, cplus))== (PPTREE) -1 ) {
#line 2619 "cplus.met"
        MulFreeTree(2,condTree,expTree);
        PROG_EXIT(conditional_expression_exit,"conditional_expression")
#line 2619 "cplus.met"
    }
#line 2619 "cplus.met"
#line 2620 "cplus.met"
    if ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN(INTE,"?") && (tokenAhead = 0,CommTerm(),1)){
#line 2620 "cplus.met"
#line 2621 "cplus.met"
#line 2622 "cplus.met"
        {
#line 2622 "cplus.met"
            PPTREE _ptRes0=0;
#line 2622 "cplus.met"
            _ptRes0= MakeTree(COND_AFF, 3);
#line 2622 "cplus.met"
            ReplaceTree(_ptRes0, 1, expTree );
#line 2622 "cplus.met"
            condTree=_ptRes0;
#line 2622 "cplus.met"
        }
#line 2622 "cplus.met"
#line 2623 "cplus.met"
        {
#line 2623 "cplus.met"
            PPTREE _ptTree0=0;
#line 2623 "cplus.met"
            if ( (_ptTree0=NQUICK_CALL(_Tak(expression)(error_free), 60, cplus))== (PPTREE) -1 ) {
#line 2623 "cplus.met"
                MulFreeTree(3,_ptTree0,condTree,expTree);
                PROG_EXIT(conditional_expression_exit,"conditional_expression")
#line 2623 "cplus.met"
            }
#line 2623 "cplus.met"
            ReplaceTree(condTree , 2 , _ptTree0);
#line 2623 "cplus.met"
        }
#line 2623 "cplus.met"
#line 2624 "cplus.met"
        (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 2624 "cplus.met"
        if (  !SEE_TOKEN( DPOI,":") || !(CommTerm(),1)) {
#line 2624 "cplus.met"
            MulFreeTree(2,condTree,expTree);
            TOKEN_EXIT(conditional_expression_exit,":")
#line 2624 "cplus.met"
        } else {
#line 2624 "cplus.met"
            tokenAhead = 0 ;
#line 2624 "cplus.met"
        }
#line 2624 "cplus.met"
#line 2625 "cplus.met"
        {
#line 2625 "cplus.met"
            PPTREE _ptTree0=0;
#line 2625 "cplus.met"
            {
#line 2625 "cplus.met"
                PPTREE _ptTree1=0;
#line 2625 "cplus.met"
                if ( (_ptTree1=NQUICK_CALL(_Tak(conditional_expression)(error_free), 27, cplus))== (PPTREE) -1 ) {
#line 2625 "cplus.met"
                    MulFreeTree(4,_ptTree1,_ptTree0,condTree,expTree);
                    PROG_EXIT(conditional_expression_exit,"conditional_expression")
#line 2625 "cplus.met"
                }
#line 2625 "cplus.met"
                _ptTree0=ReplaceTree(condTree , 3 , _ptTree1);
#line 2625 "cplus.met"
            }
#line 2625 "cplus.met"
            _retValue =_ptTree0;
#line 2625 "cplus.met"
            goto conditional_expression_ret;
#line 2625 "cplus.met"
        }
#line 2625 "cplus.met"
#line 2625 "cplus.met"
#line 2625 "cplus.met"
    } else {
#line 2625 "cplus.met"
#line 2628 "cplus.met"
        {
#line 2628 "cplus.met"
            _retValue = expTree ;
#line 2628 "cplus.met"
            goto conditional_expression_ret;
#line 2628 "cplus.met"
            
#line 2628 "cplus.met"
        }
#line 2628 "cplus.met"
    }
#line 2628 "cplus.met"
#line 2628 "cplus.met"
#line 2628 "cplus.met"

#line 2629 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2629 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 2629 "cplus.met"
return((PPTREE) 0);
#line 2629 "cplus.met"

#line 2629 "cplus.met"
conditional_expression_exit :
#line 2629 "cplus.met"

#line 2629 "cplus.met"
    _Debug = TRACE_RULE("conditional_expression",TRACE_EXIT,(PPTREE)0);
#line 2629 "cplus.met"
    _funcLevel--;
#line 2629 "cplus.met"
    return((PPTREE) -1) ;
#line 2629 "cplus.met"

#line 2629 "cplus.met"
conditional_expression_ret :
#line 2629 "cplus.met"
    
#line 2629 "cplus.met"
    _Debug = TRACE_RULE("conditional_expression",TRACE_RETURN,_retValue);
#line 2629 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2629 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 2629 "cplus.met"
    return _retValue ;
#line 2629 "cplus.met"
}
#line 2629 "cplus.met"

#line 2629 "cplus.met"
#line 2153 "cplus.met"
PPTREE cplus::const_or_volatile ( int error_free)
#line 2153 "cplus.met"
{
#line 2153 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 2153 "cplus.met"
    int _value,_nbPre = 0 ;
#line 2153 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 2153 "cplus.met"
    int _Debug = TRACE_RULE("const_or_volatile",TRACE_ENTER,(PPTREE)0);
#line 2153 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 2153 "cplus.met"
#line 2154 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 2154 "cplus.met"
    switch( lexEl.Value) {
#line 2154 "cplus.met"
#line 2155 "cplus.met"
        case CONST : 
#line 2155 "cplus.met"
#line 2155 "cplus.met"
            {
#line 2155 "cplus.met"
                PPTREE _ptTree0=0;
#line 2155 "cplus.met"
                {
#line 2155 "cplus.met"
                    PPTREE _ptTree1=0,_ptRes1=0;
#line 2155 "cplus.met"
                    _ptRes1= MakeTree(RANGE_MODIFIER, 2);
#line 2155 "cplus.met"
                    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 2155 "cplus.met"
                    if (  !SEE_TOKEN( CONST,"const") || !(_ptTree1 = CommString(lexEl.string()))) {
#line 2155 "cplus.met"
                        MulFreeTree(3,_ptRes1,_ptTree1,_ptTree0);
                        TOKEN_EXIT(const_or_volatile_exit,"const")
#line 2155 "cplus.met"
                    } else {
#line 2155 "cplus.met"
                        tokenAhead = 0 ;
#line 2155 "cplus.met"
                    }
#line 2155 "cplus.met"
                    ReplaceTree(_ptRes1, 1, _ptTree1);
#line 2155 "cplus.met"
                    _ptTree0=_ptRes1;
#line 2155 "cplus.met"
                }
#line 2155 "cplus.met"
                _retValue =_ptTree0;
#line 2155 "cplus.met"
                goto const_or_volatile_ret;
#line 2155 "cplus.met"
            }
#line 2155 "cplus.met"
            break;
#line 2155 "cplus.met"
#line 2156 "cplus.met"
        case VOLATILE : 
#line 2156 "cplus.met"
#line 2156 "cplus.met"
            {
#line 2156 "cplus.met"
                PPTREE _ptTree0=0;
#line 2156 "cplus.met"
                {
#line 2156 "cplus.met"
                    PPTREE _ptTree1=0,_ptRes1=0;
#line 2156 "cplus.met"
                    _ptRes1= MakeTree(RANGE_MODIFIER, 2);
#line 2156 "cplus.met"
                    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 2156 "cplus.met"
                    if (  !SEE_TOKEN( VOLATILE,"volatile") || !(_ptTree1 = CommString(lexEl.string()))) {
#line 2156 "cplus.met"
                        MulFreeTree(3,_ptRes1,_ptTree1,_ptTree0);
                        TOKEN_EXIT(const_or_volatile_exit,"volatile")
#line 2156 "cplus.met"
                    } else {
#line 2156 "cplus.met"
                        tokenAhead = 0 ;
#line 2156 "cplus.met"
                    }
#line 2156 "cplus.met"
                    ReplaceTree(_ptRes1, 1, _ptTree1);
#line 2156 "cplus.met"
                    _ptTree0=_ptRes1;
#line 2156 "cplus.met"
                }
#line 2156 "cplus.met"
                _retValue =_ptTree0;
#line 2156 "cplus.met"
                goto const_or_volatile_ret;
#line 2156 "cplus.met"
            }
#line 2156 "cplus.met"
            break;
#line 2156 "cplus.met"
        default :
#line 2156 "cplus.met"
            CASE_EXIT(const_or_volatile_exit,"either const or volatile")
#line 2156 "cplus.met"
            break;
#line 2156 "cplus.met"
    }
#line 2156 "cplus.met"
#line 2156 "cplus.met"
#line 2158 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2158 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 2158 "cplus.met"
return((PPTREE) 0);
#line 2158 "cplus.met"

#line 2158 "cplus.met"
const_or_volatile_exit :
#line 2158 "cplus.met"

#line 2158 "cplus.met"
    _Debug = TRACE_RULE("const_or_volatile",TRACE_EXIT,(PPTREE)0);
#line 2158 "cplus.met"
    _funcLevel--;
#line 2158 "cplus.met"
    return((PPTREE) -1) ;
#line 2158 "cplus.met"

#line 2158 "cplus.met"
const_or_volatile_ret :
#line 2158 "cplus.met"
    
#line 2158 "cplus.met"
    _Debug = TRACE_RULE("const_or_volatile",TRACE_RETURN,_retValue);
#line 2158 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2158 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 2158 "cplus.met"
    return _retValue ;
#line 2158 "cplus.met"
}
#line 2158 "cplus.met"

#line 2158 "cplus.met"
#line 3071 "cplus.met"
PPTREE cplus::constan ( int error_free)
#line 3071 "cplus.met"
{
#line 3071 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 3071 "cplus.met"
    int _value,_nbPre = 0 ;
#line 3071 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 3071 "cplus.met"
    int _Debug = TRACE_RULE("constan",TRACE_ENTER,(PPTREE)0);
#line 3071 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 3071 "cplus.met"
#line 3072 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3072 "cplus.met"
    switch( lexEl.Value) {
#line 3072 "cplus.met"
#line 3073 "cplus.met"
        case META : 
#line 3073 "cplus.met"
        case INTEGER : 
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
                    _ptRes1= MakeTree(INTEGER, 1);
#line 3073 "cplus.met"
                    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3073 "cplus.met"
                    if ( ! TERM_OR_META(INTEGER,"INTEGER") || !(BUILD_TERM_META(_ptTree1))) {
#line 3073 "cplus.met"
                        MulFreeTree(3,_ptRes1,_ptTree1,_ptTree0);
                        TOKEN_EXIT(constan_exit,"INTEGER")
#line 3073 "cplus.met"
                    } else {
#line 3073 "cplus.met"
                        tokenAhead = 0 ;
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
#line 3074 "cplus.met"
        case LINTEGER : 
#line 3074 "cplus.met"
#line 3074 "cplus.met"
            {
#line 3074 "cplus.met"
                PPTREE _ptTree0=0;
#line 3074 "cplus.met"
                {
#line 3074 "cplus.met"
                    PPTREE _ptTree1=0,_ptRes1=0;
#line 3074 "cplus.met"
                    _ptRes1= MakeTree(ILONG, 1);
#line 3074 "cplus.met"
                    {
#line 3074 "cplus.met"
                        PPTREE _ptTree2=0,_ptRes2=0;
#line 3074 "cplus.met"
                        _ptRes2= MakeTree(INTEGER, 1);
#line 3074 "cplus.met"
                        (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3074 "cplus.met"
                        if ( ! TERM_OR_META(LINTEGER,"LINTEGER") || !(BUILD_TERM_META(_ptTree2))) {
#line 3074 "cplus.met"
                            MulFreeTree(5,_ptRes2,_ptTree2,_ptRes1,_ptTree1,_ptTree0);
                            TOKEN_EXIT(constan_exit,"LINTEGER")
#line 3074 "cplus.met"
                        } else {
#line 3074 "cplus.met"
                            tokenAhead = 0 ;
#line 3074 "cplus.met"
                        }
#line 3074 "cplus.met"
                        ReplaceTree(_ptRes2, 1, _ptTree2);
#line 3074 "cplus.met"
                        _ptTree1=_ptRes2;
#line 3074 "cplus.met"
                    }
#line 3074 "cplus.met"
                    ReplaceTree(_ptRes1, 1, _ptTree1);
#line 3074 "cplus.met"
                    _ptTree0=_ptRes1;
#line 3074 "cplus.met"
                }
#line 3074 "cplus.met"
                _retValue =_ptTree0;
#line 3074 "cplus.met"
                goto constan_ret;
#line 3074 "cplus.met"
            }
#line 3074 "cplus.met"
            break;
#line 3074 "cplus.met"
#line 3076 "cplus.met"
        case LLINTEGER : 
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
                    _ptRes1= MakeTree(ILONGLONG, 1);
#line 3076 "cplus.met"
                    {
#line 3076 "cplus.met"
                        PPTREE _ptTree2=0,_ptRes2=0;
#line 3076 "cplus.met"
                        _ptRes2= MakeTree(INTEGER, 1);
#line 3076 "cplus.met"
                        (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3076 "cplus.met"
                        if ( ! TERM_OR_META(LINTEGER,"LINTEGER") || !(BUILD_TERM_META(_ptTree2))) {
#line 3076 "cplus.met"
                            MulFreeTree(5,_ptRes2,_ptTree2,_ptRes1,_ptTree1,_ptTree0);
                            TOKEN_EXIT(constan_exit,"LINTEGER")
#line 3076 "cplus.met"
                        } else {
#line 3076 "cplus.met"
                            tokenAhead = 0 ;
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
        case UINTEGER : 
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
                    _ptRes1= MakeTree(IUN, 1);
#line 3078 "cplus.met"
                    {
#line 3078 "cplus.met"
                        PPTREE _ptTree2=0,_ptRes2=0;
#line 3078 "cplus.met"
                        _ptRes2= MakeTree(INTEGER, 1);
#line 3078 "cplus.met"
                        (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3078 "cplus.met"
                        if ( ! TERM_OR_META(UINTEGER,"UINTEGER") || !(BUILD_TERM_META(_ptTree2))) {
#line 3078 "cplus.met"
                            MulFreeTree(5,_ptRes2,_ptTree2,_ptRes1,_ptTree1,_ptTree0);
                            TOKEN_EXIT(constan_exit,"UINTEGER")
#line 3078 "cplus.met"
                        } else {
#line 3078 "cplus.met"
                            tokenAhead = 0 ;
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
        case ULINTEGER : 
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
                    _ptRes1= MakeTree(IUNLONG, 1);
#line 3080 "cplus.met"
                    {
#line 3080 "cplus.met"
                        PPTREE _ptTree2=0,_ptRes2=0;
#line 3080 "cplus.met"
                        _ptRes2= MakeTree(INTEGER, 1);
#line 3080 "cplus.met"
                        (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3080 "cplus.met"
                        if ( ! TERM_OR_META(ULINTEGER,"ULINTEGER") || !(BUILD_TERM_META(_ptTree2))) {
#line 3080 "cplus.met"
                            MulFreeTree(5,_ptRes2,_ptTree2,_ptRes1,_ptTree1,_ptTree0);
                            TOKEN_EXIT(constan_exit,"ULINTEGER")
#line 3080 "cplus.met"
                        } else {
#line 3080 "cplus.met"
                            tokenAhead = 0 ;
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
        case ULLINTEGER : 
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
                    _ptRes1= MakeTree(IUNLONGLONG, 1);
#line 3082 "cplus.met"
                    {
#line 3082 "cplus.met"
                        PPTREE _ptTree2=0,_ptRes2=0;
#line 3082 "cplus.met"
                        _ptRes2= MakeTree(INTEGER, 1);
#line 3082 "cplus.met"
                        (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3082 "cplus.met"
                        if ( ! TERM_OR_META(ULINTEGER,"ULINTEGER") || !(BUILD_TERM_META(_ptTree2))) {
#line 3082 "cplus.met"
                            MulFreeTree(5,_ptRes2,_ptTree2,_ptRes1,_ptTree1,_ptTree0);
                            TOKEN_EXIT(constan_exit,"ULINTEGER")
#line 3082 "cplus.met"
                        } else {
#line 3082 "cplus.met"
                            tokenAhead = 0 ;
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
        case HEXA : 
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
                    _ptRes1= MakeTree(HEXA, 1);
#line 3084 "cplus.met"
                    {
#line 3084 "cplus.met"
                        PPTREE _ptTree2=0,_ptRes2=0;
#line 3084 "cplus.met"
                        _ptRes2= MakeTree(INTEGER, 1);
#line 3084 "cplus.met"
                        (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3084 "cplus.met"
                        if ( ! TERM_OR_META(HEXA,"HEXA") || !(BUILD_TERM_META(_ptTree2))) {
#line 3084 "cplus.met"
                            MulFreeTree(5,_ptRes2,_ptTree2,_ptRes1,_ptTree1,_ptTree0);
                            TOKEN_EXIT(constan_exit,"HEXA")
#line 3084 "cplus.met"
                        } else {
#line 3084 "cplus.met"
                            tokenAhead = 0 ;
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
#line 3085 "cplus.met"
        case LHEXA : 
#line 3085 "cplus.met"
#line 3085 "cplus.met"
            {
#line 3085 "cplus.met"
                PPTREE _ptTree0=0;
#line 3085 "cplus.met"
                {
#line 3085 "cplus.met"
                    PPTREE _ptTree1=0,_ptRes1=0;
#line 3085 "cplus.met"
                    _ptRes1= MakeTree(LONG, 1);
#line 3085 "cplus.met"
                    {
#line 3085 "cplus.met"
                        PPTREE _ptTree2=0,_ptRes2=0;
#line 3085 "cplus.met"
                        _ptRes2= MakeTree(HEXA, 1);
#line 3085 "cplus.met"
                        {
#line 3085 "cplus.met"
                            PPTREE _ptTree3=0,_ptRes3=0;
#line 3085 "cplus.met"
                            _ptRes3= MakeTree(INTEGER, 1);
#line 3085 "cplus.met"
                            (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3085 "cplus.met"
                            if ( ! TERM_OR_META(LHEXA,"LHEXA") || !(BUILD_TERM_META(_ptTree3))) {
#line 3085 "cplus.met"
                                MulFreeTree(7,_ptRes3,_ptTree3,_ptRes2,_ptTree2,_ptRes1,_ptTree1,_ptTree0);
                                TOKEN_EXIT(constan_exit,"LHEXA")
#line 3085 "cplus.met"
                            } else {
#line 3085 "cplus.met"
                                tokenAhead = 0 ;
#line 3085 "cplus.met"
                            }
#line 3085 "cplus.met"
                            ReplaceTree(_ptRes3, 1, _ptTree3);
#line 3085 "cplus.met"
                            _ptTree2=_ptRes3;
#line 3085 "cplus.met"
                        }
#line 3085 "cplus.met"
                        ReplaceTree(_ptRes2, 1, _ptTree2);
#line 3085 "cplus.met"
                        _ptTree1=_ptRes2;
#line 3085 "cplus.met"
                    }
#line 3085 "cplus.met"
                    ReplaceTree(_ptRes1, 1, _ptTree1);
#line 3085 "cplus.met"
                    _ptTree0=_ptRes1;
#line 3085 "cplus.met"
                }
#line 3085 "cplus.met"
                _retValue =_ptTree0;
#line 3085 "cplus.met"
                goto constan_ret;
#line 3085 "cplus.met"
            }
#line 3085 "cplus.met"
            break;
#line 3085 "cplus.met"
#line 3087 "cplus.met"
        case LLHEXA : 
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
                    _ptRes1= MakeTree(LONGLONG, 1);
#line 3087 "cplus.met"
                    {
#line 3087 "cplus.met"
                        PPTREE _ptTree2=0,_ptRes2=0;
#line 3087 "cplus.met"
                        _ptRes2= MakeTree(HEXA, 1);
#line 3087 "cplus.met"
                        {
#line 3087 "cplus.met"
                            PPTREE _ptTree3=0,_ptRes3=0;
#line 3087 "cplus.met"
                            _ptRes3= MakeTree(INTEGER, 1);
#line 3087 "cplus.met"
                            (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3087 "cplus.met"
                            if ( ! TERM_OR_META(LHEXA,"LHEXA") || !(BUILD_TERM_META(_ptTree3))) {
#line 3087 "cplus.met"
                                MulFreeTree(7,_ptRes3,_ptTree3,_ptRes2,_ptTree2,_ptRes1,_ptTree1,_ptTree0);
                                TOKEN_EXIT(constan_exit,"LHEXA")
#line 3087 "cplus.met"
                            } else {
#line 3087 "cplus.met"
                                tokenAhead = 0 ;
#line 3087 "cplus.met"
                            }
#line 3087 "cplus.met"
                            ReplaceTree(_ptRes3, 1, _ptTree3);
#line 3087 "cplus.met"
                            _ptTree2=_ptRes3;
#line 3087 "cplus.met"
                        }
#line 3087 "cplus.met"
                        ReplaceTree(_ptRes2, 1, _ptTree2);
#line 3087 "cplus.met"
                        _ptTree1=_ptRes2;
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
#line 3089 "cplus.met"
        case UHEXA : 
#line 3089 "cplus.met"
#line 3089 "cplus.met"
            {
#line 3089 "cplus.met"
                PPTREE _ptTree0=0;
#line 3089 "cplus.met"
                {
#line 3089 "cplus.met"
                    PPTREE _ptTree1=0,_ptRes1=0;
#line 3089 "cplus.met"
                    _ptRes1= MakeTree(IUN, 1);
#line 3089 "cplus.met"
                    {
#line 3089 "cplus.met"
                        PPTREE _ptTree2=0,_ptRes2=0;
#line 3089 "cplus.met"
                        _ptRes2= MakeTree(HEXA, 1);
#line 3089 "cplus.met"
                        {
#line 3089 "cplus.met"
                            PPTREE _ptTree3=0,_ptRes3=0;
#line 3089 "cplus.met"
                            _ptRes3= MakeTree(INTEGER, 1);
#line 3089 "cplus.met"
                            (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3089 "cplus.met"
                            if ( ! TERM_OR_META(UHEXA,"UHEXA") || !(BUILD_TERM_META(_ptTree3))) {
#line 3089 "cplus.met"
                                MulFreeTree(7,_ptRes3,_ptTree3,_ptRes2,_ptTree2,_ptRes1,_ptTree1,_ptTree0);
                                TOKEN_EXIT(constan_exit,"UHEXA")
#line 3089 "cplus.met"
                            } else {
#line 3089 "cplus.met"
                                tokenAhead = 0 ;
#line 3089 "cplus.met"
                            }
#line 3089 "cplus.met"
                            ReplaceTree(_ptRes3, 1, _ptTree3);
#line 3089 "cplus.met"
                            _ptTree2=_ptRes3;
#line 3089 "cplus.met"
                        }
#line 3089 "cplus.met"
                        ReplaceTree(_ptRes2, 1, _ptTree2);
#line 3089 "cplus.met"
                        _ptTree1=_ptRes2;
#line 3089 "cplus.met"
                    }
#line 3089 "cplus.met"
                    ReplaceTree(_ptRes1, 1, _ptTree1);
#line 3089 "cplus.met"
                    _ptTree0=_ptRes1;
#line 3089 "cplus.met"
                }
#line 3089 "cplus.met"
                _retValue =_ptTree0;
#line 3089 "cplus.met"
                goto constan_ret;
#line 3089 "cplus.met"
            }
#line 3089 "cplus.met"
            break;
#line 3089 "cplus.met"
#line 3091 "cplus.met"
        case ULHEXA : 
#line 3091 "cplus.met"
#line 3091 "cplus.met"
            {
#line 3091 "cplus.met"
                PPTREE _ptTree0=0;
#line 3091 "cplus.met"
                {
#line 3091 "cplus.met"
                    PPTREE _ptTree1=0,_ptRes1=0;
#line 3091 "cplus.met"
                    _ptRes1= MakeTree(IUNLONG, 1);
#line 3091 "cplus.met"
                    {
#line 3091 "cplus.met"
                        PPTREE _ptTree2=0,_ptRes2=0;
#line 3091 "cplus.met"
                        _ptRes2= MakeTree(HEXA, 1);
#line 3091 "cplus.met"
                        {
#line 3091 "cplus.met"
                            PPTREE _ptTree3=0,_ptRes3=0;
#line 3091 "cplus.met"
                            _ptRes3= MakeTree(INTEGER, 1);
#line 3091 "cplus.met"
                            (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3091 "cplus.met"
                            if ( ! TERM_OR_META(ULHEXA,"ULHEXA") || !(BUILD_TERM_META(_ptTree3))) {
#line 3091 "cplus.met"
                                MulFreeTree(7,_ptRes3,_ptTree3,_ptRes2,_ptTree2,_ptRes1,_ptTree1,_ptTree0);
                                TOKEN_EXIT(constan_exit,"ULHEXA")
#line 3091 "cplus.met"
                            } else {
#line 3091 "cplus.met"
                                tokenAhead = 0 ;
#line 3091 "cplus.met"
                            }
#line 3091 "cplus.met"
                            ReplaceTree(_ptRes3, 1, _ptTree3);
#line 3091 "cplus.met"
                            _ptTree2=_ptRes3;
#line 3091 "cplus.met"
                        }
#line 3091 "cplus.met"
                        ReplaceTree(_ptRes2, 1, _ptTree2);
#line 3091 "cplus.met"
                        _ptTree1=_ptRes2;
#line 3091 "cplus.met"
                    }
#line 3091 "cplus.met"
                    ReplaceTree(_ptRes1, 1, _ptTree1);
#line 3091 "cplus.met"
                    _ptTree0=_ptRes1;
#line 3091 "cplus.met"
                }
#line 3091 "cplus.met"
                _retValue =_ptTree0;
#line 3091 "cplus.met"
                goto constan_ret;
#line 3091 "cplus.met"
            }
#line 3091 "cplus.met"
            break;
#line 3091 "cplus.met"
#line 3093 "cplus.met"
        case ULLHEXA : 
#line 3093 "cplus.met"
#line 3093 "cplus.met"
            {
#line 3093 "cplus.met"
                PPTREE _ptTree0=0;
#line 3093 "cplus.met"
                {
#line 3093 "cplus.met"
                    PPTREE _ptTree1=0,_ptRes1=0;
#line 3093 "cplus.met"
                    _ptRes1= MakeTree(IUNLONGLONG, 1);
#line 3093 "cplus.met"
                    {
#line 3093 "cplus.met"
                        PPTREE _ptTree2=0,_ptRes2=0;
#line 3093 "cplus.met"
                        _ptRes2= MakeTree(HEXA, 1);
#line 3093 "cplus.met"
                        {
#line 3093 "cplus.met"
                            PPTREE _ptTree3=0,_ptRes3=0;
#line 3093 "cplus.met"
                            _ptRes3= MakeTree(INTEGER, 1);
#line 3093 "cplus.met"
                            (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3093 "cplus.met"
                            if ( ! TERM_OR_META(ULHEXA,"ULHEXA") || !(BUILD_TERM_META(_ptTree3))) {
#line 3093 "cplus.met"
                                MulFreeTree(7,_ptRes3,_ptTree3,_ptRes2,_ptTree2,_ptRes1,_ptTree1,_ptTree0);
                                TOKEN_EXIT(constan_exit,"ULHEXA")
#line 3093 "cplus.met"
                            } else {
#line 3093 "cplus.met"
                                tokenAhead = 0 ;
#line 3093 "cplus.met"
                            }
#line 3093 "cplus.met"
                            ReplaceTree(_ptRes3, 1, _ptTree3);
#line 3093 "cplus.met"
                            _ptTree2=_ptRes3;
#line 3093 "cplus.met"
                        }
#line 3093 "cplus.met"
                        ReplaceTree(_ptRes2, 1, _ptTree2);
#line 3093 "cplus.met"
                        _ptTree1=_ptRes2;
#line 3093 "cplus.met"
                    }
#line 3093 "cplus.met"
                    ReplaceTree(_ptRes1, 1, _ptTree1);
#line 3093 "cplus.met"
                    _ptTree0=_ptRes1;
#line 3093 "cplus.met"
                }
#line 3093 "cplus.met"
                _retValue =_ptTree0;
#line 3093 "cplus.met"
                goto constan_ret;
#line 3093 "cplus.met"
            }
#line 3093 "cplus.met"
            break;
#line 3093 "cplus.met"
#line 3095 "cplus.met"
        case OCTAL : 
#line 3095 "cplus.met"
#line 3095 "cplus.met"
            {
#line 3095 "cplus.met"
                PPTREE _ptTree0=0;
#line 3095 "cplus.met"
                {
#line 3095 "cplus.met"
                    PPTREE _ptTree1=0,_ptRes1=0;
#line 3095 "cplus.met"
                    _ptRes1= MakeTree(OCTAL, 1);
#line 3095 "cplus.met"
                    {
#line 3095 "cplus.met"
                        PPTREE _ptTree2=0,_ptRes2=0;
#line 3095 "cplus.met"
                        _ptRes2= MakeTree(INTEGER, 1);
#line 3095 "cplus.met"
                        (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3095 "cplus.met"
                        if ( ! TERM_OR_META(OCTAL,"OCTAL") || !(BUILD_TERM_META(_ptTree2))) {
#line 3095 "cplus.met"
                            MulFreeTree(5,_ptRes2,_ptTree2,_ptRes1,_ptTree1,_ptTree0);
                            TOKEN_EXIT(constan_exit,"OCTAL")
#line 3095 "cplus.met"
                        } else {
#line 3095 "cplus.met"
                            tokenAhead = 0 ;
#line 3095 "cplus.met"
                        }
#line 3095 "cplus.met"
                        ReplaceTree(_ptRes2, 1, _ptTree2);
#line 3095 "cplus.met"
                        _ptTree1=_ptRes2;
#line 3095 "cplus.met"
                    }
#line 3095 "cplus.met"
                    ReplaceTree(_ptRes1, 1, _ptTree1);
#line 3095 "cplus.met"
                    _ptTree0=_ptRes1;
#line 3095 "cplus.met"
                }
#line 3095 "cplus.met"
                _retValue =_ptTree0;
#line 3095 "cplus.met"
                goto constan_ret;
#line 3095 "cplus.met"
            }
#line 3095 "cplus.met"
            break;
#line 3095 "cplus.met"
#line 3096 "cplus.met"
        case LOCTAL : 
#line 3096 "cplus.met"
#line 3096 "cplus.met"
            {
#line 3096 "cplus.met"
                PPTREE _ptTree0=0;
#line 3096 "cplus.met"
                {
#line 3096 "cplus.met"
                    PPTREE _ptTree1=0,_ptRes1=0;
#line 3096 "cplus.met"
                    _ptRes1= MakeTree(ILONG, 1);
#line 3096 "cplus.met"
                    {
#line 3096 "cplus.met"
                        PPTREE _ptTree2=0,_ptRes2=0;
#line 3096 "cplus.met"
                        _ptRes2= MakeTree(OCTAL, 1);
#line 3096 "cplus.met"
                        {
#line 3096 "cplus.met"
                            PPTREE _ptTree3=0,_ptRes3=0;
#line 3096 "cplus.met"
                            _ptRes3= MakeTree(INTEGER, 1);
#line 3096 "cplus.met"
                            (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3096 "cplus.met"
                            if ( ! TERM_OR_META(LOCTAL,"LOCTAL") || !(BUILD_TERM_META(_ptTree3))) {
#line 3096 "cplus.met"
                                MulFreeTree(7,_ptRes3,_ptTree3,_ptRes2,_ptTree2,_ptRes1,_ptTree1,_ptTree0);
                                TOKEN_EXIT(constan_exit,"LOCTAL")
#line 3096 "cplus.met"
                            } else {
#line 3096 "cplus.met"
                                tokenAhead = 0 ;
#line 3096 "cplus.met"
                            }
#line 3096 "cplus.met"
                            ReplaceTree(_ptRes3, 1, _ptTree3);
#line 3096 "cplus.met"
                            _ptTree2=_ptRes3;
#line 3096 "cplus.met"
                        }
#line 3096 "cplus.met"
                        ReplaceTree(_ptRes2, 1, _ptTree2);
#line 3096 "cplus.met"
                        _ptTree1=_ptRes2;
#line 3096 "cplus.met"
                    }
#line 3096 "cplus.met"
                    ReplaceTree(_ptRes1, 1, _ptTree1);
#line 3096 "cplus.met"
                    _ptTree0=_ptRes1;
#line 3096 "cplus.met"
                }
#line 3096 "cplus.met"
                _retValue =_ptTree0;
#line 3096 "cplus.met"
                goto constan_ret;
#line 3096 "cplus.met"
            }
#line 3096 "cplus.met"
            break;
#line 3096 "cplus.met"
#line 3098 "cplus.met"
        case LLOCTAL : 
#line 3098 "cplus.met"
#line 3098 "cplus.met"
            {
#line 3098 "cplus.met"
                PPTREE _ptTree0=0;
#line 3098 "cplus.met"
                {
#line 3098 "cplus.met"
                    PPTREE _ptTree1=0,_ptRes1=0;
#line 3098 "cplus.met"
                    _ptRes1= MakeTree(ILONGLONG, 1);
#line 3098 "cplus.met"
                    {
#line 3098 "cplus.met"
                        PPTREE _ptTree2=0,_ptRes2=0;
#line 3098 "cplus.met"
                        _ptRes2= MakeTree(OCTAL, 1);
#line 3098 "cplus.met"
                        {
#line 3098 "cplus.met"
                            PPTREE _ptTree3=0,_ptRes3=0;
#line 3098 "cplus.met"
                            _ptRes3= MakeTree(INTEGER, 1);
#line 3098 "cplus.met"
                            (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3098 "cplus.met"
                            if ( ! TERM_OR_META(LOCTAL,"LOCTAL") || !(BUILD_TERM_META(_ptTree3))) {
#line 3098 "cplus.met"
                                MulFreeTree(7,_ptRes3,_ptTree3,_ptRes2,_ptTree2,_ptRes1,_ptTree1,_ptTree0);
                                TOKEN_EXIT(constan_exit,"LOCTAL")
#line 3098 "cplus.met"
                            } else {
#line 3098 "cplus.met"
                                tokenAhead = 0 ;
#line 3098 "cplus.met"
                            }
#line 3098 "cplus.met"
                            ReplaceTree(_ptRes3, 1, _ptTree3);
#line 3098 "cplus.met"
                            _ptTree2=_ptRes3;
#line 3098 "cplus.met"
                        }
#line 3098 "cplus.met"
                        ReplaceTree(_ptRes2, 1, _ptTree2);
#line 3098 "cplus.met"
                        _ptTree1=_ptRes2;
#line 3098 "cplus.met"
                    }
#line 3098 "cplus.met"
                    ReplaceTree(_ptRes1, 1, _ptTree1);
#line 3098 "cplus.met"
                    _ptTree0=_ptRes1;
#line 3098 "cplus.met"
                }
#line 3098 "cplus.met"
                _retValue =_ptTree0;
#line 3098 "cplus.met"
                goto constan_ret;
#line 3098 "cplus.met"
            }
#line 3098 "cplus.met"
            break;
#line 3098 "cplus.met"
#line 3100 "cplus.met"
        case UOCTAL : 
#line 3100 "cplus.met"
#line 3100 "cplus.met"
            {
#line 3100 "cplus.met"
                PPTREE _ptTree0=0;
#line 3100 "cplus.met"
                {
#line 3100 "cplus.met"
                    PPTREE _ptTree1=0,_ptRes1=0;
#line 3100 "cplus.met"
                    _ptRes1= MakeTree(IUN, 1);
#line 3100 "cplus.met"
                    {
#line 3100 "cplus.met"
                        PPTREE _ptTree2=0,_ptRes2=0;
#line 3100 "cplus.met"
                        _ptRes2= MakeTree(OCTAL, 1);
#line 3100 "cplus.met"
                        {
#line 3100 "cplus.met"
                            PPTREE _ptTree3=0,_ptRes3=0;
#line 3100 "cplus.met"
                            _ptRes3= MakeTree(INTEGER, 1);
#line 3100 "cplus.met"
                            (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3100 "cplus.met"
                            if ( ! TERM_OR_META(UOCTAL,"UOCTAL") || !(BUILD_TERM_META(_ptTree3))) {
#line 3100 "cplus.met"
                                MulFreeTree(7,_ptRes3,_ptTree3,_ptRes2,_ptTree2,_ptRes1,_ptTree1,_ptTree0);
                                TOKEN_EXIT(constan_exit,"UOCTAL")
#line 3100 "cplus.met"
                            } else {
#line 3100 "cplus.met"
                                tokenAhead = 0 ;
#line 3100 "cplus.met"
                            }
#line 3100 "cplus.met"
                            ReplaceTree(_ptRes3, 1, _ptTree3);
#line 3100 "cplus.met"
                            _ptTree2=_ptRes3;
#line 3100 "cplus.met"
                        }
#line 3100 "cplus.met"
                        ReplaceTree(_ptRes2, 1, _ptTree2);
#line 3100 "cplus.met"
                        _ptTree1=_ptRes2;
#line 3100 "cplus.met"
                    }
#line 3100 "cplus.met"
                    ReplaceTree(_ptRes1, 1, _ptTree1);
#line 3100 "cplus.met"
                    _ptTree0=_ptRes1;
#line 3100 "cplus.met"
                }
#line 3100 "cplus.met"
                _retValue =_ptTree0;
#line 3100 "cplus.met"
                goto constan_ret;
#line 3100 "cplus.met"
            }
#line 3100 "cplus.met"
            break;
#line 3100 "cplus.met"
#line 3102 "cplus.met"
        case ULOCTAL : 
#line 3102 "cplus.met"
#line 3102 "cplus.met"
            {
#line 3102 "cplus.met"
                PPTREE _ptTree0=0;
#line 3102 "cplus.met"
                {
#line 3102 "cplus.met"
                    PPTREE _ptTree1=0,_ptRes1=0;
#line 3102 "cplus.met"
                    _ptRes1= MakeTree(IUNLONG, 1);
#line 3102 "cplus.met"
                    {
#line 3102 "cplus.met"
                        PPTREE _ptTree2=0,_ptRes2=0;
#line 3102 "cplus.met"
                        _ptRes2= MakeTree(OCTAL, 1);
#line 3102 "cplus.met"
                        {
#line 3102 "cplus.met"
                            PPTREE _ptTree3=0,_ptRes3=0;
#line 3102 "cplus.met"
                            _ptRes3= MakeTree(INTEGER, 1);
#line 3102 "cplus.met"
                            (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3102 "cplus.met"
                            if ( ! TERM_OR_META(ULOCTAL,"ULOCTAL") || !(BUILD_TERM_META(_ptTree3))) {
#line 3102 "cplus.met"
                                MulFreeTree(7,_ptRes3,_ptTree3,_ptRes2,_ptTree2,_ptRes1,_ptTree1,_ptTree0);
                                TOKEN_EXIT(constan_exit,"ULOCTAL")
#line 3102 "cplus.met"
                            } else {
#line 3102 "cplus.met"
                                tokenAhead = 0 ;
#line 3102 "cplus.met"
                            }
#line 3102 "cplus.met"
                            ReplaceTree(_ptRes3, 1, _ptTree3);
#line 3102 "cplus.met"
                            _ptTree2=_ptRes3;
#line 3102 "cplus.met"
                        }
#line 3102 "cplus.met"
                        ReplaceTree(_ptRes2, 1, _ptTree2);
#line 3102 "cplus.met"
                        _ptTree1=_ptRes2;
#line 3102 "cplus.met"
                    }
#line 3102 "cplus.met"
                    ReplaceTree(_ptRes1, 1, _ptTree1);
#line 3102 "cplus.met"
                    _ptTree0=_ptRes1;
#line 3102 "cplus.met"
                }
#line 3102 "cplus.met"
                _retValue =_ptTree0;
#line 3102 "cplus.met"
                goto constan_ret;
#line 3102 "cplus.met"
            }
#line 3102 "cplus.met"
            break;
#line 3102 "cplus.met"
#line 3104 "cplus.met"
        case ULLOCTAL : 
#line 3104 "cplus.met"
#line 3104 "cplus.met"
            {
#line 3104 "cplus.met"
                PPTREE _ptTree0=0;
#line 3104 "cplus.met"
                {
#line 3104 "cplus.met"
                    PPTREE _ptTree1=0,_ptRes1=0;
#line 3104 "cplus.met"
                    _ptRes1= MakeTree(IUNLONGLONG, 1);
#line 3104 "cplus.met"
                    {
#line 3104 "cplus.met"
                        PPTREE _ptTree2=0,_ptRes2=0;
#line 3104 "cplus.met"
                        _ptRes2= MakeTree(OCTAL, 1);
#line 3104 "cplus.met"
                        {
#line 3104 "cplus.met"
                            PPTREE _ptTree3=0,_ptRes3=0;
#line 3104 "cplus.met"
                            _ptRes3= MakeTree(INTEGER, 1);
#line 3104 "cplus.met"
                            (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3104 "cplus.met"
                            if ( ! TERM_OR_META(ULOCTAL,"ULOCTAL") || !(BUILD_TERM_META(_ptTree3))) {
#line 3104 "cplus.met"
                                MulFreeTree(7,_ptRes3,_ptTree3,_ptRes2,_ptTree2,_ptRes1,_ptTree1,_ptTree0);
                                TOKEN_EXIT(constan_exit,"ULOCTAL")
#line 3104 "cplus.met"
                            } else {
#line 3104 "cplus.met"
                                tokenAhead = 0 ;
#line 3104 "cplus.met"
                            }
#line 3104 "cplus.met"
                            ReplaceTree(_ptRes3, 1, _ptTree3);
#line 3104 "cplus.met"
                            _ptTree2=_ptRes3;
#line 3104 "cplus.met"
                        }
#line 3104 "cplus.met"
                        ReplaceTree(_ptRes2, 1, _ptTree2);
#line 3104 "cplus.met"
                        _ptTree1=_ptRes2;
#line 3104 "cplus.met"
                    }
#line 3104 "cplus.met"
                    ReplaceTree(_ptRes1, 1, _ptTree1);
#line 3104 "cplus.met"
                    _ptTree0=_ptRes1;
#line 3104 "cplus.met"
                }
#line 3104 "cplus.met"
                _retValue =_ptTree0;
#line 3104 "cplus.met"
                goto constan_ret;
#line 3104 "cplus.met"
            }
#line 3104 "cplus.met"
            break;
#line 3104 "cplus.met"
#line 3106 "cplus.met"
        case FLOATVAL : 
#line 3106 "cplus.met"
#line 3106 "cplus.met"
            {
#line 3106 "cplus.met"
                PPTREE _ptTree0=0;
#line 3106 "cplus.met"
                {
#line 3106 "cplus.met"
                    PPTREE _ptTree1=0,_ptRes1=0;
#line 3106 "cplus.met"
                    _ptRes1= MakeTree(FLOAT, 1);
#line 3106 "cplus.met"
                    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3106 "cplus.met"
                    if ( ! TERM_OR_META(FLOATVAL,"FLOATVAL") || !(BUILD_TERM_META(_ptTree1))) {
#line 3106 "cplus.met"
                        MulFreeTree(3,_ptRes1,_ptTree1,_ptTree0);
                        TOKEN_EXIT(constan_exit,"FLOATVAL")
#line 3106 "cplus.met"
                    } else {
#line 3106 "cplus.met"
                        tokenAhead = 0 ;
#line 3106 "cplus.met"
                    }
#line 3106 "cplus.met"
                    ReplaceTree(_ptRes1, 1, _ptTree1);
#line 3106 "cplus.met"
                    _ptTree0=_ptRes1;
#line 3106 "cplus.met"
                }
#line 3106 "cplus.met"
                _retValue =_ptTree0;
#line 3106 "cplus.met"
                goto constan_ret;
#line 3106 "cplus.met"
            }
#line 3106 "cplus.met"
            break;
#line 3106 "cplus.met"
#line 3107 "cplus.met"
        case CHARACT : 
#line 3107 "cplus.met"
#line 3107 "cplus.met"
            {
#line 3107 "cplus.met"
                PPTREE _ptTree0=0;
#line 3107 "cplus.met"
                {
#line 3107 "cplus.met"
                    PPTREE _ptTree1=0,_ptRes1=0;
#line 3107 "cplus.met"
                    _ptRes1= MakeTree(CHAR, 1);
#line 3107 "cplus.met"
                    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3107 "cplus.met"
                    if ( ! TERM_OR_META(CHARACT,"CHARACT") || !(BUILD_TERM_META(_ptTree1))) {
#line 3107 "cplus.met"
                        MulFreeTree(3,_ptRes1,_ptTree1,_ptTree0);
                        TOKEN_EXIT(constan_exit,"CHARACT")
#line 3107 "cplus.met"
                    } else {
#line 3107 "cplus.met"
                        tokenAhead = 0 ;
#line 3107 "cplus.met"
                    }
#line 3107 "cplus.met"
                    ReplaceTree(_ptRes1, 1, _ptTree1);
#line 3107 "cplus.met"
                    _ptTree0=_ptRes1;
#line 3107 "cplus.met"
                }
#line 3107 "cplus.met"
                _retValue =_ptTree0;
#line 3107 "cplus.met"
                goto constan_ret;
#line 3107 "cplus.met"
            }
#line 3107 "cplus.met"
            break;
#line 3107 "cplus.met"
        default :
#line 3107 "cplus.met"
            CASE_EXIT(constan_exit,"either INTEGER or LINTEGER or LLINTEGER or UINTEGER or ULINTEGER or ULLINTEGER or HEXA or LHEXA or LLHEXA or UHEXA or ULHEXA or ULLHEXA or OCTAL or LOCTAL or LLOCTAL or UOCTAL or ULOCTAL or ULLOCTAL or FLOATVAL or CHARACT")
#line 3107 "cplus.met"
            break;
#line 3107 "cplus.met"
    }
#line 3107 "cplus.met"
#line 3107 "cplus.met"
#line 3108 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 3108 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 3108 "cplus.met"
return((PPTREE) 0);
#line 3108 "cplus.met"

#line 3108 "cplus.met"
constan_exit :
#line 3108 "cplus.met"

#line 3108 "cplus.met"
    _Debug = TRACE_RULE("constan",TRACE_EXIT,(PPTREE)0);
#line 3108 "cplus.met"
    _funcLevel--;
#line 3108 "cplus.met"
    return((PPTREE) -1) ;
#line 3108 "cplus.met"

#line 3108 "cplus.met"
constan_ret :
#line 3108 "cplus.met"
    
#line 3108 "cplus.met"
    _Debug = TRACE_RULE("constan",TRACE_RETURN,_retValue);
#line 3108 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 3108 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 3108 "cplus.met"
    return _retValue ;
#line 3108 "cplus.met"
}
#line 3108 "cplus.met"

#line 3108 "cplus.met"
