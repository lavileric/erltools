/*************************************************************************/
/*                                                                       */
/*        Produced by MetaGen version 2.0  -    1989-2006                 */
/*       Syntaxic Analyzer Meta Generator developped by                  */
/*                  Eric Lavillonniere                                   */
/*                                                                       */
/*************************************************************************/

#include "token.h"
#include "cplus.h"


#line 2292 "cplus.met"
PPTREE cplus::ptr_operator ( int error_free)
#line 2292 "cplus.met"
{
#line 2292 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 2292 "cplus.met"
    int _value,_nbPre = 0 ;
#line 2292 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 2292 "cplus.met"
    int _Debug = TRACE_RULE("ptr_operator",TRACE_ENTER,(PPTREE)0);
#line 2292 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 2292 "cplus.met"
#line 2292 "cplus.met"
    PPTREE retTree = (PPTREE) 0,valTree = (PPTREE) 0,retour = (PPTREE) 0;
#line 2292 "cplus.met"
#line 2294 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 2294 "cplus.met"
    switch( lexEl.Value) {
#line 2294 "cplus.met"
#line 2297 "cplus.met"
        case ETOI : 
#line 2297 "cplus.met"
            tokenAhead = 0 ;
#line 2297 "cplus.met"
            CommTerm();
#line 2297 "cplus.met"
#line 2296 "cplus.met"
#line 2297 "cplus.met"
            {
#line 2297 "cplus.met"
                PPTREE _ptRes0=0;
#line 2297 "cplus.met"
                _ptRes0= MakeTree(TYP_ADDR, 1);
#line 2297 "cplus.met"
                retTree=_ptRes0;
#line 2297 "cplus.met"
            }
#line 2297 "cplus.met"
#line 2298 "cplus.met"
            if (NPUSH_CALL_AFF_VERIF(valTree = ,_Tak(const_or_volatile), 35, cplus)){
#line 2298 "cplus.met"
#line 2299 "cplus.met"
                ReplaceTree(retTree ,1 ,valTree );
#line 2299 "cplus.met"
#line 2299 "cplus.met"
            }
#line 2299 "cplus.met"
#line 2300 "cplus.met"
            {
#line 2300 "cplus.met"
                _retValue = retTree ;
#line 2300 "cplus.met"
                goto ptr_operator_ret;
#line 2300 "cplus.met"
                
#line 2300 "cplus.met"
            }
#line 2300 "cplus.met"
#line 2300 "cplus.met"
            break;
#line 2300 "cplus.met"
#line 2304 "cplus.met"
        case ETCO : 
#line 2304 "cplus.met"
            tokenAhead = 0 ;
#line 2304 "cplus.met"
            CommTerm();
#line 2304 "cplus.met"
#line 2303 "cplus.met"
#line 2304 "cplus.met"
            {
#line 2304 "cplus.met"
                PPTREE _ptRes0=0;
#line 2304 "cplus.met"
                _ptRes0= MakeTree(TYP_REF, 1);
#line 2304 "cplus.met"
                retTree=_ptRes0;
#line 2304 "cplus.met"
            }
#line 2304 "cplus.met"
#line 2305 "cplus.met"
            if (NPUSH_CALL_AFF_VERIF(valTree = ,_Tak(const_or_volatile), 35, cplus)){
#line 2305 "cplus.met"
#line 2306 "cplus.met"
                ReplaceTree(retTree ,1 ,valTree );
#line 2306 "cplus.met"
#line 2306 "cplus.met"
            }
#line 2306 "cplus.met"
#line 2307 "cplus.met"
            {
#line 2307 "cplus.met"
                _retValue = retTree ;
#line 2307 "cplus.met"
                goto ptr_operator_ret;
#line 2307 "cplus.met"
                
#line 2307 "cplus.met"
            }
#line 2307 "cplus.met"
#line 2307 "cplus.met"
            break;
#line 2307 "cplus.met"
#line 2311 "cplus.met"
        case DPOIDPOI : 
#line 2311 "cplus.met"
#line 2310 "cplus.met"
#line 2311 "cplus.met"
            if ( (retour=NQUICK_CALL(_Tak(member_declarator)(error_free), 100, cplus))== (PPTREE) -1 ) {
#line 2311 "cplus.met"
                MulFreeTree(3,retTree,retour,valTree);
                PROG_EXIT(ptr_operator_exit,"ptr_operator")
#line 2311 "cplus.met"
            }
#line 2311 "cplus.met"
#line 2311 "cplus.met"
            break;
#line 2311 "cplus.met"
#line 2313 "cplus.met"
        case META : 
#line 2313 "cplus.met"
        case IDENT : 
#line 2313 "cplus.met"
#line 2314 "cplus.met"
#line 2315 "cplus.met"
            if ( (retour=NQUICK_CALL(_Tak(member_declarator)(error_free), 100, cplus))== (PPTREE) -1 ) {
#line 2315 "cplus.met"
                MulFreeTree(3,retTree,retour,valTree);
                PROG_EXIT(ptr_operator_exit,"ptr_operator")
#line 2315 "cplus.met"
            }
#line 2315 "cplus.met"
#line 2315 "cplus.met"
            break;
#line 2315 "cplus.met"
        default :
#line 2315 "cplus.met"
            MulFreeTree(3,retTree,retour,valTree);
            CASE_EXIT(ptr_operator_exit,"either * or & or :: or IDENT")
#line 2315 "cplus.met"
            break;
#line 2315 "cplus.met"
    }
#line 2315 "cplus.met"
#line 2318 "cplus.met"
    if (NPUSH_CALL_AFF_VERIF(valTree = ,_Tak(const_or_volatile), 35, cplus)){
#line 2318 "cplus.met"
#line 2319 "cplus.met"
        ReplaceTree(retour ,2 ,valTree );
#line 2319 "cplus.met"
#line 2319 "cplus.met"
    }
#line 2319 "cplus.met"
#line 2320 "cplus.met"
    {
#line 2320 "cplus.met"
        _retValue = retour ;
#line 2320 "cplus.met"
        goto ptr_operator_ret;
#line 2320 "cplus.met"
        
#line 2320 "cplus.met"
    }
#line 2320 "cplus.met"
#line 2320 "cplus.met"
#line 2320 "cplus.met"

#line 2321 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2321 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 2321 "cplus.met"
return((PPTREE) 0);
#line 2321 "cplus.met"

#line 2321 "cplus.met"
ptr_operator_exit :
#line 2321 "cplus.met"

#line 2321 "cplus.met"
    _Debug = TRACE_RULE("ptr_operator",TRACE_EXIT,(PPTREE)0);
#line 2321 "cplus.met"
    _funcLevel--;
#line 2321 "cplus.met"
    return((PPTREE) -1) ;
#line 2321 "cplus.met"

#line 2321 "cplus.met"
ptr_operator_ret :
#line 2321 "cplus.met"
    
#line 2321 "cplus.met"
    _Debug = TRACE_RULE("ptr_operator",TRACE_RETURN,_retValue);
#line 2321 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2321 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 2321 "cplus.met"
    return _retValue ;
#line 2321 "cplus.met"
}
#line 2321 "cplus.met"

#line 2321 "cplus.met"
#line 1902 "cplus.met"
PPTREE cplus::qualified_name ( int error_free)
#line 1902 "cplus.met"
{
#line 1902 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 1902 "cplus.met"
    int _value,_nbPre = 0 ;
#line 1902 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 1902 "cplus.met"
    int _Debug = TRACE_RULE("qualified_name",TRACE_ENTER,(PPTREE)0);
#line 1902 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 1902 "cplus.met"
#line 1902 "cplus.met"
    PPTREE retTree = (PPTREE) 0,inter = (PPTREE) 0,val = (PPTREE) 0,templateVal = (PPTREE) 0;
#line 1902 "cplus.met"
#line 1904 "cplus.met"
    if ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN(TILD,"~") && (tokenAhead = 0,CommTerm(),1)){
#line 1904 "cplus.met"
#line 1905 "cplus.met"
        {
#line 1905 "cplus.met"
            PPTREE _ptTree0=0,_ptRes0=0;
#line 1905 "cplus.met"
            _ptRes0= MakeTree(DESTRUCT, 1);
#line 1905 "cplus.met"
            {
#line 1905 "cplus.met"
                PPTREE _ptTree1=0,_ptRes1=0;
#line 1905 "cplus.met"
                _ptRes1= MakeTree(IDENT, 1);
#line 1905 "cplus.met"
                (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 1905 "cplus.met"
                if ( ! TERM_OR_META(IDENT,"IDENT") || !(BUILD_TERM_META(_ptTree1))) {
#line 1905 "cplus.met"
                    MulFreeTree(8,_ptRes1,_ptTree1,_ptRes0,_ptTree0,inter,retTree,templateVal,val);
                    TOKEN_EXIT(qualified_name_exit,"IDENT")
#line 1905 "cplus.met"
                } else {
#line 1905 "cplus.met"
                    tokenAhead = 0 ;
#line 1905 "cplus.met"
                }
#line 1905 "cplus.met"
                ReplaceTree(_ptRes1, 1, _ptTree1);
#line 1905 "cplus.met"
                _ptTree0=_ptRes1;
#line 1905 "cplus.met"
            }
#line 1905 "cplus.met"
            ReplaceTree(_ptRes0, 1, _ptTree0);
#line 1905 "cplus.met"
            retTree=_ptRes0;
#line 1905 "cplus.met"
        }
#line 1905 "cplus.met"
    } else {
#line 1905 "cplus.met"
#line 1907 "cplus.met"
        if ( (retTree=NQUICK_CALL(_Tak(simple_ident)(error_free), 136, cplus))== (PPTREE) -1 ) {
#line 1907 "cplus.met"
            MulFreeTree(4,inter,retTree,templateVal,val);
            PROG_EXIT(qualified_name_exit,"qualified_name")
#line 1907 "cplus.met"
        }
#line 1907 "cplus.met"
    }
#line 1907 "cplus.met"
#line 1908 "cplus.met"
    if ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN( DPOIDPOI,"::")){
#line 1908 "cplus.met"
#line 1909 "cplus.met"
#line 1910 "cplus.met"
        {
#line 1910 "cplus.met"
            PPTREE _ptRes0=0;
#line 1910 "cplus.met"
            _ptRes0= MakeTree(QUALIFIED, 2);
#line 1910 "cplus.met"
            ReplaceTree(_ptRes0, 1, retTree );
#line 1910 "cplus.met"
            retTree=_ptRes0;
#line 1910 "cplus.met"
        }
#line 1910 "cplus.met"
#line 1911 "cplus.met"
        inter = retTree ;
#line 1911 "cplus.met"
#line 1912 "cplus.met"
        while (((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN( DPOIDPOI,"::")) && 
#line 1912 "cplus.met"
              (NPUSH_CALL_AFF_VERIF(val = ,_Tak(qualified_name_elem), 123, cplus))) { 
#line 1912 "cplus.met"
#line 1913 "cplus.met"
#line 1914 "cplus.met"
            if ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN( DPOIDPOI,"::")){
#line 1914 "cplus.met"
#line 1915 "cplus.met"
                {
#line 1915 "cplus.met"
                    PPTREE _ptRes0=0;
#line 1915 "cplus.met"
                    _ptRes0= MakeTree(QUALIFIED, 2);
#line 1915 "cplus.met"
                    ReplaceTree(_ptRes0, 1, val );
#line 1915 "cplus.met"
                    val=_ptRes0;
#line 1915 "cplus.met"
                }
#line 1915 "cplus.met"
            }
#line 1915 "cplus.met"
#line 1916 "cplus.met"
            ReplaceTree(inter ,2 ,val );
#line 1916 "cplus.met"
#line 1917 "cplus.met"
            inter = val ;
#line 1917 "cplus.met"
#line 1917 "cplus.met"
        } 
#line 1917 "cplus.met"
#line 1917 "cplus.met"
#line 1918 "cplus.met"
    }
#line 1918 "cplus.met"
#line 1920 "cplus.met"
    if (NPUSH_CALL_AFF_VERIF(templateVal = ,_Tak(template_type), 150, cplus)){
#line 1920 "cplus.met"
#line 1921 "cplus.met"
#line 1922 "cplus.met"
        ReplaceTree(templateVal ,1 ,retTree );
#line 1922 "cplus.met"
#line 1923 "cplus.met"
        retTree = templateVal ;
#line 1923 "cplus.met"
#line 1924 "cplus.met"
        if ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN(DPOIDPOI,"::") && (tokenAhead = 0,CommTerm(),1)){
#line 1924 "cplus.met"
#line 1925 "cplus.met"
            {
#line 1925 "cplus.met"
                PPTREE _ptTree0=0;
#line 1925 "cplus.met"
                {
#line 1925 "cplus.met"
                    PPTREE _ptTree1=0,_ptRes1=0;
#line 1925 "cplus.met"
                    _ptRes1= MakeTree(QUALIFIED, 2);
#line 1925 "cplus.met"
                    ReplaceTree(_ptRes1, 1, retTree );
#line 1925 "cplus.met"
                    if ( (_ptTree1=NQUICK_CALL(_Tak(qualified_name)(error_free), 122, cplus))== (PPTREE) -1 ) {
#line 1925 "cplus.met"
                        MulFreeTree(7,_ptRes1,_ptTree1,_ptTree0,inter,retTree,templateVal,val);
                        PROG_EXIT(qualified_name_exit,"qualified_name")
#line 1925 "cplus.met"
                    }
#line 1925 "cplus.met"
                    ReplaceTree(_ptRes1, 2, _ptTree1);
#line 1925 "cplus.met"
                    _ptTree0=_ptRes1;
#line 1925 "cplus.met"
                }
#line 1925 "cplus.met"
                _retValue =_ptTree0;
#line 1925 "cplus.met"
                goto qualified_name_ret;
#line 1925 "cplus.met"
            }
#line 1925 "cplus.met"
        } else {
#line 1925 "cplus.met"
#line 1927 "cplus.met"
            {
#line 1927 "cplus.met"
                _retValue = retTree ;
#line 1927 "cplus.met"
                goto qualified_name_ret;
#line 1927 "cplus.met"
                
#line 1927 "cplus.met"
            }
#line 1927 "cplus.met"
        }
#line 1927 "cplus.met"
#line 1927 "cplus.met"
#line 1927 "cplus.met"
    }
#line 1927 "cplus.met"
#line 1929 "cplus.met"
    {
#line 1929 "cplus.met"
        _retValue = retTree ;
#line 1929 "cplus.met"
        goto qualified_name_ret;
#line 1929 "cplus.met"
        
#line 1929 "cplus.met"
    }
#line 1929 "cplus.met"
#line 1929 "cplus.met"
#line 1929 "cplus.met"

#line 1930 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1930 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 1930 "cplus.met"
return((PPTREE) 0);
#line 1930 "cplus.met"

#line 1930 "cplus.met"
qualified_name_exit :
#line 1930 "cplus.met"

#line 1930 "cplus.met"
    _Debug = TRACE_RULE("qualified_name",TRACE_EXIT,(PPTREE)0);
#line 1930 "cplus.met"
    _funcLevel--;
#line 1930 "cplus.met"
    return((PPTREE) -1) ;
#line 1930 "cplus.met"

#line 1930 "cplus.met"
qualified_name_ret :
#line 1930 "cplus.met"
    
#line 1930 "cplus.met"
    _Debug = TRACE_RULE("qualified_name",TRACE_RETURN,_retValue);
#line 1930 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1930 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 1930 "cplus.met"
    return _retValue ;
#line 1930 "cplus.met"
}
#line 1930 "cplus.met"

#line 1930 "cplus.met"
#line 1876 "cplus.met"
PPTREE cplus::qualified_name_elem ( int error_free)
#line 1876 "cplus.met"
{
#line 1876 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 1876 "cplus.met"
    int _value,_nbPre = 0 ;
#line 1876 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 1876 "cplus.met"
    int _Debug = TRACE_RULE("qualified_name_elem",TRACE_ENTER,(PPTREE)0);
#line 1876 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 1876 "cplus.met"
#line 1877 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 1877 "cplus.met"
    if (  !SEE_TOKEN( DPOIDPOI,"::") || !(CommTerm(),1)) {
#line 1877 "cplus.met"
            TOKEN_EXIT(qualified_name_elem_exit,"::")
#line 1877 "cplus.met"
    } else {
#line 1877 "cplus.met"
        tokenAhead = 0 ;
#line 1877 "cplus.met"
    }
#line 1877 "cplus.met"
#line 1878 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 1878 "cplus.met"
    switch( lexEl.Value) {
#line 1878 "cplus.met"
#line 1879 "cplus.met"
        case TILD : 
#line 1879 "cplus.met"
            tokenAhead = 0 ;
#line 1879 "cplus.met"
            CommTerm();
#line 1879 "cplus.met"
#line 1879 "cplus.met"
            {
#line 1879 "cplus.met"
                PPTREE _ptTree0=0;
#line 1879 "cplus.met"
                {
#line 1879 "cplus.met"
                    PPTREE _ptTree1=0,_ptRes1=0;
#line 1879 "cplus.met"
                    _ptRes1= MakeTree(DESTRUCT, 1);
#line 1879 "cplus.met"
                    {
#line 1879 "cplus.met"
                        PPTREE _ptTree2=0,_ptRes2=0;
#line 1879 "cplus.met"
                        _ptRes2= MakeTree(IDENT, 1);
#line 1879 "cplus.met"
                        (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 1879 "cplus.met"
                        if ( ! TERM_OR_META(IDENT,"IDENT") || !(BUILD_TERM_META(_ptTree2))) {
#line 1879 "cplus.met"
                            MulFreeTree(5,_ptRes2,_ptTree2,_ptRes1,_ptTree1,_ptTree0);
                            TOKEN_EXIT(qualified_name_elem_exit,"IDENT")
#line 1879 "cplus.met"
                        } else {
#line 1879 "cplus.met"
                            tokenAhead = 0 ;
#line 1879 "cplus.met"
                        }
#line 1879 "cplus.met"
                        ReplaceTree(_ptRes2, 1, _ptTree2);
#line 1879 "cplus.met"
                        _ptTree1=_ptRes2;
#line 1879 "cplus.met"
                    }
#line 1879 "cplus.met"
                    ReplaceTree(_ptRes1, 1, _ptTree1);
#line 1879 "cplus.met"
                    _ptTree0=_ptRes1;
#line 1879 "cplus.met"
                }
#line 1879 "cplus.met"
                _retValue =_ptTree0;
#line 1879 "cplus.met"
                goto qualified_name_elem_ret;
#line 1879 "cplus.met"
            }
#line 1879 "cplus.met"
            break;
#line 1879 "cplus.met"
#line 1880 "cplus.met"
        case META : 
#line 1880 "cplus.met"
        case IDENT : 
#line 1880 "cplus.met"
#line 1880 "cplus.met"
            {
#line 1880 "cplus.met"
                PPTREE _ptTree0=0;
#line 1880 "cplus.met"
                if ( (_ptTree0=NQUICK_CALL(_Tak(simple_ident)(error_free), 136, cplus))== (PPTREE) -1 ) {
#line 1880 "cplus.met"
                    MulFreeTree(1,_ptTree0);
                    PROG_EXIT(qualified_name_elem_exit,"qualified_name_elem")
#line 1880 "cplus.met"
                }
#line 1880 "cplus.met"
                _retValue =_ptTree0;
#line 1880 "cplus.met"
                goto qualified_name_elem_ret;
#line 1880 "cplus.met"
            }
#line 1880 "cplus.met"
            break;
#line 1880 "cplus.met"
#line 1881 "cplus.met"
        case OPERATOR : 
#line 1881 "cplus.met"
#line 1881 "cplus.met"
            {
#line 1881 "cplus.met"
                PPTREE _ptTree0=0;
#line 1881 "cplus.met"
                if ( (_ptTree0=NQUICK_CALL(_Tak(operator_function_name)(error_free), 109, cplus))== (PPTREE) -1 ) {
#line 1881 "cplus.met"
                    MulFreeTree(1,_ptTree0);
                    PROG_EXIT(qualified_name_elem_exit,"qualified_name_elem")
#line 1881 "cplus.met"
                }
#line 1881 "cplus.met"
                _retValue =_ptTree0;
#line 1881 "cplus.met"
                goto qualified_name_elem_ret;
#line 1881 "cplus.met"
            }
#line 1881 "cplus.met"
            break;
#line 1881 "cplus.met"
        default :
#line 1881 "cplus.met"
            CASE_EXIT(qualified_name_elem_exit,"either ~ or IDENT or operator")
#line 1881 "cplus.met"
            break;
#line 1881 "cplus.met"
    }
#line 1881 "cplus.met"
#line 1881 "cplus.met"
#line 1882 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1882 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 1882 "cplus.met"
return((PPTREE) 0);
#line 1882 "cplus.met"

#line 1882 "cplus.met"
qualified_name_elem_exit :
#line 1882 "cplus.met"

#line 1882 "cplus.met"
    _Debug = TRACE_RULE("qualified_name_elem",TRACE_EXIT,(PPTREE)0);
#line 1882 "cplus.met"
    _funcLevel--;
#line 1882 "cplus.met"
    return((PPTREE) -1) ;
#line 1882 "cplus.met"

#line 1882 "cplus.met"
qualified_name_elem_ret :
#line 1882 "cplus.met"
    
#line 1882 "cplus.met"
    _Debug = TRACE_RULE("qualified_name_elem",TRACE_RETURN,_retValue);
#line 1882 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1882 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 1882 "cplus.met"
    return _retValue ;
#line 1882 "cplus.met"
}
#line 1882 "cplus.met"

#line 1882 "cplus.met"
#line 809 "cplus.met"
PPTREE cplus::quick_prog ( int error_free)
#line 809 "cplus.met"
{
#line 809 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 809 "cplus.met"
    int _value,_nbPre = 0 ;
#line 809 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 809 "cplus.met"
    int _Debug = TRACE_RULE("quick_prog",TRACE_ENTER,(PPTREE)0);
#line 809 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 809 "cplus.met"
#line 809 "cplus.met"
    PPTREE list = (PPTREE) 0,valTree = (PPTREE) 0;
#line 809 "cplus.met"
#line 811 "cplus.met"
    while ((NPUSH_CALL_AFF_VERIF(valTree = ,_Tak(quick_prog_elem), 125, cplus)) && 
#line 811 "cplus.met"
          (! (valTree == (PPTREE) 0))) { 
#line 811 "cplus.met"
#line 812 "cplus.met"
#line 813 "cplus.met"
        FreeTree (valTree );
#line 813 "cplus.met"
#line 814 "cplus.met"
         _lastTree = (PPTREE) 0;
#line 814 "cplus.met"
#line 814 "cplus.met"
    } 
#line 814 "cplus.met"
#line 816 "cplus.met"
    ExtUnputBuf();
#line 816 "cplus.met"
    while ((c == ' ')||(c == '\n')||(c == '\t')||(c == '\r')||(c == ''))
#line 816 "cplus.met"
        NextChar() ;
#line 816 "cplus.met"
    ptStockBuf = -1;
#line 816 "cplus.met"
    lexEl.Erase();
#line 816 "cplus.met"
    tokenAhead = 0;
#line 816 "cplus.met"
    oldLine=line,oldCol=col;
#line 816 "cplus.met"
    if ( !lexCallLex) {
#line 816 "cplus.met"
        PUT_COORD_CALL;
#line 816 "cplus.met"
    }
#line 816 "cplus.met"
#line 817 "cplus.met"
    if ((tokenAhead && tokenAhead != -1)|| (c != EOF)){
#line 817 "cplus.met"
#line 818 "cplus.met"
        if ( (NQUICK_CALL(_Tak(quick_prog_elem)(error_free), 125, cplus))== (PPTREE) -1 ) {
#line 818 "cplus.met"
            MulFreeTree(2,list,valTree);
            PROG_EXIT(quick_prog_exit,"quick_prog")
#line 818 "cplus.met"
        }
#line 818 "cplus.met"
    }
#line 818 "cplus.met"
#line 819 "cplus.met"
    {
#line 819 "cplus.met"
        _retValue = list ;
#line 819 "cplus.met"
        goto quick_prog_ret;
#line 819 "cplus.met"
        
#line 819 "cplus.met"
    }
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
quick_prog_exit :
#line 820 "cplus.met"

#line 820 "cplus.met"
    _Debug = TRACE_RULE("quick_prog",TRACE_EXIT,(PPTREE)0);
#line 820 "cplus.met"
    _funcLevel--;
#line 820 "cplus.met"
    return((PPTREE) -1) ;
#line 820 "cplus.met"

#line 820 "cplus.met"
quick_prog_ret :
#line 820 "cplus.met"
    
#line 820 "cplus.met"
    _Debug = TRACE_RULE("quick_prog",TRACE_RETURN,_retValue);
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
#line 842 "cplus.met"
PPTREE cplus::quick_prog_elem ( int error_free)
#line 842 "cplus.met"
{
#line 842 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 842 "cplus.met"
    int _value,_nbPre = 0 ;
#line 842 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 842 "cplus.met"
    int _Debug = TRACE_RULE("quick_prog_elem",TRACE_ENTER,(PPTREE)0);
#line 842 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 842 "cplus.met"
#line 842 "cplus.met"
    PPTREE retTree = (PPTREE) 0;
#line 842 "cplus.met"
#line 844 "cplus.met"
     debut :
#line 844 "cplus.met"
#line 845 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 845 "cplus.met"
    switch( lexEl.Value) {
#line 845 "cplus.met"
#line 846 "cplus.met"
        case META : 
#line 846 "cplus.met"
        case INCLUDE_DIR : 
#line 846 "cplus.met"
#line 846 "cplus.met"
            {
#line 846 "cplus.met"
                PPTREE _ptTree0=0;
#line 846 "cplus.met"
                if ( (_ptTree0=NQUICK_CALL(_Tak(include_dir)(error_free), 84, cplus))== (PPTREE) -1 ) {
#line 846 "cplus.met"
                    MulFreeTree(2,_ptTree0,retTree);
                    PROG_EXIT(quick_prog_elem_exit,"quick_prog_elem")
#line 846 "cplus.met"
                }
#line 846 "cplus.met"
                _retValue =_ptTree0;
#line 846 "cplus.met"
                goto quick_prog_elem_ret;
#line 846 "cplus.met"
            }
#line 846 "cplus.met"
            break;
#line 846 "cplus.met"
#line 847 "cplus.met"
        case PRAGMA_DIR : 
#line 847 "cplus.met"
            tokenAhead = 0 ;
#line 847 "cplus.met"
            CommTerm();
#line 847 "cplus.met"
#line 848 "cplus.met"
#line 849 "cplus.met"
            if (NPUSH_CALL_VERIF(_Tak(range_pragma), 130, cplus)){
#line 849 "cplus.met"
#line 849 "cplus.met"
            }
#line 849 "cplus.met"
#line 851 "cplus.met"
            (tokenAhead == 8|| (LexPragma(),TRACE_LEX(1)));
#line 851 "cplus.met"
            switch( lexEl.Value) {
#line 851 "cplus.met"
#line 852 "cplus.met"
                case META : 
#line 852 "cplus.met"
                case PRAGMA_CONFIG : 
#line 852 "cplus.met"
                    tokenAhead = 0 ;
#line 852 "cplus.met"
                    CommTerm();
#line 852 "cplus.met"
#line 853 "cplus.met"
#line 854 "cplus.met"
                    (tokenAhead == 8|| (LexPragma(),TRACE_LEX(1)));
#line 854 "cplus.met"
                    switch( lexEl.Value) {
#line 854 "cplus.met"
#line 855 "cplus.met"
                        case META : 
#line 855 "cplus.met"
                        case PRAGMA_TAB : 
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
                                    _ptRes1= MakeTree(TAB_VALUE, 1);
#line 857 "cplus.met"
                                    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 857 "cplus.met"
                                    if ( ! TERM_OR_META(INTEGER,"INTEGER") || !(BUILD_TERM_META(_ptTree1))) {
#line 857 "cplus.met"
                                        MulFreeTree(5,_ptRes1,_ptTree1,_ptRes0,_ptTree0,retTree);
                                        TOKEN_EXIT(quick_prog_elem_exit,"INTEGER")
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
                            AnalyzeTab (retTree );
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
                        case PRAGMA_MODE : 
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
                                    _ptRes1= MakeTree(MODE_VALUE, 1);
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
                            AnalyzeMode (retTree );
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
                        case PRAGMA_ENUM_VERT : 
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
                                    _ptRes1= MakeTree(ENUM_VERT_VALUE, 1);
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
                            AnalyzeEnumVert (retTree );
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
                        case PRAGMA_PARAMETERS_UNDER : 
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
                                    _ptRes1= MakeTree(ENUM_PARAMETERS_UNDER, 1);
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
                            AnalyzeParameterFunctUnd (retTree );
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
                        case PRAGMA_TAB_DIRECTIVE : 
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
                                    _ptRes1= MakeTree(TAB_DIRECTIVE, 1);
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
                            AnalyzeTabDirective (retTree );
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
                        case PRAGMA_SPACE_ARROW : 
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
                                    _ptRes1= MakeTree(SPACE_ARROW, 1);
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
                            AnalyzeSpaceArrow (retTree );
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
                        case PRAGMA_BRACE_ALIGN : 
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
                                _ptRes0= MakeTree(CONFIG, 1);
#line 893 "cplus.met"
                                {
#line 893 "cplus.met"
                                    PPTREE _ptTree1=0,_ptRes1=0;
#line 893 "cplus.met"
                                    _ptRes1= MakeTree(BRACE_ALIGN_VALUE, 1);
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
                            AnalyzeBraceAlign (retTree );
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
                        case PRAGMA_SIMPLIFY : 
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
                                _ptRes0= MakeTree(SIMPLIFY, 1);
#line 899 "cplus.met"
                                {
#line 899 "cplus.met"
                                    PPTREE _ptTree1=0,_ptRes1=0;
#line 899 "cplus.met"
                                    _ptRes1= MakeTree(SIMPLIFY_VALUE, 1);
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
                            AnalyzeSimplify (retTree );
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
                        case PRAGMA_SINGLE_SWITCH_INDENT : 
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
                                    _ptRes1= MakeTree(SINGLE_SWITCH_INDENT_VALUE, 1);
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
                            AnalyzeSingleSwitchIndent (retTree );
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
                        case PRAGMA_ASSIGN_ALIGN : 
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
                                    _ptRes1= MakeTree(ASSIGN_ALIGN, 1);
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
                            AnalyzeAssignAlign (retTree );
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
                        case PRAGMA_DECL_ALIGN : 
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
                                    _ptRes1= MakeTree(DECL_ALIGN, 1);
#line 917 "cplus.met"
                                    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 917 "cplus.met"
                                    if ( ! TERM_OR_META(IDENT,"IDENT") || !(BUILD_TERM_META(_ptTree1))) {
#line 917 "cplus.met"
                                        MulFreeTree(5,_ptRes1,_ptTree1,_ptRes0,_ptTree0,retTree);
                                        TOKEN_EXIT(quick_prog_elem_exit,"IDENT")
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
                            AnalyzeDeclAlign (retTree );
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
                        case PRAGMA_MARGIN : 
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
                                    _ptRes1= MakeTree(MARGIN_VALUE, 1);
#line 923 "cplus.met"
                                    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 923 "cplus.met"
                                    if ( ! TERM_OR_META(INTEGER,"INTEGER") || !(BUILD_TERM_META(_ptTree1))) {
#line 923 "cplus.met"
                                        MulFreeTree(5,_ptRes1,_ptTree1,_ptRes0,_ptTree0,retTree);
                                        TOKEN_EXIT(quick_prog_elem_exit,"INTEGER")
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
                            AnalyzeMargin (retTree );
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
                        case PRAGMA_COMMENT_START : 
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
                                    _ptRes1= MakeTree(COMMENT_START, 1);
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
                        case PRAGMA_COMMENT_MIDDLE : 
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
                                    _ptRes1= MakeTree(COMMENT_MIDDLE, 1);
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
                        case PRAGMA_COMMENT_END : 
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
                                    _ptRes1= MakeTree(COMMENT_END, 1);
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
                        case PRAGMA_COMMENT_PLUS : 
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
                                    _ptRes1= MakeTree(COMMENT_PLUS, 1);
#line 947 "cplus.met"
                                    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 947 "cplus.met"
                                    if ( ! TERM_OR_META(STRING,"STRING") || !(BUILD_TERM_META(_ptTree1))) {
#line 947 "cplus.met"
                                        MulFreeTree(5,_ptRes1,_ptTree1,_ptRes0,_ptTree0,retTree);
                                        TOKEN_EXIT(quick_prog_elem_exit,"STRING")
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
                            AnalyzeComment (retTree );
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
                        case PRAGMA_INDENT_FUNCTION_TYPE : 
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
                                    _ptRes1= MakeTree(INDENT_FUNCTION_TYPE, 1);
#line 953 "cplus.met"
                                    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 953 "cplus.met"
                                    if ( ! TERM_OR_META(IDENT,"IDENT") || !(BUILD_TERM_META(_ptTree1))) {
#line 953 "cplus.met"
                                        MulFreeTree(5,_ptRes1,_ptTree1,_ptRes0,_ptTree0,retTree);
                                        TOKEN_EXIT(quick_prog_elem_exit,"IDENT")
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
                            AnalyzeIndentFunctionType (retTree );
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
                        case PRAGMA_FUNC_HEADER : 
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
                                    _ptRes1= MakeTree(FUNC_HEADER, 1);
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
                            AnalyzeFuncHeader (retTree );
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
                        case PRAGMA_PARAMETERS : 
#line 963 "cplus.met"
                            tokenAhead = 0 ;
#line 963 "cplus.met"
                            CommTerm();
#line 963 "cplus.met"
#line 964 "cplus.met"
#line 965 "cplus.met"
                            {
#line 965 "cplus.met"
                                PPTREE _ptTree0=0,_ptRes0=0;
#line 965 "cplus.met"
                                _ptRes0= MakeTree(CONFIG, 1);
#line 965 "cplus.met"
                                {
#line 965 "cplus.met"
                                    PPTREE _ptTree1=0,_ptRes1=0;
#line 965 "cplus.met"
                                    _ptRes1= MakeTree(PARAMETERS, 1);
#line 965 "cplus.met"
                                    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 965 "cplus.met"
                                    if ( ! TERM_OR_META(STRING,"STRING") || !(BUILD_TERM_META(_ptTree1))) {
#line 965 "cplus.met"
                                        MulFreeTree(5,_ptRes1,_ptTree1,_ptRes0,_ptTree0,retTree);
                                        TOKEN_EXIT(quick_prog_elem_exit,"STRING")
#line 965 "cplus.met"
                                    } else {
#line 965 "cplus.met"
                                        tokenAhead = 0 ;
#line 965 "cplus.met"
                                    }
#line 965 "cplus.met"
                                    ReplaceTree(_ptRes1, 1, _ptTree1);
#line 965 "cplus.met"
                                    _ptTree0=_ptRes1;
#line 965 "cplus.met"
                                }
#line 965 "cplus.met"
                                ReplaceTree(_ptRes0, 1, _ptTree0);
#line 965 "cplus.met"
                                retTree=_ptRes0;
#line 965 "cplus.met"
                            }
#line 965 "cplus.met"
#line 966 "cplus.met"
                            AnalyzeParameters (retTree );
#line 966 "cplus.met"
#line 967 "cplus.met"
                            {
#line 967 "cplus.met"
                                _retValue = retTree ;
#line 967 "cplus.met"
                                goto quick_prog_elem_ret;
#line 967 "cplus.met"
                                
#line 967 "cplus.met"
                            }
#line 967 "cplus.met"
#line 967 "cplus.met"
                            break;
#line 967 "cplus.met"
#line 969 "cplus.met"
                        default : 
#line 969 "cplus.met"
#line 969 "cplus.met"
                            {
#line 969 "cplus.met"
                                PPTREE _ptTree0=0;
#line 969 "cplus.met"
                                if ( (_ptTree0=NQUICK_CALL(_Tak(other_config)(error_free), 110, cplus))== (PPTREE) -1 ) {
#line 969 "cplus.met"
                                    MulFreeTree(2,_ptTree0,retTree);
                                    PROG_EXIT(quick_prog_elem_exit,"quick_prog_elem")
#line 969 "cplus.met"
                                }
#line 969 "cplus.met"
                                _retValue =_ptTree0;
#line 969 "cplus.met"
                                goto quick_prog_elem_ret;
#line 969 "cplus.met"
                            }
#line 969 "cplus.met"
                            break;
#line 969 "cplus.met"
                    }
#line 969 "cplus.met"
#line 969 "cplus.met"
                    break;
#line 969 "cplus.met"
#line 969 "cplus.met"
                default : 
#line 969 "cplus.met"
#line 969 "cplus.met"
                    break;
#line 969 "cplus.met"
            }
#line 969 "cplus.met"
#line 974 "cplus.met"
            {
#line 974 "cplus.met"
                PPTREE _ptTree0=0;
#line 974 "cplus.met"
                {
#line 974 "cplus.met"
                    PPTREE _ptRes1=0;
#line 974 "cplus.met"
                    _ptRes1= MakeTree(IDENT, 1);
#line 974 "cplus.met"
                    _ptTree0=_ptRes1;
#line 974 "cplus.met"
                }
#line 974 "cplus.met"
                _retValue =_ptTree0;
#line 974 "cplus.met"
                goto quick_prog_elem_ret;
#line 974 "cplus.met"
            }
#line 974 "cplus.met"
#line 974 "cplus.met"
            break;
#line 974 "cplus.met"
#line 976 "cplus.met"
        default : 
#line 976 "cplus.met"
            tokenAhead = 0 ;
#line 976 "cplus.met"
            CommTerm();
#line 976 "cplus.met"
#line 977 "cplus.met"
#line 978 "cplus.met"
            if ((tokenAhead && tokenAhead != -1)|| (c != EOF)){
#line 978 "cplus.met"
#line 979 "cplus.met"
#line 980 "cplus.met"
                (tokenAhead == 5|| (LexEndLine(),TRACE_LEX(1)));
#line 980 "cplus.met"
                if ( ! TERM_OR_META(END_LINE,"END_LINE") || !(CommTerm(),1)) {
#line 980 "cplus.met"
                    MulFreeTree(1,retTree);
                    TOKEN_EXIT(quick_prog_elem_exit,"END_LINE")
#line 980 "cplus.met"
                } else {
#line 980 "cplus.met"
                    tokenAhead = 0 ;
#line 980 "cplus.met"
                }
#line 980 "cplus.met"
#line 981 "cplus.met"
                 goto debut;
#line 981 "cplus.met"
#line 981 "cplus.met"
#line 981 "cplus.met"
            } else {
#line 981 "cplus.met"
#line 984 "cplus.met"
                {
#line 984 "cplus.met"
                    _retValue = retTree ;
#line 984 "cplus.met"
                    goto quick_prog_elem_ret;
#line 984 "cplus.met"
                    
#line 984 "cplus.met"
                }
#line 984 "cplus.met"
            }
#line 984 "cplus.met"
#line 984 "cplus.met"
            break;
#line 984 "cplus.met"
    }
#line 984 "cplus.met"
#line 984 "cplus.met"
#line 986 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 986 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 986 "cplus.met"
return((PPTREE) 0);
#line 986 "cplus.met"

#line 986 "cplus.met"
quick_prog_elem_exit :
#line 986 "cplus.met"

#line 986 "cplus.met"
    _Debug = TRACE_RULE("quick_prog_elem",TRACE_EXIT,(PPTREE)0);
#line 986 "cplus.met"
    _funcLevel--;
#line 986 "cplus.met"
    return((PPTREE) -1) ;
#line 986 "cplus.met"

#line 986 "cplus.met"
quick_prog_elem_ret :
#line 986 "cplus.met"
    
#line 986 "cplus.met"
    _Debug = TRACE_RULE("quick_prog_elem",TRACE_RETURN,_retValue);
#line 986 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 986 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 986 "cplus.met"
    return _retValue ;
#line 986 "cplus.met"
}
#line 986 "cplus.met"

#line 986 "cplus.met"
#line 2223 "cplus.met"
PPTREE cplus::range_in_liste ( int error_free)
#line 2223 "cplus.met"
{
#line 2223 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 2223 "cplus.met"
    int _value,_nbPre = 0 ;
#line 2223 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 2223 "cplus.met"
    int _Debug = TRACE_RULE("range_in_liste",TRACE_ENTER,(PPTREE)0);
#line 2223 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 2223 "cplus.met"
#line 2223 "cplus.met"
    PPTREE retTree = (PPTREE) 0;
#line 2223 "cplus.met"
#line 2225 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 2225 "cplus.met"
    if ( ! TERM_OR_META(IDENT,"IDENT") || !(BUILD_TERM_META(retTree))) {
#line 2225 "cplus.met"
        MulFreeTree(1,retTree);
        TOKEN_EXIT(range_in_liste_exit,"IDENT")
#line 2225 "cplus.met"
    } else {
#line 2225 "cplus.met"
        tokenAhead = 0 ;
#line 2225 "cplus.met"
    }
#line 2225 "cplus.met"
#line 2226 "cplus.met"
    if ( IsRange(lexEl.string())){
#line 2226 "cplus.met"
#line 2227 "cplus.met"
        {
#line 2227 "cplus.met"
            _retValue = retTree ;
#line 2227 "cplus.met"
            goto range_in_liste_ret;
#line 2227 "cplus.met"
            
#line 2227 "cplus.met"
        }
#line 2227 "cplus.met"
    } else {
#line 2227 "cplus.met"
#line 2229 "cplus.met"
        
#line 2229 "cplus.met"
        MulFreeTree(1,retTree);
        LEX_EXIT ("",0);
#line 2229 "cplus.met"
        goto range_in_liste_exit;
#line 2229 "cplus.met"
    }
#line 2229 "cplus.met"
#line 2229 "cplus.met"
#line 2229 "cplus.met"

#line 2230 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2230 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 2230 "cplus.met"
return((PPTREE) 0);
#line 2230 "cplus.met"

#line 2230 "cplus.met"
range_in_liste_exit :
#line 2230 "cplus.met"

#line 2230 "cplus.met"
    _Debug = TRACE_RULE("range_in_liste",TRACE_EXIT,(PPTREE)0);
#line 2230 "cplus.met"
    _funcLevel--;
#line 2230 "cplus.met"
    return((PPTREE) -1) ;
#line 2230 "cplus.met"

#line 2230 "cplus.met"
range_in_liste_ret :
#line 2230 "cplus.met"
    
#line 2230 "cplus.met"
    _Debug = TRACE_RULE("range_in_liste",TRACE_RETURN,_retValue);
#line 2230 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2230 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 2230 "cplus.met"
    return _retValue ;
#line 2230 "cplus.met"
}
#line 2230 "cplus.met"

#line 2230 "cplus.met"
#line 2267 "cplus.met"
PPTREE cplus::range_modifier ( int error_free)
#line 2267 "cplus.met"
{
#line 2267 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 2267 "cplus.met"
    int _value,_nbPre = 0 ;
#line 2267 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 2267 "cplus.met"
    int _Debug = TRACE_RULE("range_modifier",TRACE_ENTER,(PPTREE)0);
#line 2267 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 2267 "cplus.met"
#line 2268 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 2268 "cplus.met"
    switch( lexEl.Value) {
#line 2268 "cplus.met"
#line 2269 "cplus.met"
        case META : 
#line 2269 "cplus.met"
        case IDENT : 
#line 2269 "cplus.met"
#line 2269 "cplus.met"
            {
#line 2269 "cplus.met"
                PPTREE _ptTree0=0;
#line 2269 "cplus.met"
                {
#line 2269 "cplus.met"
                    PPTREE _ptTree1=0,_ptRes1=0;
#line 2269 "cplus.met"
                    _ptRes1= MakeTree(RANGE_MODIFIER, 2);
#line 2269 "cplus.met"
                    if ( (_ptTree1=NQUICK_CALL(_Tak(range_in_liste)(error_free), 126, cplus))== (PPTREE) -1 ) {
#line 2269 "cplus.met"
                        MulFreeTree(3,_ptRes1,_ptTree1,_ptTree0);
                        PROG_EXIT(range_modifier_exit,"range_modifier")
#line 2269 "cplus.met"
                    }
#line 2269 "cplus.met"
                    ReplaceTree(_ptRes1, 1, _ptTree1);
#line 2269 "cplus.met"
                    _ptTree0=_ptRes1;
#line 2269 "cplus.met"
                }
#line 2269 "cplus.met"
                _retValue =_ptTree0;
#line 2269 "cplus.met"
                goto range_modifier_ret;
#line 2269 "cplus.met"
            }
#line 2269 "cplus.met"
            break;
#line 2269 "cplus.met"
#line 2270 "cplus.met"
        case VOLATILE : 
#line 2270 "cplus.met"
#line 2270 "cplus.met"
            {
#line 2270 "cplus.met"
                PPTREE _ptTree0=0;
#line 2270 "cplus.met"
                {
#line 2270 "cplus.met"
                    PPTREE _ptTree1=0,_ptRes1=0;
#line 2270 "cplus.met"
                    _ptRes1= MakeTree(RANGE_MODIFIER, 2);
#line 2270 "cplus.met"
                    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 2270 "cplus.met"
                    if (  !SEE_TOKEN( VOLATILE,"volatile") || !(_ptTree1 = CommString(lexEl.string()))) {
#line 2270 "cplus.met"
                        MulFreeTree(3,_ptRes1,_ptTree1,_ptTree0);
                        TOKEN_EXIT(range_modifier_exit,"volatile")
#line 2270 "cplus.met"
                    } else {
#line 2270 "cplus.met"
                        tokenAhead = 0 ;
#line 2270 "cplus.met"
                    }
#line 2270 "cplus.met"
                    ReplaceTree(_ptRes1, 1, _ptTree1);
#line 2270 "cplus.met"
                    _ptTree0=_ptRes1;
#line 2270 "cplus.met"
                }
#line 2270 "cplus.met"
                _retValue =_ptTree0;
#line 2270 "cplus.met"
                goto range_modifier_ret;
#line 2270 "cplus.met"
            }
#line 2270 "cplus.met"
            break;
#line 2270 "cplus.met"
#line 2271 "cplus.met"
        case REGISTER : 
#line 2271 "cplus.met"
#line 2271 "cplus.met"
            {
#line 2271 "cplus.met"
                PPTREE _ptTree0=0;
#line 2271 "cplus.met"
                {
#line 2271 "cplus.met"
                    PPTREE _ptTree1=0,_ptRes1=0;
#line 2271 "cplus.met"
                    _ptRes1= MakeTree(RANGE_MODIFIER, 2);
#line 2271 "cplus.met"
                    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 2271 "cplus.met"
                    if (  !SEE_TOKEN( REGISTER,"register") || !(_ptTree1 = CommString(lexEl.string()))) {
#line 2271 "cplus.met"
                        MulFreeTree(3,_ptRes1,_ptTree1,_ptTree0);
                        TOKEN_EXIT(range_modifier_exit,"register")
#line 2271 "cplus.met"
                    } else {
#line 2271 "cplus.met"
                        tokenAhead = 0 ;
#line 2271 "cplus.met"
                    }
#line 2271 "cplus.met"
                    ReplaceTree(_ptRes1, 1, _ptTree1);
#line 2271 "cplus.met"
                    _ptTree0=_ptRes1;
#line 2271 "cplus.met"
                }
#line 2271 "cplus.met"
                _retValue =_ptTree0;
#line 2271 "cplus.met"
                goto range_modifier_ret;
#line 2271 "cplus.met"
            }
#line 2271 "cplus.met"
            break;
#line 2271 "cplus.met"
#line 2272 "cplus.met"
        case __ATTRIBUTE__ : 
#line 2272 "cplus.met"
#line 2273 "cplus.met"
#line 2274 "cplus.met"
            {
#line 2274 "cplus.met"
                PPTREE _ptTree0=0;
#line 2274 "cplus.met"
                {
#line 2274 "cplus.met"
                    PPTREE _ptTree1=0,_ptRes1=0;
#line 2274 "cplus.met"
                    _ptRes1= MakeTree(RANGE_MODIFIER, 2);
#line 2274 "cplus.met"
                    if ( (_ptTree1=NQUICK_CALL(_Tak(attribute_call)(error_free), 22, cplus))== (PPTREE) -1 ) {
#line 2274 "cplus.met"
                        MulFreeTree(3,_ptRes1,_ptTree1,_ptTree0);
                        PROG_EXIT(range_modifier_exit,"range_modifier")
#line 2274 "cplus.met"
                    }
#line 2274 "cplus.met"
                    ReplaceTree(_ptRes1, 1, _ptTree1);
#line 2274 "cplus.met"
                    _ptTree0=_ptRes1;
#line 2274 "cplus.met"
                }
#line 2274 "cplus.met"
                _retValue =_ptTree0;
#line 2274 "cplus.met"
                goto range_modifier_ret;
#line 2274 "cplus.met"
            }
#line 2274 "cplus.met"
#line 2274 "cplus.met"
            break;
#line 2274 "cplus.met"
#line 2276 "cplus.met"
        case __ASM__ : 
#line 2276 "cplus.met"
#line 2277 "cplus.met"
#line 2278 "cplus.met"
            {
#line 2278 "cplus.met"
                PPTREE _ptTree0=0;
#line 2278 "cplus.met"
                {
#line 2278 "cplus.met"
                    PPTREE _ptTree1=0,_ptRes1=0;
#line 2278 "cplus.met"
                    _ptRes1= MakeTree(RANGE_MODIFIER, 2);
#line 2278 "cplus.met"
                    if ( (_ptTree1=NQUICK_CALL(_Tak(asm_call)(error_free), 18, cplus))== (PPTREE) -1 ) {
#line 2278 "cplus.met"
                        MulFreeTree(3,_ptRes1,_ptTree1,_ptTree0);
                        PROG_EXIT(range_modifier_exit,"range_modifier")
#line 2278 "cplus.met"
                    }
#line 2278 "cplus.met"
                    ReplaceTree(_ptRes1, 1, _ptTree1);
#line 2278 "cplus.met"
                    _ptTree0=_ptRes1;
#line 2278 "cplus.met"
                }
#line 2278 "cplus.met"
                _retValue =_ptTree0;
#line 2278 "cplus.met"
                goto range_modifier_ret;
#line 2278 "cplus.met"
            }
#line 2278 "cplus.met"
#line 2278 "cplus.met"
            break;
#line 2278 "cplus.met"
#line 2280 "cplus.met"
        default : 
#line 2280 "cplus.met"
#line 2280 "cplus.met"
            {
#line 2280 "cplus.met"
                PPTREE _ptTree0=0;
#line 2280 "cplus.met"
                if ( (_ptTree0=NQUICK_CALL(_Tak(range_modifier_function)(error_free), 128, cplus))== (PPTREE) -1 ) {
#line 2280 "cplus.met"
                    MulFreeTree(1,_ptTree0);
                    PROG_EXIT(range_modifier_exit,"range_modifier")
#line 2280 "cplus.met"
                }
#line 2280 "cplus.met"
                _retValue =_ptTree0;
#line 2280 "cplus.met"
                goto range_modifier_ret;
#line 2280 "cplus.met"
            }
#line 2280 "cplus.met"
            break;
#line 2280 "cplus.met"
    }
#line 2280 "cplus.met"
#line 2280 "cplus.met"
#line 2281 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2281 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 2281 "cplus.met"
return((PPTREE) 0);
#line 2281 "cplus.met"

#line 2281 "cplus.met"
range_modifier_exit :
#line 2281 "cplus.met"

#line 2281 "cplus.met"
    _Debug = TRACE_RULE("range_modifier",TRACE_EXIT,(PPTREE)0);
#line 2281 "cplus.met"
    _funcLevel--;
#line 2281 "cplus.met"
    return((PPTREE) -1) ;
#line 2281 "cplus.met"

#line 2281 "cplus.met"
range_modifier_ret :
#line 2281 "cplus.met"
    
#line 2281 "cplus.met"
    _Debug = TRACE_RULE("range_modifier",TRACE_RETURN,_retValue);
#line 2281 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2281 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 2281 "cplus.met"
    return _retValue ;
#line 2281 "cplus.met"
}
#line 2281 "cplus.met"

#line 2281 "cplus.met"
#line 2239 "cplus.met"
PPTREE cplus::range_modifier_function ( int error_free)
#line 2239 "cplus.met"
{
#line 2239 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 2239 "cplus.met"
    int _value,_nbPre = 0 ;
#line 2239 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 2239 "cplus.met"
    int _Debug = TRACE_RULE("range_modifier_function",TRACE_ENTER,(PPTREE)0);
#line 2239 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 2239 "cplus.met"
#line 2240 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 2240 "cplus.met"
    switch( lexEl.Value) {
#line 2240 "cplus.met"
#line 2241 "cplus.met"
        case INLINE : 
#line 2241 "cplus.met"
#line 2241 "cplus.met"
            {
#line 2241 "cplus.met"
                PPTREE _ptTree0=0;
#line 2241 "cplus.met"
                {
#line 2241 "cplus.met"
                    PPTREE _ptTree1=0,_ptRes1=0;
#line 2241 "cplus.met"
                    _ptRes1= MakeTree(RANGE_MODIFIER, 2);
#line 2241 "cplus.met"
                    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 2241 "cplus.met"
                    if (  !SEE_TOKEN( INLINE,"inline") || !(_ptTree1 = CommString(lexEl.string()))) {
#line 2241 "cplus.met"
                        MulFreeTree(3,_ptRes1,_ptTree1,_ptTree0);
                        TOKEN_EXIT(range_modifier_function_exit,"inline")
#line 2241 "cplus.met"
                    } else {
#line 2241 "cplus.met"
                        tokenAhead = 0 ;
#line 2241 "cplus.met"
                    }
#line 2241 "cplus.met"
                    ReplaceTree(_ptRes1, 1, _ptTree1);
#line 2241 "cplus.met"
                    _ptTree0=_ptRes1;
#line 2241 "cplus.met"
                }
#line 2241 "cplus.met"
                _retValue =_ptTree0;
#line 2241 "cplus.met"
                goto range_modifier_function_ret;
#line 2241 "cplus.met"
            }
#line 2241 "cplus.met"
            break;
#line 2241 "cplus.met"
#line 2242 "cplus.met"
        case VIRTUAL : 
#line 2242 "cplus.met"
#line 2242 "cplus.met"
            {
#line 2242 "cplus.met"
                PPTREE _ptTree0=0;
#line 2242 "cplus.met"
                {
#line 2242 "cplus.met"
                    PPTREE _ptTree1=0,_ptRes1=0;
#line 2242 "cplus.met"
                    _ptRes1= MakeTree(RANGE_MODIFIER, 2);
#line 2242 "cplus.met"
                    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 2242 "cplus.met"
                    if (  !SEE_TOKEN( VIRTUAL,"virtual") || !(_ptTree1 = CommString(lexEl.string()))) {
#line 2242 "cplus.met"
                        MulFreeTree(3,_ptRes1,_ptTree1,_ptTree0);
                        TOKEN_EXIT(range_modifier_function_exit,"virtual")
#line 2242 "cplus.met"
                    } else {
#line 2242 "cplus.met"
                        tokenAhead = 0 ;
#line 2242 "cplus.met"
                    }
#line 2242 "cplus.met"
                    ReplaceTree(_ptRes1, 1, _ptTree1);
#line 2242 "cplus.met"
                    _ptTree0=_ptRes1;
#line 2242 "cplus.met"
                }
#line 2242 "cplus.met"
                _retValue =_ptTree0;
#line 2242 "cplus.met"
                goto range_modifier_function_ret;
#line 2242 "cplus.met"
            }
#line 2242 "cplus.met"
            break;
#line 2242 "cplus.met"
#line 2243 "cplus.met"
        case FRIEND : 
#line 2243 "cplus.met"
#line 2243 "cplus.met"
            {
#line 2243 "cplus.met"
                PPTREE _ptTree0=0;
#line 2243 "cplus.met"
                {
#line 2243 "cplus.met"
                    PPTREE _ptTree1=0,_ptRes1=0;
#line 2243 "cplus.met"
                    _ptRes1= MakeTree(RANGE_MODIFIER, 2);
#line 2243 "cplus.met"
                    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 2243 "cplus.met"
                    if (  !SEE_TOKEN( FRIEND,"friend") || !(_ptTree1 = CommString(lexEl.string()))) {
#line 2243 "cplus.met"
                        MulFreeTree(3,_ptRes1,_ptTree1,_ptTree0);
                        TOKEN_EXIT(range_modifier_function_exit,"friend")
#line 2243 "cplus.met"
                    } else {
#line 2243 "cplus.met"
                        tokenAhead = 0 ;
#line 2243 "cplus.met"
                    }
#line 2243 "cplus.met"
                    ReplaceTree(_ptRes1, 1, _ptTree1);
#line 2243 "cplus.met"
                    _ptTree0=_ptRes1;
#line 2243 "cplus.met"
                }
#line 2243 "cplus.met"
                _retValue =_ptTree0;
#line 2243 "cplus.met"
                goto range_modifier_function_ret;
#line 2243 "cplus.met"
            }
#line 2243 "cplus.met"
            break;
#line 2243 "cplus.met"
#line 2244 "cplus.met"
        case CONST : 
#line 2244 "cplus.met"
#line 2244 "cplus.met"
            {
#line 2244 "cplus.met"
                PPTREE _ptTree0=0;
#line 2244 "cplus.met"
                {
#line 2244 "cplus.met"
                    PPTREE _ptTree1=0,_ptRes1=0;
#line 2244 "cplus.met"
                    _ptRes1= MakeTree(RANGE_MODIFIER, 2);
#line 2244 "cplus.met"
                    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 2244 "cplus.met"
                    if (  !SEE_TOKEN( CONST,"const") || !(_ptTree1 = CommString(lexEl.string()))) {
#line 2244 "cplus.met"
                        MulFreeTree(3,_ptRes1,_ptTree1,_ptTree0);
                        TOKEN_EXIT(range_modifier_function_exit,"const")
#line 2244 "cplus.met"
                    } else {
#line 2244 "cplus.met"
                        tokenAhead = 0 ;
#line 2244 "cplus.met"
                    }
#line 2244 "cplus.met"
                    ReplaceTree(_ptRes1, 1, _ptTree1);
#line 2244 "cplus.met"
                    _ptTree0=_ptRes1;
#line 2244 "cplus.met"
                }
#line 2244 "cplus.met"
                _retValue =_ptTree0;
#line 2244 "cplus.met"
                goto range_modifier_function_ret;
#line 2244 "cplus.met"
            }
#line 2244 "cplus.met"
            break;
#line 2244 "cplus.met"
#line 2245 "cplus.met"
        case CONSTEXPR : 
#line 2245 "cplus.met"
#line 2245 "cplus.met"
            {
#line 2245 "cplus.met"
                PPTREE _ptTree0=0;
#line 2245 "cplus.met"
                {
#line 2245 "cplus.met"
                    PPTREE _ptTree1=0,_ptRes1=0;
#line 2245 "cplus.met"
                    _ptRes1= MakeTree(RANGE_MODIFIER, 2);
#line 2245 "cplus.met"
                    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 2245 "cplus.met"
                    if (  !SEE_TOKEN( CONSTEXPR,"constexpr") || !(_ptTree1 = CommString(lexEl.string()))) {
#line 2245 "cplus.met"
                        MulFreeTree(3,_ptRes1,_ptTree1,_ptTree0);
                        TOKEN_EXIT(range_modifier_function_exit,"constexpr")
#line 2245 "cplus.met"
                    } else {
#line 2245 "cplus.met"
                        tokenAhead = 0 ;
#line 2245 "cplus.met"
                    }
#line 2245 "cplus.met"
                    ReplaceTree(_ptRes1, 1, _ptTree1);
#line 2245 "cplus.met"
                    _ptTree0=_ptRes1;
#line 2245 "cplus.met"
                }
#line 2245 "cplus.met"
                _retValue =_ptTree0;
#line 2245 "cplus.met"
                goto range_modifier_function_ret;
#line 2245 "cplus.met"
            }
#line 2245 "cplus.met"
            break;
#line 2245 "cplus.met"
        default :
#line 2245 "cplus.met"
            CASE_EXIT(range_modifier_function_exit,"either inline or virtual or friend or const or constexpr")
#line 2245 "cplus.met"
            break;
#line 2245 "cplus.met"
    }
#line 2245 "cplus.met"
#line 2245 "cplus.met"
#line 2246 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2246 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 2246 "cplus.met"
return((PPTREE) 0);
#line 2246 "cplus.met"

#line 2246 "cplus.met"
range_modifier_function_exit :
#line 2246 "cplus.met"

#line 2246 "cplus.met"
    _Debug = TRACE_RULE("range_modifier_function",TRACE_EXIT,(PPTREE)0);
#line 2246 "cplus.met"
    _funcLevel--;
#line 2246 "cplus.met"
    return((PPTREE) -1) ;
#line 2246 "cplus.met"

#line 2246 "cplus.met"
range_modifier_function_ret :
#line 2246 "cplus.met"
    
#line 2246 "cplus.met"
    _Debug = TRACE_RULE("range_modifier_function",TRACE_RETURN,_retValue);
#line 2246 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2246 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 2246 "cplus.met"
    return _retValue ;
#line 2246 "cplus.met"
}
#line 2246 "cplus.met"

#line 2246 "cplus.met"
#line 2086 "cplus.met"
PPTREE cplus::range_modifier_ident ( int error_free)
#line 2086 "cplus.met"
{
#line 2086 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 2086 "cplus.met"
    int _value,_nbPre = 0 ;
#line 2086 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 2086 "cplus.met"
    int _Debug = TRACE_RULE("range_modifier_ident",TRACE_ENTER,(PPTREE)0);
#line 2086 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 2086 "cplus.met"
#line 2086 "cplus.met"
    PPTREE retTree = (PPTREE) 0,completeName = (PPTREE) 0;
#line 2086 "cplus.met"
#line 2088 "cplus.met"
    if (NPUSH_CALL_AFF_VERIF(retTree = ,_Tak(range_modifier), 127, cplus)){
#line 2088 "cplus.met"
#line 2089 "cplus.met"
        {
#line 2089 "cplus.met"
            PPTREE _ptTree0=0;
#line 2089 "cplus.met"
            {
#line 2089 "cplus.met"
                PPTREE _ptTree1=0;
#line 2089 "cplus.met"
                if ( (_ptTree1=NQUICK_CALL(_Tak(range_modifier_ident)(error_free), 129, cplus))== (PPTREE) -1 ) {
#line 2089 "cplus.met"
                    MulFreeTree(4,_ptTree1,_ptTree0,completeName,retTree);
                    PROG_EXIT(range_modifier_ident_exit,"range_modifier_ident")
#line 2089 "cplus.met"
                }
#line 2089 "cplus.met"
                _ptTree0=ReplaceTree(retTree , 2 , _ptTree1);
#line 2089 "cplus.met"
            }
#line 2089 "cplus.met"
            _retValue =_ptTree0;
#line 2089 "cplus.met"
            goto range_modifier_ident_ret;
#line 2089 "cplus.met"
        }
#line 2089 "cplus.met"
    } else {
#line 2089 "cplus.met"
#line 2091 "cplus.met"
#line 2092 "cplus.met"
        if (NPUSH_CALL_AFF_VERIF(completeName = ,_Tak(complete_class_name), 32, cplus)){
#line 2092 "cplus.met"
#line 2093 "cplus.met"
            {
#line 2093 "cplus.met"
                _retValue = completeName ;
#line 2093 "cplus.met"
                goto range_modifier_ident_ret;
#line 2093 "cplus.met"
                
#line 2093 "cplus.met"
            }
#line 2093 "cplus.met"
        }
#line 2093 "cplus.met"
#line 2093 "cplus.met"
    }
#line 2093 "cplus.met"
#line 2093 "cplus.met"
#line 2094 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2094 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 2094 "cplus.met"
return((PPTREE) 0);
#line 2094 "cplus.met"

#line 2094 "cplus.met"
range_modifier_ident_exit :
#line 2094 "cplus.met"

#line 2094 "cplus.met"
    _Debug = TRACE_RULE("range_modifier_ident",TRACE_EXIT,(PPTREE)0);
#line 2094 "cplus.met"
    _funcLevel--;
#line 2094 "cplus.met"
    return((PPTREE) -1) ;
#line 2094 "cplus.met"

#line 2094 "cplus.met"
range_modifier_ident_ret :
#line 2094 "cplus.met"
    
#line 2094 "cplus.met"
    _Debug = TRACE_RULE("range_modifier_ident",TRACE_RETURN,_retValue);
#line 2094 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2094 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 2094 "cplus.met"
    return _retValue ;
#line 2094 "cplus.met"
}
#line 2094 "cplus.met"

#line 2094 "cplus.met"
#line 822 "cplus.met"
PPTREE cplus::range_pragma ( int error_free)
#line 822 "cplus.met"
{
#line 822 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 822 "cplus.met"
    int _value,_nbPre = 0 ;
#line 822 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 822 "cplus.met"
    int _Debug = TRACE_RULE("range_pragma",TRACE_ENTER,(PPTREE)0);
#line 822 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 822 "cplus.met"
#line 823 "cplus.met"
    (tokenAhead == 8|| (LexPragma(),TRACE_LEX(1)));
#line 823 "cplus.met"
    if ( ! TERM_OR_META(PRAGMA_RANGE,"PRAGMA_RANGE") || !(CommTerm(),1)) {
#line 823 "cplus.met"
            TOKEN_EXIT(range_pragma_exit,"PRAGMA_RANGE")
#line 823 "cplus.met"
    } else {
#line 823 "cplus.met"
        tokenAhead = 0 ;
#line 823 "cplus.met"
    }
#line 823 "cplus.met"
#line 824 "cplus.met"
    (tokenAhead == 9|| (LexPragmaSmall(),TRACE_LEX(1)));
#line 824 "cplus.met"
    if ( ! TERM_OR_META(SMALL_PRAGMA_CONTENT,"SMALL_PRAGMA_CONTENT") || !(CommTerm(),1)) {
#line 824 "cplus.met"
            TOKEN_EXIT(range_pragma_exit,"SMALL_PRAGMA_CONTENT")
#line 824 "cplus.met"
    } else {
#line 824 "cplus.met"
        tokenAhead = 0 ;
#line 824 "cplus.met"
    }
#line 824 "cplus.met"
#line 825 "cplus.met"
     AnalyseRange(lexEl.string());
#line 825 "cplus.met"
#line 825 "cplus.met"
#line 825 "cplus.met"

#line 826 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 826 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 826 "cplus.met"
return((PPTREE) 0);
#line 826 "cplus.met"

#line 826 "cplus.met"
range_pragma_exit :
#line 826 "cplus.met"

#line 826 "cplus.met"
    _Debug = TRACE_RULE("range_pragma",TRACE_EXIT,(PPTREE)0);
#line 826 "cplus.met"
    _funcLevel--;
#line 826 "cplus.met"
    return((PPTREE) -1) ;
#line 826 "cplus.met"

#line 826 "cplus.met"
range_pragma_ret :
#line 826 "cplus.met"
    
#line 826 "cplus.met"
    _Debug = TRACE_RULE("range_pragma",TRACE_RETURN,_retValue);
#line 826 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 826 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 826 "cplus.met"
    return _retValue ;
#line 826 "cplus.met"
}
#line 826 "cplus.met"

#line 826 "cplus.met"
