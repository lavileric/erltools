/*************************************************************************/
/*                                                                       */
/*        Produced by MetaGen version 2.0  -    1989-2006                 */
/*       Syntaxic Analyzer Meta Generator developped by                  */
/*                  Eric Lavillonniere                                   */
/*                                                                       */
/*************************************************************************/

#include "token.h"
#include "cplus.h"


#line 2286 "cplus.met"
PPTREE cplus::ptr_operator ( int error_free)
#line 2286 "cplus.met"
{
#line 2286 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 2286 "cplus.met"
    int _value,_nbPre = 0 ;
#line 2286 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 2286 "cplus.met"
    int _Debug = TRACE_RULE("ptr_operator",TRACE_ENTER,(PPTREE)0);
#line 2286 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 2286 "cplus.met"
#line 2286 "cplus.met"
    PPTREE retTree = (PPTREE) 0,valTree = (PPTREE) 0,retour = (PPTREE) 0;
#line 2286 "cplus.met"
#line 2288 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 2288 "cplus.met"
    switch( lexEl.Value) {
#line 2288 "cplus.met"
#line 2291 "cplus.met"
        case ETOI : 
#line 2291 "cplus.met"
            tokenAhead = 0 ;
#line 2291 "cplus.met"
            CommTerm();
#line 2291 "cplus.met"
#line 2290 "cplus.met"
#line 2291 "cplus.met"
            {
#line 2291 "cplus.met"
                PPTREE _ptRes0=0;
#line 2291 "cplus.met"
                _ptRes0= MakeTree(TYP_ADDR, 1);
#line 2291 "cplus.met"
                retTree=_ptRes0;
#line 2291 "cplus.met"
            }
#line 2291 "cplus.met"
#line 2292 "cplus.met"
            if (NPUSH_CALL_AFF_VERIF(valTree = ,_Tak(const_or_volatile), 34, cplus)){
#line 2292 "cplus.met"
#line 2293 "cplus.met"
                ReplaceTree(retTree ,1 ,valTree );
#line 2293 "cplus.met"
#line 2293 "cplus.met"
            }
#line 2293 "cplus.met"
#line 2294 "cplus.met"
            {
#line 2294 "cplus.met"
                _retValue = retTree ;
#line 2294 "cplus.met"
                goto ptr_operator_ret;
#line 2294 "cplus.met"
                
#line 2294 "cplus.met"
            }
#line 2294 "cplus.met"
#line 2294 "cplus.met"
            break;
#line 2294 "cplus.met"
#line 2298 "cplus.met"
        case ETCO : 
#line 2298 "cplus.met"
            tokenAhead = 0 ;
#line 2298 "cplus.met"
            CommTerm();
#line 2298 "cplus.met"
#line 2297 "cplus.met"
#line 2298 "cplus.met"
            {
#line 2298 "cplus.met"
                PPTREE _ptRes0=0;
#line 2298 "cplus.met"
                _ptRes0= MakeTree(TYP_REF, 1);
#line 2298 "cplus.met"
                retTree=_ptRes0;
#line 2298 "cplus.met"
            }
#line 2298 "cplus.met"
#line 2299 "cplus.met"
            if (NPUSH_CALL_AFF_VERIF(valTree = ,_Tak(const_or_volatile), 34, cplus)){
#line 2299 "cplus.met"
#line 2300 "cplus.met"
                ReplaceTree(retTree ,1 ,valTree );
#line 2300 "cplus.met"
#line 2300 "cplus.met"
            }
#line 2300 "cplus.met"
#line 2301 "cplus.met"
            {
#line 2301 "cplus.met"
                _retValue = retTree ;
#line 2301 "cplus.met"
                goto ptr_operator_ret;
#line 2301 "cplus.met"
                
#line 2301 "cplus.met"
            }
#line 2301 "cplus.met"
#line 2301 "cplus.met"
            break;
#line 2301 "cplus.met"
#line 2305 "cplus.met"
        case DPOIDPOI : 
#line 2305 "cplus.met"
#line 2304 "cplus.met"
#line 2305 "cplus.met"
            if ( (retour=NQUICK_CALL(_Tak(member_declarator)(error_free), 99, cplus))== (PPTREE) -1 ) {
#line 2305 "cplus.met"
                MulFreeTree(3,retTree,retour,valTree);
                PROG_EXIT(ptr_operator_exit,"ptr_operator")
#line 2305 "cplus.met"
            }
#line 2305 "cplus.met"
#line 2305 "cplus.met"
            break;
#line 2305 "cplus.met"
#line 2307 "cplus.met"
        case META : 
#line 2307 "cplus.met"
        case IDENT : 
#line 2307 "cplus.met"
#line 2308 "cplus.met"
#line 2309 "cplus.met"
            if ( (retour=NQUICK_CALL(_Tak(member_declarator)(error_free), 99, cplus))== (PPTREE) -1 ) {
#line 2309 "cplus.met"
                MulFreeTree(3,retTree,retour,valTree);
                PROG_EXIT(ptr_operator_exit,"ptr_operator")
#line 2309 "cplus.met"
            }
#line 2309 "cplus.met"
#line 2309 "cplus.met"
            break;
#line 2309 "cplus.met"
        default :
#line 2309 "cplus.met"
            MulFreeTree(3,retTree,retour,valTree);
            CASE_EXIT(ptr_operator_exit,"either * or & or :: or IDENT")
#line 2309 "cplus.met"
            break;
#line 2309 "cplus.met"
    }
#line 2309 "cplus.met"
#line 2312 "cplus.met"
    if (NPUSH_CALL_AFF_VERIF(valTree = ,_Tak(const_or_volatile), 34, cplus)){
#line 2312 "cplus.met"
#line 2313 "cplus.met"
        ReplaceTree(retour ,2 ,valTree );
#line 2313 "cplus.met"
#line 2313 "cplus.met"
    }
#line 2313 "cplus.met"
#line 2314 "cplus.met"
    {
#line 2314 "cplus.met"
        _retValue = retour ;
#line 2314 "cplus.met"
        goto ptr_operator_ret;
#line 2314 "cplus.met"
        
#line 2314 "cplus.met"
    }
#line 2314 "cplus.met"
#line 2314 "cplus.met"
#line 2314 "cplus.met"

#line 2315 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2315 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 2315 "cplus.met"
return((PPTREE) 0);
#line 2315 "cplus.met"

#line 2315 "cplus.met"
ptr_operator_exit :
#line 2315 "cplus.met"

#line 2315 "cplus.met"
    _Debug = TRACE_RULE("ptr_operator",TRACE_EXIT,(PPTREE)0);
#line 2315 "cplus.met"
    _funcLevel--;
#line 2315 "cplus.met"
    return((PPTREE) -1) ;
#line 2315 "cplus.met"

#line 2315 "cplus.met"
ptr_operator_ret :
#line 2315 "cplus.met"
    
#line 2315 "cplus.met"
    _Debug = TRACE_RULE("ptr_operator",TRACE_RETURN,_retValue);
#line 2315 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2315 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 2315 "cplus.met"
    return _retValue ;
#line 2315 "cplus.met"
}
#line 2315 "cplus.met"

#line 2315 "cplus.met"
#line 1896 "cplus.met"
PPTREE cplus::qualified_name ( int error_free)
#line 1896 "cplus.met"
{
#line 1896 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 1896 "cplus.met"
    int _value,_nbPre = 0 ;
#line 1896 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 1896 "cplus.met"
    int _Debug = TRACE_RULE("qualified_name",TRACE_ENTER,(PPTREE)0);
#line 1896 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 1896 "cplus.met"
#line 1896 "cplus.met"
    PPTREE retTree = (PPTREE) 0,inter = (PPTREE) 0,val = (PPTREE) 0,templateVal = (PPTREE) 0;
#line 1896 "cplus.met"
#line 1898 "cplus.met"
    if ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN(TILD,"~") && (tokenAhead = 0,CommTerm(),1)){
#line 1898 "cplus.met"
#line 1899 "cplus.met"
        {
#line 1899 "cplus.met"
            PPTREE _ptTree0=0,_ptRes0=0;
#line 1899 "cplus.met"
            _ptRes0= MakeTree(DESTRUCT, 1);
#line 1899 "cplus.met"
            {
#line 1899 "cplus.met"
                PPTREE _ptTree1=0,_ptRes1=0;
#line 1899 "cplus.met"
                _ptRes1= MakeTree(IDENT, 1);
#line 1899 "cplus.met"
                (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 1899 "cplus.met"
                if ( ! TERM_OR_META(IDENT,"IDENT") || !(BUILD_TERM_META(_ptTree1))) {
#line 1899 "cplus.met"
                    MulFreeTree(8,_ptRes1,_ptTree1,_ptRes0,_ptTree0,inter,retTree,templateVal,val);
                    TOKEN_EXIT(qualified_name_exit,"IDENT")
#line 1899 "cplus.met"
                } else {
#line 1899 "cplus.met"
                    tokenAhead = 0 ;
#line 1899 "cplus.met"
                }
#line 1899 "cplus.met"
                ReplaceTree(_ptRes1, 1, _ptTree1);
#line 1899 "cplus.met"
                _ptTree0=_ptRes1;
#line 1899 "cplus.met"
            }
#line 1899 "cplus.met"
            ReplaceTree(_ptRes0, 1, _ptTree0);
#line 1899 "cplus.met"
            retTree=_ptRes0;
#line 1899 "cplus.met"
        }
#line 1899 "cplus.met"
    } else {
#line 1899 "cplus.met"
#line 1901 "cplus.met"
        if ( (retTree=NQUICK_CALL(_Tak(simple_ident)(error_free), 135, cplus))== (PPTREE) -1 ) {
#line 1901 "cplus.met"
            MulFreeTree(4,inter,retTree,templateVal,val);
            PROG_EXIT(qualified_name_exit,"qualified_name")
#line 1901 "cplus.met"
        }
#line 1901 "cplus.met"
    }
#line 1901 "cplus.met"
#line 1902 "cplus.met"
    if ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN( DPOIDPOI,"::")){
#line 1902 "cplus.met"
#line 1903 "cplus.met"
#line 1904 "cplus.met"
        {
#line 1904 "cplus.met"
            PPTREE _ptRes0=0;
#line 1904 "cplus.met"
            _ptRes0= MakeTree(QUALIFIED, 2);
#line 1904 "cplus.met"
            ReplaceTree(_ptRes0, 1, retTree );
#line 1904 "cplus.met"
            retTree=_ptRes0;
#line 1904 "cplus.met"
        }
#line 1904 "cplus.met"
#line 1905 "cplus.met"
        inter = retTree ;
#line 1905 "cplus.met"
#line 1906 "cplus.met"
        while (((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN( DPOIDPOI,"::")) && 
#line 1906 "cplus.met"
              (NPUSH_CALL_AFF_VERIF(val = ,_Tak(qualified_name_elem), 122, cplus))) { 
#line 1906 "cplus.met"
#line 1907 "cplus.met"
#line 1908 "cplus.met"
            if ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN( DPOIDPOI,"::")){
#line 1908 "cplus.met"
#line 1909 "cplus.met"
                {
#line 1909 "cplus.met"
                    PPTREE _ptRes0=0;
#line 1909 "cplus.met"
                    _ptRes0= MakeTree(QUALIFIED, 2);
#line 1909 "cplus.met"
                    ReplaceTree(_ptRes0, 1, val );
#line 1909 "cplus.met"
                    val=_ptRes0;
#line 1909 "cplus.met"
                }
#line 1909 "cplus.met"
            }
#line 1909 "cplus.met"
#line 1910 "cplus.met"
            ReplaceTree(inter ,2 ,val );
#line 1910 "cplus.met"
#line 1911 "cplus.met"
            inter = val ;
#line 1911 "cplus.met"
#line 1911 "cplus.met"
        } 
#line 1911 "cplus.met"
#line 1911 "cplus.met"
#line 1912 "cplus.met"
    }
#line 1912 "cplus.met"
#line 1914 "cplus.met"
    if (NPUSH_CALL_AFF_VERIF(templateVal = ,_Tak(template_type), 149, cplus)){
#line 1914 "cplus.met"
#line 1915 "cplus.met"
#line 1916 "cplus.met"
        ReplaceTree(templateVal ,1 ,retTree );
#line 1916 "cplus.met"
#line 1917 "cplus.met"
        retTree = templateVal ;
#line 1917 "cplus.met"
#line 1918 "cplus.met"
        if ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN(DPOIDPOI,"::") && (tokenAhead = 0,CommTerm(),1)){
#line 1918 "cplus.met"
#line 1919 "cplus.met"
            {
#line 1919 "cplus.met"
                PPTREE _ptTree0=0;
#line 1919 "cplus.met"
                {
#line 1919 "cplus.met"
                    PPTREE _ptTree1=0,_ptRes1=0;
#line 1919 "cplus.met"
                    _ptRes1= MakeTree(QUALIFIED, 2);
#line 1919 "cplus.met"
                    ReplaceTree(_ptRes1, 1, retTree );
#line 1919 "cplus.met"
                    if ( (_ptTree1=NQUICK_CALL(_Tak(qualified_name)(error_free), 121, cplus))== (PPTREE) -1 ) {
#line 1919 "cplus.met"
                        MulFreeTree(7,_ptRes1,_ptTree1,_ptTree0,inter,retTree,templateVal,val);
                        PROG_EXIT(qualified_name_exit,"qualified_name")
#line 1919 "cplus.met"
                    }
#line 1919 "cplus.met"
                    ReplaceTree(_ptRes1, 2, _ptTree1);
#line 1919 "cplus.met"
                    _ptTree0=_ptRes1;
#line 1919 "cplus.met"
                }
#line 1919 "cplus.met"
                _retValue =_ptTree0;
#line 1919 "cplus.met"
                goto qualified_name_ret;
#line 1919 "cplus.met"
            }
#line 1919 "cplus.met"
        } else {
#line 1919 "cplus.met"
#line 1921 "cplus.met"
            {
#line 1921 "cplus.met"
                _retValue = retTree ;
#line 1921 "cplus.met"
                goto qualified_name_ret;
#line 1921 "cplus.met"
                
#line 1921 "cplus.met"
            }
#line 1921 "cplus.met"
        }
#line 1921 "cplus.met"
#line 1921 "cplus.met"
#line 1921 "cplus.met"
    }
#line 1921 "cplus.met"
#line 1923 "cplus.met"
    {
#line 1923 "cplus.met"
        _retValue = retTree ;
#line 1923 "cplus.met"
        goto qualified_name_ret;
#line 1923 "cplus.met"
        
#line 1923 "cplus.met"
    }
#line 1923 "cplus.met"
#line 1923 "cplus.met"
#line 1923 "cplus.met"

#line 1924 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1924 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 1924 "cplus.met"
return((PPTREE) 0);
#line 1924 "cplus.met"

#line 1924 "cplus.met"
qualified_name_exit :
#line 1924 "cplus.met"

#line 1924 "cplus.met"
    _Debug = TRACE_RULE("qualified_name",TRACE_EXIT,(PPTREE)0);
#line 1924 "cplus.met"
    _funcLevel--;
#line 1924 "cplus.met"
    return((PPTREE) -1) ;
#line 1924 "cplus.met"

#line 1924 "cplus.met"
qualified_name_ret :
#line 1924 "cplus.met"
    
#line 1924 "cplus.met"
    _Debug = TRACE_RULE("qualified_name",TRACE_RETURN,_retValue);
#line 1924 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1924 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 1924 "cplus.met"
    return _retValue ;
#line 1924 "cplus.met"
}
#line 1924 "cplus.met"

#line 1924 "cplus.met"
#line 1870 "cplus.met"
PPTREE cplus::qualified_name_elem ( int error_free)
#line 1870 "cplus.met"
{
#line 1870 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 1870 "cplus.met"
    int _value,_nbPre = 0 ;
#line 1870 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 1870 "cplus.met"
    int _Debug = TRACE_RULE("qualified_name_elem",TRACE_ENTER,(PPTREE)0);
#line 1870 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 1870 "cplus.met"
#line 1871 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 1871 "cplus.met"
    if (  !SEE_TOKEN( DPOIDPOI,"::") || !(CommTerm(),1)) {
#line 1871 "cplus.met"
            TOKEN_EXIT(qualified_name_elem_exit,"::")
#line 1871 "cplus.met"
    } else {
#line 1871 "cplus.met"
        tokenAhead = 0 ;
#line 1871 "cplus.met"
    }
#line 1871 "cplus.met"
#line 1872 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 1872 "cplus.met"
    switch( lexEl.Value) {
#line 1872 "cplus.met"
#line 1873 "cplus.met"
        case TILD : 
#line 1873 "cplus.met"
            tokenAhead = 0 ;
#line 1873 "cplus.met"
            CommTerm();
#line 1873 "cplus.met"
#line 1873 "cplus.met"
            {
#line 1873 "cplus.met"
                PPTREE _ptTree0=0;
#line 1873 "cplus.met"
                {
#line 1873 "cplus.met"
                    PPTREE _ptTree1=0,_ptRes1=0;
#line 1873 "cplus.met"
                    _ptRes1= MakeTree(DESTRUCT, 1);
#line 1873 "cplus.met"
                    {
#line 1873 "cplus.met"
                        PPTREE _ptTree2=0,_ptRes2=0;
#line 1873 "cplus.met"
                        _ptRes2= MakeTree(IDENT, 1);
#line 1873 "cplus.met"
                        (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 1873 "cplus.met"
                        if ( ! TERM_OR_META(IDENT,"IDENT") || !(BUILD_TERM_META(_ptTree2))) {
#line 1873 "cplus.met"
                            MulFreeTree(5,_ptRes2,_ptTree2,_ptRes1,_ptTree1,_ptTree0);
                            TOKEN_EXIT(qualified_name_elem_exit,"IDENT")
#line 1873 "cplus.met"
                        } else {
#line 1873 "cplus.met"
                            tokenAhead = 0 ;
#line 1873 "cplus.met"
                        }
#line 1873 "cplus.met"
                        ReplaceTree(_ptRes2, 1, _ptTree2);
#line 1873 "cplus.met"
                        _ptTree1=_ptRes2;
#line 1873 "cplus.met"
                    }
#line 1873 "cplus.met"
                    ReplaceTree(_ptRes1, 1, _ptTree1);
#line 1873 "cplus.met"
                    _ptTree0=_ptRes1;
#line 1873 "cplus.met"
                }
#line 1873 "cplus.met"
                _retValue =_ptTree0;
#line 1873 "cplus.met"
                goto qualified_name_elem_ret;
#line 1873 "cplus.met"
            }
#line 1873 "cplus.met"
            break;
#line 1873 "cplus.met"
#line 1874 "cplus.met"
        case META : 
#line 1874 "cplus.met"
        case IDENT : 
#line 1874 "cplus.met"
#line 1874 "cplus.met"
            {
#line 1874 "cplus.met"
                PPTREE _ptTree0=0;
#line 1874 "cplus.met"
                if ( (_ptTree0=NQUICK_CALL(_Tak(simple_ident)(error_free), 135, cplus))== (PPTREE) -1 ) {
#line 1874 "cplus.met"
                    MulFreeTree(1,_ptTree0);
                    PROG_EXIT(qualified_name_elem_exit,"qualified_name_elem")
#line 1874 "cplus.met"
                }
#line 1874 "cplus.met"
                _retValue =_ptTree0;
#line 1874 "cplus.met"
                goto qualified_name_elem_ret;
#line 1874 "cplus.met"
            }
#line 1874 "cplus.met"
            break;
#line 1874 "cplus.met"
#line 1875 "cplus.met"
        case OPERATOR : 
#line 1875 "cplus.met"
#line 1875 "cplus.met"
            {
#line 1875 "cplus.met"
                PPTREE _ptTree0=0;
#line 1875 "cplus.met"
                if ( (_ptTree0=NQUICK_CALL(_Tak(operator_function_name)(error_free), 108, cplus))== (PPTREE) -1 ) {
#line 1875 "cplus.met"
                    MulFreeTree(1,_ptTree0);
                    PROG_EXIT(qualified_name_elem_exit,"qualified_name_elem")
#line 1875 "cplus.met"
                }
#line 1875 "cplus.met"
                _retValue =_ptTree0;
#line 1875 "cplus.met"
                goto qualified_name_elem_ret;
#line 1875 "cplus.met"
            }
#line 1875 "cplus.met"
            break;
#line 1875 "cplus.met"
        default :
#line 1875 "cplus.met"
            CASE_EXIT(qualified_name_elem_exit,"either ~ or IDENT or operator")
#line 1875 "cplus.met"
            break;
#line 1875 "cplus.met"
    }
#line 1875 "cplus.met"
#line 1875 "cplus.met"
#line 1876 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1876 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 1876 "cplus.met"
return((PPTREE) 0);
#line 1876 "cplus.met"

#line 1876 "cplus.met"
qualified_name_elem_exit :
#line 1876 "cplus.met"

#line 1876 "cplus.met"
    _Debug = TRACE_RULE("qualified_name_elem",TRACE_EXIT,(PPTREE)0);
#line 1876 "cplus.met"
    _funcLevel--;
#line 1876 "cplus.met"
    return((PPTREE) -1) ;
#line 1876 "cplus.met"

#line 1876 "cplus.met"
qualified_name_elem_ret :
#line 1876 "cplus.met"
    
#line 1876 "cplus.met"
    _Debug = TRACE_RULE("qualified_name_elem",TRACE_RETURN,_retValue);
#line 1876 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1876 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 1876 "cplus.met"
    return _retValue ;
#line 1876 "cplus.met"
}
#line 1876 "cplus.met"

#line 1876 "cplus.met"
#line 803 "cplus.met"
PPTREE cplus::quick_prog ( int error_free)
#line 803 "cplus.met"
{
#line 803 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 803 "cplus.met"
    int _value,_nbPre = 0 ;
#line 803 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 803 "cplus.met"
    int _Debug = TRACE_RULE("quick_prog",TRACE_ENTER,(PPTREE)0);
#line 803 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 803 "cplus.met"
#line 803 "cplus.met"
    PPTREE list = (PPTREE) 0,valTree = (PPTREE) 0;
#line 803 "cplus.met"
#line 805 "cplus.met"
    while ((NPUSH_CALL_AFF_VERIF(valTree = ,_Tak(quick_prog_elem), 124, cplus)) && 
#line 805 "cplus.met"
          (! (valTree == (PPTREE) 0))) { 
#line 805 "cplus.met"
#line 806 "cplus.met"
#line 807 "cplus.met"
        FreeTree (valTree );
#line 807 "cplus.met"
#line 808 "cplus.met"
         _lastTree = (PPTREE) 0;
#line 808 "cplus.met"
#line 808 "cplus.met"
    } 
#line 808 "cplus.met"
#line 810 "cplus.met"
    ExtUnputBuf();
#line 810 "cplus.met"
    while ((c == ' ')||(c == '\n')||(c == '\t')||(c == '\r')||(c == ''))
#line 810 "cplus.met"
        NextChar() ;
#line 810 "cplus.met"
    ptStockBuf = -1;
#line 810 "cplus.met"
    lexEl.Erase();
#line 810 "cplus.met"
    tokenAhead = 0;
#line 810 "cplus.met"
    oldLine=line,oldCol=col;
#line 810 "cplus.met"
    if ( !lexCallLex) {
#line 810 "cplus.met"
        PUT_COORD_CALL;
#line 810 "cplus.met"
    }
#line 810 "cplus.met"
#line 811 "cplus.met"
    if ((tokenAhead && tokenAhead != -1)|| (c != EOF)){
#line 811 "cplus.met"
#line 812 "cplus.met"
        if ( (NQUICK_CALL(_Tak(quick_prog_elem)(error_free), 124, cplus))== (PPTREE) -1 ) {
#line 812 "cplus.met"
            MulFreeTree(2,list,valTree);
            PROG_EXIT(quick_prog_exit,"quick_prog")
#line 812 "cplus.met"
        }
#line 812 "cplus.met"
    }
#line 812 "cplus.met"
#line 813 "cplus.met"
    {
#line 813 "cplus.met"
        _retValue = list ;
#line 813 "cplus.met"
        goto quick_prog_ret;
#line 813 "cplus.met"
        
#line 813 "cplus.met"
    }
#line 813 "cplus.met"
#line 813 "cplus.met"
#line 813 "cplus.met"

#line 814 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 814 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 814 "cplus.met"
return((PPTREE) 0);
#line 814 "cplus.met"

#line 814 "cplus.met"
quick_prog_exit :
#line 814 "cplus.met"

#line 814 "cplus.met"
    _Debug = TRACE_RULE("quick_prog",TRACE_EXIT,(PPTREE)0);
#line 814 "cplus.met"
    _funcLevel--;
#line 814 "cplus.met"
    return((PPTREE) -1) ;
#line 814 "cplus.met"

#line 814 "cplus.met"
quick_prog_ret :
#line 814 "cplus.met"
    
#line 814 "cplus.met"
    _Debug = TRACE_RULE("quick_prog",TRACE_RETURN,_retValue);
#line 814 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 814 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 814 "cplus.met"
    return _retValue ;
#line 814 "cplus.met"
}
#line 814 "cplus.met"

#line 814 "cplus.met"
#line 836 "cplus.met"
PPTREE cplus::quick_prog_elem ( int error_free)
#line 836 "cplus.met"
{
#line 836 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 836 "cplus.met"
    int _value,_nbPre = 0 ;
#line 836 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 836 "cplus.met"
    int _Debug = TRACE_RULE("quick_prog_elem",TRACE_ENTER,(PPTREE)0);
#line 836 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 836 "cplus.met"
#line 836 "cplus.met"
    PPTREE retTree = (PPTREE) 0;
#line 836 "cplus.met"
#line 838 "cplus.met"
     debut :
#line 838 "cplus.met"
#line 839 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 839 "cplus.met"
    switch( lexEl.Value) {
#line 839 "cplus.met"
#line 840 "cplus.met"
        case META : 
#line 840 "cplus.met"
        case INCLUDE_DIR : 
#line 840 "cplus.met"
#line 840 "cplus.met"
            {
#line 840 "cplus.met"
                PPTREE _ptTree0=0;
#line 840 "cplus.met"
                if ( (_ptTree0=NQUICK_CALL(_Tak(include_dir)(error_free), 83, cplus))== (PPTREE) -1 ) {
#line 840 "cplus.met"
                    MulFreeTree(2,_ptTree0,retTree);
                    PROG_EXIT(quick_prog_elem_exit,"quick_prog_elem")
#line 840 "cplus.met"
                }
#line 840 "cplus.met"
                _retValue =_ptTree0;
#line 840 "cplus.met"
                goto quick_prog_elem_ret;
#line 840 "cplus.met"
            }
#line 840 "cplus.met"
            break;
#line 840 "cplus.met"
#line 841 "cplus.met"
        case PRAGMA_DIR : 
#line 841 "cplus.met"
            tokenAhead = 0 ;
#line 841 "cplus.met"
            CommTerm();
#line 841 "cplus.met"
#line 842 "cplus.met"
#line 843 "cplus.met"
            if (NPUSH_CALL_VERIF(_Tak(range_pragma), 129, cplus)){
#line 843 "cplus.met"
#line 843 "cplus.met"
            }
#line 843 "cplus.met"
#line 845 "cplus.met"
            (tokenAhead == 8|| (LexPragma(),TRACE_LEX(1)));
#line 845 "cplus.met"
            switch( lexEl.Value) {
#line 845 "cplus.met"
#line 846 "cplus.met"
                case META : 
#line 846 "cplus.met"
                case PRAGMA_CONFIG : 
#line 846 "cplus.met"
                    tokenAhead = 0 ;
#line 846 "cplus.met"
                    CommTerm();
#line 846 "cplus.met"
#line 847 "cplus.met"
#line 848 "cplus.met"
                    (tokenAhead == 8|| (LexPragma(),TRACE_LEX(1)));
#line 848 "cplus.met"
                    switch( lexEl.Value) {
#line 848 "cplus.met"
#line 849 "cplus.met"
                        case META : 
#line 849 "cplus.met"
                        case PRAGMA_TAB : 
#line 849 "cplus.met"
                            tokenAhead = 0 ;
#line 849 "cplus.met"
                            CommTerm();
#line 849 "cplus.met"
#line 850 "cplus.met"
#line 851 "cplus.met"
                            {
#line 851 "cplus.met"
                                PPTREE _ptTree0=0,_ptRes0=0;
#line 851 "cplus.met"
                                _ptRes0= MakeTree(CONFIG, 1);
#line 851 "cplus.met"
                                {
#line 851 "cplus.met"
                                    PPTREE _ptTree1=0,_ptRes1=0;
#line 851 "cplus.met"
                                    _ptRes1= MakeTree(TAB_VALUE, 1);
#line 851 "cplus.met"
                                    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 851 "cplus.met"
                                    if ( ! TERM_OR_META(INTEGER,"INTEGER") || !(BUILD_TERM_META(_ptTree1))) {
#line 851 "cplus.met"
                                        MulFreeTree(5,_ptRes1,_ptTree1,_ptRes0,_ptTree0,retTree);
                                        TOKEN_EXIT(quick_prog_elem_exit,"INTEGER")
#line 851 "cplus.met"
                                    } else {
#line 851 "cplus.met"
                                        tokenAhead = 0 ;
#line 851 "cplus.met"
                                    }
#line 851 "cplus.met"
                                    ReplaceTree(_ptRes1, 1, _ptTree1);
#line 851 "cplus.met"
                                    _ptTree0=_ptRes1;
#line 851 "cplus.met"
                                }
#line 851 "cplus.met"
                                ReplaceTree(_ptRes0, 1, _ptTree0);
#line 851 "cplus.met"
                                retTree=_ptRes0;
#line 851 "cplus.met"
                            }
#line 851 "cplus.met"
#line 852 "cplus.met"
                            AnalyzeTab (retTree );
#line 852 "cplus.met"
#line 853 "cplus.met"
                            {
#line 853 "cplus.met"
                                _retValue = retTree ;
#line 853 "cplus.met"
                                goto quick_prog_elem_ret;
#line 853 "cplus.met"
                                
#line 853 "cplus.met"
                            }
#line 853 "cplus.met"
#line 853 "cplus.met"
                            break;
#line 853 "cplus.met"
#line 855 "cplus.met"
                        case PRAGMA_MODE : 
#line 855 "cplus.met"
                            tokenAhead = 0 ;
#line 855 "cplus.met"
                            CommTerm();
#line 855 "cplus.met"
#line 856 "cplus.met"
#line 857 "cplus.met"
                            {
#line 857 "cplus.met"
                                PPTREE _ptTree0=0,_ptRes0=0;
#line 857 "cplus.met"
                                _ptRes0= MakeTree(CONFIG, 1);
#line 857 "cplus.met"
                                {
#line 857 "cplus.met"
                                    PPTREE _ptTree1=0,_ptRes1=0;
#line 857 "cplus.met"
                                    _ptRes1= MakeTree(MODE_VALUE, 1);
#line 857 "cplus.met"
                                    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 857 "cplus.met"
                                    if ( ! TERM_OR_META(IDENT,"IDENT") || !(BUILD_TERM_META(_ptTree1))) {
#line 857 "cplus.met"
                                        MulFreeTree(5,_ptRes1,_ptTree1,_ptRes0,_ptTree0,retTree);
                                        TOKEN_EXIT(quick_prog_elem_exit,"IDENT")
#line 857 "cplus.met"
                                    } else {
#line 857 "cplus.met"
                                        tokenAhead = 0 ;
#line 857 "cplus.met"
                                    }
#line 857 "cplus.met"
                                    ReplaceTree(_ptRes1, 1, _ptTree1);
#line 857 "cplus.met"
                                    _ptTree0=_ptRes1;
#line 857 "cplus.met"
                                }
#line 857 "cplus.met"
                                ReplaceTree(_ptRes0, 1, _ptTree0);
#line 857 "cplus.met"
                                retTree=_ptRes0;
#line 857 "cplus.met"
                            }
#line 857 "cplus.met"
#line 858 "cplus.met"
                            AnalyzeMode (retTree );
#line 858 "cplus.met"
#line 859 "cplus.met"
                            {
#line 859 "cplus.met"
                                _retValue = retTree ;
#line 859 "cplus.met"
                                goto quick_prog_elem_ret;
#line 859 "cplus.met"
                                
#line 859 "cplus.met"
                            }
#line 859 "cplus.met"
#line 859 "cplus.met"
                            break;
#line 859 "cplus.met"
#line 861 "cplus.met"
                        case PRAGMA_ENUM_VERT : 
#line 861 "cplus.met"
                            tokenAhead = 0 ;
#line 861 "cplus.met"
                            CommTerm();
#line 861 "cplus.met"
#line 862 "cplus.met"
#line 863 "cplus.met"
                            {
#line 863 "cplus.met"
                                PPTREE _ptTree0=0,_ptRes0=0;
#line 863 "cplus.met"
                                _ptRes0= MakeTree(CONFIG, 1);
#line 863 "cplus.met"
                                {
#line 863 "cplus.met"
                                    PPTREE _ptTree1=0,_ptRes1=0;
#line 863 "cplus.met"
                                    _ptRes1= MakeTree(ENUM_VERT_VALUE, 1);
#line 863 "cplus.met"
                                    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 863 "cplus.met"
                                    if ( ! TERM_OR_META(IDENT,"IDENT") || !(BUILD_TERM_META(_ptTree1))) {
#line 863 "cplus.met"
                                        MulFreeTree(5,_ptRes1,_ptTree1,_ptRes0,_ptTree0,retTree);
                                        TOKEN_EXIT(quick_prog_elem_exit,"IDENT")
#line 863 "cplus.met"
                                    } else {
#line 863 "cplus.met"
                                        tokenAhead = 0 ;
#line 863 "cplus.met"
                                    }
#line 863 "cplus.met"
                                    ReplaceTree(_ptRes1, 1, _ptTree1);
#line 863 "cplus.met"
                                    _ptTree0=_ptRes1;
#line 863 "cplus.met"
                                }
#line 863 "cplus.met"
                                ReplaceTree(_ptRes0, 1, _ptTree0);
#line 863 "cplus.met"
                                retTree=_ptRes0;
#line 863 "cplus.met"
                            }
#line 863 "cplus.met"
#line 864 "cplus.met"
                            AnalyzeEnumVert (retTree );
#line 864 "cplus.met"
#line 865 "cplus.met"
                            {
#line 865 "cplus.met"
                                _retValue = retTree ;
#line 865 "cplus.met"
                                goto quick_prog_elem_ret;
#line 865 "cplus.met"
                                
#line 865 "cplus.met"
                            }
#line 865 "cplus.met"
#line 865 "cplus.met"
                            break;
#line 865 "cplus.met"
#line 867 "cplus.met"
                        case PRAGMA_PARAMETERS_UNDER : 
#line 867 "cplus.met"
                            tokenAhead = 0 ;
#line 867 "cplus.met"
                            CommTerm();
#line 867 "cplus.met"
#line 868 "cplus.met"
#line 869 "cplus.met"
                            {
#line 869 "cplus.met"
                                PPTREE _ptTree0=0,_ptRes0=0;
#line 869 "cplus.met"
                                _ptRes0= MakeTree(CONFIG, 1);
#line 869 "cplus.met"
                                {
#line 869 "cplus.met"
                                    PPTREE _ptTree1=0,_ptRes1=0;
#line 869 "cplus.met"
                                    _ptRes1= MakeTree(ENUM_PARAMETERS_UNDER, 1);
#line 869 "cplus.met"
                                    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 869 "cplus.met"
                                    if ( ! TERM_OR_META(IDENT,"IDENT") || !(BUILD_TERM_META(_ptTree1))) {
#line 869 "cplus.met"
                                        MulFreeTree(5,_ptRes1,_ptTree1,_ptRes0,_ptTree0,retTree);
                                        TOKEN_EXIT(quick_prog_elem_exit,"IDENT")
#line 869 "cplus.met"
                                    } else {
#line 869 "cplus.met"
                                        tokenAhead = 0 ;
#line 869 "cplus.met"
                                    }
#line 869 "cplus.met"
                                    ReplaceTree(_ptRes1, 1, _ptTree1);
#line 869 "cplus.met"
                                    _ptTree0=_ptRes1;
#line 869 "cplus.met"
                                }
#line 869 "cplus.met"
                                ReplaceTree(_ptRes0, 1, _ptTree0);
#line 869 "cplus.met"
                                retTree=_ptRes0;
#line 869 "cplus.met"
                            }
#line 869 "cplus.met"
#line 870 "cplus.met"
                            AnalyzeParameterFunctUnd (retTree );
#line 870 "cplus.met"
#line 871 "cplus.met"
                            {
#line 871 "cplus.met"
                                _retValue = retTree ;
#line 871 "cplus.met"
                                goto quick_prog_elem_ret;
#line 871 "cplus.met"
                                
#line 871 "cplus.met"
                            }
#line 871 "cplus.met"
#line 871 "cplus.met"
                            break;
#line 871 "cplus.met"
#line 873 "cplus.met"
                        case PRAGMA_TAB_DIRECTIVE : 
#line 873 "cplus.met"
                            tokenAhead = 0 ;
#line 873 "cplus.met"
                            CommTerm();
#line 873 "cplus.met"
#line 874 "cplus.met"
#line 875 "cplus.met"
                            {
#line 875 "cplus.met"
                                PPTREE _ptTree0=0,_ptRes0=0;
#line 875 "cplus.met"
                                _ptRes0= MakeTree(CONFIG, 1);
#line 875 "cplus.met"
                                {
#line 875 "cplus.met"
                                    PPTREE _ptTree1=0,_ptRes1=0;
#line 875 "cplus.met"
                                    _ptRes1= MakeTree(TAB_DIRECTIVE, 1);
#line 875 "cplus.met"
                                    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 875 "cplus.met"
                                    if ( ! TERM_OR_META(IDENT,"IDENT") || !(BUILD_TERM_META(_ptTree1))) {
#line 875 "cplus.met"
                                        MulFreeTree(5,_ptRes1,_ptTree1,_ptRes0,_ptTree0,retTree);
                                        TOKEN_EXIT(quick_prog_elem_exit,"IDENT")
#line 875 "cplus.met"
                                    } else {
#line 875 "cplus.met"
                                        tokenAhead = 0 ;
#line 875 "cplus.met"
                                    }
#line 875 "cplus.met"
                                    ReplaceTree(_ptRes1, 1, _ptTree1);
#line 875 "cplus.met"
                                    _ptTree0=_ptRes1;
#line 875 "cplus.met"
                                }
#line 875 "cplus.met"
                                ReplaceTree(_ptRes0, 1, _ptTree0);
#line 875 "cplus.met"
                                retTree=_ptRes0;
#line 875 "cplus.met"
                            }
#line 875 "cplus.met"
#line 876 "cplus.met"
                            AnalyzeTabDirective (retTree );
#line 876 "cplus.met"
#line 877 "cplus.met"
                            {
#line 877 "cplus.met"
                                _retValue = retTree ;
#line 877 "cplus.met"
                                goto quick_prog_elem_ret;
#line 877 "cplus.met"
                                
#line 877 "cplus.met"
                            }
#line 877 "cplus.met"
#line 877 "cplus.met"
                            break;
#line 877 "cplus.met"
#line 879 "cplus.met"
                        case PRAGMA_SPACE_ARROW : 
#line 879 "cplus.met"
                            tokenAhead = 0 ;
#line 879 "cplus.met"
                            CommTerm();
#line 879 "cplus.met"
#line 880 "cplus.met"
#line 881 "cplus.met"
                            {
#line 881 "cplus.met"
                                PPTREE _ptTree0=0,_ptRes0=0;
#line 881 "cplus.met"
                                _ptRes0= MakeTree(CONFIG, 1);
#line 881 "cplus.met"
                                {
#line 881 "cplus.met"
                                    PPTREE _ptTree1=0,_ptRes1=0;
#line 881 "cplus.met"
                                    _ptRes1= MakeTree(SPACE_ARROW, 1);
#line 881 "cplus.met"
                                    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 881 "cplus.met"
                                    if ( ! TERM_OR_META(IDENT,"IDENT") || !(BUILD_TERM_META(_ptTree1))) {
#line 881 "cplus.met"
                                        MulFreeTree(5,_ptRes1,_ptTree1,_ptRes0,_ptTree0,retTree);
                                        TOKEN_EXIT(quick_prog_elem_exit,"IDENT")
#line 881 "cplus.met"
                                    } else {
#line 881 "cplus.met"
                                        tokenAhead = 0 ;
#line 881 "cplus.met"
                                    }
#line 881 "cplus.met"
                                    ReplaceTree(_ptRes1, 1, _ptTree1);
#line 881 "cplus.met"
                                    _ptTree0=_ptRes1;
#line 881 "cplus.met"
                                }
#line 881 "cplus.met"
                                ReplaceTree(_ptRes0, 1, _ptTree0);
#line 881 "cplus.met"
                                retTree=_ptRes0;
#line 881 "cplus.met"
                            }
#line 881 "cplus.met"
#line 882 "cplus.met"
                            AnalyzeSpaceArrow (retTree );
#line 882 "cplus.met"
#line 883 "cplus.met"
                            {
#line 883 "cplus.met"
                                _retValue = retTree ;
#line 883 "cplus.met"
                                goto quick_prog_elem_ret;
#line 883 "cplus.met"
                                
#line 883 "cplus.met"
                            }
#line 883 "cplus.met"
#line 883 "cplus.met"
                            break;
#line 883 "cplus.met"
#line 885 "cplus.met"
                        case PRAGMA_BRACE_ALIGN : 
#line 885 "cplus.met"
                            tokenAhead = 0 ;
#line 885 "cplus.met"
                            CommTerm();
#line 885 "cplus.met"
#line 886 "cplus.met"
#line 887 "cplus.met"
                            {
#line 887 "cplus.met"
                                PPTREE _ptTree0=0,_ptRes0=0;
#line 887 "cplus.met"
                                _ptRes0= MakeTree(CONFIG, 1);
#line 887 "cplus.met"
                                {
#line 887 "cplus.met"
                                    PPTREE _ptTree1=0,_ptRes1=0;
#line 887 "cplus.met"
                                    _ptRes1= MakeTree(BRACE_ALIGN_VALUE, 1);
#line 887 "cplus.met"
                                    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 887 "cplus.met"
                                    if ( ! TERM_OR_META(IDENT,"IDENT") || !(BUILD_TERM_META(_ptTree1))) {
#line 887 "cplus.met"
                                        MulFreeTree(5,_ptRes1,_ptTree1,_ptRes0,_ptTree0,retTree);
                                        TOKEN_EXIT(quick_prog_elem_exit,"IDENT")
#line 887 "cplus.met"
                                    } else {
#line 887 "cplus.met"
                                        tokenAhead = 0 ;
#line 887 "cplus.met"
                                    }
#line 887 "cplus.met"
                                    ReplaceTree(_ptRes1, 1, _ptTree1);
#line 887 "cplus.met"
                                    _ptTree0=_ptRes1;
#line 887 "cplus.met"
                                }
#line 887 "cplus.met"
                                ReplaceTree(_ptRes0, 1, _ptTree0);
#line 887 "cplus.met"
                                retTree=_ptRes0;
#line 887 "cplus.met"
                            }
#line 887 "cplus.met"
#line 888 "cplus.met"
                            AnalyzeBraceAlign (retTree );
#line 888 "cplus.met"
#line 889 "cplus.met"
                            {
#line 889 "cplus.met"
                                _retValue = retTree ;
#line 889 "cplus.met"
                                goto quick_prog_elem_ret;
#line 889 "cplus.met"
                                
#line 889 "cplus.met"
                            }
#line 889 "cplus.met"
#line 889 "cplus.met"
                            break;
#line 889 "cplus.met"
#line 891 "cplus.met"
                        case PRAGMA_SIMPLIFY : 
#line 891 "cplus.met"
                            tokenAhead = 0 ;
#line 891 "cplus.met"
                            CommTerm();
#line 891 "cplus.met"
#line 892 "cplus.met"
#line 893 "cplus.met"
                            {
#line 893 "cplus.met"
                                PPTREE _ptTree0=0,_ptRes0=0;
#line 893 "cplus.met"
                                _ptRes0= MakeTree(SIMPLIFY, 1);
#line 893 "cplus.met"
                                {
#line 893 "cplus.met"
                                    PPTREE _ptTree1=0,_ptRes1=0;
#line 893 "cplus.met"
                                    _ptRes1= MakeTree(SIMPLIFY_VALUE, 1);
#line 893 "cplus.met"
                                    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 893 "cplus.met"
                                    if ( ! TERM_OR_META(IDENT,"IDENT") || !(BUILD_TERM_META(_ptTree1))) {
#line 893 "cplus.met"
                                        MulFreeTree(5,_ptRes1,_ptTree1,_ptRes0,_ptTree0,retTree);
                                        TOKEN_EXIT(quick_prog_elem_exit,"IDENT")
#line 893 "cplus.met"
                                    } else {
#line 893 "cplus.met"
                                        tokenAhead = 0 ;
#line 893 "cplus.met"
                                    }
#line 893 "cplus.met"
                                    ReplaceTree(_ptRes1, 1, _ptTree1);
#line 893 "cplus.met"
                                    _ptTree0=_ptRes1;
#line 893 "cplus.met"
                                }
#line 893 "cplus.met"
                                ReplaceTree(_ptRes0, 1, _ptTree0);
#line 893 "cplus.met"
                                retTree=_ptRes0;
#line 893 "cplus.met"
                            }
#line 893 "cplus.met"
#line 894 "cplus.met"
                            AnalyzeSimplify (retTree );
#line 894 "cplus.met"
#line 895 "cplus.met"
                            {
#line 895 "cplus.met"
                                _retValue = retTree ;
#line 895 "cplus.met"
                                goto quick_prog_elem_ret;
#line 895 "cplus.met"
                                
#line 895 "cplus.met"
                            }
#line 895 "cplus.met"
#line 895 "cplus.met"
                            break;
#line 895 "cplus.met"
#line 897 "cplus.met"
                        case PRAGMA_SINGLE_SWITCH_INDENT : 
#line 897 "cplus.met"
                            tokenAhead = 0 ;
#line 897 "cplus.met"
                            CommTerm();
#line 897 "cplus.met"
#line 898 "cplus.met"
#line 899 "cplus.met"
                            {
#line 899 "cplus.met"
                                PPTREE _ptTree0=0,_ptRes0=0;
#line 899 "cplus.met"
                                _ptRes0= MakeTree(CONFIG, 1);
#line 899 "cplus.met"
                                {
#line 899 "cplus.met"
                                    PPTREE _ptTree1=0,_ptRes1=0;
#line 899 "cplus.met"
                                    _ptRes1= MakeTree(SINGLE_SWITCH_INDENT_VALUE, 1);
#line 899 "cplus.met"
                                    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 899 "cplus.met"
                                    if ( ! TERM_OR_META(IDENT,"IDENT") || !(BUILD_TERM_META(_ptTree1))) {
#line 899 "cplus.met"
                                        MulFreeTree(5,_ptRes1,_ptTree1,_ptRes0,_ptTree0,retTree);
                                        TOKEN_EXIT(quick_prog_elem_exit,"IDENT")
#line 899 "cplus.met"
                                    } else {
#line 899 "cplus.met"
                                        tokenAhead = 0 ;
#line 899 "cplus.met"
                                    }
#line 899 "cplus.met"
                                    ReplaceTree(_ptRes1, 1, _ptTree1);
#line 899 "cplus.met"
                                    _ptTree0=_ptRes1;
#line 899 "cplus.met"
                                }
#line 899 "cplus.met"
                                ReplaceTree(_ptRes0, 1, _ptTree0);
#line 899 "cplus.met"
                                retTree=_ptRes0;
#line 899 "cplus.met"
                            }
#line 899 "cplus.met"
#line 900 "cplus.met"
                            AnalyzeSingleSwitchIndent (retTree );
#line 900 "cplus.met"
#line 901 "cplus.met"
                            {
#line 901 "cplus.met"
                                _retValue = retTree ;
#line 901 "cplus.met"
                                goto quick_prog_elem_ret;
#line 901 "cplus.met"
                                
#line 901 "cplus.met"
                            }
#line 901 "cplus.met"
#line 901 "cplus.met"
                            break;
#line 901 "cplus.met"
#line 903 "cplus.met"
                        case PRAGMA_ASSIGN_ALIGN : 
#line 903 "cplus.met"
                            tokenAhead = 0 ;
#line 903 "cplus.met"
                            CommTerm();
#line 903 "cplus.met"
#line 904 "cplus.met"
#line 905 "cplus.met"
                            {
#line 905 "cplus.met"
                                PPTREE _ptTree0=0,_ptRes0=0;
#line 905 "cplus.met"
                                _ptRes0= MakeTree(CONFIG, 1);
#line 905 "cplus.met"
                                {
#line 905 "cplus.met"
                                    PPTREE _ptTree1=0,_ptRes1=0;
#line 905 "cplus.met"
                                    _ptRes1= MakeTree(ASSIGN_ALIGN, 1);
#line 905 "cplus.met"
                                    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 905 "cplus.met"
                                    if ( ! TERM_OR_META(IDENT,"IDENT") || !(BUILD_TERM_META(_ptTree1))) {
#line 905 "cplus.met"
                                        MulFreeTree(5,_ptRes1,_ptTree1,_ptRes0,_ptTree0,retTree);
                                        TOKEN_EXIT(quick_prog_elem_exit,"IDENT")
#line 905 "cplus.met"
                                    } else {
#line 905 "cplus.met"
                                        tokenAhead = 0 ;
#line 905 "cplus.met"
                                    }
#line 905 "cplus.met"
                                    ReplaceTree(_ptRes1, 1, _ptTree1);
#line 905 "cplus.met"
                                    _ptTree0=_ptRes1;
#line 905 "cplus.met"
                                }
#line 905 "cplus.met"
                                ReplaceTree(_ptRes0, 1, _ptTree0);
#line 905 "cplus.met"
                                retTree=_ptRes0;
#line 905 "cplus.met"
                            }
#line 905 "cplus.met"
#line 906 "cplus.met"
                            AnalyzeAssignAlign (retTree );
#line 906 "cplus.met"
#line 907 "cplus.met"
                            {
#line 907 "cplus.met"
                                _retValue = retTree ;
#line 907 "cplus.met"
                                goto quick_prog_elem_ret;
#line 907 "cplus.met"
                                
#line 907 "cplus.met"
                            }
#line 907 "cplus.met"
#line 907 "cplus.met"
                            break;
#line 907 "cplus.met"
#line 909 "cplus.met"
                        case PRAGMA_DECL_ALIGN : 
#line 909 "cplus.met"
                            tokenAhead = 0 ;
#line 909 "cplus.met"
                            CommTerm();
#line 909 "cplus.met"
#line 910 "cplus.met"
#line 911 "cplus.met"
                            {
#line 911 "cplus.met"
                                PPTREE _ptTree0=0,_ptRes0=0;
#line 911 "cplus.met"
                                _ptRes0= MakeTree(CONFIG, 1);
#line 911 "cplus.met"
                                {
#line 911 "cplus.met"
                                    PPTREE _ptTree1=0,_ptRes1=0;
#line 911 "cplus.met"
                                    _ptRes1= MakeTree(DECL_ALIGN, 1);
#line 911 "cplus.met"
                                    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 911 "cplus.met"
                                    if ( ! TERM_OR_META(IDENT,"IDENT") || !(BUILD_TERM_META(_ptTree1))) {
#line 911 "cplus.met"
                                        MulFreeTree(5,_ptRes1,_ptTree1,_ptRes0,_ptTree0,retTree);
                                        TOKEN_EXIT(quick_prog_elem_exit,"IDENT")
#line 911 "cplus.met"
                                    } else {
#line 911 "cplus.met"
                                        tokenAhead = 0 ;
#line 911 "cplus.met"
                                    }
#line 911 "cplus.met"
                                    ReplaceTree(_ptRes1, 1, _ptTree1);
#line 911 "cplus.met"
                                    _ptTree0=_ptRes1;
#line 911 "cplus.met"
                                }
#line 911 "cplus.met"
                                ReplaceTree(_ptRes0, 1, _ptTree0);
#line 911 "cplus.met"
                                retTree=_ptRes0;
#line 911 "cplus.met"
                            }
#line 911 "cplus.met"
#line 912 "cplus.met"
                            AnalyzeDeclAlign (retTree );
#line 912 "cplus.met"
#line 913 "cplus.met"
                            {
#line 913 "cplus.met"
                                _retValue = retTree ;
#line 913 "cplus.met"
                                goto quick_prog_elem_ret;
#line 913 "cplus.met"
                                
#line 913 "cplus.met"
                            }
#line 913 "cplus.met"
#line 913 "cplus.met"
                            break;
#line 913 "cplus.met"
#line 915 "cplus.met"
                        case PRAGMA_MARGIN : 
#line 915 "cplus.met"
                            tokenAhead = 0 ;
#line 915 "cplus.met"
                            CommTerm();
#line 915 "cplus.met"
#line 916 "cplus.met"
#line 917 "cplus.met"
                            {
#line 917 "cplus.met"
                                PPTREE _ptTree0=0,_ptRes0=0;
#line 917 "cplus.met"
                                _ptRes0= MakeTree(CONFIG, 1);
#line 917 "cplus.met"
                                {
#line 917 "cplus.met"
                                    PPTREE _ptTree1=0,_ptRes1=0;
#line 917 "cplus.met"
                                    _ptRes1= MakeTree(MARGIN_VALUE, 1);
#line 917 "cplus.met"
                                    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 917 "cplus.met"
                                    if ( ! TERM_OR_META(INTEGER,"INTEGER") || !(BUILD_TERM_META(_ptTree1))) {
#line 917 "cplus.met"
                                        MulFreeTree(5,_ptRes1,_ptTree1,_ptRes0,_ptTree0,retTree);
                                        TOKEN_EXIT(quick_prog_elem_exit,"INTEGER")
#line 917 "cplus.met"
                                    } else {
#line 917 "cplus.met"
                                        tokenAhead = 0 ;
#line 917 "cplus.met"
                                    }
#line 917 "cplus.met"
                                    ReplaceTree(_ptRes1, 1, _ptTree1);
#line 917 "cplus.met"
                                    _ptTree0=_ptRes1;
#line 917 "cplus.met"
                                }
#line 917 "cplus.met"
                                ReplaceTree(_ptRes0, 1, _ptTree0);
#line 917 "cplus.met"
                                retTree=_ptRes0;
#line 917 "cplus.met"
                            }
#line 917 "cplus.met"
#line 918 "cplus.met"
                            AnalyzeMargin (retTree );
#line 918 "cplus.met"
#line 919 "cplus.met"
                            {
#line 919 "cplus.met"
                                _retValue = retTree ;
#line 919 "cplus.met"
                                goto quick_prog_elem_ret;
#line 919 "cplus.met"
                                
#line 919 "cplus.met"
                            }
#line 919 "cplus.met"
#line 919 "cplus.met"
                            break;
#line 919 "cplus.met"
#line 921 "cplus.met"
                        case PRAGMA_COMMENT_START : 
#line 921 "cplus.met"
                            tokenAhead = 0 ;
#line 921 "cplus.met"
                            CommTerm();
#line 921 "cplus.met"
#line 922 "cplus.met"
#line 923 "cplus.met"
                            {
#line 923 "cplus.met"
                                PPTREE _ptTree0=0,_ptRes0=0;
#line 923 "cplus.met"
                                _ptRes0= MakeTree(CONFIG, 1);
#line 923 "cplus.met"
                                {
#line 923 "cplus.met"
                                    PPTREE _ptTree1=0,_ptRes1=0;
#line 923 "cplus.met"
                                    _ptRes1= MakeTree(COMMENT_START, 1);
#line 923 "cplus.met"
                                    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 923 "cplus.met"
                                    if ( ! TERM_OR_META(STRING,"STRING") || !(BUILD_TERM_META(_ptTree1))) {
#line 923 "cplus.met"
                                        MulFreeTree(5,_ptRes1,_ptTree1,_ptRes0,_ptTree0,retTree);
                                        TOKEN_EXIT(quick_prog_elem_exit,"STRING")
#line 923 "cplus.met"
                                    } else {
#line 923 "cplus.met"
                                        tokenAhead = 0 ;
#line 923 "cplus.met"
                                    }
#line 923 "cplus.met"
                                    ReplaceTree(_ptRes1, 1, _ptTree1);
#line 923 "cplus.met"
                                    _ptTree0=_ptRes1;
#line 923 "cplus.met"
                                }
#line 923 "cplus.met"
                                ReplaceTree(_ptRes0, 1, _ptTree0);
#line 923 "cplus.met"
                                retTree=_ptRes0;
#line 923 "cplus.met"
                            }
#line 923 "cplus.met"
#line 924 "cplus.met"
                            AnalyzeComment (retTree );
#line 924 "cplus.met"
#line 925 "cplus.met"
                            {
#line 925 "cplus.met"
                                _retValue = retTree ;
#line 925 "cplus.met"
                                goto quick_prog_elem_ret;
#line 925 "cplus.met"
                                
#line 925 "cplus.met"
                            }
#line 925 "cplus.met"
#line 925 "cplus.met"
                            break;
#line 925 "cplus.met"
#line 927 "cplus.met"
                        case PRAGMA_COMMENT_MIDDLE : 
#line 927 "cplus.met"
                            tokenAhead = 0 ;
#line 927 "cplus.met"
                            CommTerm();
#line 927 "cplus.met"
#line 928 "cplus.met"
#line 929 "cplus.met"
                            {
#line 929 "cplus.met"
                                PPTREE _ptTree0=0,_ptRes0=0;
#line 929 "cplus.met"
                                _ptRes0= MakeTree(CONFIG, 1);
#line 929 "cplus.met"
                                {
#line 929 "cplus.met"
                                    PPTREE _ptTree1=0,_ptRes1=0;
#line 929 "cplus.met"
                                    _ptRes1= MakeTree(COMMENT_MIDDLE, 1);
#line 929 "cplus.met"
                                    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 929 "cplus.met"
                                    if ( ! TERM_OR_META(STRING,"STRING") || !(BUILD_TERM_META(_ptTree1))) {
#line 929 "cplus.met"
                                        MulFreeTree(5,_ptRes1,_ptTree1,_ptRes0,_ptTree0,retTree);
                                        TOKEN_EXIT(quick_prog_elem_exit,"STRING")
#line 929 "cplus.met"
                                    } else {
#line 929 "cplus.met"
                                        tokenAhead = 0 ;
#line 929 "cplus.met"
                                    }
#line 929 "cplus.met"
                                    ReplaceTree(_ptRes1, 1, _ptTree1);
#line 929 "cplus.met"
                                    _ptTree0=_ptRes1;
#line 929 "cplus.met"
                                }
#line 929 "cplus.met"
                                ReplaceTree(_ptRes0, 1, _ptTree0);
#line 929 "cplus.met"
                                retTree=_ptRes0;
#line 929 "cplus.met"
                            }
#line 929 "cplus.met"
#line 930 "cplus.met"
                            AnalyzeComment (retTree );
#line 930 "cplus.met"
#line 931 "cplus.met"
                            {
#line 931 "cplus.met"
                                _retValue = retTree ;
#line 931 "cplus.met"
                                goto quick_prog_elem_ret;
#line 931 "cplus.met"
                                
#line 931 "cplus.met"
                            }
#line 931 "cplus.met"
#line 931 "cplus.met"
                            break;
#line 931 "cplus.met"
#line 933 "cplus.met"
                        case PRAGMA_COMMENT_END : 
#line 933 "cplus.met"
                            tokenAhead = 0 ;
#line 933 "cplus.met"
                            CommTerm();
#line 933 "cplus.met"
#line 934 "cplus.met"
#line 935 "cplus.met"
                            {
#line 935 "cplus.met"
                                PPTREE _ptTree0=0,_ptRes0=0;
#line 935 "cplus.met"
                                _ptRes0= MakeTree(CONFIG, 1);
#line 935 "cplus.met"
                                {
#line 935 "cplus.met"
                                    PPTREE _ptTree1=0,_ptRes1=0;
#line 935 "cplus.met"
                                    _ptRes1= MakeTree(COMMENT_END, 1);
#line 935 "cplus.met"
                                    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 935 "cplus.met"
                                    if ( ! TERM_OR_META(STRING,"STRING") || !(BUILD_TERM_META(_ptTree1))) {
#line 935 "cplus.met"
                                        MulFreeTree(5,_ptRes1,_ptTree1,_ptRes0,_ptTree0,retTree);
                                        TOKEN_EXIT(quick_prog_elem_exit,"STRING")
#line 935 "cplus.met"
                                    } else {
#line 935 "cplus.met"
                                        tokenAhead = 0 ;
#line 935 "cplus.met"
                                    }
#line 935 "cplus.met"
                                    ReplaceTree(_ptRes1, 1, _ptTree1);
#line 935 "cplus.met"
                                    _ptTree0=_ptRes1;
#line 935 "cplus.met"
                                }
#line 935 "cplus.met"
                                ReplaceTree(_ptRes0, 1, _ptTree0);
#line 935 "cplus.met"
                                retTree=_ptRes0;
#line 935 "cplus.met"
                            }
#line 935 "cplus.met"
#line 936 "cplus.met"
                            AnalyzeComment (retTree );
#line 936 "cplus.met"
#line 937 "cplus.met"
                            {
#line 937 "cplus.met"
                                _retValue = retTree ;
#line 937 "cplus.met"
                                goto quick_prog_elem_ret;
#line 937 "cplus.met"
                                
#line 937 "cplus.met"
                            }
#line 937 "cplus.met"
#line 937 "cplus.met"
                            break;
#line 937 "cplus.met"
#line 939 "cplus.met"
                        case PRAGMA_COMMENT_PLUS : 
#line 939 "cplus.met"
                            tokenAhead = 0 ;
#line 939 "cplus.met"
                            CommTerm();
#line 939 "cplus.met"
#line 940 "cplus.met"
#line 941 "cplus.met"
                            {
#line 941 "cplus.met"
                                PPTREE _ptTree0=0,_ptRes0=0;
#line 941 "cplus.met"
                                _ptRes0= MakeTree(CONFIG, 1);
#line 941 "cplus.met"
                                {
#line 941 "cplus.met"
                                    PPTREE _ptTree1=0,_ptRes1=0;
#line 941 "cplus.met"
                                    _ptRes1= MakeTree(COMMENT_PLUS, 1);
#line 941 "cplus.met"
                                    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 941 "cplus.met"
                                    if ( ! TERM_OR_META(STRING,"STRING") || !(BUILD_TERM_META(_ptTree1))) {
#line 941 "cplus.met"
                                        MulFreeTree(5,_ptRes1,_ptTree1,_ptRes0,_ptTree0,retTree);
                                        TOKEN_EXIT(quick_prog_elem_exit,"STRING")
#line 941 "cplus.met"
                                    } else {
#line 941 "cplus.met"
                                        tokenAhead = 0 ;
#line 941 "cplus.met"
                                    }
#line 941 "cplus.met"
                                    ReplaceTree(_ptRes1, 1, _ptTree1);
#line 941 "cplus.met"
                                    _ptTree0=_ptRes1;
#line 941 "cplus.met"
                                }
#line 941 "cplus.met"
                                ReplaceTree(_ptRes0, 1, _ptTree0);
#line 941 "cplus.met"
                                retTree=_ptRes0;
#line 941 "cplus.met"
                            }
#line 941 "cplus.met"
#line 942 "cplus.met"
                            AnalyzeComment (retTree );
#line 942 "cplus.met"
#line 943 "cplus.met"
                            {
#line 943 "cplus.met"
                                _retValue = retTree ;
#line 943 "cplus.met"
                                goto quick_prog_elem_ret;
#line 943 "cplus.met"
                                
#line 943 "cplus.met"
                            }
#line 943 "cplus.met"
#line 943 "cplus.met"
                            break;
#line 943 "cplus.met"
#line 945 "cplus.met"
                        case PRAGMA_INDENT_FUNCTION_TYPE : 
#line 945 "cplus.met"
                            tokenAhead = 0 ;
#line 945 "cplus.met"
                            CommTerm();
#line 945 "cplus.met"
#line 946 "cplus.met"
#line 947 "cplus.met"
                            {
#line 947 "cplus.met"
                                PPTREE _ptTree0=0,_ptRes0=0;
#line 947 "cplus.met"
                                _ptRes0= MakeTree(CONFIG, 1);
#line 947 "cplus.met"
                                {
#line 947 "cplus.met"
                                    PPTREE _ptTree1=0,_ptRes1=0;
#line 947 "cplus.met"
                                    _ptRes1= MakeTree(INDENT_FUNCTION_TYPE, 1);
#line 947 "cplus.met"
                                    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 947 "cplus.met"
                                    if ( ! TERM_OR_META(IDENT,"IDENT") || !(BUILD_TERM_META(_ptTree1))) {
#line 947 "cplus.met"
                                        MulFreeTree(5,_ptRes1,_ptTree1,_ptRes0,_ptTree0,retTree);
                                        TOKEN_EXIT(quick_prog_elem_exit,"IDENT")
#line 947 "cplus.met"
                                    } else {
#line 947 "cplus.met"
                                        tokenAhead = 0 ;
#line 947 "cplus.met"
                                    }
#line 947 "cplus.met"
                                    ReplaceTree(_ptRes1, 1, _ptTree1);
#line 947 "cplus.met"
                                    _ptTree0=_ptRes1;
#line 947 "cplus.met"
                                }
#line 947 "cplus.met"
                                ReplaceTree(_ptRes0, 1, _ptTree0);
#line 947 "cplus.met"
                                retTree=_ptRes0;
#line 947 "cplus.met"
                            }
#line 947 "cplus.met"
#line 948 "cplus.met"
                            AnalyzeIndentFunctionType (retTree );
#line 948 "cplus.met"
#line 949 "cplus.met"
                            {
#line 949 "cplus.met"
                                _retValue = retTree ;
#line 949 "cplus.met"
                                goto quick_prog_elem_ret;
#line 949 "cplus.met"
                                
#line 949 "cplus.met"
                            }
#line 949 "cplus.met"
#line 949 "cplus.met"
                            break;
#line 949 "cplus.met"
#line 951 "cplus.met"
                        case PRAGMA_FUNC_HEADER : 
#line 951 "cplus.met"
                            tokenAhead = 0 ;
#line 951 "cplus.met"
                            CommTerm();
#line 951 "cplus.met"
#line 952 "cplus.met"
#line 953 "cplus.met"
                            {
#line 953 "cplus.met"
                                PPTREE _ptTree0=0,_ptRes0=0;
#line 953 "cplus.met"
                                _ptRes0= MakeTree(CONFIG, 1);
#line 953 "cplus.met"
                                {
#line 953 "cplus.met"
                                    PPTREE _ptTree1=0,_ptRes1=0;
#line 953 "cplus.met"
                                    _ptRes1= MakeTree(FUNC_HEADER, 1);
#line 953 "cplus.met"
                                    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 953 "cplus.met"
                                    if ( ! TERM_OR_META(STRING,"STRING") || !(BUILD_TERM_META(_ptTree1))) {
#line 953 "cplus.met"
                                        MulFreeTree(5,_ptRes1,_ptTree1,_ptRes0,_ptTree0,retTree);
                                        TOKEN_EXIT(quick_prog_elem_exit,"STRING")
#line 953 "cplus.met"
                                    } else {
#line 953 "cplus.met"
                                        tokenAhead = 0 ;
#line 953 "cplus.met"
                                    }
#line 953 "cplus.met"
                                    ReplaceTree(_ptRes1, 1, _ptTree1);
#line 953 "cplus.met"
                                    _ptTree0=_ptRes1;
#line 953 "cplus.met"
                                }
#line 953 "cplus.met"
                                ReplaceTree(_ptRes0, 1, _ptTree0);
#line 953 "cplus.met"
                                retTree=_ptRes0;
#line 953 "cplus.met"
                            }
#line 953 "cplus.met"
#line 954 "cplus.met"
                            AnalyzeFuncHeader (retTree );
#line 954 "cplus.met"
#line 955 "cplus.met"
                            {
#line 955 "cplus.met"
                                _retValue = retTree ;
#line 955 "cplus.met"
                                goto quick_prog_elem_ret;
#line 955 "cplus.met"
                                
#line 955 "cplus.met"
                            }
#line 955 "cplus.met"
#line 955 "cplus.met"
                            break;
#line 955 "cplus.met"
#line 957 "cplus.met"
                        case PRAGMA_PARAMETERS : 
#line 957 "cplus.met"
                            tokenAhead = 0 ;
#line 957 "cplus.met"
                            CommTerm();
#line 957 "cplus.met"
#line 958 "cplus.met"
#line 959 "cplus.met"
                            {
#line 959 "cplus.met"
                                PPTREE _ptTree0=0,_ptRes0=0;
#line 959 "cplus.met"
                                _ptRes0= MakeTree(CONFIG, 1);
#line 959 "cplus.met"
                                {
#line 959 "cplus.met"
                                    PPTREE _ptTree1=0,_ptRes1=0;
#line 959 "cplus.met"
                                    _ptRes1= MakeTree(PARAMETERS, 1);
#line 959 "cplus.met"
                                    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 959 "cplus.met"
                                    if ( ! TERM_OR_META(STRING,"STRING") || !(BUILD_TERM_META(_ptTree1))) {
#line 959 "cplus.met"
                                        MulFreeTree(5,_ptRes1,_ptTree1,_ptRes0,_ptTree0,retTree);
                                        TOKEN_EXIT(quick_prog_elem_exit,"STRING")
#line 959 "cplus.met"
                                    } else {
#line 959 "cplus.met"
                                        tokenAhead = 0 ;
#line 959 "cplus.met"
                                    }
#line 959 "cplus.met"
                                    ReplaceTree(_ptRes1, 1, _ptTree1);
#line 959 "cplus.met"
                                    _ptTree0=_ptRes1;
#line 959 "cplus.met"
                                }
#line 959 "cplus.met"
                                ReplaceTree(_ptRes0, 1, _ptTree0);
#line 959 "cplus.met"
                                retTree=_ptRes0;
#line 959 "cplus.met"
                            }
#line 959 "cplus.met"
#line 960 "cplus.met"
                            AnalyzeParameters (retTree );
#line 960 "cplus.met"
#line 961 "cplus.met"
                            {
#line 961 "cplus.met"
                                _retValue = retTree ;
#line 961 "cplus.met"
                                goto quick_prog_elem_ret;
#line 961 "cplus.met"
                                
#line 961 "cplus.met"
                            }
#line 961 "cplus.met"
#line 961 "cplus.met"
                            break;
#line 961 "cplus.met"
#line 963 "cplus.met"
                        default : 
#line 963 "cplus.met"
#line 963 "cplus.met"
                            {
#line 963 "cplus.met"
                                PPTREE _ptTree0=0;
#line 963 "cplus.met"
                                if ( (_ptTree0=NQUICK_CALL(_Tak(other_config)(error_free), 109, cplus))== (PPTREE) -1 ) {
#line 963 "cplus.met"
                                    MulFreeTree(2,_ptTree0,retTree);
                                    PROG_EXIT(quick_prog_elem_exit,"quick_prog_elem")
#line 963 "cplus.met"
                                }
#line 963 "cplus.met"
                                _retValue =_ptTree0;
#line 963 "cplus.met"
                                goto quick_prog_elem_ret;
#line 963 "cplus.met"
                            }
#line 963 "cplus.met"
                            break;
#line 963 "cplus.met"
                    }
#line 963 "cplus.met"
#line 963 "cplus.met"
                    break;
#line 963 "cplus.met"
#line 963 "cplus.met"
                default : 
#line 963 "cplus.met"
#line 963 "cplus.met"
                    break;
#line 963 "cplus.met"
            }
#line 963 "cplus.met"
#line 968 "cplus.met"
            {
#line 968 "cplus.met"
                PPTREE _ptTree0=0;
#line 968 "cplus.met"
                {
#line 968 "cplus.met"
                    PPTREE _ptRes1=0;
#line 968 "cplus.met"
                    _ptRes1= MakeTree(IDENT, 1);
#line 968 "cplus.met"
                    _ptTree0=_ptRes1;
#line 968 "cplus.met"
                }
#line 968 "cplus.met"
                _retValue =_ptTree0;
#line 968 "cplus.met"
                goto quick_prog_elem_ret;
#line 968 "cplus.met"
            }
#line 968 "cplus.met"
#line 968 "cplus.met"
            break;
#line 968 "cplus.met"
#line 970 "cplus.met"
        default : 
#line 970 "cplus.met"
            tokenAhead = 0 ;
#line 970 "cplus.met"
            CommTerm();
#line 970 "cplus.met"
#line 971 "cplus.met"
#line 972 "cplus.met"
            if ((tokenAhead && tokenAhead != -1)|| (c != EOF)){
#line 972 "cplus.met"
#line 973 "cplus.met"
#line 974 "cplus.met"
                (tokenAhead == 5|| (LexEndLine(),TRACE_LEX(1)));
#line 974 "cplus.met"
                if ( ! TERM_OR_META(END_LINE,"END_LINE") || !(CommTerm(),1)) {
#line 974 "cplus.met"
                    MulFreeTree(1,retTree);
                    TOKEN_EXIT(quick_prog_elem_exit,"END_LINE")
#line 974 "cplus.met"
                } else {
#line 974 "cplus.met"
                    tokenAhead = 0 ;
#line 974 "cplus.met"
                }
#line 974 "cplus.met"
#line 975 "cplus.met"
                 goto debut;
#line 975 "cplus.met"
#line 975 "cplus.met"
#line 975 "cplus.met"
            } else {
#line 975 "cplus.met"
#line 978 "cplus.met"
                {
#line 978 "cplus.met"
                    _retValue = retTree ;
#line 978 "cplus.met"
                    goto quick_prog_elem_ret;
#line 978 "cplus.met"
                    
#line 978 "cplus.met"
                }
#line 978 "cplus.met"
            }
#line 978 "cplus.met"
#line 978 "cplus.met"
            break;
#line 978 "cplus.met"
    }
#line 978 "cplus.met"
#line 978 "cplus.met"
#line 980 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 980 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 980 "cplus.met"
return((PPTREE) 0);
#line 980 "cplus.met"

#line 980 "cplus.met"
quick_prog_elem_exit :
#line 980 "cplus.met"

#line 980 "cplus.met"
    _Debug = TRACE_RULE("quick_prog_elem",TRACE_EXIT,(PPTREE)0);
#line 980 "cplus.met"
    _funcLevel--;
#line 980 "cplus.met"
    return((PPTREE) -1) ;
#line 980 "cplus.met"

#line 980 "cplus.met"
quick_prog_elem_ret :
#line 980 "cplus.met"
    
#line 980 "cplus.met"
    _Debug = TRACE_RULE("quick_prog_elem",TRACE_RETURN,_retValue);
#line 980 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 980 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 980 "cplus.met"
    return _retValue ;
#line 980 "cplus.met"
}
#line 980 "cplus.met"

#line 980 "cplus.met"
#line 2217 "cplus.met"
PPTREE cplus::range_in_liste ( int error_free)
#line 2217 "cplus.met"
{
#line 2217 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 2217 "cplus.met"
    int _value,_nbPre = 0 ;
#line 2217 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 2217 "cplus.met"
    int _Debug = TRACE_RULE("range_in_liste",TRACE_ENTER,(PPTREE)0);
#line 2217 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 2217 "cplus.met"
#line 2217 "cplus.met"
    PPTREE retTree = (PPTREE) 0;
#line 2217 "cplus.met"
#line 2219 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 2219 "cplus.met"
    if ( ! TERM_OR_META(IDENT,"IDENT") || !(BUILD_TERM_META(retTree))) {
#line 2219 "cplus.met"
        MulFreeTree(1,retTree);
        TOKEN_EXIT(range_in_liste_exit,"IDENT")
#line 2219 "cplus.met"
    } else {
#line 2219 "cplus.met"
        tokenAhead = 0 ;
#line 2219 "cplus.met"
    }
#line 2219 "cplus.met"
#line 2220 "cplus.met"
    if ( IsRange(lexEl.string())){
#line 2220 "cplus.met"
#line 2221 "cplus.met"
        {
#line 2221 "cplus.met"
            _retValue = retTree ;
#line 2221 "cplus.met"
            goto range_in_liste_ret;
#line 2221 "cplus.met"
            
#line 2221 "cplus.met"
        }
#line 2221 "cplus.met"
    } else {
#line 2221 "cplus.met"
#line 2223 "cplus.met"
        
#line 2223 "cplus.met"
        MulFreeTree(1,retTree);
        LEX_EXIT ("",0);
#line 2223 "cplus.met"
        goto range_in_liste_exit;
#line 2223 "cplus.met"
    }
#line 2223 "cplus.met"
#line 2223 "cplus.met"
#line 2223 "cplus.met"

#line 2224 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2224 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 2224 "cplus.met"
return((PPTREE) 0);
#line 2224 "cplus.met"

#line 2224 "cplus.met"
range_in_liste_exit :
#line 2224 "cplus.met"

#line 2224 "cplus.met"
    _Debug = TRACE_RULE("range_in_liste",TRACE_EXIT,(PPTREE)0);
#line 2224 "cplus.met"
    _funcLevel--;
#line 2224 "cplus.met"
    return((PPTREE) -1) ;
#line 2224 "cplus.met"

#line 2224 "cplus.met"
range_in_liste_ret :
#line 2224 "cplus.met"
    
#line 2224 "cplus.met"
    _Debug = TRACE_RULE("range_in_liste",TRACE_RETURN,_retValue);
#line 2224 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2224 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 2224 "cplus.met"
    return _retValue ;
#line 2224 "cplus.met"
}
#line 2224 "cplus.met"

#line 2224 "cplus.met"
#line 2261 "cplus.met"
PPTREE cplus::range_modifier ( int error_free)
#line 2261 "cplus.met"
{
#line 2261 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 2261 "cplus.met"
    int _value,_nbPre = 0 ;
#line 2261 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 2261 "cplus.met"
    int _Debug = TRACE_RULE("range_modifier",TRACE_ENTER,(PPTREE)0);
#line 2261 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 2261 "cplus.met"
#line 2262 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 2262 "cplus.met"
    switch( lexEl.Value) {
#line 2262 "cplus.met"
#line 2263 "cplus.met"
        case META : 
#line 2263 "cplus.met"
        case IDENT : 
#line 2263 "cplus.met"
#line 2263 "cplus.met"
            {
#line 2263 "cplus.met"
                PPTREE _ptTree0=0;
#line 2263 "cplus.met"
                {
#line 2263 "cplus.met"
                    PPTREE _ptTree1=0,_ptRes1=0;
#line 2263 "cplus.met"
                    _ptRes1= MakeTree(RANGE_MODIFIER, 2);
#line 2263 "cplus.met"
                    if ( (_ptTree1=NQUICK_CALL(_Tak(range_in_liste)(error_free), 125, cplus))== (PPTREE) -1 ) {
#line 2263 "cplus.met"
                        MulFreeTree(3,_ptRes1,_ptTree1,_ptTree0);
                        PROG_EXIT(range_modifier_exit,"range_modifier")
#line 2263 "cplus.met"
                    }
#line 2263 "cplus.met"
                    ReplaceTree(_ptRes1, 1, _ptTree1);
#line 2263 "cplus.met"
                    _ptTree0=_ptRes1;
#line 2263 "cplus.met"
                }
#line 2263 "cplus.met"
                _retValue =_ptTree0;
#line 2263 "cplus.met"
                goto range_modifier_ret;
#line 2263 "cplus.met"
            }
#line 2263 "cplus.met"
            break;
#line 2263 "cplus.met"
#line 2264 "cplus.met"
        case VOLATILE : 
#line 2264 "cplus.met"
#line 2264 "cplus.met"
            {
#line 2264 "cplus.met"
                PPTREE _ptTree0=0;
#line 2264 "cplus.met"
                {
#line 2264 "cplus.met"
                    PPTREE _ptTree1=0,_ptRes1=0;
#line 2264 "cplus.met"
                    _ptRes1= MakeTree(RANGE_MODIFIER, 2);
#line 2264 "cplus.met"
                    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 2264 "cplus.met"
                    if (  !SEE_TOKEN( VOLATILE,"volatile") || !(_ptTree1 = CommString(lexEl.string()))) {
#line 2264 "cplus.met"
                        MulFreeTree(3,_ptRes1,_ptTree1,_ptTree0);
                        TOKEN_EXIT(range_modifier_exit,"volatile")
#line 2264 "cplus.met"
                    } else {
#line 2264 "cplus.met"
                        tokenAhead = 0 ;
#line 2264 "cplus.met"
                    }
#line 2264 "cplus.met"
                    ReplaceTree(_ptRes1, 1, _ptTree1);
#line 2264 "cplus.met"
                    _ptTree0=_ptRes1;
#line 2264 "cplus.met"
                }
#line 2264 "cplus.met"
                _retValue =_ptTree0;
#line 2264 "cplus.met"
                goto range_modifier_ret;
#line 2264 "cplus.met"
            }
#line 2264 "cplus.met"
            break;
#line 2264 "cplus.met"
#line 2265 "cplus.met"
        case REGISTER : 
#line 2265 "cplus.met"
#line 2265 "cplus.met"
            {
#line 2265 "cplus.met"
                PPTREE _ptTree0=0;
#line 2265 "cplus.met"
                {
#line 2265 "cplus.met"
                    PPTREE _ptTree1=0,_ptRes1=0;
#line 2265 "cplus.met"
                    _ptRes1= MakeTree(RANGE_MODIFIER, 2);
#line 2265 "cplus.met"
                    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 2265 "cplus.met"
                    if (  !SEE_TOKEN( REGISTER,"register") || !(_ptTree1 = CommString(lexEl.string()))) {
#line 2265 "cplus.met"
                        MulFreeTree(3,_ptRes1,_ptTree1,_ptTree0);
                        TOKEN_EXIT(range_modifier_exit,"register")
#line 2265 "cplus.met"
                    } else {
#line 2265 "cplus.met"
                        tokenAhead = 0 ;
#line 2265 "cplus.met"
                    }
#line 2265 "cplus.met"
                    ReplaceTree(_ptRes1, 1, _ptTree1);
#line 2265 "cplus.met"
                    _ptTree0=_ptRes1;
#line 2265 "cplus.met"
                }
#line 2265 "cplus.met"
                _retValue =_ptTree0;
#line 2265 "cplus.met"
                goto range_modifier_ret;
#line 2265 "cplus.met"
            }
#line 2265 "cplus.met"
            break;
#line 2265 "cplus.met"
#line 2266 "cplus.met"
        case __ATTRIBUTE__ : 
#line 2266 "cplus.met"
#line 2267 "cplus.met"
#line 2268 "cplus.met"
            {
#line 2268 "cplus.met"
                PPTREE _ptTree0=0;
#line 2268 "cplus.met"
                {
#line 2268 "cplus.met"
                    PPTREE _ptTree1=0,_ptRes1=0;
#line 2268 "cplus.met"
                    _ptRes1= MakeTree(RANGE_MODIFIER, 2);
#line 2268 "cplus.met"
                    if ( (_ptTree1=NQUICK_CALL(_Tak(attribute_call)(error_free), 21, cplus))== (PPTREE) -1 ) {
#line 2268 "cplus.met"
                        MulFreeTree(3,_ptRes1,_ptTree1,_ptTree0);
                        PROG_EXIT(range_modifier_exit,"range_modifier")
#line 2268 "cplus.met"
                    }
#line 2268 "cplus.met"
                    ReplaceTree(_ptRes1, 1, _ptTree1);
#line 2268 "cplus.met"
                    _ptTree0=_ptRes1;
#line 2268 "cplus.met"
                }
#line 2268 "cplus.met"
                _retValue =_ptTree0;
#line 2268 "cplus.met"
                goto range_modifier_ret;
#line 2268 "cplus.met"
            }
#line 2268 "cplus.met"
#line 2268 "cplus.met"
            break;
#line 2268 "cplus.met"
#line 2270 "cplus.met"
        case __ASM__ : 
#line 2270 "cplus.met"
#line 2271 "cplus.met"
#line 2272 "cplus.met"
            {
#line 2272 "cplus.met"
                PPTREE _ptTree0=0;
#line 2272 "cplus.met"
                {
#line 2272 "cplus.met"
                    PPTREE _ptTree1=0,_ptRes1=0;
#line 2272 "cplus.met"
                    _ptRes1= MakeTree(RANGE_MODIFIER, 2);
#line 2272 "cplus.met"
                    if ( (_ptTree1=NQUICK_CALL(_Tak(asm_call)(error_free), 17, cplus))== (PPTREE) -1 ) {
#line 2272 "cplus.met"
                        MulFreeTree(3,_ptRes1,_ptTree1,_ptTree0);
                        PROG_EXIT(range_modifier_exit,"range_modifier")
#line 2272 "cplus.met"
                    }
#line 2272 "cplus.met"
                    ReplaceTree(_ptRes1, 1, _ptTree1);
#line 2272 "cplus.met"
                    _ptTree0=_ptRes1;
#line 2272 "cplus.met"
                }
#line 2272 "cplus.met"
                _retValue =_ptTree0;
#line 2272 "cplus.met"
                goto range_modifier_ret;
#line 2272 "cplus.met"
            }
#line 2272 "cplus.met"
#line 2272 "cplus.met"
            break;
#line 2272 "cplus.met"
#line 2274 "cplus.met"
        default : 
#line 2274 "cplus.met"
#line 2274 "cplus.met"
            {
#line 2274 "cplus.met"
                PPTREE _ptTree0=0;
#line 2274 "cplus.met"
                if ( (_ptTree0=NQUICK_CALL(_Tak(range_modifier_function)(error_free), 127, cplus))== (PPTREE) -1 ) {
#line 2274 "cplus.met"
                    MulFreeTree(1,_ptTree0);
                    PROG_EXIT(range_modifier_exit,"range_modifier")
#line 2274 "cplus.met"
                }
#line 2274 "cplus.met"
                _retValue =_ptTree0;
#line 2274 "cplus.met"
                goto range_modifier_ret;
#line 2274 "cplus.met"
            }
#line 2274 "cplus.met"
            break;
#line 2274 "cplus.met"
    }
#line 2274 "cplus.met"
#line 2274 "cplus.met"
#line 2275 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2275 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 2275 "cplus.met"
return((PPTREE) 0);
#line 2275 "cplus.met"

#line 2275 "cplus.met"
range_modifier_exit :
#line 2275 "cplus.met"

#line 2275 "cplus.met"
    _Debug = TRACE_RULE("range_modifier",TRACE_EXIT,(PPTREE)0);
#line 2275 "cplus.met"
    _funcLevel--;
#line 2275 "cplus.met"
    return((PPTREE) -1) ;
#line 2275 "cplus.met"

#line 2275 "cplus.met"
range_modifier_ret :
#line 2275 "cplus.met"
    
#line 2275 "cplus.met"
    _Debug = TRACE_RULE("range_modifier",TRACE_RETURN,_retValue);
#line 2275 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2275 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 2275 "cplus.met"
    return _retValue ;
#line 2275 "cplus.met"
}
#line 2275 "cplus.met"

#line 2275 "cplus.met"
#line 2233 "cplus.met"
PPTREE cplus::range_modifier_function ( int error_free)
#line 2233 "cplus.met"
{
#line 2233 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 2233 "cplus.met"
    int _value,_nbPre = 0 ;
#line 2233 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 2233 "cplus.met"
    int _Debug = TRACE_RULE("range_modifier_function",TRACE_ENTER,(PPTREE)0);
#line 2233 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 2233 "cplus.met"
#line 2234 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 2234 "cplus.met"
    switch( lexEl.Value) {
#line 2234 "cplus.met"
#line 2235 "cplus.met"
        case INLINE : 
#line 2235 "cplus.met"
#line 2235 "cplus.met"
            {
#line 2235 "cplus.met"
                PPTREE _ptTree0=0;
#line 2235 "cplus.met"
                {
#line 2235 "cplus.met"
                    PPTREE _ptTree1=0,_ptRes1=0;
#line 2235 "cplus.met"
                    _ptRes1= MakeTree(RANGE_MODIFIER, 2);
#line 2235 "cplus.met"
                    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 2235 "cplus.met"
                    if (  !SEE_TOKEN( INLINE,"inline") || !(_ptTree1 = CommString(lexEl.string()))) {
#line 2235 "cplus.met"
                        MulFreeTree(3,_ptRes1,_ptTree1,_ptTree0);
                        TOKEN_EXIT(range_modifier_function_exit,"inline")
#line 2235 "cplus.met"
                    } else {
#line 2235 "cplus.met"
                        tokenAhead = 0 ;
#line 2235 "cplus.met"
                    }
#line 2235 "cplus.met"
                    ReplaceTree(_ptRes1, 1, _ptTree1);
#line 2235 "cplus.met"
                    _ptTree0=_ptRes1;
#line 2235 "cplus.met"
                }
#line 2235 "cplus.met"
                _retValue =_ptTree0;
#line 2235 "cplus.met"
                goto range_modifier_function_ret;
#line 2235 "cplus.met"
            }
#line 2235 "cplus.met"
            break;
#line 2235 "cplus.met"
#line 2236 "cplus.met"
        case VIRTUAL : 
#line 2236 "cplus.met"
#line 2236 "cplus.met"
            {
#line 2236 "cplus.met"
                PPTREE _ptTree0=0;
#line 2236 "cplus.met"
                {
#line 2236 "cplus.met"
                    PPTREE _ptTree1=0,_ptRes1=0;
#line 2236 "cplus.met"
                    _ptRes1= MakeTree(RANGE_MODIFIER, 2);
#line 2236 "cplus.met"
                    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 2236 "cplus.met"
                    if (  !SEE_TOKEN( VIRTUAL,"virtual") || !(_ptTree1 = CommString(lexEl.string()))) {
#line 2236 "cplus.met"
                        MulFreeTree(3,_ptRes1,_ptTree1,_ptTree0);
                        TOKEN_EXIT(range_modifier_function_exit,"virtual")
#line 2236 "cplus.met"
                    } else {
#line 2236 "cplus.met"
                        tokenAhead = 0 ;
#line 2236 "cplus.met"
                    }
#line 2236 "cplus.met"
                    ReplaceTree(_ptRes1, 1, _ptTree1);
#line 2236 "cplus.met"
                    _ptTree0=_ptRes1;
#line 2236 "cplus.met"
                }
#line 2236 "cplus.met"
                _retValue =_ptTree0;
#line 2236 "cplus.met"
                goto range_modifier_function_ret;
#line 2236 "cplus.met"
            }
#line 2236 "cplus.met"
            break;
#line 2236 "cplus.met"
#line 2237 "cplus.met"
        case FRIEND : 
#line 2237 "cplus.met"
#line 2237 "cplus.met"
            {
#line 2237 "cplus.met"
                PPTREE _ptTree0=0;
#line 2237 "cplus.met"
                {
#line 2237 "cplus.met"
                    PPTREE _ptTree1=0,_ptRes1=0;
#line 2237 "cplus.met"
                    _ptRes1= MakeTree(RANGE_MODIFIER, 2);
#line 2237 "cplus.met"
                    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 2237 "cplus.met"
                    if (  !SEE_TOKEN( FRIEND,"friend") || !(_ptTree1 = CommString(lexEl.string()))) {
#line 2237 "cplus.met"
                        MulFreeTree(3,_ptRes1,_ptTree1,_ptTree0);
                        TOKEN_EXIT(range_modifier_function_exit,"friend")
#line 2237 "cplus.met"
                    } else {
#line 2237 "cplus.met"
                        tokenAhead = 0 ;
#line 2237 "cplus.met"
                    }
#line 2237 "cplus.met"
                    ReplaceTree(_ptRes1, 1, _ptTree1);
#line 2237 "cplus.met"
                    _ptTree0=_ptRes1;
#line 2237 "cplus.met"
                }
#line 2237 "cplus.met"
                _retValue =_ptTree0;
#line 2237 "cplus.met"
                goto range_modifier_function_ret;
#line 2237 "cplus.met"
            }
#line 2237 "cplus.met"
            break;
#line 2237 "cplus.met"
#line 2238 "cplus.met"
        case CONST : 
#line 2238 "cplus.met"
#line 2238 "cplus.met"
            {
#line 2238 "cplus.met"
                PPTREE _ptTree0=0;
#line 2238 "cplus.met"
                {
#line 2238 "cplus.met"
                    PPTREE _ptTree1=0,_ptRes1=0;
#line 2238 "cplus.met"
                    _ptRes1= MakeTree(RANGE_MODIFIER, 2);
#line 2238 "cplus.met"
                    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 2238 "cplus.met"
                    if (  !SEE_TOKEN( CONST,"const") || !(_ptTree1 = CommString(lexEl.string()))) {
#line 2238 "cplus.met"
                        MulFreeTree(3,_ptRes1,_ptTree1,_ptTree0);
                        TOKEN_EXIT(range_modifier_function_exit,"const")
#line 2238 "cplus.met"
                    } else {
#line 2238 "cplus.met"
                        tokenAhead = 0 ;
#line 2238 "cplus.met"
                    }
#line 2238 "cplus.met"
                    ReplaceTree(_ptRes1, 1, _ptTree1);
#line 2238 "cplus.met"
                    _ptTree0=_ptRes1;
#line 2238 "cplus.met"
                }
#line 2238 "cplus.met"
                _retValue =_ptTree0;
#line 2238 "cplus.met"
                goto range_modifier_function_ret;
#line 2238 "cplus.met"
            }
#line 2238 "cplus.met"
            break;
#line 2238 "cplus.met"
#line 2239 "cplus.met"
        case CONSTEXPR : 
#line 2239 "cplus.met"
#line 2239 "cplus.met"
            {
#line 2239 "cplus.met"
                PPTREE _ptTree0=0;
#line 2239 "cplus.met"
                {
#line 2239 "cplus.met"
                    PPTREE _ptTree1=0,_ptRes1=0;
#line 2239 "cplus.met"
                    _ptRes1= MakeTree(RANGE_MODIFIER, 2);
#line 2239 "cplus.met"
                    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 2239 "cplus.met"
                    if (  !SEE_TOKEN( CONSTEXPR,"constexpr") || !(_ptTree1 = CommString(lexEl.string()))) {
#line 2239 "cplus.met"
                        MulFreeTree(3,_ptRes1,_ptTree1,_ptTree0);
                        TOKEN_EXIT(range_modifier_function_exit,"constexpr")
#line 2239 "cplus.met"
                    } else {
#line 2239 "cplus.met"
                        tokenAhead = 0 ;
#line 2239 "cplus.met"
                    }
#line 2239 "cplus.met"
                    ReplaceTree(_ptRes1, 1, _ptTree1);
#line 2239 "cplus.met"
                    _ptTree0=_ptRes1;
#line 2239 "cplus.met"
                }
#line 2239 "cplus.met"
                _retValue =_ptTree0;
#line 2239 "cplus.met"
                goto range_modifier_function_ret;
#line 2239 "cplus.met"
            }
#line 2239 "cplus.met"
            break;
#line 2239 "cplus.met"
        default :
#line 2239 "cplus.met"
            CASE_EXIT(range_modifier_function_exit,"either inline or virtual or friend or const or constexpr")
#line 2239 "cplus.met"
            break;
#line 2239 "cplus.met"
    }
#line 2239 "cplus.met"
#line 2239 "cplus.met"
#line 2240 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2240 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 2240 "cplus.met"
return((PPTREE) 0);
#line 2240 "cplus.met"

#line 2240 "cplus.met"
range_modifier_function_exit :
#line 2240 "cplus.met"

#line 2240 "cplus.met"
    _Debug = TRACE_RULE("range_modifier_function",TRACE_EXIT,(PPTREE)0);
#line 2240 "cplus.met"
    _funcLevel--;
#line 2240 "cplus.met"
    return((PPTREE) -1) ;
#line 2240 "cplus.met"

#line 2240 "cplus.met"
range_modifier_function_ret :
#line 2240 "cplus.met"
    
#line 2240 "cplus.met"
    _Debug = TRACE_RULE("range_modifier_function",TRACE_RETURN,_retValue);
#line 2240 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2240 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 2240 "cplus.met"
    return _retValue ;
#line 2240 "cplus.met"
}
#line 2240 "cplus.met"

#line 2240 "cplus.met"
#line 2080 "cplus.met"
PPTREE cplus::range_modifier_ident ( int error_free)
#line 2080 "cplus.met"
{
#line 2080 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 2080 "cplus.met"
    int _value,_nbPre = 0 ;
#line 2080 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 2080 "cplus.met"
    int _Debug = TRACE_RULE("range_modifier_ident",TRACE_ENTER,(PPTREE)0);
#line 2080 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 2080 "cplus.met"
#line 2080 "cplus.met"
    PPTREE retTree = (PPTREE) 0,completeName = (PPTREE) 0;
#line 2080 "cplus.met"
#line 2082 "cplus.met"
    if (NPUSH_CALL_AFF_VERIF(retTree = ,_Tak(range_modifier), 126, cplus)){
#line 2082 "cplus.met"
#line 2083 "cplus.met"
        {
#line 2083 "cplus.met"
            PPTREE _ptTree0=0;
#line 2083 "cplus.met"
            {
#line 2083 "cplus.met"
                PPTREE _ptTree1=0;
#line 2083 "cplus.met"
                if ( (_ptTree1=NQUICK_CALL(_Tak(range_modifier_ident)(error_free), 128, cplus))== (PPTREE) -1 ) {
#line 2083 "cplus.met"
                    MulFreeTree(4,_ptTree1,_ptTree0,completeName,retTree);
                    PROG_EXIT(range_modifier_ident_exit,"range_modifier_ident")
#line 2083 "cplus.met"
                }
#line 2083 "cplus.met"
                _ptTree0=ReplaceTree(retTree , 2 , _ptTree1);
#line 2083 "cplus.met"
            }
#line 2083 "cplus.met"
            _retValue =_ptTree0;
#line 2083 "cplus.met"
            goto range_modifier_ident_ret;
#line 2083 "cplus.met"
        }
#line 2083 "cplus.met"
    } else {
#line 2083 "cplus.met"
#line 2085 "cplus.met"
#line 2086 "cplus.met"
        if (NPUSH_CALL_AFF_VERIF(completeName = ,_Tak(complete_class_name), 31, cplus)){
#line 2086 "cplus.met"
#line 2087 "cplus.met"
            {
#line 2087 "cplus.met"
                _retValue = completeName ;
#line 2087 "cplus.met"
                goto range_modifier_ident_ret;
#line 2087 "cplus.met"
                
#line 2087 "cplus.met"
            }
#line 2087 "cplus.met"
        }
#line 2087 "cplus.met"
#line 2087 "cplus.met"
    }
#line 2087 "cplus.met"
#line 2087 "cplus.met"
#line 2088 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2088 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 2088 "cplus.met"
return((PPTREE) 0);
#line 2088 "cplus.met"

#line 2088 "cplus.met"
range_modifier_ident_exit :
#line 2088 "cplus.met"

#line 2088 "cplus.met"
    _Debug = TRACE_RULE("range_modifier_ident",TRACE_EXIT,(PPTREE)0);
#line 2088 "cplus.met"
    _funcLevel--;
#line 2088 "cplus.met"
    return((PPTREE) -1) ;
#line 2088 "cplus.met"

#line 2088 "cplus.met"
range_modifier_ident_ret :
#line 2088 "cplus.met"
    
#line 2088 "cplus.met"
    _Debug = TRACE_RULE("range_modifier_ident",TRACE_RETURN,_retValue);
#line 2088 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2088 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 2088 "cplus.met"
    return _retValue ;
#line 2088 "cplus.met"
}
#line 2088 "cplus.met"

#line 2088 "cplus.met"
#line 816 "cplus.met"
PPTREE cplus::range_pragma ( int error_free)
#line 816 "cplus.met"
{
#line 816 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 816 "cplus.met"
    int _value,_nbPre = 0 ;
#line 816 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 816 "cplus.met"
    int _Debug = TRACE_RULE("range_pragma",TRACE_ENTER,(PPTREE)0);
#line 816 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 816 "cplus.met"
#line 817 "cplus.met"
    (tokenAhead == 8|| (LexPragma(),TRACE_LEX(1)));
#line 817 "cplus.met"
    if ( ! TERM_OR_META(PRAGMA_RANGE,"PRAGMA_RANGE") || !(CommTerm(),1)) {
#line 817 "cplus.met"
            TOKEN_EXIT(range_pragma_exit,"PRAGMA_RANGE")
#line 817 "cplus.met"
    } else {
#line 817 "cplus.met"
        tokenAhead = 0 ;
#line 817 "cplus.met"
    }
#line 817 "cplus.met"
#line 818 "cplus.met"
    (tokenAhead == 9|| (LexPragmaSmall(),TRACE_LEX(1)));
#line 818 "cplus.met"
    if ( ! TERM_OR_META(SMALL_PRAGMA_CONTENT,"SMALL_PRAGMA_CONTENT") || !(CommTerm(),1)) {
#line 818 "cplus.met"
            TOKEN_EXIT(range_pragma_exit,"SMALL_PRAGMA_CONTENT")
#line 818 "cplus.met"
    } else {
#line 818 "cplus.met"
        tokenAhead = 0 ;
#line 818 "cplus.met"
    }
#line 818 "cplus.met"
#line 819 "cplus.met"
     AnalyseRange(lexEl.string());
#line 819 "cplus.met"
#line 819 "cplus.met"
#line 819 "cplus.met"

#line 820 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 820 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 820 "cplus.met"
return((PPTREE) 0);
#line 820 "cplus.met"

#line 820 "cplus.met"
range_pragma_exit :
#line 820 "cplus.met"

#line 820 "cplus.met"
    _Debug = TRACE_RULE("range_pragma",TRACE_EXIT,(PPTREE)0);
#line 820 "cplus.met"
    _funcLevel--;
#line 820 "cplus.met"
    return((PPTREE) -1) ;
#line 820 "cplus.met"

#line 820 "cplus.met"
range_pragma_ret :
#line 820 "cplus.met"
    
#line 820 "cplus.met"
    _Debug = TRACE_RULE("range_pragma",TRACE_RETURN,_retValue);
#line 820 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 820 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 820 "cplus.met"
    return _retValue ;
#line 820 "cplus.met"
}
#line 820 "cplus.met"

#line 820 "cplus.met"
