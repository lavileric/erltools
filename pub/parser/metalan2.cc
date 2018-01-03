/*************************************************************************/
/*                                                                       */
/*        Produced by MetaGen version 2.0  -    1989-2006                 */
/*       Syntaxic Analyzer Meta Generator developped by                  */
/*                  Eric Lavillonniere                                   */
/*                                                                       */
/*************************************************************************/

#include "token.h"
#include "metalang.h"



#line 373 "metalang.met"

#line 373 "metalang.met"
int metalang::SortKeyWord (int defaultValue)
#line 373 "metalang.met"
{
#line 373 "metalang.met"
    register int Value;
#line 373 "metalang.met"
    Value = strcmp(lexEl.string(),"maketree");
#line 373 "metalang.met"
    if (Value > 0) {
#line 373 "metalang.met"
        Value = strcmp(lexEl.string(),"store_comment_line");
#line 373 "metalang.met"
        if (Value > 0) {
#line 373 "metalang.met"
            Value = strcmp(lexEl.string(),"until");
#line 373 "metalang.met"
            if (Value > 0) {
#line 373 "metalang.met"
                Value = strcmp(lexEl.string(),"with");
#line 373 "metalang.met"
                if (Value > 0) {
#line 373 "metalang.met"
                    if(!strcmp(lexEl.string(),"without")) {
#line 373 "metalang.met"
                        return(WITHOUT) ;
#line 373 "metalang.met"
                    }
#line 373 "metalang.met"
                } else if (Value < 0) {
#line 373 "metalang.met"
                    Value = strcmp(lexEl.string(),"while");
#line 373 "metalang.met"
                    if (Value > 0) {
#line 373 "metalang.met"
                        return(defaultValue);
#line 373 "metalang.met"
                    } else if (Value < 0) {
#line 373 "metalang.met"
                        if(!strcmp(lexEl.string(),"use")) {
#line 373 "metalang.met"
                            return(USE) ;
#line 373 "metalang.met"
                        }
#line 373 "metalang.met"
                    } else 
#line 373 "metalang.met"
                        return(WHILE);
#line 373 "metalang.met"
                } else 
#line 373 "metalang.met"
                    return(WITH);
#line 373 "metalang.met"
            } else if (Value < 0) {
#line 373 "metalang.met"
                Value = strcmp(lexEl.string(),"take");
#line 373 "metalang.met"
                if (Value > 0) {
#line 373 "metalang.met"
                    Value = strcmp(lexEl.string(),"then");
#line 373 "metalang.met"
                    if (Value > 0) {
#line 373 "metalang.met"
                        return(defaultValue);
#line 373 "metalang.met"
                    } else if (Value < 0) {
#line 373 "metalang.met"
                        if(!strcmp(lexEl.string(),"takel")) {
#line 373 "metalang.met"
                            return(TAKEL) ;
#line 373 "metalang.met"
                        }
#line 373 "metalang.met"
                    } else 
#line 373 "metalang.met"
                        return(THEN);
#line 373 "metalang.met"
                } else if (Value < 0) {
#line 373 "metalang.met"
                    Value = strcmp(lexEl.string(),"stringlex");
#line 373 "metalang.met"
                    if (Value > 0) {
#line 373 "metalang.met"
                        return(defaultValue);
#line 373 "metalang.met"
                    } else if (Value < 0) {
#line 373 "metalang.met"
                        if(!strcmp(lexEl.string(),"storel")) {
#line 373 "metalang.met"
                            return(STOREL) ;
#line 373 "metalang.met"
                        }
#line 373 "metalang.met"
                    } else 
#line 373 "metalang.met"
                        return(STRINGLEX);
#line 373 "metalang.met"
                } else 
#line 373 "metalang.met"
                    return(TAKE);
#line 373 "metalang.met"
            } else 
#line 373 "metalang.met"
                return(UNTIL);
#line 373 "metalang.met"
        } else if (Value < 0) {
#line 373 "metalang.met"
            Value = strcmp(lexEl.string(),"replacetree");
#line 373 "metalang.met"
            if (Value > 0) {
#line 373 "metalang.met"
                Value = strcmp(lexEl.string(),"see");
#line 373 "metalang.met"
                if (Value > 0) {
#line 373 "metalang.met"
                    Value = strcmp(lexEl.string(),"skip");
#line 373 "metalang.met"
                    if (Value > 0) {
#line 373 "metalang.met"
                        return(defaultValue);
#line 373 "metalang.met"
                    } else if (Value < 0) {
#line 373 "metalang.met"
                        if(!strcmp(lexEl.string(),"seel")) {
#line 373 "metalang.met"
                            return(SEEL) ;
#line 373 "metalang.met"
                        }
#line 373 "metalang.met"
                    } else 
#line 373 "metalang.met"
                        return(SKIP);
#line 373 "metalang.met"
                } else if (Value < 0) {
#line 373 "metalang.met"
                    Value = strcmp(lexEl.string(),"return");
#line 373 "metalang.met"
                    if (Value > 0) {
#line 373 "metalang.met"
                        return(defaultValue);
#line 373 "metalang.met"
                    } else if (Value < 0) {
#line 373 "metalang.met"
                        if(!strcmp(lexEl.string(),"resetl")) {
#line 373 "metalang.met"
                            return(RESETL) ;
#line 373 "metalang.met"
                        }
#line 373 "metalang.met"
                    } else 
#line 373 "metalang.met"
                        return(RETURN);
#line 373 "metalang.met"
                } else 
#line 373 "metalang.met"
                    return(SEE);
#line 373 "metalang.met"
            } else if (Value < 0) {
#line 373 "metalang.met"
                Value = strcmp(lexEl.string(),"recognize_string");
#line 373 "metalang.met"
                if (Value > 0) {
#line 373 "metalang.met"
                    Value = strcmp(lexEl.string(),"repeat");
#line 373 "metalang.met"
                    if (Value > 0) {
#line 373 "metalang.met"
                        return(defaultValue);
#line 373 "metalang.met"
                    } else if (Value < 0) {
#line 373 "metalang.met"
                        if(!strcmp(lexEl.string(),"recoverl")) {
#line 373 "metalang.met"
                            return(RECOVERL) ;
#line 373 "metalang.met"
                        }
#line 373 "metalang.met"
                    } else 
#line 373 "metalang.met"
                        return(REPEAT);
#line 373 "metalang.met"
                } else if (Value < 0) {
#line 373 "metalang.met"
                    Value = strcmp(lexEl.string(),"or");
#line 373 "metalang.met"
                    if (Value > 0) {
#line 373 "metalang.met"
                        return(defaultValue);
#line 373 "metalang.met"
                    } else if (Value < 0) {
#line 373 "metalang.met"
                        if(!strcmp(lexEl.string(),"not")) {
#line 373 "metalang.met"
                            return(NOT) ;
#line 373 "metalang.met"
                        }
#line 373 "metalang.met"
                    } else 
#line 373 "metalang.met"
                        return(OR);
#line 373 "metalang.met"
                } else 
#line 373 "metalang.met"
                    return(RECOGNIZE_STRING);
#line 373 "metalang.met"
            } else 
#line 373 "metalang.met"
                return(REPLACETREE);
#line 373 "metalang.met"
        } else 
#line 373 "metalang.met"
            return(STORE_COMMENT_LINE);
#line 373 "metalang.met"
    } else if (Value < 0) {
#line 373 "metalang.met"
        Value = strcmp(lexEl.string(),"define");
#line 373 "metalang.met"
        if (Value > 0) {
#line 373 "metalang.met"
            Value = strcmp(lexEl.string(),"global");
#line 373 "metalang.met"
            if (Value > 0) {
#line 373 "metalang.met"
                Value = strcmp(lexEl.string(),"language");
#line 373 "metalang.met"
                if (Value > 0) {
#line 373 "metalang.met"
                    if(!strcmp(lexEl.string(),"lexdefine")) {
#line 373 "metalang.met"
                        return(LEXDEFINE) ;
#line 373 "metalang.met"
                    }
#line 373 "metalang.met"
                } else if (Value < 0) {
#line 373 "metalang.met"
                    Value = strcmp(lexEl.string(),"in");
#line 373 "metalang.met"
                    if (Value > 0) {
#line 373 "metalang.met"
                        return(defaultValue);
#line 373 "metalang.met"
                    } else if (Value < 0) {
#line 373 "metalang.met"
                        if(!strcmp(lexEl.string(),"if")) {
#line 373 "metalang.met"
                            return(IF) ;
#line 373 "metalang.met"
                        }
#line 373 "metalang.met"
                    } else 
#line 373 "metalang.met"
                        return(IN);
#line 373 "metalang.met"
                } else 
#line 373 "metalang.met"
                    return(LANGUAGE);
#line 373 "metalang.met"
            } else if (Value < 0) {
#line 373 "metalang.met"
                Value = strcmp(lexEl.string(),"end");
#line 373 "metalang.met"
                if (Value > 0) {
#line 373 "metalang.met"
                    Value = strcmp(lexEl.string(),"forgetl");
#line 373 "metalang.met"
                    if (Value > 0) {
#line 373 "metalang.met"
                        return(defaultValue);
#line 373 "metalang.met"
                    } else if (Value < 0) {
#line 373 "metalang.met"
                        if(!strcmp(lexEl.string(),"forget")) {
#line 373 "metalang.met"
                            return(FORGET) ;
#line 373 "metalang.met"
                        }
#line 373 "metalang.met"
                    } else 
#line 373 "metalang.met"
                        return(FORGETL);
#line 373 "metalang.met"
                } else if (Value < 0) {
#line 373 "metalang.met"
                    Value = strcmp(lexEl.string(),"else");
#line 373 "metalang.met"
                    if (Value > 0) {
#line 373 "metalang.met"
                        return(defaultValue);
#line 373 "metalang.met"
                    } else if (Value < 0) {
#line 373 "metalang.met"
                        if(!strcmp(lexEl.string(),"do")) {
#line 373 "metalang.met"
                            return(DO) ;
#line 373 "metalang.met"
                        }
#line 373 "metalang.met"
                    } else 
#line 373 "metalang.met"
                        return(ELSE);
#line 373 "metalang.met"
                } else 
#line 373 "metalang.met"
                    return(END);
#line 373 "metalang.met"
            } else 
#line 373 "metalang.met"
                return(GLOBAL);
#line 373 "metalang.met"
        } else if (Value < 0) {
#line 373 "metalang.met"
            Value = strcmp(lexEl.string(),"break");
#line 373 "metalang.met"
            if (Value > 0) {
#line 373 "metalang.met"
                Value = strcmp(lexEl.string(),"context");
#line 373 "metalang.met"
                if (Value > 0) {
#line 373 "metalang.met"
                    Value = strcmp(lexEl.string(),"default");
#line 373 "metalang.met"
                    if (Value > 0) {
#line 373 "metalang.met"
                        return(defaultValue);
#line 373 "metalang.met"
                    } else if (Value < 0) {
#line 373 "metalang.met"
                        if(!strcmp(lexEl.string(),"declare")) {
#line 373 "metalang.met"
                            return(DECLARE) ;
#line 373 "metalang.met"
                        }
#line 373 "metalang.met"
                    } else 
#line 373 "metalang.met"
                        return(DEFAULT);
#line 373 "metalang.met"
                } else if (Value < 0) {
#line 373 "metalang.met"
                    Value = strcmp(lexEl.string(),"constant");
#line 373 "metalang.met"
                    if (Value > 0) {
#line 373 "metalang.met"
                        return(defaultValue);
#line 373 "metalang.met"
                    } else if (Value < 0) {
#line 373 "metalang.met"
                        if(!strcmp(lexEl.string(),"case")) {
#line 373 "metalang.met"
                            return(CASE) ;
#line 373 "metalang.met"
                        }
#line 373 "metalang.met"
                    } else 
#line 373 "metalang.met"
                        return(CONSTANT);
#line 373 "metalang.met"
                } else 
#line 373 "metalang.met"
                    return(CONTEXT);
#line 373 "metalang.met"
            } else if (Value < 0) {
#line 373 "metalang.met"
                Value = strcmp(lexEl.string(),"and");
#line 373 "metalang.met"
                if (Value > 0) {
#line 373 "metalang.met"
                    Value = strcmp(lexEl.string(),"begin");
#line 373 "metalang.met"
                    if (Value > 0) {
#line 373 "metalang.met"
                        return(defaultValue);
#line 373 "metalang.met"
                    } else if (Value < 0) {
#line 373 "metalang.met"
                        if(!strcmp(lexEl.string(),"at_beginning")) {
#line 373 "metalang.met"
                            return(AT_BEGINNING) ;
#line 373 "metalang.met"
                        }
#line 373 "metalang.met"
                    } else 
#line 373 "metalang.met"
                        return(BEGIN);
#line 373 "metalang.met"
                } else if (Value < 0) {
#line 373 "metalang.met"
                    Value = strcmp(lexEl.string(),"addlist");
#line 373 "metalang.met"
                    if (Value > 0) {
#line 373 "metalang.met"
                        return(defaultValue);
#line 373 "metalang.met"
                    } else if (Value < 0) {
#line 373 "metalang.met"
                        if(!strcmp(lexEl.string(),"+____------____")) {
#line 373 "metalang.met"
                            return(PLUS____TIRETIRETIRETIRETIRETIRE____) ;
#line 373 "metalang.met"
                        }
#line 373 "metalang.met"
                    } else 
#line 373 "metalang.met"
                        return(ADDLIST);
#line 373 "metalang.met"
                } else 
#line 373 "metalang.met"
                    return(AND);
#line 373 "metalang.met"
            } else 
#line 373 "metalang.met"
                return(BREAK);
#line 373 "metalang.met"
        } else 
#line 373 "metalang.met"
            return(DEFINE);
#line 373 "metalang.met"
    } else 
#line 373 "metalang.met"
        return(MAKETREE);
#line 373 "metalang.met"
    return(defaultValue);
#line 373 "metalang.met"
}
#line 373 "metalang.met"

#line 373 "metalang.met"
int metalang::UpSortKeyWord(int value) 
#line 373 "metalang.met"
{
#line 373 "metalang.met"
    register char * ptSource=lexEl.string();
#line 373 "metalang.met"
    for (;*ptSource;ptSource++) *ptSource = toupper(*ptSource);
#line 373 "metalang.met"
    return SortKeyWord (value);
#line 373 "metalang.met"
}
#line 373 "metalang.met"
#line 159 "metalang.met"
int metalang::Lex ()
#line 159 "metalang.met"
{
#line 159 "metalang.met"
    if ( lastContextPos && !lastContextPos -> nbRef )
#line 159 "metalang.met"
        FreePos(lastContextPos);
#line 159 "metalang.met"
    lastContextPos = (PFILE_POSITION)0 ;
#line 159 "metalang.met"
    if ( tokenAhead)
#line 159 "metalang.met"
        ExtUnputBuf();
#line 159 "metalang.met"
    #ifdef DUMP_COORD
#line 159 "metalang.met"
    if(!lexCallLex && dumpCoord) store_pos_as_comment(line,col,0);
#line 159 "metalang.met"
    #endif
#line 159 "metalang.met"
    
#line 159 "metalang.met"
    int _bidon = (oldLine = line,oldCol = col );
#line 159 "metalang.met"
    int _bidon1 = (oldLineEntry = line, oldColEntry = col );
#line 159 "metalang.met"
    tokenAhead = 0;
#line 159 "metalang.met"
    if(LexMeta() != -1){tokenAhead =1; return 1;}
#line 159 "metalang.met"
#line 159 "metalang.met"
    ptStockBuf = -1;
#line 159 "metalang.met"
    while ((c == ' ')||(c == '\t')||(c == '\r')||(c == '\n'))
#line 159 "metalang.met"
        NextChar() ;
#line 159 "metalang.met"
    ptStockBuf = -1;
#line 159 "metalang.met"
    lexEl.Erase();
#line 159 "metalang.met"
    tokenAhead = 0;
#line 159 "metalang.met"
    oldLine=line,oldCol=col;
#line 159 "metalang.met"
    if ( !lexCallLex) {
#line 159 "metalang.met"
        PUT_COORD_CALL;
#line 159 "metalang.met"
    }
#line 159 "metalang.met"
#line 161 "metalang.met"
    int keepCurrCol = col ;
#line 161 "metalang.met"
    switch(c) {
#line 161 "metalang.met"
        case '{' :
#line 161 "metalang.met"
            NextChar();
#line 161 "metalang.met"
            if (GetStringS("{",1)) {
#line 161 "metalang.met"
                lexEl.Value = metalang::AOUVAOUV;
#line 161 "metalang.met"
                firstOnLine = 0;
#line 161 "metalang.met"
                tokenAhead = 1;
#line 161 "metalang.met"
                PUT_COORD_CALL;
#line 161 "metalang.met"
                return(1);
#line 161 "metalang.met"
            } else {
#line 161 "metalang.met"
                UnputChar(1);
#line 161 "metalang.met"
                goto _exitDumpToken0;
#line 161 "metalang.met"
            }
#line 161 "metalang.met"
            break;
#line 161 "metalang.met"
        case '}' :
#line 161 "metalang.met"
            NextChar();
#line 161 "metalang.met"
            if (GetStringS("}",1)) {
#line 161 "metalang.met"
                lexEl.Value = metalang::AFERAFER;
#line 161 "metalang.met"
                firstOnLine = 0;
#line 161 "metalang.met"
                tokenAhead = 1;
#line 161 "metalang.met"
                PUT_COORD_CALL;
#line 161 "metalang.met"
                return(1);
#line 161 "metalang.met"
            } else {
#line 161 "metalang.met"
                UnputChar(1);
#line 161 "metalang.met"
                goto _exitDumpToken0;
#line 161 "metalang.met"
            }
#line 161 "metalang.met"
            break;
#line 161 "metalang.met"
        case ';' :
#line 161 "metalang.met"
            NextChar();
#line 161 "metalang.met"
            lexEl.Value = metalang::PVIR;
#line 161 "metalang.met"
            firstOnLine = 0;
#line 161 "metalang.met"
            tokenAhead = 1;
#line 161 "metalang.met"
            PUT_COORD_CALL;
#line 161 "metalang.met"
            return(1);
#line 161 "metalang.met"
            break;
#line 161 "metalang.met"
        case '[' :
#line 161 "metalang.met"
            NextChar();
#line 161 "metalang.met"
            lexEl.Value = metalang::COUV;
#line 161 "metalang.met"
            firstOnLine = 0;
#line 161 "metalang.met"
            tokenAhead = 1;
#line 161 "metalang.met"
            PUT_COORD_CALL;
#line 161 "metalang.met"
            return(1);
#line 161 "metalang.met"
            break;
#line 161 "metalang.met"
        case ']' :
#line 161 "metalang.met"
            NextChar();
#line 161 "metalang.met"
            lexEl.Value = metalang::CFER;
#line 161 "metalang.met"
            firstOnLine = 0;
#line 161 "metalang.met"
            tokenAhead = 1;
#line 161 "metalang.met"
            PUT_COORD_CALL;
#line 161 "metalang.met"
            return(1);
#line 161 "metalang.met"
            break;
#line 161 "metalang.met"
        case ',' :
#line 161 "metalang.met"
            NextChar();
#line 161 "metalang.met"
            lexEl.Value = metalang::VIRG;
#line 161 "metalang.met"
            firstOnLine = 0;
#line 161 "metalang.met"
            tokenAhead = 1;
#line 161 "metalang.met"
            PUT_COORD_CALL;
#line 161 "metalang.met"
            return(1);
#line 161 "metalang.met"
            break;
#line 161 "metalang.met"
        case '(' :
#line 161 "metalang.met"
            NextChar();
#line 161 "metalang.met"
            lexEl.Value = metalang::POUV;
#line 161 "metalang.met"
            firstOnLine = 0;
#line 161 "metalang.met"
            tokenAhead = 1;
#line 161 "metalang.met"
            PUT_COORD_CALL;
#line 161 "metalang.met"
            return(1);
#line 161 "metalang.met"
            break;
#line 161 "metalang.met"
        case ')' :
#line 161 "metalang.met"
            NextChar();
#line 161 "metalang.met"
            lexEl.Value = metalang::PFER;
#line 161 "metalang.met"
            firstOnLine = 0;
#line 161 "metalang.met"
            tokenAhead = 1;
#line 161 "metalang.met"
            PUT_COORD_CALL;
#line 161 "metalang.met"
            return(1);
#line 161 "metalang.met"
            break;
#line 161 "metalang.met"
        case '#' :
#line 161 "metalang.met"
            NextChar();
#line 161 "metalang.met"
            lexEl.Value = metalang::DIES;
#line 161 "metalang.met"
            firstOnLine = 0;
#line 161 "metalang.met"
            tokenAhead = 1;
#line 161 "metalang.met"
            PUT_COORD_CALL;
#line 161 "metalang.met"
            return(1);
#line 161 "metalang.met"
            break;
#line 161 "metalang.met"
        case '!' :
#line 161 "metalang.met"
            NextChar();
#line 161 "metalang.met"
            lexEl.Value = metalang::EXCL;
#line 161 "metalang.met"
            firstOnLine = 0;
#line 161 "metalang.met"
            tokenAhead = 1;
#line 161 "metalang.met"
            PUT_COORD_CALL;
#line 161 "metalang.met"
            return(1);
#line 161 "metalang.met"
            break;
#line 161 "metalang.met"
        case '.' :
#line 161 "metalang.met"
            NextChar();
#line 161 "metalang.met"
            lexEl.Value = metalang::POIN;
#line 161 "metalang.met"
            firstOnLine = 0;
#line 161 "metalang.met"
            tokenAhead = 1;
#line 161 "metalang.met"
            PUT_COORD_CALL;
#line 161 "metalang.met"
            return(1);
#line 161 "metalang.met"
            break;
#line 161 "metalang.met"
        case '=' :
#line 161 "metalang.met"
            NextChar();
#line 161 "metalang.met"
            lexEl.Value = metalang::EGAL;
#line 161 "metalang.met"
            firstOnLine = 0;
#line 161 "metalang.met"
            tokenAhead = 1;
#line 161 "metalang.met"
            PUT_COORD_CALL;
#line 161 "metalang.met"
            return(1);
#line 161 "metalang.met"
            break;
#line 161 "metalang.met"
        case ':' :
#line 161 "metalang.met"
            NextChar();
#line 161 "metalang.met"
            lexEl.Value = metalang::DPOI;
#line 161 "metalang.met"
            firstOnLine = 0;
#line 161 "metalang.met"
            tokenAhead = 1;
#line 161 "metalang.met"
            PUT_COORD_CALL;
#line 161 "metalang.met"
            return(1);
#line 161 "metalang.met"
            break;
#line 161 "metalang.met"
        _exitDumpToken0 :;
#line 161 "metalang.met"
        default :
#line 161 "metalang.met"
            break;
#line 161 "metalang.met"
    }
#line 161 "metalang.met"
    col = keepCurrCol ;
#line 161 "metalang.met"
    if(ptStockBuf > -1) UnputBuf ();
#line 161 "metalang.met"
    lexEl.Erase();
#line 161 "metalang.met"
    tokenAhead = 0;
#line 161 "metalang.met"
    if ( lastContextPos && !lastContextPos->nbRef) FreePos(lastContextPos);
#line 161 "metalang.met"
    lastContextPos = (PFILE_POSITION) 0 ;
#line 161 "metalang.met"
#line 162 "metalang.met"
#line 163 "metalang.met"
    if(((('a' <= c && c <= 'z')||('A' <= c && c <= 'Z')))){
#line 163 "metalang.met"
#line 164 "metalang.met"
#line 166 "metalang.met"
        while ((('a' <= c && c <= 'z')||('A' <= c && c <= 'Z')||(c == '_')||('0' <= c && c <= '9'))) { 
#line 166 "metalang.met"
#line 167 "metalang.met"
#line 168 "metalang.met"
            {
#line 168 "metalang.met"
                lexEl . AddChar(c);
#line 168 "metalang.met"
                NextChar();
#line 168 "metalang.met"
            }
#line 168 "metalang.met"
#line 169 "metalang.met"
            if (GetString("::",1)&& NextChar()){
#line 169 "metalang.met"
#line 170 "metalang.met"
                {
#line 170 "metalang.met"
                    lexEl.AddString("::");
#line 170 "metalang.met"
                }
#line 170 "metalang.met"
            }
#line 170 "metalang.met"
#line 170 "metalang.met"
        } 
#line 170 "metalang.met"
#line 172 "metalang.met"
        {
#line 172 "metalang.met"
            firstOnLine = 0 ; 
#line 172 "metalang.met"
            tokenAhead =1;
#line 172 "metalang.met"
            lexEl.Value = (SortKeyWord (IDENT ));
#line 172 "metalang.met"
            PUT_COORD_CALL;
#line 172 "metalang.met"
            return(1);
#line 172 "metalang.met"
        }
#line 172 "metalang.met"
#line 172 "metalang.met"
    } else 
#line 172 "metalang.met"
#line 174 "metalang.met"
    if((((c == '"'))&& NextChar())){
#line 174 "metalang.met"
#line 176 "metalang.met"
        while (c != EOF) { 
#line 176 "metalang.met"
#line 178 "metalang.met"
            switch (c) {
#line 178 "metalang.met"
#line 179 "metalang.met"
                case '"' :
#line 179 "metalang.met"
                    NextChar();
#line 179 "metalang.met"
#line 180 "metalang.met"
                    if (((c == '"'))){
#line 180 "metalang.met"
#line 181 "metalang.met"
#line 182 "metalang.met"
                        {
#line 182 "metalang.met"
                            lexEl.AddString("\\");
#line 182 "metalang.met"
                        }
#line 182 "metalang.met"
#line 183 "metalang.met"
                        {
#line 183 "metalang.met"
                            lexEl . AddChar(c);
#line 183 "metalang.met"
                            NextChar();
#line 183 "metalang.met"
                        }
#line 183 "metalang.met"
#line 183 "metalang.met"
#line 183 "metalang.met"
                    } else {
#line 183 "metalang.met"
#line 186 "metalang.met"
#line 187 "metalang.met"
                        {
#line 187 "metalang.met"
                            firstOnLine = 0 ; 
#line 187 "metalang.met"
                            tokenAhead =1;
#line 187 "metalang.met"
                            lexEl.Value=STRING;
#line 187 "metalang.met"
                            PUT_COORD_CALL;
#line 187 "metalang.met"
                            return(1);
#line 187 "metalang.met"
                        }
#line 187 "metalang.met"
#line 187 "metalang.met"
                    }
#line 187 "metalang.met"
                    break ;
#line 187 "metalang.met"
#line 189 "metalang.met"
                default : 
#line 189 "metalang.met"
                     if (c!= EOF) {
#line 189 "metalang.met"
#line 189 "metalang.met"
                        {
#line 189 "metalang.met"
                            lexEl . AddChar(c);
#line 189 "metalang.met"
                            NextChar();
#line 189 "metalang.met"
                        }
#line 189 "metalang.met"
                    }
#line 189 "metalang.met"
                    break ;
#line 189 "metalang.met"
            }
#line 189 "metalang.met"
        } 
#line 189 "metalang.met"
    } else 
#line 189 "metalang.met"
#line 191 "metalang.met"
    if((GetString("'",1)&& NextChar())){
#line 191 "metalang.met"
#line 193 "metalang.met"
        while (c != EOF) { 
#line 193 "metalang.met"
#line 195 "metalang.met"
#line 196 "metalang.met"
            if((GetString("'",1)&& NextChar())){
#line 196 "metalang.met"
#line 197 "metalang.met"
#line 198 "metalang.met"
                {
#line 198 "metalang.met"
                    firstOnLine = 0 ; 
#line 198 "metalang.met"
                    tokenAhead =1;
#line 198 "metalang.met"
                    lexEl.Value=CHARACTER;
#line 198 "metalang.met"
                    PUT_COORD_CALL;
#line 198 "metalang.met"
                    return(1);
#line 198 "metalang.met"
                }
#line 198 "metalang.met"
#line 198 "metalang.met"
            } else 
#line 198 "metalang.met"
#line 200 "metalang.met"
            if((((c == '\\'))&& NextChar())){
#line 200 "metalang.met"
#line 201 "metalang.met"
#line 202 "metalang.met"
                {
#line 202 "metalang.met"
                    lexEl.AddString("\\");
#line 202 "metalang.met"
                }
#line 202 "metalang.met"
#line 203 "metalang.met"
                {
#line 203 "metalang.met"
                    lexEl . AddChar(c);
#line 203 "metalang.met"
                    NextChar();
#line 203 "metalang.met"
                }
#line 203 "metalang.met"
#line 203 "metalang.met"
            } else 
#line 203 "metalang.met"
#line 205 "metalang.met"
            if((c != EOF)){
#line 205 "metalang.met"
#line 205 "metalang.met"
                {
#line 205 "metalang.met"
                    lexEl . AddChar(c);
#line 205 "metalang.met"
                    NextChar();
#line 205 "metalang.met"
                }
#line 205 "metalang.met"
            } else 
#line 205 "metalang.met"
             ;
#line 205 "metalang.met"
        } 
#line 205 "metalang.met"
    } else 
#line 205 "metalang.met"
#line 207 "metalang.met"
    if(((('0' <= c && c <= '9')))){
#line 207 "metalang.met"
#line 209 "metalang.met"
#line 211 "metalang.met"
        while ((('0' <= c && c <= '9'))) { 
#line 211 "metalang.met"
#line 212 "metalang.met"
            {
#line 212 "metalang.met"
                lexEl . AddChar(c);
#line 212 "metalang.met"
                NextChar();
#line 212 "metalang.met"
            }
#line 212 "metalang.met"
        } 
#line 212 "metalang.met"
#line 213 "metalang.met"
        {
#line 213 "metalang.met"
            firstOnLine = 0 ; 
#line 213 "metalang.met"
            tokenAhead =1;
#line 213 "metalang.met"
            lexEl.Value=NUMB;
#line 213 "metalang.met"
            PUT_COORD_CALL;
#line 213 "metalang.met"
            return(1);
#line 213 "metalang.met"
        }
#line 213 "metalang.met"
#line 213 "metalang.met"
    } else 
#line 213 "metalang.met"
     ;
#line 213 "metalang.met"
#line 213 "metalang.met"
#line 215 "metalang.met"
    line = oldLine;
#line 215 "metalang.met"
    LEX_EXIT(0,"")
#line 215 "metalang.met"
    lexEl.Value = -1 ;
#line 215 "metalang.met"
    return -1 ; 
#line 215 "metalang.met"
}
#line 215 "metalang.met"

#line 215 "metalang.met"
#line 51 "metalang.met"
int metalang::LexAsitContent ()
#line 51 "metalang.met"
{
#line 51 "metalang.met"
    if ( lastContextPos && !lastContextPos -> nbRef )
#line 51 "metalang.met"
        FreePos(lastContextPos);
#line 51 "metalang.met"
    lastContextPos = (PFILE_POSITION)0 ;
#line 51 "metalang.met"
    if ( tokenAhead)
#line 51 "metalang.met"
        ExtUnputBuf();
#line 51 "metalang.met"
    #ifdef DUMP_COORD
#line 51 "metalang.met"
    if(!lexCallLex && dumpCoord) store_pos_as_comment(line,col,0);
#line 51 "metalang.met"
    #endif
#line 51 "metalang.met"
    
#line 51 "metalang.met"
    int _bidon = (oldLine = line,oldCol = col );
#line 51 "metalang.met"
    int _bidon1 = (oldLineEntry = line, oldColEntry = col );
#line 51 "metalang.met"
    tokenAhead = 0;
#line 51 "metalang.met"
    if(LexMeta() != -1){tokenAhead =2; return 1;}
#line 51 "metalang.met"
#line 51 "metalang.met"
    ptStockBuf = -1;
#line 51 "metalang.met"
    while ((c == '\r')||(c == '\n'))
#line 51 "metalang.met"
        NextChar() ;
#line 51 "metalang.met"
    ptStockBuf = -1;
#line 51 "metalang.met"
    lexEl.Erase();
#line 51 "metalang.met"
    tokenAhead = 0;
#line 51 "metalang.met"
    oldLine=line,oldCol=col;
#line 51 "metalang.met"
    if ( !lexCallLex) {
#line 51 "metalang.met"
        PUT_COORD_CALL;
#line 51 "metalang.met"
    }
#line 51 "metalang.met"
#line 53 "metalang.met"
    if (! (GetString("}}",0))){
#line 53 "metalang.met"
#line 54 "metalang.met"
#line 55 "metalang.met"
        while ((c != EOF) && 
#line 55 "metalang.met"
              (! (GetString("}}",0)))) { 
#line 55 "metalang.met"
#line 56 "metalang.met"
#line 57 "metalang.met"
            if (! (((c == '\r')||(c == '\n')))){
#line 57 "metalang.met"
#line 58 "metalang.met"
                {
#line 58 "metalang.met"
                    lexEl . AddChar(c);
#line 58 "metalang.met"
                    NextChar();
#line 58 "metalang.met"
                }
#line 58 "metalang.met"
            } else {
#line 58 "metalang.met"
#line 60 "metalang.met"
                if (!(c != EOF&& NextChar())) ;
#line 60 "metalang.met"
            }
#line 60 "metalang.met"
#line 61 "metalang.met"
            if (col == 1 ){
#line 61 "metalang.met"
#line 62 "metalang.met"
                {
#line 62 "metalang.met"
                    firstOnLine = 0 ; 
#line 62 "metalang.met"
                    tokenAhead =2;
#line 62 "metalang.met"
                    lexEl.Value=ASIT_CONTENT;
#line 62 "metalang.met"
                    PUT_COORD_CALL;
#line 62 "metalang.met"
                    return(1);
#line 62 "metalang.met"
                }
#line 62 "metalang.met"
            }
#line 62 "metalang.met"
#line 62 "metalang.met"
        } 
#line 62 "metalang.met"
#line 64 "metalang.met"
        {
#line 64 "metalang.met"
            firstOnLine = 0 ; 
#line 64 "metalang.met"
            tokenAhead =2;
#line 64 "metalang.met"
            lexEl.Value=ASIT_CONTENT;
#line 64 "metalang.met"
            PUT_COORD_CALL;
#line 64 "metalang.met"
            return(1);
#line 64 "metalang.met"
        }
#line 64 "metalang.met"
#line 64 "metalang.met"
#line 64 "metalang.met"
    }
#line 64 "metalang.met"
#line 64 "metalang.met"
#line 65 "metalang.met"
    line = oldLine;
#line 65 "metalang.met"
    LEX_EXIT(0,"")
#line 65 "metalang.met"
    lexEl.Value = -1 ;
#line 65 "metalang.met"
    return -1 ; 
#line 65 "metalang.met"
}
#line 65 "metalang.met"

#line 65 "metalang.met"
#line 68 "metalang.met"
int metalang::LexComment ()
#line 68 "metalang.met"
{
#line 68 "metalang.met"
    if ( lastContextPos && !lastContextPos -> nbRef )
#line 68 "metalang.met"
        FreePos(lastContextPos);
#line 68 "metalang.met"
    lastContextPos = (PFILE_POSITION)0 ;
#line 68 "metalang.met"
    if ( tokenAhead)
#line 68 "metalang.met"
        ExtUnputBuf();
#line 68 "metalang.met"
    #ifdef DUMP_COORD
#line 68 "metalang.met"
    if(!lexCallLex && dumpCoord) store_pos_as_comment(line,col,0);
#line 68 "metalang.met"
    #endif
#line 68 "metalang.met"
    
#line 68 "metalang.met"
    int _bidon = (oldLine = line,oldCol = col );
#line 68 "metalang.met"
    int _bidon1 = (oldLineEntry = line, oldColEntry = col );
#line 68 "metalang.met"
#line 69 "metalang.met"
    if (keepSpace){
#line 69 "metalang.met"
#line 70 "metalang.met"
        ptStockBuf = -1;
#line 70 "metalang.met"
        while ((c == '\r')||(c == '\n'))
#line 70 "metalang.met"
            NextChar() ;
#line 70 "metalang.met"
        ptStockBuf = -1;
#line 70 "metalang.met"
        lexEl.Erase();
#line 70 "metalang.met"
        tokenAhead = 0;
#line 70 "metalang.met"
        oldLine=line,oldCol=col;
#line 70 "metalang.met"
        if ( !lexCallLex) {
#line 70 "metalang.met"
            PUT_COORD_CALL;
#line 70 "metalang.met"
        }
#line 70 "metalang.met"
#line 70 "metalang.met"
    } else {
#line 70 "metalang.met"
#line 72 "metalang.met"
        ptStockBuf = -1;
#line 72 "metalang.met"
        while ((c == ' ')||(c == '\t')||(c == '\r')||(c == '\n'))
#line 72 "metalang.met"
            NextChar() ;
#line 72 "metalang.met"
        ptStockBuf = -1;
#line 72 "metalang.met"
        lexEl.Erase();
#line 72 "metalang.met"
        tokenAhead = 0;
#line 72 "metalang.met"
        oldLine=line,oldCol=col;
#line 72 "metalang.met"
        if ( !lexCallLex) {
#line 72 "metalang.met"
            PUT_COORD_CALL;
#line 72 "metalang.met"
        }
#line 72 "metalang.met"
    }
#line 72 "metalang.met"
#line 73 "metalang.met"
#line 74 "metalang.met"
    if((GetString("/*",1)&& NextChar())){
#line 74 "metalang.met"
#line 76 "metalang.met"
#line 78 "metalang.met"
         {int level = 0; 
#line 78 "metalang.met"
#line 79 "metalang.met"
        begin_comment ();
#line 79 "metalang.met"
#line 80 "metalang.met"
        while (c != EOF) { 
#line 80 "metalang.met"
#line 81 "metalang.met"
#line 82 "metalang.met"
            if((GetString("/*",1)&& NextChar())){
#line 82 "metalang.met"
#line 83 "metalang.met"
#line 84 "metalang.met"
                 level ++; 
#line 84 "metalang.met"
#line 85 "metalang.met"
                {
#line 85 "metalang.met"
                    lexEl.AddString("/*");
#line 85 "metalang.met"
                }
#line 85 "metalang.met"
#line 85 "metalang.met"
            } else 
#line 85 "metalang.met"
#line 87 "metalang.met"
            if((GetString("*/",1)&& NextChar())){
#line 87 "metalang.met"
#line 88 "metalang.met"
#line 89 "metalang.met"
                if (!level ){
#line 89 "metalang.met"
#line 90 "metalang.met"
#line 91 "metalang.met"
                    {
#line 91 "metalang.met"
                        store_comment_line(lexEl.length());
#line 91 "metalang.met"
                        lexEl.Erase();
#line 91 "metalang.met"
                        ptStockBuf = -1 ;
#line 91 "metalang.met"
                    }
#line 91 "metalang.met"
#line 92 "metalang.met"
                    {
#line 92 "metalang.met"
                        firstOnLine = 0 ; 
#line 92 "metalang.met"
                        tokenAhead =3;
#line 92 "metalang.met"
                         tokenAhead = 0 ; 
#line 92 "metalang.met"
                         lexCallLex = 1 ; 
#line 92 "metalang.met"
                        return _Tak(LexComment)();
#line 92 "metalang.met"
                    }
#line 92 "metalang.met"
#line 92 "metalang.met"
#line 92 "metalang.met"
                } else {
#line 92 "metalang.met"
#line 95 "metalang.met"
#line 96 "metalang.met"
                     level --;
#line 96 "metalang.met"
#line 97 "metalang.met"
                    {
#line 97 "metalang.met"
                        lexEl.AddString("*/");
#line 97 "metalang.met"
                    }
#line 97 "metalang.met"
#line 97 "metalang.met"
                }
#line 97 "metalang.met"
#line 97 "metalang.met"
            } else 
#line 97 "metalang.met"
#line 100 "metalang.met"
            if((((c == '\n'))&& NextChar())){
#line 100 "metalang.met"
#line 100 "metalang.met"
                {
#line 100 "metalang.met"
                    store_comment_line(lexEl.length());
#line 100 "metalang.met"
                    lexEl.Erase();
#line 100 "metalang.met"
                    ptStockBuf = -1 ;
#line 100 "metalang.met"
                }
#line 100 "metalang.met"
            } else 
#line 100 "metalang.met"
#line 101 "metalang.met"
            if((((c == '\r'))&& NextChar())){
#line 101 "metalang.met"
#line 101 "metalang.met"
            } else 
#line 101 "metalang.met"
#line 104 "metalang.met"
            if((c != EOF)){
#line 104 "metalang.met"
#line 103 "metalang.met"
#line 104 "metalang.met"
                {
#line 104 "metalang.met"
                    lexEl . AddChar(c);
#line 104 "metalang.met"
                    NextChar();
#line 104 "metalang.met"
                }
#line 104 "metalang.met"
#line 104 "metalang.met"
            } else 
#line 104 "metalang.met"
             ;
#line 104 "metalang.met"
        } 
#line 104 "metalang.met"
#line 107 "metalang.met"
        } 
#line 107 "metalang.met"
#line 107 "metalang.met"
    } else 
#line 107 "metalang.met"
     ;
#line 107 "metalang.met"
#line 107 "metalang.met"
#line 109 "metalang.met"
    if ( lexCallLex) {PUT_COORD_AFTER_COMMENTS_CALL;
#line 109 "metalang.met"
    }line = oldLine;
#line 109 "metalang.met"
    LEX_EXIT(0,"")
#line 109 "metalang.met"
    lexEl.Value = -1 ;
#line 109 "metalang.met"
    return -1 ; 
#line 109 "metalang.met"
}
#line 109 "metalang.met"

#line 109 "metalang.met"
#line 43 "metalang.met"
int metalang::LexEndLine ()
#line 43 "metalang.met"
{
#line 43 "metalang.met"
    if ( lastContextPos && !lastContextPos -> nbRef )
#line 43 "metalang.met"
        FreePos(lastContextPos);
#line 43 "metalang.met"
    lastContextPos = (PFILE_POSITION)0 ;
#line 43 "metalang.met"
    if ( tokenAhead)
#line 43 "metalang.met"
        ExtUnputBuf();
#line 43 "metalang.met"
    #ifdef DUMP_COORD
#line 43 "metalang.met"
    if(!lexCallLex && dumpCoord) store_pos_as_comment(line,col,0);
#line 43 "metalang.met"
    #endif
#line 43 "metalang.met"
    
#line 43 "metalang.met"
    int _bidon = (oldLine = line,oldCol = col );
#line 43 "metalang.met"
    int _bidon1 = (oldLineEntry = line, oldColEntry = col );
#line 43 "metalang.met"
    tokenAhead = 0;
#line 43 "metalang.met"
    if(LexMeta() != -1){tokenAhead =4; return 1;}
#line 43 "metalang.met"
#line 44 "metalang.met"
    ptStockBuf = -1;
#line 44 "metalang.met"
    lexEl.Erase();
#line 44 "metalang.met"
    tokenAhead = 0;
#line 44 "metalang.met"
    if ( lastContextPos && !lastContextPos->nbRef) FreePos(lastContextPos);
#line 44 "metalang.met"
    lastContextPos = (PFILE_POSITION) 0 ;
#line 44 "metalang.met"
#line 45 "metalang.met"
    while ((! (((c == '\n')))) && 
#line 45 "metalang.met"
          (! (c == EOF ))) { 
#line 45 "metalang.met"
#line 46 "metalang.met"
        if (!(c != EOF&& NextChar())) ;
#line 46 "metalang.met"
    } 
#line 46 "metalang.met"
#line 47 "metalang.met"
    if (!(c != EOF&& NextChar())) ;
#line 47 "metalang.met"
#line 48 "metalang.met"
    {
#line 48 "metalang.met"
        firstOnLine = 0 ; 
#line 48 "metalang.met"
        tokenAhead =4;
#line 48 "metalang.met"
        lexEl.Value=END_LINE;
#line 48 "metalang.met"
        PUT_COORD_CALL;
#line 48 "metalang.met"
        return(1);
#line 48 "metalang.met"
    }
#line 48 "metalang.met"
#line 48 "metalang.met"
#line 48 "metalang.met"
    
#line 49 "metalang.met"
    line = oldLine;
#line 49 "metalang.met"
    LEX_EXIT(0,"")
#line 49 "metalang.met"
    lexEl.Value = -1 ;
#line 49 "metalang.met"
    return -1 ; 
#line 49 "metalang.met"
}
#line 49 "metalang.met"

#line 49 "metalang.met"
#line 112 "metalang.met"
int metalang::LexMeta ()
#line 112 "metalang.met"
{
#line 112 "metalang.met"
    if ( lastContextPos && !lastContextPos -> nbRef )
#line 112 "metalang.met"
        FreePos(lastContextPos);
#line 112 "metalang.met"
    lastContextPos = (PFILE_POSITION)0 ;
#line 112 "metalang.met"
    if ( tokenAhead)
#line 112 "metalang.met"
        ExtUnputBuf();
#line 112 "metalang.met"
    #ifdef DUMP_COORD
#line 112 "metalang.met"
    if(!lexCallLex && dumpCoord) store_pos_as_comment(line,col,0);
#line 112 "metalang.met"
    #endif
#line 112 "metalang.met"
    
#line 112 "metalang.met"
    int _bidon = (oldLine = line,oldCol = col );
#line 112 "metalang.met"
    int _bidon1 = (oldLineEntry = line, oldColEntry = col );
#line 112 "metalang.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 112 "metalang.met"
#line 113 "metalang.met"
    if (keepSpace){
#line 113 "metalang.met"
#line 114 "metalang.met"
        ptStockBuf = -1;
#line 114 "metalang.met"
        while ((c == '\r')||(c == '\n'))
#line 114 "metalang.met"
            NextChar() ;
#line 114 "metalang.met"
        ptStockBuf = -1;
#line 114 "metalang.met"
        lexEl.Erase();
#line 114 "metalang.met"
        tokenAhead = 0;
#line 114 "metalang.met"
        oldLine=line,oldCol=col;
#line 114 "metalang.met"
        if ( !lexCallLex) {
#line 114 "metalang.met"
            PUT_COORD_CALL;
#line 114 "metalang.met"
        }
#line 114 "metalang.met"
#line 114 "metalang.met"
    } else {
#line 114 "metalang.met"
#line 116 "metalang.met"
        ptStockBuf = -1;
#line 116 "metalang.met"
        while ((c == ' ')||(c == '\t')||(c == '\r')||(c == '\n'))
#line 116 "metalang.met"
            NextChar() ;
#line 116 "metalang.met"
        ptStockBuf = -1;
#line 116 "metalang.met"
        lexEl.Erase();
#line 116 "metalang.met"
        tokenAhead = 0;
#line 116 "metalang.met"
        oldLine=line,oldCol=col;
#line 116 "metalang.met"
        if ( !lexCallLex) {
#line 116 "metalang.met"
            PUT_COORD_CALL;
#line 116 "metalang.met"
        }
#line 116 "metalang.met"
    }
#line 116 "metalang.met"
#line 117 "metalang.met"
    switch (c) {
#line 117 "metalang.met"
#line 118 "metalang.met"
        case '$' :
#line 118 "metalang.met"
            NextChar();
#line 118 "metalang.met"
#line 120 "metalang.met"
#line 122 "metalang.met"
            if (! (((c == '(')))){
#line 122 "metalang.met"
#line 123 "metalang.met"
                while ((('a' <= c && c <= 'z')||('A' <= c && c <= 'Z')||('0' <= c && c <= '9')||(c == '_'))) { 
#line 123 "metalang.met"
#line 124 "metalang.met"
                    {
#line 124 "metalang.met"
                        lexEl . AddChar(c);
#line 124 "metalang.met"
                        NextChar();
#line 124 "metalang.met"
                    }
#line 124 "metalang.met"
                } 
#line 124 "metalang.met"
            } else {
#line 124 "metalang.met"
#line 126 "metalang.met"
#line 127 "metalang.met"
                 int nbPar = 0;
#line 127 "metalang.met"
#line 128 "metalang.met"
                {
#line 128 "metalang.met"
                    lexEl . AddChar(c);
#line 128 "metalang.met"
                    NextChar();
#line 128 "metalang.met"
                }
#line 128 "metalang.met"
#line 129 "metalang.met"
                while (c != EOF) { 
#line 129 "metalang.met"
#line 130 "metalang.met"
                    switch (c) {
#line 130 "metalang.met"
#line 131 "metalang.met"
                        case '(' :
#line 131 "metalang.met"
#line 132 "metalang.met"
#line 133 "metalang.met"
                             nbPar++;
#line 133 "metalang.met"
#line 134 "metalang.met"
                            {
#line 134 "metalang.met"
                                lexEl . AddChar(c);
#line 134 "metalang.met"
                                NextChar();
#line 134 "metalang.met"
                            }
#line 134 "metalang.met"
#line 134 "metalang.met"
                            break ;
#line 134 "metalang.met"
#line 136 "metalang.met"
                        case '\n' :
#line 136 "metalang.met"
#line 138 "metalang.met"
                            {
#line 138 "metalang.met"
                                firstOnLine = 0 ; 
#line 138 "metalang.met"
                                tokenAhead =5;
#line 138 "metalang.met"
                                lexEl.Value=META;
#line 138 "metalang.met"
                                PUT_COORD_CALL;
#line 138 "metalang.met"
                                return(1);
#line 138 "metalang.met"
                            }
#line 138 "metalang.met"
                            break ;
#line 138 "metalang.met"
#line 140 "metalang.met"
                        case ')' :
#line 140 "metalang.met"
#line 141 "metalang.met"
                            if (!nbPar ){
#line 141 "metalang.met"
#line 142 "metalang.met"
#line 143 "metalang.met"
                                {
#line 143 "metalang.met"
                                    lexEl . AddChar(c);
#line 143 "metalang.met"
                                    NextChar();
#line 143 "metalang.met"
                                }
#line 143 "metalang.met"
#line 144 "metalang.met"
                                {
#line 144 "metalang.met"
                                    firstOnLine = 0 ; 
#line 144 "metalang.met"
                                    tokenAhead =5;
#line 144 "metalang.met"
                                    lexEl.Value=META;
#line 144 "metalang.met"
                                    PUT_COORD_CALL;
#line 144 "metalang.met"
                                    return(1);
#line 144 "metalang.met"
                                }
#line 144 "metalang.met"
#line 144 "metalang.met"
#line 144 "metalang.met"
                            } else {
#line 144 "metalang.met"
#line 147 "metalang.met"
#line 148 "metalang.met"
                                {
#line 148 "metalang.met"
                                    lexEl . AddChar(c);
#line 148 "metalang.met"
                                    NextChar();
#line 148 "metalang.met"
                                }
#line 148 "metalang.met"
#line 149 "metalang.met"
                                 nbPar--;
#line 149 "metalang.met"
#line 149 "metalang.met"
                            }
#line 149 "metalang.met"
                            break ;
#line 149 "metalang.met"
#line 151 "metalang.met"
                        default : 
#line 151 "metalang.met"
                             if (c!= EOF) {
#line 151 "metalang.met"
#line 151 "metalang.met"
                                {
#line 151 "metalang.met"
                                    lexEl . AddChar(c);
#line 151 "metalang.met"
                                    NextChar();
#line 151 "metalang.met"
                                }
#line 151 "metalang.met"
                            }
#line 151 "metalang.met"
                            break ;
#line 151 "metalang.met"
                    }
#line 151 "metalang.met"
                } 
#line 151 "metalang.met"
#line 151 "metalang.met"
            }
#line 151 "metalang.met"
#line 154 "metalang.met"
            {
#line 154 "metalang.met"
                firstOnLine = 0 ; 
#line 154 "metalang.met"
                tokenAhead =5;
#line 154 "metalang.met"
                lexEl.Value=META;
#line 154 "metalang.met"
                PUT_COORD_CALL;
#line 154 "metalang.met"
                return(1);
#line 154 "metalang.met"
            }
#line 154 "metalang.met"
#line 154 "metalang.met"
            break ;
#line 154 "metalang.met"
    }
#line 154 "metalang.met"
#line 154 "metalang.met"
#line 156 "metalang.met"
    line = oldLine;
#line 156 "metalang.met"
    LEX_EXIT(0,"")
#line 156 "metalang.met"
    lexEl.Value = -1 ;
#line 156 "metalang.met"
    return -1 ; 
#line 156 "metalang.met"
}
#line 156 "metalang.met"

#line 156 "metalang.met"
/* 
-- 0 -- bidon
    META
    PLUS____TIRETIRETIRETIRETIRETIRE____
-- 1 -- parse_entry
    META
    IDENT
    DEFINE
    LEXDEFINE
    LANGUAGE
    DECLARE
    SEE
    TAKE
    NOT
    SEEL
    TAKEL
    IN
    AOUVAOUV
    POUV
    DEFAULT
    RETURN
    STORE_COMMENT_LINE
    SKIP
    REPLACETREE
    ADDLIST
    WITH
    WITHOUT
    REPEAT
    IF
    WHILE
    BEGIN
    CASE
    STOREL
    AT_BEGINNING
    RESETL
    FORGETL
    RECOVERL
    FORGET
    RECOGNIZE_STRING
    BREAK
    USE
-- 2 -- asit
    META
    AOUVAOUV
-- 3 -- condition
    META
    IDENT
    SEE
    TAKE
    NOT
    SEEL
    TAKEL
    IN
    AOUVAOUV
    POUV
    DEFAULT
-- 4 -- debut_proc
    META
    DEFINE
    LEXDEFINE
    AOUVAOUV
-- 5 -- declaration
    META
    DEFINE
-- 6 -- definition
    META
    LEXDEFINE
-- 7 -- end_key
    META
    END
-- 8 -- expr
    META
    IDENT
    NUMB
-- 9 -- func_call
    META
    IDENT
-- 10 -- func_follow
    META
    IDENT
    STRING
    NUMB
    PFER
    DIES
    EXCL
-- 11 -- gen_param
    META
    IDENT
    STRING
    TAKE
    POUV
    REPLACETREE
    ADDLIST
    DIES
    EXCL
    STRINGLEX
    MAKETREE
-- 12 -- grammar_use
    META
    USE
-- 13 -- langage
    META
    LANGUAGE
-- 14 -- main_entry
    META
    LANGUAGE
-- 15 -- maketree_follow
    META
    IDENT
    STRING
    TAKE
    POUV
    REPLACETREE
    ADDLIST
    DIES
    EXCL
    STRINGLEX
    MAKETREE
-- 16 -- one_condition
    META
    IDENT
    SEE
    TAKE
    NOT
    SEEL
    TAKEL
    IN
    AOUVAOUV
    POUV
    DEFAULT
-- 17 -- pattern_rec
    ALWAYS
-- 18 -- pretty::parse_entry
    META
    PLUS____TIRETIRETIRETIRETIRETIRE____
-- 19 -- see_follow
    META
    IDENT
    STRING
    DIES
    EXCL
-- 20 -- seel_stat
    META
    SEEL
-- 21 -- set
    META
    COUV
-- 22 -- storel_stat
    META
    STOREL
-- 23 -- take_follow
    META
    IDENT
    STRING
    DIES
    EXCL
-- 24 -- takel_stat
    META
    TAKEL
*/

signed char *metalang::_tokenArray [25] = {
    (signed char *) "\120\000\000\000\000\000\000\000\000\000\000\000\000"
    ,(signed char *) "\020\000\301\377\377\377\377\000\000\000\000\000\000"
    ,(signed char *) "\020\000\000\000\001\000\000\000\000\000\000\000\000"
    ,(signed char *) "\020\000\001\374\007\000\000\000\000\000\000\000\000"
    ,(signed char *) "\020\000\300\000\001\000\000\000\000\000\000\000\000"
    ,(signed char *) "\020\000\100\000\000\000\000\000\000\000\000\000\000"
    ,(signed char *) "\020\000\200\000\000\000\000\000\000\000\000\000\000"
    ,(signed char *) "\020\000\000\000\000\000\000\001\000\000\000\000\000"
    ,(signed char *) "\020\000\011\000\000\000\000\000\000\000\000\000\000"
    ,(signed char *) "\020\000\001\000\000\000\000\000\000\000\000\000\000"
    ,(signed char *) "\020\000\013\000\000\000\000\016\000\000\000\000\000"
    ,(signed char *) "\020\000\003\010\302\000\000\074\000\000\000\000\000"
    ,(signed char *) "\020\000\000\000\000\000\200\000\000\000\000\000\000"
    ,(signed char *) "\020\000\000\001\000\000\000\000\000\000\000\000\000"
    ,(signed char *) "\020\000\000\001\000\000\000\000\000\000\000\000\000"
    ,(signed char *) "\020\000\003\010\302\000\000\074\000\000\000\000\000"
    ,(signed char *) "\020\000\001\374\007\000\000\000\000\000\000\000\000"
    ,(signed char *) "\377\377\377\377\377\377\377\377\377\377\377\377\377"
    ,(signed char *) "\120\000\000\000\000\000\000\000\000\000\000\000\000"
    ,(signed char *) "\020\000\003\000\000\000\000\014\000\000\000\000\000"
    ,(signed char *) "\020\000\000\040\000\000\000\000\000\000\000\000\000"
    ,(signed char *) "\020\000\000\000\000\000\000\100\000\000\000\000\000"
    ,(signed char *) "\020\000\000\000\000\200\000\000\000\000\000\000\000"
    ,(signed char *) "\020\000\003\000\000\000\000\014\000\000\000\000\000"
    ,(signed char *) "\020\000\000\100\000\000\000\000\000\000\000\000\000"
};
typedef int (metalang::*(DEF_FUNC_TOKEN_ARRAY [25]))() ;
DEF_FUNC_TOKEN_ARRAY metalang::_tokenFuncArray = {
    /*bidon                          */(&metalang::Lex),
    /*parse_entry                    */(&metalang::Lex),
    /*asit                           */(&metalang::Lex),
    /*condition                      */(&metalang::Lex),
    /*debut_proc                     */(&metalang::Lex),
    /*declaration                    */(&metalang::Lex),
    /*definition                     */(&metalang::Lex),
    /*end_key                        */(&metalang::Lex),
    /*expr                           */(&metalang::Lex),
    /*func_call                      */(&metalang::Lex),
    /*func_follow                    */(&metalang::Lex),
    /*gen_param                      */(&metalang::Lex),
    /*grammar_use                    */(&metalang::Lex),
    /*langage                        */(&metalang::Lex),
    /*main_entry                     */(&metalang::Lex),
    /*maketree_follow                */(&metalang::Lex),
    /*one_condition                  */(&metalang::Lex),
    /*pattern_rec                    */0,
    /*pretty::parse_entry            */(&metalang::Lex),
    /*see_follow                     */(&metalang::Lex),
    /*seel_stat                      */(&metalang::Lex),
    /*set                            */(&metalang::Lex),
    /*storel_stat                    */(&metalang::Lex),
    /*take_follow                    */(&metalang::Lex),
    /*takel_stat                     */(&metalang::Lex)
};
int metalang::_tokenNbFuncArray [25] = {
    /*bidon                          */1,
    /*parse_entry                    */1,
    /*asit                           */1,
    /*condition                      */1,
    /*debut_proc                     */1,
    /*declaration                    */1,
    /*definition                     */1,
    /*end_key                        */1,
    /*expr                           */1,
    /*func_call                      */1,
    /*func_follow                    */1,
    /*gen_param                      */1,
    /*grammar_use                    */1,
    /*langage                        */1,
    /*main_entry                     */1,
    /*maketree_follow                */1,
    /*one_condition                  */1,
    /*pattern_rec                    */0,
    /*pretty::parse_entry            */1,
    /*see_follow                     */1,
    /*seel_stat                      */1,
    /*set                            */1,
    /*storel_stat                    */1,
    /*take_follow                    */1,
    /*takel_stat                     */1
};
int _arityNode_metalang[] = {   2 , 1 , 1 , 1 , 1 , 2 , -1 , 3 , 1 , 1 , 1 , 0
                              , 0 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , -1 , -1 , 4
                              , 4 , 2 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , -1 , -1
                              , -1 , 1 , 0 , 1 , 1 , 1 , -1 , -1 , 2 , 3 , 2
                              , 1 , 1 , 1 , -1 , -1 , -1 , -1 , 0 , 0 , 0 , -1
                              , -1 , -1 , -1 , -1 , 0 , 1 , -1 , -1 , 1 , 2 , 2
                              , -1 , 2 , -1 , -1 , 1 , 2 , 1 , 1 , 0 , 1 , 1
                              , -1 , -1 , 1 , -1 , 2 , 1 , 2 , -1 , 2 , -1 , -1
                              , -1 , 2 , -1 , 1 , 0 , 0 , 0 , 2 , 1 };

    
STRINGELEM * listConst_metalang;
PPTREE bri_parse_entry_metalang(int error_free) {
return metalang() . parse_entry (error_free);
}

int metalang::init = 0 ;

void metalang::InitConst()
{
    if (!metalang::init) {
        metalang::init = 1 ;
        
        STRINGELEM * inter = listConst;
        listConst = (STRINGELEM *) 0;
        AddConstVal("metalang::SET", 97);
        AddConstVal("metalang::INTER", 96);
        AddConstVal("metalang::FORGET_SYNTAXIQUE", 95);
        AddConstVal("metalang::RECOVER", 94);
        AddConstVal("metalang::RESETLEX", 93);
        AddConstVal("metalang::BEGINNING", 92);
        AddConstVal("metalang::DPOI", 91);
        AddConstVal("metalang::SWITCH", 90);
        AddConstVal("metalang::ELSE", 89);
        AddConstVal("metalang::THEN", 88);
        AddConstVal("metalang::UNTIL", 87);
        AddConstVal("metalang::WITHOUT_CONTEXT", 86);
        AddConstVal("metalang::DO", 85);
        AddConstVal("metalang::WITH_CONTEXT", 84);
        AddConstVal("metalang::COND", 83);
        AddConstVal("metalang::EQUAL", 82);
        AddConstVal("metalang::EGAL", 81);
        AddConstVal("metalang::IN_CONTEXT", 80);
        AddConstVal("metalang::CONTEXT", 79);
        AddConstVal("metalang::POIN", 78);
        AddConstVal("metalang::GLOBAL", 77);
        AddConstVal("metalang::GRAMMAR_USE", 76);
        AddConstVal("metalang::NIL", 75);
        AddConstVal("metalang::EXCLA", 74);
        AddConstVal("metalang::TOKEN", 73);
        AddConstVal("metalang::FUNC", 72);
        AddConstVal("metalang::CONSTANT", 71);
        AddConstVal("metalang::VIRG", 70);
        AddConstVal("metalang::CFER", 69);
        AddConstVal("metalang::TREE_ARITY", 68);
        AddConstVal("metalang::PVIR", 67);
        AddConstVal("metalang::AND", 66);
        AddConstVal("metalang::OR", 65);
        AddConstVal("metalang::ASIT", 64);
        AddConstVal("metalang::AFERAFER", 63);
        AddConstVal("metalang::COUV", 62);
        AddConstVal("metalang::MAKETREE", 61);
        AddConstVal("metalang::STRINGLEX", 60);
        AddConstVal("metalang::EXCL", 59);
        AddConstVal("metalang::DIES", 58);
        AddConstVal("metalang::PFER", 57);
        AddConstVal("metalang::END", 56);
        AddConstVal("metalang::USE", 55);
        AddConstVal("metalang::BREAK", 54);
        AddConstVal("metalang::RECOGNIZE_STRING", 53);
        AddConstVal("metalang::FORGET", 52);
        AddConstVal("metalang::RECOVERL", 51);
        AddConstVal("metalang::FORGETL", 50);
        AddConstVal("metalang::RESETL", 49);
        AddConstVal("metalang::AT_BEGINNING", 48);
        AddConstVal("metalang::STOREL", 47);
        AddConstVal("metalang::CASE", 46);
        AddConstVal("metalang::BEGIN", 45);
        AddConstVal("metalang::WHILE", 44);
        AddConstVal("metalang::IF", 43);
        AddConstVal("metalang::REPEAT", 42);
        AddConstVal("metalang::WITHOUT", 41);
        AddConstVal("metalang::WITH", 40);
        AddConstVal("metalang::ADDLIST", 39);
        AddConstVal("metalang::REPLACETREE", 38);
        AddConstVal("metalang::SKIP", 37);
        AddConstVal("metalang::STORE_COMMENT_LINE", 36);
        AddConstVal("metalang::RETURN", 35);
        AddConstVal("metalang::DEFAULT", 34);
        AddConstVal("metalang::POUV", 33);
        AddConstVal("metalang::AOUVAOUV", 32);
        AddConstVal("metalang::IN", 31);
        AddConstVal("metalang::TAKEL", 30);
        AddConstVal("metalang::SEEL", 29);
        AddConstVal("metalang::NOT", 28);
        AddConstVal("metalang::TAKE", 27);
        AddConstVal("metalang::SEE", 26);
        AddConstVal("metalang::DECLARE", 25);
        AddConstVal("metalang::LANGUAGE", 24);
        AddConstVal("metalang::LEXDEFINE", 23);
        AddConstVal("metalang::DEFINE", 22);
        AddConstVal("metalang::END_LINE", 21);
        AddConstVal("metalang::ASIT_CONTENT", 20);
        AddConstVal("metalang::NUMB", 19);
        AddConstVal("metalang::CHARACTER", 18);
        AddConstVal("metalang::STRING", 17);
        AddConstVal("metalang::IDENT", 16);
        AddConstVal("metalang::GOTO_REL", 15);
        AddConstVal("metalang::GOTO", 14);
        AddConstVal("metalang::STR", 13);
        AddConstVal("metalang::UNMARK", 12);
        AddConstVal("metalang::MARK", 11);
        AddConstVal("metalang::TAB_VIRT", 10);
        AddConstVal("metalang::TAB", 9);
        AddConstVal("metalang::NEWLINE", 8);
        AddConstVal("metalang::ATTRIBUTS", 7);
        AddConstVal("metalang::PLUS____TIRETIRETIRETIRETIRETIRE____", 6);
        AddConstVal("IN_LANGUAGE", 5);
        AddConstVal("META", 4);
        AddConstVal("PREPOST", 3);
        AddConstVal("POST", 2);
        AddConstVal("PRE", 1);
        AddConstVal("LIST",0);
        listConst_metalang = listConst;
        listConst = inter;
        AddLang("metalang",_arityNode_metalang,listConst_metalang,bri_parse_entry_metalang,97,(OVER_LANG *) 0);
        }
}

/*Well done my boy */ 
