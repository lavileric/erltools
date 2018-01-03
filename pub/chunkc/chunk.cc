/*************************************************************************/
/*                                                                       */
/*        Produced by MetaGen version 2.0  -    1989-1995                 */
/*       Syntaxic Analyzer Meta Generator developped by                  */
/*                  Eric Lavillonniere                                   */
/*                                                                       */
/*************************************************************************/

#include "token.h"
#include "chunk.h"


#line 109 "chunk.met"
PPTREE chunk::chunk_piece ( int error_free)
#line 109 "chunk.met"
{
#line 109 "chunk.met"
    int  _oldtakeCarriageComment = takeCarriageComment;
#line 109 "chunk.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 109 "chunk.met"
    int _value,_nbPre = 0 ;
#line 109 "chunk.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 109 "chunk.met"
    int _Debug = TRACE_RULE("chunk_piece",TRACE_ENTER,(PPTREE)0);
#line 109 "chunk.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 109 "chunk.met"
#line 109 "chunk.met"
    PPTREE retTree = (PPTREE) 0;
#line 109 "chunk.met"
#line 111 "chunk.met"
            if ( comment_start && comment_start < line)
#line 111 "chunk.met"
                               firstLine=comment_start ; else firstLine = line ;
#line 111 "chunk.met"
        
#line 111 "chunk.met"
#line 115 "chunk.met"
    {
#line 115 "chunk.met"
        takeCarriageComment = 0 ;
#line 115 "chunk.met"
#line 116 "chunk.met"
#line 117 "chunk.met"
        while (((tokenAhead && tokenAhead != -1)|| (c != EOF)) && 
#line 117 "chunk.met"
              ( ( !find_parenthesis || nb_parenthesis > 0) )) { 
#line 117 "chunk.met"
#line 118 "chunk.met"
#line 119 "chunk.met"
            if ((!tokenAhead || ExtUnputBuf ()) && (((c == '\\'))&& NextChar())){
#line 119 "chunk.met"
#line 119 "chunk.met"
            }
#line 119 "chunk.met"
#line 121 "chunk.met"
            (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 121 "chunk.met"
            switch( lexEl.Value) {
#line 121 "chunk.met"
#line 124 "chunk.met"
                case POUV : 
#line 124 "chunk.met"
                    tokenAhead = 0 ;
#line 124 "chunk.met"
                    CommTerm();
#line 124 "chunk.met"
#line 123 "chunk.met"
#line 124 "chunk.met"
                     find_parenthesis = 1; nb_parenthesis += 1;
#line 124 "chunk.met"
#line 124 "chunk.met"
                    break;
#line 124 "chunk.met"
#line 128 "chunk.met"
                case PFER : 
#line 128 "chunk.met"
                    tokenAhead = 0 ;
#line 128 "chunk.met"
                    CommTerm();
#line 128 "chunk.met"
#line 127 "chunk.met"
#line 128 "chunk.met"
                     nb_parenthesis -= 1;
#line 128 "chunk.met"
#line 128 "chunk.met"
                    break;
#line 128 "chunk.met"
#line 130 "chunk.met"
                case META : 
#line 130 "chunk.met"
                case CARRIAGE_RETURN : 
#line 130 "chunk.met"
#line 131 "chunk.met"
#line 132 "chunk.met"
                     comment_start = 0;
#line 132 "chunk.met"
#line 135 "chunk.met"
                    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 135 "chunk.met"
                    if ( ! TERM_OR_META(CARRIAGE_RETURN,"CARRIAGE_RETURN") || !(CommTerm(),1)) {
#line 135 "chunk.met"
                        MulFreeTree(1,retTree);
                        TOKEN_EXIT(chunk_piece_exit,"CARRIAGE_RETURN")
#line 135 "chunk.met"
                    } else {
#line 135 "chunk.met"
                        tokenAhead = 0 ;
#line 135 "chunk.met"
                    }
#line 135 "chunk.met"
#line 138 "chunk.met"
                     takeCarriageComment=1;
#line 138 "chunk.met"
#line 140 "chunk.met"
                    if (! find_parenthesis ){
#line 140 "chunk.met"
#line 141 "chunk.met"
#line 142 "chunk.met"
                         lexcommentCallLex=0;
#line 142 "chunk.met"
#line 143 "chunk.met"
                        {
#line 143 "chunk.met"
                            PPTREE _ptTree0=0;
#line 143 "chunk.met"
                            {
#line 143 "chunk.met"
                                PPTREE _ptRes1=0;
#line 143 "chunk.met"
                                _ptRes1= MakeTree(IDENT, 1);
#line 143 "chunk.met"
                                _ptTree0=_ptRes1;
#line 143 "chunk.met"
                            }
#line 143 "chunk.met"
                            _retValue =_ptTree0;
#line 143 "chunk.met"
                            goto chunk_piece_ret;
#line 143 "chunk.met"
                        }
#line 143 "chunk.met"
#line 143 "chunk.met"
#line 143 "chunk.met"
                    }
#line 143 "chunk.met"
#line 143 "chunk.met"
                    break;
#line 143 "chunk.met"
#line 148 "chunk.met"
                default : 
#line 148 "chunk.met"
#line 147 "chunk.met"
#line 148 "chunk.met"
                    if (!((tokenAhead && tokenAhead != -1)|| (c != EOF&& NextChar()))) {
#line 148 "chunk.met"
                        LEX_EXIT_GOTO (chunk_piece_exit,"")
#line 148 "chunk.met"
                    }
#line 148 "chunk.met"
#line 149 "chunk.met"
                    ptStockBuf = -1;
#line 149 "chunk.met"
                    lexEl.Erase();
#line 149 "chunk.met"
                    tokenAhead = 0;
#line 149 "chunk.met"
                    if ( lastContextPos && !lastContextPos->nbRef) FreePos(lastContextPos);
#line 149 "chunk.met"
                    lastContextPos = (PFILE_POSITION) 0 ;
#line 149 "chunk.met"
#line 149 "chunk.met"
                    break;
#line 149 "chunk.met"
            }
#line 149 "chunk.met"
#line 149 "chunk.met"
        } 
#line 149 "chunk.met"
#line 149 "chunk.met"
        takeCarriageComment =  _oldtakeCarriageComment;
#line 149 "chunk.met"
    }
#line 149 "chunk.met"
#line 154 "chunk.met"
    if (! (NPUSH_CALL_AFF_VERIF(retTree = ,_Tak(quick_compound), 130, chunk))){
#line 154 "chunk.met"
#line 155 "chunk.met"
#line 156 "chunk.met"
         comment_start = 0;
#line 156 "chunk.met"
#line 157 "chunk.met"
        (tokenAhead == 5|| (LexEndLine(),TRACE_LEX(1)));
#line 157 "chunk.met"
        if ( ! TERM_OR_META(END_LINE,"END_LINE") || !(CommTerm(),1)) {
#line 157 "chunk.met"
            MulFreeTree(1,retTree);
            TOKEN_EXIT(chunk_piece_exit,"END_LINE")
#line 157 "chunk.met"
        } else {
#line 157 "chunk.met"
            tokenAhead = 0 ;
#line 157 "chunk.met"
        }
#line 157 "chunk.met"
#line 158 "chunk.met"
         lexcommentCallLex=0;
#line 158 "chunk.met"
#line 159 "chunk.met"
        {
#line 159 "chunk.met"
            PPTREE _ptTree0=0;
#line 159 "chunk.met"
            {
#line 159 "chunk.met"
                PPTREE _ptRes1=0;
#line 159 "chunk.met"
                _ptRes1= MakeTree(IDENT, 1);
#line 159 "chunk.met"
                _ptTree0=_ptRes1;
#line 159 "chunk.met"
            }
#line 159 "chunk.met"
            _retValue =_ptTree0;
#line 159 "chunk.met"
            goto chunk_piece_ret;
#line 159 "chunk.met"
        }
#line 159 "chunk.met"
#line 159 "chunk.met"
#line 159 "chunk.met"
    } else {
#line 159 "chunk.met"
#line 162 "chunk.met"
#line 163 "chunk.met"
         FreeTree(retTree);_lastTree = (PTREE) 0;
#line 163 "chunk.met"
#line 163 "chunk.met"
    }
#line 163 "chunk.met"
#line 167 "chunk.met"
    if (        line >= refLine
#line 167 "chunk.met"
                         && (!comment_start || comment_start > refLine)
#line 167 "chunk.met"
           ){
#line 167 "chunk.met"
#line 172 "chunk.met"
#line 173 "chunk.met"
        
#line 173 "chunk.met"
        MulFreeTree(1,retTree);
        LEX_EXIT ("",0);
#line 173 "chunk.met"
        goto chunk_piece_exit;
#line 173 "chunk.met"
#line 173 "chunk.met"
#line 173 "chunk.met"
    }
#line 173 "chunk.met"
#line 175 "chunk.met"
    {
#line 175 "chunk.met"
        PPTREE _ptTree0=0;
#line 175 "chunk.met"
        {
#line 175 "chunk.met"
            PPTREE _ptRes1=0;
#line 175 "chunk.met"
            _ptRes1= MakeTree(IDENT, 1);
#line 175 "chunk.met"
            _ptTree0=_ptRes1;
#line 175 "chunk.met"
        }
#line 175 "chunk.met"
        _retValue =_ptTree0;
#line 175 "chunk.met"
        goto chunk_piece_ret;
#line 175 "chunk.met"
    }
#line 175 "chunk.met"
#line 175 "chunk.met"
#line 175 "chunk.met"

#line 176 "chunk.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 176 "chunk.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 176 "chunk.met"
takeCarriageComment =  _oldtakeCarriageComment;
#line 176 "chunk.met"
return((PPTREE) 0);
#line 176 "chunk.met"

#line 176 "chunk.met"
chunk_piece_exit :
#line 176 "chunk.met"

#line 176 "chunk.met"
    _Debug = TRACE_RULE("chunk_piece",TRACE_EXIT,(PPTREE)0);
#line 176 "chunk.met"
    _funcLevel--;
#line 176 "chunk.met"
    takeCarriageComment =  _oldtakeCarriageComment;
#line 176 "chunk.met"
    return((PPTREE) -1) ;
#line 176 "chunk.met"

#line 176 "chunk.met"
chunk_piece_ret :
#line 176 "chunk.met"
    
#line 176 "chunk.met"
    _Debug = TRACE_RULE("chunk_piece",TRACE_RETURN,_retValue);
#line 176 "chunk.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 176 "chunk.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 176 "chunk.met"
    takeCarriageComment =  _oldtakeCarriageComment;
#line 176 "chunk.met"
    return _retValue ;
#line 176 "chunk.met"
}
#line 176 "chunk.met"

#line 176 "chunk.met"
#line 213 "chunk.met"
PPTREE chunk::find_func ( int error_free)
#line 213 "chunk.met"
{
#line 213 "chunk.met"
    int  _oldtakeCarriageComment = takeCarriageComment;
#line 213 "chunk.met"
    int  _oldkeepCarriage = keepCarriage;
#line 213 "chunk.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 213 "chunk.met"
    int _value,_nbPre = 0 ;
#line 213 "chunk.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 213 "chunk.met"
    int _Debug = TRACE_RULE("find_func",TRACE_ENTER,(PPTREE)0);
#line 213 "chunk.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 213 "chunk.met"
#line 213 "chunk.met"
    PPTREE retTree = (PPTREE) 0;
#line 213 "chunk.met"
#line 215 "chunk.met"
     comment_start=0;oldLastLine = -1;
#line 215 "chunk.met"
#line 216 "chunk.met"
    {
#line 216 "chunk.met"
        takeCarriageComment = 1 ;
#line 216 "chunk.met"
#line 217 "chunk.met"
        {
#line 217 "chunk.met"
            keepCarriage = 1 ;
#line 217 "chunk.met"
#line 218 "chunk.met"
            while (((tokenAhead && tokenAhead != -1)|| (c != EOF)) && 
#line 218 "chunk.met"
                  (NPUSH_CALL_AFF_VERIF(retTree = ,_Tak(chunk_piece), 126, chunk))) { 
#line 218 "chunk.met"
#line 219 "chunk.met"
#line 220 "chunk.met"
                 FreeTree(retTree);_lastTree = (PTREE) 0;
#line 220 "chunk.met"
#line 221 "chunk.met"
                 find_parenthesis = 0; nb_parenthesis=0;
#line 221 "chunk.met"
#line 221 "chunk.met"
            } 
#line 221 "chunk.met"
            keepCarriage =  _oldkeepCarriage;
#line 221 "chunk.met"
        }
#line 221 "chunk.met"
        takeCarriageComment =  _oldtakeCarriageComment;
#line 221 "chunk.met"
    }
#line 221 "chunk.met"
#line 224 "chunk.met"
     yErr = 0;
#line 224 "chunk.met"
#line 227 "chunk.met"
    {
#line 227 "chunk.met"
        PPTREE _ptTree0=0;
#line 227 "chunk.met"
        {
#line 227 "chunk.met"
            PPTREE _ptTree1=0,_ptRes1=0;
#line 227 "chunk.met"
            _ptRes1= MakeTree(TOP, 1);
#line 227 "chunk.met"
            if ( (_ptTree1=NQUICK_CALL(_Tak(func_declaration)(error_free), 60, chunk))== (PPTREE) -1 ) {
#line 227 "chunk.met"
                MulFreeTree(4,_ptRes1,_ptTree1,_ptTree0,retTree);
                PROG_EXIT(find_func_exit,"find_func")
#line 227 "chunk.met"
            }
#line 227 "chunk.met"
            ReplaceTree(_ptRes1, 1, _ptTree1);
#line 227 "chunk.met"
            _ptTree0=_ptRes1;
#line 227 "chunk.met"
        }
#line 227 "chunk.met"
        _retValue =_ptTree0;
#line 227 "chunk.met"
        goto find_func_ret;
#line 227 "chunk.met"
    }
#line 227 "chunk.met"
#line 227 "chunk.met"
#line 228 "chunk.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 228 "chunk.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 228 "chunk.met"
takeCarriageComment =  _oldtakeCarriageComment;
#line 228 "chunk.met"
keepCarriage =  _oldkeepCarriage;
#line 228 "chunk.met"
return((PPTREE) 0);
#line 228 "chunk.met"

#line 228 "chunk.met"
find_func_exit :
#line 228 "chunk.met"

#line 228 "chunk.met"
    _Debug = TRACE_RULE("find_func",TRACE_EXIT,(PPTREE)0);
#line 228 "chunk.met"
    _funcLevel--;
#line 228 "chunk.met"
    takeCarriageComment =  _oldtakeCarriageComment;
#line 228 "chunk.met"
    keepCarriage =  _oldkeepCarriage;
#line 228 "chunk.met"
    return((PPTREE) -1) ;
#line 228 "chunk.met"

#line 228 "chunk.met"
find_func_ret :
#line 228 "chunk.met"
    
#line 228 "chunk.met"
    _Debug = TRACE_RULE("find_func",TRACE_RETURN,_retValue);
#line 228 "chunk.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 228 "chunk.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 228 "chunk.met"
    takeCarriageComment =  _oldtakeCarriageComment;
#line 228 "chunk.met"
    keepCarriage =  _oldkeepCarriage;
#line 228 "chunk.met"
    return _retValue ;
#line 228 "chunk.met"
}
#line 228 "chunk.met"

#line 228 "chunk.met"
#line 209 "chunk.met"
PPTREE chunk::main_entry ( int error_free)
#line 209 "chunk.met"
{
#line 209 "chunk.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 209 "chunk.met"
    int _value,_nbPre = 0 ;
#line 209 "chunk.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 209 "chunk.met"
    int _Debug = TRACE_RULE("main_entry",TRACE_ENTER,(PPTREE)0);
#line 209 "chunk.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 209 "chunk.met"
#line 210 "chunk.met"
    {
#line 210 "chunk.met"
        PPTREE _ptTree0=0;
#line 210 "chunk.met"
        if ( (_ptTree0=NQUICK_CALL(_Tak(find_func)(error_free), 128, chunk))== (PPTREE) -1 ) {
#line 210 "chunk.met"
            MulFreeTree(1,_ptTree0);
            PROG_EXIT(main_entry_exit,"main_entry")
#line 210 "chunk.met"
        }
#line 210 "chunk.met"
        _retValue =_ptTree0;
#line 210 "chunk.met"
        goto main_entry_ret;
#line 210 "chunk.met"
    }
#line 210 "chunk.met"
#line 210 "chunk.met"
#line 210 "chunk.met"

#line 211 "chunk.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 211 "chunk.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 211 "chunk.met"
return((PPTREE) 0);
#line 211 "chunk.met"

#line 211 "chunk.met"
main_entry_exit :
#line 211 "chunk.met"

#line 211 "chunk.met"
    _Debug = TRACE_RULE("main_entry",TRACE_EXIT,(PPTREE)0);
#line 211 "chunk.met"
    _funcLevel--;
#line 211 "chunk.met"
    return((PPTREE) -1) ;
#line 211 "chunk.met"

#line 211 "chunk.met"
main_entry_ret :
#line 211 "chunk.met"
    
#line 211 "chunk.met"
    _Debug = TRACE_RULE("main_entry",TRACE_RETURN,_retValue);
#line 211 "chunk.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 211 "chunk.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 211 "chunk.met"
    return _retValue ;
#line 211 "chunk.met"
}
#line 211 "chunk.met"

#line 211 "chunk.met"
#line 231 "chunk.met"
PPTREE chunk::nothing ( int error_free)
#line 231 "chunk.met"
{
#line 231 "chunk.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 231 "chunk.met"
    int _value,_nbPre = 0 ;
#line 231 "chunk.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 231 "chunk.met"
    int _Debug = TRACE_RULE("nothing",TRACE_ENTER,(PPTREE)0);
#line 231 "chunk.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 231 "chunk.met"
#line 231 "chunk.met"
    PPTREE node = (PPTREE) 0;
#line 231 "chunk.met"
#line 233 "chunk.met"
    {
#line 233 "chunk.met"
        _retValue = node ;
#line 233 "chunk.met"
        goto nothing_ret;
#line 233 "chunk.met"
        
#line 233 "chunk.met"
    }
#line 233 "chunk.met"
#line 233 "chunk.met"
#line 233 "chunk.met"

#line 234 "chunk.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 234 "chunk.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 234 "chunk.met"
return((PPTREE) 0);
#line 234 "chunk.met"

#line 234 "chunk.met"
nothing_exit :
#line 234 "chunk.met"

#line 234 "chunk.met"
    _Debug = TRACE_RULE("nothing",TRACE_EXIT,(PPTREE)0);
#line 234 "chunk.met"
    _funcLevel--;
#line 234 "chunk.met"
    return((PPTREE) -1) ;
#line 234 "chunk.met"

#line 234 "chunk.met"
nothing_ret :
#line 234 "chunk.met"
    
#line 234 "chunk.met"
    _Debug = TRACE_RULE("nothing",TRACE_RETURN,_retValue);
#line 234 "chunk.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 234 "chunk.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 234 "chunk.met"
    return _retValue ;
#line 234 "chunk.met"
}
#line 234 "chunk.met"

#line 234 "chunk.met"
#line 178 "chunk.met"
PPTREE chunk::quick_compound ( int error_free)
#line 178 "chunk.met"
{
#line 178 "chunk.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 178 "chunk.met"
    int _value,_nbPre = 0 ;
#line 178 "chunk.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 178 "chunk.met"
    int _Debug = TRACE_RULE("quick_compound",TRACE_ENTER,(PPTREE)0);
#line 178 "chunk.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 178 "chunk.met"
#line 181 "chunk.met"
    while ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&TERM_OR_META(CARRIAGE_RETURN,"CARRIAGE_RETURN") && (tokenAhead = 0,CommTerm(),1)) { 
#line 181 "chunk.met"
#line 181 "chunk.met"
    } 
#line 181 "chunk.met"
#line 183 "chunk.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 183 "chunk.met"
    if (  !SEE_TOKEN( AOUV,"{") || !(CommTerm(),1)) {
#line 183 "chunk.met"
            TOKEN_EXIT(quick_compound_exit,"{")
#line 183 "chunk.met"
    } else {
#line 183 "chunk.met"
        tokenAhead = 0 ;
#line 183 "chunk.met"
    }
#line 183 "chunk.met"
#line 184 "chunk.met"
     nb_parenthesis = 1;comment_start=0;
#line 184 "chunk.met"
#line 185 "chunk.met"
    while (((tokenAhead && tokenAhead != -1)|| (c != EOF)) && 
#line 185 "chunk.met"
          ( ( nb_parenthesis > 0) )) { 
#line 185 "chunk.met"
#line 186 "chunk.met"
#line 187 "chunk.met"
        if ((!tokenAhead || ExtUnputBuf ()) && (((c == '\\'))&& NextChar())){
#line 187 "chunk.met"
#line 187 "chunk.met"
        }
#line 187 "chunk.met"
#line 189 "chunk.met"
        (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 189 "chunk.met"
        switch( lexEl.Value) {
#line 189 "chunk.met"
#line 192 "chunk.met"
            case AOUV : 
#line 192 "chunk.met"
                tokenAhead = 0 ;
#line 192 "chunk.met"
                CommTerm();
#line 192 "chunk.met"
#line 191 "chunk.met"
#line 192 "chunk.met"
                 nb_parenthesis += 1;
#line 192 "chunk.met"
#line 192 "chunk.met"
                break;
#line 192 "chunk.met"
#line 196 "chunk.met"
            case AFER : 
#line 196 "chunk.met"
                tokenAhead = 0 ;
#line 196 "chunk.met"
                CommTerm();
#line 196 "chunk.met"
#line 195 "chunk.met"
#line 196 "chunk.met"
                 oldLastLine = lastLine = line ; nb_parenthesis -= 1;
#line 196 "chunk.met"
#line 196 "chunk.met"
                break;
#line 196 "chunk.met"
#line 200 "chunk.met"
            default : 
#line 200 "chunk.met"
#line 199 "chunk.met"
#line 200 "chunk.met"
                if (!((tokenAhead && tokenAhead != -1)|| (c != EOF&& NextChar()))) {
#line 200 "chunk.met"
                    LEX_EXIT_GOTO (quick_compound_exit,"")
#line 200 "chunk.met"
                }
#line 200 "chunk.met"
#line 201 "chunk.met"
                ptStockBuf = -1;
#line 201 "chunk.met"
                lexEl.Erase();
#line 201 "chunk.met"
                tokenAhead = 0;
#line 201 "chunk.met"
                if ( lastContextPos && !lastContextPos->nbRef) FreePos(lastContextPos);
#line 201 "chunk.met"
                lastContextPos = (PFILE_POSITION) 0 ;
#line 201 "chunk.met"
#line 201 "chunk.met"
                break;
#line 201 "chunk.met"
        }
#line 201 "chunk.met"
#line 201 "chunk.met"
    } 
#line 201 "chunk.met"
#line 205 "chunk.met"
     lexcommentCallLex=0;
#line 205 "chunk.met"
#line 206 "chunk.met"
    {
#line 206 "chunk.met"
        PPTREE _ptTree0=0;
#line 206 "chunk.met"
        {
#line 206 "chunk.met"
            PPTREE _ptRes1=0;
#line 206 "chunk.met"
            _ptRes1= MakeTree(IDENT, 1);
#line 206 "chunk.met"
            _ptTree0=_ptRes1;
#line 206 "chunk.met"
        }
#line 206 "chunk.met"
        _retValue =_ptTree0;
#line 206 "chunk.met"
        goto quick_compound_ret;
#line 206 "chunk.met"
    }
#line 206 "chunk.met"
#line 206 "chunk.met"
#line 206 "chunk.met"

#line 207 "chunk.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 207 "chunk.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 207 "chunk.met"
return((PPTREE) 0);
#line 207 "chunk.met"

#line 207 "chunk.met"
quick_compound_exit :
#line 207 "chunk.met"

#line 207 "chunk.met"
    _Debug = TRACE_RULE("quick_compound",TRACE_EXIT,(PPTREE)0);
#line 207 "chunk.met"
    _funcLevel--;
#line 207 "chunk.met"
    return((PPTREE) -1) ;
#line 207 "chunk.met"

#line 207 "chunk.met"
quick_compound_ret :
#line 207 "chunk.met"
    
#line 207 "chunk.met"
    _Debug = TRACE_RULE("quick_compound",TRACE_RETURN,_retValue);
#line 207 "chunk.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 207 "chunk.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 207 "chunk.met"
    return _retValue ;
#line 207 "chunk.met"
}
#line 207 "chunk.met"

#line 207 "chunk.met"
